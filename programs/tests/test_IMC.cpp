//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
    msg.setTimeStamp(0.08360153655667324);
    msg.setSource(34316U);
    msg.setSourceEntity(126U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(135U);
    msg.state = 204U;
    msg.flags = 196U;
    msg.description.assign("NLKARVTWWPGTXRNMCBSNECQADUIMDPZBMBZIJSWICRZHJVNZKSXIPTWAGIOLMAGFSBNDVNTXTOCNXDVNHETLOLJFXFMWQIYJDXLHYOFETFUESUBZVHTDUGBNDYSJRFWDIOQDSFAKOFOZGAJJXSVEMCUUWKLJYYRWCKQSVZQCJTLDUHYGBRYKKVY");

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
    msg.setTimeStamp(0.15357669252473405);
    msg.setSource(51893U);
    msg.setSourceEntity(175U);
    msg.setDestination(14235U);
    msg.setDestinationEntity(191U);
    msg.state = 96U;
    msg.flags = 227U;
    msg.description.assign("NSEYBRHOFYXFDXMWQZCSSVUVBJRBMJKSOWJNWJAKWUPCZZYEQNWMEHXETDQQAQATY");

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
    msg.setTimeStamp(0.7641253263210637);
    msg.setSource(14902U);
    msg.setSourceEntity(112U);
    msg.setDestination(6197U);
    msg.setDestinationEntity(221U);
    msg.state = 156U;
    msg.flags = 86U;
    msg.description.assign("XYKPSFBPNJDFXUGURG");

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
    msg.setTimeStamp(0.8346144692661601);
    msg.setSource(27748U);
    msg.setSourceEntity(214U);
    msg.setDestination(23766U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.6284844018451986);
    msg.setSource(43166U);
    msg.setSourceEntity(47U);
    msg.setDestination(11185U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.14572654813553365);
    msg.setSource(38898U);
    msg.setSourceEntity(115U);
    msg.setDestination(12580U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.11997820375768997);
    msg.setSource(37104U);
    msg.setSourceEntity(191U);
    msg.setDestination(45454U);
    msg.setDestinationEntity(60U);
    msg.id = 97U;
    msg.label.assign("IHSQPMIHABZWZTUNDIXLTZQSOJECQXOFZINMAUFDWHEVXGJWHMEGGCIAEMEVSTNRRYBEAMSGBYJOLEFWPVNLWRYLM");
    msg.component.assign("WKKWRKLBZNOFWOQFOJHMJFFHITKPFEQSNVPBINUCZSANXGRCDEORYCMQCUIVXYKVMQXXVMHGRVXIZBGSNRIFJYTABENKDYYSBQWSOEEHGLKBSLDKVCMQCMLWHGLDUMJVRRVPFCUIXEGTEAJGVPGTSOTAZXLTTEJCSLPYPINYGNPUZGDPDXXBWQDJF");
    msg.act_time = 46778U;
    msg.deact_time = 39307U;

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
    msg.setTimeStamp(0.22199874165728084);
    msg.setSource(38760U);
    msg.setSourceEntity(84U);
    msg.setDestination(14595U);
    msg.setDestinationEntity(86U);
    msg.id = 124U;
    msg.label.assign("HFANSHSDFLZRSNQYLOZKMLYE");
    msg.component.assign("UBNYXMBGXHQULKXMWSOVQNMAACTLBJUAADRZGHILBJITLBPNJDIDTGJQQPPOXCDARNKPJC");
    msg.act_time = 24697U;
    msg.deact_time = 46626U;

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
    msg.setTimeStamp(0.0329317131211887);
    msg.setSource(11305U);
    msg.setSourceEntity(206U);
    msg.setDestination(58208U);
    msg.setDestinationEntity(115U);
    msg.id = 245U;
    msg.label.assign("JTTBSHNEORYVYQETPMONBRCRXZJBVXXUTJCSIPQAMEZAN");
    msg.component.assign("VUMRHYPDJWQLPUUQP");
    msg.act_time = 41543U;
    msg.deact_time = 36777U;

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
    msg.setTimeStamp(0.95678516305387);
    msg.setSource(18488U);
    msg.setSourceEntity(146U);
    msg.setDestination(56900U);
    msg.setDestinationEntity(5U);
    msg.id = 52U;

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
    msg.setTimeStamp(0.11315974616267688);
    msg.setSource(538U);
    msg.setSourceEntity(239U);
    msg.setDestination(1929U);
    msg.setDestinationEntity(245U);
    msg.id = 215U;

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
    msg.setTimeStamp(0.6958426750956678);
    msg.setSource(48340U);
    msg.setSourceEntity(84U);
    msg.setDestination(34403U);
    msg.setDestinationEntity(221U);
    msg.id = 163U;

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
    msg.setTimeStamp(0.21407868357910786);
    msg.setSource(10129U);
    msg.setSourceEntity(12U);
    msg.setDestination(42665U);
    msg.setDestinationEntity(152U);
    msg.op = 19U;
    msg.list.assign("WWWDUNXYGPFEOJLRHQRVRYUZGHLNFSVRPJBOTXSFAVOFLSUICWGGOYJGJXFEKNJCTIJBKCPNXNRAWFOAMDSBXFRCCBHMQGZQYMIMNYTYUCWYONTQBMIKRZTPJMEQWB");

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
    msg.setTimeStamp(0.21027414360905372);
    msg.setSource(4480U);
    msg.setSourceEntity(98U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(15U);
    msg.op = 254U;
    msg.list.assign("YDTBSYNJGHYZRQJNHACFVUWQRKYYZVWFJOJONYNZPFTZQGUEKFJRBLOECXHIGMRVAYIMZOIEKXAMXXAZRVRPBPSSCUVYDJCIWOTADLQUQHLBTZWNOWBWNMACHKHIEWPF");

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
    msg.setTimeStamp(0.33728417501878816);
    msg.setSource(36885U);
    msg.setSourceEntity(205U);
    msg.setDestination(39412U);
    msg.setDestinationEntity(152U);
    msg.op = 115U;
    msg.list.assign("XLONRXMHWXYCAJGAGBWHSDDUPLIXVREATFENYNUEOIGGSWCTAZJRVSUAMOBQZYDPSOIPHYMVYLLLXUEXUJFF");

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
    msg.setTimeStamp(0.8992946386348935);
    msg.setSource(56986U);
    msg.setSourceEntity(109U);
    msg.setDestination(24327U);
    msg.setDestinationEntity(65U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.25981896444253916);
    msg.setSource(32646U);
    msg.setSourceEntity(15U);
    msg.setDestination(55651U);
    msg.setDestinationEntity(22U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.6313503902349318);
    msg.setSource(5101U);
    msg.setSourceEntity(163U);
    msg.setDestination(9707U);
    msg.setDestinationEntity(74U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.2805067088345431);
    msg.setSource(53961U);
    msg.setSourceEntity(169U);
    msg.setDestination(51426U);
    msg.setDestinationEntity(21U);
    msg.value = 170U;

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
    msg.setTimeStamp(0.8197831390830801);
    msg.setSource(38899U);
    msg.setSourceEntity(144U);
    msg.setDestination(62371U);
    msg.setDestinationEntity(192U);
    msg.value = 78U;

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
    msg.setTimeStamp(0.4651772605502168);
    msg.setSource(18633U);
    msg.setSourceEntity(222U);
    msg.setDestination(49213U);
    msg.setDestinationEntity(247U);
    msg.value = 252U;

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
    msg.setTimeStamp(0.7965135970640959);
    msg.setSource(40214U);
    msg.setSourceEntity(158U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(106U);
    msg.consumer.assign("JSWWNDXYEDMPDGAOKYKPOWAXOSXVUOKFCSOQHWMBCHTAMCTRVUXTXQXAMSERWPJPGMRDKDCLYDYNEI");
    msg.message_id = 2789U;

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
    msg.setTimeStamp(0.9956944440019669);
    msg.setSource(3682U);
    msg.setSourceEntity(176U);
    msg.setDestination(56255U);
    msg.setDestinationEntity(205U);
    msg.consumer.assign("RHURCKGTAZEFJEBVNDGWGEKJKOMHZCYVFMTXJENLSXGXIXJILMDHSGINHDWGIOXYVTYQHFITJGCRBFIFGWRCDWIGLDBYKVOCOFPVDAURCTMCYMDSOIKTFHQWEVHUNAZCDOONLYNZBESCQEVVTOCHAMPPKNZXLJPUOABHAQTWVUXFEQP");
    msg.message_id = 38573U;

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
    msg.setTimeStamp(0.7930989005859717);
    msg.setSource(29078U);
    msg.setSourceEntity(11U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("CULJGMGOGXSYSOWMNTUWAXHUXWIQAXQYVXGOQKOQZQRNMNRPEOSXYBRCWIJLTUHWWILPYVCARDKVJGOCGVW");
    msg.message_id = 14081U;

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
    msg.setTimeStamp(0.3090128354519943);
    msg.setSource(10602U);
    msg.setSourceEntity(69U);
    msg.setDestination(41618U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.6556636885734726);
    msg.setSource(35515U);
    msg.setSourceEntity(90U);
    msg.setDestination(62934U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.27681986108883194);
    msg.setSource(52923U);
    msg.setSourceEntity(66U);
    msg.setDestination(7906U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.13822575529750203);
    msg.setSource(39170U);
    msg.setSourceEntity(52U);
    msg.setDestination(53996U);
    msg.setDestinationEntity(23U);
    msg.section.assign("IPOBAJHNHRXUTBKRIFZEEPAFIYJIIBFHSTMSAZKMQTGJ");
    msg.param.assign("XEPJZQWYWQAQVHKFUEFLAEEJLTWSZGCACFPTEDXXHYEBYMICBVLXPVTVURGNWBYIVEGAZPQNIDDFPIGQZSRJMXIHFVPDHNLNNTFXLCNZAKLSQMHGUIJZDOLCIGCGOMECUFKCUNKYDPIMGEQSSADHJTKGOLEUQKTOLWTXYHYSIBIAJRBDRUWXKR");
    msg.value.assign("WEHSVFBQXGNKQULLAOPJFWZEUYYIXDWSZGRPAJIJFFZGAGTTMHLRUXPEOVKAEJETJDIDTGBJFEUHNMCNDSSROVCZJERGBPQYSDBMMYOZHQVXBAPLRRWSIQLXMGREOOILZCBKPUUEOZPWBV");

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
    msg.setTimeStamp(0.31146108014494567);
    msg.setSource(62281U);
    msg.setSourceEntity(68U);
    msg.setDestination(48015U);
    msg.setDestinationEntity(11U);
    msg.section.assign("UAXQIXUPSXLBAWABFINKCIOANQAZLNOUWOOWQXVZNUVJUDBYWQAKELOTAKJMSFTAJEREEJDHIDSGMCGITTSUBBOMOSHRLDFKWRE");
    msg.param.assign("OLRPDLUWZXPIDWDOVCOSOUIORCRLBXIRTQPXGFHKOAFENTKHRNCXMDGKNRLGFRLHAYCKVKALFVLPMDQDTAYGMUXUDSJBIWAUYQHYBIWKGNXHJKXPLVEFATKBZJIVGOEYVAJHWJTSEJGPERFNEUNJLMVZMYWMBFCSSNJBRASOYTQQQHMNOMTJSWTQNJCHWBPPTDBZCEUXIQZAZCQFVIIZZGRSDIGVMXTVSWWKU");
    msg.value.assign("XOGTVOKPTMAMZDBVQWSPUINRRQYNJTLLUGEYFVTZBPPGSFLJHMKRBDPUZEQUCCFQZKWZTOIKSHNIERFGRMKHPJWVYLDLUBMHQWQCXAAGJEWMUASFLBRSWKJXOIRXDNUDFABQTIEFSKDVXARDJCGVSCQOVEORLAZTGHEMNTOXMLXFMCXMFUHKBIASCADRJHCJVNEESCSYUBIQIHBYLNPOPAHWUYCHKJTDTQOWZGYYZNVWFZI");

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
    msg.setTimeStamp(0.6181527206484294);
    msg.setSource(19971U);
    msg.setSourceEntity(126U);
    msg.setDestination(43609U);
    msg.setDestinationEntity(209U);
    msg.section.assign("VQGYVBVHSXRNLNI");
    msg.param.assign("OYZYJEFXRGXLTUYSIFYLNEUWITPLUGTZODDXFQOWEMCDXMOYJBWGLWGUVUFERMWSOHTSIJBCHGBXYQNNKOMJPWRTSDZCCRFBV");
    msg.value.assign("DITKSKVWMOBKHYTPGXCEJLZECWFOOPXAAQIRVYUIRXZOOWUNYSAJBPOOYUMKXFUVQARHKSUECERQENBTKOAJBK");

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
    msg.setTimeStamp(0.42710946388760795);
    msg.setSource(35241U);
    msg.setSourceEntity(176U);
    msg.setDestination(42113U);
    msg.setDestinationEntity(104U);
    msg.op = 91U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("PGFJHCOWKVKJURYGVBVXJF");
    tmp_msg_0.param.assign("XUDYSKUZYZPAZOCKFPRSBFKRDLGWFCJIQEOJZADOQALPLTIMAWQSXXLJTIRWIEVSRWJCODKYSRBFNMIFLIBHKDBJBOHYUMSEXXFQFVNZPNKGSFVHUXWGL");
    tmp_msg_0.value.assign("HJGBXQWVVVCPXEBCENZFQCRVRLUOMTSDGHLKZDDYQPEGJALKRXIMEEMWESDFXGHYRUCMQIMFODAWGAEKYCHOKLLNYJFYLLUXYVOITUQKNWTITOVSZMUXVGKTPLGSOAAWFXVHINZURBWLEUNKNBPMAVWTPQFSFBR");
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
    msg.setTimeStamp(0.48287514498419504);
    msg.setSource(35705U);
    msg.setSourceEntity(183U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(157U);
    msg.op = 149U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IXBBRILAVHJAZWDEWRCZXGVNAOPSPAYWRBYGDKVZBGDZFOAGUNVULBFXYVORITHJBFJKMSWKJTEACWWQZIDICELYLCMFMBWZWBGHMNUQECU");
    tmp_msg_0.param.assign("JKZZIAOUKUGWYRXUHGWSVFXTDZPQSNBBLKBUMJCZNUKUXAVIGABDJXSTEGJGKWOMZPPPMHWXQQCHHESZGRWMFSOLHQWODJWYIVWLRMDXDBBOLJAKPLQAVTDVCYBTYNSAEYNWUHNWUSODKFVOPTCUELGFDZPIEFRGCJVYAQRETONZEIIYORVAPKRYXHJMCHQBERJZUIDHGZXCKACOFYMCN");
    tmp_msg_0.value.assign("DAOJGNGCIFVOLLNSSMZPKPPQQNMPIQEYSSSJLPZGKAKDYJKQMZVJIVERSGYCGAORSHVEWHIWFUTACSCEOPBYPEFYHHRHNSSIUEMTAQUPWYLBZWYNATKDZVZTHGGYETFANLKVGUXKDBBJDBDBNUDIREQKVLMRTCZLRRIWAWRIFEJUMCMLVOUOKXAMRWCDOUCTZJFFURWXYFOLIDFPFNPHVGHKJQDAHXXQTWZNXBJOOUJLXGHWTYZMVNXBX");
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
    msg.setTimeStamp(0.12625446124927375);
    msg.setSource(3330U);
    msg.setSourceEntity(48U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(217U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.6265555632146576);
    msg.setSource(65012U);
    msg.setSourceEntity(217U);
    msg.setDestination(55188U);
    msg.setDestinationEntity(8U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.4156996108959291);
    msg.setSource(59423U);
    msg.setSourceEntity(108U);
    msg.setDestination(23791U);
    msg.setDestinationEntity(187U);
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
    msg.setTimeStamp(0.49185718648058063);
    msg.setSource(2364U);
    msg.setSourceEntity(27U);
    msg.setDestination(3480U);
    msg.setDestinationEntity(162U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.6354888159424944);
    msg.setSource(5996U);
    msg.setSourceEntity(105U);
    msg.setDestination(25585U);
    msg.setDestinationEntity(180U);
    msg.total_steps = 22U;
    msg.step_number = 200U;
    msg.step.assign("VZCXAMUTIWPEDPRWQYMIAFLWIRILQJYIVGUGVBLKUHYKXAWOJMYNIDFWIBPMXUMXLQJRXTACOTSKZBKUFFFRSQVOGEOEJQSFTOHCHPVCPJKONXMZQCAZQTYDQZLXSLODGAEAHZDBPZCHLNYAVPGKFTMHZHPSXXYFSOWMJNVAWQTNKERMJIPUISDGJNRWNCGYKTAUBMXSYVSBVCRRWBOSERBCTHLBGZCUNUQINKEUNDLZRDEFGOHJTVFHGDP");
    msg.flags = 106U;

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
    msg.setTimeStamp(0.3138458092764612);
    msg.setSource(4637U);
    msg.setSourceEntity(249U);
    msg.setDestination(63835U);
    msg.setDestinationEntity(212U);
    msg.total_steps = 76U;
    msg.step_number = 76U;
    msg.step.assign("SQHBAOATUXSKCYKLFOSYXHCFGLPUWZOQPDJNUPZMDRGUSGHIWVKWZMMKXZJUUEMBZQLKFNBIXWVTSEATICLWUOIPMABRAOATIBRVHTZLEVFYHKKNFEBOJLFISXXPJXOXCDLHNGCCUGRLGRQB");
    msg.flags = 150U;

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
    msg.setTimeStamp(0.466958010231297);
    msg.setSource(60881U);
    msg.setSourceEntity(217U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(232U);
    msg.total_steps = 132U;
    msg.step_number = 115U;
    msg.step.assign("TCCQTILPFZHWKNDHQEVSGBOXWJSSURLSGLWTBDEZTKWJUXDKBHJIHLAWNKPWXUMCMFCLNGQMNAHEHORAVZDMGZRFJJCMPXPESYOGONDFMZIXKSEJKJVAODZKWWICGYSFGUOXBWMCBRLILUCSVQRVAOIINXRBBSDAEKBBLT");
    msg.flags = 116U;

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
    msg.setTimeStamp(0.7363580863204101);
    msg.setSource(48416U);
    msg.setSourceEntity(125U);
    msg.setDestination(6573U);
    msg.setDestinationEntity(173U);
    msg.state = 9U;
    msg.error.assign("WPYMLWNSRHGVPAUKVWJFBFIDFHZOTINICSEVYZELJJAYDGEULMZIRXUCWSXYMAMTHNZQOUDLUQHYP");

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
    msg.setTimeStamp(0.7136608742007461);
    msg.setSource(59136U);
    msg.setSourceEntity(162U);
    msg.setDestination(12742U);
    msg.setDestinationEntity(117U);
    msg.state = 147U;
    msg.error.assign("CPBNZMIRDLQKWDDZGDDKIJVZAETRZVFXMCVLATZKISFKUSTXCAZKPKQDIYQOXDQHSRQIYYJFEOJYSBHGXRPTTEPFOLWMHBQAWPNAZOGROTFWFNYUBDJWYIRTVUIVUGASLPCHGNXMYJGVLKFRUBDIEIE");

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
    msg.setTimeStamp(0.6206883995749604);
    msg.setSource(27820U);
    msg.setSourceEntity(3U);
    msg.setDestination(6205U);
    msg.setDestinationEntity(60U);
    msg.state = 159U;
    msg.error.assign("MFJPQOXYPIIOCOYISBZIHKFSRQXTLAEVHAGBGKUHVGDGHQKDYZNWFGTTOCSXHWLTJLQMJWKYVOJHIEEOIOFENZMFCWDMWOHPLRMRNXSARNEEUVDWIDKEMOOUCCPVBAMBRTLGAZVCXNUDYHPYUTFXHVEIBSBLSTKQVJBUXWCHRLDNFKAXYFLICSRULRJUGWZWAPAQGNNNTPDXGRQZGCZVZPJCQ");

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
    msg.setTimeStamp(0.12978887534196515);
    msg.setSource(48210U);
    msg.setSourceEntity(253U);
    msg.setDestination(31168U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.14398689783363705);
    msg.setSource(37444U);
    msg.setSourceEntity(215U);
    msg.setDestination(47333U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.11306242854394777);
    msg.setSource(10523U);
    msg.setSourceEntity(191U);
    msg.setDestination(63573U);
    msg.setDestinationEntity(27U);

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.15015520766978085);
    msg.setSource(42997U);
    msg.setSourceEntity(179U);
    msg.setDestination(45772U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.619364758823312;
    msg.lon = 0.6079519503352896;
    msg.height = 0.1704469081647424;
    msg.x = 0.24926462184097908;
    msg.y = 0.49586135263455045;
    msg.z = 0.1578083223716219;
    msg.phi = 0.9358168316737442;
    msg.theta = 0.03291719106623048;
    msg.psi = 0.924933129541763;
    msg.u = 0.7885598836233075;
    msg.v = 0.18251970946633245;
    msg.w = 0.9145769781120021;
    msg.p = 0.16020836540653538;
    msg.q = 0.23757197525247686;
    msg.r = 0.6584675631762378;
    msg.svx = 0.16240022734970327;
    msg.svy = 0.8166919312594387;
    msg.svz = 0.9883882180580122;

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
    msg.setTimeStamp(0.7986727401872289);
    msg.setSource(3348U);
    msg.setSourceEntity(233U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.8978328486325358;
    msg.lon = 0.13630904512913877;
    msg.height = 0.7667532020269435;
    msg.x = 0.6307919354382197;
    msg.y = 0.8530553622978773;
    msg.z = 0.3674911685613327;
    msg.phi = 0.7154026445247027;
    msg.theta = 0.5463139051650429;
    msg.psi = 0.0703502542690786;
    msg.u = 0.656858018681018;
    msg.v = 0.0887155885338674;
    msg.w = 0.8667083385485083;
    msg.p = 0.43989385722664676;
    msg.q = 0.533759710921611;
    msg.r = 0.22015736641184702;
    msg.svx = 0.057070079296053566;
    msg.svy = 0.7438212085966266;
    msg.svz = 0.7401121230955674;

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
    msg.setTimeStamp(0.5956545700689875);
    msg.setSource(29728U);
    msg.setSourceEntity(235U);
    msg.setDestination(28114U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.9517299508009468;
    msg.lon = 0.3679088532721334;
    msg.height = 0.8948497811706422;
    msg.x = 0.2863130143987056;
    msg.y = 0.34529664927623804;
    msg.z = 0.12472664180168325;
    msg.phi = 0.6488102381962995;
    msg.theta = 0.761184520709333;
    msg.psi = 0.16274621563021285;
    msg.u = 0.49369384661009574;
    msg.v = 0.22394358896610334;
    msg.w = 0.8076608101812799;
    msg.p = 0.7350497902590568;
    msg.q = 0.6455846601215975;
    msg.r = 0.5642123737341245;
    msg.svx = 0.4167405146575367;
    msg.svy = 0.20564777968677173;
    msg.svz = 0.4870859020547901;

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
    msg.setTimeStamp(0.261032339894428);
    msg.setSource(19343U);
    msg.setSourceEntity(190U);
    msg.setDestination(54470U);
    msg.setDestinationEntity(121U);
    msg.op = 139U;
    msg.entities.assign("UJMADGHXDUWPRCVKUWMZAFQETGMEBOXEKHNTXGENFOEYHIGAAXFQYFMICDHTOOASVINMFUMLWKCNIPXXEZYWSBDYTTQYKYBBCLBBIVQPVXCSROIZSHDLKJWHWDQTQSZQXFZTRTAP");

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
    msg.setTimeStamp(0.2616102612758858);
    msg.setSource(9872U);
    msg.setSourceEntity(8U);
    msg.setDestination(2695U);
    msg.setDestinationEntity(89U);
    msg.op = 218U;
    msg.entities.assign("NAQESCDAERAZVEMNVFKBOPBYBRWPJQQACYGUQJMIHXUHIYYQBFLDRCEFLWWLSEZDHDDTPGLIIWLYORPNJXQOEODZCPJJGVUMWUYSVJDIBQLDXVWMGMYQEU");

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
    msg.setTimeStamp(0.45447052056550385);
    msg.setSource(10075U);
    msg.setSourceEntity(254U);
    msg.setDestination(45576U);
    msg.setDestinationEntity(68U);
    msg.op = 122U;
    msg.entities.assign("IPNQLUUIRFLOZEFIFJYHUADCSZBCUMQRCVDTCOBLKEYOSWFCZVPSEDUELDOSONMXWTCZQPPQJJYJUVCWJLDDOPCGYFGAVGQWDMZFIMXTRAWNZNNJMYJPBBMVWBAUCZAGHMPHKTSRNFSVVOYXZXMGEBXELGGDKKHBTIBQBGAGKXZVCJVTYJYRWIRNWBUTHILAFKNTNGOFEMKRXOEFQEYITHSUUELIX");

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
    msg.setTimeStamp(0.9260338760848258);
    msg.setSource(9832U);
    msg.setSourceEntity(78U);
    msg.setDestination(50686U);
    msg.setDestinationEntity(235U);
    msg.type = 194U;
    msg.speed = 36254U;
    const char tmp_msg_0[] = {-35, -74, -109, -72, -47, -14, 65, -17, -66, 116, -127, 23, 4, 113, -51, -34, 28, -43, -56, 50, 6, -2, 34, -79, 24, -93, 86, -4, 12, 49, 46, 72, 118, -128, 21, 10, 40, 11, 26, -114, -33, 88, 72, -29, 107, 71, 50, 18, 121, -41, 40, -1, -125, 4, -126, 121, -62, 116, -74, -29, 80, -52, 46, -18, 117, -71, 41, -40, -61, -46, 81, 9, 103, 113, -55, -48, -21, 50, 56, 4, -33, 2, 6, 73, -101, 111, 94, -41, -18, 0, 78, 74, -50, 89, -77, -128, 115, -76, -39, -86, 48, -5, 47, 65, -110, -90, -121, 15, 87, 60, 43, -58, -112, -74, 93, -15, -7, 83, 100, 91, 117, 68, -63, -49, -68, -43, -3, 48, -38, 122, 91, 82, -124, -73, -43, 89, 60, -52, 22, -127, -21, -23, 86, 111, 125, 9, 55, 10, 10, -17, -17, -77, -2, -117, 125, -59, 32, 117, -62, 68, 115, -92, 105, 76, -80, 73, 50, 29, -34, -33, -92, -51, -29, 74, -8, -55, -105, 60, -107, -31, 73, 68, -32, -90, -50, -48, 96, -41, -86, -34, -6, 17, -40, 46, 76, -12, 11, 57, -31, -94, 0, -82, -11, -126, 98, 16, 36, -62, -120, 57, -76, -19, 0, -127, 40, -77, -81, -4, 121, -31, 95, -6, -41, -27, -103, 36, -125, 126, -16, -98, 81, -56, -127, 89};
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
    msg.setTimeStamp(0.7365256409792412);
    msg.setSource(63022U);
    msg.setSourceEntity(70U);
    msg.setDestination(11607U);
    msg.setDestinationEntity(79U);
    msg.type = 41U;
    msg.speed = 16324U;
    const char tmp_msg_0[] = {-9, -83, -87, 52, -36, 62, -27, 91, 120, -67, -128, -58, -83, 95, 51, 63, 112, -7, 76, 125, 46, 15, 11, -56, -71, -93, -78, 50, 34, -93, 101, -124, -21, 51, 57, 98, -70, 108, 100, 82, -88, 50, -90, 36, -34, 38, 17, 46, -36, 84, 4, -47, -32, 104, 114, 113, 27, -53, 33, 19, -114, -126, 29, 23, 69, 22, -117, -6, -68, 111, 5, -7, -85, -34, 120, 68, -91, 42, 45, -108, 121, 55, -33, 107, -56, 89, 29, -108, 20, -21, 108, -44, -70, -65, -73, -62, -89, 98, -23, -37, 60, -4, -71, -115, 74, 103, -93, 42, 6, -39, 62, 72, -28, 51, -7, -111, -8, -54, 31, -92, 19, 73, 46, 95, -43, 125, -62, -111, 2, -37, 109, 8, -39, -100, -82, 25, 95, 30, -99, -117, -118, -62, -75, -100, -72, 9, 10, -30, -65, 89, -18, -112, 113, -11, -59, 37, -83, -128, 100, -115, -16, 80, -86, -37, 96, -106, 14, -122, -119, 66, 15, -117, 81, -74, -88, 8, -99, 74, -35, 42, -122, 88, -5, -15, 88, 111, -26, -118, -71, -63, -69, 40, -77, 18, -108, 30, -91, 24, 36, 47, 106, -57, -102, 38, -89, -80, 22, -15, 50, 111};
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
    msg.setTimeStamp(0.8586639779978172);
    msg.setSource(14629U);
    msg.setSourceEntity(72U);
    msg.setDestination(7434U);
    msg.setDestinationEntity(38U);
    msg.type = 64U;
    msg.speed = 58806U;
    const char tmp_msg_0[] = {93, -63, 3, 103, -122, 54, 49, 83, 99, -26, -54, 59, 101, -85, -44, 86, -117, 83, 41, 68, -30, 88, 26, 17, 14, 74, 51, -127, 44, -60, 58, 95, -10, -84, -123, -96, -33, -98, 86, 1, 120, -15, -4};
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
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.5186708757155045);
    msg.setSource(24831U);
    msg.setSourceEntity(115U);
    msg.setDestination(56756U);
    msg.setDestinationEntity(22U);
    msg.available = 690034640U;
    msg.value = 172U;

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
    msg.setTimeStamp(0.8113607043974522);
    msg.setSource(33677U);
    msg.setSourceEntity(235U);
    msg.setDestination(30588U);
    msg.setDestinationEntity(84U);
    msg.available = 289538036U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.47332116637593946);
    msg.setSource(54662U);
    msg.setSourceEntity(70U);
    msg.setDestination(59711U);
    msg.setDestinationEntity(67U);
    msg.available = 219683204U;
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
    msg.setTimeStamp(0.9174119867385626);
    msg.setSource(56654U);
    msg.setSourceEntity(49U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(95U);
    msg.op = 161U;
    msg.snapshot.assign("WQLKHVLTIZQEIEPMMACIVYWNEBGAUDQIFNUOGCWTQDMZNGQMGOKJLSUXJWRPYWZGGPLTNG");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.18485297783635346;
    tmp_msg_0.x = 0.30956200884975615;
    tmp_msg_0.y = 0.35345317001147347;
    tmp_msg_0.z = 0.054112006433747695;
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
    msg.setTimeStamp(0.9245554564202778);
    msg.setSource(23649U);
    msg.setSourceEntity(163U);
    msg.setDestination(14480U);
    msg.setDestinationEntity(220U);
    msg.op = 253U;
    msg.snapshot.assign("BLITUVPASCNTRNDFAXPLVFHQOJADKQNELZUUTACZLKHMRUJKFECTJZBOJPBYKVONWXGDPTEOYZHKISQ");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.4557854910501067);
    msg.setSource(6987U);
    msg.setSourceEntity(195U);
    msg.setDestination(15U);
    msg.setDestinationEntity(246U);
    msg.op = 85U;
    msg.snapshot.assign("YQNWBPPLZWDGYHERDSYCLHQGEEM");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 45U;
    tmp_msg_0.zoom = 164U;
    tmp_msg_0.action = 206U;
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
    msg.setTimeStamp(0.5896706020980805);
    msg.setSource(5528U);
    msg.setSourceEntity(139U);
    msg.setDestination(14033U);
    msg.setDestinationEntity(191U);
    msg.op = 210U;
    msg.name.assign("GBDEEBXCFHWPPQYXVRJZOYPODBVNLR");

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
    msg.setTimeStamp(0.5206285645718215);
    msg.setSource(64536U);
    msg.setSourceEntity(170U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(249U);
    msg.op = 47U;
    msg.name.assign("CTWEZYWCVKGBZDNCFIDNMUHANRIJQTRBMZMYDBRGVUSEBLOWGCJASFLFIHFXYRMYKLWNPSJEJOCQINDTQQEVIAXDKHJYOZCOPELHOMPMNEUEVWMUTGGWP");

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
    msg.setTimeStamp(0.04411142129409906);
    msg.setSource(49887U);
    msg.setSourceEntity(88U);
    msg.setDestination(5022U);
    msg.setDestinationEntity(54U);
    msg.op = 165U;
    msg.name.assign("TWBLOTNEBXSAPIGRZFXTIFXMXOCOSNKLQZBGLAJHPJEAAMRVNTRQTPNAIEPOZNWAWKWASZGKYMZKTOCFMHKPHEOVICLKOLEDUQJDYHVCJRWDRVMZVUGDYWRAEZRMIXPJYT");

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
    msg.setTimeStamp(0.39978474154499244);
    msg.setSource(32498U);
    msg.setSourceEntity(208U);
    msg.setDestination(21317U);
    msg.setDestinationEntity(237U);
    msg.type = 49U;
    msg.htime = 0.3497233770805934;
    msg.context.assign("DWJKUZXSACTEVFKUEIOTWQHVVKOEKNLHCJELQZQJVIJXBGWZSYRPLGZEALKPSHOOQREARHHWFPFDOYUCAKORFIOOKXGIZUHTPIDTVAQQAGHFGXDLUMBQXNHFCMZTLGBNDBHGCYMRRQFWIFVWMMN");
    msg.text.assign("NGRRBDFLGQRPCLMSBCGOANCLSLMXHSHCTDZEYOQFNETWQNDDLKZWWBJOWPYYVIWIUPKVPHHUEUKMZCHMOGFRFEEDURHYAMZLQZGNUIEVREDJYXUTVRKPCRIJTBHHWFXMCISAMCJWIGGXFOYPWKVLDOZTTSOPYIXJLGVUCOZBGSDAOPFSCKANB");

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
    msg.setTimeStamp(0.3238091106307266);
    msg.setSource(12560U);
    msg.setSourceEntity(73U);
    msg.setDestination(45861U);
    msg.setDestinationEntity(222U);
    msg.type = 175U;
    msg.htime = 0.3826629575897922;
    msg.context.assign("MZPSUYUGHRUSGNSILHLXQGUFWDIVRQSBKGSNQEZAJYDULREPLTSHJUKWXWXKXPOMRAMWYIWGOADEGIZPBCDOSFVVCZLRZOKIMVZJNNPMCQIETRSWERNYQJZDDEAMMPNRIHYBNFNJYGPI");
    msg.text.assign("GUFJFZRSUESKRPJHEJZRWAYERYRROZCLVIWSJZCJQMCQPDHJOXQDREFMSLITKTMNNQGPKHXAIEQVQLMFZFZUSFBCMXYMEIBHKHNPB");

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
    msg.setTimeStamp(0.04388239915359293);
    msg.setSource(6505U);
    msg.setSourceEntity(14U);
    msg.setDestination(30394U);
    msg.setDestinationEntity(165U);
    msg.type = 253U;
    msg.htime = 0.051297044097566635;
    msg.context.assign("DPVAFFOGELWOMOERUUACBSUMYBTZBRNLNZHKDXKHYJXVWNXPQIKYHHCTEHHFZJDNSAGDBJMSJEDVSSLWITQPMUSEEZBOUSPBCPUOSKGEPJJPVMAXXKUDOVXJBMIZSA");
    msg.text.assign("NXWOOUTRRMTJUKCYTKVQTWOKRMKOJZXQCILVIHPVQHCCUWCAYEAOBIYGRCSGNEMQVXGKYJAGESNZXDCVQSNDNIMIBURLQNAFBDLYHGIXPAUPWJZKFFJEVTGMDFZEYIYTMHLGBVBPEXVDT");

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
    msg.setTimeStamp(0.8501323304308406);
    msg.setSource(37810U);
    msg.setSourceEntity(222U);
    msg.setDestination(43873U);
    msg.setDestinationEntity(216U);
    msg.command = 214U;
    msg.htime = 0.5600367177928669;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.htime = 0.3711099940892989;
    tmp_msg_0.context.assign("QPIOAVXQFVRJAKFELJFGAEDNOYJCTSNEQMHZIZZUCPZTIOXHNOWSAAZODYPDRMXHNPJBARMQKEXPBMFQDNGHMWZADHPBSXCRDTFVSPHETIHFOKYHOXMIJJUFWMZQQLTVILCJRDRQOWKSTIYGWLGJTSBEVNYANBFWHKVGTOBLIECNXUCUSUMJFBDCSKXG");
    tmp_msg_0.text.assign("DWRTXSICJQIOWBVFXMULNZXUQVCUDEBQEMDVMYRASZAJKNLNZQGIHFDYFBMTUAWQRPHPJWLJMVWKBZMTJHVBSATBXYLJKGVCQGORWDSEZTEKESZJKIXCOEICVXZQVJZFACNIGJLNHDHBHMRHGAOSNVLFWIFDBIENOBSUNZWYUSUQSXHXMPGPLPVGUAPKYOCXTCUHUYRKOARFPTMEYKDHAL");
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
    msg.setTimeStamp(0.31590746710279594);
    msg.setSource(7989U);
    msg.setSourceEntity(161U);
    msg.setDestination(20580U);
    msg.setDestinationEntity(19U);
    msg.command = 56U;
    msg.htime = 0.27642242809260187;

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
    msg.setTimeStamp(0.7985047128441123);
    msg.setSource(23843U);
    msg.setSourceEntity(138U);
    msg.setDestination(1355U);
    msg.setDestinationEntity(160U);
    msg.command = 31U;
    msg.htime = 0.5012604303363954;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.htime = 0.44973102377003527;
    tmp_msg_0.context.assign("DNBZETERBNZJUQEYWODJESJNMSGKPJFXUEJPFYDUVXVTWCDYNXHVXEFPAPUORDHFLQKLNSHBSYOZRBRKXMLUHABDVVZSTUVJIGZKZLZTWTRDQHJKWTOIAGRZQCNFBIXQMFZNOMYTTCPGINNDHIBQFSUWXRVAJTCKZXKBECEQQRKAFLBYUCWVXYSRSADMCMYLHCMJKJLSCSMPHGGFUQAGCBQVMPWAHIOHFXLPOWOKNGTRLYEI");
    tmp_msg_0.text.assign("HYTAEKXBHSXRGJLHGUAZVLIUBMZYQQCKRBJSWJCORMPUICFNBDWHPVGZNEEQQTCPVTWJZTZCHRSPKCWTILRAIVOGYDDDBXPMWAFNNYBN");
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
    msg.setTimeStamp(0.13995186490204448);
    msg.setSource(2885U);
    msg.setSourceEntity(6U);
    msg.setDestination(52388U);
    msg.setDestinationEntity(199U);
    msg.op = 127U;
    msg.file.assign("RUTCPNTGTXEFPWRZOSEYSBAXCBMGLJIGGFXLPAFHVKMHUZOGT");

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
    msg.setTimeStamp(0.3845975071070945);
    msg.setSource(60943U);
    msg.setSourceEntity(152U);
    msg.setDestination(25701U);
    msg.setDestinationEntity(201U);
    msg.op = 49U;
    msg.file.assign("JZJIERECBARIIDFUJDBTTXZOFTSGAWFELWQPOLBBCYUZSYSPSPSTTOHNGKQGLOLGHPQTMUJQHKOSFVFDBEZAQDSENVCUXCJYXKISKLVELFWIJNMVCSBWIXVK");

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
    msg.setTimeStamp(0.8193632234259927);
    msg.setSource(11100U);
    msg.setSourceEntity(193U);
    msg.setDestination(7784U);
    msg.setDestinationEntity(124U);
    msg.op = 243U;
    msg.file.assign("MARSSOIARJLAESKMVDTHUMPZUGTNERYJQBFCIGYCCYFWXVFVIHGKWBYVNOHLMPRXUVUDXXTCXGWEPTFITLHIHEQVDZLFOKPQYOLLABMURUNF");

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
    msg.setTimeStamp(0.8378224948096051);
    msg.setSource(40785U);
    msg.setSourceEntity(90U);
    msg.setDestination(28358U);
    msg.setDestinationEntity(63U);
    msg.op = 5U;
    msg.clock = 0.6704743973714329;
    msg.tz = -12;

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
    msg.setTimeStamp(0.04887986348210682);
    msg.setSource(45597U);
    msg.setSourceEntity(228U);
    msg.setDestination(31239U);
    msg.setDestinationEntity(78U);
    msg.op = 25U;
    msg.clock = 0.1322872993671348;
    msg.tz = -113;

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
    msg.setTimeStamp(0.6032173756166455);
    msg.setSource(18759U);
    msg.setSourceEntity(223U);
    msg.setDestination(17169U);
    msg.setDestinationEntity(14U);
    msg.op = 37U;
    msg.clock = 0.16166422574817574;
    msg.tz = 49;

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
    msg.setTimeStamp(0.10891496612117635);
    msg.setSource(14134U);
    msg.setSourceEntity(79U);
    msg.setDestination(12368U);
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
    msg.setTimeStamp(0.8163556579670673);
    msg.setSource(58994U);
    msg.setSourceEntity(246U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.6612639569993197);
    msg.setSource(11702U);
    msg.setSourceEntity(164U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.1951395694897302);
    msg.setSource(7068U);
    msg.setSourceEntity(97U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(200U);
    msg.sys_name.assign("JTQIDPURVRXSBYZTMIRADHKWAGBOIVJLLXVAFTENZPLDSCNVNKQOJTVSTIEZRASPLZNMNZJSIFKUPXSBOFMFJWQJFH");
    msg.sys_type = 22U;
    msg.owner = 23206U;
    msg.lat = 0.8268234203060438;
    msg.lon = 0.8405357888309619;
    msg.height = 0.017470107936844448;
    msg.services.assign("EGPHLGLOPDYGEWZNURHRFKKYQTSSHJAUMZZWZLTXNRLKHLLAESITJXXWRCBFKBMVCVNUTSQCWBGFQRKIPDZHKDQTNHOUNDALGPYKSOVITJWAITBHZBPXFIJMOIPGNSVBZQMFIOUZPBKEDQXDUJXAVWPJSYRSCCYMMEKGMDEECLXVCOFZYZYRLECNBBVOVOASBXFDHQOEWKQSQGGFAAVNTYGNFAIPCJDJMIEORLDRFHJXNVUTHXMYYQUPWJWWTI");

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
    msg.setTimeStamp(0.11991055664538808);
    msg.setSource(52917U);
    msg.setSourceEntity(176U);
    msg.setDestination(10299U);
    msg.setDestinationEntity(105U);
    msg.sys_name.assign("VDDSFACKQUJBKMNSJQMGBTURGQPDPSGMRTZEPXBVXAWXUVQNLZZPKBWMQOIDTNEIYSYWVTXJCOASTYYHKXGTXRWNBKCAYUKZZFWECFWFY");
    msg.sys_type = 248U;
    msg.owner = 15001U;
    msg.lat = 0.16510729165217242;
    msg.lon = 0.04785643978912313;
    msg.height = 0.5069830608312481;
    msg.services.assign("HSBFIVGWUSSLAUYDAUPDTXNVCGQVRZWLYJBOKXJQYOCJN");

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
    msg.setTimeStamp(0.2490801596598079);
    msg.setSource(63350U);
    msg.setSourceEntity(228U);
    msg.setDestination(64390U);
    msg.setDestinationEntity(101U);
    msg.sys_name.assign("WXSHNENITASQBGXYYYQKFRNJPMRUHOILFFVZYCIFQLWDPARHMEVTBWKWOMHEZRPGKCOWDRWPZKPVJDOCDFJXQDFIUFHWULJWTBFGXKLW");
    msg.sys_type = 106U;
    msg.owner = 51486U;
    msg.lat = 0.1982634534052783;
    msg.lon = 0.7173583992031102;
    msg.height = 0.14061116867200463;
    msg.services.assign("BTZGCSLQMLQVUXRTAUEWHACOIAZLJWWKNMZPCTJECAELFVPHVBPPCZJHVKZTYBGOHWSSQYBMKHEVTFVUGOCSQJYNABQLYSNYWNQEUMNALBHOOTDEIQVHGYMTYOUMVUPDFFDJXLDDYROJXMWFRKICUPIZCJGAHBWFDBEDXWDURZHNQMPMNGDABKKKURISZJNQNOVTAGEHRREXGMI");

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
    msg.setTimeStamp(0.23875983788318522);
    msg.setSource(55265U);
    msg.setSourceEntity(212U);
    msg.setDestination(65275U);
    msg.setDestinationEntity(135U);
    msg.service.assign("VUPJEIDRMTZUVMOFEYOJTEGVZPYDAQTXEVPQCBRIQQDJUPBXHZKVZKSKOPHHDYXDNLFNGNMKKTTFDPNJAZESQYDKIHCGFHZOXPMGBGKRSWLTULIVLPSLJTBKECXNEROMCBAXDLOYAIWIGAHWQUWWBFJMXEEMLFWTLYNURLRCKJXWINIQAVSIAUMWJPAPOSVHROUBHFRMBDBWDOSZSYQKGURHZFVZEZL");
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
    msg.setTimeStamp(0.5146139783032873);
    msg.setSource(37772U);
    msg.setSourceEntity(87U);
    msg.setDestination(4097U);
    msg.setDestinationEntity(177U);
    msg.service.assign("GBPOPCMJRAHWGUXKFLNJPYFIMYPMJADQUOMOGONTYOLYLCJGQQRAHEZZEKQPNBFPNAWFOSRUWBWKLHHXWGYZKSZMFJGIRMVLINFAKPNUSZFMXLETMOSQPSXLHVHCACEIFDTDIIZKDBRNUBOXEIWGBKXPVA");
    msg.service_type = 82U;

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
    msg.setTimeStamp(0.26360478772953677);
    msg.setSource(27411U);
    msg.setSourceEntity(125U);
    msg.setDestination(12119U);
    msg.setDestinationEntity(1U);
    msg.service.assign("RPHCQZLCIUDKELFTEXORDDRAIDWIGTNQYQVBVOJYKTRFQSLZTJSXBMOWUA");
    msg.service_type = 241U;

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
    msg.setTimeStamp(0.7735846304640693);
    msg.setSource(33185U);
    msg.setSourceEntity(146U);
    msg.setDestination(52445U);
    msg.setDestinationEntity(21U);
    msg.value = 0.236218687518306;

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
    msg.setTimeStamp(0.6854573526248253);
    msg.setSource(58900U);
    msg.setSourceEntity(77U);
    msg.setDestination(21650U);
    msg.setDestinationEntity(178U);
    msg.value = 0.14981411482051032;

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
    msg.setTimeStamp(0.13158993648239015);
    msg.setSource(28953U);
    msg.setSourceEntity(98U);
    msg.setDestination(39468U);
    msg.setDestinationEntity(182U);
    msg.value = 0.05254717192702374;

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
    msg.setTimeStamp(0.920147374280364);
    msg.setSource(41549U);
    msg.setSourceEntity(68U);
    msg.setDestination(22514U);
    msg.setDestinationEntity(40U);
    msg.value = 0.0506004340116013;

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
    msg.setTimeStamp(0.26583932479695305);
    msg.setSource(46914U);
    msg.setSourceEntity(21U);
    msg.setDestination(43608U);
    msg.setDestinationEntity(53U);
    msg.value = 0.8401586724713188;

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
    msg.setTimeStamp(0.059711970732292396);
    msg.setSource(51264U);
    msg.setSourceEntity(232U);
    msg.setDestination(11864U);
    msg.setDestinationEntity(132U);
    msg.value = 0.25519259653390247;

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
    msg.setTimeStamp(0.7081402712041232);
    msg.setSource(7265U);
    msg.setSourceEntity(198U);
    msg.setDestination(25869U);
    msg.setDestinationEntity(20U);
    msg.value = 0.35925257893904095;

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
    msg.setTimeStamp(0.7461829446525359);
    msg.setSource(48637U);
    msg.setSourceEntity(132U);
    msg.setDestination(28086U);
    msg.setDestinationEntity(23U);
    msg.value = 0.1279860194157061;

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
    msg.setTimeStamp(0.37243573733309787);
    msg.setSource(23637U);
    msg.setSourceEntity(208U);
    msg.setDestination(35810U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8726870381914327;

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
    msg.setTimeStamp(0.7247906461355033);
    msg.setSource(52211U);
    msg.setSourceEntity(191U);
    msg.setDestination(14915U);
    msg.setDestinationEntity(88U);
    msg.number.assign("QEIROUNPJMIHBMNGUKFSEKYVFLPXIPELDARXMRIGEZDMFLTVGSWFZZU");
    msg.timeout = 59433U;
    msg.contents.assign("VIVTWHOJXAOCAIGWVQLNPWTNANYJGMWXHCHKCVMKLFSDKEDEPTWCGTIJZFBIHTGAETMQOLZKUMRTDOPIOLZHBJCSUEZVHRBXUNJQWDRKCIJQFVESZKYQUKDFGSXHDYOIYYUGOELDNKKOHIPJNBRJMSWFTGAFNHFEPBXLVNTPQSSERCQBZACKSSEUXYUULVAALWBRZYZGUXFRWJMMRYNPXYODLXMMEDUFCYRBPTVQGNCFHBOQJBQPIGSL");

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
    msg.setTimeStamp(0.015416109560632663);
    msg.setSource(62853U);
    msg.setSourceEntity(206U);
    msg.setDestination(58588U);
    msg.setDestinationEntity(59U);
    msg.number.assign("TWKKJRGLRAVCOGWSFAZPXNHCTQMLIHMPQMNKLCJCHJMHNJTZYIZIYKBOBFTIBHYLDDADIZDJESZVDOTRRLWSDRLCXGRDGVEAWFTUWLGHOPEVSYUGHPVWAMMEUUFUYXBKZKXTFUACCSPJMDXAQSFPECQEIHZFEQIFYVXBWNFWOFBOTQBG");
    msg.timeout = 65419U;
    msg.contents.assign("ERBROHIHROFXUDVTTUTKAQEOVUHZOENNZMYHKFXSFREFEMYUJEU");

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
    msg.setTimeStamp(0.1391378829054838);
    msg.setSource(38336U);
    msg.setSourceEntity(58U);
    msg.setDestination(43654U);
    msg.setDestinationEntity(38U);
    msg.number.assign("DTXJMBAFAYGFUFDSNFKROPJOSUMEJZIWNEDDRUMBHDOZFSWQARSBUPMUDSOVJESGCCVRXCBBHQWBFHVHFQLVSNGHSPEAXWRPMNLRWWQOTZLYAUXQYTTORKAYPECMNZSWWHIUBTLTNCBCLRGGIJTKDIDDKVLZPEXVFNVJBAEKYRHIOIKPMXKKHORENHMWOYCOYJZXMVZIZGXZFFJGXAMHNEISQDYAXQQPPLVZBTECUQVJTPGUILYGIAK");
    msg.timeout = 30629U;
    msg.contents.assign("YOFCUPSUOYALTVCMXKFINEMLNBFHHAKIJRDWLPWUCSFNEJJEQWWOLIOCPMCSKKAHJOUPDSCZXXQDHHVTTBSSPBYRQUCAPYIXSBNTOGWKIVJVURYDFAEIBGDIXRNQWSGHFFYQOGVYBGDGJVULTQYOKMJKEZZZMBWWLZRQMVTRJKUDURMHYAGZXTHFDLBIQEZJAMDNOEPTOAPSEVNZTQTH");

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
    msg.setTimeStamp(0.5480719174513611);
    msg.setSource(57658U);
    msg.setSourceEntity(49U);
    msg.setDestination(33361U);
    msg.setDestinationEntity(251U);
    msg.seq = 501071279U;
    msg.destination.assign("YSTWMWFCCUHQGOHUFTDLFGPJEIATRTIJYHNUZLVNBXAHVYZFFVGJS");
    msg.timeout = 52044U;
    const char tmp_msg_0[] = {-96, -104, 101, -86, 56, 11, -68, 90, -56, -9, -120, -30, -28, -110, -91, -4, 123, -23, 33, 63, -2, 115, 116, -95, 78, -90, 77, -40, -107, 2, 9, -48, 78, 27, -122, -94, 27, -111, 108, -116, 19, 63, 115, -99, 4, -72, -32, 111, -25, -107, 123, -103, -44, -73, 77, 28, -79, -121, -37, 66, -105, -37, 45, -105, -2, 81, -98, -36, -48, 75, -108, 90, 79, 114, 35, -35, -10, 98, -20, 71, -65, -126, -13, 34, 87, -23, -74, -95, 73, -28, 49, 97, -127, -75, -53, 57, 47, -42, -10, 85, -47, 14, 107, -26, 93, -11, -36, -95, -11, 49, 115, 113, 63, 65, -29, 66, -97, -30, -69, -57, 112, 32, 75, 59, -116, -81, 119, 21, -95, 6, 0, 72, 72, 30, 84, -32, -100, -43, -82, 17, 85, 65, -114, 24, -38, 27, -125, 55, 67, 19, -98, -63, 17, -88, 3, -118, -30, -108, 81, -124};
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
    msg.setTimeStamp(0.6846869634677836);
    msg.setSource(21198U);
    msg.setSourceEntity(177U);
    msg.setDestination(20022U);
    msg.setDestinationEntity(197U);
    msg.seq = 1911710998U;
    msg.destination.assign("XSDKPOMYUWMCILGZANVHWXOVSIYIJJIOACZZYYEEFTXFDWILHRHHOFYSJJLRSDKVTAIRWJHVNZRSEOFEDGLTKZXUPWXHQWEFPCYBBSEGOIMITAKTZRNHMPFFROAYKVIAJCDDKGLBPODBUQXLTQCWIPUQZBKYFNSNTC");
    msg.timeout = 63152U;
    const char tmp_msg_0[] = {13, 42, 6, 54, 23, 53, -17, 84, 113, -84, 114, 4, -31, 9, -95, -29, 121, 85, -37, 29, 45, 101, -117, -9, -107, -32, 45, 58, -11, 52, 113, 29, 35, 55, -77, 57, -5, -23, -71, -40, -83, 93, 42, -65, 117, -34, 122, -11, 33, 27, -83, -23, 125, -6, -48, -116, -28, 39, 107, -18, -118, 73, -97, 65, 6, -86, -99, -53, 36, -41, -15, 71, 107, 107, -125, -27, -116, 28, 23, -87, -77, 14, -110, -123, 41, 9, 100, 5, 31, 90, 101, 89, 118, 62, -43, 41, 115, -11, -67, 63, 41, 81, 38, -41, 53, 46, -1, 93, -28, 43, 116, -21, 38, -44, -70, 66, -120, -53, -24, -108, 46, -34, -114, 3, 80, 41, -99, 84, 78, 68, -51, -23, -64, 87, 113, 42, 84, -67, -19, 115, -82, -5, -102, -92, 122, -2, 91, -2, -120, 85, 117, -9, 117, 105, -62, 125, -56, 41, -64, 111, 69, -31, -7, 11, -108, -81, 41, 87, -74, 12, -58, -117, 52, 95, -8, -69, 82, -25, 40, -92, -103, 24, -24, -3, -95, 9, -57, 13, -29, -50, -65, 96, 1, -95, -7, -77, 29, 81, -105, 31, 31, -71, 74};
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
    msg.setTimeStamp(0.9084322394172795);
    msg.setSource(10335U);
    msg.setSourceEntity(192U);
    msg.setDestination(39490U);
    msg.setDestinationEntity(66U);
    msg.seq = 1575246190U;
    msg.destination.assign("SOCRUADFQZTNTIGXDJWLYPZODMEGCWWKGCEMROZYQWXRCXIRSRPPKBWLNZXKJK");
    msg.timeout = 14720U;
    const char tmp_msg_0[] = {125, -103, -64, 1, -31, 71, -84, -100, 39, 3, -122, 21, -7, 84, 45, -22, -11, -88, -79, 124, -11, -94, -20, -26, 50, 56, 84, 19, 26, -94, -128, 71, -2, -67, 64, 32, -77, -76, 45, -61, 59, 118, 12, 112, -87, 72, 51, -69, -109, 79, -65, 53, 98, 123, -25, 75, 25, -63, -72, 119, -73, -72, 22, -60, 107, 2, -83, -56, 24, 88, 56, -124, -84, 57, 43, -105, 21, -118, 55, -95, 7, -38, 99, -43, 51, 63, 102, 98, 43, 19, -16, 108, 75, 4, -91, 6, -41, 71, -38, -45, 87, 105, 119, -109};
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
    msg.setTimeStamp(0.03748569639522947);
    msg.setSource(56906U);
    msg.setSourceEntity(132U);
    msg.setDestination(41589U);
    msg.setDestinationEntity(142U);
    msg.source.assign("CGEZHPKIGVAKZQORJMTRAUSRPWEXIMYQBXZSAM");
    const char tmp_msg_0[] = {51, 39, 105, 106, -60, 104, -5, -47, -94, 104, -34, 120, 120, 63, 104, -112, 41, 11, -57, -68, -32, -85, -10, 90, 103, 54, -118, 81, 48, -83, 90, -70, 63, 115, -53, -21, 50, -20, -68, -16, -36, 53, 33, -39, 39, 57, 3, 112, -82, 67, -120, -36, 63, -60, 110, 55, -47, -34, -112, 53, -27, 29, -89, 53, 52, -96, 58, -1, -126, 51, -82, 64, -38, 73, 25};
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
    msg.setTimeStamp(0.9517710198883292);
    msg.setSource(57144U);
    msg.setSourceEntity(101U);
    msg.setDestination(57593U);
    msg.setDestinationEntity(87U);
    msg.source.assign("DZIOYIBOPMRP");
    const char tmp_msg_0[] = {123, -78, -122, -75, -101, 10, 111, 37, -39, 122, 125, -116, -81, -69, -95, 39, 115, 8, -3, 52, -95, -66};
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
    msg.setTimeStamp(0.8987233600826152);
    msg.setSource(19571U);
    msg.setSourceEntity(52U);
    msg.setDestination(24003U);
    msg.setDestinationEntity(48U);
    msg.source.assign("ZSIWMHXTVNMRSYUXYJSHSOHNLBWALRTKFWNXTXEZNNOKDCQIAAKVKTAGZJTGP");
    const char tmp_msg_0[] = {-13, -121, 54, -22, -123, 52, -88, -23, -16, -31, 38, -99, 126, 60, 117, 29, -75, 85, -117, -28, 50, 67, -103, -13, -92, 110, -63, 57, -126, 78, 71, -73, 93, 43, 52, 37, 113, -100, -123, 44, 48, -85, 65, -110, 47, -52, -56, 87, -115, -98, -43, -82, 15, -85, -117, -115, -99, -87, 88, 99, 73, -46, -51, -7, -100, -71, -58, -78, 49, 3, 108, 44, -12, 69, 24, 73, -101, -26, -44, -75, 115, 109, -103, -27, -82, 110, -70, -105, -31, 59, -21, 66, 25, -68, 80, -53, -95};
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
    msg.setTimeStamp(0.5271745692249367);
    msg.setSource(16846U);
    msg.setSourceEntity(17U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(130U);
    msg.seq = 2470599442U;
    msg.state = 173U;
    msg.error.assign("RBXQYKLVHLCFWAPVKDMZHSPAVWLQOMRZXOXRCSDYVHXXUDTTYZJQBLPOISAINABQHEDXYUQGIOGFD");

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
    msg.setTimeStamp(0.007338133125904811);
    msg.setSource(8115U);
    msg.setSourceEntity(40U);
    msg.setDestination(44332U);
    msg.setDestinationEntity(227U);
    msg.seq = 3734627953U;
    msg.state = 60U;
    msg.error.assign("BVHWKLGQGYBOHSOSKMJXCBQIUYFUVDIMQCSWNXAACWNOQMEVRUBOSDIMLEDGHTFMHEIDXVGUDKPOOGUKVHJJATXDERTESNPJIVSMGBTNCVXFANWZXPEZFCOYLCPBIKSZOBVUMKXYQYMAWNWGJXQFRDHMNJKKHLWQEDBNTJZLFIAFFLPBPOYRNLQQCRSITSSZEYRE");

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
    msg.setTimeStamp(0.21339188305034096);
    msg.setSource(46880U);
    msg.setSourceEntity(235U);
    msg.setDestination(44530U);
    msg.setDestinationEntity(49U);
    msg.seq = 2307464421U;
    msg.state = 224U;
    msg.error.assign("PHYOXGFKXMZMQRTLRUJGQBHMTCDXRNWPDSTAYRQPEQAJDZVPWRECBAGJKMFMCYNVUUBSZIRNOBVXHCFNWINMUNICLSQDWTPKOTXESJYQWTPHSDIOMLAJGAACZNKYZAEQCFKKNWDISEHOLFULYCJZXCESQSAJQUVIZZYPGYTULKKYHLEGRIXXDJVBUBSTYKDFQNXBJPFAWCLHV");

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
    msg.setTimeStamp(0.09870256923091558);
    msg.setSource(46077U);
    msg.setSourceEntity(129U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("CVXYODTJSBMFJPAXQBLSUXKAALJGPKLZCMFRKTCUXCCKHNGYKTOOJNZMVYEXRAXCYUDJPRKQUGNXGNRMZCZWVOPKAP");
    msg.text.assign("BZASWAXZRSJXZVWIVYEBABFMGDEUNCNOUXZOIJIRLEFDGJXNIYQWCYPRUEGE");

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
    msg.setTimeStamp(0.8327390982798984);
    msg.setSource(60907U);
    msg.setSourceEntity(157U);
    msg.setDestination(62937U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("YFJZHRGOLUBPPZLBIHUZCEBLWDQPKYLVLXDMU");
    msg.text.assign("WHNABAGAIWPAQACZXJAMFXRTCSRSGOPXSYZLTSDKJGQQLJAEEHNHZTSKWLWMVDTOXMURIUFELBGPWLHFCQROXBUXXVMOBAGROYDKDXPZNIZTZNWQTQHMNESEUUGVCTWBODLFHZNMFDDXHKRGVPHQNVKBGPMFYRKVKJIYYQNYNJQGTIUTVYZIGPLBDFPJFZIXFMEMSKCHOVVIUCEKEVLLMSSBTEZEJBSJLNIJQYFURRHYUAWOBPWWRCOJ");

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
    msg.setTimeStamp(0.38746212004378544);
    msg.setSource(21310U);
    msg.setSourceEntity(174U);
    msg.setDestination(60620U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("RQMQVQBCTADKVXREWKIBHJVFODSUHHQCYENAWBZVMCKXXWXODNSMPJAISNGTYHMBAGORHKNPFHBQJMFRFIOCUPDGCERMDPJOEDWIVUUTMZXQOSIGBJEGZSRVGFESFWVHWKKXMYEFRSLXNPUXCXUNYRLQLIPNWEZHTMXJBPURZLBTJRAZMITLBYYUDS");
    msg.text.assign("OMHSQZQZYXBHKXZYMRIKFFNGJEYVLIBRUXXFMSHRNPDHBNPDVCMMPJDTATDUWUQICOWDLTSIUEGGAAEDNCRWQTAJTNEGJVTFQIVRGWPAJGJRNSRUYGKOSYOKAUGXZPHVWKYHPQFCZBAYEOZJKBBKSOKCXOHBVDAIENJYASEWQEOLJLMVINYEGRLCL");

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
    msg.setTimeStamp(0.6713093029979416);
    msg.setSource(59431U);
    msg.setSourceEntity(62U);
    msg.setDestination(19443U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("QSJZLJWSMHZFLUWSUQBLWAIAREWSVBRXPPYFARCTPETTGZSFQNLGLBHGOHXZQHGIEJSRVIBFWVXRZKEOTVUAHJAVULQVBUBEPECNDPSIGKDNTCDYMNYNKYHOZHXJIWDBRXYUEJA");
    msg.htime = 0.2130692170474393;
    msg.lat = 0.32770804002085707;
    msg.lon = 0.2900036353402349;
    const char tmp_msg_0[] = {-28, 10, -107, 99, 87, 80, 72, 10, -46, 111, 57, -27, -10, 25, -113, -106, 89, 107, 98, 50, -119, 97, 40, -84, -1, 67, -84, 99, -1, 25, 35, 124, -48, -113, 101, -32, -41, 63, -123, 125, 73, 80, 99, 44, 125, 101, -48, -98, -119, -109, -52, 95, -65, 74, 32, 60, 104, -71, -18, 3, -121, -77, 125, -55, -54, 94, -55, 19, 34, 72, -68, -117, 116, 92, 27, -16, 36, -127, 42, -117, -93, -48, 100, -61, -71, 44, 37, 8, -71, 42, 71, 88, -74, 44, -30, 1, -14, -22, 74, 56, 115, -114, -91, 110, 21, -21, -60, 87, -90, -64, 44, -28, 91, 17, 82, -32};
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
    msg.setTimeStamp(0.047861065577113004);
    msg.setSource(41621U);
    msg.setSourceEntity(209U);
    msg.setDestination(19109U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("PIMBZKTRYBJMOYUHNIBMUFCCZOIAVXVTPEGWTOLMRKPQJJFDJIFHKBDJMJKHWGNBSAQZPFTAPRZVWLSLYCQVCBHVHLSXUXAHBRASPMVWQEESWDSFOYFYQWQIFUBUGHKXXYYLENIYQHJVMEYYXGEUXPRDGNRKKGEQPDTGROJDOJGECTMOKVDNUCWPLUSCVWIMZAFLNOBUNZLXERFNSNAC");
    msg.htime = 0.9463960881049869;
    msg.lat = 0.15649916563233868;
    msg.lon = 0.18472300636936356;
    const char tmp_msg_0[] = {48, -41, -90, -86, 55, -119, -89, -21, 29, 126, 10, -24, 14, -11, 30, -33, 41, -77, 25, -55, -105, -102, -29, -6, 97, -120, -33, 22, 20, 118, 64, 77, 90, 79, 84, 25, 65, -75, -15, -111, 15, 4, -97, 74, -123, 82, 37, 92, -12, -13, 71, -20, -73, -51, 6, 106, 82, 0, 21, -7, -98, 119, -5, -16, -86, 26, -47, 57, -47, 80, 19, 14, -43, -7, 100, -85, -73, 78, 122, -82, 119, 85, -65, -120, -49, -111, 14, 45, 89, 24, 71, -29, -117, -21, 46, 116, -88, 75, -103, 93, -73, -82, 94, -101, 0, 87, -52, -5, -10, -34, 88, -79, -3, 11, 50, 111, -102, -56, -71, 56, 0, -87, -15, -9, -110, -42, 92, -119, -35, 52, -24, -29, -5, -67, -79, -111, -104, 116, -2, 95, 107, -55, -122, 89, -55, -85, -116, 79, 39, 113, -51, -119, -48, 58, -36, -85, 109, -109, -78, -38, -16, -74, -98, 10, 60, 24, -7, -117, 101, -68, -90, -27, 42, -90, -24, 49, 96, 36, 87, -81, 101, 38, -20, 34, 26, -80, -66, 58, -21, 74, -80, -55, -87, -128, -30, 103, -2, -20, -31, -85, -25, -31, 12, -38, -106, 92, 5, 17, 41, 95, 75, 55, -23, 122, 9, -12, -79, -78, -108, -61, -21, 122, -66, -119, -80, -125, -22, 49, -27, -60, 76, -27, -62, 84, 11, 5, -32, 3, -22, 85, 50, 13, 110};
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
    msg.setTimeStamp(0.16990145208879281);
    msg.setSource(47689U);
    msg.setSourceEntity(155U);
    msg.setDestination(36237U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("FADNQDZHTNLKKCGVWPCCWHAEVSLOXQOYLDWRUBRJXFWYLPAZMBQUURDGBVEQKCBOADJLIKPSTTWQDXKFWOIYMOLBJCYNFGINMXWXPBKYVSRVCOGMRGMHYASWALAVPEVJHSBAQRUWUFMROPILBMKHOSTBHHPOEUTDZZSDGXELXMDSATJVPHQJGYTEAIINICKCHTEPNZZZISDGFGWKFCQNFNU");
    msg.htime = 0.8202069044438196;
    msg.lat = 0.6685503627302155;
    msg.lon = 0.6414592474741566;
    const char tmp_msg_0[] = {75, 83, 2, -97, -55, -79, 35, -74, -20, -121, -51, 15, 78, 125, -109, 18, -89, -1, 113, 75, -50, 115, 53, -77, -39, 43, 34, -28, -109, 40, 29, -125, 105, -50, -21, -46, -20, 58, 27, 94, -100, -6, -72, 67, -25, -96, 64, -17, -102, -22, 89, 86, 20, -111, -43, -20, 47, -20, -11, -73, 12, 90, 66, -73, -60, -123, 50, -62, -106, -20, 8, 107, -93, -52, 38, 21, 23, 41, -102, 95};
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
    msg.setTimeStamp(0.6829970963709053);
    msg.setSource(16436U);
    msg.setSourceEntity(188U);
    msg.setDestination(15373U);
    msg.setDestinationEntity(183U);
    msg.req_id = 58612U;
    msg.ttl = 13439U;
    msg.destination.assign("YSTYQEOQQJFVNMMVDGSPJITNGAWOEXHGRVZHRPVOJHBJJQQIFRYHBCKUTKUCINBGXKEVPDBGRETVFMDDCQUFGARSPULKDAH");
    const char tmp_msg_0[] = {-68, -15, 10, -118, -49, 35, 22, 15, 54, 7, -116, 0, 20, 33, 0, 84, -62, -45, -50, -73, -110, 86, -93, 60, -8, -52, 117, -37, -28, -119, -49, -110, 25, 120, 14, -124, -36, 126, 18, 1, 69, -55, 86, -104, -11, -94, -2, -112, -51, -116, -45, 83, 38, 26, -29, 19, 126, -5, 2, 33, -87, 35, -125, 1, -46, 101, -41, 82, -124, 64, -120, -65, 66, 8, 43, 63, -100, 107, 103, 29, -25, -95, 64, 111, -88, 88, -22, 6, 66, 62, -17, 38, 33, -93, 38, 91, 88, 106, -31, -38, 71, -4, -62, 26, -116, 19, 32, -106, 48, 113, 125, -39, -106, -71, -32, 88, 58, -81, -113, -92, -52, -36, -39, 75, -111, -27, -97, -82, -67, 25, -13, -22, -73, 112, -127, 59};
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
    msg.setTimeStamp(0.10304392404300133);
    msg.setSource(21649U);
    msg.setSourceEntity(239U);
    msg.setDestination(63163U);
    msg.setDestinationEntity(81U);
    msg.req_id = 55389U;
    msg.ttl = 16053U;
    msg.destination.assign("TULTZSIJDHNNLPGTQWHGWFPVCXUCXYCSMLHWZFPSKYBFRMEPHEYKEJMQNSNIUUABUOAGWYJNZCJVTEKNVOTSRGYOFXJROEMNQSYKNAGLKDKCASFAVYJDDDXRJIHETPQABCIWQDIBVFVZHXNFMDUTJMGCYVGBDPXTVOLZBVKRIWIKBLSPMZIIEWBPSWJPGWZ");
    const char tmp_msg_0[] = {55, 108, 19, 19, -46, 31, 55, 95, -93, -118, -59, -51, 111, 20, -105, -98, 103, 21, 97, 105, -56, -14, 11, 38, -32, -21, 78, 94, -25, -126, -81, -35, 72, -98, 28, -120, -72, -43, 86, -29, -101, -100, -5, 41, -80, -103, -47, 52, -91, -72, 75, -104, 42, 32, 50, 51, -107, -122, -24, -104, -108, -87, -73, 24, 17, 65, 106, -33, 70, 91, -72, 37, -19, -10, -70, -44, -80, 87, -80, 36, -30, 96, 1, -115, 116, -13, 7, -40, -112, 70, 26, -13, -3, -100, -21, 35, 123, -14, -88, 86, -57, 28, 87, -61, 27, 77, -124, 17, 81, -124, -66, 54, 47, -12, 51, -86, 83, -75, -59, 23, 65, -104, 95, 10, 82, -105, 118, 52, -53, -50, 90, 6, 79, 5, 92, -38, 36, 22, 32, 31, -6, 84, 59, 125, -3, 77, 89, -69, 37, 42, -122, -93, 56, 97, -111, -53, 100, -16, 106, -51, -89, -62, 55, -19, 60, -80, -110, 75, -127, 47, 42, 85, 36, -46, 14, 56, 38, 120, -54, 34, 62, 44, 70, 105, 115, -116, -112, -83, 11, -54, -89, 114, 83, -12, 126, 71, 84, 67, -11, 94, 68, 18, 59, -28, 32, 16, -27, 84, -24, -98, 82, -5, 69, -77, -29, 52, 115, 119, 63, -123, 73, -68, -29, 76, -104, -34, 43, 79, 22, -124, 114, -64, -94, -122, 19, 115, 96, 84, -122, 19};
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
    msg.setTimeStamp(0.2634866065184175);
    msg.setSource(23254U);
    msg.setSourceEntity(238U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(125U);
    msg.req_id = 43574U;
    msg.ttl = 33679U;
    msg.destination.assign("EZWLSAFMKGCQTHOIAGVJJUZUVZJREPGRHFYYACKJU");
    const char tmp_msg_0[] = {-107, -117, -64, -84, -87, -89, 60, -17, -15, -114, 105, -77, 24, -82, -58, 74, -40, 58, -128, 22, 79, -2, -56, 16, -38, 121, -14, -120, -43, 34, -73, 92, 22, -122, 18, -18, -67, -96, 24, 45, -124, 118, -128, 0, 62, 19, -110, 120, -89, 91, 110, 20, -117, -77, 124, 109, -91, -31, 45, -120, -29, -52, 14, -120, -85, 106, -53, -28, -71, -17, 106, 37, -88, 35, 53, 126, 22, -1, 120, 35, -45, 17, -46, 51, -17, 6, 121, 42, 119, -34, -27, -23, -16, 117, -28, 115, 121, -64, 5, -33, 118, 121, 69, -126, 24, -13, -119, 64, 64, -103, 25, -94, 118, -59, -38, 53, 72, -9, -41, -58, -49, -60, -42, 37, -12, 81, 82, 70, 14, 99, 9, -88, 28, 114, 66, 115, -2, 2, -112, 125, 9, -24, 72, -37, -34, 101, -55, -55, 48, 60, -54, -21, 50, -110, 50, 28, -124, 42, -127, -49, -99, -51, -93, -34, -4, 88, -10, 74, 81};
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
    msg.setTimeStamp(0.26368166972659035);
    msg.setSource(61623U);
    msg.setSourceEntity(211U);
    msg.setDestination(35307U);
    msg.setDestinationEntity(196U);
    msg.req_id = 3764U;
    msg.status = 185U;
    msg.text.assign("VVRLNCMTQFCCURBWSBUQVLZLCRGHZMERFZLFCSZAOMQFGHENEFGIPHTWBMWQEROWCTWCMMKHBLQXDOUJRIGRJXIZQVQZNRAUKOLYVAXRAELGYHFGQJMPSUJBOYAHHOSVASHVIXAVAGEWPZTMIAYFTWJHXKECSYWGCNOYOKPDBBPSYFYXJB");

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
    msg.setTimeStamp(0.5951198407061751);
    msg.setSource(55205U);
    msg.setSourceEntity(39U);
    msg.setDestination(44803U);
    msg.setDestinationEntity(35U);
    msg.req_id = 46088U;
    msg.status = 200U;
    msg.text.assign("ZYLFCKLSYJPMJRHRCLVNUNGAAMIXZBCBSN");

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
    msg.setTimeStamp(0.23931124465215303);
    msg.setSource(57065U);
    msg.setSourceEntity(105U);
    msg.setDestination(27210U);
    msg.setDestinationEntity(61U);
    msg.req_id = 27704U;
    msg.status = 95U;
    msg.text.assign("COQVRVQHSCXOZAWGWCMQZOCWPBEEZUDYRIYVBPVAPDQXYLPOKUFOTG");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.4659950527332011);
    msg.setSource(30293U);
    msg.setSourceEntity(89U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(226U);
    msg.id = 152U;
    msg.range = 0.7615705308508781;

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
    msg.setTimeStamp(0.4399672863175167);
    msg.setSource(61928U);
    msg.setSourceEntity(79U);
    msg.setDestination(13445U);
    msg.setDestinationEntity(120U);
    msg.id = 210U;
    msg.range = 0.9467822576282269;

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
    msg.setTimeStamp(0.19272752389033032);
    msg.setSource(42385U);
    msg.setSourceEntity(178U);
    msg.setDestination(54760U);
    msg.setDestinationEntity(37U);
    msg.id = 200U;
    msg.range = 0.37530441237891343;

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
    msg.setTimeStamp(0.8834490799178889);
    msg.setSource(28748U);
    msg.setSourceEntity(34U);
    msg.setDestination(5372U);
    msg.setDestinationEntity(113U);
    msg.tx = 151U;
    msg.channel = 31U;
    msg.timer = 53234U;

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
    msg.setTimeStamp(0.7790107080659446);
    msg.setSource(26977U);
    msg.setSourceEntity(236U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(93U);
    msg.tx = 122U;
    msg.channel = 121U;
    msg.timer = 33032U;

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
    msg.setTimeStamp(0.14989771429201648);
    msg.setSource(57930U);
    msg.setSourceEntity(57U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(143U);
    msg.tx = 253U;
    msg.channel = 26U;
    msg.timer = 5074U;

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
    msg.setTimeStamp(0.8876736734156124);
    msg.setSource(4229U);
    msg.setSourceEntity(25U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(159U);
    msg.beacon.assign("UGQWFVCMWKJQYGAYGGMBWSXNZJSXQMWEUCHKKRYAHPFROXNBHPDNIZHFVVXRGQTIIFUEDVZMFQLDOGUZATXJPXQVOBYOXVJBNXOATOHVTEKCWNDNQSDQJZBAURSDVDDSPLYRIVRGOCVMQZLRXWZUAKDPXZHNKCCWKKNPSTIIOPIHATSEEJSGFBUPKEMIHTOLBMFTJHOFAJDANSTWCELBULFCTHCWRREMYULNPZBWYURLCLPIYJQI");
    msg.lat = 0.7221423752974867;
    msg.lon = 0.7316933755281035;
    msg.depth = 0.7596475554505419;
    msg.query_channel = 175U;
    msg.reply_channel = 249U;
    msg.transponder_delay = 211U;

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
    msg.setTimeStamp(0.23281886799285378);
    msg.setSource(53778U);
    msg.setSourceEntity(8U);
    msg.setDestination(15411U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("FXTTRFLPBAHIXOIKVDGUDKCRLZMVGDDGOBJAQSIREFVGSXHABNXOMYUOHTCRBQRETYQEDDKSVRWDXIAUJZOHZHCOONBKYPKMZGULQBFJUIWEAFZDMWIVGRHZHANPSJYMLTCVPBWWWHTWCRCQRAXCJETEZAHFEXUVTKSLOJNFTOLGWQCKEIGNFPBQYMMPCNHOKSGWPNUMDLX");
    msg.lat = 0.9479565549791283;
    msg.lon = 0.6669063580258384;
    msg.depth = 0.5289856634093396;
    msg.query_channel = 196U;
    msg.reply_channel = 168U;
    msg.transponder_delay = 176U;

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
    msg.setTimeStamp(0.9055283187383214);
    msg.setSource(16010U);
    msg.setSourceEntity(130U);
    msg.setDestination(49411U);
    msg.setDestinationEntity(24U);
    msg.beacon.assign("RRIBNIFIQAQAYLDAZWXMGCRLFJRVXEZDHGPIJAZFTEZNFCXZVTAGCBKADZWUURTGKPKTVTCBIOHVORLDHSRONSNHLJTQHQVZIXQOAQMNJNDPYUUGKNWUCDOPINMEJPGUXRGYFRMJXDDIWJBIRLVDXWSHCWQOVMEVNEJKNATYBYUMXS");
    msg.lat = 0.7797369258396722;
    msg.lon = 0.7458814892450872;
    msg.depth = 0.5155333913797068;
    msg.query_channel = 150U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 203U;

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
    msg.setTimeStamp(0.8400220165422861);
    msg.setSource(29446U);
    msg.setSourceEntity(6U);
    msg.setDestination(42121U);
    msg.setDestinationEntity(93U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.5238189326424493);
    msg.setSource(12067U);
    msg.setSourceEntity(50U);
    msg.setDestination(15602U);
    msg.setDestinationEntity(64U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.9828540940854229);
    msg.setSource(15703U);
    msg.setSourceEntity(170U);
    msg.setDestination(39538U);
    msg.setDestinationEntity(87U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.9637743187028807);
    msg.setSource(4151U);
    msg.setSourceEntity(116U);
    msg.setDestination(8520U);
    msg.setDestinationEntity(158U);
    msg.address = 118U;

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
    msg.setTimeStamp(0.07375472801041782);
    msg.setSource(62111U);
    msg.setSourceEntity(116U);
    msg.setDestination(61313U);
    msg.setDestinationEntity(43U);
    msg.address = 214U;

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
    msg.setTimeStamp(0.4959548655121532);
    msg.setSource(20569U);
    msg.setSourceEntity(152U);
    msg.setDestination(44046U);
    msg.setDestinationEntity(130U);
    msg.address = 194U;

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
    msg.setTimeStamp(0.23543370886974369);
    msg.setSource(62800U);
    msg.setSourceEntity(168U);
    msg.setDestination(61520U);
    msg.setDestinationEntity(103U);
    msg.address = 254U;
    msg.status = 143U;
    msg.range = 0.07480576931565042;

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
    msg.setTimeStamp(0.45040480271798333);
    msg.setSource(52689U);
    msg.setSourceEntity(64U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(189U);
    msg.address = 183U;
    msg.status = 39U;
    msg.range = 0.6128754508523205;

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
    msg.setTimeStamp(0.9449976629262945);
    msg.setSource(8807U);
    msg.setSourceEntity(20U);
    msg.setDestination(52377U);
    msg.setDestinationEntity(16U);
    msg.address = 212U;
    msg.status = 4U;
    msg.range = 0.6126467210438066;

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
    msg.setTimeStamp(0.07869665527223557);
    msg.setSource(50972U);
    msg.setSourceEntity(87U);
    msg.setDestination(46757U);
    msg.setDestinationEntity(14U);
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.9279682175254744;
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
    msg.setTimeStamp(0.8551819767548567);
    msg.setSource(15282U);
    msg.setSourceEntity(69U);
    msg.setDestination(45650U);
    msg.setDestinationEntity(59U);
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("RJCOWYSTGEBYRHNZGGWQIPXZLBGOADONHUBLTFLVPD");
    tmp_msg_0.plan_size = 61090U;
    tmp_msg_0.change_time = 0.758563004770654;
    tmp_msg_0.change_sid = 29356U;
    tmp_msg_0.change_sname.assign("EJJONBQQNELDHMFKZAMMQAFCTPAVIOMVUOVPJIEYDTEL");
    const char tmp_tmp_msg_0_0[] = {-102, -109, 89, -88, 112, -6, 104, 41, -119, -30, -39, -98, -67, 45, 26, 101, 91, 68, -54, -55, 29, 115, 44, -59, -2, -60, -83, 15, -32, 59, 113, 104, 119, 37, 83, -56, 103, -72, -10, 10, 108, 44, 121, 116, -52, 115, 113, 33};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.995494575547709);
    msg.setSource(61399U);
    msg.setSourceEntity(82U);
    msg.setDestination(30264U);
    msg.setDestinationEntity(32U);
    IMC::LblEstimate tmp_msg_0;
    tmp_msg_0.beacon.assign("DCGZRHTKWNHATCBBJCACFSGNIARVSEYTIEQFJLAJFABXPRXENIFZRMHDLSHJJLYXNFZOUEVYKIBZXZLUVXAEQSNRVZOWLHJQRPSKYEWDTDPOWYNTXYERJYCSHUGWYARDVCTIKIWULBJOFUQIIPFTPMAOGMUELWSPNPKQQBGDGTTWHKKMUTX");
    tmp_msg_0.x = 0.3280862357492511;
    tmp_msg_0.y = 0.9868537756504933;
    tmp_msg_0.depth = 0.1540314063232363;
    tmp_msg_0.var_x = 0.20688712158047706;
    tmp_msg_0.var_y = 0.8818238758938576;
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
    msg.setTimeStamp(0.1663019921788369);
    msg.setSource(33656U);
    msg.setSourceEntity(139U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(161U);
    msg.enable = 64U;

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
    msg.setTimeStamp(0.922456672852044);
    msg.setSource(6921U);
    msg.setSourceEntity(84U);
    msg.setDestination(24631U);
    msg.setDestinationEntity(185U);
    msg.enable = 0U;

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
    msg.setTimeStamp(0.15100574398135813);
    msg.setSource(61U);
    msg.setSourceEntity(174U);
    msg.setDestination(63972U);
    msg.setDestinationEntity(252U);
    msg.enable = 127U;

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
    msg.setTimeStamp(0.5590942005019356);
    msg.setSource(61130U);
    msg.setSourceEntity(65U);
    msg.setDestination(45297U);
    msg.setDestinationEntity(243U);
    msg.summary = 222U;
    msg.level = 106U;

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
    msg.setTimeStamp(0.13583372096249446);
    msg.setSource(15025U);
    msg.setSourceEntity(189U);
    msg.setDestination(22384U);
    msg.setDestinationEntity(200U);
    msg.summary = 201U;
    msg.level = 102U;

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
    msg.setTimeStamp(0.4959006320972884);
    msg.setSource(16142U);
    msg.setSourceEntity(233U);
    msg.setDestination(51822U);
    msg.setDestinationEntity(230U);
    msg.summary = 212U;
    msg.level = 172U;

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
    msg.setTimeStamp(0.45237492815463964);
    msg.setSource(31355U);
    msg.setSourceEntity(152U);
    msg.setDestination(16450U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.4680799822834997);
    msg.setSource(49526U);
    msg.setSourceEntity(140U);
    msg.setDestination(10100U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.13013472280777905);
    msg.setSource(11171U);
    msg.setSourceEntity(45U);
    msg.setDestination(44943U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.32169635335696956);
    msg.setSource(14871U);
    msg.setSourceEntity(107U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.49621251355712237);
    msg.setSource(46557U);
    msg.setSourceEntity(56U);
    msg.setDestination(2334U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.23770913549910266);
    msg.setSource(65287U);
    msg.setSourceEntity(60U);
    msg.setDestination(13727U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.5417845937126616);
    msg.setSource(32937U);
    msg.setSourceEntity(245U);
    msg.setDestination(61260U);
    msg.setDestinationEntity(84U);
    msg.op = 72U;
    msg.system.assign("FEUBJFQGWIYNHNNUZHVHURKOSDPMFRR");
    msg.range = 0.6483816138490505;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.6324425279334384;
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
    msg.setTimeStamp(0.8929813585878275);
    msg.setSource(44200U);
    msg.setSourceEntity(59U);
    msg.setDestination(25171U);
    msg.setDestinationEntity(157U);
    msg.op = 183U;
    msg.system.assign("VZSBJPZNTWBQWMEARNYOCKJUDMAVDRSONZPLKAQKGUFJZLHGLHGQNKIQHEFPBMNKSCSNERIRSETIMOQPXJBAKPGCCDPLMHTDMVMJOUPUTIFHFGJAKNUFUBQLAZDSEGVSAKFVDWQWROSZFPVXOUHYVZYTHPXPBLQYOTBEYNDWEAKUSWC");
    msg.range = 0.5010828822258347;
    IMC::EntityControl tmp_msg_0;
    tmp_msg_0.op = 196U;
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
    msg.setTimeStamp(0.1700302611176877);
    msg.setSource(63453U);
    msg.setSourceEntity(79U);
    msg.setDestination(58032U);
    msg.setDestinationEntity(243U);
    msg.op = 166U;
    msg.system.assign("CVWKUNFXFZHGUKNJTXOWARQBHHLWKLDRFCPOWLLJAWIVWZVVHECTUSRWOKPASIBFPDIIMDRYAORWSXTLQG");
    msg.range = 0.41442328977926224;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 88U;
    tmp_msg_0.frequency = 4183159026U;
    tmp_msg_0.min_range = 54104U;
    tmp_msg_0.max_range = 7798U;
    tmp_msg_0.bits_per_point = 15U;
    tmp_msg_0.scale_factor = 0.6988247669212254;
    const char tmp_tmp_msg_0_0[] = {34, 118, -61, -7, 17, -65, 13, 106, -83, -71, -117, 2, -55, 82, 52, 52, 73, 69, 86, -65, 42, 25, 103, -14, 17, -88, -36, 113, -20, 81, -88, 46, 14, 24, 117, 104, 4, 111, 23, 62, -60, -50, -111, 78, -123, -60, -102, -80, -1, -110, 92, 9, 55, -15, -83, -6, -119, 42, -115, 70, 100, 102, -42, -29, 45, 16, 91, -110, 0, -77, 8, -82, -103, 48, -98, -96, -10, 23, 125, -16, 48, 8, -117, -15, -2, 70, 62, -87, 35, -94, -109, -34, -122, -104, -64, -56, -96, -38, -63, 36, 109, 89, -63, 30, -49, -64, 84, 124, -41, 67, 92, -7, -66, -43, -93, 86, 82, 123, -71, -13, -8, -103, -43, -106, 104, -21, 113, -26, 79, 81, 57, 30, 6, 0, 49, -33, -123, -45, -30};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.24108614540686435);
    msg.setSource(7854U);
    msg.setSourceEntity(201U);
    msg.setDestination(2933U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.3184616456023096);
    msg.setSource(32569U);
    msg.setSourceEntity(118U);
    msg.setDestination(28752U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.7165425620575476);
    msg.setSource(8797U);
    msg.setSourceEntity(165U);
    msg.setDestination(19565U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.5711024815357164);
    msg.setSource(25779U);
    msg.setSourceEntity(91U);
    msg.setDestination(19298U);
    msg.setDestinationEntity(90U);
    msg.list.assign("RPKIEXBEOIYKMNKJXIHPCKDZGLCWSMMYENGIBUVOLDNMFOEDAHNRXDQJZVPGLZMPESBQCNXSKCANCNLAELCSTRXNFCLRHXFOAROHYKBIKEIEGSCTMDJBXLUEIPTZJQWIIJVBUPRQYZPZWFWKWYOQTFHAAOFUVPZWHVQUZSFMPKDMQGGBKDUZBUUYFXDYLQFNJQURNTJAOCHYZGDVVAXSTRVVJLIQOXPGTBRJALEWS");

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
    msg.setTimeStamp(0.17409870340105937);
    msg.setSource(30008U);
    msg.setSourceEntity(36U);
    msg.setDestination(22576U);
    msg.setDestinationEntity(100U);
    msg.list.assign("ICYCHSFKJGLMSTFLCYMIKGOMQJYBHPCSKZIXZUJEBXLFVSXBRDGSFNUVUOHUOPYSOYRKDXWFWNHPXJPWGLKKQJAQNKJBNEIQKKUUVVFWEXIVCULZYIAGIDTCTDABPUJARNWSNLGRCEBPDEFGVSXWTZRDDWGRBPOMWLYMCOFQAHCMAAQJXHZRRTQSPXTTZJPMXIMKZSIFUIAJUWTQAPDTLHZRMRQOCYMBVNEFANYENTLGZEWQZHVE");

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
    msg.setTimeStamp(0.487023495826131);
    msg.setSource(50541U);
    msg.setSourceEntity(33U);
    msg.setDestination(60354U);
    msg.setDestinationEntity(208U);
    msg.list.assign("NZPYPWCEATOCZOWYYBDHWUITSHCRJCGESRSDWVGQUZRQJWMNGHPROEVYRVQZAKAVRDUOAJYIKXLJBPESBVFXKTKRXTQFUYLHEEOIAXPMRGJCDBZNGHGSKCUCABOJEDUQMGMHDTKZJIAHLZLGOKXRLQFMVUOQSLSNPZZNIBDTVLMS");

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
    msg.setTimeStamp(0.6693775078156841);
    msg.setSource(9735U);
    msg.setSourceEntity(200U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(210U);
    msg.value = 16781;

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
    msg.setTimeStamp(0.051562473482467674);
    msg.setSource(15735U);
    msg.setSourceEntity(133U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(231U);
    msg.value = -9562;

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
    msg.setTimeStamp(0.6888068737693682);
    msg.setSource(36621U);
    msg.setSourceEntity(153U);
    msg.setDestination(55823U);
    msg.setDestinationEntity(131U);
    msg.value = 18411;

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
    msg.setTimeStamp(0.42994439755128366);
    msg.setSource(65187U);
    msg.setSourceEntity(54U);
    msg.setDestination(9464U);
    msg.setDestinationEntity(77U);
    msg.value = 0.6216138604693763;

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
    msg.setTimeStamp(0.23580289191101367);
    msg.setSource(33548U);
    msg.setSourceEntity(23U);
    msg.setDestination(35216U);
    msg.setDestinationEntity(31U);
    msg.value = 0.14756795218968832;

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
    msg.setTimeStamp(0.38965958144534973);
    msg.setSource(4582U);
    msg.setSourceEntity(252U);
    msg.setDestination(18382U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7008903174583819;

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
    msg.setTimeStamp(0.10953085394858963);
    msg.setSource(8957U);
    msg.setSourceEntity(138U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(28U);
    msg.value = 0.36672454091694684;

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
    msg.setTimeStamp(0.4948239376958673);
    msg.setSource(29672U);
    msg.setSourceEntity(143U);
    msg.setDestination(62492U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9614475620694095;

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
    msg.setTimeStamp(0.49307100522524283);
    msg.setSource(16049U);
    msg.setSourceEntity(99U);
    msg.setDestination(22502U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9312970070799359;

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
    msg.setTimeStamp(0.8551089304897441);
    msg.setSource(22400U);
    msg.setSourceEntity(35U);
    msg.setDestination(39155U);
    msg.setDestinationEntity(8U);
    msg.validity = 58488U;
    msg.type = 158U;
    msg.utc_year = 44219U;
    msg.utc_month = 130U;
    msg.utc_day = 20U;
    msg.utc_time = 0.8314006521220526;
    msg.lat = 0.31317263407352314;
    msg.lon = 0.48548896822408705;
    msg.height = 0.3828861321975434;
    msg.satellites = 87U;
    msg.cog = 0.5617155134215654;
    msg.sog = 0.6956724687615108;
    msg.hdop = 0.27591226462596674;
    msg.vdop = 0.5878118481455135;
    msg.hacc = 0.3947761236458939;
    msg.vacc = 0.6922032424696569;

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
    msg.setTimeStamp(0.9180587012180123);
    msg.setSource(61077U);
    msg.setSourceEntity(78U);
    msg.setDestination(49542U);
    msg.setDestinationEntity(179U);
    msg.validity = 53518U;
    msg.type = 130U;
    msg.utc_year = 57908U;
    msg.utc_month = 207U;
    msg.utc_day = 245U;
    msg.utc_time = 0.12393224421262028;
    msg.lat = 0.4505933115469628;
    msg.lon = 0.5228580251742888;
    msg.height = 0.965340589127083;
    msg.satellites = 182U;
    msg.cog = 0.5069802702672908;
    msg.sog = 0.44032241380171644;
    msg.hdop = 0.24429138656223748;
    msg.vdop = 0.1287756598008718;
    msg.hacc = 0.5074699155158371;
    msg.vacc = 0.5695944926663494;

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
    msg.setTimeStamp(0.977927690855253);
    msg.setSource(46083U);
    msg.setSourceEntity(230U);
    msg.setDestination(59238U);
    msg.setDestinationEntity(17U);
    msg.validity = 48793U;
    msg.type = 47U;
    msg.utc_year = 56463U;
    msg.utc_month = 218U;
    msg.utc_day = 101U;
    msg.utc_time = 0.6721748459266815;
    msg.lat = 0.08433796749156786;
    msg.lon = 0.9318242730355631;
    msg.height = 0.4994992440212348;
    msg.satellites = 231U;
    msg.cog = 0.5218742016498399;
    msg.sog = 0.6693579211463928;
    msg.hdop = 0.6071346800460925;
    msg.vdop = 0.5866385507693984;
    msg.hacc = 0.7849209598961595;
    msg.vacc = 0.21243273985475308;

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
    msg.setTimeStamp(0.8440950311556156);
    msg.setSource(20743U);
    msg.setSourceEntity(65U);
    msg.setDestination(8457U);
    msg.setDestinationEntity(51U);
    msg.time = 0.013295894542588393;
    msg.phi = 0.4861247786477285;
    msg.theta = 0.503913437611894;
    msg.psi = 0.015557589413509154;
    msg.psi_magnetic = 0.40020280524105334;

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
    msg.setTimeStamp(0.04268559055924115);
    msg.setSource(35847U);
    msg.setSourceEntity(226U);
    msg.setDestination(44560U);
    msg.setDestinationEntity(230U);
    msg.time = 0.33964419503571486;
    msg.phi = 0.7606627245476357;
    msg.theta = 0.9199230747986896;
    msg.psi = 0.011412518652023862;
    msg.psi_magnetic = 0.7636758782765379;

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
    msg.setTimeStamp(0.41518329172867385);
    msg.setSource(43983U);
    msg.setSourceEntity(9U);
    msg.setDestination(56048U);
    msg.setDestinationEntity(20U);
    msg.time = 0.10261967658412707;
    msg.phi = 0.962975967622793;
    msg.theta = 0.40542433600125116;
    msg.psi = 0.5539577644234476;
    msg.psi_magnetic = 0.509765712070864;

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
    msg.setTimeStamp(0.007708158410135835);
    msg.setSource(17627U);
    msg.setSourceEntity(234U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(210U);
    msg.time = 0.017694999622226315;
    msg.x = 0.2720894444060912;
    msg.y = 0.539894010385509;
    msg.z = 0.5835675387998536;
    msg.timestep = 0.0688932040815956;

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
    msg.setTimeStamp(0.22253093104137522);
    msg.setSource(33671U);
    msg.setSourceEntity(117U);
    msg.setDestination(13702U);
    msg.setDestinationEntity(194U);
    msg.time = 0.40936895756722913;
    msg.x = 0.5991298964910393;
    msg.y = 0.36736375745592653;
    msg.z = 0.3551451778050928;
    msg.timestep = 0.44660353355578053;

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
    msg.setTimeStamp(0.357937347057543);
    msg.setSource(7653U);
    msg.setSourceEntity(26U);
    msg.setDestination(25072U);
    msg.setDestinationEntity(6U);
    msg.time = 0.33057439511851117;
    msg.x = 0.16828340320844515;
    msg.y = 0.8442430026527384;
    msg.z = 0.5514452300547826;
    msg.timestep = 0.03922475175073514;

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
    msg.setTimeStamp(0.6807191351289131);
    msg.setSource(13280U);
    msg.setSourceEntity(119U);
    msg.setDestination(52135U);
    msg.setDestinationEntity(205U);
    msg.time = 0.05663156080868925;
    msg.x = 0.956237854867641;
    msg.y = 0.14821669901424273;
    msg.z = 0.7349598378959684;

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
    msg.setTimeStamp(0.29037547179400636);
    msg.setSource(141U);
    msg.setSourceEntity(15U);
    msg.setDestination(63953U);
    msg.setDestinationEntity(81U);
    msg.time = 0.7428627006209463;
    msg.x = 0.02446375662811917;
    msg.y = 0.9472998288561777;
    msg.z = 0.7321056162223036;

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
    msg.setTimeStamp(0.5313499828909725);
    msg.setSource(58037U);
    msg.setSourceEntity(167U);
    msg.setDestination(24429U);
    msg.setDestinationEntity(54U);
    msg.time = 0.790347269575566;
    msg.x = 0.011808792067865115;
    msg.y = 0.8129393734512942;
    msg.z = 0.07798205279351678;

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
    msg.setTimeStamp(0.06618502674707838);
    msg.setSource(19371U);
    msg.setSourceEntity(148U);
    msg.setDestination(38555U);
    msg.setDestinationEntity(42U);
    msg.time = 0.7543740492416401;
    msg.x = 0.14259555816512615;
    msg.y = 0.9793961402337263;
    msg.z = 0.2532247645641942;

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
    msg.setTimeStamp(0.34485501822476783);
    msg.setSource(1318U);
    msg.setSourceEntity(143U);
    msg.setDestination(3861U);
    msg.setDestinationEntity(218U);
    msg.time = 0.2064284540850685;
    msg.x = 0.5070485879494677;
    msg.y = 0.6476539328936101;
    msg.z = 0.17533806287500342;

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
    msg.setTimeStamp(0.7244835594328158);
    msg.setSource(40812U);
    msg.setSourceEntity(91U);
    msg.setDestination(60956U);
    msg.setDestinationEntity(232U);
    msg.time = 0.5559144429861114;
    msg.x = 0.09810634033861099;
    msg.y = 0.337239813810689;
    msg.z = 0.10914502826003347;

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
    msg.setTimeStamp(0.655493202428207);
    msg.setSource(52269U);
    msg.setSourceEntity(44U);
    msg.setDestination(37686U);
    msg.setDestinationEntity(185U);
    msg.time = 0.9750161924763043;
    msg.x = 0.2655379593558479;
    msg.y = 0.5609781715613926;
    msg.z = 0.11125339252735167;

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
    msg.setTimeStamp(0.6348125806965641);
    msg.setSource(34643U);
    msg.setSourceEntity(243U);
    msg.setDestination(56989U);
    msg.setDestinationEntity(55U);
    msg.time = 0.0696710689109713;
    msg.x = 0.7135171587156589;
    msg.y = 0.21911863039686696;
    msg.z = 0.4793889490486314;

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
    msg.setTimeStamp(0.9174013617144957);
    msg.setSource(2927U);
    msg.setSourceEntity(51U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(61U);
    msg.time = 0.6659365927425872;
    msg.x = 0.02947446699218237;
    msg.y = 0.11977783875336556;
    msg.z = 0.9343831121407057;

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
    msg.setTimeStamp(0.19768060479956773);
    msg.setSource(18841U);
    msg.setSourceEntity(58U);
    msg.setDestination(2988U);
    msg.setDestinationEntity(56U);
    msg.validity = 137U;
    msg.x = 0.8670038612835618;
    msg.y = 0.13340675038733263;
    msg.z = 0.5159775105499;

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
    msg.setTimeStamp(0.5795512566650105);
    msg.setSource(26195U);
    msg.setSourceEntity(114U);
    msg.setDestination(57716U);
    msg.setDestinationEntity(98U);
    msg.validity = 79U;
    msg.x = 0.12551723453313168;
    msg.y = 0.6469220950357407;
    msg.z = 0.257213558501057;

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
    msg.setTimeStamp(0.4801373333686857);
    msg.setSource(62530U);
    msg.setSourceEntity(202U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(251U);
    msg.validity = 30U;
    msg.x = 0.41713649317753243;
    msg.y = 0.05074598121366192;
    msg.z = 0.8797872846498248;

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
    msg.setTimeStamp(0.625627580797457);
    msg.setSource(55305U);
    msg.setSourceEntity(135U);
    msg.setDestination(16574U);
    msg.setDestinationEntity(226U);
    msg.validity = 90U;
    msg.x = 0.8744012595666687;
    msg.y = 0.09039671622802947;
    msg.z = 0.2808258683781589;

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
    msg.setTimeStamp(0.10013230240384396);
    msg.setSource(60774U);
    msg.setSourceEntity(232U);
    msg.setDestination(45442U);
    msg.setDestinationEntity(117U);
    msg.validity = 199U;
    msg.x = 0.8599956460434596;
    msg.y = 0.3298152409378987;
    msg.z = 0.029033178459528575;

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
    msg.setTimeStamp(0.2199212272319334);
    msg.setSource(40973U);
    msg.setSourceEntity(148U);
    msg.setDestination(16488U);
    msg.setDestinationEntity(21U);
    msg.validity = 187U;
    msg.x = 0.18204378351861705;
    msg.y = 0.322258813618278;
    msg.z = 0.8099443153237339;

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
    msg.setTimeStamp(0.309240466530716);
    msg.setSource(42375U);
    msg.setSourceEntity(69U);
    msg.setDestination(58298U);
    msg.setDestinationEntity(77U);
    msg.time = 0.8325155013815141;
    msg.x = 0.8238194768899143;
    msg.y = 0.8226568609552998;
    msg.z = 0.44848744598115764;

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
    msg.setTimeStamp(0.06356419789623935);
    msg.setSource(25567U);
    msg.setSourceEntity(107U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(192U);
    msg.time = 0.34711192259855994;
    msg.x = 0.9899410313975984;
    msg.y = 0.2196660208482174;
    msg.z = 0.4469086914575282;

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
    msg.setTimeStamp(0.9401346006580226);
    msg.setSource(51634U);
    msg.setSourceEntity(242U);
    msg.setDestination(33888U);
    msg.setDestinationEntity(191U);
    msg.time = 0.6669492357144204;
    msg.x = 0.6418674506329205;
    msg.y = 0.0606283061763746;
    msg.z = 0.02291134006521267;

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
    msg.setTimeStamp(0.10138207695609824);
    msg.setSource(38994U);
    msg.setSourceEntity(92U);
    msg.setDestination(46712U);
    msg.setDestinationEntity(126U);
    msg.validity = 244U;
    msg.value = 0.3058967544816398;

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
    msg.setTimeStamp(0.20863962417977588);
    msg.setSource(46066U);
    msg.setSourceEntity(227U);
    msg.setDestination(1856U);
    msg.setDestinationEntity(154U);
    msg.validity = 243U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6063800628006742;
    tmp_msg_0.y = 0.07640594591647143;
    tmp_msg_0.z = 0.5635515094495837;
    tmp_msg_0.phi = 0.988807778663467;
    tmp_msg_0.theta = 0.7996104909181213;
    tmp_msg_0.psi = 0.11873063101771075;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.03877849526801669;

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
    msg.setTimeStamp(0.46504987967072464);
    msg.setSource(41495U);
    msg.setSourceEntity(200U);
    msg.setDestination(24898U);
    msg.setDestinationEntity(26U);
    msg.validity = 141U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7283667966615073;
    tmp_msg_0.beam_height = 0.4417854375333249;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.20917081047424357;

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
    msg.setTimeStamp(0.48881331567448816);
    msg.setSource(34558U);
    msg.setSourceEntity(202U);
    msg.setDestination(12767U);
    msg.setDestinationEntity(93U);
    msg.value = 0.012308808370085966;

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
    msg.setTimeStamp(0.12191178454112084);
    msg.setSource(12224U);
    msg.setSourceEntity(152U);
    msg.setDestination(34616U);
    msg.setDestinationEntity(195U);
    msg.value = 0.7875909639597121;

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
    msg.setTimeStamp(0.6938420002559678);
    msg.setSource(1061U);
    msg.setSourceEntity(189U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(69U);
    msg.value = 0.12019554708513713;

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
    msg.setTimeStamp(0.030363500113508968);
    msg.setSource(17567U);
    msg.setSourceEntity(145U);
    msg.setDestination(44543U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7668371587364808;

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
    msg.setTimeStamp(0.9911209135310288);
    msg.setSource(36581U);
    msg.setSourceEntity(206U);
    msg.setDestination(4057U);
    msg.setDestinationEntity(144U);
    msg.value = 0.716662590237509;

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
    msg.setTimeStamp(0.22548834951651875);
    msg.setSource(54861U);
    msg.setSourceEntity(152U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(244U);
    msg.value = 0.6533938464336946;

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
    msg.setTimeStamp(0.1851414412785548);
    msg.setSource(1816U);
    msg.setSourceEntity(194U);
    msg.setDestination(8222U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9492272376776918;

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
    msg.setTimeStamp(0.30964273479022497);
    msg.setSource(1163U);
    msg.setSourceEntity(62U);
    msg.setDestination(58665U);
    msg.setDestinationEntity(195U);
    msg.value = 0.6858964713447571;

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
    msg.setTimeStamp(0.44177395418322174);
    msg.setSource(60924U);
    msg.setSourceEntity(54U);
    msg.setDestination(52879U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8432857354054766;

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
    msg.setTimeStamp(0.7835590816818593);
    msg.setSource(46052U);
    msg.setSourceEntity(242U);
    msg.setDestination(45434U);
    msg.setDestinationEntity(179U);
    msg.value = 0.8725561163515486;

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
    msg.setTimeStamp(0.012331921151518932);
    msg.setSource(22905U);
    msg.setSourceEntity(138U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0028670551372876885;

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
    msg.setTimeStamp(0.4680150564922577);
    msg.setSource(28045U);
    msg.setSourceEntity(142U);
    msg.setDestination(28833U);
    msg.setDestinationEntity(235U);
    msg.value = 0.20463768264070648;

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
    msg.setTimeStamp(0.87151844193918);
    msg.setSource(35207U);
    msg.setSourceEntity(23U);
    msg.setDestination(41628U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9956517782021175;

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
    msg.setTimeStamp(0.5274743140691852);
    msg.setSource(27457U);
    msg.setSourceEntity(78U);
    msg.setDestination(44060U);
    msg.setDestinationEntity(89U);
    msg.value = 0.06922569006483292;

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
    msg.setTimeStamp(0.1955958367176508);
    msg.setSource(5925U);
    msg.setSourceEntity(134U);
    msg.setDestination(29343U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8463397601131553;

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
    msg.setTimeStamp(0.8532538601595435);
    msg.setSource(56581U);
    msg.setSourceEntity(206U);
    msg.setDestination(16649U);
    msg.setDestinationEntity(99U);
    msg.value = 0.19627240461154927;

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
    msg.setTimeStamp(0.8430169725296022);
    msg.setSource(61167U);
    msg.setSourceEntity(87U);
    msg.setDestination(9126U);
    msg.setDestinationEntity(116U);
    msg.value = 0.6451031042459365;

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
    msg.setTimeStamp(0.7755446153177259);
    msg.setSource(47470U);
    msg.setSourceEntity(19U);
    msg.setDestination(17697U);
    msg.setDestinationEntity(91U);
    msg.value = 0.18418508587039817;

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
    msg.setTimeStamp(0.8891341844408538);
    msg.setSource(63950U);
    msg.setSourceEntity(113U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7114765534600636;

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
    msg.setTimeStamp(0.9226624788457536);
    msg.setSource(20662U);
    msg.setSourceEntity(178U);
    msg.setDestination(2777U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5973973442502777;

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
    msg.setTimeStamp(0.7153551996903798);
    msg.setSource(39596U);
    msg.setSourceEntity(83U);
    msg.setDestination(57859U);
    msg.setDestinationEntity(224U);
    msg.value = 0.24033474801718324;

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
    msg.setTimeStamp(0.40585396002626684);
    msg.setSource(42908U);
    msg.setSourceEntity(204U);
    msg.setDestination(17516U);
    msg.setDestinationEntity(10U);
    msg.value = 0.09814754690601879;

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
    msg.setTimeStamp(0.16900188615604672);
    msg.setSource(49506U);
    msg.setSourceEntity(17U);
    msg.setDestination(57279U);
    msg.setDestinationEntity(114U);
    msg.value = 0.05188061506600561;

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
    msg.setTimeStamp(0.17387255493583786);
    msg.setSource(28401U);
    msg.setSourceEntity(57U);
    msg.setDestination(48301U);
    msg.setDestinationEntity(83U);
    msg.value = 0.9340629454826505;

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
    msg.setTimeStamp(0.7072946273559865);
    msg.setSource(46643U);
    msg.setSourceEntity(210U);
    msg.setDestination(952U);
    msg.setDestinationEntity(242U);
    msg.direction = 0.15779086837805067;
    msg.speed = 0.08901383084164738;

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
    msg.setTimeStamp(0.18241949666178037);
    msg.setSource(52246U);
    msg.setSourceEntity(235U);
    msg.setDestination(4653U);
    msg.setDestinationEntity(142U);
    msg.direction = 0.3280015165822119;
    msg.speed = 0.4960238042392193;

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
    msg.setTimeStamp(0.17488994460956075);
    msg.setSource(15671U);
    msg.setSourceEntity(204U);
    msg.setDestination(6007U);
    msg.setDestinationEntity(172U);
    msg.direction = 0.6213748818401075;
    msg.speed = 0.04672594931024643;

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
    msg.setTimeStamp(0.6649044156589246);
    msg.setSource(22525U);
    msg.setSourceEntity(17U);
    msg.setDestination(18115U);
    msg.setDestinationEntity(53U);
    msg.value = 0.2378513574108727;

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
    msg.setTimeStamp(0.4825755682300559);
    msg.setSource(64071U);
    msg.setSourceEntity(227U);
    msg.setDestination(34302U);
    msg.setDestinationEntity(73U);
    msg.value = 0.1879910818070265;

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
    msg.setTimeStamp(0.9598237225947301);
    msg.setSource(47391U);
    msg.setSourceEntity(106U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(121U);
    msg.value = 0.43080132800745297;

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
    msg.setTimeStamp(0.52080856045586);
    msg.setSource(27292U);
    msg.setSourceEntity(111U);
    msg.setDestination(12517U);
    msg.setDestinationEntity(245U);
    msg.value.assign("BKFZWYHXDGBTYSLJZJSRBYRMXNAKMIYJBMEOLLYY");

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
    msg.setTimeStamp(0.7007539124023308);
    msg.setSource(25959U);
    msg.setSourceEntity(178U);
    msg.setDestination(29498U);
    msg.setDestinationEntity(57U);
    msg.value.assign("ZADYHHPWSROPREDMUCSFEFNFTBVDZFLQLWRJWZ");

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
    msg.setTimeStamp(0.23003555854910673);
    msg.setSource(60310U);
    msg.setSourceEntity(169U);
    msg.setDestination(1613U);
    msg.setDestinationEntity(114U);
    msg.value.assign("GNQIODVLWAPDEBWCQAVERZFQUXGRZYYFRLWFXMYYSWBTAYHMJHARPWJUGQYNPFLTREWOSVYACWSJDMIRCPESRLHATTKTBBNBDLVOMVCWCQSBNUHUKNOWZHYQCNKMPXHNSGTJWUGCBDVPZHPANDJIISFRIKVITAFKXIIZNIFMGOOUGCEBXYVGGVQZQKNBFXEGIMKDFLJDOKAUOHCQAOTHPJZSLDSFXUKLDXMJQRTEZZVSZUEUPJYLTBHJX");

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
    msg.setTimeStamp(0.6883675425391649);
    msg.setSource(64927U);
    msg.setSourceEntity(85U);
    msg.setDestination(37327U);
    msg.setDestinationEntity(241U);
    const char tmp_msg_0[] = {90, 31, 66, -13, -91, 59, 79, 6, 19, 50, -59, 56, -111, 77, -94, -121, -92, -102, 2, 73, 121, -100, -5, -128, 91, -116, 99, 115, 15, -105, 1, -51, 48, -64, 126, -61, -78, 43, 88, 0, 80, 86, -110, 61, 108, 50, -44, 76, -83, 4, -51, -77, 77, 121, 89, -92, -30, -59, -22, -25, 68, -126, -18, -105, -43, -105, -78, -37, -102, -82, 70, 36, -53, 11, -123, 45, 73, -125, -25, -33, -11, -62, -22, -35, -18, 118, 29, -54, 63, -74, 101, 47, -125, 15, -121, 98, 76, 74, 60, -119, -6, -97, -39, 111, 117, 123, 75, 30, -72, 52, -79, 5, 33, 80, -105, 63};
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
    msg.setTimeStamp(0.6015642592837981);
    msg.setSource(25823U);
    msg.setSourceEntity(254U);
    msg.setDestination(1974U);
    msg.setDestinationEntity(68U);
    const char tmp_msg_0[] = {-111, -62, 29, 65, -55, -113, 87, 84, 89, -66, -83, 5, -52, 16, -90, 85, 102, -9, 74, -28, -39, -68, -105, -51, -51, -40, 112, 111, 66, -57, 115, 52, 9, -81, 86, -59, -70, -128, -13, 1, -106, 59, 93, 32, 90, -124, 5, 119, 126, -17, -79, -114, 89, -57, 67, 12, -1, -48, 116, 115, 56, 96, 33, 49, -120, 97, -35, -59, 19, -41, -115, 11, -117, 17, -84, -10, 103, -99, 25, 14, -68, 48, 91, -17, 110, -103, 85, 72, -124, 101, 92, 21, 81, -17, -111, -71, -49, -110, -121, 29, 109, -118, 115, 121, 34, -106, 115, 12, -5, 65, -41, 99, -67, 15, 65, -39, -69, -97, 111, 28, -55, -57, 36, 59, -81, -114, 110, -58, 16, -69, -122, -101, -36, 43, 37, 124, -111, 26, 39, 100, -35, -77, 89, -119};
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
    msg.setTimeStamp(0.416537838896348);
    msg.setSource(65257U);
    msg.setSourceEntity(164U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(32U);
    const char tmp_msg_0[] = {-53, 50, -38, 36, 53, -40, 105, -53, 11, 113, -97, 99, 83, -60, -117, 23, -77, -27, 67, -12, -32, -9, -51, -107, -69, -78, 46, -122, -103, 34, 38, -48, -89, -90, -121, -116, 4, -126, -80, 101, -41, -75, -31, -98, -82, 59, -126, -68, -79, 48, 11, -81, 65, 23, 109, 21, -49, 99, 0, -60, 10, 120, 45, 112, 104, -29, -70, -3, -39, 43, -1, 84, 61, -37, -82, 94, -59, -124, 104, 77, -80, 78, 28, -6, 70, 49, 79, -5, 56, 64, 110, 84, -114, 41, -53, 86, -55, -113, -106, 62, 57, 82, 99, 44, -12, 60, -90, -38, -16, -88, 114, 22, 57, -56, 90, -60, 81, 24, -23, -20, 109, -54, 79, -73, -123, 102, -6, -60, -15, 69, 52, -14, -100, 48, 52, -10, -106, -121, -119, 112, 53, -3, 20, 36, -4, 119, -57, -75, -120, -118, -26, -82, -23, -96, -116, 108, -94, -3, -72, 75, -17, 3, 19, -21, -101, -109, 79, -52, -68, 96, 10, -93, -104, 112, 28, -81, 97, -50, 80, 12, -65, 27, 42, -65, 27, 108, 36, -15, -26, -15, 56, 93, 41, -97, 114, -41, -91, -95, 112, 46, -26, 2, 46, -128, 89, -47, 11, 25, -100, -40, 78, -12, -119, -62, 126, -99, 37, -107, 103, -17, -77, -59, -108, -39, 99, -82, 70, 19, -65, 24, 115, 98, -32, 122, 35, -62, 71, 27, 40};
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
    msg.setTimeStamp(0.3949172320733676);
    msg.setSource(16770U);
    msg.setSourceEntity(135U);
    msg.setDestination(58319U);
    msg.setDestinationEntity(27U);
    msg.frequency = 2666314278U;
    msg.min_range = 18744U;
    msg.max_range = 6471U;

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
    msg.setTimeStamp(0.3456945392847348);
    msg.setSource(28087U);
    msg.setSourceEntity(215U);
    msg.setDestination(55195U);
    msg.setDestinationEntity(74U);
    msg.frequency = 1193229771U;
    msg.min_range = 31771U;
    msg.max_range = 30309U;

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
    msg.setTimeStamp(0.4718372913176222);
    msg.setSource(5419U);
    msg.setSourceEntity(241U);
    msg.setDestination(39236U);
    msg.setDestinationEntity(98U);
    msg.frequency = 4250089120U;
    msg.min_range = 37829U;
    msg.max_range = 29052U;

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
    msg.setTimeStamp(0.5777170073479786);
    msg.setSource(41121U);
    msg.setSourceEntity(11U);
    msg.setDestination(16317U);
    msg.setDestinationEntity(167U);
    msg.type = 70U;
    msg.frequency = 1705745629U;
    msg.min_range = 54089U;
    msg.max_range = 64416U;
    msg.bits_per_point = 17U;
    msg.scale_factor = 0.38663563402129153;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.22296903788713007;
    tmp_msg_0.beam_height = 0.6056523358046204;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {83, 97, -112, -103, 84, 12, -80, -66, -12, 90, -105, 65, -96, 108, -53, 56, -69, -115, -22, -72, -20, 125, 79, -66, -50, 7, -56, 107, 1, 121, -44, 81, 1, -13, 61, 42, -85, -36, 80, 77, -83, 65, -93, 78, -8, 23, 2, -73, -6, 6, -93, 4, -86, 19, -97, 92, -94, -70, -38, -117, 38, -50, 71, -40, -56, -42, 117, -12, -96, 33, -35, 71, -63, 74, -24, -28, -113, 62, -26, -19, 102, -76, -128, -53, -83, 5, 25, -20, -35, 59, 82, 60, -18, 69, 108, -79, 111, -76, 35, 111, 84, -21, 79, 67, -78, -51, -107, -111, -45, 40, -91, -6, -53, 105, 66, 94, 60, -44};
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
    msg.setTimeStamp(0.46815631958014103);
    msg.setSource(49603U);
    msg.setSourceEntity(13U);
    msg.setDestination(34284U);
    msg.setDestinationEntity(149U);
    msg.type = 12U;
    msg.frequency = 3587444757U;
    msg.min_range = 28857U;
    msg.max_range = 11766U;
    msg.bits_per_point = 172U;
    msg.scale_factor = 0.5636981534874453;
    const char tmp_msg_0[] = {-31, 113, 86, 57, -2, 63, -83, 115, 51, 88, 42, -76, 52, 34, 115, 9, 39, 18, -31, 18, -36, -122, 57, -122, -77, 102, 3, -113, -96, -41, 96, -120, -25, 17, 14, 36, -47, 84, -127, 40, 54, -98, 9, -15, 87, 118, -75, -40, -107, 47, 118, 72, -2, -103, -53, 31, -44, -120, 82, -69, -25, 42, 76, 108, -58, 1, -76, 59, 113, 97, -17, -12, 119, 16, -101, -73, 8, 117, -44, -59, 88, 86, 48, 56, 104, 116, 99, -61, 35, -16, -45, 17, 0, 44, 48, -75, 99, -43, -88, 75, 118, -76, -118, 126, -118, -73, 34, 47, 61, -126, 124, 102, 22, -9, -92, -122, -50, -21, 2, 19, 69, -110, -22, -5, -64, 17, -39, -124, -98, -87, -13, 50, 1, 14, 73, 54, 79, 110, -69, -87, 26, 63, 23, -20, -123, 77, -120, 85, -22, -119, 45, -64, -58, -44, -15, 91, -128, 38, 53, -7, -50, -89, 50, -46, 95, 88, 56, -90, -11, -113, -25, 62, -44, -125};
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
    msg.setTimeStamp(0.9442838092889028);
    msg.setSource(48255U);
    msg.setSourceEntity(168U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(246U);
    msg.type = 184U;
    msg.frequency = 2938070307U;
    msg.min_range = 21045U;
    msg.max_range = 19883U;
    msg.bits_per_point = 60U;
    msg.scale_factor = 0.23716211562886458;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.537542696619906;
    tmp_msg_0.beam_height = 0.26712041407695575;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {94, 22, 23, -73, -82, -71, -10, -3, 59, -6, 75, 107, -19, -99, -114, -92, -24, 4, -13, -88, 24, 27, 92, 124, -41, -118, 25, 35, 71, -94, -36, -48, -113, -67, 39, 0, 121, 100, 126, -31, 59, -6, 44, -96, -13, 102, 105, 5, 65, -71, 101, 31, -48, 9, 114, -67, 43, 19, -83, 66, 71, 78, -107, -95, 56, -17, 101, 78, 56, 51, -4, -27, 93, -53, -87, 21, 91, 68, -29, -105, 64, -23, 108, -60, 14, -72, -50, -84, -108, 103, 36, -31, -26, -61, 0, 4, -57, 31, -20, 101, 7, 27, -81, 86, -103, 52, 99, -81, 104, 55, 63, -50, -126, 73, 125, 12, 99, -86, 37, 28, -74, 92, -36, -50, -49, 78, -9, 85, -53, 84, -62, 95, 24, 112, 8, -46, 86, 52, 99, -8, 102, -104, 92, 6, 69, -51, 3, -101, -25, 23, -107, -5, 73, -109, 14, -114, -2, -6, 1, -72, -56, -66, -116, -93, -37, -31, -85, -76, -122, -58, -96, 74, -88, 92, -23, 51, -71, -91, -27, -118, -120, -9, -78, 122, -48, -61, -7, -52, 87, -62, -4, -109, 106, 111, 65, 91, 37, 18, 62, 107, 120, 91, 116, -34, 7, -19, -20, 79, -97, 113, -70, -2, -27, -100, 15, -21, -19, -25, -18, 95, -18, 92, 57, 103, 11, 51, -14, -25, 5, -102, -32, -88, -39, -9, -111, -9, 89, 121, -116, -22, 90, -75, -76, -54, 100, 65, 64};
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
    msg.setTimeStamp(0.10635485175140336);
    msg.setSource(20634U);
    msg.setSourceEntity(44U);
    msg.setDestination(3199U);
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
    msg.setTimeStamp(0.6938745485077491);
    msg.setSource(48657U);
    msg.setSourceEntity(238U);
    msg.setDestination(28690U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.19839049542818887);
    msg.setSource(15625U);
    msg.setSourceEntity(89U);
    msg.setDestination(45697U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.03682357060759578);
    msg.setSource(38798U);
    msg.setSourceEntity(172U);
    msg.setDestination(35395U);
    msg.setDestinationEntity(242U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.9321236695147682);
    msg.setSource(17629U);
    msg.setSourceEntity(19U);
    msg.setDestination(24507U);
    msg.setDestinationEntity(91U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.7006860798458844);
    msg.setSource(15327U);
    msg.setSourceEntity(234U);
    msg.setDestination(51902U);
    msg.setDestinationEntity(1U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.5272150128770261);
    msg.setSource(33267U);
    msg.setSourceEntity(6U);
    msg.setDestination(43553U);
    msg.setDestinationEntity(190U);
    msg.value = 0.9523154294374321;
    msg.confidence = 0.36648560286446374;
    msg.opmodes.assign("GDDSYHOKFNKHBCASFWMXPBNYADFCAEGDYLOJYVEFDJQRGGXQBESQOMLBKANFKOSUVDKORMARTFHSJYLWXMZBPLFYWPHINTSQOQURLERHLVRHBYQP");

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
    msg.setTimeStamp(0.7004880149942933);
    msg.setSource(59795U);
    msg.setSourceEntity(9U);
    msg.setDestination(38193U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8136123446889226;
    msg.confidence = 0.42715371079953823;
    msg.opmodes.assign("OSUVTTQPGKLHPMVYNWAZVPWOAEQIPSKLYKHCRZHNDULKEXDQEGVCXHAIZFEZWYGPLYOCJBIVBNVSDAOYNEGNALTCJJEUGNZEJELGXYZDXUZWYOKARZLMABHOGPJQBKHTPHNOKZNWWCCPRIFVJSFEBKBQQZCPBGMRRYSAMRWJFWAIXSOOJMBFMFYLCLITXYDCUQDHTVIFMHJHUVQDIKNRPD");

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
    msg.setTimeStamp(0.6824383964027162);
    msg.setSource(51920U);
    msg.setSourceEntity(105U);
    msg.setDestination(34130U);
    msg.setDestinationEntity(69U);
    msg.value = 0.6634862932448511;
    msg.confidence = 0.49008489953490453;
    msg.opmodes.assign("VLJYANMTDBUPOBRXBRFXYHQXXZXBELSZUHFWTPRSFODYICIQTVJMACOPARXFFFVGEYIDZYIZLSYNLQYR");

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
    msg.setTimeStamp(0.1727919416618514);
    msg.setSource(36955U);
    msg.setSourceEntity(139U);
    msg.setDestination(22988U);
    msg.setDestinationEntity(107U);
    msg.itow = 3836918642U;
    msg.lat = 0.7722172475362262;
    msg.lon = 0.4512336258031362;
    msg.height_ell = 0.3112588165128034;
    msg.height_sea = 0.04537908364252352;
    msg.hacc = 0.5410101317958277;
    msg.vacc = 0.2993139985776624;
    msg.vel_n = 0.8130212245092578;
    msg.vel_e = 0.5795872638671501;
    msg.vel_d = 0.7644706743916169;
    msg.speed = 0.7220658136480096;
    msg.gspeed = 0.7693594358668241;
    msg.heading = 0.2858455861745627;
    msg.sacc = 0.2908765113349039;
    msg.cacc = 0.5492642672404244;

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
    msg.setTimeStamp(0.4137872191102465);
    msg.setSource(12296U);
    msg.setSourceEntity(211U);
    msg.setDestination(3268U);
    msg.setDestinationEntity(31U);
    msg.itow = 1294518323U;
    msg.lat = 0.439573522472416;
    msg.lon = 0.1003670421400168;
    msg.height_ell = 0.34619226382045165;
    msg.height_sea = 0.5067249884996838;
    msg.hacc = 0.01588342115531305;
    msg.vacc = 0.4102584728152665;
    msg.vel_n = 0.6531330880974633;
    msg.vel_e = 0.6596323046244006;
    msg.vel_d = 0.3829217291546596;
    msg.speed = 0.8529676284917116;
    msg.gspeed = 0.8838080217347672;
    msg.heading = 0.7743745500471062;
    msg.sacc = 0.47592351634508445;
    msg.cacc = 0.015765186325700897;

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
    msg.setTimeStamp(0.21391843127943855);
    msg.setSource(39238U);
    msg.setSourceEntity(185U);
    msg.setDestination(57358U);
    msg.setDestinationEntity(202U);
    msg.itow = 364989152U;
    msg.lat = 0.13149907049175968;
    msg.lon = 0.9417560841422764;
    msg.height_ell = 0.8118932120433457;
    msg.height_sea = 0.7490217583097633;
    msg.hacc = 0.17641320214850353;
    msg.vacc = 0.114042294661714;
    msg.vel_n = 0.8477538327349796;
    msg.vel_e = 0.10235266794572573;
    msg.vel_d = 0.7912551767152611;
    msg.speed = 0.20382131859943997;
    msg.gspeed = 0.42934400189719557;
    msg.heading = 0.6273636579009223;
    msg.sacc = 0.2817413663713364;
    msg.cacc = 0.36823311836671113;

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
    msg.setTimeStamp(0.7714259301037092);
    msg.setSource(28161U);
    msg.setSourceEntity(59U);
    msg.setDestination(39248U);
    msg.setDestinationEntity(194U);
    msg.id = 158U;
    msg.value = 0.8430848108458076;

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
    msg.setTimeStamp(0.20897726255912963);
    msg.setSource(12993U);
    msg.setSourceEntity(78U);
    msg.setDestination(63193U);
    msg.setDestinationEntity(72U);
    msg.id = 206U;
    msg.value = 0.549052868374689;

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
    msg.setTimeStamp(0.2786712808416467);
    msg.setSource(49487U);
    msg.setSourceEntity(122U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(235U);
    msg.id = 165U;
    msg.value = 0.9126537450312847;

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
    msg.setTimeStamp(0.05481967725612491);
    msg.setSource(20298U);
    msg.setSourceEntity(216U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(213U);
    msg.x = 0.08616250436450223;
    msg.y = 0.12901993607418072;
    msg.z = 0.15362313577348674;
    msg.phi = 0.24648716570547735;
    msg.theta = 0.09480672742116547;
    msg.psi = 0.36208473537002184;

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
    msg.setTimeStamp(0.5078651047293258);
    msg.setSource(55473U);
    msg.setSourceEntity(18U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(120U);
    msg.x = 0.33758225957084964;
    msg.y = 0.0679351930000307;
    msg.z = 0.5030014776301267;
    msg.phi = 0.21984607394922462;
    msg.theta = 0.9220002149324347;
    msg.psi = 0.5281055386491842;

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
    msg.setTimeStamp(0.28933342792667527);
    msg.setSource(53446U);
    msg.setSourceEntity(125U);
    msg.setDestination(64635U);
    msg.setDestinationEntity(51U);
    msg.x = 0.8558474071428226;
    msg.y = 0.11195899170070467;
    msg.z = 0.46317509297184634;
    msg.phi = 0.6348319462063068;
    msg.theta = 0.8772911099420906;
    msg.psi = 0.9032639462391523;

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
    msg.setTimeStamp(0.798489843313989);
    msg.setSource(31895U);
    msg.setSourceEntity(27U);
    msg.setDestination(61058U);
    msg.setDestinationEntity(76U);
    msg.beam_width = 0.42278695271541067;
    msg.beam_height = 0.6642285912773277;

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
    msg.setTimeStamp(0.39591029179763615);
    msg.setSource(54675U);
    msg.setSourceEntity(7U);
    msg.setDestination(59977U);
    msg.setDestinationEntity(137U);
    msg.beam_width = 0.5405652359781848;
    msg.beam_height = 0.7895494050368543;

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
    msg.setTimeStamp(0.016672038925977684);
    msg.setSource(5547U);
    msg.setSourceEntity(185U);
    msg.setDestination(45914U);
    msg.setDestinationEntity(109U);
    msg.beam_width = 0.07596145236993457;
    msg.beam_height = 0.38322153066719367;

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
    msg.setTimeStamp(0.21327596509971536);
    msg.setSource(58568U);
    msg.setSourceEntity(26U);
    msg.setDestination(19589U);
    msg.setDestinationEntity(30U);
    msg.sane = 135U;

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
    msg.setTimeStamp(0.24991412070225416);
    msg.setSource(58665U);
    msg.setSourceEntity(222U);
    msg.setDestination(2413U);
    msg.setDestinationEntity(142U);
    msg.sane = 109U;

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
    msg.setTimeStamp(0.4010086455096772);
    msg.setSource(46365U);
    msg.setSourceEntity(38U);
    msg.setDestination(60785U);
    msg.setDestinationEntity(27U);
    msg.sane = 191U;

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
    msg.setTimeStamp(0.24657669562644047);
    msg.setSource(59586U);
    msg.setSourceEntity(234U);
    msg.setDestination(322U);
    msg.setDestinationEntity(100U);
    msg.id = 225U;
    msg.zoom = 190U;
    msg.action = 115U;

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
    msg.setTimeStamp(0.7270888250763853);
    msg.setSource(60985U);
    msg.setSourceEntity(35U);
    msg.setDestination(37337U);
    msg.setDestinationEntity(127U);
    msg.id = 99U;
    msg.zoom = 233U;
    msg.action = 115U;

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
    msg.setTimeStamp(0.8472998483611782);
    msg.setSource(31623U);
    msg.setSourceEntity(147U);
    msg.setDestination(45762U);
    msg.setDestinationEntity(119U);
    msg.id = 165U;
    msg.zoom = 185U;
    msg.action = 235U;

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
    msg.setTimeStamp(0.6702048901161394);
    msg.setSource(37924U);
    msg.setSourceEntity(174U);
    msg.setDestination(11053U);
    msg.setDestinationEntity(72U);
    msg.id = 122U;
    msg.value = 0.006985960677541314;

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
    msg.setTimeStamp(0.6519581423328845);
    msg.setSource(33251U);
    msg.setSourceEntity(206U);
    msg.setDestination(41047U);
    msg.setDestinationEntity(134U);
    msg.id = 206U;
    msg.value = 0.8420120172830471;

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
    msg.setTimeStamp(0.06800531188622683);
    msg.setSource(36000U);
    msg.setSourceEntity(71U);
    msg.setDestination(63601U);
    msg.setDestinationEntity(181U);
    msg.id = 188U;
    msg.value = 0.6893123094935554;

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
    msg.setTimeStamp(0.5349675254327465);
    msg.setSource(63204U);
    msg.setSourceEntity(28U);
    msg.setDestination(19162U);
    msg.setDestinationEntity(114U);
    msg.id = 95U;
    msg.value = 0.481731935456041;

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
    msg.setTimeStamp(0.7152463861518756);
    msg.setSource(40534U);
    msg.setSourceEntity(106U);
    msg.setDestination(42915U);
    msg.setDestinationEntity(106U);
    msg.id = 159U;
    msg.value = 0.5388807937194174;

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
    msg.setTimeStamp(0.8454889630853079);
    msg.setSource(47308U);
    msg.setSourceEntity(246U);
    msg.setDestination(57153U);
    msg.setDestinationEntity(213U);
    msg.id = 69U;
    msg.value = 0.17067400754780526;

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
    msg.setTimeStamp(0.5154112784992583);
    msg.setSource(21462U);
    msg.setSourceEntity(119U);
    msg.setDestination(39905U);
    msg.setDestinationEntity(11U);
    msg.id = 79U;
    msg.angle = 0.07595204947288137;

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
    msg.setTimeStamp(0.31453371758613424);
    msg.setSource(34249U);
    msg.setSourceEntity(40U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(113U);
    msg.id = 228U;
    msg.angle = 0.4426795948138754;

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
    msg.setTimeStamp(0.42183123489695795);
    msg.setSource(37369U);
    msg.setSourceEntity(224U);
    msg.setDestination(7207U);
    msg.setDestinationEntity(158U);
    msg.id = 3U;
    msg.angle = 0.3161494878112806;

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
    msg.setTimeStamp(0.8816466388094178);
    msg.setSource(39903U);
    msg.setSourceEntity(3U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(175U);
    msg.op = 24U;
    msg.actions.assign("KNXAQZHAKVPHFSKVMZOXIFIILSTWVEVYYDSKUXMBUYBVUFZIGUSBQZHBAOXIJBOMVHLLIVBQTREOYPRZMCHLJNSZWXCWEDPURZOJDRCTKSYMBQJTBULYGXFTEJJWGGRLUOTTCZVVNPYNNKONPEAQITALMOCQRUFFPSGUWDSPQEKXJUJATKYMMAZWFQXJENDBEDDKFDAWNLJAPOQIDGHAXHCMXPDCWW");

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
    msg.setTimeStamp(0.10193918759583032);
    msg.setSource(42835U);
    msg.setSourceEntity(80U);
    msg.setDestination(960U);
    msg.setDestinationEntity(178U);
    msg.op = 203U;
    msg.actions.assign("SUIENNCOFEPUDXYMQWCLLBHLD");

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
    msg.setTimeStamp(0.425454790524732);
    msg.setSource(47844U);
    msg.setSourceEntity(221U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(72U);
    msg.op = 136U;
    msg.actions.assign("BUDVEUBHVUYJHNSECMQJWTNGZJPNDUMQCPQKROUZLQGEZCOUSZKXGJDAXEETNHOLFBBXDYAZUITQIGZEIXANQGCGLAKVSOVBAWXGAOZNTYSYWTPWTPMMNBIBCKRZEBMHNFAARIXQKAMNWQRAHMVLFWCIJSFPJHTOLBLIKFFVHCULEKWFODFWPESXFVLOHTMZQLLXXDTBIPPPDMSYUKYJFRCIDZWOIJSDVQXRWNVEYUHMRKSPYG");

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
    msg.setTimeStamp(0.7782369853825016);
    msg.setSource(8473U);
    msg.setSourceEntity(197U);
    msg.setDestination(42527U);
    msg.setDestinationEntity(216U);
    msg.actions.assign("FLKNNQKIUOZOXMEIBSVMZVKEJMYOFKUYLLAQJNXRNSEBTTMSKCRICS");

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
    msg.setTimeStamp(0.22426745631769407);
    msg.setSource(8492U);
    msg.setSourceEntity(15U);
    msg.setDestination(4870U);
    msg.setDestinationEntity(16U);
    msg.actions.assign("BSAVCQZLJHXVWXYJRIEUVPQDPUAQWUVNYGJZNGKIIMDIETCFEQVJRLECCXSF");

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
    msg.setTimeStamp(0.9863462979151955);
    msg.setSource(20983U);
    msg.setSourceEntity(205U);
    msg.setDestination(36160U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("TOLPHXWINDDLGQLRYJYKEHJWUBPPILVTWGHWJHULSUXLDFYGPDNMKYCIQXIFGDLYBZXPCIFFVDAMUOMMFTLNWZMBQOKGEZXAAQHPGAOYSNXMKJINHIIKLTCBVQMCZ");

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
    msg.setTimeStamp(0.942523112481975);
    msg.setSource(35953U);
    msg.setSourceEntity(97U);
    msg.setDestination(29191U);
    msg.setDestinationEntity(224U);
    msg.button = 242U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.03507332783277517);
    msg.setSource(29324U);
    msg.setSourceEntity(4U);
    msg.setDestination(63398U);
    msg.setDestinationEntity(158U);
    msg.button = 50U;
    msg.value = 21U;

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
    msg.setTimeStamp(0.18169849424455808);
    msg.setSource(13044U);
    msg.setSourceEntity(157U);
    msg.setDestination(47316U);
    msg.setDestinationEntity(210U);
    msg.button = 134U;
    msg.value = 75U;

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
    msg.setTimeStamp(0.408714394898381);
    msg.setSource(239U);
    msg.setSourceEntity(49U);
    msg.setDestination(14920U);
    msg.setDestinationEntity(38U);
    msg.op = 97U;
    msg.text.assign("AOIGTTKJJDOCHCDPEVZQYHGULTELGJATTMHJPPFOSZCTIUBCTJZLZDKBCZWYRUIXXEFAZSUDTRFJNLPMIDFPYJZJBASXFYBNMYSKBOHSSDFBGAOWVVQGOOXQPDPVKNPSHNGBWAVELLQZRCBCAVEKWARCWUFSKZIMKNWOBHMDHLQMQHROREINYWLMUUXRMNVQNZGEPVM");

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
    msg.setTimeStamp(0.26350189396683854);
    msg.setSource(21298U);
    msg.setSourceEntity(132U);
    msg.setDestination(10189U);
    msg.setDestinationEntity(94U);
    msg.op = 141U;
    msg.text.assign("ZXONESAKDTHMAVRTFXBDUBIQCVVKAIYMNFACKTWNWWSNAWCSYSYYSKKRZZMPZSPZYZNMRPBJKEKQDMZVHOPRCQJEBDLFDQQPIMHJJFBWUPRIIRHFSBOIRLVXEPFTJYYQPWGSUQGXTLNGTXWJULDHNGJFILKOINKDSUMBYTMVJOEQFRJRZOACOFWLTLXWLETYEGXPCPLGRGUDBAQUJLVVEEQXHHDF");

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
    msg.setTimeStamp(0.2911831381828067);
    msg.setSource(60772U);
    msg.setSourceEntity(209U);
    msg.setDestination(12953U);
    msg.setDestinationEntity(14U);
    msg.op = 144U;
    msg.text.assign("BLCKTWVYOTUZJGRDGWAIURMXZFYPABSRWSVIFUFPEJODIHNLXQCIVGEPPOQZTSNLKZGOKAMBCJMLRAPSPNPCDWA");

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
    msg.setTimeStamp(0.14575212586635322);
    msg.setSource(2307U);
    msg.setSourceEntity(33U);
    msg.setDestination(19887U);
    msg.setDestinationEntity(194U);
    msg.op = 220U;
    msg.time_remain = 0.5743201236904166;
    msg.sched_time = 0.12632729411085541;

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
    msg.setTimeStamp(0.08459852343784446);
    msg.setSource(26353U);
    msg.setSourceEntity(83U);
    msg.setDestination(42293U);
    msg.setDestinationEntity(90U);
    msg.op = 38U;
    msg.time_remain = 0.3143165340319116;
    msg.sched_time = 0.12791760290920628;

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
    msg.setTimeStamp(0.26845767455497405);
    msg.setSource(15226U);
    msg.setSourceEntity(162U);
    msg.setDestination(7092U);
    msg.setDestinationEntity(191U);
    msg.op = 2U;
    msg.time_remain = 0.44985075809077524;
    msg.sched_time = 0.054649740923415235;

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
    msg.setTimeStamp(0.03829252513631387);
    msg.setSource(31226U);
    msg.setSourceEntity(32U);
    msg.setDestination(50755U);
    msg.setDestinationEntity(197U);
    msg.name.assign("POOZQQDGCXJXDFETCPNIQDVSRCQDRNQNQNDEIRJBFYMRIUUUHQBHHWWGLHISOTAIRJSWISPPYVGKYGNJCBNPMAICVNJUHHXNAYURBFOXKSULZVDXGDUXLFKLOYUEDSVKFLEPXWWSFEMRCIDAVWOHJAVTJOTMCYZTACHITXEDOPJEWZFKOLBVFQSALBCTBKZQTIGPGMGKFHMRKTAEAGMUJBVZZQFMRWYREYTBLNMXS");
    msg.op = 249U;
    msg.sched_time = 0.545722917758521;

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
    msg.setTimeStamp(0.7948071433588645);
    msg.setSource(6139U);
    msg.setSourceEntity(218U);
    msg.setDestination(51936U);
    msg.setDestinationEntity(93U);
    msg.name.assign("KFCQTXJNZNAPLISCDLRSJYLDKGXUMADEIOWTNHJVJELYSCCGWNZRNPMQFUOVITCKCBAZOHTKSOQHQFLLYNYFIDJEBWUNFZFBGVRBAEUTQCOXWDXDLRNRMVTWHBXJUDUMOKRVPWGTKAETUKSYYZEGAWFQHPHVINTAZUDQMAGREJOAXKUZZGPBYQSIVPHIGQVMOIJVQDLXMCNEVPBCBSIZSBRDGYIJRJPULFZHLXPOOWGSYWH");
    msg.op = 235U;
    msg.sched_time = 0.9669841792933973;

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
    msg.setTimeStamp(0.055926418416419654);
    msg.setSource(26884U);
    msg.setSourceEntity(196U);
    msg.setDestination(50549U);
    msg.setDestinationEntity(85U);
    msg.name.assign("UQLPTKDPSXAEYEYTLJATCNALASDVOYBGBFCRRKWXWXWLFEIPU");
    msg.op = 0U;
    msg.sched_time = 0.5808369441032949;

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
    msg.setTimeStamp(0.8392957262411226);
    msg.setSource(1811U);
    msg.setSourceEntity(133U);
    msg.setDestination(1799U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.019340315698808563);
    msg.setSource(52959U);
    msg.setSourceEntity(17U);
    msg.setDestination(43222U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.7159314114928802);
    msg.setSource(20935U);
    msg.setSourceEntity(157U);
    msg.setDestination(61232U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.578267432070651);
    msg.setSource(20009U);
    msg.setSourceEntity(39U);
    msg.setDestination(23728U);
    msg.setDestinationEntity(107U);
    msg.name.assign("EBDVACRDHDBHB");
    msg.state = 138U;

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
    msg.setTimeStamp(0.012654932691616994);
    msg.setSource(62229U);
    msg.setSourceEntity(55U);
    msg.setDestination(25401U);
    msg.setDestinationEntity(184U);
    msg.name.assign("PMHDXYBXSQRFORGBPRAISEUWFPVGCGSMJVDCJUDYNALBIBJRGIHZIJOWOUHXECNQIEMRIEJAMXYAKTWNFHKRJBQHGZFVCNLFSUD");
    msg.state = 156U;

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
    msg.setTimeStamp(0.774887838986367);
    msg.setSource(21761U);
    msg.setSourceEntity(158U);
    msg.setDestination(12800U);
    msg.setDestinationEntity(228U);
    msg.name.assign("OIIKZVIECOUDACIBRMBVKGKPFSXTFPFUOVJGMASJFZHEXJJZDDJHYQLUTALGCCLWJRPPBXEMPBVWDFQOXHSXYGIJESEPBAUUWFUKLGIPHOONTXKGDKRZHEJWANFNRLENGPQCQXVLFZWBDFPDRUWYCRDHCRMVTAJWZQFNHWIYAHMNMVQVSUCTQXORSLYRQSBTWQLIIC");
    msg.state = 214U;

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
    msg.setTimeStamp(0.7621544272985147);
    msg.setSource(55522U);
    msg.setSourceEntity(10U);
    msg.setDestination(61968U);
    msg.setDestinationEntity(71U);
    msg.name.assign("KQMQSFVHBJJYXSHODKAZIOXIPEEDMTLILVQFJMHMFENOZVYDHAWZKNXCBSXPZMDUVMIJPETKGKNEXOIUIWQCYRNXWWRKYVWRAGIAVFEJDYXKLRZUGGJSDQUOFULHUQDHRYYGOAABDBBFCNEEFRZVEKNWCCSPZRWHLWUGCOOXLNIQVODSZTGNBJSETUGVYLQLTBUGJFHPTPILBCJQXVOSHUAPJRTXPB");
    msg.value = 240U;

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
    msg.setTimeStamp(0.22152526501156122);
    msg.setSource(58372U);
    msg.setSourceEntity(55U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(159U);
    msg.name.assign("SWOPPJPEVURBHPLS");
    msg.value = 136U;

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
    msg.setTimeStamp(0.8355758404810035);
    msg.setSource(4986U);
    msg.setSourceEntity(248U);
    msg.setDestination(31822U);
    msg.setDestinationEntity(175U);
    msg.name.assign("DKIBJQFEZZRFOEBQBOAUBCSEIWVNYADUTBEZGEKTEHTWKUEBLNBDHOLOSRYFCVGWFXETSZNGZWNPKLULARTDHLMNRVPKMRFJQGZQDCRUJWVJXDMBGYYAPYTCFQHFBATFOFSRXZVJHNJJPYIAHRLVIOQMPWUI");
    msg.value = 96U;

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
    msg.setTimeStamp(0.008751341296778459);
    msg.setSource(45075U);
    msg.setSourceEntity(27U);
    msg.setDestination(57447U);
    msg.setDestinationEntity(222U);
    msg.name.assign("MGSVNXQGSWDISVXTEXRMQAGGFMNIDBAQPETPNSJCICJLDYZYOUZLKBUYGUBPMKRRIVHZLJXDEUWZWJMKFMGHKCRSRJTZHKBPMNGJBKADIFUBQLNNDJGKEAQFXZKWOJOUAYLRWCNHKCVWTXAOCSQHARHJGGYIHZFFWOIUUYNTVXPQYOUYPCLAIMHVOEEBVZEVBVVDNSOBEAHMXELSQWMHQXFNDWTAFRSKZJTZOLFWDPTYIPYBDTLTR");

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
    msg.setTimeStamp(0.4126282276468676);
    msg.setSource(57716U);
    msg.setSourceEntity(25U);
    msg.setDestination(33763U);
    msg.setDestinationEntity(111U);
    msg.name.assign("KGNFYQRRLDTBTMFTJCOCWPSOMLZXHVZDRILCTOKEJOGSYBAVWTXMJSVWZAMKNKTQGCEXEFRJLRFMJGBCTPRCXXHECJPOTVOFEEMRYPAZXICXLPIJDGPPVJRCZHOYBTAWHMLIUSFQKNYZGHLVUTIWAWVZBQKLFQXHJ");

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
    msg.setTimeStamp(0.23398120672902745);
    msg.setSource(30102U);
    msg.setSourceEntity(59U);
    msg.setDestination(33436U);
    msg.setDestinationEntity(49U);
    msg.name.assign("FEXLSKZRFPFOYXNQKDRTJOQHPUALKXJMXEQFFMHTUCPDRULI");

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
    msg.setTimeStamp(0.7191723010783995);
    msg.setSource(39856U);
    msg.setSourceEntity(84U);
    msg.setDestination(19113U);
    msg.setDestinationEntity(161U);
    msg.name.assign("IGXGLUJFJXUKNKZFEEMTESMYHPXRDKDLVPEMNDILTICDSLXBZYFOTMSVGYZNVUYZHWFWIMBWXSUSDGFRRHAKJNHDSJAAAMONROLAYJJOBRGQIAPKBGHNEPRKTYIRBCCWTTSQXHMQUBXDCTGZSEHKVGZDHZTSAHKFKVJEWXBQQNWODLIRLOAUQGOWVYMZHCPULQNIEACZXGLDQMOCNFCOWPPBBFEFCZ");
    msg.value = 182U;

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
    msg.setTimeStamp(0.6505706562310093);
    msg.setSource(7843U);
    msg.setSourceEntity(191U);
    msg.setDestination(35990U);
    msg.setDestinationEntity(118U);
    msg.name.assign("OQBUIUGAYPWTUUXUIRARHSPEMYKGWDAYXLYJOPXCVFEKPVDAIJUCNGLWAGFCZQMIPQEJRFNXQMJJKQWSZNMZOBWBMZHTNHILCVUKDASTSLMVJXKEJPYVLGRMNSSMBKRXQ");
    msg.value = 49U;

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
    msg.setTimeStamp(0.9202348126929952);
    msg.setSource(59303U);
    msg.setSourceEntity(228U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(196U);
    msg.name.assign("NCVIKMUHORCDJFBWXXKLRLBBEHNZINYYVPXHKERYMQLQPJZCAGBGUFQJTNCNAAKBSXGMFIDOQYBRRBOJHBSSHAKZFJGDIDJZOQOGJOIOZIGQWFSUYQWAGUBEQPWOUPWNCXGWN");
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
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.646417536327669);
    msg.setSource(5647U);
    msg.setSourceEntity(241U);
    msg.setDestination(57207U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.19579929517832995;
    msg.lon = 0.8007765846736307;
    msg.height = 0.5106787016761898;
    msg.x = 0.1675729992631667;
    msg.y = 0.864058913241677;
    msg.z = 0.9875280449359153;
    msg.phi = 0.3137918157109799;
    msg.theta = 0.9535230995685756;
    msg.psi = 0.13805107428435637;
    msg.u = 0.6728703180375819;
    msg.v = 0.6422364310708105;
    msg.w = 0.026273450669373033;
    msg.vx = 0.16210519287634262;
    msg.vy = 0.2418599490142317;
    msg.vz = 0.7251275455365196;
    msg.p = 0.33904647895185636;
    msg.q = 0.744450202210202;
    msg.r = 0.2777799848354765;
    msg.depth = 0.4005962225654903;
    msg.alt = 0.9592141109682233;

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
    msg.setTimeStamp(0.45125540970848);
    msg.setSource(54154U);
    msg.setSourceEntity(46U);
    msg.setDestination(16520U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.8868023777070703;
    msg.lon = 0.23071841937841397;
    msg.height = 0.456635535095989;
    msg.x = 0.8745185558093721;
    msg.y = 0.9552151713334963;
    msg.z = 0.9819865517994285;
    msg.phi = 0.05210308430069699;
    msg.theta = 0.06303696627731237;
    msg.psi = 0.14536143072707552;
    msg.u = 0.7088060856910499;
    msg.v = 0.5045660008557645;
    msg.w = 0.03656331180466721;
    msg.vx = 0.001637366500697901;
    msg.vy = 0.14976484680090973;
    msg.vz = 0.44597260745699274;
    msg.p = 0.21244026906830982;
    msg.q = 0.3180376969961265;
    msg.r = 0.8084447843828576;
    msg.depth = 0.6904472859721277;
    msg.alt = 0.28809913824195144;

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
    msg.setTimeStamp(0.1841157624617773);
    msg.setSource(4774U);
    msg.setSourceEntity(41U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.14571959706308246;
    msg.lon = 0.9353142010873268;
    msg.height = 0.4737529960753284;
    msg.x = 0.6262984929262094;
    msg.y = 0.409732197204129;
    msg.z = 0.3498396336543369;
    msg.phi = 0.7937488788118424;
    msg.theta = 0.0434381873115951;
    msg.psi = 0.7520258327940775;
    msg.u = 0.38086383231654897;
    msg.v = 0.5942740052086246;
    msg.w = 0.6715178328009778;
    msg.vx = 0.8682402515197727;
    msg.vy = 0.7663222366357243;
    msg.vz = 0.047608471566206734;
    msg.p = 0.1216266145569489;
    msg.q = 0.9987086221485588;
    msg.r = 0.1230767065085876;
    msg.depth = 0.9975762977260171;
    msg.alt = 0.07313146680151916;

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
    msg.setTimeStamp(0.3275873928742974);
    msg.setSource(19311U);
    msg.setSourceEntity(91U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(201U);
    msg.x = 0.2572104394642456;
    msg.y = 0.6755722148457366;
    msg.z = 0.23917566188374084;

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
    msg.setTimeStamp(0.9917044225416781);
    msg.setSource(59298U);
    msg.setSourceEntity(162U);
    msg.setDestination(54869U);
    msg.setDestinationEntity(139U);
    msg.x = 0.8880053067908789;
    msg.y = 0.8026693620218176;
    msg.z = 0.07693245612133293;

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
    msg.setTimeStamp(0.1937704292660346);
    msg.setSource(4547U);
    msg.setSourceEntity(85U);
    msg.setDestination(2573U);
    msg.setDestinationEntity(192U);
    msg.x = 0.1981411210610322;
    msg.y = 0.9241892365253408;
    msg.z = 0.053342138002491435;

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
    msg.setTimeStamp(0.5044452499845078);
    msg.setSource(33428U);
    msg.setSourceEntity(29U);
    msg.setDestination(23812U);
    msg.setDestinationEntity(138U);
    msg.value = 0.41111719367414956;

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
    msg.setTimeStamp(0.3329613257345745);
    msg.setSource(43615U);
    msg.setSourceEntity(217U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(193U);
    msg.value = 0.37605800954585145;

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
    msg.setTimeStamp(0.5618272107971758);
    msg.setSource(4035U);
    msg.setSourceEntity(80U);
    msg.setDestination(50066U);
    msg.setDestinationEntity(184U);
    msg.value = 0.2185654165910016;

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
    msg.setTimeStamp(0.6552872863458189);
    msg.setSource(25124U);
    msg.setSourceEntity(8U);
    msg.setDestination(33694U);
    msg.setDestinationEntity(59U);
    msg.value = 0.28064033305460334;

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
    msg.setTimeStamp(0.948941039757562);
    msg.setSource(58165U);
    msg.setSourceEntity(141U);
    msg.setDestination(30055U);
    msg.setDestinationEntity(133U);
    msg.value = 0.493984909381464;

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
    msg.setTimeStamp(0.19098630778151715);
    msg.setSource(2552U);
    msg.setSourceEntity(197U);
    msg.setDestination(11733U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2607228326258473;

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
    msg.setTimeStamp(0.7899519427391674);
    msg.setSource(33705U);
    msg.setSourceEntity(36U);
    msg.setDestination(18065U);
    msg.setDestinationEntity(198U);
    msg.x = 0.9993558431109054;
    msg.y = 0.4804311935059754;
    msg.z = 0.2668129357382458;
    msg.phi = 0.4798278825081831;
    msg.theta = 0.09229285592540548;
    msg.psi = 0.19674716014613292;
    msg.p = 0.591239108855147;
    msg.q = 0.5525043292461509;
    msg.r = 0.36250477944559556;
    msg.u = 0.0763618078401731;
    msg.v = 0.7418013729005601;
    msg.w = 0.41326787136569954;
    msg.bias_psi = 0.9674713179836522;
    msg.bias_r = 0.6162893768365072;

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
    msg.setTimeStamp(0.18337482765451107);
    msg.setSource(55301U);
    msg.setSourceEntity(81U);
    msg.setDestination(36214U);
    msg.setDestinationEntity(142U);
    msg.x = 0.6881981041382992;
    msg.y = 0.2123854691446052;
    msg.z = 0.44164219333516597;
    msg.phi = 0.9140838024827952;
    msg.theta = 0.7987583510846826;
    msg.psi = 0.753047688691021;
    msg.p = 0.6479642708392378;
    msg.q = 0.7499940369087861;
    msg.r = 0.04749098854014944;
    msg.u = 0.03331258202681764;
    msg.v = 0.546741666956782;
    msg.w = 0.6992329483686613;
    msg.bias_psi = 0.17741495192062606;
    msg.bias_r = 0.7623614147131624;

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
    msg.setTimeStamp(0.5390837663241128);
    msg.setSource(30697U);
    msg.setSourceEntity(111U);
    msg.setDestination(40207U);
    msg.setDestinationEntity(159U);
    msg.x = 0.4118051768560882;
    msg.y = 0.6315957633750564;
    msg.z = 0.21326305251441546;
    msg.phi = 0.19796889681183605;
    msg.theta = 0.08045969008263631;
    msg.psi = 0.25026691593258565;
    msg.p = 0.32415163777108114;
    msg.q = 0.7470618656592997;
    msg.r = 0.2381021749430714;
    msg.u = 0.8775972729415126;
    msg.v = 0.11483415757256576;
    msg.w = 0.281034056338784;
    msg.bias_psi = 0.7064757937376657;
    msg.bias_r = 0.27755475207822067;

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
    msg.setTimeStamp(0.7119694691256084);
    msg.setSource(38020U);
    msg.setSourceEntity(207U);
    msg.setDestination(37119U);
    msg.setDestinationEntity(153U);
    msg.bias_psi = 0.3464537690189219;
    msg.bias_r = 0.48998342894957714;
    msg.cog = 0.9641104256328422;
    msg.cyaw = 0.42955849400194757;
    msg.lbl_rej_level = 0.1442388524931737;
    msg.gps_rej_level = 0.3028301047921017;
    msg.custom_x = 0.6055028130694734;
    msg.custom_y = 0.28285157148470996;
    msg.custom_z = 0.44061416864444203;

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
    msg.setTimeStamp(0.06018350350215851);
    msg.setSource(6992U);
    msg.setSourceEntity(141U);
    msg.setDestination(3618U);
    msg.setDestinationEntity(127U);
    msg.bias_psi = 0.785547000255803;
    msg.bias_r = 0.005279690941218496;
    msg.cog = 0.5163904667847131;
    msg.cyaw = 0.4257593110656813;
    msg.lbl_rej_level = 0.19441421382703838;
    msg.gps_rej_level = 0.6621117672394566;
    msg.custom_x = 0.0562110803443836;
    msg.custom_y = 0.9705282456537951;
    msg.custom_z = 0.19001958301612465;

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
    msg.setTimeStamp(0.1426086660903001);
    msg.setSource(17342U);
    msg.setSourceEntity(232U);
    msg.setDestination(5823U);
    msg.setDestinationEntity(82U);
    msg.bias_psi = 0.15225818330612328;
    msg.bias_r = 0.8870287797227199;
    msg.cog = 0.670713050960214;
    msg.cyaw = 0.9437788383246014;
    msg.lbl_rej_level = 0.03490814177734014;
    msg.gps_rej_level = 0.27125594113901386;
    msg.custom_x = 0.7059527588575911;
    msg.custom_y = 0.3075316765818278;
    msg.custom_z = 0.5886075545336883;

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
    msg.setTimeStamp(0.048655774960641995);
    msg.setSource(16616U);
    msg.setSourceEntity(157U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(207U);
    msg.utc_time = 0.8813942994423138;
    msg.reason = 163U;

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
    msg.setTimeStamp(0.15184379893545552);
    msg.setSource(13966U);
    msg.setSourceEntity(104U);
    msg.setDestination(45233U);
    msg.setDestinationEntity(1U);
    msg.utc_time = 0.1449755894460817;
    msg.reason = 26U;

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
    msg.setTimeStamp(0.33435071456403576);
    msg.setSource(23230U);
    msg.setSourceEntity(117U);
    msg.setDestination(20039U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.5723792777392034;
    msg.reason = 46U;

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
    msg.setTimeStamp(0.8046506812766535);
    msg.setSource(51587U);
    msg.setSourceEntity(184U);
    msg.setDestination(53068U);
    msg.setDestinationEntity(123U);
    msg.id = 4U;
    msg.range = 0.7113641956402167;
    msg.acceptance = 89U;

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
    msg.setTimeStamp(0.9051098441813329);
    msg.setSource(21027U);
    msg.setSourceEntity(53U);
    msg.setDestination(15303U);
    msg.setDestinationEntity(132U);
    msg.id = 22U;
    msg.range = 0.6026346045927738;
    msg.acceptance = 132U;

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
    msg.setTimeStamp(0.9567808558656224);
    msg.setSource(57770U);
    msg.setSourceEntity(239U);
    msg.setDestination(63785U);
    msg.setDestinationEntity(25U);
    msg.id = 191U;
    msg.range = 0.9926640094013087;
    msg.acceptance = 194U;

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
    msg.setTimeStamp(0.20304309203297588);
    msg.setSource(41239U);
    msg.setSourceEntity(213U);
    msg.setDestination(63408U);
    msg.setDestinationEntity(160U);
    msg.type = 36U;
    msg.reason = 102U;
    msg.value = 0.141014853603475;
    msg.timestep = 0.2692430817266094;

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
    msg.setTimeStamp(0.3904644830423629);
    msg.setSource(7903U);
    msg.setSourceEntity(17U);
    msg.setDestination(14473U);
    msg.setDestinationEntity(173U);
    msg.type = 217U;
    msg.reason = 75U;
    msg.value = 0.9630658860606134;
    msg.timestep = 0.32461693835995087;

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
    msg.setTimeStamp(0.6866093185239757);
    msg.setSource(23924U);
    msg.setSourceEntity(25U);
    msg.setDestination(57121U);
    msg.setDestinationEntity(253U);
    msg.type = 66U;
    msg.reason = 111U;
    msg.value = 0.41636103203249875;
    msg.timestep = 0.12308688621455133;

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
    msg.setTimeStamp(0.8959274387398898);
    msg.setSource(14398U);
    msg.setSourceEntity(184U);
    msg.setDestination(9658U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.41121666851482575);
    msg.setSource(62475U);
    msg.setSourceEntity(215U);
    msg.setDestination(1254U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.5222820002519893);
    msg.setSource(14418U);
    msg.setSourceEntity(73U);
    msg.setDestination(60665U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.7223965733310713);
    msg.setSource(62864U);
    msg.setSourceEntity(225U);
    msg.setDestination(15572U);
    msg.setDestinationEntity(207U);
    msg.beacon.assign("JSDXEJOJEFFHKBNSMZHCYXZPZRPXLVEUEBAVTDCVMFJP");
    msg.x = 0.48418485951994217;
    msg.y = 0.6155274148776544;
    msg.depth = 0.9745972011466222;
    msg.var_x = 0.06627078784477713;
    msg.var_y = 0.21959168624240966;

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
    msg.setTimeStamp(0.41594814553386683);
    msg.setSource(56172U);
    msg.setSourceEntity(196U);
    msg.setDestination(10770U);
    msg.setDestinationEntity(165U);
    msg.beacon.assign("ALICJNRTOQQSYXJJMKGIJVWTDUMWDDMVAUZLVEXCRAMUXLJDNP");
    msg.x = 0.2531328636141329;
    msg.y = 0.9430840533513681;
    msg.depth = 0.8762865736026407;
    msg.var_x = 0.4347301222567458;
    msg.var_y = 0.33874684374781605;

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
    msg.setTimeStamp(0.357120248801307);
    msg.setSource(35899U);
    msg.setSourceEntity(68U);
    msg.setDestination(4020U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("OQPFZUFLVBFNOSFQTNQXITHKRXFNTSZADUFGCNEGVCXYIPSGZZTIFGMCPWSKVDSCGUOWLECJRWZVIZMUEIAJKBRXVEVGQSBYOOYZMJDYSUTTNAPTEGHWBTIJBFHHWKKADY");
    msg.x = 0.13494437643925383;
    msg.y = 0.9034643348687598;
    msg.depth = 0.48484958210594775;
    msg.var_x = 0.4497435043938288;
    msg.var_y = 0.1940618691065894;

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
    msg.setTimeStamp(0.9387588251583674);
    msg.setSource(62644U);
    msg.setSourceEntity(157U);
    msg.setDestination(262U);
    msg.setDestinationEntity(241U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.8707621744264229);
    msg.setSource(18359U);
    msg.setSourceEntity(74U);
    msg.setDestination(49788U);
    msg.setDestinationEntity(177U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.4533858319901386);
    msg.setSource(62983U);
    msg.setSourceEntity(245U);
    msg.setDestination(8419U);
    msg.setDestinationEntity(93U);
    msg.state = 191U;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.8810077910119084);
    msg.setSource(35248U);
    msg.setSourceEntity(219U);
    msg.setDestination(44808U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9530886090032952;

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
    msg.setTimeStamp(0.14160612807787543);
    msg.setSource(35513U);
    msg.setSourceEntity(108U);
    msg.setDestination(45710U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7792283840304626;

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
    msg.setTimeStamp(0.8154023965276987);
    msg.setSource(52154U);
    msg.setSourceEntity(184U);
    msg.setDestination(57105U);
    msg.setDestinationEntity(11U);
    msg.value = 0.5474783705529797;

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
    msg.setTimeStamp(0.04187390451163642);
    msg.setSource(63137U);
    msg.setSourceEntity(72U);
    msg.setDestination(4638U);
    msg.setDestinationEntity(84U);
    msg.value = 0.521336020249398;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.13308650325437266);
    msg.setSource(65098U);
    msg.setSourceEntity(103U);
    msg.setDestination(26997U);
    msg.setDestinationEntity(213U);
    msg.value = 0.23587539047830308;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.8537091007886849);
    msg.setSource(31289U);
    msg.setSourceEntity(166U);
    msg.setDestination(28200U);
    msg.setDestinationEntity(244U);
    msg.value = 0.9617433647292415;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.0996273313891699);
    msg.setSource(30600U);
    msg.setSourceEntity(232U);
    msg.setDestination(32551U);
    msg.setDestinationEntity(250U);
    msg.value = 0.13476709453911806;
    msg.speed_units = 24U;

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
    msg.setTimeStamp(0.5920061710544964);
    msg.setSource(28088U);
    msg.setSourceEntity(188U);
    msg.setDestination(11195U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8426703712903947;
    msg.speed_units = 62U;

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
    msg.setTimeStamp(0.8258176769101684);
    msg.setSource(54144U);
    msg.setSourceEntity(190U);
    msg.setDestination(20177U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9392648322557992;
    msg.speed_units = 26U;

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
    msg.setTimeStamp(0.2136310170292849);
    msg.setSource(39238U);
    msg.setSourceEntity(109U);
    msg.setDestination(47077U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7555645687429838;

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
    msg.setTimeStamp(0.8635905335707098);
    msg.setSource(59563U);
    msg.setSourceEntity(175U);
    msg.setDestination(61857U);
    msg.setDestinationEntity(132U);
    msg.value = 0.4233594302501231;

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
    msg.setTimeStamp(0.8664289383758665);
    msg.setSource(22809U);
    msg.setSourceEntity(156U);
    msg.setDestination(24683U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5621381910786097;

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
    msg.setTimeStamp(0.671472961370095);
    msg.setSource(48562U);
    msg.setSourceEntity(177U);
    msg.setDestination(56275U);
    msg.setDestinationEntity(181U);
    msg.value = 0.3332231171975373;

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
    msg.setTimeStamp(0.4318042561538711);
    msg.setSource(5060U);
    msg.setSourceEntity(66U);
    msg.setDestination(44074U);
    msg.setDestinationEntity(33U);
    msg.value = 0.09698181722497878;

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
    msg.setTimeStamp(0.9989354571850741);
    msg.setSource(48632U);
    msg.setSourceEntity(254U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(33U);
    msg.value = 0.5045503183479686;

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
    msg.setTimeStamp(0.5247605455186153);
    msg.setSource(27326U);
    msg.setSourceEntity(212U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(212U);
    msg.value = 0.728668786020695;

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
    msg.setTimeStamp(0.7669894931348242);
    msg.setSource(29424U);
    msg.setSourceEntity(48U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0712588034890348;

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
    msg.setTimeStamp(0.16092952150812123);
    msg.setSource(2186U);
    msg.setSourceEntity(123U);
    msg.setDestination(5505U);
    msg.setDestinationEntity(115U);
    msg.value = 0.46213328192162595;

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
    msg.setTimeStamp(0.18773901674454307);
    msg.setSource(15222U);
    msg.setSourceEntity(65U);
    msg.setDestination(10292U);
    msg.setDestinationEntity(163U);
    msg.start_lat = 0.9024505676379595;
    msg.start_lon = 0.1285242876907461;
    msg.start_z = 0.319587820231959;
    msg.start_z_units = 96U;
    msg.end_lat = 0.7067972054225655;
    msg.end_lon = 0.7791326786266648;
    msg.end_z = 0.5573840277670511;
    msg.end_z_units = 67U;
    msg.speed = 0.354448521448831;
    msg.speed_units = 67U;
    msg.lradius = 0.059549808497937784;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.8863471264062581);
    msg.setSource(59104U);
    msg.setSourceEntity(92U);
    msg.setDestination(37409U);
    msg.setDestinationEntity(212U);
    msg.start_lat = 0.02678720684417546;
    msg.start_lon = 0.2796723259329482;
    msg.start_z = 0.4946759241083676;
    msg.start_z_units = 195U;
    msg.end_lat = 0.5139748550005596;
    msg.end_lon = 0.5538699027697286;
    msg.end_z = 0.9087550950827175;
    msg.end_z_units = 115U;
    msg.speed = 0.06112594077782307;
    msg.speed_units = 204U;
    msg.lradius = 0.6732557618842145;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.022049538129644275);
    msg.setSource(21370U);
    msg.setSourceEntity(167U);
    msg.setDestination(63422U);
    msg.setDestinationEntity(238U);
    msg.start_lat = 0.9815162456590366;
    msg.start_lon = 0.3791451132750078;
    msg.start_z = 0.7150096227521652;
    msg.start_z_units = 142U;
    msg.end_lat = 0.3363542997390856;
    msg.end_lon = 0.2557249104315049;
    msg.end_z = 0.7075458518753438;
    msg.end_z_units = 122U;
    msg.speed = 0.07916254096871356;
    msg.speed_units = 229U;
    msg.lradius = 0.947591919402129;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.22928438979861165);
    msg.setSource(13335U);
    msg.setSourceEntity(81U);
    msg.setDestination(17172U);
    msg.setDestinationEntity(118U);
    msg.x = 0.49382146290617235;
    msg.y = 0.7117541774711722;
    msg.z = 0.037515933198345675;
    msg.k = 0.8103894718562132;
    msg.m = 0.20411646183136423;
    msg.n = 0.5958124034109186;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.2892849748841547);
    msg.setSource(64367U);
    msg.setSourceEntity(3U);
    msg.setDestination(6603U);
    msg.setDestinationEntity(249U);
    msg.x = 0.7412105619529971;
    msg.y = 0.400229440983523;
    msg.z = 0.5211027135692318;
    msg.k = 0.031207764838761642;
    msg.m = 0.6678264648116069;
    msg.n = 0.9787391702767734;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.14842829252005174);
    msg.setSource(17302U);
    msg.setSourceEntity(228U);
    msg.setDestination(54819U);
    msg.setDestinationEntity(18U);
    msg.x = 0.44566625559834716;
    msg.y = 0.4637358988575726;
    msg.z = 0.27489058620216034;
    msg.k = 0.9535289289565145;
    msg.m = 0.6876365819218963;
    msg.n = 0.7123009765232059;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.9900888926260963);
    msg.setSource(61124U);
    msg.setSourceEntity(104U);
    msg.setDestination(24649U);
    msg.setDestinationEntity(221U);
    msg.value = 0.404150533354645;

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
    msg.setTimeStamp(0.09201511503132942);
    msg.setSource(9702U);
    msg.setSourceEntity(153U);
    msg.setDestination(13065U);
    msg.setDestinationEntity(129U);
    msg.value = 0.06975592715398493;

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
    msg.setTimeStamp(0.5533887841761469);
    msg.setSource(59630U);
    msg.setSourceEntity(123U);
    msg.setDestination(11869U);
    msg.setDestinationEntity(12U);
    msg.value = 0.8070550401562594;

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
    msg.setTimeStamp(0.9169454637457348);
    msg.setSource(20149U);
    msg.setSourceEntity(11U);
    msg.setDestination(62260U);
    msg.setDestinationEntity(145U);
    msg.u = 0.4663895075827512;
    msg.v = 0.06180992707223476;
    msg.w = 0.7951836212382454;
    msg.p = 0.8608770886595465;
    msg.q = 0.6357713609009311;
    msg.r = 0.09169834051000392;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.4205763056822963);
    msg.setSource(20581U);
    msg.setSourceEntity(77U);
    msg.setDestination(47829U);
    msg.setDestinationEntity(15U);
    msg.u = 0.3729951099327551;
    msg.v = 0.9425008715910865;
    msg.w = 0.44785544182561166;
    msg.p = 0.8541346537742182;
    msg.q = 0.7065773394892111;
    msg.r = 0.1280754820625657;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.9198809173351546);
    msg.setSource(47778U);
    msg.setSourceEntity(76U);
    msg.setDestination(13682U);
    msg.setDestinationEntity(161U);
    msg.u = 0.7403933091095133;
    msg.v = 0.591001530875983;
    msg.w = 0.9969037444097473;
    msg.p = 0.21362420746502608;
    msg.q = 0.6515835280726157;
    msg.r = 0.7115847980088557;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.7118572753906215);
    msg.setSource(33239U);
    msg.setSourceEntity(247U);
    msg.setDestination(242U);
    msg.setDestinationEntity(117U);
    msg.start_lat = 0.6769718163935231;
    msg.start_lon = 0.17181707569649018;
    msg.start_z = 0.7671811286538252;
    msg.start_z_units = 187U;
    msg.end_lat = 0.7079415649252946;
    msg.end_lon = 0.5554003149881773;
    msg.end_z = 0.7714323375168364;
    msg.end_z_units = 31U;
    msg.lradius = 0.5119436448156041;
    msg.flags = 242U;
    msg.x = 0.12312494675619867;
    msg.y = 0.7711306409106428;
    msg.z = 0.9602713631016283;
    msg.vx = 0.38446179395055735;
    msg.vy = 0.0232336563961133;
    msg.vz = 0.33837963752355316;
    msg.course_error = 0.8192661439849755;
    msg.eta = 37479U;

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
    msg.setTimeStamp(0.5046232716537733);
    msg.setSource(10700U);
    msg.setSourceEntity(84U);
    msg.setDestination(64664U);
    msg.setDestinationEntity(184U);
    msg.start_lat = 0.6805087669255974;
    msg.start_lon = 0.9494890047361599;
    msg.start_z = 0.1250265035972753;
    msg.start_z_units = 225U;
    msg.end_lat = 0.5890377981302578;
    msg.end_lon = 0.9821572454555985;
    msg.end_z = 0.05007284074138707;
    msg.end_z_units = 43U;
    msg.lradius = 0.488124239147429;
    msg.flags = 76U;
    msg.x = 0.6066724458365029;
    msg.y = 0.651749480214636;
    msg.z = 0.3247090463144282;
    msg.vx = 0.8366890177178129;
    msg.vy = 0.04421671050547227;
    msg.vz = 0.4465614137434628;
    msg.course_error = 0.5829452173852876;
    msg.eta = 13754U;

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
    msg.setTimeStamp(0.9955158721730543);
    msg.setSource(60931U);
    msg.setSourceEntity(209U);
    msg.setDestination(63076U);
    msg.setDestinationEntity(171U);
    msg.start_lat = 0.9011486227014214;
    msg.start_lon = 0.9166356606099207;
    msg.start_z = 0.5147938068289089;
    msg.start_z_units = 113U;
    msg.end_lat = 0.0990288494064464;
    msg.end_lon = 0.7544390743894605;
    msg.end_z = 0.8573171886938611;
    msg.end_z_units = 11U;
    msg.lradius = 0.4253382454258179;
    msg.flags = 109U;
    msg.x = 0.06917492246773904;
    msg.y = 0.9861982131880223;
    msg.z = 0.04002389781564808;
    msg.vx = 0.16630139837426428;
    msg.vy = 0.32488990020002606;
    msg.vz = 0.49488980649752856;
    msg.course_error = 0.1759622405295409;
    msg.eta = 5424U;

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
    msg.setTimeStamp(0.9660795189003631);
    msg.setSource(39290U);
    msg.setSourceEntity(243U);
    msg.setDestination(54521U);
    msg.setDestinationEntity(112U);
    msg.k = 0.7763861458465177;
    msg.m = 0.056392059676142026;
    msg.n = 0.7882320823441611;

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
    msg.setTimeStamp(0.4518953591464895);
    msg.setSource(63638U);
    msg.setSourceEntity(180U);
    msg.setDestination(60003U);
    msg.setDestinationEntity(50U);
    msg.k = 0.5907992665613161;
    msg.m = 0.3536469518244555;
    msg.n = 0.43267728661690497;

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
    msg.setTimeStamp(0.2968044976287385);
    msg.setSource(18964U);
    msg.setSourceEntity(186U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(182U);
    msg.k = 0.2932228998419538;
    msg.m = 0.6093239200474297;
    msg.n = 0.8438159095899639;

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
    msg.setTimeStamp(0.40643426052259257);
    msg.setSource(40547U);
    msg.setSourceEntity(242U);
    msg.setDestination(3328U);
    msg.setDestinationEntity(98U);
    msg.p = 0.36423331464617936;
    msg.i = 0.46794524078988875;
    msg.d = 0.5660510128253373;
    msg.a = 0.6340522861072571;

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
    msg.setTimeStamp(0.9239964396945627);
    msg.setSource(36083U);
    msg.setSourceEntity(228U);
    msg.setDestination(40115U);
    msg.setDestinationEntity(79U);
    msg.p = 0.9170358953694993;
    msg.i = 0.44403555472691825;
    msg.d = 0.45488912711148466;
    msg.a = 0.36057723314528023;

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
    msg.setTimeStamp(0.4971618422650952);
    msg.setSource(8723U);
    msg.setSourceEntity(105U);
    msg.setDestination(34066U);
    msg.setDestinationEntity(119U);
    msg.p = 0.8744346698291237;
    msg.i = 0.8612262785385385;
    msg.d = 0.7523474669474723;
    msg.a = 0.633082944103819;

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
    msg.setTimeStamp(0.9455365558048787);
    msg.setSource(64117U);
    msg.setSourceEntity(239U);
    msg.setDestination(5860U);
    msg.setDestinationEntity(1U);
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
    msg.setTimeStamp(0.7342127522647892);
    msg.setSource(64033U);
    msg.setSourceEntity(154U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(149U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.08379163471909301);
    msg.setSource(12907U);
    msg.setSourceEntity(216U);
    msg.setDestination(19366U);
    msg.setDestinationEntity(24U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.15557097231921302);
    msg.setSource(23020U);
    msg.setSourceEntity(9U);
    msg.setDestination(5700U);
    msg.setDestinationEntity(249U);
    msg.timeout = 56085U;
    msg.lat = 0.49226386584971416;
    msg.lon = 0.6143102785536387;
    msg.z = 0.3489294245870036;
    msg.z_units = 77U;
    msg.speed = 0.5797190008843908;
    msg.speed_units = 246U;
    msg.roll = 0.08621233584099774;
    msg.pitch = 0.3093666645019638;
    msg.yaw = 0.040027380605798246;
    msg.custom.assign("UQZGBHTBUEGPLFX");

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
    msg.setTimeStamp(0.2890418762021817);
    msg.setSource(52564U);
    msg.setSourceEntity(102U);
    msg.setDestination(51342U);
    msg.setDestinationEntity(138U);
    msg.timeout = 1139U;
    msg.lat = 0.3692691578254743;
    msg.lon = 0.5496616295408311;
    msg.z = 0.10367643593777054;
    msg.z_units = 99U;
    msg.speed = 0.8122656493221395;
    msg.speed_units = 55U;
    msg.roll = 0.19862709323903704;
    msg.pitch = 0.9231000219206239;
    msg.yaw = 0.6314087354350333;
    msg.custom.assign("FXBAARZUFQDTCLGVJOGMGUVSIZAWRMBOMIYHNNLNTJCRZJPFRBIIOSKQLLEGFXNVTPJLNRRCMSYXIYQKBXWIOBEEGGHZYMYNVPPYMQSKSDXBZRSBWCBPDYZGEPGLXUWODJJHCQOLKQWWTOGJNQVCUFAIXR");

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
    msg.setTimeStamp(0.7413852223334929);
    msg.setSource(41249U);
    msg.setSourceEntity(160U);
    msg.setDestination(58301U);
    msg.setDestinationEntity(203U);
    msg.timeout = 62262U;
    msg.lat = 0.5910203391781789;
    msg.lon = 0.29280396214453297;
    msg.z = 0.2252191239185447;
    msg.z_units = 31U;
    msg.speed = 0.38431376458108724;
    msg.speed_units = 50U;
    msg.roll = 0.44169116619456295;
    msg.pitch = 0.5358432060937326;
    msg.yaw = 0.5991723371849921;
    msg.custom.assign("SCUMMEMHRIEBCUNLARYWDKZQVHLKIYHBMCMICGQCMQIHLHCQEWYIVCXZAGDKKTARQKPKEBAZONWEDJSGWJYSPJTFQBZGNISEKLIZLNUOMLUVZWSCQLZWWUDGLWJPLURLODQS");

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
    msg.setTimeStamp(0.7158497528668759);
    msg.setSource(67U);
    msg.setSourceEntity(176U);
    msg.setDestination(60688U);
    msg.setDestinationEntity(42U);
    msg.timeout = 59442U;
    msg.lat = 0.25858130757097886;
    msg.lon = 0.23925681291605239;
    msg.z = 0.7902027204444803;
    msg.z_units = 189U;
    msg.speed = 0.8726601271078012;
    msg.speed_units = 135U;
    msg.duration = 9165U;
    msg.radius = 0.049867737980211824;
    msg.flags = 36U;
    msg.custom.assign("LCCNVFODYBHPDGKLSWNWOFUOPFULXHLVORWSXPTZSIJEMHSDMTKFCEYADAJUCKWB");

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
    msg.setTimeStamp(0.032742870230366816);
    msg.setSource(64500U);
    msg.setSourceEntity(42U);
    msg.setDestination(58634U);
    msg.setDestinationEntity(203U);
    msg.timeout = 5599U;
    msg.lat = 0.21662746632802865;
    msg.lon = 0.7088968443835809;
    msg.z = 0.23279994822073335;
    msg.z_units = 224U;
    msg.speed = 0.8314101636856107;
    msg.speed_units = 126U;
    msg.duration = 45098U;
    msg.radius = 0.8815632412700103;
    msg.flags = 82U;
    msg.custom.assign("UWXAWSRNRASQDDJACZZQBFHCPCZVNRDVIPJUYYHDTCQBRURUCUMEJQFWXYHZLQIKXEHLPJPMGLWFCFMHAGKXQPLKTTDYBUSAGEGXDEZOTIVICMKOIDWFEFUVBKPBLPRRSQYOKVYSGWTGBRMHEYEVVCMSMABFPNTNCHIQUMDOLAEVBNWUNMDKXJOJH");

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
    msg.setTimeStamp(0.28147922614617404);
    msg.setSource(2128U);
    msg.setSourceEntity(126U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(57U);
    msg.timeout = 63005U;
    msg.lat = 0.688587228818568;
    msg.lon = 0.8940105180030267;
    msg.z = 0.6677390766805956;
    msg.z_units = 42U;
    msg.speed = 0.6026855612255715;
    msg.speed_units = 184U;
    msg.duration = 13628U;
    msg.radius = 0.3215222298822098;
    msg.flags = 253U;
    msg.custom.assign("FNSDJOWVVTAGPQOGOQEBURPMGHAPDGREMKOMWTHLPBATCKYPJSDVTMIHELCCKHPODKJPUVZSZQNYLYNWUMQXNBITERIOEDVPQDBKNFROJHZCYKGPAXCSBLKNUTSMBZWRZFNSCUNEBITLYLNGVQFHRFMAFVWJQUCQGXLIYIZCZAMQQAXHKIXAFLVXJWJMSBZZWWEUVFYBRNATIYUJTOXFVZYAMXUDGWHEGXHHRDGKODEI");

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
    msg.setTimeStamp(0.5250605607572234);
    msg.setSource(63599U);
    msg.setSourceEntity(244U);
    msg.setDestination(14290U);
    msg.setDestinationEntity(77U);
    msg.custom.assign("ZMDBVHGXWLPPMLKBQUUPVSOCYEKFHXOUWQXIYXLFTCKJHGIDLQVPMNDYGMEHXUCPYVEPOREYRJDRNSUMKIYYTBATGQAFLZQRCXBFTMRQGHLXJYPWZNHOOFOWLDZGUADUPTTWVCWNKBGSAISASOBJNIBALHTTZINZJDQJMUPBPWZJOSVXFAXFEEHRRRENVKMFRSKXKJZSMMJHKYILIVFNEGGSZLBFWCZQCTWYCI");

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
    msg.setTimeStamp(0.5096971338030132);
    msg.setSource(2626U);
    msg.setSourceEntity(150U);
    msg.setDestination(18675U);
    msg.setDestinationEntity(252U);
    msg.custom.assign("MHVKBNRMNEFUSTRLFXSRELOYQHJLLIVCOJZIKHBFXSDPYICHAFQGGKVRMEGUIFAURDPCYJQBBNAMIRHNJZEVVNDQUOAGSMQXWFFYHVYKJPLBOXWQCCAXLZMZSBGIWWBPDEHOWWEOQOROITNDWCDPZZYHMRCQNEKZTIPGASJADTKPNRVEATBNCDJRLFXXZIYWKWFTUTPDZIAJVKEGHBJYJTTVZMELPGPGCXSXGUCL");

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
    msg.setTimeStamp(0.21888668210822881);
    msg.setSource(27739U);
    msg.setSourceEntity(5U);
    msg.setDestination(3294U);
    msg.setDestinationEntity(175U);
    msg.custom.assign("ONCXUQTLVWKNIIHPBKATHQFWOHYQKCRQDBXTGJZYREJTCLQZSTAWRKLCDEBKDDWNZ");

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
    msg.setTimeStamp(0.7742560417248424);
    msg.setSource(54608U);
    msg.setSourceEntity(159U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(163U);
    msg.timeout = 30245U;
    msg.lat = 0.7575483968966357;
    msg.lon = 0.48532903167955743;
    msg.z = 0.32917356340374393;
    msg.z_units = 244U;
    msg.duration = 43698U;
    msg.speed = 0.44719901922493777;
    msg.speed_units = 65U;
    msg.type = 104U;
    msg.radius = 0.9760729606930304;
    msg.length = 0.04542039924117458;
    msg.bearing = 0.34727529134593715;
    msg.direction = 120U;
    msg.custom.assign("HNNUAZERTVDANKXFZACYIZCQGRHSWVYEILQTMUPLXSBIQAFHPALXOKBBMXNESLEFFSXBLMCTCBJKSPZMBDNQQVM");

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
    msg.setTimeStamp(0.6674040274587009);
    msg.setSource(43614U);
    msg.setSourceEntity(52U);
    msg.setDestination(63775U);
    msg.setDestinationEntity(200U);
    msg.timeout = 29102U;
    msg.lat = 0.45321954320561253;
    msg.lon = 0.015202158936218124;
    msg.z = 0.20522228223964534;
    msg.z_units = 252U;
    msg.duration = 30426U;
    msg.speed = 0.6323472578468643;
    msg.speed_units = 186U;
    msg.type = 185U;
    msg.radius = 0.34178241921212504;
    msg.length = 0.7222388018703562;
    msg.bearing = 0.2794304176476924;
    msg.direction = 114U;
    msg.custom.assign("QLUXFXKFKUWDBRNWELVAPQLIMZNUOLMTRGEMIFHVCOGGSMWIYQLTFJIICYJDXAFPWNAMTAEMJBLTZOSFAP");

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
    msg.setTimeStamp(0.8514515910051702);
    msg.setSource(39440U);
    msg.setSourceEntity(73U);
    msg.setDestination(57928U);
    msg.setDestinationEntity(151U);
    msg.timeout = 4280U;
    msg.lat = 0.218049902698087;
    msg.lon = 0.8492110024914078;
    msg.z = 0.9434724791302637;
    msg.z_units = 3U;
    msg.duration = 17875U;
    msg.speed = 0.10932898863315266;
    msg.speed_units = 3U;
    msg.type = 96U;
    msg.radius = 0.5942607498769984;
    msg.length = 0.45952181834087624;
    msg.bearing = 0.19258678524167427;
    msg.direction = 57U;
    msg.custom.assign("HBHWCUTJPXEXNPFZCQUWCANZKRWGAYAVPYFNOTJDRERELTVQSQOLKZCKIFHGPBYXEPCTVTVORFVKDKNVWDCXESJIGMKAJMEEWIKWUGMKSYPCNXLTQZUGDPJWHNGZMOSZHBPJZUSQBKMGD");

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
    msg.setTimeStamp(0.9809833670723705);
    msg.setSource(27032U);
    msg.setSourceEntity(77U);
    msg.setDestination(47189U);
    msg.setDestinationEntity(97U);
    msg.duration = 1484U;
    msg.custom.assign("RNQLPVYCAHGHGKQMAWEROLMBOKNQXXHAGBPZKZFFDKRZVQBLNMFTEEDRHSUWRJBFLNVKQDBCIZXCKGFUUPFHZHMKPJNUYFLOIYHVGJUAYWTPFENUSXQIMKSUWAOVOKZOWMTLBTEEQASWIJDQJMEEVVCLDAIXWGOOTXIXNCPMGXRLYYAWJAYZRQYDLSCDXBRVPBTDJOAI");

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
    msg.setTimeStamp(0.918998520845028);
    msg.setSource(61484U);
    msg.setSourceEntity(225U);
    msg.setDestination(4765U);
    msg.setDestinationEntity(171U);
    msg.duration = 32607U;
    msg.custom.assign("EGWPNLBGVPCIFRUXSQAERRPHJQTBLSUUDVYDRNFKKQWDMLZEOISJPQMXXCDCZHDQPKCWQCNDGXNARPNUOWZTKHSFGATPNEFLDKLJMHOOYFLHPROWAXMOBJVDWAQVOYY");

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
    msg.setTimeStamp(0.6837628862599155);
    msg.setSource(61533U);
    msg.setSourceEntity(81U);
    msg.setDestination(19186U);
    msg.setDestinationEntity(65U);
    msg.duration = 25864U;
    msg.custom.assign("UVOJNKXMOZKHWFGRWRGUCKZTGYACVSEFTHGZCYQWZRWAMEBSLOLKCQKLUSENQBCFATWUSEHMOFTMBOJCUTIKYADUTAOBMDPHKSXNQSGVYNLPEGTJOXMMIYOGZPHVQDLJQVYIJCAIVRTJVXUTFIRPMXGLEFDZENXHNJGDNPQBRJSLDQZWUTBGKJLMS");

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
    msg.setTimeStamp(0.1503749781110303);
    msg.setSource(60982U);
    msg.setSourceEntity(57U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(67U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.21500849001027766;
    msg.control.set(tmp_msg_0);
    msg.duration = 2647U;
    msg.custom.assign("TDFMGPKBFSMDURJEEKJNHDGKQVTSWTKXGDCAPPWYENISHKOAMUJWRNBNZNXGFHKEZXQGYWGWXKOWECMTUHCFXQGON");

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
    msg.setTimeStamp(0.6164193896721214);
    msg.setSource(10651U);
    msg.setSourceEntity(195U);
    msg.setDestination(51974U);
    msg.setDestinationEntity(197U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7710713752883138;
    msg.control.set(tmp_msg_0);
    msg.duration = 19263U;
    msg.custom.assign("WIZNCZMONGEAJJEHKSXQSSFYFIYTWRXIAZDQUKKGMUNG");

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
    msg.setTimeStamp(0.29081721783401315);
    msg.setSource(2925U);
    msg.setSourceEntity(102U);
    msg.setDestination(23530U);
    msg.setDestinationEntity(149U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.9172095839194506;
    tmp_msg_0.start_lon = 0.019293209788398547;
    tmp_msg_0.start_z = 0.8851486660515112;
    tmp_msg_0.start_z_units = 58U;
    tmp_msg_0.end_lat = 0.6333467064455475;
    tmp_msg_0.end_lon = 0.4467184465781402;
    tmp_msg_0.end_z = 0.3317555091555764;
    tmp_msg_0.end_z_units = 133U;
    tmp_msg_0.speed = 0.17635006768327433;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.lradius = 0.29837505530893016;
    tmp_msg_0.flags = 145U;
    msg.control.set(tmp_msg_0);
    msg.duration = 19734U;
    msg.custom.assign("PQXQTLGXKYULFJSRLJGAYDUPQFVRCJDVEMXOHMVEXPBHWXWJTSYDSIEJZTNITRIXZAPQLKDRVMVW");

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
    msg.setTimeStamp(0.8540542549461018);
    msg.setSource(20435U);
    msg.setSourceEntity(40U);
    msg.setDestination(58486U);
    msg.setDestinationEntity(146U);
    msg.timeout = 19656U;
    msg.lat = 0.4462777099813112;
    msg.lon = 0.5816943184485461;
    msg.z = 0.5311216586089492;
    msg.z_units = 46U;
    msg.speed = 0.4724407122182045;
    msg.speed_units = 33U;
    msg.bearing = 0.2003886733511534;
    msg.cross_angle = 0.8454176010357337;
    msg.width = 0.8178735582350138;
    msg.length = 0.05506063801329675;
    msg.hstep = 0.1073372731428136;
    msg.coff = 61U;
    msg.alternation = 155U;
    msg.flags = 188U;
    msg.custom.assign("ZSGUABXXYKSCPRASHLZKXZTDQCODIHTKUBHLNBCHGWFCIRXIFBUMDLFHEMAMUEVKWBYWTPQVYFMJUNQXMSDUBYKWYYLCNMJCQRJBTGTYTVZIFEFHFNNBAN");

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
    msg.setTimeStamp(0.6746001304922955);
    msg.setSource(35928U);
    msg.setSourceEntity(62U);
    msg.setDestination(18239U);
    msg.setDestinationEntity(209U);
    msg.timeout = 23212U;
    msg.lat = 0.5264256936339367;
    msg.lon = 0.8212553960753586;
    msg.z = 0.4212932583522433;
    msg.z_units = 168U;
    msg.speed = 0.8390586629785528;
    msg.speed_units = 222U;
    msg.bearing = 0.49214880109580506;
    msg.cross_angle = 0.48659840797324694;
    msg.width = 0.1841052462947279;
    msg.length = 0.059870554862116565;
    msg.hstep = 0.6393331268753247;
    msg.coff = 240U;
    msg.alternation = 4U;
    msg.flags = 23U;
    msg.custom.assign("ACFLKOKZRDTNBQUVQRUEYWSLKZAXINTYCMWGFHSVWAWLZCOMCTMUQWYJZXPYBHDILDYSHDKUWIBMKMEAGZXRBN");

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
    msg.setTimeStamp(0.5881691518939695);
    msg.setSource(16379U);
    msg.setSourceEntity(214U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(65U);
    msg.timeout = 41756U;
    msg.lat = 0.944505719673883;
    msg.lon = 0.40439993539198893;
    msg.z = 0.42981426251382604;
    msg.z_units = 93U;
    msg.speed = 0.9535857422797347;
    msg.speed_units = 51U;
    msg.bearing = 0.9698129503833418;
    msg.cross_angle = 0.915896411474085;
    msg.width = 0.7013234626792432;
    msg.length = 0.7063528238982589;
    msg.hstep = 0.5557905782308823;
    msg.coff = 59U;
    msg.alternation = 128U;
    msg.flags = 222U;
    msg.custom.assign("WNWYBYQLIJSQONPFOOIOTFFMZCSCOGVXFCEYXSLJMNTOFBPKGNCKXEGREVCVSUVQKEBDWHXDFTQWUIKAWBVPSTHGYRKDALDJMHZEJPPXIXVMJKASUYOLMSZGOADZZGRRHWTLSBKBUYQJDUICZZPYIBYAMHQPFJKTEY");

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
    msg.setTimeStamp(0.08067690048557086);
    msg.setSource(298U);
    msg.setSourceEntity(41U);
    msg.setDestination(5564U);
    msg.setDestinationEntity(189U);
    msg.timeout = 61277U;
    msg.lat = 0.09126266124634264;
    msg.lon = 0.18638031127592625;
    msg.z = 0.36056304316166987;
    msg.z_units = 153U;
    msg.speed = 0.9724074727723407;
    msg.speed_units = 15U;
    msg.custom.assign("BNCQAVQWHKRJQLLNJDGYOGAKANPHVBSIEHSULPUPGNHGRKLDWBDWDFNTGGVPMTVIJJMYKLMOCMWXYLBPYOVFBRRIIQZBUNBCFETGPSHTKMHOEEXDNAOJJKBTTRXYLSPKGNZVWOBOKTJHNKEKMIWJZEDWFGNUIUIHSIFERUZQEFQVIYOCQRSERXYZDEDZODSIAYPJHSMQMCZXJWCLXVCAFSMXVOGAHWRQXBPZLCZXUMSLZT");

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
    msg.setTimeStamp(0.6654004257744399);
    msg.setSource(50946U);
    msg.setSourceEntity(32U);
    msg.setDestination(13843U);
    msg.setDestinationEntity(157U);
    msg.timeout = 31552U;
    msg.lat = 0.0793193377720991;
    msg.lon = 0.5033903845536333;
    msg.z = 0.4983641985203545;
    msg.z_units = 18U;
    msg.speed = 0.044072608926365;
    msg.speed_units = 160U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8136402442746403;
    tmp_msg_0.y = 0.8648727230490866;
    tmp_msg_0.z = 0.030788193045304224;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CLIEVQHLEMKIOXDWHBQKZDZXEAPHGGPORBRDRUSXTUDTYWTTKIGMFEEBRVOQFSHAOFOUKXFLRYVBAVMJPWI");

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
    msg.setTimeStamp(0.8389185517512197);
    msg.setSource(8519U);
    msg.setSourceEntity(138U);
    msg.setDestination(48931U);
    msg.setDestinationEntity(165U);
    msg.timeout = 30756U;
    msg.lat = 0.04627622129582565;
    msg.lon = 0.8771769146366013;
    msg.z = 0.7552583015974398;
    msg.z_units = 177U;
    msg.speed = 0.321969124051963;
    msg.speed_units = 196U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6391738174556403;
    tmp_msg_0.y = 0.9746038736221937;
    tmp_msg_0.z = 0.5358130096289269;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KDYQKGLLGUAXZXPAPWVMFWWCGEGDTMLFMVELWFHSFPMGFUOQHUEBZCDXWPODFPBRUVEIPZTBRABSQLWRJIAKCSQRCXLKKSVDQISUMJHUBZPMEXYLNFFUDLJZRYXIYGBENKYOEGEBCIRDNIUXNIQAAWIPYVPJYRHCCBVWLSNBZNGRZPHZCJAOMMEYXCTNVZIAEMYRKX");

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
    msg.setTimeStamp(0.8964060576656866);
    msg.setSource(12610U);
    msg.setSourceEntity(151U);
    msg.setDestination(5317U);
    msg.setDestinationEntity(188U);
    msg.x = 0.1834811960402809;
    msg.y = 0.11425039320967167;
    msg.z = 0.0550193246533458;

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
    msg.setTimeStamp(0.1041861421739787);
    msg.setSource(19164U);
    msg.setSourceEntity(34U);
    msg.setDestination(13206U);
    msg.setDestinationEntity(170U);
    msg.x = 0.6318694595411791;
    msg.y = 0.8413398053840367;
    msg.z = 0.05686887753541303;

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
    msg.setTimeStamp(0.24295903147802822);
    msg.setSource(49048U);
    msg.setSourceEntity(182U);
    msg.setDestination(57169U);
    msg.setDestinationEntity(32U);
    msg.x = 0.7387823943186642;
    msg.y = 0.7983112710281584;
    msg.z = 0.7620323834026226;

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
    msg.setTimeStamp(0.2584416798014644);
    msg.setSource(28518U);
    msg.setSourceEntity(80U);
    msg.setDestination(39016U);
    msg.setDestinationEntity(225U);
    msg.timeout = 30359U;
    msg.lat = 0.565621896899927;
    msg.lon = 0.2879076374393056;
    msg.z = 0.9255279293920231;
    msg.z_units = 40U;
    msg.amplitude = 0.31442624079861947;
    msg.pitch = 0.2240755784733316;
    msg.speed = 0.10433607885890561;
    msg.speed_units = 129U;
    msg.custom.assign("QGNGNRXVQQRBMFLFDJRYUDIWWOHPZWOPYFECGFWEZJDNQAHJTTAWKZJAVJAVPLDVCGTHDJLSXSYMQSZASDKHLTIGGTCKEMFCWDVYOISTGMKLUEPMADCBINCONFRNBBXYXSIXFVZRIWETRLIHVSMJPGYWUZTPXKQCKLXAVEOEBZPCCYHUISJOLBOHMVXWKQDMFEIVYZHBTQKMZRNBUXFUIHTUUEJBYRKSBYNW");

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
    msg.setTimeStamp(0.9693217167956862);
    msg.setSource(22754U);
    msg.setSourceEntity(91U);
    msg.setDestination(20294U);
    msg.setDestinationEntity(100U);
    msg.timeout = 32748U;
    msg.lat = 0.44721046965141986;
    msg.lon = 0.8313940096234175;
    msg.z = 0.05271201453986585;
    msg.z_units = 127U;
    msg.amplitude = 0.7316412554218005;
    msg.pitch = 0.32246539463711565;
    msg.speed = 0.4158958588954498;
    msg.speed_units = 206U;
    msg.custom.assign("LENPFYEMXEKCBNLRJIQYBXUGHBZTERBFHIDACJSFCJQIUCZNZMVMVSZSKURTZ");

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
    msg.setTimeStamp(0.03753553459639658);
    msg.setSource(43748U);
    msg.setSourceEntity(81U);
    msg.setDestination(18199U);
    msg.setDestinationEntity(110U);
    msg.timeout = 15134U;
    msg.lat = 0.06097696818980625;
    msg.lon = 0.9505975687556745;
    msg.z = 0.7989824711460592;
    msg.z_units = 15U;
    msg.amplitude = 0.5980843925325678;
    msg.pitch = 0.9542337452077871;
    msg.speed = 0.3827780679494781;
    msg.speed_units = 233U;
    msg.custom.assign("CBOMFWQGIJHIMXTIGIBACGAMCLSVLMOQVYZCQSNEAKQPMHJXVHUUQSHDBUEOLJDUXEIBDXKFPMFABSKIDLTZZJQOFSZGDJJYXFXYKEIZXDSAWSPRXNAYUVWEQSPDIFUMOLKNCRMW");

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
    msg.setTimeStamp(0.34898807041188273);
    msg.setSource(40150U);
    msg.setSourceEntity(90U);
    msg.setDestination(439U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.4230821485322651);
    msg.setSource(7330U);
    msg.setSourceEntity(235U);
    msg.setDestination(16034U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.2843193608237855);
    msg.setSource(36973U);
    msg.setSourceEntity(206U);
    msg.setDestination(55686U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.6533705434935442);
    msg.setSource(8506U);
    msg.setSourceEntity(28U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.609841540275433;
    msg.lon = 0.8268111349651893;
    msg.z = 0.4027102065274628;
    msg.z_units = 247U;
    msg.radius = 0.8883846852870263;
    msg.duration = 12488U;
    msg.speed = 0.6388515531719156;
    msg.speed_units = 236U;
    msg.custom.assign("FRURWQTMBZVRECWUUPWLKWNIPOXAHRLTAAFLJOMGBSQUVAESMNPTQVEPIDLYGDIVUKGBCOXLIMDCBCNEQSVHJJQWISXPXKAOXYHAJFTBZMJNSZFWCNRBLHTFDDSRXFLAUTZXWHENSKGYGFACIUKQJVYITOYHJFRXMPWHLKZRNKCSYRGJJTWWYQOVDGTEUDEPPDKO");

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
    msg.setTimeStamp(0.62433386960515);
    msg.setSource(30848U);
    msg.setSourceEntity(138U);
    msg.setDestination(615U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.06640858016389384;
    msg.lon = 0.45299304981303157;
    msg.z = 0.45881801204148576;
    msg.z_units = 110U;
    msg.radius = 0.03751591566106405;
    msg.duration = 57941U;
    msg.speed = 0.2397271250048051;
    msg.speed_units = 183U;
    msg.custom.assign("XDCPXDMYFGSVRACPTHYEIQLPPZYRWVLJJNYXGXRATKDASQKTCJLKCZVAOPDQZLPHMWMBEIWGUFXFNKGKZOBUGPTMJVRJXNJWVWWTAJSBHZOENCDSKPQYDPLRRKYSNJHFQQMLRGCHBFUOIYTNAQTBZNREONIWQEOOVWCXFNEEBMTKLUSXFUIMZTLIJTOMOAUHCMOIYMADQDLNACUVHUZQZBUHERGJBECKHSDIBYFUDPLVIZXVYSFRGFWA");

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
    msg.setTimeStamp(0.6478237282422408);
    msg.setSource(23772U);
    msg.setSourceEntity(196U);
    msg.setDestination(35405U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.9425779297881022;
    msg.lon = 0.7253468945382794;
    msg.z = 0.9293493348238516;
    msg.z_units = 229U;
    msg.radius = 0.43219257334196737;
    msg.duration = 21437U;
    msg.speed = 0.6110653531999258;
    msg.speed_units = 53U;
    msg.custom.assign("DITVOMMRXBVJQKCOSBFP");

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
    msg.setTimeStamp(0.3869409761518732);
    msg.setSource(49901U);
    msg.setSourceEntity(167U);
    msg.setDestination(43914U);
    msg.setDestinationEntity(125U);
    msg.timeout = 30219U;
    msg.flags = 186U;
    msg.lat = 0.20365389923862987;
    msg.lon = 0.13891350666053293;
    msg.start_z = 0.4284620724122782;
    msg.start_z_units = 88U;
    msg.end_z = 0.5991186008994641;
    msg.end_z_units = 220U;
    msg.radius = 0.5123267600167745;
    msg.speed = 0.7511803800039827;
    msg.speed_units = 172U;
    msg.custom.assign("ROQUQTYEJNIDINBFGWJFUWLJEXNXUZIIHFISAEVLHVSNFHTEPGPMPRBS");

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
    msg.setTimeStamp(0.502753279445524);
    msg.setSource(1798U);
    msg.setSourceEntity(205U);
    msg.setDestination(22292U);
    msg.setDestinationEntity(118U);
    msg.timeout = 7163U;
    msg.flags = 199U;
    msg.lat = 0.36390846527499787;
    msg.lon = 0.9066189592091358;
    msg.start_z = 0.8591954615737474;
    msg.start_z_units = 101U;
    msg.end_z = 0.4759102752974286;
    msg.end_z_units = 46U;
    msg.radius = 0.3337401149231939;
    msg.speed = 0.20067947878138392;
    msg.speed_units = 224U;
    msg.custom.assign("IVHYOOZSERMMPQNXWPIXMLZGQOFRFTEXLAHIIUOUHHTUTDLQRVXYAKKGMICGLTYGZEKKNMFOLFQEXEFVMJQVABEWWCSOYDKBXNIUCCYFJBTLZ");

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
    msg.setTimeStamp(0.7667594515201812);
    msg.setSource(26326U);
    msg.setSourceEntity(157U);
    msg.setDestination(8288U);
    msg.setDestinationEntity(82U);
    msg.timeout = 40284U;
    msg.flags = 16U;
    msg.lat = 0.5336231792576112;
    msg.lon = 0.4363607076938968;
    msg.start_z = 0.09298944673792975;
    msg.start_z_units = 79U;
    msg.end_z = 0.6253799606975528;
    msg.end_z_units = 112U;
    msg.radius = 0.252233894152487;
    msg.speed = 0.4119243254708067;
    msg.speed_units = 218U;
    msg.custom.assign("QTSLCYFJBRVFRZUBGQWPCJPLKLLUNJTFNWKPMYDSCNUPIEYWEZEAAM");

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
    msg.setTimeStamp(0.2088169044545214);
    msg.setSource(27015U);
    msg.setSourceEntity(132U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(152U);
    msg.timeout = 1557U;
    msg.lat = 0.31536492716669207;
    msg.lon = 0.23719810369138772;
    msg.z = 0.6698085476701477;
    msg.z_units = 152U;
    msg.speed = 0.28522762115564537;
    msg.speed_units = 217U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.820930042499776;
    tmp_msg_0.y = 0.5925713149682943;
    tmp_msg_0.z = 0.5050332229532754;
    tmp_msg_0.t = 0.4120724772017218;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AHICQZIHVSKAXRVVKBCWOMPTCZGKECEQR");

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
    msg.setTimeStamp(0.4633766569710669);
    msg.setSource(33818U);
    msg.setSourceEntity(115U);
    msg.setDestination(28457U);
    msg.setDestinationEntity(72U);
    msg.timeout = 20335U;
    msg.lat = 0.8551103460702396;
    msg.lon = 0.5790767845825712;
    msg.z = 0.18329116308709847;
    msg.z_units = 84U;
    msg.speed = 0.33649194851086206;
    msg.speed_units = 233U;
    msg.custom.assign("RCJGWTLCPONBIJPLNYZAOHYHF");

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
    msg.setTimeStamp(0.34463717082726286);
    msg.setSource(18223U);
    msg.setSourceEntity(45U);
    msg.setDestination(41216U);
    msg.setDestinationEntity(248U);
    msg.timeout = 33450U;
    msg.lat = 0.9366184840327056;
    msg.lon = 0.19418062738902941;
    msg.z = 0.0290960407347457;
    msg.z_units = 204U;
    msg.speed = 0.8674955545037113;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8489829205227396;
    tmp_msg_0.y = 0.538987167322277;
    tmp_msg_0.z = 0.9378305669515552;
    tmp_msg_0.t = 0.8989536035542948;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IPHAGSPMSVKXNZDDSHEJNDHVHCNCVUEFUQXBUEAECYLEADGZVNBYNMVK");

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
    msg.setTimeStamp(0.873925730149505);
    msg.setSource(56500U);
    msg.setSourceEntity(101U);
    msg.setDestination(34077U);
    msg.setDestinationEntity(213U);
    msg.x = 0.17921246512699918;
    msg.y = 0.20333036415566452;
    msg.z = 0.4204424034762294;
    msg.t = 0.30757307061994854;

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
    msg.setTimeStamp(0.21249476418326962);
    msg.setSource(36347U);
    msg.setSourceEntity(183U);
    msg.setDestination(22248U);
    msg.setDestinationEntity(103U);
    msg.x = 0.9575235608148929;
    msg.y = 0.28540332176942407;
    msg.z = 0.34434784829081744;
    msg.t = 0.5769468732221106;

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
    msg.setTimeStamp(0.5376367563236456);
    msg.setSource(34970U);
    msg.setSourceEntity(139U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(207U);
    msg.x = 0.4230904137974786;
    msg.y = 0.5767859344538458;
    msg.z = 0.3622082608190538;
    msg.t = 0.4719562757295961;

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
    msg.setTimeStamp(0.5000198171847345);
    msg.setSource(20409U);
    msg.setSourceEntity(203U);
    msg.setDestination(59026U);
    msg.setDestinationEntity(117U);
    msg.timeout = 13919U;
    msg.name.assign("GGRYTMDSRTDNHACLHOEF");
    msg.custom.assign("ABDFGUWFPUVVMMYSBCVRJBBYKTSAHDXCHJWCVNEOOFSEJHKCLLN");

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
    msg.setTimeStamp(0.4185154776868939);
    msg.setSource(59822U);
    msg.setSourceEntity(153U);
    msg.setDestination(40834U);
    msg.setDestinationEntity(79U);
    msg.timeout = 38925U;
    msg.name.assign("VGTXCLKGNOWVCGQZNEZVY");
    msg.custom.assign("HCGVXUOSQWOUAFLHDBXUGCAYCRAQDYJJLANFTYERDFMDEZHXVXJISYKYWHKMEFOUEBCMAKFABJNZGZNQMFLKTPUOXDFSGLDRLVGKLKRYYHWZAIMANIPVPOPGU");

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
    msg.setTimeStamp(0.14785515047607312);
    msg.setSource(24168U);
    msg.setSourceEntity(21U);
    msg.setDestination(21958U);
    msg.setDestinationEntity(21U);
    msg.timeout = 61065U;
    msg.name.assign("AZDVGSRXQNXOKXIMUIKDCUJZBDRIEIMFHYSZFPBGEHDCUNTTYPJKVAACIPDMCKOUWELSONZTKUQFYVJFCANYLGAWMXLYHAQYQKHGQSOIUWCMFZSOSWMJWBOEJTHYIRR");
    msg.custom.assign("GTSZVASBBXZQOSUVSJFVLHCECUQZWJEHMYRWGNZIMXPOLAPAMTYKTKKJBCRAQYMBWHQVZPDUQDMBGPIEYMJQTHCUYOEIIVFL");

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
    msg.setTimeStamp(0.021236852248005866);
    msg.setSource(28666U);
    msg.setSourceEntity(109U);
    msg.setDestination(47595U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.05657296174856519;
    msg.lon = 0.87327565459135;
    msg.z = 0.1011697921532726;
    msg.z_units = 198U;
    msg.speed = 0.4262801386841816;
    msg.speed_units = 227U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5171588693517883;
    tmp_msg_0.y = 0.723940642078613;
    tmp_msg_0.z = 0.7724875194002526;
    tmp_msg_0.t = 0.20698101189380247;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 37887U;
    tmp_msg_1.off_x = 0.7592915156939046;
    tmp_msg_1.off_y = 0.6887374345736939;
    tmp_msg_1.off_z = 0.2961971920725669;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.12103691345922107;
    msg.custom.assign("FNXLLDWKVRGVFXPMHEOXCBRWFRKITSTJUSKMMJCYTGDRGEXJHJQZQNHMUPICCMBRFPTXGQPNAPVOKEFA");

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
    msg.setTimeStamp(0.8710533292934295);
    msg.setSource(40887U);
    msg.setSourceEntity(203U);
    msg.setDestination(64491U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.5179493109418879;
    msg.lon = 0.9579511123213366;
    msg.z = 0.6868241971758539;
    msg.z_units = 133U;
    msg.speed = 0.1414921085192571;
    msg.speed_units = 194U;
    msg.start_time = 0.8514995907921784;
    msg.custom.assign("MKRYGTCGKTUZETEWTVLACSYTVDXVTQJJAMQSNWQNXNENECOHBZJWPXCDOCRML");

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
    msg.setTimeStamp(0.1677519301097007);
    msg.setSource(34102U);
    msg.setSourceEntity(33U);
    msg.setDestination(27361U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.2534284376781335;
    msg.lon = 0.9413136114188372;
    msg.z = 0.3711128427533894;
    msg.z_units = 7U;
    msg.speed = 0.7548041355646186;
    msg.speed_units = 154U;
    msg.start_time = 0.9950443453305265;
    msg.custom.assign("SHTMYJXKVDSYLDJINOWPQAQRCBGSMWIIPSSEFGRAPMWEAIGEDIJPYTEHQQMKXBHVDGJKNULLHJCPEATYSGIHCWZMCUKUMURHRVBNGAWMXKDVXOZAUPNGBONXJETSLCBMVXUUNPDJFYIPAJGFLDUKTYOHSBVZONOKQTBLCNQXOHKYIRWDUFQAJSMWHJRT");

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
    msg.setTimeStamp(0.8089267575576585);
    msg.setSource(62557U);
    msg.setSourceEntity(91U);
    msg.setDestination(55029U);
    msg.setDestinationEntity(214U);
    msg.vid = 25217U;
    msg.off_x = 0.33955907206051816;
    msg.off_y = 0.48245697166235857;
    msg.off_z = 0.15377650079227345;

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
    msg.setTimeStamp(0.18297016516685927);
    msg.setSource(45729U);
    msg.setSourceEntity(113U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(224U);
    msg.vid = 46171U;
    msg.off_x = 0.9599216744439123;
    msg.off_y = 0.2536572192531721;
    msg.off_z = 0.11192922247577497;

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
    msg.setTimeStamp(0.9228048785718744);
    msg.setSource(15241U);
    msg.setSourceEntity(38U);
    msg.setDestination(15883U);
    msg.setDestinationEntity(122U);
    msg.vid = 16198U;
    msg.off_x = 0.869194908592109;
    msg.off_y = 0.27338965886508926;
    msg.off_z = 0.8562676113250008;

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
    msg.setTimeStamp(0.8544108740686245);
    msg.setSource(64132U);
    msg.setSourceEntity(166U);
    msg.setDestination(3676U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.44898059249552014);
    msg.setSource(60292U);
    msg.setSourceEntity(107U);
    msg.setDestination(62951U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.5111678796015396);
    msg.setSource(9101U);
    msg.setSourceEntity(252U);
    msg.setDestination(59817U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.6507785447977734);
    msg.setSource(16785U);
    msg.setSourceEntity(24U);
    msg.setDestination(21957U);
    msg.setDestinationEntity(119U);
    msg.mid = 58966U;

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
    msg.setTimeStamp(0.21160168376768596);
    msg.setSource(32472U);
    msg.setSourceEntity(111U);
    msg.setDestination(25962U);
    msg.setDestinationEntity(33U);
    msg.mid = 22396U;

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
    msg.setTimeStamp(0.7816648198641585);
    msg.setSource(57072U);
    msg.setSourceEntity(174U);
    msg.setDestination(4835U);
    msg.setDestinationEntity(169U);
    msg.mid = 2620U;

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
    msg.setTimeStamp(0.8095707186972573);
    msg.setSource(23569U);
    msg.setSourceEntity(238U);
    msg.setDestination(38272U);
    msg.setDestinationEntity(49U);
    msg.state = 191U;
    msg.eta = 19534U;
    msg.info.assign("HCJYOKYHRHGZBPFTWEQSWCTVIHMBUYJCDFTQIIWPVTAMXUOFSGIIAXCBFZWTIWJTKBFJAERWESOMUNEHHKAEZRTXONRBDOMFLKJXVG");

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
    msg.setTimeStamp(0.1399843305080355);
    msg.setSource(14628U);
    msg.setSourceEntity(182U);
    msg.setDestination(28092U);
    msg.setDestinationEntity(126U);
    msg.state = 195U;
    msg.eta = 4184U;
    msg.info.assign("FCNVUNGALLUEKJHQXAFRNTZJMMMAEOECQAQTYDCPAOXJRTLVDMLDFSQJYKCQYKNBFLJUPLGZCHUFDMXAIOTHZJHVWEIEFTXNQNUONGPLOSGDYXWJUGWAGLTZIWKKGIOQEKBJAOBHNPPVLKQMRBTVCYCBQIUGHPZFRPRWYSOOHWSTPSYDSWSRMGWZMBMXHPBUSEBCUCSIHYARIJVUFRQVBOZIZVIK");

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
    msg.setTimeStamp(0.1628126411826324);
    msg.setSource(38253U);
    msg.setSourceEntity(123U);
    msg.setDestination(61649U);
    msg.setDestinationEntity(82U);
    msg.state = 120U;
    msg.eta = 52827U;
    msg.info.assign("GALUGDQBIBVTATWVWVZCLTEDNPYDSBDAXUJFOOKFLBOPUNSYRAWPQZNRCLQWFQPEIBDZDGBSPHINXMPZJWJHNYYEILPOFUXCKEK");

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
    msg.setTimeStamp(0.30873556256401935);
    msg.setSource(63637U);
    msg.setSourceEntity(85U);
    msg.setDestination(57633U);
    msg.setDestinationEntity(253U);
    msg.system = 14011U;
    msg.duration = 36711U;
    msg.speed = 0.25025429657183906;
    msg.speed_units = 119U;
    msg.x = 0.6520700280328756;
    msg.y = 0.9202402495574973;
    msg.z = 0.7896605082756134;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.27817433706183836);
    msg.setSource(10540U);
    msg.setSourceEntity(80U);
    msg.setDestination(50574U);
    msg.setDestinationEntity(48U);
    msg.system = 55950U;
    msg.duration = 45037U;
    msg.speed = 0.7436234418613082;
    msg.speed_units = 86U;
    msg.x = 0.47520242256810596;
    msg.y = 0.9501652751384109;
    msg.z = 0.9263491386424167;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.43760418269561785);
    msg.setSource(40590U);
    msg.setSourceEntity(173U);
    msg.setDestination(55381U);
    msg.setDestinationEntity(118U);
    msg.system = 11766U;
    msg.duration = 37566U;
    msg.speed = 0.43239076318827374;
    msg.speed_units = 165U;
    msg.x = 0.6761073897014528;
    msg.y = 0.14079712376211662;
    msg.z = 0.41075829319073043;
    msg.z_units = 171U;

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
    msg.setTimeStamp(0.06958712972263303);
    msg.setSource(6340U);
    msg.setSourceEntity(77U);
    msg.setDestination(50601U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.9942184471366736;
    msg.lon = 0.2152689766461765;
    msg.speed = 0.3626247495170817;
    msg.speed_units = 161U;
    msg.duration = 46481U;
    msg.sys_a = 41439U;
    msg.sys_b = 4666U;
    msg.move_threshold = 0.22595813921064534;

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
    msg.setTimeStamp(0.8765420380141139);
    msg.setSource(39908U);
    msg.setSourceEntity(145U);
    msg.setDestination(16160U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.04343518433115956;
    msg.lon = 0.32408508576368744;
    msg.speed = 0.3980488406049121;
    msg.speed_units = 52U;
    msg.duration = 41573U;
    msg.sys_a = 53774U;
    msg.sys_b = 24051U;
    msg.move_threshold = 0.768482644724385;

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
    msg.setTimeStamp(0.3665168288065791);
    msg.setSource(29068U);
    msg.setSourceEntity(62U);
    msg.setDestination(14054U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.04086510834211743;
    msg.lon = 0.8191334349984821;
    msg.speed = 0.3541153181268847;
    msg.speed_units = 188U;
    msg.duration = 41824U;
    msg.sys_a = 33801U;
    msg.sys_b = 42768U;
    msg.move_threshold = 0.852427016268561;

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
    msg.setTimeStamp(0.848724610352167);
    msg.setSource(34689U);
    msg.setSourceEntity(249U);
    msg.setDestination(25800U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.37707201879891517;
    msg.lon = 0.8261308750305908;
    msg.z = 0.5655348009692132;
    msg.z_units = 11U;
    msg.speed = 0.8248383251618978;
    msg.speed_units = 173U;
    msg.custom.assign("KDZBWCKLBIXTYQYGFZBSOQLMKNCETHPQHZBFQFXXGAHESZGFJBIRWJVNFQYQEFCBZIITVPKWHVOGFMTAQGGOIMQAUNVPOTCEJACEKUVZRIIMTLWAPRVDRJIUBEDLJYTSKPVZYDLAROJIPARNWXUOLDJZUXGKCMBCNWXGJDQACWCKXMHMNNHBYOHYWUVFGSHSMAULCY");

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
    msg.setTimeStamp(0.16474867262496962);
    msg.setSource(13577U);
    msg.setSourceEntity(18U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.8557572419419549;
    msg.lon = 0.001728255277866797;
    msg.z = 0.6966926971028206;
    msg.z_units = 54U;
    msg.speed = 0.9627337705458485;
    msg.speed_units = 1U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.45653129183875985;
    tmp_msg_0.lon = 0.7604415667207894;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WSWKXHQLIADGQARJPPVYSAJOCTQXFCCNXYMYTJMMJARZARFXIKFPOJPZVJVUEDGRWREYTYWRXZZPQHKCWTODWISXKSFNKZOXEYOFVEHDRIBMHPFLBCJKVSKQUQUTEMDHTALGRIELSBTILOBQOBUHYBPWZAGDYSZBABKNGZCVHNHJQUWTKTCLREYLOX");

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
    msg.setTimeStamp(0.7854624514744182);
    msg.setSource(60554U);
    msg.setSourceEntity(81U);
    msg.setDestination(57260U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.5884534598093979;
    msg.lon = 0.5304183559147412;
    msg.z = 0.09083355238008783;
    msg.z_units = 17U;
    msg.speed = 0.04818185591345803;
    msg.speed_units = 180U;
    msg.custom.assign("WPSNDUUJNZYBTFXKOVGDNOBBLSMLRFYIXFUKPMXPFFHPVUOMDNDTBCXWMSQVNMUJEJTHLEHANLGDOWSPGMMBFEUFXDXPKQSCVZLVAIBBTSKGGIEAHYRYRFJRWFWUCZOJKVDCMLEVFODTIEOWZSZEQIUECOHRPGTWV");

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
    msg.setTimeStamp(0.8826257754826419);
    msg.setSource(49106U);
    msg.setSourceEntity(186U);
    msg.setDestination(23655U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.4534279416347554;
    msg.lon = 0.9861121213737066;

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
    msg.setTimeStamp(0.4362950489154045);
    msg.setSource(42517U);
    msg.setSourceEntity(92U);
    msg.setDestination(6719U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.1928492218337099;
    msg.lon = 0.6763580752231876;

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
    msg.setTimeStamp(0.6511087954800996);
    msg.setSource(30107U);
    msg.setSourceEntity(32U);
    msg.setDestination(51992U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.4807285055396865;
    msg.lon = 0.3367131431711923;

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
    msg.setTimeStamp(0.256832826407017);
    msg.setSource(51491U);
    msg.setSourceEntity(65U);
    msg.setDestination(48572U);
    msg.setDestinationEntity(95U);
    msg.timeout = 45624U;
    msg.lat = 0.1817930059547478;
    msg.lon = 0.8846970224080212;
    msg.z = 0.27073617250280346;
    msg.z_units = 131U;
    msg.pitch = 0.40798216275072596;
    msg.amplitude = 0.10260561424986003;
    msg.duration = 6070U;
    msg.speed = 0.2806338505644407;
    msg.speed_units = 90U;
    msg.radius = 0.051147336815310696;
    msg.direction = 168U;
    msg.custom.assign("LHAEMSLHDOCIFWWWDHCQOBYPCAKLHQUVNPRADZF");

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
    msg.setTimeStamp(0.9026903907059155);
    msg.setSource(44626U);
    msg.setSourceEntity(164U);
    msg.setDestination(49215U);
    msg.setDestinationEntity(41U);
    msg.timeout = 48111U;
    msg.lat = 0.7464694089364612;
    msg.lon = 0.18060913774857834;
    msg.z = 0.22608336552441677;
    msg.z_units = 168U;
    msg.pitch = 0.18903958945339838;
    msg.amplitude = 0.12639774830801231;
    msg.duration = 41084U;
    msg.speed = 0.5003934536510313;
    msg.speed_units = 103U;
    msg.radius = 0.8387123628799559;
    msg.direction = 40U;
    msg.custom.assign("ACMXGQGKXEJZDUWWKGKFEBNFVFVTBZTYTFVDOAVVPBXOSXNEYFBDFUHJQDIGSEKAIBSQZLOXXLHPYIIRQYNCMYVOJDFKAWXMHVNMKCLGJCWCRXBSTTLJSEQNMRLSHUTKARJBZSZOUJCFIJZUJZNPTVVHPVFYMYERMFUWLDRZERKSGWSCUAQIANCNWWGUEWITBUNMILZMG");

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
    msg.setTimeStamp(0.3011265266377525);
    msg.setSource(60893U);
    msg.setSourceEntity(123U);
    msg.setDestination(50572U);
    msg.setDestinationEntity(87U);
    msg.timeout = 39038U;
    msg.lat = 0.30871725732973687;
    msg.lon = 0.8985162226948009;
    msg.z = 0.9740328524361445;
    msg.z_units = 74U;
    msg.pitch = 0.5791620287056016;
    msg.amplitude = 0.3279983123125876;
    msg.duration = 17775U;
    msg.speed = 0.1253718372207251;
    msg.speed_units = 220U;
    msg.radius = 0.21051231660706526;
    msg.direction = 39U;
    msg.custom.assign("RBBUJUDXWHBCBLTBUDBOBZRTITSWVIEMHUDTLJFGIBOIPUQEIYFWLRYHUHRKOADTOAH");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.2037036283647432);
    msg.setSource(20616U);
    msg.setSourceEntity(203U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(34U);
    msg.control_src = 36616U;
    msg.control_ent = 72U;
    msg.timeout = 0.7788437530762048;
    msg.loiter_radius = 0.7309967250503288;
    msg.altitude_interval = 0.6554748600183816;

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
    msg.setTimeStamp(0.9905250814895851);
    msg.setSource(51304U);
    msg.setSourceEntity(81U);
    msg.setDestination(47407U);
    msg.setDestinationEntity(152U);
    msg.control_src = 41229U;
    msg.control_ent = 237U;
    msg.timeout = 0.6194151919931983;
    msg.loiter_radius = 0.705438180348891;
    msg.altitude_interval = 0.9399018661820994;

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
    msg.setTimeStamp(0.7128074418239795);
    msg.setSource(33112U);
    msg.setSourceEntity(196U);
    msg.setDestination(26970U);
    msg.setDestinationEntity(194U);
    msg.control_src = 57789U;
    msg.control_ent = 53U;
    msg.timeout = 0.6841348579177193;
    msg.loiter_radius = 0.48065286293012077;
    msg.altitude_interval = 0.08674198361104679;

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
    msg.setTimeStamp(0.5053829379225396);
    msg.setSource(22865U);
    msg.setSourceEntity(126U);
    msg.setDestination(25421U);
    msg.setDestinationEntity(57U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.059498022517722404;
    tmp_msg_0.speed_units = 139U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6459418891696893;
    tmp_msg_1.z_units = 134U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5366096154897027;
    msg.lon = 0.3706517758292285;
    msg.radius = 0.4835004263212501;

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
    msg.setTimeStamp(0.5528113659338855);
    msg.setSource(41107U);
    msg.setSourceEntity(249U);
    msg.setDestination(12018U);
    msg.setDestinationEntity(242U);
    msg.flags = 25U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8722559938830501;
    tmp_msg_0.speed_units = 204U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6851622741757537;
    tmp_msg_1.z_units = 170U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.954193697716466;
    msg.lon = 0.13215660751302205;
    msg.radius = 0.3790436092958299;

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
    msg.setTimeStamp(0.4961625339546225);
    msg.setSource(39444U);
    msg.setSourceEntity(224U);
    msg.setDestination(64699U);
    msg.setDestinationEntity(67U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12576358817027178;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7549400297140518;
    tmp_msg_1.z_units = 172U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.44838969040620547;
    msg.lon = 0.09395590020447064;
    msg.radius = 0.9863851526619397;

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
    msg.setTimeStamp(0.6096833230106592);
    msg.setSource(35235U);
    msg.setSourceEntity(237U);
    msg.setDestination(29502U);
    msg.setDestinationEntity(239U);
    msg.control_src = 21778U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 74U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7165682061384506;
    tmp_tmp_msg_0_0.speed_units = 154U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.48919627737607974;
    tmp_tmp_msg_0_1.z_units = 3U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.19710138695426427;
    tmp_msg_0.lon = 0.6424071163519092;
    tmp_msg_0.radius = 0.4350740334985458;
    msg.reference.set(tmp_msg_0);
    msg.state = 85U;
    msg.proximity = 149U;

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
    msg.setTimeStamp(0.9477813757660274);
    msg.setSource(12028U);
    msg.setSourceEntity(216U);
    msg.setDestination(39652U);
    msg.setDestinationEntity(62U);
    msg.control_src = 17176U;
    msg.control_ent = 40U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 221U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9712090492383438;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7494358642271572;
    tmp_tmp_msg_0_1.z_units = 85U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3579285936071901;
    tmp_msg_0.lon = 0.7010098759696545;
    tmp_msg_0.radius = 0.1472373868886785;
    msg.reference.set(tmp_msg_0);
    msg.state = 127U;
    msg.proximity = 66U;

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
    msg.setTimeStamp(0.22355547427239486);
    msg.setSource(8749U);
    msg.setSourceEntity(32U);
    msg.setDestination(45880U);
    msg.setDestinationEntity(214U);
    msg.control_src = 19760U;
    msg.control_ent = 79U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.34709226818647565;
    tmp_tmp_msg_0_0.speed_units = 28U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6744130674804502;
    tmp_tmp_msg_0_1.z_units = 122U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24105090892070635;
    tmp_msg_0.lon = 0.7512245049710827;
    tmp_msg_0.radius = 0.632359973312153;
    msg.reference.set(tmp_msg_0);
    msg.state = 185U;
    msg.proximity = 101U;

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
    msg.setTimeStamp(0.9839797268655402);
    msg.setSource(23550U);
    msg.setSourceEntity(97U);
    msg.setDestination(58505U);
    msg.setDestinationEntity(158U);
    msg.op_mode = 134U;
    msg.error_count = 247U;
    msg.error_ents.assign("POUDTYIYBTSPUGYBLNKDACCVGIOWFOZSBHXPQLMUGWLVXXMFPNQZCFTVKYECJQKRSRNKYANTZMZGEOKSHPJNEFGIAVIYFJSDCHJTODCFNXQOQGVBPOCWVJDJWHSYGCGPENAHNEXUETBZPQIIFHABYFWTPZQMXRBREDGALMHYMWWDVXANBRUXAPWULZFKXZSWL");
    msg.maneuver_type = 40702U;
    msg.maneuver_stime = 0.3891211920438733;
    msg.maneuver_eta = 64038U;
    msg.control_loops = 268680737U;
    msg.flags = 236U;
    msg.last_error.assign("HITNRQMDDFGXRJJXGKEYYCVOMLIJEPVIXOUMCZVCENPRPZXAPTUALGXYSYHAJPSUWXNVLX");
    msg.last_error_time = 0.13116883920142242;

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
    msg.setTimeStamp(0.5527501149766372);
    msg.setSource(64310U);
    msg.setSourceEntity(230U);
    msg.setDestination(8112U);
    msg.setDestinationEntity(199U);
    msg.op_mode = 232U;
    msg.error_count = 242U;
    msg.error_ents.assign("XJEDUEHCDWYQYNFREJUXKNYLPHZBXGIKOVEPVASMIZNTSVCLUGRKGBOIGUMYZEQBVDXTLBSCPWNQSVLLWKCTKDPGOMVAULWFHRXSJFTTDACVYLOOWRRMEBTJEHDBIGOOPRMXENYZSNNIDTHKUBAVFCYYNKQGJFZHTBTPFJJKROHZSHZSBUCZ");
    msg.maneuver_type = 32689U;
    msg.maneuver_stime = 0.01889225988568599;
    msg.maneuver_eta = 53700U;
    msg.control_loops = 3239007058U;
    msg.flags = 53U;
    msg.last_error.assign("HAKGKBMAXEMASODLRYSZNSLTADLCCWQNMNFSEZWZFGDMOXRQEPRCUHOQJCVVSWRBTPVOKAKSHJTPDQRJQATTMUJOJBDZOXFBVSQKNKGBCYYXLYDJPPUEYTICYRZMLPOUVWGCIXL");
    msg.last_error_time = 0.06700689918057323;

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
    msg.setTimeStamp(0.7823797700231313);
    msg.setSource(36265U);
    msg.setSourceEntity(34U);
    msg.setDestination(14221U);
    msg.setDestinationEntity(236U);
    msg.op_mode = 73U;
    msg.error_count = 144U;
    msg.error_ents.assign("TVQOVFDLBYXZNEHWXUVLSUXVYOCFLHNSFPOITTTAJHQZMJVCAGCKWJBFSVWBNSOXDVUHIWALPSDPVGWMJMRQPAGRXOZGBYSNFFJGTBWAAUXVPCEIDYSHTSUBIOKLOINDANEEIDMAQPJFTNPLLYHTRUDXLBOEUHKWUFMISKABRGGZEECXPCMYZUKZMIQCCERFIJCMIUXMYDHGRCVLD");
    msg.maneuver_type = 54862U;
    msg.maneuver_stime = 0.8001687784563142;
    msg.maneuver_eta = 9361U;
    msg.control_loops = 3951933728U;
    msg.flags = 166U;
    msg.last_error.assign("EKLEKZZTBTGNCTRLNMIDQRFQMUNVQOAYCSSIPTJGZEHLQXPQJIBDVMKWDUBNLPRGMUCTYFLFKFLOGCXZPOWYDGNENHLJCJZYWETQJRFRBEOQOIAVPIIJNCDPSSXHYUXUMGSXSPNSWMQKV");
    msg.last_error_time = 0.25514596471668305;

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
    msg.setTimeStamp(0.10889850560769421);
    msg.setSource(9152U);
    msg.setSourceEntity(232U);
    msg.setDestination(11336U);
    msg.setDestinationEntity(226U);
    msg.type = 35U;
    msg.request_id = 60574U;
    msg.command = 99U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 5810U;
    tmp_msg_0.name.assign("WOYZHRDAFDLCCXOAESDH");
    tmp_msg_0.custom.assign("QGEPPTGXKOXZQTUMAJVOSJJBSKQFCFIKVYASKSITFCYJZMPFHCUEIAJXUPCIJVYUOJWSBQCYORXOZXRENDITFQEYXEWXLKVRBNWMMJEDGGCWZDXNONYFPVINNTIPBSNLXEJRBHHDCNAQQBZKLAXZOMVQDDOPLRMYALMISERTWUOGGGKRWHKTLCIWZQUBTK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55647U;
    msg.info.assign("YZLNBGWJVLZDZBQWRXXMFOJLAVQUKGUMNMWHEYGXWCCRJHAQIHPZMQVSYNICJULQKBNK");

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
    msg.setTimeStamp(0.8320415293979586);
    msg.setSource(56804U);
    msg.setSourceEntity(228U);
    msg.setDestination(20764U);
    msg.setDestinationEntity(131U);
    msg.type = 54U;
    msg.request_id = 6482U;
    msg.command = 111U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 1786U;
    tmp_msg_0.lat = 0.6994740954842135;
    tmp_msg_0.lon = 0.7524903239576678;
    tmp_msg_0.z = 0.3187083952486499;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.speed = 0.9823194744409895;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.bearing = 0.7986211296575644;
    tmp_msg_0.cross_angle = 0.4671364941522107;
    tmp_msg_0.width = 0.8894484314240331;
    tmp_msg_0.length = 0.2344858509826997;
    tmp_msg_0.hstep = 0.5576278384796806;
    tmp_msg_0.coff = 211U;
    tmp_msg_0.alternation = 87U;
    tmp_msg_0.flags = 149U;
    tmp_msg_0.custom.assign("BXGCLVKDGMDLDASNFFYALEMGIGSTPWXHEBWPCYMXPPQUJYGIXUFCEBZTKWZDZVOSRYUBDZTEZCVQVTWBEZZGNMOLEKCDNJBKRYCTSGUIWDVOYWPHHYIBIQNVNGNFCSYIVAKKJYHUXTSRPTSJLLXQALAGHRDNEVTIYKXHJWWXRLOHZGNRXSSOMUDFIOVHPOMUWMAQXPUAOAJLEQFRC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29412U;
    msg.info.assign("YXGPYVHHMIWYLRZABPHNRDWTPGXKUEWTHKLEVKDINJVYUXSRQGJOGKFMSAKVDYXLGNSEJOAICIOTPYSVDLCNWHMZRWYFPORWKLYDASFMBXLVDLHGMQTNXMFCIOQJCSCXTEKJROGPFCZZKWJESYMUBZYBIJUBBFEMHDWDZXUFQNXGQWIQ");

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
    msg.setTimeStamp(0.31245346452087586);
    msg.setSource(225U);
    msg.setSourceEntity(220U);
    msg.setDestination(24549U);
    msg.setDestinationEntity(250U);
    msg.type = 63U;
    msg.request_id = 32326U;
    msg.command = 198U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 27517U;
    tmp_msg_0.lat = 0.0275443623503957;
    tmp_msg_0.lon = 0.765615711446859;
    tmp_msg_0.z = 0.45057489769607495;
    tmp_msg_0.z_units = 51U;
    tmp_msg_0.speed = 0.08110357342208185;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.bearing = 0.8150127957448337;
    tmp_msg_0.cross_angle = 0.6725622861534274;
    tmp_msg_0.width = 0.5974278090035008;
    tmp_msg_0.length = 0.7648065933632952;
    tmp_msg_0.hstep = 0.19777228139280878;
    tmp_msg_0.coff = 129U;
    tmp_msg_0.alternation = 247U;
    tmp_msg_0.flags = 81U;
    tmp_msg_0.custom.assign("PVQVWAJUKZYLFZDHZULHRTOCOOHKLEAEPPJSHGLNJQSCKRTNSESUTMCDSCDMIYKHTGCCPGWKRPBXXWKTRKXVOVYJWEWBBMDWKBIWWVITRHDHJALYPFOIAUBHXOPQZNPOIXFITDENXQEOCYSCYLTAFZTADYHYOBAMMGYONGQNRRAAYQUWDXWJESJQCMKIVRU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23545U;
    msg.info.assign("AYZRHZOXNHZFVRJHIXHUJYXLPCXVUZLLCKMUIRUYLQEOSNVYLPQWGQBICBHDQDGSSYMDHFTMXOOBIPQKSSBEWKNRTDKLIUAZLBJTSBMTSOQMOZACGJHBUREXKLKWOARCCDMZNPZRPSFUEAFLDJUFBNMGMYYYFTQAZYAENWVMTSUMWYQXFPKVQIJKCODZGNGGHKWHTRLJTPHDNVBEITNWEDCWGWXVJTQVD");

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
    msg.setTimeStamp(0.8945582884006519);
    msg.setSource(29840U);
    msg.setSourceEntity(33U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(175U);
    msg.command = 154U;
    msg.entities.assign("SQZNYDBXQULWBCVAIFYWDPRTWITGFCAUSTHQRIYBSYVGUOQTMERLHZDXYSGEWFNUECNTIWOKCHZBASTDXPURIVBOWMNVSORUSOQAYFBKOPEPEMIJRMKKXLHXRKWAXKYRGTFUJKRHUUVCEXAGIZVIPJYCZUFQMYFRLPYOBELAPJQJLKMIFKZCBEDCOMAQVEHPFIDVXZLBHJMLBNQQVPXZFSHGHNGJDJPGMXSOZTDKNATNTCG");

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
    msg.setTimeStamp(0.6331170385684964);
    msg.setSource(46793U);
    msg.setSourceEntity(12U);
    msg.setDestination(44987U);
    msg.setDestinationEntity(158U);
    msg.command = 79U;
    msg.entities.assign("VAOLGOXPWNNTNMLMKQVRWQGAFBNYRFVDJVUERKASCRBHYVQUCBLPLFTLLSVCAIAKFRGEQ");

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
    msg.setTimeStamp(0.9035712302514435);
    msg.setSource(9882U);
    msg.setSourceEntity(199U);
    msg.setDestination(57770U);
    msg.setDestinationEntity(151U);
    msg.command = 93U;
    msg.entities.assign("ZUXBBFWEUCZJFSIZWHTNFAYCFBYU");

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
    msg.setTimeStamp(0.5183960073245729);
    msg.setSource(6011U);
    msg.setSourceEntity(249U);
    msg.setDestination(1744U);
    msg.setDestinationEntity(144U);
    msg.mcount = 189U;
    msg.mnames.assign("RGYRTSTIXNCIOLCBDVSDPFWNYMPVKRKNYBERMAJBXNDZCJKOAWSHZQLPFHHTZILAQBAFNFCRQCASBYVTAMICPZJBPCSVFOICJMHFONMENZYSJARRRHDUPFPGEKEUTSLMJHZTWUTEQKGSGLBFNTYLQJGQRJUOQMIYOAOCWXZVVUXGPWXADCVEDBDKXRYGWXXQHJTHXWGFALZLKMMUEIVV");
    msg.ecount = 156U;
    msg.enames.assign("CFQRBJUQBDXHSQUSSDBNEIEGIPCJZRVPWOFPRWGTGNXEEZKGJSLKPNAEOTXZGRMSYOHCTVQYBPAOWXTZTGVYLEKMOOLPDWVUBSRLC");
    msg.ccount = 57U;
    msg.cnames.assign("NTXOBCURDAQACJGNBJBORGRLKPONTIMNAEAPYDFTHXJWSOARJLZRMOISLNPAYCJSUDGXSQCYCQBFMGZTHVPJBCGIJIVDKHQHHLQTIVINEZATCHOJFWWCMKPWNJXMUOWPHMRAMFEVYRZTYXGUNVWKYBOQSKFXDGWFHFXVXQEKYHRQDEUTZOPOIULALTLLFJYEUXIVISZZBBQIMYMMXSDYWRPAWUSFBWSGKZBENVGTRGQVCSZKKEPU");
    msg.last_error.assign("LTXKMDEAXCDMHOMABNQVNQAGGQCBKBGLLJFDMJPYUVAKHVGXJDSFQJBLWFAEVSLCTKJPPDCOUDZIQDZHDVSSMRQUWVLTWQRHNWAEEWJJRISSEEPFKGJICZYFYTRTCBOVWDPGOLYETGIHEPMNNJUCZSTZAAHQHVWUXPNBQCYKWUIOHSAB");
    msg.last_error_time = 0.5097295362870398;

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
    msg.setTimeStamp(0.7940102219289491);
    msg.setSource(64688U);
    msg.setSourceEntity(213U);
    msg.setDestination(56615U);
    msg.setDestinationEntity(111U);
    msg.mcount = 216U;
    msg.mnames.assign("EZBYOHPRHWKTOWKASXWUSIVQLLEANSCABKKGKBLGZNZQOJYNVJYOSLXFMUHXXXIZOFRQEVUASSRMPWMCLPNUPCBFUCHZGCTPDDNWWJFLQWMOMEAITIPNUACKOI");
    msg.ecount = 95U;
    msg.enames.assign("DGILIVSGPUCEMCSGFZZXWTHJSMNXPNEAOTLHCEKDVEXVNXGABNMWEKXNRCLYEBRONKPCLLEWYOZYXSSTQSWMTPBHKRKAZHPWDRBZJDMDVNXLUCTFXCCHVKG");
    msg.ccount = 127U;
    msg.cnames.assign("FCDPCJELYACQTDNNHTZDUIWYPGXRQOXEWNEWKBCXSNHHKAWRYONDQHLKJDAAKXGGMZRISUXNPKVOGVBIWE");
    msg.last_error.assign("VPPCZJAPPINOANDTXIRMSGGLRRXTFUUWIBRTENARFFDQJHAEFBNXKCWUJDBEBEQAHUQZUMUGDXYWMQEZGFVOWWKBHZHSABAKSCVGTRXLNAFNSOLCYYJQLIVMVSQZKJXLNTBDIPXIJPMGKAIUCVZYEPGVFRSVGUMLJFWCJFGANTKRTCMKEKHKQZU");
    msg.last_error_time = 0.6665571428838718;

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
    msg.setTimeStamp(0.19082904527044353);
    msg.setSource(62137U);
    msg.setSourceEntity(78U);
    msg.setDestination(4751U);
    msg.setDestinationEntity(184U);
    msg.mcount = 63U;
    msg.mnames.assign("ASDEWLWWQOZLQEPSJAGMWBBHRIDTNLXTFFCCAXFUXJTUJTRZPQCKBQXHXIOTDSCYHMLDZCDTLHKFYGFNPJCCYSWKBRGIQVKIPSVUCMR");
    msg.ecount = 139U;
    msg.enames.assign("FEOXHCTCRUMYNEDBWSKMTPSGVYFVFRHBOHLLVQESLAMWTNYHPZHWNIUIJGDWFOKNAAVJUUCJOSBPNMCBZUCWKIPAKGONQDXWNQZKEVJDTXZDXIPUMAUPEYSYEFTVIQGMFMYLGBNWIFLSDOBAURDIJYVXYZKAKXQCGZOYRMOOTXEOKMI");
    msg.ccount = 159U;
    msg.cnames.assign("HYGLEATBALWICPXUDZQPPBYXRSILJMDRNBKRSPPMQPGZQMXBOIGSIAONDNYCMWNEAOYAJHDEKTSVIEYEZJDWRTAVUTBJSOIXCTTGDPDFQOSGHZTNRMSILFBQKHCNEBQCXWLZGURSUFX");
    msg.last_error.assign("WMKPNADBQFSDTLMLBQUBUJESDKDPEQZKYKLSJFJEVIIECYCYPRBQMQGOWBHQIMOZQLAWKVNOZYXBGTXPGWZKJNETTGMRSHTJINNZGCNJKGMCIVNRSLHGAZHYPVZPTIAOWCWRFEOGZHOLKTIUMUFRRQNXLGLAMKTUPZUFWBLYOWORJBPYEDCRIQD");
    msg.last_error_time = 0.159527557175564;

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
    msg.setTimeStamp(0.3022938045739012);
    msg.setSource(23887U);
    msg.setSourceEntity(47U);
    msg.setDestination(36U);
    msg.setDestinationEntity(113U);
    msg.mask = 145U;
    msg.max_depth = 0.380985121774046;
    msg.min_altitude = 0.2647445938747366;
    msg.max_altitude = 0.8121696079681626;
    msg.min_speed = 0.05893552067081942;
    msg.max_speed = 0.19188395428797245;
    msg.max_vrate = 0.055951947125752355;
    msg.lat = 0.10353294660578582;
    msg.lon = 0.7879227125235784;
    msg.orientation = 0.4724859402161877;
    msg.width = 0.9076689839536214;
    msg.length = 0.41880859955018823;

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
    msg.setTimeStamp(0.3103075087928071);
    msg.setSource(33617U);
    msg.setSourceEntity(99U);
    msg.setDestination(6064U);
    msg.setDestinationEntity(214U);
    msg.mask = 235U;
    msg.max_depth = 0.5544238865039554;
    msg.min_altitude = 0.15656866906370703;
    msg.max_altitude = 0.5667335523896369;
    msg.min_speed = 0.4808753040190017;
    msg.max_speed = 0.9313115178590761;
    msg.max_vrate = 0.9529314449005779;
    msg.lat = 0.6079018510216699;
    msg.lon = 0.43079141017907263;
    msg.orientation = 0.0999444754389861;
    msg.width = 0.5131728729842362;
    msg.length = 0.20471301386264695;

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
    msg.setTimeStamp(0.4463957131994386);
    msg.setSource(13376U);
    msg.setSourceEntity(164U);
    msg.setDestination(11203U);
    msg.setDestinationEntity(128U);
    msg.mask = 156U;
    msg.max_depth = 0.7484942836956426;
    msg.min_altitude = 0.572136412446243;
    msg.max_altitude = 0.8938496423101349;
    msg.min_speed = 0.9784673338527924;
    msg.max_speed = 0.8549393071729269;
    msg.max_vrate = 0.7952252826651014;
    msg.lat = 0.24601655607453055;
    msg.lon = 0.8244523690212484;
    msg.orientation = 0.10145535366571079;
    msg.width = 0.6412761102801612;
    msg.length = 0.19357437326299087;

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
    msg.setTimeStamp(0.7436481126883788);
    msg.setSource(53163U);
    msg.setSourceEntity(81U);
    msg.setDestination(1785U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.055537049216297873);
    msg.setSource(34706U);
    msg.setSourceEntity(3U);
    msg.setDestination(48907U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.7863867248703544);
    msg.setSource(39121U);
    msg.setSourceEntity(7U);
    msg.setDestination(63806U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.5372269579637688);
    msg.setSource(28323U);
    msg.setSourceEntity(181U);
    msg.setDestination(32724U);
    msg.setDestinationEntity(80U);
    msg.duration = 28907U;

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
    msg.setTimeStamp(0.6974124234257003);
    msg.setSource(46581U);
    msg.setSourceEntity(244U);
    msg.setDestination(42620U);
    msg.setDestinationEntity(133U);
    msg.duration = 31774U;

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
    msg.setTimeStamp(0.6013194629797196);
    msg.setSource(53629U);
    msg.setSourceEntity(89U);
    msg.setDestination(9029U);
    msg.setDestinationEntity(203U);
    msg.duration = 53692U;

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
    msg.setTimeStamp(0.7769197112552599);
    msg.setSource(22312U);
    msg.setSourceEntity(80U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(148U);
    msg.enable = 60U;
    msg.mask = 613679179U;
    msg.scope_ref = 0.5495142141998004;

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
    msg.setTimeStamp(0.15714977019173082);
    msg.setSource(38866U);
    msg.setSourceEntity(82U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(141U);
    msg.enable = 165U;
    msg.mask = 1265492170U;
    msg.scope_ref = 0.3572742556854305;

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
    msg.setTimeStamp(0.7052473364343871);
    msg.setSource(43523U);
    msg.setSourceEntity(223U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(251U);
    msg.enable = 73U;
    msg.mask = 3695346483U;
    msg.scope_ref = 0.4352992498365549;

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
    msg.setTimeStamp(0.20101700623047503);
    msg.setSource(19537U);
    msg.setSourceEntity(226U);
    msg.setDestination(61840U);
    msg.setDestinationEntity(245U);
    msg.medium = 11U;

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
    msg.setTimeStamp(0.44218455823377156);
    msg.setSource(25624U);
    msg.setSourceEntity(94U);
    msg.setDestination(58860U);
    msg.setDestinationEntity(206U);
    msg.medium = 246U;

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
    msg.setTimeStamp(0.04062745280661395);
    msg.setSource(25638U);
    msg.setSourceEntity(137U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(44U);
    msg.medium = 216U;

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
    msg.setTimeStamp(0.8534117631138896);
    msg.setSource(34633U);
    msg.setSourceEntity(163U);
    msg.setDestination(47801U);
    msg.setDestinationEntity(130U);
    msg.value = 0.7335660359862112;
    msg.type = 47U;

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
    msg.setTimeStamp(0.9118073101417719);
    msg.setSource(62934U);
    msg.setSourceEntity(160U);
    msg.setDestination(45891U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9491597139451912;
    msg.type = 237U;

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
    msg.setTimeStamp(0.8788644598000699);
    msg.setSource(38380U);
    msg.setSourceEntity(215U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7099014625852458;
    msg.type = 135U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.8900367988277468);
    msg.setSource(25854U);
    msg.setSourceEntity(173U);
    msg.setDestination(11927U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.8375647580055099);
    msg.setSource(14069U);
    msg.setSourceEntity(243U);
    msg.setDestination(23575U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.840960426853228);
    msg.setSource(19539U);
    msg.setSourceEntity(45U);
    msg.setDestination(11393U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.417657848909877);
    msg.setSource(12538U);
    msg.setSourceEntity(89U);
    msg.setDestination(14552U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("SNCPEWLTHVTKOACPVOIXTPUAELBSOWXNDLUFHHMEYWPNRJDRCTFYYBIHNKNYDQPDQQWLGPOJYNQGRHHIUNWFKUDHQSEPMKRZCXCRCKJUYXDYUFFUTOJFUETIFMFSLRXMQAFVLJLGQBUVEINXLWGGOSJGIGEDGMBVZTXPMYWAQRGBJSTMTNOJZAZNKSYGVKZXPMXEEMBHIDQDZRZ");
    msg.description.assign("CJPBTUIRDFAOFTGVDXKEMQJKGHAAEIWMHINNTJPRSXBMHWBIVEITFMWESNOONHICSKGZOKGYZIDQTZNVLMJKCOHLN");
    msg.vnamespace.assign("JHUZPFLARPYEDOCSMOUHKIHIDUUSBKWEHTMFBCSNOXXFGFURSFTNCSOPACGKRCGPBZYVELKERJZVTKZIGXKQOTBQXUFJDXFDEEGYTYMAYMQYIJBWLNTZMDWLCHGQDXVHCSUSIUJBPAFWNWAFPZQNUSCWAIVRWLPNWBHXTVOINXRIKGAQMSADZRWZHQMQRENYKECVVS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RQUDTOXYKYXAURKEAHFWIDZMPSSQIYPPWQLKNQLRWZJKPXZDGVTJTMHBAIJPKWLNEQFMFQNMSENSEDMZULEOVMOLGJDUHHKYLOIRDPVQCHCXSCHIGSGFPDCEMMGBVYXDMF");
    tmp_msg_0.value.assign("PXLEABNRLZCAXIUQFKDNDQVXJGNFHMEPAYAPRAJSDIOFQYJTKHSPVVFOQQDKLIWAEINRRMHGZBJZRUEUNVKNIRCZPBOQKDZPSGGHLSRSYUGCQ");
    tmp_msg_0.type = 204U;
    tmp_msg_0.access = 180U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JKKXAQUOBXGYLHFKZTYJOCQDVYDKMELKZSNBTWEOFRFWLCJNINMBVMXJDZTPTZEDAPRHQVIJSLPPMQPUASDBLKIZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PUXZWLDDKGLHYJKRLOQJLGQQGWWCVMRRNZUOQIKINNO");
    IMC::FollowPath tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 8692U;
    tmp_tmp_msg_1_0.lat = 0.8281146004907008;
    tmp_tmp_msg_1_0.lon = 0.7517882673028028;
    tmp_tmp_msg_1_0.z = 0.3541963258977906;
    tmp_tmp_msg_1_0.z_units = 10U;
    tmp_tmp_msg_1_0.speed = 0.7962317938969579;
    tmp_tmp_msg_1_0.speed_units = 150U;
    IMC::PathPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.1721079910915403;
    tmp_tmp_tmp_msg_1_0_0.y = 0.5308636351841425;
    tmp_tmp_tmp_msg_1_0_0.z = 0.280545371402632;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("FAOXKBYHHGBIIOKAPLEFPFNSUVBROLUONGCTDUUBOZVGRJHEJGPJNITEJTZSZOBTRLZUYHKHPNGAXVXGOMWKPVEQTTYVQDLQDNPYIGTCUACKVWXUSCFAMHGENPSAQMJUQXKBOARFGMNIEDCXAQARYOXIUTFGQDMSZTOSBRWLEICLTSJMXLCFQHHVWYRDFZYLZWZZEDMZLAJVQKNWYJWBDRXIIWMSES");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FollowPath tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 21049U;
    tmp_tmp_msg_1_1.lat = 0.3723707838728284;
    tmp_tmp_msg_1_1.lon = 0.6731284416553451;
    tmp_tmp_msg_1_1.z = 0.9443221074346575;
    tmp_tmp_msg_1_1.z_units = 221U;
    tmp_tmp_msg_1_1.speed = 0.97480035923042;
    tmp_tmp_msg_1_1.speed_units = 40U;
    tmp_tmp_msg_1_1.custom.assign("WFVZCYRUSTFGNTMKGDWIKAVSUXWEVXROBHQMTFBBPPDVYCEBDYLBLMFIUQSLMZFLKNHTEYVKHWMQBHJNCOLQARKLVGQFX");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.4554612000313174);
    msg.setSource(21543U);
    msg.setSourceEntity(90U);
    msg.setDestination(58295U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("SQTGKLUMIZWXKHXJOJFZXZEZPGEODPLBADFRFCIMMNRHOIFVDPJOHOIRLOKXRVMWDQVXWNYALYKYSALBHNZEDNYFBDEPCOQZPNCLEDJTWVSLWGCWIWBVSGRQZDKHUKJJACNKAKXJBRGBNHXQTPMTVAJWBIJCUGVDUTDAYXPBOHJSUQZLUIIBSECTOMVYOCEUURFNRVPGMFSFYEPUYQWNYEGSKKHTGMXIRPLMWSIGLXQRFYTZFQA");
    msg.description.assign("RGFOYOSRRFEBCJJYGRDYZBRWITNTWVTAJKLGALSXTVBHWBNOUDBZGRMOZRRZCJLGZNYENILKALFFAPCDXEYEVSVWPOSVSYSPQPCCRWGTHUNBMQXKJKLIZIBTOXHLTWPIQOCDJTDIUAXPXHOEBQUOYQDNILLDNCUVRGZQYVNQEUIAVZQQCCSVUSHFFPFLXCAPMEKDMQIMFYKDNDAMFEHKHJUTWXNBXWKWUMMMHTUJ");
    msg.vnamespace.assign("RMKJDHGDVMZMESUWGONEAUFZOPQWRRPBTCACAHLNBRAZJUTKZXBYIDVMMAVWWHPLJYVOLBXNWJNBAKTTUIYNXCCJFVMJFMGRVKYKCVQHSXTQNUFPFJTYDIIQBLFKOJDGKGNBRWZLMMYEKPWQAGCGVEIRLHFKZUIZAEHOOUZJEDNDQDRSTPQEEVEIW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UOJYQREECVCNEVUXZXNXEPCDGCJLDEMQTBIMUXWHUAPQRGFYHVIJZJQDBRNAYZLAGNDIODFIMBOPFRILGMTUMAFTCLBPALEHTOIBFLLGSXHAIQHWPSUQVSKGLGOOPGHRKYDYKAADYVERUXQTEDYSATQZEZZICPAYVKKQWJWEHDCBYCWF");
    tmp_msg_0.value.assign("MQUYLZKYUREYWMTSCRZWBSSFQZXVQMTAIWKOZLASRRXIOZFUELWNMYBROPSQUEEQUNLHJ");
    tmp_msg_0.type = 131U;
    tmp_msg_0.access = 210U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YMHBOJHRCSVAOPBFELUFCKBNQZDJMCVXFLKUIKRCAUYFPHSKHSNVUVOROZPEYAMWILXNKBMGEZPIDMJKQKNYHVMGCPRWBHBIGAMCLONHQAJRNLBSIYWYAGTNZRTJLOLPQXCTZIKZAGS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("VYROCDBZWKODXHWKEZRXJDMOEKXTLEZIFQSCNCJDITIQXTLWSUHDQWAPNZPTGKLRQOTHYJSACEXHBKHZGVFFFIVNKXZRYSVNBDVDJFHLFGVROACW");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 56059U;
    tmp_tmp_msg_1_0.lat = 0.14704012933374666;
    tmp_tmp_msg_1_0.lon = 0.7949607600817875;
    tmp_tmp_msg_1_0.z = 0.887968108892628;
    tmp_tmp_msg_1_0.z_units = 98U;
    tmp_tmp_msg_1_0.speed = 0.22879677444191082;
    tmp_tmp_msg_1_0.speed_units = 166U;
    tmp_tmp_msg_1_0.duration = 37968U;
    tmp_tmp_msg_1_0.radius = 0.06388461067266082;
    tmp_tmp_msg_1_0.flags = 139U;
    tmp_tmp_msg_1_0.custom.assign("VNEZYGKPJORURWLFJCTAXLAVKZDEDGNOALBT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::MagneticField tmp_msg_2;
    tmp_msg_2.time = 0.23077507341486947;
    tmp_msg_2.x = 0.24427226399133206;
    tmp_msg_2.y = 0.3066135381540025;
    tmp_msg_2.z = 0.7676677746332282;
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
    msg.setTimeStamp(0.30832968523941295);
    msg.setSource(16138U);
    msg.setSourceEntity(130U);
    msg.setDestination(9777U);
    msg.setDestinationEntity(67U);
    msg.plan_id.assign("JNOOXVPWKBNXDEEMFGMYEADBBDXEDNTAFPAJKMVFJWAWIGWHOMYVQZDDLRNSPKDXHXQGUMMJUQZGCABPTFOMERACZARIBSWJUMNYFRLSKQIKUQTVZTUTONIGLCTYCNKJBKSBPQLUOVWQPZVOTFGASSYDPHPQYCNDLSCRYYQWJPIXUHVRZPLCBWLV");
    msg.description.assign("BEOVDGUDEREBWRMREHQQSXEFKYLPZDDHWSIAFDSRTHSKSNGJUBJOKZKWOGAVLDSAZY");
    msg.vnamespace.assign("VUXFQLNWAELUFWELCYCFPEHICXPVCJTEUNBKREHXVHZIIGDKDORJNCNHANIAKWFL");
    msg.start_man_id.assign("QYUSAKRHDVYPHWEPNFKPWJPUQWEJSTCSCWAHLPMUZUNXVFLXCOKTWBZPQQERKTFHMBISBXVGZDNSVGVAZOZQUMCKMBFMWSEMTCOOYRIAROCTGURTHOXNCGLOHMBUNFJ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CFLXKPRYUTVVYSLRWPCMOKLMLOYTZERTUZMCLGACHJFNCTQSPKTXZDVGNYBVFTSCZZKKWHDFQUOBWAJPJFBENPMIEDDIPHRBUUBIHATMUVJKRXZKXBWCNHKELUBSS");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 2240U;
    tmp_tmp_msg_0_0.name.assign("PJUOSQAYJBAKPLVOTNFNCOFYAZZPGLDWLMJOGDULIRYTMBYKMZDVDHOEGBJMPXRONLGSTZKQXCXWJANFWCEUXQLIGFYGIDHEKHPVNPFOEBJQNXRSBTKOFBLTMRPEIYMRQRKPKMVWRCIANEDHMKGSODVEHEHVLTQWCEBJFIXSPZPYOCTIXHYUSMCWWSUUJU");
    tmp_tmp_msg_0_0.custom.assign("SLDFYINJMKHSMHBCPMVUVOABAISNSERHTDOPZLFZTNEVKUQQRNASHCROK");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::IridiumMsgTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 52148U;
    tmp_tmp_msg_0_1.ttl = 36257U;
    tmp_tmp_msg_0_1.destination.assign("WJZCSICUVRNJDGYG");
    const char tmp_tmp_tmp_msg_0_1_0[] = {-10, -56, -60, -23, 57, -18, -8, -62, -127, -12, -22, -124, -28, 33, 59, 2, 42, -119, -33, -98, 119, 114, 21, 96, -70, 105, 41, 18, 6, -33, 93, 97, 5, 2, -37, 22, 25, 30, 92, 17, 86, 39, -75, 37, 93, -2, 110, 113, 103, 82, -80, -86, 126, -61, 1, -121, 115, -76, -103, 1, 12, -37, -15, 36, 90, 106, 78, -116, -46, -39, 86, 28, 21, -48, 25, 68, -107, -33, 107, 60, -7, 124, 97, -84, 14, 34, -112, 62, -123, 14, 119, 66, 89, -86, 64, -48, -38, 11, 25, -48, 49, 80, -70, 51, -110, 40, -78, -45, 26, 79, -20, -103, -27, -1, -92, 21, -26, -2, -120, 108, 48, 4, 115, -121, -83, 86, -124, 21, -109, -106, -76, -27, -108, -122, -118, -34, -5, 8, -18, -55, 80, -9, -65, -1, -44, 13, 8, -33, -118, 111, 13, -68, 59, 42, 73, -107, -125, -3, 12, 13, -14, 113, 124, -111, 12, 89, -74, 126, -95, 20, 51, -124, 103, -10, -10, -46, 89, 20, -100, -101, 83, 50, -11, 121, -79, 45, -53, -12, 118, 95, 55};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::RemoteSensorInfo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id.assign("NNKNREBQBLWYZTWORFVIJRPYRQZWEZCUWGVGPLBQPWMNHOYSISZHDHHPIUJALCNATBADOVXU");
    tmp_tmp_msg_0_2.sensor_class.assign("ACFUMSOAWPASBRQMJCIMPSKNENTQONXKSDVJAIESAXKUFMARJDXYHWWHWOFXGUBCDQJVNLEYQYWOGBMRNTTSHOQVZHTBKQMMZTXJZEZGZOYFUIHDUTOVFELKBMBVQALWLCHMJPUXQNICBEBMISGPRLJZWYHCHTJOIZKEYZVZLPRQDAZIRRPTCWKGSLREGRXLQGDIGSDJWLVUFNPTUKRUGYYKJCA");
    tmp_tmp_msg_0_2.lat = 0.39404459116033497;
    tmp_tmp_msg_0_2.lon = 0.980611036074353;
    tmp_tmp_msg_0_2.alt = 0.4662971856715328;
    tmp_tmp_msg_0_2.heading = 0.9603501156102905;
    tmp_tmp_msg_0_2.data.assign("PDAGFLKUZJTPKOIIYFAPWQN");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::EntityState tmp_msg_1;
    tmp_msg_1.state = 200U;
    tmp_msg_1.flags = 141U;
    tmp_msg_1.description.assign("ALCWTOYAPMBVHPVYORPMWINLOURXWZHZVFFREJRLRTUJDXWOKGXCJZTSSMPVIPCGFPPBYNCDSMFIEJAWWKXANJGVMTOUWSQBDXIFEYOQOVWSOUTHMSJXUDTGSEDRYGDDVKEHQRDNHQBEJYPZAYSVGFGDMAOIKAHNFFNUQKZLRBRQXSWGZCXAXTEHQBECSNLERZWUJTQULYAZQBLIHXVGLTUIMYDVLZTNUNIYKZPK");
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
    msg.setTimeStamp(0.3341277674158317);
    msg.setSource(55710U);
    msg.setSourceEntity(55U);
    msg.setDestination(15826U);
    msg.setDestinationEntity(24U);
    msg.maneuver_id.assign("IDVWVAJMRCVRSYZWUQGBKQHYTAIDFUXZMQETFNDOKYFKGTX");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 14498U;
    tmp_msg_0.lat = 0.9081209422114126;
    tmp_msg_0.lon = 0.4311552352220063;
    tmp_msg_0.z = 0.41566078184262545;
    tmp_msg_0.z_units = 135U;
    tmp_msg_0.amplitude = 0.8019116260245189;
    tmp_msg_0.pitch = 0.573531555854512;
    tmp_msg_0.speed = 0.3580053654749302;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.custom.assign("PXFPZUKDPQFQNLOTOJYHLJMYDPJBRWPALMKHPWGACMIRXGCETCTHECTJSSNUBJFQVKZAATVUGWEEURABZJHLMTDMZDVLOWBWNRVNBGZKALBOPIHUROSXOKCSONOMDFICBSRSYMDGAUTQLXZXXPXYGNVVBGWPYRIQZQIYJTHWVMUZHDQKEICNJARNFSKYQFTJEUCQLFZEYOGLKWNXCCABGDVHQIJFEDNXAFVSIDYWHZFSLVMXTYHUU");
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
    msg.setTimeStamp(0.21968068747650416);
    msg.setSource(59388U);
    msg.setSourceEntity(63U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("CEBGWYPIJPXQIWQKYNHCEFBTZCQMHFCZZMAVWMHVRZMUDWIKTJMBRMHULKDIGXPLJPMZRSVRGJKQJHSRYJHONEWDXSUHKSCNSPTDTOHPBGTJAGVVAYMGBNQXXBFABEPIIQAIUOFWSFVLEACJRSYULVCGEQQSCTKNOVHTUCXQONEDTGDFCLLXTPRAFLZYDUUYLOUGRWKGODNBSPMAKNZZLDAWXKDYYIBFTVNMQXPEYRIASKIOF");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6043048964630552;
    tmp_msg_0.lon = 0.5442580642513613;
    tmp_msg_0.z = 0.8196568714226999;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.speed = 0.8208065055066308;
    tmp_msg_0.speed_units = 32U;
    tmp_msg_0.start_time = 0.3065448834803668;
    tmp_msg_0.custom.assign("KRSJPZJVAAMJ");
    msg.data.set(tmp_msg_0);
    IMC::PlanGeneration tmp_msg_1;
    tmp_msg_1.cmd = 189U;
    tmp_msg_1.op = 8U;
    tmp_msg_1.plan_id.assign("WEMCAUNNXVLTAMTKLIPDFGSAVGTZVPQUOYUVFGIJNMTRPEOHQHNXGFHMWJGDSFWXBFZSAZHKPKGQGUIHVBDRLLWPMNKPCJSVORMYDRUVGBENOOEUWGEHRIKZDSRUXQBXTXMZYVDYBEXBRYABLNHATR");
    tmp_msg_1.params.assign("EYNBYDQNUFJYDZTSHQXNVVNKHWRKBFPALOOBYIILPHWTNLXGQDUBFPHMESKJMMCFQGOSNOYTRFGRJDTRJICOCCBHMOAKGKWNAFTZTLGATAAQDSMLIFXYFXABEYRIAJCVWLRKUIEHZZXECXRTJXSEOIJNMWSXEYOVOMGZIJADRUEUVWULQPNTEOVMGVICWJHCVRAYBW");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Collision tmp_msg_2;
    tmp_msg_2.value = 0.78165742265827;
    tmp_msg_2.type = 205U;
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
    msg.setTimeStamp(0.7598285914781201);
    msg.setSource(18361U);
    msg.setSourceEntity(15U);
    msg.setDestination(57897U);
    msg.setDestinationEntity(254U);
    msg.maneuver_id.assign("TEPLEFTCNMLSATTUOQOWCJSVHBSQYOPBGBCWANOETPAAPVPJPHSZQCQCBRGGAMWTBNVSXKKKXDTRROEUOUWLEYJYUQSJAPMXIDTQDLXBCEYIUMFSGUGZNWJW");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 57910U;
    tmp_msg_0.custom.assign("GPBZAGRJQRPYQJKIQBZ");
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
    msg.setTimeStamp(0.9935869619284082);
    msg.setSource(19071U);
    msg.setSourceEntity(7U);
    msg.setDestination(45359U);
    msg.setDestinationEntity(109U);
    msg.source_man.assign("OCFHJSBHQLW");
    msg.dest_man.assign("ADKARWOSNLJIUXOAYHWNYVAWTBXKPYZQWIIHHECQBCMZQBCNZWTUQRYJNVJFFPMCZICA");
    msg.conditions.assign("BJRQBBTZRHOLBCKBKJFWEAHVKAYPUPJTUAUHAWINFEDDDXKMUARPFJTKLEEBNLTHWMWJNPJGSRQTGCYLXYAMQQWCRTXGDYNWONSVAO");
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 162U;
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
    msg.setTimeStamp(0.5010401694859281);
    msg.setSource(26682U);
    msg.setSourceEntity(25U);
    msg.setDestination(35181U);
    msg.setDestinationEntity(52U);
    msg.source_man.assign("TCUPWEMHNUBHVBQBXXSHQMVJLNKPFNPDCYSZOKWOEJREZGUDHTIBYLZTFTONATGAXQEYWLUODKQNGFEJFMCUWVUPLBYWAZJFOYAKRNTEMVIZJGTTALPSVHITWAOYJRBQCSWWKYXFHNRRMJUQCBAFTHKRUUGPXSQEVNFGUKCHEXDRVAMDILIRKMZPGSHQVRFYJIHCPISABZZMFYWDCQLJOPOOSSYJAPGBCXIKVDSDEZCVLWZGDRMXQDNXIXKEM");
    msg.dest_man.assign("APCYJIZACBYLRDNVCRCJGTTXLQJXUOYKJFPMYLQYWFDEIZSEXJNDCUCJCLIRZHHEZYPOTMPOQQVRZDGTHWBBHHILVFUSDLMOSPGMSGIZBZMUJENOQPHXZLVEPXHKKMRFGWRXTYWQW");
    msg.conditions.assign("IPYLOCDAPDBTSKJVCYKSABISLRXIMHXFCWGNDNWFNMOYXHIBUFJBUDWZMGVOSELYCKAPRPMOELFSMTWIGBEJVTVS");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 62315U;
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
    msg.setTimeStamp(0.019618671222632056);
    msg.setSource(7222U);
    msg.setSourceEntity(55U);
    msg.setDestination(57337U);
    msg.setDestinationEntity(13U);
    msg.source_man.assign("ZDBGJNZAPNTWXDGXFRTIJLHUHCSGLFRARHBETXJAQQMRFSPMQBEOOOJIMDWWVJNCNRPNPALLENLFTRUOYKMUBRLNKJSECFDYFZDAYKGVCYZFYHQXWASVUUMTXFBYLWZHJPRCIECJRNIOHKDIHWUUODXIAQGSVUPVPABZXBPDISCZQMTLSTEQBIMOY");
    msg.dest_man.assign("RMJMQTDSPEFNQRMWOQ");
    msg.conditions.assign("HCRRBIODYCEVDZFFETIH");

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
    msg.setTimeStamp(0.4512790414036676);
    msg.setSource(14396U);
    msg.setSourceEntity(248U);
    msg.setDestination(51164U);
    msg.setDestinationEntity(116U);
    msg.command = 124U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UKYRBTXYRVESZJHNFRSKBGEGBWFVOQMXPHAAEOJAZONGFSQHCJWQWDNIQJNUQWEHLICKAJZEFRSAONSAIXYKWHGLBVVIGMIWTLJTPYIOFSDEMKLRLAWKSFVRSYYUTVOBPQJRNJTSEURNTXNXDOZKUQYKBPCOZOBQXZLCFTUDMDXPZLQYLPEUYICEASWIFMDFRXDGNGXZAXGMCINDEGPWJAKVV");
    tmp_msg_0.description.assign("FDKDZFNWUBWOQJPNOHAWEYAYEXLKNMMFOASE");
    tmp_msg_0.vnamespace.assign("LBTHMZJOLSQKHTRFYHHATPAAZMYSJNACVZSVIRNSFQAPEMGQLJMUEOTQCYLUZOMPOYITEJFCYEWHVRXNNLNMSKZAAVCZLTBKPPGMHREBNFGYYHKDKEQZRXUHCQDFJWGGPDJGYWUFOMBBRLPNKCFVBWWB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CRPFLSXSJFQZBYOHEYVAMIOJNUGHXDUEGCTSOXQVTVCDMRDRXUPUWDIIKVLVQJCBMLLEEW");
    tmp_tmp_msg_0_0.value.assign("YNPIOEHRAEISLOYRRXBUCMARNPFEYGJLZTHTYKGBZRQJHBHVDOUYZOVSDDOGSACCZQAWBFLLPIQKZHJDLQADPMFTETQCAOZHSOFJWPFUGXHEGJSXPLMUVKK");
    tmp_tmp_msg_0_0.type = 253U;
    tmp_tmp_msg_0_0.access = 46U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PABBIQALDEHMWHYQLEQUQDHRNIIPEYYVBSOIUGZGRUGLLSKAWHEQDKVUWVSRSZNVJNABQUMSHYVHLVRUFGJOGUFMFPGPYTMOJNCKOCZIEFSYXNOOZAJE");
    IMC::PlanVariable tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("SOJHURFNJWOAFUWLPVGYKIFJHXTKWOHLBZLMCHAJKVRVQCKZIIAOMSSTMSADVOMFJXQNJGUPCDGMORHFOAULVFQJFBIXQSCTWBGUKPYNEPCABASLEZHFIEDMGDWRTIXGPWDEIWJHXGVOSSRWTKKNVCRTINPTROADQYLBBYDZKXMX");
    tmp_tmp_msg_0_1.value.assign("LOQAGHQFMSQBTNJIUJDNINNIBZBVBDKTUJJLYLZOAAZRYAMSBSVGXRMUKWKCQHGNXNEPLFPEYKBAXIJZONVJMWXFRSLEDOMFIHDXPEEMLNUSWRCDHIHROTFGVOYSYWBHCDTMQXSYEXAJUUMBCOKTORGDJIZRASDKGQCFTPTLIFHHSVCRHWAUJMAUZNEBYECQFGSY");
    tmp_tmp_msg_0_1.type = 28U;
    tmp_tmp_msg_0_1.access = 71U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.4459388364529191);
    msg.setSource(56972U);
    msg.setSourceEntity(162U);
    msg.setDestination(33376U);
    msg.setDestinationEntity(212U);
    msg.command = 244U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FXFGFNFYLUHKOSBNGUPDANTKPYMKBZLOVEDXNACROCBNOITECIWDCYILKWPIALEVTOZLJMGVWMGWILQEXNJAMJQVSUFBWVASBRYTWMVFYUMRNKPLWUKIRCZ");
    tmp_msg_0.description.assign("QMUJFIGNIGHOQSBQTXTDHRJZWMTJNWRKUSUPVETUTUHBAQRKVYOHTODNLZTZNSMMPBTZWXOLADLPZIHGOFAMSOZUJZXNAXVFKHYKCGSWHITEDFPPQBKAJDK");
    tmp_msg_0.vnamespace.assign("IAUVOSMWDMNTZNDXCTBFEYJYJCRMODKHWBGRBIFQSLCCOJMRZPJXFGWPZQPSTYOGNEXUNXJZNWZBAMGFBNMGJNQDJWUICGPEUNQSAIRUZYHQIODWEVPYGRLTIPCBLOHBBEYXFFTQXALITQKXFASZHLQKAUGXFBAKNUEWEFHATGMAIULAITRLDNJGWDCTHOVHQPJKVZRKTEYEXYSXSHMPDCVVVLDMPV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NZIQAQFBDVSMLBDYTZJXFZAHTQXVSBJEWHFSDXBBCMUDTUMXJRCNBMAGLQWYDYQFRABVPOQUBUBELEAKRKNHOREXDSGVAOLQHUINMJSNFLBCVMWQTCAEUGXYKVOEXAEQLXXYNOGZNHOWPZZVJCIOGODWYHEKNIPS");
    tmp_tmp_msg_0_0.value.assign("TIBJCSTKRNFRPADZNYCOOLPJHVQUIDYGOEQMCYAVTEVGKCOYKJSEEWKCDOTNWTMZCBMWPFJZRPOHEANGWVGCSZFCSGULLZRIWQAKQTRQAUH");
    tmp_tmp_msg_0_0.type = 186U;
    tmp_tmp_msg_0_0.access = 50U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HFMQFJCKHGZXXZPHHDJCEIBKOGZDOFAEBAWGXHNMCDWVZGBBBDHOUTOSUJVGPLFLRQORJILMQRNWKPQTNMIZBCAYOAPELXSJWPRNJMDSTUACGIAOAMXZJLWDSJWQPBBZUIFSTUVFOKDVEYJWKSYCHP");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BORMFFEQAJDRANALGDHLBIJZFHEOEMZJGNYQPFTKXOKVIZUQMJMIWVAWLCGFRFIQFNFPVYGLJJDTNTBGXQKJNCRMKQVUBKDSWBCUYVZAZEJWOLMRJEVPHWPADHRPFYXHQEIGUQGWRXSTVLQZBTSHKPGKLTPASPAKIPPSMCNILZOZLYICEWOWSYUUHWFEXU");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 52484U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZYQWXDUBWABGCNJMPAKXGOBZASODCAEGRBHEUQNVPQYDQHRCFKXLECQVEUIFGWQCDHBMPATJXPRDQCCZHNYNOHVGKLMCWNFXGGXVRUBWAEMRKPTXDREDUSOZQIKGSOBVYTNWBMRTLFXLETWZIESJMOMVJFLWBAQKDSZVQILUKPPAONXTTMGFUWPVTLPNINF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Acceleration tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.time = 0.9133726264534386;
    tmp_tmp_tmp_msg_0_1_1.x = 0.7644618565365183;
    tmp_tmp_tmp_msg_0_1_1.y = 0.16234867542122655;
    tmp_tmp_tmp_msg_0_1_1.z = 0.1765031510547611;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LGIUMQCEIXQOSHZIGKDWQBGRHZQPMGDESUGDTTDNCPVHAVTARPEZCYUUMUCIWUVOBKLSHVADXQKMBRWAXKEWJOFYYFZVHEQVMUBZGTOXNIECYEGLNJRRTLPVJJBNJYJPDYTOBMVNKJSSHCFGTANRZZZPAIRVW");
    tmp_tmp_msg_0_2.dest_man.assign("BNJMBWJUMBNHWNOSZEHUUXGSEVLKJINYEKRVMWYTXOVXINAXQUOZWDZXFMCIHHEAZHNFGWDVNJLXTEMGIIYTSADGFYVWCSJVVTXERRWWLDSKUTKHBTZVBLACCTDQMOMCCKYJFROABLOODYISHJQGZLHJTBPPRDDDLQYMOUSCQKFEPQNQFIMQWQACEHKNSXCUQXNAJARIFFBXUYEYVPZPYDHBPIZOVLGAGSUFCK");
    tmp_tmp_msg_0_2.conditions.assign("PLGGJSTJVMHJUXIUVXRFWYYCHWDZRBWFHAEMZQXJNRQYKLBKZKLHBAESWLITDBXFQVRWZUTSDTOAEMKSXLITMBUCIHJHVJSVMNMGPICJZIPUFWEAFYNQDMIFPZKNUMZOZCSUNNRNDKYKDRGSHMVZCTAGVEKOHRGWFEDIUYGQRCXVRYERCFOHFBPOPMXODGLPNDAXKTIBSZLNAJGXLIWJETBFDSCTWAV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::TrexAttribute tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("XPQRZKJNSQRBATNGNOJLDQGKVHPRIROJIPIEBGUVMFVMMLTWAHWZAUIODYLUZGHGKJCAEXQHDZVTLUPVIAAWFUZNUJGVFOIBJVRQKFEURXMKSAWPSFJWKORNQRBNBPSZGZXOLIXWHLT");
    tmp_tmp_msg_0_3.attr_type = 184U;
    tmp_tmp_msg_0_3.min.assign("BBUSXEXTOILVPKRUYRZELDFODPMSNBIY");
    tmp_tmp_msg_0_3.max.assign("ZIRAXEIEWUZFSRHJTHICRGMGBELEHKSBJZMPFMHCWMMDIEDBCKQPVQWKRDQUSFSPDCZC");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::DevCalibrationControl tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.op = 247U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.5783951523958166);
    msg.setSource(64104U);
    msg.setSourceEntity(212U);
    msg.setDestination(38938U);
    msg.setDestinationEntity(69U);
    msg.command = 42U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WUGPLEBIJMENDFSUQHFWRMAQFPLBMIBTFCEMXBJDPCWQYOOCFWLDKFSREEFNKCVLTDRFZTVKLMROCNUAYGPNXKJNYCZCAXJBLMUKQARLQONMKPZYTPXGNQIHDTFXYEGPJPUYBRJZSQVTZFXYW");
    tmp_msg_0.description.assign("NNMKBGDRJJXPBMUWTQNISLZPBBUFYPPVOXGAQGLVJEHTDZOLSQWOGKPPAOYTZC");
    tmp_msg_0.vnamespace.assign("DLFLWUVYATIQAZXRHXWEQWJAUQPIELJTRHGJYMRTKIUTQTMTDNYQJRHDEANOAJIXBJTRGFXUGLBCCEJZIHGBKYZUKXBMWVFOMVXOZFGSHVPTEDLPQFWEOIDHIWEYAAUYBPNPRCULVKWOSVDLCEAPQSFZCSSMABQSHZVEIDLOMUXBRTAVDUJVDWBBIVSGYRHPUHNCYCQEGWLYKNSKTFZDMPPHRYKXOFJMGS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LITXUEPISPAGBXULMVDSHZXUFVPVCIKLUXCEPOFTHPCSHIUJMJOAZKTUFMCRXTXQNYAVCFSLNWBFMBDBHZOKJJXYMGSNDFEQMECVLZRYDLLLGOYGRADFWBRNZOWXQIIGVRSPWRDYKSBWQIQDMLQDDPMEJBDBYGRSJQZJBYKNVTCFTWAZIENOSFSGHVMAH");
    tmp_tmp_msg_0_0.value.assign("ODAGJLGBKXLKQNPVUKTHKJFBPANHZIFKJDILXSYINRFITVGSIPIZJCCXPOKXRTFGQLYZZOVNHGWYIHUSCXBBEKKTBLOOJYGCUMEYKCEEVHOUXEUQMHSYZHRIZQDYAUEAXPNWDMMPJ");
    tmp_tmp_msg_0_0.type = 163U;
    tmp_tmp_msg_0_0.access = 179U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QYEDGQCDPIXTMNMUCNSSDLXSODBPDPJFMBKFVZJYVGEUWOXEFWOYYTRUTPTLHFFLSTLMUVKMHSEUOHRNBLBRYQCPNVJGJHZZAGGCLWAJBICUXUPPJ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NGOPQULVRCXACSKVSWSNBKKMMUYXSNCLOPMKXLQYDRDZDYMFGQMWSXWZYBNAIYMMWAKQAGUEDULJKTEOHUXQHHCETZHQAPHNHAPWLSYWITTJB");
    tmp_tmp_msg_0_1.dest_man.assign("OVKOVFGNGFPMOVNPXEKBQDPIQCXOXRCWELTJWGQBJZAKYVXFARSTKGKPJQTVWGKXUWIINIUZXHEICUTLSBXAZAHHHYMRTYQIAFCPQIABUNDPNFPENYMTIWBVCFSGMULRURYDGMSSDSZRKOKEAJCTSWOLZWNWPMBDWG");
    tmp_tmp_msg_0_1.conditions.assign("LJZOCJAZVFPANTIXWPLCTCOVHANXISFDMUXLXHIFQDWDVJNUYYOSXNKMDNSKNSHHGZGZCYEYHCWPWDYCDPHBWVNTUTQESMEDFPUEHWDAWAYFDMXRRAHZZKPGC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SoundSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.07049383619141791;
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
    msg.setTimeStamp(0.8840779060096565);
    msg.setSource(40010U);
    msg.setSourceEntity(213U);
    msg.setDestination(11957U);
    msg.setDestinationEntity(245U);
    msg.state = 174U;
    msg.plan_id.assign("FMHKWRGEGMMJRCIWNVMBIQMBQGTPAXZJFCOWELUAXWVDBAYVTJZKHSRYYMDRWRYWYOFWVFLZXDKGKJEEIULNDLVNVCAXZZTLKLQPXPOAABOZGXKMRTZOKACBJNJNGSGVXEITDKFLRICWTUDPUIYKGIGFBQIELTNQFBCDWRSHXFNTNBEQSOUASWOTYHDUUVEHJUPOOPZHDEFZZPCVNXCYJSQHRHSFRXOJKSTNEPIIY");
    msg.comm_level = 196U;

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
    msg.setTimeStamp(0.6996709914821078);
    msg.setSource(13804U);
    msg.setSourceEntity(10U);
    msg.setDestination(46875U);
    msg.setDestinationEntity(12U);
    msg.state = 242U;
    msg.plan_id.assign("FXUWAYLVDUZNGZYDIRPKPOMBMCQFDKLOGYVJXABOUGTPOAQYHCRNWZCXAPOVFBRGIYDTJWUURSGLHSMCXPBMVFPQZNQYVDDJHMWRBGWNADKIRFGFPWIUWYEOOTFTJTEYWAAGVDTYVCJDPNVHSXMTJQGCXWRFHAJBLEXZCAEBNIBUEENLSKHRJSSHQZJIQUTQGMLIVWOMHRZLSUSFFBISNLXMUCBZVAXZTMKEIXYRZKHOPJEESLDCHQKQI");
    msg.comm_level = 10U;

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
    msg.setTimeStamp(0.7156859195202895);
    msg.setSource(60496U);
    msg.setSourceEntity(158U);
    msg.setDestination(26668U);
    msg.setDestinationEntity(52U);
    msg.state = 56U;
    msg.plan_id.assign("NRZPZOKOQCNXOKRYONEABZSMWSWLYZMNIPXUEBOHMBXSVQTQXXTQTRVFBJERUOYQQNVIVZNACSWUXFUIRXPRLDTHBBFPWVLLPRTZAVOIGPDTAICICWPAFVMESAFXHRNDFFZJTGIOGJUCGSICFZDGLMOLQLIUGSBHEVHDDUJVYLHKBFAHCWEG");
    msg.comm_level = 22U;

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
    msg.setTimeStamp(0.3350909246341287);
    msg.setSource(53709U);
    msg.setSourceEntity(117U);
    msg.setDestination(42682U);
    msg.setDestinationEntity(234U);
    msg.type = 91U;
    msg.op = 98U;
    msg.request_id = 43668U;
    msg.plan_id.assign("GBBWKETNHJQERQTHBNXAFGMHNNCPXSEYDFRNDBZLTMHGPFJVDGIDNUKMVMYRFEWJOKCGMKZAOSWODGSQEOKYYQUCW");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.8882773296041975;
    tmp_msg_0.x = 0.8974933266007733;
    tmp_msg_0.y = 0.7259965894835178;
    tmp_msg_0.z = 0.5254614398404133;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VAMXVTOWWYBCHTHETGQWLZQYRAOYUXGUSKRBCBFXNQXMZSUDNIXGSIYXZDSFMCFCTPLBY");

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
    msg.setTimeStamp(0.6531906140412679);
    msg.setSource(22272U);
    msg.setSourceEntity(251U);
    msg.setDestination(5119U);
    msg.setDestinationEntity(41U);
    msg.type = 63U;
    msg.op = 3U;
    msg.request_id = 60076U;
    msg.plan_id.assign("MDKMOGEIZSHDRRIAGJAPMTDSICSSAYWDGQOHUROHZSTOLHMQUVOUEZUTVYZPGJKCWACNCNRKXEOQNWSWHNTUUEMCUVXYQLPJKURZKFVFGTLPMPHVRPYIEGLSAGJUJKHZMXPZLVRLRFIANPQDXCQWODVYTQZCFYXMBJEAYJNPYNTMBLXKCKYIODJRWCAAZIHEJ");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 37319U;
    tmp_msg_0.control_ent = 31U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 94U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.14272332897699624;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 112U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.6434335409601608;
    tmp_tmp_tmp_msg_0_0_1.z_units = 111U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.9467346430946048;
    tmp_tmp_msg_0_0.lon = 0.4514054080061196;
    tmp_tmp_msg_0_0.radius = 0.41558220911639776;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 180U;
    tmp_msg_0.proximity = 45U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZIYNDMQYNLEILSFZVXAFBJITLSVYZLVIVOBEPRVKNMYHYGLQCJBUTEJHWEYDTQFQWPVZYTMKISCZLQQGWMDJDMROJTRSVN");

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
    msg.setTimeStamp(0.15644920523410422);
    msg.setSource(22181U);
    msg.setSourceEntity(190U);
    msg.setDestination(56975U);
    msg.setDestinationEntity(64U);
    msg.type = 118U;
    msg.op = 158U;
    msg.request_id = 41927U;
    msg.plan_id.assign("YEFLPYLDNNTLBLYTUJVUJLWVHEPNBFREZIBGJIROKYZHQDPFNNUPQOUQMHNEDYQCQCKJKTEGGIMAADWURXXSWTOXAVBGHCVBICJELHCYXKRDNZWZIKNZFWXLJOHZTQDPQZGMMMBAIDSJHEETMRMXULTGBVXRPBJASTOVRVCUDXSYSODOQOSGUDTFNZWRWVSHWSJCGZMXKVNMCKSIHKMWSXTQFIICRWUYZEAGHPILAPUGBYKOOJFACVPAY");
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("LBVRJGTTUKCCVQLBYTPW");
    tmp_msg_0.op = 77U;
    tmp_msg_0.sched_time = 0.7353371162672546;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IFYUAPDWNLUORFOTWPIKZCZHSWWDFAHIRNNFIZQMEEIACUWRLGXRFEPRDSQIBONGIDIQRBJNMTLBYLAAVYPXXJQXGOPJHSHFSYXYFXLOZRYWIYQEICMVXUWACUCHLTPRHHOSUQLUMADGDBJRX");

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
    msg.setTimeStamp(0.42278780161754126);
    msg.setSource(7324U);
    msg.setSourceEntity(64U);
    msg.setDestination(61083U);
    msg.setDestinationEntity(1U);
    msg.plan_count = 47587U;
    msg.plan_size = 1062856069U;
    msg.change_time = 0.18640120524838266;
    msg.change_sid = 58375U;
    msg.change_sname.assign("DHWUSVCNPSVHGDKMBQUAQXPHKOMHZZDGFVPCTQLRPNTNXBNHCTVRFWSKMSJOXDXSURWHVJFKEXKUGAYFBBTTJCCDGYIOXKNLBCRORCSUGYUXCOKYYHFLWMRGWHYLENLEQZHJOCZXTWFEMLJZIUXICIPQJAMGUOOARAS");
    const char tmp_msg_0[] = {-28, 38, -13, -69, -19, -48, -52, -25, -46, 81, -53, -80, -44, -19, 32, 107, -84, 95, -21, -34, -26, 41, -13, -56, 101, 106, -63, 105, -109, -9, -18, 9, -120, -113, -73, -66, -35, 92, -41, 14, -10, -122, -100, 0, 38, -92, -62, 24, 27, 39, -83, -118, 68, 92, -67, -90, -123, 26, -90, -71, 58, 9, -29, -76, 51, -31, 61, 119, -84, -27, -102, -70, -33, 33, 93, 109, -36, 78, -64, 18, 64, -97, 14, 11, -44, 50, -28, -124, -128, 123, -84, -83, 56, -70, -101, 74, -88, -25, 76, 49, 109, 108, -77, -70, 18, 116, 85, -54, 23, -119, 94, -122, 60, 12, 21, -92, -26, 49, 82, 71, 38, -124, 30, -108, -105, 105, -83, -35, 58, 56, -102, 94, 37, 103, 12, 63, -73, -108, 84, 112, 47, -60, 32, 29, 56, -95, -92, -35, 32, 61, 52, 29, 93, -68, -42, -13, 125, 71, -122, -22, -25, -123, 43, 36, -85, 124, -1, -19, 97, 2, 80, 90, -54, 48, -49, -84, 31, -69, 53, 50, -118, -65, 73, 113, -69, -6, 50, -26, -116, 32, 66, -57, 59, 1, -45, 53, 121, 67, -8, -17, -59, -2, 2, -91, -127, 84, -12, 116, -83, -41, -50, 37, -42, -97, 73, 75, 121, -6, -5, 18, -21, -13, -112, 70, -3, 39, 9, 58, -105, -49, 88, -43, -120, -57, 126, -114, 58, -7, -121, 119, 94, -37, -9, 84, 40, -56, 28, 30, 18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FBASRZVMNTTSGKYOSKTWBJSCMNBIWFIAYFMVHOXDWUSQYZQXOOHNKCLIMOTJBAXHKZGZKCJWMQHNCLELHZTOPGNHIBLQYURFGOGAWQJEMDZJPVCLVXRGCYSILWBMHODXUQSUUEXKRFMDJZDEDYD");
    tmp_msg_1.plan_size = 27091U;
    tmp_msg_1.change_time = 0.6894276103350423;
    tmp_msg_1.change_sid = 36609U;
    tmp_msg_1.change_sname.assign("QWFRPRYZIPQSIFANEBSGFTCXSLRWKEYZBYMWWOWCKYVMVIDZQXMCADCNGPVFTGHEZLHJIGUOVMHOAORRPAVTHKUEXSWGNOXYLACUTQQEQHOICPNKLTDLEXBNUSDDTZDFBKRGDSZCJTAAHHUICSXERUUYOVZNKOLSJTLGGR");
    const char tmp_tmp_msg_1_0[] = {34, -7, -62, 90, -118, 33, 84, -117, -104, -100, -3, 103, -65, -96, 14, 49, -66, -119, -33, -3, 0, -125, 70, -2, 109, 48, -27, -107, 25, -70, -78, -15, -125, 56, -39, 31, 72, 92, 76, 17, 44, 81, -114, -43, 92, 54, -8, -93, -86, -95, -82, 98, -74, 63, -20, -42, 36, 52, -115, -39, -88, 111, -66, 62, -80, 38, -74, 16, 23, -62, 41, 92, -127, -5, 6, -109};
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
    msg.setTimeStamp(0.22425329761639579);
    msg.setSource(1025U);
    msg.setSourceEntity(247U);
    msg.setDestination(59500U);
    msg.setDestinationEntity(67U);
    msg.plan_count = 16406U;
    msg.plan_size = 4077047909U;
    msg.change_time = 0.22739265528755281;
    msg.change_sid = 23271U;
    msg.change_sname.assign("GHYYDYEBAAFLSQHLVZGGVPDTTKZJRVQXTRGUFNQXZLNWWWGWJNBIZAXGBYSBMQFJZKHTYJQINTORREVUBHYSHLNLXPCHWDMPCLOCOMTXNIBONOOCXRKDIWMEMZIOCLGAMXQHTAUPPKEUGQRLCPEYWENILAMJFZKXJM");
    const char tmp_msg_0[] = {-127, 65, 45, -106, 49, 118, 78, -14, -115, -11, 12, -72, -61, -8, -125, -15, -89, 94, 1, 88, 82, 26, 24, -27, 109, 93, -30, 91, 114, -86, -8, 107, -74, 33, -18, 22, -113, -18, -16, 120, 16, -32, 110, 27, -46, 120, -40, 34, 3, -34, 73, -68, 95, -60, -1, -101, -57, 95, -62, 117, 36, 96, 26, -89, 91, 75, -46, 32, 90, 25, 64, 38, 81, 5, -70, -65, 13, -74, 48, 111, -74, -4, -92, -29, -16, -66, -114, 79, -28, 47, -117};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZKJVEURCFOITGVFEIBTKMCKFYGATDGMPUJLECKMPSAKYASXEQKWVYZADNNLNTXAYJBANDJSVOYUJXJCJBIZEUMFAYRSLIOAOBAGSXXPRFCSTNLMRZZPPVIGOQWCBRSYTDJXZRRGCNMIQKSBF");
    tmp_msg_1.plan_size = 56274U;
    tmp_msg_1.change_time = 0.8204944491000394;
    tmp_msg_1.change_sid = 63962U;
    tmp_msg_1.change_sname.assign("REFZOXPCMUWADOOILKBBHUYAMUJKOIYGSNVTQLMPUVPARNWYRBGFHXD");
    const char tmp_tmp_msg_1_0[] = {102, -114, 52, 9, -71, -55, 108, 106, -32, -60, -2, 68, 103, -18, 15, 14, -14, -124, -87, -32, -14, 117, -50, -81, -112};
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
    msg.setTimeStamp(0.5269638223000337);
    msg.setSource(19993U);
    msg.setSourceEntity(189U);
    msg.setDestination(54944U);
    msg.setDestinationEntity(102U);
    msg.plan_count = 29368U;
    msg.plan_size = 3528181490U;
    msg.change_time = 0.991652191149101;
    msg.change_sid = 59922U;
    msg.change_sname.assign("ZTZDJGJBPCGFIJBKCAUPINSSQZBUJWKHGUOPRKMQRWXFQLNWZJCPEEKJAYMFYHMDDHEYCZZLUZPXOMUXTWUVGIAGMRFWHYRSHTBORQOGIYR");
    const char tmp_msg_0[] = {60, -25, 14, 117, -15, 67, -65, -99, -115, -22, -24, -54, 49, -90, -18, -44, -72, 124, -47, -104, 59, -86, 14, -119, -63, -4, -78, -32, 105, -12, -55, -114, -32, -35, -54, -103, 72, 119, 8, -102, -106, 85, -52, -71, 61, -51, 55, -85, 24, -95, -49, -35, 83, 113, -107, -96, 32, -3, 77, -58, -49, 95, -41, 79, 40, -80, -118, 27, -91, 2, 75, 68, 75, -86, 124};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PIXMRZFIZKABMJJPEXTMWYQDUVNLAVSKMFRFZZIEKESSTXRBSWOTCEZQONLAGUWMLXYAJEJYVHYOGUNSECBOBLFTVNHVJYOPMRFPEPVMHFBDRZXLIDFUKAAGLKJXTODMPHASXCQSYKTCBHUZDAQHJKUMOEWBIMGDKNPLWQHCCEIIVQQBQWDWGN");
    tmp_msg_1.plan_size = 25942U;
    tmp_msg_1.change_time = 0.1250093050640333;
    tmp_msg_1.change_sid = 28052U;
    tmp_msg_1.change_sname.assign("FIONSQXGCALFUNNAFUSMUZHGDEGQVPOXYGJNBSUBCRLRVJKMJTTQYVEJPCMNPFKCDCIDAFORSBAEEYOWKFNZGSQIVZGEUISUHRKLXWCAHMMMJWAWLGJEJLMXARBAJRIJPDHAGWOQSZXSZLQTKBYEXPORQWTTTQTPIKXZTVNARWKBUGMKHKMUHSZYHEEQHUHNYVFCDRVPVIBOYDOBLWYUPZYLHIDNVXL");
    const char tmp_tmp_msg_1_0[] = {108, -97, 2, -71, 16, 87, -19, -11, 2, 102, 47, 27, -80, 44, -13, 66, -41, 32, 62, -53, -88, -110, 27, 51, 48, -115, -51, -72, -57, -110, 45, 60, -44, -104, 72, -44, -91, 42, 124, -55, -23, 103, -76, -53, -125, -31, -20, -119, -108, 46, -118, 21, 59, -124, 2, 123, 72, 57, 32, 56, 25, -7, -106, 57, -72, -83, 2, -60, -46, -55, -41, 31, -100, 87, 17, -36, -59, 6, 82, 110, -5, -63, 63, 98, 1, -29, -105, -15, -35, -51, -48, -51, 84, -11, 60, 61, -41, -44, 46, 26, -71, 1, 48, -64, 46, 72, 108, -10, -52, -79, 85, 38, -114, -15, -19, -36, 37, 20, 111, -88, 111, 117, 90, -103, -6, -81, 113, -94, -65, 102, 95, 39, 80, 82, -123, 115, 35, -125, -35, 40, -121, 101, 105, 14, -112, 107, -43, 118, -68, -11, -31, 28, -20, 63, -22, -11, 63, -101, 114, -112, -33, 0, -85, -107, -62, -94, -87, -118, 43, -111, -41, -18, 24, 103, 103, -54, 11, -52, 19, -38, 22, -33, -90, -84, 12, -102, 117, -40, 55, 7, 7, -28, 78, -5, 87, 22, 97, -81, -10, 114, -80, 12, 120, 59, -63, -34, -69, 33, -87, 99, 96, 82, 71, 73, 48, -7, -73, -21, -37, 81, 82, -47, -77, -74, 64};
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
    msg.setTimeStamp(0.7644359627994979);
    msg.setSource(11256U);
    msg.setSourceEntity(13U);
    msg.setDestination(8933U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("MNIMSGLMFUNCHHKFPZJDYYUWXSDIOJHXUSNCSKJXCZGLEJPKIZHJGSUZDARTKBNFOUKNEINEYRXGGDWTJVITWPGTMXOHJXKJFWYCETNZHZVZPVZBERIQAEVAEHQBYDSPNUACSOCOPTRUJKULHHQIODVMXFQIQALVABMUYPSKQVCOLQLRYENBGBQWKZDPYDJRQVMFTWWLDTKXWBQRLRYAGRAABFITAW");
    msg.plan_size = 21823U;
    msg.change_time = 0.6787570846747929;
    msg.change_sid = 784U;
    msg.change_sname.assign("GYHCYSZYTXWLADQDJDJAXGKZYIITSKMPCRFWLBSEXQXBIIGPXRQZNGUTRKMFBEFOZYQQEKDVRPUJCSGQRYUPYEABNDSHATIONS");
    const char tmp_msg_0[] = {-93, -15, -42, -17, 2, -3, -120, 21, 70, -118, 6, 96, -109, -40, -92, -27, -27, 124, 9, 113, -52, -91, 22, 94, -35, 5, -108, -24, 65, 26, -25, -2, 3, 27, -73, 67, 58, 99, -92, 2, -5, 31, 5, 8, 58, 51, 25, -126, -81, -20, 28, -74, -100, -93, 96, 125, 36, 81, 100, -7, -93, 100};
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
    msg.setTimeStamp(0.7894176926253899);
    msg.setSource(52863U);
    msg.setSourceEntity(249U);
    msg.setDestination(54003U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("XQXRRHCISWHJJNPJGGMFNPMTKHSMYVPCENUMETKPSTLWBXWBGDARHKODUZEIWZCOKTTQDVWQBZZLELJKWUIOOIRRPCCJBZNBRXIEMUNLAVYCUSYJLBOHBIXMEPZAZLGTNDVVKMOVIFHNFFQRLSUTOYOEGJEGATIRAINSKB");
    msg.plan_size = 18052U;
    msg.change_time = 0.6868052444804933;
    msg.change_sid = 39084U;
    msg.change_sname.assign("TLSGBLZRWDTXOQFFCHBP");
    const char tmp_msg_0[] = {102, 86, 28, 31, 112, 36, 120, -33, 92, 65, -40, 93, 1, 90, -112, 87, 124, -117, 84, -3, -1, -83, -63, 26, -105, 36, 64, -14, 61, -29, -52, -35, 41, -41, -54, -78, -101, 3, -122, -11, 87, 88, 45, 107, 5, -25, -28, -87, 118, -65, -123, -103, 111, -98, 73, -111, 120, -64, 36, -111, 25, 26, 110, -48, -120, -5, -72, 41, 24, 26, 65, 32, 86, -36, 73, 110, 125, -119, 61, 66, 5, -102, 56, -110, -28, -62, 109, 115, -25, 12, 12, -41, -2, 19, 57, -102, -73, -120, 18, -31, -29, 44, -71, -108, 93, -107, 38, 13, 103, 38, 118, -123, -112, 115, 56, 76, 12, 26, -46, 64, -20, -14, -77, 99, 116, -111, -18, 105, 71, 82, -95, 112, -110, 110, 103, 7, 12, 78, 81, -25};
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
    msg.setTimeStamp(0.5515455143000139);
    msg.setSource(5323U);
    msg.setSourceEntity(4U);
    msg.setDestination(7268U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("IROYFERSSTFLRGLNTXHPTIYUXZHKXPPSKBENVNKRWCGMQCTBAEGTQSLAOPDSHWCAZVVQXCTLGDUAJJLOVBGXOPLWDQHDSFXCIZQSJQCEGHRETYBWXZFKWFUIMLITWJKGWEZABAWJVIAKUNBCJBCTQBMKEZQPJNELOUPWAFHMDBRNYUHCNNFMSZUJOMHUDFLJWTRMVSJOCHQIXYZOPUVX");
    msg.plan_size = 33876U;
    msg.change_time = 0.265983199209998;
    msg.change_sid = 13461U;
    msg.change_sname.assign("BBKFVDKICXIKRSZSTUPJEFRWBJUJNMQBXLYFRMGYELEZICCRFJWGZNANVADDQSDCBHBNUMZQHLCXSQT");
    const char tmp_msg_0[] = {-4, -63, 19, 22, 40, 72, 62, -37, -101, 118, 121, -91, -1, -62, -92, -58, -18, -48, -12, 66, 36, -65, -99, 92, -23, 26, 94, 91, -6, -111, 89, -123, -57, -63, -45, -60, 126, 63, -53, 102, 114, -127, -57, -118, -84, 68, 22, -119, 107, -123, -105, -44, -11, -116};
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
    msg.setTimeStamp(0.0832040371344196);
    msg.setSource(6141U);
    msg.setSourceEntity(146U);
    msg.setDestination(34641U);
    msg.setDestinationEntity(186U);
    msg.type = 72U;
    msg.op = 148U;
    msg.request_id = 34318U;
    msg.plan_id.assign("QIZHGDEZHZFSTQVHXQSVFFOLXUFPZHXRFKHOBYZRPNNSGCEXJCFCIAFSAVHKCPQLBMOPNSGKKWETEXQAEDBNBBGLPPJAYIAZCTUMMZDSFXLIDYCVTLNXJ");
    msg.flags = 37941U;
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VUVJNGVGLQBTSGNJSPDTJAABULDEXVYEJMCMEIACQK");

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
    msg.setTimeStamp(0.5026908634963658);
    msg.setSource(40561U);
    msg.setSourceEntity(161U);
    msg.setDestination(1827U);
    msg.setDestinationEntity(44U);
    msg.type = 70U;
    msg.op = 148U;
    msg.request_id = 50751U;
    msg.plan_id.assign("RJBLWACULYCGDCZZCTROFOXUDQAVLMXITWDPTNYLTFVYJGCFSVBEOCUPKDUYIUVDDXHE");
    msg.flags = 25659U;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WZBDNJPSWIEZAIMXYTJCRFYWJNXWHBLYULTPZUSKDNPKGCZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GZZPUROEAKLBWGGKIPIYXCBDQHLMARZGJIKGJCQHDUCOXTBMRKVFTPNSVFXCARDSMEWUBVESIDMCUADYFFVMILBYULOUNJKKFTTEUZKXPSJARMPQQMTYXAWWFQNZYZDEFKHKCNVZLGNCJIHNROXJQBNLHBHJPWYQAOUZAICLWLHOSWDNCBOAVP");

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
    msg.setTimeStamp(0.08652340300684425);
    msg.setSource(32241U);
    msg.setSourceEntity(151U);
    msg.setDestination(12212U);
    msg.setDestinationEntity(12U);
    msg.type = 238U;
    msg.op = 162U;
    msg.request_id = 65529U;
    msg.plan_id.assign("GBBOFSNFZXUJSZXVYPUWXEZNPJGXSQTLZLBKAAQTAFQHCIPAMESMHEKDYQTOUFMVPCXRGABYRCSKXTIWUPPCIUQDNIDRMVELVIZVNGWADRQBFUVXGWNERPSHXRZCNFYMMETOXAZJBFKDJMNADOJTLTGZMUKOKOCNOITWTJNJHHHHSMCRBYLAPXBQBKVRGYFVPZUHLGJJSKLEWTIFDGEDISWJOSHKCUDUYWOHL");
    msg.flags = 21771U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::AcousticSystemsQuery tmp_tmp_msg_0_0;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AFOUISKCUEGZGRJCILGG");

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
    msg.setTimeStamp(0.5868009283946916);
    msg.setSource(65073U);
    msg.setSourceEntity(184U);
    msg.setDestination(57984U);
    msg.setDestinationEntity(21U);
    msg.state = 253U;
    msg.plan_id.assign("OUEEPDXNOBXPSUSBJLUZYYKAVYFKOLTNTQBSWSGTHCQNSPGITZYQOAOGYEIWRAQKXBLTDJAOFGKAMUKWTUOIGMVBTCNEPUHVFBMLWLHUDOKRZAMERJXAZDEILVRXFZONGMISNEQLYFRWQLHUGLVVIEIHOSWRTHYNFFJCDCCIGHXPVTATFKICJISWPVVAZHRYDJAMWDUSM");
    msg.plan_eta = 802420162;
    msg.plan_progress = 0.747683891125744;
    msg.man_id.assign("UBXRYLAOOLLCKFAEPKKGXPRSYMBTVEDHFCMPBUIQUPQSJPWJMGVPPQSSIZJHBQDFGLZBVFSWRJMHXDBLRQFXKZLBCUATTFMOJNENAIVVDJJFLHNDOCSACMAOLRSRWPYHEXMUANIEYVZJUXFXWUFKGTBKXERWSMUEIONDCWGTGQLNHFOBILUZXHHCQQJPQTMSKZTOGVHURYTVMYVVZIOGEEAINW");
    msg.man_type = 55743U;
    msg.man_eta = -1086876025;
    msg.last_outcome = 28U;

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
    msg.setTimeStamp(0.441055377038579);
    msg.setSource(54637U);
    msg.setSourceEntity(147U);
    msg.setDestination(5250U);
    msg.setDestinationEntity(172U);
    msg.state = 35U;
    msg.plan_id.assign("AOWFXBBACBYKOSHGVRZSIYPEVVZLBKRCWCFQHIZWETSVHXTSQNMSUOZAMVDYJFKPCEYXLECNDUSWW");
    msg.plan_eta = -2053800518;
    msg.plan_progress = 0.721227622114265;
    msg.man_id.assign("MXCDGFPWKSIQHBJZJTYAJABRCLZDBBJAGQHXLQYREDJZRDIDELIULCNTQRFFICTMSSGXCVMCVXUKKUMRAYQFUZMQPTXFRMNSUGQWHACQAHRCBDHAZCURZPLBWKBJOIVMYDZBLKPLA");
    msg.man_type = 58180U;
    msg.man_eta = -1361234147;
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
    msg.setTimeStamp(0.09929917180903469);
    msg.setSource(17285U);
    msg.setSourceEntity(231U);
    msg.setDestination(30792U);
    msg.setDestinationEntity(219U);
    msg.state = 251U;
    msg.plan_id.assign("QTAETTYPDOEZFIHQUNL");
    msg.plan_eta = -344092866;
    msg.plan_progress = 0.5653261775958924;
    msg.man_id.assign("QMWPJZMFBEMRLRFREATMLHWQSAI");
    msg.man_type = 46164U;
    msg.man_eta = 743122505;
    msg.last_outcome = 191U;

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
    msg.setTimeStamp(0.7024930540455873);
    msg.setSource(24864U);
    msg.setSourceEntity(191U);
    msg.setDestination(38251U);
    msg.setDestinationEntity(166U);
    msg.name.assign("KDVWHWXWOCJRMZFKJLBXGRZYDTDYESYUMOES");
    msg.value.assign("TPSYAKYLZHZUHDTECIXFQBGSXNMECPRDZZYWMBNHZUBNUPXHKXBPNCXSZAPKIPTIGVJVFNJQBQMSCWUELHXOGQIWJDDEORLOPJKMTLCIONLJOARHVDEQGKHABMLLVDWAURAZTVOFTLWFUBWEXFI");
    msg.type = 23U;
    msg.access = 176U;

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
    msg.setTimeStamp(0.8764830303258179);
    msg.setSource(1886U);
    msg.setSourceEntity(139U);
    msg.setDestination(36717U);
    msg.setDestinationEntity(158U);
    msg.name.assign("ZZERMVLLSXNQIFKCPVGGZRJNHEDLJEBAMORMESIGHNWATOJAUMILANWOUMZYSOQPQCZRWHRHMCRKWXHYPKDVLPEUFOQDLYXNCLGANDVGDGBTQEUPRHIFJXZOKBOXYQPPSIOELAECJFWCUVFSGYYXWTOBBQDJYKVYXUIBFJYADGHMZTHUJTFZMVERFGBWKDXKQLZSVVPQBDNRWTTNAYIUUMLACMUTVPFIXXICNIZRNTQ");
    msg.value.assign("RFGDSGGWCFZTMRYBCUFWPHIWCAIDJBGLCJHCTMCSEADKJKSNQBPNPUIRPMTJFNIJABGQIQKEBULFYPDAKOPRNMTWEYJJFXSHUSBRVUZLEIWIWWSVKJKOOWPOBZZCVNZHGVTU");
    msg.type = 109U;
    msg.access = 186U;

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
    msg.setTimeStamp(0.7785992117177241);
    msg.setSource(62180U);
    msg.setSourceEntity(27U);
    msg.setDestination(61426U);
    msg.setDestinationEntity(168U);
    msg.name.assign("NYKKEYCLOWYCBDVRVJKZDIGIXMIDEOAGJQXCPTCREIAESFURDODMJFYTNXMTJSTZFPHTCFLLUGCNUPBVTOYCBKNDRXLGOJRILOJOLDLUEHEOSLNGREFQMQFSGVVZXRAHGMYWXAKNIJMMZNXABRBOAUPAPVROAHQPZQWZVFFZHKNTWBMMZLIZTJWGWBAZPQYKXKLSHPVSAUYYBUHCHWDXTKNGSDH");
    msg.value.assign("FYIQJZXDYNURKTXQOUIMTSGPGTMHGQOCOZTYOCUKOPEWAFEZDBNHFOLQSKCWXTYZXBKVQXBPURISARVMXIQFONIVCNEXRHZYQBUWSMYBMJLALRHSKZIKAMZDGPTBGHHBPSV");
    msg.type = 57U;
    msg.access = 43U;

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
    msg.setTimeStamp(0.2524701457811357);
    msg.setSource(3805U);
    msg.setSourceEntity(149U);
    msg.setDestination(4862U);
    msg.setDestinationEntity(188U);
    msg.cmd = 8U;
    msg.op = 96U;
    msg.plan_id.assign("BLUPZASCPPKCCINCNJDXQKTRHICFMDUPSZUIQRFTDJDEUWPFYZSDYBYPYZCOQHDLUVF");
    msg.params.assign("HYJNLITOAVLWYPQSUXRLAXBLPDSVSMKKYOERNGGAJHNETPAMLIZNCDQWAWUMZXDOPDFNAAXU");

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
    msg.setTimeStamp(0.06792120139995927);
    msg.setSource(52890U);
    msg.setSourceEntity(132U);
    msg.setDestination(36075U);
    msg.setDestinationEntity(184U);
    msg.cmd = 114U;
    msg.op = 68U;
    msg.plan_id.assign("PVIHQZOTCKUDBZEMNFNAAGERHVJYDNQGFBLTQHHBSASHZJKHOPSFESQHXABMBLRSDTMLADIYUIWQEKRMPFZJQLNRLUUQUWKUOWVRMXPJAHVKWEPHRPNVGGVWDIONDQRKDTDYRBFCXTNXMVXGASIXTXYMOMAWPRLCVPLBWGFWZWOYJIUHVJCSYBYSFETLMXQQBAKIT");
    msg.params.assign("OCRYYWWBBIUDOPOHNHDEYOBIKTRTJMVTTWGSCLHVNOFAVMBOLEHFOXIREBLDIFPYHSKFUGYCESVCMMTNZRZBQSGXJXUZFASJNVAMNANLJKVVLQMISYFPWWIBYQSYXORUQHPWYPKMNJCCQGPOVZRQTBDFKZNMVXGKSDRJTFCUALZQGAGWBEEAPRRXUQGLDJMNKDPUAWLTCERBFOAJSGQHNJICXVEZD");

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
    msg.setTimeStamp(0.19882509173420515);
    msg.setSource(24068U);
    msg.setSourceEntity(212U);
    msg.setDestination(880U);
    msg.setDestinationEntity(2U);
    msg.cmd = 78U;
    msg.op = 133U;
    msg.plan_id.assign("WEJFCWBXDHLBPXHOKIPHDDSLENAUNUXNDFYRQSWKIKRFDWBUYQNERAULGRSKMOVFZCAYYTPQTTYIMSYVQJGPMLBIFDAVUIWHGOFCVPTCHWEBGZMYRRMEWBLZKROOWKQSQRPEQXEGNYDGGGLXADVZACZWJVUM");
    msg.params.assign("RAAWZUXEUYVSKWKPDSLQYBDFDWOBASZTSIGDIUQPAPGKVCIRBBLUCGGZNUIOBMSXCQCJ");

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.756728130899772);
    msg.setSource(39427U);
    msg.setSourceEntity(130U);
    msg.setDestination(39569U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.18892861055651744;
    msg.lon = 0.7106081904780258;
    msg.depth = 0.34943735490751093;
    msg.roll = 0.825064858823809;
    msg.pitch = 0.7613656525180642;
    msg.yaw = 0.44738701012700877;
    msg.rcp_time = 0.8512045063566926;
    msg.sid.assign("SFTENXPCCGUCKAJIROSVTUUFBIKETBPFHDLJUVSNQZNDYVLR");
    msg.s_type = 32U;

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
    msg.setTimeStamp(0.3758871414435151);
    msg.setSource(31901U);
    msg.setSourceEntity(195U);
    msg.setDestination(43874U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.622401705835189;
    msg.lon = 0.007345801555377673;
    msg.depth = 0.6517354333631503;
    msg.roll = 0.9409827431870584;
    msg.pitch = 0.35573034132797876;
    msg.yaw = 0.7931998560629354;
    msg.rcp_time = 0.14981978416395614;
    msg.sid.assign("MSOJPRRMWCKVCAYYVOHGOROBSFKQLYZGJMUVMHBQKLBDXHDTWSTYYLSEBNMCHAJYWHONPELDWELTKEBEPPURULNCEFNQJTZGPWGRPYPFIAIUOISFCNGURVTGDHDESXAIYVUTZAFNBOIXVNCEVEZNPJRJIHQMXQZXNWWHCDKJIXQUUQDDGQBCQBTLFABLMDASZSZUJSPJRVTCWVAJSATOPIXMFGOUYZNKEHXXHDKBXWGFYWLMLKRIFZIZQ");
    msg.s_type = 62U;

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
    msg.setTimeStamp(0.1860647647731618);
    msg.setSource(14407U);
    msg.setSourceEntity(180U);
    msg.setDestination(32187U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.24120156926781733;
    msg.lon = 0.01367732771015695;
    msg.depth = 0.7312862726108399;
    msg.roll = 0.6100764329788874;
    msg.pitch = 0.469517131208501;
    msg.yaw = 0.4476885677899215;
    msg.rcp_time = 0.9625282288320997;
    msg.sid.assign("CNOVGDAXBGLQIOSGUCFVMEHWLKYVBLPQMUWJBARDWKXFYSMZDYUEXOKZJXXBUHRIQDXXMYYPKKARAIVSWJVZUEBPMOCSNCESPCQFPNKJXROQIWPLEZSFVNHYERCYQMRTLDDHWGTGPFXCKNOTSFRHPAHHBYIMVKTPYRIIALTTMBJIJBAARIVUZDQZGLEWPSWZEXGZJV");
    msg.s_type = 199U;

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
    msg.setTimeStamp(0.24367925214258368);
    msg.setSource(14870U);
    msg.setSourceEntity(51U);
    msg.setDestination(28176U);
    msg.setDestinationEntity(152U);
    msg.id.assign("ROZKFHLQNDWXDOEOBIRUAJMMRFRUYXWXYAPLZLCRCAGJPVUSQGEPSLXDEYZECGGZRASKOQIWGYQJZCTAFSWIANTZVUUKBSODPCXVMMPXXLAKNBPKYLGIOUEJPHSTBZOJSNEUHDEUTSNXYVQEFRHQN");
    msg.sensor_class.assign("BBVFISUJBSRYENUUQILBQFQCHCXYAKHIQEWGFRVLGBNPLTZZAWNKKCXEMZPZOVSCENLIAUYQGIEWQELGOPNBFEKVMVVUZJNQDAJZJOMKIWMHIWULOTDHFYZRDVPOLYMWVPWBNXMZXSSGJOTDJYZERRYPWVKXAXKBBTAHHOUDGECEQTPHGAVHQZGPACXDUSCPGSQFWITLJYDJRXTHMNSGHOTDFLCDRYOUTRFXMJPYKJFNCSDRBN");
    msg.lat = 0.5741204140388141;
    msg.lon = 0.11051433120985643;
    msg.alt = 0.2719801651584024;
    msg.heading = 0.8724532714464095;
    msg.data.assign("QPZZDRTZFGCRCCWQXMHGBAINCCTJFEFRASGTFTLYZZEBVYXYLVQPVPRISZYTKRFSGLBOLRAHPRXQIIOR");

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
    msg.setTimeStamp(0.9537159136683763);
    msg.setSource(29900U);
    msg.setSourceEntity(127U);
    msg.setDestination(43209U);
    msg.setDestinationEntity(131U);
    msg.id.assign("NWNXQYCZJMFPFFRTDGKCSXEPXBUCHBXGCVIWEEUWYYNIROWMESWTQCANUHBRMIJBOXSLCUHRTILCRCLTPGMAXHLEYWVKDIWRGMVIGOHPFAEOVAZGZDSLEFYLLDKYEMJVZFKQIGZSQHPARFWABPVGMVUNQMOOVOTDSZISSQXYKQDPNCUYNFDDCWQBVUUGQJUFKPXAGPHKTRLRB");
    msg.sensor_class.assign("MHMZLGNHHRTGYBZDPQQSCWOILUTYONMHIDAIFGBRBVXXDNXFJDDAKVKYPGSZCSTOXKGIWCSKTXOLXNJKBEVYQPUQSFUOEMJHIRHXEHUQASPJTEPLPYYRFJKJUQAVEXKOFGBEWXFGEVBLASNXAFCCMBQQZUPVEPYZSQHEMDLYWFBFIVJMRATUOONWGJC");
    msg.lat = 0.5757010663331739;
    msg.lon = 0.061952572312963805;
    msg.alt = 0.6621695637938856;
    msg.heading = 0.011181516374980327;
    msg.data.assign("ZHUSFOUQITQCYTLYXHWOGSTYPOBQEWVSODADDCTCRHWRFTDXVEJSLMRNXIEOFLERFWVALRRJJMMHBZULMGHBUGKNKZKNDXPPKMUCRSRCEBYECWKXYOGVPJZWYYQKMOCQBQZANIGNXMJJGHBNHQUPPNVIZLHBDJHJQAEMTCOAGPTMDGBCPIXAIBXXWFTFZABKNDURLDGISFXFHZPKNW");

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
    msg.setTimeStamp(0.24050292760002223);
    msg.setSource(62095U);
    msg.setSourceEntity(229U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(207U);
    msg.id.assign("NPDJHZZHTUNXTNVVSEOKBHQONUIMGCGJLSIDPGWCSALDXBMTIPZZKGHDZJAMPBKANFLEUNSNEUSKFXCWHWGQCCRYFWVFJYAXMDDCPXPLUUVRZKPCATHIQWAOQRBOGLVTUCHX");
    msg.sensor_class.assign("UHFGTIZUOSTLHHIGVJPWWCEOJCVZFVNPQRAUXOBTZRHVYBKKJRFNYNDGYIQAHQCUYKMVYZEPXIFIWKATGKMWSWECUEQSBSACHDJXJEOZLIRUQVOWFAVEQBQCZKGPIMBXLKPMTJAZZIDAXQJFCWMPEMOCLEMKDRXV");
    msg.lat = 0.8258646983151823;
    msg.lon = 0.1573685145879694;
    msg.alt = 0.1504774254473118;
    msg.heading = 0.13124266414889818;
    msg.data.assign("UADTTOALYWWYAKVJEGWLSTYCRPDWHIDURSLXZFBJMNVTFVCEHRNUDJBTKSBEKOPUZNLWBONPOHQROXYYBBEIFBFRMJMBIJJUCVJRTUBVAMGEIZSNZIBHPIPMSEAACJDFJPOAIXKWGCXPTOFDGYP");

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
    msg.setTimeStamp(0.8473810013210807);
    msg.setSource(15206U);
    msg.setSourceEntity(202U);
    msg.setDestination(55696U);
    msg.setDestinationEntity(88U);
    msg.id.assign("WXHCMDYDMXVDTHJMZOTQWFOTMVGCGNEXFZCZFAVJITYQCWROPLMFKHSAJWYGLWPLUYZJEZBXJZRUBUYAASOYKVLUAOHPRUOXKUBQNBDCWRGSKVUGFSLCJBPIDDRRESIYIGUBQIZQETLHJZLPKJXUHFDQNLNSAISCPHIOSOEBVCTYQBVJKBVMOMHQPGEMNMERBGVFVNRDQDNTCWPPAKTRWXGINXFTAFXKPASEKZQYWTIDENINLJEHG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HIWVGWQEMFJRTETBNYQIKFKTG");
    tmp_msg_0.feature_type = 24U;
    tmp_msg_0.rgb_red = 53U;
    tmp_msg_0.rgb_green = 26U;
    tmp_msg_0.rgb_blue = 212U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.27384178198848896;
    tmp_tmp_msg_0_0.lon = 0.5197209013139978;
    tmp_tmp_msg_0_0.alt = 0.34836062841590876;
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
    msg.setTimeStamp(0.07248228008777102);
    msg.setSource(19110U);
    msg.setSourceEntity(164U);
    msg.setDestination(8862U);
    msg.setDestinationEntity(83U);
    msg.id.assign("IZWRMITUFRULQANONPWQOEAQNWFJALLLLZJEKI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WCXFVVUUGTQDUJKJGGOKWCPTAQFZWWGIOLNRS");
    tmp_msg_0.feature_type = 192U;
    tmp_msg_0.rgb_red = 200U;
    tmp_msg_0.rgb_green = 191U;
    tmp_msg_0.rgb_blue = 54U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7918509776368022;
    tmp_tmp_msg_0_0.lon = 0.580595250713701;
    tmp_tmp_msg_0_0.alt = 0.9997108288626042;
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
    msg.setTimeStamp(0.6646459648564812);
    msg.setSource(14184U);
    msg.setSourceEntity(122U);
    msg.setDestination(3265U);
    msg.setDestinationEntity(21U);
    msg.id.assign("CECKFNISJFVDZLWOALWJSTVGQAZANVTBERPKSCKIUPSO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DDMFIGXUOSSUBQJWTFMPXHZPFTGBCNEHIGKVGVHZESBYPTEHELZJVAXLQLCYENNMQIOPHOELTORNNFUQFCKCIUHKGOOQDRMREFVECYPBXWAIBJFZKKDZKXTZMRQPBTVYRRAAPUWJDTXCHKMSKGLKGJDZVCQLUIJEJSFJWOBPGWSBDDLGONDWZLCBIY");
    tmp_msg_0.feature_type = 149U;
    tmp_msg_0.rgb_red = 66U;
    tmp_msg_0.rgb_green = 197U;
    tmp_msg_0.rgb_blue = 134U;
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
    msg.setTimeStamp(0.584939362160363);
    msg.setSource(26420U);
    msg.setSourceEntity(251U);
    msg.setDestination(18529U);
    msg.setDestinationEntity(77U);
    msg.id.assign("CQELREMJVTKNWPDQPFVTRTOJYCEYUAGVVFVFOZXMSUOILKEXEZRTMROPVFLXNQYKBWHCPVPKZEHLUSHLNUAGHFVCAEFQUHDTSJFDMPWGAFXCGWBDMIDQQJSPUBTRLJMGDWWOLJBXZNWIIRZ");
    msg.feature_type = 248U;
    msg.rgb_red = 168U;
    msg.rgb_green = 46U;
    msg.rgb_blue = 184U;

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
    msg.setTimeStamp(0.133607067235759);
    msg.setSource(55616U);
    msg.setSourceEntity(109U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(72U);
    msg.id.assign("OSDEODSRPVKIJEYLPPHNMFCWUDVQWLHCWVCSZUXKQUTAZDMQIZRSYASRYDZMSAFKLFQERPRJBPLUNOJKVJXJRTNMOUBDNCKBRBFLXZZIXUETQOJQXLFV");
    msg.feature_type = 133U;
    msg.rgb_red = 136U;
    msg.rgb_green = 10U;
    msg.rgb_blue = 80U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9412593842323298;
    tmp_msg_0.lon = 0.1772067265649222;
    tmp_msg_0.alt = 0.5674914325522579;
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
    msg.setTimeStamp(0.4510893382566592);
    msg.setSource(55979U);
    msg.setSourceEntity(201U);
    msg.setDestination(64012U);
    msg.setDestinationEntity(227U);
    msg.id.assign("MNVBCURBTXUTZFFXLAHVIMYPKZPWMGSJONRJINZQXJCBPGLPOGGDLQKHCTNZNNSETQCVJHXYRVEDQZGGTWZKYJLTFMSLOZIAWOHIJUMGBCKCKHOHFLSYAKVQAOUVYIOJPUADDXZWMWCCTBRMTARNFMBRRYHSSHQUUWPIBCYDAEQQMBANSDYSUWXIFLHJOEYKPYUJESAEIFPWCXTJVRLBDTEU");
    msg.feature_type = 200U;
    msg.rgb_red = 53U;
    msg.rgb_green = 122U;
    msg.rgb_blue = 190U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4611750658679895;
    tmp_msg_0.lon = 0.028388223250186306;
    tmp_msg_0.alt = 0.059489950122988966;
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
    msg.setTimeStamp(0.6559071017282637);
    msg.setSource(5380U);
    msg.setSourceEntity(160U);
    msg.setDestination(27247U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.45945258710562265;
    msg.lon = 0.9292537438211403;
    msg.alt = 0.7095357252285839;

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
    msg.setTimeStamp(0.337300862664242);
    msg.setSource(5686U);
    msg.setSourceEntity(223U);
    msg.setDestination(4252U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.37983508742270256;
    msg.lon = 0.4421895177959242;
    msg.alt = 0.26497998014851887;

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
    msg.setTimeStamp(0.9062696668247352);
    msg.setSource(29452U);
    msg.setSourceEntity(221U);
    msg.setDestination(17398U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.024337536318378317;
    msg.lon = 0.6332333530722735;
    msg.alt = 0.35391700036048135;

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
    msg.setTimeStamp(0.8690573500546711);
    msg.setSource(62211U);
    msg.setSourceEntity(94U);
    msg.setDestination(50062U);
    msg.setDestinationEntity(139U);
    msg.type = 28U;
    msg.id.assign("TJUBVCLQUAOSCUBGNGXSSWUYQHUNT");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 183U;
    tmp_msg_0.step_number = 9U;
    tmp_msg_0.step.assign("QYUWBKPGTEJMUSZSMIXFUZYAIDECFSTJCHFMXKQHPOCICRMJBBDEWMSKYKPCLHSFDFUICFPFUGNVYALZKNLAWPUKFYOXIXLKGUYYZXEANXORBTLBITUHRLHAMVIOPBQWTRRGVMPBLEVGAEBWEFJZPJDHVWOZWXVSZCCRTXECXFVBTJGETKRSONKPQSNBHVZVJWGGS");
    tmp_msg_0.flags = 146U;
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
    msg.setTimeStamp(0.4457760878709234);
    msg.setSource(53423U);
    msg.setSourceEntity(131U);
    msg.setDestination(28933U);
    msg.setDestinationEntity(77U);
    msg.type = 80U;
    msg.id.assign("QYXROOOTGIDPGFMAIABDTJUYFPQECQZUMMLEKQHMYMZCQRCBWNJUHRWSVWAXZMJXICHAUNKGPKRYLRTROBIKLTEAWRZV");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.22638957654053382;
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
    msg.setTimeStamp(0.4494272226013467);
    msg.setSource(49572U);
    msg.setSourceEntity(84U);
    msg.setDestination(5762U);
    msg.setDestinationEntity(247U);
    msg.type = 102U;
    msg.id.assign("GPSLEUBPXSRVCKCAHIEC");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.1264249149675214;
    tmp_msg_0.y = 0.8192333846121884;
    tmp_msg_0.z = 0.6323382434750435;
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
    msg.setTimeStamp(0.6384545472257446);
    msg.setSource(47680U);
    msg.setSourceEntity(185U);
    msg.setDestination(15244U);
    msg.setDestinationEntity(91U);
    msg.localname.assign("IVGNDRKDZOIAFVUTHZILGLTTDDCLWRZGTTCMCUJOETKEIUCKYFJSXYKZDPYPHLIIJEWTZOWYXYUELNGUAVPFEQFWGKPGRGYQKPSYSIMMAJFGMWEPUXROHCD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HZGJNODOONXXNWKBLYQRPKH");
    tmp_msg_0.sys_type = 237U;
    tmp_msg_0.owner = 60570U;
    tmp_msg_0.lat = 0.5318069210370171;
    tmp_msg_0.lon = 0.6787317448803981;
    tmp_msg_0.height = 0.7061528908874006;
    tmp_msg_0.services.assign("DYZLGZCKZSYQAFFCXPJGRIAIDEZZEGBI");
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
    msg.setTimeStamp(0.1608982819434831);
    msg.setSource(58486U);
    msg.setSourceEntity(231U);
    msg.setDestination(6251U);
    msg.setDestinationEntity(172U);
    msg.localname.assign("NJRNGGPLXVIWMTCSNENNCKWWPFFCABZULKKHGLWUKDUDDSLOCKAMXQPCINXXQLLWJTVTRKZKKAYOOZVEFSZCOBFBHGZECXPQUSQRPXSJGBKAOLGAKVWDBGRABVSCASHLBLJOAFJDBXEIVUWQYVHGUDFUIMJGMTYHEYVZRIMDPQZTISMEPRRJMWBPXZRFYTJYMNFHS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FQLDENDUWSAFQABIMTIOMSTEYKVEXIQSDIRXXKUYJQOVVGYRFEFOFPZKZQCCAEHZZHDRJXTWNNXDYTSMJKYQMOEBKEPTOLYDCRGNBRAJVPMNQTVBHLXORMZCMHWVHQFRWZWLBHJZUNNMA");
    tmp_msg_0.sys_type = 226U;
    tmp_msg_0.owner = 35254U;
    tmp_msg_0.lat = 0.03299021367963528;
    tmp_msg_0.lon = 0.8722262281954415;
    tmp_msg_0.height = 0.9392183638067205;
    tmp_msg_0.services.assign("IATZABINSPUMTVWFJYLDWULNKWTLTRVEWONZJPTKYVWWMXJMJVKBPKECAGGNGSHKMWZIRDVPNXQGCM");
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
    msg.setTimeStamp(0.9295547073179926);
    msg.setSource(31746U);
    msg.setSourceEntity(1U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(72U);
    msg.localname.assign("AWXRSQLEUVFZYPTMJMBFMPZPSZGHECAMZQTHOSWRETSPJICVYQAMFOTEYKHSUMYVFFGKMIWCTUDJFJVQAXYXQGNKWXBKOZAHNCTGZDYINLWJICBPWLLIWPEGNBZOARSBYZQXDJPJZIBDOHIMZLQHXLQDHDLSORJNLOTBULESVTKVAGRGUBCIRDDXKMFSYKJQGPYKAUOTCKVFEDHNQUUNNCROCBNXPVWGMPFXRIDOHXU");

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
    msg.setTimeStamp(0.19463160410312785);
    msg.setSource(12897U);
    msg.setSourceEntity(116U);
    msg.setDestination(23823U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("KVBLHELQOHOOFFUMILBRSYLONZNEHKRUYPEWOWMUYXKKDRVQZKFXXNWPTFMJXZNYGZFVTQMUCXZYLOFIRODEMLQXGGUYDSPJLGJICFFRDJZQJVGYXPPKTPJUUTSCANGLCJASOCRDTUSAIRGJWDOSUBAJDJOWGIYTVTYHKCZBXIVEBRLSCIKWTDEEIHBHCZWMWYRAGFSAXMCWSUNSXTHLCKIMGMQNDZNET");
    msg.predicate.assign("UPQCCMOXXFFEPWQBYKDEIQOIHPYKYMBYLVEIZCUPKOWLSHRDOHQSWFSGWDLZAKBJRDWKUIGCHZBBIVTLYUNTRZJSNCGUJPNEZFVQPDKYLXMWNKYRIBDAOLUOGFCWLAJGARHHWRBTWATYBPSIKTQGVCVZZVYAHMANPXFJONRIZJCAV");
    msg.attributes.assign("EAQQSDAMBCWBWRVHYZJOIXWMBGNDTNXDQHESXIFUQXOUWBLMHLJVGVVEEKZDUCGGCMULIDKYCSLZSHWRYEYNFNLOMXLZPCBUUIIRKLLUTPIAXEITVUYIOPPXMOCQJRPEPMXNGWODEKKLGJTYZADIJTFMGHWYPGMGMFZJNYRPZQJFSUDRA");

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
    msg.setTimeStamp(0.8648297293265941);
    msg.setSource(5436U);
    msg.setSourceEntity(1U);
    msg.setDestination(49161U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("QGUQEQUEUBCRERIHZFSXNOYVJQWYAAICDILWMIPQDWMMNB");
    msg.predicate.assign("EWZMYWVZYTKYSQHPIRHJHRTDYDLOSLXBHRLUZGNEEKIGRQSADZCUIQNAKJGVNVXZKXUF");
    msg.attributes.assign("IWZJNVMIYIKMSOFVPAZKKFAVYKAFESKNHIKXPECAEBYXCOPXOGDUWVXOLPIRJPOLGHNLBXJDYVOTEUSCDFGZFXHHCSUVPDTKZXMNYSAFSWUZDGELNHXPEGQJURTQSRJXMBOFRTZECQGBRZTUXWITJWAEMMWLFYYMCQQCZABJDHZACRKSTRKHAIMLGZSVGRYNTWURBQUIV");

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
    msg.setTimeStamp(0.9145789928770002);
    msg.setSource(17038U);
    msg.setSourceEntity(176U);
    msg.setDestination(10012U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("QBGRUWGKNRLMWSMYXYPCVHBNVDSASNNKOAXBFCKDROBEVLGPCBRLRMGDUCTSIHWZIRFMFXCYWVXXGBZKYLEJXADUMVITOTCSIDJFRPZFNJMKYIDRJJWGYUGEUYMROFPLBLLUAVNAYTPHEDAHOOAODZQVEBKPIFYPQIZRQOXXSCNWOTVGLNHMZJDBJSHHXQTYHFPWMZCVZAWTLQANSHCEGLVAWTIUGSOJPNQUSIHQQEZJKIEKZWCMFTKK");
    msg.predicate.assign("LMLDSGRNKDUYDDGJFMPRQTTKXCPZJTJSJYZUTWIWHWPBIGBFCUYAZMBENHOYWQSJ");
    msg.attributes.assign("NFZAITFGNDZIEPOMMXYBLAEZCRRRPOLBVFIIWCNCRTASOKJLOTYCHFLXFEKDEZLLJAZVKGJAKIAUPACQASFLVTGYFUQNRDNNOUWJWDSTUUYIQHTTGNXCMWFMJQQUMZPPHGBGJCJOADHWIXUEXRHGBIWMKMHTZDQUBJPGNLZTDISOVBSVQXH");

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
    msg.setTimeStamp(0.35134174269527996);
    msg.setSource(38623U);
    msg.setSourceEntity(41U);
    msg.setDestination(19299U);
    msg.setDestinationEntity(115U);
    msg.command = 65U;
    msg.goal_id.assign("EUUSCJBJUOKWZXOJAYURGFQHCOAGFKJUYRMCQADTBDIMNWBRYVTPODKLROFSLWPPBTZCWIGQQHPNGUSXNFMKHJNFOJMIVJIIFRZAVDMOQDYVERLXHKEKBEGYESPKLSXBQKHDWYEPMBPHIRTCSGCBLNZUHCMZVRCCJANPVLWFNSMJZE");
    msg.goal_xml.assign("GURWRAUYKRCGBQHDUVDBDACZIITZEHSTAIURHYPSIMQGWKRYTQVZTSTFFFBHVOZUVEWQYNHBHMTUHFAVWDESQARWPTAASPOKLGATNJEOZZCTJDKPZKXBMBXXPONXPIRCXGBELGPKILYVWLJRNYWDXCQLDSENUMOWNVKJNIXNYHAMA");

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
    msg.setTimeStamp(0.20107823171670358);
    msg.setSource(15073U);
    msg.setSourceEntity(220U);
    msg.setDestination(740U);
    msg.setDestinationEntity(114U);
    msg.command = 227U;
    msg.goal_id.assign("JYMRYKNIVKVVKXCOMBTDIEQRADIMJZUXYPPBGSPADLSWTHOYGYRAOHFOHAPQQNWUJHJOSCGJLBAULUBDXDBXKMPOTFCLHOKETFEQNDZNOCZESSIWHQHQMUPLTKJFLENNANKNXDIEBTLHEGMPACGSQRULSBZWVBMVSFRZ");
    msg.goal_xml.assign("TESXCQVUHIIQSMBPYDLGOJKIPPNBBTAGCIAFCTRJUCILAIUOFAOKLXGFYHZLVUSVXJTNKEHXFWVKNHIFTTNFVUNSTSSDDIHDWBMUEBXRYRWXWNBAVDZQJDOZCGAMYLRCDEWEBGDRBPNURQKMMEDAFH");

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
    msg.setTimeStamp(0.038987284894143825);
    msg.setSource(17397U);
    msg.setSourceEntity(147U);
    msg.setDestination(26214U);
    msg.setDestinationEntity(20U);
    msg.command = 161U;
    msg.goal_id.assign("IBMCGLFATSOXAQNIWGVAOPGQOPPVUVWAIBADLTGTMGOHYCWDPOPJCUXBSDJ");
    msg.goal_xml.assign("IXALUDFEAVQBGNSDQENGWZFNWVXSYCACNLCOONKWHHSJPZBPTNMJMVUYRPBLTFCBRZSLUEQNJCGTEOAAULZPPAVFYIFYRYOOBAHSZPEBMODQJJBWMUTKDXOPESCHMUDKHMKKLIWAUOTRJGLTEEEYZIWVHMYMBXTTYHQCFFKDYXDPWIVCHUIKNQBWRMXXQJPGSWGQDRXTUAWRTSGBEZHZJKUVRYAKVXICCXILSLFNOGFIH");

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
    msg.setTimeStamp(0.8168528423196596);
    msg.setSource(61672U);
    msg.setSourceEntity(168U);
    msg.setDestination(38874U);
    msg.setDestinationEntity(147U);
    msg.op = 121U;
    msg.goal_id.assign("VERXKUUKSJOCJGTDVEZQWLBTWXAOURQHUPVWQPLTNANMKKXTDFUKNRDGYBFBUZFYSKNNTDZTHEVBIHWLFKVLWCKETXRPAAQNIJGAQCOIBCVEDIVTOCPWOBBNHSIUZTQMGLQSYSEMTFMRBREGYSQBJVYGHZPAOLFIDLZSGOEASYGZGZAXFQDYPYCJXDPJPRHMRUXLPIEFWODB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DTALCGOMUFHJIYLQVRPNMJQYRVOUHKJUSISYTVEUMSZOKGUKZVBOFGYASLATSDUDULZHHJGTEEVHWPPBJNVMMLDACXWZDRMNKTIXZRWPFZWGLBTNDUFWCCSSIHCVJBFFAWRNIJYYBBKNIXTJNCSAFCEREKIFAQBZGXMMSQLO");
    tmp_msg_0.predicate.assign("IYKOHAQNZESEWTXARLNQHVJDMVGAKUIWZXNUPULFNMDWRDDECDAGRZVSCXSMOEPXWNAJGPCDOWAJAGKQHPOVQSYTYAKJYVTXEOMRIUFBIIJBGZF");
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
    msg.setTimeStamp(0.8974450071544048);
    msg.setSource(12207U);
    msg.setSourceEntity(177U);
    msg.setDestination(23096U);
    msg.setDestinationEntity(95U);
    msg.op = 163U;
    msg.goal_id.assign("FJPGWGNFNUIVKSCLEGMSDDIAZVGFNDIDNRNOLSNTNMZRNIMWTPIXMYZPTOMUTXOLYUABRAPJZXIHJEQOQQXUTKXJBKFOLMVBPJUZOAHQBLQQHWARISCACCGGNLMPLDLEASWTKVYTENBPFORXEEAYAKYUCKVEYRZCRQWUEJTZHFGBRWPVBGCHSQBDOUSXZTWWKYISMDJBYGOLMHDZYJSFHHGOPK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FBIHBHTIBXGRVKOGWBDDPAZTJKOXYLSCWJFCRZGOXJUCMSTUYGJNHPKNNDOLITYSNCJFRZKUAQEHJORCSOUGXKAECFKDKNRGDHCTLVJYLENYVXXFAT");
    tmp_msg_0.predicate.assign("UPDLZRUKFZWSAWCFGVHJZEIJXKJUBAYCUBZCBTNLNUCUYSADYEHTHOOTLRKOAGYSCFZXIWTBADYFMXRCIALCNIUDHMTIGDWOWSGNVJOCTQPGDPWVBQPLQFGDTPYWOQRMXOSGSIHNPEHLRNZQQEFBDKKLESKEKTKGVHVJVSHJXMQIBVGLEYUVJXBQAWPMOZYJLIMDMZIQFEXCLRKE");
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
    msg.setTimeStamp(0.3739215347636008);
    msg.setSource(61414U);
    msg.setSourceEntity(93U);
    msg.setDestination(62720U);
    msg.setDestinationEntity(99U);
    msg.op = 247U;
    msg.goal_id.assign("FISHUJNTMPAEFALRZPAGJWWCYXLPUCTAHLEHVSIXFIVLCZGDJHBXRGJLYFOUZPJCXLEYQFEYRTXHSAABKLEEOQGMTSQDHRHCWOJDJPUKBNAIPYJE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ACOYJCWFTYUZGWPBGKVASHFDQNPYLZUGLRXHLXDIFFPPUNEHSYVLBUWDZOMIHUDMLICZEBEH");
    tmp_msg_0.predicate.assign("VTERZTIDDNXVXPKGWKNOTHVZBFWDWDPIJUPDPOVQPABRWNMOBXRJXIAMJOTRMBHPLRNOAAESICGPHSFVOTVXKCJDQVWGFYYQBWOLQIAZXCLFEHCEYIUCDHMMVYVKTRYFCSPQMGCCKMQSHHGDNUJLZMSAUOQUYMBKLRLKATZIGNZYWEJNEUAXBROLFANRGCWRLZWFCJEYHEAGTTJMNYOFUBTBKNIXGZPSQLUZQBVHYKFEJSUSDZEK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZKSNXWKLDIYSESUGBDCXYMLYOBGDFWGVCDUALQVOKSBAFTFMCCRVVJEEFJTYOXSHKPOUGNGYMDFATIMMMZHNQGCAMQKJJSHXOVHUFWFPZPEGRJSTFYIPQBDZUHJOWUQJCUPLVNTPQNZAVLBHAZRYABI");
    tmp_tmp_msg_0_0.attr_type = 12U;
    tmp_tmp_msg_0_0.min.assign("ZFLVAYMZQAWUBTKXMNFIVPHNNUYTVUSQMCMEOKBIOGTXNGEBJOHWAMUJIHJUEZSCZPFNITTNKLCOAHAZJKKYHZSTIJCFRFBIJRCVVEXXGVBPWQEQOTDCGNLGGBSCLCQJJYTKLKARIFOTMSB");
    tmp_tmp_msg_0_0.max.assign("JBRWXASDCDWSZGUNVAVNXWRJONEZCNWBPUYAEPKSJWJUKPKFPOLUPIRKMRHHUYXRGPJYDQRAMDLLYVJHTHKWLOOVNIUTGBTNM");
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
    msg.setTimeStamp(0.7581882711453436);
    msg.setSource(46792U);
    msg.setSourceEntity(109U);
    msg.setDestination(18821U);
    msg.setDestinationEntity(31U);
    msg.name.assign("VQPMRCPMETSREEQUY");
    msg.attr_type = 95U;
    msg.min.assign("LQJFJXGDKMIBZOSGFKNLDVQWJHBULVOAJVOUWGMHXEPBWXPAFTQKHXFLYMTJKVLGFDRCOGRLGYWIIIEHKSZNLCSAAOWBODNEJGIEBSXWDBMVVZXZYGFQBLPZEAJBIWUFRLQPPKTHPKUUMYXWFNQPTYIJMWRCOJSDGOPMPCCTCAVUQZTPYJNDTGECMHBNRYZZTYVCULHRQEVFIVOTCUSWXNIONH");
    msg.max.assign("AOYYPJSFCTWJNUSVBURPEHRWYEKJROHABXGNXVFQBZLPRASWSYXGVBVJMKLLAQUNCLHTSMQUCNV");

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
    msg.setTimeStamp(0.7099593895526373);
    msg.setSource(23818U);
    msg.setSourceEntity(147U);
    msg.setDestination(41840U);
    msg.setDestinationEntity(223U);
    msg.name.assign("CCHBHBVMNGMDLIAMPVBEEUDAXVNPLZQUVCCWSYQHYKMMJEZHRKTUXZBRMFXFTZFGWNQJPUIVTROLSRINGYOPJXMKXAJMUDOEBEJLQGPCGEWNUZRHVXVWDRVYG");
    msg.attr_type = 9U;
    msg.min.assign("ZQGIFIXCXDTNBSZGQMEHKDXZZLVDXTJMFACALXREBRKKCRPYKPLKEXICPDWSGJEMWNIOPHHTCQIYEFWYLYJRJMDRIAYNNNFAAZJXOJEQBNNQLKZBGEQDPAUF");
    msg.max.assign("LHQOXAHCXN");

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
    msg.setTimeStamp(0.9651518588297856);
    msg.setSource(42256U);
    msg.setSourceEntity(138U);
    msg.setDestination(45647U);
    msg.setDestinationEntity(171U);
    msg.name.assign("SSHKQTOZIJRLVONIZVBBVWENDWDDSCGLFJHYPHIRWMIXUOGUCMSFDAGETUXRTLCVKCDVKCBOUVHZAKBKIFNGWMIOWCBTAUEJFJBIXNZXNYRGSOJFDQHKYQYMMWJTNGEQPVIRCXHSLHVTLOPGPNIJLPSQGQLZDJMEXSADVZQDCPBRGWHQNBMKNWCSQQUTUJUKMLEPAOIUHFREFNPTEAFXDYEBTMHZTPBWAULYXVZXPYXFFRCAYWMLAZGAYZ");
    msg.attr_type = 81U;
    msg.min.assign("WGECEQWFMFJKKIRHKTXCFKNYBZSTKKBDDOJGUDZIMF");
    msg.max.assign("XTVESSAGOWOIHICTHQEXFHJCRBQVLURUQRCZSPOJNNPZZRGWQECANFXVRZZKBNHKSYYRAAGMUTDTYQYWDAVBMPJFEJPXVAGUQRJVNQTNSDFLHXKUXWRBZFCAMEBOLBHHETNYDFKLVWVCICEYFJVDZQDFCJIGSCOLMMTPNGWUSUSYUXARMEHYTIIKZLB");

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
    msg.setTimeStamp(0.9492992550093499);
    msg.setSource(61859U);
    msg.setSourceEntity(48U);
    msg.setDestination(9703U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("NLANESRSULYAVAXDGVWEHRFYGEZXLFLQXJROYVFVDMSYLTSAGPMUAKATMPMJTRMJCLFZIHWPWSBSIQHUZWDTSXWGGRXWUQGZKBZFWPXXINAKAYETNFTZWVNKEDFILYDNVDFEXOSSHIOXUKBBKVCWPRKOHKQEKCIOZTXRJJCQHNODHYGJMNOYJCPMJBC");
    msg.predicate.assign("THJJLDKIVUXANFXZXZEFYLWUXZGUQKAAKMMHHPJDYTPGCHMXUFBTIWOMCHYQOBTBHLZVNZSAKSUQGETPRMSGLPEVOJODQDYJQVYORZWRWIKSTRZTLNVVDLMWEQTPFECISZYIFMYYPGSHVWANJOSXBXRJDAAPMQNMIUICXHSOWTRCLRNXAYAJCWHUQVWPBCHCNKLCQY");

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
    msg.setTimeStamp(0.980643635623294);
    msg.setSource(29159U);
    msg.setSourceEntity(117U);
    msg.setDestination(22149U);
    msg.setDestinationEntity(223U);
    msg.timeline.assign("RTJWGLXHKUFJCFYKRZCLKMIOZIQTHCVPWLNUSUFEYV");
    msg.predicate.assign("DYFLEFLVYLFGEVOPIESMFPLXAVAALYQRQCEOIQICHBJGKKDYFMHNPVNCWSTMIMJAOUXXHRQVGYGSRADPUQUHRTMZHSHIBWUOGDZXLOKZCHGMOWCSBAPWXVXFZNKJQWY");

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
    msg.setTimeStamp(0.4306904942717863);
    msg.setSource(24065U);
    msg.setSourceEntity(187U);
    msg.setDestination(57805U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("XIFWDZNKBWCFLPDVKCZNRSBUQYPCBQVTNMLZGTUHFYVCANXTQDKSGLZMHTMJXKMRNIYMMYTJVKIRETPNFGUMEJHEVWXHEWWSHKOECLQZIJBDMZQUQQOGZOWNTAKZFGHDCACAJTZIWSVPYBSXWFRDSSRCDFHJGHAHESXBB");
    msg.predicate.assign("OPXYTLSSMJAQZIVJQUQYBVMCWFTWPJIICUEAFTZEESKDHZPRRXGDULXDGSWEWFZNXAJUPBUQSPNKMHHUGDVRSHUYZJV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WEZHAPWLQUXSJMAYLUMGYAJTBZZECNGSWEXRHD");
    tmp_msg_0.attr_type = 76U;
    tmp_msg_0.min.assign("XJUAVHTQVIWOSTYCXENJKOUDUHTQDSXPXYTPFFKMHGKWZXNOMFCKZJPPBZMOEGTWIIMIIMGCWRCLYBGULGHTLYVCBIKANUDPDWHPVSCJQDDHAIJZQXCEXRNECEOWRUROPFTKNNRJSUBEHPRYRTULAVHMGFOPYEOSCAHGFWBTOLALZIXLHGISYKLABSQBYMDDLRBMPWZABSZQVQQ");
    tmp_msg_0.max.assign("SLUBTENARGRQSREOZJLVVXKCQCQCYPXHXHOOPHIERBOBDVOZPEMJNPJUTIWYTWPCWDJWLFNLEHKGUTARBZHTLSSNNBQMJUIIVAZPAXBQFCDFIIYXVWZTCUZMSGMHLGRKUHNIWBMAZEVFYZYJPXSPRIIKJHLWKYLCQDZYBNFTAOENWWGZ");
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
    msg.setTimeStamp(0.9824362000796649);
    msg.setSource(57207U);
    msg.setSourceEntity(98U);
    msg.setDestination(22007U);
    msg.setDestinationEntity(159U);
    msg.reactor.assign("VAMULESWSBYTHVZNALJDUTYNKRWGMKXGXILDAWARVMGRMFIZKJYTHLVDJZFRKGZPFKVZCSQDVLYFQOHBNIWPCKEGTXOORQKFSJEAQFSGGAOHFHLDOHPIB");

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
    msg.setTimeStamp(0.5199421956723422);
    msg.setSource(40320U);
    msg.setSourceEntity(110U);
    msg.setDestination(34222U);
    msg.setDestinationEntity(244U);
    msg.reactor.assign("SWMHRSEIJYHTGNBYBQNTRBCLTCWCMUFKLSLHFNNTOHTWQZRYYEJLCUSLPAIELAPJGKQAEMQMKZXVGTKORNXJSNRIRVBZJHTVHZHYAOEGID");

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
    msg.setTimeStamp(0.5435508909998467);
    msg.setSource(52609U);
    msg.setSourceEntity(212U);
    msg.setDestination(65166U);
    msg.setDestinationEntity(11U);
    msg.reactor.assign("CHYEVSMIBWOQTXAHMKXQUCJPYNPCHCWPIDATXCTHFZFDWHNVLBCFSGKOMEOJSSFLIRPLRZBEJANKUNQRPVLUYUWNIEOLZBVGMZPFMTKLUKVYVKARECXZIFIHNFCQKDWDTGZEMMFCXEBPRBUYUNDJLWEANIMYOHTBTWIAJHLDKRZYMZJQQUGGIQTGT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KPQRNPJGGVBTXAENUPMRLJWWKJZANYNPZENXFAGVFIOTKIVEJOBDYZDKFPHNOOFQTHFTLDEBHDPCCSACVSFXXKZQVWUOPKQTPZANIMEMMEGQJSWITXGEVRYHLLZNLUXNSNHCMWRPYGDBZBDXDVJSLWTLBWTVYTUSBZOSDCYYDKXFVCHMIOAQJTYGUJ");
    tmp_msg_0.predicate.assign("TMYUZBVLAMVQTKWEWOXBFQYSGTFHWIPPBKKCGVYEZAADOYXFJKMEQQZUSHUDUNYMFLCRSLQJVGIBCJLVHXGEWTNEPSHNJPXPZDIDJMTPKIBOXQNVXSQUNETBKGNXCZCWAOWPQWMSXOOBDGHLAIUEO");
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
    msg.setTimeStamp(0.060204427701480934);
    msg.setSource(29297U);
    msg.setSourceEntity(140U);
    msg.setDestination(56950U);
    msg.setDestinationEntity(78U);
    msg.id = 175U;
    msg.width = 42126U;
    msg.height = 38694U;
    msg.widthstep = 52727U;
    msg.channels = 203U;
    msg.depth = 209U;
    msg.finaldata = 116U;
    const char tmp_msg_0[] = {4, 107, -33, 37, -72, -86, -52, 32, -77, 41, -34, 94, -96, -16, 1, 57, -73, 90, -113, 124, 92, -5, 65, 11, 70, -73, -26, -88, 44, -50, 3, -76, 16, 38, -15, -74, -86, -9, -18, -119, -27, -40, -29, -38, -114, 2, -111, 55, 66, -27, -38, 7, -31, -113, 81, -19, 33, -91, -30, 72, -88, -82, -80, -11, 12, 106, -91, 31, -13, -80, -52, -75, 63, -100, -49, 114, 108, -24, 71, -71, -29, -90, 1, 90, -10, -18, -43, 126, -53, -18, -50, -128, -94, 111, -104, -111, 105, 59, -93, 87, -4, 51, -48, 117, -7, 37, 24, 25, 37, 66, 22, -15};
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
    msg.setTimeStamp(0.933111890387866);
    msg.setSource(9305U);
    msg.setSourceEntity(38U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(196U);
    msg.id = 133U;
    msg.width = 46941U;
    msg.height = 24034U;
    msg.widthstep = 25971U;
    msg.channels = 208U;
    msg.depth = 7U;
    msg.finaldata = 99U;
    const char tmp_msg_0[] = {-41, -12, -56, 121, -19, -64, -76, 65, -54, 8, -55, 121, 114, 125, -68, 74, -125, 10, 97, -114, 26, 83, 79, -75, -113, 27, -82, 115, -108, -87, -63, 0, -27, 51, -35, 121, 21, 94, -57, 24, -3, -56, -122, 104, -86, 25, 63, -85, -119, 77, -78, 6, -96, 34, -109, 39, 123, 63, 39, 7, 27, -82, 32, 126, -43, 4, -39, 77, 91, -59, -42, 3, 94, 66, 81, -79, -46, -114, 7, -92, 53, 102, 107, 121, -80, 70, 111, 19, 115, -2, 104, 111, 124, -49, 61, -51, 126, 37, 103, 83, -24, 94, -74, 12, -41, -110, 12, -65, 52, 62, -51, -85, -37, 51, 37, 11, 0, -90, 17, -47, 32, 24, 35, 110, -16, 23, 68, 11, -83, 51, 54, -45, 24, -100, 35, 31, -127, 31, -119, 16, -127, -73, 56, -79, -93, -111, 117, -33, -27, -83, -102, -17, 21, -82};
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
    msg.setTimeStamp(0.13286285574462364);
    msg.setSource(18234U);
    msg.setSourceEntity(201U);
    msg.setDestination(2534U);
    msg.setDestinationEntity(235U);
    msg.id = 172U;
    msg.width = 53084U;
    msg.height = 18332U;
    msg.widthstep = 37949U;
    msg.channels = 205U;
    msg.depth = 158U;
    msg.finaldata = 12U;
    const char tmp_msg_0[] = {-93, -16, 43, 48, 28, 26, -97, 33, -103, 16, 38, 93, 88, -83, 43, 104, -109, 52, -7, 7, 106, 79, 41, 98, -36, 103, 122, -65, -128, -119, -32, 2, -23, -92, 124, -68, 85, -61, -85, -39, 116, 92, 85, 48, 1, -113, 90, -56, -63, 26, 123, -19, 67, -117, 99, -123, -122, -38};
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
    msg.setTimeStamp(0.10806512175349281);
    msg.setSource(43927U);
    msg.setSourceEntity(84U);
    msg.setDestination(14879U);
    msg.setDestinationEntity(113U);
    msg.width = 31320U;
    msg.height = 25702U;
    msg.channels = 230U;
    msg.depth = 32U;
    const char tmp_msg_0[] = {63, -126, 0, -59, 49, 110, -27, -30, -124, 58, -53, 42, -46, 33, -14, -55, 66, -62, -14, -110, -46, -74, 117, -11, -71, -94, -103, 63, -16, -112, -43, -69, 49, -80, -21, 30, -89, 91, 31, 91, -106, -83, -103, -62, -56, 58, 125, -53, -117, -32, -5, 118, 77, -18, 32, 77, 41, -39, -31, 113, 1, 23, -107, -26, -2, 6, 3, 113, 25, 105, -111, -93, 88, 6, -40, 105, -49, -99, -80, 1, 0, 76, -92, 110, -61, -64, 104, 23, -8, 126, -117, -23, 71, -49, -88, 50, -105, 54, -31, 44, -123, -50, -117, -83, -29, -49, 126, 57, 122, -100, 93, 9, -106, -54, 25, 84, -68, -63, -97, -126, 27, -42, 91, 102, 83, 72, -37, -19, -8, -95, -2, 63, -21, 40, -80, 102, 74, 11, -9, 93, -73, -66, 36, -107, -66, -78, -128, 10, -38, -64, 95, -98, 40, -14, -3, -22, 107, 50, -4, -128, 37, 12, -67, -36, 31, 69, 38, 106, -41, -79, -109, -110, -114, -95, 2, -56, -107, -59, -85, -50, 17, -99, 19, -28, 17, -71, 123, -116, 53, 117, 103, 106, 42, 120, 28, -67, -82, -67, -75, 52, 109, 69, 22, 125, -47, -34, -109, -81, -3, 11, -110, 7, 91, -78, 122, -118, -13, 37, 45, 106, 124, 82, -18, -59, 48};
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
    msg.setTimeStamp(0.16772064005075238);
    msg.setSource(19236U);
    msg.setSourceEntity(251U);
    msg.setDestination(41930U);
    msg.setDestinationEntity(57U);
    msg.width = 32787U;
    msg.height = 63327U;
    msg.channels = 21U;
    msg.depth = 197U;
    const char tmp_msg_0[] = {-51, -60, 114, 47, 99, -113, 80, -69, -111, -13, 105, -44, -85, 80, -25, 58, 62, -32, -7, 17, 74, -22, -6, -92, -111, -78, 8, -82, -114, 63, -1, 80, -79, 115, -6, -118, -114, 29, 101, -78, -18, -105, 93, -35, 125, -89, -18, -64, 0, 26, 54, -11, 45, -49, 62, 91, 38, -2, -44, 80, -127, 45, -38, -85, 47, 92, 64, 116, 89, -59, 80, 67, -62, 62, -116, 110, -102, -29, 73, -25, 122, 101, 54, -112, -10, 120, 33, -122, -11, -31, 35, -103, 13, 120, -78, -67, 77, 27, -61, -30, -46, -126, -74, -46, 47, -106, 6, -114, -27, 68, -36, -5, 2, 17, 124, 93, 122, -71, -82, -70, 108, 105, -37, -100, -69, -1, 70, -57, 23, 39, -80, 17, 31, 90, -119, -68, 38, 95, 124, -43, 85, -53, -59, 101, 79, 93, -86, 124, -102, -3, -54, -98, -63, -124, 37, -45, 69, 111, 103};
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
    msg.setTimeStamp(0.5075325405301212);
    msg.setSource(36455U);
    msg.setSourceEntity(53U);
    msg.setDestination(56153U);
    msg.setDestinationEntity(76U);
    msg.width = 46544U;
    msg.height = 11309U;
    msg.channels = 152U;
    msg.depth = 179U;
    const char tmp_msg_0[] = {-31, -121, -59, 58, -104, 27, -99, 19, -79, 102, -30, -103, 96, -115, -117, -106, 117, 123, 85, -9, 74, -107, -84, -63, 50, -59, 101, -57, -57, -14, -29, 31, -55, 71, -26, -24, -104, -31, -19, -103, 46, 76, 77, -24, 78, -92, 80, 58, 86, -55, 14, -102, 49, -49, 56, -69, 96, 110, -77, 19, 5, 116, 88, -57, -87, -54, -2, 92, 61, 3, -68, 47, -10, -127, -20, -91, -104, -104, 98, 92, -124, 73, -55, -115, 39, 112, -119, 125, -14, -95, 121, -74, 124, -73, -22, 42, -108, -108, -122, 87, 71, 12, -33, 14, 56, -17, 34, 100, 107, 26, -60, -106, -93, 94, 54, 107, -123, 43, 41, -77, 7, -72, 100, 56, -49, 119, -63, -91, 4, 86, 36, -5, 33, 56, -3, -103, 85, -2, -83, 10, 90, 65, 49, 86, -105, 109, 12, -15, -82, -37, -15, -24, -71, -50, 62, 41, 72, -21, 39, 95, 98, -58};
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
    msg.setTimeStamp(0.5907500689638879);
    msg.setSource(44782U);
    msg.setSourceEntity(97U);
    msg.setDestination(62927U);
    msg.setDestinationEntity(129U);
    msg.frameid = 248U;
    const char tmp_msg_0[] = {88, 66, 107, 75, -102, 80, 13, -14, 120, 106, 118, -4, 84, -60, -91, 29, 19, 40, -46, 57, -39, -99, 61, 44, -38, -59, -5, -10, 47, -95, 28, 43, -34, 86, -89, 98, 54, 19, 6, 38, 59, -120, -25, -92, 3, -92, 35, 110, 57, -102, -78, 43, -23, 15, -112, -20, 55, -59, -78, 102, 29, 60, 95, 13, -120, -115, 3, -3, 36, -79, -8, 125, 45, 21, 25, 41, 114};
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
    msg.setTimeStamp(0.1369150756373616);
    msg.setSource(53378U);
    msg.setSourceEntity(13U);
    msg.setDestination(17363U);
    msg.setDestinationEntity(77U);
    msg.frameid = 64U;
    const char tmp_msg_0[] = {100, 88, -60, 56, 88, 23, 123, 46, 39, -128, -67, -51, -24, -87, 40, -72, 52, 18, 104, 27, -121, -82, -67, -126, 96, -22, 32, -91, -80, 22, 80, -42, -110, -100, 0, 87, -8, 1, -53, 67, -125, -41, -94, 33, -37, -47, -48, -42, -117, -14, 113, -47, -71, 70, -61, 114, 119, 55, -38, -81, -57, -1, -20, -122, 47, -75, -55, 25, -19, 63, -126, 62, 0, -120, 90, 111, 0, -14, -83, -55, 52, -91, 61, 3, 66, -95, 85, 47, 107, 104, 107, -117, 3, 37, 77, 51, -125, 76, 95, 93, 76, 64, -4, 35, 17};
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
    msg.setTimeStamp(0.12500206794233992);
    msg.setSource(470U);
    msg.setSourceEntity(240U);
    msg.setDestination(47836U);
    msg.setDestinationEntity(96U);
    msg.frameid = 211U;
    const char tmp_msg_0[] = {95, -97, -23, -86, 94, -96, 43, 23, 83, 96, -107, 9, -41, -58, 110, -2, 107, -122, 89, 104, 86, -68, 34, -97, 102, -122, -13, 69, 106, 50, 75, -114, -86, -28, 70, 110, -120, -91, 91, -90, 66, -88, 111, 44, 8, -87, -123, -125, 89, -47, 34, -22, 102, -93, 76, -100, -67, 46, 23, 0, -22, -79, 18, -100, 20, 4, -102, -14, 114, 98, 95, -26, -48, 22, 55, -88, 120, -10, -40, -42, 19, -114, -111, -14, -106, 1, -29, 9, -34, 41, -78, -104, -96, -56, 76, 99, -9, 112, -21, 27, -23, 25, -66, 92, -30, 8, -60, 26, -18, 75, 114, -128, -110, -45, -41, 45, 98, 14, -97, -11, -127, 120, -21, 75, -78, -63, 62, -94, 10, -55, 47, -97, -22, 64, 114, 38, 20, -31, 90, -78, -24, -72, -58, -122, -14, -33, 72, -32, 0, 89, 46, 120, -47, 84, -63, -40, 51, 28, -29, -60, 36, 23, -87, -53, -121, -124, 97, 89, -65, 56, -64, -115, 121, 84, -51, -57, -92, 114, -26, 26, 116, -9, -103, 6, 52, -93, 80, 32, 40, 30, 98, -43, -89, 90, -80, -4, 70, 70, -113, -57, 114, -29, -80, 39, 25, 8, 44, -32, 99, -11, -120, -109, 38, -51, -79, -29, 70, -32, -41, 91, 31, -68, -114, 28, 103, -109, 22, 23, 94, 111, 53, -63, -20, 115, 13, 90, 55, -55};
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
    msg.setTimeStamp(0.6508614747398843);
    msg.setSource(10530U);
    msg.setSourceEntity(153U);
    msg.setDestination(48547U);
    msg.setDestinationEntity(32U);
    msg.fps = 133U;
    msg.quality = 237U;
    msg.reps = 69U;
    msg.tsize = 140U;

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
    msg.setTimeStamp(0.08686543188786);
    msg.setSource(35290U);
    msg.setSourceEntity(119U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(8U);
    msg.fps = 38U;
    msg.quality = 156U;
    msg.reps = 106U;
    msg.tsize = 112U;

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
    msg.setTimeStamp(0.5126758662599132);
    msg.setSource(12592U);
    msg.setSourceEntity(199U);
    msg.setDestination(43518U);
    msg.setDestinationEntity(33U);
    msg.fps = 155U;
    msg.quality = 84U;
    msg.reps = 150U;
    msg.tsize = 156U;

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
    msg.setTimeStamp(0.7285805825301153);
    msg.setSource(19366U);
    msg.setSourceEntity(209U);
    msg.setDestination(28501U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.9115009587943023;
    msg.lon = 0.9979932784164569;
    msg.depth = 92U;
    msg.speed = 0.7463144570837622;
    msg.psi = 0.5294908435054604;

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
    msg.setTimeStamp(0.19555116774439885);
    msg.setSource(28903U);
    msg.setSourceEntity(180U);
    msg.setDestination(15981U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.906383262994619;
    msg.lon = 0.1852518783585736;
    msg.depth = 249U;
    msg.speed = 0.8150765894155919;
    msg.psi = 0.5010773583246576;

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
    msg.setTimeStamp(0.9021834770513584);
    msg.setSource(7775U);
    msg.setSourceEntity(249U);
    msg.setDestination(7419U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.8023706619190316;
    msg.lon = 0.868892632145538;
    msg.depth = 232U;
    msg.speed = 0.6236178815139042;
    msg.psi = 0.3621577045913408;

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
    msg.setTimeStamp(0.9768015914494854);
    msg.setSource(8948U);
    msg.setSourceEntity(161U);
    msg.setDestination(37549U);
    msg.setDestinationEntity(223U);
    msg.label.assign("QMGLSNBSVDKTOTKJZAPYCFMNAAIHFKGJVJQKSZLHRGOBODRKMNBSAVGPJBRROZTETUKFNXXYKFCCXMWWNOKLEYECUWMRIIYKQYSECNSUAZLEFMPFI");
    msg.lat = 0.6839670610411456;
    msg.lon = 0.34486337364919606;
    msg.z = 0.5216759884285658;
    msg.z_units = 55U;
    msg.cog = 0.9741655040232536;
    msg.sog = 0.8178942094210295;

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
    msg.setTimeStamp(0.676537091713275);
    msg.setSource(18339U);
    msg.setSourceEntity(35U);
    msg.setDestination(54507U);
    msg.setDestinationEntity(5U);
    msg.label.assign("QYJLIEHGVGHFXUVARTIIUL");
    msg.lat = 0.9952824639998946;
    msg.lon = 0.47671821453672014;
    msg.z = 0.393378804378243;
    msg.z_units = 140U;
    msg.cog = 0.5953739179278691;
    msg.sog = 0.08015026663064362;

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
    msg.setTimeStamp(0.11538672925499527);
    msg.setSource(29632U);
    msg.setSourceEntity(16U);
    msg.setDestination(32837U);
    msg.setDestinationEntity(122U);
    msg.label.assign("HBEQSDFGJGPCHINQSLLTBYOFXADTRBYNUCTGLXIKELNYUSZTQZZNWZBANONGVTDGFWBDKBGAMCEIFMIWWXDWLKETOFIZOAKRSYZVRRIQGAAAVGEZFOPVFHFBTTMNNVRMBMQRRVEERDJDP");
    msg.lat = 0.9646497274814279;
    msg.lon = 0.21916249471038518;
    msg.z = 0.0405822386265241;
    msg.z_units = 58U;
    msg.cog = 0.32024651155127404;
    msg.sog = 0.1790324050526766;

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
    msg.setTimeStamp(0.04314571236793874);
    msg.setSource(55282U);
    msg.setSourceEntity(207U);
    msg.setDestination(9074U);
    msg.setDestinationEntity(173U);
    msg.name.assign("KCFAXYSDTILGOEGTXOSNEMBUQVGZNCKYBJASATJJZHXSIWHHP");
    msg.value.assign("YMKVLOSDAMEYXTEVSRNUNGZMTKGMQWWFKPLJPGCRZHWWCAUXHZSDUTCGGWNLHSHWTIOQCYBTLZTKOBNENGKVQHAASLFTAPZQCTYIOKFFAIUJHUKLUUIEOMZFXORIZYYTXMYXSRBYRVMBDSRWJXFODNCVLRZFDGBUNDJQSPGYLQMLEIBAVSEXBRCXEVXHGZUQDCJEUZFGQHIWMFBXJPJTJ");

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
    msg.setTimeStamp(0.8153975261160245);
    msg.setSource(35526U);
    msg.setSourceEntity(80U);
    msg.setDestination(26988U);
    msg.setDestinationEntity(156U);
    msg.name.assign("UOQGRMOGYFYXKNBPTBPFWXTYLBAAQSOJECDIGWHIVYTDYXEEPTSAHPHIQKXHGVUFLOWXVZWMHGDQSKIDVZRBLHEVNLMESMKNZVJJAFMFYLVICCVJWCDGEPIOBPSGHVAMQZRENQSWWBIOHRTNTQWOUKCBJGCBLPSBNWNUZJMGASUWAHXFREALYTVUDIFAJMEBERXCJRGDOLNSQUKPNDDQUYKIRJJKFUC");
    msg.value.assign("KNUSYYWCWUABGCUKHOIIOCHIVTLPARASWWWEWTDHZ");

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
    msg.setTimeStamp(0.2661282203008746);
    msg.setSource(18883U);
    msg.setSourceEntity(212U);
    msg.setDestination(50953U);
    msg.setDestinationEntity(110U);
    msg.name.assign("CMDUUIFXLMVLPOWIGFUBKMDPQIRCDTYXABW");
    msg.value.assign("PTWNAZJZIPSXEANQUDFDLMDFXAUYDCU");

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
    msg.setTimeStamp(0.4208758970634152);
    msg.setSource(29220U);
    msg.setSourceEntity(242U);
    msg.setDestination(31680U);
    msg.setDestinationEntity(106U);
    msg.name.assign("MFOEXRTWVQIMZYHDVLVGURSLZJXDNVLVFWPDXAPJEDHKTUBMDIBGGCMEHNAHQBBPNGESKIHKOYPZFEYADKNOPGSXWCHVUHXYMOTLELWTMNMESYOWGZCXZKGFTJKLETOJCJHRYBNAPQCCNFXLACKQUKAELVMFNXRVCTAKWOQIQZIIQFAXRSSAOMYPZICWDVRVZDJUPYRWTJCYEGTQNRMGQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DPYIYHTDRAJT");
    tmp_msg_0.value.assign("ZORILTCJYAKXODFCLJDSLXXXVHQQISAQEHIYKCMTAHIMMABUEKSMOLXJMHXWTHFWFDGFONNENFFUVKCBVNPAKUBGHQKRGMHJDLATFYBAOCKRDIZIDIVZLGRPENJPGVU");
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
    msg.setTimeStamp(0.6144110041177945);
    msg.setSource(18669U);
    msg.setSourceEntity(254U);
    msg.setDestination(40209U);
    msg.setDestinationEntity(120U);
    msg.name.assign("VVPJEPGXFRPRUNCKCARIEAMJYSLIOGLRHRHQCSALNHSCVTAYVYJJCLWHTAKITTNOUKRSVJVWNWBAQTLIEIPOXMJKYBIMFHHUMRWBALSGCEOXEMHDQUGJGFUQZDWIBYKOGTQLHQIQNLBFSIXFFINTTTZKEVZHZXMNXQEEYKDPASUHFRUWOZYWYFSGZZPUMGDODAREKYXYSMUPCQJLGRWKZOXWBEASVFJJPXVXCKNNFDPBDWBO");

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
    msg.setTimeStamp(0.9788671524256187);
    msg.setSource(22039U);
    msg.setSourceEntity(164U);
    msg.setDestination(57026U);
    msg.setDestinationEntity(46U);
    msg.name.assign("MBLCVRUGSLTLDFOAYTVUGCKJIRJGPRKZYDAHEJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PTHPXJCUIDJOYELNGGTHCKLIRSNFKYOAOILCJUTQFNNXMBLQHSHJQNVMUDGRAPYQHQXGLGVTZEGOCUFONDZVKIWKBJRLKODUWTAXZKEAC");
    tmp_msg_0.value.assign("YEEQTATZBHFTKYSSSPCMGAKZDMIIRZPOTLIVVSWQEPHJMKHTSJNGRBXPFEYTSQLZFCHAVWEIRNLKUDAGFAYORNWNLHYPWHPBDSPYOVQSKWBGBORTMFOJVXDERKLOAJDHOZSNCJBUXLIINFTV");
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
    msg.setTimeStamp(0.8216329286895047);
    msg.setSource(20339U);
    msg.setSourceEntity(47U);
    msg.setDestination(16150U);
    msg.setDestinationEntity(100U);
    msg.name.assign("RYZXTQGSBXLKYHFFQJOIDAODCMBMJNGVKANKTUEGVPAGDLVEUQRIGFZBMXZOEENPOZZBCNXZJMCBSVHWZPDROJDILRXJTIFUEW");
    msg.visibility.assign("USEYVCRVFPKDDCOBFLOMEHAXIQCZJMAWSHIVJEJTKMDIQOUGVOQEKUERCUUSTNVPHNTLXKIYLYRSDOTQSZFPDYBFZLWAMIDBQBORWDKZZXPLGDTIAQKTKDJSWPHFFEOKSBANWVQNONPGVQCZMUIGPICRMFZYZQGUYBBGLAEEYHHXYSNPWDUUOENZILLHRMGNJRMHNAOHVWHVSFJPBRRAXGFJTBJWMVUJPXLK");
    msg.scope.assign("ANFICOOOKCLXFGOBRWQVBPMSYDDYBZVLPDMTUIQXSDWFFQIGBXSJDBXUIEAHZCSPHEGDGUOZGRU");

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
    msg.setTimeStamp(0.03481728585374466);
    msg.setSource(21430U);
    msg.setSourceEntity(74U);
    msg.setDestination(2333U);
    msg.setDestinationEntity(222U);
    msg.name.assign("BLPHEZQHKTSHINQTHUFFCNBLWMJQERBVAFEPZBIUNOLIMNNKPCHOOMKJWDUWRMOLETTCVGKOZURJZKCMSVSIAYGRJYWKQYZCOGEXQGQNPVCVETSYBDIJILLKSEXDDUZZQFXZSMMVTGWAJSFORGXXFPZATSDMYKJHFARJFHCBJVPOTPWWIYSBWBADCYKAYRPEMGUYNOGLDFBINQARVQUIXEKCUCHW");
    msg.visibility.assign("CTBXLEKSWDOASUVCYMPCKWGZHCYPLJTRERSRMDGZRDKGVUMLFSVNAQTMSEANVWLMWNIOZEZKCTLFKLLALQHBKSPBDQRFJBXLTATPR");
    msg.scope.assign("PDOPFCNXYVWLFOSPMHGRZPDLMMILAYTSXZOUXHPHQGESDTYKFXZUJCCAFFQEWZNJBMDRVITLETBQPMZLNMKHUTQCHXNERKBDWHLITQGRMDABJODZCUXIRNGCWXGKPZYEBKWTBRJHJKAQYLSIXFKOVNIOOUJEVGJWWDJRQYIRLDXSGVALDAUSVAEYTNWJBFVFSGYWYQAIEBUQTEPZKBGXNPRHOEKOUZCFTPCIMKMBYJAGVNV");

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
    msg.setTimeStamp(0.16065588573919232);
    msg.setSource(9057U);
    msg.setSourceEntity(146U);
    msg.setDestination(24305U);
    msg.setDestinationEntity(79U);
    msg.name.assign("WLWRAIETXGMPVPXHKHHDZAVTAUEZIOWMTWJCRGKBZPDSYVIBTCYEKELLBYGLEPMVEBPSDHCGQMMWORJV");
    msg.visibility.assign("TLSTMDJMLHLVBUYAGCYNUTEZQASCDRAOPYJGXIQPTFSFIQJLXRDKYWUCFNQIOLTLKYNBMANAGGVQKRD");
    msg.scope.assign("ARAITKQESKZQCLUCEQOJCMHBJXXRIC");

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
    msg.setTimeStamp(0.8490483736723453);
    msg.setSource(33997U);
    msg.setSourceEntity(162U);
    msg.setDestination(57735U);
    msg.setDestinationEntity(96U);
    msg.name.assign("ATYHLHQUIKAWLTIGKRIJXQCFOVPOUYOIYFGDKVEFSZD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FRYKAZHWWQGXIMLBTZKXCMBOEYOCMBNKEUYFKBVYDRCKMQUOYHIQGKROOEEGHTEPMNGDTWFRXQSMLEULXYVNFCWPLDZGMXDCSNIVFAWIUSFRDHITDCZJDVAGPAD");
    tmp_msg_0.value.assign("WVPJGRIJOAXBZZGRCEMWYFSHKWMCNOYWHGVWWRZLHONFZTUIXAYTAUSURYITJFTKPKNJEXBGDQTQKMSDEMGFLAIATFIXCWAVOISNACXLEOXBYUNBIOLNCPQHCPJMUQONZQDPFBQUIFCRCCMEVLOTGIJFBH");
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
    msg.setTimeStamp(0.29832073678559756);
    msg.setSource(58974U);
    msg.setSourceEntity(201U);
    msg.setDestination(32431U);
    msg.setDestinationEntity(26U);
    msg.name.assign("BTIZVAAOIISNUYTOJLSZKEIBUBIWGGOMRCYNHNNVFGNSPVREZWMBHMGXODMTHAJYAWXPUTFAHZXVFDHUFERNAIOKBRUJHRXQPNODROTIQPTAFHDQOSSAEHCLQQWAPCKZXWVUQUPYESRIWSKDCNCZFGMUKBYKRRGZZKGDVYEJXYSICGXGWBTFISMZMDLUMXMKQHCBZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VTOACOGKNMKMQWVXQYUNHBTRTDLIQMFSEFUYIJDENTBUKJHZJCAEXXVGCXRARQZOGDSOPDUQCHSLZEKFLBPGHGMOARNYXBBZHMOBWIRRRIEMQGNPBYZOELEPCWVAWULYDHAXAFDOHSXAMHCQZMTGPJXVSAK");
    tmp_msg_0.value.assign("BIEKIHCKOSWLJFUQHPGPLRJEMHINEBAZQQCEBPOCAGMLWSZTBURLEKQBKOXPAQWCHGDFLXJZCVIORRSJFWIWDYHSTRNODYTONV");
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
    msg.setTimeStamp(0.9452739597770463);
    msg.setSource(29449U);
    msg.setSourceEntity(236U);
    msg.setDestination(25983U);
    msg.setDestinationEntity(105U);
    msg.name.assign("TVNGJOQCLKYTIQGHEMSAWYGQNBXDXPKXEPOSCTDVONJGJDCTGSGWUXAYPMOHXFUWKNJEPAIJQIEMXRQTSMHRMXQSULTGN");

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
    msg.setTimeStamp(0.8550358621166707);
    msg.setSource(7075U);
    msg.setSourceEntity(155U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(43U);
    msg.name.assign("FEKXAJBHOPORVALRGGGKMFLUNMQCCMDRUWSNZDJBFVFEYTFZDSUJQSTICCJIYJEVQBWBZPEUTNCTHPZJXDFWFYEKOFYJLYPHQIOVBSCODKASZJZKMNOEINQKYXEIWFT");

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
    msg.setTimeStamp(0.21837236345929112);
    msg.setSource(29812U);
    msg.setSourceEntity(70U);
    msg.setDestination(10840U);
    msg.setDestinationEntity(3U);
    msg.name.assign("TXAOTJWGIMMVXCLDJEZSPIQKKYBHYEIQPFQGEUDKIUJLLDXIZMBDFIPSVWYWCUXFCKNUPINFGAMCRBEXGSJASNXQLCHNVNEMICVDOAALVUBSTLTVRLPEMGPCROUPMHSPWJSATNKOPLGYDQNEQIURORZHXKDTHCJGBEBDKRQFRKEQZOSKGUYTZQFJUTCTOYOFQOPORGFXMBDJANYXN");

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
    msg.setTimeStamp(0.03681970628701736);
    msg.setSource(28114U);
    msg.setSourceEntity(111U);
    msg.setDestination(53099U);
    msg.setDestinationEntity(202U);
    msg.name.assign("CMOLCYRMZHOTTDTFTMKRUPCEOVZFKNIENHEJKVXDHNJGQWUVGRCLLJWHBQFTGEPQUSOGTBJFNFWBXANLDUWFRZXZPPJVMXHYDPSVCMZNVYROSIMEWVITEFSGTMASQOKGKIVNCFFDHZXJLBTBAUILJJWFQRUOMCUBKYXARGGADBQRRIWXPIANYZPHMBRWLADDUOYAXYQUOSIWKTZDEZPOYSGNUEBSXVAVGJYQPEL");

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
    msg.setTimeStamp(0.4275197142447187);
    msg.setSource(59563U);
    msg.setSourceEntity(88U);
    msg.setDestination(55793U);
    msg.setDestinationEntity(247U);
    msg.timeout = 2889688206U;

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
    msg.setTimeStamp(0.715981810157221);
    msg.setSource(10636U);
    msg.setSourceEntity(172U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(224U);
    msg.timeout = 3565988907U;

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
    msg.setTimeStamp(0.8977275924917657);
    msg.setSource(28924U);
    msg.setSourceEntity(79U);
    msg.setDestination(24346U);
    msg.setDestinationEntity(183U);
    msg.timeout = 897441204U;

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
    msg.setTimeStamp(0.6266046137103018);
    msg.setSource(23483U);
    msg.setSourceEntity(75U);
    msg.setDestination(4540U);
    msg.setDestinationEntity(81U);
    msg.sessid = 1404890597U;

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
    msg.setTimeStamp(0.25460314407545903);
    msg.setSource(47383U);
    msg.setSourceEntity(22U);
    msg.setDestination(27126U);
    msg.setDestinationEntity(189U);
    msg.sessid = 107818960U;

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
    msg.setTimeStamp(0.5237252823779326);
    msg.setSource(9495U);
    msg.setSourceEntity(28U);
    msg.setDestination(63700U);
    msg.setDestinationEntity(204U);
    msg.sessid = 4036520575U;

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
    msg.setTimeStamp(0.44706572894356633);
    msg.setSource(1331U);
    msg.setSourceEntity(50U);
    msg.setDestination(46829U);
    msg.setDestinationEntity(136U);
    msg.sessid = 2946274010U;
    msg.messages.assign("GZITXBFFOEXCYKFUKGUGYTISVVDYTIVNDYLMDFKAYWXGHQZBBEPAWTLJEIDPHFHQNGCZSXKKZBUKHANQRWBKXYNVLTISDTOUXWBDHUMMYFAHFMZZYWVDENWUHVJLBURQDCQPBXFXSNCGHUCKWCRKXPMLYPNEOAJVPTNREIHFORNGASUAMISWZJJVMNIORDGBJEJAECTOCGOMLBAQEIYAVDEFZPJCWLUCSJLZXWQ");

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
    msg.setTimeStamp(0.719024888899017);
    msg.setSource(12926U);
    msg.setSourceEntity(134U);
    msg.setDestination(36472U);
    msg.setDestinationEntity(108U);
    msg.sessid = 3904567593U;
    msg.messages.assign("KILKHPFIZDRXRIAWYLWYLLQWANCUBWLAIXYBNOBFKNCRZUBMPDRHEDCFGEAXOKOQOJZYWI");

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
    msg.setTimeStamp(0.65912378525086);
    msg.setSource(53103U);
    msg.setSourceEntity(120U);
    msg.setDestination(43113U);
    msg.setDestinationEntity(149U);
    msg.sessid = 1203322161U;
    msg.messages.assign("VGQUZWAISTELZQGKRLRRDEVWYOAMHPDVJLBYYRFKIGXJURZSQQBSCHBULAJRVWEMNBKHEIKDHEYNMGXLNKNZG");

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
    msg.setTimeStamp(0.5414022197861046);
    msg.setSource(794U);
    msg.setSourceEntity(66U);
    msg.setDestination(54652U);
    msg.setDestinationEntity(5U);
    msg.sessid = 2678555278U;

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
    msg.setTimeStamp(0.8462377927282483);
    msg.setSource(22562U);
    msg.setSourceEntity(110U);
    msg.setDestination(51701U);
    msg.setDestinationEntity(216U);
    msg.sessid = 3468629110U;

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
    msg.setTimeStamp(0.003389889639687893);
    msg.setSource(37851U);
    msg.setSourceEntity(72U);
    msg.setDestination(63083U);
    msg.setDestinationEntity(80U);
    msg.sessid = 645364403U;

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
    msg.setTimeStamp(0.47077002642769483);
    msg.setSource(60679U);
    msg.setSourceEntity(91U);
    msg.setDestination(38722U);
    msg.setDestinationEntity(113U);
    msg.sessid = 3120577477U;
    msg.status = 240U;

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
    msg.setTimeStamp(0.6008098766657691);
    msg.setSource(50226U);
    msg.setSourceEntity(6U);
    msg.setDestination(2673U);
    msg.setDestinationEntity(69U);
    msg.sessid = 4012047726U;
    msg.status = 143U;

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
    msg.setTimeStamp(0.8649019555273453);
    msg.setSource(24999U);
    msg.setSourceEntity(236U);
    msg.setDestination(43678U);
    msg.setDestinationEntity(241U);
    msg.sessid = 567172977U;
    msg.status = 179U;

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
    msg.setTimeStamp(0.4062486745238215);
    msg.setSource(20730U);
    msg.setSourceEntity(49U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(91U);
    msg.name.assign("XFGOXQZTICDGMURMPAQXJVXBJSILFNZNQEBGFIFQJFQHNLPOQTJAGWHYHAMXVRWOVYWRTPCJDLTXFOHZLIWACFZZMEIDKECVABLREBWVOEPRUJKDFEYSYYVJANGFDLXUJGUZBLIKJRMKVHNESGMPOQFHUZQDKKABTSZDUKMOCRTKRBBMCWEHSLYDPSWDNCLMKRPTUKIHDEQJOCXNASYPLHX");

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
    msg.setTimeStamp(0.5743443823399329);
    msg.setSource(60404U);
    msg.setSourceEntity(206U);
    msg.setDestination(25536U);
    msg.setDestinationEntity(224U);
    msg.name.assign("UOFNNFDDXUSTPJLPGBWBXWCNMSQNGQWOQPXZBSGYUTEZUOSWECIZLBYWLCMWIHAOZPWEYIXXNWJZDHQSXQGKLNCAETYHZTAAJHINKOVUECGRYLFMBAUKYGNAFGHPENFERXQWJVIMKHMVYGGMVDVKDRPZNLLASDVKQKDPRUJAHVRKGVECAXFMBQ");

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
    msg.setTimeStamp(0.9881292825583793);
    msg.setSource(4631U);
    msg.setSourceEntity(60U);
    msg.setDestination(17007U);
    msg.setDestinationEntity(241U);
    msg.name.assign("HKAHBYAGGWKLHIBLJKOLPMRIKDCQNWFNOJCNZATJZDWBEUPSRUWECAXHUMFUOSMYSPVVZNSYLSCBVCREXODYDOBKSYPCQXEXRMYEACTUATIGYEPFZDWOOAPJOKTFULSYTWXNQZIZYWGBNAIBLJMTIRHMLVPXRGTOBEQLCDXWZF");

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
    msg.setTimeStamp(0.543211892079702);
    msg.setSource(46389U);
    msg.setSourceEntity(115U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(202U);
    msg.name.assign("VVVDDJNURATTITYPIVEXHOWZGPNEPFLKCFNYMQZRZHNWZPAPOQUJNSFFGACNBUGULFAXCZMIFSIOIEAUKIUTASLFUPBVJYZFKZXHSYXOQSEQRARNOLVQCUDLKMOIEENOJTZJLWG");

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
    msg.setTimeStamp(0.09710921567053377);
    msg.setSource(56089U);
    msg.setSourceEntity(134U);
    msg.setDestination(26887U);
    msg.setDestinationEntity(176U);
    msg.name.assign("QGUEDPZIWFFEQDOWXMCWSECJSYFGHYBIDVUINLTMKFIRHVYUTZEWTFSUHIVNEIXDVNXKLOTRWWCGKKNMCVOMNAHBSIGPLYUFAAMTZABXZBUJCNLOVFDNPMFXUJULAXRJYPBHEMPYTZXDSPGQWTYLORHQOTUQTCBSOASJEOGLNAJLMBVZSEYBQAAHVRGRSDCRDXMQOCPEYUGKFGQKYHKGTJWDLNXKHMSRZZQJEBPRWVPI");

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
    msg.setTimeStamp(0.015702594968455608);
    msg.setSource(9488U);
    msg.setSourceEntity(91U);
    msg.setDestination(33837U);
    msg.setDestinationEntity(54U);
    msg.name.assign("AFNPCMIOLXLHBQHHXCDEFORGFWUJXVOXNKFIPSMDSSFULVWYXAGTSGBMPAWBJGGGDMFXYIKNWZTADDPCILHKWYQELDOITTZVZCUMULJWVCQBZLQYADNONFHENETZWCSYWAHCK");

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
    msg.setTimeStamp(0.41238681218164575);
    msg.setSource(11805U);
    msg.setSourceEntity(240U);
    msg.setDestination(13978U);
    msg.setDestinationEntity(168U);
    msg.type = 213U;

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
    msg.setTimeStamp(0.4391720247139419);
    msg.setSource(59774U);
    msg.setSourceEntity(46U);
    msg.setDestination(51101U);
    msg.setDestinationEntity(85U);
    msg.type = 230U;

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
    msg.setTimeStamp(0.7873304471197123);
    msg.setSource(24633U);
    msg.setSourceEntity(245U);
    msg.setDestination(1454U);
    msg.setDestinationEntity(117U);
    msg.type = 94U;

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

  return test.getReturnValue();
}
