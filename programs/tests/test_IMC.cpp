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
// IMC XML MD5: 88e6b34d1e617fc91a264459c6e3429d                            *
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
    msg.setTimeStamp(0.235159748711);
    msg.setSource(2749U);
    msg.setSourceEntity(36U);
    msg.setDestination(8158U);
    msg.setDestinationEntity(145U);
    msg.state = 51U;
    msg.flags = 71U;
    msg.description.assign("XNZPXNLXJVBASPKVQYSZTDVEGNMIZKJAEDSABMRZJLQGQPAVIGYWUYAJOSVDCSKKYRPBXYFFLWRJEWGIYWXUZHZIABPYICHMEUVMKUKLUETJQWBOIYWGQQPP");

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
    msg.setTimeStamp(0.148434379943);
    msg.setSource(4738U);
    msg.setSourceEntity(122U);
    msg.setDestination(64166U);
    msg.setDestinationEntity(192U);
    msg.state = 194U;
    msg.flags = 31U;
    msg.description.assign("PIDDXMVWCHMDIQJHEPPEVVGYGOKLWQHPWCGQLIRPUVYJKDWCYTYGNAEDPRSVFBMBEUGTTFELQFMUTWDOMVBYXDJOKQMOKDGPUAFZFAXAZIZGUKZJXYCOEXOZQDXSSWNPEZHIIRYTASLRBVCHXLBHOGFUGBRDNONLHXCUGAZWQJLRPULTRVNT");

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
    msg.setTimeStamp(0.769736447555);
    msg.setSource(55403U);
    msg.setSourceEntity(174U);
    msg.setDestination(26487U);
    msg.setDestinationEntity(201U);
    msg.state = 137U;
    msg.flags = 245U;
    msg.description.assign("MBMHDPDYHTRQGQSKYTIPOAEVTEPQGIVLOWEJJIYVNOZEWFBFUVDJXYABLZNCBWXHVRONBY");

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
    msg.setTimeStamp(0.658694214737);
    msg.setSource(29038U);
    msg.setSourceEntity(242U);
    msg.setDestination(38097U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.285300464824);
    msg.setSource(50576U);
    msg.setSourceEntity(47U);
    msg.setDestination(53306U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.998155133479);
    msg.setSource(14437U);
    msg.setSourceEntity(237U);
    msg.setDestination(57183U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.958369541162);
    msg.setSource(28824U);
    msg.setSourceEntity(217U);
    msg.setDestination(14434U);
    msg.setDestinationEntity(33U);
    msg.id = 76U;
    msg.label.assign("XAASXBBTMEPINVCSLWRHUZDG");
    msg.component.assign("DJHPHRYBKDJHYEAREYYYMGVPCUPWKWGQGOTZWPEDOAXYTLKYNWBUZZDGFSGNAHCBYBSHIOWTJNPVLRJDKZZNMXILQFFBOTLPSEIQHCTEGXMHHSMXBIDSRZQMXLCWIACKKVGWXIUGRYWFBFZXZ");
    msg.act_time = 50769U;
    msg.deact_time = 58805U;

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
    msg.setTimeStamp(0.586972924798);
    msg.setSource(33107U);
    msg.setSourceEntity(14U);
    msg.setDestination(28948U);
    msg.setDestinationEntity(251U);
    msg.id = 122U;
    msg.label.assign("LOXYZWYBLUPKEMNRFZQTNDTUKCIJKNHZAIKQVZHGUPMXOLDZCAQSQDMLWAWTTGWWESMWIIBBYIIJQFQSS");
    msg.component.assign("VWZFACALTNPQQGHEBGJJPEIKDGDZR");
    msg.act_time = 56194U;
    msg.deact_time = 31979U;

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
    msg.setTimeStamp(0.122299704817);
    msg.setSource(30210U);
    msg.setSourceEntity(124U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(12U);
    msg.id = 191U;
    msg.label.assign("XEJKAXOMVTEMMCZMWAKJ");
    msg.component.assign("TRPFVHIDERUGCAPZWXMKFCONKJHFGAZHKLKKAQEMVV");
    msg.act_time = 2057U;
    msg.deact_time = 24843U;

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
    msg.setTimeStamp(0.646009662229);
    msg.setSource(20186U);
    msg.setSourceEntity(83U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(66U);
    msg.id = 233U;

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
    msg.setTimeStamp(0.314483671057);
    msg.setSource(52824U);
    msg.setSourceEntity(43U);
    msg.setDestination(61831U);
    msg.setDestinationEntity(168U);
    msg.id = 112U;

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
    msg.setTimeStamp(0.468161365524);
    msg.setSource(3987U);
    msg.setSourceEntity(233U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(215U);
    msg.id = 180U;

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
    msg.setTimeStamp(0.532123142049);
    msg.setSource(15976U);
    msg.setSourceEntity(107U);
    msg.setDestination(30592U);
    msg.setDestinationEntity(101U);
    msg.op = 240U;
    msg.list.assign("FKNIKZJBZMDNOFXVOWOUHENVSBMMWAWCTYSPRJVIUKMLPSECXPYUVLTQROEOYJXLUHATINVSSVFQHVKCAIEGOQWADX");

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
    msg.setTimeStamp(0.00850094351867);
    msg.setSource(3602U);
    msg.setSourceEntity(151U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(208U);
    msg.op = 209U;
    msg.list.assign("HQKUXYJZTVSUQVBDRMTYQBVJGLJOTPCZFNVMXTMHJSXZOE");

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
    msg.setTimeStamp(0.531403515575);
    msg.setSource(25180U);
    msg.setSourceEntity(12U);
    msg.setDestination(39664U);
    msg.setDestinationEntity(120U);
    msg.op = 69U;
    msg.list.assign("IEYJOAMQKSCYKWTECLSIFWJONHJGKICLVNFFNMKZL");

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
    msg.setTimeStamp(0.350580308024);
    msg.setSource(26535U);
    msg.setSourceEntity(153U);
    msg.setDestination(61030U);
    msg.setDestinationEntity(101U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.316097503297);
    msg.setSource(50632U);
    msg.setSourceEntity(209U);
    msg.setDestination(40126U);
    msg.setDestinationEntity(159U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.118281685594);
    msg.setSource(38664U);
    msg.setSourceEntity(204U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(171U);
    msg.value = 186U;

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
    msg.setTimeStamp(0.389491574493);
    msg.setSource(32560U);
    msg.setSourceEntity(42U);
    msg.setDestination(4838U);
    msg.setDestinationEntity(185U);
    msg.consumer.assign("LLDQNPXNMFLMXWZOTNUDBUPTQYPXESZVBATDLBCOOAFCMXNYVNU");
    msg.message_id = 49730U;

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
    msg.setTimeStamp(0.479400485846);
    msg.setSource(17828U);
    msg.setSourceEntity(38U);
    msg.setDestination(30619U);
    msg.setDestinationEntity(73U);
    msg.consumer.assign("OENSDUGXTPIRPTAMQDVRBVLUVNWKIEISMLFGEDYEUDWEMSYOZNCCETDZWXASGKOHLVZLLERMSRNCHJTQ");
    msg.message_id = 44710U;

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
    msg.setTimeStamp(0.0674520228233);
    msg.setSource(58588U);
    msg.setSourceEntity(252U);
    msg.setDestination(33768U);
    msg.setDestinationEntity(230U);
    msg.consumer.assign("JWCERYVJWKOPLKVNSQARPWQDOQRXUYNNZBTJZTPBMIHKFABPHOUDFRUWVURWEIJVDIWIKXIALUXUOJFXBJMYVBCULNONRXJPXXQXTKNLYCUJEFNQGCSHFXWYAQMIADKHMQHXKTRQIIPSOMGWHFNERSWOL");
    msg.message_id = 8139U;

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
    msg.setTimeStamp(0.70093355168);
    msg.setSource(58437U);
    msg.setSourceEntity(85U);
    msg.setDestination(34034U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.788878137948);
    msg.setSource(28890U);
    msg.setSourceEntity(42U);
    msg.setDestination(13974U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.283631499121);
    msg.setSource(39850U);
    msg.setSourceEntity(164U);
    msg.setDestination(17842U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.180012102688);
    msg.setSource(47626U);
    msg.setSourceEntity(83U);
    msg.setDestination(60994U);
    msg.setDestinationEntity(210U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.567776354764);
    msg.setSource(33119U);
    msg.setSourceEntity(144U);
    msg.setDestination(7934U);
    msg.setDestinationEntity(16U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.108382835337);
    msg.setSource(10213U);
    msg.setSourceEntity(242U);
    msg.setDestination(64434U);
    msg.setDestinationEntity(183U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.744492115796);
    msg.setSource(37195U);
    msg.setSourceEntity(60U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(205U);
    msg.total_steps = 190U;
    msg.step_number = 109U;
    msg.step.assign("FPNDTPBHXKWDMKBRURXSQJGBVWEQVNBNSCULDGOSQFTLJVNEQWYRJTVGNCCGUOQSSFNEAHJKXPTPYCCHNFIFYLZMZZERAYMLODIYUCVIEBIMOXZDSKKXWXHKBTAVJLAAGAZGMRTYGIWTJPDFTRXWWZLNKPXB");
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
    msg.setTimeStamp(0.91041492668);
    msg.setSource(15152U);
    msg.setSourceEntity(128U);
    msg.setDestination(38679U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 5U;
    msg.step_number = 214U;
    msg.step.assign("MYXNRLVZCSCJTRBAHUIXFMFQTXNHSICTYFATBSQNXDGYUIRGLLNMWMLVPBEADLGIOYDWNENRTDZECUTLGOPVKFRJVJLXCSEQUHXQWVZGGMKGJPDJCSDVBEHUMCYZGWBWJTCRFKWBYUFIFXBAYJYXETPINRHESFQWODZOOPEHSQQIL");
    msg.flags = 110U;

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
    msg.setTimeStamp(0.618130218625);
    msg.setSource(43519U);
    msg.setSourceEntity(220U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(105U);
    msg.total_steps = 19U;
    msg.step_number = 234U;
    msg.step.assign("IMDRCPWUAPZINDLYICYSXHRAADWMOWZWNPGJVROKDXMHJLTRICGLNLZEQNRQHCYBVQUZJNDRJAVHZJXBKOTYSEIUQDSJZAOUGLMFALQ");
    msg.flags = 59U;

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
    msg.setTimeStamp(0.486433210997);
    msg.setSource(12562U);
    msg.setSourceEntity(150U);
    msg.setDestination(22398U);
    msg.setDestinationEntity(52U);
    msg.state = 226U;
    msg.error.assign("ERMRAZAESHFTYXYENEOQWUDWFBSUHHXDNXROXFGRLPGTYFRKDIYZSBIQCUNLHKFOMDBMZLYGCSIAZBPRV");

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
    msg.setTimeStamp(0.990452613521);
    msg.setSource(48107U);
    msg.setSourceEntity(40U);
    msg.setDestination(8670U);
    msg.setDestinationEntity(137U);
    msg.state = 121U;
    msg.error.assign("IISBJAYMBLMHWHCDFBTIJJXHOVSFBVPGWQZTKTLZYQOQNRPRKTKKVDETNZAWZLCYVYYIHXBGDOZOPQQSSVODEPNVUEUNXLWEEQRPJESYJAKADWJRYFIWLMIOIWSGEPLCFFJDCSHKGGZAZLUPRQSAYUEKXZNARXHZKWABWTUMVCTNQGCFRXLOFTKOUHDMIUGHCMJMMCUDBSDXRFVMJZUGQMWCXNYDTA");

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
    msg.setTimeStamp(0.426392140354);
    msg.setSource(30196U);
    msg.setSourceEntity(180U);
    msg.setDestination(22650U);
    msg.setDestinationEntity(96U);
    msg.state = 8U;
    msg.error.assign("OJBEZJKDSPQTQBMTYVHAENGABQKNEVLDOGYNATGANWJPVMIIHLJGRVZFMRQSFJDOHCTFGMEZSYCMWJLLR");

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
    msg.setTimeStamp(0.239862649396);
    msg.setSource(62017U);
    msg.setSourceEntity(53U);
    msg.setDestination(31675U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.997867666264);
    msg.setSource(19070U);
    msg.setSourceEntity(242U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.893408083612);
    msg.setSource(2U);
    msg.setSourceEntity(26U);
    msg.setDestination(26910U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.0672548835153);
    msg.setSource(33230U);
    msg.setSourceEntity(92U);
    msg.setDestination(30598U);
    msg.setDestinationEntity(136U);
    msg.op = 202U;
    msg.speed_min = 0.100834900326;
    msg.speed_max = 0.450992134283;
    msg.long_accel = 0.410389182618;
    msg.alt_max_msl = 0.402042856074;
    msg.dive_fraction_max = 0.208204529327;
    msg.climb_fraction_max = 0.638412401121;
    msg.bank_max = 0.62030674019;
    msg.p_max = 0.36881387042;
    msg.pitch_min = 0.571865883038;
    msg.pitch_max = 0.793735897823;
    msg.q_max = 0.716372145767;
    msg.g_min = 0.0833340358318;
    msg.g_max = 0.40363457018;
    msg.g_lat_max = 0.388007526453;
    msg.rpm_min = 0.227200538112;
    msg.rpm_max = 0.924995536542;
    msg.rpm_rate_max = 0.124979161119;

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
    msg.setTimeStamp(0.145552329908);
    msg.setSource(27063U);
    msg.setSourceEntity(183U);
    msg.setDestination(31810U);
    msg.setDestinationEntity(65U);
    msg.op = 3U;
    msg.speed_min = 0.667018100452;
    msg.speed_max = 0.742207409584;
    msg.long_accel = 0.827873831909;
    msg.alt_max_msl = 0.699103978754;
    msg.dive_fraction_max = 0.868616706032;
    msg.climb_fraction_max = 0.726193591318;
    msg.bank_max = 0.93189559166;
    msg.p_max = 0.0979299365645;
    msg.pitch_min = 0.123394579604;
    msg.pitch_max = 0.509837488721;
    msg.q_max = 0.641107623226;
    msg.g_min = 0.365455848594;
    msg.g_max = 0.981802976732;
    msg.g_lat_max = 0.593619573324;
    msg.rpm_min = 0.92580676615;
    msg.rpm_max = 0.282270632141;
    msg.rpm_rate_max = 0.461974392634;

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
    msg.setTimeStamp(0.342195008045);
    msg.setSource(47521U);
    msg.setSourceEntity(31U);
    msg.setDestination(27688U);
    msg.setDestinationEntity(126U);
    msg.op = 240U;
    msg.speed_min = 0.212623275699;
    msg.speed_max = 0.215681812842;
    msg.long_accel = 0.046405489231;
    msg.alt_max_msl = 0.610515383072;
    msg.dive_fraction_max = 0.224166394918;
    msg.climb_fraction_max = 0.804782691161;
    msg.bank_max = 0.314770624152;
    msg.p_max = 0.611225545474;
    msg.pitch_min = 0.766744362563;
    msg.pitch_max = 0.186037147063;
    msg.q_max = 0.273382826509;
    msg.g_min = 0.634399628107;
    msg.g_max = 0.245640598076;
    msg.g_lat_max = 0.256948341922;
    msg.rpm_min = 0.837148352273;
    msg.rpm_max = 0.0330109620933;
    msg.rpm_rate_max = 0.238236685909;

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
    msg.setTimeStamp(0.783054265544);
    msg.setSource(27356U);
    msg.setSourceEntity(153U);
    msg.setDestination(3475U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.719727136299);
    msg.setSource(48491U);
    msg.setSourceEntity(194U);
    msg.setDestination(34414U);
    msg.setDestinationEntity(245U);
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.573569516265;
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
    msg.setTimeStamp(0.89051447179);
    msg.setSource(13673U);
    msg.setSourceEntity(34U);
    msg.setDestination(39714U);
    msg.setDestinationEntity(76U);
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 114U;
    tmp_msg_0.x = 31229U;
    tmp_msg_0.y = 60198U;
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
    msg.setTimeStamp(0.434278326402);
    msg.setSource(30780U);
    msg.setSourceEntity(17U);
    msg.setDestination(42591U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.23312489243;
    msg.lon = 0.323930836202;
    msg.height = 0.704860044432;
    msg.x = 0.548521226235;
    msg.y = 0.778073085747;
    msg.z = 0.320375993379;
    msg.phi = 0.801874714635;
    msg.theta = 0.233806588893;
    msg.psi = 0.172311588471;
    msg.u = 0.177691039142;
    msg.v = 0.700335420389;
    msg.w = 0.760036904586;
    msg.p = 0.158192238177;
    msg.q = 0.186437092313;
    msg.r = 0.268335012785;
    msg.svx = 0.549687045182;
    msg.svy = 0.149986579385;
    msg.svz = 0.722204272648;

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
    msg.setTimeStamp(0.934357657628);
    msg.setSource(11549U);
    msg.setSourceEntity(127U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.945827508828;
    msg.lon = 0.241303063471;
    msg.height = 0.1378614945;
    msg.x = 0.648745486831;
    msg.y = 0.885730819318;
    msg.z = 0.0429838873474;
    msg.phi = 0.124445382293;
    msg.theta = 0.707188568066;
    msg.psi = 0.337713114039;
    msg.u = 0.340591190099;
    msg.v = 0.830686103631;
    msg.w = 0.860872437557;
    msg.p = 0.807848801884;
    msg.q = 0.932447549185;
    msg.r = 0.660284764962;
    msg.svx = 0.983554536877;
    msg.svy = 0.44613694742;
    msg.svz = 0.254010411909;

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
    msg.setTimeStamp(0.975028843399);
    msg.setSource(27395U);
    msg.setSourceEntity(169U);
    msg.setDestination(23104U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.21719265016;
    msg.lon = 0.321154688566;
    msg.height = 0.548674548755;
    msg.x = 0.441612662659;
    msg.y = 0.0246171029695;
    msg.z = 0.848519918924;
    msg.phi = 0.102627083768;
    msg.theta = 0.434749585863;
    msg.psi = 0.993544613943;
    msg.u = 0.125408648031;
    msg.v = 0.375876236798;
    msg.w = 0.0899854368347;
    msg.p = 0.085647140778;
    msg.q = 0.682494450345;
    msg.r = 0.608297950784;
    msg.svx = 0.0755619004788;
    msg.svy = 0.861837363995;
    msg.svz = 0.636593979074;

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
    msg.setTimeStamp(0.452747549407);
    msg.setSource(22415U);
    msg.setSourceEntity(217U);
    msg.setDestination(14611U);
    msg.setDestinationEntity(194U);
    msg.op = 160U;
    msg.entities.assign("VGTIYFCKOATJXCGTSECEMGXEGNGZFELZVFSICPAZYRPBWQAMUXAQKYJZPVUTXKBLYBRGSBODAQUIFREAKETSBUSTHJBWNQBUENUGCDVXVXKWRHIWHBNNSTINAQHOUEWXORJS");

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
    msg.setTimeStamp(0.246199159528);
    msg.setSource(11347U);
    msg.setSourceEntity(68U);
    msg.setDestination(30006U);
    msg.setDestinationEntity(4U);
    msg.op = 209U;
    msg.entities.assign("AQNWVNGKLBRVGTJEXEWTOEQBAHCOHLDGGUXWONIMTKCJHTSXCFYIWYOJMVZYAHQPGWSXMTNKXBCQXHZCHQPOHNZKVLLASYLTADGFRFTFVSK");

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
    msg.setTimeStamp(0.427668618768);
    msg.setSource(8747U);
    msg.setSourceEntity(40U);
    msg.setDestination(60615U);
    msg.setDestinationEntity(122U);
    msg.op = 154U;
    msg.entities.assign("PVAQCBBWVNHVDHZNXNIYAAPKTDZMMSEUEMKWPVNZEOHRZZQMDODCLLSWTEAVIZWDBEIQFLMRSR");

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
    msg.setTimeStamp(0.258635098827);
    msg.setSource(55889U);
    msg.setSourceEntity(176U);
    msg.setDestination(16918U);
    msg.setDestinationEntity(35U);
    msg.type = 161U;
    msg.speed = 8658U;
    const char tmp_msg_0[] = {10, 43, 97, 57, 62, -71, 122, 55, 51, -42, -92, -70, 108, -128, -49, -42, -99, -121, 86, 43, 52, -82, -124, -55, -62, -32, -1, -75, 6, -44, 45, -5, 52, -8, 14, -18, -111, -102, -75, 3, 121, 14, -114, 77, -30, 88, -4, -59, -68, 65, 2, 121, -57, -32, -113, -27, -61, 66, 85, -79, 42, -91, -56, 15, 7, -79, -87, 62, 21, 0, -7, -72, 57, 16, -52, 120, 118, -102, 78, -54, 42, -92, -114, 126, 122, 86, 100, -101, -78, 110, 104, 66, 76, 24, -122, 21, 23, 107, 102, 75, 84, -116, -102, -19, -66};
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
    msg.setTimeStamp(0.0151553890225);
    msg.setSource(22923U);
    msg.setSourceEntity(231U);
    msg.setDestination(41391U);
    msg.setDestinationEntity(78U);
    msg.type = 44U;
    msg.speed = 13897U;
    const char tmp_msg_0[] = {-117, -111, -107, 115, 25, 68, -16, -126, 46, -102, 26, 28, 121, 59, -110, 120, -40, -15, 40, 107, 14, 56, -20, 32, 88, 85, -125, -77, 69, -24, 41, -119, -127, 16, -37, -5, -25, -53, -81, -108, 107, 35, -102, -66};
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
    msg.setTimeStamp(0.250036716298);
    msg.setSource(23825U);
    msg.setSourceEntity(232U);
    msg.setDestination(43741U);
    msg.setDestinationEntity(181U);
    msg.type = 107U;
    msg.speed = 19784U;
    const char tmp_msg_0[] = {6, 104, -9, 91, 99, 11, -41, -3, 118, -100, 56, 116, -91, 120, 25, -122, 2, -35, -92, 4, -13, 38, 119, -65};
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
    msg.setTimeStamp(0.22985995804);
    msg.setSource(46920U);
    msg.setSourceEntity(213U);
    msg.setDestination(11715U);
    msg.setDestinationEntity(172U);
    msg.op = 103U;
    msg.tas2acc_pgain = 0.832341241064;
    msg.bank2p_pgain = 0.987786653494;

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
    msg.setTimeStamp(0.867725591863);
    msg.setSource(13060U);
    msg.setSourceEntity(74U);
    msg.setDestination(3210U);
    msg.setDestinationEntity(110U);
    msg.op = 229U;
    msg.tas2acc_pgain = 0.93692587831;
    msg.bank2p_pgain = 0.161986421748;

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
    msg.setTimeStamp(0.777643762822);
    msg.setSource(14687U);
    msg.setSourceEntity(203U);
    msg.setDestination(41829U);
    msg.setDestinationEntity(144U);
    msg.op = 142U;
    msg.tas2acc_pgain = 0.0466206069256;
    msg.bank2p_pgain = 0.145589497673;

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
    msg.setTimeStamp(0.304860018138);
    msg.setSource(46300U);
    msg.setSourceEntity(117U);
    msg.setDestination(34552U);
    msg.setDestinationEntity(41U);
    msg.available = 546975235U;
    msg.value = 113U;

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
    msg.setTimeStamp(0.107676831073);
    msg.setSource(3490U);
    msg.setSourceEntity(20U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(81U);
    msg.available = 979014201U;
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
    msg.setTimeStamp(0.170920255862);
    msg.setSource(15399U);
    msg.setSourceEntity(146U);
    msg.setDestination(45415U);
    msg.setDestinationEntity(199U);
    msg.available = 3338775281U;
    msg.value = 37U;

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
    msg.setTimeStamp(0.144907727301);
    msg.setSource(13599U);
    msg.setSourceEntity(250U);
    msg.setDestination(33842U);
    msg.setDestinationEntity(172U);
    msg.op = 56U;
    msg.snapshot.assign("VBMCJUCKNNPUVATBWJVUTCXOHERDSYNEWFWANLOGMVUZIWBVKOSLAZWGIXUQXZACXGLMNROFDZPFUSWMRLBSETFQCJIQNRUPESCLLFPPQZKNTCEKYGNNAMRIFJXQDKYDLGIOUVQLBCEMKABMZUKJMQGRYHRHWHXIOIAQDPCSXTBTYSDJDTBMPWJOECADW");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.0329950588076;
    tmp_msg_0.lon = 0.847704611687;
    tmp_msg_0.speed = 0.245668424761;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.duration = 20153U;
    tmp_msg_0.sys_a = 24620U;
    tmp_msg_0.sys_b = 51444U;
    tmp_msg_0.move_threshold = 0.142439364082;
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
    msg.setTimeStamp(0.601311160243);
    msg.setSource(1071U);
    msg.setSourceEntity(244U);
    msg.setDestination(64405U);
    msg.setDestinationEntity(170U);
    msg.op = 55U;
    msg.snapshot.assign("FLEKGNDBOVVBIHIYMYSPIAILVXEXQQACWKCTDFNLFNDZSZUDFRTAITZAGMHXDQHSWNVFHPUXTZMSTAMNMPVFWYFPUXAJRLMYYJENGOYKLKBXJRCNEVJFWIERKANRNUGSMEGKOQMWSWFBCEKQHDRJLTRROPTAHMKCUSRVUGWLOUFC");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 182U;
    tmp_msg_0.period = 1536172486U;
    tmp_msg_0.duty_cycle = 2065839887U;
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
    msg.setTimeStamp(0.958957833945);
    msg.setSource(27322U);
    msg.setSourceEntity(97U);
    msg.setDestination(26140U);
    msg.setDestinationEntity(152U);
    msg.op = 12U;
    msg.snapshot.assign("SAEOUIZTHMTXLDQHYRHGCEGGWMNHVPPACDXDULKVHIFCIUWIHQOOIQNVUGXKBCQBNEFFEVADDSCTJEJQRFVOABQBPMUWWOLTZYJMLUZOEIRATFBEWIDXDKYJDCRSRZIJVLPXQLUCJTRP");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 205U;
    tmp_msg_0.period = 1557958371U;
    tmp_msg_0.duty_cycle = 2849738262U;
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
    msg.setTimeStamp(0.121124520004);
    msg.setSource(10252U);
    msg.setSourceEntity(59U);
    msg.setDestination(62392U);
    msg.setDestinationEntity(9U);
    msg.op = 185U;
    msg.name.assign("TNICFFIAPSSOGCNUDPHDDBXQJIHFJNZMVVQOUAFYFNZGECMTEOAURTWYWBTDRCBOIZJYPALGYLCLWIADYVCYFHMEBMKMIFOHVJGDEALAXBTEUNSIAJRCUVZLWREYLSMPVZEOPWGAIXWTSZVWUUQLGMHXQHFDBYKEMETHRQVNXXUUQFCKHJDPGRBZKDGXJZCMIBWSKCUOQSBZOXS");

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
    msg.setTimeStamp(0.550583074811);
    msg.setSource(31066U);
    msg.setSourceEntity(34U);
    msg.setDestination(35407U);
    msg.setDestinationEntity(254U);
    msg.op = 182U;
    msg.name.assign("UQSMEJSLOAICLXMGRSKITCNZRMENLAAGDWSVGHDEXWOIIQLXNOVRLBECWX");

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
    msg.setTimeStamp(0.550930419827);
    msg.setSource(50452U);
    msg.setSourceEntity(52U);
    msg.setDestination(24151U);
    msg.setDestinationEntity(131U);
    msg.op = 131U;
    msg.name.assign("IQAGNBPJJLOMKLJLDCRTTGULRRCVVJEAXEQHOWJOPGKFYNCDEYLIGDZESRTVOCGRSHTXMVACWJDNZQDYIGXSPFHHRKYMUESGRVCLSCQWXAPUFXZSIHSXPLBPCBBF");

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
    msg.setTimeStamp(0.669512233286);
    msg.setSource(38984U);
    msg.setSourceEntity(115U);
    msg.setDestination(8820U);
    msg.setDestinationEntity(199U);
    msg.type = 45U;
    msg.htime = 0.832035356706;
    msg.context.assign("ZQVSYOBGDCSOVLCTRGCLVFOCK");
    msg.text.assign("JENHGJFUILYWLUGPKXOQXAJABPPDXPXNNMTSTEIISURQKESFWMSWVQHYEGMCVCIRBGWMISWZZWCSROVVSUJFEMBUJLCIJTYQXHVKIYXFGGEHVHQBWQEKEOKHAYQRLLBJMGSDPCURGZOHKKRVAM");

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
    msg.setTimeStamp(0.67090584246);
    msg.setSource(49813U);
    msg.setSourceEntity(230U);
    msg.setDestination(23147U);
    msg.setDestinationEntity(50U);
    msg.type = 101U;
    msg.htime = 0.301377751801;
    msg.context.assign("SGGWEKFAWYUHRKCEYREUBBYFGAMRKEWVIPMNBGCRDEVEFOTDXIZALPLZKAZYMHIASMYDUIUFHOLQZUGQCRZOLVHWRNRKSPAXODJTXCNLMCVSJHJZZPOQIJACMBTGHXLONGPUHDDAJUHWBKXVICITWMATQAZIPUKFFYXYBXFVIBPZNMNBMQSDLVXBGUJECREFBFSMTJNCEWQTUHSTVLOO");
    msg.text.assign("MCABYQBJLAGYPZIWPYFXWWNMNSLEAYKLAMNML");

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
    msg.setTimeStamp(0.206317223898);
    msg.setSource(39322U);
    msg.setSourceEntity(99U);
    msg.setDestination(60123U);
    msg.setDestinationEntity(150U);
    msg.type = 59U;
    msg.htime = 0.183685898827;
    msg.context.assign("ROKSRKEEMSKVYCVEXPUTJWRKHQOXGQCMBUCLQUJNHQBVPOFMDWHZPOPYHXHDSXNNRGCXMZVHDRVCCLDSOYSQIMDFTJM");
    msg.text.assign("TDZYMHKMEQFZRVPZJKNXHSNNCIDKUXGREORVIPXCBILVWCGSJVGFSXLYFZAKDE");

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
    msg.setTimeStamp(0.573952022324);
    msg.setSource(43862U);
    msg.setSourceEntity(250U);
    msg.setDestination(2943U);
    msg.setDestinationEntity(82U);
    msg.command = 41U;
    msg.htime = 0.0434209680508;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 45U;
    tmp_msg_0.htime = 0.663240508164;
    tmp_msg_0.context.assign("HSQBCERFZADWWCCNVSRUWMSBZWIQDTMDCBHNUHPIWEMTHNBIYWWEIPIQUMFPJKKJQLDILVZBOSWDZOFRZRKSJCRXLNQCJEPTQFHPBGHFQHGYVKPSRJGKSTBZONDTZ");
    tmp_msg_0.text.assign("PHTVZTEFAJYYWCXPSUNMHTQXIWD");
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
    msg.setTimeStamp(0.807595607724);
    msg.setSource(10902U);
    msg.setSourceEntity(232U);
    msg.setDestination(9769U);
    msg.setDestinationEntity(232U);
    msg.command = 231U;
    msg.htime = 0.689846229292;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 187U;
    tmp_msg_0.htime = 0.802685348026;
    tmp_msg_0.context.assign("SKZOYNJWFLXVWF");
    tmp_msg_0.text.assign("ZXWACQVEQSFZFENLUOGXOJBPQLJTSVLAJZAMFHUCNLHZUPEQBGIUGGXKICBECPINOXGAFUVGYOEPMVJGTWHUYRAOUDWMZHDRMGYONWLPFZBXKNFRJKYAVSVQVRLLDCBDUWPITFGEDXMTTRJYITZGDSSVHBIJSYPRIZX");
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
    msg.setTimeStamp(0.0724465542602);
    msg.setSource(56499U);
    msg.setSourceEntity(27U);
    msg.setDestination(33648U);
    msg.setDestinationEntity(1U);
    msg.command = 24U;
    msg.htime = 0.93916705841;

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
    msg.setTimeStamp(0.99894910326);
    msg.setSource(42903U);
    msg.setSourceEntity(67U);
    msg.setDestination(18870U);
    msg.setDestinationEntity(56U);
    msg.op = 32U;
    msg.file.assign("TESNLCGWQDESVHMEGIPQBLGFGBTDNXQVIYBHMLFDZIEGKDTEDOVFLYHEUTJOJXSVCHTJXLYIUIERAFFHUZCALEXTARVJTWYGVZXHJIJUCMKSMAXQFPRMVSBKMHWVHHRAVNNNOAWINCCLBYKVFDORMDUAXKTNWXCMABBFSZYQ");

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
    msg.setTimeStamp(0.0120504475207);
    msg.setSource(43224U);
    msg.setSourceEntity(179U);
    msg.setDestination(17042U);
    msg.setDestinationEntity(117U);
    msg.op = 104U;
    msg.file.assign("XVDDKCZTLTCWXAGIFVQXAKYUEBQAPGHQHBNQAPFQKJVRSWHJIAUBUIQFDYEGGGCUBZFCGINOGKPWTSBYNPXYXHKDXYVLTVOHIQEQUFDMBWDRIBJSQDJNIHYLTOOFTZGGWSOIMNMMMUVEMSJAYRXEZEBOLFHVWVGZYAWZPUMUBCZEXWLOPSNRCHRPJCKBTCJSNHXYFJIDRTUXFAOKLPSDRVSDKPEKQTJEIHNNOMZYRJKEAAMMWPLZTRLSCFRL");

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
    msg.setTimeStamp(0.0242585861448);
    msg.setSource(4539U);
    msg.setSourceEntity(76U);
    msg.setDestination(39359U);
    msg.setDestinationEntity(66U);
    msg.op = 188U;
    msg.file.assign("MAGVXTHQLKENDSOXNTLQMZAJUNPOHRV");

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
    msg.setTimeStamp(0.134459170479);
    msg.setSource(22838U);
    msg.setSourceEntity(119U);
    msg.setDestination(5849U);
    msg.setDestinationEntity(227U);
    msg.op = 112U;
    msg.clock = 0.858041831095;
    msg.tz = -95;

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
    msg.setTimeStamp(0.579701664643);
    msg.setSource(28449U);
    msg.setSourceEntity(177U);
    msg.setDestination(23646U);
    msg.setDestinationEntity(31U);
    msg.op = 70U;
    msg.clock = 0.773878089505;
    msg.tz = -128;

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
    msg.setTimeStamp(0.172316910291);
    msg.setSource(11268U);
    msg.setSourceEntity(21U);
    msg.setDestination(16866U);
    msg.setDestinationEntity(163U);
    msg.op = 90U;
    msg.clock = 0.909609947423;
    msg.tz = 69;

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
    msg.setTimeStamp(0.617582487814);
    msg.setSource(16805U);
    msg.setSourceEntity(173U);
    msg.setDestination(24705U);
    msg.setDestinationEntity(200U);
    msg.conductivity = 0.576450614093;
    msg.temperature = 0.341779129533;
    msg.depth = 0.0622831402482;

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
    msg.setTimeStamp(0.461398470574);
    msg.setSource(21263U);
    msg.setSourceEntity(124U);
    msg.setDestination(27120U);
    msg.setDestinationEntity(227U);
    msg.conductivity = 0.909766215105;
    msg.temperature = 0.921651275404;
    msg.depth = 0.684481782969;

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
    msg.setTimeStamp(0.682037615622);
    msg.setSource(23551U);
    msg.setSourceEntity(78U);
    msg.setDestination(47551U);
    msg.setDestinationEntity(155U);
    msg.conductivity = 0.434906932034;
    msg.temperature = 0.631034807606;
    msg.depth = 0.123831668904;

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
    msg.setTimeStamp(0.808266708624);
    msg.setSource(22263U);
    msg.setSourceEntity(4U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(173U);
    msg.altitude = 0.578252126962;
    msg.roll = 7717U;
    msg.pitch = 56251U;
    msg.yaw = 63476U;
    msg.speed = 8929;

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
    msg.setTimeStamp(0.773197495297);
    msg.setSource(60298U);
    msg.setSourceEntity(48U);
    msg.setDestination(46415U);
    msg.setDestinationEntity(63U);
    msg.altitude = 0.764423133094;
    msg.roll = 43535U;
    msg.pitch = 55649U;
    msg.yaw = 9024U;
    msg.speed = -21950;

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
    msg.setTimeStamp(0.47374920739);
    msg.setSource(22647U);
    msg.setSourceEntity(198U);
    msg.setDestination(53228U);
    msg.setDestinationEntity(218U);
    msg.altitude = 0.0678597230826;
    msg.roll = 47578U;
    msg.pitch = 7990U;
    msg.yaw = 26526U;
    msg.speed = 27555;

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
    msg.setTimeStamp(0.637313975626);
    msg.setSource(36908U);
    msg.setSourceEntity(59U);
    msg.setDestination(60827U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.763934362541;
    msg.width = 0.120471155964;
    msg.length = 0.207479100682;
    msg.bearing = 0.821712298125;
    msg.pxl = -22285;
    msg.encoding = 18U;
    const char tmp_msg_0[] = {-15, 11, 61, 61, -13, 18, 16, -118, 8, -104, -104, -33, -53, -114, 121, 26, 101, 112, 18, 65, 41, -54, -32, 45, -8, -99, -115, -101, 118, 73, -20, -124, 78, 38, -58, -34, 103, -74, 68, -56, 79, -50, 69, -106, -27, 62, -35, 7, 88, 15, 5, 44, 89, -34, 19, -105, 72, -28, 56, -99, 111, 39, -112, 97, 96, -31, 108, 43, 80, -103, 17, 108, 37, 87, 24, -19, -94, -66, 96, 106, 34, 111, -43, 85, -120, 121, -97, -4, 64, 75, -128, -69, -63, -10, -1, 53, -30, 0, 68, 80, -74, 76, -41, 112, -77, -5, 59, -76, -1, -11, -14, -115, 8, -117, -71, -80, -89, 53, 71, 100, -102, -61, -87, 66, -3, 83, -43, -70, 112, -64, -74, -68, 33, 118, -95, -69, -85, 112, 117, -31, 121, -19, -7, -51, -104, 86, 71, 50, 91, 69, 62, 24, 27, -99, 1, 111, -124, 101, -13, 101, 12, -32, 74, 28, -76, -24, -52, -35, -92, 123, 43, -71, 36, 106, 30, 35, 87, -89, -121, -97, 46, 28, 90, -47, -21, -19, 113, -1, -109, 64, 50, -117, 111, 43, -5, -124, 1, -123, -87, -65, 66, 20, 98, -120, 77, 19, 93, -66, -19, -108, 69, -12, 58, 32};
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
    msg.setTimeStamp(0.50284724119);
    msg.setSource(50376U);
    msg.setSourceEntity(1U);
    msg.setDestination(39493U);
    msg.setDestinationEntity(170U);
    msg.altitude = 0.639467498499;
    msg.width = 0.430303529152;
    msg.length = 0.89595819006;
    msg.bearing = 0.757162690548;
    msg.pxl = 4111;
    msg.encoding = 105U;
    const char tmp_msg_0[] = {4, -80, -66, -35, 78, -94, 51, -127, 53, -113, 16, -76, -37, 85, -10, 51, -63, 73, -126, -26, 19, 43, -22, 110, -15, 113, -101, 119, 32, -26, 42, 19, -10, 28, -26, 78, -34, -58, -96, -47, 71, 22, 56, 80, -2, 1, 65, -80, 91, 71, 18, 35, -105, 40, 54, -10, 20, -41, 76, -25, 121, 55, 119, 27, 11, 13, -81, -19, -75, -96, 50, -21, -19, -110, -81, -55, -111, 70, -66, 71, 42, -63, -66, 28, -86, 99, -104, 104, -105, 62, -62, 96, -103, 1, 111, -20, -25, 100, -98, -117, 37, -110, -64, 116, 16, -117, -12, -28, 10, 120, 123, -41, -104, -45, -125, -71, 74, -54, 7, -99, 8, 63, 116, 62, -106, 77, -67, 88, 56, -52, -51, 57, -11, 31, 122, 20, 73, 28, 22, 66, -76, -102, -81, -124, 51, -41, 18, -106, -94, -122, 93, -63, -43, 58, 46, -122, 34, 27, -79, -99, 52, -120, 111, 11, 45, 115, -17, -3, 24, -35, 73, -83, 50, -10, -97, 8, 88, 11, 91, -97, -106};
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
    msg.setTimeStamp(0.288222127596);
    msg.setSource(57919U);
    msg.setSourceEntity(202U);
    msg.setDestination(14828U);
    msg.setDestinationEntity(15U);
    msg.altitude = 0.149790461614;
    msg.width = 0.388359102019;
    msg.length = 0.818584265128;
    msg.bearing = 0.0694735016712;
    msg.pxl = 16754;
    msg.encoding = 155U;
    const char tmp_msg_0[] = {-97, -67, 21, 14, -73, 91, 37, 13, -80, -48, -25, 124, 109, -6, 2, 87, -84, -48, 48, 22, 121, -59, 75, 70, 101, -86, -42, -49, -12, -15, 43, 56, -127, 84, -86, 89, 40, 125, -19, -112, 80, 30, 97, 85, -20, -29, 66, -33, 34, -84, -32, 56, -111, 74, -76, 95, 48, -9, 118, -8, -12, -74, -109, 61, 80, -67, -99, -41, -123, -67, 22, 60, -94, -99, 57, 33, 16, -42, -39, 12, 57, -12, 93, -118, 71, -11, 38, -30, -83, 80, 73, 118, -68, 72, -22, 101, 21, 28, 41, 61, -38, 47, 24, 108, 65, 105, 8, -115, -103, 67, 0, 55, 84, 7, -27, 6, 88, 82, 83, 109, 54, 34, -19, 98, 7, 111, 57, 102, -52, 55, 15, 117, 29, -80, -20, -78, 50, -92, -80, -60, -27, -55, -2, -73, 116, 62, -58, -94, 17, 115, -34, -42, 108, -32, 85, -11, 100, -34, 35, 63, 47, -71, -75, 116, 28, -4, 41, 55, -54, 34, -100, -99, -5, 74, 68, 79, 1, 47, -111, 95, -107, -4, 71, -50, -125, 15, -119, 30, -112, -22, -4, -50, -109, -17, -82, -67, -24, 25, -30, 117, 33, 50, 41, -67, 45, -89, -20, -42};
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
    msg.setTimeStamp(0.212798224615);
    msg.setSource(60457U);
    msg.setSourceEntity(160U);
    msg.setDestination(65157U);
    msg.setDestinationEntity(57U);
    msg.text.assign("ICSPYWYRVFTWBRLCLDTPCBKJOQMYGURPNYERFIWUASMJORJSCUXYZCQHIVOGKMRGLKCNEPGEAKOKPDWIMRXTCYNYGNNKLAITXVZRAVHVZRFCOFPXXIVIBZQWMTJUOYJFENADNMWFBJHZ");
    msg.type = 83U;

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
    msg.setTimeStamp(0.541662379717);
    msg.setSource(39463U);
    msg.setSourceEntity(205U);
    msg.setDestination(50718U);
    msg.setDestinationEntity(40U);
    msg.text.assign("KFUKUUILZNWITOHWGJBYHGRRIEIDQEDWXKAAFNHHUBUSUARCXTMJVKBIUGCINBAIOTQKWSZQKFCBTGNEMBZYFOZJILHRPRVVMRYDXPQJASSNEWLXMYLBNSTDWKEVLUGVXVTVQLROSJCIOLHZNVHKLMSQJRETPOOHFAKTZPHNGNR");
    msg.type = 189U;

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
    msg.setTimeStamp(0.284582253215);
    msg.setSource(59896U);
    msg.setSourceEntity(111U);
    msg.setDestination(45472U);
    msg.setDestinationEntity(218U);
    msg.text.assign("PBHBPIKXUOAHIYAQFZKWEATZNRVSXTYOTEWTXKNZTCKLMPIMMOBKLMTUDZBGZLNLKDQHBJHCYCAPSVVCISYIQMUYEVRRRZXIIWUAGXRQG");
    msg.type = 23U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.821532560038);
    msg.setSource(38756U);
    msg.setSourceEntity(5U);
    msg.setDestination(21008U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.20358210781);
    msg.setSource(57327U);
    msg.setSourceEntity(138U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.312564257375);
    msg.setSource(53177U);
    msg.setSourceEntity(42U);
    msg.setDestination(53420U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.80240859274);
    msg.setSource(6090U);
    msg.setSourceEntity(5U);
    msg.setDestination(5677U);
    msg.setDestinationEntity(69U);
    msg.sys_name.assign("BYRUXNTLCZQMFBLKPJIREYTVQEFNFFOXSARDVNZSFKOWKMNJWYMUJSYFOQMLDJTPCDXIMABLOEXHCCHSLAXJVPPOUZJLHMRKEDAOZVDUHIAZHTIUGBGPXVBZELWIYZQCSZVRGUDJSFMNVMW");
    msg.sys_type = 152U;
    msg.owner = 33131U;
    msg.lat = 0.348529435139;
    msg.lon = 0.111159620204;
    msg.height = 0.376253989814;
    msg.services.assign("APHVCAIKAJDSZRUQLLDOMJBKCDMACBXGPEUFWNHVTGUNTULNJDDNPGXOXNZVJEDQYJCWXZKMLIRJCIEPZSSFGASAUZRDZTDYU");

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
    msg.setTimeStamp(0.184442615397);
    msg.setSource(4154U);
    msg.setSourceEntity(216U);
    msg.setDestination(30942U);
    msg.setDestinationEntity(112U);
    msg.sys_name.assign("RPMBIAXNMFJMGRBESLSUERLCADOLYPUMDXUGBXNUQAVNRJCUKAXGZMTHEKHOHBGGMEVYXURUOBTSZVCOFRQZWKGROVOSSYFKCAQWNHYVPSJTHFIQZWKZWSQFEHCLVQYZNUADYWRUOMVZNCDIBGLEKLJFSJFWCWPEZXHIPLNPXNMNLTCADIVZBQKEJOYRYHTTZPCPSBAEWKGDYDNKHBWTXTIDKTUODAEX");
    msg.sys_type = 187U;
    msg.owner = 48342U;
    msg.lat = 0.211425748122;
    msg.lon = 0.553290917833;
    msg.height = 0.413474538608;
    msg.services.assign("ITHZCUAUPIXNZHGQAMCIQXPKKEYPLBHPNXDHZRQFMOMERWGPZQNMLOZBYKFGGUKERNRLOGTDZLWOLKVJRPIZYAWQIRFHDHYUTHESRTVUXYGVRGJNQOOCDYLKW");

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
    msg.setTimeStamp(0.560280947287);
    msg.setSource(30241U);
    msg.setSourceEntity(29U);
    msg.setDestination(59110U);
    msg.setDestinationEntity(71U);
    msg.sys_name.assign("HKNVCUUBXOZEIPUFABHPNTUSZROBTAMYDTYMYFXGGDBLEWFHOBDXLSHLMADDRNUULOPLCCQTXOYDEHFXYCTKQQHSJTFYJKRPNLGGMIEZKOKBAJYEZWTFXVVNWQNQGJLH");
    msg.sys_type = 178U;
    msg.owner = 55624U;
    msg.lat = 0.54363180432;
    msg.lon = 0.301499568002;
    msg.height = 0.776334879265;
    msg.services.assign("GWFBCNBDSLHQGYYTEXIDIJNWDPSHVEKIHLCMCJENFBIABYZTFGQNZQGZPWPQFWBTXKXFRSEOCFRJBGKVMHNIEVAZEARXBPZGVXHAUZJMTHLOFNHVGK");

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
    msg.setTimeStamp(0.726822235656);
    msg.setSource(42586U);
    msg.setSourceEntity(66U);
    msg.setDestination(1444U);
    msg.setDestinationEntity(56U);
    msg.service.assign("VEQOEQVSXDLSETTAUTHUJBWLGPGSZCHRSJWYUXBSGUNECGFPWOBRWAMRHPLHXOLZPMBNRSZOSYJSXACETAQZPKUCDDTL");
    msg.service_type = 135U;

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
    msg.setTimeStamp(0.952784736523);
    msg.setSource(44874U);
    msg.setSourceEntity(168U);
    msg.setDestination(42755U);
    msg.setDestinationEntity(214U);
    msg.service.assign("PDGDUYKRUAXUMBPWYSJFKZUMFVTDEKRGGHDUYQTDFFSCNGCZND");
    msg.service_type = 193U;

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
    msg.setTimeStamp(0.58285952215);
    msg.setSource(4932U);
    msg.setSourceEntity(18U);
    msg.setDestination(61381U);
    msg.setDestinationEntity(173U);
    msg.service.assign("FEVEHZHBQQEXPWEUIBNCBZZJDEBHWNJNWHLRCTYTAXDNVQUEBNKYBQLIMMZMSRFMUAFNOIDVTMOIPCQIDAHGYFOSGGTMVRSPUEFKNAYGKZUVPSQCJBLFMAAJRRIOSGAPVPLMAXGWLDLCBHKNSNXQTDRXTUVOJJZIGQKJFUWCYWXIVZXYQDPRUYJSH");
    msg.service_type = 90U;

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
    msg.setTimeStamp(0.754196537537);
    msg.setSource(5550U);
    msg.setSourceEntity(30U);
    msg.setDestination(24635U);
    msg.setDestinationEntity(108U);
    msg.value = 0.562733491509;

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
    msg.setTimeStamp(0.232237728667);
    msg.setSource(44700U);
    msg.setSourceEntity(15U);
    msg.setDestination(56771U);
    msg.setDestinationEntity(4U);
    msg.value = 0.435091971818;

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
    msg.setTimeStamp(0.830130795739);
    msg.setSource(29712U);
    msg.setSourceEntity(41U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(127U);
    msg.value = 0.978227079276;

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
    msg.setTimeStamp(0.59853421859);
    msg.setSource(21532U);
    msg.setSourceEntity(65U);
    msg.setDestination(12804U);
    msg.setDestinationEntity(9U);
    msg.value = 0.616365561383;

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
    msg.setTimeStamp(0.582740851352);
    msg.setSource(31U);
    msg.setSourceEntity(73U);
    msg.setDestination(29094U);
    msg.setDestinationEntity(215U);
    msg.value = 0.757133338198;

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
    msg.setTimeStamp(0.656192396941);
    msg.setSource(31505U);
    msg.setSourceEntity(212U);
    msg.setDestination(13014U);
    msg.setDestinationEntity(15U);
    msg.value = 0.724960006319;

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
    msg.setTimeStamp(0.285652584664);
    msg.setSource(15043U);
    msg.setSourceEntity(88U);
    msg.setDestination(35209U);
    msg.setDestinationEntity(162U);
    msg.value = 0.590376608149;

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
    msg.setTimeStamp(0.280833602215);
    msg.setSource(5787U);
    msg.setSourceEntity(82U);
    msg.setDestination(29794U);
    msg.setDestinationEntity(68U);
    msg.value = 0.619340601538;

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
    msg.setTimeStamp(0.203586009807);
    msg.setSource(4298U);
    msg.setSourceEntity(124U);
    msg.setDestination(7185U);
    msg.setDestinationEntity(1U);
    msg.value = 0.180539867362;

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
    msg.setTimeStamp(0.927786715566);
    msg.setSource(31090U);
    msg.setSourceEntity(152U);
    msg.setDestination(61945U);
    msg.setDestinationEntity(135U);
    msg.number.assign("NIUGRXZNPTTAFZCIXGWSFKZXDTTBWARJJWZSMHECMFDJJBIPPUYAXIWEWBBQRFEEDZKQDWPRHOEQUOAEQLVFVTCROYXELSZLAFTVNHCKOIJWZMMONQVGMLHANIPOQPIWUTNRKYZBKKRTFBEHDLYMDUZGNLHGOPQATGYANQOTRLQLHYQGCIJJVNFSJYSPURAI");
    msg.timeout = 44593U;
    msg.contents.assign("JSXQNXZTLHHAOXQSQABHJU");

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
    msg.setTimeStamp(0.12362761195);
    msg.setSource(27626U);
    msg.setSourceEntity(227U);
    msg.setDestination(5293U);
    msg.setDestinationEntity(39U);
    msg.number.assign("OWBXKUUWXKQTJGAEIMGRLPAMUVMCLTONHQVSZJBIHCTLOUSEOAEAF");
    msg.timeout = 60259U;
    msg.contents.assign("EZXLZJRWHVXFOODGKSIVMBXDWTANUBEQFYBSCIOXSRWFXPREJTMCDUYVLLVOOAANYQHVIJBAQNXODHFNRGBQXGMNTBJKBLEILHUKRPOCKVWNYZUBANSNFMADRXLYLEDMKPFMPJWVFJLVQQSIGRITNJEOQQCC");

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
    msg.setTimeStamp(0.916386617785);
    msg.setSource(1809U);
    msg.setSourceEntity(75U);
    msg.setDestination(6736U);
    msg.setDestinationEntity(112U);
    msg.number.assign("WMHWUTHTDMPLFOLMPSIFCNYUXTVBCKRQMWMAGTKFGYXIENJDVMNOGWORBNHXHQAGGCQAR");
    msg.timeout = 16886U;
    msg.contents.assign("HBHYFTNIUVZWRODZKJGWUVBOQGZAPNAOXIAUOCPSMJLJSOTDXIDDGXDCISCVCVSZRKJSXJOPBMMLNRIRNVELFOWXIKJCBERZKEGBPLHTPNFJETMHIYTYHZLTDXKCBEYSVAMVAURJNDGWWBUXNKSQPJYSRUYULFAGSLHUXHIRNRFPMJPKXNKRNAYCLQUQYVMTHCI");

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
    msg.setTimeStamp(0.620182554281);
    msg.setSource(13166U);
    msg.setSourceEntity(240U);
    msg.setDestination(48598U);
    msg.setDestinationEntity(181U);
    msg.seq = 60381560U;
    msg.destination.assign("IEHLOTKMVCTMVYAFRENNZBHISEOUZAIEFFNTDTKMWXNQHFEIZKYDUREKGJDCTNAPMRYVHJVK");
    msg.timeout = 25657U;
    const char tmp_msg_0[] = {57, -51, 119, 59, -99, 36, 42, -29, 25, 115, -53, -95, 31, 59, 12, -70, -32, -113, -51, -32, -81, 9, 29, 91, 13, 91, 103, -113, -93, -81, -9, 91, 62, 50, 76, 48, 39, -8, 14, 51, -98, -107, -7, -33, -17, -26, -102, -76, 101, 0, -104, -107, -96, -69, 85, 6, 41, 76, 28, 2, -34, -106, 21, -30, -95, -123, -116, -100, -91, 103, -34, -56, -79, -50, -86, 110, -59, 57, 72, 104, -37, -80, -115, -84, -76, -59, -102, 99, -120, -79, -112, 107, 63, -102, -53, 109, 44, -108, 49, -16, 44, -7, -21, -97, 17, 102, 67, -88, 121, 42, 43, -100, -118, 84, -30, -11, 27, -55, -121, 58, -34, 121, 49, 71, -109, -104, -90, -63, 111, 79, 69, 47, 57, 17, 52, 44, 78, 103, -103, 107, 95, -67, 100, 23, 59, -126, -38, -125, 49, 115, 8, 20, 59, -9, -97, -2, -89, 23, -20, -80, -106, -26, -69, 47, -40, 80, 76, -54, -107, 10, -61, -93, -119, -126, 38, -115, 103, -65, -111, -45, 4, -114, 92, -21, 30, 92, 54, 114, 37, 0, -104, -114, -99, 76, 29, 17, 93, 76, -1, 50, -44, -58, 91, 71, 22, -53, 125, -58, -5, -120, -52, -125};
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
    msg.setTimeStamp(0.66340978549);
    msg.setSource(9707U);
    msg.setSourceEntity(14U);
    msg.setDestination(39701U);
    msg.setDestinationEntity(68U);
    msg.seq = 2661120786U;
    msg.destination.assign("SHLTDGMEDADJCYBGVXANEZGAPCWDAYKKIDCLWPLCTOFFMBOIBSIWORGZCANHUPPNOJOHMBITFSXOJSKNSLJCDJRB");
    msg.timeout = 13761U;
    const char tmp_msg_0[] = {-123, -2, -110, 16, -50, 28, -38, 57, -125, -107, -60, 49, 103, -83, 123, -37, 114, -108, 65, 59, 123, -30, -32, -127, -77, 85, -16, 13, -92, -45, -116, 107, -58, -85, 118, -47, -52, -80, 121, -78, -71, -17, 44, 86, -72, -92, -70, -120, 12, -108, -79, -78, 41, 55, 104, -81, -91, -31, -43, 90, 28, 66, -112, -54, -22, -120, -83, -43, -90, 56, 46, 37, 107, -124, -88, -120, 28, 3, 27, 113, -27, 99, 100, -89, -111, -110, -37, -37, 45, -64, 10, -50, -71, -37, -24, 68, -103, -67, 97, 122, 48, -7, -33, 123, 19, 34, 29, -107, 27, -72, 32, 47, -38, -70, -40, -69, -121, -64, 118, 90, -82, -97, 121, 7, 104, 43, -95, -5, -39, -126, -24, -109, -79, -47, -94, -48, -76, -89, -52, -10, 104, -27, 37, 0, -97, -65, -117, -33, 101, 0, 35, 70, 16, -111, 86, -45, -35, -110, 68, -32, 38, -98, -86, -36, 117, -29, -95, 102, -125, -91, -108, 111, -116, -2, -80, 59, 17, -48, -97, -27, 105, 5, -123, -128, -50, 74, -62, 93, -74, 53, -117, 22, -41, -47, -117, 89, 73};
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
    msg.setTimeStamp(0.417158386993);
    msg.setSource(47908U);
    msg.setSourceEntity(235U);
    msg.setDestination(13507U);
    msg.setDestinationEntity(151U);
    msg.seq = 2196972160U;
    msg.destination.assign("VECJWLCMOCCNSFUUYQREPXGZPYYUBAZQBWCSXWTVPMWMHQHJCOVPTYDFCEJSPGGEFXATMVNMGFODIVYDIROKGZUYCMFDHELSIUWCJIMMNRJRXWQVAYJSRABVVBSZRHLYIXGZOPZBKD");
    msg.timeout = 42877U;
    const char tmp_msg_0[] = {124, -6, -96, 17, 10, 31, 41, -115, -7, 23, 120, 5, -37, -102, -113, 125, 84, 60, 63, -16, 15, -78, 36, -66, 51, -121, -82, 75, -11, -61, -95, 57, -16, -40, 63, -100, -2, -29, 9, -35, 86, -104, 11, 81, 61, -111, -95};
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
    msg.setTimeStamp(0.707742334662);
    msg.setSource(24122U);
    msg.setSourceEntity(7U);
    msg.setDestination(63464U);
    msg.setDestinationEntity(209U);
    msg.source.assign("PASTLLNTGOLEFQEVGGPRVCLKOFQRLXFDNNCITHZUKSLRFWNXEQZPJQVJBEBDGCIQCUTRMMQZOWJWOKYAYSVXWYZYFJDABIDXYIZSFZSVTJPPFTRLGRAUQEYVWLOUCMGSTIRPNYNAEBUOVCTYPKHECETUGSJHXDYHCBPZKWJAUOMDXDPZKNXWAOUDIRCNUWRVLGQXOVMHSBSIMZWXCBBEIS");
    const char tmp_msg_0[] = {-70, -85, 88, -70, 113, -7, 61, 9, 87, 74, 32, -15, 78, -111, -60, -53, -125, -42, 76, -69, -12, 65, 111, 89, 73, -109, 99, 101, -4, 70, -27, 12, 124, 9, -113, 108, 83, -32, 45, -40, -106, -72, 89, -37, -58, 71, -48, 57, 14, 61, 78, -53, -51, -121, -123, 45, -37, 116, 116, -14, -32, -25, -75, 36, -77, 81, -53, -111, -58, 24, 19, 42, -71, 14, 18, 98, 113, 39, 74, 17, 100, 78, -17, 32, -14, 23, 32, 36, 28, -41, -123, 94, -94, 126, -14, 89, 60, -59, 115, -96, -29, 73, 80, 35, -77, 42, 55, -8, 68, 72, 30, -51, -53, -122, 9, 83, 124, -73, -48, 117, -68, 82, 3, 97, 71, -20, -124, 72, -30, -25, 22, -11, 47, -8, 8, -40, -102, 49, -126, -86, 112, -112, 72, 116, -94, -24, -93, -62, -114, 9, -94, -54, -93, -102, 104};
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
    msg.setTimeStamp(0.519107046394);
    msg.setSource(58444U);
    msg.setSourceEntity(92U);
    msg.setDestination(34588U);
    msg.setDestinationEntity(190U);
    msg.source.assign("HGHRXCTKPEAPOXQJWDWBTKGKJCDWHPKFVCPWOZHBAIGUGJKIFOQWAJBAPKYAKNNSJDLIPRZZFDXHYIFLXEXGCLDIKEEVJIZKXCEOMQFKJBLUNMVOZOYMTBUYUXRMLRORMHXUFLRUPTQSZVADSFIREDUBSEUVNFAVRBPCOOSVMCQHIMNZYHTYMDTJDCETTEEGLCFVVWQILUFYBHPWQLMNYDPWSONCIZBANWZHUQSYLRG");
    const char tmp_msg_0[] = {6, 104, -57, 79, -30, -79, 109, -101, 71, -121, 19, -128, 118, -64, -111, 107, 76, -120, -26, 77, -66, 21, 65, 107, 29, -14, -8, -115, -88, -89, 108, -95, -96, 16, -104, -80, -58, -84, -28, -108, 109, -7, 63, 86, -93, 113, -98, 53, -107, -89, -13, 94, -33, -26, 76, 44, 18, -11, -46, 76, 93, -91, -37, 112, -106, -89, 39, 30, -120, 16, 126, -102, 84, 31, -27, -88, -124, -64, -25, 80, -65, -48, 8, -2, 35, -100, 23, -40, 103, -92, -10, 47, 71, 24, 84, -94, -10, 50, 41, -124, -44, -122, 80, 88, 87, -101, -52, 11, -106, 13, -93, 87, 45, -112, 38, -79, -7, 51, -77, 97, -89, 61, -20, 22, 38, -44, 9, -112, 71, 80, 39, 14, -60, -115, -21, 4, -84, -91, 119, 23, -29, 93, 96, 25, 38, -18, -59, -32, -50, -81, 53, -124, -88, 95, -98, -128, 41, -127, -49, 59, 40, 21, -5, -15, -75, -78, -69, -1, 40, -66, 42, -60, 19, -7, -65, 54, 35, 96};
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
    msg.setTimeStamp(0.672822088385);
    msg.setSource(57190U);
    msg.setSourceEntity(240U);
    msg.setDestination(41722U);
    msg.setDestinationEntity(39U);
    msg.source.assign("OWHQQSSTEBOQGJAPRGEUKEKPVCUPHYAJFKISZLLFRQBAWWVXATIMJIJRNZIGZWWORKHSPVNVHMSCOKDEFNOAFPJXEMEQUXXOLJULZLNVFQBGCNYTXPNAYM");
    const char tmp_msg_0[] = {-56, 72, 108, -80, -126, 3, 73, -88, -87, -106, 52, 29, 25, 22, -98, -46, -127, 36, 27, -8, -21, -109, -7, -41, -70, 4, 77, 3, -108, -119, 29, 41, 96, 73, 76, 74, 63, 115, 12, 2, 62, -89, -36, -69, 74, 56, 76, -120, 82, -110, -56, -82, 74, -12, -32, -122, 9, -104, 49, -64, -22, -69, 67, 36, -60, 39, 19, 29, -113, 4, 38, 101, -70, 95, 29, 52, -6, 96, 27, -82, 88, 23, 92, 64, 67, -108, 13, 101, -49, 1, -60, 27, 91, 27, -61, -3, 103, -19, 41, -2, -36, -46, -61, 81, 115, 92, 96, -120, -51, 90, -60};
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
    msg.setTimeStamp(0.281255785339);
    msg.setSource(42287U);
    msg.setSourceEntity(126U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(22U);
    msg.seq = 3172507648U;
    msg.state = 99U;
    msg.error.assign("DITQPHJOGJLGNTNMMBVPWROLOUAMHCUYFTKBQHKJRCLMCETRGKUBWORXVPAALMCJFOZXXXUVEOSEJMDPSETSWAVQFOHCPWNKYQQZEPVZIBCHJAPNWWFDBBDGZUVJCBBGZPR");

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
    msg.setTimeStamp(0.40314463086);
    msg.setSource(16276U);
    msg.setSourceEntity(50U);
    msg.setDestination(21979U);
    msg.setDestinationEntity(28U);
    msg.seq = 3195636445U;
    msg.state = 92U;
    msg.error.assign("TXKRNNFRLNUAYPXNZLERWMJBYPZSOCASRAENJRNTDVLLGQOKZSXEEUPBCSUPOKGGGHGDITELEYISJNQTURBXSFZCTANAXPWXJTCRADJYJXSKWTQDWSOCPRPMEQQLXHZXDIHYBVHLZGDUMPKTRVXNHPVFVMFIMVYYEWVVHQS");

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
    msg.setTimeStamp(0.0585786716088);
    msg.setSource(62434U);
    msg.setSourceEntity(26U);
    msg.setDestination(23020U);
    msg.setDestinationEntity(47U);
    msg.seq = 4190810950U;
    msg.state = 41U;
    msg.error.assign("EVXATEYUDYQTVYNYXSRLKXUKTVFGIKEGXOXLUHLVNNAGWKIMTPBPURWBPBJIMACMGTREFPDXHZIMRGEJMZEYDFTUZNSSGJBIRBNSUEYTQKAHDQHYFVTLZLWOZXQJWIOQBCICZPAGHLZXVLDCWZFNRBAKRQOTWSDKUHMFOAPSSEZMQTWBISJOVMIGVYWNHAGFFRCHERKABWUPJOLZCKFUQJWIFOJPYOVDHOCMSC");

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
    msg.setTimeStamp(0.46111459817);
    msg.setSource(45305U);
    msg.setSourceEntity(129U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("CWDFUOZFOLPMQAIVIA");
    msg.text.assign("TNGATHTPDQXIOBYKONSNRYJJHMANORGJTXSZHCNGYQEIXYIHGXVAVVPTQTQAFFEDSLPFURRUNHKX");

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
    msg.setTimeStamp(0.493373018);
    msg.setSource(40806U);
    msg.setSourceEntity(226U);
    msg.setDestination(12498U);
    msg.setDestinationEntity(78U);
    msg.origin.assign("GWQBDYRKVILVVMTBAWYFSURMFUTBAERGIJHQRLKFQFMXNSDSHDVQDNZTTGMRQMNLEDFDJCLAANXSDWXMVFJXUVPTISUSYMWWBBGJINZOHNKIXMNDIHEETNEORLULOAWANPRBGUMLJCZSCHKJCHXVDIPKCGEBLSYHVCJJUYIZVGKBOFPCOLECJERDSOQCQFZZTRPYOZAEXKZOSTXZOAPUGWAJTWPUIVIWYLFHUKFMWNKOZ");
    msg.text.assign("EGDVEPCPDWFKXIVGVIHFNZUZIJVXWAXCAMQNCLNWTXZIADOTZVVZWBGFSYLKBFQDLZFBJZOOQLJVCRUBCHYPEKWSDTPEIGZKLUEHNTLSREDPMPOPGSNREEFBAXHJRCONMXMEYKXIQDTSGQWLDKRYMRRQXYGEQCOCNOKGMTCVSIHAPVHHZNRSTJDUUYIYQWMIWOXXBNBTRVYYAOWDBYQJCPMWLTQUZPTJKGOLJUJHFB");

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
    msg.setTimeStamp(0.445802553548);
    msg.setSource(19154U);
    msg.setSourceEntity(44U);
    msg.setDestination(54342U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("HNAMUIVWQNKUNHNOJVZWLEDNTZKUJMKIPXROQSGKSUSXDRWGZBZQCCJQUXBRTAISRVHKHDPQUSLCNBAMJQUHQOLOOZOTKJZENFBIIJGYUKDFVCKRYLIJPCHTAQDFCBVRMYGKBHSFFXPYOFIMDTDXMEZYXRPSTEXCFFVNSWFQHWLLMEARKWYCPAWYG");
    msg.text.assign("RVKVGNZXFLSCHTVXHZHEFPHJLYYETCEMFGIJWOLOWNKBBLZJXBHUGPLTAOZYXGSVVOZSRDGNKRXIWUXQAOKZPJETMMECAOJRYHCMSQLBSNIJEDCNUSXQDMNNWQGDF");

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
    msg.setTimeStamp(0.277157776514);
    msg.setSource(32161U);
    msg.setSourceEntity(16U);
    msg.setDestination(29338U);
    msg.setDestinationEntity(121U);
    msg.origin.assign("LCRXAOLZVNSDAVHNVXGWBJZFMWOMBNQGXYTJDUYZNKMFLIOCIQQDTCMSZIPTWZWOWAJGIPBPTCPOUXPWYHXCKFC");
    msg.htime = 0.121888721759;
    msg.lat = 0.76532025766;
    msg.lon = 0.583273622507;
    const char tmp_msg_0[] = {-25, -25, -24, 85, -82, -116, -60, 116, 117, 32, -126, -41, -46, -50, 60, 1, -71, -72, 43, -63, 79, -66, 29, -26, 40, -15, 54, 123, -120, -41, -60, -63, -128, -105, -85, -31, 84, -121, 58, 103, -64, 80, -95, 18, 56, 60, 103, -95, -37, -118, -83, 94, 72, 17, -21, 62, 38, -88, 98, -54, 93, -35, 22, -114, 99, -96, 88, -91, -27, -55, -72, -85, 104, 38, 73, 119, -75, -71, 37, 72, -122, -9, 56, 117, 107, -90, -1, 50, 1, -24, -87, 105, -86, -122, 16, -104, 71, -85, 49, 72, -77, 61, -54, -114, 94, -113, 6, -31, 112, 44, 19, -35, -24, 56, 39, -17, -58, 68, -5, 24, -86, 123, 0, 122, 95, -58, 3, -108, -85, 93, -10, 103};
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
    msg.setTimeStamp(0.267393977496);
    msg.setSource(8494U);
    msg.setSourceEntity(153U);
    msg.setDestination(18837U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("FDQWBYPRWUBZQHQYKMHUXOKWIZSKCGLDABMMEDHIUCSNZSNVGEZGHYCQOALIBKZAXHGSYQBJBMFHPQQMNRSRJKGBXDLDXLRYFNCAJMYZFEAPTDBECUGPSVGERPKYJOJUNVQIIYEWAAACUXKXQDPWWHLOCTLGLLIKIJTWXJN");
    msg.htime = 0.371505704659;
    msg.lat = 0.229305234177;
    msg.lon = 0.351067815491;
    const char tmp_msg_0[] = {69, -31, -14, 111, 104, -69, -118, 27, 105, -7, -6, -23, -39, 92, 4, -118, 112, 66, 30, 84, -53, -59, 56, -71, -51, -73, 14, 25, -1, -21, -5, 4, -27, 108, -23, -81, -8, 78, -52, 19, 9, 10, 96, -55, 74, -31, 72, 28, 4, -108, 45, 60, 17, 125, -35, -95, -62, 14, -28, 75, 80, 37, -8, -51, 82, 20, -5, -9, 100, 124, 39, -11, 83, -16, 85, -118, 99, -4, -125, 106, -5, 33, -45, 55, 8, 46, 108, 43, 57, -95, -47, -28, 123, 48, -79, -55, -120, -96, 117, 79, 115, -124, 29, -84, -119, 0, 57, 53, 78, -13, 88, 110, -83, 72, 113, -86, -12, -85};
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
    msg.setTimeStamp(0.93810730948);
    msg.setSource(2043U);
    msg.setSourceEntity(57U);
    msg.setDestination(33293U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("FYQMVUJZGVAGSXYBDSAWNKGWRTSZVESDKJBICFLARHZKFDEFXKOJTJADDLDOTXLOXIHBHNUAGUQBPGOASNROPVESNCDAPJRBYONMTSNZZLAQMVTLTX");
    msg.htime = 0.858787736737;
    msg.lat = 0.205215773003;
    msg.lon = 0.975791059123;
    const char tmp_msg_0[] = {-122, 43, 42, 6, -29, -105, -103, 82, -20, 47, 107, -86, -81, 39, -106, 98, 114, -26, -93, -95, -46, -4, 43, 112, -37, 5, 122, -75, -32, -5, 92, -49, 84, 94, -90, 58, 5, 114, 107, -45, -123, 71, -87, -93, -41, -14, 81, -124, 105, 125, 114, 37, -86, 87, 110, -44, 62, 65, 70, -66, 32, 12, -50, -99, -62, -68, -72, 27, -83, 65, -14, 29, 14, -21, -71, 90, 63, -41, -27, 8, 116, 120, 48, 1, -10, -122, -109, -64, -68, -2, 60, -42, -10, -40, -106, 76, 32, -103, -26, -93, -88, -3, -85, 116, -33, 95, -52, 59, -57, 47, 87, -46, 41, -125, -35, 11, 36, -28, 54, 45, 83, 126, 75, -83, -92, 6, -56, -34, -113, -32, 99, 26, -19, 42, 122, 105, -67, -16, 44, -39, 115, -113, -78, 51, -113, -105, -47, 40, 81, 72, 92, -77, -52, 17, 108, -121, -67, -116, -53, 14, 39, 104, -39, 110, 95, 116, 58, 112, -98, 61, -33, -98, -81, 59, -77, -80, -44, -20, -111, 107, -10, 113, -127, -3, -15, 27, 42, 22, 110, -89, 2, 1, -4, -127, 40, 90, -124, 62, 100, 74, -59, 81, -91, 124, -117, 106, 46, 73, 2, 57, 96, -33, -77, -19, 113, 14, -20, -89, 88, -114, 43};
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
    msg.setTimeStamp(0.698018949963);
    msg.setSource(62911U);
    msg.setSourceEntity(216U);
    msg.setDestination(52193U);
    msg.setDestinationEntity(63U);
    msg.req_id = 24779U;
    msg.ttl = 56392U;
    msg.destination.assign("SAPFUNWJQABNBQEIXVSCSKCUTJOFSYJIJMVODFHRMSVJQLJSCLCWZGTCGRFIYXUMZQUNPISZOTCVASXWGYEKMDIXTYATVHALAAMTVOEXZKYDWEKGCGDVLZHHJRPOZYBRCUHCJZJQMPEYDFQZGTQBVOMOKLPUYXQBQEHPFAVNHHONHAPYTIGZFTDKLNPUWMUNRLFXJWWNDSWHBBBK");
    const char tmp_msg_0[] = {-70, -95, -29, -34, 15, 53, -24, 110, 55, -44, -36, 68, -83, 45, -44, 31, 90, 1, -76, 46, -21, -22, 42, -126, 112, 72, -53, 118, -27, -22, -25, 102, -28, -104, -82, -77, 2, -83, -59, 92, -115, -111, 81, 117, -92, -82, 25, 7, -82, -127, -6, 90, -99, 41, 97, 120, 20, -30, -12, -103, -19, 32, 82, -64, 44, 26, -120, -118, 29, -119, 72, -125, -114, -32, 7, 123, -107, -3, -93, 71, 93, -77, 76, -123, 42, 43, -51, -70, 76, -86, 115, -77, -80, 64, -24, -128, 42, 72, 21, -118, -72, -11, 62, -107, 71, 120, -106, -51, -120, 37, 89, 4, -87, -65, 68, 4, 18, 45, 30, 115, -28, -48, 75, -115, 10, 25, -65, -101, 21, -69, 69, -23, 42, 5, 30, 86, -63, 1, -12, -65, -28, -111, -127, 59, -60, 19, -5, 111, 55, -61, -80, 67, 41, -15, 19, 14, 60, 3, -15, 30, 5, -32, 119, -29, 71, 27, 89, 19, 69, 43, 54, 104, 65, -48, 15, 81, 116, -21, 70, -67, 13, -103, 50, 37, 126, -96, -1, -74, -10, 61, -37, 38, 78, 41, -127, -27, -76, -117, -80, 65, 1, -119, -80, 61, 68, -4, -19, 73, -90, 119, -116, 10, -67, -42, 66, 119, 1, 91, -59, 115, -36, 66, -68, 53, 47, -91};
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
    msg.setTimeStamp(0.932446710905);
    msg.setSource(21406U);
    msg.setSourceEntity(192U);
    msg.setDestination(43541U);
    msg.setDestinationEntity(120U);
    msg.req_id = 57365U;
    msg.ttl = 36039U;
    msg.destination.assign("VNEALWLBHMSAQERJMXNRXXAWOQGUXFVSFQAFPHSHUECLGEMHTTQEYBYWIIKVDFNWTIZGASUTPUZAHUFDJBMTFHZGJVELWDKZTKOYGFQADCYDEVBWFCIWLZBINQNAQCLOVPYID");
    const char tmp_msg_0[] = {-109, -26, -52, -42, 126, -100, 42, -104, 57, -115, 21, -128, -9, -71, 33, -24, -65, 95, 111, -4, 107, 111, 42, -108, -15, -24, 35, 26, -22, 47, 69, 17, -97, -104, -28, 30, -14, -127, -94, 118, -55, -110, -78, 27, -55, -63, 33, -78, 126, 35, 109, -90, 67, 10, -127, -43, 115, 43, 74, 119, -37, -119, 20, -56, -72, 45, -47, 23, -91, -44, 92, -105, -22, 9, 87, 87, -61, 113, -5, 22, 72, 82, -61, 104, -4, -12, -82, 70, -10, 77, 87, 78, 62, 116, 119, -110, 67, -68, -63, -73, -27, 122, 39, 109, -99, -51, 109, 126, 115, 72, 61, -77, -35, 11, 0, -79, -84, 117, -31, -111, 43, 118, -62, 110, 103};
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
    msg.setTimeStamp(0.180253542999);
    msg.setSource(20558U);
    msg.setSourceEntity(64U);
    msg.setDestination(46017U);
    msg.setDestinationEntity(21U);
    msg.req_id = 29123U;
    msg.ttl = 55363U;
    msg.destination.assign("DJZCJUENTHDLOMIHFGTGRSLOLDCNXHSVYSPRQZTAIMQMFQZHTBSWISUVUEWFVQYOYEMWJWVUXIAUYJLGTOGUPBNGPAHRUNOWGULMCRPDUZPIETODHPJZMBXWKKFJLQTEXYXHIKDRPRYSERNXCIXVISRMAXFHEQJIEAUVTLBMBBESBSAGHFKZFQLYBGAZLNVFYVWRPCXXWNMTQTNKQAVKBOWCCEFHZOAGCPSYJZCOKKYNIWDRDZBO");
    const char tmp_msg_0[] = {115, 16, -102, -69, 112, 17, 82, 99, -6, 52, -73, -13, 98, 3, -64, 50, 86, -112, -110, 107, -78, -13, 4, -118, 103, -73, 97, 40, 75, 120, 38, 106, -101, 112, 84, 23, 26, 124, -114, 54, -2, 66, -54, 93, 35, -9, 55, -47, -81, 9, -50, -78, 84, 2, -64, 113, -50, -67, -33, -61, 55, -60, 39, -26, 63, 92, 76, -29, 72, 92, 10, 97, 100, -29, 46, -82, -70, 71, 123, 0, 126, -110, 54, 100, -62, -106, -105, 2, -122, 109, -81, 89, -59, -67, 73, 19, 97, 11, 101, 116, -46, 15, 37, -70, 74, 33, -38, -24, -11, 117, -120, 16, -38, -47, -86, -52, 86, 40, -23, -27, -15, -16, 108, -43, 95, -82, 6, 122, 91, 6, 18, -98, 42, -51, -101, -122, 12, -91, -103, -25, 124, 39, 9, -105, -90, -57, -65, -46, -10, 115, 91, -5, 82, -43, 121, -105, 94, 2, 85, 80, -60, -120, 112, -77, -56, -7, -17, 55, -94, -80, 107, 107, -1};
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
    msg.setTimeStamp(0.335040398649);
    msg.setSource(49352U);
    msg.setSourceEntity(68U);
    msg.setDestination(37035U);
    msg.setDestinationEntity(143U);
    msg.req_id = 62404U;
    msg.status = 190U;
    msg.text.assign("AXGRHEBRLLMSJMWKTUSRAKIBFZTMNXKZBHGQVAPFWSXCLTVPNUZBPYWFDNWYVUGIQXLYYNXENJOUIQGACRCYXACJGOKQEKGYWQCQZVPBTOIFJLXMHQUBHOARJKULKJVAEAJFSSMBTRUMQFFPKOPXZPDLGZAZCSIFNMTDELINWBZNRWDTDUCWNVHMJOAJGMFVIYYBUMYDHHTSSLIZRTZ");

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
    msg.setTimeStamp(0.920383542066);
    msg.setSource(20438U);
    msg.setSourceEntity(206U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(214U);
    msg.req_id = 61037U;
    msg.status = 5U;
    msg.text.assign("LSCSJGZJRWCIFYPYAQCXLSXOULYQOIJZPMPYAPUFBXAKIEYQPFZWHVDQJDOLCVYETMLVYNUUCKFMFEXXXRTUTWPVDKTLAVONHITQMWVWJTGYMHIVKEGTEDQPIJBSNLOLRZKUEHQVAONAOYBFGMDGBRGHYKHBRCAQUXO");

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
    msg.setTimeStamp(0.103636342339);
    msg.setSource(29720U);
    msg.setSourceEntity(147U);
    msg.setDestination(21619U);
    msg.setDestinationEntity(24U);
    msg.req_id = 32395U;
    msg.status = 18U;
    msg.text.assign("RVVYBFXDHUOJJRQEZQDHFHRYROUZYKXPVICKCNAOKEOYQYYUIVIYGBRNHBJCOXBHVXFWZETBGPDJMPOKRQMJADTFQSRLZAWDBPEPTYAZPUZSIFYGLQKGLTMMEMWXLPCSXDHJWVTSFXZLSKAQGPHCGOBBLUVTMMVFTGCXANJSNUKENJMQXKCLFHSGINTVNRCDIWNHYL");

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
    msg.setTimeStamp(0.171380195873);
    msg.setSource(35007U);
    msg.setSourceEntity(133U);
    msg.setDestination(38729U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("BNBDYBGPAOAZOHIDBWROYCQHLQIPQLOSDCSADZPAEHFUFFWISIBTSDUCJMNDKJOKTGHWLKUVVJSORDEXXEYXUSGTFBIJJASTEBNHYYSBZIZMTCJBWTJQMYEXQHLXOPCQNJRRXDUGZRGCGNVCCPYKMNEMWDRUXKAPKEMIGSIQEMWWPYVGZWDJKLVPEOIKFZVHYIZNFOMMTQKPAUTPFKVX");
    msg.links = 1116027714U;

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
    msg.setTimeStamp(0.703593597005);
    msg.setSource(3317U);
    msg.setSourceEntity(114U);
    msg.setDestination(7674U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("SRQEZZIFMQIUMZOYTYDJNJIGLQFGRSCTXTQRUJFNGCRHRGFEIDE");
    msg.links = 1175789736U;

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
    msg.setTimeStamp(0.319515440943);
    msg.setSource(57398U);
    msg.setSourceEntity(188U);
    msg.setDestination(38337U);
    msg.setDestinationEntity(237U);
    msg.group_name.assign("HYGVBBAKBENHARFSDHVNCLNOHTFSWMVMATIAIXETRKHVTVIJRBXLLPXAJYSXPNYSOZJYUPQQGPUZPBLNMUJQWCKIGIVDXHKPHVCLUERSTZHAPDLKWKUZQABCMGHRSOWYQTPKIULCCKDFTWFGNVEDROJWMXOXIVDAJOJNBTN");
    msg.links = 3850672327U;

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
    msg.setTimeStamp(0.702713516773);
    msg.setSource(60836U);
    msg.setSourceEntity(85U);
    msg.setDestination(468U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("JJVJLGMTKQVBCUGCVOEQ");
    msg.action = 124U;
    msg.grouplist.assign("TQULALRTVGPREPHYYLMBKMGJCRUNDRMXQIXJTEJCXSMLJRNFAPCUIMIQ");

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
    msg.setTimeStamp(0.65510015113);
    msg.setSource(27628U);
    msg.setSourceEntity(2U);
    msg.setDestination(30681U);
    msg.setDestinationEntity(32U);
    msg.groupname.assign("WCVYRAZZPNHG");
    msg.action = 111U;
    msg.grouplist.assign("YRTLWLPOUJYLWCOYPYAVKZBMZGCMBJYKWNDZISTPLTRFGA");

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
    msg.setTimeStamp(0.738311791642);
    msg.setSource(14130U);
    msg.setSourceEntity(190U);
    msg.setDestination(57660U);
    msg.setDestinationEntity(234U);
    msg.groupname.assign("FXXIDDCQJVBWMUJPYLOILRBIJHIPZRCLMLSODZQOJIKFRQBZTCFSQANWDYGGKRHGUNQSSYONTLPHDCFBGVYZYUJCMIJNNZZS");
    msg.action = 244U;
    msg.grouplist.assign("RHLWGWSZMRTKRNRXMDCXCSJTVFLIASKEYAERKMOGYXDUSVXQUUCODOMJYKVDNUIIDZFTSKODPFVWIUBXGRVLEQHZGHHBKNBRQJQANWTFMEFNRQSFVLYOMIEWTGLAICLLOWSHQWUSVSMHQQHNHJGRPAZQWCCUYYBAKQNZJBXBHFFPECMAVPIUUBPNGGCLSPMWEKE");

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
    msg.setTimeStamp(0.153197386956);
    msg.setSource(16928U);
    msg.setSourceEntity(230U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(184U);
    msg.value = 0.744427230396;
    msg.sys_src = 19770U;

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
    msg.setTimeStamp(0.853595895064);
    msg.setSource(30905U);
    msg.setSourceEntity(173U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(146U);
    msg.value = 0.392513846737;
    msg.sys_src = 53815U;

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
    msg.setTimeStamp(0.00522362014464);
    msg.setSource(34348U);
    msg.setSourceEntity(192U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(53U);
    msg.value = 0.49772495451;
    msg.sys_src = 22006U;

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
    msg.setTimeStamp(0.412250991769);
    msg.setSource(2078U);
    msg.setSourceEntity(16U);
    msg.setDestination(9172U);
    msg.setDestinationEntity(108U);
    msg.value = 0.341543559802;
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
    msg.setTimeStamp(0.933913367659);
    msg.setSource(58522U);
    msg.setSourceEntity(95U);
    msg.setDestination(32388U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0920835384785;
    msg.units = 140U;

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
    msg.setTimeStamp(0.372741764484);
    msg.setSource(2731U);
    msg.setSourceEntity(237U);
    msg.setDestination(40794U);
    msg.setDestinationEntity(207U);
    msg.value = 0.417084087622;
    msg.units = 23U;

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
    msg.setTimeStamp(0.96171081399);
    msg.setSource(64224U);
    msg.setSourceEntity(181U);
    msg.setDestination(61295U);
    msg.setDestinationEntity(82U);
    msg.base_lat = 0.518024747589;
    msg.base_lon = 0.22246720456;
    msg.base_time = 0.680969560948;

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
    msg.setTimeStamp(0.591556890874);
    msg.setSource(4974U);
    msg.setSourceEntity(167U);
    msg.setDestination(34831U);
    msg.setDestinationEntity(213U);
    msg.base_lat = 0.0123880895779;
    msg.base_lon = 0.268624303977;
    msg.base_time = 0.713600433419;

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
    msg.setTimeStamp(0.627475750489);
    msg.setSource(4288U);
    msg.setSourceEntity(55U);
    msg.setDestination(31027U);
    msg.setDestinationEntity(240U);
    msg.base_lat = 0.0784599082077;
    msg.base_lon = 0.606474274976;
    msg.base_time = 0.679710515356;

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
    msg.setTimeStamp(0.0869639002243);
    msg.setSource(11906U);
    msg.setSourceEntity(41U);
    msg.setDestination(6418U);
    msg.setDestinationEntity(59U);
    msg.base_lat = 0.543531506686;
    msg.base_lon = 0.80155732187;
    msg.base_time = 0.984470921189;
    const char tmp_msg_0[] = {-127, -105, -11, -85, -106, -91, -65, -57, -86, 86, -120, -87, -80, 49, 64, -109, 90, 9, 86, -60, 30, -43, -42, -111, -65, -29, -66, 123, -35, -100, -113, -118, -40, 0, -106, 62, 0, -81, -68, 85, -96, -101, -106, -122, 69, -111, -98, -47, 85, 124, -117, 68};
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
    msg.setTimeStamp(0.554829180819);
    msg.setSource(20207U);
    msg.setSourceEntity(35U);
    msg.setDestination(58693U);
    msg.setDestinationEntity(209U);
    msg.base_lat = 0.0383193089253;
    msg.base_lon = 0.18628497261;
    msg.base_time = 0.749632035676;
    const char tmp_msg_0[] = {67, 5, -2, -76, -107, 96, 105, -51, 104, 67, -11, 59, 90, -47, -17, 108, 72, -84, -32, -70, -17, -82, 29, 0, 98, -92, -36, 94, -25, 56, 89, -122, -109, -18, -45, -113, -28, -126, -17, 73, 24, 43, 17, 26, -18, -82, 48, -21, 124, 111, -38, -26, -3, 118, 29, 102, 94, -123, 122, 112, 88, 32, 66, -10, -14, -77, 1, 27, -120, -92, -64, 90, -77, 119, 97, 97, -67, -103, 99, -123, 48, 10, 92, 66, 83, 117, 12, 18, 31, -108, 39, 68, -73, 24, 10, -110, -105, -25, 92, -53, -21, 108, 53, -19, -127, 18, -125, 4, 20, -1, 101, -104, 96, -64, -120, -5, -43, -98, 113, 85, 52, 69, 110, 43, 108, 125, 112, -52, -123, 8, -61, 66, 60, 54, 33, 52, 72, 90, 68, -89, -98, 7, 104, -1, 77, 126, -69, -9, 72, -120, -12, -109, -25, -10, 109, 47, -60, -115, -51, -88, -37, 63, -111, 5, -98, 69, 60, 61, -116, 105, 51, -31, -41, -100, -22, -68, -69, -33, 56, 38, -34, -75, 2, -33, -94, 32, 79, 33, -18, -102, -45, 6};
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
    msg.setTimeStamp(0.989051738185);
    msg.setSource(58003U);
    msg.setSourceEntity(169U);
    msg.setDestination(29113U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.370937041985;
    msg.base_lon = 0.928368649696;
    msg.base_time = 0.696784682914;
    const char tmp_msg_0[] = {-87, 115, 86, -67, -78, 107, -91, -124, -127, -101, 62, -83, 21, 88, -66, -98, 30, 65, 75, 100, 61, 71, 51, 97, -71, 63, 10, 20, -122, 39, 117, -92, 117, -30, 79, 34, -119, -42, -126, -39, -96, 28, 28, 32, 82, -1, -22, -24, -56, 113, -30, 64, 2, 118, 118, -48, 83, -86, -29, 44, -31, 103, -54, 36, 61, -116, -31, -24, -49, -124, 6, -17, -36, -19, -87, 50, 95, -29, 103, 119, 7, -55, -73, -115, 123, 11, -125, -97, 78, 17, -16, -6, 64, 95, -65, 32, -30, -58, 65, 114, 52, -24, -49, 7, 112, -67, -25, 6, 114, -112, 15, -31, -3, -53, -54, 61, -64, -107, 27, 84, -116, -101, -10, 100, 6, 118, -117, 55, 42, 47, -33, -27, -86, 10, -128, -5, -45, -98, 120, 92, 121, 95, -98, -123, -96, -51, 113, 106, -14, 65, 11, -61, -41, -49, 66, 53, 115, 103, -11, -18, -2, 45, -53, 36, 1, 18, -54, -75, -111, 57, -122, 39, -101, 62, -70, 77, 83, 80, -62, 49, 8, -41, -41, 44, -97, -84, 117, 109, 14, -119, -5, 84, 6, 45, 34, 116, -39, 101, -60, -104, -91, 52, -123, -85, -80, -59, -65, 2, -82, -93, -3, 57, -60, 67};
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
    msg.setTimeStamp(0.446577491479);
    msg.setSource(14972U);
    msg.setSourceEntity(14U);
    msg.setDestination(26448U);
    msg.setDestinationEntity(137U);
    msg.sys_id = 31239U;
    msg.priority = 14;
    msg.x = 16209;
    msg.y = -22583;
    msg.z = 29876;
    msg.t = 28530;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 60833U;
    tmp_msg_0.lat = 0.976101626852;
    tmp_msg_0.lon = 0.14364554833;
    tmp_msg_0.z = 0.194019302872;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.speed = 0.908534941251;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.syringe0 = 240U;
    tmp_msg_0.syringe1 = 205U;
    tmp_msg_0.syringe2 = 219U;
    tmp_msg_0.custom.assign("ICHEGIOUXXVGUDHTCKNVPZKVQUQIGPFIUFTJEAFKHTXQMINMZRRDBCTLJZSEWTEQJTNGPVKLQABDDJSXNVRWOUXRTMEYKFMHARGYWQJQOTHAQZLSSBRYALVASHIKUZLDJVIGTFOLEAYXOZJSPOIFQMJYHXXOWYEZWNKN");
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
    msg.setTimeStamp(0.326872098037);
    msg.setSource(34403U);
    msg.setSourceEntity(189U);
    msg.setDestination(20845U);
    msg.setDestinationEntity(54U);
    msg.sys_id = 32651U;
    msg.priority = 36;
    msg.x = -8255;
    msg.y = -27723;
    msg.z = -17988;
    msg.t = 15172;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.262546283679;
    tmp_msg_0.width = 0.0746125170023;
    tmp_msg_0.length = 0.29722233954;
    tmp_msg_0.bearing = 0.794791724302;
    tmp_msg_0.pxl = 7558;
    tmp_msg_0.encoding = 189U;
    const char tmp_tmp_msg_0_0[] = {66, -23, -13, -116, 44, 28, 95, -94, -117, 117, 41, -126, -31, -26, 52, -9, 68, -58, 28, -16, -128, -55};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.848824104161);
    msg.setSource(62458U);
    msg.setSourceEntity(36U);
    msg.setDestination(44648U);
    msg.setDestinationEntity(42U);
    msg.sys_id = 41680U;
    msg.priority = 38;
    msg.x = 25474;
    msg.y = -11605;
    msg.z = 6563;
    msg.t = 5012;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 227U;
    tmp_msg_0.name.assign("UEOGMXVYHKXUNTDLRXKHWZMNZPRHGBBZJEJGIQAJBNQODGVIIRVDAMCWFQVCCIASHKJUAVCTXWUTKYQQAHOBWTQEZOTFOMSIYAROMPONLAESDFCZTNKBRRTSR");
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
    msg.setTimeStamp(0.306116028338);
    msg.setSource(26999U);
    msg.setSourceEntity(91U);
    msg.setDestination(34059U);
    msg.setDestinationEntity(136U);
    msg.req_id = 49064U;
    msg.type = 185U;
    msg.max_size = 21943U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.124203142959;
    tmp_msg_0.base_lon = 0.732402895387;
    tmp_msg_0.base_time = 0.000472513605633;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 1932U;
    tmp_tmp_msg_0_0.priority = -125;
    tmp_tmp_msg_0_0.x = -17174;
    tmp_tmp_msg_0_0.y = -9296;
    tmp_tmp_msg_0_0.z = -3347;
    tmp_tmp_msg_0_0.t = -10167;
    IMC::Distance tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.validity = 180U;
    IMC::DeviceState tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.546865971983;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.675703929044;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.253209329947;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.phi = 0.528727349768;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.theta = 0.841286693925;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.psi = 0.518190922291;
    tmp_tmp_tmp_msg_0_0_0.location.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.value = 0.0932661221111;
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
    msg.setTimeStamp(0.682762416693);
    msg.setSource(60363U);
    msg.setSourceEntity(240U);
    msg.setDestination(46725U);
    msg.setDestinationEntity(100U);
    msg.req_id = 64352U;
    msg.type = 74U;
    msg.max_size = 34113U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0423133279312;
    tmp_msg_0.base_lon = 0.435685662709;
    tmp_msg_0.base_time = 0.216375211777;
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
    msg.setTimeStamp(0.158834921848);
    msg.setSource(35008U);
    msg.setSourceEntity(102U);
    msg.setDestination(44928U);
    msg.setDestinationEntity(80U);
    msg.req_id = 52873U;
    msg.type = 219U;
    msg.max_size = 34331U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.997355451893;
    tmp_msg_0.base_lon = 0.663809948469;
    tmp_msg_0.base_time = 0.00881120153807;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 20730U;
    tmp_tmp_msg_0_0.destination = 65089U;
    tmp_tmp_msg_0_0.timeout = 0.679289711915;
    IMC::VSWR tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.192737637026;
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
    msg.setTimeStamp(0.165528392693);
    msg.setSource(50042U);
    msg.setSourceEntity(198U);
    msg.setDestination(39813U);
    msg.setDestinationEntity(63U);
    msg.original_source = 11932U;
    msg.destination = 14876U;
    msg.timeout = 0.501927058865;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 70U;
    tmp_msg_0.text.assign("NIEQTPSMPRMSRPVGVKBVZXOIPZTKFJDRBYPWRGHNXNCUZFWQSWXWGHDGHJJEBBCSLZYPTSAUNYPATUVCGICHUZXLYOCPEAZJLMDQHVOPKWXPMILWJMFXVUKUUQRGHQJQRIBLZXTHAMSACGDHOFANTRZYLCOEVTYQDAMINZTILDNAGBLKYCAGXFYHFOVYSICOQWNWOHWRJQJDEEKFTIKBYOZQILJ");
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
    msg.setTimeStamp(0.929027671028);
    msg.setSource(12006U);
    msg.setSourceEntity(18U);
    msg.setDestination(11341U);
    msg.setDestinationEntity(61U);
    msg.original_source = 45114U;
    msg.destination = 15658U;
    msg.timeout = 0.459429518882;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BYOZNMVNAJMFLXSGIPADJXIRAYAFDDNKFBAQUPAYPUXVZOKLKXLUHOBBICCNIOREMBSCEASHMEWNRKZDGIHYJPWDVPDVWNAOVUSTXFAHJCYIRLLRJLQBX");
    tmp_msg_0.lat = 0.163865732787;
    tmp_msg_0.lon = 0.507855374905;
    tmp_msg_0.depth = 0.993580486724;
    tmp_msg_0.query_channel = 21U;
    tmp_msg_0.reply_channel = 112U;
    tmp_msg_0.transponder_delay = 68U;
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
    msg.setTimeStamp(0.0239757701537);
    msg.setSource(4723U);
    msg.setSourceEntity(45U);
    msg.setDestination(62385U);
    msg.setDestinationEntity(157U);
    msg.original_source = 33173U;
    msg.destination = 2303U;
    msg.timeout = 0.669240436975;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("UFZNXAJGTTFTOIRGFQQUGNEOSHBESJSXRCPUSNCOBDITIQKZSEKDOWBZYYYOSZWICBDCHFJOPJLVZBZACQKDPGDAYXEYVOHFURMMQNJNJIREDHGWVUTZRDFLPLVTXEUREQIKLLVNMWXKDQVBWJVHGICRWCBPYHABVEXWNSFARPPZCLUPXMQPLVFOGFJRJPKAYFESMHAWIYMWUNLGCZYSUTWANA");
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.129568779505);
    msg.setSource(54091U);
    msg.setSourceEntity(224U);
    msg.setDestination(27937U);
    msg.setDestinationEntity(36U);
    msg.id = 126U;
    msg.range = 0.521147913654;

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
    msg.setTimeStamp(0.530335757111);
    msg.setSource(57456U);
    msg.setSourceEntity(235U);
    msg.setDestination(60485U);
    msg.setDestinationEntity(60U);
    msg.id = 191U;
    msg.range = 0.606963797941;

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
    msg.setTimeStamp(0.853116290755);
    msg.setSource(10493U);
    msg.setSourceEntity(131U);
    msg.setDestination(60947U);
    msg.setDestinationEntity(79U);
    msg.id = 231U;
    msg.range = 0.300790045868;

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
    msg.setTimeStamp(0.415914656343);
    msg.setSource(48070U);
    msg.setSourceEntity(130U);
    msg.setDestination(14824U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("CXETRCGXELPMSDWOIHZMBFKUEWRAGYZLXXCODFRDUJWLPGUAKCAXKEVKWLFEGBAJBBGOQXFHGCPIURYEHUKOZPNSWBWHHUYHTRHJTPRJOSJRXVZAPLRUDKSBFRIQSXWNXTNJEAMOQGFAOUTVYYNMCPIKMSQDNINSMZBGEEGQDTSYXTDDYNIKOMAMAJHPGBVWNF");
    msg.lat = 0.0581112756632;
    msg.lon = 0.97749814705;
    msg.depth = 0.782090673799;
    msg.query_channel = 153U;
    msg.reply_channel = 161U;
    msg.transponder_delay = 66U;

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
    msg.setTimeStamp(0.313700360663);
    msg.setSource(65106U);
    msg.setSourceEntity(196U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("IXSDSSGSIDNYZMROOXZRKUMXGOLGTTQACFIHPWDWAHWJBLMMAXLSJDWKYPSIVTCRFJLYOWDBYZGINFHFKMFTBWSBAXUUFJVXBKCVORHQBVOQQVARLUZTVOPRQSTUCNPKEIDIGWPSVBMUGQCZJGBHGZPMXZANHLNETILCPKL");
    msg.lat = 0.15428102012;
    msg.lon = 0.77013516505;
    msg.depth = 0.330214856702;
    msg.query_channel = 18U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 253U;

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
    msg.setTimeStamp(0.109234223069);
    msg.setSource(20358U);
    msg.setSourceEntity(251U);
    msg.setDestination(13968U);
    msg.setDestinationEntity(140U);
    msg.beacon.assign("RQKPGKITCGTAYTSDUPSZEJNCIXDRFWMUBKTRCBDKOEWVUQWFIOJIBRHYQTAYQBDLVFFNGJHOLQNAJWBEAQKUONLDFYVREZYIYLWXGLCOEPWKGXSHTKVMMFLCVLLTDPBIGUMJNXTJGPSNBRZUVPAYGKAZEXOSNTHSACTJORNODCHEXXWYDZVSL");
    msg.lat = 0.384708476545;
    msg.lon = 0.348839097883;
    msg.depth = 0.735981784654;
    msg.query_channel = 43U;
    msg.reply_channel = 166U;
    msg.transponder_delay = 221U;

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
    msg.setTimeStamp(0.802109771488);
    msg.setSource(25678U);
    msg.setSourceEntity(137U);
    msg.setDestination(53155U);
    msg.setDestinationEntity(38U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.151950965275);
    msg.setSource(53767U);
    msg.setSourceEntity(155U);
    msg.setDestination(62767U);
    msg.setDestinationEntity(117U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.387805905205);
    msg.setSource(44663U);
    msg.setSourceEntity(105U);
    msg.setDestination(12267U);
    msg.setDestinationEntity(175U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.526278299845);
    msg.setSource(8361U);
    msg.setSourceEntity(166U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(239U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 1931U;
    tmp_msg_0.value = 19U;
    tmp_msg_0.error.assign("MPAOBCZTPGNSMZCPBOXEGNIDUUNOZJVDQLMBEARZRKSVTZPBPIQDBGKKJFUEANWYMFARPJSVRAVHOJBHAYWRHTHNMKXUQHTQLRVQZKASTZAVJUUMTIOBSMFE");
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
    msg.setTimeStamp(0.765614547475);
    msg.setSource(61681U);
    msg.setSourceEntity(80U);
    msg.setDestination(6336U);
    msg.setDestinationEntity(252U);
    IMC::Docking tmp_msg_0;
    tmp_msg_0.target.assign("LWQQFXCKCGIUWVHRYAKOMCBYYVSOILYNEJIRADZQSXOZIEMRUNNLYSICXBXCYEGNCHAHLAZOLGMBNXRUHDOPRZBKEXWHYNJDUVVZWPAHVYTKZAMPMZTOQDLTUFJJJSYGEHAKDBBGEPJMGBOMJRSPVWGFKPTCJHVVEOFUKENOKICJRNZQCILQXXD");
    tmp_msg_0.max_speed = 0.429688506373;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.lat = 0.455790399596;
    tmp_msg_0.lon = 0.790471749476;
    tmp_msg_0.vehiclefunction = 62U;
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
    msg.setTimeStamp(0.829291129219);
    msg.setSource(28037U);
    msg.setSourceEntity(53U);
    msg.setDestination(10467U);
    msg.setDestinationEntity(67U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 37U;
    tmp_msg_0.request_id = 63255U;
    tmp_msg_0.command = 226U;
    IMC::Takeoff tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.431706477422;
    tmp_tmp_msg_0_0.lon = 0.513841878621;
    tmp_tmp_msg_0_0.z = 0.470391977426;
    tmp_tmp_msg_0_0.z_units = 64U;
    tmp_tmp_msg_0_0.speed = 0.771670797609;
    tmp_tmp_msg_0_0.speed_units = 230U;
    tmp_tmp_msg_0_0.takeoff_pitch = 0.458293473561;
    tmp_tmp_msg_0_0.custom.assign("GURFADAPMODBKKUESAIUZTPUABISCHNLSSGORIOWVVQVOXUDTFWIYHNOVZYFDBKKOVWBFSRNXHOQHCDXLPZKXVJVYCAWXWHJJTARYXIMFCGLQZGDZNMODTYBJMGMCCJSFBDDGRFRWUDTLWNTUXULKPPVBPEEUGBMILNXNJQJQALKOAKXERSFQYZGEYJWRPQCEBVPHSKSYEMXVRJEUZPNTAEL");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 45763U;
    tmp_msg_0.info.assign("JDMYLGLCMTJNDGIGXSBZCUILXNKFWWCNJMJSKKBUNBSWQJ");
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
    IMC::DockingUSBLMessage msg;
    msg.setTimeStamp(0.159253811011);
    msg.setSource(20000U);
    msg.setSourceEntity(67U);
    msg.setDestination(31407U);
    msg.setDestinationEntity(78U);
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GKULPOXCHCCTGGLBGISSCCPNIRVEDJFRDOE");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ETJWAQHWQBFTHTNLVEBPLYVVGCFTKSKEEWRMXGYZFLQGVRUDUGBOTSCIJICASPPAOYFQKMLBDOFEWDXBMXZUKIDRZZNNDLIZCYLCWKHQFDJKUBXSVFAXCDTUNARRPPXTPHJOUNYZJTOVIHWZCIACGLUMNXNHUFQEHLWGUIIGAKDZLMSWKRIMCJRKFDXNQQBPRBOBVJPOPOIZXKYEYENSMPSYCGVTXWV");
    tmp_tmp_msg_0_0.value.assign("KHBLEMUDIYOFRNIGZKWDZQMOOLNLTOPMUWFVNMHTGREHQXLDCPJNGWUGTXARFAERIFHNZJCRYXYJKUNCPDYUZBFBWUUIJFGVTSZVCKZJNGBDAOQMRVIEVZYPVHAEQEHSPXQJEQLFXFAXIKVDMDIKZBQYBSSQAVMOETDLJGYHSAXF");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingUSBLMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingUSBLMessage msg;
    msg.setTimeStamp(0.13018664529);
    msg.setSource(13793U);
    msg.setSourceEntity(116U);
    msg.setDestination(38765U);
    msg.setDestinationEntity(85U);
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 188U;
    tmp_msg_0.value = 160U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingUSBLMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingUSBLMessage msg;
    msg.setTimeStamp(0.173877850993);
    msg.setSource(18670U);
    msg.setSourceEntity(141U);
    msg.setDestination(20595U);
    msg.setDestinationEntity(252U);
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 49324U;
    tmp_msg_0.control_ent = 78U;
    tmp_msg_0.timeout = 0.986631335053;
    tmp_msg_0.loiter_radius = 0.739014215966;
    tmp_msg_0.altitude_interval = 0.764611002173;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingUSBLMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.660271829304);
    msg.setSource(38217U);
    msg.setSourceEntity(188U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(165U);
    msg.op = 81U;
    msg.system.assign("AQFLWYUYZZLDOEHFCXNBKXYGBDKQDBAKTIJMWEWIJUMABHNRFTRCWHHOYWIZXOUEWMPFQSAAWCCHRJBH");
    msg.range = 0.397925144668;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 120U;
    tmp_msg_0.step_number = 54U;
    tmp_msg_0.step.assign("ETEMGUDXQEXWXLYNKTARUSCDEIYJLZTRJXDIFUDQPFIZMFIEQJYLNJTNLXPTAZWRVJAOBXGQBHBAEVMYBJKOCDUSSLVRXXBMGHJMMDWDRBAORYNWAFSBZODRDKFWESOPUHISINKKYAHFYZKKWOGFUPRQYLYFVBPZQGTPLIZCGNGLPUSGGWCNUTKHSCRNAZPZILFUVVJVVWAHDOHTQMIWRMABJQMTVCCZFW");
    tmp_msg_0.flags = 67U;
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
    msg.setTimeStamp(0.610795769291);
    msg.setSource(26583U);
    msg.setSourceEntity(233U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(248U);
    msg.op = 38U;
    msg.system.assign("UFNNVWUNOHXWTNJJMKTKBLLJGTRMNAOXQYDNZMRAPRWKCERESSUSIWAHTBDMUCTGBQFGNOWKSRUBTXSIOWZZQEDQZOWEYZRGCXTDJKKFMLPIWKRUYWXUPNZSPCCSDYEDMFUMOPOFFLLYELXQSIXLVGVJILYZCNHEMHKLOBXDFCDCZPF");
    msg.range = 0.40173163144;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.561221872299;
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
    msg.setTimeStamp(0.172683406957);
    msg.setSource(41845U);
    msg.setSourceEntity(49U);
    msg.setDestination(48152U);
    msg.setDestinationEntity(63U);
    msg.op = 201U;
    msg.system.assign("LMPJLQBDYBMLLEAADKTSMOWQPTHMEZESFIZOSOOYGJQLVXHGHRGFXYBTHLSXBIRVATBJPKNKNEXXFPUCGYMKXQDUSIAUZCNLPBDOUDSBCBOROOJQBMSAYUYVHFKPJYQZRZTJNYJWWWPQGVHQXKLWLPAUXADRFEOIFZBFDGZCTNXEGYZHNYCEXWVIMVKTUR");
    msg.range = 0.305671768596;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 63350U;
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
    msg.setTimeStamp(0.971107824097);
    msg.setSource(102U);
    msg.setSourceEntity(106U);
    msg.setDestination(61314U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.63740659263);
    msg.setSource(15436U);
    msg.setSourceEntity(149U);
    msg.setDestination(20786U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.138005356514);
    msg.setSource(49932U);
    msg.setSourceEntity(178U);
    msg.setDestination(32553U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.00562211628224);
    msg.setSource(647U);
    msg.setSourceEntity(166U);
    msg.setDestination(58205U);
    msg.setDestinationEntity(150U);
    msg.list.assign("ZGUQKGWHODA");

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
    msg.setTimeStamp(0.436020277178);
    msg.setSource(31821U);
    msg.setSourceEntity(116U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(64U);
    msg.list.assign("ITDNJSZYMMAGKHYZQAFXGLFKENVBIIQXKUNSLHJLYRBCESBLZVJAUQQAGDBZIPOHSYGUGWVOUAEPKDEJBSPUBZTHYEKLSNMCTRBOWLCPRMCUJPMTJPVRNXWNXQFSDERZFZADJKQDZGWDDOWGWIEFFPKONLCCCBVSHXYBFREMKDVIAOLCQJDWMNTICWOHZRFHL");

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
    msg.setTimeStamp(0.702070428294);
    msg.setSource(56683U);
    msg.setSourceEntity(150U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(138U);
    msg.list.assign("CLGAMTYQVHBWCMOHVWMTSCELQVOSDOZFFDIDJUWTPZNGPFQCFIOUKKJDJAQCBOAYZUEEIGUXDMNJI");

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
    msg.setTimeStamp(0.760937253146);
    msg.setSource(7404U);
    msg.setSourceEntity(60U);
    msg.setDestination(4826U);
    msg.setDestinationEntity(149U);
    msg.peer.assign("TVLWCCFRKGBBHPOJPBESHHUFZNYIVJBJQRPSRYAFZTINOSGUKCZHISHPILICLHIQNDHQK");
    msg.rssi = 0.315045570619;
    msg.integrity = 29973U;

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
    msg.setTimeStamp(0.951107970892);
    msg.setSource(41919U);
    msg.setSourceEntity(139U);
    msg.setDestination(11469U);
    msg.setDestinationEntity(220U);
    msg.peer.assign("ZFNQIDILUQXXPYRAUIANMZGPVIPHTSPEELUVDXWHMUBRCJCDCZZMJTREPKCTFIPXYVQMFJOWWLYWJKWROATLTEJYYUKOWWNKIPBNQEFGBMGVONFUCDQLEHZTGHNRCAVZOLLEVREONQVXSVQYSMCGFHIDXKNGJXHUVLMBIEBJDQAXKKPONSIADUBGJOBQTR");
    msg.rssi = 0.293075122308;
    msg.integrity = 12534U;

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
    msg.setTimeStamp(0.925825025);
    msg.setSource(29128U);
    msg.setSourceEntity(101U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(3U);
    msg.peer.assign("RMTNUPBIWMZNKNROHEUMGQNEMIUTLVDGLWCCDFOZTKPLBXZRFZUHFUWZQAGSEJTMTKPWBJGKRXSQXETITDJWOOMLYRWXPQVZKWCRHWXGQVAQAIEFYVBYDF");
    msg.rssi = 0.249216780059;
    msg.integrity = 9297U;

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
    msg.setTimeStamp(0.668203037479);
    msg.setSource(20022U);
    msg.setSourceEntity(208U);
    msg.setDestination(5643U);
    msg.setDestinationEntity(246U);
    msg.value = -15597;

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
    msg.setTimeStamp(0.314293483568);
    msg.setSource(20704U);
    msg.setSourceEntity(41U);
    msg.setDestination(55394U);
    msg.setDestinationEntity(2U);
    msg.value = 4878;

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
    msg.setTimeStamp(0.81005981238);
    msg.setSource(24649U);
    msg.setSourceEntity(166U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(220U);
    msg.value = 6557;

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
    msg.setTimeStamp(0.966322290462);
    msg.setSource(22061U);
    msg.setSourceEntity(12U);
    msg.setDestination(10070U);
    msg.setDestinationEntity(79U);
    msg.value = 0.532513012157;

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
    msg.setTimeStamp(0.515304876623);
    msg.setSource(43885U);
    msg.setSourceEntity(203U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(135U);
    msg.value = 0.136154721426;

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
    msg.setTimeStamp(0.395313355118);
    msg.setSource(36972U);
    msg.setSourceEntity(246U);
    msg.setDestination(24610U);
    msg.setDestinationEntity(64U);
    msg.value = 0.429880960881;

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
    msg.setTimeStamp(0.959258304854);
    msg.setSource(50013U);
    msg.setSourceEntity(34U);
    msg.setDestination(6220U);
    msg.setDestinationEntity(118U);
    msg.value = 0.419498384709;

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
    msg.setTimeStamp(0.38745850547);
    msg.setSource(57562U);
    msg.setSourceEntity(94U);
    msg.setDestination(48835U);
    msg.setDestinationEntity(212U);
    msg.value = 0.66132767413;

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
    msg.setTimeStamp(0.973783459131);
    msg.setSource(47133U);
    msg.setSourceEntity(82U);
    msg.setDestination(62846U);
    msg.setDestinationEntity(78U);
    msg.value = 0.613438280594;

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
    msg.setTimeStamp(0.0670429338719);
    msg.setSource(44781U);
    msg.setSourceEntity(201U);
    msg.setDestination(2721U);
    msg.setDestinationEntity(88U);
    msg.validity = 30418U;
    msg.type = 240U;
    msg.utc_year = 2361U;
    msg.utc_month = 174U;
    msg.utc_day = 199U;
    msg.utc_time = 0.302710668827;
    msg.lat = 0.881925325421;
    msg.lon = 0.748486522474;
    msg.height = 0.964219668091;
    msg.satellites = 12U;
    msg.cog = 0.613969301409;
    msg.sog = 0.4552297306;
    msg.hdop = 0.61311553545;
    msg.vdop = 0.0749289168732;
    msg.hacc = 0.00045319755111;
    msg.vacc = 0.0412735411595;

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
    msg.setTimeStamp(0.39466473526);
    msg.setSource(48402U);
    msg.setSourceEntity(161U);
    msg.setDestination(5078U);
    msg.setDestinationEntity(184U);
    msg.validity = 35694U;
    msg.type = 107U;
    msg.utc_year = 65257U;
    msg.utc_month = 52U;
    msg.utc_day = 94U;
    msg.utc_time = 0.619882507701;
    msg.lat = 0.941250804412;
    msg.lon = 0.840758341497;
    msg.height = 0.992130958136;
    msg.satellites = 103U;
    msg.cog = 0.892333439131;
    msg.sog = 0.222567978168;
    msg.hdop = 0.303412224055;
    msg.vdop = 0.250572687805;
    msg.hacc = 0.536202871451;
    msg.vacc = 0.281026839976;

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
    msg.setTimeStamp(0.016366601885);
    msg.setSource(22775U);
    msg.setSourceEntity(36U);
    msg.setDestination(41739U);
    msg.setDestinationEntity(49U);
    msg.validity = 9405U;
    msg.type = 201U;
    msg.utc_year = 11508U;
    msg.utc_month = 87U;
    msg.utc_day = 186U;
    msg.utc_time = 0.0336475366514;
    msg.lat = 0.115048483754;
    msg.lon = 0.447296922051;
    msg.height = 0.0476961138112;
    msg.satellites = 3U;
    msg.cog = 0.422695915216;
    msg.sog = 0.826896710096;
    msg.hdop = 0.552520182319;
    msg.vdop = 0.688779437481;
    msg.hacc = 0.773186182594;
    msg.vacc = 0.840085865627;

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
    msg.setTimeStamp(0.673067312208);
    msg.setSource(57566U);
    msg.setSourceEntity(223U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(200U);
    msg.time = 0.350047612649;
    msg.phi = 0.817972359528;
    msg.theta = 0.32713180736;
    msg.psi = 0.304862352483;
    msg.psi_magnetic = 0.0967430272315;

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
    msg.setTimeStamp(0.556976701456);
    msg.setSource(27004U);
    msg.setSourceEntity(23U);
    msg.setDestination(50613U);
    msg.setDestinationEntity(64U);
    msg.time = 0.112827004655;
    msg.phi = 0.179254923788;
    msg.theta = 0.90785201509;
    msg.psi = 0.16250633032;
    msg.psi_magnetic = 0.25474809876;

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
    msg.setTimeStamp(0.913784045283);
    msg.setSource(37518U);
    msg.setSourceEntity(28U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(127U);
    msg.time = 0.702177578945;
    msg.phi = 0.537346350464;
    msg.theta = 0.8624496041;
    msg.psi = 0.606979249487;
    msg.psi_magnetic = 0.575255732959;

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
    msg.setTimeStamp(0.050782110082);
    msg.setSource(35077U);
    msg.setSourceEntity(88U);
    msg.setDestination(39938U);
    msg.setDestinationEntity(104U);
    msg.time = 0.958906851413;
    msg.x = 0.329165412467;
    msg.y = 0.632935901987;
    msg.z = 0.985978992518;
    msg.timestep = 0.615931264153;

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
    msg.setTimeStamp(0.755376177133);
    msg.setSource(39749U);
    msg.setSourceEntity(229U);
    msg.setDestination(17129U);
    msg.setDestinationEntity(42U);
    msg.time = 0.242916726574;
    msg.x = 0.115046756551;
    msg.y = 0.828211562392;
    msg.z = 0.0823846209806;
    msg.timestep = 0.225699953003;

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
    msg.setTimeStamp(0.891401113688);
    msg.setSource(57353U);
    msg.setSourceEntity(0U);
    msg.setDestination(31778U);
    msg.setDestinationEntity(145U);
    msg.time = 0.652353446418;
    msg.x = 0.860678148775;
    msg.y = 0.487684074831;
    msg.z = 0.319845802951;
    msg.timestep = 0.141439797916;

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
    msg.setTimeStamp(0.523881433822);
    msg.setSource(25985U);
    msg.setSourceEntity(231U);
    msg.setDestination(49206U);
    msg.setDestinationEntity(143U);
    msg.time = 0.919407883875;
    msg.x = 0.225676584907;
    msg.y = 0.505846792786;
    msg.z = 0.300041300465;

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
    msg.setTimeStamp(0.321008702008);
    msg.setSource(56938U);
    msg.setSourceEntity(198U);
    msg.setDestination(23336U);
    msg.setDestinationEntity(247U);
    msg.time = 0.180580929476;
    msg.x = 0.939490327263;
    msg.y = 0.97755155377;
    msg.z = 0.978296746601;

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
    msg.setTimeStamp(0.767466196888);
    msg.setSource(23201U);
    msg.setSourceEntity(68U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(33U);
    msg.time = 0.737863601359;
    msg.x = 0.285594023389;
    msg.y = 0.15335366924;
    msg.z = 0.0338965589705;

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
    msg.setTimeStamp(0.675651216574);
    msg.setSource(23385U);
    msg.setSourceEntity(126U);
    msg.setDestination(63660U);
    msg.setDestinationEntity(99U);
    msg.time = 0.910882302697;
    msg.x = 0.196281474848;
    msg.y = 0.245761785543;
    msg.z = 0.486199690085;

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
    msg.setTimeStamp(0.968699191659);
    msg.setSource(65506U);
    msg.setSourceEntity(109U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(215U);
    msg.time = 0.602115032848;
    msg.x = 0.635692040828;
    msg.y = 0.284768673107;
    msg.z = 0.45426126072;

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
    msg.setTimeStamp(0.661236358026);
    msg.setSource(54593U);
    msg.setSourceEntity(40U);
    msg.setDestination(12665U);
    msg.setDestinationEntity(31U);
    msg.time = 0.355838569807;
    msg.x = 0.0573777401445;
    msg.y = 0.996733650605;
    msg.z = 0.489819372363;

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
    msg.setTimeStamp(0.405935510232);
    msg.setSource(64901U);
    msg.setSourceEntity(163U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(58U);
    msg.time = 0.586781246053;
    msg.x = 0.268298634979;
    msg.y = 0.450789996163;
    msg.z = 0.462874308923;

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
    msg.setTimeStamp(0.0548673984938);
    msg.setSource(22888U);
    msg.setSourceEntity(151U);
    msg.setDestination(709U);
    msg.setDestinationEntity(251U);
    msg.time = 0.136333370548;
    msg.x = 0.738894072774;
    msg.y = 0.711594662606;
    msg.z = 0.426732829374;

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
    msg.setTimeStamp(0.759994009329);
    msg.setSource(62282U);
    msg.setSourceEntity(74U);
    msg.setDestination(49171U);
    msg.setDestinationEntity(169U);
    msg.time = 0.737456732608;
    msg.x = 0.618442993706;
    msg.y = 0.60502884017;
    msg.z = 0.689151308203;

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
    msg.setTimeStamp(0.546025968273);
    msg.setSource(3838U);
    msg.setSourceEntity(193U);
    msg.setDestination(25863U);
    msg.setDestinationEntity(46U);
    msg.validity = 4U;
    msg.x = 0.34390130987;
    msg.y = 0.450786413252;
    msg.z = 0.76658983886;

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
    msg.setTimeStamp(0.918344699579);
    msg.setSource(52380U);
    msg.setSourceEntity(161U);
    msg.setDestination(49564U);
    msg.setDestinationEntity(209U);
    msg.validity = 91U;
    msg.x = 0.796894362558;
    msg.y = 0.209808385106;
    msg.z = 0.576071271655;

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
    msg.setTimeStamp(0.103801045285);
    msg.setSource(27671U);
    msg.setSourceEntity(222U);
    msg.setDestination(16198U);
    msg.setDestinationEntity(50U);
    msg.validity = 213U;
    msg.x = 0.275372534321;
    msg.y = 0.47584631305;
    msg.z = 0.00526425687038;

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
    msg.setTimeStamp(0.771995382294);
    msg.setSource(48740U);
    msg.setSourceEntity(94U);
    msg.setDestination(25248U);
    msg.setDestinationEntity(171U);
    msg.validity = 73U;
    msg.x = 0.367300126706;
    msg.y = 0.210121221837;
    msg.z = 0.744445307338;

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
    msg.setTimeStamp(0.569545142395);
    msg.setSource(61402U);
    msg.setSourceEntity(142U);
    msg.setDestination(58154U);
    msg.setDestinationEntity(51U);
    msg.validity = 90U;
    msg.x = 0.104784336917;
    msg.y = 0.542833486475;
    msg.z = 0.471810104416;

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
    msg.setTimeStamp(0.927132183985);
    msg.setSource(49428U);
    msg.setSourceEntity(43U);
    msg.setDestination(65203U);
    msg.setDestinationEntity(138U);
    msg.validity = 62U;
    msg.x = 0.761419488764;
    msg.y = 0.840689952615;
    msg.z = 0.834592965205;

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
    msg.setTimeStamp(0.047576810765);
    msg.setSource(33648U);
    msg.setSourceEntity(7U);
    msg.setDestination(61252U);
    msg.setDestinationEntity(98U);
    msg.time = 0.44279677338;
    msg.x = 0.441051677054;
    msg.y = 0.537620622027;
    msg.z = 0.216252832139;

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
    msg.setTimeStamp(0.923824416007);
    msg.setSource(29492U);
    msg.setSourceEntity(221U);
    msg.setDestination(62046U);
    msg.setDestinationEntity(175U);
    msg.time = 0.0648493014496;
    msg.x = 0.657380380632;
    msg.y = 0.318736836375;
    msg.z = 0.552102204185;

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
    msg.setTimeStamp(0.242064462097);
    msg.setSource(55039U);
    msg.setSourceEntity(168U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(219U);
    msg.time = 0.198468560587;
    msg.x = 0.735745226854;
    msg.y = 0.149693059293;
    msg.z = 0.324265147893;

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
    msg.setTimeStamp(0.0114218004115);
    msg.setSource(37174U);
    msg.setSourceEntity(145U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(252U);
    msg.validity = 39U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.927443956224;
    tmp_msg_0.beam_height = 0.405433582034;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.154156747613;

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
    msg.setTimeStamp(0.0144323822306);
    msg.setSource(44408U);
    msg.setSourceEntity(109U);
    msg.setDestination(4386U);
    msg.setDestinationEntity(10U);
    msg.validity = 81U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.408502393986;
    tmp_msg_0.beam_height = 0.0289375076607;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.325058356681;

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
    msg.setTimeStamp(0.919244800491);
    msg.setSource(26801U);
    msg.setSourceEntity(221U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(74U);
    msg.validity = 23U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.479614785662;
    tmp_msg_0.beam_height = 0.0549646652893;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.137908994216;

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
    msg.setTimeStamp(0.732874344029);
    msg.setSource(32055U);
    msg.setSourceEntity(130U);
    msg.setDestination(17335U);
    msg.setDestinationEntity(219U);
    msg.value = 0.847458457136;

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
    msg.setTimeStamp(0.229915274089);
    msg.setSource(48526U);
    msg.setSourceEntity(42U);
    msg.setDestination(36800U);
    msg.setDestinationEntity(238U);
    msg.value = 0.986809762669;

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
    msg.setTimeStamp(0.271572711965);
    msg.setSource(17243U);
    msg.setSourceEntity(231U);
    msg.setDestination(3154U);
    msg.setDestinationEntity(37U);
    msg.value = 0.287274790595;

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
    msg.setTimeStamp(0.465129555437);
    msg.setSource(54157U);
    msg.setSourceEntity(17U);
    msg.setDestination(26478U);
    msg.setDestinationEntity(57U);
    msg.value = 0.0206263963747;

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
    msg.setTimeStamp(0.899151247398);
    msg.setSource(62377U);
    msg.setSourceEntity(242U);
    msg.setDestination(58509U);
    msg.setDestinationEntity(36U);
    msg.value = 0.648646637963;

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
    msg.setTimeStamp(0.570605987388);
    msg.setSource(17218U);
    msg.setSourceEntity(250U);
    msg.setDestination(4535U);
    msg.setDestinationEntity(81U);
    msg.value = 0.21779845802;

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
    msg.setTimeStamp(0.639630459536);
    msg.setSource(56337U);
    msg.setSourceEntity(226U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(191U);
    msg.value = 0.414142297155;

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
    msg.setTimeStamp(0.260122101861);
    msg.setSource(62661U);
    msg.setSourceEntity(36U);
    msg.setDestination(57090U);
    msg.setDestinationEntity(18U);
    msg.value = 0.666396204984;

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
    msg.setTimeStamp(0.417195044539);
    msg.setSource(59615U);
    msg.setSourceEntity(161U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(62U);
    msg.value = 0.616394056001;

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
    msg.setTimeStamp(0.859464030789);
    msg.setSource(50390U);
    msg.setSourceEntity(203U);
    msg.setDestination(19242U);
    msg.setDestinationEntity(31U);
    msg.value = 0.412713944923;

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
    msg.setTimeStamp(0.239558577632);
    msg.setSource(48461U);
    msg.setSourceEntity(68U);
    msg.setDestination(34539U);
    msg.setDestinationEntity(23U);
    msg.value = 0.138818224402;

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
    msg.setTimeStamp(0.920049972556);
    msg.setSource(60025U);
    msg.setSourceEntity(249U);
    msg.setDestination(45495U);
    msg.setDestinationEntity(231U);
    msg.value = 0.748097556475;

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
    msg.setTimeStamp(0.747712938171);
    msg.setSource(40493U);
    msg.setSourceEntity(233U);
    msg.setDestination(1481U);
    msg.setDestinationEntity(176U);
    msg.value = 0.731422228294;

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
    msg.setTimeStamp(0.324223647155);
    msg.setSource(62433U);
    msg.setSourceEntity(172U);
    msg.setDestination(2509U);
    msg.setDestinationEntity(6U);
    msg.value = 0.285253595791;

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
    msg.setTimeStamp(0.373114831228);
    msg.setSource(19593U);
    msg.setSourceEntity(170U);
    msg.setDestination(1403U);
    msg.setDestinationEntity(105U);
    msg.value = 0.692839569989;

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
    msg.setTimeStamp(0.456383008023);
    msg.setSource(902U);
    msg.setSourceEntity(196U);
    msg.setDestination(54653U);
    msg.setDestinationEntity(23U);
    msg.value = 0.360324322636;

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
    msg.setTimeStamp(0.0380771407337);
    msg.setSource(51754U);
    msg.setSourceEntity(56U);
    msg.setDestination(37894U);
    msg.setDestinationEntity(232U);
    msg.value = 0.491232712416;

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
    msg.setTimeStamp(0.526971924517);
    msg.setSource(63647U);
    msg.setSourceEntity(0U);
    msg.setDestination(45405U);
    msg.setDestinationEntity(248U);
    msg.value = 0.531229227846;

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
    msg.setTimeStamp(0.52870754675);
    msg.setSource(4255U);
    msg.setSourceEntity(175U);
    msg.setDestination(811U);
    msg.setDestinationEntity(177U);
    msg.value = 0.286827391002;

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
    msg.setTimeStamp(0.35779070482);
    msg.setSource(41962U);
    msg.setSourceEntity(44U);
    msg.setDestination(7947U);
    msg.setDestinationEntity(184U);
    msg.value = 0.057315981093;

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
    msg.setTimeStamp(0.170798668707);
    msg.setSource(30506U);
    msg.setSourceEntity(195U);
    msg.setDestination(57541U);
    msg.setDestinationEntity(98U);
    msg.value = 0.595921622477;

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
    msg.setTimeStamp(0.0537761115207);
    msg.setSource(41769U);
    msg.setSourceEntity(117U);
    msg.setDestination(40407U);
    msg.setDestinationEntity(233U);
    msg.value = 0.789553810837;

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
    msg.setTimeStamp(0.318404193422);
    msg.setSource(45592U);
    msg.setSourceEntity(1U);
    msg.setDestination(60279U);
    msg.setDestinationEntity(234U);
    msg.value = 0.744463008505;

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
    msg.setTimeStamp(0.989088118319);
    msg.setSource(33460U);
    msg.setSourceEntity(90U);
    msg.setDestination(59611U);
    msg.setDestinationEntity(193U);
    msg.value = 0.853151097363;

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
    msg.setTimeStamp(0.381594095911);
    msg.setSource(54876U);
    msg.setSourceEntity(65U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(206U);
    msg.direction = 0.287254800954;
    msg.speed = 0.455365863108;
    msg.turbulence = 0.675756556245;

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
    msg.setTimeStamp(0.0208217508624);
    msg.setSource(19587U);
    msg.setSourceEntity(100U);
    msg.setDestination(64231U);
    msg.setDestinationEntity(143U);
    msg.direction = 0.317292914501;
    msg.speed = 0.381990262039;
    msg.turbulence = 0.698096298871;

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
    msg.setTimeStamp(0.735610943262);
    msg.setSource(44721U);
    msg.setSourceEntity(113U);
    msg.setDestination(24566U);
    msg.setDestinationEntity(20U);
    msg.direction = 0.376700473423;
    msg.speed = 0.683568657335;
    msg.turbulence = 0.304506287637;

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
    msg.setTimeStamp(0.861785162164);
    msg.setSource(23997U);
    msg.setSourceEntity(165U);
    msg.setDestination(51717U);
    msg.setDestinationEntity(107U);
    msg.value = 0.739544370812;

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
    msg.setTimeStamp(0.676763838563);
    msg.setSource(41229U);
    msg.setSourceEntity(210U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(137U);
    msg.value = 0.322572037501;

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
    msg.setTimeStamp(0.464868663172);
    msg.setSource(8939U);
    msg.setSourceEntity(202U);
    msg.setDestination(62307U);
    msg.setDestinationEntity(41U);
    msg.value = 0.841991302182;

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
    msg.setTimeStamp(0.134067436248);
    msg.setSource(52123U);
    msg.setSourceEntity(45U);
    msg.setDestination(10251U);
    msg.setDestinationEntity(187U);
    msg.value.assign("OPACGJMPKDGFHFKCPAYPTZNDZYISLCLXYRVNXMPDGJGJTDSVPYDGUBMILFZRONJGBNBDYOOMQVAYCRTMLTBFQHVUCCKQZRYNYJSHOTMLEMACTRWEWQECDQYWAXUKQIWIIPHWJFSVIVHXUEXKOBXFABSMCRTZTQJWQHDXHLWZPKPIZALNUVRSJUUPOKTZXSQBIFRZROFSATOJBDHKBQESFNWANUMUNDLWGKGSEZIHELXREFVILEMYVJVKEGCUAO");

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
    msg.setTimeStamp(0.638826317509);
    msg.setSource(41050U);
    msg.setSourceEntity(23U);
    msg.setDestination(15031U);
    msg.setDestinationEntity(32U);
    msg.value.assign("DMLAMZGKHZTFAVNGYORGZMOKSVSGHHCGDAMFDJEYKDOOFFELHQSBDWXYZTKPBZQVJIKLOFPDFQLGXAUUUDSMIAEOTNCNILTSBOWKPIRXJQXINVTCNRSZCXJQWUPXYVUOENUCMRIEBYZOHNDJJWJWQQYG");

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
    msg.setTimeStamp(0.756137778433);
    msg.setSource(43352U);
    msg.setSourceEntity(58U);
    msg.setDestination(61413U);
    msg.setDestinationEntity(206U);
    msg.value.assign("CZUJKNITWLDMUCDBDBEKEQQDMSUIIFGHZYYJGLPFCWVFNVNIXREBJDRXSVZKEJPRSIPFORBERTBPQZGQXAEQSBQWJKNSQAVOXOHMWXOTGTMWUGWWNBCFJEJAFR");

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
    msg.setTimeStamp(0.0122652309347);
    msg.setSource(20413U);
    msg.setSourceEntity(189U);
    msg.setDestination(62297U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {-121, 116, 42, 75, 94, 2, 103, 107, 120, -65, -110, 96, 4, 77, 17, 118, 43, -33, 39, 46, 31, 0, 27, 40, 34, 67, -2, -120, -96, -101, 116, 106, -33, 118, -100, 18, 35, -85};
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
    msg.setTimeStamp(0.572464961373);
    msg.setSource(3743U);
    msg.setSourceEntity(238U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(46U);
    const char tmp_msg_0[] = {-108, -41, 19, -78, 11, -106, 60, 107, 119, 13, 38, 14, -112, -94, -68, -7, -70, 42, -70, 102, 65, -58, 22, -77, 126, -32, -68, 37, -127, -9, 55, -60, 29, -59, 33, 114, 26, 23, 106, 78, -10, -81, 20, 54, -49, 27, 9, 35, 15, -67, 2, 112, -78, -96, -123, 59, 3, 42, 1, -68, -11, -33, -39, 13, -74, -6, -44, -48, 98, 7, -8, 85, 124, 87, 55, -73, -74, -54, 91, -38, -22, -28, 100, -65, -8, -47, -100, 118, -19, 46, 5, 3, 85, 101, -40, -57, 37, 14, -26, 77, 106, -53, -102, -5, 37, -44, -86, 99, 18, 47, -121, 95, 100, 114, -55, 10, -75, 18, 55, 107, -110, 89, -104, 45, -42, 11, 9, -17, -48, 9, 54, 95, 107, 5, 108, -71, 19};
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
    msg.setTimeStamp(0.691495202109);
    msg.setSource(28576U);
    msg.setSourceEntity(193U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(131U);
    const char tmp_msg_0[] = {-109, -111, 119, -73, 84, 21, 44, -128, 73, 109, -5, -17, -78, 22, 62, -107, -109, -109, 36, -3, -7, -49, 22, 46, -65, -8, -121, -112, -62, 43, -92, -65, 24, -73, -13, -65, 72, -71, -120, 41, -108, -66, 110, 19, 28, -119, -39, -56, 45, -86, 4, 56, -30};
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
    msg.setTimeStamp(0.516251404513);
    msg.setSource(33986U);
    msg.setSourceEntity(15U);
    msg.setDestination(11933U);
    msg.setDestinationEntity(70U);
    msg.type = 49U;
    msg.frequency = 2858421249U;
    msg.min_range = 64330U;
    msg.max_range = 9902U;
    msg.bits_per_point = 101U;
    msg.scale_factor = 0.999392228923;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.199132839165;
    tmp_msg_0.beam_height = 0.991371517296;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {68, 48, -17, 44, -49, 79, 21, -104, -38, -1, 27, 51, 30, 87, 53, -50, 70, -50, -113, -117, -99, 87, 5, -76, -11, 94, -101, 88, -20, 98, -6, 85, -96, -107, -90, -66, 25, 86, 56, 26, 21, -37, 80, 26, -107, -69, -98, 99, 116, -68, 67, -22, -20, 80, -105, 72, 85, 63, 106, -104, 72, -113, 83, -106, -63, 91, 21, -51, -20, 106, -23, 96, -83, -65, 101, -57, 12, 36, -13, 90, -53, 15, 0, -68, 31, 76, -97, 21, -88, -88, 7, -92, -1, -52, 89, 16, 6, -30, -74, 90, 33, 39, 46, 42, -121, 33, -106, -101, 10, -119, 99, 78};
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
    msg.setTimeStamp(0.524274106983);
    msg.setSource(47873U);
    msg.setSourceEntity(126U);
    msg.setDestination(1843U);
    msg.setDestinationEntity(119U);
    msg.type = 101U;
    msg.frequency = 2338523006U;
    msg.min_range = 44573U;
    msg.max_range = 36425U;
    msg.bits_per_point = 171U;
    msg.scale_factor = 0.95709504692;
    const char tmp_msg_0[] = {51, -114, -64, -14, 44, -11, -46, 43, 121, 76, 84, -10, -50, -78, 59, 12, 20, 115, 63, -88, -76, -18, 44, -59, 74, -64, 46, -62, 106, 66, 36, -8, -27, 36, -33, 100, -116, -17, -68, 12, 79, -74, -45, -115, -86, 99, -34, -47, 61, -28, -64, 92, 6, -93, -57, 104, 68, 69, -4, 87, -26, 72, 102, 110, 12, -109, -17, -115, -121, 36, 121, -79, -5, -3, -110, -75, -41, 117, 90, 25, 75, -114, -38, 6, -56, 2, -56, 119, 21, -81, 49, 116, 64, -116, 119, -5, 6, -66, -104, -64, 10, -12, -67, -90, -30, -98, 54, 12, 64, 5, 108, -71, 29, -87, 65, -118, 117, 98, -25, -10, 35, -114, -72, -68, -97, -49, -46, 40, 52, -45, -108, 14, -61, 38, 73, 14, -111, -28, -73, -45, 118, -37, -54, -7, -17, -23, -6, -59, 118, 54, -63, 86, -58, -70, 67, 74, 116, 92, -47, 126, 76, -51, 82, 120, -5, 70, -90, 102, -36, -98, -57, -120, -14, 113, 17, 63, -13, -5, -123, 71, 117, 117, -76, 50, -53, 115, 94, -18, -40, 79, -72, -10, -10, 120, 1, 2, 33, -10, 32, 58, 82, -50, -15, 101, 121, 16, 116, -34, -83, -11, 12, -42, 85, 69, -36, -42, -99, 88, 0, 124, 79, 25, 81, -118, -102, 125, 12, 73, 105, -33, -10, -91, 109, -54, -127, 14, 79, 117, 16, 53, 23, -16, 74, -9, -78, 90, -57, -34, 12};
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
    msg.setTimeStamp(0.724812023092);
    msg.setSource(29605U);
    msg.setSourceEntity(179U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(252U);
    msg.type = 123U;
    msg.frequency = 1501819238U;
    msg.min_range = 32319U;
    msg.max_range = 24033U;
    msg.bits_per_point = 242U;
    msg.scale_factor = 0.304263854186;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.350801784887;
    tmp_msg_0.beam_height = 0.648457233334;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {88, -48, -55, -124, 30, 36, 43, 55, 122, -22, 114, 47, -68, -86, -59, -102, -106, 48, 26, 17, -6, -78, 123, 115, 15, -112, 106, 72, 78, -73, 48, -79, -105, 68, 86, -24, 48, 101, 7, -71, -28, 24, -37, -125, 62, 123, -121, 9, -114, -90, -80, -60, 62, 115, 80, -60, -8, -43, -114, 9, -71, 121, -126, 122, 120, 91, 12, 32, 57, 95, -79, -35, -76, -101, 77, 46, 64, 46, -88, -62, 21, 93, -37, 55, 48, -34, -74, 10, -123, -1, 26, 76, 52, -14, 103, -117, 44, 114, -38, -92, -27, -20, -121, 16, 118, 2, -44};
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
    msg.setTimeStamp(0.300738181561);
    msg.setSource(14914U);
    msg.setSourceEntity(140U);
    msg.setDestination(41424U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.011972948984);
    msg.setSource(33745U);
    msg.setSourceEntity(17U);
    msg.setDestination(57805U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.601305405729);
    msg.setSource(24666U);
    msg.setSourceEntity(70U);
    msg.setDestination(32968U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.804508517663);
    msg.setSource(49164U);
    msg.setSourceEntity(192U);
    msg.setDestination(43283U);
    msg.setDestinationEntity(121U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.0594418639919);
    msg.setSource(65267U);
    msg.setSourceEntity(119U);
    msg.setDestination(39754U);
    msg.setDestinationEntity(102U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.474013366362);
    msg.setSource(62235U);
    msg.setSourceEntity(148U);
    msg.setDestination(41183U);
    msg.setDestinationEntity(194U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.793085312599);
    msg.setSource(53294U);
    msg.setSourceEntity(169U);
    msg.setDestination(45184U);
    msg.setDestinationEntity(5U);
    msg.value = 0.632722813825;
    msg.confidence = 0.511659604149;
    msg.opmodes.assign("JNMKKIRYCBPBJIZZFVUAKUVLBQEEKJEUGGXXDZTAKQZSWXYMROLLNBATWMPXPSJE");

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
    msg.setTimeStamp(0.538797449751);
    msg.setSource(16809U);
    msg.setSourceEntity(182U);
    msg.setDestination(11480U);
    msg.setDestinationEntity(187U);
    msg.value = 0.512100364911;
    msg.confidence = 0.406008069299;
    msg.opmodes.assign("QPTONFKHULYGGQJHHSOWMTOZKBADVXVADNPAREEDESLKQOXRJJHWULXTKKHQMVPAASCABLOYWQVVSSFDCBNTMULIOPBJUDSCZYMJXEBYBXZKTNPKTFJI");

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
    msg.setTimeStamp(0.2468935935);
    msg.setSource(62036U);
    msg.setSourceEntity(212U);
    msg.setDestination(48070U);
    msg.setDestinationEntity(172U);
    msg.value = 0.650211302255;
    msg.confidence = 0.290458709176;
    msg.opmodes.assign("YWMGLXXUUWJLIRCELNYUZSVRFIRBTNINERGZSINHGXUZMDFODRQRXEPBTCDVOWUSZCHFHVJKLXJSCOVUYZXFSJ");

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
    msg.setTimeStamp(0.244431961307);
    msg.setSource(17486U);
    msg.setSourceEntity(49U);
    msg.setDestination(20892U);
    msg.setDestinationEntity(106U);
    msg.itow = 3489485304U;
    msg.lat = 0.656901587846;
    msg.lon = 0.36957665925;
    msg.height_ell = 0.610400942821;
    msg.height_sea = 0.197165112374;
    msg.hacc = 0.485669287226;
    msg.vacc = 0.0686688697434;
    msg.vel_n = 0.483777706248;
    msg.vel_e = 0.761048607093;
    msg.vel_d = 0.94165888119;
    msg.speed = 0.155860122022;
    msg.gspeed = 0.278115807641;
    msg.heading = 0.0519057487315;
    msg.sacc = 0.55955376667;
    msg.cacc = 0.465949084271;

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
    msg.setTimeStamp(0.473073635244);
    msg.setSource(29479U);
    msg.setSourceEntity(148U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(144U);
    msg.itow = 2706212829U;
    msg.lat = 0.371715186302;
    msg.lon = 0.0254950023027;
    msg.height_ell = 0.861823015256;
    msg.height_sea = 0.563938459814;
    msg.hacc = 0.186726573326;
    msg.vacc = 0.921056514388;
    msg.vel_n = 0.125674891862;
    msg.vel_e = 0.328944097316;
    msg.vel_d = 0.167430163858;
    msg.speed = 0.239164624794;
    msg.gspeed = 0.968518830501;
    msg.heading = 0.914136455069;
    msg.sacc = 0.430881746429;
    msg.cacc = 0.720273935879;

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
    msg.setTimeStamp(0.229213012158);
    msg.setSource(57226U);
    msg.setSourceEntity(106U);
    msg.setDestination(21137U);
    msg.setDestinationEntity(80U);
    msg.itow = 2245195873U;
    msg.lat = 0.576461810903;
    msg.lon = 0.140971153566;
    msg.height_ell = 0.203749531287;
    msg.height_sea = 0.119905623753;
    msg.hacc = 0.923288893828;
    msg.vacc = 0.10460567211;
    msg.vel_n = 0.252222844282;
    msg.vel_e = 0.4607298254;
    msg.vel_d = 0.591562085001;
    msg.speed = 0.597625076582;
    msg.gspeed = 0.685297918526;
    msg.heading = 0.177786539819;
    msg.sacc = 0.893339577129;
    msg.cacc = 0.0975961197468;

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
    msg.setTimeStamp(0.0936864256841);
    msg.setSource(14465U);
    msg.setSourceEntity(62U);
    msg.setDestination(5963U);
    msg.setDestinationEntity(221U);
    msg.id = 23U;
    msg.value = 0.267288694186;

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
    msg.setTimeStamp(0.646621447578);
    msg.setSource(47297U);
    msg.setSourceEntity(51U);
    msg.setDestination(56817U);
    msg.setDestinationEntity(99U);
    msg.id = 39U;
    msg.value = 0.841290974937;

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
    msg.setTimeStamp(0.536420216954);
    msg.setSource(62273U);
    msg.setSourceEntity(175U);
    msg.setDestination(23521U);
    msg.setDestinationEntity(16U);
    msg.id = 253U;
    msg.value = 0.276066831229;

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
    msg.setTimeStamp(0.245534614382);
    msg.setSource(24717U);
    msg.setSourceEntity(109U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(78U);
    msg.x = 0.811859220504;
    msg.y = 0.997224992738;
    msg.z = 0.168326529006;
    msg.phi = 0.242388359243;
    msg.theta = 0.301249229678;
    msg.psi = 0.501124637821;

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
    msg.setTimeStamp(0.764819405112);
    msg.setSource(39429U);
    msg.setSourceEntity(72U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(7U);
    msg.x = 0.904429361586;
    msg.y = 0.0223428161073;
    msg.z = 0.545788444145;
    msg.phi = 0.775216311133;
    msg.theta = 0.0105691869274;
    msg.psi = 0.0769762420532;

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
    msg.setTimeStamp(0.685854283815);
    msg.setSource(54720U);
    msg.setSourceEntity(236U);
    msg.setDestination(32129U);
    msg.setDestinationEntity(40U);
    msg.x = 0.699213135216;
    msg.y = 0.133483627236;
    msg.z = 0.267376428725;
    msg.phi = 0.0568302633767;
    msg.theta = 0.781796355509;
    msg.psi = 0.452594814217;

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
    msg.setTimeStamp(0.178535160455);
    msg.setSource(17787U);
    msg.setSourceEntity(235U);
    msg.setDestination(42381U);
    msg.setDestinationEntity(69U);
    msg.beam_width = 0.485490222025;
    msg.beam_height = 0.33547638963;

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
    msg.setTimeStamp(0.826345820862);
    msg.setSource(7854U);
    msg.setSourceEntity(47U);
    msg.setDestination(40029U);
    msg.setDestinationEntity(30U);
    msg.beam_width = 0.741822031107;
    msg.beam_height = 0.332026642559;

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
    msg.setTimeStamp(0.511724202964);
    msg.setSource(16772U);
    msg.setSourceEntity(179U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(114U);
    msg.beam_width = 0.161618213556;
    msg.beam_height = 0.403010578209;

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
    msg.setTimeStamp(0.617647987742);
    msg.setSource(62409U);
    msg.setSourceEntity(97U);
    msg.setDestination(58460U);
    msg.setDestinationEntity(221U);
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
    msg.setTimeStamp(0.268838803218);
    msg.setSource(31938U);
    msg.setSourceEntity(180U);
    msg.setDestination(63943U);
    msg.setDestinationEntity(2U);
    msg.sane = 85U;

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
    msg.setTimeStamp(0.774073049961);
    msg.setSource(428U);
    msg.setSourceEntity(101U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(101U);
    msg.sane = 33U;

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
    msg.setTimeStamp(0.93923424123);
    msg.setSource(8218U);
    msg.setSourceEntity(146U);
    msg.setDestination(37588U);
    msg.setDestinationEntity(234U);
    msg.value = 0.894612859466;

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
    msg.setTimeStamp(0.809289141688);
    msg.setSource(6667U);
    msg.setSourceEntity(43U);
    msg.setDestination(32515U);
    msg.setDestinationEntity(105U);
    msg.value = 0.966691745637;

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
    msg.setTimeStamp(0.392571825547);
    msg.setSource(13765U);
    msg.setSourceEntity(235U);
    msg.setDestination(54125U);
    msg.setDestinationEntity(51U);
    msg.value = 0.690249801627;

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
    msg.setTimeStamp(0.74462828298);
    msg.setSource(48566U);
    msg.setSourceEntity(126U);
    msg.setDestination(49136U);
    msg.setDestinationEntity(236U);
    msg.value = 0.747224727172;

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
    msg.setTimeStamp(0.0402570756324);
    msg.setSource(32177U);
    msg.setSourceEntity(207U);
    msg.setDestination(57629U);
    msg.setDestinationEntity(114U);
    msg.value = 0.549265752027;

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
    msg.setTimeStamp(0.579524802548);
    msg.setSource(7779U);
    msg.setSourceEntity(43U);
    msg.setDestination(19683U);
    msg.setDestinationEntity(217U);
    msg.value = 0.768229012692;

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
    msg.setTimeStamp(0.443639477923);
    msg.setSource(12155U);
    msg.setSourceEntity(150U);
    msg.setDestination(9156U);
    msg.setDestinationEntity(170U);
    msg.value = 0.798637548368;

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
    msg.setTimeStamp(0.593357650697);
    msg.setSource(45275U);
    msg.setSourceEntity(180U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(74U);
    msg.value = 0.838837094351;

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
    msg.setTimeStamp(0.316507399087);
    msg.setSource(26996U);
    msg.setSourceEntity(192U);
    msg.setDestination(39220U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6748836839;

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
    msg.setTimeStamp(0.335738030536);
    msg.setSource(13064U);
    msg.setSourceEntity(199U);
    msg.setDestination(19154U);
    msg.setDestinationEntity(253U);
    msg.value = 0.790367065509;

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
    msg.setTimeStamp(0.258997269278);
    msg.setSource(22338U);
    msg.setSourceEntity(229U);
    msg.setDestination(40371U);
    msg.setDestinationEntity(7U);
    msg.value = 0.477159311597;

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
    msg.setTimeStamp(0.539496634161);
    msg.setSource(35348U);
    msg.setSourceEntity(175U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(103U);
    msg.value = 0.413971995026;

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
    msg.setTimeStamp(0.503566547622);
    msg.setSource(45699U);
    msg.setSourceEntity(117U);
    msg.setDestination(17015U);
    msg.setDestinationEntity(226U);
    msg.value = 0.879892859175;

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
    msg.setTimeStamp(0.88190462941);
    msg.setSource(17392U);
    msg.setSourceEntity(114U);
    msg.setDestination(51147U);
    msg.setDestinationEntity(112U);
    msg.value = 0.463233577963;

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
    msg.setTimeStamp(0.125434732349);
    msg.setSource(43262U);
    msg.setSourceEntity(210U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(210U);
    msg.value = 0.930698729746;

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
    msg.setTimeStamp(0.391712102223);
    msg.setSource(26288U);
    msg.setSourceEntity(89U);
    msg.setDestination(10234U);
    msg.setDestinationEntity(110U);
    msg.value = 0.698363171964;

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
    msg.setTimeStamp(0.147829085259);
    msg.setSource(58668U);
    msg.setSourceEntity(186U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(68U);
    msg.value = 0.926779454336;

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
    msg.setTimeStamp(0.779130519784);
    msg.setSource(54279U);
    msg.setSourceEntity(174U);
    msg.setDestination(60447U);
    msg.setDestinationEntity(182U);
    msg.value = 0.493913928507;

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
    msg.setTimeStamp(0.652740032863);
    msg.setSource(34985U);
    msg.setSourceEntity(124U);
    msg.setDestination(47405U);
    msg.setDestinationEntity(9U);
    msg.value = 0.812129754748;

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
    msg.setTimeStamp(0.679807181478);
    msg.setSource(24338U);
    msg.setSourceEntity(142U);
    msg.setDestination(61759U);
    msg.setDestinationEntity(100U);
    msg.value = 0.409421557682;

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
    msg.setTimeStamp(0.131692288167);
    msg.setSource(49876U);
    msg.setSourceEntity(118U);
    msg.setDestination(17534U);
    msg.setDestinationEntity(94U);
    msg.value = 0.000757521791363;

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
    msg.setTimeStamp(0.529884034686);
    msg.setSource(4124U);
    msg.setSourceEntity(248U);
    msg.setDestination(26967U);
    msg.setDestinationEntity(156U);
    msg.value = 0.121815827595;

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
    msg.setTimeStamp(0.0158266675793);
    msg.setSource(38895U);
    msg.setSourceEntity(130U);
    msg.setDestination(30364U);
    msg.setDestinationEntity(199U);
    msg.value = 0.105154183067;

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
    msg.setTimeStamp(0.573019576639);
    msg.setSource(63978U);
    msg.setSourceEntity(184U);
    msg.setDestination(35584U);
    msg.setDestinationEntity(184U);
    msg.value = 0.588624934848;

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
    msg.setTimeStamp(0.532386831157);
    msg.setSource(4748U);
    msg.setSourceEntity(78U);
    msg.setDestination(41273U);
    msg.setDestinationEntity(189U);
    msg.validity = 60725U;
    msg.type = 75U;
    msg.tow = 578615142U;
    msg.base_lat = 0.389150986741;
    msg.base_lon = 0.532398091936;
    msg.base_height = 0.540419733619;
    msg.n = 0.873047377115;
    msg.e = 0.845631645147;
    msg.d = 0.731709512999;
    msg.v_n = 0.614711393302;
    msg.v_e = 0.0681787567855;
    msg.v_d = 0.744961799194;
    msg.satellites = 112U;
    msg.iar_hyp = 15575U;
    msg.iar_ratio = 0.43787996912;

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
    msg.setTimeStamp(0.586548315098);
    msg.setSource(5333U);
    msg.setSourceEntity(157U);
    msg.setDestination(10962U);
    msg.setDestinationEntity(54U);
    msg.validity = 36255U;
    msg.type = 140U;
    msg.tow = 133130870U;
    msg.base_lat = 0.626506874351;
    msg.base_lon = 0.477704791546;
    msg.base_height = 0.915427818244;
    msg.n = 0.322493796549;
    msg.e = 0.835419276691;
    msg.d = 0.50909551425;
    msg.v_n = 0.191457383061;
    msg.v_e = 0.748475808949;
    msg.v_d = 0.690782345259;
    msg.satellites = 74U;
    msg.iar_hyp = 2870U;
    msg.iar_ratio = 0.779627962806;

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
    msg.setTimeStamp(0.329430851782);
    msg.setSource(19836U);
    msg.setSourceEntity(38U);
    msg.setDestination(22473U);
    msg.setDestinationEntity(219U);
    msg.validity = 60709U;
    msg.type = 21U;
    msg.tow = 831057339U;
    msg.base_lat = 0.956328454438;
    msg.base_lon = 0.333216950003;
    msg.base_height = 0.89388651949;
    msg.n = 0.477367288732;
    msg.e = 0.459460920036;
    msg.d = 0.754335078528;
    msg.v_n = 0.330033748068;
    msg.v_e = 0.282266678613;
    msg.v_d = 0.522349257049;
    msg.satellites = 97U;
    msg.iar_hyp = 6022U;
    msg.iar_ratio = 0.131723826623;

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
    msg.setTimeStamp(0.919011555877);
    msg.setSource(14477U);
    msg.setSourceEntity(149U);
    msg.setDestination(12520U);
    msg.setDestinationEntity(80U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.66538599755;
    tmp_msg_0.lon = 0.985352293577;
    tmp_msg_0.height = 0.893621903906;
    tmp_msg_0.x = 0.500087602671;
    tmp_msg_0.y = 0.519753678029;
    tmp_msg_0.z = 0.786443237257;
    tmp_msg_0.phi = 0.276402944386;
    tmp_msg_0.theta = 0.736988137874;
    tmp_msg_0.psi = 0.281797791302;
    tmp_msg_0.u = 0.771542874545;
    tmp_msg_0.v = 0.512327301835;
    tmp_msg_0.w = 0.895646058155;
    tmp_msg_0.vx = 0.653994813701;
    tmp_msg_0.vy = 0.695039033581;
    tmp_msg_0.vz = 0.247685231867;
    tmp_msg_0.p = 0.981483244083;
    tmp_msg_0.q = 0.880985463202;
    tmp_msg_0.r = 0.0706711882547;
    tmp_msg_0.depth = 0.499342415561;
    tmp_msg_0.alt = 0.534464986874;
    msg.state.set(tmp_msg_0);
    msg.type = 106U;

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
    msg.setTimeStamp(0.666839413607);
    msg.setSource(20058U);
    msg.setSourceEntity(128U);
    msg.setDestination(49626U);
    msg.setDestinationEntity(12U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.929652997323;
    tmp_msg_0.lon = 0.727408283527;
    tmp_msg_0.height = 0.607017967979;
    tmp_msg_0.x = 0.346590899287;
    tmp_msg_0.y = 0.218257916928;
    tmp_msg_0.z = 0.0771782775883;
    tmp_msg_0.phi = 0.765157953046;
    tmp_msg_0.theta = 0.704329940223;
    tmp_msg_0.psi = 0.815286340469;
    tmp_msg_0.u = 0.840423495843;
    tmp_msg_0.v = 0.709425556642;
    tmp_msg_0.w = 0.582267162605;
    tmp_msg_0.vx = 0.628099313542;
    tmp_msg_0.vy = 0.806836370501;
    tmp_msg_0.vz = 0.206642982584;
    tmp_msg_0.p = 0.527967925858;
    tmp_msg_0.q = 0.849208776019;
    tmp_msg_0.r = 0.755510819935;
    tmp_msg_0.depth = 0.155473068899;
    tmp_msg_0.alt = 0.461863332281;
    msg.state.set(tmp_msg_0);
    msg.type = 67U;

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
    msg.setTimeStamp(0.945045773177);
    msg.setSource(53872U);
    msg.setSourceEntity(158U);
    msg.setDestination(52471U);
    msg.setDestinationEntity(44U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.364422468597;
    tmp_msg_0.lon = 0.333442756193;
    tmp_msg_0.height = 0.160977539297;
    tmp_msg_0.x = 0.531887191572;
    tmp_msg_0.y = 0.983902028814;
    tmp_msg_0.z = 0.500427490033;
    tmp_msg_0.phi = 0.596324064184;
    tmp_msg_0.theta = 0.887889073453;
    tmp_msg_0.psi = 0.818879815287;
    tmp_msg_0.u = 0.23330179177;
    tmp_msg_0.v = 0.110358601189;
    tmp_msg_0.w = 0.554379945171;
    tmp_msg_0.vx = 0.546371397624;
    tmp_msg_0.vy = 0.604817109737;
    tmp_msg_0.vz = 0.0809324415506;
    tmp_msg_0.p = 0.748839150666;
    tmp_msg_0.q = 0.466495627477;
    tmp_msg_0.r = 0.812476304217;
    tmp_msg_0.depth = 0.221617174225;
    tmp_msg_0.alt = 0.541058522819;
    msg.state.set(tmp_msg_0);
    msg.type = 80U;

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
    msg.setTimeStamp(0.721899262427);
    msg.setSource(19070U);
    msg.setSourceEntity(114U);
    msg.setDestination(13190U);
    msg.setDestinationEntity(50U);
    msg.value = 0.589241289227;

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
    msg.setTimeStamp(0.549305037797);
    msg.setSource(56135U);
    msg.setSourceEntity(23U);
    msg.setDestination(39915U);
    msg.setDestinationEntity(163U);
    msg.value = 0.344225740934;

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
    msg.setTimeStamp(0.00816985403803);
    msg.setSource(33894U);
    msg.setSourceEntity(136U);
    msg.setDestination(28204U);
    msg.setDestinationEntity(59U);
    msg.value = 0.204479061502;

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
    msg.setTimeStamp(0.626694443518);
    msg.setSource(33100U);
    msg.setSourceEntity(95U);
    msg.setDestination(13892U);
    msg.setDestinationEntity(135U);
    msg.value = 0.478722535612;

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
    msg.setTimeStamp(0.163941937463);
    msg.setSource(28611U);
    msg.setSourceEntity(186U);
    msg.setDestination(55472U);
    msg.setDestinationEntity(172U);
    msg.value = 0.920118443336;

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
    msg.setTimeStamp(0.510693277864);
    msg.setSource(7949U);
    msg.setSourceEntity(86U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(71U);
    msg.value = 0.494573148267;

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
    msg.setTimeStamp(0.320966193557);
    msg.setSource(54467U);
    msg.setSourceEntity(40U);
    msg.setDestination(47898U);
    msg.setDestinationEntity(150U);
    msg.value = 0.561387925092;

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
    msg.setTimeStamp(0.790798479208);
    msg.setSource(8974U);
    msg.setSourceEntity(201U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(231U);
    msg.value = 0.307853868379;

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
    msg.setTimeStamp(0.382164456105);
    msg.setSource(52301U);
    msg.setSourceEntity(40U);
    msg.setDestination(30173U);
    msg.setDestinationEntity(217U);
    msg.value = 0.517484890583;

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
    msg.setTimeStamp(0.162699738331);
    msg.setSource(38826U);
    msg.setSourceEntity(5U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(182U);
    msg.value = 0.659575681928;

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
    msg.setTimeStamp(0.924455609872);
    msg.setSource(40401U);
    msg.setSourceEntity(102U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(87U);
    msg.value = 0.927483163337;

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
    msg.setTimeStamp(0.424956828927);
    msg.setSource(297U);
    msg.setSourceEntity(100U);
    msg.setDestination(25059U);
    msg.setDestinationEntity(65U);
    msg.value = 0.292455875512;

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
    msg.setTimeStamp(0.753695855607);
    msg.setSource(47974U);
    msg.setSourceEntity(177U);
    msg.setDestination(22679U);
    msg.setDestinationEntity(166U);
    msg.value = 0.898155130596;

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
    msg.setTimeStamp(0.652947573975);
    msg.setSource(22205U);
    msg.setSourceEntity(12U);
    msg.setDestination(63670U);
    msg.setDestinationEntity(239U);
    msg.value = 0.996001620067;

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
    msg.setTimeStamp(0.769177364908);
    msg.setSource(13301U);
    msg.setSourceEntity(130U);
    msg.setDestination(62929U);
    msg.setDestinationEntity(245U);
    msg.value = 0.230343771642;

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
    msg.setTimeStamp(0.373742367281);
    msg.setSource(52295U);
    msg.setSourceEntity(8U);
    msg.setDestination(7180U);
    msg.setDestinationEntity(190U);
    msg.id = 240U;
    msg.zoom = 89U;
    msg.action = 172U;

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
    msg.setTimeStamp(0.946977966532);
    msg.setSource(21273U);
    msg.setSourceEntity(113U);
    msg.setDestination(27957U);
    msg.setDestinationEntity(83U);
    msg.id = 218U;
    msg.zoom = 249U;
    msg.action = 105U;

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
    msg.setTimeStamp(0.577320962791);
    msg.setSource(60648U);
    msg.setSourceEntity(142U);
    msg.setDestination(21641U);
    msg.setDestinationEntity(109U);
    msg.id = 195U;
    msg.zoom = 180U;
    msg.action = 169U;

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
    msg.setTimeStamp(0.503970377113);
    msg.setSource(35144U);
    msg.setSourceEntity(146U);
    msg.setDestination(19311U);
    msg.setDestinationEntity(175U);
    msg.id = 182U;
    msg.value = 0.583135004968;

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
    msg.setTimeStamp(0.442396319534);
    msg.setSource(18726U);
    msg.setSourceEntity(238U);
    msg.setDestination(3293U);
    msg.setDestinationEntity(45U);
    msg.id = 11U;
    msg.value = 0.199256543333;

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
    msg.setTimeStamp(0.0833496827979);
    msg.setSource(13466U);
    msg.setSourceEntity(156U);
    msg.setDestination(29713U);
    msg.setDestinationEntity(185U);
    msg.id = 83U;
    msg.value = 0.0094494195064;

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
    msg.setTimeStamp(0.0225781207172);
    msg.setSource(55524U);
    msg.setSourceEntity(62U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(117U);
    msg.id = 77U;
    msg.value = 0.498751246355;

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
    msg.setTimeStamp(0.842600500528);
    msg.setSource(57128U);
    msg.setSourceEntity(82U);
    msg.setDestination(3198U);
    msg.setDestinationEntity(51U);
    msg.id = 104U;
    msg.value = 0.0296003185615;

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
    msg.setTimeStamp(0.541726744413);
    msg.setSource(21454U);
    msg.setSourceEntity(162U);
    msg.setDestination(42427U);
    msg.setDestinationEntity(110U);
    msg.id = 216U;
    msg.value = 0.295515016433;

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
    msg.setTimeStamp(0.543345172117);
    msg.setSource(20256U);
    msg.setSourceEntity(4U);
    msg.setDestination(65447U);
    msg.setDestinationEntity(251U);
    msg.id = 112U;
    msg.angle = 0.419058670717;

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
    msg.setTimeStamp(0.232816887575);
    msg.setSource(48565U);
    msg.setSourceEntity(26U);
    msg.setDestination(13747U);
    msg.setDestinationEntity(193U);
    msg.id = 244U;
    msg.angle = 0.605945285268;

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
    msg.setTimeStamp(0.434997517588);
    msg.setSource(4924U);
    msg.setSourceEntity(254U);
    msg.setDestination(49934U);
    msg.setDestinationEntity(6U);
    msg.id = 131U;
    msg.angle = 0.270083878171;

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
    msg.setTimeStamp(0.205554057183);
    msg.setSource(29809U);
    msg.setSourceEntity(73U);
    msg.setDestination(18224U);
    msg.setDestinationEntity(36U);
    msg.op = 128U;
    msg.actions.assign("THNDAFHCGGNPFJKYGNVVZCJYKRIWSWMWLAOUSWYGLYQDYYOIQZFLNTSPXMIVRHTPHLIVBGM");

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
    msg.setTimeStamp(0.601562157776);
    msg.setSource(18491U);
    msg.setSourceEntity(120U);
    msg.setDestination(51525U);
    msg.setDestinationEntity(40U);
    msg.op = 80U;
    msg.actions.assign("PFQWJYBSDAOVDEPOKGJCLODEUCBOHTMQXFIMOKUGWNUNFGPOREKZBRJKCWYIQXBERLGKKRCJQTUBJFHQLDVPANYBHWHKELXZYUTPSPSTUQDKRPIZFTEYWMANZICPHYT");

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
    msg.setTimeStamp(0.0621731031246);
    msg.setSource(19128U);
    msg.setSourceEntity(47U);
    msg.setDestination(50258U);
    msg.setDestinationEntity(186U);
    msg.op = 159U;
    msg.actions.assign("NMJHUNCNBWVTVGHQSYRESLYQFXIRZFUWZJXHRXLCAIWJLNISWVDSCDPFWGKGGBVSHXLTNOCGILRIAESRJYBPDQXTJUQTMHRGXVBAKFNZQHBWDJVMLEGCWOTUEFTWWWAZMYPUSMYBKSNFYHZPGEXNXUBIPBKZJGX");

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
    msg.setTimeStamp(0.790945648896);
    msg.setSource(26418U);
    msg.setSourceEntity(4U);
    msg.setDestination(50946U);
    msg.setDestinationEntity(236U);
    msg.actions.assign("OCJAPZAYVMDDRBJAAEURBEXYNRZQARIUGKUONEYEUFHTXWKRTBWOILSQVDDSTBRMDNDCU");

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
    msg.setTimeStamp(0.555192433348);
    msg.setSource(11747U);
    msg.setSourceEntity(28U);
    msg.setDestination(23980U);
    msg.setDestinationEntity(130U);
    msg.actions.assign("UEXZANTSEOPVXMKVCCDWWEBHWHDEWSRNJDOCIMYYDOIJIQQZVCDPXNKPBAMPWNCXINMISZOGSJMFCELGBAXRILUNFFWBHZSRVHAWJBVTAQPHJYRBTWOZAGNWCJPLESCKTGOYKKZKTZBD");

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
    msg.setTimeStamp(0.521394446832);
    msg.setSource(5630U);
    msg.setSourceEntity(51U);
    msg.setDestination(4725U);
    msg.setDestinationEntity(29U);
    msg.actions.assign("KIHSZUTIJIREAVKUQLIWDPTPMADPZLBPMMCHWVYYOXLXOBZUNQJHKXAGAGSNIVDRYFHZYEZDQ");

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
    msg.setTimeStamp(0.598118535754);
    msg.setSource(18339U);
    msg.setSourceEntity(46U);
    msg.setDestination(50178U);
    msg.setDestinationEntity(164U);
    msg.button = 124U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.523130159567);
    msg.setSource(28555U);
    msg.setSourceEntity(59U);
    msg.setDestination(7140U);
    msg.setDestinationEntity(201U);
    msg.button = 166U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.962769482542);
    msg.setSource(814U);
    msg.setSourceEntity(196U);
    msg.setDestination(10937U);
    msg.setDestinationEntity(197U);
    msg.button = 226U;
    msg.value = 229U;

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
    msg.setTimeStamp(0.950605649835);
    msg.setSource(43472U);
    msg.setSourceEntity(212U);
    msg.setDestination(63964U);
    msg.setDestinationEntity(114U);
    msg.op = 152U;
    msg.text.assign("CHKPDHFYGBSXTXTCULKGVAGMHWDBBYEJXPJZOTKGLZQBCHXNVNZEENHZQIOLSLKEVKKSVBIISIQUVBVGHUSMPCBXXQHFEIYCPJNVOFRYLKMTRMXWJODOJQSRQAQIRZQSMYRGEFQPMMDCJOEDUWNVMDCVSSRGUWSPAUVXEOOTTWAJBWCNH");

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
    msg.setTimeStamp(0.178023937435);
    msg.setSource(6041U);
    msg.setSourceEntity(25U);
    msg.setDestination(54112U);
    msg.setDestinationEntity(197U);
    msg.op = 219U;
    msg.text.assign("TVUASIBUEGUWHOYCGZJYKQSQGNRSHOQUEDWZZHPAKYKWNORONOLLNWBZEXWXXTBFZMDYTPDFPEVLNEFPRBNCLMXYVVYKJGSFDZOLICSBRDQVMFNHDKMPASRVELQGTPOKGICIOJMEBKKABTAURJUAMJCXRFOMCBKJTIQZHWADUXSIMFPJFRCLFWFDEXJPJCXERBGZTLVGNXZJAYUYW");

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
    msg.setTimeStamp(0.13751634941);
    msg.setSource(33145U);
    msg.setSourceEntity(51U);
    msg.setDestination(2678U);
    msg.setDestinationEntity(239U);
    msg.op = 49U;
    msg.text.assign("WKJOYRBSYGAXTSMRCJUFCNGWHVLQPYHXCVVETAHMBRJMYOZWYCBZUZOLURLSRMQNEYGUXLHESLDSWWJCANGDDMXFEESSOQFSZBUGOIDTTIZDPGKZTPDAXJLQKBFFDLDVTWABCOWPIJMTRIQKQZVXGOAVYIXJIJCFPLIBKYOERCNLFBAEMBPJENNNQPRMIP");

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
    msg.setTimeStamp(0.619196373578);
    msg.setSource(50109U);
    msg.setSourceEntity(239U);
    msg.setDestination(39311U);
    msg.setDestinationEntity(85U);
    msg.op = 240U;
    msg.time_remain = 0.75947124063;
    msg.sched_time = 0.733209287279;

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
    msg.setTimeStamp(0.442598781331);
    msg.setSource(34926U);
    msg.setSourceEntity(209U);
    msg.setDestination(33426U);
    msg.setDestinationEntity(117U);
    msg.op = 214U;
    msg.time_remain = 0.844462406092;
    msg.sched_time = 0.700346062824;

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
    msg.setTimeStamp(0.196303463817);
    msg.setSource(23658U);
    msg.setSourceEntity(202U);
    msg.setDestination(63046U);
    msg.setDestinationEntity(88U);
    msg.op = 127U;
    msg.time_remain = 0.0412723636571;
    msg.sched_time = 0.75346162957;

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
    msg.setTimeStamp(0.292042945514);
    msg.setSource(20260U);
    msg.setSourceEntity(67U);
    msg.setDestination(7429U);
    msg.setDestinationEntity(131U);
    msg.name.assign("FMBIJKBDWYHZGWCNDABN");
    msg.op = 42U;
    msg.sched_time = 0.492350647432;

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
    msg.setTimeStamp(0.540262419369);
    msg.setSource(57600U);
    msg.setSourceEntity(174U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(8U);
    msg.name.assign("SJIEZNFOSHCTTHIEZNLKAQDGQOTGIPTZRFEBHRWQYUSJAAPDVRAONDRYGISWWADMRXUKJQCZUDIKPOFPNVBONJJYMZKVLNFWABYVGBZXXSHRMVKGHNGLJVLEWIK");
    msg.op = 246U;
    msg.sched_time = 0.673181366706;

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
    msg.setTimeStamp(0.839836541756);
    msg.setSource(5559U);
    msg.setSourceEntity(171U);
    msg.setDestination(60458U);
    msg.setDestinationEntity(63U);
    msg.name.assign("FQHTTWAHKDGTVXCAUWIYUPGWCLZJJLHNMCZBIXHGGRUKTZRNCHTQRMIMVVPYTQ");
    msg.op = 250U;
    msg.sched_time = 0.901221892068;

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
    msg.setTimeStamp(0.714328572963);
    msg.setSource(18512U);
    msg.setSourceEntity(64U);
    msg.setDestination(16351U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.0657056801861);
    msg.setSource(36931U);
    msg.setSourceEntity(251U);
    msg.setDestination(54666U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.271741240531);
    msg.setSource(32029U);
    msg.setSourceEntity(173U);
    msg.setDestination(53315U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.262272239247);
    msg.setSource(17920U);
    msg.setSourceEntity(170U);
    msg.setDestination(4113U);
    msg.setDestinationEntity(32U);
    msg.name.assign("NAWYMWUTRFBDPKMOGBJXQHPKCEEGZVKNTZHKCWCQZHE");
    msg.state = 100U;

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
    msg.setTimeStamp(0.961182664687);
    msg.setSource(16105U);
    msg.setSourceEntity(44U);
    msg.setDestination(31185U);
    msg.setDestinationEntity(129U);
    msg.name.assign("FKCTDTYFZKWLSMKVOWAWDINFCSATTNSRXSICXMLAAULLECQKCHLCIPLDVMUGVHIPZEUFBXRZQPDERVJFOVAUPHMXTNLZVYJBXZTZGXARAQZKRVAJMPDOLUQNUPNIDPWBROKMFHWDCYEQIXUJPXGIHFZCRQAHECTEMGBSGIESIHYRGSFJJOIHBZEJYNQJBGUJSYGQNVRTGYKKARSCPUQHEJBKMWNTQOYDKOSGHWYLDTVUMONDNOEWWXLFBWVF");
    msg.state = 111U;

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
    msg.setTimeStamp(0.0133020068461);
    msg.setSource(600U);
    msg.setSourceEntity(240U);
    msg.setDestination(61794U);
    msg.setDestinationEntity(213U);
    msg.name.assign("XSSCJZZWCQZAYZOARCRGEUUXACJOCDVUKLSETHJUZZTYECBPWRZINENBBSGSYXWFRKQFIPBVQJUKFDDPGQYFYKPINXAFLMDRITUYOJBTJFGKVQBXIHWISL");
    msg.state = 212U;

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
    msg.setTimeStamp(0.730352101044);
    msg.setSource(23435U);
    msg.setSourceEntity(122U);
    msg.setDestination(17353U);
    msg.setDestinationEntity(105U);
    msg.name.assign("GLWVTDSWJHWSLABXNHDAOPGIKAQXEVEDNKAURQMUYIALBWQKYMSDQGBTTYUPDYILPSNFOFIBCPHITUZOIZVRXFZKYRSXYFQDGGMJG");
    msg.value = 29U;

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
    msg.setTimeStamp(0.58160550685);
    msg.setSource(9665U);
    msg.setSourceEntity(213U);
    msg.setDestination(28368U);
    msg.setDestinationEntity(216U);
    msg.name.assign("ZQXSPIEEGBNFWGDWDOGVOSPONCPCICIOAZNPIIGUJDSZMNIAKKEPWTRJIAVUHCMHRMQHPKLXXBJTFQXRZUNCYUYHMXODPEHESNYVWUMGDNXLXOQDTMTHFVCIEOBALRFGMZGPJSCZKGLCWRRBUKZLOTE");
    msg.value = 78U;

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
    msg.setTimeStamp(0.680692816591);
    msg.setSource(42017U);
    msg.setSourceEntity(192U);
    msg.setDestination(13624U);
    msg.setDestinationEntity(38U);
    msg.name.assign("SRFGDCMIKVOPYMRSJBHQJBBAEIUCPIILFSLGJQQESGZHBRKNJORHPZACWADYXWWDRMLGEIOHZVNQXVAJBSSVIWNPYKYMKEFNJLGZIVDFXWTOXCPDKGJBACTFQAPIGOFUNHZLYLEYEMRSPTWMWX");
    msg.value = 115U;

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
    msg.setTimeStamp(0.154447951277);
    msg.setSource(2742U);
    msg.setSourceEntity(42U);
    msg.setDestination(50478U);
    msg.setDestinationEntity(32U);
    msg.name.assign("JLKLWZXKXZTTFOOYVQNGIYWOTRRWMME");

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
    msg.setTimeStamp(0.435015407108);
    msg.setSource(57485U);
    msg.setSourceEntity(7U);
    msg.setDestination(45677U);
    msg.setDestinationEntity(90U);
    msg.name.assign("DTPAQNHDXSTIICTDFVJMSBMKBZZIRVHIKBCHXTAYDIWNFUQJRVEYTTTZOREKQXIP");

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
    msg.setTimeStamp(0.895896488113);
    msg.setSource(28717U);
    msg.setSourceEntity(191U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(139U);
    msg.name.assign("CLLWKRLZKEFSCVEQJTJVYJYUBKWGGYPJMVAUYWTNLGADCBUNEQXMDTKJDKZQUPIRTDMFFUHDWOTXYFKHCLIISQBIMAFPHAWMERDGVESNJMCXHHLOCRJIFBJEENNILAAFHP");

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
    msg.setTimeStamp(0.938886302412);
    msg.setSource(55167U);
    msg.setSourceEntity(155U);
    msg.setDestination(31720U);
    msg.setDestinationEntity(39U);
    msg.name.assign("QAGNZTLZISLBKVTVBMDKOELNPXWNQXYLZZMMJDJFPUWDGETKHRCYQRRYPZGTFOWIGJCUCQBSSFJJVXCLXIRUXBTRNFGUGHCHOUAYHKKZIWAVWFTVSNCYOWLUWPCSOBHYKRQYMQIQNVEJHOVHDTAZEIFWARJXXYXDPUIHAEHFJGUGEMFCIUZMLHK");
    msg.value = 110U;

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
    msg.setTimeStamp(0.389530388788);
    msg.setSource(23091U);
    msg.setSourceEntity(204U);
    msg.setDestination(63572U);
    msg.setDestinationEntity(90U);
    msg.name.assign("DSLGMHPCNMAXOQKVJOOFVUYIIUVMCKAETABYNVSXMEQPJREWXSQWFZIDTXOCYKUMNKFASBTLMYGZRWSSVSQXNTJQJYGJDWIKTJETUIWAZEBETRFNQYHJSISCCUQFVYYQBYHZPKZDEFKVABJLKJQLXAPNMCNBGQZXWRBAIGORNWLTOBHBPZELIHCNXDZFF");
    msg.value = 62U;

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
    msg.setTimeStamp(0.161525860956);
    msg.setSource(65326U);
    msg.setSourceEntity(62U);
    msg.setDestination(43434U);
    msg.setDestinationEntity(65U);
    msg.name.assign("POGMLHEBIQLSVJKXVGQULZLODNPACQZHRNIXIKHZDMXYKRWBUCDNEHBWLOEAOFZDLNVBPSNMFPHSICJRJOSLWIVYIFXMFZHCFCMFASQVEPJUCNTZRMYTFQYTSIDTAVJJULGATRSAZGTOJQWABKXEFJPPOHEQBZBBUUXRCNHZIXWYYSCLDEMLKZWRBKSCVAGDKGGUHJTGTEDKIQXOUV");
    msg.value = 144U;

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
    msg.setTimeStamp(0.536501655818);
    msg.setSource(18683U);
    msg.setSourceEntity(190U);
    msg.setDestination(61594U);
    msg.setDestinationEntity(55U);
    msg.id = 216U;
    msg.period = 1941160682U;
    msg.duty_cycle = 2861062024U;

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
    msg.setTimeStamp(0.774435309957);
    msg.setSource(43691U);
    msg.setSourceEntity(168U);
    msg.setDestination(7553U);
    msg.setDestinationEntity(123U);
    msg.id = 132U;
    msg.period = 2660543938U;
    msg.duty_cycle = 1902376043U;

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
    msg.setTimeStamp(0.243103060417);
    msg.setSource(32343U);
    msg.setSourceEntity(141U);
    msg.setDestination(34176U);
    msg.setDestinationEntity(180U);
    msg.id = 237U;
    msg.period = 4031078744U;
    msg.duty_cycle = 3669245926U;

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
    msg.setTimeStamp(0.859811466233);
    msg.setSource(62970U);
    msg.setSourceEntity(116U);
    msg.setDestination(44714U);
    msg.setDestinationEntity(122U);
    msg.id = 6U;
    msg.period = 2310092783U;
    msg.duty_cycle = 1652550966U;

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
    msg.setTimeStamp(0.183278338116);
    msg.setSource(7208U);
    msg.setSourceEntity(173U);
    msg.setDestination(47104U);
    msg.setDestinationEntity(137U);
    msg.id = 64U;
    msg.period = 2247427067U;
    msg.duty_cycle = 3118848367U;

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
    msg.setTimeStamp(0.140806286251);
    msg.setSource(17897U);
    msg.setSourceEntity(93U);
    msg.setDestination(1648U);
    msg.setDestinationEntity(107U);
    msg.id = 27U;
    msg.period = 2937294143U;
    msg.duty_cycle = 3696433817U;

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
    msg.setTimeStamp(0.862888325008);
    msg.setSource(30979U);
    msg.setSourceEntity(236U);
    msg.setDestination(25060U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.853049909162;
    msg.lon = 0.660721850674;
    msg.height = 0.712451003241;
    msg.x = 0.239342345891;
    msg.y = 0.0525484558536;
    msg.z = 0.8200443718;
    msg.phi = 0.396255512572;
    msg.theta = 0.904371710871;
    msg.psi = 0.557624271254;
    msg.u = 0.609624845859;
    msg.v = 0.720368506308;
    msg.w = 0.450531130488;
    msg.vx = 0.556027220549;
    msg.vy = 0.233451905205;
    msg.vz = 0.525205303548;
    msg.p = 0.398455927219;
    msg.q = 0.654515833588;
    msg.r = 0.043164109169;
    msg.depth = 0.416409080137;
    msg.alt = 0.537992546712;

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
    msg.setTimeStamp(0.727362797494);
    msg.setSource(30032U);
    msg.setSourceEntity(163U);
    msg.setDestination(19496U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.109952130125;
    msg.lon = 0.135040082135;
    msg.height = 0.581455641431;
    msg.x = 0.895606718908;
    msg.y = 0.823124425068;
    msg.z = 0.601968082696;
    msg.phi = 0.761588077776;
    msg.theta = 0.4462504233;
    msg.psi = 0.256551938661;
    msg.u = 0.0987568206433;
    msg.v = 0.400698809084;
    msg.w = 0.754695597376;
    msg.vx = 0.739463910694;
    msg.vy = 0.240574621708;
    msg.vz = 0.740833252137;
    msg.p = 0.997365772274;
    msg.q = 0.867915652724;
    msg.r = 0.44727894249;
    msg.depth = 0.203428996641;
    msg.alt = 0.691567471435;

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
    msg.setTimeStamp(0.346641489264);
    msg.setSource(8521U);
    msg.setSourceEntity(16U);
    msg.setDestination(42149U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.500602207141;
    msg.lon = 0.933751092283;
    msg.height = 0.61342377634;
    msg.x = 0.327113551288;
    msg.y = 0.520816282027;
    msg.z = 0.412276309088;
    msg.phi = 0.63559941393;
    msg.theta = 0.833185789708;
    msg.psi = 0.393340242572;
    msg.u = 0.388855455822;
    msg.v = 0.0555774765776;
    msg.w = 0.987240972157;
    msg.vx = 0.900727517688;
    msg.vy = 0.590030118637;
    msg.vz = 0.416012117696;
    msg.p = 0.0295560439717;
    msg.q = 0.807117177877;
    msg.r = 0.798588520529;
    msg.depth = 0.0181000455738;
    msg.alt = 0.877979632458;

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
    msg.setTimeStamp(0.795345614663);
    msg.setSource(48329U);
    msg.setSourceEntity(112U);
    msg.setDestination(45825U);
    msg.setDestinationEntity(84U);
    msg.x = 0.562543168112;
    msg.y = 0.178572081389;
    msg.z = 0.635810633656;

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
    msg.setTimeStamp(0.381224702763);
    msg.setSource(29824U);
    msg.setSourceEntity(169U);
    msg.setDestination(893U);
    msg.setDestinationEntity(223U);
    msg.x = 0.349553690196;
    msg.y = 0.206616994346;
    msg.z = 0.0266504753323;

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
    msg.setTimeStamp(0.944514166411);
    msg.setSource(31439U);
    msg.setSourceEntity(35U);
    msg.setDestination(27537U);
    msg.setDestinationEntity(125U);
    msg.x = 0.61886395273;
    msg.y = 0.727765029473;
    msg.z = 0.610943368335;

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
    msg.setTimeStamp(0.0748759347154);
    msg.setSource(33985U);
    msg.setSourceEntity(37U);
    msg.setDestination(46208U);
    msg.setDestinationEntity(71U);
    msg.value = 0.734353046403;

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
    msg.setTimeStamp(0.496736527488);
    msg.setSource(24334U);
    msg.setSourceEntity(162U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(95U);
    msg.value = 0.169521882355;

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
    msg.setTimeStamp(0.753228631876);
    msg.setSource(65235U);
    msg.setSourceEntity(254U);
    msg.setDestination(57976U);
    msg.setDestinationEntity(162U);
    msg.value = 0.0515088633399;

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
    msg.setTimeStamp(0.290308463186);
    msg.setSource(6246U);
    msg.setSourceEntity(137U);
    msg.setDestination(27319U);
    msg.setDestinationEntity(176U);
    msg.value = 0.775758953932;

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
    msg.setTimeStamp(0.566257582674);
    msg.setSource(38816U);
    msg.setSourceEntity(74U);
    msg.setDestination(7542U);
    msg.setDestinationEntity(110U);
    msg.value = 0.492245556572;

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
    msg.setTimeStamp(0.832824161053);
    msg.setSource(34260U);
    msg.setSourceEntity(122U);
    msg.setDestination(45769U);
    msg.setDestinationEntity(239U);
    msg.value = 0.371807825767;

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
    msg.setTimeStamp(0.164848407274);
    msg.setSource(45491U);
    msg.setSourceEntity(247U);
    msg.setDestination(1268U);
    msg.setDestinationEntity(203U);
    msg.x = 0.411458132923;
    msg.y = 0.954649069172;
    msg.z = 0.865810360093;
    msg.phi = 0.0738462877385;
    msg.theta = 0.377368258293;
    msg.psi = 0.859007328171;
    msg.p = 0.425495762612;
    msg.q = 0.713053144054;
    msg.r = 0.616301157309;
    msg.u = 0.485014917427;
    msg.v = 0.680216366595;
    msg.w = 0.590971643275;
    msg.bias_psi = 0.634388396827;
    msg.bias_r = 0.760448886497;

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
    msg.setTimeStamp(0.989138901586);
    msg.setSource(44148U);
    msg.setSourceEntity(203U);
    msg.setDestination(24950U);
    msg.setDestinationEntity(75U);
    msg.x = 0.688211338069;
    msg.y = 0.941898723805;
    msg.z = 0.680542693176;
    msg.phi = 0.34824215175;
    msg.theta = 0.303796513257;
    msg.psi = 0.644639328142;
    msg.p = 0.634016962309;
    msg.q = 0.51887901922;
    msg.r = 0.736708204559;
    msg.u = 0.143996801949;
    msg.v = 0.722750506799;
    msg.w = 0.184028481852;
    msg.bias_psi = 0.421619963825;
    msg.bias_r = 0.861920587698;

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
    msg.setTimeStamp(0.571188835927);
    msg.setSource(53534U);
    msg.setSourceEntity(232U);
    msg.setDestination(53156U);
    msg.setDestinationEntity(162U);
    msg.x = 0.219311188944;
    msg.y = 0.0638649515223;
    msg.z = 0.533754806258;
    msg.phi = 0.265052717429;
    msg.theta = 0.441454208484;
    msg.psi = 0.668446748175;
    msg.p = 0.919314026493;
    msg.q = 0.376229376163;
    msg.r = 0.397598765345;
    msg.u = 0.61595646694;
    msg.v = 0.913032512045;
    msg.w = 0.976744878869;
    msg.bias_psi = 0.723434347028;
    msg.bias_r = 0.073188697849;

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
    msg.setTimeStamp(0.413424926255);
    msg.setSource(60603U);
    msg.setSourceEntity(205U);
    msg.setDestination(36464U);
    msg.setDestinationEntity(130U);
    msg.bias_psi = 0.409496225551;
    msg.bias_r = 0.194393134188;
    msg.cog = 0.367986647721;
    msg.cyaw = 0.21580458576;
    msg.lbl_rej_level = 0.909827130863;
    msg.gps_rej_level = 0.752419283752;
    msg.custom_x = 0.708592751088;
    msg.custom_y = 0.244294690824;
    msg.custom_z = 0.909397887412;

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
    msg.setTimeStamp(0.487569001835);
    msg.setSource(59151U);
    msg.setSourceEntity(97U);
    msg.setDestination(57597U);
    msg.setDestinationEntity(12U);
    msg.bias_psi = 0.967049107298;
    msg.bias_r = 0.592878065237;
    msg.cog = 0.675566783206;
    msg.cyaw = 0.269727648035;
    msg.lbl_rej_level = 0.623828874038;
    msg.gps_rej_level = 0.944353157687;
    msg.custom_x = 0.886398203612;
    msg.custom_y = 0.561139619729;
    msg.custom_z = 0.121506532741;

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
    msg.setTimeStamp(0.498917452558);
    msg.setSource(55227U);
    msg.setSourceEntity(131U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(203U);
    msg.bias_psi = 0.241448418204;
    msg.bias_r = 0.129896695191;
    msg.cog = 0.540356363329;
    msg.cyaw = 0.315421426419;
    msg.lbl_rej_level = 0.415650418205;
    msg.gps_rej_level = 0.20556829821;
    msg.custom_x = 0.503591774393;
    msg.custom_y = 0.890240847165;
    msg.custom_z = 0.600547653075;

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
    msg.setTimeStamp(0.129443080891);
    msg.setSource(25948U);
    msg.setSourceEntity(235U);
    msg.setDestination(30809U);
    msg.setDestinationEntity(237U);
    msg.utc_time = 0.545704816938;
    msg.reason = 56U;

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
    msg.setTimeStamp(0.283144515642);
    msg.setSource(30004U);
    msg.setSourceEntity(109U);
    msg.setDestination(8951U);
    msg.setDestinationEntity(80U);
    msg.utc_time = 0.930105415148;
    msg.reason = 15U;

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
    msg.setTimeStamp(0.0540922361956);
    msg.setSource(24573U);
    msg.setSourceEntity(216U);
    msg.setDestination(5297U);
    msg.setDestinationEntity(231U);
    msg.utc_time = 0.574241259468;
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
    msg.setTimeStamp(0.307822324644);
    msg.setSource(5063U);
    msg.setSourceEntity(6U);
    msg.setDestination(40075U);
    msg.setDestinationEntity(117U);
    msg.id = 236U;
    msg.range = 0.594149300735;
    msg.acceptance = 137U;

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
    msg.setTimeStamp(0.88847109081);
    msg.setSource(34807U);
    msg.setSourceEntity(133U);
    msg.setDestination(10951U);
    msg.setDestinationEntity(240U);
    msg.id = 60U;
    msg.range = 0.95268506856;
    msg.acceptance = 201U;

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
    msg.setTimeStamp(0.306448252318);
    msg.setSource(43489U);
    msg.setSourceEntity(247U);
    msg.setDestination(58976U);
    msg.setDestinationEntity(114U);
    msg.id = 185U;
    msg.range = 0.0437778356266;
    msg.acceptance = 120U;

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
    msg.setTimeStamp(0.165222546022);
    msg.setSource(46383U);
    msg.setSourceEntity(231U);
    msg.setDestination(59091U);
    msg.setDestinationEntity(224U);
    msg.type = 133U;
    msg.reason = 23U;
    msg.value = 0.118331762684;
    msg.timestep = 0.109302224491;

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
    msg.setTimeStamp(0.0195110435103);
    msg.setSource(23191U);
    msg.setSourceEntity(175U);
    msg.setDestination(6008U);
    msg.setDestinationEntity(31U);
    msg.type = 66U;
    msg.reason = 141U;
    msg.value = 0.29219186234;
    msg.timestep = 0.217236766227;

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
    msg.setTimeStamp(0.539558599094);
    msg.setSource(56574U);
    msg.setSourceEntity(51U);
    msg.setDestination(57928U);
    msg.setDestinationEntity(163U);
    msg.type = 154U;
    msg.reason = 66U;
    msg.value = 0.962749895514;
    msg.timestep = 0.367482594476;

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
    msg.setTimeStamp(0.752341854918);
    msg.setSource(35996U);
    msg.setSourceEntity(213U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(131U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HZFXFSSUFPMBPPIJCACVJTWTDNORFDBAFYKPDNFIPRIDXWMBESHETNOEUYQIZXSURNOVWUYGGQLCJUNPRXDRJHBMQVKORWYBYZHDESUEBHWLWKADWQKNQBMSVCZNOKZGQOTJEYRYJXUWDDHGVLFPVOKGOGXJLQXGNBKWLAIJMVIKBILLQMZGMHXLECVOFGIJMCHAUSMTUZRFAZXFQKSRYVPNUCAGYEA");
    tmp_msg_0.lat = 0.924283019132;
    tmp_msg_0.lon = 0.87734987504;
    tmp_msg_0.depth = 0.271715965515;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 210U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.450762138803;
    msg.y = 0.403013445386;
    msg.var_x = 0.790078831446;
    msg.var_y = 0.893570119496;
    msg.distance = 0.924131655189;

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
    msg.setTimeStamp(0.00196150142392);
    msg.setSource(58467U);
    msg.setSourceEntity(109U);
    msg.setDestination(45921U);
    msg.setDestinationEntity(217U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HXXXHICYOEUQGATUKDRHNKCYEFMOBPSYOGLIDFEKQIPFQQFGYDOAYTYENULLAJIOYOWHQGSSWMSJTUAUWJVVXZZNQMDWUVGFIDCBRXBRKP");
    tmp_msg_0.lat = 0.235330218419;
    tmp_msg_0.lon = 0.229436637238;
    tmp_msg_0.depth = 0.862933575256;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 242U;
    tmp_msg_0.transponder_delay = 73U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.816943878962;
    msg.y = 0.904886647915;
    msg.var_x = 0.569913266706;
    msg.var_y = 0.363585379101;
    msg.distance = 0.120554689528;

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
    msg.setTimeStamp(0.754374217256);
    msg.setSource(11351U);
    msg.setSourceEntity(250U);
    msg.setDestination(46382U);
    msg.setDestinationEntity(158U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PFETDRZJWGPVICGTUBGIFWDGLKKGBAVSBQTMRCICLHW");
    tmp_msg_0.lat = 0.25359901329;
    tmp_msg_0.lon = 0.0281982123119;
    tmp_msg_0.depth = 0.43442483359;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 239U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.146645607326;
    msg.y = 0.0783277069419;
    msg.var_x = 0.400135854441;
    msg.var_y = 0.586083600481;
    msg.distance = 0.271308406256;

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
    msg.setTimeStamp(0.532771590663);
    msg.setSource(10227U);
    msg.setSourceEntity(146U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(221U);
    msg.state = 150U;

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
    msg.setTimeStamp(0.298307652717);
    msg.setSource(48364U);
    msg.setSourceEntity(96U);
    msg.setDestination(13393U);
    msg.setDestinationEntity(20U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.808211319732);
    msg.setSource(14959U);
    msg.setSourceEntity(22U);
    msg.setDestination(37399U);
    msg.setDestinationEntity(28U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.851851366846);
    msg.setSource(18606U);
    msg.setSourceEntity(74U);
    msg.setDestination(54863U);
    msg.setDestinationEntity(186U);
    msg.x = 0.378596686868;
    msg.y = 0.180786725819;
    msg.z = 0.125415938079;

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
    msg.setTimeStamp(0.767193653033);
    msg.setSource(20163U);
    msg.setSourceEntity(85U);
    msg.setDestination(24338U);
    msg.setDestinationEntity(22U);
    msg.x = 0.144900107943;
    msg.y = 0.424153304296;
    msg.z = 0.16301130303;

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
    msg.setTimeStamp(0.363053971347);
    msg.setSource(37361U);
    msg.setSourceEntity(111U);
    msg.setDestination(16105U);
    msg.setDestinationEntity(129U);
    msg.x = 0.162346921441;
    msg.y = 0.999731424837;
    msg.z = 0.653767556452;

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
    msg.setTimeStamp(0.0506424048493);
    msg.setSource(48357U);
    msg.setSourceEntity(250U);
    msg.setDestination(19361U);
    msg.setDestinationEntity(171U);
    msg.va = 0.0132965640349;
    msg.aoa = 0.205723615334;
    msg.ssa = 0.633820192145;

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
    msg.setTimeStamp(0.803322197222);
    msg.setSource(17023U);
    msg.setSourceEntity(129U);
    msg.setDestination(22898U);
    msg.setDestinationEntity(34U);
    msg.va = 0.75830543086;
    msg.aoa = 0.00684868250431;
    msg.ssa = 0.0490694233143;

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
    msg.setTimeStamp(0.704718627261);
    msg.setSource(34972U);
    msg.setSourceEntity(100U);
    msg.setDestination(3239U);
    msg.setDestinationEntity(65U);
    msg.va = 0.0474296929311;
    msg.aoa = 0.929458941649;
    msg.ssa = 0.0800943488245;

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
    msg.setTimeStamp(0.553590715593);
    msg.setSource(64750U);
    msg.setSourceEntity(4U);
    msg.setDestination(52679U);
    msg.setDestinationEntity(59U);
    msg.value = 0.00205112834729;

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
    msg.setTimeStamp(0.983045649521);
    msg.setSource(22601U);
    msg.setSourceEntity(228U);
    msg.setDestination(16384U);
    msg.setDestinationEntity(81U);
    msg.value = 0.368085772053;

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
    msg.setTimeStamp(0.561898258065);
    msg.setSource(64404U);
    msg.setSourceEntity(12U);
    msg.setDestination(13870U);
    msg.setDestinationEntity(39U);
    msg.value = 0.163597842603;

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
    msg.setTimeStamp(0.741393090666);
    msg.setSource(38627U);
    msg.setSourceEntity(118U);
    msg.setDestination(22620U);
    msg.setDestinationEntity(102U);
    msg.value = 0.67710728151;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.579555540574);
    msg.setSource(24599U);
    msg.setSourceEntity(188U);
    msg.setDestination(17U);
    msg.setDestinationEntity(210U);
    msg.value = 0.947746340681;
    msg.z_units = 81U;

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
    msg.setTimeStamp(0.618436320454);
    msg.setSource(26039U);
    msg.setSourceEntity(88U);
    msg.setDestination(49462U);
    msg.setDestinationEntity(156U);
    msg.value = 0.494655116474;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.815809835356);
    msg.setSource(3655U);
    msg.setSourceEntity(39U);
    msg.setDestination(11804U);
    msg.setDestinationEntity(42U);
    msg.value = 0.0102996630756;
    msg.speed_units = 34U;

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
    msg.setTimeStamp(0.557430865804);
    msg.setSource(18896U);
    msg.setSourceEntity(67U);
    msg.setDestination(39885U);
    msg.setDestinationEntity(203U);
    msg.value = 0.637414824678;
    msg.speed_units = 150U;

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
    msg.setTimeStamp(0.83422862276);
    msg.setSource(5583U);
    msg.setSourceEntity(96U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(106U);
    msg.value = 0.642485448557;
    msg.speed_units = 228U;

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
    msg.setTimeStamp(0.279275347922);
    msg.setSource(64510U);
    msg.setSourceEntity(101U);
    msg.setDestination(22771U);
    msg.setDestinationEntity(34U);
    msg.value = 0.661270795847;

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
    msg.setTimeStamp(0.221025281487);
    msg.setSource(26219U);
    msg.setSourceEntity(78U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(28U);
    msg.value = 0.788825572837;

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
    msg.setTimeStamp(0.614987054255);
    msg.setSource(7293U);
    msg.setSourceEntity(245U);
    msg.setDestination(14297U);
    msg.setDestinationEntity(66U);
    msg.value = 0.509996396391;

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
    msg.setTimeStamp(0.578769022749);
    msg.setSource(33209U);
    msg.setSourceEntity(232U);
    msg.setDestination(3148U);
    msg.setDestinationEntity(253U);
    msg.value = 0.353504977282;

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
    msg.setTimeStamp(0.364477043474);
    msg.setSource(43556U);
    msg.setSourceEntity(226U);
    msg.setDestination(27717U);
    msg.setDestinationEntity(88U);
    msg.value = 0.101507589802;

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
    msg.setTimeStamp(0.572394531921);
    msg.setSource(64375U);
    msg.setSourceEntity(42U);
    msg.setDestination(59854U);
    msg.setDestinationEntity(139U);
    msg.value = 0.671308504508;

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
    msg.setTimeStamp(0.931399890454);
    msg.setSource(21786U);
    msg.setSourceEntity(103U);
    msg.setDestination(42487U);
    msg.setDestinationEntity(10U);
    msg.value = 0.376331626154;

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
    msg.setTimeStamp(0.179440954066);
    msg.setSource(50940U);
    msg.setSourceEntity(238U);
    msg.setDestination(17763U);
    msg.setDestinationEntity(11U);
    msg.value = 0.0302384488386;

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
    msg.setTimeStamp(0.174917380006);
    msg.setSource(47656U);
    msg.setSourceEntity(164U);
    msg.setDestination(17055U);
    msg.setDestinationEntity(48U);
    msg.value = 0.66424696654;

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
    msg.setTimeStamp(0.210885155812);
    msg.setSource(27362U);
    msg.setSourceEntity(78U);
    msg.setDestination(37949U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 647610896U;
    msg.start_lat = 0.220607985866;
    msg.start_lon = 0.785445381872;
    msg.start_z = 0.0895957261144;
    msg.start_z_units = 253U;
    msg.end_lat = 0.232265059851;
    msg.end_lon = 0.954124510274;
    msg.end_z = 0.0428511065328;
    msg.end_z_units = 178U;
    msg.speed = 0.358346126995;
    msg.speed_units = 79U;
    msg.lradius = 0.485717961505;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.332682559916);
    msg.setSource(4148U);
    msg.setSourceEntity(29U);
    msg.setDestination(5293U);
    msg.setDestinationEntity(81U);
    msg.path_ref = 750278969U;
    msg.start_lat = 0.786794244368;
    msg.start_lon = 0.241668034112;
    msg.start_z = 0.476902069752;
    msg.start_z_units = 67U;
    msg.end_lat = 0.843842280184;
    msg.end_lon = 0.250445146189;
    msg.end_z = 0.722157793684;
    msg.end_z_units = 56U;
    msg.speed = 0.824382410305;
    msg.speed_units = 238U;
    msg.lradius = 0.153243049924;
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
    msg.setTimeStamp(0.385690139689);
    msg.setSource(8972U);
    msg.setSourceEntity(124U);
    msg.setDestination(15181U);
    msg.setDestinationEntity(154U);
    msg.path_ref = 1430633248U;
    msg.start_lat = 0.758012968018;
    msg.start_lon = 0.803750746722;
    msg.start_z = 0.316016152266;
    msg.start_z_units = 153U;
    msg.end_lat = 0.65011818975;
    msg.end_lon = 0.363125665886;
    msg.end_z = 0.750888133257;
    msg.end_z_units = 91U;
    msg.speed = 0.5393709568;
    msg.speed_units = 59U;
    msg.lradius = 0.439833567443;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.989809406167);
    msg.setSource(18248U);
    msg.setSourceEntity(202U);
    msg.setDestination(28719U);
    msg.setDestinationEntity(236U);
    msg.x = 0.502388298539;
    msg.y = 0.272916698001;
    msg.z = 0.848596642591;
    msg.k = 0.410839744398;
    msg.m = 0.707879377213;
    msg.n = 0.11848763203;
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
    msg.setTimeStamp(0.0399199965195);
    msg.setSource(31809U);
    msg.setSourceEntity(171U);
    msg.setDestination(61136U);
    msg.setDestinationEntity(133U);
    msg.x = 0.593341491677;
    msg.y = 0.260073393224;
    msg.z = 0.483458237538;
    msg.k = 0.368735980304;
    msg.m = 0.60771122253;
    msg.n = 0.191259649554;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.363293507676);
    msg.setSource(693U);
    msg.setSourceEntity(24U);
    msg.setDestination(58841U);
    msg.setDestinationEntity(208U);
    msg.x = 0.820394500571;
    msg.y = 0.731799793648;
    msg.z = 0.148462997074;
    msg.k = 0.584070990096;
    msg.m = 0.446247943385;
    msg.n = 0.501266459731;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.251696074292);
    msg.setSource(64094U);
    msg.setSourceEntity(182U);
    msg.setDestination(47051U);
    msg.setDestinationEntity(135U);
    msg.value = 0.664698809942;

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
    msg.setTimeStamp(0.0228410522965);
    msg.setSource(35906U);
    msg.setSourceEntity(147U);
    msg.setDestination(46841U);
    msg.setDestinationEntity(166U);
    msg.value = 0.212777137671;

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
    msg.setTimeStamp(0.867389275068);
    msg.setSource(57373U);
    msg.setSourceEntity(139U);
    msg.setDestination(20252U);
    msg.setDestinationEntity(79U);
    msg.value = 0.987122266532;

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
    msg.setTimeStamp(0.98665278151);
    msg.setSource(15117U);
    msg.setSourceEntity(92U);
    msg.setDestination(40482U);
    msg.setDestinationEntity(186U);
    msg.u = 0.40271511435;
    msg.v = 0.543625691734;
    msg.w = 0.73041466957;
    msg.p = 0.675680636539;
    msg.q = 0.00685957859294;
    msg.r = 0.647444652382;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.0793550090703);
    msg.setSource(28152U);
    msg.setSourceEntity(191U);
    msg.setDestination(2335U);
    msg.setDestinationEntity(92U);
    msg.u = 0.820873571741;
    msg.v = 0.351810766853;
    msg.w = 0.330419784597;
    msg.p = 0.352777663792;
    msg.q = 0.700249172255;
    msg.r = 0.120471181033;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.148294836634);
    msg.setSource(13105U);
    msg.setSourceEntity(22U);
    msg.setDestination(45818U);
    msg.setDestinationEntity(41U);
    msg.u = 0.627120986743;
    msg.v = 0.25527986713;
    msg.w = 0.582995610836;
    msg.p = 0.0141235772426;
    msg.q = 0.176566779578;
    msg.r = 0.211496269596;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.487259609569);
    msg.setSource(58263U);
    msg.setSourceEntity(227U);
    msg.setDestination(14515U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 3586090942U;
    msg.start_lat = 0.948773202705;
    msg.start_lon = 0.438284457955;
    msg.start_z = 0.403838197107;
    msg.start_z_units = 250U;
    msg.end_lat = 0.232609268034;
    msg.end_lon = 0.389712312928;
    msg.end_z = 0.789483640221;
    msg.end_z_units = 72U;
    msg.lradius = 0.606063006613;
    msg.flags = 218U;
    msg.x = 0.583064706787;
    msg.y = 0.433465013501;
    msg.z = 0.467540928159;
    msg.vx = 0.933491021596;
    msg.vy = 0.00395135472035;
    msg.vz = 0.134745990437;
    msg.course_error = 0.960098528806;
    msg.eta = 65249U;

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
    msg.setTimeStamp(0.116322324967);
    msg.setSource(44868U);
    msg.setSourceEntity(159U);
    msg.setDestination(30658U);
    msg.setDestinationEntity(30U);
    msg.path_ref = 2271086888U;
    msg.start_lat = 0.528014873293;
    msg.start_lon = 0.256873867777;
    msg.start_z = 0.607997288404;
    msg.start_z_units = 28U;
    msg.end_lat = 0.559761576878;
    msg.end_lon = 0.64247560564;
    msg.end_z = 0.16880326284;
    msg.end_z_units = 177U;
    msg.lradius = 0.970460825399;
    msg.flags = 193U;
    msg.x = 0.408236490181;
    msg.y = 0.901643935073;
    msg.z = 0.189876160911;
    msg.vx = 0.0974693770411;
    msg.vy = 0.12902277611;
    msg.vz = 0.0431046813387;
    msg.course_error = 0.103680223988;
    msg.eta = 56096U;

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
    msg.setTimeStamp(0.240450942589);
    msg.setSource(46471U);
    msg.setSourceEntity(236U);
    msg.setDestination(3405U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 159618727U;
    msg.start_lat = 0.353390603764;
    msg.start_lon = 0.854025778033;
    msg.start_z = 0.286575309029;
    msg.start_z_units = 71U;
    msg.end_lat = 0.552865372517;
    msg.end_lon = 0.318519034663;
    msg.end_z = 0.618180107944;
    msg.end_z_units = 39U;
    msg.lradius = 0.230869477875;
    msg.flags = 103U;
    msg.x = 0.106424818234;
    msg.y = 0.879313110073;
    msg.z = 0.240954840324;
    msg.vx = 0.694927773253;
    msg.vy = 0.220909448766;
    msg.vz = 0.409941374872;
    msg.course_error = 0.667412530339;
    msg.eta = 2713U;

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
    msg.setTimeStamp(0.572307803237);
    msg.setSource(53673U);
    msg.setSourceEntity(71U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(16U);
    msg.k = 0.977511006408;
    msg.m = 0.295443226177;
    msg.n = 0.00331607301367;

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
    msg.setTimeStamp(0.818235030854);
    msg.setSource(19255U);
    msg.setSourceEntity(121U);
    msg.setDestination(47501U);
    msg.setDestinationEntity(115U);
    msg.k = 0.241372550379;
    msg.m = 0.407997403321;
    msg.n = 0.707774121031;

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
    msg.setTimeStamp(0.0376587968345);
    msg.setSource(5054U);
    msg.setSourceEntity(208U);
    msg.setDestination(38736U);
    msg.setDestinationEntity(221U);
    msg.k = 0.465723044056;
    msg.m = 0.646814117795;
    msg.n = 0.154375566512;

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
    msg.setTimeStamp(0.976351551169);
    msg.setSource(59312U);
    msg.setSourceEntity(97U);
    msg.setDestination(22907U);
    msg.setDestinationEntity(102U);
    msg.p = 0.435966913656;
    msg.i = 0.455090767009;
    msg.d = 0.663829068049;
    msg.a = 0.897432349881;

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
    msg.setTimeStamp(0.560469488496);
    msg.setSource(64329U);
    msg.setSourceEntity(146U);
    msg.setDestination(33322U);
    msg.setDestinationEntity(160U);
    msg.p = 0.319995262737;
    msg.i = 0.441213131794;
    msg.d = 0.90432023955;
    msg.a = 0.289143594548;

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
    msg.setTimeStamp(0.957051756824);
    msg.setSource(46835U);
    msg.setSourceEntity(229U);
    msg.setDestination(46470U);
    msg.setDestinationEntity(177U);
    msg.p = 0.300657169508;
    msg.i = 0.505727188452;
    msg.d = 0.897667829775;
    msg.a = 0.78752040906;

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
    msg.setTimeStamp(0.233525653089);
    msg.setSource(43222U);
    msg.setSourceEntity(177U);
    msg.setDestination(55309U);
    msg.setDestinationEntity(100U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.0426544785543);
    msg.setSource(29710U);
    msg.setSourceEntity(121U);
    msg.setDestination(23167U);
    msg.setDestinationEntity(44U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.344225661555);
    msg.setSource(55711U);
    msg.setSourceEntity(168U);
    msg.setDestination(20870U);
    msg.setDestinationEntity(44U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.563330609395);
    msg.setSource(31996U);
    msg.setSourceEntity(232U);
    msg.setDestination(10829U);
    msg.setDestinationEntity(140U);
    msg.x = 0.16705439643;
    msg.y = 0.319574130429;
    msg.z = 0.831588066408;
    msg.vx = 0.714900379294;
    msg.vy = 0.952570521368;
    msg.vz = 0.692134215135;
    msg.ax = 0.0849171917355;
    msg.ay = 0.789160941648;
    msg.az = 0.904572706941;
    msg.flags = 18633U;

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
    msg.setTimeStamp(0.746039848521);
    msg.setSource(64292U);
    msg.setSourceEntity(205U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(202U);
    msg.x = 0.505028603012;
    msg.y = 0.810582029462;
    msg.z = 0.882206731185;
    msg.vx = 0.222561687426;
    msg.vy = 0.3257844481;
    msg.vz = 0.281843201405;
    msg.ax = 0.740358242992;
    msg.ay = 0.180686446202;
    msg.az = 0.58096961077;
    msg.flags = 849U;

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
    msg.setTimeStamp(0.885316813867);
    msg.setSource(10479U);
    msg.setSourceEntity(13U);
    msg.setDestination(21598U);
    msg.setDestinationEntity(185U);
    msg.x = 0.143862881791;
    msg.y = 0.147930770373;
    msg.z = 0.306460866659;
    msg.vx = 0.868629018635;
    msg.vy = 0.91081118435;
    msg.vz = 0.323204183882;
    msg.ax = 0.876132344001;
    msg.ay = 0.834652645316;
    msg.az = 0.958563138351;
    msg.flags = 2204U;

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
    msg.setTimeStamp(0.711886249315);
    msg.setSource(47120U);
    msg.setSourceEntity(5U);
    msg.setDestination(49091U);
    msg.setDestinationEntity(186U);
    msg.value = 0.370331403164;

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
    msg.setTimeStamp(0.220235799567);
    msg.setSource(44U);
    msg.setSourceEntity(52U);
    msg.setDestination(18645U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0817575376397;

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
    msg.setTimeStamp(0.499090606442);
    msg.setSource(16055U);
    msg.setSourceEntity(178U);
    msg.setDestination(52075U);
    msg.setDestinationEntity(225U);
    msg.value = 0.503245379224;

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
    msg.setTimeStamp(0.265484476405);
    msg.setSource(61772U);
    msg.setSourceEntity(170U);
    msg.setDestination(16815U);
    msg.setDestinationEntity(17U);
    msg.timeout = 52948U;
    msg.lat = 0.302641140699;
    msg.lon = 0.860264965364;
    msg.z = 0.151759975299;
    msg.z_units = 171U;
    msg.speed = 0.63253661862;
    msg.speed_units = 28U;
    msg.roll = 0.295849854913;
    msg.pitch = 0.434994983897;
    msg.yaw = 0.328377479127;
    msg.custom.assign("ZMZDEVWAXHWIXDETKTFYDWLQHJWHNTHBTCXRHJRXWTOFZONRIOUOZRGXSRXBCAYAEELCBBUGJBPFRJSSVMKEVTKBBNHFIRGOMNVDJXIOHVMIXUBQMGSLWACQFCJLPYPHNIEVOURUQQLIVSYRYPSPXYSVWSIZLOQFDKFPGFNJLWEDBAUDWZYUQKRUKKMKGLTGMPZAAKUCTOYZNNJYWQTXOMGKCUMCLEHQS");

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
    msg.setTimeStamp(0.643191645661);
    msg.setSource(11262U);
    msg.setSourceEntity(175U);
    msg.setDestination(43114U);
    msg.setDestinationEntity(81U);
    msg.timeout = 14358U;
    msg.lat = 0.308647199986;
    msg.lon = 0.377551089532;
    msg.z = 0.104778420061;
    msg.z_units = 152U;
    msg.speed = 0.235211886164;
    msg.speed_units = 115U;
    msg.roll = 0.467960440353;
    msg.pitch = 0.496955291738;
    msg.yaw = 0.710754467358;
    msg.custom.assign("OEUSKXQSERSZJDWGDMQYU");

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
    msg.setTimeStamp(0.452163847613);
    msg.setSource(41423U);
    msg.setSourceEntity(220U);
    msg.setDestination(54932U);
    msg.setDestinationEntity(19U);
    msg.timeout = 55561U;
    msg.lat = 0.390877983789;
    msg.lon = 0.928666411153;
    msg.z = 0.459307989864;
    msg.z_units = 10U;
    msg.speed = 0.693371309664;
    msg.speed_units = 133U;
    msg.roll = 0.587386150632;
    msg.pitch = 0.572357157481;
    msg.yaw = 0.951297604195;
    msg.custom.assign("TXQMXZUSFTORFOTUPNBMIYNFIQXBAKCXDPUHLADCBGEPDZLREOVPQHFYWCWYRRPCMJHCOMIUJFLYLGMAIDGUSHKZIYGGBEVASHKWI");

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
    msg.setTimeStamp(0.780991123362);
    msg.setSource(7186U);
    msg.setSourceEntity(233U);
    msg.setDestination(47790U);
    msg.setDestinationEntity(127U);
    msg.timeout = 32954U;
    msg.lat = 0.0825678277934;
    msg.lon = 0.873567071256;
    msg.z = 0.766641555984;
    msg.z_units = 114U;
    msg.speed = 0.158943820123;
    msg.speed_units = 101U;
    msg.duration = 64186U;
    msg.radius = 0.666192702709;
    msg.flags = 253U;
    msg.custom.assign("AIFAVGQMVWHMCVAXHCUEBPGYDKRNQDVDVKZGHCBZLCNQZBGNBLKVJSSABANRURMNINJRLYMYVSUEPDCQKXCHPSDJYTV");

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
    msg.setTimeStamp(0.51241960006);
    msg.setSource(64820U);
    msg.setSourceEntity(89U);
    msg.setDestination(49924U);
    msg.setDestinationEntity(254U);
    msg.timeout = 46775U;
    msg.lat = 0.643972408348;
    msg.lon = 0.526998041988;
    msg.z = 0.311010916294;
    msg.z_units = 33U;
    msg.speed = 0.57446797503;
    msg.speed_units = 121U;
    msg.duration = 24038U;
    msg.radius = 0.820140385701;
    msg.flags = 140U;
    msg.custom.assign("FOYKMTAAEHXYQGKQPBUCHOBKXINEWHQLEOP");

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
    msg.setTimeStamp(0.781983926207);
    msg.setSource(56249U);
    msg.setSourceEntity(24U);
    msg.setDestination(37453U);
    msg.setDestinationEntity(42U);
    msg.timeout = 50560U;
    msg.lat = 0.574818957036;
    msg.lon = 0.74125665244;
    msg.z = 0.828419668242;
    msg.z_units = 27U;
    msg.speed = 0.388084259763;
    msg.speed_units = 137U;
    msg.duration = 56207U;
    msg.radius = 0.420731782589;
    msg.flags = 209U;
    msg.custom.assign("OUDGPJZSQDEAPWLTVWVHXUWBFOEQCITOLRRZCJRGFZQAHCDWYQCYFYMBIIYUBYOSDJAUQCPPJMYMYOHJMTOASBYGIIIAIKBLSLLFNZPAKBDJXKTWQCDJZMELMUUBHQVGPGKTUSJTZKSMSNPNWTIVZUFPGDXKOEBRAWLRAVKHTAMCHSRNCZRVFNROOXWCEQRHVIXSDGXF");

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
    msg.setTimeStamp(0.0133868382405);
    msg.setSource(36010U);
    msg.setSourceEntity(94U);
    msg.setDestination(44179U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("BSSEIOVQFPCNRZLGATSNWUUUTZLXJGBAQEMXOBFMAHUCJFQHPXAZIOZLUIRFCEA");

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
    msg.setTimeStamp(0.33891434828);
    msg.setSource(9066U);
    msg.setSourceEntity(176U);
    msg.setDestination(37877U);
    msg.setDestinationEntity(72U);
    msg.custom.assign("DQQPFSZMWVBNCGGWVXTHNTYMLQFUPGGKSUVHZDVWXFCMSVRODMINXQAUITSTXDRKKUTIBQVHIOPWYCLEPMOSZBQGVXPPRYUOYYIPDELQJNKROJSXEDKWIN");

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
    msg.setTimeStamp(0.783483585577);
    msg.setSource(59304U);
    msg.setSourceEntity(146U);
    msg.setDestination(25647U);
    msg.setDestinationEntity(186U);
    msg.custom.assign("IBRMSYVQIGGGNLGJQYEYLNWUXPZFBWXEZTIEQZDOSALCI");

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
    msg.setTimeStamp(0.573474355668);
    msg.setSource(49465U);
    msg.setSourceEntity(94U);
    msg.setDestination(16540U);
    msg.setDestinationEntity(9U);
    msg.timeout = 38543U;
    msg.lat = 0.0572990747019;
    msg.lon = 0.287837096078;
    msg.z = 0.751710170658;
    msg.z_units = 68U;
    msg.duration = 3138U;
    msg.speed = 0.113370309751;
    msg.speed_units = 136U;
    msg.type = 135U;
    msg.radius = 0.445426484729;
    msg.length = 0.284634347987;
    msg.bearing = 0.0441883184258;
    msg.direction = 167U;
    msg.custom.assign("PTXXXNMOBBBYMUTDEPNAAJKZAFGBRLFPRYOGKIZDBRMNLIPUQQZFJZPVEWNAYDSVWMOSSTCKDFRLBKEVXLECAOXNGUWPNDQOIRFCQKNXMMRGIDEBQKGVIRSZJOHAEQWHNFFIUOMLTUZTCZGHNHKKITOPTTCQCHVTJJRJPYSHSBSUJJGHFFSQORQYUHVGDSSDUCFWIAUXBKLCBCCVLIUXYRXDWLEYJVGMQAYLA");

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
    msg.setTimeStamp(0.924634199312);
    msg.setSource(18023U);
    msg.setSourceEntity(117U);
    msg.setDestination(13165U);
    msg.setDestinationEntity(41U);
    msg.timeout = 19508U;
    msg.lat = 0.905997819349;
    msg.lon = 0.545435177923;
    msg.z = 0.189852179901;
    msg.z_units = 160U;
    msg.duration = 52878U;
    msg.speed = 0.825028892544;
    msg.speed_units = 55U;
    msg.type = 83U;
    msg.radius = 0.667221734154;
    msg.length = 0.69768683431;
    msg.bearing = 0.0485867628981;
    msg.direction = 151U;
    msg.custom.assign("MEHGMXOBTQKUHCENUAQYLGTZIOACLVTILZSNKSFGFQANYPPJKYUMCJBJNNCRNWIRLUBCPLCLGKJXZKBDZSHTURJMQWMVDOYBHHWKLRDITDWAMGUSWRCVXTDOQ");

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
    msg.setTimeStamp(0.664550776307);
    msg.setSource(22281U);
    msg.setSourceEntity(35U);
    msg.setDestination(3368U);
    msg.setDestinationEntity(173U);
    msg.timeout = 49852U;
    msg.lat = 0.446464048625;
    msg.lon = 0.84505347014;
    msg.z = 0.93822454969;
    msg.z_units = 215U;
    msg.duration = 19170U;
    msg.speed = 0.58168214772;
    msg.speed_units = 76U;
    msg.type = 146U;
    msg.radius = 0.486618904468;
    msg.length = 0.983224825677;
    msg.bearing = 0.908946411042;
    msg.direction = 189U;
    msg.custom.assign("QHLDDNAQUPXUYWSKEATLFARUOSCVQCQCRVGZQATXEMZKSGMSPQWHYGNKHMWGMACFIVOMJSZCYAOCGQRHOTPOAJVEMLLEKPEXBTLPYWABIDZEVQUOUXMKJRGCVJDRAIPZGXNSNAGNBTWJNWYEQXFFWPKHBWUXXIBEPLLFCTJSMV");

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
    msg.setTimeStamp(0.0896611344629);
    msg.setSource(38127U);
    msg.setSourceEntity(174U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(43U);
    msg.duration = 19166U;
    msg.custom.assign("XYHAJRBCDEIUIHCUHLTUMKCKQTYXNIWWCPSBTKUXULDNVYVNOQNFAUVDNXMFXGPSSIAWXDHYZHZTFFQBELEOKJNURGZRVSHJZFJSRMXWLTPAUBBJSWFGRFZOFYAFOEIWSPTGAB");

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
    msg.setTimeStamp(0.673481130122);
    msg.setSource(46670U);
    msg.setSourceEntity(216U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(7U);
    msg.duration = 48086U;
    msg.custom.assign("ITMORFRENIKXYFSJAOOXZMYEDBIMDMFSQDZETBXYRZZWHJYZXCPPSLUHKTQGHGWGORLNYBCUMVUEQDODOWZQOXIVAEPAHNGQVHPDQWTSSLPEKV");

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
    msg.setTimeStamp(0.116285612396);
    msg.setSource(15405U);
    msg.setSourceEntity(59U);
    msg.setDestination(29860U);
    msg.setDestinationEntity(97U);
    msg.duration = 35485U;
    msg.custom.assign("RYFRZRHMNJODQHFDHATXKUVFREKWJFPXXJCJDVBUIUATYHOXFXI");

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
    msg.setTimeStamp(0.390784614203);
    msg.setSource(26633U);
    msg.setSourceEntity(141U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(210U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.634459603092;
    tmp_msg_0.z_units = 203U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1274U;
    msg.custom.assign("NGTZPSQJPFUYLAYOJUGTGOAHELYPTBBNYRJEJEXWWRPISUBZGNZDDHVSQVFUILWEBCFIMMODAXXOGYCEKLWKREGTSKZIJIFIQFRSXMKSIXNCGMHOCQMQANU");

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
    msg.setTimeStamp(0.0583835972051);
    msg.setSource(28534U);
    msg.setSourceEntity(67U);
    msg.setDestination(46779U);
    msg.setDestinationEntity(236U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.925564650693;
    msg.control.set(tmp_msg_0);
    msg.duration = 5740U;
    msg.custom.assign("CAQWSZWSBHBTLZFTOOEUXLKCEXJCGVQNERLHKCIVCRZESNRLXFGRLHDJPVVGIGHUIXYBEHBDGUDNMCPWOURTOGTENCUPMPADEIYRJNIOQWVFJXNSOHJTCZGBOESKRJVXNTV");

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
    msg.setTimeStamp(0.423993972744);
    msg.setSource(26801U);
    msg.setSourceEntity(141U);
    msg.setDestination(21572U);
    msg.setDestinationEntity(75U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.998809733061;
    tmp_msg_0.speed_units = 239U;
    msg.control.set(tmp_msg_0);
    msg.duration = 63896U;
    msg.custom.assign("JNBTETWFASEXTGKJHWGFKUAQBUPJBNIMDGFSL");

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
    msg.setTimeStamp(0.530196450946);
    msg.setSource(36798U);
    msg.setSourceEntity(115U);
    msg.setDestination(16281U);
    msg.setDestinationEntity(205U);
    msg.timeout = 41284U;
    msg.lat = 0.783538655696;
    msg.lon = 0.553553269417;
    msg.z = 0.688434290879;
    msg.z_units = 64U;
    msg.speed = 0.278484295439;
    msg.speed_units = 27U;
    msg.bearing = 0.191351837532;
    msg.cross_angle = 0.704463449855;
    msg.width = 0.119980208096;
    msg.length = 0.0816829287512;
    msg.hstep = 0.37284838604;
    msg.coff = 73U;
    msg.alternation = 235U;
    msg.flags = 120U;
    msg.custom.assign("OLFECCLEQTVATXVLXXFJYUDMUYAYMWFEERWCVNVLUWSHHRLBUYJOHBVJDIQZMIMLDMOKVCASBJPGWNZPNNSIFYSSZUNNSTAKABQEPGPHGUEAUYLDXFJIRPGDRGYVIMFKOYLHCIWBQCKPEZWOWJORBIZOKZATUMJZMJASKXAKHPSMFECTTEBRPWWHYGSDENJKQCCHIGXVDNBXQVBMZKD");

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
    msg.setTimeStamp(0.41077177548);
    msg.setSource(46353U);
    msg.setSourceEntity(224U);
    msg.setDestination(39685U);
    msg.setDestinationEntity(207U);
    msg.timeout = 30793U;
    msg.lat = 0.365516071615;
    msg.lon = 0.332490107242;
    msg.z = 0.83854160713;
    msg.z_units = 58U;
    msg.speed = 0.523616795157;
    msg.speed_units = 16U;
    msg.bearing = 0.834249877291;
    msg.cross_angle = 0.593684533028;
    msg.width = 0.574588304506;
    msg.length = 0.56185248577;
    msg.hstep = 0.950097119777;
    msg.coff = 145U;
    msg.alternation = 146U;
    msg.flags = 87U;
    msg.custom.assign("RYWUBDJPYTYFPGMNBTEPWGIXYNSPJGKVFRVLOUOOZSXOAHCZGXPCCPNVRJXQPZIKXCKQMDSFGLRLAJVBSNBWPQIMFMREEOVWLWMCWITTDEGGJAHBQOYRXWSEETCGBIJPJVALAHQFXLXKYUZOMVNCSFBMRSTTGXPDDTYEWYKFRAZQRDTYOJLQIIINXQZHNJZARUBKSUVKNLGWCSIULNMJFDZIYUUOLAAZDQKMHKAFSV");

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
    msg.setTimeStamp(0.166091736762);
    msg.setSource(61299U);
    msg.setSourceEntity(86U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(15U);
    msg.timeout = 3972U;
    msg.lat = 0.644003573666;
    msg.lon = 0.20208688598;
    msg.z = 0.637983825044;
    msg.z_units = 154U;
    msg.speed = 0.696690342155;
    msg.speed_units = 83U;
    msg.bearing = 0.863764010917;
    msg.cross_angle = 0.262429646629;
    msg.width = 0.673927837636;
    msg.length = 0.317477412684;
    msg.hstep = 0.18777925612;
    msg.coff = 211U;
    msg.alternation = 94U;
    msg.flags = 135U;
    msg.custom.assign("RVXMKXSMVGSRTQGAIURJHXT");

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
    msg.setTimeStamp(0.29619073167);
    msg.setSource(10791U);
    msg.setSourceEntity(77U);
    msg.setDestination(25783U);
    msg.setDestinationEntity(52U);
    msg.timeout = 987U;
    msg.lat = 0.933371130914;
    msg.lon = 0.808056434663;
    msg.z = 0.506645834389;
    msg.z_units = 69U;
    msg.speed = 0.948759039205;
    msg.speed_units = 17U;
    msg.custom.assign("ZTROBBPDRPIHYUNEQJHYRBCYMFJFEDFYNWQKAIXAPUMWGXCPMXJOCBIZIPWZPEKHEZGOWETNSTLJVKWKJBAOATAZHUSNCXQUUCFHDUHWSITZLFGISIMZIYINJVPGSLRZTTLA");

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
    msg.setTimeStamp(0.972762473893);
    msg.setSource(33298U);
    msg.setSourceEntity(247U);
    msg.setDestination(24292U);
    msg.setDestinationEntity(10U);
    msg.timeout = 44137U;
    msg.lat = 0.616342909402;
    msg.lon = 0.881562973549;
    msg.z = 0.76489011622;
    msg.z_units = 133U;
    msg.speed = 0.982357698312;
    msg.speed_units = 57U;
    msg.custom.assign("VIIGBAXIAMBDHXNQQNFIPUCRGJNRULHXRKBZXHDYTQNHXGSMWPBIWFOKTDYTUGSVAXJZTMFMAHLLOMNRPHWBLZVGCPEDLVCMEVCMVXPBRAUACYFRCJEUODTXEBUWDNPNYZIELJPOZMTI");

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
    msg.setTimeStamp(0.596847291844);
    msg.setSource(5286U);
    msg.setSourceEntity(146U);
    msg.setDestination(4170U);
    msg.setDestinationEntity(25U);
    msg.timeout = 47174U;
    msg.lat = 0.963662806142;
    msg.lon = 0.655552907225;
    msg.z = 0.147569850484;
    msg.z_units = 144U;
    msg.speed = 0.211162132887;
    msg.speed_units = 224U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.647569375837;
    tmp_msg_0.y = 0.711763188676;
    tmp_msg_0.z = 0.6816248714;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZHZTIHUVRQLWMTFJTINXNBOOSFAKXRKWZKZVLCVTWSZCGWOAQKIGXRDLOQHAFHUBMYMRMEIKDTQWJFIGYBGYUTSMCXEHLNHJCOQOPNISDDUGEWDGVFBSYHALDTEIUPCPSROYFKQVNJLAXJYEYMVAPBBXTJAQLPQDUUBUIRGAMPZAOOTLZGJCSCUJJCLQVITXMXNHAWRYEEXXZFRYHBEQMNPRPWNMSNKVBCN");

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
    msg.setTimeStamp(0.771663700683);
    msg.setSource(18341U);
    msg.setSourceEntity(254U);
    msg.setDestination(8950U);
    msg.setDestinationEntity(139U);
    msg.x = 0.589705655115;
    msg.y = 0.823974453927;
    msg.z = 0.787349409915;

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
    msg.setTimeStamp(0.86768715621);
    msg.setSource(60790U);
    msg.setSourceEntity(58U);
    msg.setDestination(59953U);
    msg.setDestinationEntity(237U);
    msg.x = 0.541310610473;
    msg.y = 0.813504130995;
    msg.z = 0.212576718513;

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
    msg.setTimeStamp(0.921330192486);
    msg.setSource(60283U);
    msg.setSourceEntity(84U);
    msg.setDestination(26665U);
    msg.setDestinationEntity(242U);
    msg.x = 0.584951375504;
    msg.y = 0.0210943593007;
    msg.z = 0.434977626692;

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
    msg.setTimeStamp(0.543249092918);
    msg.setSource(58113U);
    msg.setSourceEntity(189U);
    msg.setDestination(51271U);
    msg.setDestinationEntity(150U);
    msg.timeout = 26047U;
    msg.lat = 0.341814040739;
    msg.lon = 0.0608688020457;
    msg.z = 0.402293116713;
    msg.z_units = 184U;
    msg.amplitude = 0.610736547889;
    msg.pitch = 0.0134461340019;
    msg.speed = 0.642926236274;
    msg.speed_units = 75U;
    msg.custom.assign("ECLXEDPWITQYCDXQVRPZYMITULKXAKCEDDGFEJDWYFHFLUZJUVPSQTKOXSLVDNLUGBORXIAEBMFAZIUOOPZTDUVATNHBRCNRSHMVJZJTGLRGATIHLZSCSYBYPQQESLMFYNSDJBKLUWALQMIWGKGYPYRJKEVWYPS");

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
    msg.setTimeStamp(0.180956073393);
    msg.setSource(47107U);
    msg.setSourceEntity(50U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(8U);
    msg.timeout = 61863U;
    msg.lat = 0.862487370484;
    msg.lon = 0.530285303891;
    msg.z = 0.370306800388;
    msg.z_units = 6U;
    msg.amplitude = 0.741453614698;
    msg.pitch = 0.93027385454;
    msg.speed = 0.936832364289;
    msg.speed_units = 80U;
    msg.custom.assign("KCRBVEYIMDAWUWOVPOJSHKFXWSMPYDJWAWZHOXNYKEATZLGDUZIOSAPUZHNWRAQTLCRHLYOJPPKGFTNFVBAKODCLUOQYHQQLVRYXVSNNNBLGQSEXLUGFRVIEWNRMLMDLGJCCIIZBPOSGFUKCQCDMJTRWIRICDZQFJIVMTUPBJTZRXHMBVHSGOJPFBQASHSTDBMAAMNYIZZJABISKXYRTJZPEETKYQXENGGUHN");

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
    msg.setTimeStamp(0.727530353859);
    msg.setSource(35563U);
    msg.setSourceEntity(114U);
    msg.setDestination(39563U);
    msg.setDestinationEntity(112U);
    msg.timeout = 25382U;
    msg.lat = 0.829722157146;
    msg.lon = 0.658167554982;
    msg.z = 0.306964518968;
    msg.z_units = 5U;
    msg.amplitude = 0.0958789954059;
    msg.pitch = 0.152777187688;
    msg.speed = 0.521487767901;
    msg.speed_units = 161U;
    msg.custom.assign("BXHYUFZOWAY");

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
    msg.setTimeStamp(0.155030780401);
    msg.setSource(21259U);
    msg.setSourceEntity(154U);
    msg.setDestination(52731U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.975729088096);
    msg.setSource(50491U);
    msg.setSourceEntity(95U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.165292966059);
    msg.setSource(58052U);
    msg.setSourceEntity(129U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.64676578214);
    msg.setSource(25073U);
    msg.setSourceEntity(99U);
    msg.setDestination(58562U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.591134115099;
    msg.lon = 0.655551498222;
    msg.z = 0.0608109541397;
    msg.z_units = 122U;
    msg.radius = 0.487747985723;
    msg.duration = 49866U;
    msg.speed = 0.378499375466;
    msg.speed_units = 171U;
    msg.custom.assign("TKXRWWIPPSFUYESIKLWMZBHQHPRKZ");

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
    msg.setTimeStamp(0.0536309060084);
    msg.setSource(37031U);
    msg.setSourceEntity(63U);
    msg.setDestination(42328U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.111924726732;
    msg.lon = 0.489789380037;
    msg.z = 0.57135097692;
    msg.z_units = 0U;
    msg.radius = 0.625303354052;
    msg.duration = 35557U;
    msg.speed = 0.40656095866;
    msg.speed_units = 12U;
    msg.custom.assign("MDLPOFYVGCIOSIGCFBWHVTIQILSSFURNZFQ");

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
    msg.setTimeStamp(0.106728296524);
    msg.setSource(26815U);
    msg.setSourceEntity(124U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.573186475838;
    msg.lon = 0.600440652869;
    msg.z = 0.719675953888;
    msg.z_units = 16U;
    msg.radius = 0.00469738688525;
    msg.duration = 64614U;
    msg.speed = 0.50238021755;
    msg.speed_units = 59U;
    msg.custom.assign("YAKLNQJVSLZVOJTVKDIDNCOELWUJHIXKBSICCLMHLSIUMMHUORQYWUZTESQESDCWTARWVCNINRGJGWEWNQFICMNBHBLLMKHDITXRKQFXZNXTFSYWYBUVPYXPAOBQTHFPPQIBDOABUDBBVMGEJGZRMYPYQKPJMAURGAZGSHKESTUFTWWZRPJLBJTFJTIKPAUHGDJYDGARWCFHMXZOQQLCAGRZSXN");

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
    msg.setTimeStamp(0.760929298012);
    msg.setSource(26987U);
    msg.setSourceEntity(104U);
    msg.setDestination(61231U);
    msg.setDestinationEntity(118U);
    msg.timeout = 4438U;
    msg.flags = 149U;
    msg.lat = 0.114885897171;
    msg.lon = 0.533177200668;
    msg.start_z = 0.99330802617;
    msg.start_z_units = 78U;
    msg.end_z = 0.804532922758;
    msg.end_z_units = 105U;
    msg.radius = 0.786150855532;
    msg.speed = 0.42745328009;
    msg.speed_units = 218U;
    msg.custom.assign("LAJOHXWIQESNPTMEYZWCSYKBPNHIFQURSMSZSEHCZISKUHBFBUHBCOOYKGTNLIGDYMOBKMCVREYUIAPJZQLCBGFO");

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
    msg.setTimeStamp(0.24851122216);
    msg.setSource(51742U);
    msg.setSourceEntity(198U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(146U);
    msg.timeout = 4565U;
    msg.flags = 136U;
    msg.lat = 0.461675275587;
    msg.lon = 0.391440117138;
    msg.start_z = 0.803945625937;
    msg.start_z_units = 26U;
    msg.end_z = 0.257247428448;
    msg.end_z_units = 83U;
    msg.radius = 0.623366678166;
    msg.speed = 0.762016966688;
    msg.speed_units = 100U;
    msg.custom.assign("GAXLIKYJCTQGNDWJJGEXIEWGMEVBOZDWZFUPBAIP");

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
    msg.setTimeStamp(0.137046681645);
    msg.setSource(59463U);
    msg.setSourceEntity(21U);
    msg.setDestination(38318U);
    msg.setDestinationEntity(18U);
    msg.timeout = 59672U;
    msg.flags = 78U;
    msg.lat = 0.115857974797;
    msg.lon = 0.561124969381;
    msg.start_z = 0.0422271392633;
    msg.start_z_units = 141U;
    msg.end_z = 0.578040180776;
    msg.end_z_units = 173U;
    msg.radius = 0.867516865584;
    msg.speed = 0.854413538997;
    msg.speed_units = 70U;
    msg.custom.assign("VKFPDZIOPBCWJWXUFJJLIURHIEPNOALECZYNEVCOSEAZGDMHURORNOLDEWDJHIMQYCVYYZTHWWGGQRAQJKEKCNUSICVOKSPC");

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
    msg.setTimeStamp(0.177877813243);
    msg.setSource(11606U);
    msg.setSourceEntity(99U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(10U);
    msg.timeout = 42707U;
    msg.lat = 0.946566134442;
    msg.lon = 0.16801375526;
    msg.z = 0.822678418026;
    msg.z_units = 213U;
    msg.speed = 0.292527072051;
    msg.speed_units = 160U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.46282797347;
    tmp_msg_0.y = 0.413265656405;
    tmp_msg_0.z = 0.216126290317;
    tmp_msg_0.t = 0.553524950448;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MCVSOGMLQWMZJYKBDUSMISFXZYPFPUHCIAFQYPMBTPXCBEWWIPWURLGGLRVDUEDRIRHJZNJKYDSPRCWIKNSGRBXDAZLJBVSQWTTBWLEQOOJCJPOFNBMFHGQHVVRFFIMZCISUHTICUBHZWQTBKEVEOCGITEFNZLXJCNWAYNLAMBOFTAAVAHUQLOYJKPEXLXREZQWPYOLZPHGKKAQTFSNGDARMJCDKAHNYYYDXHQZKSUJTRGGUTSDXM");

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
    msg.setTimeStamp(0.425831917808);
    msg.setSource(59219U);
    msg.setSourceEntity(123U);
    msg.setDestination(54853U);
    msg.setDestinationEntity(68U);
    msg.timeout = 29563U;
    msg.lat = 0.469922276391;
    msg.lon = 0.178231135478;
    msg.z = 0.477322336436;
    msg.z_units = 125U;
    msg.speed = 0.539217516527;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.321053485944;
    tmp_msg_0.y = 0.519873936979;
    tmp_msg_0.z = 0.544883995515;
    tmp_msg_0.t = 0.781490419461;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PAGWQOQXFPGNPYLVGMJIMLYEDRRIDXWOBFHPKHQYNJKTVSJOWPBZKUUWHGAQMJYKAGEBYHNLEPTLFZNSXGFONGWEWADIDDJNGKWJUFUEWYCVROXIVVWDRUTO");

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
    msg.setTimeStamp(0.573407943898);
    msg.setSource(15980U);
    msg.setSourceEntity(51U);
    msg.setDestination(41709U);
    msg.setDestinationEntity(148U);
    msg.timeout = 15480U;
    msg.lat = 0.74099673456;
    msg.lon = 0.301730133408;
    msg.z = 0.362121153728;
    msg.z_units = 86U;
    msg.speed = 0.580266961355;
    msg.speed_units = 2U;
    msg.custom.assign("POBNACFYLQYMWNDLDWUIRCFXUODRRRTZXISAAZ");

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
    msg.setTimeStamp(0.980877927671);
    msg.setSource(53930U);
    msg.setSourceEntity(41U);
    msg.setDestination(29635U);
    msg.setDestinationEntity(93U);
    msg.x = 0.26315384481;
    msg.y = 0.673399123924;
    msg.z = 0.00268636371305;
    msg.t = 0.932105123113;

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
    msg.setTimeStamp(0.36358813033);
    msg.setSource(56374U);
    msg.setSourceEntity(142U);
    msg.setDestination(25040U);
    msg.setDestinationEntity(187U);
    msg.x = 0.993609244048;
    msg.y = 0.960398754204;
    msg.z = 0.858598663709;
    msg.t = 0.491074559126;

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
    msg.setTimeStamp(0.734255657092);
    msg.setSource(2898U);
    msg.setSourceEntity(246U);
    msg.setDestination(29077U);
    msg.setDestinationEntity(127U);
    msg.x = 0.379450895792;
    msg.y = 0.82756563536;
    msg.z = 0.978009350419;
    msg.t = 0.170342653855;

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
    msg.setTimeStamp(0.329599181163);
    msg.setSource(583U);
    msg.setSourceEntity(147U);
    msg.setDestination(43553U);
    msg.setDestinationEntity(50U);
    msg.timeout = 25094U;
    msg.name.assign("PNFOXGHBGQKZPWVTUZFOAHLALQWLRTMLYUSULBVDMSQYFKIWIHKDVWAXENVDEPBZUQQUJABXKMQAXJIJNXHOWCVMQRJRPISMEFRBNYGFDFKKL");
    msg.custom.assign("KLFSZXMFGQSQCNNQFDPIREGNUZWVXYRYPGRMCOFSAJPODDSTDJLEBSORIJPHCVRGMQHCNDKHUWYETLTVOPAVERLMAUTQYBWTKPRIWQFPTITWEZEOVWTUQHHVUJJGCCGTCMYIVARQEJACXHZGMYOKIUQUFPAZXGSPKLEXXFXJZUDYLEMLZVZHVDJDFBWJMUNBXAAOWBERSXVNDNHSNIKLGRKCBFSIZYG");

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
    msg.setTimeStamp(0.281134442244);
    msg.setSource(9764U);
    msg.setSourceEntity(8U);
    msg.setDestination(3849U);
    msg.setDestinationEntity(49U);
    msg.timeout = 25549U;
    msg.name.assign("BOHPRCTHPJCZFXWAYNZASBRFMSQZMIAHNWMHPYIBSBSPJEVOHICDKGINBYGVYOMPVZCASDMTZMHTISRCLQEOJMPQYRBDOVLXVIVRODSNHSBYOHQMY");
    msg.custom.assign("JCOVBLQAEWAKVYYTJGGTSOSGTQEFVPCIGLZTSAKIUOHNHENGPYUGMKZUZXTJXWFQCRYORGSDFZGJPKAHUKBFCGQTRNH");

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
    msg.setTimeStamp(0.93976450101);
    msg.setSource(814U);
    msg.setSourceEntity(230U);
    msg.setDestination(21416U);
    msg.setDestinationEntity(157U);
    msg.timeout = 6089U;
    msg.name.assign("CKTXUTRJNILM");
    msg.custom.assign("IMXIVFMQWBGURVRGFGUZQDRXYZTMBWCVSQUXNEBZXBSOLLJJYEQFPYSYAFERTCDKRZZJZDZHNPVMTPSVFECJOSLGABMYHFBZY");

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
    msg.setTimeStamp(0.80949166816);
    msg.setSource(37283U);
    msg.setSourceEntity(121U);
    msg.setDestination(34369U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.107963294433;
    msg.lon = 0.52283795745;
    msg.z = 0.269094317121;
    msg.z_units = 126U;
    msg.speed = 0.831053827285;
    msg.speed_units = 111U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.381947133715;
    tmp_msg_0.y = 0.151569424319;
    tmp_msg_0.z = 0.726935590803;
    tmp_msg_0.t = 0.905193918154;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 29993U;
    tmp_msg_1.off_x = 0.0900476459977;
    tmp_msg_1.off_y = 0.0895109008248;
    tmp_msg_1.off_z = 0.0318998071795;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.619652171302;
    msg.custom.assign("SPFUZUXUTSYJKEHRANJPZEGHRBEAGMJUEGOCJWZCJUPTMCJQTXGLPDMWVSOSDWEKDQQQKBRGYXROYFXOARZDNOPLGTRNBHBXGUBCUXIMBKIOBVXHFHEZPMWEAZXNONKWBEAAKCLOQFFKTTMWCQWVGIYRPLABJSUCTSNLMDHVZAEDIDDJ");

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
    msg.setTimeStamp(0.464190165365);
    msg.setSource(26702U);
    msg.setSourceEntity(121U);
    msg.setDestination(48915U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.630823743976;
    msg.lon = 0.274934054133;
    msg.z = 0.978418521094;
    msg.z_units = 161U;
    msg.speed = 0.200157176919;
    msg.speed_units = 72U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.132271772086;
    tmp_msg_0.y = 0.49480326613;
    tmp_msg_0.z = 0.0312634950329;
    tmp_msg_0.t = 0.814663346425;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 55430U;
    tmp_msg_1.off_x = 0.0473976876908;
    tmp_msg_1.off_y = 0.35813618116;
    tmp_msg_1.off_z = 0.904792123177;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.145204542416;
    msg.custom.assign("JRRNVVUDDHZIYGZCVFQWFMJBAIINWFNCSSEWQKLAKWYDYXGHPHMYOBJYVAMQEAEOHLCLWDCRZKRQPCBYEDSZ");

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
    msg.setTimeStamp(0.776838480286);
    msg.setSource(64465U);
    msg.setSourceEntity(183U);
    msg.setDestination(8785U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.9930434821;
    msg.lon = 0.593895505978;
    msg.z = 0.951981961052;
    msg.z_units = 95U;
    msg.speed = 0.926495244049;
    msg.speed_units = 248U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25549U;
    tmp_msg_0.off_x = 0.0784738829319;
    tmp_msg_0.off_y = 0.237085783678;
    tmp_msg_0.off_z = 0.873351171182;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.744053027484;
    msg.custom.assign("KAXGVOTWSYVJVEZBQAPENVMGRGWJVEUCLJOYTNTDEACGUVKDNDWBZXEXIIOQAQILWMZRFKLOOOYWGSYAXQNZRDVUNLXKHELJMPNPIPFPBYSCFRE");

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
    msg.setTimeStamp(0.339791655443);
    msg.setSource(54988U);
    msg.setSourceEntity(236U);
    msg.setDestination(40893U);
    msg.setDestinationEntity(44U);
    msg.vid = 2656U;
    msg.off_x = 0.988849543961;
    msg.off_y = 0.798700327398;
    msg.off_z = 0.00153147560103;

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
    msg.setTimeStamp(0.281229261649);
    msg.setSource(37911U);
    msg.setSourceEntity(42U);
    msg.setDestination(17446U);
    msg.setDestinationEntity(253U);
    msg.vid = 12736U;
    msg.off_x = 0.541819847407;
    msg.off_y = 0.948502700783;
    msg.off_z = 0.880482382388;

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
    msg.setTimeStamp(0.0438111586694);
    msg.setSource(5032U);
    msg.setSourceEntity(23U);
    msg.setDestination(4300U);
    msg.setDestinationEntity(15U);
    msg.vid = 34174U;
    msg.off_x = 0.877168893469;
    msg.off_y = 0.312826274622;
    msg.off_z = 0.774480049151;

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
    msg.setTimeStamp(0.851278356983);
    msg.setSource(32123U);
    msg.setSourceEntity(106U);
    msg.setDestination(27779U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.666156825565);
    msg.setSource(6679U);
    msg.setSourceEntity(50U);
    msg.setDestination(19157U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.496578212795);
    msg.setSource(47306U);
    msg.setSourceEntity(20U);
    msg.setDestination(8868U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.208468900964);
    msg.setSource(54446U);
    msg.setSourceEntity(64U);
    msg.setDestination(13841U);
    msg.setDestinationEntity(226U);
    msg.mid = 26423U;

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
    msg.setTimeStamp(0.404304261678);
    msg.setSource(19418U);
    msg.setSourceEntity(67U);
    msg.setDestination(50435U);
    msg.setDestinationEntity(82U);
    msg.mid = 56765U;

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
    msg.setTimeStamp(0.680376040862);
    msg.setSource(5991U);
    msg.setSourceEntity(37U);
    msg.setDestination(59461U);
    msg.setDestinationEntity(182U);
    msg.mid = 50091U;

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
    msg.setTimeStamp(0.203595191567);
    msg.setSource(19139U);
    msg.setSourceEntity(82U);
    msg.setDestination(7983U);
    msg.setDestinationEntity(27U);
    msg.state = 232U;
    msg.eta = 4250U;
    msg.info.assign("UWCIQXTGDUNYXJLGHOSXKUVWWRCZZFJ");

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
    msg.setTimeStamp(0.956939152933);
    msg.setSource(16520U);
    msg.setSourceEntity(128U);
    msg.setDestination(55587U);
    msg.setDestinationEntity(2U);
    msg.state = 52U;
    msg.eta = 27529U;
    msg.info.assign("BGCXUQLKUXLXBGYEKNJHCGLNFZPBAOKTVRJTZBGHPSZLOSXIXHGFFAJIMCFWZJOHSKJVEPWTIHEKXCJFEACQNSVWIUNPBVEQXIGZMYRBAMRJONLSUOUSVAZPRHNOGZYTRQCVQYWDUWNDKWBVPMJQIBC");

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
    msg.setTimeStamp(0.337657888849);
    msg.setSource(26113U);
    msg.setSourceEntity(19U);
    msg.setDestination(51450U);
    msg.setDestinationEntity(150U);
    msg.state = 71U;
    msg.eta = 7492U;
    msg.info.assign("CFDZTWEQXCFOCWVUEARHGZGVLZIBUSITBSJIXYUYXIGJZQLJAMFTSHWHRGYREYLAPTYDCSWSZEMHNTXNEMLAADPOUKHZDZYIEDUNRFZTJEIRQAOLFCCSWKSJOYERWOVXJPCYLXTVKMCFHKXPLMWLQSOUOXFKXPGQJSGNVVRUNYKZRHGBRIDNK");

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
    msg.setTimeStamp(0.909576817812);
    msg.setSource(41589U);
    msg.setSourceEntity(174U);
    msg.setDestination(60207U);
    msg.setDestinationEntity(129U);
    msg.system = 52503U;
    msg.duration = 48408U;
    msg.speed = 0.230626029634;
    msg.speed_units = 17U;
    msg.x = 0.138533245095;
    msg.y = 0.28204767572;
    msg.z = 0.0960172255767;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.666563467851);
    msg.setSource(31700U);
    msg.setSourceEntity(148U);
    msg.setDestination(27323U);
    msg.setDestinationEntity(69U);
    msg.system = 14050U;
    msg.duration = 61107U;
    msg.speed = 0.23835983031;
    msg.speed_units = 185U;
    msg.x = 0.206929597259;
    msg.y = 0.249319969116;
    msg.z = 0.325796674555;
    msg.z_units = 37U;

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
    msg.setTimeStamp(0.520524409431);
    msg.setSource(3951U);
    msg.setSourceEntity(218U);
    msg.setDestination(7187U);
    msg.setDestinationEntity(229U);
    msg.system = 63028U;
    msg.duration = 41747U;
    msg.speed = 0.678683602035;
    msg.speed_units = 147U;
    msg.x = 0.493572579629;
    msg.y = 0.529621686963;
    msg.z = 0.208016662184;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.149385256151);
    msg.setSource(34194U);
    msg.setSourceEntity(105U);
    msg.setDestination(24837U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.187548676181;
    msg.lon = 0.095305672844;
    msg.speed = 0.864805333921;
    msg.speed_units = 240U;
    msg.duration = 6329U;
    msg.sys_a = 48044U;
    msg.sys_b = 42292U;
    msg.move_threshold = 0.0798599026118;

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
    msg.setTimeStamp(0.140533815068);
    msg.setSource(17537U);
    msg.setSourceEntity(225U);
    msg.setDestination(36679U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.277101405758;
    msg.lon = 0.447186666943;
    msg.speed = 0.278049623531;
    msg.speed_units = 174U;
    msg.duration = 8795U;
    msg.sys_a = 38079U;
    msg.sys_b = 857U;
    msg.move_threshold = 0.908374481502;

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
    msg.setTimeStamp(0.675977963901);
    msg.setSource(63270U);
    msg.setSourceEntity(27U);
    msg.setDestination(18566U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.0673563955395;
    msg.lon = 0.76902860023;
    msg.speed = 0.601227196347;
    msg.speed_units = 202U;
    msg.duration = 22117U;
    msg.sys_a = 15664U;
    msg.sys_b = 62534U;
    msg.move_threshold = 0.884265773614;

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
    msg.setTimeStamp(0.976785486303);
    msg.setSource(29327U);
    msg.setSourceEntity(84U);
    msg.setDestination(11315U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.386638311456;
    msg.lon = 0.620057585926;
    msg.z = 0.693568908072;
    msg.z_units = 228U;
    msg.speed = 0.630637427141;
    msg.speed_units = 104U;
    msg.custom.assign("FVHDWCOISVJIOQLPTXGOUBAQAAMOFQYCZRTJKIWZECMXMBQZXRAZTMCGOHZVWJIQVOLQOYEOGUGULSAZOCFLDNISZMGQBCQZFWEDIGPMKCMYNTDUWHZNRCPXILVKESYTTFK");

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
    msg.setTimeStamp(0.366289835641);
    msg.setSource(21176U);
    msg.setSourceEntity(169U);
    msg.setDestination(23156U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.296312285082;
    msg.lon = 0.871766083535;
    msg.z = 0.29687138273;
    msg.z_units = 126U;
    msg.speed = 0.624063663496;
    msg.speed_units = 236U;
    msg.custom.assign("RHSFDZWFVJCONWUACGPHVLDVXLRNEGYANCSNINDVKTIIYJEXMERFKXTMEREFXYZEBRABIJTMQGWRQFTQHORBIGTVHZYCIJYJXXTFLCXVYBWZWVWITCDFULJAFANVZYDAKULXCIBOSEGQGQUCPINPSECWJIZUBKKHBKUPRNOTOZMGWWXTXHPMMZSZMLKMUVSDFYDQMHWOFSORGLQQZDBV");

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
    msg.setTimeStamp(0.023130459639);
    msg.setSource(38474U);
    msg.setSourceEntity(138U);
    msg.setDestination(9742U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.946143410049;
    msg.lon = 0.664675561876;
    msg.z = 0.270426867071;
    msg.z_units = 103U;
    msg.speed = 0.198499703076;
    msg.speed_units = 249U;
    msg.custom.assign("QYYPVXGXJCOTGCMAGPUONIHNCMNKEETMKKUUDPCQWOSJOFFQIJVFGWUPCVGLBKCGSB");

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
    msg.setTimeStamp(0.910537960482);
    msg.setSource(36060U);
    msg.setSourceEntity(22U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.798868364541;
    msg.lon = 0.728957351135;

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
    msg.setTimeStamp(0.316265245166);
    msg.setSource(40813U);
    msg.setSourceEntity(30U);
    msg.setDestination(58428U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.975249028914;
    msg.lon = 0.565739397228;

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
    msg.setTimeStamp(0.913660573531);
    msg.setSource(31448U);
    msg.setSourceEntity(254U);
    msg.setDestination(16297U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.716489992809;
    msg.lon = 0.184954817735;

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
    msg.setTimeStamp(0.36180071511);
    msg.setSource(38961U);
    msg.setSourceEntity(51U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(112U);
    msg.timeout = 55801U;
    msg.lat = 0.591186597941;
    msg.lon = 0.94460200427;
    msg.z = 0.543008732705;
    msg.z_units = 56U;
    msg.pitch = 0.886849340259;
    msg.amplitude = 0.984442241313;
    msg.duration = 45790U;
    msg.speed = 0.771687510952;
    msg.speed_units = 206U;
    msg.radius = 0.96791179217;
    msg.direction = 26U;
    msg.custom.assign("CNHIWEMRJABCAGPBZDKPMVFQXBLWWZUDOBCXMQXITVPWDFKPQDPJAQMVTNFVVJOIHNREXMQKFBWNTPRCCEYGIDWRASULELCTEWGRYFGBBWJEUCIFPYZOZCXPSYLJTLVUFX");

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
    msg.setTimeStamp(0.605650635035);
    msg.setSource(37654U);
    msg.setSourceEntity(103U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(137U);
    msg.timeout = 9580U;
    msg.lat = 0.267637225672;
    msg.lon = 0.183707109617;
    msg.z = 0.675547178947;
    msg.z_units = 157U;
    msg.pitch = 0.674314218376;
    msg.amplitude = 0.00645450647489;
    msg.duration = 17933U;
    msg.speed = 0.575706364806;
    msg.speed_units = 33U;
    msg.radius = 0.607178188854;
    msg.direction = 151U;
    msg.custom.assign("GWXSMRVOOHXOYJNMTMJJLUEPKRUHLXIKTFORSHICIASBWCUQGSNUJKUIATYYLGQMZFTZBBAHAVCOFCGEXTHODZIESVQPJRPKVHNXEFEJWHHQPCDGHNCYFZRSAPLRPMKFCUBLEZGTISIFKYWSWMXNGDGFLDNOXYGWZZDMOZWPPARWIDNDJLYNBJO");

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
    msg.setTimeStamp(0.475402345317);
    msg.setSource(50555U);
    msg.setSourceEntity(244U);
    msg.setDestination(57381U);
    msg.setDestinationEntity(55U);
    msg.timeout = 8791U;
    msg.lat = 0.720297979048;
    msg.lon = 0.409208433547;
    msg.z = 0.699042557131;
    msg.z_units = 142U;
    msg.pitch = 0.368657582824;
    msg.amplitude = 0.534392794037;
    msg.duration = 38229U;
    msg.speed = 0.126761238005;
    msg.speed_units = 156U;
    msg.radius = 0.124355718518;
    msg.direction = 88U;
    msg.custom.assign("XRGJRDHNOEKUMGLPAKRMEGUEYONHEODVIAWCBMBQHZYWBCUXODVDXGHJPE");

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
    msg.setTimeStamp(0.666222706627);
    msg.setSource(1525U);
    msg.setSourceEntity(237U);
    msg.setDestination(43818U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("KCNXWIOWDAT");
    msg.reference_frame = 37U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35509U;
    tmp_msg_0.off_x = 0.451259033082;
    tmp_msg_0.off_y = 0.265631847471;
    tmp_msg_0.off_z = 0.1456652649;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UYFATTCGNSQDWYDKINWPAERONGVCKFDKYGIJYAVFQUVMVXKEOWRAXZVNUQHVKEOJUSDXJLEMFKWWZQSOSCAHSMXKRRKROLEITBPOCBTZDCOBLMJHFDEHRJPSFVXHXMSTXAFYQLZMDNTFBWGCIYDNZJNLLRFPNBLWZOYPVHNCSEOBYCDPPEASPIWGUGVIPXJGVTWLXPSAZBHJIUZYHQBUBKXDZIEGFLRMQYAQMJTQWEGNTHKRJUOB");

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
    msg.setTimeStamp(0.223351198814);
    msg.setSource(55781U);
    msg.setSourceEntity(120U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("UWDAGKYQYUQMDZDVKULEXNINVZHUOBSDQKSKGBVWVHKARLWHEFZOMGIOQZZWTHYGUTYOLPTIIPROHGPSWTJVRSTUVJWNHP");
    msg.reference_frame = 120U;
    msg.custom.assign("WVZJTIUSCDMRVEJAWQLYRTPMSSINWZOYSDIGVWNFCAULLDPLDGBIBCQJVVEZRTDANTWOBHICEHUAJDNPZZMZJ");

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
    msg.setTimeStamp(0.0215957301284);
    msg.setSource(42900U);
    msg.setSourceEntity(133U);
    msg.setDestination(60907U);
    msg.setDestinationEntity(137U);
    msg.formation_name.assign("SBMZDVBYILQBZVIQDLAZLCFEARWTWUNKRUFOULGSEXBHONDFBDGVNVHLMQZLSITWZDJRNIPPFRSRMCCUKMYZHNRSTOZMYISJFNJLADAHTBXGDSBTDFOHXVAYQHUJHMABKVUXRSEDGAXAQPQUCWOSZEXKXUOKECEIEODGJNLQGGFIYHRRJSVYCOXFQBATZZHJXOCQJFPEJPPXUMMNWEQWICYMPTKETFKAVKMYLILBPTJVWRNYVCWGNGKY");
    msg.reference_frame = 191U;
    msg.custom.assign("VDRBJAAVJKRAUHAQOBITFHOWXXYRMMFOURVMOJQWSYKXPOLZNFWGIRYBEZAXRTVMNUUQXDKECLGSGWHSWWRGCVFGSJNXWVNUDLLSHTZFXJQVYCMLGHQYMTKPYNJPYIRMJSEA");

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
    msg.setTimeStamp(0.520755751326);
    msg.setSource(43041U);
    msg.setSourceEntity(33U);
    msg.setDestination(19352U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("FZUOWXGOYQEZSMSCOPPOPUOTPGNORJVDFJINXFLEMEYNTBZXGYGGKIYCISDKSLDJQNQXNDMHUQRIKVZKJFACRBFSVWEMURAATHLSEVYKIZQQFWPPTBKVTKNTPPCJXYGIJUHBNCHSLTYVQKRWIOLMWLPHNYKXWJLXLV");
    msg.formation_name.assign("ZLYEPPWSGODXSMILMQJNQD");
    msg.plan_id.assign("HHQDDKPKFMSVWXOJGQPMBPUUYTOMOZHXZUTDXUJYUNWKJBJOHQKJLACWONUROKKAKRSJSVZRFLERWJHLEYWMFRMRYBINEHLUOWHASDBIHNVTPOYARCQTRVCGVFIPCWRNMMKEDIGLXGCMTEPFTNAMUOGCXGDAZEZSXJCNXZDICVQEFHQTGQJYVSKACBSYQCEBDSIULIXBNWBNFPDFTITSK");
    msg.description.assign("IOSRCWZWAPEHCLKZNOFEWBQJUWTRXEHNYSVQMVQASXCQXKBBHMSHEECORBZGGRFZDADEYKYKXNUTESNUBLGWHMCYVAOIPCDFXPZZHHYHZDTKIRIAWLNRPJJAYBZCPLUUFUWXYCSLGUWRNIDJIJAYJQXONLXRMMKTMUBVPKVEMQITVVJSQRQOLSVGAKBSJU");
    msg.leader_speed = 0.252770753931;
    msg.leader_bank_lim = 0.873865455063;
    msg.pos_sim_err_lim = 0.141584918912;
    msg.pos_sim_err_wrn = 0.826141118225;
    msg.pos_sim_err_timeout = 45364U;
    msg.converg_max = 0.503129655105;
    msg.converg_timeout = 22997U;
    msg.comms_timeout = 9156U;
    msg.turb_lim = 0.165215687109;
    msg.custom.assign("HJXCQTMCBZPBUKBJIELMFIUYYLTNMEUPEYTTGTPEIRASOEHLLBNOSRZILYQYKQSOVAGIWVEVCCALRQOESTJMGHHFLVCGBRZRVACPWKVGFJDVIHKJFDDHFRRAYXVMWNNAWUJQDDTITPPGWSFQSRZNBOQNXXOCAQWRFUKOQGVTJKGONBNZHXLMHZWE");

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
    msg.setTimeStamp(0.241477152039);
    msg.setSource(56998U);
    msg.setSourceEntity(31U);
    msg.setDestination(38242U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("UTFLHLQXCYPUMIZZBSRSFCJNWYAPBONIJEROXSBHSGBISLGSYIOFDFLJQKNHLSAKGUBWVPACLG");
    msg.formation_name.assign("UUZROHPCDAKXFEDZVFHJLYVWPEOLWXYQBTDHOTCQIBUZDXGCWJHLEMSVEASZYHAAERQYJJZUHYSKFZWJVDXEMNQPBEGFYAGXATYNHPBAMUUZBGGYVFUERBCKXFWILKLUWCTDEMCUQSOIZISXKWNBRMGBNDKNJNJRGAMGVFSLT");
    msg.plan_id.assign("ENOZSGMEVYBKZCWEO");
    msg.description.assign("BUULEVOAUCFAECLJQSACZOBRYADWEQJDKVFQELGHYPWQJQGLZBHYNKCYMUTATXPGVEIRGCBDONPXGJWQRBMCFKOZHVEFDPHVXVKULDSJHOVEUFRRTNFZVTFNIH");
    msg.leader_speed = 0.945641459519;
    msg.leader_bank_lim = 0.241298887425;
    msg.pos_sim_err_lim = 0.0797785519957;
    msg.pos_sim_err_wrn = 0.56533244749;
    msg.pos_sim_err_timeout = 6551U;
    msg.converg_max = 0.972482759497;
    msg.converg_timeout = 19901U;
    msg.comms_timeout = 9047U;
    msg.turb_lim = 0.715811599401;
    msg.custom.assign("BXESOIYRSDFZFHFLAVDNKNGIIJAAKYSHTMYTGGGCJPZWPWMYGOEPKIHIPUHRTYKOJPJUJQTXCDNDABVQPEMIGIEQJLSLRVUPFJFKFYBBWGCOHMOVGEZCXRITGECLUZUQTBZVRCPYIOAOBHZML");

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
    msg.setTimeStamp(0.70761287722);
    msg.setSource(17814U);
    msg.setSourceEntity(164U);
    msg.setDestination(9499U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("CEAKYQRUZAYHRQLCASAVIFLCNCWFSLGLYSNNLHPFEPLQIOGSFNUYYDWSTOGURJBWPIUZKPULQYUYRJOQIMJGMXZONO");
    msg.formation_name.assign("OBUIOJPBBGZLZQVVKKABLMDMEDCNJXBFTJMWLTNGLNQRSXCCFNEUCWRAKCDSJAVEDANXZPYROQIMEGFQLNHBWPXDDOPXTGJR");
    msg.plan_id.assign("GAVXNTNOBRCOAILVKKCSEUVRETZWGHKUURHPWQMPEQGRAZPRDZEACSNQNVLFKOUNFDIPZGTMVYTLEVNVISRYBICBIKHPXLDFXJFTJUGYQFBMXNBHEXYTPLJCZCYKHCJU");
    msg.description.assign("UXJSAONQSICRATYRVELMDAAFSKVNMTDJGOKSZBAADYTNONXOZVRPCVLPXUXICXMVGMDJJUDXSFDZXOYPYBCIHHQXSBJFLEGAQTRQFMQTLSFIYCRBUCBTHQZTY");
    msg.leader_speed = 0.34172854035;
    msg.leader_bank_lim = 0.242064100225;
    msg.pos_sim_err_lim = 0.436853673937;
    msg.pos_sim_err_wrn = 0.208701386389;
    msg.pos_sim_err_timeout = 10228U;
    msg.converg_max = 0.755614058624;
    msg.converg_timeout = 34983U;
    msg.comms_timeout = 1908U;
    msg.turb_lim = 0.0979259877232;
    msg.custom.assign("PWSIOUPVZNRPQYHQXPOKCJFEJWAKDPJOHKFFSHVQQNMWIC");

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
    msg.setTimeStamp(0.163100295576);
    msg.setSource(29761U);
    msg.setSourceEntity(112U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(208U);
    msg.control_src = 45466U;
    msg.control_ent = 246U;
    msg.timeout = 0.367890917079;
    msg.loiter_radius = 0.271223831237;
    msg.altitude_interval = 0.0398741641972;

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
    msg.setTimeStamp(0.844842885066);
    msg.setSource(50793U);
    msg.setSourceEntity(116U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(170U);
    msg.control_src = 10734U;
    msg.control_ent = 54U;
    msg.timeout = 0.474268111548;
    msg.loiter_radius = 0.432631353942;
    msg.altitude_interval = 0.885126286897;

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
    msg.setTimeStamp(0.169730455057);
    msg.setSource(61705U);
    msg.setSourceEntity(125U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(11U);
    msg.control_src = 10196U;
    msg.control_ent = 44U;
    msg.timeout = 0.549241376605;
    msg.loiter_radius = 0.732169175071;
    msg.altitude_interval = 0.633573951392;

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
    msg.setTimeStamp(0.66137869108);
    msg.setSource(37632U);
    msg.setSourceEntity(121U);
    msg.setDestination(44232U);
    msg.setDestinationEntity(30U);
    msg.flags = 228U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.54210073732;
    tmp_msg_0.speed_units = 195U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.620547887847;
    tmp_msg_1.z_units = 122U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.333465511368;
    msg.lon = 0.655064482444;
    msg.radius = 0.247945560582;

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
    msg.setTimeStamp(0.552523219293);
    msg.setSource(18409U);
    msg.setSourceEntity(12U);
    msg.setDestination(17218U);
    msg.setDestinationEntity(246U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8476707244;
    tmp_msg_0.speed_units = 202U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.743797145477;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.179915194418;
    msg.lon = 0.303501717772;
    msg.radius = 0.505013835634;

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
    msg.setTimeStamp(0.200699321654);
    msg.setSource(30378U);
    msg.setSourceEntity(82U);
    msg.setDestination(24743U);
    msg.setDestinationEntity(1U);
    msg.flags = 202U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.965289122246;
    tmp_msg_0.speed_units = 236U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.025929646236;
    tmp_msg_1.z_units = 184U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.456045422294;
    msg.lon = 0.527821988481;
    msg.radius = 0.663410520505;

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
    msg.setTimeStamp(0.9553891252);
    msg.setSource(52806U);
    msg.setSourceEntity(164U);
    msg.setDestination(15090U);
    msg.setDestinationEntity(91U);
    msg.control_src = 19028U;
    msg.control_ent = 176U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 122U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.925342065983;
    tmp_tmp_msg_0_0.speed_units = 174U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.337358782506;
    tmp_tmp_msg_0_1.z_units = 249U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.870185536952;
    tmp_msg_0.lon = 0.548402088086;
    tmp_msg_0.radius = 0.936396818013;
    msg.reference.set(tmp_msg_0);
    msg.state = 124U;
    msg.proximity = 12U;

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
    msg.setTimeStamp(0.0434374195074);
    msg.setSource(62402U);
    msg.setSourceEntity(26U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(24U);
    msg.control_src = 44085U;
    msg.control_ent = 29U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 129U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0649009079037;
    tmp_tmp_msg_0_0.speed_units = 154U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0031582514625;
    tmp_tmp_msg_0_1.z_units = 81U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.420101308181;
    tmp_msg_0.lon = 0.321584435056;
    tmp_msg_0.radius = 0.107849185519;
    msg.reference.set(tmp_msg_0);
    msg.state = 93U;
    msg.proximity = 7U;

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
    msg.setTimeStamp(0.754246411543);
    msg.setSource(45401U);
    msg.setSourceEntity(82U);
    msg.setDestination(45207U);
    msg.setDestinationEntity(20U);
    msg.control_src = 62518U;
    msg.control_ent = 143U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 139U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.487659939271;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.994960408787;
    tmp_tmp_msg_0_1.z_units = 178U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.300435498181;
    tmp_msg_0.lon = 0.777611431639;
    tmp_msg_0.radius = 0.32404279868;
    msg.reference.set(tmp_msg_0);
    msg.state = 230U;
    msg.proximity = 66U;

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
    msg.setTimeStamp(0.273282075618);
    msg.setSource(65345U);
    msg.setSourceEntity(202U);
    msg.setDestination(29784U);
    msg.setDestinationEntity(79U);
    msg.ax_cmd = 0.662003399486;
    msg.ay_cmd = 0.297955886085;
    msg.az_cmd = 0.361725098655;
    msg.ax_des = 0.762139178207;
    msg.ay_des = 0.265070233039;
    msg.az_des = 0.618381097655;
    msg.virt_err_x = 0.208765963373;
    msg.virt_err_y = 0.554865415861;
    msg.virt_err_z = 0.689011527349;
    msg.surf_fdbk_x = 0.874463425173;
    msg.surf_fdbk_y = 0.681154218799;
    msg.surf_fdbk_z = 0.341484567376;
    msg.surf_unkn_x = 0.758534850216;
    msg.surf_unkn_y = 0.180302134466;
    msg.surf_unkn_z = 0.3271117788;
    msg.ss_x = 0.97956000648;
    msg.ss_y = 0.84859723144;
    msg.ss_z = 0.68702980786;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OOYBTGEIEVQVXTZGGUFNMLOQKKCCEOFZBQTMVHHFSNPDJKAA");
    tmp_msg_0.dist = 0.937360850807;
    tmp_msg_0.err = 0.521577849742;
    tmp_msg_0.ctrl_imp = 0.500396518765;
    tmp_msg_0.rel_dir_x = 0.636322550493;
    tmp_msg_0.rel_dir_y = 0.576217203257;
    tmp_msg_0.rel_dir_z = 0.804009903474;
    tmp_msg_0.err_x = 0.220320617296;
    tmp_msg_0.err_y = 0.373922642679;
    tmp_msg_0.err_z = 0.879754807467;
    tmp_msg_0.rf_err_x = 0.846871814436;
    tmp_msg_0.rf_err_y = 0.883191966439;
    tmp_msg_0.rf_err_z = 0.994949522733;
    tmp_msg_0.rf_err_vx = 0.305269579036;
    tmp_msg_0.rf_err_vy = 0.728546669298;
    tmp_msg_0.rf_err_vz = 0.889643533612;
    tmp_msg_0.ss_x = 0.561252688423;
    tmp_msg_0.ss_y = 0.254335835464;
    tmp_msg_0.ss_z = 0.349771835483;
    tmp_msg_0.virt_err_x = 0.763209184578;
    tmp_msg_0.virt_err_y = 0.664491630669;
    tmp_msg_0.virt_err_z = 0.156071230149;
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
    msg.setTimeStamp(0.0870130743692);
    msg.setSource(18682U);
    msg.setSourceEntity(231U);
    msg.setDestination(35474U);
    msg.setDestinationEntity(239U);
    msg.ax_cmd = 0.872369366495;
    msg.ay_cmd = 0.990623643571;
    msg.az_cmd = 0.667444782233;
    msg.ax_des = 0.629404096041;
    msg.ay_des = 0.33958340155;
    msg.az_des = 0.0774470320215;
    msg.virt_err_x = 0.427603320196;
    msg.virt_err_y = 0.978206680872;
    msg.virt_err_z = 0.615495902303;
    msg.surf_fdbk_x = 0.804702402512;
    msg.surf_fdbk_y = 0.998786731449;
    msg.surf_fdbk_z = 0.467809324947;
    msg.surf_unkn_x = 0.531524065541;
    msg.surf_unkn_y = 0.584568694229;
    msg.surf_unkn_z = 0.384456996532;
    msg.ss_x = 0.868023038053;
    msg.ss_y = 0.489766975973;
    msg.ss_z = 0.363644515263;

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
    msg.setTimeStamp(0.829525544612);
    msg.setSource(6341U);
    msg.setSourceEntity(186U);
    msg.setDestination(2141U);
    msg.setDestinationEntity(40U);
    msg.ax_cmd = 0.0881903597285;
    msg.ay_cmd = 0.189179969253;
    msg.az_cmd = 0.0239323583811;
    msg.ax_des = 0.207134234332;
    msg.ay_des = 0.177654284549;
    msg.az_des = 0.972301646198;
    msg.virt_err_x = 0.49611921863;
    msg.virt_err_y = 0.869198568095;
    msg.virt_err_z = 0.618395863058;
    msg.surf_fdbk_x = 0.992628909906;
    msg.surf_fdbk_y = 0.0406034908664;
    msg.surf_fdbk_z = 0.575895849065;
    msg.surf_unkn_x = 0.307064169208;
    msg.surf_unkn_y = 0.177911786326;
    msg.surf_unkn_z = 0.792631382372;
    msg.ss_x = 0.989625002984;
    msg.ss_y = 0.303199963288;
    msg.ss_z = 0.22922187838;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SIXVBRKVGUICKLTHJYFVFWMFGQSLLEAJARJKWQRXWGZTNOADQLXGNAKWUYJYSTNUFVJPREMWEESFCANYRTEPZFHBWKWOXDQEXWRZYBXCPDTNYYPCNHTOMRTZDDMUCLYELWIULEIDANTOGUDYVQXAOZBIZZSRDITMBVXOAJTBFVLHWQPVCSKEUIBSABREQJCCMUVZMGIFOSHHUVFCHPSMZJKG");
    tmp_msg_0.dist = 0.993611907869;
    tmp_msg_0.err = 0.470822022475;
    tmp_msg_0.ctrl_imp = 0.0482407055735;
    tmp_msg_0.rel_dir_x = 0.144203432756;
    tmp_msg_0.rel_dir_y = 0.250418286947;
    tmp_msg_0.rel_dir_z = 0.748241579036;
    tmp_msg_0.err_x = 0.773865104273;
    tmp_msg_0.err_y = 0.964198185652;
    tmp_msg_0.err_z = 0.882201293601;
    tmp_msg_0.rf_err_x = 0.659889199739;
    tmp_msg_0.rf_err_y = 0.733753235196;
    tmp_msg_0.rf_err_z = 0.808217624569;
    tmp_msg_0.rf_err_vx = 0.937323807938;
    tmp_msg_0.rf_err_vy = 0.435608938151;
    tmp_msg_0.rf_err_vz = 0.152083202457;
    tmp_msg_0.ss_x = 0.75614392784;
    tmp_msg_0.ss_y = 0.0265921853809;
    tmp_msg_0.ss_z = 0.182347327735;
    tmp_msg_0.virt_err_x = 0.525109829948;
    tmp_msg_0.virt_err_y = 0.140148485298;
    tmp_msg_0.virt_err_z = 0.034006679891;
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
    msg.setTimeStamp(0.100204016715);
    msg.setSource(6776U);
    msg.setSourceEntity(177U);
    msg.setDestination(9536U);
    msg.setDestinationEntity(214U);
    msg.s_id.assign("JLFAYWPEOASBPYSKSMRIUZJXKXBXMCVXHUEHZMLZAOHSVJVKCIREZQPYZWSPNORHVWQYMNERLFBAPXKBRWAMSAOFGCDHNJXLSQTDQK");
    msg.dist = 0.720378035806;
    msg.err = 0.61342567958;
    msg.ctrl_imp = 0.582069977375;
    msg.rel_dir_x = 0.0115607433969;
    msg.rel_dir_y = 0.759162367229;
    msg.rel_dir_z = 0.543818013512;
    msg.err_x = 0.99512461086;
    msg.err_y = 0.252532746111;
    msg.err_z = 0.263009046556;
    msg.rf_err_x = 0.345614256034;
    msg.rf_err_y = 0.629857120287;
    msg.rf_err_z = 0.510242305563;
    msg.rf_err_vx = 0.776375289484;
    msg.rf_err_vy = 0.295974600346;
    msg.rf_err_vz = 0.768001249605;
    msg.ss_x = 0.627856435269;
    msg.ss_y = 0.390635484851;
    msg.ss_z = 0.92903774016;
    msg.virt_err_x = 0.698401169087;
    msg.virt_err_y = 0.335385029247;
    msg.virt_err_z = 0.187173882696;

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
    msg.setTimeStamp(0.861197919778);
    msg.setSource(52857U);
    msg.setSourceEntity(183U);
    msg.setDestination(54124U);
    msg.setDestinationEntity(142U);
    msg.s_id.assign("TFRLDMDNQQEFKMPUDNMODDAVGTUQQPYPDLTXUHWOERXLLY");
    msg.dist = 0.886762279237;
    msg.err = 0.000146307749772;
    msg.ctrl_imp = 0.0720637757311;
    msg.rel_dir_x = 0.919045304439;
    msg.rel_dir_y = 0.960775040069;
    msg.rel_dir_z = 0.871459215851;
    msg.err_x = 0.0980468942721;
    msg.err_y = 0.479942492102;
    msg.err_z = 0.198144006384;
    msg.rf_err_x = 0.471667401305;
    msg.rf_err_y = 0.299635764327;
    msg.rf_err_z = 0.0235430675934;
    msg.rf_err_vx = 0.107725995926;
    msg.rf_err_vy = 0.109865506688;
    msg.rf_err_vz = 0.739602499361;
    msg.ss_x = 0.520566465529;
    msg.ss_y = 0.188353586908;
    msg.ss_z = 0.779640674323;
    msg.virt_err_x = 0.273782009382;
    msg.virt_err_y = 0.854580150873;
    msg.virt_err_z = 0.925890876494;

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
    msg.setTimeStamp(0.086873420448);
    msg.setSource(63426U);
    msg.setSourceEntity(17U);
    msg.setDestination(2398U);
    msg.setDestinationEntity(159U);
    msg.s_id.assign("ZDRJUQEMZVYCJSUSEQWVWJTQYCOMIXRULVUDYQCSXXUDZIFLKPKFBMKW");
    msg.dist = 0.170711677183;
    msg.err = 0.409867005114;
    msg.ctrl_imp = 0.326743337604;
    msg.rel_dir_x = 0.194350582279;
    msg.rel_dir_y = 0.260661024527;
    msg.rel_dir_z = 0.672473368067;
    msg.err_x = 0.497916179452;
    msg.err_y = 0.332887461779;
    msg.err_z = 0.101177309676;
    msg.rf_err_x = 0.192460739;
    msg.rf_err_y = 0.980404391813;
    msg.rf_err_z = 0.722117708267;
    msg.rf_err_vx = 0.96511829384;
    msg.rf_err_vy = 0.436987465498;
    msg.rf_err_vz = 0.384676097781;
    msg.ss_x = 0.0155888285539;
    msg.ss_y = 0.57083553643;
    msg.ss_z = 0.304571025279;
    msg.virt_err_x = 0.343748684875;
    msg.virt_err_y = 0.658176114584;
    msg.virt_err_z = 0.88158126843;

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
    msg.setTimeStamp(0.418845996716);
    msg.setSource(56296U);
    msg.setSourceEntity(206U);
    msg.setDestination(25514U);
    msg.setDestinationEntity(110U);
    msg.timeout = 4759U;
    msg.rpm = 0.678907896856;
    msg.direction = 124U;
    msg.custom.assign("LYRNRKUEYAXLUEAIBSCPKASVZAEHDEPQYSIV");

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
    msg.setTimeStamp(0.684031281452);
    msg.setSource(1286U);
    msg.setSourceEntity(116U);
    msg.setDestination(6429U);
    msg.setDestinationEntity(49U);
    msg.timeout = 9314U;
    msg.rpm = 0.403564509049;
    msg.direction = 42U;
    msg.custom.assign("OEQYRQMIITSKPCHVCNQTJCUUCDKTSMFSPPVMGXGAZWEKLRZVLJLXTGVNQJHOKCXWURWBLYJRRPNYTZGWROTIA");

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
    msg.setTimeStamp(0.906714175148);
    msg.setSource(48045U);
    msg.setSourceEntity(219U);
    msg.setDestination(633U);
    msg.setDestinationEntity(127U);
    msg.timeout = 55248U;
    msg.rpm = 0.241606547747;
    msg.direction = 122U;
    msg.custom.assign("ERNTNXQDHTULVVQJPRUQECOYMBABFGONFBICVQDCYYHTNOCNZEPYIJPOBFPCRSHXBSHADJMQVLBSFBWKCVHKOFTRGHHWVFXWCZXZGENAPTHCDBTWLMZFAQZMKECXIGIWYYUPSQUEXYGGGVZTSQUNDKJAJMSDP");

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
    msg.setTimeStamp(0.873578282336);
    msg.setSource(62100U);
    msg.setSourceEntity(24U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("WTXWZGTOZTNRYRVBLFSCXXZWPEHSKOKKGZBWQHSPBAIXFBOJQLENKQWLISNTGXFTYQKRHKEKOYACQMJYDKPYQEINVCUCRZSKLOWVOYXQMOFEWSHMNTGGUPDDCPWUIIZOOCINLSIGBUFVAYBBDATPCVOIHDWMVJEMLGVBHMFFXJYERNAYYA");
    msg.type = 123U;
    msg.op = 174U;
    msg.group_name.assign("STKZIRJKQQFVWYNRTGASJCUX");
    msg.plan_id.assign("LNZHIZDSBHBJ");
    msg.description.assign("XPBGHHHVICZBSEKKVHYLPZQMGQXFIMUCBRCOTCBSUSELUIARFBYISCHBPYYBWXJVWOTDYIXIDTQSGVEFHRMCXOSQNKNDZDOWKWOPWYZTDAZDEATRUXEJHKWKZVYVRXUPGMNAJGNWYDOYQLF");
    msg.reference_frame = 96U;
    msg.leader_bank_lim = 0.230488008642;
    msg.leader_speed_min = 0.695931171244;
    msg.leader_speed_max = 0.0956267817762;
    msg.leader_alt_min = 0.984767660125;
    msg.leader_alt_max = 0.679799364151;
    msg.pos_sim_err_lim = 0.594467615029;
    msg.pos_sim_err_wrn = 0.861392706771;
    msg.pos_sim_err_timeout = 40843U;
    msg.converg_max = 0.124922167321;
    msg.converg_timeout = 47851U;
    msg.comms_timeout = 49737U;
    msg.turb_lim = 0.987248562273;
    msg.custom.assign("GEDVSQEPARKMFSXKDOLAYBUIHJXHIGCNLICEZBMRGITFXDLJWMQNCNGMYRDTUOPOPGLXRFDQLXXJWAUDVYKZISDDLXHCBYWRURVTPBAAENHCUERHFETKWCJ");

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
    msg.setTimeStamp(0.154538999173);
    msg.setSource(24435U);
    msg.setSourceEntity(220U);
    msg.setDestination(8660U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("UKDTXCFGWGYPTFVWBRIPDPETEKVUUOUVHNQNMNCARFWFGSJEGWTCZBTNZFLENNXKGDHUSWAQZMCFZIVQNVBRBKZLHSLEYMYATFBRVFBIXTQHRXAYCKWDEAWYPXJHVEYRANOOYROZTTYLZHQDU");
    msg.type = 2U;
    msg.op = 242U;
    msg.group_name.assign("YLLMWTWJTYJKSVBEXZJXPFDVFGULZCLOAHXNLFDENQKTUMSUETBYQPUHGFFBVKGXOHPNKWSNTZCOMGKESROEJEWFSARAVQTPQTICOCQILXEMWXSHVZYCZJMRNHEWBUZGIZRYYSRBRTADRE");
    msg.plan_id.assign("NYXXVIPUNNQSKHYVZZELOJBWCBGGKSFXPGRUMBNGEHSVEJSZROGDTHYPRCOWVPNSKBQLCVCMRCJPXNNZONEOHIUCJZUBAWFMXITNUDHKKMCTWQLSDIIRQZWUYFRUAJPSAQVIRZJAAFVDMTEFTQPDGAMKXRLDEGFIQCXGZFQBLUJBPDPBWZMJFAODWFAPJYQSOYYOHUQLTKWSZVSBEY");
    msg.description.assign("XEDHDJDMCDTIQXJGCKXAXRBHSLTZHPWGGEXENYRGQVREATEZGOVFWZMYSRKXNZETQNPFSEBYGDXNNYSMOIZIEKPTSPWTFTOIREAVKBKGAZKHPYLIIFPULUSCTWPKIRWTBQQHJORNHAMBWGYMYJDUXKCOMBFXBUHEIVOOCQLQCAJMAJSZDDMNBJPRLKCOGZL");
    msg.reference_frame = 45U;
    msg.leader_bank_lim = 0.572445935099;
    msg.leader_speed_min = 0.734523596669;
    msg.leader_speed_max = 0.524133031355;
    msg.leader_alt_min = 0.799218865657;
    msg.leader_alt_max = 0.563071727209;
    msg.pos_sim_err_lim = 0.985466295673;
    msg.pos_sim_err_wrn = 0.31886006268;
    msg.pos_sim_err_timeout = 19356U;
    msg.converg_max = 0.429401265498;
    msg.converg_timeout = 5074U;
    msg.comms_timeout = 9260U;
    msg.turb_lim = 0.790946419409;
    msg.custom.assign("JPVVFKBVLEYSSCAWPSALLAEMFDXHADCKYOMWCMTIZTFLNBHPKTJDSQOSZVGLJQPFLGBYBZZUFVGMOMCVTCZOELWLTVRAHDVYWRFSUSAIMAZTOZOPGDJCAIPJERKGLWKZHSUIZNXXHETXPJUDDKXWIUPXYBBUQWIFBYHCQMERMPEGNUWARCYNEWBSSJQGFOQYCBVERIOIPAFXJNRKWKEHRKG");

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
    msg.setTimeStamp(0.176289434851);
    msg.setSource(1724U);
    msg.setSourceEntity(86U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(166U);
    msg.formation_name.assign("ZHCTMGALUKGPZWZJGLMYQXWBVOJHGNSPVBHHULJWDZHIAMRSDOUEOHOLBFYTIAYANWIKPQVKQESKJHBKUGDCPRWKTQZDQIZFYQXBMJNORWPOMYJFSBHUNTITIYDDAFKBWFRXTGLAAOUTPCFXXEKNEDUILBRFXCVSUNZEUCJVM");
    msg.type = 166U;
    msg.op = 253U;
    msg.group_name.assign("XDDUZTOACDMDCSLXPJQAGQATWCYVLKYJWAKYYQNMOMPGNIJRHPFNXAYMORSWVNXBHCCRJKUJTITUIBYNTJNWIZQWEZBKDOL");
    msg.plan_id.assign("ZAUXSKZHQLBEQEJPLKKRXCUIMWHMRLTIYFHNUVYQNLDDDUGDBLOTBKBNWSRXFLRCYGGPNVCYKDAJAXBHUIARZEPHPSNVETGJTTYOPMVKSIAEEXASFJWLZQUXNWAAILVPFOUWMVCVXOHYQFMWKDFGEZOKYYZXVPEZQQVWEM");
    msg.description.assign("UOWWVWNULVTNFMEVEPYKMFGOFDJDBMTSMNTAJYJIUREDQPJXQEGTICWPBLQXKKSAHLUZWIOZXQOOLGQSHEJRPZZYXCDAHYHJAMCTYZJUCWDBGPXPILHVEABPKYKKZMTRLNQISCAACKXDQLVEGFCFSZUEDBTRSBAJPVHCPAVWAYERWIIUTXXMYXNQNFVQBYCFQLSHGJSMUGXNZVS");
    msg.reference_frame = 105U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9693U;
    tmp_msg_0.off_x = 0.346499506313;
    tmp_msg_0.off_y = 0.538823508056;
    tmp_msg_0.off_z = 0.95841374556;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.809079828332;
    msg.leader_speed_min = 0.905381369071;
    msg.leader_speed_max = 0.715849190667;
    msg.leader_alt_min = 0.423600214121;
    msg.leader_alt_max = 0.440998762812;
    msg.pos_sim_err_lim = 0.586329555128;
    msg.pos_sim_err_wrn = 0.993141316624;
    msg.pos_sim_err_timeout = 56068U;
    msg.converg_max = 0.361054202767;
    msg.converg_timeout = 51549U;
    msg.comms_timeout = 38388U;
    msg.turb_lim = 0.151102098238;
    msg.custom.assign("YTKIFHLGRGLYYLXLHEFPQXTNNNVMTGHRDEZUXEVGFGLFTBKDSHZIUQYWDXKEFKBIABWMDHHRRIPABCWCYWPFUCEUQODEZRJOAVSWONQCYYQOJSLPIAWNMAUSXIKRRKFKDSGDCZCXQHAGBJNJBQYTILQZUZSVFGHTGYCUMTJNJCKCVXQREXMAVXSPJUKMSUZDIQOJMXZEESJ");

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
    msg.setTimeStamp(0.034153062344);
    msg.setSource(54270U);
    msg.setSourceEntity(58U);
    msg.setDestination(672U);
    msg.setDestinationEntity(210U);
    msg.timeout = 12341U;
    msg.lat = 0.337812418034;
    msg.lon = 0.529256371526;
    msg.z = 0.92692348536;
    msg.z_units = 123U;
    msg.speed = 0.378429570761;
    msg.speed_units = 17U;
    msg.custom.assign("XUNXEDNPLDES");

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
    msg.setTimeStamp(0.647352559818);
    msg.setSource(1789U);
    msg.setSourceEntity(152U);
    msg.setDestination(26396U);
    msg.setDestinationEntity(184U);
    msg.timeout = 54634U;
    msg.lat = 0.364332423205;
    msg.lon = 0.346911187621;
    msg.z = 0.493254448815;
    msg.z_units = 204U;
    msg.speed = 0.996880984431;
    msg.speed_units = 60U;
    msg.custom.assign("WNRSADNRFNWDRAMHEULCFUVESIDADYQEDPFNZETKRVJPHOATKWXGKOKSPYGUWJYSYKFZWPJWWMAHPJZMXFTXNDXZYGE");

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
    msg.setTimeStamp(0.944438438515);
    msg.setSource(34695U);
    msg.setSourceEntity(121U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(58U);
    msg.timeout = 52126U;
    msg.lat = 0.191582353505;
    msg.lon = 0.615699659153;
    msg.z = 0.159448534421;
    msg.z_units = 81U;
    msg.speed = 0.447669344982;
    msg.speed_units = 55U;
    msg.custom.assign("BQIYFZBWRHUGIMLQJEJYUBHTIPTO");

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
    msg.setTimeStamp(0.341362312405);
    msg.setSource(34286U);
    msg.setSourceEntity(3U);
    msg.setDestination(51663U);
    msg.setDestinationEntity(249U);
    msg.timeout = 51827U;
    msg.lat = 0.827228398239;
    msg.lon = 0.796391440387;
    msg.z = 0.0737865032826;
    msg.z_units = 241U;
    msg.speed = 0.886708164032;
    msg.speed_units = 64U;
    msg.custom.assign("GFCJAOCBJDXHAOIYHJUAZXPLQGGARYPCTVQJKMXCOCUBIMMMBINBEEPDXPPWQZQNIJBKOVWWFFSKWDISALCSFXFPREZXPEHSJLDGNTVDBVAZRYSQZVPALFHHIGMGUIVQEVWUGEDUZMLUBN");

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
    msg.setTimeStamp(0.148176935406);
    msg.setSource(52893U);
    msg.setSourceEntity(16U);
    msg.setDestination(40375U);
    msg.setDestinationEntity(211U);
    msg.timeout = 11210U;
    msg.lat = 0.052459502933;
    msg.lon = 0.776949382337;
    msg.z = 0.255813613708;
    msg.z_units = 203U;
    msg.speed = 0.103091084149;
    msg.speed_units = 171U;
    msg.custom.assign("HOJICAOSGNAPAKCRIINDZQOHCAENDXVYEHXJUMKYNKWUITQYUZAEQFNCDEAJXOHMGLPARJHVLDOUCDGEYPDIDXXDVVTKOPWGHJLHVPVW");

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
    msg.setTimeStamp(0.733027442622);
    msg.setSource(30496U);
    msg.setSourceEntity(9U);
    msg.setDestination(4278U);
    msg.setDestinationEntity(75U);
    msg.timeout = 60359U;
    msg.lat = 0.855824326765;
    msg.lon = 0.555126979792;
    msg.z = 0.406916070572;
    msg.z_units = 143U;
    msg.speed = 0.578761969213;
    msg.speed_units = 87U;
    msg.custom.assign("KOZCRFBSQNVQUVUVSEQSJXTUJSYWRNDOPLIJGLNWFYZWHAEECWRYYEYIDEMDAXLKLOJGVPAIVKGIGASQBBOQBOATTTIJZHTMDJBCFQMVDOZFXTZCLJDDNKRTUGKPFCHZGNKAMBTXQPXRZVRWRFMCNAPYNXHEUDGRGHCOHFXIIWYRJQGOUMSCIYDYLBIZNJPMJLAZHDIFWEOXFPLENSPOBERPKKHWSTPUCZGNXCQWSTQVULMXVKUBMKB");

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
    msg.setTimeStamp(0.235242145159);
    msg.setSource(29896U);
    msg.setSourceEntity(210U);
    msg.setDestination(12080U);
    msg.setDestinationEntity(182U);
    msg.arrival_time = 0.722720791754;
    msg.lat = 0.45710629641;
    msg.lon = 0.934883845548;
    msg.z = 0.40277415803;
    msg.z_units = 23U;
    msg.travel_z = 0.619733057528;
    msg.travel_z_units = 26U;
    msg.delayed = 231U;

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
    msg.setTimeStamp(0.525548671288);
    msg.setSource(49460U);
    msg.setSourceEntity(200U);
    msg.setDestination(62041U);
    msg.setDestinationEntity(41U);
    msg.arrival_time = 0.175886744505;
    msg.lat = 0.0201136240517;
    msg.lon = 0.372166383563;
    msg.z = 0.680083631665;
    msg.z_units = 147U;
    msg.travel_z = 0.935562056956;
    msg.travel_z_units = 109U;
    msg.delayed = 70U;

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
    msg.setTimeStamp(0.137299180741);
    msg.setSource(52127U);
    msg.setSourceEntity(220U);
    msg.setDestination(24063U);
    msg.setDestinationEntity(113U);
    msg.arrival_time = 0.0429591131323;
    msg.lat = 0.73889552607;
    msg.lon = 0.74346579011;
    msg.z = 0.248568810227;
    msg.z_units = 212U;
    msg.travel_z = 0.0546558423324;
    msg.travel_z_units = 38U;
    msg.delayed = 120U;

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
    msg.setTimeStamp(0.399046239222);
    msg.setSource(34253U);
    msg.setSourceEntity(119U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.694492012138;
    msg.lon = 0.439787866624;
    msg.z = 0.34170506216;
    msg.z_units = 228U;
    msg.speed = 0.5789991436;
    msg.speed_units = 146U;
    msg.bearing = 0.99296933917;
    msg.cross_angle = 0.419693453908;
    msg.width = 0.936121820233;
    msg.length = 0.964172544204;
    msg.coff = 122U;
    msg.angaperture = 0.165438809668;
    msg.range = 10873U;
    msg.overlap = 15U;
    msg.flags = 236U;
    msg.custom.assign("EWJWKRGOTIJYXLVXMJMKFAJJPCBTQH");

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
    msg.setTimeStamp(0.424718394431);
    msg.setSource(11854U);
    msg.setSourceEntity(155U);
    msg.setDestination(44882U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.194316883144;
    msg.lon = 0.0247224470518;
    msg.z = 0.403167407436;
    msg.z_units = 169U;
    msg.speed = 0.689207961343;
    msg.speed_units = 94U;
    msg.bearing = 0.0385147579288;
    msg.cross_angle = 0.277427110311;
    msg.width = 0.527103386588;
    msg.length = 0.11655440892;
    msg.coff = 173U;
    msg.angaperture = 0.143417148461;
    msg.range = 56643U;
    msg.overlap = 51U;
    msg.flags = 246U;
    msg.custom.assign("EVFRQSLHJUMYYRXJDJNSHKQLLHWIOJNPFGOYPEXQETPCOQEXHAIGOWASJTYQUYIHGXMAHTCLSCVKO");

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
    msg.setTimeStamp(0.246790991656);
    msg.setSource(31375U);
    msg.setSourceEntity(69U);
    msg.setDestination(3374U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.948917270332;
    msg.lon = 0.73921938643;
    msg.z = 0.576209429287;
    msg.z_units = 112U;
    msg.speed = 0.895264072141;
    msg.speed_units = 38U;
    msg.bearing = 0.118802353822;
    msg.cross_angle = 0.483027137288;
    msg.width = 0.460406908892;
    msg.length = 0.932230648525;
    msg.coff = 51U;
    msg.angaperture = 0.351660806419;
    msg.range = 10327U;
    msg.overlap = 139U;
    msg.flags = 15U;
    msg.custom.assign("LAMFXHCSVHAWULJ");

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
    msg.setTimeStamp(0.937119017074);
    msg.setSource(39933U);
    msg.setSourceEntity(131U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(238U);
    msg.timeout = 64093U;
    msg.lat = 0.950711326182;
    msg.lon = 0.0600591019067;
    msg.z = 0.480697091058;
    msg.z_units = 208U;
    msg.speed = 0.0586190337297;
    msg.speed_units = 1U;
    msg.syringe0 = 145U;
    msg.syringe1 = 40U;
    msg.syringe2 = 94U;
    msg.custom.assign("SJFHJZZTAGHFL");

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
    msg.setTimeStamp(0.497710778406);
    msg.setSource(37091U);
    msg.setSourceEntity(212U);
    msg.setDestination(32039U);
    msg.setDestinationEntity(196U);
    msg.timeout = 21228U;
    msg.lat = 0.508312678295;
    msg.lon = 0.298662739221;
    msg.z = 0.336165274066;
    msg.z_units = 150U;
    msg.speed = 0.362426595577;
    msg.speed_units = 220U;
    msg.syringe0 = 172U;
    msg.syringe1 = 241U;
    msg.syringe2 = 53U;
    msg.custom.assign("LAMTMBFJJFOBKOBTHYJFKCQPCRAOUYLRODZONBLRPQNQGDSIRHZIOMRBSMZXOETZZLMNDFVCKSYYKDQZLAHECVJYHVLSUWXWFWMUVXMPTCNAIXAXTYBLETGLAZFMPUEJNEIIINADEFKHTIOGWYIHJYTNWFXCTPZRWXWVVUPGKXQGQJQKCSRDGL");

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
    msg.setTimeStamp(0.752415017969);
    msg.setSource(39049U);
    msg.setSourceEntity(5U);
    msg.setDestination(30316U);
    msg.setDestinationEntity(105U);
    msg.timeout = 62183U;
    msg.lat = 0.0451602112958;
    msg.lon = 0.757779106928;
    msg.z = 0.61273406698;
    msg.z_units = 0U;
    msg.speed = 0.918102060267;
    msg.speed_units = 169U;
    msg.syringe0 = 77U;
    msg.syringe1 = 108U;
    msg.syringe2 = 115U;
    msg.custom.assign("NEWBCAIVFYKWOMUPWORLLFZXSUIYMEJMNPNZHUVUWTIGEMTJBSAZABYXWXHDKJKIJGUWJFNUXOVLOYARZYEBKJKSRMXGIQTLVBDPFMWJQZMTFPASUIRXOEGYXOIONWBSQZDZCARVTETQGSGHLPFEKVHMLSLGQSJWRUBHBPDVCYDQMNAAOYZAGTHDCDEAKCLJVNFTTNHSECYZHOWJVBRKHPQYPSRDLXCITCELNUFPHOBQPXUQFXRIQCNKGIKGZR");

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
    msg.setTimeStamp(0.241929749445);
    msg.setSource(36396U);
    msg.setSourceEntity(77U);
    msg.setDestination(62754U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.331034774615);
    msg.setSource(53547U);
    msg.setSourceEntity(49U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.8514977444);
    msg.setSource(21206U);
    msg.setSourceEntity(7U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.313654639779);
    msg.setSource(61723U);
    msg.setSourceEntity(39U);
    msg.setDestination(1508U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.13669237582;
    msg.lon = 0.0835410776146;
    msg.z = 0.995416571576;
    msg.z_units = 173U;
    msg.speed = 0.924724554365;
    msg.speed_units = 64U;
    msg.takeoff_pitch = 0.947028755927;
    msg.custom.assign("JYSGJAQAMDFUIRKGTKMWDUZHVTKEOVCDRQGABERSEUVHNGEOMXUCECQEYRSFTYGFHSWGRHPVZVUJTCBLIFFWLZOXJLKHZZBTMETIVKKRDFWOIWPDYYBPJAOQBJLXNAUCBBNSYJDOZKDTSLNNOBZWXUTQLXXIVALXFPZMIWYRIFTOSHLCNDIMLHRFZKDVQRCYIGAEQE");

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
    msg.setTimeStamp(0.976898570863);
    msg.setSource(993U);
    msg.setSourceEntity(159U);
    msg.setDestination(43675U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.226182340619;
    msg.lon = 0.0510754582396;
    msg.z = 0.957592318213;
    msg.z_units = 174U;
    msg.speed = 0.585866301702;
    msg.speed_units = 145U;
    msg.takeoff_pitch = 0.661617391674;
    msg.custom.assign("DYZZGCAQWRHFRLLOTREDBMKAAFWHLBIDENKIFMDSZHGEAYUBIRZSRRICQHFUZFPXUKMROZLYTMSXFANZSXNPXKVF");

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
    msg.setTimeStamp(0.614045153206);
    msg.setSource(26113U);
    msg.setSourceEntity(85U);
    msg.setDestination(9405U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.827184132532;
    msg.lon = 0.973747564859;
    msg.z = 0.218996666864;
    msg.z_units = 243U;
    msg.speed = 0.566788348405;
    msg.speed_units = 135U;
    msg.takeoff_pitch = 0.683211121057;
    msg.custom.assign("WFGSPNMEUWSTRBMAGWNCOQKMEATJREMVVOUHCBADZXNBSWVVMJWXSXGBCIVOXYHAYMOKFXNGSIQNFFUQVYCCOGIPTVZXTJBJWMNQEC");

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
    msg.setTimeStamp(0.66676549375);
    msg.setSource(36297U);
    msg.setSourceEntity(3U);
    msg.setDestination(44911U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.342356548848;
    msg.lon = 0.0997174739959;
    msg.z = 0.835842919676;
    msg.z_units = 30U;
    msg.speed = 0.790772325309;
    msg.speed_units = 14U;
    msg.abort_z = 0.16102097435;
    msg.bearing = 0.641563974131;
    msg.glide_slope = 177U;
    msg.glide_slope_alt = 0.919324903907;
    msg.custom.assign("KVPMXMMFRLVDUXCRRTWYHAVJXEOUXWVIKEZBBQMCLVLPKJYQBQANYOPMIBNNOXCOAJMZPHPTNBFIQKHGVAOKRDSJZSKWZSBOUOIQWWCJEVHVKPEFWWVSLGHZALQLOIDTXKGSGTDWEMGPIDCRNJHTDJMUYNTRGSNDFLUGLDFKXYTIPAJDCEEJDTJ");

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
    msg.setTimeStamp(0.425775607059);
    msg.setSource(13470U);
    msg.setSourceEntity(106U);
    msg.setDestination(39098U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.821894837982;
    msg.lon = 0.741978314899;
    msg.z = 0.375982088258;
    msg.z_units = 95U;
    msg.speed = 0.97658863065;
    msg.speed_units = 204U;
    msg.abort_z = 0.0557081319144;
    msg.bearing = 0.330657660022;
    msg.glide_slope = 157U;
    msg.glide_slope_alt = 0.0559850150243;
    msg.custom.assign("HJJSEVJIEKZRIOFALHOFXLYUOFMQYKUATVTXKEI");

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
    msg.setTimeStamp(0.512412549707);
    msg.setSource(59534U);
    msg.setSourceEntity(209U);
    msg.setDestination(39185U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.532307084857;
    msg.lon = 0.492930148276;
    msg.z = 0.7135289799;
    msg.z_units = 106U;
    msg.speed = 0.386243173882;
    msg.speed_units = 211U;
    msg.abort_z = 0.414687489233;
    msg.bearing = 0.137228568077;
    msg.glide_slope = 221U;
    msg.glide_slope_alt = 0.457921025385;
    msg.custom.assign("KZQMUSQHGZDJHDBUBNTXKJJPNLNTEMTWWETUDCBIWXI");

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
    msg.setTimeStamp(0.534694991117);
    msg.setSource(48365U);
    msg.setSourceEntity(101U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.861497764139;
    msg.lon = 0.659509115283;
    msg.speed = 0.105152738879;
    msg.speed_units = 201U;
    msg.limits = 223U;
    msg.max_depth = 0.448407123781;
    msg.min_alt = 0.517142014182;
    msg.time_limit = 0.572751568705;
    msg.controller.assign("JHLACLUJKKTTBDXGCWQZOADTMPDKGGFGPCMOJYYSQDIXQYUH");
    msg.custom.assign("OPAUTIGRZKMBQABNBGSDZJFFTHLDOGQPQSJPXGTEODV");

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
    msg.setTimeStamp(0.67303865502);
    msg.setSource(35950U);
    msg.setSourceEntity(177U);
    msg.setDestination(17278U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.88401758613;
    msg.lon = 0.939382841406;
    msg.speed = 0.142841604733;
    msg.speed_units = 69U;
    msg.limits = 59U;
    msg.max_depth = 0.169210768185;
    msg.min_alt = 0.621811483718;
    msg.time_limit = 0.318470312239;
    msg.controller.assign("XCFEJIIMOGNLISNJUGSRYKLNUBSVITUWJVVDZNQMSUOKOPWDKTTAVEYWPHTAKTYJXPYWDPKYRZLLGJCOHMYTHAJUWVMLJUHGRRROAHEXVQRBPEVPPBJDJIXXLMFDYMKYCFKHLLCAZZZZABOVXMUQOIPQIKQFUSGTWEACKRMNHCSZMFTSBAWCCLGXWRRVANDHDQSZHEKZEDWGTXXSNBEQLGA");
    msg.custom.assign("KSKZKNZXOACVJNVEEUSIGLJOQWFMDBKRVKALYAIHHWTWFHBKZZVTAWMMUYAQIQSNCVOHFFMBLPIBPXYBRE");

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
    msg.setTimeStamp(0.888132726735);
    msg.setSource(56251U);
    msg.setSourceEntity(152U);
    msg.setDestination(1594U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.644149698265;
    msg.lon = 0.168724971973;
    msg.speed = 0.670067455367;
    msg.speed_units = 82U;
    msg.limits = 114U;
    msg.max_depth = 0.152194724072;
    msg.min_alt = 0.244932595336;
    msg.time_limit = 0.55489248402;
    msg.controller.assign("KDDZXTPSODAVHIEMAYJYJALERFLECCGPCGVGRPZBUIRHQMMHXQPKGTPBQUTHEEWKJCJQQQ");
    msg.custom.assign("SDQAMGRAKRBZPCIQIMFOEYBMCPGTOOTUVNAVRNGZSJQRKOFGZVCNLMOOSKXZUVSQJVHKDDIWAOIWTXBIPSMLEKJSOWACPXNLPMHI");

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
    msg.setTimeStamp(0.837500035692);
    msg.setSource(31737U);
    msg.setSourceEntity(114U);
    msg.setDestination(22845U);
    msg.setDestinationEntity(88U);
    msg.target.assign("GRVQFATPWIIHMGFUOZRSLTXVADTPLBQRKDDAJFJKYAIBOPEAHJ");
    msg.max_speed = 0.0130339470833;
    msg.speed_units = 145U;
    msg.lat = 0.654775747171;
    msg.lon = 0.29371499433;
    msg.z = 0.495208341328;
    msg.z_units = 130U;
    msg.custom.assign("PJKFNYXMWTQFJFVCSDYHOXUGKEONJLSWBJFWZLUWDLBZ");

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
    msg.setTimeStamp(0.333309698686);
    msg.setSource(54445U);
    msg.setSourceEntity(91U);
    msg.setDestination(43845U);
    msg.setDestinationEntity(132U);
    msg.target.assign("RHLMZLHKBBDIPINONQWDSRJAKIDOPOFZTODMRCWOHBCHBGJQFZTWKUQXHGKJVXVGXMFTNNAEFWUGHWSHBDLCZDHWDUSLJZKDXQKKTSPMKNDPQBWNCFVRZPNEGYZXUPCEEGSVOIEVLVIACJPUFMYMGNILUBYWCSAEJTXUJVSRITLTBZYWBILPJKRDAEYYRQAQZIVOYCYEZNK");
    msg.max_speed = 0.34036762547;
    msg.speed_units = 40U;
    msg.lat = 0.920860827434;
    msg.lon = 0.97058930523;
    msg.z = 0.918309874335;
    msg.z_units = 56U;
    msg.custom.assign("RZGUORILHFEHXULEDNSVQTZGMLXNSP");

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
    msg.setTimeStamp(0.97632701855);
    msg.setSource(38591U);
    msg.setSourceEntity(253U);
    msg.setDestination(18430U);
    msg.setDestinationEntity(71U);
    msg.target.assign("WMDZNGFDNSNWYITETFFQOTZJJZDQERSNGJFRSP");
    msg.max_speed = 0.287857333811;
    msg.speed_units = 30U;
    msg.lat = 0.323638379953;
    msg.lon = 0.826746657878;
    msg.z = 0.125294645857;
    msg.z_units = 177U;
    msg.custom.assign("NWAUSQTCKFMEOMETTDUNZUYUNOBRVWEBPDQLJSXMFSIJQUVFADRDVVHHXIEWOTWYYRSBPDKFQOGVRCQNDCSGCXZNTBVRGRXOSHPRXJHKWKHLYPALRYRZJGDMEMHXYXQXJJLVYBLDWAKGKMZASZZAIGLKFBYILNHIBHLBTEPUZESOAWPWTOSCGOQQUNLBVH");

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
    IMC::Docking msg;
    msg.setTimeStamp(0.76162199525);
    msg.setSource(25234U);
    msg.setSourceEntity(54U);
    msg.setDestination(29101U);
    msg.setDestinationEntity(132U);
    msg.target.assign("FLIOPEIXOSCBWBOLOYTANXARWBIGPUFXFRYHKZGGTPRINHBGVDUMCRSWXXVMIEMEDRWUYZARQGKJYTVGSBQDJOMLQHYCCXZUVPFFFPKYOADFKLLYMAUVWVEKQCVFHQJQLWHJQLCKDZZSWQDAUOGLETCETENHTXTUIXAYZSNPGNSHWZAKJPLOENIOQBVFJ");
    msg.max_speed = 0.42745853514;
    msg.speed_units = 169U;
    msg.lat = 0.827402416276;
    msg.lon = 0.736028397001;
    msg.vehiclefunction = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.367029679557);
    msg.setSource(45339U);
    msg.setSourceEntity(181U);
    msg.setDestination(2713U);
    msg.setDestinationEntity(216U);
    msg.target.assign("BGLUAXYECARFDKYGDNWHCIDELGZGPASJ");
    msg.max_speed = 0.377563484319;
    msg.speed_units = 180U;
    msg.lat = 0.111948549305;
    msg.lon = 0.660739773807;
    msg.vehiclefunction = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.707580656142);
    msg.setSource(34940U);
    msg.setSourceEntity(106U);
    msg.setDestination(63859U);
    msg.setDestinationEntity(229U);
    msg.target.assign("GHTYRYSTECSDXLKVMRQLEVYJ");
    msg.max_speed = 0.0547882990324;
    msg.speed_units = 6U;
    msg.lat = 0.823831554217;
    msg.lon = 0.266395977226;
    msg.vehiclefunction = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #2", msg == *msg_d);
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
    msg.setTimeStamp(0.181300665687);
    msg.setSource(27194U);
    msg.setSourceEntity(231U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(239U);
    msg.op_mode = 161U;
    msg.error_count = 114U;
    msg.error_ents.assign("SZSGGHOPMDCRNJFYSSWQBJNZTOCTNFITHTKWBYLARFPVKQQBBSHZQZVUJRQNZYWXQROOBSTELXC");
    msg.maneuver_type = 314U;
    msg.maneuver_stime = 0.47097812948;
    msg.maneuver_eta = 48124U;
    msg.control_loops = 756444835U;
    msg.flags = 173U;
    msg.last_error.assign("QLVPYSLWAYAZFLDRKKOJMOCHQNJIBTFQDRILKZBUTOYXUSEIPMDHMWSOBMNUHDVGGWGAEVWVFGPLIPXZJKOCBDCTYRPVYPEQZENZEBKFVCUUZNRYUKLEOZMQTYHEJSTJVURTDHJCCKMNGZGWJRNMULHASISURYFXTKGCLBCMIDVDISJJXHIQQONBTFXIEXCBQAWPEWEYCQFLRGLRKBXUZOGSDHTSAAWHOXAIGKSMPTNWHAWPAF");
    msg.last_error_time = 0.513961604652;

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
    msg.setTimeStamp(0.200371173207);
    msg.setSource(13204U);
    msg.setSourceEntity(24U);
    msg.setDestination(43647U);
    msg.setDestinationEntity(115U);
    msg.op_mode = 163U;
    msg.error_count = 8U;
    msg.error_ents.assign("VSVMWZSXKZUZHOURDCAPOEKTSKFWIQNKZYNYYERYIDPKEVJRDURNYFHNDWCMFRVHQQJSVXWHPAWPFMRGLWYOBMQYQFNMTFGAAMYZPBFXKDHJGELENNZLZOUOCLBPEQITLIJYDCCHRTULDZFSGRXCGHRTHOCKHTVEGZIMGXVSXUTKVUGNXRFCEWJAUCOBSDVJZBYMPAMDQJFISGANEGAXWPUJTWXLILPDBJJMKLQ");
    msg.maneuver_type = 10022U;
    msg.maneuver_stime = 0.649542583772;
    msg.maneuver_eta = 4314U;
    msg.control_loops = 1699890624U;
    msg.flags = 249U;
    msg.last_error.assign("DOPRNYGSOWNEFLAOXEQXBQPSUVEIUJKIZPOFKIPSJSONHAQBKCTNGLQMCZDWXXDVFMDTZTTCLZICBBGHWMEYLFLFGODYSFTUEMHUQYKYXEMW");
    msg.last_error_time = 0.492512077685;

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
    msg.setTimeStamp(0.998242740096);
    msg.setSource(32870U);
    msg.setSourceEntity(9U);
    msg.setDestination(4077U);
    msg.setDestinationEntity(162U);
    msg.op_mode = 204U;
    msg.error_count = 43U;
    msg.error_ents.assign("QNGHZOKFZUELSTQLRSCCUFCAQNMBIGJOKYWRMOZNCKAMRXYCSBNVDGEMXWITDSDMPPKRNFJGOBYAQ");
    msg.maneuver_type = 15047U;
    msg.maneuver_stime = 0.681567343304;
    msg.maneuver_eta = 16642U;
    msg.control_loops = 790778713U;
    msg.flags = 62U;
    msg.last_error.assign("EVJCNZHBIPPMZFKYOSQQXFGFNQLTJLZCTGKKUUOBAKSCZGJSUBPVLWGMWDCM");
    msg.last_error_time = 0.0587394091647;

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
    msg.setTimeStamp(0.735900693021);
    msg.setSource(43212U);
    msg.setSourceEntity(50U);
    msg.setDestination(6454U);
    msg.setDestinationEntity(169U);
    msg.type = 196U;
    msg.request_id = 8296U;
    msg.command = 66U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 64297U;
    tmp_msg_0.lat = 0.540961425001;
    tmp_msg_0.lon = 0.572793376025;
    tmp_msg_0.z = 0.619382270178;
    tmp_msg_0.z_units = 17U;
    tmp_msg_0.pitch = 0.565631082733;
    tmp_msg_0.amplitude = 0.215045831345;
    tmp_msg_0.duration = 44048U;
    tmp_msg_0.speed = 0.120548204864;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.radius = 0.002544996041;
    tmp_msg_0.direction = 13U;
    tmp_msg_0.custom.assign("YKWVIHFYOSWPXBKYXTDDATWDQLILQMOULZVLYWZRXYJQEXARGOPEJMCCMCPZABAVJFHGNOOUBYTYAPTWRUXUNGV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36743U;
    msg.info.assign("SRWZQWGPTKPSKIXEURLPCZMTGKVNIQHOVGONCLWRUJQXRGKLBYZWPSHMQIGGCFLJMFHWEJSQJHIDFNLPFOMVJYVYLIGFOJXHUAEUUCTNQYNBUVEMKOBJUDOVSSYDQCKJTLFDEBYPBWARIHZYSZRBAUZMFDIDRXCTWBONPYAQYPS");

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
    msg.setTimeStamp(0.920861255416);
    msg.setSource(49348U);
    msg.setSourceEntity(215U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(13U);
    msg.type = 158U;
    msg.request_id = 54518U;
    msg.command = 98U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 6721U;
    tmp_msg_0.rpm = 0.687273682914;
    tmp_msg_0.direction = 248U;
    tmp_msg_0.custom.assign("MOFBHKVADJVTLJDBDNAOXEWDTJWSQWJJXHSPQLIRRLFSIHZGYVGYKVBERFAQCAWYHUVYLZBDIRLGVHWULKUSNIAHTWNPXKIXODAPAMZEADTGOCSCJVJZTPUYCBSTXOECFQMQCGNGEDGTPKVHQYFJMGRARBJZZZMTVFDILEKDBXPAPWQCMMCCZOKLNBEMHNXWUKSINPGHEUZRJKPYYFIWFXSLOQZUWEKVXYRMTNMCT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36468U;
    msg.info.assign("ORZYDEJFVQMGQFIYOGMDRAWDAIFCFFXZRWUAHJWUNQLRLPHOUZGEAJMQNICCDEBSLAUXVUBVYITBQGWCWFBSUWPSLCQMOLPTTEOHHJSSOPDTZKVXIUYFIFJBDJNCHDFGSVEWAIRHYBPKOGQRLSJINQRPYBMZUNNZOCEGRK");

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
    msg.setTimeStamp(0.778975290947);
    msg.setSource(61644U);
    msg.setSourceEntity(6U);
    msg.setDestination(33543U);
    msg.setDestinationEntity(119U);
    msg.type = 221U;
    msg.request_id = 48868U;
    msg.command = 152U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.583812180464;
    tmp_msg_0.lon = 0.775347311766;
    tmp_msg_0.z = 0.568404851552;
    tmp_msg_0.z_units = 36U;
    tmp_msg_0.speed = 0.533994858351;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.bearing = 0.211369458719;
    tmp_msg_0.cross_angle = 0.717464745514;
    tmp_msg_0.width = 0.520044100947;
    tmp_msg_0.length = 0.682227501354;
    tmp_msg_0.coff = 149U;
    tmp_msg_0.angaperture = 0.352249843377;
    tmp_msg_0.range = 57889U;
    tmp_msg_0.overlap = 26U;
    tmp_msg_0.flags = 38U;
    tmp_msg_0.custom.assign("SZUYIXJXQUEDLXUACDWZZFKDJTIHOJMVEPZFSQGEGBCCFOAYYHAYMFVBMRSYYJRRCCCXRLVOEKWGKOIPVIZRDNBOUGRRMAPGTDZMVNLGHINLNHTSPKZAMUJDXGTZXISEFWIXCCBLLARSKKVJRXQSVNHBSBHEQMKTFOEQUQMOBKLEMWBCAPQNTJIEONOBWVYFKOZLZTUVPYSTYHRLWW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7271U;
    msg.info.assign("EASZVWOGGCDUWAETUJSFFCEYCOURWARGPWQVZDKSLHAMSRYFNKOOIVRL");

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
    msg.setTimeStamp(0.68133900614);
    msg.setSource(65350U);
    msg.setSourceEntity(73U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(183U);
    msg.command = 204U;
    msg.entities.assign("ENQSWHANUUCRJCKKNBDMIKGPHMLXMNSTXVLOCDUZSZAKXLIQCLANROOVQWIIBKQBWVDFCCJFMTBXRGANCKJHDZWOCSFHWMLDZSIFAVEMPNYAGGSQIJXPGVSMHYPUQTCOX");

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
    msg.setTimeStamp(0.0687366644325);
    msg.setSource(3013U);
    msg.setSourceEntity(135U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(139U);
    msg.command = 149U;
    msg.entities.assign("UYBPVJCKLOERRQXO");

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
    msg.setTimeStamp(0.862863501263);
    msg.setSource(57238U);
    msg.setSourceEntity(245U);
    msg.setDestination(6427U);
    msg.setDestinationEntity(173U);
    msg.command = 174U;
    msg.entities.assign("IPZQWPKDGHMJMHLGQRZYRAOZWNLWUYLQNZBNZDUZLKDDECUGMKJSNGARHCHDLEYLRCVRKLAEDSMJPJRAFQYSBTFODCPKBZXFBXVCFPJIXYDSBD");

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
    msg.setTimeStamp(0.993487135951);
    msg.setSource(19638U);
    msg.setSourceEntity(46U);
    msg.setDestination(7917U);
    msg.setDestinationEntity(215U);
    msg.mcount = 223U;
    msg.mnames.assign("QNGIOTAHPJFQRRTNUTSNXLQTWXWKICJWZMQDKBNDVZKJVAYYWSGSNPNLCIASAYXHPSNFGGZYCHRTEBUTUY");
    msg.ecount = 128U;
    msg.enames.assign("NMMOBPGARPPARTXNXJSLKKRZMTDQBDRUCGHKQAFWEPHOU");
    msg.ccount = 201U;
    msg.cnames.assign("KEWUATPWOXMDZLJNHCYZCHADYVORMGNNGSELFYQDFERBUSFVMCSGMQMNTGIJLZZDNRXUBPRJPPFXPKKBRYXBDBQXQUHTVLEZUXJPRYVHYPLIFIXCFSDASNXEQMQPROSAGOSILTXZTBEGEGHHMJNWDLNHDWDDVMLKNFHHWAOIZOBJCWBGTNOTELZWRSASAKEGCMPWHCVVUOYFQARJEJVAUOZWIIRBQSFAJWQIGCVKTITPKJCVQBTLYO");
    msg.last_error.assign("CJHVFEZKDUTZXPALKVRPMJHOHKJTBKSTAVP");
    msg.last_error_time = 0.122894595449;

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
    msg.setTimeStamp(0.256458064154);
    msg.setSource(31351U);
    msg.setSourceEntity(189U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(92U);
    msg.mcount = 199U;
    msg.mnames.assign("RQQYSFASDRMIGEURDETVZJWBJMOYOBUVJUFXQARQCMPIYHPMWGNUJTDRNVCXSEBJOCVZWVSZHLOKESAUBDTONGJBIPMVQBJTIDLJYDCRNSWTKKXAUTPPPGYZAVLOAQOZLHGPF");
    msg.ecount = 7U;
    msg.enames.assign("FWMFIVYACWZYWULPDFLFXIIRLUUOGLTLOXWHXEOTWBWTFZRARIKXULPKOZGUPICMRQJOQLPKFLKHHZDHHRQCPYXENNVFYJXKZZAVHSAGNCGNPWQPVSXSMCOYRCKEWAYETWWRXYODJUNPVUZJFIQJJ");
    msg.ccount = 117U;
    msg.cnames.assign("JITJIALIKEZWSRXMEDJBPFSWPDPGRREHOBGKOHVHWTNUFPHQBOSDWBPEWUEOGFXGTQOHJVBSVDFAZVZSFUYKLBAIIEBYYFZBYUPKDZDJAGRYSSZWGQNGOMOTUKLLXICXNHQKPQTYWCQUJQDRKYJINOTPJOQRRKGGXLCURDWZICXHDMIMMNXVCSNYCVBVTJV");
    msg.last_error.assign("MVNCSLCTPEZZDGABYOAZXHHABYSHSEOSNOFKBKEMNZDQCHLCZISUQLXMOTDIICHGLOKUHAEJVQZPTNDJTTTIIXALFMJBDAWJHJFGNFQOUMXGSUDILCKROBMGEZWIKPWMFWNRJXLYPJBCDECAFFTLRVNIJRWNDRXKYPVVFGPYKQUSWGCNLZHWLWTUINPYQFMQEFPKJRUGIDYPKVSQXKXXDBERSVAVZGMQYVRUPTZRUHEBO");
    msg.last_error_time = 0.231772911069;

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
    msg.setTimeStamp(0.741367319664);
    msg.setSource(26856U);
    msg.setSourceEntity(34U);
    msg.setDestination(16608U);
    msg.setDestinationEntity(192U);
    msg.mcount = 152U;
    msg.mnames.assign("DAOVAOMJRYBCSUQMYLQPWFMLNGKPNOWEFVKVTNHLDUPJONYPHHQSTZVIYLNOUXSJOGNDYKCLDSSYSGTAARTPXJRUHCABMJIQPPDUQXHAFZDWJYFBKJGAFMJFJAEFWLFROCPDIVXEAMCIESCLTHWIVGESQALCEIPQWBRIZRBL");
    msg.ecount = 140U;
    msg.enames.assign("UCCVHBAUQPKGYJTEFXQSPTFCSAJYHRRYXVGFKIQMRBJXNWZUIONVM");
    msg.ccount = 54U;
    msg.cnames.assign("UTKSJYVGSOQJBDBRCYJTVACRKQJUZNCVUDFEBYWBSZHOBDPJBCZMWKKMTOUGNHLPABTURCLLTQCORWXXQRWNWUHKTIXZPIPADZVXQYGVEETMEHEFFBLXLCFVIGKHTFAXRGFDZONVDIMZSOKJHKGXYJOUMMPEEWBHJEPVKRAGCSBOWYSNFLJSGMWLNMNVCIPDN");
    msg.last_error.assign("TVJMJRKVBZDRNXXZCGPQVUYZDPXACUUNRGBBQHVZSCSMKFNMFWWQEIYUJQDOJQTBQ");
    msg.last_error_time = 0.10396890766;

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
    msg.setTimeStamp(0.148340193049);
    msg.setSource(31678U);
    msg.setSourceEntity(188U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(44U);
    msg.mask = 120U;
    msg.max_depth = 0.396070433765;
    msg.min_altitude = 0.184770331927;
    msg.max_altitude = 0.717010698715;
    msg.min_speed = 0.879065016483;
    msg.max_speed = 0.51370922393;
    msg.max_vrate = 0.850556508983;
    msg.lat = 0.0508890702826;
    msg.lon = 0.592871080593;
    msg.orientation = 0.0259762854989;
    msg.width = 0.857389186176;
    msg.length = 0.145901981586;

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
    msg.setTimeStamp(0.937721184257);
    msg.setSource(33007U);
    msg.setSourceEntity(193U);
    msg.setDestination(20690U);
    msg.setDestinationEntity(112U);
    msg.mask = 104U;
    msg.max_depth = 0.467135044196;
    msg.min_altitude = 0.206913850243;
    msg.max_altitude = 0.506825428221;
    msg.min_speed = 0.744032816131;
    msg.max_speed = 0.333060481038;
    msg.max_vrate = 0.908730816797;
    msg.lat = 0.926846913235;
    msg.lon = 0.544999730847;
    msg.orientation = 0.416171655996;
    msg.width = 0.0681006097075;
    msg.length = 0.140664778899;

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
    msg.setTimeStamp(0.602907621747);
    msg.setSource(226U);
    msg.setSourceEntity(244U);
    msg.setDestination(10503U);
    msg.setDestinationEntity(230U);
    msg.mask = 97U;
    msg.max_depth = 0.277287314882;
    msg.min_altitude = 0.908474971761;
    msg.max_altitude = 0.946265028615;
    msg.min_speed = 0.779457799862;
    msg.max_speed = 0.577822765974;
    msg.max_vrate = 0.960301601817;
    msg.lat = 0.356628127253;
    msg.lon = 0.293159013387;
    msg.orientation = 0.461533919549;
    msg.width = 0.637505526225;
    msg.length = 0.2026944287;

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
    msg.setTimeStamp(0.530295133446);
    msg.setSource(34291U);
    msg.setSourceEntity(59U);
    msg.setDestination(8426U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.210087702698);
    msg.setSource(42752U);
    msg.setSourceEntity(239U);
    msg.setDestination(43807U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.490867860369);
    msg.setSource(23874U);
    msg.setSourceEntity(127U);
    msg.setDestination(56721U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.54119705515);
    msg.setSource(44902U);
    msg.setSourceEntity(229U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(111U);
    msg.duration = 15677U;

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
    msg.setTimeStamp(0.646522884755);
    msg.setSource(23207U);
    msg.setSourceEntity(27U);
    msg.setDestination(46513U);
    msg.setDestinationEntity(171U);
    msg.duration = 14989U;

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
    msg.setTimeStamp(0.65689863728);
    msg.setSource(17499U);
    msg.setSourceEntity(87U);
    msg.setDestination(7197U);
    msg.setDestinationEntity(141U);
    msg.duration = 1848U;

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
    msg.setTimeStamp(0.765588433004);
    msg.setSource(41409U);
    msg.setSourceEntity(60U);
    msg.setDestination(22185U);
    msg.setDestinationEntity(93U);
    msg.enable = 149U;
    msg.mask = 3921636322U;
    msg.scope_ref = 4225389873U;

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
    msg.setTimeStamp(0.395026885666);
    msg.setSource(42643U);
    msg.setSourceEntity(128U);
    msg.setDestination(34813U);
    msg.setDestinationEntity(38U);
    msg.enable = 37U;
    msg.mask = 2335500325U;
    msg.scope_ref = 2610166028U;

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
    msg.setTimeStamp(0.824203440478);
    msg.setSource(30924U);
    msg.setSourceEntity(207U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(209U);
    msg.enable = 27U;
    msg.mask = 134396009U;
    msg.scope_ref = 2603179615U;

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
    msg.setTimeStamp(0.0428484171475);
    msg.setSource(30387U);
    msg.setSourceEntity(194U);
    msg.setDestination(14292U);
    msg.setDestinationEntity(132U);
    msg.medium = 155U;

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
    msg.setTimeStamp(0.745510514867);
    msg.setSource(54940U);
    msg.setSourceEntity(92U);
    msg.setDestination(1270U);
    msg.setDestinationEntity(118U);
    msg.medium = 6U;

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
    msg.setTimeStamp(0.104872882782);
    msg.setSource(19133U);
    msg.setSourceEntity(30U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(74U);
    msg.medium = 166U;

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
    msg.setTimeStamp(0.229983646906);
    msg.setSource(44750U);
    msg.setSourceEntity(26U);
    msg.setDestination(29523U);
    msg.setDestinationEntity(144U);
    msg.value = 0.409679571919;
    msg.type = 34U;

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
    msg.setTimeStamp(0.0953919727621);
    msg.setSource(7675U);
    msg.setSourceEntity(67U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0360165894544;
    msg.type = 159U;

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
    msg.setTimeStamp(0.491116027057);
    msg.setSource(6963U);
    msg.setSourceEntity(100U);
    msg.setDestination(44115U);
    msg.setDestinationEntity(175U);
    msg.value = 0.845349236834;
    msg.type = 94U;

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
    msg.setTimeStamp(0.392536154535);
    msg.setSource(43933U);
    msg.setSourceEntity(194U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(149U);
    msg.possimerr = 0.083754541124;
    msg.converg = 0.892618933579;
    msg.turbulence = 0.731273823111;
    msg.possimmon = 50U;
    msg.commmon = 211U;
    msg.convergmon = 129U;

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
    msg.setTimeStamp(0.595115844998);
    msg.setSource(29014U);
    msg.setSourceEntity(84U);
    msg.setDestination(37071U);
    msg.setDestinationEntity(178U);
    msg.possimerr = 0.419096761143;
    msg.converg = 0.675999635302;
    msg.turbulence = 0.311820306867;
    msg.possimmon = 4U;
    msg.commmon = 56U;
    msg.convergmon = 126U;

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
    msg.setTimeStamp(0.408432570965);
    msg.setSource(8031U);
    msg.setSourceEntity(4U);
    msg.setDestination(32005U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.148696055018;
    msg.converg = 0.788510417286;
    msg.turbulence = 0.684426724337;
    msg.possimmon = 164U;
    msg.commmon = 11U;
    msg.convergmon = 231U;

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
    msg.setTimeStamp(0.360064063436);
    msg.setSource(10636U);
    msg.setSourceEntity(114U);
    msg.setDestination(54402U);
    msg.setDestinationEntity(195U);
    msg.autonomy = 243U;
    msg.mode.assign("XYOCOVDFXFTGIVVEFVQCJPHWGHMIBLTBROYYZSCSUDFOPGRAHYPUFQXTXRMUDKJBNUQN");

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
    msg.setTimeStamp(0.0724683138924);
    msg.setSource(64010U);
    msg.setSourceEntity(233U);
    msg.setDestination(36221U);
    msg.setDestinationEntity(176U);
    msg.autonomy = 28U;
    msg.mode.assign("XMAHEYMKHPVBZNROZCWEPIOVXTPWEITUNHPSUIAZYMLXUEKDCYLTUOLOZFFICJGMFICRGJSFSDGIIKGPSEHJZVXTKTMWLOGPRMYZJRTYSLKBZDWFKNJHNBEHYKLQTPM");

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
    msg.setTimeStamp(0.875684510955);
    msg.setSource(38397U);
    msg.setSourceEntity(241U);
    msg.setDestination(43932U);
    msg.setDestinationEntity(19U);
    msg.autonomy = 249U;
    msg.mode.assign("KJBWRSILAMPMKZSBOVMNHAXTZGZOJOILEBVDXNVVKIADQTJSIGPZIVYRVKEPVHBKPJRSPBWZCAEQXXCBQYYLGJTUQEJYXX");

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
    msg.setTimeStamp(0.975685827985);
    msg.setSource(45018U);
    msg.setSourceEntity(111U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(77U);
    msg.type = 107U;
    msg.op = 158U;
    msg.possimerr = 0.983528687095;
    msg.converg = 0.032025547429;
    msg.turbulence = 0.937168721037;
    msg.possimmon = 132U;
    msg.commmon = 240U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.439988399884);
    msg.setSource(31985U);
    msg.setSourceEntity(52U);
    msg.setDestination(17370U);
    msg.setDestinationEntity(174U);
    msg.type = 97U;
    msg.op = 84U;
    msg.possimerr = 0.16081602564;
    msg.converg = 0.278927784379;
    msg.turbulence = 0.883470813912;
    msg.possimmon = 84U;
    msg.commmon = 30U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.0269501242968);
    msg.setSource(13446U);
    msg.setSourceEntity(101U);
    msg.setDestination(64930U);
    msg.setDestinationEntity(41U);
    msg.type = 134U;
    msg.op = 93U;
    msg.possimerr = 0.820663147305;
    msg.converg = 0.88032778788;
    msg.turbulence = 0.720587912062;
    msg.possimmon = 12U;
    msg.commmon = 130U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.481064103028);
    msg.setSource(41765U);
    msg.setSourceEntity(222U);
    msg.setDestination(18407U);
    msg.setDestinationEntity(115U);
    msg.op = 245U;
    msg.comm_interface = 63U;
    msg.period = 22510U;
    msg.sys_dst.assign("QXRULYMZHIHOOYBJVPCDQGBKTDQXOFESXBNHNOETIUNSCJFIQFZPGJYVIQKLPYZZMYMHXLNALHVAZST");

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
    msg.setTimeStamp(0.244899292677);
    msg.setSource(17351U);
    msg.setSourceEntity(245U);
    msg.setDestination(63342U);
    msg.setDestinationEntity(205U);
    msg.op = 89U;
    msg.comm_interface = 210U;
    msg.period = 53295U;
    msg.sys_dst.assign("AYKLELONIKCEJGABPBQFZAVNIUOHTSUBBEDKQVFPTUMXRCFTOWBVAOGLJLASFRWUBZZUNYMKTQEPOSKNRROLCCJTOMQEXZJHXQVKE");

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
    msg.setTimeStamp(0.675443759462);
    msg.setSource(13267U);
    msg.setSourceEntity(86U);
    msg.setDestination(58766U);
    msg.setDestinationEntity(56U);
    msg.op = 10U;
    msg.comm_interface = 197U;
    msg.period = 18645U;
    msg.sys_dst.assign("LMMYLJGAJJJYLELUCYFWMUHGMJSPNOHHJNEKFXITCXISRRSZWAAYPEWIDNPSORKUOAPAHZKCOKGHIWZQRQTAWEVUQVMEFFXHPMQWVDPZRJOAFFPVUFRRDBXBKLMIBBVWXMSTLCBODXBEVJUSQGYSENLUZVEWTSWISY");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.198627185119);
    msg.setSource(48384U);
    msg.setSourceEntity(120U);
    msg.setDestination(52695U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.6978360204);
    msg.setSource(30013U);
    msg.setSourceEntity(64U);
    msg.setDestination(64258U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.531006671254);
    msg.setSource(29023U);
    msg.setSourceEntity(146U);
    msg.setDestination(44053U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.227267766824);
    msg.setSource(63020U);
    msg.setSourceEntity(178U);
    msg.setDestination(57372U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("NESQGEZOAHUIRZMRKSMYULDIGGNBKXXRUFYTIPCADVPYKKTJXRQTXFGBIVEMVXLPVPZNPSYNOCWSRHXHXFUEWXTNMZJIHQOOTBQPYZVYLKQAMSDXRRAWJWSYOAL");
    msg.description.assign("YHCAATYEDBGUZGXMYLUHWNFAAVRPCOABRLVBGLCHYM");
    msg.vnamespace.assign("XFFYSOTVUUCVVIDCSEGZMNULFWBQWQFQLJVIVASGVUDHNFCENYUURXATZBTJHIPGQADJAEBDEALGHHKCCMMMKOYRALZXZEHTYQPAJBPGEQLK");
    msg.start_man_id.assign("EKFJHCYCZEXXSHNYWLZWALKJLGTDYMMJJQFXXQSZONPHWSVXWNYQFCVHYLOILQPRW");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 196U;
    tmp_msg_0.value = 245U;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::PlanControl tmp_msg_1;
    tmp_msg_1.type = 174U;
    tmp_msg_1.op = 79U;
    tmp_msg_1.request_id = 33854U;
    tmp_msg_1.plan_id.assign("PKCUWHGYTDJZDHGMPVNNCWSTIEGJTYMXSSXEQBXGCUSWWWMPNQMQLTFOZALEAELWLTBBQCKVRQPHVASCJBQIYEGPRIIMLWOAKIKSAOKDKUXUUDSICCNZFHRLKIFMOZFIROPTAHYPYVBSWYGRXNBEQDCJXQQNRARVPZONJJHFFZXCBJUDEHMVQJVL");
    tmp_msg_1.flags = 60979U;
    IMC::WaterVelocity tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.validity = 31U;
    tmp_tmp_msg_1_0.x = 0.734023756791;
    tmp_tmp_msg_1_0.y = 0.668157227615;
    tmp_tmp_msg_1_0.z = 0.383837400085;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("QBJBLUXUPWWAECGRJAQDMVKZVBGKMHOAMULBDFVTCHITLJITZKFVXUJCZAEZKFKQMDF");
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
    msg.setTimeStamp(0.00515928757569);
    msg.setSource(10015U);
    msg.setSourceEntity(125U);
    msg.setDestination(59017U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("LJJTMEIHJPGKEWQLMWOXUJWAYIEDLBXGCXUROCDJYLSKIKHHOJFBBPCGJZPHFRCRAGPNPLUGNBNDBLQWSRNARTOVCJMLCXBGTEFOPSVZOMAGB");
    msg.description.assign("IEGYJMAAPOXVIYHFJFCIRXPPSMWEDNJYIYCTWHPXKXWMENZFVRQOAVFDIGUETHCMGJOIBOZPDXJARDKENLTNUFVCHGMTVZMFWKHNQAQTBYHSBCEWSZTGZRFKZQFOSPCLNYWDTTA");
    msg.vnamespace.assign("CWZMJUPUOTEVDSJYPYRNCEOADFHEBRRUSMNTGKVXIMLMTCMLKABBTOVXDQLOPJHKZPCHKTTELCQUSPFBIVMSAUZAWWVVDNRABYKQPPDXFXNWWVGBWQSKDGKCROGORDZTUMEORHTRKJMXIFCBJJCPTCDQVYZJBSUDRGMZDLOU");
    msg.start_man_id.assign("QXWEUMHUSYRATZJDMIYIONNWZLCHFSVWRPQDTXKGZALJJQVWFSHSRJMTXKCVWABHYFUPXVZIVNHOHPCZNTSMMBFBENGBBXGWJYCEYVDIWDQIMFICACABLLIPC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HBYXMNRTZPIMKTNMVR");
    IMC::Takeoff tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.698546179763;
    tmp_tmp_msg_0_0.lon = 0.511743586542;
    tmp_tmp_msg_0_0.z = 0.563225387516;
    tmp_tmp_msg_0_0.z_units = 218U;
    tmp_tmp_msg_0_0.speed = 0.202583114362;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_tmp_msg_0_0.takeoff_pitch = 0.771574454145;
    tmp_tmp_msg_0_0.custom.assign("HAZMTGCCWLFEKJMAZR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Target tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.label.assign("HDPTHETLUBVGOXTIEBBSMYGVQALWABTLVBHPEGUEORAOSVPCEIBUQFQYQTPDFZFYRABOCUGELZFZLQNWZLUMZDENFLN");
    tmp_tmp_msg_0_1.lat = 0.936677802202;
    tmp_tmp_msg_0_1.lon = 0.655203559417;
    tmp_tmp_msg_0_1.z = 0.689603572925;
    tmp_tmp_msg_0_1.z_units = 244U;
    tmp_tmp_msg_0_1.cog = 0.115549694063;
    tmp_tmp_msg_0_1.sog = 0.165285712504;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AAVJGWXFHKMRPDLABXJFCCXROJYOGJDTSHUYNFDXUI");
    tmp_msg_1.dest_man.assign("EDHUROTPIIDLUXDBYMJFMWGOIHISTRSEWQJFSARMQAWTCIALVJQQUVPMLXETRIDQBHBBYUQPXCZCGDSEAYFPFPSFNKSIVRJNZNUWVEQNZJMBQNDMAZZMFJBUKONAXEPAFZRCCVZRJGKXFLXPFLKGGYXUQWKTAHMEWONE");
    tmp_msg_1.conditions.assign("DVHAAEDGYBMBNYHYDGAWFUPBRIG");
    IMC::StorageUsage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.available = 1382536099U;
    tmp_tmp_msg_1_0.value = 253U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::TrueSpeed tmp_msg_2;
    tmp_msg_2.value = 0.141794125189;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::HistoricSample tmp_msg_3;
    tmp_msg_3.sys_id = 32644U;
    tmp_msg_3.priority = -52;
    tmp_msg_3.x = 17886;
    tmp_msg_3.y = -11210;
    tmp_msg_3.z = -12029;
    tmp_msg_3.t = 26186;
    IMC::Phycoerythrin tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.value = 0.0577172011426;
    tmp_msg_3.sample.set(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.533772908068);
    msg.setSource(57861U);
    msg.setSourceEntity(8U);
    msg.setDestination(19507U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("MLXYILQNJEBJBQSISOFCCYRFZGCBTAVCGFJXDNASQMPWVSUADJWHGJMKJEIAABURGJLWQOEHATEHSQEKSZAZQIORDRGLLRDUVRZKQYRWCREPFSYFZTUOCNWIOMXFVMX");
    msg.description.assign("MXFEUDDHVJJPVUWXOMONBFKBAYVCGFFTUWTIOQYJZWSXQQVYABBBBAUISCAXEKHLJFXDZRYYDFTIOWAFYMOBUJCNPRILXLHTQZOKNKTSRQYNJCEEEJKAZIAWLUGMNHEFJANIPVDHGLBHMTCOSCWYOCSKFYVLMPIKRMCRNQRUPHZTGKSNTNBZVXSLUUMINCWVRPHZTEJVDWYGGOSALRKZQXDLEMKCRXSSGZPGAHIOZXMQJWQLEURVDWTPEGFBP");
    msg.vnamespace.assign("EWHXWAJJHUMEZDLOMKTDODMKXTZAHNACVWSQWQPJVWFCOLYCQYUUQPGSLIHOKGFEAFTIQZZMDPFDKRMHPPYLBKVAAMQZJQZUVSWWNRIUTMMZJPHSCZVXCZSSTGCYBGBFYIBNIIIENOTWGLGFNWJLGYKRIKBXASUPFJOEFVXBSRCJEDFNLVKCXROYXNQSATGTUEDNRCQMZBGKBAEBUSAQLWRUJJH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NXLNCPEBSWNISYACXASWBIBKMGAUKUXINPOZFFOWJBRHYRIKWGCDPZPCSRHFTYVAZSGXJDFYSAVUTOTDYMRVMZZPDKHUSCERTZLONLSILPGIAQBACWRYUUWAPFYZXIDSQGEVFZMPMXOENVPBHXQQFRYZLNMLLIWALTONTCCVGLTRHKRJQULHGEGWEQNYBKBBQTZJWTDQQOKVBPMTXFJU");
    tmp_msg_0.value.assign("MROHZVUHROWFQXOHNRIJYXRGBELMTAACPVQSEMAMIEHDAWQPRVAKFZYINJTMKSOVFWPBYCQCRVJWQKDBLNAXGJLHFHJGAZDPTKXXUNMZBWNYSDSSENTTGP");
    tmp_msg_0.type = 82U;
    tmp_msg_0.access = 244U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LVQQNLRWOTOFLMWCFJTHEFOAYZFZQGEIVDXGCJTDJJVNHGPGDSXHJYFIXVMSMMGUDJZPIKZYLDKYQIRMJVULJVWB");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AUTKTCGWRWOQYMKNTYORCGVNWBKEZMILETPZBCLVWOMKUIVIUVRHOXOLSJEHITJHPBJONCXTHUQKCMFIIGJTFSCQBWEZDLGXYRZVKBYBDKXDYKGFKHLHHWCAEWNJVSHOIFJCWMFMSVQFBNPJMUZRYZDDQRUHCYZUDXSEXXZFUGEQGPWLQXPEPAJRXGVPFBMPJNATLPWRYNVYDGGOQJ");
    tmp_msg_1.dest_man.assign("ETNUEEPWZFKNALYCMDJLTHFYDRYAXKTTCOQULLFHXKLIIDSQWDGMAIBUYJZEHLLZPKUKAZHXXJPOHQTZUPTVFVPIUJRQWIOREUL");
    tmp_msg_1.conditions.assign("JCFHKWEVRTQVAAHCAYRCTAXTIWTGBGERRETVSFIXMMSDOGEQNTKUXAJQWRKLIFLRTOUYNYRCGCEILFEDJBKMMOYDHFXEQZOUCMBZKJOOJYJJESPRAAMPHSVSGDWPXPUVNLIZNSXQRLTQ");
    IMC::PlanDBInformation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id.assign("BGPPKYVJDYVNMBCYWYCMPX");
    tmp_tmp_msg_1_0.plan_size = 57184U;
    tmp_tmp_msg_1_0.change_time = 0.868381294742;
    tmp_tmp_msg_1_0.change_sid = 14898U;
    tmp_tmp_msg_1_0.change_sname.assign("WIKKCGKWSZEZHJMXHDZVLUQTG");
    const char tmp_tmp_tmp_msg_1_0_0[] = {-61, 13, 63, -88, 113, 18, -98, 69, 18, -115, 72, 70, 88, 48, -96, -24, -58, 26, 123, 42, 12, 63, -17, 66, 122, -99, -77, -31, -14, -37, 65, -75, 57, 91, -108, -128, 51, -125, -53, 95, -119, 117, -38, 73, 65, -99, -63, -79, -31, 100, 122, -61, 49, -75, 104, 98, -14, 44, -2, 64, 77, 89, 52, -16, 39, 20, 19, 46, -22, -126, -67, 4, 70, -123, -120, 99, 106, -82, 110, -14, -56, 57, -98, -75, -2, 47, 16, 11, 83, -98, -55, 12, 62, -107, 82, -83, -3, -1, -123, -107, 25, 110, -4, -108, 109, -19, 126, 13, -62, 89, -20, 11, 87, -40, 112, -58, -14, 13, -67, 31, 64, -21, -43, 94, -106, -51, -51, 25, -75, 63, -32, -60, 4, 11, -87, -5, -119, -65, 32, -66, -40, -13, 10, -67, -91, -79, 94, -107, -93, 45, 16, 42, -30, -60, -100, 36, -115, 42, 111, -63, -25, -63, -92, 99, -82, -72, 20, -47, 65, -126, -15, -128, 80, 43, 52, 113, -15, 101, -128, -62, 103, 60, -10, -39, -66, 96, -70, 96, -1, 85, -96, -81, 75};
    tmp_tmp_msg_1_0.md5.assign(tmp_tmp_tmp_msg_1_0_0, tmp_tmp_tmp_msg_1_0_0 + sizeof(tmp_tmp_tmp_msg_1_0_0));
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DesiredRoll tmp_msg_2;
    tmp_msg_2.value = 0.927562103897;
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
    msg.setTimeStamp(0.323445042325);
    msg.setSource(32409U);
    msg.setSourceEntity(177U);
    msg.setDestination(13582U);
    msg.setDestinationEntity(191U);
    msg.maneuver_id.assign("MLKYRWVFQCHVNYXIGDHDKLINGRKUHGYHJIRBXZKWVKLQBUAGIBHKRWDPWNCGSMDEJKKSAXTEILUCSXWXBWXNOOJAWTPSHGIBWZFEGLFNMFPNVPLPOASQQYHTYGJVOCCFRUUFAHIWQAAZUDXJDIEOERVUABMAQEYXZDHRTFZMSTYBFRSPTZPGHSOZICEBZMYEJCRRDTLMVNOXPFYOQBLFPJTZTNWKXCUIYEGNJSQVTMMUODOQULQCDKJL");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.6874285377;
    tmp_msg_0.lon = 0.441484582119;
    tmp_msg_0.z = 0.0926132192455;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.speed = 0.724046551251;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.bearing = 0.488427735459;
    tmp_msg_0.cross_angle = 0.416176283144;
    tmp_msg_0.width = 0.274990189538;
    tmp_msg_0.length = 0.747853826561;
    tmp_msg_0.coff = 167U;
    tmp_msg_0.angaperture = 0.310962376158;
    tmp_msg_0.range = 60980U;
    tmp_msg_0.overlap = 4U;
    tmp_msg_0.flags = 247U;
    tmp_msg_0.custom.assign("OAIVOFZGEHICRYJPSZIGDCCNYWPEVWDUINONRFJZEKJYIPUNPSXZWPVHSPDMOERMBRUUMFERJJLVNVBBDHZDXNOYFOSFZDTXTIKXBSECMXAWHHYQWCAIQOCJXKPKUTDHUAOALMXMNEZDSKHLVYOTXCSYKJRRQBFGJNGLTPVFZNRKJIXUAQWPECSTYQAWTQDMATTKSWEKOQFRIL");
    msg.data.set(tmp_msg_0);
    IMC::LowLevelControl tmp_msg_1;
    IMC::DesiredRoll tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.16424985066;
    tmp_msg_1.control.set(tmp_tmp_msg_1_0);
    tmp_msg_1.duration = 57485U;
    tmp_msg_1.custom.assign("IAKNYMUELJKJKDQJQJPMXDFZQAKQB");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GetImageCoords tmp_msg_2;
    tmp_msg_2.camid = 217U;
    tmp_msg_2.x = 20209U;
    tmp_msg_2.y = 46257U;
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
    msg.setTimeStamp(0.36400886657);
    msg.setSource(22211U);
    msg.setSourceEntity(76U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(219U);
    msg.maneuver_id.assign("HCWAIWRJAFSPCDJUXPUQCDECFLHOKQSFTRIYXFLPLVNIJGNZMYZYBIAHWHKCTBWUZNHGGVEDYNXEOBIQFVVOYDMLONSMBNUAQMFSCAMMZKWVMJKHBMPLKAHXJODXHWUVTGDKEZVLEERMOOSBNEZAKSDSMBGTWJQDFHYVHQJGNEUXWPEGNJTPCCOSYPLTJQUIXDOZKFRACAVLBQELCTKQNITYRXKRUTJXZRIWSPIUWYGOGYTARBFSX");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 41969U;
    tmp_msg_0.lat = 0.757973384391;
    tmp_msg_0.lon = 0.554555037088;
    tmp_msg_0.z = 0.549535054818;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.speed = 0.416803555019;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.custom.assign("IGFAQYEOJLWBJXGPZZYKEKIIZQTMCGBMENVQLHPDYBIYKPFDKXXAUOFVVFZPNNFFKHPLEVULTCWMRYGQHADZJWOVMDNDKDOXRCTLECHMGIDISOZPGHWAIRUKBCDLJQXNJRCEANHOGJNEQVCIRKUQHGNVAFRWUAVGIAENUCMBVXSJBRXZUFSPSELUSWTYXOHZQXYZYABLLOHIRDPPBRNSZDJBSMYVLUTFPWWSMACOTTTSRXQU");
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
    msg.setTimeStamp(0.39623715582);
    msg.setSource(21475U);
    msg.setSourceEntity(213U);
    msg.setDestination(20789U);
    msg.setDestinationEntity(223U);
    msg.maneuver_id.assign("NWCNETQCJIEMYOXKEMEPPOHQCQZGTALQORIIRWDIFKYTNTHQSLZHMZQGNFGHMNGGCYWJKWPCNERDWRQEVPZVKYVYUZUMIYPDRDLDXHOFIXWOVGXZIBUMNPVZGUVHSWTMAAD");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("YEXVNIHCASAMASYVTOBNPXDJFAKHCFHEXCAKXBCZZHKDOHVYHLPWPIAIDTUCBDSZTXFPSNMJBJWQTOGGRJSSBWIERJLZRZU");
    tmp_msg_0.max_speed = 0.102723355704;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.lat = 0.338152904212;
    tmp_msg_0.lon = 0.93564602352;
    tmp_msg_0.z = 0.277490278173;
    tmp_msg_0.z_units = 19U;
    tmp_msg_0.custom.assign("GVIUJUJWTQMHBNYYYLEJNOLAYXNCIDUYXZDCOBFAKQTMPZXFOWPIIKHCCDFUDVBXCRXKPSEEWYCGHITANFRZSVMSFRWDJUHQKNQRSNIMAVBSGOZWXDPFQBFWMHXQKGVNJZSZJDIOXDJETPKTNSLMWVTUPACARRQDQHDGPOOPWLLALBWOMEMCVGKCTKYYOXLXKBLAJHUFUZGIRR");
    msg.data.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.640859936611;
    tmp_msg_1.x = 0.433282221415;
    tmp_msg_1.y = 0.409064541445;
    tmp_msg_1.z = 0.319354604515;
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
    msg.setTimeStamp(0.605301050131);
    msg.setSource(56655U);
    msg.setSourceEntity(224U);
    msg.setDestination(46098U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("HPRMTIREXTFUQASWDVLDUHMMCVJNFVUXXNSJTMPWAPOUYTYWYKULHQBXCQGSVONAIBQZWHLAYIPRHNERLEFVFCXJWKEUTSTJZGEYLDDIWZMADPVCYUNGSGAGPDVLSGGAMSFQNISLNFCOUOITADIJDXX");
    msg.dest_man.assign("GNCSXVIBHRPROV");
    msg.conditions.assign("ONWZULNUVSNZSZBSQETXRQKTGVTFHPWRGXGCUPLTOAXFTAYKNHRBCTFMLOPIKYHLVPLNQODTGILREIYNOMVPMHDGAJK");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {95, 55, -63, -110, 10, 32, 113, -59, 53, 36, 39, -96, 95, 65, -113, 121, -117, 51, 28, 37, 31, -104, 64, -124, 37, -88, -104, 53};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.562654752968);
    msg.setSource(8602U);
    msg.setSourceEntity(115U);
    msg.setDestination(40556U);
    msg.setDestinationEntity(21U);
    msg.source_man.assign("SLJIGHKNKNOVPBHSUENABHSBPBYVPWJSCLSGRFDWFXTPMWONOVQLNMCACDFYKKQOLJPWTTTZVKFGNLXXIGDLKUCXXIGPEBUCQDGRBIJDINXDSMCHRQWGXENVAMZZOKZYFJMOIARKUYWJIUJPMHGACDDAYXZTKAZVN");
    msg.dest_man.assign("GMCMFCSGKPLCKUKNIYHMZAQYLVXXIVFSDDFQOBIDWLYUXTSTARCUQYFEMVRLSRVCXZXDPHECWITZNXBILKZAXBHDQO");
    msg.conditions.assign("OLZXZHZGDFQMIKYFQCFRUKQPBPCJFPJBDIEWFEAQLKTAAHGXLQNSMLXT");

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
    msg.setTimeStamp(0.337104120891);
    msg.setSource(3447U);
    msg.setSourceEntity(35U);
    msg.setDestination(2293U);
    msg.setDestinationEntity(159U);
    msg.source_man.assign("TDMBZRHAOILYRYPZPTIBEA");
    msg.dest_man.assign("BYLDDVJTLBLHOEUCGCKEBQKJDHIGNOFSIWFWTQPRFVKRSMHZJEZZBIDXTOVJJTALXWFVHNGWAGCNXFVCYLEOKTROSSIMIZMMMZLTYRPYPMLZOJAZZAVQTXOZARIERXACWCYNHSJDRBYKGQVIHKLSMQDULKRZE");
    msg.conditions.assign("HUFDEEFGFZQZDHTSEKFREQWLLFNALGSKGPVEXOWQEVEQCRPIBRYRPDJGVWVQJHKPHUUTHXUYAPQPGENDEJAPGBQUNHARIBIOVFOTNBINNRSCITQOGXXKJAPSAMDOHJTFJDDBFW");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.981870185454;
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
    msg.setTimeStamp(0.0365225371508);
    msg.setSource(39429U);
    msg.setSourceEntity(68U);
    msg.setDestination(35424U);
    msg.setDestinationEntity(237U);
    msg.command = 136U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SIKLIAAQYITLWFEXISNDYQUPRZAHGTJGXTFKZKFQEJPBYVKHRIMBOQZAFOHCUJKPFBFPCLVNWNMPWUNIEZWWWDZSWSAYRHKNTUCZVJBSYGCUOHAU");
    tmp_msg_0.description.assign("EBYXEBEWWJOTTZHMSBAZDDINVPPBUMIGAKELDOHRAGJPEOLWMSCHFQGROJZDQXRBJCIDFTWXVGMLRNFUHOYKDZKMBFQQZRJIVUSTGXJBVYNHXRZYSGLOVNZNSFXBLHQHSFVAQIFKIHFJOPXYEUASICQLQSWOEQSPNKGLHLA");
    tmp_msg_0.vnamespace.assign("ZIMTXNIRUEOPQRLBDQDPSGFOBDLSJXVYVAGSRVEWWBKATZZFUCVTHYISPJULIOQ");
    tmp_msg_0.start_man_id.assign("JWZIBWHCASFDVNUPGTCBTKXLXTFQRAPUTCZVMYOIACEBMAVGQBZRGGDNFCKHPKZMKCNHVUSMGDKPINFEZLSCRGEZJRQOHYDWQWYNHPNYFQINYMCIEXXLOFVVGLHYZOUORCKLZQSURMNRWJSUJSKTBVVUALQEJEUXSWPGAW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NKEBATKMRPGESBEFADYBPJYGIKIPWHKEJBKQHL");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 56703U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.804866208265;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.300595808734;
    tmp_tmp_tmp_msg_0_0_0.z = 0.214441104001;
    tmp_tmp_tmp_msg_0_0_0.z_units = 216U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.706861902757;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 187U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.547218752548;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.975604910515;
    tmp_tmp_tmp_msg_0_0_0.width = 0.189352288793;
    tmp_tmp_tmp_msg_0_0_0.length = 0.696512693432;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.869574937927;
    tmp_tmp_tmp_msg_0_0_0.coff = 214U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 83U;
    tmp_tmp_tmp_msg_0_0_0.flags = 195U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZHQPCMMXYKNSYKNMUQNMZBDTPDPWJXULVDOQEGSXRXIEWZRHBIPQDTJCNIVEVFKEKVUYKXIYNMCEXGBAQGQFBGEWDLQLTRBWVSTCWUZJRLNOJMFQCNPILLAZHTDWFBNLYAEUWKZGSHNUWOTOPFVAJJUOXEFTJIZGDAPDOGRKJMNG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JFEUXPSAJVENFMCBDDILIKUSIMLIIPOEUSBHOJVZYLCFXTTFQBBAHVYOJQDYWMCGYBZHXTHUOMBLZJXNCEQSLPZGHVXDPLRUPUYKEYWNPNOBAQSBDRNKXPWFQYKWXGLTOYTODWRSCAJYOEQUREHVUQESGKAAHHLNTWWGMRCYLVZKKGACHNMVSZTXADLIZFPTTSGEFUIJRXGJ");
    tmp_tmp_msg_0_1.dest_man.assign("ACAEXIMELJDOSBHSKVGOJCEOBYBLLIKKSBCJKLFHFAAIYWMORMPSKCLONNQOYVRNLVGQTVXLYDYFBWZAQITSNMUUUMGIBXGTRTWDYZJEAXEPPEZPKQOKBNDWQXZAYHREYVWJFHMUHVFRLCIHNTPZELVYWIQWYGUSSHUCPQWGUBPJTVNANIWDTTZCIFADZFDZJURSJMOCFQHUR");
    tmp_tmp_msg_0_1.conditions.assign("WPSZHPUDETOPEMPGELNTLCNUBFELEGIMCNASBPHQRJAQHNDBXJYGCTWTRVQVAP");
    IMC::Abort tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsNavData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.itow = 1795524541U;
    tmp_tmp_msg_0_2.lat = 0.753144072962;
    tmp_tmp_msg_0_2.lon = 0.886914764791;
    tmp_tmp_msg_0_2.height_ell = 0.784914183277;
    tmp_tmp_msg_0_2.height_sea = 0.148518380054;
    tmp_tmp_msg_0_2.hacc = 0.67912482375;
    tmp_tmp_msg_0_2.vacc = 0.0949770596323;
    tmp_tmp_msg_0_2.vel_n = 0.568516423555;
    tmp_tmp_msg_0_2.vel_e = 0.850930572806;
    tmp_tmp_msg_0_2.vel_d = 0.820345056344;
    tmp_tmp_msg_0_2.speed = 0.388384148174;
    tmp_tmp_msg_0_2.gspeed = 0.630573618437;
    tmp_tmp_msg_0_2.heading = 0.315820197212;
    tmp_tmp_msg_0_2.sacc = 0.30933363072;
    tmp_tmp_msg_0_2.cacc = 0.697515987111;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FineOil tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.896405072145;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.498874426745);
    msg.setSource(23721U);
    msg.setSourceEntity(178U);
    msg.setDestination(3105U);
    msg.setDestinationEntity(130U);
    msg.command = 248U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UXBWBTZMQWEMPUELVNTNFEOZJGCOQXEWTGKROLRZFFCUQKMTJVD");
    tmp_msg_0.description.assign("KQAKVPNOUYSZGTJXUSWIVYQGRCFNADZYXPVJBHKOIBFTWFDDNVXYVLGNATNBBHIESGOHEDSRATGCRPCPSOUDQKMQKNSQLVKHGHEOUMOGECDAFJYPWULQNQJGQPGIUBZPCDJGXFMOCPIIZLWQIABMZYBCEQDRMLISWRLAZXJPTC");
    tmp_msg_0.vnamespace.assign("YDJYIRJDUYMJCPBNVKHEPUXISSFXRCTOBCOHBETTVZIZOAUIUIOLHLXZZDNOMZDBAXLJUWQPDMPSNKMAQZSGQGLYLISCHLJZRSKXHHNNJFPWURNGZMCATFLTQCAFOJLTYCBNGPOBXDNZQVGIKCGHWZKADTMSW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IOVYCNZRRBRHCWPTPWLWGMNJEAKPLRAAUOZOKVDOAXZWSMMVKAQXZTALPZBCFPLBKJKIKGXEWHYNWRVDIXGCMJNQEQYQLLWFJTXEPHYJXGSIZDZDTGPRDGHUTFHKDONGJOJMUFKZBAVYAFBCCPYFQDKKDLSIXQILCMSZSYVVSURIAXPUETBJWBEFNNREFCHVGIBUUYOQLNQHYFIDNIORVDBWQYONUTSTCSBQOUHGMRZVJSUCMSEEXTMH");
    tmp_tmp_msg_0_0.value.assign("DJQFQOVQIAOLNFZIEGKELTAWJBKOJXBSSKPJNYUGCTWHQSUVREQRDHMIVHOFRI");
    tmp_tmp_msg_0_0.type = 202U;
    tmp_tmp_msg_0_0.access = 97U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CCWWGOQDISIIBZPNCGPKVNPUNEEMFIDVFOTPJMHNEMSIEXCSLAAWPJOYOYGWBVUBTVCJFQLUQHTFDABHHFURWUAZMOKSSVQHLUPDWLALMPXVMGPUSTRGBMHXSXARBQJRQRIREALMJCCVXKHESSKNXKNFOQDFBYDPDOBDWRTGHZTOQDAJAXKDTKKJEXJGRGCKSJGUXXGIZWCNNUOQI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EOEPNZIMUBCFBLQIOENSMQQNKEBVMKMIPOFWLZNMFMHOSIURCYSYAOGPEATTZXFCAHSDVHCKVDUBTTYGXADLTZTJFHVUNJYNLEZBDVUOWBUHADJSXXUOPRSVSGXMKVIDXWYRPLEGFVMYJJSCOFHYDNLXWXGWAGRJNIUBDQFYEQJHZRKWGPZJZXRKIQOIJPWCFL");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 7533U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LJXNRFTIITUYDBMAJQRFKAIKXZUUAKSEGHADOHBFPFUCJCVZEQYWOMDBUNTBCCWCCPSNQOHJCNJQQNWOPLAKCFYAYWADGXGERRHMYBSVBIDVXCMZPEJHNWTYLITSJDKAIPXKSGMLNRUOHIZZGNMXLGTZHSEZHTYRMWRVEPMFJUTSZLXJQHXIFTRDRVBGILTBPDWXVCVYXKLNKPLAGQOJGUPOPDNEVAVSEWYMFUZBOLWZODVWEFRHFBSQOKU");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ServoPosition tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 20U;
    tmp_tmp_tmp_msg_0_1_1.value = 0.10541968799;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("EHFNEINLUARUDWNJQDYSCMBQZGOUXSBM");
    tmp_tmp_msg_0_2.dest_man.assign("CPJAKERHGWYXEBKNJZUVEIHMTVUNAZFJUWFVUQOICQTHCEWNOTMUXUWXBYKKNBKIKLRIWGHPACOQIXWTXA");
    tmp_tmp_msg_0_2.conditions.assign("CCIAQMLVMSOMCGXNREBXCXVCKZJZHBCMBVVSDALBOQPOVWJJPHUSXWQJHOAAUJTAFAJNTZIKEZRBLPEHOERD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SetThrusterActuation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 138U;
    tmp_tmp_msg_0_3.value = 0.893904979201;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::EmergencyControl tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.command = 139U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_4_0;
    tmp_tmp_tmp_msg_0_4_0.plan_id.assign("RTFPHXZDGYTUJDBDZJOGUSVATWCFDTGCEEHWVNVKHLOCCYVGADQWWHSFNDIBSBVUZVKRXNZBUPSCZDZFNMXTFLFGWQJKJBQYVRRYIQGXEERUGEXWMMMBPENHKLBJUSAOJLTMLJPTLVIIQOSYRKNAPPAYPIFNFICMOGKDKCWPQTQLHTOXODUWQIMKZYYTCBFYCAJXNVSVNUMMGOEEZIXFHIAQWYOXPUZZEBNSR");
    tmp_tmp_tmp_msg_0_4_0.description.assign("KXSQFEGQIZPLAMDOKZRNORNFXNYLHFBUWKAECBVYXVGUBQJIPHUAWQNIGXJDYDSSSLBMKOUWGUWIWGDSSADZMQELHWJLRRYPIDCJYAGEUEKOTFSIMSOCINZGZUTWRYTYKOMJLIFVXTACHTTBKJFMAIHVYFWNCABRFTXLAOHOGPUCPBYLBVFPXDDOCDPKEWQULB");
    tmp_tmp_tmp_msg_0_4_0.vnamespace.assign("SVZRSEPDRLVHCSRRDIUOONCGIDLQMFCXESNSZFIZKOEHGYRJOTCWTYEWHOVDLRXWUYFOYXZYZLCTEMNXQDIGQRHFQVWIGQZMXPVFUQGBJKNANKLXBMEQGAMUGWRCYVWHQGNWXADCONKJPYAMGLLONTCAKKZIIEKDMPSTSSHDLEMIFJDHVUUHPBKPBBMKDYPBJFBHJAJFYIFHWESTVTQURXCAGACPMEVZJSRXPUBQWANJIATZOTLTKWZNJO");
    IMC::PlanVariable tmp_tmp_tmp_tmp_msg_0_4_0_0;
    tmp_tmp_tmp_tmp_msg_0_4_0_0.name.assign("SYPQRUQXCGVJVAAQCHXEICSKWTNMIGEMJJPXLYFVKWFDHOWEVYNJTCZTUJQAGIBZAWICSZZOQSEMNLFPLCLITSMINQCWWTXCGDIZFBYYKFBGGBXKQZQ");
    tmp_tmp_tmp_tmp_msg_0_4_0_0.value.assign("IOLOVRZKIXQKYGCTM");
    tmp_tmp_tmp_tmp_msg_0_4_0_0.type = 85U;
    tmp_tmp_tmp_tmp_msg_0_4_0_0.access = 81U;
    tmp_tmp_tmp_msg_0_4_0.variables.push_back(tmp_tmp_tmp_tmp_msg_0_4_0_0);
    tmp_tmp_tmp_msg_0_4_0.start_man_id.assign("SHOKHHOYZLWFOUYVVYPCVZOUBVVAXMWVPZCBCIRTCFNWBELMIRIFPKYNRJPRCZJJFDHOCSTWYGLALQNLA");
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_4_0_1;
    tmp_tmp_tmp_tmp_msg_0_4_0_1.source_man.assign("WWUHSKQDYVVXITCHFDRUOPSGOZFSWIGLUJXVBTRCTXXINEJSGKSPFRJFNAGQMWJDNHHYYZQOCUICOMTRJEEFBEHSOABONYPWKMDZCZYDCWGJMJYQVIAKHEPVCDAZGYEXWMNAUHDZOZMHPLZLFAZBQTAKPVKIFIVDKQVEBNYMIBNIHRLZXSFBUSNTUWPXLETCRDJGMKTODQCVFVGHSXLUYJBBTSQALLGNUREKAI");
    tmp_tmp_tmp_tmp_msg_0_4_0_1.dest_man.assign("LVRHPYLZRUZDXSRYSSIHVQGHTXIEEYSCBFRDMTLUZXWBXIDNCHQOMQJJEXRYIPTV");
    tmp_tmp_tmp_tmp_msg_0_4_0_1.conditions.assign("GRNDYWANXZYUKTSPRTDPBAGFMQKYAOTCTEJHGIRZIMKNWVDPYBR");
    tmp_tmp_tmp_msg_0_4_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_4_0_1);
    IMC::UsblAngles tmp_tmp_tmp_tmp_msg_0_4_0_2;
    tmp_tmp_tmp_tmp_msg_0_4_0_2.target = 48357U;
    tmp_tmp_tmp_tmp_msg_0_4_0_2.bearing = 0.232454628187;
    tmp_tmp_tmp_tmp_msg_0_4_0_2.elevation = 0.851425595927;
    tmp_tmp_tmp_msg_0_4_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_4_0_2);
    IMC::QueryLedBrightness tmp_tmp_tmp_tmp_msg_0_4_0_3;
    tmp_tmp_tmp_tmp_msg_0_4_0_3.name.assign("PXCPTMBPOYYLOZTTZCTSGLDFYSKMZFRSWVCNOJUIVQKRUXYQRVFWYNXDQQSLZBIXQLJUJJNDKULFHMEEEENUSTOCMOHKIXGZVNDVAJAMUKLEBQLORJBYLIBKEWLSCFFKJEXZZYOSGUIVWRZTCRICSNAWNOTEPHWUGAHRRJPVXGDDWLABMPAFDTSHTGXKKFNKYOJGDQIZNIQSFJBAMXHRXMVVYCQAIEWPGUOE");
    tmp_tmp_tmp_msg_0_4_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_4_0_3);
    tmp_tmp_msg_0_4.plan.set(tmp_tmp_tmp_msg_0_4_0);
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
    msg.setTimeStamp(0.134891807489);
    msg.setSource(30410U);
    msg.setSourceEntity(253U);
    msg.setDestination(30248U);
    msg.setDestinationEntity(105U);
    msg.command = 61U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GCDUQEABALUUEOKINKSYTIIPSMXAAGDZPQHQRVSNGBPXJNQFZSNOWKFOHBTHNMGJIPPHRSOBUQDNYIEVFZLUJYBM");
    tmp_msg_0.description.assign("DVXKFIBNEPGQHQTWCEKLIKTJPVJBQBCFVLCFHNZKSZXISDDEHXLDUUROZDTIVZOPEGQUNNBKRMMYDYHSZZOVFPIKQAFSYGMVAXOWOYPKWLBNXLYORZMMBYQNDLBWRXUAVZMHINSWOUHASNAPMFBKGYRSYAHXTYQRMDTUCDJGLISMQPOILPCLFRHKGMFWXAIEIVWGN");
    tmp_msg_0.vnamespace.assign("SGXRFNJFQSLLHTGFOXBQUQKQBHWSJKGMFTMAOHXUUVWOMXICCOPVOTGMDJLVTZYHMJOESQTURAIQ");
    tmp_msg_0.start_man_id.assign("HTIIOAENNLIZPAUUYUWWBJGHRVPBNMXAEPXQDZGLOFWVEOYVFOEQSJPLCCLYRHWKRFTCEXRHPMTRQQTEHMKUOQJIYTQWZKZZESQLXMZOVHGBCDGYWGAYDBOKAHBYVXNNMSESJLLUIIDXPXDIVEWZDRMFBWJCCKFBTUGYPQIVVKNTC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KFBVULTJDOJMGBQKKFQQHJFTDXCPHBIETYGBKIRWEYPZCOUXNOMENDTGLQTADIUSBTKNEKSHWLNPIUSEFOJLRMAUKGLQOYQGJDZMXJZURODCPQYXDWURTXMCZPLFROAIPVDIMGAWONENABISAYPVPRHMNCGURMKZHVLEBJCKNBVPJ");
    IMC::Land tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.673598187595;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0869323846257;
    tmp_tmp_tmp_msg_0_0_0.z = 0.90760034672;
    tmp_tmp_tmp_msg_0_0_0.z_units = 131U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.485886898287;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 29U;
    tmp_tmp_tmp_msg_0_0_0.abort_z = 0.257959025591;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.752592800168;
    tmp_tmp_tmp_msg_0_0_0.glide_slope = 141U;
    tmp_tmp_tmp_msg_0_0_0.glide_slope_alt = 0.00981001842207;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("RWGZTXSMTZNJFPWLFVYOCAXVLHGAWUTEXTLKABOHIQWIYOIAYHACHMUROYFRNJPOMEGPDKCNLSLSEQOFIURSLNSDKVJUHMTJWEYPIQUCFQEWNJZFTXBPQHHDCVXEUCJND");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Chlorophyll tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.380935761763;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ServoPosition tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.id = 197U;
    tmp_tmp_tmp_msg_0_0_2.value = 0.605720581141;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::TrexCommand tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 138U;
    tmp_tmp_msg_0_1.goal_id.assign("HMDMZVCXUXVAGXVOVOUAOMFZPUAQKFURYWRGPPJCZPHFDEUWCFEJJOHMRCRTBDPYJXLXUBILQJCTBATBHFZWXEEIKPWZACEGSSMHWKYNHJXYNGYHJLKYRGTTEZNIRKMGNBWFOSFLMLIAHQGDBPSQYZCWRCPSZULNDFHKNGAIFYSTPBGKMIDJITYEOJNOQB");
    tmp_tmp_msg_0_1.goal_xml.assign("MNLTKFYUIHZUGAWVVGBZNODQFRCSUNQLZJDKWQHTQIKLPBUSKBLOXGZJSGTMWFJFJCXXXLINRREZHUOMMBTQKNPHMZPJPSLDNRWELCXUYSVPSCMTFSCGVJMKUZHELJ");
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
    msg.setTimeStamp(0.548000320007);
    msg.setSource(45795U);
    msg.setSourceEntity(254U);
    msg.setDestination(52635U);
    msg.setDestinationEntity(3U);
    msg.state = 244U;
    msg.plan_id.assign("XQBRBRIORFMAVOJTOMMGOXZHHOIQFJDKNPWTTDQYVZADJPEDJIWVMSEMUZWSCNXKYGNGSTVQKBJDKWYKYUDLULSBPWUUWWNHGHKAYZRHOTAXVZLKSTSMYZQEAFAMHNTCVQSAEQPREFQBCTEKZCUXDYAGVDBEYBHRICPSPAMVDGZPBBIOEKHIHRGAULVLOPUFMRWLCIUILRHCJNSYMFGJTWIWCGXT");
    msg.comm_level = 7U;

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
    msg.setTimeStamp(0.0881002801547);
    msg.setSource(15384U);
    msg.setSourceEntity(31U);
    msg.setDestination(43167U);
    msg.setDestinationEntity(244U);
    msg.state = 228U;
    msg.plan_id.assign("NUNJGZUBLLRXCYAKJQIDDMONTANILARKYHEZVPPYSAJMWSVTFPRWXTSKXMKENJZJQCY");
    msg.comm_level = 208U;

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
    msg.setTimeStamp(0.421162906243);
    msg.setSource(25954U);
    msg.setSourceEntity(214U);
    msg.setDestination(51745U);
    msg.setDestinationEntity(56U);
    msg.state = 186U;
    msg.plan_id.assign("UITOYOSPHPTYTMEEDAVEHRAXMDAJZUKMCCJTBNNXEYFXOGPQNZMYGTLXLOAUHORSXUQPKFODBHQDWWYYKKHQIZIBCHNLRJOAWILMEBKOJWKVESIHNQNGWYRSMMDSIVJNHDEAHCECWTSRPACJFFJDFFQKZDSHMSBEAULFWVQQXVLBVPJDGXFTIWZGQSRBCXUNGPEZVTVNILDBCXUFLYAOZZ");
    msg.comm_level = 3U;

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
    msg.setTimeStamp(0.384847002226);
    msg.setSource(23317U);
    msg.setSourceEntity(240U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(234U);
    msg.type = 65U;
    msg.op = 189U;
    msg.request_id = 57470U;
    msg.plan_id.assign("VKTYLUNLCMADVHTZQMSHPAQDMAUOWBXYEGDKVMLCDQERICHPIJSXZKMWAQSJSQPRKVBFYDEVGPGDPGQNMCQRCWHBSHAGYLTTQBCTSFHZZNOXPDFDGUEWRHXZFJIASAVBLLRBWLIIWZTKMVCUZXXNNULSVERCLVZFKRTONFFOJIC");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("ODHJICPKFPFGMUPDVDMNXISCWZFVILZRJUVNPSCLGAQNWHNYNGHBJJHKRZHSAQTQFESYWPXHQVROUWGELTQZDEYXAUGSAMMTEXZYAIIIAJTBETXQPJQVQBTFOXBFOVUSXCEKLVDLYEGWAABZVULZILXQIKNDMKHBYCKOMDMKWWMR");
    tmp_msg_0.max_speed = 0.982470407142;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.lat = 0.463425080339;
    tmp_msg_0.lon = 0.850418665344;
    tmp_msg_0.z = 0.825055496021;
    tmp_msg_0.z_units = 129U;
    tmp_msg_0.custom.assign("IQBTARCXLRAYZQIKGXLNJMJVNJIOTENRNKQDWSTWOXUBHOBITLSAVTUIODSTYIAQMYCUFMINDMCAAJGTVLFRVZLJHIWQGDBFHPFWJUPWICESCPSYJBHFCZGLWYNKWCNZMWELXQMUCNADWZIQRUPXPEKMQODZPCGFEUVDTMVKFZEWBRHHHOESPZKFSSLKX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FUSBKAOBYOSRBKNZOWJIGIHJEJJQVDJNRMZKHVWBAURXVLEMQHOXHHADSTJAUCMFIGUQZKDPHSZRVMNEOYLQLKNFANUQCAOBGRFDVQXSXLPFNFBDECTYFLTECCZLCTWVYTCWLLUVUDPPMGPASINKWSV");

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
    msg.setTimeStamp(0.320609127428);
    msg.setSource(19754U);
    msg.setSourceEntity(26U);
    msg.setDestination(59383U);
    msg.setDestinationEntity(70U);
    msg.type = 28U;
    msg.op = 89U;
    msg.request_id = 42805U;
    msg.plan_id.assign("JAQQDWISLKCYGVTRDLQYPDPIOZWZHHDJHPWRQVZOEMSVAUFPMHZPCXWCVSRXHEGPTJBXQTQCVUKTRFRZAADNCJKSMBVFYLFQXJHQBIQZGTNOEKUGNULCMYORMITVSNCZADWEOYBRIGVXZIFZNZBUANTMWLOJKKWIWTPXWSRASDJHKVCHBEFDYHYTWUONKIDALFOYNGFLAMGPKHPQERDJMXLTMASBGFEEBYFRCEXGGUNBCOXSSIOBV");
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 31615U;
    tmp_msg_0.bearing = 0.391740820884;
    tmp_msg_0.elevation = 0.944219947358;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UYLHBJBKBDHLZZVRESNKGFGQIZNHWSEQPOVFCYDWNVMMRAGUUTIMCQSNOZJQDRCTJYHOBKWFQJUGQTVSJNPFTKEGMIHZLVYNOBTQXAJUFSVMRNKBBLTSAYATAREUANOCODIGLEMIXTPDFSTJQILDVGGDPVHWGBOYLXXUHLBMPCXEMKHWJPJASLPKUZXYKEOEXWSFDRQUCWCSPIDCCYCMKVWWEYFPWJRIKLZRAUFE");

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
    msg.setTimeStamp(0.226121538349);
    msg.setSource(21201U);
    msg.setSourceEntity(167U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(175U);
    msg.type = 165U;
    msg.op = 248U;
    msg.request_id = 27979U;
    msg.plan_id.assign("EWLNCXSKBCMBYKVCNFUFHPIEJUAKTCMUYXFVNAG");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 847934722U;
    tmp_msg_0.start_lat = 0.016469047023;
    tmp_msg_0.start_lon = 0.476662393122;
    tmp_msg_0.start_z = 0.125529906985;
    tmp_msg_0.start_z_units = 42U;
    tmp_msg_0.end_lat = 0.156411603404;
    tmp_msg_0.end_lon = 0.361125845712;
    tmp_msg_0.end_z = 0.683259724953;
    tmp_msg_0.end_z_units = 28U;
    tmp_msg_0.speed = 0.372282357202;
    tmp_msg_0.speed_units = 23U;
    tmp_msg_0.lradius = 0.577533069314;
    tmp_msg_0.flags = 11U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UGNZTNCYQFTUVRBPFJIVHDVXXOUJRSGRCIPBGPIIFCIEHUHWJGFMDTLNMDYOWFRHBPVDNTFZZECUHQCAOLDUGOOSZVDLSRFVUJFYSWDAWDZPCQABJTKTNLMGTWILSKXTJQKGMFGKAIROSLBLKOHBMBMMEPPKXQAUFQYGCVRHBXJNKRZEVRYMVYQHIJIDNOWENIQUCAODXRCXSGKWEHNALSNLCSJOBUYTSQZAWMAPYKAWJLMEE");

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
    msg.setTimeStamp(0.071486313011);
    msg.setSource(1901U);
    msg.setSourceEntity(109U);
    msg.setDestination(44991U);
    msg.setDestinationEntity(194U);
    msg.plan_count = 26000U;
    msg.plan_size = 3175619912U;
    msg.change_time = 0.0564281716267;
    msg.change_sid = 24302U;
    msg.change_sname.assign("QDGOSUHCRVSGCVQXINEWHXNRQIPVTIAEMMHWAVUESCKTIAZEORQCLAYSOQXXVOFNNYFJRCFERKMBOJIUTDSSNALKYPZYOXKNESKJEJHIYRNGDHNJZAJHLNXXUUXUWVPWLSDJQKLEDDFVWCYKCDOGZGNPVYMTFEKIWBAZKUYTFGKOP");
    const char tmp_msg_0[] = {55, -85, -29, 81, -113, 26, -47, -116, -4, -67, 117, -39, 63, 78, -41, -64, 1, -23, -41, 71, 90, -108, -104, -29, -66, -92, -29, -64, 83, -4, -23, 81, -13, 6, 96, -73, 56, 122, -52, 46, 73, 7, 36, 121, -9, -94, -55, 97, 75, -84, 49, -83, 7, -20, 9, 26, 73, -32, 27, 120, -31, -99, -114, -41, -116, 94, 85, 3, -21, -104, 8, 37, -48, -100, 99, 45, -92, 39, -126, 25, 27, -8, 89, -16, -90, -47, -107, 102, 86, 123, 51, 59, -21, -18, -76, 13, 48, 8, -13, 107, -33, 11, -32, -110, -68, 113, -84, -79, -77, 53, -37, 109, 101, 106, -41, -8, 84, -52, -8, -119, -77, 108, -86, 50, -35, 17, 123, 72, 14, -94, -20, -43, -86, -121, -42, -123, -11, -32, -110, -16, 83, -115, -58, 120, 15, -69, 101, -64, 61, 74, -65, -24, -13, -24, 106, -44, 104, -76, -116, -46, 89, 123, -5, -87, -41, 32, -60, -111, -30, 115, -125, 51, -107, 40, 90, 37, -112, 113, 73, -55, 30, -116, 111, -119, -101, -113, -12, 6, -83, 78, -25, -97, -9, 53, 52, 16, 20, -3, 25, -8, 20, -69, 96, -127, -43, -107, 68, 115, -84, 25, -31, -21, -90, -67, 26, 0, -65, -104, -100, 5, -33, 84, -126, -85, -37, -120, 76, -14, 54, -117, 76, -87, 37, 21, -62, 37, 109, -19, -30, -40, -95, -47, -18, -88, 82, -7, -11, 48};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QFJOGTFVABTIOSFSBLXKRCWRYYVZQHUZWEHDEEZLNUMLJBXWORGQNMKMTHJXLJKRBFDPJZACPGESAATLCIUPCAHPPMVMNKQMKSRVJBLJBLLISXZSHESWMKDUXDHWKLRFVMDNIBPPEVIEYMPRYZAGRFNTOROCDJUCEFOCYIYDHJOVLPIE");
    tmp_msg_1.plan_size = 51674U;
    tmp_msg_1.change_time = 0.952770638431;
    tmp_msg_1.change_sid = 6801U;
    tmp_msg_1.change_sname.assign("GFDYINBMTKEGHPYTYPZFDUWAUKWRSCVBSXCONVRMSIDYDMAOMMZPGHZPLUIKKXXSTLMVIQQTE");
    const char tmp_tmp_msg_1_0[] = {-93, -94, -127, -7, 28, 9, -51, 35, -119, -73, 45, -51, -53, 59, -98, -102, 3, 72, 1, -79, -122, -72, -95, 28, -112, -105, 89, -69, 57, 62, -59, 123, -59, 7, 107, -110, 35, 94, 33, -79, -68, -5, -16, 105, 51, -124, -87, -61, 47, -76, 7, -67, -49, 121, 70, 98, 36, -27, -77, 47, -53, 100, 17, -103, 10, -71, -119, 90, 74, 62, -77, 25, 31, -89, -80, 72, 28, -72, 16, 18, -39, 74, -36, 90, 5, -62};
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
    msg.setTimeStamp(0.825962422362);
    msg.setSource(7734U);
    msg.setSourceEntity(132U);
    msg.setDestination(64786U);
    msg.setDestinationEntity(109U);
    msg.plan_count = 21525U;
    msg.plan_size = 1064635566U;
    msg.change_time = 0.716479634974;
    msg.change_sid = 28292U;
    msg.change_sname.assign("EQVJEKPHZNWJQDZQQHOSXGOZOVUSPRSHCRJDYAOBWTRSNSYIKVGNABOIDLWGAZUBFONPBPLKDUYFQJSMANOLSPQSWAHLTMVALLXHRK");
    const char tmp_msg_0[] = {-94, -25, -86, -11, -77, -41, 18, 113, 102, -70, 3, -43, -117, -28, 78, -22, -4, -30, 17, 111, 45, -31, -24, -97, -62, -51, 2, -77, -15, 95, 121, -123, -92, 70, 90, 106, -35, 111, -16, 115, -61, 68, 2, 50, -26, -119, 115, -15, 125, -104, -18, -73, 47, 34, 39, -92, -110, -9, 5, 87, -52, -10, -36, 111, -82, -81, -37, -37, 63, 41, -68, 108, -74, -81, -2, -14, 106, -11, -55, -15, -52, 30, 85, -55, 53, 10, -88, 55, -75, -19, 8, 9, 125, 57, -104, 23, -40, 91, -121, 91, -103, 124, -42, 70, -91, -17, -33, 1, -93, -17, 98, 87, -73, 84, 16, -35, 56, 23, -82, 15, 107, -102, 47, -102, 72, 45, -49, 27, -5, 93, -127, 15, 60, 28, -112};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LXHKZTFJDSOOJFNQOYU");
    tmp_msg_1.plan_size = 19821U;
    tmp_msg_1.change_time = 0.802435675873;
    tmp_msg_1.change_sid = 53740U;
    tmp_msg_1.change_sname.assign("HJOQOKXQXKEQVBCTGTGXNXUYXMODSTIFIAUYOZLNDTGCBDRPIOMZXSKLEPYVVWCZON");
    const char tmp_tmp_msg_1_0[] = {30, -50, -18, -74, 5, -39, -28, -6, -51, -94, 96, -5, -115, 102, -23, 94, 29, -2, 89, -122, 112, -60, -102, 81, -52, 10, 24, 64, -41, -71, 97, 60, 44, -4, 19, -21, -5, -29, 117, 114, -55, 95, 43, 51, -27, -58, -73, -49, 91, -56, -38, -86, -123, -127, 93, 111, 68, 122, -25, 3, 64, -11};
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
    msg.setTimeStamp(0.327722529953);
    msg.setSource(22372U);
    msg.setSourceEntity(98U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(149U);
    msg.plan_count = 147U;
    msg.plan_size = 2630171878U;
    msg.change_time = 0.371974131607;
    msg.change_sid = 30436U;
    msg.change_sname.assign("WEFRPDOUPZDNCIAJYHXRDSKQMIKGGSWQAPGEFPNOJQZCOVSBJRVGUKHFJVEMOUHPTLICGWIKLXMTHQZNQBLNTZLZTJYEAAVIMLLASWTIHDAVZAHZQFBZSTWJDURYBEESHYPJLDNOYUFGNZSXIEIYKXUYLHDTEVWXXHEKRFZGTYBJGPWTVGXVPEOPABCQARSOJFDFDQWQCYJSXMBAOMCUKINQMXCMXWVDOKKRNTMFKUCNBFPRBHRCRUUSN");
    const char tmp_msg_0[] = {49, -62, 113, -93, -123, -9, -42, -81, -9, 93, -81, -16, -85, 14, -4, 85, 8, 121, -47, -89, -111, 68, -49, -54, -119, 71, -73, 103, 98, -75, -66, -117, 42, 70, -5, 49, 40, 19, 36, -81, 19, -58, -86, -34, 17, 26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YWZRNEQLZYGEKHMIXDNDUDEAWZXWSZQGARLFAIKEEQDPXSEQIJPRNQKACZCVRECSKISPXYDCXRNCZALOLEDXFFJHIUJQGTSDSOYHDVWGKNWOFSLIRWRCTJVGFQMKTRLBMUNIZGBWFEBOVONAJHMGXFUOYLMZBLXPJPUKTATMBWNIZGJWBGJSEQBOUPVYXPRVFJBLUHPHKAPYAMVFYASQUWNHCTUTYDXIZPTTVMOOH");
    tmp_msg_1.plan_size = 4661U;
    tmp_msg_1.change_time = 0.246373963599;
    tmp_msg_1.change_sid = 10076U;
    tmp_msg_1.change_sname.assign("MIOBUCCXPDZTQQFYOKTE");
    const char tmp_tmp_msg_1_0[] = {70, -41, 48, 1, 65, -1, 107, -3, -126, 72, 41, -122, 18, 59, -76, 84, -118, -79, -128, 72, 87, 112, -115, -98, -6, 54, -86, -65, 115, 25, -120, -123, 71, 115, 4, 7, -106, -9, -87, -60, -16, -75, -11, 95, 67, 59, 125, 19, -31, -11, 72};
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
    msg.setTimeStamp(0.635128460029);
    msg.setSource(26702U);
    msg.setSourceEntity(240U);
    msg.setDestination(40444U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("TNIYRKEQWMPWQJFMNAGPOATOIXMJWAAILNRUCMCOSRBPKNFBLSRFRHPC");
    msg.plan_size = 14558U;
    msg.change_time = 0.21141923969;
    msg.change_sid = 9943U;
    msg.change_sname.assign("LMIZNZHXDYPLQSSIUATQQUEOFFXWHTBINPYSNLXOMCHLWIXSMTEDDNJCZESAARFHBEAZLCNAUFYFQTDBUCVKB");
    const char tmp_msg_0[] = {-126, 13, -102, -80, -30, -100, 92, -41, 66, 64, -98, -74, 114, -10, 104, -111, 21, -40, 106, -75, 62, -80, -14, 16, 123, -54, -98, 126, -23, 14, -2, -47, -24, 75, -44, -10, -33, 78, -39, -63, -128, -16, -121, -3, -45, -106, 42, -62, -82, 110, 95, 12, -124, -63, -18, 64, 57, 75, -76, 59, 46, -19, -70, -57, -77, 50, 119, 56, 67, -73, -31, -11, 103, 57, 117, 67, -94, 91, 51, -82, 15, 26, 2, -118, -77, 63, -26, 44, -48, -18, -124, -15, -66, -106, 110, 103, 64, -43, -97, -124, 1, 94, 90, 54, -88, -121, -47, -55, 63, -20, -39, 19, -105, 80, -87, -22, -60, 103, 37, 11, -111, -51, -36, 43, 120, -38, 34, -56, -23, -13, -123, -5, -63, -69, 46, 59, -102, 44, 121, 10, 110, 70, 82, -41, 59, -89, -61, 81, 52, 30, 68, 120, 23, -127, -107, 32, -123, 17, -60, -18, -115, -92, 96, 21, -29, 89, 83, -95, 36, -21, -61, -125, 26, -50, -21, -18, 68, -14, -64, 83, -116, 107, 10, -120, -51, -97, -123, 27, 111, 24, 117, -97, -126, 55, -56, -49, -93, -107, 2, 34, -7, 47};
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
    msg.setTimeStamp(0.984458359979);
    msg.setSource(31652U);
    msg.setSourceEntity(183U);
    msg.setDestination(46995U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("YCXPHJPVHZJNJIEGDTZAIWIBLOAPZDRKOGEZDFXDXHIWWOBWIOWOHTINCAEUJHICCCMWRRHSZYVSWPOYJHNFJLTOQTGXTJUPRKFWRDYF");
    msg.plan_size = 24561U;
    msg.change_time = 0.0751152030268;
    msg.change_sid = 8531U;
    msg.change_sname.assign("YQXVHLQZUBKCTGHEBTVPDSZKUKOLDGQSXCOBUZFPSKPCOMGTNJMGDIYIXQTALIABQAWXCVELJNR");
    const char tmp_msg_0[] = {-107, -66, -75, -124, -41, -114, -109, -68, 45, -69, 24, -128, -43, 82, -79, -48, 37, 92, 61, -25, -29, 38, 85, 44, -1, 30, 89, -88, 96, -67, 117, 18, -14, 101, 123, 121, 105, -99, -72, -24, 62, 36, 75, -85, 125, -4, -84, -68, 72, -53, 83, 87, 117, -11, -85, -64, -42, 86, 58, -106, -110, 79, -95, -50, -82, 122, 84, -11, 16, -41, 34, -43, 55, 123, 74, -116, -9, -95, -85, -101, 100};
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
    msg.setTimeStamp(0.0946012801231);
    msg.setSource(8112U);
    msg.setSourceEntity(62U);
    msg.setDestination(5093U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("QHDQDXFCADUMSFUIBDAROQEWZGOYUFKAEPCXO");
    msg.plan_size = 29515U;
    msg.change_time = 0.786057006949;
    msg.change_sid = 34404U;
    msg.change_sname.assign("ZXQPUVCVKZDWRETUTRSSAFDHDJDYSBOIOFAHMANPJBCNUKUUCCTGIZRMJWYXYFUTSJLRMBWEQXKLFDFFNVSIJLTGXOMGZKMKLOYDITGHPQAZUOKAQPNGEEXJPMPZHNXSLTLNUIXKMHGNDQRTCQQABNLOWPLXWXEGFOFAQIIBJRYSVWSBADBHBMRHRP");
    const char tmp_msg_0[] = {37, -77, -46, 68, 82, 105, 105, -43, -47, -113, 3, -67, 54, 33, -86, -96, 86, 77, -81, 83, 17, -95, -36, -67, -59, 0, -120, -78, 62, 117, 61, -12, -35, -113, 61, -1, 30, -55, 118, -26, 39, 53, 113, 94, 1, -107, 15, 56, 45, -39, 7, 94, -102, 86, 34, -16, -120, -68, -12, 79, 14, 112, 98, -27, 28, 42, -126, 34, 55, -52, -38, 49, -15, -16, -100, 92, 105, -114, -83, 96, -81, 103};
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
    msg.setTimeStamp(0.603346931537);
    msg.setSource(20637U);
    msg.setSourceEntity(58U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(112U);
    msg.type = 237U;
    msg.op = 120U;
    msg.request_id = 536U;
    msg.plan_id.assign("JFONVCZFHQAGYBRVYXMVKDPHYUKGZPWMLMBHHAPLFDFFWSUCFCFRDANMLMAQIPJCBPBLICTMNMTTOHYBYKSHEURQAFLEVMABTNSZAMOQPONVVSMGYJZZWKSVQJOZLEWUEELGXERJEBWWJTHCOHJNKETXOEORTEBIWZSLORNJGDXXGTJYIRDDWRBDIACZRUVNGKFKUGXGYSATQQGRYIVHIXXIPWSXPUQZNNUPOZKAUVKUFXPTILYDBQ");
    msg.flags = 47241U;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.817242619222;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FCRRCPLDNMUBRMTPJRELDPMUTIIIVLCTBXNLQFHLATMYOZIYDJCRFZEVSZHOPLJWJCWKXJDGFBKWOGZGQSEAEME");

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
    msg.setTimeStamp(0.382211522308);
    msg.setSource(847U);
    msg.setSourceEntity(162U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(92U);
    msg.type = 208U;
    msg.op = 64U;
    msg.request_id = 33061U;
    msg.plan_id.assign("QRKWGSDEWHBTKDEDYPNZJOYIGJLCUSBTNOUOGGPTMZAJPIVCRBCPRNMTJVXELCLYZGSAXLKGDJDJSHOWYAYCLOUXMOQKRQCAAZWGIOYRFQHKWAHKOASHURFWANLYMNMOIUSIFKVVTSQCKOEREACFFUELBHQQIGDZCBPHUXMTQRVNMLBBPLMSSRNGIQIVPEKWDVY");
    msg.flags = 56848U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.418800863268;
    tmp_msg_0.lon = 0.947621132514;
    tmp_msg_0.depth = 0.440493850453;
    tmp_msg_0.roll = 0.144814426099;
    tmp_msg_0.pitch = 0.0454775476968;
    tmp_msg_0.yaw = 0.678849211901;
    tmp_msg_0.rcp_time = 0.72724893926;
    tmp_msg_0.sid.assign("NXZWAJNRAKMOJDPQEHTWHFQJUBWIMXULKJVOIXACMIBSSYLKLLZTVZGSSKDFFOGNQLPLZSXDOZUHRKHFZAHZYJJICIYEWXXFV");
    tmp_msg_0.s_type = 158U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZYZOVQMWQKWAFDDUDKULGWRHQKRPHQYBNRJIMDUSZLN");

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
    msg.setTimeStamp(0.0631666638968);
    msg.setSource(13648U);
    msg.setSourceEntity(164U);
    msg.setDestination(33098U);
    msg.setDestinationEntity(83U);
    msg.type = 127U;
    msg.op = 244U;
    msg.request_id = 36546U;
    msg.plan_id.assign("AQHGVHAWVQXNTIOPHXGEEXPOVKOPQFBJYOPWMIXVZDAGQSPMJOMTMLLEDZMTHISJSWYSJECUSRDQGZPGHQGWHMZBUNXHZIACHVZRVAKBCDRPXXQDAVINJFSCCQTOMNGYW");
    msg.flags = 38981U;
    IMC::MsgList tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RLKFWOLHBD");

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
    msg.setTimeStamp(0.782849020737);
    msg.setSource(42070U);
    msg.setSourceEntity(140U);
    msg.setDestination(61010U);
    msg.setDestinationEntity(16U);
    msg.state = 0U;
    msg.plan_id.assign("NDGLWGVVDHMMJKDREFGXFRAVJBDJMUYYOYJFFPICTTPHEJURNELSZTKAJKSYKPTTOMKDVIFSIOXKYGOABWQDBFPOZHWYBNRXHXZXSKBCAL");
    msg.plan_eta = -1114579109;
    msg.plan_progress = 0.67489681872;
    msg.man_id.assign("KHGVGEDOCTJCIYGYYMDXYLLOFUIULPOMKOJLABPCOSFJWOSVZFLQHHVQMEUMOBSODMGRDCXBUVAKPWDKAXCLTCUJHEPZIYAYBGNTMXBRJMWRHPUPFXFIREZLSMGAYBPUQZXTPJNHVWARZECKCDNOBETZEKUVMDVNBCKQIQDSRQGDC");
    msg.man_type = 35484U;
    msg.man_eta = 1004420665;
    msg.last_outcome = 30U;

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
    msg.setTimeStamp(0.224128977962);
    msg.setSource(52492U);
    msg.setSourceEntity(194U);
    msg.setDestination(41932U);
    msg.setDestinationEntity(231U);
    msg.state = 115U;
    msg.plan_id.assign("CEWRNFQDMEEKQESDCKSJAUJBWKEDDNAYTKXUUPSBXLRDDNMLILGNPCORYZBBRHZFFWLHORVFGCVVQUCKIXAEPIJEKAXGWSZKWPGPHFHGVAQGZJSHIOVOLUCIOYMUMNYQYMLFNSBLPYGFQTHFPEIFSVAMUXDNDOOZNMTZOTABIQINSP");
    msg.plan_eta = -356654630;
    msg.plan_progress = 0.470870542682;
    msg.man_id.assign("OVJYQVJUUJWRPMGYJIRSKBMAOGTCZQUPYVZQWNGWSQPDAERQLWTRDOKKAIMOPXLNMLOPTYBASNJHVTKEWAODFFDOZIMY");
    msg.man_type = 58889U;
    msg.man_eta = -1739439481;
    msg.last_outcome = 219U;

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
    msg.setTimeStamp(0.058641559602);
    msg.setSource(22403U);
    msg.setSourceEntity(168U);
    msg.setDestination(15534U);
    msg.setDestinationEntity(171U);
    msg.state = 47U;
    msg.plan_id.assign("HOPUKRDCBPNIBIDCBTZYTDZJLRRGLOESTAEMWGCURVBPZRWVYNHXBVOPJDDYWFUJSTXEGZSGNEMXRWYSEBOAGCKLTJLIRCJTJWULSSPJEMCUOIIKRXIDKFQZPYYMJIKHKQBNFATVXEEPBQHLWQRVFFVOPAKSZNOGOHQFJZUCVMPFBGZDUCALNDIUWHANMKHFTQAEQMTYFIXCVGHXWXQLMUWTPGYNBNKHDXSLVYQUZYFOJONSAW");
    msg.plan_eta = 2000675190;
    msg.plan_progress = 0.567511988529;
    msg.man_id.assign("YOBEAUFUNYSSEUKMCLBVTPJFTGMCGLYZJJRXFZMXRCSUVJYKXPBXKGHRCGPLJUEBFPEPTXJGIUMKKFTVIZFQDIDMSJNDKZLOITHUWR");
    msg.man_type = 52976U;
    msg.man_eta = -554551921;
    msg.last_outcome = 220U;

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
    msg.setTimeStamp(0.502886674563);
    msg.setSource(63340U);
    msg.setSourceEntity(57U);
    msg.setDestination(40516U);
    msg.setDestinationEntity(29U);
    msg.name.assign("DHXGYUCWJVUSMOOQOCTXYXWMKCJZIZINQTDRYEQPEQMIOQFEHKROUPNGYQ");
    msg.value.assign("KEHOEQHLXTQQKGDRLWVTLFASZGVYRVRYPMSGWFTMLGXRVBUPWAJOLRBWUAUWONJIYYO");
    msg.type = 143U;
    msg.access = 84U;

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
    msg.setTimeStamp(0.813046792637);
    msg.setSource(50884U);
    msg.setSourceEntity(165U);
    msg.setDestination(38924U);
    msg.setDestinationEntity(12U);
    msg.name.assign("VWEMTIZULGRVHMJDCIFPFWUGQRJNARHSQIPPGTWLOZYGLEJYPNHUDFLRKWTIOQRCDBSFWLIXVUDGRHMNQSIXLXDAKCLOZFKCVXYPMUQGKOAKUSXHACADJCOBUCFTKYADSXEWTKFCEHEZYBBMAASKJVUCWLDMZKBSBKVVAYIZQEMFHWYPQNNRYJBHBZJUEF");
    msg.value.assign("FQRICDDAXGFEVI");
    msg.type = 225U;
    msg.access = 160U;

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
    msg.setTimeStamp(0.891966639406);
    msg.setSource(24364U);
    msg.setSourceEntity(244U);
    msg.setDestination(42932U);
    msg.setDestinationEntity(238U);
    msg.name.assign("IYWHRGEJQWWDOLJYAMQRXXXDLXCAXXQSBVGBOHZPIKRSUIIADPZTTMVCDARVAZMBFWIKNRJIVMFV");
    msg.value.assign("FGAVPGIEGUWWFPJXMANNRHBBYLNDWTYTTTKNJYNYZJIZVWBWKBVESRMBSGDRWVJJPSQSFKXAVAQACHOGLSUEPVJMKVXEZXHPGMAQXIWAMYCTAKXHPDFECSQCLFPMEURIUGVUDDRDRQUDALPHMQNORQLYOCLVCYHOLZPEONNASDJTWRZKBYHOXKVHGDTBTTEEQWFNORZFDBIZGPBUCRSLUSTCXUFMFHYIKKYOQUHMLOXJZFK");
    msg.type = 112U;
    msg.access = 32U;

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
    msg.setTimeStamp(0.582593078224);
    msg.setSource(27783U);
    msg.setSourceEntity(233U);
    msg.setDestination(14661U);
    msg.setDestinationEntity(185U);
    msg.cmd = 54U;
    msg.op = 87U;
    msg.plan_id.assign("JQTPDNXHHGTLWVNXHYCFM");
    msg.params.assign("CTUDDPRURMRGVEVWOKMWZFSOBNVBQHRARUOABKLZZDKAEEFRIFWNQPONXXCDVMGIXAYOUJFRFSQWGWEPHXCJEQUAPSKSDIJNPMANXWCTFADUHUVGLHZKOFPGLVZJXITTRATDYEOAQKNMEKKNXLYVLNTLUKIJWYZFNLJSHEEJHPGBYZVPSREXQVCUCGTGNSDSHTMDCHBJYQIICBBMJLQIPZWYZCGOOISXFJTMYHBOLH");

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
    msg.setTimeStamp(0.954577415053);
    msg.setSource(61074U);
    msg.setSourceEntity(140U);
    msg.setDestination(29548U);
    msg.setDestinationEntity(239U);
    msg.cmd = 77U;
    msg.op = 248U;
    msg.plan_id.assign("ENZFQKVAOWYMCXKCSPZQNVEZSPYSTEJOPZYSGQBDXIBPCJQUFSLKUDYHEWNGRTWIDCYQJLLAVMIODBPVGSYXWWGIFHRSUPJKAILZDBSLOBEREQTPFCIWKQSRTXJAXXLZWHN");
    msg.params.assign("PWJGYVJGTXVTSIQWZGDUAUPDEMMHCUCUNIFYOPVYFSBJQSLCUHLMKOFRHJOZPTCWSRAYAJRHLZZABPRMNHQMBTDZAJSMHHYNYBYRAIQKOCONQEDAGXCGPLEDKN");

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
    msg.setTimeStamp(0.0127770198359);
    msg.setSource(58709U);
    msg.setSourceEntity(100U);
    msg.setDestination(60907U);
    msg.setDestinationEntity(48U);
    msg.cmd = 38U;
    msg.op = 247U;
    msg.plan_id.assign("VWNRUNCIYZDCLMFBKXJKWTLIYAHSSVPKEPBXAMDFSNQWKCVXKEXUJTGZORPCTCAJJSLNPDRFQGASHINHGRQBQYZMUYDOBWOVJLBHATNEZHFPNABBHOCJMUXCTZFZLD");
    msg.params.assign("RAXIBZERNRDJCOQNQVBCKXTTILCEFKJXJUMTTPZJPMPWMWYQARITSNWDGSYUJFGKONJVPKWRPHNAPOLDFHNRJEHDMZBJDFWGEOGZIVCWOSADQCVMGLLSUXWTDCONAYIIYYMEXSKEQXETMWKKPFIRLT");

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
    msg.setTimeStamp(0.390930566239);
    msg.setSource(34463U);
    msg.setSourceEntity(124U);
    msg.setDestination(49526U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("ENFWJZFOUMHRQNKOPJSONEKXNKSTYWYVZVYCUXZTIWYVUGRYDMNNJLYACSHUXSIAQFCTFVRRRVYACYBPSOBXXU");
    msg.op = 71U;
    msg.lat = 0.0520602665689;
    msg.lon = 0.414638475395;
    msg.height = 0.968169557547;
    msg.x = 0.0650349378867;
    msg.y = 0.868009727194;
    msg.z = 0.997529620998;
    msg.phi = 0.446003417306;
    msg.theta = 0.0778263114418;
    msg.psi = 0.722345185372;
    msg.vx = 0.432035882819;
    msg.vy = 0.594007822696;
    msg.vz = 0.271287909999;
    msg.p = 0.681099562001;
    msg.q = 0.0292411677057;
    msg.r = 0.262962602044;
    msg.svx = 0.920006775923;
    msg.svy = 0.448095890591;
    msg.svz = 0.911748543503;

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
    msg.setTimeStamp(0.59013041077);
    msg.setSource(2134U);
    msg.setSourceEntity(212U);
    msg.setDestination(7840U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("NMLDOYMALLRBHDUIPAAYFQ");
    msg.op = 58U;
    msg.lat = 0.664489189099;
    msg.lon = 0.0385452975851;
    msg.height = 0.131341870598;
    msg.x = 0.986005374561;
    msg.y = 0.227683214981;
    msg.z = 0.176083404346;
    msg.phi = 0.131229504291;
    msg.theta = 0.0459241109089;
    msg.psi = 0.0719535003694;
    msg.vx = 0.139674078866;
    msg.vy = 0.293177513913;
    msg.vz = 0.821155630701;
    msg.p = 0.347483821633;
    msg.q = 0.582550064951;
    msg.r = 0.428502694243;
    msg.svx = 0.382402432275;
    msg.svy = 0.00942849942328;
    msg.svz = 0.346824569204;

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
    msg.setTimeStamp(0.136367381173);
    msg.setSource(30135U);
    msg.setSourceEntity(191U);
    msg.setDestination(64611U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("MSALDGKZJFNFIUVOJNKBQWQPWKDXIXUKWTPOESWODUZKOQCOAKJPZNXMNVXARTHDCSWQZRDRHGMOGKLMJIDDCSISMLCDUFGTAYTPYNGXZLGEFFYURELSWVHZVUDBQOYRCSEERIHPRBZI");
    msg.op = 149U;
    msg.lat = 0.651868942895;
    msg.lon = 0.398859324322;
    msg.height = 0.100013353895;
    msg.x = 0.24960745405;
    msg.y = 0.302746652029;
    msg.z = 0.459708524576;
    msg.phi = 0.7503634861;
    msg.theta = 0.0692898652385;
    msg.psi = 0.468017916931;
    msg.vx = 0.165269618597;
    msg.vy = 0.355009487846;
    msg.vz = 0.91746095411;
    msg.p = 0.171914903392;
    msg.q = 0.809564772838;
    msg.r = 0.682967867906;
    msg.svx = 0.625408830372;
    msg.svy = 0.00750285767476;
    msg.svz = 0.816206925363;

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
    msg.setTimeStamp(0.384585864461);
    msg.setSource(15187U);
    msg.setSourceEntity(184U);
    msg.setDestination(20645U);
    msg.setDestinationEntity(27U);
    msg.plan_id.assign("INCKXZKACAMEBGJLOTQCQUPJRPYCILUMNPARHFBTQOLUFHNWGDXTWWUZVHZYUFRJDQRQGDXWAKHTLWODPEMQVJOSSOIZRCDGZASGUFRKCWZFJTLSSVQDHBROBXHMXZVENXWCFMAAWHOIYLOUFBXFZPEGEHYSKQBKJDEPKEQUVUDWRYBDVPVHNKINNAJMPKTSASCLPGYRYI");
    msg.type = 213U;
    msg.properties = 194U;
    msg.durations.assign("EYXPJXMPDPWRSHYCKSQXSJQNHBNLEUKJBNPWAMJCYQSGDXGFJADBURMUSKELMNXKBZTGTPNTCJUAUSGVGPRIEKFVHRNTYGUIQTOWVWRPJOLLJWYBCXHMAOXDBFZZDMWIHRZXIZLFGBVEANDSKLAVFOFFIWFRTVBIZAMHMOZVYDHYTDNIRGQAFUCLYHRPSUZKAGXDPFLIUTOC");
    msg.distances.assign("WDDOARNDEJUHYCKLWLEIPLRFIWYJKDELPSSYNAHK");
    msg.actions.assign("GJAWXDZNRANSISCIVJMNHGVXRTBLDPEEBULWJLYTFVTOKWJKGYQCDHQTXVCERIPDYORVZQPOBPNKPENZZZRBYMWNPUTGXGWUQGSJWIISJOKZYUZTIJNCIPBXYWOCLDXCBYFSOEMXZOOQIPKUMSUNPMKDDTHVOMRQFJW");
    msg.fuel.assign("CGHJISNYZQXIH");

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
    msg.setTimeStamp(0.0532991072338);
    msg.setSource(63781U);
    msg.setSourceEntity(67U);
    msg.setDestination(59789U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("BCCYWZAQTJQDWCPXBXBYAPUUVQJQMECXOLTURWWYROMFYHIHJJXCWSRRBLGMEMPJGZKIMCIOTZFQJGAHHPYBQOENWVYYTE");
    msg.type = 146U;
    msg.properties = 118U;
    msg.durations.assign("VCSSJUVRSJNKL");
    msg.distances.assign("EYZJXVMDKKJXNVNOOUTHYDJSLQBQPHKOHFMIFYUJIEDZUVJCQPIFHUJOFZPUIVESBFASDIBZQTEXGWOBCEYRKNVYOSIBIXHBRGVSTBWTAAFRKLXEKGXKAZTQNLFQEBJINHZDYMJUAGDFGQNMILLSWPQWZSZQEKCROMYJFFYIUMHMTTPGGPNOWBWTQOYCXCDSUCPXAEHCLLWXVKEANRLCWMPTRGBNPWDMRXGDVSCLNLZJMVUAHOA");
    msg.actions.assign("BYEFKOGEPGWGFDKCZRCMSHXWHMHLOOCTQAISNLUMMTKEDLTRDZXEUWCQVFNKTQMUSVZYHWTRPJAIJZUDFPYJXWQZUNPBEUQAHOEGOKNSZGUXNCVVCLDRVQNPWZTIKSPUGSMRHKSHTDULRNJYYAZIECPVBUPIJAHWXRBMCLEWSVSKMIPFXROPJIGYFBXS");
    msg.fuel.assign("KAXLLTWRKGBTNYVXFWMTNYLZOUECDKPDNZXYOVPTHXHCLYURLBBAIMMVDWAEBSGPOURFBEXRBDVJSJFZMPNQOFDAVQUEQBGZETEQJCWWNZLWKGYCQFAGVSECWRZFHGYXOQVQZBTJCGJCFZTHUIXCZUINSUKELSDRPBPDMXSHNLSIL");

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
    msg.setTimeStamp(0.334040292914);
    msg.setSource(46140U);
    msg.setSourceEntity(17U);
    msg.setDestination(27314U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("FJZWBSBPBWZEUQCINPBLQDCWFNNEUPQZDXKDWVAHMPLQQMFSINGOHQGTTQTKAUWMSOAXYYLUFEJHRHDOVUJLGXWXYDAMJPCBGHYBDFYZPARHUCJTCWRMBEYAOCEBTGEXAHWGTJRPVOTEJYAISCLUHKZOIFPUVXXGCSNQRJPGOGJGOU");
    msg.type = 31U;
    msg.properties = 193U;
    msg.durations.assign("EWNYRQLLTXNZUGUSZBZQQVNPFZXWAUFOMNWKRGDJSKSPCOEHSBLGIKILOXCWAHVELZVIRTIZWFGTRKYISQAWWJGUIADTGCJUGPVYZWSCNBYLHJIVWYEDPDHXRHMIEBDVEQOQJXFVPNVPXYGUMSCUPKHACQDHSOLUAJWDKFBLZEEO");
    msg.distances.assign("AYCPSZAUEOWNJWBCOMEYVQGIBRWQPXZODJKKTCITE");
    msg.actions.assign("UKHRVNGPWLIGITHEZHHYTPODKINORKYGWYXRGECBQNVSWMOPDFGFHDQBMYCMDBKAELBRKYWCBSFAXRBRHSSSFUVHHMNLBUQLMIWXLSZLUZZUEAZTEARKYNJOKM");
    msg.fuel.assign("REGTWLNYISEGJZVDMWELWCJFELEQOZBOQKIRAASTCVEUTMPQVAQCRFWOJXHIVWBPXGVOTSKXTTNHPZANFMWDCBUXMKRYAZWGJDGVUPHBAKHBNPNHTUHJQNK");

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
    msg.setTimeStamp(0.119887359119);
    msg.setSource(42481U);
    msg.setSourceEntity(31U);
    msg.setDestination(51139U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.891913845687;
    msg.lon = 0.191377273821;
    msg.depth = 0.13839452714;
    msg.roll = 0.996722977296;
    msg.pitch = 0.19131796716;
    msg.yaw = 0.23488016038;
    msg.rcp_time = 0.998830083914;
    msg.sid.assign("ANZTISHDCKFSPPSZAUBLFOHGPBBZFWQHRXGXYVPJQNRPBIDHLNYAROJORQCZHANIKSIMPESUTJZJWMRPCZFEAZFGDCFYSLNQYYMJCNJDDDLYKMIWOSDLXGAIZN");
    msg.s_type = 67U;

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
    msg.setTimeStamp(0.27852812299);
    msg.setSource(41010U);
    msg.setSourceEntity(226U);
    msg.setDestination(32755U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.870729068747;
    msg.lon = 0.645061659195;
    msg.depth = 0.553074701386;
    msg.roll = 0.200397984272;
    msg.pitch = 0.351386122395;
    msg.yaw = 0.170813281654;
    msg.rcp_time = 0.381687015817;
    msg.sid.assign("XBTNVJZGOKWMLVPOEZMKBHBUJDYGVSFXEMVKQEFABQAQSAIOXKTTDDJHWEAPSHFPYSJBXTXFRUOIGGIHOTQIOHZSPQNSPDFRQRCXUCUVDXPFURLTUOBZJZCOWYUCHNTVJJADRYCDWNPUQEDHIPNWZZEFYRLYMALGYGPLBLRPFYOSAQTJQLKFMNUGMHCKCHXZBSNGNV");
    msg.s_type = 43U;

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
    msg.setTimeStamp(0.392909045674);
    msg.setSource(33717U);
    msg.setSourceEntity(191U);
    msg.setDestination(47905U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.272077977063;
    msg.lon = 0.127847880361;
    msg.depth = 0.0341822511341;
    msg.roll = 0.405996646664;
    msg.pitch = 0.380239910405;
    msg.yaw = 0.0702246847296;
    msg.rcp_time = 0.153241494712;
    msg.sid.assign("ULQHSAJZZJGXMDXMWPWIYHQKQTUYIVJRONWHHWMCTWXLGAUKGPYHCEDRXDLNIZVUXJCIBFASGLFORLUKDKQWKQPUOCQLHUFSPTJ");
    msg.s_type = 175U;

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
    msg.setTimeStamp(0.765345038667);
    msg.setSource(17965U);
    msg.setSourceEntity(236U);
    msg.setDestination(25140U);
    msg.setDestinationEntity(168U);
    msg.id.assign("EELYXFLFPFXROCMTBSVECZUQVXNJVWHTYDKRFJRMPHXSDVKMTMQMAWUZGAWBZWGDCNQATNLGKUGLZEZMTZVAHKCFMFISVBJGKNORELYDIELYNMJURUMPMSFPGYHOVXDZKTGYAPLIVFOPXLRGSSIRVXCRRJOWQUIQYAONCY");
    msg.sensor_class.assign("ZWVFCJUKECMUOOGKAJQPNZKLCABLIQDVEIAZZHCHPMULOJCXYIDMU");
    msg.lat = 0.793386200686;
    msg.lon = 0.0907446717181;
    msg.alt = 0.726290727888;
    msg.heading = 0.805377175236;
    msg.data.assign("SOVEZYBADEGHPAUYEYXIPNAIFRKQZDQGNSKSPFSZZRTHOEWSOWXLBSQSKMFIJBVTJTZUNFYFUYOQGZELJTQSPJMGSYTRUWYEICROYCNPHOLLJGVTKZICNWXJMBBKOZAUWDVHTIWXUBERETXPDQRJRECG");

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
    msg.setTimeStamp(0.86095632915);
    msg.setSource(9940U);
    msg.setSourceEntity(179U);
    msg.setDestination(32534U);
    msg.setDestinationEntity(106U);
    msg.id.assign("HYKCFOOKRLHGBJVHSDTJBZPGXAALCEHZZ");
    msg.sensor_class.assign("ZBTMSPWQHKVXFCQOZZNDPAGJLJIGLEIUBQBARAMTIELLLVRFYTSYLOOIGDBKPZJPUKPKDYCNZLIAVBFXTKJMWGJCARFTRMHKAAYYHFUDUMLVGWVZNRHIQGHPCUDFQFVIJPEPEYGMMJWNNZXVIKJPPEKFHABOSXMREWWSTTZOYSXOKCKCHLOEXNXSGUJXBAEHWQQOBENDDNYONXRBUUDFI");
    msg.lat = 0.0685888147026;
    msg.lon = 0.918931123567;
    msg.alt = 0.0774378709791;
    msg.heading = 0.907178967113;
    msg.data.assign("AYTISTTHBLNVIOFDUDSRTWTMCUBJPFEGVURRHNKROXQTQAENCYTYVAZDRXWOUNMAUMKZCBNXDUPJEFGYWVMKSTEYKPGIANGWZRSIQJCQGKPLBWZMFUPZMQQYUHMWTAJOIURCDVDSTDOCPGVHEKFBIGXSG");

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
    msg.setTimeStamp(0.59996139711);
    msg.setSource(2007U);
    msg.setSourceEntity(231U);
    msg.setDestination(62290U);
    msg.setDestinationEntity(121U);
    msg.id.assign("MANYASPVMXDVNDXGNRYQDUGQAGTQETZXQYUOBWYWQLHNBMQKDLCEODENZVWIZVAJJJDRJRHMXUFYTWCEFBTFSZNPAYREPOLFQGSRMKHYIULXTTHULEIKDRXI");
    msg.sensor_class.assign("EPSFSNDZIXOPHIGCFNQHYZOPHDGZAJWMNJPKOWTBVYCUWIXXGNMVUWLAYBSAYKRETRRWVVOWLXMMMLESUPHZJKJTMIJGSQEYDTMBPAULDBKYRYYSJZFBDWEUVTKMOUQGAOCIAEMCTRRKPBOJFRHFHFQDQNDXTKDDZCHBFSVWDKIIYEGZGLXBCAVOPS");
    msg.lat = 0.494360305393;
    msg.lon = 0.587124076248;
    msg.alt = 0.835016833418;
    msg.heading = 0.0680600752021;
    msg.data.assign("WSQVBTGTMJKCQVDZBWWYIXWIXOQGNOPNFJEEQKTNBLRMUGBFYRJITUXFAVJZAIEPTPIOZSDUBIHBELVNFSNBDVPR");

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
    msg.setTimeStamp(0.0743350031536);
    msg.setSource(975U);
    msg.setSourceEntity(133U);
    msg.setDestination(59308U);
    msg.setDestinationEntity(83U);
    msg.id.assign("KJDGEDALUBSUIZGMOXVIMRONKZJLZPNXRQVDGZJAEDWEQPZBSIPSLTJ");

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
    msg.setTimeStamp(0.737679426866);
    msg.setSource(3875U);
    msg.setSourceEntity(58U);
    msg.setDestination(44446U);
    msg.setDestinationEntity(110U);
    msg.id.assign("XURDAQGTFJESCBJYLHKILWHQSSDQIRGYBRYQRSXILEMLEWWFFTVOWZDXAOO");

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
    msg.setTimeStamp(0.525399877366);
    msg.setSource(20846U);
    msg.setSourceEntity(112U);
    msg.setDestination(54206U);
    msg.setDestinationEntity(165U);
    msg.id.assign("YMQOHDAKABIEDSDWNSEAWLUQGLNJYWKRQYOXHCZGRUWPAMZXDLNTUROHVGUJFCJPVBRKTCXPBCWDPZBOALSUZFQFMBICJBLSKEGJNXBFPVVTYQQISAMCITWCFHZBRWRNJLRPNOZTOIHQZLSYVDGZMHKFTNRLEXVFLGFODHTROKEGXELTBFNJAKYEGQIPPIHGHYIOXSKHCXUJKVDVP");

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
    msg.setTimeStamp(0.29273310194);
    msg.setSource(26150U);
    msg.setSourceEntity(79U);
    msg.setDestination(27551U);
    msg.setDestinationEntity(124U);
    msg.id.assign("INKWQGKRRZGZZUVQEHYOLMOOCXYPPLOBWTJBYXKVYVHAGSAADQEJGENEBAUPLIUYGTXXPSHAFOXVMSTGYRMLMLKQQCQDFKUIJHTNBFZMQWPDTCAHVEBXNBJOXFMRKFMMSXNWFDCCIDEPQOACSHQCSHHJYATDWEUODVRAGZRZQREIIIPNGGIRHBBKFTWCLNXYIKTLOZIFASLNGPT");
    msg.feature_type = 118U;
    msg.rgb_red = 139U;
    msg.rgb_green = 38U;
    msg.rgb_blue = 204U;

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
    msg.setTimeStamp(0.304275151224);
    msg.setSource(30410U);
    msg.setSourceEntity(60U);
    msg.setDestination(26049U);
    msg.setDestinationEntity(28U);
    msg.id.assign("BFRKHJQDATEZMTVAOLEHAJQFBZVZXSUULYJOBJDTMOMFHQXJAHDCHYZCIDTUMFJGKWEJOEFCWTPWFYCWVQDPHUCOSEEKXKIXYHGBNLOVQBNVPTTWNIDRBMKAZOLPQWDGFYZCAISLIMLORYXIWIBMNMGKACGGMWXHKPZTGFVMRXDFNRUUCIGQTYXBRQSCPSBGSZREXSFUUVNSVYKNQSEVJOULJLYWRPLUWTCDQZRYAKRESDPZAL");
    msg.feature_type = 56U;
    msg.rgb_red = 158U;
    msg.rgb_green = 157U;
    msg.rgb_blue = 6U;

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
    msg.setTimeStamp(0.74148829124);
    msg.setSource(25699U);
    msg.setSourceEntity(113U);
    msg.setDestination(6913U);
    msg.setDestinationEntity(94U);
    msg.id.assign("ATMYELLCQLBTOINYIJZTEWVLXCXKRBUACGDDYUHGQVKRHGMLTXKMPPNNJPLFFRNJVXIGUVCBATHQYDPMODHZQYSHPGOSANMWFFZXZSFVYAHREIJLEXQTJOJETBUDBSBDTWWKRQCICAK");
    msg.feature_type = 121U;
    msg.rgb_red = 249U;
    msg.rgb_green = 249U;
    msg.rgb_blue = 213U;

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
    msg.setTimeStamp(0.215139286667);
    msg.setSource(42420U);
    msg.setSourceEntity(151U);
    msg.setDestination(65263U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.287177731997;
    msg.lon = 0.478131769383;
    msg.alt = 0.574155135022;

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
    msg.setTimeStamp(0.181447790278);
    msg.setSource(4633U);
    msg.setSourceEntity(241U);
    msg.setDestination(50941U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.79301402412;
    msg.lon = 0.832002806777;
    msg.alt = 0.654509241676;

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
    msg.setTimeStamp(0.988222574011);
    msg.setSource(61738U);
    msg.setSourceEntity(185U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.299364899747;
    msg.lon = 0.951512355055;
    msg.alt = 0.364330479245;

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
    msg.setTimeStamp(0.201193965304);
    msg.setSource(4448U);
    msg.setSourceEntity(223U);
    msg.setDestination(27560U);
    msg.setDestinationEntity(254U);
    msg.type = 209U;
    msg.id.assign("YAPKBRQKLAMKQNIBOHWMHTAJWCGHFWBJREFXRACQHRPHQHZOGOTQEHDEMNGOKFTCNJZJCZQITJUKYAEGWCEXYFXUYRZBBSPZEYXDNMVVLDR");
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("QELFVTUIWPJSJMXBTNGFVHKMFZNHUEMSUYWQZFWZSQYDLEJEKSNNSVZOFIBDDOJICMOBGOBPMGPYPXTAGXVTLNHKJPOUHTKKISUNHJSTG");
    tmp_msg_0.rssi = 0.900253811743;
    tmp_msg_0.integrity = 27041U;
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
    msg.setTimeStamp(0.57502243647);
    msg.setSource(35412U);
    msg.setSourceEntity(241U);
    msg.setDestination(50816U);
    msg.setDestinationEntity(198U);
    msg.type = 238U;
    msg.id.assign("FZLCMZSDWGOUOPCNAKOXVXSNTYUBGINFLDPFD");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.361635254151;
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
    msg.setTimeStamp(0.448983306984);
    msg.setSource(57593U);
    msg.setSourceEntity(24U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(188U);
    msg.type = 19U;
    msg.id.assign("WZZNDLITBXMXTQQOPKEDZEHBLFGVVFEEZWBRYEYFUCUFHMAYXGSYJNDSIAWLCKMRVKBIPTQMUGJJIODKIGWSEJBYMRGPTBGHZJKANHEWGPWXLAQPCVKPIQZGDUNGHSOPAETNRSHVS");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3522322589U;
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
    msg.setTimeStamp(0.798465743314);
    msg.setSource(60700U);
    msg.setSourceEntity(125U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("PSPIIWAGAOJCYZUGCXBHQPFWCGJMLOKTZXXKULHUMMWECCGTNXXYCVQFV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JTLBENEQSBYSXEAPVWRFCIURAOAVVMOFFYAJTNZBTFOAZVXRRHTYMAAPCZECRFQPPYOANOEVKDURJISQJCVEEUUJQBSKGDYDDYOKMCHDNTQEUPFIWMJHVXCXKOYFCLHBSGDFZUKPIQZRVLWVTIBWSZNDIHBLULUQJZHEKWIQQKGATDNTYBCMFONJQNTKUSSGIOLGEWKZDCLKGPJLMWGXJUGIHSOHFIWHPDYGNXNRTSXRYHPL");
    tmp_msg_0.sys_type = 244U;
    tmp_msg_0.owner = 10112U;
    tmp_msg_0.lat = 0.919473848647;
    tmp_msg_0.lon = 0.498267755113;
    tmp_msg_0.height = 0.0569718011578;
    tmp_msg_0.services.assign("ZQYVPUYNPWGSOMDGYBKRXFAKHLOAFTKFYFEWCVFJHCLMVNQWUYGZKQOGOSTTQZCAKRMKJDO");
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
    msg.setTimeStamp(0.254859923447);
    msg.setSource(56614U);
    msg.setSourceEntity(118U);
    msg.setDestination(21423U);
    msg.setDestinationEntity(226U);
    msg.localname.assign("NNEOBWCUARUGMTCHRGXHKOQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JVJHMHBCAQBDZHHQPPIDPGITANBAQSXTLCEFPDZDNSTMZCAZWAFOSHIGNIJOSVFTCGMOBBKCJSMWLKLPRLVPNTAJXRVHYULZ");
    tmp_msg_0.sys_type = 224U;
    tmp_msg_0.owner = 31840U;
    tmp_msg_0.lat = 0.53581677323;
    tmp_msg_0.lon = 0.507628198449;
    tmp_msg_0.height = 0.519501715767;
    tmp_msg_0.services.assign("YHRRXXLPTZQGYSGPIGTVFOYABPQAOOMPMOAHHGTHWAIVW");
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
    msg.setTimeStamp(0.74886869779);
    msg.setSource(29710U);
    msg.setSourceEntity(155U);
    msg.setDestination(6899U);
    msg.setDestinationEntity(173U);
    msg.localname.assign("XYWUKLWYZHXUJMVNXXSGOUYLANZMSHWRHOIMUBRTPYCAFFIZWEGSESIJOQCDOGIPIBKTATAHLYBHZBWOSVFWGTUVTEVCJJNDKNORZEHKRABGCQPOCJDHBACJUMUFL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ECMKVBPIJJTQZGKFHTGTAGDSSWWYRMRAHSRMRMJSOEFWFIONEYVVYJXSMOLDXUWIZVXHZHHKYPLUTIGFCUBEKPJPRYVPICNQLAGXHZDCBHNOPDDCOHDJNLQSXJDOEKRWCFWZAIWYIUOHIKMKZVWZKTRZTQ");
    tmp_msg_0.sys_type = 220U;
    tmp_msg_0.owner = 37486U;
    tmp_msg_0.lat = 0.69674509781;
    tmp_msg_0.lon = 0.86098638825;
    tmp_msg_0.height = 0.534715178683;
    tmp_msg_0.services.assign("IPQLOHJWUJVQWDAUULMGMIKLFAKRFUZCZBXPUPTGGMQQBERSPRKFEXVERWBAMZPBJYVCJNCRTOAUQOBXGPMAIUTXYHTOTWISOPILOPJBNDBLXZIVLNNYZGSTYXVAUNGASLFXTFWVWMNSBSSLRWRFTJLIKEABJRUCXAHEHOOTQVHZIHSODCIHEJHSMKDMXDFCDYEVBKSCNWFVVEWGNRKLZKYCPZJQQZHYMGCIQDJRU");
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
    msg.setTimeStamp(0.420506963216);
    msg.setSource(21937U);
    msg.setSourceEntity(196U);
    msg.setDestination(22670U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("RBGHNFVQZNCFOHDRJDPGMQUOWZCCBESMJVJWLGJMCPKMEKLLIYPYNBNRRIOLSUMPNTNMZVGNWOXDIKTNAVTEBAZPWQAJROTSCLOXAQPHLRKFTXSJSOPSKDEUPDAMJUJKUGJOFVQVIXSKCQAXBIDHEEGAFRCRIYFHLEVTIHUUYEUTSZJLYIEODYPUVHTWNSSZBYBWYAWVVGYZWQUKFWDAKLNHTXXRFCHEBBBMZTALQGPZQDMFCZGWYXDX");
    msg.predicate.assign("XTIZNNWBPULZLEOREMQKAFDIIFDVWVLZNEHAZWNPFYHWOXMFANVVGIPEFNAEQNWSYRRUUMCHWXFIDQCTOAQPWGGDPVLTGSEQFFXHYMDKK");
    msg.attributes.assign("GEBDLLFRVQGDROODSVSFTUARYZXYCZRNTDEQKQTGJZEPSVOGWFXIQJEJCZLDSQYMHUKZKSEAHMTPXYYMPTSBCHBCVIWDQYPSHWUPJBLJYTRNNKOZUPHCAUMVILRPFBLDOJ");

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
    msg.setTimeStamp(0.0821326880154);
    msg.setSource(21952U);
    msg.setSourceEntity(184U);
    msg.setDestination(32161U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("VNJQEOWVBVWJXSJVYYRPECMNXEDJKEUHBPEPPMMJFPRNZYGKPMOHIDXZQWBVYTTQYDYOSVHZLAIZIASPBVDZPYDWSIJBCLMQUHVPEJTFOGYFWHHZOFKRALKDTUQDHFLQGGJMBBHCBJLNNHKZCSSYMMPTLKHAAQIEKRAOFCT");
    msg.predicate.assign("TIQCZXLPLXNLIBRAEZIDPPBFNPXSMKIEDHYXHNIWRHCPDLNPGKJZFMNZAJUALSSUVWSEBKFQRAOGAFRILFBLUDPKFHWJYOLGYYGB");
    msg.attributes.assign("HNKBEROXMVXNBSBAAAXWBQVKJLZJNDSJMWSZGPPFPIWDYNZLQJAGOUIWBETHFZYTDBXLUYDOGQUECCIOSZVWTGOSQBFHRMMCMGLHUKEVPTNDJYZKXEGTAHJPQZNWSEOFMAUPLOIFIFIUSTUQASYZVVYDSIKELHCBKNPWVTMCRRUEOMZALERYFRDIRBRQNAHCOMKYDKQXWUJAKXPJGVXJNFLQSXVTBKPTDTUHCGRY");

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
    msg.setTimeStamp(0.359464789032);
    msg.setSource(14164U);
    msg.setSourceEntity(114U);
    msg.setDestination(6708U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("OMHIHIXLGZWJXEQKLDIKUUASYMGTBRQIJTMZOFJIYHNUAYJJSIPAOYJWWBUFDMZTCWQPIZAOIOGBUWTVCZKWSXPREZFLNQFNASQHYAQJSZFOCMLAUWNMOKVDVBTCWIFVSDRTMELLKADGETQWSSLKOMXFQVDCRPUURNEKHDJPLEOVRKUNOGGXBAYYPKBDECGSVRXBVLHDELYNGUSPIEFFNPBQNEXQRZZG");
    msg.predicate.assign("TTGAPOHAFANEIGEQWXMOZSJEDCOGZAENUQSBQVVRWPDGSXHMFFIHOLSTOSLRFNHERMCSQCRPQKFBWATUBFVWPCKSDDABXOJVXYYIGBJHZMYXIVGKOMQETQHJPFKCWCRRSKDNYAZDHBNLUMNCMTBQIWALUZVMYKNKNJYYJRGJVUDSYCZFDLFMVTBKUUPVZCGVZIIJTI");
    msg.attributes.assign("NQDUJMLGFUFEMBNFPEXWYSOCDSNAFYMHHHLQVQIALNTGFIYITBLMPONITOVPGVBLZSGWPABCDUHLTXIEMQFCLJBPDSIOXWJNVRIKMKZPRSLBBTUAJKKJTRZLXRTRCDRGHRDOBYQZ");

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
    msg.setTimeStamp(0.543781235177);
    msg.setSource(30106U);
    msg.setSourceEntity(143U);
    msg.setDestination(55857U);
    msg.setDestinationEntity(210U);
    msg.command = 200U;
    msg.goal_id.assign("BWVVFMIHFANXRMTZHQWZMTQKVFZCSGAHOMTDWIPUYGTWEFCGULCLCCPEPTIXI");
    msg.goal_xml.assign("TPISQXCUOXHEKNSDKQWLHHIAOUBTUZJYPBDUPOBHVGWLVHXDEIVXPAJMHHRHCOFNNNLFDCFWYRZZDPQPLKPWOREUXZSTMNEIYCORWIXRPMOPQSCJYCMXWAYABJVILYQMKQFDZLVUJFVVQJCBRVHKNGASDJFNOBUWUMI");

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
    msg.setTimeStamp(0.54222093086);
    msg.setSource(816U);
    msg.setSourceEntity(178U);
    msg.setDestination(30260U);
    msg.setDestinationEntity(65U);
    msg.command = 22U;
    msg.goal_id.assign("PMWAFYUPONNGYTH");
    msg.goal_xml.assign("BMWMDIATNZUOCRNKTOPIUUYOFIIEWSBNQXDADYXPPZSAZSVZKREKLXTPLLRCVDPDUHGKORRMSXNLIBLBRJKGOGVKQPQPOSGIZJZRWFLMZYGJPYJSJUOQMACWTTYESAERJQNPYXSBGMAAKTJKNZWMPHSHWALZHUXFWLLYNEODQHDTGSOCCBUDVBDFFOAQMITAIDXHWCKQVEBFVGHFWCJUEGFYCEJNFCGMVBEHXHNEIVHQT");

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
    msg.setTimeStamp(0.628800755827);
    msg.setSource(35888U);
    msg.setSourceEntity(103U);
    msg.setDestination(11207U);
    msg.setDestinationEntity(85U);
    msg.command = 134U;
    msg.goal_id.assign("GIFGGZYKDYYCYRPNRLZIRYNCTAOQWLOKMVUYNWUORAJDRIXRDEJNSGUFIQVMWXITWHBEDAPOMNBHQTWOBNFDECLJZUFNOXYABKGEJQBRMSMQJSWMAOBELEQGCKKZUTMBPDNHLTATYUERKJF");
    msg.goal_xml.assign("WXDQBMAKCTUWEKPPHZFUJGHOLSDOINRMHOCILGBPPTZIVYLAMCEDXEKNUTFXGASWFBPFERRDROUZMTHAKAYYLFSWUVYQYMGJSEDWLNJJPRXXPGVWFERFZTUSYEQYZCCIVVEKQMVCUGOSMLIIZATYXQWRSFKEZZKXJBNUNGHHAIBHSQBVPWJAAICGIGRVQGODLUAFQXYXMCOJTJTDOQRCKOBXPDLLNSHYNZNBFSRHHJQ");

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
    msg.setTimeStamp(0.90423398681);
    msg.setSource(40313U);
    msg.setSourceEntity(203U);
    msg.setDestination(35912U);
    msg.setDestinationEntity(117U);
    msg.op = 243U;
    msg.goal_id.assign("LXBNNIXLGOETXYSHYDJKPQCMDMBUWTQEVTAWCQXMELOKWABUSUPHFFQKBZRRGXDBGEIUFTPWXYLVGJXBTHOTMMHYNAFHGHJSHSANOYUQLJANYRRTRCJSSYYEPINJNDRJTVBOIUYDFVCKTFKWOAJNAVZZBPEIMZPWOWVMDVZXXIROWTLBPZYDDQGFLUXZLVE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XSDBLFZUPICCYDYTFFDXLKYWMCTBQFZVBJISOYJSMMYLJWNCGGSFAMREXXQTSIPADBLXQKZYWRRDHPEWBDKUTIUQHWFKQIZJNVHWOXHNJOHUYRFIDNXBPPTRXGMALEGQHFDBTEGZGURCMPKQCYHRYPDOIVAWMIQSBMOAKAHESSPZQZVCOWUOYNSWLCCRQA");
    tmp_msg_0.predicate.assign("SNCVSYHVBWTNOKWFKLQFIMSUUVBYHGIECZBPVJAWKDIHGEJPVDBRUCIGIEJDSSJRXFBZHRCQZACQWYWGYMZQBLUOFAQEMFBNXUJOZLAEGYQAHGRENMWWTONZLOJNZTFXXITZMVTNHOPAXTICMTAZHAJLPNDPZJOXEEQCNBOKGUTKQGENQYUVCKDMFUBKVRAKTGPSLYWCOWGLXOEYLDRFMHYPLIW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TFDMSSQMCVXDYYPGJSUPMVMWLEAAGUEDDWOBBUXVRFPBANVNXVSG");
    tmp_tmp_msg_0_0.attr_type = 30U;
    tmp_tmp_msg_0_0.min.assign("IBCYAICHZNSXSFSTWKCYFJZMFOFCTNCLAXGZGLYZGEKDJJDQWHTVUVEXLDPBZBIMVOWOUDZJEPAJH");
    tmp_tmp_msg_0_0.max.assign("WMZZZRYUXTXUOOXFYQBBVURHKQZJC");
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
    msg.setTimeStamp(0.996391496392);
    msg.setSource(44381U);
    msg.setSourceEntity(81U);
    msg.setDestination(4642U);
    msg.setDestinationEntity(215U);
    msg.op = 23U;
    msg.goal_id.assign("ALDJELSDIWXRITGAIILFLOJGKQZWGKQOQFKTTJACDUGZCMIBOQNZBWXCSCNUVYQXEP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VMMKQHOGHWBLUSKLTQCUPQMXOIHEZPFWTYKVUQACJRZPYPAWWOKOVJNIBIFOTCIZCNGBJWXFDXMRGNGTFVXREBQAUMUVUCQYTLIHRRRBIXVMDSJGAQDKFNSHXJJIOLTHXZPYVVTGODTXDRLDYKLXMW");
    tmp_msg_0.predicate.assign("SUMEQXXQTCFRKDJBKTJPOZAXBGRXMVPXNBIPXNVMDOHRUAGNNZYDYCQADMXFRZJQAUPNTOLRMELXQSTCNJWHFVOQYCHJCLUINUVANSVIZJUNIQFGOWWFGWJOHGCTOKKTGPJRMLALCWRYVHHYIMBILKJFFSDGBICEWIBORVCMQEDNLSEPWSKTGYHUAGDPBFKTZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KPAMZYLFYPDFDPNEMLECUWFHPGEGNFXMFWSIUOMVMZNXRJJJVAOQHPXNKLTMALZVDQSSKIGEGSTGNWCOHAUZMZMNUZSVVYYXLTRBBKKWOIPRVJZNFOCQOHMRBGPECAXKUWIYYQVQQGCDLPVCHOVGOSZWAHKSBQJTXCHQTJQRRNWBR");
    tmp_tmp_msg_0_0.attr_type = 238U;
    tmp_tmp_msg_0_0.min.assign("SCXRCAQSJABLUHANJWYXKFFOWGAXVUKELVKI");
    tmp_tmp_msg_0_0.max.assign("EAAVSKVHDNIGPUDPJOHRDOHBACRYMNUOCEOHOOWOGYRRYQZSAEUHAENCKPKZYFGNRRFTUJUMUMHIGQWRCKHJLRDXBLZMPBCQOBSXKYSSHWDMWFLUXCNYPTKTYYXVIFIFBZDQJGKADYVWIKTTXMWBEAOVNQXLJNUVZTIJO");
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
    msg.setTimeStamp(0.424865123076);
    msg.setSource(50317U);
    msg.setSourceEntity(24U);
    msg.setDestination(3992U);
    msg.setDestinationEntity(118U);
    msg.op = 236U;
    msg.goal_id.assign("OXUITDIIPAJYTXM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NYSRKEFFIIRIWQYNALFWYQGDUJPNGVPVJTSKGFBQUCQATBXXZAADGRXILCJNOIMEGAPKBCETHYMSQAKJEYMXTGEYASBCJXCRCHRPVWSDSJMMDLOPBKOWIHDJVOSQLVOFMSYMUKXWLVKSZNPJKAZLVLOXHDUZRPDUFTHJYKYDBZCCLRPJHFUIGW");
    tmp_msg_0.predicate.assign("NODFLFTLTFYHYLPPIDQACRUYLXKMSWAVEJFMMXKTUKHGISNCZEOMQUGAYIJQHBIDKXVRQVTONBZKLWWKZMGKGQQRGSSMHMRMVSBEVXSDOPJNVUYTWWNPNLQWTGCYB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RASOXSSNQNJXZIHPWGRWB");
    tmp_tmp_msg_0_0.attr_type = 198U;
    tmp_tmp_msg_0_0.min.assign("DYMMLEDPBJJHDHEOWGLTPJMFQIBQZOKSXKJFIQCSTACXBIBQRKTVYJEQEOHXVBZXMSYUIKMZCBRMQRPUOTNCPPJMTIXVNVUJGBDVNCNAIUCGIDOWJ");
    tmp_tmp_msg_0_0.max.assign("SJORNWTWSOJAWUJSIJOFTKOVGBBUBSNEBTQJEFUSCLMMMHORHIUNCHCPIPXWRNRYGUWVMZ");
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
    msg.setTimeStamp(0.286375769487);
    msg.setSource(1207U);
    msg.setSourceEntity(18U);
    msg.setDestination(38128U);
    msg.setDestinationEntity(237U);
    msg.name.assign("BFFWIENSDFQXBTRPTQYCHIVYZRSMGEHARFKYZNESHLLJVXTHOAJISSVJGUPEOXLVOZKJIXGMWDMQGRZJOJUCWEBGARFIQPNETBVTQELSIWG");
    msg.attr_type = 111U;
    msg.min.assign("SPUDLPMWMKOJGFXLDEQVCQEXCQPBPWSEQZYURIALFTQJDPGBSABUVVYWRRDNT");
    msg.max.assign("NMOTNTRQFUOHQMWFVLMCPJWXGOIIFZQVICAHXDVRBDPJNPORQUAKTCZEJXNIUYXOFGSYZJARTYMWBTPBGYZNPDZEAKTBNVQXWHKQQSJUSPUDBBDGIPXWGJEFDKKLLKWXGGJIDMNZQFAWRIMXLNRTVKEVPEBHOTRPLYSWOECVSCKYHWILNHAAYZJFSVMKPZUEICWZACLKMRUYJVQHCDAXGOUQSGMZBRDYBUTMCLHNBEHHFSOTJLRIUEYSCOEXL");

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
    msg.setTimeStamp(0.031206353307);
    msg.setSource(13829U);
    msg.setSourceEntity(202U);
    msg.setDestination(28099U);
    msg.setDestinationEntity(10U);
    msg.name.assign("GWQGQMKBSGJMJVJJBNPSAFIVUMEEBUDBGRLZOJTYCP");
    msg.attr_type = 76U;
    msg.min.assign("MIEVXNTXWLDUDBCKMGPWCNEQZLJRPKDZETSADECZKYBXHBBBTIDQGUABHJLGIIQGOVGNOVJSTFVQUEGNGIKCBXLBGMKOTWPSCTERNQBHKUYMUFLMXLLPUTIHTEKOPPMCAJFFHVOSZYIDISSUWPLJEAOFMXYYAWHKWJRWHLQZUOINHCBVGXCHRFRRPAZDSMTYSOUOKCFJJYXQZYWNPQMPJOMNNUADZYSRVAVZXDWEXAVFZARSDIKTRGRCEFFJV");
    msg.max.assign("OZFTANZZIFRSSWTWPCOBXYEYOGUPFUXSRZYQPGGJEKESDGHQAJJIMFOMOSAMQWQHMHAVKJMPDGXFBRBBMRWKWLQEPVDDHSHEJJPLRLAYPVIRIOKVTNYRLKDXLUMJBSR");

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
    msg.setTimeStamp(0.117540741067);
    msg.setSource(23098U);
    msg.setSourceEntity(181U);
    msg.setDestination(27572U);
    msg.setDestinationEntity(123U);
    msg.name.assign("ZUGTOHKRSJWKQRHVHDIMMLEOYWLIKKPQAAOPQXZFMAXZZMGOIUYSEVGNFVJESLMSDMYWLLHPMKEUXPBUBIHXCPGKWTTYRBCPFDUSAVU");
    msg.attr_type = 192U;
    msg.min.assign("BPAIHQEBVBG");
    msg.max.assign("FVDFHKVZHYNZBQEHREOHWWZDPFBZIDONDNCCMWXYGNDLAIWSEQVHCCGE");

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
    msg.setTimeStamp(0.963273571999);
    msg.setSource(64568U);
    msg.setSourceEntity(157U);
    msg.setDestination(4597U);
    msg.setDestinationEntity(194U);
    msg.timeline.assign("QXUDAVZINHEFLERBXLXIMPLZEWYDIADRSLUNVCGUYEMJHFO");
    msg.predicate.assign("IPOTXMTGKQHYZDWPAUHOIFNTXZIMBJILYRICCHQEXYSQAZEGUSLRFYLSOPREBHZEDIJLZGMAABPPPHIVOYWDVURHVKJKOVQRQVMBNJSRZSAFMQBWDJE");

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
    msg.setTimeStamp(0.543812489743);
    msg.setSource(9014U);
    msg.setSourceEntity(177U);
    msg.setDestination(7257U);
    msg.setDestinationEntity(39U);
    msg.timeline.assign("AIBFKWOXMZHAFHREYCTSBRMPYOBJIZLIPRMOJXHDBMSZWIVKSNTLBDXHCOSXVKSVGQDTFTTTXRALCVLNOYCQRBOAQRABUEOGTUDXGWDQWEMD");
    msg.predicate.assign("BEMOYJPYQDEDVZIH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TIOHNWYQJGYOOZGBIRRVCBQNFACFYXFWYJBPOJHMBLSNMYZBWUTBFZSRZRZRPCEDXXAEIIOVOBLDNMFVCYAMMTDIHUPHQTDSGHVZEWNFTQCKPSNFPGKFFWVOWNMHQXLTFICDUAQSZTPBROKAUCQYWLRETCMBXPKGAJVVRYUVMDSCPXEXGUWYWIEILLXRSPUIOBEDUYEZEKJONKTHRPG");
    tmp_msg_0.attr_type = 147U;
    tmp_msg_0.min.assign("XJUOCIAMPIZHKFJEFVTFFPUVBEMBSZYYHFRLTURXLQNWPSSVQPWJXAOHWIWTOHEBYPAQJTTBBQNPEDKN");
    tmp_msg_0.max.assign("VVZHLIDCQPUOJUCTTEZDVPSJEKDSBRACQIBHOTCVWGONLKDSNBBPHJAAFRYTIAWZDKTFMMTHJXODYWNJEWOSHNPPBJMKMRMIIMXTZNEMMXLSXUYQSGHCEOMUYABDSFJFRZEAPKHSQGTNOIKERUTFWDFOGPUASOBZVQXZKQDBI");
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
    msg.setTimeStamp(0.425945222892);
    msg.setSource(21443U);
    msg.setSourceEntity(245U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("EOFCCYMXPCDCQKWZUFOKVPDLHJOKRGZYLPLIJIHHFZUGSKJZIQYSPHORLABWACRAQNIAVUXSTETVAXNUIAPVYNOSYSMRVSGTYLEQMEZKLRJNCYKYNNMZBBEGBLJVBRMWXNPKHVRAIPJGHCWQTNTWPFEUJTXZVCMHJTMWIOXZXTADFQTFNUTGV");
    msg.predicate.assign("MESDZNLQTNRWGHKSOFCLCPREZPNULFMFOESPXCCTEBNLBYBDBXXSBXGIKJBAHZQHJKJJVXBRHPUKZYLUALTAWBICXQNZRNHQEJSICUYKTYHTMSVYARWFKQPJOOLEDAPJBTRUTWXSMDNFYVHFQIIZKLZRMVDJSFDUOMQUXOXIAPAUEYGKVCCBQFAGUNIWMVGGOTOVINASDSJWOZ");

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
    msg.setTimeStamp(0.0275777431627);
    msg.setSource(40302U);
    msg.setSourceEntity(113U);
    msg.setDestination(28971U);
    msg.setDestinationEntity(216U);
    msg.reactor.assign("AOSDNOTGAPCUTAZISIV");

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
    msg.setTimeStamp(0.22226652952);
    msg.setSource(4092U);
    msg.setSourceEntity(171U);
    msg.setDestination(9976U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("DESHQQZWXCFVEMPUKUKCVKCYFOUGYEYDGFILLZPFXJJKVTTWOONRMQCLHQYETAAOWBYGZVONKWGJSRQEAKGHRTXRPHVKSRPCLZNXZTTGIAXMZLAZMBFKJHWPOJAXZTMSBSSEUALDDMPFRICBVQLLUHWVRIFJJGZCGDDQKHBBIYFGIXSUNWNUNUILYCXCPQWTGNMIODWTRIHQDOSNZNQJVTAFYBX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SGGKHCYVVCKGTHMPFNEXMAVNQVCFPJRWYEPTWARMITIUCRLSBDDOXZCJNOYIUAHNSXIZZQUBUIGDBYZLUANKZUFYQSEMOGMFMGJEOXKOOSXQDKEPCHXNGDPTHOHDAKZEWSHMVRWXCDPAEDQXXJRRYNZAPIROIJRTHOTLNSZL");
    tmp_msg_0.predicate.assign("BXLBKEEMZBZHVRHWFIILZVARPRASYATTXCPSPISAQUWURMUKWJWCQOQQNSSRBJGLCGVJTCVOLDGNAKNZJCMQPIOJFMOYJWTAORTFIBXGYBRAJWVPENIWRZYAFHXEBOPUXHQH");
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
    msg.setTimeStamp(0.0478537791411);
    msg.setSource(42200U);
    msg.setSourceEntity(149U);
    msg.setDestination(32254U);
    msg.setDestinationEntity(140U);
    msg.reactor.assign("GADXGVKXZFBIPHLMSXPLEWSYDKYUQFVRIRGVFRGRZLYQGJXPGPQUGFEAPMNJYTOQUOWFRTEWKSDNHQSCVMFCGLJHJBXLDFIWDMJAXHDSQVEDXUPNZIZOOHUIBSUKCNSIBYETIFGNVTZKOUYCVFEBZYFVHZVNBLKAQATZMHEJYMBTOWWORJCU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SKJRRGFXPQIGPIEGBNIPYEZKMWZLRYJNBYWNGZFZYBUVPUIPEJZCQTGETJTMMTYHGMLCUSBFTAUVIJUADJPVLTWDSEUCCFIEVDEFQRHYGODKMSJOQXQLDSLLQARXSVCIXRZZGQTNMHOBEMXOHGNVQTIARUKKW");
    tmp_msg_0.predicate.assign("JFYAZAQVLHPRDJQKRLYKTCCWUFBNTMXKGQVUIPTNJGMWWTSEHBESAIOPLSRWGSRNQBMGKWTIOOJVZNGPRLYXPSOZH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BHHIOMQKBQOWNYCRBQTGUMDCKOGDGETAXIIGUJDVKVGSNRCXEMGEETXPNUZLVPSQKQBPPSKYNYULMBYJXPWVYTNEDNIKOAYGPFFURNWTTABCHRZPAWHUTBYOQRICRUXCEKTQHFHSMAZRDXIUWVZDLKEZFIFUAOBVXKFHJNJNTFIVVCEWNHXBWAJSIJLMGAJFGPSZHALECGDSLEQRXUDOLYMJMFSDJKFZLYZVCBXILQ");
    tmp_tmp_msg_0_0.attr_type = 49U;
    tmp_tmp_msg_0_0.min.assign("NRTSBWCLDPUSNEAABBVOONWFUICASKOJIGTZPEWEQASPXIFKLGQOZK");
    tmp_tmp_msg_0_0.max.assign("LIMXTWDRDKUGADQOIVUWPGLZXIQHWUDXYESRCCVOWAIEFJQBZAEHGKMLMOGOJRTXKIFPBNHJKLVWYXNNNNXCDBALTCVGZLHYOUNTJXTMVVLWCWNKOBXCEJJVJWFE");
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
    msg.setTimeStamp(0.0621413812189);
    msg.setSource(54369U);
    msg.setSourceEntity(243U);
    msg.setDestination(13106U);
    msg.setDestinationEntity(64U);
    msg.topic.assign("DCACPRSKKSISOURZNJUAUMMOTZQGINOLJCDODESCYRKYHSCVEHVZTVUHBXHMMTSNTZWXWGAKQYBPLIAUYBYXPYIGDTIGLBAEHUSTXUOYTAXFUOWWZZPVJHAWEMBRDVMFJSNRGCYNFEEXJTQLTFAEJSCUMPICEOVXIRGRIDYHHVXBBVMTWWQLBPAHFWXBZZCLINHDOZNJJSLZMGKKWKQFFLXRCAF");
    msg.data.assign("SOQFIOLVUDFDSHZYEPEHGRCZCCGTXOBJVGKNQWMAAITXQIIRKFLIKJFUNLHLWPXTDICMMXSGQWRENEVRUJMB");

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
    msg.setTimeStamp(0.0241098424333);
    msg.setSource(26409U);
    msg.setSourceEntity(100U);
    msg.setDestination(24819U);
    msg.setDestinationEntity(195U);
    msg.topic.assign("URVPMLHZPQOIPYLFFXGOWIPNR");
    msg.data.assign("UUKZRLUMJACAHDDCYGFMOWFSBXZOJVWTWGZYDYMSLESCMGJJXVNPOEEKXULYLUVV");

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
    msg.setTimeStamp(0.775826295848);
    msg.setSource(15318U);
    msg.setSourceEntity(203U);
    msg.setDestination(826U);
    msg.setDestinationEntity(195U);
    msg.topic.assign("FFGMWHLTGUEEPDDHLWMUABPXROUEWHPBRJRSDIQPUADOXZVHNAOFASKFRASTUSGANJMILMXXFBADQMJVFCWEGTUZXHJYNHINDPIQJWIYKVWQNLLUXFPZKPTTJKTBUCFLXQWDEWAYOOVTBHIOMKBPLYYBKJGEGYSQAMHUELVNXVDYLFYMLOFMJRTZQWUSCEZRIZGSQJCVVDZBVSZKENCIXKJCRRGCZCIPONDZTONHQPBBXHV");
    msg.data.assign("XOKDNBGOVBWUEFVAOTRJRVPIVGMMAKPLEUEVKVGXOIEHUABFRKEMUTHZJSQKCSXNHFGHIXNZBDSBOQVUKNBTTBGUWZAOGLAOTMVEFZZRSAWWQZXIATCRZUKMYICFGCDONCSPEFDQLSGWCGJDTMYPMLWSXFTACXWPHNYSOZRQVXAQEHFBJLYVPMJDJUDHRYMBYSINHZQUIXLQHBJXEFDCUNWZN");

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
    IMC::DockingState msg;
    msg.setTimeStamp(0.459602120697);
    msg.setSource(44588U);
    msg.setSourceEntity(111U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(224U);
    msg.sys_name.assign("OQOQYJEMJEYDNZAEAIYNQZOHCOSXTGLTADOQZDHLSVQHNPGSIZILTEIVZDNRBTHVMWYBVLDYRUKGLFENHTSPSPHKDTXMDZVITJONPPPOVNGAQUFIUJFZSOYCGXNAGQBGGJCRMXWKUNBWXYULTTNFCFCWBCVWKPVAMLJXLTWPGKZVRCOXEKXHSIDGK");
    msg.state = 147U;
    msg.availability = 184U;
    msg.vehiclefunction = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingState msg;
    msg.setTimeStamp(0.408428769175);
    msg.setSource(31987U);
    msg.setSourceEntity(18U);
    msg.setDestination(1903U);
    msg.setDestinationEntity(147U);
    msg.sys_name.assign("DXHMSQSZOTGLLDEPSIOOYXWORBZKVLUIHMZYWLNNBCOXZUCXGDFAJGBGAYMHXCMIQKHBVJOWWDVKOOWIKMGEKTAHQIRUJKRLJNEWPJLNIIDQBAGQJCYRDVGDPCYKMDSXFVYFMUZZFTGPXUWCFSKHWEQFJTRXVFUBQETNRCKTSYHLUUFBTEZMNSCHRAFBUPGXNENBAEIWLOILXHZNRUYFRPYAVQTHE");
    msg.state = 61U;
    msg.availability = 47U;
    msg.vehiclefunction = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingState msg;
    msg.setTimeStamp(0.674350979007);
    msg.setSource(55510U);
    msg.setSourceEntity(253U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("HBXLNXFHTJHPWQZIJRCXIBHLUXYSTGGDWUQEEEPFZBKJSDNJNJTOQGDNIKRQHPXVAENYOZCEALGIDBNXNSHVWBKKNHWWGRCUMFRWJSFGIEULSBNFVZUIDHLGJSKRRICJYMITZOLWPTMMQMBDZDLKVWQCUYOCODEGTDPDSEVFJYLXOCBVXPAMQYRNYLACFHMAAOT");
    msg.state = 112U;
    msg.availability = 11U;
    msg.vehiclefunction = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.794989551408);
    msg.setSource(55904U);
    msg.setSourceEntity(192U);
    msg.setDestination(62019U);
    msg.setDestinationEntity(247U);
    msg.frameid = 87U;
    const char tmp_msg_0[] = {-84, -6, 124, 103, 63, 28, -38, -30, 62, -101, -3, -28, 112, 36, -35, 32, -41, 105, -40, 108, 94, -40, 76, -112};
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
    msg.setTimeStamp(0.429217428573);
    msg.setSource(27765U);
    msg.setSourceEntity(198U);
    msg.setDestination(41513U);
    msg.setDestinationEntity(167U);
    msg.frameid = 131U;
    const char tmp_msg_0[] = {-4, 114, 15, 59, 87, -10, 17, -75, -53, 99, -8, -104, -24, 110, 70, -94, -85, 87, 122, 60, -70, 50, 105, -37, -13, -105, 115, -21, -101, -47, -67, 3, -81, -75, 63, -100, -123, -71, 78, 95, -125, -40, 68, 105, -91, 74, -36, 107, 29, -9, -127, -9, -101, -29, -116, 98, 10, -126, -9, -68, 121, 84, -44, 103, -8, 85, -98, -98, 22, -91, -98, 115, 85, 11, 50, -108, 23, 109, -74, -68, 50, 73, 110, -24, 0, -83, -97, 13, -29, 107, 108, -60, 101, -99, 52, -101, -56, 111, -54, -106, -70, 111, -42, -127, 114, -62, -77, -107, 44, 104, -10, -111, -123, -71, -79, -42, -125, -61, 44, -57, 43, -66, -75, 45, -4, -58, -38, -80, -111, -68, -72, 113, 91, -17, 86, 77, -93, -90, 111, 68, 33, 12, -53, 39, 73, -17, 96, -101, -29, -117, 63, 78, 92, -24, 28, -14, -26, 34, -65, 118, 108, -13, -85, -103, -69, 3, 87, -122, 93, -36, -39, -106, 16, -17, -80, 49, -85, -80, -127, 108, 66, -53, -75, -117, -11, 61, 111, -101, -87, -56, 104, 97, -49, 65, -124, -108, -77, -48, -58, -45, 90, -62, 109, -45, 26, -54, 43, 55, -61, -115, -13, -120, -50, -7, -37, -112, -101};
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
    msg.setTimeStamp(0.424262348978);
    msg.setSource(28622U);
    msg.setSourceEntity(72U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(175U);
    msg.frameid = 131U;
    const char tmp_msg_0[] = {61, 27, 50, 8, 97, -108, -95, -6, -24, 81, -77, -68, 33, 96, 108, 75, -99, -25, -40, 107, -41, 19, -78, -62, -49, 73, 54, -92, -26, -8, 16, -77, 61, 97, -128, 93, 99, 50, 65, -19, 50, 111, -27, -125, -110, -39, -33, 98, 125, -49, -29, -70, -66, 23, 10, -58, -106, 10, -55, -93, 110, -52, -37, -88, 0, -98, 75, -21, -56, 48, -120, -121, 98, 81, 43, 67, -76, -108, 45, 38, -27, -20, -118, -128, 92, 40, -59, 98, 63, -64, 88, 102, -88, 19, -72, 64, 52, -83, 74, -39, -83, -16, 91, -72, 23, -108, 53, 98, 83, 33, 54, -73, 51, 36, 38, 29, -104, 72, -35, -83, -116, -56, -55, -115};
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
    msg.setTimeStamp(0.523623052278);
    msg.setSource(36338U);
    msg.setSourceEntity(254U);
    msg.setDestination(38679U);
    msg.setDestinationEntity(170U);
    msg.fps = 153U;
    msg.quality = 98U;
    msg.reps = 75U;
    msg.tsize = 14U;

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
    msg.setTimeStamp(0.206701958303);
    msg.setSource(42996U);
    msg.setSourceEntity(5U);
    msg.setDestination(64698U);
    msg.setDestinationEntity(121U);
    msg.fps = 246U;
    msg.quality = 57U;
    msg.reps = 140U;
    msg.tsize = 243U;

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
    msg.setTimeStamp(0.196250919255);
    msg.setSource(48543U);
    msg.setSourceEntity(182U);
    msg.setDestination(54483U);
    msg.setDestinationEntity(243U);
    msg.fps = 165U;
    msg.quality = 215U;
    msg.reps = 52U;
    msg.tsize = 179U;

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
    msg.setTimeStamp(0.555557762925);
    msg.setSource(62673U);
    msg.setSourceEntity(209U);
    msg.setDestination(47300U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.425177933875;
    msg.lon = 0.0474403443312;
    msg.depth = 223U;
    msg.speed = 0.326055803563;
    msg.psi = 0.819205581067;

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
    msg.setTimeStamp(0.562608712097);
    msg.setSource(4346U);
    msg.setSourceEntity(182U);
    msg.setDestination(33270U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.387844701983;
    msg.lon = 0.364581063861;
    msg.depth = 165U;
    msg.speed = 0.126535939928;
    msg.psi = 0.184420676429;

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
    msg.setTimeStamp(0.003268701277);
    msg.setSource(47703U);
    msg.setSourceEntity(54U);
    msg.setDestination(20256U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.101324222008;
    msg.lon = 0.0864405115262;
    msg.depth = 82U;
    msg.speed = 0.744974995969;
    msg.psi = 0.517405641788;

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
    msg.setTimeStamp(0.100694171336);
    msg.setSource(35181U);
    msg.setSourceEntity(195U);
    msg.setDestination(64758U);
    msg.setDestinationEntity(254U);
    msg.label.assign("UHGGMEXOBZSYVWPUFXISXJCQHTXHNCNSGYCARRKAJDBZPABCQMPIYUPRXCFQKNJTQJOPUBFYDUMSHLETMUZQWDKKIWCGHZBWKDKARMBYERIEGXIKSWAOVBJCCFRKTWMPUEHNQFPMGHZNLNNVJRXQWSVVAMGLFYLJNNSDEAVRBDZT");
    msg.lat = 0.873192605161;
    msg.lon = 0.213952625654;
    msg.z = 0.475321018354;
    msg.z_units = 67U;
    msg.cog = 0.492151020552;
    msg.sog = 0.591344815179;

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
    msg.setTimeStamp(0.3565919077);
    msg.setSource(26124U);
    msg.setSourceEntity(93U);
    msg.setDestination(27788U);
    msg.setDestinationEntity(181U);
    msg.label.assign("CTCASZCQCYPDXWCKBRGWWJLHQOOUPNDUAORBFNBMBFSQZSLQGXXMTUQJLTXHFHEOYBVBNTDNZYUHZEMNDRUDNNHGMBVPSLPHKCLWECKYNGMSLEIVKRYVLPBLJJZYIYUORTQIVFGVMKRTUSJEKCEXPPTEVAZPGIWXXIAGTLYQOWPSUXUBWGOGSKRZHWIVHJIASJRGQOUZLEADHVAMFKNJABZQRXR");
    msg.lat = 0.594456672969;
    msg.lon = 0.696496539595;
    msg.z = 0.560202234889;
    msg.z_units = 205U;
    msg.cog = 0.56104348797;
    msg.sog = 0.951280634406;

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
    msg.setTimeStamp(0.853880748331);
    msg.setSource(43738U);
    msg.setSourceEntity(78U);
    msg.setDestination(4215U);
    msg.setDestinationEntity(130U);
    msg.label.assign("KUSUXLDZPDPYIKIXBIVCTRWFYEWMXJTKQACFCGRQORXORJGYNYQNYGIUMMPDQLMGIJVHEFEGIQIARZWGCKMCYGOYEQXTLSARQHKDXZJLOABHHDVKQSZMAFBHBVXIBFIYDNLGXSJLUSUNE");
    msg.lat = 0.590494911295;
    msg.lon = 0.830066924376;
    msg.z = 0.388688040902;
    msg.z_units = 183U;
    msg.cog = 0.93399315233;
    msg.sog = 0.359467097202;

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
    msg.setTimeStamp(0.530840189613);
    msg.setSource(48638U);
    msg.setSourceEntity(231U);
    msg.setDestination(52084U);
    msg.setDestinationEntity(29U);
    msg.name.assign("DGMUCRBBGCDWGNVWDWGHKTFRMFKTRJMOPFBDSSEUXVXCKRQTWORIJQLLADSOBQYSJUBAOOOCHFJTXUXEVDKKKCSMFWHHYPNITTSSZHNQFXWTKXLIYEGLIYE");
    msg.value.assign("EFUVTCPMNNYNALUFXDIMFPZWBUHZIDUBZAGZNXYCIPYHTMPVCBDFEUSZDLPWQBPJSSULBKYLUUTU");

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
    msg.setTimeStamp(0.00183550218196);
    msg.setSource(32060U);
    msg.setSourceEntity(76U);
    msg.setDestination(52222U);
    msg.setDestinationEntity(186U);
    msg.name.assign("QVJRYULMTSWMKSNGCWZKILFRTNZUYHEEAAKNPXILBIXZOPKXAFXEZ");
    msg.value.assign("IIQASCVOYAODUQPWTTRZLNSMRQRUVNHOHEKGMRAP");

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
    msg.setTimeStamp(0.994336708201);
    msg.setSource(46923U);
    msg.setSourceEntity(138U);
    msg.setDestination(60431U);
    msg.setDestinationEntity(129U);
    msg.name.assign("JNCJEJGDQPLTHRKUTCECLZNOTEQFYHKFBVYTKBARGHDAPDSYQUWXFRBEAKISDGUORXFNLVEBKLBOPMNOZAFNPTAJPKCLNQOANWTVWVWMACZBCBIIMQIRNHNCWMMGWYVFZROHHNJDMXUXW");
    msg.value.assign("QCIETWITKLWXCYFMVVSCCWVBRIYEUBXZJAHDFGUONYXURPLFTPSQARYSKACOMDFSDNCAXBQCQLCBAHZBRYOMUGUGTZGVFEJPZSEFZBIGNLIUDGPQTHMJYTNNFOMSCWPGPIPXGUIQYGEMOXFWX");

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
    msg.setTimeStamp(0.314671639382);
    msg.setSource(17585U);
    msg.setSourceEntity(136U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(155U);
    msg.name.assign("SEEZBOYSYRP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JDEOKGQBNLWFVUGCUGURDADNUQIQXPWGVCIJIFQRRUMVXWBFUQVDEFE");
    tmp_msg_0.value.assign("DMAMAUHFSNEHEEJFHTOGUJJPHYMTPQZNJGZRTASUPUCQIZVASMJBAHDBMTGRJYPRANCCZGLQICFDBDBIHDFXADGWKYTTELLXVLCFKSQCHIIXDPNWMKBNVX");
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
    msg.setTimeStamp(0.567852569179);
    msg.setSource(14962U);
    msg.setSourceEntity(128U);
    msg.setDestination(57580U);
    msg.setDestinationEntity(178U);
    msg.name.assign("NNDVBZDFXFYWJEBQTFTGRRMEMDXDWEHNKQLXJSXZMIYDZOFGSTEJPGSTOEBZIWVCALKACULZKJQUDGPSTAQOCXAAFIXHBWIXTNOXVRUMHOTTYLYGIFOFQKUCHCQHWDWQURUCELSLTMHUVKOPSIOENGMGCJSMGYBTPIBNLRPQCDUCWBAEBFGZHHZLQZISFBJEPCNAZWSJROKMWS");

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
    msg.setTimeStamp(0.658762497423);
    msg.setSource(247U);
    msg.setSourceEntity(36U);
    msg.setDestination(39722U);
    msg.setDestinationEntity(225U);
    msg.name.assign("BLXDMZNDALTDFWJWLTTAWOEKQEQAQSYCVDITTAHLURQTEYHMOBFMSLWMJLYVURHQNYHPLJXZEPPCJGRNPCUVQCNBZZEGWUGEGWIZCSFGCLDKXUNVBXRWYPSIXAYGFOUPFAOEKPTGUAMC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HGPSIVQWUYVRVXZHUBWGVDYRWAEULGAQNXMHFRHNOYUIQFTGPCDNCDUFRXYUFTZTYBRZSGQHMXKNNZASLNWHTICKRJTASXHBFGDLQWCELGMXBLDSEITKAKZZVQCBSDQ");
    tmp_msg_0.value.assign("BVDXYQRWZSKIOQSSBPGHLJEKJZPWCROZAXCOFDTXYFZHOIHUOFKHLOWVNPBQMILDTUCATTAYYSMHGSQBOMGBOKDXFWJIDBQMHGJBXVTKLZREWIPAYUUVTRXTVLJFARCKYBJDTUGPNIAZZMBRRYDGPRWGQAIDHEQZJHNUQYKVELCPRE");
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
    msg.setTimeStamp(0.224637285901);
    msg.setSource(13220U);
    msg.setSourceEntity(207U);
    msg.setDestination(11321U);
    msg.setDestinationEntity(86U);
    msg.name.assign("WEPSIBUMDNPOEVTLMXMWZRGVESOJXZRCSRVHWFWYLNTNZJUKAGAZDROQMXIQVKPIYCYKOWLBKZTVGFQWZCRNDPWHRLDH");
    msg.visibility.assign("LOGFKKWJPZMLZDDQNDUPJXPNEX");
    msg.scope.assign("GYHESLPDXMAVDR");

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
    msg.setTimeStamp(0.197219302955);
    msg.setSource(39596U);
    msg.setSourceEntity(142U);
    msg.setDestination(36273U);
    msg.setDestinationEntity(55U);
    msg.name.assign("VGOIHNXSPOAFDATRXFYNWFKHFKYNSBWXBSALTBRZOSKVMMUSURGMKNZNOMKNVRH");
    msg.visibility.assign("BVIYLYJZWBLVUBPSWOHMXXWCMFGFOWXSBCPRUYRSRTHZTZALDIJHQRGEFCKFCCDJMHVVZWKQKESNJRZVXDJXZVSSXKPZCQVACJJXSFHNJUYZZIPTKPMPOXNGORLQFTEWULNLXAXOUOZHVRTGUEHKNTYMYEOBQGAPGEGLNQVCIBDJIOQPLBRQNYEPYDIB");
    msg.scope.assign("JZRHGYUDUDYGAPVSFTKYCBIAGZYRGOKHYLJEKTFWTICIZOIZSZKJAMQDUUMWKQBNWBHMUWPXUOJXOHJTHWRRZAQUQHEMZBSODXJNVZFMLXSIOCSHTZAJFLMWSVYBLABISUCSNXREAYKLKBWRTGRQWNEEBBDNIXEOOCSNVZYQDDHPVGHGCIPAWDGRUJCELCQFXLMGLFQVYJFPIKREANBKQTINCFPOLPMMFVXVFHTDPXKCGVJTTWELY");

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
    msg.setTimeStamp(0.139131902413);
    msg.setSource(43520U);
    msg.setSourceEntity(4U);
    msg.setDestination(52000U);
    msg.setDestinationEntity(217U);
    msg.name.assign("GVVLWFRYFICQOHYYOJKEINTUVSAKRLTAGTSIZWTXGFDARICJBZQMZNCEZOEVKBAOPDFOSOHJSEXXUYQWPZMNPDXYFCLMJCERCLXJFHSMQHVITMY");
    msg.visibility.assign("EERYHIUDCJKMVSFENKGVVRTQAFSYKAUOJOVMNETPDBPNOFOESYIRFHXJGMWAAHSQHIBHRLKBYXNQPGPNLVTAWFCLDZXOIULLJTKWUZTSZMMDZDRVDKWIZVTWYGAQXOFCRIRGJ");
    msg.scope.assign("TXLHWSNMXJLPLJISMPVPCCQMQFJQFSYKPCMVTDZKLJKSGZIORUGGOSSYEQGZXPYIYQAZKFHLVXFYEVOCATJIIRRREBRVPVJZHVRCYEKTNDBESCIWJFAMEDOLAUBNYYHFQODIAEHAXHUALMDDWOLSROPIIBAVXWOGBGADCWRSBQGXW");

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
    msg.setTimeStamp(0.635027982714);
    msg.setSource(57414U);
    msg.setSourceEntity(24U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(85U);
    msg.name.assign("AXWEIKGBWDDCFIKFULBFQNNYTAFOSRQUSLXMKYCRPODURCDIKMWLXJDQNPFHSZDGCWVHSCTZIFJYONNUVDCROGGBCIUBYOPWYXVAKYUTTOXBGZJHIJVBDBISEQCUQKATATHFGBPVJSZUXXXJHHTTPLYAENPRJIMLVJRSOEHU");

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
    msg.setTimeStamp(0.18443915217);
    msg.setSource(7738U);
    msg.setSourceEntity(129U);
    msg.setDestination(42834U);
    msg.setDestinationEntity(156U);
    msg.name.assign("KIRLIUKLYWJHBQZRHLPOEXRFFWIJRNYSQJBJKTXXCUKCIGJNEZYCRNXDUUECZQJVVFXDQYSGGMKFRYLSRIKXXUQUMMVPBAWNDVXMUSEYHUETOAAEQQNKBRDVBUGTIWLJSAHBSHFNNVCEIDMDOSZLCTPQONIMOWBLIQTX");

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
    msg.setTimeStamp(0.542462665398);
    msg.setSource(62186U);
    msg.setSourceEntity(202U);
    msg.setDestination(56595U);
    msg.setDestinationEntity(116U);
    msg.name.assign("OJYBZEDZDVQHDYRHSEUWRYKBQTVIRFXCCVKRVSNRDOMFBBADZQCUXUNFTEHIFDBXTUNIUAQLMVIUMPWMEPTTMJGNEOXIQLAOOIPOFWKSJWGJPZSPXDBJXQWBGSLRZFEWMIVFRZYSANEYDKRUVLPLTZCIHMSSORNAHMQGZEBPMJSGEOCUNCTUHPXCQKLPCVHFNLYJZGAGLW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DOKJHMEARHBYHEOASITVQPFODWEXHNSGYVGSWMVPCKPVSRLBYLVGSAQWCTWMCXVBETMGRYCHLDTSNFSMVZQSUUMVJZZRFWJJDDZBPETNBZIXKFQWHHXEOAGFLKRAOKZTKTQUFDFTZAVGZNQGABUBOPGOLWFNLYUJPEYLWM");
    tmp_msg_0.value.assign("GYQJGXFPJQOTOHOXLCLCWPVPDTVYGVBSSCYXWAVXCETDTXBBTOZKCKLSZVBYSRRPRTIFUTXYMGPRUGLHZJIKIIBSVFVOISQFAMZOMJSCPANJIAMDHVNEDFGDOFAQFTCDIUYZ");
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
    msg.setTimeStamp(0.0542848588301);
    msg.setSource(39744U);
    msg.setSourceEntity(62U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(237U);
    msg.name.assign("RCFUCNDXBTCYXOUDMOAOLLWGSEJVLFQTBCJNBKONGVHQSETMDNCTMHBPNYPKVWQUVCNGYRQHPTAFOIRJREJASYAUEHIVIMFHFSRUJYNXLXDQVDINJMJXKUEKSMGLZLKBOGDFLYXLIGAYAEZGUPKEGQYHNORCWSNPDPBYZEVIKWZISQTTRAJOZDPZIGKRJFOBKSEUWHTWWPUBLCT");

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
    msg.setTimeStamp(0.320376249184);
    msg.setSource(41999U);
    msg.setSourceEntity(111U);
    msg.setDestination(13666U);
    msg.setDestinationEntity(170U);
    msg.name.assign("PSNZQVOPEVWSBMTFVUIASWCQHKXRIUOOYCNLYZKXRFHBZBMQFDERPXOMTZZSEEQFLQYNPQCRYTWASMIGBOCBCQCOOZLBMGXNEWYJVVKIFMCRGGJZRZFHTHXDAYUSJYVDTCWTIJURKDENMPKNUPPPCIDBALT");

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
    msg.setTimeStamp(0.635247272461);
    msg.setSource(46849U);
    msg.setSourceEntity(57U);
    msg.setDestination(8904U);
    msg.setDestinationEntity(20U);
    msg.name.assign("FAEWIMBVGSUBXSQXLTROCNPSAEITWZFVFOATOIZVMJSKBRQFNQAFZXBVXIIJZ");

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
    msg.setTimeStamp(0.890428736286);
    msg.setSource(60463U);
    msg.setSourceEntity(167U);
    msg.setDestination(312U);
    msg.setDestinationEntity(119U);
    msg.timeout = 2439118376U;

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
    msg.setTimeStamp(0.103311651297);
    msg.setSource(50512U);
    msg.setSourceEntity(21U);
    msg.setDestination(3421U);
    msg.setDestinationEntity(93U);
    msg.timeout = 7161629U;

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
    msg.setTimeStamp(0.71453976191);
    msg.setSource(58796U);
    msg.setSourceEntity(21U);
    msg.setDestination(50300U);
    msg.setDestinationEntity(37U);
    msg.timeout = 99187036U;

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
    msg.setTimeStamp(0.13942124186);
    msg.setSource(32721U);
    msg.setSourceEntity(231U);
    msg.setDestination(20466U);
    msg.setDestinationEntity(96U);
    msg.sessid = 910246728U;

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
    msg.setTimeStamp(0.148591893304);
    msg.setSource(31347U);
    msg.setSourceEntity(95U);
    msg.setDestination(29169U);
    msg.setDestinationEntity(37U);
    msg.sessid = 1406924637U;

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
    msg.setTimeStamp(0.0528935854252);
    msg.setSource(25989U);
    msg.setSourceEntity(34U);
    msg.setDestination(1865U);
    msg.setDestinationEntity(182U);
    msg.sessid = 1758669896U;

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
    msg.setTimeStamp(0.497452179761);
    msg.setSource(63275U);
    msg.setSourceEntity(58U);
    msg.setDestination(22886U);
    msg.setDestinationEntity(23U);
    msg.sessid = 2055384951U;
    msg.messages.assign("ZVDTGDDGCEZINZFHKMVXWFNESOZPPKKEKPFVIVBQWAXETLDBUJL");

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
    msg.setTimeStamp(0.27688601249);
    msg.setSource(9513U);
    msg.setSourceEntity(17U);
    msg.setDestination(3936U);
    msg.setDestinationEntity(140U);
    msg.sessid = 2128563554U;
    msg.messages.assign("VZIUCNMVCYKICDMJSQFXAMPRAYOHTCGOANABFCKUNLPRCEZUKZ");

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
    msg.setTimeStamp(0.250994444265);
    msg.setSource(13213U);
    msg.setSourceEntity(211U);
    msg.setDestination(28641U);
    msg.setDestinationEntity(185U);
    msg.sessid = 803154098U;
    msg.messages.assign("VAOKESXGFSIFQTGSWIPICESXVHPMNDXDQNXXOMGLMLLZPDKGNOBMULKOKQJXYBRAPQEPNQADLACTBZYZKBNYRKMCYOZACGLL");

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
    msg.setTimeStamp(0.381675317011);
    msg.setSource(58288U);
    msg.setSourceEntity(129U);
    msg.setDestination(44215U);
    msg.setDestinationEntity(98U);
    msg.sessid = 1714957545U;

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
    msg.setTimeStamp(0.56367243151);
    msg.setSource(12228U);
    msg.setSourceEntity(113U);
    msg.setDestination(38282U);
    msg.setDestinationEntity(98U);
    msg.sessid = 1304292832U;

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
    msg.setTimeStamp(0.176637611781);
    msg.setSource(52758U);
    msg.setSourceEntity(161U);
    msg.setDestination(45165U);
    msg.setDestinationEntity(154U);
    msg.sessid = 3596990802U;

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
    msg.setTimeStamp(0.257315501126);
    msg.setSource(58757U);
    msg.setSourceEntity(47U);
    msg.setDestination(9392U);
    msg.setDestinationEntity(46U);
    msg.sessid = 2026057611U;
    msg.status = 175U;

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
    msg.setTimeStamp(0.719137504456);
    msg.setSource(3477U);
    msg.setSourceEntity(200U);
    msg.setDestination(23721U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2454071481U;
    msg.status = 27U;

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
    msg.setTimeStamp(0.798459514685);
    msg.setSource(44675U);
    msg.setSourceEntity(160U);
    msg.setDestination(35784U);
    msg.setDestinationEntity(166U);
    msg.sessid = 2752639313U;
    msg.status = 34U;

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
    msg.setTimeStamp(0.614889348508);
    msg.setSource(59963U);
    msg.setSourceEntity(228U);
    msg.setDestination(40160U);
    msg.setDestinationEntity(157U);
    msg.name.assign("GOFLOLFSDBTJSUWICYDPCGCVUBLPHDRGFVAQXNXZYUZCIXKSCTTNITFGXYDSEAZHWPGCKFQTRSQRMDQWZTXHYYLISGBTWUNYLIVVFBMYLKZRUWFKIHPMYRAWAQHBDAJPNZXMDBXPOKNOIKLPJGAQJMNJFOQEWBVTBQTUKRDWCILZNHMVRVRAMBSCQMNKKZEEGNMBSLVYOCWOJVHHRSUQTPIUODMCVGZHXOLGDEHROPIPXEANJSUFKE");

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
    msg.setTimeStamp(0.202460200333);
    msg.setSource(55933U);
    msg.setSourceEntity(150U);
    msg.setDestination(18383U);
    msg.setDestinationEntity(77U);
    msg.name.assign("TBYJSLKQXOSUHMHQDFLBVTXJOCEYBIAYQVEDZOKTBPAHCEDROEWNMNXUAXCDVBAEGDOAXUMSXLFPUNHDVRETKDBJFMNCLAHNRHKAXTGEUGSPMIRZZDYLSFKLXVPFPQPUVKGXYJCDGFTPQZSSJZLRLHMCPMJBMIWWTUYGLQJPIVEARWRBATNZYINYMKIZMYXWTFKOHNOWZGYSPLNHIOBTKCFRCQRCZIGSQWRUGUFJ");

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
    msg.setTimeStamp(0.765340621336);
    msg.setSource(49048U);
    msg.setSourceEntity(226U);
    msg.setDestination(29027U);
    msg.setDestinationEntity(29U);
    msg.name.assign("BZXXPGAIPLBDFTVLBAXJROY");

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
    msg.setTimeStamp(0.265815453841);
    msg.setSource(61759U);
    msg.setSourceEntity(178U);
    msg.setDestination(58453U);
    msg.setDestinationEntity(195U);
    msg.name.assign("EJLKVULNHIQOFYIDUKJDMXFERVKOBOCZGBJHOFZDVGQMWGSWJHIVFCKILADLUYXXWRDBTHXCAXPWYTCESCMUIYZWRNNDMUAGINQHGJXCTJLTIVCHNUMUVWDBZPYHYRTZTJZTAUKWDTRFVRKQFOZFUMPPELXCMTAKESYNGSWKQBGHLBXXYS");

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
    msg.setTimeStamp(0.195050725419);
    msg.setSource(11760U);
    msg.setSourceEntity(212U);
    msg.setDestination(32305U);
    msg.setDestinationEntity(2U);
    msg.name.assign("TKNZSCGUEWPKISDUHAAOPGBFARZVRQCMTHXSSYRJDQIUEQSYSHBCVVCGJAYSOAHNHLNPKOQUZXFXBNRHQBLTYPITCDMOULAPCRFZIBKFXIYEJJDLEGSFVLEYDBEBLTOGYFKHPJIDJZDWYZTMTYIRRBDQWW");

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
    msg.setTimeStamp(0.346087615547);
    msg.setSource(43259U);
    msg.setSourceEntity(77U);
    msg.setDestination(3967U);
    msg.setDestinationEntity(55U);
    msg.name.assign("NIWQHSOGSRTETOVVS");

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
    msg.setTimeStamp(0.250137994627);
    msg.setSource(9591U);
    msg.setSourceEntity(135U);
    msg.setDestination(32205U);
    msg.setDestinationEntity(85U);
    msg.type = 151U;
    msg.error.assign("MWJOQESIHUBFMGWNFSDOSYVRYUXAITLJNDCUYMRPOFTGETGUVAQOJDBKFRJKGDICCNYLIGU");

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
    msg.setTimeStamp(0.572764607567);
    msg.setSource(53520U);
    msg.setSourceEntity(186U);
    msg.setDestination(28527U);
    msg.setDestinationEntity(238U);
    msg.type = 193U;
    msg.error.assign("UAAUDLGNKWNSO");

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
    msg.setTimeStamp(0.870320785596);
    msg.setSource(65025U);
    msg.setSourceEntity(122U);
    msg.setDestination(22588U);
    msg.setDestinationEntity(188U);
    msg.type = 116U;
    msg.error.assign("UGUIRMMOLNGQGTEZIORMHHUBFUOIXRHXVTLC");

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
    msg.setTimeStamp(0.23837596652);
    msg.setSource(16160U);
    msg.setSourceEntity(156U);
    msg.setDestination(58312U);
    msg.setDestinationEntity(49U);
    msg.seq = 52322U;
    msg.sys_dst.assign("WXTTAZVSQHCYKTJJBAHKASNTWDYRQFHKBIVRVISUDYNSYUMJHXEIHNPQADKJGOBUDSKJTLDVJFMXPEF");
    msg.flags = 214U;
    const char tmp_msg_0[] = {-123, 98, -21, -81, -87, -107, 66, -12, 104, 56, -7, -2, 7, 43, -77, -34, -97, -22, -80, 29, 1, -88, 31, 60, -21, -33, -64, 26, -28, 123, -91, -15, -32, 52, -44, -28, -109, 103, 9, -102, -68};
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
    msg.setTimeStamp(0.913975299277);
    msg.setSource(32696U);
    msg.setSourceEntity(18U);
    msg.setDestination(15155U);
    msg.setDestinationEntity(214U);
    msg.seq = 61378U;
    msg.sys_dst.assign("VPJCADSEMXJNDAJWMRUFENGOAVSWQUDHFTQDBYBAKAHLLWVGVXHHRRCYGCBYNVYVCLWEITMKEHAZPBJMSBAROZWSXEEPHQLPQAXIQQLIWPZFBUWTSSWGKIFEAUAMDJEZGRFDSPQSPYEGCNQIYGIOIOMKEVKDUXCIRKFZZBQJNOKSYFFYIPFZHWBTXPDTOFOOKNTMNTRBLMOGGTYWLZHNTLSVJCVJRUXCMRVTI");
    msg.flags = 229U;
    const char tmp_msg_0[] = {34, -73, -41, -18, -58, 116, -111, -111, 49, 23, -60, 102, -1, -107, -58, -8, 123, 100, 100, 81, 17, 6, -117, 87, -118, -12, -60, 110, 11, -7, 10, -53, 81, -116, -93, -44, 1, -122, -39, 27, 26, -42, -8, 52, 119, 50, -48, -118, 8, -101, -20, 35, -51, 36, 87, -36, -49, 83, 124, 36, 78, -89, -34, 7, 91, 17, 92, -78, 52, -12, -87, 36, -29, -23, 87, -2, -77, -37, -9, 70, -25, -87, 100, -112, -56, 119, -5, -67, -41, -55, 57, -106, 112, -84, -116, -44, -64};
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
    msg.setTimeStamp(0.630761823274);
    msg.setSource(15508U);
    msg.setSourceEntity(247U);
    msg.setDestination(53866U);
    msg.setDestinationEntity(37U);
    msg.seq = 59479U;
    msg.sys_dst.assign("GUAQWVQLKUOZGEXOLMDVLOOZJRHSYVRTEWWYJZCSWYNXHXMMMSLVOCMEFICNKANOWIUDDSGBRTDRCFMWGQXWSQSWKJLUZGUFEAWICCXQESYNPCITAYMHGFXTPYFDBJABG");
    msg.flags = 4U;
    const char tmp_msg_0[] = {-118, -25, 51, -106, -114, -73, 45, -91, 118, 53, -106, -127, 101, 25, -72, -56, 108, -36, 75, 58, 92, -81, 22, -97, 59, -15, -61, 16, -74, -28, 86, -46, 120, 9, -83, -54, -19, 46, -32, -78, -120, -128, 118, -57, 76, 83, -122, -95, 24, -5, 54, 99, 82, 107, -92, 121, -69, -66, -99, 28, -116, 105, -103, 104, -107, 47, 56, 25, 99, 19, 95, -84, -22, -94, -113, 59, -54, 67, 96, 88, 42, -36, 57, -49, -69, 65, -34, -6, 94, -3, -45, -5, 120, -77, 69, -28, -122, 18, -88, 91};
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
    msg.setTimeStamp(0.889800660864);
    msg.setSource(17046U);
    msg.setSourceEntity(38U);
    msg.setDestination(18572U);
    msg.setDestinationEntity(50U);
    msg.sys_src.assign("DSXSJXZSODRIWAODWDCNQRFUHQFMQYARSZOAWIGQZCGQXLBFPKLVKWNETEHROMFHXQNVEKVUZUWQFWZGSCIPPYUQJJXBBNMBPOTFJKHFOXWACYJQJMPUT");
    msg.sys_dst.assign("NTJOJUSDGNXSDMJXWGJWKSYOQYORCCBCHHBETVFJZCVHXAMIXWAINFOUFBYFNNKGRRAQJLPADUPHCIPASMSYKOTEUGVFRVDYNEXDRLCRGMEZHCZMTWZWDWRIWFQJPZKVQRQBBIPTPSBAVZKYSMHALWQPGULEJOCYIYSFKGN");
    msg.flags = 153U;
    const char tmp_msg_0[] = {-114, -59, 124, -19, -9, 57, -37, -125, 61, -34, -22, 91, -8, -42, -83, -28, -125, -18, 15, 57, -5};
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
    msg.setTimeStamp(0.640524889925);
    msg.setSource(53691U);
    msg.setSourceEntity(31U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(81U);
    msg.sys_src.assign("TORPLOTBHVUWGHPJDIOXIAMUHVZIRSXQYYLXPTYJPSIUTKNMRGGCOWSNIATZEDOIWVLWKDWXZMHSMDAAHKZUMZTXUJYZMACKUFZRNUPJQMADDFMJTSYKGTLFYOFCVGEOPEJRZFD");
    msg.sys_dst.assign("MASIOYMTOIFTCIAIQRAFUP");
    msg.flags = 33U;
    const char tmp_msg_0[] = {2, -31, -59, -114, -6, 27, -108, 1, 110, 102, -46, 113, 107, -73, -46, 8, 78, 124, 6, 51, -102, 6, -84, -58, 85, -64, 73, -30, -5, -6, -15, 70, 13, 107, 46, -89, -46, -55, -84, 65, 58, -100, 122, 95, -60, -77, 8, 10, -113, 8, -89, 114, -73, -1, -63, 39, -76, -40, 102, -111, -19, 38, -12, 63, -40, 62, 34, 33, -32, -92, 116, 33, -25, -128, 93, 1, 96, 93, -99, 69, 8, -3, -102, 97, -95, -56, -94, -12, -6, -28, -84, 56, 69, 22, 67, -5, 25, 122, -42, -107, 86, 105, 65, -32, -112, 114, -111, 123, 102, 97, -114, 87, 50, 5, 6, -1, -53, -111, -86, 112, 45, -128, -75, 18, -120, -65, 80, 25, -56, 60, 96, 20, 106, 108, 42, -12, 49, -8, 91, 69, 31, 62, -62, -3, 103, -69, -86, -19, -91, 114, 85, 11, 21, 1, 56, -112, 36, -73, -67, 105, 29, -31, 113, -83, 5, -32, 27, 12, 116, 110, -26, 51, 12, -71, -71, -76, -99, 9, 22, -92, 71, -102, -53, 91, -88, 29, -37, 18, -120, -2, 38, 123, 108, 21, -31, 114, -111, -60, -17, -6, 99, 61, 60, 8};
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
    msg.setTimeStamp(0.182476572128);
    msg.setSource(58153U);
    msg.setSourceEntity(231U);
    msg.setDestination(38482U);
    msg.setDestinationEntity(60U);
    msg.sys_src.assign("CJZYWKTNVQIBMCPQXBOWXZFXDBSLMSEJFRBFMZLZNCZSHIWRNVVYMHBRTOZDLWKJTLAVNFKPEURXWERNTWSYWVFFNGNSGVEXPSLYODATRZNZGBXLHCCCRVUXKMSVAQSPDMAVOICPINEDFNGQKJJTUPBORTCIPDMYRTQUZSTHADYADKZHEQEUUEOOYHPSKOYGUKXLQJCGIBGOHHMJEBX");
    msg.sys_dst.assign("OGWPQPGUAZWKQXIVCRNJGVWGDMOFXQYEMMEQMLDKZAONMJKXVSPBUOSFRGLYGZVBZJIBNWBEDAVTJTRIKHIKGITPSXUNFWXXVOIUCSSUMLWEJIHQHPIWECNEDTRMQRUFOYEFXLHFAHHPBWXCLTWMVEBYCCSAAJLLPRBEKLYBXHRUJCCSYWDXNTPZKZKTYRHQCJNPBUSFIKRFYDKV");
    msg.flags = 56U;
    const char tmp_msg_0[] = {89, -85, 62, 75, 62, 35, -90, 71, -78, 90, -27, -10, -85, -3, -79, 81, 27, 68, 2, 56, -41, 25, 32, -58, -43, -53, -67, 72, -60, 80, 51, 125, 18, 113, -25, -4, 121, -66, -60, -18, -14, 27, -61, 45, -16, -77, -85, 73, -60, -87, -11, -60, 105, 114, 5, 84, -66, 32, -76, -112, 21, -2, -3, -41, -69, 32, -19, -87, 71, -127, -128, -85, -70, 48, 126, -48, -95, -90, 27, 115, 0, -24, -124, 0, -28, 31, 100, -4, -19, -83, -71, 50, -68, 45, -20, 114, -89, 46, -14, -107, 126, 38, -10, -106, 123, -11, -96, 35, -95, -112, -22, -110, 90, -7, 120, 38, 53, -37, -105, -105, -118, 12, -74, -56, -114, -66, -17, 22, -75, 83, 88, 83, -84, -97, 89, -69, 0, -40, -95, 58, -108, -99, -106, -128, 84, 121, -115, 50, -27, -100, 5, -119, -54, 70, 97, 30, 35, -107, 49, -33, 96, 103, -35, -71, -52, -23, 25, -114, -63, -92, 23, 31, -95, -42, 68, 0, -114, 6, -87, -39, -28, -45, 38, 115, -71, 70, 64, -17, 7, 23, 33, 5, -92, 60, 105, -17, -108, 90, 45, -65, 110, -113};
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
    msg.setTimeStamp(0.981409217232);
    msg.setSource(10842U);
    msg.setSourceEntity(197U);
    msg.setDestination(53472U);
    msg.setDestinationEntity(244U);
    msg.seq = 50985U;
    msg.value = 112U;
    msg.error.assign("JWNISUKZQUHYZSMKYDJVJPNCQYTHOPIGHLIODLSEMYJSXUCOEHMKXADPXRJRCFGSADQLWTEZOXNWVJBIFKAHGHXGLUZKROTRYVBYYPGFYNJTFZDCRNMTUFNOLEAQEBDDLWKZHKRIKWSWQAAVQVHWALIVZOESBXQRODMCPZUBTEKECUSXFSPHUBOLBRGSLNUVCRIOVCXRXIATCNYKAYMWWPMQ");

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
    msg.setTimeStamp(0.209716067879);
    msg.setSource(503U);
    msg.setSourceEntity(19U);
    msg.setDestination(35449U);
    msg.setDestinationEntity(113U);
    msg.seq = 28339U;
    msg.value = 216U;
    msg.error.assign("QSCOZYOGHBSKZZRLGVBBJ");

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
    msg.setTimeStamp(0.56537250591);
    msg.setSource(26958U);
    msg.setSourceEntity(46U);
    msg.setDestination(17418U);
    msg.setDestinationEntity(133U);
    msg.seq = 45409U;
    msg.value = 113U;
    msg.error.assign("JDETAHCGZVZPBBTVYKGEWNJZFHSKDBQOFSKCIGXFEYCWSDCYSUDMPSLBRYUZJKTHCPAGBJVGYVMQDFHTMIBOGGAEOYNWQIJALAQLFUMXXFLNTDYIKDTCEGEXOHONRWMRPQZYVUVVLHAPHSTHLKMQSXXRQRIFCVOCIPQJONCKGRBQALXOMVAEGZXTEMNPRJLLU");

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
    msg.setTimeStamp(0.588226430734);
    msg.setSource(26432U);
    msg.setSourceEntity(115U);
    msg.setDestination(45544U);
    msg.setDestinationEntity(70U);
    msg.seq = 25355U;
    msg.sys.assign("SEVMONWMHGEYFPCIEXIHUZVIVIZUVINSQWSOVXBRFZPMBVQXJXLHCNRUCTVEQKAOILXTXGRWDEACQFIRJBWAUTXPKKDUWXHFLQLJWPKNDHZKOBGFAGZYRLPGBBWKJHMDAENMIZBGXJQOWJOAJKKSRCGTVVJHHMSQRLFUVSKFMULXNFUUTSZYYDDAZZYNBYDWGCILEMSRTNYKTOMTNCJQHFZGBALCDRPCPMEHOPGYDLQTO");
    msg.value = 0.334484033931;

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
    msg.setTimeStamp(0.155225061606);
    msg.setSource(30269U);
    msg.setSourceEntity(232U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(14U);
    msg.seq = 19441U;
    msg.sys.assign("PLSJIMNSQKWYJGUVTHERSANWAQDYREXZBZYVBKQTSAWQQULMWTZMSJMGTFENREIWCGESFIUGDGOKEZWTJJNWYDFSTHGIZFPFBIHREYDOLTKUXLCZTKKGXUXABVHTYZA");
    msg.value = 0.712176327585;

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
    msg.setTimeStamp(0.139110197048);
    msg.setSource(744U);
    msg.setSourceEntity(213U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(148U);
    msg.seq = 26833U;
    msg.sys.assign("EKFTYNCANZKVYCJXSRGCUYXEOPYONBOTWIJRPIMFBHQMFRKVRATTNEQDDRULBOIIXHTKGKWNQABRCHUKLP");
    msg.value = 0.478035678851;

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
    msg.setTimeStamp(0.693220462945);
    msg.setSource(21237U);
    msg.setSourceEntity(65U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(194U);
    msg.action = 45U;
    msg.longain = 0.00405939886459;
    msg.latgain = 0.275730741916;
    msg.bondthick = 1539231708U;
    msg.leadgain = 0.244445403322;
    msg.deconflgain = 0.279121886493;

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
    msg.setTimeStamp(0.0444413480609);
    msg.setSource(8726U);
    msg.setSourceEntity(240U);
    msg.setDestination(54001U);
    msg.setDestinationEntity(22U);
    msg.action = 230U;
    msg.longain = 0.724690489286;
    msg.latgain = 0.328442397109;
    msg.bondthick = 405608347U;
    msg.leadgain = 0.801027456232;
    msg.deconflgain = 0.648380755574;

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
    msg.setTimeStamp(0.762751197042);
    msg.setSource(61453U);
    msg.setSourceEntity(21U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(19U);
    msg.action = 8U;
    msg.longain = 0.394203490347;
    msg.latgain = 0.730123164541;
    msg.bondthick = 2399503670U;
    msg.leadgain = 0.285241217327;
    msg.deconflgain = 0.0629530744858;

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
    msg.setTimeStamp(0.774662183104);
    msg.setSource(18947U);
    msg.setSourceEntity(15U);
    msg.setDestination(46482U);
    msg.setDestinationEntity(113U);
    msg.err_mean = 0.611702961199;
    msg.dist_min_abs = 0.568465200676;
    msg.dist_min_mean = 0.734189245605;

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
    msg.setTimeStamp(0.228854206384);
    msg.setSource(40203U);
    msg.setSourceEntity(2U);
    msg.setDestination(16230U);
    msg.setDestinationEntity(191U);
    msg.err_mean = 0.999867407207;
    msg.dist_min_abs = 0.45947988313;
    msg.dist_min_mean = 0.481634153431;

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
    msg.setTimeStamp(0.600134685076);
    msg.setSource(9675U);
    msg.setSourceEntity(134U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(198U);
    msg.err_mean = 0.359654246498;
    msg.dist_min_abs = 0.714960190124;
    msg.dist_min_mean = 0.67673078816;

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
    msg.setTimeStamp(0.338971958724);
    msg.setSource(51300U);
    msg.setSourceEntity(115U);
    msg.setDestination(48506U);
    msg.setDestinationEntity(102U);
    msg.action = 5U;
    msg.lon_gain = 0.592006203653;
    msg.lat_gain = 0.293903791205;
    msg.bond_thick = 0.847229988351;
    msg.lead_gain = 0.90249140287;
    msg.deconfl_gain = 0.401280200901;
    msg.accel_switch_gain = 0.883282016036;
    msg.safe_dist = 0.152664766354;
    msg.deconflict_offset = 0.034062889592;
    msg.accel_safe_margin = 0.0802846082496;
    msg.accel_lim_x = 0.764771370638;

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
    msg.setTimeStamp(0.633172936393);
    msg.setSource(57780U);
    msg.setSourceEntity(113U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(8U);
    msg.action = 222U;
    msg.lon_gain = 0.20090294036;
    msg.lat_gain = 0.14982919123;
    msg.bond_thick = 0.607253905687;
    msg.lead_gain = 0.822904025145;
    msg.deconfl_gain = 0.802627794524;
    msg.accel_switch_gain = 0.448163755928;
    msg.safe_dist = 0.389951579745;
    msg.deconflict_offset = 0.132349544215;
    msg.accel_safe_margin = 0.746220014373;
    msg.accel_lim_x = 0.167060216624;

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
    msg.setTimeStamp(0.634655781462);
    msg.setSource(47728U);
    msg.setSourceEntity(152U);
    msg.setDestination(30294U);
    msg.setDestinationEntity(191U);
    msg.action = 212U;
    msg.lon_gain = 0.150088527014;
    msg.lat_gain = 0.382756704084;
    msg.bond_thick = 0.490695391656;
    msg.lead_gain = 0.73836752811;
    msg.deconfl_gain = 0.480672427688;
    msg.accel_switch_gain = 0.792832096392;
    msg.safe_dist = 0.757188862061;
    msg.deconflict_offset = 0.279925171611;
    msg.accel_safe_margin = 0.400904942166;
    msg.accel_lim_x = 0.995945698635;

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
    msg.setTimeStamp(0.748958280713);
    msg.setSource(38996U);
    msg.setSourceEntity(167U);
    msg.setDestination(31098U);
    msg.setDestinationEntity(25U);
    msg.type = 26U;
    msg.op = 203U;
    msg.err_mean = 0.968192365329;
    msg.dist_min_abs = 0.79404694544;
    msg.dist_min_mean = 0.222354863995;
    msg.roll_rate_mean = 0.264552148392;
    msg.time = 0.880939645393;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 32U;
    tmp_msg_0.lon_gain = 0.371904502347;
    tmp_msg_0.lat_gain = 0.91152983977;
    tmp_msg_0.bond_thick = 0.47906297165;
    tmp_msg_0.lead_gain = 0.053585540552;
    tmp_msg_0.deconfl_gain = 0.454463494771;
    tmp_msg_0.accel_switch_gain = 0.365904034195;
    tmp_msg_0.safe_dist = 0.560540399455;
    tmp_msg_0.deconflict_offset = 0.14512158901;
    tmp_msg_0.accel_safe_margin = 0.778612194297;
    tmp_msg_0.accel_lim_x = 0.445688182576;
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
    msg.setTimeStamp(0.82849726346);
    msg.setSource(58516U);
    msg.setSourceEntity(119U);
    msg.setDestination(22851U);
    msg.setDestinationEntity(181U);
    msg.type = 97U;
    msg.op = 128U;
    msg.err_mean = 0.471386333928;
    msg.dist_min_abs = 0.404967944146;
    msg.dist_min_mean = 0.0191719218307;
    msg.roll_rate_mean = 0.318425933427;
    msg.time = 0.931832501184;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 77U;
    tmp_msg_0.lon_gain = 0.977240405075;
    tmp_msg_0.lat_gain = 0.706359840242;
    tmp_msg_0.bond_thick = 0.434474973173;
    tmp_msg_0.lead_gain = 0.76086831572;
    tmp_msg_0.deconfl_gain = 0.946847623031;
    tmp_msg_0.accel_switch_gain = 0.398576432151;
    tmp_msg_0.safe_dist = 0.0191823451868;
    tmp_msg_0.deconflict_offset = 0.221110059982;
    tmp_msg_0.accel_safe_margin = 0.392701820876;
    tmp_msg_0.accel_lim_x = 0.847241335862;
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
    msg.setTimeStamp(0.733213507342);
    msg.setSource(26312U);
    msg.setSourceEntity(238U);
    msg.setDestination(5669U);
    msg.setDestinationEntity(168U);
    msg.type = 87U;
    msg.op = 81U;
    msg.err_mean = 0.588517477296;
    msg.dist_min_abs = 0.762666248907;
    msg.dist_min_mean = 0.510220045926;
    msg.roll_rate_mean = 0.887676475569;
    msg.time = 0.202629915477;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 43U;
    tmp_msg_0.lon_gain = 0.267927327017;
    tmp_msg_0.lat_gain = 0.616180167807;
    tmp_msg_0.bond_thick = 0.986058824084;
    tmp_msg_0.lead_gain = 0.85419851184;
    tmp_msg_0.deconfl_gain = 0.0690888420799;
    tmp_msg_0.accel_switch_gain = 0.397452719058;
    tmp_msg_0.safe_dist = 0.3068254244;
    tmp_msg_0.deconflict_offset = 0.312960412022;
    tmp_msg_0.accel_safe_margin = 0.965167338594;
    tmp_msg_0.accel_lim_x = 0.256788626223;
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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.815022063323);
    msg.setSource(36182U);
    msg.setSourceEntity(253U);
    msg.setDestination(7861U);
    msg.setDestinationEntity(181U);
    msg.uid = 243U;
    msg.frag_number = 76U;
    msg.num_frags = 152U;
    const char tmp_msg_0[] = {115, 15, 17, 39, -57, 81, 66, 3, -48, -48, -72, -121, -87, -87, -92, -90, 82, -14, 12, -44, 16, -122, 1, -81, 44, -103, 98, 67, -96, -34, 90, 116, 37, -113, 124, -30, 14, 16};
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
    msg.setTimeStamp(0.899492839457);
    msg.setSource(45832U);
    msg.setSourceEntity(189U);
    msg.setDestination(51834U);
    msg.setDestinationEntity(160U);
    msg.uid = 151U;
    msg.frag_number = 213U;
    msg.num_frags = 178U;
    const char tmp_msg_0[] = {-88, 30, 120, -63, 72, -87, 84, -111, -84, 103, 111, 67, 101, -67, 68, 98, 73, 113, -123, -3, 74, -88, 121, 105, -42, -100, -67, -72, 50, -45, -85, -49, -117, -26, -58, -60, 30, -65, -115, -123, -120, 31, -7, 23, 87, 85, -115};
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
    msg.setTimeStamp(0.548978839604);
    msg.setSource(43126U);
    msg.setSourceEntity(161U);
    msg.setDestination(51652U);
    msg.setDestinationEntity(22U);
    msg.uid = 159U;
    msg.frag_number = 167U;
    msg.num_frags = 27U;
    const char tmp_msg_0[] = {-13, 7, 83, 97, 94, 107, -121, -72, -81, 105, -125, 122, -55, 101, 42, -121, -36, 63, -16, 19, 108, 35, -29, 47, 22, 39, -65, -43, -40, 114, 50, -80, -73, 121, 35, 12, -116, -120, 5, -112, 15, -86, 64, -74, 72, 21, -11, 17, -49, -102};
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
    msg.setTimeStamp(0.397254915099);
    msg.setSource(56238U);
    msg.setSourceEntity(144U);
    msg.setDestination(60026U);
    msg.setDestinationEntity(122U);
    msg.content_type.assign("QNDCEPSIKNLHHXXEATBUJKZXOGMVQBQSKPCVBOUWGHZJDEQNPZWCJBIRDRYBFMEJXIAXUNTBNILAMQZNGYPTSYVSZPHZYHOAFARKOOPQJUXCHFDRIMVSLVABAMSQVYWSDHLVTTMBWFFNGYYKXXLWCEDDCKPFBGWOFRECIAZQYJMFFPTKW");
    const char tmp_msg_0[] = {-71, 40, -65, 117, -87, 43, -79, 113, -23, -93, 63, 8, -72, -91, -58, -48, 70, -126, -39, -89, -16, -111, -77, 24, -110, -105, 62, -75};
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
    msg.setTimeStamp(0.714743283409);
    msg.setSource(20987U);
    msg.setSourceEntity(189U);
    msg.setDestination(60261U);
    msg.setDestinationEntity(56U);
    msg.content_type.assign("KPGEGRSQFCTFGVHNDSVYWOGPRDMALQQTWOWEKYIBISNOHPNAUCOWYFUTAZMXRHEOEMSCUUJOPDTZLRMSFUEFKRZHANBXWQNYZPNVUHKQRQJLXKAXQTCASWJQBFIHPGVGFVDEGISCYMXDKLLYAJXMIHNGBHOPLBAJZKIGUZNVZUAWKCSTJZHFLCBIERRTXRPVIKJFEDIBTDLSMVZBXWQROJOCFWUMCTELLPMIVTNJCMPYUQDYDOYZGJBHWBYVN");
    const char tmp_msg_0[] = {43, 86, -89, 90, -3, 14, 125, 83, -80, 94, -20, -13, -37, 103, -33, 126, 25, 80, -91, -22, -118, 94, -56, 12, -120, -29, -64};
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
    msg.setTimeStamp(0.440187973355);
    msg.setSource(13594U);
    msg.setSourceEntity(197U);
    msg.setDestination(21393U);
    msg.setDestinationEntity(180U);
    msg.content_type.assign("DNHMITZYDDAZNANWESRUKAVUKMLTOALWJBQGSCZRYZXSBRVGEMCIDCXXBSTXOHEPDNVKHOXVPSGXUJSZQJMNFEYNWIKFRCNEUTHGVUVYQHPARYQTCLWZIDCBPOSCFYUAHPGKMLEFYVAKWIURORCUWBOZJEKQNAAYBAGMCJHFQXJTFPKXPTFQUGIKSMOLMZVGEMRTDRWOIHJSTFEQXONGLWBVLWJDDBM");
    const char tmp_msg_0[] = {-128, -105, -113, -54, 60, 86, -53, -1, 10, 110, -34, -125, -6};
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
    msg.setTimeStamp(0.997669121695);
    msg.setSource(24121U);
    msg.setSourceEntity(213U);
    msg.setDestination(32413U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.598639798789);
    msg.setSource(22694U);
    msg.setSourceEntity(123U);
    msg.setDestination(19865U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.814390030418);
    msg.setSource(29284U);
    msg.setSourceEntity(164U);
    msg.setDestination(65476U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.507728485942);
    msg.setSource(56740U);
    msg.setSourceEntity(36U);
    msg.setDestination(59878U);
    msg.setDestinationEntity(18U);
    msg.target = 57648U;
    msg.bearing = 0.615311296419;
    msg.elevation = 0.641761092442;

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
    msg.setTimeStamp(0.613917366167);
    msg.setSource(11175U);
    msg.setSourceEntity(53U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(145U);
    msg.target = 25814U;
    msg.bearing = 0.352809826989;
    msg.elevation = 0.588500864861;

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
    msg.setTimeStamp(0.795927462435);
    msg.setSource(32833U);
    msg.setSourceEntity(229U);
    msg.setDestination(18528U);
    msg.setDestinationEntity(212U);
    msg.target = 2427U;
    msg.bearing = 0.483853396116;
    msg.elevation = 0.593260611018;

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
    msg.setTimeStamp(0.905274857688);
    msg.setSource(32280U);
    msg.setSourceEntity(200U);
    msg.setDestination(33612U);
    msg.setDestinationEntity(108U);
    msg.target = 639U;
    msg.x = 0.126924479596;
    msg.y = 0.527846628441;
    msg.z = 0.781174827112;

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
    msg.setTimeStamp(0.335530722863);
    msg.setSource(40843U);
    msg.setSourceEntity(166U);
    msg.setDestination(61643U);
    msg.setDestinationEntity(6U);
    msg.target = 35416U;
    msg.x = 0.742318261842;
    msg.y = 0.994315596724;
    msg.z = 0.949054964327;

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
    msg.setTimeStamp(0.709387013013);
    msg.setSource(28945U);
    msg.setSourceEntity(137U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(252U);
    msg.target = 36484U;
    msg.x = 0.364156902992;
    msg.y = 0.82225315604;
    msg.z = 0.640670943291;

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
    msg.setTimeStamp(0.0515438324688);
    msg.setSource(24479U);
    msg.setSourceEntity(92U);
    msg.setDestination(55655U);
    msg.setDestinationEntity(4U);
    msg.target = 32834U;
    msg.lat = 0.813404678896;
    msg.lon = 0.297782127924;
    msg.z_units = 193U;
    msg.z = 0.428606858511;

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
    msg.setTimeStamp(0.633034055182);
    msg.setSource(25645U);
    msg.setSourceEntity(81U);
    msg.setDestination(55912U);
    msg.setDestinationEntity(157U);
    msg.target = 38960U;
    msg.lat = 0.732492472102;
    msg.lon = 0.230021968832;
    msg.z_units = 40U;
    msg.z = 0.344226151379;

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
    msg.setTimeStamp(0.29637572722);
    msg.setSource(5702U);
    msg.setSourceEntity(87U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(210U);
    msg.target = 31992U;
    msg.lat = 0.193383961921;
    msg.lon = 0.125380576967;
    msg.z_units = 145U;
    msg.z = 0.993874695597;

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
    msg.setTimeStamp(0.649635764498);
    msg.setSource(55962U);
    msg.setSourceEntity(127U);
    msg.setDestination(15872U);
    msg.setDestinationEntity(122U);
    msg.locale.assign("NHGQOIIBBBZCABWPAFSBBFVXCIMWOUOXGEHEDFNOSCEUGPZTATDCXTYQYSBVRMDEVSZTQQFUKQWYSDNAFLKJDCVWEHNZGJWYNQCLUPQJDFCXOATMZVFMYMXROKHGRSSXTKGUDBNYOAIIMRYHAXWPOZZDPRRACSXEQPYSFALQCELLPUIUWTHMYPKLOMDJRLUTLVJHMBVNJEKYRNIVTHWVXZJFJREUIKMIJBEWJGAK");
    const char tmp_msg_0[] = {13, -56, -26, 13, -84, -100, 68, -114, 54, -44, -29, 109, -49, 100, -83, -6, -109, -11, -83, -111, -79, 6, 10, -122, 122, -94, -26, 49, 15, 124, -128, -54, 9, 112, 74, 86, -98, 18, 21, 3, 18, -1, 12, -63, -49, -128, 9, -10, 124, -77, -4, 107, 95, -30, 112, -29, -92, 103, 87, 21, -52, 52, 20, 16, -21, 97, -41, 76, 25, -107, -53, 43, 33, -69, 121, 96, 104, 84, 38, 49, 124, -81, -92, -38, -52, -17, 74, -60, 53, 122, -21, 83, 19, 101, -127, -30, 123, -100, -49, -27, 23, 72, -73, -120, -61, 17, -10, 34, -12, -39, 84, 116, -124, 5, -61, -35, 83, 110, -69, 8, -97, 89, 109, -67, -54, -12, -76, 114, -50, 6, -90, -125, 47, -87, -8, 22, -122, 74, 100, -50, 52, -112, -92, 12, -98, 1, -30, 36, 17, -123, -90, 10, 122, 103, -75, -43, -126, -85, 101, -17, -110, 1, 86, -43, 36, 87, -80, -5, -107, 100, 126, 52, -24, -15, -49, 116, 14, 34, -80, 22, 99, 117, 103, 83, 76, -83};
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
    msg.setTimeStamp(0.856948370711);
    msg.setSource(6180U);
    msg.setSourceEntity(191U);
    msg.setDestination(37370U);
    msg.setDestinationEntity(143U);
    msg.locale.assign("RMBFFGXYZTVFEGVLDGXSKKKLPZQEZPODNCXAOXVSJOAUSFIBWMYIXWRAPCSAXJMXSYIQFURQDLZDBPSDCCDHSFHNIHBKIVGHFJWHLUNTMVAGLMSFWRUMCKNFKPYZMUEDPUIZYQAHYELCGGERTGVYEBEWTTQMTRTZPKDAEOQVOANMOSCQNJRLPZINBPJZYTKIV");
    const char tmp_msg_0[] = {89, 35, 58, -111, 21, -128, -54, 29, -58, -87, -9, -15, -121, 107, -69, 21, 10, 88, -2, 28, 43, 60, -17, -88, -111, -1, -86, -102, -101, -62, 53, -82, 34, 103, -36, -81, -45, -86, 74, -22, -59, -51, -39, 86, 38, 58, 110, -12, 97, 112, 50, 19, -110, -32, -32, 87, 6, 80, 69, -127, -8, 77, -81, 73, -121, 62, -12, -35, -97, 116, 66, 11, 71, 92, 124, -65, 107, -24, 36, 62, 33, 58, 121, 77, 49, -15, -122, 30, 109, 85, 33, -23, 74, 36, -93, -32, 108, -105, 69, 104, -78, -45, -53, -102, 116, -88, 45, -78, -67, 10, -61, -30, -103, 79, -9, 4, 59, -121, -35, 37, 75, 124, -114, 68, -107, 35, 118, -24, -26, -37, -114, 87, 77, -51, -46, -58, 44, 92, -57, -119, -2, 51, -85, -125, 65, 16, -6, 13, -35, 14, -50, -4, -80, 55, -32, -95, -48, 86, -7, -32, 77, -47, -48, -98, -92, 97, 100, -10, 103, 23, -102, -127, 109, 21, -118, -119, 45, 54, -59, -87, 65, -96, 33, -94, 119, -122, -76, 106, -63, 5, 37, 123, 26, 49, 103, -38, 53, -109, -38, -12, -4, -122, 105, 109, -78, -29, -59, -51, -37, -112, 16, 5, -85, -66, -119, -108, -32, 9, 21, 44, -57, 77, -85, -78, -43, 119, 126, -82, -58, 98, 96, -43, -66, 30, 30, -58, -100, -60, -15, -56, 4};
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
    msg.setTimeStamp(0.427720021174);
    msg.setSource(40294U);
    msg.setSourceEntity(126U);
    msg.setDestination(33221U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("TIJNXXLMCSOVOZRFMPGIKONKJFHCLMFWYPXMUOJLYLMLWGKVXFGHCWOZKIUTWKEBUKYMEEKBRELQEEWCJDWUAHDGKPNGNBTRFPSUBZAIPQADZTJLSITMEAITNWTILFISDNYQPCVRTWGOVPWUBOYVVTKDERSBOERRJJLUDVXAANMGZALJFXAOHHYP");
    const char tmp_msg_0[] = {37, -74, -112, -9, -91, 41, -28, -30, -58, 59, 89, -20, 82, 108, -43, -80, -9, -41, 15, 91, -39, 16, -10, -27, 41, -34, 100, -4, -23, -114, -52, 105, 0, -115, -122, -76, 121, -86, -53, -69, -125, -15, 40, 46, -38, 2, -74, 119, -57, 124, 70, -7, 94, 112, 39, -50, 119, -75, 10, 13, -54, 120, 88, -66, -42, -42, -49, 86, 52, -40, 126, 87, -113, 111, 112, -69, 22, -9, -70, -95, -49, 27, 79, -99, 15, -104, -58, 113, -75, -101, 58, -124, 31, 84, 35, 37, -22, -74, 42, -42, 15, 97, 2, -3, -14, 91, -80, -118, 31, -110, 32, -9, -64, -60, -110, -36, 57, 9, 102, -118, -57, -88, -111, -8, 20, 12, 75, -24, -104, -91, 29, -127, 65, -25, 97, 75, 33, -48, -82, -83, -72, -111, 120, 68, -100, 106, -91, 42, -83, -42, 82, -15, -105, -46, -65, 27, 123, 81, -2, 7, 25, -95, 93, -54, 99, 35, -96, 78, -117, 69, 54, -67, -104, 84, -79, 100, -31, 26, 8, -107, -3, -23, 78, -32, 78, -60, 115, -61, -50, 88, -60, 103, -103, -12, 112, -35, -32, 6, -52, 88, -92, -120, -8, 57, -52, -42, 78, 56, -113, -56, -45, 93, 116, 117, -126, -87, 91, -39, -11, -35, 60, 26, 42, -115, -118, -57, -97, 108, -87, -61, -4, 99, -107, 84, -8, 64, -101, 104, -71, 117, -123, -28, 7, -124, -94, 82, -114, -53, 41, -54, -92};
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
    msg.setTimeStamp(0.199926924171);
    msg.setSource(27362U);
    msg.setSourceEntity(95U);
    msg.setDestination(16209U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.358631835605);
    msg.setSource(36826U);
    msg.setSourceEntity(186U);
    msg.setDestination(37185U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.613156206082);
    msg.setSource(50739U);
    msg.setSourceEntity(140U);
    msg.setDestination(36478U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.997219535988);
    msg.setSource(28977U);
    msg.setSourceEntity(113U);
    msg.setDestination(37119U);
    msg.setDestinationEntity(208U);
    msg.camid = 101U;
    msg.x = 11243U;
    msg.y = 17880U;

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
    msg.setTimeStamp(0.655773768538);
    msg.setSource(65133U);
    msg.setSourceEntity(203U);
    msg.setDestination(63491U);
    msg.setDestinationEntity(206U);
    msg.camid = 28U;
    msg.x = 16759U;
    msg.y = 18299U;

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
    msg.setTimeStamp(0.638310577814);
    msg.setSource(36226U);
    msg.setSourceEntity(73U);
    msg.setDestination(59892U);
    msg.setDestinationEntity(10U);
    msg.camid = 62U;
    msg.x = 32270U;
    msg.y = 5791U;

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
    msg.setTimeStamp(0.640062175601);
    msg.setSource(58829U);
    msg.setSourceEntity(223U);
    msg.setDestination(38358U);
    msg.setDestinationEntity(89U);
    msg.camid = 100U;
    msg.x = 55504U;
    msg.y = 5939U;

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
    msg.setTimeStamp(0.138004159819);
    msg.setSource(16893U);
    msg.setSourceEntity(226U);
    msg.setDestination(58380U);
    msg.setDestinationEntity(124U);
    msg.camid = 57U;
    msg.x = 14407U;
    msg.y = 45016U;

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
    msg.setTimeStamp(0.55911205812);
    msg.setSource(54100U);
    msg.setSourceEntity(37U);
    msg.setDestination(40560U);
    msg.setDestinationEntity(196U);
    msg.camid = 155U;
    msg.x = 20600U;
    msg.y = 49780U;

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
    msg.setTimeStamp(0.0327100144232);
    msg.setSource(15892U);
    msg.setSourceEntity(67U);
    msg.setDestination(5610U);
    msg.setDestinationEntity(144U);
    msg.tracking = 32U;
    msg.lat = 0.0601234264974;
    msg.lon = 0.950464770913;
    msg.x = 0.441201539869;
    msg.y = 0.619036738233;
    msg.z = 0.926095227776;

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
    msg.setTimeStamp(0.610721999773);
    msg.setSource(32707U);
    msg.setSourceEntity(198U);
    msg.setDestination(10990U);
    msg.setDestinationEntity(44U);
    msg.tracking = 94U;
    msg.lat = 0.435115560875;
    msg.lon = 0.255599879309;
    msg.x = 0.310662814493;
    msg.y = 0.945882855618;
    msg.z = 0.566459692258;

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
    msg.setTimeStamp(0.316107187839);
    msg.setSource(48019U);
    msg.setSourceEntity(30U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(197U);
    msg.tracking = 189U;
    msg.lat = 0.77994778555;
    msg.lon = 0.946386699015;
    msg.x = 0.484164253207;
    msg.y = 0.364900660194;
    msg.z = 0.974810483503;

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
    msg.setTimeStamp(0.514528433074);
    msg.setSource(20994U);
    msg.setSourceEntity(110U);
    msg.setDestination(33591U);
    msg.setDestinationEntity(88U);
    msg.target.assign("YDJPFTJJAGJMGMUCHHFWMXELPYZDNXO");
    msg.lbearing = 0.578142471026;
    msg.lelevation = 0.544873748927;
    msg.bearing = 0.893398585757;
    msg.elevation = 0.221468921413;
    msg.phi = 0.77682183244;
    msg.theta = 0.646466519924;
    msg.psi = 0.781805786837;
    msg.accuracy = 0.853704963222;

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
    msg.setTimeStamp(0.408785286186);
    msg.setSource(33915U);
    msg.setSourceEntity(90U);
    msg.setDestination(58259U);
    msg.setDestinationEntity(225U);
    msg.target.assign("WDJROLDSLYIIGVLUAQUMWGBGYOMDPKHZDJHDTKBPQMFCOMOPTWCNYYLAZRHFSYIHRXEVSKDRVQHVIFXGTKGVTUFJQRJBCPJQYEWHUWL");
    msg.lbearing = 0.632701597321;
    msg.lelevation = 0.752718080866;
    msg.bearing = 0.352812771512;
    msg.elevation = 0.11869195226;
    msg.phi = 0.277391927566;
    msg.theta = 0.663534283237;
    msg.psi = 0.357682804094;
    msg.accuracy = 0.555725261583;

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
    msg.setTimeStamp(0.245143124425);
    msg.setSource(45589U);
    msg.setSourceEntity(42U);
    msg.setDestination(37412U);
    msg.setDestinationEntity(118U);
    msg.target.assign("APHCBTVZUKHRASUQPJEDBXREFWXXTLOGHAKBTDFNOVFPCRYNHDSCHUWGGIJEVOQKZ");
    msg.lbearing = 0.9741669977;
    msg.lelevation = 0.89854819817;
    msg.bearing = 0.719040859635;
    msg.elevation = 0.264877331748;
    msg.phi = 0.60053125543;
    msg.theta = 0.397621564816;
    msg.psi = 0.791227930912;
    msg.accuracy = 0.584151586454;

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
    msg.setTimeStamp(0.391592511255);
    msg.setSource(18212U);
    msg.setSourceEntity(190U);
    msg.setDestination(39850U);
    msg.setDestinationEntity(30U);
    msg.target.assign("XOIFFZEGQFHCZALMYNOHXESRJIEBRMESWBGMTINAWPERHIUGDSCAVTEXZTHKMELNCTPIGABDPKESUZJSEXNINFYFLRDVDDOJWGLIBHWJSXCTYBXCLITVOXVRCOKOZSKLPDZCFHNYPNSOYANZTNHYWAQJVWPBYKHJKJOUKLUAAMAUVYRBNFIDYIDKJUCAEGVRVPMCSKQPQDYXQZWGBMOTUUQMGXQZJBRWR");
    msg.x = 0.300911258881;
    msg.y = 0.86041173837;
    msg.z = 0.32327525474;
    msg.n = 0.322297943928;
    msg.e = 0.0538515295748;
    msg.d = 0.759602257484;
    msg.phi = 0.587536420984;
    msg.theta = 0.517243318289;
    msg.psi = 0.878186904798;
    msg.accuracy = 0.576700523107;

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
    msg.setTimeStamp(0.0738693281499);
    msg.setSource(6381U);
    msg.setSourceEntity(232U);
    msg.setDestination(60851U);
    msg.setDestinationEntity(232U);
    msg.target.assign("VRXNVVLOPREPLDJDTEWGHSBANWCXEVEARCGJDNDOEZTBRYDCHIZRAQOGNIAQATOLCUMIYWOBNQIXPUYSMWKFDYUASPJBTLNRQLYHPVVVCDXQGJCZFGFOLWTNFBSGNZQILUXTWEPFQMFHUPGHTXLJMOHHKARATUEXZTYZIIRCQLUXIMMSBYJVUCAZXHQKZSBKEDSDJUIHSCYXBJPKVMNZVMNBTQFOK");
    msg.x = 0.737267864582;
    msg.y = 0.704459102669;
    msg.z = 0.880457942518;
    msg.n = 0.268406377178;
    msg.e = 0.688423494484;
    msg.d = 0.629900511364;
    msg.phi = 0.809010094471;
    msg.theta = 0.922162587328;
    msg.psi = 0.884474269252;
    msg.accuracy = 0.53032267631;

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
    msg.setTimeStamp(0.531977942345);
    msg.setSource(43175U);
    msg.setSourceEntity(21U);
    msg.setDestination(43323U);
    msg.setDestinationEntity(158U);
    msg.target.assign("YULJKRSEEFBTQLNQTGAUKOPSLMMSSXRSDMDTMZZYGIQGZXCGWPHNBVEEPCCSGNTJHLEJBJQRJPNIATWFEXMCOFOKBDN");
    msg.x = 0.644720688703;
    msg.y = 0.344845157877;
    msg.z = 0.0555529464706;
    msg.n = 0.108520762202;
    msg.e = 0.139037700128;
    msg.d = 0.213619161106;
    msg.phi = 0.136968489067;
    msg.theta = 0.108852489169;
    msg.psi = 0.113895934018;
    msg.accuracy = 0.196092301552;

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
    msg.setTimeStamp(0.0420780412934);
    msg.setSource(57828U);
    msg.setSourceEntity(66U);
    msg.setDestination(2310U);
    msg.setDestinationEntity(46U);
    msg.target.assign("VUUOLDGGEIHALKKUYZFKXVFDCQFTHBYWJWPWRAUQTNQCZKLEOEZVSGZJEPXMTZNBTAVJNPLYFVTKYDIBOEJIJBJRSXBQPIZDOZNFONYRESDRURNWAKQIZVVXWGXCMRGTUYMSMJEJOMNHC");
    msg.lat = 0.235339608585;
    msg.lon = 0.0899778811081;
    msg.z_units = 145U;
    msg.z = 0.0531537260451;
    msg.accuracy = 0.680661901939;

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
    msg.setTimeStamp(0.317502062848);
    msg.setSource(14834U);
    msg.setSourceEntity(181U);
    msg.setDestination(49334U);
    msg.setDestinationEntity(248U);
    msg.target.assign("EJGXKWPIFHCYBTRSEALVTDXFZQOFMXSQYZALEFSFOMMKCBITZELWYFULSEDYAEKENJLAVZQGUBDTVZUMFYYIQPRAEYCHSUKWNGCUBOQXJOLVLMVWRJNNARDYRJKCUFBNWQLOKIOG");
    msg.lat = 0.777136355229;
    msg.lon = 0.495962739756;
    msg.z_units = 215U;
    msg.z = 0.830087676196;
    msg.accuracy = 0.83514989209;

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
    msg.setTimeStamp(0.627659526361);
    msg.setSource(23334U);
    msg.setSourceEntity(158U);
    msg.setDestination(52959U);
    msg.setDestinationEntity(246U);
    msg.target.assign("FANEVFFJAQCNBGVKMF");
    msg.lat = 0.681193414854;
    msg.lon = 0.642970270438;
    msg.z_units = 244U;
    msg.z = 0.0112609837138;
    msg.accuracy = 0.987312069391;

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
    msg.setTimeStamp(0.800081863029);
    msg.setSource(31759U);
    msg.setSourceEntity(32U);
    msg.setDestination(17920U);
    msg.setDestinationEntity(35U);
    msg.name.assign("GRJXAZWPQSXTSJQAVNTQIIHLUXFGAEYBRLPUJACDVFGGRFB");
    msg.lat = 0.400997369932;
    msg.lon = 0.541095752616;
    msg.z = 0.590732138893;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.532907787442);
    msg.setSource(29836U);
    msg.setSourceEntity(6U);
    msg.setDestination(8166U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XBKZZSATNMBAKXDFBXCHZCCPMRWPTRYMVWGZEAKWHINLAZQWGLMLCVRVXUKQLI");
    msg.lat = 0.749464981707;
    msg.lon = 0.815720808414;
    msg.z = 0.824034920187;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.887618404901);
    msg.setSource(714U);
    msg.setSourceEntity(91U);
    msg.setDestination(19865U);
    msg.setDestinationEntity(250U);
    msg.name.assign("IFXQZQQLXYKHRFVLIZKXESAPCXTFTNVIMPEKWHAKZJOGXNBUJQSIOVBNRCNYTKMFJCPWTFDQDYGTYZKCPTXVSAPWBBVJGIFYDSSSYHZCENSWOOHIHLAGNTVYAEJVAZFOBRYDMKPZEUMHMWLQUCCIVMKPHURGPJDZRJPBHXGBCKRETJOBFNGSYWXTNICDQBLVLAEDAULXMUUDAZ");
    msg.lat = 0.665330275384;
    msg.lon = 0.404467332849;
    msg.z = 0.814764565784;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.755602249148);
    msg.setSource(29431U);
    msg.setSourceEntity(61U);
    msg.setDestination(59041U);
    msg.setDestinationEntity(73U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.812858571749);
    msg.setSource(43676U);
    msg.setSourceEntity(34U);
    msg.setDestination(28288U);
    msg.setDestinationEntity(70U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.823971589167);
    msg.setSource(36034U);
    msg.setSourceEntity(143U);
    msg.setDestination(62976U);
    msg.setDestinationEntity(207U);
    msg.op = 79U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HWLPHKMUVZNJDCNENHKLXITCAQJXZBGQGUYIOTGSRWWGROAIKNMUUEZNRARFOFSUSBHTPLIH");
    tmp_msg_0.lat = 0.51015393135;
    tmp_msg_0.lon = 0.0567130311101;
    tmp_msg_0.z = 0.89891283392;
    tmp_msg_0.z_units = 169U;
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
    msg.setTimeStamp(0.360012917423);
    msg.setSource(51205U);
    msg.setSourceEntity(75U);
    msg.setDestination(38886U);
    msg.setDestinationEntity(84U);
    msg.value = 0.960587847007;
    msg.type = 145U;

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
    msg.setTimeStamp(0.785885930198);
    msg.setSource(57165U);
    msg.setSourceEntity(144U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(186U);
    msg.value = 0.790230517802;
    msg.type = 148U;

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
    msg.setTimeStamp(0.990625495213);
    msg.setSource(31435U);
    msg.setSourceEntity(186U);
    msg.setDestination(4056U);
    msg.setDestinationEntity(151U);
    msg.value = 0.00692647200593;
    msg.type = 50U;

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
    msg.setTimeStamp(0.927572763427);
    msg.setSource(37169U);
    msg.setSourceEntity(175U);
    msg.setDestination(6162U);
    msg.setDestinationEntity(234U);
    msg.value = 0.376965743859;

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
    msg.setTimeStamp(0.132863298625);
    msg.setSource(54164U);
    msg.setSourceEntity(100U);
    msg.setDestination(37772U);
    msg.setDestinationEntity(80U);
    msg.value = 0.359963847773;

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
    msg.setTimeStamp(0.74160880751);
    msg.setSource(31304U);
    msg.setSourceEntity(80U);
    msg.setDestination(9895U);
    msg.setDestinationEntity(26U);
    msg.value = 0.221035414464;

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
    msg.setTimeStamp(0.450132302294);
    msg.setSource(47020U);
    msg.setSourceEntity(201U);
    msg.setDestination(32016U);
    msg.setDestinationEntity(80U);
    msg.timestamp_last_service = 0.237457921607;
    msg.time_next_service = 0.658479655249;
    msg.time_motor_next_service = 0.463977722255;
    msg.time_idle_ground = 0.777007351917;
    msg.time_idle_air = 0.732820432005;
    msg.time_idle_water = 0.672482588204;
    msg.time_idle_underwater = 0.891544975881;
    msg.time_idle_unknown = 0.272821193263;
    msg.time_motor_ground = 0.965186150247;
    msg.time_motor_air = 0.203397431806;
    msg.time_motor_water = 0.689250739277;
    msg.time_motor_underwater = 0.121223423295;
    msg.time_motor_unknown = 0.612460462554;
    msg.rpm_min = 13944;
    msg.rpm_max = 5911;
    msg.depth_max = 0.0474084501212;

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
    msg.setTimeStamp(0.568246442841);
    msg.setSource(39710U);
    msg.setSourceEntity(38U);
    msg.setDestination(42789U);
    msg.setDestinationEntity(49U);
    msg.timestamp_last_service = 0.425774669687;
    msg.time_next_service = 0.0486123619025;
    msg.time_motor_next_service = 0.890764654192;
    msg.time_idle_ground = 0.318291906915;
    msg.time_idle_air = 0.54300326956;
    msg.time_idle_water = 0.973814381399;
    msg.time_idle_underwater = 0.106467023982;
    msg.time_idle_unknown = 0.994528765585;
    msg.time_motor_ground = 0.919637455241;
    msg.time_motor_air = 0.198780653185;
    msg.time_motor_water = 0.116782717745;
    msg.time_motor_underwater = 0.661931560115;
    msg.time_motor_unknown = 0.161470490809;
    msg.rpm_min = -744;
    msg.rpm_max = -7395;
    msg.depth_max = 0.151295785559;

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
    msg.setTimeStamp(0.348435560171);
    msg.setSource(6282U);
    msg.setSourceEntity(188U);
    msg.setDestination(4143U);
    msg.setDestinationEntity(73U);
    msg.timestamp_last_service = 0.44757885121;
    msg.time_next_service = 0.789980806928;
    msg.time_motor_next_service = 0.605276807576;
    msg.time_idle_ground = 0.756350894082;
    msg.time_idle_air = 0.852696241846;
    msg.time_idle_water = 0.88631936603;
    msg.time_idle_underwater = 0.450501652032;
    msg.time_idle_unknown = 0.506744608158;
    msg.time_motor_ground = 0.544584262481;
    msg.time_motor_air = 0.336141707432;
    msg.time_motor_water = 0.468791921257;
    msg.time_motor_underwater = 0.991476550506;
    msg.time_motor_unknown = 0.485756121289;
    msg.rpm_min = -2093;
    msg.rpm_max = 15371;
    msg.depth_max = 0.206287585205;

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
    msg.setTimeStamp(0.21902841307);
    msg.setSource(17369U);
    msg.setSourceEntity(149U);
    msg.setDestination(1001U);
    msg.setDestinationEntity(210U);
    msg.severity = 237U;
    msg.text.assign("RGQVMUAEIUBRAKMLAMOKOBXQXMVJIWNBDQZDNQJJYWZWTSZPMXBKYEKHLCUUSBZUNXQNPHTYODXXJPCXZGSOKPGEOASHPVDTRRZSHDYTDYECGIFVVZJYJHQECDATXWYEMIVJOEAOKLZLFKQIKSUSBCRVLTDOQJYBMHRUEWCGPBSQFTBWQFYGL");

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
    msg.setTimeStamp(0.228252906287);
    msg.setSource(20383U);
    msg.setSourceEntity(219U);
    msg.setDestination(51389U);
    msg.setDestinationEntity(99U);
    msg.severity = 241U;
    msg.text.assign("KNKIOXKSDWESUPMTAOQLUXLGIMAGIETSVNUSXYHYCBPZALPBH");

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
    msg.setTimeStamp(0.020419455882);
    msg.setSource(33598U);
    msg.setSourceEntity(96U);
    msg.setDestination(47073U);
    msg.setDestinationEntity(60U);
    msg.severity = 136U;
    msg.text.assign("XIHRWRUGYVRELTMJVKAWKYYLPFTHSMHEMRISLAZJRZOZVSNOJXIWHGOGTXKDXCMFNGFSZA");

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

  return test.getReturnValue();
}
