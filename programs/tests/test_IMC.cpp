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
// IMC XML MD5: 7e8fd14efb895736dc97c146aea2e6dc                            *
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
    msg.setTimeStamp(0.8424609705831011);
    msg.setSource(22637U);
    msg.setSourceEntity(240U);
    msg.setDestination(29993U);
    msg.setDestinationEntity(10U);
    msg.state = 229U;
    msg.flags = 6U;
    msg.description.assign("LXJHAKZPYNOSQDYELMQTIGVGENOTNBFLIITHPKKLAOKIJLWPAAQFRNWOWRMZREBZTTLVLLSIEAVBMKFCUSQNUDPYTQDYHEUGCBNDQYCTPPLHJAJZMZOWRYXLBYZXEXSQDHFPXKAFPCYOXKNVXVMOAEWSOYSCJQMUGABCRCS");

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
    msg.setTimeStamp(0.616478642121048);
    msg.setSource(30609U);
    msg.setSourceEntity(129U);
    msg.setDestination(64590U);
    msg.setDestinationEntity(218U);
    msg.state = 110U;
    msg.flags = 37U;
    msg.description.assign("YZKAGDQLTUQTYPRTOZPTLBAZYAAMZJQGQDGLBOBUVWEBJQUQIBOCCPNRPE");

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
    msg.setTimeStamp(0.061582806798501255);
    msg.setSource(19233U);
    msg.setSourceEntity(69U);
    msg.setDestination(22122U);
    msg.setDestinationEntity(86U);
    msg.state = 227U;
    msg.flags = 18U;
    msg.description.assign("JDJSBBUUVDOHWWARPWMPBIBAQHNOUCLSOFKILWUNCAQKGHKKQLDDICTANMITQBNRAUMPQPGXUNSRLSZNXEXSYJHFWBSSYJYTOYQDXZVX");

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
    msg.setTimeStamp(0.6430904490374538);
    msg.setSource(45329U);
    msg.setSourceEntity(127U);
    msg.setDestination(36732U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.23652140067109706);
    msg.setSource(13899U);
    msg.setSourceEntity(153U);
    msg.setDestination(28751U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.668938308521597);
    msg.setSource(48129U);
    msg.setSourceEntity(175U);
    msg.setDestination(51672U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.8767837240918228);
    msg.setSource(2862U);
    msg.setSourceEntity(143U);
    msg.setDestination(51222U);
    msg.setDestinationEntity(75U);
    msg.id = 212U;
    msg.label.assign("KNXXVOZGHHXYLVQFSWSRMNQLASTUIJZIUWURAKUSGNKXCLLBWECHOYOQZKVLACTGANQZAGVOCWIUERMOQTFDHLVJIQGVBKZLNZHKXPWJDQIJISKUJSGXOBRQJYWNHPRTHCJCTFBUPPHIRBQMUDPYDOCZRAOYVXBWRSPPGCEPZENHDKMCBGTSEVBEZKZWLDAMVXYJQMIYUTARBLKGYPLYNIJTFBFJDHOXMEFGPEFSDMSTUDNNFEDMAIVWOWXRF");
    msg.component.assign("REMPFVWFQHNDFNTPYSMWMGULEZHTTFHLZGMNGFB");
    msg.act_time = 1493U;
    msg.deact_time = 1659U;

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
    msg.setTimeStamp(0.04528698508521933);
    msg.setSource(44158U);
    msg.setSourceEntity(122U);
    msg.setDestination(46134U);
    msg.setDestinationEntity(145U);
    msg.id = 122U;
    msg.label.assign("QENEFWYKMWUFOFTAGCSGSOYLXZZYBKYDYDNACWSHFAGFREGRZBIIUIOOPNOMHJGUMHNVNRDCAIDFRCQXUDEQCKVFKHQXUEBZYJRVNMVBJUDBKMZELEEPMWJGRSHXVMIVRKXHGXQOWGPSQAXVRYOWKHKRPPJAIKMPDPITTNCAQFZNPSCJAWVWPYWSTSZHDCAETQFZLKXCLDRDBMOTOLT");
    msg.component.assign("DHXFICMUIIKTUAZYARGNZKLFFDTWKONXWYIPFSBQNEEBYPUOGMDMZLZQFJLAPMJGUHCZVTEDWZJDAATTHHVRMOIBVVXNXBIGQSYCLYRWJKIVVSXOOVOYJEKQORHRKLS");
    msg.act_time = 57666U;
    msg.deact_time = 38168U;

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
    msg.setTimeStamp(0.18386091452718145);
    msg.setSource(63783U);
    msg.setSourceEntity(154U);
    msg.setDestination(46234U);
    msg.setDestinationEntity(18U);
    msg.id = 19U;
    msg.label.assign("YTXHRGHIVHWMKUPXBZQDOEYOERFLIKVRUMCOMTXRMUAISZSDMFDFRWJLKBTSCQKRKIOUGXXCJ");
    msg.component.assign("WJHGTAKEMBPSGPUXNPZXMQWJCCBDDDCCACMRQNADYHPZBISNQSYBTBKZQLRJOVPJIVOESILYOSIRKYSWAEMYQTLUDRXEFLUSNZAFRUVGPWVWZECQRCHFPTYBIVVLMBHHDHVMUHAEJZJXVKGOBPNFDOMMJDNXTHFGBLYORWGUAIWHPJFNAGKMTFILWCRXQOZXAMOEZR");
    msg.act_time = 26800U;
    msg.deact_time = 19093U;

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
    msg.setTimeStamp(0.07772215903202251);
    msg.setSource(63558U);
    msg.setSourceEntity(8U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(102U);
    msg.id = 142U;

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
    msg.setTimeStamp(0.5843174167365986);
    msg.setSource(42135U);
    msg.setSourceEntity(144U);
    msg.setDestination(15123U);
    msg.setDestinationEntity(63U);
    msg.id = 238U;

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
    msg.setTimeStamp(0.1958374534832905);
    msg.setSource(44750U);
    msg.setSourceEntity(253U);
    msg.setDestination(32004U);
    msg.setDestinationEntity(25U);
    msg.id = 124U;

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
    msg.setTimeStamp(0.06453293459692877);
    msg.setSource(24678U);
    msg.setSourceEntity(172U);
    msg.setDestination(9237U);
    msg.setDestinationEntity(61U);
    msg.op = 197U;
    msg.list.assign("QELXVRJYQACGAIBTYWAFNTPOCSFVFYFIJDEVHJHDBPWMEZXADCDTPVMJSKJHMZANTNGNKUFWLQPJMFLJOOJDIPDOXGPULXSQANZREZZZIBLWWQMOEUGBIW");

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
    msg.setTimeStamp(0.10523874903371877);
    msg.setSource(5039U);
    msg.setSourceEntity(10U);
    msg.setDestination(44748U);
    msg.setDestinationEntity(162U);
    msg.op = 59U;
    msg.list.assign("GFEXDSVXCRIZBCJQYEYQRNANSSRLEX");

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
    msg.setTimeStamp(0.18453806204683865);
    msg.setSource(26901U);
    msg.setSourceEntity(216U);
    msg.setDestination(42711U);
    msg.setDestinationEntity(25U);
    msg.op = 101U;
    msg.list.assign("VBFXRZQJQIIMJIHSFVJWEEZHBKELBXOSAEKGCHYJCVIFAGDBEFOTGSDLPAFPPNZVGOFUSIAPCAWINXCWATWZ");

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
    msg.setTimeStamp(0.5726013352298897);
    msg.setSource(38157U);
    msg.setSourceEntity(233U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(8U);
    msg.value = 190U;

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
    msg.setTimeStamp(0.3715088407300756);
    msg.setSource(38007U);
    msg.setSourceEntity(192U);
    msg.setDestination(26418U);
    msg.setDestinationEntity(112U);
    msg.value = 102U;

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
    msg.setTimeStamp(0.08000581260453077);
    msg.setSource(12366U);
    msg.setSourceEntity(138U);
    msg.setDestination(22759U);
    msg.setDestinationEntity(42U);
    msg.value = 98U;

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
    msg.setTimeStamp(0.8325798378450657);
    msg.setSource(33762U);
    msg.setSourceEntity(77U);
    msg.setDestination(46337U);
    msg.setDestinationEntity(159U);
    msg.consumer.assign("AYLXTTRAMHKONVABZGFPFNHUIYRDIMZAVETCJGSHLTLXIWTTZQAYTXOWJMHISWVWDPVBFTM");
    msg.message_id = 27358U;

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
    msg.setTimeStamp(0.8308973848340403);
    msg.setSource(46318U);
    msg.setSourceEntity(177U);
    msg.setDestination(32013U);
    msg.setDestinationEntity(15U);
    msg.consumer.assign("RCOTLCJVDVFRSNPJJOCTMIYSIWYMWSEAVLZQCWELMIYEHDDNQZHCAGLKGYLWSLXAFTKGWHUZBFQGKYBVSVVMLHIOATQKMHAWYBQRXVRZHSZFMQTQNKTQFEFCKOXPPKAYIUBLAEROPHBJTUPLHFBPGNUV");
    msg.message_id = 26330U;

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
    msg.setTimeStamp(0.09409873969730798);
    msg.setSource(6632U);
    msg.setSourceEntity(119U);
    msg.setDestination(28206U);
    msg.setDestinationEntity(139U);
    msg.consumer.assign("BRBIQWVLSIUVPTRAMGXFRIHZFJWCPFRYXWDFUOOKGWVUXBUNTFTAQACEMRYMJCYYQFVXOKKYZXJUKTWEBMLFEZSDGXPDALSCWQTXBOBDSOQTZNKRUUSBWAOSVIIRQMZRZGJMDEBYGIHKSQLHYMPIZHXJKJVADNKENZRVUUWGEHLQWT");
    msg.message_id = 16603U;

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
    msg.setTimeStamp(0.2735419733229958);
    msg.setSource(8714U);
    msg.setSourceEntity(80U);
    msg.setDestination(24132U);
    msg.setDestinationEntity(88U);
    msg.type = 59U;

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
    msg.setTimeStamp(0.539250688086818);
    msg.setSource(5931U);
    msg.setSourceEntity(169U);
    msg.setDestination(25987U);
    msg.setDestinationEntity(249U);
    msg.type = 157U;

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
    msg.setTimeStamp(0.8185238357886846);
    msg.setSource(36435U);
    msg.setSourceEntity(164U);
    msg.setDestination(3139U);
    msg.setDestinationEntity(83U);
    msg.type = 162U;

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
    msg.setTimeStamp(0.40643896886362074);
    msg.setSource(52840U);
    msg.setSourceEntity(215U);
    msg.setDestination(41904U);
    msg.setDestinationEntity(183U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.13028630317627876);
    msg.setSource(51814U);
    msg.setSourceEntity(11U);
    msg.setDestination(29434U);
    msg.setDestinationEntity(239U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.1911740844028782);
    msg.setSource(54060U);
    msg.setSourceEntity(114U);
    msg.setDestination(5184U);
    msg.setDestinationEntity(249U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.8781302924374976);
    msg.setSource(52578U);
    msg.setSourceEntity(215U);
    msg.setDestination(39709U);
    msg.setDestinationEntity(149U);
    msg.total_steps = 6U;
    msg.step_number = 52U;
    msg.step.assign("LEPWCWCORSVNHZORBLYAAXNCINAKFRDKAUYNYGILPNPSLVSNWPZTGBQGJIHODFEWXCVEMRCKTKZEUVGXGFNQMXJEGVQTLKSZJUKHILFZANFLCJZKFRXVRGYYXXHJEZDGJVCLWPBWIQJMJYHUOGRPMQOQBOUUKWSIFJMBRXQDVYHKPQYMTNWYHLXMFAAKCRDZPVFAOCTAPDAHUOETVBWSTUMZDWE");
    msg.flags = 86U;

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
    msg.setTimeStamp(0.9166616795350935);
    msg.setSource(47990U);
    msg.setSourceEntity(141U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(40U);
    msg.total_steps = 19U;
    msg.step_number = 151U;
    msg.step.assign("PKVLJXRFEYMXNBUSJUCGELNZXXHDPUIDJGRMHGQFXFPWETJONVMWZSMGEVPVTGRAUQHJUFNOBWCMZIAGJHVADIEEJGNLYAJBPWZFMSBGFZQIXOLRVUEZWFFRSIOIUVORQNAELXNAZQHSYTTCBJYSRKTHTWGLWHWCGVIDKPACTPWYKACYBQOMQASLI");
    msg.flags = 233U;

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
    msg.setTimeStamp(0.3562167297035852);
    msg.setSource(24294U);
    msg.setSourceEntity(114U);
    msg.setDestination(19391U);
    msg.setDestinationEntity(57U);
    msg.total_steps = 83U;
    msg.step_number = 147U;
    msg.step.assign("CVPUHZFYSIHACAOXSTJKWFAWYVRWSICKJEBDZMXXTFELCNALFSLMLKEWABNOJNZFYJRXEQCWIBXKJYOQJXQPJEKXQHTAPCLRDHQIUTHNRNPMQTNHAGIKYLHSPIPOLJDSHBGEQYYPVFORZUFTPENTUCRZFERXGWWOKYAZKGBQHGSSUGWRTDVDKCWDAIMKQVGNMVDOBVOU");
    msg.flags = 150U;

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
    msg.setTimeStamp(0.082707363941243);
    msg.setSource(57028U);
    msg.setSourceEntity(202U);
    msg.setDestination(36832U);
    msg.setDestinationEntity(215U);
    msg.state = 213U;
    msg.error.assign("DAFUCMKMORSRVWGANOCEIBDJEHPOPNFJAARYQQQPGUKNTWHERQFLFLIJJWFTYGFWDMXZJBRUBFNVEXWCOGKGMIOVDSZVJMJLLCVEPOLTAPXFIZGMXUGHQINDZQQGPUEHQOVZPRDSY");

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
    msg.setTimeStamp(0.5327311247361873);
    msg.setSource(4352U);
    msg.setSourceEntity(98U);
    msg.setDestination(22465U);
    msg.setDestinationEntity(3U);
    msg.state = 78U;
    msg.error.assign("TTRBWQNZPLVXIWSCZTEAUNRSYDHYWHPQVNRTBPUFDSSNLQXBHIOGIMKYGXZFHFLLOSGIWNEIRHJTMSUITXVEZVFBECSUUPAYZATRTFLKOBDDKUVQCYFDDBMVFERMZHEJPPRXHAAOJNPWMWWECEKSPCVQXNRMKJQIGQJCMTKNRJULFVGYLWAQYLZBZDXJXNUKYAXBDXFSYEAQMCOBWBOGJFJDLROYHAIHZWPGUIPOMDKIKECTVSUML");

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
    msg.setTimeStamp(0.6799906035886008);
    msg.setSource(9271U);
    msg.setSourceEntity(165U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(180U);
    msg.state = 167U;
    msg.error.assign("LGELKOEZPNZQWIHMWTOUSXNAQCTNJTCGCDKXQSCHHJBVOOYBVJBUMFYQIHBFFQDYJUKKVZFZKWFVPRLOMZMEFLVNSLQSWWJWTPXYIOOP");

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
    msg.setTimeStamp(0.680382445829667);
    msg.setSource(63019U);
    msg.setSourceEntity(71U);
    msg.setDestination(44327U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.9784810592367172);
    msg.setSource(33238U);
    msg.setSourceEntity(178U);
    msg.setDestination(8768U);
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
    msg.setTimeStamp(0.48321893723415843);
    msg.setSource(5475U);
    msg.setSourceEntity(182U);
    msg.setDestination(12403U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.5806325766233492);
    msg.setSource(7222U);
    msg.setSourceEntity(72U);
    msg.setDestination(34461U);
    msg.setDestinationEntity(171U);
    msg.op = 244U;
    msg.speed_min = 0.2266376736859942;
    msg.speed_max = 0.3021113899877864;
    msg.long_accel = 0.30498900134499785;
    msg.alt_max_msl = 0.22233122991232568;
    msg.dive_fraction_max = 0.15582413999395406;
    msg.climb_fraction_max = 0.5268647255712893;
    msg.bank_max = 0.346276169968302;
    msg.p_max = 0.6620508347590626;
    msg.pitch_min = 0.9711991716795266;
    msg.pitch_max = 0.005860248547190139;
    msg.q_max = 0.7337434650080102;
    msg.g_min = 0.9414065732793151;
    msg.g_max = 0.9982838550827581;
    msg.g_lat_max = 0.22612727037681302;
    msg.rpm_min = 0.8049240879234301;
    msg.rpm_max = 0.7045022512112495;
    msg.rpm_rate_max = 0.5776235013584433;

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
    msg.setTimeStamp(0.22552603609813315);
    msg.setSource(61865U);
    msg.setSourceEntity(103U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(33U);
    msg.op = 162U;
    msg.speed_min = 0.15885213841451507;
    msg.speed_max = 0.9531799735430799;
    msg.long_accel = 0.04624632040462928;
    msg.alt_max_msl = 0.9965299709663166;
    msg.dive_fraction_max = 0.4349863780682913;
    msg.climb_fraction_max = 0.0020666288921856735;
    msg.bank_max = 0.7829557586479292;
    msg.p_max = 0.54118884291193;
    msg.pitch_min = 0.11656116212015788;
    msg.pitch_max = 0.3064342801022497;
    msg.q_max = 0.691434227222353;
    msg.g_min = 0.7486078893011923;
    msg.g_max = 0.416699989639693;
    msg.g_lat_max = 0.5302529848980682;
    msg.rpm_min = 0.1050313331862398;
    msg.rpm_max = 0.23362011143912786;
    msg.rpm_rate_max = 0.7684005925108088;

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
    msg.setTimeStamp(0.2620952199270482);
    msg.setSource(42770U);
    msg.setSourceEntity(9U);
    msg.setDestination(63934U);
    msg.setDestinationEntity(47U);
    msg.op = 158U;
    msg.speed_min = 0.24215203156943;
    msg.speed_max = 0.4147652767451768;
    msg.long_accel = 0.350089408267651;
    msg.alt_max_msl = 0.3797786715639697;
    msg.dive_fraction_max = 0.3923213470093444;
    msg.climb_fraction_max = 0.3686846455572854;
    msg.bank_max = 0.20217577094907302;
    msg.p_max = 0.8062690156306058;
    msg.pitch_min = 0.052049627215493555;
    msg.pitch_max = 0.9413157870269121;
    msg.q_max = 0.22855325181943176;
    msg.g_min = 0.7925047819067478;
    msg.g_max = 0.5710601985639377;
    msg.g_lat_max = 0.5088349176716077;
    msg.rpm_min = 0.9590287522384008;
    msg.rpm_max = 0.571526387681633;
    msg.rpm_rate_max = 0.11043178516176855;

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
    msg.setTimeStamp(0.8429947904554066);
    msg.setSource(37016U);
    msg.setSourceEntity(158U);
    msg.setDestination(54333U);
    msg.setDestinationEntity(76U);
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.6967000164961636;
    tmp_msg_0.lon = 0.1280876069111051;
    tmp_msg_0.z = 0.6327988301859251;
    tmp_msg_0.z_units = 72U;
    tmp_msg_0.radius = 0.6795053106198057;
    tmp_msg_0.duration = 24541U;
    tmp_msg_0.speed = 0.4465326456544473;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.custom.assign("HVJVSVUUPIQHNXFZLDLQFJDAXBQDCXBQBMDLLLTIJVYIDMNTCBCKXXPRGNBUGNTXHIPNIQHMZYSTKWWWQSEUMZFVAGQAMZJJKRCZCLIZNDHWZPQZRSEZSLETPSAMBFRKKTWPTRMGALEIRRYFKIYMCFCGMHGOPAJMODVBDCBWWFPEYHUFQTKOEUEJAKVESOYJXSOCVXUQYJHSWRIWBNN");
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
    msg.setTimeStamp(0.7714761965059247);
    msg.setSource(56351U);
    msg.setSourceEntity(109U);
    msg.setDestination(5848U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.19993320931336322);
    msg.setSource(2426U);
    msg.setSourceEntity(29U);
    msg.setDestination(55279U);
    msg.setDestinationEntity(153U);
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("UEIGOFIVLVIMPUWWIKCJVXLQDCVCSSIPZYZQZDLAWWLYXRTEYCJXOJVWYQCOTIQNQYAIDYRBAHBDPVCSPFBUMDTMMOQATKPMXPZCPUBWGWZUFMKREPAUXHXTAHHLHDAOZTWQGT");
    tmp_msg_0.value = 178U;
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
    msg.setTimeStamp(0.3986894334269929);
    msg.setSource(52600U);
    msg.setSourceEntity(23U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5138437623365651;

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
    msg.setTimeStamp(0.013698940972654117);
    msg.setSource(9604U);
    msg.setSourceEntity(224U);
    msg.setDestination(28475U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6106005858223486;

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
    msg.setTimeStamp(0.44035820435737194);
    msg.setSource(51995U);
    msg.setSourceEntity(9U);
    msg.setDestination(43244U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5395326996119622;

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
    msg.setTimeStamp(0.28030514706978016);
    msg.setSource(4246U);
    msg.setSourceEntity(13U);
    msg.setDestination(28164U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.43119050303625606;
    msg.lon = 0.7777492476305113;
    msg.height = 0.54044898514744;
    msg.x = 0.38352894824765293;
    msg.y = 0.1799600794071845;
    msg.z = 0.5995619564430327;
    msg.phi = 0.40467823751826326;
    msg.theta = 0.2924530420625907;
    msg.psi = 0.9560569147350684;
    msg.u = 0.1746887227705679;
    msg.v = 0.6681988848867937;
    msg.w = 0.3734000636756136;
    msg.p = 0.30920645160263616;
    msg.q = 0.35915908297389176;
    msg.r = 0.5839022789458657;
    msg.svx = 0.11756736923696931;
    msg.svy = 0.61754110923978;
    msg.svz = 0.8407771460386586;

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
    msg.setTimeStamp(0.9160169236408792);
    msg.setSource(3626U);
    msg.setSourceEntity(89U);
    msg.setDestination(53610U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.46857336464759236;
    msg.lon = 0.38257058684037504;
    msg.height = 0.12057853835730381;
    msg.x = 0.5742241405249903;
    msg.y = 0.6678644241182686;
    msg.z = 0.8604051845708807;
    msg.phi = 0.7366025761120484;
    msg.theta = 0.8061580942728208;
    msg.psi = 0.6430081690155137;
    msg.u = 0.8590906593801904;
    msg.v = 0.6019581291068187;
    msg.w = 0.42100457912133826;
    msg.p = 0.37059455161646204;
    msg.q = 0.6216079630956546;
    msg.r = 0.26065325305971454;
    msg.svx = 0.7411621816639705;
    msg.svy = 0.2537572321614572;
    msg.svz = 0.5070544639099709;

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
    msg.setTimeStamp(0.19694125577000043);
    msg.setSource(24415U);
    msg.setSourceEntity(61U);
    msg.setDestination(57746U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.5123536136070915;
    msg.lon = 0.4979836452133538;
    msg.height = 0.7130637662850048;
    msg.x = 0.6638756822346958;
    msg.y = 0.9651952689269551;
    msg.z = 0.20386874334686966;
    msg.phi = 0.5695397120489885;
    msg.theta = 0.27068809695637563;
    msg.psi = 0.539975427478755;
    msg.u = 0.257784870087472;
    msg.v = 0.33590596929025107;
    msg.w = 0.7883491307442749;
    msg.p = 0.3334932184850521;
    msg.q = 0.4562645129469971;
    msg.r = 0.37503226273870394;
    msg.svx = 0.7155777993567617;
    msg.svy = 0.1092240538597411;
    msg.svz = 0.32276571336366267;

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
    msg.setTimeStamp(0.22418333047183414);
    msg.setSource(16524U);
    msg.setSourceEntity(89U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(227U);
    msg.op = 86U;
    msg.entities.assign("JLAJPKSYCWWDGIDGBEFQFOYAJUTJNMZGMOURCEDEWBRELWUTGVUTSDXSBZTNQXXCHSJVCCNYXXODABROGDHRFGTQKQXDNRYTKVYLOLUEUKTIIDPEFZMBMRMFCKHQZSLXRAJAKWFEVHFZXNPUOFBYHNKEICQYJXCGSJFMIKVLBDWDJHNRMZVH");

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
    msg.setTimeStamp(0.4536818724585244);
    msg.setSource(25773U);
    msg.setSourceEntity(61U);
    msg.setDestination(56532U);
    msg.setDestinationEntity(34U);
    msg.op = 60U;
    msg.entities.assign("XKOQDZTMWTBIAESYLOZXZCSBKGIKFCFDYQHNOGEV");

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
    msg.setTimeStamp(0.2052301163195902);
    msg.setSource(36912U);
    msg.setSourceEntity(164U);
    msg.setDestination(45926U);
    msg.setDestinationEntity(155U);
    msg.op = 14U;
    msg.entities.assign("WLNNFHIIRSBTDSIMEDLAVLFJDIMCGLKVOPHSXONZFDYCPFTLERJXBZKHMWDFHXZVRYLCJOMKFUQBWNSGYUQKLBCCVHCCVAQEYWWZSTIPGDOXEXUYJFMQTOGDSMPGHZXJROKVSHVWJSJZHLTDNFAIQETBYHRAMNNKBSPEAPJUGYZKDOTRMBWQP");

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
    msg.setTimeStamp(0.6558674955382034);
    msg.setSource(46600U);
    msg.setSourceEntity(232U);
    msg.setDestination(40075U);
    msg.setDestinationEntity(14U);
    msg.type = 94U;
    msg.speed = 20018U;
    const signed char tmp_msg_0[] = {-117, -43, -78, 94, -15, 97, 97, 11, -9, -52, -11, 94, -75, -118, 92, -18, 13, -102, 30, 0, 73, -99, 27, -64, -6, 12, 36, -108, 126, 49, -71, 38, -14, -99, 113, -76, 107, -96, -50, 19, -52, -88, -23, -98, -73, 6, 0, 90, -11, 96, 102, 54, 88, -35, 120, 48, 126, -105, 42, -115, 9, -65, 123, -17, -82, -124, -11, 29, -101, 123, -84, 9, -47, -27, 21, -97, -121, 33, 68, -16, 66, -49, 11, 48, 40, 60, 105, -31, -57, -7, 67, -35, -103, -43, -46, 73, -11, -87, 119, -121, -4, 49, -62, 71, 109, -56, 59, -119, -73, -9, 107, 119, 75, -103, 56, -14, 103, -2, 27, 104, 1, 47, -26, 56, -24, -18, 97, 105, 61, 32, 27, 16, -14, 16, 99, 53, -36, 10, -80, -27, -118, -12, -22, -94, 31, -2, 92, 19, -52, 94, 96, -89, 26, 115, -10, 106, -7, -124, 9, 64, 22, 113, -6, 33, 108, -68, -29, -23, 114, -29, 78, 24, 84};
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
    msg.setTimeStamp(0.694883034179218);
    msg.setSource(23069U);
    msg.setSourceEntity(183U);
    msg.setDestination(24462U);
    msg.setDestinationEntity(133U);
    msg.type = 34U;
    msg.speed = 2443U;
    const signed char tmp_msg_0[] = {110, -105, -121, -8, -69, -71, 117, 47, -90, 29, -68, -66, -103, 107, 120};
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
    msg.setTimeStamp(0.4900903683733524);
    msg.setSource(51842U);
    msg.setSourceEntity(20U);
    msg.setDestination(32026U);
    msg.setDestinationEntity(67U);
    msg.type = 206U;
    msg.speed = 49136U;
    const signed char tmp_msg_0[] = {0, -35, -123, 123, 34, -62, -127, 72, -46, 12, 64, -30, 77, 81, 126, -60, -24, -58, -69, 39, 115, -59, -107, 59, 111, 106, -119, -56, 83, -48, -82, 47, -106, -75, 44, -47, -40, 102, -62, 59, 6, -19, -71, -98, -56, -92, 110, 58, 47, 97, 38, 112, 110, 1, -32, 83, -21, 125, 88, -31, -103, 13, -44, -49, 73, 115, -68, -31, -23, -101, -36, 26, 54, 43, -46, -70, -34, -128, 86, -128, 4, 70, 7, 4, -92, 12, 99, -4, -31, 32, -123, 32, -23, -109, 19, 50, -35, -20, -26, 90, 23, -120, 14, -56, -80, 100, 61, -27, -78, 98, -41, -2, 97, 80, -90, -49, 71, -6, -10, -101, 89, -113, -49, -52, 57, 76, 57, 91, -59, 32, -96, -43, -22, -39, -61, -73, 25, -68, 67, -87, 84, -32, 98, -94, 108, -8, -105, -4, -27, -35, -70, -62, 36, -46, -102, -84, -49, 122, -41, 8, 77, 22, 46, -124, -51, 84, 55, 91, -28, -66, 31, 124, -47};
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
    msg.setTimeStamp(0.5101942303806777);
    msg.setSource(52331U);
    msg.setSourceEntity(224U);
    msg.setDestination(7472U);
    msg.setDestinationEntity(31U);
    msg.op = 213U;
    msg.tas2acc_pgain = 0.501107747490567;
    msg.bank2p_pgain = 0.8382657711735664;

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
    msg.setTimeStamp(0.18693510594816076);
    msg.setSource(28671U);
    msg.setSourceEntity(15U);
    msg.setDestination(52430U);
    msg.setDestinationEntity(211U);
    msg.op = 96U;
    msg.tas2acc_pgain = 0.7845866352963495;
    msg.bank2p_pgain = 0.6415791661442752;

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
    msg.setTimeStamp(0.19475701221264075);
    msg.setSource(62572U);
    msg.setSourceEntity(24U);
    msg.setDestination(13358U);
    msg.setDestinationEntity(248U);
    msg.op = 209U;
    msg.tas2acc_pgain = 0.4467581958861371;
    msg.bank2p_pgain = 0.35689512297027837;

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
    msg.setTimeStamp(0.8234717350504488);
    msg.setSource(43885U);
    msg.setSourceEntity(71U);
    msg.setDestination(60813U);
    msg.setDestinationEntity(181U);
    msg.available = 2253527019U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.8700200193571773);
    msg.setSource(42555U);
    msg.setSourceEntity(100U);
    msg.setDestination(42330U);
    msg.setDestinationEntity(79U);
    msg.available = 3839930041U;
    msg.value = 14U;

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
    msg.setTimeStamp(0.6078977775948066);
    msg.setSource(39374U);
    msg.setSourceEntity(80U);
    msg.setDestination(37872U);
    msg.setDestinationEntity(221U);
    msg.available = 2418373171U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.3669087549905239);
    msg.setSource(7608U);
    msg.setSourceEntity(161U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(174U);
    msg.op = 165U;
    msg.snapshot.assign("QJXQXPRBPFINAQTMZDWZSXFQBSVTHKIZEICDFPIPKMRBFCMIIDKFRKCAOSNJMRVPYTNDKOGXPJAWW");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("DTIZLABPUXYZROFPNNOAFWNBAIROQXLMBWLYYVITOJLCFJYXVUPUVKZONHWVN");
    tmp_msg_0.service_type = 123U;
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
    msg.setTimeStamp(0.35293263268837816);
    msg.setSource(6809U);
    msg.setSourceEntity(90U);
    msg.setDestination(43911U);
    msg.setDestinationEntity(48U);
    msg.op = 119U;
    msg.snapshot.assign("WJNMMMKKIFGUQLFPXFUDHJJRTDOLERYQJZLSXJXNLIQTUMDAJEDMGHQTYOQZENAABXYHFCCMESPEBDYNSBPFHLKIPJVPFEWKBTWYCGKUSVBREKUVDDHGPNLAIZYTTIAXSZJVHESWRMSXROGQGOMNSFAOUZOVAHTCMAXZQPHGNGJXVPCEQODCFKRSWKUTGKXIYLRLHYKYNTWBEZYNROVCVVCUBLFDQBOWWHCUZZPLGRQSPVDOURZITIAMNBWC");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.3587128303489926;
    tmp_msg_0.sys_src = 56166U;
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
    msg.setTimeStamp(0.4192687931151693);
    msg.setSource(25825U);
    msg.setSourceEntity(0U);
    msg.setDestination(19578U);
    msg.setDestinationEntity(130U);
    msg.op = 94U;
    msg.snapshot.assign("ERMVDQTHHXQWMAIZHSCQJGBRUKCAPLWVNIJUFONMWIFKENDVBWSUSCTAVWJSOMJHNKQDIMTSWIVYFQHXXNSJOBAYVXTZYODJQZLPTCEEYCKLILCXTXEEXYRKYLKDPFZDINRDPJTDQEGEMMUOQMGAXHJVUCNLZBNOHVKGGOJKSYLPFAMRUUIBFOPBRPACOHOVVFRKDXQLBWPMATCUTWBZAUSK");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 11135U;
    tmp_msg_0.custom.assign("NKTJUQCVGWDBOUHOJTJPAQIHDOPNBTVOLFFGMEBBEKLQWRNPCMKFRESML");
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
    msg.setTimeStamp(0.8605561362921051);
    msg.setSource(21385U);
    msg.setSourceEntity(3U);
    msg.setDestination(45138U);
    msg.setDestinationEntity(188U);
    msg.op = 254U;
    msg.name.assign("FOTJKJZVCFTGVPZZXTRKVYXGDXWSEIXFHWQGOWORUHTMKFQDYJDUREBQLFOKRCTMOHLVAKVADTNYDUBURYEWX");

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
    msg.setTimeStamp(0.63925341572419);
    msg.setSource(51070U);
    msg.setSourceEntity(138U);
    msg.setDestination(60190U);
    msg.setDestinationEntity(124U);
    msg.op = 99U;
    msg.name.assign("UQSKBSTKJCRZKCWPUDLWCKEZSBAXSTDDXGAVJFOWIYMHXFPFITRTWMIOVVPQFKYHXYFILQFUMQQGBKPRQGPEANVLONCMJRDZPIYVLVZBMARLWATPLZTDCDFBRAYESZPXHLVXSIZVJLGCBEAWYBFITNAZHBZGESJSHCNNXVEGOSCUYZMO");

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
    msg.setTimeStamp(0.7701646913739917);
    msg.setSource(37313U);
    msg.setSourceEntity(53U);
    msg.setDestination(41039U);
    msg.setDestinationEntity(147U);
    msg.op = 84U;
    msg.name.assign("NVIRANUNWIBWSDYHFOCCAGAGJIMQJVUIHFWGAJJVOSVCRESLIJROVRTBTPNIYCEEVRPXLWJAXYIWUYLKSZYFYUNUWBLEKMZOFJWZSAGDTYPAPMZNOLLQCDXEKKFBRPVSDDPRQFKHLMNDPKTQMBSZRXSJMCZRQCBOQKLETFHZOEUOQDUKWZCTSFWUJMHETQCHBWBAIMFRBPZXYIYNDPNNOTLHGKVPOVHQHMEJUMYGHZUDGIGXGL");

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
    msg.setTimeStamp(0.3833601292129155);
    msg.setSource(4556U);
    msg.setSourceEntity(180U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(201U);
    msg.type = 150U;
    msg.htime = 0.21859224915887632;
    msg.context.assign("JWQHZFECQBLURDLKCQPINBIUDIBUXFNOHRUGBOFDFIHAJLKCQJGOTIDVIVSBXETVKOEQZNAXSYAOJZYWXQEHKCRQFNLSULPMGWAWMSKUWSYPOCSXGLYUKDIMBKR");
    msg.text.assign("AVLGVAKDXWMSDELRVAFINKZOAPBTT");

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
    msg.setTimeStamp(0.7598868604560025);
    msg.setSource(4270U);
    msg.setSourceEntity(34U);
    msg.setDestination(57148U);
    msg.setDestinationEntity(105U);
    msg.type = 52U;
    msg.htime = 0.7197341169748536;
    msg.context.assign("BQXZGGCJACNCFLBIFCOGTCKKRLGFKMBWTNAZ");
    msg.text.assign("KXANOEBUBSCCAZYMGYMXFVGOYQYKJAYLJIXXLKZZWCPZZIGXGQATFKJTWYXCBIOHYMDGRDUAPATGSSRGBCONJPHDWQLATXHSRNYPRGWKRORQHQHXWIENPVYECKQEQTDJVZSPLELDWKEUEXHVQFMPGLSUVVIOUTSLUDHVIZXTRFHAWRHNKFBQDFOLMCTTCP");

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
    msg.setTimeStamp(0.18085856813646128);
    msg.setSource(12787U);
    msg.setSourceEntity(35U);
    msg.setDestination(6499U);
    msg.setDestinationEntity(80U);
    msg.type = 125U;
    msg.htime = 0.5477852386027601;
    msg.context.assign("YLULMVNBPCLFPTVODDYPWLWIKGEKVOIOYVBSRTHUBDMBYZRDMLKONSAAJYXEHNHDNMBVAYTHATTTBMSJGSQIWGWGIIPUCYBTSOCYWKJMJVVWKQE");
    msg.text.assign("UUERMIUDQJSGGHHQCOYCABLVKIJIWTRQVOKAYLWSEEMPBONZYTNJHRMCQXLDPESNRBLRYHNPFZACGFSGLTEVUSELPVWRHTUXYGCYPGWMCSF");

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
    msg.setTimeStamp(0.5036876370984867);
    msg.setSource(11450U);
    msg.setSourceEntity(136U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(71U);
    msg.command = 63U;
    msg.htime = 0.8093127956166773;

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
    msg.setTimeStamp(0.619268768237246);
    msg.setSource(3261U);
    msg.setSourceEntity(138U);
    msg.setDestination(48434U);
    msg.setDestinationEntity(130U);
    msg.command = 72U;
    msg.htime = 0.781396553567298;

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
    msg.setTimeStamp(0.8531586552616405);
    msg.setSource(11394U);
    msg.setSourceEntity(20U);
    msg.setDestination(39148U);
    msg.setDestinationEntity(233U);
    msg.command = 12U;
    msg.htime = 0.8427788863582587;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 253U;
    tmp_msg_0.htime = 0.2896049933801771;
    tmp_msg_0.context.assign("DVUTZELRRJTCGLZLGSXKIQPRBPVIJLHHVNTCXACCAOWTBSWSKVPDYZAKPKPHOMMWVVEAQIWRXOBAINRTGWGGYDSTUJYBRECKKOWHKEUUQGHTKINGCEQDPFCZJULVUKGAFZASEVZFYDPOBJMFJSPQE");
    tmp_msg_0.text.assign("HURQWNIELBACENCNUOQFZLEVQANTKPPMSRTUWXDYJEKRUZGCWIGTVZSHGIPGKXGGNLFALXRMWBFTBJZDLZQHMVKNUBXFBJFRNXHUUJIQBVRURFZSKDAGXZMYFIJCCBBOU");
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
    msg.setTimeStamp(0.9530074741251672);
    msg.setSource(14645U);
    msg.setSourceEntity(69U);
    msg.setDestination(23593U);
    msg.setDestinationEntity(145U);
    msg.op = 55U;
    msg.file.assign("XPIFQAVCLLHCRAODLKNEGZKFGQHLALWFJUIJGRDMHBEQIDBQTJXMPGCAKWYGNLHXTVYNMWHHXZR");

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
    msg.setTimeStamp(0.8868567017138282);
    msg.setSource(40788U);
    msg.setSourceEntity(203U);
    msg.setDestination(54046U);
    msg.setDestinationEntity(114U);
    msg.op = 38U;
    msg.file.assign("FYTHLGORVYERSYOSNUZBZCZKYULLAYKAEQR");

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
    msg.setTimeStamp(0.6058812339934744);
    msg.setSource(18758U);
    msg.setSourceEntity(232U);
    msg.setDestination(2953U);
    msg.setDestinationEntity(170U);
    msg.op = 212U;
    msg.file.assign("AFXMKSGCUAUGYNYZPTDRYRDMIJQVWYQATHJKSMDIYIMPDQGTHTFCLNRTVFRUILVTLOJAJITBBDJGPPEFNXSEOXGCTNHFLNBGRXLDKXBPNBLOIVILDJMEYAHODZSCJHTQABFNYKUGUWUZKHWLMFZIPVDZAQFXSFLVWCPCRUWSIKVWARSKMQHOAGMUXDEZJWJYSQQRSBZMVPOGVVZCOOXCEKGMEKENWHOYBPWETBNCRILZHBEQRPHCAZQNKEX");

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
    msg.setTimeStamp(0.38120713207513135);
    msg.setSource(51412U);
    msg.setSourceEntity(115U);
    msg.setDestination(43528U);
    msg.setDestinationEntity(172U);
    msg.op = 11U;
    msg.clock = 0.32659285228716417;
    msg.tz = -52;

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
    msg.setTimeStamp(0.7579714682392757);
    msg.setSource(55178U);
    msg.setSourceEntity(84U);
    msg.setDestination(21493U);
    msg.setDestinationEntity(53U);
    msg.op = 63U;
    msg.clock = 0.3448250929735228;
    msg.tz = 88;

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
    msg.setTimeStamp(0.9317152813563236);
    msg.setSource(5107U);
    msg.setSourceEntity(32U);
    msg.setDestination(14999U);
    msg.setDestinationEntity(73U);
    msg.op = 209U;
    msg.clock = 0.20372523279787624;
    msg.tz = -40;

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
    msg.setTimeStamp(0.874098956122578);
    msg.setSource(54145U);
    msg.setSourceEntity(56U);
    msg.setDestination(20361U);
    msg.setDestinationEntity(15U);
    msg.conductivity = 0.8623679079159897;
    msg.temperature = 0.5045781738304731;
    msg.depth = 0.669989339567592;

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
    msg.setTimeStamp(0.5310506966793475);
    msg.setSource(62186U);
    msg.setSourceEntity(227U);
    msg.setDestination(11082U);
    msg.setDestinationEntity(15U);
    msg.conductivity = 0.23795789008841428;
    msg.temperature = 0.7494369714950377;
    msg.depth = 0.7481547736739339;

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
    msg.setTimeStamp(0.8227236028708353);
    msg.setSource(39206U);
    msg.setSourceEntity(33U);
    msg.setDestination(34939U);
    msg.setDestinationEntity(234U);
    msg.conductivity = 0.0011421576121060095;
    msg.temperature = 0.6110420551575111;
    msg.depth = 0.8045339783531189;

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
    msg.setTimeStamp(0.1382744748386775);
    msg.setSource(50217U);
    msg.setSourceEntity(34U);
    msg.setDestination(55632U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.3474639300793303;
    msg.roll = 18919U;
    msg.pitch = 7074U;
    msg.yaw = 41591U;
    msg.speed = 3116;

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
    msg.setTimeStamp(0.3482254258530805);
    msg.setSource(61167U);
    msg.setSourceEntity(219U);
    msg.setDestination(27685U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.8147664563579647;
    msg.roll = 5264U;
    msg.pitch = 56602U;
    msg.yaw = 31725U;
    msg.speed = 18257;

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
    msg.setTimeStamp(0.8071232423399212);
    msg.setSource(37240U);
    msg.setSourceEntity(238U);
    msg.setDestination(44230U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.7282877398268225;
    msg.roll = 12646U;
    msg.pitch = 21211U;
    msg.yaw = 3942U;
    msg.speed = 1489;

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
    msg.setTimeStamp(0.4545673300948043);
    msg.setSource(62149U);
    msg.setSourceEntity(140U);
    msg.setDestination(9298U);
    msg.setDestinationEntity(136U);
    msg.altitude = 0.05772956447607758;
    msg.width = 0.1690373713622294;
    msg.length = 0.01626065263677745;
    msg.bearing = 0.28045990008824395;
    msg.pxl = -20983;
    msg.encoding = 154U;
    const signed char tmp_msg_0[] = {68, 20, 13, -120, 93, 81, -32, -119, 3, -10, 46, -87, 102, 56, -75, -59, -123, 49, 63, -105, 93, -92, 95, 98, -92, -117, 78, 62, -90, 60, -22, -65, -64, -117, -40, -48, -3, 17, 41, 85, -109, 92, -43, -105, 73, -69, -37, 119, 61, -71, -84, 56, 74, -25, 76, -34, -63, -78, -74, -2, -125, 48, -70, -12, -32, 16, -107, -11, 23, 23, 36, 77, 115, -5, -96, 54, 111, 104, -84, -25, -93, -73, 17, -40, -91, 114, 98, 8, 10, 3, 100, -35, 26, 110, -16, 43, -31, -84, 69, 109, 64, 90, 59, 27, -32, 16, 55, 104, 94, 13, 63, -40, 117, 68, -63, -39, 51, 45, 10, -95, -84, -35, -61, -76, 38, 108, -75, -12, 112, 105, 67, 17, -31, 107, 34, -99, -108, -22, -78, -25, -76, 98, 23, 123, 30, -119};
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
    msg.setTimeStamp(0.24660963269116964);
    msg.setSource(27563U);
    msg.setSourceEntity(231U);
    msg.setDestination(53756U);
    msg.setDestinationEntity(235U);
    msg.altitude = 0.9543522136421216;
    msg.width = 0.851152663579676;
    msg.length = 0.6723114878664777;
    msg.bearing = 0.015030890932146268;
    msg.pxl = 19452;
    msg.encoding = 161U;
    const signed char tmp_msg_0[] = {54, -55, 56, 69, -100, -32, 27, 82, 2, 42, -9, 5, 124, -24, 8, -77, -119, 64, -116, 37, 75, 11, 46, 14, -76, 124, 36, 103, -2, -99, 83, 19, -89, 25, 74, 53, -87, 35, -37, 77, -43, -34, 53, 9, 96, -113, 82, -120, -78, -120, 56, -53, 47, 42, -71, 81, 3, 76, -9, -24, 76, -30, 7, -77, -110, -24, -69, -9, -23, 75, -97, 114, -121, -127, 19, 19, -77, -80, 10, -93, 118, 120, -51, 67, -96, 49, -53, 91, 5, 64, 109, -49, 22, 50, 123, -27, 88, -57, -12, 88, -38, -33, -78, -87, -69, 43, -60, -27, -110, -127, 8, 75, 45, -117, 95, 76, -9, -88, 58, -51, 111, -125, -125, 17, -9, -36, -54, -13, 47, -23, 79, -39, 88};
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
    msg.setTimeStamp(0.6420501815290098);
    msg.setSource(16396U);
    msg.setSourceEntity(244U);
    msg.setDestination(34850U);
    msg.setDestinationEntity(208U);
    msg.altitude = 0.942850356685379;
    msg.width = 0.7008829327916537;
    msg.length = 0.782178054329281;
    msg.bearing = 0.38487765391319684;
    msg.pxl = 21447;
    msg.encoding = 130U;
    const signed char tmp_msg_0[] = {-13, 10, 90, -90, -125, 59, 16, -44, 45, 100, -109, 57, -50, -10, -56, -112, -24, -121, 119, 11, -50, 7, 55, 52, -108, -112, 96, 72, 7, -33, -21, 101, 6, -77, 119, -116, -117, 9, 69, 24, 124, -78, 90, 43, -10, 125, 52, 45, 3, -67, -48, 13, -126, -39, -82, -53, 51, -61, -117, 18, 59, -62, -111, 27, 31, 46, 116, -104, -100, -88, 32, 68, 74, -16, 44, 111, -110, 31, 80, -68, 33, -76, -98, 4, 112, 121, 81, 32, -94, 9, -31, -83, 46, -89, 48, 37, -38, -3, -77, -62, -122, -8, -102, -75, -51, -121, -5, -25, 122, -41, -110, 93, -54, 82, -117, 49, 83, -33, -36, -117, 103, 32, 89, 14, 62, 52, -83, -65, -66, 119, -27, -69, -100, 121, 113, -110, -54, -64, -77, 101, 61, 62, -16, 121, 80, -19, 49, -38, -9, 4, 122, -30, -88, 0, 76, 99, 107, -1, -42, 71, -74, 120, -118, -96, -46, 35, 85, -15, 52, -89, 125, 32, -124, -47, 97, -8, -72, 39, 17, 23, -57, -83, 38, 74, 110, -6, 97, 94, -74, -71, -125, 43, -17, 87, 60, 37, -32, 111, 62, 73, -41, 60, -123, -127, 28, 83, 49, -123, -101, -85, -66, 2, -17, -122, 48, 102, -93, -57, 103, 34, 89, 93, 9, 51, -73, -78, 87, 118, -65, -9, 126, -93, -24, -118, 16, 98, 74};
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
    msg.setTimeStamp(0.3591062542341382);
    msg.setSource(274U);
    msg.setSourceEntity(154U);
    msg.setDestination(52964U);
    msg.setDestinationEntity(175U);
    msg.text.assign("ZYBZDBYTSJ");
    msg.type = 37U;

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
    msg.setTimeStamp(0.03210873700315975);
    msg.setSource(21788U);
    msg.setSourceEntity(222U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(106U);
    msg.text.assign("PCRQNFNAHMVDUOTIQOKYBJLEOWTSEAHVICYNWEOTLLKARBQBRDOZOWFRPPRSTUVCYEUZEGFBFZXSDWCUCCYWTJGKGFDVVPPY");
    msg.type = 56U;

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
    msg.setTimeStamp(0.5859365186806098);
    msg.setSource(53461U);
    msg.setSourceEntity(152U);
    msg.setDestination(61384U);
    msg.setDestinationEntity(227U);
    msg.text.assign("EFSYDLYUFCMMAT");
    msg.type = 132U;

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
    msg.setTimeStamp(0.685428753065942);
    msg.setSource(1276U);
    msg.setSourceEntity(155U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(110U);
    msg.parameter = 20U;
    msg.numsamples = 240U;
    msg.lat = 0.07413922629670411;
    msg.lon = 0.8152529221630579;

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
    msg.setTimeStamp(0.2823848086028907);
    msg.setSource(43503U);
    msg.setSourceEntity(13U);
    msg.setDestination(36536U);
    msg.setDestinationEntity(53U);
    msg.parameter = 61U;
    msg.numsamples = 201U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 58153U;
    tmp_msg_0.avg = 0.8791789570988713;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.40732834002914864;
    msg.lon = 0.5837041647347712;

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
    msg.setTimeStamp(0.07678681762513517);
    msg.setSource(45040U);
    msg.setSourceEntity(172U);
    msg.setDestination(30765U);
    msg.setDestinationEntity(190U);
    msg.parameter = 29U;
    msg.numsamples = 221U;
    msg.lat = 0.40794328951036263;
    msg.lon = 0.9976329389492162;

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
    msg.setTimeStamp(0.620897936035359);
    msg.setSource(24333U);
    msg.setSourceEntity(190U);
    msg.setDestination(43602U);
    msg.setDestinationEntity(0U);
    msg.depth = 39770U;
    msg.avg = 0.36925602657408196;

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
    msg.setTimeStamp(0.8821701317124591);
    msg.setSource(28035U);
    msg.setSourceEntity(172U);
    msg.setDestination(19747U);
    msg.setDestinationEntity(39U);
    msg.depth = 17842U;
    msg.avg = 0.5386875213170645;

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
    msg.setTimeStamp(0.9570320797270818);
    msg.setSource(33875U);
    msg.setSourceEntity(179U);
    msg.setDestination(41987U);
    msg.setDestinationEntity(176U);
    msg.depth = 19263U;
    msg.avg = 0.256450729679517;

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
    msg.setTimeStamp(0.1903939819857806);
    msg.setSource(57940U);
    msg.setSourceEntity(171U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.4985736564498008);
    msg.setSource(9148U);
    msg.setSourceEntity(19U);
    msg.setDestination(11800U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.2119671190928497);
    msg.setSource(40627U);
    msg.setSourceEntity(137U);
    msg.setDestination(20660U);
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
    msg.setTimeStamp(0.4596130009688866);
    msg.setSource(29511U);
    msg.setSourceEntity(52U);
    msg.setDestination(46738U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("XDJWLFAKBIHMANCXGHKVPTEVZKTPHSNQFUEDORZKVNXAKNWQSGVIBTZZOYBOBLVDAOJQYDXUKRRCIOVQLVJHQMFEYNVKIXXGAYBCPGRMULZUQOGHCXAHLWHXGIRYYSPFRQYTMCFUCBSMINWUALEQEKDVPIUBFKJWRXYESWOCQGTZTCAJAOGWZMBBUIFLJFZMZHJDAPHDJWFCTCST");
    msg.sys_type = 88U;
    msg.owner = 2227U;
    msg.lat = 0.2655666019903683;
    msg.lon = 0.7936237119917718;
    msg.height = 0.1371716285160316;
    msg.services.assign("LCQMFZZMODNILZQJDASOHNEORTJCHZJMRTBGDPTPFQKDKEMLFQAJBIRALHWUXYSZJEKJTFFXCSOSGSIKBESQEDPYUWCBPODGHLVKONMQYLGGWLXFJTBIHNOEYEWQWJCZXVIMARHYGPOVYSAIGAPXIWMPBNXXZQ");

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
    msg.setTimeStamp(0.1208389813069225);
    msg.setSource(31869U);
    msg.setSourceEntity(205U);
    msg.setDestination(13151U);
    msg.setDestinationEntity(143U);
    msg.sys_name.assign("YNFVKORYSYIDASHWXQBGDCGFBROBZFWOTEVLYLHVZXHDPSBWPAQHIPJREBPNZCZEVXMKDIEEY");
    msg.sys_type = 38U;
    msg.owner = 43201U;
    msg.lat = 0.07100273950608582;
    msg.lon = 0.32920956453739714;
    msg.height = 0.16249231626757055;
    msg.services.assign("WIFCYJKHGWNDFZPOLYJTZSMBUYOHRYKLJDOUY");

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
    msg.setTimeStamp(0.6982052668861258);
    msg.setSource(46618U);
    msg.setSourceEntity(167U);
    msg.setDestination(6094U);
    msg.setDestinationEntity(25U);
    msg.sys_name.assign("SLBHQYMLEPEJZGRNXMNXRWAIESFZRMTPIIDKNZLKVAHFQPQBNHBRHPNSKDWQDBVZHTLINCLVZKAWYNHDGOCABFETIWWYBTQAFDVSIOSPTJOOIICNZSMLUEMOKYCRYLDXOXRGCKPUVEJVXCFEYMLWYXEETAPMZZUZGUYLF");
    msg.sys_type = 134U;
    msg.owner = 567U;
    msg.lat = 0.6542875525812709;
    msg.lon = 0.19822357892746523;
    msg.height = 0.17638254682386412;
    msg.services.assign("MTKGDSVSHNHKVFLYZTEWNTVSFTBNQHEHIXBRSYJONGZVMSFAOVVXJADWQBRYDKWDZMYXOTNKYMSHPBBPIROUJSQNOIOQLNMFNAIPMELEPUJCVCXYLYSLSPRKLGXUQMFDGBKDJXQWWVZZRDCAUAYCRWGEQCYCVAZAHXNLEGYBUCOEAMDICGFOBILTMRBFOCLEGPHBJXLTJWMEKEFSZKFPUIFCHARZVRZIUHJHUPOTRQUQPTKNGWW");

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
    msg.setTimeStamp(0.1777234787759817);
    msg.setSource(57586U);
    msg.setSourceEntity(168U);
    msg.setDestination(26427U);
    msg.setDestinationEntity(89U);
    msg.service.assign("BWZVBASSUAMERKFRLKVFACIBOMEMPBNRXFIYKFBYCJOLPFEYPLBYLGZIFIZMTZJRVOOLSMFBCJXOVUHPJY");
    msg.service_type = 149U;

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
    msg.setTimeStamp(0.26879927725270525);
    msg.setSource(19839U);
    msg.setSourceEntity(78U);
    msg.setDestination(11376U);
    msg.setDestinationEntity(25U);
    msg.service.assign("IRMYLVFWQPOHBXNOXQAASGFRHYVWGOMEUALKKCDNLPHREUDSVXPGWRD");
    msg.service_type = 7U;

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
    msg.setTimeStamp(0.5888608145298317);
    msg.setSource(44151U);
    msg.setSourceEntity(61U);
    msg.setDestination(21489U);
    msg.setDestinationEntity(113U);
    msg.service.assign("GLNSYXJNBRKHCODVYUGQBWMHTTSHGC");
    msg.service_type = 38U;

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
    msg.setTimeStamp(0.4559233735435194);
    msg.setSource(16060U);
    msg.setSourceEntity(200U);
    msg.setDestination(23047U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7359139770503029;

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
    msg.setTimeStamp(0.8129935708369523);
    msg.setSource(22515U);
    msg.setSourceEntity(64U);
    msg.setDestination(12173U);
    msg.setDestinationEntity(177U);
    msg.value = 0.41786482592883134;

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
    msg.setTimeStamp(0.06378934929220348);
    msg.setSource(44075U);
    msg.setSourceEntity(111U);
    msg.setDestination(11626U);
    msg.setDestinationEntity(117U);
    msg.value = 0.5038593558653818;

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
    msg.setTimeStamp(0.40916554117346127);
    msg.setSource(41635U);
    msg.setSourceEntity(134U);
    msg.setDestination(12290U);
    msg.setDestinationEntity(87U);
    msg.value = 0.5133060287504358;

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
    msg.setTimeStamp(0.09981894132316904);
    msg.setSource(7619U);
    msg.setSourceEntity(194U);
    msg.setDestination(32317U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6007705719245887;

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
    msg.setTimeStamp(0.6311786103494711);
    msg.setSource(53384U);
    msg.setSourceEntity(156U);
    msg.setDestination(17402U);
    msg.setDestinationEntity(106U);
    msg.value = 0.15501971697674088;

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
    msg.setTimeStamp(0.2901340192496674);
    msg.setSource(29998U);
    msg.setSourceEntity(111U);
    msg.setDestination(49657U);
    msg.setDestinationEntity(116U);
    msg.value = 0.07233714177134254;

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
    msg.setTimeStamp(0.8323074200499059);
    msg.setSource(3256U);
    msg.setSourceEntity(72U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5879645890196862;

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
    msg.setTimeStamp(0.3774589628526446);
    msg.setSource(52843U);
    msg.setSourceEntity(236U);
    msg.setDestination(5249U);
    msg.setDestinationEntity(173U);
    msg.value = 0.1911346969860701;

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
    msg.setTimeStamp(0.5052266523847663);
    msg.setSource(37866U);
    msg.setSourceEntity(51U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(166U);
    msg.number.assign("PDVMQMGGEDGICECYBFPAJCMSJQBJHMQVRRNIODYROXBMXCBVYSKLVEDJWIYLXNQOGWCMAKBLOQIYQRKCGXUGMTWIGNDTIBBRMFSUHYWSNTCJGIYDKUTXODMUWJCHAPZHSKFGTFUBQXDRLWJGKILKDNZNEJRTAVLVZSFULSAVLOZEZAWFCHRNWBSNZE");
    msg.timeout = 19709U;
    msg.contents.assign("DBLZACAUTPILEHJGOXJIODWFCQGUSIUVYBJOWFPYJXDCSMUR");

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
    msg.setTimeStamp(0.33122814932541633);
    msg.setSource(27563U);
    msg.setSourceEntity(138U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(121U);
    msg.number.assign("AFFUNQHGFIEUHASYHSTEUBTZADKICFCOSNSPHDUBGYUWHUOMOGCMKLXUXLTLWPRRBSCZTOQHOSVYIYSKBWAID");
    msg.timeout = 17U;
    msg.contents.assign("WBUFBTYJNKRXCNKSJYDWFDOOOIKOAZLOVMSNWWPVXWXC");

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
    msg.setTimeStamp(0.9185870067590818);
    msg.setSource(20640U);
    msg.setSourceEntity(83U);
    msg.setDestination(38456U);
    msg.setDestinationEntity(113U);
    msg.number.assign("BXEIIMQWWWDKRRUDWHIUGMUSCQDDMPSZSQLGCZCBTMA");
    msg.timeout = 38768U;
    msg.contents.assign("HKOOOLXLIRYDL");

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
    msg.setTimeStamp(0.08885761183793206);
    msg.setSource(13380U);
    msg.setSourceEntity(252U);
    msg.setDestination(12764U);
    msg.setDestinationEntity(122U);
    msg.seq = 3523093570U;
    msg.destination.assign("IHULZGURZLAQHDHKQFBTZLEQJZLSAQRTUEXXIXJDRHSCMVGPFXRNFOKUWLSYOWDTKUMLEAICCMXYSNZJUVRSNFCTSCNAJVWVFYDYBPQVIGBWGKZKJHHGUMOWNMVXZRREDEYAIOVCPXTPSHAOMRJPDFAZBTBCEKYUILYJVGTLUHIYOXDWDZTABVBREJC");
    msg.timeout = 52086U;
    const signed char tmp_msg_0[] = {80, 76, 4, -82, 58, 75, 59, 117, 117, -124, 86, -85, -5, 24, -36, -117, -98, 82, -10, -6, -48, -100, -87, 1, -115, 25, 81, 65, 41, 51, -128, 16, -78, 1, 75, -68, -116, -32, -111, -88, -118, 34, -29, -123, 55, 43, -72, -17, -75};
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
    msg.setTimeStamp(0.19959477467371634);
    msg.setSource(60457U);
    msg.setSourceEntity(217U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(246U);
    msg.seq = 546239271U;
    msg.destination.assign("TSAKLWRZOALYKFBPPBNOIQDROILMI");
    msg.timeout = 48611U;
    const signed char tmp_msg_0[] = {-25, -9, -120, 61, -95, -13, -12, 74, -70, -55, -20, -39, -39, -94, -24, 126, 11, -7, 95, -31, 50, -86, 38, 112, -11, -86, -68, -127, -118, -17, 110, 33, -102, 41, -102, -15, 85, -36, 70, 66, 107, -100, 81, 45, 101, -10, 12, 74, -48, -31, 21, -111, 45, 77, -30, -31, 105, -11, -107, -3, 101, -1, -112, -4, -43, 73, -73, -38, 96, -74, -18, 11, -70, 93, -102, 60, -1, -91, -18, 13, -110, 117, 112, 68, -34, -87, -34, -14, 95, -1, 103, -68, 42, -115, 66, 68, -94, 75, -127, -127, 16, 108, 2, -68, -60, -19, 24, 68, 19};
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
    msg.setTimeStamp(0.28465777512072366);
    msg.setSource(53783U);
    msg.setSourceEntity(4U);
    msg.setDestination(21468U);
    msg.setDestinationEntity(52U);
    msg.seq = 482227263U;
    msg.destination.assign("WADBPMABLHDUSTKKFOQMUNXEYGGSIFXNWOQKLYZMXEERZIFCPKEYRWDMUGYMQUJPGVJVTSUWBPKHCFKCXOLUCMLMQNNIJHGPZRZKFAXTNXPVGBIFIXBCWJCLOQWVYAXKLRYRGCJR");
    msg.timeout = 47415U;
    const signed char tmp_msg_0[] = {-68, -51, 59, 79, 84, -31, 17, 65, -10, 55, 38, -16, 3, 69, -122, -68, 28, 86, 74, -14, -1, -49, 41, -124, 42, 29, -55, 43, -17, 116, -72, 74, -85, -57, -105, 116, -20, 125, -10, 61, -112, -95, -104, -11, -82, -16, -90, -67, 63, 62, 59, 63, -90, -57, -106, -43, -123, 13, 1, -23, 112, 6, -69, -116, -128, -119, 99, -46, 122, 23, 119, 107, 91, -75, -16, -88, 37, 38, 42, -34, 9, -8, -56, 80, -42, 7, -63, -94, 54, -112, 115, -59, -98, 108, 15, -94, -71, 21, -64, -125, -58, 4, 106, 43, -122, -27, -61, 43, 5, -82, 18, 107, -94, -35, 97, 116, -97, -27, -62, -43, 117, -5, 77, -91, 11, 66, 22, 83, -77, -33, 119, 104, 19, -49, 117, 80, -16, 122, -78, -104, 74, -81, 38, -37, -96, 63, -72, -127, 10, -37, -58, -22, 96, 26, 110, 48, 76, 31, -70, -9, 17, 97, -54, -17, -89, 44, -72, -57, 3, 87, -121, 70, -123, 90, 72, -54, 22, 107, -20, -38, 105, 68, 46, 106, -10, 44, -69, -74, 53, -113, -118, -30, -94, -50, -119, 46, 66, 15, -118, 61, 85};
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
    msg.setTimeStamp(0.469937907590802);
    msg.setSource(20526U);
    msg.setSourceEntity(218U);
    msg.setDestination(28356U);
    msg.setDestinationEntity(2U);
    msg.source.assign("GAQXKCNGOHDNOKNAWWQHBDDPXYCVRTQEHEXLSQMUFMHXSUBBXEEIMRPAIHFM");
    const signed char tmp_msg_0[] = {73, 15, -123, 51, 9, 85, -16, 53, -78, 47, 32, -48, 13, -28, 78, -81, -95, 94, -67, -106, -62, 40, -117, -47, 94, 79, -74, 96, 126, 51, -89, 83, -84, 66, 121, -116, 36, 70, -110, -94, -5, -87, -94, -63, 36, 55, -21, 100, 51, -39, -95, 54, 43, -15, 34, 49, -39, 8, -15, 24, -2, 27, -99, 105, -49, -120, -71, -96, -99, -106, 80, 97, 21, 52, 82, -100, -56, 76, 84, 78, 37, -92, -75, -75, -5, 27, 22, -4, -32, 68, -120, 76, 108, -121, 84, 113, -5, 81, 23, -10, 108, -13, -74, -67, -58, 9, 37, -17, 68, 36, 4, -97, -88, 29, 59, 102, 22, -37, -90, -86, -50, -77, -111, 55, -58, -33, -1, 40, -62, 44, 35, 121, -73, -15, 1, 19, 54, 76, -41, -55, 70, -95, 105, -49, 83, -51, -61, 99, 72, -125, -76, -38, -113, 33, -45, 2, 111, -61, 92, 36, -5, 47, 46, 44, -116, 80, 13, -45, -11, 7, 31, -38, 59, 114, 78, 58, -6, 0};
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
    msg.setTimeStamp(0.2868949535668859);
    msg.setSource(13956U);
    msg.setSourceEntity(227U);
    msg.setDestination(12683U);
    msg.setDestinationEntity(108U);
    msg.source.assign("ICOMOSQZPUHSGYCTTMSJBETZK");
    const signed char tmp_msg_0[] = {-113, -6, 33, 99, 7, 27, 30, 68, 62, -49, -84, 21, 124, 90, -113, -53, -23, 85, 123, -8, -26, 12, 0, 13, 75};
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
    msg.setTimeStamp(0.5491299356807734);
    msg.setSource(54270U);
    msg.setSourceEntity(140U);
    msg.setDestination(1328U);
    msg.setDestinationEntity(214U);
    msg.source.assign("ZYSYMDNRFGVBBEILYNNADERMYCBWTPXJETVKMYIYDTXKOEWFRHSSVHMLIHCEGZNCALBJOHWATFQOYTIZWZAARSJSOBXGUPSDSUKPGCVAFXDWKFOIUPUNFDSPBCONZCHVHTEHPOYGWDXJRRWMZICJESPZCANFIGGRVLNSLZPLWKOQIRAQBCHMGMMHWHQCLQTDVXYQFNLTNKIGBQBTJRQAXTZQUJWPUREEUOIVLFYGXAMKJ");
    const signed char tmp_msg_0[] = {56, -90, 125, 10, -109, 29, -25, -74, -81, -122, 21, -79, 37, -49, -15, -89, -90, -2, 35, 43, -110, 53, 0, 15, 24, 25, 11, 121, 4, 57, -91, 30, 39, 6, -86, 124, 77, -37, 95, -45, -74, 108, 62, -105, -97, 108, -12, 59, 46, 17, 81, 79, 18, 5, 97, 21, -92, 62, -60, 59, 115, 69, 37, -12, -13, -99, 111, 11, -44, 71, 45, 63, -59, 35, -57, 72, 58, -69, 100, 8, 6, -43, -105, -58, -27, -97, -40, -105, -56, -112, -64, 13, -120, 65, -21, 86, 15, 106, -42, 64, 87, -52, -25, -21, 48, -102};
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
    msg.setTimeStamp(0.47143107009078355);
    msg.setSource(48135U);
    msg.setSourceEntity(93U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(92U);
    msg.seq = 2646201146U;
    msg.state = 5U;
    msg.error.assign("CVNZOZROPYNHJIHADNUXIRQKFUQWMFMQUYKGFYJMPNIRHGKYZADKTBPBZEGCBJZXIVQGSJWSNFZMLPNPVQVTJUTIMBTPSSADJCQXDDGYTMCQWUBXLXDIFARLPBLREEPGIVGVKTBWMAMHXLEWZYBBSRXQEUTEALAGOWPUDNAFSRCHYFUJXHKUBKGSWKSWHWORUODZCKJHKOMQDFTAJCELIVWMNGORLAY");

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
    msg.setTimeStamp(0.39087596824230864);
    msg.setSource(30835U);
    msg.setSourceEntity(198U);
    msg.setDestination(19524U);
    msg.setDestinationEntity(168U);
    msg.seq = 1776212903U;
    msg.state = 115U;
    msg.error.assign("ERKJLHWBMNRBUKHTSNFQEEETEGTSVYPFEBTRUDAGCEOYVKWNKLLSMVZJAKYJOWXRMOPOYFWSNCQUQXSIITHUCQPHTZXZXOXYGUSLLOWCBQBXGEDIMVXBCCZRRVGVOEXQSIAVUHTWBPQFKBMMUFJOMZADIHSTNHBQKMAU");

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
    msg.setTimeStamp(0.44777116915753123);
    msg.setSource(56167U);
    msg.setSourceEntity(112U);
    msg.setDestination(19404U);
    msg.setDestinationEntity(180U);
    msg.seq = 1737392758U;
    msg.state = 209U;
    msg.error.assign("TCCXOIQKMAEQXSQSFZZTJRNCERIIYMJNXHFNWLGEKTPKUKAYRBKTYKPIGQDROZUKJHAPGQQEEWVFBGJWVOVMFHGNHRNHVODAMAFUOWZYXFNILBOAWUGRCLCWTIXPVEPTVZZGUHMDBZJDMKEBQBVDDJXSSLWSGIXFBBDLMRYCUQCQDVSTCZJLGBYFYDMAAECDTPNHYUSQJIZJTMPVGLKXMNOH");

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
    msg.setTimeStamp(0.7701761334768473);
    msg.setSource(54159U);
    msg.setSourceEntity(93U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(61U);
    msg.origin.assign("YOMTRGCZGZNGDNFIJTVNNHBRKHJEUGEJLOSBODHWYJJNYAFCWYGHPPDDQXDRLQXKBPTCZVWQKXZAPTTFPBAWOLJCUMRFROMYMWMUFQPQNIUXIWWUJPYJRWMKYJZLWCTVGRBLEQVCCPIEQKVAOSKZMYHBVLXIGSNVIUOWMSOEFEJHETIFATCSZDXXXTLDTKUYNUAUHZPGXBFSIA");
    msg.text.assign("ZNVCSYPRGOJFCPPJEWUAUANNBUHFSJQJUKPSKGIZMYQLIJCTPZWMAAZWTVFTQPUDYLWKIHCDLBSULFDYNRROQFZTPVCYNQLXDUJGQWBQOTCAIRTERKXSKGYMHNXWKTN");

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
    msg.setTimeStamp(0.05644038346326874);
    msg.setSource(11725U);
    msg.setSourceEntity(221U);
    msg.setDestination(55216U);
    msg.setDestinationEntity(165U);
    msg.origin.assign("SRQEOFBANCVZFKWSQTVSAAPYNTFGDTHOYTMGLMPVBVOHTKTVNNAKMAPSAPMENROEIHWSPUDBDGSOHDAXGFRQGUGYXLWDQUMGPLMSKNETOFHJHYZCGOXGLBJXRKWQDIWBWLFUMXGHDXWKVKCOFCUIBHNJUJWFUDCIFTZUZJBIAXYQZBMAJZRPFDRKZYHXONLMEJQLBPEKVXCQJVBCRSQCQDUYZJCZOW");
    msg.text.assign("EZAUFSCFJUHZWSGHFXOBYRINPNOWSVLCIGXZWTCWHCYZFKQLKRESVGMTTZJVXDYPRTPNBLQZFTRPVWQMOSECWGGDNUJHUMVDUOKHDUMK");

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
    msg.setTimeStamp(0.9317132796879308);
    msg.setSource(13347U);
    msg.setSourceEntity(227U);
    msg.setDestination(60668U);
    msg.setDestinationEntity(42U);
    msg.origin.assign("ESCTSEMSKJQFKAFHDFRELASAYUMJZRYSCNHOLFUJJRFTYVTTYPDSINBIVLDZBPCTXJTRZMQQIJIPGHDXCKLNHNGGIQVAOCZKBXUOHWYEIQUNCOVE");
    msg.text.assign("YZDZFERXOTKZXDUUKQZVKLONDNPTLMBYCYGBJCYQ");

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
    msg.setTimeStamp(0.7365025016547893);
    msg.setSource(33097U);
    msg.setSourceEntity(92U);
    msg.setDestination(12715U);
    msg.setDestinationEntity(189U);
    msg.origin.assign("VIDYMSFIBBTFARQWTPIARHSWYRROXHJIUNQLGBJKPGDKCYHLXPSHCNMNZMNDBVWG");
    msg.htime = 0.6697779167826243;
    msg.lat = 0.8943899596210714;
    msg.lon = 0.34947308671734967;
    const signed char tmp_msg_0[] = {-7, 49, -10, 106, 28, -105, 46, -10, -60, 105, -22, -89, -68, -48, -78, -48, 0, 39, 34, 123, -73, -21, -119, -121, 113, -9, 6, -102, 67, 113, -26, 57, 69, 101, 4, 51, -66, 99, -50, 5, 46, -42, -88, 7, 90, 47, -84, -44, 35, -70, 83, -48, 106, 25, 27, 65};
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
    msg.setTimeStamp(0.3170852988410958);
    msg.setSource(5989U);
    msg.setSourceEntity(35U);
    msg.setDestination(42218U);
    msg.setDestinationEntity(153U);
    msg.origin.assign("HTISIMJYOQUWSOBHEGBYROWARAGRXNZEGFBUYUMLVWVFZKKSXASICZOZIVZMXFOBSCBLLWQGPILAHPTHEQAUROYVVJPCPVKKIKDYQGGEJFZGHQFWBIMPQERTJHECLOUBYMSUSAUQKBWPVMENXXZSJNMPTDODIMZAQBHBSQFJCCKPXWLECQZTAPFRSAUYTTNLINNRDTGYKWKNXRXEPMRODHFDCRTDDWXYJJKNZ");
    msg.htime = 0.3408653585987518;
    msg.lat = 0.9461138520455523;
    msg.lon = 0.8341397943328395;
    const signed char tmp_msg_0[] = {-31, 124, -34, -10, -9, 124, -4, -3, 67, 48, -89, 75, 123, -55, 109, -49, 3, 29, 72, -52, -72, 50, 55, -18, 0, 51, -125, -115, 0, -24, 54, -125, -53, 85, -19, 89, -41, -119, -98, -103, -113, 111, -38, 104, 16, -109, 9, -37, 110, -30, -75, -35, -29, 121, -90, -2, -124, 77, 126, -21, 101, 66, -12, 118, -10, -9, -77, 29, 47, 95, 83, -122, 48, -17, 45, 122, 57, 24, -76, -110, -14, -72, -21, 117, 27, 10, 98, -40, -71, -86, 28, 111, -101, 34, 43, -89, -116, -10, -48, -18, 112, -69, 53, -66, 44, 113, -41, 7, -120, -127, 76, 25, 10, -16, -31, 38, 26, 14, -122, 30, 97, -110, 93, -39, -124, -96, -98, -3, -84, 27, -64, -106, -81, 43, 94, 53, -62, 102, -99, 26, 26, -30, -42, 14, 77, 91, 44, -81, -110, 71, -83, -9, -103, 45, -99, 16, 44, 47, -30, 47, -72, -26, 82, -8, 64, 78, 79, -93, 67, -23, 76, -122, -5, -106, 66, 37, -19, -90, -16, 65, -40, -47, 4, 111, 57, -95, -62, -23, -15, 106, 80, -115, 41, 113, -68, -107, -117, 120, -57, 14, -114, -126, -47, 51, -68, 75, 13, 33, 96, 12, 54, -89, 21, 120, -70, 113, -33, 83, -66, 20, -117, -105, 64, -114, -122, 79, -121, 93};
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
    msg.setTimeStamp(0.6700840997235114);
    msg.setSource(23738U);
    msg.setSourceEntity(59U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(229U);
    msg.origin.assign("ZHOEJDOKJENHHBTPZBVZMWGEHQWSDYPVRNTZCICQQTXDGXALYLBSNCCVWDRHGAQRARONJJYXDTIGYLMYXHMFFKBCMBMSZUWZUJRKPIQRDDNFIJWKT");
    msg.htime = 0.9188857777063201;
    msg.lat = 0.17210312609543688;
    msg.lon = 0.4800700296533429;
    const signed char tmp_msg_0[] = {115, 19, -100, -106, 22, -102, -11, -27, -105, 94, -110, 74, -15, -2, -29, 16, 53, 83, -39, 122, -110, 33, 105, 66, 105, -73, -64, -40, -76, -11, 60, 64, -84, 125, 43, 13, -98, 64, 19, -37, -9, 55, -44, 34, -13, 16, 39, -106, 38, 23, -117, 10, -57, -26, -68, -83, 60, 98, 79, -59, 113, -37, -113, -95, 101, -54, -45, -104, -55, -101, 81, -62, -60, 85, -10, 79, 100, -126, 100, 57, -121, 32, 72, -86, -57, 35, -8, 88, -114, 70, 33, -33, -56, -67, -43, 68, 27, -99, -94, -21, -90, 18, 37, 105, 69, -37, -57, 62, 7, -27, -116, -128, 58, 71, 79, 42, -119, -91, 72, -70, 37, -66, -12, -53, 96, 122, 35, 92, 18, -46, -63, -95, -89, 35, -23, 85, -62, 66, 95, -102, 76, -38, -46};
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
    msg.setTimeStamp(0.5863881026399647);
    msg.setSource(14771U);
    msg.setSourceEntity(101U);
    msg.setDestination(48856U);
    msg.setDestinationEntity(60U);
    msg.req_id = 39473U;
    msg.ttl = 8210U;
    msg.destination.assign("XNKJNGQQOFAXPQQTUSLHFFCTJIDPXBYRYXQTLGBGDBTOOVCVLUZAHCKWUZHDTQNKOYMERECJUPZPWBSYJGLCPPCETYJXMEBWMHRBKPIPBVSRWHMXHFUGFZKUAFNOHSODGYIVVPUDBTFJEHNMCNNASSRWWZKIKODBJRTIMCAZGKLCALYUDXMCYJPOKOTUEZJWQBJWQETDOZNYMFFQVXAMNRQLZVRISGGLIXALEKIEUHXGFWYVSLIVMDAS");
    const signed char tmp_msg_0[] = {6, -124, 43, -55, -103, -7, 47, -59, -28, -123, 123, -62, -128, 3, -34, 87, -62, -50, -113, 110, 56, 67, 30, 90, -32, 16, 12, 70, -95, -90, -14, -108, 98, 124, -57, -111, -121, -121, 117, 92, -24, -2, -112, 12, 84, -75, -19, 124, 10, 93, -3, -65, -49, -43, 105, 14, -54, -61, -99, -54, -126, 9, -103, 56, 52, 15, -48, -100};
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
    msg.setTimeStamp(0.2105548525793156);
    msg.setSource(61655U);
    msg.setSourceEntity(203U);
    msg.setDestination(27430U);
    msg.setDestinationEntity(109U);
    msg.req_id = 18592U;
    msg.ttl = 57153U;
    msg.destination.assign("VYJEYKRKUBRVBKZBHALZHXMTQTGL");
    const signed char tmp_msg_0[] = {-92, 117, -72, -67, 83, 61, -17, -72, 15, 69, -104, -29, 49, 20, 39, -44, -8, -109, 27, -99, 67, 9, 53};
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
    msg.setTimeStamp(0.4265725298402384);
    msg.setSource(26850U);
    msg.setSourceEntity(208U);
    msg.setDestination(37650U);
    msg.setDestinationEntity(146U);
    msg.req_id = 58270U;
    msg.ttl = 34590U;
    msg.destination.assign("KEMPKKJAMHXHTFXCXICEVCWTRFIAJYUXLRIZZGFRSIKLOINFGBFLWTETWILRFOBMLKKJHAYOJOBUFYAOOSJYVATPSSDACEDDGPYWPVNCWLUENMV");
    const signed char tmp_msg_0[] = {92, 124, -39, 29, 85, 49, 50, -120, 107, 29, -102, 41, -11, -50, -32, -44, 64, -49, 48, -82, 58, -2, -16, -124, 25, 108, -109, 118, 95, -7, -82, -9, 67, 103, 15, -14, 41, -83, 35, -82, 41, -13, -22, -18, 81, 82, 79, -18, -33, -72, 27, -23, -12, -125, -14, -74, -50, -119, 2, 112, -122, 4, -84, -84, 39, 121, 121, 59, 120, 4, 11, 103, 54, 52, -26, -3, -108, 64, -62, -61, -72, 102, 93, 1, 97, 35, 70, -30, -63, 62, -108, 39, 56, -82, -47, -9, -81, -108, 36, 44, 13, 49, 13, -77, -80, -123, 106, 124, -79, -46, -48, 99, 90, 67, 25, 121, 61, 102, 43, -17, 13, 124, 115, 119, 18, 22, 81, 24, -20, 42, 34, 79, -35, -36, -4, 89, 112, 33, -123, -107, 32, 4, -38, 24, 58, 118, 58, -7, -72, 41};
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
    msg.setTimeStamp(0.976476004732068);
    msg.setSource(423U);
    msg.setSourceEntity(138U);
    msg.setDestination(63381U);
    msg.setDestinationEntity(188U);
    msg.req_id = 21003U;
    msg.status = 135U;
    msg.text.assign("TANSKXMECHKVUNLCMYKHLMMXEGIAJVUFHLBJCRKCHXAZHWWRYUGBPYIKUDRLARGTBOFPZSDCVYHQTNANENPOUSOFPMLMIUJJLPBMGXPDMRSRJAFUEBLVKVEIKYLAQHORJXCOVUTNFWMACGDQFQHSSASAVZZIQHBWWRFJRLGPWMENIEWZFHIZSTCDFIZBDGWZOVNEGDJXKJCQNTXTXIQZPXRSYGK");

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
    msg.setTimeStamp(0.3719250529281751);
    msg.setSource(57330U);
    msg.setSourceEntity(186U);
    msg.setDestination(17280U);
    msg.setDestinationEntity(168U);
    msg.req_id = 52290U;
    msg.status = 221U;
    msg.text.assign("BXRNONSTJZCDPTVMVRNDXMZWKOYTWQRJACBQUYMPTUETFOPDFWGZEGDCCWWSEFXKGUNZVJEQRTLOMLGMUYXEGKKDBAAVCUJVSZIBJPUBYNDGCXVHLJMQIAKOQLJEQJERLBMWUXUZGYQYKPVXIGINHVORCNPITKDEEDHIHCUDLOBQWITPIMYLVMASLWQGNAHYLFNXRZAAOAZGHPMTSJKYSJIVXFESHWORRPTXHZSORYDSZCNL");

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
    msg.setTimeStamp(0.2900107890400583);
    msg.setSource(9250U);
    msg.setSourceEntity(42U);
    msg.setDestination(39717U);
    msg.setDestinationEntity(105U);
    msg.req_id = 52029U;
    msg.status = 93U;
    msg.text.assign("QXDTTHJEYTNKPEMDJHMGOWPAKKCLJOAQDBHMXYQFJBSKZILDRNKKFGIRUGGEUQSLXLZSCWACMFAEUQIIUZVRMLHEUIPGRPDRDBFFYOFSLHZNAVAOBSFFKHAMYIDACEAPLGECIDKNWHCJQVTMRNVWETWBZIXVVQYPJLRTVVFNXWMMTJJGQDZUOPGRKBCPNJXFRHLUYO");

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
    msg.setTimeStamp(0.3280614631961153);
    msg.setSource(1421U);
    msg.setSourceEntity(58U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("WJFXPEBYVIHGBKHDHOGPRQAGHWZDONMXDSTZDKORJXSATZEBQQSHCTGJ");
    msg.links = 3452866438U;

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
    msg.setTimeStamp(0.7921718783274202);
    msg.setSource(29719U);
    msg.setSourceEntity(39U);
    msg.setDestination(14591U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("PKPPJFNCORJASDQSUOUEDSJOOPMQVCENYFAMUFTUCGZBYWUICWTGWVEMYOVVISYMGLLYHJWDFUCWKSBQMHKEZVNZAKSQRAXEHDJDM");
    msg.links = 209534558U;

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
    msg.setTimeStamp(0.11244922597043583);
    msg.setSource(21482U);
    msg.setSourceEntity(123U);
    msg.setDestination(22420U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("ZDHLKMIKARSXQBYBUXQFFTYNESQEWDLYVBEDAIWEAPQTVHPHWPBINSFUCSAJIYJUSEJXAKZMCBTRWWMTQGNROURLTSOWFCRERQYNYGMBKVEDLODOZQMBLVPIUVKKMLJRNUYAITXWSJCEIVTDGOEOPZYJYPXAC");
    msg.links = 293667914U;

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
    msg.setTimeStamp(0.7354507433517101);
    msg.setSource(29335U);
    msg.setSourceEntity(86U);
    msg.setDestination(33786U);
    msg.setDestinationEntity(106U);
    msg.groupname.assign("CWTEXEJRTPTVGQVSMSCOSJKWWYJYILEJLRIJPRBHJSRLCWXZOVNMBUDNNDYUIAIVKMQMAZOAYEY");
    msg.action = 156U;
    msg.grouplist.assign("RCRMBVWIQMEXVKDA");

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
    msg.setTimeStamp(0.6334899788398964);
    msg.setSource(16317U);
    msg.setSourceEntity(45U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(41U);
    msg.groupname.assign("FFIFSLMQKGKRBOBQLSUJFDIEAQSECQZIITRNOMZSQXOADDSLLXPXPDQVVEUNDYAYESMYZQXKNDABUYUZINPMIFMPTCGTEAPTKRGOZULJYGHFHZKSBRJBGZBVWKDMVUAEVBCRALIONVYRCTPYOHMNJXGBUJNDWZPCXZRLTXTUQWVNGFYOWWKHYQJEQKLMCOSHWHMFBGAOBDHGEFXNRCHVSIDVAJPUTJHLJFCURNVIJSLCWRWEGAPIK");
    msg.action = 12U;
    msg.grouplist.assign("JXCGVHZMUWZPYRYLZNMUXLFTJUHDJOANEWKDVOATSYJQCXEFNRJZQKVNIUTGDYZTWYPCWAUMRBCHFVRITZIMBEUNLIPWCQSBJSOPASNRQCBPKFLHVLFGNIBPKQBOWPJVIUAPZMFDYSEVMTYMHXCEBALJHKZGZIXLCEDZFXDRUHVJDBLPKOSDVGDGW");

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
    msg.setTimeStamp(0.25122170818308076);
    msg.setSource(37356U);
    msg.setSourceEntity(53U);
    msg.setDestination(53604U);
    msg.setDestinationEntity(236U);
    msg.groupname.assign("MOPIMGWNOWFWOYYMERYQIMAXYTPBVCEQUDLJLSTDUETCOJKASTZNXSV");
    msg.action = 214U;
    msg.grouplist.assign("NTTPRRLSRZBYSHOLEPKDOGGQYBKIQOMGFDSOBXYAVEMBJXKPYOAMBLF");

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
    msg.setTimeStamp(0.9790860357765327);
    msg.setSource(51124U);
    msg.setSourceEntity(82U);
    msg.setDestination(38874U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8718035620376273;
    msg.sys_src = 14244U;

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
    msg.setTimeStamp(0.3838686752148165);
    msg.setSource(9594U);
    msg.setSourceEntity(2U);
    msg.setDestination(55358U);
    msg.setDestinationEntity(19U);
    msg.value = 0.5952080457687913;
    msg.sys_src = 25945U;

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
    msg.setTimeStamp(0.08977561679950008);
    msg.setSource(8204U);
    msg.setSourceEntity(217U);
    msg.setDestination(61774U);
    msg.setDestinationEntity(22U);
    msg.value = 0.4815901159735112;
    msg.sys_src = 56612U;

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
    msg.setTimeStamp(0.6777424659270912);
    msg.setSource(36275U);
    msg.setSourceEntity(106U);
    msg.setDestination(21140U);
    msg.setDestinationEntity(224U);
    msg.value = 0.8886320424148665;
    msg.units = 74U;

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
    msg.setTimeStamp(0.6809663353512223);
    msg.setSource(54588U);
    msg.setSourceEntity(228U);
    msg.setDestination(54320U);
    msg.setDestinationEntity(82U);
    msg.value = 0.21635176000434686;
    msg.units = 30U;

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
    msg.setTimeStamp(0.5176077992584193);
    msg.setSource(51201U);
    msg.setSourceEntity(198U);
    msg.setDestination(25303U);
    msg.setDestinationEntity(149U);
    msg.value = 0.9173578910576148;
    msg.units = 38U;

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
    msg.setTimeStamp(0.9200624956610369);
    msg.setSource(16121U);
    msg.setSourceEntity(192U);
    msg.setDestination(51496U);
    msg.setDestinationEntity(24U);
    msg.base_lat = 0.04909761287643166;
    msg.base_lon = 0.289998208473619;
    msg.base_time = 0.34725353603081266;

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
    msg.setTimeStamp(0.8071810244546467);
    msg.setSource(29249U);
    msg.setSourceEntity(124U);
    msg.setDestination(30767U);
    msg.setDestinationEntity(114U);
    msg.base_lat = 0.7348075081515697;
    msg.base_lon = 0.9798249351617465;
    msg.base_time = 0.4958931542384807;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 29373U;
    tmp_msg_0.priority = 16;
    tmp_msg_0.x = 474;
    tmp_msg_0.y = 27594;
    tmp_msg_0.z = 8694;
    tmp_msg_0.t = -23659;
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 49120U;
    tmp_tmp_msg_0_0.lat = 0.9510639437472412;
    tmp_tmp_msg_0_0.lon = 0.6768159422274063;
    tmp_tmp_msg_0_0.z = 0.9815892182848341;
    tmp_tmp_msg_0_0.z_units = 179U;
    tmp_tmp_msg_0_0.speed = 0.546822054527111;
    tmp_tmp_msg_0_0.speed_units = 213U;
    tmp_tmp_msg_0_0.syringe0 = 160U;
    tmp_tmp_msg_0_0.syringe1 = 155U;
    tmp_tmp_msg_0_0.syringe2 = 115U;
    tmp_tmp_msg_0_0.custom.assign("ZINQGXLKMGRWAUVRFJNMUDTAYAZYFBDXXYXSBZSVBBCPGWIQYSAEMIAQKRFCQGLFXQOKANOGFVPRJMGCCLYHOWSILZVMZFOLNNQEPCLHDJHCNWAUQFRBYBZNOSVODYTAJTEJVKCXJISACPZSCEKHIUTITXTXYURZWGDHWXHPFVPYROKQGULNJEHDMBERWHSSPKFUEULMKUGNZTRSMVCEQDUKIJEOGRDPVVNBP");
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
    msg.setTimeStamp(0.7818576904609505);
    msg.setSource(31401U);
    msg.setSourceEntity(89U);
    msg.setDestination(54507U);
    msg.setDestinationEntity(2U);
    msg.base_lat = 0.12443723111254812;
    msg.base_lon = 0.9575268904355918;
    msg.base_time = 0.9700365836421398;

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
    msg.setTimeStamp(0.6651631598572606);
    msg.setSource(11082U);
    msg.setSourceEntity(157U);
    msg.setDestination(7415U);
    msg.setDestinationEntity(213U);
    msg.base_lat = 0.7048558960019923;
    msg.base_lon = 0.9624237545449733;
    msg.base_time = 0.8875611419215129;
    const signed char tmp_msg_0[] = {-5, -112, 119, 45, 6, -100, -86, -66, -62, -70, -29, 38, 118, -76, 98, 34, -64, -107, 41, 69, -6, -58, 55, 48, -22, 77, -32, -35, -91, -26, 68, 121, 31, 67, -27, 80, -123, -89, -115, -34, 103, -86, -126, 33, -86, 56, -40, -75, -108, -113, 36, -46, -4, -101, -85, 22, -25, -93, 4, -32, -46, 102, -70, -102, -100, 74, 25, 14, -109, 109, 6, -61, -25, -120, -9};
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
    msg.setTimeStamp(0.2561809412720808);
    msg.setSource(30928U);
    msg.setSourceEntity(35U);
    msg.setDestination(40351U);
    msg.setDestinationEntity(182U);
    msg.base_lat = 0.402708948554663;
    msg.base_lon = 0.19633668678778715;
    msg.base_time = 0.7573945407793252;
    const signed char tmp_msg_0[] = {-79, -91, -32, -83, -59, 82, -18, 47, -5, -126, -16, 5, -111, 2, 124, 49, 106, -61, -99, 89, 71, -124, 76, -113, 50, 69, -97, -122, -66, 17, 98, -78, 107, 99, 93, 19, 77, -20, 5, 20, 32, 92, -49, -50, -86, 84, 50, -127, 24, -6, -23, 77, 85, 29, 76, -99, -90, -58, -81, -120, -37, -82, 78, -123, 100, 80, -113, -78, -27, 25, -104, 105, 84, 96, 5, -98, 65, -91, -25, -59, -12, -99, 36, -20, -91, -25, -61, 125, 13, 66, -49, 33, -11, 8, -36, -2, -7};
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
    msg.setTimeStamp(0.2304104927358228);
    msg.setSource(21186U);
    msg.setSourceEntity(146U);
    msg.setDestination(17508U);
    msg.setDestinationEntity(50U);
    msg.base_lat = 0.0944092723733746;
    msg.base_lon = 0.8355952401496632;
    msg.base_time = 0.574610566361589;
    const signed char tmp_msg_0[] = {-40, -71, 56, -71, 113, 100, -57, -72, -120, 50, -13, 69, -80, -79, 69, 41, -43, 12, -112, 62, 11, -15, -13, -91, 107, 15, 120, -22, -49, -39, 6, -1, -29, 89, 0, 54, 111, -49, -115, 115, 21, 95, -119, 74, 126, -111, 99, 9, -92, -22, 101, 55, 32, -10, 64, 43, 96, -100, -92, -23, -118, 50, 120, 74, 20, 54, 20, 109, -13, 87, 85, -9, -112, 119, -103};
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
    msg.setTimeStamp(0.5402201795142492);
    msg.setSource(33246U);
    msg.setSourceEntity(99U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(13U);
    msg.sys_id = 24440U;
    msg.priority = -104;
    msg.x = 4809;
    msg.y = 3368;
    msg.z = -19480;
    msg.t = 25237;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4359644442189615;
    tmp_msg_0.lon = 0.2449559458716113;
    tmp_msg_0.alt = 0.4807609269410086;
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
    msg.setTimeStamp(0.4045188545453148);
    msg.setSource(31535U);
    msg.setSourceEntity(161U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(19U);
    msg.sys_id = 38309U;
    msg.priority = -52;
    msg.x = 10897;
    msg.y = 29456;
    msg.z = 28324;
    msg.t = 2994;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 21963U;
    tmp_msg_0.lat = 0.41827784212334695;
    tmp_msg_0.lon = 0.0649876287342479;
    tmp_msg_0.z = 0.7986282218556722;
    tmp_msg_0.z_units = 129U;
    tmp_msg_0.speed = 0.8136746182987121;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.roll = 0.23037616516941073;
    tmp_msg_0.pitch = 0.22123575504511261;
    tmp_msg_0.yaw = 0.4525251585117961;
    tmp_msg_0.custom.assign("FGRPAYCCAQAAVCOBOWHAITEGIJSCIPWMZJHQIETKDGYFINDKATVQZNEDIFCRFUUZKYYVWNNGALOJUBWLASWIHDUQXOZGKQMRIEMFCDXRDOQKXXMGVEWFBZBJYTMDWSFOBCKNWHBBQGVGDFZPMLXUDXFZRUMJCYXSYJSHPWSIHOSNRKAISRTBVEZUVNBELLVLDWLQJOLLTGXSMUOZGYKNVFUHJAHPQEPENPJPNRPCTVXBPQJTRMTLYRZHOKHSMU");
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
    msg.setTimeStamp(0.48169895376949345);
    msg.setSource(62937U);
    msg.setSourceEntity(163U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(193U);
    msg.sys_id = 17723U;
    msg.priority = 68;
    msg.x = 21083;
    msg.y = -23241;
    msg.z = 28858;
    msg.t = 4362;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 195U;
    tmp_msg_0.op = 140U;
    tmp_msg_0.err_mean = 0.4466334592994259;
    tmp_msg_0.dist_min_abs = 0.05090273451801619;
    tmp_msg_0.dist_min_mean = 0.1540595363048778;
    tmp_msg_0.roll_rate_mean = 0.14786522557516568;
    tmp_msg_0.time = 0.8453983466309305;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 71U;
    tmp_tmp_msg_0_0.lon_gain = 0.19858534090914182;
    tmp_tmp_msg_0_0.lat_gain = 0.6960064060683518;
    tmp_tmp_msg_0_0.bond_thick = 0.0006167561637663299;
    tmp_tmp_msg_0_0.lead_gain = 0.513614326273486;
    tmp_tmp_msg_0_0.deconfl_gain = 0.15407267009746706;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.814434353763978;
    tmp_tmp_msg_0_0.safe_dist = 0.0015354194572769764;
    tmp_tmp_msg_0_0.deconflict_offset = 0.3779377317972611;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.7134700798964102;
    tmp_tmp_msg_0_0.accel_lim_x = 0.9014042622696816;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9279834784907486);
    msg.setSource(14133U);
    msg.setSourceEntity(95U);
    msg.setDestination(50953U);
    msg.setDestinationEntity(141U);
    msg.req_id = 60459U;
    msg.type = 91U;
    msg.max_size = 13389U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.13843584755858607;
    tmp_msg_0.base_lon = 0.016325911212195177;
    tmp_msg_0.base_time = 0.17724816184422998;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 15543U;
    tmp_tmp_msg_0_0.destination = 50205U;
    tmp_tmp_msg_0_0.timeout = 0.9150135155998452;
    IMC::QueryEntityState tmp_tmp_tmp_msg_0_0_0;
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
    msg.setTimeStamp(0.30407585369039136);
    msg.setSource(24466U);
    msg.setSourceEntity(99U);
    msg.setDestination(23350U);
    msg.setDestinationEntity(43U);
    msg.req_id = 9430U;
    msg.type = 65U;
    msg.max_size = 53602U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8336505496319885;
    tmp_msg_0.base_lon = 0.3248328994685675;
    tmp_msg_0.base_time = 0.6693772249367342;
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
    msg.setTimeStamp(0.039340684119469116);
    msg.setSource(451U);
    msg.setSourceEntity(196U);
    msg.setDestination(46262U);
    msg.setDestinationEntity(55U);
    msg.req_id = 27932U;
    msg.type = 157U;
    msg.max_size = 26138U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4317585606474551;
    tmp_msg_0.base_lon = 0.0291460496616478;
    tmp_msg_0.base_time = 0.6040721308872795;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 48014U;
    tmp_tmp_msg_0_0.destination = 55778U;
    tmp_tmp_msg_0_0.timeout = 0.4276081895676297;
    IMC::CurrentProfile tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.nbeams = 179U;
    tmp_tmp_tmp_msg_0_0_0.ncells = 28U;
    tmp_tmp_tmp_msg_0_0_0.coord_sys = 152U;
    IMC::CurrentProfileCell tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.cell_position = 0.7100353640550975;
    IMC::ADCPBeam tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.vel = 0.6755738593525056;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.amp = 0.18377771981719904;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.cor = 38U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.beams.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.profile.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.26782942156972056);
    msg.setSource(44847U);
    msg.setSourceEntity(225U);
    msg.setDestination(34343U);
    msg.setDestinationEntity(114U);
    msg.original_source = 63008U;
    msg.destination = 11990U;
    msg.timeout = 0.7603063567711316;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.002580821975673553;
    tmp_msg_0.units = 116U;
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
    msg.setTimeStamp(0.45301253598565583);
    msg.setSource(23665U);
    msg.setSourceEntity(68U);
    msg.setDestination(42094U);
    msg.setDestinationEntity(78U);
    msg.original_source = 47730U;
    msg.destination = 15541U;
    msg.timeout = 0.8889175425905713;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 93U;
    tmp_msg_0.error.assign("GFQHYETWPSYHOAKCYJKFLZBURRNLRMOWAYIYNTRMQOOW");
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
    msg.setTimeStamp(0.08836633153778284);
    msg.setSource(39318U);
    msg.setSourceEntity(55U);
    msg.setDestination(61630U);
    msg.setDestinationEntity(200U);
    msg.original_source = 3485U;
    msg.destination = 10932U;
    msg.timeout = 0.5113467367613593;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.755622972785964;
    tmp_msg_0.lon = 0.46477261038322293;
    tmp_msg_0.speed = 0.06546583814364926;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.limits = 158U;
    tmp_msg_0.max_depth = 0.2141562904130856;
    tmp_msg_0.min_alt = 0.16266356721556696;
    tmp_msg_0.time_limit = 0.9685542930354555;
    tmp_msg_0.controller.assign("ISGQSZTWADFVWUCLDYLJWZLMAUGTEPLPKAFWAGHRWTSOQYRBHCNVPXFTVLKEOVMHLWPBDNKKFZJLEQGBRCUNXQOCTZJPSZEGSNILLACFSVRDBUOXYJPJFXTRLIZHQUTKUFVMHXSMTPOSMYESZXNYRDIJSEEIFYDAHUHCGOYJUYPDBYAYOGIFXBXRUIQCMIECKITHWTDDMEAZNNEQWOUXOCPJNKKHMQJKGA");
    tmp_msg_0.custom.assign("ENWRVUAGXDKVTIWRTTKVGGXDMBYOJHKBUFKWOWSEIJDEMPHFSOAYDOQXIZBSECALLJBDQFNISJGBMAYMLGQVMCUFHNBOUWFCCHEHCWFZXUJZVZEATHRLVTRKSXKNXSDXYIWMJNLPQNKTSJVOPRYKMMQZAFTEPPDXZOAOCIVSFUJUOTSCJPYQZNZPELOAKLZQMQRIIUYMCINFSLBRBCYQT");
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
    msg.setTimeStamp(0.6346063033180175);
    msg.setSource(8793U);
    msg.setSourceEntity(176U);
    msg.setDestination(12305U);
    msg.setDestinationEntity(14U);
    msg.type = 226U;
    msg.comm_interface = 337U;
    msg.model = 29216U;
    msg.list.assign("OTGFXAUQXGGKEQJFPDIVZVDOLBXFSBKOCXDWZDPAEOVHEBWJJKBMMPHQSCCYFVSEVO");

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
    msg.setTimeStamp(0.056000334155798304);
    msg.setSource(34611U);
    msg.setSourceEntity(33U);
    msg.setDestination(53842U);
    msg.setDestinationEntity(234U);
    msg.type = 19U;
    msg.comm_interface = 46109U;
    msg.model = 40559U;
    msg.list.assign("IATUAJYXTZCMLSIWNJTDEBWDRHPFSNLLOVMHHSDMRFGEEOZOQUPFLHNXMCNVSBTCHNBXKGXDBIXENFVDWWSRYNJDLOQTPBQDVBVCZEWGPJ");

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
    msg.setTimeStamp(0.2080358167888966);
    msg.setSource(54678U);
    msg.setSourceEntity(60U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(251U);
    msg.type = 227U;
    msg.comm_interface = 22824U;
    msg.model = 39255U;
    msg.list.assign("NOYQNECBXCL");

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
    msg.setTimeStamp(0.23058060379151135);
    msg.setSource(15736U);
    msg.setSourceEntity(28U);
    msg.setDestination(25774U);
    msg.setDestinationEntity(182U);
    msg.type = 9U;
    msg.req_id = 3403304206U;
    msg.ttl = 29559U;
    msg.code = 46U;
    msg.destination.assign("MDMZWRDVOSRTDFNCIWAUQDQTTSILMELKAES");
    msg.source.assign("JJIPVDZACZQVKTWLVBRKGXESLWAKQINFDYHUK");
    msg.acknowledge = 71U;
    msg.status = 138U;
    const signed char tmp_msg_0[] = {-24, 74, -117, -104, 52, 64, -60, 107, -100, 69, -53, -2, 5, -111, 47, 61, -106, -115, -73, 4, 45, 30, 88, 116, -111, -58, 54, -53, -89, 32, -66, 62, 57, 123, -93, -69, -58, -12, -23, 120, -125, 86, 39, -27, 112, 47, -1, 46, -102, -15, -122, -114, 26, -9, 73, -28, -95, 114, -100, -5, 126, 76, 89, 35, -17, -127, 123, -59, 15, 27, -31, -102, -37, 71, 124, -127, -34, 106, 59, 113, -3, 11, -51, 102, 67, -110, 22, 38, -69, -76, 83, -125, -61, 57, -97, 60, 19, 11, -27, 23, 24, -93, 106, 95, -128, 29, -77, -89, -109, 24, -45, -128, 70, 83, -127, -100, 83, 74, 32, -7, 75, -33, 62, 25, -70, -76, -112, -104, -79, -74, 103, 98, 60, 116, -96, 10, 46, 123, -45, -37, -79, -113, -93, -91, -123, -59, 123, -26, 23, 60, 118, 67, 41, -79, 116, -116, 0, -93, -126, -72, 36, 49, 2, 104, -98, -106, -120, 120, -104, 54, -34, -52, 35, -107, -83, -67, 126, 116, -117, 63, 23, 5, -26, -99, -126, 100, -67, 60, -113, 121, -75, -124, 79, 119};
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
    msg.setTimeStamp(0.05289490974427269);
    msg.setSource(2092U);
    msg.setSourceEntity(243U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(71U);
    msg.type = 131U;
    msg.req_id = 504273307U;
    msg.ttl = 35020U;
    msg.code = 216U;
    msg.destination.assign("GCLUNKWPXLDGBRUBPFXFHSJOSVKLUJJGEDTHFSDKSH");
    msg.source.assign("YZDWTCFFGMSXFEGVHXX");
    msg.acknowledge = 133U;
    msg.status = 127U;
    const signed char tmp_msg_0[] = {-93, 12, 43, 83, -115, -104, 95, 4, 90, -6, 48, 35, 2, 46, -109, -60, 20, 44, -31, -40, 118, -64, -9, -121, -104, 104, -42, -46, -57, -15, -115, 105, -88, -64, -63, -39, -14, -55, -15, -32, -115, -79, -42, -45, -6, -41, -59, 12, -52, -85, -7, 86, -101, 77, 53, -15, 122, 31, 121, -100, -87, -39, 104, 56, -10, 1, 2, 81, 47, -124, 5, 69, 28, 122, -24, -36, 99, 40, -7, 26, -84, 117, -20, -12, 107, -74, -24, 92, -55, 102, -35, 124, 56, -107, -38, -16, -36, 77, 19, -68, -102, 106, 36, -118, -120, -29, 78, 108, 59, -53, 91, -41, 107, 25, 126, -19, 63, -50, -88, 111, 24, -53, 4, 75, 54, 96, 25, 17, -40, 6, 117, -84, 67, 5, -112, -21, -12, -100, -5, -53, -119, 108, -61, 98, 9, 96, -117, 126, -100, 111, 98, 14, 106, -79, 111, 51, -126, -86, 120, 123, -34, 63, -6, 72, 0, -21, 85, -111, -33, -59, -10, 48, -78, 73};
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
    msg.setTimeStamp(0.14552987532551698);
    msg.setSource(51708U);
    msg.setSourceEntity(125U);
    msg.setDestination(21719U);
    msg.setDestinationEntity(190U);
    msg.type = 91U;
    msg.req_id = 3599045108U;
    msg.ttl = 38638U;
    msg.code = 183U;
    msg.destination.assign("OSYMFHRFPYYFVRRVDITNNSYJJIAVNABSCPKJEGGKDGNWQGNZCPMXRSJBYTHQUIOSUHCDITTIZHOGKUQFVHOMTZJIVXHIDMMOMNXZQRGCLTMKSXPEBQCBKUXTJBPSE");
    msg.source.assign("JEMOXSUZKIELNVGLLILSZBSULDKFAVKVSZCABXLNEAIXVBCJBPPWYGXIYFQCFOUEKSJDJHYYPFFNNDGMBHDZZIVQTOFQEKAMWHPXBNQRWCXTLIDJGAYPCQRKRMSSCYZAY");
    msg.acknowledge = 96U;
    msg.status = 232U;
    const signed char tmp_msg_0[] = {52, 123, -11, -6, -17, 30, 114, -7, -22, -44, 99, -91, 110, 85, 9, 79, -79, 42, 66, -52, -76, -99, -20, -85, 51, 88, -27, 115, 35, 5, 4, -33, -27, -19, -111, 89, -97, -114, 75, -45, -38, -2, -124, -31, 73, -26, 92, -62, -116, -91, -83, -48, -74, -11, 48, 66, -67, -114, 75, 22, 4, -98, -100, -26, 79, -47, -29, 10, 122, -14, -90, -98, -62, -26, -25, 50, 51, -48, 29, -94, -53, 62, 50, 41, -79, 12, -50, 65, 68, -63, 25, -39, -30, -35, 22, 75, 44, -49, -17, -62};
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
    msg.setTimeStamp(0.07733117199498651);
    msg.setSource(32712U);
    msg.setSourceEntity(19U);
    msg.setDestination(53721U);
    msg.setDestinationEntity(30U);
    msg.id = 54U;
    msg.range = 0.08008762552294857;

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
    msg.setTimeStamp(0.23230018191518498);
    msg.setSource(46451U);
    msg.setSourceEntity(143U);
    msg.setDestination(46611U);
    msg.setDestinationEntity(10U);
    msg.id = 212U;
    msg.range = 0.4314856307737762;

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
    msg.setTimeStamp(0.9557046287741334);
    msg.setSource(52787U);
    msg.setSourceEntity(189U);
    msg.setDestination(17903U);
    msg.setDestinationEntity(237U);
    msg.id = 47U;
    msg.range = 0.3774997886290168;

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
    msg.setTimeStamp(0.31719018753578176);
    msg.setSource(56056U);
    msg.setSourceEntity(119U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("VSEOTXTUHMPWWJXPQPIXPZAMHCZWXPRMHPZMJIXJJZKFNDSCRZUKDHETLFSOJEEHKPAIVRMGMICJ");
    msg.lat = 0.2093121170581025;
    msg.lon = 0.7562798906520488;
    msg.depth = 0.26334455917888355;
    msg.query_channel = 10U;
    msg.reply_channel = 232U;
    msg.transponder_delay = 57U;

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
    msg.setTimeStamp(0.4959906471854023);
    msg.setSource(18091U);
    msg.setSourceEntity(93U);
    msg.setDestination(131U);
    msg.setDestinationEntity(254U);
    msg.beacon.assign("PYYUVXJCBPIAS");
    msg.lat = 0.08830019449184012;
    msg.lon = 0.6065571131183716;
    msg.depth = 0.624635662935638;
    msg.query_channel = 187U;
    msg.reply_channel = 59U;
    msg.transponder_delay = 210U;

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
    msg.setTimeStamp(0.4127588394370437);
    msg.setSource(46033U);
    msg.setSourceEntity(0U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("AENHBEFAPGBKOTXHSMBMFYRVQFNRHNWWPEVKBVTNWIIKMTZLQYGIMSJIDBLFORZNSBCYCQTIVSSMHTCNAOIZUPUZO");
    msg.lat = 0.8336101572189151;
    msg.lon = 0.9243534940113353;
    msg.depth = 0.3397903026529704;
    msg.query_channel = 6U;
    msg.reply_channel = 176U;
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
    msg.setTimeStamp(0.19749481111239753);
    msg.setSource(53489U);
    msg.setSourceEntity(254U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(236U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.5679118999296199);
    msg.setSource(3411U);
    msg.setSourceEntity(28U);
    msg.setDestination(51806U);
    msg.setDestinationEntity(160U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.8050468361644528);
    msg.setSource(43836U);
    msg.setSourceEntity(41U);
    msg.setDestination(51601U);
    msg.setDestinationEntity(46U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.3703249598871362);
    msg.setSource(43187U);
    msg.setSourceEntity(0U);
    msg.setDestination(2803U);
    msg.setDestinationEntity(138U);
    IMC::TotalHeading tmp_msg_0;
    tmp_msg_0.value = 0.3544687839790067;
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
    msg.setTimeStamp(0.48407126781351517);
    msg.setSource(38614U);
    msg.setSourceEntity(95U);
    msg.setDestination(36019U);
    msg.setDestinationEntity(68U);
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.34946031589974336;
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
    msg.setTimeStamp(0.5728142752472009);
    msg.setSource(36158U);
    msg.setSourceEntity(180U);
    msg.setDestination(42491U);
    msg.setDestinationEntity(75U);
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.5524131695328751;
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
    msg.setTimeStamp(0.6345236718006715);
    msg.setSource(44163U);
    msg.setSourceEntity(65U);
    msg.setDestination(27432U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.8319001960310372;
    msg.lon = 0.747097962521125;
    msg.depth = 0.26796488453448586;
    msg.sentence.assign("GGZTATNOBOJCBQVNVJIJZKAPNMSWQAUATCMCOPUNCDUKLHVMKRMJPWQHVXERYEBMRSAMISVJHWCILPXDNLSHNZXIQYRKSNGPRUIBHDCGNEVYZJGUZEQTDLFZIUETEBSASRSXVGGOJUCYOXLPXJTKWQDI");
    msg.txtime = 0.9495036794827227;
    msg.modem_type.assign("CWVKRNGEVQBXFMOORYACDYTIAJASFEVH");
    msg.sys_src.assign("ITINLPOFJJMGMIURRZUVVWUYKYXHGDVXCDESLHGIBJMPYOKDCBVPJVYJFXAZHBIUIIJXLZOWEZVEDQFNQCZAHYPSHDUZOXJLPCUQBQOMSYEWLQRMRLFVKAEWTJTCDSYNXRBDCAAMNKMZNF");
    msg.seq = 30599U;
    msg.sys_dst.assign("DKYBVJKEWITOCLMFHBCTYWZLNIRISQJJDGSDGCOUTDHIWDKEAHABZBWKVOFGSXQJJJYADALUHDXZXKOJBKOPGCHGL");
    msg.flags = 155U;
    const signed char tmp_msg_0[] = {61, 4, -62, -12, -107, -125, 35, 1, -115, 2, -14, 44, -125, -125, -5, 2, 111, -57, 104, -15, -85, -35, -69, -6, -27, -31, 86, 3, -11, 61, 74, 35, 75, -33, 61, -17, 43, -67, -117, 32, -50, 53, -124, 97, -108, -35, 40, 17, 36, 92, -12, -73, -104, -23, -73, -60, -16, -41, -82, -9, 96, -29, 58, -119, -122, 62, 44, 28, -56, -39, -24, 25, 98, -77, -73, 59, 65, -4, 104, 126, -66, 8, 45, -4, -115, -85, -45, 33, -59, 107, 88, -24, 76, -31, 112, -73, -3, -7, -76, 85, -90, 13, -74, -1, -64, -84, 22, -79, 115, 47, -79, -98, 52, -55, 101, 92, -67, 49, 98, 103, 5, -48, 120, -20, -72, 54, -40, -122, -117, -128, -37, 124, 28, -26, -97, 1, -50, 6, 88, 80, 14, -34, -48, -67, 98, -46, -103, 26, 31, 23, -39, 44, -15, -49, 89, -98, -10, -125, -102, 47, -80, -29, 91, -110, -44, -99, -78, 50, -7, -79, 56, 116, -86, 91, 19, 41, 14, -115, -73, -56, -87, 60, -114, -41, -2, -5, -101, 24, -17, 9, -17, 124, 80, -50, 25, 21, 114, -110, -34, 84, 6, -28, -78, -56, -111, 5, 63, -18, 6, 63, -99, 36, 50, 107, -76, -78, -46, 63, -40, 47, -49, 80, -20, -123, 47, 91, -104, -73, -6, 125, 104};
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
    msg.setTimeStamp(0.30099904800226207);
    msg.setSource(60895U);
    msg.setSourceEntity(163U);
    msg.setDestination(49924U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.32799925650964945;
    msg.lon = 0.9827889728188547;
    msg.depth = 0.8263132079616204;
    msg.sentence.assign("YAZNPOSXNRBYOWWDCHQDOGADJQVTGKEVIYYMDWLJCUKDABVNDNIUCOLGLJLXXJGPOCQNPLVOJITRRIABEHVOQKZXJHOFDRICHFLANQLSUCWGKRCMMCQYOUNVSSFZKMYVHMDDXCNAMSUEAHADHUIFY");
    msg.txtime = 0.501952180643948;
    msg.modem_type.assign("YQLKLSBQRWZZYUBFMKZCFMODQLUNCUKVOHVAZMMJNPRWZHPPHGRIYKIDAXQUCEXYHXJXFZBBRIFRGWPGSQJPDSFMECHSTFUJAWOICTHNJWOVNNVSCEACIEKKUTBGGFUSDPHMOVXUDOOVYQBVWKBAXYIRRVQIRFTAAJILNPWNZNMHGQFOLX");
    msg.sys_src.assign("ORPVSQPNMKHSAVWCMLOYJCVAEHYICMLKIUMJJGCYCEZDMTJQPMDPGFTLOPXFDADCXSEGMNUKBOGJVSBQVXQWPHAZFTETIITJLERDOCQOJHBNQTBRWGUFUOLPPRXFYFPQTNALNUAIQTXKYWZREDJTFDMADORIKMGOPKHWNYBRKJZBQZFIHIXXENZWSHDL");
    msg.seq = 56642U;
    msg.sys_dst.assign("ZQDTGCDAOCWNGREWSNROUHXJLUVYRYYKEFBRHKXYFATCEUHJSANHPQBUCNGRFDXPSLWGTJPVKRKYYDQWGGOECMVJIPKXXVBOPMPZQJTTCJHDLLHWIEFBHKANIVCRNTZXZCJDVISPJBXOYBSWLBKFQMLFQIXIYTWEGHILHZXKFSOSFBNOEMRUFQDGPP");
    msg.flags = 11U;
    const signed char tmp_msg_0[] = {5, 112, -78, 117, 30, 7, 44, -75, -30, -11, 115, -94, -63, -112, 65, -50, -87, -119, 97, 59, 116, -30, 109, 66, -74, 48, -86, -87, 61, 22, 61, -5, -51, 114, -94, -8, -5, 15, -100, -118, 54, -29, 7, 117, 2, 20, -117, -56, 7, 33, -56, -22, 91, -92, 3, -96, -1, -2, 119, -22, -72, -125, -103, 90, -43, 37, 53, -13, 46, -91, -65, 90, -24, -58, 122, 83, -63, 72, -120, -64, -51, -118, -16, -16, -48, 122, -57, 47, 86, -79, -70, 43, -29, -91};
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
    msg.setTimeStamp(0.8280746020463253);
    msg.setSource(51633U);
    msg.setSourceEntity(110U);
    msg.setDestination(15512U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.09583041559469418;
    msg.lon = 0.4591428184294044;
    msg.depth = 0.6585981393906006;
    msg.sentence.assign("PICTMFIXRIQHKMQDYPFMLPLSGYPULJKWVIVIKFCRDVBLSOEEWBKZHADHOOHCEXGDQATNCTZPKBNFVNJXRCTGTCYEJQSRARSGBHIGXOATMAUZKZMHVCFQGVAUSPEBPWRXKWTRXKMJCZQCSQSYUHBDYHUUEEOVIBGWJRAEXNAVWIJUZBNCIWSNFTDDQYZZMJNVDNXWLLU");
    msg.txtime = 0.3120478444456809;
    msg.modem_type.assign("ESEJHZWIUDHXDCACPRLRVKOPXMNVPXCIRBQMKAGFHWWENWLYGALRZJDIVJOHFUTPAEMKYIVGSTIBSCSNRPIPFZHJLHCKZZMENMYBDRMXOKUHCZQVGYALTVCDKXGTXDEIISHBGDZGMOXHNOTJBWATQJKVFWQXPPME");
    msg.sys_src.assign("BVZZRFYLDNDJJSPGOEQOUANXDSIRDBKUVITWKKQQPPJKZPCDLAAAJLWNCQMHXMBRHAURYAFSJSLTTIGNMEGZZYVAYPXDDWXLZPYWXRFCQOKF");
    msg.seq = 43264U;
    msg.sys_dst.assign("EJXTTRJDJHRRVGXWKEGRCBFBYNAZQLVQXLFUJVOUGSNJYHZTGOIVLUQFFBWDDLRNIQOKVGKZNUJDAHAZNSSLLZXBNCXSAPTYUQTPBWKLEQOCWTMDDBPIPTYHMMBHUDYAYELMCHKOXEMPRCKGCKSUDRQFNVCCDHOTBQIWWGVZFTNAYKEJZIP");
    msg.flags = 37U;
    const signed char tmp_msg_0[] = {93, 105, -35, -93, 30, 122, 69, -44, -25, 110, 59, -110, -109, -114, 48, 35, -18, -92, -98, 4, -84, -112, -42, -49, 39, 15, 80, -127, -93};
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
    msg.setTimeStamp(0.030699339518466706);
    msg.setSource(17628U);
    msg.setSourceEntity(124U);
    msg.setDestination(25746U);
    msg.setDestinationEntity(7U);
    msg.op = 20U;
    msg.system.assign("EUNLZFKFWFERIBKXCSOXBLKZOCNSCTWLQAGPOMWHZWJA");
    msg.range = 0.36241956627269867;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 11186U;
    tmp_msg_0.destination.assign("CCPNFDFVCOTGQIWLLNHVFNOQKWOZZQXANFSMPGOJTAULVWCKNWSLGIKHFKOUOGHFQKQIZKRXHZXLRJMUEUUMWNSJNMMUYERSXJDGPHRWHSNHRCGHTJZWIEAIHBOCSERPPVAIQMLXYYAFJDVBKJDBRCOLEMMYTPDBELGZQKJQILWOBGOBEIVXNFETSWAXUDQTMIXPXKRYRJJGDMTBZUVYKQCD");
    tmp_msg_0.timeout = 0.9712898250194818;
    tmp_msg_0.sms_text.assign("ZATANGFGEVLEWMJHLPEBQJQRYNZDCCZDSGJYGRSIEEJNRMNOCZZVBNHVBLMADAQGTPXXRQDENFIWTIRIUFDGWYJOONHTYQHXKBWROIQZADVHOPWGAHXQDIOWNFKT");
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
    msg.setTimeStamp(0.44471680381315903);
    msg.setSource(32592U);
    msg.setSourceEntity(182U);
    msg.setDestination(49713U);
    msg.setDestinationEntity(230U);
    msg.op = 234U;
    msg.system.assign("ZBILEIMNABFSNKGAWXNXYFMWJBLGDLOAOODILVKQUAENSZRM");
    msg.range = 0.5498656363645829;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 53764U;
    tmp_msg_0.custom.assign("SMUOTNPGRRVUERMBSPFDQXTJGZYDKXUMWENJCTCSSUMKYXAQBZKHEPOQKVPVBJPGVHVTHAJWRTMFBLMLHPCUCPYBDTWZCJXNRWJXELMAXOYDUHSYKDRFQZJKGYFDCLLRWFIMKSEAYR");
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
    msg.setTimeStamp(0.28046508596582964);
    msg.setSource(43755U);
    msg.setSourceEntity(252U);
    msg.setDestination(28645U);
    msg.setDestinationEntity(81U);
    msg.op = 160U;
    msg.system.assign("OQUKPBANXHAYQVEJSCSIYMWEGIIAACNHUPDQLBJOJFXIQRCHFPXVBMPURPNOEGGBHWHWFPXPMSEGQBEOLFWPRLTJCVXWNRWNDICQYUXLIKAMDNDRFBMWFKTKDQMVUGVHZAAJFNVJZLSOTJGSGSZDKZQJZISSTIFBKAYTONGYCEMLEFBYGRPMHSWTKZTLLNT");
    msg.range = 0.0008222164701072732;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BDCKGWAAFWJGEARQQIRAWFCESQBTCAPYBPTZRTVGBEFADLIXXMYXWULIEDLFKTJKGGCPJFUOHYFAQGZRL");
    tmp_msg_0.dist = 0.04476472485126637;
    tmp_msg_0.err = 0.8076440173161331;
    tmp_msg_0.ctrl_imp = 0.2580617289173728;
    tmp_msg_0.rel_dir_x = 0.3342569557043146;
    tmp_msg_0.rel_dir_y = 0.4299093642858478;
    tmp_msg_0.rel_dir_z = 0.5452120450922754;
    tmp_msg_0.err_x = 0.7062011136268781;
    tmp_msg_0.err_y = 0.881043075493779;
    tmp_msg_0.err_z = 0.3186979741125757;
    tmp_msg_0.rf_err_x = 0.3994216370382814;
    tmp_msg_0.rf_err_y = 0.26722821540582187;
    tmp_msg_0.rf_err_z = 0.5421343613619524;
    tmp_msg_0.rf_err_vx = 0.3421161072256873;
    tmp_msg_0.rf_err_vy = 0.020132435562122075;
    tmp_msg_0.rf_err_vz = 0.8479857783911556;
    tmp_msg_0.ss_x = 0.7680346403706728;
    tmp_msg_0.ss_y = 0.9571140807583182;
    tmp_msg_0.ss_z = 0.9020676575450328;
    tmp_msg_0.virt_err_x = 0.7523506932056869;
    tmp_msg_0.virt_err_y = 0.9514392663768202;
    tmp_msg_0.virt_err_z = 0.6672100473497409;
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
    msg.setTimeStamp(0.7263822778534876);
    msg.setSource(41861U);
    msg.setSourceEntity(102U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.8921256251251776);
    msg.setSource(4339U);
    msg.setSourceEntity(124U);
    msg.setDestination(61263U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.5076476211818575);
    msg.setSource(50377U);
    msg.setSourceEntity(220U);
    msg.setDestination(34609U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.5660649848343332);
    msg.setSource(56524U);
    msg.setSourceEntity(203U);
    msg.setDestination(41108U);
    msg.setDestinationEntity(180U);
    msg.list.assign("FEFTDWCPQVVMSLXXHCIJLQNIZOAADF");

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
    msg.setTimeStamp(0.807903972224403);
    msg.setSource(39653U);
    msg.setSourceEntity(56U);
    msg.setDestination(12844U);
    msg.setDestinationEntity(130U);
    msg.list.assign("MDEITFKFBRSILQNNB");

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
    msg.setTimeStamp(0.44758788381777204);
    msg.setSource(12117U);
    msg.setSourceEntity(142U);
    msg.setDestination(51193U);
    msg.setDestinationEntity(130U);
    msg.list.assign("DVIAHTNCCLUZADWQZTRUUXRMWPWKFZTRLCUILKSLWSPDZXGRIPHAVSHEJMZ");

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
    msg.setTimeStamp(0.017726403051375184);
    msg.setSource(21069U);
    msg.setSourceEntity(70U);
    msg.setDestination(45996U);
    msg.setDestinationEntity(143U);
    msg.peer.assign("CGWNQZLEQLSGYPDWBMORD");
    msg.rssi = 0.8630404670352421;
    msg.integrity = 49338U;

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
    msg.setTimeStamp(0.5089229519441829);
    msg.setSource(19405U);
    msg.setSourceEntity(222U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(135U);
    msg.peer.assign("YQRBPSXLSRUATVZPYNPTCXIJFBWSFIKWEQKULQJJAHTUWEYDXFSJRKINHNVTASVN");
    msg.rssi = 0.719091789618268;
    msg.integrity = 47249U;

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
    msg.setTimeStamp(0.8316373169559012);
    msg.setSource(6048U);
    msg.setSourceEntity(177U);
    msg.setDestination(55207U);
    msg.setDestinationEntity(213U);
    msg.peer.assign("DOOXQVXXJEXUDMDEWJEDIGJUIAOEJPHRZYQHPQWY");
    msg.rssi = 0.17789973075101595;
    msg.integrity = 55484U;

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
    msg.setTimeStamp(0.8138286429733487);
    msg.setSource(33117U);
    msg.setSourceEntity(87U);
    msg.setDestination(10837U);
    msg.setDestinationEntity(176U);
    msg.req_id = 4057U;
    msg.destination.assign("NSUSIHFBSFQKPWOKJACJMLBZQRHDUHNIRLSVBNOVUXXWOEOZQWNETY");
    msg.timeout = 0.9769687715936387;
    msg.range = 0.6184810881702557;
    msg.type = 232U;
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 65U;
    tmp_msg_0.command = 55U;
    tmp_msg_0.settings.assign("ALAMMZMUVLEQGGQNPXKWSPWXCGRDSOUMSEDXMEYGAJCUGPESFNBKDJBSFQSQNPNCFCVGOMNAKNRRCAFQDRGUIPYYCRLDNIMORTFJCSZTUHFBYPWTFVTVZTXXHKPUJH");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 59059U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6021013510929795;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.25238244308882074;
    tmp_tmp_tmp_msg_0_0_0.eta = 2573979009U;
    tmp_tmp_tmp_msg_0_0_0.duration = 875U;
    tmp_tmp_msg_0_0.waypoints.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("OANPZNUPYRJQACPDWDYARIWSDMTYCGZFHQAZWNTWXPRGVEJGBCRMIKOIGKNQGCIFBDIUXWEHVHEWESMVTKDSZDKTKKTVLIABVKMSSHMJFVVIZQXOMYPKLAKBGJELHBZXUPMYSANQWLNORUHUBEAJSWQJTHFLELYLNTFYFIFDPQRTQACUXV");
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
    msg.setTimeStamp(0.44651480830956647);
    msg.setSource(54535U);
    msg.setSourceEntity(237U);
    msg.setDestination(23356U);
    msg.setDestinationEntity(86U);
    msg.req_id = 58403U;
    msg.destination.assign("SDQATEVGMWCULORIIKWBVRRLAICHHJXMIFWYSGDBUSGKDUHJUVNBSENFFFTFSAJLTLC");
    msg.timeout = 0.8946304466419313;
    msg.range = 0.40977375641286173;
    msg.type = 18U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OPGRWHQPAJTBHARVTGKITWZXJOOVLLMNADDBGOSOEESIEXSJMFIHYFQYNFYRAKSKOWBDXNXCKOLNJQDCUMVXERVBLEUSAYKOSAHXUTVPUQJCDPZFUB");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 4721U;
    tmp_tmp_msg_0_0.lat = 0.1570865642731929;
    tmp_tmp_msg_0_0.lon = 0.09079566829763386;
    tmp_tmp_msg_0_0.z = 0.5364472506480705;
    tmp_tmp_msg_0_0.z_units = 54U;
    tmp_tmp_msg_0_0.speed = 0.5179905125277351;
    tmp_tmp_msg_0_0.speed_units = 242U;
    tmp_tmp_msg_0_0.duration = 20392U;
    tmp_tmp_msg_0_0.radius = 0.4401101602122235;
    tmp_tmp_msg_0_0.flags = 39U;
    tmp_tmp_msg_0_0.custom.assign("LHDWTTICRYLHIAULSEUXFUQTTLUPHSHOMXBACRBBRSYTMMFCAFZXEWJYIGXNBIWQIVJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::YoYo tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 31747U;
    tmp_tmp_msg_0_1.lat = 0.9382272592013746;
    tmp_tmp_msg_0_1.lon = 0.0367019195316729;
    tmp_tmp_msg_0_1.z = 0.8380022710263436;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_tmp_msg_0_1.amplitude = 0.905015833052315;
    tmp_tmp_msg_0_1.pitch = 0.5607978129412315;
    tmp_tmp_msg_0_1.speed = 0.9114720286321254;
    tmp_tmp_msg_0_1.speed_units = 117U;
    tmp_tmp_msg_0_1.custom.assign("FSXZRTIMLDQVWCLKCVXFJDCCQPKMHPFJBNYQWPRNFXMEESJVTUPUXDIAYIKTZPRYSGOWITKEARVZGNCL");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.4765573810423478);
    msg.setSource(54297U);
    msg.setSourceEntity(152U);
    msg.setDestination(28378U);
    msg.setDestinationEntity(108U);
    msg.req_id = 16772U;
    msg.destination.assign("THXETJFENJWQQYXFGYBMCRCKXHMCAINKQTMBIKQE");
    msg.timeout = 0.6897602467197708;
    msg.range = 0.9582913482739198;
    msg.type = 167U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 57349U;
    tmp_msg_0.lat = 0.8944578171830402;
    tmp_msg_0.lon = 0.9734659124248796;
    tmp_msg_0.z = 0.7937820094581851;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.speed = 0.8011257834443655;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.roll = 0.6284692014334973;
    tmp_msg_0.pitch = 0.5116030704108501;
    tmp_msg_0.yaw = 0.995409092461341;
    tmp_msg_0.custom.assign("YYCQQKAQBCDTYTOSABVRWDAQQIDZWEFXOTTVTFYBPLPOSSZIONELVGGZDNRZKSBGJVZMSRNOCMRTVCRXINPKXWZPKEDEEFPUZEGKXGNXDIAHFWTYVJQIJHHHFTCLPLJPFXLDGFUDOWFHAYUYRHLBCSGJDRODQEEHVVMNCAZMJPBNQYJBVUKIJEKMJ");
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
    msg.setTimeStamp(0.7147235965005904);
    msg.setSource(55593U);
    msg.setSourceEntity(166U);
    msg.setDestination(60846U);
    msg.setDestinationEntity(76U);
    msg.req_id = 47988U;
    msg.type = 186U;
    msg.status = 145U;
    msg.info.assign("VJKIYARKNDQTZKYBCMKWNNVGOPTHLLJXTLYIALMNCZIEGNUUJUMFGAEITMPEWJUZSFJANJDHFHPDQSHKBKEVTWUUGBXQAXRTFMDIRJSQXVHTLHGTBECIPSMPFSOYRVHNYIVWZJDITLWDVNRZCYLBSUEXLOCURCXAPGBMFOKPWDNCQGI");
    msg.range = 0.7898052864856213;

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
    msg.setTimeStamp(0.15469964842339423);
    msg.setSource(61710U);
    msg.setSourceEntity(16U);
    msg.setDestination(12374U);
    msg.setDestinationEntity(79U);
    msg.req_id = 47288U;
    msg.type = 109U;
    msg.status = 101U;
    msg.info.assign("RCQOQSYHUFUCQHBDQMVYEWTYZODX");
    msg.range = 0.5765911823495863;

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
    msg.setTimeStamp(0.5178924388580861);
    msg.setSource(32228U);
    msg.setSourceEntity(19U);
    msg.setDestination(61985U);
    msg.setDestinationEntity(9U);
    msg.req_id = 53041U;
    msg.type = 126U;
    msg.status = 77U;
    msg.info.assign("INJRRGDTEMBLNYRUY");
    msg.range = 0.7270540714376963;

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
    msg.setTimeStamp(0.011383294960698231);
    msg.setSource(54034U);
    msg.setSourceEntity(36U);
    msg.setDestination(2741U);
    msg.setDestinationEntity(54U);
    msg.system.assign("PHQFPSXBCACWOVYQQAWDMTERNLCSZQOODOMTMFPWSMJPIHOSTVTQJWMQGCESXULLAULEZQQBR");
    msg.op = 138U;

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
    msg.setTimeStamp(0.7093564056203884);
    msg.setSource(10181U);
    msg.setSourceEntity(93U);
    msg.setDestination(27880U);
    msg.setDestinationEntity(35U);
    msg.system.assign("LJCRYLCIHWMXQNMZERPNRGNXXEHDGWOXTANJHDFDEMSBIGXLRDQJXSGAFISZDBNMJIYSTYEPS");
    msg.op = 106U;

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
    msg.setTimeStamp(0.5557700092493678);
    msg.setSource(531U);
    msg.setSourceEntity(57U);
    msg.setDestination(53324U);
    msg.setDestinationEntity(175U);
    msg.system.assign("GJPRVFIHUIXDAZCDMLSYOLEDOECGKWCMJJBYTXACQRDQSEPMNKTZTMUIVLNXOAIHIUFZTCDHFIHFVRWQJZLELPLNZHYKSVFHXYOEKORCOYLBJEZXEZUSTYWAYSSRKGXRBMLBBHMMNVGUGMACEOFBPBIKQUGNUOJGQVTHGBWNKWSDPURF");
    msg.op = 137U;

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
    msg.setTimeStamp(0.5066978780517495);
    msg.setSource(33881U);
    msg.setSourceEntity(60U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(17U);
    msg.value = 12245;

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
    msg.setTimeStamp(0.03447609176212063);
    msg.setSource(53874U);
    msg.setSourceEntity(29U);
    msg.setDestination(33388U);
    msg.setDestinationEntity(72U);
    msg.value = 513;

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
    msg.setTimeStamp(0.5975032219385762);
    msg.setSource(45145U);
    msg.setSourceEntity(35U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(14U);
    msg.value = -11486;

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
    msg.setTimeStamp(0.4285410785119388);
    msg.setSource(28052U);
    msg.setSourceEntity(201U);
    msg.setDestination(50617U);
    msg.setDestinationEntity(176U);
    msg.value = 0.48828829442162114;

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
    msg.setTimeStamp(0.5369878958935972);
    msg.setSource(55884U);
    msg.setSourceEntity(247U);
    msg.setDestination(2584U);
    msg.setDestinationEntity(116U);
    msg.value = 0.20015605252621138;

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
    msg.setTimeStamp(0.43399557432158187);
    msg.setSource(62780U);
    msg.setSourceEntity(110U);
    msg.setDestination(16501U);
    msg.setDestinationEntity(122U);
    msg.value = 0.9985328113357043;

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
    msg.setTimeStamp(0.393949319532362);
    msg.setSource(56150U);
    msg.setSourceEntity(10U);
    msg.setDestination(47532U);
    msg.setDestinationEntity(119U);
    msg.value = 0.025027456803987214;

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
    msg.setTimeStamp(0.21818944279546315);
    msg.setSource(64566U);
    msg.setSourceEntity(0U);
    msg.setDestination(24575U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8940150498011097;

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
    msg.setTimeStamp(0.6969095768480631);
    msg.setSource(59010U);
    msg.setSourceEntity(129U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(192U);
    msg.value = 0.1951445626617735;

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
    msg.setTimeStamp(0.04384324928284822);
    msg.setSource(55885U);
    msg.setSourceEntity(37U);
    msg.setDestination(6207U);
    msg.setDestinationEntity(136U);
    msg.validity = 61026U;
    msg.type = 14U;
    msg.utc_year = 6870U;
    msg.utc_month = 59U;
    msg.utc_day = 84U;
    msg.utc_time = 0.5932498152337485;
    msg.lat = 0.7331144413052192;
    msg.lon = 0.2534445436970889;
    msg.height = 0.4336219048660225;
    msg.satellites = 150U;
    msg.cog = 0.6386794974085669;
    msg.sog = 0.36339057021267074;
    msg.hdop = 0.5428750156934768;
    msg.vdop = 0.8469646473374215;
    msg.hacc = 0.672377806234757;
    msg.vacc = 0.257830919678523;

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
    msg.setTimeStamp(0.5098387574886286);
    msg.setSource(6634U);
    msg.setSourceEntity(97U);
    msg.setDestination(8784U);
    msg.setDestinationEntity(107U);
    msg.validity = 64897U;
    msg.type = 193U;
    msg.utc_year = 55177U;
    msg.utc_month = 27U;
    msg.utc_day = 231U;
    msg.utc_time = 0.5151537039025352;
    msg.lat = 0.8902542422981418;
    msg.lon = 0.26180936076548633;
    msg.height = 0.5071079470634824;
    msg.satellites = 24U;
    msg.cog = 0.7225763342416217;
    msg.sog = 0.012232286177897511;
    msg.hdop = 0.1852262912605206;
    msg.vdop = 0.009776497887989177;
    msg.hacc = 0.01394262350405795;
    msg.vacc = 0.17912545338133445;

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
    msg.setTimeStamp(0.15192179302058584);
    msg.setSource(35674U);
    msg.setSourceEntity(69U);
    msg.setDestination(436U);
    msg.setDestinationEntity(254U);
    msg.validity = 3363U;
    msg.type = 166U;
    msg.utc_year = 24731U;
    msg.utc_month = 232U;
    msg.utc_day = 236U;
    msg.utc_time = 0.5032260566582216;
    msg.lat = 0.5911060437186434;
    msg.lon = 0.82661753078787;
    msg.height = 0.49707353814400146;
    msg.satellites = 241U;
    msg.cog = 0.6064992433277425;
    msg.sog = 0.1267459983364353;
    msg.hdop = 0.4120509363674364;
    msg.vdop = 0.11193125983736141;
    msg.hacc = 0.8436626235762842;
    msg.vacc = 0.304218240100515;

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
    msg.setTimeStamp(0.6855334066259264);
    msg.setSource(15664U);
    msg.setSourceEntity(118U);
    msg.setDestination(13346U);
    msg.setDestinationEntity(45U);
    msg.time = 0.7421157827443057;
    msg.phi = 0.6671797137234292;
    msg.theta = 0.6159683440932959;
    msg.psi = 0.04243459763976454;
    msg.psi_magnetic = 0.7403044280578834;

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
    msg.setTimeStamp(0.2547353396318278);
    msg.setSource(37769U);
    msg.setSourceEntity(234U);
    msg.setDestination(65006U);
    msg.setDestinationEntity(60U);
    msg.time = 0.8950049753420817;
    msg.phi = 0.6411646918655961;
    msg.theta = 0.7062922208539743;
    msg.psi = 0.36497326774206196;
    msg.psi_magnetic = 0.10865304308501333;

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
    msg.setTimeStamp(0.6207347914492051);
    msg.setSource(52955U);
    msg.setSourceEntity(161U);
    msg.setDestination(63908U);
    msg.setDestinationEntity(99U);
    msg.time = 0.5337377690147305;
    msg.phi = 0.3734192779753652;
    msg.theta = 0.07006120524252701;
    msg.psi = 0.6573041308115115;
    msg.psi_magnetic = 0.108768430366453;

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
    msg.setTimeStamp(0.3733423978620841);
    msg.setSource(35057U);
    msg.setSourceEntity(103U);
    msg.setDestination(27996U);
    msg.setDestinationEntity(114U);
    msg.time = 0.16482648659142418;
    msg.x = 0.29437633531384044;
    msg.y = 0.35321987183383996;
    msg.z = 0.8268744373456757;
    msg.timestep = 0.253532025669982;

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
    msg.setTimeStamp(0.2536498659932962);
    msg.setSource(34788U);
    msg.setSourceEntity(111U);
    msg.setDestination(43637U);
    msg.setDestinationEntity(10U);
    msg.time = 0.14173849339524114;
    msg.x = 0.25067729764157376;
    msg.y = 0.11220723387199061;
    msg.z = 0.9308203373022002;
    msg.timestep = 0.7819962632728628;

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
    msg.setTimeStamp(0.7223958780518829);
    msg.setSource(54822U);
    msg.setSourceEntity(115U);
    msg.setDestination(17570U);
    msg.setDestinationEntity(151U);
    msg.time = 0.879716364861529;
    msg.x = 0.40540299781786215;
    msg.y = 0.38274480299876323;
    msg.z = 0.1456057169446313;
    msg.timestep = 0.2678629399372908;

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
    msg.setTimeStamp(0.23183487721724738);
    msg.setSource(59191U);
    msg.setSourceEntity(135U);
    msg.setDestination(17438U);
    msg.setDestinationEntity(195U);
    msg.time = 0.6448243961586916;
    msg.x = 0.19484108743845496;
    msg.y = 0.6696535658338896;
    msg.z = 0.22355075142626146;

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
    msg.setTimeStamp(0.9071503255472025);
    msg.setSource(37121U);
    msg.setSourceEntity(140U);
    msg.setDestination(43201U);
    msg.setDestinationEntity(105U);
    msg.time = 0.3023722761999317;
    msg.x = 0.007564461547056034;
    msg.y = 0.015424092971691117;
    msg.z = 0.3098228660901655;

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
    msg.setTimeStamp(0.805912699056259);
    msg.setSource(51214U);
    msg.setSourceEntity(12U);
    msg.setDestination(50288U);
    msg.setDestinationEntity(114U);
    msg.time = 0.8124920750910924;
    msg.x = 0.8457838521904509;
    msg.y = 0.25483690018437377;
    msg.z = 0.23056540076979326;

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
    msg.setTimeStamp(0.015030629951860774);
    msg.setSource(52929U);
    msg.setSourceEntity(236U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(214U);
    msg.time = 0.9299132086277532;
    msg.x = 0.7226873967299001;
    msg.y = 0.6313940143184918;
    msg.z = 0.8644749588137516;

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
    msg.setTimeStamp(0.9939601810891944);
    msg.setSource(43352U);
    msg.setSourceEntity(107U);
    msg.setDestination(51938U);
    msg.setDestinationEntity(13U);
    msg.time = 0.7009723003882172;
    msg.x = 0.2954669308097846;
    msg.y = 0.9923218188287889;
    msg.z = 0.18092404026826958;

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
    msg.setTimeStamp(0.7699023127851077);
    msg.setSource(15517U);
    msg.setSourceEntity(78U);
    msg.setDestination(51670U);
    msg.setDestinationEntity(86U);
    msg.time = 0.49470919082401654;
    msg.x = 0.5917552164628573;
    msg.y = 0.8452952510770871;
    msg.z = 0.14388397601102343;

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
    msg.setTimeStamp(0.359306703798118);
    msg.setSource(64578U);
    msg.setSourceEntity(21U);
    msg.setDestination(37375U);
    msg.setDestinationEntity(234U);
    msg.time = 0.5780982181657455;
    msg.x = 0.9596844790225997;
    msg.y = 0.4791176311675408;
    msg.z = 0.42703215799969996;

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
    msg.setTimeStamp(0.8847059922361715);
    msg.setSource(13511U);
    msg.setSourceEntity(69U);
    msg.setDestination(57605U);
    msg.setDestinationEntity(225U);
    msg.time = 0.9913574828775769;
    msg.x = 0.5568300333487767;
    msg.y = 0.8018053707365156;
    msg.z = 0.2671140403607004;

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
    msg.setTimeStamp(0.29547967465357494);
    msg.setSource(62979U);
    msg.setSourceEntity(135U);
    msg.setDestination(6837U);
    msg.setDestinationEntity(186U);
    msg.time = 0.1395651665078117;
    msg.x = 0.797314234871855;
    msg.y = 0.175274676519806;
    msg.z = 0.5909168708203638;

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
    msg.setTimeStamp(0.029993755067157957);
    msg.setSource(31917U);
    msg.setSourceEntity(119U);
    msg.setDestination(55426U);
    msg.setDestinationEntity(236U);
    msg.validity = 37U;
    msg.x = 0.8016471873685158;
    msg.y = 0.8003462235819266;
    msg.z = 0.2162657063895338;

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
    msg.setTimeStamp(0.2273093707356869);
    msg.setSource(10996U);
    msg.setSourceEntity(82U);
    msg.setDestination(13274U);
    msg.setDestinationEntity(173U);
    msg.validity = 159U;
    msg.x = 0.035840089885885384;
    msg.y = 0.828642664518856;
    msg.z = 0.5091010801041256;

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
    msg.setTimeStamp(0.8726418767240264);
    msg.setSource(27183U);
    msg.setSourceEntity(67U);
    msg.setDestination(8620U);
    msg.setDestinationEntity(199U);
    msg.validity = 144U;
    msg.x = 0.24465368440643154;
    msg.y = 0.48385403293893714;
    msg.z = 0.618491255288894;

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
    msg.setTimeStamp(0.5637624586610532);
    msg.setSource(31571U);
    msg.setSourceEntity(213U);
    msg.setDestination(26747U);
    msg.setDestinationEntity(212U);
    msg.validity = 87U;
    msg.x = 0.08731013564641221;
    msg.y = 0.4214954359176182;
    msg.z = 0.6699983550416153;

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
    msg.setTimeStamp(0.15156464845898843);
    msg.setSource(31015U);
    msg.setSourceEntity(134U);
    msg.setDestination(35275U);
    msg.setDestinationEntity(7U);
    msg.validity = 108U;
    msg.x = 0.5704407931990283;
    msg.y = 0.22197916265155215;
    msg.z = 0.7460902914735122;

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
    msg.setTimeStamp(0.5852644797421901);
    msg.setSource(54507U);
    msg.setSourceEntity(232U);
    msg.setDestination(43840U);
    msg.setDestinationEntity(68U);
    msg.validity = 222U;
    msg.x = 0.2576210565419701;
    msg.y = 0.35938149007570774;
    msg.z = 0.39628991964486737;

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
    msg.setTimeStamp(0.061192432857233636);
    msg.setSource(57102U);
    msg.setSourceEntity(89U);
    msg.setDestination(53294U);
    msg.setDestinationEntity(240U);
    msg.time = 0.9160929639230598;
    msg.x = 0.8520043794776261;
    msg.y = 0.04402641964618492;
    msg.z = 0.7589688516265709;

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
    msg.setTimeStamp(0.7133789374125984);
    msg.setSource(30178U);
    msg.setSourceEntity(11U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(95U);
    msg.time = 0.5184284937881842;
    msg.x = 0.8242394855916266;
    msg.y = 0.9643621534677785;
    msg.z = 0.5801791279866133;

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
    msg.setTimeStamp(0.6800630366365955);
    msg.setSource(34513U);
    msg.setSourceEntity(62U);
    msg.setDestination(39420U);
    msg.setDestinationEntity(209U);
    msg.time = 0.6882787367074695;
    msg.x = 0.9920019925649636;
    msg.y = 0.544308186064812;
    msg.z = 0.6738006771570317;

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
    msg.setTimeStamp(0.9014888655364431);
    msg.setSource(51188U);
    msg.setSourceEntity(19U);
    msg.setDestination(19231U);
    msg.setDestinationEntity(232U);
    msg.validity = 77U;
    msg.value = 0.1348344193221377;

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
    msg.setTimeStamp(0.8689988809396938);
    msg.setSource(63236U);
    msg.setSourceEntity(111U);
    msg.setDestination(26127U);
    msg.setDestinationEntity(69U);
    msg.validity = 169U;
    msg.value = 0.5650792861300492;

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
    msg.setTimeStamp(0.7551759597084637);
    msg.setSource(64085U);
    msg.setSourceEntity(180U);
    msg.setDestination(65097U);
    msg.setDestinationEntity(207U);
    msg.validity = 156U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1154330908407103;
    tmp_msg_0.y = 0.8052370716656061;
    tmp_msg_0.z = 0.5770590257867949;
    tmp_msg_0.phi = 0.027993723613627397;
    tmp_msg_0.theta = 0.21142335478606467;
    tmp_msg_0.psi = 0.693755596388509;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7155721776684713;
    tmp_msg_1.beam_height = 0.5483944935567598;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.10482076256774808;

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
    msg.setTimeStamp(0.7347429770727004);
    msg.setSource(62306U);
    msg.setSourceEntity(221U);
    msg.setDestination(15524U);
    msg.setDestinationEntity(173U);
    msg.value = 0.18680449326393855;

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
    msg.setTimeStamp(0.867841107857288);
    msg.setSource(49869U);
    msg.setSourceEntity(70U);
    msg.setDestination(39146U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8375524536269152;

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
    msg.setTimeStamp(0.5383124793884254);
    msg.setSource(61081U);
    msg.setSourceEntity(133U);
    msg.setDestination(63183U);
    msg.setDestinationEntity(170U);
    msg.value = 0.6920916532866682;

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
    msg.setTimeStamp(0.8790225035174758);
    msg.setSource(50937U);
    msg.setSourceEntity(247U);
    msg.setDestination(54577U);
    msg.setDestinationEntity(215U);
    msg.value = 0.8795190846728757;

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
    msg.setTimeStamp(0.9173840239993638);
    msg.setSource(20145U);
    msg.setSourceEntity(57U);
    msg.setDestination(35653U);
    msg.setDestinationEntity(249U);
    msg.value = 0.012598948731550874;

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
    msg.setTimeStamp(0.33145586621717393);
    msg.setSource(24471U);
    msg.setSourceEntity(193U);
    msg.setDestination(59561U);
    msg.setDestinationEntity(20U);
    msg.value = 0.2783281710195741;

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
    msg.setTimeStamp(0.43146246533248556);
    msg.setSource(38449U);
    msg.setSourceEntity(234U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(29U);
    msg.value = 0.6804394645297888;

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
    msg.setTimeStamp(0.24629705539271207);
    msg.setSource(8034U);
    msg.setSourceEntity(45U);
    msg.setDestination(33446U);
    msg.setDestinationEntity(245U);
    msg.value = 0.4848463341070667;

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
    msg.setTimeStamp(0.682405382614357);
    msg.setSource(25123U);
    msg.setSourceEntity(81U);
    msg.setDestination(11756U);
    msg.setDestinationEntity(192U);
    msg.value = 0.6955549915748278;

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
    msg.setTimeStamp(0.8771549438011463);
    msg.setSource(24232U);
    msg.setSourceEntity(232U);
    msg.setDestination(30319U);
    msg.setDestinationEntity(116U);
    msg.value = 0.9187527758844453;

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
    msg.setTimeStamp(0.23546166315949213);
    msg.setSource(25082U);
    msg.setSourceEntity(142U);
    msg.setDestination(65404U);
    msg.setDestinationEntity(75U);
    msg.value = 0.5138239487423745;

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
    msg.setTimeStamp(0.18601708129272687);
    msg.setSource(56435U);
    msg.setSourceEntity(87U);
    msg.setDestination(57648U);
    msg.setDestinationEntity(94U);
    msg.value = 0.5575901092374986;

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
    msg.setTimeStamp(0.06944381391959698);
    msg.setSource(3477U);
    msg.setSourceEntity(88U);
    msg.setDestination(3061U);
    msg.setDestinationEntity(168U);
    msg.value = 0.087075789954699;

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
    msg.setTimeStamp(0.6596046572191168);
    msg.setSource(24907U);
    msg.setSourceEntity(202U);
    msg.setDestination(25418U);
    msg.setDestinationEntity(48U);
    msg.value = 0.8018372529342505;

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
    msg.setTimeStamp(0.8889681742140293);
    msg.setSource(28738U);
    msg.setSourceEntity(40U);
    msg.setDestination(38572U);
    msg.setDestinationEntity(32U);
    msg.value = 0.5525251072429661;

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
    msg.setTimeStamp(0.3360538998398571);
    msg.setSource(50381U);
    msg.setSourceEntity(254U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(181U);
    msg.value = 0.3380829901142668;

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
    msg.setTimeStamp(0.7596651833261507);
    msg.setSource(46976U);
    msg.setSourceEntity(135U);
    msg.setDestination(51699U);
    msg.setDestinationEntity(86U);
    msg.value = 0.48896794674986443;

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
    msg.setTimeStamp(0.5437498874511952);
    msg.setSource(27670U);
    msg.setSourceEntity(66U);
    msg.setDestination(56301U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4170308054291332;

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
    msg.setTimeStamp(0.1032123619760208);
    msg.setSource(6258U);
    msg.setSourceEntity(157U);
    msg.setDestination(19859U);
    msg.setDestinationEntity(223U);
    msg.value = 0.34016015770018526;

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
    msg.setTimeStamp(0.22300609415640882);
    msg.setSource(59737U);
    msg.setSourceEntity(2U);
    msg.setDestination(32012U);
    msg.setDestinationEntity(26U);
    msg.value = 0.29276788653363917;

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
    msg.setTimeStamp(0.2133073428789607);
    msg.setSource(63564U);
    msg.setSourceEntity(94U);
    msg.setDestination(30511U);
    msg.setDestinationEntity(17U);
    msg.value = 0.040787739918453525;

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
    msg.setTimeStamp(0.2634620460437218);
    msg.setSource(48386U);
    msg.setSourceEntity(108U);
    msg.setDestination(41128U);
    msg.setDestinationEntity(197U);
    msg.value = 0.056107149542540036;

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
    msg.setTimeStamp(0.4308942548120178);
    msg.setSource(32005U);
    msg.setSourceEntity(204U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(4U);
    msg.value = 0.01546529805013619;

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
    msg.setTimeStamp(0.4949379980624633);
    msg.setSource(60625U);
    msg.setSourceEntity(58U);
    msg.setDestination(46643U);
    msg.setDestinationEntity(124U);
    msg.value = 0.3759974050298315;

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
    msg.setTimeStamp(0.30049882568801334);
    msg.setSource(13870U);
    msg.setSourceEntity(186U);
    msg.setDestination(57164U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.6297548869211045;
    msg.speed = 0.9893020133559032;
    msg.turbulence = 0.7164005394812702;

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
    msg.setTimeStamp(0.6880798128984273);
    msg.setSource(51657U);
    msg.setSourceEntity(240U);
    msg.setDestination(4842U);
    msg.setDestinationEntity(97U);
    msg.direction = 0.6461310055072698;
    msg.speed = 0.3649682310957053;
    msg.turbulence = 0.8581885286797469;

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
    msg.setTimeStamp(0.819840756307116);
    msg.setSource(51355U);
    msg.setSourceEntity(60U);
    msg.setDestination(24271U);
    msg.setDestinationEntity(129U);
    msg.direction = 0.5872496178822374;
    msg.speed = 0.9149309898123708;
    msg.turbulence = 0.25094664797575883;

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
    msg.setTimeStamp(0.44880732273958723);
    msg.setSource(52058U);
    msg.setSourceEntity(205U);
    msg.setDestination(44159U);
    msg.setDestinationEntity(67U);
    msg.value = 0.9631050344931604;

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
    msg.setTimeStamp(0.7440708850262621);
    msg.setSource(16499U);
    msg.setSourceEntity(152U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6545491657933178;

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
    msg.setTimeStamp(0.5693575757454917);
    msg.setSource(25942U);
    msg.setSourceEntity(77U);
    msg.setDestination(64109U);
    msg.setDestinationEntity(115U);
    msg.value = 0.04397219592954271;

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
    msg.setTimeStamp(0.4439077636183867);
    msg.setSource(12058U);
    msg.setSourceEntity(38U);
    msg.setDestination(32977U);
    msg.setDestinationEntity(154U);
    msg.value.assign("WINBIQSWDPRQIYTBZFZWMUSRLPSHMVJVOUKNSZNPDBFXHNFEVBCPUHDBMPMIWJDKULPKEXTKZUWCVHYLDLQDLYOOPCZQYVTXOAKHEQNSFYSMCSAEDBBDOHDXAOUYYAJQZXFNGWASBGFUSLMRRTJCV");

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
    msg.setTimeStamp(0.0030475167084031973);
    msg.setSource(50964U);
    msg.setSourceEntity(151U);
    msg.setDestination(20905U);
    msg.setDestinationEntity(175U);
    msg.value.assign("YSIWSAVHRFNXVIQNEMWIYDQYZMTVMQHDSDUNODFTURWHXJFGRTJPNUWAKUGZZOTRLFIGMOPMKFDPQNVZCCTDJPVQCJQMEXGQWUXGAKXPKLCZTSGIJDIABJVPXNZVARKHPYVCWICXGBMFLOIBOEFOGONHFRSHSNBXLQYYZTCCNSZGRLDZWQUZJEVRBAHCKLCYUTAGKMMRQOBPBIHHKEWDEEELANSOXXAKPVSJUUFJOHBUB");

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
    msg.setTimeStamp(0.9874389428682717);
    msg.setSource(62139U);
    msg.setSourceEntity(41U);
    msg.setDestination(50771U);
    msg.setDestinationEntity(149U);
    msg.value.assign("UPLHDHIABTMSFIUZEUMNSKGEGFBOLXZPBYBZVTOGEEDDSEATVGOYMJQYFLXLBAPNOGJCTHVOMNDFPCHXFPSVJXIAPJOREDGPRGHWACLKRX");

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
    msg.setTimeStamp(0.6524868557376184);
    msg.setSource(64142U);
    msg.setSourceEntity(168U);
    msg.setDestination(11104U);
    msg.setDestinationEntity(222U);
    const signed char tmp_msg_0[] = {-22, 74, 17, 98, 52, 42, 62, -47, -45, 95, -31, 40, -118, 22, -59, 30, 86, -63, -58, -51, 104, -67, 58, -37, 114, -74, -62, -72, -83, 59, 46, 33, -122, 8, 94, -52, 66};
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
    msg.setTimeStamp(0.34194676140114244);
    msg.setSource(31614U);
    msg.setSourceEntity(92U);
    msg.setDestination(56728U);
    msg.setDestinationEntity(153U);
    const signed char tmp_msg_0[] = {-52, -80, -108, 110, -113, 14, -67, -85, -35, 88, 88, -88, -63, -124, 31, -66, 25, 19, 12, 84, -84, 123, 66, -104, 23, 24, -73, -34, -6, -32, -42, 98, -62, 75, -52, -128, -69, 41, -115, 60, 100, -104, -46, 108, -64, -54, -53, 64, 101, -10, 58, 10, 123, 94, -117, -38, -115, 18, 110, -30, 51, 68, 33, -17, 1, -103, 126, -66, -124, -94, 63, -2, 12, 70, -92, -96, -66, -60, -27, -1, 103, -3, -40, 15, -31, -90, -54, 124, -74, 11, -16, 105, 85, -51, 111, 17, 93, -65, -62, -53, 73, 63, 117, -23, -121, 28, -5, 94, 42, -42, 113, -97, 41, -79, 0, 40, -9, 125, -115, -44, 41, 97, -9, -31, -9, 124, 108, -80, 96, 8, 71, -122, -94, -78, 66, 116, 40, -115, 125, -125, -99, 117, -12, 24, -59, -1, -104, -35, -68, 90, -56, -23, -37, -127, 123, 36, -31, -100, 114, 21, 44, -5, 116, 63, -115, 2, -89, 71, -19, 20, 13, 8, -15, 113, 29, 25, -78, 91};
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
    msg.setTimeStamp(0.4146825180589818);
    msg.setSource(135U);
    msg.setSourceEntity(159U);
    msg.setDestination(13095U);
    msg.setDestinationEntity(147U);
    const signed char tmp_msg_0[] = {-35, 17, -95, -38, 74, -22, -28, 126, -117, 28, 107, 120, 15, 22, -47, 5, -96, -35, 43, 121, 41, 52, 79, 109, 22, -26, -46, -73, 60, 58, 81, -72, -68, 105, -115, 45, 21, -28, -67, 29, 37, -89, 87, -76, 87, -85, -26, 91, 72, -126, 125};
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
    msg.setTimeStamp(0.5885651673342512);
    msg.setSource(17089U);
    msg.setSourceEntity(20U);
    msg.setDestination(33232U);
    msg.setDestinationEntity(118U);
    msg.value = 0.40446830030804914;

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
    msg.setTimeStamp(0.7697218226189153);
    msg.setSource(21054U);
    msg.setSourceEntity(226U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9702681530325247;

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
    msg.setTimeStamp(0.5049721800378829);
    msg.setSource(35585U);
    msg.setSourceEntity(213U);
    msg.setDestination(14030U);
    msg.setDestinationEntity(53U);
    msg.value = 0.465849923356939;

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
    msg.setTimeStamp(0.1440477654504554);
    msg.setSource(30884U);
    msg.setSourceEntity(71U);
    msg.setDestination(51916U);
    msg.setDestinationEntity(217U);
    msg.type = 30U;
    msg.frequency = 2300853796U;
    msg.min_range = 36159U;
    msg.max_range = 19706U;
    msg.bits_per_point = 127U;
    msg.scale_factor = 0.9122287269363984;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.36574202087364804;
    tmp_msg_0.beam_height = 0.2421303320019106;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-7, 103, 26, 22, 33, 11, -67, 94, 39, -50, -108, 17, 39, 10, -56, -115, -74, -11, 38, 45, -75, 104, -77, 68, 109, 22, 77, 8, -122, -68, 118, -10, -37, 88, 40, -118, 55, -33, 36, -71, 106, -26, 46, -98, 16, -66, -60, -80, -90, -46, 122, 46, -14, 107, 68, -77, -56, -125, 76, -79, 6, 101, 87, 46, 24, -13, -72, 95, -25, -6, -52, -99, -18, 52, 76, -100, -10, -114, -18, -39, -50, 103, 78, -61, 63, -30, -22, -30, 68, -93, 25, -110, 20, 27, 35, -114, 106, -124, -2, 110, -52, 89, 52, -99, 16, 5, 61, 125, -101, 99, -1, -115, -81, 17, 0, 31, -50, 102, -43, 17, 76, 67, 5, -71, 69, -21, 62, -40, 113, -81, 28, -112, 69, 56, 47, -13, -57, 87, 5, 98, -45};
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
    msg.setTimeStamp(0.27323803874240005);
    msg.setSource(13120U);
    msg.setSourceEntity(123U);
    msg.setDestination(50305U);
    msg.setDestinationEntity(222U);
    msg.type = 193U;
    msg.frequency = 2663052369U;
    msg.min_range = 59034U;
    msg.max_range = 52097U;
    msg.bits_per_point = 117U;
    msg.scale_factor = 0.243758652555079;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9088550460763707;
    tmp_msg_0.beam_height = 0.8289768308590612;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-61, -82, -49, -86, 51, -91, -65, -105, 83, -32, 41, 106, -4, -81, -95, -17, -106, -64, 106, -125, -108, -111, 69, 33, -46, -114, 10, 95, -126, 68, -106, -81, 68, -120, -114, 76, 66, 73, -16, 56, -50, -44, -13, -125, 45, -71, 25, -38, -78, 20, 15, 45, 68, 112, 90, -36, 70, 70, -84, 15, 27, -17, -17, -106, 74, 28, -111, 114, 21, 14, -19, -50, -7, -100, -42, 73, -128, -116, 74, -115, -108, 37, -46, 13, 119, -37, 11, -128, 69, -71, -58, 109, 52, 97, -23, -53, -60, -5, 47, 99, -77, 56, -55, -100, 77, -3, 101, -59, -107, 36, 117, 78, -92, 76, -58, 33, 40, 98, 91, 36, -48, 89, 66, 71, 8, -14, 18, 116, 19, 69, -57, -2, -113, 98, -108, 120, 107, -120, 105, 111, -112, 65, 71, -19, 0, -66, -42, -82, 106, 13, 6, 104, -10, 7, -51, -68, -38, 62, 73, -112, 113, -80, 9, 121, -51, 40, 87, 69, 36, -40, 87, 83, 115, -79, 18, 5, -100, 102, -83};
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
    msg.setTimeStamp(0.12448676944719972);
    msg.setSource(22146U);
    msg.setSourceEntity(131U);
    msg.setDestination(61659U);
    msg.setDestinationEntity(43U);
    msg.type = 93U;
    msg.frequency = 3623710499U;
    msg.min_range = 37982U;
    msg.max_range = 34214U;
    msg.bits_per_point = 6U;
    msg.scale_factor = 0.3911941669697495;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9392328581655517;
    tmp_msg_0.beam_height = 0.002361057514599696;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-84, 100, -113, 47, -106, 16, -19, 39, -90, -68, -108, -105, -80, 19, 43, 124, 82, 35, 103, -12, 112, -97, -49, -48, -93, -41, -32, -73, 112, -41, 66, 30, -26, 50, -16, 72, -112, 122, -43, -117, 11, -108, 125, -69, 84, 92, -75, 61, 7, 69, -127, -119, -106, 68, 109, 122, -36, -46, 34, 43, -103, -43, 33, 101, 96, 57, 56, -51, -58, -54, 114, -125, 107, 125, 98, 40, -33, -51, -96, 18, 99, -53, 75, -90, 106, -81, -106, 122, 91, -52, 21, 58, -128, 20, -35};
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
    msg.setTimeStamp(0.3228752897623226);
    msg.setSource(2865U);
    msg.setSourceEntity(149U);
    msg.setDestination(13671U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.4894629229878308);
    msg.setSource(22530U);
    msg.setSourceEntity(47U);
    msg.setDestination(36693U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.8379256967732667);
    msg.setSource(50292U);
    msg.setSourceEntity(92U);
    msg.setDestination(16983U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.4791989253199117);
    msg.setSource(65207U);
    msg.setSourceEntity(132U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(217U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.1900801162922814);
    msg.setSource(49542U);
    msg.setSourceEntity(92U);
    msg.setDestination(7074U);
    msg.setDestinationEntity(1U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.04216850619146095);
    msg.setSource(25856U);
    msg.setSourceEntity(153U);
    msg.setDestination(3352U);
    msg.setDestinationEntity(80U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.6379684806702072);
    msg.setSource(5517U);
    msg.setSourceEntity(47U);
    msg.setDestination(37668U);
    msg.setDestinationEntity(225U);
    msg.value = 0.614840963818972;
    msg.confidence = 0.5612119385697614;
    msg.opmodes.assign("MWAUKXSZZUTUTXCWPJXUNTCYIVBFXHDMGBBQDIWIMEEAYSZHNFTVUPFONDKMRSEJOMUCEKSTKJPXHRCJKJFCBCFRGNOORPLOIGHSBAYBMSORQHNIHNMHDRAWWVTCFZEQWNDHSIPJEAZUKLVRFOHXEPYNBRSQCGHGGGNMAJJEDXMTKNOCTFPWMRDVK");

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
    msg.setTimeStamp(0.6249507844297364);
    msg.setSource(53258U);
    msg.setSourceEntity(55U);
    msg.setDestination(17175U);
    msg.setDestinationEntity(34U);
    msg.value = 0.4970141053025451;
    msg.confidence = 0.9313474179558953;
    msg.opmodes.assign("QCCVPHMKOLWZRJNBPATZZKPRWQAXSWOKLEIRVSSODQAWGQLNGVYDDYXLITPEPHAXIRAOMXNKWFVFKXIOZWBCGDCKUIODSCAJEOBKDRYUJNPJDIRFNAZYBETBGVJYEUMEQXVS");

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
    msg.setTimeStamp(0.3916020384829165);
    msg.setSource(55106U);
    msg.setSourceEntity(29U);
    msg.setDestination(5685U);
    msg.setDestinationEntity(166U);
    msg.value = 0.7706623512448195;
    msg.confidence = 0.19476662142531986;
    msg.opmodes.assign("DZYUFIAKHYUBLKSXQTZPLPMFKYSJCPBMWSCTKLYQGQSDQJGNBIJCHVOORFPVUOYIYQMBVVIGMTSPHDKVKGUZDIXCCASVNUFGRDDRQEBUFDNRTOLPWPGYSXQLFTKSBMALRHOQPEFPRSNZULVOHTMLETZZYNVWEE");

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
    msg.setTimeStamp(0.8999203761927762);
    msg.setSource(55237U);
    msg.setSourceEntity(102U);
    msg.setDestination(55118U);
    msg.setDestinationEntity(242U);
    msg.itow = 572432995U;
    msg.lat = 0.3094445931218184;
    msg.lon = 0.39672432578555683;
    msg.height_ell = 0.6503562822946878;
    msg.height_sea = 0.3331648454940629;
    msg.hacc = 0.5170030855894326;
    msg.vacc = 0.5383338467484748;
    msg.vel_n = 0.5804678119051716;
    msg.vel_e = 0.543588274872128;
    msg.vel_d = 0.34875452621999625;
    msg.speed = 0.8031276001734351;
    msg.gspeed = 0.9738978302019092;
    msg.heading = 0.07799704221427539;
    msg.sacc = 0.08195902257298104;
    msg.cacc = 0.7052499984825235;

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
    msg.setTimeStamp(0.007579172271007462);
    msg.setSource(50444U);
    msg.setSourceEntity(121U);
    msg.setDestination(4002U);
    msg.setDestinationEntity(218U);
    msg.itow = 4004186620U;
    msg.lat = 0.6685154538399436;
    msg.lon = 0.46377143959964606;
    msg.height_ell = 0.7256549627619099;
    msg.height_sea = 0.9106643954537216;
    msg.hacc = 0.4209454906582477;
    msg.vacc = 0.7665807615977107;
    msg.vel_n = 0.7420952563650145;
    msg.vel_e = 0.3917614969490648;
    msg.vel_d = 0.9603988805399045;
    msg.speed = 0.9162481360903121;
    msg.gspeed = 0.6467496768106781;
    msg.heading = 0.8806810681974572;
    msg.sacc = 0.0794359848506011;
    msg.cacc = 0.3448818408864751;

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
    msg.setTimeStamp(0.43397680656190074);
    msg.setSource(22861U);
    msg.setSourceEntity(208U);
    msg.setDestination(34559U);
    msg.setDestinationEntity(98U);
    msg.itow = 1860259742U;
    msg.lat = 0.8178317222997862;
    msg.lon = 0.6614534646436299;
    msg.height_ell = 0.7597582816325821;
    msg.height_sea = 0.21410055980270948;
    msg.hacc = 0.7538678337536012;
    msg.vacc = 0.6256542071006042;
    msg.vel_n = 0.45879515821916517;
    msg.vel_e = 0.8191496872020363;
    msg.vel_d = 0.39023949034964567;
    msg.speed = 0.6929326594739899;
    msg.gspeed = 0.8976086414045669;
    msg.heading = 0.7545737214049845;
    msg.sacc = 0.5278765722475837;
    msg.cacc = 0.45168175318708903;

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
    msg.setTimeStamp(0.04859743821908857);
    msg.setSource(65241U);
    msg.setSourceEntity(70U);
    msg.setDestination(22971U);
    msg.setDestinationEntity(189U);
    msg.id = 66U;
    msg.value = 0.4417315472080797;

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
    msg.setTimeStamp(0.14774651162122632);
    msg.setSource(52430U);
    msg.setSourceEntity(217U);
    msg.setDestination(9114U);
    msg.setDestinationEntity(165U);
    msg.id = 70U;
    msg.value = 0.7730130689907102;

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
    msg.setTimeStamp(0.6767100997529932);
    msg.setSource(12555U);
    msg.setSourceEntity(217U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(77U);
    msg.id = 78U;
    msg.value = 0.8245162161911149;

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
    msg.setTimeStamp(0.20216941269680777);
    msg.setSource(6801U);
    msg.setSourceEntity(162U);
    msg.setDestination(21968U);
    msg.setDestinationEntity(145U);
    msg.x = 0.8532431033941988;
    msg.y = 0.8273414891327335;
    msg.z = 0.3248678385008764;
    msg.phi = 0.4484119886868214;
    msg.theta = 0.05634348079594864;
    msg.psi = 0.36764085985015715;

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
    msg.setTimeStamp(0.2602096237740539);
    msg.setSource(30089U);
    msg.setSourceEntity(122U);
    msg.setDestination(47412U);
    msg.setDestinationEntity(49U);
    msg.x = 0.15086287130451392;
    msg.y = 0.06968856375009036;
    msg.z = 0.005501084262184652;
    msg.phi = 0.5429673907641926;
    msg.theta = 0.6357010439425579;
    msg.psi = 0.7022671305762814;

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
    msg.setTimeStamp(0.5564841912231472);
    msg.setSource(48603U);
    msg.setSourceEntity(174U);
    msg.setDestination(20312U);
    msg.setDestinationEntity(254U);
    msg.x = 0.8954121834612291;
    msg.y = 0.12214564637811731;
    msg.z = 0.6359074098873808;
    msg.phi = 0.4431507946388096;
    msg.theta = 0.7553437075637365;
    msg.psi = 0.728203738417392;

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
    msg.setTimeStamp(0.5317158267764264);
    msg.setSource(57941U);
    msg.setSourceEntity(182U);
    msg.setDestination(60921U);
    msg.setDestinationEntity(85U);
    msg.beam_width = 0.35358354967949746;
    msg.beam_height = 0.38157686839555294;

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
    msg.setTimeStamp(0.040066701108402825);
    msg.setSource(12026U);
    msg.setSourceEntity(161U);
    msg.setDestination(63826U);
    msg.setDestinationEntity(43U);
    msg.beam_width = 0.5166630773985348;
    msg.beam_height = 0.5445241487816898;

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
    msg.setTimeStamp(0.9581548759930757);
    msg.setSource(65009U);
    msg.setSourceEntity(75U);
    msg.setDestination(43091U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.7615204506452118;
    msg.beam_height = 0.15136253384174858;

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
    msg.setTimeStamp(0.13494485023155278);
    msg.setSource(3254U);
    msg.setSourceEntity(183U);
    msg.setDestination(51822U);
    msg.setDestinationEntity(206U);
    msg.sane = 85U;

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
    msg.setTimeStamp(0.8354542756047082);
    msg.setSource(22008U);
    msg.setSourceEntity(221U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(117U);
    msg.sane = 18U;

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
    msg.setTimeStamp(0.9441153920293165);
    msg.setSource(35867U);
    msg.setSourceEntity(50U);
    msg.setDestination(14846U);
    msg.setDestinationEntity(221U);
    msg.sane = 231U;

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
    msg.setTimeStamp(0.09078473001786758);
    msg.setSource(36253U);
    msg.setSourceEntity(97U);
    msg.setDestination(15008U);
    msg.setDestinationEntity(120U);
    msg.value = 0.35402004260345377;

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
    msg.setTimeStamp(0.6951508701802153);
    msg.setSource(23026U);
    msg.setSourceEntity(1U);
    msg.setDestination(3823U);
    msg.setDestinationEntity(67U);
    msg.value = 0.3276677584915324;

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
    msg.setTimeStamp(0.804357973786423);
    msg.setSource(56952U);
    msg.setSourceEntity(89U);
    msg.setDestination(40133U);
    msg.setDestinationEntity(222U);
    msg.value = 0.13285472884313554;

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
    msg.setTimeStamp(0.38845816820251533);
    msg.setSource(7905U);
    msg.setSourceEntity(187U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(238U);
    msg.value = 0.21740378818036699;

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
    msg.setTimeStamp(0.899718495713115);
    msg.setSource(40631U);
    msg.setSourceEntity(241U);
    msg.setDestination(62246U);
    msg.setDestinationEntity(195U);
    msg.value = 0.5647027095780534;

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
    msg.setTimeStamp(0.6483825024476938);
    msg.setSource(24643U);
    msg.setSourceEntity(59U);
    msg.setDestination(52193U);
    msg.setDestinationEntity(52U);
    msg.value = 0.14826083163929815;

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
    msg.setTimeStamp(0.11693662123571535);
    msg.setSource(29215U);
    msg.setSourceEntity(206U);
    msg.setDestination(4502U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8875850423021237;

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
    msg.setTimeStamp(0.13167217314516766);
    msg.setSource(62115U);
    msg.setSourceEntity(20U);
    msg.setDestination(49790U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3773982996835893;

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
    msg.setTimeStamp(0.39981168647387033);
    msg.setSource(52799U);
    msg.setSourceEntity(13U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7057346380342369;

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
    msg.setTimeStamp(0.7665045535918495);
    msg.setSource(62476U);
    msg.setSourceEntity(135U);
    msg.setDestination(13843U);
    msg.setDestinationEntity(236U);
    msg.value = 0.5373783082372843;

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
    msg.setTimeStamp(0.7286088194374546);
    msg.setSource(14669U);
    msg.setSourceEntity(205U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(42U);
    msg.value = 0.3011941654859086;

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
    msg.setTimeStamp(0.04511798072472828);
    msg.setSource(58829U);
    msg.setSourceEntity(28U);
    msg.setDestination(14122U);
    msg.setDestinationEntity(84U);
    msg.value = 0.4174582391717524;

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
    msg.setTimeStamp(0.5764461056340293);
    msg.setSource(30922U);
    msg.setSourceEntity(210U);
    msg.setDestination(9040U);
    msg.setDestinationEntity(186U);
    msg.value = 0.3704961666579316;

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
    msg.setTimeStamp(0.3101355778252459);
    msg.setSource(4674U);
    msg.setSourceEntity(167U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(178U);
    msg.value = 0.11048304402019371;

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
    msg.setTimeStamp(0.5256121043024417);
    msg.setSource(54234U);
    msg.setSourceEntity(119U);
    msg.setDestination(488U);
    msg.setDestinationEntity(251U);
    msg.value = 0.851312231907857;

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
    msg.setTimeStamp(0.24195750870172916);
    msg.setSource(42854U);
    msg.setSourceEntity(120U);
    msg.setDestination(33833U);
    msg.setDestinationEntity(57U);
    msg.value = 0.8726061742640541;

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
    msg.setTimeStamp(0.19022730901260887);
    msg.setSource(21493U);
    msg.setSourceEntity(42U);
    msg.setDestination(38775U);
    msg.setDestinationEntity(207U);
    msg.value = 0.17946281334909453;

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
    msg.setTimeStamp(0.0007171731942318127);
    msg.setSource(30138U);
    msg.setSourceEntity(183U);
    msg.setDestination(58988U);
    msg.setDestinationEntity(183U);
    msg.value = 0.6443107835521715;

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
    msg.setTimeStamp(0.3425815363813284);
    msg.setSource(32976U);
    msg.setSourceEntity(109U);
    msg.setDestination(13499U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8720160617731922;

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
    msg.setTimeStamp(0.12236291750725758);
    msg.setSource(22142U);
    msg.setSourceEntity(19U);
    msg.setDestination(38212U);
    msg.setDestinationEntity(64U);
    msg.value = 0.6942903819789354;

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
    msg.setTimeStamp(0.2565325598060382);
    msg.setSource(38611U);
    msg.setSourceEntity(176U);
    msg.setDestination(63540U);
    msg.setDestinationEntity(130U);
    msg.value = 0.6977632571026853;

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
    msg.setTimeStamp(0.04102796120900731);
    msg.setSource(31997U);
    msg.setSourceEntity(56U);
    msg.setDestination(61494U);
    msg.setDestinationEntity(108U);
    msg.value = 0.03044095546977188;

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
    msg.setTimeStamp(0.24722797269890984);
    msg.setSource(60178U);
    msg.setSourceEntity(11U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(178U);
    msg.value = 0.4294788856824291;

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
    msg.setTimeStamp(0.7370544769891583);
    msg.setSource(30962U);
    msg.setSourceEntity(162U);
    msg.setDestination(8772U);
    msg.setDestinationEntity(133U);
    msg.value = 0.4922132975326662;

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
    msg.setTimeStamp(0.9372955419038833);
    msg.setSource(10536U);
    msg.setSourceEntity(69U);
    msg.setDestination(46597U);
    msg.setDestinationEntity(224U);
    msg.validity = 50851U;
    msg.type = 237U;
    msg.tow = 3522550345U;
    msg.base_lat = 0.8797938683070323;
    msg.base_lon = 0.021876501413282012;
    msg.base_height = 0.2148047088501368;
    msg.n = 0.4018718996736471;
    msg.e = 0.6718064395714642;
    msg.d = 0.25393079255853224;
    msg.v_n = 0.9353677054556266;
    msg.v_e = 0.013458046713932803;
    msg.v_d = 0.8142259182120812;
    msg.satellites = 151U;
    msg.iar_hyp = 21801U;
    msg.iar_ratio = 0.3253527765475718;

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
    msg.setTimeStamp(0.1869859934555438);
    msg.setSource(35156U);
    msg.setSourceEntity(117U);
    msg.setDestination(42740U);
    msg.setDestinationEntity(219U);
    msg.validity = 8365U;
    msg.type = 109U;
    msg.tow = 1471227982U;
    msg.base_lat = 0.6606126795009296;
    msg.base_lon = 0.2695121943169062;
    msg.base_height = 0.7086194165046558;
    msg.n = 0.9573200752719029;
    msg.e = 0.07858536095159463;
    msg.d = 0.24350639041223565;
    msg.v_n = 0.6641796023129674;
    msg.v_e = 0.2693354668394581;
    msg.v_d = 0.7030131549825376;
    msg.satellites = 236U;
    msg.iar_hyp = 4351U;
    msg.iar_ratio = 0.17993007909283987;

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
    msg.setTimeStamp(0.12460395587861173);
    msg.setSource(50264U);
    msg.setSourceEntity(35U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(187U);
    msg.validity = 21449U;
    msg.type = 151U;
    msg.tow = 1834354645U;
    msg.base_lat = 0.46445710372264215;
    msg.base_lon = 0.5383245001500876;
    msg.base_height = 0.4055469802946454;
    msg.n = 0.0853494958903076;
    msg.e = 0.9682224904056798;
    msg.d = 0.02212896589531277;
    msg.v_n = 0.5851662131879058;
    msg.v_e = 0.5474212411523612;
    msg.v_d = 0.9096014991931611;
    msg.satellites = 38U;
    msg.iar_hyp = 65031U;
    msg.iar_ratio = 0.6697257976780857;

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
    msg.setTimeStamp(0.4592300450541269);
    msg.setSource(18445U);
    msg.setSourceEntity(65U);
    msg.setDestination(30127U);
    msg.setDestinationEntity(246U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8668223737389904;
    tmp_msg_0.lon = 0.3777608466946387;
    tmp_msg_0.height = 0.46900434785204215;
    tmp_msg_0.x = 0.7128247847564672;
    tmp_msg_0.y = 0.2762583030443133;
    tmp_msg_0.z = 0.28368407972498766;
    tmp_msg_0.phi = 0.6772856215827772;
    tmp_msg_0.theta = 0.11238979412984718;
    tmp_msg_0.psi = 0.43102915168955713;
    tmp_msg_0.u = 0.15535317709943863;
    tmp_msg_0.v = 0.3222851457900906;
    tmp_msg_0.w = 0.9245868914949973;
    tmp_msg_0.vx = 0.47523638767124243;
    tmp_msg_0.vy = 0.04552635030349783;
    tmp_msg_0.vz = 0.6260801505988578;
    tmp_msg_0.p = 0.8016659160417643;
    tmp_msg_0.q = 0.14025629729403755;
    tmp_msg_0.r = 0.9071241244797252;
    tmp_msg_0.depth = 0.733868425956853;
    tmp_msg_0.alt = 0.70275533782596;
    msg.state.set(tmp_msg_0);
    msg.type = 52U;

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
    msg.setTimeStamp(0.9894695256910565);
    msg.setSource(11369U);
    msg.setSourceEntity(120U);
    msg.setDestination(13589U);
    msg.setDestinationEntity(82U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3640639898596102;
    tmp_msg_0.lon = 0.2871025076400123;
    tmp_msg_0.height = 0.9701595684601232;
    tmp_msg_0.x = 0.5483367502215037;
    tmp_msg_0.y = 0.6293181880804911;
    tmp_msg_0.z = 0.42531577930616904;
    tmp_msg_0.phi = 0.07827318107780179;
    tmp_msg_0.theta = 0.057451391542209684;
    tmp_msg_0.psi = 0.5145534198028558;
    tmp_msg_0.u = 0.7279567898722221;
    tmp_msg_0.v = 0.3863299026275574;
    tmp_msg_0.w = 0.5143762866194129;
    tmp_msg_0.vx = 0.5519292763370685;
    tmp_msg_0.vy = 0.8679563260755959;
    tmp_msg_0.vz = 0.8023826055975025;
    tmp_msg_0.p = 0.5036181548536902;
    tmp_msg_0.q = 0.24222829224948206;
    tmp_msg_0.r = 0.662522766516604;
    tmp_msg_0.depth = 0.38398186896897635;
    tmp_msg_0.alt = 0.8507520191119684;
    msg.state.set(tmp_msg_0);
    msg.type = 237U;

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
    msg.setTimeStamp(0.9737187795880248);
    msg.setSource(52736U);
    msg.setSourceEntity(229U);
    msg.setDestination(10474U);
    msg.setDestinationEntity(32U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.311386666405433;
    tmp_msg_0.lon = 0.6066241229023751;
    tmp_msg_0.height = 0.28066761150717734;
    tmp_msg_0.x = 0.8908933574867801;
    tmp_msg_0.y = 0.7707037855140814;
    tmp_msg_0.z = 0.5133154679187851;
    tmp_msg_0.phi = 0.20732205075653454;
    tmp_msg_0.theta = 0.2041201181464125;
    tmp_msg_0.psi = 0.09778067698185944;
    tmp_msg_0.u = 0.3375497903717263;
    tmp_msg_0.v = 0.4214592986002724;
    tmp_msg_0.w = 0.915629854871716;
    tmp_msg_0.vx = 0.5869288168926531;
    tmp_msg_0.vy = 0.022096970962562135;
    tmp_msg_0.vz = 0.21775762605697713;
    tmp_msg_0.p = 0.5011531505533884;
    tmp_msg_0.q = 0.598153591670505;
    tmp_msg_0.r = 0.07299526639600984;
    tmp_msg_0.depth = 0.7393381273057411;
    tmp_msg_0.alt = 0.469647177506592;
    msg.state.set(tmp_msg_0);
    msg.type = 244U;

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
    msg.setTimeStamp(0.07261571685043511);
    msg.setSource(13245U);
    msg.setSourceEntity(184U);
    msg.setDestination(60439U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9517572783874741;

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
    msg.setTimeStamp(0.21536915634169418);
    msg.setSource(21815U);
    msg.setSourceEntity(174U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(8U);
    msg.value = 0.20781420006763585;

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
    msg.setTimeStamp(0.4511380598851594);
    msg.setSource(55126U);
    msg.setSourceEntity(29U);
    msg.setDestination(48493U);
    msg.setDestinationEntity(204U);
    msg.value = 0.33661962106701837;

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
    msg.setTimeStamp(0.6642399370934389);
    msg.setSource(55588U);
    msg.setSourceEntity(132U);
    msg.setDestination(37356U);
    msg.setDestinationEntity(13U);
    msg.value = 0.06549872669005519;

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
    msg.setTimeStamp(0.28466546855640573);
    msg.setSource(282U);
    msg.setSourceEntity(213U);
    msg.setDestination(1939U);
    msg.setDestinationEntity(144U);
    msg.value = 0.39784026179909127;

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
    msg.setTimeStamp(0.7504155473286);
    msg.setSource(24492U);
    msg.setSourceEntity(2U);
    msg.setDestination(13630U);
    msg.setDestinationEntity(81U);
    msg.value = 0.3845599141822771;

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
    msg.setTimeStamp(0.7943253488634308);
    msg.setSource(39968U);
    msg.setSourceEntity(15U);
    msg.setDestination(52260U);
    msg.setDestinationEntity(134U);
    msg.value = 0.21109379345890167;

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
    msg.setTimeStamp(0.3981162548290452);
    msg.setSource(37535U);
    msg.setSourceEntity(75U);
    msg.setDestination(57653U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9069328406223115;

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
    msg.setTimeStamp(0.4038421391875614);
    msg.setSource(35976U);
    msg.setSourceEntity(134U);
    msg.setDestination(56358U);
    msg.setDestinationEntity(36U);
    msg.value = 0.606475137251147;

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
    msg.setTimeStamp(0.7000352780171566);
    msg.setSource(48937U);
    msg.setSourceEntity(133U);
    msg.setDestination(51924U);
    msg.setDestinationEntity(166U);
    msg.value = 0.10180913360692645;

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
    msg.setTimeStamp(0.07542965755263165);
    msg.setSource(58077U);
    msg.setSourceEntity(153U);
    msg.setDestination(786U);
    msg.setDestinationEntity(229U);
    msg.value = 0.43791026239006203;

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
    msg.setTimeStamp(0.7376051975685074);
    msg.setSource(63127U);
    msg.setSourceEntity(137U);
    msg.setDestination(16396U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5636473422424495;

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
    msg.setTimeStamp(0.7416412358851457);
    msg.setSource(14141U);
    msg.setSourceEntity(15U);
    msg.setDestination(10762U);
    msg.setDestinationEntity(139U);
    msg.value = 0.5515945785872275;

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
    msg.setTimeStamp(0.17752305602342433);
    msg.setSource(59167U);
    msg.setSourceEntity(98U);
    msg.setDestination(60936U);
    msg.setDestinationEntity(172U);
    msg.value = 0.16809638623657797;

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
    msg.setTimeStamp(0.1295383513901166);
    msg.setSource(29972U);
    msg.setSourceEntity(231U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5452585524129527;

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
    msg.setTimeStamp(0.6588699440751565);
    msg.setSource(55229U);
    msg.setSourceEntity(85U);
    msg.setDestination(2176U);
    msg.setDestinationEntity(15U);
    msg.id = 245U;
    msg.zoom = 137U;
    msg.action = 45U;

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
    msg.setTimeStamp(0.9582948442929049);
    msg.setSource(38613U);
    msg.setSourceEntity(63U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(183U);
    msg.id = 253U;
    msg.zoom = 128U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.6719502116787267);
    msg.setSource(51164U);
    msg.setSourceEntity(131U);
    msg.setDestination(22938U);
    msg.setDestinationEntity(203U);
    msg.id = 132U;
    msg.zoom = 74U;
    msg.action = 197U;

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
    msg.setTimeStamp(0.34408148201344513);
    msg.setSource(47201U);
    msg.setSourceEntity(95U);
    msg.setDestination(52857U);
    msg.setDestinationEntity(72U);
    msg.id = 100U;
    msg.value = 0.16225878757727918;

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
    msg.setTimeStamp(0.4445119623942121);
    msg.setSource(60367U);
    msg.setSourceEntity(246U);
    msg.setDestination(26622U);
    msg.setDestinationEntity(113U);
    msg.id = 125U;
    msg.value = 0.8129604236665836;

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
    msg.setTimeStamp(0.6991239869806145);
    msg.setSource(4549U);
    msg.setSourceEntity(38U);
    msg.setDestination(3241U);
    msg.setDestinationEntity(218U);
    msg.id = 222U;
    msg.value = 0.6735225967053532;

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
    msg.setTimeStamp(0.8824225397117775);
    msg.setSource(28570U);
    msg.setSourceEntity(58U);
    msg.setDestination(8124U);
    msg.setDestinationEntity(155U);
    msg.id = 34U;
    msg.value = 0.7233839270966426;

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
    msg.setTimeStamp(0.45617676529845685);
    msg.setSource(24830U);
    msg.setSourceEntity(202U);
    msg.setDestination(57384U);
    msg.setDestinationEntity(38U);
    msg.id = 77U;
    msg.value = 0.8309042140006166;

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
    msg.setTimeStamp(0.8613616734029951);
    msg.setSource(25603U);
    msg.setSourceEntity(191U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(99U);
    msg.id = 193U;
    msg.value = 0.47207113996587924;

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
    msg.setTimeStamp(0.6051019260904078);
    msg.setSource(5740U);
    msg.setSourceEntity(36U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(99U);
    msg.id = 210U;
    msg.angle = 0.1657620559489077;

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
    msg.setTimeStamp(0.843100123877152);
    msg.setSource(48055U);
    msg.setSourceEntity(179U);
    msg.setDestination(11281U);
    msg.setDestinationEntity(39U);
    msg.id = 196U;
    msg.angle = 0.667790597668238;

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
    msg.setTimeStamp(0.9771068017131652);
    msg.setSource(46123U);
    msg.setSourceEntity(96U);
    msg.setDestination(32677U);
    msg.setDestinationEntity(214U);
    msg.id = 69U;
    msg.angle = 0.912804497861239;

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
    msg.setTimeStamp(0.383058594601301);
    msg.setSource(48294U);
    msg.setSourceEntity(43U);
    msg.setDestination(55057U);
    msg.setDestinationEntity(146U);
    msg.op = 61U;
    msg.actions.assign("OODFJIOLCKXOMIUPBPBIJVRRFHYQMDBCRESNGRBQNQXTSYYCTOQDTFXKDCIQPJJETTSTDAUEVWSKECLSAPRMXEXFLTQZGOMJGZXZONGRJYQIRKEBURVAJZOUQVWCIUTCBFOZUYWHKTUFPNINHKHZUSWMLPAAVGLBBIVHSUN");

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
    msg.setTimeStamp(0.3088142284910418);
    msg.setSource(25054U);
    msg.setSourceEntity(100U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(106U);
    msg.op = 84U;
    msg.actions.assign("DGFNXPEAYQSWWQKQEXVLLTWZHUAFHIXVEVWGSDNFZVTTHIIWIHYSARKAGNRUJVLFJMZLWOTE");

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
    msg.setTimeStamp(0.14272449936063658);
    msg.setSource(59136U);
    msg.setSourceEntity(173U);
    msg.setDestination(40267U);
    msg.setDestinationEntity(88U);
    msg.op = 171U;
    msg.actions.assign("GKJLBKWFJMZXKFMTPBYPSCEKVIYJKWJGIEJUTKFAUADLYCLPVKMCYJYIZENWSOUNFRCGDONZOZWHIRHMAEIVVGIAZTDMRFSOHVSCDPLUVIPCNTSEOGNMQHTTGVTXWLARQMFVGFZLXTNJX");

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
    msg.setTimeStamp(0.861891934711964);
    msg.setSource(61009U);
    msg.setSourceEntity(231U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("NESLGOVUWDOIFTQDWPFAUJMTITMKGYOXFNECNANMTRVJEYSCLNKTTFGWCVBFSDVVZRQXCPLLDVWNGWFRNRJIZAYULVUHWTNCIUKO");

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
    msg.setTimeStamp(0.10214729192769356);
    msg.setSource(32355U);
    msg.setSourceEntity(166U);
    msg.setDestination(16905U);
    msg.setDestinationEntity(38U);
    msg.actions.assign("LZQPUTMNADYBURQWQKAGZVGDUKTMLNCONBHABFQFJTQVVAAKRGLENZHYJZSDWPCIYZHXSTBCLUAXVBGZTOIMBRVUYCMOEPJVFHKCEGIBIUTZJNCVYFNBGNLXWDZZTOKRROWMUWXSBQACXHYKNVYXKELXSRLPICEDDWJSPXMSJDBGLXMFPJEHIOOTRIRLJQRYJLVFOPVDDRPEZACWENAEOFKIAWNYKUEPSGUSTWWSQQOFFMGJHIXDHHGSF");

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
    msg.setTimeStamp(0.720324913477161);
    msg.setSource(61666U);
    msg.setSourceEntity(252U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(64U);
    msg.actions.assign("NRFKLJQAUYESYDUDDGQLWJXCDXQOOFZJWRUGGCZBQRNDRYKVXBECEWWKPUIWTUJEQHZQOSLBEH");

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
    msg.setTimeStamp(0.08101638154637048);
    msg.setSource(31842U);
    msg.setSourceEntity(138U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(244U);
    msg.button = 170U;
    msg.value = 34U;

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
    msg.setTimeStamp(0.8404419193908796);
    msg.setSource(54672U);
    msg.setSourceEntity(82U);
    msg.setDestination(51673U);
    msg.setDestinationEntity(45U);
    msg.button = 188U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.15060941444576315);
    msg.setSource(24060U);
    msg.setSourceEntity(253U);
    msg.setDestination(60912U);
    msg.setDestinationEntity(147U);
    msg.button = 77U;
    msg.value = 113U;

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
    msg.setTimeStamp(0.5834169952403417);
    msg.setSource(59211U);
    msg.setSourceEntity(212U);
    msg.setDestination(355U);
    msg.setDestinationEntity(59U);
    msg.op = 66U;
    msg.text.assign("VSUYKWHPEZZERPURTHGXQYNUKMHXDARUFQFJTFKJIDDNTZADJHDXBLNFLAAVCRCQEPSABYMCBWEYXUKFVDZXNSJXPJVZXJWACVSCBIQLPMJEWKBMWMFKRCKCFPFHOTBIEGJSQUALBUPGYTNLIOYTZRVPWZQANMBNHHVYYGSDDLTLGKIMMGGOQLSERRIIUEWWTFQIQCOHNYNSKXELRDAVOLGSFEMONVOIUACJXPDT");

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
    msg.setTimeStamp(0.2823536361189899);
    msg.setSource(50244U);
    msg.setSourceEntity(139U);
    msg.setDestination(58995U);
    msg.setDestinationEntity(78U);
    msg.op = 248U;
    msg.text.assign("VUMRETNZVQLZAMFJSDIXQKYPEWULDFVBZKEBMOZELGTLWAJUPPOVKOGKFEHOXKMHGUJIOSYPFRBBTTRHZJSJEDGYENUKESMUYKYDUGPTHCARNGMRBZFORVSCRTNFXMCLCOAVLAQQAXOUNLNILHUSMPDBSIQEWRAXEPRBWGVAVGXGYCFWIFJHXHPJMYDKCRDJWWLZDDQOIYJYTQGPVBHUXNSDZCHXXWIKMWTNQOYBKTQSACWC");

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
    msg.setTimeStamp(0.7715918993765931);
    msg.setSource(14119U);
    msg.setSourceEntity(193U);
    msg.setDestination(28957U);
    msg.setDestinationEntity(136U);
    msg.op = 114U;
    msg.text.assign("PVLLTTYZJUWKFBPMPRSHIPOQJOSBZXRIIXVVWEYDKKVJTRYBLVZ");

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
    msg.setTimeStamp(0.2993719304135989);
    msg.setSource(39403U);
    msg.setSourceEntity(210U);
    msg.setDestination(21707U);
    msg.setDestinationEntity(227U);
    msg.op = 249U;
    msg.time_remain = 0.15139993379437167;
    msg.sched_time = 0.11140193931187892;

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
    msg.setTimeStamp(0.9622745246384833);
    msg.setSource(684U);
    msg.setSourceEntity(139U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(236U);
    msg.op = 184U;
    msg.time_remain = 0.9610023266397213;
    msg.sched_time = 0.23494502797056704;

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
    msg.setTimeStamp(0.23156972291687672);
    msg.setSource(6951U);
    msg.setSourceEntity(152U);
    msg.setDestination(265U);
    msg.setDestinationEntity(159U);
    msg.op = 31U;
    msg.time_remain = 0.5412475292521496;
    msg.sched_time = 0.3194407144218394;

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
    msg.setTimeStamp(0.014471180700184938);
    msg.setSource(64515U);
    msg.setSourceEntity(241U);
    msg.setDestination(7064U);
    msg.setDestinationEntity(203U);
    msg.name.assign("PKFMAVZTKKLFEQNAGYLWYIMASYPTPMKYMXCTUYLASCGMJRZNLQIZIGILTTWQVUOGONEUISXJNXHNERRHCHVJWGWBWSRDEXZHCHVXORDWJXMEKUCAFLAIDBKBXPDPDSAZVWRISJPSRZHQXHQOLOUGYYVIAJNVISSNBUHTDCQZJKJFQMNGKLHNJUFJAOZMTQCRBZPUYGFKQCGTVYOHZBWNEWGY");
    msg.op = 223U;
    msg.sched_time = 0.17279643287791946;

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
    msg.setTimeStamp(0.3676483598324445);
    msg.setSource(46671U);
    msg.setSourceEntity(192U);
    msg.setDestination(37919U);
    msg.setDestinationEntity(226U);
    msg.name.assign("PGOCGCWWWUIXVPIZJYMVHLJUWLATFIRGRFBGSKAIVYENEDBVSDJDGVLPJGSNMURCXXJFRYJUUOCVWTFEBUQFHWVDLKPERXDBFLZRGUJROCDPN");
    msg.op = 132U;
    msg.sched_time = 0.7439023006306937;

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
    msg.setTimeStamp(0.7232188663646321);
    msg.setSource(41614U);
    msg.setSourceEntity(198U);
    msg.setDestination(33921U);
    msg.setDestinationEntity(101U);
    msg.name.assign("EKIVAHRDWGLKOVQYEAOENXZAHEVOPIMWUDGMFOZUPNHCAMPBPCFSCOCKSJFLVAYJIGGNDRLUKIWBTQPZGOGNFMEYNOCJKXLMBVBGRLIQWOXDEUHTTLFDJZZHPTJBNCUWTRUPFMFJSSDQJXOMZSGR");
    msg.op = 84U;
    msg.sched_time = 0.7845429986548628;

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
    msg.setTimeStamp(0.7882342683262868);
    msg.setSource(63378U);
    msg.setSourceEntity(156U);
    msg.setDestination(4745U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.25301279990978043);
    msg.setSource(1187U);
    msg.setSourceEntity(201U);
    msg.setDestination(13875U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.6042119022959009);
    msg.setSource(45938U);
    msg.setSourceEntity(78U);
    msg.setDestination(64490U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.16865580862533147);
    msg.setSource(47498U);
    msg.setSourceEntity(114U);
    msg.setDestination(16696U);
    msg.setDestinationEntity(40U);
    msg.name.assign("LNJPRSYWPEAOGUYXWNKQZJQECDOVPDPRISYNTQKJEBYPZKJOCAVCBURX");
    msg.state = 197U;

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
    msg.setTimeStamp(0.12785444975668336);
    msg.setSource(53383U);
    msg.setSourceEntity(203U);
    msg.setDestination(22472U);
    msg.setDestinationEntity(225U);
    msg.name.assign("GQMRJFHUQNSKJUYRCPJYOOYJLAHVUCWWPXZUOEGLEFAYSJHDEXSWVPRNEQWAQ");
    msg.state = 197U;

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
    msg.setTimeStamp(0.5382402681384711);
    msg.setSource(31127U);
    msg.setSourceEntity(184U);
    msg.setDestination(52620U);
    msg.setDestinationEntity(25U);
    msg.name.assign("APWFCNUAAHKLOYSXRSXDEIOXYLAFXVCQBFNZGXNVEDHZZQIRMXLGTUNKMIPVLACUTFABGIDYTWDUDMKJRVLOYQJWULDEYKVTIZZJHJSHUSGZJCFRJGQABWUGPFKQSJDHMNEEMIYXICOBRVWWGVWBUQCGKTCKUBRQPYAELYBAQNBJMXHEHNSCQOKOSNEAIMJTNSOQJVPFTMHLLINRVWTRW");
    msg.state = 63U;

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
    msg.setTimeStamp(0.9753898750173898);
    msg.setSource(59548U);
    msg.setSourceEntity(95U);
    msg.setDestination(46403U);
    msg.setDestinationEntity(254U);
    msg.name.assign("HLBAATZNEJXKHCFVKROVDIASJFMZGFYVQSBXIZRNMJJKPDPLFRJSENETQTEKWFTQTDXTKGYGFCQNQHNDMFVGARWWMORCBVQOYJQYLGJGNLMUYKSCYPEOWZUGXFACNWNNBHDEWQXOPXIPKGLCBGSKLRDZRDHBFDUVIVIAGPKUXVUUCIYSQZBKWTCPRZNVUBVWMMPIZLYTCLBYXZOFHCLOTZJALM");
    msg.value = 80U;

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
    msg.setTimeStamp(0.9992590286421071);
    msg.setSource(46749U);
    msg.setSourceEntity(180U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(209U);
    msg.name.assign("VBJLQQFLTKSCPETORIGBZSRDWVNOJHMDZTTQLCDXUMJMOUWXSKXFHPOIDNGFIBDJSSRIWTYSOHAHTSKKTYFGYLQHEADYLUDYTYOEYCGJCQUBGMHNERPRSPZJRAESMKFXOORB");
    msg.value = 112U;

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
    msg.setTimeStamp(0.7625897971589903);
    msg.setSource(11666U);
    msg.setSourceEntity(188U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(71U);
    msg.name.assign("LDYTYRWVLHAKOYRIBPOAQHQTICVPQDAEUNZBJNPLEGQXNDFAGAQEPTKCUBXFJJSTGIGNHUKFRXKWJCJMVDAJXRQZEIRTDNYUWVFNPHEGMSSVQKPIRAKOHJUTL");
    msg.value = 105U;

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
    msg.setTimeStamp(0.18132967354132068);
    msg.setSource(42073U);
    msg.setSourceEntity(39U);
    msg.setDestination(55930U);
    msg.setDestinationEntity(60U);
    msg.name.assign("KTVTHOZGAMAGIPOSHXUBESWEGLUIFCJRLFBNPMIVCDODZBXEBWCEJKVPIBNMMBYRASBYGHSKQHTNXJPQOFWNHXOVJQSJXVYZZTYGOWKRVGEIHVEGQMDBLIANABPKQCYDPX");

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
    msg.setTimeStamp(0.9448501084045378);
    msg.setSource(4660U);
    msg.setSourceEntity(130U);
    msg.setDestination(12374U);
    msg.setDestinationEntity(206U);
    msg.name.assign("MMUGJLOLWDUYLVRSMIRXPNSCHHNAUCSZPQUMLUCWNEEGYUTFOARYTHRDF");

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
    msg.setTimeStamp(0.34410017355287403);
    msg.setSource(42253U);
    msg.setSourceEntity(197U);
    msg.setDestination(28370U);
    msg.setDestinationEntity(106U);
    msg.name.assign("OPMHJBPIJWLMULCUUYUNMZSGCICEKDBZKERCZQYPVOAEQQDHNTTWDADJZWORRXOBGPQIYE");

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
    msg.setTimeStamp(0.9979365056652821);
    msg.setSource(7380U);
    msg.setSourceEntity(50U);
    msg.setDestination(1862U);
    msg.setDestinationEntity(45U);
    msg.name.assign("SXYHXMCVJNMKAJRTPKFPKLQBHAEXCKJGTCOIDUGYJZQSRQIHSTQORUVBULSHWOWZAKZISRXZVFDUDNCVJYREFPYTZCIMEDKWYRKTUSEWCDFCGNFTVNIMGZORTPDJMVPMYLTZRZGAYZWJCSQAKCQZMEOIHENXYGNJLMFMVLVTAVNDHLEAIUSHNFOXIYBWUXGTBRHEQVPXMACLKYANGPWOOIQFSQBOJRAPDWXWLHBGFWXGLIOBQ");
    msg.value = 144U;

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
    msg.setTimeStamp(0.888966854278714);
    msg.setSource(17073U);
    msg.setSourceEntity(138U);
    msg.setDestination(42272U);
    msg.setDestinationEntity(127U);
    msg.name.assign("MPIGODCYAMJVZKAWPXTTRTRFNUKBAXXDJNVFQCQCGDHAWWEYHIDUNMCWLVBHI");
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
    msg.setTimeStamp(0.0005883754629584237);
    msg.setSource(45842U);
    msg.setSourceEntity(66U);
    msg.setDestination(52866U);
    msg.setDestinationEntity(239U);
    msg.name.assign("MTNKEYLSHRUMVDLIIINPFWQPQYTNTUGDZHSDKKQYCJHVVFQDRQZNTCRGZZPOKSASJFGUXPHOKZZOWIEEFVHZUACPNGRJALKFNHSJDQQOUQPBRSZTEMRFYRCKILERCZKMDAUYVGWXIXXWYSEIDWJITQBWVBEVAQMMTYJVOBBSFTUMIGAYLE");
    msg.value = 50U;

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
    msg.setTimeStamp(0.5284395059723812);
    msg.setSource(15967U);
    msg.setSourceEntity(134U);
    msg.setDestination(31356U);
    msg.setDestinationEntity(23U);
    msg.id = 188U;
    msg.period = 1986053676U;
    msg.duty_cycle = 2683225294U;

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
    msg.setTimeStamp(0.2954451591728662);
    msg.setSource(64649U);
    msg.setSourceEntity(46U);
    msg.setDestination(12251U);
    msg.setDestinationEntity(174U);
    msg.id = 91U;
    msg.period = 449619749U;
    msg.duty_cycle = 498171335U;

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
    msg.setTimeStamp(0.7317875939586047);
    msg.setSource(42737U);
    msg.setSourceEntity(38U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(247U);
    msg.id = 169U;
    msg.period = 3154626572U;
    msg.duty_cycle = 1649791405U;

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
    msg.setTimeStamp(0.23352243993036248);
    msg.setSource(18549U);
    msg.setSourceEntity(215U);
    msg.setDestination(54361U);
    msg.setDestinationEntity(191U);
    msg.id = 58U;
    msg.period = 2003152935U;
    msg.duty_cycle = 2624454025U;

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
    msg.setTimeStamp(0.8115834500382864);
    msg.setSource(50910U);
    msg.setSourceEntity(53U);
    msg.setDestination(45693U);
    msg.setDestinationEntity(139U);
    msg.id = 120U;
    msg.period = 1623280166U;
    msg.duty_cycle = 1768600858U;

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
    msg.setTimeStamp(0.517097633175703);
    msg.setSource(17503U);
    msg.setSourceEntity(162U);
    msg.setDestination(11928U);
    msg.setDestinationEntity(188U);
    msg.id = 61U;
    msg.period = 1471959956U;
    msg.duty_cycle = 1412166692U;

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
    msg.setTimeStamp(0.2777425735274046);
    msg.setSource(9929U);
    msg.setSourceEntity(24U);
    msg.setDestination(38473U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.4313260788995241;
    msg.lon = 0.38186308667213553;
    msg.height = 0.8105534395411389;
    msg.x = 0.49713437672415617;
    msg.y = 0.18578959572243592;
    msg.z = 0.14303064844608837;
    msg.phi = 0.15634798438397313;
    msg.theta = 0.7134103728627863;
    msg.psi = 0.06692297818282755;
    msg.u = 0.7382564226313301;
    msg.v = 0.1984023412390057;
    msg.w = 0.4532762165740617;
    msg.vx = 0.7201542429330611;
    msg.vy = 0.0858141826260086;
    msg.vz = 0.3799272322652182;
    msg.p = 0.28573984234390826;
    msg.q = 0.07808855308330309;
    msg.r = 0.2472160787626354;
    msg.depth = 0.4240217315234549;
    msg.alt = 0.6809246078601556;

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
    msg.setTimeStamp(0.9299201102167806);
    msg.setSource(3707U);
    msg.setSourceEntity(120U);
    msg.setDestination(23284U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.4341234248331328;
    msg.lon = 0.9667971408768111;
    msg.height = 0.21733683851003127;
    msg.x = 0.47505603998664825;
    msg.y = 0.291886924569018;
    msg.z = 0.8454871128691951;
    msg.phi = 0.37217455781500874;
    msg.theta = 0.14204071416898068;
    msg.psi = 0.22270028267584274;
    msg.u = 0.8653967401921081;
    msg.v = 0.23037528783427885;
    msg.w = 0.47100318702688837;
    msg.vx = 0.22400479334455337;
    msg.vy = 0.4380355114261002;
    msg.vz = 0.4152346365547531;
    msg.p = 0.5645929892553617;
    msg.q = 0.27545112647018144;
    msg.r = 0.030933965745197134;
    msg.depth = 0.46733570773232724;
    msg.alt = 0.8944481696093246;

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
    msg.setTimeStamp(0.7058532906197015);
    msg.setSource(19843U);
    msg.setSourceEntity(68U);
    msg.setDestination(8868U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.046638023902044745;
    msg.lon = 0.5447850549167678;
    msg.height = 0.7225871919218911;
    msg.x = 0.4421722359077789;
    msg.y = 0.6486229982326698;
    msg.z = 0.24185084186844907;
    msg.phi = 0.6157823332968908;
    msg.theta = 0.014641389397542892;
    msg.psi = 0.46374176831387304;
    msg.u = 0.05742697679708253;
    msg.v = 0.20882494092558523;
    msg.w = 0.24819990151857318;
    msg.vx = 0.7402089268356857;
    msg.vy = 0.8123066431766232;
    msg.vz = 0.1864382150835876;
    msg.p = 0.34173949866181796;
    msg.q = 0.9314679299501156;
    msg.r = 0.9391242877679317;
    msg.depth = 0.3883750003361526;
    msg.alt = 0.26105483908346916;

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
    msg.setTimeStamp(0.8880604643333226);
    msg.setSource(43675U);
    msg.setSourceEntity(148U);
    msg.setDestination(31134U);
    msg.setDestinationEntity(88U);
    msg.x = 0.48780218539830733;
    msg.y = 0.2663300866967401;
    msg.z = 0.5386885585285229;

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
    msg.setTimeStamp(0.8784830762750979);
    msg.setSource(31610U);
    msg.setSourceEntity(171U);
    msg.setDestination(1235U);
    msg.setDestinationEntity(73U);
    msg.x = 0.22939861735376887;
    msg.y = 0.35374460290958265;
    msg.z = 0.6771185030635952;

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
    msg.setTimeStamp(0.9150924854224325);
    msg.setSource(6329U);
    msg.setSourceEntity(167U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(145U);
    msg.x = 0.6493414290161142;
    msg.y = 0.5063404525883841;
    msg.z = 0.7928453203729785;

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
    msg.setTimeStamp(0.06192785064658113);
    msg.setSource(34585U);
    msg.setSourceEntity(28U);
    msg.setDestination(44442U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6577009785645318;

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
    msg.setTimeStamp(0.536058727736505);
    msg.setSource(27095U);
    msg.setSourceEntity(218U);
    msg.setDestination(47046U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2245983926037457;

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
    msg.setTimeStamp(0.4874805466551374);
    msg.setSource(12266U);
    msg.setSourceEntity(88U);
    msg.setDestination(30081U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9811413577937327;

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
    msg.setTimeStamp(0.7950508022780896);
    msg.setSource(23255U);
    msg.setSourceEntity(3U);
    msg.setDestination(19414U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7320074291131962;

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
    msg.setTimeStamp(0.81450915770545);
    msg.setSource(61406U);
    msg.setSourceEntity(57U);
    msg.setDestination(27349U);
    msg.setDestinationEntity(145U);
    msg.value = 0.7480101346162963;

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
    msg.setTimeStamp(0.2748138676912192);
    msg.setSource(44493U);
    msg.setSourceEntity(237U);
    msg.setDestination(54972U);
    msg.setDestinationEntity(43U);
    msg.value = 0.48931978731521975;

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
    msg.setTimeStamp(0.21851463835138651);
    msg.setSource(56305U);
    msg.setSourceEntity(5U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(169U);
    msg.x = 0.47146011161560475;
    msg.y = 0.8674106106418128;
    msg.z = 0.22835369781333714;
    msg.phi = 0.8271976811049032;
    msg.theta = 0.12496640643728896;
    msg.psi = 0.21165908688669144;
    msg.p = 0.9002387740996324;
    msg.q = 0.5845086285400432;
    msg.r = 0.24615352844514804;
    msg.u = 0.1784939312757413;
    msg.v = 0.805368929920962;
    msg.w = 0.08849679946280231;
    msg.bias_psi = 0.11764754845045877;
    msg.bias_r = 0.7675065509354726;

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
    msg.setTimeStamp(0.03627038575178254);
    msg.setSource(29302U);
    msg.setSourceEntity(170U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(230U);
    msg.x = 0.18235413148358304;
    msg.y = 0.07174745381828318;
    msg.z = 0.0561634700304946;
    msg.phi = 0.07572971163435227;
    msg.theta = 0.6318650128189175;
    msg.psi = 0.6925869416719082;
    msg.p = 0.6374471868333543;
    msg.q = 0.5484742472008844;
    msg.r = 0.4492403226034972;
    msg.u = 0.9349558452182499;
    msg.v = 0.07622822187564304;
    msg.w = 0.38990283473587584;
    msg.bias_psi = 0.017445765896387466;
    msg.bias_r = 0.5879774426625375;

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
    msg.setTimeStamp(0.7813785444571753);
    msg.setSource(2653U);
    msg.setSourceEntity(120U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(34U);
    msg.x = 0.7923779944941632;
    msg.y = 0.3326964684595328;
    msg.z = 0.7855973702828231;
    msg.phi = 0.8513429937139928;
    msg.theta = 0.24868901606843796;
    msg.psi = 0.43142624871019664;
    msg.p = 0.050829138563174725;
    msg.q = 0.5879129668965098;
    msg.r = 0.8537768131771303;
    msg.u = 0.10329901643972628;
    msg.v = 0.5493890715024462;
    msg.w = 0.883491344320423;
    msg.bias_psi = 0.9429581434722146;
    msg.bias_r = 0.848515073988297;

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
    msg.setTimeStamp(0.6824458672260083);
    msg.setSource(10662U);
    msg.setSourceEntity(68U);
    msg.setDestination(50577U);
    msg.setDestinationEntity(244U);
    msg.bias_psi = 0.8316991041435561;
    msg.bias_r = 0.5511114806690314;
    msg.cog = 0.6682366215403578;
    msg.cyaw = 0.9775603561119786;
    msg.lbl_rej_level = 0.5587300755193778;
    msg.gps_rej_level = 0.6301247689294799;
    msg.custom_x = 0.652346001254699;
    msg.custom_y = 0.4153677436179529;
    msg.custom_z = 0.3876787005769169;

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
    msg.setTimeStamp(0.11323904440081556);
    msg.setSource(13866U);
    msg.setSourceEntity(83U);
    msg.setDestination(30983U);
    msg.setDestinationEntity(52U);
    msg.bias_psi = 0.3134931578953458;
    msg.bias_r = 0.47338307977694916;
    msg.cog = 0.07036635776755573;
    msg.cyaw = 0.39413808704002085;
    msg.lbl_rej_level = 0.004675471822817467;
    msg.gps_rej_level = 0.791114661901396;
    msg.custom_x = 0.027249762080336137;
    msg.custom_y = 0.6099468035784557;
    msg.custom_z = 0.6755767832062136;

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
    msg.setTimeStamp(0.5188488111166717);
    msg.setSource(31057U);
    msg.setSourceEntity(134U);
    msg.setDestination(46912U);
    msg.setDestinationEntity(86U);
    msg.bias_psi = 0.4938247433800529;
    msg.bias_r = 0.5673747001177819;
    msg.cog = 0.3560851134277626;
    msg.cyaw = 0.13514499116636336;
    msg.lbl_rej_level = 0.1472739842502493;
    msg.gps_rej_level = 0.08223438928299387;
    msg.custom_x = 0.7291538003461986;
    msg.custom_y = 0.32735136300921985;
    msg.custom_z = 0.10088959439451839;

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
    msg.setTimeStamp(0.08066865031589254);
    msg.setSource(53142U);
    msg.setSourceEntity(104U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(77U);
    msg.utc_time = 0.25246210492655063;
    msg.reason = 234U;

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
    msg.setTimeStamp(0.5557230932493016);
    msg.setSource(11695U);
    msg.setSourceEntity(142U);
    msg.setDestination(14676U);
    msg.setDestinationEntity(254U);
    msg.utc_time = 0.228897745322574;
    msg.reason = 238U;

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
    msg.setTimeStamp(0.6526525202362645);
    msg.setSource(60970U);
    msg.setSourceEntity(188U);
    msg.setDestination(11661U);
    msg.setDestinationEntity(115U);
    msg.utc_time = 0.06967352825529882;
    msg.reason = 190U;

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
    msg.setTimeStamp(0.19361745370968964);
    msg.setSource(55514U);
    msg.setSourceEntity(201U);
    msg.setDestination(42487U);
    msg.setDestinationEntity(238U);
    msg.id = 13U;
    msg.range = 0.2155708448368967;
    msg.acceptance = 197U;

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
    msg.setTimeStamp(0.48274684407076596);
    msg.setSource(668U);
    msg.setSourceEntity(68U);
    msg.setDestination(45806U);
    msg.setDestinationEntity(22U);
    msg.id = 201U;
    msg.range = 0.22217937948464317;
    msg.acceptance = 103U;

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
    msg.setTimeStamp(0.6849752284151736);
    msg.setSource(52025U);
    msg.setSourceEntity(16U);
    msg.setDestination(27196U);
    msg.setDestinationEntity(198U);
    msg.id = 94U;
    msg.range = 0.9561045661447275;
    msg.acceptance = 3U;

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
    msg.setTimeStamp(0.3764229363958498);
    msg.setSource(59456U);
    msg.setSourceEntity(192U);
    msg.setDestination(54942U);
    msg.setDestinationEntity(192U);
    msg.type = 13U;
    msg.reason = 208U;
    msg.value = 0.3112316322066323;
    msg.timestep = 0.397082524601745;

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
    msg.setTimeStamp(0.37796021830483006);
    msg.setSource(1280U);
    msg.setSourceEntity(48U);
    msg.setDestination(46727U);
    msg.setDestinationEntity(200U);
    msg.type = 208U;
    msg.reason = 161U;
    msg.value = 0.2528555812118678;
    msg.timestep = 0.733820894261216;

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
    msg.setTimeStamp(0.5873264975622092);
    msg.setSource(50496U);
    msg.setSourceEntity(238U);
    msg.setDestination(42871U);
    msg.setDestinationEntity(38U);
    msg.type = 119U;
    msg.reason = 78U;
    msg.value = 0.18402326782953882;
    msg.timestep = 0.10034680737373713;

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
    msg.setTimeStamp(0.346629873070209);
    msg.setSource(1114U);
    msg.setSourceEntity(39U);
    msg.setDestination(6440U);
    msg.setDestinationEntity(25U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NTFYUMJKRXMBUYZSIEFPSYCRSVYZLSOAYDYKCZPAEDRSWJCOHRSKQEOQRCQFNOUCAHPUBZLQMQYZVQEEGHNGA");
    tmp_msg_0.lat = 0.31372257556164884;
    tmp_msg_0.lon = 0.46494865732469337;
    tmp_msg_0.depth = 0.9263893307467541;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 152U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5407019734073936;
    msg.y = 0.16595399927999388;
    msg.var_x = 0.28990623219161027;
    msg.var_y = 0.18824403874823414;
    msg.distance = 0.5944319984674965;

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
    msg.setTimeStamp(0.4553404841790948);
    msg.setSource(54539U);
    msg.setSourceEntity(215U);
    msg.setDestination(31669U);
    msg.setDestinationEntity(125U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JPCCYAZWENHTUIDFWPXCNWCDOGXPZEGHZFHUXIEYPMYCKLGNECLTKPFBHKDDNIAPLWMADZIRUSAWWFXSRMMDETFUNJXTROLMIKUAVHISBBKNJSIGJDZQKMLBAGGHFFQEJYAPXHYQFHTQOUCGLQOXSAILMSZQLROVIP");
    tmp_msg_0.lat = 0.43307907718649397;
    tmp_msg_0.lon = 0.5888699534471583;
    tmp_msg_0.depth = 0.45407209418178185;
    tmp_msg_0.query_channel = 53U;
    tmp_msg_0.reply_channel = 242U;
    tmp_msg_0.transponder_delay = 69U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5311600954693648;
    msg.y = 0.37316248892909454;
    msg.var_x = 0.7239653716334052;
    msg.var_y = 0.3610519916328372;
    msg.distance = 0.44942637688453146;

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
    msg.setTimeStamp(0.03410660992961656);
    msg.setSource(4542U);
    msg.setSourceEntity(39U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(84U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MNDRGFOZSKPRSBAZTYBQQXZOYVTHTAWEZLOVDOQXRLMHEWZJYCIUFGKNJDRMUQVJWFPWOSHKAMNQIXUVOYTREYHXEAIYMQWUGFBCKZONLOXQJBHJJEEUUWIKRBSHUIPPDNDFCFMTOCXYKLIPAQRQASMJKBAMFGHXBKPEGCIHWV");
    tmp_msg_0.lat = 0.3780095880874351;
    tmp_msg_0.lon = 0.9656812164323155;
    tmp_msg_0.depth = 0.1509322380682162;
    tmp_msg_0.query_channel = 167U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 114U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.378620021160756;
    msg.y = 0.050472087502122065;
    msg.var_x = 0.5404042257304128;
    msg.var_y = 0.07444479742006005;
    msg.distance = 0.2949336896819488;

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
    msg.setTimeStamp(0.2079368422891541);
    msg.setSource(62596U);
    msg.setSourceEntity(208U);
    msg.setDestination(37988U);
    msg.setDestinationEntity(44U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.9896781339242283);
    msg.setSource(50873U);
    msg.setSourceEntity(227U);
    msg.setDestination(50113U);
    msg.setDestinationEntity(8U);
    msg.state = 243U;

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
    msg.setTimeStamp(0.020777554154550737);
    msg.setSource(12302U);
    msg.setSourceEntity(75U);
    msg.setDestination(3343U);
    msg.setDestinationEntity(234U);
    msg.state = 229U;

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
    msg.setTimeStamp(0.9508510764979325);
    msg.setSource(26342U);
    msg.setSourceEntity(248U);
    msg.setDestination(16352U);
    msg.setDestinationEntity(161U);
    msg.x = 0.8850454807448107;
    msg.y = 0.49600180919098846;
    msg.z = 0.7316133836873904;

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
    msg.setTimeStamp(0.03732930455264749);
    msg.setSource(53888U);
    msg.setSourceEntity(195U);
    msg.setDestination(48798U);
    msg.setDestinationEntity(155U);
    msg.x = 0.6208195432104497;
    msg.y = 0.6825179444279469;
    msg.z = 0.4439126197663875;

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
    msg.setTimeStamp(0.5854196487443818);
    msg.setSource(10062U);
    msg.setSourceEntity(165U);
    msg.setDestination(47510U);
    msg.setDestinationEntity(242U);
    msg.x = 0.9402005548335628;
    msg.y = 0.4662542790883436;
    msg.z = 0.3077386877206296;

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
    msg.setTimeStamp(0.250368798935132);
    msg.setSource(39060U);
    msg.setSourceEntity(162U);
    msg.setDestination(64851U);
    msg.setDestinationEntity(50U);
    msg.va = 0.5102862378953685;
    msg.aoa = 0.6050956131941198;
    msg.ssa = 0.496237361263825;

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
    msg.setTimeStamp(0.14429818988933818);
    msg.setSource(51713U);
    msg.setSourceEntity(176U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(102U);
    msg.va = 0.6151779216682874;
    msg.aoa = 0.4777478102702284;
    msg.ssa = 0.7212145710548301;

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
    msg.setTimeStamp(0.6083291624289798);
    msg.setSource(3266U);
    msg.setSourceEntity(35U);
    msg.setDestination(48051U);
    msg.setDestinationEntity(140U);
    msg.va = 0.7473553619402519;
    msg.aoa = 0.2253975793081453;
    msg.ssa = 0.7226006930661302;

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
    msg.setTimeStamp(0.840393379293651);
    msg.setSource(41456U);
    msg.setSourceEntity(131U);
    msg.setDestination(14898U);
    msg.setDestinationEntity(88U);
    msg.value = 0.25829594544312395;

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
    msg.setTimeStamp(0.4976566111788828);
    msg.setSource(25248U);
    msg.setSourceEntity(41U);
    msg.setDestination(63515U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8035775078515398;

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
    msg.setTimeStamp(0.6892745312262301);
    msg.setSource(13434U);
    msg.setSourceEntity(252U);
    msg.setDestination(34210U);
    msg.setDestinationEntity(142U);
    msg.value = 0.18300014463934378;

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
    msg.setTimeStamp(0.9533764042992515);
    msg.setSource(41432U);
    msg.setSourceEntity(227U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(86U);
    msg.value = 0.5889538213060846;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.9207133336252337);
    msg.setSource(11862U);
    msg.setSourceEntity(169U);
    msg.setDestination(29014U);
    msg.setDestinationEntity(246U);
    msg.value = 0.6658179918330475;
    msg.z_units = 247U;

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
    msg.setTimeStamp(0.7484789189767138);
    msg.setSource(15158U);
    msg.setSourceEntity(9U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(56U);
    msg.value = 0.2406567038548194;
    msg.z_units = 8U;

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
    msg.setTimeStamp(0.8733027232292562);
    msg.setSource(31792U);
    msg.setSourceEntity(196U);
    msg.setDestination(32227U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7502283085649305;
    msg.speed_units = 127U;

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
    msg.setTimeStamp(0.3566044584103887);
    msg.setSource(35243U);
    msg.setSourceEntity(240U);
    msg.setDestination(41759U);
    msg.setDestinationEntity(182U);
    msg.value = 0.293465501767574;
    msg.speed_units = 4U;

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
    msg.setTimeStamp(0.4020248990198213);
    msg.setSource(9629U);
    msg.setSourceEntity(2U);
    msg.setDestination(41613U);
    msg.setDestinationEntity(92U);
    msg.value = 0.13622404412349076;
    msg.speed_units = 230U;

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
    msg.setTimeStamp(0.22176708266617295);
    msg.setSource(42435U);
    msg.setSourceEntity(216U);
    msg.setDestination(12979U);
    msg.setDestinationEntity(101U);
    msg.value = 0.28398223032042547;

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
    msg.setTimeStamp(0.6242598145693061);
    msg.setSource(38549U);
    msg.setSourceEntity(189U);
    msg.setDestination(47889U);
    msg.setDestinationEntity(165U);
    msg.value = 0.11211245183120133;

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
    msg.setTimeStamp(0.08476352488169248);
    msg.setSource(44723U);
    msg.setSourceEntity(224U);
    msg.setDestination(16120U);
    msg.setDestinationEntity(119U);
    msg.value = 0.36767020917729254;

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
    msg.setTimeStamp(0.9349727061402148);
    msg.setSource(51063U);
    msg.setSourceEntity(125U);
    msg.setDestination(13335U);
    msg.setDestinationEntity(211U);
    msg.value = 0.767218398027855;

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
    msg.setTimeStamp(0.29433979066437244);
    msg.setSource(49900U);
    msg.setSourceEntity(57U);
    msg.setDestination(14486U);
    msg.setDestinationEntity(21U);
    msg.value = 0.4626036540347558;

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
    msg.setTimeStamp(0.947986935777599);
    msg.setSource(19126U);
    msg.setSourceEntity(122U);
    msg.setDestination(2345U);
    msg.setDestinationEntity(154U);
    msg.value = 0.2332846893573306;

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
    msg.setTimeStamp(0.6896396684908432);
    msg.setSource(48029U);
    msg.setSourceEntity(72U);
    msg.setDestination(50963U);
    msg.setDestinationEntity(186U);
    msg.value = 0.748059568227065;

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
    msg.setTimeStamp(0.3734636427760363);
    msg.setSource(35195U);
    msg.setSourceEntity(178U);
    msg.setDestination(30410U);
    msg.setDestinationEntity(106U);
    msg.value = 0.5956307372913812;

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
    msg.setTimeStamp(0.02931543223454891);
    msg.setSource(51805U);
    msg.setSourceEntity(67U);
    msg.setDestination(38465U);
    msg.setDestinationEntity(219U);
    msg.value = 0.9415641330708374;

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
    msg.setTimeStamp(0.9514619180370568);
    msg.setSource(38331U);
    msg.setSourceEntity(196U);
    msg.setDestination(49865U);
    msg.setDestinationEntity(124U);
    msg.path_ref = 4183092797U;
    msg.start_lat = 0.4374716068497079;
    msg.start_lon = 0.8087128360382904;
    msg.start_z = 0.8100082559663939;
    msg.start_z_units = 151U;
    msg.end_lat = 0.3112226170439021;
    msg.end_lon = 0.8338858682930198;
    msg.end_z = 0.5675886101933127;
    msg.end_z_units = 235U;
    msg.speed = 0.6897828325134163;
    msg.speed_units = 44U;
    msg.lradius = 0.5457269521302567;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.8231812203604272);
    msg.setSource(50945U);
    msg.setSourceEntity(218U);
    msg.setDestination(10488U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 773629102U;
    msg.start_lat = 0.7993623037788798;
    msg.start_lon = 0.635218470680569;
    msg.start_z = 0.6767268988066227;
    msg.start_z_units = 24U;
    msg.end_lat = 0.36934556420052767;
    msg.end_lon = 0.5357312000391724;
    msg.end_z = 0.32415725568423115;
    msg.end_z_units = 133U;
    msg.speed = 0.5923152482912024;
    msg.speed_units = 253U;
    msg.lradius = 0.9732792500791932;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.4446037948009999);
    msg.setSource(1711U);
    msg.setSourceEntity(158U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 2349378841U;
    msg.start_lat = 0.43296483929773344;
    msg.start_lon = 0.9481225005800327;
    msg.start_z = 0.23866322471659285;
    msg.start_z_units = 189U;
    msg.end_lat = 0.016868190149536444;
    msg.end_lon = 0.17669173597126409;
    msg.end_z = 0.19104737084926826;
    msg.end_z_units = 226U;
    msg.speed = 0.7157561705969123;
    msg.speed_units = 233U;
    msg.lradius = 0.28335382918815955;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.5893341588381033);
    msg.setSource(50341U);
    msg.setSourceEntity(188U);
    msg.setDestination(20506U);
    msg.setDestinationEntity(159U);
    msg.x = 0.5813443624421482;
    msg.y = 0.027696387530154687;
    msg.z = 0.5641720086755917;
    msg.k = 0.19975934915324856;
    msg.m = 0.9637179394514221;
    msg.n = 0.40559968494611276;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.26302665117871726);
    msg.setSource(767U);
    msg.setSourceEntity(243U);
    msg.setDestination(8428U);
    msg.setDestinationEntity(114U);
    msg.x = 0.810944739689774;
    msg.y = 0.8218473433146244;
    msg.z = 0.22584874728303783;
    msg.k = 0.07036038702112768;
    msg.m = 0.23597457333152083;
    msg.n = 0.7880830430714;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.940874631911166);
    msg.setSource(60399U);
    msg.setSourceEntity(112U);
    msg.setDestination(43701U);
    msg.setDestinationEntity(205U);
    msg.x = 0.45264444716547436;
    msg.y = 0.9570496771817825;
    msg.z = 0.8047933602897301;
    msg.k = 0.9119406874313971;
    msg.m = 0.19521977212299513;
    msg.n = 0.2768269831240141;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.7818110932118307);
    msg.setSource(41852U);
    msg.setSourceEntity(133U);
    msg.setDestination(50498U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4843388403716302;

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
    msg.setTimeStamp(0.4550524059020167);
    msg.setSource(39650U);
    msg.setSourceEntity(11U);
    msg.setDestination(47983U);
    msg.setDestinationEntity(52U);
    msg.value = 0.2730844657488304;

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
    msg.setTimeStamp(0.6028010299053522);
    msg.setSource(61678U);
    msg.setSourceEntity(173U);
    msg.setDestination(60259U);
    msg.setDestinationEntity(73U);
    msg.value = 0.703588672920872;

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
    msg.setTimeStamp(0.5695486891783034);
    msg.setSource(55864U);
    msg.setSourceEntity(237U);
    msg.setDestination(45360U);
    msg.setDestinationEntity(213U);
    msg.u = 0.28836728931132405;
    msg.v = 0.2555803233029963;
    msg.w = 0.37181272614716876;
    msg.p = 0.4332234706635689;
    msg.q = 0.5432906483518172;
    msg.r = 0.22093416233458452;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.7740302658822222);
    msg.setSource(57516U);
    msg.setSourceEntity(202U);
    msg.setDestination(57762U);
    msg.setDestinationEntity(113U);
    msg.u = 0.49099817584637007;
    msg.v = 0.3596768499450548;
    msg.w = 0.5040397929273437;
    msg.p = 0.979775515625356;
    msg.q = 0.2094820294121703;
    msg.r = 0.7815625621041897;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.08464840499331916);
    msg.setSource(57014U);
    msg.setSourceEntity(218U);
    msg.setDestination(55080U);
    msg.setDestinationEntity(48U);
    msg.u = 0.7043272462884095;
    msg.v = 0.4287022740264297;
    msg.w = 0.18397383992863092;
    msg.p = 0.598605001175236;
    msg.q = 0.23728065394843945;
    msg.r = 0.2021073248565427;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.21177921039269);
    msg.setSource(21755U);
    msg.setSourceEntity(80U);
    msg.setDestination(40936U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 137430464U;
    msg.start_lat = 0.07814284893689594;
    msg.start_lon = 0.324048238637778;
    msg.start_z = 0.7725626521432675;
    msg.start_z_units = 216U;
    msg.end_lat = 0.23027342643778537;
    msg.end_lon = 0.07309981102503549;
    msg.end_z = 0.7688724481910105;
    msg.end_z_units = 87U;
    msg.lradius = 0.9930123760776978;
    msg.flags = 254U;
    msg.x = 0.2968276536067227;
    msg.y = 0.4528254095565839;
    msg.z = 0.23431646979074483;
    msg.vx = 0.0317853005814448;
    msg.vy = 0.7932062916474393;
    msg.vz = 0.6903558740215477;
    msg.course_error = 0.35856726539671246;
    msg.eta = 58708U;

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
    msg.setTimeStamp(0.5944929850523178);
    msg.setSource(8540U);
    msg.setSourceEntity(69U);
    msg.setDestination(37672U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 2244278433U;
    msg.start_lat = 0.6632122016158443;
    msg.start_lon = 0.4209816423951769;
    msg.start_z = 0.4174054899977392;
    msg.start_z_units = 20U;
    msg.end_lat = 0.942737849076995;
    msg.end_lon = 0.108504082210518;
    msg.end_z = 0.5604204127501559;
    msg.end_z_units = 186U;
    msg.lradius = 0.6219365682683263;
    msg.flags = 89U;
    msg.x = 0.12147863746548948;
    msg.y = 0.6058991239446233;
    msg.z = 0.05830154798550524;
    msg.vx = 0.9885898258517942;
    msg.vy = 0.13057147298272243;
    msg.vz = 0.23458301096713807;
    msg.course_error = 0.4391693450270684;
    msg.eta = 9407U;

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
    msg.setTimeStamp(0.25546141550824486);
    msg.setSource(3150U);
    msg.setSourceEntity(67U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 3433209357U;
    msg.start_lat = 0.9508789644206452;
    msg.start_lon = 0.550706105898029;
    msg.start_z = 0.11411826282761828;
    msg.start_z_units = 229U;
    msg.end_lat = 0.56164062485155;
    msg.end_lon = 0.5531525829027166;
    msg.end_z = 0.3065139470440391;
    msg.end_z_units = 80U;
    msg.lradius = 0.45277523023638433;
    msg.flags = 71U;
    msg.x = 0.8277325263079629;
    msg.y = 0.16238463309493978;
    msg.z = 0.7342966241035701;
    msg.vx = 0.8364161962003034;
    msg.vy = 0.04121903086726786;
    msg.vz = 0.25699768912987486;
    msg.course_error = 0.9871786316395044;
    msg.eta = 7882U;

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
    msg.setTimeStamp(0.5593217174904364);
    msg.setSource(1253U);
    msg.setSourceEntity(21U);
    msg.setDestination(22646U);
    msg.setDestinationEntity(37U);
    msg.k = 0.6301028371059563;
    msg.m = 0.35496725357827874;
    msg.n = 0.002124565486713026;

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
    msg.setTimeStamp(0.05139915903360859);
    msg.setSource(45478U);
    msg.setSourceEntity(178U);
    msg.setDestination(51576U);
    msg.setDestinationEntity(127U);
    msg.k = 0.012832868795073726;
    msg.m = 0.5669437231008315;
    msg.n = 0.7512231397650165;

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
    msg.setTimeStamp(0.05175257104478981);
    msg.setSource(48351U);
    msg.setSourceEntity(89U);
    msg.setDestination(4397U);
    msg.setDestinationEntity(145U);
    msg.k = 0.98634842217499;
    msg.m = 0.05183639432725318;
    msg.n = 0.22223457322876317;

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
    msg.setTimeStamp(0.8747566892248461);
    msg.setSource(5937U);
    msg.setSourceEntity(151U);
    msg.setDestination(15948U);
    msg.setDestinationEntity(17U);
    msg.p = 0.8890115295508461;
    msg.i = 0.7498472241205459;
    msg.d = 0.14828554911236125;
    msg.a = 0.4203866154631065;

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
    msg.setTimeStamp(0.09476397940792469);
    msg.setSource(2170U);
    msg.setSourceEntity(181U);
    msg.setDestination(29620U);
    msg.setDestinationEntity(179U);
    msg.p = 0.6019994835032914;
    msg.i = 0.6727726099116563;
    msg.d = 0.8522414839487101;
    msg.a = 0.3377234614153677;

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
    msg.setTimeStamp(0.5936327014337297);
    msg.setSource(12093U);
    msg.setSourceEntity(27U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(1U);
    msg.p = 0.0749014036379988;
    msg.i = 0.15796872520507155;
    msg.d = 0.6522712751720348;
    msg.a = 0.8637690906809116;

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
    msg.setTimeStamp(0.4605073654243683);
    msg.setSource(64290U);
    msg.setSourceEntity(15U);
    msg.setDestination(49046U);
    msg.setDestinationEntity(58U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.7442092741930494);
    msg.setSource(38110U);
    msg.setSourceEntity(186U);
    msg.setDestination(22673U);
    msg.setDestinationEntity(156U);
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
    msg.setTimeStamp(0.2692666746745205);
    msg.setSource(1930U);
    msg.setSourceEntity(4U);
    msg.setDestination(50492U);
    msg.setDestinationEntity(162U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.7523529283286239);
    msg.setSource(43851U);
    msg.setSourceEntity(119U);
    msg.setDestination(37638U);
    msg.setDestinationEntity(105U);
    msg.x = 0.15440057673203422;
    msg.y = 0.34713045240274143;
    msg.z = 0.6810172987231493;
    msg.vx = 0.7300516255317433;
    msg.vy = 0.7426407114832958;
    msg.vz = 0.5992835582073321;
    msg.ax = 0.19340152257958876;
    msg.ay = 0.15015768534488927;
    msg.az = 0.29386193189459764;
    msg.flags = 8367U;

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
    msg.setTimeStamp(0.43873765609949567);
    msg.setSource(38195U);
    msg.setSourceEntity(183U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(215U);
    msg.x = 0.25548609535485456;
    msg.y = 0.5143852429132999;
    msg.z = 0.07927685536596996;
    msg.vx = 0.10773804492921102;
    msg.vy = 0.3561619529199008;
    msg.vz = 0.010895702951073338;
    msg.ax = 0.31610044965594164;
    msg.ay = 0.666947188428105;
    msg.az = 0.2971449962236127;
    msg.flags = 6562U;

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
    msg.setTimeStamp(0.6079300922285755);
    msg.setSource(56147U);
    msg.setSourceEntity(145U);
    msg.setDestination(36081U);
    msg.setDestinationEntity(54U);
    msg.x = 0.30230228141139737;
    msg.y = 0.29482878450395533;
    msg.z = 0.7679898992536415;
    msg.vx = 0.951191083528815;
    msg.vy = 0.24542521057991962;
    msg.vz = 0.6450354885447911;
    msg.ax = 0.4485116950062519;
    msg.ay = 0.2833283422501216;
    msg.az = 0.5885912180781023;
    msg.flags = 19185U;

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
    msg.setTimeStamp(0.2218149987335789);
    msg.setSource(48941U);
    msg.setSourceEntity(219U);
    msg.setDestination(28028U);
    msg.setDestinationEntity(50U);
    msg.value = 0.4505470823181409;

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
    msg.setTimeStamp(0.21475287383248542);
    msg.setSource(63990U);
    msg.setSourceEntity(194U);
    msg.setDestination(11444U);
    msg.setDestinationEntity(209U);
    msg.value = 0.24795870857600555;

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
    msg.setTimeStamp(0.8575619619199427);
    msg.setSource(56394U);
    msg.setSourceEntity(24U);
    msg.setDestination(63257U);
    msg.setDestinationEntity(74U);
    msg.value = 0.9807412359483583;

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
    msg.setTimeStamp(0.363771091035194);
    msg.setSource(40821U);
    msg.setSourceEntity(246U);
    msg.setDestination(18897U);
    msg.setDestinationEntity(221U);
    msg.timeout = 41114U;
    msg.lat = 0.6792079338144463;
    msg.lon = 0.7281874590488251;
    msg.z = 0.5930158002345377;
    msg.z_units = 232U;
    msg.speed = 0.2481881665985931;
    msg.speed_units = 134U;
    msg.roll = 0.07913168684118799;
    msg.pitch = 0.32138722501102646;
    msg.yaw = 0.7405928573246208;
    msg.custom.assign("TYYMRTURVCGEFBZXIIZLZJVHXRFNXAPBHWIOKCJJLEY");

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
    msg.setTimeStamp(0.12441656198038298);
    msg.setSource(41637U);
    msg.setSourceEntity(57U);
    msg.setDestination(54374U);
    msg.setDestinationEntity(115U);
    msg.timeout = 51832U;
    msg.lat = 0.09126781256947558;
    msg.lon = 0.43103279260497473;
    msg.z = 0.32652815888870845;
    msg.z_units = 141U;
    msg.speed = 0.35026039485229976;
    msg.speed_units = 93U;
    msg.roll = 0.04908902842770613;
    msg.pitch = 0.41877624571374383;
    msg.yaw = 0.5651089819173476;
    msg.custom.assign("GJPUNAEYLQTVZCRKRRJGNULKDGQHFJDRLBEZQFRXWVJWREWQAMHATBHCVQCXIOTXMEKEFGJLHDTZIGFPWUKMFYXWKIIDMVBMWHVXFGONLSTFEAHSRMYSGXLKZOLLVWPVLBUWIYPOCVKAVNYQTYAQNYKUOOYIJQBINDFMOOISYKJCZDC");

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
    msg.setTimeStamp(0.6367170332549719);
    msg.setSource(11734U);
    msg.setSourceEntity(34U);
    msg.setDestination(28906U);
    msg.setDestinationEntity(211U);
    msg.timeout = 34335U;
    msg.lat = 0.811492887614143;
    msg.lon = 0.25083120487093125;
    msg.z = 0.33672376610488375;
    msg.z_units = 18U;
    msg.speed = 0.29906403388613456;
    msg.speed_units = 204U;
    msg.roll = 0.7805492026135232;
    msg.pitch = 0.29294434354895926;
    msg.yaw = 0.5763682343150016;
    msg.custom.assign("VJXTJCQNTOZEJOTLOEZKTXKMDUVBMGHWFKAUQHXYVCAMRBUYWLMNEYTRPKQKDVZDDSVEPVOIJSMBWTPGRXGRYGYOATECKHIVLOABRYCDHCUZQUNLQWCCGMQXFOGQBFSZAIGMSRUJXEQNLNRYHWWRSBKFWZVJNAAZILKBBLHGABGSFPSYIXFWORWASTKZSEF");

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
    msg.setTimeStamp(0.5791063582269728);
    msg.setSource(49104U);
    msg.setSourceEntity(89U);
    msg.setDestination(25497U);
    msg.setDestinationEntity(219U);
    msg.timeout = 20081U;
    msg.lat = 0.6596476568321072;
    msg.lon = 0.5635407453506232;
    msg.z = 0.02520631876491297;
    msg.z_units = 121U;
    msg.speed = 0.7560370115609407;
    msg.speed_units = 245U;
    msg.duration = 51671U;
    msg.radius = 0.49470840716335784;
    msg.flags = 242U;
    msg.custom.assign("UTHEKRDFGTAEBAHJXCSOOITNHLOVYPGBTIMAQFAKILDRNEZLMXSZSKMWEIUSLXKOBPFFKHPSGADPEWGHBMTJRCQALOUZNGEVISKMTSQOPCYHOKXBAIQVNNWUWNFW");

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
    msg.setTimeStamp(0.7411072793949249);
    msg.setSource(19017U);
    msg.setSourceEntity(121U);
    msg.setDestination(60463U);
    msg.setDestinationEntity(52U);
    msg.timeout = 54792U;
    msg.lat = 0.20086954775261856;
    msg.lon = 0.15092725938578055;
    msg.z = 0.6547797668457821;
    msg.z_units = 90U;
    msg.speed = 0.7980272842446378;
    msg.speed_units = 15U;
    msg.duration = 34445U;
    msg.radius = 0.9396918101770599;
    msg.flags = 185U;
    msg.custom.assign("MWHVYVKBBNCSFFJVNUCOEETPTQXBXXWYMIUACHEUGTRKWMHVABGILAHPIKCITDWNNAGXRGPKCSIVYTDBWQPHOJZRVLBNVOXSADFKSUAFEMQEYQNRPLHKWHYZYFZTDEQROSCBDOXWDBZJESLHSIASFKTQYLZGROORLZNNENKXGMADMYLXESMOICLEFMAJVZQPJCUGDWMOTWLXQDYMF");

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
    msg.setTimeStamp(0.015074410676374494);
    msg.setSource(44129U);
    msg.setSourceEntity(114U);
    msg.setDestination(61368U);
    msg.setDestinationEntity(19U);
    msg.timeout = 57446U;
    msg.lat = 0.3391404057718177;
    msg.lon = 0.23453486621975328;
    msg.z = 0.2435602667214939;
    msg.z_units = 125U;
    msg.speed = 0.21796247368373767;
    msg.speed_units = 217U;
    msg.duration = 2819U;
    msg.radius = 0.957695667883148;
    msg.flags = 106U;
    msg.custom.assign("UTYHELHWBRNQNXAZIHNNDLQDNSTRLQSMARRUIYGXYLHPXZWPTRPVFGBHFBZDXDKSKBZ");

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
    msg.setTimeStamp(0.4750337767263916);
    msg.setSource(61145U);
    msg.setSourceEntity(131U);
    msg.setDestination(62382U);
    msg.setDestinationEntity(216U);
    msg.custom.assign("EYJMZDUBJIWZIORAMRKVFTOYAJIQIUUQRRHHMGGOSGBQSODNCBBVDXUEJOFLOGYPBFCCIHLDSECKXZWLYUXJGYZNCAHUAEEEIVNQYFWTZZZYKHCNJKCKJWJDSITWLQGALPPTVVOUNBPPSFMTALHUEWXZHRUI");

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
    msg.setTimeStamp(0.0646242803207242);
    msg.setSource(27603U);
    msg.setSourceEntity(51U);
    msg.setDestination(64573U);
    msg.setDestinationEntity(36U);
    msg.custom.assign("FXSDJJJCGTTONVVGIRETVMZZSVMPYOBNUCYRZOWHRKFGPMJDFDGKIMDKTVSZDCQLYJZIFEULOOGBNKENFSGEGBDIHSBJIBLLYBZFVLQHJHEDMSEXKLHPEQXLDQYOAAJQHRQQQBMCNYWWIKRB");

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
    msg.setTimeStamp(0.31182793702207123);
    msg.setSource(56754U);
    msg.setSourceEntity(174U);
    msg.setDestination(1033U);
    msg.setDestinationEntity(163U);
    msg.custom.assign("YPTGIDBPSXUBRAYWTMGROGUUUKDLTFVFLUZJEISNBAXKNYVBMKKQDXLCOHQUSHQZWLQXXSGOFPOFCGNJSFCCYZHADCQAREOSMJMKGGYILXWTXANZVQNOQPMDYZWAVHTEVBPJYJZQYFWDJHRGBUEVNMRT");

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
    msg.setTimeStamp(0.9664825072096562);
    msg.setSource(13583U);
    msg.setSourceEntity(210U);
    msg.setDestination(27031U);
    msg.setDestinationEntity(214U);
    msg.timeout = 27362U;
    msg.lat = 0.8788623589511894;
    msg.lon = 0.10749227505335268;
    msg.z = 0.47963511055604546;
    msg.z_units = 200U;
    msg.duration = 9840U;
    msg.speed = 0.7634902857051064;
    msg.speed_units = 97U;
    msg.type = 95U;
    msg.radius = 0.7723985532503885;
    msg.length = 0.41849833372027034;
    msg.bearing = 0.10169525186513528;
    msg.direction = 52U;
    msg.custom.assign("ZGTAUDOBFMUTEWVPVIHWITWXRVUEWD");

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
    msg.setTimeStamp(0.8879054674560233);
    msg.setSource(25141U);
    msg.setSourceEntity(184U);
    msg.setDestination(55816U);
    msg.setDestinationEntity(126U);
    msg.timeout = 13171U;
    msg.lat = 0.22038615614503654;
    msg.lon = 0.12480418819405958;
    msg.z = 0.15900549056660573;
    msg.z_units = 185U;
    msg.duration = 43948U;
    msg.speed = 0.5103143084971609;
    msg.speed_units = 238U;
    msg.type = 153U;
    msg.radius = 0.12687293882455442;
    msg.length = 0.573260064229191;
    msg.bearing = 0.08381910274365068;
    msg.direction = 131U;
    msg.custom.assign("CMADEFIJWMKRVFDUEGBAYXRDHBQQTXLSFRJUPLCJPYLSZXLZWCVOBOWZENIRVPXSYJPGPAVAKUQXTVFSLHQCNJHMZQ");

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
    msg.setTimeStamp(0.6844641710535367);
    msg.setSource(35963U);
    msg.setSourceEntity(65U);
    msg.setDestination(22860U);
    msg.setDestinationEntity(91U);
    msg.timeout = 59034U;
    msg.lat = 0.7150404914935332;
    msg.lon = 0.6264839787286748;
    msg.z = 0.24782616729363394;
    msg.z_units = 81U;
    msg.duration = 25772U;
    msg.speed = 0.19645909627501568;
    msg.speed_units = 238U;
    msg.type = 17U;
    msg.radius = 0.9025267869414679;
    msg.length = 0.38175990369166823;
    msg.bearing = 0.7851526442631217;
    msg.direction = 149U;
    msg.custom.assign("IDWEZYKBHDCVHRLTGGRFYXKHMVBUJBPOUDEGBEUGXRGFWRPYZGHAIJKAAVANULSLEAWVRTJHBYKRWDXHLIBXJHIRCMMXIGZOYMKXZPUFIMUZNNNQQHIOZBFSTCFAOTWKFFANMVCSYSJWPVAZOPKJULUDPMRCPZEEDJSTELOVGQDKBYDNUSFIPGHNNCPLTXWX");

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
    msg.setTimeStamp(0.991739341613539);
    msg.setSource(30061U);
    msg.setSourceEntity(226U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(69U);
    msg.duration = 7159U;
    msg.custom.assign("JKETWYPVSQFRBKKYOXZCGCALJDOADDITWEDRXUCKYZUIVDMMZQLEHAXTPUBULSWXOLSCRMLCKIYPGFOIHAKSQZZHCEVZNUGGBYEMORSFGRGYDQJGPBXTWNPAGXZMCYTVVHAXQRZVKTBDLWYWIVDJKETJWSMFQOSNLALBVWHNOQIFUIHZFDQJPCKSBEXRQIESSIZYDMWBNTLAORNTLPENWPMRA");

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
    msg.setTimeStamp(0.5282557454442086);
    msg.setSource(26288U);
    msg.setSourceEntity(89U);
    msg.setDestination(3203U);
    msg.setDestinationEntity(195U);
    msg.duration = 34814U;
    msg.custom.assign("AUTREDBSEBSPKETMXFXNRVLZCOMYWRNZSEYSOGDKKRZTNFHDAJ");

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
    msg.setTimeStamp(0.6380258833416174);
    msg.setSource(13681U);
    msg.setSourceEntity(230U);
    msg.setDestination(5045U);
    msg.setDestinationEntity(47U);
    msg.duration = 15046U;
    msg.custom.assign("VAPSDDOAPWYULTBNJHIULFASZCJIEWVS");

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
    msg.setTimeStamp(0.18958084382253182);
    msg.setSource(63151U);
    msg.setSourceEntity(94U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(78U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.4398992227782582;
    msg.control.set(tmp_msg_0);
    msg.duration = 7879U;
    msg.custom.assign("JELQUUXZJNOTSLUOFSRIFTDBHWDQNQJLEHBYNPBTSEGONPCRCBJZSWILVNMMCJDJDQWZMBHKTWYXKDTPRRKHSKPYPHAZDEGEBKPUYTECGIEMCARPAAXRJQEWLPKGIMLVYERNWOQJMUGTCXQRBFKGUOYIXIUFIBWLSZCTKQMJSVNLUQLAMACAVZXODVSWYJNYVRXRHZSWVFUXTOKHVZUIWYOFMGABSEIDHFDANGGPCOZVV");

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
    msg.setTimeStamp(0.03904166495564265);
    msg.setSource(49912U);
    msg.setSourceEntity(28U);
    msg.setDestination(44860U);
    msg.setDestinationEntity(172U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.27820636982835245;
    msg.control.set(tmp_msg_0);
    msg.duration = 37278U;
    msg.custom.assign("QGVQZHJFXWBESMNDCUG");

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
    msg.setTimeStamp(0.5266152105264646);
    msg.setSource(38380U);
    msg.setSourceEntity(138U);
    msg.setDestination(54360U);
    msg.setDestinationEntity(182U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.363087251888619;
    msg.control.set(tmp_msg_0);
    msg.duration = 14192U;
    msg.custom.assign("GCTCMDPNTNIKRRF");

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
    msg.setTimeStamp(0.5168271003108617);
    msg.setSource(46555U);
    msg.setSourceEntity(218U);
    msg.setDestination(46362U);
    msg.setDestinationEntity(114U);
    msg.timeout = 53517U;
    msg.lat = 0.3623163656295054;
    msg.lon = 0.1371067807573113;
    msg.z = 0.7162401825046043;
    msg.z_units = 153U;
    msg.speed = 0.47792782904577336;
    msg.speed_units = 71U;
    msg.bearing = 0.3545887350796102;
    msg.cross_angle = 0.5667081645222648;
    msg.width = 0.18319632922214357;
    msg.length = 0.6715131723460159;
    msg.hstep = 0.5279118435327826;
    msg.coff = 12U;
    msg.alternation = 164U;
    msg.flags = 175U;
    msg.custom.assign("LOGHJKWFRXIFUBFASZXZQBSOBGTSJEATYODNSDPYGJMNVYCV");

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
    msg.setTimeStamp(0.744634676067637);
    msg.setSource(28428U);
    msg.setSourceEntity(62U);
    msg.setDestination(34968U);
    msg.setDestinationEntity(172U);
    msg.timeout = 38041U;
    msg.lat = 0.6746079446968947;
    msg.lon = 0.8189815170689949;
    msg.z = 0.17036529597791472;
    msg.z_units = 99U;
    msg.speed = 0.0985587810208376;
    msg.speed_units = 231U;
    msg.bearing = 0.6080433470087936;
    msg.cross_angle = 0.19707189279221526;
    msg.width = 0.3956987093868817;
    msg.length = 0.7301895731496122;
    msg.hstep = 0.042441337822654135;
    msg.coff = 162U;
    msg.alternation = 2U;
    msg.flags = 220U;
    msg.custom.assign("WCXFPTLMNGCCKSPVHQZZCMUAFCYAFJOPALXCVAPQGAGLNYLSUCXHNWLTCEHSAZOPKKRODYHILCYGETQIJBEFVOWKVUDFZGZMYUXENWDXYHKCXUVTSQBSUXVJWHNGNHJEJGZJYKKBZSBIPOLSKEEWOEWGTKODVIBWDRORDTLBRNYNVBPZLMRJSJ");

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
    msg.setTimeStamp(0.2359505640845273);
    msg.setSource(1021U);
    msg.setSourceEntity(196U);
    msg.setDestination(52313U);
    msg.setDestinationEntity(141U);
    msg.timeout = 44538U;
    msg.lat = 0.7246083750953211;
    msg.lon = 0.7632367062173069;
    msg.z = 0.5033577612416349;
    msg.z_units = 86U;
    msg.speed = 0.9852336043592935;
    msg.speed_units = 120U;
    msg.bearing = 0.4724574103870821;
    msg.cross_angle = 0.27374635919897883;
    msg.width = 0.40379691838283993;
    msg.length = 0.03799863580752594;
    msg.hstep = 0.04885171037270053;
    msg.coff = 93U;
    msg.alternation = 128U;
    msg.flags = 229U;
    msg.custom.assign("HXLHZDVSFCBVJUCFAQEEVPOFARZAXJQMHYQZFOWTJITQCRYXNDFUBWSNZBKXWQGIIRDUSMKCUEMQLRJHYWATOAKNWCUDAKFSOSEGPZBHNHBZALMIYMXEYYPZUSKDIQGTXGYLNAWNEBRBIBWQTJEQTCMKPXIXJMOCPKFYHNDVRNELMS");

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
    msg.setTimeStamp(0.27875313294847404);
    msg.setSource(14802U);
    msg.setSourceEntity(21U);
    msg.setDestination(44185U);
    msg.setDestinationEntity(246U);
    msg.timeout = 43790U;
    msg.lat = 0.7360588100100703;
    msg.lon = 0.7504791857529207;
    msg.z = 0.7828728491989118;
    msg.z_units = 6U;
    msg.speed = 0.013253647652648026;
    msg.speed_units = 39U;
    msg.custom.assign("HCXIMMVBTJBUQYKSGPCOHMATWCIVULRJYUFBVBAMKPXTS");

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
    msg.setTimeStamp(0.16471793730497275);
    msg.setSource(35385U);
    msg.setSourceEntity(202U);
    msg.setDestination(1489U);
    msg.setDestinationEntity(224U);
    msg.timeout = 50934U;
    msg.lat = 0.4464711336768151;
    msg.lon = 0.833338840883784;
    msg.z = 0.8236203207805812;
    msg.z_units = 44U;
    msg.speed = 0.6455238928386507;
    msg.speed_units = 105U;
    msg.custom.assign("WPREJUHSMWWFNXUITCRKZOHYLBWXOEEDBRMYNDWILKCAILYONHZRDMOXEWFGNPKJVIGVIYZKTUCDCASZKOJDEXTP");

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
    msg.setTimeStamp(0.7265877379536931);
    msg.setSource(7562U);
    msg.setSourceEntity(105U);
    msg.setDestination(6338U);
    msg.setDestinationEntity(74U);
    msg.timeout = 24013U;
    msg.lat = 0.33791882661257056;
    msg.lon = 0.38116038261970053;
    msg.z = 0.31572057390460306;
    msg.z_units = 226U;
    msg.speed = 0.24463634041485183;
    msg.speed_units = 45U;
    msg.custom.assign("VAATJPKDJJ");

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
    msg.setTimeStamp(0.5155432629163286);
    msg.setSource(57376U);
    msg.setSourceEntity(225U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(95U);
    msg.x = 0.45969843920634;
    msg.y = 0.7823771100728762;
    msg.z = 0.23028154497147324;

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
    msg.setTimeStamp(0.605918162630782);
    msg.setSource(38228U);
    msg.setSourceEntity(212U);
    msg.setDestination(32329U);
    msg.setDestinationEntity(176U);
    msg.x = 0.690897387035181;
    msg.y = 0.30454774643115334;
    msg.z = 0.02613359448153363;

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
    msg.setTimeStamp(0.05577385622969455);
    msg.setSource(58544U);
    msg.setSourceEntity(113U);
    msg.setDestination(14412U);
    msg.setDestinationEntity(214U);
    msg.x = 0.7128363994065048;
    msg.y = 0.5974991412857035;
    msg.z = 0.07078597737814118;

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
    msg.setTimeStamp(0.4375552606678794);
    msg.setSource(45776U);
    msg.setSourceEntity(124U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(55U);
    msg.timeout = 5095U;
    msg.lat = 0.6112562603759727;
    msg.lon = 0.6224889621617088;
    msg.z = 0.40385036101330274;
    msg.z_units = 194U;
    msg.amplitude = 0.9956514183170441;
    msg.pitch = 0.2655962443040828;
    msg.speed = 0.04169412526897931;
    msg.speed_units = 102U;
    msg.custom.assign("AOZBYWDOCGSNRQQHTRTADILNWDJYRZUOXGGKCGHZTSVIYZUGZZTEQMZETHHHLFISNIBJSJXBDGBPVIPWPVKMDVMXKRMECSPYYUMFWAOAJKJWBSWCYXXVNDEVPQHFRXQKGGYWYCAPOPYKCOAEBQJZJERLRSNKASBCMSLXMNXKTIFHAUAZLFVLRBWDVGQMPWVHFXCBKCFLFMJDCITIQY");

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
    msg.setTimeStamp(0.13180677986231115);
    msg.setSource(55641U);
    msg.setSourceEntity(202U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(3U);
    msg.timeout = 50262U;
    msg.lat = 0.5831521140502076;
    msg.lon = 0.789265334212051;
    msg.z = 0.7684743886813218;
    msg.z_units = 182U;
    msg.amplitude = 0.5312851119060689;
    msg.pitch = 0.49238743940430973;
    msg.speed = 0.0610350526185246;
    msg.speed_units = 20U;
    msg.custom.assign("TBUFRRPRGJWMJSIZRPABDVIKRFEIJTYBQIJDSXWNOFHFTGSFKLMGZZYEWLAGHDARTIUVWETHCFUDAVCPUDUBAKOWFAAOXSURMPHNSJXOVVEOFGULIEPQRXCHUNKVBNCNKMC");

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
    msg.setTimeStamp(0.6586691924662539);
    msg.setSource(17973U);
    msg.setSourceEntity(244U);
    msg.setDestination(2644U);
    msg.setDestinationEntity(164U);
    msg.timeout = 55529U;
    msg.lat = 0.6704612761344129;
    msg.lon = 0.9843027260980178;
    msg.z = 0.6013296122973701;
    msg.z_units = 216U;
    msg.amplitude = 0.35615537708969025;
    msg.pitch = 0.824752366630537;
    msg.speed = 0.32396622214857185;
    msg.speed_units = 39U;
    msg.custom.assign("NMCOINSNDUNXYSXPJJZJCGUDEUIWPONHFLJRRJBFBBUHYCSXIZIVKRCBVDYMJQWAAYBZFKABH");

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
    msg.setTimeStamp(0.5091903574438537);
    msg.setSource(32796U);
    msg.setSourceEntity(34U);
    msg.setDestination(52054U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.8173064310494399);
    msg.setSource(61247U);
    msg.setSourceEntity(247U);
    msg.setDestination(41808U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.5030480727686065);
    msg.setSource(29544U);
    msg.setSourceEntity(113U);
    msg.setDestination(34598U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.8039530135726138);
    msg.setSource(60238U);
    msg.setSourceEntity(55U);
    msg.setDestination(3046U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.2680997823358342;
    msg.lon = 0.7788455951569888;
    msg.z = 0.06850257212946431;
    msg.z_units = 21U;
    msg.radius = 0.424474343759903;
    msg.duration = 17023U;
    msg.speed = 0.9579880058521497;
    msg.speed_units = 209U;
    msg.custom.assign("YLVXWUFNIWXTAMBFVODFBYWTFBQDDFBYFORHIGAAKCXZQDUPJSNGIUELXKYHASYMBUZHINXBLLVEYAKUSFSQIUZCEIDJQHQCYHODMJASVYJEMOQOCLZOCGNTZJSWQWGPZNS");

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
    msg.setTimeStamp(0.2840374541649847);
    msg.setSource(49279U);
    msg.setSourceEntity(235U);
    msg.setDestination(53198U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.27517639566533636;
    msg.lon = 0.6333094766407776;
    msg.z = 0.935765483199242;
    msg.z_units = 4U;
    msg.radius = 0.6108357649770222;
    msg.duration = 57712U;
    msg.speed = 0.18876735767237396;
    msg.speed_units = 225U;
    msg.custom.assign("LICZZMVHDBV");

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
    msg.setTimeStamp(0.21192941015266475);
    msg.setSource(65273U);
    msg.setSourceEntity(46U);
    msg.setDestination(6892U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.1776492648200837;
    msg.lon = 0.07134884226477001;
    msg.z = 0.6444549297692825;
    msg.z_units = 147U;
    msg.radius = 0.38365593942918663;
    msg.duration = 8934U;
    msg.speed = 0.22186640943195113;
    msg.speed_units = 130U;
    msg.custom.assign("LRRSRMMRHIXZGJHUVTOZKWYLXRAZIKCVSGGWNOUDSDKHDVCLCCCJKETBBXLOAQDBGOPENQJVDQNKUUWPWGNUZLCBRJCIIVJR");

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
    msg.setTimeStamp(0.4467430781276158);
    msg.setSource(54791U);
    msg.setSourceEntity(149U);
    msg.setDestination(51285U);
    msg.setDestinationEntity(55U);
    msg.timeout = 56248U;
    msg.flags = 25U;
    msg.lat = 0.5010772276872993;
    msg.lon = 0.07356866586913002;
    msg.start_z = 0.025030561351211844;
    msg.start_z_units = 225U;
    msg.end_z = 0.01628608752667493;
    msg.end_z_units = 18U;
    msg.radius = 0.8657990801192864;
    msg.speed = 0.9319643864285962;
    msg.speed_units = 248U;
    msg.custom.assign("AADRRILRRTYCZVFKHDWZYSTFPLGHRGKCTXVTOWSLCYMOFGBMJYDSGWYQRFVOKYEGAJJMXLWHUFURJBNDCEHAELMKACQFEIIXPJQZGPUBSIXGFTVBXNNMVNZLDEIPEHKOVHJZCKEQWBWMMPAZZLUTVHDTTEQDBMNHJIXYENXODUYFWONGZPUPDZXZJKXAWRBOUWFQIFTNMS");

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
    msg.setTimeStamp(0.901252926444711);
    msg.setSource(31729U);
    msg.setSourceEntity(25U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(70U);
    msg.timeout = 33161U;
    msg.flags = 53U;
    msg.lat = 0.6469029890822237;
    msg.lon = 0.13239788736915847;
    msg.start_z = 0.952131413246242;
    msg.start_z_units = 62U;
    msg.end_z = 0.5203787910374146;
    msg.end_z_units = 61U;
    msg.radius = 0.6389926216309116;
    msg.speed = 0.7669380662587776;
    msg.speed_units = 245U;
    msg.custom.assign("LLYXUBRCEPVWRRTSIVZSFHGWHFDRXXTYRHJCSEZQFAMKMWCFKJANMLKRWBZOBYPLWJODKURXDNPZCPCBSBEVEYSHXNIHNQVIBBFKZOVJMEJPLYXZTWPSGPRDCOPTVJKEVCJKUANVGHKTIQJACMOJRWILGBAUZIUENAXGOTANSGXECZYQKFDYCTQQNLGQPFFTABHNVGUKHYFOOISILMEJSLOMTNTGUOIUSZQHMEBQGUM");

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
    msg.setTimeStamp(0.3606419509054988);
    msg.setSource(49033U);
    msg.setSourceEntity(175U);
    msg.setDestination(27579U);
    msg.setDestinationEntity(184U);
    msg.timeout = 56596U;
    msg.flags = 153U;
    msg.lat = 0.018439615744090698;
    msg.lon = 0.44194219457247597;
    msg.start_z = 0.4443030106117726;
    msg.start_z_units = 116U;
    msg.end_z = 0.8441715421352073;
    msg.end_z_units = 239U;
    msg.radius = 0.9120586103294527;
    msg.speed = 0.27313190465846804;
    msg.speed_units = 55U;
    msg.custom.assign("RSPGOCNEQUBTVSVACRWHAWAXWOCGYMVKVKQCYSRPHZZHOFZEQOBZUDGIYEQGAHNJXZEQVDHUQLTMJAJRNKMPLTLB");

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
    msg.setTimeStamp(0.5477479962078436);
    msg.setSource(57116U);
    msg.setSourceEntity(54U);
    msg.setDestination(40883U);
    msg.setDestinationEntity(221U);
    msg.timeout = 47827U;
    msg.lat = 0.7359393978617557;
    msg.lon = 0.14728651385883162;
    msg.z = 0.16488457098452924;
    msg.z_units = 161U;
    msg.speed = 0.14434143457067694;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.18237659190414834;
    tmp_msg_0.y = 0.07298756903031423;
    tmp_msg_0.z = 0.8832861665874658;
    tmp_msg_0.t = 0.9928373211300315;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DJZOWJVVEDPUCKSSEUIMQXUOLXMRNWBLIOFTEYAYDURGZOJBHQDNBQTZYSZWKNFICIYVLTDNDMPXAHRGQOKQBDTFINWGRVJDDWUYOHZPQTPGYFSWWTJCAX");

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
    msg.setTimeStamp(0.42686254579617233);
    msg.setSource(12450U);
    msg.setSourceEntity(63U);
    msg.setDestination(8366U);
    msg.setDestinationEntity(215U);
    msg.timeout = 64804U;
    msg.lat = 0.6790199801100953;
    msg.lon = 0.006900802669764561;
    msg.z = 0.41553625613675793;
    msg.z_units = 29U;
    msg.speed = 0.8425402199740523;
    msg.speed_units = 142U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.37141688641943604;
    tmp_msg_0.y = 0.3024385693291479;
    tmp_msg_0.z = 0.8540090156294221;
    tmp_msg_0.t = 0.9914052744136989;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VARTPFUTYPAUIJFTKGIBHDQLUJZVXKYGPDOGQQESRLEJDNREGCUVNNWTAILHCUQCFROPUPJWBZIMCAEURWLCTCPYSSXCBBJZQDDMLO");

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
    msg.setTimeStamp(0.20559159641531166);
    msg.setSource(29471U);
    msg.setSourceEntity(123U);
    msg.setDestination(40693U);
    msg.setDestinationEntity(66U);
    msg.timeout = 32186U;
    msg.lat = 0.27775594243537705;
    msg.lon = 0.13419902297999464;
    msg.z = 0.95030086158221;
    msg.z_units = 37U;
    msg.speed = 0.9479611847933356;
    msg.speed_units = 6U;
    msg.custom.assign("AYSBSSRMPVGVQTMKNDFSTHWFKRVENHXSVXAZNANLRFLGUDOZXDBRCRUMMSAHTJZOQOPMGYJTGIHQDBQHHPBYIXV");

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
    msg.setTimeStamp(0.8305727700778471);
    msg.setSource(24835U);
    msg.setSourceEntity(85U);
    msg.setDestination(25425U);
    msg.setDestinationEntity(44U);
    msg.x = 0.7584797538737786;
    msg.y = 0.8396717764369924;
    msg.z = 0.841609495115215;
    msg.t = 0.6194789703933035;

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
    msg.setTimeStamp(0.6529770445746239);
    msg.setSource(64780U);
    msg.setSourceEntity(175U);
    msg.setDestination(30582U);
    msg.setDestinationEntity(253U);
    msg.x = 0.570899046404593;
    msg.y = 0.2558635365493793;
    msg.z = 0.8693186543132043;
    msg.t = 0.09866377718885289;

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
    msg.setTimeStamp(0.13091908620550974);
    msg.setSource(38411U);
    msg.setSourceEntity(59U);
    msg.setDestination(13149U);
    msg.setDestinationEntity(108U);
    msg.x = 0.10463957462210671;
    msg.y = 0.04487036553122814;
    msg.z = 0.5606530170898042;
    msg.t = 0.33337581344682665;

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
    msg.setTimeStamp(0.4982572154365762);
    msg.setSource(53722U);
    msg.setSourceEntity(65U);
    msg.setDestination(23410U);
    msg.setDestinationEntity(210U);
    msg.timeout = 5093U;
    msg.name.assign("BCDZZMBKJNVLECFLRYRDVYKJMQWSKMKUSFLJCOUAYJXHCIAXCWUOOWQDKMXRSESPK");
    msg.custom.assign("DJEKEVJYBW");

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
    msg.setTimeStamp(0.9449444590305129);
    msg.setSource(23641U);
    msg.setSourceEntity(245U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(58U);
    msg.timeout = 61698U;
    msg.name.assign("DIQIPEZRVHGDACPONJHEZHGZMSBXLCUJTQANWPHJTQBPVWKLHFUMMGUTWXEKXJUIXIRSPPIJASOIFYODZCLVUQRXBSQXWOANCDZTEGNFGMYVOTTSREKRGASXJIPRMCKDRRBACZPDUUHVBCYVNGVQRLDYYYMYGMYAKYLSUOTWGSXBCQYDHZMPBKWAXSHWLEDWIQSOWCFNFEAFNWAZBKOMQVNKVHHJRNIBVCFULJMJILLFD");
    msg.custom.assign("KUTXTSVDIZLJQTWNPPHUJNZVPSPIDFSKGYOBNNQVQXRKWQHCEBGBHABHHPMXGCWCIMZKQQMCIJIGCQWDVAOAXEDRGVYTZNULHFAGXFOYRSEYBGGQODMOVSPNAKUAXCXMQIANTJWZVBRYNFSLYTEWIBNHZFBURFPDAFCRMJULAXRRGDBMZKOMOKYHJ");

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
    msg.setTimeStamp(0.2634341899382331);
    msg.setSource(19743U);
    msg.setSourceEntity(134U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(205U);
    msg.timeout = 28936U;
    msg.name.assign("OHEUIHBNUTMPWPKYLOEQHNZUDYJCGXMYUYWDAZDSNPZEBYDZXKVFFLPSVRGUAOSOVRXIJJMUFDZKSGRQVIQ");
    msg.custom.assign("ZWXTWJZKLMIYNXTKHBEYMGIWPPKFUTQOUQZTPGDSLCQRJZYLRGTKFCSUNCLAODKYEUMIJTMEFGNZAZUSWTLOPNQCHXZAGSPMACGVGWAVOYFACJHBRDVHFJDBFOAJELCISCVHDQOOJIIHMWXSUSN");

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
    msg.setTimeStamp(0.8053980943332882);
    msg.setSource(35938U);
    msg.setSourceEntity(175U);
    msg.setDestination(31763U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.7325304475636871;
    msg.lon = 0.5127738023626462;
    msg.z = 0.6720076709571293;
    msg.z_units = 212U;
    msg.speed = 0.899065914145478;
    msg.speed_units = 3U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42848U;
    tmp_msg_0.off_x = 0.9983777695613056;
    tmp_msg_0.off_y = 0.7914532111147378;
    tmp_msg_0.off_z = 0.4462512463181847;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5493222878784292;
    msg.custom.assign("SCNEFXFGIGVRIUKEUWJLWGYBLSRBOMCHQPXMLBONFRPPEZKANLXRAWVSSASXKVDTVTDWGEGBELNTUSUWBZLQKDYVMQRPTMAMNKAJJPLRHXSGOINXWVKBLUTDZBPSCIQXJBZYCOJZGCUEOYVIRVWIFDHMFMDCZZYFWTQHYAKSCFOMDJFQLNHTPUUEKQYEKYTXAYINWXSREUIQZVNWHDQGPCFQYDOHCLBHHIN");

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
    msg.setTimeStamp(0.44944835241023295);
    msg.setSource(46895U);
    msg.setSourceEntity(240U);
    msg.setDestination(35053U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.7830602480311929;
    msg.lon = 0.05393285700292649;
    msg.z = 0.6740437252132193;
    msg.z_units = 86U;
    msg.speed = 0.05929024783722836;
    msg.speed_units = 137U;
    msg.start_time = 0.3347702870467758;
    msg.custom.assign("XRUUOUOORDLTNQMFPRYWERCDJJBYGQKCHYEYRTNBAHRYHQNIDSTDGPJWKELBNVXOQYQSXZZWEQOQLZUSZBSHYTWCXLFIMLKMDMHASPEXNEOZJCVBLXVIAZABITKBXXWCMDIEPOFMIACIRGJPUIHMZCXALKVTJQWDMPZVCTBWKBJFTYEZLNURFHJAAFGGPUWVLDFFYZEGFARKUOTPGTDJDHEGCJVGSISAGRPNHPVSWVKWSMNNKSUQYXQ");

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
    msg.setTimeStamp(0.18047738787078738);
    msg.setSource(1756U);
    msg.setSourceEntity(228U);
    msg.setDestination(32129U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.33090742757350533;
    msg.lon = 0.6531332360186494;
    msg.z = 0.5988429464505244;
    msg.z_units = 157U;
    msg.speed = 0.5515031387049327;
    msg.speed_units = 200U;
    msg.start_time = 0.7721364871456377;
    msg.custom.assign("YGCTDYWXVTMHBOKSAIPWUWROTVDMNSAJYAGIPMPVTEPHBJTMCKLMXUJOAPBPXPDVKIZCJBHCFQQRWZJWEYSBBNRTKWLWEEWGGHOENDQQ");

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
    msg.setTimeStamp(0.573700270300784);
    msg.setSource(52807U);
    msg.setSourceEntity(89U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(81U);
    msg.vid = 64901U;
    msg.off_x = 0.006937870875877494;
    msg.off_y = 0.8152506929027005;
    msg.off_z = 0.15368756776028303;

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
    msg.setTimeStamp(0.8478085954916234);
    msg.setSource(705U);
    msg.setSourceEntity(184U);
    msg.setDestination(33277U);
    msg.setDestinationEntity(91U);
    msg.vid = 29893U;
    msg.off_x = 0.2680177747189886;
    msg.off_y = 0.8245346553659061;
    msg.off_z = 0.2406481089425646;

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
    msg.setTimeStamp(0.8581360331940704);
    msg.setSource(55770U);
    msg.setSourceEntity(226U);
    msg.setDestination(1474U);
    msg.setDestinationEntity(0U);
    msg.vid = 45997U;
    msg.off_x = 0.1068600790104468;
    msg.off_y = 0.28398003966078966;
    msg.off_z = 0.16544866918307755;

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
    msg.setTimeStamp(0.9594238555177245);
    msg.setSource(44602U);
    msg.setSourceEntity(201U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.28190769057347087);
    msg.setSource(34530U);
    msg.setSourceEntity(48U);
    msg.setDestination(64007U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.6050809354932092);
    msg.setSource(29926U);
    msg.setSourceEntity(40U);
    msg.setDestination(33596U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.21794930622391873);
    msg.setSource(32907U);
    msg.setSourceEntity(169U);
    msg.setDestination(13046U);
    msg.setDestinationEntity(88U);
    msg.mid = 48985U;

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
    msg.setTimeStamp(0.27196406006577223);
    msg.setSource(25914U);
    msg.setSourceEntity(203U);
    msg.setDestination(20994U);
    msg.setDestinationEntity(104U);
    msg.mid = 5974U;

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
    msg.setTimeStamp(0.3954173186541169);
    msg.setSource(17754U);
    msg.setSourceEntity(87U);
    msg.setDestination(13462U);
    msg.setDestinationEntity(171U);
    msg.mid = 26159U;

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
    msg.setTimeStamp(0.34599602029004817);
    msg.setSource(10005U);
    msg.setSourceEntity(123U);
    msg.setDestination(3945U);
    msg.setDestinationEntity(0U);
    msg.state = 88U;
    msg.eta = 42314U;
    msg.info.assign("GHQEXESRVNWEPWLWYZBQJDQLLRVMIKOIIFRLFVTPTRZASDEQDHKUHHFBTPYHOTMNCREFTIGHJHAIQOXLNNAVKBOADKKCYPLPGUEQPGKMAXVMLVOVQJADKWCNEHSZYGUNOJNKGUJWTUMVCGMMBMBSAUDAUFNXYOXXSZIQGRRINCREOTXFO");

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
    msg.setTimeStamp(0.3291466190034562);
    msg.setSource(19803U);
    msg.setSourceEntity(151U);
    msg.setDestination(3018U);
    msg.setDestinationEntity(55U);
    msg.state = 223U;
    msg.eta = 22274U;
    msg.info.assign("YOUYEWVGTHUOAPALNBNJFNLWJNKPUBGYRQVLK");

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
    msg.setTimeStamp(0.43766908713449626);
    msg.setSource(19351U);
    msg.setSourceEntity(231U);
    msg.setDestination(4698U);
    msg.setDestinationEntity(113U);
    msg.state = 49U;
    msg.eta = 49567U;
    msg.info.assign("ZQGAXKKTLOQYJPRDRTTPNGKFFPMDZLKVYORNWVBUOBPFYOUDSKIEFHQHUBREOCFYPCVDZTDA");

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
    msg.setTimeStamp(0.3366866687974932);
    msg.setSource(3555U);
    msg.setSourceEntity(72U);
    msg.setDestination(42904U);
    msg.setDestinationEntity(172U);
    msg.system = 31458U;
    msg.duration = 51285U;
    msg.speed = 0.04868979472527013;
    msg.speed_units = 56U;
    msg.x = 0.8357146472062472;
    msg.y = 0.7763117190954334;
    msg.z = 0.9184140615559134;
    msg.z_units = 196U;

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
    msg.setTimeStamp(0.7006363763319802);
    msg.setSource(544U);
    msg.setSourceEntity(37U);
    msg.setDestination(19997U);
    msg.setDestinationEntity(195U);
    msg.system = 17939U;
    msg.duration = 45438U;
    msg.speed = 0.6788295094977899;
    msg.speed_units = 112U;
    msg.x = 0.15222028564066226;
    msg.y = 0.186054207954239;
    msg.z = 0.23050417192201245;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.30158527833442084);
    msg.setSource(63806U);
    msg.setSourceEntity(184U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(56U);
    msg.system = 36311U;
    msg.duration = 2231U;
    msg.speed = 0.36957383553882717;
    msg.speed_units = 5U;
    msg.x = 0.49310865547430405;
    msg.y = 0.23815617260262434;
    msg.z = 0.17903082819930216;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.6741173379171828);
    msg.setSource(35799U);
    msg.setSourceEntity(96U);
    msg.setDestination(3498U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.1687261909357507;
    msg.lon = 0.16082137335326996;
    msg.speed = 0.582226303210575;
    msg.speed_units = 223U;
    msg.duration = 44176U;
    msg.sys_a = 27543U;
    msg.sys_b = 37804U;
    msg.move_threshold = 0.9060921483363708;

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
    msg.setTimeStamp(0.37899936731278105);
    msg.setSource(54797U);
    msg.setSourceEntity(88U);
    msg.setDestination(64581U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.6663296418499715;
    msg.lon = 0.3286976904522745;
    msg.speed = 0.1429626385192111;
    msg.speed_units = 146U;
    msg.duration = 65319U;
    msg.sys_a = 50092U;
    msg.sys_b = 37077U;
    msg.move_threshold = 0.7236570565297425;

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
    msg.setTimeStamp(0.9575483276777278);
    msg.setSource(28929U);
    msg.setSourceEntity(209U);
    msg.setDestination(58481U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.8006019602208504;
    msg.lon = 0.40929412035922796;
    msg.speed = 0.3442176552693055;
    msg.speed_units = 222U;
    msg.duration = 394U;
    msg.sys_a = 22037U;
    msg.sys_b = 61776U;
    msg.move_threshold = 0.24384836539858035;

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
    msg.setTimeStamp(0.9395249456308363);
    msg.setSource(7876U);
    msg.setSourceEntity(222U);
    msg.setDestination(59633U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.31181366152665646;
    msg.lon = 0.8863906748229643;
    msg.z = 0.11370038372961833;
    msg.z_units = 71U;
    msg.speed = 0.7386688066843158;
    msg.speed_units = 207U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7897115752433792;
    tmp_msg_0.lon = 0.4362225164311533;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RVZOEWTQUFKYQJQKNABDCSVANDQJOICEDHJOAVLRSPOCJHBUXPWIIFKMRLFOPUQVMSHHDCCGRSAUPGVZKZBEXFETUJZUPLMJXBXJDGOHYGINTEIWMEWOPTLDGSMMKWOXMLNUHWEXUPPDVAYZTXXGIQMWQAKSJBHYELCSGV");

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
    msg.setTimeStamp(0.3807267839612475);
    msg.setSource(27469U);
    msg.setSourceEntity(50U);
    msg.setDestination(9427U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.3454121971684566;
    msg.lon = 0.17623675334098265;
    msg.z = 0.3086784401418101;
    msg.z_units = 119U;
    msg.speed = 0.9998474156645693;
    msg.speed_units = 24U;
    msg.custom.assign("ZVWIKXQDQDOZBFNYOAUGCFIXJJHRCGJCBCJAVPBLEEEPT");

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
    msg.setTimeStamp(0.4556284693362713);
    msg.setSource(49383U);
    msg.setSourceEntity(45U);
    msg.setDestination(1032U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.6105545359828075;
    msg.lon = 0.39899092058644503;
    msg.z = 0.8089770678320553;
    msg.z_units = 241U;
    msg.speed = 0.3909670115146092;
    msg.speed_units = 145U;
    msg.custom.assign("HGATEGYMXQPMF");

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
    msg.setTimeStamp(0.657758597518668);
    msg.setSource(1073U);
    msg.setSourceEntity(60U);
    msg.setDestination(14694U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.8723004102884978;
    msg.lon = 0.9354357884518993;

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
    msg.setTimeStamp(0.7821690077873169);
    msg.setSource(57614U);
    msg.setSourceEntity(135U);
    msg.setDestination(45227U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.7498867184417783;
    msg.lon = 0.6332631000796707;

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
    msg.setTimeStamp(0.21358447322569019);
    msg.setSource(51613U);
    msg.setSourceEntity(54U);
    msg.setDestination(15720U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.5148535239432568;
    msg.lon = 0.3870580542024089;

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
    msg.setTimeStamp(0.2080647717671139);
    msg.setSource(61403U);
    msg.setSourceEntity(207U);
    msg.setDestination(13196U);
    msg.setDestinationEntity(14U);
    msg.timeout = 40394U;
    msg.lat = 0.28682913831560075;
    msg.lon = 0.9713897461531367;
    msg.z = 0.5032403487943488;
    msg.z_units = 16U;
    msg.pitch = 0.5505073940839424;
    msg.amplitude = 0.5806073661585877;
    msg.duration = 5258U;
    msg.speed = 0.9187111119161137;
    msg.speed_units = 117U;
    msg.radius = 0.6940336747026074;
    msg.direction = 11U;
    msg.custom.assign("MLABOYEVGILBYJLBZIPCNGKZRJOWLFQXAVMWHURFSHLCKEUGWGICSYEFQMAHBEJMYQAALWCGXBCAVYVAGDIBQNKZTNLTYRBUNQNJTMVGRKKJOETUHWCSSJEMOZEFFPDDQZPHPUMCXZOYXIVSOZBPTULIRYVAETCHDYRYPKKHDUBGQPNXRTEERJWAUFZXQSDJWNMHTKTZKRSMT");

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
    msg.setTimeStamp(0.2911479240720867);
    msg.setSource(48865U);
    msg.setSourceEntity(13U);
    msg.setDestination(57966U);
    msg.setDestinationEntity(90U);
    msg.timeout = 54355U;
    msg.lat = 0.8283209456370786;
    msg.lon = 0.00858594884364805;
    msg.z = 0.039504708928169596;
    msg.z_units = 233U;
    msg.pitch = 0.09233046670248413;
    msg.amplitude = 0.7060284892150767;
    msg.duration = 39547U;
    msg.speed = 0.3427440642403762;
    msg.speed_units = 176U;
    msg.radius = 0.2034971234962233;
    msg.direction = 12U;
    msg.custom.assign("LVKINJDGHXKZZSQANKDNZJRYOEKJN");

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
    msg.setTimeStamp(0.3257258976606512);
    msg.setSource(8750U);
    msg.setSourceEntity(217U);
    msg.setDestination(44221U);
    msg.setDestinationEntity(27U);
    msg.timeout = 4437U;
    msg.lat = 0.8909734616241348;
    msg.lon = 0.38851627801570343;
    msg.z = 0.9498151084673878;
    msg.z_units = 184U;
    msg.pitch = 0.7836061585847025;
    msg.amplitude = 0.0378966761551347;
    msg.duration = 36566U;
    msg.speed = 0.4949496740260888;
    msg.speed_units = 28U;
    msg.radius = 0.5797214557849409;
    msg.direction = 152U;
    msg.custom.assign("WQUBWAHFDWQLTHPLVMONMZXWHPPXFEKASGUDIP");

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
    msg.setTimeStamp(0.9749911060086672);
    msg.setSource(34423U);
    msg.setSourceEntity(116U);
    msg.setDestination(57687U);
    msg.setDestinationEntity(80U);
    msg.formation_name.assign("TQIHRUTCKRHUQRNKHIRGENTTTDLVZXVJDPJVABSIIHPUBYBNRSOYPNAODEZQDGWWKUHTSPYCAJMFCLUSTKPCLQCNPJ");
    msg.reference_frame = 30U;
    msg.custom.assign("ZYCDDMLJPJHNVNVKMJGRTKOKRRPCGXAYVVILMQNCZZXBQOGHHWXKHGUOFBJQKPJIUOZJWMZUEXSASYADDSIPRTTUVXZGAEIZDGIVMUDUOPXSGRHARWIQKIPWICANDTTUYMMOYUACEELVQSQNTRQCUQPRCEVLLXOBING");

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
    msg.setTimeStamp(0.6263189287767763);
    msg.setSource(30989U);
    msg.setSourceEntity(164U);
    msg.setDestination(42730U);
    msg.setDestinationEntity(227U);
    msg.formation_name.assign("QCNLUSLLMJHBZCQPLITCBDIZMDZAKOGGKWCLXXRHWWVMWETWODYVAFYZYDSOGZDMNIIUZPKWXNGIADAFHYSGCEEJQYJWPVPTIZDAFECYFZBWC");
    msg.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29112U;
    tmp_msg_0.off_x = 0.4329364682706882;
    tmp_msg_0.off_y = 0.4404505602878874;
    tmp_msg_0.off_z = 0.08565804096869623;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HQWHMWIDODSIHLUJXJPUDJEGACLUIIOMYLWMYBBKNSCRRXMUQLHNWWRQXTZEJVBXPJCHETKPMURFTWOCBRGXHYZAOAVQYQIHKWZZKSAZFGKCAOODWVEWFXDATWMKMAVTYSGSJDRLYVUTXFFLBFEIUPJO");

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
    msg.setTimeStamp(0.548573581030175);
    msg.setSource(8353U);
    msg.setSourceEntity(101U);
    msg.setDestination(3606U);
    msg.setDestinationEntity(62U);
    msg.formation_name.assign("LDFFJICGOZXWZKVKTFQQTNIWFZOJVJAGNEVMBVHGYLWYFYWTMTZXNSRUMGFKNONDVXBIBHBERHTFCDEOSMTUGMYIHPRXECYIAJFWKSOAEATHJZWCPWTALMKYOKSCYXTRYHUNPOHPLGZLPFBWEAUUZSHBDDRSPNNQVPKGBQRXCSELKCRZODHDIXIMJQCUSDQYLJPBOUAEPLVLRFTQKJMIVSZYOMLUAMGRDBQEIKCIEG");
    msg.reference_frame = 203U;
    msg.custom.assign("ZUXDTIZSNEGYFSSDKHGIJKAUNT");

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
    msg.setTimeStamp(0.9994636564729071);
    msg.setSource(7859U);
    msg.setSourceEntity(42U);
    msg.setDestination(4509U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("PRSLXHIMPKQLTQXPCZGYLNXURGRHBVMUVYNIFTYJCPDBBPEFRXIQXRKHMIJWNKRLECKMUJGCVZVGAKAFCQSYPNHSNOTUCFHYVSDKHJYJOGKJQIQHYOBEUAALAZPXQGMLFSUOLIEZOVDUDEAHLIZPXFTBTKXQYEDECLPRNUTBOHZEMAWRWKJJDMXVLBCGTWTOSCOXZBNNRWZGRTYIWQVBW");
    msg.formation_name.assign("AHGQAONMQYYAHHHTMBVWYKPZTYCCAILKKQREUDVDWMCUDAOPPFVPTLRFHEKMUPYMJHDZJVFRORRNLHDUVTNYXXQQYZZRBMQDUBSYMKXZGRKB");
    msg.plan_id.assign("EHBFKAPMVYQSCLTUFBLFZPALABTXTIXUKJCHZYIGVZBSWGNSUMOPMGWRYRDMLEJNVFINDUWJEWJMENWKQMLQZFHTROCGXYIGCQVDMHKLFTWGUNYPXKSKCESJLZTKVOFYTTYIQJDXRWNXEBPPXNODDECSGIAGFARZSLACVZEAHOQUYQWNUHDADJPAPILIQNBOPWKOVJXHUAVCRIGZCOIUTMYRNBEVLFBHXJDGT");
    msg.description.assign("PQXUKTRMVJETOOQSWPEZSXZTMZNWAGPDWGEJDNRFDACNBWBZVKIIYQOIYJV");
    msg.leader_speed = 0.12496452299116112;
    msg.leader_bank_lim = 0.6009834941744652;
    msg.pos_sim_err_lim = 0.5251633219501025;
    msg.pos_sim_err_wrn = 0.26017503519549423;
    msg.pos_sim_err_timeout = 47105U;
    msg.converg_max = 0.37039293098613824;
    msg.converg_timeout = 60742U;
    msg.comms_timeout = 9641U;
    msg.turb_lim = 0.077578098353832;
    msg.custom.assign("CAHKSGQLPONBQUMUDTIKFZMNDKVUMBLOPDFRVHHPZFEWUHXFRNEWQVWSOFDTMVBXSSAQZTGHYKXRZUGNEUSHCCPNAKOSXYLYYPEJSUZOSOTTEOQRYJSNDZJLIKXLWMNOQQTPCK");

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
    msg.setTimeStamp(0.21248231410627605);
    msg.setSource(38144U);
    msg.setSourceEntity(87U);
    msg.setDestination(17474U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("PTKOBLCSOFHTYUZQMOSLMFKBKDDWBQHEPTVIISKPNFAXNFGQOYEIZCPDMNXSOFJZ");
    msg.formation_name.assign("WTZIYJFHPSMCGMJTNADTDAJYNCUSSZLLGKDRSCNMAJTFERYHDLKAMOTIWVCAZPFREKOBOHWTNNWFVBCDFCIXSEDEPQYUJQXMOQMBZNKQGILFSAXURJLBSBEH");
    msg.plan_id.assign("DXMIUUDQUHIEBMTHPVRWTDKUVFTQHMONXOBJXVPSTOAIZFJWTDFPDIUFQBYJHWLDDNOAZOYEEAKALKQVJTVZJGANAOAHOCHWTBLBEFDDXOGHHLAYMZGSYRQCBKRPJKAVWHYVSG");
    msg.description.assign("BPLNPGLBDUUFIVYLSYMVMQZSBRZOUNQIJOCGFIWQZFMUHLIOKXBAXEGETMIEUHXVTURFNLJRVKMAHXWEBTJCGVZCHCUSRKYAKIPPZUVFGNJDTBLLDTJYWLWEVQMQXVFKLSJHSSMDHKOROSMGVCWQMUAPEPPFOJYCPXHPHDQHWLTDANWFNBAKKHJZZCTTUOEZGXBYZXTPADRGYYATICSBNXSYAIWSYIDJBRNICFMWQDJCXEREORDZOVEOQK");
    msg.leader_speed = 0.6727716622585341;
    msg.leader_bank_lim = 0.02097127565892165;
    msg.pos_sim_err_lim = 0.048075603934995104;
    msg.pos_sim_err_wrn = 0.5001915046539859;
    msg.pos_sim_err_timeout = 15350U;
    msg.converg_max = 0.6126806639100414;
    msg.converg_timeout = 1672U;
    msg.comms_timeout = 26689U;
    msg.turb_lim = 0.9163862748398404;
    msg.custom.assign("OLYZVBWHDUTXBLLMZWJTIIYGBVWXZAPONIDSLHPTMMVUTNFGIMULLZUOCDNNEJOYUASPMJBELNADAWAPCBSXOFTHPQVETDCGNJDHIYXRDTZOYSWNJDSGBECGAVNJMVBTICJMCGXKQIPFWGCRAZWZKUKPYLIRVCAJKPMRKSZTBFBFQWEQKQVGOHHWQGAHQFRRFFXMHOPLTEXR");

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
    msg.setTimeStamp(0.3496047988412937);
    msg.setSource(20642U);
    msg.setSourceEntity(120U);
    msg.setDestination(19778U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("WJTQUNMJLRALGEHOGGINHELVDCLOSDZPBJPTBGISKRVEMHFDRICFORWDVLHMOFEMPUTYOWHYQMXOSFKJUSUJRZGZGQICXACXKBSWMJMJXHKYQVQWNSRRPNSODFQEKNYYCDXTYBTFXWATFCACVZCITIEBHHLNYVNVBLHGYPOCPSJEWUABTWUIXGZ");
    msg.formation_name.assign("XVNANDJIGKLIXHNMXVBOGLDIMGLXAKWZEGFKTGVYDSHEEUPIVICDAQDTQRROAIOYICNIXGMMSHCBYFDHWAEYFOKBTWCWBKJGLDNEYBCFHPWJMZQORPTWOPJTBBKPKRTBUUVZNHNKXCKCTFRLEYPUUMLAPDUTQOPOMALXMQJHUVPVUBRUCHSCSRTQDMYJZGTJNKJUFLQZRWHRLFSJHYZPEYDOFQIFYFAXIZSEQSWSGNXQBAZZEVNOSLZWJW");
    msg.plan_id.assign("AQDITSSXIWZQYPAGSSYXVEJMEPHZILQBKGNINQXHBJDELSFKWEOLG");
    msg.description.assign("OSVAXDUOMETHXFTXUVLSQHBNPWUJFFWIGMVBWMAVKMJUMACEJHXSIHCIQWENHSWVZUPYPWMBEAVDYIOFXXPIPWIMOJNLDTSTMKDQJNTZRYBZKHFBLLFQGHJSNTNALKOGQTGCRXGEEULUKFGPSZNOBHRAZHGSADBCQOCIIBEADPVNRPWFKQLWCKKCYHLWXITRFDJSOMZYBUJ");
    msg.leader_speed = 0.5268569759734442;
    msg.leader_bank_lim = 0.20425195205173907;
    msg.pos_sim_err_lim = 0.9788741381708058;
    msg.pos_sim_err_wrn = 0.1362932724892003;
    msg.pos_sim_err_timeout = 53963U;
    msg.converg_max = 0.5114523010167465;
    msg.converg_timeout = 17224U;
    msg.comms_timeout = 18967U;
    msg.turb_lim = 0.03266407395727133;
    msg.custom.assign("PTMURBSUYKVGRODRIBEXFZGRBQFZNKEDGMMISPKXWDHCUIGQOYCQHTVRTGYHVAZPXWEBMURVZHUEYQPXFAVZBDUJSMIRQBJVZONKMJIENWURRVUEPWSGLBOOPMSMWEODCPXYLCWAZKCENLSBNOLVXFAUVPOFHA");

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
    msg.setTimeStamp(0.06378195152347443);
    msg.setSource(54427U);
    msg.setSourceEntity(123U);
    msg.setDestination(55437U);
    msg.setDestinationEntity(218U);
    msg.control_src = 1091U;
    msg.control_ent = 206U;
    msg.timeout = 0.6927950964174117;
    msg.loiter_radius = 0.25025050434305596;
    msg.altitude_interval = 0.9289385363390438;

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
    msg.setTimeStamp(0.9172809286608756);
    msg.setSource(6482U);
    msg.setSourceEntity(214U);
    msg.setDestination(56477U);
    msg.setDestinationEntity(141U);
    msg.control_src = 57765U;
    msg.control_ent = 150U;
    msg.timeout = 0.33625936032419124;
    msg.loiter_radius = 0.011582514302602376;
    msg.altitude_interval = 0.25642636419843146;

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
    msg.setTimeStamp(0.8480530036723073);
    msg.setSource(60344U);
    msg.setSourceEntity(239U);
    msg.setDestination(22350U);
    msg.setDestinationEntity(81U);
    msg.control_src = 57191U;
    msg.control_ent = 61U;
    msg.timeout = 0.23588378349084804;
    msg.loiter_radius = 0.15677066993597144;
    msg.altitude_interval = 0.5406687430248954;

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
    msg.setTimeStamp(0.6114649982129458);
    msg.setSource(4865U);
    msg.setSourceEntity(231U);
    msg.setDestination(32856U);
    msg.setDestinationEntity(86U);
    msg.flags = 89U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6036020005137448;
    tmp_msg_0.speed_units = 157U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.39185156691497014;
    tmp_msg_1.z_units = 163U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.18366400193012922;
    msg.lon = 0.05747764022130353;
    msg.radius = 0.5344295916748959;

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
    msg.setTimeStamp(0.16486923955076205);
    msg.setSource(9504U);
    msg.setSourceEntity(136U);
    msg.setDestination(61855U);
    msg.setDestinationEntity(3U);
    msg.flags = 105U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5626753541525643;
    tmp_msg_0.speed_units = 253U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9354184293287694;
    tmp_msg_1.z_units = 227U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.19223161487842533;
    msg.lon = 0.7419355179790563;
    msg.radius = 0.2861997559156627;

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
    msg.setTimeStamp(0.7467689595202653);
    msg.setSource(27324U);
    msg.setSourceEntity(82U);
    msg.setDestination(54923U);
    msg.setDestinationEntity(16U);
    msg.flags = 190U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.296158051137293;
    tmp_msg_0.speed_units = 197U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5316447566374819;
    tmp_msg_1.z_units = 16U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5832932701024545;
    msg.lon = 0.3259756392369082;
    msg.radius = 0.558826369057468;

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
    msg.setTimeStamp(0.05159557179689411);
    msg.setSource(50077U);
    msg.setSourceEntity(218U);
    msg.setDestination(54507U);
    msg.setDestinationEntity(215U);
    msg.control_src = 26711U;
    msg.control_ent = 250U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 190U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.06775705349503736;
    tmp_tmp_msg_0_0.speed_units = 119U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6522320160670243;
    tmp_tmp_msg_0_1.z_units = 41U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.676081381022346;
    tmp_msg_0.lon = 0.40588415377683984;
    tmp_msg_0.radius = 0.8311165645389165;
    msg.reference.set(tmp_msg_0);
    msg.state = 13U;
    msg.proximity = 113U;

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
    msg.setTimeStamp(0.7294079951605135);
    msg.setSource(31141U);
    msg.setSourceEntity(112U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(230U);
    msg.control_src = 62458U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 113U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.31384330832153085;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8702563479386044;
    tmp_tmp_msg_0_1.z_units = 80U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4373311941115844;
    tmp_msg_0.lon = 0.6992678203507583;
    tmp_msg_0.radius = 0.5366213368598174;
    msg.reference.set(tmp_msg_0);
    msg.state = 127U;
    msg.proximity = 127U;

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
    msg.setTimeStamp(0.3103227987549264);
    msg.setSource(40321U);
    msg.setSourceEntity(193U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(149U);
    msg.control_src = 52625U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 154U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.19767854885002134;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.16642000196364493;
    tmp_tmp_msg_0_1.z_units = 80U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.37661242824812147;
    tmp_msg_0.lon = 0.5145496724311045;
    tmp_msg_0.radius = 0.895948822749353;
    msg.reference.set(tmp_msg_0);
    msg.state = 210U;
    msg.proximity = 241U;

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
    msg.setTimeStamp(0.9683766359596983);
    msg.setSource(51344U);
    msg.setSourceEntity(6U);
    msg.setDestination(21014U);
    msg.setDestinationEntity(147U);
    msg.ax_cmd = 0.7834020814372282;
    msg.ay_cmd = 0.6323790123064447;
    msg.az_cmd = 0.6422979814136611;
    msg.ax_des = 0.778983937843928;
    msg.ay_des = 0.35803313905397893;
    msg.az_des = 0.22540546684346496;
    msg.virt_err_x = 0.40247850906214033;
    msg.virt_err_y = 0.060751932777897366;
    msg.virt_err_z = 0.3736514234045123;
    msg.surf_fdbk_x = 0.11113090001502735;
    msg.surf_fdbk_y = 0.7729516681697505;
    msg.surf_fdbk_z = 0.6067990216751181;
    msg.surf_unkn_x = 0.11826686873867465;
    msg.surf_unkn_y = 0.4417906237543837;
    msg.surf_unkn_z = 0.25730406021675534;
    msg.ss_x = 0.7373363993646594;
    msg.ss_y = 0.36715159059656355;
    msg.ss_z = 0.6672844809135646;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MHBHYQYMAYABZGNSJLVINIUPYEOVQICFJXDNLGLFAIKWCQANDWFBNMTYRZGMAWLHIXHDZUTWAPCPMRFLTRTLSECXOLMCYWSHGEBZPDZUTRCGWJSSEHKCWZDBVPSTJEJUKEVYVXOYQHQVFUGKMOE");
    tmp_msg_0.dist = 0.8713156422713032;
    tmp_msg_0.err = 0.5501130418643001;
    tmp_msg_0.ctrl_imp = 0.17675035219204904;
    tmp_msg_0.rel_dir_x = 0.3184703596455156;
    tmp_msg_0.rel_dir_y = 0.03477990398294295;
    tmp_msg_0.rel_dir_z = 0.375605297936092;
    tmp_msg_0.err_x = 0.06334196444391682;
    tmp_msg_0.err_y = 0.6734080414403282;
    tmp_msg_0.err_z = 0.6819043708166198;
    tmp_msg_0.rf_err_x = 0.4674859856122875;
    tmp_msg_0.rf_err_y = 0.7628113405425453;
    tmp_msg_0.rf_err_z = 0.48239452261661997;
    tmp_msg_0.rf_err_vx = 0.43032969029873014;
    tmp_msg_0.rf_err_vy = 0.05020537740705733;
    tmp_msg_0.rf_err_vz = 0.1446054564373449;
    tmp_msg_0.ss_x = 0.5468229478987763;
    tmp_msg_0.ss_y = 0.007308561695479443;
    tmp_msg_0.ss_z = 0.011079401153315627;
    tmp_msg_0.virt_err_x = 0.9510333939438461;
    tmp_msg_0.virt_err_y = 0.5935308022445561;
    tmp_msg_0.virt_err_z = 0.9719280672580967;
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
    msg.setTimeStamp(0.5314872605968088);
    msg.setSource(26930U);
    msg.setSourceEntity(149U);
    msg.setDestination(6686U);
    msg.setDestinationEntity(50U);
    msg.ax_cmd = 0.23723565617381703;
    msg.ay_cmd = 0.7982938400131915;
    msg.az_cmd = 0.6420418921981335;
    msg.ax_des = 0.46012188087402306;
    msg.ay_des = 0.4829386233677053;
    msg.az_des = 0.27380348582730796;
    msg.virt_err_x = 0.8270301469519069;
    msg.virt_err_y = 0.024001207677070813;
    msg.virt_err_z = 0.2880889853464712;
    msg.surf_fdbk_x = 0.6624530990834528;
    msg.surf_fdbk_y = 0.9906130094556101;
    msg.surf_fdbk_z = 0.6117992978716243;
    msg.surf_unkn_x = 0.11860900977391664;
    msg.surf_unkn_y = 0.21390235689917758;
    msg.surf_unkn_z = 0.1337848266265631;
    msg.ss_x = 0.5198708288223975;
    msg.ss_y = 0.20870002769613516;
    msg.ss_z = 0.8864199563125927;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OSRTLOOSLFWWKFYIOJBKVWXRQCGYEPIIKKVWQDLKPZMECTRRLPDVKYSOIZVTIOXNLUGWTDAELR");
    tmp_msg_0.dist = 0.9193855160660608;
    tmp_msg_0.err = 0.07180410453292929;
    tmp_msg_0.ctrl_imp = 0.8697543170457306;
    tmp_msg_0.rel_dir_x = 0.3572748640061103;
    tmp_msg_0.rel_dir_y = 0.9622660944400769;
    tmp_msg_0.rel_dir_z = 0.13165671643133903;
    tmp_msg_0.err_x = 0.7216467748393931;
    tmp_msg_0.err_y = 0.16203003509962666;
    tmp_msg_0.err_z = 0.00793184241695144;
    tmp_msg_0.rf_err_x = 0.6781503757566897;
    tmp_msg_0.rf_err_y = 0.6390091460158638;
    tmp_msg_0.rf_err_z = 0.22985121620268323;
    tmp_msg_0.rf_err_vx = 0.17087588400945264;
    tmp_msg_0.rf_err_vy = 0.8181328890814286;
    tmp_msg_0.rf_err_vz = 0.00926107278217958;
    tmp_msg_0.ss_x = 0.5156680691516211;
    tmp_msg_0.ss_y = 0.4231312332229934;
    tmp_msg_0.ss_z = 0.6217450912535605;
    tmp_msg_0.virt_err_x = 0.8558817348066909;
    tmp_msg_0.virt_err_y = 0.06622035759251121;
    tmp_msg_0.virt_err_z = 0.13334882744459087;
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
    msg.setTimeStamp(0.3166817637325805);
    msg.setSource(3117U);
    msg.setSourceEntity(105U);
    msg.setDestination(41289U);
    msg.setDestinationEntity(12U);
    msg.ax_cmd = 0.26805450020333565;
    msg.ay_cmd = 0.3117398806941275;
    msg.az_cmd = 0.030254754631897307;
    msg.ax_des = 0.4197675845301201;
    msg.ay_des = 0.726024763384632;
    msg.az_des = 0.37484462358397264;
    msg.virt_err_x = 0.7095586653881392;
    msg.virt_err_y = 0.5262127409917546;
    msg.virt_err_z = 0.2437576519872;
    msg.surf_fdbk_x = 0.04635713132878627;
    msg.surf_fdbk_y = 0.583213393304546;
    msg.surf_fdbk_z = 0.3702132524722729;
    msg.surf_unkn_x = 0.6825247363349449;
    msg.surf_unkn_y = 0.14324768537614718;
    msg.surf_unkn_z = 0.6975564480515112;
    msg.ss_x = 0.7511556584383325;
    msg.ss_y = 0.8250204225340279;
    msg.ss_z = 0.9858746983333556;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YMQGIBUOEHKMEYCBJNDLNSUJCGRPOWIOPQXQONOZYJXOBJJSHUHFCSIWVFANKKBLRZSTTTBYDVPPCFHLXQIRJJLFMAXSQAZUQHFFYORORGAPOLLGVUULSVSYRUJVGRCDAYEDYWDARVTCWQWDKYMKCQWPCFNKJRZCXLMEALEIPUQMBNPD");
    tmp_msg_0.dist = 0.047116382253347355;
    tmp_msg_0.err = 0.8219548674478802;
    tmp_msg_0.ctrl_imp = 0.5885924314946533;
    tmp_msg_0.rel_dir_x = 0.19522097368376656;
    tmp_msg_0.rel_dir_y = 0.2043371422987742;
    tmp_msg_0.rel_dir_z = 0.9407391748603771;
    tmp_msg_0.err_x = 0.3261080073959619;
    tmp_msg_0.err_y = 0.20472487518968396;
    tmp_msg_0.err_z = 0.3586910756521854;
    tmp_msg_0.rf_err_x = 0.3456029575852053;
    tmp_msg_0.rf_err_y = 0.2359242476180473;
    tmp_msg_0.rf_err_z = 0.0026104922211408477;
    tmp_msg_0.rf_err_vx = 0.7042967071475588;
    tmp_msg_0.rf_err_vy = 0.3617629939296644;
    tmp_msg_0.rf_err_vz = 0.34020894696785786;
    tmp_msg_0.ss_x = 0.8759982171802044;
    tmp_msg_0.ss_y = 0.820935144641101;
    tmp_msg_0.ss_z = 0.18289918342824707;
    tmp_msg_0.virt_err_x = 0.4154846602651644;
    tmp_msg_0.virt_err_y = 0.238654195341918;
    tmp_msg_0.virt_err_z = 0.7531645757517152;
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
    msg.setTimeStamp(0.3034742636332953);
    msg.setSource(49134U);
    msg.setSourceEntity(100U);
    msg.setDestination(31877U);
    msg.setDestinationEntity(115U);
    msg.s_id.assign("IETWRDEIXQCTRFPFYBEVSOZXEVJWXFOLAZCFWXDNNCVPTSPUHTCBVMNNPBDLUAJUNUQFXIJDLELYMDXMDARCQRBXDNGRHOSGBIZCHFAZHMAMWOBGKITVZZGKQLBODOKEQGSVEXYYJIFYAOMPKRXWZJWTUNIJGGUPYFYFJNSAYKTMMLOQRTHKCLHSPNOWEBHVOUIBQS");
    msg.dist = 0.4905778562242451;
    msg.err = 0.33631186011516967;
    msg.ctrl_imp = 0.7321260608314955;
    msg.rel_dir_x = 0.8291121894291508;
    msg.rel_dir_y = 0.3956117543331046;
    msg.rel_dir_z = 0.02090334942666816;
    msg.err_x = 0.5913380593948987;
    msg.err_y = 0.6872068817370802;
    msg.err_z = 0.4977918602756406;
    msg.rf_err_x = 0.3060459098002474;
    msg.rf_err_y = 0.6819146839111334;
    msg.rf_err_z = 0.3650931153148701;
    msg.rf_err_vx = 0.9023957857041329;
    msg.rf_err_vy = 0.43371905693518176;
    msg.rf_err_vz = 0.6988714456761865;
    msg.ss_x = 0.8131385108084934;
    msg.ss_y = 0.7466878308555517;
    msg.ss_z = 0.29232686260128027;
    msg.virt_err_x = 0.6463218433286763;
    msg.virt_err_y = 0.8530636946024592;
    msg.virt_err_z = 0.6292471845898915;

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
    msg.setTimeStamp(0.3318791599302544);
    msg.setSource(18381U);
    msg.setSourceEntity(73U);
    msg.setDestination(1716U);
    msg.setDestinationEntity(43U);
    msg.s_id.assign("IFIXMAWVPFHIAGYPBRSPQORDGVCACTNXTCUSSSUXEZXGKBBJFPHFBSCEBDLGLKJHZHTNJHZPRENFVJDK");
    msg.dist = 0.31827244457362736;
    msg.err = 0.00017357953623931;
    msg.ctrl_imp = 0.7268672775714934;
    msg.rel_dir_x = 0.5988967677436156;
    msg.rel_dir_y = 0.11178817324614787;
    msg.rel_dir_z = 0.83721313851751;
    msg.err_x = 0.14614884543009576;
    msg.err_y = 0.4548666664338131;
    msg.err_z = 0.4006631520684485;
    msg.rf_err_x = 0.05362683090919995;
    msg.rf_err_y = 0.9429546616215884;
    msg.rf_err_z = 0.4926311439796075;
    msg.rf_err_vx = 0.08317527681685166;
    msg.rf_err_vy = 0.3667826997680955;
    msg.rf_err_vz = 0.23717221427814017;
    msg.ss_x = 0.5748774249269865;
    msg.ss_y = 0.013372837154642658;
    msg.ss_z = 0.5630421098060864;
    msg.virt_err_x = 0.8034665647741991;
    msg.virt_err_y = 0.3111457156644254;
    msg.virt_err_z = 0.5449357114941662;

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
    msg.setTimeStamp(0.9389974441901964);
    msg.setSource(41883U);
    msg.setSourceEntity(137U);
    msg.setDestination(49782U);
    msg.setDestinationEntity(138U);
    msg.s_id.assign("RHHRQLGIXDMIIXSBQSMSVBWRKKZDJPYRVQQPO");
    msg.dist = 0.9261187424021602;
    msg.err = 0.48523138534097876;
    msg.ctrl_imp = 0.6404073933682527;
    msg.rel_dir_x = 0.582939141969348;
    msg.rel_dir_y = 0.2568101865110549;
    msg.rel_dir_z = 0.4153710940975378;
    msg.err_x = 0.8850153256024914;
    msg.err_y = 0.6135885800816319;
    msg.err_z = 0.7025662209783322;
    msg.rf_err_x = 0.39356487376176685;
    msg.rf_err_y = 0.6498490885165206;
    msg.rf_err_z = 0.9162348878867755;
    msg.rf_err_vx = 0.8193002510424278;
    msg.rf_err_vy = 0.6401282291774214;
    msg.rf_err_vz = 0.08792718567240676;
    msg.ss_x = 0.3987903410363506;
    msg.ss_y = 0.9924852254219911;
    msg.ss_z = 0.9825729863255861;
    msg.virt_err_x = 0.5868011433060012;
    msg.virt_err_y = 0.3668788687804633;
    msg.virt_err_z = 0.6859389763864588;

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
    msg.setTimeStamp(0.6246299740164769);
    msg.setSource(59653U);
    msg.setSourceEntity(151U);
    msg.setDestination(19044U);
    msg.setDestinationEntity(129U);
    msg.timeout = 58965U;
    msg.rpm = 0.6516421945494181;
    msg.direction = 18U;
    msg.custom.assign("YQDUTWZUQNNQHNZVUFABBSRETHMYSWXJIMYFCXGYXCZQDKWLJJRCJVD");

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
    msg.setTimeStamp(0.9468662252986536);
    msg.setSource(6010U);
    msg.setSourceEntity(9U);
    msg.setDestination(10714U);
    msg.setDestinationEntity(250U);
    msg.timeout = 56129U;
    msg.rpm = 0.7561926275246491;
    msg.direction = 22U;
    msg.custom.assign("DIYTQNMHKBHJEIYFDFLHSYQGPHDWQEATMVEDVSHQJHGNRUPVWLAWWDNPEIPOULRPQGUKKXFDXZSTOBABFNKXFAZFVCBQJMQXZYULSCSKKGGITBJMRJAISCOIBGBTQOOMIRCMFTVRERDMNGKNFSCLEQAAEKPJTVUSHCIMWEYRPVLXWVVUBSPJOAMWZ");

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
    msg.setTimeStamp(0.22639441513597347);
    msg.setSource(168U);
    msg.setSourceEntity(75U);
    msg.setDestination(20246U);
    msg.setDestinationEntity(141U);
    msg.timeout = 63883U;
    msg.rpm = 0.8421738896775137;
    msg.direction = 122U;
    msg.custom.assign("DYDFVNARFUNQUN");

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
    msg.setTimeStamp(0.29621058964811653);
    msg.setSource(43692U);
    msg.setSourceEntity(192U);
    msg.setDestination(28383U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("OAUPAZKCGIGQXJTQSKLJJBFZAWEEAFCIDMELKOVSBQXNULUVYWFTWDCYEAIFKAHFCHXRBTDHRHNBSYTGIDKLYHPPHYOVEOEPQDQUINIZNLBCXHZDMRNOVOCRBTMKGZXZYLWXGPMWHJPKTJGNZVNWCHRMKPIFPZQYXJETHDVMUVRQPJWGBKYOJCXOWIMZTJCMSFLXNFTSDM");
    msg.type = 52U;
    msg.op = 64U;
    msg.group_name.assign("UKWIZYQWGZRRWFWSQJARKCVOYFVZGZTDQPKGYDHKBDNCPOCLHIUAFMISGNFULSPRIWFCETBWGNYEUTTWBTUYEQVSEXOUELXDFMXXVNCVXRGQHFOOZFVXJAUJBRGVNOJTEHPKWLUKZDAEHSERUJETXNXALHAIQYMPYNINGNPUBGAKMCWCHFTHXOHXOPMFJVQQLACQYSM");
    msg.plan_id.assign("PZLIHWZGATNGJOBRWSJSWQDLZHBAQ");
    msg.description.assign("APDNKQNBJVJVWJZWGYAHYKLUWCOITHLMQZEZDHRHGFLPTEXUHQHEVQTKIACVPTOTVNVUZPZIJBKWGTGJBPBPRUFFSGDOGRADIXDDGQKHBEFAWAEBVCFROUZSVHDSWSXYQLXNJRDZITWQUKMLUAOOXFNOZEELRBYECCMJJRCCNZGOMRHPKVNMLXVILQUNSNPYWBIMISKQQCHU");
    msg.reference_frame = 212U;
    msg.leader_bank_lim = 0.22581904519551999;
    msg.leader_speed_min = 0.4025774108889978;
    msg.leader_speed_max = 0.748828872356203;
    msg.leader_alt_min = 0.45540796790790816;
    msg.leader_alt_max = 0.3676889428544776;
    msg.pos_sim_err_lim = 0.9554591682770454;
    msg.pos_sim_err_wrn = 0.5784834867367998;
    msg.pos_sim_err_timeout = 62684U;
    msg.converg_max = 0.47198309079040257;
    msg.converg_timeout = 12811U;
    msg.comms_timeout = 44139U;
    msg.turb_lim = 0.9724913532732478;
    msg.custom.assign("VMECRSUTMAJEQEGJFAHMHXRRBZGBBVDHEIEQQOYJBIQNQDAVWYNGYCTXSKKIKYAOVZZSTFZVJLMCCUYUECLDNNUZMLPTAZCFLSXFHZPKFGOWYKTUAWUQZOBMVHOREIOAV");

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
    msg.setTimeStamp(0.4415421730831597);
    msg.setSource(4671U);
    msg.setSourceEntity(86U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(226U);
    msg.formation_name.assign("YSLILNQRUHSQKUDYAERFIUHDTIIFDVJBCWDPBOSGLPQO");
    msg.type = 43U;
    msg.op = 239U;
    msg.group_name.assign("ZXAZBNYBETGPGCYOWCLMWMTONJHCMHGQYPXMGRFHNNDZDPLZKYYHWKJHLXCUCOWQFHBAYVOUJQSANSEBYSCCWXQRZKJVUSFOWKRGZNIYOUISXLTILKYKHKPGGTELIHRVGQSOVLFFQADUWVADWXFLKYXVUCRDMRASROQDBTPFTABBBHRVGZSPOIZWVKUEOEDTRFUNMMAGPQXAKMRLIXJDTZBINPTATECNXMM");
    msg.plan_id.assign("AYVIGDNTZKUBLRNMHLNRKVYYODGNLVQLVGTTRNUODUMXPDMKLIAY");
    msg.description.assign("VFINUDGFIGMHXQKWGZDJCMBAPWBHRV");
    msg.reference_frame = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21723U;
    tmp_msg_0.off_x = 0.8792699002163452;
    tmp_msg_0.off_y = 0.15361266063293644;
    tmp_msg_0.off_z = 0.8825473805552271;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9099212876770887;
    msg.leader_speed_min = 0.2948658658443203;
    msg.leader_speed_max = 0.8443722201010997;
    msg.leader_alt_min = 0.8520741054924409;
    msg.leader_alt_max = 0.8407204817169996;
    msg.pos_sim_err_lim = 0.34708245145456185;
    msg.pos_sim_err_wrn = 0.6124278937159783;
    msg.pos_sim_err_timeout = 63306U;
    msg.converg_max = 0.2444425221597365;
    msg.converg_timeout = 38664U;
    msg.comms_timeout = 60030U;
    msg.turb_lim = 0.899321522209126;
    msg.custom.assign("NLJPIOFPCNLPTDHEHUYHUFWBBPXXUZHVPOZXGTNAPWQJXMOQWUOOIGMKYLELGCBIVDXYJYQKSQOUHYGCYAELVXSPRZVALOUGAFDQENVRXXVSWTJEAZQKIQAPIHKGESKCMISNZJCFDMANFJIEAVTWHAQMOVZCSCJTUURZZDBLLWRRLWMFBHDEWRRVJGFDBNYWXVBSMUBIGULMDKPCTTRMQSKOSPFIOYZKWSJINGBTGJDKYHZF");

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
    msg.setTimeStamp(0.9845930738508423);
    msg.setSource(65203U);
    msg.setSourceEntity(78U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(247U);
    msg.formation_name.assign("EIOENRGQMJGOOYXFQMVBXZUNRKKHMULYEHOMIRXJOGIACMTSPCBZ");
    msg.type = 170U;
    msg.op = 214U;
    msg.group_name.assign("AWNBJDEBTFSNNMJIAKKSMAARMUDRMDDSBOUHLVOEGLSMKVRQOTWWWCTXQBQQJXKBIOFVHZKIHFQDQYCVNYZLWUIEANRMDJPSOF");
    msg.plan_id.assign("CKJNSNZVNQRMBYIVRNRYFWRLUPXJMTFEMZKRPVMOWOLMLRAKPIPAZTUUHAAPSSNDWGGIRXJDIJXZUBKFWCCHHVOACPVWQSQTAMHLTTYBQSBIRADKJSUYWSWHQDNDZDSRDXXFHGTCGSNUBGCYIIAOYEHMTQEJQZAOFYLYGCVYLNGZTHNBBPWKKXZQDEMEUEZWJXTHGIOICPLFJM");
    msg.description.assign("TSGHXGLLINJDDLBRUECIKTKVLLOYMJZTQREJOAAQYFNCFEQURKHIWYMNPKVABKVZZPUOEBFZNCJXWVWSCHMMLBHREQHJYAMKYQHFXWDITLRSTNKYUTVENJPORZCLPP");
    msg.reference_frame = 14U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9206U;
    tmp_msg_0.off_x = 0.9150584991341972;
    tmp_msg_0.off_y = 0.31361039772034893;
    tmp_msg_0.off_z = 0.39754752874703525;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.28437028479791915;
    msg.leader_speed_min = 0.7264975607784185;
    msg.leader_speed_max = 0.9259466796434667;
    msg.leader_alt_min = 0.8366243615132598;
    msg.leader_alt_max = 0.8325283699341892;
    msg.pos_sim_err_lim = 0.9628131634348144;
    msg.pos_sim_err_wrn = 0.6176980211740479;
    msg.pos_sim_err_timeout = 57050U;
    msg.converg_max = 0.9576868326318932;
    msg.converg_timeout = 32909U;
    msg.comms_timeout = 13285U;
    msg.turb_lim = 0.3603061356403532;
    msg.custom.assign("JMTTIBUZZLFSOMYFSQQFDHNVGVPPREJWYVAJCVFUGHUNAVHQIIDOYUZWFMKNUZWBMZCNOHPEJBTFOUWYAUIYERAOSHTXTADTJTKEKMWBHLPAVLXPTWIGSQKHGQZNCPIEYLFOCUFLRWZRBWACNCMWVNZIPLZQIWBKDXRHPRCQCLOGMGDGBFCTDKSXNNQAEXDROSZISPEMIBRACJGLMGXBKEEDVKUXXFVEDLSXJGHLUXKRMVOOHAQJ");

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
    msg.setTimeStamp(0.2163762501712847);
    msg.setSource(32649U);
    msg.setSourceEntity(191U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(39U);
    msg.timeout = 63478U;
    msg.lat = 0.6233922091110736;
    msg.lon = 0.742486489245822;
    msg.z = 0.25852821357491484;
    msg.z_units = 4U;
    msg.speed = 0.937559234150173;
    msg.speed_units = 0U;
    msg.custom.assign("XOLLLPQRIGMUVNNDTQNHBEREYSOAYXXYISIMZKYLJKCOSMCYZDIQJHOQGAYYPWJEPLIPASFOXSLWEPPFNZITVWNDUHQBUAOEFTFTCQUWQQFQVZRVVUGVGZTXGRMSLFGLOACVZRKUVAGEIMYBDFCWMJDACOCDRBRSXBVXRJKWHADNIVBOKZBK");

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
    msg.setTimeStamp(0.0057753281142644);
    msg.setSource(11393U);
    msg.setSourceEntity(239U);
    msg.setDestination(42779U);
    msg.setDestinationEntity(156U);
    msg.timeout = 6870U;
    msg.lat = 0.17889249022775056;
    msg.lon = 0.7190209240184541;
    msg.z = 0.8712691168792106;
    msg.z_units = 75U;
    msg.speed = 0.3534172617013115;
    msg.speed_units = 21U;
    msg.custom.assign("CYEOPNBLVRLBPNWQEUGPJTCHWSIIJUHDMQNKMUAKKGYDWDTAIWLDRAS");

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
    msg.setTimeStamp(0.23641425996480836);
    msg.setSource(35360U);
    msg.setSourceEntity(66U);
    msg.setDestination(53960U);
    msg.setDestinationEntity(12U);
    msg.timeout = 37334U;
    msg.lat = 0.4593104338092636;
    msg.lon = 0.45148017841975185;
    msg.z = 0.27500775710063463;
    msg.z_units = 37U;
    msg.speed = 0.8377079417791701;
    msg.speed_units = 170U;
    msg.custom.assign("XJTGYSKOMYVMRTFSSBUALSNCVZPDCJEWTKKMWTDNGLGXQPHWQCDNYSZJUCOIIATARD");

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
    msg.setTimeStamp(0.11779538795655253);
    msg.setSource(34770U);
    msg.setSourceEntity(112U);
    msg.setDestination(9019U);
    msg.setDestinationEntity(183U);
    msg.timeout = 2U;
    msg.lat = 0.6965817448563707;
    msg.lon = 0.841722943065808;
    msg.z = 0.8299684083155217;
    msg.z_units = 92U;
    msg.speed = 0.20442531834249633;
    msg.speed_units = 28U;
    msg.custom.assign("GILJAODOZYUSKTLGQFXYCFNJRKVSKTGSGYNIMQG");

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
    msg.setTimeStamp(0.11667406041654116);
    msg.setSource(33920U);
    msg.setSourceEntity(40U);
    msg.setDestination(16552U);
    msg.setDestinationEntity(192U);
    msg.timeout = 18034U;
    msg.lat = 0.5237266330902214;
    msg.lon = 0.2969384886076316;
    msg.z = 0.3541532251436086;
    msg.z_units = 160U;
    msg.speed = 0.2433953062169194;
    msg.speed_units = 197U;
    msg.custom.assign("EECQBRWSNUCPPRHYXJYUNSJVNWMIXCPMCEZQQDVSZOEZMMIENFLXYOMYLWRHBDBRIRZJNQYCRVFAVKKJSIKBLWIQMTPMUFYTNUWFDCBRIUGBUKKKTDSQJXPNJXJDITGPGAXNHLEQOSRCABAHLOWFZDWBHEWAGRIAWTZPOHMVGXYYGFBVWUXMQZATISQZAHETLDHPFHJDSHFKCAKYRVCOUTAPNVZGLOYTME");

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
    msg.setTimeStamp(0.4669669256387775);
    msg.setSource(39005U);
    msg.setSourceEntity(31U);
    msg.setDestination(45577U);
    msg.setDestinationEntity(253U);
    msg.timeout = 31312U;
    msg.lat = 0.6666444201931847;
    msg.lon = 0.4628262535201094;
    msg.z = 0.5472326610630687;
    msg.z_units = 243U;
    msg.speed = 0.8581415670981265;
    msg.speed_units = 98U;
    msg.custom.assign("HQFYMFPJYMNESYEFPRPVUQZGGUXUZVIRWSQLENWAPQHEGZXLGJAUVVWRRNFSLAOSYJSPTKZYPLNQOMDDXHBHGTRXBHDDPEBSQQBZYUDTSLJTAAXGPCAUUHEKGIRCCZKIIBOBYHUBMTXLNWSUTYNVBBNZWFLOFHLTMMOZCVWFPGDMLUCKDKFIKZCNEORMIJCHCWVVIWLVXHJTXYEKQNJGJMFMKOA");

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
    msg.setTimeStamp(0.23363071872758856);
    msg.setSource(38951U);
    msg.setSourceEntity(226U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(230U);
    msg.arrival_time = 0.04595261729635425;
    msg.lat = 0.48477766239968534;
    msg.lon = 0.9901670012185506;
    msg.z = 0.23061217079110985;
    msg.z_units = 16U;
    msg.travel_z = 0.3061427209976989;
    msg.travel_z_units = 46U;
    msg.delayed = 40U;

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
    msg.setTimeStamp(0.820204503290274);
    msg.setSource(30086U);
    msg.setSourceEntity(78U);
    msg.setDestination(10657U);
    msg.setDestinationEntity(91U);
    msg.arrival_time = 0.6568919739480772;
    msg.lat = 0.49418086677451023;
    msg.lon = 0.04395411285670148;
    msg.z = 0.19678625868776578;
    msg.z_units = 190U;
    msg.travel_z = 0.765786356170519;
    msg.travel_z_units = 190U;
    msg.delayed = 232U;

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
    msg.setTimeStamp(0.9686957097950458);
    msg.setSource(3782U);
    msg.setSourceEntity(21U);
    msg.setDestination(17368U);
    msg.setDestinationEntity(141U);
    msg.arrival_time = 0.6328486544722116;
    msg.lat = 0.8772862669151541;
    msg.lon = 0.4505658704299428;
    msg.z = 0.7801188880520239;
    msg.z_units = 78U;
    msg.travel_z = 0.304834155032521;
    msg.travel_z_units = 73U;
    msg.delayed = 203U;

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
    msg.setTimeStamp(0.04134394825752852);
    msg.setSource(65114U);
    msg.setSourceEntity(115U);
    msg.setDestination(53243U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.38591285765091143;
    msg.lon = 0.5781155559251362;
    msg.z = 0.6697023252569878;
    msg.z_units = 53U;
    msg.speed = 0.9364624344907737;
    msg.speed_units = 154U;
    msg.bearing = 0.07508530904446853;
    msg.cross_angle = 0.12308145571551743;
    msg.width = 0.09931733238764029;
    msg.length = 0.15145803591079499;
    msg.coff = 179U;
    msg.angaperture = 0.0022269190987505016;
    msg.range = 57135U;
    msg.overlap = 188U;
    msg.flags = 179U;
    msg.custom.assign("HRNUSYQYBEOVQFPWGRFKWHWJTLJCXTPUOLMUBIGMDSBOOAJMFDYZKWFRMTDQNLYGNCWCMZEDFHEVGADKYAMXVXUJQQCZISBXAFHDOQIXBTLOUFVZGVLEDAPSEOLTSGQPTPAGQDHRBUGBRYTI");

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
    msg.setTimeStamp(0.49092031984761175);
    msg.setSource(47921U);
    msg.setSourceEntity(112U);
    msg.setDestination(1656U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.9544144469173956;
    msg.lon = 0.4204406114076711;
    msg.z = 0.44497506921440466;
    msg.z_units = 190U;
    msg.speed = 0.4076002084527697;
    msg.speed_units = 83U;
    msg.bearing = 0.40796662069299783;
    msg.cross_angle = 0.4915768802729128;
    msg.width = 0.8442023271020358;
    msg.length = 0.31137824433060135;
    msg.coff = 68U;
    msg.angaperture = 0.9042282209343693;
    msg.range = 59025U;
    msg.overlap = 94U;
    msg.flags = 112U;
    msg.custom.assign("WJQGUDNNZBAVFRMYDFBODCFVQIKWUSQTGAPMAAXSPWZNKHLPLIAKGZAUZOCZHMQFDCZVHSWOAXFFRSRYYITSEVYUEWOTCDTIEIRAUKRCVIXBTYOYOPMRVXDLZJPJEDMLBGRSONULLXRPGPVFTVPXMHBEYNIN");

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
    msg.setTimeStamp(0.5446050073212415);
    msg.setSource(19762U);
    msg.setSourceEntity(210U);
    msg.setDestination(53435U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.14458552405070424;
    msg.lon = 0.19429400713028033;
    msg.z = 0.40372866750968284;
    msg.z_units = 230U;
    msg.speed = 0.9910257844579986;
    msg.speed_units = 192U;
    msg.bearing = 0.39192316238789615;
    msg.cross_angle = 0.04184485196733778;
    msg.width = 0.5095022851575518;
    msg.length = 0.3198562329275567;
    msg.coff = 96U;
    msg.angaperture = 0.42722156472964523;
    msg.range = 10763U;
    msg.overlap = 86U;
    msg.flags = 145U;
    msg.custom.assign("XAUMXEJJTGSVKGPITGRVZAVOWDEICTPPHFAXYLGLOLAXJHFMEDINUXOE");

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
    msg.setTimeStamp(0.6511576860367919);
    msg.setSource(30628U);
    msg.setSourceEntity(224U);
    msg.setDestination(48795U);
    msg.setDestinationEntity(49U);
    msg.timeout = 33630U;
    msg.lat = 0.7132206941136404;
    msg.lon = 0.901309078271231;
    msg.z = 0.14304370980808;
    msg.z_units = 157U;
    msg.speed = 0.07984788251110353;
    msg.speed_units = 185U;
    msg.syringe0 = 35U;
    msg.syringe1 = 52U;
    msg.syringe2 = 126U;
    msg.custom.assign("ZTLHRYKZAVUQKBCQDYAEOTYNGTMWMXWNEMLPCWRGHUFCUPYYIJUNSOKRGOLYHVDRGPMVHBTPNWYSAICTAARXQYZKKHMLZOKQKFRIBPECJDWQXWJLDEGSNPQBXFBV");

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
    msg.setTimeStamp(0.29843587643568315);
    msg.setSource(51733U);
    msg.setSourceEntity(141U);
    msg.setDestination(38071U);
    msg.setDestinationEntity(50U);
    msg.timeout = 58401U;
    msg.lat = 0.9638778485405189;
    msg.lon = 0.6096110675686223;
    msg.z = 0.4678979863094399;
    msg.z_units = 158U;
    msg.speed = 0.6990249090620482;
    msg.speed_units = 217U;
    msg.syringe0 = 76U;
    msg.syringe1 = 89U;
    msg.syringe2 = 92U;
    msg.custom.assign("FILZTRLBCWLCBUYTNEUVONECHDWBELKRXJBEGZPQXUHZSFTJGFBVVVAVVDUIXSWTCULKAYDWZNIAOLBRSGAVPYZAJRKWNQCQHJRURXUHYGEJYCJAPZVFBNINOGUBHYJXMGOPLKFNPSGTFCSDTTGTSQOAVDFDAUOGBIXDWQTMNOPZRPMHVQACWHOEXDMDTBQIFJFLSISRQHIWPOCMKPYUSXKYXIMNKRCYOMSZKPRFKQENHMML");

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
    msg.setTimeStamp(0.03643721313217263);
    msg.setSource(56344U);
    msg.setSourceEntity(156U);
    msg.setDestination(12236U);
    msg.setDestinationEntity(253U);
    msg.timeout = 4172U;
    msg.lat = 0.9560463945431489;
    msg.lon = 0.4051936015568127;
    msg.z = 0.5485653884834472;
    msg.z_units = 220U;
    msg.speed = 0.061630555021399136;
    msg.speed_units = 192U;
    msg.syringe0 = 253U;
    msg.syringe1 = 116U;
    msg.syringe2 = 161U;
    msg.custom.assign("WLJLHLPQMPHSQZKDYVLYWVHUGSILPYPCCMPWLWFOFDZOMIVJBTVDBKXKNSUVAORUXPPGSTQBXUAZNYMA");

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
    msg.setTimeStamp(0.11993296981646084);
    msg.setSource(21416U);
    msg.setSourceEntity(166U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.9601611896044367);
    msg.setSource(31502U);
    msg.setSourceEntity(233U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.6607403921295273);
    msg.setSource(54681U);
    msg.setSourceEntity(217U);
    msg.setDestination(55655U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.6086412909617747);
    msg.setSource(44600U);
    msg.setSourceEntity(160U);
    msg.setDestination(11560U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.6608490532700622;
    msg.lon = 0.8651022667699825;
    msg.z = 0.43526975980839244;
    msg.z_units = 176U;
    msg.speed = 0.4531478596543147;
    msg.speed_units = 58U;
    msg.takeoff_pitch = 0.06288274105990377;
    msg.custom.assign("VAMGWPKIPNQHICULXTFDCCVTCVANFSKKNHBSWSFSNCNFDGJGTNZBUBLPPZEJZKEYNHXQUYGX");

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
    msg.setTimeStamp(0.9408640919886022);
    msg.setSource(2903U);
    msg.setSourceEntity(114U);
    msg.setDestination(26470U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.8765569360386182;
    msg.lon = 0.09400973042354455;
    msg.z = 0.33292942876217957;
    msg.z_units = 123U;
    msg.speed = 0.29694964401730173;
    msg.speed_units = 161U;
    msg.takeoff_pitch = 0.7134016047964421;
    msg.custom.assign("QEQKRDVMQF");

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
    msg.setTimeStamp(0.8807414771079598);
    msg.setSource(36200U);
    msg.setSourceEntity(148U);
    msg.setDestination(56340U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.3986133859416261;
    msg.lon = 0.6229773984064957;
    msg.z = 0.3186404318130106;
    msg.z_units = 116U;
    msg.speed = 0.4028872208662936;
    msg.speed_units = 93U;
    msg.takeoff_pitch = 0.3185771842445345;
    msg.custom.assign("POEXHBPYTINXFOUTAMIHSBCSGQQQGXAAGTKWZWYLWHKLQVBCNEDSCOUOIDXJS");

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
    msg.setTimeStamp(0.4419398069921032);
    msg.setSource(48030U);
    msg.setSourceEntity(46U);
    msg.setDestination(3428U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.6241775421807862;
    msg.lon = 0.5256899225954017;
    msg.z = 0.41925592646608234;
    msg.z_units = 4U;
    msg.speed = 0.7848930633158354;
    msg.speed_units = 83U;
    msg.abort_z = 0.6097862963805869;
    msg.bearing = 0.5191773174485446;
    msg.glide_slope = 54U;
    msg.glide_slope_alt = 0.43251431507232574;
    msg.custom.assign("JAQLJNSIYIJEPEAJTOZFOZYTCLGECYGAMQHKDMOOWWDLQXAIVKHENSOAKDARCGISNBDBTOKYWWMKYFBICZFZAPTJNXVQJMKPMHEMROEJOUIQPUVIUGUNGKLLJZGYDVUYZVDEIQLCWSGGZCVFXXPMCBFDWNBFSSNBTXMQZYUEVRQMHGXBVUZADHDUTHCTHEYFFT");

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
    msg.setTimeStamp(0.08780945062340895);
    msg.setSource(32481U);
    msg.setSourceEntity(41U);
    msg.setDestination(60234U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.41018094538192773;
    msg.lon = 0.13269264744215015;
    msg.z = 0.017867602956985418;
    msg.z_units = 180U;
    msg.speed = 0.7872911783902935;
    msg.speed_units = 174U;
    msg.abort_z = 0.00641114477793614;
    msg.bearing = 0.8032410309639263;
    msg.glide_slope = 83U;
    msg.glide_slope_alt = 0.8071793938759244;
    msg.custom.assign("FWPVJNQPDIDVWISMYBSFVRTLSTQDPDXYOFPWMAMWZCBIBUMEUHISILVTRLXAMIVQKIKUOMCFTATPZXUQCONZTBQVJGZLVKQUBMDGGNEPZGZBNAZWHRYGHESYGGJ");

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
    msg.setTimeStamp(0.3468544334427992);
    msg.setSource(45423U);
    msg.setSourceEntity(148U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.9326774272261643;
    msg.lon = 0.8982637768857191;
    msg.z = 0.21625722323995034;
    msg.z_units = 12U;
    msg.speed = 0.07542846054436092;
    msg.speed_units = 33U;
    msg.abort_z = 0.010409282924604524;
    msg.bearing = 0.8770003448770295;
    msg.glide_slope = 121U;
    msg.glide_slope_alt = 0.5377070215911792;
    msg.custom.assign("UNKSLJMPIIMOIHYHDZVSZBGTJHOKPPFAHWBYMR");

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
    msg.setTimeStamp(0.6859546798902953);
    msg.setSource(19342U);
    msg.setSourceEntity(127U);
    msg.setDestination(15212U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.23924337465739065;
    msg.lon = 0.5545663376008758;
    msg.speed = 0.05223299649410773;
    msg.speed_units = 31U;
    msg.limits = 111U;
    msg.max_depth = 0.31329015502943947;
    msg.min_alt = 0.37257763443603553;
    msg.time_limit = 0.07705690402905496;
    msg.controller.assign("CTBDVDEVOPGJDLEVTMSQNZTVKFQBYWFMUOYEDZEIWXVOZCQXFQTMKAMAHPIJPZHJAPXEPNMCGSNGHCZNYWTXWQYZICOOBPXZSBABMNDXEKQIHAIUJJOCDCTVGXFRBOULPRFLGHWJNBWGAKRVDUYWIXPRTRZCHRIFQLABBCGIY");
    msg.custom.assign("ETYHIQWBNSKGBDVEXSFWUEPMQTXNXACVKNRDIVKAYFMLBTUIBZFCUSZJEZGPYSAVRTEIYZHUUOTSYJOXRVLNWBDQWOUQNIHRMGYNWWMFKMREQMWQIWXOCQTEEJBPYJSKCPRIMEASFLQIYUPZSKHCLVPOGVXBXPGRLKVOXTZUDWNNMTORTCWV");

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
    msg.setTimeStamp(0.1528360749293859);
    msg.setSource(55231U);
    msg.setSourceEntity(73U);
    msg.setDestination(44069U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.6800758282439409;
    msg.lon = 0.9691019210043627;
    msg.speed = 0.08556046334131429;
    msg.speed_units = 106U;
    msg.limits = 151U;
    msg.max_depth = 0.19392295100196855;
    msg.min_alt = 0.7925725234545075;
    msg.time_limit = 0.260555929437033;
    msg.controller.assign("SBJNKTHWXAHXNWVDIIEWUMXTIIWFZFZAWXUOCEAZDTPRTJVALCQPQ");
    msg.custom.assign("OPHLQORSUKMKEULVIYGKILFLDHNRJHFJWEGAJQKSBKMTOIUSEPCRJCTEYXCTKNFXDGFBPYVUTKHOGNWAZABZYEPBHAEZWQJTULOXVZOYQXJTRFAVIMPSLCVTEWYRDCZ");

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
    msg.setTimeStamp(0.2317567017220732);
    msg.setSource(13541U);
    msg.setSourceEntity(6U);
    msg.setDestination(52966U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.37921140914712803;
    msg.lon = 0.19325904766644797;
    msg.speed = 0.9210097117101053;
    msg.speed_units = 31U;
    msg.limits = 210U;
    msg.max_depth = 0.2326875577429771;
    msg.min_alt = 0.6485274770520971;
    msg.time_limit = 0.4957643229375682;
    msg.controller.assign("HOKQXVNLGHAINDCAXZDZHXXMLDKTOLNNVMGCUWYJNOYJRZUXEMWLBBCWETPNJRHPKEZDOKTOQFFIOLCZTSBEOHKQCHECFSOYGMTUVRRDEQAJQDHXFITVEPVPOR");
    msg.custom.assign("ZPNLOTSRHIRVKXMLMQZDRQBQAVVRSSFELQUONVLIICAHWUEWGKWJHPTNEPGEYPAANDSHUJRZTPGIIFZZTYYYVTWJCDXWZYJDIOIPKAOZLMGZVMBMFJCMFRFXRFNSYXLUCQOOSIJXJXZQCHFQHEBRVDDDERKRQJ");

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
    msg.setTimeStamp(0.17785938204206175);
    msg.setSource(41648U);
    msg.setSourceEntity(171U);
    msg.setDestination(32054U);
    msg.setDestinationEntity(82U);
    msg.target.assign("SJXNZEUCAYLKDYPCZGEXHDMEXFUMQEIUISHTWITDKJFBSKUYVQLCYONNNPVOINBZLHTXPNAOSGVRSZKXUDPTOMKKHPWAGCDIBBJZQGMWAKFQTDWCRAVFXUYNGECPMFVXPETBERZZOSIFVIIAGYYKXBDJJOGVCRBJDMCXAHQGVWRWWOQMZFOVLYJU");
    msg.max_speed = 0.3468624137199072;
    msg.speed_units = 176U;
    msg.lat = 0.415750729498642;
    msg.lon = 0.9103367618532858;
    msg.z = 0.15276258654587505;
    msg.z_units = 242U;
    msg.custom.assign("RWIRTCOFBGGXLETIEXWBFVSDNOVDZMZKNDEVHLCRUINDMPUQUSWMYZLEKVCOGIAWOAPZGHWYUKBJOZECSFOBTSQLUHBVWJFXRUHELSAVRPHJDKVAYWKEQPKCOQQNKSPFAGQNOULCMIEDYJRDRVSJKAYBQYMBZYIWGJXJMADJUTKTSNUHCGLBT");

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
    msg.setTimeStamp(0.7644669295695959);
    msg.setSource(59143U);
    msg.setSourceEntity(214U);
    msg.setDestination(26747U);
    msg.setDestinationEntity(142U);
    msg.target.assign("OHPQNROXYWVCQTEQHMOIYLJUDRYOWMRDLDBGSPRVTVGUEPNBPAQYXSRQKBCIVKAAPLIZSNVOSJNDVCGFGLDKZEGUJEFEBHNWYWJOMTRLJBWSICNRPSJEODOWQCXEXTRBLWBFBRYNIILQXBZAWCYKISEXMNZCCPSMFXODMQKYTFKZZTRMVHVZIPTAGHLGKTASZDLHFUCUYYXUJKFEODTUPJMAADELJXVKNFAHHWWUIMTZXHGMUBCHSV");
    msg.max_speed = 0.3489215588412061;
    msg.speed_units = 201U;
    msg.lat = 0.7049108427912993;
    msg.lon = 0.6949538348723341;
    msg.z = 0.02132617675426074;
    msg.z_units = 95U;
    msg.custom.assign("HFLRVMRLJCLPGVXYVHEVMBZNZXERVNBTSSVRUNGIHUOXNDNDBNT");

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
    msg.setTimeStamp(0.22873197713304239);
    msg.setSource(58998U);
    msg.setSourceEntity(94U);
    msg.setDestination(62443U);
    msg.setDestinationEntity(87U);
    msg.target.assign("NAPSDKHAQWIVIFLRKSYREPPBZZKBIIQVKEZTHJAQLGPJL");
    msg.max_speed = 0.5459864320035157;
    msg.speed_units = 244U;
    msg.lat = 0.09673172963999399;
    msg.lon = 0.8815537553811924;
    msg.z = 0.4226893030176815;
    msg.z_units = 251U;
    msg.custom.assign("ZQIYUAWOQSWJTIAOGOSNQPTFCMAGXUYJLRCADYPEMNEURLOFRHAHVPUGMGINPIJZWFDKJRMLKRCIXJBVNZHYVPMTCYBTREQTBEXKVRJKSASMEJONZOTPIZSGPDPDZOKMSXNBFDZLKRXCXLVAGSJWKTS");

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
    msg.setTimeStamp(0.5161981934313801);
    msg.setSource(8633U);
    msg.setSourceEntity(72U);
    msg.setDestination(44893U);
    msg.setDestinationEntity(173U);
    msg.timeout = 14188U;
    msg.lat = 0.11556562646120172;
    msg.lon = 0.5461223888046408;
    msg.speed = 0.5709727716422247;
    msg.speed_units = 38U;
    msg.custom.assign("MEIBACDCGHUCZWFTZVEPAZRK");

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
    msg.setTimeStamp(0.6766224998973337);
    msg.setSource(42538U);
    msg.setSourceEntity(43U);
    msg.setDestination(13375U);
    msg.setDestinationEntity(97U);
    msg.timeout = 63373U;
    msg.lat = 0.7993422633324253;
    msg.lon = 0.6365631765105526;
    msg.speed = 0.14985821944404876;
    msg.speed_units = 123U;
    msg.custom.assign("WJYFBIDHAQBLFAJGIKNURWUUNLXOJSAGLRHTFXKXKLOYPXUBMSRTACPKWFCTIWJCBRHOAGEDQYHSXFHXEZTUTMV");

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
    msg.setTimeStamp(0.7925476812058087);
    msg.setSource(62343U);
    msg.setSourceEntity(206U);
    msg.setDestination(23241U);
    msg.setDestinationEntity(120U);
    msg.timeout = 3761U;
    msg.lat = 0.22952514825411607;
    msg.lon = 0.05782795909946892;
    msg.speed = 0.44637508802343384;
    msg.speed_units = 157U;
    msg.custom.assign("WCQFZIOAKLHLJFUONXKDKPHMCOCWBTEOPJPLUPNTGZIYLIGVHDZIJBQNZQAWOEPVPVFMHMMQRDWGEOPMJFRWBAXVRCVBNTBLAFHDYSSVLGGXUTIZFTTOYXHYKVDKYWUWZJNCFEIFRBTUJVKXRMFDEQRQSLGABHMCYSMNCUSIDFZKPLMGYMQZKTIXURZIEXYALBNWPVSCAOGTYZBAGNTEEESUDUYLRJSEGPAISDQRQWSXRNHOABDXVJKQ");

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
    msg.setTimeStamp(0.5006826084814828);
    msg.setSource(23704U);
    msg.setSourceEntity(40U);
    msg.setDestination(58555U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.5545786688300185;
    msg.lon = 0.7170731411495396;
    msg.z = 0.017976105844591195;
    msg.z_units = 44U;
    msg.radius = 0.9825786262133961;
    msg.duration = 34905U;
    msg.speed = 0.808805883133958;
    msg.speed_units = 77U;
    msg.popup_period = 17724U;
    msg.popup_duration = 22463U;
    msg.flags = 53U;
    msg.custom.assign("PKDKDBCHPHTDXNCLRMPTSJCLVOSAXSSJFRGDYZJOSBXZWNUYKNTTDTJHJZQVQFZLJUQGMRGGSPURYDPPMLDELZHWXOPLOQATSMIMAVJMEBTMNHCMWIWWZFVRQEVLXGOISKOAAFTCGEFAKRLDUHATRUFBNYCASIYWEUERNCEOPHQLFVSHAVBRZOABQINJHCJEBEVXFXKNOVPGUDQQUFBWGHKJGBCKBZYIYITXV");

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
    msg.setTimeStamp(0.9524967069526187);
    msg.setSource(37195U);
    msg.setSourceEntity(228U);
    msg.setDestination(751U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.2510485910943493;
    msg.lon = 0.3336722834428839;
    msg.z = 0.7218407886140057;
    msg.z_units = 202U;
    msg.radius = 0.29807720947419936;
    msg.duration = 10706U;
    msg.speed = 0.07870928275166578;
    msg.speed_units = 46U;
    msg.popup_period = 23519U;
    msg.popup_duration = 12022U;
    msg.flags = 27U;
    msg.custom.assign("DADBTUSMSGTUIJBPCUTNHJJAFUMHPJTTGSUIGJPDEMUEWPGAPNQAVFBCOFLMVKXVQZULYSRVCFTTYMOLONPHKQECWKLQIGALQGHHDUKHFZIZPJFWQACWCM");

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
    msg.setTimeStamp(0.9868354669670696);
    msg.setSource(6975U);
    msg.setSourceEntity(178U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.4783849967939845;
    msg.lon = 0.16388203330411066;
    msg.z = 0.9741377169183767;
    msg.z_units = 182U;
    msg.radius = 0.026310385172518824;
    msg.duration = 53015U;
    msg.speed = 0.6267073317320261;
    msg.speed_units = 253U;
    msg.popup_period = 42959U;
    msg.popup_duration = 65269U;
    msg.flags = 80U;
    msg.custom.assign("FBVVZEWQWTN");

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
    msg.setTimeStamp(0.3022918080067215);
    msg.setSource(42123U);
    msg.setSourceEntity(250U);
    msg.setDestination(51298U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.7027979121657194);
    msg.setSource(19350U);
    msg.setSourceEntity(33U);
    msg.setDestination(18161U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.27763302307119586);
    msg.setSource(46562U);
    msg.setSourceEntity(69U);
    msg.setDestination(14540U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.2119698061499351);
    msg.setSource(64256U);
    msg.setSourceEntity(16U);
    msg.setDestination(5801U);
    msg.setDestinationEntity(93U);
    msg.timeout = 21638U;
    msg.lat = 0.08085891912688348;
    msg.lon = 0.957010913926351;
    msg.z = 0.47896587845901717;
    msg.z_units = 24U;
    msg.speed = 0.1275423919327524;
    msg.speed_units = 136U;
    msg.bearing = 0.31956129069522987;
    msg.width = 0.9846020771447905;
    msg.direction = 195U;
    msg.custom.assign("YRLOXYXSMOQZMWRBXCBHNUPWXFJKEUNNBVWFMYTZVDQOCRKDISFTZECCAEOAJIJHWYGNFFCIMQEGKPLYSBXAIMOGQGEZVNSIPPXECRJTPSYXKDGDGTYBPNZFMENITHKVSKIOBAPGQUVWAHLEKCBVLHSRNFRVVNIXPWHUARQMA");

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
    msg.setTimeStamp(0.7237620241670194);
    msg.setSource(19411U);
    msg.setSourceEntity(171U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(199U);
    msg.timeout = 16653U;
    msg.lat = 0.8273690419644901;
    msg.lon = 0.67885671207977;
    msg.z = 0.05368969004394675;
    msg.z_units = 110U;
    msg.speed = 0.5379318573310331;
    msg.speed_units = 163U;
    msg.bearing = 0.6468877050478589;
    msg.width = 0.06270530048741907;
    msg.direction = 193U;
    msg.custom.assign("JDYVKATGPYCMEBPACVDCWSHMPFZXEGEEXSUWQYCUXZJMSJDNAJBOLHSLYEUERITQFGFRCHIWEABAMZJNTKOTZQKAUWUJNQPZYCGJOLOLWIPBRKKOHZBTZTHMWIUVZMQAERMUHBYXTNUFHLVXGOBVQMNFNSKAEQXRRWCLIILOWPNOKRJQDHIKZK");

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
    msg.setTimeStamp(0.4222245720615566);
    msg.setSource(20891U);
    msg.setSourceEntity(242U);
    msg.setDestination(25474U);
    msg.setDestinationEntity(33U);
    msg.timeout = 22380U;
    msg.lat = 0.34680179242461606;
    msg.lon = 0.5492870412431314;
    msg.z = 0.4346544070002154;
    msg.z_units = 180U;
    msg.speed = 0.7147576664639904;
    msg.speed_units = 180U;
    msg.bearing = 0.6475318582294505;
    msg.width = 0.5592767157688253;
    msg.direction = 33U;
    msg.custom.assign("TVFPWLZNONPNMPFZYLPRQZKSYGQAGZTMOIVBXHMGYOEITVMSUOEAHVJRPTHYFUSAKFSFRDEHFGEDQRTJBNYLTGHLUHPBOWCHZMJDTCBNTUWXVSGQFMLZXIIVHRJKULNIZEOGWYIH");

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
    msg.setTimeStamp(0.8040237565829158);
    msg.setSource(63663U);
    msg.setSourceEntity(45U);
    msg.setDestination(48508U);
    msg.setDestinationEntity(222U);
    msg.op_mode = 171U;
    msg.error_count = 46U;
    msg.error_ents.assign("EHXUWBFXYTNDTSEYAVXJIGCLQASYWUOBXBOFBSSEYFJSKUCKTGMJLVIQGMQCOHNLMQWIFYDCAOSZRZBAXKRAMVGYPGGDLOOXTSIEHBWFEQYHNCADZIZXMVWJECGKZRAIZUQHOGUGPLCDRSZZ");
    msg.maneuver_type = 43141U;
    msg.maneuver_stime = 0.020380629362967917;
    msg.maneuver_eta = 65011U;
    msg.control_loops = 4056568091U;
    msg.flags = 239U;
    msg.last_error.assign("BDBWOYVSUZKCZGNIYSZLMYQZLOCXGQEXAWWJTNOYKQVKSMEHLVJNR");
    msg.last_error_time = 0.6993915170994648;

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
    msg.setTimeStamp(0.8494883136648372);
    msg.setSource(40432U);
    msg.setSourceEntity(37U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(223U);
    msg.op_mode = 232U;
    msg.error_count = 190U;
    msg.error_ents.assign("QYFBVKTHMVBOZNOQTZCWEKIGAPBCFHSATTDKQPJSUKULJJONNMPSGJTNXIBDNMDAORMOGQADZLCQNYCWXCPPJGELHKTJFRZRBUQXGLOYKAPAOLSFFXCUGRPTGLRZYVZPGEYRIUIMKLMNFVUJCVQ");
    msg.maneuver_type = 19540U;
    msg.maneuver_stime = 0.5699606390104932;
    msg.maneuver_eta = 64220U;
    msg.control_loops = 613095924U;
    msg.flags = 52U;
    msg.last_error.assign("QQNICMSKTTWFKCWDWJPOKLTSBERMUODQFMHWXDTFEXCSMNLRAULWNGRZLYDHKNVEEDVOQRFJIUYNFKXVDZJJBPVPYXHQAZLRAOZEABDGNLNQRBURICLZJRVUSMCYOSAKUQYCOKXTHYGHIIVFNXXXSNGDPRSRCIPBJPSEEEOTHAWKPMZTDZHXKJIQVGDMFMGTWTZGOW");
    msg.last_error_time = 0.4536859736970107;

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
    msg.setTimeStamp(0.4403412912678225);
    msg.setSource(11U);
    msg.setSourceEntity(11U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(122U);
    msg.op_mode = 162U;
    msg.error_count = 121U;
    msg.error_ents.assign("USKAJBCODXAILRLSWSHFYQWDRHGZSVCNLLZQHMPOXPTALSGRIWHNTYFAUPQJGKBPZDHJZGBBYD");
    msg.maneuver_type = 50863U;
    msg.maneuver_stime = 0.1045808567235692;
    msg.maneuver_eta = 63426U;
    msg.control_loops = 951137388U;
    msg.flags = 33U;
    msg.last_error.assign("UOXPSVMYLEWICSWIPLSBXALCKHBBJEINDAUIZARNNJLAFTJXHLRUKOLTHRVMTNCSZXFFCTUMRWPKVXGTCPTVTNHFKOAXZUADXPN");
    msg.last_error_time = 0.4289764467979621;

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
    msg.setTimeStamp(0.15933306162895855);
    msg.setSource(23662U);
    msg.setSourceEntity(221U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(107U);
    msg.type = 93U;
    msg.request_id = 41828U;
    msg.command = 88U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 10538U;
    tmp_msg_0.lat = 0.27480772019726296;
    tmp_msg_0.lon = 0.493816519527416;
    tmp_msg_0.z = 0.29382647108777593;
    tmp_msg_0.z_units = 185U;
    tmp_msg_0.amplitude = 0.140087436047155;
    tmp_msg_0.pitch = 0.8320179642119808;
    tmp_msg_0.speed = 0.0812072509200894;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.custom.assign("SCRCJXJOKYRHYGQRSAJDPEVFPMXDOINRMFNSQBXXDUIXSTOUNMLIEAFAEUSMZKVOCSCVDBRHKHGTWLRYMLFLJGWHBPJPNEPTMLUVYNKXIEKIGWRYKVEFLEQHCTRZYANIBBDIYMGDAPCLPIZAN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17137U;
    msg.info.assign("BBEGUDHXACTXCDKNAYFBDATDDIJJXBDAAEEMQVTRQKSYFVOGXCCUBNQGYRMNRFRFIOOBZXAPCJIHOHOIHMVHEKVXGMYILTENUSWCSHTQGSDLRGPJYQOMZWCNVVFFZJXXGKHBETLWXSPLWHGGIRIDUYCPNWTZOWVMUVKGZLQLQBWZNRMMIFJHNMYEBELLORCZSVKSSQNAJXFPYATUMJYKFAPQRZNAYHTD");

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
    msg.setTimeStamp(0.29958899122170346);
    msg.setSource(52686U);
    msg.setSourceEntity(53U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(126U);
    msg.type = 63U;
    msg.request_id = 44520U;
    msg.command = 189U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 13249U;
    tmp_msg_0.lat = 0.8504573926453227;
    tmp_msg_0.lon = 0.4623615196017642;
    tmp_msg_0.speed = 0.049377741359468263;
    tmp_msg_0.speed_units = 73U;
    tmp_msg_0.custom.assign("EHLQRQQRBBAOVLZMRDOOHTXUJCSJBSFDCABASYTBIGYJHLNSURSYIEV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49036U;
    msg.info.assign("VWPECMRSHHZPILKXYKBGAMICGTLGVERMOZVBILKWNSTZNGEVFXWYGEJNCQJRAHFXOHLKCGLAJOXZTXZDBIPJPNAKJFBSAUTQRKZORTEXTMSGFPYELDIFSKFAYVCQUUSITTHUMXPHLIADFMWQWR");

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
    msg.setTimeStamp(0.3602366172098752);
    msg.setSource(55915U);
    msg.setSourceEntity(125U);
    msg.setDestination(28634U);
    msg.setDestinationEntity(243U);
    msg.type = 154U;
    msg.request_id = 49227U;
    msg.command = 65U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 31868U;
    tmp_msg_0.flags = 93U;
    tmp_msg_0.lat = 0.5338781777409388;
    tmp_msg_0.lon = 0.9254705656390787;
    tmp_msg_0.start_z = 0.4508624271745818;
    tmp_msg_0.start_z_units = 144U;
    tmp_msg_0.end_z = 0.23398281952610045;
    tmp_msg_0.end_z_units = 101U;
    tmp_msg_0.radius = 0.19648940663069503;
    tmp_msg_0.speed = 0.855546051909429;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.custom.assign("PSXJIHDYTOBWJZEMDMEUVGBATBNUDSEXRBYABBEANHHVLRVJKHFSZIMTDNDOILDZEW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33850U;
    msg.info.assign("HCWHTRWUUBONMFXOZZTAUUQARJVBVHDOZHSWSJGWYXDLLWFXWQANFL");

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
    msg.setTimeStamp(0.646180179143375);
    msg.setSource(58881U);
    msg.setSourceEntity(16U);
    msg.setDestination(35127U);
    msg.setDestinationEntity(5U);
    msg.command = 200U;
    msg.entities.assign("NJTDJJGJVTNBTNTPINLRMVKAXXWWMOVHYZVLQAQCORBZWOHFDRYVYRMWCTVJWWEGADZUWONHGTLIUSSQUEMWABPQPFFDODYOJZEXGANHGFTXVALBQXQICYNCSJUYCKFIXDRIHI");

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
    msg.setTimeStamp(0.21705804530751205);
    msg.setSource(56714U);
    msg.setSourceEntity(32U);
    msg.setDestination(44583U);
    msg.setDestinationEntity(107U);
    msg.command = 32U;
    msg.entities.assign("EAUGJVVJMHSRPQQUCANTGZAPGQOJKCVSXNVBSEMSXOYVHJILLPYBJIIUCYTEISHHVHHKUQZQYPNCELTYFLRBMRSNYEJQFJCGKEYBVSAWFBCIKAWTUGLVTLRMJDDWPZKPXNAWGYFGZRWTKIZXDRGJSQMTBZKFZOFRUQXQRDISQWBBPZUXMOIZLOZBADHEVTENNITAGOPRXDUOMOXUHERFFDWSVCIWCWALFXXKNDBNEFTLPYJHKKDPMNGAM");

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
    msg.setTimeStamp(0.18195973375067165);
    msg.setSource(27291U);
    msg.setSourceEntity(106U);
    msg.setDestination(6160U);
    msg.setDestinationEntity(201U);
    msg.command = 83U;
    msg.entities.assign("YGCGSQYDSCQ");

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
    msg.setTimeStamp(0.7028104315644425);
    msg.setSource(51786U);
    msg.setSourceEntity(208U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(56U);
    msg.mcount = 25U;
    msg.mnames.assign("KEQTKHRSRCMANID");
    msg.ecount = 36U;
    msg.enames.assign("PQOIESBXRWCHBWZEQYNZBGVBTUXWLAIMYIHPEMCTNRAKZNQKRJBAJUWDLUEEQLUVYMUNBNNPUJVGHXVIIMNLKCEOGIQJVFKXVHWCKMZGFPLIWJRFZTUGKODYDPSSOYKAWYCEZVBYMAQSLVRMDCDAAKGGFZJTQTTWTBXDKDHSCINJQFIOQOQOUALCXARXGOTREPMEHTSYFLXPKEDSOGLSFHNYZMYAPHFUJRFXCVTBILHNZJWSWPCRVMUPGDROJF");
    msg.ccount = 201U;
    msg.cnames.assign("WZHPAYSDYAWPFSOKHDFPYXRCAWVAVBQLDRNBNT");
    msg.last_error.assign("NYAOSSRFNLJPFPTFYMXBVPBDCFCRISKYKNMIKISVSUZJFKBEAQAYAJRWNXDIBNNVZCSMJGMVXZUKTEBAGBYPCLETJICECVTDUNNKBVHYUUZHWEIZNYFHEKOAXSJJPQTRRVELRXOPDMWDTGFGECUXLGVLEUHZMOOKFQGLAVDTOSOGEGYQLIFLSWLXTQTPWQPBFQXKVQLIPUYTDWMSWIZHGQNUDJYRMQWADPOWCKHBZJJXMXIHRBACRMZCHO");
    msg.last_error_time = 0.22923396319291167;

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
    msg.setTimeStamp(0.04783333519157751);
    msg.setSource(49977U);
    msg.setSourceEntity(19U);
    msg.setDestination(3019U);
    msg.setDestinationEntity(134U);
    msg.mcount = 218U;
    msg.mnames.assign("DLRNBZOZSUNTFRQWCZIWTVHHQOCXQKEFSMIWGXCIWEGJHEFRDTARMQKFSTUOFXSNTTAYWRUGNLHUPWMRVKDDTZQWVHOZEPNREPIHBNUBQMXVLFXVYQAGZLLPAVPSUSMNMZQMYGSCOYLGTPLPPGJKLZDDTJHIUKLVCCFEAOFOJGXKIYBANYQJMXBPOKWKIQBR");
    msg.ecount = 223U;
    msg.enames.assign("OJYAOIYKMFGDKVKVPQWPQEKLBIZSPRXIYPOWAASQGJSPULTPLDPZEOBRHEXQHZHXUJXCTKHEDKONWWICMAFLSYNHONSAUMJGHJCYTACWJNMMDOGUXWIKURNGFGRESLRNFFTXCRQLJHIFPCSZTVIDFLNVCMSTSEZEEKDHOWRVJWRFLYUJQAGBBF");
    msg.ccount = 225U;
    msg.cnames.assign("PINTUYRIAJKZXGTXIJAZSLZLXDWZQVDHWUOPFIRCSKRYGIWXDVAJKEZBKEBWTSFOUNKVFKQPJGYCDJGXRJLTUOUCAFBPVPGOASPQRRXIHTUXLOXLDCDPNQASBOLIHYEYOZEEMEBDGCYHRUCGUTNHHMZKIOHMHCHBMNXGOGZQTDYLNA");
    msg.last_error.assign("NZMZXKJRIAYBHHGZCYBEPDHLAPSNTDUSORKTOVDWOKFAYMHPWCUOQRVYOXDSXHTQVVBOESNRGMKNYQSMIPUAEFGLDYOCTSJPMOEWFKLEIFVZUQDXZAABAOMNLKKVPRLTRVWICFWBKVECUX");
    msg.last_error_time = 0.631085688850565;

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
    msg.setTimeStamp(0.8749652773129791);
    msg.setSource(43786U);
    msg.setSourceEntity(101U);
    msg.setDestination(29378U);
    msg.setDestinationEntity(221U);
    msg.mcount = 34U;
    msg.mnames.assign("DTBXLACWUFDHSVGSJYHDRMTQNOAWKLJEUNLUBKYFSABLEKCRQTOUTZBKBTAMFSEORDLCZQPLHJVIWOPXCXGJSFCCIIVJDFYQZWEFZDWOUNILYYGBAFHUMTPRBIKRJNIFCDMZFMMDVWXLNWSAXIRCZXEHZTLIHRJBOHGYLKEPQJYRXGEDMAOQSIGPXWSKVAUMSNTNMNYFXOOQDAHOGVZQVPITYXHGUAEKNNRKPPBC");
    msg.ecount = 138U;
    msg.enames.assign("BRMKCGSNVVKIWHDBFZSUMBIEJWIIRQLNMJEEICUFECTBGTOGSHKQUJWKDJJQFWSVGACHFXNOEDTCLUPFXWYPLMTZHHJXYHEBKOGYVRHATXNGZAOBUCVQJMQQJYWDYMTUWAQNKVY");
    msg.ccount = 218U;
    msg.cnames.assign("EXRVDFTAOSRXHUGDPNXENWSMCEEQQWGPYRNPYYGMUNWDMODYPGLYFQWCJLKAZEHTIULXVTHSLHTEHPQIJXCPMCGXWCNYJBFNOTYFZCVQQCRXYAFCEXEFHPQUAIIGW");
    msg.last_error.assign("ZGUGPPNHXDRFSFLMGHUWJCPKPKYNEROMJJIHPZBUQLRKHESCJJZZWQONIRVBDTLURITYVXMCUGFQSESFIITMKSFNPHCIOFFVRQZDMUKEVCEXJHMUSEWHNWXWYLSXNPMGATRYPQORZLVHTHYTJVFBYOULWGIZUJFGEBFLIDAXWLEXCWAYQBGSOAUKEJPARCBKCQQJTO");
    msg.last_error_time = 0.9343560667470592;

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
    msg.setTimeStamp(0.503278608564274);
    msg.setSource(42737U);
    msg.setSourceEntity(208U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(154U);
    msg.mask = 59U;
    msg.max_depth = 0.9644750571627209;
    msg.min_altitude = 0.4784991106118751;
    msg.max_altitude = 0.5530451366632889;
    msg.min_speed = 0.4573920150892369;
    msg.max_speed = 0.7828860989227507;
    msg.max_vrate = 0.8410412292979352;
    msg.lat = 0.23847166131889364;
    msg.lon = 0.33822299786421484;
    msg.orientation = 0.863696729586434;
    msg.width = 0.8504484149797253;
    msg.length = 0.45791665241300794;

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
    msg.setTimeStamp(0.5037293327755605);
    msg.setSource(31171U);
    msg.setSourceEntity(198U);
    msg.setDestination(16037U);
    msg.setDestinationEntity(226U);
    msg.mask = 23U;
    msg.max_depth = 0.02708224184659558;
    msg.min_altitude = 0.35193366035822227;
    msg.max_altitude = 0.5842828959654739;
    msg.min_speed = 0.4234141270860141;
    msg.max_speed = 0.586419806328447;
    msg.max_vrate = 0.9011465286377056;
    msg.lat = 0.3773580043786672;
    msg.lon = 0.023490212106811237;
    msg.orientation = 0.837729317752872;
    msg.width = 0.368333508966747;
    msg.length = 0.09631915828093829;

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
    msg.setTimeStamp(0.5513934441780138);
    msg.setSource(14296U);
    msg.setSourceEntity(118U);
    msg.setDestination(8180U);
    msg.setDestinationEntity(138U);
    msg.mask = 215U;
    msg.max_depth = 0.9322675605150803;
    msg.min_altitude = 0.7338065451521474;
    msg.max_altitude = 0.14573621273229498;
    msg.min_speed = 0.9725339060240035;
    msg.max_speed = 0.04004623626099668;
    msg.max_vrate = 0.8985323808089487;
    msg.lat = 0.32247112220160057;
    msg.lon = 0.039686148167434876;
    msg.orientation = 0.3647012708706232;
    msg.width = 0.21797665726628312;
    msg.length = 0.20270041135885486;

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
    msg.setTimeStamp(0.9978467055407602);
    msg.setSource(51953U);
    msg.setSourceEntity(139U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.7463543801706913);
    msg.setSource(62404U);
    msg.setSourceEntity(179U);
    msg.setDestination(60871U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.5857056968001367);
    msg.setSource(31174U);
    msg.setSourceEntity(241U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.2110290458559514);
    msg.setSource(51912U);
    msg.setSourceEntity(22U);
    msg.setDestination(56940U);
    msg.setDestinationEntity(184U);
    msg.duration = 39731U;

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
    msg.setTimeStamp(0.49821382491353583);
    msg.setSource(11679U);
    msg.setSourceEntity(201U);
    msg.setDestination(43793U);
    msg.setDestinationEntity(87U);
    msg.duration = 61685U;

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
    msg.setTimeStamp(0.788440967078516);
    msg.setSource(15210U);
    msg.setSourceEntity(230U);
    msg.setDestination(11330U);
    msg.setDestinationEntity(232U);
    msg.duration = 55901U;

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
    msg.setTimeStamp(0.7557501752477418);
    msg.setSource(46090U);
    msg.setSourceEntity(164U);
    msg.setDestination(17531U);
    msg.setDestinationEntity(41U);
    msg.enable = 231U;
    msg.mask = 2441778993U;
    msg.scope_ref = 2625138965U;

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
    msg.setTimeStamp(0.1770933248829354);
    msg.setSource(15736U);
    msg.setSourceEntity(180U);
    msg.setDestination(3115U);
    msg.setDestinationEntity(178U);
    msg.enable = 78U;
    msg.mask = 2849406813U;
    msg.scope_ref = 2386216856U;

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
    msg.setTimeStamp(0.6822481488780286);
    msg.setSource(52424U);
    msg.setSourceEntity(166U);
    msg.setDestination(10152U);
    msg.setDestinationEntity(124U);
    msg.enable = 199U;
    msg.mask = 1089601251U;
    msg.scope_ref = 2218851278U;

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
    msg.setTimeStamp(0.4175557003821082);
    msg.setSource(36615U);
    msg.setSourceEntity(197U);
    msg.setDestination(4377U);
    msg.setDestinationEntity(157U);
    msg.medium = 133U;

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
    msg.setTimeStamp(0.9158583384135016);
    msg.setSource(29507U);
    msg.setSourceEntity(172U);
    msg.setDestination(31455U);
    msg.setDestinationEntity(180U);
    msg.medium = 12U;

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
    msg.setTimeStamp(0.9751496051009264);
    msg.setSource(47536U);
    msg.setSourceEntity(26U);
    msg.setDestination(22230U);
    msg.setDestinationEntity(161U);
    msg.medium = 23U;

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
    msg.setTimeStamp(0.008715118338830763);
    msg.setSource(43267U);
    msg.setSourceEntity(197U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5743244004270167;
    msg.type = 57U;

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
    msg.setTimeStamp(0.20212209665678094);
    msg.setSource(12187U);
    msg.setSourceEntity(141U);
    msg.setDestination(50735U);
    msg.setDestinationEntity(245U);
    msg.value = 0.8137473096124759;
    msg.type = 91U;

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
    msg.setTimeStamp(0.23837671419851514);
    msg.setSource(27087U);
    msg.setSourceEntity(172U);
    msg.setDestination(63708U);
    msg.setDestinationEntity(119U);
    msg.value = 0.6167539178161994;
    msg.type = 43U;

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
    msg.setTimeStamp(0.5848213040866762);
    msg.setSource(7171U);
    msg.setSourceEntity(83U);
    msg.setDestination(18934U);
    msg.setDestinationEntity(121U);
    msg.possimerr = 0.9438661333665759;
    msg.converg = 0.7897333546921688;
    msg.turbulence = 0.48606952027234407;
    msg.possimmon = 13U;
    msg.commmon = 139U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.03482855674448826);
    msg.setSource(18607U);
    msg.setSourceEntity(190U);
    msg.setDestination(4677U);
    msg.setDestinationEntity(46U);
    msg.possimerr = 0.8641800607874528;
    msg.converg = 0.30655222256428494;
    msg.turbulence = 0.6220823985038644;
    msg.possimmon = 191U;
    msg.commmon = 230U;
    msg.convergmon = 97U;

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
    msg.setTimeStamp(0.12333696959312468);
    msg.setSource(62408U);
    msg.setSourceEntity(165U);
    msg.setDestination(27505U);
    msg.setDestinationEntity(101U);
    msg.possimerr = 0.2978959459031584;
    msg.converg = 0.2338997569309218;
    msg.turbulence = 0.147356238140259;
    msg.possimmon = 238U;
    msg.commmon = 120U;
    msg.convergmon = 230U;

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
    msg.setTimeStamp(0.34702182764984335);
    msg.setSource(8327U);
    msg.setSourceEntity(90U);
    msg.setDestination(1583U);
    msg.setDestinationEntity(242U);
    msg.autonomy = 182U;
    msg.mode.assign("AVATCNDSMLMVCMBGEIUOOZESTRNEDTXXLIQKYPBWVPGVDZGABUQQLHWRSZRRWRRDUVOHLBXHYGIEKKTOPVNJEAVLCAQ");

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
    msg.setTimeStamp(0.3200057086719358);
    msg.setSource(57131U);
    msg.setSourceEntity(214U);
    msg.setDestination(58247U);
    msg.setDestinationEntity(181U);
    msg.autonomy = 242U;
    msg.mode.assign("ARRRAGZPVLOSRXVMBXXARFFOJSOQHCWMPHNMUBFXSVGHMIQYFHKGESYZNFGLTQVBKXNPDQWGLCALMOKLKYPIBHIULREMIONHLNUZYVOYTELINOCDHSRVQAKULHTVXEDZWJJMZRCWDURYXOP");

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
    msg.setTimeStamp(0.2646280768795821);
    msg.setSource(44506U);
    msg.setSourceEntity(163U);
    msg.setDestination(2123U);
    msg.setDestinationEntity(121U);
    msg.autonomy = 173U;
    msg.mode.assign("ICEJGRHVYFWKARRPCLSGRERMODHOEGZUYVFWTVHUDTOLDKQWXJOHBQBGEXIAMTUULSWKHTYDIFSSZJSQCVHMBLWZIEXBFNZFGLJKQMPLNGVZYOYXHAOJKPBPRJVJKQUPOVDWTSXJTNXCXAKSUJZYDURKQDRXIVYDLIMMLNEOBFCFPHSZTDFICQOAFQXITZWHKBSQVZCFLHYRABAPGRIANEGBUXMPEYPCICOWQSEDACMPKEM");

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
    msg.setTimeStamp(0.35565913308375263);
    msg.setSource(10772U);
    msg.setSourceEntity(93U);
    msg.setDestination(49933U);
    msg.setDestinationEntity(214U);
    msg.type = 70U;
    msg.op = 87U;
    msg.possimerr = 0.2816384888817671;
    msg.converg = 0.57737502255269;
    msg.turbulence = 0.7337389260786308;
    msg.possimmon = 55U;
    msg.commmon = 30U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.0958712702698511);
    msg.setSource(33902U);
    msg.setSourceEntity(87U);
    msg.setDestination(17328U);
    msg.setDestinationEntity(220U);
    msg.type = 197U;
    msg.op = 181U;
    msg.possimerr = 0.8897760415690841;
    msg.converg = 0.3762330878242076;
    msg.turbulence = 0.04961294817398343;
    msg.possimmon = 161U;
    msg.commmon = 130U;
    msg.convergmon = 231U;

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
    msg.setTimeStamp(0.45298498698957623);
    msg.setSource(61890U);
    msg.setSourceEntity(100U);
    msg.setDestination(64601U);
    msg.setDestinationEntity(221U);
    msg.type = 114U;
    msg.op = 232U;
    msg.possimerr = 0.7541027936423642;
    msg.converg = 0.015380003196321268;
    msg.turbulence = 0.5645015663800149;
    msg.possimmon = 72U;
    msg.commmon = 228U;
    msg.convergmon = 101U;

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
    msg.setTimeStamp(0.4102348784650732);
    msg.setSource(5291U);
    msg.setSourceEntity(69U);
    msg.setDestination(19374U);
    msg.setDestinationEntity(82U);
    msg.op = 149U;
    msg.comm_interface = 22U;
    msg.period = 43602U;
    msg.sys_dst.assign("XWCIRRQNTQBLSHDHIPYSFVYWKTOBMLCZXPBWBEKYLIFDZMEBFDOLUOKZTAYGSOCQGAIRXJKPEBFDRQLZWFZMVZAIICYHULRVZQFIJATHSCHSKOIURESEWGVXJQNCONCUGNIMOXDVTMVHNVHTSAEEJNJEUUWQWV");

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
    msg.setTimeStamp(0.6720316887886824);
    msg.setSource(31495U);
    msg.setSourceEntity(161U);
    msg.setDestination(54034U);
    msg.setDestinationEntity(82U);
    msg.op = 42U;
    msg.comm_interface = 183U;
    msg.period = 36401U;
    msg.sys_dst.assign("TQPWDWYMPZRWLKVBSNYMJVSRNSVIQGUUSQEJVHZLROKAIFAZSOTCVFGROUVBYAMEYMIIOFTJZGFYQFDZGUSEXUCKVQWYUXSGALBTIWHELCEHBKLBCDEUDHQXVGHKZPMJCYHLGAIQXIIHMRBJXPDMXDGZTXPICTHGOEAOBKFPQBMRTNNBLWVRZXYNBOJQDSEANWANUXOZ");

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
    msg.setTimeStamp(0.19996976086482865);
    msg.setSource(62357U);
    msg.setSourceEntity(95U);
    msg.setDestination(60357U);
    msg.setDestinationEntity(201U);
    msg.op = 185U;
    msg.comm_interface = 34U;
    msg.period = 17721U;
    msg.sys_dst.assign("YTJOXECEMMLQFEXQMWFEMZKOFWQENBWNDNBNAJFXWULLQQYTYBMTLISVDUCRJLGHPHFHNUKFMXZOGWDJKDOIBINYTCULKDMZPBGIPZVDPLJIVDEAPHSYGRXHTAPVEZKEVJGHTNFVYBIMXXHUVOEQKHCGODPO");

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
    msg.setTimeStamp(0.12952431015300347);
    msg.setSource(53480U);
    msg.setSourceEntity(6U);
    msg.setDestination(36304U);
    msg.setDestinationEntity(50U);
    msg.stime = 860349838U;
    msg.latitude = 0.9325951704368697;
    msg.longitude = 0.0855135486609574;
    msg.altitude = 19262U;
    msg.depth = 43251U;
    msg.heading = 1115U;
    msg.speed = 13277;
    msg.fuel = -27;
    msg.exec_state = -9;
    msg.plan_checksum = 43644U;

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
    msg.setTimeStamp(0.43788676946161886);
    msg.setSource(52390U);
    msg.setSourceEntity(99U);
    msg.setDestination(56320U);
    msg.setDestinationEntity(196U);
    msg.stime = 1073929397U;
    msg.latitude = 0.13416193890374395;
    msg.longitude = 0.4995115234685358;
    msg.altitude = 56929U;
    msg.depth = 60873U;
    msg.heading = 22937U;
    msg.speed = -13273;
    msg.fuel = -1;
    msg.exec_state = 9;
    msg.plan_checksum = 3773U;

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
    msg.setTimeStamp(0.23606165994940198);
    msg.setSource(54260U);
    msg.setSourceEntity(108U);
    msg.setDestination(2025U);
    msg.setDestinationEntity(29U);
    msg.stime = 2530538654U;
    msg.latitude = 0.36079018368281457;
    msg.longitude = 0.386966583519316;
    msg.altitude = 56727U;
    msg.depth = 52537U;
    msg.heading = 12699U;
    msg.speed = -32366;
    msg.fuel = 93;
    msg.exec_state = 98;
    msg.plan_checksum = 18855U;

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
    msg.setTimeStamp(0.6382252989022525);
    msg.setSource(21263U);
    msg.setSourceEntity(177U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(36U);
    msg.req_id = 46733U;
    msg.comm_mean = 64U;
    msg.destination.assign("TQKTHGSLJVVKQXFVHGMLNQIKQHISWC");
    msg.deadline = 0.4782245903437643;
    msg.range = 0.18843134155696473;
    msg.data_mode = 173U;
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HGPJQUDTIQDPGIXDQSVJJHFXHXWGRDOCPECRVMSUDQVZGJBTB");
    const signed char tmp_msg_1[] = {72, 54, -62, -107, 45, 110, 14, 10, 1, -28, -128, -2, 20, 72, 55, -99, -42, 87, -4, 68, -127, 27, 8, -27, -89, -81, -61, -118, 56, 69, -101, 27, -33, 7, 35, 4, 41, 28, 125, -17, -120, -51, -18, 16, -23, -31, -60, -24, -58, 38, 37, 72, 96, 63, 125, -68, 5, 55, 121, -49, 74, -31, 89, -46, -20, -114, 55, -115, 7, -100, 122, 50, -54, 31, 36, 40, -36, 47, 33, 103, -91, -19, -22, 66, 29, 60, -9, -43, -102, -70, -18, 35, -97, 46, -119, -124, -1, 22, -56, 87, 67, 122, -113, -14, 67, 49, 41, 21, -20, -33, -21, -1, 96, -68, 112, 106, 22, 109, -100, 78, -107, -109, -60, -32, -86, -121, 99, -51, -128, 55, -23, -96, 124, 112, -125, 7, 50, 125, -55, -96, 51, 2, 62, 95, 42, 71, 67, 98, 97, 90, 1, -88, 26, 63, 15, -20, 46, 87};
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
    msg.setTimeStamp(0.1084496253303805);
    msg.setSource(52029U);
    msg.setSourceEntity(120U);
    msg.setDestination(4395U);
    msg.setDestinationEntity(177U);
    msg.req_id = 60235U;
    msg.comm_mean = 9U;
    msg.destination.assign("YCFIYXHEQKDMLPGSSHRUQAQHAURCJKLZZZYFANYDPGJXVOVELLMROKKJZISTFBULZROSLYSEUFXXFMSUHZBYSOVEUDDBPMZSGATJWZQHMXCMKUAZLTNRKCOAYRFPBCPLYDTCNDPHPUNOBCSANKAWNVGWQGRGOIZ");
    msg.deadline = 0.677666859055028;
    msg.range = 0.15277640143881288;
    msg.data_mode = 182U;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("PNOVALQEXLTKWVLUXBPJRXHVBVSGYMPZUJNHLUMXSKEWNLKLHOUTJUDNVRQQTNYOIPBMYOICRZEJVNFPAJWJWDKWQXTGMPZZNSWHZYYYAJHSQBBICRDFKXBSXA");
    const signed char tmp_tmp_msg_0_0[] = {115, -98, 100, -63, 61, 11, 120, -1, -98, 99, 33, 19, 35, 86, -93, 83, -2, -83, 69, 61, 33, 105, 100, -33, -9, -72, -75, -81, -117, -1, 74, 96, -46, 14, 64, 75, 6, 4, -56, -26, -1, 73, 75, -39, -21, -102, 40, 82, 125, -25, 12, -82, 99, 29, -49, 104, 101, -25, -95, 9, 70, -11, 41, 50, 125, -37, 22, -16, 26, 6, -117, 86, 50, 69, -128, -12, 38, -24, -77, -32, 89, 27, -82, -36, 84, 90, 101, 65, -103, 82, 105, 32, -12, -75, -36, 8, 32, 9, -28, 9, 26, -109, 106, -91, 10, -37, 90, -44, -48, 41, -73, -123, 104, 63, 58, 52, 11, -103, -43, -75, -47, 9, -50, 77, 96, -20, -19, -33, 36, 36, 71, 117, 29, -29, 70, -71, -97, 92, 96, 124, -37, 82, 120, -99, 63, -40, 122, 25, -34, 24, 105, -114, -11, 86, 70, -31, -106, -128, -29, -22, 66, 119, -29, 69, 28, 5, 36, -21, 53, -39, -43, 18, 71, -112, 19, -16, -80, -21, 116, 35, 59, -16, -57, 52, 34, 37, -55, -116, -20, 24, -68, -70, 50, -97, -72, 57, 2, 38, 41, -25, -76, 101, -43, -5, -13, -117, 68, -45, -77, 53, -100, -38, -34, 65, 40, -113, 38, 29, 115, -123, -116, -56, -104, -12, 3};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IPWBWNIVEUJSVTKFEEIXGBGYCSMGUWQDEVADZFAMZGZQCPSFVDVBJUVHAKZSWNKLSLKVEPKMGMFUYXOPWBJQYAEBHPHRMRZXIRCBGLEPXTGPRVGJLDQFWQKMNKSINIDEOYRJQDCRQNFXITYZYLEOQREDTAMTTTXYJAHBXPGWNKFDXDWAUHMPBYKFZUFCYFOAJZVCIOGCIHUQMXSA");
    const signed char tmp_msg_1[] = {110, 71, 79, -91, 123, 31, 15, -14, 27, 12, 83, 68, 23, 118, 108, 30, -121, 108, 86, -65, -102, -30, 93, 2, -29, -68, 89, 34, 118, -19, -18, 25, -113, 30, 39, 122, -28, -8, -108, 114, -31, -63, -63, -38, 42, -89, -56, 18, -61, -46, -54, -2, 125, 0, 69, -59, -107, -16, 123, -58, -89, 30, -8, -80, -6, 122, 53, 77, -28, 121, 42, 112, -51, 95, 120, -1, -24, 36, 28, 124, 74, -58, 110, 51, -4, 77, -43, 58, -28, -109, -14, 92, -23, 68, -10, -21, -29, 12, 95, -81, 87, -64, -50, 80, 0, 71, 85, -2, -67, 114, -24, -85, -43, 21, -106, -30, -81, -43, -80, 59, 70, -5, -10, 17, -37, -112, -51, 85, -83, 97, 12, 112, 98, -128, -24, -103, -57, 45, -58, 41, -127, -127, 5, 40, -91, -90, 107, 77, 0, 1, -111, -52, 80, -82, 125, 41, 22, -56, 29, 44, -106, 39, -60, -118, -32, -15, 118, 30, -1, -8, -22, 30, 118, 102, -16, -118, 107, 10, -29, 70, 126, 73, -7, 7, -88, 85, 125, -112, -40, 102, -96, 77, 124, -120, 36, 6, 7, -86, -55, 39, -63, 94, 84, 49, 53};
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
    msg.setTimeStamp(0.06011765304071914);
    msg.setSource(3371U);
    msg.setSourceEntity(75U);
    msg.setDestination(63618U);
    msg.setDestinationEntity(220U);
    msg.req_id = 32146U;
    msg.comm_mean = 54U;
    msg.destination.assign("TFDPYYHWRHCJFZGUBYIKYKMEVBVVUNLXDCA");
    msg.deadline = 0.6551219237693748;
    msg.range = 0.45263352283461344;
    msg.data_mode = 183U;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 82U;
    tmp_msg_0.label.assign("OKBEYNFUTGJYUITIDNESOHOADCVWETZXCQBFSHBELWRZMYMPXUONDLFDGKITHIIEVRWDDKWVBVAUJZCIVKRMBWHYIAHTYKAFPJYAQKOSLWUSELQNSMLMMAFIB");
    tmp_msg_0.component.assign("JBTLWVAYXGTIFSXDSEKNCODRIKHUKDDPGMGKSYRIHVYJWFGHVEXLOZBCFBXOFPRZWZDFBQCXMDWJRIQHLJQIPTZCJDQGNAEXVQYMJRKENSEPLOSOSEEZRUFVCWTVCTIUYNZIMMHMUNUFHVHSOHHGYMALTLQGWLQBQPMTTGYELKAACBWWKPJPUCAXRNOLPGSMEXKFXDUINFBUAINQEIKPDOQBGPWRZWUNZRTXS");
    tmp_msg_0.act_time = 23626U;
    tmp_msg_0.deact_time = 62589U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ASUEWGGYSMSTDRLZJVLZECDPCHKSZKIBILYMZTOXVKVCFPTQGBDCNXWPUGKEOLNFIIAQZLPTGTKHWFGDRDPMQMFRYZCSVWDLUGUBOMJZQOAJRGOOFIUNFNDSVEBXLQFVWKKWAPNNZVLNCRVGFCPSXTCKGXMKDYQFZHNJRIOQCANDHTKFUYRHLDBHYJXVJPHUWQAMSSSEABYJUXCIAHITUJYOWAXWBXTBXJEMQHJYWHPMO");
    const signed char tmp_msg_1[] = {-107, 113, 1, -54, 14, -121, 99, -72, -8, -88, 40, 120, 8, 89, -87, 110, 55, 24, 100, -124, 32, 100, -104, 39, 93, 52, 53, 24, -88, 0, 56, 21, 77, 124, 19, 21, 22, -42, 101, -117, 28, 102, -70, -55, 49, -74, 45, -47, 7, -86, 73, -103, 3, 90, 120, -87, -105, -126, -123, -62, -103, -64, 96, 79, 88, 36, -66, -115, 56, -98, 97, 11, 38, -82, 63, 1, -71, 82, -56, 91, 76, -121, -46, -13, 77, 46, -3, -4, -51, 93, 124, 5, 70, -126, -72, 27, 14, 13, 42, 88, 46, -80, -62, -19, 100, 1, 106, 89, -14, -76, 36, -6, 60, 106, -3, 52, -62, -68, 49, -67, 100, -20, -5, -62, -71, 34, -50, 24, 49, -43, 47, -48, -27, 83, 37, -55, -49, -32, -87, -114, -1, -97, 47, -56, 74, 47, -98, 102, -81, 90, 63, 30, 60, 11, 14, 81, 26, -76, -85, 63, -13, -41, 88, 42, -110, 110, -1, 4, 60, -27, 14, 68, 41, 33, -109, 44, -44, 98, -24, 116, 37, 45, 90, -82, 102, 108, -11, 65, -34, -6, -63, -114, 113, -18, 121, -41, -57, 120, -114, -24, 30, 112, 119, -4, -59, 85, 11, -72, 57, 39, 100, 36, -45, -32, 26, -70, 112, 11, 39, 57, -102, -103, -39, 42, 65, -65, 70, -45, 4, 84};
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
    msg.setTimeStamp(0.0015286252123651867);
    msg.setSource(53907U);
    msg.setSourceEntity(1U);
    msg.setDestination(59299U);
    msg.setDestinationEntity(12U);
    msg.req_id = 20679U;
    msg.status = 79U;
    msg.range = 0.3766995488580046;
    msg.info.assign("OLLCZSEWFUIVIZFLBHECGDGDYGNOAULGRAZOPVOWBXQLFJNTDNZAMILETPSRWAYSMKUBVOWDFXZJNHDSQSBTPGDYTTHTRCXMKPIRADYKEPTCSYXHACVQNUKZQCMPUPJ");

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
    msg.setTimeStamp(0.5673686675050958);
    msg.setSource(17735U);
    msg.setSourceEntity(202U);
    msg.setDestination(29211U);
    msg.setDestinationEntity(180U);
    msg.req_id = 48349U;
    msg.status = 155U;
    msg.range = 0.7729821153525681;
    msg.info.assign("OXMCEPCEFFHBYQSPNWIAWSXGVMMIOWVOVHDALARXBMPIHVNYBJGKIKQBGUERQRYLCBXTPPZRAPCWFOUUDXKZKSBIOAXSUHVATJMIRZQKGEUERIQEJEWIKXENGHKJWBSTLKSDYGBLNOIZFGLUBMLHINAZKNNXTHYFTURYLNWPYC");

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
    msg.setTimeStamp(0.9877328971039703);
    msg.setSource(13279U);
    msg.setSourceEntity(203U);
    msg.setDestination(48598U);
    msg.setDestinationEntity(66U);
    msg.req_id = 23926U;
    msg.status = 126U;
    msg.range = 0.3835196056066723;
    msg.info.assign("FMTJYKVJUTQMZASYPZRIWACPMEOTTMWXAPIGRBGJGSQOYLENKSKMYLTEWGQHZVGDHTGNKAGSRFACBEISHUMWJDVXMDURUFCUEXYZVCDXGDY");

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
    msg.setTimeStamp(0.22871000842739675);
    msg.setSource(60191U);
    msg.setSourceEntity(181U);
    msg.setDestination(34456U);
    msg.setDestinationEntity(211U);
    msg.req_id = 3549U;
    msg.destination.assign("YDVPMZKXEIOSOUOLBVBQTA");
    msg.timeout = 0.4863471635050557;
    msg.sms_text.assign("ZXZTYLXDDFSVCPUFREARJYIIHZSTWICFYAZAEPWNOARPOVQXVINCLDZYFPOQKDNDSHAASMGQJQUGJTWTUIQGMSJDSRRKDGOLHHGQLTTGLKLZNSFXQHZGWKOWDCBVSMFJCNZMK");

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
    msg.setTimeStamp(0.9050496266288948);
    msg.setSource(5865U);
    msg.setSourceEntity(248U);
    msg.setDestination(46776U);
    msg.setDestinationEntity(34U);
    msg.req_id = 30858U;
    msg.destination.assign("YSLOEQCALIUUJZRYOGKXVADOSFSVTUSMCBLJLAVVLVUZFUBTSHDWTAMOKPBSGFRIMVERYMFGMJDWXURYHYJEHLYHKEPQOJFFYKOXMZNTKXWJJUGGPVZNAJXLOXHQSLNUVJBGNQBCADGSRKTWGFRPAQWNHI");
    msg.timeout = 0.12415451458216864;
    msg.sms_text.assign("PZFZLWZDIBOIIKYZEZFDXXVQLQTRZ");

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
    msg.setTimeStamp(0.030814002145755137);
    msg.setSource(1754U);
    msg.setSourceEntity(75U);
    msg.setDestination(41118U);
    msg.setDestinationEntity(104U);
    msg.req_id = 42078U;
    msg.destination.assign("KHYTHOYKZFIDBXPHKDVXGXASVRVSRXAMYUHYBDUUPFKCPQVBTIAOCIWQLJYOQSRRNZDPOLXRTLLUQDFMMCTMSQZEYQCHANIUTZILZJEIWPLQFJOQEYFNXKVDELJTJEVAVMQJINWZJBGNCS");
    msg.timeout = 0.08486150303186091;
    msg.sms_text.assign("TMHUPELLVFHGIOOPIEKELBNJZLPMLDGUKZFBWQVWKFWXDAZVIAQUERXNADGZZERNKHFVXFASQJOYHXRJIMVUQKUBFRHTQGSGLMOOBLWNXCCCWAVVIVXYBSZODDTFTIMICHEGQJJCMETWSIWCKPCYMYLVDUADBTKGBOBSNCYKJPYANGIXJWYOLPRYZZRPWJGBEDRAT");

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
    msg.setTimeStamp(0.5679028193142087);
    msg.setSource(3123U);
    msg.setSourceEntity(98U);
    msg.setDestination(8477U);
    msg.setDestinationEntity(161U);
    msg.req_id = 38856U;
    msg.status = 146U;
    msg.info.assign("GDAHTJODEJQXGLWJACUMLSMKMQVLHJLPFYQBPUGATTUQRYWBLKERXVIFRGXOJNASSPYRWXOQTWMUFKFEYXIXQUSBKYYNKHALAREZHTSYIQRCSWYWONYAMWZSCBIKEHAIKPQGFKLLMDZEIJNSIJSFBNFNNVNZFBXWGCITCPZLKCROWDMMDDZNJTHDICCCZUVRPTDRBHPEOGKUBMFRBUNVEBJP");

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
    msg.setTimeStamp(0.3895285989182732);
    msg.setSource(61940U);
    msg.setSourceEntity(102U);
    msg.setDestination(22631U);
    msg.setDestinationEntity(206U);
    msg.req_id = 18960U;
    msg.status = 126U;
    msg.info.assign("KMIXHJRVFWIENDBFZLEBJXRTSFDH");

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
    msg.setTimeStamp(0.1801930829234344);
    msg.setSource(31642U);
    msg.setSourceEntity(104U);
    msg.setDestination(19720U);
    msg.setDestinationEntity(99U);
    msg.req_id = 30952U;
    msg.status = 86U;
    msg.info.assign("LLSSIIUNVZEZWVSKJFZEPDSWCJEMZLPGNKHVAORNTBRZPXOJFIXKLFZGRVKGOKXYDMQYWTQTFICAGOXITUVFIYUDDJOBTCFNLPVBJMHJZATHCYLUXEROHQDAKYKJVOCDVQWCBLSEBNKDTYQBYGWMGUNMNIAHRBRJEHFZYHXQEVWEGCLMQUUANAMBTVSUNWCMPRYGEBHPBFOORDHOLIYQSPWMALNCIFSGQUHWZTJQEPRXWACSJXXKDFXRM");

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
    msg.setTimeStamp(0.48961720992028357);
    msg.setSource(37053U);
    msg.setSourceEntity(198U);
    msg.setDestination(38843U);
    msg.setDestinationEntity(12U);
    msg.state = 186U;

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
    msg.setTimeStamp(0.504936631638674);
    msg.setSource(44752U);
    msg.setSourceEntity(181U);
    msg.setDestination(47084U);
    msg.setDestinationEntity(214U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.5194357851732588);
    msg.setSource(55522U);
    msg.setSourceEntity(179U);
    msg.setDestination(9776U);
    msg.setDestinationEntity(202U);
    msg.state = 200U;

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
    msg.setTimeStamp(0.7592941025693224);
    msg.setSource(47470U);
    msg.setSourceEntity(191U);
    msg.setDestination(3215U);
    msg.setDestinationEntity(23U);
    msg.state = 187U;

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
    msg.setTimeStamp(0.9565980105927564);
    msg.setSource(52929U);
    msg.setSourceEntity(8U);
    msg.setDestination(50407U);
    msg.setDestinationEntity(119U);
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
    msg.setTimeStamp(0.812489708010073);
    msg.setSource(4200U);
    msg.setSourceEntity(226U);
    msg.setDestination(38467U);
    msg.setDestinationEntity(101U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.8460521517325305);
    msg.setSource(31450U);
    msg.setSourceEntity(99U);
    msg.setDestination(41870U);
    msg.setDestinationEntity(153U);
    msg.req_id = 26154U;
    msg.destination.assign("KOBKTGPWLOKCLICGZNWYTJSWBRJUGZAVREBXRCASXXIYWHKPORKAQFZHVBFMBCLIIIYUFZDQNPJMTEMBYNRALNMONIHOXQCKJBSWKYUOEZUEHEGXRDQYNKPXYQDOMIQMWCFGHLVUDJUEJIMRYPQREXVFCTPKURZDGCUDXHCNDJEUPAFIZVADABOZZVPSNCXFWMUJSSGFLTKBLFZNEMXTQWSWYFMIQHNVTOVAGDTLGOPSQTLYVHLHAGTAWRDBP");
    msg.timeout = 0.49008584555891765;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.17677591932145342;
    tmp_msg_0.lon = 0.1137114937450423;
    tmp_msg_0.depth = 0.6196400242310302;
    tmp_msg_0.roll = 0.15654950611798057;
    tmp_msg_0.pitch = 0.4010840240497642;
    tmp_msg_0.yaw = 0.7098417491225159;
    tmp_msg_0.rcp_time = 0.7747638728919785;
    tmp_msg_0.sid.assign("WNXQOCAOQUMKCLPNWXGRJVZLXPFSUGJTOODABNSMAWAZOKKLGILCMGBFWPDARRHHYUGEIEYFZCMKNJHVDBVXATRLBENHMNDYQBUSOYDXSMJQPTIESICETRWALNGNEPKCHDOWMVXVRYWQQCTRYTAIXGBWDETMEWKTHJFZCSYOUZGKETSYLVUQKFPKSHPQIVSRZRDBDFQYZDUYHIUKPZICJJZJLVVAFVOFJCNGXTPBZQAHWEPBNB");
    tmp_msg_0.s_type = 3U;
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
    msg.setTimeStamp(0.3867656100274326);
    msg.setSource(47095U);
    msg.setSourceEntity(89U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(198U);
    msg.req_id = 1914U;
    msg.destination.assign("SPUEACQMPOKCOYISWLIHTRCABDAVWHERHVKEXSYMZZPZFRSKPRWZMOWQLOFKXGNUNXMEVUIVGXFWEGOPGYWJFHUEMXXJDFEVIBATNHFRNNWFWWOKSBJOXMKBVGQRGGTXGVHJOCVXQVKLIFUQRQYUPMDNUYTYIUZHZJSWTMYOCBIHSCLJDLBZOXZRYLAGEJRLFJQGTDILMLKDKNYATEIUQMNAUJZCJSPSYDCPVIFRBAAECPPQQBDCSD");
    msg.timeout = 0.7759681752708524;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("TPEIDPRWCYRMVXYKVMXZOXTRVZZXKEYACDHUSCJPGPTRZFBRRYPLOMMDVGEGF");
    tmp_msg_0.sensor_class.assign("DLVTWDYNRAGGSALKHRXMMQKPQESXXLFZWDUVCGSCNIRMBLKOJBOANQTOXVSDPVNEOMOHMULAKUDBYRQCBZEKFCSJHWNYTBFHKBSUJFTZVXUKRPFIDZWLXUMZOSGVBWJYQZ");
    tmp_msg_0.lat = 0.7253445276261022;
    tmp_msg_0.lon = 0.8938748089318639;
    tmp_msg_0.alt = 0.7127512295087188;
    tmp_msg_0.heading = 0.011747760178773325;
    tmp_msg_0.data.assign("RMVMIEANBWYZFZSGUUDQXDEWHKAPFOTGLTMAYWSCAFJRSJPBJACMQHLMGUVRHBTQVU");
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
    msg.setTimeStamp(0.3790343958028892);
    msg.setSource(10845U);
    msg.setSourceEntity(101U);
    msg.setDestination(49539U);
    msg.setDestinationEntity(174U);
    msg.req_id = 16731U;
    msg.destination.assign("KVBYFYCIEQFOYWSEFCUTQRNKAFRBRCSGDMDSVCZPMAMQHETBCLEZQNXIVVCATOQNTGEMSVDLPRBTILHBMDDXSBMQJFNUTOHZLVUJYZKUKGUNJWGXWPWVXAIBJVQEOBPKRAPIOLGDLRXSBLPHANHYOQFIOWIMJHKLCWDXVKGKEEYPHRMMNRZKLYSWUYSUZTAKJCH");
    msg.timeout = 0.5458275411816725;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 141U;
    tmp_msg_0.x = 0.9552833100970578;
    tmp_msg_0.y = 0.88790249824172;
    tmp_msg_0.z = 0.21210048548067206;
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
    msg.setTimeStamp(0.6239692704507387);
    msg.setSource(7208U);
    msg.setSourceEntity(191U);
    msg.setDestination(46349U);
    msg.setDestinationEntity(82U);
    msg.req_id = 49314U;
    msg.status = 152U;
    msg.info.assign("NKIEWSORNBCTPZXZHOTJYCCHRDRYMVIOQJUQOIAAVIWQCXRBEHKTMIFJSUILTIZEXXSPXHBUSFQZZLNTGDAWKGGELGWEUXNPZDVEAFBFLGFRUMBMYELNYJORUPZMYCGGPTSOQNIXUKCNKEHKHZZAXAOSSFRPBFUPLRMMTDQNOWLLBQNGYQQDFYYWSFWOJX");

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
    msg.setTimeStamp(0.5381478205572685);
    msg.setSource(24137U);
    msg.setSourceEntity(166U);
    msg.setDestination(707U);
    msg.setDestinationEntity(53U);
    msg.req_id = 56670U;
    msg.status = 52U;
    msg.info.assign("JASMRPVEKDTFTHQZYLAVJBOEOURSDMXZGRDOKOJRPWKADAAJSTVVLKLIDXSQCYIJMHIFLGFLYETCXUMWLJXSKTODYRCFPBHVSVWZXPAO");

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
    msg.setTimeStamp(0.9443752396355234);
    msg.setSource(39702U);
    msg.setSourceEntity(231U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(111U);
    msg.req_id = 18718U;
    msg.status = 242U;
    msg.info.assign("CYYVKRPOSEKXNMRPOKXVFAKLNJFIWURJQVSBSTGZWOBSTIVOTYOESNXKBMESLMVVXLFHNGCBHRGULMABIGLCOLQQKAKYUIYDXJWBHEVPCJLDGWAGQHITJTUVQNDIMTJQQUPQCHEJESUHFUOWCNTEFXSFPTCXBRBCHMAWBZKDDADFJZGCTIYCWASZMAURZYHFJRKANYPLDWZRHMGREGQTUDUXILXFSO");

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
    msg.setTimeStamp(0.7988626997612714);
    msg.setSource(19970U);
    msg.setSourceEntity(200U);
    msg.setDestination(42132U);
    msg.setDestinationEntity(181U);
    msg.name.assign("LLEKYYFZGOLNNDBOYVXCUTOTDCZHYRBXZTIYRIBHUVDWTTEVUZKBZJJDRCQF");
    msg.report_time = 0.15408208900662457;
    msg.medium = 215U;
    msg.lat = 0.06946362071787959;
    msg.lon = 0.6646418390058276;
    msg.depth = 0.10486912937604642;
    msg.alt = 0.5599325258342294;
    msg.sog = 0.03439434694054988;
    msg.cog = 0.4112567074706024;

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
    msg.setTimeStamp(0.9950592714971678);
    msg.setSource(51180U);
    msg.setSourceEntity(180U);
    msg.setDestination(39168U);
    msg.setDestinationEntity(157U);
    msg.name.assign("JZUUPLLJIBKVZZXSDSFCCBKHOSPXKTQRGOEHVAMUSXPORBRZJYZOPFCZNYMNIFUIRKYVYRISJOIVETGLHVYDBMUYWKYQXNWTYDZGMGGLXDGHYBWVXMJLMRQLVJNCJHLBMHHDIS");
    msg.report_time = 0.6084898708797888;
    msg.medium = 111U;
    msg.lat = 0.3406137553005196;
    msg.lon = 0.5675451301289498;
    msg.depth = 0.0700977646103702;
    msg.alt = 0.7895768595129724;
    msg.sog = 0.4711942635030236;
    msg.cog = 0.7528888455125295;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.027878159276647052;
    tmp_tmp_msg_0_0.lon = 0.7351771661381794;
    tmp_tmp_msg_0_0.height = 0.9770153101015391;
    tmp_tmp_msg_0_0.x = 0.6272350539373466;
    tmp_tmp_msg_0_0.y = 0.982382610399915;
    tmp_tmp_msg_0_0.z = 0.7069953772795246;
    tmp_tmp_msg_0_0.phi = 0.08103376466932488;
    tmp_tmp_msg_0_0.theta = 0.800609469446816;
    tmp_tmp_msg_0_0.psi = 0.4017496907561813;
    tmp_tmp_msg_0_0.u = 0.9699885267710628;
    tmp_tmp_msg_0_0.v = 0.871858531421946;
    tmp_tmp_msg_0_0.w = 0.27893976114007335;
    tmp_tmp_msg_0_0.vx = 0.38780745118647597;
    tmp_tmp_msg_0_0.vy = 0.8507363449121899;
    tmp_tmp_msg_0_0.vz = 0.8206296712500855;
    tmp_tmp_msg_0_0.p = 0.832309130658302;
    tmp_tmp_msg_0_0.q = 0.038359192815775045;
    tmp_tmp_msg_0_0.r = 0.25403568016472156;
    tmp_tmp_msg_0_0.depth = 0.10760502511074443;
    tmp_tmp_msg_0_0.alt = 0.5739319658774997;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 121U;
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
    msg.setTimeStamp(0.1665837310010645);
    msg.setSource(54187U);
    msg.setSourceEntity(92U);
    msg.setDestination(31749U);
    msg.setDestinationEntity(43U);
    msg.name.assign("KXQFVXNBCQPVCQQIOLZJAVKBBKYTISJMWCMRTBTRKDAGDZNEJOTHZPJNTEVFJA");
    msg.report_time = 0.26485622132830844;
    msg.medium = 74U;
    msg.lat = 0.8540015475423302;
    msg.lon = 0.7441006567030787;
    msg.depth = 0.9123006352136075;
    msg.alt = 0.27059981317053516;
    msg.sog = 0.05854789890334677;
    msg.cog = 0.1781902114953181;

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
    msg.setTimeStamp(0.47471674705340017);
    msg.setSource(61388U);
    msg.setSourceEntity(106U);
    msg.setDestination(37682U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.2519397032130407);
    msg.setSource(25851U);
    msg.setSourceEntity(83U);
    msg.setDestination(40129U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.45626419380882166);
    msg.setSource(42664U);
    msg.setSourceEntity(206U);
    msg.setDestination(8543U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.5404928285597639);
    msg.setSource(26592U);
    msg.setSourceEntity(121U);
    msg.setDestination(47949U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("FJTTCCKOPTBXRYGORFVGCGKZCBLWOUBHUUQDIOYGXHLWBWVEIJZCNAAVPPQTCEZZRRPXCTTHQGCXYJMBWUXAMRFNYNFYUAZUGVJZPLONKEABKRGMQVVZFMPWGEPSMIHHKDCVPNLTEWTHWMEAYIOSIQUJAMLWXKFHDEZSGRHIFGBHAXSTSUVDLRJONJYSDTCLWPUKDKKDJYJNVBEXIQOAXWQZFMVQQSNZSLKIBHBIMPRQNUENOOSJLFXDLM");
    msg.description.assign("UCBZVJNZYYYQKDJSSJTBJWRHZNFKYIQHZFEPLANFRLPCZDUUSXVQ");
    msg.vnamespace.assign("WDDIRSUUWPRWIDGKRWSNZEKHHAGMUEGIXIVNGTKKBOZJMUFUSQGCQZOKQNAFCGYLJDZFXCGDAHVQSYFUMPBCEQPISJLTPGLNNUXAANAZSEIUWLX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MSOEJUKFQHMJPURNJJBEMNAQWYBDSS");
    tmp_msg_0.value.assign("BPRXNGZACDBAXGSSWZWWGBTWPWUQ");
    tmp_msg_0.type = 124U;
    tmp_msg_0.access = 44U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LYYWYZAXNRDBOHQCFWMEZNYMUSCYPTFOCZVJDLRCRKLNJQRPFWDVBDBDUKACAVLUIMNLGHOIQDYPTVHQHRJP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("DGGHPILXSZTYGNAMJTC");
    IMC::Takeoff tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.5027041695340481;
    tmp_tmp_msg_1_0.lon = 0.6838547202669085;
    tmp_tmp_msg_1_0.z = 0.6620056308080977;
    tmp_tmp_msg_1_0.z_units = 101U;
    tmp_tmp_msg_1_0.speed = 0.009865026979101854;
    tmp_tmp_msg_1_0.speed_units = 173U;
    tmp_tmp_msg_1_0.takeoff_pitch = 0.6366690960266476;
    tmp_tmp_msg_1_0.custom.assign("XQLCDHWSTURTBINMLRQJUGLRKYJOHAYZXLCVWQVKKLZGTMBDXPPTESOFLIRHWZZNJXYQPBZUILNAXAWMJDTEXLFYGUZOPZFONRVSTXMAEMVWVPWWFKPEFYRCFHGDBPOCRGDVOKLHFHNMRTWQEQEZPYM");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("HHDCJIIEXJWQHZXOACUIUUPGAFBUZSGOIBWDOZMKSIELFKIYDEADMMGICSAYHZTMWIDZJKHGHRKYBTBXQVOAAWKNBAAIJFVVEPNRQYMQYLMCLHNRLFDXRBF");
    tmp_msg_2.dest_man.assign("ZKFDDUOPUXRHGQKSGINZOZGIRZLWBLGTXTITSUTRJRCOMDAWALDTCIYO");
    tmp_msg_2.conditions.assign("VKMYKRMICOTMSIMBEOWBENDUPZQIROWRZXELAZFWBHJWXOJHIXATHQLRYTWKJASSMHULQFYOPVQYGGVMWCNTIXCELDNIDXVXBAQAGWKVUCGLVETCGGZFSOUBYMQIMVUGTPATYLRPPEWJUYSHFHDNQ");
    msg.transitions.push_back(tmp_msg_2);
    IMC::CompressedImage tmp_msg_3;
    tmp_msg_3.frameid = 138U;
    const signed char tmp_tmp_msg_3_0[] = {5, -76, -127, -72, 114, -124, -109, 46, 100, 2, -116, 10, 3, -91, -106, 109, -116, -121, 98, 85, -118, 53, -2, -10, 59, -69, -92, 73, -21, -52, 104, -87, -13, 123, -2, -68, 88, -88, -116, 22, -73, -76, -41, 83, 78, 114, -37, 49, -37, -100, 65, -27, 73, 17, -63, -47, -13, -27, 41, 96, 23, 45, 33, -96, -101, 31, 44, 47, 89, -61, 104, 67, -19, 25, 8, -109, -56, 84, 113, 79, 13, 29, 31, -92};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.8931178052338804);
    msg.setSource(43165U);
    msg.setSourceEntity(105U);
    msg.setDestination(25884U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("LRWZEPBCRRSYMNMFVKZKTOSDAFASOTWFETBJKGQHQPDRXTWQWXXWWRDRHULCSIOJKAFISUEMVZKLNXUOV");
    msg.description.assign("DTGHTMUGYAFSDWMNNQKUTZYBHZOKWOGEJVXFNEIYKEMOLBXVAXUBSYGDEMSPRRNKHEVJJVCCWRNQHIYJVIRLEQBCOKLODBNEQMYLSHOZPLFBWCHOUPZDAMDWJBXWMPKWRGTHQGWZNHJAFUY");
    msg.vnamespace.assign("ITULIWRHBHOSYJPTODQOVUDJKSLAAOSCSECQTLSLKGZHPQWOAXYERUCDLHGWWACWRYKECZMZMXMYDOHJXLKZVUWIFBOFXGIINVVNIYPSYPHFJXBQPDUPXYAUVVJBEPGHJORPMWNGDZKCRQEGSLGMJRHTBXMTXBXGFWNNQEVRBCASFIUBLNOBKKKZGNTERJLVZYMIWMCYXDQTTCQZRZANAHZKYFFP");
    msg.start_man_id.assign("AEICFAVSQLMEJDVKMFQITQQDXNQEZOZNGWECHHDVYQZBOTZBKBHRAZJCRPWSXINDPYQEBIXFSNGKSUBVJLRYGTHIHZPIFXMBUDCMZEKIFBOFMJXATOXWSDSN");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("DEBNURSBZDEXGXBXQTDNKZQVOYOJVOMBPWAWVZBHSKLGCPHSLCRKFJJXCDPGOKQUPRKXLJTYTJTCMWAYGQQEWCAURAISUTFLMLQFALHXPHBRYCRCBXVTQOTPVUEKOIGPYAZLFWRMCUEANKSPDGNHQAFUWJOHMWFMIDJZYVTCIGSEVDYFDZCDZUTIEZRNLJSXOGYW");
    tmp_msg_0.dest_man.assign("CCDVYFBSXAKPPNCTJBH");
    tmp_msg_0.conditions.assign("BUYIDOEYRTNHSULRKXAHWCQCEKIHTGWDBQEALSEIOADAZMNQJLEDMOBKYUIBMCLMNYYCDZFGPRHKZOOOLNWIGPIWXBTZMFVUJOWBNYVHSJPYKUVJXYWHCNUGFGGCQXAAMTYRJMRRWSGPRRJVTBNZPPHAKIOSKIBVEUGL");
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
    msg.setTimeStamp(0.032153071439185554);
    msg.setSource(49754U);
    msg.setSourceEntity(253U);
    msg.setDestination(19082U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("VFBSCQQUDJRQYVCHPLNFMAVXEDTXCCPYERBYJDVTAZEGDOIPBBWZIQIHGHWOMWJTUIPLAZMMCDLSNPLXJHQISBCPHGDPGGHKUGZLJFZRAEKNCLIKNNBRWSTFWBMFGRUVVMOMWTNSNKXRKVWJCQUMSPLGTYNEYOIFWIVRFOOSWXAZYTDYUNUDBEORXDHCJIFAGJLFMKFTEUBTJPLOCIYXSVMKLK");
    msg.description.assign("TWOISVQDXFCZUGMCNFUEQZCQAKWAKKXPGWHZFAADEUAOLBIBXHOVQVSYJPWNLDWZBJNKIIJJNZGZKNEFVPJPYCSYIRGEQCDVHYJRDZASENXZRMIMRJAXHBFLLRYQMVJNSBSOYODPFFYXCBUOGEDBYTRCGXOWTQRSQVSIWTMVPDOBFLORUDZNWQVLTEPVUHMGJALHUEXBKKHKIIWQHFTWXYADNLMBUKPAZPXMKJ");
    msg.vnamespace.assign("GJPKAFYALKASBBCWKSPARVJVDHHQGLGAWVSXYWZIPTSQHUOMTHEXVBSCBWUFQMSMVBZMJGFBRKDOVMKXZLQOMSCCUFLLDXOOJMKTFNJNJIQGFIKTXASRWTBRFJVIMTLUWOKOYEKJWGNIPDNPRIFQMGXVZNCUEEPJSLBYNZORPARXIXEIOVCWTCGHPFLNZCUBVDYIYMHWDRXJQSHYQHWUK");
    msg.start_man_id.assign("TTLBDCIKQIBWLADYMZK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RCRCUHXTOSLPZQZPPRXHWUHJNVEJOAKHMUXKJMVXSYFZMJESPGIMTNFMWQUELQLDMAPTXJXIARFIFCUKCZDGGSQDVJCTQSRCWKMFCJBJRBYZUYKBKPFQVORGAGEPBKQQLGMWQIA");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.09909565417306776;
    tmp_tmp_msg_0_0.lon = 0.09411496376710127;
    tmp_tmp_msg_0_0.z = 0.4786771377307507;
    tmp_tmp_msg_0_0.z_units = 185U;
    tmp_tmp_msg_0_0.speed = 0.07016603070700245;
    tmp_tmp_msg_0_0.speed_units = 25U;
    tmp_tmp_msg_0_0.bearing = 0.9067754562756504;
    tmp_tmp_msg_0_0.cross_angle = 0.52948616549822;
    tmp_tmp_msg_0_0.width = 0.8602547566033331;
    tmp_tmp_msg_0_0.length = 0.520997712876695;
    tmp_tmp_msg_0_0.coff = 148U;
    tmp_tmp_msg_0_0.angaperture = 0.5330100041804757;
    tmp_tmp_msg_0_0.range = 31458U;
    tmp_tmp_msg_0_0.overlap = 199U;
    tmp_tmp_msg_0_0.flags = 35U;
    tmp_tmp_msg_0_0.custom.assign("MSNCPAFPUKQGEJIZQFQFOSIQWYYADEMIRCKVHYILHCJRTQCUEXYDAERPZVTFSVNMJHASZITTAXFNLRYHGMJXWDWGHSUBBMAXSELGZEAUZCUDAZLAGYHFWHYMXNSQBPKTWGJOGKCNTSEJHCWOOFDOVDLIXPTZFULIKLSLAGUWTHNBNMBCSPPTXZRVDNYXBTVLYLJDNKROYZJCMCBDDNRXPWQKOVRIVUQVZXHRUMFQQIWJKWUBOOPPERIFKEGKBB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::VelocityDelta tmp_msg_1;
    tmp_msg_1.time = 0.7589054687753409;
    tmp_msg_1.x = 0.4081436296404457;
    tmp_msg_1.y = 0.5177004417000558;
    tmp_msg_1.z = 0.8449489953541921;
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
    msg.setTimeStamp(0.3298145419614392);
    msg.setSource(19917U);
    msg.setSourceEntity(226U);
    msg.setDestination(21847U);
    msg.setDestinationEntity(250U);
    msg.maneuver_id.assign("VILYVPPNOSWTMFUUTJYYAQYPMEJDDLBHORGMUQFJNAPKIWXEMEIJVOMGWNNXEOQXFIOTDHTFMPZBLQGYZCBOAUKNBNJCCXQMRDVXGKDQLNZXDVRGSMRNZFUQYJWUZQOGVAUHSJWKDSIBPLHJXKPZSBSAYFKZFTZTLFQJVBWJRFHGKCRTTRBS");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 41814U;
    tmp_msg_0.lat = 0.9900124908666759;
    tmp_msg_0.lon = 0.3491781222526523;
    tmp_msg_0.z = 0.8345657278642522;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.speed = 0.8431249595189;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.syringe0 = 113U;
    tmp_msg_0.syringe1 = 170U;
    tmp_msg_0.syringe2 = 91U;
    tmp_msg_0.custom.assign("RMFYHEWYMYKLMIKKELVTMYQLJIUANTQBBP");
    msg.data.set(tmp_msg_0);
    IMC::VehicleCommand tmp_msg_1;
    tmp_msg_1.type = 164U;
    tmp_msg_1.request_id = 7337U;
    tmp_msg_1.command = 192U;
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.8026039082290809;
    tmp_tmp_msg_1_0.lon = 0.49381114777244206;
    tmp_tmp_msg_1_0.z = 0.6594290767240572;
    tmp_tmp_msg_1_0.z_units = 187U;
    tmp_tmp_msg_1_0.speed = 0.03181336233319931;
    tmp_tmp_msg_1_0.speed_units = 248U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.15204168885506686;
    tmp_tmp_tmp_msg_1_0_0.y = 0.2812991703676967;
    tmp_tmp_tmp_msg_1_0_0.z = 0.7396133168436079;
    tmp_tmp_tmp_msg_1_0_0.t = 0.6922251775176305;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.5948059319331397;
    tmp_tmp_msg_1_0.custom.assign("MAYZBFIZNEEOOZWJANEHBONZUNLQGAPKAYXYGMUBVQFUFTXAJKSRIRDPCNIXHDTDPPHRVERWQPSCJRGNWKLJICDVQMIJLYPIXEWFNAUHDBDKUVYHCCARTTEKFVVJGDTSLGCLCWRWXUXIOUOGLBORSVROBPJCHLYRAMM");
    tmp_msg_1.maneuver.set(tmp_tmp_msg_1_0);
    tmp_msg_1.calib_time = 14952U;
    tmp_msg_1.info.assign("JZKUKOJUFWMVIKMAWSQONKSLLRFJSJEDCRPWCDQUJFLEEYFVTTOGDOQRYYVKQAIVVNHHUNRTXOBOUOZDASOQZMPYCXLTLHBMKDQVGAJIATJDEUBXMPNOBONSYPXRTUXBHGKDWQFENBYHHLKFQRWURHIFCBISIPPQSGGXVWWJIEPYTSENZADBNRREMHPLY");
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
    msg.setTimeStamp(0.5919030097246117);
    msg.setSource(59598U);
    msg.setSourceEntity(185U);
    msg.setDestination(43272U);
    msg.setDestinationEntity(209U);
    msg.maneuver_id.assign("IVVHCEXZBZEWXSFDMDAWEGLCIINHTFMYXAKVQQHIYWNBTCPUWCNUUQPRKJIHOABWVXPVMHTRQVQXKMWQGQPRNOJJTXDZJWJASIALZSBURDUYAPUIZGLTAZQEOYOOENRFXOYJERQIVVZZJUDFLPPQCBMCTNZSKGWSOAAVDMNMYGWRKOHJLBSBTUKHZPKBAMSFNXBJYGYODLHGXFLPFPRMGKUDNCEFFDCSSFSLIKXECBTJH");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("GATSZJHLUHJVIVWDIHOUBGAKHANAONTFSQQRBPFZERIGQPMNESYYYXJEXMYTZVUBCCTQTMTBGPCNXRHKIOLCCWPHWQLLJLQYDEIUTZVOSBQIKHKPESBNVXKFNMYQCCVTUNJYUYRNYASJOENWILEQSQHRWEEODLFWDFOUGKLOVJ");
    tmp_msg_0.formation_name.assign("SOBTTSDNIFLYLEVCJKPANMMHUTWWSDFGAWLBGARYVMFQMPOQFOJKBKSZEECPRZHRQGBEIUQCALMRHHXORIQBKXMTMXMZWGDRIPCGVBIEIOHPVGVZNUWEUYYYGNEHBXVFSMGOPUWHWSIZKJBHOJWCKTXDLDZPQNXKUAXICABTDFIXENLDZXLAU");
    tmp_msg_0.plan_id.assign("ZARRQLQRWRFQCHIAIUVTOKWPQGQREPHOKXOXFFLVBHYRUTWYYUHNLGOCRMVAKFXHEWFBXWBENWHMNLSW");
    tmp_msg_0.description.assign("JLLYGPLKFVIRASYSVQKDNHHPROLABWKWMDCPEZMRSUGIJBQAIEGIRBXJKIRXUAJZEGSBDEENWVZTGJZMOGJOULZCUEFZKCCVXPUMXRYYTUXBXTHSIGRWIPDQAUZB");
    tmp_msg_0.leader_speed = 0.01680717386370234;
    tmp_msg_0.leader_bank_lim = 0.7524859937431537;
    tmp_msg_0.pos_sim_err_lim = 0.9899949566275474;
    tmp_msg_0.pos_sim_err_wrn = 0.4922561413847487;
    tmp_msg_0.pos_sim_err_timeout = 23902U;
    tmp_msg_0.converg_max = 0.10752705672641005;
    tmp_msg_0.converg_timeout = 7989U;
    tmp_msg_0.comms_timeout = 31911U;
    tmp_msg_0.turb_lim = 0.5400692964145292;
    tmp_msg_0.custom.assign("ZCRZVKWNAFUXVFZJMXUWRUKBRMWIXMXBFFQTYZLJVPDRDJHADCMXLWKSTCAJMFXDHOOORQFYJYYFVLWSXISTBVSDCJAZMPVHTLHJCBEOSJOQNYAOGPRSGHIIIRAITGTQTDNEWCZGAAISKEUIPUBBVHQNEVYVKNENHCGHGLQBSZETROZOKLVJINFUZQAMMWEJGPBSQXLYPHYKQUTGCNUDNLCWXYODIE");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.4989593822376097);
    msg.setSource(37643U);
    msg.setSourceEntity(27U);
    msg.setDestination(2114U);
    msg.setDestinationEntity(65U);
    msg.maneuver_id.assign("DKWHFXRICLBMPGLDWDEWAFKMTQGYEBFBWJGPSRXLBPBYXRDQRHVJPUTOOUHGNOYJQXWHNYYKCMWJEMHZXPCNKHYUHGIRMTCJVFEZKSVVYDUAGKJJNFBWPOWKKGABZXGDZOMFZUIEMAOBSEISWFOTTTCRQJUSVITIVJOSQMORQKRULBAUDAKFSNZDXLLCNDZNQVBTTIAOPSPYMICEVZZN");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.8146852829821888;
    tmp_msg_0.lon = 0.9020717657006473;
    tmp_msg_0.z = 0.09961571095711164;
    tmp_msg_0.z_units = 128U;
    tmp_msg_0.speed = 0.23992107375696836;
    tmp_msg_0.speed_units = 234U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 61839U;
    tmp_tmp_msg_0_0.off_x = 0.5026753994497702;
    tmp_tmp_msg_0_0.off_y = 0.8813330340524981;
    tmp_tmp_msg_0_0.off_z = 0.45326392498158796;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.9511574565578067;
    tmp_msg_0.custom.assign("YVMNYLIARWEFJCFLBVBUIFJARDPXJXSOWDKXSOWVSZGPGWUHDIGOHKJTAZFVOPTSPVWBHBURFYQSMOMMICIQCIQJJSVEGTKEU");
    msg.data.set(tmp_msg_0);
    IMC::SoiWaypoint tmp_msg_1;
    tmp_msg_1.lat = 0.2428383276072017;
    tmp_msg_1.lon = 0.021158380224417406;
    tmp_msg_1.eta = 1560845951U;
    tmp_msg_1.duration = 26563U;
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
    msg.setTimeStamp(0.6381969357469549);
    msg.setSource(55643U);
    msg.setSourceEntity(178U);
    msg.setDestination(50384U);
    msg.setDestinationEntity(81U);
    msg.source_man.assign("EEQFMKZLBMYFNVEHA");
    msg.dest_man.assign("HOLHEOPALNZGSYHGSVHOTEMYMEGJWYZGKNLLDYLZ");
    msg.conditions.assign("LXGHRCYARNPKFJLJBYLMAFVKQYJLQXNJCRMNYMCVLTMMNCDGACEHDPUEZBOUVKKGAFRSFETBESDUIMQKSAHBYWIPZEJLONBIDREZPBVRTAQIQSJFHUVLPXXFTVOWPRSTQQSAGWCPSEXKDHMNVZNWYFCJFERVBWAZLDFSWVZTSHQIGCPDZLIMHUDWEYNTGXCAXZZUGBHJAXZONXRBWUOKUNDXPGFTIYGJHBYPHEKTUDKIIIYSUORWOWT");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("HEKITMYSYVLVEXLCEFAGQQCFNKBMTINRTBQZ");
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
    msg.setTimeStamp(0.7537724010574234);
    msg.setSource(52893U);
    msg.setSourceEntity(109U);
    msg.setDestination(16857U);
    msg.setDestinationEntity(30U);
    msg.source_man.assign("AELFMERYYAPHBXLCQPKJCTFQBZTUOQLFGOROLKOSGGINMCDVRQTKZJEDEAGNWUFLEVESGGGRCNNDOIRPHFBJPSTISASIWBUSJRYLBIROOHZJKDVFEQTJIZKZHUHZFMUZYTEVKAYVPGBGNSNLRDBKEVTMNKHMCDXAXWJVLXQXTQAYBHUPACRMOPISCMTTQFYMAZZYXFWVMOWBWSIPRWFHYUVKXYBWNNCHDHDVDQJGQPPSLU");
    msg.dest_man.assign("SPXDHHJMDFBGTNHJVTXRHTMVYVKCKKUSZBNWRTBYXESPNUJGYBUYLQECQDJTRFRQHSKLAWEEQHWKZZTWOAWMGYMAMYSVLEHACFEMQJBIYJZHBLCKLQGFXOLOOUPXGHUHFRQJSEINBCOUPBZRNPTRKAAMXTDC");
    msg.conditions.assign("NWQTBCWSMDMLPCEWHILEJAQOOQQJZBHYDEXNGJKQVXIRIJXIUKGXJQAHIDKZYFBOYPOKRMSKVMYOGTNYRYVFGHHSHZXVBEPQGHPMTPGCBMXLUCTIASUWUJELCPWETHFEDJSAUABJJZFICZMZVWTQAESOVPUWZXKRRWVOLTMXMSYDRWNBNKCVFGBDSQIRLCDNPYNLBGDUZTTFFUAEARUJOEYLHLNZWMXIQTLGCFDBIKDXNPOUAFKSRZPSGAVFNO");

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
    msg.setTimeStamp(0.36999284797322995);
    msg.setSource(10320U);
    msg.setSourceEntity(153U);
    msg.setDestination(13387U);
    msg.setDestinationEntity(89U);
    msg.source_man.assign("CRMRXMHHTAOBSVTIJETGXEQWKYYGJKYUJFDYPMQVJEAWSRXZNYYXPIMUUZIRKWVEVGXGUWUOCIIFGLB");
    msg.dest_man.assign("LBOPORBWABZLZAERCYRGGCFQGYBPQXEMPPZYMIFZNJEKWEDHKRDBKJYIKSKFRJJQRHLPAGIBWCOOQQWVSPNJKDCVNSXTJSUPXOLHML");
    msg.conditions.assign("LHFEOFGQFBUMEYNWXLTDNZEFTQOYHFFYHXSKVYZRLJDWBLQMZPUPVSNYTUBCQJPJUXACADFZKKV");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.14720323387662837;
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
    msg.setTimeStamp(0.5747814599075086);
    msg.setSource(3780U);
    msg.setSourceEntity(19U);
    msg.setDestination(35783U);
    msg.setDestinationEntity(138U);
    msg.command = 212U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MLKAEBGHLHPYHWBKFZOYQCKGGJDWASBNTTXQRIWQMPXSTUYQULZHMYLMRFETINFZDOUODSJCXSPKAOSJCFAXNDCBOKPEMHDIWQHMH");
    tmp_msg_0.description.assign("GFPUUWMBJWDVVJAZUYOHRWSPDJFMFISTXOXFNQGHCULBIKNUFVYOELRBOLXKPMHUSJZZMDRVFSXIVEGKTMEZUERKKATZEJHCQPMVYXBFEOCIJBFCUNPOLJSPKQQZBAAAXIHWTCLYAPVYXWTUYSHGRCGNDTNRMWJHKEVCTBTOARSWZSHGNYDRHCKAGJQVXSFYDNIDLYCXJBSMTNITAIZFWDQOLPBKWZOVZGNYLG");
    tmp_msg_0.vnamespace.assign("KXXSYAVWEMVNECWJDGOYNFXDRAZLGEVXSHOWANXMTHVAQGEJTTXEYDXJJOJNCFTKUSWGYFHQXYKAGUBAGRIWQDIYOPFNWLHPZ");
    tmp_msg_0.start_man_id.assign("ZDEMEBCICAHFLSXOXBSMOKVABXYSAQCXCWHYZRMGVFCYDTZRJNWFKRHUGGOOZFKLHUIMWEPEQDJUSPGVFNJUYRTCHOBGYYHNDMGDKNTUPNKFQZVJCQEUXNKPWNWRUSHSVDMTLAVSQPZIYJQJYIPGDDPDWWXTAXYVNPZFUZAQA");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("PXIQLJMMSOTUGVKFZOJWYWKJRCOKERYVFAAMHVRUASIFGCGELQSBMWDHUECOUZWZHJKTX");
    tmp_tmp_msg_0_0.dest_man.assign("EIOWVSONUQDKAOMEBHHUMZJTWLJBSRNRXAQKVZHAEBXXFYCFLCTSAUSQDTHEPPJZQNDESJCBOWPGKLLALCPCGOZYMIFLSISAFNRMCLXOQMIIBVRIFZTWGQJTLMMQZBDSUWBUVHUTOXYSIZJGRTYVNJGYPLNXGATQCWPMNVETUFEZGYDCHTWYGFMHEZPXACSQUWREKDV");
    tmp_tmp_msg_0_0.conditions.assign("AZTBOBANWVMFKLFMSNQVXIRZLCJCCNGHTJRKRCYKNXIDMSBUVIOWEXXZJPAMZDAZNGFJGWEUCZMSDUSSWAP");
    IMC::IridiumMsgTx tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 9127U;
    tmp_tmp_tmp_msg_0_0_0.ttl = 27704U;
    tmp_tmp_tmp_msg_0_0_0.destination.assign("WPVIYUPZKUTGUUFRCNSNIZRYQPCWJPXGWDNLAXMQXWLUFRMVWBOFEAXNYOFCGR");
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-119, -126, -40, -94, -10, 54, -107, 72, 42, 85, 5, -39, 32, -32, -78, 98, -63, -70, -98, -16, 69, 102, -83, 80, -41, 109, 125, -59, -104, 1, 96, 20, 114, -13, 3, 30, -10, -106, 76, 100, 40, -106, -17, 34, -59, 93, 52, 62, 124, 103, -53, -106, 74, -25, 98, -97, -72, 126, -18, 61, -82, -18, 38, -89, -107, -62, 117, -69, -71, -50, -50, -27, 104, 43, 37, -126, -18, 94, 86, 41, -5, 17, 22, -3, 35, -32, -30, 34, 43, 51, 53, 83, -57, -120, -4, 121, -66, -31, -113, -69, 51, 119, 99, 106, -32, 71, -27, -63, 29, -105, -10, 77, 112, 23, 92, -36, -58, 120, -108, 11, 113, 79, 56, -112, -87, -101, -82, 113, 29};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DevCalibrationControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 115U;
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
    msg.setTimeStamp(0.9843971158021708);
    msg.setSource(38055U);
    msg.setSourceEntity(152U);
    msg.setDestination(38305U);
    msg.setDestinationEntity(197U);
    msg.command = 1U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KEYVIDKNVWACYNCTNALTUIJPGBAIVVOQERZJJYOWJVMHARTBXV");
    tmp_msg_0.description.assign("KQGHMDMDIFNDVDVFSSBBVXCOKQARPFYXNDQZ");
    tmp_msg_0.vnamespace.assign("DETXNIVIHPIVPMQRNLEMGDTICHTQAGPESYAFMCNDIFHFQVMRBPIRXZEDQWYAZPQLSWKWCKCZCXNHWJTVFWCZGVXIAPDBBPXFTUXHHTKGSGQDWAOSXIJQOREBHHTJLKOZKNVSNZFGVEMBYLLUJZHXGUMLEALMXFBUVOBREDVOGNDQYJRWMKOHRSRMKQUPKAUWNOSDPSQTYWUZOXCJAUEJDIFMAYNJUBRKCTYBJALUKYLRGJSF");
    tmp_msg_0.start_man_id.assign("ANKFJUWIHQLKCAFRSBZIHAXQTVUDPVLYASLFCVXDCVWHMCCEEFOABDKZSMOOBNMPIOKGGJIMSNGNVLZMCAMZMTOAXKW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WEHPGJCRRTSXZENYQPNXIJLWXTAAZPVAOQHAYQGLYWNDFCBKISWYWSTQAMOPNVMRKLGEUNTAWSFLXBSUFZYRSPDKZIZVEQGNZPYFIUGPDDBUZQKSEKWUYSDJZPQMKMCWJTRGIRXLMVKHCUQIGCKNGEMCLNHADQVVJDRDVCXXHEKHTPCETHOJFMARAORLN");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 23365U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3552487896983666;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5964370989142378;
    tmp_tmp_tmp_msg_0_0_0.z = 0.3795437586299518;
    tmp_tmp_tmp_msg_0_0_0.z_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.905459476122094;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 233U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.3691818545572797;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.6568713782664443;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.7958936591043376;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.9324898336443994;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("WNSVCPQXUDNQYBFTLBANEGOXOTJUVTNAWCXKMEEOAIIQMMRHUWOSCSUESXQPFBOLFGGVHRIPMYYDGNITKRCHOVUWWGAMIFPGULTDTKMBXOCTVCWFNZSUCDLEGJGIVZLKW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.seq = 52343U;
    tmp_tmp_tmp_msg_0_0_1.sys_dst.assign("YLHPLGSFTWGPPURTMUIHXVYJFAXFLODNNTLZWNAAILTOQEDRJGWHWCYXPCKBSQOJSCPEQNWBIGUMELBPOTEXQFSIIEVCAEGXBCFBJUTRYIKZDUQNLOAOFUWUKAGVNZBZABEFHYHFUHKKMVZRSZPVMIXJSWEZEQNVYHZSSKMRUJRBRXZFBLTPTPGMKIOHMFOERZGQNJAWWQVNNCDDDGYICSUMDDLOYXAGOYCMHTVXBQAKVQYJCCSPRDRJDXJHW");
    tmp_tmp_tmp_msg_0_0_1.flags = 38U;
    const signed char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-70, -12, -52, 60, 3, -43, 65, -41, -69, -13, -121, -27, -120, -72, 21, -44, 30, -25, -118, 121, -20, -5, -72, -81, -34, -39, -17, -75, -17, 65, 49, -46, 22, 22, -92, 9, -18, 4, 70, 12, 91, -45, 14, -86, -44, 24, 68, 65, 80, 80, 54, -12, 96, -108, -118, 68, -12, 27, -63, 14, 110, 69, -39, -74, 24, 94, 109, -40, -111, -116, -21, 122, -12, 81, 7, 76, -25, 105, -25, 42, -34, -116, 4, 8, -36, -76, 15, -18, -86, 83, 39, 29, -69, 95, -71, 36, 112, 31, 111, -38, 110, 67, -22, -56, -55, 104, -111, 58, 69, -47, 52, -111, -88, -72, -80, -115, 29, 49, -60, 67, -66, -83, 113, 48, -16, -90, 70, -24, 89, -27, -19, -33, -9, -127, 8, 104, -108, -28, -73, -51, -111, 62, 100, 78, -23, 106, -22, 119, 27, 108, 10, -46, -41, -107, 115, -21, 17, 1, -85, -101, -116, 30, 124, 25, -25, 112, -10, -45, -114, -51, 35, -84, -102, 70, -34, 96, 35, 31, 19, 118, 14, -69, -123, -57, -54, 121, 31, -93, 101, 117, -16, 119, -17, 33, -22, 66, 101, -75, -33, -53, 106, -111, -10};
    tmp_tmp_tmp_msg_0_0_1.data.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanGeneration tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.cmd = 120U;
    tmp_tmp_tmp_msg_0_0_2.op = 213U;
    tmp_tmp_tmp_msg_0_0_2.plan_id.assign("PDKAMXGDIZALRYBCBVBY");
    tmp_tmp_tmp_msg_0_0_2.params.assign("NLTARYFATKQCENFNGIRQXOKZIMYQDVNYKSCDEGKRUMIQGVVXBDAQJKPBAOJCURIEZNHMHDXLGGVMOQMBLSBLPEHYVPJHAADNTPZNKLMRGYFAKADVJOSRTYJGXSMJZDVIOUKSAPUCZZSDLWWUQPCUZUBOTCRTKXEPXZWTZHNCYBTUMOYKHSRXPYJMWWIIWIBBHNJEFGDQBWIETFDFJHUCVLRMFTHQGWEXLAVXFWCPHQCRINWLEXLOJFUSEOO");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::AlignmentState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 183U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CurrentProfile tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.nbeams = 143U;
    tmp_tmp_msg_0_2.ncells = 171U;
    tmp_tmp_msg_0_2.coord_sys = 124U;
    IMC::CurrentProfileCell tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.cell_position = 0.7893410901952144;
    tmp_tmp_msg_0_2.profile.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.08392812335447186);
    msg.setSource(62047U);
    msg.setSourceEntity(193U);
    msg.setDestination(16356U);
    msg.setDestinationEntity(149U);
    msg.command = 163U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VBHTIEQVPZGSRIQJWMNBVAXFJNUFMKYPFUCKQQWOLBCNDUJWYVOBDZAVRZXHUKIVJASXXNEMVZJBNMOKCIEWNHDBXPKSKAPFEAAAXYKTOCUHHZSQSLYEHEOTAOZGZMSTJQBHXWCCNDUBHPXLFTIKGERYNFDUGYTLSGLEZGYPVSAWTMQOBIJXBLJOPYDWGEDQMULRZQCCRUXKPSDRAIFWROGTHKNCJDTROISQWRFURVDITZ");
    tmp_msg_0.description.assign("IXACCCANNREBYEHGXLHFONMOMQWKFKFELWVXWGKIYXIEGSFWTCXYPMTXBSGDIMAUFDHUFHNOXQTVCKAPREQERGDJBVIHELQGIWNNAMUHOVRRUZRYTLDFQUKZEYSCJQPNVOLBJTZSZUOJ");
    tmp_msg_0.vnamespace.assign("ZNXIMRUHIRQAFGICGHEJYWMVHZNLJTACASBCSELPSAYTORBUFCUHBKXVGATETDTZNIJGOPRIJVWVMTPQSNMEKHKUXIFHWBPMQJWIFUQBOZGKDHNWAFKQFPDDRYLOZIGEWDQIWHVDYFSYMHNCCLZGZCNMDJGKSOSBDDTMJLBKERBNLYCVYUXLOILMDXJZXAUEUFQOKLOQWAELRHVRGPPTXPYCKQVFWBR");
    tmp_msg_0.start_man_id.assign("CKENSLXVFUNUPJRPFJJLXEGCNNTBEBRETCINCAFEHAVKHRXPTQOWOCJTUBKNWPEMCQDZWFSMDQLXRDEXJPVMTGZUYAJNZZVGKKNALFKANPQVTWYOXMGUROUFVYHFLFFGXXAPIQOBSWPCZIMSLTNSSHWJMECLVYQTIOKLZFMLQRBUBHCTKQUUHYZSJBQDRHOBURBDWDOXTVDHSYXBIGIAH");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("IBVDLYDVQKOJHEHGUPNTRCICLXBGIPYSPOZIVPJUPXHWYKLAJZVNKQDUPUSEG");
    tmp_tmp_msg_0_0.dest_man.assign("IAHTQUTLLWFTNNDQTQPUISHDDYTKRYRWLYPJASXVFIFLNCTVOGPBCDBCRSJZGBIRNVALKDVFEUOXBXNCWABSGTCEFWVZDDMJCMMTPUYNXPKSONVFTYJJUSEYYHGAVUBPPVXWOOVUWCIFRLDSGZKG");
    tmp_tmp_msg_0_0.conditions.assign("GKHOUNDESLTDPGCLHYOKFBKNXWIIQEMSLYVPJLKAVFDREAWEWSZINUITAYDUZSGXGWHCMYRVTQBGUCOBVCQDJPCAIVWYXMEGRSMRHHWRFQLLAQZAJWFZEYNKLTXXUSSIAVRSHODBFYGLFTAQPFPONRKPMBFWIHHNAGMCEZOUYLEZFCEXSZPZJNTCPBXOIYXFNDXCJIRGOUTZVRBCJVKQRWQZVNJJ");
    IMC::PowerOperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 203U;
    tmp_tmp_tmp_msg_0_0_0.time_remain = 0.9373015035448916;
    tmp_tmp_tmp_msg_0_0_0.sched_time = 0.785762841607979;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::AssetReport tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("OLSVAGHXJQAITFACLOVZNVREVNPXCGBKYICOPBNOLMKFIHOTKEODIUIJZFMZPXMNKRENMAWGBLDLWLFS");
    tmp_tmp_msg_0_1.report_time = 0.11854986687085722;
    tmp_tmp_msg_0_1.medium = 231U;
    tmp_tmp_msg_0_1.lat = 0.6857097056473183;
    tmp_tmp_msg_0_1.lon = 0.2509418527864802;
    tmp_tmp_msg_0_1.depth = 0.3078492221259107;
    tmp_tmp_msg_0_1.alt = 0.9535035300289555;
    tmp_tmp_msg_0_1.sog = 0.2367402401625116;
    tmp_tmp_msg_0_1.cog = 0.48649854510820645;
    IMC::SetEntityParameters tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("FPFBZTCWQLKIJCRZRJXTVXAULTXFFEGOZSIUMDQRRLOYPJZODVAJVMAKAHUGHFUEGSSBPPXJNLNRNBWGHODLCWZZMHDICUZFXWUWSVAISENTVABNUKQFXJRPGTDFQSHFYQBRMBYYAIOUEVOKXUCEAJSGSPLHMUVGIJBHVQHYYZDOKKTSANOTRXWHQLYQCEWNEZPCPGTYBWBPDROFKIXKVTIDLMMCOGWABCPYNKKRYMGJ");
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.name.assign("VGUUGPQWKSAWUCFYPARGJBIVJYOVCHLJPGIBLWYEFFPJLAOQSIOARKMEAUKCVTTBZZGWFHAFLXFDLOPDNTTCFBWORKCBDWMHPUZEQFU");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value.assign("RBAZVYZIFYKYBBATMKHFXMAKOFDMJNWAXOJZIBEGUDRFXZJNXUEMIVWSWQLSBKXZTSUXDARJACZNPQIRJCKVTFCJVNWNWVUJNQRPKQOUZZREDTPLHTHTGLFQGCCIBHFUBICWTNWQOUDXJNLYNVCTSDVLHLLWEKEKRBRHOXKWECSZZGHAAGCXUXSRSIYVPSIAOPFLSIP");
    tmp_tmp_tmp_msg_0_1_0.params.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.msgs.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.4179178325277091);
    msg.setSource(48907U);
    msg.setSourceEntity(31U);
    msg.setDestination(45448U);
    msg.setDestinationEntity(162U);
    msg.state = 32U;
    msg.plan_id.assign("JOISHVALEPSRVDCONJLLZJMYFSPHTJTRWWPCEGSVZAIZOWVEYPRUKWYWVYZXOOZRMTFMVHFBQNQCLJOMIKDUNQVDIBQLPVAJBOQADZNJVTXICDYBODHXSMSIIYLWGZHGYA");
    msg.comm_level = 62U;

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
    msg.setTimeStamp(0.11962907056202587);
    msg.setSource(42750U);
    msg.setSourceEntity(134U);
    msg.setDestination(11768U);
    msg.setDestinationEntity(14U);
    msg.state = 92U;
    msg.plan_id.assign("MZFNEDKOLXOCPQHFHDOKCNIUPHSTAOEIHLYACZDWKWIQHZTASDEHJBDUWKFVZZAELPAPFYGMILJVULXY");
    msg.comm_level = 174U;

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
    msg.setTimeStamp(0.9733154944979718);
    msg.setSource(12857U);
    msg.setSourceEntity(144U);
    msg.setDestination(45068U);
    msg.setDestinationEntity(198U);
    msg.state = 0U;
    msg.plan_id.assign("XQBSTVZVIFBYYKZEHLVIMCMIGBEOWZANULDIJNTQKNTWBMJKVUJOGQSSOLPGUEWRNJFVQARRYSQDSAAGIPFLCMIPUFUHAXHGTOGHEWSKHATQEOGPRYRPINMMZDDYZATZXXIBLQYXANMRTCPJHSOGRSAWAQLFKZDEJHEWDXUOHUUPDDGNXSHWLTTLYQJERBIRVDYJRMUJLCCJFZ");
    msg.comm_level = 140U;

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
    msg.setTimeStamp(0.6287949244090053);
    msg.setSource(41766U);
    msg.setSourceEntity(149U);
    msg.setDestination(52566U);
    msg.setDestinationEntity(154U);
    msg.type = 94U;
    msg.op = 179U;
    msg.request_id = 60515U;
    msg.plan_id.assign("SBETUXOYZIDHHYRQBACWKJMLJNIDXKSHSVVWRWYHSIQNBDGKCRTIUPOTPLMIQRJPWZSMAVVVESGTOJINABSBRAABNKWW");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 196U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6792720020455016;
    tmp_tmp_msg_0_0.y = 0.17431507354543874;
    tmp_tmp_msg_0_0.z = 0.019497646465468255;
    tmp_tmp_msg_0_0.phi = 0.13119406322708105;
    tmp_tmp_msg_0_0.theta = 0.7254032196182565;
    tmp_tmp_msg_0_0.psi = 0.9130552502642973;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.8720851144605599;
    tmp_tmp_msg_0_1.beam_height = 0.2855830111049591;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.38414080308511844;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QHXAQXLULDRHITKKDSYPEVPBFRRTDIDQLMXESBOXJZAWEEQFAZYOFBBMYGLELKTJFIASNCANJZJWBIVVCBHYQDBFUORCYDZ");

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
    msg.setTimeStamp(0.4665026387450598);
    msg.setSource(18485U);
    msg.setSourceEntity(244U);
    msg.setDestination(55269U);
    msg.setDestinationEntity(252U);
    msg.type = 188U;
    msg.op = 121U;
    msg.request_id = 29063U;
    msg.plan_id.assign("AEKECKPSREYWBLXRGFTLYZWAKIWNRBDJVLQMUWMPCQAJBKTJDROUFOFSVYYFTZYPEEXWXBEMXXYNRLNOOSUHUZZIWULLCSQEZUJVQVDOHWPR");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3385886344384196;
    tmp_msg_0.speed_units = 149U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VVKPUNOCZMTWIYSHZHIPSRUDFTTLKZLZOSNHFLHLPSXYEYEVCGJQCVPYBKQSNRRUMISRDGRXZDVBUQVBMLCSENFSGXZFMLTKGHUCHDJFBAQMRGEWNVEUIYGWRTDAUXMYUOLQAWHMKAROSFJQACBBBNBTCYXQWPWDFKXBHGWNNFPTAMPJIZDTREOQVXETRNJMHUXWGCAAJCJP");

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
    msg.setTimeStamp(0.22896200082374607);
    msg.setSource(33546U);
    msg.setSourceEntity(173U);
    msg.setDestination(7081U);
    msg.setDestinationEntity(81U);
    msg.type = 76U;
    msg.op = 43U;
    msg.request_id = 10703U;
    msg.plan_id.assign("BASOXPDPRLWCSTMVBQVFOAZXTPKCFYXTBCZIZDBQSUUXHKLJKVHJXWPYRCURIFTFBVUARCBYBNWZUJCEYPOKGLTNHQNFHAJMNNUETGIEIYHAEIWOASKKWYOERJRMJNZDARBP");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 112U;
    tmp_msg_0.htime = 0.3288023075292392;
    tmp_msg_0.context.assign("NCXQHNBKWWFCACRXQPOXNKPRFVOZWLJYJQRXTGPUA");
    tmp_msg_0.text.assign("VNZSJCXTYXUVIDXBHELGVUPDRVBFQLFMHNFPVAWFSARUJWRWMWPPNDJTVGJTYUTVMHBSSYXGLAXUAYQVYWWMAICQCUAUIPKBCISMPQOEIIGTNGKHTREKOJROUTMVAJZWDIAZFPUSOBHPDYIEZKUFXBATZRZNLYRCQKWCHTMBMXQLJEMRQBNCEDMYCLQFGZJSWPIOQOZQRSYGGSONNFLFJCECKSHDIWKLEBKLVXDGRO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YHGTSBDGXOYLBHYDBNBPDLBOJIRGEWTGGFFEKRDSMVEZRCUONIJZBOBKWIFJTOGXNAKGPCAWQIKULUALTWLSLKDJQUSWIEXCXDRMRSHWVAXRVJSPYLFMQYMZKNVPBOFZTIZCRYRGISWHKEODIMNPMFUQNULREQZPCIFYXAMCAYQQZXURHWJTYZJQTHJYSHSVMWHGPEJVPLOHOMSMV");

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
    msg.setTimeStamp(0.4540348246565218);
    msg.setSource(30473U);
    msg.setSourceEntity(168U);
    msg.setDestination(50559U);
    msg.setDestinationEntity(79U);
    msg.plan_count = 46376U;
    msg.plan_size = 3130632782U;
    msg.change_time = 0.5905588736564509;
    msg.change_sid = 52644U;
    msg.change_sname.assign("YZAALPTFSTAYVVFSSUABEODXJKLBEKHNQIRAZRFIYWXPHFKCETUNOADCPOOCUXYOOPDHNIPBSRFZHMCJJGWHCDDTDL");
    const signed char tmp_msg_0[] = {-7, 49, 46, -123, -50, 46, 21, 98, 78, 107, 117, 19, 45, 15, -26, 12, -118, -117, -18, 99, -46, 8, 101, -93, -12, -72, 16, -8, 79, -52, -113, -8, -9, -113, 49, -2, 71, -53, 38, -64, -19, -73, 38, -57, -22, -92, -53, -54, -21, -77, 28, -24};
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
    msg.setTimeStamp(0.5161593838466346);
    msg.setSource(37263U);
    msg.setSourceEntity(193U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(198U);
    msg.plan_count = 21351U;
    msg.plan_size = 3458703960U;
    msg.change_time = 0.9069498089191196;
    msg.change_sid = 64037U;
    msg.change_sname.assign("TUFSBTUAXQ");
    const signed char tmp_msg_0[] = {-22, 54, -26, 25, 111, 102, 113, -122, 94, 20, -113, 13, -46, -86, -29, 88, -65, -49, -79, 116, 93, -124, 64, -5, 103, -100, -53, 106, -20, -51, -39, -80, -71, -57, -82, 77, -128, 31, -17, 72, -83, 85, 101, 31, 125, -72, -8, 79, -106, -23, 63, -90, 17, -102, -50, 55, 98, 29, 121, 21, -128, -23, -56, -104, -66, 55, -93, 46, 76, -20, 66, -19, -102, -37, 4, -41, 24, 81, 35, 107, -72, -104, -37, -40, -58, 66, 37, 117, -84, -26, 36, -66, -28, 3, -86, 96, 49, 110, -79, 106, -75, 106, -35, 113, -4, -112, 60, 3, -64, 12, 49, 82, -124, 123, -96, 16, 73, 82, -86, -103, -91, 108, 80, -119, 29, -61, -2, 104, -15, 79, 49, -121, -119, -117, -41, 86, 112, -125, 63, -93, 119, -5, -124, -16, 5, 53, 99, -115, 97, 60, 12, 11, 123, -10, -59, 108, 105, 7, 7, 87, -94, -71, -75, 39, -85, -90, -80, -57, 101, -112, 113, 122, 96, -76, -72, -117, 120, -1, -84};
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
    msg.setTimeStamp(0.20684615041976329);
    msg.setSource(37465U);
    msg.setSourceEntity(164U);
    msg.setDestination(57986U);
    msg.setDestinationEntity(45U);
    msg.plan_count = 8936U;
    msg.plan_size = 3776972347U;
    msg.change_time = 0.1259732164232118;
    msg.change_sid = 62525U;
    msg.change_sname.assign("LUWRMCLGPZZYRNLEJQMOSXMVOJJSUITWVCQFFIIFDKHVBUGFWUGJYQHIXMNPTBXFBZUGQHDARUDKDTROOCROAIKVYJEOZMTEBLFIWEPEOHONQPSYGSDKTNLRHCZGTNWIASXMCWKGUDAWMYETAULXCBSNQBZVLCEQXB");
    const signed char tmp_msg_0[] = {117, -118, 47, 107, 13, -62, 108, -23, -89, 54, 98, -17, -127, -35, 8, -123, -38, 104, -116, 116, -46, -63, 26, -118, -82, -15, 101, 107, 54, 32, -28, 101, -41, 86, -124, 9, 58, 16, -99, -123, -5, 115, 29, 27, -7, -16, -56, 113, -85, 119, 100, 0, 79, -30, 15, 26, 62, -60, 14, 83, 124, -5, -93, -100, -106, -100, -21, -75, -35, 44, 20, 17, 16, -31};
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
    msg.setTimeStamp(0.8763416918693218);
    msg.setSource(39818U);
    msg.setSourceEntity(110U);
    msg.setDestination(56583U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("LUUZSBIPPFXEDNZUBEBTDDZCBAKFEWRTJXYQFRZRLUCJZPKAUBYOIXCDGZMOFXJLOWMHOQDKFXKMNFAGCSWNMJDLTRQRYWIITYC");
    msg.plan_size = 64088U;
    msg.change_time = 0.2410427530995648;
    msg.change_sid = 9719U;
    msg.change_sname.assign("PXLAXMBCUOWZEQSFLGWRRMAYAOXHZDQHAVUMKKBDTNTBVURFGACJHAKGNFKZOLVKISFDBWDIMCBIDMJVVLGUQJLOIATXBSWTTJNXJKQTJCEUZXCILGYWNBRSNPZQWRJIHDINHPQPXPMPRTSLFDPYXQGLCWHIYMHMLESRYOFRZYUQVCIEABSSPMQNERVHARHEVDOHFZFNBSWJCZQFGKDOPWEYYUKUPJTCTIUDJWFUOEMB");
    const signed char tmp_msg_0[] = {-45, -124, -101, 4, -91, -69, 42, 35, -112, 96, 119, 76, 5, -115, 60, 12, -98, 26, 63, -80, 96, 90, 11, 21, -115, -12, 99, 87, -60, -26, -32, -15, 86, -44, -36, 102, 35, 104, -78, 5, 78, 44, -91, 120, -66};
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
    msg.setTimeStamp(0.6989763945756126);
    msg.setSource(15712U);
    msg.setSourceEntity(175U);
    msg.setDestination(12656U);
    msg.setDestinationEntity(16U);
    msg.plan_id.assign("YGPAIJJDAUKPHVNPLSQNHDJFATHMYFESSXPOMRGLXHBFDGJ");
    msg.plan_size = 62375U;
    msg.change_time = 0.55710330196002;
    msg.change_sid = 10648U;
    msg.change_sname.assign("IVJNPWVYJHFIACFVSQIUEZLZANPDXOJFUMCOJIGQDVDUSYZMRGLXMEQZPFHELKIOLUSONQOGBGMAWPEXNBBVSLOJDTYHQRIYYTMPPTTQMHICXBHGWLKRDUGLFZK");
    const signed char tmp_msg_0[] = {-1, -63, -86, -106, 75, -11, 69, -21, 65, 13, -44, 69, -20, -112, 93, -49, -95, -19, -88, -34, 35, 117, -71, -23, -45, 38, -73, 106, -5, 80, 110, -6, 34, 51, -128, 118, 29, -35, 82, -102, 64, -104, 64};
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
    msg.setTimeStamp(0.6548167925614434);
    msg.setSource(56667U);
    msg.setSourceEntity(132U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("KYUFVVNVYDNMOIHWVVLTUPQIHAEWXPHOADRRIKSEUJSGXDKSAKQNYXBSFOZBYEDECMBRWHJWZIUCPPSUMBPGGCWFALZRIDTSEPUYWJMQTRDJKRODFSPHTYBELWATKIQFWLKPNLNJKGMNEHBZUGACWMFUDAJJGVKSEOVJJZHKBXANXFMGXO");
    msg.plan_size = 40220U;
    msg.change_time = 0.8486618733466714;
    msg.change_sid = 41075U;
    msg.change_sname.assign("PHWYAJRZRFVWZKHZDBKBHKNAQTEXWCWDPMCQEFMFCTPMWASJXVALPXUCHOOMZNENMVINBDIEEFRYWNDQXCFSZG");
    const signed char tmp_msg_0[] = {-86, -91, -77, 56, -62, -27, -107, -17, -118, 61, 42, 96, -16, 112, 10, 122, 124, 16, -25, 34, -44, 19, -2, 72, 12, -103, -22, -65, -35, -85, -108, 52, 117, 9, 23, -61, -13, 50, -106, 77, 116, -84, -21, 14, 126, -48, 112, -120, -75, 12, -125, -53, 41, -103, 27, 60, 57, 72, -104, 57, 28, -96, 117, 73, -74, -30, -93, -36, 65, -55, -127, -4, 20, 87, -117, -79, 21, -18, -99, -5, -63, 19, 69, 33, -109, 89, -50, -12, 117, -127, 114, -18, -73, 17, 112, -57, 95, 12, 37, -78, 105, 19, 113, 12, -103, 93, -34, 125, -116, 32, 45, 65, 98, 14, -86, -51, -31, 115, -41, -73, -127, 55, -75, 114, -14, -121, -73, 45, -81, 83, -32, 45, 92, -39, 98, 47, 79, 81, -118, 34, -105, -82, 118, 20, 125, 1, -17, 125, -101, -40, -103, -91, -87, -47, -92, -80, 118, 24, -7, 65, -85, 31, 61, -2, 51, -85, -97, 62, -63, -126, 68, 22, 75, -70, -59, -82, -44, 126, -116, -36, 61, 78, -64, 86, 71, -105, 8, -1, -118, -93, -125, 32, 31, -50, 82, 76, -97, 4, 107, -106, -110, -48, -60, 32, 30, -93, -113, -126, -28, -41, -75, -18, -90, -88, -96, 18, -116, -67, 79, 107, 60, 21, 87, 106, -61};
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
    msg.setTimeStamp(0.527766891029138);
    msg.setSource(56313U);
    msg.setSourceEntity(217U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(188U);
    msg.type = 245U;
    msg.op = 112U;
    msg.request_id = 18042U;
    msg.plan_id.assign("PPMMERDUCBCQDFYWAPZIYFEZNOHJSEBLCVHFBOANZEUQSEWFUXVEUJOSMBHCBKBMIXGTRIYOBIFDSDCPKMJAAKTUFQDLGURKJSLHOFLAFQDQHWZHPTNVTMPLOHWYXURGOGAWYYKXBZEXMVNXYTISBILXGLCBQNAMHVNILJDVRSAJHGSWHMCXAWCXRTNGEDODNYKEDWPPKIQJJAVKUQTK");
    msg.flags = 9550U;
    IMC::ManeuverDone tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KGTEIBPROYQOLGWDIDXQZOZYKPJBTQMVWBDUMOMSSBCQGWGEZMYMWTEAKSTYMXNDERDJIISFCXJUDOTRMVNTCYFEXJHEPXTZAIHYTNORYINSHOHYLEWVLAGUQBOFKLSAKAMKZJTRFZROWFYFMRCKKDIPVPHGUVVLAQLQKCHCZGLQARLJBRZPXGEVITMBCLDJHNXVNVFILWXEJF");

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
    msg.setTimeStamp(0.4638455922695368);
    msg.setSource(57590U);
    msg.setSourceEntity(155U);
    msg.setDestination(13209U);
    msg.setDestinationEntity(66U);
    msg.type = 98U;
    msg.op = 248U;
    msg.request_id = 11801U;
    msg.plan_id.assign("EYISIHQBSZOMTVWMGEBCKCZMBMMZXJFJRDAZRCWPXQTITOKXQHLWYYNDWOVDAJPBAUYAYRHODEOQWFHFABNMXETCSJYPDUSHURVKGTKTXHRPFWKYYCRNHTOVRXPZGMGCZSFFQSA");
    msg.flags = 19461U;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.8030822776636798;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KWPXFTLDBBEWPJRJOINYWDNSSMOCHLVVHVIPAKNVEDYWDCETUJGTPYARSKZTNJOBBHHZCJCRUMDVWYFZJSQKOEFGCAGAQHSCEDMZGASXVRJJPYIBEZCYGFAXZLMDNZWVPNXUVXBBFIHMOGYXDLQZWEOLCQDZPUOFPIISTHRMWUGAUUTGBRKJNXXBLSEHPHOYLNIQMQQUIHLPGSITRMYBFWNTV");

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
    msg.setTimeStamp(0.3056313472589467);
    msg.setSource(61253U);
    msg.setSourceEntity(139U);
    msg.setDestination(63342U);
    msg.setDestinationEntity(233U);
    msg.type = 97U;
    msg.op = 214U;
    msg.request_id = 32148U;
    msg.plan_id.assign("CTEVCXTHJKEEFWNRWMCRRUYKBOQIIEOYGEDDUOKTCXGJVQF");
    msg.flags = 60830U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.014007405729926647;
    tmp_msg_0.lon = 0.2635195001863364;
    tmp_msg_0.height = 0.3490778790767213;
    tmp_msg_0.x = 0.9104124687626809;
    tmp_msg_0.y = 0.09085377207288359;
    tmp_msg_0.z = 0.6783808552640148;
    tmp_msg_0.phi = 0.843091458081128;
    tmp_msg_0.theta = 0.17453899754375768;
    tmp_msg_0.psi = 0.3283135666346412;
    tmp_msg_0.u = 0.6806562299291311;
    tmp_msg_0.v = 0.36068950532562205;
    tmp_msg_0.w = 0.3228678118284869;
    tmp_msg_0.p = 0.03818470309637778;
    tmp_msg_0.q = 0.5318909500311788;
    tmp_msg_0.r = 0.22140930718971585;
    tmp_msg_0.svx = 0.5277196246533981;
    tmp_msg_0.svy = 0.20099673030948784;
    tmp_msg_0.svz = 0.17517570391811654;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VUJGDXSORJSQGKDOLQIYQTEFBKURUANIPFTAFNVOQMWGVAHMTYSDQAVXJMBYFGCKMDPSZZNXGJXEZBISLLMDDJLHEHZWGCVMKJPCWXHYMOJNTARWTNXEOWXKPXWCRUSILOWLHGPATEONQGUCWYBPBHRQISDEQHCNLZTNEERGWKEBIOKUISCVOFLVFUKYANMRCABZZSXTTIFHTQBYVNHIAODJXUBMRDZYJVPM");

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
    msg.setTimeStamp(0.22839447528532242);
    msg.setSource(42264U);
    msg.setSourceEntity(162U);
    msg.setDestination(34034U);
    msg.setDestinationEntity(7U);
    msg.state = 128U;
    msg.plan_id.assign("QEYGTGXTGTENTZJEWSPXEFTFAZIGZVQFGXORASDSBDMOHIUWROIDYCJWIYQWQBTUXHVLRUXAEFNXUPGBQTSVAUFQBKRJAISEKQYVJXLZOSPZOSBFCBMCLWLWLNK");
    msg.plan_eta = 1025367489;
    msg.plan_progress = 0.6021155574956928;
    msg.man_id.assign("YXXLHGEBWGMQGPVAYIMSVOKPBCABSVPHN");
    msg.man_type = 56878U;
    msg.man_eta = 1964341911;
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
    msg.setTimeStamp(0.515267110081316);
    msg.setSource(16249U);
    msg.setSourceEntity(111U);
    msg.setDestination(32525U);
    msg.setDestinationEntity(99U);
    msg.state = 59U;
    msg.plan_id.assign("ERIXPMTAPHAGEFIFNEEFWSIUSOBJCRQDDLKQZLVJVSRIIPOQXBKUJEIRJKXTDQYIQOGLBWCFHANMNYUKMHGXAPAYNOMKPINMYUITGGEXCPHVRMDKHJRW");
    msg.plan_eta = 646102177;
    msg.plan_progress = 0.5511804251988833;
    msg.man_id.assign("MIXAGPFBBHMGRMHZZKYHIZTQIWTSIVPQUQVQVVCRHRVLFLJOYEOWTFYGYKFPSQHICSKZNIDERACWUBYMGHNLVMCDBIXAZKCMOWGDNFNXQXOJNTXCDYSTQWJXTBUYKUKCRZUOFIWZBMUWGVTXHPOVFYXIGDLCQDPFJRFGXUPEUDUEESEYXHDBEBPKTELABJNAONKLAWWPJHCOZSATBGARHJYOMWDJEQOMRLPJULPNRNQRZTCVA");
    msg.man_type = 2644U;
    msg.man_eta = 172699648;
    msg.last_outcome = 99U;

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
    msg.setTimeStamp(0.6326369455106676);
    msg.setSource(46621U);
    msg.setSourceEntity(220U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(182U);
    msg.state = 190U;
    msg.plan_id.assign("GKEQBGATSNBHMHOCGRYNEMPQTEMDITVJRRMMVOLYNAPIRWKVZHAQEAKANDQSNOXPEFGCQTUVNHZTHZJROZDIJIKNSMSXXQPLJVQOBNJAKNPRFLBLSWZDLIYCBKVIBKXRLDEXWOZCAUYOUCCVTDEWBJLPQDDWDGNFSXSRRFA");
    msg.plan_eta = -1898582937;
    msg.plan_progress = 0.847409746186315;
    msg.man_id.assign("CJOAORVUYRIHOATBNRUSNHMBRWSCLFTPXTYDQHSQRVAMWZOGHVNHQBGCUSKWJUMKDHYNFECKOGAQTWYJHETWPZYIKBDFBXZBDNIVLQWKUTGYVMRAFHJOZCAGSKHEYEKXFZCPPMWDAVXLPVXFIIJNZFGRSLAOLRNELBKDFXPCPWLQQQPUZIKTSIEXNANZGOOSJMACPEXCWBMZQJDXDRBOIRFYGWUEIBSFEJPLUMMVVZUCNDTLMVJETJXQKYG");
    msg.man_type = 56895U;
    msg.man_eta = -1353623470;
    msg.last_outcome = 83U;

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
    msg.setTimeStamp(0.19347365202801858);
    msg.setSource(46529U);
    msg.setSourceEntity(172U);
    msg.setDestination(7077U);
    msg.setDestinationEntity(162U);
    msg.name.assign("EDCTRQFRHJCZABFQYGRWQFPTQMVNTYKJIBVHXUJVKDMGLTWNIDSHTLJKOKLCAWJCGXXNOYMAHPSUQRFXBHJDOSDMFZNVYMBEJSXVHS");
    msg.value.assign("UVWUNXYQCZYVHBTYBOHOGNKIHIUBOSMJNIPWLEWPRIZUWODGOLQJGNVTRDEQDYPIEMLSALAPZTUCUBKXHFWAYKANTHIPXWGXVWIAFSUMTZOZKJWXKDMTBSHXAQGRZCZTGYTPLJKPCKHKB");
    msg.type = 186U;
    msg.access = 180U;

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
    msg.setTimeStamp(0.17810858665475515);
    msg.setSource(40837U);
    msg.setSourceEntity(223U);
    msg.setDestination(8523U);
    msg.setDestinationEntity(97U);
    msg.name.assign("WTWPXMUWNIGVODRDRTARADKMSVZERUIOJEJCVNUXJZYRZQCDAMBEOPMJSUYZLBRBNDBYQFIUXWCECSKTPJXBUGWMYQFKTOCQHOSHSISYYZLTWQMYCDAQSJWKYKZRUWGBKDSQLQNSFREGBBODVALGEFHODTEHLCRBOSHETULFCQVHOVIGNFAPBMEXNNFJGQKPVZCMALZAMXUTKEXXJLT");
    msg.value.assign("LWTIRUQPQVXOBEGRRDJDFHIFLPZBEEQUSWVNHEAMTAWAHGZUBTWASOYRHCIVSJVXSKBUYJDFTAAYQNZJUFKKLUSAJRPBWEHMLDTZCXIJMPLCIDOCFCYMIZDYVEEPYCRZOTXANONOXLX");
    msg.type = 175U;
    msg.access = 198U;

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
    msg.setTimeStamp(0.7645536568701602);
    msg.setSource(43929U);
    msg.setSourceEntity(145U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(77U);
    msg.name.assign("TIJHUMRKNMHCAJRZVBUDRTEGNIXONZQFHDHJKPYPBPVZJJDOBWNIJMKCQVAGLWXFRJJRKUOFHMIQLPLSIXZOOLKPMWASUTDXLQCAXBGVYSIESTUMZQYCILB");
    msg.value.assign("YQNEQWTVCLCRUVUTAPLLDCDLFOAANXNGGMVHSVEEBGUOKKZRDSIKKHYQSQWGVIWGXSBGDBBXOKPXPQUFEXJWS");
    msg.type = 35U;
    msg.access = 22U;

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
    msg.setTimeStamp(0.7216957923919699);
    msg.setSource(65467U);
    msg.setSourceEntity(131U);
    msg.setDestination(4957U);
    msg.setDestinationEntity(144U);
    msg.cmd = 21U;
    msg.op = 106U;
    msg.plan_id.assign("LFNIPRRCEOGJFOBJXKVYBXFZSKNSBWQCUREQOYQWPWWGWPEUNANMIAUXAZIHMVCUL");
    msg.params.assign("QXODYHLZFTJZLHTJIQZSCRMPSNIBOZXLGHHYPDGWZWRXUHRXHQOOFABKBDZOBCRGIMUYQTSWFABCJHGALYKWEWWRPPXKTBSENGZVOBXFCJMOVNQYCYJIEALYBJNHTVMMGPNFQPOLXLUWVF");

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
    msg.setTimeStamp(0.2905677080829855);
    msg.setSource(48462U);
    msg.setSourceEntity(247U);
    msg.setDestination(38111U);
    msg.setDestinationEntity(26U);
    msg.cmd = 23U;
    msg.op = 41U;
    msg.plan_id.assign("PFFPQCGZAOLLCASFBJK");
    msg.params.assign("NZVOMOTANPOKCDJEBPMFFBBBHBSYYFZMJCOLEYXQUFDTHBWZXXUMTWRWSSFSBMAMOSVJDXBGPLCWJKUHRXDLDAQCKTVOJNFKZVXREVXCAAIUDWLUGQUWKTEINRHSRMKUNK");

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
    msg.setTimeStamp(0.9711293080335048);
    msg.setSource(38247U);
    msg.setSourceEntity(161U);
    msg.setDestination(6162U);
    msg.setDestinationEntity(109U);
    msg.cmd = 214U;
    msg.op = 35U;
    msg.plan_id.assign("ZWZNONVPULQICWLRVXFFHBB");
    msg.params.assign("UBNOVPCETUCYFAFKCTXHPWLPKONVEBPPVAWABMEYYDHMQGFDTMBMRAXJPFXJLNWHQRWQTPJRQKJOIJKZVUPFHTZRMUTKYYGQWCBAOWQMMJFAGZQHXYBENVRKUKXS");

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
    msg.setTimeStamp(0.5714101287171086);
    msg.setSource(54259U);
    msg.setSourceEntity(66U);
    msg.setDestination(5507U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("XJDHYPPTQHETMFXGTHZFKDWBXNERURDWPNDZDFXBKWESUKMWUFJOKRCVOMLIRCDTVWCVAZZIPLIPVRTAXHGRJICNBKAZPINQDLLGQBLQJBNXCYIQHYEWYHSMZOBSGSSQDZHNXZSEBOCIUDJJPSLMFQTMUIYRLMMIUEGGEOFFGYALCHKVAJXTOSNOPAGTENHSVRAKAYXJBOWOLMGEUUJXZKDRTQUBNPWVAMLTCVUAGBHVCE");
    msg.op = 120U;
    msg.lat = 0.4242634894431212;
    msg.lon = 0.16935503499269744;
    msg.height = 0.005463789964862187;
    msg.x = 0.6299436857270083;
    msg.y = 0.13048286843372037;
    msg.z = 0.8215519481056069;
    msg.phi = 0.808754773745488;
    msg.theta = 0.1938577915863049;
    msg.psi = 0.22583758001733734;
    msg.vx = 0.022361717947125714;
    msg.vy = 0.4118113479362926;
    msg.vz = 0.6433861308369367;
    msg.p = 0.4169316917553044;
    msg.q = 0.5438941323527975;
    msg.r = 0.5011374829436325;
    msg.svx = 0.8062209619779787;
    msg.svy = 0.4651980925496447;
    msg.svz = 0.03591559125004551;

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
    msg.setTimeStamp(0.9725810816814648);
    msg.setSource(8U);
    msg.setSourceEntity(177U);
    msg.setDestination(2907U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("WRBAZXQTOJLKQZRHCOKLKDJXPOJRWKUNTZHUNTENTHJWNHPJHKZEDSVNXGLEDNVWSZGSBBBFIYHYLJUXVWZVELLPUALIOTRCPTPBEIMHNUGOYDCCGHXDXAPSCDNQZWBREUZWMIMOJAAPWSJFFYRTIUVFFYCYCOTMGKAPFAYMKBUAXGBVSCSZLQVDWOCMDFEFZKKMYPGPSJEIVNSMUA");
    msg.op = 117U;
    msg.lat = 0.7426242393272285;
    msg.lon = 0.4384658804495357;
    msg.height = 0.5127098902161003;
    msg.x = 0.4928954788407067;
    msg.y = 0.24472288693732114;
    msg.z = 0.006756331949855032;
    msg.phi = 0.5362261189792419;
    msg.theta = 0.7863009119485365;
    msg.psi = 0.44830327878064924;
    msg.vx = 0.628574088074541;
    msg.vy = 0.955276074069575;
    msg.vz = 0.6585073710846485;
    msg.p = 0.5580712829483254;
    msg.q = 0.2990813003408028;
    msg.r = 0.695085893925076;
    msg.svx = 0.016733929811335146;
    msg.svy = 0.33463267648159634;
    msg.svz = 0.8392028403803395;

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
    msg.setTimeStamp(0.1734655841490319);
    msg.setSource(9494U);
    msg.setSourceEntity(208U);
    msg.setDestination(57308U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("ZVUFERURTQZBAQOUKHZJGWROXGZIYLTBHJYZXBNHBGLDEGMBEOJCMDXNOYXNCHZJLCJMCEYUGDWINPVPKAULFDIHQNKRRLUVXLFFHAWICWSQDLCJPZNCMUDYQWWULSMSQXNJCQJKSUEDATGEATOVIEYBEWIYYDCZFPDIPCRGXXQVGIMSHMBKYHRVKJBVJXVIXPSIEEHSHQTMOOKVNWTTFFN");
    msg.op = 122U;
    msg.lat = 0.6512520817960915;
    msg.lon = 0.2688835083459771;
    msg.height = 0.7097373698854584;
    msg.x = 0.5123356229844174;
    msg.y = 0.7289797989008112;
    msg.z = 0.8429451933165152;
    msg.phi = 0.6810041989106173;
    msg.theta = 0.009989288195223045;
    msg.psi = 0.16594164061961303;
    msg.vx = 0.7602586303124195;
    msg.vy = 0.9427017380224048;
    msg.vz = 0.9664442353164279;
    msg.p = 0.03556452821161071;
    msg.q = 0.7059304623476926;
    msg.r = 0.4890955069884487;
    msg.svx = 0.5121716757599994;
    msg.svy = 0.8938635972142683;
    msg.svz = 0.5093925785512471;

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
    msg.setTimeStamp(0.7528554267696996);
    msg.setSource(49128U);
    msg.setSourceEntity(251U);
    msg.setDestination(44851U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("CNKLWEGARGGSDIMCDURLFJAWVQZEWIERFPHOUQUVJPBKXIYFBXPCRZELCKPXUHSNOWGRWJGNNAIMTBZVUYMZJMAXIITQKJHRHFPIUWYVZBTNMQESWLRPVQHRINLFSWPSCDGUQSOHLSECXEAZHOCNDJIZFXMDYNVHQOYWATBMEDHHFPRZTOSWDDMFJTTYPVGOGLXMVYLYBTKIBEBCKFKLYTCZDBOLAAEGKGBXQYZCRKTFUAUOPVJQDA");
    msg.type = 23U;
    msg.properties = 36U;
    msg.durations.assign("OYEKNAPFWDOWTYQLWBYOJZGGVXWEYNIJUIAZDTHVPKEKDEVWYRANCVIRDEWHLSDFVVTPIKZWSBCYIMWYJRNMGJPMTMAJOFRCTPASWMSHOIANNQUCGJPQRYDJHBBISNXCQCHIJEUXHPCUBMPFHGOMRVAIBLXQVTCEYIFXDAPMXKUSKFJARUCOGARBDO");
    msg.distances.assign("CADPWYWDFILFTXZJFNEBXHGBVDLFWFKKMADVCUAGV");
    msg.actions.assign("IERWUAUQHERCCUJFJFYQONWFFHKFVWREVLZSNDHUMKIOGCYVMLUYEYFORPZPABOJHVZBQCLWTPCJDJFZZLGVXVBZXICUBESFYESTOQSHTATERDTKUIIBMCYGGSYQCIINYKTPOHWXFAPRLSDTMKGQPSZYGEWROAVQJVZLBMWTTDRPJN");
    msg.fuel.assign("QIBBEVMHQCRDEYUBYYUPTIJEEBHO");

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
    msg.setTimeStamp(0.1334056539043691);
    msg.setSource(8322U);
    msg.setSourceEntity(173U);
    msg.setDestination(59646U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("BDJQAJVGFJHQKPSFNGAGXFERZZRFHWNTXPMKIMHKTVUYYLSZXXIIZXJXKVMWVOSUZKYSDUCMDSRXOUOCKOF");
    msg.type = 138U;
    msg.properties = 67U;
    msg.durations.assign("SIVNCHZQDLKSANDBGSPCO");
    msg.distances.assign("KDEPQQQJGZVYUZKFELXNBUTMNHWLJOQUQAIZXSOVCEHOIG");
    msg.actions.assign("WFXWUPAKYYRZPQLJTGQZYVBEVHFJQDMJQSIZVVLSBGTGUEODPAJXHFKHZTGXYOVROLWSSOPMCHLCRJRLCMDMJEFECOPKOUGUSBZWYNIQCNCXNSHDDFIHOIUOWCSKRUZVAVNFHDWGOBILTVTNGDISZE");
    msg.fuel.assign("SDYBMJYWHCVGOIRALUBPJOZPYGCERHDKUOKOQIWV");

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
    msg.setTimeStamp(0.7088359175588198);
    msg.setSource(33329U);
    msg.setSourceEntity(120U);
    msg.setDestination(2540U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("SZKSDLMNDHJFHKXMMKCEQFHADDQVXLYZOFKJLTVSWTOMJXMFRSBESKZTFIVZINYABEDLAMRIKZLPDXCYBKCQSCNROFBRITVEAJYXGARQZDXUNSWEZPOLGINRDHAWUGAMPCHBYOPQCFATJHYZYVOIVSOWULBHIKQWVCQHYWPPEO");
    msg.type = 176U;
    msg.properties = 136U;
    msg.durations.assign("OUAVHINFPEYBGZAAUGKRTFFTROLLRFEYCAHDPVSKDZCXFRWMQDNWGPKLBHJXDIJZOTWJLVDKNBUGNRPKUIDNXDEEEEIVXMZCPIOUCWOFUSTZJSGXOMEPXNKZMTFYAIEQWRKDBZHBYQKF");
    msg.distances.assign("IVRFZNBDLPXGCPSXODSNZMITHZETKTIMLYJOHC");
    msg.actions.assign("GTSCHYAXWQGMXRHJWWBPTANQZSFJBLFEZLLKEAH");
    msg.fuel.assign("QXOPQHFYRRCUGORTQAQZYLPMKUNSVJUVDXZISHZXBWAMUFQLKYGRKSNMMBEQSEORUAFWAPJLZSIHGDEKQQLJNBTBVZDOMUCBZYEMAJUAFBVCABDENCIFQTIHEKWUECVWOPDYSIRWTXVGBYNAXZBWMVNRWQKCSWXPIPVNVTETNRMJTPXUDPSPEUJIGZGYLMDFFZVGHTKRJTLKYYDPJNKOILHDGXIL");

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
    msg.setTimeStamp(0.5767138834617557);
    msg.setSource(2786U);
    msg.setSourceEntity(188U);
    msg.setDestination(17071U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.09307980514323955;
    msg.lon = 0.9261858061738746;
    msg.depth = 0.7498533423999172;
    msg.roll = 0.24744480162018467;
    msg.pitch = 0.4110289811831309;
    msg.yaw = 0.1984885787146733;
    msg.rcp_time = 0.2671775537614739;
    msg.sid.assign("LPWAWJWHDFZYGQAXBGPHCYQYQYGLWTLNGAHBPR");
    msg.s_type = 149U;

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
    msg.setTimeStamp(0.22355363313017662);
    msg.setSource(48060U);
    msg.setSourceEntity(178U);
    msg.setDestination(32781U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.08278984993210448;
    msg.lon = 0.24030860990606884;
    msg.depth = 0.061405995179655726;
    msg.roll = 0.7456576431383356;
    msg.pitch = 0.41302531490358096;
    msg.yaw = 0.8307676222161359;
    msg.rcp_time = 0.5948887676816907;
    msg.sid.assign("RUXCYOWQNMXXUWMJJBWTNYVDTPOZTXNLGWCH");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.018976406642101318);
    msg.setSource(28454U);
    msg.setSourceEntity(82U);
    msg.setDestination(730U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.8503739561390486;
    msg.lon = 0.5721810274200644;
    msg.depth = 0.3697304484879945;
    msg.roll = 0.2539794663512366;
    msg.pitch = 0.8935061691633139;
    msg.yaw = 0.988616436725064;
    msg.rcp_time = 0.561272722689561;
    msg.sid.assign("MNHXOIZECRACYUJWJNZTPATESKJNOBOMFZQGMXQHGRNSWFZTTDZMYUPEPNSLAEPMOOIOXYFRGYMQPWBRSLVSUFVVUYIUYSDBRFVSQVJEQRLYHIKTYOKBGLTDLBRWGXFNBNQCQHEJBKDMWFNKEAJJDEDYLD");
    msg.s_type = 249U;

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
    msg.setTimeStamp(0.45695839105991154);
    msg.setSource(63932U);
    msg.setSourceEntity(229U);
    msg.setDestination(35458U);
    msg.setDestinationEntity(110U);
    msg.id.assign("JLJUBTNKPMBREZSKEBCZEPROEQIHUNDDRHJLIRDVLZHUGYLEMTKYOCMZELVFTFZWQLEPRWQONXWQDXNVUFSHGQRGVKVGXYMBBDZXXFRJGLCWTCTPGGAENMAZIUQGQGRACCVELNIHFVBUDDIJFAPQJHOGZSDTSBOUPWFSKVTOOWNCSXDRAXFCHTUAIYZPQUPKIXHXBIDVASYUMSOOMMTLYCYHAZQKPMYBILYVRJEJXAWNHPFJKJAKISF");
    msg.sensor_class.assign("BKCXTATGUGAKPPEPVJLWZQDUBXELABVPNFAPOWGCMJRYYYCNQXXVEUCSDSOWTRKLJHWOZHHNYLYOFXLOBZXVERNYASDMDUCKDXCVLVLVWCWEKKHWKKJJVWNQULUZXYJIRGSJITTZSNHMMPCIGODOHQQSFGKQDIJFZNINYIPNTXBSTVEEMFLNZUQAHFMPSOESRFRVWMRUMOGQEUATAFQWDPZUIZRKDMDQ");
    msg.lat = 0.30891513724647146;
    msg.lon = 0.6130128247564944;
    msg.alt = 0.8101660004916854;
    msg.heading = 0.2944793111209608;
    msg.data.assign("UIHYISMOWQIQGSLFXJOJFSHEGBPDFWSNCKTEBEGWSMTENRHSGPNLQOXQDXIAULMQVVODFGCVDYDMBAXWHJIEXJRROFCUHUFWNJGFYZDTHOQRDOPIZCQCQZFZTFMURRAAIBAXYKGIDMWYNTNIKLDZRUPCXLLEWOCVA");

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
    msg.setTimeStamp(0.2978458165172996);
    msg.setSource(46735U);
    msg.setSourceEntity(155U);
    msg.setDestination(44915U);
    msg.setDestinationEntity(39U);
    msg.id.assign("ZTSNSCYJCZJJRZWHPOBNEDVCLDAAEOTVLYMUDAGVMJZJWYRPTXKCXFHFZIPKHFJTURYWNUDMJSMECXZHGWHFNSAJQCABUAPCANFIAGTITVRUOBRSVRJMVGZPLQUFBMKSVYUQGXROGGRIYYLTKRILOMK");
    msg.sensor_class.assign("WHBZLKMEZOUDHYOOZJBKSEGYDUAYTPQOAZKRRLVUCIUPORBJSQWUTSGYZVGRDKHRTVTHGMOFYMRVJPDFBKDJTYWDVLFIGAEVWWCPFOUMYLIVZNSYTCNVZDLCQBIOXLSGTWXSQQNOMCXKVZJNMSLLANABFJYPULHWWGSMQRPFIKAXQNBGRWKDJAMFXFEIEEBAXUZHCMIWQJEIUCMZXS");
    msg.lat = 0.022815711780213133;
    msg.lon = 0.12579295491956277;
    msg.alt = 0.5538471060867247;
    msg.heading = 0.2702836300166591;
    msg.data.assign("QWWWLERZSVFSGMXPKWBFYNPYPZGOZTKJZDUIVFRXJIXBHGYYLYILZHWBNKEQWGUJCOZTBPKIEEDOSTBNOAIDROMDRURDWMBQKAXRHJHAUFMMLV");

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
    msg.setTimeStamp(0.8940867899954736);
    msg.setSource(62448U);
    msg.setSourceEntity(213U);
    msg.setDestination(2497U);
    msg.setDestinationEntity(47U);
    msg.id.assign("PERXXTTUCQTUUSJHWYBKJEZZULGQRMRVWXKOEUCVPQNBNVZCGXWGCOQJUNRWQTYJUVVKQJ");
    msg.sensor_class.assign("IWOSHGHXGSYTJMLHKICFLYPYXNVCAQBLANXCJOMLEOAGCMPGZNYAHHRCLDSWGLZBEVFJJXUVFGIXFFVVZHNQCGDSYTOKDYUARWUEQSZLKKTJOJOWOLHOGCNRMHUDFQFIYTBXJVNURIMRJQEBRAQFMPKPZVOEIWTBUYSZDSMY");
    msg.lat = 0.035117129201621244;
    msg.lon = 0.5877194493844525;
    msg.alt = 0.13726071022996755;
    msg.heading = 0.9055130165820953;
    msg.data.assign("AYWQLKGEFHOSPXWTIQZLKGRPOUSPQMIYWYFRWPFQHJVNMPBWPKKANBXHZJOYLERWALXGMNZPAEPZROHLESRCJGOUUVDKTTEQQRFTKKJKRMEYFCNBONFGUQNQXJNCTZCOVYUDZKNUGGPEUMQJTFIAAGFTMYMGJSELUVCVMGOWLICIZDDSPVHEMXHSBJLQZTCDKTLVAABUVWBNIVRFC");

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
    msg.setTimeStamp(0.3615242594117918);
    msg.setSource(51935U);
    msg.setSourceEntity(81U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(89U);
    msg.id.assign("TYUNGORLWYZWZEIQXMRDSTQCWDAJOCMDKDOTKJSVIKPQFMIBMJYURYDBFXEJVUUAQIKQSHOGWLYOVANUPWEMDRTPSVEVSQZXIFZCUVJKUULEEIGDJPSGNFPFDGU");

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
    msg.setTimeStamp(0.01843688114520825);
    msg.setSource(60196U);
    msg.setSourceEntity(254U);
    msg.setDestination(4560U);
    msg.setDestinationEntity(244U);
    msg.id.assign("UHBFIZKCIKWSUTJQXUSNZJAOGVUZGFHEYRWERQNETQRI");

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
    msg.setTimeStamp(0.14134191125781548);
    msg.setSource(32628U);
    msg.setSourceEntity(66U);
    msg.setDestination(14082U);
    msg.setDestinationEntity(105U);
    msg.id.assign("DBLDJWZFCIQPEMOCFVQUYOGUFUUNXPZYFCXQUNGWQHAWYESYUKVOUH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PVMVXOIVMXAEZGZRWKURMZCDIJTONWQDHNOQMAEIOCTNSALYTCQKWKUOJZWZMQJEKUSFNQVBXNGEXSJBBVGHAZTKKATKWLWHXEAQMFYXUHDFJLCHOVQLWTPHBPUYLQHBLZIGSFKABDOVFNCVFQLNUWCPPMYMYPFSSIIAODROBSLAJTCTUGPZUXCTBGMXKMFVLCHLHPWREKINQ");
    tmp_msg_0.feature_type = 129U;
    tmp_msg_0.rgb_red = 88U;
    tmp_msg_0.rgb_green = 93U;
    tmp_msg_0.rgb_blue = 38U;
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
    msg.setTimeStamp(0.4608735268738854);
    msg.setSource(33358U);
    msg.setSourceEntity(96U);
    msg.setDestination(10195U);
    msg.setDestinationEntity(97U);
    msg.id.assign("KTBKXNSANJRNSBHPVHSLVLFZUERGPSCJMEPGKHPWFAHEOEJUAUGAT");
    msg.feature_type = 221U;
    msg.rgb_red = 170U;
    msg.rgb_green = 152U;
    msg.rgb_blue = 82U;

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
    msg.setTimeStamp(0.3750403588247354);
    msg.setSource(37603U);
    msg.setSourceEntity(8U);
    msg.setDestination(53250U);
    msg.setDestinationEntity(32U);
    msg.id.assign("FZWCCZFSLIJOHVUUPTHKNEKQNRIBAMTB");
    msg.feature_type = 4U;
    msg.rgb_red = 78U;
    msg.rgb_green = 154U;
    msg.rgb_blue = 151U;

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
    msg.setTimeStamp(0.3899208559381351);
    msg.setSource(56905U);
    msg.setSourceEntity(205U);
    msg.setDestination(59355U);
    msg.setDestinationEntity(77U);
    msg.id.assign("GXVCECINBGAVKTQYEKTGZAWLYFFQDDPSLUGFLJNKQSOCBIQUPOEUSCXLJJYRYKMUMHHWTMKJCJWLJWWUPMSYZBSWAHPEXROSCZDNNBRRMGAIZPNZXFUQWCHXKXIGSDOYIOMLURMVCPJHGOBVOLVFORTTDMNT");
    msg.feature_type = 113U;
    msg.rgb_red = 54U;
    msg.rgb_green = 41U;
    msg.rgb_blue = 182U;

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
    msg.setTimeStamp(0.24938086504332346);
    msg.setSource(57611U);
    msg.setSourceEntity(35U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.9761933233678628;
    msg.lon = 0.43354255044655765;
    msg.alt = 0.3717641667496545;

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
    msg.setTimeStamp(0.9098268627292366);
    msg.setSource(29242U);
    msg.setSourceEntity(198U);
    msg.setDestination(31770U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.25124101682555033;
    msg.lon = 0.3216786292120545;
    msg.alt = 0.9408450997188331;

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
    msg.setTimeStamp(0.8494719064026827);
    msg.setSource(47877U);
    msg.setSourceEntity(98U);
    msg.setDestination(50065U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.9607935182765303;
    msg.lon = 0.02446088921927425;
    msg.alt = 0.20357977076558964;

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
    msg.setTimeStamp(0.3124097069387688);
    msg.setSource(3296U);
    msg.setSourceEntity(67U);
    msg.setDestination(21834U);
    msg.setDestinationEntity(160U);
    msg.type = 217U;
    msg.id.assign("OVKRYCQXZICTRSQRHINUDEYGVORLREYZUPXMHLHVSQKSFIWNYJMXHJAJQBKDSQXCXWWUMTDHMPBDOSLEAVBKJARTIYLZWFSBRGNIARGHJGNXFRLYKXGMGEMUOKFQCCXNIUQSWJXSRUKBHIYAVDBSZEPLEUEYCCKYTMCWNCLBZEZHDLGDHNVJDMFVWGWTVIKTPPFPAAAGVWPNFWMLPQDOFOTUKIGLTJNHZJOPCPSTQOBATJZQVFBBDEFOAUMO");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 1893638542U;
    tmp_msg_0.status = 210U;
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
    msg.setTimeStamp(0.30898935362921254);
    msg.setSource(40952U);
    msg.setSourceEntity(51U);
    msg.setDestination(18658U);
    msg.setDestinationEntity(229U);
    msg.type = 53U;
    msg.id.assign("CVDXXMQVBBE");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.4553764905060331;
    tmp_msg_0.reason = 98U;
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
    msg.setTimeStamp(0.8982304796749436);
    msg.setSource(1674U);
    msg.setSourceEntity(69U);
    msg.setDestination(1117U);
    msg.setDestinationEntity(121U);
    msg.type = 124U;
    msg.id.assign("TRLVBDBNDQQPYOCCKYLBOPLYSZWBWLVCPVZAIKQXMWYJLBXESUMSZYEOULZGGQRYJECVKRRXJBGSBONRQDSESZPISCWEDTO");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 5197U;
    tmp_msg_0.lat = 0.45382567769657944;
    tmp_msg_0.lon = 0.3063603010406435;
    tmp_msg_0.z = 0.12928722392092373;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.speed = 0.9929474825419653;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.syringe0 = 2U;
    tmp_msg_0.syringe1 = 47U;
    tmp_msg_0.syringe2 = 213U;
    tmp_msg_0.custom.assign("PULUGYXEQWSWKLGMWEXHXOHHMIZJCNOJQLNSILPDFATNWEGYZSMMYTFRBWCQPELXAPBPTVSW");
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
    msg.setTimeStamp(0.5360704792691822);
    msg.setSource(51653U);
    msg.setSourceEntity(80U);
    msg.setDestination(12792U);
    msg.setDestinationEntity(221U);
    msg.localname.assign("BJBEASALBWCMBZFICISQIHXCYWEWFEDEWOJLDIZBUVULGNDLCHKXQJYZPEKLQXJQOBJKPIROBZGSFUGWIHFFYIZNWACPGMMIRATQXTFHPVOZESYMVCUU");

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
    msg.setTimeStamp(0.990650080473598);
    msg.setSource(30287U);
    msg.setSourceEntity(139U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(224U);
    msg.localname.assign("OPMJQRWHKKDUMFFEBWLZTAUMZLMZGYUOVLDSCFQLNXVUQUCCYQIZHLVXPXWMORBHIEFOKBMWNGNWHDAERRQSOYBFJVDJEAZZAAMXRINDWXJBRYBTAVGATXRNXTGKVMFWTHDNEOBUFQKDNGVODWSMVIMDICEQYOZKSPWRKXSNUQEKUXPLLNBYCIUFSGBJCVGPICBQXSAAGTTSOPTJKPKLGLUEHNHSEAIDTPJIJJFVRELYOH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IHXJPNRLNAFTDLGFYDHKAPGSMZJZRSSTVOKPJYBEVYYK");
    tmp_msg_0.sys_type = 141U;
    tmp_msg_0.owner = 794U;
    tmp_msg_0.lat = 0.3644575415443071;
    tmp_msg_0.lon = 0.00398045052554219;
    tmp_msg_0.height = 0.26292850652982047;
    tmp_msg_0.services.assign("JTKOFTLUSBTQYEZBCWVNJYOHLBLRVETBQWRNWKHRYGPDROCXOAUAADXUUJOGQFCZVFIFUQRANAQKAXJEWDOPSNYINRRFCVIE");
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
    msg.setTimeStamp(0.2763450077219973);
    msg.setSource(12822U);
    msg.setSourceEntity(177U);
    msg.setDestination(60465U);
    msg.setDestinationEntity(206U);
    msg.localname.assign("IHFVQGAGXVZXCWTWUDEOZRPEFRLLPCRCKPNOYSTQJXERTMFOTCIUVXYBQQGFKRFXKISOSPHJANEMEZHMRSGVCMKCFIFSMLBWAIQZJDKRBAWFIPLUSHVBOHQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JSHLRJABKHAHJAPTIHUTDKUYXPGVJYNCPNWYTUSVGGAIZLOIKEJRYQVYNGELXDGPAKYDUXBCQYHQPOGNLDQTSCIQEMSAZTXRXUXFNRBDMIFWGKZWVOIZAHYHBFQMUZRBSFOSDROHUYVORVMJQFFMVBMCLGULZXLZWTFSQJEDWSZFWWNPDVPTRP");
    tmp_msg_0.sys_type = 98U;
    tmp_msg_0.owner = 39063U;
    tmp_msg_0.lat = 0.6699041809563331;
    tmp_msg_0.lon = 0.809427594078077;
    tmp_msg_0.height = 0.027445265756486648;
    tmp_msg_0.services.assign("NAEUEEXZQCNOTFNZSDTIIWKAWWGRTOLIGFDICXSSKFBOCBKXUJKAWPG");
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
    msg.setTimeStamp(0.12464687333966684);
    msg.setSource(31689U);
    msg.setSourceEntity(205U);
    msg.setDestination(57768U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("OOQHMNAGDPNWLHAGGUTLERQJ");
    msg.predicate.assign("XUWOYSERAXSLNULKOIXPRUEMBMMKLMVJIWRYBYHD");
    msg.attributes.assign("IAILKFTMWCTXIJYLJTORBDQSKXPWHVXBAVRUPHIVCATCZUUTZNRFVHNTBMNCXYLITLPWQCDVQQHWOAYNEGBYWFSIUVEECASWRBGAQKJEOIGTDXBZAVZFGMJRPJNMYVIUUNQPPJNCZYQJZKIKQDBALLVAPIZORSCHMOZDFFPSYGRWKHVJSFXHNSSTLUBLLRGERJGOUHGYD");

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
    msg.setTimeStamp(0.3219440788296367);
    msg.setSource(60625U);
    msg.setSourceEntity(100U);
    msg.setDestination(34224U);
    msg.setDestinationEntity(115U);
    msg.timeline.assign("RPRGCMWZYGLLYCQMHBQKCZEDONAPHRBKFWVTKZOJTTRNICFRSHNVE");
    msg.predicate.assign("BXOVXTVTABFUQECBLHMKEVIPUHEQPMMBLQBEFSIQGCFUZKLUUUGZWKJSZXFMIYCXIGQMTWTJKTWNXS");
    msg.attributes.assign("TKECNMQMRTKCDJSFUZSOGKVLJFMZLLFEKBVYRVXHUCEZVEEKIDEMRWQYQSXJADYRDSJUKSAULIILUNERFDNGFZLDQUMQYXTHJQCUGPLJUTPWXEZTIXINHFGHVWDVYHOVFQXYTTKQMCHMRNJXWXTJAPAZEBOTCMWLVDBBLOYOHARBFSPCKTBYDWPHSSGJPEDIMWNFGZZVZKNYA");

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
    msg.setTimeStamp(0.7772415174233788);
    msg.setSource(17796U);
    msg.setSourceEntity(209U);
    msg.setDestination(5161U);
    msg.setDestinationEntity(2U);
    msg.timeline.assign("TOVFRXPBWEPDIPHCRCQIZHDEVNSCTJWCKTHHUQTSJLQVICEHTPPTWBOBGGCZDDXIMCLMEWNYRSYRMVJSXFFEOXEOCKKTBWUKMKABVAMEDUPHYITXIGYVENZQQCBLKOFJGXHNLJLRQAYVFSUVJDLYNYFOKLBURURRXA");
    msg.predicate.assign("JGSDNWWHRYONCUCXAGESGKBCIPRJIDQELEHPBITFEOMUPAEAJHZGQYEQZZPSFNHYCUUROFFJNWBSQPTZTZPZYHLOIXWULXTZOLMOAQBVEWJVZQTNYLFRPZUTSLDHTSKBUMBUCVHDJGCSYQKXDBUMCYM");
    msg.attributes.assign("TLXFMLOTZSGAOTORTUAVANADDSULIRBZWYCBRIMJOYMELKLQSTMAEPXHEVZJAMFIVHIRHQUGBBEQMKTVJTKIYFELHNHBDSDDCMKVIZEQMMDJLWOUERPWEOFFQWFUZUKJUYJVLBRBIKASIVZKCRTOCCFLFDQQPWGXZCDJCNRTN");

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
    msg.setTimeStamp(0.01959430694658426);
    msg.setSource(55459U);
    msg.setSourceEntity(36U);
    msg.setDestination(43098U);
    msg.setDestinationEntity(98U);
    msg.command = 155U;
    msg.goal_id.assign("JEFPLLLNWLYYKKTDFRIBZRVKIUPXOYSCDQROGGSXQGQNOGXZNEFMUWOTRIWPTNQWOGTMASIBJJXEBUOWAVSXWLGDNZGTBFFLYNEKOEIXHYSVZHZMMCMETGAJFQTDQWQUKXUTVXDVSBQYIBNHRECLHJPKPSUPVPDODAVQKERHRWQPSXJFHDJZRPJLBMUOCOKIYMCBNTZHSAXAAGMCGACHEJYIMZTKAFDVCWUUBJLHCNPCZK");
    msg.goal_xml.assign("DOTCRVGUWEZCMEOVSPLRQTZWKNTFJQBDHUCWOESKKVAMKHOYPEJLLVWLQNAGBIVAIZGJHNGOWHYZYQBDXYDTSSKFCCFYMIBQNFWBLRUPRIZOMSQASDRBVTKHUHHLXPZKFRSWDCCWAYNRCLXUXQTELMUUIDTEWRASOGSIBJCGXAFUXMTZFAKRZEYD");

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
    msg.setTimeStamp(0.9405209355657856);
    msg.setSource(32507U);
    msg.setSourceEntity(107U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(56U);
    msg.command = 31U;
    msg.goal_id.assign("ITTKXVHFGUSBMBYJCMCAKZQQBXKYZLYNJFVLFDQFLZEAPBZEUWFEULRIZLVMDVQJYSP");
    msg.goal_xml.assign("NCOSUQTUDIIKLYIITVAXLSSXPGLPNZEY");

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
    msg.setTimeStamp(0.6598269768139564);
    msg.setSource(28600U);
    msg.setSourceEntity(191U);
    msg.setDestination(11164U);
    msg.setDestinationEntity(131U);
    msg.command = 58U;
    msg.goal_id.assign("GANXVTYZJDVRHNHCRPUXFMTWZJQOXWKOA");
    msg.goal_xml.assign("UZWSTKZULYGXEHUXAREBVRBZOABMADFWOTJARTKJTLYBCCFLZQSPXGTOEJFMPGHCI");

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
    msg.setTimeStamp(0.7543802137669958);
    msg.setSource(27321U);
    msg.setSourceEntity(137U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(185U);
    msg.op = 198U;
    msg.goal_id.assign("ZSYMAJCPLYOBDKYJNHARPHN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HUGUHSWMXHOVQLKLURFHBNBDTUIZAHLJBCCQABNKTMKSIOAQLXVKDGSIOEQDYHRLMXYBIZDIYJBCQG");
    tmp_msg_0.predicate.assign("XSUTFCJDKQZYFWYKOSLZIMOBGCIAFTYPLGSOGJYOXVSXVXIFQHXJNYAYUKNMRQVJITKQDKWMGIXIRPWGULOHSMTRQJTYKQNWKOXLDQFZUFNVAEVBRUGWOXYIDSJUKHRSDBLMUVCVASIRJNTENCHSUJXMXJPAQANESBPTWFOUEBLTAODHRWZCVUBEWYAHQCGRIDRNERBE");
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
    msg.setTimeStamp(0.13224679082859958);
    msg.setSource(11379U);
    msg.setSourceEntity(199U);
    msg.setDestination(23416U);
    msg.setDestinationEntity(80U);
    msg.op = 72U;
    msg.goal_id.assign("RUJTFZBVIWJHHHDNYVUUELEDKMUSXWDJEENDQBZJZJMENMXIRMQOHZAASKCYVAQZJYZNTTLVSSJOEXFYRYJRRGHFBZFGUKBARFHVCQMCCSIEMZPASGCVLOUGFWEYLSYFDMVJQQFNKPPGYXXNNUBTBHBGHTSPAWCMKHXPDZKWWMQCLVMWDCKIQWLQWDOPGBAUOLOYBAFONSBUOPZDCJEUETTPVGKXFVRGIKTINIRGIONPLAOYDALIPRQTK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OKTECVLZCEMVBAYQTPPCWUASJRWCZOJYKOQMCONNCZXXMEVAFYWWIBT");
    tmp_msg_0.predicate.assign("BYDYOGLUNJXUUWKULMJHDRMHGHYPWCXOVBPOXCBBVPVWOFTVQXLICDLBNQBZDKYLBSIQQRZEGPYLECHJVXZTTTJAZXPJGFSMKYAPGYPSKUKBWEFVNRSSAALGDTZXXWUNXVAZGHBQTWTIJUTCEE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WVYWTKUHSPXJGAJAAOOLBIOKXSEEDHDOHLVAJJYNRBZRUBFPBQJGUCQMKPCCPRCBTTYIBEJMSMFQIZCWLMXRISNFDRVQWZCYWDSYPF");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("ABSWJLYQSWBOIAPEDCEAJHPSBLQYPBAMKHOSOCJDXBPIAOIVTUZFQTOFBKUTUZZWXKXENCRYFVQNTIDEAEYEVQONWWJPYGJTKKKMJWC");
    tmp_tmp_msg_0_0.max.assign("ZVDZWFCMNHMVPDFYCOHUDMQAWMOYMVEQSNNWTAYJEOHXTRZLSVXWGDCUGGEQPJXNHERAATEPKKNZELBPFUVFTQYETHTSEHMQNTWCRFLYJGEWSGPDWUFVLUDBRRZZGLINBWJJCD");
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
    msg.setTimeStamp(0.8065727268998364);
    msg.setSource(46507U);
    msg.setSourceEntity(254U);
    msg.setDestination(59516U);
    msg.setDestinationEntity(107U);
    msg.op = 175U;
    msg.goal_id.assign("JLFTYUFYWEBJVPLHQEKUVXKDUONKHECLVPNVQRYWSMCPOXIJJSIZXZXKQNVMCHKQEHKEUTYXHSNJIZEUKYIMGWXFGVDDQZPBCXWHAMCTAZGDVDRIUFLARBHTX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HEIWRSELLRHZMANMQNAMOGVDSLBVQJSTSBAMYUNHWPRVSOMQMWEGTFVNGWGRBMORCWEE");
    tmp_msg_0.predicate.assign("CTWVJUGUVETGHOIHJVELQFGOHXZSHIRNRJEYRJESNLHNVBLWZSRMRADCDJULUYBQOXZFDFRFSSPXDOLKCWHKONO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NWIOAJBOLDXTSDDWVXYPRCITVSOUDBOTQWUIHKCXDMDSWNKJRXIBMRJQVEELJLAJEDCNGMHHZFVVRKQOFTJXYZKCGHHNAGPUBAIBSHNEGCLFPSQSCTKQLQSQATLROEUUBEVMYPRWRJVJXMLJDOTXMUXMBRBRUB");
    tmp_tmp_msg_0_0.attr_type = 133U;
    tmp_tmp_msg_0_0.min.assign("QJFXOMVFUNWQJUIIOREKBALDLJVTUYZGCMEYLZICEQUHUDLWQALPKISPMJOKCSAZPSQJCCIPGFYITAOLABQPUNIQNZFYNRMRARFGLXOVNPDEZCRGMRVKRABUSHCZMXDKWLSRISNOTWENSTHKDXQSZPXLJFHYZLVWTXKIGBHNVNEHXQBGTWMCWEYHAMVEVKDSNIJHTWCOYFGJSD");
    tmp_tmp_msg_0_0.max.assign("UXQORGKVOHIDIHQJUBIFCLBLRJSEAUVKNYEJEHBWTNRYHUUSOSFELHSVZFQJHBAWQQNWVAZDQKODWYPSOYEGRKRAQFULGGNKKYKLFCXYBXPYVMMBNSPYMVIFDGNWVTMESDHTBXUDQHCAMOOFBGV");
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
    msg.setTimeStamp(0.32433280032791945);
    msg.setSource(7199U);
    msg.setSourceEntity(153U);
    msg.setDestination(40700U);
    msg.setDestinationEntity(152U);
    msg.name.assign("HCIXIUFSRYDBGXFDPAGQKKDRZHFGMFUHRSNWJCSNNLKWBNPLBMSPJOUJXHEEYJVJXBXDVUTRUCKYFZQQQGVHGOAQVBKFBGLDMJIPASYQ");
    msg.attr_type = 178U;
    msg.min.assign("VTBMZOQSNOBIEKQMUDEFPFKRHMUPRPCKGHHGORISSSCTXPCMQMJNCDDXLV");
    msg.max.assign("FSVVVDTATCCVFTYBPAJSHJXXRKGFMLFECLSMRNMGATEAXWDWTUUIRYXBJZPSCQYWOYPHFPMUJQNKHULQDSGESFYBNHMBXKXDOZJRXALKCOSNCWRIIZZEMKDWVQUYBPWGTDEMOXGWZCGYBIAFPVPZOBMYGVCGQOHNLUJHVQNAJZPIWNTUGDOXNEVJIZZDLBBCVKRTRHEFOLRAILYXFUWWGHRKKMIZJSIJQNUMHBITHPSRUYOKDKSCE");

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
    msg.setTimeStamp(0.21299426924389742);
    msg.setSource(52029U);
    msg.setSourceEntity(5U);
    msg.setDestination(23844U);
    msg.setDestinationEntity(39U);
    msg.name.assign("PMHJZYZJYSYAPUTDGNGORHJXDTKYAAFZVLNVHNRSKMTSRDFUAHRESQWDEZWRDFBCNADFMLIXTZGCTRCLXFAXGWPYMLBVYKWAPIMZIWKTRNPEOEOHKRVGPPQPCHWNLKTBUJICJSFDJTYVLEUMVXGNUQOFOZSSXIGQVFXDIHQGOZYCWWNBEXIEDKUCBVAOCZFNYFDI");
    msg.attr_type = 74U;
    msg.min.assign("TNECSMDNATXPWXDOAIAEMOFWAFKPXLRZTHXXGZEWHAVLBEOVUIZRYDWSFTOWIZYPPWTRQPVOGTVEYSBDSDXCMDMVCEYRSCOYZOLXCNNJVKSKIABQRSJJUWAKBAXIDCWOUFDHYTNKJENVQRFLWRBLHMMIYGVYFOKLRNSHBQILZBPUHYPPEOFMGFBSQUWHRTJQGZXIQJLNZDCESKTC");
    msg.max.assign("USQKBCACNYGXGULZBCWHDJLTGNNAJLYUQSJIGKPSIIUKRDELNSZCEKCSPBGEWRQYYNZVZUFNGVCIVPWIRHJPOLWIOOACMWXEWAOBOXIJFQKOXMSVDYCES");

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
    msg.setTimeStamp(0.802636567562755);
    msg.setSource(18815U);
    msg.setSourceEntity(156U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(122U);
    msg.name.assign("KMARRXCZYPSIEHVTPUBGLOWALCNFBJZMIOKDYKMKTFUDDLEEJSSUGQXAABCMICCXHSPMVLRMQUWYDBWFOYPDOIUPNQVWYOEQUETOZDYWHORXTQWHTVQYUZKYHRZWMBOHK");
    msg.attr_type = 39U;
    msg.min.assign("UTNTAMVKEMMZNBTSCLOQVWPCPXHUALGLXYDPRWRYOHWBINDBIWUTTRIHHDSQNJPPCJOVIFVXTSSKSQAZEPRROAOUDOKPPJHBKJIZJBLAGNLXVURXIFXXCFUQLCEKIFWVMCBOXHRCKNCZJFRGYDYZCOLGFQLZQFV");
    msg.max.assign("SQHYGTCBSVADHMIOUSLMROKQNWUINXNWBETGYIZDVXZVRKYPMVXIYFZTPCLEUCEJBBQLOAMHVUNEXIAPFLKGODES");

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
    msg.setTimeStamp(0.600109894293943);
    msg.setSource(3143U);
    msg.setSourceEntity(164U);
    msg.setDestination(18551U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("EDIUXLWQRWGCPOBSLFVIRMHXOSQSZMLQJPNZNZRMNCXEYOHVJREMDZGKTAEFHPNMWYI");
    msg.predicate.assign("HCZVLGCFJNRIWXZZLYAMZLMJAAWEEDAIUBKUOXHEZYYJJCJSOFSFSZGGEFQKPKSERUVKYBFNPXQYMSLNOILOIWQXXQTMISDDZOBXBREGRUACDPGFVBTLBVYJYFDZLRSCSQIXKGPUWDTUZNMMIHQS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HJAWJUMONHFVNGQQATXWLHMLELWWRHGFCXJEEMDRSUDCORNOOILCNBVCLBWZOVDZPVPPEEPMBDKKNXZOCHTOYWFLHIVYJBHWUXSDIZNUIAUHIGUZAHXL");
    tmp_msg_0.attr_type = 90U;
    tmp_msg_0.min.assign("WFPUGDAHPDNYMDECUBBFWTAWLUPJXUISTCWOSUNBMTYQZATIYYZRAHIVHPVXSCQFLCAOVABILAGERTIRNLFXBNPRODDUQHAKQCESVJMFIOYUNDSWQMRRIEEYZIPZXJKPXYJSMJHSVNXUJUSJGFCZDCAGJLPGHVEYVTIGQONOXVXQFQJMMHRDHBGGSIKTQEPBZERTXFFKWBMBGEBSWHMAOTLUYYEKNDLWCTOJKOPVWFLMNCLZKRKQZZNV");
    tmp_msg_0.max.assign("APRIMWTRFEVXOPJQKSSVWBNLDBJPRRSKWTYLABXZENWZDBWRLTBQIXTWVHYOZEMSTPVORYV");
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
    msg.setTimeStamp(0.27150338051033707);
    msg.setSource(48180U);
    msg.setSourceEntity(57U);
    msg.setDestination(17844U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("WKDZMHNURDPWHM");
    msg.predicate.assign("POWXKRQKFIGFJLWXWLSIFOTNLXRFCGUNQBAQIAKNUXUDRFJVJSSMHWNROOJVHZCUKMMNAIEGGQBJTBEJIBPUNSIDQAPV");

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
    msg.setTimeStamp(0.3383627240875423);
    msg.setSource(46751U);
    msg.setSourceEntity(126U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("RHVAEHNJXYSOGPLBDUZVPFGUIPLWNHRQXODYH");
    msg.predicate.assign("JETONDRXMYXLSCFATWBJCBHQLRJODQALSLIAFQMWZECYTODSMCHVQSSAXVLDQBNPPDJEMQFIWIZKVMUBYPRPTIPMWCKKEXXBXFFXCECDVEJZPBFWZLQGHNBTQVBONPUNYGTASKHHRUUUTKETSOIVFPUWJTHGANCLGWEYZHYCAVIDZGRPMXGQNTLMVOUR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZOJADEZTXWKYFRSJBOEKVOXTLYHPRORFMDNCGMCKENUUUEWZVHYYZZHCTSLZBPAFKHZMBIAJKKENHYQLPNCBFTPNGQBFRXTUXTDDAOMFGTOCLJNPKWMLHLVDGUVIKRICZRTVSZIQXJGSLNPUUFPSPPKWNSRVJWSAQLWXTQYWGYESHSIQYJHSMMWEAXZWGGBTUIAVCVYJVDQFNBAQ");
    tmp_msg_0.attr_type = 140U;
    tmp_msg_0.min.assign("NMUFLNHIJHSZDCCVIRXBLCDKMXTGFWKPPXEURFJKVLRZSNLORGRMPOMKOFXZUYORGYQYLXRBAQPCHADEIYOMDAJCFJAYQRCUNFLIWZWTHLMNPHEXTVEHDHUWQPZNQWTTSBFKPEDITUDONHQLBUMOWKEQGXEWKGFCBABDVNYRJKPGAEVHWDJPOJTHZ");
    tmp_msg_0.max.assign("MZCWCWWQNRVWFBRPXUMGRORDKFAEXG");
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
    msg.setTimeStamp(0.5603646860989303);
    msg.setSource(29011U);
    msg.setSourceEntity(63U);
    msg.setDestination(46008U);
    msg.setDestinationEntity(82U);
    msg.reactor.assign("ZFCZOQZWGRPQDENJZWAPSIGCUFIBKKEJYCNEWXTYNSEAHHKTVSADBHFWTODLQAUBDCRQNUKKEROZACGKMVLFEZROIVPIGEFHIWUBRCUFNEMHHRJXVDWOWBMQXFXSJYNYWMPJXIUINSZCYBRDUWOGPPPKCHCDEPJLGETLJJVANQGTZSTYMRDANSVXTAZIUPLSYOSPLXVUOLNXTXKLHMMVOILGFRFGAAKWVOQGIDJQTLTSFYQCHUMBVHBYKBR");

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
    msg.setTimeStamp(0.6201536178991411);
    msg.setSource(22804U);
    msg.setSourceEntity(28U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(124U);
    msg.reactor.assign("EIVKVCIJLBQTONWICALRJSXRTI");

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
    msg.setTimeStamp(0.15501547645813574);
    msg.setSource(60005U);
    msg.setSourceEntity(212U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(77U);
    msg.reactor.assign("BBETLCBAJTVGJAWDOVWZKGFFQHXXMGPECMSY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EUGQBAFADLLKFYQFGQBGOBQHZCZYHHNUMKGONENNOSXMVJSQHQLWHPRVUMTKIPWXRETOPLWPIAAFDJAZNVRYJXAMJKCDDJVKFSJMMSKCKWIOUTSZICEGZVYUPIWLZ");
    tmp_msg_0.predicate.assign("SIWZBKYWLAPEIFDPCMYMYMXVALVRXFXKEJUVJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BSGSYUJEISQFMVRQINCNCNXRQFZFKRXRDOAYYGDVLHOYHDMFXIG");
    tmp_tmp_msg_0_0.attr_type = 137U;
    tmp_tmp_msg_0_0.min.assign("UFJHHREKJS");
    tmp_tmp_msg_0_0.max.assign("JBDGETLIGVUCLSUAROXPBNANGNSUZNVHZDQVYEMCKCACJOXFMKFSXWYJSHCPIDRPCWYXKRZGVGIKBWDGVNLBIYEPHQUDVHXGWKOSPPTROACCIKRJMBMDYCFTWJTFKGLEAERMSGATVSEJFVSUBYHWFZNWYRBEIQYIBPLOUCHNLSQXZIWOMIUJUKTNVUEYA");
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
    msg.setTimeStamp(0.6703963087523634);
    msg.setSource(1409U);
    msg.setSourceEntity(166U);
    msg.setDestination(25661U);
    msg.setDestinationEntity(27U);
    msg.topic.assign("RQWYNXSPZZBEYJMAOWMNTXBJIZHPDBBGANVVSWRAOAXDJXOFZYKZINWJTUGZYAGRVQICTCPSWJQSRLZQJOOIPGSUEWXCKAXTD");
    msg.data.assign("HMRJHBHDYFJOXLCHEZQXNZKJSADNOMAZBFGIKSEPTLHPOUJRPCHCYWJSNZMMVRSYKLOTEDMMOGHISLULPSAATPUMICBKOPCZODCQNWRFS");

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
    msg.setTimeStamp(0.15546034014760335);
    msg.setSource(21926U);
    msg.setSourceEntity(103U);
    msg.setDestination(16966U);
    msg.setDestinationEntity(172U);
    msg.topic.assign("ZBCFHLARJSPYBPZRNPLAHMFWXJWJCFZAAVXFISWGPQIWRMFBRKQDWKFUZUXLNQSXBJEUDQVQDQFEKVCYSTRSZNYZACTIAKMORDYZYPCKVPINGNDTTFEMTYSUJGOIIVBXVLOXMBJRUSZIAYHQLHVQTHMMIEEPBQOJMKTKOPVWSSEYGHFGZESVDCGHRDLLDHRJCZUOVLUNBXXWOECPEGUDIBCAXRUTWLOGINQFUCKWMEDTKNPAGYLBAYOJXM");
    msg.data.assign("ZFJHARUGKBRPLICYAVLMXYRMKDKMEHSMFGYPBZKRZUCZIVGLSWWOIQXVELFEPFXWDGOFTJIUXZJNAUWERGLHRGRQXCUDZWESMWCXZPTYAHYBCMAOHISHXODQKJLZSQEJPV");

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
    msg.setTimeStamp(0.16931477389533822);
    msg.setSource(56672U);
    msg.setSourceEntity(37U);
    msg.setDestination(64967U);
    msg.setDestinationEntity(26U);
    msg.topic.assign("LMXUGWZIJHQICSZSFSUQLOBDHVVPLFVARBEGMHYDBXXDUSQZARGGOTECWAIUOQRBSAJWMFPNCRJJD");
    msg.data.assign("CXMMDLKOKJUSYJZNURYHXWEAXLWJUHHZKMCQOTGCQDMBMFTANBQXNFICIRRKLUB");

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
    msg.setTimeStamp(0.5586879293079566);
    msg.setSource(41992U);
    msg.setSourceEntity(166U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(241U);
    msg.frameid = 153U;
    const signed char tmp_msg_0[] = {82, 1, 56, -9, 112, -5, -60, 58, 9, 10, 39, -94, -1, -100, -8, -13, 109, -128, -93, 17, 59, 18, 62, 124, 119, 60, -23, 21, -103, 57, 63, 108, -125, -50, -114, -113, 95, 74, 48, 37, 24, 21, -87, -17, 5, 89, -4, -94, -9, 104, 0, 36, -119, 95, 63, 37, -17, -77, -126, 103, -124, -93, -71, -16, 99, 24, -68, -7, -15, -127, -49, 52, 10, -1, 67, 56, 55, -92, -50, 64, -31, 16, 79, -71, 10, -105, -123, -100, -20, 42, -57, -126, 123, -49, 14, -51, 19, -24, -38, -8, -13, 96, -117, 110, -124, 63, 123, -85, -4, 110, 32, 99, 31, -42, -91, 114, -46, 9, -64, -2, -117, -88, -123, -82, -48, -42, -40, 76, -89, -67, -104, -53, 116, 78, -8, -9, -16, -23, 62, -106, 53, -3, -57, -109, 71, -115, 108, 78, -13, -49, 114, 33, -105, 70, 99, 114, -58, -58, -120, -59, -21, -46, 120, -50, 62, 31, -120, -43, -49, -14, 76, 94, -107, -29, 126, 76, 63, 76, 43, -61};
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
    msg.setTimeStamp(0.0463627980423974);
    msg.setSource(20520U);
    msg.setSourceEntity(225U);
    msg.setDestination(30594U);
    msg.setDestinationEntity(168U);
    msg.frameid = 146U;
    const signed char tmp_msg_0[] = {30, -31, -17, 23, 29, 91, -6, -125, -22, 5, -4, 47, -41, 41, 43, -4, 35, -6, -76, 107, -101, 114, 40, 116, 40, -63, 116, 3, 65, 31, -88, 77, 34, -37, -90, -100, 102, -27, -89, -105, -116, 0, 92, -85, 79, 108, 69, -77, -113, 42, -53, 82, -46, 122, -114, -43, 16, 125, 38, -120, 87, -74, -64, -49, 69, -15, -40, 91, -112, -29, -123, 54, 114, 85, 116, -23, 87, -67, 61, -65, -114, 100, -127, -73, 4, -91, -46, 99, 32, 59, -31, -61, 12, -20, 121, -47, 108, -19, 32, 81, 59, -42, 16, 49, 72, 77, -1, 108, 78, 82, -90, -23, -51, 86, -83, 79, 53, -49, -76, -126, -124, -101, -38, 9, 87, -92, -40, 123, -4, 96, 22, 102, 45, -6, -85, -89, -122, 97, -20, -29, 124, -73, 32, -118, -48, -45, -25, -56, 6, -80, -108, 63, -76, -126, 77, -119, 16, 44, -77, 35, 41, -6, 14, 105, -94, 14, -67, 33, 12, 4, 109, -84, 24, 39, -62, -6, 5, 104, 122, 125, -123, 37, 41, 88, 40, 26, 32, 94, 108, 18, 34, 37, -81, 95, 27, -57, -8, -126, 24, -85, 82, 10, -88, -69, 107, -33, 4, -123, -83, -68, 101, -37, 97, 55, 102, 65, 89, -98, 80, -68, -48, -53, 7, 52, 17};
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
    msg.setTimeStamp(0.14376828090516325);
    msg.setSource(43186U);
    msg.setSourceEntity(212U);
    msg.setDestination(8630U);
    msg.setDestinationEntity(32U);
    msg.frameid = 144U;
    const signed char tmp_msg_0[] = {30, 126, -121, 77, -60, 12, 64, -72, -60, 12, -64, 81, 89, 115, 106, 17, 7, -49, 85, 48, -14, -69, 117, -70, -126, -59, 101, 48, 71, 2, 9, -21, -127, -91, 9, 104, 106, -53, -78, -3, 61, 104, 25, -51, 53, 2, -44, -38, 17, -25, 7, -15, 45, -95, 93, -111, 106, 29, -125, -7, 102, -29, -53, -28, -63, -60, -86, 4, -48, 68, 11, 36, -121, 105, 119, -23, 124, 9, -2, -81, -68, -58, 19, 119, 119, 37, 29, 14, 68, 114, 112, 108, -82, 90, -115, -43, -126, 116, -37, -20, 4, 59, -112, -37, 101, -55, 37, 101, -85, 55, -57, -48, -84, 98, -71, -24, 0};
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
    msg.setTimeStamp(0.024063252290523862);
    msg.setSource(51086U);
    msg.setSourceEntity(94U);
    msg.setDestination(25988U);
    msg.setDestinationEntity(221U);
    msg.fps = 59U;
    msg.quality = 245U;
    msg.reps = 42U;
    msg.tsize = 35U;

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
    msg.setTimeStamp(0.0459309128430353);
    msg.setSource(42769U);
    msg.setSourceEntity(19U);
    msg.setDestination(38958U);
    msg.setDestinationEntity(246U);
    msg.fps = 6U;
    msg.quality = 95U;
    msg.reps = 53U;
    msg.tsize = 185U;

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
    msg.setTimeStamp(0.41037994875900985);
    msg.setSource(46621U);
    msg.setSourceEntity(188U);
    msg.setDestination(8821U);
    msg.setDestinationEntity(171U);
    msg.fps = 221U;
    msg.quality = 128U;
    msg.reps = 151U;
    msg.tsize = 240U;

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
    msg.setTimeStamp(0.25692537838404617);
    msg.setSource(52053U);
    msg.setSourceEntity(206U);
    msg.setDestination(33979U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.9467911783770151;
    msg.lon = 0.5389180532278358;
    msg.depth = 114U;
    msg.speed = 0.004299553818799429;
    msg.psi = 0.9320952103003324;

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
    msg.setTimeStamp(0.698748136081225);
    msg.setSource(47164U);
    msg.setSourceEntity(130U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.2419490020320103;
    msg.lon = 0.18748115510297425;
    msg.depth = 29U;
    msg.speed = 0.8929887001906323;
    msg.psi = 0.01779441336431986;

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
    msg.setTimeStamp(0.012376137585089708);
    msg.setSource(40214U);
    msg.setSourceEntity(48U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.17076334593181874;
    msg.lon = 0.06994734708551076;
    msg.depth = 201U;
    msg.speed = 0.3332716017977445;
    msg.psi = 0.13597690041619315;

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
    msg.setTimeStamp(0.3743759911222623);
    msg.setSource(42044U);
    msg.setSourceEntity(135U);
    msg.setDestination(38841U);
    msg.setDestinationEntity(93U);
    msg.label.assign("WUJREWDLQYWJJMUTDPSDNALFKMEPAKSBDISVDWFSSZCGAACMMYTCEHTJZUISNRAHYOOLRTYPYBPLDQBOXEVXYNQLQXXQPTKIESNNHPGMVXOKFFMTCXAUBOGDBMKNUHQFFPFJNGXESWGPIZJAQPJCHBPHVAEIERNSTOHUVLRIWBMCCVEIXLRLNRHVK");
    msg.lat = 0.7624370622110973;
    msg.lon = 0.2187186219786449;
    msg.z = 0.7463107523203255;
    msg.z_units = 231U;
    msg.cog = 0.0103365872337281;
    msg.sog = 0.908936824112279;

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
    msg.setTimeStamp(0.9860462756917749);
    msg.setSource(17102U);
    msg.setSourceEntity(172U);
    msg.setDestination(9148U);
    msg.setDestinationEntity(175U);
    msg.label.assign("PHMBTSNWQAGLUHPPOND");
    msg.lat = 0.8690696363975683;
    msg.lon = 0.021021833750447638;
    msg.z = 0.45586439299334236;
    msg.z_units = 200U;
    msg.cog = 0.7267578374281448;
    msg.sog = 0.0013047685296172506;

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
    msg.setTimeStamp(0.2701338169650691);
    msg.setSource(52267U);
    msg.setSourceEntity(97U);
    msg.setDestination(6632U);
    msg.setDestinationEntity(242U);
    msg.label.assign("GLNERMYWRIFZPKQEMFEIKYXDMJNHDWDPOQXTQCTSFLSRRQKHJHRAWXPYGFXDPTAQCSZMWLPPCZVIYTYBVMGLKTROXBAHJELBNUJCGGACGBTSRDGEBHTYKLEIMNJMZQNZVFKBLFIFYXQ");
    msg.lat = 0.6152615631176799;
    msg.lon = 0.10384768567878433;
    msg.z = 0.708846074545555;
    msg.z_units = 197U;
    msg.cog = 0.40643165494058797;
    msg.sog = 0.8919013079186255;

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
    msg.setTimeStamp(0.6462357198392708);
    msg.setSource(42829U);
    msg.setSourceEntity(76U);
    msg.setDestination(57397U);
    msg.setDestinationEntity(252U);
    msg.name.assign("JNLWYJOCMNWKXZTGYQFSAGPDTJMVVNVSJXDHHRHGEUIKWSRXVNRLPWDVCFAISDHDOLPWMD");
    msg.value.assign("UFDGUEXUSX");

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
    msg.setTimeStamp(0.8575423781325874);
    msg.setSource(56356U);
    msg.setSourceEntity(130U);
    msg.setDestination(36646U);
    msg.setDestinationEntity(175U);
    msg.name.assign("PEJBWDGDFGIMNTTCQXPJDUOVMXHYTZQDJYNQIIIRVEAYYQAQVMNHTNCMTIWGZPZVMDYCEWZSROKRNQJFUDGTGJHTKDNXZJKIABXGGOUSNSACXVCWJXDEHEBCALGSSBHUNFMSVPCIKKSLGDUFCVPOTBYKHXZYKCOJVFLYBPEOMWQUECAJEUXFRWRKEYXVSFJRIZKWUPWFWLLHZOTABQMIUH");
    msg.value.assign("PAOYPKEVQALECRMADPAROFQTCZZBRTJGBNFSLNZWOTFJUIMIITBYYYSLMHOQXPXYBMJDKAKFZXEPQCURKYBVNKMH");

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
    msg.setTimeStamp(0.13447273287045747);
    msg.setSource(59484U);
    msg.setSourceEntity(8U);
    msg.setDestination(45417U);
    msg.setDestinationEntity(4U);
    msg.name.assign("GHUOMDESIEVFZZJOOKWLXDXMTMQGZWSZNNHKNOLLVSZGXCUVYVDUJEGMGVDXVQNAOENLYKITTQBRVRNXQYJBGJXIJCLREDSMBYAYFPTXWC");
    msg.value.assign("EFWGFJELCDAOMRBHHPBUJRIOALY");

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
    msg.setTimeStamp(0.7891141000104919);
    msg.setSource(8473U);
    msg.setSourceEntity(37U);
    msg.setDestination(23839U);
    msg.setDestinationEntity(218U);
    msg.name.assign("WRIFSBERULSTRJUYEFGDLEAQYLSLQHOVMEOTOMPPLDSISHHAQUBHRCVZNUGLAEFVRBARSXDQUGGZPXINXAVRGOKWROGNHPFWEZNSOFPJIBCHDDJKAMAWACSBRVERJCQXCYKYIKVPOBEGWMNYLFJCBDTIETNLYHKXAVLAFCFPZJHJVXGQOWPZICDMFFKIUWCQHQNIUPUPJKXOWZTSVKTMGTDY");

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
    msg.setTimeStamp(0.4122050679290269);
    msg.setSource(65518U);
    msg.setSourceEntity(210U);
    msg.setDestination(25734U);
    msg.setDestinationEntity(167U);
    msg.name.assign("UTWBYPVEKWAXJQAFDMXQSSOYJDRFVFYRYOGNOLPMENTHMIZBPZVQICXECVRTGAKBCKDHNWEAMPT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BZKAXRZXVLUMLJJAIZQEFYCMQJQRMWQDOPHGPIMKYLZCTOENNEIETNYURVMCLPRHJVSYHFZYOFCDTOUXBMPUDJCZNAADGADEW");
    tmp_msg_0.value.assign("SYZRYIPGIHZJWAQOOBREXLLNADTGHESHTHTCPPOGFQKZMIXRPRVJFEKFIYZJBZBWVLVDQJAHODYUERRLTENMYYKCRKGBPNUSQNJEDBGYVQOQNCBPAZWLDAYBXMEUSKJZUUGLKMHEVGOXFTFIQTMPSAYVKXZHOQNZGLCNDTUNRSMPLCWAXHJDGGFSJVLIMUPIKFDMRXWEUCCAJWOLBTJVSIB");
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
    msg.setTimeStamp(0.07588434951959533);
    msg.setSource(57816U);
    msg.setSourceEntity(216U);
    msg.setDestination(37963U);
    msg.setDestinationEntity(147U);
    msg.name.assign("SCWHMREKCSPJOSFZASCVFVFKJVQDDECUXDYXMGWKBIBQDISLABWDARUANAWWBGJTXUEONQIVZPLEEFTBLILJCMGWYJZOSKFNQSANBIUUTWXCMUPLCTMFBOXRORLHEWDDDANAKPBZVHJVRMDDPYKAGRPNBTHFRWXNHFIHTKXQQOVOQMONAPLGPLIVVKPSNNFUSTIGSZOTGUZHZCTO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VYBALPCPZOAERNWNCJAJWBRDBUKFGHVGQVDROREZCLYODCSKMANMDMAINCSXQJRLK");
    tmp_msg_0.value.assign("XHVWVEWNBPKTQTYZEXJMYFMSPFHRHAHEIMCPNMVBKSNVIZDCBUXMQJRGIKKIUGWEOBWLOLUGMEHGAZYTCXCJTAISUYMWXCGVWSBFUPJYFQJXBOAQUHFNLRHDLNQLOEOMRUYKYVFEQATDZPELLVLEORGRBKPBSK");
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
    msg.setTimeStamp(0.10410047691687063);
    msg.setSource(58714U);
    msg.setSourceEntity(25U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(214U);
    msg.name.assign("NYJMPHGUQXXXXHJBHGRIQYTEBWPIOMPROZCGDFMCLEDZROLLAHSXHCICWEFQLBOSCUKMSLFBTATROECKFJABHMDOHUQJGSRLJBNWWEJVYDTQUNBSJWQLFLTDDFESUQUNVIWJWNXSZOKNOAFYTRNCDKQVKHMVBVXIAKTFPGSYHCBZZQKFZUSEGWPSLOXGDNKIWC");
    msg.visibility.assign("CXIHLIQQGMGBYHYAONAWHXDWUUYHMJNIAQXJVHYCRBDUNKXGBJQNRXPJYASLVTUUDSRKEUQFYVDDZTTPAKVUXZCFTMZWIEJGRFIPZCJYZSNEVVKLWRTHPBIRAWLKSBOZFLBGCUWCVWTBG");
    msg.scope.assign("GTSXOHWICRGBMYWSUPZEJRZSNNVXYTAWEQEXCIUBGVZKKEDDVFTSYWCSRKLKQNFLDJC");

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
    msg.setTimeStamp(0.9065102083373395);
    msg.setSource(14909U);
    msg.setSourceEntity(70U);
    msg.setDestination(9878U);
    msg.setDestinationEntity(179U);
    msg.name.assign("EVNJGXJUHQHVYRKLTAMGFNFHRDXYICUQCDZBAFGURQUVMOHV");
    msg.visibility.assign("ACOISFZOIVIZNCDMAJFLQFPTICUTROSZTEZJQFYUYUVLDNIZGTXSPBCWVEXPRWBSZEXTDRJDGVMNEEWCNHAABTHWWWISDQCPLFYKJRMVOXZQAHPYXORCPWXGACNWZMTKYJNKHDSANRZXKYWET");
    msg.scope.assign("MVCECZKVJACKPYWCHGPDAZNTVTKGYQWERRWTVUNERHONXXHCRCJODDLMWBIMZHYHPBPEUFATGUACHVLRIHEBGDKKTJTREXPVSVANYKONKNOUXJZYMNXAGQPAGJGYAMOQSEWFSSFXSBIMXFHMJDNYJIYAFSQGFXZLPOXKTZBRTEOLITIYUBXVOULZVLIHJLSNQLZWMYRGCJDSWFEZUP");

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
    msg.setTimeStamp(0.13646686209643744);
    msg.setSource(26218U);
    msg.setSourceEntity(203U);
    msg.setDestination(40976U);
    msg.setDestinationEntity(141U);
    msg.name.assign("PKWABFLGMNVGJOWOKQ");
    msg.visibility.assign("ONJRVLBSPIIBHUGIETMJJKXWUJGWXURWXPAINZUXESCPHNNHAFELCMZYSODVGTMQT");
    msg.scope.assign("USFOJLVXXVPPXMUEGATCYNMBUDNASEDLQTBAAAAEHGRSPEIZBRRZLYEVUILKDPUVKKSYMEJCQKGQCQDVFXOVHNACJRYKPBFLKXUBDINIYAPOBTZHVYJWZQRENQYNSMTBQMN");

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
    msg.setTimeStamp(0.7146955871193539);
    msg.setSource(44851U);
    msg.setSourceEntity(167U);
    msg.setDestination(28436U);
    msg.setDestinationEntity(189U);
    msg.name.assign("EMDDGBIDMAOLWTIEANVQBVAQCMVKKPCSCLZJWEOOJGZWGTISFRKJJNCDQTNTYSSKQNQHHJOPHRQXTTPVGERTPKBFBDNYURJNGLLQKMJKEUUZXTMJIUOLVYAHUUMLPXRINADAZJLNGPMDMFQHGCFRYVBXSSRYVUOMMQKXEIYTRBD");

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
    msg.setTimeStamp(0.8605457381699406);
    msg.setSource(64972U);
    msg.setSourceEntity(20U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(106U);
    msg.name.assign("UEYATIXSOWWPCRCVQJGWRABDPDYYITDLAKULQMPUGQXAWQDYSRJZZGCFMHQNFNVEXSMYEUIZGONFEKP");

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
    msg.setTimeStamp(0.11928555275420372);
    msg.setSource(11189U);
    msg.setSourceEntity(59U);
    msg.setDestination(21263U);
    msg.setDestinationEntity(235U);
    msg.name.assign("BDBAOJMTHHRCSKWUNFJPXFHUOEGRKMGSCDULSBIFKNDLBWPDQMLSZZVPHSLEXRWRKWFQQOITMBT");

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
    msg.setTimeStamp(0.8817619871376792);
    msg.setSource(44735U);
    msg.setSourceEntity(254U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(68U);
    msg.name.assign("LXLDUSKRSKZCBOLFPALLZDCNDREIECPVRNCQOTCNWVDTSFQSPOMOKIPWJZMIZMMQYHVEIOAZKSBPPDAUOUJBRDDWWFJHHXGHNEYMIJVLKYCGRDMGWNFQOGTMRIKXBSTFBPBTWEBHGYQFUAKYFJRWGZNANUZUXIXAAQGTHNLDRDTLSLKAPOTMVFTMOZWVERHXCHFNYGOSEEKQNZUEBUPYUSXJJPIGY");

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
    msg.setTimeStamp(0.6575161549914841);
    msg.setSource(13190U);
    msg.setSourceEntity(54U);
    msg.setDestination(702U);
    msg.setDestinationEntity(246U);
    msg.name.assign("FMWWBBXKJZBDZQY");

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
    msg.setTimeStamp(0.8376786927967966);
    msg.setSource(203U);
    msg.setSourceEntity(68U);
    msg.setDestination(47928U);
    msg.setDestinationEntity(121U);
    msg.name.assign("KXGNLPJDKDLIUVMGUFDMJTIMEQJASEBUPXTODOLUJYRJEZPKTQPAKVGAWQKRNUMQKSFSVFLSUMAOEGVYSRNESCZZVOSGTEZCVAIAJCXQTNDDUCMYPSCTUIXFPH");

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
    msg.setTimeStamp(0.04842985914229292);
    msg.setSource(33317U);
    msg.setSourceEntity(111U);
    msg.setDestination(34386U);
    msg.setDestinationEntity(99U);
    msg.timeout = 1078492585U;

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
    msg.setTimeStamp(0.07016437688265864);
    msg.setSource(17435U);
    msg.setSourceEntity(244U);
    msg.setDestination(48986U);
    msg.setDestinationEntity(36U);
    msg.timeout = 533058839U;

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
    msg.setTimeStamp(0.9281256359526437);
    msg.setSource(41172U);
    msg.setSourceEntity(71U);
    msg.setDestination(18336U);
    msg.setDestinationEntity(146U);
    msg.timeout = 1390860236U;

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
    msg.setTimeStamp(0.16293007251317948);
    msg.setSource(65193U);
    msg.setSourceEntity(62U);
    msg.setDestination(14073U);
    msg.setDestinationEntity(155U);
    msg.sessid = 2452837874U;

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
    msg.setTimeStamp(0.10350948899849144);
    msg.setSource(46291U);
    msg.setSourceEntity(169U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(97U);
    msg.sessid = 3995452495U;

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
    msg.setTimeStamp(0.26681646609345777);
    msg.setSource(45376U);
    msg.setSourceEntity(238U);
    msg.setDestination(26086U);
    msg.setDestinationEntity(7U);
    msg.sessid = 4053160146U;

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
    msg.setTimeStamp(0.15036134716812732);
    msg.setSource(53446U);
    msg.setSourceEntity(121U);
    msg.setDestination(40206U);
    msg.setDestinationEntity(161U);
    msg.sessid = 3086393463U;
    msg.messages.assign("YWHQVDMKNWHJSYYRAZWXONJVCVESKLHYMZAQMRTPUBAXBFWUBCYHFBZZAGLXSYCZXEUGBRISCDVFLOKIGSQWSFYTFOOICCXJFPJUDFIMNXRYDCTWVZEMGDNNVJEH");

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
    msg.setTimeStamp(0.05164937405398351);
    msg.setSource(19465U);
    msg.setSourceEntity(50U);
    msg.setDestination(23075U);
    msg.setDestinationEntity(58U);
    msg.sessid = 4182799849U;
    msg.messages.assign("RVXTHHKLOZIBVQFGNKLORRSMRHOTWKQNFAFSMOGRXABQUSJHFPRCDKMTBLUQACNFEYBMULTWOWDPVCJIYKZEGY");

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
    msg.setTimeStamp(0.45670798509952193);
    msg.setSource(28850U);
    msg.setSourceEntity(133U);
    msg.setDestination(27160U);
    msg.setDestinationEntity(66U);
    msg.sessid = 2649264654U;
    msg.messages.assign("WECAFLIYWQHEFDXUEJBFPKAQROZBOVOUKILKAZPSYJXPHXYEQILJTKSQMJITXIWGRWMNUKVXHFGGANKBHEQAV");

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
    msg.setTimeStamp(0.8419731308715072);
    msg.setSource(12830U);
    msg.setSourceEntity(242U);
    msg.setDestination(63253U);
    msg.setDestinationEntity(59U);
    msg.sessid = 3907334001U;

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
    msg.setTimeStamp(0.07381469841181498);
    msg.setSource(30694U);
    msg.setSourceEntity(208U);
    msg.setDestination(50031U);
    msg.setDestinationEntity(63U);
    msg.sessid = 2245833683U;

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
    msg.setTimeStamp(0.9022361273689455);
    msg.setSource(19783U);
    msg.setSourceEntity(28U);
    msg.setDestination(52490U);
    msg.setDestinationEntity(143U);
    msg.sessid = 3037851977U;

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
    msg.setTimeStamp(0.544663067373802);
    msg.setSource(4276U);
    msg.setSourceEntity(203U);
    msg.setDestination(53157U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3341370482U;
    msg.status = 236U;

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
    msg.setTimeStamp(0.7278274702497637);
    msg.setSource(46952U);
    msg.setSourceEntity(199U);
    msg.setDestination(25779U);
    msg.setDestinationEntity(107U);
    msg.sessid = 3796190362U;
    msg.status = 147U;

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
    msg.setTimeStamp(0.30461209183118254);
    msg.setSource(20096U);
    msg.setSourceEntity(67U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(125U);
    msg.sessid = 3940469750U;
    msg.status = 53U;

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
    msg.setTimeStamp(0.9881226195620375);
    msg.setSource(29839U);
    msg.setSourceEntity(217U);
    msg.setDestination(18826U);
    msg.setDestinationEntity(187U);
    msg.name.assign("XBGVFRWCWFBNIOCMWMKTTWRLYYUCXSZROMPLNXDMTJUTODRXPQAHZLPGQDKQBOAESJJGYXMJRVKKWKYTAAUVHVUBZRRESIALXQTBDLUFFNBMFNKSO");

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
    msg.setTimeStamp(0.016221437177066922);
    msg.setSource(22564U);
    msg.setSourceEntity(124U);
    msg.setDestination(37130U);
    msg.setDestinationEntity(138U);
    msg.name.assign("NVGINOPSLTWXFKCCQPZYSTVIDNMNJMXJQDEJBEKDRLDJCRVZAPDTVGLORTAGXSTGTAXCMBASNXWCVQOKPPZIBODHOWHYH");

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
    msg.setTimeStamp(0.28545754012545754);
    msg.setSource(6387U);
    msg.setSourceEntity(28U);
    msg.setDestination(48479U);
    msg.setDestinationEntity(198U);
    msg.name.assign("RMANASTYEOJTXMFZFSSHADOKRYUKPZDONRUVLIQHSVXOBTCRYHJDXCBOSLAGXAFGCNEJBWYWILQABOPQRWAUQUBACMADUMQDKPXDUWFYNXWHVDUYPFWMOGMPLYFHZHLEJEQPDNCRZZKNSWUMIWHKTESZVBNRTUGEIETJSXOWQKIRTRYKIPVHQBRLNVKXXYTBGCGZICEJZCLVILLCGSOO");

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
    msg.setTimeStamp(0.42971137436827334);
    msg.setSource(12938U);
    msg.setSourceEntity(124U);
    msg.setDestination(63756U);
    msg.setDestinationEntity(216U);
    msg.name.assign("VLPFBOZYKFSHTDEMMGKIHUSUNOCCYZLYQRTGFECREPHVAXTEEVAGZAHMNTKROWAWWAVPDJLIFGZSUPTUPSWTHVIMMAULNAXBLUGQORAUYQWJNJQMHKZDVRMTYWOLVQEWFBVJZSHFEESSCQKIIHNXHIJDZJPSRYCXDKQNOWNTOEI");

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
    msg.setTimeStamp(0.4086129534973336);
    msg.setSource(42442U);
    msg.setSourceEntity(116U);
    msg.setDestination(11612U);
    msg.setDestinationEntity(122U);
    msg.name.assign("DVJRREQOPWNWCRUJKRCYLXAXUHORDUWOKJHAWYDOHYHFLRFJUDGGOXCMNJTFCHIBQIAQGQFAWAZYLCTLOSIRFMPLIEEXHRWBUQPIGTLUIGNZZWEUQD");

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
    msg.setTimeStamp(0.8690228186083243);
    msg.setSource(55987U);
    msg.setSourceEntity(179U);
    msg.setDestination(2385U);
    msg.setDestinationEntity(46U);
    msg.name.assign("ILNHMDKXWSXPUVLBARCDTKYKEOXQEQUMTCGXYQXKPSIHAVJNNNGGSWDWUMJNMYMUPBVBQZPDLONEREZOCEKWDTKJHMURBPILCFJMSJGGGFTWZIM");

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
    msg.setTimeStamp(0.7741801345333883);
    msg.setSource(52131U);
    msg.setSourceEntity(128U);
    msg.setDestination(49003U);
    msg.setDestinationEntity(27U);
    msg.type = 109U;
    msg.error.assign("HNNOZFRENXWXDAPKQVGDEGCZAOBVJIWZIEKQLYQHPHSDTHUZLPMBSDEIEXJXEWOAGLTCGTICKJNODTNRSYHBFKMGUGTAFQNFPQYWVANLQTBCFYSVZMOWEYIMVHCFPWKRWXKBGHPIRLANTFXEQRJVPDVRDQJDGDXMXOYYSGKOXMIZHTZJQ");

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
    msg.setTimeStamp(0.8687668353798123);
    msg.setSource(27867U);
    msg.setSourceEntity(30U);
    msg.setDestination(29105U);
    msg.setDestinationEntity(41U);
    msg.type = 101U;
    msg.error.assign("YYPTDDIXTGDQBXQXDSIIQZCUTPUYFVUAQMKINEWURGYQDHVRIKMESXJNYJYQDOZBXFOMXKFWNLPPBNSFNVTPYWUHSZTSITENWHMEWCTRBKWSZRGJCOELRLTOHNLCJJEODOTBYBBHALUJPIFYSCNEUJCRLLWOIKAJCDRKFMQLSNPYBJGHMABKWKXCCZGKMVUHUPMAGARWVRVQSKAWIGXLEUEPACFSVORHOTQLZFDVMFQGHOVGFHAGPE");

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
    msg.setTimeStamp(0.8035611515283665);
    msg.setSource(39427U);
    msg.setSourceEntity(22U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(68U);
    msg.type = 207U;
    msg.error.assign("VRPOXJFNRKWYSZUBFXMPLGTJSCPFLL");

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
    msg.setTimeStamp(0.6127312966960266);
    msg.setSource(23087U);
    msg.setSourceEntity(219U);
    msg.setDestination(8849U);
    msg.setDestinationEntity(204U);
    msg.seq = 64137U;
    msg.sys_dst.assign("QDRPPWIOLNMCWMLNJOGABDXVLFIOTABHBZJTCCIOXIPBQXRWYUIQTKOFJATEDKWZSWBRTCDNHCKGCPWJFDMMGQXPMSKWNXFILFGUXMGYJTEXKMGYAVFHEYNPOWSZLNRLNTUFPOZTNUBQCBNVZSQAHTKYDFEEQIPVZANAHQEVRRPKVVW");
    msg.flags = 47U;
    const signed char tmp_msg_0[] = {7, -78, -115, 1, 45, -32, 61, 99, -100, -14, -125, 102, -51, -41, 115, 13, -115, 84, 60, 78, -39, 54, -114, -123, -111, -106, -113, -101, 8, 22, -111, 20, 109, -97, -2, 120, -40, -76, -11, -94, 19, 76, 76, 24, -55, -8, -24, -18, -32, 88, -35, -27, -22, -42, -96, 24, 115, 10, -12, -11, -7, 35, -20, 54, -51, 40, -101, 69, -88, -60, 4, -16, -9, -51, -72, -120, 120, -27, 89, 43, -10, -69, -103, 59, 64, 106, 81, -40, -11, -15, 12, 21, 50, -16, -117, -120, -21, 2, 41, 104, -87, 54, -5, -30, -128, -38, 120, 15, -16, -122, 110, -106, 11, 69, -128, 59, 71, -74, -88, 71, -40, 15, -17, 61, 108, -75, 124, -42, -65, 74, -86, -100, -119, -90, -128, 16, -21, -45, -97, -17, 109, -17, 106, 43, -8, 74, -100, -87, 14, -103, -92, 60, -128, 39, 51, 2, -93, 26, -69, -96, -52, 90, 1, 45, -28, -89, 121, 108, -31, 50, -17, -36, 29, -18, -67, -106, -108, 43, -113, -92, 9, -34};
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
    msg.setTimeStamp(0.81487906223384);
    msg.setSource(32106U);
    msg.setSourceEntity(120U);
    msg.setDestination(22292U);
    msg.setDestinationEntity(204U);
    msg.seq = 57622U;
    msg.sys_dst.assign("PAFAVNPIPABYWKITZILQOHTEHMGTUQAPDLEVEDNRZUJGRYYANVYGBSKUTAWXGCIZFRRREDDDXYCAQSWUWPCGNAKFZIQEUSQYWVIXIQYCBPQJSMXLZZTOMQCAWRYRNVDLNSZSJLJRCNONRLPFGZLCCOWHUBQIFCNETKHSJFYQOMKSNVMWKBTUMDJHWHTBOIXSVZOHGGGMEBLFFCIEPVYLWZGUOJOTLXHSVEDPT");
    msg.flags = 225U;
    const signed char tmp_msg_0[] = {59, 15, 21, -88, -26, -13, 123, 4, -102, 29, -107, 99, 39, 36, -19, -116, -33, 118, -127, -34, 30, 114, 13, -86, -10, -49, -76, -32, -90, -76, 125, 76, -109, 59, 82, -119, -35, -19, -119, 74, 8, 51, 29, 18, 45, 43, -109, 71, -122, -9, 28, -5, -54, 16, 26, -13, -111, 77, 64, -67, 84, 107, 121, 100, 37, -122, 72, 6, -94, 125, 92, 58, -126, -68, -121, 58, -1, -18, 123, 104, 109, -34, -106, 82, 83, -104, 101, 48, -42, 97, 50, 90, 79, 52, -75, 21, -32, -98, 115, 73, -127, -118, -123, -53, -60, 39, 27, -12, -7, -13, 45, -3, 97, 72, -19, 51, -23, 2, -8, 122, -117, 39, -44, 8, -51, -125, -100, 7, -43, -14, 123, 29, -65, -68, -107, -13, 76, 19, -13, 77, -39, 81, 125, 83, -9, 73, -2, -95, 114, -108, 15, 5, 126, 35, -80, -99, -23, -62, 54, -50, -128, -35, -74, 28, 123, 125, -49, 74, 116, 119, -120, -92, -127, 27, -83, 16, 33, 82, 10, 19, 95, -116, 42, 24, 23, 23, -15, -39, 15, -84, -26, 118, -66, 56, -17, -79, 125, 4, 113, -54, -71, 7, 86, 74, 50, 16, -49, 76, 90, 54, -68, 43, -97, -98, -63, -52, -121, 61, -30, 11, -83, 38, 123, -9, 14, 54, 118, -121, 15, 65, 67, -32, -22, -34, -105, -71, 65, 109, 46, 96, 82, 25, 2, 107, 22, 113, 93};
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
    msg.setTimeStamp(0.022296945140257818);
    msg.setSource(51777U);
    msg.setSourceEntity(120U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(168U);
    msg.seq = 14808U;
    msg.sys_dst.assign("OSEOGKFNDHWLHNGIUYGFNDGBPJARTTINCEZUUKYSMTBDDLIQDREYVRECVOVHIHJPJDSVSZXXJMUWWXVXNQAFMCWGPBKBZCEKWGARFOPKXCAQGMRTUNQLKOGDAYQCYL");
    msg.flags = 30U;
    const signed char tmp_msg_0[] = {-126, 59, 60, 56, 44, 67, -105, 22, 42, -30, 81, 41, 33, 125, 111, -110, 26, 3, 6, 90, 66, -32, 82, 6, -122, 40, 7, -97, -68, 99, 110, -23, 16, -111, -105, 60, -100, 48, -91, 39, -85, 74, -101, -11, 91, 77, -95, -114, -121, -74, 54, 121, -33, -119, -116, -25, 118, 56, 18, -18, -16, 15, -82, 24, -98, 120, -99, -97, 18, 28, 61, -78, -26, -9, -29, 68, 54, -18, 2, -52, -81, 102, -1, 39, 115, 87, 25, -38, 61, -83, 80, 9, -117, -18, 102, -26, 31, -35, -70, -96, 34, 45, -68, -56, 1, -79, 43, -120, 125, 33, 67, 124, -67, -114, -12, -88, 71, 53};
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
    msg.setTimeStamp(0.7401215730540324);
    msg.setSource(15149U);
    msg.setSourceEntity(129U);
    msg.setDestination(51286U);
    msg.setDestinationEntity(110U);
    msg.sys_src.assign("HGWCDBEMFGDHVFXDWFLILDWIAKQEDFZFUVSQSRBNNZKMCQMLBVPTACWOOUEODZAK");
    msg.sys_dst.assign("IPYBEBHPZESILQRZHTMXNJJMUTHEXRUVMOJMINTSHVZZQALXWWMTATMZMHFLGHHGDSCALSRNUQNZBF");
    msg.flags = 219U;
    const signed char tmp_msg_0[] = {-62, -126, -119, -114, -17, -90, -18, 112, -33, 102, 40, 82, -32, 18, 50, 120, 45, 70, -20, -67, 95, -72, -3, -47, -47, -91, -84, 44, 80, 23, 102, 79, -22, 97, 89, 14, 89, 60, 11, -11, 11, -103, -89, -71, 47, 75, 61, 66, -104, 115, -123, -72, 30, -89, -54, 125, -57, -17, 123, -34, 102, -110, 44, -110, -74, -29, 8, -77, 68, -21, -127, -13, 42, 93, 35, -124, -1, 109, -94, -73, -78, -37, 72, -80, -32, -102, -74, 15, -102, -13, -121, -61, -37, 29, 46, -22, -35, -23, 112, -29, -114, 45, -116, 49, -19, -96, -21, -73, -2, 88, -54, -82, -22, -2, -33, 89, 9, 64, -41, 60, 110, -117, -99, -23, 109, -106, 85, 112, -105, 4, -11, 0, 17, 64, 121, 116, -23, 102, -96, 94, 34, -127, -38, -7, -97, 77, 24, 26, -7, 51, -75, 124, 70, -14, -2, 109, 81, -96, 126, 61, 113, 109, -20, -98, 71, -110, 75, -88, -39, -65, 119, 115, -38, -13, 47, 87, -29, 20, 14, 73, -21, -31, -103, -49, 99, -120, -37, -8, -108, -33};
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
    msg.setTimeStamp(0.3692144605302249);
    msg.setSource(20720U);
    msg.setSourceEntity(32U);
    msg.setDestination(5181U);
    msg.setDestinationEntity(185U);
    msg.sys_src.assign("POTSVXPZTRNCFTGALYMWPDPLCYJIGPAW");
    msg.sys_dst.assign("RVVMDFOMDBMOSGNCCRWJFRZRVFPXZESYCHLCPRLIHJBPZSIEOUMAFUTFHAGSYHZLJQTAILEONNSVIWYCWBBKEPQTITEVHCBYALKFKXODZNPSZIVDLXQTFLGAFZSURADJDWKRRTPPJJFDUICNZMQARXSBYDHEOGKYEHUHGJVJTIHRUWLBQBYQCMTUJOPUXENSGLUQGEZUWBMOMQMSPD");
    msg.flags = 56U;
    const signed char tmp_msg_0[] = {48, 126, 77, -123, -109, 52, 56, 60, 15, -122, 6, -128, -71, -124, -33, 45, -35, 12, 88, -10};
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
    msg.setTimeStamp(0.6334411987758671);
    msg.setSource(63790U);
    msg.setSourceEntity(113U);
    msg.setDestination(24606U);
    msg.setDestinationEntity(166U);
    msg.sys_src.assign("EZILNZNCBHTHJDRAIOFYQNSCPWPRPKTODUAEQBQTBJSU");
    msg.sys_dst.assign("RLSFTPYVMXJACWUZTJQFOMKLPAQK");
    msg.flags = 235U;
    const signed char tmp_msg_0[] = {53, -47, -29, 61, -20, 120, 98, 87, -93, 40, -123, -54, 55, -120, 96, -125, 25, -45, -68, 97, 46, 1, 126, -46, -92, -44, 58, -45, -52, -38, -75, -47, 9, -100, -96, 35, 111, 8, -66, 120, 67, 55, -41, 60, 21, -52, -84, -47, 90, 32, 117, 9, -31, -34, 68, -1, -124, -54, 44, -37, -119, -81, 96, 33, 82, -92, 91, 108, 41, 15, -26, -67, 109, 43, 119, -32, -91, -6, 103, 57, 41, 96, 125, -99, 43, -49, -64, -26, 75, -115, 92, -116, -57, 125, 34, -17, 67, 63, 64, 49, -6, 118, -107, 105, 23, 47, 61, 105, 105, -104, 95, 48, 11, 83, 73, -47, -95};
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
    msg.setTimeStamp(0.12129872103066575);
    msg.setSource(14481U);
    msg.setSourceEntity(203U);
    msg.setDestination(1925U);
    msg.setDestinationEntity(64U);
    msg.seq = 4449U;
    msg.value = 170U;
    msg.error.assign("GEATCQRBZEEDTIHROOOGNJGZDWUDVCJZCIENVMV");

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
    msg.setTimeStamp(0.861351573618538);
    msg.setSource(13520U);
    msg.setSourceEntity(34U);
    msg.setDestination(28156U);
    msg.setDestinationEntity(152U);
    msg.seq = 3489U;
    msg.value = 168U;
    msg.error.assign("WGTPXSMEPZEGUF");

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
    msg.setTimeStamp(0.8837249220584718);
    msg.setSource(57398U);
    msg.setSourceEntity(18U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(128U);
    msg.seq = 21364U;
    msg.value = 136U;
    msg.error.assign("VJROZYACDCITGGBYXRTMMUZKJPTJQYRHZSCSVLGJTHSZOEEHQFDOXFLHBXSVYUPFNPJYXHRIBECHELSODIAGKBCEPIICAXDTWWIVEWQXBLDQZPQUIYQTUTKLLGJDNRWWUEPONUROMMEYDFFADWPNMBBVUBHPVDWUNFSANCSIHIQLGKUKCOTWRZMJRJPOAGLLHEXVHXOZCURNSMZGYSCTWAMPWXFMNSVQNMZAFRKVJYQKNFAVDKIBKKTJLQGGZO");

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
    msg.setTimeStamp(0.6791913307555918);
    msg.setSource(16359U);
    msg.setSourceEntity(18U);
    msg.setDestination(53065U);
    msg.setDestinationEntity(132U);
    msg.seq = 62339U;
    msg.sys.assign("UFONTQUGYRSAYGXBFGCQQEDCQUBPPYRUACAEWBJNWPHJMXMEIXFBLTVNHSMZOKXSTDFYVFLIHHDXBHSZINUPCCXTB");
    msg.value = 0.41389268268570145;

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
    msg.setTimeStamp(0.6573437091927443);
    msg.setSource(64703U);
    msg.setSourceEntity(179U);
    msg.setDestination(57249U);
    msg.setDestinationEntity(171U);
    msg.seq = 13778U;
    msg.sys.assign("SJQBHOFIAPWSOMODKNVBTXJEEHTKEFALZKOFBYYVAGXQWNGEGRTMNBDPZFVHIUPBYTQEUSXCLHBDPHLPZMBCZYNZNGJWHWRAHVDPUQDDCVZOAJCMTJEFLUMXMIYAQEKIERZARRGQFNLVIDUBOWPWSZAFTMRVGXCUJNSALCIKNKTGYOFOPRGSLSRCUKJBNVNOIIQDSTKPUYXVKJWFHFUHGCEUWGCEZTDXJLTAQXMCQYI");
    msg.value = 0.9548951201835659;

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
    msg.setTimeStamp(0.46358461933087536);
    msg.setSource(61808U);
    msg.setSourceEntity(129U);
    msg.setDestination(1832U);
    msg.setDestinationEntity(15U);
    msg.seq = 54467U;
    msg.sys.assign("PMBTXKTBGIQNZUZBSCZMYGYEHTOMBKHYFQIDLLUDVUWLGMQCNJWJLICFPFZCAPLJGZMPDOAJOVPYDYUHJLSMYYKWGCSTIREZBAWSJKQBEIOUVMFYRKIUZVQXRKEMYNVDBIHNRADTXSEHPGRWEFFAHOBQDLKPAEMXRFNCASXEKJUVVIUTQTSQT");
    msg.value = 0.22589036405445895;

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
    msg.setTimeStamp(0.4951547132853962);
    msg.setSource(14616U);
    msg.setSourceEntity(11U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(170U);
    msg.seq = 19219U;
    msg.sys_dst.assign("ZKRLZZSXAHSRZMUJYMAVKTJSLLUZNDFLOHVOCRLWTVFHDREFICNCVBWEVGVJXUQINQDRXAVDKGTRSYSNSPFRUJACZWGKHPTXEDPMTQYFRXJNXDFKJNBUGIFELOZKBHGATQAEMXQMQBHSEONDQQPNYOPKMQBZCSCIMWXUUAXBGILTLRLCOPIAVWBHKYFWECJOSMNNPIVEWTXFODRVYEYWPFJBIDBMLGHDTAEGKHOGI");
    msg.timeout = 0.9782442480770874;

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
    msg.setTimeStamp(0.5172256534520879);
    msg.setSource(13695U);
    msg.setSourceEntity(57U);
    msg.setDestination(55767U);
    msg.setDestinationEntity(107U);
    msg.seq = 30452U;
    msg.sys_dst.assign("CLRWTCNUZXZCVYYXRRKIOZIWDSZMJNUNKCISDAEWIVXORBJXEAYH");
    msg.timeout = 0.3946107938298793;

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
    msg.setTimeStamp(0.5969953323137244);
    msg.setSource(43100U);
    msg.setSourceEntity(212U);
    msg.setDestination(41498U);
    msg.setDestinationEntity(223U);
    msg.seq = 32899U;
    msg.sys_dst.assign("HQZFRULDJYPOBIZWDWFEUSPMNHEQLOCTXPKRJEWXGQNLMGPUAGUTLRVAWAAHOFHPIFQGOCFIZSFAEAMURBTYVANFBMUOOLKUWQOJWXDVJSSHMQCYZCNRLMCHDKJTIZZDHCEKYXSWTVJK");
    msg.timeout = 0.2046421518214061;

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
    msg.setTimeStamp(0.38692514420412216);
    msg.setSource(43825U);
    msg.setSourceEntity(209U);
    msg.setDestination(28795U);
    msg.setDestinationEntity(221U);
    msg.action = 67U;
    msg.longain = 0.08788085410985969;
    msg.latgain = 0.9153560229746354;
    msg.bondthick = 2378483210U;
    msg.leadgain = 0.1518348633456842;
    msg.deconflgain = 0.6388397325995382;

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
    msg.setTimeStamp(0.31770265983111456);
    msg.setSource(39358U);
    msg.setSourceEntity(19U);
    msg.setDestination(25633U);
    msg.setDestinationEntity(88U);
    msg.action = 141U;
    msg.longain = 0.6545117725118041;
    msg.latgain = 0.44274938416181375;
    msg.bondthick = 595330491U;
    msg.leadgain = 0.10537373329038136;
    msg.deconflgain = 0.3990715938891348;

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
    msg.setTimeStamp(0.9524325827812495);
    msg.setSource(28069U);
    msg.setSourceEntity(153U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(106U);
    msg.action = 232U;
    msg.longain = 0.7411917857325814;
    msg.latgain = 0.8772521349897813;
    msg.bondthick = 1761476537U;
    msg.leadgain = 0.6182457674127961;
    msg.deconflgain = 0.5823527255647732;

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
    msg.setTimeStamp(0.10116078200758394);
    msg.setSource(62755U);
    msg.setSourceEntity(141U);
    msg.setDestination(8490U);
    msg.setDestinationEntity(119U);
    msg.err_mean = 0.02647965540012953;
    msg.dist_min_abs = 0.6028109755475869;
    msg.dist_min_mean = 0.13071280497433724;

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
    msg.setTimeStamp(0.6631771118108267);
    msg.setSource(11110U);
    msg.setSourceEntity(206U);
    msg.setDestination(37123U);
    msg.setDestinationEntity(156U);
    msg.err_mean = 0.6448541449610783;
    msg.dist_min_abs = 0.32408896790357333;
    msg.dist_min_mean = 0.6728070201145468;

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
    msg.setTimeStamp(0.8386900544130594);
    msg.setSource(46621U);
    msg.setSourceEntity(183U);
    msg.setDestination(31435U);
    msg.setDestinationEntity(49U);
    msg.err_mean = 0.5712908317903191;
    msg.dist_min_abs = 0.6760136042547393;
    msg.dist_min_mean = 0.49838716242914793;

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
    msg.setTimeStamp(0.41664470104975526);
    msg.setSource(29913U);
    msg.setSourceEntity(229U);
    msg.setDestination(46607U);
    msg.setDestinationEntity(65U);
    msg.action = 179U;
    msg.lon_gain = 0.0937727803858105;
    msg.lat_gain = 0.5253974792605879;
    msg.bond_thick = 0.05747737917602602;
    msg.lead_gain = 0.7865764061682334;
    msg.deconfl_gain = 0.7292082456611966;
    msg.accel_switch_gain = 0.08659863993141936;
    msg.safe_dist = 0.18766770609829841;
    msg.deconflict_offset = 0.2736331598345031;
    msg.accel_safe_margin = 0.06470852497716462;
    msg.accel_lim_x = 0.1570052271624004;

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
    msg.setTimeStamp(0.2025102881905423);
    msg.setSource(32874U);
    msg.setSourceEntity(187U);
    msg.setDestination(3302U);
    msg.setDestinationEntity(13U);
    msg.action = 229U;
    msg.lon_gain = 0.3117827678317082;
    msg.lat_gain = 0.6661917279298954;
    msg.bond_thick = 0.5440555094342348;
    msg.lead_gain = 0.848517719406773;
    msg.deconfl_gain = 0.229351804220147;
    msg.accel_switch_gain = 0.5597511555283351;
    msg.safe_dist = 0.895797448102698;
    msg.deconflict_offset = 0.44973452059284436;
    msg.accel_safe_margin = 0.4158340199252205;
    msg.accel_lim_x = 0.013414479925349054;

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
    msg.setTimeStamp(0.32230608230988134);
    msg.setSource(38520U);
    msg.setSourceEntity(9U);
    msg.setDestination(3308U);
    msg.setDestinationEntity(176U);
    msg.action = 161U;
    msg.lon_gain = 0.7516375431137522;
    msg.lat_gain = 0.6484045445331054;
    msg.bond_thick = 0.8770380736143233;
    msg.lead_gain = 0.534237422031318;
    msg.deconfl_gain = 0.8558800889555594;
    msg.accel_switch_gain = 0.06345026014628885;
    msg.safe_dist = 0.8442226584350045;
    msg.deconflict_offset = 0.9588029630560078;
    msg.accel_safe_margin = 0.429381668582578;
    msg.accel_lim_x = 0.7242295783081657;

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
    msg.setTimeStamp(0.6298287625942657);
    msg.setSource(14882U);
    msg.setSourceEntity(230U);
    msg.setDestination(8032U);
    msg.setDestinationEntity(15U);
    msg.type = 33U;
    msg.op = 73U;
    msg.err_mean = 0.6183525546301608;
    msg.dist_min_abs = 0.14833506533159468;
    msg.dist_min_mean = 0.1392332955305936;
    msg.roll_rate_mean = 0.48531675828967324;
    msg.time = 0.12478020147157554;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 107U;
    tmp_msg_0.lon_gain = 0.721441392528865;
    tmp_msg_0.lat_gain = 0.9146032114832939;
    tmp_msg_0.bond_thick = 0.5981916928227576;
    tmp_msg_0.lead_gain = 0.05393199450141439;
    tmp_msg_0.deconfl_gain = 0.5613448033564699;
    tmp_msg_0.accel_switch_gain = 0.05920134630520235;
    tmp_msg_0.safe_dist = 0.5213740441507686;
    tmp_msg_0.deconflict_offset = 0.45609803135854565;
    tmp_msg_0.accel_safe_margin = 0.295099573077531;
    tmp_msg_0.accel_lim_x = 0.24797562317248112;
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
    msg.setTimeStamp(0.14943139719561782);
    msg.setSource(48145U);
    msg.setSourceEntity(214U);
    msg.setDestination(30677U);
    msg.setDestinationEntity(137U);
    msg.type = 49U;
    msg.op = 235U;
    msg.err_mean = 0.8710495486885135;
    msg.dist_min_abs = 0.06366713013519298;
    msg.dist_min_mean = 0.13556807594302644;
    msg.roll_rate_mean = 0.15921707478378655;
    msg.time = 0.20332776306004663;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 104U;
    tmp_msg_0.lon_gain = 0.7750462138735159;
    tmp_msg_0.lat_gain = 0.29896849189452845;
    tmp_msg_0.bond_thick = 0.7944750693628256;
    tmp_msg_0.lead_gain = 0.755268072366697;
    tmp_msg_0.deconfl_gain = 0.3820401749928103;
    tmp_msg_0.accel_switch_gain = 0.3771200624100278;
    tmp_msg_0.safe_dist = 0.5966683502715585;
    tmp_msg_0.deconflict_offset = 0.11856121148818155;
    tmp_msg_0.accel_safe_margin = 0.3253555507413749;
    tmp_msg_0.accel_lim_x = 0.8498282515702253;
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
    msg.setTimeStamp(0.5767720243127772);
    msg.setSource(39593U);
    msg.setSourceEntity(96U);
    msg.setDestination(28430U);
    msg.setDestinationEntity(136U);
    msg.type = 207U;
    msg.op = 66U;
    msg.err_mean = 0.4505350612935569;
    msg.dist_min_abs = 0.3069854998608056;
    msg.dist_min_mean = 0.25049272746820483;
    msg.roll_rate_mean = 0.096226630517523;
    msg.time = 0.07896186634063229;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 136U;
    tmp_msg_0.lon_gain = 0.7351005088923599;
    tmp_msg_0.lat_gain = 0.012031886004858161;
    tmp_msg_0.bond_thick = 0.3148409438101293;
    tmp_msg_0.lead_gain = 0.09330621776625236;
    tmp_msg_0.deconfl_gain = 0.4757502820122189;
    tmp_msg_0.accel_switch_gain = 0.6450468305378313;
    tmp_msg_0.safe_dist = 0.12857357577458195;
    tmp_msg_0.deconflict_offset = 0.7024326361094544;
    tmp_msg_0.accel_safe_margin = 0.3876120286283843;
    tmp_msg_0.accel_lim_x = 0.7981845551794976;
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
    msg.setTimeStamp(0.28186580875445044);
    msg.setSource(29703U);
    msg.setSourceEntity(139U);
    msg.setDestination(64646U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.05615053494431543;
    msg.lon = 0.8707586560953572;
    msg.eta = 1329459192U;
    msg.duration = 42756U;

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
    msg.setTimeStamp(0.9454725857994669);
    msg.setSource(13596U);
    msg.setSourceEntity(83U);
    msg.setDestination(30970U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.025681002836550282;
    msg.lon = 0.165816744498416;
    msg.eta = 2922310593U;
    msg.duration = 61002U;

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
    msg.setTimeStamp(0.7244587970713652);
    msg.setSource(34786U);
    msg.setSourceEntity(166U);
    msg.setDestination(52786U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.1901532670861591;
    msg.lon = 0.15085414639060757;
    msg.eta = 460615554U;
    msg.duration = 14208U;

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
    msg.setTimeStamp(0.9917805210074491);
    msg.setSource(51917U);
    msg.setSourceEntity(160U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(189U);
    msg.plan_id = 849U;

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
    msg.setTimeStamp(0.49498776792192456);
    msg.setSource(56443U);
    msg.setSourceEntity(199U);
    msg.setDestination(39255U);
    msg.setDestinationEntity(195U);
    msg.plan_id = 61095U;

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
    msg.setTimeStamp(0.93468859343429);
    msg.setSource(3992U);
    msg.setSourceEntity(0U);
    msg.setDestination(14591U);
    msg.setDestinationEntity(36U);
    msg.plan_id = 58682U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.89619897697578;
    tmp_msg_0.lon = 0.11013628608364023;
    tmp_msg_0.eta = 1139617874U;
    tmp_msg_0.duration = 64451U;
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
    msg.setTimeStamp(0.35813026371473233);
    msg.setSource(17655U);
    msg.setSourceEntity(19U);
    msg.setDestination(25430U);
    msg.setDestinationEntity(53U);
    msg.type = 216U;
    msg.command = 66U;
    msg.settings.assign("SJXATESEKMNIAVQMFWDBAPPMCSHKOGDFVMPHUGKKWEGUBVKREENNJBKPWUC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55992U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AAZBWUVNHFVASKTCYAHQXLSZZRTKLMSVCNQVAUPNXXTRYUPHAKKAPEJQFZYGZBHGOIYQGOPXNMRWYFCDXEUBFEPFSHINGGNTIYSLQCZREKFGWJVIOKRQDIGUAZRDYWBBBOJZSCIOOLAXCNJSCBWUMLYJXMHWUEZIIPLHUHVYBMUFPTDUOKKTDWN");

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
    msg.setTimeStamp(0.1244693667470036);
    msg.setSource(15473U);
    msg.setSourceEntity(175U);
    msg.setDestination(62230U);
    msg.setDestinationEntity(177U);
    msg.type = 209U;
    msg.command = 177U;
    msg.settings.assign("AYDCMCMJBMXEKCHDKQRGNUIQQVYOTUCIRBKFKBXNITSEYDEMIYLRKPPZDAQQVO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34684U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.46058408482745594;
    tmp_tmp_msg_0_0.lon = 0.26003879594971935;
    tmp_tmp_msg_0_0.eta = 1972161905U;
    tmp_tmp_msg_0_0.duration = 43035U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BGTGIRDATUWSVRLREKJILOGZZXFVWDPCLDJMYQUMYEUWRWCARUBMJQELQVIUGZFUAONODSLGQYQIBACODIXVCWGFILZZYTFMT");

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
    msg.setTimeStamp(0.026274664378835966);
    msg.setSource(49321U);
    msg.setSourceEntity(88U);
    msg.setDestination(11762U);
    msg.setDestinationEntity(126U);
    msg.type = 39U;
    msg.command = 17U;
    msg.settings.assign("KKMHXFSZKIRWBGKOIEXIALUUVTRWQKMZACDPCEZSLXOSVUFHLRYWICDLZSDDAJTAIPWJZYCPLNDXEWZNYTHFVHVJNPQTQHHFQGXUKI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54042U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TVRPSFHBSOQNJKDBBKNZBQWCRRXYYORBWNPTLFQVEKENFAJZLQERSBDDMBNYDUXYWTECYXVIDZIMVPJPEI");

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
    msg.setTimeStamp(0.15187139947078732);
    msg.setSource(32281U);
    msg.setSourceEntity(19U);
    msg.setDestination(59475U);
    msg.setDestinationEntity(95U);
    msg.state = 169U;
    msg.plan_id = 7479U;
    msg.wpt_id = 152U;
    msg.settings_chk = 63212U;

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
    msg.setTimeStamp(0.4268298517319915);
    msg.setSource(29622U);
    msg.setSourceEntity(79U);
    msg.setDestination(43218U);
    msg.setDestinationEntity(133U);
    msg.state = 28U;
    msg.plan_id = 3932U;
    msg.wpt_id = 113U;
    msg.settings_chk = 33985U;

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
    msg.setTimeStamp(0.6205600265919369);
    msg.setSource(11982U);
    msg.setSourceEntity(19U);
    msg.setDestination(21579U);
    msg.setDestinationEntity(29U);
    msg.state = 181U;
    msg.plan_id = 46734U;
    msg.wpt_id = 188U;
    msg.settings_chk = 10705U;

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
    msg.setTimeStamp(0.9766339231514795);
    msg.setSource(21560U);
    msg.setSourceEntity(230U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(125U);
    msg.uid = 201U;
    msg.frag_number = 96U;
    msg.num_frags = 15U;
    const signed char tmp_msg_0[] = {75, 107, 83, 4, 87, -33, -95, -16, 112, 69, 30, 7, 42, -46, -39, -114, 105, -38, 72, -53, 98, 23, -127, -113, 83, -72, -121, -57, -57, -69, -105, 57, -11, 66, -83, 113, 97, 8, 117, -78, 6, -100, 111, 55, -102, -72, -61, 19, -102, 5, -7, -59, 44, -59, -72, -104, -94, 124, 109, 95, 98, -96, 122, -75, 120, 11, -104, 4, 49, 36, -71, 13, -18, 81, 81, -22, -4, -3, -127, 83, 6, 6, 25, 112, -11, 103, -62, 119, -63, 79, 66, -93, 104, 110, -86, -88, -48, -112, 79, -39, 102, -35, -81, 95, -80, 79, 67, -37, 47, -74, 85, -120, -115, 30, -18, 109, -21, -89, -4, 57, -120, -102, -54, 13, -67, 126, -63, -14, 95, 123, -100, 61, -105};
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
    msg.setTimeStamp(0.9648174131677697);
    msg.setSource(39853U);
    msg.setSourceEntity(132U);
    msg.setDestination(56431U);
    msg.setDestinationEntity(248U);
    msg.uid = 147U;
    msg.frag_number = 68U;
    msg.num_frags = 240U;
    const signed char tmp_msg_0[] = {119, 54, 9, -115, 26, -7, 106, 35, 48, -107, 81, 125, -67, -16, -31, 121, 88, 76, -103, 94, 43, -98, 115, 123, 81, 113, -23, 11, -68, 108, 100, -124, 109, -63, 6, -57, 11, 93, -6, -75, -49, 56, -102, 76, 112, -16, 63, 27, 73, 125, -78, 56, -125, -116, -73, 2, 93, -95, -70, -33, 75, 68, 58, 89, 81, 101, -66, 43, -17, 4, -82, -24, 35, -11, 58, -54, 90, -22, 40, -51, -75, -68, 23, 62, 107, 94, -83, 78, -80, 126, 3, 32, 95, 68, -120, -40, -46, 97, 49, 100, 105, -115, -109, 43, -107, -10, 64, 86, -66, -91, -23, 90, 78, -120, -106, -80, 86, -53, 40, -96, -58, 2, -87, 116, -91, -117, 48, -122, 19, 27, -78, -10, -66, 75, -43, -39, 56, -83, 53, 53, 68, 81, -79, 90, -33, 89, 55, -116, -62, -10, -100, -111, -80, -60, 43, 111, -81, -10, -18, -9, 104, 4, -63, -15, -60, -54, -27, -2, -83, -6, -92, -74, 99, -51, 101, -107, 123, 113};
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
    msg.setTimeStamp(0.625529004401665);
    msg.setSource(20647U);
    msg.setSourceEntity(63U);
    msg.setDestination(3818U);
    msg.setDestinationEntity(175U);
    msg.uid = 199U;
    msg.frag_number = 177U;
    msg.num_frags = 254U;
    const signed char tmp_msg_0[] = {58, 10, 117, 12, 47, -6, -4, 74, -117, -9, 56, 88, 13, 93, 26, -52, -84, 3, -126, -122, -108, -68, 91, 117, -27, 12, -65, -110, -113, -117, 21, 24, -27, -32, 64, 73, 56, -116, 17, -66, 117, 114, -25, 50, -61, -124, 45, 1, -117, -7, 17, -28, -89, -21, -45, -115, -118, 91, -1, 112, -16, -37, 92, 115, -7, 65, -75, 81, 95, -33, 61, 73, 50, 82, 99, -68, 68, -122, 98, 45, -20, -105, 60, -79, -68, 107, 118, -102, -34, -73, 44, 69, -15, 123, -71, 31, -104, -1, 112, -19, 93, 70, 80, -28, -19, -20, 73, 76, 7, -31, -112, -55, -20, 45, -126, -21, -41, 28, 56, -15, 57, -2, -7, 91, -34, 71, -80, -71, -40, 74, -121, -115, 52, 33, -60, -39, 49, -61, 20, -61, -66, -23, -26, 102, -81, -107, -113, -82, -4, -124, 23, -9, 64, 107, -61, 91, 7, -114, -40, -91, 75, 57, 69, -101, -15, -117, -64, -119, 76, 109, -117, -119, -37, 16, -117, -78, -84, -19, -3, -8, 70, 119, -73, -99, 72};
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
    msg.setTimeStamp(0.6608864002394924);
    msg.setSource(35540U);
    msg.setSourceEntity(0U);
    msg.setDestination(14500U);
    msg.setDestinationEntity(226U);
    msg.content_type.assign("WTNZBWJVQYWZUXPPIXSMGNIOPQVJSQTUDUALQBKIJQERZYCAGTHYGRTFZWYWWURHZMKYXFRXLGEQQXDXJGDYFHMTHVFNNNVIMDVBJDSPLCKAOKGYKHMFLGELLBUCGJTFBUOBXMHSUFUGIVNOGKMIEJFXHSBZOJPUXZBICPOACAHZRLOYQCPDSPNARYNKTNWHWVZKRJRPDQCATNLCOATAFLKVBYEEEIBSSLTZUDAEQICWERWIXDPJVMFHMOV");
    const signed char tmp_msg_0[] = {113, 110, 112, -15, -15, -16, 39, 74, -45, 13, -7, -18, 118, 86, -8, -18, 57, -3, -128, -100, 59, -3, -114, 89, -102, 112, -83, 45, 46, -22, 8, -123, -117, -71, 58, 5, 13, -67, 71, -122, -12, 55, 35, 96, -87, 69, -92, 88, 30, 50, -12, -27, -95, 87, 100, -103, -60, 30, 59, -9, -85, -4, 1, -90, 62, -64, 29, -39, -128, -11, -10, -77, -11, 96, -98, 113, -34, 93, 10, 125, 95, -124, -93, 38, 104, 109, -105, -94, -61, -12, -79, -26, 74, 73, 99, -55, -97, -61, 46, -87, 2, 90, -127, -111, -1, 97, 34, -58, -6, 115, -32, -8, 101, 114, 41, -95, -50, 60, -22, 7, -113, -96, 102, -121, -104, 54, 100, 118, 107, 105, -17, -102, 44, 99, -19, 18, -8, -108, -121, -21, -98};
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
    msg.setTimeStamp(0.700085596667778);
    msg.setSource(32482U);
    msg.setSourceEntity(123U);
    msg.setDestination(39478U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("ADUGTHKCXNVELYYTCDMZGVCUVFWXOQJXNXDAKNYFFQBGKEKYJECRPEJXHQN");
    const signed char tmp_msg_0[] = {2, 38, 97, 77, 111, 6, -82, -96, 84, 83, 30, -23, -84, 122, 89, -2, 100, 19, -48, 92, -80, 89, 85, -92, -8, 78, -108, -75, 81, 49, -122, 3, -30, 126, -57, 55, -63, -12, -77, 93, 26, 97, 47, 126, -28, -67, 41, 45, 48, 10, 61, 122, -89, -103, 59, -77, -6, 95, 98, -29, -21, -114, 123};
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
    msg.setTimeStamp(0.09268759140120009);
    msg.setSource(22431U);
    msg.setSourceEntity(24U);
    msg.setDestination(16544U);
    msg.setDestinationEntity(150U);
    msg.content_type.assign("OPRXQAUMKDYOTVFWTHYDTSPGQMMNUDSTTQPFLCCXOQDLZBWAOLESYOKSELBIYNXPGQCMEGGFRREZVREAKIOUDSVHFHDINKHJKJJAGDRINENCYJWBHTFUKEEIZBCQMWMPYIGMSKDBXTVMPAAUGQUTHJHRGZEWPXSINLRGAHNNLVLJUBJUNZHFZQMPOFZVFKQUMOURVBDWB");
    const signed char tmp_msg_0[] = {-112, -97, -7, -21, 42, 34, 59, -7, -98, 90, 80, 15, 99, -7, -23, -59, -119, -65, 84, -75, 38, -116, -78, 110, -62, -103, -69, 59, -110, -1, 39, -115, -23, 81, -24, -36, 123, -41, -28, 39, 37, 28, -50, -97, -10, 49, -90, -73, -101, 7, 47, 82, -39, -114, -57, 8, 31, 102, -82, -127, -117, 69, -113, 105, 92, 81, -96, 98, -26, -4, -85, -45, 69, -38, -3, 22, 4, 98, -46, 115, 65, -88, -122};
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
    msg.setTimeStamp(0.10652907156821356);
    msg.setSource(56775U);
    msg.setSourceEntity(245U);
    msg.setDestination(2351U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.42222376771562165);
    msg.setSource(7582U);
    msg.setSourceEntity(237U);
    msg.setDestination(16900U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9299195606392863);
    msg.setSource(61741U);
    msg.setSourceEntity(173U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.5333213804102186);
    msg.setSource(55656U);
    msg.setSourceEntity(192U);
    msg.setDestination(38792U);
    msg.setDestinationEntity(156U);
    msg.target = 52683U;
    msg.bearing = 0.683684015981245;
    msg.elevation = 0.39458643529542725;

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
    msg.setTimeStamp(0.172213406979708);
    msg.setSource(39004U);
    msg.setSourceEntity(111U);
    msg.setDestination(49961U);
    msg.setDestinationEntity(104U);
    msg.target = 3798U;
    msg.bearing = 0.0749554509354442;
    msg.elevation = 0.14334270517743952;

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
    msg.setTimeStamp(0.8609096526467546);
    msg.setSource(14559U);
    msg.setSourceEntity(53U);
    msg.setDestination(43762U);
    msg.setDestinationEntity(155U);
    msg.target = 53498U;
    msg.bearing = 0.3568895946442512;
    msg.elevation = 0.08572308676130935;

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
    msg.setTimeStamp(0.6203581110379951);
    msg.setSource(20506U);
    msg.setSourceEntity(250U);
    msg.setDestination(25496U);
    msg.setDestinationEntity(75U);
    msg.target = 50877U;
    msg.x = 0.3037837137075292;
    msg.y = 0.5177455842354607;
    msg.z = 0.5556303288859752;

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
    msg.setTimeStamp(0.9657439705134779);
    msg.setSource(12737U);
    msg.setSourceEntity(100U);
    msg.setDestination(22887U);
    msg.setDestinationEntity(11U);
    msg.target = 31334U;
    msg.x = 0.09278854396966474;
    msg.y = 0.23957804687807494;
    msg.z = 0.17643508219281923;

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
    msg.setTimeStamp(0.9357343421824502);
    msg.setSource(25703U);
    msg.setSourceEntity(134U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(243U);
    msg.target = 27751U;
    msg.x = 0.4523688805257403;
    msg.y = 0.9320878899496967;
    msg.z = 0.5844023495847186;

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
    msg.setTimeStamp(0.5118888626663156);
    msg.setSource(49616U);
    msg.setSourceEntity(102U);
    msg.setDestination(36399U);
    msg.setDestinationEntity(228U);
    msg.target = 31464U;
    msg.lat = 0.8966792047077642;
    msg.lon = 0.2803762124803598;
    msg.z_units = 209U;
    msg.z = 0.3769903211546838;

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
    msg.setTimeStamp(0.6212110565275868);
    msg.setSource(34655U);
    msg.setSourceEntity(99U);
    msg.setDestination(30640U);
    msg.setDestinationEntity(105U);
    msg.target = 55981U;
    msg.lat = 0.5649352991192323;
    msg.lon = 0.959673633745883;
    msg.z_units = 102U;
    msg.z = 0.7041078268808011;

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
    msg.setTimeStamp(0.3846504599352736);
    msg.setSource(42936U);
    msg.setSourceEntity(26U);
    msg.setDestination(61142U);
    msg.setDestinationEntity(91U);
    msg.target = 35441U;
    msg.lat = 0.21605212740681545;
    msg.lon = 0.41022721612093394;
    msg.z_units = 120U;
    msg.z = 0.960539435989112;

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
    msg.setTimeStamp(0.11699182958351528);
    msg.setSource(25344U);
    msg.setSourceEntity(114U);
    msg.setDestination(46054U);
    msg.setDestinationEntity(55U);
    msg.locale.assign("XHPICOWDEPJOJMURHCTTOEAFRFTVFZRUNJGNQQQIDGEZRSVYKOKXZSZAAMQDVRLASUJOGEYBYBIZRMXEHCBJBNULUYGCSBNNJMXHKMUCJKMVLAYAVBYFRKATIOSGRQKKKSRIMNYNXNHESDFTJOKQGWMIWYOCIWOMUWVO");
    const signed char tmp_msg_0[] = {28, -69, 97, 117, -113, 99, 22, 68, -92, -118, 26, 88, -77, 118, -73, -102, -15, 16, 54, 17, 14, -108, -74, -80, -50, 106, -115, -82, -38, 9, 78, 122, 93, 82, -82, -114, -55, 107, -107, -46, -15, -108, -99, 89, -16, 43, 17, 47, 55, 121, 3, 5, -32, -65, 123, 88, -71, 27, -117, -58, -49, 119, 61, -60, -42, 17, -94, 44, -62, -61, -125, -128, -109, 5, -128, -106, -94, -14, -107, -34, 38, 83, -106, 112, 71, 89, -11, -119, -77, 1, -115, 63, -44, 51, -97, -74, 0, 65, 67, -60, -2, 34, 67, 119, -44, -115, -63, -62, -43, -121, -19, -45, -12, -91, -119, -16, 109, -19, -40, 95, 81, 54, -35, -4, 22, 68, 107, 104, 60, 41, 73, -27, -66, -103, -85, 14, 58, 107, 64, 120, -12, 73, 93, 96, -26, -103, -12, -11, -127, 2, 34, 46, -7, -85, 85, -23, 26, 72, -42, 117, -99, 123, -92, 66, 30, -107, 7, 18, -40, -112, -6, -103, -27, -103, -33, -80, -10, 67, -61, 43, 33, -94, -66, 4, 91, -71, -35, -2, -25, -95, 28, 86, 121, -49, 19, -28, -19, 91, -114, 101, -113, -29, -11, 108, -1, -62, -28, -112, 98, 105, 79, 22, -38, 61, -128, -44, -74, 56, 11, -58, -1, 78, -87, 82, -1, 52, -107, 73, 114, -82, -58, 57, -46, -30, 117, -20, 7, 91, 5, 44, 24, 32, -6, 118};
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
    msg.setTimeStamp(0.556728661177171);
    msg.setSource(788U);
    msg.setSourceEntity(126U);
    msg.setDestination(4632U);
    msg.setDestinationEntity(237U);
    msg.locale.assign("SCSKCSDPYUQMVRNRFVJRCUYWIPFXXUYUTEEQLUAEVOIJIDQKHBHHIMLZGBWWGZOBZGJWKTAUVQCGSEGQALLZBSTNRRKVJTDXTAAJLYPNWEEPPVVBBJUHPFFQPFYFEFDPFTINZDRXLOWHYORWNVGAQRXHBXIKNSQOQBTCKBOFARLLANOTEGMGNZESMPZCUJUVYQNWKIMSLWMFEMJKCDXGBDORHTTNIYXJCZHD");
    const signed char tmp_msg_0[] = {75, 1, 11, 6, -122, 103, 114, -63, 1, 119, -83, 95, 69, 112, -92, -118, -114, 89, 80, -53, 105, -115, -78, -56, 64, -73, -128, 94, 70, 42, -36, -40, 53, -23, -65, -62, 94, 94, 124, 76, -3, -31, 57, 71, -99, -8, 31, -76, 64, 82, -1, -35, 73, -71, -66, -30, 49, -12, -91, -114, 42, -74, -70, -78, 123, -94, 22, 101, -116, 77, 35, -101, 90, 12, -63, 97, -32, 37, 32, 114, -109, 87, -84, 56, -126, -44, 120, -95, -31, -1, 61, 85, -50, 125, -22, -38, 77, 40, 32, -32, 53, -76, -102, -13, 37, 2, -52, -108, 91, -78, -92, -59, -96, 85, 111, -12, 72, -29, 65, -104, 37, 51, 12, 76, -47, -38, 102, -67, 34, 1, -90, 103, 107, 67, -3, 46, -79, -111, 94, -82, -46, 41, 68, -15, 55, -50, 93, -54, -3, -125, 118, 32, 121, 109, -106, -68, -2, 59, 86, 40, 37, -54, -42, 114, -126, -35, 0, 126, 84, -124, 109, 2};
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
    msg.setTimeStamp(0.6056723286865991);
    msg.setSource(53548U);
    msg.setSourceEntity(238U);
    msg.setDestination(9911U);
    msg.setDestinationEntity(211U);
    msg.locale.assign("HCDYLWBDJSRPCKZSJGOJMUTVRBFQPWDKRYRXTQUSRPBAUCYIXYHUSJLCBLMKXEPATHNBPDFTEKOAQUHONHYUMLNDDCWORCAGFVNSMJWDMOTREUHAPJIRLMDFXCCQISGSKZXGIJCEVIZQXOMQHKZEWVAEIKBHLOZYHGLVNTZDCPFYTQQBB");
    const signed char tmp_msg_0[] = {3, 65, -40, 88, -41, 122, 83, -66, -62, 93, -87, 83, 91, -4, 5, -126, -126, 73, -87, 101, 0, 18, 6, -5, -11, -121, 4, 116, -56, -96, -24, -32, -101, 19, -103, -45, 26, 77, -106, 94, -44, 70, 78, 96, 123, 111, 77, -112, 99, -3, -34, -71, -17, 112, -26, -20, 104, 90, 11, 83, 32, 73, 0, -106, -118, 53, -4, -74, 0, 42, 22, 47, -128, 57, 93, -41, 2, -109, 108, 21, 94, 63, -10, -19, 45, -77, 68, 95, -116, 81, -80, -118, -122, 19, -90, -121, 112, -48, 50, -4, -41, -106, -2, -69, 81, -83, -84, -7, 11, -41, -102, -117, -17, 6, -43, 30, 125, 83, -32, 4, 50, 89, -39, 34, -82, 57, -125, 125, -114, 47};
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
    msg.setTimeStamp(0.8904369466236646);
    msg.setSource(27023U);
    msg.setSourceEntity(152U);
    msg.setDestination(27780U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.04805926993139675);
    msg.setSource(37365U);
    msg.setSourceEntity(168U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.6453519647637885);
    msg.setSource(62031U);
    msg.setSourceEntity(139U);
    msg.setDestination(30067U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.37560466465202325);
    msg.setSource(17132U);
    msg.setSourceEntity(39U);
    msg.setDestination(50519U);
    msg.setDestinationEntity(90U);
    msg.camid = 61U;
    msg.x = 10562U;
    msg.y = 44941U;

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
    msg.setTimeStamp(0.9433220476695272);
    msg.setSource(27639U);
    msg.setSourceEntity(102U);
    msg.setDestination(40838U);
    msg.setDestinationEntity(241U);
    msg.camid = 167U;
    msg.x = 38493U;
    msg.y = 13331U;

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
    msg.setTimeStamp(0.2187338003734225);
    msg.setSource(62179U);
    msg.setSourceEntity(17U);
    msg.setDestination(42482U);
    msg.setDestinationEntity(193U);
    msg.camid = 30U;
    msg.x = 62238U;
    msg.y = 56639U;

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
    msg.setTimeStamp(0.2855419777422521);
    msg.setSource(9613U);
    msg.setSourceEntity(77U);
    msg.setDestination(64600U);
    msg.setDestinationEntity(243U);
    msg.camid = 244U;
    msg.x = 13345U;
    msg.y = 37956U;

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
    msg.setTimeStamp(0.3711809854818081);
    msg.setSource(45600U);
    msg.setSourceEntity(15U);
    msg.setDestination(35249U);
    msg.setDestinationEntity(194U);
    msg.camid = 131U;
    msg.x = 44558U;
    msg.y = 53727U;

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
    msg.setTimeStamp(0.8822215890344216);
    msg.setSource(39681U);
    msg.setSourceEntity(21U);
    msg.setDestination(45861U);
    msg.setDestinationEntity(214U);
    msg.camid = 87U;
    msg.x = 31385U;
    msg.y = 14325U;

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
    msg.setTimeStamp(0.4504466245963369);
    msg.setSource(45771U);
    msg.setSourceEntity(82U);
    msg.setDestination(63318U);
    msg.setDestinationEntity(70U);
    msg.tracking = 73U;
    msg.lat = 0.6073978415436974;
    msg.lon = 0.8011945975646266;
    msg.x = 0.7655574892983591;
    msg.y = 0.8037186279060236;
    msg.z = 0.7815486370938168;

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
    msg.setTimeStamp(0.7245868561836885);
    msg.setSource(34863U);
    msg.setSourceEntity(214U);
    msg.setDestination(9170U);
    msg.setDestinationEntity(60U);
    msg.tracking = 224U;
    msg.lat = 0.7999526700757292;
    msg.lon = 0.2595880213050631;
    msg.x = 0.5326841218461702;
    msg.y = 0.7465320165042212;
    msg.z = 0.30506782833384605;

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
    msg.setTimeStamp(0.3029732399574253);
    msg.setSource(19349U);
    msg.setSourceEntity(143U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(137U);
    msg.tracking = 122U;
    msg.lat = 0.4448401638958258;
    msg.lon = 0.8005669760491125;
    msg.x = 0.8393246984752827;
    msg.y = 0.8898564916501258;
    msg.z = 0.25994713897375554;

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
    msg.setTimeStamp(0.6158995313210872);
    msg.setSource(40501U);
    msg.setSourceEntity(161U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(155U);
    msg.target.assign("RYNJBRFUGYQMRIYPOJFELFZHEHVZDBXZWTUDPKWOYEZPWIVTTSAIMEBJZSQROKUC");
    msg.lbearing = 0.5597075456188639;
    msg.lelevation = 0.7778708250644237;
    msg.bearing = 0.8011572979064818;
    msg.elevation = 0.3734118399499665;
    msg.phi = 0.4992770393558187;
    msg.theta = 0.8786759221574011;
    msg.psi = 0.6375475212839441;
    msg.accuracy = 0.20184694076800247;

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
    msg.setTimeStamp(0.8687405968417793);
    msg.setSource(2227U);
    msg.setSourceEntity(91U);
    msg.setDestination(12070U);
    msg.setDestinationEntity(156U);
    msg.target.assign("KTWZQYSUOPVOGTWNIIDMOKYSYBMOHOPTRAGHMESVFXCRMKNCBCRWRYXFHXEEMFUZXAPEAPDLZRBBQAKAPOBGGTOCFLMQTQDQBRUTREVIYXNSEEWSCDYZOGRHHZGHWWJSUFJIVLJITOVJZKVNWDWGHMLLUMQDNJBLULCPAYGQSSKIUKW");
    msg.lbearing = 0.27674397296187514;
    msg.lelevation = 0.48054969557388716;
    msg.bearing = 0.7950731993914726;
    msg.elevation = 0.16877103354170975;
    msg.phi = 0.02534303581695818;
    msg.theta = 0.9350336871547148;
    msg.psi = 0.6828000336031135;
    msg.accuracy = 0.9646032086024847;

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
    msg.setTimeStamp(0.2169425441963979);
    msg.setSource(29012U);
    msg.setSourceEntity(90U);
    msg.setDestination(56074U);
    msg.setDestinationEntity(15U);
    msg.target.assign("KSIGYHLUETHJMYPRWYEJSROUSSYDRTKMWNWUOVAUFHKJPAVBDFBJQJXYIHNHUDFHHARCIEIRNIYLRBJKPTVMVTMABILXMDPLGLXUWHHVKVFYOBXOQOSEMCIXZGGDZGVQESNVCWFNQKWMCXWWBTPBBEJUPZGFTANZGCNWXIUMSYCCNDTMUKOKODPPQXBRZZGCBILYDFPETVKSQMGVAAHOQLFRFECXACTZJFPG");
    msg.lbearing = 0.8579120368655623;
    msg.lelevation = 0.9774648696781029;
    msg.bearing = 0.7037657838447418;
    msg.elevation = 0.3868598820870969;
    msg.phi = 0.025406506468038326;
    msg.theta = 0.11450920712668133;
    msg.psi = 0.5529327975084438;
    msg.accuracy = 0.0707029363415993;

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
    msg.setTimeStamp(0.8088626887956765);
    msg.setSource(40271U);
    msg.setSourceEntity(237U);
    msg.setDestination(2694U);
    msg.setDestinationEntity(104U);
    msg.target.assign("JTDGYHEBFAQWHWNKLOGVKFHMPQXCSEQO");
    msg.x = 0.6783937411913967;
    msg.y = 0.8051524451344472;
    msg.z = 0.11249758190489123;
    msg.n = 0.2522513190511638;
    msg.e = 0.19021237042495776;
    msg.d = 0.49851540636198366;
    msg.phi = 0.829003183260002;
    msg.theta = 0.41608721306165386;
    msg.psi = 0.4217231760907665;
    msg.accuracy = 0.30308162579236797;

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
    msg.setTimeStamp(0.34413828587000306);
    msg.setSource(5423U);
    msg.setSourceEntity(91U);
    msg.setDestination(22101U);
    msg.setDestinationEntity(196U);
    msg.target.assign("XWHQXWJHOFWVXTHXTZZGDKYGNGMBYYILHAZEHFSQJYJOKPPUGIUZMAIPVETKFMPLJPDVTZBISUSEKKZEJYVKMIBEFAZGFDVMTOUNNNCIMVDFTMFWPJQBIREYJQVSRKHJCVWVCPUSCSDERLKGAWULQBYFGXWATETUBSPKCOAUYICTSUDPAXRSQHXNZOLCOHHOVDRUCGDLD");
    msg.x = 0.3895624362399065;
    msg.y = 0.3297186065668797;
    msg.z = 0.7966968289999103;
    msg.n = 0.5105270506144285;
    msg.e = 0.06892914986149445;
    msg.d = 0.04292405464323723;
    msg.phi = 0.9048397256634607;
    msg.theta = 0.02656678440225313;
    msg.psi = 0.933394377923521;
    msg.accuracy = 0.72597406784382;

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
    msg.setTimeStamp(0.4341052252091131);
    msg.setSource(14379U);
    msg.setSourceEntity(221U);
    msg.setDestination(62850U);
    msg.setDestinationEntity(71U);
    msg.target.assign("JSYLOPSBJIHUDNTSVKCMOAUUGPXZAUCJGIYIPABOSXMRHQLVSEYQZIMQLBNTXRYOGWUAFHPQTJUDOCTRBBRTQDIQUKLZDFIZNEMFAXKLFWB");
    msg.x = 0.9489206777014465;
    msg.y = 0.9904750783029699;
    msg.z = 0.5807177074246109;
    msg.n = 0.6325723978405097;
    msg.e = 0.8087412948308107;
    msg.d = 0.758065938025749;
    msg.phi = 0.9242278095011314;
    msg.theta = 0.684844401545684;
    msg.psi = 0.4281249098950213;
    msg.accuracy = 0.6976213037683815;

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
    msg.setTimeStamp(0.4382024841587552);
    msg.setSource(15907U);
    msg.setSourceEntity(97U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(73U);
    msg.target.assign("BIZQNWXJGJSGDGMMAZENSMZQREKBHWMVFYIMVMWYNYYBHXGSOFNCSVIFZFHIUICSBBFVREXVTWMYPOVEUPSTXZ");
    msg.lat = 0.18371095365378665;
    msg.lon = 0.6464358329653679;
    msg.z_units = 181U;
    msg.z = 0.5860313290927998;
    msg.accuracy = 0.6259299464631533;

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
    msg.setTimeStamp(0.7072148488490392);
    msg.setSource(47291U);
    msg.setSourceEntity(160U);
    msg.setDestination(62920U);
    msg.setDestinationEntity(180U);
    msg.target.assign("WNQFJQFYYGXLCIBRKMGHWJFJQFCJRPPQHMBPEZNNZBCHTAKZIVVIZYQNBAOHZYYTGVUGMZENLOXVBEENILPDOCZWRIENUFAJBSHPVMGCFFQWARDLFLQIDHEMTORLMPVTKXCAGDOFQAEJIWDRNOGNTDVTDHTLSLZZCRYKAPUYSXIYJOCMQTKYYIKWPWXPUKSLRWEUGFEOZSSIBUBHCXOSSHGTEOJQXUXUWSCJLDVK");
    msg.lat = 0.8007273576757175;
    msg.lon = 0.4578452495954536;
    msg.z_units = 200U;
    msg.z = 0.45095099591215304;
    msg.accuracy = 0.5158959533800853;

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
    msg.setTimeStamp(0.01980976806958179);
    msg.setSource(43589U);
    msg.setSourceEntity(185U);
    msg.setDestination(61629U);
    msg.setDestinationEntity(66U);
    msg.target.assign("VWFBMTZKEUNCXHNZYKUPVZGWXJVHEMHYRZGLLBBXMWGAJMHSRCOARSNMQBADXYVSBIYPPZKIXDGOGOAS");
    msg.lat = 0.2789625868889075;
    msg.lon = 0.15158721553048982;
    msg.z_units = 107U;
    msg.z = 0.8294323934161948;
    msg.accuracy = 0.0624761672290991;

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
    msg.setTimeStamp(0.23945959505400627);
    msg.setSource(12260U);
    msg.setSourceEntity(171U);
    msg.setDestination(6348U);
    msg.setDestinationEntity(48U);
    msg.name.assign("LUHTTLGTVDXKHPPNPHXZMGHWWKCBCYANHYNFEKLGLBOZGBFCLMDDUGSOOCDUFJJCIEHSZCSSXBRTGGOTQCJVKBQWVKHEP");
    msg.lat = 0.037212232274448254;
    msg.lon = 0.45205767726178503;
    msg.z = 0.9829484614573101;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.6222032872583879);
    msg.setSource(21408U);
    msg.setSourceEntity(249U);
    msg.setDestination(59294U);
    msg.setDestinationEntity(40U);
    msg.name.assign("MZRPWJZMIOGPJIZHVNXLCRYFQPOINGZRTNXIHZZXBHBNUXERKIVFJJLXUMTWSNQTSWPVVXHKTWOODQOAPYFWBMLDBUSRSIFAQRKQHHEXDYLJGBEVAANOIBWDRGQPNCLEBNAOXUJCDQBVXCEFDEGYFTODHUSUCGGRJACLISSYS");
    msg.lat = 0.9421371336272814;
    msg.lon = 0.09544176865702314;
    msg.z = 0.33489039181765556;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.07668262883731047);
    msg.setSource(1787U);
    msg.setSourceEntity(213U);
    msg.setDestination(30447U);
    msg.setDestinationEntity(192U);
    msg.name.assign("UZXQWYUBAJNOJNXE");
    msg.lat = 0.48571083153781114;
    msg.lon = 0.11990897573296044;
    msg.z = 0.5312996895630199;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.2892798400948122);
    msg.setSource(368U);
    msg.setSourceEntity(154U);
    msg.setDestination(12963U);
    msg.setDestinationEntity(51U);
    msg.op = 146U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KGLUBKTNHUJQMAZGILUHFEBOPTRBYTOPGTSJIBAEJPWMDTHRXMBWPRGPNYLCLKWSZEBFXNZVWER");
    tmp_msg_0.lat = 0.18610604013532084;
    tmp_msg_0.lon = 0.7726337756562441;
    tmp_msg_0.z = 0.0642149342342776;
    tmp_msg_0.z_units = 49U;
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
    msg.setTimeStamp(0.4571955233046975);
    msg.setSource(8405U);
    msg.setSourceEntity(50U);
    msg.setDestination(26952U);
    msg.setDestinationEntity(227U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.5488644586300542);
    msg.setSource(16119U);
    msg.setSourceEntity(58U);
    msg.setDestination(56121U);
    msg.setDestinationEntity(220U);
    msg.op = 109U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TWOTVRLKKPOQUBQVDZERKCXFSWEMTFBUOHRSFKKPESXYYRGKL");
    tmp_msg_0.lat = 0.07571823625896379;
    tmp_msg_0.lon = 0.8090322437228561;
    tmp_msg_0.z = 0.6914188628468558;
    tmp_msg_0.z_units = 35U;
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
    msg.setTimeStamp(0.982314188745614);
    msg.setSource(63655U);
    msg.setSourceEntity(58U);
    msg.setDestination(43683U);
    msg.setDestinationEntity(234U);
    msg.value = 0.43688855539160976;
    msg.type = 92U;

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
    msg.setTimeStamp(0.216526641421378);
    msg.setSource(40953U);
    msg.setSourceEntity(143U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(75U);
    msg.value = 0.34815640548824633;
    msg.type = 168U;

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
    msg.setTimeStamp(0.3805022392149996);
    msg.setSource(37619U);
    msg.setSourceEntity(26U);
    msg.setDestination(17856U);
    msg.setDestinationEntity(123U);
    msg.value = 0.2630448221449171;
    msg.type = 158U;

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
    msg.setTimeStamp(0.42138222654405477);
    msg.setSource(17489U);
    msg.setSourceEntity(184U);
    msg.setDestination(5983U);
    msg.setDestinationEntity(16U);
    msg.value = 0.9241104421706376;

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
    msg.setTimeStamp(0.6695386812202484);
    msg.setSource(34556U);
    msg.setSourceEntity(100U);
    msg.setDestination(15101U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8380451636374725;

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
    msg.setTimeStamp(0.6710192721282584);
    msg.setSource(62046U);
    msg.setSourceEntity(165U);
    msg.setDestination(51871U);
    msg.setDestinationEntity(58U);
    msg.value = 0.16395159611237098;

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
    msg.setTimeStamp(0.6882232051515659);
    msg.setSource(38444U);
    msg.setSourceEntity(26U);
    msg.setDestination(6831U);
    msg.setDestinationEntity(64U);
    msg.timestamp_last_service = 0.14594261284741994;
    msg.time_next_service = 0.6727799791434866;
    msg.time_motor_next_service = 0.8587226253342696;
    msg.time_idle_ground = 0.6391796818751743;
    msg.time_idle_air = 0.8289281333395707;
    msg.time_idle_water = 0.8409166120971652;
    msg.time_idle_underwater = 0.840416808557021;
    msg.time_idle_unknown = 0.1508811979633431;
    msg.time_motor_ground = 0.7882783630342072;
    msg.time_motor_air = 0.6500975778996166;
    msg.time_motor_water = 0.6376291267550772;
    msg.time_motor_underwater = 0.8037300836720724;
    msg.time_motor_unknown = 0.5091842191503017;
    msg.rpm_min = -17515;
    msg.rpm_max = 16510;
    msg.depth_max = 0.7098942690551604;

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
    msg.setTimeStamp(0.3179955015769912);
    msg.setSource(44931U);
    msg.setSourceEntity(85U);
    msg.setDestination(20727U);
    msg.setDestinationEntity(236U);
    msg.timestamp_last_service = 0.5064818834429957;
    msg.time_next_service = 0.34488010422349513;
    msg.time_motor_next_service = 0.019257879682152645;
    msg.time_idle_ground = 0.6231975301798053;
    msg.time_idle_air = 0.6104421236921147;
    msg.time_idle_water = 0.9023062199133337;
    msg.time_idle_underwater = 0.1912509072608729;
    msg.time_idle_unknown = 0.85965103235247;
    msg.time_motor_ground = 0.5811752508380361;
    msg.time_motor_air = 0.27429616586548156;
    msg.time_motor_water = 0.5496082791932726;
    msg.time_motor_underwater = 0.85140345006388;
    msg.time_motor_unknown = 0.6215573812664011;
    msg.rpm_min = 4735;
    msg.rpm_max = -1338;
    msg.depth_max = 0.6551352318316878;

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
    msg.setTimeStamp(0.01743038499005678);
    msg.setSource(64511U);
    msg.setSourceEntity(114U);
    msg.setDestination(6179U);
    msg.setDestinationEntity(180U);
    msg.timestamp_last_service = 0.34549140871043627;
    msg.time_next_service = 0.20388227902198286;
    msg.time_motor_next_service = 0.8759234259772641;
    msg.time_idle_ground = 0.35067079631014264;
    msg.time_idle_air = 0.030660469897950238;
    msg.time_idle_water = 0.6457436423411141;
    msg.time_idle_underwater = 0.6537566049860456;
    msg.time_idle_unknown = 0.5716732955012824;
    msg.time_motor_ground = 0.7979619555414511;
    msg.time_motor_air = 0.35215183736233635;
    msg.time_motor_water = 0.04638898277691772;
    msg.time_motor_underwater = 0.8650278254733736;
    msg.time_motor_unknown = 0.007036761555960336;
    msg.rpm_min = 28915;
    msg.rpm_max = -23188;
    msg.depth_max = 0.9434431943527872;

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
    msg.setTimeStamp(0.1129875432729559);
    msg.setSource(14382U);
    msg.setSourceEntity(153U);
    msg.setDestination(12236U);
    msg.setDestinationEntity(213U);
    msg.severity = 67U;
    msg.text.assign("CLQTHIGZJYYXHHCRXVEELSFSYKFLCQMWGZBMHSKBAIQTSBAGBJBTZRDBUYEZWUMNFLGPUYTHWAZSVFMYKAIFXIXJROHZCSLSMSIVXGENIULRXJGM");

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
    msg.setTimeStamp(0.4155953786685739);
    msg.setSource(35926U);
    msg.setSourceEntity(206U);
    msg.setDestination(53282U);
    msg.setDestinationEntity(199U);
    msg.severity = 216U;
    msg.text.assign("FIFQNEJXGDITUBORZIOHPBRGQAMZZIWBENOJTWXTCVRRBEYAJ");

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
    msg.setTimeStamp(0.8868227911852734);
    msg.setSource(11151U);
    msg.setSourceEntity(249U);
    msg.setDestination(58444U);
    msg.setDestinationEntity(167U);
    msg.severity = 168U;
    msg.text.assign("KTDULEGXPROGGQCEHSBAGEADELYCUTPKWLTNKJBFFCVOLISIESZQFHSHRIIRJOXUYSREAUINCOMKGMWORAYDBKVMNYXWDUJTPZAMAJUHQMITOYKTVEGYDDLLPLCGQRCXSXFTINOGIZBSMJXFXXKKKUWZRZONHMWVXRRPZYAVOSACPHIBNZWWQRGBDZUXWTZQJCYVVDCNJEJJDEPLHVPBHVYQMUTNBUPDFMANIAWLHMBSKGSZOFLFBYFJQCP");

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
    msg.setTimeStamp(0.9632531577616943);
    msg.setSource(45975U);
    msg.setSourceEntity(15U);
    msg.setDestination(16982U);
    msg.setDestinationEntity(114U);
    msg.channel = -34;
    msg.value = 238100242;
    msg.gain = 35U;

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
    msg.setTimeStamp(0.969730977613996);
    msg.setSource(45705U);
    msg.setSourceEntity(215U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(104U);
    msg.channel = 80;
    msg.value = -96784312;
    msg.gain = 71U;

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
    msg.setTimeStamp(0.672306203561717);
    msg.setSource(7351U);
    msg.setSourceEntity(195U);
    msg.setDestination(52092U);
    msg.setDestinationEntity(202U);
    msg.channel = -98;
    msg.value = -727732736;
    msg.gain = 231U;

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
    msg.setTimeStamp(0.3386201647957229);
    msg.setSource(28103U);
    msg.setSourceEntity(108U);
    msg.setDestination(40910U);
    msg.setDestinationEntity(161U);
    msg.ch01 = 0.16775282693730542;
    msg.ch02 = 0.34336709481471495;
    msg.ch03 = 0.7875432560449916;
    msg.ch04 = 0.2148412557945949;
    msg.ch05 = 0.8773311796882359;
    msg.ch06 = 0.0005654792526613717;
    msg.ch07 = 0.871099470476744;
    msg.ch08 = 0.3661587371152122;
    msg.ch09 = 0.786511540777391;
    msg.ch10 = 0.9192153970403966;
    msg.ch11 = 0.7531187308565781;
    msg.ch12 = 0.09145766185910453;
    msg.ch13 = 0.7363095564104964;
    msg.ch14 = 0.3219393927229416;
    msg.ch15 = 0.9961553901490199;
    msg.ch16 = 0.7949208108238338;

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
    msg.setTimeStamp(0.9044241405922924);
    msg.setSource(49166U);
    msg.setSourceEntity(216U);
    msg.setDestination(36163U);
    msg.setDestinationEntity(112U);
    msg.ch01 = 0.5362870388667957;
    msg.ch02 = 0.812942126188522;
    msg.ch03 = 0.5157329872467993;
    msg.ch04 = 0.45999040893581755;
    msg.ch05 = 0.9563483552208356;
    msg.ch06 = 0.28962151672791814;
    msg.ch07 = 0.20026780113030396;
    msg.ch08 = 0.3299129737318024;
    msg.ch09 = 0.4468893058332305;
    msg.ch10 = 0.8409879824749827;
    msg.ch11 = 0.45880885870164445;
    msg.ch12 = 0.039928276090353654;
    msg.ch13 = 0.37316076676173326;
    msg.ch14 = 0.7664878119236082;
    msg.ch15 = 0.35842565101754;
    msg.ch16 = 0.482581045690905;

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
    msg.setTimeStamp(0.17760015044403032);
    msg.setSource(28195U);
    msg.setSourceEntity(158U);
    msg.setDestination(4787U);
    msg.setDestinationEntity(108U);
    msg.ch01 = 0.37358045260817996;
    msg.ch02 = 0.6717666168693173;
    msg.ch03 = 0.6291786405441745;
    msg.ch04 = 0.5448726357937862;
    msg.ch05 = 0.11887121011793533;
    msg.ch06 = 0.014115302797553908;
    msg.ch07 = 0.2451683274367339;
    msg.ch08 = 0.39126655334664007;
    msg.ch09 = 0.7646233523640096;
    msg.ch10 = 0.2503291808134067;
    msg.ch11 = 0.7695977026180052;
    msg.ch12 = 0.9480620171367858;
    msg.ch13 = 0.9950732469649837;
    msg.ch14 = 0.4831027846452638;
    msg.ch15 = 0.16382781308179772;
    msg.ch16 = 0.5360100080669584;

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
    msg.setTimeStamp(0.5854835257779211);
    msg.setSource(62517U);
    msg.setSourceEntity(31U);
    msg.setDestination(14391U);
    msg.setDestinationEntity(148U);
    msg.op = 112U;
    msg.lat = 0.25653944193644507;
    msg.lon = 0.9552493749868664;
    msg.height = 0.2879031549012946;
    msg.depth = 0.310608335144579;
    msg.alt = 0.3641541577014281;

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
    msg.setTimeStamp(0.8519760092485217);
    msg.setSource(15698U);
    msg.setSourceEntity(77U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(104U);
    msg.op = 175U;
    msg.lat = 0.584409731665734;
    msg.lon = 0.7752314938023324;
    msg.height = 0.6707998049594499;
    msg.depth = 0.9689710587754481;
    msg.alt = 0.03884468098256866;

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
    msg.setTimeStamp(0.9022894283364735);
    msg.setSource(60163U);
    msg.setSourceEntity(169U);
    msg.setDestination(19829U);
    msg.setDestinationEntity(248U);
    msg.op = 195U;
    msg.lat = 0.42920483514573726;
    msg.lon = 0.791879866223811;
    msg.height = 0.7967772283602397;
    msg.depth = 0.956512462516808;
    msg.alt = 0.22523086963875705;

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
    msg.setTimeStamp(0.8050651379911733);
    msg.setSource(59711U);
    msg.setSourceEntity(176U);
    msg.setDestination(18332U);
    msg.setDestinationEntity(78U);
    msg.nbeams = 75U;
    msg.ncells = 209U;
    msg.coord_sys = 49U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.16938076536824964;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8500753816920866;
    tmp_tmp_msg_0_0.amp = 0.6077746099976021;
    tmp_tmp_msg_0_0.cor = 183U;
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
    msg.setTimeStamp(0.2535228741229315);
    msg.setSource(4511U);
    msg.setSourceEntity(112U);
    msg.setDestination(8647U);
    msg.setDestinationEntity(14U);
    msg.nbeams = 7U;
    msg.ncells = 110U;
    msg.coord_sys = 203U;

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
    msg.setTimeStamp(0.708241239728865);
    msg.setSource(42108U);
    msg.setSourceEntity(0U);
    msg.setDestination(64983U);
    msg.setDestinationEntity(183U);
    msg.nbeams = 24U;
    msg.ncells = 21U;
    msg.coord_sys = 28U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.27024133393832184;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.9038437581471206;
    tmp_tmp_msg_0_0.amp = 0.4724818833588079;
    tmp_tmp_msg_0_0.cor = 234U;
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
    msg.setTimeStamp(0.28284679381365063);
    msg.setSource(39977U);
    msg.setSourceEntity(146U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(129U);
    msg.cell_position = 0.10701316699407148;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.01804458019634103;
    tmp_msg_0.amp = 0.5635821355898425;
    tmp_msg_0.cor = 53U;
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
    msg.setTimeStamp(0.6270482462018361);
    msg.setSource(10485U);
    msg.setSourceEntity(55U);
    msg.setDestination(48297U);
    msg.setDestinationEntity(251U);
    msg.cell_position = 0.74362884974824;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.12480724511318608;
    tmp_msg_0.amp = 0.9596680642801733;
    tmp_msg_0.cor = 106U;
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
    msg.setTimeStamp(0.5325558194629912);
    msg.setSource(25994U);
    msg.setSourceEntity(175U);
    msg.setDestination(59283U);
    msg.setDestinationEntity(176U);
    msg.cell_position = 0.6544254572621461;

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
    msg.setTimeStamp(0.889196815768644);
    msg.setSource(42861U);
    msg.setSourceEntity(98U);
    msg.setDestination(27985U);
    msg.setDestinationEntity(14U);
    msg.vel = 0.9910980689642431;
    msg.amp = 0.4181053609827464;
    msg.cor = 28U;

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
    msg.setTimeStamp(0.4418813377765036);
    msg.setSource(2919U);
    msg.setSourceEntity(236U);
    msg.setDestination(38799U);
    msg.setDestinationEntity(37U);
    msg.vel = 0.9573109477099649;
    msg.amp = 0.8304000265336097;
    msg.cor = 223U;

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
    msg.setTimeStamp(0.7455962909559867);
    msg.setSource(30933U);
    msg.setSourceEntity(104U);
    msg.setDestination(7961U);
    msg.setDestinationEntity(214U);
    msg.vel = 0.48452365748147963;
    msg.amp = 0.22533675984805024;
    msg.cor = 243U;

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
    msg.setTimeStamp(0.3939377369934367);
    msg.setSource(48600U);
    msg.setSourceEntity(190U);
    msg.setDestination(3782U);
    msg.setDestinationEntity(49U);
    msg.name.assign("RBIZNOXRVWEIESRFOJIUAJTNHAYOLLWDVLLQXQHCBDMHXKNBGPGNIKFNPAZBIMVVFGVECDFLHSHHFSXYZEUJRCYATSCPNSMQPTWOGCGEGTKANBPWUKWLNZMEMZQRLPHCL");
    msg.value = 60U;

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
    msg.setTimeStamp(0.17711909890150124);
    msg.setSource(39182U);
    msg.setSourceEntity(84U);
    msg.setDestination(45947U);
    msg.setDestinationEntity(18U);
    msg.name.assign("CCRHBFPSNCNCVLIOZMSLUAPEBXUYFYEHSHBZQRXCPUBXWEDKIZJLYEGIGRAUCOMXPARKNKJUPLEKRFVGGQYJDDFKPLRCLKBMBTEOTWJNYWJLQUQTMDFAPFVRGASMUWENWBMLPXSQODVIQGAGITTNHZACISUJOHZZCHMQWFZHMBKRXVIJNSVWTYYTRHZEOUWMPALSPDYQODQ");
    msg.value = 235U;

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
    msg.setTimeStamp(0.04324387400472107);
    msg.setSource(17031U);
    msg.setSourceEntity(177U);
    msg.setDestination(28139U);
    msg.setDestinationEntity(207U);
    msg.name.assign("LZHDFEGTQXIVBSFJTWSERPYBDMGDXGZQAMIKLNPCLXYREWBXQAIANVROHADUSXRUFHWHUUAWSDMELQHJKNMYPVMFVITYWOXLUECRQKNNP");
    msg.value = 146U;

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
    msg.setTimeStamp(0.8520808163857158);
    msg.setSource(36709U);
    msg.setSourceEntity(76U);
    msg.setDestination(9610U);
    msg.setDestinationEntity(151U);
    msg.name.assign("HNBDAQWUTYCHZOCXWICOFLRRYMSOOZCSEEBVDBDQDTYUJMXSXMCWIIHADVJBHPMCTOGDMZWBPXKRVJISHHJZOGUPTGXRATUOLFHVGHWPKAYTNUTQAIQYJFKMTTVKJZKZEWYZNPIXWFFPRKEZFQNAMPJVPEYZGIZCLSYLVJOWERFNXAQDXNQRRUJGMDSULQN");

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
    msg.setTimeStamp(0.4648645765824533);
    msg.setSource(11987U);
    msg.setSourceEntity(172U);
    msg.setDestination(45276U);
    msg.setDestinationEntity(28U);
    msg.name.assign("PHAJARSHKQHXGYJTSHOVDNYIYMEQOHYKBVPGMXVJAXBBNTBPNZAFWBOYWZRJWNZAKVIHNTKCSVTCEIIWCVGDBIEIHXQIRWSNIRCSRMQKEPLKEDUZPYVNSOFOCZJDZWWFPQRRFTPSMTTPZUAGYXZOSAMLCFBBWTGQBXUBZTYCQXLPJQFEAVCNVUKLDCMUJYMFEQUOQOMUDLDPHFUNSLRGLAIJONYWZKTEMACHDELLJXFLUOIGWGDXSRJF");

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
    msg.setTimeStamp(0.3714586974599191);
    msg.setSource(45576U);
    msg.setSourceEntity(74U);
    msg.setDestination(39315U);
    msg.setDestinationEntity(15U);
    msg.name.assign("SGDKGHCFHOMQBPQJQHKKOMYRUDJYZXFODSUMNHEOPKSTZBZIIGMWABNYIIUWKTWMTWREXDBDIJTHLLJZKMXVDGAWKMPCXTCXMTAZDVBGOEYXDCK");

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
    msg.setTimeStamp(0.7275965971139153);
    msg.setSource(4138U);
    msg.setSourceEntity(49U);
    msg.setDestination(39857U);
    msg.setDestinationEntity(49U);
    msg.name.assign("PDYHKYELMMNGRLAIKHSPSXBGYPUCANRCKGGLQEXJLDVSKUQQJUT");
    msg.value = 35U;

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
    msg.setTimeStamp(0.9980129217063424);
    msg.setSource(4413U);
    msg.setSourceEntity(194U);
    msg.setDestination(47379U);
    msg.setDestinationEntity(181U);
    msg.name.assign("TFRDWPUMUFBNGEFZSLSBMCGHOQLO");
    msg.value = 239U;

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
    msg.setTimeStamp(0.5457497656549697);
    msg.setSource(46584U);
    msg.setSourceEntity(60U);
    msg.setDestination(21803U);
    msg.setDestinationEntity(129U);
    msg.name.assign("QOZVYDYJYCYHINWVDVUEBBRTEAKPWDCSBNRACCPBWEDPQCAMRPUFZOTPZVUB");
    msg.value = 45U;

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
    msg.setTimeStamp(0.1483122442173478);
    msg.setSource(6209U);
    msg.setSourceEntity(214U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6188615632623731;

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
    msg.setTimeStamp(0.6730156287358237);
    msg.setSource(27439U);
    msg.setSourceEntity(99U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(224U);
    msg.value = 0.333153299853713;

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
    msg.setTimeStamp(0.1636256087838418);
    msg.setSource(62224U);
    msg.setSourceEntity(192U);
    msg.setDestination(48403U);
    msg.setDestinationEntity(55U);
    msg.value = 0.5755197610128746;

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
    msg.setTimeStamp(0.5776389510144292);
    msg.setSource(37397U);
    msg.setSourceEntity(54U);
    msg.setDestination(28771U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5721026053062905;

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
    msg.setTimeStamp(0.7047749417483784);
    msg.setSource(1349U);
    msg.setSourceEntity(85U);
    msg.setDestination(61122U);
    msg.setDestinationEntity(41U);
    msg.value = 0.08753675512669701;

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
    msg.setTimeStamp(0.862453660732171);
    msg.setSource(10352U);
    msg.setSourceEntity(196U);
    msg.setDestination(53402U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6143543177147286;

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
    msg.setTimeStamp(0.28816676698006716);
    msg.setSource(7193U);
    msg.setSourceEntity(60U);
    msg.setDestination(3363U);
    msg.setDestinationEntity(69U);
    msg.value = 0.7461184023877045;

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
    msg.setTimeStamp(0.6161497082529585);
    msg.setSource(42462U);
    msg.setSourceEntity(94U);
    msg.setDestination(12406U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9178829598297988;

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
    msg.setTimeStamp(0.6840758226455587);
    msg.setSource(50561U);
    msg.setSourceEntity(183U);
    msg.setDestination(14122U);
    msg.setDestinationEntity(199U);
    msg.value = 0.02520916545733387;

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
    msg.setTimeStamp(0.5906098733942012);
    msg.setSource(20221U);
    msg.setSourceEntity(22U);
    msg.setDestination(47931U);
    msg.setDestinationEntity(103U);
    msg.restriction = 125U;
    msg.reason.assign("SPFZYBIHGYJNRWRPHXOYQTRJRAJHVEDCELLUGXMWZAXNYMBTPSKJVDZTXHBHMCFGTMNHSJLISEGUEXCYQCFVP");

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
    msg.setTimeStamp(0.03179020986399972);
    msg.setSource(35391U);
    msg.setSourceEntity(144U);
    msg.setDestination(47085U);
    msg.setDestinationEntity(46U);
    msg.restriction = 165U;
    msg.reason.assign("OVNFTDWKCPQYJFWEGZHRPCZKGUCSHRQJMNKDZXFPQLZBXDMBSVFUHJSYGYMSRPSPXNHWMKNAKAAJEVATSLBRFNMVLLZANWZUYCHQBPUHJXRHSELOIJIIUEOVXUYCTIZTQLJDOGJNYIVKQMPCDAGWPTRJOBSVEXZGDUWRDXQKLNMZKHFIXTURTFPNWBCDGOHBLVLIXFSCCYMQVQWKJYAIYBIMKTGAVMBHYEZNET");

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
    msg.setTimeStamp(0.8112351101360252);
    msg.setSource(296U);
    msg.setSourceEntity(3U);
    msg.setDestination(34828U);
    msg.setDestinationEntity(176U);
    msg.restriction = 47U;
    msg.reason.assign("DTJTHUEIRGMGSEFXBPJOANUJKWSLYRWTZEGVZVCETOYXQIRYRKWH");

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
    msg.setTimeStamp(0.9320104487501424);
    msg.setSource(58511U);
    msg.setSourceEntity(118U);
    msg.setDestination(54993U);
    msg.setDestinationEntity(229U);
    msg.op = 114U;
    msg.version.assign("NVWOJLGYNSCKROBQBF");
    msg.description.assign("PJSRTIPIFDMOOOODTVMHADEPKTGVXMGNYYPWSUSXJQUMDEVISVWZTAVPHSSRKQDZBGAIPYAGTERCNRIKXJCMAHYAMUWJEGIYPKUMHFDEFLLKFTJOHRBHUNYNUDCNIXYROXUCZWOXTIBFWVEAPNLQYCBSLHZWTYYFIOGUHWBQWZGBFXJQEKFLJNZHNKQAKRTDWMQCJJBAVOLZBSNXPKKIDGQFXPGURMLRWCVGLJUDCQA");

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
    msg.setTimeStamp(0.6986270057614276);
    msg.setSource(41683U);
    msg.setSourceEntity(160U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(37U);
    msg.op = 100U;
    msg.version.assign("NMDWROMOPMKAAHYDSMBNHRACMJSTAPVWUKAVLAHBKXEKLYEFIFPXXQRXOVARFLOTLJBFUSBGT");
    msg.description.assign("RUKOWWEHVHPULUJPWQFNRURKKNXSIIYZS");

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
    msg.setTimeStamp(0.7828144029966615);
    msg.setSource(36761U);
    msg.setSourceEntity(64U);
    msg.setDestination(33224U);
    msg.setDestinationEntity(130U);
    msg.op = 83U;
    msg.version.assign("JCDQGXMSIQACZNAXIRBWINIDJNOLZXOFCGQTRMTARAOZMINPOYGBMYUFMWVLZSCNOIBELOCXGHXPUQFZYTGFVKIVGSRZYEKYDQWU");
    msg.description.assign("ILWDMEIRYJUWESOLMPXRCEYNTXBKGIYFHQOWQGCDMRPAYHDQTLLOMYLVPZSNQPRRHBMXGMPAXZBG");

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
    msg.setTimeStamp(0.13990914622098383);
    msg.setSource(41786U);
    msg.setSourceEntity(233U);
    msg.setDestination(57573U);
    msg.setDestinationEntity(30U);
    msg.value = 0.22104625780304588;

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
    msg.setTimeStamp(0.7297367135234955);
    msg.setSource(45052U);
    msg.setSourceEntity(121U);
    msg.setDestination(58412U);
    msg.setDestinationEntity(128U);
    msg.value = 0.4335180384385695;

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
    msg.setTimeStamp(0.3832844718677346);
    msg.setSource(36612U);
    msg.setSourceEntity(19U);
    msg.setDestination(63807U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6508161004225219;

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

  return test.getReturnValue();
}
