//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 3702d87736576a3bee5c6628ee3aa89f                            *
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
    msg.setTimeStamp(0.5594359569150323);
    msg.setSource(27052U);
    msg.setSourceEntity(133U);
    msg.setDestination(42728U);
    msg.setDestinationEntity(197U);
    msg.state = 200U;
    msg.flags = 42U;
    msg.description.assign("GZIZJREENXGMIUGXGVFVTJLDTEUBMKDXMLLZYDYEPKILXAVUONBPPHGSBCECGIAALPNJOGVRJWRMCWOEUHSVKBCMTJKHSUIODHRUROEKCNHNKBASXYENCDPFYUYQSVRRDSQULIHZQWDEZAMQBDWBFKXQOPGWIKQCHBRLWCWLZJSJJGTIXFGDROFKUDNPAOATFZEYYMM");

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
    msg.setTimeStamp(0.44402824590211354);
    msg.setSource(25104U);
    msg.setSourceEntity(47U);
    msg.setDestination(39791U);
    msg.setDestinationEntity(58U);
    msg.state = 59U;
    msg.flags = 198U;
    msg.description.assign("WXHUYVLQSITUMPTXJR");

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
    msg.setTimeStamp(0.33516484212601216);
    msg.setSource(50027U);
    msg.setSourceEntity(56U);
    msg.setDestination(44890U);
    msg.setDestinationEntity(216U);
    msg.state = 21U;
    msg.flags = 56U;
    msg.description.assign("HCLFADAJBHQAMWDSUEHSMCAXQVRRQJYZUGANXRKIKSVVGEBPTTUCWUXZNBNFREWPPKHIUCDKIWOXIHNORNNQMQBIGZESCPQBKASYOTEGLIMZQVBWEYHITDSFCLSRIYWYTEOXBWGVSYOAAFXDYOFJEVPLCDLHOIQEZXFMDTUUOLAIMHJPFVZLDJFGLHTXQBWRQ");

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
    msg.setTimeStamp(0.12958424154151027);
    msg.setSource(59560U);
    msg.setSourceEntity(105U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.6985876097606991);
    msg.setSource(36520U);
    msg.setSourceEntity(134U);
    msg.setDestination(38704U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.9194145850772676);
    msg.setSource(41484U);
    msg.setSourceEntity(32U);
    msg.setDestination(34760U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.3097554310821691);
    msg.setSource(17688U);
    msg.setSourceEntity(79U);
    msg.setDestination(43419U);
    msg.setDestinationEntity(23U);
    msg.id = 60U;
    msg.label.assign("KUAJBWLMNUGGTLWVBYQCJBBMDTNNMTEWTPZZVJAIDAQZAWEYLULJJXGPBNUOTVSFJKZCFQNACOEVEHRAXYKRISBNMYHYVVDIDLYIDCRHDLTJETVEQINCPVREDOQHRHCXFKEIXDQQIBQMZLBUWWPRMKIFCPOAJZSEUNOJYRKYXFSZUGYRBFHSLFXGORCXZIXSOWQNSPUTFPOMVHWFD");
    msg.component.assign("CMTTBEWLBYXBHBKEGCFPAJYXMVQGUIZNFVWYYTNAESVVKMSLZHXXETDYROKKVKNODNGAKXTJOPLSLRIPDRWERRUCLIGAWSFRUWZQOAHNMDSYOIIZVRBHKNLTCLVCPLSFOXCHDSMZGHNWAQSTRPMJEWJZGNEBCGUXTBOSWMIAPTQIRFJQVA");
    msg.act_time = 54464U;
    msg.deact_time = 38553U;

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
    msg.setTimeStamp(0.7757116890123049);
    msg.setSource(7074U);
    msg.setSourceEntity(147U);
    msg.setDestination(48348U);
    msg.setDestinationEntity(200U);
    msg.id = 136U;
    msg.label.assign("UKEAACZEOZCTPNVFLFYYLMSCKQEDBXXRWWUVMLXQOPWKFBLOVXLXUJMIWCYJAJKBWZFPLGDAACLNXTAFUDXNNV");
    msg.component.assign("TOTWANQUSHXGBOQKNGZTKBIJHYELTVDVVR");
    msg.act_time = 31781U;
    msg.deact_time = 16090U;

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
    msg.setTimeStamp(0.1452077569198702);
    msg.setSource(27937U);
    msg.setSourceEntity(15U);
    msg.setDestination(20855U);
    msg.setDestinationEntity(86U);
    msg.id = 174U;
    msg.label.assign("WXRNPXLKNTXBERNKWZVIWVXLLOSGUMJFXELCCIHEUYCQAFNSCXBEYMXDFJPQIKHAYOGTRTAIARFYEDDKBXARNSHUEWKFCCSHUNGOSJAMNMZBSNQXYLUGNYIDGRPHFPRMBUQOWBDDSWPFTIKXTOTLMGYEEJGCJIBTZOUGOZYLBCHDPJSOPENIBZPCJVAWAOZLQVZVYKZYA");
    msg.component.assign("FDXPWTJSDMJJYMAONCZGZXMROETTSIKA");
    msg.act_time = 35202U;
    msg.deact_time = 50508U;

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
    msg.setTimeStamp(0.8989424850532957);
    msg.setSource(20886U);
    msg.setSourceEntity(138U);
    msg.setDestination(22391U);
    msg.setDestinationEntity(139U);
    msg.id = 208U;

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
    msg.setTimeStamp(0.2392044142151416);
    msg.setSource(33563U);
    msg.setSourceEntity(58U);
    msg.setDestination(56448U);
    msg.setDestinationEntity(159U);
    msg.id = 36U;

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
    msg.setTimeStamp(0.19657549711988498);
    msg.setSource(43797U);
    msg.setSourceEntity(111U);
    msg.setDestination(34970U);
    msg.setDestinationEntity(146U);
    msg.id = 62U;

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
    msg.setTimeStamp(0.4689807151214248);
    msg.setSource(65381U);
    msg.setSourceEntity(192U);
    msg.setDestination(44764U);
    msg.setDestinationEntity(76U);
    msg.op = 165U;
    msg.list.assign("FDVFOAYPXTSABIJHCBLPVOIKRBRTCOVNGAVIOWHCCEHWPGBDKUVJNGCOMRPJPTWRZKZMNJMHDSUGEIKJCEYPKLJYLAJSTZFBQMUDOZWSVTETDEGJINXUGKIUEOYAIHIBMPTYZNWAPLHNPXJQZGYWXLWSSMU");

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
    msg.setTimeStamp(0.7913673292322632);
    msg.setSource(48028U);
    msg.setSourceEntity(25U);
    msg.setDestination(38236U);
    msg.setDestinationEntity(204U);
    msg.op = 208U;
    msg.list.assign("COUVZLLMHYKREPWHHUZNOPTHJLMZBWPBJNFCCRESQYKPXZSCWMVMETCXJAIJVRGXRWA");

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
    msg.setTimeStamp(0.6904506645498835);
    msg.setSource(42333U);
    msg.setSourceEntity(216U);
    msg.setDestination(41011U);
    msg.setDestinationEntity(182U);
    msg.op = 234U;
    msg.list.assign("WWEOGXKDNBAATCLZJEUHSNVOFYTXORPYJEXGISBOFRYETRMNOTWQJGCDSIPMOBLFKSKSLFLUZQENSDXRRFGTUYGYDHDHVXCFCAOMUQPJHKHRJQCOWQTV");

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
    msg.setTimeStamp(0.7175064280934954);
    msg.setSource(14748U);
    msg.setSourceEntity(40U);
    msg.setDestination(57780U);
    msg.setDestinationEntity(30U);
    msg.value = 37U;

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
    msg.setTimeStamp(0.3585626124220065);
    msg.setSource(57728U);
    msg.setSourceEntity(231U);
    msg.setDestination(41348U);
    msg.setDestinationEntity(186U);
    msg.value = 51U;

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
    msg.setTimeStamp(0.3012374329761145);
    msg.setSource(57342U);
    msg.setSourceEntity(60U);
    msg.setDestination(30096U);
    msg.setDestinationEntity(136U);
    msg.value = 113U;

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
    msg.setTimeStamp(0.8117010732872372);
    msg.setSource(6260U);
    msg.setSourceEntity(208U);
    msg.setDestination(2339U);
    msg.setDestinationEntity(254U);
    msg.consumer.assign("RSMURBFHWLDIYOFACKHRTGPSJGKCALZVUUBMWPQBTPFFIMMKLMDZHEATVXXW");
    msg.message_id = 17398U;

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
    msg.setTimeStamp(0.6465039873944839);
    msg.setSource(28883U);
    msg.setSourceEntity(24U);
    msg.setDestination(61074U);
    msg.setDestinationEntity(144U);
    msg.consumer.assign("GPJDYEPBMRXOAHTXXULZEVUSGIBZVYJXVIIQHYEFPYYKTPDKUNAPOKDARAZQPHMCKSMQTEWKHDHFAJWIAIRGVBWRYJECLEXNVOEBCYXVFLFQMJDDTSXCUYVQZDDTERBURRFVVOUMUZPJISGSRVZOAGOLKLUUGJCTBOZLCQJIQDCWUPBCSIOFWNANHEBQFZPRZMNLBBJGWHCKTLAL");
    msg.message_id = 62328U;

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
    msg.setTimeStamp(0.5607177014998495);
    msg.setSource(26718U);
    msg.setSourceEntity(60U);
    msg.setDestination(7027U);
    msg.setDestinationEntity(12U);
    msg.consumer.assign("RCSKNQUDCMKSNYYZZHHWA");
    msg.message_id = 7199U;

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
    msg.setTimeStamp(0.45328063661443174);
    msg.setSource(64640U);
    msg.setSourceEntity(82U);
    msg.setDestination(54804U);
    msg.setDestinationEntity(241U);
    msg.type = 12U;

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
    msg.setTimeStamp(0.7604000150043497);
    msg.setSource(2400U);
    msg.setSourceEntity(0U);
    msg.setDestination(33188U);
    msg.setDestinationEntity(132U);
    msg.type = 135U;

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
    msg.setTimeStamp(0.37839279985596075);
    msg.setSource(15870U);
    msg.setSourceEntity(180U);
    msg.setDestination(33689U);
    msg.setDestinationEntity(114U);
    msg.type = 159U;

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
    msg.setTimeStamp(0.7753076039389135);
    msg.setSource(53849U);
    msg.setSourceEntity(11U);
    msg.setDestination(31263U);
    msg.setDestinationEntity(197U);
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
    msg.setTimeStamp(0.17987602938707514);
    msg.setSource(18465U);
    msg.setSourceEntity(190U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(80U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.9206263588585862);
    msg.setSource(10343U);
    msg.setSourceEntity(214U);
    msg.setDestination(27424U);
    msg.setDestinationEntity(3U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.730347496448251);
    msg.setSource(47681U);
    msg.setSourceEntity(187U);
    msg.setDestination(20926U);
    msg.setDestinationEntity(144U);
    msg.total_steps = 138U;
    msg.step_number = 240U;
    msg.step.assign("WEDMGKKWLZGWEXEAKYPLJPSFVBSITNCKJOQDZFXMZMYVPGOJRSJATLRREALVGGKALBXEVXZWWNNRVMOMZIKVOYNBDBHBVSYHTHDLIMLIBRNIQSPEGLJCDUFHXZNUJQAKNYECIXPCWDGOMTBHHIQDDFWDSEOPUTUTCQQAGJBNDXSUGMZVRTBWPFUJUQRCHRSCWMXKQPXEUAPZCCHLSNQKYEBYFTAROGIIONYFUOUSWLPJYTFRXQZFHJAATVM");
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
    msg.setTimeStamp(0.9442188288455947);
    msg.setSource(25666U);
    msg.setSourceEntity(41U);
    msg.setDestination(59517U);
    msg.setDestinationEntity(195U);
    msg.total_steps = 218U;
    msg.step_number = 11U;
    msg.step.assign("SKAFXRFRNJSAPDVEJMOSTEAXMJTTTHQQZQARMPMHPCCLHEBCXPZKBGGXCELXOWNSCDTYKDEGKGAYNGPVUAXWZGZBUUGQLTLYNRBQHGQHOHXCXGCNETQSSWUBYZFJPLTDAPSKYVCHRQFJI");
    msg.flags = 70U;

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
    msg.setTimeStamp(0.5708552912582642);
    msg.setSource(39169U);
    msg.setSourceEntity(242U);
    msg.setDestination(2963U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 193U;
    msg.step_number = 228U;
    msg.step.assign("EJLWUFRLEASJEXYVZXKDCEXWWTGNMQWBMJGBZUTOPDQBCZHMACRHXFSNIAPUWWFMHAGVCSSBIGUQCCRJQYDIIDSXBUDWYCVNZXWTQGNHXNGQOLEWBIORNQXTLEFYAKMOGVHMLTRIRONYGAVPUNPHPRDSYBZWOTLMIHLEERZEDMCJUASVJAFQXCJKTXGNKTLZUYIZHOQRFISHACSVPOF");
    msg.flags = 35U;

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
    msg.setTimeStamp(0.8918509568540384);
    msg.setSource(13473U);
    msg.setSourceEntity(223U);
    msg.setDestination(8279U);
    msg.setDestinationEntity(221U);
    msg.state = 195U;
    msg.error.assign("TKTQMEOEZXAJPYFFOKYYILHDAIDDJYEKNVCRITBJTWNZCQKHSMICZGQBVTFWBJGIVNYGYRSNOYIZKWDMWXRNQGPLLBBLUVEHYFMVSZSKTVIQHBXEWFXLGWWTPUPWXFIDRCASMGRPCOBXGBDUUGEECJPNWLKAMBCULRASNHBUSNXFKPXGPYSSVXSARZQCNQZOLDZTOOWOVRUTIYUKJUZHJAPVGHQUOQAHFDTAMRJQHVDNMECJMLADRLCHJF");

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
    msg.setTimeStamp(0.6409254408524111);
    msg.setSource(27011U);
    msg.setSourceEntity(33U);
    msg.setDestination(56944U);
    msg.setDestinationEntity(252U);
    msg.state = 37U;
    msg.error.assign("USIRIWVKHDBJNMSEOVIWHKKMJQFVUZKHYSKAVXRKTAKGLITEQCHSWNODXPFJOUNIIOMLTTLGLPPSLXCJCCIJQRXECDAKVNOGFPABUNAVTLFASURUDFDNXTYCWXGWBRRHYMDIKHCBNQJYKQTVOWCRUQZ");

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
    msg.setTimeStamp(0.0012749169627479517);
    msg.setSource(36599U);
    msg.setSourceEntity(214U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(201U);
    msg.state = 175U;
    msg.error.assign("VPBTKJYMRYDXAAXFGTQOAOPPRLIMUGPZGIYAGGUZRJCHIKEUPZMPBQNMSOSFQFHWKJQCPSNJJLWSFFYHZMHJSSNNCHWREQIKKWRBRGHOWKDZCOWYGWRSVGWEQXLHDLPXEUATOAMHVYNULSUDBZORKUDBEMUYVNFDEQNXTBGAXLOAHVJQTSDVDDFA");

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
    msg.setTimeStamp(0.4610889861868962);
    msg.setSource(49397U);
    msg.setSourceEntity(48U);
    msg.setDestination(41679U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.21071288466962812);
    msg.setSource(13948U);
    msg.setSourceEntity(161U);
    msg.setDestination(41606U);
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
    msg.setTimeStamp(0.771931661889439);
    msg.setSource(42201U);
    msg.setSourceEntity(213U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.15510821487140625);
    msg.setSource(51805U);
    msg.setSourceEntity(97U);
    msg.setDestination(32174U);
    msg.setDestinationEntity(44U);
    msg.op = 226U;
    msg.speed_min = 0.09764903855846663;
    msg.speed_max = 0.4726757592450298;
    msg.long_accel = 0.2755008688912379;
    msg.alt_max_msl = 0.8722795098320396;
    msg.dive_fraction_max = 0.03944494936340093;
    msg.climb_fraction_max = 0.516763089251142;
    msg.bank_max = 0.04181938987003564;
    msg.p_max = 0.6449570367919261;
    msg.pitch_min = 0.19580600862776643;
    msg.pitch_max = 0.35506239769642145;
    msg.q_max = 0.5247327338391762;
    msg.g_min = 0.9134056254518316;
    msg.g_max = 0.9638658833480245;
    msg.g_lat_max = 0.6517339145416797;
    msg.rpm_min = 0.17448872919560765;
    msg.rpm_max = 0.15321521379569425;
    msg.rpm_rate_max = 0.42499672582739145;

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
    msg.setTimeStamp(0.8509002698876941);
    msg.setSource(9509U);
    msg.setSourceEntity(67U);
    msg.setDestination(53670U);
    msg.setDestinationEntity(153U);
    msg.op = 126U;
    msg.speed_min = 0.26748454063661986;
    msg.speed_max = 0.6938591290153947;
    msg.long_accel = 0.6445589293865007;
    msg.alt_max_msl = 0.8523647598320787;
    msg.dive_fraction_max = 0.8790067046799875;
    msg.climb_fraction_max = 0.5671675053624022;
    msg.bank_max = 0.6239000747508083;
    msg.p_max = 0.4189967403742251;
    msg.pitch_min = 0.9116831514452466;
    msg.pitch_max = 0.5975451125105554;
    msg.q_max = 0.23807389957789027;
    msg.g_min = 0.8142340467387618;
    msg.g_max = 0.41464108372681896;
    msg.g_lat_max = 0.48812584243164525;
    msg.rpm_min = 0.546002132252626;
    msg.rpm_max = 0.5677083520148114;
    msg.rpm_rate_max = 0.23981220764632583;

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
    msg.setTimeStamp(0.7758882644459995);
    msg.setSource(19142U);
    msg.setSourceEntity(153U);
    msg.setDestination(50461U);
    msg.setDestinationEntity(14U);
    msg.op = 6U;
    msg.speed_min = 0.9862508422045498;
    msg.speed_max = 0.5826870011739231;
    msg.long_accel = 0.13592469831176834;
    msg.alt_max_msl = 0.6072333944332138;
    msg.dive_fraction_max = 0.5866512405955362;
    msg.climb_fraction_max = 0.22042040044419087;
    msg.bank_max = 0.8276601357194009;
    msg.p_max = 0.9997460844882307;
    msg.pitch_min = 0.5104701613368613;
    msg.pitch_max = 0.3886149305590626;
    msg.q_max = 0.5511802847712204;
    msg.g_min = 0.8594652753822344;
    msg.g_max = 0.2647129996823959;
    msg.g_lat_max = 0.08146269890565505;
    msg.rpm_min = 0.2173471939934195;
    msg.rpm_max = 0.8082660603610573;
    msg.rpm_rate_max = 0.7350940191388028;

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
    msg.setTimeStamp(0.6156372212759821);
    msg.setSource(39247U);
    msg.setSourceEntity(40U);
    msg.setDestination(44767U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.8696784354032793);
    msg.setSource(53024U);
    msg.setSourceEntity(72U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.7751648065364408);
    msg.setSource(45012U);
    msg.setSourceEntity(15U);
    msg.setDestination(32331U);
    msg.setDestinationEntity(129U);
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.44147933348757507;
    tmp_msg_0.x = 0.6339558280349546;
    tmp_msg_0.y = 0.7160869002646308;
    tmp_msg_0.z = 0.3988011939136318;
    tmp_msg_0.timestep = 0.7804687618912969;
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
    msg.setTimeStamp(0.965145154710903);
    msg.setSource(48388U);
    msg.setSourceEntity(77U);
    msg.setDestination(33349U);
    msg.setDestinationEntity(164U);
    msg.value = 0.35089092368146013;

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
    msg.setTimeStamp(0.332004667268888);
    msg.setSource(36417U);
    msg.setSourceEntity(215U);
    msg.setDestination(21382U);
    msg.setDestinationEntity(55U);
    msg.value = 0.42023473133388056;

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
    msg.setTimeStamp(0.35439347698025003);
    msg.setSource(31064U);
    msg.setSourceEntity(47U);
    msg.setDestination(54423U);
    msg.setDestinationEntity(188U);
    msg.value = 0.566105184874622;

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
    msg.setTimeStamp(0.5369190192631198);
    msg.setSource(54020U);
    msg.setSourceEntity(174U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.7732693000032458;
    msg.lon = 0.7800950445448317;
    msg.height = 0.37635682264215353;
    msg.x = 0.5958309326114126;
    msg.y = 0.5982703110264999;
    msg.z = 0.06241107888484099;
    msg.phi = 0.7800245402861613;
    msg.theta = 0.989314865871583;
    msg.psi = 0.7985994421776236;
    msg.u = 0.7194459966374096;
    msg.v = 0.9022990053214263;
    msg.w = 0.8307506502595037;
    msg.p = 0.5168979750916648;
    msg.q = 0.19554063774851704;
    msg.r = 0.5318937130516058;
    msg.svx = 0.2172118172357025;
    msg.svy = 0.06598771251092617;
    msg.svz = 0.9771010032514419;

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
    msg.setTimeStamp(0.06636231418215766);
    msg.setSource(17185U);
    msg.setSourceEntity(22U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.33795481404027206;
    msg.lon = 0.5304419492932296;
    msg.height = 0.15897478952470045;
    msg.x = 0.021287808910521178;
    msg.y = 0.7882474324314933;
    msg.z = 0.18196774875019328;
    msg.phi = 0.7297095510242472;
    msg.theta = 0.2653491906555009;
    msg.psi = 0.09039492238462521;
    msg.u = 0.923847828154062;
    msg.v = 0.5819507629904385;
    msg.w = 0.8212812551778992;
    msg.p = 0.5344401574563634;
    msg.q = 0.94986254531393;
    msg.r = 0.04923093540894008;
    msg.svx = 0.9836515644999637;
    msg.svy = 0.9333321023450294;
    msg.svz = 0.32268972190754674;

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
    msg.setTimeStamp(0.053302757863614825);
    msg.setSource(44207U);
    msg.setSourceEntity(138U);
    msg.setDestination(27425U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.7029639347099932;
    msg.lon = 0.7886968453523121;
    msg.height = 0.8136326606944205;
    msg.x = 0.7065176972351601;
    msg.y = 0.5894953019039815;
    msg.z = 0.3359317890416905;
    msg.phi = 0.48377275989799395;
    msg.theta = 0.7485523213206379;
    msg.psi = 0.8499811000948947;
    msg.u = 0.30994249823936804;
    msg.v = 0.6148609645322696;
    msg.w = 0.6399031000728463;
    msg.p = 0.9942445444609934;
    msg.q = 0.14718230360369478;
    msg.r = 0.8264687208669103;
    msg.svx = 0.8606291558439175;
    msg.svy = 0.49041810861569135;
    msg.svz = 0.29795907753325;

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
    msg.setTimeStamp(0.17335739407521);
    msg.setSource(23177U);
    msg.setSourceEntity(82U);
    msg.setDestination(26646U);
    msg.setDestinationEntity(244U);
    msg.op = 132U;
    msg.entities.assign("PKAZCUBDKLPRGWSVFDQSJGDGTQDGPXWWKCXBKBKIURVQAHXPTEQOWOVWNESDDMQQJPUGFCAQTBJTKZINGPJIMUFKFTOGKZHEWFIZVMENMTRHTTFYCVHEFAOXJLYNYCXIZSGCPURANUIFRHCSLYOHKZMHADSCIRMYEBYSVLOJPLSGUAVYEACNWZHRDYJWOVDUNQLZZCBOEOURXELBXVPPJUHQBYRTJDHMAEFXSKBWNSTXGW");

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
    msg.setTimeStamp(0.4647787890881597);
    msg.setSource(38629U);
    msg.setSourceEntity(124U);
    msg.setDestination(4259U);
    msg.setDestinationEntity(205U);
    msg.op = 196U;
    msg.entities.assign("KLYKMJCXAEXFUSTSGUFFDIGYWQPPGAMLOWTAXOILAKWMZRVHETTRXKZWRTJQPUZOATWDHJASMQNBODQXEZVNKOREOWHZNUMBMSHRKGYHXNYVPNJSKHCGEJUUEDSIQRNGPQPIJCKHANPFILDVMXCUPVXVTIUFGXQGDHIRUZYUKORFBTLCTGJRDIBZLEWOVOSYSESXYWYLLBEJBEIGJMBZQ");

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
    msg.setTimeStamp(0.26324153441598774);
    msg.setSource(43253U);
    msg.setSourceEntity(72U);
    msg.setDestination(52847U);
    msg.setDestinationEntity(210U);
    msg.op = 83U;
    msg.entities.assign("VVPLGYWYWMJBFTQKXFGFCPKZVMYHIFQUXRASEPTQQSHCFMDYKRLOQRNGFIKHUSYVZEVSJLJZUXWDKSJZLNPHPLABTPJEUCXAOALYEIKLDAUIUENRQGRANYMDSKTCVFJETUFORSRWMODHJIZAEWVGDNVUMTTOZDVYHKLHZBNAJPCGWHDSGNGZANDYBICIZMOPBXETBU");

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
    msg.setTimeStamp(0.27472099017796137);
    msg.setSource(28722U);
    msg.setSourceEntity(123U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(76U);
    msg.type = 126U;
    msg.speed = 44178U;
    const signed char tmp_msg_0[] = {-77, -47, 104, -91, 56, -34, 52, 121, -16, 81, 41, 25, -35, -103, -99, 94, 109, 21, 96, -81, -35, 50, 26, 39, 0, -113, -79, 4, 96, 47, 87, 30, 49, 100, 26, 126, -107, 92, 111, 118, -32, 39, -31, 44, -109, 21, -44, -81, 14, -61, 105, -97, -111, -74, -10, -81, 76, 119, 21, 61, -35, 27, 93, -75, 125, 111, 25, 40, -68, 67, 22, 1, -22, -107, 92, 66, -16, 79, -107, 83, -41, -21, -126, -65, 102, 120, -18, 67, -120, 117, 16, -77, 53, -22, -83, -79, -49, -108, 35, 72, -114, 75, -45, 45, 100, 50, -116, -12, -71, 64, -57, 19, 89, 76, 75, -100, -125, 67, -106, -36, -124, 17, -80, 14, 35, -48, -17, -109, 20, 80, -17, 25, -59, -90, 107, -6, -79, 80, 119, -23, -49, -114, -1, -56, -31, 80, 59, 34, -11, -94, 103, -53, 109, -74, -45, 100, 59, 118, -72, -65, 117, 28, -112, 49, -90, -33, 110, 33, -11, 100, 52, -104, -120, 0, -37, -73, 71, 113, -65, -112, -9, -1, -34, -64, -32, -29, -60, -101, 70, -21, -99, 57, -19, -36, 1, 107, -45, -73, -32, 117, 46, -115, 65, -39, 48, -36, -68, 4, -95, -59, 126, 66, -88, -123, 122, -21, -1, 44, 91, 99, -100, 44, -108, 61, -31, -28, -5};
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
    msg.setTimeStamp(0.4716076869668966);
    msg.setSource(17918U);
    msg.setSourceEntity(226U);
    msg.setDestination(57888U);
    msg.setDestinationEntity(130U);
    msg.type = 120U;
    msg.speed = 48467U;
    const signed char tmp_msg_0[] = {-84, 90, 30, -6, 24, -13, 117, -62, 34, 55, 110, -46, 17, -80, -45, -69, -128, -71, -75, 12, 15, -112, 32, 70, 93, -91, -29, 60, 8, -20, -124, -91, 32, -15, 20, -100, -121, 30, -13, 41, 55, -105, -25, 16, 75, 56, -6, -9, 100, 67, -66, 14, -43, 11, -63, -112, 95, -86, 20, 37, 21, -36, -69, 10, 115, -4, 107, 20, 6, -71, 107, -11, 31, 51, -24, -101, -20, 29, 22, 19, -122, 59, -100, 113, -24, -25, 98, -115, 75, 84, 94, 112, -81};
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
    msg.setTimeStamp(0.47776628317700687);
    msg.setSource(55991U);
    msg.setSourceEntity(174U);
    msg.setDestination(43129U);
    msg.setDestinationEntity(238U);
    msg.type = 133U;
    msg.speed = 60733U;
    const signed char tmp_msg_0[] = {-113, -94, -101, 65, 67, 93, 96, 92, -109, -17, 112, -122, 19, -3, 34, -107, -120, 89, 46, -116, 1, -83, 77, 30, 113, 40, 121, 39, -36, -98, 40, -120, -115, 119, 104, -68, 86, 82, -26, -27, 38, -112, 8, -68, 124, 20, -25, 86, 124, 25, 81, -94, -85, -79, -19, -102, -44, 72, -5, -34, -16, 121, 69, 20, -108, 29, 105, -1, -8, -35, 22, 24, 117, 2, -45, 58, 122, 35, 45, -107, -110, 21, -125, 28, 50, 62, 95, 15, 103, -91, -39, 69, 63, 33, 44, 13, -42, -67, 79, -83, -102, -121, 114, -35, -47, -90, -73, -11, -70, 56, -81, -84, -63, 106, 9, 9, 75, -109, -74, 90, -10, -2, 94, 50, 126, -44, -86, 45, 94, 106, -3, -17, -61, -126, 119, 120, -81, -31, 12, -67, -68, 121, 114, -22, -75, 19, -108, 77, -67, -110, 124, -67, 126, -17, -53, -38, 57, -45, 70, -98, -15, -86, 47, 19, 61, -57, -38, -7, -105, 18, 111, -11, -76, 22, 44, 67, -73, 104, -43, -118, -106, -125, -17, -28, -81, 49, 64, -65, 8, -65, -57, -34, -76, -77, -109, 42, 62, 87, -12, -63, 87};
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
    msg.setTimeStamp(0.08792888412228417);
    msg.setSource(17854U);
    msg.setSourceEntity(204U);
    msg.setDestination(24466U);
    msg.setDestinationEntity(149U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.3555516078716915;
    msg.bank2p_pgain = 0.18645270380203016;

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
    msg.setTimeStamp(0.9501893399941841);
    msg.setSource(25685U);
    msg.setSourceEntity(11U);
    msg.setDestination(57527U);
    msg.setDestinationEntity(66U);
    msg.op = 233U;
    msg.tas2acc_pgain = 0.9820056957042187;
    msg.bank2p_pgain = 0.31912716349617354;

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
    msg.setTimeStamp(0.2288694278448723);
    msg.setSource(47276U);
    msg.setSourceEntity(124U);
    msg.setDestination(16005U);
    msg.setDestinationEntity(28U);
    msg.op = 71U;
    msg.tas2acc_pgain = 0.9216760238963523;
    msg.bank2p_pgain = 0.47277990016106064;

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
    msg.setTimeStamp(0.2961154105479936);
    msg.setSource(24503U);
    msg.setSourceEntity(116U);
    msg.setDestination(62761U);
    msg.setDestinationEntity(48U);
    msg.available = 2280404257U;
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
    msg.setTimeStamp(0.6323123081455756);
    msg.setSource(65350U);
    msg.setSourceEntity(214U);
    msg.setDestination(20051U);
    msg.setDestinationEntity(100U);
    msg.available = 2839871841U;
    msg.value = 241U;

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
    msg.setTimeStamp(0.6009072647494642);
    msg.setSource(8806U);
    msg.setSourceEntity(185U);
    msg.setDestination(1569U);
    msg.setDestinationEntity(202U);
    msg.available = 2625095267U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.04210049574387542);
    msg.setSource(33373U);
    msg.setSourceEntity(72U);
    msg.setDestination(26330U);
    msg.setDestinationEntity(21U);
    msg.op = 187U;
    msg.snapshot.assign("ZLFZJDXBKDYGPROUFOBDYINLCYNEZTHCZYGURWPWBGCCEIFCRNIWMSQXKOAFUBQOOCGWEQIULPYAUNDMBLOGRHPQLUNSXDGIUBKGKPLSTYQSWGAWBNZUTCJHDQNQFREFJMIIKYVMKILXPKVKQHTWAMXOVTULHFPHOAZRGXHVBZXJIOSVFSNQXAAMCEMZAUFTFVNBSPGTRRJVWACDKLMTEXETJZEVM");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 52457U;
    tmp_msg_0.rpm = 0.44831885134933147;
    tmp_msg_0.direction = 67U;
    tmp_msg_0.custom.assign("XYTGTQDUFLLYZSUJOEMY");
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
    msg.setTimeStamp(0.7988715117027422);
    msg.setSource(31273U);
    msg.setSourceEntity(248U);
    msg.setDestination(49913U);
    msg.setDestinationEntity(150U);
    msg.op = 172U;
    msg.snapshot.assign("ACYZNRZEUYSYLGDBGJWRJJMATWWTLUITZCYQNTQQBPAFSWIPLPFRFZVJZAJDIZXGYHIDORSPFVIMKQIHBNPWYORVASCKCKEWXJHNQCEQREXXYCTARGRPLBTCMKUGZBKMDKJDFSUGMFLVOSEZILLWHKCPOETUHKZLMSFIJUSOVXTQDSPMOHBANHRVTAVHWXXRBDQEBLPUNKQDAEGHNMFETCIYDABXQNYOVMVEHOJGX");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.7453437122389365;
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
    msg.setTimeStamp(0.3729303308821036);
    msg.setSource(25605U);
    msg.setSourceEntity(89U);
    msg.setDestination(38845U);
    msg.setDestinationEntity(237U);
    msg.op = 200U;
    msg.snapshot.assign("FZWYRNBTTXCHUJHGPJESZZNLWUJIXJWRD");
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 4624370U;
    tmp_msg_0.latitude = 0.47854992871268043;
    tmp_msg_0.longitude = 0.690257332898339;
    tmp_msg_0.altitude = 35745U;
    tmp_msg_0.depth = 43449U;
    tmp_msg_0.heading = 63104U;
    tmp_msg_0.speed = -26469;
    tmp_msg_0.fuel = 108;
    tmp_msg_0.exec_state = -89;
    tmp_msg_0.plan_checksum = 12870U;
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
    msg.setTimeStamp(0.9215689022339763);
    msg.setSource(248U);
    msg.setSourceEntity(190U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(181U);
    msg.op = 37U;
    msg.name.assign("HAXILBVTTNFWVCFAQQRBDWJSNUXGFPNYKFNUSNTGQFXAKCYYKNRVMFWFSUSBTKDTMMIBHETMHEWUEXSSIJBTDPLDIQLDEYUEJRJLIBDAVLNGCKQILNESHDEL");

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
    msg.setTimeStamp(0.9285350653273449);
    msg.setSource(49120U);
    msg.setSourceEntity(164U);
    msg.setDestination(46834U);
    msg.setDestinationEntity(124U);
    msg.op = 144U;
    msg.name.assign("OTQPREJNSUVKIKCHQHCSQYTKPKVIZGFBYIFXTUDCOMNBLJFYNGCNHPOZIRXELZWGKSEYHFOQZKADDHQUTBAWGMWHECDZIVNRVUUEDVYQJDYUPWOUPQRARAUSBHMZXMFLIJFWVVJJBLNRPSTVDMXYKOAOKRRMDNXZSUSALIIOGPCPKWXAYANYWNGJSVAWRGLNQBCEOBRKEPHQPFZOCCITT");

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
    msg.setTimeStamp(0.26849895228598164);
    msg.setSource(15743U);
    msg.setSourceEntity(119U);
    msg.setDestination(8108U);
    msg.setDestinationEntity(44U);
    msg.op = 1U;
    msg.name.assign("VZKDCPCQGJLNPDSOUDNBVNVUWZHNAPQFGICOHBFUMNPKGTVOURIKDNMWJSRLXQLDWCCOPDEIFHZHJDKIBBPYZEEAYCKAMNLKEZQSLBYVBSVGXLMSIEXFNMMXWDROHVREAPJLOZUMMHXPHIHNBQFCXVHXLOYTFYWSYLYEGUWSIFIYVSCLPRGKFEJM");

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
    msg.setTimeStamp(0.36273841340891677);
    msg.setSource(58160U);
    msg.setSourceEntity(52U);
    msg.setDestination(59709U);
    msg.setDestinationEntity(99U);
    msg.type = 230U;
    msg.htime = 0.7386174222182337;
    msg.context.assign("AQBUCSNMCAKXNRAGPNLJREVHDVKPRNQYPFLVMOZXAKBPEJISLOHTTRMDTBZBUTRALGVUWDPHRQVWCDVTZQQZGLXBNWGKFYEJUIYWWJKTPYDGWYXHTHZBSEOFCWDCLHZJYFIYISNFQPBSZTAIAXQWYQSLCNFMOWDXUHLCOKNMJBVIFFSOTRMUSGIZFCBISMMXAQFXVPQDOECJMWOHZKOVXEDGUTMRJGEKR");
    msg.text.assign("ROARANQKYVWQH");

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
    msg.setTimeStamp(0.9139366309175228);
    msg.setSource(4884U);
    msg.setSourceEntity(222U);
    msg.setDestination(38613U);
    msg.setDestinationEntity(67U);
    msg.type = 12U;
    msg.htime = 0.26981080134925484;
    msg.context.assign("TFWIFHRXQTRJDBZCAEWCOXFFRYVBTCJFCYRAYINXHPKYWIMRYXUUMLUVDPZBOUEQJGINKTEYMKKCQLVSJLQMASISBGAXBHSIIWTOPONPINKVERZLQWSPAGMJCDUEMRXYMJGXHHXIEULCRKWKKKFTLAVEEAC");
    msg.text.assign("WPNWMUSKCZBOXTJURONOIVSMZXWEKLHBQGDRPNPZEZGIJINHXCHKEUIAFCSACDACMISUFLFQSMPHDYXRRQMTSPNMTAYQTHVRFPSDQZQOQXUSRCTJOAKIXOMLXIFGWBLRXBYSLYKLDEUBHEJNGHZFVAIGAFYDKMWJRVYPYVSH");

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
    msg.setTimeStamp(0.7010567726684593);
    msg.setSource(17964U);
    msg.setSourceEntity(200U);
    msg.setDestination(52647U);
    msg.setDestinationEntity(244U);
    msg.type = 111U;
    msg.htime = 0.5248076908841841;
    msg.context.assign("RCZNBIAMQWGHWMZABDOTTDIUQDUBGUERVXNKKRQDRFGAFSPSIADFHORKREYTYJKPZTSMVEZLQNCNTKQWGLHRACGNZFSVYREFJCLKEIXKUAEVCLHPSETKODJMQWFIIYQGPMXDSHVAGHOMNYGPHZVXYUUJSGGBADYFWMLYDXTJXCXFQNDVONHH");
    msg.text.assign("FBCMHQIHAHOMGNRWMTSCZUGZEVKYYQPZCHWFMRXKWZNSUYPDUFGCIRLLUMPUTXAETWVCDCLYHBATEOIVZQRWXTXDPFORGDLFZXVOLTNLKXHXSZWXENPWRUGLTPQQOINAMDALNVMVKQOBCUKBSMYNJIGQJDIPDWVKKYFGHUMCHJBVYQANPUGSZRWRIFJYXSIHOKBFSSJKATDBDJPIQWAPGAOHNVCBYYOEJJFTMFRERSVX");

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
    msg.setTimeStamp(0.4442220749778957);
    msg.setSource(50813U);
    msg.setSourceEntity(205U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(19U);
    msg.command = 24U;
    msg.htime = 0.8458697674582797;

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
    msg.setTimeStamp(0.23449417356322189);
    msg.setSource(44874U);
    msg.setSourceEntity(75U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(229U);
    msg.command = 234U;
    msg.htime = 0.4293904414986265;

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
    msg.setTimeStamp(0.9091763282136207);
    msg.setSource(11248U);
    msg.setSourceEntity(156U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(230U);
    msg.command = 83U;
    msg.htime = 0.8277226929795354;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 237U;
    tmp_msg_0.htime = 0.09994947551184097;
    tmp_msg_0.context.assign("QFKAYODILQVGKLHGTZPOHHJFIIHNGQBFUBKWMTPZBRIYMRBRQXKQPDPAKWJJIDNEGSFXVCSJNEJFXJCNEUAJKZAXTWUXTSUACOSXRW");
    tmp_msg_0.text.assign("KMJEQLCNELWKXQGDHIOTBEZMWRFFDGSMPSIWSJHTCBIJATVYOEYQSKEAMWOSLOWKVHYAJGUVADBZFXYOQVMNPPRXAYZRURWBITVDGVWAFFSYNQOCHRHTUNATQUFWCUSNVTTZDNORHXVFLZJMXIFRLBUNIISYKOUNCRBCDDGTENEWDYEQZ");
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
    msg.setTimeStamp(0.02697985352608412);
    msg.setSource(7892U);
    msg.setSourceEntity(114U);
    msg.setDestination(52430U);
    msg.setDestinationEntity(82U);
    msg.op = 158U;
    msg.file.assign("IHKTIPJGSHSKTPIUIVLCOCJLTIVAATBXDGKGGYKNUMIFNKJDQBZMAXDJHFNIPAGVXUPMCKASFUMUEWCSACNWPNOYEPZZIFFOREANHQBCLJYFRQDVOOOOSHZURERXKLZDG");

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
    msg.setTimeStamp(0.11779821511457611);
    msg.setSource(51399U);
    msg.setSourceEntity(131U);
    msg.setDestination(41292U);
    msg.setDestinationEntity(225U);
    msg.op = 219U;
    msg.file.assign("UPVWVYRVAPKRUSXHMZCBERZPZHTTFWDIQJTMUWESNBPNWODCSXMEUFVIMFZWXFFCFNBRTKNBAOZZQLTIOUHPXOGDCYAICWLZHACBCYMYRZKJKASXZYFXQVDJMONQHMHKCQFENGGWVUMSFRCTCGDTEJLLNLSEGGOBDBRFGBLBAQPITTOYLXPLE");

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
    msg.setTimeStamp(0.04460674110112861);
    msg.setSource(53128U);
    msg.setSourceEntity(55U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(41U);
    msg.op = 205U;
    msg.file.assign("JXEUGXYPSYEDXVOPIKANGGPRQCCGZSXZNMLBHSJVQWVQKALDVPDTDHFTQAVW");

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
    msg.setTimeStamp(0.3341466755103111);
    msg.setSource(30191U);
    msg.setSourceEntity(52U);
    msg.setDestination(22524U);
    msg.setDestinationEntity(62U);
    msg.op = 108U;
    msg.clock = 0.17974387981121687;
    msg.tz = -26;

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
    msg.setTimeStamp(0.325241890439538);
    msg.setSource(51904U);
    msg.setSourceEntity(93U);
    msg.setDestination(47754U);
    msg.setDestinationEntity(121U);
    msg.op = 115U;
    msg.clock = 0.6044906654223741;
    msg.tz = 35;

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
    msg.setTimeStamp(0.9331186535253512);
    msg.setSource(54486U);
    msg.setSourceEntity(110U);
    msg.setDestination(64479U);
    msg.setDestinationEntity(169U);
    msg.op = 26U;
    msg.clock = 0.18461110779645162;
    msg.tz = -45;

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
    msg.setTimeStamp(0.606135650819234);
    msg.setSource(48921U);
    msg.setSourceEntity(39U);
    msg.setDestination(43406U);
    msg.setDestinationEntity(21U);
    msg.conductivity = 0.6953767814422366;
    msg.temperature = 0.4001477931537185;
    msg.depth = 0.7007049833012731;

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
    msg.setTimeStamp(0.9269932033185242);
    msg.setSource(20692U);
    msg.setSourceEntity(62U);
    msg.setDestination(42511U);
    msg.setDestinationEntity(41U);
    msg.conductivity = 0.044590281407509647;
    msg.temperature = 0.09461479896860803;
    msg.depth = 0.0640501469067134;

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
    msg.setTimeStamp(0.25539614470761296);
    msg.setSource(9463U);
    msg.setSourceEntity(94U);
    msg.setDestination(5425U);
    msg.setDestinationEntity(106U);
    msg.conductivity = 0.2940922545855468;
    msg.temperature = 0.18994901948820664;
    msg.depth = 0.8602489817084138;

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
    msg.setTimeStamp(0.4946464594425304);
    msg.setSource(54883U);
    msg.setSourceEntity(167U);
    msg.setDestination(33802U);
    msg.setDestinationEntity(26U);
    msg.altitude = 0.13629804171103788;
    msg.roll = 34264U;
    msg.pitch = 9647U;
    msg.yaw = 59191U;
    msg.speed = 10823;

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
    msg.setTimeStamp(0.4117696698143074);
    msg.setSource(59123U);
    msg.setSourceEntity(212U);
    msg.setDestination(54587U);
    msg.setDestinationEntity(162U);
    msg.altitude = 0.0012680393108656096;
    msg.roll = 40674U;
    msg.pitch = 51386U;
    msg.yaw = 15679U;
    msg.speed = 13585;

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
    msg.setTimeStamp(0.19374694835679784);
    msg.setSource(17547U);
    msg.setSourceEntity(179U);
    msg.setDestination(6051U);
    msg.setDestinationEntity(197U);
    msg.altitude = 0.922572993187296;
    msg.roll = 24476U;
    msg.pitch = 30445U;
    msg.yaw = 51267U;
    msg.speed = -26730;

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
    msg.setTimeStamp(0.6093397493409815);
    msg.setSource(48420U);
    msg.setSourceEntity(136U);
    msg.setDestination(5459U);
    msg.setDestinationEntity(193U);
    msg.altitude = 0.4970316719678478;
    msg.width = 0.5085905303241032;
    msg.length = 0.9617463241507002;
    msg.bearing = 0.28492610033105115;
    msg.pxl = 17165;
    msg.encoding = 2U;
    const signed char tmp_msg_0[] = {68, -13, 42, -44, 28, 50, -93, -7, -22, -72, 20};
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
    msg.setTimeStamp(0.6585631850352692);
    msg.setSource(46427U);
    msg.setSourceEntity(100U);
    msg.setDestination(62067U);
    msg.setDestinationEntity(69U);
    msg.altitude = 0.016167638869837297;
    msg.width = 0.48251057940030084;
    msg.length = 0.8395011265624761;
    msg.bearing = 0.8027301535800014;
    msg.pxl = -15266;
    msg.encoding = 232U;
    const signed char tmp_msg_0[] = {65, -91, -60, -73, 0, 16, -86, 34, 17, -49, 71, -27, 88, -87, -99, 110, -28, 105, -91, 7, 37, 30, -122, 104, 70, 74, -55, -78, 43, 50, -19, 68, -33, 86, -83, -20, -56, -103, 40, 56, -123, 63, 122, -20, -111, -42, -77, 99, -8, -42, 111, -119, 114, -122, 110, 12, -108, 14, -104, 44, 23, -80, -65, -60, -101, -79, -91, -45, -81, 58, 64, -77, 8, -92, -102, -18, 101, -106, 3, -105, -103, 52, 73, -109, 45, 98, -69, 49, 7, 0, -83, -40, -124, 63, 120, 18, -57, -128, -120, 87, -116, 85};
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
    msg.setTimeStamp(0.3650881715569838);
    msg.setSource(45969U);
    msg.setSourceEntity(95U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.497269806213113;
    msg.width = 0.12917537590137407;
    msg.length = 0.3443136257963235;
    msg.bearing = 0.007004656007949084;
    msg.pxl = -11650;
    msg.encoding = 213U;
    const signed char tmp_msg_0[] = {-10, 53, 100, 87, -77, 60, -39, -16, 88, 54, 12, 116, 17, -9, -85, -100};
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
    msg.setTimeStamp(0.335668965072245);
    msg.setSource(63475U);
    msg.setSourceEntity(250U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(74U);
    msg.text.assign("QRMREQYQRNTYCDMDTNYZKWNSLASBHKJUTGMSXCNQNMSDOQXIAHGZGAHPVKNPNLFMBTCIT");
    msg.type = 1U;

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
    msg.setTimeStamp(0.3196104124547826);
    msg.setSource(9930U);
    msg.setSourceEntity(101U);
    msg.setDestination(34382U);
    msg.setDestinationEntity(150U);
    msg.text.assign("AHPYMCNDPQTEGKIAVLHIKSBYHWSGHYJGHBUIFMJJLCBXZAHIXRYNSEIOQBTWPGXEVBPZIKQJQLOTMFPXEJTODCPOZBQZQSKHOMTNFZNZYUVMGJGTFKCWZFTFRCRMDSRWDQBZDKGURAJVXDIEALGBCXVFZWMKOIQYBVPTQRAEUHUGOWPOROFSCUDAYSLLLXTEKDYSNMLANCWN");
    msg.type = 181U;

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
    msg.setTimeStamp(0.11567446966922834);
    msg.setSource(65134U);
    msg.setSourceEntity(29U);
    msg.setDestination(63U);
    msg.setDestinationEntity(16U);
    msg.text.assign("VPVIERUDFJECBNHNSHEPRYKEXBBTQEYHIGPJPAULTTUJBECAOMNMQQRHDIXKXMGWDRYMYGAXUICSVBSBMUCLQOVCSFAJTKGNSSHVGOMLZNOBGPWLQBLZDYSTTNXAZSUJKRGEZOPXJPKHVRYOWYRXNRWFNMKTEILIQFIDYCJWYPOFALWIAXAUZKODKTIOQXQEUVLXJWROCWHEDNMKFFVZVFCNFHQ");
    msg.type = 167U;

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
    msg.setTimeStamp(0.23578756324076078);
    msg.setSource(317U);
    msg.setSourceEntity(218U);
    msg.setDestination(23269U);
    msg.setDestinationEntity(52U);
    msg.parameter = 156U;
    msg.numsamples = 159U;
    msg.lat = 0.9085055515774001;
    msg.lon = 0.9884195444810221;

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
    msg.setTimeStamp(0.7529022356968158);
    msg.setSource(34678U);
    msg.setSourceEntity(126U);
    msg.setDestination(6492U);
    msg.setDestinationEntity(14U);
    msg.parameter = 190U;
    msg.numsamples = 120U;
    msg.lat = 0.28109084712209165;
    msg.lon = 0.5135099669268535;

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
    msg.setTimeStamp(0.2561280374908679);
    msg.setSource(52135U);
    msg.setSourceEntity(217U);
    msg.setDestination(16225U);
    msg.setDestinationEntity(182U);
    msg.parameter = 129U;
    msg.numsamples = 182U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 35381U;
    tmp_msg_0.avg = 0.9982892653986066;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8832721540462108;
    msg.lon = 0.0009151954313830757;

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
    msg.setTimeStamp(0.10098519114129967);
    msg.setSource(1200U);
    msg.setSourceEntity(87U);
    msg.setDestination(3395U);
    msg.setDestinationEntity(11U);
    msg.depth = 43131U;
    msg.avg = 0.29630791152077696;

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
    msg.setTimeStamp(0.7874111346114938);
    msg.setSource(54123U);
    msg.setSourceEntity(226U);
    msg.setDestination(43163U);
    msg.setDestinationEntity(142U);
    msg.depth = 344U;
    msg.avg = 0.9963617392918656;

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
    msg.setTimeStamp(0.6169101671237972);
    msg.setSource(46470U);
    msg.setSourceEntity(97U);
    msg.setDestination(572U);
    msg.setDestinationEntity(195U);
    msg.depth = 39450U;
    msg.avg = 0.09084714258364612;

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
    msg.setTimeStamp(0.7921446131459313);
    msg.setSource(44363U);
    msg.setSourceEntity(122U);
    msg.setDestination(34078U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.5899969936011829);
    msg.setSource(53034U);
    msg.setSourceEntity(147U);
    msg.setDestination(61816U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.773204932664123);
    msg.setSource(48656U);
    msg.setSourceEntity(203U);
    msg.setDestination(41505U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.38014439048511417);
    msg.setSource(8595U);
    msg.setSourceEntity(176U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(147U);
    msg.sys_name.assign("DHDEKYIARZJSWVUIAFBQIXKHPAMIASZMGPVGFUQWVMTQLVZHPEGIFDUYPYHQLSBKEFFMLFOCDKRJLYORSSAHQTZUBGBSOKECWAZBRDDWGZQCWYKZTNFNGEHVVEWVROIISBLJMHBEMNGZCNGOPXEC");
    msg.sys_type = 137U;
    msg.owner = 50260U;
    msg.lat = 0.19231777433613917;
    msg.lon = 0.9337786692089222;
    msg.height = 0.06714049100665043;
    msg.services.assign("XFTMGNULOYJDIQMYCSADTDFOHPNFMMTCSFLPDGISSGPXMKUCZYW");

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
    msg.setTimeStamp(0.8545772651753182);
    msg.setSource(54089U);
    msg.setSourceEntity(212U);
    msg.setDestination(47573U);
    msg.setDestinationEntity(72U);
    msg.sys_name.assign("MOEDKGVKISNVMZZSRWERAKDPFGCYWERLMZUIPFUVNJBAUPCXPTEFFXBWHHIHKKCWVTEICERUHWGTTOYNZZXQATDCDPQYAPCUTEDJFYJGIOSGDFYRTCLXDGCQOIRZTMBAMWKRQSYLRWWBMQIHCSQZGEXBOAOURYEXIHJYTGLQSZFQJOCMLHLFWTYKGLMZHXSIRIOSJVMPPF");
    msg.sys_type = 122U;
    msg.owner = 50809U;
    msg.lat = 0.995365784318651;
    msg.lon = 0.7760661754407637;
    msg.height = 0.5756123072581052;
    msg.services.assign("NPLQWJIBHMPUACQRZDHRKFVJW");

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
    msg.setTimeStamp(0.6910649843328088);
    msg.setSource(63951U);
    msg.setSourceEntity(150U);
    msg.setDestination(3813U);
    msg.setDestinationEntity(169U);
    msg.sys_name.assign("VIGNLBLFTDGNPKCBQUMXKDEOXQFFHBOAWHYLHJDIJBTVZYPNUUQRBLFDMECGRCAWYSLNIDHDVIWCBFHYGSWICAPIBHPOXZLZTEROVMKHGRJIQSMZQGOQTLCWNIPOKDQJORXPLMEOUUVVMBWYZOZXUAAPSJSGRVCPDJXWERYZTPKKKHHNENHSUWSFJZREGLGNYY");
    msg.sys_type = 229U;
    msg.owner = 34361U;
    msg.lat = 0.6382017203560705;
    msg.lon = 0.09531757679333652;
    msg.height = 0.5953588273388087;
    msg.services.assign("EOEKFFYSWQSYMZGFVPPSDCYEDEHNQKXQBRLDOQIAULIPKRXDIZBEYNZKSHAPAQDVQNYGR");

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
    msg.setTimeStamp(0.878488804771386);
    msg.setSource(8051U);
    msg.setSourceEntity(234U);
    msg.setDestination(34193U);
    msg.setDestinationEntity(175U);
    msg.service.assign("PSHTVDLFXPZKJRYIVKVAAWLDFWQGUSWKL");
    msg.service_type = 176U;

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
    msg.setTimeStamp(0.29713312712127393);
    msg.setSource(42563U);
    msg.setSourceEntity(56U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(227U);
    msg.service.assign("ZXNCUEJPDIJLCLOIOJBVLOTWHTQNZUZTYMLXSWJVPHIGSDPMBQZDNTFMHXGDGBFKBCNNKWOLGPAEUMRGBCBLKDKJZDAXGXGYASUWXDJSMCUUZVRNQFBKUBIVHQHQEUYFTYRXRVNIAQVBDORIVASSPKPKPXLHQNMMRKJVYPVERAAWGMLTHVWCWZFDCEOWPJNUCI");
    msg.service_type = 60U;

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
    msg.setTimeStamp(0.841498205153518);
    msg.setSource(34020U);
    msg.setSourceEntity(17U);
    msg.setDestination(13321U);
    msg.setDestinationEntity(99U);
    msg.service.assign("QDCBUZBRONZZQVFELXLXIIIYPTSBERTGOPOCLVWSVWDWUYEIMKQMPLRJUUTOYJNSEBAGYAPTKCRLSMJMLRXYXHMFNGECVUKJICQMJBDDDNDZTDHEFQULSTJFBJRDSWHAUNSMANXOYWXZUTONAOURFVVBYUKKJKHVFNKPHDPAFSTIBWIHBSWJYZFGTWGFTKZGZELVNXIVEXEOHZGDCPOZLVYRPPW");
    msg.service_type = 121U;

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
    msg.setTimeStamp(0.5590312438131854);
    msg.setSource(22123U);
    msg.setSourceEntity(145U);
    msg.setDestination(19509U);
    msg.setDestinationEntity(63U);
    msg.value = 0.6634751724506649;

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
    msg.setTimeStamp(0.7407947626714909);
    msg.setSource(25599U);
    msg.setSourceEntity(168U);
    msg.setDestination(28356U);
    msg.setDestinationEntity(75U);
    msg.value = 0.593791262790606;

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
    msg.setTimeStamp(0.8353251358769813);
    msg.setSource(16658U);
    msg.setSourceEntity(71U);
    msg.setDestination(63698U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5520607576789928;

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
    msg.setTimeStamp(0.35726941312430305);
    msg.setSource(41153U);
    msg.setSourceEntity(176U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(176U);
    msg.value = 0.34923597343965374;

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
    msg.setTimeStamp(0.7354091115294505);
    msg.setSource(39949U);
    msg.setSourceEntity(162U);
    msg.setDestination(21545U);
    msg.setDestinationEntity(54U);
    msg.value = 0.25470692084519675;

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
    msg.setTimeStamp(0.3271262661134857);
    msg.setSource(50120U);
    msg.setSourceEntity(221U);
    msg.setDestination(57933U);
    msg.setDestinationEntity(107U);
    msg.value = 0.6179838461995478;

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
    msg.setTimeStamp(0.5148224388624917);
    msg.setSource(50686U);
    msg.setSourceEntity(7U);
    msg.setDestination(15660U);
    msg.setDestinationEntity(161U);
    msg.value = 0.32554849513492046;

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
    msg.setTimeStamp(0.2742079301334257);
    msg.setSource(1747U);
    msg.setSourceEntity(222U);
    msg.setDestination(56214U);
    msg.setDestinationEntity(168U);
    msg.value = 0.6863176239905799;

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
    msg.setTimeStamp(0.10358055154675261);
    msg.setSource(63957U);
    msg.setSourceEntity(37U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(119U);
    msg.value = 0.26159446143879816;

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
    msg.setTimeStamp(0.19101632173608996);
    msg.setSource(56555U);
    msg.setSourceEntity(58U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(62U);
    msg.number.assign("WAZWECZGJDLJFWSAMJVQHMHYAJHRTGIDZAMLZUEAHPFXFUYBPPGRL");
    msg.timeout = 2336U;
    msg.contents.assign("FYJGFYSZOAAAPLOSHZQQPZMBYYXEHXKQIHRFBWKLIQJLQJIFVOEZEIKHBJNYOHETKNHVEWGGPMVCEPSCQDMNOWEZGYAMJWVPFYGMZNDEZWURWOCIBGWZCFOOHXKISKFHRWPTJDTNFMHVRCBILXEUFKSBKOQLNDNRSTDJPUULTRTCGBDDPNMVJUPFUYGCYULCMXCIPQVRRSEXLAQSBUXJVSGWADIKC");

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
    msg.setTimeStamp(0.8591619135053795);
    msg.setSource(60115U);
    msg.setSourceEntity(5U);
    msg.setDestination(25267U);
    msg.setDestinationEntity(168U);
    msg.number.assign("MSIHJCTSNRKRNRJNRGKZXMVSLQFZXFTHIIEHHMTJTBXSUACEYGAGSXBBNHEONOCBDTUCVFRJPPBGAJQVOURDDEGQYBLOSAHBMNFOZVVJNGYESSPKLZLZGBSAQMULRDEFCAPDQLMKCXZHOXKUWZQFMJQCEDRTYIEZJYQUDGLDIWPKIXV");
    msg.timeout = 4622U;
    msg.contents.assign("SFWUQRETCDZVELUGGMJRYUGBFVBIFJJVUHVEPHYPYHWTO");

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
    msg.setTimeStamp(0.30935815345778905);
    msg.setSource(5640U);
    msg.setSourceEntity(110U);
    msg.setDestination(11981U);
    msg.setDestinationEntity(86U);
    msg.number.assign("XWPMKZPRSVOABWFCZSPROMGKRAQAIFPBXILCFFGWYXDMXKJVGGFUPOXJVCWUDRRBLJBS");
    msg.timeout = 28914U;
    msg.contents.assign("ZPCMTUGJDMUOSYYCNHIFMARBITMKZNIIHFVEMADBVVAUJKCTFTCDLBDFFYPGPMDALZLYVZLSXTURWTKUDIKE");

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
    msg.setTimeStamp(0.9605054602517229);
    msg.setSource(4083U);
    msg.setSourceEntity(46U);
    msg.setDestination(63963U);
    msg.setDestinationEntity(35U);
    msg.seq = 1728129496U;
    msg.destination.assign("XEMIMADIDDULLDBQKKXXBFHVSDLBHAUUPMPEKJJRORXKLWCRJBZNCGKOAEJNSSNHUULMHOBILXZPUXACQYTQZVBYFCLOLNEHISUOIHQXNYYKPRTADWJGULTETWBSKNVOPYBFTRIVTCNQAPHGNDJCGDTNWRAFZHSSTYEWETQEFWPKGOCJYERWMRXJAZFTOUYSMCIMAUVNVQRQQPIPMFZWGZOVPHMQWDSXMGCOAYI");
    msg.timeout = 17578U;
    const signed char tmp_msg_0[] = {13, 37, -122, -89, -117, -13, 16, 14, -105, 21, -31, 47, 55, 7, -36, 114, -117, -108, -54, 73, 29, -85, 76, 91, -69, 16, 70, 50};
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
    msg.setTimeStamp(0.6541034261248009);
    msg.setSource(63183U);
    msg.setSourceEntity(79U);
    msg.setDestination(10322U);
    msg.setDestinationEntity(96U);
    msg.seq = 3445447602U;
    msg.destination.assign("STDIMKNKWWLRN");
    msg.timeout = 43703U;
    const signed char tmp_msg_0[] = {36, 114, -103, 23, -95, 24, -8, -81, 64, -95, 105, -60, 63, 93, 90, 9, 20, -122, -40, 106, 69, 20, -89, 114, -93, -10, -50, 65, 117, 109, 84, -23, 18, 12, 24, 39, -98, 13, -13, -57, -46, 107, 10, -91, 118, -60, 62, -117, 109, -45, -109, -87, 78, -91, -70, 7, -106, 75, 90, 121, -57, 75, 1, 76, 114, -111, 24, 61, 8, -95, 12, -77, 14, -85, 15, 0, 37, 6, -62, -17, 32, -34, -14, -12, -48, 60, -68, 11, 40, -65, 51, -6, -28, -53, 46, 96, -100, -55, -100, 124, -49, -97, -32, -115, -79, 58, 18, 38, 91, -104, -93, -31, 88, 41, -43, -31, 39, 125, 70, -113, -99, -122, -128, -127, 59, 84, -27, -83, -54, -8, -43, 101, -89, -110, 47, 4, 58, 64, 43, 15, -48, -116, 0, 28, -110, -84, 56, -128, 101, 98, -83, -118, -51, -62, 2, -45, 93, -25, -83, 69, 122, 78, 109, 30, -64, 42, -82, 118, 103, 66, 40, 123, 87, 23, 36, 115, 44, -92, 126, 81, -22, 40, -34, 43, 32, 59, 38, 34, -86, 125, -27, 20, -38, -104, -24, -48, 44, 77, 13, -14, 102, -25, -43, 32, -4, -113, 119, 118, 74, 20, -47, 54, 108, 82, 93, -96, 43};
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
    msg.setTimeStamp(0.6709180887263901);
    msg.setSource(28889U);
    msg.setSourceEntity(13U);
    msg.setDestination(14301U);
    msg.setDestinationEntity(7U);
    msg.seq = 4217349625U;
    msg.destination.assign("PNQDQVRHKLWOIPJJRFFSSHUKWFLLEBDGYCOBZLSBZRTTVJJYSPHRPGDDECXZMVKVKRGSZHWZEXROQGFNXJCADVHJQKBNLBQGTUTBNHPYIJXETFTLPMSDFTMJWAVSOFIYEX");
    msg.timeout = 59326U;
    const signed char tmp_msg_0[] = {18, 46, -36, 49, 20, 83, 55, 30, -3, 41, -72, -96, -99, -25, 18, -100, -82, 48, -97, -127, -36, 29, 2, 56, 17, 40, 39, 75, -92, 107, -91, 11, 43, 108, 96, -84, 96, -81, 48, -7, -64, -92, 116, 81, -65, 113, 102, 62, 72, 82, 96, -59, 78, 40, -97, 15, 23, 36, 112, 75, -59, -74, -101, -3, -92, -46, 110, -83, 5, 19, 108, 36, 101, 35, -98, -116, -59, 95, -23, -53, -17, 59, 57, -120, -46, -31, -33, 13, -60, -122, 32, -127, -82, 25, -68, -83, -125, -94, -37, -11, -102, -65, -58, 63, 14, 87, -11, 48, -124, 77, -116, 101, -37, 60, -95, -115, 34, -17, -119, 71, 55, 125, -123, 29, 74, 57, 68, 17, -12, 77, 42, 3, -74, -12, -81, 20, -53, -89, -128, 79, -96, 26, 90, 0, 60, -27, 85, 13, 86, -27, -58, 95, -5, -54, -73, -108, 90, 89, 12, 107, -21, -10, -38, 125, 85, 58, 70, 14, 40, 106, 27, 93, 12, 26, -47, 70, 42, -53, 125, -93, -33, 67, -23, -127, 88, 93, 121, -114, 71, 15, -17, -75, -8, 10, -95, 0, -28, 41};
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
    msg.setTimeStamp(0.14607658609435292);
    msg.setSource(34348U);
    msg.setSourceEntity(198U);
    msg.setDestination(21360U);
    msg.setDestinationEntity(40U);
    msg.source.assign("NYTWWDVDKEJYGAHEFRSTVSUTNSHCFOGFOUMGCEBFKDXNKKGVAQOWSBLMAXPJDRFMQCLLFTJCHZVAC");
    const signed char tmp_msg_0[] = {118, 123, 108, -77, 108, 126, -82, -79, 94, 74, 38, -63, -17, 113, -47, 58, -56, -37, 106, 49, 6, 98, -114, 93, 89, 8, 10, 25, -112, 89, 30, -6, 111, 18, -64, -10, -55, -7, -57, 88, 23, -79, 60, -25, 18, 125, 1, 110, -124, -109, -36, 89, 45, -77, 91, 25, 2, -85, 4, 117, -46, -123, 57, 0, -77, -88, -16, -72, 118, 125, 3, 41, -99, -80, 100, -92, -101, 58, -113, -1, 10, -21, 43, 106, 17, 114, 6, -18, 85, -40, -52, -5, -41, 17, -12, -7, 17, -54, 22, -11, 78, 65, -80, 26, -79, 82, -51, 67, -17, 75, -49, -117, 71, 109, 38, -35, -120, 73, -21, -45, 60, -127, -87, 98, -74, -40, -39, 25, -78, -63, 38, 17, 34, -21, 7, 81, 119, -104, -101, -71, -16, -38, 92, 39, -92, 85, 86, -10, -80, 114, 119, -49, -97, -58, 22, -47, -123, 74, -44, 12, 100, -105, 112, -60, 115, 113, -127, 123, 120, -5, 21, 45, -55, -11, 24, -32, -83, 1, -48, 10, -85, 104, 117, -10, 39, -93, 3, -56, -113, -54, -5, -90, 25, 88, -1, 113, 54, -44, 90, 38, -126, -35, -35, -54, -86, 7, -73, -56, -94, 35, -39, 80};
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
    msg.setTimeStamp(0.3695594649645281);
    msg.setSource(20342U);
    msg.setSourceEntity(201U);
    msg.setDestination(65411U);
    msg.setDestinationEntity(49U);
    msg.source.assign("GSFIRPQDNCQVRMDLGEBONYAIIUJZTLYMKTKRWXAQBJTTVMUUCXCEIKYUALXHUMHLYKDVWUJTHQGRBXDBATSDQCHRDNSTHOWDOZKGZPZACOVGTLVHTBLJGEILKFYSSXJMPSZEMPBUIRUGIELBDPOEGJEFSPWYSCKMNXRJIPXFBQWWZNPZNZFCQFELDJNNYAC");
    const signed char tmp_msg_0[] = {114, 88, -66, 120, 22, -43, -74, -15, -56, -53, 14, 10, -67, 119, 39, -73, -46, -28, -55, 5, 110, 49, -7, 2, -101, 84, 54, 81, 36, -34, 32, 121, -27, 42};
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
    msg.setTimeStamp(0.7352692990406654);
    msg.setSource(5634U);
    msg.setSourceEntity(174U);
    msg.setDestination(12607U);
    msg.setDestinationEntity(247U);
    msg.source.assign("UUPIGAAZLEBYFHAIJCAMQIMZSNCKRUBQSWIBDVUDYJMNKFUSLOYXBODJGDTIMNPSJNGVFWDAZGQSSIOBINHPAZXTSFKGRENXPHZXYPYBWCWERVOKNWHMHJZNLLBLLOJBMQRXVOBLUVYLTEUZEDHFLHTRXODVGXKAPPEQRMCJVWPMKSRCTOSKCEROEJJYJKWRRCFTBSYEQEHIYGTGPXVWXTAC");
    const signed char tmp_msg_0[] = {57, 82, 35, 6, 68, -3, 65, 37, -85, 12, -100, -71, 18, 29, -13, -19, 72, 20, 64, 45, 98, 112, 109, -118, 12, -83, 113, 57, 77, -111, 118, -15, 106, -95, -34, 106, 91, -86, 96, -13, -95, 123, 55, 6, 32, -104, -7, -23, -48, -67, -53, -128, -2, 33, 98, -36, 70, 22, 19, 95, 2, 56, 95, -11, 121, -38, -37, -116, -44, -128, -26, -103, -99, 36, -14, -40, 11, 59, 107, 0, -57, 112, -15, 46, 99, 32, 60, 37, -32, 26, -128, 73, -113, 35, 38, 33, 8, 118, -89, 114, 43, 52, -100, 47, -50, 6, 115, 39, -65, 7, 49, 74, -22, 91, 21, -83, 2, -29, -75, -39, -107, -66, -89, 92, -98, -67, 45, -69, -26, -66, 64, -59, -24, -50, -37, -48, -83, -127, -84, 23, 55, 99, 78, 0, -125, -25, -39, 2, 86, -34, 59, -114, -18, -112, -13, 14, 104, -113, 52, 120, 64, 100, 10, 63, -67, -114, 124, 19, 91, 97, 81, -44, -38, 111, 91, -127, 55, 12, 86, -16, 4, -43, 41, 121, 80, -75, -12, 62, 96, 82, -54, 35, 5, 38, -103, -18, -127, -17, 77, -34, -53, -11, 76, -85};
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
    msg.setTimeStamp(0.8883841739265728);
    msg.setSource(16630U);
    msg.setSourceEntity(131U);
    msg.setDestination(39748U);
    msg.setDestinationEntity(158U);
    msg.seq = 2342255014U;
    msg.state = 254U;
    msg.error.assign("XNJAHFNBPCAKAMQQOCZCASHIFPPZLISEHZUPROEGTDEXYTDQTPYGNSNLGKWKZHJWCJDTITJREVURCUWJZQNPXALBZVQEMBFYNXSHOQYVZSCLXUXYVLIHPPTDKWYWANVGCQUPQOOBTGENUPCDUKEKZVXYMRIRDSRTJVMDIFWIJFAOGHBLMJGWVYRBNORSV");

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
    msg.setTimeStamp(0.8404698615965346);
    msg.setSource(62470U);
    msg.setSourceEntity(44U);
    msg.setDestination(55544U);
    msg.setDestinationEntity(216U);
    msg.seq = 3458758375U;
    msg.state = 230U;
    msg.error.assign("RGOCKHSNNTCHMYIUYCRHUVCNYTNJUGZRTGTFWMMIDBIFCEXTDIAYLOYYJSXOQIEHZBDNKQLWXJZMIQMKFGXHSAVZJYRJH");

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
    msg.setTimeStamp(0.8508058688189648);
    msg.setSource(31898U);
    msg.setSourceEntity(182U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(235U);
    msg.seq = 1151494904U;
    msg.state = 20U;
    msg.error.assign("WUHWIVWTELPHBBZPAAVNMNXZANQDRFPTRKKJDWZQFVJHNHFDWDHMEEKVCLCOBTROCRJSP");

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
    msg.setTimeStamp(0.7306744707013604);
    msg.setSource(17513U);
    msg.setSourceEntity(119U);
    msg.setDestination(26873U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("WGHBXCMIUCYYFANNJLONRHSKCHUEJKBAFPKIXBMWESEXCFZDWXSTRIPUPBAZCMZOEMOFNLTZYTQOEKDLAO");
    msg.text.assign("QTHRZQOCUHWDHPUCQUKOSIXQHEEVANHZXOQKTJSSGVKVV");

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
    msg.setTimeStamp(0.5987350265260296);
    msg.setSource(10308U);
    msg.setSourceEntity(226U);
    msg.setDestination(59875U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("GHJYBXHADDKNPMIJQIBUNMQSRPHGGZSDQOMUDZWSOVTDLOGAPCJOYIEVYUPBGEXMZVNOOAODQNDEUCRRERSZUTHXSRPFGAKXAHFTSSACJBWAAQYMZFQLZRQHTLFIPTJWPLSHSZWXQEGM");
    msg.text.assign("WNJOUMBYOVHNFWDXHLPBKXRTSCAYESIOZGISTMQLBYVLNSTWHPQTNKFASJJEORSDJMXGVBGGQKCHIVVCQAMCGVYNOPICFXRSFMTWPUBFWRDWACTHEELNJEYIDHKTMAOKPJNDXOGWFHOXNAE");

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
    msg.setTimeStamp(0.4223321875399503);
    msg.setSource(23130U);
    msg.setSourceEntity(185U);
    msg.setDestination(48073U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("ZTJAXJAPDFCARJFYYLBHIJNDLIUDHCSTYCXLMQKKFNWSSIMLUCRAPYVSIMWRMUFBBEOBZVBZWIMLUFXBKFNULEFOXBQSKOSQVGCNRXXZUVETMOVJFAGWECYGEQSIRRZNNYESEZWTBWTUEUTHMRIMDHRHJQJLADSPPDNXEVXONIAVGJJTKVQGRRBGVCZLPHNEKXBGACSPGAGZDQDZUIIOYTKCFWTYOWPLHFYPJMYDQKWWGQPNT");
    msg.text.assign("UEPGFLKLJKGCZHHODQMPXWJGDQXPDZAYAPJAJWCXDCNWCTYMABHSHSYPUTGZICYSVLXITPFOVIKQRRBFCQLUIZUGQZLWWRJLFJGHDWOHNKWMELFGIEQFFHUCZHUYRGLDMSTKQRKEGAUROFQLNOJTAOMEECEVSVERVAYFCRPNNFYMDZMROVBDAWTINSOXPZUSZ");

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
    msg.setTimeStamp(0.8911939234942629);
    msg.setSource(13111U);
    msg.setSourceEntity(16U);
    msg.setDestination(15980U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("TLBMRXOFLKFIPRLBTGCSHNDHEDIBLRHVCMKSTSUMINKIHTSYFYSXZPAYJIOJVNEWFFTATGZNWRLBEKQBVBEEXLKOPUGRCJCQAXZJRBENQRDJFZXXNHDKVLVIYMSXIZWKJRVYGMXPOJEUWPDUJWEEWHMUUORNUFZPCAMGLYUYCSIGJOVTBDBRMWXGIHCWWPSQNOYBWMAZHMVHOUAAGZVCAZFLYYXKALSEPQAVCQJK");
    msg.htime = 0.42398884421887195;
    msg.lat = 0.8713868436303822;
    msg.lon = 0.661081476909736;
    const signed char tmp_msg_0[] = {-93, 115, -30, 56, 113, -77, -121, 44, 72, -79, -73, -52, -29, 3, 54, -36, -8, 108, -123, -84, -61, -49, 24, 24, 25, 17, 104, 21, 74, -85, -40, -16, -35, 51, 53, -33, 26, -89, -116, -19, -86, -93, -22, -122, 123, 69, 3, 36, 96, -41, 99, -117, -73, 24, 63, 80, 3, -98, 54, -110, -122, -28, 41, 73, 121, -120, -10, 30, 23, -2, 102, 54, 73, 55, -86, -79, 25, -91, -101, -27, -25, -104, 18, -24, 70, -50, 88, 6, 86, -104, 96, 8, 37, -34, -123, -18, 73, -5, 20, -46, -86, 26, -29, -6, 125, 75, -36, -10, -96, -25, -111, 106, 94, 103, 29, 83, -16, 102, -48, 43, 5, -123, 106, 61, 120, 1, 85, 58, -65, 103, -28, 28, -52, -112, 1, -125, 65, -76, 58, -91, -121, 58, 52, -82, -75, -74, -39, -100, -84, 111, -32, 23, -72, -12, 58, 42, 61, -74, -57, 12, 64, -88, -7, -7, -93, -82, 72, 67, -42, -30, 51, 39, -120, 32, 67, -116, 3, 75, 20, -26, -113, -72, -28, 109, -7, -38, 72, 105, 90};
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
    msg.setTimeStamp(0.7855006380890356);
    msg.setSource(59763U);
    msg.setSourceEntity(63U);
    msg.setDestination(24444U);
    msg.setDestinationEntity(21U);
    msg.origin.assign("XEHXGABTVMJLYAHIEGDRIMOKMAYZILTYAFBQUYHIJFDOZEPALYSQILACTFEFARYPOQHZHNHDKNFXVMCOWAFRPLVSTMDXTBNNZBJETDYVBIOISRYGBMLKHFWTRQVIJCMDDVWBCDWHCZDWHZWUQRKCWFTQQKIXXBSGQKNRPHQKPJZOSUXUPFNIWGUJKJEZTPYSRGLSVLBCXPMLUCKMEOZCNNNDYVSTKGGEAPJUMGWZJVLNSWRUAGUPVUO");
    msg.htime = 0.5331932815402576;
    msg.lat = 0.7023983025554476;
    msg.lon = 0.9574492528979102;
    const signed char tmp_msg_0[] = {28, -3, 8, 11, 79, -120, 26, 9, -79, 82, -37, -126, -43, 22, 101, -128, 105, 46, -119, 68, 12, 96, -3, -98, -71, -55, 69, 16, 14, -75, 27, -117, -119, 69, -16, 59, -69, 91, -32, 21, 66, -26, -56, 78, 126, 0, -45, 81, -16, -67, 26, 55, -33, -70, 46, 66, 33, 22, 78, -24, 72, -66, 95, 17, 72, 103, 17, 90, -87, 12, 12, 57, -104, 106, 19, -89, 93, 65, -34, -27, 118, -49, 101, 24, 112, -41, 97, 28, -19, 57, -35, -71, 73, -127, 47, 115, -111, 30, 81, 75, 125, 4, -123, -57, 66, -3, 27};
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
    msg.setTimeStamp(0.6006298617776682);
    msg.setSource(3518U);
    msg.setSourceEntity(86U);
    msg.setDestination(38746U);
    msg.setDestinationEntity(203U);
    msg.origin.assign("XDWLQIBTLGCJHNGNHQWCKGILFJKYJLKBSOJMJTQM");
    msg.htime = 0.9669619066847334;
    msg.lat = 0.149742242404326;
    msg.lon = 0.8408551982027422;
    const signed char tmp_msg_0[] = {-102, -101, -9, 103, 87, -101, -118, 116, 62, -48, 87, 117, -26, 63, 38, -86, 64, 60, -44, 70, 89, 126, -20, 69, 49, 65, 108, 7, -86, 17, -65, -49, 65, 68, 72, -3, -124, -101, -114, -110, -86, -110, -122, -62, -82, -117, 1, 60, -103, -31, -122, 58, 73, -55, -22, -78, -17, 28, -97, -118, -11, 13, 106, 111, 12, 93, 75, 34, -101, 12, 69, 44, -19, 10, -93, -128, 2, -39, 33, 109, -26, -9, -12, -20, 70, 122, -46, 9, 64, 62, -15, -35, -81, -10, -42, -112, -80, 99, -2, 105, -11, 35, 90, -109, 122, -78, 110, -106, -82, -128, -37, 22};
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
    msg.setTimeStamp(0.4533775992262101);
    msg.setSource(25230U);
    msg.setSourceEntity(118U);
    msg.setDestination(56191U);
    msg.setDestinationEntity(85U);
    msg.req_id = 3461U;
    msg.ttl = 29244U;
    msg.destination.assign("AOMPGROXXPQPFGYRKKJGZQOHLWSUODAZFSWSFFLKDXAVVKVNLQKCCJMGJNELKYBZJBUHNMBAXDMNGJYZBWXQGIOKNAETQPWHMUCW");
    const signed char tmp_msg_0[] = {17, 109, 47, -127, 78, -64, 60, -87, -79, 13, -103, 60, 75, 16, 122, -17, -125, 44, -48, 53, -38, -120, 55, -63, -25, 91, -87, 94, 125, 101, 43, -101, 60, -88, 33, -41, 57, -8, 75, 38, -81, -23, 24, -86, 70, 89, -77, 94, 104, -84, 109, 41, -94, 75, 117, -75, 79, -110, 109, 51, -104, 86, 107, -121, 66, 122, 121, 126, 3, -50, 71, -76, -93, 119, -86, -62, -21, 120, 26, -109, 49};
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
    msg.setTimeStamp(0.13406990284194775);
    msg.setSource(57755U);
    msg.setSourceEntity(215U);
    msg.setDestination(46542U);
    msg.setDestinationEntity(147U);
    msg.req_id = 2426U;
    msg.ttl = 9894U;
    msg.destination.assign("NEGJGVFPTEALNIFBICPVCJSHDIAOUQUBHPSOVOMPXCSYHRXTBFKQFAVDYJNDQJMQEKUUULLOXFLQZLJXSWDHSIGEDKYKYPGGUYMRZPTEBBYPDMOTSOWZFGFXDTPVXQCQMGNSZTKJPNVAWZRIRZYAVVVQJBHAOOIKLMLEDFRQW");
    const signed char tmp_msg_0[] = {51, 118, -37, 59, 32, -59, 46, 68, -6, 107, -6, -127, -120, -25, -2, -124, 65, 107, 47, 99, 30, 15, -21, 14, -56, -16, -105, 89, -50, 14, -128, -95, 84, 37, 49, -83, -74, 63, 78, 120, 98, 50, 53, -86, 23, 124, 51, 90, 28, 32, -75, 48};
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
    msg.setTimeStamp(0.5065990081761839);
    msg.setSource(36198U);
    msg.setSourceEntity(223U);
    msg.setDestination(27066U);
    msg.setDestinationEntity(183U);
    msg.req_id = 23037U;
    msg.ttl = 47270U;
    msg.destination.assign("VDWCQUWCVHBAPNIJMSVADKUCJYFAOXEKXAFGZUQSVRRIUVRZYW");
    const signed char tmp_msg_0[] = {25, 20, -86, 120, 88, 71, -8, 107, 60, -95, -73, 109, -97, 125, -63, 60, -113, 40, -117, 85, -34, -32, -32, -118, -72, 111, -74, 116, -100, 98, -31, -122, 94, 60, 65, -96, 117, 3, -24, -6, -10, 109, 49, -75, -126, -54, -80, 61, -98, 91, 35, 93, -18, 124, 43, 41, 35, -31, -113, -23, 6, 78, -114, -87, -83, -14, 104, 58, -126, -8, -82, 6, 117, -55, 102, 107, -27, 113, 43, 44, -33, 107, -61, -121, 116, -108, 12, 102, -82, 119, -76, 15, 125, 118, -66, -21, 5, -62, -1, 25, -54, 40, -92, 111, -123, -28, -26, -128, 21, 124, -100, -5, -89, 52, -33, -88, 70, -104, -71, 62, -122, -117, -67, 120, 69, 23, -90, -18, 21, -50, 12, -119, -98, 17};
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
    msg.setTimeStamp(0.3786255408571916);
    msg.setSource(28456U);
    msg.setSourceEntity(4U);
    msg.setDestination(18608U);
    msg.setDestinationEntity(121U);
    msg.req_id = 39140U;
    msg.status = 145U;
    msg.text.assign("VBHTRRZKCNOFMEJYOIHXAADDXNFRRYUGUGAZQYDHNFEBXUZPTHOPZZPBCDTDIEFUSLFKMKXNEDQKZLVPTWUUZZKXSUECMOQJEMULAJLYAUDAPFTCWSCLWJDXFJLVIMQYXGQINHCJHWQQYFIHMGRIBRSTWWYBBLERSNKZJFJUMNGSRKXSJLIAGCTBGMNORCNLKPIKVSKLVOCOIOMQBSWNEAPQYAPWEDHOYMTPSABOVTGEVWWVDZ");

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
    msg.setTimeStamp(0.3920434118060844);
    msg.setSource(54691U);
    msg.setSourceEntity(180U);
    msg.setDestination(1009U);
    msg.setDestinationEntity(206U);
    msg.req_id = 46834U;
    msg.status = 45U;
    msg.text.assign("AGDTMNVZDHFOIZWITYDJEWZNYA");

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
    msg.setTimeStamp(0.28254553376471325);
    msg.setSource(54768U);
    msg.setSourceEntity(231U);
    msg.setDestination(10992U);
    msg.setDestinationEntity(197U);
    msg.req_id = 8150U;
    msg.status = 20U;
    msg.text.assign("FGBGIWYSUMPGIQZKKTLMCTQBUTKEKFMIMCJRBVQHPDWBFGDDATCJJVIAMDEPWNHHTREMAZFOEVTERRQYJNOFKNVPAUJTXAQVXMDZNFCKHRXNRSWEUZIHDVCXVBUJSOSONSXYZIPUPUGNSYKZEAYAFGLNHBBACOEPZNZLNGVOOTIBRJSWWWHQPCWDOXYOZDESBMKDATLXYROKWJFBJSPQMHULRQHLGXKICHADVGQYLRWIXUCZQCMJGL");

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
    msg.setTimeStamp(0.7264897244727301);
    msg.setSource(31886U);
    msg.setSourceEntity(55U);
    msg.setDestination(37715U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("NCSAFJGWIXSOZYGGAOZLHJNFQHNBAMGPTDWFSYLLXLWOBUEVPVZAQTPUBWDDKQTYVPQLMULRTMVICLCKNJZYSTJUKBYCDBEIVQACSFZ");
    msg.links = 4163756181U;

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
    msg.setTimeStamp(0.8659502866796378);
    msg.setSource(33067U);
    msg.setSourceEntity(63U);
    msg.setDestination(59449U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("WABSQLXMSCBNQAVGATMIOAYKBIRFTOWJEGFEJUAZ");
    msg.links = 414145017U;

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
    msg.setTimeStamp(0.3170539036581391);
    msg.setSource(41444U);
    msg.setSourceEntity(145U);
    msg.setDestination(61356U);
    msg.setDestinationEntity(146U);
    msg.group_name.assign("ATIHMMMTPEKBCVIOZQEJDVJQYTEGSTPCXXVLZSHLSRWADTKWVGFDRGKLMKTRWGULWNZJTUXZF");
    msg.links = 1615799057U;

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
    msg.setTimeStamp(0.1883814682475342);
    msg.setSource(58946U);
    msg.setSourceEntity(167U);
    msg.setDestination(32045U);
    msg.setDestinationEntity(47U);
    msg.groupname.assign("RQZMKYNICEDBKIKWPYZDRTYZKMFHOHMCRJVYNUIF");
    msg.action = 215U;
    msg.grouplist.assign("OOPFTLBAFZWAKFXXHWGMLNRMBXQVEEKJBSQXPHANOUGDUIYUGNRZMKTIAKJLLZUSRYIXMYLCMLNVMKHABZFSGTSTT");

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
    msg.setTimeStamp(0.020578397585433894);
    msg.setSource(48970U);
    msg.setSourceEntity(78U);
    msg.setDestination(6964U);
    msg.setDestinationEntity(243U);
    msg.groupname.assign("FFXHTWIZHRRZXEDYSPVEATIOLDKPQRKXFTCJMIDVKEMNZFZUKZTNBMTTERRJCVWSBDJSZEGXBEUPJAOHADVGZHWDLYAOPMNSENBYWRDZSOJMQXFCOUUWLIMYPYQTRGBK");
    msg.action = 141U;
    msg.grouplist.assign("WNIQZMCOCIMELOJYTRKHOIBJPXSARZALTQYHXNFCGKYUWVMFDGIHCEQXTBAQVLYJUDIPXAIIAQBMVRJHEZNILLVKYJPUDDJTJBHUBOIFFYKPWAMNGENXGHSBVBPSZODSMBKLFYUSJQSZWBKSPFFRKSDGPVME");

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
    msg.setTimeStamp(0.19390069216292072);
    msg.setSource(31500U);
    msg.setSourceEntity(25U);
    msg.setDestination(64176U);
    msg.setDestinationEntity(151U);
    msg.groupname.assign("AUVFXASGMITHEZXGSKWELFRDFAOZXSDKDSKIQYICPSUVGOWOIXVJBLOJJELTEECASUNTPVYKAVVWVQXOMRZONXVOFGK");
    msg.action = 128U;
    msg.grouplist.assign("DZBXCEMGRVUHIUEZXMUCHFPKAYPUZRJLUIJJLYAYZUIQOMSHRSGFWKDFXDDGVKFLUXEQYJJWKOQMMRKITNQBXCVLIEYLDLEYTWUGHBZTKQEYONHDHYMFBAJAKTLPOAJNXCTRRWZKNGLSQVVUOHAGINVEWGNTPRJBPCQAAFOYSKCQZJWPSNPXVTPPYCVCIUDSAESBWNWRMHCGGOBHMSLDOEDRXKOBTCWZGJP");

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
    msg.setTimeStamp(0.5833445415263365);
    msg.setSource(55101U);
    msg.setSourceEntity(186U);
    msg.setDestination(62024U);
    msg.setDestinationEntity(228U);
    msg.value = 0.9437362420448382;
    msg.sys_src = 36111U;

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
    msg.setTimeStamp(0.7246649343588301);
    msg.setSource(4566U);
    msg.setSourceEntity(220U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(90U);
    msg.value = 0.08672787057752918;
    msg.sys_src = 51284U;

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
    msg.setTimeStamp(0.5044866639733241);
    msg.setSource(36965U);
    msg.setSourceEntity(234U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(36U);
    msg.value = 0.7797973174878274;
    msg.sys_src = 14511U;

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
    msg.setTimeStamp(0.22705195992540506);
    msg.setSource(45129U);
    msg.setSourceEntity(225U);
    msg.setDestination(40943U);
    msg.setDestinationEntity(191U);
    msg.value = 0.13544336020638692;
    msg.units = 37U;

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
    msg.setTimeStamp(0.8653374347138);
    msg.setSource(10504U);
    msg.setSourceEntity(5U);
    msg.setDestination(25750U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9318893288720633;
    msg.units = 253U;

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
    msg.setTimeStamp(0.776816291915436);
    msg.setSource(59755U);
    msg.setSourceEntity(251U);
    msg.setDestination(5962U);
    msg.setDestinationEntity(21U);
    msg.value = 0.19627333580375927;
    msg.units = 177U;

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
    msg.setTimeStamp(0.9177104745850552);
    msg.setSource(30808U);
    msg.setSourceEntity(67U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(213U);
    msg.base_lat = 0.8335290878686991;
    msg.base_lon = 0.6538955789066002;
    msg.base_time = 0.362232258027977;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 21883U;
    tmp_msg_0.destination = 33575U;
    tmp_msg_0.timeout = 0.5230755922384474;
    IMC::PlanControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 200U;
    tmp_tmp_msg_0_0.plan_id.assign("QIVFVUYAMDNUHYIPOYXMMHQLMMDGKFXDDMQBMUJXQLRSMITOHVKVWCXWCTKXEGUFASGHVZA");
    tmp_tmp_msg_0_0.plan_eta = -469071266;
    tmp_tmp_msg_0_0.plan_progress = 0.7589833888030314;
    tmp_tmp_msg_0_0.man_id.assign("PJAPBASEYIUKIXXVMBFSAFROVGWIPCWHUYQWEEYOMFNBLKFFBVCKNKJZMZLZDOHLADSVFYZQGOGRLSNTKZYWJYNCEXOWMPIZIYAEKJRGOUYGHPXDQTBCPUHECIPTMGWVRCSXSOFBLRKMSVNNDNVKEMIDJHGDVDBESZGQUTXGPWZ");
    tmp_tmp_msg_0_0.man_type = 17956U;
    tmp_tmp_msg_0_0.man_eta = -29257716;
    tmp_tmp_msg_0_0.last_outcome = 159U;
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
    msg.setTimeStamp(0.9906857904759235);
    msg.setSource(19366U);
    msg.setSourceEntity(114U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(11U);
    msg.base_lat = 0.5620629655797681;
    msg.base_lon = 0.45388521336015697;
    msg.base_time = 0.4647454333390697;

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
    msg.setTimeStamp(0.32794778886323617);
    msg.setSource(23447U);
    msg.setSourceEntity(231U);
    msg.setDestination(33998U);
    msg.setDestinationEntity(230U);
    msg.base_lat = 0.20382031334835515;
    msg.base_lon = 0.045403871225069836;
    msg.base_time = 0.9705616707778627;

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
    msg.setTimeStamp(0.6713939379043149);
    msg.setSource(18571U);
    msg.setSourceEntity(2U);
    msg.setDestination(16728U);
    msg.setDestinationEntity(241U);
    msg.base_lat = 0.7625872206516353;
    msg.base_lon = 0.15701241785595788;
    msg.base_time = 0.1750147034445927;
    const signed char tmp_msg_0[] = {-108, -74, -13, -90, -14, -65, -12, -123, -12, -62, 20, -127, -42, 12, -119, -126, 112, 59, 13, 17, 50, -91, -94, -19, -33, -83, 7, 65, 118, -30, -105, -74, -113, 108, 87, 122, -49, -24, -75, -123, -16, -78, 43, 4, -62, 86, 92, 39, 19, 50, 22, -7, -83, -43, -33, -83, 67, 114, -72, -46, 97, -56, 108, 51, 80, 82, 72, 5, -101, 36, 83, 126, -126, -76, -11, -74, 87, -86, -46, 16, -104, 62, 18, -75, -98, 62, 23, 81, -85, 25, 125, 115, 16, 32, 85, -21, -23, -43, 72, 61, 1, -94, -115, 116, 100, 83, -38, -6, 22, -45, 65, -57, 38, 101, -34, 11, 106, -68, -116, 25, 114, -77, 35, -116, 28, -58, 90, 46, 32, -105, 30, -11, -128, 52, -62, 79, -6, -109, 73, -107, 41, -73, -59, 0, 45, 78, 65, 2, -82, -59, 119, -29, -80, -20};
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
    msg.setTimeStamp(0.04082594663796024);
    msg.setSource(17160U);
    msg.setSourceEntity(239U);
    msg.setDestination(58493U);
    msg.setDestinationEntity(159U);
    msg.base_lat = 0.5062147762583631;
    msg.base_lon = 0.4293436106413734;
    msg.base_time = 0.9065042770607518;
    const signed char tmp_msg_0[] = {-105, -85, 126, -93, -75, 82, 95, 43, 7, -23, 30, 89, 84, -94, 83, 64, -3, -58, -47, -85, 116, -120, 83, 25, 29, 71, -72, 84, -37, -31, -78, -62, 10, -5, -101, -66, -109, 75, -82, 83, -94, 63, -9, -6, -26, 120, -116, 27, 40, -123, -74, 12, 91, -25, 83, 78, 35, -14, -46, -127, 96, 74, 4, 100, -126, 121, -14, -35, -28, -110, 70, 18, 79, -15, 11, 66, -7, 19, -109, -35, 88, 14, -93, -68, 50, -52, 27, 23, 45, -55, 68, 0, -73, 110, -112, -72, 115, 65, -23, -15, 28, -34, 16, 5, -45, -40, 126, -82, 92, -126, 40, -67, -40, 85, 14, 72, -76, -41, -16, 84, 25, -78, -54, -10, -65, 5, 46, -113, 57, 77, -50, 77, -116, 124, 35, -72, 99, -4, 1, 69, 124, -34, 105, 104, -93, 80, -83, -115, -52, -29, 21, 37, -109, -55, -11, -88, -93, 48, -68, -116, 2, 114, 65, -117, -77, -48, -23, 91, -46, -103, -121, 62, -75, -28, 73, 107, 123, 86, 20, -31, -82, -52, -27, -118, -89, -81, -100, -82, 27, -15, -127, 41, 59, -85, 86, -53, 71, 125, 116, 40, -121, 78, -121, 76, 97, 40, -56, 98, -31, 18, 110, -29, -66, -81, -83, 80, 74, -108, -105, 20, -28, -102, 45, 14, 19, -128, 38, 50, 110, 45, -25, -81, 114, 44, 52, 16, -112, -43, 75, 20, -91, 75, 100, 99, 53, 89, -83, -90, 96, 107, -109, -24, 110};
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
    msg.setTimeStamp(0.6145978940015088);
    msg.setSource(30676U);
    msg.setSourceEntity(23U);
    msg.setDestination(57021U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.6945289662563138;
    msg.base_lon = 0.536304275212374;
    msg.base_time = 0.453540648025624;
    const signed char tmp_msg_0[] = {-73, 43, 26, -72, -34, 1, 70, 25, 24, -4, -38, -42, 60, -93, 98, 48, 99, 43, -121, -34, -35, 18, -96, -19, 54, 28, -1, -56, 2, 124, 78, 110, 52, 97, -19, 47, -7, -63, 94, 34, 109, -83, -105, 80, 121, 0, -93};
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
    msg.setTimeStamp(0.1546485181910725);
    msg.setSource(38256U);
    msg.setSourceEntity(173U);
    msg.setDestination(11089U);
    msg.setDestinationEntity(219U);
    msg.sys_id = 1137U;
    msg.priority = 77;
    msg.x = 17577;
    msg.y = -8846;
    msg.z = -15144;
    msg.t = -13181;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("QVHXAYPRNKAYYOYOOVLSWXJUAFIZNTPQTOJWIPEHCXDQNRRNTEMPMHWNDYATSKFDPFMTZTCKFUSECRWPZBBAOZYVWMGRXMYIGLESOQB");
    tmp_msg_0.dest_man.assign("XMNDFKEPVAGTYAZPXYORRYLPLLAUXSXOWEMNZMBAGXZEFFJHVJCCKOLJILKYBADSKCLKEJCHTGXBNGHDLD");
    tmp_msg_0.conditions.assign("MWKEKQTPBWXSKYNJSKHIUIXVNCYMZHAQPOVOGCNMVLUOTDJURPDXEFKASA");
    IMC::Temperature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9255473382021844;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7189297703585207);
    msg.setSource(9372U);
    msg.setSourceEntity(119U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(167U);
    msg.sys_id = 15910U;
    msg.priority = -31;
    msg.x = 31056;
    msg.y = -27281;
    msg.z = 29189;
    msg.t = 14689;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.38133507851642834;
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
    msg.setTimeStamp(0.8475826485481857);
    msg.setSource(33434U);
    msg.setSourceEntity(46U);
    msg.setDestination(30424U);
    msg.setDestinationEntity(163U);
    msg.sys_id = 7519U;
    msg.priority = 115;
    msg.x = 8196;
    msg.y = -2935;
    msg.z = 8280;
    msg.t = -13486;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 137U;
    tmp_msg_0.actions.assign("HIBQHFJRNESUPTCNNIVXQOGGAVEPR");
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
    msg.setTimeStamp(0.7329011560156622);
    msg.setSource(43646U);
    msg.setSourceEntity(250U);
    msg.setDestination(45934U);
    msg.setDestinationEntity(190U);
    msg.req_id = 31744U;
    msg.type = 84U;
    msg.max_size = 59921U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6072889294585859;
    tmp_msg_0.base_lon = 0.425676443281197;
    tmp_msg_0.base_time = 0.7750559900796536;
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
    msg.setTimeStamp(0.04835776203456721);
    msg.setSource(50239U);
    msg.setSourceEntity(167U);
    msg.setDestination(53611U);
    msg.setDestinationEntity(243U);
    msg.req_id = 22200U;
    msg.type = 206U;
    msg.max_size = 26792U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.13454727694257917;
    tmp_msg_0.base_lon = 0.7121748307416979;
    tmp_msg_0.base_time = 0.03677634268208074;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 46458U;
    tmp_tmp_msg_0_0.destination = 59616U;
    tmp_tmp_msg_0_0.timeout = 0.9968476857706225;
    IMC::SessionSubscription tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 2769857605U;
    tmp_tmp_tmp_msg_0_0_0.messages.assign("HUHUFKCRROROQAHIBOPBFPEGYTMXBMKZJMMLUKFSPYJIEGWUVLBNVPNLXXMBOAKIDPHSJGWVQNDLNXPEKWTAXJBFCGVDURXJAOJTRSQZINCECEGUNUAFUTTYKOXJ");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.808524205642229);
    msg.setSource(15791U);
    msg.setSourceEntity(13U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(15U);
    msg.req_id = 26640U;
    msg.type = 124U;
    msg.max_size = 52062U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.181322489784437;
    tmp_msg_0.base_lon = 0.3779448416934451;
    tmp_msg_0.base_time = 0.8194782606610667;
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
    msg.setTimeStamp(0.9384664801240904);
    msg.setSource(38500U);
    msg.setSourceEntity(180U);
    msg.setDestination(25692U);
    msg.setDestinationEntity(123U);
    msg.original_source = 27113U;
    msg.destination = 60517U;
    msg.timeout = 0.5250407673976522;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.3528295098262705;
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
    msg.setTimeStamp(0.8001144997755216);
    msg.setSource(7910U);
    msg.setSourceEntity(248U);
    msg.setDestination(21671U);
    msg.setDestinationEntity(132U);
    msg.original_source = 29876U;
    msg.destination = 4964U;
    msg.timeout = 0.5274088768531369;
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("ZTFMEVEPRXCTYMKBDLIQHIBGVZAAOZBLSZRRWKRGFDFRYTN");
    tmp_msg_0.value = 201U;
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
    msg.setTimeStamp(0.5459102698047151);
    msg.setSource(12823U);
    msg.setSourceEntity(38U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(56U);
    msg.original_source = 37842U;
    msg.destination = 51278U;
    msg.timeout = 0.49593515828203716;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 31965;
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
    msg.setTimeStamp(0.1941535679264269);
    msg.setSource(23030U);
    msg.setSourceEntity(42U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(87U);
    msg.type = 200U;
    msg.comm_interface = 32042U;
    msg.model = 22865U;
    msg.list.assign("RTYVUBHWYOUMJNOKJYXDIRJIZUUUSVOQHYHPQIBCENCXNGIQPUMPFCJMNYEXZEGZBKELQOSZMJFLIEQVTCUCDINCHZLPNNLAVJGMYAZEUPOGGBXCXXHOZXKFTVSFGWR");

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
    msg.setTimeStamp(0.62354850818858);
    msg.setSource(6362U);
    msg.setSourceEntity(22U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(218U);
    msg.type = 76U;
    msg.comm_interface = 22428U;
    msg.model = 6064U;
    msg.list.assign("JNZESRHWWTGHMRWFXNZRBYAPPPAJQNDJMGZVHJYITYIVYSOSFIXHLOJPXUEDMNRWXQOTUPFLDGGMFDNHKDVBGYFWECFCZCFQICWLLYBEZBKZLXMKXJADCKKOFXEEWHOITNUTPBSSTXMBQOTBWVHQILNTICYMBHPTDCDANIKVSMKKFUCGAPVFQVLRLIDOXSVPWAZKGZVAENQULYDWPCAEE");

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
    msg.setTimeStamp(0.5828231330880366);
    msg.setSource(30406U);
    msg.setSourceEntity(218U);
    msg.setDestination(14438U);
    msg.setDestinationEntity(224U);
    msg.type = 160U;
    msg.comm_interface = 34871U;
    msg.model = 54819U;
    msg.list.assign("KJOQCCHAKEYUFDNIUIVWCCXMPGLYLPMBWOFVGOSOJWWIYTKHEVDDQVDTBURVWGUXFPWNZKAWSQDKIFZBSLCSOZUEBMZAKSWFYHTCRNRLPDLBMAOLFIGSRTEMXSBYJKFXJTJEGGJORUCINYZYYXVODZZJZRUDQMAHGTQTRTGYUSHRNWNINAXLEHMXRIUKIBQQZXLHFBMNGGVSJHCTTPFEDCJVXKJKABANHNO");

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
    msg.setTimeStamp(0.49030699029931146);
    msg.setSource(44949U);
    msg.setSourceEntity(171U);
    msg.setDestination(20738U);
    msg.setDestinationEntity(188U);
    msg.type = 183U;
    msg.req_id = 4184794167U;
    msg.ttl = 10977U;
    msg.code = 131U;
    msg.destination.assign("XWJUJOBLAVOXBPAEQMPVLOQZXDRDYLEDSNBTGA");
    msg.source.assign("HGIXGTTALETPBAGBOSUZYWFPMEMNDEGSCNTAMAHKPVMKCOCVRZJKCXBNABJBUQDDHGCEFWESVMXMSYPKRHYXLGXTIQWRIKXDDLCXUNQQCESFZEYLOLSBWZDLSGUFQJVYPAIRAYNHDRUKWFIKOOXQPRSLYPQTTUNMANIJFZKUKOJKWZMTPRQBDVJBYTBCAZVARMHZIOIVDXWEEUNHDL");
    msg.acknowledge = 226U;
    msg.status = 16U;
    const signed char tmp_msg_0[] = {112, -8, -31, 89, 62, 115, -50, 27, 83, -21, 37, -8, -56, -69, 39, -52, 23, 8, 119, 87, 59, -35, -102, 113, -124, -43, 48, 88, 113, -32, -63, -54, 27, -90, -53, -59, 41, 112, -107, 2, 64, -44, 114, -10, -103, 48, -2, -119, -96, -109, 73, 53, 60, 55, -9, -116, -66, 90, 53, -88, 78, -6, 80, 111, 110, 106, 1, -96, 63, 1, 50, 28, -8, -64, 30, -47, -41, 29, -64, 40, -92, -79, -46, -126, -71, 18, -28, -55, 70, 22, -112, -123, -66, 76, 66, -13, 57, -11, 24, -46, 38, -46, 22, 54, 60, 8, -51, -53, -43, 23, -6, 119, -77, -88, 52, 0, 49, 43, 117, 24, 59, -8, 117, 49, 80, -97, 95, -109, 55, -104, -67, -35, 53, 11, 89, 3, -84, 97, 77, -104, 42, 72, 14, 58, -96, 112, 34, -109, 104, 72, 39, -11, 36, 122, 80, -8, -85, 36, 63, -41, 118, 1, -11, 51, 32, 116, 87, -128, -93, -6, -127, -41, 18, 21, 112, 83, 119, -39, 125, -48, 33, -82, 83, -69, 121, 36, -101, -12, -5, -29, -34, -32, -126, 94, 49, -5, -119, -12, 81, -99, 116, 42};
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
    msg.setTimeStamp(0.032275811849640235);
    msg.setSource(26695U);
    msg.setSourceEntity(207U);
    msg.setDestination(32940U);
    msg.setDestinationEntity(254U);
    msg.type = 51U;
    msg.req_id = 1510278883U;
    msg.ttl = 63768U;
    msg.code = 181U;
    msg.destination.assign("FDQZNZQADEBWYOKFKGMBNXGOSEVXWKTTJQNTPP");
    msg.source.assign("TXAAIYZQXJMIECEVPSIGBZAUHVPEKNYNVOBDAFGLMYSLQPUNWECRBIYJOKVAGMZVFHKVZWARNSXEFDIYGGPAUQRSTLBCTFJEBOHOYFRJOWOYYDDXFXDHZUJTWDWPBCGMTHVWOTZNIMXMRMBEPJLGWGDHRWIUCUQMBFQXBFCGXADORPVBMYSIQQZDKWASUNLJTINS");
    msg.acknowledge = 245U;
    msg.status = 223U;
    const signed char tmp_msg_0[] = {126, -65, 45, -127, 65, -65, 92, 7, -79, -11, 86, 119, 117, 29, -112, 32, -46, 94, 18, -39, -106, -70, 47, -82, 57, 93, -33, 16, 10, 31, 87, -54, 15, -95, 18, 32, -109, 92, 74, 3, 80, 80, -21, -103, 35, -54, 81, 79, 112, -97, 90, 4, 32, 66, -47, -72, -79, 17, 83, -27, -61, 85, -38, 118, -53, 18, 0, 124, 57, 12, -113, -51, 30, -12, 0, -91, -39, -98, -48, 72, 83, -78, -10, 91, -110, 31, 63, 4, 98, -47, -9, -52, -21, 102, -16, -16, 86, 91, 6, -35, 75, 48, 15, 85, -36, 26, -89, 1, 119, -18, -85, -80, -51, -101, 120, 30, -74, -47, -2, -80, 53, -45, -37, -124, 48, 58, -5, -14, 104, 67, -90, -118, 16, 54, 61, -9, 112, 82, 83, -19, 99, -13, 61, 76, 84, 97, 123, 46, -31, -123, 23, -57, -65, -82, 109, -106, -110, -78, 65, 68, -113, 18, -24, 63, 69, 38, -66, 114, -109, 120, 43, 35, 88, -7, -54, -45, 82, -90, -98, -34, 121, 84, -49, -6, 94, -55, -73, 0, 114, -91, 32, -45, -101, 71, -118, 114, -51, 81, 45, 39, -51, -100, -24, -110, 32, 51, 86, -82, -26, 97, -17, -103, 94, -128, -45, -37, 123, 11, 96, -44, 33, 33, 65, 92, -45, 11, -43, -85, 119, -85, 119, -47, 3, -87, 119, -45, -126, 96, 68, 29, 16, -84, -2, 32, -103, 12, 105, 89, 30};
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
    msg.setTimeStamp(0.1439759967550942);
    msg.setSource(44064U);
    msg.setSourceEntity(44U);
    msg.setDestination(50643U);
    msg.setDestinationEntity(209U);
    msg.type = 248U;
    msg.req_id = 3471986872U;
    msg.ttl = 55434U;
    msg.code = 220U;
    msg.destination.assign("GNBXGKKZBEFACHAICDIYGUVGENFYPUINRHTPOYHVCRNHRBMPWWYVYKYAKKUNWOQBPOEATMTVHTVAUXHPLSJEIOIKJQSLDFUDVODLLXERJPHRTLTFZJMODGSDLDMAYCHMTZWYSJTMUMMSQFWWSZLQSEAJEWTZQQKKOUNQCIIEZGXYVZRXPXUGURJRBPCCSFJWKGYRIKAINLEUF");
    msg.source.assign("XIRRCLTIKQZIIZKVTARAWCGHBXXLCHPBJBS");
    msg.acknowledge = 227U;
    msg.status = 152U;
    const signed char tmp_msg_0[] = {-99, -22, 35, 21, -43, 66, -103, 21, 63, -40, 5, -78, -22, 79, 107, -123, 18, 38, -38, 63, 119, 30, -70, -44, 96, -26, 10, 99, -115, 42, -64, 108, -126, 74, -56, 39, 28, 65, -61, -12, 2, 55, 112, -62, 49, 91, 94, 37, 86, -88, 49, 87, -7, -121, -116, 21, -97, 85, 22, 92, -56, 116, 99, -119, -6, -83, 30, 80, -86, -54, 103, -48, -14, 68, 29, 13, 75, 11, -69, -56, -30, 68, 64, -72, -98, 54, -98, 36, -17, 14, 47, -22, 112, 77, -48, -90, 14, -30, -34, -127, -79, 99, -38, 66, -23, -42, 67, 17, -127, 59, -76, -2, -127, -77, -42, 22, -125, -44, 86, 3, 102, 88, 36, -29, -128, 32, 35, -7, 13, 62, -30, 18, -39, 54, 20, -109, -115, 103, -16, 104, 108, -119, 56, -84, 103, -17, -17, 46, -45, -25, -122, -29, 14, -72, 7, -47, -8, 0, 5, -117, -113, -109, -64, -111, -1, -30, -54, 47, 31, 116, -126, 125, -34, 25, -91, -107, -125, -85, -91, 109, -127, 47, -57, -128, -120, 48, -53, 91, -114, 20, 88, -18, 10, -41, 52, 16, 18, -56, 48, 63, 66, -115, -107, -128, -126, 109, -93, -31};
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
    msg.setTimeStamp(0.025197959624085442);
    msg.setSource(22645U);
    msg.setSourceEntity(141U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(247U);
    msg.id = 96U;
    msg.range = 0.5998655278683944;

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
    msg.setTimeStamp(0.025914563131826385);
    msg.setSource(57693U);
    msg.setSourceEntity(189U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(38U);
    msg.id = 156U;
    msg.range = 0.6754087243412191;

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
    msg.setTimeStamp(0.18744662202519935);
    msg.setSource(785U);
    msg.setSourceEntity(200U);
    msg.setDestination(45317U);
    msg.setDestinationEntity(251U);
    msg.id = 64U;
    msg.range = 0.9882196140541598;

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
    msg.setTimeStamp(0.23657304895093512);
    msg.setSource(50899U);
    msg.setSourceEntity(178U);
    msg.setDestination(22649U);
    msg.setDestinationEntity(157U);
    msg.beacon.assign("SVIBPKIIUZ");
    msg.lat = 0.8803615813560626;
    msg.lon = 0.9651351811530416;
    msg.depth = 0.5941401408320135;
    msg.query_channel = 12U;
    msg.reply_channel = 89U;
    msg.transponder_delay = 192U;

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
    msg.setTimeStamp(0.3237421307632634);
    msg.setSource(62710U);
    msg.setSourceEntity(46U);
    msg.setDestination(24322U);
    msg.setDestinationEntity(14U);
    msg.beacon.assign("IWPPXCAMGWKLGNVINHIZJXQSAMDEDMKBMXIOZEVHBGDYPSTQVZYUGANKHTISHQVFRCDNFOECVKNNSHTMEZLWKBOSPFARPLXBUODWDEHZXLOXGRTQNWUWMVTFOHJASHIBKILQPGJMTSFEDHJUP");
    msg.lat = 0.938107524825453;
    msg.lon = 0.6476861031257192;
    msg.depth = 0.010598125136974446;
    msg.query_channel = 136U;
    msg.reply_channel = 244U;
    msg.transponder_delay = 214U;

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
    msg.setTimeStamp(0.9556552290605947);
    msg.setSource(6717U);
    msg.setSourceEntity(190U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(242U);
    msg.beacon.assign("MKAOKDFNRDLJGRZYCSERTXCDOECZCZBABTSHIUOQVKOUXSJ");
    msg.lat = 0.44592349104717754;
    msg.lon = 0.41668803837529267;
    msg.depth = 0.5280923789636955;
    msg.query_channel = 212U;
    msg.reply_channel = 96U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.4283500069105748);
    msg.setSource(39582U);
    msg.setSourceEntity(95U);
    msg.setDestination(18721U);
    msg.setDestinationEntity(217U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.4745233018571302);
    msg.setSource(23425U);
    msg.setSourceEntity(40U);
    msg.setDestination(5166U);
    msg.setDestinationEntity(192U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.07128740702251202);
    msg.setSource(27591U);
    msg.setSourceEntity(196U);
    msg.setDestination(22678U);
    msg.setDestinationEntity(26U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.2220302214345411);
    msg.setSource(29263U);
    msg.setSourceEntity(78U);
    msg.setDestination(59742U);
    msg.setDestinationEntity(187U);
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("GVCUITFDGKRLICPBTEGDHALJXBQBEZWHNTVOZYTASQAFFBFCMNNNVIWTXOQWHDKLUCTPJTMYALKVORDRJJS");
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
    msg.setTimeStamp(0.935630369415755);
    msg.setSource(1127U);
    msg.setSourceEntity(135U);
    msg.setDestination(48584U);
    msg.setDestinationEntity(194U);
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.27166426341055483;
    tmp_msg_0.beam_height = 0.13090894705150846;
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
    msg.setTimeStamp(0.41718799028273135);
    msg.setSource(29826U);
    msg.setSourceEntity(172U);
    msg.setDestination(34275U);
    msg.setDestinationEntity(42U);
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 76U;
    tmp_msg_0.mnames.assign("NOKWGJRMXHLAJQWYSGPUGWCSDSFDQEBSTIMXAVBVEHSWAYUBULYKIYOZPLCNLEKMLWGBDWHBSPRZTHKQTCSRKATJXCACNFDJDDVQKCTMSOHQFNRNMNNFOVGZXLJVJADIHLBZUDGE");
    tmp_msg_0.ecount = 102U;
    tmp_msg_0.enames.assign("SEKOAKRDBSNNQOWDOHKATUYOOHVIVWCOKZKNEGXCAQODRLSFAIRXVHUMGXCBTZZMKASDMGVICNYDGEZZHIDOHJPCDEVGTMZTKOXHPPITTJTTKUBJWPGAJNNXFELFFYPELEC");
    tmp_msg_0.ccount = 39U;
    tmp_msg_0.cnames.assign("USEWZKKHWUKIABJGDQVNWBJXZDDCKYZHOFMUT");
    tmp_msg_0.last_error.assign("GBTMDHFKCKJOAQGKXXPNOJDUMHLQMSSMVCFLTQDOYOPCTBHEMUYJSBJWNHHXIZENTGUJYWBLLOBSFSHABRAPCLCKUNNJEZEPZYXZAGFMLBTANH");
    tmp_msg_0.last_error_time = 0.48130287654403303;
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
    msg.setTimeStamp(0.4671739917172185);
    msg.setSource(45722U);
    msg.setSourceEntity(1U);
    msg.setDestination(55479U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.8652390927690056;
    msg.lon = 0.9449156096361727;
    msg.depth = 0.053566194765437;
    msg.sentence.assign("VCDIGPLTTMKRZUFGIUBKOPBSZLQDYWBHBQPKCUQHMYRKYXFQDJUQSHVWUFJAYRLNQTOJVIAYPJSOMEMVNIBXMJFDLTGCJPPFPCIDNXAXXLZRDLVFNMVNRSEIKKYIERYGOPFKHHVWXFSJUOHOHIZQ");
    msg.txtime = 0.5085723815688917;
    msg.modem_type.assign("FWRVTJTCVISUBLHENHQMXZJIVPINOJQITTBBLUEFYDUINAGZIQUAPKCATXRMFLHGMIGEGDGKPJODMQAZFJIRQHZSWATHASQYRVKNT");
    msg.sys_src.assign("FCKOTUCLQJYKIUDWCKBQRLNPFSFZDUIRODNJZTHIOBTKSHHVMDJQVEKFFXBVBNQLUDGCIXUNZEEXKABMXIAXSWEQOINLSAJBGALGEBPUSTJKTSJBGAIEQWYHMEXPWOWVMVZQSGNHNRBRYBGMDZTWLZAVYCRMUXPJDVLP");
    msg.seq = 11250U;
    msg.sys_dst.assign("MKPUIQXXTERPDUDYSAVCQFCBOXIFEYSEKYZFNQLCVDKEZOWPBXMDCZJOOLVIVPXUBJGMXUVTIDUXLDIAMBXJRZNUZLKJTMKECZAZHPTUNKNGFVJRHYNVACRHBECIVLRZENMUUAPGHLPLRJTBTBSEJROOYLHANCMCHYWGSQEDWOGQAOYWOQFBAKS");
    msg.flags = 99U;
    const signed char tmp_msg_0[] = {-62, 5, 14, 11, -125, 100, -14, 41, 21, 10, 43, 43, 31, -124, -80, 14, 104, 117, 51, -84, -116, -120, -109, 40, -67, -66, -3, -80, 7, 7, 92, -6, 49, -7, 92, -24, -101, 49, -13, -53, 13, 58, -33, 101, 104, -98, -24, -63, 102, 114, -124, -2, -47, -27, 58, -21, -120, 126, -20, 57, -110, 98, 121, -98, 71, 100, -16, 90, 111, -92, 39, -87, -70, -114, -9, -112, -17, -112, 4, -13, 115, -92, 46, -52, -73, -30, 88, -85, 33, -74, -73, 9, -74, -33, 47, 26, 84, 119, -75, -109, -122, 70, 9, -3, 94, -116, 101, 85, -107, 101, 70, 87, 12, 56, 85, 108, -109, 85, -115, -120, 78, -118, -100, 101, -1, -4, -124, 36, -82, -85, 8, 36, 81, 32, 124, 58, 99, -128};
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
    msg.setTimeStamp(0.7184778569939018);
    msg.setSource(6288U);
    msg.setSourceEntity(95U);
    msg.setDestination(27827U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.48115892251271;
    msg.lon = 0.3934484798112188;
    msg.depth = 0.9461477355000352;
    msg.sentence.assign("XFENIJRAGAKOERSKDMJDTSEJMMXELLFZEOVKUVYJROIFIVTWWSUKLRYWFUBXVTCJRHTVBZPRZPBLUHUMNYDQZBPOGJCWKHQS");
    msg.txtime = 0.677788542646713;
    msg.modem_type.assign("NDAJIHLJXVTKTPTCNWVZJE");
    msg.sys_src.assign("OIJXEHEDWWDRVORZEBRTRNFCYIMNPUJCJNILRBMSLUWPWZVRAUYBDXFCQMHVIGLHJXCYDHGFMETBNMIKBPSSDKMHPIKVHETDQAOUNYBKSCVQIEZXGREPVHCXJPHQKRVJFNOTDJHXKAZNYFETAGGFVKPJJCFWZYSSSCXZWUXOIMZPDKDVMAFLLLDTLYWOOSPNBAW");
    msg.seq = 6116U;
    msg.sys_dst.assign("TCKSJDQORYKBGWHBPVDDWOEIRMCPNNGQHMJRJGFMVJEOCBKAWYGYNZBXMESULQRMKJHTKXVBAVGQYRFFKIUOFKVKZCNTVYHUZQXUHJHEQRQXEXGZMAIVLDYILUUZPSHCEABDPELRLSSSWDOJ");
    msg.flags = 87U;
    const signed char tmp_msg_0[] = {-45, 20, -98, -27, 92, 91, -86, -57, 104, 108, -8, -81, 52, 88, 90, -106, -73, -115, -100, -73, -82, 80, -104, 25, -74, 89, 61, 45, -16, 57, 72, -87, 124, -16, 121, 13, 118, -52, -30, 89, 10, 61, 102, -30, -113, -34, 118, -34, 2, -101, 114, -86, 121, 123, 24, -98, -97, -35, 93, -115, -98, 24, 90, 18, -128, 40, 51, 102, -105, -54, -64, -14, 79, -38, 115, 8, 73, -106, 51, -50, 18, 93, 108, 51, -84, -118, -37, 77, 68, 89, 122, -16, -42, -127, 60, -127, 118, -128, -100, 69, -41, -59, -119, -91, 80, 29, -85, 54, 83, -105, -121, 15, 40, -120, 116, 89, -77, 49, -89, 104, -90, -37, 98, 77, -72, -120, -46, 79, -27, -123, -79, 1, 58, 16, 106, 17, 50, -90, 12, 36, 49, -25, -5, -104, -78, 54, -8, -70, 108, -104, -11, -115, -91, -66, 83, -81, 18, 73, -23, 111, -51, -53, 112, -99, 75, 27, 96, -35, 33, -51, 60, -22, 22, -93, 55, 111, 85, 125, -34, -127, 15, 45, -42, -39, -2, -41, 4, -88, 82, 34, 52, 82, -55, -17, 117, 102, -112, -122, -122, -113, -107, -63, 29, 24, -95, -11, 77, -116, -97, 1, -87, -75, -81, -16, -80, -100, -45, 94, -41, 106, -98, 97, 48, -29, -9, -54, 67};
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
    msg.setTimeStamp(0.32384535857770536);
    msg.setSource(12444U);
    msg.setSourceEntity(101U);
    msg.setDestination(12221U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.5846739494577289;
    msg.lon = 0.9533039349676463;
    msg.depth = 0.8367564781070027;
    msg.sentence.assign("CLEZCTEMHV");
    msg.txtime = 0.07774170032923011;
    msg.modem_type.assign("LWGZRPELCXOACMMQWUQOWXKKUTCKQORAVJSFHJZIKTDJODSSGYXTZYFWQCVGDTXEYEDLCHVNQSXZBPIKHFOYOFWUHCDYSPESQJHKXKRBRWTHFBQVHMDMJVZZLUMHGEISAGGLZCNBUNIFMENTHSUBTDQYJJTPYRNPNUGBMNNGPJLKILYSOOCFZEPLUREKLOIN");
    msg.sys_src.assign("ZMBEUSPIFSGWMRQOJYICLARIFBDPKYWZEECKVIGRHTQWDRRBSLIAWRUSXFUYNAZCTCORQVKNPVEHQCISBXYVJSQBZBMEUCOZOTDACDTPJZGTZNIFAHCYLAXCANOSIKHAPGOGLENGZNKVQCETWESSXU");
    msg.seq = 49533U;
    msg.sys_dst.assign("EEUJRRUVHLPNWXKHUYCQASSBWPRDJEIPTXPYGGBPQOHTTQMMHYZNEECVRZAHLKXMBLVAYBCTZYDPFZWVZEIWWVPQNSHNUBFL");
    msg.flags = 86U;
    const signed char tmp_msg_0[] = {88, 111, 44, -122, -77, -8, 90, 74, 1, -126, 62, 69, -10, 57, -68, 97, -128, -50, 113, -88, -11, -32, -56, -14, 53, -22, 48, 105, -64, 50, -27, -27, 36, -128, -123, 19, 51, 91, 20, 64, -1, -21, 109, 98, -117, -75, 119, -16, -110, -63, 115, 54, -109, -125, -3, 18, -39, 47, 28, 30, -82, 55, 83, -50};
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
    msg.setTimeStamp(0.4230657135756879);
    msg.setSource(29257U);
    msg.setSourceEntity(48U);
    msg.setDestination(29755U);
    msg.setDestinationEntity(78U);
    msg.op = 114U;
    msg.system.assign("PMHWUTEHQMSGDNMPUSTKORNLSZABKALALBEA");
    msg.range = 0.4759065532048823;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("NVYQQOVOBDDJWVCWNNUJTIBA");
    tmp_msg_0.action = 71U;
    tmp_msg_0.grouplist.assign("RSFRGYMMIZXZCHFNDLZXZXEUTAFWBKVTQTGMTSQWFKJVWHHJXNVEREJCSYPQTSYRPRHMTUFLROLKEUPYKWPENNEXOTPSGVIYYSIKBNCGMADWHDKKLVUNHQDUPYAUJIGMDBBIOWZVCFAAVDNSSXAMPGLVAJFKZZQBTCVZLMGCEJORFBIDSFORFBEJTCCLPUPRBQXWAQCOV");
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
    msg.setTimeStamp(0.6412894627080772);
    msg.setSource(24561U);
    msg.setSourceEntity(37U);
    msg.setDestination(7204U);
    msg.setDestinationEntity(248U);
    msg.op = 233U;
    msg.system.assign("XQOKCHGCMLSUUETELRCJNTVVGVBAGZFFVKTIMVGGONDUFLKDMAVEAXWFWJQJEUVTJUIRHCQQZSISZTKWRYI");
    msg.range = 0.4202355562348947;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1869001228U;
    tmp_msg_0.start_lat = 0.02673987252820742;
    tmp_msg_0.start_lon = 0.10619735335069436;
    tmp_msg_0.start_z = 0.9730690211181104;
    tmp_msg_0.start_z_units = 166U;
    tmp_msg_0.end_lat = 0.23902812566343212;
    tmp_msg_0.end_lon = 0.7603039537598479;
    tmp_msg_0.end_z = 0.9248145205779429;
    tmp_msg_0.end_z_units = 96U;
    tmp_msg_0.speed = 0.830516369366276;
    tmp_msg_0.speed_units = 55U;
    tmp_msg_0.lradius = 0.9704305454126427;
    tmp_msg_0.flags = 86U;
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
    msg.setTimeStamp(0.8644822657113534);
    msg.setSource(51831U);
    msg.setSourceEntity(238U);
    msg.setDestination(43895U);
    msg.setDestinationEntity(29U);
    msg.op = 93U;
    msg.system.assign("FHJNUSGMILXRAUHNSEGSHLEIHQIBQNKESUXPNBCTQPQRYKDXRROZDSEUVHPXFOKYGOVWFATQPILFSWPNNKZPWOMIXBLSWIYGVDABCUZROIYAAXFFWIOTKZZQHMTWIDTZXAVAVZAKECGHQJUYLEZOEBURVWVMBTJRCMDRFLZODQCHYIDJKVTGRFJDNYSPMFUUNPBLLWTNSDEJKHYNTGCQPHYCAFESJOBVPJWVKWZOJBKGMLMTBCX");
    msg.range = 0.750423544589739;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.7774611376249784;
    tmp_msg_0.lon = 0.12978090330543413;
    tmp_msg_0.depth = 1U;
    tmp_msg_0.speed = 0.3391259754050743;
    tmp_msg_0.psi = 0.02411122746815275;
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
    msg.setTimeStamp(0.2218970637273796);
    msg.setSource(40774U);
    msg.setSourceEntity(83U);
    msg.setDestination(50764U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.7069616287792636);
    msg.setSource(37178U);
    msg.setSourceEntity(101U);
    msg.setDestination(30121U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.6557621058585733);
    msg.setSource(32604U);
    msg.setSourceEntity(112U);
    msg.setDestination(50577U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.22296640754829677);
    msg.setSource(34256U);
    msg.setSourceEntity(229U);
    msg.setDestination(35143U);
    msg.setDestinationEntity(19U);
    msg.list.assign("BXGEXQIMQSRVXKFWMFYGLSQATVWNJRUTESFDQANKNCRYBUFEJQQDQFSNYOIYHVJJEXUNECVCZYPMMAAACBVLMPDPKX");

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
    msg.setTimeStamp(0.7653035067434303);
    msg.setSource(55470U);
    msg.setSourceEntity(6U);
    msg.setDestination(15U);
    msg.setDestinationEntity(151U);
    msg.list.assign("OPNSUZALDAZJAHYRUEWEIMZFVJ");

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
    msg.setTimeStamp(0.3316177343686305);
    msg.setSource(50797U);
    msg.setSourceEntity(243U);
    msg.setDestination(41470U);
    msg.setDestinationEntity(35U);
    msg.list.assign("JWSLLRLWHWAWSIKYJMFAISKHAROPSVXGVWEZLSTGXSJYFDPVXXFNMYQKDINCHVMDLOMJYRUSEZFGEBPZROZJHZFULPXBZAPJQMGFCPHTQHOPGKLIJOXOOWEFTVGBHUDHKNFUSHTQEAQQXJBEYMUWXJICRLRYNWN");

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
    msg.setTimeStamp(0.9160162997142003);
    msg.setSource(49964U);
    msg.setSourceEntity(40U);
    msg.setDestination(64326U);
    msg.setDestinationEntity(246U);
    msg.peer.assign("VQORTKVVYMLWZTTDNJMLNPHGYLXZNEJDQUKKFFCKRWBIDWKWWJRPKAQLCNZFEAEDBZPXSCTGNNXYOVUFOWFGABUPVICTOVQCYETPBFUIQUVRGOFYZSBGUXRHWFIKQAWRFSNGNC");
    msg.rssi = 0.1381062499787511;
    msg.integrity = 50538U;

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
    msg.setTimeStamp(0.26427652955318726);
    msg.setSource(34013U);
    msg.setSourceEntity(180U);
    msg.setDestination(48231U);
    msg.setDestinationEntity(254U);
    msg.peer.assign("XVYKPVBQVLSPGFXUPFYBQYIGMUUJYGWKHQAYKSPPTWKZB");
    msg.rssi = 0.0383313747890861;
    msg.integrity = 61673U;

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
    msg.setTimeStamp(0.9585813397107571);
    msg.setSource(19734U);
    msg.setSourceEntity(30U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(154U);
    msg.peer.assign("SOAYBFVYVZQASKMGLNLYEDRQENQYWZYDPYLQAIJHDLBROORENECGJEHFMALAWRHUJXLRXWBUKPKHVPEXFCWURZXIBCTZKYWHKNZNDYXNHKORJDFOWLXOSTTCTBODXVAQQIJJFVPZMWMPMSBZAWFDHIKFRZGXYJKSBNUXMNNGAETHCKJIZUPCOCNIUMTESGUJGVEPUPKOQIOHSPTWMWBITGDVXTVJLQFGIUD");
    msg.rssi = 0.20583095595414802;
    msg.integrity = 48541U;

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
    msg.setTimeStamp(0.13890002310266403);
    msg.setSource(48134U);
    msg.setSourceEntity(187U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(8U);
    msg.req_id = 30539U;
    msg.destination.assign("VOAVCBQHPFZQMSEHVQYYENPIZYDJFGCILYJNFYBPOWRDHRPGLUQNWHMLEOZBZXVDMWPWCKGITZOFUKZKODRRQUNDTGLOLXQNXYSVGGPKGQTBMBXJPTLCVIHEIMCXNDGTIWTKRPYWSRKXCDJDXTSUKRBBPLUMNSWQECHVVI");
    msg.timeout = 0.14209339871441262;
    msg.range = 0.8108954113374861;
    msg.type = 125U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 28U;
    tmp_msg_0.longain = 0.018990084236443217;
    tmp_msg_0.latgain = 0.2014644472963043;
    tmp_msg_0.bondthick = 1115276895U;
    tmp_msg_0.leadgain = 0.8964652568022026;
    tmp_msg_0.deconflgain = 0.7570963522168065;
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
    msg.setTimeStamp(0.6283336119241373);
    msg.setSource(45877U);
    msg.setSourceEntity(96U);
    msg.setDestination(41033U);
    msg.setDestinationEntity(59U);
    msg.req_id = 13777U;
    msg.destination.assign("MTDQIERVZPNCLJDLYENIMLIRRAICPEVBPGLEYKRVBYPTUXYJGSFTLCMGUAERJZFSJUXQFZQDMLTSKZVXXKMOMTYWAAIJKRAHFHLGXOCMBINFZNSSDBBDROGCWIVBOSKYXQUUGVVHSKPHKAHZOZJOZHDGTMNUHJNDQXPWLPPRSUAWVGEEWMHK");
    msg.timeout = 0.8197607772299751;
    msg.range = 0.7757038995130742;
    msg.type = 148U;
    IMC::FTPTransmissionStatus tmp_msg_0;
    tmp_msg_0.id = 22682349U;
    tmp_msg_0.status = 66U;
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
    msg.setTimeStamp(0.19240734423133066);
    msg.setSource(33662U);
    msg.setSourceEntity(157U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(85U);
    msg.req_id = 20180U;
    msg.destination.assign("YRQLLRWGEWTLOORASIYJKPWPMABHWMGGGFCNSMFJTBKGRLJQKDDXZEDDKVLNJWCATGQPSABRFKRXYILWPRUIPNSFKEHZVHXFYNSUNESDIMYNCTXXNEASAOIHMJAUDQZNZJXXBIHIGFNZDRUFUQQWIGRZEKFOGWSZFMOIETCWTMECZJVQPYHPVLPVBXEBJVDULIHHOYOAUSANLVYOXMKFCELTOMDP");
    msg.timeout = 0.5460057731835486;
    msg.range = 0.5205530037524784;
    msg.type = 154U;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.9109536007644655;
    tmp_msg_0.dist_min_abs = 0.9636119822447982;
    tmp_msg_0.dist_min_mean = 0.20808239320648947;
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
    msg.setTimeStamp(0.4018375763259384);
    msg.setSource(11812U);
    msg.setSourceEntity(42U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(7U);
    msg.req_id = 22867U;
    msg.type = 242U;
    msg.status = 8U;
    msg.info.assign("PEADYLWCJUOIOWNNSWYRPBYMYPOAGVVKRHNGEIWZNJLOPSPLQFGTQRVDKKPECXNDXEDQGCOIHEYTIJUQRZHTCQNBARXDUZLKBSSRTLOLTRICFMNGLFKKBMLIVQRKWNDBBRCIOJOAHANWMSMQAXLTJZKXVXBSIXUFGVVYZVUWETGJMZAXCMHNUGPFJDWMFUKAUHAIZBQQJTVVRSUCZWOCEGEL");
    msg.range = 0.4361263601923323;

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
    msg.setTimeStamp(0.25252706951798476);
    msg.setSource(64030U);
    msg.setSourceEntity(201U);
    msg.setDestination(2210U);
    msg.setDestinationEntity(204U);
    msg.req_id = 2035U;
    msg.type = 183U;
    msg.status = 252U;
    msg.info.assign("JPVIRCNKUBNDWDCNMWTSGHAYLZPGVNLHWOFCLJKQBWVPEFWDGUHG");
    msg.range = 0.1838013865464967;

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
    msg.setTimeStamp(0.9706271134338195);
    msg.setSource(38259U);
    msg.setSourceEntity(79U);
    msg.setDestination(12130U);
    msg.setDestinationEntity(120U);
    msg.req_id = 51576U;
    msg.type = 70U;
    msg.status = 125U;
    msg.info.assign("HENKIACSNHOAXZNQSFTFACYQMEZRFUWWLRPDSZGOCHOHRGDLBOAUXWJGEAEMTGTHTLCNRHIJYQNJGMTQQXGFUUUOEXFDITSPMNUYNLUSMJEDZZXVTEVIMKAHD");
    msg.range = 0.5706417490741246;

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
    msg.setTimeStamp(0.8341050437669207);
    msg.setSource(60053U);
    msg.setSourceEntity(84U);
    msg.setDestination(52972U);
    msg.setDestinationEntity(21U);
    msg.system.assign("WRKSUGSVQJSOTCGUFHZQVCMMODQSTDMROSVNPGHMYACDGUBJOFCXHXZNVIRNXLFBXQOKKOTTPTHIWJKQPWEJMWPCFDGUZBVFIIXZIMTUQQS");
    msg.op = 35U;

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
    msg.setTimeStamp(0.9297571425371124);
    msg.setSource(9826U);
    msg.setSourceEntity(43U);
    msg.setDestination(45387U);
    msg.setDestinationEntity(96U);
    msg.system.assign("XWKBXVEYZKSTCVVXZQYWQGMEHAVINSGSLCMYDRKONYJXUGFPHCRQDAZXZ");
    msg.op = 210U;

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
    msg.setTimeStamp(0.4990962507256289);
    msg.setSource(49167U);
    msg.setSourceEntity(23U);
    msg.setDestination(31044U);
    msg.setDestinationEntity(5U);
    msg.system.assign("VHCHXMSRDCMCVMECZZDPYRJPBLRDLZITZMVJKHMGNUWPGSIDJXBOSXKBINAFCTCOWXNFFQJLKFPDWNOXUYUR");
    msg.op = 21U;

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
    msg.setTimeStamp(0.4475533560462768);
    msg.setSource(40436U);
    msg.setSourceEntity(5U);
    msg.setDestination(36704U);
    msg.setDestinationEntity(207U);
    msg.value = -3443;

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
    msg.setTimeStamp(0.2645713681808466);
    msg.setSource(57605U);
    msg.setSourceEntity(150U);
    msg.setDestination(53295U);
    msg.setDestinationEntity(9U);
    msg.value = 10854;

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
    msg.setTimeStamp(0.7328592154876767);
    msg.setSource(21092U);
    msg.setSourceEntity(38U);
    msg.setDestination(54244U);
    msg.setDestinationEntity(54U);
    msg.value = 28745;

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
    msg.setTimeStamp(0.8861876052462608);
    msg.setSource(22829U);
    msg.setSourceEntity(74U);
    msg.setDestination(17157U);
    msg.setDestinationEntity(176U);
    msg.value = 0.04179480996999174;

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
    msg.setTimeStamp(0.41333385694871605);
    msg.setSource(42491U);
    msg.setSourceEntity(159U);
    msg.setDestination(40440U);
    msg.setDestinationEntity(162U);
    msg.value = 0.40154066616979556;

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
    msg.setTimeStamp(0.36696469975711077);
    msg.setSource(64244U);
    msg.setSourceEntity(67U);
    msg.setDestination(55696U);
    msg.setDestinationEntity(41U);
    msg.value = 0.38417468051968173;

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
    msg.setTimeStamp(0.7794084006485767);
    msg.setSource(5271U);
    msg.setSourceEntity(189U);
    msg.setDestination(10153U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6943936247682384;

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
    msg.setTimeStamp(0.6527960900024781);
    msg.setSource(8327U);
    msg.setSourceEntity(93U);
    msg.setDestination(14809U);
    msg.setDestinationEntity(151U);
    msg.value = 0.5930401648164215;

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
    msg.setTimeStamp(0.3158978349299585);
    msg.setSource(13864U);
    msg.setSourceEntity(5U);
    msg.setDestination(16006U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5760001082364701;

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
    msg.setTimeStamp(0.7386899907348179);
    msg.setSource(27528U);
    msg.setSourceEntity(84U);
    msg.setDestination(64159U);
    msg.setDestinationEntity(150U);
    msg.validity = 46968U;
    msg.type = 158U;
    msg.utc_year = 41665U;
    msg.utc_month = 214U;
    msg.utc_day = 115U;
    msg.utc_time = 0.031586890956792346;
    msg.lat = 0.6013701216556093;
    msg.lon = 0.33571777340144837;
    msg.height = 0.8338234869868345;
    msg.satellites = 36U;
    msg.cog = 0.624510980136092;
    msg.sog = 0.4740152141965184;
    msg.hdop = 0.8277533309171448;
    msg.vdop = 0.8189534120749378;
    msg.hacc = 0.6293675407456145;
    msg.vacc = 0.7339030961739622;

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
    msg.setTimeStamp(0.3778638379677688);
    msg.setSource(33758U);
    msg.setSourceEntity(194U);
    msg.setDestination(29471U);
    msg.setDestinationEntity(171U);
    msg.validity = 8191U;
    msg.type = 40U;
    msg.utc_year = 22449U;
    msg.utc_month = 174U;
    msg.utc_day = 132U;
    msg.utc_time = 0.311822442742986;
    msg.lat = 0.3074298243733936;
    msg.lon = 0.7698052324963536;
    msg.height = 0.6889236993545016;
    msg.satellites = 156U;
    msg.cog = 0.07385040511812757;
    msg.sog = 0.49037349364821636;
    msg.hdop = 0.33690439418315166;
    msg.vdop = 0.29190233469297133;
    msg.hacc = 0.7647277367254548;
    msg.vacc = 0.632772463333518;

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
    msg.setTimeStamp(0.8208352475182428);
    msg.setSource(61915U);
    msg.setSourceEntity(201U);
    msg.setDestination(27627U);
    msg.setDestinationEntity(85U);
    msg.validity = 5150U;
    msg.type = 7U;
    msg.utc_year = 45201U;
    msg.utc_month = 114U;
    msg.utc_day = 185U;
    msg.utc_time = 0.5456529197741663;
    msg.lat = 0.10333650980191322;
    msg.lon = 0.5419204773208672;
    msg.height = 0.8512715873155519;
    msg.satellites = 113U;
    msg.cog = 0.8300939854472851;
    msg.sog = 0.31350586189118446;
    msg.hdop = 0.8605093510026245;
    msg.vdop = 0.3658068117126323;
    msg.hacc = 0.8779130349646533;
    msg.vacc = 0.6874627359170663;

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
    msg.setTimeStamp(0.7187319536077005);
    msg.setSource(775U);
    msg.setSourceEntity(41U);
    msg.setDestination(4182U);
    msg.setDestinationEntity(219U);
    msg.time = 0.4451344144884589;
    msg.phi = 0.2058171518343198;
    msg.theta = 0.405877456209333;
    msg.psi = 0.5405427509481137;
    msg.psi_magnetic = 0.7692452078940887;

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
    msg.setTimeStamp(0.0146029161102047);
    msg.setSource(41468U);
    msg.setSourceEntity(209U);
    msg.setDestination(65215U);
    msg.setDestinationEntity(127U);
    msg.time = 0.2737883679194535;
    msg.phi = 0.7620817175165671;
    msg.theta = 0.6517613626746189;
    msg.psi = 0.10071799842130269;
    msg.psi_magnetic = 0.37298171437665073;

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
    msg.setTimeStamp(0.1487159819674344);
    msg.setSource(23218U);
    msg.setSourceEntity(110U);
    msg.setDestination(39695U);
    msg.setDestinationEntity(21U);
    msg.time = 0.2660420244293491;
    msg.phi = 0.5419349443676857;
    msg.theta = 0.7429380094741956;
    msg.psi = 0.9528211825041141;
    msg.psi_magnetic = 0.7651495849921935;

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
    msg.setTimeStamp(0.198867126952198);
    msg.setSource(32150U);
    msg.setSourceEntity(204U);
    msg.setDestination(26967U);
    msg.setDestinationEntity(249U);
    msg.time = 0.22284689932924795;
    msg.x = 0.021989418603577504;
    msg.y = 0.44825667345285836;
    msg.z = 0.8714036969322586;
    msg.timestep = 0.6417509293577748;

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
    msg.setTimeStamp(0.36303345809309173);
    msg.setSource(35296U);
    msg.setSourceEntity(187U);
    msg.setDestination(32426U);
    msg.setDestinationEntity(45U);
    msg.time = 0.7896906215170714;
    msg.x = 0.9795600421720889;
    msg.y = 0.18678213162234947;
    msg.z = 0.8995997674984069;
    msg.timestep = 0.29781634719906236;

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
    msg.setTimeStamp(0.5608490885710867);
    msg.setSource(10050U);
    msg.setSourceEntity(13U);
    msg.setDestination(22848U);
    msg.setDestinationEntity(172U);
    msg.time = 0.43838190941119426;
    msg.x = 0.935842600590386;
    msg.y = 0.33935665543183036;
    msg.z = 0.9995130517761956;
    msg.timestep = 0.3470589613620003;

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
    msg.setTimeStamp(0.8921356901855932);
    msg.setSource(12441U);
    msg.setSourceEntity(187U);
    msg.setDestination(53171U);
    msg.setDestinationEntity(123U);
    msg.time = 0.9129531448033683;
    msg.x = 0.017702003050274695;
    msg.y = 0.7247720739080669;
    msg.z = 0.11412842513373844;

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
    msg.setTimeStamp(0.14573510529494926);
    msg.setSource(40393U);
    msg.setSourceEntity(167U);
    msg.setDestination(35526U);
    msg.setDestinationEntity(9U);
    msg.time = 0.9445295262057866;
    msg.x = 0.32596185277831513;
    msg.y = 0.18103993587160427;
    msg.z = 0.5018529469327487;

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
    msg.setTimeStamp(0.9893400522998436);
    msg.setSource(21314U);
    msg.setSourceEntity(152U);
    msg.setDestination(62585U);
    msg.setDestinationEntity(91U);
    msg.time = 0.210744224441054;
    msg.x = 0.478793975787846;
    msg.y = 0.41474395341486925;
    msg.z = 0.5653803287142667;

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
    msg.setTimeStamp(0.8846953084831636);
    msg.setSource(8611U);
    msg.setSourceEntity(77U);
    msg.setDestination(3792U);
    msg.setDestinationEntity(135U);
    msg.time = 0.8298594821497205;
    msg.x = 0.4932141751211655;
    msg.y = 0.05789361288456807;
    msg.z = 0.5012837177534226;

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
    msg.setTimeStamp(0.7841538062648641);
    msg.setSource(48367U);
    msg.setSourceEntity(36U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(199U);
    msg.time = 0.7871893181827551;
    msg.x = 0.7744027632586579;
    msg.y = 0.6695373223987557;
    msg.z = 0.5136471319376501;

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
    msg.setTimeStamp(0.5958928937074464);
    msg.setSource(33462U);
    msg.setSourceEntity(100U);
    msg.setDestination(51949U);
    msg.setDestinationEntity(49U);
    msg.time = 0.9546187323124432;
    msg.x = 0.22615855341254787;
    msg.y = 0.5061874498417821;
    msg.z = 0.983561420362814;

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
    msg.setTimeStamp(0.8372332833831354);
    msg.setSource(17380U);
    msg.setSourceEntity(154U);
    msg.setDestination(32236U);
    msg.setDestinationEntity(220U);
    msg.time = 0.6491865878505133;
    msg.x = 0.024680305037357186;
    msg.y = 0.0972653586520853;
    msg.z = 0.723598260131694;

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
    msg.setTimeStamp(0.1707547638585707);
    msg.setSource(23528U);
    msg.setSourceEntity(252U);
    msg.setDestination(21278U);
    msg.setDestinationEntity(24U);
    msg.time = 0.0017220775289936707;
    msg.x = 0.4762170195573281;
    msg.y = 0.9585654106503827;
    msg.z = 0.7132780054750126;

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
    msg.setTimeStamp(0.7038088707115122);
    msg.setSource(50344U);
    msg.setSourceEntity(26U);
    msg.setDestination(62827U);
    msg.setDestinationEntity(191U);
    msg.time = 0.7216884835954164;
    msg.x = 0.12255643819752737;
    msg.y = 0.406816535937209;
    msg.z = 0.25868729768148324;

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
    msg.setTimeStamp(0.14970751269941818);
    msg.setSource(58201U);
    msg.setSourceEntity(226U);
    msg.setDestination(29222U);
    msg.setDestinationEntity(17U);
    msg.validity = 124U;
    msg.x = 0.9617901757376732;
    msg.y = 0.6254533630588437;
    msg.z = 0.2943171901073868;

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
    msg.setTimeStamp(0.9395401330120399);
    msg.setSource(16511U);
    msg.setSourceEntity(130U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(9U);
    msg.validity = 106U;
    msg.x = 0.5508900556716558;
    msg.y = 0.37583598870352186;
    msg.z = 0.9667661721130565;

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
    msg.setTimeStamp(0.3052146584752681);
    msg.setSource(51137U);
    msg.setSourceEntity(99U);
    msg.setDestination(52093U);
    msg.setDestinationEntity(197U);
    msg.validity = 127U;
    msg.x = 0.44723150195597805;
    msg.y = 0.9774020426066702;
    msg.z = 0.9225654114451125;

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
    msg.setTimeStamp(0.3313661046245642);
    msg.setSource(41628U);
    msg.setSourceEntity(68U);
    msg.setDestination(61552U);
    msg.setDestinationEntity(69U);
    msg.validity = 237U;
    msg.x = 0.523965796756826;
    msg.y = 0.08909335811531183;
    msg.z = 0.5281527668634969;

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
    msg.setTimeStamp(0.22692566776302214);
    msg.setSource(43528U);
    msg.setSourceEntity(200U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(63U);
    msg.validity = 158U;
    msg.x = 0.6211667044841032;
    msg.y = 0.6797864362946359;
    msg.z = 0.21171421462203543;

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
    msg.setTimeStamp(0.6179281977382399);
    msg.setSource(26428U);
    msg.setSourceEntity(59U);
    msg.setDestination(31952U);
    msg.setDestinationEntity(240U);
    msg.validity = 189U;
    msg.x = 0.09598198158392768;
    msg.y = 0.43633342025544675;
    msg.z = 0.9823289241490027;

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
    msg.setTimeStamp(0.6963144995800951);
    msg.setSource(27024U);
    msg.setSourceEntity(32U);
    msg.setDestination(49162U);
    msg.setDestinationEntity(200U);
    msg.time = 0.23178467864029517;
    msg.x = 0.599342297318092;
    msg.y = 0.14820672649255906;
    msg.z = 0.1361374224676467;

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
    msg.setTimeStamp(0.2955079002662361);
    msg.setSource(59317U);
    msg.setSourceEntity(83U);
    msg.setDestination(28692U);
    msg.setDestinationEntity(24U);
    msg.time = 0.2508577368392384;
    msg.x = 0.2511876960461087;
    msg.y = 0.7103923718218731;
    msg.z = 0.7548761172235975;

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
    msg.setTimeStamp(0.07303511365255844);
    msg.setSource(31181U);
    msg.setSourceEntity(8U);
    msg.setDestination(6171U);
    msg.setDestinationEntity(175U);
    msg.time = 0.4391828845488429;
    msg.x = 0.11987197762726842;
    msg.y = 0.031103599178241237;
    msg.z = 0.5438089825205711;

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
    msg.setTimeStamp(0.9178071833246919);
    msg.setSource(16875U);
    msg.setSourceEntity(135U);
    msg.setDestination(20001U);
    msg.setDestinationEntity(139U);
    msg.validity = 44U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.795105580864557;
    tmp_msg_0.beam_height = 0.039865779413118085;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6060169058179461;

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
    msg.setTimeStamp(0.2191374137449852);
    msg.setSource(11535U);
    msg.setSourceEntity(34U);
    msg.setDestination(23082U);
    msg.setDestinationEntity(43U);
    msg.validity = 181U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5966894923361175;
    tmp_msg_0.beam_height = 0.6123190954902255;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.7295539921541991;

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
    msg.setTimeStamp(0.6553978276202309);
    msg.setSource(15757U);
    msg.setSourceEntity(33U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(90U);
    msg.validity = 62U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.864097413965677;
    tmp_msg_0.beam_height = 0.6350631716966768;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.020517706390900003;

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
    msg.setTimeStamp(0.46412455086622983);
    msg.setSource(3020U);
    msg.setSourceEntity(241U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(230U);
    msg.value = 0.4171063471362496;

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
    msg.setTimeStamp(0.5351299404873745);
    msg.setSource(50306U);
    msg.setSourceEntity(2U);
    msg.setDestination(12067U);
    msg.setDestinationEntity(15U);
    msg.value = 0.6705043164085842;

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
    msg.setTimeStamp(0.30307889265009347);
    msg.setSource(26946U);
    msg.setSourceEntity(186U);
    msg.setDestination(20795U);
    msg.setDestinationEntity(2U);
    msg.value = 0.08091715048834835;

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
    msg.setTimeStamp(0.9044684686461838);
    msg.setSource(25576U);
    msg.setSourceEntity(245U);
    msg.setDestination(26104U);
    msg.setDestinationEntity(144U);
    msg.value = 0.4094358640454735;

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
    msg.setTimeStamp(0.8096138905789971);
    msg.setSource(1882U);
    msg.setSourceEntity(80U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(147U);
    msg.value = 0.2854419629901418;

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
    msg.setTimeStamp(0.5743334325466175);
    msg.setSource(63553U);
    msg.setSourceEntity(92U);
    msg.setDestination(9024U);
    msg.setDestinationEntity(108U);
    msg.value = 0.09897968138777735;

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
    msg.setTimeStamp(0.6874973403026803);
    msg.setSource(1244U);
    msg.setSourceEntity(3U);
    msg.setDestination(41280U);
    msg.setDestinationEntity(196U);
    msg.value = 0.692983845803834;

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
    msg.setTimeStamp(0.43072350404879767);
    msg.setSource(33526U);
    msg.setSourceEntity(151U);
    msg.setDestination(37589U);
    msg.setDestinationEntity(70U);
    msg.value = 0.02612912276303081;

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
    msg.setTimeStamp(0.9692260133863219);
    msg.setSource(12830U);
    msg.setSourceEntity(89U);
    msg.setDestination(8913U);
    msg.setDestinationEntity(228U);
    msg.value = 0.05259528420560522;

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
    msg.setTimeStamp(0.3115085035538021);
    msg.setSource(65357U);
    msg.setSourceEntity(28U);
    msg.setDestination(6858U);
    msg.setDestinationEntity(171U);
    msg.value = 0.556838843660891;

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
    msg.setTimeStamp(0.4056983546773445);
    msg.setSource(57802U);
    msg.setSourceEntity(22U);
    msg.setDestination(32163U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6438655151799049;

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
    msg.setTimeStamp(0.837754087111457);
    msg.setSource(10512U);
    msg.setSourceEntity(91U);
    msg.setDestination(49722U);
    msg.setDestinationEntity(170U);
    msg.value = 0.11176835812795893;

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
    msg.setTimeStamp(0.09496293520335108);
    msg.setSource(10654U);
    msg.setSourceEntity(209U);
    msg.setDestination(12785U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6775931827662419;

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
    msg.setTimeStamp(0.5176332617809107);
    msg.setSource(33559U);
    msg.setSourceEntity(250U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8635924638614418;

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
    msg.setTimeStamp(0.07159114468968586);
    msg.setSource(32371U);
    msg.setSourceEntity(244U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(17U);
    msg.value = 0.46818022866821984;

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
    msg.setTimeStamp(0.8638983959444724);
    msg.setSource(42281U);
    msg.setSourceEntity(53U);
    msg.setDestination(43535U);
    msg.setDestinationEntity(246U);
    msg.value = 0.24828602072332173;

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
    msg.setTimeStamp(0.7932632987953687);
    msg.setSource(31394U);
    msg.setSourceEntity(35U);
    msg.setDestination(38455U);
    msg.setDestinationEntity(110U);
    msg.value = 0.7141636768420994;

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
    msg.setTimeStamp(0.06484075735305783);
    msg.setSource(40681U);
    msg.setSourceEntity(41U);
    msg.setDestination(60296U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5172334745486741;

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
    msg.setTimeStamp(0.22032520149993118);
    msg.setSource(55613U);
    msg.setSourceEntity(192U);
    msg.setDestination(11770U);
    msg.setDestinationEntity(184U);
    msg.value = 0.9386030423660968;

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
    msg.setTimeStamp(0.1556186028637665);
    msg.setSource(22863U);
    msg.setSourceEntity(98U);
    msg.setDestination(16693U);
    msg.setDestinationEntity(30U);
    msg.value = 0.07198886848148822;

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
    msg.setTimeStamp(0.952175610124276);
    msg.setSource(35782U);
    msg.setSourceEntity(126U);
    msg.setDestination(16176U);
    msg.setDestinationEntity(245U);
    msg.value = 0.5168322511514136;

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
    msg.setTimeStamp(0.02441665464981746);
    msg.setSource(13636U);
    msg.setSourceEntity(49U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(68U);
    msg.value = 0.5786406736127223;

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
    msg.setTimeStamp(0.9601050694715915);
    msg.setSource(18271U);
    msg.setSourceEntity(147U);
    msg.setDestination(46451U);
    msg.setDestinationEntity(162U);
    msg.value = 0.2805526835115658;

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
    msg.setTimeStamp(0.4208156127729624);
    msg.setSource(47856U);
    msg.setSourceEntity(210U);
    msg.setDestination(22139U);
    msg.setDestinationEntity(82U);
    msg.value = 0.7915382695738409;

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
    msg.setTimeStamp(0.45914797854973866);
    msg.setSource(51565U);
    msg.setSourceEntity(133U);
    msg.setDestination(40277U);
    msg.setDestinationEntity(247U);
    msg.direction = 0.9825802254682879;
    msg.speed = 0.8951819250831355;
    msg.turbulence = 0.21227925535590209;

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
    msg.setTimeStamp(0.8797818791241081);
    msg.setSource(42832U);
    msg.setSourceEntity(114U);
    msg.setDestination(54679U);
    msg.setDestinationEntity(121U);
    msg.direction = 0.6003169511517904;
    msg.speed = 0.7062045922031607;
    msg.turbulence = 0.21480684495855518;

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
    msg.setTimeStamp(0.9383285736629091);
    msg.setSource(26735U);
    msg.setSourceEntity(22U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(94U);
    msg.direction = 0.39926365133774055;
    msg.speed = 0.17994951477068888;
    msg.turbulence = 0.6319469183444967;

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
    msg.setTimeStamp(0.7823174676925897);
    msg.setSource(2401U);
    msg.setSourceEntity(136U);
    msg.setDestination(14693U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5263313942463216;

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
    msg.setTimeStamp(0.3749820180650123);
    msg.setSource(4427U);
    msg.setSourceEntity(193U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(103U);
    msg.value = 0.9157091049188631;

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
    msg.setTimeStamp(0.3073089827933434);
    msg.setSource(15294U);
    msg.setSourceEntity(133U);
    msg.setDestination(61704U);
    msg.setDestinationEntity(218U);
    msg.value = 0.1082925774014657;

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
    msg.setTimeStamp(0.21525673902109677);
    msg.setSource(39620U);
    msg.setSourceEntity(45U);
    msg.setDestination(65336U);
    msg.setDestinationEntity(24U);
    msg.value.assign("ZLCAASDWIHCRBF");

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
    msg.setTimeStamp(0.363457776995754);
    msg.setSource(15330U);
    msg.setSourceEntity(86U);
    msg.setDestination(60350U);
    msg.setDestinationEntity(203U);
    msg.value.assign("KYVIMUJFPDTZJFIZTJELEHBNYMYZXFQOOKWIEGYJJNDXNHGSUIRVFUQDSJBHUXMOSUENQARQUBTLWFZKINTVVJTCXXKBRKSPSWNONHOLLVBSEECIHUKBDYZZMXRIORDZRWUIMAGHFMKWLSVFYFCCOPIOXJGPHWPABAWGRQM");

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
    msg.setTimeStamp(0.9436679521184395);
    msg.setSource(39952U);
    msg.setSourceEntity(91U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(221U);
    msg.value.assign("IJQMNMGVJNQAHVSWKFORJRDSOXDWUOKESUTTECYWGGWJPBGUZTFSOAXFKHYADWNKPYMVCGRPYWYYDUDXMIKVGKFSQFLJBJSIQAALXPUNRZUYTHGXZXHKITCCKAAPBIYZPWRZAVXVOINIVNEHGYGUQPDFEQCTLABVHXEBVEIEMLNSNKCMJUJDHQMZCLEQZDMRWENHOBHULVGNSOFJMWWBTQO");

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
    msg.setTimeStamp(0.40872730684347525);
    msg.setSource(19789U);
    msg.setSourceEntity(219U);
    msg.setDestination(46962U);
    msg.setDestinationEntity(152U);
    const signed char tmp_msg_0[] = {26, -92, 24, 51, -126, -25, 79, -45, -39, -106, -71, 111, 49, -26, 14, 48, 94, -76, 27, 117, 90, 115, 68, -70, -27, 55, 97, 91, 68, -122, -69, 41, 36, -36, -107, 95, 65, -40, 77, 67, 5, -97, 124, -100, -31, 26, 5, 50, -120, -25, -42, 86, 106, -85, 116, 9, -46, 34, -5, 59, -36, 77, -119, -108, 54, -71, -24, -89, 115, -105, 52, 46, -94, -88, 30, 77, -77, -23, 6, -13, -70, 63, -102, -47, 75, 53, -22, -22, 114, 10, 39, -17, -94, 111, -20, -103, 112, -13, 110, -5, -118, -13, 18, 124, -100, 78, 48, 107, 20, 34, 44, 114, 35, -38, 119, -52, 46, -91, 80, 46, -43, -21, 74, -61, -4, -17, -25, 5, -108, 75, -65, 74, 2, -66, -104, 15, 19, -81, -97, 3, 124, 86, -45, 49, 74, 76, -94, -77, -44, -104, 15, -34, -34, 4, -121, -15, 43, -96, -89, -33, -107, -122, -104, 121, 126, -18, -54, 23, 118, 56, -58, 45, 113, -49, -73, 62, -112, -125, -116, -125, -111, -100, -86, -75, -69, -4, 122, -118, 14, -109, -17, -93, 11, -88, 100, -32, 91, 117, -128, 18, -34, 99, -126, -50, 100, -52, 49, 4, -102, -115, -18, 28, 97, -46, -15, -72, 0, -128, -91, -50, -61, -95, -43, -21, 46, -12, -75, 27, 81, 69, -41, -117};
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
    msg.setTimeStamp(0.6304266324806355);
    msg.setSource(53360U);
    msg.setSourceEntity(54U);
    msg.setDestination(4807U);
    msg.setDestinationEntity(246U);
    const signed char tmp_msg_0[] = {4, 17, 99, -81, -43, 104, -113, 113, 19, 119, -86, 97, -68, -38, -88, 126, -20, -122, -4, -9, 100, -56, 73, -117, -92, 125, -38, -1, -120, -39, 108, -125, -127, 112, -33, 108, 47, -21, 93, -6, 99, 72, 120, 55, 61, 22, -32, -79, 29, -75, -72, 0, -22, -16, 126, 100, 117, -60, -44, -111, 48, 66, -105, -32, 126, -46, 111, 1, 50, 37, -120, -58, -60, 13, -125, 89, 51, -114, -71, -31, 96, 125, -64, 14, -9, -48, 108, 0, -26, 19, -119, 124, -39, 38, 15, -27, 2, -1, -12, -12, 49, -9, -84, 96, -50, -53, 81, -109, 76, 87, 13, -50, 59, 16, -51, 15, -89, -109, -72, 59, -51, 36, -66, 60, -36, -10, -118, 54, -117, 95, -17, -100, 35, 46, 73, 122, 3, -83, -27, 122, 84, -46, -96, 107, 10, 70, 6, 8, 20, -34, -50, 109, 60, -38, 47, 31, -115, -35, -91, -108, -46, 2, 37, 59, -73, -104, 15, 107, -103, -8, -47, -108, -78, -123, 61, 121, 118, 37, 83, -17, -22, -67};
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
    msg.setTimeStamp(0.039510282255917684);
    msg.setSource(19593U);
    msg.setSourceEntity(95U);
    msg.setDestination(16458U);
    msg.setDestinationEntity(107U);
    const signed char tmp_msg_0[] = {7, 70, -38, 11, 95, -87, 31, -65, 14, 42, 92, -4, 61, 16, 65, 42, -114, -86, -101, -38, 6, 12, -44, -55, 57, 38, -80, 97, -6, -79, 83, -61, -38, 26, -54, 54, 45, 24, 14, -87, 15, 76, -80, 67, 116, -41, 124, 65, -51, -62, -63, -118, 113, 2, 90, -78, 34, 47, 45, 89, -74, -9, -106, 75, 124, -63, -38, -114, 100, 71, 15, 95, -95, -77, -69, -102, 99, -37, -36, -5, 0, -78, 47, -19, -92, -118, -54, -111, 114, 67, -114, 45, -51, 66, 12};
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
    msg.setTimeStamp(0.5152658697437955);
    msg.setSource(5575U);
    msg.setSourceEntity(253U);
    msg.setDestination(46854U);
    msg.setDestinationEntity(101U);
    msg.value = 0.5654365178026681;

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
    msg.setTimeStamp(0.33183298520227333);
    msg.setSource(28984U);
    msg.setSourceEntity(18U);
    msg.setDestination(64343U);
    msg.setDestinationEntity(158U);
    msg.value = 0.9090651354823837;

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
    msg.setTimeStamp(0.04660940280736636);
    msg.setSource(24050U);
    msg.setSourceEntity(142U);
    msg.setDestination(42351U);
    msg.setDestinationEntity(19U);
    msg.value = 0.023943980317284286;

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
    msg.setTimeStamp(0.7735996548148897);
    msg.setSource(13834U);
    msg.setSourceEntity(2U);
    msg.setDestination(49780U);
    msg.setDestinationEntity(159U);
    msg.type = 101U;
    msg.frequency = 722878171U;
    msg.min_range = 18395U;
    msg.max_range = 42454U;
    msg.bits_per_point = 171U;
    msg.scale_factor = 0.4699608990443157;
    const signed char tmp_msg_0[] = {-66, 43, -121, -74, -108, -111, 50, -48, 106, -111, 39, -28, 32, 100, -58, -95, -13, -103, 19, -35, -127, 93, -35, -11, 85, 32, -27, 42, 0, 74, 13, -116, -10, -122, -102, -60, 85, 21, 123, 30, -29, -121, 41, 95, 96, -61, -18, 100, -23, -40, -114, 121, -27, -93, 93, -113, -76, 29, -23, -94, -21, 92, -63, -101, -109, 11, 66, -116, 104, 81, -125, 110, -56, 79, 111, -29, -103, 5, 76, 64, -70, 81, -76, -117, -51, 90, 25, 107, 91, -8, -75, 123, -125, 14, 37, -71, -37, -13, 58, -71, 41, 103};
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
    msg.setTimeStamp(0.6452478353538523);
    msg.setSource(21085U);
    msg.setSourceEntity(200U);
    msg.setDestination(39760U);
    msg.setDestinationEntity(244U);
    msg.type = 202U;
    msg.frequency = 2080675310U;
    msg.min_range = 6032U;
    msg.max_range = 34938U;
    msg.bits_per_point = 105U;
    msg.scale_factor = 0.557067627803481;
    const signed char tmp_msg_0[] = {55, -100, 84, -109, -25, 62, 102, -24, -40, 116, 21, 4, 97, 90, 124, 6, 59, -49, -1, -126, 1, -124, -106, -64, -42, -40, -25, -55, -86, 1, 106, -10, -83, -91, -119, -119, -74, 88, -55, -36, 72, -80, 62, -6, -34, 97, -32, -21, -96, -49, 43, -101, -43, -38, 30, -122, 103, -20, 85, -32, 36, 62, -33, 27, -73, -99, 94, 70, 5, 118, -8, 68, 22, 98, -28, -128, -43, -67, 32, 88, 55, -104, -56, 94, -87, 70, -13, 102, 26, 37, -13, -63, -93, -31, -116, -59, -34, -108, -115, -18, -69, -40, 96, -71, -120, 61, 50, 113, -80, -122, 51, 18, -50, -34, 123, -112, -26, -8, 118, -21, 70, -71, -69, 25, 119, -61, -78, 8, 30, 17, 90, -26, -17, -107, -113, -31, -81, -51, -29, 3, 40, -94, 16, -73, 46, -71, -30, -64, -27, 16, -36, -30, -71};
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
    msg.setTimeStamp(0.08817085368674715);
    msg.setSource(1853U);
    msg.setSourceEntity(135U);
    msg.setDestination(46638U);
    msg.setDestinationEntity(246U);
    msg.type = 74U;
    msg.frequency = 686495620U;
    msg.min_range = 15079U;
    msg.max_range = 25007U;
    msg.bits_per_point = 13U;
    msg.scale_factor = 0.2791663239812674;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9110403526565687;
    tmp_msg_0.beam_height = 0.9047482218496374;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-52, 59, -4, 107, 11, 89, -85, -119, -102, -32, -25, 125, -121, -109, 13, 35, -58, 31, -103, -66, -75, -50, -27, -66, -38, -45, 21, -41, 7, -69, 17, 39, 20, 68, 109, -70, -106};
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
    msg.setTimeStamp(0.3956204564845366);
    msg.setSource(3325U);
    msg.setSourceEntity(20U);
    msg.setDestination(6024U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.3316417898224512);
    msg.setSource(27455U);
    msg.setSourceEntity(219U);
    msg.setDestination(23617U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.5597770836117344);
    msg.setSource(12911U);
    msg.setSourceEntity(216U);
    msg.setDestination(16882U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.5636457306136894);
    msg.setSource(47543U);
    msg.setSourceEntity(138U);
    msg.setDestination(61653U);
    msg.setDestinationEntity(246U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.9361249532367579);
    msg.setSource(38906U);
    msg.setSourceEntity(117U);
    msg.setDestination(45055U);
    msg.setDestinationEntity(212U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.03416299461959238);
    msg.setSource(60928U);
    msg.setSourceEntity(178U);
    msg.setDestination(13678U);
    msg.setDestinationEntity(133U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.6371214185104034);
    msg.setSource(42662U);
    msg.setSourceEntity(7U);
    msg.setDestination(12131U);
    msg.setDestinationEntity(171U);
    msg.value = 0.29047475483311347;
    msg.confidence = 0.5820996048391649;
    msg.opmodes.assign("OBXBAGMKTDKGBIRGMKFURIQRWWKTYVQXZLBJWNDVLWTHJKVZPUJFGLHSAJWGHUZFUBMZHEVBYJVXGOEMPVACXNTCNSXKCCRNZAOBVZDPQGYGIERKYYDNAAWIEPLYWSMZTHKHZESCLRXOHQMSHRYEWUYENLLHTTWDIQPXI");

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
    msg.setTimeStamp(0.427838847248435);
    msg.setSource(36357U);
    msg.setSourceEntity(82U);
    msg.setDestination(62607U);
    msg.setDestinationEntity(87U);
    msg.value = 0.20613100614237623;
    msg.confidence = 0.3992994783457344;
    msg.opmodes.assign("EOSWYYDRFCHOCCBPUIKJHDXOUQARTBLHYVYQKKQGCGJSKCUIMLCUUWOIDZIDZPPPTRGLLEBWLAJKBARTJIEDQTULPZHHIWQSONVAJPOSSRXEZMKMQAENMFFFFNXIKDWRVRMNGNDWSXXLLEUXZWHRXHVDPOLVYBFEVQGEXYZVCWLYZSFZH");

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
    msg.setTimeStamp(0.5895695280541056);
    msg.setSource(18886U);
    msg.setSourceEntity(188U);
    msg.setDestination(40498U);
    msg.setDestinationEntity(48U);
    msg.value = 0.3748190705658976;
    msg.confidence = 0.6362840783364417;
    msg.opmodes.assign("RYPCLYZLCXJEBFBIFBJXQKPNWPGRWIFPOIRDKCUXAVZSZGTVCFNHSDHDLDYACTGVVWUSQWRHHQHNYPOVLOMDNAYBSOJMNANKUFYHUQALSGMTOPJSWKVEXKUEMRADVIFHSHXMPYLBECQGUNIKYJYUTEBNBSZOPKQMTQCDMNIRJIVZXISFRORAONLAMOVC");

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
    msg.setTimeStamp(0.7909210408212354);
    msg.setSource(65285U);
    msg.setSourceEntity(84U);
    msg.setDestination(41204U);
    msg.setDestinationEntity(81U);
    msg.itow = 2715198766U;
    msg.lat = 0.004237252518557;
    msg.lon = 0.7197217472696623;
    msg.height_ell = 0.6171456979725507;
    msg.height_sea = 0.49167043743288863;
    msg.hacc = 0.029902455297752262;
    msg.vacc = 0.5962542053611226;
    msg.vel_n = 0.8824561621825141;
    msg.vel_e = 0.8596412484226441;
    msg.vel_d = 0.7238267529716611;
    msg.speed = 0.248760852886465;
    msg.gspeed = 0.9142083886664899;
    msg.heading = 0.24179616590904118;
    msg.sacc = 0.7287762913516234;
    msg.cacc = 0.8481023366060669;

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
    msg.setTimeStamp(0.1832040232282367);
    msg.setSource(64845U);
    msg.setSourceEntity(38U);
    msg.setDestination(17661U);
    msg.setDestinationEntity(219U);
    msg.itow = 1775167368U;
    msg.lat = 0.04846577772575089;
    msg.lon = 0.3049756748225867;
    msg.height_ell = 0.37208222322182527;
    msg.height_sea = 0.53897640816283;
    msg.hacc = 0.803513949462988;
    msg.vacc = 0.5073597116289833;
    msg.vel_n = 0.48301748007694123;
    msg.vel_e = 0.8171648365713338;
    msg.vel_d = 0.3131639379611808;
    msg.speed = 0.2348618147202991;
    msg.gspeed = 0.9497963723755827;
    msg.heading = 0.08499670497857859;
    msg.sacc = 0.5798220367659611;
    msg.cacc = 0.7834909770057066;

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
    msg.setTimeStamp(0.5532492231196432);
    msg.setSource(4604U);
    msg.setSourceEntity(61U);
    msg.setDestination(25700U);
    msg.setDestinationEntity(163U);
    msg.itow = 937266177U;
    msg.lat = 0.9008180863608864;
    msg.lon = 0.5795626214019215;
    msg.height_ell = 0.10769464298965592;
    msg.height_sea = 0.6655957867224911;
    msg.hacc = 0.8306144898469302;
    msg.vacc = 0.9746638754116141;
    msg.vel_n = 0.7726707928080074;
    msg.vel_e = 0.4904559088408752;
    msg.vel_d = 0.00045476417330647667;
    msg.speed = 0.9495190611934361;
    msg.gspeed = 0.39840152938167395;
    msg.heading = 0.6291726596275142;
    msg.sacc = 0.704386181840976;
    msg.cacc = 0.029993568815016802;

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
    msg.setTimeStamp(0.15572266131786017);
    msg.setSource(54130U);
    msg.setSourceEntity(110U);
    msg.setDestination(11884U);
    msg.setDestinationEntity(215U);
    msg.id = 133U;
    msg.value = 0.868695549253797;

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
    msg.setTimeStamp(0.9063672324529101);
    msg.setSource(11292U);
    msg.setSourceEntity(209U);
    msg.setDestination(62068U);
    msg.setDestinationEntity(105U);
    msg.id = 61U;
    msg.value = 0.8247693589098681;

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
    msg.setTimeStamp(0.631784554757955);
    msg.setSource(38952U);
    msg.setSourceEntity(252U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(185U);
    msg.id = 168U;
    msg.value = 0.6614331178854628;

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
    msg.setTimeStamp(0.8595234435235203);
    msg.setSource(28782U);
    msg.setSourceEntity(185U);
    msg.setDestination(4533U);
    msg.setDestinationEntity(8U);
    msg.x = 0.1065734665807988;
    msg.y = 0.19987710717422258;
    msg.z = 0.7834611457974748;
    msg.phi = 0.934076247518612;
    msg.theta = 0.4953630934967691;
    msg.psi = 0.5221348886468978;

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
    msg.setTimeStamp(0.7970345011572414);
    msg.setSource(43013U);
    msg.setSourceEntity(222U);
    msg.setDestination(19736U);
    msg.setDestinationEntity(26U);
    msg.x = 0.8058798650224313;
    msg.y = 0.9743026452186508;
    msg.z = 0.16585436639294648;
    msg.phi = 0.5954922995823886;
    msg.theta = 0.25004873041706566;
    msg.psi = 0.9835217074880769;

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
    msg.setTimeStamp(0.9145018685944036);
    msg.setSource(57115U);
    msg.setSourceEntity(71U);
    msg.setDestination(27101U);
    msg.setDestinationEntity(192U);
    msg.x = 0.1510989298733757;
    msg.y = 0.40767537816428623;
    msg.z = 0.9643360916863802;
    msg.phi = 0.8190392630864222;
    msg.theta = 0.40024003744239234;
    msg.psi = 0.6594761511383259;

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
    msg.setTimeStamp(0.6035225144417744);
    msg.setSource(42927U);
    msg.setSourceEntity(229U);
    msg.setDestination(11393U);
    msg.setDestinationEntity(117U);
    msg.beam_width = 0.7058629855155465;
    msg.beam_height = 0.20434948652377072;

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
    msg.setTimeStamp(0.964696704744958);
    msg.setSource(58259U);
    msg.setSourceEntity(94U);
    msg.setDestination(18413U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.19281709461779084;
    msg.beam_height = 0.36341340986049886;

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
    msg.setTimeStamp(0.7220076584826197);
    msg.setSource(46058U);
    msg.setSourceEntity(180U);
    msg.setDestination(32361U);
    msg.setDestinationEntity(19U);
    msg.beam_width = 0.9922925735506348;
    msg.beam_height = 0.8587726262898429;

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
    msg.setTimeStamp(0.3137507292493493);
    msg.setSource(39475U);
    msg.setSourceEntity(183U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(15U);
    msg.sane = 12U;

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
    msg.setTimeStamp(0.6215665308365702);
    msg.setSource(57324U);
    msg.setSourceEntity(35U);
    msg.setDestination(54872U);
    msg.setDestinationEntity(180U);
    msg.sane = 16U;

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
    msg.setTimeStamp(0.4522384516042187);
    msg.setSource(3855U);
    msg.setSourceEntity(107U);
    msg.setDestination(38062U);
    msg.setDestinationEntity(242U);
    msg.sane = 87U;

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
    msg.setTimeStamp(0.9861193401182307);
    msg.setSource(12225U);
    msg.setSourceEntity(231U);
    msg.setDestination(18210U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6523942296170989;

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
    msg.setTimeStamp(0.5192344237612034);
    msg.setSource(35968U);
    msg.setSourceEntity(67U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5031779132579238;

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
    msg.setTimeStamp(0.9419113890597302);
    msg.setSource(56268U);
    msg.setSourceEntity(157U);
    msg.setDestination(36999U);
    msg.setDestinationEntity(63U);
    msg.value = 0.2964966605139867;

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
    msg.setTimeStamp(0.6118206451146527);
    msg.setSource(56020U);
    msg.setSourceEntity(236U);
    msg.setDestination(33254U);
    msg.setDestinationEntity(117U);
    msg.value = 0.5716053600519969;

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
    msg.setTimeStamp(0.8517852789908562);
    msg.setSource(20986U);
    msg.setSourceEntity(234U);
    msg.setDestination(2530U);
    msg.setDestinationEntity(124U);
    msg.value = 0.9820987975384797;

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
    msg.setTimeStamp(0.3303379217196639);
    msg.setSource(36825U);
    msg.setSourceEntity(178U);
    msg.setDestination(6832U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8032741428994441;

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
    msg.setTimeStamp(0.15896134853040866);
    msg.setSource(12968U);
    msg.setSourceEntity(171U);
    msg.setDestination(59325U);
    msg.setDestinationEntity(24U);
    msg.value = 0.6186813113284277;

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
    msg.setTimeStamp(0.14168055772688992);
    msg.setSource(30621U);
    msg.setSourceEntity(216U);
    msg.setDestination(22867U);
    msg.setDestinationEntity(181U);
    msg.value = 0.7816381925877993;

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
    msg.setTimeStamp(0.748087837333789);
    msg.setSource(3056U);
    msg.setSourceEntity(129U);
    msg.setDestination(47613U);
    msg.setDestinationEntity(164U);
    msg.value = 0.08387792503710889;

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
    msg.setTimeStamp(0.35708452854807216);
    msg.setSource(61108U);
    msg.setSourceEntity(225U);
    msg.setDestination(14243U);
    msg.setDestinationEntity(155U);
    msg.value = 0.07679396709066755;

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
    msg.setTimeStamp(0.30684073628138386);
    msg.setSource(63874U);
    msg.setSourceEntity(248U);
    msg.setDestination(23650U);
    msg.setDestinationEntity(239U);
    msg.value = 0.24334094113734794;

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
    msg.setTimeStamp(0.8572147823917119);
    msg.setSource(52401U);
    msg.setSourceEntity(141U);
    msg.setDestination(53897U);
    msg.setDestinationEntity(230U);
    msg.value = 0.12416207104422528;

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
    msg.setTimeStamp(0.07944569692159109);
    msg.setSource(56721U);
    msg.setSourceEntity(44U);
    msg.setDestination(9145U);
    msg.setDestinationEntity(77U);
    msg.value = 0.5710872960351501;

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
    msg.setTimeStamp(0.6994716315352902);
    msg.setSource(7549U);
    msg.setSourceEntity(103U);
    msg.setDestination(1004U);
    msg.setDestinationEntity(62U);
    msg.value = 0.48744609121628935;

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
    msg.setTimeStamp(0.8142523329221675);
    msg.setSource(52567U);
    msg.setSourceEntity(86U);
    msg.setDestination(39929U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2769528977003963;

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
    msg.setTimeStamp(0.33037673790981537);
    msg.setSource(6031U);
    msg.setSourceEntity(189U);
    msg.setDestination(37760U);
    msg.setDestinationEntity(69U);
    msg.value = 0.6468213709429629;

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
    msg.setTimeStamp(0.5065022265256368);
    msg.setSource(51161U);
    msg.setSourceEntity(51U);
    msg.setDestination(43144U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6245758690011189;

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
    msg.setTimeStamp(0.8884744239575626);
    msg.setSource(57169U);
    msg.setSourceEntity(212U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5996407036319062;

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
    msg.setTimeStamp(0.6466727997892364);
    msg.setSource(26288U);
    msg.setSourceEntity(177U);
    msg.setDestination(39966U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8249410335032671;

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
    msg.setTimeStamp(0.4595739643674326);
    msg.setSource(26346U);
    msg.setSourceEntity(250U);
    msg.setDestination(36860U);
    msg.setDestinationEntity(197U);
    msg.value = 0.9735404585600328;

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
    msg.setTimeStamp(0.046183845810343516);
    msg.setSource(20001U);
    msg.setSourceEntity(236U);
    msg.setDestination(19545U);
    msg.setDestinationEntity(131U);
    msg.value = 0.3359914477827366;

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
    msg.setTimeStamp(0.4722613937504262);
    msg.setSource(232U);
    msg.setSourceEntity(22U);
    msg.setDestination(54332U);
    msg.setDestinationEntity(40U);
    msg.value = 0.6300960303797769;

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
    msg.setTimeStamp(0.8662257172831298);
    msg.setSource(18394U);
    msg.setSourceEntity(219U);
    msg.setDestination(5439U);
    msg.setDestinationEntity(101U);
    msg.value = 0.11855969107071196;

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
    msg.setTimeStamp(0.25094619460275724);
    msg.setSource(35293U);
    msg.setSourceEntity(44U);
    msg.setDestination(37522U);
    msg.setDestinationEntity(11U);
    msg.value = 0.21618916996150062;

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
    msg.setTimeStamp(0.30494916279753503);
    msg.setSource(30271U);
    msg.setSourceEntity(119U);
    msg.setDestination(31117U);
    msg.setDestinationEntity(225U);
    msg.validity = 5291U;
    msg.type = 219U;
    msg.tow = 841721049U;
    msg.base_lat = 0.4949156663574944;
    msg.base_lon = 0.5972726543528228;
    msg.base_height = 0.29554537407195125;
    msg.n = 0.9289415735667681;
    msg.e = 0.16658471254466745;
    msg.d = 0.049980471167906604;
    msg.v_n = 0.3168055177307392;
    msg.v_e = 0.364471613765347;
    msg.v_d = 0.3373643964119166;
    msg.satellites = 175U;
    msg.iar_hyp = 23473U;
    msg.iar_ratio = 0.8721757617332301;

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
    msg.setTimeStamp(0.7149393350145916);
    msg.setSource(23946U);
    msg.setSourceEntity(44U);
    msg.setDestination(29841U);
    msg.setDestinationEntity(197U);
    msg.validity = 4710U;
    msg.type = 164U;
    msg.tow = 3943404536U;
    msg.base_lat = 0.5330736572295544;
    msg.base_lon = 0.2954488497147728;
    msg.base_height = 0.7843764722554747;
    msg.n = 0.6511209079183558;
    msg.e = 0.9287534262678141;
    msg.d = 0.722980274526369;
    msg.v_n = 0.1306708319927422;
    msg.v_e = 0.15358520676465404;
    msg.v_d = 0.526589115382463;
    msg.satellites = 78U;
    msg.iar_hyp = 62715U;
    msg.iar_ratio = 0.01903298995431202;

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
    msg.setTimeStamp(0.27983035704795);
    msg.setSource(35768U);
    msg.setSourceEntity(8U);
    msg.setDestination(15203U);
    msg.setDestinationEntity(235U);
    msg.validity = 28943U;
    msg.type = 202U;
    msg.tow = 3933325205U;
    msg.base_lat = 0.3987037415284441;
    msg.base_lon = 0.9397786740636139;
    msg.base_height = 0.8227116031494458;
    msg.n = 0.4643667537012508;
    msg.e = 0.5219512863726309;
    msg.d = 0.3549845788512921;
    msg.v_n = 0.8657254400889512;
    msg.v_e = 0.4766490630831104;
    msg.v_d = 0.20104309806140197;
    msg.satellites = 177U;
    msg.iar_hyp = 13219U;
    msg.iar_ratio = 0.9163476515462059;

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
    msg.setTimeStamp(0.7818639128175784);
    msg.setSource(43205U);
    msg.setSourceEntity(33U);
    msg.setDestination(53405U);
    msg.setDestinationEntity(223U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.28634014189909873;
    tmp_msg_0.lon = 0.30307322022136907;
    tmp_msg_0.height = 0.04797378374097727;
    tmp_msg_0.x = 0.923595244547263;
    tmp_msg_0.y = 0.20471852233522636;
    tmp_msg_0.z = 0.5658431529808097;
    tmp_msg_0.phi = 0.8654862688093888;
    tmp_msg_0.theta = 0.8731179234298623;
    tmp_msg_0.psi = 0.8623239547552116;
    tmp_msg_0.u = 0.8720611254280702;
    tmp_msg_0.v = 0.7107979865020424;
    tmp_msg_0.w = 0.8335754751941994;
    tmp_msg_0.vx = 0.3550072341361945;
    tmp_msg_0.vy = 0.6387933940534373;
    tmp_msg_0.vz = 0.9422981325261673;
    tmp_msg_0.p = 0.740795684852984;
    tmp_msg_0.q = 0.4104459708757505;
    tmp_msg_0.r = 0.3436417156828506;
    tmp_msg_0.depth = 0.07036859600577283;
    tmp_msg_0.alt = 0.20809035487069538;
    msg.state.set(tmp_msg_0);
    msg.type = 53U;

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
    msg.setTimeStamp(0.19363761208093377);
    msg.setSource(51716U);
    msg.setSourceEntity(130U);
    msg.setDestination(32440U);
    msg.setDestinationEntity(230U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.08224252918360864;
    tmp_msg_0.lon = 0.6299359715416161;
    tmp_msg_0.height = 0.9225980434264774;
    tmp_msg_0.x = 0.5672272447406753;
    tmp_msg_0.y = 0.6855951107328826;
    tmp_msg_0.z = 0.4493823831797411;
    tmp_msg_0.phi = 0.4015099628978335;
    tmp_msg_0.theta = 0.4006895796405274;
    tmp_msg_0.psi = 0.8996527985341695;
    tmp_msg_0.u = 0.2587466862575377;
    tmp_msg_0.v = 0.8113067315029346;
    tmp_msg_0.w = 0.6566644277935578;
    tmp_msg_0.vx = 0.7078763148171094;
    tmp_msg_0.vy = 0.8865332283434971;
    tmp_msg_0.vz = 0.03571318684806024;
    tmp_msg_0.p = 0.22225949320497607;
    tmp_msg_0.q = 0.2670945455595628;
    tmp_msg_0.r = 0.9147340928092961;
    tmp_msg_0.depth = 0.35298279027600776;
    tmp_msg_0.alt = 0.21970764505863427;
    msg.state.set(tmp_msg_0);
    msg.type = 182U;

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
    msg.setTimeStamp(0.6336980818552633);
    msg.setSource(26740U);
    msg.setSourceEntity(81U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(47U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.36147061974278893;
    tmp_msg_0.lon = 0.9907261415892343;
    tmp_msg_0.height = 0.5158944336953775;
    tmp_msg_0.x = 0.25679037832859175;
    tmp_msg_0.y = 0.9414503960894289;
    tmp_msg_0.z = 0.8200058833915141;
    tmp_msg_0.phi = 0.06315995810601294;
    tmp_msg_0.theta = 0.650983111707101;
    tmp_msg_0.psi = 0.8292169931579182;
    tmp_msg_0.u = 0.6317259352262691;
    tmp_msg_0.v = 0.6077269480738816;
    tmp_msg_0.w = 0.08473000354811311;
    tmp_msg_0.vx = 0.6894700827860911;
    tmp_msg_0.vy = 0.8931280032464516;
    tmp_msg_0.vz = 0.5665029510599494;
    tmp_msg_0.p = 0.5448644443022598;
    tmp_msg_0.q = 0.6284615071675206;
    tmp_msg_0.r = 0.941778190113028;
    tmp_msg_0.depth = 0.4652495180974441;
    tmp_msg_0.alt = 0.7818606083124273;
    msg.state.set(tmp_msg_0);
    msg.type = 33U;

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
    msg.setTimeStamp(0.13045572630939828);
    msg.setSource(8970U);
    msg.setSourceEntity(136U);
    msg.setDestination(46195U);
    msg.setDestinationEntity(253U);
    msg.value = 0.13567867221171315;

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
    msg.setTimeStamp(0.629051520065787);
    msg.setSource(42911U);
    msg.setSourceEntity(251U);
    msg.setDestination(7072U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8761760110456825;

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
    msg.setTimeStamp(0.7583447626133497);
    msg.setSource(5944U);
    msg.setSourceEntity(193U);
    msg.setDestination(11394U);
    msg.setDestinationEntity(38U);
    msg.value = 0.8474989918372225;

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
    msg.setTimeStamp(0.20080142152242686);
    msg.setSource(271U);
    msg.setSourceEntity(94U);
    msg.setDestination(26214U);
    msg.setDestinationEntity(21U);
    msg.value = 0.42933358036245917;

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
    msg.setTimeStamp(0.8055041007053393);
    msg.setSource(26973U);
    msg.setSourceEntity(168U);
    msg.setDestination(40103U);
    msg.setDestinationEntity(51U);
    msg.value = 0.8763378524250461;

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
    msg.setTimeStamp(0.7447195972325436);
    msg.setSource(12945U);
    msg.setSourceEntity(152U);
    msg.setDestination(25487U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7971922485615786;

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
    msg.setTimeStamp(0.277071214743286);
    msg.setSource(58099U);
    msg.setSourceEntity(219U);
    msg.setDestination(56992U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6456259023482644;

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
    msg.setTimeStamp(0.12842537863121462);
    msg.setSource(17231U);
    msg.setSourceEntity(227U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(174U);
    msg.value = 0.08978140922551192;

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
    msg.setTimeStamp(0.13973792932199802);
    msg.setSource(19530U);
    msg.setSourceEntity(113U);
    msg.setDestination(12651U);
    msg.setDestinationEntity(149U);
    msg.value = 0.6722405375032825;

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
    msg.setTimeStamp(0.8609766531833055);
    msg.setSource(15064U);
    msg.setSourceEntity(211U);
    msg.setDestination(18761U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8541417712217576;

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
    msg.setTimeStamp(0.7815289081141688);
    msg.setSource(30895U);
    msg.setSourceEntity(235U);
    msg.setDestination(43270U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5763037428278046;

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
    msg.setTimeStamp(0.3804554500329542);
    msg.setSource(7853U);
    msg.setSourceEntity(227U);
    msg.setDestination(44133U);
    msg.setDestinationEntity(60U);
    msg.value = 0.1396340090208471;

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
    msg.setTimeStamp(0.008149709229446245);
    msg.setSource(21100U);
    msg.setSourceEntity(50U);
    msg.setDestination(13581U);
    msg.setDestinationEntity(215U);
    msg.value = 0.28989265835696765;

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
    msg.setTimeStamp(0.8508005562413599);
    msg.setSource(39700U);
    msg.setSourceEntity(185U);
    msg.setDestination(3492U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9708028076501096;

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
    msg.setTimeStamp(0.33610833487020686);
    msg.setSource(15248U);
    msg.setSourceEntity(197U);
    msg.setDestination(1588U);
    msg.setDestinationEntity(145U);
    msg.value = 0.4089030838573515;

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
    msg.setTimeStamp(0.2714707608278817);
    msg.setSource(33768U);
    msg.setSourceEntity(223U);
    msg.setDestination(29857U);
    msg.setDestinationEntity(111U);
    msg.id = 171U;
    msg.zoom = 205U;
    msg.action = 180U;

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
    msg.setTimeStamp(0.49069648209454075);
    msg.setSource(43817U);
    msg.setSourceEntity(76U);
    msg.setDestination(24715U);
    msg.setDestinationEntity(198U);
    msg.id = 108U;
    msg.zoom = 183U;
    msg.action = 251U;

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
    msg.setTimeStamp(0.7576347577188519);
    msg.setSource(42005U);
    msg.setSourceEntity(215U);
    msg.setDestination(30204U);
    msg.setDestinationEntity(60U);
    msg.id = 62U;
    msg.zoom = 171U;
    msg.action = 134U;

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
    msg.setTimeStamp(0.9330081377200543);
    msg.setSource(12452U);
    msg.setSourceEntity(157U);
    msg.setDestination(10935U);
    msg.setDestinationEntity(181U);
    msg.id = 101U;
    msg.value = 0.5709798847570032;

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
    msg.setTimeStamp(0.7796681710344553);
    msg.setSource(5204U);
    msg.setSourceEntity(137U);
    msg.setDestination(40365U);
    msg.setDestinationEntity(118U);
    msg.id = 83U;
    msg.value = 0.17844444088849598;

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
    msg.setTimeStamp(0.4375747670290062);
    msg.setSource(26706U);
    msg.setSourceEntity(94U);
    msg.setDestination(6226U);
    msg.setDestinationEntity(183U);
    msg.id = 169U;
    msg.value = 0.5220966167237887;

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
    msg.setTimeStamp(0.9941046163586119);
    msg.setSource(63561U);
    msg.setSourceEntity(82U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(205U);
    msg.id = 198U;
    msg.value = 0.2630181812839357;

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
    msg.setTimeStamp(0.9724648487423098);
    msg.setSource(3084U);
    msg.setSourceEntity(146U);
    msg.setDestination(9379U);
    msg.setDestinationEntity(59U);
    msg.id = 63U;
    msg.value = 0.29482837810600726;

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
    msg.setTimeStamp(0.7270824462837635);
    msg.setSource(39971U);
    msg.setSourceEntity(91U);
    msg.setDestination(45445U);
    msg.setDestinationEntity(137U);
    msg.id = 54U;
    msg.value = 0.5870596922730605;

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
    msg.setTimeStamp(0.24756221309669812);
    msg.setSource(37465U);
    msg.setSourceEntity(66U);
    msg.setDestination(6189U);
    msg.setDestinationEntity(203U);
    msg.id = 145U;
    msg.angle = 0.8947500654308611;

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
    msg.setTimeStamp(0.5068882628915394);
    msg.setSource(27996U);
    msg.setSourceEntity(33U);
    msg.setDestination(59280U);
    msg.setDestinationEntity(174U);
    msg.id = 170U;
    msg.angle = 0.6960034060422515;

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
    msg.setTimeStamp(0.9071378327355542);
    msg.setSource(27321U);
    msg.setSourceEntity(77U);
    msg.setDestination(63641U);
    msg.setDestinationEntity(56U);
    msg.id = 254U;
    msg.angle = 0.7608706101514506;

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
    msg.setTimeStamp(0.8051508777952333);
    msg.setSource(44829U);
    msg.setSourceEntity(44U);
    msg.setDestination(63448U);
    msg.setDestinationEntity(245U);
    msg.op = 115U;
    msg.actions.assign("ENYENURECFNJLZFLSCIEZZWWCBUPOFQUPZDATFKUNFLJKRAWGVLSGVAYVCGYYXOUKJXGTYWBFRSRGJJ");

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
    msg.setTimeStamp(0.38350832695372994);
    msg.setSource(38614U);
    msg.setSourceEntity(91U);
    msg.setDestination(2990U);
    msg.setDestinationEntity(51U);
    msg.op = 202U;
    msg.actions.assign("CFJLSZEXOBYPHQKMZWJSFGEBBOZFTWJMCBMWCFWPZVXCOCCAKRGLVFNQSYTWOLHZQSB");

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
    msg.setTimeStamp(0.9322318755360564);
    msg.setSource(36331U);
    msg.setSourceEntity(66U);
    msg.setDestination(31391U);
    msg.setDestinationEntity(138U);
    msg.op = 185U;
    msg.actions.assign("NNYQSBKYPELIFSQTGUUIVVESARHVSSEWAHMCKVXRWFMTAJXMJJEAWMAOHTSCQJRMZPMQWKVKPXTUKKGPKQBHGRVZIOKWOYZTCUAGCCQOVJDYFBRPTPIBJXNIRNKOFRQVADIEYUNEMMQNAXELUULOPNBEYZWDIWJYNEYTIVOHNDDGXCUTBXGZGHHZDRCTLHYXGZLX");

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
    msg.setTimeStamp(0.18099033627724193);
    msg.setSource(65094U);
    msg.setSourceEntity(36U);
    msg.setDestination(35664U);
    msg.setDestinationEntity(36U);
    msg.actions.assign("QSHRFMTNNCXDNKOBZZDTNPFWGDFGVRBBIWWTOHYAAKFPDOWAYQYTNRDZTQKMAYRVHFTLPVVAZHYABCZSKSQDZQUAEOVRJLNRYFGEPCHSGEJPVBJXZERTNDJMCVWHNFXZRUPCGBYPMVIKMCJTHIKRSUZGLPRHIWPAVSXFLSOUMILMIPCTQQKWOUJSLHLXDBQEBWOGIHLLKOQWYKXNMBQISBEMYUXDOWN");

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
    msg.setTimeStamp(0.08545852618600336);
    msg.setSource(45500U);
    msg.setSourceEntity(131U);
    msg.setDestination(41549U);
    msg.setDestinationEntity(128U);
    msg.actions.assign("YHYCOFDMERWCSPZUIXXVVWGPBZAWDSCFZXQRNTKGBJIIKYYJMEWOEJAQEDMRGVPUWJKNFDBKUYIBTDGZDWAHELHLMMHULTDJISMPFYBGOLHUALPTFVCEIOFCBIPPGXJCMIDJOZXBXXQHKLDQGNXBRPCHPVQBYNSZNOOACASXQKYVBGAPULSQQYGZLEZMTRITHENFNTQLSSW");

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
    msg.setTimeStamp(0.9863905744529825);
    msg.setSource(20063U);
    msg.setSourceEntity(240U);
    msg.setDestination(54806U);
    msg.setDestinationEntity(215U);
    msg.actions.assign("CSMALFQFTHYTOBPSAARUDVOJPAEKQCGFUMOMUEOOSJPNESQDGCISKZBCFXYCVNIOXRLKIDVFTLFJBANSGFQNZGEUILWTPFUCLJKXMKTY");

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
    msg.setTimeStamp(0.2595099381812068);
    msg.setSource(27174U);
    msg.setSourceEntity(204U);
    msg.setDestination(15646U);
    msg.setDestinationEntity(228U);
    msg.button = 112U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.3765212690896578);
    msg.setSource(43441U);
    msg.setSourceEntity(229U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(146U);
    msg.button = 93U;
    msg.value = 214U;

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
    msg.setTimeStamp(0.5851566488401045);
    msg.setSource(57042U);
    msg.setSourceEntity(185U);
    msg.setDestination(43717U);
    msg.setDestinationEntity(27U);
    msg.button = 94U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.3890041152606746);
    msg.setSource(49660U);
    msg.setSourceEntity(220U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(143U);
    msg.op = 252U;
    msg.text.assign("ABCNREGKUAPFCHUMPBEKEVXYMTZJBQOAGOXCMCFJEERXXIGVYJSVUDZVPTISCLDBBRIKDWSHWHLQWTQRL");

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
    msg.setTimeStamp(0.7405840151874797);
    msg.setSource(39704U);
    msg.setSourceEntity(232U);
    msg.setDestination(10451U);
    msg.setDestinationEntity(45U);
    msg.op = 188U;
    msg.text.assign("YRMOQXAIZDKQOXPBATNAZUHJVATVSNWVLSINLDBSFSQBRTGMHMQICERGORJIUPPRHODUPHSACJKFGMLRSCDEJCBLVINNXLUEDPWSTGOMOKKEYFMKCSMZGBSHYTQXWAYJQCUXFZHZPYZHTNIGMLIWEJACKZBBFOLEIOLXUGCCUBUDRDJWXEHFEDQXLEV");

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
    msg.setTimeStamp(0.8007573673212034);
    msg.setSource(40034U);
    msg.setSourceEntity(171U);
    msg.setDestination(16231U);
    msg.setDestinationEntity(7U);
    msg.op = 219U;
    msg.text.assign("OJIZGICJBFJSVZXDVLZNTGWRIYJKMDVZKXRMPERLQMDIUKTAHUTUMMAZCAFHENGCBOYRVIWQMXOCPBKRAUZBOHTTURULVWWKJZNQRHEXXFGWBJFEHGETFSCUYMDOOFLCPKWVQDMXGGFSUPAJVEYLCDOFQPLPPKNIHBMRZYQESXPQXYUAGYNJOWYHQSBCOWILDXZAVTYDVWSMNRGEHANKHUBHKLLJISNIXQOFTTVAEPZSTNLBRKPDA");

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
    msg.setTimeStamp(0.09583106347347148);
    msg.setSource(3370U);
    msg.setSourceEntity(210U);
    msg.setDestination(57316U);
    msg.setDestinationEntity(223U);
    msg.op = 95U;
    msg.time_remain = 0.8642866621647599;
    msg.sched_time = 0.1802378311289683;

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
    msg.setTimeStamp(0.6741103204149959);
    msg.setSource(50699U);
    msg.setSourceEntity(17U);
    msg.setDestination(25252U);
    msg.setDestinationEntity(170U);
    msg.op = 164U;
    msg.time_remain = 0.0799760390041232;
    msg.sched_time = 0.03295057873439866;

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
    msg.setTimeStamp(0.24853059656014898);
    msg.setSource(8634U);
    msg.setSourceEntity(49U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(5U);
    msg.op = 21U;
    msg.time_remain = 0.30734328739902594;
    msg.sched_time = 0.4434200005422968;

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
    msg.setTimeStamp(0.2828252695561869);
    msg.setSource(44727U);
    msg.setSourceEntity(12U);
    msg.setDestination(12421U);
    msg.setDestinationEntity(69U);
    msg.name.assign("IPUWXEFJSQSVJVONOLRYBTCMFGCJDRPFBWELTFKDSMHQTAQWCZAKBWUDBWGSVQBOITPZZMACCAYJAEBWHNOVYHWPEWHLZTNMGPCDSGVRUCXKOUZXXFYUJYIGGLABKEENNJNIKZGVXUNQIRVYGBDDKTCWUERTXMZNCBAUYOOSFSYKMKLPOWESIGRUTLKQZRELODXFNMFSPMHFGVATDQIZ");
    msg.op = 59U;
    msg.sched_time = 0.9288409689460465;

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
    msg.setTimeStamp(0.6896561121182325);
    msg.setSource(50278U);
    msg.setSourceEntity(82U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(36U);
    msg.name.assign("HEJQOAAGKVWYZTIMXIQTKFACSJUNKITAQBLDDPMJFCUUR");
    msg.op = 161U;
    msg.sched_time = 0.013673554585890146;

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
    msg.setTimeStamp(0.9167450592377441);
    msg.setSource(17458U);
    msg.setSourceEntity(216U);
    msg.setDestination(8270U);
    msg.setDestinationEntity(177U);
    msg.name.assign("HZTUVBHDNLPRMXFSHJDVADUPFBSCAYVXWIRVZRXKRGUFHEPAOPCIJEOESQBOFWCCOYQYCWATMAMGPPYOIRTIDZZVEPEXHJCQLWTNHOZMXNNZUJQDIDGGXRFAULNNHQUILWDQSDEQHYITWLZFBUGCRUDWRPEMQKHCBIUSZVQEBYOLESTJMTKAGVBKXXZFJTT");
    msg.op = 91U;
    msg.sched_time = 0.7514828056034996;

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
    msg.setTimeStamp(0.1984414574430724);
    msg.setSource(11499U);
    msg.setSourceEntity(182U);
    msg.setDestination(36971U);
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
    msg.setTimeStamp(0.06018789034839234);
    msg.setSource(31906U);
    msg.setSourceEntity(147U);
    msg.setDestination(26053U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.10017546561605195);
    msg.setSource(57045U);
    msg.setSourceEntity(128U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.9104678588858601);
    msg.setSource(38126U);
    msg.setSourceEntity(242U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(33U);
    msg.name.assign("WXNMIZNNKUGBXEJHOERMAKM");
    msg.state = 102U;

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
    msg.setTimeStamp(0.79338742945974);
    msg.setSource(10638U);
    msg.setSourceEntity(63U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(146U);
    msg.name.assign("JWJBANUWOEZCIVVNOLPKNMUBDXQSAPGEQYSSVZQNSIWVXBXUQJHFGJHUEFEBHCGSUNYMERQWULBRHZZXUZSBGKGKHAZQCPVPLTIDLRCAOUQTWWJLTTYIDMMVWIHYIOAIXKYIEPPUORLLLHOKFCXODZDRSRMRDKNAWCYKCEMWMJTG");
    msg.state = 179U;

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
    msg.setTimeStamp(0.33262961645474787);
    msg.setSource(52817U);
    msg.setSourceEntity(91U);
    msg.setDestination(22439U);
    msg.setDestinationEntity(140U);
    msg.name.assign("THIYGCRGTSNPHQREKYDYDZUXNTXWPGVCLN");
    msg.state = 66U;

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
    msg.setTimeStamp(0.686279577728481);
    msg.setSource(17370U);
    msg.setSourceEntity(193U);
    msg.setDestination(47799U);
    msg.setDestinationEntity(216U);
    msg.name.assign("NLWSPRPZERKDAIIYSCJJWSYAHVNGDLUBFKEJOHKEDQNUDHMCSOABKBLAMMGLNMUXCXDVSPKOIRBFYYHQTTJULMGOVFNACMZBLAYXJPTKCRHIIDFWWLUQYRZXSSQANUVKJFIZWPRKQPCGDPHSHTFCVZDPZTAPBUCWAXVMYSTVRCPFRTQQOVDMEWIXYHBGECTAQTIGRLOFJZXQJXOEXETKEVZOOMVUXGUZYQU");
    msg.value = 19U;

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
    msg.setTimeStamp(0.3628542183377069);
    msg.setSource(62179U);
    msg.setSourceEntity(91U);
    msg.setDestination(8043U);
    msg.setDestinationEntity(166U);
    msg.name.assign("MEDZJGNCLNBDMZYQRQZKOGUEBIYLMSKQEIVROVPGYBBXRTGWOTCMFDZUQFLPETZGJVUSTHCIKFNQTPPAFMUFBAFFCVKEKPLJDEAJWMNBCWQCJNLWUXSQKOJXVVEQHITR");
    msg.value = 226U;

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
    msg.setTimeStamp(0.9986522024437212);
    msg.setSource(17348U);
    msg.setSourceEntity(38U);
    msg.setDestination(36763U);
    msg.setDestinationEntity(33U);
    msg.name.assign("GKKMBOUAKCNSGZOUCTIQJMFDNJIHJFDWARCSSKCYGWIAGJHNFCPHEZFHIWNBRYMTLVMDEVZKASGBIXRDS");
    msg.value = 194U;

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
    msg.setTimeStamp(0.26320155510397736);
    msg.setSource(20002U);
    msg.setSourceEntity(115U);
    msg.setDestination(23418U);
    msg.setDestinationEntity(26U);
    msg.name.assign("GXAUGTSALIPVTUFMHVUHXDUZXNTDASFROUWKKZMJRYBJYOZNOIANYRQKCAFABLHTXGFQWXEUDXNJIRPOGWOCJEIVBCZATFYFNRAPEZVXCHIBDTPPPATMWMMPGRAWHYRGHSRBNTGYVFSWEWXBUQFJYJEJLVFSQMWZQTRESSFMSRLYBVOXCUHUCCXDHEDILGUKMZVNQDDHBVBNLKPWJSYLQKEDPZPHLMLO");

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
    msg.setTimeStamp(0.4222439094747089);
    msg.setSource(16750U);
    msg.setSourceEntity(79U);
    msg.setDestination(28222U);
    msg.setDestinationEntity(225U);
    msg.name.assign("IIVBFTMLJYIANLHCWPSYDSVVWAOUWBGAJOMQNSLZKPMDLGCOYZAJEPFYQSJTQEUAZSKHMWQNIFCXIOKYDBDLDCQRNTNRELXRBWPVQKGBWAHPZBHFZCTGYNVGGJJKFPCRARTMEAISRDQZZKHOQDWODQGEEVGMROU");

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
    msg.setTimeStamp(0.022800441183876696);
    msg.setSource(56090U);
    msg.setSourceEntity(22U);
    msg.setDestination(38134U);
    msg.setDestinationEntity(73U);
    msg.name.assign("XXTFBNSLYJFKUYJWHM");

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
    msg.setTimeStamp(0.8602461221222221);
    msg.setSource(22979U);
    msg.setSourceEntity(194U);
    msg.setDestination(57427U);
    msg.setDestinationEntity(184U);
    msg.name.assign("TUIKGQEZJKEZGTSLVDTQDXDDTWIDGJAGEYMHVKKCNAWJKOPPOMUVPDSPQMKRXSYCGPHDZNNXJGXGPB");
    msg.value = 154U;

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
    msg.setTimeStamp(0.025203782801627828);
    msg.setSource(6237U);
    msg.setSourceEntity(172U);
    msg.setDestination(31861U);
    msg.setDestinationEntity(251U);
    msg.name.assign("GBZYLGRVPDSGBQFMCCUKELVEQYQPUHQHDSMRMWERRSCALLIDWAYENIKHLPGJGNKCUKTFOVTVGSDHOYWTMYLQUURJUNDXQFPXWAYGGEJPETVHTWKBNVNZISJP");
    msg.value = 36U;

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
    msg.setTimeStamp(0.45187365680294855);
    msg.setSource(23969U);
    msg.setSourceEntity(98U);
    msg.setDestination(38693U);
    msg.setDestinationEntity(152U);
    msg.name.assign("KDNLHDCNIFNNQMVGEYUWCPWISLWGBOVAQZECULGBVLFKJUZPXUAHWKFVWTSHVXRFZTSXJZJAMYVYLVMEMTCEIJIEUMAZMOGVDWSDKCBNQODHHRANBRJWFAFMRTKNLOHFWOFBIGIXRYKXKICWRSDIEJCNZPBZLUKRMTSPDMRWTQZGUGASBPTYZBTTYLKOQAOUXYLUKYJQXNPUOIXQFYCGHNSOREHXAZOBPDVMQG");
    msg.value = 211U;

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
    msg.setTimeStamp(0.36124355457891477);
    msg.setSource(63851U);
    msg.setSourceEntity(70U);
    msg.setDestination(61566U);
    msg.setDestinationEntity(163U);
    msg.id = 154U;
    msg.period = 3613744505U;
    msg.duty_cycle = 450409014U;

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
    msg.setTimeStamp(0.6352851097235398);
    msg.setSource(44682U);
    msg.setSourceEntity(237U);
    msg.setDestination(53996U);
    msg.setDestinationEntity(143U);
    msg.id = 146U;
    msg.period = 1332880721U;
    msg.duty_cycle = 3936009341U;

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
    msg.setTimeStamp(0.37157790357955456);
    msg.setSource(31578U);
    msg.setSourceEntity(80U);
    msg.setDestination(2320U);
    msg.setDestinationEntity(146U);
    msg.id = 252U;
    msg.period = 592994357U;
    msg.duty_cycle = 2799813903U;

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
    msg.setTimeStamp(0.11945455577776998);
    msg.setSource(48206U);
    msg.setSourceEntity(124U);
    msg.setDestination(49530U);
    msg.setDestinationEntity(106U);
    msg.id = 233U;
    msg.period = 982231786U;
    msg.duty_cycle = 4253556814U;

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
    msg.setTimeStamp(0.9228035163484511);
    msg.setSource(38938U);
    msg.setSourceEntity(21U);
    msg.setDestination(45065U);
    msg.setDestinationEntity(25U);
    msg.id = 29U;
    msg.period = 3343100057U;
    msg.duty_cycle = 930533209U;

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
    msg.setTimeStamp(0.8678694843757472);
    msg.setSource(25878U);
    msg.setSourceEntity(21U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(117U);
    msg.id = 160U;
    msg.period = 2742394490U;
    msg.duty_cycle = 3512857848U;

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
    msg.setTimeStamp(0.8337390827939802);
    msg.setSource(64022U);
    msg.setSourceEntity(82U);
    msg.setDestination(53324U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.8881021032254738;
    msg.lon = 0.1301395732854247;
    msg.height = 0.2655175996232577;
    msg.x = 0.7760530887135422;
    msg.y = 0.8240568371788191;
    msg.z = 0.7875413463654974;
    msg.phi = 0.003669760499657726;
    msg.theta = 0.3397345168575294;
    msg.psi = 0.4916996410189929;
    msg.u = 0.39489742993307253;
    msg.v = 0.6367844777161796;
    msg.w = 0.5100791201802464;
    msg.vx = 0.8968458275649306;
    msg.vy = 0.5930656052967561;
    msg.vz = 0.30694524036240467;
    msg.p = 0.979287368251018;
    msg.q = 0.07353808934843142;
    msg.r = 0.7463415341418556;
    msg.depth = 0.6829540355184023;
    msg.alt = 0.34671773988067867;

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
    msg.setTimeStamp(0.5503083727408836);
    msg.setSource(24523U);
    msg.setSourceEntity(28U);
    msg.setDestination(22330U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.15619711973315442;
    msg.lon = 0.4522095453060876;
    msg.height = 0.9764720006405425;
    msg.x = 0.5704507856743443;
    msg.y = 0.9238211545128184;
    msg.z = 0.8894684307851847;
    msg.phi = 0.1454808174417732;
    msg.theta = 0.962113296876073;
    msg.psi = 0.35567275655526664;
    msg.u = 0.9840252520884236;
    msg.v = 0.35500402554670274;
    msg.w = 0.37541226471912614;
    msg.vx = 0.8767156327797041;
    msg.vy = 0.4598099060683134;
    msg.vz = 0.6280912192463399;
    msg.p = 0.9769454170636592;
    msg.q = 0.7619662482537507;
    msg.r = 0.8496017397834753;
    msg.depth = 0.6366549348606674;
    msg.alt = 0.42728203827862454;

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
    msg.setTimeStamp(0.9138122382578896);
    msg.setSource(7636U);
    msg.setSourceEntity(239U);
    msg.setDestination(47867U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.025087155547076856;
    msg.lon = 0.62725352184969;
    msg.height = 0.44640438557726647;
    msg.x = 0.03962336324261895;
    msg.y = 0.20287333371380656;
    msg.z = 0.6785007155017737;
    msg.phi = 0.6642423138195824;
    msg.theta = 0.5406555970259407;
    msg.psi = 0.8844978300663893;
    msg.u = 0.8482717155959733;
    msg.v = 0.3450340224669258;
    msg.w = 0.6788955949765982;
    msg.vx = 0.5648559183503358;
    msg.vy = 0.03255456271863788;
    msg.vz = 0.3698551917252759;
    msg.p = 0.1710585677459906;
    msg.q = 0.6144216930110852;
    msg.r = 0.05100539025365369;
    msg.depth = 0.6095321656644077;
    msg.alt = 0.3802234387252983;

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
    msg.setTimeStamp(0.6544352235921876);
    msg.setSource(51625U);
    msg.setSourceEntity(63U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(62U);
    msg.x = 0.14254192734023818;
    msg.y = 0.17500649358923326;
    msg.z = 0.796254651692843;

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
    msg.setTimeStamp(0.8523996194363712);
    msg.setSource(18191U);
    msg.setSourceEntity(166U);
    msg.setDestination(31523U);
    msg.setDestinationEntity(122U);
    msg.x = 0.5237688446958433;
    msg.y = 0.10453912902958873;
    msg.z = 0.019738233745338785;

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
    msg.setTimeStamp(0.211286388730486);
    msg.setSource(13714U);
    msg.setSourceEntity(14U);
    msg.setDestination(50175U);
    msg.setDestinationEntity(59U);
    msg.x = 0.4985540344889835;
    msg.y = 0.8396090248989236;
    msg.z = 0.8645407221054165;

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
    msg.setTimeStamp(0.14141550198588781);
    msg.setSource(20082U);
    msg.setSourceEntity(110U);
    msg.setDestination(53240U);
    msg.setDestinationEntity(103U);
    msg.value = 0.899197078084981;

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
    msg.setTimeStamp(0.2738743725811419);
    msg.setSource(60782U);
    msg.setSourceEntity(45U);
    msg.setDestination(28977U);
    msg.setDestinationEntity(57U);
    msg.value = 0.21230207883213426;

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
    msg.setTimeStamp(0.11182159633849031);
    msg.setSource(26403U);
    msg.setSourceEntity(229U);
    msg.setDestination(391U);
    msg.setDestinationEntity(20U);
    msg.value = 0.6770117517476818;

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
    msg.setTimeStamp(0.16286685120677125);
    msg.setSource(37420U);
    msg.setSourceEntity(247U);
    msg.setDestination(18570U);
    msg.setDestinationEntity(250U);
    msg.value = 0.15706178350903421;

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
    msg.setTimeStamp(0.6746884497475578);
    msg.setSource(56020U);
    msg.setSourceEntity(4U);
    msg.setDestination(39728U);
    msg.setDestinationEntity(93U);
    msg.value = 0.021072481497086515;

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
    msg.setTimeStamp(0.7230969661413642);
    msg.setSource(35938U);
    msg.setSourceEntity(26U);
    msg.setDestination(5606U);
    msg.setDestinationEntity(234U);
    msg.value = 0.49533148134598304;

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
    msg.setTimeStamp(0.13231366398671474);
    msg.setSource(39195U);
    msg.setSourceEntity(165U);
    msg.setDestination(27181U);
    msg.setDestinationEntity(105U);
    msg.x = 0.04190126561338536;
    msg.y = 0.7668476280007532;
    msg.z = 0.5272187189132778;
    msg.phi = 0.506378854226471;
    msg.theta = 0.5849912335050875;
    msg.psi = 0.30208378920582946;
    msg.p = 0.10318836758020111;
    msg.q = 0.22601856385354724;
    msg.r = 0.8698227999958339;
    msg.u = 0.36784637684962684;
    msg.v = 0.51136633309558;
    msg.w = 0.8968584348912929;
    msg.bias_psi = 0.43394294614495643;
    msg.bias_r = 0.7137076484939823;

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
    msg.setTimeStamp(0.4353901084736985);
    msg.setSource(61420U);
    msg.setSourceEntity(114U);
    msg.setDestination(26819U);
    msg.setDestinationEntity(244U);
    msg.x = 0.4424086425826921;
    msg.y = 0.999250906576987;
    msg.z = 0.7052535648861467;
    msg.phi = 0.8392328335390692;
    msg.theta = 0.25106689954820616;
    msg.psi = 0.9159138643759559;
    msg.p = 0.0005358895247736806;
    msg.q = 0.48756254977424296;
    msg.r = 0.7137666638989976;
    msg.u = 0.6692407162447945;
    msg.v = 0.6912675698682998;
    msg.w = 0.4143141933634791;
    msg.bias_psi = 0.9192944246059557;
    msg.bias_r = 0.06457854048085321;

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
    msg.setTimeStamp(0.9989478961242412);
    msg.setSource(21892U);
    msg.setSourceEntity(106U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(96U);
    msg.x = 0.012627934340307623;
    msg.y = 0.07586839652940103;
    msg.z = 0.2068565159407202;
    msg.phi = 0.6458278636406483;
    msg.theta = 0.969620229173108;
    msg.psi = 0.5194890139730807;
    msg.p = 0.698341505732854;
    msg.q = 0.2156908297357092;
    msg.r = 0.12251941233492769;
    msg.u = 0.11981360826185605;
    msg.v = 0.52669271064223;
    msg.w = 0.5690615905943982;
    msg.bias_psi = 0.49044376195826866;
    msg.bias_r = 0.05425761332126833;

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
    msg.setTimeStamp(0.5641830553058533);
    msg.setSource(2641U);
    msg.setSourceEntity(187U);
    msg.setDestination(27779U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.6819650005985509;
    msg.bias_r = 0.5962563010989504;
    msg.cog = 0.590192253202077;
    msg.cyaw = 0.3025463256435852;
    msg.lbl_rej_level = 0.21009756894388643;
    msg.gps_rej_level = 0.7675395268646863;
    msg.custom_x = 0.7082660830526515;
    msg.custom_y = 0.8045097284566062;
    msg.custom_z = 0.7505956008539199;

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
    msg.setTimeStamp(0.6517701455400065);
    msg.setSource(61055U);
    msg.setSourceEntity(45U);
    msg.setDestination(21647U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.5616092181124344;
    msg.bias_r = 0.8535503449523656;
    msg.cog = 0.17213071739665364;
    msg.cyaw = 0.2179907841868155;
    msg.lbl_rej_level = 0.8999802629575984;
    msg.gps_rej_level = 0.8007455399096025;
    msg.custom_x = 0.20643144168296224;
    msg.custom_y = 0.3177354450817751;
    msg.custom_z = 0.9819204005271445;

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
    msg.setTimeStamp(0.23386954397961612);
    msg.setSource(14337U);
    msg.setSourceEntity(37U);
    msg.setDestination(61899U);
    msg.setDestinationEntity(247U);
    msg.bias_psi = 0.920588420913406;
    msg.bias_r = 0.6866681403973881;
    msg.cog = 0.6302163967465186;
    msg.cyaw = 0.9338896902200663;
    msg.lbl_rej_level = 0.7937971980144126;
    msg.gps_rej_level = 0.9748627628629388;
    msg.custom_x = 0.5977608541243015;
    msg.custom_y = 0.3489603624206774;
    msg.custom_z = 0.8754929589273446;

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
    msg.setTimeStamp(0.1847835118610225);
    msg.setSource(2485U);
    msg.setSourceEntity(216U);
    msg.setDestination(33276U);
    msg.setDestinationEntity(193U);
    msg.utc_time = 0.9305207003939489;
    msg.reason = 159U;

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
    msg.setTimeStamp(0.48198246358063646);
    msg.setSource(63515U);
    msg.setSourceEntity(43U);
    msg.setDestination(10165U);
    msg.setDestinationEntity(76U);
    msg.utc_time = 0.06070602047573026;
    msg.reason = 25U;

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
    msg.setTimeStamp(0.0591588619364245);
    msg.setSource(33879U);
    msg.setSourceEntity(186U);
    msg.setDestination(56037U);
    msg.setDestinationEntity(3U);
    msg.utc_time = 0.654500513730468;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.7293172812415457);
    msg.setSource(28535U);
    msg.setSourceEntity(104U);
    msg.setDestination(29871U);
    msg.setDestinationEntity(178U);
    msg.id = 36U;
    msg.range = 0.1391900359769993;
    msg.acceptance = 189U;

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
    msg.setTimeStamp(0.07238362982771318);
    msg.setSource(37846U);
    msg.setSourceEntity(44U);
    msg.setDestination(65103U);
    msg.setDestinationEntity(99U);
    msg.id = 109U;
    msg.range = 0.044763641962436096;
    msg.acceptance = 152U;

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
    msg.setTimeStamp(0.26024127957984033);
    msg.setSource(27854U);
    msg.setSourceEntity(10U);
    msg.setDestination(35720U);
    msg.setDestinationEntity(54U);
    msg.id = 242U;
    msg.range = 0.40389260616766043;
    msg.acceptance = 184U;

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
    msg.setTimeStamp(0.5380299592756701);
    msg.setSource(36471U);
    msg.setSourceEntity(76U);
    msg.setDestination(63717U);
    msg.setDestinationEntity(144U);
    msg.type = 153U;
    msg.reason = 246U;
    msg.value = 0.0589463405587205;
    msg.timestep = 0.8793360957865081;

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
    msg.setTimeStamp(0.12290821053957746);
    msg.setSource(2665U);
    msg.setSourceEntity(128U);
    msg.setDestination(59307U);
    msg.setDestinationEntity(155U);
    msg.type = 63U;
    msg.reason = 72U;
    msg.value = 0.5084739146454239;
    msg.timestep = 0.06300726379265542;

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
    msg.setTimeStamp(0.03106589532182702);
    msg.setSource(50182U);
    msg.setSourceEntity(252U);
    msg.setDestination(51631U);
    msg.setDestinationEntity(73U);
    msg.type = 181U;
    msg.reason = 121U;
    msg.value = 0.7573575272522253;
    msg.timestep = 0.19379604672951234;

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
    msg.setTimeStamp(0.458517454801195);
    msg.setSource(58572U);
    msg.setSourceEntity(77U);
    msg.setDestination(5041U);
    msg.setDestinationEntity(174U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WYJTGTLVBANGWJLDSJRJVJDOVNESOGUHDTZQOQKAPMXJHTIRTSSDKLROEWBFSZMCJZEY");
    tmp_msg_0.lat = 0.7781577240430955;
    tmp_msg_0.lon = 0.17449242786752195;
    tmp_msg_0.depth = 0.9294898937840861;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 223U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9184259566643425;
    msg.y = 0.8961715050233964;
    msg.var_x = 0.4887887557547431;
    msg.var_y = 0.6556522728404186;
    msg.distance = 0.06831590361627327;

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
    msg.setTimeStamp(0.5688460690406059);
    msg.setSource(40073U);
    msg.setSourceEntity(26U);
    msg.setDestination(18861U);
    msg.setDestinationEntity(21U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HFDXZKXSBXZXWROFQEALRUNLIZOPVJAVGQGZTVZBNACMKBDWPRQSPXCUILGEGHLRIWWUVNYICMPKPYMHYDAPRQPZO");
    tmp_msg_0.lat = 0.7728696506942427;
    tmp_msg_0.lon = 0.5549671893537576;
    tmp_msg_0.depth = 0.39269752953028003;
    tmp_msg_0.query_channel = 212U;
    tmp_msg_0.reply_channel = 98U;
    tmp_msg_0.transponder_delay = 149U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.881536213279527;
    msg.y = 0.06423161244919862;
    msg.var_x = 0.5850049527866977;
    msg.var_y = 0.8288045194393853;
    msg.distance = 0.966030877713718;

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
    msg.setTimeStamp(0.536811651591755);
    msg.setSource(28458U);
    msg.setSourceEntity(124U);
    msg.setDestination(45102U);
    msg.setDestinationEntity(214U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AVJKEEWTBIVERGRJOIQJCGMLBPWVNQZBTCLSRQOEGIJUHYKBRYXYRXWZOJQMSISCQDZHDNNFELATQWLQDLOJWCAMMJNBKWFTDSPEXYHDQXPGYNKAPIVAVGXHZUUFQEPQZCCURUWGKPTOIBSHMCUDTRXSUNKRBDLUMDSAUVJOAXMHAEPZTGCVSYPIPWZGDKLHDBLOFNKFXMWHVMZIEUJFOSELYSNHZYWKXOJVRNB");
    tmp_msg_0.lat = 0.26472180525488265;
    tmp_msg_0.lon = 0.889466491182577;
    tmp_msg_0.depth = 0.33243009743765606;
    tmp_msg_0.query_channel = 205U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 11U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6705796936212047;
    msg.y = 0.7914122294522242;
    msg.var_x = 0.4615028729604578;
    msg.var_y = 0.6349845479905984;
    msg.distance = 0.7095446268616333;

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
    msg.setTimeStamp(0.6517817420857887);
    msg.setSource(28839U);
    msg.setSourceEntity(36U);
    msg.setDestination(6511U);
    msg.setDestinationEntity(143U);
    msg.state = 15U;

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
    msg.setTimeStamp(0.7100893729269179);
    msg.setSource(32308U);
    msg.setSourceEntity(147U);
    msg.setDestination(64068U);
    msg.setDestinationEntity(217U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.12279059198970754);
    msg.setSource(34385U);
    msg.setSourceEntity(94U);
    msg.setDestination(33901U);
    msg.setDestinationEntity(38U);
    msg.state = 17U;

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
    msg.setTimeStamp(0.0797498766650353);
    msg.setSource(36790U);
    msg.setSourceEntity(101U);
    msg.setDestination(16366U);
    msg.setDestinationEntity(2U);
    msg.x = 0.5997191124912762;
    msg.y = 0.23608096782221055;
    msg.z = 0.7117178229384402;

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
    msg.setTimeStamp(0.2993731118378181);
    msg.setSource(33675U);
    msg.setSourceEntity(161U);
    msg.setDestination(16293U);
    msg.setDestinationEntity(48U);
    msg.x = 0.32697763578426886;
    msg.y = 0.5914575630254885;
    msg.z = 0.7016548059370437;

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
    msg.setTimeStamp(0.6529445354314828);
    msg.setSource(41194U);
    msg.setSourceEntity(21U);
    msg.setDestination(43260U);
    msg.setDestinationEntity(234U);
    msg.x = 0.6298640290723068;
    msg.y = 0.07869440004527184;
    msg.z = 0.7573996252191867;

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
    msg.setTimeStamp(0.08264440115279192);
    msg.setSource(26099U);
    msg.setSourceEntity(8U);
    msg.setDestination(52241U);
    msg.setDestinationEntity(176U);
    msg.va = 0.012211508842548957;
    msg.aoa = 0.3814279524290337;
    msg.ssa = 0.8488397684520335;

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
    msg.setTimeStamp(0.800458662107224);
    msg.setSource(5498U);
    msg.setSourceEntity(192U);
    msg.setDestination(45608U);
    msg.setDestinationEntity(78U);
    msg.va = 0.7799482096926161;
    msg.aoa = 0.6737532386322802;
    msg.ssa = 0.9557932494444138;

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
    msg.setTimeStamp(0.13130467455298322);
    msg.setSource(44602U);
    msg.setSourceEntity(41U);
    msg.setDestination(43331U);
    msg.setDestinationEntity(108U);
    msg.va = 0.46318220429915125;
    msg.aoa = 0.7415137491041783;
    msg.ssa = 0.6715657515572128;

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
    msg.setTimeStamp(0.474763936370204);
    msg.setSource(57260U);
    msg.setSourceEntity(166U);
    msg.setDestination(59259U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6675484615648773;

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
    msg.setTimeStamp(0.5105636614984032);
    msg.setSource(58368U);
    msg.setSourceEntity(199U);
    msg.setDestination(52375U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7602427180968956;

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
    msg.setTimeStamp(0.8219760031980405);
    msg.setSource(42011U);
    msg.setSourceEntity(12U);
    msg.setDestination(54402U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8082669964495648;

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
    msg.setTimeStamp(0.5639163508117077);
    msg.setSource(42548U);
    msg.setSourceEntity(162U);
    msg.setDestination(61646U);
    msg.setDestinationEntity(36U);
    msg.value = 0.06447787932018967;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.7468463185012708);
    msg.setSource(40017U);
    msg.setSourceEntity(244U);
    msg.setDestination(32764U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6432683497232278;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.7509518777256676);
    msg.setSource(109U);
    msg.setSourceEntity(128U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(138U);
    msg.value = 0.7690830758277527;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.3808197338591176);
    msg.setSource(54931U);
    msg.setSourceEntity(161U);
    msg.setDestination(24979U);
    msg.setDestinationEntity(201U);
    msg.value = 0.7648083475639165;
    msg.speed_units = 210U;

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
    msg.setTimeStamp(0.9206023403174736);
    msg.setSource(64716U);
    msg.setSourceEntity(107U);
    msg.setDestination(9098U);
    msg.setDestinationEntity(70U);
    msg.value = 0.0670142278578596;
    msg.speed_units = 188U;

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
    msg.setTimeStamp(0.4753105344593137);
    msg.setSource(46708U);
    msg.setSourceEntity(41U);
    msg.setDestination(21675U);
    msg.setDestinationEntity(71U);
    msg.value = 0.05256378316893395;
    msg.speed_units = 53U;

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
    msg.setTimeStamp(0.2958573488210575);
    msg.setSource(55393U);
    msg.setSourceEntity(108U);
    msg.setDestination(9971U);
    msg.setDestinationEntity(89U);
    msg.value = 0.652816740370776;

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
    msg.setTimeStamp(0.9637471997540983);
    msg.setSource(46024U);
    msg.setSourceEntity(164U);
    msg.setDestination(31562U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8907751933490433;

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
    msg.setTimeStamp(0.3474300517227442);
    msg.setSource(10397U);
    msg.setSourceEntity(54U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(51U);
    msg.value = 0.9632013820186295;

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
    msg.setTimeStamp(0.9016191204998478);
    msg.setSource(63240U);
    msg.setSourceEntity(89U);
    msg.setDestination(20413U);
    msg.setDestinationEntity(167U);
    msg.value = 0.27656852164405665;

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
    msg.setTimeStamp(0.2884197655572607);
    msg.setSource(49159U);
    msg.setSourceEntity(109U);
    msg.setDestination(48861U);
    msg.setDestinationEntity(15U);
    msg.value = 0.666761877723386;

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
    msg.setTimeStamp(0.026496714717459957);
    msg.setSource(44889U);
    msg.setSourceEntity(164U);
    msg.setDestination(23107U);
    msg.setDestinationEntity(215U);
    msg.value = 0.40616461896522416;

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
    msg.setTimeStamp(0.2513449210294678);
    msg.setSource(57606U);
    msg.setSourceEntity(0U);
    msg.setDestination(48070U);
    msg.setDestinationEntity(186U);
    msg.value = 0.09117171779864863;

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
    msg.setTimeStamp(0.856993301957943);
    msg.setSource(63791U);
    msg.setSourceEntity(97U);
    msg.setDestination(37353U);
    msg.setDestinationEntity(133U);
    msg.value = 0.5258556980691678;

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
    msg.setTimeStamp(0.8244966485927343);
    msg.setSource(27373U);
    msg.setSourceEntity(43U);
    msg.setDestination(13728U);
    msg.setDestinationEntity(211U);
    msg.value = 0.21061294180411572;

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
    msg.setTimeStamp(0.5471182409036741);
    msg.setSource(3705U);
    msg.setSourceEntity(194U);
    msg.setDestination(37349U);
    msg.setDestinationEntity(138U);
    msg.path_ref = 1490343419U;
    msg.start_lat = 0.10813144592842905;
    msg.start_lon = 0.6131132163415045;
    msg.start_z = 0.0681230519756516;
    msg.start_z_units = 6U;
    msg.end_lat = 0.6890074535598156;
    msg.end_lon = 0.9602699453823514;
    msg.end_z = 0.4934524423569008;
    msg.end_z_units = 138U;
    msg.speed = 0.9257889521691363;
    msg.speed_units = 193U;
    msg.lradius = 0.029365493956603816;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.7649581522010512);
    msg.setSource(45284U);
    msg.setSourceEntity(248U);
    msg.setDestination(36933U);
    msg.setDestinationEntity(243U);
    msg.path_ref = 1325190190U;
    msg.start_lat = 0.8880806746993242;
    msg.start_lon = 0.6347835640284738;
    msg.start_z = 0.5402798951896359;
    msg.start_z_units = 140U;
    msg.end_lat = 0.5740873831197824;
    msg.end_lon = 0.15997804952006156;
    msg.end_z = 0.7658154660532179;
    msg.end_z_units = 109U;
    msg.speed = 0.011820479224806557;
    msg.speed_units = 146U;
    msg.lradius = 0.7812638829560203;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.5511642974465273);
    msg.setSource(4831U);
    msg.setSourceEntity(128U);
    msg.setDestination(30758U);
    msg.setDestinationEntity(51U);
    msg.path_ref = 3096372649U;
    msg.start_lat = 0.5354143932381922;
    msg.start_lon = 0.8281041692031802;
    msg.start_z = 0.5216993990143102;
    msg.start_z_units = 108U;
    msg.end_lat = 0.36653248632028934;
    msg.end_lon = 0.31356550929794824;
    msg.end_z = 0.44274200733853064;
    msg.end_z_units = 205U;
    msg.speed = 0.5246562566992428;
    msg.speed_units = 194U;
    msg.lradius = 0.856156287884989;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.7480310393874535);
    msg.setSource(60438U);
    msg.setSourceEntity(172U);
    msg.setDestination(37320U);
    msg.setDestinationEntity(246U);
    msg.x = 0.43857011676409874;
    msg.y = 0.7228290661734106;
    msg.z = 0.08232374493270689;
    msg.k = 0.34955545812905553;
    msg.m = 0.5138188747330026;
    msg.n = 0.5818947530353247;
    msg.flags = 43U;

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
    msg.setTimeStamp(0.36087876643448424);
    msg.setSource(56709U);
    msg.setSourceEntity(205U);
    msg.setDestination(10098U);
    msg.setDestinationEntity(183U);
    msg.x = 0.9837442032760993;
    msg.y = 0.7207906411152268;
    msg.z = 0.4902951501227618;
    msg.k = 0.1128938817888765;
    msg.m = 0.6914606532625168;
    msg.n = 0.2360680988551036;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.1088891957722058);
    msg.setSource(22358U);
    msg.setSourceEntity(49U);
    msg.setDestination(64781U);
    msg.setDestinationEntity(164U);
    msg.x = 0.3903093114944226;
    msg.y = 0.43928056130453774;
    msg.z = 0.600423226632564;
    msg.k = 0.48371949928768;
    msg.m = 0.1867265971799147;
    msg.n = 0.3339849557347928;
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
    msg.setTimeStamp(0.40476266307032294);
    msg.setSource(58816U);
    msg.setSourceEntity(56U);
    msg.setDestination(58592U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9214909528932997;

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
    msg.setTimeStamp(0.9785099362620023);
    msg.setSource(55705U);
    msg.setSourceEntity(119U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(141U);
    msg.value = 0.9822034050470698;

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
    msg.setTimeStamp(0.48280044393039756);
    msg.setSource(45718U);
    msg.setSourceEntity(238U);
    msg.setDestination(30519U);
    msg.setDestinationEntity(36U);
    msg.value = 0.49239403546803884;

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
    msg.setTimeStamp(0.2645764324366012);
    msg.setSource(11899U);
    msg.setSourceEntity(175U);
    msg.setDestination(57601U);
    msg.setDestinationEntity(236U);
    msg.u = 0.17257146518645405;
    msg.v = 0.5678303355144031;
    msg.w = 0.08725960436476154;
    msg.p = 0.7816245610858243;
    msg.q = 0.46766630409155785;
    msg.r = 0.6180522453386134;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.07318187180061597);
    msg.setSource(16081U);
    msg.setSourceEntity(12U);
    msg.setDestination(62300U);
    msg.setDestinationEntity(10U);
    msg.u = 0.03047458623444388;
    msg.v = 0.7956927856963203;
    msg.w = 0.47672884346359035;
    msg.p = 0.33749524905861494;
    msg.q = 0.8999002587053961;
    msg.r = 0.24244380105281416;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.672879097763913);
    msg.setSource(5725U);
    msg.setSourceEntity(161U);
    msg.setDestination(61961U);
    msg.setDestinationEntity(111U);
    msg.u = 0.16566741794779083;
    msg.v = 0.6641097618591657;
    msg.w = 0.930626443415337;
    msg.p = 0.41809745381300567;
    msg.q = 0.7453309617460523;
    msg.r = 0.47408002586618236;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.7265955825082872);
    msg.setSource(53918U);
    msg.setSourceEntity(26U);
    msg.setDestination(51128U);
    msg.setDestinationEntity(239U);
    msg.path_ref = 1085325372U;
    msg.start_lat = 0.11551436336225207;
    msg.start_lon = 0.48739556345550517;
    msg.start_z = 0.8787825572221386;
    msg.start_z_units = 189U;
    msg.end_lat = 0.9459578353062769;
    msg.end_lon = 0.8405245270168963;
    msg.end_z = 0.5685388987618281;
    msg.end_z_units = 7U;
    msg.lradius = 0.8594240370377718;
    msg.flags = 207U;
    msg.x = 0.5205113100491092;
    msg.y = 0.321428010333326;
    msg.z = 0.36780698970937586;
    msg.vx = 0.3637123849978544;
    msg.vy = 0.8037375834484649;
    msg.vz = 0.77108185469963;
    msg.course_error = 0.279918133548689;
    msg.eta = 58771U;

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
    msg.setTimeStamp(0.46479104479046296);
    msg.setSource(16191U);
    msg.setSourceEntity(184U);
    msg.setDestination(64610U);
    msg.setDestinationEntity(181U);
    msg.path_ref = 2913729202U;
    msg.start_lat = 0.4160401679163652;
    msg.start_lon = 0.9352487540861683;
    msg.start_z = 0.6376560770295181;
    msg.start_z_units = 234U;
    msg.end_lat = 0.581228557692803;
    msg.end_lon = 0.5616546485991365;
    msg.end_z = 0.6793746813531333;
    msg.end_z_units = 164U;
    msg.lradius = 0.052442197336904806;
    msg.flags = 91U;
    msg.x = 0.809464371130127;
    msg.y = 0.8254148839567;
    msg.z = 0.5519780205216305;
    msg.vx = 0.02488743915028291;
    msg.vy = 0.4214980281539781;
    msg.vz = 0.028019362250053303;
    msg.course_error = 0.33087170192320725;
    msg.eta = 50212U;

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
    msg.setTimeStamp(0.6963379594388935);
    msg.setSource(30635U);
    msg.setSourceEntity(242U);
    msg.setDestination(30194U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 827616669U;
    msg.start_lat = 0.9192195958826789;
    msg.start_lon = 0.3745458482345091;
    msg.start_z = 0.2921015446389582;
    msg.start_z_units = 200U;
    msg.end_lat = 0.4869414578833301;
    msg.end_lon = 0.6390443718723199;
    msg.end_z = 0.7461482926878517;
    msg.end_z_units = 121U;
    msg.lradius = 0.23332329542534191;
    msg.flags = 105U;
    msg.x = 0.3451514017836267;
    msg.y = 0.9280732192301694;
    msg.z = 0.17137278512921272;
    msg.vx = 0.4209734880123629;
    msg.vy = 0.2615211230750266;
    msg.vz = 0.5657288468935272;
    msg.course_error = 0.2816396461595685;
    msg.eta = 32297U;

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
    msg.setTimeStamp(0.1791262091595074);
    msg.setSource(16576U);
    msg.setSourceEntity(94U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(160U);
    msg.k = 0.8025661659646821;
    msg.m = 0.48161774994200446;
    msg.n = 0.07816950430001801;

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
    msg.setTimeStamp(0.8353788064444674);
    msg.setSource(52941U);
    msg.setSourceEntity(236U);
    msg.setDestination(43562U);
    msg.setDestinationEntity(169U);
    msg.k = 0.08222500673691036;
    msg.m = 0.958539578089178;
    msg.n = 0.34912998661041994;

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
    msg.setTimeStamp(0.8665843603790122);
    msg.setSource(7043U);
    msg.setSourceEntity(251U);
    msg.setDestination(46625U);
    msg.setDestinationEntity(225U);
    msg.k = 0.5626675024348883;
    msg.m = 0.7936366451720775;
    msg.n = 0.5209819966855196;

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
    msg.setTimeStamp(0.18769678768234566);
    msg.setSource(7680U);
    msg.setSourceEntity(101U);
    msg.setDestination(46964U);
    msg.setDestinationEntity(166U);
    msg.p = 0.6789894172450156;
    msg.i = 0.8703161782732649;
    msg.d = 0.8533240269691812;
    msg.a = 0.6567891724837298;

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
    msg.setTimeStamp(0.9893784331523193);
    msg.setSource(37939U);
    msg.setSourceEntity(49U);
    msg.setDestination(7107U);
    msg.setDestinationEntity(4U);
    msg.p = 0.07237073676056804;
    msg.i = 0.1905527678471447;
    msg.d = 0.6408941888043146;
    msg.a = 0.31348227783826943;

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
    msg.setTimeStamp(0.8363121770195474);
    msg.setSource(47984U);
    msg.setSourceEntity(24U);
    msg.setDestination(20109U);
    msg.setDestinationEntity(153U);
    msg.p = 0.4550309860365219;
    msg.i = 0.5035564248831204;
    msg.d = 0.6991204296223537;
    msg.a = 0.34959523816733606;

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
    msg.setTimeStamp(0.4939521309846189);
    msg.setSource(18564U);
    msg.setSourceEntity(214U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(149U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.38842469899635046);
    msg.setSource(40699U);
    msg.setSourceEntity(155U);
    msg.setDestination(42069U);
    msg.setDestinationEntity(71U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.4160752702520957);
    msg.setSource(32673U);
    msg.setSourceEntity(169U);
    msg.setDestination(15635U);
    msg.setDestinationEntity(52U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.3519102093909594);
    msg.setSource(58901U);
    msg.setSourceEntity(141U);
    msg.setDestination(57289U);
    msg.setDestinationEntity(129U);
    msg.x = 0.48333494386728837;
    msg.y = 0.5923330904538784;
    msg.z = 0.6418213065145892;
    msg.vx = 0.721902650427076;
    msg.vy = 0.17687248320121307;
    msg.vz = 0.604701321438437;
    msg.ax = 0.162769364686829;
    msg.ay = 0.40785929119282305;
    msg.az = 0.239826719880754;
    msg.flags = 17599U;

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
    msg.setTimeStamp(0.45813370325513425);
    msg.setSource(29426U);
    msg.setSourceEntity(148U);
    msg.setDestination(9245U);
    msg.setDestinationEntity(217U);
    msg.x = 0.7667025861667973;
    msg.y = 0.5111004711326091;
    msg.z = 0.38676675206274636;
    msg.vx = 0.8005263310665547;
    msg.vy = 0.5569841308870647;
    msg.vz = 0.23879607300666617;
    msg.ax = 0.20668483110643343;
    msg.ay = 0.5858724214582901;
    msg.az = 0.9288216458035372;
    msg.flags = 52056U;

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
    msg.setTimeStamp(0.09228493316322284);
    msg.setSource(26191U);
    msg.setSourceEntity(201U);
    msg.setDestination(72U);
    msg.setDestinationEntity(25U);
    msg.x = 0.5814769285720208;
    msg.y = 0.7390873364070583;
    msg.z = 0.15694759702723748;
    msg.vx = 0.1775159160867712;
    msg.vy = 0.1688035413865323;
    msg.vz = 0.43236337515080703;
    msg.ax = 0.21237333663127278;
    msg.ay = 0.36278879853000023;
    msg.az = 0.8075030965703776;
    msg.flags = 45123U;

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
    msg.setTimeStamp(0.7287245015128899);
    msg.setSource(27487U);
    msg.setSourceEntity(146U);
    msg.setDestination(13742U);
    msg.setDestinationEntity(142U);
    msg.value = 0.22667304037261782;

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
    msg.setTimeStamp(0.6307668383984527);
    msg.setSource(27473U);
    msg.setSourceEntity(165U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(159U);
    msg.value = 0.13283275508101366;

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
    msg.setTimeStamp(0.5605608676961423);
    msg.setSource(50895U);
    msg.setSourceEntity(170U);
    msg.setDestination(10981U);
    msg.setDestinationEntity(27U);
    msg.value = 0.3278875802270139;

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
    msg.setTimeStamp(0.5880701617753846);
    msg.setSource(54407U);
    msg.setSourceEntity(135U);
    msg.setDestination(27284U);
    msg.setDestinationEntity(116U);
    msg.timeout = 14536U;
    msg.lat = 0.7626604074779657;
    msg.lon = 0.4197650904026441;
    msg.z = 0.17917541512740753;
    msg.z_units = 179U;
    msg.speed = 0.46636087140532767;
    msg.speed_units = 74U;
    msg.roll = 0.8869469191116733;
    msg.pitch = 0.012128467672647747;
    msg.yaw = 0.2453531795254461;
    msg.custom.assign("ZSUQLDKPKKGKOBWJPTFVISYFWDEAICZYNAGTRNBQYITMGWDLOXSRMUXTZVMDDLNEMUNGDXNFWMHUVDUWJBLSFCMHQYXDLXGEKACYOHV");

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
    msg.setTimeStamp(0.7445795194012231);
    msg.setSource(30174U);
    msg.setSourceEntity(130U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(192U);
    msg.timeout = 58880U;
    msg.lat = 0.00036948685017512695;
    msg.lon = 0.25490265250167565;
    msg.z = 0.8179803028723773;
    msg.z_units = 48U;
    msg.speed = 0.923266319232558;
    msg.speed_units = 19U;
    msg.roll = 0.19137076903067463;
    msg.pitch = 0.9017590690441788;
    msg.yaw = 0.5077842177651876;
    msg.custom.assign("NVZJXJXWBGIFEUROBCAXUAXSGGFYR");

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
    msg.setTimeStamp(0.026946693618194018);
    msg.setSource(21545U);
    msg.setSourceEntity(229U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(232U);
    msg.timeout = 41723U;
    msg.lat = 0.20032846588747322;
    msg.lon = 0.3694994092973446;
    msg.z = 0.8279638175668718;
    msg.z_units = 68U;
    msg.speed = 0.15868862067394152;
    msg.speed_units = 245U;
    msg.roll = 0.792906391709719;
    msg.pitch = 0.1895857742573629;
    msg.yaw = 0.9169838791224362;
    msg.custom.assign("QDLNXYIZIIWKAAGEELKDJRUDQUBQKDPOJGWOJOOPESVFMBOFDHYWUPUCGZITVTAAFZKVOFBNDMGIJKKEIAXHMDYWSQJRSUNVBTKCPOMTELLRKYYQMBIVAEPBPXZANZQWZTZJHXUWYKY");

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
    msg.setTimeStamp(0.9832233481371884);
    msg.setSource(10317U);
    msg.setSourceEntity(127U);
    msg.setDestination(37313U);
    msg.setDestinationEntity(205U);
    msg.timeout = 6124U;
    msg.lat = 0.4508382038718185;
    msg.lon = 0.6296147103901019;
    msg.z = 0.4793432644130605;
    msg.z_units = 11U;
    msg.speed = 0.6561757423107212;
    msg.speed_units = 231U;
    msg.duration = 7904U;
    msg.radius = 0.9349201468204068;
    msg.flags = 52U;
    msg.custom.assign("MAMDKAWESOLKSP");

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
    msg.setTimeStamp(0.8259731546345813);
    msg.setSource(40441U);
    msg.setSourceEntity(221U);
    msg.setDestination(65324U);
    msg.setDestinationEntity(124U);
    msg.timeout = 37393U;
    msg.lat = 0.03815349792145206;
    msg.lon = 0.9623046985296088;
    msg.z = 0.809077611307111;
    msg.z_units = 240U;
    msg.speed = 0.011563487461771271;
    msg.speed_units = 140U;
    msg.duration = 755U;
    msg.radius = 0.7116144403345398;
    msg.flags = 23U;
    msg.custom.assign("ALAKDKMGCPJQIMPIRETHKZVZHZZJCIXZJWYGIKABASOEUBSXPMHDNQBTNXMYPRVQSYGYDZSIFRXTQFBEVDSIGDDPRRFLEMLKTJKITOWSVHROLWOJCJMTMVWKRHMLNIGHW");

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
    msg.setTimeStamp(0.017159098528386596);
    msg.setSource(45087U);
    msg.setSourceEntity(228U);
    msg.setDestination(17865U);
    msg.setDestinationEntity(158U);
    msg.timeout = 34719U;
    msg.lat = 0.37337586505809195;
    msg.lon = 0.573820460779929;
    msg.z = 0.607107776672913;
    msg.z_units = 250U;
    msg.speed = 0.257478556713283;
    msg.speed_units = 62U;
    msg.duration = 8379U;
    msg.radius = 0.37789623786181503;
    msg.flags = 224U;
    msg.custom.assign("TREGBQWYALCFQNXEMHDMOBNZDUPALISGOEEACPYIUWAOJWTSLJMRCUGATAIHQPEABQHWKMLFWYSWBWFZKEALDCTYBOJYDBBVDLCLVVJGOUZCVFBZXKQILQLOKOYMNRTGQVOSSFXDKJMYKVKZSQHTUBIRVWNRHPRWNETPHRMPDXZUVKHNGVSMAUSNIWRXMSXGZOLDCUZXGXFJPIEFAGQEEZB");

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
    msg.setTimeStamp(0.7570867432302968);
    msg.setSource(11810U);
    msg.setSourceEntity(101U);
    msg.setDestination(9866U);
    msg.setDestinationEntity(147U);
    msg.custom.assign("LRBMDMUJQCNGGBKUTZWPJWGOZMRAQLFWYNGREXMZWUFXPXBYSONDYQGFBJJHEFUREPHQISMAJSCXHGCCGIDRAZNEHNLWMVCOXXKPVFBZKBIOCVQVGODAIALJFKYJYGIUAMVYPPILVRALHTLJTFBYVFSAUNJYGZKASEZZRDKNNTMQWWPXDYLLFHSHVXYQAPHQVMPZKXOXNKOSBMR");

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
    msg.setTimeStamp(0.31823303906014033);
    msg.setSource(23092U);
    msg.setSourceEntity(158U);
    msg.setDestination(37346U);
    msg.setDestinationEntity(82U);
    msg.custom.assign("SVOCKTZXSWIOXFNTWQMEMQJIRSMFNOGNDYGDXROOBPMTXRMYOSKWIRUBADEDPGERBTRXXYERFZAQVZA");

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
    msg.setTimeStamp(0.7812821719288721);
    msg.setSource(16879U);
    msg.setSourceEntity(12U);
    msg.setDestination(11170U);
    msg.setDestinationEntity(124U);
    msg.custom.assign("DRWXQVPAZLMPQFGHCDJDCPMRKLZBAKBVUMHYNJEZOFZLQGJOVSJTLUZSQUPWAFOAZYVTPKGBIYALFVETNGOKZWXXMYRSONRSGMLVNXPIWHRKOIXGPZQRSHVXSZUPPZGDYPNTWREIJBJJYHMD");

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
    msg.setTimeStamp(0.39672278414733086);
    msg.setSource(45234U);
    msg.setSourceEntity(33U);
    msg.setDestination(13530U);
    msg.setDestinationEntity(169U);
    msg.timeout = 23528U;
    msg.lat = 0.30820925322778825;
    msg.lon = 0.2035029795918465;
    msg.z = 0.8043252987954523;
    msg.z_units = 72U;
    msg.duration = 45360U;
    msg.speed = 0.26741216215981367;
    msg.speed_units = 229U;
    msg.type = 194U;
    msg.radius = 0.7128177810535986;
    msg.length = 0.47353013786388576;
    msg.bearing = 0.9990215998226424;
    msg.direction = 183U;
    msg.custom.assign("WAPOCFXUADSSMTNLBQTBKLOQNGWFOYQMDEPOZBBG");

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
    msg.setTimeStamp(0.5583446783476385);
    msg.setSource(41172U);
    msg.setSourceEntity(175U);
    msg.setDestination(4295U);
    msg.setDestinationEntity(136U);
    msg.timeout = 48659U;
    msg.lat = 0.5625953247598067;
    msg.lon = 0.45987486568034586;
    msg.z = 0.31163890558636054;
    msg.z_units = 23U;
    msg.duration = 60317U;
    msg.speed = 0.37917716947418967;
    msg.speed_units = 244U;
    msg.type = 153U;
    msg.radius = 0.6665029104850376;
    msg.length = 0.774775388023147;
    msg.bearing = 0.7960188849673705;
    msg.direction = 228U;
    msg.custom.assign("XFCHAGMWFMBPUVWQOVWMQAPACUTTODNBYFNMUWXOKXGBGVXJIEKWZVLDN");

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
    msg.setTimeStamp(0.9346809031607962);
    msg.setSource(10799U);
    msg.setSourceEntity(226U);
    msg.setDestination(22893U);
    msg.setDestinationEntity(165U);
    msg.timeout = 20591U;
    msg.lat = 0.2031784726081871;
    msg.lon = 0.9830816257831606;
    msg.z = 0.32528896470315516;
    msg.z_units = 9U;
    msg.duration = 45199U;
    msg.speed = 0.1655987649347509;
    msg.speed_units = 125U;
    msg.type = 231U;
    msg.radius = 0.024611609449461946;
    msg.length = 0.41007249699665826;
    msg.bearing = 0.9194011997556805;
    msg.direction = 72U;
    msg.custom.assign("OTONTONPSDUTOSYIGMJBQMRZHCLVSQFYHFEIHMRVZIUJJPXBDGYXHMACEL");

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
    msg.setTimeStamp(0.6152746710395368);
    msg.setSource(25067U);
    msg.setSourceEntity(36U);
    msg.setDestination(36825U);
    msg.setDestinationEntity(209U);
    msg.duration = 37213U;
    msg.custom.assign("XTFCNYMRASCGMMKYTGNUWPIYOIGZKWBNWPDIWJVZWJCVTMACWEEFDRUEPYNTEJFUXBZDWOMXNUHIYZFMGBIFLYFFRLAMQRJOPCTVKTCQZJBPSLSTAYHAUMGLHSQPRFHEJCOBBZDESZLDWQNKTNEGIKHNENUTKJSOPLDAGOKRJVIDQLFXASGHQVLHZWDLYPQMPVBIPHHNWJDTKLUAVYAACZCGGEUFCBVRRIXHXOXDOQVXKBRYXJQXOSVEKI");

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
    msg.setTimeStamp(0.5351716856956839);
    msg.setSource(14782U);
    msg.setSourceEntity(118U);
    msg.setDestination(13765U);
    msg.setDestinationEntity(11U);
    msg.duration = 54537U;
    msg.custom.assign("QTIGVALHLVIAEZQLMKZHIIUPGJYYWGAKWNVGQZHMGPMPATEADFMNZDODCYSQLUHUGWPTZZYMWSYYQBMKEBZBVOTNAMHOYBCYNYBXWHISDTUSUUSRTNCSJHOMCAJOLXBPXFDLW");

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
    msg.setTimeStamp(0.649955357186242);
    msg.setSource(32298U);
    msg.setSourceEntity(53U);
    msg.setDestination(10544U);
    msg.setDestinationEntity(146U);
    msg.duration = 26740U;
    msg.custom.assign("HMMWSLGXWXMATIKTVLXIXSSVBCXXGQOMFTEPGBBFWZOTZJOXLNQZWMPXANCKVCRDSCYKJCYLZOVQHUEDHNEKMNAPPFRLNIFZLUVOAUCAQLJCAYWPBSJIUHKTWMJRYJLPOUAYJNTEUKYBEGUE");

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
    msg.setTimeStamp(0.3990858399678491);
    msg.setSource(29160U);
    msg.setSourceEntity(39U);
    msg.setDestination(43624U);
    msg.setDestinationEntity(160U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2632081114U;
    tmp_msg_0.start_lat = 0.7488221372394502;
    tmp_msg_0.start_lon = 0.40876171648569415;
    tmp_msg_0.start_z = 0.758300594971311;
    tmp_msg_0.start_z_units = 77U;
    tmp_msg_0.end_lat = 0.381291769899751;
    tmp_msg_0.end_lon = 0.6001986560402671;
    tmp_msg_0.end_z = 0.6706379501220394;
    tmp_msg_0.end_z_units = 76U;
    tmp_msg_0.speed = 0.17176256574455984;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.lradius = 0.6411827855417942;
    tmp_msg_0.flags = 225U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20658U;
    msg.custom.assign("DRYRZJAMYBTZNNRVFMJMJNYVIXTPBQVPJEEFFQKHLWSHRZDBRIEWUXGXSVSDUCVZHTYPSOGMNGPDAZKNIZKAQHJGEFXLUZCMGUAFGUIGKWSEMFXQKZQXXFTVSNKCOBVLPIGKRAOPCTPYHYAVVKYEUBBDCLQDPNOLTNIRDCEWUEHSAJTKPMYJWHWDQSZJMXLNFECFZLKBVPLUAOQUDJIBIHAAGLTEYQCJBIXSLWOGCDFQXORWSWCHROMNTRWUBH");

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
    msg.setTimeStamp(0.3668800350256858);
    msg.setSource(6939U);
    msg.setSourceEntity(193U);
    msg.setDestination(20882U);
    msg.setDestinationEntity(216U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6021244107358202;
    msg.control.set(tmp_msg_0);
    msg.duration = 21467U;
    msg.custom.assign("FLNYEWQRUPZTWNMATGVBRSKECTDWMVYIQDAEAYKQGXHOQFXTNCIJEVJQZBJZXZUNLUPUSWFLBYSBWGNSOULNPWAXAXCEMOIUDOWPXPHBSVFLMHWDFVYLOQTVGONOTDZZGMPDUNTOGTRKFHTHNEJJDVRXPRJLYCLGHYFJZGSARMPISAUEIVCXFTQDIAQPCMGZRBSFNAKLVKEHRHIBFCZIHRQBHDEMPUJXGYSSRYXOK");

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
    msg.setTimeStamp(0.5232282156638889);
    msg.setSource(64804U);
    msg.setSourceEntity(129U);
    msg.setDestination(16053U);
    msg.setDestinationEntity(57U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.44950253507598426;
    tmp_msg_0.z_units = 71U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44124U;
    msg.custom.assign("EKFIKBPLVMNHVQBBXGZCKDYESVDZNIRPYSHQFOSYMMRMFPLQWRQRDIATTIZHESJRTHKPSYUWYJLOIVOKXZMXDQSZEZTIVGFYFLBBICUYONGQAAXVZWKCTNYETDKXAVJOITIXLDOEHORG");

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
    msg.setTimeStamp(0.8634048265841364);
    msg.setSource(11971U);
    msg.setSourceEntity(147U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(7U);
    msg.timeout = 39870U;
    msg.lat = 0.40010973006738026;
    msg.lon = 0.0748311161598576;
    msg.z = 0.5447558808475848;
    msg.z_units = 219U;
    msg.speed = 0.8552647845043239;
    msg.speed_units = 215U;
    msg.bearing = 0.004890890035391782;
    msg.cross_angle = 0.36940456378310027;
    msg.width = 0.030060361955605797;
    msg.length = 0.9818518665257305;
    msg.hstep = 0.9374661157706948;
    msg.coff = 136U;
    msg.alternation = 70U;
    msg.flags = 177U;
    msg.custom.assign("VMNWGYIOVZEDBROVUWTGAENXSNPBEZOEUWEHUKIXYIOHORAFDQZXZKZXCFRHHRGTVSMYFXPDLPRTPSRCZHVQSSQEBHHTLOLLDYNTXUJUKOAKJGEMFYVXDZPOMPCEDRRCCACSFLBCEWDBXTQJAIGJTBMVVFNADQBUIUOMJPYQINKRTBKOSGCGIWNHXQNALTELKWFFJ");

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
    msg.setTimeStamp(0.020741246997371565);
    msg.setSource(53957U);
    msg.setSourceEntity(174U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(196U);
    msg.timeout = 54321U;
    msg.lat = 0.6065956741543128;
    msg.lon = 0.4361489644124883;
    msg.z = 0.22375110798920916;
    msg.z_units = 31U;
    msg.speed = 0.11682064041617612;
    msg.speed_units = 187U;
    msg.bearing = 0.8686010591770261;
    msg.cross_angle = 0.033881668200061;
    msg.width = 0.10208152174040219;
    msg.length = 0.6402985999091798;
    msg.hstep = 0.09400412764941246;
    msg.coff = 51U;
    msg.alternation = 204U;
    msg.flags = 174U;
    msg.custom.assign("RHSPTBAPXJGCBXKTUTLJGUMPEKNHMUUDCYAKNDKOWZOENDBRREMSGCNRUWZWSFFFDCUAIDSYDQLVAEKZRQDBTTYOAEAFHQFOQRMPFJASBLJ");

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
    msg.setTimeStamp(0.6977165195006416);
    msg.setSource(58473U);
    msg.setSourceEntity(41U);
    msg.setDestination(34721U);
    msg.setDestinationEntity(55U);
    msg.timeout = 1732U;
    msg.lat = 0.9173348636899803;
    msg.lon = 0.09623803329921243;
    msg.z = 0.4758552856215932;
    msg.z_units = 2U;
    msg.speed = 0.7058675914880476;
    msg.speed_units = 97U;
    msg.bearing = 0.8747408316339944;
    msg.cross_angle = 0.4629206261229354;
    msg.width = 0.20974014290851872;
    msg.length = 0.7922080275737398;
    msg.hstep = 0.9875128825215839;
    msg.coff = 52U;
    msg.alternation = 122U;
    msg.flags = 223U;
    msg.custom.assign("JDPKHINICEBUSLHGALUFXOPMQVCWEAKMDGFNBQKTCYDGCSYLMOZQTHRIELSEFDSXLKQTJKAAWVKIRAITWJDISDMZPYFVVLNFQRUSTXCHXE");

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
    msg.setTimeStamp(0.6045808818219749);
    msg.setSource(15553U);
    msg.setSourceEntity(119U);
    msg.setDestination(57810U);
    msg.setDestinationEntity(121U);
    msg.timeout = 42889U;
    msg.lat = 0.9619082589261605;
    msg.lon = 0.3912601525030621;
    msg.z = 0.6633620340169856;
    msg.z_units = 91U;
    msg.speed = 0.8737394325424357;
    msg.speed_units = 189U;
    msg.custom.assign("JKWKYDUVRWIMQVEHZRDBAYNRAKHFNYEGJVKVBMSOSMQXMUAMQVTLWZUSXTGYEJRTAUQUPWGTEZRSZJKYMDEBPQKFMBPXHTGVDKDOAGWYVOPEZIGIFGFBBIRWSSUZQOZNADCVUFPECLYQADCZLBLHELPHXOCIIRXOBGFTFURWKCG");

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
    msg.setTimeStamp(0.9536599305066393);
    msg.setSource(31663U);
    msg.setSourceEntity(60U);
    msg.setDestination(4040U);
    msg.setDestinationEntity(95U);
    msg.timeout = 10614U;
    msg.lat = 0.4536500684149133;
    msg.lon = 0.8974016822284397;
    msg.z = 0.8268039269036304;
    msg.z_units = 124U;
    msg.speed = 0.513411535402507;
    msg.speed_units = 155U;
    msg.custom.assign("IYJVWWKMGWWCJWIBMAOAGFSYNDKCTAZOIXUTEUFGXLLRPYZAYHJRQEAEIDRBXORDQPDYKHRTJNNBDKNYXBMKZGFEBIXUZQLYORMQCLANLOSPVMM");

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
    msg.setTimeStamp(0.19737246125839503);
    msg.setSource(50788U);
    msg.setSourceEntity(139U);
    msg.setDestination(36364U);
    msg.setDestinationEntity(134U);
    msg.timeout = 23024U;
    msg.lat = 0.4064518009763948;
    msg.lon = 0.6653814419677617;
    msg.z = 0.10323768700683533;
    msg.z_units = 76U;
    msg.speed = 0.4100232454135164;
    msg.speed_units = 73U;
    msg.custom.assign("XMFZHUQKMBNTRFSZQRJIIGDUSGAWFZOWHTHWOAYCJKLZGIMRKHMXAPPXLMHNZKNRXWZIXNENYXTEOYHDNVSQBGEZKBCRZ");

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
    msg.setTimeStamp(0.4415045680496378);
    msg.setSource(27485U);
    msg.setSourceEntity(188U);
    msg.setDestination(43390U);
    msg.setDestinationEntity(105U);
    msg.x = 0.7347952798889413;
    msg.y = 0.32809700487171467;
    msg.z = 0.7947931643411139;

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
    msg.setTimeStamp(0.9643137814816423);
    msg.setSource(23433U);
    msg.setSourceEntity(135U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(155U);
    msg.x = 0.18287003578623973;
    msg.y = 0.3524504367751138;
    msg.z = 0.792672261654215;

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
    msg.setTimeStamp(0.8286852287451856);
    msg.setSource(50078U);
    msg.setSourceEntity(213U);
    msg.setDestination(59189U);
    msg.setDestinationEntity(20U);
    msg.x = 0.2891401314122103;
    msg.y = 0.16645226942721258;
    msg.z = 0.7255248629197236;

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
    msg.setTimeStamp(0.38592568374456593);
    msg.setSource(24897U);
    msg.setSourceEntity(53U);
    msg.setDestination(13522U);
    msg.setDestinationEntity(138U);
    msg.timeout = 33966U;
    msg.lat = 0.2589470823104997;
    msg.lon = 0.39164982744230425;
    msg.z = 0.8989330978572553;
    msg.z_units = 227U;
    msg.amplitude = 0.9198847370733474;
    msg.pitch = 0.31533357839483767;
    msg.speed = 0.7504555783283535;
    msg.speed_units = 36U;
    msg.custom.assign("OGIAIMROCWEAUSANNVKNVKZNHHFBTXKPWWGYNPQSVGXCTXIXYHCRCNXKKRMBNRATUUQWGWUPISBQFBYDYTYWDEQVKQPJDZOFRCVYJOMPBLEBSDEZXBLJTLLBLPEHVUERBDVTQZMSXOCGICDGKOVZSGUMGJTDZTEOAVPGOWZTLDSFAQUF");

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
    msg.setTimeStamp(0.9512207188403373);
    msg.setSource(56903U);
    msg.setSourceEntity(157U);
    msg.setDestination(39633U);
    msg.setDestinationEntity(43U);
    msg.timeout = 55443U;
    msg.lat = 0.7946098435726663;
    msg.lon = 0.844361168846358;
    msg.z = 0.48269949595390615;
    msg.z_units = 206U;
    msg.amplitude = 0.20005703103766503;
    msg.pitch = 0.11071595505958365;
    msg.speed = 0.9945237440363462;
    msg.speed_units = 141U;
    msg.custom.assign("SLHUUGCMRNDZNZZEDVMVUWFQTBAIZKXQPKMOKYSEDPBGHSOMEFOQSABFFRJRONDKSCFHPPWVMXAMUDUHIVDFNHDJBOKPKKLYMYRLOYJTVQELBAIZEGKRLSEBEQGQNDLFDVXHYWNBYZSFVCPPNLXJQZCYLSXFLHXWHUMBC");

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
    msg.setTimeStamp(0.8359820780564132);
    msg.setSource(52736U);
    msg.setSourceEntity(140U);
    msg.setDestination(23690U);
    msg.setDestinationEntity(19U);
    msg.timeout = 22191U;
    msg.lat = 0.8835993706825023;
    msg.lon = 0.3964345014690911;
    msg.z = 0.667668653792074;
    msg.z_units = 227U;
    msg.amplitude = 0.42749219079623535;
    msg.pitch = 0.28400930416210823;
    msg.speed = 0.8056088137220314;
    msg.speed_units = 174U;
    msg.custom.assign("WVPQMKZZGRAQEEOZBPI");

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
    msg.setTimeStamp(0.9633431064368491);
    msg.setSource(18525U);
    msg.setSourceEntity(81U);
    msg.setDestination(39914U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.5354212358060192);
    msg.setSource(20090U);
    msg.setSourceEntity(16U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.11192854706248245);
    msg.setSource(19412U);
    msg.setSourceEntity(125U);
    msg.setDestination(15841U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.35282413849116123);
    msg.setSource(33924U);
    msg.setSourceEntity(30U);
    msg.setDestination(51493U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.45263367460483517;
    msg.lon = 0.8439308355538586;
    msg.z = 0.8414710459372222;
    msg.z_units = 152U;
    msg.radius = 0.9008508837365886;
    msg.duration = 1232U;
    msg.speed = 0.31243579724354675;
    msg.speed_units = 48U;
    msg.custom.assign("GFCTPURUPADORNDWDBIJNTJCTJQTEAFYQUPXTJKMKXPXKKYQOENVUTBXSAGVHISVNNRLZGDQTNMSIBRXQKBSFCHULGFMZOPWLTOJHQQHVLEHMRIELPEXSFKMVZREXNZWMUCMKJQSPFSDAJHKHYDRUCWZOPLMTOGW");

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
    msg.setTimeStamp(0.1364694041588318);
    msg.setSource(42325U);
    msg.setSourceEntity(138U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.09791006711002392;
    msg.lon = 0.38281546336871297;
    msg.z = 0.9692988644133713;
    msg.z_units = 19U;
    msg.radius = 0.9619431863968151;
    msg.duration = 1912U;
    msg.speed = 0.2541685478779888;
    msg.speed_units = 132U;
    msg.custom.assign("GOLJMFMSRRFOKBOPATUKEARYUBGMHQLPHAKHMQFQLWXKHGUTPSFLBFBIHPULZOTXVPWBIOBWCEYHUGSSFGDJVBMSCGPQOPWCKIGRVCTEHQELWHDYMVRBASKTQKXANDUWVABUNXJCLISODCEFZEJXSYNGCRBOKQXNDDJYDJYYQGZVKXCIRPNEWWHEYTIODUJUCAMWNRHKPVTVLOTIIYSNZANZIASXPQLXZQWJZYMDEZDXGVFFZTMCFZN");

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
    msg.setTimeStamp(0.25650466987403153);
    msg.setSource(39784U);
    msg.setSourceEntity(248U);
    msg.setDestination(32790U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.9737687476865812;
    msg.lon = 0.5139095597371867;
    msg.z = 0.6125491529228916;
    msg.z_units = 253U;
    msg.radius = 0.6443704361198034;
    msg.duration = 16006U;
    msg.speed = 0.8102571955510407;
    msg.speed_units = 95U;
    msg.custom.assign("PXUSTUKDZBTOWEKPQZXAYWJBFOVMPUDXKSDWHFFIMFBGYXLWTCTXXRYPZIROVIXKTJKZNVVSFKQGDEUCLGVEHVGSFDW");

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
    msg.setTimeStamp(0.2633113888392864);
    msg.setSource(10926U);
    msg.setSourceEntity(25U);
    msg.setDestination(32981U);
    msg.setDestinationEntity(42U);
    msg.timeout = 4282U;
    msg.flags = 168U;
    msg.lat = 0.9565938132208618;
    msg.lon = 0.9943023447062267;
    msg.start_z = 0.13232718145123623;
    msg.start_z_units = 150U;
    msg.end_z = 0.35272809564053786;
    msg.end_z_units = 72U;
    msg.radius = 0.15504201213157365;
    msg.speed = 0.25274227800984783;
    msg.speed_units = 77U;
    msg.custom.assign("OYLQASOYFUXEKHYFVMUIIVENCNOATVHARUNNWVTELEGWIQKXJBPMCXNSGBUWYWWDWMNAPXBCTKAZDTVRGFMLEPXCVIQITJMWFRKDROSGYIMLMYOTGLHWRPDZCIEQAEZNAHKWXXPUSOGCVRVHPHMQJETJQKYODBASJAIPSLQDOVQRDHGZKSFJOZUPGJBZBGUHLRUGRIVSCFCSXBROHJZDTDQATXUYDWFJFELTNHPJYU");

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
    msg.setTimeStamp(0.3697498121156835);
    msg.setSource(12285U);
    msg.setSourceEntity(66U);
    msg.setDestination(49262U);
    msg.setDestinationEntity(160U);
    msg.timeout = 64239U;
    msg.flags = 18U;
    msg.lat = 0.2266308498410653;
    msg.lon = 0.19511109103181934;
    msg.start_z = 0.7037790275283309;
    msg.start_z_units = 58U;
    msg.end_z = 0.5094904730285409;
    msg.end_z_units = 126U;
    msg.radius = 0.6529189141601619;
    msg.speed = 0.7474506476122614;
    msg.speed_units = 60U;
    msg.custom.assign("TRWFVJOSBUULQXOGWVGPXQSPTEBLYHVWTBAKJPHWKYWCHVGBQTJB");

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
    msg.setTimeStamp(0.5782141018994159);
    msg.setSource(19522U);
    msg.setSourceEntity(210U);
    msg.setDestination(47074U);
    msg.setDestinationEntity(198U);
    msg.timeout = 2368U;
    msg.flags = 51U;
    msg.lat = 0.8356605139610215;
    msg.lon = 0.9045601241645309;
    msg.start_z = 0.594417311694299;
    msg.start_z_units = 126U;
    msg.end_z = 0.7411949136811855;
    msg.end_z_units = 24U;
    msg.radius = 0.19562601595554696;
    msg.speed = 0.23972280205070684;
    msg.speed_units = 161U;
    msg.custom.assign("XTMPVLSXFPAHMEONIOVWDCBYNNDLMREZZXPKNEQIJULTIUUGHWIXVAYGGTOIFUHZCGKSWVEWMXHGVXPQSBOATWCAVZKGJYTMSIFQLGXAJQYDEBFKKZVUWYVOCSEPRSUCPZFQFWDIMOSC");

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
    msg.setTimeStamp(0.4766963316197441);
    msg.setSource(54522U);
    msg.setSourceEntity(180U);
    msg.setDestination(44774U);
    msg.setDestinationEntity(0U);
    msg.timeout = 56104U;
    msg.lat = 0.17301659130267222;
    msg.lon = 0.8497181492177532;
    msg.z = 0.40433153475782313;
    msg.z_units = 171U;
    msg.speed = 0.6382692480776854;
    msg.speed_units = 74U;
    msg.custom.assign("RKQXOCWBBROHZLVQYZLZPGGUACWHTYSBDBKHAFCHTMRRLPTYNAGZAEJYRHQJNPDMDWRQHOURZCYBMUK");

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
    msg.setTimeStamp(0.6285617387283782);
    msg.setSource(53802U);
    msg.setSourceEntity(240U);
    msg.setDestination(51168U);
    msg.setDestinationEntity(233U);
    msg.timeout = 4171U;
    msg.lat = 0.2084905618168189;
    msg.lon = 0.5659672251465799;
    msg.z = 0.1732139153323874;
    msg.z_units = 25U;
    msg.speed = 0.3893427393720461;
    msg.speed_units = 178U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.07306322920015385;
    tmp_msg_0.y = 0.865873845145097;
    tmp_msg_0.z = 0.9471305352246585;
    tmp_msg_0.t = 0.10502964775783374;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WTPAVOJYLLVQODCARYCTXGQCXOADXZULYKBXNVPRENJCWRKXVZMPYWKTWJWRWSNZVDGPTGSOBQIENORKHKOHTABNXWZJXLBHADYNKYGQCQVIYBPZTSIHSBLRPQACNPVMQEXMSXOMAUFBHGTLNEJRYIVMFWIRUYTIZGQCNCSKEEFZMXUIDZUIBJHTJWJUFHFAPVIH");

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
    msg.setTimeStamp(0.6110594349787095);
    msg.setSource(22761U);
    msg.setSourceEntity(193U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(154U);
    msg.timeout = 63065U;
    msg.lat = 0.816546327904255;
    msg.lon = 0.23105449854262494;
    msg.z = 0.7251938208608667;
    msg.z_units = 75U;
    msg.speed = 0.6470900870855111;
    msg.speed_units = 150U;
    msg.custom.assign("XHJEKNLYKTJFNXIQVDTSKWZFPFSATXBOC");

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
    msg.setTimeStamp(0.9424021995319751);
    msg.setSource(59555U);
    msg.setSourceEntity(194U);
    msg.setDestination(55277U);
    msg.setDestinationEntity(227U);
    msg.x = 0.4092332369897054;
    msg.y = 0.5119912531759963;
    msg.z = 0.9842083624096623;
    msg.t = 0.63954601717156;

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
    msg.setTimeStamp(0.09391602238232755);
    msg.setSource(14896U);
    msg.setSourceEntity(128U);
    msg.setDestination(65459U);
    msg.setDestinationEntity(105U);
    msg.x = 0.01819817927420564;
    msg.y = 0.29395507096315243;
    msg.z = 0.8247664216232707;
    msg.t = 0.8711707377915923;

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
    msg.setTimeStamp(0.1326275035036515);
    msg.setSource(48237U);
    msg.setSourceEntity(170U);
    msg.setDestination(53652U);
    msg.setDestinationEntity(216U);
    msg.x = 0.9954224225292776;
    msg.y = 0.0014553266435823886;
    msg.z = 0.5648174569385248;
    msg.t = 0.22672430567423996;

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
    msg.setTimeStamp(0.30155772904478206);
    msg.setSource(48155U);
    msg.setSourceEntity(76U);
    msg.setDestination(32782U);
    msg.setDestinationEntity(244U);
    msg.timeout = 40232U;
    msg.name.assign("IOAYEMFGTCYOVZRFHDZUZSFLBCAQVNVQWVGDQGNECTRPEDHIQJIQBZTMRULFYGCFGMOZSFXKHMLVYDNNARCKYHMREUUDNIWXCAIKIHASUPFOXAJDBOHQXCKAEHRHWVXT");
    msg.custom.assign("DGJIJFNJAOAONMLMKHOVXBZRIXXYFABAVKHDYKCCXBDISIYGMIPDRECPZORQSKAUAEFUSPDJYTTCGKJMAVILSPLOWNUGUSZFHERRAHAITLPMVOTDXDNPEBORPZHECDJQSATXHWPQFUOYEQBBUGVSPKFTUDGTETWGHZVSQMRFWUYZIXNQNLXNWFCRGXWJVCIHKNWFGBQMLBLVPHLNLYUWVZVMQZFQYOZDEMWKNTWYUKTJXIRCMQOJCSYR");

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
    msg.setTimeStamp(0.4804803323299687);
    msg.setSource(54516U);
    msg.setSourceEntity(149U);
    msg.setDestination(22672U);
    msg.setDestinationEntity(21U);
    msg.timeout = 31583U;
    msg.name.assign("WJSMVBDYXQUNZNKGBDGSZTKWPDNZYXHYQNIMBSOVLJTCNCXQUJVBYUVVHBOCTJTABXHQPSGNRDWUMFQANIHSNCIYVFRDXPZLZJTYUHCCRWSBZOLIJZCHALLTFSYDGVKJQJ");
    msg.custom.assign("FHTLKKIJITWTLMSLCYHBWEVVXXVBTYZPQFYPGRQRAYFVEOFNICVLAPYGDYZBRFSBDFJBOKQRBRHAWCJSZIAKMKOUUMSFWROOJUAEQYFJXDZMDSWBLLGAGKQKDYPSPQTOVBRMHCREGDTSNCEDWDNUOQZUTCKZGHQDQAVNZBAKECAMGMUWELUSSMXJHXTLGJNSNXCCTJNQEXIGNPEIPIHVRKXVENP");

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
    msg.setTimeStamp(0.8664096229112952);
    msg.setSource(64533U);
    msg.setSourceEntity(130U);
    msg.setDestination(13978U);
    msg.setDestinationEntity(196U);
    msg.timeout = 57449U;
    msg.name.assign("EPGVWXERQTXLHYPVJMGNHKMUBUH");
    msg.custom.assign("IOWLFJQMJFWYWDZMTEJHGHOFSXNMLSENPUVQWBIXSEALGWRTVHWSTAQMOQAPDSKJRNJVZELBCEVZFLCECNXXFBEEVUHLYBTNISGMHDUNACZIYYBRAUQMMOGCNPPRSTGZKDAYCFDOVZRIHQZNWPJQGOV");

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
    msg.setTimeStamp(0.8949988336486222);
    msg.setSource(51201U);
    msg.setSourceEntity(126U);
    msg.setDestination(18965U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.24448435989891926;
    msg.lon = 0.43384958167513;
    msg.z = 0.24255405468582636;
    msg.z_units = 193U;
    msg.speed = 0.35932886354277416;
    msg.speed_units = 97U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26270U;
    tmp_msg_0.off_x = 0.005255101163763931;
    tmp_msg_0.off_y = 0.5088780831880579;
    tmp_msg_0.off_z = 0.8401701481873307;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6862408455422124;
    msg.custom.assign("IXCQAZZKJVGCWIDOUPDBBOTQQOHKFRRTKLGUGUKEYOSYWKYHFALMMBSFNSOHUMPLEQMXODZAAUJYNAPZSEOYFEDYDDRLPGVAZJKTQNNVEVQVQCACDZXRUJOPMHKGOBCMVLZXJRSHWXRIWBFGCPERLXCZNRTVIIITFJIRJMGGNTSBLRQHBXVIGSXLYVSTCHJQKBNDHFWXQWTDEOAVUAY");

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
    msg.setTimeStamp(0.008367592161479087);
    msg.setSource(49883U);
    msg.setSourceEntity(155U);
    msg.setDestination(55714U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.9155003661471707;
    msg.lon = 0.5678262103185177;
    msg.z = 0.5867954891676468;
    msg.z_units = 38U;
    msg.speed = 0.8890961140671882;
    msg.speed_units = 224U;
    msg.start_time = 0.7005181122947935;
    msg.custom.assign("OMILPDCYXSWLTARSPJHYITKQSJZFRGGAXQDONFSCKKDOUMWJPFJOPFVTQDSWZGWZRGGQZBLFCAATAXWPNBXQUPHEGY");

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
    msg.setTimeStamp(0.9141395640833788);
    msg.setSource(35123U);
    msg.setSourceEntity(91U);
    msg.setDestination(14542U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.5664420000426932;
    msg.lon = 0.9150507259746606;
    msg.z = 0.1908650495672587;
    msg.z_units = 210U;
    msg.speed = 0.6987150789802232;
    msg.speed_units = 120U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42991U;
    tmp_msg_0.off_x = 0.11753400345657516;
    tmp_msg_0.off_y = 0.6772418530320814;
    tmp_msg_0.off_z = 0.16137782996353;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.04831021273251235;
    msg.custom.assign("EASYXJHBNDFMIZHDSMBEFOTCKXMSZFLCVQBNNOQVXYLEUBGZOHABWNPMLBNLCORXZCZHCSYGKQYRPZKKTMTNQKWJETITYMFJCDAOKYSAJWFXPDVSGJUZUTDDPVRLOMFQENXAKQIKPHRQADVKMBIBIH");

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
    msg.setTimeStamp(0.8822524144562996);
    msg.setSource(16897U);
    msg.setSourceEntity(197U);
    msg.setDestination(19624U);
    msg.setDestinationEntity(73U);
    msg.vid = 13749U;
    msg.off_x = 0.8654767491561249;
    msg.off_y = 0.13331338525405223;
    msg.off_z = 0.20111157184740291;

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
    msg.setTimeStamp(0.6279311378330636);
    msg.setSource(50673U);
    msg.setSourceEntity(37U);
    msg.setDestination(43793U);
    msg.setDestinationEntity(8U);
    msg.vid = 8512U;
    msg.off_x = 0.6476177420609652;
    msg.off_y = 0.18709094206023769;
    msg.off_z = 0.8276007996780758;

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
    msg.setTimeStamp(0.822670810255494);
    msg.setSource(34156U);
    msg.setSourceEntity(188U);
    msg.setDestination(4871U);
    msg.setDestinationEntity(187U);
    msg.vid = 18448U;
    msg.off_x = 0.3315459107627604;
    msg.off_y = 0.7512679175909374;
    msg.off_z = 0.24080525885524773;

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
    msg.setTimeStamp(0.6392832798665863);
    msg.setSource(30559U);
    msg.setSourceEntity(168U);
    msg.setDestination(36930U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.5288803650079476);
    msg.setSource(65512U);
    msg.setSourceEntity(105U);
    msg.setDestination(14451U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.7274722176014358);
    msg.setSource(48306U);
    msg.setSourceEntity(91U);
    msg.setDestination(56131U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.19049492436856064);
    msg.setSource(51485U);
    msg.setSourceEntity(122U);
    msg.setDestination(49719U);
    msg.setDestinationEntity(251U);
    msg.mid = 18144U;

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
    msg.setTimeStamp(0.6842380638570663);
    msg.setSource(34212U);
    msg.setSourceEntity(54U);
    msg.setDestination(13721U);
    msg.setDestinationEntity(48U);
    msg.mid = 33002U;

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
    msg.setTimeStamp(0.4009816339044807);
    msg.setSource(42183U);
    msg.setSourceEntity(52U);
    msg.setDestination(9366U);
    msg.setDestinationEntity(31U);
    msg.mid = 42185U;

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
    msg.setTimeStamp(0.8861566565373103);
    msg.setSource(52586U);
    msg.setSourceEntity(153U);
    msg.setDestination(18843U);
    msg.setDestinationEntity(133U);
    msg.state = 129U;
    msg.eta = 41895U;
    msg.info.assign("TOJJDWHJYVFKXGWEZNHLVRIPDGYEJBGDHDAFBZXLBXPYM");

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
    msg.setTimeStamp(0.536531245408925);
    msg.setSource(14657U);
    msg.setSourceEntity(197U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(158U);
    msg.state = 230U;
    msg.eta = 35854U;
    msg.info.assign("GVPDCQCRMVIAWQLYEUUQAMLTTHXSBXPQYWOOJDRVKZTAIM");

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
    msg.setTimeStamp(0.4528446429567955);
    msg.setSource(662U);
    msg.setSourceEntity(184U);
    msg.setDestination(16133U);
    msg.setDestinationEntity(252U);
    msg.state = 89U;
    msg.eta = 7388U;
    msg.info.assign("UJLNLTKKRKNAAYBMYOIRZHNFFUHPERNIZHSQGNIETVEOTDGVWQBMZCEOWECQXGNWEBXAJSUSIOPYBWSMTULFPRSADVWEFVHWGCQORFTHVUDNUGVIJKOCXXTMIMQXEHAFEI");

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
    msg.setTimeStamp(0.8852147400911964);
    msg.setSource(21248U);
    msg.setSourceEntity(23U);
    msg.setDestination(38062U);
    msg.setDestinationEntity(122U);
    msg.system = 51752U;
    msg.duration = 53567U;
    msg.speed = 0.13090598462961123;
    msg.speed_units = 153U;
    msg.x = 0.3612372891657697;
    msg.y = 0.09043899395317656;
    msg.z = 0.7004347308779048;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.2481232665562556);
    msg.setSource(34677U);
    msg.setSourceEntity(96U);
    msg.setDestination(42629U);
    msg.setDestinationEntity(230U);
    msg.system = 4050U;
    msg.duration = 14536U;
    msg.speed = 0.50954326589847;
    msg.speed_units = 244U;
    msg.x = 0.6075308944762015;
    msg.y = 0.28832855076177133;
    msg.z = 0.49343195365689796;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.8349877999768989);
    msg.setSource(60820U);
    msg.setSourceEntity(244U);
    msg.setDestination(33879U);
    msg.setDestinationEntity(51U);
    msg.system = 17892U;
    msg.duration = 40615U;
    msg.speed = 0.971572265787085;
    msg.speed_units = 157U;
    msg.x = 0.1394032176370149;
    msg.y = 0.08944773016858942;
    msg.z = 0.16252620172017884;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.8232825697985559);
    msg.setSource(54805U);
    msg.setSourceEntity(143U);
    msg.setDestination(50766U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.427273324375293;
    msg.lon = 0.5721310108773076;
    msg.speed = 0.5523981938855834;
    msg.speed_units = 244U;
    msg.duration = 20771U;
    msg.sys_a = 59401U;
    msg.sys_b = 5692U;
    msg.move_threshold = 0.4755375735465178;

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
    msg.setTimeStamp(0.32834424248143224);
    msg.setSource(19502U);
    msg.setSourceEntity(227U);
    msg.setDestination(7983U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.061030819140614145;
    msg.lon = 0.0899942612944733;
    msg.speed = 0.8990558613573816;
    msg.speed_units = 92U;
    msg.duration = 28816U;
    msg.sys_a = 51010U;
    msg.sys_b = 40330U;
    msg.move_threshold = 0.7098010863668182;

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
    msg.setTimeStamp(0.8625351885667809);
    msg.setSource(46986U);
    msg.setSourceEntity(45U);
    msg.setDestination(29839U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.7933564466082046;
    msg.lon = 0.40605161217718155;
    msg.speed = 0.6419449038103333;
    msg.speed_units = 81U;
    msg.duration = 55181U;
    msg.sys_a = 25542U;
    msg.sys_b = 25512U;
    msg.move_threshold = 0.7735126231945223;

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
    msg.setTimeStamp(0.7020272376380319);
    msg.setSource(11491U);
    msg.setSourceEntity(177U);
    msg.setDestination(46951U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.18190475299945208;
    msg.lon = 0.32739310023064216;
    msg.z = 0.2802582571101261;
    msg.z_units = 238U;
    msg.speed = 0.16002303264270423;
    msg.speed_units = 218U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8375721872860518;
    tmp_msg_0.lon = 0.11224800488751485;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XSWINMZLLQTIIDFVPPVCBUVYITMODJSAJNWUMZJVPEGCWLSENYQOCSSFUFUXVGVAWAFSRETHAYDBADCDQCHTNZKPOMAXKKQFHIRDUOGCSQJNEMDEBRPYSTMGKSLXAJGHNAJAXRUQORKKWEMILVIOOROGVWBNQOZBZZPYGMBRHUGFIWKYHTWNHDZUFTLIGRJWXZUQQFZXTBUGRPTFEPILHNHCNOCLLBCXZJXMKYDYYKEC");

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
    msg.setTimeStamp(0.8817683523413343);
    msg.setSource(41328U);
    msg.setSourceEntity(63U);
    msg.setDestination(41406U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.06317349070451994;
    msg.lon = 0.4792292304900274;
    msg.z = 0.11628489214117654;
    msg.z_units = 211U;
    msg.speed = 0.5717292484386004;
    msg.speed_units = 12U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.31348498415360626;
    tmp_msg_0.lon = 0.11855905520405563;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RUPWHVWSXXAHKCNIKCTETDMXPRMBNVUVZMHVSLQFRHCBOYCKKSOPWARSEEZXOZQUUICHYLFUVMUQAECJYZQQIDWSQJZISKWTGTWLBLXYNVEOQBAQDZLYFXLEZPRNVYSZUGFWD");

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
    msg.setTimeStamp(0.3448711145939508);
    msg.setSource(23806U);
    msg.setSourceEntity(21U);
    msg.setDestination(17080U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.8281657320887025;
    msg.lon = 0.9376934348689089;
    msg.z = 0.27168435463081;
    msg.z_units = 175U;
    msg.speed = 0.8404488254504603;
    msg.speed_units = 196U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.504717956510601;
    tmp_msg_0.lon = 0.06528885413629937;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZLVWTSKOINFLZQBONHFSYZGRGQLDEIDBBKDFFABQGCOGUBOSOZHLCMWZRQWEJ");

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
    msg.setTimeStamp(0.30493129249637585);
    msg.setSource(57623U);
    msg.setSourceEntity(16U);
    msg.setDestination(18243U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.273709699905362;
    msg.lon = 0.29942009553897697;

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
    msg.setTimeStamp(0.5352712834307042);
    msg.setSource(55901U);
    msg.setSourceEntity(7U);
    msg.setDestination(34567U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.42406472243723714;
    msg.lon = 0.37420045811102887;

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
    msg.setTimeStamp(0.6340632096376421);
    msg.setSource(876U);
    msg.setSourceEntity(3U);
    msg.setDestination(63869U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.26159132486868875;
    msg.lon = 0.7853983918170888;

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
    msg.setTimeStamp(0.13200846254060705);
    msg.setSource(48002U);
    msg.setSourceEntity(4U);
    msg.setDestination(20717U);
    msg.setDestinationEntity(174U);
    msg.timeout = 9561U;
    msg.lat = 0.3779360867273157;
    msg.lon = 0.5512058494344398;
    msg.z = 0.24154889300582028;
    msg.z_units = 57U;
    msg.pitch = 0.8565109899020461;
    msg.amplitude = 0.24939195270511672;
    msg.duration = 98U;
    msg.speed = 0.8569089985261021;
    msg.speed_units = 5U;
    msg.radius = 0.11827008512818993;
    msg.direction = 7U;
    msg.custom.assign("HOMSMTRABARKSWEOMDUIWNTLZXLZHTSKLVRBBYBYZDNLOEQCRXVQXSQYJPADDJGQTQLUICYNSVFZUNNGJWKGYCIRKLYCZEDXKZWFOVAIHCUEFVWALPHNUDZUKFNAYMJGGDEQVBEGRKEAPMSEDNRLOFCOIQUMHIHECWWOZYGPLSVBFIVDJHYPOLRIXKSMSFNCCBHFJUHFGJXQNWZJAOPPRKPUHPTPOXTZGDCTWSTBMXIXFQRUIVMQMV");

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
    msg.setTimeStamp(0.9405073779886967);
    msg.setSource(16209U);
    msg.setSourceEntity(166U);
    msg.setDestination(245U);
    msg.setDestinationEntity(251U);
    msg.timeout = 2441U;
    msg.lat = 0.42777751802224095;
    msg.lon = 0.7767656936176939;
    msg.z = 0.3732146479852697;
    msg.z_units = 231U;
    msg.pitch = 0.9728987225209815;
    msg.amplitude = 0.7278202555460473;
    msg.duration = 55207U;
    msg.speed = 0.6270519363514604;
    msg.speed_units = 163U;
    msg.radius = 0.7060652598987864;
    msg.direction = 189U;
    msg.custom.assign("KLHPBIQXMOMCMCBFSXZGLZMTJMYQYREVKTPRJDOBIGSZQEXGPCCVFEIUACDIQXDJWCLTDDYSJZDLFIXWJIHL");

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
    msg.setTimeStamp(0.10170076585566168);
    msg.setSource(55788U);
    msg.setSourceEntity(33U);
    msg.setDestination(51703U);
    msg.setDestinationEntity(195U);
    msg.timeout = 41103U;
    msg.lat = 0.5323171079767608;
    msg.lon = 0.6641928819771546;
    msg.z = 0.16552837011961707;
    msg.z_units = 172U;
    msg.pitch = 0.6196980083332588;
    msg.amplitude = 0.6815699344265143;
    msg.duration = 26687U;
    msg.speed = 0.057080731202528434;
    msg.speed_units = 164U;
    msg.radius = 0.7886392328480858;
    msg.direction = 136U;
    msg.custom.assign("RQXZQRNBOVABYSXJEHLPHARJOZZKZKDGZGJYUUJZKITVWSGNBRXJNAHDSROOZIVPKYMRBUGB");

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
    msg.setTimeStamp(0.19150840579950124);
    msg.setSource(9235U);
    msg.setSourceEntity(239U);
    msg.setDestination(65203U);
    msg.setDestinationEntity(225U);
    msg.formation_name.assign("ESQIFLMHAFSNDGDQQKNKHYFOPKENRGIRCUDYNYLEDOGZUZYCTVWDGADDJPCRHJRJHVCDHIOONGPWVVCM");
    msg.reference_frame = 141U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59524U;
    tmp_msg_0.off_x = 0.9506200676061919;
    tmp_msg_0.off_y = 0.9915985159789699;
    tmp_msg_0.off_z = 0.35775548759341946;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FUVJZFAQLTWKZEPJHAQOSLYWRMTHREPAAJRSRPVILCMLPGVHMIGPWFTWYDAQHCWHNIBBUGGYDBFCMPCOBMDTUYKVGVFBLEDUSMLVQWGLFXTLEIYRQXUVZOGPHCJGZMZPEITXNJORDYXNFVZLBFUUOAAJCKEEYIVOSRYAILSOBSNWKXGKQAZFNDMSO");

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
    msg.setTimeStamp(0.32202503541607264);
    msg.setSource(60193U);
    msg.setSourceEntity(91U);
    msg.setDestination(28502U);
    msg.setDestinationEntity(110U);
    msg.formation_name.assign("TSKRANGPVOFTQZNOAJOGCJPHCPDKVRZHMJNTEDBEVHCKHPUIYFUAHYBQIPGDLWTMBFAGZMKUGQRCMNHTWMMAGMIGJWKWSPMRUTIXJHRIUEFKRJFKFWTSAVTQSGSZUCQICDXAQDXPVFCZRLGZ");
    msg.reference_frame = 119U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20269U;
    tmp_msg_0.off_x = 0.0028475317727001404;
    tmp_msg_0.off_y = 0.9427274424196588;
    tmp_msg_0.off_z = 0.6788289418840213;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NDOZFQCNZLKIMCMCURYHSOAVSENISRYHAPEEMBRACBCHTXWLUWVMXDKQGBHPHAFDKOMYPPKYLZTFJRQTJHPBEWKWTTKJUPQTILSOGJUYIULGENRMFTOLXNJVATVQ");

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
    msg.setTimeStamp(0.34083753693878327);
    msg.setSource(40125U);
    msg.setSourceEntity(186U);
    msg.setDestination(63562U);
    msg.setDestinationEntity(84U);
    msg.formation_name.assign("UEOGTDGYOHJHMGSAGSOHXRAKYZSWCRDQVKFXAECMWILMOLBKSONZMGIWQUXHMSLZYWJEBLWYDICUPLFLITOCASBXWBJJAIXNNFERPYXPHIODVKUPJESXXZHCTEZQHKBYMYZRZZUNVERVTRSRGMHILSDGDPGNVWFVXTRCOWJNQKWLFUGBQAZGJVMQCCUOATSNTJVQQTY");
    msg.reference_frame = 217U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 483U;
    tmp_msg_0.off_x = 0.44682517519203246;
    tmp_msg_0.off_y = 0.5797395817192312;
    tmp_msg_0.off_z = 0.9740324678121746;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HFYLKWIOOMAYHMWUWSOFOENHSUCLNRIARXXJVAFLEPCSWECEFFILPOTSXDXKGWDDUTLBKVJYZMTXNALPEQLRYUMVYGPNBCOVBBRHIDCYAHBSDLCZWYJGGZARRNGLSRVODCMRQUKPMDJUIVGMNZEHTGABRDZDBAPINOCJJBIXTXADZQMIMSXUMTUIJQHHQACZPSZZKLXFYOEEUENHJXFBVRSWJUWTFTGQOYCSTTFGKNQENWKIQ");

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
    msg.setTimeStamp(0.979745381143872);
    msg.setSource(54529U);
    msg.setSourceEntity(2U);
    msg.setDestination(29505U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("MOXAHTPBTXNVGHFQTFRQYIDLPRAZDWMCBNTKBYBLICOHOUNCZFAPMQOCBPVPAWAHNZQVKISGKSHGLZYCPCYULGM");
    msg.formation_name.assign("PWVKOMTCGOJHWPQSLZHBHZVZBKYUHYBEXQCKMLHRMPZZUGJWAAPKRWVKDABFSJLXJVV");
    msg.plan_id.assign("EBNVYLVQWDFZBNPMOGI");
    msg.description.assign("FJGYQUUMOMJYTSSNJLXSYJVHKZVUGMKOOUCCTHSBCBHCFZPRAVHVVZUTTYLEARWFEHVKGSNFWDTDGDVLBLGBYQSIXPTJZRHNBXFMJCPEQTEMAPIURWEQABQYLJLXXEPSFKGDEVPQNWUTGNWYYNQHKHCALXMOWOYLAI");
    msg.leader_speed = 0.5900887822916709;
    msg.leader_bank_lim = 0.1065777040729482;
    msg.pos_sim_err_lim = 0.2758183711262495;
    msg.pos_sim_err_wrn = 0.9722497016381991;
    msg.pos_sim_err_timeout = 39259U;
    msg.converg_max = 0.355278419643027;
    msg.converg_timeout = 45768U;
    msg.comms_timeout = 46332U;
    msg.turb_lim = 0.848275099692999;
    msg.custom.assign("PQDGYKHKBEXHHOYCPDFQGVTVVMPBWLIWSIUYUSQOXVXBJWXIXGCRLMIQUJHNTTEPDTKYCAGJRQZ");

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
    msg.setTimeStamp(0.8951464236004769);
    msg.setSource(42697U);
    msg.setSourceEntity(177U);
    msg.setDestination(34515U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("JEYTACHKAZJVKJAOITNAMXXLHEMWBCTECYHVVARZDO");
    msg.formation_name.assign("SPUZMLDUFAFMGULYBPFZPETUJGTQGGNESYIAJWODXEWXKDTZCZPD");
    msg.plan_id.assign("ERFUXAOWOBUPNVSANQXCHKZMTHQRHTQHMIZLFSZIULRJTDEEBJXGDLADRWKJNIXCDBVTKRKMASPKVDFHL");
    msg.description.assign("WTJZUYFUCGCOEOJZJHQXWYTBPRELABYDPGHLNBNBQVDSHQJMOZJYHFGRWTRKBOAFRTSCFZCMAXHDJWMEIMCZKNDPQDIFLZISKTCEIVOXWFTNVRQBLNVQUTNHWOLQEHWWKYZVIJLVCXEAKAEAFSPBUFLETPFRSNOYAMEGGIGSMSXSWPMVEXKMRHC");
    msg.leader_speed = 0.38143964049654333;
    msg.leader_bank_lim = 0.06455666549481776;
    msg.pos_sim_err_lim = 0.03769516590976685;
    msg.pos_sim_err_wrn = 0.9836300844585419;
    msg.pos_sim_err_timeout = 5920U;
    msg.converg_max = 0.02249190794503786;
    msg.converg_timeout = 6803U;
    msg.comms_timeout = 9845U;
    msg.turb_lim = 0.5647568757243453;
    msg.custom.assign("WSALXRMOKBARPUAAJCZICJYZYGMUTZTONUBJKIRMNEUBPFJEYOBMQMXMHHYIBFBIHSWQMJ");

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
    msg.setTimeStamp(0.2659036628661011);
    msg.setSource(3206U);
    msg.setSourceEntity(76U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("EGAJIEBEWIIUJANTMLWGFYNKAQOJOLHCJQPLOSGZSYPEPKCGYDBQKKARRDTTCECXHYDTXRCSPMUGWVTKMSNRUDSJNDTCMNMVBBILKZVPFGTDDUVFDBESTJAFQHBMNHBBHWVMORWOKLDJUAGOPUFQNGXLTZVIZXRZIPOZAVPUWEHWXXLEVRRGFAU");
    msg.formation_name.assign("NJEQIRSRDYCUINIYXIIWNDQDGSIVXNRUVKWBQLHSSLVEEGDLPRZKFOWXPZVTXRIZYOUXYZWHTAHGOQFTRBTBGPAGZKLRKUCLWJOHPSYDAXCRGDCNHMIFVPGSZBYTHTXQNHTWUAMWLZFKOCFUHBESKMDTLMBXEMJMFSQPVRDBQXYUV");
    msg.plan_id.assign("CZZAVAKZYEIKCWTVXMCPUFRLWWPPMQTZSVOGLWXDFPPSZXRBAJHLGOWPCRBFFRNZQMSEDKQKIVIAYMLNHLHIMUOIDZKRDAPHMYEPEXBJWCDEFOXNWUBNEBTDMGLLTXWLIQCGKOSJUOGUHWVOPXQWSOEBFZJJHASGYSOQYVVNURRGGXBKUBJAEQTDVHYHEKKZMQRMIOTYYKIFQZJMAYASJTGCLICGNRTSVLNHNISPRCTHQCEDFYJFBXDFN");
    msg.description.assign("RYWZETUQYHTHSEMUXKDUMEMWADAOOJZJSUKNVGTCJYFYSBMOHEDEPNGSLGMGSJ");
    msg.leader_speed = 0.3638148495131778;
    msg.leader_bank_lim = 0.04222349081839494;
    msg.pos_sim_err_lim = 0.09245859718115823;
    msg.pos_sim_err_wrn = 0.24676244853048468;
    msg.pos_sim_err_timeout = 16814U;
    msg.converg_max = 0.2993668818456834;
    msg.converg_timeout = 29833U;
    msg.comms_timeout = 13782U;
    msg.turb_lim = 0.9587489965140343;
    msg.custom.assign("HOYCQXYNWFGSWKINAFTEQJKZMDBVGTSAOZQOZUCHQMTCUSQCVGRPTHDNEIYKSAVDXOIGIGRBWBGELPOFVZMDQKFXEZXNPZJBRFEJTOPEOOOJUBGPJLPLKFUCQRDJDRWIEYHNFFZRCXYLMGMEHJKZNKAV");

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
    msg.setTimeStamp(0.7962808508251992);
    msg.setSource(58265U);
    msg.setSourceEntity(201U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(234U);
    msg.control_src = 1337U;
    msg.control_ent = 239U;
    msg.timeout = 0.9554388903431319;
    msg.loiter_radius = 0.7631635154727353;
    msg.altitude_interval = 0.20680948205839156;

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
    msg.setTimeStamp(0.4592760026790226);
    msg.setSource(43562U);
    msg.setSourceEntity(100U);
    msg.setDestination(34671U);
    msg.setDestinationEntity(7U);
    msg.control_src = 46602U;
    msg.control_ent = 188U;
    msg.timeout = 0.8973245630935598;
    msg.loiter_radius = 0.8295953501612764;
    msg.altitude_interval = 0.7133412993157404;

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
    msg.setTimeStamp(0.47845867470733117);
    msg.setSource(41113U);
    msg.setSourceEntity(5U);
    msg.setDestination(56910U);
    msg.setDestinationEntity(166U);
    msg.control_src = 55452U;
    msg.control_ent = 235U;
    msg.timeout = 0.9740110771429835;
    msg.loiter_radius = 0.543108961160872;
    msg.altitude_interval = 0.011424628358960631;

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
    msg.setTimeStamp(0.31276789455865806);
    msg.setSource(3267U);
    msg.setSourceEntity(202U);
    msg.setDestination(53045U);
    msg.setDestinationEntity(24U);
    msg.flags = 44U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5563730110223815;
    tmp_msg_0.speed_units = 196U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.10033595270644535;
    tmp_msg_1.z_units = 146U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.19372400358482156;
    msg.lon = 0.5006555193939675;
    msg.radius = 0.11764276045836264;

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
    msg.setTimeStamp(0.3374417468626766);
    msg.setSource(47801U);
    msg.setSourceEntity(53U);
    msg.setDestination(10325U);
    msg.setDestinationEntity(69U);
    msg.flags = 147U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8431734786889972;
    tmp_msg_0.speed_units = 238U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.45629326728761255;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.220270750578774;
    msg.lon = 0.7714677521151125;
    msg.radius = 0.8572935138108169;

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
    msg.setTimeStamp(0.8915381672311397);
    msg.setSource(10834U);
    msg.setSourceEntity(16U);
    msg.setDestination(6601U);
    msg.setDestinationEntity(198U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7997850877831769;
    tmp_msg_0.speed_units = 22U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2376015324181009;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8159344845137954;
    msg.lon = 0.8654682873275784;
    msg.radius = 0.3948249248966026;

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
    msg.setTimeStamp(0.44392670797270284);
    msg.setSource(28936U);
    msg.setSourceEntity(66U);
    msg.setDestination(57506U);
    msg.setDestinationEntity(233U);
    msg.control_src = 20478U;
    msg.control_ent = 238U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 106U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.36211528407199056;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9281487725774916;
    tmp_tmp_msg_0_1.z_units = 32U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8529705283154568;
    tmp_msg_0.lon = 0.0014860100504860974;
    tmp_msg_0.radius = 0.0015377241607541503;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 212U;

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
    msg.setTimeStamp(0.43805044774714597);
    msg.setSource(9637U);
    msg.setSourceEntity(231U);
    msg.setDestination(54082U);
    msg.setDestinationEntity(159U);
    msg.control_src = 3268U;
    msg.control_ent = 14U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4602842486063632;
    tmp_tmp_msg_0_0.speed_units = 65U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7235109026696914;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.34810685815716547;
    tmp_msg_0.lon = 0.3651181359304272;
    tmp_msg_0.radius = 0.5540923116395351;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 128U;

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
    msg.setTimeStamp(0.519847929089621);
    msg.setSource(274U);
    msg.setSourceEntity(112U);
    msg.setDestination(506U);
    msg.setDestinationEntity(35U);
    msg.control_src = 43590U;
    msg.control_ent = 33U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13670720609715037;
    tmp_tmp_msg_0_0.speed_units = 179U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.46363274932563014;
    tmp_tmp_msg_0_1.z_units = 82U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9844780387101563;
    tmp_msg_0.lon = 0.33379876070824865;
    tmp_msg_0.radius = 0.36232790241064616;
    msg.reference.set(tmp_msg_0);
    msg.state = 153U;
    msg.proximity = 8U;

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
    msg.setTimeStamp(0.43710155696655284);
    msg.setSource(54819U);
    msg.setSourceEntity(136U);
    msg.setDestination(25851U);
    msg.setDestinationEntity(26U);
    msg.ax_cmd = 0.8609279307658845;
    msg.ay_cmd = 0.39985269369987686;
    msg.az_cmd = 0.06231196682691076;
    msg.ax_des = 0.20392360618609606;
    msg.ay_des = 0.3313238401162423;
    msg.az_des = 0.5139584952201603;
    msg.virt_err_x = 0.7695950875885028;
    msg.virt_err_y = 0.9518703919008064;
    msg.virt_err_z = 0.032020658038537486;
    msg.surf_fdbk_x = 0.3287293908061335;
    msg.surf_fdbk_y = 0.6244387845092597;
    msg.surf_fdbk_z = 0.15375511837082012;
    msg.surf_unkn_x = 0.5706556953618382;
    msg.surf_unkn_y = 0.7248052163362145;
    msg.surf_unkn_z = 0.7389668888112849;
    msg.ss_x = 0.6439983309539514;
    msg.ss_y = 0.16094458294338654;
    msg.ss_z = 0.3173989612100413;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QGDVZJHTGUCPYTFNWZOCHUTEXYSWHHLOIELEVAJJWVYQSMCWFQBDYNISOWCXLXFXVLWFASAHUVNIAHRLGMZBDITSTVPEKOMDZJSMGQAZXENRAPYPQCEFOXZPUFAGTBQBQINMDXCGUBWVUJMDYOMGQSGRQFHDMGWZLBUERIUKNVVKAUROJELZJUCYKY");
    tmp_msg_0.dist = 0.08029949731100283;
    tmp_msg_0.err = 0.0717826572587319;
    tmp_msg_0.ctrl_imp = 0.7696912615481046;
    tmp_msg_0.rel_dir_x = 0.8132924114540222;
    tmp_msg_0.rel_dir_y = 0.03168153976401278;
    tmp_msg_0.rel_dir_z = 0.2588366229647776;
    tmp_msg_0.err_x = 0.5889164569539017;
    tmp_msg_0.err_y = 0.014186087432387473;
    tmp_msg_0.err_z = 0.9449557966618917;
    tmp_msg_0.rf_err_x = 0.09916804238222132;
    tmp_msg_0.rf_err_y = 0.3702289283733541;
    tmp_msg_0.rf_err_z = 0.4024675057486613;
    tmp_msg_0.rf_err_vx = 0.3855958781689338;
    tmp_msg_0.rf_err_vy = 0.10235642693382707;
    tmp_msg_0.rf_err_vz = 0.04719826054021303;
    tmp_msg_0.ss_x = 0.8897552431306981;
    tmp_msg_0.ss_y = 0.4133199763684622;
    tmp_msg_0.ss_z = 0.8289405698793667;
    tmp_msg_0.virt_err_x = 0.9204435345611681;
    tmp_msg_0.virt_err_y = 0.20489921173978332;
    tmp_msg_0.virt_err_z = 0.23483256469334135;
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
    msg.setTimeStamp(0.46614742277556676);
    msg.setSource(18491U);
    msg.setSourceEntity(217U);
    msg.setDestination(13978U);
    msg.setDestinationEntity(10U);
    msg.ax_cmd = 0.8739993667265381;
    msg.ay_cmd = 0.49205445923917046;
    msg.az_cmd = 0.5781792320494069;
    msg.ax_des = 0.7550705951183538;
    msg.ay_des = 0.5184248471526236;
    msg.az_des = 0.4786130438890651;
    msg.virt_err_x = 0.7058890221888006;
    msg.virt_err_y = 0.3249546394105026;
    msg.virt_err_z = 0.012317964788857605;
    msg.surf_fdbk_x = 0.7578400134685614;
    msg.surf_fdbk_y = 0.3667796478521752;
    msg.surf_fdbk_z = 0.2330295048738451;
    msg.surf_unkn_x = 0.5919266249712971;
    msg.surf_unkn_y = 0.2667565875319061;
    msg.surf_unkn_z = 0.3953360188007121;
    msg.ss_x = 0.6539327882117026;
    msg.ss_y = 0.1674851742075396;
    msg.ss_z = 0.3644928780438984;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AXGFOTHVGEJWKVMTDVIOUTQJSRMLEYEHPMBQIUKQWVBFMDTURFKXJTRQAMJXPSLICCYQDCPZOBYFSJDYOGSQXYCCWDFJGVGTNOLTCJGEAHARCNVKKZKBAHLRNDBPYGOCAWZSNSYZZPTUBGEAIKJDVUXAXHSKMZWCEFRPBJUJNBSLTPLNMMBROUUZRYHLYGUDNIRIWISPYIQCPSXWGZEQIKXWOOR");
    tmp_msg_0.dist = 0.9673678388506983;
    tmp_msg_0.err = 0.918018002083647;
    tmp_msg_0.ctrl_imp = 0.3837896617212566;
    tmp_msg_0.rel_dir_x = 0.45649244492300145;
    tmp_msg_0.rel_dir_y = 0.4339120185310811;
    tmp_msg_0.rel_dir_z = 0.16765019569720896;
    tmp_msg_0.err_x = 0.9686111260196247;
    tmp_msg_0.err_y = 0.4758436677165334;
    tmp_msg_0.err_z = 0.524850985919246;
    tmp_msg_0.rf_err_x = 0.05510286191296798;
    tmp_msg_0.rf_err_y = 0.9933190594114858;
    tmp_msg_0.rf_err_z = 0.6632836571334818;
    tmp_msg_0.rf_err_vx = 0.526037867848636;
    tmp_msg_0.rf_err_vy = 0.5035929508154254;
    tmp_msg_0.rf_err_vz = 0.8576331203582388;
    tmp_msg_0.ss_x = 0.006810670657670825;
    tmp_msg_0.ss_y = 0.8944634313205713;
    tmp_msg_0.ss_z = 0.9608706434393874;
    tmp_msg_0.virt_err_x = 0.14962641717525305;
    tmp_msg_0.virt_err_y = 0.9845172866739553;
    tmp_msg_0.virt_err_z = 0.8959481754941693;
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
    msg.setTimeStamp(0.34995696474301896);
    msg.setSource(38296U);
    msg.setSourceEntity(46U);
    msg.setDestination(53567U);
    msg.setDestinationEntity(57U);
    msg.ax_cmd = 0.9844534856257554;
    msg.ay_cmd = 0.053538038691623546;
    msg.az_cmd = 0.1650710858003983;
    msg.ax_des = 0.13500289020140666;
    msg.ay_des = 0.4417221990808661;
    msg.az_des = 0.6079040898493522;
    msg.virt_err_x = 0.5618733641228608;
    msg.virt_err_y = 0.7012752552381346;
    msg.virt_err_z = 0.9765716737672525;
    msg.surf_fdbk_x = 0.564164533520634;
    msg.surf_fdbk_y = 0.26066774767202616;
    msg.surf_fdbk_z = 0.08155106347947916;
    msg.surf_unkn_x = 0.7459851982899478;
    msg.surf_unkn_y = 0.09310641860741731;
    msg.surf_unkn_z = 0.6110010449175096;
    msg.ss_x = 0.12288008600072797;
    msg.ss_y = 0.7923885945395543;
    msg.ss_z = 0.41207087187737446;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YFADAGBJSWAZEZNFDCUBKNPQLRWCAMMBKEFRRMKEPCGYRZXVPDAJRCHZYFNMVMNAZPHQLQOUTEWCIQJPKAFOOYSVGUGEGLFIYSBIHOLINOEOQRQWFTXGVOXVLHVBZBYMYCJBEAMIHTSMLJOSWLTDBDMEJBUPPNSGYVWQGKKSKHIPDTHUVSZDJFHHQUZQWLRMXVGKRICIWTXQ");
    tmp_msg_0.dist = 0.08755102448378582;
    tmp_msg_0.err = 0.7733732275703763;
    tmp_msg_0.ctrl_imp = 0.9316832533292219;
    tmp_msg_0.rel_dir_x = 0.29482453925776386;
    tmp_msg_0.rel_dir_y = 0.21783769033539124;
    tmp_msg_0.rel_dir_z = 0.9503623204587016;
    tmp_msg_0.err_x = 0.8508603115667721;
    tmp_msg_0.err_y = 0.21134717953377158;
    tmp_msg_0.err_z = 0.3881476842918071;
    tmp_msg_0.rf_err_x = 0.9792767955774385;
    tmp_msg_0.rf_err_y = 0.2882333544841844;
    tmp_msg_0.rf_err_z = 0.86628231064298;
    tmp_msg_0.rf_err_vx = 0.06874145935287124;
    tmp_msg_0.rf_err_vy = 0.6042957600472947;
    tmp_msg_0.rf_err_vz = 0.3224139299330212;
    tmp_msg_0.ss_x = 0.9749664275867341;
    tmp_msg_0.ss_y = 0.7683427422824713;
    tmp_msg_0.ss_z = 0.4918169051284045;
    tmp_msg_0.virt_err_x = 0.061188975241318944;
    tmp_msg_0.virt_err_y = 0.9333177296224263;
    tmp_msg_0.virt_err_z = 0.29607318309052355;
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
    msg.setTimeStamp(0.05469456598049116);
    msg.setSource(24511U);
    msg.setSourceEntity(216U);
    msg.setDestination(50713U);
    msg.setDestinationEntity(133U);
    msg.s_id.assign("EDNYMDGBHJGFVXWEZNHNYYFFXGPTACTKJDVYWOCCARYWRUIX");
    msg.dist = 0.1252787307231571;
    msg.err = 0.39487653778113696;
    msg.ctrl_imp = 0.6829077222496658;
    msg.rel_dir_x = 0.04781925500557094;
    msg.rel_dir_y = 0.4835872633499291;
    msg.rel_dir_z = 0.9462254526325383;
    msg.err_x = 0.9836922761868823;
    msg.err_y = 0.32670266970324413;
    msg.err_z = 0.9501666010111103;
    msg.rf_err_x = 0.7859722491195668;
    msg.rf_err_y = 0.7929689930830398;
    msg.rf_err_z = 0.8014456324718426;
    msg.rf_err_vx = 0.6187656535736838;
    msg.rf_err_vy = 0.22425236579294827;
    msg.rf_err_vz = 0.2869079368637143;
    msg.ss_x = 0.4376649337225178;
    msg.ss_y = 0.8759932103107546;
    msg.ss_z = 0.3871177752536432;
    msg.virt_err_x = 0.08615977072019709;
    msg.virt_err_y = 0.47494285579915396;
    msg.virt_err_z = 0.1568527527437822;

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
    msg.setTimeStamp(0.828940038493812);
    msg.setSource(60107U);
    msg.setSourceEntity(173U);
    msg.setDestination(24265U);
    msg.setDestinationEntity(211U);
    msg.s_id.assign("UDABXLIOYUOVVNWQMILWCBMSFMPCYFJDVZAMCTMRGCKKYJZECCNAJRVXHPHDGEWSELHQOODYWQFBVHZLQQGAOFVQEYDBVIKCMNNYZPUEUK");
    msg.dist = 0.7331113302863944;
    msg.err = 0.18171804933016855;
    msg.ctrl_imp = 0.9765274068623122;
    msg.rel_dir_x = 0.17090233405825317;
    msg.rel_dir_y = 0.7970689836918142;
    msg.rel_dir_z = 0.373956214988308;
    msg.err_x = 0.6609760111367838;
    msg.err_y = 0.8207329318362663;
    msg.err_z = 0.33694743156196527;
    msg.rf_err_x = 0.3589512269662788;
    msg.rf_err_y = 0.8652193174187558;
    msg.rf_err_z = 0.8024124293719948;
    msg.rf_err_vx = 0.45174762501401944;
    msg.rf_err_vy = 0.18111811748076878;
    msg.rf_err_vz = 0.0021927538416427472;
    msg.ss_x = 0.3302043922871576;
    msg.ss_y = 0.46783857359381287;
    msg.ss_z = 0.2912712811009561;
    msg.virt_err_x = 0.2982341963855707;
    msg.virt_err_y = 0.6003344077832273;
    msg.virt_err_z = 0.47125015900430933;

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
    msg.setTimeStamp(0.9683562998183628);
    msg.setSource(10053U);
    msg.setSourceEntity(38U);
    msg.setDestination(26019U);
    msg.setDestinationEntity(64U);
    msg.s_id.assign("RKQWTPBXZXOLXTRCIOHYXTMQGEHENBZUCWFFUSFIEUEBTEMXYIJKDWITOORUHOTKSSCXWCQPEKJGA");
    msg.dist = 0.13668093118741909;
    msg.err = 0.4567777910707611;
    msg.ctrl_imp = 0.5273101227906616;
    msg.rel_dir_x = 0.25053938130818554;
    msg.rel_dir_y = 0.2467637847673213;
    msg.rel_dir_z = 0.296774057073949;
    msg.err_x = 0.5165766767945961;
    msg.err_y = 0.7140816233726781;
    msg.err_z = 0.6321504487769326;
    msg.rf_err_x = 0.6127185943038105;
    msg.rf_err_y = 0.8395196764530416;
    msg.rf_err_z = 0.2860935024706369;
    msg.rf_err_vx = 0.5949147126175877;
    msg.rf_err_vy = 0.896536071883869;
    msg.rf_err_vz = 0.35436787326709485;
    msg.ss_x = 0.320884147410737;
    msg.ss_y = 0.5230346655059116;
    msg.ss_z = 0.21001749337022801;
    msg.virt_err_x = 0.09200958443800755;
    msg.virt_err_y = 0.6060277234294247;
    msg.virt_err_z = 0.18131590756595672;

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
    msg.setTimeStamp(0.10171805722906235);
    msg.setSource(58431U);
    msg.setSourceEntity(76U);
    msg.setDestination(6499U);
    msg.setDestinationEntity(105U);
    msg.timeout = 33842U;
    msg.rpm = 0.04683656275575698;
    msg.direction = 39U;
    msg.custom.assign("GJIKZSUDXKNWJUPSLINVUKULJLMMUWTANVIORJSJUPXEWHQZQDDYDAQOXBULHIGMBICQIXBAOGVKVMWXEFRTELCHLXTXCMONECOPEJZAVPHYIQCTHYYANLBKERIPRPGBMCTJGCCIFJSQTTAPZHPKZJNYPOJ");

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
    msg.setTimeStamp(0.8448582390108925);
    msg.setSource(55658U);
    msg.setSourceEntity(222U);
    msg.setDestination(49140U);
    msg.setDestinationEntity(159U);
    msg.timeout = 1219U;
    msg.rpm = 0.9672388297595816;
    msg.direction = 151U;
    msg.custom.assign("DKBZUBQUUZRRGFIVQCZWLLPGHVPCUXWMPYIFUCVRSTVDVEPMETGXLUEQLXMKPFHJXWYNTKAVAHKGURQPQSISLDWRZBNDOGTEAKAKACGKLSVPLHGOFRUHOZAQCUBUIKXPIACJMNWZYVHLESEZHEJYJMTROXBHDQMGN");

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
    msg.setTimeStamp(0.48260047456258226);
    msg.setSource(39291U);
    msg.setSourceEntity(187U);
    msg.setDestination(27260U);
    msg.setDestinationEntity(208U);
    msg.timeout = 31870U;
    msg.rpm = 0.3284659605283776;
    msg.direction = 58U;
    msg.custom.assign("IADPEMUFHGYJCNQNKUOEIHRFRZUVQGGYHQAYCMAXYDXMKQZSFHFAYGAJTGBMDWUKKLQCTHBDSDVJQDBVEPNLOKTSPICHSNYLFHGKEPNPPRJQESSCOWKMIVGJPICTRUBCDTDWOWLXEVLXMLRJSWSGOELZJVDVOLBNAOZUKNEILQIRRAQCYUZAIU");

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
    msg.setTimeStamp(0.7733768210784167);
    msg.setSource(43044U);
    msg.setSourceEntity(103U);
    msg.setDestination(31603U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("VMIUPZEZLPEDXQHUVXWHFZJQHSPELEGYGGWLILXZGHZKBCKHPOORQFOSSCCWXGDNVDGQEYCFOBRXTOINOQJCSRXYMFLRANTBJEHKSTIZOQHKEYBYUJNDVIIPEFMBIBYLI");
    msg.type = 5U;
    msg.op = 233U;
    msg.group_name.assign("DOQGGURFFREYPTETWXSOBTFIYLCMROOYNQKESNCIRNBCDYLDTGSAMLCZHMALHTZUPMKPHWTWGZVEBOYEYOBTJSWBXXGZTOPJWGZEXCHQXTAKWPJJPJZIMLYHKPMKBGKABFQHSQDJIEHVTFDPJUNAWGUCRNPEUKGJLAIPWNYESJLKXQKQFDUIVCCJULDLRSNYRXWMLIIZAFFCDWRZM");
    msg.plan_id.assign("PCHVFHVPDEYCBWZTKMOZGUNFMSTFMHUMXLKXIKBUGZKWLQQJNSPDHVMOWALYMQGWVLOEAEIRZTKVFONNRHGUGCYHQASEBZNORJBEOKFMVQSPTXTYPJQKCBHCPZKDQSUWAYMVYPRTPOLILAOQLSXQWFYDDEOBHTIFCKIAIRUEGBSVWROCFEXBQDYNXAILZAYWXRJHUFGSEJPRZSTRPJNL");
    msg.description.assign("JYKYIBNMMNKRUXBYKUXGDCESPBOEHGWKRHCFIAFVGJHJJIKVXUTQQZCXDUWJVFILFWBYOGATSWARMXRRLTDNCDMODTYMOCJBSZZCSXEISLTFLGDQKRXJAWMEXIALAIGSQYPKQONESBYLZSIPQMVBUPVRUNEHTVHPMHBXVZTIAZDFPJDVRNKOALUCVLGOTMWENNEAWUIJCQEGGFRYBQZBYEZ");
    msg.reference_frame = 247U;
    msg.leader_bank_lim = 0.032587404603313996;
    msg.leader_speed_min = 0.6503978196869961;
    msg.leader_speed_max = 0.5231938002745673;
    msg.leader_alt_min = 0.33598412523184784;
    msg.leader_alt_max = 0.4064494633160395;
    msg.pos_sim_err_lim = 0.9272713910913467;
    msg.pos_sim_err_wrn = 0.18177374698450988;
    msg.pos_sim_err_timeout = 11126U;
    msg.converg_max = 0.18399458221307396;
    msg.converg_timeout = 12426U;
    msg.comms_timeout = 43178U;
    msg.turb_lim = 0.19022348488555396;
    msg.custom.assign("ZXNHIZUVQRDMUOLJEUUOMKCQBZOGEWMLEEWVNKCVNKFHMAJCYVQBJTQPKMPIMZPHELGSXIKIRWREPNIOAMOJYBMLYRQSJGBQCKYRUYWUPOGNHDWSKBAIBYCDQZDGXLZVFDLPRTOOQWZEATNZYBUXSZSTSNTRCNFJUYPGWGLFHEPDIDXAFUDVFXKCLTWMAHBSRVFKACFOSAJTHBODXJTWNVHTXQPIGBXCVDXMRCTLAWQSJUHNVAFLHG");

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
    msg.setTimeStamp(0.4557552526492078);
    msg.setSource(55650U);
    msg.setSourceEntity(202U);
    msg.setDestination(19428U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("ZGJWFUZYJNKMEQPCDGRROXABJLOWDBVGTOP");
    msg.type = 71U;
    msg.op = 105U;
    msg.group_name.assign("BCMNMXTOTRQYMTXPDZEAWQLLNJGMVISNOMNEYJGRILKOPWTKKATJNJIYDVUIEHGHBXFUYGHQUSVCTZVBJIPDLJQJWMMSUCGXHDFKZRUUFGMFRTZUDKCUEZKKVXRQNEBCLQASHJFNADPINOFYSRXSYDWNLYLAFJBCOEATPZKIVVXXFOSCDHWPFZGXARQWOWPSSOHIGLHBKAGYTWQWPEPBYLCDTCZLCRFNUMQESBOGYKVUDIAOBIPEJVXBHQAWE");
    msg.plan_id.assign("UNKDCZLIMESLZNVDAKVLKIBKMRUHT");
    msg.description.assign("HFSICPOTMSZYVIYXPGNTHGASKPDMRUDCHSBVVTGBAAKYIMISBPGCCZYDTNUWRDNFQIENDWUTYCQOZJRYBNAOWCMWHXSBZBVEZKUBYUHEFVMSXRYLNKBFMFXQQKIRWO");
    msg.reference_frame = 239U;
    msg.leader_bank_lim = 0.126949284595825;
    msg.leader_speed_min = 0.14046680904191367;
    msg.leader_speed_max = 0.7762524409009659;
    msg.leader_alt_min = 0.11087978933347908;
    msg.leader_alt_max = 0.8195865209987991;
    msg.pos_sim_err_lim = 0.303832435473379;
    msg.pos_sim_err_wrn = 0.28965239744376936;
    msg.pos_sim_err_timeout = 52468U;
    msg.converg_max = 0.6551617098509168;
    msg.converg_timeout = 40574U;
    msg.comms_timeout = 52284U;
    msg.turb_lim = 0.14907336999406484;
    msg.custom.assign("YVSMWOKAMXBQYKVIPZLNTLKWZWETLIMIWBDNPKPJFUWHQBSWILOGNNDIZJDSQVOXLAFXOSVGBOJMJMAVJQOYFXJCPPDPURDCFMNKYBNGATVFEGEICMEXRLJRTKWEHGSFQHZRQQXNVOSUCICQGR");

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
    msg.setTimeStamp(0.31588668199598624);
    msg.setSource(33356U);
    msg.setSourceEntity(105U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("HLLLUNIDOSAHRIPOEVXYZWIDOGHWPYMICTLQVLWUPJHYEBZLFWPPGEJKYZXVBSYURXOYHRVVSYOCFPQQM");
    msg.type = 222U;
    msg.op = 128U;
    msg.group_name.assign("OKVRAKBTHYZJHDSANJJFBJNQOUNFFHWI");
    msg.plan_id.assign("EFJIESQNDZPHHGNOKCQPEZZJGIMMWKIUYXGLVMJGYUEZKISUTSZZHWPMOUT");
    msg.description.assign("ALQGMIYZIDVVAJTIPLWDFLRFRJDEAAHKNICGEVUEPDRZIFHFAOSOYFKKQJVMYHTRZXR");
    msg.reference_frame = 89U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27851U;
    tmp_msg_0.off_x = 0.055619191050680916;
    tmp_msg_0.off_y = 0.3510131220140774;
    tmp_msg_0.off_z = 0.881640483506251;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.011874613299021397;
    msg.leader_speed_min = 0.1528637700110449;
    msg.leader_speed_max = 0.8465105677930082;
    msg.leader_alt_min = 0.08061639724874636;
    msg.leader_alt_max = 0.628759217364764;
    msg.pos_sim_err_lim = 0.8661052591986211;
    msg.pos_sim_err_wrn = 0.8974431938393538;
    msg.pos_sim_err_timeout = 34766U;
    msg.converg_max = 0.6374330633388278;
    msg.converg_timeout = 42096U;
    msg.comms_timeout = 55093U;
    msg.turb_lim = 0.1983030369388481;
    msg.custom.assign("RODTKBSYKNOMQIMQVATKHJFLMRRMTAJPKBTQWCLKURVEDSPLWJWDNIBBIHFSPUFEHXIWDUNNBAGOKZYYHAPQLGNLYUAZHCXVGRMIEMVEPWYVGKQXDYAOAQXSOILCFDELMHTEZSTWTPTWNFXRCFOMSAQGSINUMDBUFLIVJQSGJCFUNQLNJUWCZFCUZTVZCYEVYPYGVEOSXXHSQIDMJILRBYEKNGCZXO");

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
    msg.setTimeStamp(0.2386950150165944);
    msg.setSource(48817U);
    msg.setSourceEntity(88U);
    msg.setDestination(11027U);
    msg.setDestinationEntity(148U);
    msg.timeout = 53265U;
    msg.lat = 0.9991428361161463;
    msg.lon = 0.4569667635789354;
    msg.z = 0.2534927896574066;
    msg.z_units = 147U;
    msg.speed = 0.4706504056370958;
    msg.speed_units = 142U;
    msg.custom.assign("HUINKDJKUFQDQTJEBG");

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
    msg.setTimeStamp(0.4271249389640489);
    msg.setSource(3147U);
    msg.setSourceEntity(224U);
    msg.setDestination(26392U);
    msg.setDestinationEntity(64U);
    msg.timeout = 41109U;
    msg.lat = 0.630793637679915;
    msg.lon = 0.2593018693944421;
    msg.z = 0.35285038746475705;
    msg.z_units = 230U;
    msg.speed = 0.3845008700802325;
    msg.speed_units = 252U;
    msg.custom.assign("PEIHNFSWSWLQFGYUCBSYGIIHOEQIDKSFYNKWRRMMJZCVCE");

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
    msg.setTimeStamp(0.5074932594257839);
    msg.setSource(62873U);
    msg.setSourceEntity(77U);
    msg.setDestination(4773U);
    msg.setDestinationEntity(211U);
    msg.timeout = 34659U;
    msg.lat = 0.9645394761065418;
    msg.lon = 0.3469950067378432;
    msg.z = 0.9182781177179296;
    msg.z_units = 46U;
    msg.speed = 0.35874105824853;
    msg.speed_units = 61U;
    msg.custom.assign("JRAPERJYVJDGQEUFTFBZXCRBQSGUIHPFDTSFPCXNRKPIWVOVQGDHZWOZWIINRCKZHSQLR");

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
    msg.setTimeStamp(0.23353311974364477);
    msg.setSource(28400U);
    msg.setSourceEntity(176U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(30U);
    msg.timeout = 25639U;
    msg.lat = 0.4083953513244255;
    msg.lon = 0.2809227445317093;
    msg.z = 0.685937953579097;
    msg.z_units = 153U;
    msg.speed = 0.2911408805420621;
    msg.speed_units = 230U;
    msg.custom.assign("ROOWGGTUVBKGQXQ");

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
    msg.setTimeStamp(0.6002971866509588);
    msg.setSource(43740U);
    msg.setSourceEntity(125U);
    msg.setDestination(47245U);
    msg.setDestinationEntity(57U);
    msg.timeout = 4942U;
    msg.lat = 0.6574767518732759;
    msg.lon = 0.4224404988964928;
    msg.z = 0.4485223776911863;
    msg.z_units = 36U;
    msg.speed = 0.09725250573165911;
    msg.speed_units = 183U;
    msg.custom.assign("CKFPRDYBDNEOKPENBWSZVJYYHKOLZPRXVJPOYIANKBRNQMFTECOKRBSCEDZJCQNSIFCWTEPXLMDFCGRBLHSEGSZZRMGXCHKUVACPGAKNVMFYOFGTURILVDQBIRBGCDQDQLGRJNRZBADHGYNTETHUOVQAEQNJYSMTEGSTSPICSWSXMIBWXDYFJMXPKEZHPOIWAKLODWFUWLXILHUVTUOZIGMAZULQVHAJYQNAMYJXMWJPX");

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
    msg.setTimeStamp(0.17575399497452426);
    msg.setSource(11052U);
    msg.setSourceEntity(99U);
    msg.setDestination(23449U);
    msg.setDestinationEntity(68U);
    msg.timeout = 6024U;
    msg.lat = 0.534297600754189;
    msg.lon = 0.520930136961339;
    msg.z = 0.5089719004467741;
    msg.z_units = 175U;
    msg.speed = 0.9446580384373712;
    msg.speed_units = 11U;
    msg.custom.assign("IAZHSLFQOJLYSLJEQYBLTEUVYSXMJIQZFLBNIKNRMHOGNYAXBKRGUDNAHDFPBFCGHFPXNSXHDZHZSYECUOMLIATEERENTWQTCJCFAKOXWPSHRMOPADKMBKTIVLWCVLQBPYYUHJDNKJQFMZZORGB");

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
    msg.setTimeStamp(0.2764965274227713);
    msg.setSource(48915U);
    msg.setSourceEntity(47U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(196U);
    msg.arrival_time = 0.35246895063005645;
    msg.lat = 0.42914311397595706;
    msg.lon = 0.08820350922009157;
    msg.z = 0.4023970996782841;
    msg.z_units = 72U;
    msg.travel_z = 0.453222642729757;
    msg.travel_z_units = 30U;
    msg.delayed = 249U;

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
    msg.setTimeStamp(0.5049294586920293);
    msg.setSource(8280U);
    msg.setSourceEntity(84U);
    msg.setDestination(27809U);
    msg.setDestinationEntity(142U);
    msg.arrival_time = 0.22696218165277704;
    msg.lat = 0.44097518511964295;
    msg.lon = 0.0851786277512715;
    msg.z = 0.4560616328493313;
    msg.z_units = 191U;
    msg.travel_z = 0.44197441846933483;
    msg.travel_z_units = 134U;
    msg.delayed = 252U;

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
    msg.setTimeStamp(0.006039784934835035);
    msg.setSource(53126U);
    msg.setSourceEntity(252U);
    msg.setDestination(10206U);
    msg.setDestinationEntity(196U);
    msg.arrival_time = 0.11360556582471715;
    msg.lat = 0.4596388980210141;
    msg.lon = 0.8360519453017086;
    msg.z = 0.42874117278607093;
    msg.z_units = 2U;
    msg.travel_z = 0.4355175907554435;
    msg.travel_z_units = 65U;
    msg.delayed = 85U;

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
    msg.setTimeStamp(0.4268252311233901);
    msg.setSource(27166U);
    msg.setSourceEntity(146U);
    msg.setDestination(13137U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.7000928803103501;
    msg.lon = 0.15241973654609353;
    msg.z = 0.11771805841421856;
    msg.z_units = 172U;
    msg.speed = 0.03964133354603949;
    msg.speed_units = 25U;
    msg.bearing = 0.9316538971652475;
    msg.cross_angle = 0.3395261861453812;
    msg.width = 0.8837820734162238;
    msg.length = 0.8923438224373155;
    msg.coff = 151U;
    msg.angaperture = 0.6785540925582845;
    msg.range = 31198U;
    msg.overlap = 19U;
    msg.flags = 49U;
    msg.custom.assign("VBLBYNUHTIAYZIJCUMLYHCVYWQMDSMEYOWKFTXYVOVLTSLQPNFFHEXJOQQJAZLOGRQIUSSRIRSAPYSCZJTAPATVBXKKVXOMSCAAZMGBUWRVLEZPLIHSQTGKRXNPAIDNZHJCDFWNGRTUBNODAZEEBVZCC");

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
    msg.setTimeStamp(0.2744804400909693);
    msg.setSource(10833U);
    msg.setSourceEntity(57U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.2191350745573113;
    msg.lon = 0.1397915144139743;
    msg.z = 0.5740787273250021;
    msg.z_units = 40U;
    msg.speed = 0.7853352252405745;
    msg.speed_units = 252U;
    msg.bearing = 0.7151046833267567;
    msg.cross_angle = 0.6165570920896729;
    msg.width = 0.5716627430566794;
    msg.length = 0.9438129458130049;
    msg.coff = 251U;
    msg.angaperture = 0.28038982579155103;
    msg.range = 55702U;
    msg.overlap = 49U;
    msg.flags = 175U;
    msg.custom.assign("PCBTFUCKVWBZPZNAGKBYZAAVBBINGIQIMCSMQAYJLFEEAEMSHHSWLCNFTBAEIGCGMEDDPCWRFMNJXHRRNYGLAULJZDDZXBLNWJCGUEKOZCQO");

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
    msg.setTimeStamp(0.6165756970243792);
    msg.setSource(20189U);
    msg.setSourceEntity(67U);
    msg.setDestination(63928U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.9051203658348025;
    msg.lon = 0.8214524284265139;
    msg.z = 0.5462997354759465;
    msg.z_units = 1U;
    msg.speed = 0.4900109841293425;
    msg.speed_units = 129U;
    msg.bearing = 0.9407861229117525;
    msg.cross_angle = 0.6344230060886163;
    msg.width = 0.5623655189550832;
    msg.length = 0.5703259305185325;
    msg.coff = 171U;
    msg.angaperture = 0.9820345275061625;
    msg.range = 31640U;
    msg.overlap = 198U;
    msg.flags = 134U;
    msg.custom.assign("ZWRVJIDVPRDHTQGTKKGYFLGQOPXBBWFGGCPJXYVSYMSHDDLSAQMTACOXNOFESJAUPOJMMFTMGJBZJLUEHTASUSGVQZMMQZRSIWXOCQPUAUUJBEIPRCVRDHHYSQLYKTVWPPUXQTBKITVGLFBKLCUSLKAANGANOHWTOEDIPYKXVSQRABOBEGZMOKHZCELVJNCLIUWJXIZRUEFPFRCYACCYDTRBMBWNLNWZXVWKNDDQN");

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
    msg.setTimeStamp(0.4631538029514858);
    msg.setSource(36855U);
    msg.setSourceEntity(178U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(133U);
    msg.timeout = 64683U;
    msg.lat = 0.9098147546853655;
    msg.lon = 0.018838976838908117;
    msg.z = 0.6136326644809496;
    msg.z_units = 120U;
    msg.speed = 0.9992285053552488;
    msg.speed_units = 211U;
    msg.syringe0 = 34U;
    msg.syringe1 = 25U;
    msg.syringe2 = 54U;
    msg.custom.assign("QDSZTHIVGCZURDVBMFOSSJCXIUUDZMMULVFJQQSGEWRWDQG");

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
    msg.setTimeStamp(0.9466707144641647);
    msg.setSource(36019U);
    msg.setSourceEntity(150U);
    msg.setDestination(34416U);
    msg.setDestinationEntity(13U);
    msg.timeout = 32257U;
    msg.lat = 0.45985258345484226;
    msg.lon = 0.860281485268645;
    msg.z = 0.27862240891617673;
    msg.z_units = 108U;
    msg.speed = 0.12512976029251965;
    msg.speed_units = 35U;
    msg.syringe0 = 231U;
    msg.syringe1 = 92U;
    msg.syringe2 = 156U;
    msg.custom.assign("NGVEIBSDYRXVNJGENYFUMCQBPAPNDUMDTJBYWWJTOYPKOVURXMVKWYJGCBUKFILOJMDXQMAFWELCLZMRFPSJHZLAJSKSKDTKLIHXFCTSDQGBOSGCZGHVUQ");

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
    msg.setTimeStamp(0.8509380272764441);
    msg.setSource(4861U);
    msg.setSourceEntity(4U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(87U);
    msg.timeout = 35123U;
    msg.lat = 0.4382976922763775;
    msg.lon = 0.98809953853318;
    msg.z = 0.8449685301439712;
    msg.z_units = 154U;
    msg.speed = 0.3039149783445311;
    msg.speed_units = 39U;
    msg.syringe0 = 22U;
    msg.syringe1 = 91U;
    msg.syringe2 = 234U;
    msg.custom.assign("MKAEDLKQERSFYILTQGKNRGFLKYWZOHDCCLUPDJITYGIFCRIINXWPUUSMOCUADVGMCQDJKEYNZUBZYGWHNJNQXBORUVFZVPMBUYSKMHOYXHNQATHCSAWRWZKLGQVSTWAAHXZPJHVHTNPIMKVBZWNLCBPECQTBOJOMIAHXSMDOTEJINMTZ");

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
    msg.setTimeStamp(0.15949893930847336);
    msg.setSource(64895U);
    msg.setSourceEntity(206U);
    msg.setDestination(56083U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.9437812757293915);
    msg.setSource(32810U);
    msg.setSourceEntity(179U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.5228989134405915);
    msg.setSource(30523U);
    msg.setSourceEntity(79U);
    msg.setDestination(47311U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.46396427159711817);
    msg.setSource(6579U);
    msg.setSourceEntity(200U);
    msg.setDestination(29442U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.5803450510453634;
    msg.lon = 0.38809227416224745;
    msg.z = 0.4769211898758803;
    msg.z_units = 75U;
    msg.speed = 0.3463907901635025;
    msg.speed_units = 31U;
    msg.takeoff_pitch = 0.3658593920495048;
    msg.custom.assign("WOQMREWHCPABKSPVWPJUVZLFIMYLNDLNADOXNXPCWWEZZVMDMUWHWJPBRBKYATHLIIYJNFZLOYWDGTNXKXMTYJMUJXEHZVFKRARODEZEYDCRJSBTXGYGCSKJILDTEAHFQZYXEDSHHSCQRFBKOUMECSJGVCLQGYATBZRTPXOABNSBRVJVWOBUKLN");

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
    msg.setTimeStamp(0.8485932576828);
    msg.setSource(35178U);
    msg.setSourceEntity(189U);
    msg.setDestination(40124U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.05315557837990359;
    msg.lon = 0.17475710680337653;
    msg.z = 0.6744576802976076;
    msg.z_units = 112U;
    msg.speed = 0.9435726522765646;
    msg.speed_units = 45U;
    msg.takeoff_pitch = 0.7952452511130857;
    msg.custom.assign("YDFUQTOILRBSZHJAXTPMXQUYFQMEVGWPBYGELMXSCKNBSATHAFMSPZJWZXZKIHROTWIGFHK");

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
    msg.setTimeStamp(0.274759606192854);
    msg.setSource(8790U);
    msg.setSourceEntity(100U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.9844978803803167;
    msg.lon = 0.027051221652317103;
    msg.z = 0.0241080462171257;
    msg.z_units = 175U;
    msg.speed = 0.10214729719263804;
    msg.speed_units = 124U;
    msg.takeoff_pitch = 0.37733720067245546;
    msg.custom.assign("BABFAALBFXKPLRIJPFBHKOZLNLVSUQLNUNTUVEOMWCQYNTXJAFEYLLBSHUXMXLLFHWLMEOGYZPSVG");

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
    msg.setTimeStamp(0.004684355461699874);
    msg.setSource(12001U);
    msg.setSourceEntity(245U);
    msg.setDestination(19591U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.02968060682223661;
    msg.lon = 0.3087842787892511;
    msg.z = 0.041024362513918056;
    msg.z_units = 2U;
    msg.speed = 0.08088815890363776;
    msg.speed_units = 9U;
    msg.abort_z = 0.6508097118935546;
    msg.bearing = 0.531430730743563;
    msg.glide_slope = 153U;
    msg.glide_slope_alt = 0.8726132993541559;
    msg.custom.assign("ZPWUFSAHHYWDZGSURYXZAOUGACNEANDZYNKFQBVUJNPTQJDHWMIHEYGJHZMMCJOLDHSIBSFXWKKSJPRDMBZJDKUGLIKBRCUAVJFSKMFNHNYAFXRTSRFE");

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
    msg.setTimeStamp(0.49463747378079337);
    msg.setSource(25544U);
    msg.setSourceEntity(133U);
    msg.setDestination(18574U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.9046279105725493;
    msg.lon = 0.8131932188300158;
    msg.z = 0.8430516813690433;
    msg.z_units = 33U;
    msg.speed = 0.9704027046173089;
    msg.speed_units = 92U;
    msg.abort_z = 0.6009992337683342;
    msg.bearing = 0.42455594944487884;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.8105811769477808;
    msg.custom.assign("RJWRSQOVFBDYQBYPCYLGNGBOHEIJYCTUSZAPUXBHSUFLOLBFIACAAWHGSJCMMCNSVGRPJESMKQFHHTURPUWBSTIIJENNDATIFXDPGAGVSTRWZGTQXKFVSKWRJPQFUAWKOLBPIPNECNWCYXNVCKEVXWTLXMXMWRQADHECYVDPCZLLTEUVKJZNLXXDQENITYDVMMZOZDMOUUEY");

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
    msg.setTimeStamp(0.7527313253197022);
    msg.setSource(35975U);
    msg.setSourceEntity(118U);
    msg.setDestination(19575U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.20957659413514818;
    msg.lon = 0.5805483509929242;
    msg.z = 0.1457794201316146;
    msg.z_units = 117U;
    msg.speed = 0.960003456807396;
    msg.speed_units = 207U;
    msg.abort_z = 0.9023345052898858;
    msg.bearing = 0.08400713207454891;
    msg.glide_slope = 196U;
    msg.glide_slope_alt = 0.7835845991375012;
    msg.custom.assign("ZCPNBONKBCUUCUEKMEACYYKFEPJSDNHWBGLVNVRXWTKFIMANVOKRJIIXZJQAOPAOJ");

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
    msg.setTimeStamp(0.31872121875853143);
    msg.setSource(63609U);
    msg.setSourceEntity(151U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.23553518892948688;
    msg.lon = 0.6706438602244884;
    msg.speed = 0.653705476096007;
    msg.speed_units = 127U;
    msg.limits = 98U;
    msg.max_depth = 0.39747831308493586;
    msg.min_alt = 0.32427288500022033;
    msg.time_limit = 0.5782001638903973;
    msg.controller.assign("ISIWOUUMVXILHPSZLEKPPUKUTSFXWUYFK");
    msg.custom.assign("CHOLIFODOESCBJN");

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
    msg.setTimeStamp(0.8126989562014987);
    msg.setSource(58312U);
    msg.setSourceEntity(10U);
    msg.setDestination(15409U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.24072685819239403;
    msg.lon = 0.6697979115223772;
    msg.speed = 0.02195119045657279;
    msg.speed_units = 251U;
    msg.limits = 52U;
    msg.max_depth = 0.15267152106878268;
    msg.min_alt = 0.3256969046546323;
    msg.time_limit = 0.4224125743366368;
    msg.controller.assign("LQCQYUTMKQLIDKUTOZUUIXVFRKMNPWFBYEWLUFURUEHZBHJSJIXMOSZEPFYCJDQLCCXZFENADSEAPZUVHNSRRYPZYQJLXEV");
    msg.custom.assign("VIOHIJFJASYWRPAAUKTOWZWHPZXBMHLVGLXCGQSOUCS");

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
    msg.setTimeStamp(0.6521683885512706);
    msg.setSource(46751U);
    msg.setSourceEntity(43U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.630611139128842;
    msg.lon = 0.8556017872023695;
    msg.speed = 0.42727361732966107;
    msg.speed_units = 118U;
    msg.limits = 246U;
    msg.max_depth = 0.5625788743298745;
    msg.min_alt = 0.19703857036382844;
    msg.time_limit = 0.024412469017881522;
    msg.controller.assign("HSCFJEPONKDBVLOTLWRPVINAESCZXJGYYNQVFUEYDMWMTSSFNPBVOMDWUEADATYWSIOVXSJJFYGFOHQRPFOWZAGJXWZWCHUQKBJKRNXXOPTXPZABTONHFDCFLLNQYOWP");
    msg.custom.assign("ANFDYORHSXCITXJKWJQAVEPBMQLAOLCSHXIIUGLZDOGNOVMYPKTKXCIRKBCLZLRSUGWQKUXBYFSUOPMLCDYBMDYJLZBFMQHKMPUJRAGPIQJYHECQZUDDNVOONXTYGIHZIHLOCKPVFU");

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
    msg.setTimeStamp(0.1893592079368308);
    msg.setSource(39377U);
    msg.setSourceEntity(151U);
    msg.setDestination(36167U);
    msg.setDestinationEntity(151U);
    msg.target.assign("ZDKWEPDRLPNAAULXQHQPSOJGLEJTDWPJGZPWIOJMQNJTNKESXOFEMHPPMSDGFLTVHJVAIBAULFIMWBBTLURMKWIXPPDMKLZJAVKANDWHFCMGHCMQIKUTYNXYLOFIBNDUWIVNTCOYHYCGQVAHGICIXXXGGCOQWXJBUVMOSQUXZNO");
    msg.max_speed = 0.3160371692142365;
    msg.speed_units = 87U;
    msg.lat = 0.4296261378029278;
    msg.lon = 0.22257652915004167;
    msg.z = 0.6275924206749272;
    msg.z_units = 212U;
    msg.custom.assign("KMPDQVSKAAUSISXWMLAVCRBWJJQTTSSDTGHSGFFIXOYIACAQCZZYVLWREFLJVEMOVTEXXYANOTGDTXFOUMCCNNHFQLTAPLGGROQTANBFPQZEVEPGKQEYXCVHUMHYOUCIHZDMLIMWXTLVROZFOARTKEKVJDDMFLKYDSIDPFULUWJGZKCHSZQ");

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
    msg.setTimeStamp(0.874800110258591);
    msg.setSource(24543U);
    msg.setSourceEntity(243U);
    msg.setDestination(56323U);
    msg.setDestinationEntity(187U);
    msg.target.assign("UKSFANJXACHONDSADUCHOWKTHOOEWWWTGATDXUQZFUYMJHVYZJPGROCMVKLPMLPYOGGYDISSXPZNCPPJTYHQERPFLWLHOGUGWFTAUIQOBXIITTTZHJCVCFZIKUHVPYZXLFMVQGDDYRNBROFXWJUQLN");
    msg.max_speed = 0.9578770044484651;
    msg.speed_units = 241U;
    msg.lat = 0.6361367842207716;
    msg.lon = 0.5325710545476132;
    msg.z = 0.29062426729593405;
    msg.z_units = 125U;
    msg.custom.assign("WXCXPCPZKMVWLJMRBBCNFBAIBDUALFGRGHGNXSCRWPKKTQJPQJSXXZDDILYIMGLIONAQTNGOILQDKOH");

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
    msg.setTimeStamp(0.6972582918861692);
    msg.setSource(12036U);
    msg.setSourceEntity(194U);
    msg.setDestination(34981U);
    msg.setDestinationEntity(242U);
    msg.target.assign("WZGWMTACEPRUJKQOZETNQXBISNZSPYEHIRDLJERYQEQSSXJKDGNUUJNEZGPHAAWLVFGIDLTUAHPHMPMLBLIOXWZXMXKPRKYODHBJALYJEUXZLWLVVOI");
    msg.max_speed = 0.20988199521080042;
    msg.speed_units = 136U;
    msg.lat = 0.45936880174298;
    msg.lon = 0.4647233110097072;
    msg.z = 0.09903286598092687;
    msg.z_units = 65U;
    msg.custom.assign("MQSMHAWNHLYYWGJFLAHLAAHRONTVUJDKVJIZFQALWYTJVIGICCOFVXPZPPQZOSEGZNDDBFDNVWOFYRXXMZVNQTDYYNWTTBBSDKPFQPUAPKGWSPYZLCWXTBFJEUYKCSLNDNWS");

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
    msg.setTimeStamp(0.43659823608030823);
    msg.setSource(30439U);
    msg.setSourceEntity(33U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(126U);
    msg.timeout = 60265U;
    msg.lat = 0.7877407230020224;
    msg.lon = 0.7947202027486152;
    msg.speed = 0.889350438342106;
    msg.speed_units = 17U;
    msg.custom.assign("NVBURYAGFFAPZUNIBDTP");

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
    msg.setTimeStamp(0.9729120969469806);
    msg.setSource(4841U);
    msg.setSourceEntity(63U);
    msg.setDestination(46932U);
    msg.setDestinationEntity(149U);
    msg.timeout = 43431U;
    msg.lat = 0.6596781041937776;
    msg.lon = 0.5004607589803082;
    msg.speed = 0.775180846292534;
    msg.speed_units = 206U;
    msg.custom.assign("GYNMHBRJIFXSWSMOYATHVSMJTGKVQFPIPGDOCTDMJRUXPTTQDDEXYZLKPCBEAEHKYGGBGQYWVYRLPNISFXDTHDYAGOCQOFXIRFXLQNNBUAUWOJONGAORHYJPVBSBJU");

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
    msg.setTimeStamp(0.36503217632698415);
    msg.setSource(50272U);
    msg.setSourceEntity(177U);
    msg.setDestination(36375U);
    msg.setDestinationEntity(220U);
    msg.timeout = 44853U;
    msg.lat = 0.9997802255543754;
    msg.lon = 0.037300831373481835;
    msg.speed = 0.5615772822297631;
    msg.speed_units = 56U;
    msg.custom.assign("TDUXEWANSNAFJUBTSZRMKWSNMRDTWRBUJESYAQFYVHAGLPFLMFOJPUIZBOVHCKRIITNCSDTKCZRWLXHVQJKWKEATFMGCJYUNTFBMLWOHFRLV");

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
    msg.setTimeStamp(0.31984329487005436);
    msg.setSource(10105U);
    msg.setSourceEntity(229U);
    msg.setDestination(7941U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.8834308360819376;
    msg.lon = 0.013259509602892017;
    msg.z = 0.577988279246365;
    msg.z_units = 215U;
    msg.radius = 0.9182599999612688;
    msg.duration = 7873U;
    msg.speed = 0.6539517774692685;
    msg.speed_units = 9U;
    msg.popup_period = 36354U;
    msg.popup_duration = 44242U;
    msg.flags = 95U;
    msg.custom.assign("TXMETWBCRDOYVNHAMQJNVUDFUXDEZBXXNYHWJEPQTFWALSSCLXATPKMWCKMGIHNWUHOSBOBYKUVAPRLURFTSEIKGEDQGNBSKFYRHXIWJQIKCGQEEQZABFPIMJVBAFUTCFVIE");

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
    msg.setTimeStamp(0.11357952133857008);
    msg.setSource(21679U);
    msg.setSourceEntity(224U);
    msg.setDestination(57730U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.0746672912758658;
    msg.lon = 0.5180674979758881;
    msg.z = 0.2610874535187191;
    msg.z_units = 215U;
    msg.radius = 0.7574487480241175;
    msg.duration = 42688U;
    msg.speed = 0.0817112597643127;
    msg.speed_units = 202U;
    msg.popup_period = 20156U;
    msg.popup_duration = 48373U;
    msg.flags = 143U;
    msg.custom.assign("QPCOUYSYMILXVREWJHZEKZUQIOBQESL");

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
    msg.setTimeStamp(0.3543184052456856);
    msg.setSource(57778U);
    msg.setSourceEntity(239U);
    msg.setDestination(1320U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.03528525782502934;
    msg.lon = 0.04907000448585119;
    msg.z = 0.8243508718493949;
    msg.z_units = 54U;
    msg.radius = 0.23931318891837527;
    msg.duration = 35755U;
    msg.speed = 0.35936363564672025;
    msg.speed_units = 213U;
    msg.popup_period = 57488U;
    msg.popup_duration = 6539U;
    msg.flags = 5U;
    msg.custom.assign("RAFSKIFMXBISNKUDKCWOAEDPI");

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
    msg.setTimeStamp(0.5107467415658359);
    msg.setSource(31075U);
    msg.setSourceEntity(11U);
    msg.setDestination(3606U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.7228853325041091);
    msg.setSource(2668U);
    msg.setSourceEntity(175U);
    msg.setDestination(19268U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.15452592265787102);
    msg.setSource(42544U);
    msg.setSourceEntity(19U);
    msg.setDestination(16279U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.21816607760738338);
    msg.setSource(15956U);
    msg.setSourceEntity(234U);
    msg.setDestination(48714U);
    msg.setDestinationEntity(134U);
    msg.timeout = 36489U;
    msg.lat = 0.634695886736498;
    msg.lon = 0.36403893298261647;
    msg.z = 0.08755987723131298;
    msg.z_units = 50U;
    msg.speed = 0.8465666053474012;
    msg.speed_units = 174U;
    msg.bearing = 0.1455977032630864;
    msg.width = 0.8972395785931327;
    msg.direction = 76U;
    msg.custom.assign("ZBRJLPYCXKFOCANYTGGOUKIGRFAEMJBVUGKXZHYBHFSJCTIMZBAJTESEDYPIQBUYKRYAYQXMCLWNZGKLRQVCSBUJAQDTTILQVXJOXCN");

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
    msg.setTimeStamp(0.5324019932146544);
    msg.setSource(5062U);
    msg.setSourceEntity(162U);
    msg.setDestination(22862U);
    msg.setDestinationEntity(132U);
    msg.timeout = 27829U;
    msg.lat = 0.9204068905192638;
    msg.lon = 0.665495375591884;
    msg.z = 0.4230502063954954;
    msg.z_units = 170U;
    msg.speed = 0.31907549872537166;
    msg.speed_units = 248U;
    msg.bearing = 0.7779932709869839;
    msg.width = 0.8588488109582278;
    msg.direction = 22U;
    msg.custom.assign("QMTLMKDLLKFPSVCCEYEVVUWCFMNAO");

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
    msg.setTimeStamp(0.7729944758738082);
    msg.setSource(8957U);
    msg.setSourceEntity(230U);
    msg.setDestination(44499U);
    msg.setDestinationEntity(235U);
    msg.timeout = 50608U;
    msg.lat = 0.5874466453325067;
    msg.lon = 0.04847051080157261;
    msg.z = 0.851463116958139;
    msg.z_units = 65U;
    msg.speed = 0.5081838380547437;
    msg.speed_units = 18U;
    msg.bearing = 0.7138945396376505;
    msg.width = 0.5528044322203245;
    msg.direction = 183U;
    msg.custom.assign("AJZQOUDOYSDFVDWNXFAQLUTEZJHASMQRYHAPTLNKMYNSFJKVJKNDORACPRQXGLBFIBDFTUSTMDUZOLEABQIITJMGQWYRSBPCILLEEXZNMDFQGQGMJKGXAFTPGKOKZXMHHCYKGLCOELURHFWIPGNJRTNWZHMOEHOVFXXPKVMFVYJPEZ");

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
    msg.setTimeStamp(0.9709484224478285);
    msg.setSource(30708U);
    msg.setSourceEntity(221U);
    msg.setDestination(22587U);
    msg.setDestinationEntity(117U);
    msg.op_mode = 134U;
    msg.error_count = 226U;
    msg.error_ents.assign("VMTPROETXXIXJNYUVCSPJNZGQESNVMAUEPRD");
    msg.maneuver_type = 31995U;
    msg.maneuver_stime = 0.7354433231960025;
    msg.maneuver_eta = 31280U;
    msg.control_loops = 1607280108U;
    msg.flags = 199U;
    msg.last_error.assign("PUOASCVJYXPOIYLCGKGOKLUTFDLRLVZZNQAWVFNKOXESMVZVQEXOIPHMIEHETOSSCHFFOZENLEMPCNMICMYWVPDRWNBCZUVBAISMHWTUQMKCGJTZRKXGSAYFDDXMEDTGHQKJDNFNJIUGIVAHLGXQFMAYINQGRQHUSBRRBAIRJWKYBCNMTZLUYAPDXLHISNDEFJWWCKPVKBLZSWDCYPXKRXYTQGHOJSEJFZOAETVW");
    msg.last_error_time = 0.08755004362317931;

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
    msg.setTimeStamp(0.24899448667992574);
    msg.setSource(34718U);
    msg.setSourceEntity(0U);
    msg.setDestination(56812U);
    msg.setDestinationEntity(65U);
    msg.op_mode = 174U;
    msg.error_count = 34U;
    msg.error_ents.assign("DFMFXSKMWDTDUVUVXHRYCDJNTEJLHIVDXBSGROFKUCSZFYJKNOOIPUAGAYETFZVTRZLTABSTGEWCAYZGABEECPVUQSBBJOPPZKGGNLMAXLXRDUSPSVRWVCZOHIKPNHFKTQLWJNHWQYLIUOONMVDGCBEZJYBDAXPQVGWYGBC");
    msg.maneuver_type = 40005U;
    msg.maneuver_stime = 0.710717381403694;
    msg.maneuver_eta = 16885U;
    msg.control_loops = 2347733847U;
    msg.flags = 207U;
    msg.last_error.assign("KZAMGJMBLVYAEYJPMSNLOMZYZGVBNNZJJCGIJHHDLJVSGITFLIHECHYAAXSSGMDWVPFWWDBPPBXQKIAVUIFZUPVIAEMTVQKXXNTHGXOUL");
    msg.last_error_time = 0.8017805033690546;

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
    msg.setTimeStamp(0.15148108358859314);
    msg.setSource(30125U);
    msg.setSourceEntity(74U);
    msg.setDestination(48247U);
    msg.setDestinationEntity(96U);
    msg.op_mode = 246U;
    msg.error_count = 110U;
    msg.error_ents.assign("IZHOJWOMJIODGZYXAVLCDABRZUVJWTSFFFOJIYRJLRKUALHJSPMBEFNTBTUXTQORBMXNGMMLHSHHPZOGOHELBBVCIYYGJFGGPEDSGWATVCEUTRYOXWFKCOLVTRVYFZUUGFWQBVANQILMQHUWGSCJBAFCNWDNQDJUMZGKKWAECWDFMIKZKPQHENDAIQSTRYTEWTXQLPZCIUKZZPQXXVIYNKSDMIPLESEKVRSUPXYXB");
    msg.maneuver_type = 47062U;
    msg.maneuver_stime = 0.13672040036976307;
    msg.maneuver_eta = 3276U;
    msg.control_loops = 2718836245U;
    msg.flags = 112U;
    msg.last_error.assign("HFUZQYKECGCTWGJZXUXGBYOLPUNPVTFIHKXCQDIYRLAGRMEVFYURULBBBKFMVGRLSNULWVTNUISIJRDYTJGTAYJXGFNEQIQZJWBOXVSXYMPJWPOWKT");
    msg.last_error_time = 0.24450946879593494;

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
    msg.setTimeStamp(0.6047313064520542);
    msg.setSource(25978U);
    msg.setSourceEntity(232U);
    msg.setDestination(54200U);
    msg.setDestinationEntity(228U);
    msg.type = 155U;
    msg.request_id = 1443U;
    msg.command = 182U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 24625U;
    tmp_msg_0.flags = 50U;
    tmp_msg_0.lat = 0.9565695000480922;
    tmp_msg_0.lon = 0.9291685218588001;
    tmp_msg_0.start_z = 0.9781967544418625;
    tmp_msg_0.start_z_units = 45U;
    tmp_msg_0.end_z = 0.13180514772281582;
    tmp_msg_0.end_z_units = 221U;
    tmp_msg_0.radius = 0.311200694932495;
    tmp_msg_0.speed = 0.6347862498654118;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.custom.assign("BVYRVXUQSILYAMALQENPLHHGIDBYTILKMLGMEFFUWGKNBXOHNCVHQQUFRRWIVLTDCMXTBIBJXMFPUJVPTUWYBOJGFYZFERAIEKVOOCKEVHCNXICFMACJAWESNQVLIDWYHDZOAVCPXWACJPHRFTZZSENJZYGKZJMPQPYGJIOVPPYWSNZBQRFRRQYTXKQSHNLGKUODNB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1266U;
    msg.info.assign("DXQSZCOJVHUGVEYGDELDSPNGIWQWCVSMULESUTPWXCRDNAVRFFMJXHHGAYUGXKLYNEAJIUQTOHCLBRACHVDCPDPCRS");

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
    msg.setTimeStamp(0.7409845634386604);
    msg.setSource(10118U);
    msg.setSourceEntity(49U);
    msg.setDestination(64277U);
    msg.setDestinationEntity(127U);
    msg.type = 46U;
    msg.request_id = 22774U;
    msg.command = 83U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.7601383863037074;
    tmp_msg_0.lon = 0.5270167866552722;
    tmp_msg_0.speed = 0.7886400409840677;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.duration = 4692U;
    tmp_msg_0.sys_a = 10171U;
    tmp_msg_0.sys_b = 5756U;
    tmp_msg_0.move_threshold = 0.5663640603719017;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56526U;
    msg.info.assign("OVORCNIODIIMSUGBBTLGUGAGUKBSYRMBPSCOIJFKZONLWZBUGFCALKUQCFYTVIENQHGKVYEPIGLXHRZLTWWSCTDPMMRWEXNEDQVMIPEFJKBOHTLCEXTWPRWZCPYMSRVCXJAJRYEXIDMMYUQAAESFQXUVAALYAEOFGNRAFWDKGXZDQJDFZNMHHXSCDRHOZSZQPJUWLHLFQYDXQFTLPXMVVNJVITOKNKHOHPTJJSNPZWDHTBUYNBRKZGJSBKYA");

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
    msg.setTimeStamp(0.22595088614950565);
    msg.setSource(51022U);
    msg.setSourceEntity(96U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(209U);
    msg.type = 198U;
    msg.request_id = 15166U;
    msg.command = 126U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42718U;
    msg.info.assign("JAIQMISQOGIDUWFHOUDKZTWHNGVLKFUKMWVJVFALRYJBSTGTZUXODRHKZYTPPFOSIPVCQBFTAPIXGFERJXQEDNZTLMHVVWRDKOSCIYNEPHXGLELXJVJBEJSMHBAWWBXFUZRUVXAKNIRRYKXQNKQJWEBUKYMDNMMYQNAPDDYPTCBGXAENTLWOUPMOVBSRJZCNIYZLHGCEZW");

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
    msg.setTimeStamp(0.09216316238398514);
    msg.setSource(6813U);
    msg.setSourceEntity(69U);
    msg.setDestination(46238U);
    msg.setDestinationEntity(179U);
    msg.command = 160U;
    msg.entities.assign("ZBFFAIMARXUBPOQWHDXAILWGIIZQTRCPGTELYOHEDVCWGZVAZPFKVKUPQDPAWDAUBNFINDTMKCLTSZJESOBLUPWYOEKULBKJVUHZ");

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
    msg.setTimeStamp(0.7646853620989039);
    msg.setSource(65305U);
    msg.setSourceEntity(104U);
    msg.setDestination(33342U);
    msg.setDestinationEntity(82U);
    msg.command = 124U;
    msg.entities.assign("GSUOEBDOQKWQFYHBDBOFCXEZMDFHMXKDEJVPDTZKADWALAESVHGZAHQMZAYKPLTGRYCZZKKTXFMIATFJGVEOIKRHZQARUWCMANMVCNUJGLPULLELJRFTBCVPTBAHPWUPGCNSQCNYZGM");

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
    msg.setTimeStamp(0.4571535211429689);
    msg.setSource(56040U);
    msg.setSourceEntity(29U);
    msg.setDestination(6472U);
    msg.setDestinationEntity(81U);
    msg.command = 254U;
    msg.entities.assign("GOIAYVOSZEPFKZUUBFUCPDAHR");

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
    msg.setTimeStamp(0.14542240724526112);
    msg.setSource(13781U);
    msg.setSourceEntity(7U);
    msg.setDestination(13534U);
    msg.setDestinationEntity(123U);
    msg.mcount = 203U;
    msg.mnames.assign("SLYZKACJBCTDEDJLWPDLSYRBZWULRNNCRXTSCHQIYRLEMGMQXJNUJMZGQXIMYFQGMZFOOADXQKNNWCQFAQKWZMHIIXKOPUWTIZUQLCAEFSSKREDFBBXEYWFJUSNTNMADKRKVHXOAVDNRJXR");
    msg.ecount = 239U;
    msg.enames.assign("ZHCGSKLIWLWUOQHTWTJQWGTYERKKVBOXHRYUINYVSXUMEDEPDJFBKHYYILOPIGHEDKWMPYXNVUCKSVWGNZMNBLMANOQTOEJEOERG");
    msg.ccount = 89U;
    msg.cnames.assign("KKHTSPWBXRPQLXMCUKBFIQENHUYOSARXCCIVXLSDWPGRNJHJZ");
    msg.last_error.assign("JYESESGQWEITAJSIXMHLGKPPNHZHRPOBPSYKVPEUWUMZYOAWLVCWTFWRATCVGWCACFXTXGDUSNJDKYTTTIXTDGSOJXONRDVMAVSHGWSIJLVTDAVY");
    msg.last_error_time = 0.2983937248948828;

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
    msg.setTimeStamp(0.9831536196219105);
    msg.setSource(17663U);
    msg.setSourceEntity(194U);
    msg.setDestination(37346U);
    msg.setDestinationEntity(26U);
    msg.mcount = 20U;
    msg.mnames.assign("GQRAYLOQHYNTFFPAH");
    msg.ecount = 198U;
    msg.enames.assign("DNLDNZULMGTHGBIFIZQOWQULPKNMCBFAFOHQDRBXKKZZXCFRWYDRZQHNDEGGRFZWUXSJXUOMWHQIDOJCCRSBNMJXWHYAAWPTBTII");
    msg.ccount = 79U;
    msg.cnames.assign("ZREUCDNTQTWZXPDSZJHRELPNBIZFVYMUHGWADWLUI");
    msg.last_error.assign("ZOUAHQRNAIDMGOEFNWEWBAQHYNTIKBURDZFSCYYZHSIWCOEOYEJQFCJVRJQEXOUVSRONGVYHKNGBIGGPLBTIZU");
    msg.last_error_time = 0.0885884999407126;

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
    msg.setTimeStamp(0.5483293922818515);
    msg.setSource(36810U);
    msg.setSourceEntity(34U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(15U);
    msg.mcount = 158U;
    msg.mnames.assign("OYAZGQSTFRFWLNRXUUPAMYEBDAZDKRIKXWKOQMIVMGZAGL");
    msg.ecount = 236U;
    msg.enames.assign("PWJFROFQIUQCAQJVMXHGTDAPGKNZGTZEMCNMXEXSNTFRBIANTIMSSMFXOXCUEEQFDFQTGURNXCIOMBRHIVJPTWXJDEDAFTBUCMLSJAYEM");
    msg.ccount = 149U;
    msg.cnames.assign("VPIIFYVGGWCGWPNXEAQRXAYRSCOKAQYHOUSVCREHLVRTALKLWFSOQLZUYALOKDPTAQMFCHTCQXFLFNVZYINYESIKETGLINDFFIGQTBWZNFJKMPABDZGPG");
    msg.last_error.assign("RVDWSEZKLYAUFORCPSBLPQLNPJMOWUDFCPOVTBAXHAAMMAQAKAOKNPDBRBEJXTEAIWGGTFNXJ");
    msg.last_error_time = 0.3741744355894089;

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
    msg.setTimeStamp(0.7396524057400243);
    msg.setSource(38549U);
    msg.setSourceEntity(0U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(234U);
    msg.mask = 30U;
    msg.max_depth = 0.2863409658911723;
    msg.min_altitude = 0.026470235504911233;
    msg.max_altitude = 0.23475474750146696;
    msg.min_speed = 0.08180711854297396;
    msg.max_speed = 0.813204265668495;
    msg.max_vrate = 0.16729714303916154;
    msg.lat = 0.8501703331829472;
    msg.lon = 0.7630463554335577;
    msg.orientation = 0.3952236424438259;
    msg.width = 0.28841678553926986;
    msg.length = 0.5892531913294214;

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
    msg.setTimeStamp(0.26295138557164954);
    msg.setSource(8081U);
    msg.setSourceEntity(9U);
    msg.setDestination(4992U);
    msg.setDestinationEntity(164U);
    msg.mask = 182U;
    msg.max_depth = 0.11653410159260147;
    msg.min_altitude = 0.8246387328175566;
    msg.max_altitude = 0.12892104310689934;
    msg.min_speed = 0.3773254514607408;
    msg.max_speed = 0.8476264589939528;
    msg.max_vrate = 0.47556144471339645;
    msg.lat = 0.3823724886092429;
    msg.lon = 0.2487655223186448;
    msg.orientation = 0.2572575044663856;
    msg.width = 0.6915776267947028;
    msg.length = 0.7633118886751111;

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
    msg.setTimeStamp(0.4969579520384477);
    msg.setSource(51328U);
    msg.setSourceEntity(55U);
    msg.setDestination(30984U);
    msg.setDestinationEntity(109U);
    msg.mask = 174U;
    msg.max_depth = 0.5030395887746381;
    msg.min_altitude = 0.9262101395874944;
    msg.max_altitude = 0.3864220288465219;
    msg.min_speed = 0.899586893351244;
    msg.max_speed = 0.8054113847644047;
    msg.max_vrate = 0.0767408788645102;
    msg.lat = 0.3412625045235871;
    msg.lon = 0.7293830913998849;
    msg.orientation = 0.9039670015179443;
    msg.width = 0.8217075606499008;
    msg.length = 0.15257108788688922;

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
    msg.setTimeStamp(0.6390783571451913);
    msg.setSource(28731U);
    msg.setSourceEntity(65U);
    msg.setDestination(8456U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.6402197783139298);
    msg.setSource(20281U);
    msg.setSourceEntity(68U);
    msg.setDestination(14973U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.9929413484062258);
    msg.setSource(34164U);
    msg.setSourceEntity(52U);
    msg.setDestination(55656U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.49480055449132265);
    msg.setSource(52364U);
    msg.setSourceEntity(108U);
    msg.setDestination(50620U);
    msg.setDestinationEntity(146U);
    msg.duration = 48013U;

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
    msg.setTimeStamp(0.46854039071507936);
    msg.setSource(9078U);
    msg.setSourceEntity(116U);
    msg.setDestination(54348U);
    msg.setDestinationEntity(248U);
    msg.duration = 59787U;

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
    msg.setTimeStamp(0.45735492665507993);
    msg.setSource(59925U);
    msg.setSourceEntity(236U);
    msg.setDestination(15674U);
    msg.setDestinationEntity(98U);
    msg.duration = 33188U;

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
    msg.setTimeStamp(0.971898584498477);
    msg.setSource(42040U);
    msg.setSourceEntity(171U);
    msg.setDestination(21485U);
    msg.setDestinationEntity(76U);
    msg.enable = 55U;
    msg.mask = 3484451947U;
    msg.scope_ref = 3044812098U;

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
    msg.setTimeStamp(0.4388811196897099);
    msg.setSource(32014U);
    msg.setSourceEntity(112U);
    msg.setDestination(58457U);
    msg.setDestinationEntity(107U);
    msg.enable = 78U;
    msg.mask = 817492081U;
    msg.scope_ref = 346096631U;

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
    msg.setTimeStamp(0.33990467472313113);
    msg.setSource(3125U);
    msg.setSourceEntity(11U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(116U);
    msg.enable = 16U;
    msg.mask = 1336126523U;
    msg.scope_ref = 251590328U;

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
    msg.setTimeStamp(0.07974110509965437);
    msg.setSource(17358U);
    msg.setSourceEntity(93U);
    msg.setDestination(31223U);
    msg.setDestinationEntity(117U);
    msg.medium = 32U;

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
    msg.setTimeStamp(0.17145409468097328);
    msg.setSource(37578U);
    msg.setSourceEntity(207U);
    msg.setDestination(5613U);
    msg.setDestinationEntity(3U);
    msg.medium = 243U;

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
    msg.setTimeStamp(0.282188724779459);
    msg.setSource(35316U);
    msg.setSourceEntity(250U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(178U);
    msg.medium = 37U;

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
    msg.setTimeStamp(0.38763188959580086);
    msg.setSource(8733U);
    msg.setSourceEntity(195U);
    msg.setDestination(20203U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4539501302167315;
    msg.type = 100U;

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
    msg.setTimeStamp(0.13628801487050202);
    msg.setSource(3790U);
    msg.setSourceEntity(3U);
    msg.setDestination(37745U);
    msg.setDestinationEntity(73U);
    msg.value = 0.905269873595461;
    msg.type = 189U;

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
    msg.setTimeStamp(0.315877996839403);
    msg.setSource(5590U);
    msg.setSourceEntity(67U);
    msg.setDestination(41639U);
    msg.setDestinationEntity(114U);
    msg.value = 0.35928047208282443;
    msg.type = 133U;

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
    msg.setTimeStamp(0.922706091105522);
    msg.setSource(7807U);
    msg.setSourceEntity(135U);
    msg.setDestination(62472U);
    msg.setDestinationEntity(45U);
    msg.possimerr = 0.9259391305927591;
    msg.converg = 0.4791866033825338;
    msg.turbulence = 0.6874601209351066;
    msg.possimmon = 74U;
    msg.commmon = 200U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.7992520286735204);
    msg.setSource(36161U);
    msg.setSourceEntity(45U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(206U);
    msg.possimerr = 0.9823069412145505;
    msg.converg = 0.3527387489279942;
    msg.turbulence = 0.02985836629426397;
    msg.possimmon = 115U;
    msg.commmon = 200U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.17224841912206668);
    msg.setSource(8369U);
    msg.setSourceEntity(84U);
    msg.setDestination(43921U);
    msg.setDestinationEntity(123U);
    msg.possimerr = 0.4336722605804062;
    msg.converg = 0.46832666415909574;
    msg.turbulence = 0.7087281432624384;
    msg.possimmon = 221U;
    msg.commmon = 158U;
    msg.convergmon = 186U;

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
    msg.setTimeStamp(0.18406107435588603);
    msg.setSource(17452U);
    msg.setSourceEntity(51U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(225U);
    msg.autonomy = 152U;
    msg.mode.assign("NIMGSZWVFGAYMACHSBQNWGCXEGLDBYBYANGBOPELIKORZEVVENCHBAFJURISQUSGKZXAYOWHWZULZOTVOHCMJPDIUBQRYQGDGTIJPASHQVPERSVUFQBDRZISACDKELNRHAKJYVC");

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
    msg.setTimeStamp(0.09410345323212876);
    msg.setSource(562U);
    msg.setSourceEntity(91U);
    msg.setDestination(2373U);
    msg.setDestinationEntity(50U);
    msg.autonomy = 205U;
    msg.mode.assign("FDKBPKTRKRIBPBQIBGSGSLJEXYINLXWOZUHVKASYZMGHBAUKMGUMZEEVVYOUCX");

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
    msg.setTimeStamp(0.2643990633097151);
    msg.setSource(22517U);
    msg.setSourceEntity(191U);
    msg.setDestination(43069U);
    msg.setDestinationEntity(208U);
    msg.autonomy = 206U;
    msg.mode.assign("CXEECBBBFMNFXECWKWQSXVKSFHEUZGOPENINTQAEXIYPJQXZRBQGDABFDWLJGCJVLZYJDAGCURGTQKZXCRJVVGMVEDIHHQYLNQOUIMRRBJYMANCHTBINLWMKLHQPVJMRIRGSSGSXANFOHAFXEJZQMMMZWHDWCWWEATWAUPUFCXLYDYHFQBZKUTZYOKTSBFPSONVKHODABRVROZNPSDCODYKFNGLPPKTTXUJLLUGYYU");

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
    msg.setTimeStamp(0.1175272805284755);
    msg.setSource(41889U);
    msg.setSourceEntity(234U);
    msg.setDestination(45040U);
    msg.setDestinationEntity(147U);
    msg.type = 180U;
    msg.op = 72U;
    msg.possimerr = 0.024884313756807108;
    msg.converg = 0.6771529938500264;
    msg.turbulence = 0.6347272897570272;
    msg.possimmon = 50U;
    msg.commmon = 166U;
    msg.convergmon = 75U;

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
    msg.setTimeStamp(0.43894813342666994);
    msg.setSource(30949U);
    msg.setSourceEntity(127U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(64U);
    msg.type = 252U;
    msg.op = 139U;
    msg.possimerr = 0.24660773960960103;
    msg.converg = 0.9636980168640175;
    msg.turbulence = 0.5368806188635076;
    msg.possimmon = 236U;
    msg.commmon = 137U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.11212537489261398);
    msg.setSource(52195U);
    msg.setSourceEntity(63U);
    msg.setDestination(20444U);
    msg.setDestinationEntity(191U);
    msg.type = 233U;
    msg.op = 149U;
    msg.possimerr = 0.14552054202369313;
    msg.converg = 0.7373265057004456;
    msg.turbulence = 0.22151577660933996;
    msg.possimmon = 232U;
    msg.commmon = 196U;
    msg.convergmon = 181U;

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
    msg.setTimeStamp(0.0752583589118877);
    msg.setSource(19348U);
    msg.setSourceEntity(188U);
    msg.setDestination(43248U);
    msg.setDestinationEntity(98U);
    msg.op = 98U;
    msg.comm_interface = 94U;
    msg.period = 37909U;
    msg.sys_dst.assign("ISXFCTNKRURUYSEBKCQUQMVQBFKA");

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
    msg.setTimeStamp(0.5964024479668274);
    msg.setSource(8739U);
    msg.setSourceEntity(152U);
    msg.setDestination(62458U);
    msg.setDestinationEntity(165U);
    msg.op = 53U;
    msg.comm_interface = 62U;
    msg.period = 32827U;
    msg.sys_dst.assign("IWEMIPGVVFPRHXVGQDXCHNOLCJGTFDQPANKGRLOTVUYZDMBIIHKSZZZCITKPEKBWHCHRLFBDYECPWADEOROAVPAQMGRTGUEBSGEHXWBXYJTFDXINNFYQSNPWANJXHXMEUTNJQWZPYBURASRIODAOGIKRYQCYEVSNTSUJMZUFSWCUKYTROLSAVNXVJFYCFJKFFEWVKMDTZUBLQKLMRMP");

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
    msg.setTimeStamp(0.6697252847578947);
    msg.setSource(17772U);
    msg.setSourceEntity(169U);
    msg.setDestination(33237U);
    msg.setDestinationEntity(72U);
    msg.op = 135U;
    msg.comm_interface = 94U;
    msg.period = 57340U;
    msg.sys_dst.assign("WDAILCHPBWNVNPMASKDWIZMBADJDRKGDJPEOQQYMYKOFLPEUZBANIBVCFFILBGVODBAZKFSMSOMDXBSIOWQMJNJUXSRUPVAHTHIDXSLQZFFRBEQKGKTYJMXRCCZNCAAFJVLQXTMRQTLWSUGPTIEUZNMFYLKPHLKHCVJRTXYVWTGWEZGGLZJCNRURATBXWPHIUNTTKKJRFOLQGEUJPUHYNYYZ");

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
    msg.setTimeStamp(0.5731080167219184);
    msg.setSource(47514U);
    msg.setSourceEntity(226U);
    msg.setDestination(11902U);
    msg.setDestinationEntity(82U);
    msg.stime = 3927674121U;
    msg.latitude = 0.044165463172220254;
    msg.longitude = 0.36401489395918263;
    msg.altitude = 54794U;
    msg.depth = 51112U;
    msg.heading = 49110U;
    msg.speed = 25854;
    msg.fuel = 3;
    msg.exec_state = -19;
    msg.plan_checksum = 57354U;

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
    msg.setTimeStamp(0.3607096595669982);
    msg.setSource(44843U);
    msg.setSourceEntity(54U);
    msg.setDestination(49276U);
    msg.setDestinationEntity(87U);
    msg.stime = 621361888U;
    msg.latitude = 0.6584667390002369;
    msg.longitude = 0.5828278419779662;
    msg.altitude = 36976U;
    msg.depth = 15579U;
    msg.heading = 56719U;
    msg.speed = 2724;
    msg.fuel = -95;
    msg.exec_state = 84;
    msg.plan_checksum = 10533U;

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
    msg.setTimeStamp(0.7178654920939971);
    msg.setSource(56377U);
    msg.setSourceEntity(102U);
    msg.setDestination(10540U);
    msg.setDestinationEntity(34U);
    msg.stime = 929134075U;
    msg.latitude = 0.9343418720395733;
    msg.longitude = 0.5384452304432934;
    msg.altitude = 25337U;
    msg.depth = 50092U;
    msg.heading = 65308U;
    msg.speed = -20507;
    msg.fuel = -37;
    msg.exec_state = 67;
    msg.plan_checksum = 24006U;

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
    msg.setTimeStamp(0.5732692767798748);
    msg.setSource(16687U);
    msg.setSourceEntity(41U);
    msg.setDestination(55928U);
    msg.setDestinationEntity(66U);
    msg.req_id = 41724U;
    msg.comm_mean = 94U;
    msg.destination.assign("PTUVRXVGZFGMIANWNITBPFKLKBKREDUPONLZMAIYPJJDOZHJVXTNIZQMOYMOBHUSPDVBNUGERFBMXGUCFQJSHV");
    msg.deadline = 0.7011330258847176;
    msg.range = 0.5377228607667186;
    msg.data_mode = 174U;
    IMC::Pulse tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FCILIODYLQOASHNIDKCVBTGWWPWDEPATNFLICISKFBDVSDPFNVRKXJJENUINKWEFUCEEQUZKHCEURYJPOMBMRQAMOBMWXMUPTTZQDXGYINWWCSB");
    const signed char tmp_msg_1[] = {-19, -102, -1, 92, 14, -64, -73, -35, -121, 78, -19, 87, -84, 88, -31, 42, -39, 27, -5, 111, -18, 21, -103, 21, -33, 58, 102, -32, -93, -87, 88, 108, -82, 96, -84, -3, -76, -89, -94, 66, -56, -40, 17, 2, -99, 57, 61, -116, 54, -68, -66, 32, 6, -63, -121, 125, 45, -2, -93, 45, 20, -67, -24, -106, 64, -86, -110, 115, -115, 88, -71, 57, -94, 42, -18, -62, -39, 66, -96, 82, 32, 7, -57, 9, -55, -73, 121, -23, 23, 31, -8, 72, 4, -119, 48, -34, 20, -84, -126, 62, -4, -51, 96, 102, 73, 32, 118, -74, -1, -24, -101, 64, -79, 57, 105, 7, -12, -55, 78, 39, 114, -53, -121, 28, -4, 115, -91, 110, 92, 54, -17, 3, 18, 20, 126, 50, 89, -71, -11};
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
    msg.setTimeStamp(0.4814371875110284);
    msg.setSource(14211U);
    msg.setSourceEntity(144U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(96U);
    msg.req_id = 43163U;
    msg.comm_mean = 13U;
    msg.destination.assign("AQGAYALPBUXWDMOUZAWEJMVHIFXPWVVNMQZWQXDVUDOVRWEXXTVKQBSIQTWYGJNSKFYLEEWZJGFDMHTLHGPLVSGMJDGDFBWLDKNYGYKMLOOCISXGCDMABZUHITPOCKVBEFUCYZYNULEMQOGCHJSRYRDRUCPZPFERHLZRTNBQINFBNINRBVTTQSFAZSXIYUVGEANLXYFJWJWFZHBPMPO");
    msg.deadline = 0.7660694417176296;
    msg.range = 0.4829506503782396;
    msg.data_mode = 124U;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 170U;
    tmp_msg_0.x = 0.2198438536440086;
    tmp_msg_0.y = 0.024457501509759783;
    tmp_msg_0.z = 0.4048161413424357;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BQUUFBIESCVHGVKBMBSLWMDTWPVYOFTKAPLXGTQHAFSYNXQONZRLUYZULLROIYIERIMYZJIZVDWQFHZSRKMGKZMENOWBNJUGOYOGDKMHZGRHXQATXWSJDYJPSZTPFLFSGVGTECAXJICGECRXDTEPWNJSNACOGKXVDWIBSVLHUAETLQXKTDNVTRLRLMHEIRZZXRNBPNJQJAKA");
    const signed char tmp_msg_1[] = {-53, 102, 83, -8, 124, -8, -106, 90, 5, -114, 120, -100, -42, -77, 15, 27, 33, -18, -84, 96, -3, 111, 4, 0, -11, 43, -27, -71, -100, 92, 33, -67, 35, 40, 16};
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
    msg.setTimeStamp(0.35886437780888436);
    msg.setSource(53529U);
    msg.setSourceEntity(240U);
    msg.setDestination(1832U);
    msg.setDestinationEntity(214U);
    msg.req_id = 16797U;
    msg.comm_mean = 61U;
    msg.destination.assign("SVFHHCFPMXVFUYPMROIFQMPOXPSTHYHRODITZBUJSWQYSYIUBQAMDSAQECLLNTJTAHJBKKYLXPINOBFCFAEKYAOTNWXGNGDQWKOGKQADNHPUESGXHFRJWCLOHTHIWIBAZCVESCTQWJPYBKLNIVVRRGVBGPFBVJIUEMGKBTSZMZIZTHSOXPNZVJRLW");
    msg.deadline = 0.8463600477158406;
    msg.range = 0.8061593801230705;
    msg.data_mode = 87U;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 58779U;
    tmp_msg_0.type = 239U;
    tmp_msg_0.utc_year = 43994U;
    tmp_msg_0.utc_month = 152U;
    tmp_msg_0.utc_day = 85U;
    tmp_msg_0.utc_time = 0.9724075018299657;
    tmp_msg_0.lat = 0.7561933529094981;
    tmp_msg_0.lon = 0.41718803836498264;
    tmp_msg_0.height = 0.5038443358403798;
    tmp_msg_0.satellites = 246U;
    tmp_msg_0.cog = 0.3378450555603958;
    tmp_msg_0.sog = 0.16855679547131408;
    tmp_msg_0.hdop = 0.27873727266328874;
    tmp_msg_0.vdop = 0.7861196318975326;
    tmp_msg_0.hacc = 0.8036565543410779;
    tmp_msg_0.vacc = 0.7198513017128779;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HEXEKRASRFIHEESEAAIBWKBU");
    const signed char tmp_msg_1[] = {-78, 37, -85, -38, 37, -127, 1, 98, -25, 23, -118, 92, 44, 29, 67, -97, 43, -27, -47, 98, -87, -3, 49, -109, -4, 97, 0, 45, 2, 59, -29, 50, -116, 84, 70, -59, -108, -88, 13, 75, -54, -91, 97, -110, 108, 81, -51, 14, -101, -100, 126, -65, -46, -70, 75, -36, 28, -20, 98, 81, 13, 111, -62, 116, 34, 106, -29, 46, -38, 27, -36, -66, 66, -46, -88, 36, 84, 104, 100, -37, 108, -34, 10, -59, -17, 44, 66, 70, 11, -97, 69, -6, -49, 40, -69, 66, 122, -11, 42, -104, -52, -88, 58, 111, -125, -17, 36, 30, -16, 72, 12, -95, -92, 29, 29, 46, -44, 54, 1, 122, -24, -56, -77, 106, -127, 52, -47, 95, 65, 99, 91, 7, -90, 17, 28, -51, -40, -76, -95, 13, -53, 66, 104, 47, -54, 14, -110, 15, 11, -71, -15, -76, -58, -86, -10, -65, -37, -61, 8, 110, 74, 11, 55, -88, -11, 30, -126, 39, -84, -29, 98, 91, -7, -105, -11, 33, -33, -45, 36, -6, -74, -118, -70, 118, 38, 92, 4, -75, -65, 28, 64, -20, 70, -41, -47, -99, -40, 24, -50, 77, -87, 93, -80, -51, 98, -33, 4, -34, -97, -117, 86, 46, 106, -64};
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
    msg.setTimeStamp(0.05706196158751997);
    msg.setSource(46491U);
    msg.setSourceEntity(241U);
    msg.setDestination(25139U);
    msg.setDestinationEntity(157U);
    msg.req_id = 24390U;
    msg.status = 222U;
    msg.range = 0.7748469454934427;
    msg.info.assign("SIKVSIQOOQDSORPCMUXW");

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
    msg.setTimeStamp(0.26267335419497795);
    msg.setSource(61749U);
    msg.setSourceEntity(112U);
    msg.setDestination(63697U);
    msg.setDestinationEntity(63U);
    msg.req_id = 46838U;
    msg.status = 107U;
    msg.range = 0.725749668934976;
    msg.info.assign("ZMVYOZORNHVLXWNNEOJJAXXDSZUCAVJKFROBMZLJEDADQTKSGAKEOQWKWNEMNUIWSYHJZSBCGZVPSUOSIULFPVPUWBBXGTQBTDJHZIMAPDRSTCLUWUXYHKTYCJRPYFHTDKMXNVARNEDNLUQKWYRIXOJRIXFCLOOPAAGVFYBSLKQKSCHRMCTEDQCMNJJPRQVHZLNXIZYFYTTEHLBDEICZLWVFBGMPCDBBGWGIQ");

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
    msg.setTimeStamp(0.5635471813856912);
    msg.setSource(60265U);
    msg.setSourceEntity(194U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(225U);
    msg.req_id = 59186U;
    msg.status = 128U;
    msg.range = 0.5572421879729305;
    msg.info.assign("CRRHZOKVWBTYSTOQAJYRNILXIOKWJHLFMWIEICSRTLHMOESYLTXNQOOULPUALFAWZSVLIEBYUCJBFTFPYWSCNKBVGADXREFMYYNDPMCKKZGJQRZIKHQEGRHLEVMFHNKSHNNJRWSYKUPJZEGMQMQZTAFZUENJWFU");

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
    msg.setTimeStamp(0.2287070012468576);
    msg.setSource(26385U);
    msg.setSourceEntity(96U);
    msg.setDestination(55606U);
    msg.setDestinationEntity(177U);
    msg.req_id = 34980U;
    msg.destination.assign("KFNXACRXOUWGRJMLZZWXSBVKCPXHNENEGMOYTSIEMHSWYRESIBNDUOQOFZUKKJJFIWZQKDAPHDDPHFOGTYBNUVQBACIKLBWMERLURKAOFNWZPCYLTEHSMVJPGUCDIVNAIVNYRYBQUSMCGFMOVBKSRJHNDLHHZWMDYBLPHCXLRLXXVHYASJWPEGQFILOQBRGILBESMQZUZWWQZKTQVDARCPE");
    msg.timeout = 0.23455992721593266;
    msg.sms_text.assign("ZSHRTOYYVPUZUSLPKAWKWUMDLSETVRCTJJDQBRAEBXSMYCYHCQQIWIFVXXYUUQSNNWNKJSCKXHZLHNPYUOTIVRSVBITUKNPHEFJWDFGIFFPIIPLFRTBOHHJOOZGWWABEXUMSNAADZIIVOOXINBFCFZKVLBARDJCRMEKHYGLTHCEEJMUDAZDPKNEGPQZQABMEQJUZMLTSVWKYMGGTBF");

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
    msg.setTimeStamp(0.39898517566422986);
    msg.setSource(51358U);
    msg.setSourceEntity(105U);
    msg.setDestination(48065U);
    msg.setDestinationEntity(39U);
    msg.req_id = 33761U;
    msg.destination.assign("HGAMDJLQWWNUGSKGYKZKRLIZCCSDNUAMPXRAOYBWJNPFHLMRARVACZBBVGYYBAZIJAJQSCHYBQETPXBOMLODTTEUCSKJJAEEEFKNTVXUILSEZMPOGGFHDYYNLDVPXEFPOQZUONFYXDVZAULAERZXGETSPXVGQDBCMSVFWFQMTZHUFFUS");
    msg.timeout = 0.978631071335655;
    msg.sms_text.assign("JROSITMMQUTJRTXWZNAAHHLLNXHSNOYWTACNPJFCCQZCVBRGQIJEHFWOAFYYUITQWKLJPEHJGALECDZPPDDXKKEVHTKJIVSBUAPAWPSQUSYGDHCFFTQNHMZFAQADMVZFZDDEPEGSQSDVJVGZWROEBXMESXMSBXYIWIWTNRBQBIPRLKVTYO");

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
    msg.setTimeStamp(0.0862621841875234);
    msg.setSource(47082U);
    msg.setSourceEntity(117U);
    msg.setDestination(44841U);
    msg.setDestinationEntity(5U);
    msg.req_id = 36761U;
    msg.destination.assign("ZMODWSPQXCOVMWKCXFLHTFFDGLVWWOIZCZYPCUFXDLRCGZUQFRTAZPEKJXSWKHUYQIGNYPAMEYGSTVWSLGPQJXXPETNRQNLARHSDBOVJIKIMTFUTLZTDCYDIFKOOCSQDZKFJXNLNYQAIEZ");
    msg.timeout = 0.5743751125446347;
    msg.sms_text.assign("VBHHOSZTCFZLFKIUPQFAIWEJUTXURLHINDLSOEFHDRWDRKDTQAJLNEOWYZKGKGDTGCBSOVJE");

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
    msg.setTimeStamp(0.8410258490733065);
    msg.setSource(17642U);
    msg.setSourceEntity(88U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(155U);
    msg.req_id = 8546U;
    msg.status = 186U;
    msg.info.assign("EDBKWZCOQQETNBOECQHVPWPAOCEAYAJISBHMOUVBBQFRMDAWSLYLZKHOLVMOZCKOIEUXJWNHFGMPDHVUGCYZTRIUZRZWTYR");

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
    msg.setTimeStamp(0.07012671996655917);
    msg.setSource(52142U);
    msg.setSourceEntity(230U);
    msg.setDestination(48445U);
    msg.setDestinationEntity(113U);
    msg.req_id = 57201U;
    msg.status = 154U;
    msg.info.assign("CTDQLXJIRMBLGERVWWHEIGAMGFLKJLXJKZOCZZBHKQDMYSTXQZZVPDJNHCTKNAPWMCXQGHOOSLQHIIPTFOWYDGRTFMRVWAHJKBSS");

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
    msg.setTimeStamp(0.8641910686035296);
    msg.setSource(6980U);
    msg.setSourceEntity(59U);
    msg.setDestination(38815U);
    msg.setDestinationEntity(180U);
    msg.req_id = 18167U;
    msg.status = 171U;
    msg.info.assign("KLDHYTHLWBIXYBQBOZMSCLULQQSBGUTWVLFYRWABREJMFOEPSZRGPKIWSAVUIZWZIRERPXTEVWLXRPMAUPGLOBQKDCZXFCGFSCSKLYYXDEDTMMCONECOTYHNWCHGUODAAJIHITPGDPRJZCAPYJUCLHVNDGQHYMNQFXFMJOTTVDZDAZIJDUMWXUCKGRKEVGQWHNY");

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
    msg.setTimeStamp(0.6641699295647876);
    msg.setSource(59832U);
    msg.setSourceEntity(104U);
    msg.setDestination(16819U);
    msg.setDestinationEntity(24U);
    msg.state = 249U;

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
    msg.setTimeStamp(0.2536610758665079);
    msg.setSource(22106U);
    msg.setSourceEntity(34U);
    msg.setDestination(39861U);
    msg.setDestinationEntity(146U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.4028471874014601);
    msg.setSource(60711U);
    msg.setSourceEntity(84U);
    msg.setDestination(3472U);
    msg.setDestinationEntity(12U);
    msg.state = 62U;

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
    msg.setTimeStamp(0.730180282033122);
    msg.setSource(60992U);
    msg.setSourceEntity(207U);
    msg.setDestination(15599U);
    msg.setDestinationEntity(194U);
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
    msg.setTimeStamp(0.08266920348156837);
    msg.setSource(57474U);
    msg.setSourceEntity(24U);
    msg.setDestination(9818U);
    msg.setDestinationEntity(242U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.7822728847464839);
    msg.setSource(42059U);
    msg.setSourceEntity(252U);
    msg.setDestination(49574U);
    msg.setDestinationEntity(104U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.7714706038772552);
    msg.setSource(28193U);
    msg.setSourceEntity(156U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(141U);
    msg.req_id = 32952U;
    msg.destination.assign("WHEXBAMQFVLKXTSQFCPDZMTSQPUDIISWOEVNXTGHRJAAXOGIZYNHCZJLCHZUKXLYCFZUHKVOXIESUCENGCSDEGFLBKXLEBPDIDAWVNIAHRJQPWJUWEALDIQWGUPVIHXLORCAHTYZUGOKFMYULKYMMEJARCCXJUBVFJCPZJTVZRYVQATAFBPSBOTOTQWKYDTRQFRMMZRNLGBDYMOODQPGVOSXDNEHVLSYTJHPZINGJUNMEBIN");
    msg.timeout = 0.5490082621719385;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 137U;
    tmp_msg_0.range = 0.647313722521334;
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
    msg.setTimeStamp(0.33686924589907064);
    msg.setSource(53494U);
    msg.setSourceEntity(146U);
    msg.setDestination(22086U);
    msg.setDestinationEntity(60U);
    msg.req_id = 11468U;
    msg.destination.assign("RGKHPUBWJAGGHVNBDOTUOTCJQIYLXJAEOEJSHFCMNTZGRDIREIOGQEEYPOBZFQCEJOAPOURYVWUGYPLMYYNZNZDYYIOHLXBBBSTHMLRSPATCDVDOGCAESUCHIRYFKZXZDQKXTGSIRVTKPUIVNLLSXBISKANDIXAFFWEBLEQEWBHZNVFKKWKACMCVVTXTCQHMJPVNS");
    msg.timeout = 0.7667079018049289;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JJQNLNFMFGHWLEYFLAZHDDELCRSHZYJZSCMJGYCTFQNQHMNNRBPYVIBUQVMDHVUNKSXWUPXYKZCGTBPFZBCTKEIJTIAGDXWOFEXVVGOREPPEOXSDUZLSEJMCAWJFSUEDIRCIAKPTTBHDAOJI");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 53848U;
    tmp_tmp_msg_0_0.lat = 0.04177751442833377;
    tmp_tmp_msg_0_0.lon = 0.8741229048236471;
    tmp_tmp_msg_0_0.z = 0.5933980472511687;
    tmp_tmp_msg_0_0.z_units = 111U;
    tmp_tmp_msg_0_0.amplitude = 0.09053222840406794;
    tmp_tmp_msg_0_0.pitch = 0.7317367380587689;
    tmp_tmp_msg_0_0.speed = 0.3748521907155581;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_tmp_msg_0_0.custom.assign("ZRVUGWYIUDZRDHPTBNKRLDVHZQTIYMANRXLWVETEXVMVJKOTTDWYYVIYEZNTWYCBSFO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Pulse tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SimulatedState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.1442879502657448;
    tmp_tmp_msg_0_2.lon = 0.1350459670571591;
    tmp_tmp_msg_0_2.height = 0.14175799230339858;
    tmp_tmp_msg_0_2.x = 0.09549020162096755;
    tmp_tmp_msg_0_2.y = 0.3854403739402963;
    tmp_tmp_msg_0_2.z = 0.689027690519236;
    tmp_tmp_msg_0_2.phi = 0.5145648243491205;
    tmp_tmp_msg_0_2.theta = 0.9836670450536865;
    tmp_tmp_msg_0_2.psi = 0.38710021815232676;
    tmp_tmp_msg_0_2.u = 0.25587777806778467;
    tmp_tmp_msg_0_2.v = 0.9400851008496869;
    tmp_tmp_msg_0_2.w = 0.9819577686892778;
    tmp_tmp_msg_0_2.p = 0.280480452202878;
    tmp_tmp_msg_0_2.q = 0.7087729226739681;
    tmp_tmp_msg_0_2.r = 0.16385043022690737;
    tmp_tmp_msg_0_2.svx = 0.9526847606571076;
    tmp_tmp_msg_0_2.svy = 0.9594935931913999;
    tmp_tmp_msg_0_2.svz = 0.6760383378540256;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.9159271685094984);
    msg.setSource(41056U);
    msg.setSourceEntity(147U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(18U);
    msg.req_id = 27978U;
    msg.destination.assign("FCSCYBKVGOATDPIUKBYNLXTTZAPESIHOQYELWBSUZVREUILUFLRGVPSSQHQLOLZBECQVYVVYFFGTKEHUUKCULBRQDCTRJWXROYRRAEWDQFJXZBJMITAPBXENUJNKMNHGMZOTJRSPGDERGBOGYIZYMOOXAJDANDSKZSOWHCHIYZCVNIXWUNNMDZMQKIIIF");
    msg.timeout = 0.6861604640824477;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("SIZNVZEXJKIJWTOZXYIRQEGBMDOUYRCMBUWHWPHGMTAUUCWRTOBMXNWWBHLMFVJQZBYVCDRPQXJCMGRLAESBTSDIXSXGPYBLTJNEQEZCYHDMHNDAQPCTRQOVSGRRZPSKOKGAEFCDDIVWFIYCPOOHLKQSGRKQEMAUJFSBEHHTEFQOLEAFPLNNJIWPPUYKIXZLVBUYWDZTXMHBRWOHXYGXVUVVDMCSZNNIUDGKLFVSOIQUAFCK");
    tmp_msg_0.state = 91U;
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
    msg.setTimeStamp(0.5355060759150451);
    msg.setSource(44441U);
    msg.setSourceEntity(81U);
    msg.setDestination(52296U);
    msg.setDestinationEntity(214U);
    msg.req_id = 16823U;
    msg.status = 58U;
    msg.info.assign("JCWGTNBBCWYRNRGIZIAATNMGSTPCQTCNYHMYPZVJFOXTIQSLJGPUGKGAMXRDECUNVYWLYUHDARQJZKOCKHELQKZJOVKVFROWMWQLCGFKHSZYOGKWEDTBFOVLEWXPOECUKJAURYU");

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
    msg.setTimeStamp(0.8151373077223758);
    msg.setSource(53837U);
    msg.setSourceEntity(224U);
    msg.setDestination(17730U);
    msg.setDestinationEntity(38U);
    msg.req_id = 38576U;
    msg.status = 86U;
    msg.info.assign("AHZPCLPJLWETBZZZQROVRVYICIITRMSNWEXMSPMBWRVDJKPVKVLBKIVDIKDXTGJHU");

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
    msg.setTimeStamp(0.34037421242547805);
    msg.setSource(55367U);
    msg.setSourceEntity(91U);
    msg.setDestination(43518U);
    msg.setDestinationEntity(95U);
    msg.req_id = 62770U;
    msg.status = 199U;
    msg.info.assign("PMKGTKHUFLPJJTBUFWMYADKHHNOKWQVFEBCEQTXPHKMSQMCXNWTNOGZBWWLUKXNEQKDZJLOSHCAAGHCXYQUBBGFJYPAVUCAHDELOLSZSWIYGTVIQDMXFNLYTQFVMLGSMTCRSBXPGDYEIOSORJKRUBYIDQAOTVCNONAEVWFMEXCVNBGEIUWUZUAOOWAIZHDZDL");

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
    IMC::FTPTransmissionRequest msg;
    msg.setTimeStamp(0.28369373895336814);
    msg.setSource(41144U);
    msg.setSourceEntity(105U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(153U);
    msg.id = 2047999043U;
    msg.type = 14U;
    msg.op = 143U;
    msg.url.assign("TMBWJLGVUJMNVCTFTRAAUVWJUEKZJPZIUSKRGXEYFWXTSPUBYETXMMCODEVXMAEWTNOLMRCJOVSGHWPNNCZJXF");
    msg.username.assign("ELWHBIEDGBCY");
    msg.password.assign("SNQTWBRSEVDWBPNXBTDQLXASGZLWBTUWFCPFCAFUKDSQXXOMMDSHKSXHNXIXMBAIRYOTCGKZHYNITUCPCPEBGRZJJHMZUQURSEHAQDYEGZRVZAYAHRMNYVGD");
    msg.data.assign("FYSKOJGKEUXOMMCLEQQUQPOOHZYRWKFPSQUILPNEJTXNEWLMSDZYZDHYFTUDHEQAUVGTNFSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionRequest msg;
    msg.setTimeStamp(0.38812437969530833);
    msg.setSource(12628U);
    msg.setSourceEntity(1U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(235U);
    msg.id = 2081610092U;
    msg.type = 17U;
    msg.op = 160U;
    msg.url.assign("NHHECRYMJEKIBSRGQYDJBHRLJXAZRFGYHHCWJFLBGQOSILHQPYNWZZLZBRUUGCFGFPDICFPBNOPJTSQDSZOJEFCKMJXSJBYIGYNAWIXPRLXRZTASCXCQWKMDMFNONIKMEHBCXLTKHQAVLUQOWLQKRUJSVIPEEDKZEWGENVYPFGDWTDGDYMDNZWNIQSGEPAUMXBVAHUEXCBLM");
    msg.username.assign("XAZLPBNVTXIPSDWEHQKVMWDKNVFHQOEYCHYLBYBFJKLHGXEZZSTZOQEQARICGATTMEFGYPXHGZAQTRGKSPGRZTVCULYCCITOPKMBXQPOIWLVCWRHKJAFVEHWMWZNVJCJKWFIMBEOVDT");
    msg.password.assign("GABAOVETXKNYDWFXTFPWDNPANRMSNSEBZDEIFMUBJVYKCPAOVWAKENSANJMQGNSYUFPQMSMNMHLXAVZLCZENMTYFTXBHKOZCDGVQRTHDYFHQRDJRQACLJWIVIMAPKFBVDJLXUVBUOWBBJP");
    msg.data.assign("WJAZZGUBSKRECEOZERYRQSVRHCCBVUNNYCEQCXDIVQWGLVZWDGSJUQLKOJSHWJQPIBCTBDPFBQZPUQCZNEUAYEAXFEHXGXKNMNSPZAYEUVSYIDDNWTGLPGNCMJXRIMOMBHQTKLKTKGLDHUAXIFAELPFSIDOBPDVMYAJBSTAIYVNLGDWWLJLKZIDKNBJNZHJMPTVXTARHGQMHCFYWVRBRFQMRWLPTSUIWOOUKFRVEXXHOFOACMYGMOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionRequest msg;
    msg.setTimeStamp(0.3225420691049611);
    msg.setSource(47972U);
    msg.setSourceEntity(222U);
    msg.setDestination(52852U);
    msg.setDestinationEntity(15U);
    msg.id = 992291708U;
    msg.type = 99U;
    msg.op = 104U;
    msg.url.assign("QQAPJPMERVSBWQOHXSAFGGSBQIUVOKJYTIOBZHBMCEXXESFYDAYCQFXUKOXMEZUIGQVTOYM");
    msg.username.assign("OXKHCFFWJPPPJJXCPKXEWOHRUDHSJIIGSDUBVFEEZIATQBWARLLSOXRWDOENYAZVTNJWQBFTZULHQDTUCAUFGSSLTXMCVJQEBMKTBYJIKZYUJNHSTPMJXWDGRUQOSFQRMYSGCFXMCPKIWZFKXOENPMYKPCFADQAREGVBIZUCMBGLNOKRTNWBQMGNLLENDANZRHDMGMQYOOHTEIIBVXALRORKWZIVACYUDPEGXVZAKNHBHLYUQGYTSL");
    msg.password.assign("BFVVUNIEQBWUWHOVPWSSJQWAKMEYMMHGAUNQXSXQFRRKUWYBTIA");
    msg.data.assign("KFPZYZWDYUUQLXYDSADADNFVSOIUIPJVRMPBOGQTZDNSZEMHDEVNJRLAQRUTPLLLGOSUCSHGWVZHFRDEAEEFNVZUBWVFXDNXFCLKRVNTOSQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionStatus msg;
    msg.setTimeStamp(0.4729894483130672);
    msg.setSource(16475U);
    msg.setSourceEntity(44U);
    msg.setDestination(23190U);
    msg.setDestinationEntity(190U);
    msg.id = 722000860U;
    msg.status = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionStatus msg;
    msg.setTimeStamp(0.9887343019910024);
    msg.setSource(28053U);
    msg.setSourceEntity(206U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(4U);
    msg.id = 3267492775U;
    msg.status = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionStatus msg;
    msg.setTimeStamp(0.9869148529257497);
    msg.setSource(24948U);
    msg.setSourceEntity(158U);
    msg.setDestination(30535U);
    msg.setDestinationEntity(153U);
    msg.id = 321867580U;
    msg.status = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8586760667032753);
    msg.setSource(28092U);
    msg.setSourceEntity(134U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(66U);
    msg.name.assign("XYBNGGZXQLANOCWPJKDEMTULFEEVXMCICINDEQKGAJUXNDJQEGETWVKIUREOPMKBOLHNZTNVWLVMRGIWJFSSSRYCYVJZVMFLFUAFBMOAFQTJANOCZZTHFVSXLYMHYBGHXASYSBBPMCTUPBAIHRGLRKMBOFONTDEPDAVHJCVDYSKSWHIOUBSGKNQTDXRYRWGDUIZESJDJPQXHEZUPQIHQIWMRYFCBOPRZKX");
    msg.report_time = 0.319680282630993;
    msg.medium = 69U;
    msg.lat = 0.696942220576164;
    msg.lon = 0.9377424109349488;
    msg.depth = 0.4886344400758402;
    msg.alt = 0.390084957139997;
    msg.sog = 0.5378699306055306;
    msg.cog = 0.5037834723934019;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 247U;
    tmp_msg_0.angle = 0.439680983954879;
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
    msg.setTimeStamp(0.21139501798186855);
    msg.setSource(54517U);
    msg.setSourceEntity(129U);
    msg.setDestination(63990U);
    msg.setDestinationEntity(142U);
    msg.name.assign("PHSSXTZWFVEAHVEYVMBJUAXZMZRDXZXWSACYGBKOKXFZYMOQDNYNIAIMVKEKCVPMLYXCMXIGWLHHPBBLDLSCSFUEKRWDXWFTFSJOTANRLGRHITZBHRUJPEUTGTUWJQQLOMNOWZAOJECLIGKJWJMDVIPGNGHEGQDKDKIBBUOBKMTCNQPUPYHDFQVFYPNNWSQRGAHLCZHLVMYUKRESTUCIFSPBNXGZLCBSTAURFVTANOERVFDXYQAYJQW");
    msg.report_time = 0.296982310008694;
    msg.medium = 72U;
    msg.lat = 0.919585462017089;
    msg.lon = 0.7078097188677573;
    msg.depth = 0.4934453260905901;
    msg.alt = 0.5997602195174409;
    msg.sog = 0.644963746987451;
    msg.cog = 0.408456852123264;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2822572934U;
    tmp_msg_0.messages.assign("ACPMLWPZVKMRKFOHPPJZMVBMMQGHZBQOHUYCBRGKWDONTXXMJSXQESGKBRFOWVKYCGISHGVBPZAQHUEJTNSZAPHTUNZFYDCVPPELODLQWBAGUMQNRLIYVIJRQTRUBKQOWKLXXJDNTDTHDBOWBGUTYKXHFBSNGEAIUFUDIPJGCERTJEACRZHROLXFNWXAWQVNZYCSGANDFWDNUKRTDYM");
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
    msg.setTimeStamp(0.35755965022511704);
    msg.setSource(39939U);
    msg.setSourceEntity(91U);
    msg.setDestination(13514U);
    msg.setDestinationEntity(74U);
    msg.name.assign("FALKDYQIEKGSTWEEMVPEOUSBYURTSIESJFLGTQAODUVBXYKVPCZTEZCWLEKFEHECLAZHBKFOCVSHDSXQAYKELWSWGBRPHGORQNVUALOHAXOCGGKVDYWCIKBNBRHSQTVFPZBXCTROVJPSWFARMGAUGXJNDZCMXUYYVZQDNUVJNNMYWJPQCZNAMZIJIZOPJHDRLLRAIIUOMHGWTSFMRDDMXTMBNDXQZUNOXRJPLYQIQUIJXYKHPWTLTFMGB");
    msg.report_time = 0.6675764491799527;
    msg.medium = 23U;
    msg.lat = 0.3595991162244516;
    msg.lon = 0.13413696135111264;
    msg.depth = 0.7519177350757694;
    msg.alt = 0.19030809160959217;
    msg.sog = 0.9180966210656963;
    msg.cog = 0.6898135884400496;

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
    msg.setTimeStamp(0.8263509380981422);
    msg.setSource(54560U);
    msg.setSourceEntity(108U);
    msg.setDestination(33374U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.8856091219489595);
    msg.setSource(4149U);
    msg.setSourceEntity(76U);
    msg.setDestination(40992U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.9747946954687917);
    msg.setSource(56709U);
    msg.setSourceEntity(68U);
    msg.setDestination(2250U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.6852116545923438);
    msg.setSource(19977U);
    msg.setSourceEntity(28U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("DSRTPWMCARAPFADEHJADJYVLZJSMNKJYQPKALLOHKUAIFAPEDMQUQ");
    msg.description.assign("VYUCDKJRPIKUMBYCGBBNBTSGYWZFBANXIVJRQHIKNDSFERCZWBRCHFDYVQKJTXQYTEVJZQPPYXUUOFCHJPTSHDQBMPYFAOUNWPLCZEQJPNOXXKRUAZNCJKSMUFDARKODVRWHNMGESRKG");
    msg.vnamespace.assign("BPOPKNKALQQCYFSJMXFTHUFIRYRMGRZMETWAEPVKKWVEYSOXFCJCNYPFAVGMZHYDSVAUCVGZRCDOLNCGDMOUKXNLJZZOIJKVUKIZCKIOHELBSHVPFBVTEMVXBDPPLFBSJHPMTQUUIXEGNBWMTQCEHSFQAUYGNFWEEJRDDIUDXWLBHHLBSQUNTNIWQJTJXPDXTZGRGJBSMEZYRAHHCTNSDFQVXLZGJWCBNOT");
    msg.start_man_id.assign("BQEOWYPYKJUFTITGRAWYAIUWGAVAUWGPBPTNFUZCKWDGJSJXSEBPJUSZMHMGCNXNGHVTMTCIFFGDXLRYJECUHMSYODTBNHQEAOXNXKKAQBLDHPDFOOVEYYNFAM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WBHNGVMVBUTDAJPIVOGZBIQKLYKYOTHYGAO");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 53366U;
    tmp_tmp_msg_0_0.lat = 0.8284554278570174;
    tmp_tmp_msg_0_0.lon = 0.02623789829031653;
    tmp_tmp_msg_0_0.z = 0.6501608678224055;
    tmp_tmp_msg_0_0.z_units = 195U;
    tmp_tmp_msg_0_0.speed = 0.620044662783683;
    tmp_tmp_msg_0_0.speed_units = 107U;
    tmp_tmp_msg_0_0.custom.assign("WFQGRGYACFDCRYUMDNSQMCNFRDQXQDDKGTCMSTDZGKMJVISZZMZRQYCPSVQIDBUCCVNFPYZEEETJAALKZLSZXCRIRJEEHDKHLTMIJKLHFNQUMBSHAEKXWIBSQPWXFUVVMUAKAHINBKBOEJVOMOBAETFIFLBXTTNFVJQUWZPVJZOTJYBNGXXHOSTVYOUQYGSREHLPLJYRRRNKTGYCWEWJAWDWIWGPLNI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RelativeState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.s_id.assign("EEWMNTQTAXUTQODMFHZXHSCKOIZHXPYNVWDAWLJPJPZWILFMBGSLUEZMTYIUPWNMTRCWRPKPCIFVYQYNLDRVUXFFKXLVDOAYQFEKBPSBGUYSVQAOIKJHDVEWLOJCWCGHBXROINKOJMQJTKWCADNIBFUDBJURABZRHJNKZMQUCSVYESRWRATEFCXNQOPLPKDKFVAGLLQTYRVTIJHMSENSVGNAOZYBHGUUOMMZAGSCEBSYZGZ");
    tmp_tmp_msg_0_1.dist = 0.8324706825147795;
    tmp_tmp_msg_0_1.err = 0.7157350676715014;
    tmp_tmp_msg_0_1.ctrl_imp = 0.23957963881937427;
    tmp_tmp_msg_0_1.rel_dir_x = 0.07617526793024887;
    tmp_tmp_msg_0_1.rel_dir_y = 0.8872437000491528;
    tmp_tmp_msg_0_1.rel_dir_z = 0.593253322140944;
    tmp_tmp_msg_0_1.err_x = 0.3309435941013864;
    tmp_tmp_msg_0_1.err_y = 0.06248289251603223;
    tmp_tmp_msg_0_1.err_z = 0.42627587157728253;
    tmp_tmp_msg_0_1.rf_err_x = 0.9195917682407831;
    tmp_tmp_msg_0_1.rf_err_y = 0.25483310733057274;
    tmp_tmp_msg_0_1.rf_err_z = 0.2379520194408844;
    tmp_tmp_msg_0_1.rf_err_vx = 0.5764034458914666;
    tmp_tmp_msg_0_1.rf_err_vy = 0.5394643576293489;
    tmp_tmp_msg_0_1.rf_err_vz = 0.650893361982464;
    tmp_tmp_msg_0_1.ss_x = 0.39561745191373743;
    tmp_tmp_msg_0_1.ss_y = 0.38092908207149734;
    tmp_tmp_msg_0_1.ss_z = 0.36349021780147317;
    tmp_tmp_msg_0_1.virt_err_x = 0.4080670139850272;
    tmp_tmp_msg_0_1.virt_err_y = 0.0029452801987640553;
    tmp_tmp_msg_0_1.virt_err_z = 0.8116333038267848;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.21325342959728422);
    msg.setSource(11126U);
    msg.setSourceEntity(157U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("OVXWFPBUZMGMCNSHANGZLILYVXODGDYQVGAVYNBSTZFPWOCMJTTKZGDFTRDVARNYXRWWMAIEMHTYOFESNERVFCABMLGNKBPUNYKBEQJZJORHXLKLEYDKWURWDRJLVXFJHUUEHYBALDXLJKAMXXZGOMIRHOHFBJKPOIYQJDVGIWQJSSZWYJS");
    msg.description.assign("NZDQPAXPFJIQWYTDHPJRIMHZMSAQZCHJWBENEKFQKRTEOQIDWECLJZOBNYLJPDYJIAQWDRFHBVKDZRUPKIUARCLLMYOGDGWAVGLAXDLQGSJHMKNSPYCBFMUYPMGIVGEBVWOUXXGNYEEWFKOZXOLHPXLSITOBBVVGAHVEUYFZKEJKVTCVNUHLUXXUVRIUWQSROYMTJTWWANBMNKZDBRMSCTJQRXTAPZUGFSFSQH");
    msg.vnamespace.assign("YRKRRAJVDZYWXVGPEIWFAIYUBBPUWXKXTZDGZOPFIPDNJWBJWCDFRVCYSZLPLNWHEXKVEFXOSYHCBBYVFAMSJHBMFQONHRPMTEYHQRGUAKKSKHUAQPBRHTZHGNLUTXSOILRLLDDRQTALTCAIOKQZNGCMNUPOUPUFWOEQXJFXMSDIJPTXJCWMCIULQDGSGVOTHFEVVMECYCKAQBMONBVXBSOUFYNNZRJGYITJDHMSKVGLCZIWGIEAKEZLDA");
    msg.start_man_id.assign("TNABLMBYSPZUOXAPXFYPKSYGFTROWNNULNVNXWOKPLOIJAZVQNOQAXWFQDDWVQSFRTZTGOSFGWYVVVZUXEMYLHQBWJQBHIRIUQBGBEJZMKAGEZREKHKINYYAHMVIQJMZDTQTRCHBAEWNTBLHCDMIALPLXJKLSIEQVGYHYHIGUSPEFKLWWJXYGDSCDPJDUJCAT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JWCHJQEMMFCVDWYHKPXPHGNIJEQDZULMRFONYJHVJDWEJUQYTTZUTNZJLM");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 17796U;
    tmp_tmp_msg_0_0.custom.assign("FDQJQMWQUXSSZBJZMDEBDLQSRWJFV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OJEDVFCCISUQLVPSGSZFQKTDNYXNHSIWRVIBIQBMZTYWLCUZCQPLKCYBBGUADRIVKGUNOGNOWPMICEAFPVZYGQTWJVFOVBGRJCARRADMUKWDTQKTGVUTNLFXSTNFVXTOEJTADBCXTISMYJHRPYSRZKSVNBOQBWWKIHLWYFJLZMGZJDLQAXHFOEMNOPMGNHBAXQLORFXUCZPLHEYSYHYEZZQUKRJAEWMMKNXAGKODXPIAPJJDIDEH");
    tmp_msg_1.dest_man.assign("COYDFUEKXWEZGTIWFULCACUKUMBTTSESJDJLKQNRGZOPJNPOXZDYPEGEZUZASQMPRKSCDPWDTWYIRUIGIRYAQOFHYLMFVUXCGEDNUJHMJLECRGMFPTHCUTSADGOMFIEAXVCQVLZZIAL");
    tmp_msg_1.conditions.assign("SHXJCZMGJZ");
    IMC::CrudeOil tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.6586429958068811;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::ParametersXml tmp_msg_2;
    tmp_msg_2.locale.assign("KVNJMRXXMIUVZLJFLQAZ");
    const signed char tmp_tmp_msg_2_0[] = {34, -122, 93, -91, 94, -38, -125, -73, -10, 113, -10, 117, 10, -82, -22, 111, -57, -43, -114, -43, 21, -108, 26, 38, -67, -42, 80, -26, 56, 109, -70, -58, -103, 61, 32, 96, -65, -79, 45, -35, -49, -57, 11, 114, 36, -92, -25, 47, 122, 66, -20, -15, 50, 5, 89, -122, 49, -80, 55, 8, -30, 103, -103, -116, 21, 37, 120, 109, 72, -58, 99};
    tmp_msg_2.config.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.2068252847635138);
    msg.setSource(60846U);
    msg.setSourceEntity(48U);
    msg.setDestination(52641U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("IEPQDRAWOQBZPQYMLHUOFNSQIVTAZZEVUEWJLARCBNGEYRODRIJGUZMAXJKPKHTBWFVZDNJUZRMHFWGMRHFDNCTIXHOOIYSGLQGQCEHFVKTSUEPVSWJSNNCBYYVGPHOSMCKFXXEIRRDWTQRWYPJDELPZXPHQTAJMDFLLCUQTOLQGVXAMVOF");
    msg.description.assign("EMLOHSWHGHXEIEBJTQTAELGPOFDE");
    msg.vnamespace.assign("CGXVPDGXPZPAECSDSUSZZFZODYUEKHBKJFLYNFHXZIPPTOLUYGDVIHDQMPRDIRWRBHGCZWGMJRXQMDLFAMKJKYUZCBJIXXANRCXNTZHTRWOLEVOZVQOSTSQDIIAQJKVKRSUBQUTOVETQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QIDEJUTVMSOFEXGTUSWIIHGLHFN");
    tmp_msg_0.value.assign("KMVJWTQEJKNWWUUVRYIWRJSPAPANCUYLNWETRABHLWCCITHALMFKPEUJTCEGYMZQZOXHIJRG");
    tmp_msg_0.type = 238U;
    tmp_msg_0.access = 92U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HMCCLLZCYUFSOUKYQDNBNMVEFUWFVGWRYBZNEZHFTVPQASLHVOHPXZPJJZFWLVXSPLATOCQVQDHBRSENVOPKMGGNWTCNIARCIUGVKIGMXNTOBXBMYHVNEIQTLRSTWUFMPXPERBOSYCYPJHDAQZETATOZHOWWAOZDSK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WIGYGZVISIGQMXJOTCJPHQXLAFREKUVSHETZFYAASCUTTRXSHRTMEBSMOTVRNWQOEYNDKFBFSFVXYWUNBBRLEIQFXEDIMJZPDDOJENIJKEXKNMZQPKKDJNIOOUARUNPSTWCHFZGSHCYVYCDBHQZKCMVB");
    IMC::Drop tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 15390U;
    tmp_tmp_msg_1_0.lat = 0.02588230444599038;
    tmp_tmp_msg_1_0.lon = 0.4879651190936066;
    tmp_tmp_msg_1_0.z = 0.8432020349691207;
    tmp_tmp_msg_1_0.z_units = 5U;
    tmp_tmp_msg_1_0.speed = 0.31033334356687603;
    tmp_tmp_msg_1_0.speed_units = 202U;
    tmp_tmp_msg_1_0.custom.assign("WWOJWPUXTGYXASUHUZCIAQKBHELKPQZGEWZYCZKPGHOOTNFLRRGNDSEUEXTVDKPRIVGMOJPXQFLXMFMMCSVTVCRVRIHLBVGYBUQAFKAZMWTKQGQISHIHGJRNFFSVYVEIXTHFYIEBENAJXOMX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PlanGeneration tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.cmd = 139U;
    tmp_tmp_msg_1_1.op = 207U;
    tmp_tmp_msg_1_1.plan_id.assign("MECQHRYJEJCUOBFYIEZACPNLGMYYQLGQYURZVPCJJVGFBOSUKQIRZOZTDIPBCLAWRPDXDHNJYLAZIMINEVGQXPDMPTLHQAEWESXBZ");
    tmp_tmp_msg_1_1.params.assign("VMXGDJJDTJRCWUWDMBBMKQXCYSBQJWAZBKMRBPGTPXXLIPNKPCMVTUBAIQIEEAZYGGORFYAZHZEHGEGVMKOPHFVWQKBOOYNLHOMLUYPYOFNJRGWPLOLTTJCHRHJKEEMWXRULTBZNTXUSGNWRYGZSNKNRIQISLVZILIDHFHCDPEJCDSKUVUVHUSWSAVFAEXKSVOZXYBYMDAQPAUTQAFQLNGYXQ");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::EntityInfo tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.id = 122U;
    tmp_tmp_msg_1_2.label.assign("FSONFIYMATSRMMPCFYDLXXYFRTAOIKRKVVVNUALOZOSAHHOOKZESYZSILVKABXDKBEBJUSUGZRTDPEZUPCOJXDPLDYHUHQSUKHBBZJWNOLUHGNGHCBGVBIXRCCLQRIZRDCZGCNMDTEXEBMJPTDITKJVVRIRGGP");
    tmp_tmp_msg_1_2.component.assign("OIUHCLJPKFYEWHLDIKKSUBCXHZIYXOGYWWLOGWATHTCRJENNWGBEAJQIQVJBPZYVHRPHVNYATVNFAFLLDOBLGAETZDMZCSKRNAGRYPSQIKAJVHKFOPSUJKEFAKSQCWDPDRPOLUVVHZXWBXBXTIRNQQPFRZTDMFFVCZGGKEBKJFIOINWXDEYFXJUSUDRIXNOMGMGZYXSHGEBQVTTZUQMMJUTAMYXCRSCLQUBZOLCMYVNMER");
    tmp_tmp_msg_1_2.act_time = 46929U;
    tmp_tmp_msg_1_2.deact_time = 10621U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DIIADYLFUQJENNMOIXGJJTSVAZPTCOAWQEMSOCPKBOCERZXWVDA");
    tmp_msg_2.dest_man.assign("AZJFXTDKQXRTCRPFJCGZAEFEWFTGHXKUUPLDSECAJPONPZUJBHOLLAPZGEILJHHDGVSZNUAJZOWISFXHCVVIUFJNGKWOATGNDBWBHODRKXBHFRRBWIZYBBPXNRTLDMKGYGXSVOSZEUYYY");
    tmp_msg_2.conditions.assign("XRKGPQRAJFCONYUWQMHXEAVKYDEIRTJFZNSGOIIQPKPDXJWCXLANMEDTDMANVSTVASWBKMSLMUSFCUUZTSWZDJXLLNNHYBWBSAGTXRDGWJBZUTGOGXIBTBYUSVOSPJCEYFYRDVVLNDJIZFHNKVTPQWUEYJRKOXCV");
    IMC::AcousticMessage tmp_tmp_msg_2_0;
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.k = 0.7822170413540935;
    tmp_tmp_tmp_msg_2_0_0.m = 0.7743171919858665;
    tmp_tmp_tmp_msg_2_0_0.n = 0.33992362680946997;
    tmp_tmp_msg_2_0.message.set(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.19097242594075303);
    msg.setSource(33760U);
    msg.setSourceEntity(176U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(173U);
    msg.maneuver_id.assign("BHKIQDADVLTCCATFPPGRXRISYWSNDLZVMHOYESZSHRYVSALRHRZFRPHUZMIIVTXZYHRJCEQLYAJEMKBLBXMVDYFTXWCQXAWMKDHNOKZLEPQHUQVQHOMNEBUGEFNRKPOESSBJPWTCRJLOENLGATEQPFJNGMYFBALJTIUDKVVWXTGFQKIXPNZUWBCMCJSUMGNADANGPOVBSID");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.35814344261503606;
    tmp_msg_0.lon = 0.15679231770614133;
    tmp_msg_0.z = 0.7662200681925204;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.speed = 0.22080169378504766;
    tmp_msg_0.speed_units = 159U;
    tmp_msg_0.abort_z = 0.6150274630530996;
    tmp_msg_0.bearing = 0.9279911398723815;
    tmp_msg_0.glide_slope = 232U;
    tmp_msg_0.glide_slope_alt = 0.1039807022998922;
    tmp_msg_0.custom.assign("DIGFWTTXNCINOWGWHJJCVCABQKMUCFVOEGPZCNUESVWNNJONQLCUDPMHRTQIYVESKPSYMXILKMTOEYXFRHVFNQCGTWBPQBPIUWFXHXEVRRANZGUWZYWRWLLULVIZPSLVSPZDKJCJOHYDYHBNHLKUDRABZTKMGTKGLOGPATYEAQEQIYGMCFXZVRVRLABXUBPFHMPEMDZSAYWYLMQRJSXEIKTDHKSKOOBJJDOAJMBUDEGJDSIAZSTFXNX");
    msg.data.set(tmp_msg_0);
    IMC::AcousticRequest tmp_msg_1;
    tmp_msg_1.req_id = 48544U;
    tmp_msg_1.destination.assign("DLZDYNNYMBJQKROOAXVBRGVCXZGJWZSLSGPXXIASDFFXYUZYQIWYRIQJPODMUSHBLPMSULRBNMUGCHNHFUTAFOYQCNTWYIFAWKOEPSKUELGYBMQCOAOPBNSPLEUNDZPIZHBFIWGIQZDXINQTFTSACXTNCAKPLLQHFAJVCEVJPZGWROVODAV");
    tmp_msg_1.timeout = 0.487254586537074;
    tmp_msg_1.range = 0.30020605856716953;
    tmp_msg_1.type = 151U;
    IMC::AirSaturation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.6595739025144713;
    tmp_msg_1.msg.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.4808498166320915);
    msg.setSource(5111U);
    msg.setSourceEntity(97U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(113U);
    msg.maneuver_id.assign("PPLDVGBRGBOTOZXYXLOUYVRPPOGWBVMQYOHTJIQKSTUBDLYFFFOEAULUJLRDQQDDBNNSREGWIKBKPDCOETUYPCQNZOGZSHQINCWPMEUWCAIVLJUXCZYRGTRCLVSGGNAFZVKQVVDXYJADHZIAQKMTOQIKDZ");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("RUXHRPCTKXKJBWSHCQONUGFYRPESKGDQUEYFNEWZXSHKEQRHUVQALFCMJJTISWHMGJUACWPHADNJZADFHEHCZIYMUFPJMXDBNKKLHOUZJYSSIDPPDBOIGADIFXOZGGZLYWSEMPIEWAYMDBGDATAHMIMRBWGLFLTPTOCALVMVVJRXVDQPFOTCQRBNXCVNSNWAKSKZQUYVJRLELLYCOCMTQJZFIGWUNXVBTKSEKVOBTYQNXRLYVZXIUPWTNQZ");
    tmp_msg_0.max_speed = 0.9680873426777573;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.lat = 0.10415618396179283;
    tmp_msg_0.lon = 0.6665187386628203;
    tmp_msg_0.z = 0.7932796296608371;
    tmp_msg_0.z_units = 227U;
    tmp_msg_0.custom.assign("GZDDBJOLRCVGDCTIFGOIZZKGVCONEYTNIWHZMEPBXOBCQQSMSAJKFESVNTZHUVUJSOPSQPIBXYICTEDAYKAWEEURHEDHUFKPWZXHAAXERXDSHNXQFURLFWMVADCVRJYGNMAONWWVWQQLMFBYCZSUXTIBPKYMKTQFBMZGRENMCNLZHIAMLPRPFTLOWIGFYPBKDJSCYLIVTLORUUAUKPGAUMQS");
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
    msg.setTimeStamp(0.3311960258863368);
    msg.setSource(19235U);
    msg.setSourceEntity(135U);
    msg.setDestination(4442U);
    msg.setDestinationEntity(26U);
    msg.maneuver_id.assign("OOBNDOJANXCXYUURSTTQFDRDUQCFUIWRKGDIKFRHLWZBXHBCGQRWZVTXSAYICHTQEPVYMCTYESBFGAEYOTGAEPWVYLKDUMWQMLAJLWBPHOPHGZZUSMYJXWVKEHLNVSCILZPVR");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.7470204746723053;
    tmp_msg_0.lat = 0.4781841927892174;
    tmp_msg_0.lon = 0.13585151709573495;
    tmp_msg_0.z = 0.39749894348017845;
    tmp_msg_0.z_units = 61U;
    tmp_msg_0.travel_z = 0.5873113013883501;
    tmp_msg_0.travel_z_units = 1U;
    tmp_msg_0.delayed = 118U;
    msg.data.set(tmp_msg_0);
    IMC::TelemetryMsg tmp_msg_1;
    tmp_msg_1.type = 231U;
    tmp_msg_1.req_id = 288726090U;
    tmp_msg_1.ttl = 38022U;
    tmp_msg_1.code = 219U;
    tmp_msg_1.destination.assign("PPHZGSKGSWKAIQJRNTKAAY");
    tmp_msg_1.source.assign("FHSJBPJUYTQXWNNIWVXVIINHKNBZXBUQGDMSWWRHYVHHNYRMQEAACLGWDYEFWSNKWEZKPIYSXSHDHTMDUQAUPFJZHJEZIAXS");
    tmp_msg_1.acknowledge = 155U;
    tmp_msg_1.status = 204U;
    const signed char tmp_tmp_msg_1_0[] = {-67, 110, 61, 51, 15, -125, -83, 45, -8, 104, -97, -93, -103, -32, 88};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DataSanity tmp_msg_2;
    tmp_msg_2.sane = 63U;
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
    msg.setTimeStamp(0.04664012472588086);
    msg.setSource(37153U);
    msg.setSourceEntity(89U);
    msg.setDestination(59591U);
    msg.setDestinationEntity(110U);
    msg.source_man.assign("MTOXCELHNMEEQYRWFQVGVWYMCBLDBIRNOOSAZOIAVKFBVBQSQCRVYUKZPEMIEEUUMZZFRHSUZYICXORQYNKKWZDHLINBTKXZMEFPUGHUHVMVFLXJOKUMRBWRIOPHTCAQYJKALKOAHJUXTDG");
    msg.dest_man.assign("PQGGRUDRNPTQFTKNFIWGNUTZOTOBIHRGGNKYIFAUVSKLFYCOSYBDLWLAKWQRJLVSUAJLLPQOIVTKHQPIYTXAFNWQGGLDUUEMKZFCIZHJRXZDEDMAZAV");
    msg.conditions.assign("AXXOQNBRSSGEYUIMROVHRJKEHOGABCTNUGKJDFHLEWIKPMQLSYRVBMGQRHDOMGIAZIBIXQNCYTFNCYWHCGUJOBJAGQQOHJQMJHFRSPKLKFIBEQQLFCDYYXQSOMABUETXPCCYADWAGWVHMWRPFTGSZADCULEPIVZZJZLZWSGTVPUHYLSCKDXAWJ");
    IMC::AcousticRelease tmp_msg_0;
    tmp_msg_0.system.assign("KGTHGLBDFKVLBVBTNDAJRVGFLSCMOEPUWPKBDKCMKVESZJNWCOYB");
    tmp_msg_0.op = 141U;
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
    msg.setTimeStamp(0.10811075105026025);
    msg.setSource(57079U);
    msg.setSourceEntity(81U);
    msg.setDestination(57646U);
    msg.setDestinationEntity(91U);
    msg.source_man.assign("FUZRQKWVMVKXIJRCSQHVPYUMNAECOYQJBHLQNILDCTPPKJNLIBQEGKUYUXDZKYLEZRUMOSCPESAZYDJFEVCNJWWMFBPOWBCISCEYMTWTDMFLGVNBRFBLIEXDRTKTEAKHYRGOZOMJKBRSPAVPUGHHLBSSMOPXBDNNIWEDQNTRZTHTUGHOIJZCHOLKGLW");
    msg.dest_man.assign("WEJUMBLJRHHNIBYZYQFYWCJUSEJOMQNVAZDPJXWRGNACBODQCSGRFGHCMOLNKADOMKSXSQAPJJJYWUSADEFJMQANNDMFXHMIBYTVAZRKHHXKIHLVAUZBPZIUNPMTFLQNQUWEEPKEXRXXSZLTCBQOGUIRUHZTSFTKLHRCYOWCIEZKMWV");
    msg.conditions.assign("HYHOMBVCICZVDCLNUQBMJYDXZEPQOJTHAHXOPBPKWQRAJDSVJALUNFRWQFBNFPKOPAARRYUVYJXAXJSEFGKIQEMLEOYNECFOUOBBIKDADCWNTKIEGPGLRQESTKOWTEWUZGWVFSB");

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
    msg.setTimeStamp(0.14537782361018237);
    msg.setSource(37853U);
    msg.setSourceEntity(8U);
    msg.setDestination(25639U);
    msg.setDestinationEntity(21U);
    msg.source_man.assign("GIRNEGVXRXMJCLKDCEBYCUVJQPSJAIIPBDUFUWZLHGCKJPNZFAABBYFTLLSDXX");
    msg.dest_man.assign("KFEKNXPLWVWDTDJTYXJLPWYIHPYVEIEGZRTZXBIVNBEOXBBDCRYGJIDOTQESMPHJBPZF");
    msg.conditions.assign("KAYJTVRKWNHWKOERPQDXZGDBOLQBUJTXVIJIMECSSBDVEGMOETFSPHILJIKKOTOYWUHQEATKYQZSEGBBQRPGGITTCL");
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.826061603119911;
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
    msg.setTimeStamp(0.46931867453248655);
    msg.setSource(8104U);
    msg.setSourceEntity(151U);
    msg.setDestination(23975U);
    msg.setDestinationEntity(117U);
    msg.command = 97U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XWXQIJBFGUUMONERTCKEQPYPYMRBBZCIWXJAWHDNWEATYJEJBHDMJLAESZTUWAIRD");
    tmp_msg_0.description.assign("DVCRFDUIOIMQIMVFLHBWDKSKWAEGWBKPRKR");
    tmp_msg_0.vnamespace.assign("ANCXOHHQSBDJWEJHFLNSCBWYOYUVTHSGMGUOVINBYSNVBNFUIHSIDRFPYXTTLIQQHKEJDLTBZXOJUXWKZJ");
    tmp_msg_0.start_man_id.assign("LHFHLAJSMKCJMPCMGXBXCOIAARPZIKIRKTRYGRIXQWEICIQRANTKLJLCWNCGYCVUVUFEOLWYQZORFBXDTWGAJRVVDCBGUUVAUELKMXKVDKHITYXWSFRNBTUADVVYVIGJEHSNLHPOA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TJWAONGPRJOPD");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 9683U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.1620292577860981;
    tmp_tmp_tmp_msg_0_0_0.direction = 241U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("INUOGQXZREAPUECAHDWOEOJWZNVUOAKCDFWUYMIYLECKQXMLDUEJXDCAFDMNILYNFDNXHJABJSRMIZPHLQHNZQQGLWATHGIHAGWKSTBGFSVHPOCE");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AcousticSystemsQuery tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::HistoricSonarData tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.altitude = 0.22638926431086803;
    tmp_tmp_msg_0_1.width = 0.553534854542873;
    tmp_tmp_msg_0_1.length = 0.17422858254496243;
    tmp_tmp_msg_0_1.bearing = 0.28501555931829126;
    tmp_tmp_msg_0_1.pxl = -26262;
    tmp_tmp_msg_0_1.encoding = 79U;
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {6, -106, -32, -2, -35, -86, -9, 72, 73, 78, -76, 56, -33, -100, 69, 123, -17, 89, 37, -105, -63, -118, -91, -126, 95, 97, -77, -29, -68, 64, 76, 45, 92, -15, -86, -49, 115, -6, -84, -67, -108, -75, -119, -11, 66, 117, 71, 40, -72, 110, -109, 66, -57, -9, 96, -86, -16, -10, 115, 29, -117, 82, -2, -42, 6, -112, 62, 89, 72, -80, 61, -20, 17, -94, -102, 48, -39, 106, -115, -10, -84, 100, -70, -35, -57, 44, 120, 11, 12, -16, 103, -112, -4, -109, -71, -2, 18, 29, 109, 74, 97, 95, -113, 91, -93, -115, -88, 15, -90, -7, -53, -121, -56, 64, 88, 28, 28, -89, 37, -83, -30, -116, -98, 18, 81, -29, -55, 112, -82, -17, -112, 25, -10, -24, -6, -55, 51, -90, -57, -87, 64, 88, -62, 2, -120, 39, 102, -125, 93, -36, 97, -69, 86, 89, 8, -44, -44, -43, 36, -44, -87, -65, -68, -50, 65, -88, -103, 10, -120, 58, -51, -80, -6, 12, 54, 20, 22, 15, -110, 11, -87, 67, -7, 5, 106, -116, -118, 123, -109, 68, -114, 30, -82, -96, 47, -85, 57, -39, 75, -51, -56, -123, 70, 111, 52, -75, 45, 51, -88, 84, -30, -18, -110, -36, 47, 103, -102, 95, -110, 39, -46, -24, -1, -35, -39, -48, -15, -84, -30, -27, 96, 93, 42, -74, 1, 109, 70, -65, -74, -81, -112, 20, -53, 49, 64};
    tmp_tmp_msg_0_1.sonar_data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
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
    msg.setTimeStamp(0.9772803980629067);
    msg.setSource(52103U);
    msg.setSourceEntity(3U);
    msg.setDestination(53867U);
    msg.setDestinationEntity(169U);
    msg.command = 27U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RIFYFACSIVLBUPTSPSTPQCFZXYYYZTUEUO");
    tmp_msg_0.description.assign("PSQPUJIZRYYUISVNORREQRWRXNRXHQQTZIWQZBWDSKDNLZJCZLJOYHHVXFAHBWWYZWRWTEAHLGSPHAMHCLNDZENKUIMFIUFSGXOKUSMBVWBKKLVFLXXVNOMGMLAKFGAWJVMGDKVHQXBGEOGBAAMODSTZOXLUV");
    tmp_msg_0.vnamespace.assign("MGUCCEQQAFJTVZNZPJUJWTQELZLHVAYVRPUAXKQPZNFNQGYKWULSAYTFJSFNDUNOCCMKSHEHIHIEHRGAMMATCWOVSFZXPPGDXIBBWJSCPUIIUDAWUFSGOKRBJTTQBALKEQIZRFDIXXVZBGJRNJMFZEYJSQDMXWGOKRZWULCLBAYHYNHCGDQHJLDSVRMPYWTEYGBYWBFXEISMOTYHPPLITVNIRKVOLWDEUXGQMNVOLATVPEOORXRZDDOHKMK");
    tmp_msg_0.start_man_id.assign("FYLJAMJZPCKTGUVLHTKDGKECDGAOXSWERSBSNLUYZYDHAHNULANXTQMNXHFVQEEQMKYUWFYODPPOVNZGBBKUCFUJQYGRRYSEZIDVSTTKWOLQKNROEALSZJQVDHLINOEBXFJIBBMQNRPMPI");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("KSHPCZRTNIKBJWRAFEHSPLLKQOXTHBNEMTOXEQGWDXIVWKWBSGQJJHQOFOIXAHQIMBAGRCYOTGLEHTKJZBJCEJYUVRTYFPKDCKXFZYFDOMDNPOWJZYZUBUTAVHUWGSANUASEYDSNCGJAFIDZDMTZSC");
    tmp_tmp_msg_0_0.dest_man.assign("YPXEICGVWNZXEMDKOCLDCEPVCSONHSLGVKRJBAWMJQFPUHNTIEYKUWCIIXCTMACJPZPNCSHSNPOKKUPRFBQRBFFHQSDBQAXELXYXRRSZDARPRXSBOGQEEFICZHIYMREIFMIQDYZQHJOYJDZTQLVHPDIFHGNGIZXTBGTLMZOTQORXNUAJTGUVWMYWVFTWJLKRWYAGOYSEALVJTKPGJLOAFBZBDCHOHDK");
    tmp_tmp_msg_0_0.conditions.assign("SAVIAEDMXXUGNDFKKUHSBCRDYMSFIPRJJFUNXEHMKVBGJLTQSMLCATTSOQXCJPOMLDPZDEGHXJWRUYOPPQTVZGLHBWXSAZRDGNKJENKEFFYKHNALLVGEKEUYBTWLNJXRNBOPBIPIZJACZWMZVXVXUZPPQKLQCXGMWGORLWRGWZVOTFEYMOAZIWEFRYCOZSJVIUIQWTDDRFBGWAQHSHQRDCIHTM");
    IMC::HistoricData tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.base_lat = 0.8331608217972293;
    tmp_tmp_tmp_msg_0_0_0.base_lon = 0.5640176366259338;
    tmp_tmp_tmp_msg_0_0_0.base_time = 0.8604602155272365;
    IMC::RemoteCommand tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.original_source = 5493U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.destination = 22434U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 0.5823923141714062;
    IMC::TransportBindings tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.consumer.assign("NOOPZDGSWHBVQPTFERIZGIPPOGHNAMBZEFVVXVQPKMONBWYVUHNIQCIACRTKRVBVFWXFXUUBNEGZH");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.message_id = 6862U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.cmd.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.data.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::CommSystemsQuery tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 43U;
    tmp_tmp_msg_0_1.comm_interface = 7027U;
    tmp_tmp_msg_0_1.model = 48289U;
    tmp_tmp_msg_0_1.list.assign("OUFIMABZUNKOBXNHDUXJITRGSVMKQVRBJASHJRNQGXHAMDGWMDHRKDEMFHH");
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
    msg.setTimeStamp(0.31648654123934894);
    msg.setSource(41803U);
    msg.setSourceEntity(103U);
    msg.setDestination(15574U);
    msg.setDestinationEntity(214U);
    msg.command = 138U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EKPFKNECEYNNVVAWCGNQO");
    tmp_msg_0.description.assign("QZWXOEKKNXJRNAQTFIZDDBGFYPBURHCZBHQWXFXGAOCVAJKPIGBCKULMYBG");
    tmp_msg_0.vnamespace.assign("GBAXFUFYXWRNBRKZDJYCNUICQSLIASKIDBGVTJWPCUQTXCVMXBSPFMYJXVEWTSEHCQOLSMXLGOQRZPRVFLFMI");
    tmp_msg_0.start_man_id.assign("HNYKPYALEFOTNOKVXGDHQABRPWBYQGVVOMJXOAHGZEDAGPKVWWGRAYTTIVREYNPIKSJLBCNJMYOCVAMUCKPSWHIFADDIBGDJFUBJAEQFFNAXHZNRTFDM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WLAXZDOMZAJXYXUOJGYAQBNKJKVNXERTLFWPPHNKSWIRPOCVKNDTUFMVSVQOJUIIPYQCUVDCRMDTPVXYWUSHLRJZJKFPZKKZZXRFGIHDBSRHOTLFDSQQEPZVGQVONQENAMIETBGCKIRGMCLCGPYDZCLNXUKAOVXENWLUHMGQXWBSTMSRHZGIQKOUWRAOSBHIEXIHRWDAGQEELFTBDNLTCAJTCNMJLEMAIBYYPMYSAWHJCFYPT");
    IMC::ImageTracking tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AirSaturation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.7672398390669387;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NIWMYYDMCBQKUOZLTVSPJTUIOLLELIAFBVLTRCXBUATPUEFOCLGKYFIVCNEDJWZXXYKJOYZFBKJASDOLRMMHEGNQWPJSQLBESZAPTSTDASOCMKMQEBGXQVHAWUQGZZORNJMVDAPOHPQUNOZJITVFWSHLRACPGFRNGECNEGRBPIVHFNYCKTNMJLHBWGKIJFKICDYSUNYXZUCQRR");
    tmp_tmp_msg_0_1.dest_man.assign("QOJHDXPNTZQKBOQFDQIOLQTMRCEYFYJDGDQSUDFNOKABCEVGSSETHQFNWLHRBZHZHZCCKYALMCWLPDHTOVMKEURGWITIRYTA");
    tmp_tmp_msg_0_1.conditions.assign("SQVSSAAIXTJLTYAZWWNTPKTSBSNBRKXSGUVFVCVLUUONXAIFMKOKCWFESRNPYWAOHHRFBFZAZDKHSNQPJVGJYHGMVUJLEEMLQMRJKDTGURQCLIZIYTTNMBFANCAOIREUKEJFGJZNEUFPDOEGZNAVCHBTSKPPBRLMPRKHDDKLDXQLBJWQYLBNRDAWO");
    IMC::NavigationUncertainty tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.7557642677720932;
    tmp_tmp_tmp_msg_0_1_0.y = 0.4648825547258828;
    tmp_tmp_tmp_msg_0_1_0.z = 0.23392818711730878;
    tmp_tmp_tmp_msg_0_1_0.phi = 0.9375894841362832;
    tmp_tmp_tmp_msg_0_1_0.theta = 0.8908812886399361;
    tmp_tmp_tmp_msg_0_1_0.psi = 0.383363446222866;
    tmp_tmp_tmp_msg_0_1_0.p = 0.9338187864154405;
    tmp_tmp_tmp_msg_0_1_0.q = 0.5202740202867466;
    tmp_tmp_tmp_msg_0_1_0.r = 0.5558966970379589;
    tmp_tmp_tmp_msg_0_1_0.u = 0.5254173841422279;
    tmp_tmp_tmp_msg_0_1_0.v = 0.5803116038438699;
    tmp_tmp_tmp_msg_0_1_0.w = 0.3559780358389184;
    tmp_tmp_tmp_msg_0_1_0.bias_psi = 0.30693620259820165;
    tmp_tmp_tmp_msg_0_1_0.bias_r = 0.7233319787027661;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.5419413028302592);
    msg.setSource(2879U);
    msg.setSourceEntity(91U);
    msg.setDestination(51967U);
    msg.setDestinationEntity(253U);
    msg.state = 231U;
    msg.plan_id.assign("NUGTFAHWQCRLNOPMYVMMZQGICQNHXDULDNTEQXQGNTIOVJMDSWRYKFEKGGMEULSYVABBKSFAOAXRFYIWSIGCIQTLJSQCMAITBPDNPHQVNOJZVFEIELRDPDEVPGNYHAXBJKHLYOMSNBAKEMWZJVCZTBYUHCMV");
    msg.comm_level = 197U;

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
    msg.setTimeStamp(0.44170859422576136);
    msg.setSource(14285U);
    msg.setSourceEntity(24U);
    msg.setDestination(40177U);
    msg.setDestinationEntity(146U);
    msg.state = 5U;
    msg.plan_id.assign("XPRRZFXTHIFKGENOQKDXNAKSFDHOXJSCLPCVAHBFTPMQSMZVZHNZGYJIBKBGNCKLMAILZTNJUOFIWWYRYZOGUVJHSBRQWTETELNFEPWGYKUMJIDOAMRRQCHFHAWQPIQUSPXLGXOAEJMNADKDSJMKQBJDOUYCXOGJPHXWUPTKFTCSKBXRUFNGZDDLVFLQWGE");
    msg.comm_level = 95U;

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
    msg.setTimeStamp(0.018573923635955336);
    msg.setSource(14191U);
    msg.setSourceEntity(12U);
    msg.setDestination(64995U);
    msg.setDestinationEntity(98U);
    msg.state = 145U;
    msg.plan_id.assign("VDXIBUQKLGPDVMMGWTTVFKDWNIUJASEMWFZTBWLLITFJUICQIHXALGCUPUSAYHEARJVVYDZXSEXHLLROSXTERWBQGJHHYCDQOJRZXZFENYAR");
    msg.comm_level = 45U;

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
    msg.setTimeStamp(0.3448788727255231);
    msg.setSource(23993U);
    msg.setSourceEntity(13U);
    msg.setDestination(39351U);
    msg.setDestinationEntity(35U);
    msg.type = 199U;
    msg.op = 14U;
    msg.request_id = 20416U;
    msg.plan_id.assign("UGAUTYGLHPWCPEXOEAVUOAXJJLAPAAIFWHMQYYPYWRWEVATEWYREZOKZZZEEMDGWGQKXILLPUOTJTJQKUMLVCRQDVHDSIKKVVKFUVJFDNMBHBXNLNUJPNYOQSEZSNNAHURPQKSZWFRFMFCWRFXMSBYJIPALCXKDRDCM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BSEFAFWZIIRHPPSTRHZAYBICJHUAVJLHCYJOCQSFOCNMTTPUKYGDLTOCQROHYRKBKXVNSDKSVVIBQULAMMBXFPHYOGU");
    tmp_msg_0.feature_type = 29U;
    tmp_msg_0.rgb_red = 251U;
    tmp_msg_0.rgb_green = 30U;
    tmp_msg_0.rgb_blue = 28U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.22316031782326273;
    tmp_tmp_msg_0_0.lon = 0.24561245996757708;
    tmp_tmp_msg_0_0.alt = 0.6781655903491742;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RWGSIGWRUWAMRTVTPVEQHVAOUXLJFQRKGFWQFHMTXAYPEDMLTKKJFPIFNBSDTWGSXBUIKJYLAEKCIOJOSUFZCQBATWYJUCYPRJGVMVBBHLSQNRGHTJVBCBXYLHLSSIUTXWCDDDHPLVUHRFPONIBPMFONZFAPLOMQNOAYOEGADLEXXUEQWQIBUZRSXSNKCWPRZKJSYDEGZIZZT");

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
    msg.setTimeStamp(0.9260959518384938);
    msg.setSource(44181U);
    msg.setSourceEntity(32U);
    msg.setDestination(34684U);
    msg.setDestinationEntity(102U);
    msg.type = 56U;
    msg.op = 182U;
    msg.request_id = 52076U;
    msg.plan_id.assign("JFKZPILBZFWGVRCJPOTAICTMYEDVBRPYZYRRCSOXYPFDAWABOUKSUDBPBTTXLRLILHOEVLKHRJOQIRPUYPTQRDWGVSMQHGZUVBLEOYSKQXXTDLXUNEGPSILSKASNKYHDMMQRWMFMAEJMMGUHS");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.07894689730077042;
    tmp_msg_0.lon = 0.6940816158842059;
    tmp_msg_0.speed = 0.30408436484624135;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.limits = 103U;
    tmp_msg_0.max_depth = 0.6889347434917196;
    tmp_msg_0.min_alt = 0.5465776603904474;
    tmp_msg_0.time_limit = 0.4361391239233826;
    tmp_msg_0.controller.assign("TPDLDMTWARELGYZBTGZLXHINVCWBVEROMNAVVWDJQEZTRUJRZZPHGDIAVXYUSU");
    tmp_msg_0.custom.assign("OVYMIAADKGOYWTCODOEJHGXGMWYSGHGWZCGNDYJZCZVTVMSPUPMGNTEPZDBQROJMYFJXRNKHSCHPFYKWUWILAJLGNBFXXBTE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UNBLEBJXAXCWHDWQZHDHHJZMDZTAMTULATYNIUMDVDTXRQWBKERBISSCBPZELNJAUHGIPRBCQVGIKNFCLRXDSSAVTICDNAVXEDKCAMLQEOPTZKOXEHMUSCRVFDGHYRNTXETWOQYJLGUZVIQONWZYJMSGROOZVJTLJRKGLMISWPIFJOZSWYHGFBHWPPFMPFBCBLGOFRUFZEIAXYNIAUKPX");

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
    msg.setTimeStamp(0.9647808017636096);
    msg.setSource(57706U);
    msg.setSourceEntity(4U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(101U);
    msg.type = 7U;
    msg.op = 6U;
    msg.request_id = 992U;
    msg.plan_id.assign("LEHAMRJGQSKJLVLOMYEROAFQULDHMWQZLFYSLJZPDKURPOMZXMTCZRQEIFBXJGFFCBSHYCHBXNZTQFPKBAXIUMREWZHMPMPIGDXDTJJPTCXEQSVYYCLUDEWDXQHQNIFVCHOABNISBTVOINHEABSRDSPQGZTYNPJYHLVENTFAWRVSOW");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 190U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("XUXZJRNIRSBHRGINCXVGQLRKWZEMJRSWTMPMCTHXZGCKAEKLDMDQHHPQDWLRQICGIDEWCBVSWHOSMSJDMOZBFIEGPXOGTFDHQZDVJUYEYRXPKVABCXFBYFNFTIPYPYNSOMOYOWHITASACPHNULLXVAZSNPJJWLJCNIGNZFOSRAVZWMEZJGOBKXWCBNFAZKGYEAQFGIYPLJAKVPCEYBIBLXMUQADUVTSUUHTTQUTRFVRBDOQ");
    tmp_tmp_msg_0_0.description.assign("NDRAWSDVMXWBTCXKWKTAAYHROPNHTBTPOBBUXGEQLWVGLAWBPIZQJFMTETHMBYQINZRSZQRHGFRGUOZBXFEUCQQSDHJMSOERVMUKCCLZXJEOOUGIDNJRZIYMVQECFSVWEHKSCGNTBOXHBJNEAGSUWKQAVZMVPZIKPHOENDXLHYOQFVIFDSMIPALYUOFITARUPNAYYMJRCUYVARWYKWLUVGLEJXFDGLDD");
    tmp_tmp_msg_0_0.vnamespace.assign("KAOXIBNBMGFNENIHAOEUTWUAGGSMHSMQWPSDDZNLQZQHDDROHLBYPEZBOGMSDKRJFKBXVXCCLMRFRVSVCMMRNJQOQPBAKGWXEJQAUZZOWZFNCTWJIXIMCJERPIMXSLQUTYBKEYEOEEQVIUNPTYAYFVKVTTRNOJFHQPTRCCICNJHJSKLAWTGUBUHXYWVHELYOZCHDKLCQSUWLGXLGSPZMFTKGDGOIPSYWBYZBDRVFNPFRWKVVYZDDUJHXJIFAP");
    tmp_tmp_msg_0_0.start_man_id.assign("ZWVTYUTZGCBIMXPANTXXNKQEZMEXJQSQTKNDUOJFMOBOYTOUOEGJEHFDAVIEYABKSXAUZTLWLIUUHPWVDYXRFQCRBBVPUJBSDFPEYZKMMSUWPKHLYNEGTRNPPSZCRGLUKOJSFCZKWBPQWLWVYTLYBJSALBFJGSCQGLFNHWMHRGCIMARXMXQEDBEMWUZCLQANINRDFODLZVSVZAJKGSDWCHIGRNQGVPAKHRFIHKTNXPYIVJ");
    IMC::ENCAwareness tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.depth_at_loc.assign("TEPIORXXHNICPPAMXSQSKJQLAVGGQQXRPTNFMWRYY");
    tmp_tmp_tmp_msg_0_0_0.danger.assign("FIHOQVMPEAKJASNRVPQLTYFXFNIYPMBNFQKCJBPSLGJHGCZFHFZKPTJWVHPUMGEJVIENRLAXDAXQRUIAXLUWXVXNCRDMZVDLOZSSSCIJKBRPKBXMMAGAIGYUPBVWZBATZMODGYFZDCRWJCBNFYHSGYYOMQBCILJHKIKDTGOTAMCUKULGYEUDNHQUNBOFRWGNTTEIDIYWVEQTVZTCRMWOQOXVLCWQPHZRNYKLSBTODWZUEKEXJOWHSEEUPSDSF");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::Depth tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.9903490699876938;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LIWYOKAGFAUTRMHA");

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
    msg.setTimeStamp(0.43423968786991374);
    msg.setSource(50515U);
    msg.setSourceEntity(1U);
    msg.setDestination(34632U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 46009U;
    msg.plan_size = 1361543638U;
    msg.change_time = 0.12381102848566772;
    msg.change_sid = 57686U;
    msg.change_sname.assign("LRBSVJUZCUUVOCTEUFFSJBRBHEGTWFBMXSJTOMNNPBWKGTXSTWYIOGNMDRTZKXGJOHXQKUAYAJOYHFFDGSLDMTXKZCCDFUVEADQCVEXGVVQUAIABPQXCLHIALNTCQPVKRZRBFPGYNIWUFHBWKPPTSQDRUSUQDZIBAGRGGEOJYEQIQQXKOZRPXKSZEWDNFPVZAALMJMYWWRT");
    const signed char tmp_msg_0[] = {-59, 107, 65, -47, -115, -19, 48, -63, 27, 54, 24, 29, -29, 100, -60, -22, 116, 107, 9, 16, -24, -78};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PGYLTEENIBCRJJWZQKGKCJLBLZCWVRSRFTOKGGEELZJHJYMIMDWXTPAIEIRUQ");
    tmp_msg_1.plan_size = 25845U;
    tmp_msg_1.change_time = 0.10168755256705209;
    tmp_msg_1.change_sid = 28030U;
    tmp_msg_1.change_sname.assign("CNXNWVGLRJUFYXVTAQITSZMCZHIGWFOICTPMFPDTJHAQTLTAQSSLIKQWRLWOJDMZUUQUGPXODKMBMBCUOISNHCKXYHEHHGJSPSSSPIGEZIDVYSCYFYOBKGUPKMQXZVIRXZMCVHRAHZWYUONWJZWUXKDYLBJEPKANLWVXVVRDVGTNJQZGAWUDOVBQFPEOYKFZEDNJKL");
    const signed char tmp_tmp_msg_1_0[] = {-95, -121, -120, -43, 45, 66, -24, 42, -114, -94, -21, 107, -72, -84, -24, -80, 2, -90, -51, -79, 121, -10, -12, 42, 125, -60, 13, 60, 67, -116, -103, 111, 35};
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
    msg.setTimeStamp(0.8453699994868146);
    msg.setSource(54937U);
    msg.setSourceEntity(195U);
    msg.setDestination(55846U);
    msg.setDestinationEntity(40U);
    msg.plan_count = 43482U;
    msg.plan_size = 2258408110U;
    msg.change_time = 0.9159710247440733;
    msg.change_sid = 40321U;
    msg.change_sname.assign("JFREOVMXDAPHTWKLAKLOZWNLGIHGZDVM");
    const signed char tmp_msg_0[] = {62, 118, 103, 3, 124, -9, -47, 47, -60, -4, 0, 27, 36, 23, 99, -1, 105, 9, -80, -65, 114, -65, 3, 100, -109, 81, -20, 32, 17, 76, 61, -41, -72, -19, -39, -111, -87, 42, -36, 73, -106, 105, 15, -88, -74, -38, -52, 5, 13, -2, -32, -48, 108, 13, -108, -62, -41, 85, 83, 4, 29, 7, -89, -38, 23, 111, 76, 95, -33, 4, -24, -63, 76, -5, 6, -87, -5, 11, 93, -51, 100, -55, -21, -38, -69, 105, 9, 99, -17, -110, 77, 93, -57, 105, 51, -19, -25, 122, -30, -58, 76, 2, -111, -36, 18, -118, -89, -16, -43, 36, -26, 17, 94, 7, 20, -54, -18, 42, 72, 85, 32, -40, 53, -30, 110, 91, -58, 77, 52, -30, -118, 94, -55, 81, 62, 59, -12, 65, -74, 60, -3, 73, -95, -10, -41, -68, -68, 102, 2, -76, -35, -71, -45, -9, -90, -19, -38, -100, 28, 19, 21, -127, 112, -128, -50, 107, -36, 32, 59, 20, 3, -52, -120, -28, -108, -44, -56, -43, -33, 71, -26, -86, -116, -128, 67, -8, 50, 102, 7, 87, -32, -84, -28, -90, 50, 118, 118, 26, -61, 17, -71, 75, -121, 9, 78, -71, -51, -75, 31, 16, 84, 15, 122, -103, 67, 116, 59};
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
    msg.setTimeStamp(0.8950948751090794);
    msg.setSource(22448U);
    msg.setSourceEntity(232U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(202U);
    msg.plan_count = 5247U;
    msg.plan_size = 2569412078U;
    msg.change_time = 0.2731370025858786;
    msg.change_sid = 45598U;
    msg.change_sname.assign("OYVAEOFEDRZRMUTFQHYNQEDLCIUZEBTRBXMJZHXEIJPEJCXVNCFGLRBQRBAHUTNYJIFNSLEFCACQZYPUSMMW");
    const signed char tmp_msg_0[] = {-42, -81, -6, 20, -111, 42, -120, -8, -57, -123, 60, 69, -59, -68, 102, -93, 9, -117, 111, -5, 26, 25, -90, 72, -77, -47, -42, 63, -64, 97, -111, -104, -15, -48, -76, -18, -4, -108, 91, -66, 6, -48, -73, 29, 43, -47, 88, 88, 112, -112, -114, -18, 49, 87, -107, 122, 52, -124, 81, 86, 24, -88, 21, 59, 16, 50, -30, -45, 74, 9, 22, -42, -4, -26, 120, -8, 85, 21, -6, 93, 1, 97, 29, 45, 109, -56, -64, -54, 69, 78, -81, 57, 86, 26, 44, -5, 34, -108, 92, -128, -11, -114, -8, -19, 71, 63, 94, -17, -18, -12, 116, -91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OUSFKJVHXWHFPSUEXJTGNIVMAFBKQLWKEXNNGOCRFSTQUXMUYSAVKCXNMPEOHLFDDBWVOUPTTDYZMCSBKWLQXRLYQGI");
    tmp_msg_1.plan_size = 33582U;
    tmp_msg_1.change_time = 0.21571522001884047;
    tmp_msg_1.change_sid = 39817U;
    tmp_msg_1.change_sname.assign("RCQPEZNULWDTGNBOGFRDRMZWYEIJKMJUWGLAJXRNAZVSLBQFCGQLGKXDSSMVQOGDAKFKOJVQYBIDPPEANFRAUIHCAVOOITBTYBXNYDRFHXUGVCZUXWNQCLOSHGVAXBUPNFBBLCDIDWTWPOSMXYJMLLSHEBINCTRAXHARQFJSOZEEEVKDZTYJMKTMHTZZICVMLGEWYJZJQAHIVQXWOMPUKEKSSHYPEPJBYCQHRLKNCKFU");
    const signed char tmp_tmp_msg_1_0[] = {-111, -62, -85, -38, 40, 94, 122, 86, -104, -65, -102, 77, 88, 97, 68, 20, 40, -26, 68, 120, -18, -29, 80, -116, 11, 117, 34, 71, 83, 109, 119, -8, 79, -97, -70, -64, 16, -9, -63, 44, 29, 120, 51, 2, -59, 0, -62, -67, 74, -100, -123, -69, -23, -7, -99, 1, 65, 102, -99, -2, 117, 57, 83, 120, 52, -39, 56, -96, 100, -67, 40, -55, 66, 12, 79, -7, -25, -66, 74, -118, -75, 4, 115, 70, -32, -123, 105, 27, 36, 2, -79, 12, -19, -53, -54, 54, -101, -46, 100, -117, 70, 62, -124, -34, 27, 117, 73, -73, 103, -42, 92, -91, -123, 2, 67, 90, 122, -35, 124, -66, 70, 15, -93, -101, 21, -91, -111, 40, -12, 101, -48, -62, 4, 96, -120, -24, 73, -46, -76, 82, -86, -73, 8, 110, 91, -73};
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
    msg.setTimeStamp(0.18273921648179692);
    msg.setSource(42091U);
    msg.setSourceEntity(105U);
    msg.setDestination(9475U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("VQFRSOMSLJNHWCBVGODHNOWVTAOJKDEEZWBPGKJNBRNGYSZIMZPDJESOXUFGOIURVPDITXVWEPULDLYMASYVTQWKNIUSOURTQDVIALCMJUYKYQDXFGNCTIXAQBEZTPH");
    msg.plan_size = 51695U;
    msg.change_time = 0.6774139492346014;
    msg.change_sid = 42159U;
    msg.change_sname.assign("GJRGKZWIAMCETGHJUOHUOHGSGLUQFQUDAJBPNKSNKKVOQCASSSAFNXJZGCXOXSYWOVNTHNXNVMQBCKJBPMRHIZVMTPSEOHYYEDOYPVGTMCPLAMIELLQRZCBPMZJPYDFZWFQVHQDEVIUTQHHOTBTPBEI");
    const signed char tmp_msg_0[] = {-60, 42, -4, 83, -69, 3, 0, 4, -29, 30, -4, 113, 80, 125, 53, -73, 82, -85, 25, 119, -79, -122, -112, 19, 45, -113, 103, -34, 115, 99, 55, -42, 109, 121, -31, 107, 106, 61, -88, 10, 72, 79, -67, 119, -63, 6, -107, -108, -12, -71, -18, -56, -39, 13, 110, -74, -93, 10, -23, -55, 51, -70, -95, 59, -15, 67, 10, -20, -41, -39, 66, -48, -99, 105, -112, -18, -111, 100, -28, 7, -47, 93, 25, -1, -3, -66, -24, -35, -114, 17, -36, -66, -33, 7, 44, 40, 100, -50, 88, 0, -114, -11, -109, -2, 13, 115, -125, 5, 32, -44, 66, 100, 76, 9, 115, 67, -72, -119, 39, -73, 9, 93, -40, 30, -41, 2, -99, -32, -119, -60, -18, -101, -75, -66, -106};
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
    msg.setTimeStamp(0.0738431814402758);
    msg.setSource(34357U);
    msg.setSourceEntity(119U);
    msg.setDestination(12508U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("YDCSBRHVGJAPEYBTJIEUIWKCWTMHPQOCZTEFJOAWDDIAEPFLRRFMNIYBPRWYHKEJSVVAMMKPZDNAGKZZWXIFQAYBQRIVTZYFOQOJHXPEBLN");
    msg.plan_size = 35642U;
    msg.change_time = 0.14075310444739209;
    msg.change_sid = 20867U;
    msg.change_sname.assign("LFKVWNWDUJOJWNCEEHNXIQKEVGLFSHYMLZUODIGYWZXLNBVIFHEPKZMPDFCARTASEYOGMYKUOABKIGHVRQRRBSPGMAVJOTOFNRYYIJMBNVNLBCLYDXGNICVTOKHHBQHXCQQKMCGTVSSUMPSQQXODXWZUAEZGMECGZD");
    const signed char tmp_msg_0[] = {19, 88, -117, -69, 14, 117, -55, -97, -18, 111, -82, -108, -124, -99, 6, -96, -69, 112, -36, 62, 50, -121, -117, 19, 5, 122, 63, -70, -17, 10, 96, -95, -91, 0, 47, 120, 110, 126, 103, -98, -74, 81, 37, 30, -91, -45, -62, 32, -7, -80, -117, 82, 94, -35, -37, -60, 93, -94, 107, 32, -28, -64, 122, 81, -66, -21, 18, 101, 90, 9, 71, 4, 65, -10, 9, 97, 112, 77, -12, 91, 60, 54, -121, -71, 45, 9, 50, 67, -125, -11, 122, -115, 86, -85, -57, 51, -12, 121, 63, -69, 29, 115, 59, 23, 50, 2, -91, 66, -32, -15, 80, -7, -96, -21, -78, 24, 38, -21, -91, -63, -17, -42, 11, -56, 23, 47, -30, -74, -118, -57, -67, 17, -104, -108, 69, 42, 107, 61, -70, -25, -97, 116, -5, 54, -116, 16, -124, -101, -44, -103, -4, 115, 119, -74, -91, 94, -70, 98, 1, -9, -99, -108, 62, -60, -86, 19, -84, 46, -19, 13, -32, -109, -17, -29, -55, 79, -74, -33, 98, 28, 41, 63, -76, -89, 88, 123, 6, -60, 90, -15, -64, -113, 94};
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
    msg.setTimeStamp(0.5962751746903948);
    msg.setSource(46062U);
    msg.setSourceEntity(68U);
    msg.setDestination(3523U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("FWIOUPCYJNFPPSTHJKZFSGCCPFZGWJNWVETCOBTOLRITERKKZLMYIZPWEPRMJZOERIGBAYLXSDSAINDNKNVBVYBMZTSDQKFHMORBEIYDEGPNFMWSDQADJLTIAOPCPQZCWXJGHXFDYRUNRCXACOBWODVKILEUQLTLFLRTAJZHFUHMIAKTVEQMNFYSVWDCBSOQZYEVXPMXKTQSUVWUBXSBBAUYJDG");
    msg.plan_size = 60875U;
    msg.change_time = 0.4541950482796804;
    msg.change_sid = 6022U;
    msg.change_sname.assign("HIANTSQVLDXZDFGMVW");
    const signed char tmp_msg_0[] = {18, 6, -88, -28, -86, -108, -84, -97, 71, -119, -23, 76, 51, -85, 3, 30, -86, 117, -81, -122, 38, -39, -16, 80, -11, 40, -25, 0, 101, -63, 92, 58, -112, -25, -71, 30, -71, 52, -6, -96, -59, 7};
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
    msg.setTimeStamp(0.7935141265116504);
    msg.setSource(45426U);
    msg.setSourceEntity(103U);
    msg.setDestination(61703U);
    msg.setDestinationEntity(225U);
    msg.type = 28U;
    msg.op = 52U;
    msg.request_id = 32856U;
    msg.plan_id.assign("NNKJOKHIOGN");
    msg.flags = 9449U;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 84U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PHGSPMVRVVIHDSTDFUYZICHEXKXWLABDQDAWRVTXWNUPVPSNFTFEWJWQSIMEKQYJYFGGWSWUUBNBEELJJLKSRVLURNHOUIVAZVQOZOJZEOBPUZRFNVHMACKZFLMUATXLKYWYCBHSPUJTQXGBSGGOLXNQZFCIHJELUYFMCBCDMAHAPIWZZCTNGJGMANHQGWODAQSRYALRRTOXKGNBFLTCEVYKEXOJCPMSIKDIROIBBNIMDOKMPEFDDHQRZTQYKY");

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
    msg.setTimeStamp(0.5335039133568665);
    msg.setSource(4285U);
    msg.setSourceEntity(209U);
    msg.setDestination(21076U);
    msg.setDestinationEntity(182U);
    msg.type = 230U;
    msg.op = 0U;
    msg.request_id = 1753U;
    msg.plan_id.assign("YFZLKQAKACUVJSTCUAJUZVFHPSXSGILEGZDXYCYOGTVTEBEBLAZZIPUUFLJOCWTWDKQKVJBSYAZKBNPXZQVWPUMRPEBPIVNMDRJROECNGIKGRJEMMHOQENJILWHODSAFCPCGVEHQZNRWAOGEZHD");
    msg.flags = 31038U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("RTGLPONZQSIXROSTQYWFOFTBEXLBRXKLXCLUKNRWCMOHQLYSLSCZWTMTOZHIVAPEIGGEYFVTMMPJCJHLZPCCXGI");
    tmp_msg_0.service_type = 144U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GNHJRKGPUHAXSKGVVSXTNBRIDVDUKRHXQFPWYQIPDIRQU");

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
    msg.setTimeStamp(0.5919753854453922);
    msg.setSource(16381U);
    msg.setSourceEntity(235U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(243U);
    msg.type = 145U;
    msg.op = 101U;
    msg.request_id = 34150U;
    msg.plan_id.assign("CIWYSZBXZEPZYBZJZURVEODMMDQHEZMGTFKSJTXATHPLKRBMGWKBIAJFYULFCIXOZIVHVENWOLRGIXFSQMAUDMEEJTFYDVOHBSOUHUCTXRVBRJKUVIIUQEPLQOQVNAFFBSZXKHOJPSXBGDYDYWFMDGBUYGWUSACWLGVFVIJEGKRNMAPSJPRDNRZJI");
    msg.flags = 26428U;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WQTVZLXTXBMNPVZUMSGFUXEJQWYCCPZLEKIMGUSBUAKLBJRQPDINKDCYUOMJIIYRSEJNHDWHRANGGAYMXZQBCHUQSWDQILMRJFKZRUQACKFVSWRGYVMFJPQEEUADPBPJZLBNBANHXEAKCUDBETCFFTKTHGZOSQAGDYEWVNYRCLFIWPOMSPXRGIPJXSFLFHTNVUWBDMRHDOOHKLYVXOCTTXZIMLENWYCHWVLQGOZHEOTJTDAFJSBKG");
    tmp_msg_0.dest_man.assign("TBDYQEDWERJJGRETXLCZDIHWWBZOFBVPYFPVKSEHCJCRQYDSCJKZIRBPVJMDPARGMOSFANXUSGKPKEKTCNBTXISCTGWTABNLLYRTAXRNLOYFYWQFQNWTPCURPKFUXYBHZKXPCAEIDSYOGBPVAOIOIPLNFIVHQWHJUQHXIUOQKBDCUMGHUSDVLGYMZ");
    tmp_msg_0.conditions.assign("CYDWJTDKIQJQYSHMVUGZZLWLBXSUAUVQXNLSMSFUBBMLOCZPSTSWRRCLEOMACEMZUEHKKWDUPFIFOCDQZJPMXPYAHVNOKOMCFMEGETMKRGNGMKTDFTLYTJPIZDJROWUJWKWBPBNNYRX");
    IMC::TCPStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 11798U;
    tmp_tmp_msg_0_0.status = 246U;
    tmp_tmp_msg_0_0.info.assign("GMNDWONDTHZWZQWBQAZUEGWBADEIJKAIRHHIOYDPDKPGLUTUBOMFTWLTBKJYCRPXSAMXCMOGDTJTBXITMMVXFHFAVCKSRPKESOPHQ");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DYFGPYFVWAEMNTHJB");

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
    msg.setTimeStamp(0.13531047947682484);
    msg.setSource(33017U);
    msg.setSourceEntity(1U);
    msg.setDestination(30085U);
    msg.setDestinationEntity(76U);
    msg.state = 86U;
    msg.plan_id.assign("EIZUPPLPHLWBBAVEINLDIGBEUKSYMFJUCKWWTHDHETWJYXSVEKRAAQZNDNZUPOARNVFICMWTEGVTHRFBAPJUYWQDRNPLDJXYSSXYOEOZJCFVBTKOHALUNISCJUTLXBVMPIABZSMYKHWFRURZIZTMQHRXIGCHGYRKXTRBSWXOKPODHTMFDELSXMJQGEMZPQOMNPFVFKWSOQGIALOOQAYCRMFCLVFCNSLKDKITJHGXWVG");
    msg.plan_eta = -279077108;
    msg.plan_progress = 0.36263498654356685;
    msg.man_id.assign("GKCZWBMLOUPMGCIAWKOBULXDIOTFNFHUJVZCFEOQLMQELYYBABEHOBWKQGHNBIZPUPCQRXHOMT");
    msg.man_type = 16656U;
    msg.man_eta = 1161688739;
    msg.last_outcome = 197U;

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
    msg.setTimeStamp(0.3491873229665413);
    msg.setSource(34909U);
    msg.setSourceEntity(93U);
    msg.setDestination(23796U);
    msg.setDestinationEntity(84U);
    msg.state = 250U;
    msg.plan_id.assign("TVBEJBKEIHQBZVXTCMUZQSUHZWEKUPWGACBDPPFOBXXGORTKOVUTDGQSJDZCWOPZXIJFCICOOJNMKBHTDJRLANSMBRAJLOYLWJJYSAYJITMPZXMVIRSHGABYFINGXKWCAZLGMKBGQRKDWWPRERPSZCUNTLQTDEEVPVIGDHY");
    msg.plan_eta = -958949564;
    msg.plan_progress = 0.024509688574208988;
    msg.man_id.assign("EBPRIGMTUINDMJCADGAQCKHKHJJKBPJLNFNXPPBXIGPYGSUQESNWXQGOWYMZPQFRTEJAAIZESKZBBCQSRVIONRTZMWLRVOJDVHGQDPSMWCRRZKKWMMERXVUKWFJDIAWAMTSCUDLVZALQNTOVUUROWSIYKFTXHOEVDLHSYBJDTLBFZZMYSEUWRCXCVGAUBFTUVXLHYNFFNQKJYCHAIFNXWLSPYUKBOPFLTCZEN");
    msg.man_type = 29862U;
    msg.man_eta = 2001328353;
    msg.last_outcome = 199U;

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
    msg.setTimeStamp(0.14268812973186873);
    msg.setSource(58593U);
    msg.setSourceEntity(249U);
    msg.setDestination(42571U);
    msg.setDestinationEntity(149U);
    msg.state = 130U;
    msg.plan_id.assign("WLWTMTBKVZHOCJPITOYSAYLHXDQMJKALQUNGPWXMGZEHNCDQIXZERAQRJEVXNIUOFIUOZJIRWULEIDUDZAUHTCELIFRBDMDJBKCSZXEOGFMSPPKCFYYPSWRNWPFOSYWGNOJLHVGINXZFLHDZHPGYTTKIVGYUDKK");
    msg.plan_eta = -543904387;
    msg.plan_progress = 0.3523465925511483;
    msg.man_id.assign("IXLGQAYOFRUGWCJCZZQEIORDHXJRFNVMQBJXVBVQBSDIWUSADUVFIKNJOZIZTRIHVNRKYPRBPTNVRXYEDEQZQHAVZWLUOHYJYXHYQKWFLCAMAFBPSEWCLOMLTFRNLPWTECK");
    msg.man_type = 42120U;
    msg.man_eta = 398809561;
    msg.last_outcome = 149U;

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
    msg.setTimeStamp(0.901818270598483);
    msg.setSource(24804U);
    msg.setSourceEntity(60U);
    msg.setDestination(3968U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GHQHSUVLEMVOSEMEKWFHOXNGYQFQBMZUFDRJZPSNEKMQJODLNHVPGCDOCVSKPKPFGYXSTFIUMDWVTEXHYPQBRASKUOVSPAILGXODMTJVJCQCAXYUHUASPZHQJLLWDBYRGXGRBVMRRCJMIFVORFFXEZCZIIMLYBCSHIVBBXDIDOJAUZKDYZYTJAKEWYIWANNATPZUGWPTGKIONWYBFXNCKUQULDZENQWITAKH");
    msg.value.assign("JFKLVEBYDPILDLZCHVULKBRXPYPMCGBBPDGYGRNSPTYNEABSAUGSXSIRBHJYCXDJDNTJFLQVWOZJCQPXHBEJTCLENNENZWGVHJHZDOGRAQBWRKLXGECSPFAAFDUWOYNKEMMOSBMIVKYGSUMEQZSUYCUTTRJKQMRVFZIDRZYMIXWITWOFZOOXWAQZ");
    msg.type = 62U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.9276369915611963);
    msg.setSource(9657U);
    msg.setSourceEntity(88U);
    msg.setDestination(12865U);
    msg.setDestinationEntity(48U);
    msg.name.assign("JLRPTJJOUHSHOWHMZPQGMAIHTFM");
    msg.value.assign("OVIMGLOHCPXIGWNETNJPWHHFXYXPZTNAQIYLKNVMXSMRQVPGSNUGKZUOWRWESKYAFMUTVKTIDFZROLXNXPFBTGBOSKFADXUPRVHBQYZXLWBBQHKKVFKNOJAFZFOQCJSQUKLECORMHJASIQDHABLQYRJYCTLHHDPUENGGSDZVDJKAEGDLMRXWWJUPZUSLFTVCBDFRBAZIMAYGV");
    msg.type = 89U;
    msg.access = 100U;

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
    msg.setTimeStamp(0.7920220426994357);
    msg.setSource(32618U);
    msg.setSourceEntity(229U);
    msg.setDestination(43666U);
    msg.setDestinationEntity(163U);
    msg.name.assign("VBRBENUBCM");
    msg.value.assign("JOJWLVLOYIIZWBKBSRILQDJGAIINF");
    msg.type = 137U;
    msg.access = 150U;

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
    msg.setTimeStamp(0.33692705354087715);
    msg.setSource(50752U);
    msg.setSourceEntity(35U);
    msg.setDestination(8054U);
    msg.setDestinationEntity(47U);
    msg.cmd = 161U;
    msg.op = 241U;
    msg.plan_id.assign("USVTCYQSADRYHRBFBHMGKSLMJYPIWPNECKIGRXTDZHAPRBIPZAAUQUUUXIBADMYDWHKKWMCWTUAJDVNVWDNKZEKKDMDGQIRXJPXJXCVVZPHLLMJWROMFASOIDFXCYCFUBZSBFIHXEPIKG");
    msg.params.assign("WCGVQNTYTNUBPKVPBSBSNUDSJVFRDNAEOWIWKCIBEYNKRDEQYEJIEYGNMQFJVICXCTGMMXNRAHOWFCZIQUXHGXLEJHHRULTOUIAKURZWCVVDLSKKEPLYVDVGHRACOQZYWNRBGOPOSXUBLZDPLAQZGBXPCCWJXKZMKTPLOZMRHRLJFMBIIOHHTLXBEBDTZJWYCDMXMSE");

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
    msg.setTimeStamp(0.46328593572542587);
    msg.setSource(15072U);
    msg.setSourceEntity(80U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(42U);
    msg.cmd = 242U;
    msg.op = 173U;
    msg.plan_id.assign("KHLCDESZOPRVWCKQERXZCETAZRJIJZJHEJKNCFYAPWECUPIVSGGZPFMGBMBNVSXYIPUEDDPNMFSQLMLZHSLBGANLXPOTVYAOKKMDJNGYFUTNQOGSERYFXBWTGZVDMIOYZXTMOGMHQKQVPZUTLSIQKURBRKYABCWEAFPRBKHOIJJNRMOVXXSRFBFGVHATWVJLDSPU");
    msg.params.assign("XOJUFWOHUITEMHLATJKSBCDUDRCGBNVXQOTWOHOTJCYSGWFOXHPTDUVCGMGBULXNGRLSWYPXYOAMRZHJPMKYHTLOWDQWEZNKQYJRLEKCNLMPXYAANMITIVSAEGZPEKVVFCNBZCRBMVUIFXLRIPEUZNDGKGDWKZVYAFQJKNOQHTSJBWQMTDIZEFAPUEVRMRSSLQQHCVAFLOZYVWHJRHCRZJBXEFYSYDIKDIXXQBENBALJF");

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
    msg.setTimeStamp(0.010469890127449921);
    msg.setSource(6881U);
    msg.setSourceEntity(165U);
    msg.setDestination(15932U);
    msg.setDestinationEntity(41U);
    msg.cmd = 61U;
    msg.op = 129U;
    msg.plan_id.assign("KXFUBDJVUUYFDBNKVBVAYWTIRWJSNTQTISIXPXOAWJHVUKDLFHEQHPKFRXXMNRHLWMGIZVHZGLSYKAFVARQABDUUOTGBANOSLJBBLAYTADGOJCWZVASBLCYMQODFOLOZIHQFYVRISZKCNGSRGAEYNZYKHWQCZQYHYEMMKWSX");
    msg.params.assign("DRLXMFRHRWPCNOVGGCXJAAMCGIKEMDEJEAPHQSQJMXAFOJYQFWJPWQHWTJHHKIUKNUORBXNLJSTQQLNCOCYXKWFPARRWZIFCAQYYFSCBOLKZPIEVXFOZSXVHIYCDBFIDDEZXVLMAJUTV");

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
    msg.setTimeStamp(0.6672199125225613);
    msg.setSource(12256U);
    msg.setSourceEntity(98U);
    msg.setDestination(4162U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("WPCWDHHXTSMMUXSJEXLYZBOSOYDAGJXLKOBVJINNEYNCAHAYMARZVPCQUKXJJNFPTOKPYMPTLDIIUIHHSGLZUEFIQWMLTAAIMFRADFRCOVMUUZHPQKTFXBDWZCEZOBJJIRQGQPTKGSGJOCEVIDPMEGAHFKYQAHWLBLRCFVRFBUNPNZRGCWTKOMVXHTWRNIESMWLDJWZZDPBNTQEKGOQTUZJKNYSLQFUXBLUDIA");
    msg.op = 67U;
    msg.lat = 0.9293910893088996;
    msg.lon = 0.638217965446116;
    msg.height = 0.21265279532985804;
    msg.x = 0.13768272066045595;
    msg.y = 0.6950343428871407;
    msg.z = 0.7629720999216055;
    msg.phi = 0.9261548830339337;
    msg.theta = 0.22723626581072676;
    msg.psi = 0.4229481634127026;
    msg.vx = 0.6371794450497911;
    msg.vy = 0.16139062098548917;
    msg.vz = 0.05859370348759796;
    msg.p = 0.03489856407399261;
    msg.q = 0.6764900271670233;
    msg.r = 0.1707819644558568;
    msg.svx = 0.37208269355525203;
    msg.svy = 0.6241842754595668;
    msg.svz = 0.5825323973603114;

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
    msg.setTimeStamp(0.62614076681914);
    msg.setSource(46326U);
    msg.setSourceEntity(164U);
    msg.setDestination(17008U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("WKTRLCZRNNUWAIQWAMUFDQABNOOMHAOGCEZBVVAHFYUNEZLJGNONGMEPTDPADOQLUYSJFWXUACSZIEKRZDVVCVBULKXYCRQEYHOIGFNOHMGLBPBKTWVBQQDW");
    msg.op = 151U;
    msg.lat = 0.47065196983031565;
    msg.lon = 0.057111107144405926;
    msg.height = 0.08392771252583464;
    msg.x = 0.9877190963377475;
    msg.y = 0.02389678884835933;
    msg.z = 0.29278317929490894;
    msg.phi = 0.8167365022723715;
    msg.theta = 0.4547745244463005;
    msg.psi = 0.8203368978028968;
    msg.vx = 0.032717856187503225;
    msg.vy = 0.6705281190547717;
    msg.vz = 0.8997830697212984;
    msg.p = 0.9238713489228066;
    msg.q = 0.41678146439880936;
    msg.r = 0.41644760121792435;
    msg.svx = 0.43564703892106915;
    msg.svy = 0.5930335217216431;
    msg.svz = 0.1606352069490593;

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
    msg.setTimeStamp(0.45492623738302806);
    msg.setSource(57697U);
    msg.setSourceEntity(197U);
    msg.setDestination(61292U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("SUSGWLRTPAZWQXSDCVQENFIUIVNRXRNZWGSXNOYEKHKAMLCEBRJPFZZYQOTAKVMFDOESMDWRWKOBSBZTMTVZUBPUNNDLQKHBLBLJCSJASDCJOGLFPIGQ");
    msg.op = 192U;
    msg.lat = 0.33131346009026064;
    msg.lon = 0.8563033874635368;
    msg.height = 0.7133550772096149;
    msg.x = 0.035656452839261665;
    msg.y = 0.5042944961341771;
    msg.z = 0.25959996319939327;
    msg.phi = 0.6096459190138792;
    msg.theta = 0.41923267335491565;
    msg.psi = 0.4718235154927227;
    msg.vx = 0.3952568789761426;
    msg.vy = 0.6137470208324075;
    msg.vz = 0.17221070236368063;
    msg.p = 0.7867549368321647;
    msg.q = 0.06338333749245117;
    msg.r = 0.4214225646319911;
    msg.svx = 0.9179134691190107;
    msg.svy = 0.8762907591805866;
    msg.svz = 0.32143975402711356;

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
    msg.setTimeStamp(0.18158655882378338);
    msg.setSource(28855U);
    msg.setSourceEntity(153U);
    msg.setDestination(39742U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("NUEOLNUIBIXZDRMZFDLBTNTUEVUHSOQKUXHVKXMQUNESSVPGUDZYQWYBCJBBFXOMOCETWLOTQZCRCKIPJGSYFSYBTLWKRHIBIQPAVOWQPCPZDMXHHLGTASKEYJHHSFEBFINXODPEMGIEKDZCRGXKVSEQE");
    msg.type = 104U;
    msg.properties = 250U;
    msg.durations.assign("VBQOWXMWIGIMDHMTOAUBWIBAVYVFFPKGNJXSRSCWKTYWOCSGNPTTTRBRBAPCUZMLTNZYSMLYSNLDKBCIMIWCZNAZUAQETSZQKPLRGDHKZGELCKMIDRNVHRTXNCORKOXHMJPOKXEJGVOAPQBYREGYHSPLXFUOSUIVJHXJZGFJVPAIUFJMPFTPXKSREZWQZDFCXSVMJAYRQBUCYUVEXLUFLDOWEH");
    msg.distances.assign("FMDMAGPCRKRPUUDRQEBIDPXTQOYXNTWODTCPZFBGWSHNPZPXUGGBOYOEDISTFXOZCGETMWLQSKYRWZQZUVWVKABGPBOCBNMIGVMKCHGYPGLOLNFJWRXUSC");
    msg.actions.assign("TLKRBQNNTEWCUWHFSZTTYIQGVNIZDOIWOYRZNWDBBWCXAJGLDSMMROQGBHUA");
    msg.fuel.assign("GQVDYRWISWNFAPUTGVLYNWJBCUMYZAUBRIBTLXQUJRMOOGTXJOSXROADWHSRNENIGLEJMSFMJBMZVLMNAQCFKRCIDLAVFRHRESNYTXJXMYBKALDPQSSLBDTOOOPFSSWZXJUTWDHNMXWTWGWVPPYIXBQIDZUKQVEEKLKOUVYZFBIQIEDHKCJABAHFVETZCCXPJSOHPKKEQDZEICHGDNLHYMGTZNBFVRUXNFVWZCYFHQIG");

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
    msg.setTimeStamp(0.03260058696037571);
    msg.setSource(42671U);
    msg.setSourceEntity(196U);
    msg.setDestination(41870U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("CQXTYIJNONFHCYLOGVLDUUWKHAEZBFVAVKWTSPUHGFJQQGMZADHEVOLLGLATDXWBUNMCQKKFBRPDHZIDNWEUAGSJMMPXVPUPNBWZGECQWGFJOROHUPIYXJXVQXWKPKEJIYYUJABMRPTKDRCCMKZMZTRAOLXCSFOJUFTWEECYPBYMFMJINXWFYHZQIBNSSEFSCQJM");
    msg.type = 254U;
    msg.properties = 179U;
    msg.durations.assign("CPKPTBLYWSRHWGBYXVSAGDHXWVLJROYCPGEDEUJJTQGJNFEDDEZHOOMUUSPONFZIFQMSAXKVYOGSVPARIUQGJLWFTMPTCCSCWWBBSDJDZBKURTHHJMUDFIMBUKAEDLUNMAQ");
    msg.distances.assign("DYLLUONKFZYOOHTRIXRLNEVRAZOLKLZUTPDWXODQPPCTTXMWFYAMMUBCNPHVGXWIEUSODGHQNKEUMSOMFAJVBOYUEZFWBZLBSRQTPFXINXKCJ");
    msg.actions.assign("CNRAXRSHLYVFAJYFNVPOOBKPMMFPRJIWHKUTUFZMWDVDZFWDTYRNICSZKVLUVOZBCDSVNCMIZXUWXPZKUPJAEWXEQCLHRJQDTSEQKMVINBDQNYRSDILEIAHLLWJGFSBQTCBTPOHTNVYGFJUOUPOXJWNORRXIBMEXQBGWOCLPQSQHSVTEGACOJYBALQZHWKZCOPGZRMHAEKXWBGJKNHKUMZYLMSFBGFAADRIFXLGIEYJUSECGHXEDTTM");
    msg.fuel.assign("GWOFKQJBMGWHYSNEQBBPUIUQYDKHOOADXPMWVKTFMLTBTZORYMVPMORIGYXXUKVFHQIEQVAAXRZWNCMZWFQRFNHNHLTELFUYVJZGHDBTVOPEDETUGJLPNLQFGLPYQDVGVUKPSYCCMJXQBYUESRBXOYCIOZRPWTAZESLDDRRYUPCGANSAAIQMSJJWIJOIJFCEGSKXPJXIHCJZHNDFMKA");

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
    msg.setTimeStamp(0.8815261579885558);
    msg.setSource(50436U);
    msg.setSourceEntity(128U);
    msg.setDestination(24907U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("MXPOHLKCVEYMIBJBVSGFBGGOCPT");
    msg.type = 91U;
    msg.properties = 110U;
    msg.durations.assign("WVOBCCFTTSHHOKLENBKJASAHTYPIPUUCMKCBXKAYEVSCOFAKVZTODXIPOJNSBECQUSZWWLNCIUQETBGLYYRHGAOGLJOTZARSANVOBVYZWDHRXRXEOFYDCNRYZGJNYWYXOGADEFMKUAXZNSWEWJZMEUZDIDXZMQHQPHIYFJNMPUGR");
    msg.distances.assign("AYMWNLHWIINROVUHXRCMIWPWWUCGJAMBXNXAYNCPSCYWBFMXZTJJCBZP");
    msg.actions.assign("AETRYJHVZCMWZNCYSLHNNGERZXQHOCXVTYIZRVTUXJMIGHONDTRJDCZISFRTLALPNXGOOBGALBIXXCKAEQKWECJQVJWJILLDLIQNPBISUGPDEPVEUBDCEHRXVVMWNSHWURUKMUMDCGUCMGZUAXISHGOTWAHQSKBRFJABHBWNXOJFWQHOGYYYTYKWZVNKEYFFMOAPDOPKTKLSQLFFUCTUVSORVF");
    msg.fuel.assign("QQMIKQKCUBTMHERIKKDNUSROABGJBHFAPHOBULTNGCDXEWLPBLEYVEJLZESUALVKHOMQNVSDVDMFNED");

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
    msg.setTimeStamp(0.8988619747710836);
    msg.setSource(62366U);
    msg.setSourceEntity(88U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.4557934186982562;
    msg.lon = 0.9802514921358139;
    msg.depth = 0.5386372134494712;
    msg.roll = 0.4765370033308156;
    msg.pitch = 0.5177079886266803;
    msg.yaw = 0.3541458520023667;
    msg.rcp_time = 0.5599582574853019;
    msg.sid.assign("GRYNOULNFKWKOKDRWGVDUJVVVVXDDJAVHZAFBTUZBEPHOALFWWQGDWABTZWQDZJB");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.7890117250390635);
    msg.setSource(44863U);
    msg.setSourceEntity(215U);
    msg.setDestination(19026U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.0485510140897788;
    msg.lon = 0.47936248270763837;
    msg.depth = 0.5465852687426409;
    msg.roll = 0.9677214106402644;
    msg.pitch = 0.6756418690864966;
    msg.yaw = 0.5203254344303353;
    msg.rcp_time = 0.37771640487830005;
    msg.sid.assign("CKXMVYKWLYZV");
    msg.s_type = 145U;

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
    msg.setTimeStamp(0.3647770204731786);
    msg.setSource(35783U);
    msg.setSourceEntity(1U);
    msg.setDestination(8861U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.47246351934273534;
    msg.lon = 0.621257290004322;
    msg.depth = 0.04786675709990351;
    msg.roll = 0.0017744285282688121;
    msg.pitch = 0.0844448638376879;
    msg.yaw = 0.9707527526816147;
    msg.rcp_time = 0.25461118322567466;
    msg.sid.assign("CBBTHRFMHXGWVQHUWLR");
    msg.s_type = 63U;

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
    msg.setTimeStamp(0.05052209460015322);
    msg.setSource(36475U);
    msg.setSourceEntity(134U);
    msg.setDestination(59680U);
    msg.setDestinationEntity(154U);
    msg.id.assign("NVMIRYVFEVLJIDMLWOIUSNSPIBFCLWYTLNDGEDNQOMFDBZFWXKAXWORNBHTHWGCVSHQKHUSQTCSPKITGNYMOEBUJMPQVNJULWRAUFUNAEXCSDHIFEKICYJPGZTPSRESSNXHKPQYHECTZYRRKOTCONGODWMYGOQCWQYPOJZUESZXRAJCTZMFJFBQIUOHAZFXYVVMGE");
    msg.sensor_class.assign("XJRLOMVNRBP");
    msg.lat = 0.9391166612855198;
    msg.lon = 0.22027754201618133;
    msg.alt = 0.49438894993957094;
    msg.heading = 0.7584721224561298;
    msg.data.assign("POZGUJVOWSAZTFZTKTFRBDXQGWSDLDVDYAUNGJFUJZCMYHNERZTJHGGRNQPDCQTYUFAXVBWFGCOBEPIMZSQKKPXRKAUMIYLEEHCGUVOPTSSREZNWTAKXLLIOSEMMOSURIVOLAIBTVCXNXOIHKRYEWXFMZDVBEZUBXJQKXTPNBIMHHCALOPMYINSYJFVRKAQBUWYQPITMWRHNYNCGKXLJQF");

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
    msg.setTimeStamp(0.06124214829039598);
    msg.setSource(61464U);
    msg.setSourceEntity(45U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(189U);
    msg.id.assign("YFXRMSHRMOZCERASWSZTUXKWYAKVDJFVGIRYVNNSFOHCQOYPVGQUYAPMTZGZFXBUQZSIBGBVKHKTDVEJNUPGFPRDMCRQALPJIIDIIFLNJTWAPSUMEUZEAPSRACTYCJCHOOKNMZABGHYNWKQRJRNWYJDLDQDGGNYBYEFECULMXCZITLVHWDDOXEAMZXQRPBFECHBCBWTNTBXPHQLGSKOEFUOIMUT");
    msg.sensor_class.assign("YJYVLONGPWYYMEFNYGFVVVACQIHSNOIPODCKLVNHVWXNEIWHQOQNDYZBIUHSMWQUFRXDXQARMZCOBJLUIPEYTALHRXOFKCZXWFTZUJUFZEHHMZTJATUAEBWCMNXCBBRBOXETXJXATEBOUDFIKPSWYHKPWUSDFQGMSJGNKBTJKRTJSLMFLDNMLKIAJMQCQESAWAPQVXKROLSDPIULUGG");
    msg.lat = 0.18223944389645574;
    msg.lon = 0.7546928770163595;
    msg.alt = 0.5132371828868062;
    msg.heading = 0.8479414077609878;
    msg.data.assign("ZTEIFINLIKNIB");

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
    msg.setTimeStamp(0.28007631868352034);
    msg.setSource(13995U);
    msg.setSourceEntity(115U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(21U);
    msg.id.assign("VDTHCTHVOFKZJPXYIRYJWZPVLPWFJPJRSIBZIJFSQMQNTWFENREUWUKESEDJISPWLCNGLJAGFSKULCGRTCPVIALBLHBBYUXTOMHUTITOETUCRBFWCZKTCMOWGKLYHSQIDASEDCQAXXHURJGHAEJAFYDINEWZNYMFBEXSDQKZARRKAODMBYZIVKPNHRCBGLSNNWAELKZZAXPZUF");
    msg.sensor_class.assign("UREEKNLBKOAFSNBTYGGPHSMAPQDMNPSKSTEVCCBGUHMMZCUFCXKLZDOINUVEBEFARJHZGFTYMWXIQBXUFRXLQIIERNAWWVJN");
    msg.lat = 0.7443823059731234;
    msg.lon = 0.9933887186758769;
    msg.alt = 0.2820167013021101;
    msg.heading = 0.1582952164308855;
    msg.data.assign("BWDPZHFEECLPTVNCUDUSKRHLNOXAFQXMLSTHDGQOTQBDOJGFVXZWIBOCDKPEHIEXCMBDXYFOAYHNIRTZAJEZSB");

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
    msg.setTimeStamp(0.39303551792674063);
    msg.setSource(27553U);
    msg.setSourceEntity(15U);
    msg.setDestination(18214U);
    msg.setDestinationEntity(41U);
    msg.id.assign("OYNVPDLEZXCGXWQRHPUBQMHOECOXIXMXTVKGJYENKTGWIGQHIZQPBCFVVQJACLGIUXLLITTKSDRQTNQRFPCONXVWOOIUDKGJDSDJUMLBZUOCMEEXHLDJPHCUTWQSJBYROQLYIVSFKHUVMAKMEUEFAJITDRLT");

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
    msg.setTimeStamp(0.877438087857115);
    msg.setSource(54739U);
    msg.setSourceEntity(104U);
    msg.setDestination(33586U);
    msg.setDestinationEntity(254U);
    msg.id.assign("STXCJNFSQVDUTSWITDOSMQTEAJKIFVLFOQTKHZZTHMKKCYCYOQHORVPUBVHEJKLFDOIGKOGKWYGBWLRATGRSOGKYVUAJBNUXXIVBNRSMXIJCFPUMHDULZPGYHND");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KDOFQTGRHBDVKPQGSIMFUWJPTOETBAYSVYUULVVAPXKAIWWQFZFMLPVQHBFLYYGDNAJDGHTAQWCBQIYMRYRYMZKMSKZLUBNBYMUZUOZSZ");
    tmp_msg_0.feature_type = 23U;
    tmp_msg_0.rgb_red = 138U;
    tmp_msg_0.rgb_green = 88U;
    tmp_msg_0.rgb_blue = 198U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.877484886095415;
    tmp_tmp_msg_0_0.lon = 0.9746148598129488;
    tmp_tmp_msg_0_0.alt = 0.7346119652869596;
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
    msg.setTimeStamp(0.5800469218178248);
    msg.setSource(23227U);
    msg.setSourceEntity(145U);
    msg.setDestination(62086U);
    msg.setDestinationEntity(113U);
    msg.id.assign("TIYOJMLEJCZEZLOGOSXFKQQFQCIKVIVQIYNWJZEMWFPVFMYGGXCPBKZDRYNHMBUYTNQPLMOKEHCPAMILGWBDBXPANSHSDZGYULGNOVJHEBJWVWFIXAGUQRRSOBPRFJLMYDCBHVWBYJTZPDNCSGIVDEKNIHZAKBWTPJX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GSPYGWPJSPWSIDTFEUBBLBSVQAUMOLLUVNVEMQSIDEOWFBHQRXCZXYBDXWWGKPKMQTKLSGFFNAYMJAERKFYCNHZRRQRCXLMI");
    tmp_msg_0.feature_type = 119U;
    tmp_msg_0.rgb_red = 187U;
    tmp_msg_0.rgb_green = 74U;
    tmp_msg_0.rgb_blue = 226U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2530940467139595;
    tmp_tmp_msg_0_0.lon = 0.36095140825261507;
    tmp_tmp_msg_0_0.alt = 0.4101799148793974;
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
    msg.setTimeStamp(0.6173851179914337);
    msg.setSource(26631U);
    msg.setSourceEntity(106U);
    msg.setDestination(5434U);
    msg.setDestinationEntity(155U);
    msg.id.assign("ELJWJEWRZQDZZXCPJSITFODWGVHRAUHIWTXIYAHDJUMYLLAMYKVUNTHYLTUPDXTINMTEVKB");
    msg.feature_type = 82U;
    msg.rgb_red = 56U;
    msg.rgb_green = 36U;
    msg.rgb_blue = 5U;

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
    msg.setTimeStamp(0.13281747479158457);
    msg.setSource(15534U);
    msg.setSourceEntity(201U);
    msg.setDestination(24237U);
    msg.setDestinationEntity(207U);
    msg.id.assign("WJXLZVEKYTXIDKIKIQHOTSXBPLUMVIWTBKWI");
    msg.feature_type = 230U;
    msg.rgb_red = 252U;
    msg.rgb_green = 83U;
    msg.rgb_blue = 120U;

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
    msg.setTimeStamp(0.15883455077312625);
    msg.setSource(40017U);
    msg.setSourceEntity(206U);
    msg.setDestination(23348U);
    msg.setDestinationEntity(104U);
    msg.id.assign("FSDSRDGPYIZQXXQJAQWMTLIEOHIHFCLXIKJNDGJVKPREVKFUQXBAVSNZKMHLVMADRQSMOFWNGKSTCYRXUDNYARXMWJLQBOXEZGZENGPTBBNQBOKVMZSXUWUQOOPSWCKLSSUFHCGDCPCHUVWJXVPAJMVLBZCPUOIOWERWKRRTECY");
    msg.feature_type = 245U;
    msg.rgb_red = 115U;
    msg.rgb_green = 11U;
    msg.rgb_blue = 226U;

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
    msg.setTimeStamp(0.10463117115951137);
    msg.setSource(20378U);
    msg.setSourceEntity(190U);
    msg.setDestination(45381U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.9883428248771163;
    msg.lon = 0.26885291996375726;
    msg.alt = 0.0084897465527638;

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
    msg.setTimeStamp(0.08533263794853474);
    msg.setSource(56869U);
    msg.setSourceEntity(197U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.943676779544519;
    msg.lon = 0.4881715090694676;
    msg.alt = 0.7068743888032754;

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
    msg.setTimeStamp(0.5716632125473984);
    msg.setSource(27164U);
    msg.setSourceEntity(172U);
    msg.setDestination(56229U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.8227246553000739;
    msg.lon = 0.9883796871933022;
    msg.alt = 0.928129025219009;

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
    msg.setTimeStamp(0.6221099400658735);
    msg.setSource(10434U);
    msg.setSourceEntity(3U);
    msg.setDestination(2301U);
    msg.setDestinationEntity(76U);
    msg.type = 186U;
    msg.id.assign("ZKAKPRHBHERGMPKVFTXZKJEVYSDRCSARVLCYTGCLTOQXBWSYGSPCXZOP");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.42599098316101836;
    tmp_msg_0.converg = 0.4237988298302332;
    tmp_msg_0.turbulence = 0.5162491720424561;
    tmp_msg_0.possimmon = 182U;
    tmp_msg_0.commmon = 99U;
    tmp_msg_0.convergmon = 84U;
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
    msg.setTimeStamp(0.0014570117986585363);
    msg.setSource(58485U);
    msg.setSourceEntity(205U);
    msg.setDestination(31768U);
    msg.setDestinationEntity(26U);
    msg.type = 80U;
    msg.id.assign("RMUOXJFCWHFQQJCSPTVVZPDAFPQSGUWYVZLHKUWBQLUPJRTCXENWDMGWAZZSXYMTYQRDFCH");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.08902951282254878;
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
    msg.setTimeStamp(0.5666907835866902);
    msg.setSource(63148U);
    msg.setSourceEntity(21U);
    msg.setDestination(34419U);
    msg.setDestinationEntity(180U);
    msg.type = 121U;
    msg.id.assign("RHVKHASHEXFPYKUYBQJIOQMFTRIGKKQHWUFHMFBSJCCZBGZWXETDIOXLCSBWQITHMLHVXNGKOLKAOVYMFSEWOMPUCENJEXFHMPIESYZWPJPOQNWZSKUASZJLZBPRVGJRSRWOXOSGYDDDTPYCYCXOPFBJRUFIFKJCIXGLIHDNFREVADXEBQ");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 47886U;
    tmp_msg_0.control_ent = 61U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 167U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.3999186267039011;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 239U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.9804847226287101;
    tmp_tmp_tmp_msg_0_0_1.z_units = 94U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.5142198775321266;
    tmp_tmp_msg_0_0.lon = 0.5644166370707008;
    tmp_tmp_msg_0_0.radius = 0.06761618169237704;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 104U;
    tmp_msg_0.proximity = 44U;
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
    msg.setTimeStamp(0.7633132496369415);
    msg.setSource(18135U);
    msg.setSourceEntity(87U);
    msg.setDestination(11500U);
    msg.setDestinationEntity(3U);
    msg.localname.assign("LDAWCDGDYUVTJVNLZRTFBRYGHIWHHCLATQIQGQGSILMHSDQVXLTUSXTGPRPIZTERRLJYGGHVUDBFZNXEOWPPVZPIHEEKNYBNDSOONBMASZFMNKNKZUQDDCJXOMOJJABUXVCPIROAWVRFPDMBREEYYCZWXMTQUBSWWGQOQPENKAMFJLWAETUMNVSGXAGHI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XGHIJOXJRFNNGRZFCKNIBQDHYSYSERGXTSNRHXCVELCWDQNEUYYRATVBHRJTRZOKMBETXDZBPFENHLMBVOVVXYVDSJBAPFVGOJASOOTDWHGQCLKKZMMXBKCBDSQECLSJAKZTMECBXGFOYWSFFMJXPYDGXRLJTPUUMIUPPHFJZMTUUGQYIZOZLUMPJNKUQQPWGZHIEYLICKPRWWNCVVOAQTFSESAVWLENGKHBDUAUAIIOWLZIWA");
    tmp_msg_0.sys_type = 52U;
    tmp_msg_0.owner = 36829U;
    tmp_msg_0.lat = 0.26070001854390834;
    tmp_msg_0.lon = 0.1054473215066617;
    tmp_msg_0.height = 0.02073521524476951;
    tmp_msg_0.services.assign("UERXALKWHBYGMPDJGZAAOCDZTZBUWDXNDCGNCGBTUVRFRAQ");
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
    msg.setTimeStamp(0.2669019537985394);
    msg.setSource(18237U);
    msg.setSourceEntity(137U);
    msg.setDestination(19053U);
    msg.setDestinationEntity(165U);
    msg.localname.assign("UJKFYAIMJWRQFYJTWRVHIGYGBAKOW");

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
    msg.setTimeStamp(0.7907963861995968);
    msg.setSource(32946U);
    msg.setSourceEntity(181U);
    msg.setDestination(21628U);
    msg.setDestinationEntity(192U);
    msg.localname.assign("YLEGFSPMIQPHDVCZPJLWRKCTNCEKRYGCVETPAVBUFOJHXTXOLUYMFTGKHPQWWINZTXUAOMNETGHMXKYOQCBVIAUNUNZFBRJJSFAFVMEKDLJDAAXIHKHGZZRCDVSWRQWGMSDWWVRWSBEJXTEMZRAILYKUSJZYOQLVLDOFIAYQPBYGPFGCQYCPMISFBUREZJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WZWPIELWIHEDYQRSWYGABNHGXGLYBSFSSCQHYZAOZIFNTALGOKKYTFQCVOYXZWRWFHOEUDOJXWUDEDUCFBLPTBFNQKCMXSEUAEJSLL");
    tmp_msg_0.sys_type = 165U;
    tmp_msg_0.owner = 36717U;
    tmp_msg_0.lat = 0.9331564015213965;
    tmp_msg_0.lon = 0.19243432051352538;
    tmp_msg_0.height = 0.3485432398289092;
    tmp_msg_0.services.assign("LGZKIMGEHTFCJWPEUIEULYZEANWKKSQPENKPHBLHUSOKWARRGCASPRBFXOOVZMDMNDXJWJLDTQKVXXBFBCZZXOEFXFHKLFCJZVWIUVOGDUHQYZIQIJZNUQTOKCQRCYACSMRVLBEFOYARCTWAHWDQVEEGTXXUTGJYOIFQMUGCGWSRPHTPNMMBSNKJLITCDPFLBRVVH");
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
    msg.setTimeStamp(0.8082404393751761);
    msg.setSource(29111U);
    msg.setSourceEntity(187U);
    msg.setDestination(50261U);
    msg.setDestinationEntity(116U);
    msg.timeline.assign("LMTGHKHKXKHTDGLVJAUNOWAOJGEGYRAUKPAFXFETNOGBCYWAUGWRSERDMYZWRSADOYYCNATHEOWDNHMXHXSVDQQISFICFSYKDFWFBTAFHQPFIHLIPXRYVOTEZKEFLTRLZSQOQXYBXEJMQLUNCSICAOSEZHWUIZPKCWLQDCJBMBPDSHEZBOIUDIMJRMVNUMVCXKKVRIYGUNJZZZVFRULEJLGPVXTTMWXCJPGQUPCVRGSMBLNIATJDQNO");
    msg.predicate.assign("BBRLSPGQUCKIPOPTOFDOZFXQDXWGYUALDSYAQMAZNE");
    msg.attributes.assign("BNYGIHDCVMKRGORLLBIEKCKOPIURGICHUMJXPFOCMUVJSIYSZGWAVTGPKJZQFYCDOMDPNXAUYIFDHYMNQOHBVVSTEVRHYGRLXJMCHYSBZUEBLTUIEKSBGQCYQKZBRJFLVDWPPIZQLTUV");

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
    msg.setTimeStamp(0.020455164865090802);
    msg.setSource(9323U);
    msg.setSourceEntity(101U);
    msg.setDestination(43637U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("KZOHIHYUOQMHAEIVTSXLXPCFDLUGSQNBMOSPYAPEEAMAFSDJEWXJKAJXHTMGCPVTWDXMBTYPRARMWPRZOSELYIXUXUIASRRVZZYZTKUFHUIJYBVHCRBCINBNZFFKV");
    msg.predicate.assign("RAVGPPYHSSLNCRKWOGSQCTLZEKZFVUQNLQFBEVCJWWAYZCVMHTXVGIRSQHMIOJLHIUZYTRMAMYKUGUEAFBOBIIHMKYFGJTEROASSBEIZWDXFQZJMMKDVTPSCYP");
    msg.attributes.assign("WIZVBKXUAZDJDIUZKYWZPYAHTKVMQHBXYURRGMOCLSFGJHOKYFUROMBQYINGQSIZSHJTVNGCTILNKCS");

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
    msg.setTimeStamp(0.12556536963834175);
    msg.setSource(7588U);
    msg.setSourceEntity(206U);
    msg.setDestination(47676U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("HPGSTRKEDNYSRNFRAGLGEJDENHDKMXJMTZXSFGOEHWZUIWBLMX");
    msg.predicate.assign("KTQZRHAFUALAECBCSJQSUNIBADEPDFPFJVHVMLGKTQ");
    msg.attributes.assign("SINNGLDIGYWWFFKAHWPOCYMHPMKUTCTXPPTFXOZNABIGONUJWFRHBIXNAATJJZEBGVVQUJTZXVOZORZOMSNLIVRLKKEZTZBWRQQSHGLEOTHW");

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
    msg.setTimeStamp(0.3069324395859122);
    msg.setSource(34074U);
    msg.setSourceEntity(238U);
    msg.setDestination(37077U);
    msg.setDestinationEntity(10U);
    msg.command = 204U;
    msg.goal_id.assign("YLNJUAXQRIOHMRQOUVNHNPLZJLIAXUTHFGIWOSAHCWAILNHIQYQTWQHDMEBRUFYDUJLXIWNTGCVEPVYZKHQESMKGCGKDGARETOMBFPZRLMFVJJIFDJZLMOPDURZVACGTBBIDPOYXWXCSPAZEQNMSEUDQSGXLJKRWPNIXQKMVUDMEC");
    msg.goal_xml.assign("CFQAAICBNYEQQSTDSAFHVHTOILZOSONFWARBUYZMWSVFXIKWCUJOKHLYFURQWAPTKXLBGRMMESXBCNLYJRTHKNDDYEETGOXSBLWDMNHXJBKQXKDWVTCEVXGDEQIHPPWFWZZDGVTDRGRSJUACNYGZJXIJHFPLLBYOKTIUPSQWAPUPBLRRHCTJHRBZUZWMQNKGJPIIDEKOYMLNKZZCA");

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
    msg.setTimeStamp(0.1261022723398314);
    msg.setSource(8048U);
    msg.setSourceEntity(100U);
    msg.setDestination(16411U);
    msg.setDestinationEntity(228U);
    msg.command = 62U;
    msg.goal_id.assign("IJSSIGBGCVYIKPBOGRPRHKNABLRJDPUTSYFNODZVGANVUBDPQWNKNJWTSGFRGRCJQDUQVVDSMLHYJCKHDVAAQATFXYMVUSAFITPRHRADVICJJEMHXWBMTMIOAELCKFMZOTLHNLGCDBFCSEKPKWEHVDMUEGRBFHRQXZTOSJGRNIZVWUZQPQHXSFLKZDNWWEMIBEYUKYOAQAPNTJXGOBTEFFCQPZZPEUTXUXXKOECLIQW");
    msg.goal_xml.assign("MHPYRVUZNQFJLJSPQ");

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
    msg.setTimeStamp(0.8964323573051055);
    msg.setSource(23873U);
    msg.setSourceEntity(192U);
    msg.setDestination(52633U);
    msg.setDestinationEntity(16U);
    msg.command = 180U;
    msg.goal_id.assign("LUETMDFWBIDEVMX");
    msg.goal_xml.assign("PQMUKVECYZCGGNRYWIMUNREXQVLALKLHOMCYUCPBRXIUCNGOXMZYBRLDFCJTNDTAX");

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
    msg.setTimeStamp(0.02374009301951463);
    msg.setSource(7407U);
    msg.setSourceEntity(150U);
    msg.setDestination(48356U);
    msg.setDestinationEntity(33U);
    msg.op = 222U;
    msg.goal_id.assign("EPATBGGJLKSSCIDAYUQBNWMNVVUFXXARAHYRGVYHZICEMGMNNOGHMEIIYWRPTUTHJDKDCSRENQFFFXQAVPZKLNDUOVKICXLJZWPJEYSALDUKUSVLMLGHDOMRRYYCJQDSVQFEBXIEIWNLUORKZTYJABWEZAQBLUKQRTCHHSFNEJZOCB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GKQOLHQCSQJOYCEWCFRGFYBRDWKIJOBTPLPLFGAOBLZZZUNXAHQBRMFEYKJGHMJFOEWNMQWMSUZWNZAOVSIPUGTDAWDFGHAVRCWHTVPTVMNUPPDWKPSVJLISFTFMHRZZCDPKPNSGCVHIUYOQCBLSYXLXKKYYDLAJNYXRGCAXZOETUBLENIJAE");
    tmp_msg_0.predicate.assign("KTUHKBYNXUFHEQEIVDRPKFHTTNQQIXQODSLCMMYSWDAAEQBSSSCOAAGWZBCWYDOWRLPBDZIHXOHIVMEWJCLGARVDXBSSIAQGBQTCICHSNTPURJNLOYMYTOGQCDKZYLCAFBLYWJMKEFMZTRTUHZFLDVHIGZPXR");
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
    msg.setTimeStamp(0.8467548438370477);
    msg.setSource(43953U);
    msg.setSourceEntity(110U);
    msg.setDestination(33228U);
    msg.setDestinationEntity(93U);
    msg.op = 1U;
    msg.goal_id.assign("AUAYNAWGYNPOAXLZPIDJLKQBOHOQHIEJPTIAWMFJFCCKDDQLICQORUEGJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QATTQBUYRAWEPSPMGVLYUXODJLOQS");
    tmp_msg_0.predicate.assign("HUMSAHSPMPORPROKUQKDDAISBMFRJZHTXOURICUVWCXYAUOEAACJYEYNDBWLDXBVZKKTLFXLZVAGRWYJFZSCXSRNLFUKTZFJOEYGFSFUZIDWGBLBOJIIFVHYCVUMNLRBZQZTOSWXQWNVCJGPPMEGYPVGXDMZBLXWDISTGQCJBIKVNMSXZEKMIJPFTNNHPBBEMLKTMQNTWHGETKCQRQWDAQ");
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
    msg.setTimeStamp(0.21519716000475564);
    msg.setSource(64550U);
    msg.setSourceEntity(60U);
    msg.setDestination(35605U);
    msg.setDestinationEntity(173U);
    msg.op = 18U;
    msg.goal_id.assign("QICQMCHZKFSQOTMPBWRFRNJEFJRUJPKPBHT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TFEKZXJFOEKXJPELSXLZVYSRLNYXCFSPSWBIWYKZXZGLACYOKSDDVSPCBALVJXNQFMKWBBCHMBFESRAIMIIOUOUJAVMDADQGETEBHDZPIOVNAPNVREYUCLUMFRBDBJVFQPUXKQMKAZJQNOMR");
    tmp_msg_0.predicate.assign("NGVOVFPEIFFAPBRHWQJIMWOJPMZYXAQNRZAEZKQUXI");
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
    msg.setTimeStamp(0.5167401482447894);
    msg.setSource(33467U);
    msg.setSourceEntity(91U);
    msg.setDestination(49517U);
    msg.setDestinationEntity(43U);
    msg.name.assign("DOULQPCNFFXZXTABIYWGQJCQIQQDSMRCFREVYTDTMQCIDSXALTUAHHLSRZTZIPG");
    msg.attr_type = 217U;
    msg.min.assign("XSREKWUNMPAZNLWILVNCHQKOXMIYGORDCQFJDDFVCRQIPJOZNAZHSWUJLELMKCXRZKPMTVBADYXVTVZOBVOMNDRXYUTJMLZDWKQRKLJDZASNGTQEH");
    msg.max.assign("CIZTBUNWWSHXABWZPHAODSMZKESGPY");

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
    msg.setTimeStamp(0.552829897003209);
    msg.setSource(59982U);
    msg.setSourceEntity(123U);
    msg.setDestination(1664U);
    msg.setDestinationEntity(228U);
    msg.name.assign("LTUPYCEVANQUVOEWASPOALOOGJLREIRFGAXWOCXAQYCVIHMDRWCIJFQFSYRTPTLTWEPXRFNFEZMECBNXREENYSHNTR");
    msg.attr_type = 154U;
    msg.min.assign("DGVDMOWHYFYLGBXWIKG");
    msg.max.assign("JKHZLJQNKNVPHJFZSUKWKEZFCNAQPFPZPUEUJAPTYPXRCSABJFUNGQVMUXNWYWKGLYIPXRCPJRITMNMVDACDDGPTOQLPVODWHXDFDTYOAQYBSMQBEMEYDONWTBGDOZZQSITVXHLNHJBLISXXVSHILIEVEMQRGVACZKSXRHZNJYGVIDLHFSEDICKGYOUKMITBCHOUEGZLCUVWSHGOIQGESW");

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
    msg.setTimeStamp(0.22727963660858497);
    msg.setSource(48891U);
    msg.setSourceEntity(65U);
    msg.setDestination(31768U);
    msg.setDestinationEntity(142U);
    msg.name.assign("MPFETBIRYFFPDKSLQBWVJLLIEBBRGUQTGQRMKXSPWOIJFMRETRZAOWKXBKFCJWMHNTZMXMZMSOYZEFOTHEBCAGVKKGAYWQRYQUSFCNJAZJMFHLRGRAVTWTSFNXHDKGSHUPUCZQLLIVXYECEXWQNLKXVFASHVYAIDDQOLPZPDBRJUPQOUZIXCLHDDBOISVNWSYLCACPJPNUDCGUEGIJENEHMQHJVHIUMZUYKWJNTOPSVNDYCBZOK");
    msg.attr_type = 198U;
    msg.min.assign("QINLYWMUXGHDTBQKAFFXIIGGJTPGEEVOBGBMUIKGRMOFVDFJQEAHEJPZWHYWDHXOVRDXLGPLVAHJIEVIRRRWLLFCBCEZCWPRWZUUIPUYHADYDERDSIHZBWTAJXWXLQNCVJNUAMEATXGKNMCTCVYQWJNMQZYNRCEOKNYZFDKPTUYTSGMWMQFCMAIXYTUGQQLSLLPJUPBPDFFYKJTNHDXOZOCQJHSAHPOASNVOTCKLBURKKS");
    msg.max.assign("MSRDSGPBRGEJQWAPBRBTFFDYGGKYURVVJPCSTLYEB");

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
    msg.setTimeStamp(0.5099300273521112);
    msg.setSource(42581U);
    msg.setSourceEntity(155U);
    msg.setDestination(4708U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("QWASBGNQVQBEZ");
    msg.predicate.assign("OQANNQSGWJNQGADPHTFOMJUFJPWJRZFFNAMDLEQUQXIVZBYRIHRYTMDYWVGAORSFVGASIWKVPGHLAQISQBJCVRTMXLUQWDZF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WZJXTTKASLDENBTAXNVTPLFQKMVQRFCDLVKIGXYGKOPJCRNJYAPAFJ");
    tmp_msg_0.attr_type = 152U;
    tmp_msg_0.min.assign("UEKBJRFFSYDZJNBQAERGFFHBKGGDBVVAVJFQOQVVOSATMVYFWOLTDNOAQHELLMKGTRCJLWZJYTHUGRYZDMAWUNRMEPPZVRTWYQWLIYMJEJPYCPHQUINBXTRMHVUQSXXIDKPOHVZPPMJMEVXXTCXXXSGIGTCAMNSGHUQOKYZMNYTNZDPSBAWWKW");
    tmp_msg_0.max.assign("STGQYMCQEAACUIADDRVHBANMOIREGIXAWJVLULPPKFOEOQEQYTHR");
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
    msg.setTimeStamp(0.9583205561898664);
    msg.setSource(16094U);
    msg.setSourceEntity(88U);
    msg.setDestination(36617U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("INMAQQPQRHOSNOBOBXURFMPCKVEZIFNCBCLZKTWUHQGNWWXVGAZPVCWIAGUORIZEKQELORMDJXWXPJVFGJUASMCXBFDIKGOWN");
    msg.predicate.assign("UILMAXGEFKIOEMAEGOKVSSXCMTVMMYCHHECTODNUVCKANWJTIIBKWSRLLWKZHKXUNCEIDFXXUPJWPNABLYIETZYERWFUOSVOBGBRKPMHSZGIIRWUXKDT");

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
    msg.setTimeStamp(0.0783450241626279);
    msg.setSource(26668U);
    msg.setSourceEntity(222U);
    msg.setDestination(5365U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("IWVJBZCELXSULNHMXDZVHHTKNSPPERBYPZFPAGSNWEXAUZMCBLKIQKJFODVCPROOCKODRYAKRINIZZLPQSAAVINPCEWNJYDAYUTHCROXBNLVQRKASNFBTUVGTYOVTQXUYMDFELYPCIYWXFEGGLOTQOUFUQIBFDSRAGHMGNBZK");
    msg.predicate.assign("EJMKAACVQORPZRHNJSVSFYDFVKWHYIQBZNJRTRVVFWJU");

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
    msg.setTimeStamp(0.6423676420298766);
    msg.setSource(55642U);
    msg.setSourceEntity(157U);
    msg.setDestination(26999U);
    msg.setDestinationEntity(87U);
    msg.reactor.assign("KQXZUZQIUFHNVARNGIEFOSXIMLPHJGFZQJEGDAFBNCRZIYZAMULYEMRSYBCUTSFMOXUT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EHYBKOSOAKZGCFFNUHJRGLHCSCMBEALHIPYKYBRBSJKSMIGXOBDKGSDQELWJXWTZLAQKXFVGQIRPDRDAPMGDWTMMJOZDEUFYGBUNSYTOWIVTSBHNUKOXVJLPTWIBUSYDEFVKBATXTRTFZUYFIRLXWGNEQUZQACKAINOLQZPAQCHVMOIJHEPDRCLWIQTCAQMOZAMHNJHPRYWPVMGXSECIFKELEXJFMJZYBXUNHVVCLYDOPGWJCUWPNXNZRZNS");
    tmp_msg_0.predicate.assign("LJBHEZXESIFRZOAYARLEJKXEYIXCJPYJOTQVZBCRHVYTPLABWLPMFJTMUGWNQSPCOIFFBTQVURVMNMUCGBVNRKHHXEKVEVZWFJPIOIYMJMSFOACBNNAQTFNQORQGVOHSDNTNWZHAQRRDLSMNZMDBIIBOPQYETZUFTBXGNXHJWMLWPJCQAXRKVSGKLD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJRMHYSICOGYMPVSMCNTGKWYOANORHTKQMTGNQJWFKLZNPAZKFLOCFFKTCEPIOPHYQLNDEVWYWBPUVXNQEIDVWGSPGBMAYNJYISLPZRCRAD");
    tmp_tmp_msg_0_0.attr_type = 204U;
    tmp_tmp_msg_0_0.min.assign("XZELTFIAQANDMVAPKIQNSHZYQTGAMIGTTGNVMVBPPXCGKCROQWPKJRVACFPTBRDWIMKEOHXGUCLEHBBYMUWPYRUHVSBZCHECJWLJKSMHXYWMBSVAEOBWUDSRXFTPDZSGRHMDTXRRUPQUQLKJNPCNZUEQ");
    tmp_tmp_msg_0_0.max.assign("ECTBKBFSIOHZGUBATAJVNGIEWCWYLVHDUTGZOLHXJLMFRMQWDTRQMUZGIICFVIYMOGVXOPEBELSNNKYCLOKUSNYLREZKHQZDSAGQVQBPPJDABVCXGIUHQRZPKXSMRENQMSJKCYTZSHRJZ");
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
    msg.setTimeStamp(0.1686291625648194);
    msg.setSource(41099U);
    msg.setSourceEntity(70U);
    msg.setDestination(22491U);
    msg.setDestinationEntity(40U);
    msg.reactor.assign("GWEMEKGAJCVRGTCZOXUWJZFKTKURAELUHCKGPDZANKPNLPSAFTQRCSYWEXDDFOMMIRVUPBVTNBMEDBAZPHQNRQERUEBVMYDECBKNAETYBPBDJKYWURIYHVJQIXCKSH");

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
    msg.setTimeStamp(0.8579711883170718);
    msg.setSource(39090U);
    msg.setSourceEntity(158U);
    msg.setDestination(29565U);
    msg.setDestinationEntity(88U);
    msg.reactor.assign("IVXASJQZHNMMMEMTKNWRFOGXPXTFYVETXWNQKKPFLPZHKHHGTDNFCLFXDWRBULESPRCLWIWCRGXATKOAMBIVAHDRFSSMKDNLQPPBHGUDEONGWZQIRXUJVEBTYHUJASATOEXUFQSYNOUVQACQLGUYYTJKYZSSFWRCJMLHUERZBIYODZUBOINIPBEOPGZKQZNADHDJGADXADEJQJY");

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
    msg.setTimeStamp(0.8402566124505764);
    msg.setSource(41892U);
    msg.setSourceEntity(201U);
    msg.setDestination(17618U);
    msg.setDestinationEntity(191U);
    msg.topic.assign("ATHEDYIZPQTKCNONMWQFEPAPBWIFAHKCKAXQATUAUMYQUUUJCIJUEGONNBGHDAFFPPSXBROXQJENAETZVRMFZSWOIMDWDDMFHDQOIQRDRGKVWPGBGYZLLMLHLBSIJICCJVYKBRBNZDVXCYOPHV");
    msg.data.assign("PJGQECLQOFPAQBINWIEQNNQIGBIPHIJRDMGZTZFMWSYVXKAGEVWRIFDHYZCRBURFYBNGKVROLBYWXZSMNTAWNDEXYVHIQYHJMZKKSSZIEOTDLUAKPFXSWS");

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
    msg.setTimeStamp(0.6427262088094602);
    msg.setSource(45820U);
    msg.setSourceEntity(172U);
    msg.setDestination(11953U);
    msg.setDestinationEntity(18U);
    msg.topic.assign("UBSENHPCHOONGGFPAPSKDRNKFFYWMIQJRQLIDGCQKFYNEZFSJEAHKRVBPNCTTHKHKSVUVVFYPHPCOGJNYJAZXFGXTMHIXRXMJCVKYTAJBCOPAGUTEYSRMHLZWINSDSMQQXLDTMCWQKGBRVDCERIZFOSTKWYQWLZGDTUVKMAVIROILXQNWLIOXOURSPBVZWEYLOUHLDZQUBNEWPTYJUDXJFBIQEDTJAX");
    msg.data.assign("CATCJXKDMSSDEOTCNRZYWQGLJKPJCXYKXEHHZABRTCTOWOMKHQADAULCTKBLGDEFVVDMCVUUBXNFBSNVFBWJGBRJQJHIHTBWZZEXEZSVBJKLYMWJLDHCXHQGONFCGVAODRLRJKOWTPYTDXHWMYEPQAFYTIIGIGPARIPQIJIYFYPQIEZZI");

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
    msg.setTimeStamp(0.7422922333085116);
    msg.setSource(4278U);
    msg.setSourceEntity(125U);
    msg.setDestination(52987U);
    msg.setDestinationEntity(192U);
    msg.topic.assign("CRPOOFQVTNNOSKCHEYRPSJNKKVLVEMQUWHTSKWPMLJARVIAHRJ");
    msg.data.assign("GZKOHIOIFEDZ");

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
    msg.setTimeStamp(0.48328867732141956);
    msg.setSource(47596U);
    msg.setSourceEntity(190U);
    msg.setDestination(25795U);
    msg.setDestinationEntity(30U);
    msg.frameid = 64U;
    const signed char tmp_msg_0[] = {11, -116, -66, -19, -12, -48, -85, 126, 122, -76, 88, -77, -98, 19, -22, -46, -123, -100, -61, 22, 116, 112, 49, 66, -82, 89, -74, -88, 63, 66, -13, -103, -53, 86, 109, -79, 58, 88, 74, -55, 74, 9, 11, 63, 53, -114, -31, -71, -11, 65, 105, 94, -34, 26, 75, -57, -48, 42, 83, 11, -55, 32, -122, 55, -69, -86, 126, 124, -114, 14, 62, -39, 76, -35, 23, 25, 51, -28, 90, 83, -50, 5, -23, -29, -54, 63, 49, -56, -61, -65, -125, 118, 87, 75, -114, -63, 123, -107, -58, -9, 6, -74, -6, -20, 12, 2};
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
    msg.setTimeStamp(0.34839588417364575);
    msg.setSource(43905U);
    msg.setSourceEntity(161U);
    msg.setDestination(2563U);
    msg.setDestinationEntity(169U);
    msg.frameid = 12U;
    const signed char tmp_msg_0[] = {-27, 62, 100, -89, 77, -84, -44, -42, 34, -93, 9, 36, 62, -43, 18, -63, 47, -116, -45, -57, 49, -80, -47, 25, -85, 100, 89, 115, -93, 60, 42, -10, 70, 6, 26, 75, -19, -34, 60, -10, -25, -2, 94, -68, -18, 40, -35, -117, -13, 64, 50, 85, 57, -114, 124, 12, -82, -74, 124, -56, -112, 38, -25, 18, -95, -17, -31, 40, -103, -48, 47, -24, -87, 29, 95, 56, 121, -58, -50, -80, 99, 31, -8, 56, -107, 26, 113, 101, -40, 93, 54, -26, -110, 71, -9, 99, 63, -79, -87, 45, -117, -77, 96, -9, 32, -73, 3, -91, 70, -99, 13, -63, -84, -10, 7, -42, 79, 109, -88, 51, 20, 55, 22, 111, -29};
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
    msg.setTimeStamp(0.8298595997673978);
    msg.setSource(3302U);
    msg.setSourceEntity(25U);
    msg.setDestination(18147U);
    msg.setDestinationEntity(56U);
    msg.frameid = 129U;
    const signed char tmp_msg_0[] = {-104, -113, -23, 63, 112, -68, 13, -37, -33, 30, 40, 19, 69, -127, -49, 109, 23, 66, 95, -126, -4, 19, -105, 115, -16, 102, -90, 116, -48, 27, -105, -59, 88, 65, 18, 121, 49, -85, 38, -85, -87, -42, -117, 38, -20, 10, -123, -73, -71, 53, 69, -11, 31, 77, 51, 126, -47, 92, 2, -123, 22, 43, 49, -8, 124, -79, 2, 96, -4, -95, -128, -111, -62, 56, -118, 90, 92, -110, -82, -94, 27, -7, 15, -110, -101, -97, -13, 66, -87, -4, -92, 112, 81, 111, 72, -100, 118, -45, -128, 99, -116, -114, 23, -106, -103, -100, 54, 59, -74, 58, 110, -90, -77, -56, -60, 9, -103, 108, 35, 79, 42, -6, -118, 69, -101, 68, 50, 9, 54, 125, -86, -34, -120, -21, -46, -60, -2, 49, 123, 124, -95, -6, 25, 108, -24, -109, 103, 5, 29, 117, -112, -4, -112, -46, -57, -119, 124, 29, -66, 111, -94, -80, 42, 109, -79, -3, -114, 14, 98, -27, 61, 60, -116};
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
    msg.setTimeStamp(0.9242735222060394);
    msg.setSource(47499U);
    msg.setSourceEntity(59U);
    msg.setDestination(65492U);
    msg.setDestinationEntity(122U);
    msg.fps = 99U;
    msg.quality = 56U;
    msg.reps = 198U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.1536555459000415);
    msg.setSource(21982U);
    msg.setSourceEntity(83U);
    msg.setDestination(62594U);
    msg.setDestinationEntity(140U);
    msg.fps = 246U;
    msg.quality = 81U;
    msg.reps = 210U;
    msg.tsize = 198U;

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
    msg.setTimeStamp(0.6342915978533666);
    msg.setSource(975U);
    msg.setSourceEntity(130U);
    msg.setDestination(15882U);
    msg.setDestinationEntity(32U);
    msg.fps = 45U;
    msg.quality = 2U;
    msg.reps = 177U;
    msg.tsize = 181U;

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
    msg.setTimeStamp(0.8112944059839243);
    msg.setSource(57113U);
    msg.setSourceEntity(233U);
    msg.setDestination(25925U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.81638396199174;
    msg.lon = 0.8198697220413613;
    msg.depth = 158U;
    msg.speed = 0.044294441702400045;
    msg.psi = 0.47491454183003423;

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
    msg.setTimeStamp(0.4372141326093343);
    msg.setSource(4306U);
    msg.setSourceEntity(249U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.15750967614552092;
    msg.lon = 0.09636769234877218;
    msg.depth = 179U;
    msg.speed = 0.7187308758011395;
    msg.psi = 0.6599861768191864;

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
    msg.setTimeStamp(0.4444023116641199);
    msg.setSource(22046U);
    msg.setSourceEntity(225U);
    msg.setDestination(33680U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.8559497532356962;
    msg.lon = 0.35144276767487814;
    msg.depth = 57U;
    msg.speed = 0.11245068314060913;
    msg.psi = 0.545447264052856;

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
    msg.setTimeStamp(0.6735022466308223);
    msg.setSource(40769U);
    msg.setSourceEntity(151U);
    msg.setDestination(335U);
    msg.setDestinationEntity(28U);
    msg.label.assign("JAQUKWORSWTNAYQBORVTICELWHFXXCFKQPDBWHSLEBPRZPGGKNOIDSVJRFLEEVGAHRZZPQQLWBZGLNZRTXVHGTRTKGIUGETVRCA");
    msg.lat = 0.3827155004540054;
    msg.lon = 0.8729965525202771;
    msg.z = 0.7017265304650017;
    msg.z_units = 3U;
    msg.cog = 0.4747650982546915;
    msg.sog = 0.555888612226588;

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
    msg.setTimeStamp(0.7610842896019583);
    msg.setSource(18039U);
    msg.setSourceEntity(34U);
    msg.setDestination(32197U);
    msg.setDestinationEntity(77U);
    msg.label.assign("NFMESHEUDRGMQELTGPCNNADJTXKTFVQTLOWVAEOPQDYBIZVOFIBDWROCKEZWWYNOBATWHIICGMLMOPNAUVEPGRNQRNNWJNPJLRBBDEVBYESHCZXFJPCHKKDYTCZBSCHGVYRFTIAOJGQDMKD");
    msg.lat = 0.9546720406149205;
    msg.lon = 0.713436256565246;
    msg.z = 0.7558677120867883;
    msg.z_units = 33U;
    msg.cog = 0.7264597877443263;
    msg.sog = 0.6341034612194005;

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
    msg.setTimeStamp(0.07922699686424428);
    msg.setSource(45859U);
    msg.setSourceEntity(88U);
    msg.setDestination(63476U);
    msg.setDestinationEntity(172U);
    msg.label.assign("ERQYTNMVLSTTDHMRCVVXWLGZNXNOAWEJKMICWOTFSIGDSVOFRDEFJAMYPNPULJGQDNKFQRZU");
    msg.lat = 0.8350982128973777;
    msg.lon = 0.28996771034386015;
    msg.z = 0.021825949710958525;
    msg.z_units = 218U;
    msg.cog = 0.08629038739228068;
    msg.sog = 0.7335469875994627;

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
    msg.setTimeStamp(0.6355772938493627);
    msg.setSource(9867U);
    msg.setSourceEntity(221U);
    msg.setDestination(26608U);
    msg.setDestinationEntity(240U);
    msg.name.assign("FCUOXYWKRZULSCRZSIXBKJHSTNUJOMUFBNQEBCMPYHLWGXOKGXNPPWBSCROLALCXADDGBCVZMPHVOHJMBXJVXLCNEVZHIWWKHGIYPKJIUQEYZRBWECWZITTZVFDNEJWOSHNAYMTOTNSXVIVHVQKRSTMVFZDGKJXKKAQRFEMQUFINDQPFBRISRG");
    msg.value.assign("ZFKGIZBIUSKZWLHDUSYVEBBWUYJRJTFGTRNAYEFDXPDAMWAPQSPHGANSIYXXQEPOADVEVIFRVP");

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
    msg.setTimeStamp(0.8789049686137228);
    msg.setSource(53381U);
    msg.setSourceEntity(178U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(83U);
    msg.name.assign("JIKACDXMUEPPTIYODUFNBSVAABNODUMYNMPNDCOWTRWTSOQUUVABMKKOGCZHEHVHGZEPYSDLMLPAPIVDECYPCIKIUDFXHRCXVKSGDHVSZJFOSECRHWSUGATMZLXKZQXTFBFRZJJTILWCMYKDQZHLRRBQIPEFQGJBWTFKYGXLTGYAJRASLTN");
    msg.value.assign("XIDUDWGTPMQFANBHIJFCHOGIEJSKJVBKYXYFAXOLPTGWKPGAPBDRXCEBEVDVSAKNJOUWAFROESQZKFRDHJQWGVZXDUKQOGLYTAZVDCALWJLOOIRTRMWKTBBCOBLRLCTPQXQNHNASWVMAKZQIMMJZNXJJTIUYVEPLMWMZCOHQHVUTNGYRBPFRUESJEMDXKSPZKRULNPVNUZHBEQOL");

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
    msg.setTimeStamp(0.3636901801299738);
    msg.setSource(29949U);
    msg.setSourceEntity(189U);
    msg.setDestination(12267U);
    msg.setDestinationEntity(5U);
    msg.name.assign("EVOWTZQIWMPEBLEJGNEFVFTKHLPOZLYIPMCZCXGUTLCRDVOLHRQCSXRNR");
    msg.value.assign("JNRWVTHYUVLHUSUSWXSZIXMIRBLGWPSGYBKSKCORKUFJOSTMWOOKOBQBLSDOGJDJAWCGXHASQZBDQHJVIVEAETKNLEIWYGIVVHLTCTYYBREEOEKXPMGPPBQVCJHDYANCCYZGIXKTADCHKREUNSFTCFEHJRMLRMFODV");

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
    msg.setTimeStamp(0.7406491715688817);
    msg.setSource(32059U);
    msg.setSourceEntity(250U);
    msg.setDestination(46914U);
    msg.setDestinationEntity(53U);
    msg.name.assign("KFJEEGOANJCLQINRHTALRDEQZIDMAHTISSQLXTUSEFHBLNVBNZXJLRZCKYGGBFASLERVVKZGXQPFOSZOUMDJKJUKOPCLMOXGRVCJVHKWEXIRRZDXQJPCTYYPCKEUJHZXHKPADZGYHYINMLUIRXXNYGGKEUSAISWIAWCCLECHOABKQWSSUBMZIDWYQZJWJGXFYTDOTDWPMT");

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
    msg.setTimeStamp(0.3074350193805754);
    msg.setSource(5539U);
    msg.setSourceEntity(226U);
    msg.setDestination(43902U);
    msg.setDestinationEntity(156U);
    msg.name.assign("RKXOCNYLATHSBSUEKZBXQDIVQOGDWHWAXSNPELBFUFWMNYVIPCZHYWQSDJZMUNMEKVVRCPGTVQTAXDDCSSXGLQERNNEUHFMHBKJPOMRWJAHCDZIIHLUXUYGHYMOZUBKNFRFEUVOYUEJTRZOMGIRCBOFMQIBPXWSWJIAPDFJWDPRKFGLTVGZ");

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
    msg.setTimeStamp(0.6065323458270698);
    msg.setSource(4540U);
    msg.setSourceEntity(253U);
    msg.setDestination(2414U);
    msg.setDestinationEntity(147U);
    msg.name.assign("AVISULAQSXJIXOFCCLTUNERLEKLNADHSFCNOFALWHJIGBEJQRLBUOWGHJWNDSTJFPBGCWNXCVFMGSGMZKYTSQQGMNQCCOGMBWMBMKHJLFENVJEGBXSVYVUIVNUTILBYPFOOPPQYTJRDROZOTXBRQFSIYXKPEUEHXMZKRHKDRCXIKPKHWJXGSQYNZAZKGAUPBA");

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
    msg.setTimeStamp(0.39498159725263493);
    msg.setSource(44782U);
    msg.setSourceEntity(247U);
    msg.setDestination(56134U);
    msg.setDestinationEntity(209U);
    msg.name.assign("ZGLIHYPRLGDDPKZGORQSVXBWTNCLMLREITKGRMWJXJUAAXVPITSFRQEMXRERWSNXCANVRACHTXCUOVQBVHVWFSZXZQFNEFFUCFNSYFWCBJUSPUYDKYJCQPGJLSUYVXUFWDXTIKXBMEWNDIBCCVKQAHBEPZZEIAGSKUFUMLAZJJJYYKHLSQGIEMHYHBJWORJLAWKNCTIPBLEINQTOPQHBVHOUTODWDBAFOEZOKMTDMMAHIGRPNOYM");
    msg.visibility.assign("ENAAQLNNWFWDEOXNDJIHGHHHTTKGPINQWUMDKOWFXQJFVDHRYTQTPUVZTUEKEXVZDLEGUTABSPXSKSQBRHZYZABSGIVHATHMMHEYZLBFQJYZUOKZWIFUBZSOGVRVELMTLQ");
    msg.scope.assign("LCPXYXBDKZWTEBHJTOSXBHUMXKAFWPQFZFTXRGLFMBSWCTHTYWTAYGSVKHYXONDZOUDGVBWTJQFSEVOEMJSONKBHTBPZDRGAYWGRIMBCQGPDIIWNDVQIZEVMWIFRXHXXKMURJFRDJUKAYLJDDLNCEEJZMFANPZLAPUNNUJVBWPQRKBCYMKSAVZOXVLQGSUJVECQUOSIIPQDTMATKAICELQRZMQKPH");

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
    msg.setTimeStamp(0.1863450533532064);
    msg.setSource(50479U);
    msg.setSourceEntity(195U);
    msg.setDestination(51694U);
    msg.setDestinationEntity(22U);
    msg.name.assign("RNZDKDRYVMQWJATPZWOPNMURNWTHQOLOEKTMLQGPFVDHJAOFXJDJFSIULBYVSOSWMXSWHYBCZBKEXMLLELUSYOSQAPUHRF");
    msg.visibility.assign("DTXGZJJLJGMYBCSONGCDROVIVMDTTAZVYOCSSIONNQWBUWWJLFWGQVEIDQEGXFKQNVEZRHKAYLGTQWPIUPKCIKUVHLRZMBNKLJYHGCSOZDRVZADXEKEWKYRFZVOWTIWDTFFUCZHFRNTYKXEVLSBPTUHJHPBOGYFAMPYXJRIXAAAPUKWMOSSEUPBLQLRMJERSCFPNSUCNXJPQCAIUHULEGMDBMVBLKFAQQMCNPYXJGHYDIARBHOWXOSIZZNBQMF");
    msg.scope.assign("UPHYUQROYOBGCHSTGQDBVUJVQHBRKYHNXFJVROEMKJVHZL");

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
    msg.setTimeStamp(0.9972319340886707);
    msg.setSource(57858U);
    msg.setSourceEntity(235U);
    msg.setDestination(25359U);
    msg.setDestinationEntity(250U);
    msg.name.assign("WFHQYYXHYUYQPADHLHTMFBAEUCGAMWOJZNDTKQVYCBWVCEQYZMWBSU");
    msg.visibility.assign("YLZFSTAKJGWFFNKTDVSCLWMECCPOLXUTKIPAHMHYSYYXRWJCJTIWQKNRZGVJTMHSQEARJOQZPOVTUKAFJCGDPUUWUYIYBWNLLEWUDEIEECVMNGQQRQTYRVRBP");
    msg.scope.assign("KNBWCOQSPWHLIRKFOJEJCYYAKOKTRUDUHMYXXIAXVOKMAZEGEMUZFWDOPQEKJZAZTAFPTBRJLGTXWZDWOSHZRYDWFSGCXZBGUSFVZGGIPQVPGCBNIMMPLUJSQDEAZKJNNXYQSADQ");

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
    msg.setTimeStamp(0.011579428406839898);
    msg.setSource(39297U);
    msg.setSourceEntity(179U);
    msg.setDestination(23300U);
    msg.setDestinationEntity(64U);
    msg.name.assign("AHGCSVDMBTPELLSNFJINPGVXATVYNSTSRBFSLYQWKTCKGDZUMPOXFJDOEXNVLRPDHFCJKHYWHXJFQNZUHPVOFIASEZBANWYVKAFPRMDGCZZIUKAFRTQZFVILXUPWJWXNBWDYBLRIONKSU");

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
    msg.setTimeStamp(0.36424346394463725);
    msg.setSource(19555U);
    msg.setSourceEntity(135U);
    msg.setDestination(40269U);
    msg.setDestinationEntity(223U);
    msg.name.assign("BFVULOFHHFSRACSGRIYLKCPCZWRGZFKHMKGENQYMYLUHUZUEXQTSEBPOHFJCHLDWLJJSODICCYTKRYUJTEMBLOMRKPBNMRXYOQFDVUIPCAISFGDURFROQOQRZBVENAXGBWSDOWAEZGKWWDDT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CMPJGAZPKWLUJGXGYETTKEWQCLPUXYRHLBIKFFURGTSMRZHIPTHXEWAGACMQRPACRYBRHYKOYQDAIXFEBPHXZJLKJSQEIIXOAJVJCHXPMBIMMDBTOWKLFVAKBESWVMEMYRWSRZXMHNVKJWQQ");
    tmp_msg_0.value.assign("LQBMJKLXAHEBWIUYTUNFHBSXYQRVPCJKNJVTKKPOJWMEIYCTVOZDLY");
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
    msg.setTimeStamp(0.3345419805689078);
    msg.setSource(116U);
    msg.setSourceEntity(222U);
    msg.setDestination(63782U);
    msg.setDestinationEntity(64U);
    msg.name.assign("UTGUDNULDFUOFETOTEXHBTIITVNJRYBNBDZZLPCMUPORWTAVOVLVQKRTZPBIIPGMGNNMWOQKFXDKADWGJDOMSDPQKXWJHXSOEGRXCGHFYUPVQXTACBBYZMRLWAHISATWEXBKEWEZENKVIFMAJSRPKATNQZADLSLVFLWCIQESCGHPJXYFHURYYWAFCMCJSKMLZDZRCZZLJKHYYSMQUHFIFXARKLVEQOG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QKMMWYVIZEBKAPDZGSWBLWKQXTSPVSMSLGPMQZALEBDCWPAEMNYOGKKNUFBXZXGJMMIYCCLRYPZVJBTZSSBALCLFZHQULVWKDJET");
    tmp_msg_0.value.assign("JZAXVIWFDDXDLJACWVQTYZGLQDSLLRCNRQQGPRNIIGVMWAHIDSXTKPJDFCGCEYIWYFFXCSHFQMRZQNRTPUYPJOCBHNHYPUGJEUXESGXCY");
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
    msg.setTimeStamp(0.441587760005688);
    msg.setSource(56586U);
    msg.setSourceEntity(35U);
    msg.setDestination(16844U);
    msg.setDestinationEntity(157U);
    msg.name.assign("MFAHCFTQHLOMTCCNYOJRMVEOGFPJRSSPLWCOTNGCEMLZJZAJPCGUBHGBLDVWERIDAXSZDNFOUPAHWPSXKBAFUKZIXTJMLMNDQJENRMQKVJAKDY");

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
    msg.setTimeStamp(0.2956271681244057);
    msg.setSource(57651U);
    msg.setSourceEntity(11U);
    msg.setDestination(44245U);
    msg.setDestinationEntity(229U);
    msg.name.assign("GTQDZIXJJELNIJZCAKVIGAGGMUCTFYHWQHUFRRMQGNDEVUCMOXOYUKVWKRQIEMAOYZFYCFLGVCAQWHLGDPJHACVNILLWGBVWZOXSMYMOLMAVTKOWRBRIRKTBYVBSRSBIXKAEGWFDXDSXJPQKJPDUSEUOUQBYAFRHKJPHULENMQQJBFCPJTIJTBSXCSYTWMNNINYEENCCQRUKZUZXSFTPPPPALTNSDZOGFXYWTWOFHHABPZNIMHBKDZXLD");

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
    msg.setTimeStamp(0.5647440801257374);
    msg.setSource(40705U);
    msg.setSourceEntity(230U);
    msg.setDestination(53417U);
    msg.setDestinationEntity(6U);
    msg.name.assign("XCGCYPBWZKQ");

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
    msg.setTimeStamp(0.22899979711895369);
    msg.setSource(10966U);
    msg.setSourceEntity(26U);
    msg.setDestination(21876U);
    msg.setDestinationEntity(51U);
    msg.timeout = 3058272920U;

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
    msg.setTimeStamp(0.8640099449149206);
    msg.setSource(12092U);
    msg.setSourceEntity(168U);
    msg.setDestination(18559U);
    msg.setDestinationEntity(201U);
    msg.timeout = 2164310910U;

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
    msg.setTimeStamp(0.14861309108935017);
    msg.setSource(19768U);
    msg.setSourceEntity(15U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(129U);
    msg.timeout = 3080541207U;

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
    msg.setTimeStamp(0.219064767184463);
    msg.setSource(24866U);
    msg.setSourceEntity(74U);
    msg.setDestination(46403U);
    msg.setDestinationEntity(250U);
    msg.sessid = 2433927069U;

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
    msg.setTimeStamp(0.21885002165149392);
    msg.setSource(65175U);
    msg.setSourceEntity(77U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(200U);
    msg.sessid = 2560328042U;

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
    msg.setTimeStamp(0.14287177582679966);
    msg.setSource(57867U);
    msg.setSourceEntity(1U);
    msg.setDestination(49063U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3192850563U;

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
    msg.setTimeStamp(0.1891055918268908);
    msg.setSource(733U);
    msg.setSourceEntity(60U);
    msg.setDestination(2354U);
    msg.setDestinationEntity(130U);
    msg.sessid = 1237348603U;
    msg.messages.assign("NGVEKGZOOOPHNUKLFQNDEJEXKPZMIVRTMISTHNYBISLDQNAFVXXRWMMSWKWJHSAMROROQWCGFYSPYIBWLVAUEYVDIJLEMYIQPRXEWRQVHVYCG");

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
    msg.setTimeStamp(0.34479798210333223);
    msg.setSource(60764U);
    msg.setSourceEntity(140U);
    msg.setDestination(9330U);
    msg.setDestinationEntity(118U);
    msg.sessid = 3260993427U;
    msg.messages.assign("NZQPNRFCBAGQIOPTVHWTDNSYIAVZYYXUBXZBPIEUGBRUOKNFQMGVKCBZNYHZHMBLCIOKIROWFSJTGHOCPVSEGFRAXTKXLMRKTMESPXUKDKUAAXUEOWSUPWEGQDLJSCFCRTAPBAOLSVJZDWNGYTDKADCJKHHMRDNHYSUBYJFATVHVFITEB");

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
    msg.setTimeStamp(0.9349527372100702);
    msg.setSource(58793U);
    msg.setSourceEntity(148U);
    msg.setDestination(64563U);
    msg.setDestinationEntity(164U);
    msg.sessid = 408685089U;
    msg.messages.assign("SRLFDGIKBKAYNRXOGGWNKFRBVWKQFZOJPQEZXSWHMXPCUZIPULDAKWXRQPWPHXVTWTMITIDWDXHZMBNJSPRECEQDFRBUBVTPOSFRGXVHTOLYUIUZHPXWYAAUOQEKCDSHCXYETQCGQLFNZLJKNFGSODBYFEAUZNNEUPSNMITVMXQBMRZOBBCNQCJLYWQYVYDHHKZLRATIRNULVJOEFSZCIGIPJLDMUDVLEKJICGT");

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
    msg.setTimeStamp(0.14548842515733118);
    msg.setSource(33204U);
    msg.setSourceEntity(248U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(253U);
    msg.sessid = 3945497805U;

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
    msg.setTimeStamp(0.38693355652341144);
    msg.setSource(44967U);
    msg.setSourceEntity(143U);
    msg.setDestination(62711U);
    msg.setDestinationEntity(195U);
    msg.sessid = 70201594U;

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
    msg.setTimeStamp(0.36033003952100073);
    msg.setSource(21588U);
    msg.setSourceEntity(61U);
    msg.setDestination(40678U);
    msg.setDestinationEntity(88U);
    msg.sessid = 3885086873U;

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
    msg.setTimeStamp(0.040315322675046006);
    msg.setSource(23238U);
    msg.setSourceEntity(186U);
    msg.setDestination(12893U);
    msg.setDestinationEntity(122U);
    msg.sessid = 3497285399U;
    msg.status = 179U;

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
    msg.setTimeStamp(0.19589239717567086);
    msg.setSource(50725U);
    msg.setSourceEntity(57U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(118U);
    msg.sessid = 2935685641U;
    msg.status = 90U;

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
    msg.setTimeStamp(0.4096581541657207);
    msg.setSource(21559U);
    msg.setSourceEntity(222U);
    msg.setDestination(63807U);
    msg.setDestinationEntity(169U);
    msg.sessid = 850028389U;
    msg.status = 94U;

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
    msg.setTimeStamp(0.4619806211442139);
    msg.setSource(59065U);
    msg.setSourceEntity(222U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(99U);
    msg.name.assign("ZWSFXIJHBAKCMUQZHEKHOWPWRKAHGTOIKFYKJTLFCSERXOQNHGZMNXCBJAPAVMBAHVEZLNNDUMEYFEUUCGDONKXVLPUWXKLCOYWQDZRVBSSYRDURABIJQUAQYFPUKTVMGIPFLNEZTAETQNMIZSGJTBPGJSJDRHRGJWQQTINLIPCMVVFEQCJBJLGWXREODVFYODCRSGLOLNSBTOFDPDCBXHY");

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
    msg.setTimeStamp(0.8013905849322869);
    msg.setSource(41601U);
    msg.setSourceEntity(172U);
    msg.setDestination(18569U);
    msg.setDestinationEntity(217U);
    msg.name.assign("YFYCXKEZDLGPQRAUUVNCLLUXJICGEXHOFCPKOOTHJVXH");

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
    msg.setTimeStamp(0.6360976785438311);
    msg.setSource(20486U);
    msg.setSourceEntity(51U);
    msg.setDestination(58990U);
    msg.setDestinationEntity(172U);
    msg.name.assign("LJIDGKOCLERAKUSUKKZSAHCNAJFOHQRPVBJFGFMPCDYEQGGIJCPFFGJUPBIV");

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
    msg.setTimeStamp(0.33863721249881806);
    msg.setSource(37446U);
    msg.setSourceEntity(177U);
    msg.setDestination(13571U);
    msg.setDestinationEntity(230U);
    msg.name.assign("CQFGMVGMDNAAPNIDZSFEYBKPDHVUTFDUVLOIRDWZQBBKYTTKKIWCGAYTIWDQQICKRFPSOASVGUTNOENJCMAHEXEMVSBPTVRMIQGYZGFRYZFSNCBKTCJYHEOJYGZEPUDLXGTLQTPQNRXVJBAPXHOMLSCNLLMXAWGFKQAJOISWJXCULKZCWDBFXISPQJOUTXZH");

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
    msg.setTimeStamp(0.3825699966610616);
    msg.setSource(61102U);
    msg.setSourceEntity(27U);
    msg.setDestination(47414U);
    msg.setDestinationEntity(76U);
    msg.name.assign("YCXGURKFAEIRKGFAPAGHBYRIJLSKMJUQDAFPAEMTPQOJNMNOXZWBWGGVIBHOQDYOWGQFJWCSKRAHLYMDHVTPLZGUUNPCEFSCVFAKRHALTNEYSNNZSDOBMTCLLCXJZMDAIZNIDWBOIYZCMMGKCVFJPV");

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
    msg.setTimeStamp(0.2730685145370889);
    msg.setSource(5108U);
    msg.setSourceEntity(175U);
    msg.setDestination(10739U);
    msg.setDestinationEntity(180U);
    msg.name.assign("QGEUZBFMNNSWEBNSOTHYQYZPYMLUHBCJOOHTQYWJDAJRBXUVPKTWLQEFVADAUMH");

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
    msg.setTimeStamp(0.934526176960307);
    msg.setSource(41190U);
    msg.setSourceEntity(173U);
    msg.setDestination(35128U);
    msg.setDestinationEntity(186U);
    msg.type = 76U;
    msg.error.assign("SMKJPBCMKPQVYLZBHFESYUYRJNIJSQTSECFWDWZXRZYJAKXGUYLQDYTRUOGILLTRJQTERWUPVBJQYWHARCGKNFFBNYPIAMCALLZSPKKCOOMSM");

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
    msg.setTimeStamp(0.06756922360317508);
    msg.setSource(35410U);
    msg.setSourceEntity(234U);
    msg.setDestination(56707U);
    msg.setDestinationEntity(218U);
    msg.type = 139U;
    msg.error.assign("YQIIZMZSGWIHQJDYKLSGKZYAJXOEWUHKJNIPXKUQEGFZVEBUNZXHUJQDFDPKSWSARLBFVWSWBQZXCEXZDXPVCLSB");

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
    msg.setTimeStamp(0.8877128008937082);
    msg.setSource(11604U);
    msg.setSourceEntity(52U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(179U);
    msg.type = 106U;
    msg.error.assign("IJGYVLTLFZXDKYTYCWKMFZNRZSYQGSQHLXQEEXYNIBYXCDWAZLHERSMGOACCEEOBSHMHSOQKAEAJNBTUVGUZBJIVWUWPRQFPLCTZGURNXJHJWZBKXK");

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
    msg.setTimeStamp(0.9199563669026419);
    msg.setSource(10713U);
    msg.setSourceEntity(207U);
    msg.setDestination(4858U);
    msg.setDestinationEntity(100U);
    msg.seq = 65022U;
    msg.sys_dst.assign("CDLLCAGLRLASHRMKOCUYTTSZWHFTFOAYEUBILZKFJNIIQPHAQBTHEUZMCNDBSOYVISNHINTPEFSIOCOZHDWWLKCNTFUEPSZOLBSBAFZXNXBIXMWWRDZJJ");
    msg.flags = 109U;
    const signed char tmp_msg_0[] = {118, -53, 4, 75, -28, -88, -107, -20, -83, 10, -25, -121, -4, 69, -27, 70, 64, -55, -65, 23, -58, -48, 24, -79, 22, -83, -63, -115, 56, 25, 95, 103, 48, 25, 44, -119, -16, 9, -74, 116, 125, -58, -92, -49, -31, 122, -23, 51, 59, 18, 23, -76, 7, -72, -14, -13, -88, 73, -128, -125, -76, 117, -45, -77, 77, 71, -53, -48, -100, 120, 75, -53, 82, 115, 42, -53, 123, 47, -80, 11, -24, -72, -27, 72, 101, -61, 110, -67, 112, 98, 106, -8, -9, 26, -39, 30, 41, 119, -118, -21, -96, -47, 123, -123, -124, 95, 36, 8, -12, 65, 73, 93, 26, -27, -93, 37, -27, 75, 22, -62, -62, 122, 35, 39, -64, 40, -92, -114, -43, -112, 81, -14, -103, -61, -90, -52, -94, -103, 39, 117, 19, -126, 60, -103, -111, -59, 30, 82, -9, -88, 12, 4, -27, -8, -109, 49, 39, -121, 115, 19, -85, 92, 89, -22, -101, -45, -109, -19, 20, -97, 2, 23, -74, -115, 37, 15, -50, -96, 79, 123, 88, 67, 30, -92, 75, -47, 55, 48, 113, -62, -90, -83, 7, 10, -78, 76, 114};
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
    msg.setTimeStamp(0.9969177953206005);
    msg.setSource(12149U);
    msg.setSourceEntity(23U);
    msg.setDestination(10587U);
    msg.setDestinationEntity(82U);
    msg.seq = 45562U;
    msg.sys_dst.assign("HHTZRRRQAYXYNVKHJXGQFRFGWPSEDLIGPTYUVNQCSBDCAGFWVCARZPKJUOVZKXZIRMJIFABZBNAMGDSWZCTOTOYJHDBSXHTEFTQLIGFFZGQPWJOIHXEUAKRLSU");
    msg.flags = 250U;
    const signed char tmp_msg_0[] = {-67, 61, -41, -49, -66, -55, 60, -20, 55, -118, 30, 58, -54, -117, 106, 80, -40, -70, 37, 18, 63, 33, 18, 22, 32, -114, 28, 118, -40, 16, -84, -73, -27, 106, -110, 94, -90, 60, -59, -108, 52, 86};
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
    msg.setTimeStamp(0.8161416352878894);
    msg.setSource(17762U);
    msg.setSourceEntity(91U);
    msg.setDestination(44904U);
    msg.setDestinationEntity(14U);
    msg.seq = 5267U;
    msg.sys_dst.assign("COIDJQSZMOPYRWCVCJKZXIEXEFFEGFYIAYWSSABYRNRPBOJDTXTIIBWFPEDBUDCNZVUCFNDQMCQGLPDNXDCJUYTVSFPTHTBOQHXUAEZVARLIYNTIUBXHCTZHKKWMRGKVTMGPVNL");
    msg.flags = 84U;
    const signed char tmp_msg_0[] = {34, 71, -123, -128, -83, 74, -53, -107, -104, -127, 38, -117, -48, 41, -39, 21, 10, -79, 96, 95, -81, 47, 125, -66, 107, 74, 67, -27, -27, 52, 59, -119, 31, 47, 40, 92, -103, -12, 98, 42, -48, -31, 83};
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
    msg.setTimeStamp(0.0134486647752593);
    msg.setSource(44070U);
    msg.setSourceEntity(30U);
    msg.setDestination(54645U);
    msg.setDestinationEntity(254U);
    msg.sys_src.assign("HVEJIGYITXEWLRZITPOAOGLLTCFBJQZTSBHMCWACIQYKGYSJGDKJNPEESFKRIDFVAFINVXPXMODXXHPUGLPZRUWGMQOWBXVZTYIWEFLYXVQQGHKRCEKRPMDSJJAULEWLMUWFVOLCUNSBIMKZUDBZYDXHAMSANFZKASOWEOYSNYABEOVVGLWIORRPNNUPPCQCBFJZSF");
    msg.sys_dst.assign("GTDLPLLBYUOZTUVCHFVQMTEIUPCCFVPYJROEZPBJTKCRQPEQATJSOSEKAZSXRDMGDUWQHGZMTKQXFKLSAZMKKBWLBLFWWKYERNDGXBMOCGWCIYHNSEFQFCYJIJTENJHQDTOIZYCNXXAQSLUBXLMNXWWPGYOUZUGXYNIMDVRFTPDHKHOXBEILAJIFNRNWDHAYVMWSSKQZMSNRGXVVEF");
    msg.flags = 185U;
    const signed char tmp_msg_0[] = {-63, 55, 104, 45, 40, -101, 65, -54, 32, 97, -24, 8, -35, 84, -32, 102, -66, 28, 50, 68, 0, -87, 64, 42, 14, -120, -72, 61, 114, 47, 24, 95, -61, 7, -53, 63, 31, -109, 102, -96, -115, 98, -76, -71, -59, -61, -22, -118, -10, -53, -117, 102, 2, -91, -51, 49, 105, 76, -119, 56, 19, -5, 71, -68, -19, 112, 53, -50, -23, 111, -58, -118, -12, 117, 100, 28, 101, 72, -128, 55, 1, -61, 68, -71, 122, 9, 19, 106, 123, -83, -109, -22, 1, 48, -25, 47, 7, -127, -120, -51, -80};
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
    msg.setTimeStamp(0.25066687348354777);
    msg.setSource(36056U);
    msg.setSourceEntity(53U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(92U);
    msg.sys_src.assign("ZYLEKYFTFQUOSGJIIVJUPDAHVEEVUXXTLBVLUOGRAGQMAYZFDWITCZIUTZLOFKAIBFOUMJRUVHQKCRMOLFHOGWUPQXQAKTYIEWGVFVTCBYYNBJKRHTSPMZRWDHNRSPKBSJGBLWNKQWWRNBYNHAGSOWUQGFXIXEPXD");
    msg.sys_dst.assign("NJKHMXSQUYYRJOYSTJAMZGIJINQSDEXSCDKJFDHRGBCYTPNXAYLWCUAPWZGGXVWZFRGYPKMWMGOWHNHHXJAWBEZZDMEDCBUAVLOAFQRRRGZAZFXVTXGZUFTIDCBAPYSFTTVGOQAZSUVIMNCOVYSKERHLVTGJOXUBKQLCEQPHCKIFTBPKHMD");
    msg.flags = 220U;
    const signed char tmp_msg_0[] = {9, -69, -2, -78, 34, 70, 35, -95, 5, 39, -29, -46, -4, 110, 46, 108, -4, 100, 19, 104, 30, 63, -9, -78, -23, -104, -61, 8, -73, 97, -88, -22, 64, -20, -6, -116, -78, -38, -119, 57, -48, 123, 84, -46, 46, 51, -27, -49, -76, 105, -93, -46, 100, 44, -10, -42, 97, 82, -119, -119, -73, -54, -46, -85, 121, 119, 19, 90, -103, 71, -57, 108, 3, -99, 38, 49, 29, 42, -11, 0, 16, 69, 110, -82, 101, -36, -84, 123, -56, 83, -40, -1, 122, -109, 25, -117, 44, -65, -94, 75, 107, 39, -78, 36, -27, -62, -119, -20, -96, -6, 5, 37, -47, -17, 95, 78, -11, -7, -101, -105, -115, -123, -46, 13, -125, 50, -61, -64, 46, 7, -25, -67, 126, -106, -69, 98, 21, -55, 115, -66, 58, -92, -116, -118, -62, -111, 17, 126, -100, 117, -9, -69, 116, 95, 112, 109, 59, 121, -81, 107, 70, -86, 15, 12, 53, 11, 101, -63, 123, -106, 17, 116, -57, -72, 65, -90, -107, -122, 8, 56, 71, -97};
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
    msg.setTimeStamp(0.8708175681947109);
    msg.setSource(16002U);
    msg.setSourceEntity(124U);
    msg.setDestination(26891U);
    msg.setDestinationEntity(134U);
    msg.sys_src.assign("XREGEKIASVACXUNYNSIWPPBQJKTYKKQFVRHWNDZIS");
    msg.sys_dst.assign("ZZXWKMWSUEYRQDSIXBLFJTLQFOTHWRQYNVAHWESVMFUYTNBXUPDNJAABDMCPYVNEORFMDCPQXXEGYXBWVSCUIZPNAAPGWHGNTUUMLGORIKDRGHTTIAEQPZRBJVROBYYYWSCDLIMJOKZLIFELIMPEKDUGIMI");
    msg.flags = 102U;
    const signed char tmp_msg_0[] = {13, 23, 22, 23, 99, -88, -50, -79, 85, 55, 51, -113, 77, 13, -90, 35, 18, 80, 95, -41, 93, 109, -23, -68, -85, -81, 86, 38, -55, -112, 126, -116, 103, -1, -47, -23, -67, 22, 21, 68, 62, 5, 40, 50, -26, 96, -75, 72, -122, 27, -67, 28, 60, 63, -124, 42, -7, -20, -43, 119, -59, 123, 117, -11, -97, 119, 29, -24, -92, -116, -103, -82, 124, -127, 39, 125, -51, 9, 65, 118, -77, 125, -93, 86, -11, 91, -40, -67, -115, -83, -57, -57, -88, 12, -48, 34, -117, 79, 91, -52, -68};
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
    msg.setTimeStamp(0.6476050576339322);
    msg.setSource(34814U);
    msg.setSourceEntity(247U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(155U);
    msg.seq = 25268U;
    msg.value = 252U;
    msg.error.assign("MQOJALIQTXSMXONWZUFPTNZHMCAVMKVQCCUWRPWKCYGWXHVGFREDFKHUGHEPSDDMOEAGXWEUSFJRVRDROIWF");

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
    msg.setTimeStamp(0.19219718785410367);
    msg.setSource(46393U);
    msg.setSourceEntity(126U);
    msg.setDestination(46222U);
    msg.setDestinationEntity(213U);
    msg.seq = 34483U;
    msg.value = 174U;
    msg.error.assign("EMNTQGRFUATHEJPQNNMEBGDKSXRUKVUADNCWEJOBKYHQFIIXQYECZMNAFUFTWZSJGCG");

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
    msg.setTimeStamp(0.6911980339319412);
    msg.setSource(2879U);
    msg.setSourceEntity(78U);
    msg.setDestination(46530U);
    msg.setDestinationEntity(15U);
    msg.seq = 49609U;
    msg.value = 217U;
    msg.error.assign("NXROPSAGWVLONTDDLECQILXQDKDTVNEZYOIZXHQRHKFLTDZFKOOYMDDSVVVZGXYBHCFEJZEUAPTDHUTVKFRFYKGILSVHBCCCWJBTBEWMNMZSVNARIHQBFUNEIJLWKFAAZJHXFTNXJMXS");

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
    msg.setTimeStamp(0.04355326227153278);
    msg.setSource(46549U);
    msg.setSourceEntity(173U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(189U);
    msg.seq = 29986U;
    msg.sys.assign("GWALDSXZTLHQVOIXOKGTRZTJBSPPRUOMXRDMBQKHLBNNTWYNULCEGODCIQLBHRGEAJMMXZECKCFSPYRDADZMEOKMQBBKSVGSVFGJHRIZPEFLASLXBKMUULYCHWURDKQSZENWEFHVLCFTEFIRZWUPPGNBCVWTFUYNJ");
    msg.value = 0.3535778945777007;

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
    msg.setTimeStamp(0.9347797240504292);
    msg.setSource(55551U);
    msg.setSourceEntity(232U);
    msg.setDestination(53485U);
    msg.setDestinationEntity(82U);
    msg.seq = 56787U;
    msg.sys.assign("WIFJFMEXPKHDMXAVAVYLJZWUYSFOPYPJVPOVKWJJEZSRI");
    msg.value = 0.44357500413662954;

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
    msg.setTimeStamp(0.3503530650237815);
    msg.setSource(62925U);
    msg.setSourceEntity(205U);
    msg.setDestination(54241U);
    msg.setDestinationEntity(62U);
    msg.seq = 27272U;
    msg.sys.assign("BGYPFQYIUCWHHXXVCUXFDWCUWFGWADYKTHHKWRMPOKZGQXUGCQFVBKZJKBNI");
    msg.value = 0.6013326489406632;

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
    msg.setTimeStamp(0.6335302721817043);
    msg.setSource(52484U);
    msg.setSourceEntity(194U);
    msg.setDestination(9161U);
    msg.setDestinationEntity(76U);
    msg.seq = 24809U;
    msg.sys_dst.assign("DIHPAOURIRPFWKYKVIGHRAYNWWWYXMAFSMQLCIHUNZJXKBWAOJJKGMSHCSKQPVTVYLMRXZFLUUPCZNOXPFDVVBTLWNQSALFTDUEGIVNHJODXPEXGLUCGLSZKDOKXQWMEYOZZZYYBYFMNTJ");
    msg.timeout = 0.70062952055019;

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
    msg.setTimeStamp(0.8450171588987617);
    msg.setSource(26004U);
    msg.setSourceEntity(212U);
    msg.setDestination(47602U);
    msg.setDestinationEntity(187U);
    msg.seq = 53001U;
    msg.sys_dst.assign("CEGKUFPNFBYSQXDLYJOAFWMYHHCRQPDRTXBGZGVJMJTSUTSRVQZKFZVLORKPPDTPTKOXWDKGSJWCZYMIXSGNUNATTZOXWJYLVFAAZFBZKOREBRRCAQSEAFWCQEZLIZHVIVIQOKRWEXHGIRAEBEXOALULDDLYMMZUOESJQDKYIGIHVXCVBURAQUNMJFLWLBNCVJPNHNNWTOF");
    msg.timeout = 0.41120758980021177;

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
    msg.setTimeStamp(0.2890057706784088);
    msg.setSource(50313U);
    msg.setSourceEntity(123U);
    msg.setDestination(14856U);
    msg.setDestinationEntity(69U);
    msg.seq = 35686U;
    msg.sys_dst.assign("NIAXJURDEKCQGVAPTICSMJIJULM");
    msg.timeout = 0.3265102132983686;

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
    msg.setTimeStamp(0.40195710553587005);
    msg.setSource(30309U);
    msg.setSourceEntity(149U);
    msg.setDestination(35093U);
    msg.setDestinationEntity(131U);
    msg.action = 253U;
    msg.longain = 0.5821065625238115;
    msg.latgain = 0.6634063195330553;
    msg.bondthick = 2882098695U;
    msg.leadgain = 0.23111764501260224;
    msg.deconflgain = 0.5265686680080723;

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
    msg.setTimeStamp(0.8242668914768326);
    msg.setSource(15438U);
    msg.setSourceEntity(139U);
    msg.setDestination(54274U);
    msg.setDestinationEntity(186U);
    msg.action = 93U;
    msg.longain = 0.1381830105919556;
    msg.latgain = 0.8554729795204066;
    msg.bondthick = 126650358U;
    msg.leadgain = 0.2993342554522279;
    msg.deconflgain = 0.2170470805823137;

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
    msg.setTimeStamp(0.5609541496147744);
    msg.setSource(57025U);
    msg.setSourceEntity(175U);
    msg.setDestination(46203U);
    msg.setDestinationEntity(109U);
    msg.action = 235U;
    msg.longain = 0.011687698363565202;
    msg.latgain = 0.2500037745047651;
    msg.bondthick = 1987532980U;
    msg.leadgain = 0.5496935546761964;
    msg.deconflgain = 0.5838620139254618;

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
    msg.setTimeStamp(0.5471409128238496);
    msg.setSource(22022U);
    msg.setSourceEntity(147U);
    msg.setDestination(48626U);
    msg.setDestinationEntity(182U);
    msg.err_mean = 0.022181089288846212;
    msg.dist_min_abs = 0.3966841095952517;
    msg.dist_min_mean = 0.6589337032694718;

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
    msg.setTimeStamp(0.2735130775503104);
    msg.setSource(45639U);
    msg.setSourceEntity(116U);
    msg.setDestination(22099U);
    msg.setDestinationEntity(34U);
    msg.err_mean = 0.30216988621586593;
    msg.dist_min_abs = 0.39937364195408365;
    msg.dist_min_mean = 0.7516402603336043;

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
    msg.setTimeStamp(0.7489778164599331);
    msg.setSource(33055U);
    msg.setSourceEntity(166U);
    msg.setDestination(12535U);
    msg.setDestinationEntity(129U);
    msg.err_mean = 0.7880358895464358;
    msg.dist_min_abs = 0.5287842511875316;
    msg.dist_min_mean = 0.895753262447522;

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
    msg.setTimeStamp(0.9055230868866678);
    msg.setSource(6079U);
    msg.setSourceEntity(176U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(246U);
    msg.action = 177U;
    msg.lon_gain = 0.49780709717333604;
    msg.lat_gain = 0.558722278468451;
    msg.bond_thick = 0.37166339947799854;
    msg.lead_gain = 0.1138595667813983;
    msg.deconfl_gain = 0.20579758816099836;
    msg.accel_switch_gain = 0.3571258482951495;
    msg.safe_dist = 0.8758515342650346;
    msg.deconflict_offset = 0.654718547394348;
    msg.accel_safe_margin = 0.34214206007422554;
    msg.accel_lim_x = 0.16581468303970148;

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
    msg.setTimeStamp(0.8203665924296147);
    msg.setSource(61115U);
    msg.setSourceEntity(74U);
    msg.setDestination(57874U);
    msg.setDestinationEntity(47U);
    msg.action = 227U;
    msg.lon_gain = 0.8088585551935211;
    msg.lat_gain = 0.8054547182369942;
    msg.bond_thick = 0.03750457295881704;
    msg.lead_gain = 0.971345920420889;
    msg.deconfl_gain = 0.549575990788586;
    msg.accel_switch_gain = 0.4394491649279897;
    msg.safe_dist = 0.8369129493903933;
    msg.deconflict_offset = 0.34880210629925235;
    msg.accel_safe_margin = 0.6693543602340472;
    msg.accel_lim_x = 0.08842430592137152;

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
    msg.setTimeStamp(0.8167635185233916);
    msg.setSource(18564U);
    msg.setSourceEntity(102U);
    msg.setDestination(41386U);
    msg.setDestinationEntity(236U);
    msg.action = 63U;
    msg.lon_gain = 0.482971659148005;
    msg.lat_gain = 0.4933591432787121;
    msg.bond_thick = 0.7214985722530505;
    msg.lead_gain = 0.12042203609272428;
    msg.deconfl_gain = 0.607998860453477;
    msg.accel_switch_gain = 0.1727189671806847;
    msg.safe_dist = 0.1704894846745839;
    msg.deconflict_offset = 0.352801237999677;
    msg.accel_safe_margin = 0.29621619836809243;
    msg.accel_lim_x = 0.8916805464413885;

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
    msg.setTimeStamp(0.23085367108209698);
    msg.setSource(34358U);
    msg.setSourceEntity(80U);
    msg.setDestination(6933U);
    msg.setDestinationEntity(13U);
    msg.type = 96U;
    msg.op = 79U;
    msg.err_mean = 0.4277187712944418;
    msg.dist_min_abs = 0.5884028065866025;
    msg.dist_min_mean = 0.13991122226578434;
    msg.roll_rate_mean = 0.5697306313849867;
    msg.time = 0.8882709273806333;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 25U;
    tmp_msg_0.lon_gain = 0.9198613905680392;
    tmp_msg_0.lat_gain = 0.7769233970587345;
    tmp_msg_0.bond_thick = 0.4998665676779819;
    tmp_msg_0.lead_gain = 0.1849253271281558;
    tmp_msg_0.deconfl_gain = 0.30819321941850797;
    tmp_msg_0.accel_switch_gain = 0.588830594920669;
    tmp_msg_0.safe_dist = 0.42828253565748675;
    tmp_msg_0.deconflict_offset = 0.5386199155412047;
    tmp_msg_0.accel_safe_margin = 0.7901971894248504;
    tmp_msg_0.accel_lim_x = 0.9025587208429191;
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
    msg.setTimeStamp(0.7074432896153596);
    msg.setSource(7603U);
    msg.setSourceEntity(237U);
    msg.setDestination(50904U);
    msg.setDestinationEntity(219U);
    msg.type = 31U;
    msg.op = 122U;
    msg.err_mean = 0.22778002254362173;
    msg.dist_min_abs = 0.9684796435616049;
    msg.dist_min_mean = 0.0847047393395518;
    msg.roll_rate_mean = 0.30162164151372395;
    msg.time = 0.9736912014084431;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 76U;
    tmp_msg_0.lon_gain = 0.8930384146777463;
    tmp_msg_0.lat_gain = 0.8042211160153319;
    tmp_msg_0.bond_thick = 0.5686109705282956;
    tmp_msg_0.lead_gain = 0.05414209109494461;
    tmp_msg_0.deconfl_gain = 0.8480771845652119;
    tmp_msg_0.accel_switch_gain = 0.5093892131224934;
    tmp_msg_0.safe_dist = 0.5392229493758205;
    tmp_msg_0.deconflict_offset = 0.008914207146590303;
    tmp_msg_0.accel_safe_margin = 0.2826638466760927;
    tmp_msg_0.accel_lim_x = 0.7820865193286464;
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
    msg.setTimeStamp(0.5204327827380167);
    msg.setSource(43948U);
    msg.setSourceEntity(232U);
    msg.setDestination(43611U);
    msg.setDestinationEntity(168U);
    msg.type = 213U;
    msg.op = 172U;
    msg.err_mean = 0.4301875280798966;
    msg.dist_min_abs = 0.46544307213926617;
    msg.dist_min_mean = 0.5892785727770908;
    msg.roll_rate_mean = 0.6418355171163487;
    msg.time = 0.37614374523264105;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 35U;
    tmp_msg_0.lon_gain = 0.8015550639889;
    tmp_msg_0.lat_gain = 0.8922777683513942;
    tmp_msg_0.bond_thick = 0.7209800276040339;
    tmp_msg_0.lead_gain = 0.2553275227198448;
    tmp_msg_0.deconfl_gain = 0.5527976580002515;
    tmp_msg_0.accel_switch_gain = 0.4111518916985326;
    tmp_msg_0.safe_dist = 0.895782852816838;
    tmp_msg_0.deconflict_offset = 0.21528363212786494;
    tmp_msg_0.accel_safe_margin = 0.9142495069040903;
    tmp_msg_0.accel_lim_x = 0.8528828054118144;
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
    msg.setTimeStamp(0.7006304331348499);
    msg.setSource(34770U);
    msg.setSourceEntity(199U);
    msg.setDestination(53183U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.28846320971874595;
    msg.lon = 0.9623663889043392;
    msg.eta = 1529260583U;
    msg.duration = 24774U;

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
    msg.setTimeStamp(0.32117946482552817);
    msg.setSource(56098U);
    msg.setSourceEntity(18U);
    msg.setDestination(57469U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.7325350124629892;
    msg.lon = 0.45374545545138345;
    msg.eta = 2555610260U;
    msg.duration = 57736U;

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
    msg.setTimeStamp(0.5008346991103925);
    msg.setSource(53525U);
    msg.setSourceEntity(5U);
    msg.setDestination(32608U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.16789880276793012;
    msg.lon = 0.8643429101375223;
    msg.eta = 4108828976U;
    msg.duration = 30049U;

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
    msg.setTimeStamp(0.839015550744088);
    msg.setSource(10774U);
    msg.setSourceEntity(217U);
    msg.setDestination(7756U);
    msg.setDestinationEntity(175U);
    msg.plan_id = 10596U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7204934808288419;
    tmp_msg_0.lon = 0.9133013919314743;
    tmp_msg_0.eta = 3639240386U;
    tmp_msg_0.duration = 22573U;
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
    msg.setTimeStamp(0.1882380346198902);
    msg.setSource(23042U);
    msg.setSourceEntity(54U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 33197U;

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
    msg.setTimeStamp(0.8840391894600611);
    msg.setSource(47014U);
    msg.setSourceEntity(46U);
    msg.setDestination(63889U);
    msg.setDestinationEntity(13U);
    msg.plan_id = 51995U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9896029405116996;
    tmp_msg_0.lon = 0.8999887678028995;
    tmp_msg_0.eta = 769430558U;
    tmp_msg_0.duration = 10976U;
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
    msg.setTimeStamp(0.8105606403335429);
    msg.setSource(23476U);
    msg.setSourceEntity(84U);
    msg.setDestination(32893U);
    msg.setDestinationEntity(49U);
    msg.type = 40U;
    msg.command = 120U;
    msg.settings.assign("LIYYPECPEJAJVAAZKWKHMBDJCHEGPZBBTDULNQDVYIWMLAGACITISEFNDUWATGMWGAGIRMXQZNFCB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62598U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FQHUVSCMVRDNUNMBYFKGQBNITLPCKOFBADTOSRHVKZSFJOBSRVKNZQXKBPPVGPICATIWQESXALHCFTOBYRVLPUNFCUNRYWWIQGDLLIJEHXSXYWEWHQXVDGOTBCZKIZXNHERGVJR");

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
    msg.setTimeStamp(0.008784641625821266);
    msg.setSource(19570U);
    msg.setSourceEntity(193U);
    msg.setDestination(899U);
    msg.setDestinationEntity(89U);
    msg.type = 207U;
    msg.command = 189U;
    msg.settings.assign("OUNSJYEJQTJDRSYOLPRVQSMIDVQWQUBKXTCV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 14778U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0024486809985559965;
    tmp_tmp_msg_0_0.lon = 0.2917736278651788;
    tmp_tmp_msg_0_0.eta = 4138266068U;
    tmp_tmp_msg_0_0.duration = 45717U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HHSUBSAWPRJOCCYFCGFQVYDTORIYWMDUBVJFGNJCYFDXGQRLIKOXZLTZSGSXAZNZSFCMLMUPLNIIUPUREAUPUYNTJXERWWRKKWVWODIWULQNMNQVMHDHCZGAYCPPYHTTBQYZOJJELPTWMOSCTXWXIVKBCQONZGBHHSYFLYOLQRQBQIJEZ");

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
    msg.setTimeStamp(0.4253590648418769);
    msg.setSource(7041U);
    msg.setSourceEntity(130U);
    msg.setDestination(54542U);
    msg.setDestinationEntity(24U);
    msg.type = 121U;
    msg.command = 91U;
    msg.settings.assign("PIJERDODLYCWAMKEQKVVBMJBCQXKDNHBBSHGWACZRMZWVQPSBPEHIWKFGETJMHNU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 39074U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TNZAGRXMOOLQFEFPWDXORZFCFGYQL");

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
    msg.setTimeStamp(0.9714399355351512);
    msg.setSource(44463U);
    msg.setSourceEntity(163U);
    msg.setDestination(43239U);
    msg.setDestinationEntity(121U);
    msg.state = 98U;
    msg.plan_id = 65273U;
    msg.wpt_id = 200U;
    msg.settings_chk = 25567U;

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
    msg.setTimeStamp(0.2877633773609779);
    msg.setSource(44704U);
    msg.setSourceEntity(125U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(68U);
    msg.state = 250U;
    msg.plan_id = 43913U;
    msg.wpt_id = 31U;
    msg.settings_chk = 34519U;

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
    msg.setTimeStamp(0.6425625517713389);
    msg.setSource(42106U);
    msg.setSourceEntity(18U);
    msg.setDestination(40911U);
    msg.setDestinationEntity(246U);
    msg.state = 245U;
    msg.plan_id = 6586U;
    msg.wpt_id = 3U;
    msg.settings_chk = 30658U;

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
    msg.setTimeStamp(0.9532635884851021);
    msg.setSource(43261U);
    msg.setSourceEntity(83U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(199U);
    msg.uid = 144U;
    msg.frag_number = 252U;
    msg.num_frags = 68U;
    const signed char tmp_msg_0[] = {124, -34, 32, -121, -81, 100, 103, 24, -90, 104, -100, 69, 28, -104, -71, 33, 60, 97, 55, 61, 119, 2, 82, 9, 32, -118, 7, -48, -116, -106, -92, 80, 111, 10, 6, -38, 77, -77, 13, 33, -123, -30, 13, -124, 104, -7, 28, 22, -101, 64, 22, 68, -116, 67, 11, 118, 27, 124, -11, -84, -25, -33, -78, -69, 40, 2, -93, -83, -27, 90, -111, -100, -45, 1, 13, 109, 72, 11, 91, -109, -71, 38, 45, 9, 114, -111, -103, -96, -30, 118, 24, -23, -33, -116, -1, -112, 33, -53, 122, -73, 88, -99, -90, -21, -119, -68, 20, 22, 43, 60, -10, -95, 50, 8, -24, -78, 92, -38, -34, 122, -71, 74, -33, 24, -15, -20, -127, -51, -37, 89, 29, -85, -118, 13, 65, 86, -25, -125, -110, -30, 40, 63, 69, 3, 41, -103};
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
    msg.setTimeStamp(0.9712890244962492);
    msg.setSource(56879U);
    msg.setSourceEntity(20U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(187U);
    msg.uid = 235U;
    msg.frag_number = 7U;
    msg.num_frags = 60U;
    const signed char tmp_msg_0[] = {-76, -94, -94, -32, 33, 42, 89, 99, 30, 86, 115, -19, 51, -70, 23, 5, 49, -103, -12, -72, 38, -59, 6, 28, -110, -73, 102, -99, -1, -102, 24, 10, -43, -81, -48, -79, 44, 3, 34, -52, -5, -79, 36, -115, 115, -62, 63, 71, -64, -66, -10, -94, 118, 51, -93, -127, 1, -103, -78, 1, -7, 17, -50, 6, -99, 116, 122, 88, 124, -22, 19, 117, 14, -66, -2, 101, -116, 24, -11, 6, -31, -40, -61, -41, 6, -110, 1, -3, 58, 114, 47, 78, -8, -64, -104, 59, -92, -61, -40, 35, -100, -3, 109, 43, 37, 81, 59, -79, 53, -96, -37, -18, 115, 47, -121, -7, 27, 56, -44, -12, -100, 7, -69, -80, -19, -32, 41, -65, 117, -28, -64, 59, -80, 95, 98, -50, 118, -2, -51, 66, 60, 100, -106, -50, 75, -105, -50, 55, -110, -43, -118, -30, 58, -56, 5, -44, -99, -11, 31, -48, -65, -110, 71, 10, -17, -42, -24, 67, 10, 91, -111, 72, 44, -76, 32, -94, 0, -120, -98, -67, -24, -100, -60, -74};
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
    msg.setTimeStamp(0.4358527216720227);
    msg.setSource(8819U);
    msg.setSourceEntity(8U);
    msg.setDestination(28706U);
    msg.setDestinationEntity(145U);
    msg.uid = 5U;
    msg.frag_number = 94U;
    msg.num_frags = 245U;
    const signed char tmp_msg_0[] = {-80, 51, -81, -106, 0, -116, 34, 37, -54, 12, 108, 64, -16, 126, 53, 22, 60, -88, 70, 56, 102, 61, 83, -121, 87, 91, 71, 121, 94, -76, 2, -114, 104, 90, 67, 122, -7, -43, -23, -38, 23, -9, -48, -39, 94, 44, 27, 27, -45, 94, 8, -76, -18, 18, -79, -40, -114, -99, -5, 60, -84, 116, 2, -53, -102, -79, 114, -51, -15, 26, -119, 34, -15, -63, 125, -68, 28, -113, 35, -42, -88, 65, -37, -35, 60, -17, -14, -82, -73, 57, -82, -63, 39, 19, 27, 16, -75, -126, -40, 77, -2, 87, -79, 95, -59, -113, -115, 38, -20, -26, 46, -39, 17, 66, 51, -58, -108, -84, -125, -16, -90, -97, 33, -79, -38, 94, -51, 76, -59, 106, 29, -43, -62, 17, -119, 104, 9, -96, 2, -52, -23, 52, -107, 95, -128, -21, -78, 116, -30, 34, -32, -51, -28, 27, -21, 106, -72, -117, -49, 60, 71, -59, 25, 29, 109, -14, 49, -110, 39, 103, -63, -119, 64, -108, 15, -83, -105, -8, 10, -36, -83, 82, 100, 53, -53, 75, -52, 85, -123, 79, 30, 96, 61, 45, 74, 86, 68, 39, 4, 88, 26, 40, 35, -35, 40, 71, -35, 78, -112, 16, -23, -96, 27, 101, 28, 32, 55, 11, -106, 31, 105, 43, 112, -110, 93, 50, -49, 35, -41, 97};
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
    msg.setTimeStamp(0.25633628131735886);
    msg.setSource(2546U);
    msg.setSourceEntity(249U);
    msg.setDestination(10160U);
    msg.setDestinationEntity(184U);
    msg.uid = 232U;
    msg.op = 171U;
    msg.frag_ids.assign("CTDKYNUUOYUOWRYVEK");

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
    msg.setTimeStamp(0.5895931168539085);
    msg.setSource(9589U);
    msg.setSourceEntity(244U);
    msg.setDestination(55906U);
    msg.setDestinationEntity(254U);
    msg.uid = 5U;
    msg.op = 156U;
    msg.frag_ids.assign("CYNHPMJGSEGECIXEBMTLXEBXWQZBJTBSMEGCHPOUOMPLDWTWXYCRXWDBATMHTMKXSULVMNQWQPNFGJHIRAWOPQRRFYRKJJMUANFJDITZKYLPHSNOLVYQOCNOVOTWNYHCZSVWDCJICOQFVKROFZM");

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
    msg.setTimeStamp(0.9001344697314284);
    msg.setSource(63740U);
    msg.setSourceEntity(146U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(149U);
    msg.uid = 63U;
    msg.op = 83U;
    msg.frag_ids.assign("PQPFBJRUGGYRXIKVHKPWESPDHHOPYCKEXVISXOIAIVTGZHWRNQCNJPAFNLQSABYPLSUFXJTEIIFREYWWRGDQUKUVOMQGMXVOBAIRDQZIJYITBUTYGBJXZJSWWKPSCHDJGVEADRXODCVFTXNUJMLNMLZFBLMOYJUIQZUBQZBPHDWMGMTAZEUHALMUSSLNEALBTNCPQZBOSYCQEKKFEHDOZVGXYTLRRGJLDCMONXNTAKFTHAFF");

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
    msg.setTimeStamp(0.5929218905077439);
    msg.setSource(17676U);
    msg.setSourceEntity(69U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(37U);
    msg.content_type.assign("AIUGLGPURMFCRPCIEBGXCKHLSQSLEPUQHMCUQEPJCRWPNWJRUAKYYQNAOYCEHQUMGZZVNMTTPYWTKGXAKJYDEFIQJSBGZAZDOPNXKFSMRVCBITVXENWBGYRROH");
    const signed char tmp_msg_0[] = {64, 109, -125, 40, 109, 10, 69, -41, -92, 95, -112, -53, 39, -111, -11, -49, -9, 35, -106, 42, -84, -30, -19, 12, -11, -19, -31, -40, 96, 100, -21, -111, 19, 113, 77, -28, 84, -127, -9, 117, 5, 86, 22, 53, -17, 44, -62, -93, 92, 103, 38, 119, 28, 52, 96, -40, 29, 20, 38, 102, 125, 68, 74, 61, -94, -15, 126, 126, -95, 97, 54, 102, -125, -99, 16, -82, -43, 16, 66, -24, -22, 0, -97, 26, -47, -77, 26, 103, -113, -31, -124, 22, 68, 28, 118, 37, -118, 18, 105, 100, 37, -42, 126, 107, -53, -62, -106, 31, -48, 71, 19, -97, -17, -84, 5, -37, 28, -86, -35, -91, 75, -92, -50, -125, 126, -5, 63, -59, -111, -83, 25, -96, -108, 29, 58, 66};
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
    msg.setTimeStamp(0.4653333123495291);
    msg.setSource(10154U);
    msg.setSourceEntity(139U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("GTEBEPOXVIFVGEUIHHNYQYTIRCUKSTMZPNNYJEJXOVNYPXCSWLACYJZZHIKMXMZCTBDHGSSIYICKDHMUQLLNSQTMBAPFESAMONJMBNFGGFFOEQLUQUMWZCLLRFDNTRROAHQEDFVKWRBWIYAHWUWQSQLUFFDHDBAE");
    const signed char tmp_msg_0[] = {-96, -121, -110, -92, 76, 23, 114, 72, 118, 4, 66, 46, -17, 27, 41, -38, 20, 107, -50, -73, -50, -78, -11, 92};
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
    msg.setTimeStamp(0.5320887958191223);
    msg.setSource(8836U);
    msg.setSourceEntity(96U);
    msg.setDestination(28453U);
    msg.setDestinationEntity(133U);
    msg.content_type.assign("VMEVHWGYETNSQNPLCQKFMIZQEZFJZYUNMOMMIUVKWGFUSDQYXJEDDURNBFIEYHOEHLRRIWLOMPZPBJNWEFOKGHKASGTCYNQBOALIRGVQZNRXZRGOSCWKUCDWTVQXAVAGQPMTWMBHUBIHSLUPLEDFBJHAXHXMABIZORTAWGSMEPGUP");
    const signed char tmp_msg_0[] = {-51, 32, -118, 62, 72, 14, 82, 76, 51, -27, -26, 12, 91, -15, -94, -51, 69, 54, -46, -68, 70, -72, 117, 62, -105, -122, 1, 50, 4, 64, -67, 9, -107, -15, -33, -66, 30, -111, 125, 105, 112, 31, 46, 5, -8, -112, 32, -89, -77, 6, -24, 91, 99, 30, 4, 109, -15, 21, 46, -33, 40, 94, 126, 49, -30, -21, -71, 35, -120, 82, 110, 67, -102, 120, 29, 33, 40, 21, -10, 86, -16, -37, 29, -57, -95, -22, -30, 63, -95, 68, -76, 77, 89, -60, -64, -115, -128, -81, 113, -83, -36, -117, 121, -79, 101, -45, -69, 29, -34, 94, -116, -19, -77, 32, -109, 88, 57, -112, 6, 117, 126, -38, -70, -10, 45, -68, 124, -123, -113, -68, -123, -89, -34, 81, -7, 87, 9};
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
    msg.setTimeStamp(0.03989793991088886);
    msg.setSource(13471U);
    msg.setSourceEntity(75U);
    msg.setDestination(12886U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.13681914011650165);
    msg.setSource(8394U);
    msg.setSourceEntity(115U);
    msg.setDestination(21002U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.9933813453923608);
    msg.setSource(55343U);
    msg.setSourceEntity(66U);
    msg.setDestination(30013U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.5863763404579712);
    msg.setSource(52431U);
    msg.setSourceEntity(229U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(235U);
    msg.target = 56625U;
    msg.bearing = 0.08066642504118271;
    msg.elevation = 0.17797436889661356;

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
    msg.setTimeStamp(0.826852143589554);
    msg.setSource(30400U);
    msg.setSourceEntity(0U);
    msg.setDestination(19069U);
    msg.setDestinationEntity(204U);
    msg.target = 8803U;
    msg.bearing = 0.5150546531250952;
    msg.elevation = 0.4810864923426672;

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
    msg.setTimeStamp(0.25462454315593896);
    msg.setSource(36508U);
    msg.setSourceEntity(72U);
    msg.setDestination(12859U);
    msg.setDestinationEntity(206U);
    msg.target = 31177U;
    msg.bearing = 0.48886691875419186;
    msg.elevation = 0.3650108701269963;

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
    msg.setTimeStamp(0.09207994437620082);
    msg.setSource(42048U);
    msg.setSourceEntity(211U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(104U);
    msg.target = 1655U;
    msg.x = 0.6309745680512877;
    msg.y = 0.6343151517645359;
    msg.z = 0.5223956211535268;

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
    msg.setTimeStamp(0.28591537281966806);
    msg.setSource(2909U);
    msg.setSourceEntity(62U);
    msg.setDestination(46184U);
    msg.setDestinationEntity(198U);
    msg.target = 12866U;
    msg.x = 0.3432138308146445;
    msg.y = 0.9196269486641228;
    msg.z = 0.4960232524873258;

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
    msg.setTimeStamp(0.19957792115511197);
    msg.setSource(16157U);
    msg.setSourceEntity(26U);
    msg.setDestination(8781U);
    msg.setDestinationEntity(218U);
    msg.target = 4774U;
    msg.x = 0.4063008915699804;
    msg.y = 0.4784940781480779;
    msg.z = 0.07598560917964381;

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
    msg.setTimeStamp(0.974042035826292);
    msg.setSource(24050U);
    msg.setSourceEntity(220U);
    msg.setDestination(57947U);
    msg.setDestinationEntity(253U);
    msg.target = 47905U;
    msg.lat = 0.16401508882123084;
    msg.lon = 0.4817590273512552;
    msg.z_units = 15U;
    msg.z = 0.3551178659728549;

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
    msg.setTimeStamp(0.2223691017410232);
    msg.setSource(63415U);
    msg.setSourceEntity(172U);
    msg.setDestination(58249U);
    msg.setDestinationEntity(174U);
    msg.target = 29243U;
    msg.lat = 0.8124356290150935;
    msg.lon = 0.5552070474395346;
    msg.z_units = 102U;
    msg.z = 0.10720524064392989;

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
    msg.setTimeStamp(0.9572765521623682);
    msg.setSource(34869U);
    msg.setSourceEntity(237U);
    msg.setDestination(21508U);
    msg.setDestinationEntity(63U);
    msg.target = 40592U;
    msg.lat = 0.24005553588965034;
    msg.lon = 0.1904080268062509;
    msg.z_units = 58U;
    msg.z = 0.5121877462741317;

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
    msg.setTimeStamp(0.09725219090828086);
    msg.setSource(21374U);
    msg.setSourceEntity(187U);
    msg.setDestination(15880U);
    msg.setDestinationEntity(25U);
    msg.locale.assign("HOHUGTDINZAWISHXFFLDVYLSGQYKDSZBXOWEYEZXYCPFTSITLCKAGGSWSJYHKDVYQZCMTWDCREZKNEDNTWAXXXODMEMZCTGQHESIALZKUQAFZS");
    const signed char tmp_msg_0[] = {1, -33, -102, 82, 56, -7, 113, -55, 85, -91, 8, 126, -84, 76, -116, 60, 11, 51, 46, 116, -44, 10, -114, -68, -48, -66, -94, 24, -18, 21, 14, -97, -50, -4, 123, -111, -25, 83, -31, 91, 46, 107, 12, 96, 13, 44, 67, 69, -69, 109, 57, 68, 79, -76, -40, -27, 82, 73, -72, -58, -59, -56, 88, -59, 54, -14, -21, 23, -112, -92, 100, 51, -87, 105, 49, -3, 99, -71, 122, -45, 101, 82, 47, -124, -57, 48, -111, 57, -85, 120, -1, 104, -107, 56, -106, 3, 35, 30};
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
    msg.setTimeStamp(0.2740900711412867);
    msg.setSource(8339U);
    msg.setSourceEntity(73U);
    msg.setDestination(23860U);
    msg.setDestinationEntity(83U);
    msg.locale.assign("ZVMPOHYSVRPUSGKSBAXLREBZCEHGENSDUSHJEDRHLQDXDKAZMLUBCTUXMBROJTIVIOGBTUHGTBBHSNYORMCMWWJHWWPFUYXZWQAIQLXQUIGPPSKZFPNLQNRIGGPDANSKNAEVFOGYVKENCOYWMIHJTFVJTEKHBTLFOFHRFD");
    const signed char tmp_msg_0[] = {-66, -61, 53, 103, -88, -53, -5, 91, -67, -121, 32, -19, -101, -91, -32, -81, -109, 85, 30, 43, 67, 91, 51, -125, -127, -82, -68, 78, 27, 89, 9, 18, 58, 50, -55, 92, 116, -69, 20, -70, 57, -29, -51, -59, 99, 70, -112, -14, 0, 61, 45, 1, 62, -25, 46, 111, -52, -120, 32, -65, 71, 79, -126, 44, 4, -118, -17, 87, -52, 83, 19, 87, -47, 40, -49, 68, -21, 122, 74, -126, 70, 104, -18, -72, -36, -15, -21, 18, -77, -53, -83, -55, 92, 69, 52, 74, -32, 79, 11, 19, 12, 43, -121, 42, 65, -91, -109, 119, -69, -58, 14, -93, 22, 93, -71, 32, -86, -18, 21, -35, 41, -11, 81, 65, -105, 125, -90, -116, 11, -19, 122, 26, -47, 95, -127, -28, -98, -12, 68, -45, 81, 105, -52, -100, -25, 49, 101, -20, 36, 7, -104, -110, 77, -53, 110, -62, 41, 40, -57, -96, 39, -84, 80, 25, -59, -70, 59, 77, -90, -117, 69, -100, -88, 108, 122, -3, 53, 116, 61, 48, 56, 22, 126, 126, -53};
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
    msg.setTimeStamp(0.5459575287806323);
    msg.setSource(22786U);
    msg.setSourceEntity(157U);
    msg.setDestination(9816U);
    msg.setDestinationEntity(110U);
    msg.locale.assign("RJJSKUABAHVAVKPOJQPIDAWFVUSEZOHELLWUXCWFARDXWNVKGY");
    const signed char tmp_msg_0[] = {-124, -114, -116, 3, 24, 11, -35, 40, 124, -83, -19, 78, -107, 126, -99, 21};
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
    msg.setTimeStamp(0.5423247311837925);
    msg.setSource(7047U);
    msg.setSourceEntity(25U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.5011348948164903);
    msg.setSource(58763U);
    msg.setSourceEntity(76U);
    msg.setDestination(2271U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.5295782276138629);
    msg.setSource(43750U);
    msg.setSourceEntity(80U);
    msg.setDestination(25576U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.46150396045223396);
    msg.setSource(28736U);
    msg.setSourceEntity(112U);
    msg.setDestination(63759U);
    msg.setDestinationEntity(155U);
    msg.camid = 252U;
    msg.x = 24105U;
    msg.y = 42682U;

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
    msg.setTimeStamp(0.036414036286680274);
    msg.setSource(20596U);
    msg.setSourceEntity(98U);
    msg.setDestination(23256U);
    msg.setDestinationEntity(251U);
    msg.camid = 149U;
    msg.x = 47892U;
    msg.y = 19026U;

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
    msg.setTimeStamp(0.5850915868667728);
    msg.setSource(20235U);
    msg.setSourceEntity(216U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(115U);
    msg.camid = 229U;
    msg.x = 29305U;
    msg.y = 43091U;

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
    msg.setTimeStamp(0.9993575501957094);
    msg.setSource(27802U);
    msg.setSourceEntity(55U);
    msg.setDestination(55254U);
    msg.setDestinationEntity(223U);
    msg.camid = 4U;
    msg.x = 26675U;
    msg.y = 54223U;

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
    msg.setTimeStamp(0.8954222452136354);
    msg.setSource(1033U);
    msg.setSourceEntity(252U);
    msg.setDestination(8119U);
    msg.setDestinationEntity(242U);
    msg.camid = 7U;
    msg.x = 18970U;
    msg.y = 7852U;

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
    msg.setTimeStamp(0.14009758428515195);
    msg.setSource(58875U);
    msg.setSourceEntity(235U);
    msg.setDestination(51142U);
    msg.setDestinationEntity(36U);
    msg.camid = 129U;
    msg.x = 25756U;
    msg.y = 2392U;

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
    msg.setTimeStamp(0.21243183330130389);
    msg.setSource(60395U);
    msg.setSourceEntity(111U);
    msg.setDestination(40449U);
    msg.setDestinationEntity(39U);
    msg.tracking = 199U;
    msg.lat = 0.5715147202772737;
    msg.lon = 0.7353775948030847;
    msg.x = 0.5668183326012743;
    msg.y = 0.2662312103143364;
    msg.z = 0.651272313272694;

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
    msg.setTimeStamp(0.5795169961639499);
    msg.setSource(5884U);
    msg.setSourceEntity(66U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(165U);
    msg.tracking = 18U;
    msg.lat = 0.6174558305247142;
    msg.lon = 0.2842260986394206;
    msg.x = 0.2599279495914173;
    msg.y = 0.3911052591279305;
    msg.z = 0.7775651368558959;

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
    msg.setTimeStamp(0.6021674610487076);
    msg.setSource(56458U);
    msg.setSourceEntity(23U);
    msg.setDestination(4822U);
    msg.setDestinationEntity(128U);
    msg.tracking = 40U;
    msg.lat = 0.9168479552657289;
    msg.lon = 0.4326882337738668;
    msg.x = 0.2922060960934053;
    msg.y = 0.9825815399426637;
    msg.z = 0.5800856173388895;

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
    msg.setTimeStamp(0.914692230721871);
    msg.setSource(56951U);
    msg.setSourceEntity(38U);
    msg.setDestination(65520U);
    msg.setDestinationEntity(60U);
    msg.target.assign("LELPKGJBXAXKKVXRMDMUXLAOWCOSTSGSFYGMLJQQCDOVIGIBHGYHESWCDNHJBYDRVCZZVOOPXNHMTMOAEPPVBFWEKJTOGYPBDIFMTSRQNYLBUVKDGUWWZATREBFVKWCUHKTSPSHZYJTZAZAJNMEAYJRWYDQIEMXQWNETEVJLCBXXCREQPZWHGRUBFSDRILJXGUZHLXFCIVNMUY");
    msg.lbearing = 0.5358712659002369;
    msg.lelevation = 0.9313782090010496;
    msg.bearing = 0.8927847215542781;
    msg.elevation = 0.8641567082252658;
    msg.phi = 0.47916065368261573;
    msg.theta = 0.1768914887513855;
    msg.psi = 0.05254259237051706;
    msg.accuracy = 0.9765465214230159;

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
    msg.setTimeStamp(0.6058474060565139);
    msg.setSource(11445U);
    msg.setSourceEntity(36U);
    msg.setDestination(54867U);
    msg.setDestinationEntity(106U);
    msg.target.assign("OANMXLKQFECDSWLTTFQCHVBFAIKWWZILQWRMBHAYKNUHKPZKJAABBUPLGHVXDSJMJSUNZBJGIVHRETQBJWGVASUSLUAZAYBMJDRKVPVIUEUFJOZPIZNZX");
    msg.lbearing = 0.7571048657249361;
    msg.lelevation = 0.5244723822333924;
    msg.bearing = 0.891093974335754;
    msg.elevation = 0.44045474368223025;
    msg.phi = 0.21306694198649334;
    msg.theta = 0.25291079370766445;
    msg.psi = 0.09311101828119994;
    msg.accuracy = 0.7445902275219434;

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
    msg.setTimeStamp(0.6833297376628171);
    msg.setSource(58576U);
    msg.setSourceEntity(101U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(243U);
    msg.target.assign("SZEMBXHXTUZKBPYZVMYRPWOPNAGIPFZGWKCKTEFWBOBLKTPGQZYJVHELELSBCDVNUFKURGEIVROAPTMXNJIOOQSDPTRWQMNGYUXYFAOCRLWPEHCRVAKZPGOSRIIKHXFINIAZGVDDGIHTETKBYBVOKWQPUATSSTSJJQWDHGECLDDCUXMDYMLXCZLQCNARMIDVWHNFEMJONXHJFJVUFFHAQJSSZYXHRLQFAOBXEYIGW");
    msg.lbearing = 0.3057192986789403;
    msg.lelevation = 0.8139579812462785;
    msg.bearing = 0.08959972403382321;
    msg.elevation = 0.45363129014524506;
    msg.phi = 0.2899659654540566;
    msg.theta = 0.20042149774133944;
    msg.psi = 0.8584645886741271;
    msg.accuracy = 0.7514632219278857;

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
    msg.setTimeStamp(0.8530721986592164);
    msg.setSource(32122U);
    msg.setSourceEntity(247U);
    msg.setDestination(45402U);
    msg.setDestinationEntity(201U);
    msg.target.assign("GZLJUVWOFRRSIBBKVSHGEWXHYWAACBLJCYAYGTRUFUNNSPFGRXMYTFVEGBNNJCIYZZWQIRTOMXFEJANEDFKUZGADJPYCIBZMXBLWHKHGNHGXOTXCYMOZOVOVTPMJQKZPBRHIJIWDVGLDFZZKFEXSCGAQCSLBPQQAUBJKDOMADOHTTCNORVIHPYPKJMDFRUIKLLDXTEEJQNQOVMLSIHCQXKLNWZUNRQU");
    msg.x = 0.4995250898172777;
    msg.y = 0.9259661208569098;
    msg.z = 0.926976761807868;
    msg.n = 0.5703145345355325;
    msg.e = 0.8705913861101824;
    msg.d = 0.21415732072490268;
    msg.phi = 0.06299939407150423;
    msg.theta = 0.9640332969985639;
    msg.psi = 0.9004843892448654;
    msg.accuracy = 0.7711656287259837;

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
    msg.setTimeStamp(0.7591556917798349);
    msg.setSource(20701U);
    msg.setSourceEntity(190U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(137U);
    msg.target.assign("EWXTRRQNBSOMJSAGKPOIKMSTMANQLGZPPASBVPBCXKUJZNROCMNOBCDAZEUWSUAAMXVJHZWGYOXRZKFLOUEWVRHFTNJVMPNHRIDTCWYWREYWBJJQZCPDZXTVGIXFAJWBCHAVMDQAGUJVZLYSPQKIMKBLHFDTVPWRJMDQECBDDEHH");
    msg.x = 0.36027480789051525;
    msg.y = 0.35209694469715025;
    msg.z = 0.27810501516261255;
    msg.n = 0.4755365343034853;
    msg.e = 0.22218954430740245;
    msg.d = 0.4891301507829767;
    msg.phi = 0.40876136942819286;
    msg.theta = 0.49313778461451796;
    msg.psi = 0.7022849282478567;
    msg.accuracy = 0.7821518948833657;

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
    msg.setTimeStamp(0.4815897814249156);
    msg.setSource(4349U);
    msg.setSourceEntity(102U);
    msg.setDestination(41295U);
    msg.setDestinationEntity(47U);
    msg.target.assign("NTRLXHMKQJTQT");
    msg.x = 0.9717409215849557;
    msg.y = 0.6525938624643846;
    msg.z = 0.6955644753677006;
    msg.n = 0.5729410582066554;
    msg.e = 0.013955292447870526;
    msg.d = 0.24752501510234215;
    msg.phi = 0.2751482728065894;
    msg.theta = 0.46999665916342015;
    msg.psi = 0.22054357789184476;
    msg.accuracy = 0.025933805337534865;

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
    msg.setTimeStamp(0.3590345192265896);
    msg.setSource(52997U);
    msg.setSourceEntity(7U);
    msg.setDestination(50936U);
    msg.setDestinationEntity(218U);
    msg.target.assign("ZZTCOKBNEXVNCKAJGEVPBZRDRGNRJILVSTILNXGMPNAZYAPARYSHOSLBSGMVHFEXQBAICZMCDFMHAUKRZJGWXOBLAKJQQGZEYJYKMKVTWOVLUDIQOBEOXMCXEXYYSKVKDNATPZ");
    msg.lat = 0.09408692265973762;
    msg.lon = 0.32946336815723753;
    msg.z_units = 46U;
    msg.z = 0.02871517330654827;
    msg.accuracy = 0.13063858443412824;

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
    msg.setTimeStamp(0.14842838661301405);
    msg.setSource(33768U);
    msg.setSourceEntity(95U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(155U);
    msg.target.assign("EKNKXPPYDMHJODTBOMWOEMLHWCBWOGFSAHTTREZZIRQGHSBLYNROYSKQTLGAIVQDICVYQ");
    msg.lat = 0.8723760738374939;
    msg.lon = 0.7817143954552034;
    msg.z_units = 72U;
    msg.z = 0.7673419927312272;
    msg.accuracy = 0.7434439925876145;

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
    msg.setTimeStamp(0.9384976622827242);
    msg.setSource(58769U);
    msg.setSourceEntity(44U);
    msg.setDestination(64215U);
    msg.setDestinationEntity(232U);
    msg.target.assign("TFDPCVSLPXQCLIPVZNSWXSRLTGGHNMWRDAHOFGYBSEWVYFKVDBSUMITPBVLLTUMYTJVCEKYIZPDWQSJXQLICVOBFSRABEIZMQKEVKEGJBYWVJGRXRKUHMBIRELWDFJNJJKPTROCXMLBAHLSJHRRNIXZJNXNDHUEWNNQYKZONWPUIUUDFWYGYMQOAZQQUXLPZMEHXCOTZRFEMIAHIUJFOYTDKKTGDGGDXOZVOAQPHFMEAKACQWAUSOACC");
    msg.lat = 0.6086751152764804;
    msg.lon = 0.6635018113534503;
    msg.z_units = 26U;
    msg.z = 0.46811649116923226;
    msg.accuracy = 0.13706346431059446;

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
    msg.setTimeStamp(0.6340976855206552);
    msg.setSource(25422U);
    msg.setSourceEntity(190U);
    msg.setDestination(37528U);
    msg.setDestinationEntity(225U);
    msg.name.assign("FKSDFTMCQNXXRJGGRSYVHVKMOQBZBLZGLIVUANJSZHENFEZAQTIPBGWYYENXEEZIVCCSBAGAWRCGVBLXJBOQJUIIKPCPLAFDOR");
    msg.lat = 0.2431407531881301;
    msg.lon = 0.749517736366682;
    msg.z = 0.5068513366977206;
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
    msg.setTimeStamp(0.1386906978985024);
    msg.setSource(2570U);
    msg.setSourceEntity(206U);
    msg.setDestination(635U);
    msg.setDestinationEntity(111U);
    msg.name.assign("EQBKBYXVJEVTZZBOFFJVTUQEDFEYSXJUQMXCDYBSOJQKNKTNNGIKNRLZENBWLHEIHYCJSXPFXLKRBKPYFSZTDAAPFLFWTZFLEAHHWEGVRWCOJICEDTIQSOLDLCTOIKUIYPJMVZCYPNWAHUYCGLGOXHYVURYVLBSULZRXO");
    msg.lat = 0.17774854939240603;
    msg.lon = 0.4075896572819965;
    msg.z = 0.15475407418061582;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.44344537691374863);
    msg.setSource(48884U);
    msg.setSourceEntity(67U);
    msg.setDestination(40037U);
    msg.setDestinationEntity(50U);
    msg.name.assign("XZAIRSQVWQMRUXJHBRECJTTKFFXUSRYNLDLCLBVZKHTHQLSIVIHCIASTGDGAXZRSTDKUJRODDOXWIYRRNLFUEMXLIFLAOSPBRCWNDEBAMHVVMLYWGWBCKVJWGFZ");
    msg.lat = 0.06603637326812906;
    msg.lon = 0.8361225214543127;
    msg.z = 0.48390807633420907;
    msg.z_units = 250U;

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
    msg.setTimeStamp(0.595407581075624);
    msg.setSource(25318U);
    msg.setSourceEntity(222U);
    msg.setDestination(28624U);
    msg.setDestinationEntity(98U);
    msg.op = 236U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YWMEAPIPUNOHTRDWHBURSKXXDBJZDCKIEFTOGRTHMHFOCNKNRXTCUWJDGKOEIRTMYLCQZBSZAQBRSTSCDBDKXIQMDBQQIWJUHVKLTXMCGKZRPGIUASDSANKLOQYHGAPPGVUBEVEIFMHYMZAFOTALGJPZBNNYFYSPSOVCMGWFNHIWZJPJVF");
    tmp_msg_0.lat = 0.6044766403455359;
    tmp_msg_0.lon = 0.88358552566209;
    tmp_msg_0.z = 0.740483679918304;
    tmp_msg_0.z_units = 34U;
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
    msg.setTimeStamp(0.8365012590758408);
    msg.setSource(38527U);
    msg.setSourceEntity(231U);
    msg.setDestination(11854U);
    msg.setDestinationEntity(66U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.6326898111098349);
    msg.setSource(2830U);
    msg.setSourceEntity(191U);
    msg.setDestination(39678U);
    msg.setDestinationEntity(26U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.6207766366665498);
    msg.setSource(34463U);
    msg.setSourceEntity(98U);
    msg.setDestination(23302U);
    msg.setDestinationEntity(227U);
    msg.value = 0.919169788592123;
    msg.type = 230U;

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
    msg.setTimeStamp(0.16734820371986103);
    msg.setSource(26136U);
    msg.setSourceEntity(191U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(37U);
    msg.value = 0.3220468719537357;
    msg.type = 248U;

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
    msg.setTimeStamp(0.8947885361212112);
    msg.setSource(6606U);
    msg.setSourceEntity(76U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(90U);
    msg.value = 0.8644442685302692;
    msg.type = 198U;

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
    msg.setTimeStamp(0.009729456972087935);
    msg.setSource(43473U);
    msg.setSourceEntity(36U);
    msg.setDestination(55408U);
    msg.setDestinationEntity(39U);
    msg.value = 0.855145803676321;

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
    msg.setTimeStamp(0.8725136715405023);
    msg.setSource(54329U);
    msg.setSourceEntity(32U);
    msg.setDestination(3495U);
    msg.setDestinationEntity(95U);
    msg.value = 0.6910768306250199;

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
    msg.setTimeStamp(0.45188359916666676);
    msg.setSource(41453U);
    msg.setSourceEntity(16U);
    msg.setDestination(56495U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8268923506553797;

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
    msg.setTimeStamp(0.09374730761660421);
    msg.setSource(22362U);
    msg.setSourceEntity(202U);
    msg.setDestination(41485U);
    msg.setDestinationEntity(201U);
    msg.timestamp_last_service = 0.836678034210633;
    msg.time_next_service = 0.688522824852923;
    msg.time_motor_next_service = 0.6877233324335952;
    msg.time_idle_ground = 0.5980520214522531;
    msg.time_idle_air = 0.7885103946450488;
    msg.time_idle_water = 0.8643293108661039;
    msg.time_idle_underwater = 0.9701856466431495;
    msg.time_idle_unknown = 0.4341755887876345;
    msg.time_motor_ground = 0.20520472214149788;
    msg.time_motor_air = 0.21393280765698053;
    msg.time_motor_water = 0.43500544504839234;
    msg.time_motor_underwater = 0.6462035657271284;
    msg.time_motor_unknown = 0.9036133161882075;
    msg.rpm_min = 6973;
    msg.rpm_max = -1352;
    msg.depth_max = 0.7293562224959605;

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
    msg.setTimeStamp(0.21015911828383438);
    msg.setSource(56081U);
    msg.setSourceEntity(141U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(155U);
    msg.timestamp_last_service = 0.7111409059867844;
    msg.time_next_service = 0.3127700009830182;
    msg.time_motor_next_service = 0.7545878708927826;
    msg.time_idle_ground = 0.39838789154346876;
    msg.time_idle_air = 0.8635647707988877;
    msg.time_idle_water = 0.5292228389449687;
    msg.time_idle_underwater = 0.14231048508724997;
    msg.time_idle_unknown = 0.016333815774598248;
    msg.time_motor_ground = 0.17845144495828802;
    msg.time_motor_air = 0.27302179028417095;
    msg.time_motor_water = 0.13482972586312425;
    msg.time_motor_underwater = 0.8974738425563543;
    msg.time_motor_unknown = 0.08587996936649633;
    msg.rpm_min = -6260;
    msg.rpm_max = -4566;
    msg.depth_max = 0.5497435904801828;

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
    msg.setTimeStamp(0.1933307748049572);
    msg.setSource(55444U);
    msg.setSourceEntity(229U);
    msg.setDestination(42213U);
    msg.setDestinationEntity(77U);
    msg.timestamp_last_service = 0.5959990372133901;
    msg.time_next_service = 0.9477241431003589;
    msg.time_motor_next_service = 0.9343124790839066;
    msg.time_idle_ground = 0.8769222845183532;
    msg.time_idle_air = 0.21396977906534587;
    msg.time_idle_water = 0.5965268084056387;
    msg.time_idle_underwater = 0.5732779296114944;
    msg.time_idle_unknown = 0.30864223079935593;
    msg.time_motor_ground = 0.05005745006847717;
    msg.time_motor_air = 0.01107042525935742;
    msg.time_motor_water = 0.567897849620845;
    msg.time_motor_underwater = 0.6875413778255801;
    msg.time_motor_unknown = 0.6896367737904296;
    msg.rpm_min = -24427;
    msg.rpm_max = 3758;
    msg.depth_max = 0.3176987818085042;

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
    msg.setTimeStamp(0.21121436129853388);
    msg.setSource(58806U);
    msg.setSourceEntity(249U);
    msg.setDestination(18156U);
    msg.setDestinationEntity(199U);
    msg.severity = 68U;
    msg.text.assign("OMONNFOCDPCYRDCLNAAVVXCPFTAVDFJCWKQYMVVOTMLWSPIZDRTCJBHEZSYHFPQMNGODDNYYXYVUELTIHCGSGSXMAZJHCZGUQZSKBZMYNSROPAOYPBRYFVQIBKJGKCLEJQDNSKIAGNKPKUEXJUAIBPKJTXUJEIXL");

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
    msg.setTimeStamp(0.4561278847117908);
    msg.setSource(6737U);
    msg.setSourceEntity(17U);
    msg.setDestination(17094U);
    msg.setDestinationEntity(77U);
    msg.severity = 108U;
    msg.text.assign("QPROFJIFVRXMBOBMKHBWTMSRZNCIXMDNVEBZBKLAIMOGLWIMWYYDTZVPQLLAPYTADH");

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
    msg.setTimeStamp(0.07545497331798656);
    msg.setSource(36605U);
    msg.setSourceEntity(160U);
    msg.setDestination(52504U);
    msg.setDestinationEntity(161U);
    msg.severity = 22U;
    msg.text.assign("MDITPGIRECIWHVGFBZDDBJTMRQWRSPCTGOVWNLWVXUSQQBAYIOPPPQBKOSZIMZHDLKQFIFZUFMJRUNXSZJEEXZNWVYAEVTZUXYOUYRKNTTPKVCYYEHTDKZFXKFFHLQPOHSAHL");

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
    msg.setTimeStamp(0.4959050087818434);
    msg.setSource(18077U);
    msg.setSourceEntity(140U);
    msg.setDestination(7549U);
    msg.setDestinationEntity(126U);
    msg.channel = 123;
    msg.value = 555719736;
    msg.gain = 232U;

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
    msg.setTimeStamp(0.8089536916148623);
    msg.setSource(24938U);
    msg.setSourceEntity(70U);
    msg.setDestination(38654U);
    msg.setDestinationEntity(149U);
    msg.channel = 32;
    msg.value = -1609588433;
    msg.gain = 68U;

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
    msg.setTimeStamp(0.8030142442955274);
    msg.setSource(64965U);
    msg.setSourceEntity(183U);
    msg.setDestination(39431U);
    msg.setDestinationEntity(219U);
    msg.channel = 94;
    msg.value = -842386535;
    msg.gain = 77U;

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
    msg.setTimeStamp(0.038012832967232124);
    msg.setSource(44534U);
    msg.setSourceEntity(40U);
    msg.setDestination(56700U);
    msg.setDestinationEntity(153U);
    msg.ch01 = 0.2662539135161245;
    msg.ch02 = 0.3398841213824778;
    msg.ch03 = 0.8031490716345518;
    msg.ch04 = 0.9387442955054455;
    msg.ch05 = 0.9904516739977783;
    msg.ch06 = 0.6214381293729924;
    msg.ch07 = 0.22042734553504706;
    msg.ch08 = 0.4057116851000775;
    msg.ch09 = 0.2339088002034827;
    msg.ch10 = 0.9393281343038032;
    msg.ch11 = 0.38261285515410093;
    msg.ch12 = 0.08680429583980476;
    msg.ch13 = 0.3368924732433888;
    msg.ch14 = 0.5573288863992926;
    msg.ch15 = 0.4085772935359133;
    msg.ch16 = 0.4202279404063166;

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
    msg.setTimeStamp(0.278933314174737);
    msg.setSource(57553U);
    msg.setSourceEntity(203U);
    msg.setDestination(2004U);
    msg.setDestinationEntity(65U);
    msg.ch01 = 0.2861338201590766;
    msg.ch02 = 0.9916426000039067;
    msg.ch03 = 0.6301879935382252;
    msg.ch04 = 0.1335206260732199;
    msg.ch05 = 0.7225847459889478;
    msg.ch06 = 0.4175053930552476;
    msg.ch07 = 0.8374409237607008;
    msg.ch08 = 0.49207037571948875;
    msg.ch09 = 0.49014991297047683;
    msg.ch10 = 0.9653845050125808;
    msg.ch11 = 0.9116078539770046;
    msg.ch12 = 0.9779686325439624;
    msg.ch13 = 0.14260512336035325;
    msg.ch14 = 0.8036777704647581;
    msg.ch15 = 0.28370804484203005;
    msg.ch16 = 0.2073851013898268;

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
    msg.setTimeStamp(0.10945561877527787);
    msg.setSource(26384U);
    msg.setSourceEntity(198U);
    msg.setDestination(9744U);
    msg.setDestinationEntity(103U);
    msg.ch01 = 0.6513958129914527;
    msg.ch02 = 0.7446189129315411;
    msg.ch03 = 0.6770748039719089;
    msg.ch04 = 0.5354380288474625;
    msg.ch05 = 0.6183760658803182;
    msg.ch06 = 0.7288356180658575;
    msg.ch07 = 0.9410560414254963;
    msg.ch08 = 0.2887083272964591;
    msg.ch09 = 0.6582576878021413;
    msg.ch10 = 0.19614804980619371;
    msg.ch11 = 0.9423151409645428;
    msg.ch12 = 0.6764012519033862;
    msg.ch13 = 0.6465682472191074;
    msg.ch14 = 0.6892897577527644;
    msg.ch15 = 0.46433969884112836;
    msg.ch16 = 0.028564628162118688;

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
    msg.setTimeStamp(0.9486998440655334);
    msg.setSource(54611U);
    msg.setSourceEntity(232U);
    msg.setDestination(33652U);
    msg.setDestinationEntity(214U);
    msg.op = 148U;
    msg.lat = 0.7332511126827326;
    msg.lon = 0.910863285407254;
    msg.height = 0.8442414683001029;
    msg.depth = 0.03791568767876752;
    msg.alt = 0.4411218354058296;

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
    msg.setTimeStamp(0.8589138847825624);
    msg.setSource(13778U);
    msg.setSourceEntity(55U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(227U);
    msg.op = 215U;
    msg.lat = 0.27859987629758753;
    msg.lon = 0.012955499895327072;
    msg.height = 0.44218043649950844;
    msg.depth = 0.6487282090378866;
    msg.alt = 0.6717376139427443;

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
    msg.setTimeStamp(0.3603303658820377);
    msg.setSource(36239U);
    msg.setSourceEntity(58U);
    msg.setDestination(59985U);
    msg.setDestinationEntity(56U);
    msg.op = 25U;
    msg.lat = 0.4733415667949459;
    msg.lon = 0.9964694217452971;
    msg.height = 0.43989043942552886;
    msg.depth = 0.45897114237554626;
    msg.alt = 0.7880401101027611;

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
    msg.setTimeStamp(0.7302943300910574);
    msg.setSource(58476U);
    msg.setSourceEntity(147U);
    msg.setDestination(59874U);
    msg.setDestinationEntity(17U);
    msg.direction = 0.09716699994230038;
    msg.speed = 0.6624857814728393;
    msg.turbulence = 0.15182241478637504;

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
    msg.setTimeStamp(0.33086871610875357);
    msg.setSource(14426U);
    msg.setSourceEntity(49U);
    msg.setDestination(51410U);
    msg.setDestinationEntity(146U);
    msg.direction = 0.6780010530130826;
    msg.speed = 0.8787410593476226;
    msg.turbulence = 0.45919162449090256;

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
    msg.setTimeStamp(0.34795809754314944);
    msg.setSource(59198U);
    msg.setSourceEntity(65U);
    msg.setDestination(48540U);
    msg.setDestinationEntity(92U);
    msg.direction = 0.8537750587327775;
    msg.speed = 0.4351115253062642;
    msg.turbulence = 0.8222276493254914;

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
    msg.setTimeStamp(0.2824302756158049);
    msg.setSource(40967U);
    msg.setSourceEntity(97U);
    msg.setDestination(32561U);
    msg.setDestinationEntity(217U);
    msg.msg_type.assign("UYDRFRWVSZSNAOIAWNVXEAGKGOPCAQLCSXXQNMBRENZGUEHOCBUVGOCDTPYJNAPJWDWWSEBHNJQVVXMTEAHOCAJQLUKPKFBSGZWISLLONQSYWUFVQDYVHRZJOJDKMBSPWFRPQOOMOBTMEPFKRLSDRILHJYXGQLEXKZTMGTPMHYGAC");
    msg.sensor_class.assign("SJVHUWSPHFFAXARKKCTJPQSHWRFEFTCMMZOJXMDLNJPYQLOURENGJWCWGZAVMQHUHAXOYJGLVWSFUKTHEPIPSOSZSGKRNIYYAFDXEFXAQGBXVWLNDZQJFSHYCREI");
    msg.mmsi.assign("BETNWYGZHBCDLRDTJQGVSRDS");
    msg.callsign.assign("HIPWCRYFAOQZMMMDSCEMYODUEYTHVOTSVNZPDSHFQWRUQLIREFWBRJEVFLIDWBQZLOLEYLCIBILHJFAQQOPVQNWMPUYPJMDXNDDFSMUUPFZXJLTEWXNCRHARZZOYQKYJJKZBGQMENOEHIKUMJISF");
    msg.name.assign("LGFLOTBCJBROVZVQBTPMKRUDYWFLONXTSRNZXDIQPXWJGIWHLEBOXKHZXGTEUSJWRYYCHGNMXYIJOZIBZAPIFZKWQGJKVNUMNPALJPSTCGELSCOTKTYIDRGGSEGDQPXVVUWJKWYLXQHHSUXESPSIUAFOIAYIMDCMFVFPUAZANDLETIJNHFYWCUCVHPASORRODOELQGTLAZMJNDCKSDEHYKKYMNNVFRTZQMEBFBRHKBBCJ");
    msg.nav_status = 60U;
    msg.type_and_cargo = 168U;
    msg.lat = 0.28272179779564655;
    msg.lon = 0.45883107246580335;
    msg.course = 0.663457819198526;
    msg.speed = 0.13580974091444875;
    msg.dist = 0.5967421930686521;
    msg.a = 0.12458575340861788;
    msg.b = 0.8053952745294543;
    msg.c = 0.9777858328726509;
    msg.d = 0.6804120849485696;
    msg.draught = 0.44001822759244025;

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
    msg.setTimeStamp(0.9206967246918694);
    msg.setSource(40537U);
    msg.setSourceEntity(21U);
    msg.setDestination(27593U);
    msg.setDestinationEntity(229U);
    msg.msg_type.assign("MYNPBAWWPHVKSFOVMGLUXWJHQEDKMBCTOCWGZATVWNRQDFYNCXPUJBRHUJZBQLSFVCYKEBRPMTBMNAMZEATEBHYZFEIZJXVGSZQIGPPKODDDSFNTUITZVSFVNJYVXMTIXXHACTQNRGOULALKEWHCDYWVMJUEMAKD");
    msg.sensor_class.assign("UDYEINYEIBZJRZIQSGOIV");
    msg.mmsi.assign("FTGXLPOLAQHONRYVISWTGEMOWULULWUQJKXLPNRUWYRCFKINMGZZUBALLRNFIFDMDVDROKBCOEJFXESVIEZHBAWXRTJYPHFQISFWZMXHSSOPOGAXZGCFEKHDTKIYKXUQUPRHVCMDGWANAPDMTVQGOBNMAPZJASJJKYLWCBXTOHEPJYRRXPHGETEWEKFTBZDHVVFASYBCQBNCLDCNVVMZTTQPD");
    msg.callsign.assign("XSPCPHTUZKAOTHYWMVVANCIDHZNZRUOWCELTJEYZEJFDQVYEWNMBSIZIFYPOJBPTJVYGQROSEHTYAB");
    msg.name.assign("VRZBNUHTRPZCMOSPPBOVPGKRAOMXNLAIYWKQZAAOIYKGZMXCVNQDGCTRWVQXQRELWETFUWRLJVGLRQWYPHMYESBEYUWWPCYIMCUQJNGTLQODBEXNTDHKLEXSCFCZCFRBDCIDPPTJKIKWVUBNRPEZADSABFUJLQOMUEYZ");
    msg.nav_status = 68U;
    msg.type_and_cargo = 116U;
    msg.lat = 0.41167873597896976;
    msg.lon = 0.615885892580053;
    msg.course = 0.6816974825037739;
    msg.speed = 0.8081583600808462;
    msg.dist = 0.3983004604700955;
    msg.a = 0.48035935890623827;
    msg.b = 0.7252124933732191;
    msg.c = 0.6541794940816764;
    msg.d = 0.4841041216396015;
    msg.draught = 0.5312731280379871;

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
    msg.setTimeStamp(0.867774379290197);
    msg.setSource(35563U);
    msg.setSourceEntity(84U);
    msg.setDestination(48261U);
    msg.setDestinationEntity(111U);
    msg.msg_type.assign("QQXKHPZFGFQBPOMZIWUHWOWQAKCQHEVFYWSRJBREWAJBBVUENDQPJYVGVCBVDSOVLPZQLRCLDXLWJGIIFSAJOZPQDFHGSCMOHRMFEXGOASRGTKKKACELXSTPNIXHQZAZDYTEKEBULYEXJNHZDTTALNAKAGIUULNSHUJZESVUIBDWJHNUXIYPIROCDPWGXOCQKR");
    msg.sensor_class.assign("HXPFVCSQTRNFQXEVLNLIOGFWANEWGDMYELQHZYENTCKBMZOBVJPSMYO");
    msg.mmsi.assign("SQVAZXNUWUIYIBETIMUQYPINVOWPSZKCBWKOGNQDLUDGFDIZAGIFWVYYXSPLGJNIMWHAVZLVRQDLDCMRABOZYYYJBWZOQRYMTHWCQHPEBGTDTNRHFTJIEVBDYAMQXUTRXHEYRPCOLJOHLPJKMMHXQJBNKDOXAKEEKNXO");
    msg.callsign.assign("ATXIMBUOSORORZSRLOUPXHDDQJVIHGEXNBUGLKFPRFUVHCLYSUUXHBLGKMGIMNURVLKVYISPFUAIZZKSTYJTZCFDLKCRUXKAFYJQNAAYAZDMKPPKPFQRCWANGPGBJIVDQCEXNATJWTDXSIMWORMYGKCBBLPVWEQMHRPCDHXOOSEHENENOZFMUVZYTJTYWDBKCNWINLJLTCTOLJVFYSC");
    msg.name.assign("IJMTXQJYHOWBSUMJYNSWKPCCNJCTQRWTTHTFCGCYYTVKVGQXANLAUQKYPUOAZLFFLKDFRNPWTWCNOFW");
    msg.nav_status = 4U;
    msg.type_and_cargo = 150U;
    msg.lat = 0.6572662049465566;
    msg.lon = 0.5376124779338685;
    msg.course = 0.4008796148931275;
    msg.speed = 0.9876481356189375;
    msg.dist = 0.3626688659115921;
    msg.a = 0.947526476390943;
    msg.b = 0.31426631189522847;
    msg.c = 0.5493409768677581;
    msg.d = 0.4974438135155719;
    msg.draught = 0.07856040209327819;

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
    msg.setTimeStamp(0.7589411112828215);
    msg.setSource(9639U);
    msg.setSourceEntity(24U);
    msg.setDestination(32235U);
    msg.setDestinationEntity(234U);
    msg.depth_at_loc.assign("PBRSTNVRSUYJKYT");
    msg.danger.assign("FNPIBSONWGRWMNXSSJJJWUOQQTXFKLPAAKXTOVRUQLDAGUHDYNUTJHGOYVEQLKZVYWVNMBSAYFOLJKRSHHMIPDDPZIZEZREXZRQYVCCOBFAKPCAVRYUMRPUIEAIIEFGLHGNMHSIBPCFNQEHHIXSMTMVDGWXBJEVBBQCEXORYKSMGQVLDNGGLLGEYIJEJFUCSNZRXJKXFRQMMPKTDBTX");

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
    msg.setTimeStamp(0.7721843865798638);
    msg.setSource(29838U);
    msg.setSourceEntity(37U);
    msg.setDestination(64334U);
    msg.setDestinationEntity(6U);
    msg.depth_at_loc.assign("ODQKTBLPQFNLUZHJVAKBNHGRYAEZDGBZCQAYJVUQOKKARPGFNNQJMFJAUMSGXVXJQLMZMLCEN");
    msg.danger.assign("EYPXCVZYPUBTQKHYFMSDWJKMNGHLCQAADXLXUWQSIZYIOOZPK");

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
    msg.setTimeStamp(0.9454352239609971);
    msg.setSource(16132U);
    msg.setSourceEntity(164U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(221U);
    msg.depth_at_loc.assign("TKHPFUPLMGXKEYARWPRRDGCIUJZMWUOXCHRTNGQZJSIHCGYRVKTIGNEHVEVOYBRLQUNUJPKKCBLWDQAGWDYWCPULZBPASTGFTEQLLIQBBWHOTPAKXTLDXWBXCVMJNI");
    msg.danger.assign("EKASYZICSTUNTYVQJNVQIMWXIQGJ");

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
    msg.setTimeStamp(0.3783951729070436);
    msg.setSource(11362U);
    msg.setSourceEntity(160U);
    msg.setDestination(882U);
    msg.setDestinationEntity(226U);
    msg.time = 0.8272111113818337;
    msg.x = 0.25937612203424854;
    msg.y = 0.0991799687599263;
    msg.z = 0.4546099971820555;

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
    msg.setTimeStamp(0.8351907788229548);
    msg.setSource(19934U);
    msg.setSourceEntity(113U);
    msg.setDestination(25397U);
    msg.setDestinationEntity(32U);
    msg.time = 0.23429142621559274;
    msg.x = 0.9118810429910006;
    msg.y = 0.5394696681045733;
    msg.z = 0.26903613219858247;

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
    msg.setTimeStamp(0.5749541000193781);
    msg.setSource(2623U);
    msg.setSourceEntity(60U);
    msg.setDestination(47198U);
    msg.setDestinationEntity(75U);
    msg.time = 0.8951203706035242;
    msg.x = 0.06663611220062438;
    msg.y = 0.5803418519817962;
    msg.z = 0.3257455091699599;

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
    msg.setTimeStamp(0.11599280356686537);
    msg.setSource(13370U);
    msg.setSourceEntity(119U);
    msg.setDestination(33735U);
    msg.setDestinationEntity(83U);
    msg.nbeams = 4U;
    msg.ncells = 207U;
    msg.coord_sys = 54U;

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
    msg.setTimeStamp(0.6328760042092239);
    msg.setSource(8051U);
    msg.setSourceEntity(87U);
    msg.setDestination(46474U);
    msg.setDestinationEntity(223U);
    msg.nbeams = 45U;
    msg.ncells = 194U;
    msg.coord_sys = 217U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.25171470121451356;
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
    msg.setTimeStamp(0.5907437234473051);
    msg.setSource(63552U);
    msg.setSourceEntity(125U);
    msg.setDestination(42537U);
    msg.setDestinationEntity(226U);
    msg.nbeams = 204U;
    msg.ncells = 161U;
    msg.coord_sys = 196U;

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
    msg.setTimeStamp(7.008211095538286e-05);
    msg.setSource(5638U);
    msg.setSourceEntity(38U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(211U);
    msg.cell_position = 0.8451948810191389;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3926039434757532;
    tmp_msg_0.amp = 0.31424637969522806;
    tmp_msg_0.cor = 174U;
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
    msg.setTimeStamp(0.34968834584592223);
    msg.setSource(19632U);
    msg.setSourceEntity(253U);
    msg.setDestination(52377U);
    msg.setDestinationEntity(191U);
    msg.cell_position = 0.8953240476011993;

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
    msg.setTimeStamp(0.6672040241872599);
    msg.setSource(21225U);
    msg.setSourceEntity(104U);
    msg.setDestination(22136U);
    msg.setDestinationEntity(22U);
    msg.cell_position = 0.2787970878256055;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.7197182684855491;
    tmp_msg_0.amp = 0.797305752403189;
    tmp_msg_0.cor = 52U;
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
    msg.setTimeStamp(0.05948605921569006);
    msg.setSource(33113U);
    msg.setSourceEntity(130U);
    msg.setDestination(30228U);
    msg.setDestinationEntity(44U);
    msg.vel = 0.9094431893687348;
    msg.amp = 0.2728336055297209;
    msg.cor = 102U;

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
    msg.setTimeStamp(0.5345151797943222);
    msg.setSource(45227U);
    msg.setSourceEntity(198U);
    msg.setDestination(705U);
    msg.setDestinationEntity(194U);
    msg.vel = 0.510254917315177;
    msg.amp = 0.9437482177513914;
    msg.cor = 91U;

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
    msg.setTimeStamp(0.09102552181820767);
    msg.setSource(24072U);
    msg.setSourceEntity(111U);
    msg.setDestination(19666U);
    msg.setDestinationEntity(176U);
    msg.vel = 0.923552114935071;
    msg.amp = 0.09471379371961497;
    msg.cor = 10U;

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
    msg.setTimeStamp(0.9552264099178279);
    msg.setSource(36260U);
    msg.setSourceEntity(137U);
    msg.setDestination(19886U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6583437751495603;

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
    msg.setTimeStamp(0.05279088988655167);
    msg.setSource(11069U);
    msg.setSourceEntity(195U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(40U);
    msg.value = 0.6775413472785999;

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
    msg.setTimeStamp(0.12666332848132011);
    msg.setSource(34369U);
    msg.setSourceEntity(58U);
    msg.setDestination(44847U);
    msg.setDestinationEntity(140U);
    msg.value = 0.46198947665396506;

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
    msg.setTimeStamp(0.17247797718804025);
    msg.setSource(35207U);
    msg.setSourceEntity(207U);
    msg.setDestination(37342U);
    msg.setDestinationEntity(236U);
    msg.sig_wave_height_hm0 = 0.28699014183295124;
    msg.wave_peak_direction = 0.9584240740902518;
    msg.wave_peak_period = 0.37643462062809696;
    msg.wave_height_wind_hm0 = 0.9637868545698903;
    msg.wave_height_swell_hm0 = 0.4858663275788161;
    msg.wave_peak_period_wind = 0.656575880440639;
    msg.wave_peak_period_swell = 0.34952114042833904;
    msg.wave_peak_direction_wind = 0.9603542153835777;
    msg.wave_peak_direction_swell = 0.042193861874354366;
    msg.wave_mean_direction = 0.37525785037868786;
    msg.wave_mean_period_tm02 = 0.5555886878307497;
    msg.wave_height_hmax = 0.395424924415414;
    msg.wave_height_crest = 0.9862357128011298;
    msg.wave_height_trough = 0.7330813213184343;
    msg.wave_period_tmax = 0.8607122422420006;
    msg.wave_period_tz = 0.5192715126346598;
    msg.significant_wave_height_h1_3 = 0.28693177178669127;
    msg.mean_spreading_angle = 0.13993324603458202;
    msg.first_order_spread = 0.22020619200239755;
    msg.long_crestedness_parameters = 0.9472903960881539;
    msg.heading = 0.38063843895523364;
    msg.pitch = 0.6292657989755917;
    msg.roll = 0.5743423722166631;
    msg.external_heading = 0.6895508569744135;
    msg.stdev_heading = 0.26193029980999727;
    msg.stdev_pitch = 0.3587671943993701;
    msg.stdev_roll = 0.5056793090838413;

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
    msg.setTimeStamp(0.572902828523931);
    msg.setSource(19446U);
    msg.setSourceEntity(144U);
    msg.setDestination(11688U);
    msg.setDestinationEntity(169U);
    msg.sig_wave_height_hm0 = 0.43528785778676626;
    msg.wave_peak_direction = 0.1644884211021882;
    msg.wave_peak_period = 0.9375703630039166;
    msg.wave_height_wind_hm0 = 0.0750121730686042;
    msg.wave_height_swell_hm0 = 0.26851951311071554;
    msg.wave_peak_period_wind = 0.8983658145131841;
    msg.wave_peak_period_swell = 0.963157669824713;
    msg.wave_peak_direction_wind = 0.3672411202201099;
    msg.wave_peak_direction_swell = 0.36167442353871115;
    msg.wave_mean_direction = 0.9340476455324955;
    msg.wave_mean_period_tm02 = 0.8159556181406216;
    msg.wave_height_hmax = 0.6859002860850649;
    msg.wave_height_crest = 0.5799620616890981;
    msg.wave_height_trough = 0.5483144701621;
    msg.wave_period_tmax = 0.6950465135506888;
    msg.wave_period_tz = 0.6225758777342041;
    msg.significant_wave_height_h1_3 = 0.8712762772829099;
    msg.mean_spreading_angle = 0.5229058549300769;
    msg.first_order_spread = 0.8327732550982718;
    msg.long_crestedness_parameters = 0.12545757918573497;
    msg.heading = 0.38649715304420496;
    msg.pitch = 0.46199338275635593;
    msg.roll = 0.4873841628204084;
    msg.external_heading = 0.3903117154541669;
    msg.stdev_heading = 0.7143777722648658;
    msg.stdev_pitch = 0.6923227497707742;
    msg.stdev_roll = 0.4625773855344065;

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
    msg.setTimeStamp(0.3107750030449774);
    msg.setSource(28096U);
    msg.setSourceEntity(141U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(1U);
    msg.sig_wave_height_hm0 = 0.5843464894559265;
    msg.wave_peak_direction = 0.2264950599501393;
    msg.wave_peak_period = 0.2121370591362205;
    msg.wave_height_wind_hm0 = 0.5496197816491682;
    msg.wave_height_swell_hm0 = 0.7668185174409582;
    msg.wave_peak_period_wind = 0.989165728026351;
    msg.wave_peak_period_swell = 0.27899982683822766;
    msg.wave_peak_direction_wind = 0.35029855634647034;
    msg.wave_peak_direction_swell = 0.5239586885454856;
    msg.wave_mean_direction = 0.666080719966062;
    msg.wave_mean_period_tm02 = 0.8546085103449458;
    msg.wave_height_hmax = 0.5392736054964936;
    msg.wave_height_crest = 0.8438877097562393;
    msg.wave_height_trough = 0.7370377732441568;
    msg.wave_period_tmax = 0.18944398690112718;
    msg.wave_period_tz = 0.4774157799594667;
    msg.significant_wave_height_h1_3 = 0.545673458674697;
    msg.mean_spreading_angle = 0.9555746730388012;
    msg.first_order_spread = 0.49303552127184747;
    msg.long_crestedness_parameters = 0.519269995252628;
    msg.heading = 0.8220399524716459;
    msg.pitch = 0.8080423078931458;
    msg.roll = 0.5283013451770757;
    msg.external_heading = 0.5530268737128169;
    msg.stdev_heading = 0.8120592151452195;
    msg.stdev_pitch = 0.001330776543765122;
    msg.stdev_roll = 0.06342689335639029;

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
    msg.setTimeStamp(0.9851421798209805);
    msg.setSource(44771U);
    msg.setSourceEntity(190U);
    msg.setDestination(31815U);
    msg.setDestinationEntity(131U);
    msg.name.assign("KHJBWZYPVSENHZOTMTRTQQFWYLYSRTOXDCGSJSFFMFPEMAYABOQQZZIOQVIVHACNHJWIBBEINYQSTZGJFGEYYWKWEPUWNURBOWXIAOXCDJDXELHVSSKTHSQAUEVSXKPLKLUKMUZAPRLUBRBIVWNPLJAJPBQHCFEQJUHEKZNPXRVMNCDTARZFRGUUXYFGT");
    msg.value = 4U;

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
    msg.setTimeStamp(0.18835214400201616);
    msg.setSource(25596U);
    msg.setSourceEntity(254U);
    msg.setDestination(3167U);
    msg.setDestinationEntity(112U);
    msg.name.assign("GCSJVBKMDREBQLAPTHJZQYBXNSWILMTDKBKSOEFRAEESMGXYYIKHMSNABQLDDUWEPYWPQUKHSKLYWHWIDBZEOQYLFNFDIRSLEGWMWXSNCKJLPJXPFIZTUEOHEAVXVTWRRYJTAACNBKPGOUIQXVULIRMSTVMHQFCOWZCCAGPONJJYCMJERULXMUKIXXNQFZHRFUVJBYZZDWL");
    msg.value = 118U;

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
    msg.setTimeStamp(0.6455075861183817);
    msg.setSource(25542U);
    msg.setSourceEntity(189U);
    msg.setDestination(38593U);
    msg.setDestinationEntity(125U);
    msg.name.assign("GSQLXAJHGTCXVEBJAEWVIHFCAGYIELVRJWGFXJHBYHCPHRDZUIDSFGZKPZOKKWQIWVGOJNXUBWGVNXZHBSIELLEJOQLVUTMQSOOAOJYYBTFDNLFBSYPYKYGPQDXTWDXWOOMETSXRFNLQMDYCNXXASHBRRSBTMZCKUWIQRYDETZPUGWCPGQUJTBZKHPASFIJMUFAII");
    msg.value = 179U;

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
    msg.setTimeStamp(0.7247981433130555);
    msg.setSource(2218U);
    msg.setSourceEntity(221U);
    msg.setDestination(23206U);
    msg.setDestinationEntity(152U);
    msg.name.assign("LAVCTTOYQQRWMMIUAVKBNXFDJVRIKBBLCLGGFUVSYDHVUXDZZFEGURZVHNNIOSCNTPJWWBRJHIBPXQPEJGDTMWXGPKAZOLOXSYPDAFAUHISKUQNPGYWVHUWFZRHWVSXKMUTTVQOJUWQRNYMOIAYCHTIRECCXDCZVETHDRZIXCTYDBGLKNFMOGMNBPPFJ");

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
    msg.setTimeStamp(0.616212714923951);
    msg.setSource(1282U);
    msg.setSourceEntity(169U);
    msg.setDestination(43459U);
    msg.setDestinationEntity(176U);
    msg.name.assign("XNCTEMLWFGKFBNGETVVTOPHWGPBSYXNZPUTALHRIGLWTHXKFVJGNDBUNTPCYCOKRKHQIRFYBIJKDSEQZMNDHDPPBRAHMQASUBWGPXBSKRPLWCJFSRWXUPIEEQQLUXOEMMZLVJFIROLMQDYKDYOIJDYQNTCCBMUMWADUJPTXSGGUUTKMVOCREASFCVUFQA");

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
    msg.setTimeStamp(0.002603909815181882);
    msg.setSource(40621U);
    msg.setSourceEntity(49U);
    msg.setDestination(64802U);
    msg.setDestinationEntity(51U);
    msg.name.assign("WOJMPOEHRMXYZWNVVMGSKBEOHRJUYHQCBJLIJZFCCGQEIYVUYWOKDLMFDUXNMTAORQKBKHZLPCDWTSDLQBAKTNLQDSGHCFGAXRZCZNRIUGHLKSIKXIVJWJEENMAUPPBSZDMOGWBTSCGAAXRJOFFVBPUFZABUGKLVRMJHFLFEJRPPUYIYWGTSSIQXMNYKEZEDKTQCAPFRGQUVFOLRYCYVEZTSAVITNHAXDJYDUW");

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
    msg.setTimeStamp(0.5609549545626934);
    msg.setSource(2707U);
    msg.setSourceEntity(181U);
    msg.setDestination(36085U);
    msg.setDestinationEntity(90U);
    msg.name.assign("KHUYUYLFIEYEYSXZZFJPACUWCZEMLJADNEKZFZMHQNSRVQJZIBGIUWTBUNXQAZKVRHWLLFFSOWQXJNJQPDSVVTRWMDTLLOEXTVOYDGFKFGUKZAILZMOKCBRJGRKDXBCBXXEAI");
    msg.value = 126U;

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
    msg.setTimeStamp(0.36534638465420977);
    msg.setSource(48793U);
    msg.setSourceEntity(99U);
    msg.setDestination(5787U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ONMSTZHPFRUIGFXCYVNUTRRZPANRJUDOEKVGHFQVEZHVDPKAEKJLBCTLTWIFOBIPMDOCDNOLNWEBDYQSTIUACIOFEHVAYYDQJNBIAQMAXAOEICAMQMJQRVBVKQWQGIHRLNIYLOAXWHCGZQDYMXGXKSZFRZTMSDYLBFSWPBTKUXBMNTWDXJELFGUVRHRTHMEWJKBCFKSFPECZLJRSHHXUAWXSVUGVUPWPPZI");
    msg.value = 203U;

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
    msg.setTimeStamp(0.22481722302423435);
    msg.setSource(41116U);
    msg.setSourceEntity(73U);
    msg.setDestination(23740U);
    msg.setDestinationEntity(59U);
    msg.name.assign("YLHKDASROSMKBIBZOBQSBPUEJKHPFRGAKJAJNWFFEXWCVOLIILFINDUOZKALJFXGXPTYGBWTYCMQBGLMRYECSYZMDKHZQNZUODCFKTDVDVIIPHLUBYAJJMPNLTNVNPITRQKGVJFXNRQATHGRWMWAOXVPMRXOVQHDZQGVUHQZYNTCXUXEGYJBWFRJLZMBUHSWDKEOOCTLLXWUZRRSXCEAFBNWSSHMVTAYQPSDPKGCIYTSCVDIECQAGZU");
    msg.value = 252U;

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
    msg.setTimeStamp(0.4663177125734652);
    msg.setSource(44337U);
    msg.setSourceEntity(85U);
    msg.setDestination(34506U);
    msg.setDestinationEntity(62U);
    msg.value = 0.1822257502254282;

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
    msg.setTimeStamp(0.6832624199652889);
    msg.setSource(45828U);
    msg.setSourceEntity(242U);
    msg.setDestination(19778U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5114151487553797;

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
    msg.setTimeStamp(0.26150072652503953);
    msg.setSource(37603U);
    msg.setSourceEntity(45U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(48U);
    msg.value = 0.4633493768054443;

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
    msg.setTimeStamp(0.9536967618849493);
    msg.setSource(9475U);
    msg.setSourceEntity(237U);
    msg.setDestination(58115U);
    msg.setDestinationEntity(190U);
    msg.value = 0.3213038774235587;

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
    msg.setTimeStamp(0.8815244590112056);
    msg.setSource(27014U);
    msg.setSourceEntity(99U);
    msg.setDestination(13186U);
    msg.setDestinationEntity(136U);
    msg.value = 0.4928068444390451;

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
    msg.setTimeStamp(0.11678233529998261);
    msg.setSource(6761U);
    msg.setSourceEntity(195U);
    msg.setDestination(38175U);
    msg.setDestinationEntity(229U);
    msg.value = 0.12928092379177436;

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
    msg.setTimeStamp(0.625683341645784);
    msg.setSource(16996U);
    msg.setSourceEntity(166U);
    msg.setDestination(38378U);
    msg.setDestinationEntity(72U);
    msg.value = 0.1390800966195892;

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
    msg.setTimeStamp(0.8404045135727064);
    msg.setSource(21013U);
    msg.setSourceEntity(224U);
    msg.setDestination(49445U);
    msg.setDestinationEntity(71U);
    msg.value = 0.13217457739924088;

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
    msg.setTimeStamp(0.7949717483771184);
    msg.setSource(28263U);
    msg.setSourceEntity(162U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(132U);
    msg.value = 0.05901280287254529;

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
    msg.setTimeStamp(0.7499455971931095);
    msg.setSource(30984U);
    msg.setSourceEntity(129U);
    msg.setDestination(44185U);
    msg.setDestinationEntity(64U);
    msg.restriction = 63U;
    msg.reason.assign("NWBGHBUYKZNDUSOYANFGSWHPGMLTLXVVHMUWVYCAECKDZNKJSIRBODLXFXINHHISPWMLVZAZEPPXKNSXGCEXICFONVRCOHCRGJVPBFWBJQITOFLQZNRMQBMESAYAJUWDHXPMSWCIBJZDCHCPSKFVEIRUUIDQ");

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
    msg.setTimeStamp(0.3223682528112767);
    msg.setSource(59158U);
    msg.setSourceEntity(250U);
    msg.setDestination(31539U);
    msg.setDestinationEntity(0U);
    msg.restriction = 110U;
    msg.reason.assign("BUQOKFUVDSQIBKGPUKBNFDPIBIOXHZNXCX");

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
    msg.setTimeStamp(0.8685556946080595);
    msg.setSource(6410U);
    msg.setSourceEntity(164U);
    msg.setDestination(60616U);
    msg.setDestinationEntity(161U);
    msg.restriction = 187U;
    msg.reason.assign("FNAGEFIGRLPXUWULGCLICKHNRSQRCUDNNGAINJYBDNQTJMVARBNEHPVMZEMKQUFLVLPFLFGSUYHRFECADWQOHKEXZSTBUPBZNYCTVTYHFXZBZWOXDMATTQRXCOODJLOYWSLJSPQQYDTXWWRSAGILXUTGJPVMWCIAYTJHMXHEUOKBGIJBSKKJNRIDKKAZBMPDLZKFVMITNYJGMOFVOOQPZSCCDWVHSBZYGAUHCDPIAXEFQXRMQPSUE");

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
    msg.setTimeStamp(0.562140056763133);
    msg.setSource(55251U);
    msg.setSourceEntity(183U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(18U);
    msg.op = 93U;
    msg.request_id = 3785257257U;
    msg.entity_name.assign("GVEHDUVZNXQLRYQELJMKHNQZKRKEEUAKKJJJVSDCLNPICKZXVRTFWSNESXZFUYOPMLKHZDCMQQQGUFBEGGUJGMOTLYODBIQURWFXYPAGWHAMBNITTAVYDTVBCRYWEPVLRAIPUJFDSSGCLMETF");

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
    msg.setTimeStamp(0.31227188441389264);
    msg.setSource(46938U);
    msg.setSourceEntity(116U);
    msg.setDestination(25367U);
    msg.setDestinationEntity(153U);
    msg.op = 246U;
    msg.request_id = 3687550599U;
    msg.entity_name.assign("IXPQOFHSZGFJWBGYOHQLWIFRAXHFMMJTRRPWGOIUYEPEVWQYZRFZZRDKDVUZVYTDOEWKCVCUWJVDZQSRHJTMHSNCOLNMTCRXGJFRGAPQLFPFBEMGOEGLKKZLTAVTVBAMZAJLXLBWHCUPMIKWOIAUDIEHTZQCKIVETCSSXCYBUJVKNPGQZPRIGTFCBNKDHIOJSFXYABHYCOHIXAEX");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("MAXUQBLAPJZUIRBCTYKPQXTMGYQJSTMGHSUJEAREUUPJGBAPMIMLKCWLVONZGYNDQOTPZFVVSTTDWCFRZTUWSFKBAVKNMK");
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.30416467374698175);
    msg.setSource(15144U);
    msg.setSourceEntity(33U);
    msg.setDestination(35530U);
    msg.setDestinationEntity(48U);
    msg.op = 220U;
    msg.request_id = 522380564U;
    msg.entity_name.assign("FRAQOCLWSELKTQTBTXXFYNUWBOHAMVGLWRYFDEEDYKCCLBIYCFNWNIFYSWNXDISBTBSLJXYEXIKXBWTITUVCSNCNTNUZGZDMOJXEKZEQYJUOPGAVOAZBAPYOVOUHGAGQJEHANVQLBYHTXPGDXUHQMRKPVEWQKRMVCLKJUMTQSHSRTRHGWEAZMYPKCKMVMPDFDOCXSFHZGMNSI");

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
    msg.setTimeStamp(0.8328375205287992);
    msg.setSource(61427U);
    msg.setSourceEntity(97U);
    msg.setDestination(29406U);
    msg.setDestinationEntity(141U);
    msg.name.assign("GCSBUZCSXLRARQBNYDKXNNYNSFMQWEPRJDWSZVZURASUWPIHWCQSCNXVYQYFGPIXVOWDRCEBPRDXAJNSHKMFOYBWJFGFTVDFHTFOCPYEBZIXPYUZVAQTQAIEZLGABTUPRDGEUJNHAJOUXVSRKLCKIVENJMFAPIWKTWIVLZZLIMOBYLFLYUJMBUTKOKHEKPIZXYZENQOMCWALLFHJMQNWMDHOMVTJGHTUXSHDK");
    msg.type = 215U;
    msg.default_value.assign("BTKSSQKVCURXXOYGMTJPJMMASZVOEHCZBOSDSNEWEYWSTQXQCNUPVEZJSPGXHLHRTKMVNRCVKLJBVQLIOTAEQQPPYJXDFRKTGYTAYBBBCLWYZFKONMFSUXOVWEIIRUNOCMZPNEBWYXDCPGYDFLQGIWLDTMFURDEYZFPQHQWZMVOHLFUNAFHJXTHPHNRJONAJOWDICKULKEGZBWVNAGUDRZLIYIRPCFH");
    msg.units.assign("ABQYLWGKFZDXHTVJGDAQPRJDQYGGRZQHMXNKUFOUCOXEWCHKZASAJIUJZRGRLFGAHQRZMAFPXPZWQBCISUETXUOIAATQNOKLDNCKYTIPWBOFFRKKCFCESMVNQYLCYVZSRLTOMXMMGSULVOHZUMIEJKHTVFOTYQEDGNVBTIJHQDNWE");
    msg.description.assign("BGPXPQIUDGVGTIIYDKLHPCDZCIRZSVBSSAFBOXPFNQNDGITTUDYOXWYSACIVLPHRJHCXCTJXJOMMHDLLKVPHNRZSKFMARQRZTABDURTHMEUWUWM");
    msg.values_list.assign("VXTSCHIGBUXN");
    msg.min_value = 0.08777838758757106;
    msg.max_value = 0.4602143408991608;
    msg.list_min_size = 207U;
    msg.list_max_size = 50U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("QWKGUHDPGETWNQFXGLLPDPXLSVTEYZWTVQCJTLXYSJYGODUOFHULRDFQJJYGDIRBRUMMUMK");
    tmp_msg_0.value.assign("NNWUUFKZFGUGYICDYQJNZIOSSMCMVDPKIXNAPXARDYHREFKHAHEMLPKCNERABDCLFJTCTYEPGXNAUAGILDKTZOLCMVKBHNREIXUJALQAWZOXGGMZDBVBBIZBLYIWJWHLBTFWVVYHJVKSQKNYMCRAIPUYGSWRESDEIBUPOZJSNWWFMHNTEOJQCTRU");
    tmp_msg_0.values_list.assign("QIJPXKATSQTEMYNUOWSRPYEVCNHA");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 53U;
    msg.scope = 63U;

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
    msg.setTimeStamp(0.5932098277444733);
    msg.setSource(32877U);
    msg.setSourceEntity(235U);
    msg.setDestination(9562U);
    msg.setDestinationEntity(81U);
    msg.name.assign("IDHROIMEKNVERISKWBREJZICMBKETVZLGWMJZFSFEXXLNEABBQZHWRYYDZWVWQUEWDTKAISBHQGXPXRBOMOJYXJDKWMUPDMGFXTTUJSFXFOFTZGUZYHULSKFNA");
    msg.type = 105U;
    msg.default_value.assign("XMTWTEKAQFQWSYXIUXJJBOEUEGTUXYQSFN");
    msg.units.assign("UAEJLLQFJKHKUPSNVDPMBDFDJQOSZOFPGICCFAALWJRRYYHOYQKLBQRKMOUBIPTEDYMSWVEVWCGSXDHEGXMYUZQYUHYUOSSNNHBDZRK");
    msg.description.assign("TRCXXAUSFUZATTHXXBPCSYDSWLNBPHDAFIZBGFJWUEJNKLDKKVCEGVCYQNPWLBLTPKMVWDVHYTLDNKZSPYGHKPLXRCLIRAKODU");
    msg.values_list.assign("XYRCVMLRHPMBEOFAPXBQPGVENIBYYUIWSBGKAPRLKDJETLBZWYCCLJHUXHHEHUPNWIOOJJFAKMDPCXLCDCDKXJVAZBEXALFPZTOVBZPWMLIOSVRCWZHGDS");
    msg.min_value = 0.46318761356038396;
    msg.max_value = 0.2250749167423437;
    msg.list_min_size = 165U;
    msg.list_max_size = 208U;
    msg.visibility = 138U;
    msg.scope = 183U;

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
    msg.setTimeStamp(0.5333340275787468);
    msg.setSource(33549U);
    msg.setSourceEntity(246U);
    msg.setDestination(19822U);
    msg.setDestinationEntity(24U);
    msg.name.assign("GWMAKKSNWIUDHSDMVFOMRSCVEPJLLGICQEWVMNPIOWNFYDQNJLZKJYTRDKFLWPDVAZYZEFXPDLHYIEJCFQNTGFBFBREPTIWHAZINCRCXRKVVOASZVYZJGBVACHUESOICSGDNSUYDHPVIMOQLOHTKHGBLFTXCZKRMXAQNWNSJXJYHJGFRTMORQPLZXGDMAXXXGCTW");
    msg.type = 224U;
    msg.default_value.assign("GYYLVUJKLLFEDGNGYGYBSMTFJAZSTCPGLSELMEJLPTJFEUKPLINRVHEEZXDSFEAISQJMHVTTRPKUXDYQICNOOPAMLRURUKSTQNBWGIGL");
    msg.units.assign("QVTLOEBLFAAUBSFCNFQOAOTOUEXHTRLGSCNIHNEKIKAPZNCTJOOGYQSAKCYTBDPXDPQBOXUKTXQAPVYHDGXEWHWHMXRPCVJIKDRXGWKPJMZCNMCUW");
    msg.description.assign("OSIDHYAEBQBKRRTHKFHABKMRBWOSCYUXYVOADWXCZEPDZJFNFQQUXTBKJNTEUICIKGMTYRWZDPTNPPCVGSERELIGXTYMVJOLVDCWUQSQZEBOMGCSQVDAILTGYWXLDNKNXVLYMPFPJZJQIOKRHOFYMYAHSIZIRQEWXXINWGQAIMGFJAKLNZFDFFNFD");
    msg.values_list.assign("CBHIXRGUWJSTEKKVCFRPTOVIJFWXLLGCFLMLFTKDODZKSPDEONSVPRPSDYYJINFCXURJAWBWPLVACOKHCPUONXTEAJZAEESBCDUHQYIVPAJTHIMZFYQISDAZQWZHOHUXYPOOGDOZNJNRPNQTQHGUIDRGWWCR");
    msg.min_value = 0.8124445873026641;
    msg.max_value = 0.9463864389580217;
    msg.list_min_size = 36U;
    msg.list_max_size = 120U;
    msg.visibility = 108U;
    msg.scope = 165U;

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
    msg.setTimeStamp(0.9354348760619181);
    msg.setSource(62033U);
    msg.setSourceEntity(198U);
    msg.setDestination(49665U);
    msg.setDestinationEntity(231U);
    msg.param.assign("CRQQDRYFNLPKMYYLGFAVQUHBKQCBRTUQNGHEAHEFDJOGHUSLSOQBOAXRVGEAIBGWZAHSYIZRMIPHDTIBLNRYGQSMPFBWUZBMVDYIKVDRIICPSPCSZLNTXTOFPXMMRDOFOVCMCKJLCAENFIFWDEXYZUKCTM");
    msg.value.assign("ZKFGPWVNNWXJATKTEWKRZCYSATEVVYATQZZGKSVJMVRDTDCUXJMUWREPAUTKWRSRPBZZBCIGBBCBXIQVZLNSDOGOUQBOTLFPYQHNPKRNQAODAEVLKXDHWIHZHHSWMNJSIUDVPMOU");
    msg.values_list.assign("DHPNHYJATUUPRPXIKDSIPOXVTHJRHA");

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
    msg.setTimeStamp(0.03495757769167207);
    msg.setSource(20438U);
    msg.setSourceEntity(235U);
    msg.setDestination(55431U);
    msg.setDestinationEntity(128U);
    msg.param.assign("EOSMVUDDIIQ");
    msg.value.assign("QYAZAYPDLSGZFOVGXKPCBUEKSTCXHVZXPUTESJVOUHRIVASLVHXOAZVSJIQUBBZKNBOBHJCLPZXYUDPFDWSBOYITREKZLJNDWNIEQPNEVGRQCWHQKMDHDFNGIHIXTBUGJGNMWTIFJLSMORIKVXQXAOEMYRYAQWXULZIBLKRMMXMGVHKUJPWPJBFPAPLHYJUQGALZYRRWTCGSFNCTTNDCYANUMOERFSQWEHLOCREWEFJADCWNIOKKCGSQZFTFY");
    msg.values_list.assign("YSSVJGPUUBDEOSQILHIOZYXFLNKKRMHRLJWZYRPMMBTPACM");

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
    msg.setTimeStamp(0.9527879484124281);
    msg.setSource(19161U);
    msg.setSourceEntity(35U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(49U);
    msg.param.assign("ULLTRSDAXDUYENRZWTBYIPESEYGYNJDLDIQJICXEROGKKMUGGQIVRTYAUIBTJOAZKRASHWNYZRVKFOENLISWBNUGUFXVQLBMTMXKYVQAUSUFZPCENJGXVDPCRBZFJRQCBDEEASSJIHWXLVFPLHMXZTWFPTYVNQIJHMTWJCMKVOOWJGPADOBQXRCGZVFQKEQKIBWXKNSDPKQMUA");
    msg.value.assign("DDTNTSITBQAHWAQRBFBDAIPGHQEUTNQPEOFPUJJSGQCIFPNVKVCSANQURZQKOFYAARWSVWBXTPLWMMUJQOWGGDEQEMTGXLNIYHDBOOLCKESGKFOYCFLPRLDYCFIMRROXVKICNKZXIXPITMGVOSADTOFCEXHLMZEZHUUSGSWKLHKJWYSRZKCKMWAXXMHVZRHYPNAYIEXXUVHYMCQJTNLJNGFDNWVPJLBBVTUPYSBYERZOWFIVZDCUZLDB");
    msg.values_list.assign("ICPBBNJXVPBFAQSEMBOQCROAILUYMYRDKXZJIPMSXCOOBNAFBTWRQTRCFTGDKESSOHLTYDZWNHLYVPPTMXCWJLTGLAQAQUGLKFUHFRKXMFJSUEIQWKEDWQAGHZCUUPNSE");

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
    msg.setTimeStamp(0.1415703729486265);
    msg.setSource(3622U);
    msg.setSourceEntity(205U);
    msg.setDestination(52674U);
    msg.setDestinationEntity(201U);
    msg.op = 106U;
    msg.version.assign("ENOMWUTVBIFFITYCDPMOMVRPVIXPCLRRHJYVTSOZEJRDUNQLGTFSQOYNNEEKZOCLFAAQNZGKLWUSBBJDKSCTVMSFJXZMFSZXXWDGUSKVWIUJSKEXRVATWLUKEJPWXGFRGHIYGJNMKDKIAQQ");
    msg.description.assign("YJEWZHXDEDSNOKDWFJNZRORHHXJWLIWEGFMYAGNILKEFVJAFUVZTIDNYGDQQPQSINDBYPEBMXMTLXLQDNPQMXTJAEHHHRIQJERMIONKQPDXOYMUXABWWDVAOCRYBKMETCCHUUWLLJSCVJGUTBVOZZTYCCJZHBGFRLFHPQMESASZZQV");

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
    msg.setTimeStamp(0.6461699395074492);
    msg.setSource(65320U);
    msg.setSourceEntity(84U);
    msg.setDestination(28014U);
    msg.setDestinationEntity(145U);
    msg.op = 69U;
    msg.version.assign("SHBNLUIPWZQYFKNMKWPUVXGWBNSCBZTFXUINUJJGLDTJGKHBDBPNFDVPCQDH");
    msg.description.assign("RXHWQFJDPGEFLEZJYWFTUKWOIMSCTABLCOUDXUBESAZCBNDGQQENPKIOFSIKXUOKOADH");

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
    msg.setTimeStamp(0.8219450767723906);
    msg.setSource(34564U);
    msg.setSourceEntity(131U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(54U);
    msg.op = 22U;
    msg.version.assign("OLJXEVRXTINTEDFOZSHMKNHNFUBZNTRJCGSGTMBIOXXAZPUWPMBZHIYPFFZHRVRRKYNZKYAILKDAFERUGKVBDS");
    msg.description.assign("EALRTWLBECGBDNHYUOTRAZOZBEWPEFGQBGXYCUGQZRTUZVQIFVOJKMTKEMWRGIJZSCQMAMVNMBJWROXJLJPAQCNXDMNDONUSXDPMALYTFBEGFZ");

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
    msg.setTimeStamp(0.43007147061459683);
    msg.setSource(26445U);
    msg.setSourceEntity(133U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(230U);
    msg.value = 0.2923785654404658;

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
    msg.setTimeStamp(0.9768329345854561);
    msg.setSource(38380U);
    msg.setSourceEntity(216U);
    msg.setDestination(29429U);
    msg.setDestinationEntity(190U);
    msg.value = 0.2975333154187807;

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
    msg.setTimeStamp(0.44106421305345667);
    msg.setSource(30463U);
    msg.setSourceEntity(70U);
    msg.setDestination(11768U);
    msg.setDestinationEntity(79U);
    msg.value = 0.06243422151975697;

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
    msg.setTimeStamp(0.8381302601397085);
    msg.setSource(16937U);
    msg.setSourceEntity(142U);
    msg.setDestination(41451U);
    msg.setDestinationEntity(42U);
    msg.value.assign("SBHWQXYBCCSTRKHHHNYJN");

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
    msg.setTimeStamp(0.23437011019048692);
    msg.setSource(18123U);
    msg.setSourceEntity(63U);
    msg.setDestination(37667U);
    msg.setDestinationEntity(104U);
    msg.value.assign("SHGEZJYEXFIZTZNYAQXNJQXJWVQWQNVFFQWJCPOIVOUNUSLIGAUPSLSZK");

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
    msg.setTimeStamp(0.6665642942449334);
    msg.setSource(23892U);
    msg.setSourceEntity(81U);
    msg.setDestination(5158U);
    msg.setDestinationEntity(170U);
    msg.value.assign("NZJTZRVZPZZSWRSHNFLGFIECSHWOGHRYICLTCCVSWDTCRTVEDLCHDTAOKJTLXIJFVVBIUVMPJWSMBIMWWIRQGNHZQIXZDNASNOGVSMXXYURDNLMBQIAGNRKLXDLBDTWGCEEPTYLYWBOUAZFNUVUBIFMBMDFMPYKDPCAPQWQUKKJVFOUKWGHNLARLFQKGPUACHVSSXZUO");

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
