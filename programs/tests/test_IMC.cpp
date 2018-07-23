//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 074ab4f889e1ce61c1c36af9799a308d                            *
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
    msg.setTimeStamp(0.0493480512519);
    msg.setSource(61407U);
    msg.setSourceEntity(3U);
    msg.setDestination(15154U);
    msg.setDestinationEntity(213U);
    msg.state = 38U;
    msg.flags = 106U;
    msg.description.assign("AAMKGHXUJFBVYWWFIABZUKKZZXHKKDCJGVIKMCPEKBOPLOIJRXMSTWHDYOZKGNLVSXCWIREACWVHRQSMMDHTCAJGJEJRYYDLUNIFCMMVEXLONQSXHPVEDXEISAEGTGULOFNWVQOCKXPCGBMTHFAZQGHLFLHQVJOUPNDISGXAPZSAGBYONJZNTMDPLQYEWBRXRKFQCUHTYUTFWOQZUDD");

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
    msg.setTimeStamp(0.136455569116);
    msg.setSource(33775U);
    msg.setSourceEntity(232U);
    msg.setDestination(12439U);
    msg.setDestinationEntity(224U);
    msg.state = 50U;
    msg.flags = 35U;
    msg.description.assign("FUHNDRYNVKBUKJDWXOMQWYS");

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
    msg.setTimeStamp(0.779014645195);
    msg.setSource(54531U);
    msg.setSourceEntity(25U);
    msg.setDestination(17074U);
    msg.setDestinationEntity(100U);
    msg.state = 205U;
    msg.flags = 18U;
    msg.description.assign("CZYHVIZKQGPJUBZXSLQECOAOLJGRJYZAPENVNHKMRVNQGBBAJJDSAKUOFHBWFECNWZVUMFTFEDIJAMLYTDGPTZJGISULOFXURXIUVWZPAXVGTVFFY");

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
    msg.setTimeStamp(0.731575117229);
    msg.setSource(56048U);
    msg.setSourceEntity(217U);
    msg.setDestination(8964U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.285140838485);
    msg.setSource(35416U);
    msg.setSourceEntity(211U);
    msg.setDestination(7023U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.413321440882);
    msg.setSource(58651U);
    msg.setSourceEntity(249U);
    msg.setDestination(35845U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.970850881349);
    msg.setSource(12508U);
    msg.setSourceEntity(53U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(131U);
    msg.id = 25U;
    msg.label.assign("IAVXGRIXYORXONVTMMKYVTI");
    msg.component.assign("FVOWIWTRJSSGAEIRSVZBYDRERCPXCJRJUWMCCSIVCKTRYTSLILGNYLGGNUXNKKBCDRJQOLEFYZDMMVPVOKEGXDCKMUALVDTFWXPTAGNXHNPIUFJCQOTOZYYCOWPWKABGHODNMFAQWXNUOIQBQTTDGSQUHZKSUBQJFAEPIHHNYMVRIRFAIEZEEBNGXJVFKLWHOUXDAHKBJZBUM");
    msg.act_time = 50230U;
    msg.deact_time = 49390U;

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
    msg.setTimeStamp(0.463263927867);
    msg.setSource(6302U);
    msg.setSourceEntity(74U);
    msg.setDestination(23809U);
    msg.setDestinationEntity(31U);
    msg.id = 123U;
    msg.label.assign("ZMPLVNIDZHSTPTURYNFCMV");
    msg.component.assign("XKBZQUUPEYTTOAOLCWMHNDLJGJEUWWQXKAQJHYQXXJKRGANENIMSINAVSHHSRTKDMFQIGDSUMVRHLOARMBVKPNJOPBCAMEWAUVVIXNITSEWLOBDFCPYMFMWVHWEPKSGHNDTNRQBCGYPJCFPHXZFSGLICDTRYXLZZBAZQXKO");
    msg.act_time = 48969U;
    msg.deact_time = 35183U;

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
    msg.setTimeStamp(0.618246685677);
    msg.setSource(38455U);
    msg.setSourceEntity(228U);
    msg.setDestination(24262U);
    msg.setDestinationEntity(66U);
    msg.id = 215U;
    msg.label.assign("VLOETAFXVMXPGDKZTFNQYQUQCELBYQAJVUDTKIRKLHVNSWUGMHXJLMIAYHGSKKBBFBWZFDEVTNUUSVRHSMBIFDXIZECUHXSICLOCKYTPZIAWCHNPAGZMKORPQGOZLIDVCYINRIDQJWCJZRECGSFPCOOSUDWAXWVJLEKOHPL");
    msg.component.assign("IPOYXSMZCJUXVLOVNAPGEZOJNRVKLCLPURWRYODADJSNMAYBIUPVDFADIXHYLZZWEAISMQNWBPNHNFRCQUYXQPHSMQOOBSAXRGUXJIMPADVBISBTZCVWEMNLTQDENFUJDHTEFVUWYY");
    msg.act_time = 48861U;
    msg.deact_time = 20165U;

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
    msg.setTimeStamp(0.624279389362);
    msg.setSource(36646U);
    msg.setSourceEntity(112U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(229U);
    msg.id = 94U;

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
    msg.setTimeStamp(0.802329428765);
    msg.setSource(26365U);
    msg.setSourceEntity(160U);
    msg.setDestination(52883U);
    msg.setDestinationEntity(112U);
    msg.id = 148U;

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
    msg.setTimeStamp(0.362578663297);
    msg.setSource(43069U);
    msg.setSourceEntity(15U);
    msg.setDestination(48355U);
    msg.setDestinationEntity(207U);
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
    msg.setTimeStamp(0.171979997094);
    msg.setSource(63084U);
    msg.setSourceEntity(80U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(74U);
    msg.op = 219U;
    msg.list.assign("IRGPFBXESIDMGBJRTOYIFQQEXUGAIULNOYEXINGYVJBNVPYNOJZYAHPZAFACERBKSHOMOJVZMQCRBZSPKVNDJZDYXSKQWCNKQZNMHBLIIMLRYDSMLEJRWCVZGKKHHWQTTDPAWTHVNSDFQFZPVECOMLWQUPVASWRQLKUMLFDERIXDCVMOPXTRLCIBY");

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
    msg.setTimeStamp(0.783195527125);
    msg.setSource(24556U);
    msg.setSourceEntity(114U);
    msg.setDestination(39901U);
    msg.setDestinationEntity(137U);
    msg.op = 156U;
    msg.list.assign("FUJBTZCXQYJKWGZKWAMEVOSWMALICFUWUSLBKLWKNBZPBTRPGXTTCRTVUUXEVVWAAJPQINCZABYEXDSGMWREFEHODFRPVYGDOETCHQABKSRLFTXFSDICEUQIQNFUMFJZPKNDMMRIQOOXAUOAFJMMUYJSALXLQYGZRIZHDCIDTEKZSLNYGVW");

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
    msg.setTimeStamp(0.989578801742);
    msg.setSource(31948U);
    msg.setSourceEntity(139U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(129U);
    msg.op = 149U;
    msg.list.assign("LGOLUTEWIVMQFNLBSCWPIAVKHIZWMCWVQMCAORHZNCKOUSBQNRYEXHHATDNIARGBQGKPMEXJMKWNEFGYGVKLDXZBMRQWIGIHJOXZBFULKWKDUZLOFZFYYQNEUIRNPRGSCWXMCAVCHFSTZLBBSPVQZFVJFGETEDKEXUERXOLCDKATJTJUYSDDNCYQYSTJNQOXPXHPMSPHVYDGJTTRYB");

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
    msg.setTimeStamp(0.343017329395);
    msg.setSource(22995U);
    msg.setSourceEntity(22U);
    msg.setDestination(9294U);
    msg.setDestinationEntity(58U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.127376998846);
    msg.setSource(16067U);
    msg.setSourceEntity(5U);
    msg.setDestination(12648U);
    msg.setDestinationEntity(150U);
    msg.value = 79U;

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
    msg.setTimeStamp(0.591195616561);
    msg.setSource(56011U);
    msg.setSourceEntity(205U);
    msg.setDestination(19515U);
    msg.setDestinationEntity(62U);
    msg.value = 217U;

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
    msg.setTimeStamp(0.628657915855);
    msg.setSource(38255U);
    msg.setSourceEntity(134U);
    msg.setDestination(11450U);
    msg.setDestinationEntity(190U);
    msg.consumer.assign("MRLPIDEJGSRGLVBNGVZKWDIBTMBGONRRTYQHBGFKCCE");
    msg.message_id = 4409U;

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
    msg.setTimeStamp(0.417882551913);
    msg.setSource(3355U);
    msg.setSourceEntity(19U);
    msg.setDestination(38455U);
    msg.setDestinationEntity(244U);
    msg.consumer.assign("ZYWMNDECHXWZJOYEMPWPMVNNLEJDWXBBTPUTNZIFRGVHMPDCIRFMHRHQAUUAZSBAYJXTVEVEVFDQWMIAXXMURFVNQJGAWZYBZKZLXIGYSIIBFTGLQBLINSHOKZQJUDYYWDPOPDLFAXJOGOECLSPATSJLUMQKOTOPJKTCRRVBXFQTKWDLNPFRIFOSMAELTSOIGSQYKGDGQBRUNKJEAUKWVGSRNXUHBCDMJQHZCVARF");
    msg.message_id = 9926U;

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
    msg.setTimeStamp(0.744150235545);
    msg.setSource(56379U);
    msg.setSourceEntity(61U);
    msg.setDestination(61729U);
    msg.setDestinationEntity(93U);
    msg.consumer.assign("QRGRXDFJOZBQDDEKEOSBGIZIHHYGXNVAYZIUEPBYGPDHBXLDURPMFWIVEDJIIXE");
    msg.message_id = 23243U;

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
    msg.setTimeStamp(0.740125688008);
    msg.setSource(43105U);
    msg.setSourceEntity(69U);
    msg.setDestination(50952U);
    msg.setDestinationEntity(131U);
    msg.type = 193U;

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
    msg.setTimeStamp(0.112118775207);
    msg.setSource(12169U);
    msg.setSourceEntity(47U);
    msg.setDestination(52533U);
    msg.setDestinationEntity(147U);
    msg.type = 69U;

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
    msg.setTimeStamp(0.730989676499);
    msg.setSource(54365U);
    msg.setSourceEntity(157U);
    msg.setDestination(43148U);
    msg.setDestinationEntity(137U);
    msg.type = 214U;

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
    msg.setTimeStamp(0.990704438203);
    msg.setSource(14548U);
    msg.setSourceEntity(185U);
    msg.setDestination(5024U);
    msg.setDestinationEntity(117U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.344542157873);
    msg.setSource(52421U);
    msg.setSourceEntity(126U);
    msg.setDestination(14058U);
    msg.setDestinationEntity(250U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.214170941929);
    msg.setSource(11336U);
    msg.setSourceEntity(103U);
    msg.setDestination(47676U);
    msg.setDestinationEntity(56U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.632611689297);
    msg.setSource(64253U);
    msg.setSourceEntity(161U);
    msg.setDestination(27953U);
    msg.setDestinationEntity(46U);
    msg.total_steps = 73U;
    msg.step_number = 207U;
    msg.step.assign("QVZDMGBABDPYEWQKVBLBZEMHKIDKWOSUITUWCTDQLSFHKUDZQNNMAZLPWQZNDHIVPWBNLFPBTDFMFEEGVPXFPECRPEZINOLGXRHKYESASZFC");
    msg.flags = 245U;

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
    msg.setTimeStamp(0.0668643329364);
    msg.setSource(10800U);
    msg.setSourceEntity(233U);
    msg.setDestination(19372U);
    msg.setDestinationEntity(127U);
    msg.total_steps = 110U;
    msg.step_number = 114U;
    msg.step.assign("KXIQVCHPASNTQGNSXWFAAMOVZUVERHPOALAVDITHGINFVJBPBZPYWNXAFMASRFEDFCSKTWGBIXOVDTHEHLWVICDQKRLILJDFEUZUOUKTZNKYVIJLLBNDZMCQKBRSYZRQHDAEGOXNXPWLLJRCWUIBQGNHLYVRSHGPFGZKDTJUYQMYIYEQ");
    msg.flags = 221U;

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
    msg.setTimeStamp(0.625666655794);
    msg.setSource(50604U);
    msg.setSourceEntity(175U);
    msg.setDestination(24996U);
    msg.setDestinationEntity(124U);
    msg.total_steps = 75U;
    msg.step_number = 226U;
    msg.step.assign("QVKREFELKOTCUJDYAXMYNBIIQMFBVNJNPMISOOBSVYIBMAAVOZIENMGZUCBTEHOMKBMWCWLZVHWOZEAKARSGXFRXPZJUGMVCDHARPZGSUHUFQAHDZZLTGWMQSKKTERPOGUQVSFWVYDDDNIOOCCWNUKJHJFAXYERIQFPSPYTKBIZWADXLNXDTEVDUJISFXRRLNTNYVDOHCHRQKLGFSTWJEQQ");
    msg.flags = 24U;

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
    msg.setTimeStamp(0.453417681556);
    msg.setSource(46724U);
    msg.setSourceEntity(235U);
    msg.setDestination(54970U);
    msg.setDestinationEntity(84U);
    msg.state = 79U;
    msg.error.assign("IAADCJTBXHOLMXHFHICRZOIQYYWXMTANDXMWJMOVPZWEFNFSWDKBAHXGKSVTVOBHNDEPLZXSMSFYAKFGOUIYZPZQBDEVNIGJYEXDRNBSTLHORSLHUEQVRKLTYDRZGLMPXFWNXDZOQBQAQNORJMWURLYLQVPYCCFPAGVYEIQSZMVGUATIQFDFMYOSBEWBJUQEHVLUZLB");

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
    msg.setTimeStamp(0.270605580476);
    msg.setSource(52930U);
    msg.setSourceEntity(67U);
    msg.setDestination(25978U);
    msg.setDestinationEntity(220U);
    msg.state = 85U;
    msg.error.assign("AKIOGXJCSIATKLLGLFIANPSCHJHKNAXWDSORQORGGNYEBHUWKXEUSPZZLFDXNEFQSRJRMORMNNXPIXKCTIHCPQGTEMTFZSUYQSTNXVTHAMBBMDFVWJIXTASUAFLADELKJWHKKROMCPMWXVMIURP");

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
    msg.setTimeStamp(0.871205931006);
    msg.setSource(47320U);
    msg.setSourceEntity(234U);
    msg.setDestination(55232U);
    msg.setDestinationEntity(178U);
    msg.state = 179U;
    msg.error.assign("YMRWTUGDESYEZDCYULFYCJAATJCQGOOVGPCIRETXFLGZKWTUDLNQJBIJEAJSEFLCFVFTWZKMRNDKAEISDTKKMBSWLMWYIOHBVCTIBXQBUJQPGXUUVSQRAKYFGLPXNHWOGXNMZHSUSZYVIFSBPGDZAIIPYXRTJEDQPXMUMURRKOSNKYWCOVLRAHBVQCVIBXRZMWPGZEHNHGJPYKWCJNNOBXJBFHPALQHINEWVXPNTD");

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
    msg.setTimeStamp(0.151122544983);
    msg.setSource(61717U);
    msg.setSourceEntity(181U);
    msg.setDestination(38694U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.505795767845);
    msg.setSource(57462U);
    msg.setSourceEntity(246U);
    msg.setDestination(18485U);
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
    msg.setTimeStamp(0.400519537288);
    msg.setSource(30468U);
    msg.setSourceEntity(91U);
    msg.setDestination(63711U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.0793666022549);
    msg.setSource(23169U);
    msg.setSourceEntity(3U);
    msg.setDestination(2501U);
    msg.setDestinationEntity(140U);
    msg.op = 181U;
    msg.speed_min = 0.535731131253;
    msg.speed_max = 0.806925425143;
    msg.long_accel = 0.964199116445;
    msg.alt_max_msl = 0.722396203356;
    msg.dive_fraction_max = 0.122863999715;
    msg.climb_fraction_max = 0.786474288216;
    msg.bank_max = 0.436782029124;
    msg.p_max = 0.819573965601;
    msg.pitch_min = 0.0864312995303;
    msg.pitch_max = 0.048909856944;
    msg.q_max = 0.272644248119;
    msg.g_min = 0.244172115685;
    msg.g_max = 0.88026460922;
    msg.g_lat_max = 0.461546247053;
    msg.rpm_min = 0.724105735753;
    msg.rpm_max = 0.684590494644;
    msg.rpm_rate_max = 0.137965399801;

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
    msg.setTimeStamp(0.770852423939);
    msg.setSource(44727U);
    msg.setSourceEntity(97U);
    msg.setDestination(1728U);
    msg.setDestinationEntity(88U);
    msg.op = 128U;
    msg.speed_min = 0.319908121837;
    msg.speed_max = 0.189885364046;
    msg.long_accel = 0.967460682993;
    msg.alt_max_msl = 0.245834424963;
    msg.dive_fraction_max = 0.445698832359;
    msg.climb_fraction_max = 0.197181014614;
    msg.bank_max = 0.202615253623;
    msg.p_max = 0.131828388067;
    msg.pitch_min = 0.0602220922268;
    msg.pitch_max = 0.0156531098174;
    msg.q_max = 0.265459779104;
    msg.g_min = 0.417583830482;
    msg.g_max = 0.515844229655;
    msg.g_lat_max = 0.696074699523;
    msg.rpm_min = 0.157713986193;
    msg.rpm_max = 0.143563201989;
    msg.rpm_rate_max = 0.96110088812;

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
    msg.setTimeStamp(0.558236052969);
    msg.setSource(53878U);
    msg.setSourceEntity(206U);
    msg.setDestination(42752U);
    msg.setDestinationEntity(250U);
    msg.op = 113U;
    msg.speed_min = 0.936349092951;
    msg.speed_max = 0.615909794789;
    msg.long_accel = 0.0996254916734;
    msg.alt_max_msl = 0.0513639165429;
    msg.dive_fraction_max = 0.580248467866;
    msg.climb_fraction_max = 0.736335876102;
    msg.bank_max = 0.756374902172;
    msg.p_max = 0.769410413277;
    msg.pitch_min = 0.0472572054861;
    msg.pitch_max = 0.808638548129;
    msg.q_max = 0.845731426739;
    msg.g_min = 0.547861196394;
    msg.g_max = 0.641124881871;
    msg.g_lat_max = 0.431525189004;
    msg.rpm_min = 0.765581772165;
    msg.rpm_max = 0.0372925064492;
    msg.rpm_rate_max = 0.826320450467;

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
    msg.setTimeStamp(0.465607629486);
    msg.setSource(57840U);
    msg.setSourceEntity(61U);
    msg.setDestination(20515U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.165366132494);
    msg.setSource(64449U);
    msg.setSourceEntity(104U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.58145747489);
    msg.setSource(33641U);
    msg.setSourceEntity(226U);
    msg.setDestination(47066U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.113889635243);
    msg.setSource(41641U);
    msg.setSourceEntity(19U);
    msg.setDestination(19282U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.0468570697238;
    msg.lon = 0.829182081401;
    msg.height = 0.536704266984;
    msg.x = 0.879803904927;
    msg.y = 0.380463881928;
    msg.z = 0.821703403512;
    msg.phi = 0.428941170902;
    msg.theta = 0.691800321379;
    msg.psi = 0.103146027959;
    msg.u = 0.909553275672;
    msg.v = 0.519648245113;
    msg.w = 0.978222606647;
    msg.p = 0.679259874028;
    msg.q = 0.239481148845;
    msg.r = 0.393320191906;
    msg.svx = 0.421120878137;
    msg.svy = 0.513355058349;
    msg.svz = 0.579684303477;

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
    msg.setTimeStamp(0.442132486306);
    msg.setSource(2790U);
    msg.setSourceEntity(73U);
    msg.setDestination(137U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.105520732929;
    msg.lon = 0.185696017413;
    msg.height = 0.333457734559;
    msg.x = 0.818610566697;
    msg.y = 0.657011633223;
    msg.z = 0.0754817450401;
    msg.phi = 0.690319239216;
    msg.theta = 0.481214270442;
    msg.psi = 0.0920087905112;
    msg.u = 0.691162314551;
    msg.v = 0.018031566569;
    msg.w = 0.772982905472;
    msg.p = 0.502091083357;
    msg.q = 0.933963682513;
    msg.r = 0.530385986164;
    msg.svx = 0.31974403732;
    msg.svy = 0.676527068857;
    msg.svz = 0.276442581306;

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
    msg.setTimeStamp(0.987626807762);
    msg.setSource(48296U);
    msg.setSourceEntity(138U);
    msg.setDestination(59040U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.912093858049;
    msg.lon = 0.586326115308;
    msg.height = 0.483046768359;
    msg.x = 0.167415441247;
    msg.y = 0.0692117262022;
    msg.z = 0.278938217558;
    msg.phi = 0.0997960399079;
    msg.theta = 0.29874392389;
    msg.psi = 0.0904716114243;
    msg.u = 0.437688787261;
    msg.v = 0.627199097149;
    msg.w = 0.354589616881;
    msg.p = 0.895431057695;
    msg.q = 0.844098874861;
    msg.r = 0.698051169168;
    msg.svx = 0.747344357833;
    msg.svy = 0.659675257443;
    msg.svz = 0.786468822089;

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
    msg.setTimeStamp(0.263106443092);
    msg.setSource(33969U);
    msg.setSourceEntity(191U);
    msg.setDestination(35809U);
    msg.setDestinationEntity(128U);
    msg.op = 216U;
    msg.entities.assign("DWISEFXQMONTQHOJBJTGRUKYVOHZBDTOUMHMTFIPAULRASYBOZQAYTOXWPCNAGDIKXYBKIJMX");

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
    msg.setTimeStamp(0.951035318018);
    msg.setSource(4861U);
    msg.setSourceEntity(1U);
    msg.setDestination(2046U);
    msg.setDestinationEntity(41U);
    msg.op = 54U;
    msg.entities.assign("INMTXUDRCQVNVGHJJLBXZTDWTOWFFROIKDCNVQYFFFMWVUEIFCUYTYYJUAJPIKLEYZQAKKUHPBEOGSXCUSKVDBYCKFBGCNCVTMQWIEUJRXOTEUZOJGDGRIBYZOQEAJRCWKYIYWVPQBVQHRSXALVWNLXCENOZDBSOMDTKTVBZMLBOGHQMBSLMJSXHMGPFTMFWHRKR");

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
    msg.setTimeStamp(0.843003660406);
    msg.setSource(7353U);
    msg.setSourceEntity(237U);
    msg.setDestination(60138U);
    msg.setDestinationEntity(32U);
    msg.op = 248U;
    msg.entities.assign("QOZRGMUXVNFZCSRTBHYQLPAECNQOZTXEGTOAFOEWDHNOSDCGDTEQKNSUDRZXRQCUIMJTVBYZHGYABSKRUDPPBLWKHSOSPVXXINOCJIWLYMQAUNZBBQEAAXIEUVYPJCRYTKWVAUMAVWKRWQIAWJ");

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
    msg.setTimeStamp(0.126293164406);
    msg.setSource(42809U);
    msg.setSourceEntity(253U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(241U);
    msg.type = 236U;
    msg.speed = 24189U;
    const char tmp_msg_0[] = {88, -89, 115, -125, -126, -19, -16, 116, 42, -54, -123, 20, 61, -73, -122, 83, -70, -79, 12, 21, -118, 55, -121, 44, 88, -14, -64, 37, -31, 94, -54, -116, -16, 109, -62, 51, 74, -101, 78, 56, 88, 89, 2, -72, -95, 114, 93, 51, 117, -68, -80, -9, 117, 44, 30, -58, -67};
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
    msg.setTimeStamp(0.615152286362);
    msg.setSource(38507U);
    msg.setSourceEntity(77U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(238U);
    msg.type = 73U;
    msg.speed = 3071U;
    const char tmp_msg_0[] = {-15, -28, -92, 76, -118, 88, -123, -109, 60, 75, 121, 45, -4, 11, -19, 95, -18, -68, -27, 21, -68, 125, -94, -97, 34, 19, -57, -73, 86, 116, 57, 19, 1, 76, -57, 50, 121, -47, 68, -124, -21, -35, -49, -126, -122, 85, 32, -97, 38, -90, 98, -17, 10, -108, 56, 0, 89, -102, -35, -42, -28, 38, 74, -4, 41, -90, 22, 80, -78, 48, -118, -80, 61, -87, -2, -115, -5, -83, -7, -76, 98, -61, 33, 35, 72, 8, -25, 105, 76, 14, 14, 27, -26, -48, -19, 44, 54, -22, -46, 97, 29, 57, -125, -108, -62, -45, 121, 56, -64, 78, 48, 95, -84, 73, -107, 5, -83, -34, 53, 126, -18, 33, 8, -99, -27, 12, 88, -33, 93, 110, -21, 62, 102, 100, -69, 80, -18, -22, -16, -8, 93, -123, -59, -88, -62, 110, -42, 54, -65, -67, 106, -45, -109, 42, -85, 18, -125, 65, -33, -5, 32, -128, 33, -115, -3, -6, -12, 96, 16, -38, -33, 2, 89, 119, -100, 37, 8, -48, -67, -44, -25, 99, 46, -85, -10, 95, -126, 105, -94, -49, 123, 88, 113, -47, 93, 70, 63, -62, 22, -13, 105, -114, 70, -79, 48, 108, -70, -17, 58, -58, 46, 15, -41, -53, -53, -111, -86, 37, 29, 120, 50, 23, -25, 86, -34, 66, 68, 11, -96, -29, -17, 9, -88, -91, 25, 82, -24, 56, -35, 83, 51, 104, -47};
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
    msg.setTimeStamp(0.874930007236);
    msg.setSource(25764U);
    msg.setSourceEntity(61U);
    msg.setDestination(2622U);
    msg.setDestinationEntity(251U);
    msg.type = 3U;
    msg.speed = 44562U;
    const char tmp_msg_0[] = {2, 9, 100, -40, 66, 77, 35, -37, -125, 39, 23, -1, -103, -12, -56, -27, 15, -84, 94, 17, 119, 82, -88, -52, -60, 22, 7, -29, -110, -2, -80, 47, 113, 109, -128, 60, 21, 98, -95, -119, -114, 105, -19, 12, -89, -123, 90, 119, 111, 94, -33, 48, -102, 100, 70, 6, 74, -62, 3, 26, -101, -87, 119, -100, 64, 62, -1, -110, -120, 89, -61, -49, -103, -100, -8, -55, -84, 50, 32, 36, 1, 104, -119, -7, -108, -22, -24, 105, 77, -15, -68, 6, 18, 118, -2, 46, -3, 105, 99, -58, -123, -91, -120, 84, 38, 64, 73, 32, -56, -11, -9, 20, -72, 70, 57, 122, -3, 60, 108, -69, -119, 3, 19, 9, -113, -6, -80, 117, 87, 32, -33, -40, -7, 23, -62, -75, -82, -73, 123, 74, -75, -118, -60, 37, -107, -45, 16, 106, -66, 92, -126, -7, 99, -4, -123, 119, -116, -92, 8, -100, -70, -65, 1, 108, 121, 106, 80, -28, 27, -111, -18, -126, -73, 86, -20, -8, 37, -96, -116, -108, -83, -76, 120, -119, 19, 32, 76, -37, -126, 103, 47, 13, 111, 51, 48, -93};
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
    msg.setTimeStamp(0.667177099057);
    msg.setSource(50756U);
    msg.setSourceEntity(235U);
    msg.setDestination(56350U);
    msg.setDestinationEntity(253U);
    msg.op = 79U;
    msg.tas2acc_pgain = 0.292551251992;
    msg.bank2p_pgain = 0.212087593148;

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
    msg.setTimeStamp(0.357937343552);
    msg.setSource(7337U);
    msg.setSourceEntity(68U);
    msg.setDestination(47870U);
    msg.setDestinationEntity(247U);
    msg.op = 170U;
    msg.tas2acc_pgain = 0.834399664678;
    msg.bank2p_pgain = 0.480450986465;

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
    msg.setTimeStamp(0.496533838323);
    msg.setSource(28452U);
    msg.setSourceEntity(3U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(163U);
    msg.op = 237U;
    msg.tas2acc_pgain = 0.110002970518;
    msg.bank2p_pgain = 0.921897145618;

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
    msg.setTimeStamp(0.75394498397);
    msg.setSource(23939U);
    msg.setSourceEntity(179U);
    msg.setDestination(34988U);
    msg.setDestinationEntity(144U);
    msg.available = 605831953U;
    msg.value = 10U;

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
    msg.setTimeStamp(0.449960249303);
    msg.setSource(61158U);
    msg.setSourceEntity(44U);
    msg.setDestination(38612U);
    msg.setDestinationEntity(31U);
    msg.available = 3789332651U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.868506512544);
    msg.setSource(23359U);
    msg.setSourceEntity(123U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(248U);
    msg.available = 2214725791U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.224693636116);
    msg.setSource(5838U);
    msg.setSourceEntity(3U);
    msg.setDestination(38415U);
    msg.setDestinationEntity(90U);
    msg.op = 102U;
    msg.snapshot.assign("MWNZKZWNQUTNUPTJYLEBBAUMLBCMXJGWREZBFDFUTGJBJIMASWKQZVKEDOCFRCNJITCEVLFIFNERDPYTHWANYMGPQSLEGHDPESDFUPQAQKBSSMZGKWTSAMUCBWYSIKIUBXHZQLXKIPLXVXQWLFYUCZKIXJHDVRQLSWJQDAXSDRMDPGNS");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 39829U;
    tmp_msg_0.plan_size = 3574848052U;
    tmp_msg_0.change_time = 0.958435458238;
    tmp_msg_0.change_sid = 702U;
    tmp_msg_0.change_sname.assign("SACWSKUAMVLFMYDUDIMKJTETPNLIAPGCFKRLVSVNBUIMTFRWJZNQQYCUWK");
    const char tmp_tmp_msg_0_0[] = {-18, -31, 116, -33, 112, 45, -39, 73, 22, 60, 77, -76, 8, 66, -89, -119, -31, -123, -23, 66, -66, 96, -68, 40, -7, -2, -82, -30, -64, -7, 69, -95, -43, 60, -92, -67, 30, -92, -81, -76, 73, 96, -60, 36, -119, 0, -30, 80, 114, 109, 89, -103, -88, -41, 96, 69, -104, 121, -35, 122, -124, -82, -12, 12, -117, 120, 88, -97, 83, -112, 30, -92, -80, 21, 109, -119, 33, 125, 79, -85, 101, 21, 1, -97, 106, -17, 60, -67, -54, -57, 72, -42, -36, 62, -9, 22, 1, -7, -96, -23, -89, -5, 75, 70, -37, -70, -77, -92, 70, -3, -80, 65, 115, -45, -70, -22, 83, -103, -49, -5, -44, -98, -112, 115, -45, 86, 74, 7, 88, 11, -60, 98, 6, 124, 78, -35, -66, 70, -90, 65, 55, 17, -5, 95, 111, 63, 57, -65, -85, -12, 100, -25, -26, -17, 20, 96, -121, -87, 98, -98, -41, -60, 118, 1, -110, 25, -97, -31, -27, -27, -126, 20, -90, -43, -116, -61, -73, 73, 97, -62, -47, -44, 17, -83, -98, -101, 24, 1, -72, -24, 17, -116, -69, -59, -60, -108, -113, 62, -127, 97, -11, 86, 47, 47, -122, -61, -32, 55, 55, 42, -31, 73, 45, 78, -115, -92, 115, 90, -54, -37, 21, 23, -67, 23, 94, -4, -48, 39, 111, -45, -8, 3, 1, 67, 59, -86, 46, -16, -116};
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
    msg.setTimeStamp(0.615751883375);
    msg.setSource(54246U);
    msg.setSourceEntity(141U);
    msg.setDestination(125U);
    msg.setDestinationEntity(161U);
    msg.op = 204U;
    msg.snapshot.assign("IDIQJEUOYBBZCXMZPRBGHXGWVFCCMGOLELOJINMZUUIMUIRJIOGEPTNFKGASELPMWZQWLSVYXKUHYHBZOFBPU");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 35196U;
    tmp_msg_0.x = 0.380400263574;
    tmp_msg_0.y = 0.793919181437;
    tmp_msg_0.z = 0.711328129075;
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
    msg.setTimeStamp(0.741990965741);
    msg.setSource(17724U);
    msg.setSourceEntity(140U);
    msg.setDestination(45473U);
    msg.setDestinationEntity(1U);
    msg.op = 175U;
    msg.snapshot.assign("RFKZAESFOOZHBYFFOITHAJRSEDZXWSJCUGKEZPCOPNPVHJVBAABTKGVLSEONLBEDQBBXMELUWMAZUNXNKSGOUQDXWGPISKQOTBCECRWRLPJPQLSUHAYNIKDGLWKMOLJDKHJREKXRTQHNYHSAVCMDNILVMGXCQUTDJDTFUIJYUMUFYHXPBBFHWGKEHZMFVRFIQQGBYWZMQIWJCTYVIYTDWTPJECZZNOPRCYAYLIQLVNWX");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.144027701392);
    msg.setSource(20974U);
    msg.setSourceEntity(249U);
    msg.setDestination(55992U);
    msg.setDestinationEntity(248U);
    msg.op = 133U;
    msg.name.assign("HIWYZQKOPIRIRRHQDXIPSKRCEJNZZWSTPLVSYAVKSTQYVXIEPMGJNNBBKMHWGGYMTIMPRECFOQQPAGXUVUAWFSNNGIMTJDRIZBDOZMZBKCUB");

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
    msg.setTimeStamp(0.961576555242);
    msg.setSource(42413U);
    msg.setSourceEntity(125U);
    msg.setDestination(15581U);
    msg.setDestinationEntity(239U);
    msg.op = 136U;
    msg.name.assign("OVMHAYYXPKBBVDQCOCGIUPRV");

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
    msg.setTimeStamp(0.510273257453);
    msg.setSource(778U);
    msg.setSourceEntity(146U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(243U);
    msg.op = 204U;
    msg.name.assign("UOFWQSJTJLDAEZGCBWFTVMWNXDFXNLBUVOXSWPVAMJUWV");

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
    msg.setTimeStamp(0.542155961601);
    msg.setSource(63248U);
    msg.setSourceEntity(12U);
    msg.setDestination(58220U);
    msg.setDestinationEntity(127U);
    msg.type = 225U;
    msg.htime = 0.203957725759;
    msg.context.assign("WNRVHHDOBSMWHYOUIGCJWOQTHDXGXIAXOUTCUQJANRUGILTMQWATPXVQIMNQIKXSQFBGJCIHUNKXQOKTNBTGBOCVHKMEEFUARNATGZZAYRDOIEWUSNFRZHPFGKNAWJFKJGC");
    msg.text.assign("GHYLWWHBZOLJRXGKCBMDIRDQEJPOAUEEBQFKIKSXARSCNZNUOKCXLMHFSITEZAVA");

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
    msg.setTimeStamp(0.0855073461363);
    msg.setSource(172U);
    msg.setSourceEntity(58U);
    msg.setDestination(48710U);
    msg.setDestinationEntity(239U);
    msg.type = 58U;
    msg.htime = 0.188399858199;
    msg.context.assign("LWAXZUXEQRDPVKSNJLGXKLXTLTALLVEJYVGJHQZKNDIMVRFVHHHOTEJCWQDKHKOZRKJHCBBQXCSRSGVTRTPBF");
    msg.text.assign("YMIYRPKQGQZXNGAWZPGCUCNJAHKBPFRATJNLUZQSPESKDZWNVPASQDBVJVLNFCFDCIIYYHBWNBZXPEMOGFTMJQLBHOLDLCYJTSFBWUSRYYWERKGCPSRKDQDHEADYIMPHWHBIUKTJCSHFNVCJMEOGTANGTHLVF");

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
    msg.setTimeStamp(0.501526126905);
    msg.setSource(14351U);
    msg.setSourceEntity(136U);
    msg.setDestination(15417U);
    msg.setDestinationEntity(120U);
    msg.type = 49U;
    msg.htime = 0.771278173024;
    msg.context.assign("NEIYODJVYNFWQIFBNAONSABMPHJIWOPUWWHTMYEJZPRPZKQNVXAMGRBACFDLXSGNZVKKWKPGSKSLIAVLMGICFYHQVUXEJQDLTFRTBWUDFNGMPKHBHYARQRHMOBYOPSGCJJZLPZJTUH");
    msg.text.assign("FDOAKHWBVKLXKASENCNGCYDZEDUAVURAHEXNOYOGULYCVTFZOCCRNHJRVMWZLSITJPTZRZVIWILARQBQUUEPENGXDFYEFYWYKSIXILKPIRPLNBARBIAXTEAADQWYWYSUMSTNYNWDJTFVDQUFBPJRGEVBZMMMLDKKNQPOSLPGIHOJCJCFXZTZBXTSJTGGKUSBX");

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
    msg.setTimeStamp(0.500486052666);
    msg.setSource(11799U);
    msg.setSourceEntity(111U);
    msg.setDestination(23478U);
    msg.setDestinationEntity(210U);
    msg.command = 162U;
    msg.htime = 0.662066224342;

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
    msg.setTimeStamp(0.797473916484);
    msg.setSource(10304U);
    msg.setSourceEntity(33U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(67U);
    msg.command = 170U;
    msg.htime = 0.571452938207;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 4U;
    tmp_msg_0.htime = 0.336760562006;
    tmp_msg_0.context.assign("ILZIZORULAWVDSNZKYCTFXAYOEQQSQFQRKMLXPKCWZRBKVHBWXULJDOTGFNDTHKSWSGPUMI");
    tmp_msg_0.text.assign("IYGDSBPANPXYXDMSRSFGCFEHHSGNDRINFSMPZHYMBVYFDHTLWGMLOZOTPKLOFGOTBEBCWRIITARDUKIWUUUHJZSWXKTOWJXKXNBUDXOGNMJCYSEDHPTJRBNCVGUGIJYVBLOFWQPAIXEDOQVYQZTQLZUKTFQCCFFHLJPEAJEVYBIBMUQZ");
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
    msg.setTimeStamp(0.533429242697);
    msg.setSource(57412U);
    msg.setSourceEntity(142U);
    msg.setDestination(26183U);
    msg.setDestinationEntity(22U);
    msg.command = 28U;
    msg.htime = 0.0931332480706;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 143U;
    tmp_msg_0.htime = 0.977855085659;
    tmp_msg_0.context.assign("WNLRYOAHZQDMCKICXUUAYBYVGCDNISILFJELGLQVUIYBMQXJERYZTDCIMENGZOQNLSJBOPGFEOZJEBELPHCVZTRXXWGGEWWUGIVEPJEVZUQCHOKOGAUWOHIVRMJWNTASTPHKCZIRLVXFRTJFYOXYKKNSMAQXSUSZKIYU");
    tmp_msg_0.text.assign("CNQROLKFZMKBMZPEXAMVOZUPDUBUDLGOBATPXURETRMZJYNNDARMCBKPDQYTLIIHUVSBSOOESFDBCQASLFKFDTAFEPDLITXGWCWWNIMOZASPSYLITXVTHRKLDIACJYMHEQQGSEJNWXOJVGXHPHMBPEYAKHOJYUDYETSJZREXCYTCSIKZTRWRFMGJKUWFFBQYHEQNFXUHPNGHIVVQUNBZXWMQCFJSBRKAUOGYOWLCGZWIXGWQNCHVJVZ");
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
    msg.setTimeStamp(0.0168822104453);
    msg.setSource(26751U);
    msg.setSourceEntity(26U);
    msg.setDestination(87U);
    msg.setDestinationEntity(0U);
    msg.op = 165U;
    msg.file.assign("DQTKGGLJJXUDSVKLLTNDCFVWBYSJNGWGEFGHUNNUOYQKVYBXZYLHHRSEBHITXFSKSWVKDRWSPWOLHEAPXSKEUEHBLIIBNZYGDJQOFXRETNYCSERFEHRKAFIWLOHJYHMUOYBNJZNVOVRNOFQIKAYVHXAVQZREZINBGEPCWTCMDPLZMDOQLPZAPMXGAMTTDUPTMVOUXADBMVAQGMZFBASTCZPQKUIQJIPKQRXCJOCZCLBWRAWPRUWJJF");

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
    msg.setTimeStamp(0.692840897378);
    msg.setSource(57450U);
    msg.setSourceEntity(84U);
    msg.setDestination(45555U);
    msg.setDestinationEntity(181U);
    msg.op = 157U;
    msg.file.assign("TDKAYXGMRAPXUFOEIREAHLZCRQWOCOSICXRAJBXKDVPKPPBFGGIDYBAYYRETWSXFMGCDWHZKWEUYNJRHCRQLIXXDKVKEUIVUFOSTZCOSRTJUSMLOYZPDWDAA");

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
    msg.setTimeStamp(0.728496728935);
    msg.setSource(15148U);
    msg.setSourceEntity(213U);
    msg.setDestination(27404U);
    msg.setDestinationEntity(61U);
    msg.op = 209U;
    msg.file.assign("BDVBIQAKENNQJDPGSLJEUFAWDEZYXOEKJDTHXXNKROCTFLKGDKAUSWRKNWINQYQOO");

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
    msg.setTimeStamp(0.416584303145);
    msg.setSource(58009U);
    msg.setSourceEntity(109U);
    msg.setDestination(1982U);
    msg.setDestinationEntity(36U);
    msg.op = 128U;
    msg.clock = 0.295068986699;
    msg.tz = -73;

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
    msg.setTimeStamp(0.906509865975);
    msg.setSource(6180U);
    msg.setSourceEntity(208U);
    msg.setDestination(35645U);
    msg.setDestinationEntity(27U);
    msg.op = 189U;
    msg.clock = 0.0128983388222;
    msg.tz = -78;

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
    msg.setTimeStamp(0.783378142943);
    msg.setSource(5262U);
    msg.setSourceEntity(203U);
    msg.setDestination(19855U);
    msg.setDestinationEntity(204U);
    msg.op = 163U;
    msg.clock = 0.440341557969;
    msg.tz = -90;

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
    msg.setTimeStamp(0.47022544852);
    msg.setSource(10188U);
    msg.setSourceEntity(164U);
    msg.setDestination(55868U);
    msg.setDestinationEntity(238U);
    msg.conductivity = 0.588375410315;
    msg.temperature = 0.935531630838;
    msg.depth = 0.896068826132;

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
    msg.setTimeStamp(0.0598487251267);
    msg.setSource(28425U);
    msg.setSourceEntity(97U);
    msg.setDestination(53091U);
    msg.setDestinationEntity(173U);
    msg.conductivity = 0.380922986792;
    msg.temperature = 0.949449438471;
    msg.depth = 0.696158276499;

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
    msg.setTimeStamp(0.258093737538);
    msg.setSource(33933U);
    msg.setSourceEntity(214U);
    msg.setDestination(23881U);
    msg.setDestinationEntity(249U);
    msg.conductivity = 0.456376703553;
    msg.temperature = 0.00637232263517;
    msg.depth = 0.625190756226;

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
    msg.setTimeStamp(0.171010483066);
    msg.setSource(63876U);
    msg.setSourceEntity(107U);
    msg.setDestination(46452U);
    msg.setDestinationEntity(184U);
    msg.altitude = 0.459107225639;
    msg.roll = 49144U;
    msg.pitch = 21763U;
    msg.yaw = 10461U;
    msg.speed = 9802;

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
    msg.setTimeStamp(0.839690159285);
    msg.setSource(1496U);
    msg.setSourceEntity(117U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(172U);
    msg.altitude = 0.557644946781;
    msg.roll = 2230U;
    msg.pitch = 2765U;
    msg.yaw = 14475U;
    msg.speed = 24112;

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
    msg.setTimeStamp(0.0224274586799);
    msg.setSource(44123U);
    msg.setSourceEntity(102U);
    msg.setDestination(6093U);
    msg.setDestinationEntity(72U);
    msg.altitude = 0.167818938472;
    msg.roll = 6001U;
    msg.pitch = 49660U;
    msg.yaw = 52136U;
    msg.speed = 23272;

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
    msg.setTimeStamp(0.926508375556);
    msg.setSource(64393U);
    msg.setSourceEntity(236U);
    msg.setDestination(13384U);
    msg.setDestinationEntity(105U);
    msg.altitude = 0.294234399487;
    msg.width = 0.726001739149;
    msg.length = 0.731433942824;
    msg.bearing = 0.817364527645;
    msg.pxl = -18116;
    msg.encoding = 172U;
    const char tmp_msg_0[] = {-85, -87, -85, -59, -94, 106, -9, 32, -4, -117, 23, 54, -65, 89, 15, 85, 64, -52, -15, -50, -111, 24, -95, -27, -84, -112, 61, 12, -96, 22, -87, 54, 34, 15, 19, -125, -69, -115, 124, -94, -44, 102, -29, -5, -119, -9, 116, 3, -52, -64, 85, 54, -14, 11, -56, 28, 86, 113, 14, -119, -5, 41, -103, 104, 65, -33, -32, -2, -79, -113, 107, -127, 87, 101, 99, 12, -84, -84, 21, -71, -17, -9, 21, -124, 1, -123, 66, -81, -64, 117, 89, 5, 77, -71, 11, -114, 102, -91, -33, 120, 47, -83, 93, 42, 60, 59, -8, -82, -102, -30, -21, -108, 109, 39, -9, 54, -70, -43, 10, -47, 52, 70, -82, 76, 88, -117, -28, 16, -46, 93, -108, -30, 45, -98, 119, 10, -125, -2, -13, -104, 17, -15, -110, 65, -35, 1, 4, 16, 102, -36, -128, -72, 38, 74, 116, -25, -92, -29, -50, -102, -102, 58, 84, -114, -101, -19, -123, -120, 114};
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
    msg.setTimeStamp(0.167141887318);
    msg.setSource(26278U);
    msg.setSourceEntity(155U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(188U);
    msg.altitude = 0.146730748019;
    msg.width = 0.75157119359;
    msg.length = 0.796345070588;
    msg.bearing = 0.506170062897;
    msg.pxl = 31695;
    msg.encoding = 104U;
    const char tmp_msg_0[] = {-36, 40, -46, -75, -6, -45, 124, 103, 116, 98, 88, 55, 2, 125, -46, -77, -115, 43, -70, -36, -118, 60, 58, -117, 85, -61, -15, 88, 58, 69, 25, -68, -58, 7, 29, -4, 49, 12, 58, -56, -100, -116, -90, -24, 120, 116, -85, -13, -82, -4, -85, -98, 25, 69, -72, -25, 68, -49, 43, 56, 35, 81, -97, -87, 47, 67, 107, -36, 99, 62, 90, 63, 9, 2, -64, -6, -8, -17, -78, 74, 105, -4, 53, -89, 111, -120, -84, 99, 28, -63, 121, -39, 70, -15, -122, -100, -41, -39, 71, -36, -93, 68, 109, 89, -78, 50, 76, 37, -89, -113, -34, -28, -89, -73, -122, 56, 112, -33, 124, -105, -65, 51, -41, -89, -59, -86, 29, 54, -81, 41, -65, 101, 31, 122, -103, 24, 26, 115, 37, -28, 99, -109, -4, -74};
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
    msg.setTimeStamp(0.642817363743);
    msg.setSource(26860U);
    msg.setSourceEntity(121U);
    msg.setDestination(36769U);
    msg.setDestinationEntity(53U);
    msg.altitude = 0.997802287252;
    msg.width = 0.0735460131903;
    msg.length = 0.656876152765;
    msg.bearing = 0.698612248949;
    msg.pxl = -25424;
    msg.encoding = 117U;
    const char tmp_msg_0[] = {125, -59, 32, 55, 108, 10, 23, 52, -76, -37, -15, 96, 81, -1, 96, -96, -41, 41, 74, -76, -111, 77, 63, 90, -73, 120, 36, 12, 35, 54, 100, -97, -61, 57, -52, 14, -25, -98, -58, -78, -45, 109, 117, -115, -113, -44, 124, 105, 9, -83, -109, 89, -111, -10, -2, 69, 52, -76, -33, 44, -7, 18, -43, -23, 7, 113, -93, 84, 126, -79, -67, -85, -5, -115, -101, -115, 90, -37, -54, 88, -122, -105, 80, -48, -60, -112, 5, 32, -52, -19, 120, -92, 91, 99, -90, 125, 97, -49, -10, -30, 17, -74, -48, 116, 33, 32, 73, 120, -30, 24, 5, 60, 52, -111, 31, 0, 92, -102, -65, 52, -110, 56, 56, 94, 45, -108, 22, -119, 81, 96, 47, 118, 4, -120, -60, 125, 52, 52, 90, 82, -90, 73, -6, -2, -41, -114, -96, -84, 123, 117, -52, 99, -79, 40, -118, 105, 125, 32, -95, -72, -98, 86, -45, 15, -95, -95, 45, 117, 97, -114, -32, 116, -20, -23, -15, 106, 101, 87, 41, 21, -41, -42, 46, 62, -61, -106, -46, -16, 91, 63, 42, -16, 35, 34, -75, -73, 57, -121, 55, 26, -48, 4, -30, -57, 121, 22, -70, 99, 44, 30, 0, 6, -47, -81, 59, 36, 7, -89, 42, 6, -65, 107, -21, -63, -99, 33, 47, -53, 69, 54, -106};
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
    msg.setTimeStamp(0.307031339376);
    msg.setSource(20211U);
    msg.setSourceEntity(77U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(206U);
    msg.text.assign("RSAKFLWXUJUNWQOKEJJMTNWIVIXHLOJZYKHXXDDIUUTCSSPLCETJTVIGGKANOFXZTKWEESC");
    msg.type = 79U;

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
    msg.setTimeStamp(0.602162065355);
    msg.setSource(17165U);
    msg.setSourceEntity(78U);
    msg.setDestination(6705U);
    msg.setDestinationEntity(23U);
    msg.text.assign("HOHKEJNGOCIWATYNEXYYURDSUPIBMYXHUW");
    msg.type = 227U;

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
    msg.setTimeStamp(0.947508709771);
    msg.setSource(27345U);
    msg.setSourceEntity(130U);
    msg.setDestination(3057U);
    msg.setDestinationEntity(109U);
    msg.text.assign("OAUNVTWYMMNQKDIXSPZCOIEGJCUPUFTTKRALBIYMCHXHMNIDESPPTYRECNMEKXFDZQKBHWTOCVXAGFZEVONJUVLHSMAXDERCVJLTWHPJIHRMVPUQVBSWUZOGZBZFSUPPNODBWOAFOLHNJKPJKWBQLCROUEVCQAZYFKFSXLGHDUUXIMCGSYIWBAWECLYNDKZXGQFLVTQINHJAYMKRYDJNTZJBDQHJQRVZSXWRFLGSTSGGIBRWRLKXEOYFE");
    msg.type = 44U;

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
    msg.setTimeStamp(0.403138150632);
    msg.setSource(34398U);
    msg.setSourceEntity(108U);
    msg.setDestination(43849U);
    msg.setDestinationEntity(129U);
    msg.parameter = 161U;
    msg.numsamples = 42U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 28174U;
    tmp_msg_0.avg = 0.108104081694;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.252129905517;
    msg.lon = 0.070438230546;

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
    msg.setTimeStamp(0.989328510238);
    msg.setSource(30674U);
    msg.setSourceEntity(5U);
    msg.setDestination(7068U);
    msg.setDestinationEntity(123U);
    msg.parameter = 49U;
    msg.numsamples = 47U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 46289U;
    tmp_msg_0.avg = 0.247536910928;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.557590534893;
    msg.lon = 0.520718571851;

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
    msg.setTimeStamp(0.940050816779);
    msg.setSource(59907U);
    msg.setSourceEntity(200U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(81U);
    msg.parameter = 165U;
    msg.numsamples = 135U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 25858U;
    tmp_msg_0.avg = 0.272721271084;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.447235031154;
    msg.lon = 0.614267922924;

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
    msg.setTimeStamp(0.0875826995123);
    msg.setSource(18927U);
    msg.setSourceEntity(73U);
    msg.setDestination(43157U);
    msg.setDestinationEntity(54U);
    msg.depth = 40163U;
    msg.avg = 0.939643434806;

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
    msg.setTimeStamp(0.155871430468);
    msg.setSource(41321U);
    msg.setSourceEntity(111U);
    msg.setDestination(30594U);
    msg.setDestinationEntity(137U);
    msg.depth = 7530U;
    msg.avg = 0.865361253435;

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
    msg.setTimeStamp(0.499033452125);
    msg.setSource(52676U);
    msg.setSourceEntity(93U);
    msg.setDestination(37260U);
    msg.setDestinationEntity(33U);
    msg.depth = 38334U;
    msg.avg = 0.203931018936;

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
    msg.setTimeStamp(0.626572657032);
    msg.setSource(47176U);
    msg.setSourceEntity(136U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.782760286881);
    msg.setSource(3341U);
    msg.setSourceEntity(196U);
    msg.setDestination(56834U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.444234341344);
    msg.setSource(48182U);
    msg.setSourceEntity(47U);
    msg.setDestination(12512U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.357700212416);
    msg.setSource(20042U);
    msg.setSourceEntity(190U);
    msg.setDestination(29571U);
    msg.setDestinationEntity(169U);
    msg.sys_name.assign("EXXTCIFNRXHXMGBGRSNPFUDVTDVGIUQUIGYXTFJHPOOBVFAUYOEQSLCWZXWMPWZQMULYP");
    msg.sys_type = 161U;
    msg.owner = 52695U;
    msg.lat = 0.972941712681;
    msg.lon = 0.0659922127634;
    msg.height = 0.23743150211;
    msg.services.assign("PCYGVNQLDZLVJZNNF");

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
    msg.setTimeStamp(0.566626405732);
    msg.setSource(5541U);
    msg.setSourceEntity(25U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(69U);
    msg.sys_name.assign("NHOBPBGFKWELWILFINVWTJZACVKYZRXUAYRFMMKOWCCPSZTQYDIASKAADLCSXEYIYKWSMYCHXCMOBOUNLLSIVQXRJJEPRATKUVQHSDCUCSJGVFTTBPTWDFHX");
    msg.sys_type = 70U;
    msg.owner = 61348U;
    msg.lat = 0.356612676928;
    msg.lon = 0.258725378608;
    msg.height = 0.44050195691;
    msg.services.assign("CYEGJJNCBJVSXKVVMLTQQPUEKHFNIIUWSXADENREDIGAA");

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
    msg.setTimeStamp(0.214995321406);
    msg.setSource(30486U);
    msg.setSourceEntity(66U);
    msg.setDestination(55297U);
    msg.setDestinationEntity(214U);
    msg.sys_name.assign("IHAJKKFEWQJMEZTDKZQIFFPRBNLZHTPGXBPTVOSYFRCOZFQADDCGVYKJPPNOZEALOKUSFKMUWDEAZVPBPURWHIQNXFP");
    msg.sys_type = 152U;
    msg.owner = 42904U;
    msg.lat = 0.265168673069;
    msg.lon = 0.416872779207;
    msg.height = 0.718113453296;
    msg.services.assign("YZERIFMIQUBQFZNRKSPHJRCSTPFEEWNCMUEOGBSWXFRR");

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
    msg.setTimeStamp(0.870423099846);
    msg.setSource(374U);
    msg.setSourceEntity(3U);
    msg.setDestination(17886U);
    msg.setDestinationEntity(56U);
    msg.service.assign("IDHJXSRGIPSKOTCEGIVABDURDDWNJKXJQASERQUTUKTJNLELVWNCLYAWCAPBIOBWAPBKNBRHYDCJHIXNLQKFQGOHYTYFZEONWZHHFVVTIMHPRXYXOMWNTUCYSUFPKLFKMMXNUPLSVGMSZXLOYNFIVVIPFQTLQYZWYZQSQQ");
    msg.service_type = 67U;

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
    msg.setTimeStamp(0.660026468385);
    msg.setSource(42046U);
    msg.setSourceEntity(54U);
    msg.setDestination(23213U);
    msg.setDestinationEntity(151U);
    msg.service.assign("ZDMMSRIVGBMAYAXWQEUGUIQLNOCKSZOWXRDSRIYRQYSJKROOFGJQEMZXSBXVPGWGPOPNHTLEMMSIRN");
    msg.service_type = 54U;

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
    msg.setTimeStamp(0.717388353913);
    msg.setSource(31328U);
    msg.setSourceEntity(197U);
    msg.setDestination(56513U);
    msg.setDestinationEntity(238U);
    msg.service.assign("UJBGQNMLRYPJBTTUMGLSQCSEDFJWQKNYAVBZRMBTNIPQXMEWQWBTLKQUKIAPOIETCVZZKXECZLNUXWFCHXYADTFSZORHRHKHEGFTLYJNDOGKRHZADVLPYIYIUOMLMGMJBXFSSIWPYPTEHRSUCXCJGYNICZMKIVQPCOGVKFNBNVKVPCAO");
    msg.service_type = 194U;

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
    msg.setTimeStamp(0.720197058373);
    msg.setSource(54398U);
    msg.setSourceEntity(55U);
    msg.setDestination(38064U);
    msg.setDestinationEntity(1U);
    msg.value = 0.264623483212;

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
    msg.setTimeStamp(0.607801263788);
    msg.setSource(44018U);
    msg.setSourceEntity(167U);
    msg.setDestination(38008U);
    msg.setDestinationEntity(147U);
    msg.value = 0.985100650363;

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
    msg.setTimeStamp(0.841722744045);
    msg.setSource(56435U);
    msg.setSourceEntity(176U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(149U);
    msg.value = 0.234937522632;

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
    msg.setTimeStamp(0.572723772455);
    msg.setSource(6174U);
    msg.setSourceEntity(201U);
    msg.setDestination(1018U);
    msg.setDestinationEntity(9U);
    msg.value = 0.881556338894;

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
    msg.setTimeStamp(0.0199650925804);
    msg.setSource(39021U);
    msg.setSourceEntity(45U);
    msg.setDestination(35629U);
    msg.setDestinationEntity(15U);
    msg.value = 0.300257074492;

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
    msg.setTimeStamp(0.69228936151);
    msg.setSource(8833U);
    msg.setSourceEntity(225U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(246U);
    msg.value = 0.715329505646;

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
    msg.setTimeStamp(0.668197215361);
    msg.setSource(12631U);
    msg.setSourceEntity(88U);
    msg.setDestination(47046U);
    msg.setDestinationEntity(13U);
    msg.value = 0.754137816175;

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
    msg.setTimeStamp(0.947686338591);
    msg.setSource(11436U);
    msg.setSourceEntity(193U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(62U);
    msg.value = 0.486104170489;

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
    msg.setTimeStamp(0.426690590505);
    msg.setSource(20733U);
    msg.setSourceEntity(18U);
    msg.setDestination(32637U);
    msg.setDestinationEntity(234U);
    msg.value = 0.821490716115;

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
    msg.setTimeStamp(0.593292201367);
    msg.setSource(17725U);
    msg.setSourceEntity(5U);
    msg.setDestination(43019U);
    msg.setDestinationEntity(176U);
    msg.number.assign("RUKCHXYNCIBPUSEDWNZHFVNASLLDRKKZVSXIAGXKV");
    msg.timeout = 9616U;
    msg.contents.assign("OZWUKKGYIQRNWASDPVLJWHHVKCEMICHSVCXGEAQGDERQTNTSCKHMJRNOHUDLMKHYIWVBXFBIXQBIBUZQMWWEHEYPBGLOYOFYNYSJFJWBJOGTGXKFJPEFJFGTRGS");

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
    msg.setTimeStamp(0.960431713126);
    msg.setSource(39733U);
    msg.setSourceEntity(231U);
    msg.setDestination(60226U);
    msg.setDestinationEntity(27U);
    msg.number.assign("MRIRBSZMFCFCTDCIDRWVGGZGNBLMXVHPRZMHMPQBFVCMNFPBAGKALCVJQSADIALOJYUUUPHEPBDTTXKBDKEDTONFXYPGMTZAXYKZJYMLQUGKWVHWQMISEJKPOYWFZLEHSPULXN");
    msg.timeout = 57255U;
    msg.contents.assign("VPXBFOTADYKHMWENTEGVCONZAAGKLVURIAMWIGUSBWJ");

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
    msg.setTimeStamp(0.671069664145);
    msg.setSource(48988U);
    msg.setSourceEntity(240U);
    msg.setDestination(30025U);
    msg.setDestinationEntity(213U);
    msg.number.assign("JRMWNNOWFROUSUIATFHFRNGOEAJQZRIQDGEEWBLNYYUQXZLRABVGNJZWEBMBXYESGEEYOEUQFXUSHOGIRKTALDACVAVKJKFJUHDRPFBCIT");
    msg.timeout = 1307U;
    msg.contents.assign("VZYXLCDIEXPOSAEHRUKZINDHSKGHEVMIBFOLWKLSZV");

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
    msg.setTimeStamp(0.418527531682);
    msg.setSource(62655U);
    msg.setSourceEntity(225U);
    msg.setDestination(13476U);
    msg.setDestinationEntity(82U);
    msg.seq = 3341586584U;
    msg.destination.assign("JNMIVEGIXCCDBVRFDOTAEVIJQIGHYGDVJYLJNOHKISZNNFUAPCPBESXPTUGWDZGJGIJ");
    msg.timeout = 61049U;
    const char tmp_msg_0[] = {-95, 117, -53, -10, 51, -15, -12, 53, 87, -53, 13, 76, 94, -85, -42, -117, 103, 21, 62, 28, 31, -128, 23, 43, -49, 80, -3, 111, -112, -106, -2, 28, -1, 7, -48, -49, -121, 112, 34, -117, 80, -96, 48, -78, 37, -43, -12, -109, -45, -30, -86, 111, -114, -69, -69, -122, -35, 89, 88, 70, 56, 57, 76, -15, -79, 54, 93, 50, 118, -71, -128, 79, -115, -115, -11, -70, 47, 81, 119, -113, -100, -38, -86, -73, 88, 112, 42, 120, -51, -94, -52, -64, -66, -128, -114, -121, 40, 83, -95, 91, -38, 76, 29, -12, -43, -22, 48, -86, -24, -73, 99, 37, 72, 32};
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
    msg.setTimeStamp(0.320358716093);
    msg.setSource(40507U);
    msg.setSourceEntity(131U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(208U);
    msg.seq = 3203928500U;
    msg.destination.assign("EOOIVGHLEEPHODMAYZASRJPLIUVOABKJRBRMNJSIMXSMXTHGXCXFTKKHTUPKA");
    msg.timeout = 6631U;
    const char tmp_msg_0[] = {123, -89, -56, 111, 98, -113, -82, 35, -91, -18, 61, -69, -15, 79, 66, 6, 32, -53, -65, 76, 83, -6, -55, 51, -19, 17, -42, 17, -104, 24, 92, -93, 78, 25, -52, -31, 39, 41, 119, 74, 88};
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
    msg.setTimeStamp(0.526248809745);
    msg.setSource(6429U);
    msg.setSourceEntity(193U);
    msg.setDestination(47256U);
    msg.setDestinationEntity(175U);
    msg.seq = 3228447371U;
    msg.destination.assign("HQLJUIDQTMCXIRQQGKBNTSONHKRUCIEDSTNLFOEFJPWJFBORGDVHKJACMHNPZHZSOEQSUSDEADCPQRHBYUAFAQRTIFGEAJJNAA");
    msg.timeout = 7701U;
    const char tmp_msg_0[] = {-39, 76, 101, -85, -54, -108, -42, -18, 5, 104, 52, -28, 53, -92, 33, 67, -79, -102, 29, -121, -13, -29, -53, 104, 59, 66, -74, 34, 26, -109, -43, -101, -62, -66, -15, -116, -27, 15, 4, -43, -25, 2, -70, -88, -38, -3, -74, 47, 125, 108, 28, -66, -49, -70, 42, 44, 100, 73, 57, -92, 91, -117, 27, 104, 30, -106, 74, -82, -103, -50, -73, 0, 105, 2, -50, 16, -81, -119, 27, 48, -22, 89, -88, 17, -20, 57, -119, -11, -104, 96};
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
    msg.setTimeStamp(0.46171508564);
    msg.setSource(60983U);
    msg.setSourceEntity(133U);
    msg.setDestination(3053U);
    msg.setDestinationEntity(35U);
    msg.source.assign("TBNDSDECQKWMPSDQRBRVJXVKHHOHZAAXYN");
    const char tmp_msg_0[] = {119, 7, -74, 81, -71, -110, -62, 19, -8, -30, -66};
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
    msg.setTimeStamp(0.715569115253);
    msg.setSource(2551U);
    msg.setSourceEntity(71U);
    msg.setDestination(3620U);
    msg.setDestinationEntity(205U);
    msg.source.assign("ARGSLAODATMNGYCGYEZNAZJVFZFCYYWVWRTPUTXEUDOSUWKLNPPIWLJRZTJLRMNBRNNEIMYXCCHNPIJUYPZBJPFFNGBCUAVVSKCMQEFSYMLMVOMUXOKVXIAWQUUIXTGKKIAXZOMSAKFDJOGKNFOD");
    const char tmp_msg_0[] = {92, 100, 102, 7, -32, 103, 102, 13, 108, 87, -66, -128, -78, -22, -107, -76, -86, 71, -119, -57, -49, 41, 31, -17, -67, -29, 59, 70, -54, 96, -3, 55, -19, 87, 74, 19, 91, -42, 21, -1, -90, 77, 71, -22, -48, -47, 32, -12, 37, 61, -83, 70, 67, -101, 119, -77, -116, -37, 23, -32, -69, 23, -20, -86, 3, -15, -51, -56, 70, 33, 109, -106, 7, 8, -118, -56, -60, 46, 86, -24, 115, -126, -68, 32, 56, 125, 91, -63, 99, -31, -124, -34, -33, 78, -49, -88, 54, 54, 109, 3, -54, -111, -127, -33, -60, 35, -44, 62, 15, 9, 76, 48, -30, 10, 24, -44, 6, 122, -79, 86, -11, 126, -72, 81, -9, -33, -104, -20, 110, 69, 59, 17, -39, 51, -106, -24, -43, 109, 42, -11, 55, 9, 85, 112, -54, 62, -31, 10, -116, -90, 92, -7, 9, 86, 35, -102, -50, 45, 122, 74, -83, 121, -113, -56, -91, 19, -90, 42, 38, 85, 101, 90, 67, 41, -18, 64, -76, 0, -63, 78, -80, 26, -110, -47, -48, -23, -57, 87, 34, -3, -32, -109, 55, -107, -45, -2, -8, 80, -65, -18, -3, 108, 79, -107, -50, 63, 112, -60, 16, 60, 59, 7, -101, 87, 63, 13, -103, -95, -97, 41, 105, -28, 123, 18, 95, -33, -74, 58, 4, 91, 21, 27, -61, 94, 110, 56, -19, 5, -126, 81, -16, 108, -102, 98, 111, -17};
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
    msg.setTimeStamp(0.903996093002);
    msg.setSource(15230U);
    msg.setSourceEntity(128U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(106U);
    msg.source.assign("WTLRPVWOIACQZTMCBHYOMVUSVXWBDQKEVJIUKUNDILDGUMTLPMZXBGGCCJOGOBUZMZXOKEDDHQPIMQYRXSUTJSVCRFMQYLECUVYELER");
    const char tmp_msg_0[] = {-2, -31, 40, 109, 89, 0, -43, -26, 75, 19, 90, -117, 94, 92, 39, -111, 11, 19, 22, 111, 95, 115, 68, 64, -101, 70, -114, -23, 73, 81, 64, -45, -77, -44, -16, 97, 91, 74, 74, 88, 11, -22, 123, 119, 41, -21, -17, 65, 49, -5, -58, -69, 83, -70, 6, 21, -76, 123, 52, -41, 79, -48, -94, -61, -56, -3, -41, -121, -7, 26, 108, -10, -125, -127, 57, 3, -42, 46, 89, -89, 34, 59, -22, 107, 57, -68, -90, -30, 78, 49, -30, -39, -127, -50, -118, 120, -104, -111, -51, -51, -47, -104, 117, -67, -85, 83, 114, 31, -36, -109, -63, -3, -80, -91, -78, -108, -37, -72, -38, -8, 69, -89, -10, -104, 126, 0, -20, -31, -18, -2, -33, -78, -63, 25, -52, 119, 100, -38, 17, 14, 85, 27, -107, -41, -109, -118, 44, 114, -114, -58};
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
    msg.setTimeStamp(0.481024142284);
    msg.setSource(34474U);
    msg.setSourceEntity(178U);
    msg.setDestination(52169U);
    msg.setDestinationEntity(122U);
    msg.seq = 1172151259U;
    msg.state = 219U;
    msg.error.assign("HOFVKPJQUJIRWQDLPJCQCSWAJNJLIAFAIGJVPWYKWDVTJMRWCKKPQBWDAUXTPIQKETFTIOGMUSAEDGMVMIZNIPANLFPAEYWXXCZSAUPWHADOTVYKBWLQUEUFZQEHPRSTZSHHSOXMXXZYONEJJRZDNOEUUMTCFNYZCIONTRFGCGVDGYRHARUBEWXVMLYKSLMTHDHBZHBCTZDMYKGEFXJSOLCFEINZKVVIRGQNDBHBSXMRYQGOQCOLBFYNVPGLUX");

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
    msg.setTimeStamp(0.674408342351);
    msg.setSource(21896U);
    msg.setSourceEntity(122U);
    msg.setDestination(14890U);
    msg.setDestinationEntity(170U);
    msg.seq = 1170845276U;
    msg.state = 12U;
    msg.error.assign("FYSNWSTVDILAKPLYNSJBZAHJKONCJVGXCFWRJAIUAVRJEIZMGEZKPTPXCAGSZSMIOCONTTVDRPBFZLKEEBWWQDQDHPEJGCOFBRDYHGXIXMSMGYDQWYKNQKVMXIUJNEPPTCEFYHXVKUKNQZAAHLSHTDGCLOGCVYQMFSUZEHRXEQZARVBWDXWPDOVWGRMQRAOLOLUUXHOYYZJNBLCFFVFNSTUILLJIOIASWXZIUFBBBEUBQMTPHJGW");

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
    msg.setTimeStamp(0.278004786299);
    msg.setSource(56396U);
    msg.setSourceEntity(54U);
    msg.setDestination(29437U);
    msg.setDestinationEntity(82U);
    msg.seq = 4147436085U;
    msg.state = 48U;
    msg.error.assign("AGBRXSHVOGNFGEVHWFMEUARMVVSVBHZOKELJKUQIJMMULSWTIPRKICYHDNQWXHEAQBSDAZICZRPTNYCXKJOSDYPFVYTUNQUZSYSUSEUGRQOZAHGLKCIOPDXJFVLYMIEJYYMWMRBZJJKLLPAKHTXDIHFCXELTQB");

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
    msg.setTimeStamp(0.719240672942);
    msg.setSource(31180U);
    msg.setSourceEntity(17U);
    msg.setDestination(58234U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("CUJUAWQCABUSTFQZTJCDHNTEIWJNQLNZJAOMKIFQXQNRVGFAAGUKBYXTGPWVYLPUTQNDPOBRFOIYKMUFWNPCIRJGSELHOUXREYDOPWWXSZZPBHVODRWMFHBFYQORTEHDKLJLWVTUXNIZVFKEOXZDCXBFDGDGLMINBQJNBSACOPJSHVEGBERAKKACRDEUYLKCSFQRHLMCSMCIVXSVKILTWYKYRSYNSMPHEPZGMHGXZMIHIDLB");
    msg.text.assign("MRLGJEHRJOFNCKHIAGBFYMIXKPISDFZHIHXNOHIOGWNIIQQYBAKWPXLWTRQVMCJLATYVKQUSCQDOTMLZWDJUFMERDOXRRCRSLTMADQPPPGCGPUHLLYBZTYXYGDLEOLSBNTJQETKSCJFAUHAQVGCLAFUXVZJZBEHVVAXWWXKFXNPJAQKYICOFKN");

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
    msg.setTimeStamp(0.974188693325);
    msg.setSource(3141U);
    msg.setSourceEntity(54U);
    msg.setDestination(23775U);
    msg.setDestinationEntity(3U);
    msg.origin.assign("NCXGYTMMSXJJGRRKUFKRKRMFCMRWUPQWLHJZBZSQZAIMMBVHJVJQWPBACODNDWDESFDLWVOKNSIGNXULGLFAYSPPXXTTVCOQBYYCJNCKJBQKQVSRNCDZWAIECYYZBTKVOOEPGFHVKHOOIORIPXAHUHXLNWMKBCQSSYAEDZRYHGGNGFAVFEUCFVMFDSIVQBAEGNWJNDIYWEXZZBXHLXPYDHLILRABMTIDUHTUPOQZTFPPJZLEEQKEO");
    msg.text.assign("CPQJHUDQSVGTPOQSAPJSERTFFYEAOFMJIHUNUBXTLHUDGBRKVEYWVGYBHHMJINCVHIQCMYOMPQZHQUHEWELNYPCFR");

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
    msg.setTimeStamp(0.562885084508);
    msg.setSource(12964U);
    msg.setSourceEntity(90U);
    msg.setDestination(63417U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("JFVXPTYELKDBRYJMATZHBSFRWWEIQTOQUMASBREVLMZDAXKCHMHUOOPNIOKVQIHGDZHWRLQCLLKGMGXPPMBQYDGGIFXCBRCHXAQKGEOWDIVOWJYZXZPOFNOBKDIHUJKNXCWBLZRQNJFJUWPTNETYQMITKQPAZNAEVLSRWPFMCSXUSUYNCFHKRFLHEJCSUREXJSTDWA");
    msg.text.assign("RYKBBIYXDKKQTEWXOQNNXJUSRDPMMLLPCPQAXOSLJYETJVISLHRJAMVDFQZPEEYYXMPOFLOZIDWVVHPOPOCNBKLQFVHNCCCGAUUCLVZTULFYEGCVTOKBGIDEBDCSSJHALPOKSRGFUJQPATXWDMESRKJWZAIGPAGAKUBZWEVMINTSHSFRIZMQXUJUHGYGAGLDIKQBFRZMWIZFVFJRUX");

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
    msg.setTimeStamp(0.703573487947);
    msg.setSource(13534U);
    msg.setSourceEntity(218U);
    msg.setDestination(30276U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("TRZPDZCOWSNMFXJSWZSAOXBFGKDGMDXUNQKOGJKIQYOAMKANZTCOUDPMADMYJPNJHD");
    msg.htime = 0.742867308778;
    msg.lat = 0.415642886704;
    msg.lon = 0.218710708028;
    const char tmp_msg_0[] = {-87, -108, -32, 5, -122, -40, -128, -6, 86, -107, -114, 68, -24, 64, -4, 112, -14, 45, 83, 97, 110, 10, -44, -90, 117, -12, -71, -70, 49, -107, 64, 84, -40, 54, -62, -52, -9, 92, -122, -56, 88, -69, -118, -37, -117, 22, -95, 80, -6, -121, -36, -30, -99, -4, 43, -80, -7, 109, 107, -104, 39, -94, -125, 125, -3, 61, -18, -96, 107, -120, 36, 112, -12, -112, 50, 92, -120, -17, -28, 53, 94, 125, -78, 103, -19, -44, 99, -114, -118, -56, 5, 115, 77, 121, 23, 21, 113, -103, -75, -36, 94, -26, -94, 22, -84, 44, -21, 10, 41, 33, 122, -119, 26, -97, -42, -108, 120, 84, -29, 114, -54, 65, 0, -80, 47, -78, 90, -84, -110, -17, -122, 74, -78, -75, 48, -3, -30, -73, 11};
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
    msg.setTimeStamp(0.38938954723);
    msg.setSource(11324U);
    msg.setSourceEntity(210U);
    msg.setDestination(15261U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("CAHXVSKEXFRHTPFDPIGDMKUJGJFWVNGKOYZPYLNUZAGRJZREZSIWRMICAMUURZXRBPHCBMSYJXFSFOXOJSRQQSYDQQPELTZBYLBJNDACAUCIKIWVVAVBJCEFDNGKQWMDD");
    msg.htime = 0.172200719534;
    msg.lat = 0.700281060986;
    msg.lon = 0.983956446973;
    const char tmp_msg_0[] = {-29, -113, -77, -11, -45, 75, 59, -19, 71, -121, -26, 23, -114, 109, 119, 62, -103, 55, -113, -121, 17, 26, -75, -65, 15, -98, -119, 61, 30, 6, 28, -38, -102, 93, 100, -25, 45, -63, 34, -3, 76, 7, -15, 24, 63, 18, -50, 62, 88, 113, 124, -11, 13, -123, 21, 45, -100, 106, 117, -89, 78, -111, -88, -25, -90, -127, 39, 44, 36, -6, -28, 19, -34, 100, -88, 28, 60, -38, 4, 84, -89, 57, -113, 73, 58, 25, 107, -6, -116, -115, 69, 125, 36, 53, 111, 38, -94, 60, -44, 68, -102, 68, 36, -127, -8, -116, 109, 81, 105, -73, 83, -67, -71, 104, -106, 120, -8, 50, 17, 121, -56, 62, 79, -5, -100, -20, -26, 2, -8, 98, -23, 7, -67, -32, 121, 98, -87, 72, 79, -30, 53, 88, -81, 49, 82, -100, 63, -72, -66, -2, 99, -58, 120, 19, 78, 84, -80, -42, -42, -19, 24, 39, 98, -89, -18, 7, -99, -7, -65, 31, 15, -80, -69, 40, -82, -43, 34, 103, 30, 122, 93, -2, 83, -31, 87, -19, 20, 116, 76, -69, 116, 24, -47, -57, 97, 49, -112, 84, -52, -1, -11};
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
    msg.setTimeStamp(0.582064883613);
    msg.setSource(45305U);
    msg.setSourceEntity(57U);
    msg.setDestination(31681U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("XUTSZDTONPROONYQPTZNNYMHOQAZQDHULWQQAXCHQPYYNHMFOOHVUKEHYQGONIGUSECTMAVAKFUIXVZXFEJZMXLAWXQBLDMLKBTVBAXIRQEJBSRJYZZEBRKKTY");
    msg.htime = 0.290812793322;
    msg.lat = 0.572577326824;
    msg.lon = 0.430209960416;
    const char tmp_msg_0[] = {-75, -37, 81, -91, -46, -103, -95, 94, 58, 118, 96, -110, 106, 43, 17, 97, 51, -54, 124, -99, -36, 91, 107, -106, 87, -120, -43, 82, 123, -33, -18, -91, 34, -114, 97, -116, -76, -4, 89, -29, 47, -101, 125, -80, 23, 38, 45, -86, -17, 96, -95, 69, -59, 122, 2, 27, -96, -125, 116, -50, 94, 112, -46, 92, 21, 87, 76, 58, -49, 63, -8, -66, 118, -52, 27, 40, -83, -24, -118, -123, -18, -111, 34, -68, -72, -117, 91, 92, 6, 91, 98, -62, -57, -12, -16, -19, 82, -54, 46, -90, -81, 63, -109, -83, -1, -3, 66, -64, -128, 50, -15, 85, 55, 67, -71, 94, -32, -109, -13, 36, 115, 55, 85, -103, 58, -84, -33, -38, 51, 101, 57, -71, -1, -70, -103, 14, 95, 79, -10, -35, 118, -75, -112, 29, -33, -61, 118, 120, 67, -116, 49, -98, 56, -109, -104, 45, 57, -43, -25, -82, -63, -94, -61, 62, 12, 36, -35, -13, -27, -95, 69, -4, 87, -11, 119, -18, 76, -117, -120, -35, -57, -48, -2, -128, 51, -101, 89, -62, 31, 101, 1, -64, -88, -81, -26, 80, -65, 64, 100, 91, 115, 47, 43, -17};
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
    msg.setTimeStamp(0.689330772747);
    msg.setSource(3672U);
    msg.setSourceEntity(161U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(121U);
    msg.req_id = 5719U;
    msg.ttl = 32620U;
    msg.destination.assign("VGMYJIKQSXAXBORMOLRGSLCFLNWPHEETHMSZCYDJFYQBGDVCLRJTFRRUUMDZPVOYXFZIJ");
    const char tmp_msg_0[] = {91, 96, 71, 57, -101, 15, -116, -54, 58, -44, -79, -69, 22, -41, 78, -23, -70, -72, -84, 46, -83, -20, 117, -124, -116, -96, 14, 18, -79, -21, -60, -71, 116, -105, -44, -45, -72, -25, -21, 71, -85, 72, 116, -63, 64, 67, -7, -97, -103, 67, 92, 112, -73, -125, 31, 121, -76, 47, 0, -45, -89, 61, 15, -20, -71, -49, -118, -72, 79, 38, -86, -83, 110, -79, 18, -43, -5, 42, -3, 23, 49, -72, -83, -11, 23, -112, 90, -123, 41, 23, -19, 11, 31, -30, -109, 6, -97, 48, 28, -42, 34, 113, 69, -50, -5, -51, -22, -74, 123, 89, -18, -75, 22, -94, -103, 48, 124, 121, -91, -28, 78, -53, 78, 79, -12, 59, 104, -80, -17, -128, -40, 22, 112, 3, -15, -2, -96, 49, 10, -90, -120, -30, 95, -128, -39, -104, 80, 72, 45, 62, 63, -102, -4, 89, -54, 22, 39, -97, 24, 124, -67, -2, 117, -1, 21, -94, -82, -64, -3, -57, -10, -35, -37, 117, 104, -88, 20, 51, -117, -50, -53, 74, -89, 77, 113, 109, 111, -29, 117, -30, 29, 94, 38, 56, -87, 109, -61, 52, 77, -51, -36, -125, 39, -19, 49, 39, -28, 68, -34, -22, 78, -79, 102, 98, 8, -17, 69, 30, -97};
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
    msg.setTimeStamp(0.639538658714);
    msg.setSource(30230U);
    msg.setSourceEntity(200U);
    msg.setDestination(16050U);
    msg.setDestinationEntity(86U);
    msg.req_id = 61197U;
    msg.ttl = 6540U;
    msg.destination.assign("VPNLIWUVXDJFUJCOIJQEMLNZMPJHRQJYQHFYLIAMDSECRHACSFBNDMPBRZOXGPBGDEMZWBTRUIGHVYQQKMGGLFTVXWLYOPHLGKHOMMBZZWEKDTHNTKOPCCNGCDTWPPSQLAWEZLXVFAFFZGLTXVHJIYTAEIGUCXENNBZXQSATYOBSQZUOOJJYKEKIOEFIKAIESHCRUZYUWWTRV");
    const char tmp_msg_0[] = {17, -59, -41, -9, -41, 106, -126, 58, 64, 111, -37, 72, -62, -127, -3, 48, 1, -30, -122, -92, -88, 101, -30, -112, -127, -70, -23, -48, 83, 19, -91, -11, -3};
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
    msg.setTimeStamp(0.556889856188);
    msg.setSource(8171U);
    msg.setSourceEntity(231U);
    msg.setDestination(4230U);
    msg.setDestinationEntity(113U);
    msg.req_id = 46870U;
    msg.ttl = 51275U;
    msg.destination.assign("MXVFCHDNERXQISYEPD");
    const char tmp_msg_0[] = {17, 39, 111, -127, 11, -51, 52, -31, -102, -116, -77, -104, -58, 125, 125, -61, -1, -104, 76, -99, -61, 123, -17, -96, 45, -63, 8, -22, 45, 4, 86, -80, 69, 51, 30, 16, 82, 22, -8, -34, -24, 92, 56, -126, -35, 5, 23, -55, -52, -117, 78, 71, 56, 109, 38, -46, 116, 77, -2, 66, 2, -76, 98, 39, -67, -78, 19, -111, -81, -36, -64, -27, 113, 111, 70, 102, 120, 30, 94, 99, 62, 19, 95, -24, -6, 24, 72, -3, -123, -106, 64, -34, -111, 76, -66, 46, 111, 47, -89, -63, 105, 16, -74, -41, -98, -15, 90, 8, -103, -60, 70, 98, 8, 42, 83, -113, 89, -92, 5, 6, -48, 77, -123, -109, 20, 34, -118, 82, 123, -24, -76, -16, -45, -47, -29, 124, 71, -99, -102, 112, 126, 122, -26, -12, -91, -99, 39, -66, 58, -13, -63, -4, -48, -49, 31, -3, -83, 40, 100, -48, 36, 118, 107, -128, 96, -116, 114, 124, 19, 44, 24, 40, -83, -112, -28, -105, -44, 37, 30, -68, 74, -90, -122, -27, -10, 105, -54, -39, 113, 115, -14, -115, 93, -86, 51, 75, 7, -10, 46, 48, 12};
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
    msg.setTimeStamp(0.731959076222);
    msg.setSource(25400U);
    msg.setSourceEntity(48U);
    msg.setDestination(8306U);
    msg.setDestinationEntity(109U);
    msg.req_id = 34423U;
    msg.status = 22U;
    msg.text.assign("LYGFWRDZPYINTVETPMTVHPPJDDKJHHOLDYCXFYQTTSIIUBZWCPXUHJERXWBCGJDABAABUOXWOXDWMYQRXHZUI");

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
    msg.setTimeStamp(0.504573068158);
    msg.setSource(32920U);
    msg.setSourceEntity(238U);
    msg.setDestination(24446U);
    msg.setDestinationEntity(98U);
    msg.req_id = 19548U;
    msg.status = 33U;
    msg.text.assign("AEGKRDOWZEQCXUANOBBPJKVZJYPRHPYMAFMXOOFGLJRONJXPRFMIEVISQEDNKOWHBDIZXDSKSCMRNXSBQBXJXZLPTYCEUORYJHUCYJFASCGVKWYLI");

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
    msg.setTimeStamp(0.692380167329);
    msg.setSource(56782U);
    msg.setSourceEntity(159U);
    msg.setDestination(41424U);
    msg.setDestinationEntity(106U);
    msg.req_id = 50039U;
    msg.status = 238U;
    msg.text.assign("QQDQGMFQPZSRNYMYWDRVNUGXPQSONRXZPHLHMHTQBOGSRYTFCVGARAKZBGHGPJCYWRIJGVWZRTJBKKKALJPDPFHYTCIGCBEEJDQLOIKYKACAQAZKVDPMUXVDEFNVNUVTSULZEHCBUDZEOILQEUNBNUEMZAJSZMVUMRUMYNTCMZVIWMWOKXUDWJFECSFXYPBEONLLLCSTWFLIFQTYPLHIKJOIIYWPGRBKFNTSJXDOAWJSXDRSO");

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
    msg.setTimeStamp(0.502847658371);
    msg.setSource(60292U);
    msg.setSourceEntity(223U);
    msg.setDestination(34041U);
    msg.setDestinationEntity(60U);
    msg.group_name.assign("CRMYEGQIBJDTUUCURNQZIPVOSSAMCGYXTXAVJVGWAPUEQIDJUKKBSIWCVSWOQBSWCSGNXLIHL");
    msg.links = 3759679487U;

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
    msg.setTimeStamp(0.355337770126);
    msg.setSource(45336U);
    msg.setSourceEntity(170U);
    msg.setDestination(59630U);
    msg.setDestinationEntity(232U);
    msg.group_name.assign("OAYZJTXMKXVGZRRRHPDZHTYMZ");
    msg.links = 3062394623U;

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
    msg.setTimeStamp(0.359564836554);
    msg.setSource(44921U);
    msg.setSourceEntity(178U);
    msg.setDestination(37247U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("HMQJAYNIJIBJPECVCDGQEJEBLSADPPEHZFQJVTOXMCINMUV");
    msg.links = 68184318U;

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
    msg.setTimeStamp(0.04988026965);
    msg.setSource(19155U);
    msg.setSourceEntity(216U);
    msg.setDestination(40772U);
    msg.setDestinationEntity(241U);
    msg.groupname.assign("SQQEKEJAOFVULDCKNRAMQQNNOHJLTJAFOBHFGVFUWTVBTLEUCIOZAQBKRYMGYZBVHLXYLVRFECCWNHKPWOOSGPSPUFAKFGTXIBMCIMUORIVEZKBQOMUIPYWNTCXBLNZRHDRHXDJGKZVQVUHJXNCEGHMCQJRDPZILZPUDMYAUBYBCQGSSIPTJKRSGJMGWZEXMRSUZTADEFXFGLZONCLWVYVQWSWNFIIIKSDMDWHWXNT");
    msg.action = 129U;
    msg.grouplist.assign("GXJXVBUTVTPHDTMTNKURJLWLOFKCXBRZFNMCKILQLQBKQYQKMMEQHDJZPNFSGCCAGNJFXGSAPRGIMHWDPAFDUWTRTSOIIHBRGIHMBWCMBYXZLJUZEODSPPEDSTXGGNIYMVVXOUNIIGRPDAHWNDQWPWZYHNEHVMOSYURACQPVCXUBVZEOEBUTFSQHEAGAAYYEOKOBYYLSJJLXBVTCJUNLTFZJWYOZRZIIQNEKFKAWPKMD");

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
    msg.setTimeStamp(0.402022052415);
    msg.setSource(47617U);
    msg.setSourceEntity(199U);
    msg.setDestination(831U);
    msg.setDestinationEntity(24U);
    msg.groupname.assign("TKWJILAJGRSGZKXGERMFZCPYKJGHRQUSSZFHDYCVLHIYBQYQKOPWIEVIJDTPHLXXLOGKUTSSXKCMBUZPFVEFUQOUCBGAMESGHMKOWEMHUFYVADOPJXLDYDVATHFFXCQSMWWRZIROXRJEITKNONGAVLZHYEWBPFKZHJUDETXLPNXOQHWSMWMQAYJNGYTDCWMOIVTSCANBVVLUUUTREZQLDNKJRBGWCIBMIJQABCZRV");
    msg.action = 252U;
    msg.grouplist.assign("EJPSJKXBBQXVDFQKAOMXPMXSUONLKRZSHMQQCDGBUMDBPVPCZCOBCNHMHFPSLYSNFRNAZLNVBTYEXJHNAIHCILPSFNDJUOGIDBAGNSXVWZFQJQRAYZMCAREDBNVTCEHYXAURGMEZQDTKDAPWNTSIIUGGDMZVKPYTVHOALTBLWW");

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
    msg.setTimeStamp(0.613137711455);
    msg.setSource(42580U);
    msg.setSourceEntity(219U);
    msg.setDestination(12981U);
    msg.setDestinationEntity(89U);
    msg.groupname.assign("ZNFHKKTEBXWPSTDTIWEHLBUKXFRMNOARMHTREWMVQTEOEIVCSNZVARAWXZLDCRXFFQQUKTTALZOBTNWCJOEPZHDFFCVMWDSTWCUXZVWXGYZXCAPLRUEMGLFJBSGBDJIABNFJOBDHUPLGBNKKOCMVKOHDZMPAUORKREPBASJYAPSJLYQMCYIXYBYFZHUGMFEXQRNIRQCLGHA");
    msg.action = 222U;
    msg.grouplist.assign("QDMGAYRIPYLYILHNLPGVCHWMJGPAXYSSFKSROJQAJQDIT");

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
    msg.setTimeStamp(0.227534192101);
    msg.setSource(1251U);
    msg.setSourceEntity(200U);
    msg.setDestination(15831U);
    msg.setDestinationEntity(192U);
    msg.value = 0.275072156568;
    msg.sys_src = 1475U;

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
    msg.setTimeStamp(0.427145899384);
    msg.setSource(57710U);
    msg.setSourceEntity(2U);
    msg.setDestination(47957U);
    msg.setDestinationEntity(26U);
    msg.value = 0.0803837619312;
    msg.sys_src = 7309U;

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
    msg.setTimeStamp(0.52625109526);
    msg.setSource(47395U);
    msg.setSourceEntity(40U);
    msg.setDestination(49476U);
    msg.setDestinationEntity(139U);
    msg.value = 0.324007584602;
    msg.sys_src = 5441U;

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
    msg.setTimeStamp(0.341370118848);
    msg.setSource(44531U);
    msg.setSourceEntity(187U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(56U);
    msg.value = 0.480421942005;
    msg.units = 31U;

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
    msg.setTimeStamp(0.63474444613);
    msg.setSource(9875U);
    msg.setSourceEntity(232U);
    msg.setDestination(30549U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0958143241257;
    msg.units = 133U;

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
    msg.setTimeStamp(0.0869374309029);
    msg.setSource(39370U);
    msg.setSourceEntity(97U);
    msg.setDestination(45598U);
    msg.setDestinationEntity(59U);
    msg.value = 0.156130645761;
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
    msg.setTimeStamp(0.262758581223);
    msg.setSource(8639U);
    msg.setSourceEntity(213U);
    msg.setDestination(58756U);
    msg.setDestinationEntity(209U);
    msg.base_lat = 0.878549154099;
    msg.base_lon = 0.219891575739;
    msg.base_time = 0.118773240555;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 3760U;
    tmp_msg_0.priority = -55;
    tmp_msg_0.x = 31170;
    tmp_msg_0.y = 4439;
    tmp_msg_0.z = 15059;
    tmp_msg_0.t = -18279;
    IMC::LedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FSILLGWRAOBRMAEWWNNOCOFAKJFSQSXUMQFJUARLATUNNMWUDPHGAQULSDHSZCVFSRCRBFNUQPCIBYWJGMVATKZ");
    tmp_tmp_msg_0_0.value = 107U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0571858868257);
    msg.setSource(12903U);
    msg.setSourceEntity(150U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(210U);
    msg.base_lat = 0.287326276203;
    msg.base_lon = 0.9385217612;
    msg.base_time = 0.573142452147;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 8941U;
    tmp_msg_0.priority = -101;
    tmp_msg_0.x = 31845;
    tmp_msg_0.y = -27684;
    tmp_msg_0.z = -22663;
    tmp_msg_0.t = -13002;
    IMC::DissolvedOxygen tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.937239141025;
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
    msg.setTimeStamp(0.189798256659);
    msg.setSource(36407U);
    msg.setSourceEntity(69U);
    msg.setDestination(23915U);
    msg.setDestinationEntity(239U);
    msg.base_lat = 0.606142857229;
    msg.base_lon = 0.00130832550286;
    msg.base_time = 0.547699833104;

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
    msg.setTimeStamp(0.951005117276);
    msg.setSource(40309U);
    msg.setSourceEntity(61U);
    msg.setDestination(46016U);
    msg.setDestinationEntity(114U);
    msg.base_lat = 0.285170902726;
    msg.base_lon = 0.963527297679;
    msg.base_time = 0.700926588982;
    const char tmp_msg_0[] = {119, 55, 75, 8, -109, 96, 46, 124, 72, -23, 97, 99, 68, -128, 41, -90, -1, 124, 92, 62, 33, -112, -56, -45, -105, -103, 101, -112, 0, 100, 1, 37, 108, 31, -81, -33, -62, -60, -33, -31, 20, 64, 109, 58, 76, 120, -84, 7, 18, -55, 10, 83, 52, -34, -122, -23, 24, 64, -44, -3, -81, -5, 0, 89, 110, 57, 115, 108, -58, 100, 111, -35, 15, -64, -8, -122, -24, 87, 11, 57, -87, -99, 39, 52, -55, 54, 49, -116, 42, 105, 9, -5, -59, 101, 65, 99, 8, 99, -42, -80, -30, 66, -55, -88, 55, 97, 125, 103, -116, -72, 13, -106, 104, -97, -10, 71, -56, -6, 125, 29, 43, -87, 65, -40, -47, 35, 70, -127, -63, -51, -124, -49, -114, 59, 2, -29, 105, -90, 102, 74, -115, 71, 58, 104, -47, 63, 48, 37, -26, -13, -8, -114, -88, -69, -24, 74, -62, -32, -40, 110, -37, -61, 106, 111, 57, 18, 93, 97, 47, -32, -112, -98, 64, -40, -117, 14, -107, 89, 111, 124, -101, 22, 1, 56, 103, -109, 34, 61, -127, 124, 26, -26, -83, 22, -73};
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
    msg.setTimeStamp(0.416446465723);
    msg.setSource(26148U);
    msg.setSourceEntity(40U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(11U);
    msg.base_lat = 0.553657472434;
    msg.base_lon = 0.173767954258;
    msg.base_time = 0.258212026455;
    const char tmp_msg_0[] = {-26, 62, 23, -11, 36, 43, -29, -119, 1, 70, -88, -39, 46, -82, -56, 64, 46, 61, 32, -29, 109, 35, -105, -36, -91, 44, 2, 67, 47, -61, 117, -39, -4, 39, 80, 1, 86, -56, -101, 72, -85, -86, 11, 10, 70, 63, -40, 101, 57, -103, 62, 106, 118, -94, -97, -9, 96, -112, 115, 118, 92, -31, 67, -46, -70, -88, -26, -69, 99, -124, -84, -1, 123, -67, -103, -5, 43, -93, 111, 13, 44, -76, -96, -105, 53, -10, 18, -69, 92, 23, -14, -92, 84, 10, -30, 98, 102, 2, -122, 118};
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
    msg.setTimeStamp(0.542516690864);
    msg.setSource(30236U);
    msg.setSourceEntity(90U);
    msg.setDestination(5242U);
    msg.setDestinationEntity(236U);
    msg.base_lat = 0.696753378768;
    msg.base_lon = 0.180077967152;
    msg.base_time = 0.182965126089;
    const char tmp_msg_0[] = {82, -105, -28, -9, -72, 9, -119, -40, -101, 96, -2, -25, -44, 72, -35, 36, 70, 34, -12, -52, -39, 122, -4, -25, -26, 79, -108, -35, 124, 25, -19, -85, 18, -13, -76, -53, 120, 86, 48, 54, 8, 99, 115, 10, -24, 16, 58, 54, -1, 104, -72, 66, -40, 35, 74, 24, 66, -47, 4, 49, 87, -10, 49, -112, -21, -121, -80, -11, 85, 1, -25, 27, -90, 22, -10, 96, 35, 22, 29, -42, 5, -59, 123, 40, 114, -99, 44, 56, -5, 109, -2, -22, 112, -64, -112, 77, 31, -66, 93, -118, 101, 67, 82, 54, 116, 28, 79, -42, -31, 123, 34, 30, -54, 122, -16, 49, -128, 114, -107, -53, 48, -107, 92, -18, -21, 71, -10, -123, 93, 89, 70, -4, -32, 48, -41, -107, -71, 105, -118, 56, -99, 51, 4, -115, 76, 47, -57, -9, 66, 65, 79, -84, -92, -86, 126, 74, 63, 54, 22, 99, -118, -15, -26, 13, 56, 14, -84, -15, 32, 13, -80, -88, -61, 80, -20, 49, 74, 94, -125, -109, 6, 23, -13, 71, 12, -109, -24, -98, -119, -126, -54, 89, -20, 113, -75, 92, -66, 62, -15, 65, 62, -80, -4, 42, 76, -104, -108, -24};
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
    msg.setTimeStamp(0.391399605357);
    msg.setSource(2469U);
    msg.setSourceEntity(12U);
    msg.setDestination(63071U);
    msg.setDestinationEntity(219U);
    msg.sys_id = 35449U;
    msg.priority = -126;
    msg.x = 14112;
    msg.y = 27312;
    msg.z = -6071;
    msg.t = 24481;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.668793151377;
    tmp_msg_0.x = 0.723808788476;
    tmp_msg_0.y = 0.757237220768;
    tmp_msg_0.z = 0.893108626607;
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
    msg.setTimeStamp(0.598969835065);
    msg.setSource(18705U);
    msg.setSourceEntity(238U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(127U);
    msg.sys_id = 42944U;
    msg.priority = 53;
    msg.x = 19890;
    msg.y = -4118;
    msg.z = -330;
    msg.t = 16690;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("SHKBIKTYAAHQHALOSKJLJFCUGYXOWSSXDHOZHTBKQBYDYNQAUGNDCBYJLSZPNXLSBYENGVGEXYEVUNIVREXUIYZRBRXZWOMATHRLYITNZVWGDPWJIAVKXLJIPMZRHQUBFZSOFQMEPQKDPCNZKWKFGFGCRSDOOQESGOMMDEIFAHRJPLFXILBXOCUCITSCNQRATFJXTNTVWPZRMWCNKZEMGIYPDAJALMJWFFCUJVVKCBMDBLVHR");
    tmp_msg_0.type = 26U;
    tmp_msg_0.properties = 64U;
    tmp_msg_0.durations.assign("WCWXBAGUNVNMGJFREWHLLMZ");
    tmp_msg_0.distances.assign("FXWYJWELVASTBNYEGNPPFNWOUBSDISGNZGCGYTXHYUWVZKUKPJDFRLHUOYYVQSIZNQ");
    tmp_msg_0.actions.assign("ZLNGUTJTZQTEBIROMSJIQBMDTRYOYUAOFBHVBZUJIXGQQEZLAWMAGJAVCLJMCJREZWPKATASNKXHNLHDUHNFRUCHSHGIDNICLMEGJLWPEMXVDSKMDTSBGRWZIPVUNYSFEFVCOUSBQYKVBSQWN");
    tmp_msg_0.fuel.assign("ZJNJGLAMXMRRLBYQIVBVOCGMZQSCWALYJESHFPVTWNMZKXPCHIOXOUFGKZRPWNIXZRUFNQUSRNDVYIOOXEOETVQYQJTFTVLAPDJFBEWEK");
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
    msg.setTimeStamp(0.613862061367);
    msg.setSource(54143U);
    msg.setSourceEntity(22U);
    msg.setDestination(11812U);
    msg.setDestinationEntity(16U);
    msg.sys_id = 39945U;
    msg.priority = 104;
    msg.x = -22238;
    msg.y = -11740;
    msg.z = -8883;
    msg.t = 30074;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 176U;
    tmp_msg_0.longain = 0.601561241956;
    tmp_msg_0.latgain = 0.742142683563;
    tmp_msg_0.bondthick = 1953995635U;
    tmp_msg_0.leadgain = 0.190019656654;
    tmp_msg_0.deconflgain = 0.176237483515;
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
    msg.setTimeStamp(0.146624833257);
    msg.setSource(41169U);
    msg.setSourceEntity(230U);
    msg.setDestination(45391U);
    msg.setDestinationEntity(44U);
    msg.req_id = 56310U;
    msg.type = 21U;
    msg.max_size = 53619U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.710534529473;
    tmp_msg_0.base_lon = 0.931975347339;
    tmp_msg_0.base_time = 0.276418629274;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 22717U;
    tmp_tmp_msg_0_0.destination = 18360U;
    tmp_tmp_msg_0_0.timeout = 0.706157100718;
    IMC::MonitorEntityState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.command = 90U;
    tmp_tmp_tmp_msg_0_0_0.entities.assign("LSQFRDODBALAAUPTNZOEGFNCYLFVVULAFCTZNVLJZMQVWWOBMQKTXPGPECNIJWLGXIKIPLSMMKBSHSEAJVAZPEQJCDNRXHAQCKVDTHWDUOROBWGDMTVURJGIIBJFBRQCNUQQLKCFZKPOTFFUYWSKBGDSCJIZHZXYSJEIFPARIURHXLZXYXENDGUAQUWTRPVNEWOYEOYNYQYNSKVCG");
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
    msg.setTimeStamp(0.467535897882);
    msg.setSource(54734U);
    msg.setSourceEntity(3U);
    msg.setDestination(11911U);
    msg.setDestinationEntity(166U);
    msg.req_id = 34692U;
    msg.type = 179U;
    msg.max_size = 1655U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.964410792601;
    tmp_msg_0.base_lon = 0.886879251476;
    tmp_msg_0.base_time = 0.800093608863;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 30260U;
    tmp_tmp_msg_0_0.priority = -88;
    tmp_tmp_msg_0_0.x = 5450;
    tmp_tmp_msg_0_0.y = -16943;
    tmp_tmp_msg_0_0.z = 12500;
    tmp_tmp_msg_0_0.t = 21601;
    IMC::PlanStatistics tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("FPRLGRRNBWFWYWYMUNAKQCOQXQEGNYMPPLZCBERDEZLNWEIWHDIUVXLFDGXBPFINYHWWVTTUZUPFMSMUGOWKKOGNFPAVVCCSNMKDJDSISBBAJMJTUKJXALTVCKYMQGRHZHAHRVJRAJEIQOWEKMGVTDSZYAHCYQITAKREZMLC");
    tmp_tmp_tmp_msg_0_0_0.type = 90U;
    tmp_tmp_tmp_msg_0_0_0.properties = 124U;
    tmp_tmp_tmp_msg_0_0_0.durations.assign("EFQSNIJYZFSWPMNRHYTATKSRPRXQMWBHOMKQHMKRQZFJNSYEWPKBXUXZMTECKTKWJCYHJFOPFGPXAJKMWXUQUEGBCIXIEJGPNJTDMBHXIVELVWRSGHRSGOTZRUCYDBAJHOCRALZBZUDAOTSADGJLWAYGYLQOYXJOQFFUIHLYNICRLHMSEQTNHEPLMFVVASELIUTDBVZLYNQFL");
    tmp_tmp_tmp_msg_0_0_0.distances.assign("MRIWORZWVGNXSNUOBMMCBUQNAQAOWLKNOZRTPDCWVQUHHPEGHZCSACIBNFGNNSRKVBECPCRDFWVXZQKLYJXYXAFXRTRLYNCOMEWDUKQGAEBGIFTWSESQTXYJSZDKRDLPJVGRIDZOOBLEMIQYDTACWVQIYFWAVPTWIBQFYQKUJLUSHYMERYNTFPGJYBITFIGOLSKATAEKDHEHUUZJK");
    tmp_tmp_tmp_msg_0_0_0.actions.assign("FHLLBVCUCNZMDEAKNOROHUFHIOTJPGUOSTTGIPWWNCKKMFFYCNDQDHPWUGCKVPZMDXNYNESSJBXEKJVGQHZSXQLCKYUMBEBHIGBESOLJAACEYKAXEBIQYCRHUGWIIIMJPNRBPTAXYDJETIBGQCWMIZQMNTFZGTIOUZFJHBWAOOXORTSRVYDXWRQDRUOJMPNLHDVLVTJ");
    tmp_tmp_tmp_msg_0_0_0.fuel.assign("PQVXJMNENYQHPRISZEJSWMAUQHEKBYLTSMTIZVULVLXDULRWPMWFRNFIBBKSLUGJCHNDBJQNFEZWZEBQVHHNOXNMWDQAVMIASTYPCITKFFIMEDVWWPJCEGUGGVPQJCLXJGLVAZAAYGVUUXRYGQYYKCAAUITQRRPXFYGMOEDCRSSHKRLPPXUWNX");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.801937627497);
    msg.setSource(29186U);
    msg.setSourceEntity(71U);
    msg.setDestination(11085U);
    msg.setDestinationEntity(10U);
    msg.req_id = 25175U;
    msg.type = 226U;
    msg.max_size = 9716U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.552396834315;
    tmp_msg_0.base_lon = 0.676499248851;
    tmp_msg_0.base_time = 0.0666794261049;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 57178U;
    tmp_tmp_msg_0_0.destination = 24239U;
    tmp_tmp_msg_0_0.timeout = 0.109127778587;
    IMC::HistoricSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_id = 28849U;
    tmp_tmp_tmp_msg_0_0_0.priority = -113;
    tmp_tmp_tmp_msg_0_0_0.x = -4500;
    tmp_tmp_tmp_msg_0_0_0.y = -24153;
    tmp_tmp_tmp_msg_0_0_0.z = -23110;
    tmp_tmp_tmp_msg_0_0_0.t = -8726;
    IMC::Reference tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 94U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.value = 0.00804289507257;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.speed_units = 9U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.value = 0.264274719968;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.z_units = 22U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1);
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.0749469376181;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.841982762866;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.radius = 0.243285411842;
    tmp_tmp_tmp_msg_0_0_0.sample.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.33117810023);
    msg.setSource(27529U);
    msg.setSourceEntity(170U);
    msg.setDestination(718U);
    msg.setDestinationEntity(108U);
    msg.original_source = 2867U;
    msg.destination = 13481U;
    msg.timeout = 0.700071250044;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 24568U;
    tmp_msg_0.lat = 0.952861720895;
    tmp_msg_0.lon = 0.00738334083574;
    tmp_msg_0.z = 0.634254543468;
    tmp_msg_0.z_units = 128U;
    tmp_msg_0.speed = 0.669764973875;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.custom.assign("BVKWZFEHKIMGEZOEFDADQQUPQGYNLSLCJWXVOMOJUTMZNQCLDSUSCXWUCQJHZLGZPEHSMNNRGIBARLUPVGTHKDHVNERKOKKIPTGQAIPLMAOZCCWYGYZETRVUKIPRSWJUBYCKFHDAIOREQXBPJZXFV");
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
    msg.setTimeStamp(0.409577794503);
    msg.setSource(3669U);
    msg.setSourceEntity(240U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(23U);
    msg.original_source = 39120U;
    msg.destination = 31232U;
    msg.timeout = 0.584719754349;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 7689U;
    tmp_msg_0.lat = 0.804453388962;
    tmp_msg_0.lon = 0.533175114158;
    tmp_msg_0.z = 0.787793558119;
    tmp_msg_0.z_units = 128U;
    tmp_msg_0.speed = 0.218068263653;
    tmp_msg_0.speed_units = 36U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.460529510681;
    tmp_tmp_msg_0_0.y = 0.364321171437;
    tmp_tmp_msg_0_0.z = 0.594132196433;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FACCWVKRPVUQQWBMCOYBDINFJTKXUOKNSGGMYKLWQHORPEYMJNFBRLZQFXFXJJUIET");
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
    msg.setTimeStamp(0.192497127494);
    msg.setSource(35561U);
    msg.setSourceEntity(75U);
    msg.setDestination(653U);
    msg.setDestinationEntity(160U);
    msg.original_source = 30405U;
    msg.destination = 24939U;
    msg.timeout = 0.717689759415;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.384043026395;
    tmp_msg_0.lon = 0.835090390301;
    tmp_msg_0.speed = 0.309968611993;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.duration = 2004U;
    tmp_msg_0.sys_a = 57193U;
    tmp_msg_0.sys_b = 26661U;
    tmp_msg_0.move_threshold = 0.747830663013;
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
    msg.setTimeStamp(0.288918191542);
    msg.setSource(45971U);
    msg.setSourceEntity(217U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(82U);
    msg.type = 227U;
    msg.comm_interface = 56499U;
    msg.model = 50344U;
    msg.list.assign("AYFHBMNQGLDYUYVZTULAVPHEHCPHMRQIKCLPNQOHXRDIHGNFJBTGOJQQWSRZOPWSXENUJRAOAHAUZLZSCLEUFWVCFKGDMNIOHRZ");

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
    msg.setTimeStamp(0.00188786710244);
    msg.setSource(63974U);
    msg.setSourceEntity(67U);
    msg.setDestination(23899U);
    msg.setDestinationEntity(171U);
    msg.type = 36U;
    msg.comm_interface = 63051U;
    msg.model = 54025U;
    msg.list.assign("GJSUUMGKQCFMVSIHSC");

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
    msg.setTimeStamp(0.818587571937);
    msg.setSource(352U);
    msg.setSourceEntity(249U);
    msg.setDestination(11711U);
    msg.setDestinationEntity(246U);
    msg.type = 91U;
    msg.comm_interface = 39805U;
    msg.model = 18795U;
    msg.list.assign("ZILDAGAFUXYSKHQDCQYMIESVLSTEAJTGIFGBTUKCBJBWPPQCGMFRSDDGMLCVKTPGZUVTKHKKZTMKEPL");

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
    msg.setTimeStamp(0.833958710312);
    msg.setSource(57977U);
    msg.setSourceEntity(100U);
    msg.setDestination(26988U);
    msg.setDestinationEntity(100U);
    msg.type = 178U;
    msg.req_id = 316856870U;
    msg.ttl = 21457U;
    msg.code = 123U;
    msg.destination.assign("VMWNTUZBTNACOWXUZBECMYAJADJKMHPCELNRZTVSDGVUOTZHJFXRQDOYQPVLUOXTIFNQIFQNWZRYCWECGYEVTJKUFRMZDPMMQXNYFOBKLBUHGSOAPDHCMTMWJPGCZFUYRPKQIJGDXCIDRJCGZILAEIEMHHBJSVEKHJWBQERYGWHKWQVGULVFFATASWJKBRNOSLRPXTK");
    msg.source.assign("DEZZNHDASSBVGVAEZZWZBBTAFEWVKCUO");
    msg.acknowledge = 239U;
    msg.status = 112U;
    const char tmp_msg_0[] = {77, 20, -33, 56, 73, 89, -19, -52, -81, -9, -111, 63, -45, -99, -120, -41, 49, -17, 8, 113, 32, 42, 9, -123, 13, -4, -77, 1, 81, 21, 9, -4, 99, -30, 43, -89, -30, 112, 91, 16, -72, 76, 95, -14, -28, 109, -90, 11, -114, 95, 54, -26, -46, 7, 96, -4, 1, 19, -69, -58, -2, 68, 45, -73, -47, -100, 43, -111, 87, -117, -124, -121, 101, 9, 47, 0, 45, -84, 41, 95, -122, -22, 117, -62, -119, -76, 88, 9, -117, -127, -68, 106, 28, 30, -118, -21, -54, 88, 121, 1, -52, 95, -70, 81, 35, 13, 3, -24, 125, 29, -82, -58, -54, 92, 118, 74, 74, -116, -55, 115, -17, 126, -12, 38, -109, -88, -89, -5, -6, -46, -127, 98, 120, -19, -67, -51, 20, -33, -98, -75, 45, 97, 1, 22, -44, -32, -34, -80, -111, -80, 84, 125, 67, 68, -125, 67, -104, -35, -46, -37, -122, 85, -36, -85, -87, -109, 50, 92, -68, 27, 8, -125, 1, -26, -120, -32, 82, -118, 86, 39, -103, 51, 95, 72, -99, -102, 52, 81, 81, -30, 16, 65, 122, 59, -104, 82, -47, 0, 57, 126, 114, 123, 51, -109, 73, 9, -63, -97, -123, 93, 67, 17};
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
    msg.setTimeStamp(0.48035589562);
    msg.setSource(30894U);
    msg.setSourceEntity(229U);
    msg.setDestination(63774U);
    msg.setDestinationEntity(171U);
    msg.type = 67U;
    msg.req_id = 2724548986U;
    msg.ttl = 25628U;
    msg.code = 63U;
    msg.destination.assign("LLYISBVWBSAQYYDTFQHFEMCMXEUZTGIHUPTLQQCJSNMPEJHPFATZXPCAUYCNPDOIYAXRIEGWGLHBPBZNTBDDWGNUGVKRWEIARRVEIXCBAHKZUKRODMMVQETBUJJRXBZEVBHJSFLLOSOGCUNYXLKUZKRWKVCSZFHFMANDCACXLHIIVYJNSFVWZLHPEOYVAGMDDQYOJRGSPKCBK");
    msg.source.assign("YHGZSEAJMPXEPFIAULJVFSFADLHBWKQTJQKDSCBDMDZDEYIOFELZGXPMMYC");
    msg.acknowledge = 166U;
    msg.status = 182U;
    const char tmp_msg_0[] = {-84, -11, -104, -54, -42, -16, 40, 5, -118, -54, 4, 87, 4, -37, -92, 103, 34, 81, -75, 4, 12, -63, -95, -32, 125, 53, -90, 90, 72, 99, -73, -91, 35, -18, -63, 80, 25, -28, 33, 78, 53, -57, -4, -111, -28, -103, 99, 10, -48, -19, 59, -90, 77, 98, -95, 118, -67, 125, 26, 119, -47, -62, 84, 121, -125, -28, 96, -67, -3, 52, -18};
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
    msg.setTimeStamp(0.358942896906);
    msg.setSource(48248U);
    msg.setSourceEntity(89U);
    msg.setDestination(4072U);
    msg.setDestinationEntity(37U);
    msg.type = 51U;
    msg.req_id = 4121351526U;
    msg.ttl = 51269U;
    msg.code = 49U;
    msg.destination.assign("UAGDSKWKZLWILJPGAGSANNFSFJSTZAYQQRGDJUYBIKKXLRUHMCHCJCPBBWGFXSVNVWTXVHQOKJFLNCLUWTKZJUIGBSVMXFQQZPIISIVRCXMHQANLOKLUEWPEQHDOZSUTRYZIWYIOMMKJYRWDDSCRCIHTLGOBGHRHNODQVMCFYOOQEYMAZNCYTPTOVVTPUXEPFVBEXDZXAUYFCZJXBFVFTBDGMPMKMHQNH");
    msg.source.assign("GOGWWTLWVGFCAFKGIDGRKSFEBHJXOEPZSPHBBZCFTJVECQLVSTFZXEXALXVRTDHOGQWPMUMATHMFSKGMDJIUWHZMFUPFYUSYOLERYTQQIICVAQGMNDEPBPKHNRLCLYNTYZAKNQZJNDUUYEFFCPKXCJ");
    msg.acknowledge = 91U;
    msg.status = 66U;
    const char tmp_msg_0[] = {111, -101, -47, -30, 48, -95, -96, -24, -60, 109, 117};
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
    msg.setTimeStamp(0.709142311372);
    msg.setSource(55494U);
    msg.setSourceEntity(78U);
    msg.setDestination(4010U);
    msg.setDestinationEntity(204U);
    msg.id = 72U;
    msg.range = 0.176140521488;

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
    msg.setTimeStamp(0.459164699823);
    msg.setSource(14023U);
    msg.setSourceEntity(192U);
    msg.setDestination(13348U);
    msg.setDestinationEntity(22U);
    msg.id = 98U;
    msg.range = 0.530951107143;

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
    msg.setTimeStamp(0.922877603823);
    msg.setSource(48968U);
    msg.setSourceEntity(158U);
    msg.setDestination(58353U);
    msg.setDestinationEntity(178U);
    msg.id = 44U;
    msg.range = 0.829996766345;

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
    msg.setTimeStamp(0.029721001298);
    msg.setSource(26634U);
    msg.setSourceEntity(207U);
    msg.setDestination(39840U);
    msg.setDestinationEntity(158U);
    msg.beacon.assign("GZOPKRELGCWC");
    msg.lat = 0.582896919114;
    msg.lon = 0.673047091176;
    msg.depth = 0.0111238542457;
    msg.query_channel = 46U;
    msg.reply_channel = 139U;
    msg.transponder_delay = 50U;

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
    msg.setTimeStamp(0.629338814641);
    msg.setSource(45059U);
    msg.setSourceEntity(122U);
    msg.setDestination(44262U);
    msg.setDestinationEntity(202U);
    msg.beacon.assign("EMEGYNFCCGYIVACEZLFACRJMTZYBRYINPKHNQXYXZWFLEDDTPTPWEVIAXOAXFPFRBALFDVSSJODTTMHPQCXHBGIRNKNNOAPHSOTCLIJZWORKWQBNG");
    msg.lat = 0.778058519507;
    msg.lon = 0.560024444027;
    msg.depth = 0.980469523629;
    msg.query_channel = 72U;
    msg.reply_channel = 251U;
    msg.transponder_delay = 42U;

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
    msg.setTimeStamp(0.87746892699);
    msg.setSource(3584U);
    msg.setSourceEntity(206U);
    msg.setDestination(45382U);
    msg.setDestinationEntity(1U);
    msg.beacon.assign("AHOZOBVZTMSKZYQLHWIUANPTJRHXTQDUNDJYWITDINWPKDXTXBQCZTYYDMHLVQTGHFHBIMLLPEZUESRABBEUSLOCFJPWAGCRCUSXRABANUFVKCBKNSXNYJHCYGLGKTVTJOWDNKWEMEVWPBRUWFRXJIPCPXHJOUVQMFEZQAOWZGCNFXYSCSSQUZOJNRMCEMIRTLALMFIFKKSMFMLIPRDDAIELGSBVIKPARNBZXGQHOGYGOYKVUDDWJ");
    msg.lat = 0.154206144362;
    msg.lon = 0.934103535813;
    msg.depth = 0.678533591215;
    msg.query_channel = 184U;
    msg.reply_channel = 146U;
    msg.transponder_delay = 204U;

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
    msg.setTimeStamp(0.303955411353);
    msg.setSource(29835U);
    msg.setSourceEntity(103U);
    msg.setDestination(4435U);
    msg.setDestinationEntity(119U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.955431310016);
    msg.setSource(52327U);
    msg.setSourceEntity(235U);
    msg.setDestination(52498U);
    msg.setDestinationEntity(47U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.032387937076);
    msg.setSource(39465U);
    msg.setSourceEntity(160U);
    msg.setDestination(198U);
    msg.setDestinationEntity(35U);
    msg.op = 158U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NFXTGKKMWRJYSLMSONWNQKHDMRVFRTZWDTAWFLGXRMOJJXVCCKAONTIIEIYPNPBMYFYKDTWZBXLUEGGBBUUZQDBVRSHSBMADGQSXTACHDSVQJFWULROZLYFTUXVATZINHNWHLOCIUKOSABDEXZTYSFYDHREDTKAPRHKZLHIPBQWANGNXCSCZFVIVGZPZOQOACUMGWHEQOPVENCRYJBPPAUIEQLJUVBIXFLCJMKEJLIKCOQJHWJUGPQGMP");
    tmp_msg_0.lat = 0.444491605043;
    tmp_msg_0.lon = 0.588115468254;
    tmp_msg_0.depth = 0.044065339743;
    tmp_msg_0.query_channel = 142U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 135U;
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
    msg.setTimeStamp(0.607245413254);
    msg.setSource(2403U);
    msg.setSourceEntity(195U);
    msg.setDestination(31284U);
    msg.setDestinationEntity(163U);
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.118974281516);
    msg.setSource(12714U);
    msg.setSourceEntity(127U);
    msg.setDestination(2345U);
    msg.setDestinationEntity(144U);
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 3143U;
    tmp_msg_0.type = 246U;
    tmp_msg_0.utc_year = 28643U;
    tmp_msg_0.utc_month = 97U;
    tmp_msg_0.utc_day = 3U;
    tmp_msg_0.utc_time = 0.670498570867;
    tmp_msg_0.lat = 0.0476633404638;
    tmp_msg_0.lon = 0.912403842232;
    tmp_msg_0.height = 0.164789477772;
    tmp_msg_0.satellites = 191U;
    tmp_msg_0.cog = 0.98942296189;
    tmp_msg_0.sog = 0.96384360099;
    tmp_msg_0.hdop = 0.862130866056;
    tmp_msg_0.vdop = 0.37174668238;
    tmp_msg_0.hacc = 0.656862948229;
    tmp_msg_0.vacc = 0.830856067481;
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
    msg.setTimeStamp(0.0104129517658);
    msg.setSource(64677U);
    msg.setSourceEntity(80U);
    msg.setDestination(23027U);
    msg.setDestinationEntity(62U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("CPBUGVBVIDLCMTFLQOAAHDOTEMSYEZRGGDUWPEQCZCONMBAYHBMIMS");
    tmp_msg_0.state = 132U;
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
    msg.setTimeStamp(0.158106593635);
    msg.setSource(13514U);
    msg.setSourceEntity(205U);
    msg.setDestination(27192U);
    msg.setDestinationEntity(111U);
    msg.op = 67U;
    msg.system.assign("VUYLQRJHGDVAGXYHWULPJZIQIDOEHPRZSNFBTTYZIXXLFEZWEGOLMBUWADUHGLTKIDOYNYQGUIBNRQFQUSHJVNFDPOMVAPEDQAB");
    msg.range = 0.0694368649091;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.84776112919);
    msg.setSource(21613U);
    msg.setSourceEntity(181U);
    msg.setDestination(22291U);
    msg.setDestinationEntity(43U);
    msg.op = 54U;
    msg.system.assign("KEFZSWSJZKWXDRAPMHGCGSRJIZHHGQKSLDUXHYVVKCYGGROSCPKNLAAJHTXDLLMPPSHQZWHECNFULCMVBMFRQZFKWGNQDJFDVXPSORGZYGFATNYIBBKOOHJDEOIIVNMDWYBJTLURDUPSWURQEPZCQWMROEUOZEWNNAVQVITIZDEUOLVJVYFCCIEONAERMVHBJODPBKFUBBYTWACNALTQPXFSXGLGAQFTYIWUHJPXRBX");
    msg.range = 0.926478948832;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 70U;
    tmp_msg_0.range = 0.329722013409;
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
    msg.setTimeStamp(0.00904051370949);
    msg.setSource(15225U);
    msg.setSourceEntity(43U);
    msg.setDestination(47241U);
    msg.setDestinationEntity(218U);
    msg.op = 29U;
    msg.system.assign("AMHEVHHNBPYDADFYNPFTFJDQHIHGWVXHHYLYBEWKWYLWMJQOKTAAEDQBQKCZSLRZKFXPGDJAKZTBYTBIHFEHMGVTSZRLBPJCVOUBXONMXVKGEVZDROPVREXKIFLNVNZWCYRPFNIRVUFUMUBTUSDAWXASCPUELQEALJCJNZCIEYWUWDOIPMDJIRNPGQCUXOBGCDIYCSZAKGRMCL");
    msg.range = 0.838726498483;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 64425U;
    tmp_msg_0.lat = 0.351922814032;
    tmp_msg_0.lon = 0.975838331105;
    tmp_msg_0.z = 0.101245724936;
    tmp_msg_0.z_units = 97U;
    tmp_msg_0.speed = 0.47167554029;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.custom.assign("KEWTTUSEFKAFVJMGZVC");
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
    msg.setTimeStamp(0.123770091762);
    msg.setSource(16823U);
    msg.setSourceEntity(150U);
    msg.setDestination(35572U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.44547008258);
    msg.setSource(18668U);
    msg.setSourceEntity(148U);
    msg.setDestination(47725U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.702223790887);
    msg.setSource(51490U);
    msg.setSourceEntity(201U);
    msg.setDestination(23141U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.201988918016);
    msg.setSource(14479U);
    msg.setSourceEntity(205U);
    msg.setDestination(64248U);
    msg.setDestinationEntity(99U);
    msg.list.assign("AUXULRISFKJAUEQNKMTMQKVCXHMSVDZTOUYCAPLQKQCIASKYWVCINBWBDUQCCJHCPYZSQUNMBUKFHXLJVKGFSWJGVGGHPUZUIMRDPIXYYOELCNBEOZSRBFJTQJGKXESONAWLGMRAJWFTVOROQEWYTQTPPODXWQHNFZHTBJJEFEZBJWRNMOFZIHFYUXHTIKEBTXCSNAYZMRD");

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
    msg.setTimeStamp(0.394126878486);
    msg.setSource(43180U);
    msg.setSourceEntity(31U);
    msg.setDestination(39146U);
    msg.setDestinationEntity(25U);
    msg.list.assign("EIUVRZYCSURIBSUNJFZD");

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
    msg.setTimeStamp(0.172684608051);
    msg.setSource(41778U);
    msg.setSourceEntity(117U);
    msg.setDestination(11045U);
    msg.setDestinationEntity(132U);
    msg.list.assign("BKTZKDOAFSAOEGTXHPZRNMNPLMCVRZJYSEIRJUHWVZFOLMRJNVMGQFYIZYWHTLATQSYVXLCWUOXGFXDEMZEDXSVUXWUBWCHBHAVFDXJPIHKEDHCFXRYOFGI");

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
    msg.setTimeStamp(0.899707785842);
    msg.setSource(3595U);
    msg.setSourceEntity(155U);
    msg.setDestination(33181U);
    msg.setDestinationEntity(114U);
    msg.peer.assign("ZCXWZADPPZAHUWVBRULCCYIWWNTMSLZDPICNVBHJGUTNMAFCRACJMJKFROVWDPEGQWPFCDODDXWGJVOXUIQOJWLREQAGGCMPHEDSEPTUKOVHTNRLBALXX");
    msg.rssi = 0.887067546463;
    msg.integrity = 51987U;

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
    msg.setTimeStamp(0.139219875055);
    msg.setSource(13972U);
    msg.setSourceEntity(164U);
    msg.setDestination(46487U);
    msg.setDestinationEntity(77U);
    msg.peer.assign("LEZCDTNCGLDWPCIOHMTKNRHCYZBNUKTFSEWBJAVOCOZGCIKWZTF");
    msg.rssi = 0.729832592912;
    msg.integrity = 32574U;

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
    msg.setTimeStamp(0.942866979273);
    msg.setSource(59203U);
    msg.setSourceEntity(137U);
    msg.setDestination(12963U);
    msg.setDestinationEntity(230U);
    msg.peer.assign("KRGETZPOSWUWVZSIDDDPHNNBBTZELLZGLIBNJSQWDTKDLRBITAEHWAO");
    msg.rssi = 0.723343770308;
    msg.integrity = 9U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.118004451909);
    msg.setSource(25629U);
    msg.setSourceEntity(28U);
    msg.setDestination(28228U);
    msg.setDestinationEntity(177U);
    msg.value = 4886;

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
    msg.setTimeStamp(0.56000844849);
    msg.setSource(36576U);
    msg.setSourceEntity(44U);
    msg.setDestination(11615U);
    msg.setDestinationEntity(13U);
    msg.value = -11915;

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
    msg.setTimeStamp(0.472574520784);
    msg.setSource(10485U);
    msg.setSourceEntity(211U);
    msg.setDestination(4352U);
    msg.setDestinationEntity(15U);
    msg.value = -15127;

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
    msg.setTimeStamp(0.682087120908);
    msg.setSource(49231U);
    msg.setSourceEntity(187U);
    msg.setDestination(56366U);
    msg.setDestinationEntity(150U);
    msg.value = 0.153291434785;

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
    msg.setTimeStamp(0.0106215100758);
    msg.setSource(35673U);
    msg.setSourceEntity(60U);
    msg.setDestination(46058U);
    msg.setDestinationEntity(23U);
    msg.value = 0.327758913205;

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
    msg.setTimeStamp(0.894959292642);
    msg.setSource(16971U);
    msg.setSourceEntity(65U);
    msg.setDestination(6713U);
    msg.setDestinationEntity(209U);
    msg.value = 0.930473067726;

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
    msg.setTimeStamp(0.417935331518);
    msg.setSource(41111U);
    msg.setSourceEntity(71U);
    msg.setDestination(6153U);
    msg.setDestinationEntity(75U);
    msg.value = 0.862058322206;

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
    msg.setTimeStamp(0.490353345198);
    msg.setSource(50866U);
    msg.setSourceEntity(77U);
    msg.setDestination(38395U);
    msg.setDestinationEntity(119U);
    msg.value = 0.828950557985;

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
    msg.setTimeStamp(0.502270124384);
    msg.setSource(54399U);
    msg.setSourceEntity(199U);
    msg.setDestination(32609U);
    msg.setDestinationEntity(44U);
    msg.value = 0.470612741288;

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
    msg.setTimeStamp(0.859092390356);
    msg.setSource(7597U);
    msg.setSourceEntity(25U);
    msg.setDestination(31443U);
    msg.setDestinationEntity(153U);
    msg.validity = 40350U;
    msg.type = 7U;
    msg.utc_year = 44167U;
    msg.utc_month = 155U;
    msg.utc_day = 57U;
    msg.utc_time = 0.393702474666;
    msg.lat = 0.633764153219;
    msg.lon = 0.500163520631;
    msg.height = 0.917033208261;
    msg.satellites = 122U;
    msg.cog = 0.324247621022;
    msg.sog = 0.543052308608;
    msg.hdop = 0.306310732889;
    msg.vdop = 0.0631660581143;
    msg.hacc = 0.325877089551;
    msg.vacc = 0.940477305959;

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
    msg.setTimeStamp(0.37288272986);
    msg.setSource(1769U);
    msg.setSourceEntity(57U);
    msg.setDestination(17638U);
    msg.setDestinationEntity(108U);
    msg.validity = 10612U;
    msg.type = 105U;
    msg.utc_year = 40181U;
    msg.utc_month = 32U;
    msg.utc_day = 68U;
    msg.utc_time = 0.696424713901;
    msg.lat = 0.069851180502;
    msg.lon = 0.642735755134;
    msg.height = 0.121802426356;
    msg.satellites = 63U;
    msg.cog = 0.902355351791;
    msg.sog = 0.386397005684;
    msg.hdop = 0.0275854456289;
    msg.vdop = 0.560480906674;
    msg.hacc = 0.761488261553;
    msg.vacc = 0.437026349653;

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
    msg.setTimeStamp(0.871208864827);
    msg.setSource(23126U);
    msg.setSourceEntity(249U);
    msg.setDestination(13621U);
    msg.setDestinationEntity(194U);
    msg.validity = 36826U;
    msg.type = 229U;
    msg.utc_year = 57811U;
    msg.utc_month = 83U;
    msg.utc_day = 6U;
    msg.utc_time = 0.680252627724;
    msg.lat = 0.897329986315;
    msg.lon = 0.855041465025;
    msg.height = 0.103314042648;
    msg.satellites = 188U;
    msg.cog = 0.383774120174;
    msg.sog = 0.517163332065;
    msg.hdop = 0.0597733493312;
    msg.vdop = 0.771766265773;
    msg.hacc = 0.24556177495;
    msg.vacc = 0.0605944489114;

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
    msg.setTimeStamp(0.364013593595);
    msg.setSource(30331U);
    msg.setSourceEntity(177U);
    msg.setDestination(24079U);
    msg.setDestinationEntity(87U);
    msg.time = 0.38417299176;
    msg.phi = 0.665618641399;
    msg.theta = 0.0218276345926;
    msg.psi = 0.0437222854329;
    msg.psi_magnetic = 0.149629203789;

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
    msg.setTimeStamp(0.578714304539);
    msg.setSource(28301U);
    msg.setSourceEntity(245U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(100U);
    msg.time = 0.686938482643;
    msg.phi = 0.887061296;
    msg.theta = 0.571683198515;
    msg.psi = 0.857626099889;
    msg.psi_magnetic = 0.754898701201;

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
    msg.setTimeStamp(0.548551242696);
    msg.setSource(3020U);
    msg.setSourceEntity(3U);
    msg.setDestination(28707U);
    msg.setDestinationEntity(145U);
    msg.time = 0.126160385982;
    msg.phi = 0.700879752286;
    msg.theta = 0.248869153437;
    msg.psi = 0.275457120581;
    msg.psi_magnetic = 0.76197566335;

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
    msg.setTimeStamp(0.413174300863);
    msg.setSource(23054U);
    msg.setSourceEntity(73U);
    msg.setDestination(36467U);
    msg.setDestinationEntity(73U);
    msg.time = 0.189574250422;
    msg.x = 0.476320383244;
    msg.y = 0.31586617777;
    msg.z = 0.269476894626;
    msg.timestep = 0.164549813726;

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
    msg.setTimeStamp(0.896577865214);
    msg.setSource(46570U);
    msg.setSourceEntity(49U);
    msg.setDestination(3557U);
    msg.setDestinationEntity(98U);
    msg.time = 0.533896078199;
    msg.x = 0.401863157151;
    msg.y = 0.137022184949;
    msg.z = 0.623110955919;
    msg.timestep = 0.313342319645;

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
    msg.setTimeStamp(0.607892220121);
    msg.setSource(36354U);
    msg.setSourceEntity(183U);
    msg.setDestination(28505U);
    msg.setDestinationEntity(32U);
    msg.time = 0.563099854152;
    msg.x = 0.558342537491;
    msg.y = 0.589755703459;
    msg.z = 0.866758515549;
    msg.timestep = 0.0890175247264;

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
    msg.setTimeStamp(0.732724437937);
    msg.setSource(43433U);
    msg.setSourceEntity(36U);
    msg.setDestination(7465U);
    msg.setDestinationEntity(189U);
    msg.time = 0.995800962244;
    msg.x = 0.839949370075;
    msg.y = 0.966998760049;
    msg.z = 0.090204481722;

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
    msg.setTimeStamp(0.604637960417);
    msg.setSource(13656U);
    msg.setSourceEntity(240U);
    msg.setDestination(30576U);
    msg.setDestinationEntity(116U);
    msg.time = 0.168062833608;
    msg.x = 0.25550174204;
    msg.y = 0.675457130356;
    msg.z = 0.84384990443;

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
    msg.setTimeStamp(0.29858007544);
    msg.setSource(22811U);
    msg.setSourceEntity(192U);
    msg.setDestination(24558U);
    msg.setDestinationEntity(109U);
    msg.time = 0.239086767395;
    msg.x = 0.180822540103;
    msg.y = 0.527918430836;
    msg.z = 0.454031408286;

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
    msg.setTimeStamp(0.642594277638);
    msg.setSource(27427U);
    msg.setSourceEntity(99U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(175U);
    msg.time = 0.249818478899;
    msg.x = 0.317855850936;
    msg.y = 0.263621781541;
    msg.z = 0.0745829116117;

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
    msg.setTimeStamp(0.592069654065);
    msg.setSource(45493U);
    msg.setSourceEntity(154U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(81U);
    msg.time = 0.090489134246;
    msg.x = 0.136751980993;
    msg.y = 0.276290294719;
    msg.z = 0.632774792976;

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
    msg.setTimeStamp(0.272741687397);
    msg.setSource(23203U);
    msg.setSourceEntity(153U);
    msg.setDestination(4202U);
    msg.setDestinationEntity(126U);
    msg.time = 0.255079289827;
    msg.x = 0.12021050883;
    msg.y = 0.237430606742;
    msg.z = 0.251836989318;

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
    msg.setTimeStamp(0.0208032706952);
    msg.setSource(56178U);
    msg.setSourceEntity(90U);
    msg.setDestination(42531U);
    msg.setDestinationEntity(139U);
    msg.time = 0.702164887171;
    msg.x = 0.842095305416;
    msg.y = 0.861889952646;
    msg.z = 0.929175316362;

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
    msg.setTimeStamp(0.661602258249);
    msg.setSource(26634U);
    msg.setSourceEntity(181U);
    msg.setDestination(62211U);
    msg.setDestinationEntity(211U);
    msg.time = 0.459850095794;
    msg.x = 0.864772932527;
    msg.y = 0.16822130444;
    msg.z = 0.186621232692;

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
    msg.setTimeStamp(0.356332636531);
    msg.setSource(9438U);
    msg.setSourceEntity(177U);
    msg.setDestination(33915U);
    msg.setDestinationEntity(11U);
    msg.time = 0.292667390898;
    msg.x = 0.85135405869;
    msg.y = 0.721721365524;
    msg.z = 0.571210051617;

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
    msg.setTimeStamp(0.757387538893);
    msg.setSource(27063U);
    msg.setSourceEntity(79U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(20U);
    msg.validity = 175U;
    msg.x = 0.359089711446;
    msg.y = 0.235677690034;
    msg.z = 0.65616369174;

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
    msg.setTimeStamp(0.651160904877);
    msg.setSource(25587U);
    msg.setSourceEntity(6U);
    msg.setDestination(47850U);
    msg.setDestinationEntity(24U);
    msg.validity = 179U;
    msg.x = 0.52044351465;
    msg.y = 0.0137226719419;
    msg.z = 0.823115245487;

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
    msg.setTimeStamp(0.248160992765);
    msg.setSource(20678U);
    msg.setSourceEntity(80U);
    msg.setDestination(59890U);
    msg.setDestinationEntity(87U);
    msg.validity = 225U;
    msg.x = 0.485210582731;
    msg.y = 0.126485684638;
    msg.z = 0.404431919404;

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
    msg.setTimeStamp(0.0756907716897);
    msg.setSource(15800U);
    msg.setSourceEntity(21U);
    msg.setDestination(2917U);
    msg.setDestinationEntity(226U);
    msg.validity = 140U;
    msg.x = 0.615448169872;
    msg.y = 0.394730129765;
    msg.z = 0.189665336985;

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
    msg.setTimeStamp(0.161810256828);
    msg.setSource(51656U);
    msg.setSourceEntity(3U);
    msg.setDestination(17991U);
    msg.setDestinationEntity(175U);
    msg.validity = 201U;
    msg.x = 0.278241343674;
    msg.y = 0.129443558774;
    msg.z = 0.754570478404;

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
    msg.setTimeStamp(0.484461942096);
    msg.setSource(22474U);
    msg.setSourceEntity(62U);
    msg.setDestination(26402U);
    msg.setDestinationEntity(29U);
    msg.validity = 70U;
    msg.x = 0.476696064205;
    msg.y = 0.429741372773;
    msg.z = 0.0470663115529;

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
    msg.setTimeStamp(0.189003368353);
    msg.setSource(11558U);
    msg.setSourceEntity(201U);
    msg.setDestination(22556U);
    msg.setDestinationEntity(9U);
    msg.time = 0.337700671286;
    msg.x = 0.0187636279055;
    msg.y = 0.1715364196;
    msg.z = 0.204718809082;

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
    msg.setTimeStamp(0.324851692179);
    msg.setSource(24333U);
    msg.setSourceEntity(0U);
    msg.setDestination(1176U);
    msg.setDestinationEntity(226U);
    msg.time = 0.841319951485;
    msg.x = 0.379656179423;
    msg.y = 0.465037736078;
    msg.z = 0.452814414255;

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
    msg.setTimeStamp(0.766135082373);
    msg.setSource(63853U);
    msg.setSourceEntity(169U);
    msg.setDestination(22773U);
    msg.setDestinationEntity(245U);
    msg.time = 0.0409352668032;
    msg.x = 0.220561512834;
    msg.y = 0.670759967591;
    msg.z = 0.622661196804;

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
    msg.setTimeStamp(0.928884651735);
    msg.setSource(60878U);
    msg.setSourceEntity(21U);
    msg.setDestination(17660U);
    msg.setDestinationEntity(47U);
    msg.validity = 18U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.567968270984;
    tmp_msg_0.y = 0.505296899631;
    tmp_msg_0.z = 0.980208232478;
    tmp_msg_0.phi = 0.627756260376;
    tmp_msg_0.theta = 0.879333403356;
    tmp_msg_0.psi = 0.179498943858;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.930942382951;

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
    msg.setTimeStamp(0.662644134911);
    msg.setSource(26802U);
    msg.setSourceEntity(142U);
    msg.setDestination(17142U);
    msg.setDestinationEntity(189U);
    msg.validity = 198U;
    msg.value = 0.954066573342;

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
    msg.setTimeStamp(0.601280105594);
    msg.setSource(2518U);
    msg.setSourceEntity(140U);
    msg.setDestination(10452U);
    msg.setDestinationEntity(242U);
    msg.validity = 144U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.548023150973;
    tmp_msg_0.y = 0.385705646589;
    tmp_msg_0.z = 0.640806361427;
    tmp_msg_0.phi = 0.365715194039;
    tmp_msg_0.theta = 0.395408317012;
    tmp_msg_0.psi = 0.308357535208;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.878398573024;
    tmp_msg_1.beam_height = 0.486592929285;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.127882802429;

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
    msg.setTimeStamp(0.278431656326);
    msg.setSource(48897U);
    msg.setSourceEntity(162U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(57U);
    msg.value = 0.576511871501;

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
    msg.setTimeStamp(0.866184930671);
    msg.setSource(10443U);
    msg.setSourceEntity(49U);
    msg.setDestination(33063U);
    msg.setDestinationEntity(135U);
    msg.value = 0.845050356942;

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
    msg.setTimeStamp(0.0928521624075);
    msg.setSource(30311U);
    msg.setSourceEntity(91U);
    msg.setDestination(40333U);
    msg.setDestinationEntity(182U);
    msg.value = 0.569502454718;

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
    msg.setTimeStamp(0.246332650663);
    msg.setSource(20969U);
    msg.setSourceEntity(42U);
    msg.setDestination(50247U);
    msg.setDestinationEntity(9U);
    msg.value = 0.402215684573;

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
    msg.setTimeStamp(0.286938163619);
    msg.setSource(39058U);
    msg.setSourceEntity(222U);
    msg.setDestination(15773U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0827849398255;

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
    msg.setTimeStamp(0.774526097375);
    msg.setSource(63495U);
    msg.setSourceEntity(188U);
    msg.setDestination(7049U);
    msg.setDestinationEntity(115U);
    msg.value = 0.963060430534;

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
    msg.setTimeStamp(0.983796470306);
    msg.setSource(35475U);
    msg.setSourceEntity(215U);
    msg.setDestination(13119U);
    msg.setDestinationEntity(52U);
    msg.value = 0.285787414661;

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
    msg.setTimeStamp(0.748985016512);
    msg.setSource(17317U);
    msg.setSourceEntity(118U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(183U);
    msg.value = 0.757206530802;

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
    msg.setTimeStamp(0.995281436619);
    msg.setSource(46665U);
    msg.setSourceEntity(179U);
    msg.setDestination(19377U);
    msg.setDestinationEntity(180U);
    msg.value = 0.740807479275;

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
    msg.setTimeStamp(0.806485910763);
    msg.setSource(54717U);
    msg.setSourceEntity(200U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(140U);
    msg.value = 0.332641722652;

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
    msg.setTimeStamp(0.496020254989);
    msg.setSource(17460U);
    msg.setSourceEntity(80U);
    msg.setDestination(62779U);
    msg.setDestinationEntity(127U);
    msg.value = 0.427601501007;

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
    msg.setTimeStamp(0.967540465643);
    msg.setSource(44869U);
    msg.setSourceEntity(178U);
    msg.setDestination(41952U);
    msg.setDestinationEntity(174U);
    msg.value = 0.518287602901;

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
    msg.setTimeStamp(0.754614565784);
    msg.setSource(58316U);
    msg.setSourceEntity(117U);
    msg.setDestination(17849U);
    msg.setDestinationEntity(230U);
    msg.value = 0.953738397873;

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
    msg.setTimeStamp(0.231210840934);
    msg.setSource(5430U);
    msg.setSourceEntity(40U);
    msg.setDestination(30244U);
    msg.setDestinationEntity(181U);
    msg.value = 0.477375539034;

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
    msg.setTimeStamp(0.334170377228);
    msg.setSource(47718U);
    msg.setSourceEntity(82U);
    msg.setDestination(37216U);
    msg.setDestinationEntity(175U);
    msg.value = 0.471129353662;

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
    msg.setTimeStamp(0.180900984842);
    msg.setSource(19245U);
    msg.setSourceEntity(18U);
    msg.setDestination(58527U);
    msg.setDestinationEntity(245U);
    msg.value = 0.773022717869;

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
    msg.setTimeStamp(0.761011829384);
    msg.setSource(2121U);
    msg.setSourceEntity(93U);
    msg.setDestination(58358U);
    msg.setDestinationEntity(116U);
    msg.value = 0.571689614837;

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
    msg.setTimeStamp(0.213678723208);
    msg.setSource(7925U);
    msg.setSourceEntity(128U);
    msg.setDestination(19010U);
    msg.setDestinationEntity(5U);
    msg.value = 0.0195871892768;

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
    msg.setTimeStamp(0.27859213825);
    msg.setSource(32949U);
    msg.setSourceEntity(133U);
    msg.setDestination(34062U);
    msg.setDestinationEntity(143U);
    msg.value = 0.978117523848;

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
    msg.setTimeStamp(0.467352183239);
    msg.setSource(65049U);
    msg.setSourceEntity(48U);
    msg.setDestination(39493U);
    msg.setDestinationEntity(132U);
    msg.value = 0.837502508696;

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
    msg.setTimeStamp(0.996043630547);
    msg.setSource(47239U);
    msg.setSourceEntity(191U);
    msg.setDestination(50737U);
    msg.setDestinationEntity(194U);
    msg.value = 0.924500196883;

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
    msg.setTimeStamp(0.689892855591);
    msg.setSource(13694U);
    msg.setSourceEntity(142U);
    msg.setDestination(10928U);
    msg.setDestinationEntity(162U);
    msg.value = 0.533298741025;

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
    msg.setTimeStamp(0.237407697744);
    msg.setSource(2354U);
    msg.setSourceEntity(225U);
    msg.setDestination(37610U);
    msg.setDestinationEntity(34U);
    msg.value = 0.0978120607417;

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
    msg.setTimeStamp(0.625876083268);
    msg.setSource(51070U);
    msg.setSourceEntity(117U);
    msg.setDestination(38903U);
    msg.setDestinationEntity(25U);
    msg.value = 0.821254205242;

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
    msg.setTimeStamp(0.692940295437);
    msg.setSource(38270U);
    msg.setSourceEntity(145U);
    msg.setDestination(17057U);
    msg.setDestinationEntity(241U);
    msg.direction = 0.0900890113117;
    msg.speed = 0.0844815339871;
    msg.turbulence = 0.431043527831;

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
    msg.setTimeStamp(0.339134876412);
    msg.setSource(50471U);
    msg.setSourceEntity(4U);
    msg.setDestination(21812U);
    msg.setDestinationEntity(45U);
    msg.direction = 0.0595310416439;
    msg.speed = 0.741952564483;
    msg.turbulence = 0.14051285757;

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
    msg.setTimeStamp(0.488912757054);
    msg.setSource(59119U);
    msg.setSourceEntity(64U);
    msg.setDestination(48338U);
    msg.setDestinationEntity(200U);
    msg.direction = 0.682829099161;
    msg.speed = 0.135301504892;
    msg.turbulence = 0.22631834977;

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
    msg.setTimeStamp(0.699564017386);
    msg.setSource(1768U);
    msg.setSourceEntity(208U);
    msg.setDestination(13134U);
    msg.setDestinationEntity(178U);
    msg.value = 0.573209715397;

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
    msg.setTimeStamp(0.317453179709);
    msg.setSource(28999U);
    msg.setSourceEntity(243U);
    msg.setDestination(62460U);
    msg.setDestinationEntity(146U);
    msg.value = 0.90003957049;

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
    msg.setTimeStamp(0.396281619122);
    msg.setSource(21500U);
    msg.setSourceEntity(0U);
    msg.setDestination(46013U);
    msg.setDestinationEntity(138U);
    msg.value = 0.360764693786;

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
    msg.setTimeStamp(0.634431884346);
    msg.setSource(28968U);
    msg.setSourceEntity(107U);
    msg.setDestination(44781U);
    msg.setDestinationEntity(206U);
    msg.value.assign("KLLVWHZTSZ");

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
    msg.setTimeStamp(0.194433657159);
    msg.setSource(49013U);
    msg.setSourceEntity(34U);
    msg.setDestination(45447U);
    msg.setDestinationEntity(36U);
    msg.value.assign("SNKOAEOPJGWSTCHONLUPCFRBLBDNNIHDOYAKXSFKUXJNGWYCPTIKRFDNZTUGWHVRKTGQWQYXRTPJJJZDLDJHPVAUVXFADAEQHUQBYSQPIMWNAUIHOAMOWPIYDZUMFGVCW");

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
    msg.setTimeStamp(0.770036433422);
    msg.setSource(65184U);
    msg.setSourceEntity(73U);
    msg.setDestination(24170U);
    msg.setDestinationEntity(72U);
    msg.value.assign("OIWZBHHFPZCBOJGYHCBVFMZQQHYJWDARKHOUHQSOXNJTUANFIGBROOCXCJASZIAFQPRFPXVXWLVCNDYPJMLYWAXZMBXSUZTQTEFDKNYJVNFJMILRGJLDEWAAUZGOTEVPOYIAIKPTIUBERVSBZJLPNTLGSWYWUEHXXQWSTPUIUEGLCIKLSBCGPHDKNDXT");

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
    msg.setTimeStamp(0.0450584197518);
    msg.setSource(942U);
    msg.setSourceEntity(156U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(251U);
    const char tmp_msg_0[] = {45, -69, 91, -30, 61, -10, 91, -116, 120, 70, 13, -15, 6, 122, 86, -109, -62, 9, 93, -57, 5, 80, 65, -58, 109, 33, 121, -25, -29, -53, -40, 73, 17, -26, -102, 88, 61, 64, -106, 99, -89, 11, -34, 77, 100, 76, 62, -63, -67, -67, 16, 88, -41, 43, 60, -12, -42, 28, -61, -22, -119, 78, 43, -5, -26, -84, -54, 72, -123, -90, 95, -82, -127, 66, -74, -108, -56, -48, 48, -89, -15, -98, 79, 36, -104, 81, -75, 105, 60, 81, -60, -40, -23, -48, 103, -63, 33, -2, 86, 14, 92, -65, -73, -12, -67, -101, -113, 98, -78, -101, 107, 102, -122, 48, 92, 55, 48, -125, -15, 82, 49, -58, -43, -14, -83, 46, -56, -54, 34, -91, 49, 12, 86, -70, -94, -82, -4, 47, -98, -48, 78, 109, 13, -25, 102, 103, 32, -98, -93, 69, -9, -13, -63, 16, -110, 56, -34, 101, 36, 91, -110, 126, -96, -38, -111, -110, 61, -19, 17, 5, -126, 88, 4, 52};
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
    msg.setTimeStamp(0.510653427866);
    msg.setSource(28809U);
    msg.setSourceEntity(138U);
    msg.setDestination(7183U);
    msg.setDestinationEntity(171U);
    const char tmp_msg_0[] = {118, 80, 94, -21, -107, -77, 8, -98, 88, 80, 29, 0, -127, 116, -74, -100, -93, 79, -1, -111, -63, -60, -55, 3, -30, 55, 27, -102, 73, -125, -73, 4, -108, -9, -25, 85, 107, -127, -60, -68, 7, 66, -18, 122, -4, 1, -97, 51, -99, -100, 23, -119, 61, -54, -44, 47, 126, -105, -8, 106, -75, -4, 91, 47, -58, 55, 105, 4, -22, -43, -73, 62, -29, -66, -90, 39, 3, 106, 79, 11, -122, -80, 39, -81, -25, 47, 49, -80, -108, 69, -121, -57, -119, -10, 37, -68, -31, 86, -115, -22, -4, 70, 64, 28, -26, -103, 45, 87, 10, 12, -100, 101, -24, -96, 113, -23, 105, -110, 110, 33, -6, 107, -35, -67, 106, -2, 39, -41};
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
    msg.setTimeStamp(0.881747976356);
    msg.setSource(14528U);
    msg.setSourceEntity(14U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {72, -54, 43, 24, -111, 3, 107, -51, 26, -122, 117, 120, 21, 54, -32, -51, -69, -128, -13, 101, 117, 55, -79, -120, 41, 27, -80, -112, -115, -128, -25, 102, 71, 64, -91, 25, 69, -75, -69, 63, 81, 92, -3, 12, 65, 106, 12, 104, -8, 120, 113, -71, 59, -108, 16, 123, 18, -87, 66, -43, 116, 36, 89, 34, 98, -124, 72, -29, -77, 39, -84, 3, -89, -103, 65, -7, -23, 82, 68, 55, 14, 18, -47, 33, 75, -100, -39, -74, 57, 89, -56, -10, 55, 14, 100, 2, 94, -79, -113, 122, 120, 54, -127, -12, 25, 84, 13, 61, 96, 31, -67, -118, -99, 14, -30, 70, 73, -83, -58, -79, 114, 28, -70, 29, -118, -80, 14, 60, 123, 118, -53, -55, -27, 102, -14, 35, 126, -98, -115, -47, 119, 88, 60, -26, 21, 1, 112, -4, 91, -25, -47, 15, 2, 25, -30, -77, -92, -59, 92, 43, 29, 45, 18, -89, 65, -36, -63, 125, 114, 44, 62, 35, -115, 1, 120, 5, -17, 21, 126, -78, -45, -111, -36, -97, -58};
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
    msg.setTimeStamp(0.645269786301);
    msg.setSource(62746U);
    msg.setSourceEntity(152U);
    msg.setDestination(4418U);
    msg.setDestinationEntity(104U);
    msg.value = 0.237914406849;

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
    msg.setTimeStamp(0.305771882471);
    msg.setSource(20918U);
    msg.setSourceEntity(188U);
    msg.setDestination(15679U);
    msg.setDestinationEntity(181U);
    msg.value = 0.308608758241;

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
    msg.setTimeStamp(0.411720393267);
    msg.setSource(9660U);
    msg.setSourceEntity(75U);
    msg.setDestination(6929U);
    msg.setDestinationEntity(129U);
    msg.value = 0.201125568874;

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
    msg.setTimeStamp(0.827763065678);
    msg.setSource(13415U);
    msg.setSourceEntity(130U);
    msg.setDestination(60188U);
    msg.setDestinationEntity(221U);
    msg.type = 247U;
    msg.frequency = 4095110854U;
    msg.min_range = 5819U;
    msg.max_range = 45394U;
    msg.bits_per_point = 124U;
    msg.scale_factor = 0.919582918081;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.745890383127;
    tmp_msg_0.beam_height = 0.736903778994;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-35, 43, -16, 53, -48, 120, 52, -39, -17, 108, 104, 25, -38, 119, 122, -14, 38, 116, 89, 85, 9, 80, -118, 44, -60, 29, -53, -53, 28, 56, -46, -42, 60, 7, 46, 91, 94, -118, 109, 51, -52, -124, 102, 110, -14, -106, 13, -43, 42, 53, 40, 83, -109, -85, -40, 20, -112, 82, 96, 93, -83, -26, -67, 22, -126, 32, -121, -77, 39, -97, 26, -92, 66, -99, 59, 122, -39, -21, 86, -28, 51, -114, 96, 68, 44, -31, 81, 10, -40, -38, -68, 15, -126, -13, 116, 30, -29, -26, 69, -1, -123, -40, -52, 70, -95, 12, 54, 113, 17, 40, 92, -115, 22, 18, 0, -53, -106, 5, -93, -69, -17, -126, -110, 97, -85, -127, -113, -28, -109, 89, 49, 90, 56, 126, 97, -3, 86, -91, -8, -73, 72, 70, -97, -106, 113, -74, 20, 13, 32, 123, 20, 80, -64, -45, 113, 53, 54, 0, 36, -113, 55, -119};
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
    msg.setTimeStamp(0.163876772938);
    msg.setSource(25542U);
    msg.setSourceEntity(232U);
    msg.setDestination(31731U);
    msg.setDestinationEntity(242U);
    msg.type = 40U;
    msg.frequency = 4123276228U;
    msg.min_range = 34114U;
    msg.max_range = 11193U;
    msg.bits_per_point = 14U;
    msg.scale_factor = 0.700773975259;
    const char tmp_msg_0[] = {16, 40, 65, 37, -105, 100, -77, -16, -49, 66, -2, 115, 88, 64, 109, -107, 32, 16, 103, 61, 14, 2, -115, 109, -96, 125, 102, 55, -117, 0, -16, -99, -65, 0, -5, 96, 122, -23, 99, 83, -50, -23, 80, -36, 77, -47, -56, -69, 125, 73, -95, 89, -109, 85, 19, -10, -22, 44, 114, 39, -74, -58, 107, -106, -23, -123, -43, 18, -43, -78, 105, 39, -22, -36, -43, -12, -28, -12, -59, -44, -94, -105, 46, 41, -125, -20, 31, -113, -65, 59, 35, 50, -58, 53, -117, -79, 94, 33, -102, -122, 115, 33, 49, -58, 19, 108, -112, -52, -44, 4, -85, -32, 87, 49, -97, -14, 8, -19, 45, 0, 50, 2, 83, 56, -31, 78, -104, 81, -27, 124, -108, -122, 24, 88, -74, -66, -88, -63, 86, 31, 25, -73, 70, 26, 84, 12, 7, -77, 15, 58, -42, -115, 82, 79, 27, -65, 25, -88, -127, 24, 92, 99, -120, -71, -3, -97, -96, 79, 73, 109, -49, 6, -67, -27, -89, 118, 98, -15, -103, -106, -94, 57, -121, -62, 92, -53, 27, 34, -42, -6, 37, 121, -21, -5, -26, -1, 62, -64, -92, -18, -55, -82, -95, -84, -1, -49, 95, -116, 118, 14, -8, -10, 37, -62, -86, 90, 73, 67, 120, 99, -118, 92, -111, -32, 95, -100, 47, -17, -126, 0, 50, 62};
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
    msg.setTimeStamp(0.911057240759);
    msg.setSource(54520U);
    msg.setSourceEntity(218U);
    msg.setDestination(23260U);
    msg.setDestinationEntity(74U);
    msg.type = 116U;
    msg.frequency = 1391073431U;
    msg.min_range = 11911U;
    msg.max_range = 59617U;
    msg.bits_per_point = 50U;
    msg.scale_factor = 0.346747862504;
    const char tmp_msg_0[] = {98, -62, -82, 80, -90, -119, -84, -112, -11, 0, 97, -60, -54, -28, -41, -78, 30, -49, 78, -71, 0, -121, 89, -128, 56, 0, 117, -90, 92, 62, -50, 9, -73, -103, 44, -117, -53, 80, -101, -75, -73, 67, 126, -100, 8, 3, -127, 30, -104, 82, -20, 102, -112, 66, -76, 85, -117, 52, 81, -94, -18, -110, 44, -91, -52, 85, 95, -83, 6, -63, -54, 42, 30, -103, 102, 17, 77, -99, -58, -2, 58, -18, -106, 59, 66, 106, -102, -90, 29, -89, -22, 39, -54, 83, 114, 56, 83, 11, 47, 89, -3, -9, -25, 11, -24, 115, 13, -12, -90, -70, 3, -44, 121, 65, 5, -27, -117, 114, 55, 108, -9, 89, -43, 49, -23, 19, 60, 3, 22, 35, 0, 89, 79, 77, 110, -62, -66, -38, -3, -124, -4, 31, 15, -120, 58, 27, -8, 4, -7, -125, 5, -54, -86, -126, -93, 18, 68, -30, 11, 64, -28, -111, -17, -43, -117, 97, 38, -92, 27, 80, 33, 23, -49, 31, -51, -76, 111, -21, -24, 29, 34, -48, -48, -61, -16, 71, 13, -120, 28, -104, -3, 20, 54, 105, 76, -68, -96, 90, 106, -125, 125, 124, -60, -97, -81, -110, -47, 79, 81, 78, 115, -45, -11, -21, -115, -69, -11, -29, 63, -17, 120, -54, -99, 55, 80, 103};
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
    msg.setTimeStamp(0.011410821022);
    msg.setSource(9947U);
    msg.setSourceEntity(176U);
    msg.setDestination(58089U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.0780029607261);
    msg.setSource(14972U);
    msg.setSourceEntity(49U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.687447333364);
    msg.setSource(12882U);
    msg.setSourceEntity(209U);
    msg.setDestination(40020U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.639068312426);
    msg.setSource(49064U);
    msg.setSourceEntity(186U);
    msg.setDestination(13063U);
    msg.setDestinationEntity(67U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.395801425824);
    msg.setSource(24905U);
    msg.setSourceEntity(203U);
    msg.setDestination(36351U);
    msg.setDestinationEntity(128U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.947821324197);
    msg.setSource(24999U);
    msg.setSourceEntity(72U);
    msg.setDestination(1529U);
    msg.setDestinationEntity(87U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.683700504341);
    msg.setSource(4091U);
    msg.setSourceEntity(157U);
    msg.setDestination(54165U);
    msg.setDestinationEntity(45U);
    msg.value = 0.175024673326;
    msg.confidence = 0.641270433652;
    msg.opmodes.assign("NZEFLDIGSRAKUCLMGIMZWJBARTZPSPXSCIMCTDUHKVGTEIGVBSMPTGOIBDHTPBNRAHVPULZXXYRJLROZCASWSUPFNPFUQWKWYWERQUJEDFXYUSLVHXMCHEQBOYOUTNJVFKYYJKXJBYNJVQITRIHDRRHQQFDKCELSNLYZYDLCORLVGEBQVGWADWNWAOMUDCILPJJIOGYNHJEABGDWSKEEXPAMVAQOZBUZZVHCBSCAOTTFGHWQ");

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
    msg.setTimeStamp(0.8435263429);
    msg.setSource(25377U);
    msg.setSourceEntity(124U);
    msg.setDestination(8396U);
    msg.setDestinationEntity(141U);
    msg.value = 0.121600960476;
    msg.confidence = 0.215060029276;
    msg.opmodes.assign("UWHWGTYHORVE");

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
    msg.setTimeStamp(0.769104906655);
    msg.setSource(21771U);
    msg.setSourceEntity(240U);
    msg.setDestination(7201U);
    msg.setDestinationEntity(201U);
    msg.value = 0.424424914553;
    msg.confidence = 0.214775381603;
    msg.opmodes.assign("EPZAAXTHFJOJOVEDUPYDZOICHDRORLYGUTLYBZYZSOAFRBATQGXIU");

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
    msg.setTimeStamp(0.770816146839);
    msg.setSource(23812U);
    msg.setSourceEntity(129U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(154U);
    msg.itow = 1460126233U;
    msg.lat = 0.745839781194;
    msg.lon = 0.748001741826;
    msg.height_ell = 0.248318675207;
    msg.height_sea = 0.172887304478;
    msg.hacc = 0.67565084642;
    msg.vacc = 0.169261196652;
    msg.vel_n = 0.843308652332;
    msg.vel_e = 0.268440216521;
    msg.vel_d = 0.460592153827;
    msg.speed = 0.510696179743;
    msg.gspeed = 0.995600878366;
    msg.heading = 0.803945190289;
    msg.sacc = 0.040729805999;
    msg.cacc = 0.978877489917;

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
    msg.setTimeStamp(0.0938755432263);
    msg.setSource(19819U);
    msg.setSourceEntity(122U);
    msg.setDestination(31370U);
    msg.setDestinationEntity(39U);
    msg.itow = 3865263534U;
    msg.lat = 0.530522121431;
    msg.lon = 0.638768548239;
    msg.height_ell = 0.786483875388;
    msg.height_sea = 0.499320678623;
    msg.hacc = 0.263251776509;
    msg.vacc = 0.43345607029;
    msg.vel_n = 0.564579340732;
    msg.vel_e = 0.620587195601;
    msg.vel_d = 0.129532613812;
    msg.speed = 0.670708222793;
    msg.gspeed = 0.20764782312;
    msg.heading = 0.0177754987084;
    msg.sacc = 0.351487709339;
    msg.cacc = 0.112110860062;

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
    msg.setTimeStamp(0.69275888761);
    msg.setSource(63520U);
    msg.setSourceEntity(87U);
    msg.setDestination(23976U);
    msg.setDestinationEntity(14U);
    msg.itow = 3477059610U;
    msg.lat = 0.476094828028;
    msg.lon = 0.386815772866;
    msg.height_ell = 0.814620949461;
    msg.height_sea = 0.909731095154;
    msg.hacc = 0.0946382620378;
    msg.vacc = 0.594802361684;
    msg.vel_n = 0.358543025113;
    msg.vel_e = 0.556459879114;
    msg.vel_d = 0.0728050527567;
    msg.speed = 0.825827167502;
    msg.gspeed = 0.53328104957;
    msg.heading = 0.705056226721;
    msg.sacc = 0.740860042326;
    msg.cacc = 0.805223996115;

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
    msg.setTimeStamp(0.0307330057496);
    msg.setSource(23955U);
    msg.setSourceEntity(143U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(82U);
    msg.id = 214U;
    msg.value = 0.716109931767;

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
    msg.setTimeStamp(0.516672730088);
    msg.setSource(51724U);
    msg.setSourceEntity(56U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(225U);
    msg.id = 189U;
    msg.value = 0.948416000398;

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
    msg.setTimeStamp(0.674004983607);
    msg.setSource(44328U);
    msg.setSourceEntity(9U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(202U);
    msg.id = 86U;
    msg.value = 0.649454494665;

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
    msg.setTimeStamp(0.988735358056);
    msg.setSource(59936U);
    msg.setSourceEntity(154U);
    msg.setDestination(19115U);
    msg.setDestinationEntity(68U);
    msg.x = 0.585376590158;
    msg.y = 0.15200415727;
    msg.z = 0.321489569843;
    msg.phi = 0.954798996813;
    msg.theta = 0.745279323721;
    msg.psi = 0.10211195879;

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
    msg.setTimeStamp(0.119466082731);
    msg.setSource(30313U);
    msg.setSourceEntity(56U);
    msg.setDestination(29146U);
    msg.setDestinationEntity(32U);
    msg.x = 0.0263223855562;
    msg.y = 0.83715827809;
    msg.z = 0.363396425049;
    msg.phi = 0.600799370439;
    msg.theta = 0.716236230205;
    msg.psi = 0.91843534725;

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
    msg.setTimeStamp(0.060939424476);
    msg.setSource(37117U);
    msg.setSourceEntity(199U);
    msg.setDestination(5667U);
    msg.setDestinationEntity(112U);
    msg.x = 0.170406150578;
    msg.y = 0.898957861964;
    msg.z = 0.318699633358;
    msg.phi = 0.332214259861;
    msg.theta = 0.468381712422;
    msg.psi = 0.9403085616;

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
    msg.setTimeStamp(0.553648283514);
    msg.setSource(46948U);
    msg.setSourceEntity(202U);
    msg.setDestination(26794U);
    msg.setDestinationEntity(26U);
    msg.beam_width = 0.278212458317;
    msg.beam_height = 0.503840036294;

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
    msg.setTimeStamp(0.416052205229);
    msg.setSource(21940U);
    msg.setSourceEntity(129U);
    msg.setDestination(32395U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.74710775426;
    msg.beam_height = 0.770272646382;

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
    msg.setTimeStamp(0.702190593418);
    msg.setSource(15853U);
    msg.setSourceEntity(207U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(58U);
    msg.beam_width = 0.686724310408;
    msg.beam_height = 0.349183610111;

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
    msg.setTimeStamp(0.589681993014);
    msg.setSource(24592U);
    msg.setSourceEntity(228U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(72U);
    msg.sane = 202U;

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
    msg.setTimeStamp(0.964740586427);
    msg.setSource(60962U);
    msg.setSourceEntity(204U);
    msg.setDestination(479U);
    msg.setDestinationEntity(175U);
    msg.sane = 237U;

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
    msg.setTimeStamp(0.195075481404);
    msg.setSource(8972U);
    msg.setSourceEntity(13U);
    msg.setDestination(61328U);
    msg.setDestinationEntity(240U);
    msg.sane = 203U;

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
    msg.setTimeStamp(0.280406010743);
    msg.setSource(16916U);
    msg.setSourceEntity(95U);
    msg.setDestination(63253U);
    msg.setDestinationEntity(237U);
    msg.value = 0.318934848024;

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
    msg.setTimeStamp(0.00996455930796);
    msg.setSource(35905U);
    msg.setSourceEntity(48U);
    msg.setDestination(22167U);
    msg.setDestinationEntity(67U);
    msg.value = 0.00812984483931;

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
    msg.setTimeStamp(0.938276426898);
    msg.setSource(12387U);
    msg.setSourceEntity(233U);
    msg.setDestination(24638U);
    msg.setDestinationEntity(35U);
    msg.value = 0.505002449823;

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
    msg.setTimeStamp(0.25843117188);
    msg.setSource(8066U);
    msg.setSourceEntity(172U);
    msg.setDestination(741U);
    msg.setDestinationEntity(235U);
    msg.value = 0.501844280728;

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
    msg.setTimeStamp(0.154008396958);
    msg.setSource(28477U);
    msg.setSourceEntity(65U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(212U);
    msg.value = 0.227897746167;

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
    msg.setTimeStamp(0.624373487404);
    msg.setSource(53730U);
    msg.setSourceEntity(16U);
    msg.setDestination(13855U);
    msg.setDestinationEntity(54U);
    msg.value = 0.555810891461;

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
    msg.setTimeStamp(0.593065422535);
    msg.setSource(31317U);
    msg.setSourceEntity(138U);
    msg.setDestination(57115U);
    msg.setDestinationEntity(128U);
    msg.value = 0.214917828283;

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
    msg.setTimeStamp(0.142684530305);
    msg.setSource(21321U);
    msg.setSourceEntity(249U);
    msg.setDestination(12805U);
    msg.setDestinationEntity(19U);
    msg.value = 0.748390135756;

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
    msg.setTimeStamp(0.529715008112);
    msg.setSource(42799U);
    msg.setSourceEntity(128U);
    msg.setDestination(25941U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0861734437063;

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
    msg.setTimeStamp(0.127780598407);
    msg.setSource(62075U);
    msg.setSourceEntity(189U);
    msg.setDestination(376U);
    msg.setDestinationEntity(214U);
    msg.value = 0.296164558615;

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
    msg.setTimeStamp(0.379764165371);
    msg.setSource(29338U);
    msg.setSourceEntity(7U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(194U);
    msg.value = 0.801864801669;

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
    msg.setTimeStamp(0.464555828374);
    msg.setSource(32439U);
    msg.setSourceEntity(218U);
    msg.setDestination(55641U);
    msg.setDestinationEntity(144U);
    msg.value = 0.905881372447;

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
    msg.setTimeStamp(0.528280069504);
    msg.setSource(58714U);
    msg.setSourceEntity(80U);
    msg.setDestination(53543U);
    msg.setDestinationEntity(244U);
    msg.value = 0.473870501135;

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
    msg.setTimeStamp(0.31902568448);
    msg.setSource(56944U);
    msg.setSourceEntity(179U);
    msg.setDestination(50884U);
    msg.setDestinationEntity(75U);
    msg.value = 0.857676980846;

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
    msg.setTimeStamp(0.153054519907);
    msg.setSource(10332U);
    msg.setSourceEntity(184U);
    msg.setDestination(2990U);
    msg.setDestinationEntity(16U);
    msg.value = 0.591698037027;

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
    msg.setTimeStamp(0.425290218979);
    msg.setSource(57846U);
    msg.setSourceEntity(63U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(1U);
    msg.value = 0.62953588309;

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
    msg.setTimeStamp(0.550577030772);
    msg.setSource(31837U);
    msg.setSourceEntity(129U);
    msg.setDestination(37367U);
    msg.setDestinationEntity(156U);
    msg.value = 0.11448985303;

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
    msg.setTimeStamp(0.720344487279);
    msg.setSource(11989U);
    msg.setSourceEntity(3U);
    msg.setDestination(62429U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0532737332327;

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
    msg.setTimeStamp(0.775510280474);
    msg.setSource(22958U);
    msg.setSourceEntity(32U);
    msg.setDestination(37840U);
    msg.setDestinationEntity(9U);
    msg.value = 0.235245263709;

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
    msg.setTimeStamp(0.941406296595);
    msg.setSource(25323U);
    msg.setSourceEntity(155U);
    msg.setDestination(36861U);
    msg.setDestinationEntity(172U);
    msg.value = 0.48103471234;

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
    msg.setTimeStamp(0.610919590799);
    msg.setSource(52914U);
    msg.setSourceEntity(190U);
    msg.setDestination(55954U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0476087854455;

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
    msg.setTimeStamp(0.0210733746614);
    msg.setSource(49859U);
    msg.setSourceEntity(29U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(48U);
    msg.value = 0.851277339172;

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
    msg.setTimeStamp(0.378830771141);
    msg.setSource(37106U);
    msg.setSourceEntity(113U);
    msg.setDestination(37490U);
    msg.setDestinationEntity(1U);
    msg.value = 0.230771842333;

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
    msg.setTimeStamp(0.966326120399);
    msg.setSource(50925U);
    msg.setSourceEntity(3U);
    msg.setDestination(59397U);
    msg.setDestinationEntity(35U);
    msg.value = 0.499413071483;

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
    msg.setTimeStamp(0.554392846657);
    msg.setSource(24432U);
    msg.setSourceEntity(72U);
    msg.setDestination(14436U);
    msg.setDestinationEntity(187U);
    msg.validity = 54771U;
    msg.type = 151U;
    msg.tow = 800331003U;
    msg.base_lat = 0.837215822918;
    msg.base_lon = 0.0648733110014;
    msg.base_height = 0.089419799919;
    msg.n = 0.789058635799;
    msg.e = 0.719990275411;
    msg.d = 0.124840910214;
    msg.v_n = 0.166102485377;
    msg.v_e = 0.50991192065;
    msg.v_d = 0.546095658125;
    msg.satellites = 48U;
    msg.iar_hyp = 49486U;
    msg.iar_ratio = 0.000485578634032;

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
    msg.setTimeStamp(0.291206900875);
    msg.setSource(28715U);
    msg.setSourceEntity(211U);
    msg.setDestination(60079U);
    msg.setDestinationEntity(5U);
    msg.validity = 50049U;
    msg.type = 170U;
    msg.tow = 427416636U;
    msg.base_lat = 0.99942746871;
    msg.base_lon = 0.590754161688;
    msg.base_height = 0.817871522554;
    msg.n = 0.259775217639;
    msg.e = 0.417365663743;
    msg.d = 0.136496143881;
    msg.v_n = 0.08380459234;
    msg.v_e = 0.385890635713;
    msg.v_d = 0.286476809676;
    msg.satellites = 199U;
    msg.iar_hyp = 36787U;
    msg.iar_ratio = 0.484803554065;

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
    msg.setTimeStamp(0.362215268804);
    msg.setSource(45945U);
    msg.setSourceEntity(65U);
    msg.setDestination(58167U);
    msg.setDestinationEntity(149U);
    msg.validity = 59453U;
    msg.type = 163U;
    msg.tow = 755705917U;
    msg.base_lat = 0.971882502303;
    msg.base_lon = 0.945672434955;
    msg.base_height = 0.792052418962;
    msg.n = 0.197750302978;
    msg.e = 0.0414523831693;
    msg.d = 0.842097128645;
    msg.v_n = 0.808958265853;
    msg.v_e = 0.21645195043;
    msg.v_d = 0.926782339881;
    msg.satellites = 95U;
    msg.iar_hyp = 39596U;
    msg.iar_ratio = 0.60526399477;

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
    msg.setTimeStamp(0.304316523788);
    msg.setSource(138U);
    msg.setSourceEntity(20U);
    msg.setDestination(61939U);
    msg.setDestinationEntity(72U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.656957607756;
    tmp_msg_0.lon = 0.251736891904;
    tmp_msg_0.height = 0.760683155721;
    tmp_msg_0.x = 0.310568364599;
    tmp_msg_0.y = 0.694177216111;
    tmp_msg_0.z = 0.585528385144;
    tmp_msg_0.phi = 0.987134794194;
    tmp_msg_0.theta = 0.374063603996;
    tmp_msg_0.psi = 0.223681512736;
    tmp_msg_0.u = 0.977469556632;
    tmp_msg_0.v = 0.956579075432;
    tmp_msg_0.w = 0.508806749893;
    tmp_msg_0.vx = 0.25886547069;
    tmp_msg_0.vy = 0.773974887199;
    tmp_msg_0.vz = 0.381370966081;
    tmp_msg_0.p = 0.564033649958;
    tmp_msg_0.q = 0.274618637124;
    tmp_msg_0.r = 0.0485510148352;
    tmp_msg_0.depth = 0.327598667249;
    tmp_msg_0.alt = 0.57633410149;
    msg.state.set(tmp_msg_0);
    msg.type = 11U;

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
    msg.setTimeStamp(0.82106724936);
    msg.setSource(12212U);
    msg.setSourceEntity(87U);
    msg.setDestination(55575U);
    msg.setDestinationEntity(183U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.20677310398;
    tmp_msg_0.lon = 0.81891867678;
    tmp_msg_0.height = 0.033251085469;
    tmp_msg_0.x = 0.188692071938;
    tmp_msg_0.y = 0.13818345843;
    tmp_msg_0.z = 0.212010606657;
    tmp_msg_0.phi = 0.639995052741;
    tmp_msg_0.theta = 0.40996569219;
    tmp_msg_0.psi = 0.999316576613;
    tmp_msg_0.u = 0.336899432936;
    tmp_msg_0.v = 0.632680493414;
    tmp_msg_0.w = 0.293435097333;
    tmp_msg_0.vx = 0.332242184718;
    tmp_msg_0.vy = 0.871627927559;
    tmp_msg_0.vz = 0.345227738308;
    tmp_msg_0.p = 0.0717608270068;
    tmp_msg_0.q = 0.75426891172;
    tmp_msg_0.r = 0.596144967133;
    tmp_msg_0.depth = 0.897284369076;
    tmp_msg_0.alt = 0.0175885253209;
    msg.state.set(tmp_msg_0);
    msg.type = 152U;

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
    msg.setTimeStamp(0.973501453221);
    msg.setSource(5234U);
    msg.setSourceEntity(184U);
    msg.setDestination(24073U);
    msg.setDestinationEntity(93U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.383578363694;
    tmp_msg_0.lon = 0.922268306254;
    tmp_msg_0.height = 0.382679136186;
    tmp_msg_0.x = 0.260987197271;
    tmp_msg_0.y = 0.211823713532;
    tmp_msg_0.z = 0.253198866324;
    tmp_msg_0.phi = 0.713549737012;
    tmp_msg_0.theta = 0.867026996878;
    tmp_msg_0.psi = 0.697622918293;
    tmp_msg_0.u = 0.0771323399764;
    tmp_msg_0.v = 0.822018635626;
    tmp_msg_0.w = 0.49244970023;
    tmp_msg_0.vx = 0.890940907363;
    tmp_msg_0.vy = 0.211257367372;
    tmp_msg_0.vz = 0.160698341227;
    tmp_msg_0.p = 0.512061006221;
    tmp_msg_0.q = 0.454321159569;
    tmp_msg_0.r = 0.207566326451;
    tmp_msg_0.depth = 0.737877101968;
    tmp_msg_0.alt = 0.0510943495218;
    msg.state.set(tmp_msg_0);
    msg.type = 87U;

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
    msg.setTimeStamp(0.404962983586);
    msg.setSource(27675U);
    msg.setSourceEntity(4U);
    msg.setDestination(32201U);
    msg.setDestinationEntity(203U);
    msg.value = 0.682358488864;

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
    msg.setTimeStamp(0.443609441234);
    msg.setSource(13679U);
    msg.setSourceEntity(132U);
    msg.setDestination(48897U);
    msg.setDestinationEntity(4U);
    msg.value = 0.242203045321;

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
    msg.setTimeStamp(0.860051504056);
    msg.setSource(24134U);
    msg.setSourceEntity(20U);
    msg.setDestination(33350U);
    msg.setDestinationEntity(145U);
    msg.value = 0.755101440896;

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
    msg.setTimeStamp(0.847988584188);
    msg.setSource(5042U);
    msg.setSourceEntity(44U);
    msg.setDestination(50840U);
    msg.setDestinationEntity(140U);
    msg.value = 0.283427310908;

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
    msg.setTimeStamp(0.0390262600392);
    msg.setSource(58932U);
    msg.setSourceEntity(140U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(209U);
    msg.value = 0.431542171566;

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
    msg.setTimeStamp(0.940077006684);
    msg.setSource(8720U);
    msg.setSourceEntity(130U);
    msg.setDestination(28502U);
    msg.setDestinationEntity(5U);
    msg.value = 0.467479329466;

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
    msg.setTimeStamp(0.904175973379);
    msg.setSource(44017U);
    msg.setSourceEntity(235U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(220U);
    msg.value = 0.652433113366;

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
    msg.setTimeStamp(0.736502727165);
    msg.setSource(50828U);
    msg.setSourceEntity(209U);
    msg.setDestination(58789U);
    msg.setDestinationEntity(225U);
    msg.value = 0.324500955174;

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
    msg.setTimeStamp(0.6203786187);
    msg.setSource(48490U);
    msg.setSourceEntity(102U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(140U);
    msg.value = 0.142546935576;

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
    msg.setTimeStamp(0.500565011758);
    msg.setSource(10875U);
    msg.setSourceEntity(55U);
    msg.setDestination(33917U);
    msg.setDestinationEntity(14U);
    msg.value = 0.359216778941;

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
    msg.setTimeStamp(0.317823736404);
    msg.setSource(7879U);
    msg.setSourceEntity(220U);
    msg.setDestination(36463U);
    msg.setDestinationEntity(167U);
    msg.value = 0.904812772116;

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
    msg.setTimeStamp(0.971750857323);
    msg.setSource(292U);
    msg.setSourceEntity(146U);
    msg.setDestination(17454U);
    msg.setDestinationEntity(249U);
    msg.value = 0.122742552749;

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
    msg.setTimeStamp(0.259481562157);
    msg.setSource(3368U);
    msg.setSourceEntity(180U);
    msg.setDestination(9758U);
    msg.setDestinationEntity(44U);
    msg.value = 0.223010073057;

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
    msg.setTimeStamp(0.431686570606);
    msg.setSource(19967U);
    msg.setSourceEntity(133U);
    msg.setDestination(56055U);
    msg.setDestinationEntity(52U);
    msg.value = 0.712039630421;

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
    msg.setTimeStamp(0.872537727509);
    msg.setSource(52203U);
    msg.setSourceEntity(54U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(121U);
    msg.value = 0.127748390857;

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
    msg.setTimeStamp(0.726916714702);
    msg.setSource(59157U);
    msg.setSourceEntity(239U);
    msg.setDestination(58606U);
    msg.setDestinationEntity(252U);
    msg.id = 229U;
    msg.zoom = 76U;
    msg.action = 193U;

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
    msg.setTimeStamp(0.399432470578);
    msg.setSource(36018U);
    msg.setSourceEntity(198U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(78U);
    msg.id = 238U;
    msg.zoom = 211U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.431989513125);
    msg.setSource(65284U);
    msg.setSourceEntity(243U);
    msg.setDestination(28049U);
    msg.setDestinationEntity(34U);
    msg.id = 246U;
    msg.zoom = 89U;
    msg.action = 4U;

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
    msg.setTimeStamp(0.183315746629);
    msg.setSource(62640U);
    msg.setSourceEntity(178U);
    msg.setDestination(39326U);
    msg.setDestinationEntity(2U);
    msg.id = 235U;
    msg.value = 0.890962677318;

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
    msg.setTimeStamp(0.800650014842);
    msg.setSource(35906U);
    msg.setSourceEntity(46U);
    msg.setDestination(17129U);
    msg.setDestinationEntity(77U);
    msg.id = 112U;
    msg.value = 0.207904897958;

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
    msg.setTimeStamp(0.149276772498);
    msg.setSource(1666U);
    msg.setSourceEntity(62U);
    msg.setDestination(39854U);
    msg.setDestinationEntity(9U);
    msg.id = 184U;
    msg.value = 0.717639676507;

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
    msg.setTimeStamp(0.677281524487);
    msg.setSource(10166U);
    msg.setSourceEntity(109U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(129U);
    msg.id = 70U;
    msg.value = 0.849827393579;

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
    msg.setTimeStamp(0.102376685642);
    msg.setSource(63463U);
    msg.setSourceEntity(224U);
    msg.setDestination(16283U);
    msg.setDestinationEntity(235U);
    msg.id = 64U;
    msg.value = 0.00252193295434;

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
    msg.setTimeStamp(0.559053917381);
    msg.setSource(45567U);
    msg.setSourceEntity(235U);
    msg.setDestination(51260U);
    msg.setDestinationEntity(233U);
    msg.id = 38U;
    msg.value = 0.928967778958;

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
    msg.setTimeStamp(0.808559818221);
    msg.setSource(25843U);
    msg.setSourceEntity(150U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(57U);
    msg.id = 201U;
    msg.angle = 0.0949138241693;

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
    msg.setTimeStamp(0.537130369447);
    msg.setSource(28501U);
    msg.setSourceEntity(27U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(120U);
    msg.id = 106U;
    msg.angle = 0.835503344947;

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
    msg.setTimeStamp(0.686362430988);
    msg.setSource(42403U);
    msg.setSourceEntity(213U);
    msg.setDestination(40818U);
    msg.setDestinationEntity(4U);
    msg.id = 8U;
    msg.angle = 0.529105906084;

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
    msg.setTimeStamp(0.374928205122);
    msg.setSource(10611U);
    msg.setSourceEntity(209U);
    msg.setDestination(5737U);
    msg.setDestinationEntity(19U);
    msg.op = 90U;
    msg.actions.assign("MKPCKXABSYIPGMFRECOWUDLSUUEZZGNNLBUEBOQAHOGYQAYVIADHETHEZJMDQUFKVJOCXVRSBRLYQBKKGSIWWIOHAOMYLJXTUQKXHDLJCUETPLGVHUPBINIRNTSXABLDJTGZWROYHVZCNNT");

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
    msg.setTimeStamp(0.995700258174);
    msg.setSource(44341U);
    msg.setSourceEntity(119U);
    msg.setDestination(28663U);
    msg.setDestinationEntity(123U);
    msg.op = 113U;
    msg.actions.assign("OKLZWAYGIYCBHHPGFFTKHALVDCQFELQVXJFRHTABJIWVABDTQZOZWQUSLPIAM");

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
    msg.setTimeStamp(0.735260340273);
    msg.setSource(22080U);
    msg.setSourceEntity(193U);
    msg.setDestination(12656U);
    msg.setDestinationEntity(47U);
    msg.op = 191U;
    msg.actions.assign("TNSEQZUHLFBRHFUKIVCNLGCFJDNZQCKMHYXQTPZOIIRQJYPXUSFSOXAEMEUMRTQLWPIYWDFAMZUQMEOHELJYZOKJAONIBGCYLCDDDHPJODEJRRELOUXIT");

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
    msg.setTimeStamp(0.945130404661);
    msg.setSource(38337U);
    msg.setSourceEntity(202U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(186U);
    msg.actions.assign("LJCHUJBMIUKGGMFDSESMRNDPNKRBKVUDHWBDKRYSVDLBNATGURNAUVNMDLCHJVCTYWUJCREZIAXVGPJKACCIHWYVQXNSQPGEHETASXZIDFWKEOLEBJLM");

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
    msg.setTimeStamp(0.652649160201);
    msg.setSource(4425U);
    msg.setSourceEntity(206U);
    msg.setDestination(42638U);
    msg.setDestinationEntity(72U);
    msg.actions.assign("SMEZSOZVRSKFXQADVEEXZOOSQMVCAUGIVOKGBHOBOCMENWYPFVXCKQBAIAFNNTGWSCCZQJWBHUHUKIFYPUCJYLYGFVXUTLRYIBJCPARDZTZRZTISERBKEENBZTGEMNDFMKUHNRIXGLXKHIMADIMLXHVNSXKCQLTRQAQIJYOLVWGXYJURTMDWDKGUQENNDFRPHJQVCPJDJMBWCAFLDFSBPKWLWOJELRPYWUHAPWH");

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
    msg.setTimeStamp(0.955137495323);
    msg.setSource(31886U);
    msg.setSourceEntity(133U);
    msg.setDestination(22697U);
    msg.setDestinationEntity(165U);
    msg.actions.assign("DRECSPFMDPUOJFCTKHOWLAVVTXDXFQOSAZDOPVTEQAMKQWYMRGZGOQUOIVCTRYWMLOBTNBJKCYTNQIAZYEIWVEFJNSLOTRWIVFQFAMFGRISDQUDWUXJPLLBPSMGHDZKHIXGSBXDXPIVUMFNFBBWFGVBUJPNUTRPBYAEOCMDBELTAJQKYJSGZTYKXSNCEYWJAHSMZZWUNXCIR");

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
    msg.setTimeStamp(0.721397459729);
    msg.setSource(8380U);
    msg.setSourceEntity(204U);
    msg.setDestination(38554U);
    msg.setDestinationEntity(8U);
    msg.button = 96U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.485987858639);
    msg.setSource(27967U);
    msg.setSourceEntity(207U);
    msg.setDestination(46671U);
    msg.setDestinationEntity(189U);
    msg.button = 134U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.7525817233);
    msg.setSource(16825U);
    msg.setSourceEntity(201U);
    msg.setDestination(47187U);
    msg.setDestinationEntity(69U);
    msg.button = 43U;
    msg.value = 60U;

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
    msg.setTimeStamp(0.810491858474);
    msg.setSource(55765U);
    msg.setSourceEntity(227U);
    msg.setDestination(55927U);
    msg.setDestinationEntity(224U);
    msg.op = 53U;
    msg.text.assign("WTDUZTYPCGJQOWNTFUBHRHWNMGLTNSXDYGJJJBQUHSGFRTCMYLJGFMVWVZPLIVKMRAENSMCDQKBHPSTQQEYTNXZYHHIWLCULEQNEXAKUWPIOBRJBSGBKMFJNIZSMEKIAXOABCVSFDCONRFFPAGHREHPQWOVQOZRAAUY");

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
    msg.setTimeStamp(0.507934600383);
    msg.setSource(29578U);
    msg.setSourceEntity(72U);
    msg.setDestination(23467U);
    msg.setDestinationEntity(64U);
    msg.op = 74U;
    msg.text.assign("MINJAASXSDJFQGFGDFPRWONQYXSGPDV");

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
    msg.setTimeStamp(0.789484292427);
    msg.setSource(6697U);
    msg.setSourceEntity(196U);
    msg.setDestination(4927U);
    msg.setDestinationEntity(88U);
    msg.op = 26U;
    msg.text.assign("WVHWICJEGTBJUOQZZQNVRZGTYJPFWCNJVQIVKESMCMOXOYNO");

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
    msg.setTimeStamp(0.939445971481);
    msg.setSource(63017U);
    msg.setSourceEntity(112U);
    msg.setDestination(49550U);
    msg.setDestinationEntity(33U);
    msg.op = 9U;
    msg.time_remain = 0.191335014895;
    msg.sched_time = 0.261787722694;

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
    msg.setTimeStamp(0.349529875729);
    msg.setSource(25343U);
    msg.setSourceEntity(43U);
    msg.setDestination(53526U);
    msg.setDestinationEntity(56U);
    msg.op = 27U;
    msg.time_remain = 0.414452010194;
    msg.sched_time = 0.107742427584;

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
    msg.setTimeStamp(0.29581014973);
    msg.setSource(56872U);
    msg.setSourceEntity(156U);
    msg.setDestination(46852U);
    msg.setDestinationEntity(205U);
    msg.op = 253U;
    msg.time_remain = 0.884497465183;
    msg.sched_time = 0.845194407307;

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
    msg.setTimeStamp(0.155869571492);
    msg.setSource(50385U);
    msg.setSourceEntity(124U);
    msg.setDestination(30244U);
    msg.setDestinationEntity(252U);
    msg.name.assign("ENROVLFITUEQNIIVRWMLZOMLRAHNDETPVVBQGEXMVGIGWBHMXBLGZODQYONHCSZKNGVYPUMKJSJCXUPFRKCOSN");
    msg.op = 154U;
    msg.sched_time = 0.807511128791;

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
    msg.setTimeStamp(0.728868607753);
    msg.setSource(56160U);
    msg.setSourceEntity(14U);
    msg.setDestination(20520U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ZKKRGQQKQPHZFWWMRYOLBMKUGZKKXPBQISVPBPBXXZIGWZVYFWMJNJPEVXVGHQWSCSXMEIHODNZUBIPSNSMDWGOTBWGNDAVEEDUMEICLHTCYFTLCNGARUIFJQXMDWDAPYBJLNBTYKGCWSAKVABKYFDINOCYERLQMLOOWPDFBSQVUJOVRYYQVNTATDFUUOTUHECOZRDRIJANZTHOHFSSNXLGRJZVLCMAPT");
    msg.op = 83U;
    msg.sched_time = 0.940390415194;

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
    msg.setTimeStamp(0.905738284978);
    msg.setSource(18067U);
    msg.setSourceEntity(76U);
    msg.setDestination(54402U);
    msg.setDestinationEntity(87U);
    msg.name.assign("BPXHOZGFPXZMNMSTIQXNTFWEXQZSASGFPLIQBXOKXYTDBLCMEJZRVQJNUOFBSSRYRSPEUHDTUROPMRWHOCCTCOPDSMGTQAVTVADWDZAZUIQJJIZHLWUKOPJMRFNECGNDKNAHJQPIUHGTOEADQXYYBFBN");
    msg.op = 170U;
    msg.sched_time = 0.721029751509;

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
    msg.setTimeStamp(0.492481977819);
    msg.setSource(54832U);
    msg.setSourceEntity(7U);
    msg.setDestination(61374U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.411318048758);
    msg.setSource(42632U);
    msg.setSourceEntity(23U);
    msg.setDestination(46614U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.471084004326);
    msg.setSource(37768U);
    msg.setSourceEntity(174U);
    msg.setDestination(59370U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.381177274747);
    msg.setSource(42744U);
    msg.setSourceEntity(98U);
    msg.setDestination(42663U);
    msg.setDestinationEntity(158U);
    msg.name.assign("RGTIUGJYZPTWZCJHOMLVJGJCUGTJDICIQUHYWZGSPLDCRAYLLYEAZQHCAURTLKLMBTFQHVJALKIPFDGJQNFRFFCWBXKQPSONTDHREQMPLRXNNJKDPKDPCXGHUMYEVIMOLNIEFRXEXWBMFZSRKMVZBXEQNBFMZJYLQOKRXVJZEEHM");
    msg.state = 26U;

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
    msg.setTimeStamp(0.372402146069);
    msg.setSource(21952U);
    msg.setSourceEntity(67U);
    msg.setDestination(36299U);
    msg.setDestinationEntity(200U);
    msg.name.assign("OGBDDFEWOTBDYCEGSWRAUPNDBIQSMWHDQAKBKPHHLTQDEOCLCIHMRTYFYWGRZKXWESUBZHPGNFTFJALCWEANSWOIWKMJAZDJPKXSFOKOZVHNYMSGUUEFKIXCBBDNGYWHRLMIVSQIVMSTLTRWCGJUGBQELURQXVUZYKJAUNHJRLINFZDXPCARMOZKKRVCBJTTDQZXJPVASEOEQULNN");
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
    msg.setTimeStamp(0.0941803363924);
    msg.setSource(62553U);
    msg.setSourceEntity(177U);
    msg.setDestination(28580U);
    msg.setDestinationEntity(252U);
    msg.name.assign("EGBKWCXRORCAPOQUQLZPDDNNVIYUBYVHOFVFIZTXIZYZODBSXAQTPYMKMXPEZNXQFXEMABUOGLYQNTCNCGSKRTPIXKNHMAFJVNCAYKKZLPGTWYJWRYFSZWUCWHEWQUBRADKGZTIMOHBJLSEKLTYAUSQOAGSVVYDNQUSQEJJLUQDJXEHCZSMLRFVTKFJTWWNGGFWIENJBPZSHOFJACEAMBIPIWDRBMHLVDUSJEBMXVCTGMPLVDUDR");
    msg.state = 5U;

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
    msg.setTimeStamp(0.93119412265);
    msg.setSource(37113U);
    msg.setSourceEntity(55U);
    msg.setDestination(46997U);
    msg.setDestinationEntity(248U);
    msg.name.assign("ITMPLDNHXOTWMEVBOLPWOHYUVMEKGIEZELFMHRWLFSXYASPNQSHXEEWRJXSDJKQOIKZFBMGCJIYTBVVIUQBQNMTUSSLCEPBFAZXGTDLGXQZMVJNUKCECTBZDOPYWAHNDADNQWFGCYRUKHTWIBHADFQVKUDYPSKNJUUGNPBRJJHMVKZVTAEGHSRCSQYISBYQKXARU");
    msg.value = 246U;

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
    msg.setTimeStamp(0.629278666381);
    msg.setSource(35451U);
    msg.setSourceEntity(82U);
    msg.setDestination(61280U);
    msg.setDestinationEntity(160U);
    msg.name.assign("HOQGNQNGIPGPMNURDTYSMISYHKOONARNKZZBHZVJXRLSWYIFYRPQAAPDLTAFDVYXGCWRBNSYVTJILVJEQKELIAFJGLTKPCRSXVLFELAUFVKMERHPPCJSTXSWOFLKHBBEICAHODFUKUZEEGBPRWUGNOFKKMXCT");
    msg.value = 0U;

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
    msg.setTimeStamp(0.270858293806);
    msg.setSource(19836U);
    msg.setSourceEntity(179U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(172U);
    msg.name.assign("CYSPITFUDTQSHAYVPRACNXQZMZLVZBILPIPETDSLRATMIOWBUWVXCGGEEZTMGJSFENYKSGUOQQRNTJTWDKIERFXITYROJXUDCBQGHBFPPAVWATUALBMIOCJEJKRJDFFGPBAWCUJZHLVSXSIHYEGNOPOXVSYVHWERNKOUVIWFUOIYZZMKRENOKDQDHLMJCCFUHJRYQHXDQXNBMDKYPWWZLBJPCGEAAQXGCBFMYKW");
    msg.value = 236U;

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
    msg.setTimeStamp(0.826090891758);
    msg.setSource(49716U);
    msg.setSourceEntity(36U);
    msg.setDestination(7141U);
    msg.setDestinationEntity(63U);
    msg.name.assign("IQSIFMRVXJZGYIMJYSKIIWFTIGNQPMHAGNODDPPXOLWO");

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
    msg.setTimeStamp(0.565511060272);
    msg.setSource(60462U);
    msg.setSourceEntity(144U);
    msg.setDestination(42929U);
    msg.setDestinationEntity(146U);
    msg.name.assign("TQZRDRGLEPKWGSBPAXSBZCZMCSGXCOWTIYAXAKEEIGEGZYGBDLNCHIYHMPKXEOIRMNCDNOEAOOFAMWPYWNFJMYKUCUPHMQVJTGXNXPTFIXYPWBTSJVNQHPHFZKRHAZERBZPRJLULKTJCWLFHZNMJKXNYIISDQATSAGJUXCIKUBDVLQVHRNBFMWUOYIQVAFQGWCBVTVQEMJUEWQLGSBSFDWFCDOPHVTMZZRVKIBUUYDHKE");

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
    msg.setTimeStamp(0.0506151407492);
    msg.setSource(42531U);
    msg.setSourceEntity(113U);
    msg.setDestination(20561U);
    msg.setDestinationEntity(88U);
    msg.name.assign("QFQOZIGBWEPJLHWOVBKVEVQLDHKKTDSMPCTEVIRUAPJUFMGSPLKBCZUEABMBKYOBUYQNKGSMZLJADXAXWTTOUHVCHNYWPRCAGMCOMONPNXMFOTZUMTKRPNDUQXDZCBDGJIPZTKARQOVFBJFGXTOSNKUERNXCAHWCDLZWEPTRQUDWGLRSPSJYGXOGREZQI");

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
    msg.setTimeStamp(0.909913043949);
    msg.setSource(39560U);
    msg.setSourceEntity(46U);
    msg.setDestination(35469U);
    msg.setDestinationEntity(219U);
    msg.name.assign("JXXNXSHYLIYYAOUACVSBQIUNDRHJPCUVMXSIBEOPWUWY");
    msg.value = 25U;

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
    msg.setTimeStamp(0.30976200371);
    msg.setSource(361U);
    msg.setSourceEntity(45U);
    msg.setDestination(7387U);
    msg.setDestinationEntity(220U);
    msg.name.assign("EFVUPFJIWXSQSWLJNJAISGOSE");
    msg.value = 24U;

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
    msg.setTimeStamp(0.681871497368);
    msg.setSource(1100U);
    msg.setSourceEntity(15U);
    msg.setDestination(7280U);
    msg.setDestinationEntity(89U);
    msg.name.assign("MXELTDXHLGKCJJGNEPOVGTTRUWIYNAODBQAYZUOQRJOUHTECSILSPDROBRDHGFOQUZUYFXA");
    msg.value = 206U;

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
    msg.setTimeStamp(0.891640687634);
    msg.setSource(41740U);
    msg.setSourceEntity(76U);
    msg.setDestination(49229U);
    msg.setDestinationEntity(134U);
    msg.id = 200U;
    msg.period = 4204557188U;
    msg.duty_cycle = 1224950411U;

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
    msg.setTimeStamp(0.975173596257);
    msg.setSource(13057U);
    msg.setSourceEntity(3U);
    msg.setDestination(53049U);
    msg.setDestinationEntity(172U);
    msg.id = 223U;
    msg.period = 1752158630U;
    msg.duty_cycle = 1415708256U;

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
    msg.setTimeStamp(0.304075530561);
    msg.setSource(9427U);
    msg.setSourceEntity(123U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(248U);
    msg.id = 225U;
    msg.period = 2759970551U;
    msg.duty_cycle = 522795387U;

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
    msg.setTimeStamp(0.251107320559);
    msg.setSource(6210U);
    msg.setSourceEntity(246U);
    msg.setDestination(58585U);
    msg.setDestinationEntity(177U);
    msg.id = 18U;
    msg.period = 3106403342U;
    msg.duty_cycle = 2933275883U;

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
    msg.setTimeStamp(0.121009309503);
    msg.setSource(10565U);
    msg.setSourceEntity(21U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(206U);
    msg.id = 100U;
    msg.period = 1450869995U;
    msg.duty_cycle = 3997292245U;

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
    msg.setTimeStamp(0.79333806455);
    msg.setSource(60073U);
    msg.setSourceEntity(242U);
    msg.setDestination(39249U);
    msg.setDestinationEntity(22U);
    msg.id = 23U;
    msg.period = 3230438878U;
    msg.duty_cycle = 3583496031U;

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
    msg.setTimeStamp(0.447340000272);
    msg.setSource(29113U);
    msg.setSourceEntity(233U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.411033254504;
    msg.lon = 0.435296922663;
    msg.height = 0.842253317274;
    msg.x = 0.385260947546;
    msg.y = 0.868956358881;
    msg.z = 0.254819317486;
    msg.phi = 0.631258716316;
    msg.theta = 0.00900586137607;
    msg.psi = 0.703320311294;
    msg.u = 0.520891574042;
    msg.v = 0.212781029281;
    msg.w = 0.561983344501;
    msg.vx = 0.553775285559;
    msg.vy = 0.727973722026;
    msg.vz = 0.873321322103;
    msg.p = 0.503697910813;
    msg.q = 0.167236336499;
    msg.r = 0.458157897314;
    msg.depth = 0.298102727261;
    msg.alt = 0.731986161121;

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
    msg.setTimeStamp(0.623095911211);
    msg.setSource(30063U);
    msg.setSourceEntity(204U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.278240900642;
    msg.lon = 0.588978872515;
    msg.height = 0.865184220662;
    msg.x = 0.581532895247;
    msg.y = 0.637431888068;
    msg.z = 0.891329761336;
    msg.phi = 0.534077331234;
    msg.theta = 0.631667699756;
    msg.psi = 0.462515619958;
    msg.u = 0.573476389213;
    msg.v = 0.134920724621;
    msg.w = 0.853029728195;
    msg.vx = 0.673783908394;
    msg.vy = 0.728154267513;
    msg.vz = 0.152651958407;
    msg.p = 0.204263595185;
    msg.q = 0.694953927649;
    msg.r = 0.67149975667;
    msg.depth = 0.740406601478;
    msg.alt = 0.359686039124;

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
    msg.setTimeStamp(0.84325802015);
    msg.setSource(45513U);
    msg.setSourceEntity(187U);
    msg.setDestination(2431U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.358435248895;
    msg.lon = 0.415732777974;
    msg.height = 0.935804467223;
    msg.x = 0.563556772398;
    msg.y = 0.530452837912;
    msg.z = 0.336476103648;
    msg.phi = 0.0550790379679;
    msg.theta = 0.218894149772;
    msg.psi = 0.811877621227;
    msg.u = 0.458813994893;
    msg.v = 0.280426109101;
    msg.w = 0.816285419156;
    msg.vx = 0.968324704825;
    msg.vy = 0.0707506549663;
    msg.vz = 0.0347956328196;
    msg.p = 0.0245073131131;
    msg.q = 0.352937210786;
    msg.r = 0.716087576996;
    msg.depth = 0.043837878436;
    msg.alt = 0.37572519283;

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
    msg.setTimeStamp(0.38938456267);
    msg.setSource(50699U);
    msg.setSourceEntity(104U);
    msg.setDestination(2690U);
    msg.setDestinationEntity(43U);
    msg.x = 0.0509030453694;
    msg.y = 0.160783829998;
    msg.z = 0.0738719948616;

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
    msg.setTimeStamp(0.284972287402);
    msg.setSource(45582U);
    msg.setSourceEntity(71U);
    msg.setDestination(57297U);
    msg.setDestinationEntity(73U);
    msg.x = 0.987467776712;
    msg.y = 0.508503110489;
    msg.z = 0.458628172187;

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
    msg.setTimeStamp(0.231564085126);
    msg.setSource(2797U);
    msg.setSourceEntity(136U);
    msg.setDestination(6245U);
    msg.setDestinationEntity(21U);
    msg.x = 0.0820398829871;
    msg.y = 0.247222216397;
    msg.z = 0.0830464200068;

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
    msg.setTimeStamp(0.952680292267);
    msg.setSource(9974U);
    msg.setSourceEntity(233U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(249U);
    msg.value = 0.979713156662;

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
    msg.setTimeStamp(0.783362326543);
    msg.setSource(30724U);
    msg.setSourceEntity(127U);
    msg.setDestination(57318U);
    msg.setDestinationEntity(241U);
    msg.value = 0.646210824527;

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
    msg.setTimeStamp(0.966618605988);
    msg.setSource(58271U);
    msg.setSourceEntity(30U);
    msg.setDestination(34453U);
    msg.setDestinationEntity(187U);
    msg.value = 0.623664939869;

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
    msg.setTimeStamp(0.184146844444);
    msg.setSource(47167U);
    msg.setSourceEntity(10U);
    msg.setDestination(16563U);
    msg.setDestinationEntity(210U);
    msg.value = 0.341446004974;

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
    msg.setTimeStamp(0.451689539587);
    msg.setSource(45378U);
    msg.setSourceEntity(57U);
    msg.setDestination(11445U);
    msg.setDestinationEntity(100U);
    msg.value = 0.577800071177;

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
    msg.setTimeStamp(0.469976633092);
    msg.setSource(51129U);
    msg.setSourceEntity(57U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0575344872581;

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
    msg.setTimeStamp(0.91915279834);
    msg.setSource(12686U);
    msg.setSourceEntity(104U);
    msg.setDestination(35469U);
    msg.setDestinationEntity(80U);
    msg.x = 0.684359019367;
    msg.y = 0.622058409269;
    msg.z = 0.308495379732;
    msg.phi = 0.751057599268;
    msg.theta = 0.417512026822;
    msg.psi = 0.26474145351;
    msg.p = 0.0821678226646;
    msg.q = 0.226207902847;
    msg.r = 0.278878474901;
    msg.u = 0.809460010861;
    msg.v = 0.453126242395;
    msg.w = 0.663182885292;
    msg.bias_psi = 0.778763947777;
    msg.bias_r = 0.962429853702;

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
    msg.setTimeStamp(0.599593391176);
    msg.setSource(17443U);
    msg.setSourceEntity(239U);
    msg.setDestination(33120U);
    msg.setDestinationEntity(212U);
    msg.x = 0.392250491641;
    msg.y = 0.189100877077;
    msg.z = 0.57023132342;
    msg.phi = 0.0558752607606;
    msg.theta = 0.0723828070766;
    msg.psi = 0.514639696469;
    msg.p = 0.556676257434;
    msg.q = 0.902378722474;
    msg.r = 0.0518897173981;
    msg.u = 0.602710883763;
    msg.v = 0.375306303295;
    msg.w = 0.536098636078;
    msg.bias_psi = 0.129227040718;
    msg.bias_r = 0.29967003978;

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
    msg.setTimeStamp(0.17762236943);
    msg.setSource(49238U);
    msg.setSourceEntity(88U);
    msg.setDestination(19354U);
    msg.setDestinationEntity(197U);
    msg.x = 0.966534328932;
    msg.y = 0.037320069154;
    msg.z = 0.0207763754225;
    msg.phi = 0.824764006802;
    msg.theta = 0.66395858839;
    msg.psi = 0.978059736298;
    msg.p = 0.182477247689;
    msg.q = 0.75942278485;
    msg.r = 0.233270848225;
    msg.u = 0.677960037889;
    msg.v = 0.254214087517;
    msg.w = 0.962515078023;
    msg.bias_psi = 0.239255016903;
    msg.bias_r = 0.946763758831;

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
    msg.setTimeStamp(0.319330230682);
    msg.setSource(32612U);
    msg.setSourceEntity(15U);
    msg.setDestination(55625U);
    msg.setDestinationEntity(178U);
    msg.bias_psi = 0.695945815411;
    msg.bias_r = 0.145077268887;
    msg.cog = 0.609667418975;
    msg.cyaw = 0.150820001867;
    msg.lbl_rej_level = 0.273318318244;
    msg.gps_rej_level = 0.645376144711;
    msg.custom_x = 0.861724654827;
    msg.custom_y = 0.278071017743;
    msg.custom_z = 0.187027688394;

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
    msg.setTimeStamp(0.660852372715);
    msg.setSource(22998U);
    msg.setSourceEntity(14U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(15U);
    msg.bias_psi = 0.267447990749;
    msg.bias_r = 0.612558638374;
    msg.cog = 0.229751009341;
    msg.cyaw = 0.862771884094;
    msg.lbl_rej_level = 0.474809290037;
    msg.gps_rej_level = 0.286060946392;
    msg.custom_x = 0.594231234298;
    msg.custom_y = 0.0839207668125;
    msg.custom_z = 0.842986563577;

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
    msg.setTimeStamp(0.23471136375);
    msg.setSource(32148U);
    msg.setSourceEntity(142U);
    msg.setDestination(27897U);
    msg.setDestinationEntity(160U);
    msg.bias_psi = 0.89597457232;
    msg.bias_r = 0.609696455377;
    msg.cog = 0.988222949111;
    msg.cyaw = 0.0050723503381;
    msg.lbl_rej_level = 0.314883636056;
    msg.gps_rej_level = 0.880978415728;
    msg.custom_x = 0.996775774977;
    msg.custom_y = 0.474551600417;
    msg.custom_z = 0.540010107254;

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
    msg.setTimeStamp(0.959468206226);
    msg.setSource(44980U);
    msg.setSourceEntity(153U);
    msg.setDestination(20729U);
    msg.setDestinationEntity(42U);
    msg.utc_time = 0.503225918093;
    msg.reason = 133U;

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
    msg.setTimeStamp(0.652666149686);
    msg.setSource(49910U);
    msg.setSourceEntity(121U);
    msg.setDestination(23678U);
    msg.setDestinationEntity(206U);
    msg.utc_time = 0.153008841641;
    msg.reason = 66U;

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
    msg.setTimeStamp(0.0257849341891);
    msg.setSource(3431U);
    msg.setSourceEntity(60U);
    msg.setDestination(6462U);
    msg.setDestinationEntity(27U);
    msg.utc_time = 0.197581240492;
    msg.reason = 166U;

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
    msg.setTimeStamp(0.143676372991);
    msg.setSource(33593U);
    msg.setSourceEntity(100U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(51U);
    msg.id = 89U;
    msg.range = 0.0892945466309;
    msg.acceptance = 241U;

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
    msg.setTimeStamp(0.0164493102358);
    msg.setSource(1729U);
    msg.setSourceEntity(20U);
    msg.setDestination(9106U);
    msg.setDestinationEntity(3U);
    msg.id = 148U;
    msg.range = 0.774273163748;
    msg.acceptance = 160U;

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
    msg.setTimeStamp(0.275822238555);
    msg.setSource(58622U);
    msg.setSourceEntity(28U);
    msg.setDestination(31838U);
    msg.setDestinationEntity(20U);
    msg.id = 166U;
    msg.range = 0.251079606098;
    msg.acceptance = 96U;

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
    msg.setTimeStamp(0.33750164312);
    msg.setSource(39897U);
    msg.setSourceEntity(3U);
    msg.setDestination(18708U);
    msg.setDestinationEntity(217U);
    msg.type = 171U;
    msg.reason = 176U;
    msg.value = 0.157914271638;
    msg.timestep = 0.752061715652;

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
    msg.setTimeStamp(0.793763943691);
    msg.setSource(46700U);
    msg.setSourceEntity(11U);
    msg.setDestination(30238U);
    msg.setDestinationEntity(229U);
    msg.type = 237U;
    msg.reason = 7U;
    msg.value = 0.508277676597;
    msg.timestep = 0.541081435413;

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
    msg.setTimeStamp(0.02757275582);
    msg.setSource(25897U);
    msg.setSourceEntity(9U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(6U);
    msg.type = 224U;
    msg.reason = 158U;
    msg.value = 0.447629945;
    msg.timestep = 0.759369207262;

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
    msg.setTimeStamp(0.773250789452);
    msg.setSource(57631U);
    msg.setSourceEntity(36U);
    msg.setDestination(3876U);
    msg.setDestinationEntity(38U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VIIVVARUTLJBJQWQJNBIIKNDMNLBYCYKZJWCMFYRAXYPIFALPMHOPSUVZESEARMSOYEGXWXFCBIBFFHXLAVJNISTLFZGOGZAVAWNBWKYQZQKQSBPDVECEHWOSPEYKTUUJGQAAXBPKIENZHTMPIBLRZXMMYKPOCNTTEJCDQTWKRFUDDERTSCFULUNOXVUHDLESJJKGMOWRDRJLSRHGDOWQRVCHXOKZHXSFZAPTHGWMYIUZLBNYVTGCQDMCNU");
    tmp_msg_0.lat = 0.701871095897;
    tmp_msg_0.lon = 0.168542791207;
    tmp_msg_0.depth = 0.83413964991;
    tmp_msg_0.query_channel = 168U;
    tmp_msg_0.reply_channel = 194U;
    tmp_msg_0.transponder_delay = 30U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.369556636061;
    msg.y = 0.66723004687;
    msg.var_x = 0.805682263353;
    msg.var_y = 0.0775297171225;
    msg.distance = 0.829926826682;

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
    msg.setTimeStamp(0.558033570615);
    msg.setSource(5969U);
    msg.setSourceEntity(106U);
    msg.setDestination(39264U);
    msg.setDestinationEntity(52U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FHVXCBBJQUFFQIOCSYLBMVVAEMETSLXZTKPAAWVMOSKUHYEKVORODGDLBFZWFJIWPAHKGQSKGSQNIRSHQMDBOVUX");
    tmp_msg_0.lat = 0.123024975075;
    tmp_msg_0.lon = 0.378511831329;
    tmp_msg_0.depth = 0.442043753863;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 6U;
    tmp_msg_0.transponder_delay = 4U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.720495769088;
    msg.y = 0.693093563108;
    msg.var_x = 0.195816109783;
    msg.var_y = 0.676347891038;
    msg.distance = 0.451098032873;

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
    msg.setTimeStamp(0.887419370196);
    msg.setSource(63108U);
    msg.setSourceEntity(165U);
    msg.setDestination(23919U);
    msg.setDestinationEntity(193U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HWASMXNHEMNDYQUTDBXKHYLFAJEAAQZIAAROZPIEBRGHJTLULXBKRQPRKFAGSNIORJELUNKYMZPMUPUTDMEEJIVQMTGTOTNGHFSSVLUPWZTFFVCNUBHMUCVBZWLXQFSZKCYNZIKODVEMJBLZRDDIMOOAXPHOQPFWWJDFKHYJLGSQORGNVELPVWQZTJFYKUDPQKYAC");
    tmp_msg_0.lat = 0.102691913642;
    tmp_msg_0.lon = 0.288121273915;
    tmp_msg_0.depth = 0.689534478365;
    tmp_msg_0.query_channel = 166U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 198U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0585339162291;
    msg.y = 0.275522171159;
    msg.var_x = 0.736492507779;
    msg.var_y = 0.10532086896;
    msg.distance = 0.382220340577;

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
    msg.setTimeStamp(0.0403675757938);
    msg.setSource(37686U);
    msg.setSourceEntity(29U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(115U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.782008806564);
    msg.setSource(22994U);
    msg.setSourceEntity(22U);
    msg.setDestination(4262U);
    msg.setDestinationEntity(180U);
    msg.state = 151U;

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
    msg.setTimeStamp(0.015624787193);
    msg.setSource(37401U);
    msg.setSourceEntity(30U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(73U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.591471574002);
    msg.setSource(33837U);
    msg.setSourceEntity(196U);
    msg.setDestination(10766U);
    msg.setDestinationEntity(226U);
    msg.x = 0.978485978205;
    msg.y = 0.139982396539;
    msg.z = 0.0757281553014;

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
    msg.setTimeStamp(0.223396208275);
    msg.setSource(18882U);
    msg.setSourceEntity(83U);
    msg.setDestination(13589U);
    msg.setDestinationEntity(199U);
    msg.x = 0.596938283561;
    msg.y = 0.65115390671;
    msg.z = 0.585503527177;

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
    msg.setTimeStamp(0.177371163133);
    msg.setSource(3569U);
    msg.setSourceEntity(63U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(208U);
    msg.x = 0.207529927081;
    msg.y = 0.950716036563;
    msg.z = 0.17889653857;

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
    msg.setTimeStamp(0.222788290858);
    msg.setSource(17793U);
    msg.setSourceEntity(183U);
    msg.setDestination(31318U);
    msg.setDestinationEntity(132U);
    msg.va = 0.510618437475;
    msg.aoa = 0.817733367157;
    msg.ssa = 0.236830963499;

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
    msg.setTimeStamp(0.257474483228);
    msg.setSource(61134U);
    msg.setSourceEntity(117U);
    msg.setDestination(54302U);
    msg.setDestinationEntity(48U);
    msg.va = 0.198676004777;
    msg.aoa = 0.855806236691;
    msg.ssa = 0.403031192329;

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
    msg.setTimeStamp(0.0654289807694);
    msg.setSource(52665U);
    msg.setSourceEntity(199U);
    msg.setDestination(33737U);
    msg.setDestinationEntity(226U);
    msg.va = 0.858590434846;
    msg.aoa = 0.198472315372;
    msg.ssa = 0.0170579276346;

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
    msg.setTimeStamp(0.709204244227);
    msg.setSource(23816U);
    msg.setSourceEntity(17U);
    msg.setDestination(21354U);
    msg.setDestinationEntity(10U);
    msg.value = 0.153054288598;

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
    msg.setTimeStamp(0.626563546221);
    msg.setSource(57710U);
    msg.setSourceEntity(150U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0887249816189;

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
    msg.setTimeStamp(0.706995166176);
    msg.setSource(20824U);
    msg.setSourceEntity(159U);
    msg.setDestination(64870U);
    msg.setDestinationEntity(2U);
    msg.value = 0.56225048808;

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
    msg.setTimeStamp(0.0962594634277);
    msg.setSource(54274U);
    msg.setSourceEntity(41U);
    msg.setDestination(15675U);
    msg.setDestinationEntity(5U);
    msg.value = 0.2839576485;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.18344629136);
    msg.setSource(56145U);
    msg.setSourceEntity(207U);
    msg.setDestination(7192U);
    msg.setDestinationEntity(159U);
    msg.value = 0.518352436407;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.82368132926);
    msg.setSource(53750U);
    msg.setSourceEntity(149U);
    msg.setDestination(7383U);
    msg.setDestinationEntity(247U);
    msg.value = 0.506525967397;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.851777508086);
    msg.setSource(23890U);
    msg.setSourceEntity(121U);
    msg.setDestination(22970U);
    msg.setDestinationEntity(183U);
    msg.value = 0.784674419328;
    msg.speed_units = 82U;

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
    msg.setTimeStamp(0.471425319807);
    msg.setSource(31765U);
    msg.setSourceEntity(219U);
    msg.setDestination(49054U);
    msg.setDestinationEntity(218U);
    msg.value = 0.232077328899;
    msg.speed_units = 199U;

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
    msg.setTimeStamp(0.288727383721);
    msg.setSource(14255U);
    msg.setSourceEntity(205U);
    msg.setDestination(36284U);
    msg.setDestinationEntity(130U);
    msg.value = 0.951525428062;
    msg.speed_units = 20U;

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
    msg.setTimeStamp(0.936621091663);
    msg.setSource(41733U);
    msg.setSourceEntity(129U);
    msg.setDestination(28612U);
    msg.setDestinationEntity(239U);
    msg.value = 0.278978178298;

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
    msg.setTimeStamp(0.26947720323);
    msg.setSource(41052U);
    msg.setSourceEntity(21U);
    msg.setDestination(44270U);
    msg.setDestinationEntity(200U);
    msg.value = 0.908534430565;

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
    msg.setTimeStamp(0.65470636648);
    msg.setSource(22943U);
    msg.setSourceEntity(224U);
    msg.setDestination(45970U);
    msg.setDestinationEntity(71U);
    msg.value = 0.504680298259;

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
    msg.setTimeStamp(0.967412330725);
    msg.setSource(1862U);
    msg.setSourceEntity(23U);
    msg.setDestination(61635U);
    msg.setDestinationEntity(154U);
    msg.value = 0.982834620509;

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
    msg.setTimeStamp(0.6711141033);
    msg.setSource(34890U);
    msg.setSourceEntity(226U);
    msg.setDestination(20295U);
    msg.setDestinationEntity(136U);
    msg.value = 0.404701785593;

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
    msg.setTimeStamp(0.0396116545782);
    msg.setSource(52417U);
    msg.setSourceEntity(85U);
    msg.setDestination(36014U);
    msg.setDestinationEntity(180U);
    msg.value = 0.236398955659;

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
    msg.setTimeStamp(0.246647388975);
    msg.setSource(39533U);
    msg.setSourceEntity(128U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(190U);
    msg.value = 0.24271896295;

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
    msg.setTimeStamp(0.186728110515);
    msg.setSource(35102U);
    msg.setSourceEntity(44U);
    msg.setDestination(8799U);
    msg.setDestinationEntity(96U);
    msg.value = 0.526354090222;

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
    msg.setTimeStamp(0.0852197477354);
    msg.setSource(34046U);
    msg.setSourceEntity(107U);
    msg.setDestination(13925U);
    msg.setDestinationEntity(219U);
    msg.value = 0.888983841916;

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
    msg.setTimeStamp(0.128757433151);
    msg.setSource(46450U);
    msg.setSourceEntity(204U);
    msg.setDestination(58754U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 3362379356U;
    msg.start_lat = 0.836433929034;
    msg.start_lon = 0.388150451489;
    msg.start_z = 0.575127828654;
    msg.start_z_units = 223U;
    msg.end_lat = 0.554869777124;
    msg.end_lon = 0.550023952908;
    msg.end_z = 0.514850043484;
    msg.end_z_units = 215U;
    msg.speed = 0.862892130295;
    msg.speed_units = 21U;
    msg.lradius = 0.270032837508;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.452592039637);
    msg.setSource(20208U);
    msg.setSourceEntity(171U);
    msg.setDestination(8274U);
    msg.setDestinationEntity(223U);
    msg.path_ref = 2939284905U;
    msg.start_lat = 0.0877646093587;
    msg.start_lon = 0.119091197719;
    msg.start_z = 0.653632397448;
    msg.start_z_units = 99U;
    msg.end_lat = 0.96662624735;
    msg.end_lon = 0.669170926357;
    msg.end_z = 0.186969547284;
    msg.end_z_units = 235U;
    msg.speed = 0.883702345364;
    msg.speed_units = 35U;
    msg.lradius = 0.549027921741;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.249979839104);
    msg.setSource(20371U);
    msg.setSourceEntity(187U);
    msg.setDestination(24182U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 497399257U;
    msg.start_lat = 0.718454172272;
    msg.start_lon = 0.561507654349;
    msg.start_z = 0.0635849817994;
    msg.start_z_units = 61U;
    msg.end_lat = 0.514713666149;
    msg.end_lon = 0.33844224307;
    msg.end_z = 0.808136029366;
    msg.end_z_units = 205U;
    msg.speed = 0.776220567874;
    msg.speed_units = 73U;
    msg.lradius = 0.50121233696;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.571655374127);
    msg.setSource(47289U);
    msg.setSourceEntity(159U);
    msg.setDestination(20642U);
    msg.setDestinationEntity(36U);
    msg.x = 0.43690768714;
    msg.y = 0.529492565514;
    msg.z = 0.0406386591069;
    msg.k = 0.327385251436;
    msg.m = 0.398504322208;
    msg.n = 0.330417224933;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.836020420913);
    msg.setSource(25456U);
    msg.setSourceEntity(231U);
    msg.setDestination(38047U);
    msg.setDestinationEntity(155U);
    msg.x = 0.359268021666;
    msg.y = 0.40824730807;
    msg.z = 0.806807431;
    msg.k = 0.949160418105;
    msg.m = 0.36937095691;
    msg.n = 0.97309898775;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.519509477659);
    msg.setSource(49227U);
    msg.setSourceEntity(13U);
    msg.setDestination(26513U);
    msg.setDestinationEntity(155U);
    msg.x = 0.825364804995;
    msg.y = 0.506692288275;
    msg.z = 0.506210902074;
    msg.k = 0.331927565702;
    msg.m = 0.889577360029;
    msg.n = 0.900214178886;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.285148422602);
    msg.setSource(25478U);
    msg.setSourceEntity(176U);
    msg.setDestination(22385U);
    msg.setDestinationEntity(180U);
    msg.value = 0.161280651297;

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
    msg.setTimeStamp(0.959104859919);
    msg.setSource(2326U);
    msg.setSourceEntity(198U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(8U);
    msg.value = 0.645357257032;

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
    msg.setTimeStamp(0.218188181745);
    msg.setSource(37178U);
    msg.setSourceEntity(209U);
    msg.setDestination(42473U);
    msg.setDestinationEntity(109U);
    msg.value = 0.875065507652;

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
    msg.setTimeStamp(0.092423943003);
    msg.setSource(2743U);
    msg.setSourceEntity(166U);
    msg.setDestination(57432U);
    msg.setDestinationEntity(30U);
    msg.u = 0.791796052959;
    msg.v = 0.419374456943;
    msg.w = 0.81442263988;
    msg.p = 0.372505728585;
    msg.q = 0.168897752402;
    msg.r = 0.982049794946;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.171829159314);
    msg.setSource(49456U);
    msg.setSourceEntity(108U);
    msg.setDestination(23874U);
    msg.setDestinationEntity(132U);
    msg.u = 0.0745015644768;
    msg.v = 0.825419576909;
    msg.w = 0.261192095789;
    msg.p = 0.608504585651;
    msg.q = 0.118743132662;
    msg.r = 0.106345971609;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.271758939868);
    msg.setSource(44270U);
    msg.setSourceEntity(180U);
    msg.setDestination(16149U);
    msg.setDestinationEntity(123U);
    msg.u = 0.745198118297;
    msg.v = 0.465854081951;
    msg.w = 0.448328641754;
    msg.p = 0.0205612065776;
    msg.q = 0.671461454719;
    msg.r = 0.240163603367;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.927150513311);
    msg.setSource(59297U);
    msg.setSourceEntity(14U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 2971170594U;
    msg.start_lat = 0.766709606448;
    msg.start_lon = 0.769910236373;
    msg.start_z = 0.845571642641;
    msg.start_z_units = 138U;
    msg.end_lat = 0.351281363562;
    msg.end_lon = 0.467634451902;
    msg.end_z = 0.214523189599;
    msg.end_z_units = 118U;
    msg.lradius = 0.609457416131;
    msg.flags = 61U;
    msg.x = 0.0834182170022;
    msg.y = 0.776736962653;
    msg.z = 0.0520944663273;
    msg.vx = 0.118318040781;
    msg.vy = 0.263917487777;
    msg.vz = 0.873882112413;
    msg.course_error = 0.931855566051;
    msg.eta = 60029U;

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
    msg.setTimeStamp(0.311406404115);
    msg.setSource(10734U);
    msg.setSourceEntity(163U);
    msg.setDestination(64412U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 544557497U;
    msg.start_lat = 0.852804619013;
    msg.start_lon = 0.102281217793;
    msg.start_z = 0.0198353459824;
    msg.start_z_units = 133U;
    msg.end_lat = 0.733625450841;
    msg.end_lon = 0.560359810431;
    msg.end_z = 0.445940414502;
    msg.end_z_units = 83U;
    msg.lradius = 0.675871884193;
    msg.flags = 160U;
    msg.x = 0.0276514371577;
    msg.y = 0.79697618259;
    msg.z = 0.053106358698;
    msg.vx = 0.765283263937;
    msg.vy = 0.595465598744;
    msg.vz = 0.363361977724;
    msg.course_error = 0.300529531089;
    msg.eta = 45174U;

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
    msg.setTimeStamp(0.594526478559);
    msg.setSource(56168U);
    msg.setSourceEntity(16U);
    msg.setDestination(2468U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 1321286911U;
    msg.start_lat = 0.530735859831;
    msg.start_lon = 0.946949194135;
    msg.start_z = 0.623998464412;
    msg.start_z_units = 110U;
    msg.end_lat = 0.261289109356;
    msg.end_lon = 0.615846064887;
    msg.end_z = 0.0849266997422;
    msg.end_z_units = 198U;
    msg.lradius = 0.325389963713;
    msg.flags = 38U;
    msg.x = 0.511588840565;
    msg.y = 0.805053308984;
    msg.z = 0.922155115591;
    msg.vx = 0.220323105285;
    msg.vy = 0.264742921883;
    msg.vz = 0.00814443086633;
    msg.course_error = 0.943675108631;
    msg.eta = 49330U;

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
    msg.setTimeStamp(0.702919405178);
    msg.setSource(31641U);
    msg.setSourceEntity(143U);
    msg.setDestination(5371U);
    msg.setDestinationEntity(162U);
    msg.k = 0.177863275499;
    msg.m = 0.401793651944;
    msg.n = 0.254940207104;

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
    msg.setTimeStamp(0.152732434774);
    msg.setSource(10441U);
    msg.setSourceEntity(148U);
    msg.setDestination(44656U);
    msg.setDestinationEntity(207U);
    msg.k = 0.479844740733;
    msg.m = 0.504208460169;
    msg.n = 0.0573280471097;

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
    msg.setTimeStamp(0.111066904619);
    msg.setSource(15469U);
    msg.setSourceEntity(180U);
    msg.setDestination(1262U);
    msg.setDestinationEntity(72U);
    msg.k = 0.734281101294;
    msg.m = 0.862464484173;
    msg.n = 0.249899596225;

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
    msg.setTimeStamp(0.379210436908);
    msg.setSource(23445U);
    msg.setSourceEntity(155U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(38U);
    msg.p = 0.849437706353;
    msg.i = 0.253557593884;
    msg.d = 0.86104983319;
    msg.a = 0.213908352729;

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
    msg.setTimeStamp(0.0631074705328);
    msg.setSource(34045U);
    msg.setSourceEntity(210U);
    msg.setDestination(25738U);
    msg.setDestinationEntity(243U);
    msg.p = 0.646739769503;
    msg.i = 0.343085880776;
    msg.d = 0.13805575453;
    msg.a = 0.164708146332;

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
    msg.setTimeStamp(0.602323360106);
    msg.setSource(56491U);
    msg.setSourceEntity(181U);
    msg.setDestination(26039U);
    msg.setDestinationEntity(12U);
    msg.p = 0.721040590433;
    msg.i = 0.82874473076;
    msg.d = 0.879560941846;
    msg.a = 0.45013205968;

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
    msg.setTimeStamp(0.374269252773);
    msg.setSource(14989U);
    msg.setSourceEntity(5U);
    msg.setDestination(57348U);
    msg.setDestinationEntity(16U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.645510817186);
    msg.setSource(60588U);
    msg.setSourceEntity(8U);
    msg.setDestination(64027U);
    msg.setDestinationEntity(15U);
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
    msg.setTimeStamp(0.920890383007);
    msg.setSource(3751U);
    msg.setSourceEntity(171U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(174U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.672041630066);
    msg.setSource(50814U);
    msg.setSourceEntity(157U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(87U);
    msg.x = 0.255698953772;
    msg.y = 0.0779694283845;
    msg.z = 0.285742340952;
    msg.vx = 0.277721643998;
    msg.vy = 0.796895122422;
    msg.vz = 0.807809057449;
    msg.ax = 0.480107622034;
    msg.ay = 0.41676128923;
    msg.az = 0.538238046788;
    msg.flags = 19140U;

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
    msg.setTimeStamp(0.902827644224);
    msg.setSource(13905U);
    msg.setSourceEntity(137U);
    msg.setDestination(29430U);
    msg.setDestinationEntity(54U);
    msg.x = 0.0985521827598;
    msg.y = 0.281249289237;
    msg.z = 0.670187388424;
    msg.vx = 0.00590304687254;
    msg.vy = 0.911660207136;
    msg.vz = 0.830112033008;
    msg.ax = 0.849128655375;
    msg.ay = 0.701391150104;
    msg.az = 0.322256654268;
    msg.flags = 11058U;

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
    msg.setTimeStamp(0.356334609434);
    msg.setSource(27691U);
    msg.setSourceEntity(254U);
    msg.setDestination(12120U);
    msg.setDestinationEntity(90U);
    msg.x = 0.0492179142023;
    msg.y = 0.790852929258;
    msg.z = 0.986715982065;
    msg.vx = 0.503254641372;
    msg.vy = 0.574804608835;
    msg.vz = 0.995013836627;
    msg.ax = 0.0932672199416;
    msg.ay = 0.662719733713;
    msg.az = 0.0776977649521;
    msg.flags = 9995U;

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
    msg.setTimeStamp(0.24413790588);
    msg.setSource(20644U);
    msg.setSourceEntity(79U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(125U);
    msg.value = 0.64483114896;

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
    msg.setTimeStamp(0.838696663562);
    msg.setSource(61906U);
    msg.setSourceEntity(157U);
    msg.setDestination(55518U);
    msg.setDestinationEntity(107U);
    msg.value = 0.826830192939;

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
    msg.setTimeStamp(0.738472512183);
    msg.setSource(34972U);
    msg.setSourceEntity(44U);
    msg.setDestination(48827U);
    msg.setDestinationEntity(155U);
    msg.value = 0.399202449542;

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
    msg.setTimeStamp(0.768601768143);
    msg.setSource(61607U);
    msg.setSourceEntity(80U);
    msg.setDestination(59198U);
    msg.setDestinationEntity(16U);
    msg.timeout = 42313U;
    msg.lat = 0.150054019603;
    msg.lon = 0.438766525127;
    msg.z = 0.576606084984;
    msg.z_units = 135U;
    msg.speed = 0.908369762092;
    msg.speed_units = 8U;
    msg.roll = 0.742952111088;
    msg.pitch = 0.562444046573;
    msg.yaw = 0.429893500706;
    msg.custom.assign("BSOLYQVGTQPSADXEJCBMWPXMVUBRWWQXFLKRYVUFKUTOJEMIGHUZYLLEWRGOYPCVHTB");

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
    msg.setTimeStamp(0.0180642124407);
    msg.setSource(56873U);
    msg.setSourceEntity(85U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(0U);
    msg.timeout = 27222U;
    msg.lat = 0.538022770509;
    msg.lon = 0.738340629437;
    msg.z = 0.976454899607;
    msg.z_units = 132U;
    msg.speed = 0.173069929394;
    msg.speed_units = 51U;
    msg.roll = 0.103054978909;
    msg.pitch = 0.308933658477;
    msg.yaw = 0.0684461633422;
    msg.custom.assign("ZBJONUBYFCFTPGVEFEHTRXLTTURNNWCOGREKTFQBUXSLJEEJFWDJCLMETPQTZLOBUTKYDSCHKAMXEJQGZKFSIPHKASUOPQZQYMKACIIPFYVFZHAYCGPDHHWSPVQVUMGJRXNYW");

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
    msg.setTimeStamp(0.360061561909);
    msg.setSource(53719U);
    msg.setSourceEntity(172U);
    msg.setDestination(45827U);
    msg.setDestinationEntity(85U);
    msg.timeout = 47712U;
    msg.lat = 0.97971270485;
    msg.lon = 0.321567423826;
    msg.z = 0.426674914268;
    msg.z_units = 6U;
    msg.speed = 0.458563310656;
    msg.speed_units = 178U;
    msg.roll = 0.108265896419;
    msg.pitch = 0.712717569285;
    msg.yaw = 0.475700930004;
    msg.custom.assign("AEEDFZWAIACMSVYDQCBDEBTXHSKRTPOQTRVPLIUYAOOHZJKHPMRGKQVFYRGOXIWNEBCZOVXOXXSJKLLUZGPMKPOIDIHTWCJIDVPFKQREZLQRFMKIGTAQXXLPYSGGHVWUJJNCLTVRQLUYBCVZMQLM");

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
    msg.setTimeStamp(0.43943618077);
    msg.setSource(16598U);
    msg.setSourceEntity(252U);
    msg.setDestination(27308U);
    msg.setDestinationEntity(128U);
    msg.timeout = 38523U;
    msg.lat = 0.285582851495;
    msg.lon = 0.991905667886;
    msg.z = 0.837386745069;
    msg.z_units = 152U;
    msg.speed = 0.297067947285;
    msg.speed_units = 112U;
    msg.duration = 54969U;
    msg.radius = 0.166146316499;
    msg.flags = 53U;
    msg.custom.assign("DUIIWYVAULBNDLNLDGKLJDQCEPQMKTHJDHSDZBVWEHYRFNYJGFNSBXHMSMGVHPURHWGMJNTIACKMHEXRRSBLYUQAQHUXITWCNCUKRFAZYOOTFMCZAJCQQEQWGD");

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
    msg.setTimeStamp(0.323234822825);
    msg.setSource(1992U);
    msg.setSourceEntity(242U);
    msg.setDestination(39312U);
    msg.setDestinationEntity(26U);
    msg.timeout = 961U;
    msg.lat = 0.200861396725;
    msg.lon = 0.233586105664;
    msg.z = 0.840575644278;
    msg.z_units = 240U;
    msg.speed = 0.936848577952;
    msg.speed_units = 126U;
    msg.duration = 45219U;
    msg.radius = 0.781288457107;
    msg.flags = 19U;
    msg.custom.assign("AWSMUJAQGSIBEZDWREUTVWIYPQRPCRYYBBTHIHRHXEKHNMCMXDJDSNXGLEIZGRRUVXWSWFMJOXHYTHFZUVJKABZESMETYVUCZLPTAUXQMQOQGOAFKDAZFGPMLZGVKSKCEAULKDPZGBCRWTCONOOHNGGJQOFFOOUDSFWEHAFMVIKES");

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
    msg.setTimeStamp(0.914854671796);
    msg.setSource(40533U);
    msg.setSourceEntity(182U);
    msg.setDestination(44537U);
    msg.setDestinationEntity(233U);
    msg.timeout = 46936U;
    msg.lat = 0.446590764919;
    msg.lon = 0.0532953490796;
    msg.z = 0.59027508529;
    msg.z_units = 170U;
    msg.speed = 0.084221391;
    msg.speed_units = 179U;
    msg.duration = 43492U;
    msg.radius = 0.4256803186;
    msg.flags = 232U;
    msg.custom.assign("QSIUCAHPWVFYUQLWKPHLDSGAYEQQENTBFHHAXHDVTCZSKNZDXXBBIDIGJO");

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
    msg.setTimeStamp(0.573398779694);
    msg.setSource(25775U);
    msg.setSourceEntity(85U);
    msg.setDestination(18082U);
    msg.setDestinationEntity(244U);
    msg.custom.assign("VJERBQVWVGHYPMNAWPMSPSDRZDGWVCEURSVGHEGATJDLDTNNOLXFUDQVLXQTLGWHGGNEACIZGBXHTMCWTKNYFUSHS");

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
    msg.setTimeStamp(0.170203161128);
    msg.setSource(34245U);
    msg.setSourceEntity(82U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(80U);
    msg.custom.assign("DOTILJXGLRCQSNPPFXFKBHEZKZPBHEUDMIQPMEGGIUFNAZIEVKOZBKLBSFYKA");

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
    msg.setTimeStamp(0.244512646478);
    msg.setSource(39201U);
    msg.setSourceEntity(77U);
    msg.setDestination(44324U);
    msg.setDestinationEntity(212U);
    msg.custom.assign("ZIRHJZKYGCWWXHSVJFMEAVQBNDGUSQXSRAZCQTBYGXSRWFLIVTRFZHCFFPQWPPJTMEPLLKFRZDKPZWXTEODJTOFJHKVXAAVDRIXJMBLVIUKWEDDYLCDAUVAKIGUTXAQSHQSMYYBSUWLXBDZAGYTNQCLJOOOHPZDMYZREIKPMSORPNCVMWMUGNBGETMHNQYXZFNBGVUQKAWDBEJCYHFIRLWPFBTMHGNUQNEAULXUORONTCLKCSBSNPH");

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
    msg.setTimeStamp(0.691275947633);
    msg.setSource(11205U);
    msg.setSourceEntity(124U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(137U);
    msg.timeout = 31221U;
    msg.lat = 0.119575651664;
    msg.lon = 0.840667368051;
    msg.z = 0.639386993733;
    msg.z_units = 132U;
    msg.duration = 39018U;
    msg.speed = 0.0961345410267;
    msg.speed_units = 236U;
    msg.type = 38U;
    msg.radius = 0.938033609096;
    msg.length = 0.0995700968612;
    msg.bearing = 0.71482670929;
    msg.direction = 132U;
    msg.custom.assign("SIJKKHGMUJEYEVKKWSHXAOXNVPBPTSPYKABSWKIGOEQBKFGZOBNORHNXURRV");

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
    msg.setTimeStamp(0.307721937496);
    msg.setSource(25513U);
    msg.setSourceEntity(202U);
    msg.setDestination(26290U);
    msg.setDestinationEntity(136U);
    msg.timeout = 56783U;
    msg.lat = 0.315649972043;
    msg.lon = 0.838238157958;
    msg.z = 0.750980408644;
    msg.z_units = 154U;
    msg.duration = 2797U;
    msg.speed = 0.930069616728;
    msg.speed_units = 178U;
    msg.type = 33U;
    msg.radius = 0.355641879486;
    msg.length = 0.571154807678;
    msg.bearing = 0.81749380448;
    msg.direction = 43U;
    msg.custom.assign("WZVFDMEFQLXPOMABZVYQTQEKHLB");

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
    msg.setTimeStamp(0.483075056398);
    msg.setSource(27006U);
    msg.setSourceEntity(59U);
    msg.setDestination(10878U);
    msg.setDestinationEntity(191U);
    msg.timeout = 13780U;
    msg.lat = 0.112799722459;
    msg.lon = 0.48046001689;
    msg.z = 0.303372696951;
    msg.z_units = 235U;
    msg.duration = 35368U;
    msg.speed = 0.697889884567;
    msg.speed_units = 102U;
    msg.type = 91U;
    msg.radius = 0.690597833276;
    msg.length = 0.131351729855;
    msg.bearing = 0.702288469848;
    msg.direction = 9U;
    msg.custom.assign("SRDOUZXMLPOYWVCJVNFOWNHAEVJGRRSBWMMPBNZHSSCFDVSTHQAESPKMJRPBGHNLVZRYIHOLMLAGMRLKZHZXKHCFHIBNCXZGBGTYCQEUQYXGJCIBRXOIBEFJEAVCDITFGLRTRNMWILZZUMAYQAWSXQADQXOXPXAYCPCTBGDPBOFKQMZDSUOJLTJTIEIEYWXTOLVMHTEPGKWKLGUFWOYVEWJPUAKPBKTUNKFUDIHKIWYVJSUNFNAQFUDJVNSDER");

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
    msg.setTimeStamp(0.313193075365);
    msg.setSource(42310U);
    msg.setSourceEntity(96U);
    msg.setDestination(34664U);
    msg.setDestinationEntity(188U);
    msg.duration = 56141U;
    msg.custom.assign("WKVLDKUXTINAOSDBOZHKDBUNAYRNULDMWVONQLMWXRVFXMITOUUUTLGWEEKECEZYGJKXZSRPEHYNIFQDSLWWWSCYDKPIVBMZCYGTANAFRTJRJMJQHIDFRVIFZUBEGSQGOWPZRTSBMQEPIQDCMBZLSRHPZLCJALBLSWMXDKMQYYNWFHXDHVGEXKLPPKTUPTJCZOTGFCXEGEFAQCJPBHAGVOYRFHNOSOTQBUVVAKNC");

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
    msg.setTimeStamp(0.908042274268);
    msg.setSource(38489U);
    msg.setSourceEntity(233U);
    msg.setDestination(16662U);
    msg.setDestinationEntity(25U);
    msg.duration = 52644U;
    msg.custom.assign("SHUISJATOUUPRVZJFXFYVOYRVZWOIKYYDRNFVJZROFXUGMVMJWBADIXSZPFSFYXWCQUXWPCXTGNDEPRPMQGHRTNJXZKBNKYT");

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
    msg.setTimeStamp(0.23723615433);
    msg.setSource(46856U);
    msg.setSourceEntity(250U);
    msg.setDestination(35743U);
    msg.setDestinationEntity(245U);
    msg.duration = 28043U;
    msg.custom.assign("ZFCETWHSAWTFDVULOLSRMBJQYUVPSTJKGHZKHTFMWOTDNCIALSCVF");

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
    msg.setTimeStamp(0.820781708412);
    msg.setSource(4636U);
    msg.setSourceEntity(77U);
    msg.setDestination(26977U);
    msg.setDestinationEntity(116U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 930288066U;
    tmp_msg_0.start_lat = 0.565335914655;
    tmp_msg_0.start_lon = 0.093793382198;
    tmp_msg_0.start_z = 0.110262416885;
    tmp_msg_0.start_z_units = 99U;
    tmp_msg_0.end_lat = 0.984061344528;
    tmp_msg_0.end_lon = 0.624916594715;
    tmp_msg_0.end_z = 0.143728578662;
    tmp_msg_0.end_z_units = 78U;
    tmp_msg_0.speed = 0.230189727768;
    tmp_msg_0.speed_units = 32U;
    tmp_msg_0.lradius = 0.623719479277;
    tmp_msg_0.flags = 21U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25139U;
    msg.custom.assign("FZYIWQRKJPOCYMPJZSEONJMIBVULIWBEFOAPTMDOFTWLALQQJLEPIM");

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
    msg.setTimeStamp(0.513439049196);
    msg.setSource(5883U);
    msg.setSourceEntity(12U);
    msg.setDestination(42971U);
    msg.setDestinationEntity(198U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.367939590595;
    tmp_msg_0.speed_units = 11U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61980U;
    msg.custom.assign("URZTLICLANQXSSD");

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
    msg.setTimeStamp(0.564522981398);
    msg.setSource(48076U);
    msg.setSourceEntity(105U);
    msg.setDestination(57330U);
    msg.setDestinationEntity(179U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.550826156597;
    msg.control.set(tmp_msg_0);
    msg.duration = 52240U;
    msg.custom.assign("RUXMMICNGOZOQVXCBTDGOSRBPELHABXAADZEIKHSERIZNKFTKHDEDLRUWMNXRQGEVKQTFODYDGXUYFPIAYYZWXLPYFNBWJFQPTMAWYVOVKVWSQRJLLUMPMHNSTAIUCODQBHUBTJWYKLYIEXVJPAYFMSZJHGXLQSWNUABCUGLPEFCPMAKNXUIHHLPRXMJEGZRCFOTHJSEQNGACIQSGODYJMESBKVVHPRIWBCWOJVWVOS");

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
    msg.setTimeStamp(0.285372953742);
    msg.setSource(44416U);
    msg.setSourceEntity(192U);
    msg.setDestination(56974U);
    msg.setDestinationEntity(81U);
    msg.timeout = 42313U;
    msg.lat = 0.373391058423;
    msg.lon = 0.219685748342;
    msg.z = 0.786348027321;
    msg.z_units = 102U;
    msg.speed = 0.886097696831;
    msg.speed_units = 253U;
    msg.bearing = 0.427242304137;
    msg.cross_angle = 0.798446817809;
    msg.width = 0.0354083678295;
    msg.length = 0.670761362821;
    msg.hstep = 0.281170818065;
    msg.coff = 15U;
    msg.alternation = 97U;
    msg.flags = 241U;
    msg.custom.assign("WDVCZBGIPRIDNQGNVJRZZZADZRLQSHHSPHHKBWKPXGPYBYFJBADRQWIEXONILTPTRGMRMXEJNDODXGATOUZCSSMMWUWLJUSFIVUTSCYOMXLGOFTXXFBITKTYCYKOERWNSQWQGHDDQDGVKBUJVUHUEIQMC");

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
    msg.setTimeStamp(0.674606390347);
    msg.setSource(48738U);
    msg.setSourceEntity(149U);
    msg.setDestination(2540U);
    msg.setDestinationEntity(30U);
    msg.timeout = 3843U;
    msg.lat = 0.37558577056;
    msg.lon = 0.21755478763;
    msg.z = 0.48891323389;
    msg.z_units = 217U;
    msg.speed = 0.709800523848;
    msg.speed_units = 80U;
    msg.bearing = 0.112278669172;
    msg.cross_angle = 0.839529143039;
    msg.width = 0.626571061162;
    msg.length = 0.70711827732;
    msg.hstep = 0.992787874281;
    msg.coff = 22U;
    msg.alternation = 239U;
    msg.flags = 181U;
    msg.custom.assign("QDYGAFUIFDFIIBRZIXJBPGLGPVAGXPSTTICUWQIKVADMOUZSZTKNVATRRATQKEONERVOBVACUSUXBZWFLFWXRYRQDLKNMJCXHQRMVEVJJETRXQWQHXGDJCVFUQNSTIAKTJQNYPCMFAPLBHHMREOLDMEP");

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
    msg.setTimeStamp(0.993685330525);
    msg.setSource(46244U);
    msg.setSourceEntity(13U);
    msg.setDestination(31013U);
    msg.setDestinationEntity(62U);
    msg.timeout = 6802U;
    msg.lat = 0.77770185072;
    msg.lon = 0.99628401903;
    msg.z = 0.759720183857;
    msg.z_units = 183U;
    msg.speed = 0.552401113427;
    msg.speed_units = 100U;
    msg.bearing = 0.0377565875406;
    msg.cross_angle = 0.381583009184;
    msg.width = 0.749756609596;
    msg.length = 0.0129086364196;
    msg.hstep = 0.807726271107;
    msg.coff = 247U;
    msg.alternation = 220U;
    msg.flags = 133U;
    msg.custom.assign("SDIIFUZLJDVUAYCFMVRSEABBCBDQWWLLLHBRJETGGZTQXA");

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
    msg.setTimeStamp(0.5637194228);
    msg.setSource(60453U);
    msg.setSourceEntity(21U);
    msg.setDestination(32064U);
    msg.setDestinationEntity(114U);
    msg.timeout = 18646U;
    msg.lat = 0.231504370975;
    msg.lon = 0.15202620475;
    msg.z = 0.318272430634;
    msg.z_units = 65U;
    msg.speed = 0.771272244849;
    msg.speed_units = 80U;
    msg.custom.assign("OBYFUFCKYDRPMFFHENWZENEOAZRHKLMIKRVJTJZOPLJDUDZGPWDXMOBTOKCKQCVCZWDGSBHNBATLPGVSJYSRIPLXWXKD");

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
    msg.setTimeStamp(0.251298728389);
    msg.setSource(2351U);
    msg.setSourceEntity(132U);
    msg.setDestination(49551U);
    msg.setDestinationEntity(152U);
    msg.timeout = 65476U;
    msg.lat = 0.272508110327;
    msg.lon = 0.153712191058;
    msg.z = 0.682138215456;
    msg.z_units = 176U;
    msg.speed = 0.204108834907;
    msg.speed_units = 61U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.945932377662;
    tmp_msg_0.y = 0.0670464104901;
    tmp_msg_0.z = 0.914796683944;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YFIHBTIIHWGCDNMQDEHCEYZRISWSIMILKUPLAYAGTTITBXHRVJJBJQUCKHZKHFKHGFNEWZKYRYCYUUYQXNKEXTQMSAQEGFMDZRDUIADEAOBJZTMLJHOSSTOPYLHTBLGJEJQEEJVDXPXQCTLBPGKNSVFNRDWAXOXJUFGASQOMYFKVNPGCVNFNLWKR");

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
    msg.setTimeStamp(0.123371586481);
    msg.setSource(10482U);
    msg.setSourceEntity(106U);
    msg.setDestination(6287U);
    msg.setDestinationEntity(245U);
    msg.timeout = 35142U;
    msg.lat = 0.271821621292;
    msg.lon = 0.901038042071;
    msg.z = 0.242639818689;
    msg.z_units = 132U;
    msg.speed = 0.119132194656;
    msg.speed_units = 66U;
    msg.custom.assign("VENDSRHKGHXLLFAAMJZEEOYJIWINFXREPDURNQQUDUFRMRVTGUODUWMHYQPJVAKNMCOKEGNABCSVBHXKBXWHIJZSGEYWAXMOFVZOZJYSBQSMJGNBMKJXCWSTUCEVRSLAJFRLYZLQLVMZFCUUYHCIBRPGOTKTKBUUVKGAECIIOWIXALZFLW");

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
    msg.setTimeStamp(0.630544004103);
    msg.setSource(17067U);
    msg.setSourceEntity(187U);
    msg.setDestination(62404U);
    msg.setDestinationEntity(27U);
    msg.x = 0.883024362667;
    msg.y = 0.924589537495;
    msg.z = 0.010440421119;

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
    msg.setTimeStamp(0.0746054135617);
    msg.setSource(17630U);
    msg.setSourceEntity(254U);
    msg.setDestination(37480U);
    msg.setDestinationEntity(152U);
    msg.x = 0.512051261403;
    msg.y = 0.421337011934;
    msg.z = 0.779623687654;

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
    msg.setTimeStamp(0.651574202668);
    msg.setSource(22757U);
    msg.setSourceEntity(75U);
    msg.setDestination(17362U);
    msg.setDestinationEntity(34U);
    msg.x = 0.879574462725;
    msg.y = 0.621256450488;
    msg.z = 0.25937506378;

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
    msg.setTimeStamp(0.141273541843);
    msg.setSource(29426U);
    msg.setSourceEntity(251U);
    msg.setDestination(3313U);
    msg.setDestinationEntity(85U);
    msg.timeout = 49610U;
    msg.lat = 0.799337275169;
    msg.lon = 0.212194541277;
    msg.z = 0.652245209824;
    msg.z_units = 191U;
    msg.amplitude = 0.866559068452;
    msg.pitch = 0.560474349791;
    msg.speed = 0.485469974534;
    msg.speed_units = 129U;
    msg.custom.assign("XAZTUHCSUSCHFGMWCNZUNBCTDUXNOCTOCJBBCAGTVPISQPDQEPYJGXPJ");

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
    msg.setTimeStamp(0.65295216163);
    msg.setSource(42338U);
    msg.setSourceEntity(102U);
    msg.setDestination(185U);
    msg.setDestinationEntity(106U);
    msg.timeout = 1787U;
    msg.lat = 0.634608537321;
    msg.lon = 0.965768342961;
    msg.z = 0.542882105011;
    msg.z_units = 233U;
    msg.amplitude = 0.3909346994;
    msg.pitch = 0.784907274111;
    msg.speed = 0.492755268532;
    msg.speed_units = 168U;
    msg.custom.assign("ZWTOBREKZBV");

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
    msg.setTimeStamp(0.432383178537);
    msg.setSource(7787U);
    msg.setSourceEntity(194U);
    msg.setDestination(53780U);
    msg.setDestinationEntity(209U);
    msg.timeout = 26370U;
    msg.lat = 0.333520638543;
    msg.lon = 0.80822335653;
    msg.z = 0.662463797474;
    msg.z_units = 204U;
    msg.amplitude = 0.124042214768;
    msg.pitch = 0.16021822667;
    msg.speed = 0.591558450417;
    msg.speed_units = 218U;
    msg.custom.assign("ZROWJNJSXOBADGEEZHGLPHJRIUROMJTZUTBPMSISDNQZIMLMKFKDUHCYBTFHZFCRVWAUZWAWMYCBAVPLGXJEADRCIFWKRIRIQXPXTBVGQBLILWTMOGEANQOBQSCFBJMAWMTOFYNXUNXZXGVOSCWPYNHDUGBKKDHXEYPZCUTYZEKYRKMSVQSHRKQCILMLOYVVXOVGYWPWPSDXNLYAEUVDDUJQEBEOKVKENCSTJCHDZFSITTHJPFNAGRF");

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
    msg.setTimeStamp(0.807752324358);
    msg.setSource(42994U);
    msg.setSourceEntity(186U);
    msg.setDestination(6789U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.349345805261);
    msg.setSource(56910U);
    msg.setSourceEntity(104U);
    msg.setDestination(18608U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.569029674932);
    msg.setSource(18881U);
    msg.setSourceEntity(108U);
    msg.setDestination(47810U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.580098969327);
    msg.setSource(55290U);
    msg.setSourceEntity(216U);
    msg.setDestination(25427U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.750596245651;
    msg.lon = 0.831667851691;
    msg.z = 0.396881642625;
    msg.z_units = 153U;
    msg.radius = 0.377950406257;
    msg.duration = 44804U;
    msg.speed = 0.554531827162;
    msg.speed_units = 253U;
    msg.custom.assign("SJRQZRBQVFKAEMLVAPNBIGXDKJGCJNHZWFNVWIBNFUZOGPMWRLVMFTTLYOWUORIHMMNIPVQRIDEUAYDPJXL");

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
    msg.setTimeStamp(0.904330677049);
    msg.setSource(29175U);
    msg.setSourceEntity(97U);
    msg.setDestination(55733U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.119167483675;
    msg.lon = 0.631006782566;
    msg.z = 0.577818808594;
    msg.z_units = 104U;
    msg.radius = 0.533821807322;
    msg.duration = 38638U;
    msg.speed = 0.977073035888;
    msg.speed_units = 113U;
    msg.custom.assign("OYIEVIXXFWNTEVSKPBCIZKYJMRRLOUEWBNOMSHOFZUFKFCMRGTSIMXPFTDETTVGDUABZLQPXBWFXDPTYNIEKFWIJXPBWUMUMOBYSDVVABSSNPOTBKAKJKXYKDFCBAP");

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
    msg.setTimeStamp(0.756618310043);
    msg.setSource(47793U);
    msg.setSourceEntity(103U);
    msg.setDestination(39959U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.566420901316;
    msg.lon = 0.802873133223;
    msg.z = 0.530492906413;
    msg.z_units = 199U;
    msg.radius = 0.51011837733;
    msg.duration = 11676U;
    msg.speed = 0.0174032103019;
    msg.speed_units = 31U;
    msg.custom.assign("EBWIAKHLDQZWKMNJEUMYEEDYKSKQYEHDLOYVIPAQIPFEYQPWGKLWNQUPMJLNTVNIASUHJDIHKUZXROMJHMDBRRTUTBXYILZPLXHMMATLGQLDXFRBKGOJKROMCISWCPA");

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
    msg.setTimeStamp(0.678710596601);
    msg.setSource(52717U);
    msg.setSourceEntity(173U);
    msg.setDestination(28411U);
    msg.setDestinationEntity(241U);
    msg.timeout = 5249U;
    msg.flags = 130U;
    msg.lat = 0.660597342336;
    msg.lon = 0.246524256876;
    msg.start_z = 0.836063101939;
    msg.start_z_units = 167U;
    msg.end_z = 0.0549519482488;
    msg.end_z_units = 201U;
    msg.radius = 0.290537677034;
    msg.speed = 0.977763309797;
    msg.speed_units = 162U;
    msg.custom.assign("LBLROJIGGHDKZNFIJGAFDIGCXTKCASCTBIXVCLLOLJEDJYQRUVCZZPUHSRWSUACARFZWPBPZWHDNPWZNHVBTLRGKAIXUDGEUMNBWYEQPYLMRBZQKNPCRIYPHWULOPHCOWWAQEJEIOWHNQCKNKFVHOOKQXHGXOEIKLRDETYJPF");

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
    msg.setTimeStamp(0.533921329147);
    msg.setSource(61334U);
    msg.setSourceEntity(79U);
    msg.setDestination(50298U);
    msg.setDestinationEntity(78U);
    msg.timeout = 22257U;
    msg.flags = 109U;
    msg.lat = 0.00243449530338;
    msg.lon = 0.130615683554;
    msg.start_z = 0.946216572961;
    msg.start_z_units = 228U;
    msg.end_z = 0.206255006114;
    msg.end_z_units = 123U;
    msg.radius = 0.283708629866;
    msg.speed = 0.377132260997;
    msg.speed_units = 144U;
    msg.custom.assign("WRDRJBONPRRVSLGJVLONVBDIOTJYTZHLEOEYTVXBNORQFQWGWSABJXZQHQWFIZCCLZZJGTFYMMAKHMVDXHINKWGTSNFUQMCBVLCE");

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
    msg.setTimeStamp(0.892704434403);
    msg.setSource(31836U);
    msg.setSourceEntity(85U);
    msg.setDestination(49814U);
    msg.setDestinationEntity(125U);
    msg.timeout = 46599U;
    msg.flags = 77U;
    msg.lat = 0.241773833537;
    msg.lon = 0.340706411;
    msg.start_z = 0.156236718339;
    msg.start_z_units = 133U;
    msg.end_z = 0.623510858773;
    msg.end_z_units = 66U;
    msg.radius = 0.254867925576;
    msg.speed = 0.780554707519;
    msg.speed_units = 18U;
    msg.custom.assign("TKXCNXFNAKPVBCENGXZJYGIARYJVKQYSZEOEDMTSBQOAPUNLMKIBDSNLRCATRWMCRSYXLAMMQHFCPHFGDUHSJFDXASOIZVOTFZALPVEKBFICHJQQOGZ");

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
    msg.setTimeStamp(0.228719376495);
    msg.setSource(46451U);
    msg.setSourceEntity(28U);
    msg.setDestination(8869U);
    msg.setDestinationEntity(51U);
    msg.timeout = 11328U;
    msg.lat = 0.373645853769;
    msg.lon = 0.140751602478;
    msg.z = 0.998761000079;
    msg.z_units = 45U;
    msg.speed = 0.061016654114;
    msg.speed_units = 158U;
    msg.custom.assign("PUNIHWVBFZJOMZSKXEKNROTJUVWCNTBHMQEAGLADJEPNKIUIPHVROLDJIRDPPBSSQQAQTRZHCQORMWHGBYESCKAXEOWCAKASJKEVTNEPUJUWXMNLPJYYYRSMTNFYCXFXKULIBTVKNVLKZFGQHSQIDKBWVYZGNBSRLGUCECBRNLGHCAIYDL");

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
    msg.setTimeStamp(0.275649140049);
    msg.setSource(49676U);
    msg.setSourceEntity(109U);
    msg.setDestination(9294U);
    msg.setDestinationEntity(76U);
    msg.timeout = 55818U;
    msg.lat = 0.346730934246;
    msg.lon = 0.900557738715;
    msg.z = 0.334302235524;
    msg.z_units = 164U;
    msg.speed = 0.366687882186;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.921854297384;
    tmp_msg_0.y = 0.0805874492246;
    tmp_msg_0.z = 0.0872370969018;
    tmp_msg_0.t = 0.66230051419;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CZANKLLXDJXDJTQSNIACITODSCEDKFSGEQ");

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
    msg.setTimeStamp(0.569563901475);
    msg.setSource(3904U);
    msg.setSourceEntity(214U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(23U);
    msg.timeout = 31434U;
    msg.lat = 0.82163085694;
    msg.lon = 0.99418485565;
    msg.z = 0.326684019707;
    msg.z_units = 153U;
    msg.speed = 0.567148641168;
    msg.speed_units = 140U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.593094848198;
    tmp_msg_0.y = 0.19734406666;
    tmp_msg_0.z = 0.334260985648;
    tmp_msg_0.t = 0.00579280535916;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YRQSQULLNVAISUHBFUSZKBPLTAMHKHDPTMWERTVDN");

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
    msg.setTimeStamp(0.42698687914);
    msg.setSource(6571U);
    msg.setSourceEntity(58U);
    msg.setDestination(15834U);
    msg.setDestinationEntity(104U);
    msg.x = 0.343193035406;
    msg.y = 0.636576696888;
    msg.z = 0.534963655459;
    msg.t = 0.514060816235;

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
    msg.setTimeStamp(0.345382878939);
    msg.setSource(14465U);
    msg.setSourceEntity(254U);
    msg.setDestination(62799U);
    msg.setDestinationEntity(234U);
    msg.x = 0.801878110126;
    msg.y = 0.4933699268;
    msg.z = 0.655324016159;
    msg.t = 0.441388999075;

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
    msg.setTimeStamp(0.599518186827);
    msg.setSource(208U);
    msg.setSourceEntity(26U);
    msg.setDestination(44106U);
    msg.setDestinationEntity(50U);
    msg.x = 0.0474241798463;
    msg.y = 0.623303925578;
    msg.z = 0.131216418638;
    msg.t = 0.494642604312;

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
    msg.setTimeStamp(0.19683154913);
    msg.setSource(17701U);
    msg.setSourceEntity(68U);
    msg.setDestination(20911U);
    msg.setDestinationEntity(170U);
    msg.timeout = 46503U;
    msg.name.assign("DCLIRKIXQTVFAVMCNORCGHOHNGCQHTGBWMBRRXBZGIVATKNMATSZYFDUTEAZWLDPWUUNVXOGWFHKYZQIRAXUGKYLMRHSIBFQKKUQMNNEPCVVGJNKMQFRASQSSMEUHLYXZNLLBDZZDYN");
    msg.custom.assign("OKDJBWMIXXVKQKEWLDNNGCXIPWOAOTAGLXUWVDJQEYGCLNMVFEAUGYPXEZQJLOHRTIZVHMYAREKVXHTKBHBRXACPATLZSGFKJDZPYYVEJZPOUFPFOAOHIHBHYRSQOSMEBYAFLNRCIGUSWBUWZLNDLVWJJCFNTARJIUQOVFMXSUTKZPTGTNSIPFLMLTRCSTEBRI");

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
    msg.setTimeStamp(0.692999803359);
    msg.setSource(64203U);
    msg.setSourceEntity(77U);
    msg.setDestination(37642U);
    msg.setDestinationEntity(42U);
    msg.timeout = 31323U;
    msg.name.assign("LWTMFQAMPZIRKDAJJOZFZVDNIQACTHIMJRKBEUTVYGNWJBNVVOKUZZTUKANNKYGEZFHGPIRNJFHBYLIREVDQHDQBTGRZRFOPWSSSSWTODWKULWVVRWZBLIDGOPKBJPCXOQIDHGUVYJSRMXTKHAQOXACYKMERMTIWIEOOYCFGQPHGMMXVLHJYCSEUBYCJXUGXRPAQCEBEATZCSBHHJUIDCNFFLZTXGYCLBPXQN");
    msg.custom.assign("SAPRCDWKNNCTUREEDPVDSCUGWXYVHKYJSFOQPWXUQGQNXOXIJJRBPXWGAPAZRJXEXYUXMCNIHHUTNZTGJBMEHIWKIOGOCKFBQQANFNICRQNFCMFNGKEMBPYMKSLFLSSS");

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
    msg.setTimeStamp(0.928596744561);
    msg.setSource(9750U);
    msg.setSourceEntity(91U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(219U);
    msg.timeout = 585U;
    msg.name.assign("MLJBJUXWOZVIDFMRCTTOGFAHQZMQZSPPWVEHPDXPDVVMUBKIGZYTLGPWLVFRQAFQAIHKBIKZBETAZHFJXBASEUQKSONKKMUNPNRQILRIFLGXYNEEUJQTSCWLSCZHCSIQBDAYHGDCAYPRRCUVEHDYMSZINOQGDUEWAKUYRBXJLERIVUXVWFCLNBKEHIXJUMCDASQFOEYKKLGPMNCSWTTGANFYPTJBXYDJJXGNYV");
    msg.custom.assign("AFAJCWZUVVHAXJBFKUKIZOFPDVNDJSUHAOEOZECLYICLXTPGKSBXZGMSZERYGLMDPPQDARIFFGIKFJIDTWNNEBWUYNXZBBNRHOWBTHRXQZYXXODLKSYHPMVTRLUQUAJLSOTMAUMQSLYQQOKLFTUEAGJGPMCZHCMJSEWZMAVINOPVNOT");

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
    msg.setTimeStamp(0.103425573606);
    msg.setSource(46757U);
    msg.setSourceEntity(39U);
    msg.setDestination(52370U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.919843138832;
    msg.lon = 0.409425848567;
    msg.z = 0.22935124786;
    msg.z_units = 235U;
    msg.speed = 0.84774051929;
    msg.speed_units = 221U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.747293555112;
    tmp_msg_0.y = 0.348858423553;
    tmp_msg_0.z = 0.250198955386;
    tmp_msg_0.t = 0.967172203025;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.561844418018;
    msg.custom.assign("EDFWZYSNWEEFFTYOQMJLUBSJHNIROXQJTUSIXQCUBNCGSGMDGRNRPDSKASXQMDFEJYPIRMKHNIQXKVWBHOZKLGBCYORPCKVEMGQBSATZQLNJHIFDWAVFCZLMGVIOHTOOSABYJURRRKTWEELTMZTNGPFBPUPEUZZPPOXBYVVCZCDKFUMDXXOXHKIHBDWKMLAIQHJTKUSNQVCBE");

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
    msg.setTimeStamp(0.218978470548);
    msg.setSource(16428U);
    msg.setSourceEntity(173U);
    msg.setDestination(54171U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.263791663069;
    msg.lon = 0.139198270444;
    msg.z = 0.8818324208;
    msg.z_units = 251U;
    msg.speed = 0.14359015336;
    msg.speed_units = 76U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51701U;
    tmp_msg_0.off_x = 0.668774714482;
    tmp_msg_0.off_y = 0.204465495801;
    tmp_msg_0.off_z = 0.0774068788173;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.827095327388;
    msg.custom.assign("ISVZSFPKUTMJQYYKYJLRDFUDUQVWHEBUFWGDMFTICPHEFNQBIRVRHLBYVNUXMOZTHAOCBGYUAPXZNOBQLZDCZKSRWROUFDTXHNXHNFOPCJNPIYQBJSJMDEZAKHXIDSYSGDAGZGLJFMAEGMQPWZCJBXGSMCEHUBQWPCVTTWIIPQKLFVJXUVGEDMXQTIKPRCTUENAHLJSNEKWXKYPRSTLASWIZYOMGBNALTJVWCE");

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
    msg.setTimeStamp(0.361565517714);
    msg.setSource(35947U);
    msg.setSourceEntity(229U);
    msg.setDestination(63343U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.876333810503;
    msg.lon = 0.512279147241;
    msg.z = 0.283478521321;
    msg.z_units = 133U;
    msg.speed = 0.799751082144;
    msg.speed_units = 238U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.692150321435;
    tmp_msg_0.y = 0.601795750394;
    tmp_msg_0.z = 0.824141395502;
    tmp_msg_0.t = 0.206661648988;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.870159353073;
    msg.custom.assign("VJFHANIBYMNCWZCHYLGXZCTEFZNEESNJLDCSNFAUWPRULTAGLKDMMWGFXQPXPBNHZHIJWXUKVZBVPHOXOWWSCOKALHKOJQIQDIOGBASIBTYYZJABAIRUOONTPDWZXOBVMCMATADRYLMRISXPNEFIKLCHKFSEEGQTFQDUVHRGSBDIVQUMMFGOKSCMQHXLZJAKHRJKCEESBV");

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
    msg.setTimeStamp(0.0814788116966);
    msg.setSource(33934U);
    msg.setSourceEntity(23U);
    msg.setDestination(60969U);
    msg.setDestinationEntity(27U);
    msg.vid = 9590U;
    msg.off_x = 0.744258784759;
    msg.off_y = 0.729832326282;
    msg.off_z = 0.248764861264;

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
    msg.setTimeStamp(0.221009251095);
    msg.setSource(47769U);
    msg.setSourceEntity(237U);
    msg.setDestination(49561U);
    msg.setDestinationEntity(11U);
    msg.vid = 57052U;
    msg.off_x = 0.599430294083;
    msg.off_y = 0.418822397306;
    msg.off_z = 0.0532139234134;

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
    msg.setTimeStamp(0.0315987050656);
    msg.setSource(55583U);
    msg.setSourceEntity(92U);
    msg.setDestination(29777U);
    msg.setDestinationEntity(201U);
    msg.vid = 23593U;
    msg.off_x = 0.462738260126;
    msg.off_y = 0.126416248406;
    msg.off_z = 0.63742737844;

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
    msg.setTimeStamp(0.856155650021);
    msg.setSource(47741U);
    msg.setSourceEntity(56U);
    msg.setDestination(38478U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.039512581324);
    msg.setSource(16972U);
    msg.setSourceEntity(221U);
    msg.setDestination(29985U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.972875927917);
    msg.setSource(41203U);
    msg.setSourceEntity(181U);
    msg.setDestination(53249U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.239899178062);
    msg.setSource(2061U);
    msg.setSourceEntity(158U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(209U);
    msg.mid = 18868U;

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
    msg.setTimeStamp(0.55783010516);
    msg.setSource(7504U);
    msg.setSourceEntity(140U);
    msg.setDestination(61700U);
    msg.setDestinationEntity(112U);
    msg.mid = 60823U;

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
    msg.setTimeStamp(0.759196553535);
    msg.setSource(1120U);
    msg.setSourceEntity(0U);
    msg.setDestination(17276U);
    msg.setDestinationEntity(77U);
    msg.mid = 31116U;

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
    msg.setTimeStamp(0.345243735532);
    msg.setSource(31286U);
    msg.setSourceEntity(112U);
    msg.setDestination(9897U);
    msg.setDestinationEntity(215U);
    msg.state = 48U;
    msg.eta = 45898U;
    msg.info.assign("UCCSNALWTFOYCBQUMDMKUCOBPBERNIRMFHGIOIXEELFXGPYAKTIQVHIGYWYAVBOQGAQOYGO");

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
    msg.setTimeStamp(0.366410287081);
    msg.setSource(38476U);
    msg.setSourceEntity(227U);
    msg.setDestination(15533U);
    msg.setDestinationEntity(214U);
    msg.state = 16U;
    msg.eta = 49402U;
    msg.info.assign("QQIFSISUWJQAGGXFAHZCOZYVOJFWGAXGDJIAXZQUPOGHNWRMROMYXKLRKFLPCNHEJLNIDJNUFVGWTRW");

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
    msg.setTimeStamp(0.618787682705);
    msg.setSource(49318U);
    msg.setSourceEntity(21U);
    msg.setDestination(25148U);
    msg.setDestinationEntity(176U);
    msg.state = 181U;
    msg.eta = 59790U;
    msg.info.assign("FZDRNEYRKMOBXKSPPBAKWSFTNLALKYQXCXUNZJAOZHDSENARMITACFDEVVKSWGFJVVIZGLWNAMYIPQKYOKOEXFPOHRZXYUCEJORKEUHCGKCUZDBRCTSGWRTXQQZYLUBQHVCZFIRTGIVPPJDXWJX");

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
    msg.setTimeStamp(0.508172226741);
    msg.setSource(8427U);
    msg.setSourceEntity(202U);
    msg.setDestination(13667U);
    msg.setDestinationEntity(75U);
    msg.system = 64091U;
    msg.duration = 55354U;
    msg.speed = 0.6506661389;
    msg.speed_units = 194U;
    msg.x = 0.0679841392774;
    msg.y = 0.31813494518;
    msg.z = 0.371752248401;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.352448903746);
    msg.setSource(18644U);
    msg.setSourceEntity(240U);
    msg.setDestination(56695U);
    msg.setDestinationEntity(177U);
    msg.system = 9429U;
    msg.duration = 53844U;
    msg.speed = 0.493468826611;
    msg.speed_units = 10U;
    msg.x = 0.780028122111;
    msg.y = 0.46586049794;
    msg.z = 0.57998183575;
    msg.z_units = 253U;

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
    msg.setTimeStamp(0.629448310549);
    msg.setSource(9145U);
    msg.setSourceEntity(152U);
    msg.setDestination(18581U);
    msg.setDestinationEntity(76U);
    msg.system = 13519U;
    msg.duration = 51030U;
    msg.speed = 0.78842096138;
    msg.speed_units = 231U;
    msg.x = 0.421096538085;
    msg.y = 0.217297959273;
    msg.z = 0.884243958512;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.633388833631);
    msg.setSource(28437U);
    msg.setSourceEntity(154U);
    msg.setDestination(60898U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.2203533702;
    msg.lon = 0.594505180534;
    msg.speed = 0.498702894107;
    msg.speed_units = 60U;
    msg.duration = 803U;
    msg.sys_a = 26293U;
    msg.sys_b = 6690U;
    msg.move_threshold = 0.417057377695;

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
    msg.setTimeStamp(0.842913787568);
    msg.setSource(28706U);
    msg.setSourceEntity(174U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.730141232901;
    msg.lon = 0.179980480792;
    msg.speed = 0.46703534536;
    msg.speed_units = 67U;
    msg.duration = 54381U;
    msg.sys_a = 37707U;
    msg.sys_b = 21976U;
    msg.move_threshold = 0.463185863785;

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
    msg.setTimeStamp(0.497344347195);
    msg.setSource(8135U);
    msg.setSourceEntity(215U);
    msg.setDestination(15979U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.964262307831;
    msg.lon = 0.142607325054;
    msg.speed = 0.625233369277;
    msg.speed_units = 91U;
    msg.duration = 30003U;
    msg.sys_a = 12466U;
    msg.sys_b = 62911U;
    msg.move_threshold = 0.0658957899446;

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
    msg.setTimeStamp(0.528773166477);
    msg.setSource(6875U);
    msg.setSourceEntity(38U);
    msg.setDestination(42643U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.140255477623;
    msg.lon = 0.789598422332;
    msg.z = 0.863415282083;
    msg.z_units = 90U;
    msg.speed = 0.27119029668;
    msg.speed_units = 4U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.875790099011;
    tmp_msg_0.lon = 0.0762530555341;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HOMZWFUKSYGCDJKQEYEIXJOYCHODTPSWLARBTCUMKEUZFQSULWPPMRSCJBFVJQXAHDHPIQU");

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
    msg.setTimeStamp(0.565113836985);
    msg.setSource(54790U);
    msg.setSourceEntity(15U);
    msg.setDestination(4386U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.816072532102;
    msg.lon = 0.386937156762;
    msg.z = 0.714761402145;
    msg.z_units = 228U;
    msg.speed = 0.0641233037732;
    msg.speed_units = 167U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.154071152847;
    tmp_msg_0.lon = 0.341561424027;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WMXRRDIIJBPGGNSJVEDJAMROMFKSBEVGOSZYWCVKXABQBUITNMJFYOFDZBJ");

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
    msg.setTimeStamp(0.728321406474);
    msg.setSource(20462U);
    msg.setSourceEntity(81U);
    msg.setDestination(5664U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.338987635751;
    msg.lon = 0.738306920788;
    msg.z = 0.857422093554;
    msg.z_units = 188U;
    msg.speed = 0.80081770047;
    msg.speed_units = 55U;
    msg.custom.assign("XXCKZHSNMJZOUCXARHBUWWBEYFGVNHGATPIBITWPKZESCWXQNQLLMUANTDNOLLHYIAJPFRICHVKDJXJRKIMRPOGNKMNASIBMFQFQEFVSPAHLWXDSTTBPYAVSFSEUVZJMAVLYZ");

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
    msg.setTimeStamp(0.331597441947);
    msg.setSource(11312U);
    msg.setSourceEntity(75U);
    msg.setDestination(51265U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.560688737808;
    msg.lon = 0.199002208632;

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
    msg.setTimeStamp(0.0174524105542);
    msg.setSource(36446U);
    msg.setSourceEntity(38U);
    msg.setDestination(25993U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.835628925614;
    msg.lon = 0.314916288213;

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
    msg.setTimeStamp(0.416955949221);
    msg.setSource(24018U);
    msg.setSourceEntity(168U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.115766291905;
    msg.lon = 0.524802310781;

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
    msg.setTimeStamp(0.511801826927);
    msg.setSource(25658U);
    msg.setSourceEntity(233U);
    msg.setDestination(11U);
    msg.setDestinationEntity(247U);
    msg.timeout = 14212U;
    msg.lat = 0.44739191655;
    msg.lon = 0.52703347584;
    msg.z = 0.931365931301;
    msg.z_units = 182U;
    msg.pitch = 0.490842258936;
    msg.amplitude = 0.643727860506;
    msg.duration = 35676U;
    msg.speed = 0.630592045959;
    msg.speed_units = 144U;
    msg.radius = 0.96399619392;
    msg.direction = 19U;
    msg.custom.assign("ZHEJNESPKWCAEDZKULCQYCDNPRDIFMBQKXGHBNUVQPGGJRDICZGQUPOFWWDBLDOSSSHZOXWMAJFDGYAMPNHIXSCEVXIXJHEJVCGLYGPRHQBJUFVYPLZFYRITAYJFIYXSLRAMNRFUCAPIXZZBODOZOMLOSMQYWWVAAIKVHOICFOZLKWVHZRWCNJXBBWVTU");

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
    msg.setTimeStamp(0.481598340738);
    msg.setSource(17024U);
    msg.setSourceEntity(81U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(210U);
    msg.timeout = 36301U;
    msg.lat = 0.519112654903;
    msg.lon = 0.0558887477214;
    msg.z = 0.507367410855;
    msg.z_units = 74U;
    msg.pitch = 0.261204620436;
    msg.amplitude = 0.898497047065;
    msg.duration = 50316U;
    msg.speed = 0.897129835462;
    msg.speed_units = 120U;
    msg.radius = 0.790391054963;
    msg.direction = 172U;
    msg.custom.assign("SCXNNTSHALSUIQVDRGLZVFGPIBPFPGUWOWPXACRO");

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
    msg.setTimeStamp(0.369440241715);
    msg.setSource(25424U);
    msg.setSourceEntity(12U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(0U);
    msg.timeout = 38010U;
    msg.lat = 0.377944267041;
    msg.lon = 0.230138320014;
    msg.z = 0.279773546416;
    msg.z_units = 221U;
    msg.pitch = 0.000936137047709;
    msg.amplitude = 0.649190531733;
    msg.duration = 59391U;
    msg.speed = 0.763661336039;
    msg.speed_units = 162U;
    msg.radius = 0.953244440579;
    msg.direction = 7U;
    msg.custom.assign("CZJKZZRBDOVPQICAYDGIGANNKCYCRVJKIQAHHWPJSLHPHJOXQFCUBFZODGFVMSGPSDMZGXBUCUDHPYPMC");

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
    msg.setTimeStamp(0.415949040778);
    msg.setSource(46825U);
    msg.setSourceEntity(241U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(165U);
    msg.formation_name.assign("FPSSCRYXACXBGPOGLSCWJDVCZKQMCXGVQUDWWOUNUSAECDYFRJKEOTPUIVBNKWAYMAPLNGLRXTQRAOJVOFBZKHBQIENIPRMAILKAHTPVZQUZXASEELWTSLVZFJWDHVEZWMWNVKHUIYYNJIFRGRCT");
    msg.reference_frame = 136U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6929U;
    tmp_msg_0.off_x = 0.0576334799886;
    tmp_msg_0.off_y = 0.924894495508;
    tmp_msg_0.off_z = 0.270529562112;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ECCTOWILWYJTHUZHFTVYJOZVKMPPKQUVEW");

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
    msg.setTimeStamp(0.319261248414);
    msg.setSource(9624U);
    msg.setSourceEntity(179U);
    msg.setDestination(42404U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("YEHVRDGOMGVEZYFWMRPQMZAXPKBWOGPRETASLQPRDAPBZLIACJBQCSULQVHGVMKBWDTEACZYJBTPHYDJWKKVNICMRKNOZLTQQOPUKBWFFZFADMCFREUGEDXEWYWXZPCCHISOQOFQNHHDSUYGTIZIUFRFVKHTLAIUOOJYHSEUTHANLJJSKEQUDXVJBTWXRGDXOVMSXUWYVLDCZGJUQOEIVJGNLAC");
    msg.reference_frame = 223U;
    msg.custom.assign("WDAGKZPCRKUWAQCL");

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
    msg.setTimeStamp(0.782226175009);
    msg.setSource(33256U);
    msg.setSourceEntity(73U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(122U);
    msg.formation_name.assign("CDURVIJQLBMPFIVMSHVGUDASMXYRNKTQAZTARWGNOZDCLFYEQLJBNEUDJXSNEQQHAOBCDGESEJCMWSXBKMVTGZWTCXZMHDIIHORODRQPYNVPCDZTACZYBSKGBXFTKUXTUTFLUEAOQKSJDUGLLAWCAWYNOFHFOUZEPXNVIRJXQZDXRWKWISAPXMEMPVVCPPZNRWFYJLBGLIHSUBEIVGOKEAPTJHJWKIMNOZNWKBLOFYIHFGFYJVSPKHTGMQB");
    msg.reference_frame = 244U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27929U;
    tmp_msg_0.off_x = 0.333240953084;
    tmp_msg_0.off_y = 0.501597098697;
    tmp_msg_0.off_z = 0.737974395411;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MLXHRZWSGJDJOJPBLFQYFDQPMGXDGOQKGRBEYMILQQFZZDHZKNXIAIKLUEOJDMYJWNAGHBWXSCIIJUFP");

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
    msg.setTimeStamp(0.812009900935);
    msg.setSource(28775U);
    msg.setSourceEntity(89U);
    msg.setDestination(36450U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("CHBXCBMKYLZDLCGNBSQZHVSRIZNBALHSPYUNXFTEPEDKYTKPSCWPASCJGXAJJOMSFMOKUTJKUHEIXTSKATGXIEAVASPTRQIDGMIDPOUGYDYNFGWXUTYHQIJIXLUXMBF");
    msg.formation_name.assign("OTKSXNGAIUGDJUYFXSNEVZGWOIVTKYJEHZFOUOLIQUXCZHWZJSTKZAZIROPPDYQFLQTSIEVMFOKXNMSVUKVIJCFMMXOQMTRNRUSETBBFNWVLGCCAJNEIGURVJFETDMFQLMHQYAQWYDBPSRXHWYPCHAKPLAEUWDH");
    msg.plan_id.assign("NJSHWJOKNBTQBZTXHMRJHSGMWZ");
    msg.description.assign("UHDALRAMNXHHIWPNEITEANSQLYBWNALTWZKCYTPDPZFZIKFDHMRPKUJOE");
    msg.leader_speed = 0.745754674772;
    msg.leader_bank_lim = 0.618529690721;
    msg.pos_sim_err_lim = 0.155157813197;
    msg.pos_sim_err_wrn = 0.840765466667;
    msg.pos_sim_err_timeout = 19026U;
    msg.converg_max = 0.091533520675;
    msg.converg_timeout = 1553U;
    msg.comms_timeout = 24126U;
    msg.turb_lim = 0.592841165114;
    msg.custom.assign("TKTVKEZIFHJSHCHIBRYEAQIKPQBLLZXCKSLALBPGWPIGPGXORFMGEZVBDHVCWBNDNGTRYDOLTKEZYMOUWYQHJSWAGZKYUCNNBMOMOOALMXAMJXDCNBTWDPGXSUQXSQAINFBHKWOJAAEJTHBCNPYDFTRNSXBVMRSVWPEYJLRZJZRFEVZUJTCAWFICDDFKPTKWVYLUHQUMICUOVZJURVMILELPFTQSHRYZGDXQQ");

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
    msg.setTimeStamp(0.981609144888);
    msg.setSource(16476U);
    msg.setSourceEntity(85U);
    msg.setDestination(7075U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("LAPZCEUFAZZYNCYDZICUMYHTCRNRFNCZOKVHQJHSWSWLJFOZTJXHGIRKWIEQQBNRPJQYBUULHEBMTCBIYAMLJDRDPTVUDGTUHXAQMTVSECHXJMIOWBDUMOEDXSMQEISVZJGPGGKPNDBYKEBMSNLHPRTRMWCZBGERQFKXIBHYDKKPPFFWNEGOJWUAFCVZFRTANMNOFAUOKOYOVQYLTXEIAKSVQQCWVZNIJWOPLVGAIDRKUSJLXAYFSDHLPBV");
    msg.formation_name.assign("QHDEMYJJPWAXFTNBIPCANMDPLSBQUUHJNYGSDDJOZNGCXSYQBUFCRTOHVXWJMZXKPEJAIGQLHWONORNCLRYVZSKS");
    msg.plan_id.assign("NHAEFAEWOXELLWISYAYISEMIRRHFZZKXIOZJBRWTVGGHIPXJXODQMKDRSFSCYOKVGVKZTOFSMKBVLKAJEXMOTWRHCPSUINCVDYGQPVHRULMIWPAVKBBCDCWLWYJFJWBEIOUXUFJTOPDRAXJTGIHPPJGKEGBCJQOKIYRTQQLSSXAMRVPVSMPLGPQSHZDXFCTCNNABKNDNQMNAQYEGFEFQ");
    msg.description.assign("YZXKLJNZMQUDSOQQUDITYISHBFHXAWMAAPWDRUOYIBQYFGHVCNZCIRTGKEYTVNHAZWJHDGJLMSTKUFSRJUSPZFNDRPEJPXIPRWGCZETZGLJCARIWNQIGBJWABKPKUOXBXTNQUOENASZJTLMIDVQTWLGVRBKACBKVVLAMKWVLFDBRCNGXPWEMQUIGSZYBVIDFMMOHXAKYWFRLQSXLN");
    msg.leader_speed = 0.583199869206;
    msg.leader_bank_lim = 0.110502921642;
    msg.pos_sim_err_lim = 0.0935230509756;
    msg.pos_sim_err_wrn = 0.834678698588;
    msg.pos_sim_err_timeout = 62086U;
    msg.converg_max = 0.104795600756;
    msg.converg_timeout = 13154U;
    msg.comms_timeout = 47149U;
    msg.turb_lim = 0.60741218255;
    msg.custom.assign("GLXAWPKZXNAHUQDQEHVIRJOBBOVXZREPJMZNDZURNNDUUOQVQHPUIFXXZMMLQDQJGWQSKDBERYQVXOVZGGNDLJVFYYMDCSINWSWZHRWTPZKYTFFPCRJMIBHQATARMIGSOYRCXYLFWHLHSCNUKJOEMTLTPESRBTUYVNCLFENSWYBXKZKMGAOBOGINMPORCJELELUHWCGDFBS");

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
    msg.setTimeStamp(0.400606091101);
    msg.setSource(56188U);
    msg.setSourceEntity(208U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("UWDAXWCIANMKALILPEBYWJCVSRFQJCVUHWUDRBRQYPODIXNWSIDNZZOVIOVTYNLXYFWQTCLJWLQWUTRHBEHGXICKXNBBNZQXAJTUEUPGNBAOYKVTSIRGBZCREXEFPLUXQAMCPMTNKCQXRALHNMDGTZOICPFLUOJDPJWGKRSOCHHYFAPKRUMHETZBIDSKEJZAKVFYJDESGMVPQDTDSZGKMRSWPHJVMMTZYBLSIEMZFHLHFJVXBKGOOYA");
    msg.formation_name.assign("HHKQPGEVMMNKMRAXEAHTNRIMLEQFEHERWXPJPJWFJTDGHTGYMKSKJQNDOCFNDMVKEHCEMZBBCHYNRPIFTFCTUPKDLDJSIKQCUFLYZ");
    msg.plan_id.assign("SHNLMRAMFEGLVCWMFKWANVQJZDFYEYTXJQOPZRTZSCGGKYWZSSZUCWHKNTPSPLFRIIPHXRKHDONEZPAHUXEO");
    msg.description.assign("VBQLWKBTQPGDBFWPRASYFZYICNGMQMJTDNWHBSAPYSGYROMFQGFVSMJOOYPNRTATLRZXDONMUYCTDXUJEVXSEACVOGKZJOCINYVKEEUETKFLFPBITQHVDNWQXZCROFLKRAIDIBMZJLYCEUKYELCWGNMIFOPZWJGZNKTLYHUHRPLJGBSIPLVQMZXIXUSNADZHPZJSBHGAFHGMHCBOQOTKUJHAURMXFDVD");
    msg.leader_speed = 0.730161020812;
    msg.leader_bank_lim = 0.434782375176;
    msg.pos_sim_err_lim = 0.110217265368;
    msg.pos_sim_err_wrn = 0.401855802817;
    msg.pos_sim_err_timeout = 9204U;
    msg.converg_max = 0.454237432796;
    msg.converg_timeout = 24846U;
    msg.comms_timeout = 12657U;
    msg.turb_lim = 0.891477303861;
    msg.custom.assign("RCXNBEIQNMOAPJANZPCXFCVGYZPVQHMBVEXRJKYAMTDAQNLGQHYMIDWGCENXRILUJENOWXOTLXUGQQEJISTXSOLSZUZOTCFYZNVBAFIOSKRWFJHNEHNLSO");

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
    msg.setTimeStamp(0.724337959404);
    msg.setSource(49169U);
    msg.setSourceEntity(120U);
    msg.setDestination(13486U);
    msg.setDestinationEntity(54U);
    msg.control_src = 32989U;
    msg.control_ent = 42U;
    msg.timeout = 0.89681808339;
    msg.loiter_radius = 0.498450185267;
    msg.altitude_interval = 0.798399779314;

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
    msg.setTimeStamp(0.325067183012);
    msg.setSource(17373U);
    msg.setSourceEntity(90U);
    msg.setDestination(16324U);
    msg.setDestinationEntity(11U);
    msg.control_src = 28525U;
    msg.control_ent = 253U;
    msg.timeout = 0.766947223991;
    msg.loiter_radius = 0.791017689972;
    msg.altitude_interval = 0.0660636731012;

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
    msg.setTimeStamp(0.831429607954);
    msg.setSource(4937U);
    msg.setSourceEntity(115U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(40U);
    msg.control_src = 47361U;
    msg.control_ent = 92U;
    msg.timeout = 0.381443888674;
    msg.loiter_radius = 0.632528951305;
    msg.altitude_interval = 0.51314471338;

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
    msg.setTimeStamp(0.365691885038);
    msg.setSource(38128U);
    msg.setSourceEntity(225U);
    msg.setDestination(26377U);
    msg.setDestinationEntity(145U);
    msg.flags = 169U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.596634256544;
    tmp_msg_0.speed_units = 53U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.349894485362;
    tmp_msg_1.z_units = 29U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.887969872672;
    msg.lon = 0.686988367517;
    msg.radius = 0.170208695566;

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
    msg.setTimeStamp(0.499545076544);
    msg.setSource(44817U);
    msg.setSourceEntity(29U);
    msg.setDestination(52800U);
    msg.setDestinationEntity(100U);
    msg.flags = 212U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.267564115793;
    tmp_msg_0.speed_units = 49U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.888544315941;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.270115367513;
    msg.lon = 0.311055534202;
    msg.radius = 0.34239869237;

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
    msg.setTimeStamp(0.390851126578);
    msg.setSource(55410U);
    msg.setSourceEntity(220U);
    msg.setDestination(55661U);
    msg.setDestinationEntity(118U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39635415509;
    tmp_msg_0.speed_units = 33U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.854489964713;
    tmp_msg_1.z_units = 8U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0562844606175;
    msg.lon = 0.525902097162;
    msg.radius = 0.47771402877;

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
    msg.setTimeStamp(0.728191343972);
    msg.setSource(21307U);
    msg.setSourceEntity(25U);
    msg.setDestination(37907U);
    msg.setDestinationEntity(91U);
    msg.control_src = 59187U;
    msg.control_ent = 12U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.800577468158;
    tmp_tmp_msg_0_0.speed_units = 28U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.58683020403;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.129501864777;
    tmp_msg_0.lon = 0.142865312783;
    tmp_msg_0.radius = 0.0698707196277;
    msg.reference.set(tmp_msg_0);
    msg.state = 197U;
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
    msg.setTimeStamp(0.860749643595);
    msg.setSource(25071U);
    msg.setSourceEntity(75U);
    msg.setDestination(41807U);
    msg.setDestinationEntity(18U);
    msg.control_src = 59742U;
    msg.control_ent = 113U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 57U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.436918529261;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.991047781276;
    tmp_tmp_msg_0_1.z_units = 93U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.607787849994;
    tmp_msg_0.lon = 0.542321698849;
    tmp_msg_0.radius = 0.817489049446;
    msg.reference.set(tmp_msg_0);
    msg.state = 8U;
    msg.proximity = 79U;

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
    msg.setTimeStamp(0.258106859073);
    msg.setSource(24898U);
    msg.setSourceEntity(254U);
    msg.setDestination(39750U);
    msg.setDestinationEntity(188U);
    msg.control_src = 48874U;
    msg.control_ent = 212U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 175U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.366479605117;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.280057445088;
    tmp_tmp_msg_0_1.z_units = 11U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.112209704646;
    tmp_msg_0.lon = 0.109723773428;
    tmp_msg_0.radius = 0.415111523478;
    msg.reference.set(tmp_msg_0);
    msg.state = 226U;
    msg.proximity = 233U;

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
    msg.setTimeStamp(0.356910516203);
    msg.setSource(14551U);
    msg.setSourceEntity(69U);
    msg.setDestination(15389U);
    msg.setDestinationEntity(16U);
    msg.ax_cmd = 0.48728197013;
    msg.ay_cmd = 0.0887818427247;
    msg.az_cmd = 0.251241683737;
    msg.ax_des = 0.332539987299;
    msg.ay_des = 0.962484328221;
    msg.az_des = 0.866609276748;
    msg.virt_err_x = 0.760069330296;
    msg.virt_err_y = 0.216741386113;
    msg.virt_err_z = 0.474425204224;
    msg.surf_fdbk_x = 0.233270276273;
    msg.surf_fdbk_y = 0.872719342201;
    msg.surf_fdbk_z = 0.0922619745164;
    msg.surf_unkn_x = 0.331475780374;
    msg.surf_unkn_y = 0.928674846947;
    msg.surf_unkn_z = 0.373169548864;
    msg.ss_x = 0.187341721525;
    msg.ss_y = 0.606399596484;
    msg.ss_z = 0.237524080206;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JUFMTSPJPVZWGNAZFUSV");
    tmp_msg_0.dist = 0.630798220776;
    tmp_msg_0.err = 0.763687092416;
    tmp_msg_0.ctrl_imp = 0.0263730569591;
    tmp_msg_0.rel_dir_x = 0.0912136929864;
    tmp_msg_0.rel_dir_y = 0.198870230737;
    tmp_msg_0.rel_dir_z = 0.513380146777;
    tmp_msg_0.err_x = 0.294758858975;
    tmp_msg_0.err_y = 0.24702329099;
    tmp_msg_0.err_z = 0.101314299201;
    tmp_msg_0.rf_err_x = 0.0706344164584;
    tmp_msg_0.rf_err_y = 0.357675273976;
    tmp_msg_0.rf_err_z = 0.708500870674;
    tmp_msg_0.rf_err_vx = 0.87289192682;
    tmp_msg_0.rf_err_vy = 0.416540448938;
    tmp_msg_0.rf_err_vz = 0.353925843456;
    tmp_msg_0.ss_x = 0.864582264885;
    tmp_msg_0.ss_y = 0.234578800318;
    tmp_msg_0.ss_z = 0.790550266939;
    tmp_msg_0.virt_err_x = 0.417836143079;
    tmp_msg_0.virt_err_y = 0.845039057644;
    tmp_msg_0.virt_err_z = 0.651012115832;
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
    msg.setTimeStamp(0.540252725379);
    msg.setSource(25134U);
    msg.setSourceEntity(61U);
    msg.setDestination(40596U);
    msg.setDestinationEntity(87U);
    msg.ax_cmd = 0.889776468263;
    msg.ay_cmd = 0.793292240574;
    msg.az_cmd = 0.068931683897;
    msg.ax_des = 0.654437808805;
    msg.ay_des = 0.173920920847;
    msg.az_des = 0.773592731582;
    msg.virt_err_x = 0.991579550853;
    msg.virt_err_y = 0.511938355411;
    msg.virt_err_z = 0.62069287239;
    msg.surf_fdbk_x = 0.134140890681;
    msg.surf_fdbk_y = 0.401385526589;
    msg.surf_fdbk_z = 0.855882262626;
    msg.surf_unkn_x = 0.522306692172;
    msg.surf_unkn_y = 0.90056123936;
    msg.surf_unkn_z = 0.112470356887;
    msg.ss_x = 0.495667099313;
    msg.ss_y = 0.356588497586;
    msg.ss_z = 0.569662863598;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AGFWYDJKVQXGHRHVODZMKRELP");
    tmp_msg_0.dist = 0.275647922693;
    tmp_msg_0.err = 0.836356810452;
    tmp_msg_0.ctrl_imp = 0.335113436247;
    tmp_msg_0.rel_dir_x = 0.848929164098;
    tmp_msg_0.rel_dir_y = 0.502615104492;
    tmp_msg_0.rel_dir_z = 0.00133858694153;
    tmp_msg_0.err_x = 0.539884722056;
    tmp_msg_0.err_y = 0.422103171733;
    tmp_msg_0.err_z = 0.668395320765;
    tmp_msg_0.rf_err_x = 0.553299003153;
    tmp_msg_0.rf_err_y = 0.499455585822;
    tmp_msg_0.rf_err_z = 0.149709591392;
    tmp_msg_0.rf_err_vx = 0.134766501463;
    tmp_msg_0.rf_err_vy = 0.515387696134;
    tmp_msg_0.rf_err_vz = 0.588493436431;
    tmp_msg_0.ss_x = 0.836157829465;
    tmp_msg_0.ss_y = 0.623076851292;
    tmp_msg_0.ss_z = 0.168874669243;
    tmp_msg_0.virt_err_x = 0.372923935654;
    tmp_msg_0.virt_err_y = 0.545703521021;
    tmp_msg_0.virt_err_z = 0.269290119661;
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
    msg.setTimeStamp(0.82126316723);
    msg.setSource(36004U);
    msg.setSourceEntity(147U);
    msg.setDestination(43382U);
    msg.setDestinationEntity(168U);
    msg.ax_cmd = 0.210131256066;
    msg.ay_cmd = 0.308541168035;
    msg.az_cmd = 0.432671212302;
    msg.ax_des = 0.472190001141;
    msg.ay_des = 0.555386587198;
    msg.az_des = 0.483751108283;
    msg.virt_err_x = 0.550158869179;
    msg.virt_err_y = 0.362798915639;
    msg.virt_err_z = 0.162720981799;
    msg.surf_fdbk_x = 0.466281101764;
    msg.surf_fdbk_y = 0.287762166436;
    msg.surf_fdbk_z = 0.274313251;
    msg.surf_unkn_x = 0.166979357441;
    msg.surf_unkn_y = 0.830712825588;
    msg.surf_unkn_z = 0.2079127946;
    msg.ss_x = 0.555378804116;
    msg.ss_y = 0.954278495031;
    msg.ss_z = 0.528475683319;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YUWXGGNMQIMPKBQHJVNEEEHHEG");
    tmp_msg_0.dist = 0.31687373262;
    tmp_msg_0.err = 0.183456407016;
    tmp_msg_0.ctrl_imp = 0.727682120461;
    tmp_msg_0.rel_dir_x = 0.744005644266;
    tmp_msg_0.rel_dir_y = 0.859856124277;
    tmp_msg_0.rel_dir_z = 0.42273744031;
    tmp_msg_0.err_x = 0.656643655034;
    tmp_msg_0.err_y = 0.0408454641856;
    tmp_msg_0.err_z = 0.614254527616;
    tmp_msg_0.rf_err_x = 0.883110806918;
    tmp_msg_0.rf_err_y = 0.780466868358;
    tmp_msg_0.rf_err_z = 0.992372546848;
    tmp_msg_0.rf_err_vx = 0.950881899677;
    tmp_msg_0.rf_err_vy = 0.126433072419;
    tmp_msg_0.rf_err_vz = 0.771347257516;
    tmp_msg_0.ss_x = 0.936702372662;
    tmp_msg_0.ss_y = 0.913840526503;
    tmp_msg_0.ss_z = 0.608615914968;
    tmp_msg_0.virt_err_x = 0.52457266671;
    tmp_msg_0.virt_err_y = 0.521318246171;
    tmp_msg_0.virt_err_z = 0.304925411145;
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
    msg.setTimeStamp(0.122142877527);
    msg.setSource(32769U);
    msg.setSourceEntity(226U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(82U);
    msg.s_id.assign("RMBPVTAIBSHSYAACULZWKCUXYXFDBDBVURYPNZSRJXDEJFKTIOHFZPGRJTOSCRWEQSXELTGGPNAXOBPRZYQGZLWTHNNSCEXIFOCWAIVKUUBPSYTDGWKTLQQQJYYBUIQJVYMSEKRMXFWLAHVPCKQXAJLRDNLFXMNIZJFRBJWZEULEYGZMVUELHV");
    msg.dist = 0.341601029565;
    msg.err = 0.686588577256;
    msg.ctrl_imp = 0.990099115698;
    msg.rel_dir_x = 0.183602545001;
    msg.rel_dir_y = 0.887653404352;
    msg.rel_dir_z = 0.89885672775;
    msg.err_x = 0.734336250219;
    msg.err_y = 0.276642820141;
    msg.err_z = 0.385174092663;
    msg.rf_err_x = 0.919139870877;
    msg.rf_err_y = 0.369931556576;
    msg.rf_err_z = 0.47983812218;
    msg.rf_err_vx = 0.0827686322198;
    msg.rf_err_vy = 0.337487753132;
    msg.rf_err_vz = 0.0470866429528;
    msg.ss_x = 0.531999344864;
    msg.ss_y = 0.764108854337;
    msg.ss_z = 0.759324647005;
    msg.virt_err_x = 0.56846456183;
    msg.virt_err_y = 0.0357981964135;
    msg.virt_err_z = 0.924318383385;

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
    msg.setTimeStamp(0.892073759042);
    msg.setSource(32267U);
    msg.setSourceEntity(243U);
    msg.setDestination(39871U);
    msg.setDestinationEntity(83U);
    msg.s_id.assign("UMTQKDCRIMKVWBFSVYTQRUNXWZTZKLWEOGJDVIBGGMOOLKAXHCORPHTZFMAUBIANEPNEPSMRPDLVTJNRKSPVQGSJOZOEZNNZXNWWNIDPWYDLGZCBTKYLB");
    msg.dist = 0.277484762228;
    msg.err = 0.714665010678;
    msg.ctrl_imp = 0.593688790225;
    msg.rel_dir_x = 0.438959773796;
    msg.rel_dir_y = 0.324003959753;
    msg.rel_dir_z = 0.204575203017;
    msg.err_x = 0.155178852068;
    msg.err_y = 0.0379461953418;
    msg.err_z = 0.630892717325;
    msg.rf_err_x = 0.927937456679;
    msg.rf_err_y = 0.578622603432;
    msg.rf_err_z = 0.818183192352;
    msg.rf_err_vx = 0.275651729185;
    msg.rf_err_vy = 0.167549374592;
    msg.rf_err_vz = 0.173246103351;
    msg.ss_x = 0.132095477592;
    msg.ss_y = 0.843136414292;
    msg.ss_z = 0.213335667694;
    msg.virt_err_x = 0.760851901024;
    msg.virt_err_y = 0.972032342811;
    msg.virt_err_z = 0.263473974522;

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
    msg.setTimeStamp(0.885373302078);
    msg.setSource(35332U);
    msg.setSourceEntity(53U);
    msg.setDestination(21899U);
    msg.setDestinationEntity(176U);
    msg.s_id.assign("KXHSKOOUQRZGIUVDXTYAVPFKXIPWELLIEBLSOZZSBOMUMXUAMDVINXNCWXCJAZGUYFERYEBOXBDWMIIZPVJSFVFDRCGPQYDXAQQZFRRLNQMJSNTWYYKRAUCOTPOHDKWPSMGFCZACB");
    msg.dist = 0.29769418239;
    msg.err = 0.570702726317;
    msg.ctrl_imp = 0.407051496527;
    msg.rel_dir_x = 0.265377066993;
    msg.rel_dir_y = 0.671746860908;
    msg.rel_dir_z = 0.558332697085;
    msg.err_x = 0.0249776091988;
    msg.err_y = 0.220279432428;
    msg.err_z = 0.85989086183;
    msg.rf_err_x = 0.0857642806064;
    msg.rf_err_y = 0.0605215890274;
    msg.rf_err_z = 0.781246732045;
    msg.rf_err_vx = 0.124866349631;
    msg.rf_err_vy = 0.517543039635;
    msg.rf_err_vz = 0.888450035156;
    msg.ss_x = 0.984470795813;
    msg.ss_y = 0.393142179927;
    msg.ss_z = 0.269797838229;
    msg.virt_err_x = 0.53568336653;
    msg.virt_err_y = 0.507605391769;
    msg.virt_err_z = 0.990783179739;

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
    msg.setTimeStamp(0.208884967174);
    msg.setSource(34513U);
    msg.setSourceEntity(184U);
    msg.setDestination(8110U);
    msg.setDestinationEntity(245U);
    msg.timeout = 32858U;
    msg.rpm = 0.489330187035;
    msg.direction = 67U;
    msg.custom.assign("TCSWJFFBBKSOUFKWGPAHZQRNJBASHFUUESXYVIYNSZGHXWMTJYRXNPWQUBSRLDDSYVGKQIWCKEPYIVIILTGOIRRGJUWZDDYUDEUVJMKVKLTLPFA");

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
    msg.setTimeStamp(0.527226684332);
    msg.setSource(23510U);
    msg.setSourceEntity(204U);
    msg.setDestination(30843U);
    msg.setDestinationEntity(137U);
    msg.timeout = 14065U;
    msg.rpm = 0.72231669074;
    msg.direction = 181U;
    msg.custom.assign("ETMAVWTUXAFVIRHWWNRCYHPDALEDBGOYZJWCGLCYRPSFSDHXIIQEAZFNAXRONCOYWIQNOWOYHBOMZVXNPJZRMPMGJUTUCISJGALPFBNWWVFEHGZRUBUBQDMDKDRFAVOPUZHHEBIUSIPBXLCUYLOPYONDSKZQCKKLKMEDSZGEQKDQMMXTTJVYTZLFNVMHTYBCIJKEYVKB");

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
    msg.setTimeStamp(0.894310821272);
    msg.setSource(61555U);
    msg.setSourceEntity(141U);
    msg.setDestination(51204U);
    msg.setDestinationEntity(213U);
    msg.timeout = 40726U;
    msg.rpm = 0.188362760603;
    msg.direction = 21U;
    msg.custom.assign("BZAJAQZNHONHCSLSVUBOXFFGLIQPXOJBFVAXMBHSMMRYCRRTYYAPWNZWWY");

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
    msg.setTimeStamp(0.411177023967);
    msg.setSource(27101U);
    msg.setSourceEntity(147U);
    msg.setDestination(1699U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("PPWJFUQKWTZBSJLVPKZHHZVXRBYJOTOHSWGHUXTXLFLICXQRBRQYKYGUTOSVLONOIYAZLFENUDXUKQBMXSECGFILESAUTEIWMTTPCKYMOJSDYXDSKQTKVXZSJMHFNIAAGZJLRCUCRBLANIYIMFOQGVWAZV");
    msg.type = 91U;
    msg.op = 130U;
    msg.group_name.assign("MJCPOHLPAIAJGGJVNSAGHVDAKIMBQPCLWNKRRXRGDMHRVSRJFTBZCHQTZLOLBCQRLBXOCUKYDXKPANFNSRMFLEPZUINZFSRBONWIUXMWKUBNDLPKAZIZW");
    msg.plan_id.assign("KMWAAGFGTZWFXQTUAQPOJVAYFZKYDCCZWXYXUZFHMSYRIVTOOHAWCDLCEJTRDMIJWIIQNOGSNPCJDKUIDJPNESIJLBEBBPUBLBKUBSNEHXCQJEUGTKLIYHCSRNBLRPNYQOHMAVAASOTTGZODMDDGFKPKUUFBCZGEORDIKVBLMFFPYRTWSPGXBLWSEQVHF");
    msg.description.assign("AZIYKOACRJMXFHNTNTIXALKNHEWLIAEFJLUDCWQGGZHZAKPLCGLUBVSDTODPWHVUUSOIRKEUUFCPQRVOIOQCBARIHNEUZZRWYAGRXEWBPMKSETKQQYMTCPCCGTISMTHKOPBNRFQOBNRYZOSAGEQDPRSCVDDHYPVDJMKVJWIBWTJXZXXYGYBEATBBXXQSZLNXWDGQUMBKGYFFHFSDYZIVVSLLAMRUSQFJNMMEMNWEJJWVYLXJFHZPJTKCVI");
    msg.reference_frame = 170U;
    msg.leader_bank_lim = 0.145358127396;
    msg.leader_speed_min = 0.662783963301;
    msg.leader_speed_max = 0.157291214757;
    msg.leader_alt_min = 0.37939745958;
    msg.leader_alt_max = 0.778664172391;
    msg.pos_sim_err_lim = 0.887857766241;
    msg.pos_sim_err_wrn = 0.843366356788;
    msg.pos_sim_err_timeout = 2617U;
    msg.converg_max = 0.74110471888;
    msg.converg_timeout = 38934U;
    msg.comms_timeout = 50618U;
    msg.turb_lim = 0.0645254904131;
    msg.custom.assign("TNUBVXJMBSBFOUALPNMNEXOVYPIMRZTLOEAIBXZGTFCQZJQHMSUXJJHCGHCXYDSLCQBTDEPHVEEKBWRXJJQAQDVIIATDYLZGVAQZMBANUYOTSEVHNFWOHGSRJAKKRQULEFYOKAPNKKTSSUWIRMCCWPHUFPVZAPFWOIPFGWKYMYUNGFZPTICVD");

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
    msg.setTimeStamp(0.13385267393);
    msg.setSource(27233U);
    msg.setSourceEntity(159U);
    msg.setDestination(48006U);
    msg.setDestinationEntity(33U);
    msg.formation_name.assign("IVDNEPTFRLZORSSKTPQHODZQBHASPKOKPYGRQSJVNBNOAZ");
    msg.type = 198U;
    msg.op = 50U;
    msg.group_name.assign("VXPLBXCANIUPNTMBSBHUNZBYRSJMVCWTVVXPOLDECDTUAJVNVIBTQROJBJJWDYDYZQCQEUCSZIBYYMFJGSFYHGAKORKMKFVDRPTW");
    msg.plan_id.assign("PSEBLPWPEDRUILLLVBQZMNMRHOZYPVBCMDLUYEDCQZATGWSIUTWHOKXHXZQTJANTHIYFCLNGPCXSEMDDCEKBMUYHGWWOJBXWCONRKSUOBSOARAZVHEHOTAUQGCVSNYGDBWBOGVFTYDVYONAHQNKK");
    msg.description.assign("OCOXLDPAZGLNAPCBPNVABALJIHLSBSFEMOIEGDWYVGVNYLDMTIZBCGASZTEQQCYDOMXHLEUHYNQWIVEZXAUUXLRSSGRHKFJHXITRGIGAPUEVMMTJGSXZYKNKCWJQJKFWYQPCDFO");
    msg.reference_frame = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42378U;
    tmp_msg_0.off_x = 0.164018129365;
    tmp_msg_0.off_y = 0.84407914234;
    tmp_msg_0.off_z = 0.532088552802;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.935125307121;
    msg.leader_speed_min = 0.553740469684;
    msg.leader_speed_max = 0.43720516955;
    msg.leader_alt_min = 0.442182581346;
    msg.leader_alt_max = 0.00199599340187;
    msg.pos_sim_err_lim = 0.654422270337;
    msg.pos_sim_err_wrn = 0.735614685871;
    msg.pos_sim_err_timeout = 31104U;
    msg.converg_max = 0.551937013225;
    msg.converg_timeout = 25841U;
    msg.comms_timeout = 9266U;
    msg.turb_lim = 0.507859068448;
    msg.custom.assign("PCHJRGKUNGLUDXZYZXOURMBGDENXHVVGWESPJWKRFCHSVHUUTBBHUDZSXJEEVNMNOKQZNZIWXFLMAGCELQZSHSHTOAHVASKXCD");

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
    msg.setTimeStamp(0.597904101677);
    msg.setSource(46155U);
    msg.setSourceEntity(26U);
    msg.setDestination(61897U);
    msg.setDestinationEntity(153U);
    msg.formation_name.assign("KDKNSWIDPUZZOSBRRFZLDHKCPYNGVBKGLEXJEYNCTZRLDVFXUWUBYVIQVAAVPJPETNPDTRYDUVHEAZGTAPUFJWIFYOETXJUMEMPSLGZBCYQEZCIMQUTTHGBGIJFUHSLANHFOACQUKVYCNOWIKOIKXQJHOCLXGSZVIBJXIOBTCDLJSHADIWEQRQMAMZBKDXMMQULOHBMTQNXDFOYFKRPNYSWRHZXLENRQPGSYGLRAS");
    msg.type = 130U;
    msg.op = 112U;
    msg.group_name.assign("KFVJFBUZSDCIH");
    msg.plan_id.assign("TAJDUJMNIRJRMDQAIDTAYDCHBZHVHFYMDFUXWSBRNZL");
    msg.description.assign("TZQLAXYIRPTVDLQPPKJJINFTD");
    msg.reference_frame = 230U;
    msg.leader_bank_lim = 0.215090738342;
    msg.leader_speed_min = 0.840039566599;
    msg.leader_speed_max = 0.719870303049;
    msg.leader_alt_min = 0.35709189198;
    msg.leader_alt_max = 0.410000217282;
    msg.pos_sim_err_lim = 0.479116169121;
    msg.pos_sim_err_wrn = 0.209565120557;
    msg.pos_sim_err_timeout = 19960U;
    msg.converg_max = 0.531133104551;
    msg.converg_timeout = 42762U;
    msg.comms_timeout = 27591U;
    msg.turb_lim = 0.702132226022;
    msg.custom.assign("YPFASSPHGELJVCWYDSCPDVFSXVJTPCDRGGKEAYXSKEGXDWSZFPRLLAOCZYJZHCMMQXTTSUGDQZQWONQQUYKBEWOPXOUYNOJBRWHAYNDWIIMEXIDHZLCQAPZFQZWVAGRJHJBLBWKUVRJFWIRXTPQDMIJBGU");

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
    msg.setTimeStamp(0.709943102324);
    msg.setSource(33029U);
    msg.setSourceEntity(232U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(234U);
    msg.timeout = 19753U;
    msg.lat = 0.551088394918;
    msg.lon = 0.293774054005;
    msg.z = 0.302018518929;
    msg.z_units = 109U;
    msg.speed = 0.207230986404;
    msg.speed_units = 154U;
    msg.custom.assign("VAIXYBXOOCRDCEYDVQDXZBJCCL");

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
    msg.setTimeStamp(0.67282221209);
    msg.setSource(37461U);
    msg.setSourceEntity(253U);
    msg.setDestination(46223U);
    msg.setDestinationEntity(173U);
    msg.timeout = 48661U;
    msg.lat = 0.764446134956;
    msg.lon = 0.60806882178;
    msg.z = 0.460110141939;
    msg.z_units = 209U;
    msg.speed = 0.876741010851;
    msg.speed_units = 86U;
    msg.custom.assign("ZRMZMIQMPQQCCDPOCRVGYIHFFXXJHWCITRYVWADOLIOHJCDZIQTOMGINJUBTCULZUYHEZONNWQUZBKSZOKGEWRPXGZPPBQSHBUKUDNNTBTEEJNJZBEBRWYGNKLXDJYGPBSFXVSRYVDVL");

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
    msg.setTimeStamp(0.436515272328);
    msg.setSource(12440U);
    msg.setSourceEntity(208U);
    msg.setDestination(32493U);
    msg.setDestinationEntity(120U);
    msg.timeout = 6388U;
    msg.lat = 0.818071878529;
    msg.lon = 0.882284962425;
    msg.z = 0.423332657311;
    msg.z_units = 188U;
    msg.speed = 0.698162358677;
    msg.speed_units = 102U;
    msg.custom.assign("GDDTGDFWFKKXDAABAPTKYBGAPWWDMIHNKSFRBXNZGFJPAIWZORORYVSNVVQWMJOVVEYIOJILEJYADZNKOLNZFQOUSJQTVSZFEUTYDNBSCMUHPXLGQHAIESLTVRGSVEYKUPLSJIWQNLDBQGHBQWMPZZIQROMEKRKNCYGXHNPUVETUBRKBCJLXITAQTFINUEJCUOJSSCWXWQMXPUBJRLZFOHYKWTCIGPPGFMYCECHDZX");

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
    msg.setTimeStamp(0.990757075495);
    msg.setSource(17465U);
    msg.setSourceEntity(56U);
    msg.setDestination(64925U);
    msg.setDestinationEntity(177U);
    msg.timeout = 47874U;
    msg.lat = 0.0389017606628;
    msg.lon = 0.836726526824;
    msg.z = 0.467682871022;
    msg.z_units = 63U;
    msg.speed = 0.0579724348546;
    msg.speed_units = 117U;
    msg.custom.assign("PTMZZCNLKHADBMGDCKIVLKMBJIEZLHYNTVZSRCXQPDYJJKLSRLWIOXYFPXUKZCUJYAOSDLVFBXXGXCSQOTAVRNYEQECTRTIAXSUTHLODGSNIQZGMAYNXOHHBDBAKPHHEMGPNJSVNTFSKIOPIPMWBH");

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
    msg.setTimeStamp(0.219479592396);
    msg.setSource(57056U);
    msg.setSourceEntity(73U);
    msg.setDestination(53702U);
    msg.setDestinationEntity(123U);
    msg.timeout = 8418U;
    msg.lat = 0.356854564442;
    msg.lon = 0.886122960705;
    msg.z = 0.377981609054;
    msg.z_units = 177U;
    msg.speed = 0.313610728395;
    msg.speed_units = 76U;
    msg.custom.assign("AZHDNPWBUFKFVTSVYVJCEVMSMWOBHZJLLOWDDRXIWPYCMZRYLJGXZTCXVTGAQFKZJCHHJIODMGIVRCUAUAEVXIBANXSSWBTURCXGHROFZTRGUECBWZN");

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
    msg.setTimeStamp(0.373238037435);
    msg.setSource(38993U);
    msg.setSourceEntity(1U);
    msg.setDestination(5819U);
    msg.setDestinationEntity(22U);
    msg.timeout = 58354U;
    msg.lat = 0.702759862363;
    msg.lon = 0.317586926707;
    msg.z = 0.715596993647;
    msg.z_units = 194U;
    msg.speed = 0.935018378526;
    msg.speed_units = 130U;
    msg.custom.assign("FZUQWUEWIUYMABDVHTPZTDSEXQXFVXTHGVKRXSHYQLKLQUUVMHSDGIBYGLKNJDKJMTNSGCBQTVJTDWIOJVUBRIAPAMCWRNTEQXVIKUYEOWJBVOPMKIEIQZYHOCFFZPSCDIFDOTPNOSCSLKPNBJUQPFCOITFZWFNMVGTBYSRSYQXKELGRRKHWMYEMDGHEFCGJONWRGGPAHBOEACRROCHNUPCXXMLFAJLRYNUZBZLPAADVA");

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
    msg.setTimeStamp(0.817737652143);
    msg.setSource(5753U);
    msg.setSourceEntity(73U);
    msg.setDestination(27800U);
    msg.setDestinationEntity(94U);
    msg.arrival_time = 0.604812429908;
    msg.lat = 0.427315582333;
    msg.lon = 0.352319752753;
    msg.z = 0.557917285241;
    msg.z_units = 140U;
    msg.travel_z = 0.618460332033;
    msg.travel_z_units = 52U;
    msg.delayed = 151U;

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
    msg.setTimeStamp(0.993353168293);
    msg.setSource(55548U);
    msg.setSourceEntity(201U);
    msg.setDestination(34979U);
    msg.setDestinationEntity(16U);
    msg.arrival_time = 0.544523885053;
    msg.lat = 0.0329934614384;
    msg.lon = 0.752035369815;
    msg.z = 0.135630447762;
    msg.z_units = 71U;
    msg.travel_z = 0.263038486499;
    msg.travel_z_units = 23U;
    msg.delayed = 144U;

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
    msg.setTimeStamp(0.688340125466);
    msg.setSource(32707U);
    msg.setSourceEntity(129U);
    msg.setDestination(49431U);
    msg.setDestinationEntity(90U);
    msg.arrival_time = 0.795341805699;
    msg.lat = 0.906257268177;
    msg.lon = 0.534865178703;
    msg.z = 0.294910350774;
    msg.z_units = 128U;
    msg.travel_z = 0.459169150775;
    msg.travel_z_units = 122U;
    msg.delayed = 176U;

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
    msg.setTimeStamp(0.148869813105);
    msg.setSource(40239U);
    msg.setSourceEntity(131U);
    msg.setDestination(48958U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.235726506658;
    msg.lon = 0.193200359506;
    msg.z = 0.690115883494;
    msg.z_units = 156U;
    msg.speed = 0.111938183534;
    msg.speed_units = 232U;
    msg.bearing = 0.582663215635;
    msg.cross_angle = 0.652891719678;
    msg.width = 0.440162726936;
    msg.length = 0.705391214268;
    msg.coff = 67U;
    msg.angaperture = 0.198911946226;
    msg.range = 47733U;
    msg.overlap = 25U;
    msg.flags = 122U;
    msg.custom.assign("WULJRGNFBQWNVCDYSDDLWEJIOOADTHHHRBCXCUZQIFSQCECZKRDKZJUOTLTEJQVMWMSPXWBIULWNXVAOUPSLILGYRAOLVFYUPURHHRQOBVVGIYNDRDIWSRSKNFGTFHAQSDTJWTKYELCOJUJXJTZPDBOZKEBMFPPFXXZUASRECEIAKIGVCBFMAHQBEYNGFMPELILNZYTVZMQQOCRYHJQNZDIHHKXUYZ");

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
    msg.setTimeStamp(0.183234706036);
    msg.setSource(56241U);
    msg.setSourceEntity(207U);
    msg.setDestination(43583U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.455817111896;
    msg.lon = 0.476737454397;
    msg.z = 0.688900357756;
    msg.z_units = 109U;
    msg.speed = 0.147488981026;
    msg.speed_units = 149U;
    msg.bearing = 0.267110085152;
    msg.cross_angle = 0.758633046255;
    msg.width = 0.739742987028;
    msg.length = 0.884605887543;
    msg.coff = 33U;
    msg.angaperture = 0.812679628444;
    msg.range = 45236U;
    msg.overlap = 59U;
    msg.flags = 19U;
    msg.custom.assign("JRSCEPJLKFRBHEJIPMAHXWLBTWMZVSULDDOGNDKNDVOQYZSRCVUIAWCBYTUMPCLROUVWMYGJLJXWPRUDONASKIXVETBZZRVPIFTSTVRDAKAXKBQYLGZHQMASXJNKLXXGPJSPNMGXLIQCQQQVBHNDHCXHAEDJNUTYEUXTIGPFHGDJRPYWWWHANICATNOO");

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
    msg.setTimeStamp(0.511867179075);
    msg.setSource(45159U);
    msg.setSourceEntity(78U);
    msg.setDestination(42544U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.266123840161;
    msg.lon = 0.148851309908;
    msg.z = 0.31672026411;
    msg.z_units = 77U;
    msg.speed = 0.71171629535;
    msg.speed_units = 243U;
    msg.bearing = 0.745653619553;
    msg.cross_angle = 0.175793540262;
    msg.width = 0.0823888900418;
    msg.length = 0.291778060093;
    msg.coff = 56U;
    msg.angaperture = 0.30367125562;
    msg.range = 9987U;
    msg.overlap = 53U;
    msg.flags = 165U;
    msg.custom.assign("VWQMKVWDFVLNPBSXRXCZALBMXUDFQP");

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
    msg.setTimeStamp(0.965574744421);
    msg.setSource(17638U);
    msg.setSourceEntity(119U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(49U);
    msg.timeout = 38717U;
    msg.lat = 0.819764990972;
    msg.lon = 0.748757904836;
    msg.z = 0.739832531149;
    msg.z_units = 186U;
    msg.speed = 0.0725558565528;
    msg.speed_units = 227U;
    msg.syringe0 = 19U;
    msg.syringe1 = 11U;
    msg.syringe2 = 71U;
    msg.custom.assign("MDHBVIIFZMOCPIMOJDRAHHOUZELFYDGJSSKCQKPCADAHQBEXZ");

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
    msg.setTimeStamp(0.138307816185);
    msg.setSource(12U);
    msg.setSourceEntity(36U);
    msg.setDestination(12883U);
    msg.setDestinationEntity(190U);
    msg.timeout = 42668U;
    msg.lat = 0.675317188667;
    msg.lon = 0.80038070711;
    msg.z = 0.323614741872;
    msg.z_units = 92U;
    msg.speed = 0.0639367418047;
    msg.speed_units = 205U;
    msg.syringe0 = 32U;
    msg.syringe1 = 52U;
    msg.syringe2 = 63U;
    msg.custom.assign("VMNFGYJWMGOVRSAPIVBRTFWMKFSOUJNZPRUZYXNFDCKURHJH");

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
    msg.setTimeStamp(0.0417331704666);
    msg.setSource(61171U);
    msg.setSourceEntity(166U);
    msg.setDestination(32999U);
    msg.setDestinationEntity(34U);
    msg.timeout = 17863U;
    msg.lat = 0.697923012018;
    msg.lon = 0.519791713628;
    msg.z = 0.87940056859;
    msg.z_units = 63U;
    msg.speed = 0.429749965289;
    msg.speed_units = 50U;
    msg.syringe0 = 68U;
    msg.syringe1 = 9U;
    msg.syringe2 = 139U;
    msg.custom.assign("IEKWFLVMLQSRYAENCMRMEYQKRSTDMBRTXWDXQPJOZISQGXJYIIPIKOVAFCBBAXUMWZOWIBVEHKSUQNOGWYTYRVQTZAJTXZJXUGQDHMCOHKHS");

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
    msg.setTimeStamp(0.338058707844);
    msg.setSource(5750U);
    msg.setSourceEntity(161U);
    msg.setDestination(30411U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.144685143224);
    msg.setSource(31393U);
    msg.setSourceEntity(106U);
    msg.setDestination(26080U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.661860168994);
    msg.setSource(55057U);
    msg.setSourceEntity(9U);
    msg.setDestination(34809U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.702840701432);
    msg.setSource(54424U);
    msg.setSourceEntity(174U);
    msg.setDestination(28030U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.325999280297;
    msg.lon = 0.751303119706;
    msg.z = 0.0443001214346;
    msg.z_units = 226U;
    msg.speed = 0.399362408703;
    msg.speed_units = 188U;
    msg.takeoff_pitch = 0.524268641388;
    msg.custom.assign("NHTHWCUBJZWDSGEHRIDLVLQKGTNYRVPVJLMGWHFIVLYDKJGSVVSAUJHLEFPFZVIPQNR");

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
    msg.setTimeStamp(0.157092211688);
    msg.setSource(57695U);
    msg.setSourceEntity(215U);
    msg.setDestination(27319U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.845051159555;
    msg.lon = 0.666931886141;
    msg.z = 0.00468317682498;
    msg.z_units = 42U;
    msg.speed = 0.287149707276;
    msg.speed_units = 51U;
    msg.takeoff_pitch = 0.422107850767;
    msg.custom.assign("UPRUUEFOVA");

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
    msg.setTimeStamp(0.309861254257);
    msg.setSource(21965U);
    msg.setSourceEntity(53U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.760128809081;
    msg.lon = 0.90385724791;
    msg.z = 0.166320974794;
    msg.z_units = 99U;
    msg.speed = 0.596499896393;
    msg.speed_units = 106U;
    msg.takeoff_pitch = 0.733812439802;
    msg.custom.assign("FMDJITIBVUYCTUXLMOOOSLSFOKGTHYKBSNWBGIHEXVRDVLBTKPXNEQWDJUSPVXDCXVKALCYKMFCUCZMLNZJPHMYXIAELMUIGQFBHTMEQTPNXPGBYQTXTFSGOGKHJQQHLOCIMZNWCWGQHKDUVYJASDLOVJNWSCYWMXVUCRO");

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
    msg.setTimeStamp(0.374931516728);
    msg.setSource(64709U);
    msg.setSourceEntity(47U);
    msg.setDestination(13041U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.997433041308;
    msg.lon = 0.25614033578;
    msg.z = 0.650825426855;
    msg.z_units = 126U;
    msg.speed = 0.560800316814;
    msg.speed_units = 113U;
    msg.abort_z = 0.695700514796;
    msg.bearing = 0.0723770785079;
    msg.glide_slope = 47U;
    msg.glide_slope_alt = 0.0843410185955;
    msg.custom.assign("RERMSWQJUEJIIDIKFGGZVFQPVCTNMFSJXLZYOVBPQABVYFJRGUQMCKZNCLMADAZDHIBYCOELQWCSTZTKJSLKEORKBKFNHGIHEIRGXOCIHVQXLAVUNQDPHLALEVJCIHUDQQHDDNSCYAMZSABPOWBDMRW");

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
    msg.setTimeStamp(0.0559217241466);
    msg.setSource(21086U);
    msg.setSourceEntity(137U);
    msg.setDestination(57509U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.326263595617;
    msg.lon = 0.965439254146;
    msg.z = 0.16403119311;
    msg.z_units = 196U;
    msg.speed = 0.149664971641;
    msg.speed_units = 166U;
    msg.abort_z = 0.00370254519861;
    msg.bearing = 0.806404225109;
    msg.glide_slope = 97U;
    msg.glide_slope_alt = 0.420332680957;
    msg.custom.assign("OKUNPENTDYAGPMQOLNPNPKQKWJY");

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
    msg.setTimeStamp(0.376510541918);
    msg.setSource(2733U);
    msg.setSourceEntity(157U);
    msg.setDestination(62445U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.766665805881;
    msg.lon = 0.138248420428;
    msg.z = 0.518255950898;
    msg.z_units = 252U;
    msg.speed = 0.815606077343;
    msg.speed_units = 111U;
    msg.abort_z = 0.179607960305;
    msg.bearing = 0.698059906263;
    msg.glide_slope = 46U;
    msg.glide_slope_alt = 0.0213375903149;
    msg.custom.assign("SETOTUAQYWZBMZHEZTPTAXIIIAMJKOCIXJGWRALGODLOBRAMVFZHINHHLNCIFAVXOVPKCAYNPMDSDGRLETZWQRUFUXBMJQSFDGPLNSEFDGFJXHJHVELETYWLOKSHXFKYKZMGGYBDLCKOKKXPFTCTAUDSCSMZEZOXNFJITYCQBVHPVVSJNZU");

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
    msg.setTimeStamp(0.0563603026646);
    msg.setSource(46997U);
    msg.setSourceEntity(226U);
    msg.setDestination(16004U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.269582402376;
    msg.lon = 0.736084184085;
    msg.speed = 0.61048452873;
    msg.speed_units = 230U;
    msg.limits = 40U;
    msg.max_depth = 0.856953721319;
    msg.min_alt = 0.851575695963;
    msg.time_limit = 0.716811736914;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.432640747171;
    tmp_msg_0.lon = 0.142072057814;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YFWGGBINKTUMNPAVHVRKBZJMYNQZPKHXNRZURFCIIVGYGGOKTQCHFWKMUYJHPGLCXIPRHBYSLBDILOVTLQJQPUSCVGYUJTBDSORIYSQZNZSA");
    msg.custom.assign("MJYHZKKGFBBTBDVFSEQQXGHBDOENMYAUEJUBCPRAXFRPCHHYFGGNXUDZVVZAOZLKWYNIXBXRSLPNGZIASLDTRQXDIIYIRCHIMCTBWPINEDNEPPHVOZITSYLKMCFIRNWOKLTSOHVNWLKSVJJAJMTTRGGDYVAENHQABWQLSXZXRLFTDYDKJWWWEQOMSCDVVS");

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
    msg.setTimeStamp(0.644402689749);
    msg.setSource(8014U);
    msg.setSourceEntity(69U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.419589429366;
    msg.lon = 0.867097630445;
    msg.speed = 0.636792692207;
    msg.speed_units = 93U;
    msg.limits = 188U;
    msg.max_depth = 0.992000833634;
    msg.min_alt = 0.699337281012;
    msg.time_limit = 0.107835285314;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0195726462089;
    tmp_msg_0.lon = 0.978601798568;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OQTPHQKXIPPJEQSTHCMZVBPDSDCDUWODSUSBXJINWGRULRNMERHASOUFDAJDDLEYVUDUOVLVITOXWEXATFWWZKLVUYONJOMITWQYQNLKIUESPGAPPBFACCLJZJUHRAVFT");
    msg.custom.assign("AQCLMELFGMMKVTWQGRFPIQHVATGYFUIOINXYSMZBEHOMMWSDLIODODMGRSGRWPFUXQACBTWZTUSVKDXTLWFHHVZEINJLJSDHVXLCFEQETORFXBGXANDKJJZURIWTRBUIQTULIFCREQWVOZQYVROSDSLYBNKCJZEJPJSEAKPBDGUUOVKKGPIHFZWNSPAJUOKKFCDMHPAPMNYSNCWTNYBTXRYVQXMADYXOPVBJJIYCEBG");

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
    msg.setTimeStamp(0.909733741362);
    msg.setSource(48504U);
    msg.setSourceEntity(77U);
    msg.setDestination(59594U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.555771199207;
    msg.lon = 0.106193573253;
    msg.speed = 0.259279455968;
    msg.speed_units = 104U;
    msg.limits = 142U;
    msg.max_depth = 0.486002346174;
    msg.min_alt = 0.0251382849746;
    msg.time_limit = 0.462142394762;
    msg.controller.assign("XIWTDKWJAMMHBVGCHGYRENFMJGEAKDRDXZIRIHTXAGPHXJSNVAZTFCSGLUSJKOFLIVCWMQBGHEIEJUADROLFCXUHMNMIHIQCYYZEMRRUPOMXDAPNZHUOKSAFAPBSZELBYFZOGVUCBEQRWWVLDDPNEIDKFBNLNEVCEBIJMTGLP");
    msg.custom.assign("DREVGZKYLMIERDQZNFHRYUBWTSSMDAEMBHFIYPTXSOPNTWASFTWQHNXJ");

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
    msg.setTimeStamp(0.17000621019);
    msg.setSource(54322U);
    msg.setSourceEntity(183U);
    msg.setDestination(32210U);
    msg.setDestinationEntity(118U);
    msg.target.assign("EKNWOOPPVERYYUWHCYULCAUKPGBJWMMBTCOABOJE");
    msg.max_speed = 0.611272492832;
    msg.speed_units = 36U;
    msg.lat = 0.994657854629;
    msg.lon = 0.426546026495;
    msg.z = 0.0816207930561;
    msg.z_units = 124U;
    msg.custom.assign("GDMPDHYMAPDBCMQZYHOACZDQZAHIQWZVTWOXUHJRKGJMENSCRGORKTHXUUXYINNGATJBVXFIHGVAJLEOXEUSOSWSYJMUKUGMQ");

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
    msg.setTimeStamp(0.708337964768);
    msg.setSource(31825U);
    msg.setSourceEntity(206U);
    msg.setDestination(14333U);
    msg.setDestinationEntity(159U);
    msg.target.assign("MAWIPMNVYJTVOBN");
    msg.max_speed = 0.472167540289;
    msg.speed_units = 178U;
    msg.lat = 0.572174519312;
    msg.lon = 0.587943387464;
    msg.z = 0.547856022386;
    msg.z_units = 130U;
    msg.custom.assign("OARLJNPMWANYSIGEJTWUXTXBJUWXYAOOVGJUIKNMLRLPQXJXYFSHWMYEARVPEDIBWENSISFGRZMTDJNGXLHKCCQFCGZQJQPSGLZVTBNVYOBEMERFHZOFUUQBKZMFHKLCKSKVNHTTVPCZREGMIYLILWRFQUUZACUIBRJQ");

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
    msg.setTimeStamp(0.723780632518);
    msg.setSource(60578U);
    msg.setSourceEntity(178U);
    msg.setDestination(22309U);
    msg.setDestinationEntity(22U);
    msg.target.assign("DDQJGZGIZYANANOCBODOGXXBEHATQJLBEHUSYPHSAFLPNCIEVCEJRRSUHHLVEIKQNOFIXJTSFUOZROQDEVMQFOZGSICWFMWMMETFXBJYNXKXPRNTRSIQLNYYZTELNHRVURDKKPGILFUQVVSAOVPCPQWAGJDMBCPIKVIWMDKMZYWKWDXHZEVSPD");
    msg.max_speed = 0.709411158725;
    msg.speed_units = 150U;
    msg.lat = 0.76199821993;
    msg.lon = 0.321064290949;
    msg.z = 0.723229795991;
    msg.z_units = 253U;
    msg.custom.assign("JRKCAVWQTRWJZUXYTNEJYXRKSLLWKDNVLOEVNIHEHEXROMBWTZEMGTHGSFRLMCBGYHNRKSZFLWGTVAKLUYNBAKPVADISMZKBCEJAQMPMOWXFQEUAFUHNPLJK");

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
    msg.setTimeStamp(0.67144114871);
    msg.setSource(50877U);
    msg.setSourceEntity(49U);
    msg.setDestination(61366U);
    msg.setDestinationEntity(23U);
    msg.timeout = 2048U;
    msg.lat = 0.288070048517;
    msg.lon = 0.606444473673;
    msg.speed = 0.972708294498;
    msg.speed_units = 120U;
    msg.custom.assign("WEKXQQSTCNFZZPQCGSLKDLJEHWXKJJRBBIBNTSHXCEOWWEFISDUKWKMMAXEUYADEVHFDIYIDZVPGWZCC");

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
    msg.setTimeStamp(0.414441171665);
    msg.setSource(11352U);
    msg.setSourceEntity(252U);
    msg.setDestination(60559U);
    msg.setDestinationEntity(109U);
    msg.timeout = 12173U;
    msg.lat = 0.475293972835;
    msg.lon = 0.347855131441;
    msg.speed = 0.828038237285;
    msg.speed_units = 4U;
    msg.custom.assign("NBVGRGHOOWXQYEALODYHHUVKMPGQADNPWCUJKEOADJIYFIYIBIYCAVWWNFFFZAUUPVMWQQCCBFYPTGATJEVILNYRRSQR");

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
    msg.setTimeStamp(0.221857700415);
    msg.setSource(8172U);
    msg.setSourceEntity(26U);
    msg.setDestination(43385U);
    msg.setDestinationEntity(180U);
    msg.timeout = 9658U;
    msg.lat = 0.0511125791924;
    msg.lon = 0.39095692581;
    msg.speed = 0.731003921228;
    msg.speed_units = 58U;
    msg.custom.assign("VDFSVXZEILLBAHODOKAPJZJNPOSTPTNMUBNLGBEETGSHINBKLNNWEYTAYNHRVCHHBSSJQRCQQRWDHZUPFUYDIPMEDGQFULWVFRPIMVFKBWQXCMCQDODGGAGXIRMIXILEXSBWAQJZTOWGKEFJYWIUJCXCPJHRHAROMJBWYVUOOLXOQXBCCMREYKSQVGDEYKFRPGNSTTMKUGYARIFSUZHAMKZDAKZUIYFHWDNLVZLQTWM");

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
    msg.setTimeStamp(0.234044947114);
    msg.setSource(22907U);
    msg.setSourceEntity(62U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.387056664156;
    msg.lon = 0.544967149907;
    msg.z = 0.483445974028;
    msg.z_units = 72U;
    msg.radius = 0.470484570061;
    msg.duration = 30475U;
    msg.speed = 0.627240817172;
    msg.speed_units = 239U;
    msg.popup_period = 15176U;
    msg.popup_duration = 20439U;
    msg.flags = 248U;
    msg.custom.assign("FGCUFLJVCLRCYROCVXLIGNZVYQSDSXYMJIJGPQXKBBTXVFUECILHOWYHAJJYRAPVPANSKITHHWEGGVTEHRTBGOHZZABU");

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
    msg.setTimeStamp(0.390725356397);
    msg.setSource(57729U);
    msg.setSourceEntity(34U);
    msg.setDestination(60399U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.698674890235;
    msg.lon = 0.961147033736;
    msg.z = 0.773644415163;
    msg.z_units = 149U;
    msg.radius = 0.971811095305;
    msg.duration = 21861U;
    msg.speed = 0.54379028087;
    msg.speed_units = 216U;
    msg.popup_period = 11410U;
    msg.popup_duration = 9336U;
    msg.flags = 72U;
    msg.custom.assign("KURGKAWTOJCSHSTHVOPUDHVYXYDTSOSQXYVPLGNBBABPXSFPPMDHDYTIGOLQOQXVIAXOAYTLRSIWZZMWRPBNKSUUGLWZKIGLNWXKESDGOCRGEYLPDMFFHPCOEIVHCFERERKJSZDONWXZJGAWNZMENYCMYEBUTXKLMCBLYJWBVCGBTRQQLBPTWJQQVKJMHAUHXFDNTRKIUPUEUWF");

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
    msg.setTimeStamp(0.466556989921);
    msg.setSource(37956U);
    msg.setSourceEntity(177U);
    msg.setDestination(26366U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.162918992191;
    msg.lon = 0.812082585648;
    msg.z = 0.572166260239;
    msg.z_units = 85U;
    msg.radius = 0.259634259205;
    msg.duration = 50874U;
    msg.speed = 0.139774667699;
    msg.speed_units = 184U;
    msg.popup_period = 47761U;
    msg.popup_duration = 34460U;
    msg.flags = 178U;
    msg.custom.assign("GGBRCGRXYLHROJOHAWVKOIUBKYOCNQVHJHEOPDZWLKHLUFIGTKCQBTYJVQAMPZYDANFYYAINRJUUTTPOVBWDILFCEUDGZHJDQNPQIROMWSHLZIOKJOZXLTAXVWZVWNXJDVFTSSRYTRFXMYEAGMZMFXNMCQTNGWFCUKBKBFQMPEMPGMPHRXGCDEARJNRXSKDSIAEZUWJBLLIICSLQSUYPYKEXBJSHBQCPSLNVZZFHCUEFPEN");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.542780436205);
    msg.setSource(50100U);
    msg.setSourceEntity(37U);
    msg.setDestination(41207U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 117U;
    msg.error_count = 64U;
    msg.error_ents.assign("FCOHOXDNCNTOLURPGTWQEUFLBUBINQJQMCLCSQZGWFEEKQXIZKRBIVNAOZWHFBMEMHVMYFIUHMWHFRQYBBZLPJYSVDKZEIDLETYTMOYCRAPJKKPUNXKJTLTIVIQHPAEGYHUURMNSOJGWFWHGCWXDYKWPESDONTDWVUFSXTUPPXDSAVEZZCRWDQSUQBCVAEOCHGXQMKKF");
    msg.maneuver_type = 37257U;
    msg.maneuver_stime = 0.0199580350379;
    msg.maneuver_eta = 11437U;
    msg.control_loops = 2835152501U;
    msg.flags = 236U;
    msg.last_error.assign("ZDUTSMVSHDPGICNLOJNXMSJCAZGFGWTGYNYMKBMJHFSDYMYCGR");
    msg.last_error_time = 0.0894217968273;

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
    msg.setTimeStamp(0.687773839688);
    msg.setSource(42603U);
    msg.setSourceEntity(138U);
    msg.setDestination(57425U);
    msg.setDestinationEntity(155U);
    msg.op_mode = 226U;
    msg.error_count = 43U;
    msg.error_ents.assign("VIGLTZRGBRHKAPYPYEQPCTXUREDNBWQMYAAPMAJCQRHBCIXOOOHHOBIWSDFQAHTJDDUXCUWGSSLGAPTBSJKOMR");
    msg.maneuver_type = 10892U;
    msg.maneuver_stime = 0.729407818777;
    msg.maneuver_eta = 23656U;
    msg.control_loops = 4232713355U;
    msg.flags = 86U;
    msg.last_error.assign("EHZVTIVFPFGEJXKINTGOHCPVXZAZOIXVUCDYXZUPXNRUBLKHSZDSQUPADFBADWMJNHMPMINLNCQSRWDUUKVCGFHWLCJNPOJQXRGCAFSTWFRHPEIBIWFSMWDZOELOTYIPRTOEYQFDMLTBRRXLBKY");
    msg.last_error_time = 0.760040750379;

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
    msg.setTimeStamp(0.774570354246);
    msg.setSource(18326U);
    msg.setSourceEntity(240U);
    msg.setDestination(22405U);
    msg.setDestinationEntity(152U);
    msg.op_mode = 140U;
    msg.error_count = 127U;
    msg.error_ents.assign("GJMBOQYUCGKVVHCVXXBBZXODFIBDCRAPIVFLCVEOKWSYQSKBUGFISUZCXAASDGMHADWYJEGUOYFKJSQOKSXKZEUKARJONONMYHJMSXIPUCBEKBUQZOBHLVURZXFBTADJEFZTNZTTWPXSLJSMGYWDAFYMNPADFFWEWEGGVHISLWEMTELWGLURQHZDRPWQTHYLOHTYHPBFRAQTUIARCM");
    msg.maneuver_type = 16001U;
    msg.maneuver_stime = 0.487873658755;
    msg.maneuver_eta = 33284U;
    msg.control_loops = 2239119862U;
    msg.flags = 54U;
    msg.last_error.assign("SVISEVBNLOTVVQSCFTTLWCZUBNMPTIGYZHQXJBGJGFSREPUWORQCAVEXMIMPHEWRTOEGUHOIFXWVZIYGURKYRRQSXJYDKCQALLWIDLDDJTMHYBPDMAZDWACYOKTGNCJMEWSKMGVBNMAUOVRUHARJIHXXQOAHPZXNNRMLUZCZUZKKMH");
    msg.last_error_time = 0.587128438922;

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
    msg.setTimeStamp(0.661481322279);
    msg.setSource(13036U);
    msg.setSourceEntity(41U);
    msg.setDestination(21900U);
    msg.setDestinationEntity(84U);
    msg.type = 155U;
    msg.request_id = 35871U;
    msg.command = 143U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("OMPGPOVUQUQJIGTESKANWDGEIMQNBBXCXKKYVTJAWAJLGKWTPBFWPDYSMASYKVYWGCHGAFUOIGEUDTQJGLNZDCPJTZRZQWVNCHCBXILRVOFFESECJOFUYWZRIGTNRFMCOXEOUTRKSHNDZWODEYMVMCXXRMJNLWAPLKVAIURYNQHBDHTXDZNXBVSZUIABRBPHUIXTR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11632U;
    msg.info.assign("EDQAIBKNETHYNTHYUJVBRMSOIBTXZVKAZQUJDKMHVPWIPGNNIDRTCFVPOXWLZXQXITLUASCAAORZGCIFIULQSCRHTLRGRDFSSYGGISYEHUBZJXWWVFZUTXKOFUHQXWJOVJANDKSPJQMU");

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
    msg.setTimeStamp(0.147216963774);
    msg.setSource(24951U);
    msg.setSourceEntity(107U);
    msg.setDestination(44928U);
    msg.setDestinationEntity(152U);
    msg.type = 48U;
    msg.request_id = 57605U;
    msg.command = 90U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 28528U;
    tmp_msg_0.name.assign("IKNOKAJJGMEJLKUUEOOXGRBEDJJUMVUPQZZDBJGLRAERIRNTTPFLKY");
    tmp_msg_0.custom.assign("FVZWJFLOLROZRSNHXMYVJXNKSUAKCMUFWGGOLGIDWWZZYJOCHQWIPYEUITJJYSMUTQPVUXZSSVRMDEJTUTZIRFACNNUWTEETPDFP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53063U;
    msg.info.assign("XPKMPAUPHEJLUYCRFTBIUNJLXJIGUOUBHWTKWBRZHFZYZBPQPCTLNMKVJOJKZFEOIEQSAUTYGIVBYZWCLLCVGXIAYXAHDHTXXDKQANHVFKENYZCQGQCSTTBUGKGFPMAUXIGGMSDTXMOJHZMQYSAFRVDQDFZ");

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
    msg.setTimeStamp(0.523738473115);
    msg.setSource(48730U);
    msg.setSourceEntity(118U);
    msg.setDestination(25311U);
    msg.setDestinationEntity(242U);
    msg.type = 86U;
    msg.request_id = 24733U;
    msg.command = 76U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 19452U;
    tmp_msg_0.name.assign("XGJKMEWTROCTKHUBQCDQUSMWHWQAVYULOQRRZUOXHSVYQSNLJZSHIMCXFMWUORDGENQYVDBXBVDMBJPTETBPVCXCTEHLLNZONGKOMFFNIHIFPPIRUPLSCG");
    tmp_msg_0.custom.assign("NMUEPFYBBRCEVSFEXBTKZVMTWYCCDKYKMYCRYIIRJDGNAYHKELWBL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38577U;
    msg.info.assign("OXAOYTBKIMPBKBHOIMZKKICXTRTPVFOIMENFMUGLMJLFIAJRDHAELTXXZIEKXDQCTGAWKHENN");

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
    msg.setTimeStamp(0.00235122334272);
    msg.setSource(18976U);
    msg.setSourceEntity(168U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(128U);
    msg.command = 190U;
    msg.entities.assign("MVAWGLNNRDAUBZHHNAJYGXXIJIWMHUPFLMCAHULDZJKKCOONPEZJVDPAHFBMKWOTSIUNVAJQREOEZQQCSKRYZRVYPIGZJFQIGCKWCDTIPOVFJFDODGTVPXSLBTYNSPEAKHMLRGVTWXMGRBYISHKHHZGLWMEZYDLPWDLAEZYNFCNUMZETRMQLNXFBIRWEGUFKMDONBGUCOQXCUSWTJCKIQTXYLQUSXRBPDAYOEJFCO");

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
    msg.setTimeStamp(0.808105547591);
    msg.setSource(41444U);
    msg.setSourceEntity(160U);
    msg.setDestination(57021U);
    msg.setDestinationEntity(117U);
    msg.command = 238U;
    msg.entities.assign("RVLDNJQMXCOUJMEPYNBGXVPNPNBFRLESIVTUHQCFRGGQJANIKEAIDLXPKQHLQVOLWQUOIGPEUXBCYUZMOMSIJBFNVUSVSJQEKTAZSPSBASMMJZRCQDDSGZJZEUDZNRAYSPWHGKHXBCHXXTDVYLAXZGRXWABEJC");

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
    msg.setTimeStamp(0.734150006772);
    msg.setSource(11045U);
    msg.setSourceEntity(46U);
    msg.setDestination(19237U);
    msg.setDestinationEntity(176U);
    msg.command = 135U;
    msg.entities.assign("BOCKPYOFNOKELUAWCWXIUJAHUYTVCQXQYRNKFMLALFOKISHXWJCBZLTDXETSFQUFPOYPASAYURKXTZDKCCLVGNSMWIQGUHRSVIZGBUQDLPVGODJMWCPNYCHXTESBEVPOSIRTMWLURMZNPRHSDNVJBDGYEHRCCT");

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
    msg.setTimeStamp(0.370406388652);
    msg.setSource(28392U);
    msg.setSourceEntity(37U);
    msg.setDestination(19049U);
    msg.setDestinationEntity(185U);
    msg.mcount = 254U;
    msg.mnames.assign("SOTIYPXVKRUHAVLWEKBLUPDLSJRFJAMPXUDTQQPQSRNGQRJBOLRCNOVYOJ");
    msg.ecount = 248U;
    msg.enames.assign("TVDSONXXGVRKJCPQWARNSBLSVFZLUGESDSADMCBNGZEEBWHNFHLQQGMFUUEXKNYMTIPYLLKAUVPGWARAWHZVCHMJOJSOWX");
    msg.ccount = 23U;
    msg.cnames.assign("WRDUSPGJCKFLETTDOVMJZAKGVIVOBEKTOHROPORPWSXDVCMZQHMA");
    msg.last_error.assign("HTNUVJNXCAENJWVEMNACHSSVENQITNIAYOODZBPKCMYYYQGWPUTOYQYBLDLIHRAVTLBZJDESNRRXXQUPFIFLHEHXUUKFMYFWLGRJZZZCVIYBDWRRZAWDABFJUKQVKQUMLXMGTGUDLCAPXVPMKCNZOQHLUJXESSSBEQKHCZGODTTJSPLOCBFKBYQPTAWBMVGINMOSXGRWIISZFMW");
    msg.last_error_time = 0.325801769238;

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
    msg.setTimeStamp(0.355321109704);
    msg.setSource(37937U);
    msg.setSourceEntity(224U);
    msg.setDestination(6472U);
    msg.setDestinationEntity(194U);
    msg.mcount = 110U;
    msg.mnames.assign("BDYJXQETRRHTPVOYIOKCYXNSHSQKJMIEGZTNSLSQVBOYLERMEQFVLBRNVFJFAYDTKTRLVXZZKSIWTXQSHJZPKNXYEGKWPCRLUIUDVJLPXDUWQJBMWGZQBNBCAEXQVQBDPCMIWOPNIZALURKNPUVUOCISFEIZARJMLMGWHUDTLZVQSUMBJWAKGGCXVHYDOTDCHGHPFFBAYONEFCAWRHPIHFH");
    msg.ecount = 56U;
    msg.enames.assign("YAPPEAPZMSSRDMPKNEZKFMJSCCFXUQWDLPKAUJHGOKXISFBQCLBZXUWSKFITWEOQGYJCXAIZRSODQGLUYVYXGDQGSQFQZFHWWHGVDMYJCIWHQVBHJRRUOPVAKZHCBITENNHJKLYDUVTBDBOXLIV");
    msg.ccount = 174U;
    msg.cnames.assign("FCTGDVELOUQANNXLIWHUSXBGSEZCIBBEMWHAFKUUWSKCBBTQVVCUTCFFXMPCKQIVIPKGZDQOBJVFZLMONRIPSOXRJGWZSCFUVBZHHMZMXQWQMHRMJVWQDREKGKTJQGEMVNOAOZHBYCHEYUBZHGCCPYWIGQORXTWLYDGFWZPAWHMRFTYIAEEKFTJJNDPTN");
    msg.last_error.assign("QSNOUIAVPVRHVCGFNLYSNADFWANLDIADRQLDRKRWOZZWIQOKNEEGERBHYHLTOJKUXPEIZOXLECJFBGXKRBWMNWUEOYLYFFBAUTIKITZEVJXXJITSMUQALPWWFZCHCPXDKECSRJVMHLAVJUGDHRAPYTSZSBOFHNQJ");
    msg.last_error_time = 0.635738564305;

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
    msg.setTimeStamp(0.756228984918);
    msg.setSource(46877U);
    msg.setSourceEntity(124U);
    msg.setDestination(50677U);
    msg.setDestinationEntity(231U);
    msg.mcount = 183U;
    msg.mnames.assign("ZCWRUAYOPOGRLCENQOCIQUYHTLKVOTZJULXGBSEQMDCAVMIJUJXEPQZYOFBHXLXWTISPHGMQZWTNJGJVGYQWMBJYTJHWOSUNQFDTOXKFEFHBZYKANAEGGYWZPGHJBKVFXVBNNLYASURBFRTWBCEUKSIDGHUCNIPXIKZXLHPPRRAMYHZGWRPCNIUQDFKVNPZNKCWBLHOLKUMSTIEDADIOSMJLMRJPFSRXZCBAODDMMKL");
    msg.ecount = 179U;
    msg.enames.assign("VFUHUYGGHVSZDUTKRSFKDIERVUSKPLQBTXSIYJPDNERCKACFZKVGJMYJMVKIUARQADREOYGFXQIGSPMCQEXWHIRKVBVPRJOPLDSWTNBEAAAJHOTNYONBLUUIAXZZGQBCCUWVGBBLWSYDOMCTTJFASLTHNHJLZOFYNWVQMW");
    msg.ccount = 241U;
    msg.cnames.assign("FXLZFSZREYBVMQFBNFNLAHWUKYGWSCPCMRTMPUQOKGGEGVZCEVPRQIDIXFMHCNHXIZOWIANGQYJAWDHWTBWJGTYASXJQKUEWJIISZDWFVLSSOVFWOZEOOSBXASILKHNDADNKPNOABXXYMC");
    msg.last_error.assign("FFCHLBVORGDNQWJLROVDYB");
    msg.last_error_time = 0.163699564409;

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
    msg.setTimeStamp(0.422021530979);
    msg.setSource(53380U);
    msg.setSourceEntity(5U);
    msg.setDestination(20793U);
    msg.setDestinationEntity(173U);
    msg.mask = 78U;
    msg.max_depth = 0.000969240870215;
    msg.min_altitude = 0.904574564606;
    msg.max_altitude = 0.935698532943;
    msg.min_speed = 0.347606840663;
    msg.max_speed = 0.66099311884;
    msg.max_vrate = 0.466892849002;
    msg.lat = 0.451046730405;
    msg.lon = 0.159875867378;
    msg.orientation = 0.407964176521;
    msg.width = 0.126146068166;
    msg.length = 0.910740254952;

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
    msg.setTimeStamp(0.581494754307);
    msg.setSource(49765U);
    msg.setSourceEntity(132U);
    msg.setDestination(40084U);
    msg.setDestinationEntity(172U);
    msg.mask = 128U;
    msg.max_depth = 0.823426664722;
    msg.min_altitude = 0.995387607577;
    msg.max_altitude = 0.0088503658301;
    msg.min_speed = 0.623325281797;
    msg.max_speed = 0.524141412911;
    msg.max_vrate = 0.617690224911;
    msg.lat = 0.968355823242;
    msg.lon = 0.00678087807843;
    msg.orientation = 0.715172277584;
    msg.width = 0.580909840575;
    msg.length = 0.954826148845;

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
    msg.setTimeStamp(0.92535936017);
    msg.setSource(61331U);
    msg.setSourceEntity(4U);
    msg.setDestination(4686U);
    msg.setDestinationEntity(49U);
    msg.mask = 73U;
    msg.max_depth = 0.655646271366;
    msg.min_altitude = 0.884692793752;
    msg.max_altitude = 0.116908780914;
    msg.min_speed = 0.0906922850445;
    msg.max_speed = 0.703488556878;
    msg.max_vrate = 0.249634277733;
    msg.lat = 0.609254104345;
    msg.lon = 0.493524039624;
    msg.orientation = 0.534106488723;
    msg.width = 0.312510265053;
    msg.length = 0.121296135822;

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
    msg.setTimeStamp(0.380628119059);
    msg.setSource(8503U);
    msg.setSourceEntity(177U);
    msg.setDestination(21012U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.596782167457);
    msg.setSource(28855U);
    msg.setSourceEntity(44U);
    msg.setDestination(7576U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.234119634974);
    msg.setSource(12047U);
    msg.setSourceEntity(146U);
    msg.setDestination(8191U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.915447776634);
    msg.setSource(52926U);
    msg.setSourceEntity(156U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(48U);
    msg.duration = 27845U;

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
    msg.setTimeStamp(0.503444257312);
    msg.setSource(41836U);
    msg.setSourceEntity(234U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(168U);
    msg.duration = 26898U;

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
    msg.setTimeStamp(0.438790227615);
    msg.setSource(32161U);
    msg.setSourceEntity(241U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(211U);
    msg.duration = 41876U;

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
    msg.setTimeStamp(0.884765180266);
    msg.setSource(42813U);
    msg.setSourceEntity(2U);
    msg.setDestination(9612U);
    msg.setDestinationEntity(137U);
    msg.enable = 26U;
    msg.mask = 1974179323U;
    msg.scope_ref = 479960932U;

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
    msg.setTimeStamp(0.102284727731);
    msg.setSource(15880U);
    msg.setSourceEntity(154U);
    msg.setDestination(63089U);
    msg.setDestinationEntity(86U);
    msg.enable = 178U;
    msg.mask = 303267675U;
    msg.scope_ref = 3627439469U;

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
    msg.setTimeStamp(0.355722810193);
    msg.setSource(8323U);
    msg.setSourceEntity(252U);
    msg.setDestination(37808U);
    msg.setDestinationEntity(221U);
    msg.enable = 172U;
    msg.mask = 256395642U;
    msg.scope_ref = 3557798403U;

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
    msg.setTimeStamp(0.971247597566);
    msg.setSource(55140U);
    msg.setSourceEntity(30U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(237U);
    msg.medium = 134U;

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
    msg.setTimeStamp(0.56271211995);
    msg.setSource(11546U);
    msg.setSourceEntity(20U);
    msg.setDestination(27314U);
    msg.setDestinationEntity(42U);
    msg.medium = 170U;

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
    msg.setTimeStamp(0.629610541805);
    msg.setSource(65379U);
    msg.setSourceEntity(10U);
    msg.setDestination(33780U);
    msg.setDestinationEntity(223U);
    msg.medium = 70U;

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
    msg.setTimeStamp(0.3674164149);
    msg.setSource(46752U);
    msg.setSourceEntity(81U);
    msg.setDestination(65399U);
    msg.setDestinationEntity(99U);
    msg.value = 0.915578705312;
    msg.type = 18U;

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
    msg.setTimeStamp(0.478257794925);
    msg.setSource(35382U);
    msg.setSourceEntity(180U);
    msg.setDestination(28880U);
    msg.setDestinationEntity(62U);
    msg.value = 0.487650736875;
    msg.type = 40U;

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
    msg.setTimeStamp(0.670015259378);
    msg.setSource(35207U);
    msg.setSourceEntity(166U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0136767005684;
    msg.type = 178U;

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
    msg.setTimeStamp(0.480283818931);
    msg.setSource(48866U);
    msg.setSourceEntity(24U);
    msg.setDestination(12359U);
    msg.setDestinationEntity(39U);
    msg.possimerr = 0.298615503994;
    msg.converg = 0.93691903708;
    msg.turbulence = 0.894498367739;
    msg.possimmon = 199U;
    msg.commmon = 204U;
    msg.convergmon = 51U;

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
    msg.setTimeStamp(0.201034522829);
    msg.setSource(20923U);
    msg.setSourceEntity(143U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(136U);
    msg.possimerr = 0.380984490331;
    msg.converg = 0.134498427314;
    msg.turbulence = 0.733802867559;
    msg.possimmon = 190U;
    msg.commmon = 130U;
    msg.convergmon = 40U;

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
    msg.setTimeStamp(0.0782472347177);
    msg.setSource(25640U);
    msg.setSourceEntity(250U);
    msg.setDestination(54417U);
    msg.setDestinationEntity(131U);
    msg.possimerr = 0.496012327154;
    msg.converg = 0.775190354265;
    msg.turbulence = 0.701835989613;
    msg.possimmon = 3U;
    msg.commmon = 168U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.668439719993);
    msg.setSource(61889U);
    msg.setSourceEntity(200U);
    msg.setDestination(16631U);
    msg.setDestinationEntity(238U);
    msg.autonomy = 38U;
    msg.mode.assign("FAMABRMAHAVWNTIJDLUNPCNROPGWKEPJGEYREFLVEEDPRFWVUJANOKTXVEIFKZNGFDCZPLYAADWSHCQNDPTUSVYXOD");

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
    msg.setTimeStamp(0.252673440508);
    msg.setSource(45068U);
    msg.setSourceEntity(165U);
    msg.setDestination(57623U);
    msg.setDestinationEntity(8U);
    msg.autonomy = 158U;
    msg.mode.assign("URFEQDDSEJNUTOMXXKLCQSYUYUXXUTGGSHXWLQYOMIJSFAVEPDIHHREYBGZCZBREJCVNAHFXTNNXFMICMYOGOWPW");

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
    msg.setTimeStamp(0.188885047594);
    msg.setSource(42546U);
    msg.setSourceEntity(166U);
    msg.setDestination(58169U);
    msg.setDestinationEntity(54U);
    msg.autonomy = 88U;
    msg.mode.assign("NPJIQAZQXWLJGVGHRXSEZAS");

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
    msg.setTimeStamp(0.00392789191775);
    msg.setSource(31625U);
    msg.setSourceEntity(169U);
    msg.setDestination(62060U);
    msg.setDestinationEntity(88U);
    msg.type = 184U;
    msg.op = 163U;
    msg.possimerr = 0.0917515290358;
    msg.converg = 0.192834151911;
    msg.turbulence = 0.841077491623;
    msg.possimmon = 194U;
    msg.commmon = 71U;
    msg.convergmon = 111U;

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
    msg.setTimeStamp(0.224432015789);
    msg.setSource(21790U);
    msg.setSourceEntity(108U);
    msg.setDestination(33137U);
    msg.setDestinationEntity(84U);
    msg.type = 178U;
    msg.op = 175U;
    msg.possimerr = 0.277320050681;
    msg.converg = 0.993045050955;
    msg.turbulence = 0.112629864283;
    msg.possimmon = 14U;
    msg.commmon = 177U;
    msg.convergmon = 57U;

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
    msg.setTimeStamp(0.114865994789);
    msg.setSource(18935U);
    msg.setSourceEntity(137U);
    msg.setDestination(23948U);
    msg.setDestinationEntity(156U);
    msg.type = 107U;
    msg.op = 100U;
    msg.possimerr = 0.528258751993;
    msg.converg = 0.388189499928;
    msg.turbulence = 0.653593119696;
    msg.possimmon = 89U;
    msg.commmon = 103U;
    msg.convergmon = 100U;

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
    msg.setTimeStamp(0.926876659098);
    msg.setSource(21709U);
    msg.setSourceEntity(91U);
    msg.setDestination(36639U);
    msg.setDestinationEntity(97U);
    msg.op = 65U;
    msg.comm_interface = 147U;
    msg.period = 16547U;
    msg.sys_dst.assign("FEVTEPIBNKLKZILCBWEHFKPCJPDEBNXUUQAFKSUFMTXIMGHBYFXANSLCRTSEDJXSINDAMSUKDVLFQMJPZAXFQMNJOREZZCEDXXBQPTHCDNFAGDDYDHNTMMPNKOTQI");

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
    msg.setTimeStamp(0.595137759094);
    msg.setSource(59336U);
    msg.setSourceEntity(213U);
    msg.setDestination(59585U);
    msg.setDestinationEntity(151U);
    msg.op = 53U;
    msg.comm_interface = 42U;
    msg.period = 62869U;
    msg.sys_dst.assign("CPCRDUCHYKPOWDNVDHCUOX");

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
    msg.setTimeStamp(0.676462025578);
    msg.setSource(17227U);
    msg.setSourceEntity(120U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(215U);
    msg.op = 109U;
    msg.comm_interface = 229U;
    msg.period = 6372U;
    msg.sys_dst.assign("PCYZWFJOTGEBXINXPEDMJZA");

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
    msg.setTimeStamp(0.312345542832);
    msg.setSource(50216U);
    msg.setSourceEntity(99U);
    msg.setDestination(15104U);
    msg.setDestinationEntity(163U);
    msg.stime = 2727939657U;
    msg.latitude = 0.637831486809;
    msg.longitude = 0.903184700645;
    msg.altitude = 1152U;
    msg.depth = 14286U;
    msg.heading = 61513U;
    msg.speed = 25527;
    msg.fuel = -70;
    msg.exec_state = 72;
    msg.plan_checksum = 16114U;

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
    msg.setTimeStamp(0.366689976569);
    msg.setSource(64046U);
    msg.setSourceEntity(50U);
    msg.setDestination(42425U);
    msg.setDestinationEntity(152U);
    msg.stime = 568639297U;
    msg.latitude = 0.836327362565;
    msg.longitude = 0.389094084825;
    msg.altitude = 52623U;
    msg.depth = 57315U;
    msg.heading = 33787U;
    msg.speed = 23607;
    msg.fuel = 29;
    msg.exec_state = 54;
    msg.plan_checksum = 15199U;

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
    msg.setTimeStamp(0.974874225016);
    msg.setSource(23573U);
    msg.setSourceEntity(135U);
    msg.setDestination(55597U);
    msg.setDestinationEntity(186U);
    msg.stime = 3501551667U;
    msg.latitude = 0.531264113064;
    msg.longitude = 0.401150117315;
    msg.altitude = 59602U;
    msg.depth = 34749U;
    msg.heading = 57205U;
    msg.speed = 29785;
    msg.fuel = 121;
    msg.exec_state = 107;
    msg.plan_checksum = 34988U;

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
    msg.setTimeStamp(0.190490594133);
    msg.setSource(58247U);
    msg.setSourceEntity(245U);
    msg.setDestination(57414U);
    msg.setDestinationEntity(29U);
    msg.req_id = 26815U;
    msg.comm_mean = 11U;
    msg.destination.assign("MYETOUCDPBUFPFDIIULHPNIQMJSDXUYQZFFGGSMJAVYPRXQWESBOHQGTTMRIXZCJONNGSWXJMNGJOYHXGRQURNMKZEEGRXQNGHTOMJHNKVJVNZOEPDEWGFDLWKIHECNCDFAHYTVXUEYSFWSWWLYWZDAUOTHUI");
    msg.deadline = 0.207962412563;
    msg.data_mode = 165U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BGKHEHYUUSFNFILIACGQADYMHYZMKZCWSSOLZORJODSXGIPVDVIKNGEFCTTSLZSMMWUEEDKBTOUIETWWVGSHABBOHHSDZXZVPMTEHCRFFMMYOL");
    tmp_msg_0.lat = 0.3517753255;
    tmp_msg_0.lon = 0.293318524896;
    tmp_msg_0.z = 0.577189751114;
    tmp_msg_0.z_units = 124U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VNQTFOXJPADFPIYEPVUSMQCDIRUOMUYZZFBIZMTURCFDPYYWWNUMTTOJORXURPBTRFZHEXVTZIHIJKUSXVZUWVKFWDUGEVWPBORFQGGIGEFKGSHYODNMQNIGXMCLLYXHBDDZVSTRGSSBCQGQVRWLAANKKSCOZHQKHTAIXPNDYUJCLKNLNXLMEVBEHQNYMPWRETKWWDEYJHMGLQBZICAZ");
    const char tmp_msg_1[] = {122, 32, -111, -83, -43, -11, -50, -94, 34, -85, 124, 123, 11, 95, 38, 73, 93, 102, 111, 26, -77, 77, 6, -36, -109, 74, -111, 54, -30, -27, 100, -99, 73, -55, -16, 44, -100, -109, -116, -10, -18, -106, -90, -26, 32, -67, 110, 80, 117, -19, -88, 95, 38, 108, 46, 10, 117, -15, 35, -3, -46, 92, 101, 45, 103, 6, 81, -26, 77, 54, 92, 99, -31, 70, 43, 35, 105, -126, -28, -98, 120, 95, -44, 111, 5, -115, -95, 46, 83, -19, 81, 17, 7, 43, 124, -114, 26, -103, -47, 51};
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
    msg.setTimeStamp(0.295504876752);
    msg.setSource(14712U);
    msg.setSourceEntity(223U);
    msg.setDestination(57733U);
    msg.setDestinationEntity(118U);
    msg.req_id = 39118U;
    msg.comm_mean = 45U;
    msg.destination.assign("TVHMFDQZPLOEWYUUKKDTASVZEWFKKIDOBALZXUYTCZXUBSDSSJXXODRIGYTROCHRVQILTNQBFIJNSQDUZJRLPUQAEUHQOXMGJBBLGGTVSPSGUJMDOKPWASZVWQBUAJWLAGFRENEMZKCMDXVHGNWGFTRKFVEYNABQDYQMYIBJPHVHCIFEAHYBAOCPRMMYLCHJCMTNPTROYLNQEXGEKCFNTHIIFNJLEPHWS");
    msg.deadline = 0.263328379826;
    msg.data_mode = 24U;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("ESFSUWSLETGZYFQPXVBCQIPICDRPPBJQSZYHZT");
    tmp_msg_0.sys_dst.assign("TWXZZJXOQQTKIYYWWMCWSGRZUBMFNOIVMUQYXPZFPNX");
    tmp_msg_0.flags = 42U;
    const char tmp_tmp_msg_0_0[] = {88, 23, -71, 112, -31, 95, -7, 88, 41, 2, -9, -106, 38, -27, -3, -51, 126, -48, 89, 52, -23, 87, 85, -94, 20, -75, 71, 21, 70, 11, -17, -31, -114, 42, -38, 126, -32, -98, -68, 40, -55, 101, -91, -7, -106, -121, 115, -72, -69, -70, -7, -26, -94, -91, 49, 25, -59, -106, 73, -4, -40, 27, 71, 107, -29, 11, 16, -118, -21, 112, -108, 0, -56, 36, 104, 0, 105, 84, 5, 35, -64, 111, 74, 16, -100, 10, 80, 65, -56, -91, -35, -39, -84, -23, -83, 49, -51, 23, -35, -117, -112, 45, 20, -120, -54, -97, 29, -26, 61, 33, 114, 57, -29, 99, -89, -27, 111, 125, -29, -18, -112, 86, -9, 41, 121, -95, 0, -35, -121, 104, 68, 78, -1, -89, -93, -24, 99, 95, 83};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HMDJRBVFKGTAFIMLKOMLDEQRMIHJFLSUIHOXIEMBHZUGCZOAVSLXWLNPNJQYKCNGEGJUWAOKQTYAXFYTBCPAXFVIUTENPYACSWZSOKSYQTJVRWCCKJTDZBATXDGHJWFSMUUYEEPFSROYFBNBVOGIVEDLWRMDCLBFTBLSDPUDYQVJAVDIQXDQXRTPPKXSLMQUIKMWCRW");
    const char tmp_msg_1[] = {-68, -53, -14, -64, 68, 107, 94, 73, 107, 120, -24, 67, 52, 89, -22, -128, -48, 117, 82, 121, -53, -5, 73, 42, 28, -97, -31, -23, -112, -5, -57, -16, 126, -62, -25, 35, -109, -59, -48, -96, 87, 30, 22, 85, -74, 98, -67, 11, -65, -94, -10, -6, -118, -51, -35, 53, -14, -119, -107, 14, -14, 34, 73, -126, -96, 17, 27, -98, 40, 47, -89, 96, -122, 45, -22, -122, 88, -40, 75, 49, 42, -24, 102, 90, -84, -100, 30, -121, -72, 80, 44, -5, 24, -105, -94, -87, -73, -60, 30, 33, 33, -34, -69, -33, -51, 103, -127, 57, -92, -9, -82, -124, -33, 1, 60};
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
    msg.setTimeStamp(0.620156345901);
    msg.setSource(60909U);
    msg.setSourceEntity(48U);
    msg.setDestination(13006U);
    msg.setDestinationEntity(211U);
    msg.req_id = 39214U;
    msg.comm_mean = 54U;
    msg.destination.assign("KAZSAZFOKDBBQCAQCARNZVODXSNMDDUQDAOMAHAOQGASPKZVAXPHGEGEEHBBQZRVGWHUGRTMXADIJEFTJBHFVXTSEWPHSZNXUF");
    msg.deadline = 0.408411463181;
    msg.data_mode = 249U;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 25649U;
    tmp_msg_0.ttl = 5784U;
    tmp_msg_0.destination.assign("OPVWIFMNGHTXAGQJYFRDPPOVGXDUCRUHKOBUZWIHNPJMJJFIEEKTWQPBATIAIZZMLUFDMCOHRTSEOKHVJGOLZXSEZACHYNHTVUWYX");
    const char tmp_tmp_msg_0_0[] = {-52, -40, -38, 14, -116, 82, -112, 64, -66, -37, -49, -21, 53, -60, 0, -78, 111, -102, -43, -74, -85, -5, -22, -56, -74, 118, -40, 26, 38, 40, 45, -40, 65, 32, -52, 62, 32, 24, 67, -40, 41, 53, -69, 77, 113, 80, -5, -67, -107, 101, 71, -82, 124, 28, -116, 102, -3, 51, 57, -108, -105, -25, -38, -56, 73, -84, 122, 55, -28, 75, -21, 41, 39, -30, 122, 50, -81, -53, -73, -60, -58, -127, 107, 53, -112, -68, 41, -20, 67, -47, -75, -79, 110, 60, 27, 10, 54, -42, -112, -117, -94, -13, 42, -23, -19, 21, 48, 50, 22, 62, -109, 105, -27, -58, 57, 88, -16, 32, 39, 24, -25, 56, 29, 21, 3, -69, -105, -108, 100, 49, 121, -36, -36, -18, -45, 68, 64, -114, 12, 75, 92, 48, 17, -8, -80, -3, -25, 108, -93, 58, 97, -45, -89, -85, -51, -88, -118, -26, 36, 74, -39, -94, -69, 10, -109, -86, 73, 76, -101, -26, -92, -112, -113, 29, -26, 28, -72, 5, -62, 75, 49, 59, -21, -3, 26, 31, -23, 69, -4, -55, -125, -32, -67, -89, -114, -79, 34, -7, -81, 57, -97, -83, -104, -114, 60, 80, -17, -91, 7, 60, -100, -8, 88, 123, -21, 7, -79, -91, 118, -99, -6, -88};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NYGOFIPSNIMODZBQPHMDCZFNSHHXVBYCUZYARMLPPZMPYKRBKJIWSAWVGKUED");
    const char tmp_msg_1[] = {108, -103, 72, -26, 105, 90, 47, -104, 58, 125, 126, -35, 67, -119, 25, 59, -52, 90, 26, 49, -125, 65, 54, 24, -54, 36, -91, 32, -19, 34, -103, 22, -21, -12, -46, 11, 2, -61, 50, 33, 72, 124, -71, 24, 100, 116, 51, -48, -117, -8, -34, 114, -60, -27, 52, -62, -18, 76, -77, 7, 63, -123, -98, -48, -50, -38, 53, -10, 116, -9, -54, 72, 32, -87, -128, -30, 101, -61, 20, 0, -74, -74, 104, 60, -64, -32, -63, -5, 36, 88, 55, -66, 1, -89, -56};
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
    msg.setTimeStamp(0.175107526366);
    msg.setSource(30797U);
    msg.setSourceEntity(58U);
    msg.setDestination(23694U);
    msg.setDestinationEntity(99U);
    msg.req_id = 10599U;
    msg.status = 135U;
    msg.info.assign("BZBQWBDMDLFWYL");

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
    msg.setTimeStamp(0.928378437653);
    msg.setSource(61300U);
    msg.setSourceEntity(33U);
    msg.setDestination(64063U);
    msg.setDestinationEntity(198U);
    msg.req_id = 24516U;
    msg.status = 180U;
    msg.info.assign("NDADFBUOHBLBWTMZQWRZGOBERKRXTDCYEZVVKXPDDIRZEWYYUJJVTACLGGXIUOFLHVKFJRIMBTFFIEUCANKV");

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
    msg.setTimeStamp(0.815116772);
    msg.setSource(59042U);
    msg.setSourceEntity(104U);
    msg.setDestination(24128U);
    msg.setDestinationEntity(174U);
    msg.req_id = 58250U;
    msg.status = 26U;
    msg.info.assign("ZTSQKVYUXZNMKOXNYGPLJIKOFZQXSHQWYUUFYSDUPQZKEXRMSYJNOWPZSBDNOZKIKQAANJJRGWXCIPCNVOGLEAOATHMEKVIGETJTWETCJGAIIJPIGRMXIMUFMIPEURRWLVLFBRCYDHKHLOJPZGAXHGWTFYWWUXRALUAFBBHHQFCOBNSFOCBFRQYKFYSDBKLIQDMNGODUDMYCLTPXSEMRQEMBTVDSGTZCDHNBZVBVU");

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
    msg.setTimeStamp(0.603092502186);
    msg.setSource(7604U);
    msg.setSourceEntity(74U);
    msg.setDestination(16779U);
    msg.setDestinationEntity(207U);
    msg.req_id = 36719U;
    msg.destination.assign("IKZASCQFLNYJRGWBDKPLLYACOIRACNSHCWCARXYAWGVUDMBER");
    msg.timeout = 0.0434785579053;
    msg.sms_text.assign("IZUBKYJFTWGLQWNSZCJEAVUMROIGSZRECVSXQSPWIEFMUOQSDNKUNIENVYMNBMXBROJIELJDBHNGRSRGENZ");

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
    msg.setTimeStamp(0.317698120659);
    msg.setSource(50420U);
    msg.setSourceEntity(147U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(18U);
    msg.req_id = 9738U;
    msg.destination.assign("MOBBZVKGDEDDCSATCPYWEOJPYXDUPTRMPOALIFCWHWIXYYFRUEJKRBGYUSJTOKHNHQAECAIELFCPARQIVUNRPWSBRROVGAOLWXUWFOPSLKCDPFVJYBBILHRSAKMMZMETGWNVDEPFVCKGBZEFUJTVLJMGAIVIQROSGZXDLJI");
    msg.timeout = 0.990379749413;
    msg.sms_text.assign("DKNQVJECMTUMBQQNMEFYFULVNXWERYOVTMAVFAZZUTJCCVKHGZIDWYMRDPBPGP");

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
    msg.setTimeStamp(0.041356176491);
    msg.setSource(20334U);
    msg.setSourceEntity(122U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(221U);
    msg.req_id = 22235U;
    msg.destination.assign("OWFRATKHGMYTESLLVFIKINGFKVETTWFYDSIJECJGVXPKCUIZQSILXANENMDMVAZMLTMOFRTMDQFWQUZHZFIETNSOESPXVKZCRGCDVHTCPWQPSJLUDONJQSRAQICJNGCGAGYFZKYBUKBDSPBJNHXVCJXKEJOYFZOMGHCPLJRJUVBYRSYWUXWMWQAZBOMZHPCARWBGERNUELDZQDKSVBNHLAVOBQHXDILUBGEPAW");
    msg.timeout = 0.0664804953081;
    msg.sms_text.assign("GADRCHMKHLETXGUWFBINKPFPPQZJDRNTOYXNPRIJJARTPIJDPGCTCIHNDHKYORXHBWOKSIVBDNQQQWQFMUBYOGSZYUSDKKROSTZNQLRFCSHIJJLCOUUGOVVSHZTXNMYZLKMLTSBYEXSVZOG");

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
    msg.setTimeStamp(0.627091502789);
    msg.setSource(41597U);
    msg.setSourceEntity(149U);
    msg.setDestination(47674U);
    msg.setDestinationEntity(175U);
    msg.req_id = 12132U;
    msg.status = 89U;
    msg.info.assign("PINLZKIJAGCIUCXFNVVOUXHRFTSKGJHENEBYVHDAOAOYKOXSBJSAQYZBVNELZJDJUIOHULMXNICNIVCFEPAMDPMQGNDFGPLWEVMECTKHUTMTTWPVQRUQCGBSMQPNSCLJLBQRHSBPFISOTJEGTZGUQATRHRYXBCUZFWASJIGAELYYCOZDOXZKIFVMWRODLIYKQCMMTPXMDZQLBUWODU");

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
    msg.setTimeStamp(0.0977118592361);
    msg.setSource(35779U);
    msg.setSourceEntity(130U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(214U);
    msg.req_id = 63533U;
    msg.status = 240U;
    msg.info.assign("HYDAQJIYUROVKICYJCRMXTJZRRWJAPZXXEHWLKWEBGWLYDHMVUKUBHQSEQVTZBCCWVDAUGSPIJNTGTXJFZETZYCZQQLWOQXPGWNBYENYMIPKJVFNMTTSPPPEDTCQKWOMUGNONGSHLXGYVK");

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
    msg.setTimeStamp(0.114861363417);
    msg.setSource(44302U);
    msg.setSourceEntity(236U);
    msg.setDestination(37109U);
    msg.setDestinationEntity(77U);
    msg.req_id = 52366U;
    msg.status = 211U;
    msg.info.assign("RHRQBQQSUIMFLUTZKKYROLQRIKSRWYNJHZEDPFKCPTHOEYETHCTCKJCSHTOWVKUIKNXIALZYIFXWMYOVVKGHQAVQXIDTJGDVRAMEAYHZSZFUYBWZMALUGJESLVPWQJZDAYLAWPDJWPHGBUNKPVXFATETGISNTTOOOJMSPUCLSXVNGOGYBCBMIDRRBJLFMHEXEEFJDVSNAUKPFBIXR");

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
    msg.setTimeStamp(0.38058068815);
    msg.setSource(22658U);
    msg.setSourceEntity(26U);
    msg.setDestination(50609U);
    msg.setDestinationEntity(226U);
    msg.state = 232U;

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
    msg.setTimeStamp(0.149198785561);
    msg.setSource(42089U);
    msg.setSourceEntity(208U);
    msg.setDestination(6552U);
    msg.setDestinationEntity(11U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.00163506624202);
    msg.setSource(55700U);
    msg.setSourceEntity(150U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(224U);
    msg.state = 72U;

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
    msg.setTimeStamp(0.692911629855);
    msg.setSource(12599U);
    msg.setSourceEntity(157U);
    msg.setDestination(21927U);
    msg.setDestinationEntity(22U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.984767540201);
    msg.setSource(26898U);
    msg.setSourceEntity(85U);
    msg.setDestination(30997U);
    msg.setDestinationEntity(0U);
    msg.state = 146U;

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
    msg.setTimeStamp(0.914144117055);
    msg.setSource(44511U);
    msg.setSourceEntity(241U);
    msg.setDestination(27273U);
    msg.setDestinationEntity(8U);
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
    IMC::Abort msg;
    msg.setTimeStamp(0.179698889665);
    msg.setSource(41210U);
    msg.setSourceEntity(201U);
    msg.setDestination(54187U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.949985683484);
    msg.setSource(61504U);
    msg.setSourceEntity(200U);
    msg.setDestination(5286U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.171816044471);
    msg.setSource(63056U);
    msg.setSourceEntity(97U);
    msg.setDestination(5021U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.693926458357);
    msg.setSource(14005U);
    msg.setSourceEntity(71U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("FTMWSWAKZGTMRHQAMUDKPNRHIJZBOEK");
    msg.description.assign("IHGCEPRROZBLJSCHXGZJQKNXWYBSVYMPRKWVJIEFCZCOAQSEFQYMPGNOUJPCVFYYNWFPOPGHLDDIP");
    msg.vnamespace.assign("DQYFHHBDEIOHEBCATSLVFEUCDTSGIMF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CQWZQZBZGRAYWMYOEXDLGODWPMQNEBGJXCXEDFTFGFQCCJHFLLGBIURGFSYLHMCXDPZDPXRNJNHOKSQEJGJTYSIZWUKSKNVDNAZTHHVNUT");
    tmp_msg_0.value.assign("ZDOYSBLXFKWLVZWLTQEOCLLBEOTKSBTCKOOHNHZZJXSRBGREZLHWMLFNNJVVJPHVKRTKAMNMJGTYQIYTLHJJBCUUSIDNPFVUACFIZAVXQMHUDINSQJSGKAFH");
    tmp_msg_0.type = 2U;
    tmp_msg_0.access = 84U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HIYBFMNSCKBXBQWOTLXJKEPIEGCILRFYASKHHGLSZUNNRXYGWJXPLKJCQTCDUNHAECXKOWMFKUBLWKVQMNHVFMKAPETSLONMIHEVOYPWTOBJNGGUIRAMXRCXABZTGIDRBUHWISOYNBFYVQRFXVIKVJORJCQLHZRENPLYYIUGBEUEVAJZFVXYMCTTQJCZSJRQUOZTDMHGGMAZWUPQFZOERQZLYWXWWPVEDUPBITAAFGKDLNJSATDFD");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BPCCLIJXRQQYKONDFVFOVREDTWMNGTBYXXBXSGLRVZNNEWOBGHIJEOZDDFLSPIKFTCRUGYNMTKZUDSMKIHDFDPMJLPAHXWEVTXFIGIWABLBZLARYHZWBYCIQQGGHNZHSTJPWASEOUJYMMHCDNBFVFIUPHJJQVPKHNZVQRYKPASURUDRZJUALSOMOGDYAEVEYTQUZCTMIQWO");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 27430U;
    tmp_tmp_msg_1_0.lat = 0.559269714185;
    tmp_tmp_msg_1_0.lon = 0.403104996368;
    tmp_tmp_msg_1_0.z = 0.330915024538;
    tmp_tmp_msg_1_0.z_units = 139U;
    tmp_tmp_msg_1_0.speed = 0.295444023197;
    tmp_tmp_msg_1_0.speed_units = 137U;
    tmp_tmp_msg_1_0.bearing = 0.655167421809;
    tmp_tmp_msg_1_0.cross_angle = 0.235476761269;
    tmp_tmp_msg_1_0.width = 0.992912919306;
    tmp_tmp_msg_1_0.length = 0.865358629862;
    tmp_tmp_msg_1_0.hstep = 0.671072067127;
    tmp_tmp_msg_1_0.coff = 55U;
    tmp_tmp_msg_1_0.alternation = 248U;
    tmp_tmp_msg_1_0.flags = 17U;
    tmp_tmp_msg_1_0.custom.assign("LNGYUNOADIKCYJTWYVVXKEXUHWXGZVOELQDYGPBYOAPLMGNHTAEF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::HistoricDataQuery tmp_msg_2;
    tmp_msg_2.req_id = 33989U;
    tmp_msg_2.type = 106U;
    tmp_msg_2.max_size = 39751U;
    IMC::HistoricData tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.base_lat = 0.237082427391;
    tmp_tmp_msg_2_0.base_lon = 0.417043199423;
    tmp_tmp_msg_2_0.base_time = 0.771660418459;
    tmp_msg_2.data.set(tmp_tmp_msg_2_0);
    msg.start_actions.push_back(tmp_msg_2);
    IMC::EulerAngles tmp_msg_3;
    tmp_msg_3.time = 0.244011529019;
    tmp_msg_3.phi = 0.887271428208;
    tmp_msg_3.theta = 0.117235262263;
    tmp_msg_3.psi = 0.403716129485;
    tmp_msg_3.psi_magnetic = 0.640049909047;
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
    msg.setTimeStamp(0.200199003304);
    msg.setSource(17084U);
    msg.setSourceEntity(243U);
    msg.setDestination(54977U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("IVKGGIYDPKDBFQUXFAKRRESDIQQKLNBLQFILGFVLOUPDAANOIRXIOQJYKRMZZCHAAZUYDHCVUWSMDJVCHNPZHBTXLNKAJFYTTLLJYTRQWVKATFBEFTPMCPXHIXJJHARYZOYXMRYJVWDOUCQCWMKGYUGBHXBKEWCSKTSSNIIZNRXEAVSBVHBTDMEQGSGEWNMUBXPESTYDUESZPCOSQPJCPZNMGMIOWWLJ");
    msg.description.assign("OPMCSLPMUDCGRTWQEYXYNLLCJIJUNCHLOWVAKZABUXFKZYAKBOYMWJMRGEZVUTHRUDEWDBDTLIRAIQCOCQFZPRNLSZXSDXRAXAKTAAFRGJYOQFSVB");
    msg.vnamespace.assign("ODDFTBFEAFQEAWJEDOVYCVEHROTPCCNBZQUBLTMWYWEFMKJCYUYYIOJRLDZBHWEZWEUHBGJBTWNWTZIRUMXPNBIPCYQKKQMAGUQQLISTXULANIIJTIARDYKVPSGGZPNLLNSPIEOZWQXBGPJCDZHXDFKUVDQXFBCOFHGWFSRXSHWMCOHRG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GMEBNYNUCXJRUFMGJARKHBSRVSPTWWUTMEBPCOQLSNDJPUMAEEGYHLFFJXVZPFRBKBUWLCKJVRENBRPESTQUZSPYMUWLOECURVLWOKWMRZBCZKILYJQEXIDSTIVDKIFVMHFVYJZTMOJHNNWXKFAGIAVIAPWKZKOCHDUESYGANQDYGHQXQBHXUFFWPDXZOOZRGLHTQQLNMSLAOTRTCZIBJVXJKQIEXMADDQHCN");
    tmp_msg_0.value.assign("HPVDULPSHJSEFPLQLNCJTAZMSDFQVDIPXOKQCOSZUQXFQIGOMBDEBEBYGERMJJVUYLZZNMLYACAATCVVXSQZKGZITSQGYBJDWBRMIWSTOFANLTZWRZWVWHMYWOPCEJJKRLRMGEVCDQNKAEUKDAUQSNTRHNKTHNXYPNDOBIPTGIERYSVYHKHWZCFODCMIKRULFIGLBL");
    tmp_msg_0.type = 60U;
    tmp_msg_0.access = 27U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SFWMLVAXPAQLYMJKEZMEBIAMFPJDFOPPQULROLJTLJZHSCRBZCVFTZMQXRBVHOH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("APLMFCPEXAOYCFHFUHQWVVKQVNEBKLNURGGIEITTZSGZPAFHRWDYQKEHGYRSWDRUITRCKZVPDKJCYPYXZKIBXTDGISOLTMJRBGHUZUECSYJCQBXJPLVJVRWQEDTAQSKBUTZAUDBXEPCIWKMNHIVNQCKALXAVEAQYSTBBAJUSNNIHREYDLEQXZVPIYKOLJCDQFLUZM");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 58257U;
    tmp_tmp_msg_1_0.lat = 0.737958055858;
    tmp_tmp_msg_1_0.lon = 0.43496965656;
    tmp_tmp_msg_1_0.z = 0.0582281900847;
    tmp_tmp_msg_1_0.z_units = 227U;
    tmp_tmp_msg_1_0.speed = 0.46239483394;
    tmp_tmp_msg_1_0.speed_units = 206U;
    tmp_tmp_msg_1_0.duration = 29330U;
    tmp_tmp_msg_1_0.radius = 0.555808132636;
    tmp_tmp_msg_1_0.flags = 115U;
    tmp_tmp_msg_1_0.custom.assign("NIFDTISLBHIMMVCBXUIRTPMQWJSXDHHFNUCHIUOOJBVLYEDOEVSKXVOPSNIGJPDT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Temperature tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.930568710403;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::LogBookControl tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.command = 27U;
    tmp_tmp_msg_1_2.htime = 0.592211372769;
    IMC::LogBookEntry tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.type = 247U;
    tmp_tmp_tmp_msg_1_2_0.htime = 0.72953302464;
    tmp_tmp_tmp_msg_1_2_0.context.assign("OOROIDBYNBKZPMRWGZZOKRTRYCIEUSGGZNHASUATWYWCBZUKTIMJXAZWYMXQRYIXFBBMEOPJYPJNQLXQXKKFNNZVENI");
    tmp_tmp_tmp_msg_1_2_0.text.assign("KBLIIYEGUKNTXZOMZFTGPIGUMXXJJUZSGYGRVHTONDJIDXECELUVQLNBBPQSADLPCRCBRVQWYMVAEVOKYEKMCEFZOCDOMJNAKDRRLUDIMAQZDOELYWFRAZFQTRHZIUNTSXIQPSDADKCTCCUVKSWERXMBFHLNNKJJLIPFCTMQKWHWLQDMQXJGFEBAUSJPGHTABWBGHPNXIYXSRNPUOOEFSINAVHYZHFQVWA");
    tmp_tmp_msg_1_2.msg.push_back(tmp_tmp_tmp_msg_1_2_0);
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::LblRange tmp_msg_2;
    tmp_msg_2.id = 214U;
    tmp_msg_2.range = 0.41113107918;
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
    msg.setTimeStamp(0.425441982696);
    msg.setSource(2995U);
    msg.setSourceEntity(5U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("TJXBYNNJNXRBFPMGYFJPDUBGSCYSCVOITAQQWOJYFOKOLVDCFSMDWVROQBFBNLBUPTHQXHLDRFWC");
    msg.description.assign("FWNERIBLDBILHMHPHKTDAEXCRXYZISORXZLYJSPVLAYOOIUYCFTBKCWTEMZJRTWZDSOKPFRYEHBCVXPQMDXYCRKINAZMWENVSQGYUULWUTNMKTIDHLDEAEJISFSHEDKLDL");
    msg.vnamespace.assign("QGJWBCOYGGGMPKWVVVXHYDGOPVYSBSTCFFEUDJQBZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ALMVPLYJARSBDCLZWEZSJTRAOEKVYXIMLMOPTJRHOIXDSSZFAMOYVKWCTWBRHGWHUEEOYWFWHATJUSZHSYRJZJYLNENKDGJWPQBQNDNQWGKDVYNVLFXXUVNDMMBOPUMQSVYGKJPKDVANREKTKCRACKCTITIIXAMQBDIHAZYZLUPBQMUXISNBXOCGXLVED");
    tmp_msg_0.value.assign("PBJUBLCXNRNDWDROXBSQFRIWTFVZPHIHZUHRCGUKLMAYNNDWACMJYPERAHCXHYWJTZGWIZLDPRSVKWSMJCUDBRDYBXTPYTYIIKOWHCHOJLXTNOHCEQKNQEZKZ");
    tmp_msg_0.type = 108U;
    tmp_msg_0.access = 127U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OIIWRVZONSPJUKRMBWMNLDHMVCNBBZMRVSIPWEDUYQJVXXPXUTNCABCXYXULHEWPEKDJHHPLORCRJNQTAFFQKDOKSOGCCQERZVNTDIHIWSXWQFLYBUAGPGZZRDFTVNQCIIYQHGBMGKAJZNNKPXFBDIWJEVPSBGMEYQKPAOPGTUMXWOTUHACJQAAYJOLGKRSEERJLFLWUTXTLVMFJELVYYQ");
    IMC::RelativeState tmp_msg_1;
    tmp_msg_1.s_id.assign("XIWGETBTLHXAQFCMPUMFRFIAPETOTPMXVIFGZBVDPNSEEZWKRLQQNXCFYWADYYXZUJXRICS");
    tmp_msg_1.dist = 0.641519055631;
    tmp_msg_1.err = 0.418944790123;
    tmp_msg_1.ctrl_imp = 0.158623361653;
    tmp_msg_1.rel_dir_x = 0.276418788552;
    tmp_msg_1.rel_dir_y = 0.170906647771;
    tmp_msg_1.rel_dir_z = 0.222687531636;
    tmp_msg_1.err_x = 0.844365989147;
    tmp_msg_1.err_y = 0.964762231749;
    tmp_msg_1.err_z = 0.117259564178;
    tmp_msg_1.rf_err_x = 0.740551413793;
    tmp_msg_1.rf_err_y = 0.34274267085;
    tmp_msg_1.rf_err_z = 0.200328850126;
    tmp_msg_1.rf_err_vx = 0.971473213406;
    tmp_msg_1.rf_err_vy = 0.247937423629;
    tmp_msg_1.rf_err_vz = 0.564967592228;
    tmp_msg_1.ss_x = 0.253705048655;
    tmp_msg_1.ss_y = 0.943772616974;
    tmp_msg_1.ss_z = 0.0396700388351;
    tmp_msg_1.virt_err_x = 0.791072860027;
    tmp_msg_1.virt_err_y = 0.607123112259;
    tmp_msg_1.virt_err_z = 0.00724135096006;
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
    msg.setTimeStamp(0.99152636739);
    msg.setSource(60606U);
    msg.setSourceEntity(51U);
    msg.setDestination(26858U);
    msg.setDestinationEntity(29U);
    msg.maneuver_id.assign("RGYGZOAKSLCXZVSXAJPXOUKWONYPVXRGSJIYIRATUMGKQZMOICUUYVSVL");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 42541U;
    tmp_msg_0.control_ent = 205U;
    tmp_msg_0.timeout = 0.236677455943;
    tmp_msg_0.loiter_radius = 0.618066083474;
    tmp_msg_0.altitude_interval = 0.24870098146;
    msg.data.set(tmp_msg_0);
    IMC::Event tmp_msg_1;
    tmp_msg_1.topic.assign("ECGKSKXTEDJJUHWWIMHCZCUCBAIBKIVHKQFLJPSBDRYYOJYGQTGJLXZLELZZNWWNTKIFBEJMZRFGABVVVFNRHIDMDGQWVYNOLPLWYHFSRPNHLOAPYSLRXKNAPIHVQCGKFSIWQEKNWXXRMQJVZNYCOKAMHOXLETBWZTUPYSRU");
    tmp_msg_1.data.assign("JECBNCHDXVKCYHIHBTANFEFKFDPXVNNNWMWMFFMSSBRAGXOAMJXVDJKPMXYSUTQGRPFUGUBMAJZGNEHXQHHGYOZBVETTRMQFZCKTEWRLKCVLGLLHYOZZLZVFYAIPRYTJHQOEROSZ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexPlan tmp_msg_2;
    tmp_msg_2.reactor.assign("MVNJKSPSVYDULBDRHKLMLEEBEJRQUFCQAXXTCXBFANIGROLTZMSXLOGJTOQGKDYKXAFTHCHRHKGZTWPHAORQQVUHXZGSGZITDPQRVYFSWCCWFMCBUABNIGFPANOYTIJJOXJPUFACRLSGDEOOGJDSBIXQTORYZMWFIQLMAEEXYUKQUKMIRDWAYZNEVKPOZMT");
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
    msg.setTimeStamp(0.145012873493);
    msg.setSource(33939U);
    msg.setSourceEntity(183U);
    msg.setDestination(13432U);
    msg.setDestinationEntity(147U);
    msg.maneuver_id.assign("PMVZTRHECMQXAPGAXYEMTK");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.486379558913;
    tmp_msg_0.lon = 0.765799005118;
    tmp_msg_0.z = 0.0091742538421;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.speed = 0.389500782161;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.custom.assign("ETMUDPTAEJWLIGGSBIXSFBIQVCOLBXFOYHWCNUKQRYGIYHPANIDPNGEAXXEDWGGQJEVADNJWOECEYWZVBTDMPFPPKBCJTRVSPTVVSRFKANUDTPKCUDXOLBNSJHTKQOQJWFFULIRPUXRRLNRXCZWMSAFSJXCIHKRYVL");
    msg.data.set(tmp_msg_0);
    IMC::Temperature tmp_msg_1;
    tmp_msg_1.value = 0.568977694566;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredVelocity tmp_msg_2;
    tmp_msg_2.u = 0.553380858988;
    tmp_msg_2.v = 0.21353249186;
    tmp_msg_2.w = 0.232993639784;
    tmp_msg_2.p = 0.213087114459;
    tmp_msg_2.q = 0.128684793728;
    tmp_msg_2.r = 0.699302235521;
    tmp_msg_2.flags = 37U;
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
    msg.setTimeStamp(0.0452355606193);
    msg.setSource(23928U);
    msg.setSourceEntity(158U);
    msg.setDestination(36926U);
    msg.setDestinationEntity(252U);
    msg.maneuver_id.assign("PCGWIZWMUUKXTZOHFFJBISIUOMFTWWHYAXEXLQFENNXHPCOQCPSXYQYYQRKDSFFQADBWHLXTYSSJHAKGUZVAOTQEZAQZNRHOTUXDRIWQCORWTVBELZSBPZLGKZBGXYPZNWVUGNDFTSLOHKRJKIGOBMYLMLQMJFPNTUVQHEMCVBUPNAAFCELCRGDXVWMXHGIAYETBIADGHRDMNERLOFUJYKJZNBVGDCIPKKOMDNCPRIV");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 60911U;
    tmp_msg_0.lat = 0.372874115744;
    tmp_msg_0.lon = 0.117123581278;
    tmp_msg_0.z = 0.161296002552;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.speed = 0.0849408854344;
    tmp_msg_0.speed_units = 248U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.64206482238;
    tmp_tmp_msg_0_0.y = 0.423926635436;
    tmp_tmp_msg_0_0.z = 0.0948906598193;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("DJJBALJSHLJVYQNJXUEBEIHCKMWWQQOGOKABWRWSOGQ");
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
    msg.setTimeStamp(0.564187085508);
    msg.setSource(20099U);
    msg.setSourceEntity(39U);
    msg.setDestination(16298U);
    msg.setDestinationEntity(215U);
    msg.source_man.assign("IENSVOFOBVUDBRVZCKACPPZJUCLOTEVMNZECMAZGLJIZACQVFRETYDQAKRDFYUCSFLKJNJWCGDCGVFZMOWQQBKPO");
    msg.dest_man.assign("YBNCKRJWZUSIHWDLOQCGAMGZLCTLNORFLSYVHGNJLAXTTYQUNOYDRJYGWCZCBOKQXNELFSCULAOMQDKIFSDYTKJXCQUNBNKREDGPYXZOZFMZDMEAOTLJJBYJPDHGVBAMRWXPSTTXAPLBHSRDNIPVREHIBUHPWKBGKHWNUVZUMGRQCELCMHWVTNYOPFIWKVEZFT");
    msg.conditions.assign("CUABPCMHZDWAARQXZIBOJNPOCDQURVXBOQJNPGNDMRRZFKTIEEWPNBTYJHFTEYCD");

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
    msg.setTimeStamp(0.372436465312);
    msg.setSource(50448U);
    msg.setSourceEntity(34U);
    msg.setDestination(27795U);
    msg.setDestinationEntity(71U);
    msg.source_man.assign("OXMQURCKTXIJQUL");
    msg.dest_man.assign("MAMCCVMWJUDHRYQIMQJNCKQGMFFJLKHSOJGBOXJUWVHLOUEVLRYDTAPFAFZORZTSINTIXHLCEBIBEGHPQDYAFMLDZPYTUVDSIURLVPJKHGCXAGALHKUETOO");
    msg.conditions.assign("QKEAGDJGGAVSPXQYXUXXVTRZBYCRUNGWEPKBVJMFVTQZXRHTWCFSECMTIHZFLFMHMFDMPFYGGQCYXTKBFPQUKDMOSSUCGVJIRVPNODNKSNHPLFOYPPLZRSINAZAZPXDDJBZWAUIYWLZWDRYXFKCHLSRCWTUAQKUJGZGYWLOSMKUCSIYOHBIUEMEBTCIXVRUIVRNJBYLXMQQLBEZNGTKQDQARBOLWNJOMOTTNPJSABFVHEAJLVKHIHWNEIAOHCE");

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
    msg.setTimeStamp(0.85070674919);
    msg.setSource(43751U);
    msg.setSourceEntity(7U);
    msg.setDestination(49939U);
    msg.setDestinationEntity(11U);
    msg.source_man.assign("CYOCPVSHKMXLNAJADMDUCOGQCJRVNTLHUGYMEKXZEMLZTYKOPRDPPOCRFHHWXAIBQRWXKTDVTMNBQMIZYHMPCASMQYAUIZPGNTIKTYEKLHYXAUTAEMEPJLCZFTBORHFNUDVOJCHKXJGPOQVAXVNQURDJPBVSTISBFWRJRWZV");
    msg.dest_man.assign("TFPGCGEFPTBCOSEQPVAFIMEYSTDIYLMCGRYITPXRTQJRVXROHLWSOGDXANSOUEEQKMTRTZUYQNZABYDOVRAQSMCTDKJEMCGSAPZHYHAYFFJASLWCVPIIPRZVBGLOXDXZJHGNHUJZHTXUWFCBWNJWMERKMQONKJKVZQHOBOEBQHFHAPKCXUXKZWNFWJSYVLRAVSBBMKIWLPXNXCFGDAOPLEBEDUBKULKQLUNSUYMLFHIDDIGDTWN");
    msg.conditions.assign("DBVKEWHCRSMQCLZTTBHEUGONUADSLGOMYJUAIBGMJHCGTPSMOEQFHQLRZKWHGXCMWUZZTIQRGNYHNLLBFKNBNPTVKDIWVJCABHIGYKPPNFDTQHWADCXJYAWFANBTTLDZRVBSVKIQBNXDPKDJFOPXGJFOPRQCLMCPFZEOFDCSRGIUYOWNEPRUWULZXVZYYFUWSTAJXZIZRKVBULIEDTIEJKRSXQLWYAXSSJVUVHAVNYOJMEGXHPCMYF");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 33533U;
    tmp_msg_0.lat = 0.793159406102;
    tmp_msg_0.lon = 0.768402259433;
    tmp_msg_0.z = 0.608865949247;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.speed = 0.522485008012;
    tmp_msg_0.speed_units = 1U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.345551268529;
    tmp_tmp_msg_0_0.y = 0.631280550038;
    tmp_tmp_msg_0_0.z = 0.35392359426;
    tmp_tmp_msg_0_0.t = 0.655882871562;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("DCEJRMPACWPQJYIHUYNVTVEMYTQCZDVCQZNGTLEZQHXHEHXMHWVROAKJINVBSBXATGFRJQROZKLIBECLRFDYVSMRAVFYGAUFKCCGHQVJQOZDTDPAXEPBQUFIPLSBIKQLMWKETKDRGEIJJYODBTCZROCSOIOGFJNKWTPKSEHKMPMDMOYSNBGPQNPZZSAFAOJXYRCVFXUNFSUVLNLLDNLHGWPO");
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
    msg.setTimeStamp(0.857472242727);
    msg.setSource(50242U);
    msg.setSourceEntity(14U);
    msg.setDestination(36278U);
    msg.setDestinationEntity(192U);
    msg.command = 135U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("COXTDVQQBCXALBMODLHOQQTCKPMDAXPSCAFBLXIRKJJFDPPFNNJELOVEFBSEICDTGNHWYQNHTOCHMPMHXRBWKYVSDWVNGNBZUAUWZKLOURQAERJGHRVVZXZHKIWTVTMDGLTSGPYVJAGXNHUKCUFCRKZUNYENTMJTIGUTZEBXBWDYEQMJFAYRVJDAZYIQUI");
    tmp_msg_0.description.assign("MJMFDUOFVJWZVCFQDNHFUAFYMNAXCBQQBSWTSLASNIKANQTTLZEW");
    tmp_msg_0.vnamespace.assign("XNLMJXDHDPWGYKQQYPAIYUREDQTGCXWZTQHKNNFMPNYUJSJHHSRRDQOWWGWAZEQGEDHCVZPINVABJSLVYTFCTFYMKJOLXFBWOOUZTCBCESVTOFAOPFKOVZEFGDNPRCEHUSHPAGFMFSKODYIEIKRZSCDIGZGOPWBKLXNKDWKXNFZDRHRBUVQCUVARIXVNCLOXZGUECAREBTJMIMLLBYXASTLIMIARVIWQNUXGJPKHMMTBQUBSWJZJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YFNFMKUTYOEMYVRNDGUUAAYPSLLEFDCCQJGWJZZGANIWTOCSZTRFEQRACBXXUSTKWGKOUOKSVEGAXDICXMEWRSCENPAHMPYIIGCDESXSQAHBOGNDYRNIIMNJWQHELGJXIVLPFDTTLCHIOHBJWQWBBHRKABSBVBTDMMMPZPGDZPWULFQTXFIDBTZ");
    tmp_tmp_msg_0_0.value.assign("RBKWAUCYNTNCTRUUDQZMCZEYHZKLCHAMHOYYVLHTNBJBOSFJXMSXDMAPMVZAFLPSJITTDYINNKGVMRPKIHLXFQFTEVBPIAWAUKGOTHBDDHLRMFISKOZRBTLZBDEWXFIWYAEEYAXWZKXCBUEXPAWUNQFIEQGUJJESJIOWNVYFEGLQNMEOGOQIZPGQWHLUNDRRXXSSXFOZTCSMDKODIUJPBPWGAMQSDTVJCVVZRUFCCROJVKWGQQKYH");
    tmp_tmp_msg_0_0.type = 92U;
    tmp_tmp_msg_0_0.access = 125U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KUMYJNSOTLELVCEKEDIWFXSKFSNPLIWQHJEHKPHEERMUAIYVSCVSBIBOMSPXHONXQRBZYWCYIJYOIQYJWCPFUKZNIDOGUZLATZYRPXONGARDKRMQCSOMTTLWBOAZCSZCPLQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PWWSMDZBZOTIXGCIWZAOMRYSGRJFOKWLHVTNIMZMEMEWLDELEPPCVYTJGUKHPGDQFEYGNRPBPPLHUQMXFWXGWJCDCRMBREKKHUSXNUJIFSNBNWAS");
    IMC::Takeoff tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0854542627305;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0311377499906;
    tmp_tmp_tmp_msg_0_1_0.z = 0.771219416958;
    tmp_tmp_tmp_msg_0_1_0.z_units = 171U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.578774685008;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 21U;
    tmp_tmp_tmp_msg_0_1_0.takeoff_pitch = 0.46243140135;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XCTNLCYZFXIGIOYOXCFAGDQHBKTEICM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LCXRTQKXVHNUGL");
    tmp_tmp_msg_0_2.dest_man.assign("AKLHPOYSSDNGAQAYYOWWHNSLEGJHRFBGXKWWCETPZQXIFNRQPLQVMUCOXIZLABDDZQWYSHHFVBMJHBCGMUAMHRWKRBAHJDTXWXGKFPZKLYPUCIMSIGHODYZTJBALJVQSUNPLGZKDREITJVFFZEI");
    tmp_tmp_msg_0_2.conditions.assign("GXMXJROLIYKXHWHOUZSLPBSCEFGUVQJLZUNGSPOHNBRWFWZPYNDVQQLNFJDGMOTTFU");
    IMC::FollowSystem tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.system = 16643U;
    tmp_tmp_tmp_msg_0_2_0.duration = 9031U;
    tmp_tmp_tmp_msg_0_2_0.speed = 0.962197042212;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 44U;
    tmp_tmp_tmp_msg_0_2_0.x = 0.101611475557;
    tmp_tmp_tmp_msg_0_2_0.y = 0.30210953627;
    tmp_tmp_tmp_msg_0_2_0.z = 0.540473744038;
    tmp_tmp_tmp_msg_0_2_0.z_units = 106U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.491417524351);
    msg.setSource(27047U);
    msg.setSourceEntity(252U);
    msg.setDestination(27005U);
    msg.setDestinationEntity(35U);
    msg.command = 121U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OVXQYUOOMAVXHQQPCVTEYZHWBO");
    tmp_msg_0.description.assign("LNHPHRHKCCXQSBVEH");
    tmp_msg_0.vnamespace.assign("EXAVLOCQEPMXIVYXNEIUTAHAPEMLWYVQXYHOQMJYHLANKOUFZWELRHDKRTBTBTRXEZXOFGESRQGCGWUOSVWXHCSHMFJFMNYQKMGKTSAGWJKLZGDNHQQLBONLVXOQBLWKDVS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZSUHJUBRTUXZQYINZNUQGHONPDFXPTATFFIVXQICZYQJFDOAXTQEYWLEFMAPBVAHGQTGFEPEXKNBWGKEKGGXENKORNQTLRSZTXBFYIVPDOVMUGVZWALSKXCCVBGZJBMWYFIJNIHIWNHQKVOPVVYJEORCEIUVDHLRCRHXLJLDRMCBBLABJYMSIFSNJTDQOWKSRREPTOSDDS");
    tmp_tmp_msg_0_0.value.assign("JQRAHJENQNDUYOCTYZCTSWXQUGQNRUPBAOCOKGIVFYTMBZSSIKZXWEDRKJXGEWOKIDPWISWQTKMWRYJNBCFKDTRIDFLEYWGGDAHPHMBNZMLKXAJPEPHEVBZR");
    tmp_tmp_msg_0_0.type = 188U;
    tmp_tmp_msg_0_0.access = 57U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ETFAKASDEPMPNJMKSICSDQDXUIJSCWYYGBFYYHOTUVOERMCZABXRMXKUYTEYRHCRMVZMWNKLGWWTULNFEXS");
    IMC::UamRxRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 64262U;
    tmp_tmp_msg_0_1.sys.assign("MECTWFJWXVSIYVYLNGFBWPQOQDGNKOVMOMLUQFVTFGIXHIGDVMLFMHTXUSBYUWJ");
    tmp_tmp_msg_0_1.value = 0.221799854542;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeading tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.521284027005;
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
    msg.setTimeStamp(0.434271689456);
    msg.setSource(2627U);
    msg.setSourceEntity(6U);
    msg.setDestination(63032U);
    msg.setDestinationEntity(26U);
    msg.command = 122U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TFJBKFRUSUFFVCBZMVQTLHZTENSWGKBCPHNSYJYDZCKFNVGOBOBEGWULKAPXL");
    tmp_msg_0.description.assign("OKDIOBSHWYDSXDUCCBHDFWGIVPXJDNKASXMFEIRGOTLRGCQEDMFBVVJDQ");
    tmp_msg_0.vnamespace.assign("QEJNXDVQRMVTAJCYGUDOQHHKCRDHUILOWNVAIDGAKGABRKCZTJFAJVE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WMZHNJJNGOGCLAFGYYVWSYCSTWDFUUAFBZIKWVPDKLCXGPHHCBDTHUZTIMVQLWXAJJZCDIJIK");
    tmp_tmp_msg_0_0.value.assign("ORIPEEYIXFSYJFEGNYXGYYELWMTCLMPVTLLAVFBUMYLHMRBSZNIVHUMVDDZGOCVIDBZWGCBDCEAULPUQRVYDIPYFQJKZNMJMNBAQ");
    tmp_tmp_msg_0_0.type = 186U;
    tmp_tmp_msg_0_0.access = 65U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CVFKNVMBDQMESZTDCLEUCLYAJZMUSNKCKJKYTWSZFILXJTJRMCUASTZPOERNRIEINGPAQZHVDKJLYJIWBAHDSGYFHYNYFLPKAXXRHYKQEMRBVUOFOWBLTYZXAWMIJFQIQQHPGRABLCHUDFIANGJXVWIGOGRPBUVBCQTYCNJAENBRMSLWEWWIDWDYDPGMSPOJTKOXCOFUVGMXTVXUHHXZRTZV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NBHLYQLFTKWBJZOJIVAOLHTUUVXVEEIOQEQYPCGXONBCBOAMDIUUVRGZNDQKSDLHYSXIYKAAWZGAUKMZDLPFLLZYNFKLRTPSGKUQFMVCUWUDRSCAPVTQKDKYWPMCPHXNXHVEZOVRZ");
    tmp_tmp_msg_0_1.dest_man.assign("ELBEFXVKYVVFZUAUORLRDCJUCCQSMFUCWCH");
    tmp_tmp_msg_0_1.conditions.assign("EJHPOEEDAZYLLDJPBSATAVBEVRMXRAFWYKRTAZUCCJBBIPYUZVDKXDXNZQYRLHITRCHMFOPSZFOIIWINVJJHGGMXKSQWFYJFUTSEQSLQMQIRXKLNTDOOGZPOAISNEVPBITHFRLJJUOWNDTU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.00909066755575);
    msg.setSource(45338U);
    msg.setSourceEntity(184U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(95U);
    msg.state = 91U;
    msg.plan_id.assign("VONPOANVSBWVUFPPVIJJDEHYLGWGMLKDPMCAAZXVUQMMRZGJITLAPAZZMTKCFXQBDSIGNQIRTOSZKNEFUPENHLTWTRAWEUQHLENXHYNUBFXLQIMYYDEXTAOJUQXGUHSGZLNZYQCBWVXRILDUDCMNKNAEPYJSXJWBBZSOLSOHYJMRB");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.336711465865);
    msg.setSource(61095U);
    msg.setSourceEntity(138U);
    msg.setDestination(15457U);
    msg.setDestinationEntity(241U);
    msg.state = 34U;
    msg.plan_id.assign("YKSHCMUDQYHORQGFQLNJDLUPVENISBSOROQEZETDTFVILDYOXLXJKZSAEBWBWJBISVNOWBRMNCTDVKAKGCBVFYCJDCWLUVETUAIZWSSPAYAMBQOQXTCXWCWSRIIXIGXUNBGHJHOGUPJUYFHLTNCPEJFPMRPKNEJFCPBIFNVWOAYDMVMUIXXLPGAJUTQFTHQZJBVMZFMZHZYNHGGERADZKRFAKIZWVGXPELQKCRWORPLTKXUMM");
    msg.comm_level = 115U;

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
    msg.setTimeStamp(0.25264142628);
    msg.setSource(1947U);
    msg.setSourceEntity(230U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(4U);
    msg.state = 207U;
    msg.plan_id.assign("VKMEZQZDXAVWTVNLMZEIVLJSKYLXJOQXNNOUKTVKGIYEHWZOF");
    msg.comm_level = 148U;

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
    msg.setTimeStamp(0.695372599684);
    msg.setSource(26946U);
    msg.setSourceEntity(29U);
    msg.setDestination(47049U);
    msg.setDestinationEntity(153U);
    msg.type = 232U;
    msg.op = 44U;
    msg.request_id = 22293U;
    msg.plan_id.assign("SJTMJOFQENBFQDFGNXJJVKSCMIKJUNGEHMDWYVUZDSRXVNZONNLWZITALZYT");
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("MPIIWCYVCAEOCWLBQTXGMFLBARBZQMGCXIAUKZBTYZWLBQISGVBZZUFOFPXLAIQHKWDYRNKOHGNEQXMCDVCXJGMZPFLVDPLWKKOYRERTXLHOXERFKPABJVQMJUJYISGNRTMLPHCWZEFBTETSUHTOWANSFBJJSTUKMDVWPNMGEITNQ");
    tmp_msg_0.x = 0.743875648754;
    tmp_msg_0.y = 0.349061416906;
    tmp_msg_0.z = 0.846744325143;
    tmp_msg_0.n = 0.812893814367;
    tmp_msg_0.e = 0.489239166952;
    tmp_msg_0.d = 0.0778029201046;
    tmp_msg_0.phi = 0.42565031697;
    tmp_msg_0.theta = 0.245472875643;
    tmp_msg_0.psi = 0.362891344088;
    tmp_msg_0.accuracy = 0.660476471;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RHISSBGOECYWPDXYQBZW");

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
    msg.setTimeStamp(0.936833911195);
    msg.setSource(38639U);
    msg.setSourceEntity(162U);
    msg.setDestination(12033U);
    msg.setDestinationEntity(167U);
    msg.type = 179U;
    msg.op = 42U;
    msg.request_id = 25833U;
    msg.plan_id.assign("RWMZNFMJVZXWBWXLGLMUCYMSBNTLWQGSYFGPERKRMQPWNZGGJWUILZYAFVOUHQMGKFGLXWCCBQNUOKHMCEZXHUBQUSIIREZIFUKJPLXBBITUDPMQVRDAF");
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 772U;
    tmp_msg_0.comm_mean = 81U;
    tmp_msg_0.destination.assign("TNIRVAXPFDLQRELUIGIIAZFAKWFOEOQBMFKWKCHHBDRRHJUAZXXVJYMQNY");
    tmp_msg_0.deadline = 0.580489628877;
    tmp_msg_0.data_mode = 134U;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.655417620477;
    tmp_tmp_msg_0_0.z_units = 228U;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("GYCUQAAFOGUTOPDMOJQFKENNMKKTNFIBWXXNKMNQOAOVRJOVJQZRSDZZTDAWFQLLVXEDDUYSPYDAWVFPXBTLNUHJBGDXEAQIURHZQIOFFIYDNPFLZGJCSIDWBGAVHMCMCLIIEESHAGNTXEOYLHCTWWJMTUJFIXTKJYGWUXRRGBVQVERSHGRLSOACFYDCYWYYSLRENIPSPKZJ");
    const char tmp_tmp_msg_0_1[] = {-102, 104, 18, 48, 102, 98, -62, -103, -112, 91, 51, 83, 49, 26, 38, 16, 71, -51, 37, 104, 121, -98, 69, 18, 90, 42, 111, -115, 118, 78, -11, 36, 108, 27, -61, 82, 32, -16, -45, -116, -5, -87, 64, 56, 108, 125, -66, -16, 43, -75, -52, -105, 96, 100, -34, -23, -49, 36, -114, 106, -15, 44, 9, -78, 38, -117, 11, -83, -90, -99, -94, -102, -109, -35, 90, -49, -101, -50, 75, 10, 105, 6, 21, -81, -31, 117, 66, -48, -80, -12, -22, -4, 98, 32, -20, -90, -56, -67, 125, 40, -9, 126, -120, 64, 31, -53, -107, 27, 2, -104, 9, -72, 116, 51, -27, -18, -39, 105, -77, 68, -110, 105, -98, -118, 74, -53, -44, -52, -17, 71, -93, -68, -124, 67, 97, -5, -64, -1, 111, -92, 13, 122, 70, 95, 92, -96};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UICIMAXIIDBLFIMSVTYUARQWXPIPYZFKANXXRWFVFSOQLUWELXNGYOZGSDSX");

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
    msg.setTimeStamp(0.0768898829612);
    msg.setSource(3040U);
    msg.setSourceEntity(231U);
    msg.setDestination(31963U);
    msg.setDestinationEntity(44U);
    msg.type = 73U;
    msg.op = 118U;
    msg.request_id = 44995U;
    msg.plan_id.assign("NKFVJXFASWMMRRKJKEINFBKMGXTEUOALTDHDMELIRVOEPQVTQTAAIVCURNWPNZFTIHDNTVGOOGAHCLXSUQEYUKJFJRSXEOEPSLNUPMXQZBTDNIJ");
    IMC::Pulse tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JTZHDFBSCWHDMCPRFFHYCRFVKHVCJRTOSPMMLMEDKWQCNZXQBQOXTODGNVFTJUQLKBIUHLPKDCTURXYVNTWJJKQRNXWCSAKAWDTMKPYNVIMLZYANWEUZABPRRASXIGGVGKXFKMVIEZJDG");

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
    msg.setTimeStamp(0.84146112024);
    msg.setSource(26449U);
    msg.setSourceEntity(250U);
    msg.setDestination(46900U);
    msg.setDestinationEntity(5U);
    msg.plan_count = 61259U;
    msg.plan_size = 3384379718U;
    msg.change_time = 0.690916484997;
    msg.change_sid = 24785U;
    msg.change_sname.assign("BEPNYLULIQUIZMPHFNMEXSAGIKHBTMTRWMEXKDHENRBTSFFXVJKFPOCDNPOELEVXWSEKZYJHAXBUJUSZVSZVQJYBUOITGTMNDBSJYWIPUOCOMJLOEWTXMZCFYWRSAVNMN");
    const char tmp_msg_0[] = {110, -90, -9, -83, 59, -61, 15, 123, 14, -55, -33, 122, -112, -66, 40, -53, 73, -94, 68, 37, 97, 121, 8, 84, 60, 9, -61, -26, 41, -12, 79, 56, -22, -95, -118, -85, -79, -121, -87, -123, -116, 123, -97, 69, 114, -108, 116, 13, 124, -63, 7, -103, 81, 13, 64, -27, 90, -110, 86, -13, -54, 89, -121, 4, 53, -64, 108, -64, 17, 1, 109, -55, -72, 90, 28, -88, 95, -104, -9, 73, 81, -27, 88, 21, -9, 3, 82, 29, 5, -42, 57, 69, -55, -10, 93, 2, -99, 53, 86, -11, -51, -15, 84, -79, -95, -78, -5, 109, 49, 49, 29, 55, 50, 88, -34, -114, 111, -44, 58, -77, -64, -43, 19, 74, 108, 26, -126, 123, -4, 20, 68, 119, 36, 91, -8, -7, -16, 93, -39, 4, 102, 103, 124, -83, 83, 113, -8, 17, -80, 103, 65, -30, 120, 28, -84, 31, -20, 3, 111, -18, -38, 57, -68, 98, 83, 42, 122, 96, -32, -15, -57, -78, 53, -83};
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
    msg.setTimeStamp(0.120467284201);
    msg.setSource(61479U);
    msg.setSourceEntity(248U);
    msg.setDestination(20587U);
    msg.setDestinationEntity(149U);
    msg.plan_count = 61616U;
    msg.plan_size = 4267350954U;
    msg.change_time = 0.489546988361;
    msg.change_sid = 17417U;
    msg.change_sname.assign("BZDGDENTAOFXDAYJWBNCREUNKQJFRLGEOSEQSMUUROVGPIKAJCHYKJOXLSBWJUXBMIKDDOOHRYRBYQGMIFXYMKCTLJEZGBWCFVETAMRMNXPCAEUVPDUNRZNWAEPCIMJGEFOTPWLTCWRVQSUXFLKPZMHSPXVFRAUBOYWKZACLGHHJGQOXLQTAICDHFTAPHIBSUVZYQLSZTJ");
    const char tmp_msg_0[] = {-105, -118, 56, -41, -68, 68, 10, 76, 23, 126, -45, -42, 64, -64, -79, -53, -40, -67, -61, -124, 96, 91, 27, 30, -91, 15, -93, 95, -76, 19, -46, -43, 15, 82, 10, 107, 94, -107, -11, 91, -94, 75, -92, -11, -60, 91, 27, 58, 47, -34, -86, 115, 108, 35, -113, -76, -79, -96, -72, 82, 31, -54, -75, -54, 56, 56, 35, 110, 15, -23};
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
    msg.setTimeStamp(0.0474312443707);
    msg.setSource(38186U);
    msg.setSourceEntity(138U);
    msg.setDestination(19136U);
    msg.setDestinationEntity(145U);
    msg.plan_count = 28994U;
    msg.plan_size = 3668524012U;
    msg.change_time = 0.440868812069;
    msg.change_sid = 1884U;
    msg.change_sname.assign("FUJYJNMURMHYVHVKLUOYRCOPYTECQNDATBCTZKTZFESHOOYHLIMYJKRWKASZCSCYNPTKBBTBHDSEWAELDJ");
    const char tmp_msg_0[] = {-78, -113, 123, -96, 94, 125, 95, -57, 37, 97, 11, 89, 30, 68, -92, 120, 107, 95, 16, -9, 19, 16, 20, 18, -119, -111, -15, 16, 96, 79, -70, -50, 63, 23, -110, -126, 73, -109, -79, 110, 82, 43, -69, 62, -63, 117, 5, -78, 16, -51, -54, 117, 49, 126, 103, -113, -38, 33, 15, 74, -60, -31, -16, -116, -17, 54, 42, 49, -15, 43, -109, 62, 67, -7, 126, -53, -15, 66, -121, -95, 97, 34, -115, 42};
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
    msg.setTimeStamp(0.579129235287);
    msg.setSource(14337U);
    msg.setSourceEntity(156U);
    msg.setDestination(27017U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("WQOUBWBHQNBAVRLAJMEZPJWEEXJJWNLIMMXARFBDCJMCEHUYNTSGEGYJKSFSVRZSLUVSEIQOPOHFHVLVAFAQYAQZQQGPYUAZPRWKVOQDTDXDEWMZGLRULZFXJWWKTKIYDIMCEDNDZNOXOPVITCOKUFLHVRVNETZPMBSXVOKFRIRSIGSWQRC");
    msg.plan_size = 51514U;
    msg.change_time = 0.739206778175;
    msg.change_sid = 31881U;
    msg.change_sname.assign("ZXEVLUJLLFSAXYQTSNGPAJYBZVUCCZEOGMBXYTFUKJWVSYBASHRWLBGEHMIEMBHYJKQFFKUZKIQEFXDMSMWJDFZTDQGXNVNEIJVSONLUOUXOAIOJCESWPORKGDICMTZRQCZBHKALRNTYECANAWDPRAEKMKZFPWWHQPTOTHJVPMWVRVPGDDJBPCFWBI");
    const char tmp_msg_0[] = {63, -111, 90, -71, 17, -104, -62, -61, -66, -10, 34, -75, -120, -124, -53, -58, 97, 19, -93, 43, -23, 38, 26, -14, -8, 38, -42, 82, 70, -126, 77, 94, 113, 68, 39, -71, -78, -77, 94, -6, -79, -21, 68, 16, 33, 111, 45, -101, 26, -108, 32, -43, 17, 73, 52, 70, 122, -82, 3, 66, 63, 77, 104, 59, 79, 56, 64, -127, 124, -61, 54, -52, -21, 27, -52, 25, 21, -125, -128, -108, -28, -112, 112, 18, -47, -56, 49, 93, -57, -77, 56, -71, -52, 92, -47, 87, -73, 90, 103, 74, 6, -85, -81, -15, -34, -125, 113, 90, -17, -119, 90, -112, 87, 8, -72, -34, 59, 125, 62, 4, -107, 74, 106, -11, 107, -10, 83, -45, -11, 70, 99, 23, 46, 5, -42, -98, 46, -90, 104, 70, -73, -97, -36, -41, -86, -46, 61, 43, -110, -48, 85, -52, 108, 50, 98, 65, 125, 72, 91, 8, -91, -43, 70, -11, 26, 54, 15, -128, 98, 0, -95, -33, -90, 90, -70, -26, 59, 115, 67, -119, 117, -48, 49, -33, 41, -3, -36, -61, -69, -127, 114, -40, -29, -52, 22, -4, 39, 114, -89, -45, 102, 60, 16, -2};
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
    msg.setTimeStamp(0.609263439177);
    msg.setSource(63715U);
    msg.setSourceEntity(60U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("NUYUGFQOLVMGSOKVYCQGBGDGNJUJOCRXPWLNVBMSHTMTVJEHEMWXHTDKDIBLCUHILQDPIJDAWSACGMHYPYXNZVMCZIPRRTTMFI");
    msg.plan_size = 34600U;
    msg.change_time = 0.398023047976;
    msg.change_sid = 22729U;
    msg.change_sname.assign("AUEVWKAPORZKZYNXPHGQCKPCVJ");
    const char tmp_msg_0[] = {106, 64, -99, -66, 42, -111, -36, 62, -99, -10, 58, -69, 53, -101, 103, 39, -78, 5, 63, -112, -50, -112, 63, -77, -14, -45, -93, -34, 41, -22, 93, 120, -85, 107, -64, -15, 122, -114, 50, 5, 28, -19, 65, -76, 66, 116, 92, -2, 56, 37, -18, 15, 108, 80, 105, -47, 8, -53, -29, 91, 67, 3, -15, 120, -88, 88, 102, 56, -117, -29, -6, 23, -85, -101, -126, 48, 125, -41, 103, 44, -43, -11, 11, 84, -37, -29, 89, -104, 57, 33, -59, -38, -90, 55, -120, 58, -75, -96, 76, -44, -33, 78, 4, 22, -123, -32, 106, 120, -20, 60, -68, 106, -81, 124, -56, 87, -75, -38, 66, 79, 28, -104, -83, -92, -26, -14, -67, -45, 16, -99, -119, 94, 119, 69, -31, 0, -12, -56, 83, 59, -17, -124, 107, -114, -98, 25, -11, -106, 0, -100, -110, -92, 69, -54, -10, -89, -110, 15, 122, 62, -116, 99, -13, 0, -33, -8, 2, -112, -3, -65, 31, -96, -85, 44, -48, -14, -82, 32, 84, 12};
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
    msg.setTimeStamp(0.307987023437);
    msg.setSource(64567U);
    msg.setSourceEntity(100U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("OUOGMMTOFLNQLCYJKPSZFQAVGXQXHHKNAJJKTQLHQIZUTEYAKAAJHHJNMGVVRAXCOUDPNLYBNUDFZYCRXYQWCIJKGKFFXRNDNRFOIKMTNTDEYVPFHEGBBRSWREVGJESADCIIOEHBITWYFFCWJSZSGXUESBLSNWBBCMWZBCUUUZOICDZ");
    msg.plan_size = 58737U;
    msg.change_time = 0.255547213007;
    msg.change_sid = 3191U;
    msg.change_sname.assign("FATZVZOQZPQUHHOHRUAGWCYMJST");
    const char tmp_msg_0[] = {-94, -74, 125, 102, 23, 51, 82, -70, -57, 118, -81, 18, -33, -93, -107, 112, 95, 27, -22, 66, -100, 124, -14, -126, 30, 67, 66, -90, 80, -8, 120, -117, 121, -108, 84, 101, -35, -56, 66, -27, -4, 1, 118, 21, -109, 103, -126, -27, -54, 4, 70, -49, -39, -113, 90, -110, -31, -26, -101, 40, -97, -86, 56, -109, -10, 79, 5, 38, 22, 98, -87, 103, -54, -74, 79, 71, 112, -107, 97, -69, 12, -112, -51, 63, 83, -67, -5, 30, -105, 113, -49, 6, 20, -47, 40, -77};
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
    msg.setTimeStamp(0.0653485298381);
    msg.setSource(15323U);
    msg.setSourceEntity(246U);
    msg.setDestination(25374U);
    msg.setDestinationEntity(238U);
    msg.type = 27U;
    msg.op = 238U;
    msg.request_id = 47632U;
    msg.plan_id.assign("BHKXDQEQNITFJYQTBPVQYTNMNELDMTXJFHGJDRHEMYLSDOL");
    msg.flags = 12504U;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.853519045922;
    tmp_msg_0.x = 0.245197814546;
    tmp_msg_0.y = 0.0554899717025;
    tmp_msg_0.z = 0.131562392704;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VPVEVGKDJBLDHRAIPOSFABHBNOUEDLMTRJBATTMPTZXSLJGBRYNHPICOWETBQIGBUUCWEKLJMEOUSXZQWYWNIKZGLDJRFAENYRZJDWHVKJDICTSQSXTFFJQLZHVMZRRASQSWHQWXLWNAIVZTXYOSQXFRIUXKYFRCOAXZIEVAUYKUFLGGYJFYVVKLPCCSKKN");

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
    msg.setTimeStamp(0.628103185235);
    msg.setSource(10416U);
    msg.setSourceEntity(169U);
    msg.setDestination(63945U);
    msg.setDestinationEntity(85U);
    msg.type = 234U;
    msg.op = 177U;
    msg.request_id = 46801U;
    msg.plan_id.assign("IPOYGMNASUPOMUVADNWGFGJOZWWFLMETEZUSTGAXJUPEQFNRDYHIVZHYCSEQZPRRRVUIPYYGRSCRJCGUIMDTUIHOYBLKAWSMCZFHVAITRBAYFQLIQLLDTZQKDNNEALBNXFCYEDJHTPJXEWIHQTOMXJXSBRHQOCJPXMECKKLWKXLMMUTDPBVYHZDVWONWRFIQXZUFJSUEBXACOHLSVTYNEOVNKDGVBSCQMZBWSHRDGKBLJQF");
    msg.flags = 51758U;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 178U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BNPWXQSSDQJOXJMUOWTTKFSJMWAYTEANUOHQGLHNWYJXCNUHSYVARW");

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
    msg.setTimeStamp(0.14360127085);
    msg.setSource(42520U);
    msg.setSourceEntity(122U);
    msg.setDestination(10554U);
    msg.setDestinationEntity(242U);
    msg.type = 163U;
    msg.op = 81U;
    msg.request_id = 23918U;
    msg.plan_id.assign("EOMVUWARJFJZILDQAGMJPPQSTYRQHYIFWIJVMSLVAJOFDBFGYVRDLVBITEXSZWJSCKSFXGMNHTVRCRWUBDJELUHNKQIVCYHXTXCLQDZYSNMKBZZQAHXOYYKHQPVPPNAXKUHFUNQQPDTUWOYDWKUGXAWZTE");
    msg.flags = 18250U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.14842536848;
    tmp_msg_0.lon = 0.802818955817;
    tmp_msg_0.z = 0.325977936006;
    tmp_msg_0.z_units = 213U;
    tmp_msg_0.speed = 0.164550951873;
    tmp_msg_0.speed_units = 156U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.252952821727;
    tmp_tmp_msg_0_0.y = 0.815476930652;
    tmp_tmp_msg_0_0.z = 0.842648071841;
    tmp_tmp_msg_0_0.t = 0.0966149483962;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.0622506959695;
    tmp_msg_0.custom.assign("JIMBLBLPMEWY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PVYENJGWSSHJOGRRBQNJKUOXKQYUFTDQTIWFJEKKQGQOVJNVWOSEEDBDMFRZFAVUNZTGOHJMLWSPXAJBRIGLOLNSQXSDFARQZNPARHHIBWGNMILIIXYJAJAYCLBPSCMNKRGPSHEBIBYLWCUMXQNWWTTFVCOBCZIPUEKDVLYIFMZUWRECCNVTHFHISYLMUTQJYVMTMPALQOBKEDUZSLTFPGEXCPEXDGHKDUVRHRDPAMZYBYKVOUTGZAXKXZWAH");

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
    msg.setTimeStamp(0.129580449836);
    msg.setSource(5939U);
    msg.setSourceEntity(239U);
    msg.setDestination(47550U);
    msg.setDestinationEntity(1U);
    msg.state = 205U;
    msg.plan_id.assign("SIKJFCHWOFQQRKXPTFVFGOFGEFPKMALMJGRLCABHMCSSEIWUPENDVFRNBJNPTTVHUJZXEIFBKQKLRBXTXZDUDNPKUSLGAMYRLHYDVYDHAVCYWDSAESYCDWKPOQPZSMQWKSABAJRWYYJOTSBAJVUHOXIKBMAQ");
    msg.plan_eta = -2125624078;
    msg.plan_progress = 0.461178729511;
    msg.man_id.assign("BLVMCTOOAWXQSZCYHCAEEFDFZCSNBOWJLVHKCLEAQGJVTMZDYWDLJTGUVKAZMRCOWMMCAHFBVLWGEMXRSLSV");
    msg.man_type = 17651U;
    msg.man_eta = 681073907;
    msg.last_outcome = 216U;

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
    msg.setTimeStamp(0.584941805595);
    msg.setSource(55055U);
    msg.setSourceEntity(253U);
    msg.setDestination(52867U);
    msg.setDestinationEntity(66U);
    msg.state = 76U;
    msg.plan_id.assign("JRGMSYVKSSKPZGJGJTODHREO");
    msg.plan_eta = -1348833749;
    msg.plan_progress = 0.401330675234;
    msg.man_id.assign("VQHEDTSSMKFIAXWSGFXKLXAYOOQIQCSRSPELXCAJLJSYQWKGQZVXZCAEZUFCNMHMCAOLNBHIHFPTLVCXREYBUEQUZHRFFRCGNJWLWWJYOPGWACNKDTDIWWDIVNYJJIJOXMYIATYMUZTRUORMVPGYQDZODFMOWHUICPMTQGHXXFBZKGDNTXEPVKTTBEHEUVEJVQMSKLPVOKNCGDLBNQBYZLLSBSPFOEFUBTNRGSJPWABDRRIANDZMHAUKUH");
    msg.man_type = 14043U;
    msg.man_eta = -2006406476;
    msg.last_outcome = 135U;

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
    msg.setTimeStamp(0.137556747052);
    msg.setSource(32495U);
    msg.setSourceEntity(204U);
    msg.setDestination(1799U);
    msg.setDestinationEntity(14U);
    msg.state = 242U;
    msg.plan_id.assign("IUYQDGAIYQGNBMWNQAPUKHBVGBNSJTVCYRCJZPKXYQRCMKGVFXLXLONUMEVZOPSVGEZRKIDTQYBZUBECCEVTLTLCKRBTURPSQH");
    msg.plan_eta = -2083601946;
    msg.plan_progress = 0.842555386643;
    msg.man_id.assign("JETVDPKKKRIPOHOSAPDIKCWNIYLKYKUIHZTTSJBEBIAZPYCUMDVVUNLURBDBZXJ");
    msg.man_type = 32593U;
    msg.man_eta = -1441606145;
    msg.last_outcome = 28U;

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
    msg.setTimeStamp(0.418057440115);
    msg.setSource(38119U);
    msg.setSourceEntity(41U);
    msg.setDestination(44299U);
    msg.setDestinationEntity(207U);
    msg.name.assign("SUSRGFBMNZTWWHDRXLGJHBITBZADOCSWWSPKDWILLHNAEITAMJVJPIROEFZTTQULYMIPEQMYONZBSBFRKWGFXJIKVVRZVPJAULMOVENQLZAPEXSSRVXIYU");
    msg.value.assign("JETMMCSTZOYOODBQUNUSKREAESJOKTVHSZNQYCYABMZEZBRNBPBDADOXWGRKVHXLFUUWZLNGZJZDFVCBCKHXXKSPHOIFRUEGREJVNKQBGYFFKVPRYZLTSSZQJJYEAHQNXXTPMRBCDXCLWCQFPFERWIHTZTVYWIWMYUDLPAPIOLMIIEDHSAUJFDDRUACQPNRGCDAAMYXPULNNGCBHMWITWIVJLBTVKJIPLXFVNOMKEOQMQSXGGVGJ");
    msg.type = 90U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.755388499699);
    msg.setSource(1314U);
    msg.setSourceEntity(155U);
    msg.setDestination(28751U);
    msg.setDestinationEntity(158U);
    msg.name.assign("HUNCXXZJZKDYOWQMFTRFKTAHRDEYFZSFZSUPHSNWVIEJTGVQVDAZAZFRAYRPVISLKGBWHMXUV");
    msg.value.assign("POUYKKLIOAAMCYMHJBVLPGIYAZCMBPATHIIWZFRGFPSIGEIVAFXNSAVZJDGITSTMCTTKEYNXWVMIKXXPLHOXQPCYEYNOMQKWCQFRWZUKDDFSQSDCNGRWPBBZQBREBSVRZOXLZNAVBWJUANTPXJTPGMVXYCJXVDGDNOHEZCYZABZRULUTMRQAHMOLXIJKBHKQHTEHRKUJEFQWNHWEVRED");
    msg.type = 251U;
    msg.access = 129U;

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
    msg.setTimeStamp(0.998803367585);
    msg.setSource(56556U);
    msg.setSourceEntity(91U);
    msg.setDestination(20339U);
    msg.setDestinationEntity(254U);
    msg.name.assign("EMXTJITHDBWCVLTGTSNDLIYYHSJRPNICSRZGZFJLMZIGHSXMXGPQDCQMFVZNDRMTEJBQLNSUKESQWRKOKWAJQXNNAZFPHTSYXVQYHLVGCFJDVQUURERFYLOWCMEVIVKQCVHXICHUZGOUZRPAXGXRRAFJTVSZEOHCBROBBZTPNMKUNFAJYOOLYOBOIEFLXTSYFBWZCPAAMPJUBBKYHADXLAWWEQCPSDQBLOAKIUDMTGDGPPEFNUWJUKWHI");
    msg.value.assign("TYCAABURDAXFGGHDXONRZFLAKJOHVQCOSLVVVTNWJUOIRFKTOSLPTZLSEJOCGHJFNCLMQDBOAJCZPXRBGNWELLRUMNSDIBQCQIHBPSDPXGUWXLWHORQMGK");
    msg.type = 159U;
    msg.access = 61U;

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
    msg.setTimeStamp(0.488129459184);
    msg.setSource(30317U);
    msg.setSourceEntity(177U);
    msg.setDestination(34921U);
    msg.setDestinationEntity(4U);
    msg.cmd = 113U;
    msg.op = 242U;
    msg.plan_id.assign("SPKXFCANCOUMIEYSRPYNMDKKPVLLNMKHEIEQARJLGQYAIZJVWTMLMXZUSBLGHZVMDFTORCIBDBOVIWJOWAZTJOSIPBBDHYOGQJCLGNWGZEEUCMEGCJFEFNTSZGNFYPRRLWHJBUBTTDAVZJVXAYUDXGQFCQMAZBSBOJWXISS");
    msg.params.assign("CDTYAWHVNCLNQKJFXLVXJZMPLQIHDWUAOSDEFATKPALWJVFPCYMQKSUPEDTRHMJZMOYFBRRSOFOSYSKHMKFQPKHJYARPGWDVCEHRIECYORHVONIHBKUAXUXQDQMMCZQLQ");

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
    msg.setTimeStamp(0.747557316317);
    msg.setSource(16271U);
    msg.setSourceEntity(118U);
    msg.setDestination(10425U);
    msg.setDestinationEntity(178U);
    msg.cmd = 197U;
    msg.op = 109U;
    msg.plan_id.assign("PDBZEHHQVBDGLFOCFAOKWFTVJNHDYEODUQXIADBXHUHISNJTUSHXZXPDCPUODWLAKTLTCAGIKRQTZMEJMPYMZIGBCIRYKFVWIHBTVTMWSEYNYCNKOVEFORLFWEEQHLMNALXUCXZXYRWOFNRGLUJGECLXDGTRIYJHUQIVJUKNAMMJCDRQQYFHKOVLMPSPMKSGZOSBNRAUJKPDZWRZVXCOBQXBSEJ");
    msg.params.assign("KKYKSLGNANSIWIEKBSDTGIFUGQDAMIYOHHHRIJKOUMPVEOAUFVKMRMQZJHVZ");

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
    msg.setTimeStamp(0.358112127481);
    msg.setSource(4071U);
    msg.setSourceEntity(180U);
    msg.setDestination(34694U);
    msg.setDestinationEntity(1U);
    msg.cmd = 241U;
    msg.op = 119U;
    msg.plan_id.assign("HFPUIKQRPSOQVIZWMKYPDVEIRZRMGVGDHWKZUATIHWLJLVJTRMEJEFSUNEMYADUVZLICDEFAHRBGFENWKUNZWHXQZPMELXLKDCNXATKOEYVYFSBPOLRGXSJNONGUFWGPCNTKQXYHVUXUICYRPKAQWWKAJRAZCASDBJVPSSC");
    msg.params.assign("XXDQSBTCQYQRKEBDOVZNJLUNUXVYEFLKFTAJSINJKKDXWDUAZMAKGIZMEOXJRBXBSZCLVEGZNZLSUSHMMKHTGOVRUFULOEPBZLTHHWFENJYSGKSZUTEJOEWRYXQMTTCVAPDWCWZAJUHGLWPQPIBRYRSDFDHOAUIDFIBYXFPHCMPATRBKOSDCUGVFINQMJFECWPBKVNVYACQVHGCALHPLOBMNWIPR");

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
    msg.setTimeStamp(0.789446203774);
    msg.setSource(27421U);
    msg.setSourceEntity(248U);
    msg.setDestination(15162U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("MQMQMYTFYIAORRKSSVYWYMDGEJAXFPODW");
    msg.op = 80U;
    msg.lat = 0.246828821887;
    msg.lon = 0.577559749171;
    msg.height = 0.865652978505;
    msg.x = 0.248202235783;
    msg.y = 0.8509920098;
    msg.z = 0.853896209158;
    msg.phi = 0.561032670963;
    msg.theta = 0.781152977083;
    msg.psi = 0.14379178375;
    msg.vx = 0.216009705786;
    msg.vy = 0.622608061353;
    msg.vz = 0.931816565352;
    msg.p = 0.948143409607;
    msg.q = 0.127464562572;
    msg.r = 0.30254712268;
    msg.svx = 0.36680975612;
    msg.svy = 0.410525941963;
    msg.svz = 0.920677439406;

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
    msg.setTimeStamp(0.564585839801);
    msg.setSource(49229U);
    msg.setSourceEntity(50U);
    msg.setDestination(11821U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("WHDHDJOLBSWDCOZKWYDEIFHKKTRRQCXXRMPJGWAZIUJQSWIVQMQNSUABLJUUPDRZSSKXORIJMEXECLLAUEQURLZACGMZTCKBXSRMCDPCBXHICEVYZTLPJQEGUVXTLDSHYNXZNN");
    msg.op = 123U;
    msg.lat = 0.563347954079;
    msg.lon = 0.956505145718;
    msg.height = 0.0852187400221;
    msg.x = 0.953532133603;
    msg.y = 0.090888651308;
    msg.z = 0.745143051301;
    msg.phi = 0.56415880939;
    msg.theta = 0.40517417074;
    msg.psi = 0.875097016138;
    msg.vx = 0.913029557581;
    msg.vy = 0.347494785606;
    msg.vz = 0.21978941879;
    msg.p = 0.610594819425;
    msg.q = 0.173255884218;
    msg.r = 0.255290705653;
    msg.svx = 0.0954177086544;
    msg.svy = 0.661197935759;
    msg.svz = 0.442701293646;

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
    msg.setTimeStamp(0.0581863412107);
    msg.setSource(12483U);
    msg.setSourceEntity(165U);
    msg.setDestination(55355U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("MFLZXNBFGKPOUBPFRPVCQBILSYSPPOIEIOVAHFVRUUMDWEQSKELTHYSXGMJCQHYAUSHZBFCTNBSAOVJHGYVRDMXDPXYTXHSVRG");
    msg.op = 55U;
    msg.lat = 0.408357755637;
    msg.lon = 0.23251367548;
    msg.height = 0.290911788076;
    msg.x = 0.989878557293;
    msg.y = 0.21924201498;
    msg.z = 0.0675717526691;
    msg.phi = 0.645806242597;
    msg.theta = 0.337857558964;
    msg.psi = 0.307222670239;
    msg.vx = 0.994783479701;
    msg.vy = 0.0624308511889;
    msg.vz = 0.686766003466;
    msg.p = 0.56847761586;
    msg.q = 0.910765045794;
    msg.r = 0.843041226853;
    msg.svx = 0.826239322533;
    msg.svy = 0.227218152984;
    msg.svz = 0.510337708199;

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
    msg.setTimeStamp(0.121150375325);
    msg.setSource(36969U);
    msg.setSourceEntity(190U);
    msg.setDestination(43566U);
    msg.setDestinationEntity(68U);
    msg.plan_id.assign("LZBBOQLCIEADHORVFTMCHYPROWYCAIREXAAUWZMLETKZK");
    msg.type = 2U;
    msg.properties = 94U;
    msg.durations.assign("KUUHPYQZPNFMJATUVJLTBQMXNHUVEUOQPFMZXSXSRBFVKSGQDKCCWBGOSODYYFJXYGPQAGCFEDBPXFVJYDAUKQNCVCYNRZHYWSJCDHQPCLUTBOXBIIMVRROSWKICBEALZTJKIPEMRLVHKNSNWUOEPGRLMB");
    msg.distances.assign("PZORVWWJAMITPJKSYTWWOQQWSSGUCDKRVYFDZEGDIHUGJAXLMGOJUNDXMAYXNRRNSWEPYSHJILHFNDXZPRXRTTTLBZZCQVE");
    msg.actions.assign("QRDMVBRYPUOUNHWNQSHWSSBEAQJRTBKCXQHZAUQCKGAFXRFIVDEVTVUDYYLSCCCSQAARJEOQZPHJINONPSKBAKXNZDPVMDGBLVWLFGDEBUODIRTULIBLUZETBEFQHUTEWNRSPG");
    msg.fuel.assign("PALDYNWUGOLMHNTRTNSKDAIQOSAFBTKCURCTBYZCUJMFMEWBXUBEINFYJQYVLVHRPWSVLOPCAPFMOQHEHNCSTPOMTGAMUSHBWJBXBFZQ");

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
    msg.setTimeStamp(0.0523860560091);
    msg.setSource(26431U);
    msg.setSourceEntity(141U);
    msg.setDestination(61391U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("ZVHZJZUJXTBOYVKTEESDLOQQHPIMZINGLPCBGRMHMYVCBETPYFIFGAEFKYXGVHCNYBLBVASNAUMFGOMLZXOSCCWASIASSDJBZUFDDUXKXFURLQRWSUCZFTXIJTNWHDNABQMSOIKDXDXTFQEDPJQUEHUARVJSGOIFJPKOYKEQDYEXJVHHRPELAYPYLWGQRVBCEMCJZGCORWPIZAT");
    msg.type = 173U;
    msg.properties = 189U;
    msg.durations.assign("BOCRVIJJMGHBQVSTMFJNBBMTRHNEUZEASGWVRXOTIBJMAKMUMNACIDGVODO");
    msg.distances.assign("EZIBNCGFAIMNSBOYSFNZRYUAVDPDQGGRQLLPKHKZNOOAXHMJYIPDWUOWLXQEWBWWFIOMORNCSAYDRPYQIWMJEOMTEBJDRSDGLSQGHMGVLZUS");
    msg.actions.assign("ZYYXFOVMPDGLQEUAHPPZPNLGJKAGTEDIWVANRMWUXJIDBAJCSXGOWSJLNCKKANBMQSOXQWCLKUNUQSLYQAOAZPZEFMOYYYRCNJXQNIXBDCRHJMHIHQDMXZ");
    msg.fuel.assign("NWZNRFDLOVFCSHHQYIWBXBLRYGHKYEUUZELRSPZMETYZHAVNGBCRKFIOBWHKMYIHBVSEAIJHRSRRHMSTYTGCNCGJYPYLQLSOXJCSYZTCWGIQGVDFZCSNUAFTDGBKXJIOTQALLPKXKKILIKJFFIDNQLPBYXPAWPKOEMQ");

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
    msg.setTimeStamp(0.228110070466);
    msg.setSource(45122U);
    msg.setSourceEntity(165U);
    msg.setDestination(34146U);
    msg.setDestinationEntity(95U);
    msg.plan_id.assign("RDFKOOCQBAAYMVNGLVSIMSBSYIKONWGZEDHJEUMETCVZSFSIPUJBBWPXJGTCCVQOFXHLPYFJLZLOZMURPNPXKZNLSPQQEIMPMIXHOARWVMNWTUAXGLIXNJGZLEPNEUKBRWERWIDOSTIFFDGDTHMUTUHYDQKVVDDCQJTOALFUAGKTJXVHCDTGRJVCWYHXRFMFADLCCMAXYCJTENPOYZNYVEAFZBQRKIHPAQBXBIHERGGWHYN");
    msg.type = 234U;
    msg.properties = 158U;
    msg.durations.assign("KRMYMHSQAEFDKCYENOTDOWXTPVEACSSCSWBYPHPTTVGGPFEXKFURCVZJYJWJIUUIUPR");
    msg.distances.assign("RYXPALJWKOSZKATQCGVPYMQWOADOEBIOLFLNVYSSDZTWXIKZ");
    msg.actions.assign("ALMTOQCOSLNGNKAZLUBIVPBLCBFGWMNOGZARNRKGUMSIZIXPXURYKCPVKWXWFFVHJFTPTOHEILZQCAIYHHUVNYGRQCXNCXQEFUISOXNLUJAECJSLVDIDYJYYFMBDDMRPSDPQRXDWTOWZEQPIDRABZTHF");
    msg.fuel.assign("DMLVFZVBTHLFYZNQGURCEREXLKTMTMIPUNKSIKTAMJXIBUZVTAVPPRHKSIPMDMWZARXEGIHHNMFUZJMWYLQGYVLNFHPYCSRHSGBGZQHCXB");

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
    msg.setTimeStamp(0.36288715463);
    msg.setSource(60131U);
    msg.setSourceEntity(142U);
    msg.setDestination(14218U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.914469013494;
    msg.lon = 0.923988968847;
    msg.depth = 0.08744117971;
    msg.roll = 0.431735327367;
    msg.pitch = 0.196985461535;
    msg.yaw = 0.949052894966;
    msg.rcp_time = 0.856091712678;
    msg.sid.assign("BVPPWKNIQXOVSZQDXLNRFDECXDBLPZVAJNRZFCHZRPSQFFXBOUMHYTYXXENTSHJCPKIWAQNRUWJVMZBCVLYVEJWUMCZRKWAKLBEXZTPPAONVNRVFUXMQJUIIREHTNKIFTSDTOABFECIAFMATPKDONAAVHCKEIUYQSLDHNMGSGBLDBFZBCLYDSLOCLSZOWRPXHSYLGGOMJHJXIATHUQQUEYMJVWMYUCGTKGRERSFQMGGYJGQGDOKZPBOIWJ");
    msg.s_type = 237U;

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
    msg.setTimeStamp(0.367763374846);
    msg.setSource(28461U);
    msg.setSourceEntity(22U);
    msg.setDestination(65340U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.704643842046;
    msg.lon = 0.801237087982;
    msg.depth = 0.691423091102;
    msg.roll = 0.310894628407;
    msg.pitch = 0.68315370392;
    msg.yaw = 0.514024427105;
    msg.rcp_time = 0.95354926448;
    msg.sid.assign("SZTVMJLILH");
    msg.s_type = 129U;

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
    msg.setTimeStamp(0.336617675495);
    msg.setSource(64750U);
    msg.setSourceEntity(48U);
    msg.setDestination(29702U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.754440122528;
    msg.lon = 0.885659482081;
    msg.depth = 0.933167922099;
    msg.roll = 0.717309423341;
    msg.pitch = 0.520239513047;
    msg.yaw = 0.371698617016;
    msg.rcp_time = 0.3105471834;
    msg.sid.assign("WQJAJOLUVBGZRJOASVFSRWDKLCHTCXAQCQGAKHYRQCXDMIFPSPUH");
    msg.s_type = 223U;

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
    msg.setTimeStamp(0.133712264139);
    msg.setSource(3640U);
    msg.setSourceEntity(122U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(194U);
    msg.id.assign("MHEULIYIUMGTIIEQJIGRTSDLFCFVHPIRTZPURQNDVIKDKMPLWXAMANZBWPPEQERUXCLAFLSPJUEGXLIUWSSQUGAPZYVQZFVNOMYWQYVNIGXZORBHVKWUOBADZEXFNLTVJVFTGFJKGKNSOAOCDTMXCKBLYWDOMBVEAFYCEBZGMSYWYODDHEPIRWTJHOFYBCHQCENPZJUWSTXQWVZAQXHLACJNA");
    msg.sensor_class.assign("WJSFXVYYBPQNQIRKHHAOUFZT");
    msg.lat = 0.453505405624;
    msg.lon = 0.470802979793;
    msg.alt = 0.0708476511894;
    msg.heading = 0.933836386547;
    msg.data.assign("JBICRUIFUKVLXFJAIHNABRCEMXJQTDXQGPKPDHETVFJMPAWIPVLFSDQMIVCMEMRQHBEIQYFRLVGYYBQKESBOZMSAHUQEIGZEDADTTIRHBCLZJJNSNZLQYMTVRYYMOWOZGLGHPDWHGDCRXXEBUQTOXASLPJIJPWSCLPNOAUFTKVEUENJSNKGDTVLUCHFK");

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
    msg.setTimeStamp(0.496092203142);
    msg.setSource(30454U);
    msg.setSourceEntity(98U);
    msg.setDestination(6505U);
    msg.setDestinationEntity(34U);
    msg.id.assign("XFNOYQTBGOJIBZLDRZDGEPLIMNJXLZVBJVHAFTAUJSRWRRRDRYEBOVKRQRMGKOGSVACPLOXUIDVXICULODUBJNNXCAUYPWZMDTLENSYZYKJNIPKMZFBBHGUHQJEOCEQLFVLZKBAWELJ");
    msg.sensor_class.assign("ZUIHXYRERJAELIQVVVIMKLFUMUHSBSNLNJDULWSMEDBTZMXQWGZAPBBUGOZTHZFNWYQJDWYOPNYKGPUGBPTHGKXJUAQDHJRLEISTFGVYEAFRNBRHHAOMKJETWUBKRXYDMDWJCBHOLEFENNHSQSZBXSNKARYCMKVRPJOMTFVZGL");
    msg.lat = 0.143963189969;
    msg.lon = 0.0671761105648;
    msg.alt = 0.826383026685;
    msg.heading = 0.677072110596;
    msg.data.assign("XPCBQKQURLPYZVIOAXRTMQWBFXLVMKMZRSSEVHNUZTSNUSGKILXCBFVDUCPRPOOZOTJFXJIAKMUGGELYDGIGMEANFEEBWYOBDNHCYQUWIWWTLHGYPIELMRNAKOVQFXNCLPCZZXYXWAANTISOGDPVDWDHAYBPHSDYSRCABJTYLQKVVALUJFWTGNEFEJTIRD");

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
    msg.setTimeStamp(0.437315010214);
    msg.setSource(941U);
    msg.setSourceEntity(19U);
    msg.setDestination(22209U);
    msg.setDestinationEntity(159U);
    msg.id.assign("QMCCDEQSOLJZTEMLQHLULNYVVWNEOSKWVQXAZDPGHEUWBARWPRVXAAGXFGZBUVYJUVZEZMIOAORUYXMCPFEIDACQEHKGWTQZKJJBPSWFMLDXCIJLYKBHKKMQSIGHTISSTPTMLVTAHGQROHTNENNFYOCYJPGXWLUFOARCCKRFQTODN");
    msg.sensor_class.assign("ZIIPYEHURRMKSWEOUBZCCAJPLYPRNI");
    msg.lat = 0.265221653279;
    msg.lon = 0.662029631875;
    msg.alt = 0.122833222913;
    msg.heading = 0.12417547156;
    msg.data.assign("OOIFBRHFCKTVAQNUQCSDAZBGOORYIJTPIUFVWWZWEVEWXCSMMABNKBLPKDUMWPJZZMLWDQHNRGLBPFSNFXPWJRSVHBVRISRGXDWDYDSOLGHJQFOKUXNCLEUDDGIHYGEZELGJYJAFXQXMTSKDAQTNCZRCDAAUKNINZCCBSFLTMZJKGOZPNCVQXOIKLYRUPMAETTIXWGSQJLOJYKFUJFEOIYUPHEVVMHXBQUPNTTC");

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
    msg.setTimeStamp(0.531342019164);
    msg.setSource(45538U);
    msg.setSourceEntity(63U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(157U);
    msg.id.assign("JQMPVGVWMCDRDUEFBRPXEDQCSJOZXHOEYTIPMHITCFVNAJPLNUCXDYEUXTLKJRHYFSSBGCHYGBAQSYOVWPZRTSKOOUMOANHAUGPFTPITIAJZUNQSWLTKQGWYGRLEHCFIKZKVQNCAAIEYEFZTMMOJJQLPLSQAMKYOEKBKKXXDNSVKYCMDTNBSJVWNURUZZWILJFCBIWXUIXDGCVIVNGFRZPMMFHAPOYBBDEBSD");

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
    msg.setTimeStamp(0.206603352189);
    msg.setSource(26935U);
    msg.setSourceEntity(45U);
    msg.setDestination(7496U);
    msg.setDestinationEntity(128U);
    msg.id.assign("NFUGXFCMRHPFKZATAWTIXAUNVBEDJVBQMYOSVLYHIKEMLQHYDZFTPQKSOCYCHMRSVNGKWXUHNQGCKCVQQFLDGLSY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NIAYIYYIHHDFXWCOJIPTWVNWHMDVTAYNGUKAVXMUREZQKLHTVWMPGSWRGOYEZRLBTJFEAJYPDZNNXWOBSXXRSLSXBJTSJBHFZ");
    tmp_msg_0.feature_type = 128U;
    tmp_msg_0.rgb_red = 117U;
    tmp_msg_0.rgb_green = 119U;
    tmp_msg_0.rgb_blue = 81U;
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
    msg.setTimeStamp(0.0793649777025);
    msg.setSource(2026U);
    msg.setSourceEntity(69U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(59U);
    msg.id.assign("HURCOYEGMQEDQPIHBVWMOXZKNLXXQVEAMTSIZKSMKNKIHPWVWDUPIFWCTABZAKPMFGDDJXSTYXRRWGCPHJOBEMPGSDJTUOBJKUIBCTAVQRFEVRNJGJJDUMCHFXADIXPLTROEEWTQVSOKLAKHZZWYRCNUT");

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
    msg.setTimeStamp(0.101378068856);
    msg.setSource(4387U);
    msg.setSourceEntity(254U);
    msg.setDestination(15547U);
    msg.setDestinationEntity(76U);
    msg.id.assign("IZVFGNJWXKUWFOAOKPEJPUQTVNTGDEZHJRLFOMBADBQQRDXLRMDLCOYXSCHHJPKTENSFLMKHMAJZXCBEETYYCVIRFVIELIQZZALJJYOKXVFIIHSZUYVPUNLNGVDPWQNSJTICWTTASWRKOBNMXUCLFWDVYZPRMQGCQRSKMEUB");
    msg.feature_type = 17U;
    msg.rgb_red = 218U;
    msg.rgb_green = 160U;
    msg.rgb_blue = 180U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.746601073716;
    tmp_msg_0.lon = 0.017475172406;
    tmp_msg_0.alt = 0.972873984088;
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
    msg.setTimeStamp(0.874213234473);
    msg.setSource(1373U);
    msg.setSourceEntity(89U);
    msg.setDestination(23624U);
    msg.setDestinationEntity(223U);
    msg.id.assign("FLKZJWXMFBNXPVDNRVBOUCSNIXZQINXDTFWQDWTPJBCBYTEFHOCBFDWAPZTHANSRCHQMOLMNNEHSEIRKLUYIFUAGRMGWJOOTVPTHLDLCSAIXXBSXVOTZOVKWAJQUESDMIXJWZPKQRKLSAHEPPKZNARVIEFOCXOZMBEMAWJBYLQIDPIGDJVNGNYROHCTTQZUQGRDAYVDKAMYSEHFUGFFY");
    msg.feature_type = 101U;
    msg.rgb_red = 159U;
    msg.rgb_green = 242U;
    msg.rgb_blue = 204U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.266012783494;
    tmp_msg_0.lon = 0.497715179146;
    tmp_msg_0.alt = 0.307135090364;
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
    msg.setTimeStamp(0.738287464879);
    msg.setSource(18237U);
    msg.setSourceEntity(98U);
    msg.setDestination(45057U);
    msg.setDestinationEntity(207U);
    msg.id.assign("ABWHRFNKIKPOQGHOTZRFRAVKJGZRTAZDGSFVBEUHDNARACPQXJFLINCDTIDLVLDHYMQIHUGINMPCKZAXGTSUNIZFEXGLLVYBYPKXPMSTCVOBDWVRYXROOIQVSYMTQSQLRJNBMNEODTPVBKLDIZWUZYXMXRM");
    msg.feature_type = 63U;
    msg.rgb_red = 79U;
    msg.rgb_green = 210U;
    msg.rgb_blue = 193U;

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
    msg.setTimeStamp(0.230034919277);
    msg.setSource(11182U);
    msg.setSourceEntity(254U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.628041002678;
    msg.lon = 0.0751154809809;
    msg.alt = 0.132020162896;

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
    msg.setTimeStamp(0.535308873358);
    msg.setSource(20707U);
    msg.setSourceEntity(106U);
    msg.setDestination(6297U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.376497876454;
    msg.lon = 0.0272237361954;
    msg.alt = 0.000130910080559;

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
    msg.setTimeStamp(0.32751279525);
    msg.setSource(36074U);
    msg.setSourceEntity(72U);
    msg.setDestination(6987U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.658768618164;
    msg.lon = 0.448927155487;
    msg.alt = 0.883625974238;

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
    msg.setTimeStamp(0.956719112706);
    msg.setSource(22579U);
    msg.setSourceEntity(212U);
    msg.setDestination(33662U);
    msg.setDestinationEntity(2U);
    msg.type = 142U;
    msg.id.assign("GUNTQLRGTHJISRJQVXBQEDLKGLJUOOZGIJGFJXMASJZNEAIKUTABKWXTBVPEFNXYQXEFUPVOWFYXDYOZPFZOKSUQWUWIHQSP");
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.784276863339;
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
    msg.setTimeStamp(0.827210456959);
    msg.setSource(14884U);
    msg.setSourceEntity(246U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(214U);
    msg.type = 31U;
    msg.id.assign("SAYSSNGMNLADTIFJALGOUKMPYFUUDQJXLRFBZIEGVALCLDXUCZIRKJSTNFXNFAUAUFHGHFSFVXSMBLMQOBPROGPZJKFWCVTYYVPKBENEHSBPKMJRJTQSIZ");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.900883141947;
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
    msg.setTimeStamp(0.584141680613);
    msg.setSource(16171U);
    msg.setSourceEntity(161U);
    msg.setDestination(9705U);
    msg.setDestinationEntity(128U);
    msg.type = 140U;
    msg.id.assign("HCKDWYNXUKWAWTMZWBKMVLYSNDPZJQXWLJKUHHFUYCOKEYBCLWYPBOFIMHNSNREZZJGXDMMLWENUOVYDFXYJRXTAUM");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZGGNZBZDNZTKXJGMBYTJQEACLPVD");
    tmp_msg_0.lat = 0.466163610951;
    tmp_msg_0.lon = 0.0405535230489;
    tmp_msg_0.depth = 0.189116884415;
    tmp_msg_0.query_channel = 16U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 48U;
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
    msg.setTimeStamp(0.0312716448686);
    msg.setSource(63973U);
    msg.setSourceEntity(194U);
    msg.setDestination(45348U);
    msg.setDestinationEntity(96U);
    msg.localname.assign("RAXTBJUEKWPWDVSNFUDNOIDJQTVGAOABBJBAZYRPJFAWHHEJPGZTYLZEBYXOERGOPIEUSAWBLQLIFFQQLXMEOHVMVNGOYVZPILGXTEKHKFCUYHVNNKMMRIVYDNCMERWADQLJHTWODNJBZCYXMZLRZVLSKVDPPUHIQZSBCZQJERCBFFQJMTMEKGDCYXCQXXSIGUSJKTWSGLTBOWHMGDLKOMFIXZACKCPUTFUDSOKXYRSVWGIHHQNRARI");

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
    msg.setTimeStamp(0.956088826953);
    msg.setSource(59276U);
    msg.setSourceEntity(141U);
    msg.setDestination(61463U);
    msg.setDestinationEntity(39U);
    msg.localname.assign("SBBWJAGADHATRSNQSWXBBQGKTJVMDPLCUNAWUMVAHCSLEUPEZRAZACVOQEILENYSBXYTBLBFLPAGQXQXEXFCFCQGJZEJOPHIRWMJZQTKJIKZMCYPVNPNZYCIFN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LGWPKMGXLCCAZCJQFLCONSVMWSXOFLBCBIQHSELGPCNUPFLXDTKIRAETOQGAZLARVQHXKFHMYKPVNQFMWQVMPXMVMJPXWSWROVIYGHPFFWVARNRIXUVODSWBSBNUYYKTWFHYTQTSEGIWTXKRYHETZUAJCZNELDZZOYDNBNJZEIIUOUSMUAPHYATSSLYWEVHPKFBJFPDBQEKBIDUODZ");
    tmp_msg_0.sys_type = 154U;
    tmp_msg_0.owner = 46626U;
    tmp_msg_0.lat = 0.0205380947305;
    tmp_msg_0.lon = 0.397486273613;
    tmp_msg_0.height = 0.501177836459;
    tmp_msg_0.services.assign("ZWHPXUQOJQRSBAKPMXABFHENGTDYQDTRRGSRHIRGGRDVDBNVFFPTWPMQSUNIDXVSSJCXWBRQSOMFAIBQRJOGIDMVWLXALTELYO");
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
    msg.setTimeStamp(0.633771582578);
    msg.setSource(5846U);
    msg.setSourceEntity(126U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(152U);
    msg.localname.assign("PGCCHNKUKUBSTJINZQIWZZLGHCWMATRDHENPEVOIAMQDYJNFCLJZDQNJOYHHJHRWPYFYEVRYXJPTLGDAFEDBMNVIVRNPKKOSEJSEEMQRWSAUSGIIPTGRZEPBUYSKBOVODKVXFQMFPILVOQQWMPWGFABORUHXLSUYFHSQRLCTXVXSZQGZUAFLXBKBOSWJRBNKXAMBCW");

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
    msg.setTimeStamp(0.681867511829);
    msg.setSource(56097U);
    msg.setSourceEntity(168U);
    msg.setDestination(48028U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("FRLHDRHDGXVCUIXGUNKBSBKMOAWYJTXUVLZFRMQAYGCKUQJWDTCFEYUGYCQWJNYEMVJZFXEXGCCHSWNYRCUONXWMHNPPHPZKPHACPSBOBYWIOZQTMQNRMNLDZPPECBSFRFTRONEHITEJPBDSOQRGGPSXDRZIKWKZDWBAIBFKLYADFEGLPUSFDSIVVIASCATRVVIIGLBBUOJSVVDKLENXLYAMTIQJVELTJZK");
    msg.predicate.assign("YWLQHBSNJVFJNDWRXXEOKVYLGPHIHAIDVZZBYXUUSIVNHSAGOGDMSQICZQHGJMNCYLMBRCVFUHFDBPMKXOKNEKDBWTTKWUJZTOQFBPS");
    msg.attributes.assign("CPDQWVNCQGREVPHTCXQZQBWNMXUAVTXBCBZRNHOJPMYPYGURJENCXQCIUCSDLGSEKLOWLBAUJGGHZKVTIRUYHPDPQQTUVYRSXJKMM");

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
    msg.setTimeStamp(0.758431167703);
    msg.setSource(47347U);
    msg.setSourceEntity(149U);
    msg.setDestination(30794U);
    msg.setDestinationEntity(152U);
    msg.timeline.assign("MQDOYYTSNWQFMWNAABZQJTLQFORIBVIMBJXKFJPRBLHDDQWAEOSCVYITSAVLENAWEWLH");
    msg.predicate.assign("YEKIPEWPBDJIQYJLTGDPKVLDBPIQJOUQWIEKAYUICENJHWZKUDFWHXSMOBXRFTBCMOROBVFHIPCTORVKERAWGKJKRUMFAAGNHMLPEYXAXVRNNMMJSSZJQQQZWMTRUWQPIBNEUIXFPFOTCOLGFQZFWZBJOUNVXTTTDULYBXMIYB");
    msg.attributes.assign("FSFOWBWIZDABMJJUNWAYWOIEULAMYMIUXJJKVXVTYNCS");

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
    msg.setTimeStamp(0.908419029203);
    msg.setSource(1844U);
    msg.setSourceEntity(50U);
    msg.setDestination(40722U);
    msg.setDestinationEntity(80U);
    msg.timeline.assign("DVFPDRLHYPHWNGUXLBHHQCAUJISXTQWJYPKDUPWMFIUMZJOVBERPSOAOWTBAXULEJKPATFTLQMGAKXHWOAGLWZUQYHSHCNSKLL");
    msg.predicate.assign("YVZRULEGAMWAESBZHGJGWVWLYIFJGMRUWUOGQSFJLHBACKJSXZOJLVXXHPXQDKVNDSCAOFYXPFWRMLBGUDUNYARLURVLIHTMUISDKOMNOTAZLXKOEAYBVSIXQFMRVQMECNYJTPRQVODTCTUEZE");
    msg.attributes.assign("PGBEDTCJITGDSZORMOARJWHJNJDHAZCWTIAZFVPAJOVGQNYWMPYDXNWVJYSQDGW");

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
    msg.setTimeStamp(0.791838018824);
    msg.setSource(60101U);
    msg.setSourceEntity(159U);
    msg.setDestination(57804U);
    msg.setDestinationEntity(182U);
    msg.command = 108U;
    msg.goal_id.assign("UPAVHGJNJRZHYVOTJWDAQIVPQFGYTBUONIMPOYETMBQFJZXKWVSCRMLQZNIBXIVFLTFEAQORNWRCSGUDSUBSZWXEELNARNMHYVDMXYQKELOMDRVHGINCLTKSRAGUSXYPXIJZK");
    msg.goal_xml.assign("ZXBZSIRICVEDCDJTDJRHZEOYABKACGJHTWINUOLQFANZVWGNECSSDSCTIOHPGVOJMYVJAHBFGNPKLYMBXWCSMBFUVWEYQJSCUSKBUHPAXFJTNBPTWMQFPFLDHETKYAETOGKMMPVJRUVQIHRGDQXKXPGQHXKIYLWOEUXQLIDBAARIQRQDIFMYXWNBHZQTISKCWCDCGMFLORZELAZZLELKPXHONRTVAUYRJBP");

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
    msg.setTimeStamp(0.361068674442);
    msg.setSource(30149U);
    msg.setSourceEntity(213U);
    msg.setDestination(23584U);
    msg.setDestinationEntity(145U);
    msg.command = 242U;
    msg.goal_id.assign("FNPGAGXOEVMFYMPFGLRICTWFXGOYZOYXWPMTCRZJHZRKYBBUJZRHZAMIFPWGZPBQWCEGTAUDKMKANMTUJJUSITGKJEXUXZAELCNQXHQBLDAVJCKMOLPBDROEYSMGQHWWEPUNHCIZPJOFGFKAEVIYVTZFNNSVEIBONVOMHWLLDFDASEIOPSVIYKNUSZYQBHHUBGTVERBMJH");
    msg.goal_xml.assign("NDJQYFOHQEQFJTBODEYYQGAAJPJDVSGKEURIMBUDWNPSZRWAEKXQWAKZBUVPJAZQZRXRKSFNPMHDJGXLUQHSXFWTVHMICYBIFVGRSZWHPOYQOPLECISLTIJFQLCBVNMJROFKKGRHHAMNVOETKBCYJEYEVHVLGQWIXHJNWSLFGENOPIKDXVTRPYULXIEZWKTBASDBNRBZDIAMBPNLOWWYULCMXPGAUDSG");

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
    msg.setTimeStamp(0.361739032538);
    msg.setSource(9679U);
    msg.setSourceEntity(94U);
    msg.setDestination(60927U);
    msg.setDestinationEntity(128U);
    msg.command = 91U;
    msg.goal_id.assign("QWRQYRULTKEPKUBFFDMECBGZGKXRVPECKZVWOJJYCTRESPFNEVLFAICNJNVHTBULCAZOWQNAIZGQXWLMEUXXCUOQOZBOSUGDJRZZPUGGSDFFINODCSASWHOKIDVAIINPFXFIOQMMHETZJDSOMPVQUSSYEBOJNAHARJRMYJYSYJE");
    msg.goal_xml.assign("YOGYMFYKAZIXJNWR");

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
    msg.setTimeStamp(0.581853719182);
    msg.setSource(35380U);
    msg.setSourceEntity(246U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(91U);
    msg.op = 208U;
    msg.goal_id.assign("FTDPBHIVJZNRLUCBWLYDHHXBGXZZZOWPACSYSNIXHCGKTEFEDMNCPSZBILQAJWTNOKWTDORTJCLULKJIJOEFYJDDMWRQTCEBVUBNZYYOFELIVLUBDBRRKCFNHSEJOBTTVXCMZVZRYAKFUGMLYTIGADGVSRVAYFHPAUYHFOFQKWUEPNGZQHUOCSKXGSMQLPRWGEXLINKIKOKOQPXAJEVRZHPFSRQIASMMMPXMVTDSMQJUXYDPQGBWCVIAEA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EUOIHSUGTNJBBVMMEFBKSMUYSJHPXYLSUGQZCCUTXRNEXHYJIRWZKCTMPMDDLVFLXALBACADJLWJDVYFQJZACSQCOVLFDRWAZPNOAMBMJIMQDQUXCPSKRIPBGQMPWFDANTFWHNSIZEDRONCNOIFPWHPRAQFYVEEQIGNBUOH");
    tmp_msg_0.predicate.assign("TKIFPZSXEWILCBWHFTXHQRGSTHQCZMMXNSEPWKRODICRNZANWBEQOYCNASBSNJUKXPWEGUZYPDQQOEIJBGWMGJOJLUDFRCMYYOGNVZTXCHBJEWAVFZTZMLHIHOSZTVWWPHPSUQJEGYGEOLXTL");
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
    msg.setTimeStamp(0.887565252237);
    msg.setSource(21484U);
    msg.setSourceEntity(81U);
    msg.setDestination(62446U);
    msg.setDestinationEntity(13U);
    msg.op = 64U;
    msg.goal_id.assign("RWZYZMHOFDZOTJYZSQQDIRGHPKQMVCFNHUJESKFBKMVMTPXGWTOKGWOVZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XXVHTMGHHQEKMBQKJXZXGXTGEBVCLMSWJXDZKYAYPJBUJIZVZCNPTLCQWDKMDAPYYOKGUFZDJUWRDVOANEPEEQCFUWMNZVDWHFEYQSJUETNUIFTHQLOXIPFNTKLMOZTGXQPIXPKRSLVUCZMMLANHOSJCIWKYSSJOWWARVUFHNAPBCFLFMVFIXHBVHYZQNRRBAGBGTBGSQGHAWRZWTUFBPNLMKLDAEOTUCKRSRGSQPORIDYDBD");
    tmp_msg_0.predicate.assign("LRGDUCAVNQWFZALPFYXXRWMNAPBJKGZTCUXMZHMOJVZSJIQXESXWIMOKOIZXSTVHWJCPCNURCNBWORMSCYKWSSRYEFVDXZRHITEJCUDTTXEZQKKXQIGBMMBQSINAKGDELUORKVWFFBELPCUOIMAUHNBFEDJBZEDLDGFGDYTMPFRUHOTAOQPVLYLZARQQNREATHKSDJYJPUBLGDHWNKHPIJKVGIVGYWCNYAQNU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PHNFKCEUNQKVVYWDCOFHZGLHIKAMDTQBBSEXBZOJTYPHOMIEJAEDOLHJUSUZUWBBODOOVZRWESFWVLNKHGOXMXUWGGGQSAQRDYPEMXJCRQR");
    tmp_tmp_msg_0_0.attr_type = 49U;
    tmp_tmp_msg_0_0.min.assign("DMZPMUKSLLDSEEURJVHAEZABOBJCFYXRYGKMCMVDIWPTFZRWSGATGAOKTDKPPGLEOISQKRFLOTBAYABQWRDYLKCCJSDBZWAQXWYQTQIITLURGMMUNHHANISJRKMI");
    tmp_tmp_msg_0_0.max.assign("JFJKNIHNBGATGLQUEPKSYFHRBDJNTLLTOTURMLQEOZMWPLNGHTXYSXFEVKUVFVVFWWCPMUOTEAEZPPKZSIIHXBJNDLSGZHOQWDTJGMPUMJENM");
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
    msg.setTimeStamp(0.792670677019);
    msg.setSource(59269U);
    msg.setSourceEntity(228U);
    msg.setDestination(16923U);
    msg.setDestinationEntity(121U);
    msg.op = 63U;
    msg.goal_id.assign("IKPRKKUYOPEKMGFCIPJUQJTNAOWPZCLZEDGPOKGWKYLOUOMNSWXHTPQJTQDZSLINMJVBZBQFYJWUFAOVIIOXPMIUF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DMVXDGTCLBMSJBBHUPEKEHVCAWJCF");
    tmp_msg_0.predicate.assign("ODCCIIIYFIWDDVMYDYAYVUETPSXLPEXQNZAZTZKUAAEQEWOICPBIVVPQSQTGBXZLVLRGCXRKEXGYNFONHMPKUYPRXTNECGMZYUWHJWAJOZSXJHIFUDKNJPTOCJTAQHUHNOLYGRBZQLWRJSMDLVOMFKXCFWZUHEZOZEEEMTGKTSFXUVDSCKMNLBLONSRQKJGJXJTA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EDYLJUWENHKGLZRCCTXKATTWOYADHPAXKZLPCHNBTAUVGIRWWFVRRVWOLFLXCAHPFMMBSHSGWEOSYBHJKGPHEFRKQLQAGGHRJBOFVGKNZSWSVJMDRUIXJKFPNHPOZDYSDJVCUXVCWTYNLJMCIYDELEBNBFMTFYBEZMQMOKRFTAJOIULQPWPNTAUHQDODXSUXYJTUPDAIBVZITNQZNMJOQMXDKXZZPQYQN");
    tmp_tmp_msg_0_0.attr_type = 234U;
    tmp_tmp_msg_0_0.min.assign("ZLHYNLSZICJANTHLIHPXKCLVQRDEEEQSWWTXJBWFFDKBGLUETUAFUEIMVCUJPWWHTAZDCFZLTNQKYTCXTGEOWJNPCYHNUIBLHUVZQUGRGWOJOBARRPJVEHRRDQKOHLKSOHSPBVIRWFRGGSEUAVKUQ");
    tmp_tmp_msg_0_0.max.assign("BGITDWYIOAMHHFTTAJHOZKRDILULCNZJPSBVFQTPDGYKANKAQDLEVGKIROSHGGFEGSVYNTABWBYCMOVXXVYCKYGXOYSEXHCBNIZTCLGQNCTEXOMMFKSLJZBBLGIFPRJQWCWNIWWDVMQBHOOPCWUQKIQWVLPXPUFUCJANUFZEDLDMSMWRNRXXCKAHRNDEPPQMRZVYBUIAJEUIXPZWJJFLJASZRHSDYEUPZNHZBUXEKTOVRJTFGTRDYSMV");
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
    msg.setTimeStamp(0.113350202442);
    msg.setSource(10933U);
    msg.setSourceEntity(59U);
    msg.setDestination(11011U);
    msg.setDestinationEntity(63U);
    msg.name.assign("YIVGJFHBFQFTPHLPWMVUTZDTDSHWAUYIKJRRKJJEQGZMQMLEVJMXRJDXNMNVROQCZNLXIKUWT");
    msg.attr_type = 60U;
    msg.min.assign("FNLWNPIQGRUEGBFKJOTLTXHEAICSPJCRKGGABTUVJRYIQHESPOHVXRHITWVMRGHCJWLWCDDPIUZYVGIOMJK");
    msg.max.assign("KLXXPARQGISLHAPJQFZUWUIDZXFTTIAUOWBEEKGMVWKTPISYXBULFBQKAHMRORDZEALGMPXTBWCCEZGBWYOHPCGYRDKPWZXFKICYRQHLRNYUSVHDBMWIMOWQGSDJXVCORJZTLJENDQEBOETFMGZSLQRUNGCDCRWVIBSGJAIKUZFJJJQVAHAWYYHMEYVVPZPNFYTEKACLNSSRIBNPSZTLQJHOHMVHMVIGDCB");

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
    msg.setTimeStamp(0.100903242429);
    msg.setSource(23346U);
    msg.setSourceEntity(162U);
    msg.setDestination(34181U);
    msg.setDestinationEntity(217U);
    msg.name.assign("XTKYRQTRTVAGHQEMMSZXLOEIVPXFFSCPAMNZFTUVVSSDJWUBQPXFYPSQCNOMALYOJMUZNHAUICYIFPBGSXJCLVCUQYZLMOHIZTBJKBNLUYIWIBDKLCOWTWEQKCEGDG");
    msg.attr_type = 174U;
    msg.min.assign("TVDLCAJNTWIZKOISTFTXLDYUZIHBVEYLSOQBQAUPSRXQZVHLXVUSCHSGMFQHXCJIJDNQVADSYCTDDXNGWXBFVEFAMCGFSGQIDWZRDNYUWTKBMBIOAYNMGREICLRHBXQTKFVMQLCCYPPJAWPRGPKUIFBPPEHGUGJZTMKIYSWUEMJXUKKOFKUDTVQSEZETL");
    msg.max.assign("RQERLBDFJICXIBYYNTJWWIMIFUMFVWQPGFFAPBAHSHGLUVWDQTLTYTEUPOWNMNHBHEBKDVWDKOVGZYNXGXIGMWNWTVGJDOWDKZJKAYIWSQSMMFOHZMCMHRIZIRBNZRCFTHQDORDUXVUEKXHBJCTPNSXCSPGBMPEELQQEFTZKKTERUNOYOIPAECLDKQCOMANCSZUVSPSXYCHQOVJZPTLAXHGZVNLRYGBPJRUXYSKCXRL");

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
    msg.setTimeStamp(0.520656961729);
    msg.setSource(28467U);
    msg.setSourceEntity(186U);
    msg.setDestination(64483U);
    msg.setDestinationEntity(174U);
    msg.name.assign("VKKPGCMHEWDJWCRAVHEAUWHIOICDQWBKOCWWMUNFQIALGFEWPTUIKFSNDLBERNFROXZATMKGNWJAZGCDKXQSUMVVYXGKSEFVEPOUYHMQVKMBARZGQINJFYSLJNPGZINMTQDRVUTTXNBNPLMZNYPBJQJZGHZJODDXTJSUPQBLGFYXKOFWAPOCMFIYVBFOUVRTXPAIBHXLHQXLA");
    msg.attr_type = 186U;
    msg.min.assign("MQXRSJBXNLFZPTIICWJTYERRTEPANWVTUSEMTLJUFRHUFJEMDVBAZYKOSROOQBZTCSFRBLHDMEZMNTTFAUKJZMJVCONXNOXHUXKLVGSDE");
    msg.max.assign("RJQGKZDSWNMPVWEIMLFKIOAEFMASPPQEGQXXBIIMUKZDTGPEYETUAOYUJBKJZSODZXRHGZCGYTBAPBLQMENZFDMKWWJLTRBZIQAZQDYXVEM");

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
    msg.setTimeStamp(0.0923225530621);
    msg.setSource(5210U);
    msg.setSourceEntity(99U);
    msg.setDestination(16763U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("PLBMJQGDBVDCVVHDNYAGRKXAIKVUTGCEOIFLJMLLROIVJGGASIKXHKUELWBHTAPTKQAXONGPTSXMXEFWFYNCHSAYOWERCLUEULKKOIWNFCIHQXQZHISSTWXUWVFENENTBQ");
    msg.predicate.assign("EAGPYRQYOGVUPWCNCQVYFIIJVXETCCPZMWTTMKBWXJAXOWQMKNOXBYHQFWXBRWRCPHSDKFIJCFLHVTPKHNSXCUDABQMKGYIXENEVUZUFBBYVFLEITM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YCSQGCJVALPXKUBFTJANKWJUWVZOITRXORSGDEYQHFFVLHAEHFBXGIKWFBITDMFWHMVEIURRJLZLNYKFBJXKZPYNIITJQDLMBJUCZQAYNRVFUEMBQGANSCPUUPSEKTDTEZJMGDRJNWQWDKDANLRHOFVBWGNBYYTGKSSKMYUEPVDBLXFUOOOQOTPAHDWHLLIEICOXXWSXASQCPRNAGMNSQMTYPBHJP");
    tmp_msg_0.attr_type = 177U;
    tmp_msg_0.min.assign("ZLYSHRNUQVYZCBIQVGAOYXUUDUCHQIMHUVAUFXJWXFSOQBWDWRCYVNPITUMDCEHNLKBVATJHNYEVTRXFXERKXTUJGCLTOSHLKWPVXWLRNPRGJWEPVBPCAFJIJONHZQUNMGDFBMCTBNQSEYIXLZKLOEAWFEDZTKBZZMFJPRXWBMPSGSGLGKCELHRAETRNWMUOKIJJOGZDIOQFLXNIFM");
    tmp_msg_0.max.assign("UQIQFUCMGPICLOGNJSYPNCGOEYUDAPHKHKCJOXTOHICALJLK");
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
    msg.setTimeStamp(0.0849584342421);
    msg.setSource(7400U);
    msg.setSourceEntity(187U);
    msg.setDestination(40168U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("BNJAYJEQWINJQQVDSLWMFCAJSFSMRPAWIQZXEGSNZRMFNHSXZDTVBZCQTQCZNCOMKIEHFEYHIAKLYLVWTMILLVECWCKUTIHAGPLDABMMJQKHIWOFXSFXQBDVDKEEXAOZBZYKOAXHULEZQDNGWNYGLMCRPOGRKKPSIXMFUQAODHXNVHGRWOCGSHPUXFSWYZUJCVBTRDYMBOOFDBUGGJEATLJVPIGUUPKCLURVTSJFIHBVTYXODPNTWYPRKBNUTZ");
    msg.predicate.assign("APTZLXDJDFIIWOOZKISKLBRRLFGBSAVEEUYDOEUQSCXFPWJYHKVEYDABLTOAEWVMYQYBZHVITQNVRWOJHNUTXFHCKNKSSZRCWAXZYEOGQFZHXWVOWENDNIGPCGRDKVSEOMWGTGZWNKRJAEIHQRJNMHLFRMCITDMSRCZULYQLPGMCCXLHFTJQJMP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UNNASEPWZQOAZZYTCWGNLKA");
    tmp_msg_0.attr_type = 239U;
    tmp_msg_0.min.assign("IEWGOMUBQHMHMITSDUQLVUOLNKAOJAWAIWSUJBHNYFTMIKWROPCHQAIMETCESUJCGBVAAPNNPYVXZHTPLHDZRVCHQD");
    tmp_msg_0.max.assign("JPEOTSKTKKGMOULRKKJFIPBQGLWBRKQODCNFDRLAJBKYSUCDDWYHOENYGOKLXEWSHUDTUTWYINJXAZGMRIVMMXMJVLFPXIFEAODEFNCXPUTHRVLPRBNEYVBDXFQZAAZKHFFSVWOUZRHVPZMGRHECPSSGVNHYXZWXQJMLEIQCDWNYCDMSPQUEBVORHHFQLAJTMIRYCWVOWSMPPGQDXZUUHEVUOA");
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
    msg.setTimeStamp(0.639110828767);
    msg.setSource(22075U);
    msg.setSourceEntity(2U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("CCUXANWQUXPGETRLFREMHLWGMKKOEBVHHPSJDIIPGEIJRUWVBAMDLZSEIXOAKOFSDVVAQXWPKPDDHCGKYTCMKOHWJIDRVZQAMXHZYUSTGGJDFTWZATVPYLLYZNEWFICYISGUCSOPLYRHLNNVBWMTVGCKQQQBRGBTIHHWKZE");
    msg.predicate.assign("TXICRSZEFGDCVWUIRNPYKQTZUHYAAOAWIGERICIDCZVAVTQISSJGEAJWWHRKUVPLLASAPCLSTCKLBFGOIMANCYMATPSJETRSLLGQZLQKYHOHBKYFRFDNOUUEHXZCPWGSHVEYDXBOPXSGDUOXMMTVJNMXZOR");

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
    msg.setTimeStamp(0.37802097971);
    msg.setSource(58748U);
    msg.setSourceEntity(223U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("EXWJUNWUESPVCMJFGKLFTGKXMAFYPPWMQAWIZCCHOIAZCUSAMCYNDIZVZBOTAYOMJIDGKYUVGTMORLXMREDDHBWCLSPTAABUXCVIIBEDFKSFFXIWSJEHIQEJL");

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
    msg.setTimeStamp(0.0136046495121);
    msg.setSource(44784U);
    msg.setSourceEntity(175U);
    msg.setDestination(39903U);
    msg.setDestinationEntity(85U);
    msg.reactor.assign("MCZSXJUCWXQZODNMDQHNQPIPFLOWJYEKRFCTIDDSTRTWQUDWMJERWVJTGNLSIPKMASVYFZBOBLOGKZXVAUXRKBDVNJBJZIYALXKECEQQVRYLQEPXBVTZHSKAIGXXFGRLDJBVEAJTYPQFUWGCXSTPPIM");

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
    msg.setTimeStamp(0.27245113549);
    msg.setSource(65288U);
    msg.setSourceEntity(58U);
    msg.setDestination(729U);
    msg.setDestinationEntity(35U);
    msg.reactor.assign("LTQWDUUPYBNMZWVQEQDRGNJAEVTCTGNVKOXDWQQZXZHAEGYFDHMDYYTZBIKBKVFSMVOFRPCGSOMJRRYOSYYGFBILINSXMLTPCCEXOYJFSLVXAVIJTKMBNZLDPOLAQMCEGNOLEVKGYKPACUWPUIIPXOJURBKDUH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HUNULJWZMTCIWFUVEXRQQSKPSYAUSJDJBNOGXFROBVGCIFAJHEKSBNUADMVONGLIXTTBZBWALXHOMLPNDUWRXWQTNKAZYWKADHRDXKZBNJKPHPFXFWOUVPQZOWLJQRSLVDYNJZOYTEVICXCYSLNTWRSPJVPAPVGYZCGBEUYBSMMEHAKFGCYVNMZOEBTPMFKFICACQTKQCDSDZEDOIQG");
    tmp_msg_0.predicate.assign("TUTGINVFAMCVBHCQEJQGYJRSFMYRMJOPEXCKBZLHZXAHIAWBLWOAVEUUQURXKWFFVMYYENBDCOHGZXNFLSNTSPISXVORCLTYOWGTNXCLGSCEKAZORKPQTYNQIMCZWQVUYTUAQNHIMWVIGFVPMGPOHYZRZXDPIKLHQNKBLJRZRKSEDYLOLDJFSRGTCHESCHQXUBGBZIFRVMAXBESPDULKADUFDVDJPBXAMWITGJJJSAPNJWHFZKOIB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PGAATYQPPQEGEONDGKSOLOTUJTFWFQJRYYULNRFBPTRMHILVEQDUMXTITWXQICSGXEGBNBAHZJYHAYBBWKIUOCNRUZSCJRPPQDMHKAVAQNCXWWJHFMBKJODZIYXJUODKNCMOZBKEERGOQYCBESFDPQVPLDFSWXJWAZCXSDSZHIPZWRZKTJWAYIINVCIOWKEJNLFVPSUUNBTMOVZMLRTKZCUMFAISLY");
    tmp_tmp_msg_0_0.attr_type = 248U;
    tmp_tmp_msg_0_0.min.assign("SFOVXHAPDMYZIENLVYZRYVZCQNJHKIYJMJFAWXOBWFSEFKAZPBUQMUXOOHNKJYUDMVNJDSTWIULWJDZVWHKGFOYPDEAIJOLUYQVYQRQQHLGEWSTURCMPKTAQVETSXGTWPIBSBBVZWBXNEFLOGEY");
    tmp_tmp_msg_0_0.max.assign("OGOSEBVWBHPGVONXIXLDBKEARLXEINTNBEYUZBPL");
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
    msg.setTimeStamp(0.959844722958);
    msg.setSource(34071U);
    msg.setSourceEntity(78U);
    msg.setDestination(10370U);
    msg.setDestinationEntity(139U);
    msg.topic.assign("VDGDPVRACJFFVVIUNWPJYMKGZRSBJHYTHUAARMQHBXNCLPCGMCEVVUBHWHQKYICJAOYTTSATCERDTEKQZBLWBTYUWZOSCSQKXGAOUVFYIKPJRXOSVYSIBQUALEDIPQTXSFLTLSDLDQWEWKZHQFPBENXHVMTBROZNOWGIVXSZHXAJBDNJNULMZGPGRUOEZGBJDQRNIJJROXTGLKMDNGKKCYNFLHYQEOL");
    msg.data.assign("NZAVOBZWCDGWHCHCMHTDEYSDAXARGNQLIOROPFQUWBKYVQYTIXQSGOBLLUHXOUECMEXADGDRRKLUKXJYCIIRQBAGZXVAUTVRHHHQEDVEWFJBFKGQPCUJDUZLMKIIBGNJPWFVPXZOJPAJPTFEYUFNSMSIGWHAFXSXJCACIYRUTZVCDSSQMRPWPYYHITQLFLKNWND");

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
    msg.setTimeStamp(0.314139837542);
    msg.setSource(14869U);
    msg.setSourceEntity(239U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(103U);
    msg.topic.assign("QURBBNXSHEHKAFYKLNYGYLEWPTGPSXTZMHONXBBZAOXVYANUUXIKQKPGYDMRJFNMXSMYTYJHITWTJFTJHJUOMJOETVAZDXLURVRIEZDFEVZDGUIWPASWGMNAFQLM");
    msg.data.assign("TZGRNASIELGDMTRQNZMFJGUVOMLLELSKYAEZNKOEJMNAFVBNDTUSICSWJANLTERVJFFRSTMCTCHSYPWUM");

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
    msg.setTimeStamp(0.059072362732);
    msg.setSource(3301U);
    msg.setSourceEntity(39U);
    msg.setDestination(23734U);
    msg.setDestinationEntity(63U);
    msg.topic.assign("HAXYBNWLOQDKJBFQIYXNNPJJTBFIWXKBHWDIRZCQONXACBKVED");
    msg.data.assign("MDETEELMFRNAXDIJRNJGRFCEKPYXYWBRDCQFZZDPANMYIKKMCTBXGUOIBROMQTSXTIETNCWMJMNJGVHQKISAHUAULCFJOQKBVGABYFLPVKENQHTOSNYUEHDLHGWKMJJJTEUHSTUPUPTXHVOEZXYFOZQSPSWURLKFZWDFWSXVGIWLK");

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
    msg.setTimeStamp(0.166957103913);
    msg.setSource(34511U);
    msg.setSourceEntity(98U);
    msg.setDestination(57964U);
    msg.setDestinationEntity(182U);
    msg.frameid = 103U;
    const char tmp_msg_0[] = {67, 109, 90, 101, 123, 42, -20, -74, 102, 85, 17, 50, -82, -95, -119, 26, 121, 106, -101, -76, 109, -22, -108, 64, 96, 91, 22, -117, -121, 54, -75, -4, 95, 45, -77, 33, -104, 91, -94, -72, 118, 59, 75, -78, -53, 59, -39, -109, 79, 115, 25, -112, 20, 68, -124, -92, -33, -73, 42, 32, 75, 75, 29, 30, -107, 23, -20, -63, -99, -8, -14, 40, 70, -85, -56, 9, -89, -18, -67, 9, 46, 58, 72, 84, 5, 88, 82, 8, 71, 50, 27, -56, 83, -103, -64, -111, 12, -86, -10, -127, 14, -23, 36, -23, 94, 115, 105, 59, -52, 93, 118, -14, -17, -60, 36, 109, -106, -10, -104, -31, -76, 94, 13, 124, 2, -87, 68, 89, -48, 85, 105, 104, -15, -31, -92, 113, 122, 4, 3, -89, -106, 46, 45, 31, 35, 94, -123, -107, -37, 76, -115, 25, 69, -40, -101, 34, -119, -77, 103, 104, -125, 91, 93, 1, 5, -112, 29, 84, 11, 18, -95, -81, 120, -64, -37, -43, 30, 111, 84, 44, -81, 30, 65, 27, 55, 62, 63};
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
    msg.setTimeStamp(0.671028090465);
    msg.setSource(58068U);
    msg.setSourceEntity(98U);
    msg.setDestination(1442U);
    msg.setDestinationEntity(97U);
    msg.frameid = 128U;
    const char tmp_msg_0[] = {71, -41, -84, -77, -19, -2, -87, 42, 36, -113, 64, -85, 55, 82, 88, -126, 85, -82, -41, 52, -17, -5, 64, -122, 124, -9, 46, -71, -57, 71, 77, 3, 20, 30, 80, -123, -35, -111, 123, -72, -10, -88, 124, -17, -42, 82, 66, -26, 0, 112, -127, -32, -25, -42, 24, 52, 96, -113, -57, -119, 122, -93, -126, -62, -2, -6, 24, -56, -57, -24, 38, -102, -51, -47, 87, 104, 23, -44, -19, 24, -106, -28, 26, -18, -59, 35, -49, -21, -61, -103, 21, 108, -87, -53, -63, 113, 14, 69, -127, -69, 10, -16, -31, 67, 114, 110, 17, -1, -48, 65, -128, -60, 123, -85, -55, 64, 22, 25, 6, -85, 46, -44, 67, 115, -38, -56, 76, -105, 62, -98, 104, -113, 108, -69, -115, 12, -3, -80, -1, -111, 119, -106, 20, -80, 99, -1, -36, -34, 125, -100, -66, -58, 91, -106, -7, -100, 64, -87, -107, -59, -83, -94, 115, -122, 67, -7, -99, 35, -73, -11, -6, 98, -58, 121, -9, 7, 108, 25, -124, -46, -33, -31, 69, -125, -105, 11, 105, -95, 65, -67, 114, 15, -21, -80, -60, 77, -106, 85, -50, 22, 77, 98, 90, 87, 42, 83, -92, 46, -13, -8, -42, -74, 58, -42, -7, 86, 78, -35, -122, 113, 14, 42, 57, -87, 114, 37, -95, -17, -100, -93, 85};
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
    msg.setTimeStamp(0.0320372361175);
    msg.setSource(40742U);
    msg.setSourceEntity(183U);
    msg.setDestination(63766U);
    msg.setDestinationEntity(28U);
    msg.frameid = 58U;
    const char tmp_msg_0[] = {48, -4, -16, 23, -125, 116, 68, 43, 110, 90, 126, -108, -96, 9, 6, -54, 120, 8, 41, -34, 61, 34, 120};
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
    msg.setTimeStamp(0.0837293944668);
    msg.setSource(3531U);
    msg.setSourceEntity(81U);
    msg.setDestination(41098U);
    msg.setDestinationEntity(65U);
    msg.fps = 207U;
    msg.quality = 94U;
    msg.reps = 93U;
    msg.tsize = 64U;

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
    msg.setTimeStamp(0.739598029119);
    msg.setSource(8640U);
    msg.setSourceEntity(230U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(108U);
    msg.fps = 22U;
    msg.quality = 171U;
    msg.reps = 148U;
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
    msg.setTimeStamp(0.0975490459723);
    msg.setSource(29973U);
    msg.setSourceEntity(133U);
    msg.setDestination(4165U);
    msg.setDestinationEntity(154U);
    msg.fps = 49U;
    msg.quality = 57U;
    msg.reps = 128U;
    msg.tsize = 174U;

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
    msg.setTimeStamp(0.503147597611);
    msg.setSource(48555U);
    msg.setSourceEntity(104U);
    msg.setDestination(48458U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.962244594523;
    msg.lon = 0.837676214014;
    msg.depth = 153U;
    msg.speed = 0.978717880405;
    msg.psi = 0.625358058355;

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
    msg.setTimeStamp(0.473836023684);
    msg.setSource(64575U);
    msg.setSourceEntity(45U);
    msg.setDestination(55219U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.929232369532;
    msg.lon = 0.520034845935;
    msg.depth = 86U;
    msg.speed = 0.731127540862;
    msg.psi = 0.850048951324;

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
    msg.setTimeStamp(0.206580578643);
    msg.setSource(12896U);
    msg.setSourceEntity(191U);
    msg.setDestination(5356U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.79399464985;
    msg.lon = 0.580062054481;
    msg.depth = 121U;
    msg.speed = 0.813149764116;
    msg.psi = 0.19781487273;

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
    msg.setTimeStamp(0.0084964094023);
    msg.setSource(5888U);
    msg.setSourceEntity(23U);
    msg.setDestination(44717U);
    msg.setDestinationEntity(65U);
    msg.label.assign("GZPMYMBMVXNFLSYAYUNWBLTFRPKVZKPFCTIHHYVLSLHUACQFTTHXLOFXMOWVCCPAOENHLZKRFZPTYHEICOWPGJEKICGKUNKARRNXDBMVLZTJSOEMAUAZAJJQYBBFKSZPQZXPAEQUNKTDAISBDIETXSRAXDFWYGHICKWGCGMUVGOJGVPFHRYSTDJBRKUHIPJOWQEUYZSXNLBZRQONRUMQMGEMXJD");
    msg.lat = 0.270859999589;
    msg.lon = 0.791739217021;
    msg.z = 0.61468071921;
    msg.z_units = 69U;
    msg.cog = 0.00830427237108;
    msg.sog = 0.440628573421;

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
    msg.setTimeStamp(0.635086946815);
    msg.setSource(17693U);
    msg.setSourceEntity(57U);
    msg.setDestination(27808U);
    msg.setDestinationEntity(146U);
    msg.label.assign("VJQYVAXDRFEBMWZSKCCXGXXKKRZOQRABUQZXLDJINMWXEHCQMMABQMHTELESWVNYGTGUVBSNYFKZDEIVZNNBEJJUAFKSFYHPXELRVQTNDRWSMABMZJQNVRGUZTXLBQPNGXSZJKUSDGVTKSDTMFINASIHJYFHWQIPPJRTHMOFOTJCZFPOROEDBTEYUVCCOXUFAGLH");
    msg.lat = 0.14998895884;
    msg.lon = 0.442314564789;
    msg.z = 0.941176890389;
    msg.z_units = 126U;
    msg.cog = 0.426163903317;
    msg.sog = 0.463173972671;

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
    msg.setTimeStamp(0.308023116191);
    msg.setSource(7360U);
    msg.setSourceEntity(173U);
    msg.setDestination(62144U);
    msg.setDestinationEntity(214U);
    msg.label.assign("EGSBTIBPERW");
    msg.lat = 0.941598466584;
    msg.lon = 0.924285914723;
    msg.z = 0.181659442286;
    msg.z_units = 7U;
    msg.cog = 0.99050472316;
    msg.sog = 0.733133402828;

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
    msg.setTimeStamp(0.336337012356);
    msg.setSource(49610U);
    msg.setSourceEntity(34U);
    msg.setDestination(4733U);
    msg.setDestinationEntity(24U);
    msg.name.assign("NDWRYICWAOMPKHGNKAQVTLCNYFTVRHUGJGNZKRDIFSJDFOPNAHOXNTHTVZSLJHJABGWLKCMYII");
    msg.value.assign("TDSZVTGIKLWOKEZJXDJRUEEGNSOVDTJUKYNSEEOCBQZXIILFYINPB");

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
    msg.setTimeStamp(0.816655329441);
    msg.setSource(64248U);
    msg.setSourceEntity(178U);
    msg.setDestination(29106U);
    msg.setDestinationEntity(182U);
    msg.name.assign("WEOKKKOTNSUFUOUEHEQVFCRKNYFLSJUEYWZFLUZIWGYQNSPBLXTJISPAEGHYHGPYIVOHRFVQNVTOYSFZWPIXIKDHQTHXA");
    msg.value.assign("CSOYOHPCFDKLRXAYSJZBWGYMARMHBHDCVHVOIHZCUBXUWQHTXERPBDPOKOTSKOBEFTJEZKVESIBJUYDXBKTSRVOISRJIKVWDWRQCZMAZPWWLBJGTTSAGIQEAUMSXEGZQDYURIANJFTGXXLGJDKHW");

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
    msg.setTimeStamp(0.197489335243);
    msg.setSource(63852U);
    msg.setSourceEntity(125U);
    msg.setDestination(7534U);
    msg.setDestinationEntity(243U);
    msg.name.assign("YZMRGPWVUZGYMYKGXASBEFPGSQOPVZZSPEOTKPYGXIVYJGIJNRPEFLIJDNHWXWAOMKHPBDWUQLWQHOUWUITXKIKKTFAJCURBWQBACVHRSOHUROOIIWZLCDJUP");
    msg.value.assign("CQYIPIKOEBDQLTABONHVYFKMGNSBBISMYUNKAWVIHDRGSEACUCDGXHKAEMXMBKEVZWWATHXHTRDOZRSNVWUFWFMPJZSJTOJVYJYPGLWJFVPIEIFCXWRYPZGRAVGWQCTUEZHAMLHERNTFFCQQNKPJOAHHDTODFLNVRUJBSMUUMUH");

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
    msg.setTimeStamp(0.07070794285);
    msg.setSource(64672U);
    msg.setSourceEntity(127U);
    msg.setDestination(42093U);
    msg.setDestinationEntity(103U);
    msg.name.assign("QUQZDUNVHUWGVOODWHWYUKXXTBSGFIGJXNKADLLJUSLJIJKFFEXZVVMRMPWMZGBSWFRAYASZJRQCIOAYDWRYCHZLLZKNSBNXKOHPQAKFSVRYNJTXWEPWGZKDUJBEHJBFEUTDCVYNYSIUKLBPWIXUBHYAMPPRPIHTCBQNZQTOOZTKDVCPPTMWREEFGZLSBQSFLRAGKCCDHOBALOXVQVIPMYUYAFIVQMFMN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("REXFEVIUGOHGAJNLXVEUVORTNNYPKGHICCJTGRLOZPPMLIYXFZFHKKOMMOJFJSQOQYIPJQVXBHWJABNAOPZCYVOUGZMUCQKTQLGIF");
    tmp_msg_0.value.assign("PTKVYBIJXGBNZDLCURPJDJKGFPGVHINONQFOTAENWOIFMUFVVFPLUHZOQEPWTAPOKRGGMHPGKVBXSLOOZETDDTIEHOIUCAPZJRZYNDHMXELYWRKKLZDCLXSLFWFVSMPHVDXSXMMTRQJSGZFSMSRUUDWQAYYAW");
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
    msg.setTimeStamp(0.120022753382);
    msg.setSource(34518U);
    msg.setSourceEntity(2U);
    msg.setDestination(38762U);
    msg.setDestinationEntity(49U);
    msg.name.assign("SCHAEQBYCABUJEJIOMZSJOSROKISVKUDQXHYQRPMUHBTGMYPFLESMTBKFCOTDCJIMCLZAFFHQBUBWKFLZWQNASDIEIANZMXLYWUVPKQURNXCUXVTOU");

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
    msg.setTimeStamp(0.24432628179);
    msg.setSource(45976U);
    msg.setSourceEntity(187U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(193U);
    msg.name.assign("OMHJOPKUEQVFTYJBLKRSWBIETHGNCNJNFGAYTLKEXOTDCXPHZMWEBUXUSFWXALUCGLYKJPZZGHHF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QNVJRVTHYMDSVHUHEREMCLAZLQKVXHUXSPQBMEROSIOINDIUJKDSWLXOROWLVNLJJQGEJMNFZFLWKUCBWTDZQMFFUOAKUCYBAURYSOKEWECYHKLIXXHZIVATILOKTIACSYFNGGKSYPCGZZGTPVAQWGPOMDGDTTKDPRSJVWZBNOGNTREMBPMZVFPSNJWBCXG");
    tmp_msg_0.value.assign("DKMPTIOTXPTJBGEQUCZURSIGJFTCLGCPZUMJFALBPHFWSGETXQWYQUALHTDEPSYLEARAVMCSFANUZLYWZZFCQDWBMBYDZYRNNIGQXJKIXWPOMALGIGDRTDRRXOWNNREVZSADEJXFIGGDNXZJKIVSVLWEYXHYWKPHJBJCMUSDHQVOXIHQAPYZMXMVKZEFWQOBUKCUGPQSQUTWUTHSVJBKRRNJOKAFABOKHPYVBO");
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
    msg.setTimeStamp(0.944418187);
    msg.setSource(53386U);
    msg.setSourceEntity(38U);
    msg.setDestination(3576U);
    msg.setDestinationEntity(40U);
    msg.name.assign("ESSVQQUBBNSMWZLJYRVLLTCXEHSESRYYEDGWXNGBSMJOOMGYGKKRHOTABEDHTSPZNIX");
    msg.visibility.assign("PUJKAHUJTAQLFNVXCAUGGBDSGEPXPDRADXHVIUJQFJXJDIKJBIUOYQEGLMSZHYBXYIOOEOSSZXDLCNBZSGKKDUCFVTMTMZLNBXYQYZMCCFVW");
    msg.scope.assign("VBMPDRDRICZTXXLHCGKINJVGZBMMRMISNOFMOGVIEREUKTASBLHFEYQRDXLGYNIKFZQEVWJUBVZLELTTAHMQIMTFDBHPQANHTRGFAVPCYCWPBUPNMSYKBEJOGGFYVUWRUFQLAOMRCWINQOBTUVXXFAKPYQZOPJJLWDGEGUHFIZCOLNDCIXBCFVXRSEKSEQAJPWWUOYDZLOXKWXYDJALIYJAJECGWHNKHBSSZSDT");

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
    msg.setTimeStamp(0.325151259242);
    msg.setSource(13744U);
    msg.setSourceEntity(145U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(31U);
    msg.name.assign("YLBWVXXBZBNUXNWDVRKKYLSPICZODRZLNQXSAVHAOJTGVSDESKPIWYQEVCHKMWFIRZBVTYGQYFGVWRBLPAMEIOGCRVHSEKPBUEOMMGWDMYFHHDJTSTMZYFXFOGALYCJTUONIAWEQRCJLLSZFIZBAUHAHZAGPYUSWTGMQXRJSQDAMPXUDDIKGWJZUTGBBHQDCCEIPVOKKEIPLNNJKNXBHREC");
    msg.visibility.assign("JDPCPBLQKJNNCWWDSUVKYWXMJIDGIXKPDSIFAUZVAYOQZOROD");
    msg.scope.assign("SYRDHOWGRWYOTZALCMQBVAZPHBFSLJVDEUFJZASYRDJCNPJMFWUIGGMZKQDICKCPTECTPVULLXFPNHMXXFPFIYZQWXBQEGOOXGBEJSJWNMRQYCUWEJVRMRKVKCUFWTUASHSNCIEHXTYEMYKQOTAAPZUYZESCNOSKODKHZHPLODCATHNNYLEXMXQUQRGTPFXAHYQTZKDMVMRFKGLPBWJABBLJJWNIBTIILRBWZFNVVDGILGDRVI");

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
    msg.setTimeStamp(0.628854144102);
    msg.setSource(19299U);
    msg.setSourceEntity(225U);
    msg.setDestination(49750U);
    msg.setDestinationEntity(84U);
    msg.name.assign("KPTLHNOYYEEPZVAJYBNKODZZCGYMNQPUCXSMPTGAIEATDAJUGBRJMOQCHLCJLAMLCSH");
    msg.visibility.assign("VNWONQJWXNCKPHBZKZRPJBNLEOPJIDQFPFSQAVISJGTPRBGSVSOKELLPUCTARWGAQCFQNVQBYUKFICALOSZDGCEDMHBKSQGRHBHMJKAPZDDHYYKVNGMEVLJAUTFEBAQLKISXRBPOXMTOCXTJCIMYZVSUWTUTQOCRHNZWGEJRXXQMAIJMIWHXVXEDYO");
    msg.scope.assign("KLHJFXAPEPOCUMDGTYXSIZPMVOJRIOTIKVNWFNGWOCFECIUVAECSPPBGQDTKUDKMFZABIAAETFXYRRPLZTUNHCRWMDBWHYZKGEUIVPALOQPBPBDIJUHFTXGNDVVB");

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
    msg.setTimeStamp(0.939945966508);
    msg.setSource(30599U);
    msg.setSourceEntity(117U);
    msg.setDestination(2759U);
    msg.setDestinationEntity(166U);
    msg.name.assign("RNDYEPPWDPAUTQNOYQEHLXIMRSNVQKKHPIBYBIMFKOLRXHYUSPYSCGMHTGXALZG");

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
    msg.setTimeStamp(0.0439882338381);
    msg.setSource(36416U);
    msg.setSourceEntity(189U);
    msg.setDestination(49987U);
    msg.setDestinationEntity(125U);
    msg.name.assign("HCJWMLGTDMQEWDKNBFSLOKKQUEZVABTNJYMZNCYGESDWTJPRAQFHZPUFIZOHZNURGGVIXAMPESYQDQVQUZRPWKOQHOYGLVXGABIORIMXOSMSRKFJCMYOHWLWVASAHHFXVPONJPJBISFLHICKFCDXDPYXLGWLKDBVKTQLBYYJCECMGWTOUFISNSZLETGAUOPJXRUJWYVTMYRRDBJADHDHXTWXNUBEKTNREITNV");

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
    msg.setTimeStamp(0.542847790861);
    msg.setSource(47225U);
    msg.setSourceEntity(172U);
    msg.setDestination(24115U);
    msg.setDestinationEntity(95U);
    msg.name.assign("CTFRIVJFQOBZIGSTAZWJWEMOAHIPNQPWZWBAZSTRUOWNLGVDEFOKESSPJEYVVUXWUIGIFPLBCUKAUWHZCSXXQOPJCEUAKNSZLJQDVPXZSHZLCBDJBEUYLSQCLFUTHJYJRUXOFHKILDKCCDASLXVAOQTNGGTHKWNMYNXDJQYFHHRMYXPRBMYMCIBXNRMHRUTEFRTIMYTANFKOQVEASGEZTGKBGLAYPVMVDGBOOKD");

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
    msg.setTimeStamp(0.288395935651);
    msg.setSource(4732U);
    msg.setSourceEntity(230U);
    msg.setDestination(13536U);
    msg.setDestinationEntity(5U);
    msg.name.assign("WRLEQHTIRGFXRWYYGWPTOLIYWCHOQTUOBAAPSUARURVRJMGDWQJQGNYZMKVSFAIHUCTYINLRWEFGOINCIVDCDRUQMAHQBPQYYEFTSLZZROAZBFSNYUGLUJHHKJXRDWJWFPYBAWXDKSVJKQEVCHOICONVZXYQUKXHPBGPVTIKQVFPFUXTSPEIOTFEWBNECAJSMELSXVAJGZGKSOTPBMFCJTOILZKCHMDXMHVNNSKDZEMJDNMEU");

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
    msg.setTimeStamp(0.996606932103);
    msg.setSource(63392U);
    msg.setSourceEntity(87U);
    msg.setDestination(23633U);
    msg.setDestinationEntity(1U);
    msg.name.assign("IOVTWCYMSUFTEKLXZOVZODFPGGCWZUKBNRJRYAZHXIZBNAHHASLPZIQQGRXSMEWYWEDARVLNJXFEPNRPDCWOBVUDSBYGFFJNJTPICGVUATFRQJJYPVNAMRUDCJRGLMZWIGFCQQFPGSSMFUSEJMUCBOKOXXHHXWTVNBHEGUSVAZPBQBDKLYOODATMOALUVIDEKTKXEPOWHHQZITFHQSYJDWYLVUAKMEGXLKHIYQJEPWKMK");

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
    msg.setTimeStamp(0.852177741218);
    msg.setSource(6990U);
    msg.setSourceEntity(222U);
    msg.setDestination(53338U);
    msg.setDestinationEntity(31U);
    msg.name.assign("CNMWJIXQKEXZVRFSZYOOIVHFIYVIONJIJDUVDLJURBVYHCEH");

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
    msg.setTimeStamp(0.880463566918);
    msg.setSource(47549U);
    msg.setSourceEntity(171U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(62U);
    msg.timeout = 1336666815U;

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
    msg.setTimeStamp(0.304657224268);
    msg.setSource(6846U);
    msg.setSourceEntity(55U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(78U);
    msg.timeout = 260464129U;

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
    msg.setTimeStamp(0.528644231136);
    msg.setSource(45111U);
    msg.setSourceEntity(180U);
    msg.setDestination(28797U);
    msg.setDestinationEntity(220U);
    msg.timeout = 2061148052U;

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
    msg.setTimeStamp(0.283882279482);
    msg.setSource(46192U);
    msg.setSourceEntity(196U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(244U);
    msg.sessid = 1006872848U;

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
    msg.setTimeStamp(0.0196907344245);
    msg.setSource(28009U);
    msg.setSourceEntity(60U);
    msg.setDestination(57339U);
    msg.setDestinationEntity(33U);
    msg.sessid = 80720801U;

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
    msg.setTimeStamp(0.188627085736);
    msg.setSource(5193U);
    msg.setSourceEntity(28U);
    msg.setDestination(11888U);
    msg.setDestinationEntity(142U);
    msg.sessid = 3035003045U;

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
    msg.setTimeStamp(0.37997231814);
    msg.setSource(3428U);
    msg.setSourceEntity(121U);
    msg.setDestination(19461U);
    msg.setDestinationEntity(222U);
    msg.sessid = 818774792U;
    msg.messages.assign("WHYUMRFYOXKUQQYKNEQYPWERLMPQFYCRGDNIFXLLSZSKCXARTWPZBTHREUDTIONVHEYJAFBTBBXBZJOGOJJAQLFNGLCZXGICVWJAEVSOFILAMFTCLSIZEVMGKLIZHFNTYPTUJAIHOMRPTCNWEAXVKKQBUZOVQVRNQCMXUEMZUPBQDW");

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
    msg.setTimeStamp(0.334353552087);
    msg.setSource(48168U);
    msg.setSourceEntity(132U);
    msg.setDestination(7176U);
    msg.setDestinationEntity(42U);
    msg.sessid = 1311606002U;
    msg.messages.assign("DIRGNVWWQJMCTKBVRUSDBAISZWJEHYHIQNDKJUAXXQSUMFDEZUCKGLRVZNAEBBCRGGY");

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
    msg.setTimeStamp(0.559045881485);
    msg.setSource(9371U);
    msg.setSourceEntity(242U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(31U);
    msg.sessid = 1579660739U;
    msg.messages.assign("GFPXNKNLLXVOUVVPQJCKSCCBHYLWRTGDPOCLDOJWSEIVJWEBMAMVYMYZUAIIEEZFRNJGRKQLSNQLZFTSHCISISQACFGZHIEXHQSGBGNKYAPEFUNUKPGHOXMMJJIYDULKQBDJXTIOHZJLFFTQCPXTYSNMSYUAKDZXFBWRIYMWHKTUDLKF");

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
    msg.setTimeStamp(0.645097596434);
    msg.setSource(47583U);
    msg.setSourceEntity(22U);
    msg.setDestination(38396U);
    msg.setDestinationEntity(240U);
    msg.sessid = 499062198U;

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
    msg.setTimeStamp(0.265273222265);
    msg.setSource(5496U);
    msg.setSourceEntity(81U);
    msg.setDestination(16640U);
    msg.setDestinationEntity(208U);
    msg.sessid = 459048712U;

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
    msg.setTimeStamp(0.373961859391);
    msg.setSource(45066U);
    msg.setSourceEntity(196U);
    msg.setDestination(41989U);
    msg.setDestinationEntity(201U);
    msg.sessid = 2456175162U;

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
    msg.setTimeStamp(0.239839458066);
    msg.setSource(47626U);
    msg.setSourceEntity(115U);
    msg.setDestination(57741U);
    msg.setDestinationEntity(144U);
    msg.sessid = 2888858541U;
    msg.status = 115U;

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
    msg.setTimeStamp(0.928031186685);
    msg.setSource(58966U);
    msg.setSourceEntity(224U);
    msg.setDestination(48909U);
    msg.setDestinationEntity(119U);
    msg.sessid = 1816275320U;
    msg.status = 162U;

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
    msg.setTimeStamp(0.579211075436);
    msg.setSource(46445U);
    msg.setSourceEntity(213U);
    msg.setDestination(40484U);
    msg.setDestinationEntity(97U);
    msg.sessid = 835807377U;
    msg.status = 1U;

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
    msg.setTimeStamp(0.847980522894);
    msg.setSource(43614U);
    msg.setSourceEntity(155U);
    msg.setDestination(4832U);
    msg.setDestinationEntity(106U);
    msg.name.assign("CALJEKFEGLVQJSGYAHLMRYFDMQANOHISPQ");

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
    msg.setTimeStamp(0.484577958375);
    msg.setSource(60209U);
    msg.setSourceEntity(130U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(159U);
    msg.name.assign("ECRRQNBLMSPRRCEUZCWYHPWUCEIBIAXLYZZIITCWHTJFMYPLRUZRNFTYMYDONQZTHRSROGXYGZJLSDDBKFSQHGWZSNBOYTGXRXNAVCAVITJWXWNHSCVEWVNIFTQVFELVEVQIFUTGJAOWHFUDOAMRUUBVSOBYHAKSNBPGJXOWCQXHLYILWXGDMQXKOQMVCELNYKZUEBIKPHESZKUEMNQFDKDAQTIBGFK");

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
    msg.setTimeStamp(0.162110997505);
    msg.setSource(21331U);
    msg.setSourceEntity(133U);
    msg.setDestination(23902U);
    msg.setDestinationEntity(15U);
    msg.name.assign("MPFKCHPRFBDHQLJAYOARXGHEDFHGHXRANSDZAMEIJOYSDWWZUELLLJOUKFKSJNLPOMMQIBAV");

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
    msg.setTimeStamp(0.0966684102819);
    msg.setSource(14914U);
    msg.setSourceEntity(51U);
    msg.setDestination(47371U);
    msg.setDestinationEntity(10U);
    msg.name.assign("SKEGVGBDYSMDCJUNEVJBYWCARQFOJNIVGRVLKGXGMIXTHPVQTTUHIOSQKSUFKWSVUVOFNHMBKIXZLITQBZRZJYIQNUHPXMREDSLQAPPMJUIGWLDFYQDYONLHTLXZMWKAMPXODSBYCJXPXZQTZOWZFNIDAGOSAGYUHIMCLZCQORDEVUDKNRJPEAGAFXFPIUJXZFPWJAHRECTTVQYTACEYEFSLHNDRRCMWTOCBFBEJGMBKBNY");

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
    msg.setTimeStamp(0.255410881987);
    msg.setSource(64666U);
    msg.setSourceEntity(242U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(172U);
    msg.name.assign("ABYFVQUCWLZXMTADMBEIYJUHZXLZHKUAFZRBFUPIRWRMKQXUXYHDLLMGGVYXYJSNWAEWOTZSCTWISFRHXBRZOHCNPMSCMRNHSRKNQLPROPOGPNKCDRUFCOBQFINGBOPYFKKAUDAONEIXAVTGTQYYEEESCUSXJD");

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
    msg.setTimeStamp(0.73667524295);
    msg.setSource(6152U);
    msg.setSourceEntity(21U);
    msg.setDestination(54024U);
    msg.setDestinationEntity(125U);
    msg.name.assign("RKVWBEXXKSFREIPBDXEJZOQSFKGZGCNATWTOFCENDHDVOKFQUNXOZSGZCXXDXGYTUVHTMWHYWVKSQGUOPMWFDKSYXIFYNGAUSURAZBTARZLQPHMTCIFGISARYMCYAKCUEQMEEZJQWTO");

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
    msg.setTimeStamp(0.701705663348);
    msg.setSource(62362U);
    msg.setSourceEntity(30U);
    msg.setDestination(48296U);
    msg.setDestinationEntity(57U);
    msg.type = 88U;
    msg.error.assign("MAFSKAFGBXURSNLSEUGMOTMQGNCJVDJDVLDRKUVBIENLAGBBFCCQWOEZOHWRKVOVEIAOFWTTPRBIPCKJLQAABINIGLWHQPBSFMFKWHPPPSQXEGVHUVPENFOKGGDYRZZUJZOHHIUPIMSCHEYZHTZOSUYJNCSKEJCYFDDSMQGBMDCMXLTTWABDTDBRWRJXNWXXRJLPOKQNQNYTTXWCKUJWOEYUQZVMATLPFIYXDZZVHQLEAZYLMCFIYRSU");

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
    msg.setTimeStamp(0.593357761713);
    msg.setSource(55855U);
    msg.setSourceEntity(248U);
    msg.setDestination(40364U);
    msg.setDestinationEntity(14U);
    msg.type = 38U;
    msg.error.assign("VXXEIUAPBRFCRBHGHOXYQSFGVMWWPXWNXVTCDHQCZCCFUQEWZXJLRMKHRDAEMGSACJGBZSKANCZQMPYQGZGIEKISJNDFLMTLOZUETVSFGXAPUKOKLMTYDYECPQRYEMPDVDBDWPUWSZIPZHKAKSLRCNEFGTEHVTIBUEYZNAIOVPYAOGXUHOBWUCAKRJKRUHYJJBZFWUNXMYQITFJLNDBMDLDOHBTLVINFJSQ");

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
    msg.setTimeStamp(0.274267381759);
    msg.setSource(5777U);
    msg.setSourceEntity(22U);
    msg.setDestination(7803U);
    msg.setDestinationEntity(160U);
    msg.type = 133U;
    msg.error.assign("XUYTJWJNHPIZALFHBTJYYPZWVPHTFYVQVQXQXAPCGBDBCOQCDDIMHXJSBSXWBEGINLHVXLJZFVUKAKMOTQAEQIRDORUOIINBYJURWUMONKSPQEVGTLJMSMJCDKVIYHLSOGDDYLEBPZMDFCMJ");

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
    msg.setTimeStamp(0.0647215117684);
    msg.setSource(3263U);
    msg.setSourceEntity(14U);
    msg.setDestination(15462U);
    msg.setDestinationEntity(31U);
    msg.seq = 35478U;
    msg.sys_dst.assign("SEPDIWSMBJHAIQBHONHQXPTSCVIMWSFRAVYGYSUKJMHBJLQENEZYZUMRUDNKTSFJAHXRLL");
    msg.flags = 128U;
    const char tmp_msg_0[] = {100, 96, -75, 2, -86, -87, 112, 3, -13, 89, -82, -4, -126, -42, -112, 57, 50, 23, -4, -91, 79, -37, -1, -124, -12, 32, -64, 84, -75, 18, 67, 73, -72, -21, -11, -85, 60, 44, -7, 15, -54, -117, 27, -17, -28, 23, -2, 117, 95, -90, -26, 125, 112, -114, 67, 6, 27, -17, 58, -114, -107, 112, 67, 23, 123, 107, -17, -26, -1, -101, 6, 76, -117, -1, -32, -77, 42, 78, 4, -115, -120, 24, -66, 27, -17, 71, -6, -80, -8, 14, -5, -51, -27, -107, -118, -60, 64, 119, -53, -24, 17, -64, 123, -67, 41, 55, 121, 10, -102, -96, -7, -31, -9, 78, 124, 41, 38, -34, 97, -113, 5, -14, 102, -46, 17, -109, 86, -61, -19, 36, -22, -47, 16, -106, -90, -125, 27, 101, -58, -48, 62, -26, -18, -118, 123, -107, 99, 1, -14, -19, 28, 41, 45, -36, -55, -102, 82, -6, -3, -14, 123, -72, -70, 20, -106, -11, -95, -30, -48, -64, -80, 63, -70, -115, 118, -43, 43, 50, -26, -103, -87, 126, 108, 54, 99, -87, 49, -50};
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
    msg.setTimeStamp(0.822581059762);
    msg.setSource(26229U);
    msg.setSourceEntity(84U);
    msg.setDestination(59374U);
    msg.setDestinationEntity(103U);
    msg.seq = 12846U;
    msg.sys_dst.assign("NYJKUPPQAYCLHHUGVHPKBIJZIYWSKGBYIYWCTVFKIOJLVWY");
    msg.flags = 202U;
    const char tmp_msg_0[] = {51, 104, -66, -55, -122, -82, -73, -64, -121, -47, 7, 75, 21, -118, -92, -62, -86, 125, -16, -104, -78, -84, 64, -66, -13, 89, 10, -97, -98, -20, 6, -18, 99, -61, -63, 117, 3, -65, -105, -76, -4, -90, 1, -85, 68, -112, 67, 40, 44, 76, -34, -63, 91, 67, 48, 97, 24, -35, 45, -20, -32, 67, -126, -114, 28, -30, -85, -35, 77, 91, -93, 71, -51, -29, -54, -62, 95, -56, -91, 42, -120, -48, 90, -11, 14, 83, 73, -111, -107, 75, -54, 83, 80, -104, -127, 101, 17, -64, -77, -98, 13, -101, -47, 41, -15, -33, 76, 34, -87, -28, -55, -112, -107, 126, -47, -50, -33, -126, -29, -17, -108, -38, 105, 94, 113, 78, -43, 23, 15, -106, 64, 64, 110, 93, 105, 76, 41, -7, 60, -123, 41, -82, -25, -115, -17, 55, -84, -102, -100, -69, 10, -110, -39, 9, 101, -23, -85, -57, -51, 115, 3, 16, -94, 11, -110, -120, 123, -27, -15, 109, 26, -72, 96, -63, -80, 126, -105, 117, 111, 124, 23, 72, -40, 14, 101, 45, -106, -23, 89, -61, -59, -15, 103, 44, 120, -92, 66, -47, -24, -36, -103, 50, -110, -117, 49, 122, -5, 108, -23, 50, 1, 12, 19, -95, 11, 89, 77, -46, 28, -50, -107};
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
    msg.setTimeStamp(0.236737455027);
    msg.setSource(45967U);
    msg.setSourceEntity(111U);
    msg.setDestination(10823U);
    msg.setDestinationEntity(57U);
    msg.seq = 18665U;
    msg.sys_dst.assign("JKEHEIJEZDSZDAYYMXNOQIWAXULOWTLKLYMZFBGTHKCAJGCWMSZUKNKJSN");
    msg.flags = 205U;
    const char tmp_msg_0[] = {-78, 19, -112, -72, 121, -103, 19, -67, -4, -102, 44, 88, -77, 3, -2, -86, -83, -75, -74, -21, 52, 97, 123, 25, 97, 67, -15, -110, -70, 29, 86, -112, -1, 19, 1, 47, 21, 2, -13, 120, -15, -111, 43, -44, -118, 16, -25, -53, -126, -104, 103, -54, 29, -102, -96, -6, 59, -71, -123, 77, 54, 87, 70, 73, 112, 116, -64, -22, -82, 59, -27, 126, -20, 58, 82, -37, 79, -90, 68, 20, -22, 9, -73, 84, -54, 125, -116, 85, 123, 125, 58, -4, -2, 104, -101, -36, 95, 2, -59, -20, -110, -56, -118, -51, 116, 66, -61, 95, -43, -80, 61, -5, 100, 105, -5, 72, -85, 60, -74, -110, 126, 15, 45, -114, -14, 101, -12, 111, -81, 1, -40, 67, 125, -7, 8, -73, 105, -95, -99, 33, 80, 16, -82, 99, -12, -105, -9, -96, 86, 36, 109, -51, -96, -68, 68, 60, -81, -3, 49, -7, -42, -96, -117, 13, 97, -41, 24, -126, 113, 96, 9, 9, -89};
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
    msg.setTimeStamp(0.885195672305);
    msg.setSource(25031U);
    msg.setSourceEntity(207U);
    msg.setDestination(61014U);
    msg.setDestinationEntity(225U);
    msg.sys_src.assign("PMPBTCZYKSSWORQ");
    msg.sys_dst.assign("QZTRGJFIMLHIPVUCCUSAUARMILW");
    msg.flags = 203U;
    const char tmp_msg_0[] = {28, -91, -5, 28, 35, -45, -63, -47, -97, 37, 37, -16, -78, -36, 52, 105, 88, 6, -9, 70, 58, -62, -31, 111, -99, -93, 39, 53, -79, 83, 122, 12, -111, 70, 114, -77, -24, 78, 114, 97, -57, -17, -72, 5, -25, 114, 30, -10, 47, -7, 16, 59, -4, -69, 95, -127, -49, -35, -86, -122, 49, 99, -76, -13, 46, 65, 23, 48, 91, 61, 82, -19, -51, -102, -94, 37, -81, -20, 59, -50, -101, 96, 33, 64, -65, -29, 91, 44, -36, -97, -78, -102, -55, -78, 96, 26, 123, 86, 21, 25, -91, -128, -98, 108, 18, -13, -4, 44, 91, 28, -124, 4, 55, 48, 18, -56, -99, 47, -87, 120, 65, -99, 47, 26, 100, 10, 85, -13, -71, -55, 126, 12, -118, -124, 52, -30, -8, 91, -111, -25, 119, 95, 0, -76, 44, 109, -20, 40, 40, 106, 38, -64, 25, 77, 106, 121, 13, 34, -42, 55, -38, -94, 121, 83, 20, -113, -29, -118, -118, 74, 116, 21, -116, -70, 4, 116, 126, -35, -5, 122, -85, 34, 89, -112, -69, 34, -4, 55, -40, 3, 47, 123, 17, -4, 104, -103, 14, -62, -39, -104, 71, -40, 16, 69, 46, 15, -10, 40, -13, -115, 9, 75};
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
    msg.setTimeStamp(0.301057804752);
    msg.setSource(10413U);
    msg.setSourceEntity(217U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(253U);
    msg.sys_src.assign("OKJZHMYYUTQHBMGFVQQBBKLDHYUGTAIDVXVPSBUOQYRWYZALMKYLLCHKUGEXLXADDKSELFIVSICHERLXPXKDECTNATNBNSRMEVPRNQHCWHXESTJURWPZGPHDVZOSANAPDNMBEZSJIOCSMBJDJDJFJITVSOCROUQZUXZCZNELKUMZVWQIGPCBYTFOLQKAGVWNPLJOOFKWWNXGFQTWEBICPFHUXJRGQDWRFYTUMAFVXTPHRIYRYGWFJMBENAI");
    msg.sys_dst.assign("NEEXHFPQNTXTLDRPIBDJNMBZ");
    msg.flags = 34U;
    const char tmp_msg_0[] = {-68, -3, 109, 66, 6, -35, -67, -119, 29, 66, 63, 28, -11, -100, -52, -19, 8, 47, -3, -70, -90, -87, 11, 31, 51, -27, -95, 64, -25, -27, 83, -33, 38, 99, -81, -3, 103, -114, 0, 125, -24, 98, -126, 79, -116, -74, -79, 45, 49, 52, 51, 117, 75, 14, -93, 36, 36, -63, -56, -117, -1, -105, 102, 110, -25, 115, -32, -17, 119, -7, -101, 72, 81, -85, -123, -69, -120, 60, -59, 50, 1, 68, 24, -15, -48, 45, -110, 102, -24, 82, -23, 57, 90, 45, 18, 71, -83, -33, 9, -31, -55, 112, -23, -74, -98, 101, 16, 104, 105, -66, 116, -125, -86, 39, 110, -108, 81, 22, -16, -51, 65, 7, 59};
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
    msg.setTimeStamp(0.717960438286);
    msg.setSource(37876U);
    msg.setSourceEntity(14U);
    msg.setDestination(37187U);
    msg.setDestinationEntity(160U);
    msg.sys_src.assign("QGHASUZWDJIZCYQTUENWGACEQKGLDTLCJOPQUN");
    msg.sys_dst.assign("HQHJEBXSMWDFANQDXVMZAGEIQEMBDGBGJSRQNSLZVJGTPALCFVWEAPOBRHHIPSLFNEUIBPKKSNTZDMRERKZZCLPUKKHSOOMLFVOYLNHRUQBOZCHXECTKRKOOKBWNACZYXZKBAURFIPVQWJC");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-26, -21, -65, 11, -85, 81, 103, -65, -4, 117, 111, -123, -105, -76, 88, 94, -38, 51, -99, -50, 98, 67, 111, 32, -47, 95, -87, 126, 53, -61, 19, -41, 3, 22, 71, -24, 55};
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
    msg.setTimeStamp(0.626742981739);
    msg.setSource(60545U);
    msg.setSourceEntity(102U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(135U);
    msg.seq = 8373U;
    msg.value = 82U;
    msg.error.assign("IJQYMSQSUTAQZSAAKEENULDVDTSUBBBAQCMOPGPSWXJSDXAACMLL");

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
    msg.setTimeStamp(0.426019004361);
    msg.setSource(19492U);
    msg.setSourceEntity(47U);
    msg.setDestination(15021U);
    msg.setDestinationEntity(100U);
    msg.seq = 25598U;
    msg.value = 196U;
    msg.error.assign("BYMHBMFFDUCDIQJWLXLZDVQDXRTABWNEDQORBLTSUUGFSRXNDYSHVALSTKQKXTIEUPCCMVJMZCDBEJWBMQCEOKIOAYDENWVMFJVRRKMNMPAKIFLPENQGLENZISCICIIK");

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
    msg.setTimeStamp(0.598480597208);
    msg.setSource(25445U);
    msg.setSourceEntity(124U);
    msg.setDestination(64021U);
    msg.setDestinationEntity(141U);
    msg.seq = 61517U;
    msg.value = 96U;
    msg.error.assign("HTJDJLSNXQQMCLZKTAOFRZIKACGBPILUWWBISAOGCCYWKTGNKDTEWMPDWTIG");

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
    msg.setTimeStamp(0.335044301724);
    msg.setSource(14832U);
    msg.setSourceEntity(97U);
    msg.setDestination(11524U);
    msg.setDestinationEntity(177U);
    msg.seq = 25360U;
    msg.sys.assign("QKVFHTHDWJIENRPKDQWJVBKXWBLNFOFGFZLSYEHTQERARDWWQMPOUFVBMDXUZCBCQTXYLZRJQKNEYTDTUUKDINVNZFSSCLYSLHAHPLXMDPYTVLJKHMCGGZHYMHGQUUEWPMURFGWKJQMALGDSSCIXVYGOAGVI");
    msg.value = 0.779405056361;

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
    msg.setTimeStamp(0.570889828873);
    msg.setSource(24859U);
    msg.setSourceEntity(198U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(128U);
    msg.seq = 9249U;
    msg.sys.assign("XCAOTSNXOY");
    msg.value = 0.995491505701;

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
    msg.setTimeStamp(0.00841822763755);
    msg.setSource(57429U);
    msg.setSourceEntity(64U);
    msg.setDestination(41733U);
    msg.setDestinationEntity(150U);
    msg.seq = 35944U;
    msg.sys.assign("ATBCNRRQYIGVQVUBGVWIMIQZIZGOJHFHSPNUXBZCVEKSBMFKREMNCAUAJGKILFXUMQATGXHECMZSHOLFLLXYUSAJFPAYOYPUNEPYJGYQXRVBVVTKYLYTPQOWEKSGJSEEOBTMOFMMNOSRASWEDCSHQJCWZIHIUYPOFWDRQTSTNZ");
    msg.value = 0.507329336037;

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
    msg.setTimeStamp(0.583650583608);
    msg.setSource(29258U);
    msg.setSourceEntity(14U);
    msg.setDestination(38302U);
    msg.setDestinationEntity(237U);
    msg.action = 54U;
    msg.longain = 0.224957458245;
    msg.latgain = 0.738388262796;
    msg.bondthick = 1202898949U;
    msg.leadgain = 0.288464195673;
    msg.deconflgain = 0.189983230399;

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
    msg.setTimeStamp(0.339716384905);
    msg.setSource(21309U);
    msg.setSourceEntity(187U);
    msg.setDestination(10396U);
    msg.setDestinationEntity(233U);
    msg.action = 88U;
    msg.longain = 0.891077564621;
    msg.latgain = 0.459429391651;
    msg.bondthick = 2331418962U;
    msg.leadgain = 0.34216374993;
    msg.deconflgain = 0.906934086365;

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
    msg.setTimeStamp(0.705391833696);
    msg.setSource(17524U);
    msg.setSourceEntity(95U);
    msg.setDestination(6283U);
    msg.setDestinationEntity(93U);
    msg.action = 222U;
    msg.longain = 0.661424791751;
    msg.latgain = 0.601200893856;
    msg.bondthick = 1118443637U;
    msg.leadgain = 0.0333193154941;
    msg.deconflgain = 0.720111098954;

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
    msg.setTimeStamp(0.793080915769);
    msg.setSource(3916U);
    msg.setSourceEntity(202U);
    msg.setDestination(42127U);
    msg.setDestinationEntity(70U);
    msg.err_mean = 0.488833893265;
    msg.dist_min_abs = 0.82277860227;
    msg.dist_min_mean = 0.397469015404;

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
    msg.setTimeStamp(0.984881269729);
    msg.setSource(45293U);
    msg.setSourceEntity(160U);
    msg.setDestination(54596U);
    msg.setDestinationEntity(95U);
    msg.err_mean = 0.332646421344;
    msg.dist_min_abs = 0.918499130559;
    msg.dist_min_mean = 0.227171451841;

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
    msg.setTimeStamp(0.465734733386);
    msg.setSource(22064U);
    msg.setSourceEntity(92U);
    msg.setDestination(50605U);
    msg.setDestinationEntity(65U);
    msg.err_mean = 0.500061623617;
    msg.dist_min_abs = 0.103869442493;
    msg.dist_min_mean = 0.898779634513;

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
    msg.setTimeStamp(0.114839694879);
    msg.setSource(26656U);
    msg.setSourceEntity(110U);
    msg.setDestination(59805U);
    msg.setDestinationEntity(169U);
    msg.action = 78U;
    msg.lon_gain = 0.528905616774;
    msg.lat_gain = 0.0813265009919;
    msg.bond_thick = 0.417436672276;
    msg.lead_gain = 0.478043454366;
    msg.deconfl_gain = 0.534130297293;
    msg.accel_switch_gain = 0.263531516229;
    msg.safe_dist = 0.83469867445;
    msg.deconflict_offset = 0.00627866338161;
    msg.accel_safe_margin = 0.985084630059;
    msg.accel_lim_x = 0.161056608388;

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
    msg.setTimeStamp(0.667289182668);
    msg.setSource(3987U);
    msg.setSourceEntity(138U);
    msg.setDestination(38487U);
    msg.setDestinationEntity(101U);
    msg.action = 218U;
    msg.lon_gain = 0.854294278197;
    msg.lat_gain = 0.127431709749;
    msg.bond_thick = 0.708095475986;
    msg.lead_gain = 0.977992253112;
    msg.deconfl_gain = 0.0384575219514;
    msg.accel_switch_gain = 0.982333270063;
    msg.safe_dist = 0.0372330605643;
    msg.deconflict_offset = 0.611024857865;
    msg.accel_safe_margin = 0.653560685928;
    msg.accel_lim_x = 0.317729904911;

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
    msg.setTimeStamp(0.0973505229425);
    msg.setSource(16785U);
    msg.setSourceEntity(1U);
    msg.setDestination(21860U);
    msg.setDestinationEntity(208U);
    msg.action = 165U;
    msg.lon_gain = 0.67406900678;
    msg.lat_gain = 0.513058424602;
    msg.bond_thick = 0.509977589343;
    msg.lead_gain = 0.838384071056;
    msg.deconfl_gain = 0.12932263355;
    msg.accel_switch_gain = 0.40587421052;
    msg.safe_dist = 0.00455140301764;
    msg.deconflict_offset = 0.351274830804;
    msg.accel_safe_margin = 0.288558224609;
    msg.accel_lim_x = 0.854143276414;

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
    msg.setTimeStamp(0.697329214618);
    msg.setSource(46554U);
    msg.setSourceEntity(195U);
    msg.setDestination(2469U);
    msg.setDestinationEntity(4U);
    msg.type = 95U;
    msg.op = 134U;
    msg.err_mean = 0.191104149351;
    msg.dist_min_abs = 0.0177314715533;
    msg.dist_min_mean = 0.969654772534;
    msg.roll_rate_mean = 0.0572794492492;
    msg.time = 0.11246432317;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 177U;
    tmp_msg_0.lon_gain = 0.522962975554;
    tmp_msg_0.lat_gain = 0.786244119601;
    tmp_msg_0.bond_thick = 0.890392510089;
    tmp_msg_0.lead_gain = 0.835104727479;
    tmp_msg_0.deconfl_gain = 0.0147240930248;
    tmp_msg_0.accel_switch_gain = 0.259572394042;
    tmp_msg_0.safe_dist = 0.981018755187;
    tmp_msg_0.deconflict_offset = 0.596562119288;
    tmp_msg_0.accel_safe_margin = 0.410120396444;
    tmp_msg_0.accel_lim_x = 0.393203523411;
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
    msg.setTimeStamp(0.494523879597);
    msg.setSource(44626U);
    msg.setSourceEntity(152U);
    msg.setDestination(39145U);
    msg.setDestinationEntity(181U);
    msg.type = 18U;
    msg.op = 225U;
    msg.err_mean = 0.0824776076501;
    msg.dist_min_abs = 0.416490220632;
    msg.dist_min_mean = 0.140559641744;
    msg.roll_rate_mean = 0.799382018715;
    msg.time = 0.574979440484;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 13U;
    tmp_msg_0.lon_gain = 0.681234525627;
    tmp_msg_0.lat_gain = 0.996272280614;
    tmp_msg_0.bond_thick = 0.978291427701;
    tmp_msg_0.lead_gain = 0.0303497243572;
    tmp_msg_0.deconfl_gain = 0.690083879802;
    tmp_msg_0.accel_switch_gain = 0.431958055927;
    tmp_msg_0.safe_dist = 0.155690485541;
    tmp_msg_0.deconflict_offset = 0.0827842766184;
    tmp_msg_0.accel_safe_margin = 0.324229280945;
    tmp_msg_0.accel_lim_x = 0.874428389118;
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
    msg.setTimeStamp(0.97454373148);
    msg.setSource(1468U);
    msg.setSourceEntity(101U);
    msg.setDestination(40603U);
    msg.setDestinationEntity(134U);
    msg.type = 101U;
    msg.op = 198U;
    msg.err_mean = 0.501037632933;
    msg.dist_min_abs = 0.464123414755;
    msg.dist_min_mean = 0.953469461068;
    msg.roll_rate_mean = 0.32401314542;
    msg.time = 0.519909433153;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 106U;
    tmp_msg_0.lon_gain = 0.702513607622;
    tmp_msg_0.lat_gain = 0.935091170695;
    tmp_msg_0.bond_thick = 0.740261721246;
    tmp_msg_0.lead_gain = 0.876859073802;
    tmp_msg_0.deconfl_gain = 0.579098272987;
    tmp_msg_0.accel_switch_gain = 0.119428462217;
    tmp_msg_0.safe_dist = 0.358266090771;
    tmp_msg_0.deconflict_offset = 0.328921953605;
    tmp_msg_0.accel_safe_margin = 0.34071920287;
    tmp_msg_0.accel_lim_x = 0.159511944138;
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
    msg.setTimeStamp(0.528949228865);
    msg.setSource(46356U);
    msg.setSourceEntity(247U);
    msg.setDestination(53653U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.56058419263;
    msg.lon = 0.810600031781;
    msg.eta = 1427304224U;
    msg.duration = 53197U;

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
    msg.setTimeStamp(0.246835823819);
    msg.setSource(10702U);
    msg.setSourceEntity(26U);
    msg.setDestination(5596U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.356875512424;
    msg.lon = 0.619140630217;
    msg.eta = 3058391622U;
    msg.duration = 33806U;

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
    msg.setTimeStamp(0.0194328886815);
    msg.setSource(18322U);
    msg.setSourceEntity(105U);
    msg.setDestination(51614U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.991909789285;
    msg.lon = 0.363625040522;
    msg.eta = 830042015U;
    msg.duration = 4881U;

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
    msg.setTimeStamp(0.546576597651);
    msg.setSource(17137U);
    msg.setSourceEntity(193U);
    msg.setDestination(32878U);
    msg.setDestinationEntity(221U);
    msg.plan_id = 9011U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.434985188823;
    tmp_msg_0.lon = 0.640960172402;
    tmp_msg_0.eta = 3558039789U;
    tmp_msg_0.duration = 38347U;
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
    msg.setTimeStamp(0.397851580758);
    msg.setSource(39180U);
    msg.setSourceEntity(180U);
    msg.setDestination(47178U);
    msg.setDestinationEntity(229U);
    msg.plan_id = 38873U;

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
    msg.setTimeStamp(0.649115596941);
    msg.setSource(21229U);
    msg.setSourceEntity(27U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(14U);
    msg.plan_id = 42311U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.670297063286;
    tmp_msg_0.lon = 0.668803390702;
    tmp_msg_0.eta = 2870868259U;
    tmp_msg_0.duration = 54419U;
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
    msg.setTimeStamp(0.998364244421);
    msg.setSource(18878U);
    msg.setSourceEntity(161U);
    msg.setDestination(6064U);
    msg.setDestinationEntity(81U);
    msg.type = 138U;
    msg.command = 117U;
    msg.settings.assign("IZWUPTTXQIBKRRNIUFWWCQMCAYZTNUJSUBCKVBVNMPMQMTXFOFOKBHJUQIPPPBHQYYJLXKBCHZTDJIHLCOEOQWARFOVMD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59590U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LVCOQZRUFSQJIPIGXVHQFPFCTBJZYKEWCDEDSZAFNDSNYMOYABEYGXMSRTKOEKXFIIPSORRDJJGHXWYWYYOIAOQVCBOSPHIUMWBMAKDHXAOXEWYTQQRRIBLZNRCCLBLGKRICLZMWWHWFKPTLEESJNLDBVXWQHCIYLVVUMJFLKNMDGAZYWSHVRPSDTAXGT");

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
    msg.setTimeStamp(0.521222442626);
    msg.setSource(24260U);
    msg.setSourceEntity(44U);
    msg.setDestination(37857U);
    msg.setDestinationEntity(211U);
    msg.type = 49U;
    msg.command = 181U;
    msg.settings.assign("ZFTCCEMKMWVAHUGBOCYPTGRVAQAHNGFUAOJCDGLQHDBNKNGNOVMZMFJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25016U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.711275888785;
    tmp_tmp_msg_0_0.lon = 0.103063529603;
    tmp_tmp_msg_0_0.eta = 2114324261U;
    tmp_tmp_msg_0_0.duration = 36905U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KHGCXBEXPHEMKDPNAZJQVVSRPIKETDJYRSBONACZPBJVZEVRIQXYUPOHPRTCTNVXGEACIJYPXQITRTDQLHVSVKMEYQLQFERLKN");

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
    msg.setTimeStamp(0.796453895247);
    msg.setSource(21247U);
    msg.setSourceEntity(245U);
    msg.setDestination(58180U);
    msg.setDestinationEntity(133U);
    msg.type = 4U;
    msg.command = 166U;
    msg.settings.assign("RBXLMLDMZOVPDZJSIAJOUCEFGRKBMEQSIQALOPTMGVWGTYIXCIXQTOINPAXBAGKJQRKITYUPAEQEZPHWBJJNFAPFHJDYFWSIGSOJBLLANHZSHUKUXEKBBFUPCUZZLYFVCCHJBWFDYMKFFSQUYLOTKCVYWMUXNRVSINLZTSHNUWVTGGMWROZMXVEJHHOYWRRN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 7455U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LYXWLRSOXIPBSENTYQAADHFONEBYUGGNAGVTSZIRWKJXOXZSVZLOJJNBEKBYKUHGVUSQTJWWMYJ");

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
    msg.setTimeStamp(0.190753457453);
    msg.setSource(65193U);
    msg.setSourceEntity(84U);
    msg.setDestination(54798U);
    msg.setDestinationEntity(63U);
    msg.state = 240U;
    msg.plan_id = 1118U;
    msg.wpt_id = 230U;
    msg.settings_chk = 48839U;

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
    msg.setTimeStamp(0.610665051602);
    msg.setSource(26150U);
    msg.setSourceEntity(12U);
    msg.setDestination(13952U);
    msg.setDestinationEntity(199U);
    msg.state = 125U;
    msg.plan_id = 21532U;
    msg.wpt_id = 187U;
    msg.settings_chk = 46766U;

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
    msg.setTimeStamp(0.732942334764);
    msg.setSource(36054U);
    msg.setSourceEntity(46U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(21U);
    msg.state = 39U;
    msg.plan_id = 17504U;
    msg.wpt_id = 12U;
    msg.settings_chk = 23181U;

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
    msg.setTimeStamp(0.332954142898);
    msg.setSource(42640U);
    msg.setSourceEntity(93U);
    msg.setDestination(40598U);
    msg.setDestinationEntity(95U);
    msg.uid = 226U;
    msg.frag_number = 169U;
    msg.num_frags = 1U;
    const char tmp_msg_0[] = {-17, 92, -117, 50, 18, 15, -71, -120, -78, 16, -54, 83, -27, 29, -12, 122, 89, 45, -97, -35, 87, 58, 26, -75, -104, 58, 11, -72, 78, 71};
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
    msg.setTimeStamp(0.815814694358);
    msg.setSource(19514U);
    msg.setSourceEntity(132U);
    msg.setDestination(31096U);
    msg.setDestinationEntity(122U);
    msg.uid = 157U;
    msg.frag_number = 78U;
    msg.num_frags = 69U;
    const char tmp_msg_0[] = {-14, -11, 104, 55, 87, -7, -103, 125, -56, -71, 87, 24, 55, 75, -58, 58, 114, 110, -82, 83, -87, 57, 36, -30, -80, 111, 125, -58, 91, -80, 40, -41, 2, 72, -67, -123, 58, 41, 56, -17, 23, 57, 103, 100, -117, 76, -112, -2, 74, 13, 112, -104, -72, -23, -82, 53, -68, -11, -112, -36, 109, 48, 61, 78, 21, 26, -43, 100, -37, -74, -25, 7, -122, 31, 13, 73, 12, 96, 88, 61, -24, -124, -83, 72, 56, 39, 104, -71, -97, -123, 37, -95, 16, -61, -58, 76, 84, -56, -32, -88, 18, 29, -26, 97, 105, 49, 37, 46, -36, 33, -73, 61, 83, 105, 35, -57, -76, 73, -15, 50, -122, 47, -44, -47, 55, 47, -24, 1, -84, -24, 121, -78, -57, 103};
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
    msg.setTimeStamp(0.438749799593);
    msg.setSource(7696U);
    msg.setSourceEntity(91U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(78U);
    msg.uid = 23U;
    msg.frag_number = 66U;
    msg.num_frags = 166U;
    const char tmp_msg_0[] = {-121, 96, -89, 98, -27, -22, -43, -105, -16, 71, 64, -25, 43, -94, -49, -64, 31, -88, -70, 2, 88, 12, -78, -102, 37, -54, 65, -122, 124, 122, 27, -38, -98, -66, 34, -55, -84, -82, -91, 20, 28, -45, -115, 95, -20, -82, 3, -11, -14, 28, 38, 123, 99, 82, 105, 118, -48, 119, 113, 106, -116, 122, -115, 102, -100, 91, 0, -115, -105, 33, -42, -33, -105, -71, 3, -7, -60, 24, 90, -11, 97, -18, -90, -48, -42, 39, -66, 85, 97, -55, 56, 107, 99, -120, 59, 52, 72, -121, -79, 121, -105, -77, 82, -92, 101, -106, 20, -35, -79, 36, -102, 31, 82, -31, 79, -57, -52, 31, 4, -13, -55, -120, -12, 80, 67, -44, 96, -96, -114, -13, 121, 65, 41, 93, -101, -126, 23, -53};
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
    msg.setTimeStamp(0.228761037346);
    msg.setSource(48484U);
    msg.setSourceEntity(32U);
    msg.setDestination(16484U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("DJUABBRKNLIXJZSKVMIVTRSPKPG");
    const char tmp_msg_0[] = {32, 114, 39, -127, -127, -16, -91, 57, -103, -71, 126, -53, 85, -23, 74, 96, 114, -69, 90, -4, 68, -41, -118, -42, 112, 102, -73, -103, -119, -109, 112, 101, 16, 63, -118, 4, 95, 90, 40, -74, 77, -110, 77, -80, -100, 79, 36, 95, -76, -57, -88, -5, 20, -94, 114, -90, -92, -105, 84, -43, -47, 67, -104, 30, -23, -99, 53, 61, -99, 14, 125, -115, 81, -83, -1, -4, 46, -120, 35, -1, 35, -51, 101, 29, -99, -95, 91, 90, -41, -112, -69, 24, -127, 34, -103, 101, 81, 56, -94, 97, -127, 57, 100, 122, 74, 37, 125, -1, 87, 40, -57, 47, -51, -48, 58, -118, -116, 46, -70, -101, -18, -47, -103, 87, 123, 120, 17, -63, -121, -93, 22, 116, 104, -11, 14, -21};
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
    msg.setTimeStamp(0.927931855554);
    msg.setSource(24468U);
    msg.setSourceEntity(167U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("MIFTLHKDHWHERVAXYJSUFJPFLRUGXVLQOEWORQYDPGEOQNKTDGQCFWETQZGKSFPHRZDKVAIUCCEQWMNWFUKYCZORSYXQUMWBFVETMOMLYXJLPTCMSAKAHORFLJQWSPTKONHUPAIJKDMZESRXNTDNNGUNOTKIHUXATVYUMRYVIMZFEYDCPBCXBBNDY");
    const char tmp_msg_0[] = {33, -42, -27, 38, -73, -9, 63, -117, -71, -65, 5, -69, 83, -45, -109, 19, 36, 71, -121, -127, 43, 121, 100, -1, -52, -68, 26, -9, -31, 55, 48, 99, 23, -101, 98, -49, 39, 28, -69, -102, -32, -95, -24, -41, -21, -54, 21, -126, -1, -83, 105, 68, 125, -85, 28, 106, 21, -49, -96, 96, -63, -9, 98, -117, 15, -119, -42, -96, 49, -18, 41, 110, -2, -114, -108, 9, 3, 98, -71, 113, 4, 38, -45, -48, 39, 99, 73, -23, -23, -62, -44, 31, -9, -88, -81, 28, 44, -39, 48, 21, -69, 21, 1, -6, 67, -49, -54, 66, -51, 114, 42, 97, 4, -12, 54, 12, 95, 16, 28, 93, -3, -22, 119, -28, -110, 79, 34, -35, -73, -122, 116, 72, -79, -43, -107, -122, -43, 76, -100, 103, -107, -128, -53, -34, -26, -105, -88, 92, 55, 44, -92, -8, 102, 6, 30, 91, -109, 19, -78, -108, 80, -4, -38, 15, -87, -58, 22, 119, -41, -36, -89, -82, -47, -46, -105, 28, 54, -44, 49, -57, -103, -126, -18, 118, -26, 102, 22, 110, -13, -84, -122, -127, -116, -34, 16, 46, 8, -67, -2, 1, -49, 56, 86, 110, -6};
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
    msg.setTimeStamp(0.840805980859);
    msg.setSource(37370U);
    msg.setSourceEntity(38U);
    msg.setDestination(30322U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("BUIYURRYWXJJEOVBWKXGHNAUDMKLQISRPPSNNUFZSOZYAGWZGQLOXGRGEHHFNKKTCSBAYIMQMJ");
    const char tmp_msg_0[] = {35, 112, -47, 61, -58, -51, -25, 3, 79, 70, 3, 79, 115, -30, -9, -122, 77, 18, -30, 93, 51, 49, -38, -25, -38, 2, 11, 48, 13, 35, -96, -20, 113, -46, -56, -87, 80, -27, -30, 81, 106, -107, -2, 27, 81, 91, -16, -92, 89, 58, 117, -111, -9, 55, 5, 71, -106, -108, 18, -40, -67, 87, 78, 111, -41, 77, 113, -23, -120, -3, -125, 40, -44, -14, -99, -92, -54, -120, 44, -112, 15, -29, 11, -85, -7, 124, 11, 88, -39, 22, 18, 77, -102, 43, 91, 116, 28, 30, 18, 4, -48, 9, 70, -122, 22, -101, -44, 15, 13, 125, 51, 114, -97, 97, -125, 93, 118, -72, -39, 65, 6, 97, 2, 114, 101, -97, 71, -98, -14, 73, -28, 7, -117, 21, 60, -59};
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
    msg.setTimeStamp(0.743508397725);
    msg.setSource(35865U);
    msg.setSourceEntity(187U);
    msg.setDestination(2674U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.761427774685);
    msg.setSource(16087U);
    msg.setSourceEntity(128U);
    msg.setDestination(50207U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.843708712972);
    msg.setSource(46733U);
    msg.setSourceEntity(171U);
    msg.setDestination(58749U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.0801444731942);
    msg.setSource(41204U);
    msg.setSourceEntity(252U);
    msg.setDestination(64944U);
    msg.setDestinationEntity(123U);
    msg.target = 12150U;
    msg.bearing = 0.229395690158;
    msg.elevation = 0.654232641622;

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
    msg.setTimeStamp(0.144443075003);
    msg.setSource(21550U);
    msg.setSourceEntity(42U);
    msg.setDestination(18976U);
    msg.setDestinationEntity(237U);
    msg.target = 35389U;
    msg.bearing = 0.534983141778;
    msg.elevation = 0.675136853165;

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
    msg.setTimeStamp(0.613441369333);
    msg.setSource(64790U);
    msg.setSourceEntity(96U);
    msg.setDestination(37403U);
    msg.setDestinationEntity(100U);
    msg.target = 52333U;
    msg.bearing = 0.607884207643;
    msg.elevation = 0.0748495444591;

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
    msg.setTimeStamp(0.963980540804);
    msg.setSource(50383U);
    msg.setSourceEntity(163U);
    msg.setDestination(19414U);
    msg.setDestinationEntity(101U);
    msg.target = 38393U;
    msg.x = 0.419288511048;
    msg.y = 0.435442197767;
    msg.z = 0.928363283346;

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
    msg.setTimeStamp(0.305933420066);
    msg.setSource(35264U);
    msg.setSourceEntity(127U);
    msg.setDestination(52380U);
    msg.setDestinationEntity(206U);
    msg.target = 1585U;
    msg.x = 0.330820454302;
    msg.y = 0.471248957284;
    msg.z = 0.259087341636;

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
    msg.setTimeStamp(0.0932071592025);
    msg.setSource(13428U);
    msg.setSourceEntity(103U);
    msg.setDestination(31771U);
    msg.setDestinationEntity(214U);
    msg.target = 6132U;
    msg.x = 0.0339742020668;
    msg.y = 0.845086758735;
    msg.z = 0.337143142431;

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
    msg.setTimeStamp(0.916005881467);
    msg.setSource(18498U);
    msg.setSourceEntity(242U);
    msg.setDestination(16325U);
    msg.setDestinationEntity(62U);
    msg.target = 15551U;
    msg.lat = 0.218424940699;
    msg.lon = 0.644210764408;
    msg.z_units = 160U;
    msg.z = 0.942305163605;

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
    msg.setTimeStamp(0.711151783346);
    msg.setSource(23614U);
    msg.setSourceEntity(93U);
    msg.setDestination(28305U);
    msg.setDestinationEntity(12U);
    msg.target = 41556U;
    msg.lat = 0.0718608230222;
    msg.lon = 0.909770675678;
    msg.z_units = 94U;
    msg.z = 0.318132971567;

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
    msg.setTimeStamp(0.338316732358);
    msg.setSource(65465U);
    msg.setSourceEntity(75U);
    msg.setDestination(21249U);
    msg.setDestinationEntity(104U);
    msg.target = 52161U;
    msg.lat = 0.536304107753;
    msg.lon = 0.492874009695;
    msg.z_units = 123U;
    msg.z = 0.518168267586;

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
    msg.setTimeStamp(0.89467071309);
    msg.setSource(40120U);
    msg.setSourceEntity(132U);
    msg.setDestination(41841U);
    msg.setDestinationEntity(215U);
    msg.locale.assign("MVGTWROIGGXNMMLWXMJKDNKOVJVPRPHWAAWQWZNKUSVBOQIAFZQYYKSEUEMWFJTLWRYMLFHFTGLQMF");
    const char tmp_msg_0[] = {28, -91, 91, -9, -127, -100, 34, -56, 105, 13, -57, -75, 122, -76, 9, 97, -123, -43, 107, 17, -15, -35, 26, 21, 118, 22, -23, -47, 11, 73, -43, 43, 16, -42, 117, 113, 52, 19, 70, 49, -47, 3, -103, -16, 90, -35, -118, -62, 52, 63, -4, 39, 52, -84, -103, 95, -73, -3, -24, 125, -37, -24, -85, 46, -84, -118, 117, -6, -24, -29, 27, 5, 17, -33, 43, 55, 44, 16, 1, 18, -73, -105, 10, 98, -92, -35, -16, 88, 75, -60, 29, -8, -11, 88, 44, 125, -85, -20, 125, 51, 60, 26};
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
    msg.setTimeStamp(0.471238679608);
    msg.setSource(53938U);
    msg.setSourceEntity(103U);
    msg.setDestination(37349U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("XWWPJGVRTPJBGTFYCIDPZKVDDYALJGCRFWFTLYMWDXIOUMHNFOLENBAUYWHLQUMXJDMKEZANPVROHZMESSLFCGNSQDCHLOZWTSDNHTEOEZDHEBJGOORARVWYLYPCRUAIRXCKNXMUSVMKSWFQXXQZRBGVKFGSJQZIQIRGSILJKHVUCCKPCZFMUTIQPBONZUBFSZXJHQGDNBMYWTHTDKLCFKARPH");
    const char tmp_msg_0[] = {-109, 66, 78, -108, -29, 46, -20, -101, -128, 34, 126, -1, -55, -30, 28, -19, 107, -57, -32, 97, -58, 91, -50, 7, -121, -81, 14, -3, 100, -71, 100, -33, 110, -95, 34, -123, -10, 94, 16, 86, 14, -57, -98, 84, -13, -74, 2, 100, -66, -64, -60, 106, 15, 73, 54, -52, -68, 90, 104, 26, 58, 53, 50, 76, -113, -25, -102, 40, 100, 33, 108, 40, 115, 95, -102, -47, 42, 91, -91, 15, -40, -47, -94, 44, 90, -68, -32, -67, 45, 102, -11, 39, -50, 6, 41, 114, 35, -30, -22, -99, -14, -110, 5, -125, -44, 87, 90, -7, 49, 92, 2, -31, 17, 120, -85, -97, -84, -90, 121, 35, -63, -74, -71, -14, -45, 0, 99, -17, 44, 50, -75, -24, -19, -123, 78, -95, -124, 106, 21, 91, -97, -17, -26, 112, 88, 37, -94, 114, 67, 56, 75, -61, 0, -117, 124, 90, 83, -97, -26, -105, 3, -50, -118, -26, -96, -18, -8, 41, -97, 12, 77, -90, -28, -9, 79, 90, -94, 25, -57, 97, 106, 105, 8, -72, 11, 10, -46, -31, -1, 4, -62, -40, 40, 29, 82, 8, 34, -61, 55, -115, -49, 81, -7, 66, 69, -9, 74, 111, -47, 99, -48, 115, -22, 48, 14, 74, -27, -64, -123, -69, -49, 112, -54, -90, 65, -41, -36, 12, -13, -78};
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
    msg.setTimeStamp(0.124138718771);
    msg.setSource(61598U);
    msg.setSourceEntity(61U);
    msg.setDestination(22600U);
    msg.setDestinationEntity(253U);
    msg.locale.assign("WFVYMQUXBDGSLFTZNHHCIFPXDOEYCUALZWUJQITRKFCOVKXESHJNJMXGHQDGLGHBJKRAYZNVASUUKEFRFZ");
    const char tmp_msg_0[] = {20, 41, 121, 81, -93, 39, 69, -10, -102, 85, -73, -97, 37, 86, 7, 50, -49, -107, -47, 10, 118, 109, 1, -111, 113, 75, -89, -8, 4, 102, 4, -40, -98, -118, -65, -120, -19, -16, 19, -103, 79, 103, -78, 2, -57, 64, 49, -59, -103, 20, -5, -110, -124, -125, -110, -110, -15, -50, -22, -117, -8, 103, 94, -29, -1, 91, -9, 79, -78, 12, -64, -112, 52, 80, 74, -24, -39, 6, -37, -100, 37, -85, 42, -84, 2, 92, -53, 73, -36, 38, -23, 74, -75, 27, -18, 3, 26, 73, -10, -91, -7, -44, -48, 121, 110, 83, -43, -73, -16, 63, -72, 29, 87, 1, -4, -66, 107, 108, 71, 38, 113, -76, 81, 42, -17, 116, -63, 101, -19, -74, -19, 75, 85, 9, 118, 94, 121, 105, -31, -127, 39, -107, -96, -90, 92};
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
    msg.setTimeStamp(0.180443675557);
    msg.setSource(33609U);
    msg.setSourceEntity(230U);
    msg.setDestination(58494U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.0450888714487);
    msg.setSource(30977U);
    msg.setSourceEntity(27U);
    msg.setDestination(25945U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.00789521595888);
    msg.setSource(52826U);
    msg.setSourceEntity(54U);
    msg.setDestination(48695U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.288126188441);
    msg.setSource(38205U);
    msg.setSourceEntity(163U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(18U);
    msg.camid = 194U;
    msg.x = 30001U;
    msg.y = 61765U;

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
    msg.setTimeStamp(0.911649549085);
    msg.setSource(15060U);
    msg.setSourceEntity(123U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(220U);
    msg.camid = 158U;
    msg.x = 49603U;
    msg.y = 21947U;

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
    msg.setTimeStamp(0.583957435809);
    msg.setSource(60847U);
    msg.setSourceEntity(160U);
    msg.setDestination(64966U);
    msg.setDestinationEntity(75U);
    msg.camid = 143U;
    msg.x = 34631U;
    msg.y = 12410U;

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
    msg.setTimeStamp(0.324002715623);
    msg.setSource(31769U);
    msg.setSourceEntity(10U);
    msg.setDestination(57009U);
    msg.setDestinationEntity(192U);
    msg.camid = 155U;
    msg.x = 60474U;
    msg.y = 19416U;

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
    msg.setTimeStamp(0.489640945402);
    msg.setSource(4977U);
    msg.setSourceEntity(174U);
    msg.setDestination(24008U);
    msg.setDestinationEntity(28U);
    msg.camid = 2U;
    msg.x = 20109U;
    msg.y = 28276U;

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
    msg.setTimeStamp(0.137988164734);
    msg.setSource(40168U);
    msg.setSourceEntity(153U);
    msg.setDestination(13305U);
    msg.setDestinationEntity(50U);
    msg.camid = 92U;
    msg.x = 39204U;
    msg.y = 45815U;

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
    msg.setTimeStamp(0.0988793761903);
    msg.setSource(3837U);
    msg.setSourceEntity(227U);
    msg.setDestination(22870U);
    msg.setDestinationEntity(176U);
    msg.tracking = 221U;
    msg.lat = 0.70028610926;
    msg.lon = 0.388733621651;
    msg.x = 0.831639908232;
    msg.y = 0.542308758271;
    msg.z = 0.947503115018;

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
    msg.setTimeStamp(0.929772470375);
    msg.setSource(60241U);
    msg.setSourceEntity(162U);
    msg.setDestination(44991U);
    msg.setDestinationEntity(209U);
    msg.tracking = 227U;
    msg.lat = 0.220725571388;
    msg.lon = 0.382015588304;
    msg.x = 0.356484114061;
    msg.y = 0.689398301225;
    msg.z = 0.250599222247;

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
    msg.setTimeStamp(0.119965082089);
    msg.setSource(44314U);
    msg.setSourceEntity(10U);
    msg.setDestination(65162U);
    msg.setDestinationEntity(154U);
    msg.tracking = 60U;
    msg.lat = 0.715688065902;
    msg.lon = 0.711294947748;
    msg.x = 0.820375192449;
    msg.y = 0.909753363626;
    msg.z = 0.898799549354;

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
    msg.setTimeStamp(0.43331514712);
    msg.setSource(18070U);
    msg.setSourceEntity(94U);
    msg.setDestination(55507U);
    msg.setDestinationEntity(224U);
    msg.target.assign("WQWWSWSLBJOTCMPLICGDCULZANDHBWUKNBIX");
    msg.lbearing = 0.354606020907;
    msg.lelevation = 0.0942281442945;
    msg.bearing = 0.8833025961;
    msg.elevation = 0.00763614473669;
    msg.phi = 0.156185413499;
    msg.theta = 0.335656071473;
    msg.psi = 0.882406417898;
    msg.accuracy = 0.757936784734;

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
    msg.setTimeStamp(0.24071887328);
    msg.setSource(32677U);
    msg.setSourceEntity(251U);
    msg.setDestination(43616U);
    msg.setDestinationEntity(145U);
    msg.target.assign("DERVXUGCERWWZGSIHPHNFZDFMXIFVIDONXPOYQKLTRQOJMNCTRBEKXQGGMYDOFODWQWWMCEQKJTVISZHSGLCAILQMBVAEZZDOEKAKFAPRNUYWUZIJERVAUDVMHGIFOSLJLRLHOTXUFLVHJDGYSZVJBQXUBHYYPXTGBQXB");
    msg.lbearing = 0.926155134816;
    msg.lelevation = 0.617691105498;
    msg.bearing = 0.0372315772689;
    msg.elevation = 0.226411372633;
    msg.phi = 0.817358388804;
    msg.theta = 0.825208467879;
    msg.psi = 0.482408567007;
    msg.accuracy = 0.146676877634;

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
    msg.setTimeStamp(0.334415319864);
    msg.setSource(55464U);
    msg.setSourceEntity(241U);
    msg.setDestination(29679U);
    msg.setDestinationEntity(247U);
    msg.target.assign("BLGAVUGUPJYVYLYMAZMVEQMVYRTXMGQQFMHSIFPUJRPEBMIOFHMWFOGXEAIFLJLSRETZGZCTBHUPOYGRSKEHCECLXLIHLTVIBJNKKRJKARXVHNQHNQCDBVUWHXSRSWYQOVWOJXUGUBIDNDKLYTPQPTBNZSACZD");
    msg.lbearing = 0.414408264582;
    msg.lelevation = 0.040075614958;
    msg.bearing = 0.47508980518;
    msg.elevation = 0.856472482664;
    msg.phi = 0.989356074215;
    msg.theta = 0.83684195169;
    msg.psi = 0.126382033116;
    msg.accuracy = 0.614149914537;

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
    msg.setTimeStamp(0.235087766172);
    msg.setSource(48749U);
    msg.setSourceEntity(83U);
    msg.setDestination(60302U);
    msg.setDestinationEntity(206U);
    msg.target.assign("KMVZWBORMXAMDWFCTNDPRIJJQJPEWNSVRKGPXHXZTJEPANCA");
    msg.x = 0.733845460249;
    msg.y = 0.242888787186;
    msg.z = 0.249906695451;
    msg.n = 0.90930165668;
    msg.e = 0.976873120365;
    msg.d = 0.3597990509;
    msg.phi = 0.077941077351;
    msg.theta = 0.37912715862;
    msg.psi = 0.210035266446;
    msg.accuracy = 0.30511735087;

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
    msg.setTimeStamp(0.358411389221);
    msg.setSource(52415U);
    msg.setSourceEntity(95U);
    msg.setDestination(41776U);
    msg.setDestinationEntity(241U);
    msg.target.assign("KYAWIIJRPPOJJZBAGDLYSTDIZJLVEBBSODME");
    msg.x = 0.83401234185;
    msg.y = 0.330698477635;
    msg.z = 0.484288385995;
    msg.n = 0.0232826190173;
    msg.e = 0.309490992341;
    msg.d = 0.158372501894;
    msg.phi = 0.302684157339;
    msg.theta = 0.798079080453;
    msg.psi = 0.791126835532;
    msg.accuracy = 0.0527090715092;

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
    msg.setTimeStamp(0.287451791383);
    msg.setSource(33195U);
    msg.setSourceEntity(164U);
    msg.setDestination(142U);
    msg.setDestinationEntity(88U);
    msg.target.assign("IQISIOIVUXWMLLVRVTYSYCJVAHXWCSZUDSIEQACQGEYBVXGJRRHRNTWLJ");
    msg.x = 0.0900949507373;
    msg.y = 0.724385836175;
    msg.z = 0.716999964942;
    msg.n = 0.0448105067265;
    msg.e = 0.850125291933;
    msg.d = 0.245171954663;
    msg.phi = 0.366918746902;
    msg.theta = 0.81872337519;
    msg.psi = 0.410881804924;
    msg.accuracy = 0.490150996663;

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
    msg.setTimeStamp(0.966349871838);
    msg.setSource(28088U);
    msg.setSourceEntity(118U);
    msg.setDestination(59595U);
    msg.setDestinationEntity(185U);
    msg.target.assign("IDLSWKKNEIRLXQZKYDWAAECR");
    msg.lat = 0.9335633614;
    msg.lon = 0.684931905857;
    msg.z_units = 233U;
    msg.z = 0.908510358979;
    msg.accuracy = 0.844332011318;

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
    msg.setTimeStamp(0.927312218616);
    msg.setSource(7782U);
    msg.setSourceEntity(150U);
    msg.setDestination(31790U);
    msg.setDestinationEntity(27U);
    msg.target.assign("RXGYJXGKSSHQWIUDMEFWJTPQQRYLJ");
    msg.lat = 0.252537448165;
    msg.lon = 0.229572047541;
    msg.z_units = 245U;
    msg.z = 0.205675887218;
    msg.accuracy = 0.446805438782;

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
    msg.setTimeStamp(0.988580290136);
    msg.setSource(32949U);
    msg.setSourceEntity(225U);
    msg.setDestination(27596U);
    msg.setDestinationEntity(216U);
    msg.target.assign("ECYNOZBYCKZYKPCGTIAQAOGZDIPXYZKHENZLBESZRRZXKRVCJQWCWTWOHLKPCIQVRMNTFGGVWIWGQTCQBUSUXUXPNJXNOKCJDOXDLEBNPNDBDILMKRINLRLFUGAZFKEMDHWMTYUUOQYMEDVPOIXUMYSHVHJALGXZSWMKMHMCWSBABEVFXIQTINTXZAPUFJGVGRBYYLCTUHJPBEBIFJKQJMQOFA");
    msg.lat = 0.344215324439;
    msg.lon = 0.00472695650875;
    msg.z_units = 3U;
    msg.z = 0.872039164409;
    msg.accuracy = 0.312999607944;

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
    msg.setTimeStamp(0.840357169818);
    msg.setSource(37023U);
    msg.setSourceEntity(184U);
    msg.setDestination(42479U);
    msg.setDestinationEntity(27U);
    msg.name.assign("UWHXOMEXQXSRZFHEEKCYEARCONUCLWRQTYMOJHPRGBUUFFXTBAZAJCOIRQOGAKLEVVMBDWQYSWEKDLXWGVEKBNAXFJNMEUHTTPYBJANMIRTGPRSVFULDQJGSGCONTZL");
    msg.lat = 0.732673945095;
    msg.lon = 0.785045064728;
    msg.z = 0.740474242146;
    msg.z_units = 8U;

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
    msg.setTimeStamp(0.963596789001);
    msg.setSource(762U);
    msg.setSourceEntity(130U);
    msg.setDestination(19847U);
    msg.setDestinationEntity(20U);
    msg.name.assign("BBGRVEQSYVTHOBUNKAEWDBDJOCZKXCGNYGHJJENJBDCVTVQLSRUIXRKZODHIICLZWGJDYUAXSRALMVNHLSXJRBPYUBFUE");
    msg.lat = 0.654039558632;
    msg.lon = 0.0401782414826;
    msg.z = 0.967543872781;
    msg.z_units = 129U;

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
    msg.setTimeStamp(0.00112870871308);
    msg.setSource(929U);
    msg.setSourceEntity(244U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(43U);
    msg.name.assign("XWPYUHYXEXIKIIFITS");
    msg.lat = 0.620173170316;
    msg.lon = 0.438773091748;
    msg.z = 0.344081490754;
    msg.z_units = 71U;

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
    msg.setTimeStamp(0.627390867741);
    msg.setSource(56676U);
    msg.setSourceEntity(160U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(112U);
    msg.op = 118U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WNZZLXEWONEISGFPABRXIPVETHVQQZGMXUMQQEIPJOORAKDWMPCLSMQHHZTUMDHAGBSXBTQECSJBSHDWBKYTIFAOFKMSHDVUAXOQBDNGOKOJDGYUW");
    tmp_msg_0.lat = 0.252343024825;
    tmp_msg_0.lon = 0.469154756852;
    tmp_msg_0.z = 0.466978175136;
    tmp_msg_0.z_units = 206U;
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
    msg.setTimeStamp(0.497941053208);
    msg.setSource(36412U);
    msg.setSourceEntity(50U);
    msg.setDestination(62475U);
    msg.setDestinationEntity(97U);
    msg.op = 76U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YZIKFOOTGBDQTVWEJHCKCXXLGQMRPWJVIOHYVLZRYPIW");
    tmp_msg_0.lat = 0.169712232517;
    tmp_msg_0.lon = 0.716264242138;
    tmp_msg_0.z = 0.325568079805;
    tmp_msg_0.z_units = 70U;
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
    msg.setTimeStamp(0.903199299344);
    msg.setSource(257U);
    msg.setSourceEntity(62U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(151U);
    msg.op = 220U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JWYPCOTKDXVUJEAUCUHIJRNGMI");
    tmp_msg_0.lat = 0.382621216274;
    tmp_msg_0.lon = 0.10885777316;
    tmp_msg_0.z = 0.813007762518;
    tmp_msg_0.z_units = 78U;
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
    msg.setTimeStamp(0.572584372013);
    msg.setSource(21984U);
    msg.setSourceEntity(121U);
    msg.setDestination(64375U);
    msg.setDestinationEntity(33U);
    msg.value = 0.043286253942;
    msg.type = 42U;

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
    msg.setTimeStamp(0.0081743520937);
    msg.setSource(29031U);
    msg.setSourceEntity(194U);
    msg.setDestination(62202U);
    msg.setDestinationEntity(252U);
    msg.value = 0.294512172366;
    msg.type = 198U;

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
    msg.setTimeStamp(0.83663445676);
    msg.setSource(61756U);
    msg.setSourceEntity(213U);
    msg.setDestination(4115U);
    msg.setDestinationEntity(114U);
    msg.value = 0.298633901493;
    msg.type = 7U;

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
    msg.setTimeStamp(0.384366707552);
    msg.setSource(44986U);
    msg.setSourceEntity(113U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(221U);
    msg.value = 0.15680345943;

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
    msg.setTimeStamp(0.0396782504236);
    msg.setSource(41294U);
    msg.setSourceEntity(217U);
    msg.setDestination(23697U);
    msg.setDestinationEntity(96U);
    msg.value = 0.692412879311;

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
    msg.setTimeStamp(0.492173519443);
    msg.setSource(27563U);
    msg.setSourceEntity(27U);
    msg.setDestination(25506U);
    msg.setDestinationEntity(147U);
    msg.value = 0.265440762992;

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
    msg.setTimeStamp(0.19573149324);
    msg.setSource(23961U);
    msg.setSourceEntity(54U);
    msg.setDestination(15411U);
    msg.setDestinationEntity(77U);
    msg.timestamp_last_service = 0.607860585443;
    msg.time_next_service = 0.993729157219;
    msg.time_motor_next_service = 0.857611194703;
    msg.time_idle_ground = 0.89946572332;
    msg.time_idle_air = 0.457317864274;
    msg.time_idle_water = 0.595186198536;
    msg.time_idle_underwater = 0.535902197078;
    msg.time_idle_unknown = 0.679999892109;
    msg.time_motor_ground = 0.701379735104;
    msg.time_motor_air = 0.0551556305768;
    msg.time_motor_water = 0.173276933097;
    msg.time_motor_underwater = 0.0111818217898;
    msg.time_motor_unknown = 0.947558796177;
    msg.rpm_min = 12903;
    msg.rpm_max = -22833;
    msg.depth_max = 0.876601660168;

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
    msg.setTimeStamp(0.17216815857);
    msg.setSource(17991U);
    msg.setSourceEntity(196U);
    msg.setDestination(26889U);
    msg.setDestinationEntity(206U);
    msg.timestamp_last_service = 0.997870204764;
    msg.time_next_service = 0.316960433336;
    msg.time_motor_next_service = 0.793974511063;
    msg.time_idle_ground = 0.541424690574;
    msg.time_idle_air = 0.481033733166;
    msg.time_idle_water = 0.324026874261;
    msg.time_idle_underwater = 0.804105084712;
    msg.time_idle_unknown = 0.953975539226;
    msg.time_motor_ground = 0.387003955058;
    msg.time_motor_air = 0.949682047145;
    msg.time_motor_water = 0.24395019126;
    msg.time_motor_underwater = 0.10667438288;
    msg.time_motor_unknown = 0.275372599708;
    msg.rpm_min = 11097;
    msg.rpm_max = 32272;
    msg.depth_max = 0.67655044649;

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
    msg.setTimeStamp(0.179503652363);
    msg.setSource(1573U);
    msg.setSourceEntity(234U);
    msg.setDestination(1585U);
    msg.setDestinationEntity(197U);
    msg.timestamp_last_service = 0.206647401696;
    msg.time_next_service = 0.861802098352;
    msg.time_motor_next_service = 0.0397972500212;
    msg.time_idle_ground = 0.778276725505;
    msg.time_idle_air = 0.780527746846;
    msg.time_idle_water = 0.59946450513;
    msg.time_idle_underwater = 0.612971160378;
    msg.time_idle_unknown = 0.964093524444;
    msg.time_motor_ground = 0.843296440768;
    msg.time_motor_air = 0.247123834437;
    msg.time_motor_water = 0.528933411191;
    msg.time_motor_underwater = 0.146102286445;
    msg.time_motor_unknown = 0.814384721595;
    msg.rpm_min = 5069;
    msg.rpm_max = 5867;
    msg.depth_max = 0.732097412242;

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
    msg.setTimeStamp(0.995449213868);
    msg.setSource(62554U);
    msg.setSourceEntity(98U);
    msg.setDestination(65078U);
    msg.setDestinationEntity(79U);
    msg.severity = 12U;
    msg.text.assign("HHDJVFUCSKUMPWGZJGTBQLMLINTAQPRYAEJOBREWZEMNFTSJTYRHLZOOZUAPWCFPAAIVCLBSEBJUGXXCRJMDGANGHQPTKKIGWSIHXLTUHRXRHDDGUCDDNJUGLPXLRYXJCRIEIMJFQKVOMZWQBYYXWFMHGTKBEBJSQZAOM");

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
    msg.setTimeStamp(0.333427030261);
    msg.setSource(38844U);
    msg.setSourceEntity(139U);
    msg.setDestination(43778U);
    msg.setDestinationEntity(114U);
    msg.severity = 251U;
    msg.text.assign("HOECDPDBVGQENFSKCOODKGX");

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
    msg.setTimeStamp(0.178345436774);
    msg.setSource(50133U);
    msg.setSourceEntity(189U);
    msg.setDestination(2257U);
    msg.setDestinationEntity(176U);
    msg.severity = 39U;
    msg.text.assign("IECXSXOXQMONAMYNWCLVBIKIFOKVTHWBZNXQDOZZLCJEPIFVNITKXKGYZJYIYVAQAUPODDVFQHSQGUXYAQSJYLZGWDXDVNMQRWRMFGEUVTBVHKYFDLUPXEULETNBJARKFBOQOPPHEUJMNGZNHTGNYAHYACARGKOBRCGBGTPMLTWITHSUFPOEVBZZJLMRDOHEJSBMLFPCBXISDRWUDJZATVWSWRCUAEMJCPNIQSWHFKZGFLWDJKXSRUPH");

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
    msg.setTimeStamp(0.937729869134);
    msg.setSource(21083U);
    msg.setSourceEntity(208U);
    msg.setDestination(8905U);
    msg.setDestinationEntity(83U);
    msg.channel = 4;
    msg.value = -1870912294;
    msg.gain = 45U;

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
    msg.setTimeStamp(0.666414252672);
    msg.setSource(46792U);
    msg.setSourceEntity(92U);
    msg.setDestination(12398U);
    msg.setDestinationEntity(49U);
    msg.channel = 12;
    msg.value = 1590797171;
    msg.gain = 74U;

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
    msg.setTimeStamp(0.233728401928);
    msg.setSource(31871U);
    msg.setSourceEntity(100U);
    msg.setDestination(23949U);
    msg.setDestinationEntity(211U);
    msg.channel = 5;
    msg.value = -512635152;
    msg.gain = 120U;

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
    msg.setTimeStamp(0.725862700279);
    msg.setSource(16423U);
    msg.setSourceEntity(43U);
    msg.setDestination(19425U);
    msg.setDestinationEntity(27U);
    msg.ch01 = 0.407063601787;
    msg.ch02 = 0.700528763904;
    msg.ch03 = 0.70231687622;
    msg.ch04 = 0.0294819801276;
    msg.ch05 = 0.0564717757852;
    msg.ch06 = 0.817745907519;
    msg.ch07 = 0.740376320613;
    msg.ch08 = 0.414885811298;
    msg.ch09 = 0.260624707627;
    msg.ch10 = 0.342164873335;
    msg.ch11 = 0.978291715586;
    msg.ch12 = 0.176184229273;
    msg.ch13 = 0.201709320392;
    msg.ch14 = 0.788248569625;
    msg.ch15 = 0.474173496519;
    msg.ch16 = 0.625055355488;

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
    msg.setTimeStamp(0.399215621307);
    msg.setSource(7902U);
    msg.setSourceEntity(68U);
    msg.setDestination(53426U);
    msg.setDestinationEntity(119U);
    msg.ch01 = 0.482763259946;
    msg.ch02 = 0.634851016149;
    msg.ch03 = 0.884924868961;
    msg.ch04 = 0.856827182137;
    msg.ch05 = 0.455895057016;
    msg.ch06 = 0.437763986269;
    msg.ch07 = 0.188774990375;
    msg.ch08 = 0.768108331309;
    msg.ch09 = 0.976837703113;
    msg.ch10 = 0.603438490219;
    msg.ch11 = 0.928459231241;
    msg.ch12 = 0.671084925676;
    msg.ch13 = 0.0914402788138;
    msg.ch14 = 0.954763244412;
    msg.ch15 = 0.246817495503;
    msg.ch16 = 0.122074493345;

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
    msg.setTimeStamp(0.0183691174067);
    msg.setSource(53710U);
    msg.setSourceEntity(244U);
    msg.setDestination(37396U);
    msg.setDestinationEntity(15U);
    msg.ch01 = 0.625582480093;
    msg.ch02 = 0.710142573326;
    msg.ch03 = 0.259143756466;
    msg.ch04 = 0.535029555459;
    msg.ch05 = 0.394349830691;
    msg.ch06 = 0.360285283422;
    msg.ch07 = 0.114616613621;
    msg.ch08 = 0.500290394137;
    msg.ch09 = 0.202734296536;
    msg.ch10 = 0.263018261948;
    msg.ch11 = 0.692644604694;
    msg.ch12 = 0.440856744061;
    msg.ch13 = 0.120982956492;
    msg.ch14 = 0.908256267316;
    msg.ch15 = 0.951567337769;
    msg.ch16 = 0.0238973319466;

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

  return test.getReturnValue();
}
