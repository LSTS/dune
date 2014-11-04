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
// IMC XML MD5: 88fa637c71567a04502471478a6ad405                            *
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
    msg.setTimeStamp(0.989612622951);
    msg.setSource(47986U);
    msg.setSourceEntity(51U);
    msg.setDestination(23479U);
    msg.setDestinationEntity(174U);
    msg.state = 50U;
    msg.flags = 31U;
    msg.description.assign("SHVQLEMMJCOHAANLJQLJKDXQXTIIDAYHYDRQAGSCTFWPJMUDEUG");

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
    msg.setTimeStamp(0.429812441577);
    msg.setSource(50674U);
    msg.setSourceEntity(49U);
    msg.setDestination(45104U);
    msg.setDestinationEntity(2U);
    msg.state = 80U;
    msg.flags = 204U;
    msg.description.assign("USBLGQVSFYCKPMJIWTDZZTFSNMDBUSORREAOXYRLBKHICKLMDOBFWJDVLVICNFFJATZVDKDQKOQGOJEROSHDCMBBWUKIBEXLHYVJTOPGRAEJGFYWXTYZXMQNQ");

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
    msg.setTimeStamp(0.318143455582);
    msg.setSource(40077U);
    msg.setSourceEntity(212U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(31U);
    msg.state = 140U;
    msg.flags = 231U;
    msg.description.assign("SPEACLKTOGNXLVVMSUYANPKIXCXAYCSFZGGQIYFDNXVNTXUGSLKMWUEMAZZOFUFKVJZPXYHRBGWMCBZESJCXBTLMJRCZGCPJDTWBYWWYLOHLFJNBEIWWEKHHDKNROEMURQDWSQHVZFJIQBVHKGEPGPOJUAWZYNLVJSMYVTTFBSHRDYINLKPMOA");

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
    msg.setTimeStamp(0.729226316778);
    msg.setSource(64252U);
    msg.setSourceEntity(224U);
    msg.setDestination(38062U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.845574575565);
    msg.setSource(19140U);
    msg.setSourceEntity(125U);
    msg.setDestination(10272U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.886436940375);
    msg.setSource(21038U);
    msg.setSourceEntity(65U);
    msg.setDestination(15359U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.600092478364);
    msg.setSource(64437U);
    msg.setSourceEntity(148U);
    msg.setDestination(38271U);
    msg.setDestinationEntity(226U);
    msg.id = 254U;
    msg.label.assign("XDUWNVWZKDPVUTDZRCMZXLXBJGUISFKVECXZNQARYOWCMHCBUTWGQKDR");
    msg.component.assign("NRRQYQRYXRTCICEFPJCNLRVJBOVFU");
    msg.act_time = 5331U;
    msg.deact_time = 6443U;

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
    msg.setTimeStamp(0.233661081169);
    msg.setSource(5004U);
    msg.setSourceEntity(129U);
    msg.setDestination(63585U);
    msg.setDestinationEntity(108U);
    msg.id = 62U;
    msg.label.assign("DGSAHKKUMZFMRXLJAQYFNTNNWEEIQOGDEBKJLUSKHVJGWSJPATLULDOTWYSGPISVWNABPAXZRIUVUEVYZWJCNOMRFCNSPYUHTAMTIBYYLAPGORTFJCHSTVRLGLEZGHCQWMTTOYFBKIFD");
    msg.component.assign("BZKLAYFOYWODMBKVPPAYJTUBPUNTZIEMTMUEAGJBPIBXLZJUUXQQIKOTMOCEX");
    msg.act_time = 43573U;
    msg.deact_time = 61066U;

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
    msg.setTimeStamp(0.603944625421);
    msg.setSource(2752U);
    msg.setSourceEntity(213U);
    msg.setDestination(36661U);
    msg.setDestinationEntity(131U);
    msg.id = 51U;
    msg.label.assign("JVUFTQSBYVXVHDKQLEZMSAADRRLFZCJWGKJOCJPHQSHDAROKHLICXBNUSAZKBL");
    msg.component.assign("FOMWMZWSOJEPIPITVSWFSRYNGBICUCONRQZUYECGOXYKIIANQSJXTVDKSTVQUBKHKCMUVSJOPUBLCHIKRHVXFAGZFNCKYLBBDTRPIMHZPJTZISDPRCMBXRSZXLLJKXZBNMEZUVOIDFEQJSQOBVATJFFXKAGRFVDUWQQQYAEYW");
    msg.act_time = 26507U;
    msg.deact_time = 23535U;

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
    msg.setTimeStamp(0.941170476013);
    msg.setSource(9474U);
    msg.setSourceEntity(26U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(128U);
    msg.id = 223U;

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
    msg.setTimeStamp(0.614883497805);
    msg.setSource(36341U);
    msg.setSourceEntity(90U);
    msg.setDestination(63027U);
    msg.setDestinationEntity(136U);
    msg.id = 105U;

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
    msg.setTimeStamp(0.34801468358);
    msg.setSource(20258U);
    msg.setSourceEntity(132U);
    msg.setDestination(38204U);
    msg.setDestinationEntity(5U);
    msg.id = 174U;

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
    msg.setTimeStamp(0.465457403907);
    msg.setSource(329U);
    msg.setSourceEntity(55U);
    msg.setDestination(1553U);
    msg.setDestinationEntity(39U);
    msg.op = 158U;
    msg.list.assign("MXYOBWDZJIDQSEWPSAQPOMCMTHBFFSXYYRPWQRCZGGGMBQDDCGTIETOBOHKZJOEHDUWZTLLYTMBMCJCRVCSFP");

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
    msg.setTimeStamp(0.939407476299);
    msg.setSource(41958U);
    msg.setSourceEntity(212U);
    msg.setDestination(33465U);
    msg.setDestinationEntity(115U);
    msg.op = 49U;
    msg.list.assign("GSOTREBPRTWBJDWWRJZTJDCNUDJAHPWEKEQIRJSEABUNHSSPTDZUNXAWTXFMCRNOLYOJRMFYIYPSOKTSUSUNDCAKZZDSYYTGEBZUYCIBAAIBMRCQNFVBIGCAGKFXVAGWXQKQDOBHPWLHXOLONYHSCUVYVQEPWVPWKXHQLVOGMTULKNPECPYZMMPGRIKSZGDXMRLV");

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
    msg.setTimeStamp(0.842434141278);
    msg.setSource(42912U);
    msg.setSourceEntity(181U);
    msg.setDestination(12548U);
    msg.setDestinationEntity(115U);
    msg.op = 30U;
    msg.list.assign("KYQTAXRHNVKCFXVNDXWLPANXYKBGAQGBWFHNQDCFWUETGFOGWCKWODYMPROTASJAHNICLMUJWIQLBZMNGSOSJIYFQUGHJIVGCJLSZUGMVAKVQFEQRUVMEAZXTLHOJMUTCUETKDESBNOBIXTORFZDOQLXHOKZENSEBESXPRBZB");

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
    msg.setTimeStamp(0.781291218786);
    msg.setSource(43625U);
    msg.setSourceEntity(139U);
    msg.setDestination(46486U);
    msg.setDestinationEntity(102U);
    msg.value = 38U;

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
    msg.setTimeStamp(0.0443654795588);
    msg.setSource(5982U);
    msg.setSourceEntity(60U);
    msg.setDestination(25078U);
    msg.setDestinationEntity(101U);
    msg.value = 84U;

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
    msg.setTimeStamp(0.616719136603);
    msg.setSource(36171U);
    msg.setSourceEntity(52U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(119U);
    msg.value = 203U;

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
    msg.setTimeStamp(0.622399170722);
    msg.setSource(8695U);
    msg.setSourceEntity(28U);
    msg.setDestination(1448U);
    msg.setDestinationEntity(130U);
    msg.consumer.assign("QHCZAGEPOUFYTEXZLJHVKNHUSHXAFJGPRIPGAQXF");
    msg.message_id = 54136U;

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
    msg.setTimeStamp(0.634367605836);
    msg.setSource(34071U);
    msg.setSourceEntity(89U);
    msg.setDestination(57520U);
    msg.setDestinationEntity(18U);
    msg.consumer.assign("BYTHBWONTEQJKBVDPPBRQXITODNHJTJMSSFRMWUEBAPLSTFWHFDKMGHHJGONWDLUXGIVXUYEQCZYLAUFPDMLQOYBTOOHC");
    msg.message_id = 47357U;

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
    msg.setTimeStamp(0.990713726213);
    msg.setSource(58908U);
    msg.setSourceEntity(251U);
    msg.setDestination(59312U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("GJRZAABYZCEAFBLQJHFOAEMSIWKMWVYLFIAWFLH");
    msg.message_id = 59608U;

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
    msg.setTimeStamp(0.572941562111);
    msg.setSource(51042U);
    msg.setSourceEntity(84U);
    msg.setDestination(23851U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.826572963029);
    msg.setSource(42093U);
    msg.setSourceEntity(46U);
    msg.setDestination(7721U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.663838390543);
    msg.setSource(453U);
    msg.setSourceEntity(235U);
    msg.setDestination(3186U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.604063198131);
    msg.setSource(53109U);
    msg.setSourceEntity(41U);
    msg.setDestination(11570U);
    msg.setDestinationEntity(87U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.532275475654);
    msg.setSource(56346U);
    msg.setSourceEntity(160U);
    msg.setDestination(22793U);
    msg.setDestinationEntity(64U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.134865737516);
    msg.setSource(24795U);
    msg.setSourceEntity(0U);
    msg.setDestination(10759U);
    msg.setDestinationEntity(208U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.854512785711);
    msg.setSource(39490U);
    msg.setSourceEntity(167U);
    msg.setDestination(39256U);
    msg.setDestinationEntity(133U);
    msg.total_steps = 125U;
    msg.step_number = 42U;
    msg.step.assign("FZKOHFNLUTIVXEADMVGENNEYIQMPCOBDRRIKSVARPAFDMECZCDIUGRRYENXDKKLGKRHGJIYBWNBSKWBWTZQLWOEXTUQJPDJMGBWSLXKQAGFTQUWHTPHHVWMG");
    msg.flags = 221U;

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
    msg.setTimeStamp(0.501421909067);
    msg.setSource(25520U);
    msg.setSourceEntity(174U);
    msg.setDestination(22015U);
    msg.setDestinationEntity(147U);
    msg.total_steps = 218U;
    msg.step_number = 80U;
    msg.step.assign("QXDTJKQKEUUSGQOTVHMRPFBUYPKJMWJVHDRYMCWQCHYWOIVCALZYBSRZEPITEHIHLVJGYZVDLDNAFQQMXTFDYSHFWBUXLPFECMPOCZJEKRALSXECSMXIVVUQWEAKGNBDAFXEEPQTMGHCNIBPDBZTOKBOSJSFRJOVSOIIWINKDZZVGGPACADNLLRUYXOXMLCQFPYNVCAUWJUBZAIRHGLFNKPNHWXTURYMZGZTFKRKOS");
    msg.flags = 176U;

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
    msg.setTimeStamp(0.950903349832);
    msg.setSource(57914U);
    msg.setSourceEntity(131U);
    msg.setDestination(46704U);
    msg.setDestinationEntity(37U);
    msg.total_steps = 66U;
    msg.step_number = 127U;
    msg.step.assign("UHWZKXBVNBPSEOPCJWNUAIWAMNOOPNDKYWIACFPGCJVNXFFXILPSPPMMFEBICQJZBWRKQZJKYEOGDZEYUAGMQJRUACM");
    msg.flags = 186U;

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
    msg.setTimeStamp(0.640172868122);
    msg.setSource(34272U);
    msg.setSourceEntity(149U);
    msg.setDestination(20896U);
    msg.setDestinationEntity(215U);
    msg.state = 90U;
    msg.error.assign("FCUZVCFPWCWJRXEXGKWNJLLVALOFYOZYXCAPWSNFCDFLNJJPXYNXDSEIQLMDGSKWMHRVTZDEMAGZTLUUNXRIVQAVTNHWTFWIZIUBBRQDOXBUBTOAQIOBUPTMUERWAERHHBHFAUZWHSAXRHVMTBAESJYPMIYQBJ");

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
    msg.setTimeStamp(0.853223796518);
    msg.setSource(63540U);
    msg.setSourceEntity(173U);
    msg.setDestination(65387U);
    msg.setDestinationEntity(122U);
    msg.state = 103U;
    msg.error.assign("JVZMWBOOWXTNPQVJNPCHXYIBMUUFSLKRKVUCUTWORDWYRAHLXPNGFEDLWNAEDXAXVKDIEJEQLVJGGKOUDARFOJOABJZCNMNQZ");

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
    msg.setTimeStamp(0.403379427571);
    msg.setSource(31460U);
    msg.setSourceEntity(221U);
    msg.setDestination(38129U);
    msg.setDestinationEntity(154U);
    msg.state = 193U;
    msg.error.assign("ELXSIGMUOCDALKFANPOGVXNZRPYGYLUXXRTFG");

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
    msg.setTimeStamp(0.385124969124);
    msg.setSource(12739U);
    msg.setSourceEntity(53U);
    msg.setDestination(932U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.0903864925791);
    msg.setSource(2312U);
    msg.setSourceEntity(241U);
    msg.setDestination(50360U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.4958683209);
    msg.setSource(26725U);
    msg.setSourceEntity(55U);
    msg.setDestination(58233U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.00493613135955);
    msg.setSource(49558U);
    msg.setSourceEntity(206U);
    msg.setDestination(62126U);
    msg.setDestinationEntity(233U);
    msg.op = 210U;
    msg.speed_min = 0.614792427905;
    msg.speed_max = 0.0219899209266;
    msg.long_accel = 0.793646746049;
    msg.alt_max_msl = 0.294706561811;
    msg.dive_fraction_max = 0.364432254781;
    msg.climb_fraction_max = 0.483793210633;
    msg.bank_max = 0.906775727131;
    msg.p_max = 0.319372674858;
    msg.pitch_min = 0.62869258234;
    msg.pitch_max = 0.305585150075;
    msg.q_max = 0.716692630749;
    msg.g_min = 0.20561440683;
    msg.g_max = 0.625978694306;
    msg.g_lat_max = 0.529049357822;
    msg.rpm_min = 0.700966256707;
    msg.rpm_max = 0.598374522746;
    msg.rpm_rate_max = 0.958441313224;

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
    msg.setTimeStamp(0.489446757264);
    msg.setSource(49934U);
    msg.setSourceEntity(141U);
    msg.setDestination(22425U);
    msg.setDestinationEntity(135U);
    msg.op = 73U;
    msg.speed_min = 0.936030289078;
    msg.speed_max = 0.0354474123651;
    msg.long_accel = 0.960201515486;
    msg.alt_max_msl = 0.557341151839;
    msg.dive_fraction_max = 0.643261913883;
    msg.climb_fraction_max = 0.636859827811;
    msg.bank_max = 0.823716502878;
    msg.p_max = 0.956460261528;
    msg.pitch_min = 0.916961042072;
    msg.pitch_max = 0.304605851476;
    msg.q_max = 0.449142923839;
    msg.g_min = 0.0785138650708;
    msg.g_max = 0.379612129841;
    msg.g_lat_max = 0.872930058891;
    msg.rpm_min = 0.941992126104;
    msg.rpm_max = 0.205323405561;
    msg.rpm_rate_max = 0.571031444786;

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
    msg.setTimeStamp(0.37799369808);
    msg.setSource(62096U);
    msg.setSourceEntity(196U);
    msg.setDestination(46543U);
    msg.setDestinationEntity(214U);
    msg.op = 48U;
    msg.speed_min = 0.510602798263;
    msg.speed_max = 0.194193187438;
    msg.long_accel = 0.0173930266385;
    msg.alt_max_msl = 0.185209203597;
    msg.dive_fraction_max = 0.79212234523;
    msg.climb_fraction_max = 0.139910240518;
    msg.bank_max = 0.367544495415;
    msg.p_max = 0.763822672153;
    msg.pitch_min = 0.693409253673;
    msg.pitch_max = 0.0190442053844;
    msg.q_max = 0.559760583628;
    msg.g_min = 0.997925082278;
    msg.g_max = 0.521585764998;
    msg.g_lat_max = 0.973248086129;
    msg.rpm_min = 0.229560911062;
    msg.rpm_max = 0.519815463118;
    msg.rpm_rate_max = 0.353398990451;

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
    msg.setTimeStamp(0.381145981574);
    msg.setSource(46466U);
    msg.setSourceEntity(220U);
    msg.setDestination(39360U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.987098054666);
    msg.setSource(8305U);
    msg.setSourceEntity(216U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(220U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("WUOFLWFGMFBHMONXIXUUECESSCCPZJFVNALHLVYGGOJQIYDYKSBOIADIJ");
    tmp_msg_0.text.assign("THJAFPKATRFDLHWQQGVDNPKUEZNMVLMOUUYEPYBUTXAMJKFVJVHSALSEKBXEIWMOWXWRBCSTOIIUTFEOCVKLIVLCHYIBSNJXCADPPSYGNOSGAGIOUAYIJFDOQHFZEXUIGRJASNJOCNMEUIOTKBLZRQMFEMPLZGGSXHQPABNTLPDETBWDQCWXPDKEVKVSZMRMFNRZYCDYGISHZURKCOXB");
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
    msg.setTimeStamp(0.311565233095);
    msg.setSource(43250U);
    msg.setSourceEntity(22U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(119U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.786092872033;
    tmp_msg_0.lon = 0.148434931658;
    tmp_msg_0.alt = 0.628356032811;
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
    msg.setTimeStamp(0.234808475888);
    msg.setSource(18005U);
    msg.setSourceEntity(154U);
    msg.setDestination(59143U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.123685899737;
    msg.lon = 0.651299557906;
    msg.height = 0.841039176298;
    msg.x = 0.915641852234;
    msg.y = 0.953678900821;
    msg.z = 0.475612831085;
    msg.phi = 0.0634747854072;
    msg.theta = 0.447719238993;
    msg.psi = 0.0965281026092;
    msg.u = 0.0642861641335;
    msg.v = 0.148816047581;
    msg.w = 0.0592110156401;
    msg.p = 0.413109637653;
    msg.q = 0.167369657445;
    msg.r = 0.83570500141;
    msg.svx = 0.181386321034;
    msg.svy = 0.0733706026232;
    msg.svz = 0.16782969676;

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
    msg.setTimeStamp(0.824598843935);
    msg.setSource(61950U);
    msg.setSourceEntity(169U);
    msg.setDestination(50259U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.782360946164;
    msg.lon = 0.274296475124;
    msg.height = 0.322352883554;
    msg.x = 0.232637675623;
    msg.y = 0.0216018338938;
    msg.z = 0.340191676199;
    msg.phi = 0.796075606126;
    msg.theta = 0.908142864258;
    msg.psi = 0.99884876722;
    msg.u = 0.65963163084;
    msg.v = 0.278087562562;
    msg.w = 0.826789941361;
    msg.p = 0.302345483083;
    msg.q = 0.0347699716045;
    msg.r = 0.719627261372;
    msg.svx = 0.0492481124255;
    msg.svy = 0.559266118984;
    msg.svz = 0.675080033692;

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
    msg.setTimeStamp(0.934487033335);
    msg.setSource(59660U);
    msg.setSourceEntity(61U);
    msg.setDestination(54644U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.55172988718;
    msg.lon = 0.719160640896;
    msg.height = 0.612656933195;
    msg.x = 0.0973412736181;
    msg.y = 0.225542621147;
    msg.z = 0.542426799849;
    msg.phi = 0.474795614245;
    msg.theta = 0.849934604139;
    msg.psi = 0.501644460038;
    msg.u = 0.833407306744;
    msg.v = 0.43285179442;
    msg.w = 0.976993213055;
    msg.p = 0.789312807769;
    msg.q = 0.68119277042;
    msg.r = 0.352777886431;
    msg.svx = 0.272148533686;
    msg.svy = 0.53867612176;
    msg.svz = 0.641660866627;

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
    msg.setTimeStamp(0.217835399724);
    msg.setSource(35650U);
    msg.setSourceEntity(181U);
    msg.setDestination(16778U);
    msg.setDestinationEntity(123U);
    msg.op = 63U;
    msg.entities.assign("IMYUYTGKCKSITATBTZVSDYJFFOBEJQJRGUDSORM");

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
    msg.setTimeStamp(0.514809214334);
    msg.setSource(22557U);
    msg.setSourceEntity(253U);
    msg.setDestination(30667U);
    msg.setDestinationEntity(142U);
    msg.op = 171U;
    msg.entities.assign("QOTLLGTMVNCWPEPOYSSYOXPJKYPIXKNXNRUQXHAHCGLRIYDIVHHYNMK");

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
    msg.setTimeStamp(0.721865397043);
    msg.setSource(54691U);
    msg.setSourceEntity(122U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(225U);
    msg.op = 77U;
    msg.entities.assign("NVFTVNDFNTLJXQOQANDSDKUYNWJOIRYGEWNMFAXDOVOEAVXWSKKRFXRYOBJGNGFLLMSRALMPWQGHSYBSCUIICWEWVAJHWCQHNQLBHKCOEFXYEXJKIMHQEYKWHODLMAJADDCOJ");

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
    msg.setTimeStamp(0.107662215949);
    msg.setSource(35191U);
    msg.setSourceEntity(212U);
    msg.setDestination(858U);
    msg.setDestinationEntity(235U);
    msg.type = 206U;
    msg.speed = 44186U;
    const char tmp_msg_0[] = {90, -5, 116, -23, -69, -24, 106, -93, 14, -71, -119, 95, 94, -20, 39, 49, -11, -73, 78, 108, -25, -20, -90, -54, -16, 11, -76, 31, 54, 56, -118, 55, -91, -6, -69, -51, -19, 19, -44, 94, -96, -61, 17, -34, -75, 69, -39};
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
    msg.setTimeStamp(0.0909737512486);
    msg.setSource(36625U);
    msg.setSourceEntity(26U);
    msg.setDestination(6843U);
    msg.setDestinationEntity(30U);
    msg.type = 181U;
    msg.speed = 38428U;
    const char tmp_msg_0[] = {-114, 54, -123, 86, -61, -57, -5, 2, 73, -3, 16, 124, -78, -92, 89, 77, 113, 59, -11, -85, -40, 46, -1, 86, -121, 105};
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
    msg.setTimeStamp(0.490457235719);
    msg.setSource(5266U);
    msg.setSourceEntity(250U);
    msg.setDestination(47299U);
    msg.setDestinationEntity(99U);
    msg.type = 180U;
    msg.speed = 2148U;
    const char tmp_msg_0[] = {26, 4, 68, -125, 89, -90, -111, 116, 88, 44, 84, -1, -1, -121, 83, 116, -12, -64, 51, -102, 8, -10, 110, -14, -49, 123, 52, 35, -63, -81, 110, -8, 28, -92, -45, -80, 47, -4, -124, -119, 124, -70, 48, 125, 34, -111, 29, -94, 90, -107, -121, 79, 53, 124, -60, -111, 52, -80, -61, 8, 82, 105, 37, 17, -57, 17, -20, 15, -120, 50, -41, 52, 109, -102, 18, -34, 58, -85, -66, -81, -57, 90, 12, 81, -31, -108, 39, 102, 10, -64, -22, 67, -25, 99, 62, -11, 15, -77, -125, 23, 111, -37, 6, 74, 88, 102, 108, -126, 118, 28, -13, -2, -6, 8, -20, 6, 88, 9, 6, 106, -79, 98, -34, -110, 113, 101, 107, -98, -52, -16, 67, 99, 50, -64, 44, 105, -13, 59, 122, -32, 100, 75, -122, 84, 38, 91, -22, 73, -33, -128, 38, -71, 120, 29, -18, -50, -67, 67, -73, -78, 87, -82, 44, 73, 9, 118, -128, -113, -45, -84, 47, 47, -8, 10, 78, 28, 126, 96, 76, -47, 27, 98, 73, -13, 79, 83, 12, -70, 124, 37, -108, -45, -42, -32, -67, 40, 107, 4, 52, 7, 125, -38, -24, -31, 38, 42, -46, 126, 57, -90, 92, -46, 53, 80, 122, 123, -82, -93, -113, -63, 59, 41, -66, 65, -31, 46, -120, -101, 99, 16, 53};
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
    msg.setTimeStamp(0.615163363012);
    msg.setSource(24283U);
    msg.setSourceEntity(114U);
    msg.setDestination(28320U);
    msg.setDestinationEntity(90U);
    msg.op = 163U;
    msg.tas2acc_pgain = 0.576891296912;
    msg.bank2p_pgain = 0.144865988926;

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
    msg.setTimeStamp(0.498123708172);
    msg.setSource(9837U);
    msg.setSourceEntity(104U);
    msg.setDestination(33793U);
    msg.setDestinationEntity(247U);
    msg.op = 101U;
    msg.tas2acc_pgain = 0.953259958365;
    msg.bank2p_pgain = 0.253745189003;

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
    msg.setTimeStamp(0.23539528818);
    msg.setSource(40722U);
    msg.setSourceEntity(222U);
    msg.setDestination(59416U);
    msg.setDestinationEntity(251U);
    msg.op = 231U;
    msg.tas2acc_pgain = 0.328697235976;
    msg.bank2p_pgain = 0.767676717538;

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
    msg.setTimeStamp(0.266923209388);
    msg.setSource(43856U);
    msg.setSourceEntity(9U);
    msg.setDestination(51739U);
    msg.setDestinationEntity(127U);
    msg.available = 616460651U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.477483847921);
    msg.setSource(4781U);
    msg.setSourceEntity(115U);
    msg.setDestination(22409U);
    msg.setDestinationEntity(212U);
    msg.available = 108546416U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.0204710574212);
    msg.setSource(23169U);
    msg.setSourceEntity(54U);
    msg.setDestination(51164U);
    msg.setDestinationEntity(105U);
    msg.available = 848351289U;
    msg.value = 199U;

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
    msg.setTimeStamp(0.759999502103);
    msg.setSource(52762U);
    msg.setSourceEntity(32U);
    msg.setDestination(37282U);
    msg.setDestinationEntity(78U);
    msg.op = 169U;
    msg.snapshot.assign("XSWMYETXAELJAEKGPMXCFZWILUIHCRNGGSATMSUZRVBOBFVIBMMYPCTKVGDNJBUVSXLOXQYCSLQKDPBFKQCJTJXMJLHZISRAH");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.718338549161;
    tmp_msg_0.lon = 0.345192496041;
    tmp_msg_0.z = 0.39126149941;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.radius = 0.241294045469;
    tmp_msg_0.duration = 10097U;
    tmp_msg_0.speed = 0.545369544708;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.custom.assign("VZDFNQSINEUTUZWLAZUCVWREIDPFMMWWEASKYZAEFPRIXQPIUKNODTODXYOINWMZMERHLVJTMOQTUPGKRGVLRBUBCRYCAQZRHXBNTTDEMPKGOEJVZMLXZBLBJPRZTLAXQFSQKDGJXIUVBYUQKHYVKJAUCWAT");
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
    msg.setTimeStamp(0.361343369152);
    msg.setSource(55038U);
    msg.setSourceEntity(1U);
    msg.setDestination(61170U);
    msg.setDestinationEntity(230U);
    msg.op = 102U;
    msg.snapshot.assign("AYZEMJHCNOWGNSPURSGWWVOHMNKBXHZYTBDBBLMGGAZFCQEFUOBEARHJCOVDUVEGIRJYCKMHZKPWVKNLKQSSBCHIAFLKCMAQWMLDYGXVBUIJGYVLGNZFRWJOXOLBXWWTTLZESOARNKLUYZWHLVVT");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 89U;
    tmp_msg_0.error.assign("QLEUNSJVSXPFQCPALEORUCDPBBWSIMAFDAINMFCRWGQONLITIQMNBZWLYDKWXGFVDXAPTLCGVCZBOPAHFIFOZSHFRYLMETOVJRZSCBPIWGYLNTAQZLEOQOXWUOBTXPXEHYIYZFGVDZHLEPFUJNYDISRYVKTHJLUUAEHQJXDQZJMCYYAUEW");
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
    msg.setTimeStamp(0.0873858045128);
    msg.setSource(38574U);
    msg.setSourceEntity(108U);
    msg.setDestination(36721U);
    msg.setDestinationEntity(151U);
    msg.op = 238U;
    msg.snapshot.assign("NQGQLIKYQRIMMGOAVZJDXEFAQSCFLAFBASXFXNCOVGLZREATTCIVSYRSBIUXXSRDHOKOBNDZHQNXFWBJALZCSUFWJYEYLOXHPWPUPZEFTEDXMVZKVTMOHHSPSCFZVWMBVDHHWLMPCAJLJTKCOIJKWFRJPNNCPTGHSXMSKNXKYEUJYWYZAPBBOMTWQTW");
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("CCGPTIMHQPBDUIEMEHSFMIBNYGVCEKOTZQGDMRGJIJQKHODNXYRWVOUEUHJYTNLKXSSLEJOFMFHTWHHJEWSQXLJITLRNBGADFOPGVVFOWBBUYUYLQNQBCAWTJSOAJNMCZRGPDLDWDRLJBFPRCUVEUAYDTNXASFBCXEAVQIQWPSXKAZGEYHHRGFMKKNQIXCYFXPYBDHUOCAZIMMKAKPVKJXLGYDBRAQIFNILZ");
    tmp_msg_0.data.assign("GQSYYYXSOSYJYPIUWXBPLOZYDGEPAJVVRENKLNVAAJBGFDCLGKQWCIENYDZKPZJHPXKRB");
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
    msg.setTimeStamp(0.317246268097);
    msg.setSource(52443U);
    msg.setSourceEntity(204U);
    msg.setDestination(59031U);
    msg.setDestinationEntity(244U);
    msg.op = 147U;
    msg.name.assign("KDWCMYXGWWRIGFMFKRLZJXZRMUZMMBDQJSGHEZJOAQBENTTKKKSAXRPCVUWTXDEPIGWCYTGHLLLLOQSEQKMKVJXNZYJUARPLIVTNZBRCUQPIAJIEHUFEOOYILYDUNSHDRUXIILCARWSSXQSAZLZBYDHAAJN");

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
    msg.setTimeStamp(0.807132012934);
    msg.setSource(52393U);
    msg.setSourceEntity(164U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(108U);
    msg.op = 141U;
    msg.name.assign("VJUIZWWNAMVGXOECBYHAPUATHDHGTLIJPQ");

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
    msg.setTimeStamp(0.351310594854);
    msg.setSource(42233U);
    msg.setSourceEntity(113U);
    msg.setDestination(40313U);
    msg.setDestinationEntity(90U);
    msg.op = 140U;
    msg.name.assign("ZVUWVIEUICLJHVXVREPOFTIOXZPMOVAIHUNHWJCZVVXLVMONPISYWILUCSGLSMAYYMEUMPSOSUBIRGHZBZQYAJWQGCEWFTEFLQYEBWROJHRRJNKMNPTBRTGTQXUMFFZNAZRSBKLNFTXAJDXGOZHNRVLYYPWLPOCYXXAGNQONXAPDJBKZUE");

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
    msg.setTimeStamp(0.973887428575);
    msg.setSource(11153U);
    msg.setSourceEntity(215U);
    msg.setDestination(39103U);
    msg.setDestinationEntity(212U);
    msg.type = 154U;
    msg.htime = 0.426008933416;
    msg.context.assign("YKHZGQSYRITOFHJCQIAMUGLVSJWNNORACGQHYGQTGDGWMUVXLWQXELFLJFJECLAVXDBMFNWEE");
    msg.text.assign("PQHEKSHMLJXHTMVMZZYBDBSUXMEUQTXFCUNKFNGNWDXZWZPCSAFMSSEPKOHNSFGVCFWDATLOBYOFTCDGNVJSKOCODTLVBUMEXVQVAIBAJGXBUAKHBFGAGQPRQIRYYZIICTMVOLXZUWYCNOHJTENVGDMYNJEUTSGLYJRJSTHPLDARDRZYIQJXQZGIECIDJKFBNRZDLOXOMIVPLWYHGBTHRWSCUVAUKJRWAIHXZKPQPLWFIWULNCYMQAEOBKE");

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
    msg.setTimeStamp(0.73549582021);
    msg.setSource(65399U);
    msg.setSourceEntity(68U);
    msg.setDestination(41368U);
    msg.setDestinationEntity(204U);
    msg.type = 121U;
    msg.htime = 0.617914400207;
    msg.context.assign("JXYOQVCRGCAYVRHSBYHDMTRQWFGGBLCNTYLLNAXLXBTAQYWAMXGKAMRWWDGEZQIKUBPEGYVFTBTRDZSELWPEYTSTHUYNNHVMJFVJJIGDWKIJOKMRHVTCZVELOHJPRQXMPHRSBFCYEDGVBJFOIWSHKEUAPCRLIEOUCNKMTUJOEIOFZZWFUSSZNZUQSAHBPUDKCBNYNDGVZKGQIMXUIQXADXMPLMKFTQCPCEILOBKVXNHDJPAPSRNA");
    msg.text.assign("HURQELWGEKPBAUSORBXCDWRHWBBBRROIJKBVYTKIGSRAQDLGMGKJQPNYMPYMGAVKUUXXPCG");

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
    msg.setTimeStamp(0.379248308631);
    msg.setSource(17575U);
    msg.setSourceEntity(87U);
    msg.setDestination(39172U);
    msg.setDestinationEntity(151U);
    msg.type = 89U;
    msg.htime = 0.0434119709816;
    msg.context.assign("GRZNJVFUCOUFQKBAWXPILLOTSYFLOUQVZDHKZWZJGMNONRNMXLGCTXGIAPXAPYPYAIGEHISZUDEKYRFMRARSCWXAWEUBBNQVXHRUOBWXPTTSKJWIIUCBZIHQZHOSEYZUFPTCTPYEFMSWJZARLDYDCQEXHGWPKMOVJNDLMJNMERAVVSQYPOQTIJDOKDWU");
    msg.text.assign("GVLHSZWETEJ");

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
    msg.setTimeStamp(0.376034217368);
    msg.setSource(2261U);
    msg.setSourceEntity(215U);
    msg.setDestination(9984U);
    msg.setDestinationEntity(148U);
    msg.command = 163U;
    msg.htime = 0.25439951304;

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
    msg.setTimeStamp(0.470101465782);
    msg.setSource(20290U);
    msg.setSourceEntity(19U);
    msg.setDestination(20274U);
    msg.setDestinationEntity(57U);
    msg.command = 81U;
    msg.htime = 0.953940543466;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 222U;
    tmp_msg_0.htime = 0.943423959274;
    tmp_msg_0.context.assign("BJAYKICUSAGBRGHWCFAMPQQLWNMRKTMJYQHNZHWUZQDNEBGAUHLKIXUTPUVUBLFZOXYIEYZIWNIRDVRMDGYRBJQRDEUWNFCVAQZUZKJXJOTBKUAYFMTBXSCNXVVMSLDJKNXEHCRWSGE");
    tmp_msg_0.text.assign("CKDATLYZNUSTEKXPWUIZXACHIQTIJOKJSAFPQJSBWBCLUPRZCWXNXMTNHJJEYLWKUJYURLMHGZZGZFTIJBEQNIRDKOASRWPVDVGDPRNTAVVFUHFTSFXBNAGQOOZSOKYMECSUJPDMUVQXWMEGIOYAEGVJTOVFAHLJARWWOVKGRBGRPSDSLNEZMDBPEXUTKWKLNMCZSDCBBKFHIEDZY");
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
    msg.setTimeStamp(0.347011110514);
    msg.setSource(60879U);
    msg.setSourceEntity(46U);
    msg.setDestination(8165U);
    msg.setDestinationEntity(112U);
    msg.command = 55U;
    msg.htime = 0.161795871902;

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
    msg.setTimeStamp(0.580213948866);
    msg.setSource(7795U);
    msg.setSourceEntity(114U);
    msg.setDestination(31420U);
    msg.setDestinationEntity(130U);
    msg.op = 22U;
    msg.file.assign("KPLUAWUHTYCSDSGWDEWHTBXZLECSLRTRJPCLNKGHTQCCZLAXDJBQKTKIAEEBSFSPAGA");

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
    msg.setTimeStamp(0.991430952731);
    msg.setSource(60382U);
    msg.setSourceEntity(248U);
    msg.setDestination(54867U);
    msg.setDestinationEntity(242U);
    msg.op = 198U;
    msg.file.assign("GNTPKCPYIDKTGWKYZQAAAQD");

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
    msg.setTimeStamp(0.880008671262);
    msg.setSource(52300U);
    msg.setSourceEntity(208U);
    msg.setDestination(48269U);
    msg.setDestinationEntity(253U);
    msg.op = 59U;
    msg.file.assign("MNQBLJPPROQFDXEAGITCWNMWTOGBHMTBVGZUSZUCVQQVYKROYTMTJQPWDEDSYHZKBNCOFHJHBSEAFMKZHPVSXCCUKXYPJUTOUACKYRFQARNILGIDGIUZCHVKONVRZVUHHWQQNFMZNJNYGVTBLVEFPIORBSFQSAWMIEWTWARXUHJJBTXLNPULMWWIJKZGCKPRZDDEGMYWCFEDEJBATQXARDKIGBYL");

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
    msg.setTimeStamp(0.873850678214);
    msg.setSource(48535U);
    msg.setSourceEntity(104U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(98U);
    msg.op = 136U;
    msg.clock = 0.380216413972;
    msg.tz = -127;

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
    msg.setTimeStamp(0.936616741477);
    msg.setSource(9100U);
    msg.setSourceEntity(96U);
    msg.setDestination(52675U);
    msg.setDestinationEntity(120U);
    msg.op = 53U;
    msg.clock = 0.699992552505;
    msg.tz = -70;

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
    msg.setTimeStamp(0.95661230728);
    msg.setSource(28752U);
    msg.setSourceEntity(197U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(33U);
    msg.op = 220U;
    msg.clock = 0.815382453679;
    msg.tz = 45;

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
    msg.setTimeStamp(0.11627904242);
    msg.setSource(61710U);
    msg.setSourceEntity(173U);
    msg.setDestination(2709U);
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
    msg.setTimeStamp(0.906311591001);
    msg.setSource(56010U);
    msg.setSourceEntity(216U);
    msg.setDestination(46397U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.851068423373);
    msg.setSource(36146U);
    msg.setSourceEntity(63U);
    msg.setDestination(28849U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.775246201513);
    msg.setSource(64838U);
    msg.setSourceEntity(2U);
    msg.setDestination(37493U);
    msg.setDestinationEntity(204U);
    msg.sys_name.assign("WKJLMVALQYUESFTNRICKYLYPJBGYAVEMQHCTHDHXVUNNUYAAGGQQUQTMVPVWSWIDKVUJEBFPHTKALM");
    msg.sys_type = 107U;
    msg.owner = 62114U;
    msg.lat = 0.376253585888;
    msg.lon = 0.427144292244;
    msg.height = 0.765202502801;
    msg.services.assign("ZVTQYZADSCSMLGNWWDCKJKOENGNXPLRSNXHKOBAFIWDORLFCXMLBNYXPOEHKQNACOQULM");

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
    msg.setTimeStamp(0.17562735844);
    msg.setSource(34889U);
    msg.setSourceEntity(218U);
    msg.setDestination(5421U);
    msg.setDestinationEntity(210U);
    msg.sys_name.assign("HKHHTZASINDJUGQKXBZVQBFK");
    msg.sys_type = 150U;
    msg.owner = 27663U;
    msg.lat = 0.150175990421;
    msg.lon = 0.289499056948;
    msg.height = 0.0044255825502;
    msg.services.assign("YNQTJDJCNUHCOSTCXRJQMJLJIBYGRSOXBZKPGGICKCGQRZNBEBBPUPEEPMSFEWSMHWGJUNXIVLSYCAWODUAPFWXWGUAGFDRYBWSTDOHRQAKSPJIEWBRNOFLKVCSZVFSWVHMVRYVQKIJCEFSCKEHXTDPQMLEXZUFBRZYHAODWO");

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
    msg.setTimeStamp(0.697978540813);
    msg.setSource(1037U);
    msg.setSourceEntity(204U);
    msg.setDestination(16675U);
    msg.setDestinationEntity(230U);
    msg.sys_name.assign("MBKWBLQFQNYPHODXKYEBSYOPXMLGOEZDNXEOWMFEEKANBRZUWPTLOPCTGOFBNUVZFAJGRPPZJJCKEWPSDDMZGNHXICZXHXILQJBHQHGVCAIFUZYSQQIKGIVIWJCRYKSFNUUSMPNIWXGLSIOEYIXGZBVDRKRGWAAMLXASQGSAPWBWDTRMTTCTUUFPQK");
    msg.sys_type = 89U;
    msg.owner = 62466U;
    msg.lat = 0.989384522144;
    msg.lon = 0.66362258415;
    msg.height = 0.416037155272;
    msg.services.assign("JKXRGNRYXDZXHCXOVWOLZRREJHGYCOMLWGHLJCMCAKZNUXVYTCWRMLGESYIEBKQAQVIBMBNTQMNHONXTWMQLTEGGPKEHVNAMCNKVQIHWDKUEFWIIPPKKYIAIMANZFBOZIHDMDLSWRZPTXFDSSHSHBYSZDFZFLRTROUBKKLAUEQABPYYQJDSCUB");

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
    msg.setTimeStamp(0.79261934151);
    msg.setSource(39215U);
    msg.setSourceEntity(128U);
    msg.setDestination(42741U);
    msg.setDestinationEntity(55U);
    msg.service.assign("MUCTMJWOFEZIHLQICPSGUJTGIJIXTFHOASBUTZBDZLCHLUIRGAXINEYGFADAFIPHPGCBCEGOXQPZBSZKUENNOESNHVTNSPIBDVKDY");
    msg.service_type = 29U;

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
    msg.setTimeStamp(0.00915918599758);
    msg.setSource(16056U);
    msg.setSourceEntity(91U);
    msg.setDestination(6767U);
    msg.setDestinationEntity(160U);
    msg.service.assign("ELBJTZGAQUIRPVKEGMYXZWLNMOQCHFVXDNFQLJAYOIEHKKGSRTNXUEYNUHWYSGAGSLFBXGDXDQKNVVADEDWUGOMWCZAWBPWPFKWXBSBJPM");
    msg.service_type = 31U;

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
    msg.setTimeStamp(0.513335233434);
    msg.setSource(11866U);
    msg.setSourceEntity(66U);
    msg.setDestination(48779U);
    msg.setDestinationEntity(93U);
    msg.service.assign("YEIJNIIITEFFHQWUBBOAAKSRNJSCKUWLTPTIUTXO");
    msg.service_type = 254U;

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
    msg.setTimeStamp(0.142925677484);
    msg.setSource(21072U);
    msg.setSourceEntity(66U);
    msg.setDestination(31879U);
    msg.setDestinationEntity(96U);
    msg.value = 0.909671968914;

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
    msg.setTimeStamp(0.869354287929);
    msg.setSource(15015U);
    msg.setSourceEntity(45U);
    msg.setDestination(16364U);
    msg.setDestinationEntity(81U);
    msg.value = 0.394981636332;

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
    msg.setTimeStamp(0.550103810427);
    msg.setSource(3312U);
    msg.setSourceEntity(120U);
    msg.setDestination(9582U);
    msg.setDestinationEntity(52U);
    msg.value = 0.129733821947;

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
    msg.setTimeStamp(0.159949160636);
    msg.setSource(24276U);
    msg.setSourceEntity(89U);
    msg.setDestination(63542U);
    msg.setDestinationEntity(249U);
    msg.value = 0.351857502458;

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
    msg.setTimeStamp(0.0354462727857);
    msg.setSource(51U);
    msg.setSourceEntity(157U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(165U);
    msg.value = 0.406771608343;

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
    msg.setTimeStamp(0.588940787081);
    msg.setSource(47188U);
    msg.setSourceEntity(20U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(149U);
    msg.value = 0.352344211668;

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
    msg.setTimeStamp(0.812788852021);
    msg.setSource(18103U);
    msg.setSourceEntity(144U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(174U);
    msg.value = 0.451585353929;

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
    msg.setTimeStamp(0.697806914556);
    msg.setSource(56609U);
    msg.setSourceEntity(250U);
    msg.setDestination(17618U);
    msg.setDestinationEntity(67U);
    msg.value = 0.149582399135;

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
    msg.setTimeStamp(0.869522006933);
    msg.setSource(30213U);
    msg.setSourceEntity(227U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(228U);
    msg.value = 0.343368433761;

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
    msg.setTimeStamp(0.284965884506);
    msg.setSource(431U);
    msg.setSourceEntity(79U);
    msg.setDestination(6252U);
    msg.setDestinationEntity(129U);
    msg.number.assign("DWQVHIECGSEKHIGRXDSPXTIWJNPNONXWPBYQSIHEUHGWDJGLOERXPUCZNZWBGPZYVKDHHRGXEHPTJPENJUFWMNDVLCULIFUBWKOVUMAKYCCKIYYPTIPVTYRSBSXRVMQGMAECLLRKROLYBQXFMCSZOOXOAFBFZEZMFQJKVLQXRTWNUJHSADJWFZSLTETAAGHLRATJUJVHGBDABKYOKYBNQRMCAVCMSFNUBDQIFAZQGINQTMZSMI");
    msg.timeout = 10289U;
    msg.contents.assign("IFOZBHQQDWVINLCDWIPLPCQSKYGVEFFTMYHBFYVUDMRLSJZDOZDSQNJOGAKOGWNKKXHXCVQYTJTHNEIJARDGEWJMUHIUQMRGPDPEEVCZVSFYRCSAPXSRRFQMLJDVVAPTLXLUJEBBWMWANVCXHKVALNHLTSBPSGXCBXUHOMHIOKRBOQYYJHXNEAFBPBIEAKPGWBCREZUZO");

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
    msg.setTimeStamp(0.458834531915);
    msg.setSource(23941U);
    msg.setSourceEntity(224U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(65U);
    msg.number.assign("RDAMJCRHEQMAKMQTXYXSOLMCIOJGGFIKMHTPSELVIOWGUASLPQUNNRFQXDYZBUHIOXNCMCOSRUOKRQROBCWVUJISDXVVEHWTALEHJTYFVPQYHPBMJQAZNIPAJSKZONRTFLYGWEUWIPSGKDGPAMTJSGULVDHIBPYWMZPVZVWGCFFTPURGTVCDJYWFOEBKYBHDMKQIXZHXKDZLAEUYRNTJRANCWBU");
    msg.timeout = 10307U;
    msg.contents.assign("SJBNMBAGSKSHRMFIUHRMPLUQYCTVDOTOCLEIHGAKAWJVDQCLGLQGRIAVTNDNURPULCNUZMNWIMV");

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
    msg.setTimeStamp(0.683376982552);
    msg.setSource(11108U);
    msg.setSourceEntity(170U);
    msg.setDestination(62088U);
    msg.setDestinationEntity(237U);
    msg.number.assign("VNOGCUKCWDZPQRZEIFSYXNSKKDWIBMNZCBURBHEVINSGHDCORYVPWCATUVTXMMDADKBPDTJNLPCSTPSKSBLWFZZGIFCYGYVELDXJWGWMJHFAUBJZLOPGEVFTHBROVSMDMRAGAWJUQHGXLNWCQAQESUKMTXLZFKLLYRALPWMOUEAJIXUQPTXIVOJOKSUIWRCQPYEOQAJETIFSXFZQXXNPDZKHO");
    msg.timeout = 62526U;
    msg.contents.assign("HRFGZANIXFSMGIWJLIZQHUMSXMGUCYEBBFWGSZUQCUQHRZJGCTVJMBTRLAJKHHVWYCNPWZJMJTWMACKDQHPRAEKDEUOZZDGBFOOCHFWJMYYTIYDYJEKWPLTCZCPATROZVUAXWVHQIXKQEEXNOOYJRXDPUUXFQTUMNARSSKEVMAREFGSCPSLIBDCVPBGEINBNNFZ");

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
    msg.setTimeStamp(0.003223968926);
    msg.setSource(48955U);
    msg.setSourceEntity(25U);
    msg.setDestination(56699U);
    msg.setDestinationEntity(222U);
    msg.seq = 3511507450U;
    msg.destination.assign("JUEPCUAJCLIRHIYMXCPSVQAGQVORLSBZHFALNOLUJGWYCYXJTYRMKOHQDETJLIZZNMROHQDEZKDGQGIVUKGCKQMWCXIEEOBVLGYSRESMXMXNROFAVLZPJYFWDHCTFUNMFIDRQHDENTSEOVWWTKLCZAJLRDJWBAHFHRYUAXVGSUBEKXKJSFVBGZXTPXSTYIKOAMMZNZSFQPNRGBYXUIDOP");
    msg.timeout = 39688U;
    const char tmp_msg_0[] = {19, -100, -25, -94, 123, 42, -14, -73, -46, -25, -112, 37, -57, -68, 1, 36, 31, -18, 73, 84, 126, 36, -29, 85, -36, 100, -69, 83, -108, 49, 73, 34, 123, 52, 48, -64, -35, 14, -63, 19, -23, 94, 126, 105, 115, 0, -75, 123, 119, -52, 80, -25, -62, -25, 8, 88, -126, 26, -34, -4, -78, 112, 96, -128, 21, 53, 120, -113, -46, -86, 112, 10, 9, 15, 10, 81, 6, -101, 126, 68, -86, -27, -31, -13, -39, 87, -5, 63, 59, 34, -34, -48, -22, 55, 75, -69, -102, -48, -58, 47, -52, 14, 19, -30, -1, 39, 39, 19, 4, -9, -73, 104, -94, 47, -85, 94, 32, 84, -8, 112, -8, -8, 120, 71, -9, -85, -17, -97, 84, 106, -44, -69, -104, 106, -98, -98, -50, -76, -120, 49, 112, 94, -65, -71, -122, -3, 2, 95, -65, -85, 30, -21, -85, 39, 117, -85, -53, -100, 126, 123, -39, -49, 77};
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
    msg.setTimeStamp(0.93425962519);
    msg.setSource(15263U);
    msg.setSourceEntity(179U);
    msg.setDestination(55661U);
    msg.setDestinationEntity(33U);
    msg.seq = 626723892U;
    msg.destination.assign("XRQCLSPHHRLFIGSKKKPGMWSMIVFOWIYHFADMXDLNCBREOHSXYZSQCUKNVATFPYTXFLRRANKNQZMPLZBWZFRTEJGMSDOEMLSVXTPSWYXOXWKBUIBVEDJDHTBGFTVLCZEC");
    msg.timeout = 20435U;
    const char tmp_msg_0[] = {-37, -66, -75, 62, -126, 29, -92, 28, -67, 122, -30, 108, -124, 21, -52, -17, -27, -51, -73, -59, -106, -9, 40, 18, 10, 25, 29, -23, -23, -34, -77, -69, 21, -77, -20, -118, 77, -6, -121, 33, -76, -36, -84, -26, 16, 74, -71, 76, 36, -92, -47, -126, 113, 45, 88, -119, -11, -123, 23, 99, 21, -38, -54, 72, -84, -61, 125, -81, 41, -21, -124, 4, -120, 77, -47, -55, -39, -48, -78, -85, 15, 16, -36, 77, -112, -61, 120, 98, 13, -122, 63, 98, 107, 25, 83, 98, 69, 55, 8, 48, -20, -36, 29, 95, 46, 103, 41, -76, 121, 74, -76, 16, 122, -20, 74, 94, -35, -124, -122, -56, 81, -98, -49, 2, 70, 117, 30, -64, -126, -74, 47, 6, 102, -71, -30, -92, -46, -84, 25, 84, -6, 9, -59, -21, -66, 35, -94, -33, -9, -96, 91, -73, 4, -62, 46, 118, -32, 17, -41, 32, 64, -106, -62, -52, -109, 47, -27, -67, 116, 8, 97, 104, 28, -80, 55, 54, -41, -72, -42, -120, -119, 61, 63, 53, -11, -46, -114, 28, 106, 56, 4, 111, 54, 33, -80, -22, 6, 95, -10, 69, 36, -45, 51, -111, 10, -69, 29, -38, 65, -60, 57, -49, -55, -71, -6, 12, -42, -99, -13, -71, 11, 11, 2, 98, 68, -38, 0};
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
    msg.setTimeStamp(0.216445989333);
    msg.setSource(2549U);
    msg.setSourceEntity(209U);
    msg.setDestination(22550U);
    msg.setDestinationEntity(176U);
    msg.seq = 1085122434U;
    msg.destination.assign("FWLETFPLJKWUO");
    msg.timeout = 38672U;
    const char tmp_msg_0[] = {-98, 60, -113, -103, 92, -125, 94, 82, -118, 119, -127, -82, 103, -65, 32, 77, 83, -38, -23};
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
    msg.setTimeStamp(0.13147319938);
    msg.setSource(55310U);
    msg.setSourceEntity(241U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(120U);
    msg.source.assign("XECBKPSHCQJPGHYNQGGCCNGSIRRTVUMECNROLXOWVCZDVNGZQZUNPQQOZJTILHKBXBLDPYLYXUEJXVLEETOMDDGSFRLFWTSDVZARDFWAKJSCOUIRMUDXUERBXEFZFSMVAWKGASUOINSASBGKQIKIQPYKYEMVVYQZHFINBAPFAHIMACZTJPHVTEQERLNOCPBBNMZZMIHTDFOKHHXQUDWWRUOYJWTWFTLVKGYHWAYJI");
    const char tmp_msg_0[] = {30, 19, 20, 71, -56, -25, 107, -85, -92, -112, 16, -58, 49, -9, -72, 6, -37, 109, -69, -58, -110, -91, 20, 56, -5, -96, 1, -109, 106, -21, -99, -36, 99, 110, 29, -84, 18, 22, 74, 59, -107, -39, 50, 15, -54, 84, -105, -87, 5, -116, -118, 97, -90, 35, 114, 76, -44, 30, 13, -73, -8, 1, -19, 33, 31, 10, -127};
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
    msg.setTimeStamp(0.0818397965174);
    msg.setSource(10681U);
    msg.setSourceEntity(131U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(249U);
    msg.source.assign("NZQCSETKNFTGWPGZKCKITXJRKQAOCANUJQXWIGPVJFONTJTUIHKGSAHFJXBHETDBEKZTSBZMBMOYGZMBALHGNGYFIYPQXPXYQPLOMUNXXXAWCFLWWWUSYBQMUJKGVLRMUEQRHLDQWFTVOMICJEPXVVWVIDTBRNVOAACHREQHMZCJOXFREKIAJZRZPABLSTCELWHYMIFNFAG");
    const char tmp_msg_0[] = {-61, -95, -39, 9, 40, 63, -12, -31, 75, 122, -74, -32, 40, 116, 39, -111, -120, -107, 115, -20, 102, -18, -55, 7, -72, -97, 105, 38, 30, -121, -31, 13, 69, -127, -70, 93, 45, 64, 20, 80, -114, 35, 121, 109, 7, 27, -102, 62, -114, 116, 49, -91, -72, -3, -38, -117, 109, 101, -53, 106, -39, 21, -24, 104, 115, 99, -81, -18, -75, -84, 73, 80, 48, -64, 111, -44, -52, -71, -11, 83, 74, 26, -33, 124, 32, 6, 54, 112, 54, -82, 22, -109, 124, -68, -74, -81, -96, 87, 60, -39, 107, 85, -31, -128, -32, -59, 6, 92, -108, -61, 91, 113, 46, -88, -43, -109, -93, -37, 38, 79, -60, 116, -4, -59, -122, 82, 35, 90, -106, -37, -32, 94, -50, -13};
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
    msg.setTimeStamp(0.755502352569);
    msg.setSource(55853U);
    msg.setSourceEntity(118U);
    msg.setDestination(39670U);
    msg.setDestinationEntity(54U);
    msg.source.assign("SHPGBMWWYCHVBGJLFLNSTCLFRNKDTAAMBOWOAEERQIRNDZUKJOFCOUQRPUCBNRJWMVEGFUKZSINNVQJELWYLDVRPVHEFIMJJFVGOMHHLYQKFWYTEHRUONMKBUNAUPJAAUISHSEIBAGXSIDTDZLPGXSGKJUEXLDYKOGDIFETBFZYGOPWXRNPZ");
    const char tmp_msg_0[] = {7, -67, 6, 0, 49, 17, 55, -100, -42, 113, 98, 34, 110, 75, -32, -48, 84, 86, -104, 45, 124, -22, -116, -120, -65, -44, -68, 40, -45, -104, -81, -38, -6, 20, -123, -95, 49, -11, 29, -100, -52, 50, -26, -9, -64, 15, 89, 49, 83, -44, 28, -96, 101, 125, 43, -4, -98, 95, 2, 42, 103, -98, -108, -94, -102, -56, -123, -15, 86, 70, 38, -8, 43, -10, -5, 56, -46, 74, 19, 95, 108, 118, -15, -23, -47, 95};
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
    msg.setTimeStamp(0.046622409184);
    msg.setSource(55452U);
    msg.setSourceEntity(8U);
    msg.setDestination(31102U);
    msg.setDestinationEntity(80U);
    msg.seq = 2982049034U;
    msg.state = 196U;
    msg.error.assign("NMBXKJKHAAHBFPVTAHRNDSFHRXMEMVRIAFWECCLHOVMTOLXVVQBESKDFUNYUPWMJBWWYJWQMUCQNPSLBLWASCTJKTTBLDNASPGFKMKCABTVRRGTIXYERZRQQZJH");

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
    msg.setTimeStamp(0.272003370869);
    msg.setSource(52014U);
    msg.setSourceEntity(180U);
    msg.setDestination(22076U);
    msg.setDestinationEntity(245U);
    msg.seq = 3044086473U;
    msg.state = 62U;
    msg.error.assign("XNCCRPGVPRBMYZJDXUTEORGRWZDSGWQFFLJXCBKUZP");

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
    msg.setTimeStamp(0.667358637523);
    msg.setSource(14981U);
    msg.setSourceEntity(122U);
    msg.setDestination(25002U);
    msg.setDestinationEntity(143U);
    msg.seq = 4285927462U;
    msg.state = 134U;
    msg.error.assign("ITESNSNYSRNKCWQNQOTHXJHVXIGPJWUWCIJQHQQJOMZFFCDCTMNFLRDMNUKSGPYVAUUDZDBDJQFZSBIXBYIRSBGSYTVVKXLGCTTTHRJLEKPORVVOXLQVGUZPEFWYWGTDDMCZKCLGOUQMHYTRVUKOWTXNECBLSOWSWQMZIMYGKBCEQEGPCXOJAFOUKNPXAHPRLUIGELAPHFWJHDFAJAZKSYPANLAIIEZZRIZYBDNLERXJMYPXABFVUERBMFDAHO");

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
    msg.setTimeStamp(0.993528387197);
    msg.setSource(32588U);
    msg.setSourceEntity(221U);
    msg.setDestination(58740U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("GGQJANMRNNGTZJXTXKWRMYHWHBDGWUSPBHMSXIKVBAHURGUCLQLYEGQFRMPZDQATHNBKUZWVWINXZFLEVPXKYHTIDGKOHQYIOBCCTOLMVFPHMMLVXDYRNAMUTWNXIIHSJJMAFZVFOULQ");
    msg.text.assign("CQIIYHNPVAYPJYBVWKZFTILBNN");

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
    msg.setTimeStamp(0.925041946794);
    msg.setSource(49424U);
    msg.setSourceEntity(134U);
    msg.setDestination(33688U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("AMJIHHIJJTMIBIUNDRWCZCCHIKJKLZVBEIAHBNYZGLCJ");
    msg.text.assign("BVXNUMSCLKXIERAFAOTOB");

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
    msg.setTimeStamp(0.231644258261);
    msg.setSource(4195U);
    msg.setSourceEntity(103U);
    msg.setDestination(21823U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("DCBUWRPWHRYVAYFNBEDGLEKTZPI");
    msg.text.assign("EHYLVSOOFERTKNVJVTSEQGQCASETBIWQLUEAFORFUWNHRIKRJITIBJEFYRNTZDRHGUWWNAQSDFTJPDYUJSGQALIMCPEBLCUSJVXPEUNHEOMQALCOKLFZCVMHXQADGOSVBVYDPFKZRPESWGMTBWMYPCSNLQKMCCNIIXDVOPJBDPKXNHXDAYLSZMHJY");

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
    msg.setTimeStamp(0.441953774891);
    msg.setSource(21007U);
    msg.setSourceEntity(73U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(186U);
    msg.origin.assign("ZGQZJAJYVTZPJJDRQVAUNMYKSVIGLUIAXCFCEXQJFXSNAEGXKKIQXMBBMBBZHZTAFZXOJUWXVYMOKAUCHYXKGBPKVYLLWUVUZBGPWRWLRFMIQELSFAMYPDCKNDNINOFIVCWPTTQRKLVZDJVSEJSRNTHTSYBEHWDC");
    msg.htime = 0.340489650435;
    msg.lat = 0.000562996173915;
    msg.lon = 0.0646556827026;
    const char tmp_msg_0[] = {29, -29, 55, -27, -15, 63, 41, -14, 5, -7, 92, -90, -84, -116, 6, -68, -115, 118, 55, 104, 20, -18, 81, 95, -83, 109, -18, -31, 31, -103, -107, -12, 18, 26, -18, -114, -82, 82, 104, 101, -71, 125, -61, -41, -31, -35, 42, 101, 62, -113, -10, 22, 99, -53, -78, -88, -43, 126, -85, 27, -57, -12, -62, -117, 88, 66, -39, -4, -60, -79, 120, 121, 12, -102, -85, -30, 73, -92, -80, 69, 122, 12, -39, -123, -110, -4, 98, 26, -87, -26, 2, -57, 87, 46, -101, -91, 115, -125, -4, -85, -118, -11, -30, -14, 100, 67, -21, -5, -71, 93, 96, -4, 6, -109, 47, 57, 1, 115, 51, 91, 38, 86, -126, 1, 100, 4, 119, 42, 27, 53, -114, 64, -62, -36, -61, -71, -14, 126, 8, -1, -50, 16, -3, 124, 22, -38, -26};
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
    msg.setTimeStamp(0.775640712613);
    msg.setSource(6979U);
    msg.setSourceEntity(83U);
    msg.setDestination(52359U);
    msg.setDestinationEntity(49U);
    msg.origin.assign("VPYLYNJKMWMLNTWXGZNNRANFHPISQKWZGVLDGNS");
    msg.htime = 0.0819023378522;
    msg.lat = 0.772864428303;
    msg.lon = 0.012885034331;
    const char tmp_msg_0[] = {8, -53, 74, 106, -48, -23, 102, 99, 71, 70, 48, -60, -56, -14, 12, 122, -81, -9, 19, -111, 49, 74, 46, 94, -42, 40, 78, 62, 125, -113, -37, -84, 15, 36, 114, -112, -54, 111, -64, -81, -117, 54, 36, 31, 108, -7, -69, 15, -50, 121, -70, 75, -17, 27, 5, 70, 9, 117, -77, 64, -95, 85, -96, 35, -54, 115, -67, -5, -14, 8, 118, -82, -107, -66, 20, 113, 37, 42, -111, -43, -1, 57, 55, 47, -110, 59, -38, 32, 23, 108, 52, 112, -61, 66, -91, -36, 96, 90, 94, -97, -2, 120, -75, 114, -49, 84, 25, -35, 109, -16, 84, -108, -90, -75, 81};
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
    msg.setTimeStamp(0.239600512993);
    msg.setSource(2196U);
    msg.setSourceEntity(177U);
    msg.setDestination(48291U);
    msg.setDestinationEntity(41U);
    msg.origin.assign("FDILVDZIXNLTFEKSALRMOUGWFFNJCXWLZXBPIEDJNRUGBWIGSQHZICBMXTBQSKOEORPAUDEJYUVMKWGPKPCVKTEGMS");
    msg.htime = 0.37060031939;
    msg.lat = 0.541220514876;
    msg.lon = 0.284368568415;
    const char tmp_msg_0[] = {-64, -18, 49, 15, -5, -109, -83, 37, -8, -70, 74, -31, 9, 13, -22, 5, 80, 4, -39, 42, -15, 3, -29, -89, 96, 107, 43, 109, 63, 54, -101, 14, 119, -1, 17, 79, 53, 88, -112, 73, -106, 50, -16, 78, -51, 99, -122, 115, 33, 83, 17, 112, 113, -52, -24, -65, 105, -41, 15, -106, -8, 63, 22, -19, -65, -34, 0, -15, 112, 104, -110, 95, 43, -104, 60, -75, -22, -99, -40, 106, 14, -116, 126, 74, 13, 116, 100, 12, 126, 74, 37, 114, 37, 95, -58, -88, -1, -64, -51, 63, -44, -85, -98, -6, -87, -55, 109, 117, 1, -64, -18, 20, 61, 62, -94, 100, 82, -62, 61, -10, -115, 42, -119, -2, 97, -78, -24, 109, 86, -67, 122, -14, -32, 115, 81, 80, 112, 89, -27, -76, 46, 107, 93, 54, -7, -84, 68, -98, -121, 106, -115, 95, 63, 44, -39, -66, 124, -39, 105, 69, 2, 50, 102, 54, -94, -121, -41, -73, 117, 94, -85, -28, 33, -24, -123, -14, -69, 51, 106, 35, 80, 4, 87, 20, -3, 40, 71, -41, 100, 115, 9, 114, 5, 103, 9, -89, 17, -98, -75, 111, -73, -112, 92, -9, 97, -66, 27, -95, 9, -20, -118, 61, 39, 27, -11, 58, 1, -87, -69, 89, -96, -28, 9, 49, 99, -91, -38, 30, -128, -123, -3, -35, 91, -8, -86, 121, 10, -101, 121, 12, 25, 20, 60};
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
    msg.setTimeStamp(0.691477381386);
    msg.setSource(21671U);
    msg.setSourceEntity(137U);
    msg.setDestination(54662U);
    msg.setDestinationEntity(226U);
    msg.req_id = 35467U;
    msg.ttl = 16345U;
    msg.destination.assign("KRDSRHRIVAHYAJPPFEQTICRBPQHVPZEZLKXCTFIVMAHWXNBZUYBJZSRWTDIPZEFNFAMMUDELJCBSSUWOGFZAMGNSOQIOCHDSPGKWNBWLKRTEIBQVAQVXTQSSAFLJQSOEWIPWDGNXGCANGZQPDNI");
    const char tmp_msg_0[] = {61, -86, 31, 118, 126, -124, 64, -109, 110, 98, -70, -65, 77, 18, -76, -83, -30, 91, -101, 60, 100, 57, -26, -70, 31, 118, 102, 42, 39, -84, -44, -41, 10, -53, 56, 125, -78, -3, 37, 48, -16, 24, -58, -59, 78, -27, 62, 33, 98, -9, -116, 24, -48, -45, -123, 97, 54, 43, -16, -85, 68, 123, 54, 23, -126, -94};
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
    msg.setTimeStamp(0.994750975489);
    msg.setSource(29742U);
    msg.setSourceEntity(93U);
    msg.setDestination(28711U);
    msg.setDestinationEntity(84U);
    msg.req_id = 28752U;
    msg.ttl = 8223U;
    msg.destination.assign("TKFWMTBSPNYVNTEHDHHIQOFCNYUMKWYHFYFEUEXPZHSGOBPN");
    const char tmp_msg_0[] = {124, -61, 123, 33, -23, -67, 69, 24, -36, 24, -32, 13, 73, -96, 85, 96, -31, -42, -112, 122, -76, 88, -86, -72, 42, 13, 22, 15, -90, -14, 38, 124, -61, -128, 70, 109, -100, 80, 78, -44, -29, 84, 120, 12, 105, -97, 75, 71, -107, 54, 55, 96, -88, -105, 83, 13, 1, -24, -31, -1, -16};
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
    msg.setTimeStamp(0.824769582875);
    msg.setSource(21479U);
    msg.setSourceEntity(105U);
    msg.setDestination(58019U);
    msg.setDestinationEntity(130U);
    msg.req_id = 10357U;
    msg.ttl = 1851U;
    msg.destination.assign("HUVGITHFZTTNKGUOZORYNWCQESHPIQETGQKRNBOVOYIONJOURDGAPUNRXRCEHUULDMDVQLWNAPTMKAAHZTH");
    const char tmp_msg_0[] = {110, -70, 74, 48, 43, 48, 111, 22, -128, 29, 0, -6, -71, -66, -44, -18, 22, -109, -84, -108, 86, -127, 27, -79, 81, 38, 116, 12, -13, -11, 63, -14, 10, 115, 75, -117, -96, 40, -121, -48, -52, -73, 77, 3, 3, 67, -66, -103, -61, -98, 10, -128, -21, 14, -37, -24, -22, 29, -32, -53, 21, -21, -106, 82, -65, 70, -97, -103, -3, -124, 36, -98, 126, -123, -57, -75, 100, -115, -10, 88, -89, 120, 63, 7, -37, 81, -103, 13, -127, -107, 52, -96, 10, 18, -82, 79, 33, 119, -11, 82, -39, 123, -17, -12, 45, 67, 103, -27, 95, -86, -94, -88, -6, 21, 40, 62, -81, 39, -62, 85, 120, 53, -114, 88, 26, -40, 124, -46, -3, 103, 93, -3, 39, 21, 62, 87, 96, 78, 6, -124, -81, -35, -74, -44, -80, -19, 67, -44, -31, -60, -2, -71, -109, -93, 66, -55, 17, -91, 62, 116, -117, -127, -113, -78, 43, -8, 38, 116, -53, -110, -57, -98, 58, -67, 91, 29, -8, -67, -115, 89, 115, 15, 57, 49, -78, -9, 76, 101, 1, 68, -64, -103, 56, 98, 0, -57, -113, 23, 40, 123, 78, 0, -41, -41, -108, -115, 42, -51, 40, -37, 8, 88, 115, -74, -25, -5, 22, -123};
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
    msg.setTimeStamp(0.952595007655);
    msg.setSource(41990U);
    msg.setSourceEntity(157U);
    msg.setDestination(11079U);
    msg.setDestinationEntity(57U);
    msg.req_id = 33024U;
    msg.status = 155U;
    msg.text.assign("YLNHFTKBAXIVIOKSOPBUFUSAZURUJFDHMDEKZUQXRCMUDZQXSKHGNTBIVNLZOIVSGANEDFUSHJJFLJUISDVZIXWCKGRXDPQBVAVWBQKZAICJXEFQRTYMZGYQWAYPEEUQZLTJEPHMHXATGIHNOGCEMLRNKMOJTSGYPWFRSPORTENOCUKLOQNNPWIWFMQOWGZBGLYTTSACXBBYDWHH");

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
    msg.setTimeStamp(0.319986514415);
    msg.setSource(24237U);
    msg.setSourceEntity(172U);
    msg.setDestination(46578U);
    msg.setDestinationEntity(184U);
    msg.req_id = 26290U;
    msg.status = 0U;
    msg.text.assign("RWOMRFQINONVPIMGPDRUVSVSEKHLCYXQAEAIMHGJHORJOMJFTIDDQIVZBTZEIQNMWTVBICNHFYABCOXEQUXFBOCTHYBPAXQLKJLATESFGRUDLJJOFULPDGAKMBIZCLBCJAXPMELRPKZSBSZUVIWVJUNWUHV");

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
    msg.setTimeStamp(0.130924913173);
    msg.setSource(7384U);
    msg.setSourceEntity(179U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(147U);
    msg.req_id = 63484U;
    msg.status = 101U;
    msg.text.assign("CFGDMNNJVYZCKLNSTJKILESJFXMLMREBPIIOROAIPJZZOQXTBROSZPPUGREQKXWMBYHROOVQSDNXT");

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
    msg.setTimeStamp(0.979491507875);
    msg.setSource(62116U);
    msg.setSourceEntity(174U);
    msg.setDestination(19895U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("FPHZOKWQWLXLUVYSAWCKHJIUBRKJKMPVDTQAJZFEESWINCSXNTMEBOURCNOZGINGHJKRVUUIHAQVKJTGNDVWEXSZPPSOXEQJBCSHXFYNLTCAMQPVMZWLRCXREGAJKFGYFXRUUPZBLBOHIILKUBU");
    msg.links = 1395657295U;

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
    msg.setTimeStamp(0.627137872067);
    msg.setSource(5208U);
    msg.setSourceEntity(74U);
    msg.setDestination(49641U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("RYUEFQINYFJNCLNDXOZDLITDQKQSDGBELQAOMCKCEOJINNWVORJRZPDVUTRVDHOFAZBOIPNQKWBWFLGVSYABPHZPJMVDRFOBDQIRWWKJORRMSLXIOYASVZMYWMUDHCLGEWGTNMEQIGKJTKFZCHBYXGZWFPNCVTSXYXIYEXUGMGWZPBVSAXREZCIHSKSPKXBSUUZUAPNTFGNELFKMPYTECTJSAJIXVALEUBVGATMMXHWYPCBHQDLHAOFQ");
    msg.links = 2955885940U;

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
    msg.setTimeStamp(0.0474193169747);
    msg.setSource(16240U);
    msg.setSourceEntity(101U);
    msg.setDestination(23253U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("TEYCVFSBQWLXSRKPWHERLCEHYIIGZCUHYFKKQIQGHLFIGSRHUYMTQQYJCVIOTUNQXDFIYUFBVVSXNEKACDDHWFAMRAASTOXPDNGULNVJMSKEZMWROSODTROKMJPMOOCDLJKTVGIVLEABWGHPLMPZRVHPDYZMSLGDXKDXUBOZMAWWXRRAY");
    msg.links = 2628371929U;

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
    msg.setTimeStamp(0.77572980165);
    msg.setSource(61671U);
    msg.setSourceEntity(142U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(41U);
    msg.groupname.assign("HJWSSCCDXLPOSPLZFIQFVPUHMIMFJTJTBVRTHUPKIZREPQWBNUILGRUODQSZLQWOGBBVUOQMQLETHBKVEGECUTYMLSCEIHTMXBWAGMHITFEONUBCKYFXZGRAZRKLTSVCEPWBCZWJSXAXVAMXWPGDNIWZSFARFEPNRMMJUBIANBJDAXJIDORQUMPHWYYKOXACY");
    msg.action = 45U;
    msg.grouplist.assign("AHOFVPNVNAQKUKCCQYAGRPUBCVTUXCIQOFUDLBMNJCEXGDEGIAHIPVJKTXXLDXRRPSWQXZKMX");

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
    msg.setTimeStamp(0.434606786634);
    msg.setSource(20060U);
    msg.setSourceEntity(88U);
    msg.setDestination(15061U);
    msg.setDestinationEntity(147U);
    msg.groupname.assign("PAERNDRPBUMJSIUENETCMTYOPGGCWKCQCCZUPSGYUFDEQOGXULJOBKSYHVPBVIKPSWGLWXXOPMF");
    msg.action = 28U;
    msg.grouplist.assign("GBERCLSRRIUPCZEBKSRWKMWCOJTOVRDACNVYZBIRFPOBPFGTSIZWPAEHTCNHEKPMADLDMSXCIXLVQMVDBSFWNGHVJNGHXELTYEFEFKUFTUDCFOKXZVCBYYPUEALANQZWXNHVQQMYFLDOC");

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
    msg.setTimeStamp(0.557114338316);
    msg.setSource(18657U);
    msg.setSourceEntity(134U);
    msg.setDestination(6858U);
    msg.setDestinationEntity(246U);
    msg.groupname.assign("UUGORVFPKOCAHSDEBZTTZBVWSFJMDUDXRLTPXBAVTHXMLSYMLVEVLGLHZNPPBUDXCDDECOQIOJBZVKWIAHOPNOEFCOSWCMBHOKLZWSUPXQFAKNNGIIHQGUVUMHJSLZLTGYEIZVYSIAAJTOPCDHLDCQXEIFJXCNTMJIGNQDQCDA");
    msg.action = 251U;
    msg.grouplist.assign("XTBBLTFZYCRCFVNTBHTUBGFNSPEHRHZFREMJIPYIDCGUAFKDIIJVCNMNJEZMHUDXUDUUMUPEOXOWPVLFIATVSKGYWEJNTZYMQOXTGKVVQHHGGPDMLQLTNCOCYVWGXSDSLGRJBCLVOLKIENSTJLIERTRYAQANNCXMWKYJJJJYBULDVOZSQNUXPPMSMPDHAPEMS");

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
    msg.setTimeStamp(0.806081296822);
    msg.setSource(13771U);
    msg.setSourceEntity(112U);
    msg.setDestination(8497U);
    msg.setDestinationEntity(219U);
    msg.id = 28U;
    msg.range = 0.258829097007;

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
    msg.setTimeStamp(0.410352704824);
    msg.setSource(54313U);
    msg.setSourceEntity(221U);
    msg.setDestination(35039U);
    msg.setDestinationEntity(128U);
    msg.id = 124U;
    msg.range = 0.851556659206;

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
    msg.setTimeStamp(0.72579464315);
    msg.setSource(60829U);
    msg.setSourceEntity(249U);
    msg.setDestination(37191U);
    msg.setDestinationEntity(205U);
    msg.id = 181U;
    msg.range = 0.0103675781109;

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
    msg.setTimeStamp(0.94342948551);
    msg.setSource(36880U);
    msg.setSourceEntity(194U);
    msg.setDestination(3265U);
    msg.setDestinationEntity(178U);
    msg.beacon.assign("YYOHJLDFWSJKNRPNCATEZDUKVFXMIMBYZOWFPHMXWITTNXUWUEXXPJRMGMISHRQRYSPZOFSQMEB");
    msg.lat = 0.259699346252;
    msg.lon = 0.987551309096;
    msg.depth = 0.867646591686;
    msg.query_channel = 55U;
    msg.reply_channel = 72U;
    msg.transponder_delay = 253U;

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
    msg.setTimeStamp(0.0944414516405);
    msg.setSource(59579U);
    msg.setSourceEntity(130U);
    msg.setDestination(7795U);
    msg.setDestinationEntity(230U);
    msg.beacon.assign("IQUEQQIJDNKSYSNITIBFEAFTWFCWJWCSVCDKRDNAPE");
    msg.lat = 0.847251547894;
    msg.lon = 0.790039545483;
    msg.depth = 0.896579030807;
    msg.query_channel = 241U;
    msg.reply_channel = 169U;
    msg.transponder_delay = 13U;

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
    msg.setTimeStamp(0.109682084544);
    msg.setSource(35854U);
    msg.setSourceEntity(42U);
    msg.setDestination(15783U);
    msg.setDestinationEntity(244U);
    msg.beacon.assign("NGNVPQMXLTJYAQYFZRGABQGAGWCIHEMVOTTEHCRPCHGEQTWTNBEMLRRCVZPBMFNRLLMUQVUYKJYYSMOJSENUAKYVUZUOOOWWXCJNVTHJZBKQCRTILICHBUSADBOPDFLTDJFDNTYKDXCGDPSKETIDVJJLMWMFVEAFFXYASDILASHZMNIBGQHXVWCBQHDSFKPIKHUYORDZGFPBALYNONEZQAXXRZFSSJBIJ");
    msg.lat = 0.377750361294;
    msg.lon = 0.336650548879;
    msg.depth = 0.5590284088;
    msg.query_channel = 190U;
    msg.reply_channel = 106U;
    msg.transponder_delay = 45U;

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
    msg.setTimeStamp(0.199020744551);
    msg.setSource(64131U);
    msg.setSourceEntity(185U);
    msg.setDestination(47710U);
    msg.setDestinationEntity(76U);
    msg.op = 153U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PAKFAUQOANQUUNOODFKBTUVJOOQYJQYZJTIVOGTRBNKVRIEXZPRHQLRHYYOFYQNQZFWDPLMCLCKBNGMGVYSRQRAGRTGMADBILAISOEEWUCJWIWZWCPMKYUKNKF");
    tmp_msg_0.lat = 0.15931087536;
    tmp_msg_0.lon = 0.321173430538;
    tmp_msg_0.depth = 0.406978943681;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 107U;
    tmp_msg_0.transponder_delay = 214U;
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
    msg.setTimeStamp(0.364906892184);
    msg.setSource(53670U);
    msg.setSourceEntity(169U);
    msg.setDestination(19015U);
    msg.setDestinationEntity(176U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.602111499321);
    msg.setSource(12673U);
    msg.setSourceEntity(47U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(49U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.719316306369);
    msg.setSource(9850U);
    msg.setSourceEntity(229U);
    msg.setDestination(11498U);
    msg.setDestinationEntity(136U);
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 22857U;
    tmp_msg_0.x = 0.398355817728;
    tmp_msg_0.y = 0.881042124045;
    tmp_msg_0.z = 0.100666712598;
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
    msg.setTimeStamp(0.960382176837);
    msg.setSource(50085U);
    msg.setSourceEntity(229U);
    msg.setDestination(65514U);
    msg.setDestinationEntity(202U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 28421U;
    tmp_msg_0.value = 156U;
    tmp_msg_0.error.assign("KIWEANOHHBDEXHNYGSIIOCEYZHYZFHXFMSOTKSEWCLOOOJLVZWTRLUAXQZCCQVSYSMGHOCUGQQDLEDZSJHKSFCE");
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
    msg.setTimeStamp(0.0637738592775);
    msg.setSource(53563U);
    msg.setSourceEntity(138U);
    msg.setDestination(33202U);
    msg.setDestinationEntity(57U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YFAJDVUEQKQYLZVBOAFVLKBCDGNCUKZITETFWYFTBQIWXMFUN");
    tmp_msg_0.dest_man.assign("DUALLJNTRWDDHEWKYHJPMCWQMVWISDYBHZRYECIYZCBAYSJXGWCNQFGGOMVGPLJAIUZVEFFZNDTSUTKLRRPCUIQOAXIFNTTZAUQOMXBACEBKMWUKDFHHTNQVKSYSDDHQRVWBYKAZFMMVHBLRUFVEUIPOWVRILGNDALSEUWJGXAFNEPQPBHHTNYXIVKTQXKCWDNMEPIMKJFMVBELXPIGOQCOXLUZAOXRZSSZOLYF");
    tmp_msg_0.conditions.assign("IZQPPUDRYATTMILSCIWYJFMIOVGKQVXBQVYCHFPVLBRSERTDQZSCDCHARGWQNXGJHBYRIIKBEVUUUPGZSIXJWQONZKEGOYYREPYVM");
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
    msg.setTimeStamp(0.78675279461);
    msg.setSource(36659U);
    msg.setSourceEntity(225U);
    msg.setDestination(4928U);
    msg.setDestinationEntity(122U);
    msg.op = 235U;
    msg.system.assign("OVVJIDQBYKGERZRMJNTVZEMEGGCPHXUTKOYRXHUEIDWSXRXIODGCJYAMJPKHXKBHHSJLMCNPWESCTYSUVDEABFKTWMLRGMPBIDDTPNTBWPAAZSUNDMZQONZVWPYQWMKPBOVHEBICQBGEUYQNOQGMJAWNFSFEGAYQVYLAGFICWOLYRDOLFHCTXFZQVPIAGULVXASJKIUHKTCZTUWEX");
    msg.range = 0.0763352379443;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LLEKULCMLJSETGMOGJUOSGRYFWWNXPWFRGQWLUVYACHJDARIYHCLSDYIQMXONGPIRQGCSNVSVCUMWLRCOXNJYPEPFREWWWKBYVQBOIPWPPVOEYBBURMDFPBQIFHTVTAUZCDVPHEBNCTYGMXXKYCJVDHZXMRTHATIAHAONHZDDSJHJEFMQOBTBJAPZAGNRKXZCZUNOSNELSIXZKGQ");
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
    msg.setTimeStamp(0.497508418102);
    msg.setSource(25048U);
    msg.setSourceEntity(55U);
    msg.setDestination(46076U);
    msg.setDestinationEntity(179U);
    msg.op = 146U;
    msg.system.assign("SOBLGTVYDASOGSGHZSJNLCRUSCTKBYBJAHVPXDWGQFENPEVQRMZGJXXCAAHWWERVLKHKXNCOIKWONVDAAHZQLPFREEWUTGHLDQWDIGWEVGJAXXCJPPYFYNEMUQJSGVOQKNHPARJFZOJNMLTX");
    msg.range = 0.152396608929;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 51325U;
    tmp_msg_0.custom.assign("DOLQIIUUIRFFRZZIKIIDSHGRSKJXCCTLIFDGGLWOMOSCGLGVSQHZMSHUTRBXRSHOJEESUFEWTHPVCJEKHFYSQKORXBWZUJTATHULYVHPNTRWJWOBIYXUMZENJCVWKFKWNXGQPLLVCCVNPQMDOMPZBJKGQDTJRLFDWLYJBTPBKHXYPAPTDGQAXQNFEAMCVHBBNCFDYUOPVAAIXZYMPQGEYLAUBMOKXDE");
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
    msg.setTimeStamp(0.737461563116);
    msg.setSource(3620U);
    msg.setSourceEntity(148U);
    msg.setDestination(64821U);
    msg.setDestinationEntity(211U);
    msg.op = 144U;
    msg.system.assign("RJPWGWNMVIPRJCFQFELNBIBJRMWAYYGCWUGHJHEKHXVEJDCWZLKAXGEOUNCQOOEACBBZXLXGWQNOGYORTSBQDOKDMIPVJLKWBHFTHVXQNFWRMQGAOXHS");
    msg.range = 0.5771218564;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 3944227115U;
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
    msg.setTimeStamp(0.878696785667);
    msg.setSource(83U);
    msg.setSourceEntity(166U);
    msg.setDestination(36571U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.355802128819);
    msg.setSource(16411U);
    msg.setSourceEntity(118U);
    msg.setDestination(50081U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.943909136377);
    msg.setSource(17380U);
    msg.setSourceEntity(242U);
    msg.setDestination(32855U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.211233502969);
    msg.setSource(24848U);
    msg.setSourceEntity(108U);
    msg.setDestination(38507U);
    msg.setDestinationEntity(236U);
    msg.list.assign("KTKMBXYJWXQUPOWWNGGHXHYXIDLNFYNNZILBFLSJMMBJZGTJYJTKEJDXAIPEKQJQPUCLAYIWVVHKABLTTOUZWHXRQOUEOIQOZUGKDVVENGTHPCCOOEDGQTZFHFIZCFUXCTC");

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
    msg.setTimeStamp(0.920669377622);
    msg.setSource(50300U);
    msg.setSourceEntity(164U);
    msg.setDestination(22838U);
    msg.setDestinationEntity(133U);
    msg.list.assign("LSMTIWQLRAVPKNPMUDYMEGUCRIAKFXOBCIZXUGGUCIQWBZWWDMMUVBNKIEEAAKRDSOPLAQTHVNQXQGMPXVOYXGRWNJIGESAHQEGYQWPPTPBZOQZGKYHMXAJHEZRMPUFYRCZFSWTCVTKLVFYHDBRACRRYNHWJWDNLVAKJDFIBYVFBBHOWJZJLCOEUNNUYSPNXDHBZKSSOTKKQMGVQDESUXTURCGIFOEDVLZFOTTILX");

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
    msg.setTimeStamp(0.949060470519);
    msg.setSource(27520U);
    msg.setSourceEntity(24U);
    msg.setDestination(19706U);
    msg.setDestinationEntity(159U);
    msg.list.assign("PHKFYFMYAOKUVZJVGUBUYRQ");

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
    msg.setTimeStamp(0.10434625344);
    msg.setSource(20328U);
    msg.setSourceEntity(107U);
    msg.setDestination(17529U);
    msg.setDestinationEntity(130U);
    msg.value = -20771;

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
    msg.setTimeStamp(0.130783138934);
    msg.setSource(37584U);
    msg.setSourceEntity(227U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(185U);
    msg.value = 31560;

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
    msg.setTimeStamp(0.433039326777);
    msg.setSource(29305U);
    msg.setSourceEntity(238U);
    msg.setDestination(62736U);
    msg.setDestinationEntity(211U);
    msg.value = 18158;

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
    msg.setTimeStamp(0.586172790209);
    msg.setSource(2154U);
    msg.setSourceEntity(253U);
    msg.setDestination(45085U);
    msg.setDestinationEntity(214U);
    msg.value = 0.768582780295;

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
    msg.setTimeStamp(0.979331644732);
    msg.setSource(23844U);
    msg.setSourceEntity(78U);
    msg.setDestination(28230U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4055916978;

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
    msg.setTimeStamp(0.165172745813);
    msg.setSource(54107U);
    msg.setSourceEntity(84U);
    msg.setDestination(11509U);
    msg.setDestinationEntity(238U);
    msg.value = 0.317698316969;

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
    msg.setTimeStamp(0.0325242911311);
    msg.setSource(16357U);
    msg.setSourceEntity(231U);
    msg.setDestination(47336U);
    msg.setDestinationEntity(16U);
    msg.value = 0.800377323883;

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
    msg.setTimeStamp(0.159389914417);
    msg.setSource(24724U);
    msg.setSourceEntity(129U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(210U);
    msg.value = 0.781366055772;

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
    msg.setTimeStamp(0.364867815262);
    msg.setSource(47657U);
    msg.setSourceEntity(62U);
    msg.setDestination(42926U);
    msg.setDestinationEntity(92U);
    msg.value = 0.278781927947;

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
    msg.setTimeStamp(0.0556554306477);
    msg.setSource(42520U);
    msg.setSourceEntity(129U);
    msg.setDestination(22211U);
    msg.setDestinationEntity(80U);
    msg.validity = 33567U;
    msg.type = 249U;
    msg.utc_year = 24754U;
    msg.utc_month = 109U;
    msg.utc_day = 9U;
    msg.utc_time = 0.482356347519;
    msg.lat = 0.390134437156;
    msg.lon = 0.874025832671;
    msg.height = 0.989976723827;
    msg.satellites = 181U;
    msg.cog = 0.141313896854;
    msg.sog = 0.342042734545;
    msg.hdop = 0.73649183484;
    msg.vdop = 0.976103101485;
    msg.hacc = 0.571429029357;
    msg.vacc = 0.478468061182;

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
    msg.setTimeStamp(0.126831002085);
    msg.setSource(36293U);
    msg.setSourceEntity(24U);
    msg.setDestination(59269U);
    msg.setDestinationEntity(26U);
    msg.validity = 61389U;
    msg.type = 117U;
    msg.utc_year = 18810U;
    msg.utc_month = 4U;
    msg.utc_day = 15U;
    msg.utc_time = 0.155565985875;
    msg.lat = 0.840212862093;
    msg.lon = 0.741864598085;
    msg.height = 0.201224427079;
    msg.satellites = 101U;
    msg.cog = 0.14600256376;
    msg.sog = 0.865019953838;
    msg.hdop = 0.223694895425;
    msg.vdop = 0.213041083567;
    msg.hacc = 0.0707623819476;
    msg.vacc = 0.295727045765;

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
    msg.setTimeStamp(0.752727732262);
    msg.setSource(41800U);
    msg.setSourceEntity(239U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(88U);
    msg.validity = 8709U;
    msg.type = 103U;
    msg.utc_year = 25579U;
    msg.utc_month = 136U;
    msg.utc_day = 25U;
    msg.utc_time = 0.881991480777;
    msg.lat = 0.84376234096;
    msg.lon = 0.00293118135402;
    msg.height = 0.844350276357;
    msg.satellites = 234U;
    msg.cog = 0.413751940207;
    msg.sog = 0.36276416911;
    msg.hdop = 0.0775656896968;
    msg.vdop = 0.519004829394;
    msg.hacc = 0.57370910806;
    msg.vacc = 0.618300163071;

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
    msg.setTimeStamp(0.738514246526);
    msg.setSource(37672U);
    msg.setSourceEntity(89U);
    msg.setDestination(46528U);
    msg.setDestinationEntity(48U);
    msg.time = 0.849775728413;
    msg.phi = 0.439260780811;
    msg.theta = 0.282089953706;
    msg.psi = 0.504989971257;
    msg.psi_magnetic = 0.74658771293;

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
    msg.setTimeStamp(0.0582653601047);
    msg.setSource(9116U);
    msg.setSourceEntity(172U);
    msg.setDestination(39900U);
    msg.setDestinationEntity(245U);
    msg.time = 0.959690331838;
    msg.phi = 0.295900116883;
    msg.theta = 0.893160308456;
    msg.psi = 0.870608183434;
    msg.psi_magnetic = 0.145763643515;

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
    msg.setTimeStamp(0.602994516184);
    msg.setSource(55089U);
    msg.setSourceEntity(165U);
    msg.setDestination(43076U);
    msg.setDestinationEntity(116U);
    msg.time = 0.806357355914;
    msg.phi = 0.0277413627914;
    msg.theta = 0.0729224462157;
    msg.psi = 0.339239129095;
    msg.psi_magnetic = 0.191217530176;

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
    msg.setTimeStamp(0.881675267782);
    msg.setSource(15907U);
    msg.setSourceEntity(62U);
    msg.setDestination(63109U);
    msg.setDestinationEntity(79U);
    msg.time = 0.0714534938997;
    msg.x = 0.0291510197317;
    msg.y = 0.0527630482546;
    msg.z = 0.51927878604;
    msg.timestep = 0.242694350459;

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
    msg.setTimeStamp(0.672549140332);
    msg.setSource(47087U);
    msg.setSourceEntity(216U);
    msg.setDestination(22346U);
    msg.setDestinationEntity(64U);
    msg.time = 0.531434419351;
    msg.x = 0.697416104736;
    msg.y = 0.00867892506025;
    msg.z = 0.765237175512;
    msg.timestep = 0.998220517734;

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
    msg.setTimeStamp(0.835909138438);
    msg.setSource(27476U);
    msg.setSourceEntity(185U);
    msg.setDestination(59263U);
    msg.setDestinationEntity(87U);
    msg.time = 0.0454742788018;
    msg.x = 0.7945016248;
    msg.y = 0.581013420717;
    msg.z = 0.110428051347;
    msg.timestep = 0.732638683458;

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
    msg.setTimeStamp(0.627751064176);
    msg.setSource(46558U);
    msg.setSourceEntity(52U);
    msg.setDestination(12797U);
    msg.setDestinationEntity(207U);
    msg.time = 0.072106298874;
    msg.x = 0.884862055568;
    msg.y = 0.346357576181;
    msg.z = 0.190635871257;

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
    msg.setTimeStamp(0.300355888662);
    msg.setSource(63477U);
    msg.setSourceEntity(112U);
    msg.setDestination(54157U);
    msg.setDestinationEntity(11U);
    msg.time = 0.317184819247;
    msg.x = 0.00623076681356;
    msg.y = 0.76330672284;
    msg.z = 0.466181892049;

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
    msg.setTimeStamp(0.876316189004);
    msg.setSource(11100U);
    msg.setSourceEntity(152U);
    msg.setDestination(17958U);
    msg.setDestinationEntity(239U);
    msg.time = 0.486287686856;
    msg.x = 0.459261048383;
    msg.y = 0.646422036994;
    msg.z = 0.415640920603;

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
    msg.setTimeStamp(0.314029840128);
    msg.setSource(36183U);
    msg.setSourceEntity(141U);
    msg.setDestination(9787U);
    msg.setDestinationEntity(249U);
    msg.time = 0.777585809302;
    msg.x = 0.0799124749455;
    msg.y = 0.984101788502;
    msg.z = 0.121653659199;

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
    msg.setTimeStamp(0.694385309418);
    msg.setSource(22264U);
    msg.setSourceEntity(123U);
    msg.setDestination(41362U);
    msg.setDestinationEntity(35U);
    msg.time = 0.907451656591;
    msg.x = 0.459679900548;
    msg.y = 0.937165027902;
    msg.z = 0.467761576261;

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
    msg.setTimeStamp(0.189924186862);
    msg.setSource(43813U);
    msg.setSourceEntity(122U);
    msg.setDestination(8964U);
    msg.setDestinationEntity(68U);
    msg.time = 0.163097152748;
    msg.x = 0.621684694463;
    msg.y = 0.0148175375192;
    msg.z = 0.836054377707;

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
    msg.setTimeStamp(0.854299345857);
    msg.setSource(22108U);
    msg.setSourceEntity(191U);
    msg.setDestination(58587U);
    msg.setDestinationEntity(122U);
    msg.time = 0.135124448175;
    msg.x = 0.581675561798;
    msg.y = 0.00939537821995;
    msg.z = 0.00377223381831;

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
    msg.setTimeStamp(0.402123981622);
    msg.setSource(38180U);
    msg.setSourceEntity(9U);
    msg.setDestination(2329U);
    msg.setDestinationEntity(231U);
    msg.time = 0.306363515514;
    msg.x = 0.225129177389;
    msg.y = 0.116955317963;
    msg.z = 0.966147253909;

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
    msg.setTimeStamp(0.214480562624);
    msg.setSource(63788U);
    msg.setSourceEntity(119U);
    msg.setDestination(49080U);
    msg.setDestinationEntity(147U);
    msg.time = 0.593932021096;
    msg.x = 0.297660072355;
    msg.y = 0.511857125675;
    msg.z = 0.609425804425;

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
    msg.setTimeStamp(0.971606186023);
    msg.setSource(56774U);
    msg.setSourceEntity(65U);
    msg.setDestination(60905U);
    msg.setDestinationEntity(29U);
    msg.validity = 95U;
    msg.x = 0.706122632469;
    msg.y = 0.575111674428;
    msg.z = 0.114540022969;

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
    msg.setTimeStamp(0.109385894256);
    msg.setSource(57931U);
    msg.setSourceEntity(101U);
    msg.setDestination(739U);
    msg.setDestinationEntity(40U);
    msg.validity = 13U;
    msg.x = 0.900546805531;
    msg.y = 0.00793830803128;
    msg.z = 0.41771367836;

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
    msg.setTimeStamp(0.948512384901);
    msg.setSource(38896U);
    msg.setSourceEntity(165U);
    msg.setDestination(63270U);
    msg.setDestinationEntity(216U);
    msg.validity = 41U;
    msg.x = 0.185675350432;
    msg.y = 0.983615244805;
    msg.z = 0.739734450978;

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
    msg.setTimeStamp(0.134439381093);
    msg.setSource(32745U);
    msg.setSourceEntity(66U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(171U);
    msg.validity = 45U;
    msg.x = 0.937634488841;
    msg.y = 0.224202716626;
    msg.z = 0.516998854578;

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
    msg.setTimeStamp(0.845286923034);
    msg.setSource(25146U);
    msg.setSourceEntity(222U);
    msg.setDestination(9432U);
    msg.setDestinationEntity(14U);
    msg.validity = 88U;
    msg.x = 0.187577004211;
    msg.y = 0.00117757565572;
    msg.z = 0.205578256419;

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
    msg.setTimeStamp(0.109037121226);
    msg.setSource(14601U);
    msg.setSourceEntity(218U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(129U);
    msg.validity = 102U;
    msg.x = 0.828210477561;
    msg.y = 0.599295740295;
    msg.z = 0.864430865686;

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
    msg.setTimeStamp(0.777259571635);
    msg.setSource(12415U);
    msg.setSourceEntity(73U);
    msg.setDestination(16525U);
    msg.setDestinationEntity(91U);
    msg.time = 0.225164767361;
    msg.x = 0.888252199635;
    msg.y = 0.938925961593;
    msg.z = 0.566199245471;

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
    msg.setTimeStamp(0.6293691284);
    msg.setSource(41101U);
    msg.setSourceEntity(57U);
    msg.setDestination(813U);
    msg.setDestinationEntity(86U);
    msg.time = 0.460294763379;
    msg.x = 0.805693404991;
    msg.y = 0.678183647378;
    msg.z = 0.827328786272;

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
    msg.setTimeStamp(0.64823476707);
    msg.setSource(32175U);
    msg.setSourceEntity(170U);
    msg.setDestination(31506U);
    msg.setDestinationEntity(90U);
    msg.time = 0.0732914552743;
    msg.x = 0.820141404959;
    msg.y = 0.00366268660847;
    msg.z = 0.187590224191;

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
    msg.setTimeStamp(0.359497670104);
    msg.setSource(58687U);
    msg.setSourceEntity(176U);
    msg.setDestination(46952U);
    msg.setDestinationEntity(60U);
    msg.validity = 22U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.167441092934;
    tmp_msg_0.y = 0.116268593697;
    tmp_msg_0.z = 0.15627872906;
    tmp_msg_0.phi = 0.287459999326;
    tmp_msg_0.theta = 0.961775511959;
    tmp_msg_0.psi = 0.869876973432;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0808421845634;

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
    msg.setTimeStamp(0.599009658392);
    msg.setSource(33999U);
    msg.setSourceEntity(71U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(247U);
    msg.validity = 107U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.937639746398;
    tmp_msg_0.y = 0.421383507296;
    tmp_msg_0.z = 0.947147171633;
    tmp_msg_0.phi = 0.259031647296;
    tmp_msg_0.theta = 0.334801127412;
    tmp_msg_0.psi = 0.19482345783;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.721619073256;
    tmp_msg_1.beam_height = 0.474406665522;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.188293689265;

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
    msg.setTimeStamp(0.898365297473);
    msg.setSource(35835U);
    msg.setSourceEntity(50U);
    msg.setDestination(32420U);
    msg.setDestinationEntity(97U);
    msg.validity = 82U;
    msg.value = 0.730073172953;

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
    msg.setTimeStamp(0.174828914002);
    msg.setSource(12775U);
    msg.setSourceEntity(67U);
    msg.setDestination(34364U);
    msg.setDestinationEntity(60U);
    msg.value = 0.021795238108;

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
    msg.setTimeStamp(0.938790986131);
    msg.setSource(45286U);
    msg.setSourceEntity(116U);
    msg.setDestination(51053U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0483071850281;

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
    msg.setTimeStamp(0.976147924392);
    msg.setSource(63427U);
    msg.setSourceEntity(171U);
    msg.setDestination(39779U);
    msg.setDestinationEntity(92U);
    msg.value = 0.524800972293;

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
    msg.setTimeStamp(0.87496667495);
    msg.setSource(20631U);
    msg.setSourceEntity(83U);
    msg.setDestination(50319U);
    msg.setDestinationEntity(83U);
    msg.value = 0.540781777358;

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
    msg.setTimeStamp(0.681091871925);
    msg.setSource(43916U);
    msg.setSourceEntity(125U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(180U);
    msg.value = 0.478609945835;

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
    msg.setTimeStamp(0.953093511828);
    msg.setSource(29462U);
    msg.setSourceEntity(138U);
    msg.setDestination(49203U);
    msg.setDestinationEntity(216U);
    msg.value = 0.0693728119767;

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
    msg.setTimeStamp(0.949474042408);
    msg.setSource(64172U);
    msg.setSourceEntity(210U);
    msg.setDestination(61968U);
    msg.setDestinationEntity(167U);
    msg.value = 0.63541464873;

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
    msg.setTimeStamp(0.372868970164);
    msg.setSource(3018U);
    msg.setSourceEntity(206U);
    msg.setDestination(41955U);
    msg.setDestinationEntity(59U);
    msg.value = 0.772643325458;

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
    msg.setTimeStamp(0.936175795852);
    msg.setSource(5770U);
    msg.setSourceEntity(180U);
    msg.setDestination(231U);
    msg.setDestinationEntity(157U);
    msg.value = 0.522424594759;

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
    msg.setTimeStamp(0.665110314898);
    msg.setSource(4130U);
    msg.setSourceEntity(118U);
    msg.setDestination(10560U);
    msg.setDestinationEntity(155U);
    msg.value = 0.33068133032;

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
    msg.setTimeStamp(0.900209185989);
    msg.setSource(26595U);
    msg.setSourceEntity(210U);
    msg.setDestination(54690U);
    msg.setDestinationEntity(63U);
    msg.value = 0.273247911484;

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
    msg.setTimeStamp(0.899906331081);
    msg.setSource(10106U);
    msg.setSourceEntity(198U);
    msg.setDestination(1146U);
    msg.setDestinationEntity(192U);
    msg.value = 0.937107581168;

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
    msg.setTimeStamp(0.71091685152);
    msg.setSource(5966U);
    msg.setSourceEntity(138U);
    msg.setDestination(32726U);
    msg.setDestinationEntity(4U);
    msg.value = 0.869166779267;

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
    msg.setTimeStamp(0.700808320589);
    msg.setSource(16758U);
    msg.setSourceEntity(29U);
    msg.setDestination(9513U);
    msg.setDestinationEntity(136U);
    msg.value = 0.3162020432;

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
    msg.setTimeStamp(0.943129367899);
    msg.setSource(210U);
    msg.setSourceEntity(98U);
    msg.setDestination(40821U);
    msg.setDestinationEntity(108U);
    msg.value = 0.578361440365;

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
    msg.setTimeStamp(0.548582442853);
    msg.setSource(63768U);
    msg.setSourceEntity(53U);
    msg.setDestination(1579U);
    msg.setDestinationEntity(208U);
    msg.value = 0.865943576366;

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
    msg.setTimeStamp(0.153193944569);
    msg.setSource(44389U);
    msg.setSourceEntity(159U);
    msg.setDestination(4662U);
    msg.setDestinationEntity(115U);
    msg.value = 0.184281966239;

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
    msg.setTimeStamp(0.0400193054754);
    msg.setSource(42029U);
    msg.setSourceEntity(176U);
    msg.setDestination(26306U);
    msg.setDestinationEntity(136U);
    msg.value = 0.512757571596;

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
    msg.setTimeStamp(0.323891188179);
    msg.setSource(45982U);
    msg.setSourceEntity(199U);
    msg.setDestination(28707U);
    msg.setDestinationEntity(71U);
    msg.value = 0.744848737261;

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
    msg.setTimeStamp(0.439048768355);
    msg.setSource(5136U);
    msg.setSourceEntity(239U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(71U);
    msg.value = 0.383509493179;

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
    msg.setTimeStamp(0.551515172886);
    msg.setSource(22365U);
    msg.setSourceEntity(240U);
    msg.setDestination(53233U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0535070506449;

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
    msg.setTimeStamp(0.815558869375);
    msg.setSource(18929U);
    msg.setSourceEntity(35U);
    msg.setDestination(7098U);
    msg.setDestinationEntity(215U);
    msg.value = 0.609318269419;

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
    msg.setTimeStamp(0.487445222459);
    msg.setSource(24598U);
    msg.setSourceEntity(84U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(44U);
    msg.value = 0.345692336853;

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
    msg.setTimeStamp(0.404083916714);
    msg.setSource(31300U);
    msg.setSourceEntity(196U);
    msg.setDestination(43126U);
    msg.setDestinationEntity(198U);
    msg.value = 0.935949388351;

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
    msg.setTimeStamp(0.772030763202);
    msg.setSource(22064U);
    msg.setSourceEntity(82U);
    msg.setDestination(3066U);
    msg.setDestinationEntity(122U);
    msg.direction = 0.236290096107;
    msg.speed = 0.613472229426;
    msg.turbulence = 0.426252675788;

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
    msg.setTimeStamp(0.375083966729);
    msg.setSource(61644U);
    msg.setSourceEntity(232U);
    msg.setDestination(36124U);
    msg.setDestinationEntity(140U);
    msg.direction = 0.27234748865;
    msg.speed = 0.225458177647;
    msg.turbulence = 0.475931538009;

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
    msg.setTimeStamp(0.667032099472);
    msg.setSource(62130U);
    msg.setSourceEntity(209U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(177U);
    msg.direction = 0.937614241271;
    msg.speed = 0.215312749177;
    msg.turbulence = 0.821806127337;

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
    msg.setTimeStamp(0.325742264451);
    msg.setSource(3061U);
    msg.setSourceEntity(84U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(105U);
    msg.value = 0.541188508938;

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
    msg.setTimeStamp(0.275408125854);
    msg.setSource(55812U);
    msg.setSourceEntity(225U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(17U);
    msg.value = 0.126518508795;

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
    msg.setTimeStamp(0.952101457212);
    msg.setSource(18651U);
    msg.setSourceEntity(40U);
    msg.setDestination(65078U);
    msg.setDestinationEntity(120U);
    msg.value = 0.625014442649;

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
    msg.setTimeStamp(0.124972490957);
    msg.setSource(44618U);
    msg.setSourceEntity(209U);
    msg.setDestination(33927U);
    msg.setDestinationEntity(244U);
    msg.value.assign("VOSDEHOKISMMIGLBGTZGQDEEKTAYHXKSXIYXFHLCMIUDAHPPUVFDYCTKOKNGJYFIYUAQPVVCQGODRCOMPYPBVHCCWMZNSMZTESJYQTKJXCARLWLQZJPCQTZFGADJYBKSSNXWWSKTLVYQBPLRYDOOZRJMRTFHNESHBAZFTWANRWILZRJFHCWOXQWQZBBFJEUGJLWNPRNKFNHJOAQIXXDVARXLWUXSBIADELEUPENHMUGUUMCNDZVPKBUGVEI");

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
    msg.setTimeStamp(0.751423242458);
    msg.setSource(36203U);
    msg.setSourceEntity(182U);
    msg.setDestination(45484U);
    msg.setDestinationEntity(244U);
    msg.value.assign("FQKVXCKNSIFEOPHDCTNLPXJBVHGFLJOOUBSIIEAUPPGDVWHFOTNNQBU");

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
    msg.setTimeStamp(0.459991376216);
    msg.setSource(41560U);
    msg.setSourceEntity(200U);
    msg.setDestination(43360U);
    msg.setDestinationEntity(117U);
    msg.value.assign("SPFWCSXDDYG");

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
    msg.setTimeStamp(0.695887232057);
    msg.setSource(37396U);
    msg.setSourceEntity(251U);
    msg.setDestination(15367U);
    msg.setDestinationEntity(137U);
    const char tmp_msg_0[] = {-90, 33, 59, -119, -110, -90, 2, -15, 122, 38, 115, -10, -22, 22, -102, 121, 87, -65, -90, 7, 48, 56, -16, -10, -24, 67, 5, 51, -113, -17, -2, 76, -79, 104, 123, -27, -126, 8, 63, -61, 112, -37, 27, 76, 60, 104, -15, -54, -29, 40, 84, -75, -70, 57, 58, -120, -113, -76, -69, 64, -98, 18, 60, -11, -8, -85, -23, 26, 53, -102, -98, 13, -109};
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
    msg.setTimeStamp(0.632401142526);
    msg.setSource(17538U);
    msg.setSourceEntity(129U);
    msg.setDestination(19032U);
    msg.setDestinationEntity(63U);
    const char tmp_msg_0[] = {82, -28, -25, 57, 56, -20, 100, -81, -7, 9, -117, -12, 79, 98, -120, -79, -43, -116};
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
    msg.setTimeStamp(0.741572827835);
    msg.setSource(64694U);
    msg.setSourceEntity(150U);
    msg.setDestination(36903U);
    msg.setDestinationEntity(60U);
    const char tmp_msg_0[] = {-94, 84, -65, -48, 33, -26, 34, 48, -73, 51, 26, 57, 20, -124, 114, -91, -118, 85, 57, 35, 79, 51, 45, 33, 98};
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
    msg.setTimeStamp(0.936634887311);
    msg.setSource(38502U);
    msg.setSourceEntity(134U);
    msg.setDestination(15785U);
    msg.setDestinationEntity(127U);
    msg.type = 24U;
    msg.frequency = 1623829787U;
    msg.min_range = 1543U;
    msg.max_range = 15377U;
    msg.bits_per_point = 161U;
    msg.scale_factor = 0.773962328742;
    const char tmp_msg_0[] = {21, 106, -43, 91, -13, -35, -98, 52, 80, -66, 85, -97, 1, -64, -77, 126, -89, -22, -83, -108, -82, -57, -99, -47, -58, 110, -76, 69, 98, 17, 41, 69, -126, 23, -15, -71, -24, 19, -30, -50, -117, -29, 0, -34, 52, -27, -98, -115, -61, -53, 90, 29, 35, 78, 0, -35, 119, -101, 43, 122, -47, 19, 106, -3, -14, -18, 1, 85, -71, 96, -98, -23, 37, -120, 37, 38, 116, 57, 4, 49, -105, 105, 10, 107, 16, 48, 54, -52, 4, 69, -84, -38, -82, 114, 75, 102, 50, -72, -112, -34, 48, -48, -80, -53, -34, 15, -57};
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
    msg.setTimeStamp(0.153033141633);
    msg.setSource(47352U);
    msg.setSourceEntity(58U);
    msg.setDestination(9273U);
    msg.setDestinationEntity(20U);
    msg.type = 244U;
    msg.frequency = 1335183618U;
    msg.min_range = 49180U;
    msg.max_range = 9795U;
    msg.bits_per_point = 106U;
    msg.scale_factor = 0.707440792872;
    const char tmp_msg_0[] = {-73, -21, -18, -41, 26, 16, 37, 52, -76, -55, -4, 116, 19, 51, 117, 56, 104, 1, -6, 71, -3, 17, 80, 75, -29, 92, -112, 119, 39, 52, 126, -37, 61, -34, 9, -54, -34, -64, -119, -17, 12, -106, -9, -123, 17, -49, -89, -35, -11, 36, 62, 90, 100, -115, 102, -20, -95, 106, 100, -18, 93, -99, 1, 0, 35, -97, 10, 24, -119, 93, 111, -56, -123, -63, -50, 47, 91, 5, 61, -44, -106, 51, -60, 60, -34, -22, 23, 119, -76, -34, 12, -25, 124, 65, 101, 43, -49, -96, -41, 22, 48, 30, 4, -95, 124, 45, 115, -83, 114, 29, 105, -11, -72, -62, 7, 58, 120, -4, -112, -86, -27, 6, 90, -91, -48, -59, 7, 25, 85, -64, -16, 101, 33, -25, -44, 88, -9, -6, 44, 113, -19, -104, 71, 46, 17, 54, 123, -36, 12, 28, -101, 50, 122, 9, -1, 110, -103, -66, -55, 44, -49, 80, -72, -85, -56, 16, 41, 55, -3, -97, 51, -107, -44, 7, -90, 57, -97, 51, -83, -22, 70, 27, 37, -51, 101};
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
    msg.setTimeStamp(0.95722784719);
    msg.setSource(4052U);
    msg.setSourceEntity(139U);
    msg.setDestination(19139U);
    msg.setDestinationEntity(140U);
    msg.type = 193U;
    msg.frequency = 1066020967U;
    msg.min_range = 28080U;
    msg.max_range = 19277U;
    msg.bits_per_point = 89U;
    msg.scale_factor = 0.221266800408;
    const char tmp_msg_0[] = {115, 14, -105, 70, 65, 66, -44, -17, 15, 107, -122, 63};
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
    msg.setTimeStamp(0.407957884116);
    msg.setSource(23651U);
    msg.setSourceEntity(43U);
    msg.setDestination(55274U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.86561220482);
    msg.setSource(31899U);
    msg.setSourceEntity(48U);
    msg.setDestination(35537U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.641256901036);
    msg.setSource(26138U);
    msg.setSourceEntity(40U);
    msg.setDestination(25608U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.553846286776);
    msg.setSource(37212U);
    msg.setSourceEntity(240U);
    msg.setDestination(31468U);
    msg.setDestinationEntity(202U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.0762324454915);
    msg.setSource(26709U);
    msg.setSourceEntity(80U);
    msg.setDestination(39224U);
    msg.setDestinationEntity(237U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.0900939582079);
    msg.setSource(20310U);
    msg.setSourceEntity(251U);
    msg.setDestination(21531U);
    msg.setDestinationEntity(241U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.56701521249);
    msg.setSource(13406U);
    msg.setSourceEntity(239U);
    msg.setDestination(17969U);
    msg.setDestinationEntity(127U);
    msg.value = 0.224859509592;
    msg.confidence = 0.983160087523;
    msg.opmodes.assign("SVFMJYXMVTLQWMATJYSUHNYOZCIUSIWFHBOYPGDCBXTTAJDXJVRDNYDPKZDCAMAEHPSWEZCBLYWQGRTUEERRAKPYEMNTQJHZBTNSCTAZHAQREIGJDPOQXKWXUAMSQFFUZNGKVVLILPKRBVBNOWCOLCIENLCLT");

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
    msg.setTimeStamp(0.456777270274);
    msg.setSource(11882U);
    msg.setSourceEntity(242U);
    msg.setDestination(14643U);
    msg.setDestinationEntity(180U);
    msg.value = 0.53722249546;
    msg.confidence = 0.635524862361;
    msg.opmodes.assign("AOAQVJITAYTMGGHRKKGUMAPJOSOKBPULMJXCKWWSONSDCEVIBYFEMFGYYBPBXLVUZTCZVLTZFYWNHJFXTKERFAWKJTDJTPIRSRXJZYJCCCJVQOLYDDFHEIIOLXZNQPMISDBXGHXLDYZNCQNGCNLQHOFBDNNEEAMGSXW");

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
    msg.setTimeStamp(0.63751466802);
    msg.setSource(22591U);
    msg.setSourceEntity(241U);
    msg.setDestination(33257U);
    msg.setDestinationEntity(88U);
    msg.value = 0.983576487571;
    msg.confidence = 0.498614689106;
    msg.opmodes.assign("BMIXGLJOSIQQLHRKLPOJVZARAMIZOAENUPGXJRGHXIEXGKXEBACNYTFZSYZIKSRNPNHSEUKNEWWCJDCMPIGT");

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
    msg.setTimeStamp(0.263817555933);
    msg.setSource(42436U);
    msg.setSourceEntity(20U);
    msg.setDestination(8076U);
    msg.setDestinationEntity(92U);
    msg.itow = 2947929741U;
    msg.lat = 0.467154429836;
    msg.lon = 0.942472322075;
    msg.height_ell = 0.724178766447;
    msg.height_sea = 0.05802120357;
    msg.hacc = 0.719340398618;
    msg.vacc = 0.744894504277;
    msg.vel_n = 0.665676469113;
    msg.vel_e = 0.570762675297;
    msg.vel_d = 0.68142896757;
    msg.speed = 0.246605355509;
    msg.gspeed = 0.502868305302;
    msg.heading = 0.402037469181;
    msg.sacc = 0.808410664277;
    msg.cacc = 0.685385552449;

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
    msg.setTimeStamp(0.984479375555);
    msg.setSource(21497U);
    msg.setSourceEntity(231U);
    msg.setDestination(18551U);
    msg.setDestinationEntity(163U);
    msg.itow = 1117195107U;
    msg.lat = 0.435681942394;
    msg.lon = 0.561258271626;
    msg.height_ell = 0.252900413008;
    msg.height_sea = 0.312577650115;
    msg.hacc = 0.422296936094;
    msg.vacc = 0.428469997352;
    msg.vel_n = 0.214806059735;
    msg.vel_e = 0.250362058437;
    msg.vel_d = 0.631330357016;
    msg.speed = 0.156310383349;
    msg.gspeed = 0.203573935971;
    msg.heading = 0.750429791328;
    msg.sacc = 0.624342154541;
    msg.cacc = 0.299902878079;

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
    msg.setTimeStamp(0.331910954357);
    msg.setSource(24767U);
    msg.setSourceEntity(150U);
    msg.setDestination(40264U);
    msg.setDestinationEntity(88U);
    msg.itow = 354758206U;
    msg.lat = 0.949978827838;
    msg.lon = 0.982639965309;
    msg.height_ell = 0.492508618814;
    msg.height_sea = 0.149642783992;
    msg.hacc = 0.357153070822;
    msg.vacc = 0.782725826191;
    msg.vel_n = 0.862841372753;
    msg.vel_e = 0.0184901774562;
    msg.vel_d = 0.965209088088;
    msg.speed = 0.113995775028;
    msg.gspeed = 0.862161227392;
    msg.heading = 0.903597450746;
    msg.sacc = 0.765685847199;
    msg.cacc = 0.955186526499;

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
    msg.setTimeStamp(0.0176077639022);
    msg.setSource(25987U);
    msg.setSourceEntity(96U);
    msg.setDestination(59758U);
    msg.setDestinationEntity(147U);
    msg.id = 177U;
    msg.value = 0.812318615627;

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
    msg.setTimeStamp(0.304047828539);
    msg.setSource(12014U);
    msg.setSourceEntity(248U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(46U);
    msg.id = 187U;
    msg.value = 0.232839935179;

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
    msg.setTimeStamp(0.932558464926);
    msg.setSource(19057U);
    msg.setSourceEntity(118U);
    msg.setDestination(17892U);
    msg.setDestinationEntity(86U);
    msg.id = 217U;
    msg.value = 0.0403881176663;

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
    msg.setTimeStamp(0.413963775197);
    msg.setSource(43602U);
    msg.setSourceEntity(56U);
    msg.setDestination(19983U);
    msg.setDestinationEntity(234U);
    msg.x = 0.447817829168;
    msg.y = 0.692643162801;
    msg.z = 0.703127806812;
    msg.phi = 0.707404672534;
    msg.theta = 0.759184183904;
    msg.psi = 0.607122414955;

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
    msg.setTimeStamp(0.535767359652);
    msg.setSource(22446U);
    msg.setSourceEntity(250U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(6U);
    msg.x = 0.757079099301;
    msg.y = 0.667803668484;
    msg.z = 0.286811075667;
    msg.phi = 0.21588464095;
    msg.theta = 0.0259909860902;
    msg.psi = 0.375067500345;

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
    msg.setTimeStamp(0.262723571882);
    msg.setSource(50007U);
    msg.setSourceEntity(63U);
    msg.setDestination(46915U);
    msg.setDestinationEntity(172U);
    msg.x = 0.474898100048;
    msg.y = 0.0633004014377;
    msg.z = 0.29933355292;
    msg.phi = 0.315076782674;
    msg.theta = 0.201365327365;
    msg.psi = 0.855080793523;

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
    msg.setTimeStamp(0.966060380905);
    msg.setSource(17751U);
    msg.setSourceEntity(208U);
    msg.setDestination(25881U);
    msg.setDestinationEntity(240U);
    msg.beam_width = 0.679445765529;
    msg.beam_height = 0.833737008898;

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
    msg.setTimeStamp(0.106671548884);
    msg.setSource(23980U);
    msg.setSourceEntity(170U);
    msg.setDestination(34354U);
    msg.setDestinationEntity(235U);
    msg.beam_width = 0.661513286139;
    msg.beam_height = 0.944320129973;

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
    msg.setTimeStamp(0.957991348733);
    msg.setSource(47710U);
    msg.setSourceEntity(33U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(210U);
    msg.beam_width = 0.434794159478;
    msg.beam_height = 0.365457228275;

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
    msg.setTimeStamp(0.353224730607);
    msg.setSource(24547U);
    msg.setSourceEntity(139U);
    msg.setDestination(5924U);
    msg.setDestinationEntity(109U);
    msg.sane = 101U;

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
    msg.setTimeStamp(0.98107778673);
    msg.setSource(54610U);
    msg.setSourceEntity(4U);
    msg.setDestination(40172U);
    msg.setDestinationEntity(96U);
    msg.sane = 177U;

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
    msg.setTimeStamp(0.953380908097);
    msg.setSource(16931U);
    msg.setSourceEntity(55U);
    msg.setDestination(6152U);
    msg.setDestinationEntity(170U);
    msg.sane = 119U;

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
    msg.setTimeStamp(0.302641049357);
    msg.setSource(55183U);
    msg.setSourceEntity(101U);
    msg.setDestination(31021U);
    msg.setDestinationEntity(78U);
    msg.value = 0.030705332158;

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
    msg.setTimeStamp(0.911123036578);
    msg.setSource(44082U);
    msg.setSourceEntity(75U);
    msg.setDestination(38690U);
    msg.setDestinationEntity(26U);
    msg.value = 0.428945700026;

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
    msg.setTimeStamp(0.82545342413);
    msg.setSource(18732U);
    msg.setSourceEntity(52U);
    msg.setDestination(39487U);
    msg.setDestinationEntity(61U);
    msg.value = 0.105332795751;

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
    msg.setTimeStamp(0.489928312103);
    msg.setSource(17342U);
    msg.setSourceEntity(70U);
    msg.setDestination(55036U);
    msg.setDestinationEntity(13U);
    msg.value = 0.508469910295;

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
    msg.setTimeStamp(0.680880724075);
    msg.setSource(4776U);
    msg.setSourceEntity(237U);
    msg.setDestination(32700U);
    msg.setDestinationEntity(20U);
    msg.value = 0.447222497202;

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
    msg.setTimeStamp(0.51354563292);
    msg.setSource(45985U);
    msg.setSourceEntity(136U);
    msg.setDestination(53411U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0519249677838;

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
    msg.setTimeStamp(0.555712173885);
    msg.setSource(4591U);
    msg.setSourceEntity(0U);
    msg.setDestination(24500U);
    msg.setDestinationEntity(144U);
    msg.value = 0.772643501567;

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
    msg.setTimeStamp(0.873666391583);
    msg.setSource(43606U);
    msg.setSourceEntity(21U);
    msg.setDestination(61518U);
    msg.setDestinationEntity(20U);
    msg.value = 0.046205029038;

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
    msg.setTimeStamp(0.939985490553);
    msg.setSource(56879U);
    msg.setSourceEntity(34U);
    msg.setDestination(59537U);
    msg.setDestinationEntity(15U);
    msg.value = 0.548158431236;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.636651324595);
    msg.setSource(12721U);
    msg.setSourceEntity(34U);
    msg.setDestination(3177U);
    msg.setDestinationEntity(148U);
    msg.id = 151U;
    msg.zoom = 153U;
    msg.action = 51U;

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
    msg.setTimeStamp(0.0135548137762);
    msg.setSource(35561U);
    msg.setSourceEntity(72U);
    msg.setDestination(15204U);
    msg.setDestinationEntity(26U);
    msg.id = 213U;
    msg.zoom = 36U;
    msg.action = 175U;

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
    msg.setTimeStamp(0.0923794418276);
    msg.setSource(64154U);
    msg.setSourceEntity(72U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(107U);
    msg.id = 10U;
    msg.zoom = 114U;
    msg.action = 205U;

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
    msg.setTimeStamp(0.552319766853);
    msg.setSource(64336U);
    msg.setSourceEntity(153U);
    msg.setDestination(11423U);
    msg.setDestinationEntity(3U);
    msg.id = 90U;
    msg.value = 0.40872853972;

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
    msg.setTimeStamp(0.816408459176);
    msg.setSource(31064U);
    msg.setSourceEntity(198U);
    msg.setDestination(62545U);
    msg.setDestinationEntity(64U);
    msg.id = 161U;
    msg.value = 0.979283698772;

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
    msg.setTimeStamp(0.0719274195304);
    msg.setSource(42033U);
    msg.setSourceEntity(243U);
    msg.setDestination(2895U);
    msg.setDestinationEntity(39U);
    msg.id = 232U;
    msg.value = 0.77597684708;

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
    msg.setTimeStamp(0.581777838139);
    msg.setSource(7357U);
    msg.setSourceEntity(18U);
    msg.setDestination(51546U);
    msg.setDestinationEntity(104U);
    msg.id = 198U;
    msg.value = 0.576683927919;

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
    msg.setTimeStamp(0.759247152729);
    msg.setSource(6901U);
    msg.setSourceEntity(51U);
    msg.setDestination(40353U);
    msg.setDestinationEntity(98U);
    msg.id = 90U;
    msg.value = 0.535309219322;

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
    msg.setTimeStamp(0.103508018971);
    msg.setSource(11942U);
    msg.setSourceEntity(205U);
    msg.setDestination(39254U);
    msg.setDestinationEntity(187U);
    msg.id = 80U;
    msg.value = 0.335924319554;

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
    msg.setTimeStamp(0.0809995876612);
    msg.setSource(46402U);
    msg.setSourceEntity(74U);
    msg.setDestination(52300U);
    msg.setDestinationEntity(194U);
    msg.id = 168U;
    msg.angle = 0.374915961945;

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
    msg.setTimeStamp(0.343405012462);
    msg.setSource(34021U);
    msg.setSourceEntity(72U);
    msg.setDestination(41000U);
    msg.setDestinationEntity(81U);
    msg.id = 4U;
    msg.angle = 0.565120759796;

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
    msg.setTimeStamp(0.629647880031);
    msg.setSource(28147U);
    msg.setSourceEntity(9U);
    msg.setDestination(41017U);
    msg.setDestinationEntity(214U);
    msg.id = 207U;
    msg.angle = 0.479453090484;

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
    msg.setTimeStamp(0.35856806537);
    msg.setSource(2092U);
    msg.setSourceEntity(28U);
    msg.setDestination(65117U);
    msg.setDestinationEntity(1U);
    msg.op = 158U;
    msg.actions.assign("YXLNQWGJDBWLNPIYRVRPBPRXWQHCTFPHFBLDGMVJABNIRVVGUHDACBDSBDALUXTWRCLYADBNQOESNFGQNWIEWZVDKQVALOTYOHAFUCIKUEOAFXEZTORQCINOYNMERZFOEYCYOLTLJIBJPTKOMIZZVNZHKBCCATHLAHMILXVGJVKUKWZGMTPM");

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
    msg.setTimeStamp(0.673779153503);
    msg.setSource(29712U);
    msg.setSourceEntity(24U);
    msg.setDestination(42998U);
    msg.setDestinationEntity(183U);
    msg.op = 245U;
    msg.actions.assign("ZADVQSEHMLYKVCJVUHKXHTTXJHCDWWHDOSUGAOGXNFAMTIVGXIUMDLGTOBMRQZPRDFXTIYPTBQAWEMRLIFLKCXQNZGPYK");

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
    msg.setTimeStamp(0.984782891242);
    msg.setSource(47373U);
    msg.setSourceEntity(79U);
    msg.setDestination(61170U);
    msg.setDestinationEntity(90U);
    msg.op = 48U;
    msg.actions.assign("SXOCICUWNSADYZFKPFUBUUMDWQBYTXVXUWRGZEMLITVALKOHLQPVQRTGNKBGDKETUL");

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
    msg.setTimeStamp(0.202854551261);
    msg.setSource(37854U);
    msg.setSourceEntity(245U);
    msg.setDestination(11705U);
    msg.setDestinationEntity(217U);
    msg.actions.assign("LRPBRTWIFCBNWUAKJSOPCJFCOXAEJMBFARNTRIURYHFRLOMMHPYQBDXNXMLWQMTQUVAHEFJUSXCICHLVSVNLETKGEBPGRCVXPLVEMUZSQZOPPTGKWEJIPDFIDTHKXPWQEBDMVNJZZHHGGGHJBXQDOZOUAKLUXEMNZFZWZWBIWSPOYKOFZACTSZHVALIOQWIJNYTKLDCYTUKKCWYDQSOYJHDSGMYNIVBUMDYBJRSEUFGDQIKQGNFRVT");

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
    msg.setTimeStamp(0.0832274305673);
    msg.setSource(30092U);
    msg.setSourceEntity(150U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(250U);
    msg.actions.assign("ZCQFWPBECBXUJVNJYUYFOETGHWRLLAMPWPUSJJLFHLMRCIFKYDEPZXCHLYYGFCHDQLNIUUCSVEPKRGANITJOXSUKPENTIOXEIHHPKHWFVRFOWYXCICWDNYRADPEXKHMUKTBDLRLMBRVTWOS");

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
    msg.setTimeStamp(0.674991857462);
    msg.setSource(616U);
    msg.setSourceEntity(35U);
    msg.setDestination(3414U);
    msg.setDestinationEntity(213U);
    msg.actions.assign("LCHFPKGBOAISUGBVWMHPIMCGZPYCAQBHBRMNQGYQWNUDFKOOPAJDRBMEFVRQSKNHYQCYI");

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
    msg.setTimeStamp(0.561291607675);
    msg.setSource(39663U);
    msg.setSourceEntity(226U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(8U);
    msg.button = 37U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.542337567806);
    msg.setSource(297U);
    msg.setSourceEntity(211U);
    msg.setDestination(50580U);
    msg.setDestinationEntity(6U);
    msg.button = 173U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.834022775261);
    msg.setSource(17119U);
    msg.setSourceEntity(209U);
    msg.setDestination(6880U);
    msg.setDestinationEntity(54U);
    msg.button = 217U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.270278386951);
    msg.setSource(16283U);
    msg.setSourceEntity(109U);
    msg.setDestination(11280U);
    msg.setDestinationEntity(50U);
    msg.op = 114U;
    msg.text.assign("KFYJOKGPJTOXVIZPTRAOFHEVHSLOJW");

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
    msg.setTimeStamp(0.543345280801);
    msg.setSource(45851U);
    msg.setSourceEntity(151U);
    msg.setDestination(48965U);
    msg.setDestinationEntity(53U);
    msg.op = 141U;
    msg.text.assign("AWPTAZCIVIAIKHRRFZVSUIOJYEUUHOMIYZCQJNSFNLVQTLDMSKBLFZZABKRWIEWKXWBHGXZQFWJFEGMNJURIPHYNHWZGAHSJQNTCRKIJHMUSMHVXECJNPOGKQXUBOOMRJSUXOYXSPYKLGTWQVCIFGLLDZLGFQDMMYCVGOPUUEPRBAYXASESEDHDESWBTBQGEGAFPKAJVOFDJTDCUQVWEPLMTIVOBTYDC");

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
    msg.setTimeStamp(0.0398903581755);
    msg.setSource(5227U);
    msg.setSourceEntity(51U);
    msg.setDestination(29528U);
    msg.setDestinationEntity(66U);
    msg.op = 245U;
    msg.text.assign("AODCHGHPPCUGQORRNTKXPBJVBASQAOJFTBYWVBTAUUKERYNWTNUXYGBZOHKNJIVMTURNCPXSQUQWZWHKEQJSSVHQTAGZKS");

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
    msg.setTimeStamp(0.316083225608);
    msg.setSource(52439U);
    msg.setSourceEntity(45U);
    msg.setDestination(12833U);
    msg.setDestinationEntity(151U);
    msg.op = 151U;
    msg.time_remain = 0.938334247526;
    msg.sched_time = 0.150450958758;

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
    msg.setTimeStamp(0.887497200802);
    msg.setSource(41045U);
    msg.setSourceEntity(250U);
    msg.setDestination(60752U);
    msg.setDestinationEntity(65U);
    msg.op = 214U;
    msg.time_remain = 0.218208706852;
    msg.sched_time = 0.263029060153;

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
    msg.setTimeStamp(0.224628104908);
    msg.setSource(39640U);
    msg.setSourceEntity(139U);
    msg.setDestination(31512U);
    msg.setDestinationEntity(39U);
    msg.op = 234U;
    msg.time_remain = 0.0135713863754;
    msg.sched_time = 0.426626460823;

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
    msg.setTimeStamp(0.305918389317);
    msg.setSource(61824U);
    msg.setSourceEntity(9U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(76U);
    msg.name.assign("GDPVCKPTRAAYVSRBHHYXSWJQJIHIIJFCIRDVDAVVEKAVMFVQNNTSTROZCIMFLTBSIBZPBVJHIMFDDKQMYAKQGMKWBQY");
    msg.op = 203U;
    msg.sched_time = 0.783916730353;

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
    msg.setTimeStamp(0.626654824411);
    msg.setSource(25812U);
    msg.setSourceEntity(122U);
    msg.setDestination(41277U);
    msg.setDestinationEntity(163U);
    msg.name.assign("NWFDEVLGVKYIQUXEWDKZTKFCAONHSNAOSKIGLUJPYTNTOOSKUNYQNGRTJPWTXZREAHWQETUEWZFPFIPIOVORFZLRALCHGCRDJTSBSVNXMDAVYMQECSDUWTUKXCTQLVQWGECRKPYPVCAYXLAYBGAIGJZANLERHDNGRHQZNMFMMZSMPCGSLUECBPXMQIDUBQOZWBPQPWZVIH");
    msg.op = 160U;
    msg.sched_time = 0.850943114365;

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
    msg.setTimeStamp(0.0326326595262);
    msg.setSource(21755U);
    msg.setSourceEntity(109U);
    msg.setDestination(39491U);
    msg.setDestinationEntity(8U);
    msg.name.assign("ZCCFRETCVURYPPRKJHOHYNXVYSHCAAZVEHVKPNYBXLUYMOEFXFMFAXRMZGKXDOHRCSSDVDPEJJXLDRHGPIBFVBRIQZNTBXEGMGZWLNSNRRALOIUGEIUWVWHJMUOWWPDIPLQQUAYHLTVEEQWKPD");
    msg.op = 20U;
    msg.sched_time = 0.732218476463;

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
    msg.setTimeStamp(0.395639702198);
    msg.setSource(27189U);
    msg.setSourceEntity(23U);
    msg.setDestination(47155U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.956651601326);
    msg.setSource(6603U);
    msg.setSourceEntity(55U);
    msg.setDestination(8897U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.0522583304261);
    msg.setSource(23305U);
    msg.setSourceEntity(176U);
    msg.setDestination(8379U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.501772517998);
    msg.setSource(21259U);
    msg.setSourceEntity(201U);
    msg.setDestination(54600U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ORVHECNQLLJEKJLOKZDCYTEFBKLIPFTWOZDXBAIJCZBVYZACJLQYXGFCYSDZIDELEWBWPNTTMHANEQUYYATOMKQBZULPOSMNXGMIHPKXUVAEPSGQMMJMNWQBVORJVVCIULVBCJFMI");
    msg.state = 32U;

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
    msg.setTimeStamp(0.407331956892);
    msg.setSource(48859U);
    msg.setSourceEntity(222U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(72U);
    msg.name.assign("FHONQRURJULXKNVSANTBUYWV");
    msg.state = 211U;

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
    msg.setTimeStamp(0.335761952763);
    msg.setSource(21259U);
    msg.setSourceEntity(217U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(51U);
    msg.name.assign("HSMSCLMMWMGNQYSKOEVLIXFJHGMGUUCHMBDRSWLDKNKVYKLLRGORATJIWACYJWHTWQIZPGVHXPKTBFIARFKNAHCXRJBHXAVXTIYGPFORLJQBZZULAUGEXVSTQXCOMAQWDE");
    msg.state = 133U;

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
    msg.setTimeStamp(0.43778730236);
    msg.setSource(56501U);
    msg.setSourceEntity(63U);
    msg.setDestination(11465U);
    msg.setDestinationEntity(213U);
    msg.name.assign("DYWZKVLXYBOECSIYKFUMEEDIBCZOAOJKPQHZQWGDZFCZBZGMSDEKQVS");
    msg.value = 243U;

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
    msg.setTimeStamp(0.0746199772916);
    msg.setSource(45797U);
    msg.setSourceEntity(73U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(127U);
    msg.name.assign("EPHMAXVEERRPZP");
    msg.value = 57U;

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
    msg.setTimeStamp(0.295173623875);
    msg.setSource(14810U);
    msg.setSourceEntity(208U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(66U);
    msg.name.assign("DQEVQVGFOQPSJ");
    msg.value = 6U;

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
    msg.setTimeStamp(0.978859996097);
    msg.setSource(53181U);
    msg.setSourceEntity(96U);
    msg.setDestination(63425U);
    msg.setDestinationEntity(76U);
    msg.name.assign("BJJHZUODNGAKLSZDRMKWSVJUWQFMBCBSTYIKBLWRYTCIPJOICLEXPCTOTXXJAMTIKQEVMRJARUTNMMIDJYNFRGFCODLBUKGJTAUBZYCGEOMXMVEVNFQKVFYHWBLNQNWZXQDXGGQA");

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
    msg.setTimeStamp(0.782450066797);
    msg.setSource(30323U);
    msg.setSourceEntity(154U);
    msg.setDestination(26064U);
    msg.setDestinationEntity(251U);
    msg.name.assign("NLCRAHKWQZVJOIYPWGHLJZXPCEAEBTNRYDWJBFQIMAFVJPZCLSWULOVNTBOFNAHTLDTJAWMVMBDKYCRAVIPRPODZBRWHFQEFRKKCCIQUHYDGPUOWXGSGMRMQIYHGTJLJOOVCNUFAWTGAXGX");

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
    msg.setTimeStamp(0.965868204508);
    msg.setSource(6135U);
    msg.setSourceEntity(230U);
    msg.setDestination(4278U);
    msg.setDestinationEntity(211U);
    msg.name.assign("TJWACHGPUCSCFR");

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
    msg.setTimeStamp(0.344300912993);
    msg.setSource(28768U);
    msg.setSourceEntity(174U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(254U);
    msg.name.assign("MLHAFVFZDCNGIXOMNSBVNUJVFTDSVWSSWWGBQWIYAEGPLHBUICTUOBOBXXVTHPNQTKGKAZHPMZYNLZNWTUWJGGCJPSYDIDZNVZEOKFIJEJTDPKNTQRJZGXHVLQNCCKDRIHXYYIRVESJJMKVMAKA");
    msg.value = 200U;

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
    msg.setTimeStamp(0.279410202972);
    msg.setSource(54534U);
    msg.setSourceEntity(83U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(169U);
    msg.name.assign("TRXFHTBCUKYLOEIDFKWUFGMAQQFGMNXHSFYESIUELENYCTBBUMFUGFXVFTZMAJVWSTBYHNDGLMKWHZMGRDJAMVQRUBOXGZGDPEV");
    msg.value = 200U;

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
    msg.setTimeStamp(0.582727298063);
    msg.setSource(12107U);
    msg.setSourceEntity(166U);
    msg.setDestination(10543U);
    msg.setDestinationEntity(136U);
    msg.name.assign("SRTHXKKIJOWCZYJPWAJJDNR");
    msg.value = 98U;

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
    msg.setTimeStamp(0.00503793919779);
    msg.setSource(4652U);
    msg.setSourceEntity(243U);
    msg.setDestination(5068U);
    msg.setDestinationEntity(226U);
    msg.id = 50U;
    msg.period = 905010933U;
    msg.duty_cycle = 3197862911U;

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
    msg.setTimeStamp(0.435264120114);
    msg.setSource(15380U);
    msg.setSourceEntity(236U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(205U);
    msg.id = 144U;
    msg.period = 409325443U;
    msg.duty_cycle = 2655049622U;

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
    msg.setTimeStamp(0.426839150303);
    msg.setSource(31991U);
    msg.setSourceEntity(147U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(103U);
    msg.id = 210U;
    msg.period = 2231671237U;
    msg.duty_cycle = 1981290081U;

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
    msg.setTimeStamp(0.291076147604);
    msg.setSource(22717U);
    msg.setSourceEntity(98U);
    msg.setDestination(64432U);
    msg.setDestinationEntity(225U);
    msg.id = 214U;
    msg.period = 2128090225U;
    msg.duty_cycle = 1775997284U;

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
    msg.setTimeStamp(0.547954991675);
    msg.setSource(5134U);
    msg.setSourceEntity(175U);
    msg.setDestination(39762U);
    msg.setDestinationEntity(46U);
    msg.id = 143U;
    msg.period = 2035950839U;
    msg.duty_cycle = 48268503U;

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
    msg.setTimeStamp(0.674320063818);
    msg.setSource(37997U);
    msg.setSourceEntity(221U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(12U);
    msg.id = 238U;
    msg.period = 189246747U;
    msg.duty_cycle = 4200857991U;

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
    msg.setTimeStamp(0.602170880442);
    msg.setSource(14208U);
    msg.setSourceEntity(163U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.44771489771;
    msg.lon = 0.888327143023;
    msg.height = 0.185209455181;
    msg.x = 0.652458878291;
    msg.y = 0.163511320933;
    msg.z = 0.156335541781;
    msg.phi = 0.66610675191;
    msg.theta = 0.785958375573;
    msg.psi = 0.610825659329;
    msg.u = 0.53819317709;
    msg.v = 0.139257761381;
    msg.w = 0.620385154818;
    msg.vx = 0.843290221191;
    msg.vy = 0.0425658329966;
    msg.vz = 0.604187611823;
    msg.p = 0.0670855634088;
    msg.q = 0.397244622547;
    msg.r = 0.725201621964;
    msg.depth = 0.0367797093681;
    msg.alt = 0.166077554884;

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
    msg.setTimeStamp(0.0507194975352);
    msg.setSource(48476U);
    msg.setSourceEntity(105U);
    msg.setDestination(10508U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.947980434979;
    msg.lon = 0.498974569359;
    msg.height = 0.226295333185;
    msg.x = 0.946534525871;
    msg.y = 0.167263612327;
    msg.z = 0.442059381258;
    msg.phi = 0.263765592327;
    msg.theta = 0.39000028655;
    msg.psi = 0.62935244357;
    msg.u = 0.751266663569;
    msg.v = 0.380263741562;
    msg.w = 0.737876375438;
    msg.vx = 0.106421623618;
    msg.vy = 0.926370399022;
    msg.vz = 0.506802036369;
    msg.p = 0.727339021562;
    msg.q = 0.311217054027;
    msg.r = 0.123040774279;
    msg.depth = 0.66135223694;
    msg.alt = 0.292435903509;

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
    msg.setTimeStamp(0.528112029902);
    msg.setSource(44973U);
    msg.setSourceEntity(162U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.680263858638;
    msg.lon = 0.505612206976;
    msg.height = 0.105641148767;
    msg.x = 0.518573273151;
    msg.y = 0.385505500042;
    msg.z = 0.828473915038;
    msg.phi = 0.712251936982;
    msg.theta = 0.104113428609;
    msg.psi = 0.448951792967;
    msg.u = 0.208152057115;
    msg.v = 0.329679016873;
    msg.w = 0.19502949894;
    msg.vx = 0.750543181269;
    msg.vy = 0.777342761939;
    msg.vz = 0.307382763979;
    msg.p = 0.969909485728;
    msg.q = 0.800544698304;
    msg.r = 0.547834221581;
    msg.depth = 0.472837968901;
    msg.alt = 0.712087324036;

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
    msg.setTimeStamp(0.498913822685);
    msg.setSource(41467U);
    msg.setSourceEntity(16U);
    msg.setDestination(54691U);
    msg.setDestinationEntity(10U);
    msg.x = 0.23273445528;
    msg.y = 0.241023791457;
    msg.z = 0.652497921453;

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
    msg.setTimeStamp(0.203413731476);
    msg.setSource(2614U);
    msg.setSourceEntity(13U);
    msg.setDestination(2603U);
    msg.setDestinationEntity(10U);
    msg.x = 0.6270112228;
    msg.y = 0.640390031963;
    msg.z = 0.523893148549;

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
    msg.setTimeStamp(0.0962196008484);
    msg.setSource(32646U);
    msg.setSourceEntity(51U);
    msg.setDestination(4604U);
    msg.setDestinationEntity(120U);
    msg.x = 0.977639837322;
    msg.y = 0.532397356809;
    msg.z = 0.65971765993;

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
    msg.setTimeStamp(0.470323343526);
    msg.setSource(41807U);
    msg.setSourceEntity(130U);
    msg.setDestination(4433U);
    msg.setDestinationEntity(18U);
    msg.value = 0.737864284023;

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
    msg.setTimeStamp(0.906717786856);
    msg.setSource(34160U);
    msg.setSourceEntity(212U);
    msg.setDestination(10558U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0409698693969;

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
    msg.setTimeStamp(0.600039072973);
    msg.setSource(47675U);
    msg.setSourceEntity(163U);
    msg.setDestination(46023U);
    msg.setDestinationEntity(137U);
    msg.value = 0.127963520056;

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
    msg.setTimeStamp(0.352475773906);
    msg.setSource(29107U);
    msg.setSourceEntity(72U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(106U);
    msg.value = 0.869838462927;

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
    msg.setTimeStamp(0.93525889823);
    msg.setSource(15029U);
    msg.setSourceEntity(173U);
    msg.setDestination(54365U);
    msg.setDestinationEntity(42U);
    msg.value = 0.180672398498;

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
    msg.setTimeStamp(0.0206001094584);
    msg.setSource(51290U);
    msg.setSourceEntity(127U);
    msg.setDestination(62344U);
    msg.setDestinationEntity(49U);
    msg.value = 0.758760264489;

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
    msg.setTimeStamp(0.920073995412);
    msg.setSource(26510U);
    msg.setSourceEntity(225U);
    msg.setDestination(987U);
    msg.setDestinationEntity(193U);
    msg.x = 0.732648050764;
    msg.y = 0.509482915806;
    msg.z = 0.700614640698;
    msg.phi = 0.26036892388;
    msg.theta = 0.294402491057;
    msg.psi = 0.789621073052;
    msg.p = 0.357918917187;
    msg.q = 0.880135268825;
    msg.r = 0.887578995084;
    msg.u = 0.651010350107;
    msg.v = 0.402960044715;
    msg.w = 0.700146126289;
    msg.bias_psi = 0.112289370608;
    msg.bias_r = 0.454282075096;

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
    msg.setTimeStamp(0.816111980466);
    msg.setSource(16811U);
    msg.setSourceEntity(224U);
    msg.setDestination(51635U);
    msg.setDestinationEntity(69U);
    msg.x = 0.125054849863;
    msg.y = 0.539631853261;
    msg.z = 0.817162178476;
    msg.phi = 0.668798240072;
    msg.theta = 0.0852795865471;
    msg.psi = 0.550537728109;
    msg.p = 0.987698082799;
    msg.q = 0.893945832668;
    msg.r = 0.716113071932;
    msg.u = 0.913614727992;
    msg.v = 0.26139961263;
    msg.w = 0.405376531866;
    msg.bias_psi = 0.343187504741;
    msg.bias_r = 0.692860459796;

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
    msg.setTimeStamp(0.712812062488);
    msg.setSource(39541U);
    msg.setSourceEntity(203U);
    msg.setDestination(15705U);
    msg.setDestinationEntity(1U);
    msg.x = 0.206496269806;
    msg.y = 0.412177893554;
    msg.z = 0.227146407031;
    msg.phi = 0.601025014236;
    msg.theta = 0.082659092117;
    msg.psi = 0.79587213524;
    msg.p = 0.570274910806;
    msg.q = 0.567515989427;
    msg.r = 0.758542177737;
    msg.u = 0.249811171384;
    msg.v = 0.795214699112;
    msg.w = 0.569564635127;
    msg.bias_psi = 0.635604816046;
    msg.bias_r = 0.648583386059;

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
    msg.setTimeStamp(0.420699906222);
    msg.setSource(58610U);
    msg.setSourceEntity(37U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(190U);
    msg.bias_psi = 0.815247767559;
    msg.bias_r = 0.320367575781;
    msg.cog = 0.0533917410408;
    msg.cyaw = 0.514831964934;
    msg.lbl_rej_level = 0.793767957462;
    msg.gps_rej_level = 0.73460246238;
    msg.custom_x = 0.191868861484;
    msg.custom_y = 0.397407616255;
    msg.custom_z = 0.0053663171872;

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
    msg.setTimeStamp(0.666772185509);
    msg.setSource(64539U);
    msg.setSourceEntity(190U);
    msg.setDestination(62809U);
    msg.setDestinationEntity(229U);
    msg.bias_psi = 0.740184174234;
    msg.bias_r = 0.956463448985;
    msg.cog = 0.112385741192;
    msg.cyaw = 0.32728399448;
    msg.lbl_rej_level = 0.789062572095;
    msg.gps_rej_level = 0.922104061935;
    msg.custom_x = 0.343439870999;
    msg.custom_y = 0.974675202379;
    msg.custom_z = 0.00401968386227;

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
    msg.setTimeStamp(0.997005952054);
    msg.setSource(54654U);
    msg.setSourceEntity(179U);
    msg.setDestination(24499U);
    msg.setDestinationEntity(3U);
    msg.bias_psi = 0.671136659178;
    msg.bias_r = 0.407142885183;
    msg.cog = 0.843741222592;
    msg.cyaw = 0.947782173398;
    msg.lbl_rej_level = 0.432774010925;
    msg.gps_rej_level = 0.969229726074;
    msg.custom_x = 0.584348407059;
    msg.custom_y = 0.478581643236;
    msg.custom_z = 0.348714693714;

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
    msg.setTimeStamp(0.726176125597);
    msg.setSource(7260U);
    msg.setSourceEntity(215U);
    msg.setDestination(33770U);
    msg.setDestinationEntity(217U);
    msg.utc_time = 0.805411620803;
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
    msg.setTimeStamp(0.565109828621);
    msg.setSource(18488U);
    msg.setSourceEntity(151U);
    msg.setDestination(2022U);
    msg.setDestinationEntity(194U);
    msg.utc_time = 0.589054270543;
    msg.reason = 208U;

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
    msg.setTimeStamp(0.717253159782);
    msg.setSource(40604U);
    msg.setSourceEntity(78U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(135U);
    msg.utc_time = 0.751444170517;
    msg.reason = 161U;

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
    msg.setTimeStamp(0.136323745305);
    msg.setSource(26155U);
    msg.setSourceEntity(48U);
    msg.setDestination(53088U);
    msg.setDestinationEntity(173U);
    msg.id = 105U;
    msg.range = 0.0309529858975;
    msg.acceptance = 206U;

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
    msg.setTimeStamp(0.363313185826);
    msg.setSource(25658U);
    msg.setSourceEntity(57U);
    msg.setDestination(46002U);
    msg.setDestinationEntity(182U);
    msg.id = 11U;
    msg.range = 0.0728139744043;
    msg.acceptance = 158U;

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
    msg.setTimeStamp(0.0857189016563);
    msg.setSource(28389U);
    msg.setSourceEntity(210U);
    msg.setDestination(37376U);
    msg.setDestinationEntity(103U);
    msg.id = 196U;
    msg.range = 0.768441097538;
    msg.acceptance = 132U;

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
    msg.setTimeStamp(0.553823266806);
    msg.setSource(38274U);
    msg.setSourceEntity(130U);
    msg.setDestination(21340U);
    msg.setDestinationEntity(185U);
    msg.type = 11U;
    msg.reason = 32U;
    msg.value = 0.728484779903;
    msg.timestep = 0.437689035014;

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
    msg.setTimeStamp(0.42298396557);
    msg.setSource(60732U);
    msg.setSourceEntity(45U);
    msg.setDestination(47954U);
    msg.setDestinationEntity(75U);
    msg.type = 106U;
    msg.reason = 5U;
    msg.value = 0.941087090771;
    msg.timestep = 0.457058922484;

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
    msg.setTimeStamp(0.239006309222);
    msg.setSource(1792U);
    msg.setSourceEntity(237U);
    msg.setDestination(20714U);
    msg.setDestinationEntity(99U);
    msg.type = 202U;
    msg.reason = 43U;
    msg.value = 0.485295027481;
    msg.timestep = 0.0561092087317;

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
    msg.setTimeStamp(0.106752146729);
    msg.setSource(42032U);
    msg.setSourceEntity(17U);
    msg.setDestination(64382U);
    msg.setDestinationEntity(182U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NLQEVNBFVYETBSESYUCTSPZEOASPNCYXCODHRYGHXZAMHDCGUAWMS");
    tmp_msg_0.lat = 0.309260425708;
    tmp_msg_0.lon = 0.0983776392956;
    tmp_msg_0.depth = 0.255345459496;
    tmp_msg_0.query_channel = 100U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 29U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.000102517967978;
    msg.y = 0.801484394217;
    msg.var_x = 0.302167265788;
    msg.var_y = 0.984335672383;
    msg.distance = 0.106510174062;

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
    msg.setTimeStamp(0.471439469667);
    msg.setSource(39652U);
    msg.setSourceEntity(163U);
    msg.setDestination(8729U);
    msg.setDestinationEntity(52U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SNLTLPXMWJUDLAYWKCYMUJKWRGLRKVMSFPKJCGTVPOAYYNSEOPJHYFUBQRNRWBXROBBMZLKRFZBNRDHOAVYZGLQIJCXJCVKWKNMEBGTUYKMPCIFSVJLZOMATXUQEYHVXOTJQTWIXQYCLZUXKROSBGMCDTSDVWVLQLNFNAQGOGDEUDPUTACCXRHEFCFZGJEMARYOAEIWHHEAI");
    tmp_msg_0.lat = 0.470326554703;
    tmp_msg_0.lon = 0.640308879778;
    tmp_msg_0.depth = 0.13774672554;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 35U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.558882211217;
    msg.y = 0.0989979640031;
    msg.var_x = 0.358337484164;
    msg.var_y = 0.0935215343113;
    msg.distance = 0.499564147415;

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
    msg.setTimeStamp(0.0613488764769);
    msg.setSource(18465U);
    msg.setSourceEntity(236U);
    msg.setDestination(27596U);
    msg.setDestinationEntity(101U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZBACNKFCWUZYAPUVQPDCWJOFVSIVMUJNNXEFIHTOQBVDVVTKOUQSXSGOGJWBWQMQVHDQSEXXCZQFBMWLZLIFXZOYPAILAOEEHJFZKJLFEJMXMNTHCCIVHRIEAGYTMEXPISUUARSMDGJNHPXMRHDZGGDVPNCYYKQOKAKTDNCHIDZABLENXGRYAWUBTPBSKZGCJHGJEZFXYBOAOMUPWGWOSILSSTLNFWIURL");
    tmp_msg_0.lat = 0.547745879046;
    tmp_msg_0.lon = 0.619506411203;
    tmp_msg_0.depth = 0.578674733895;
    tmp_msg_0.query_channel = 155U;
    tmp_msg_0.reply_channel = 40U;
    tmp_msg_0.transponder_delay = 39U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.176289436156;
    msg.y = 0.171141974261;
    msg.var_x = 0.767642560331;
    msg.var_y = 0.478189158087;
    msg.distance = 0.492818527408;

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
    msg.setTimeStamp(0.273609431377);
    msg.setSource(37578U);
    msg.setSourceEntity(158U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(65U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.664497089184);
    msg.setSource(44120U);
    msg.setSourceEntity(131U);
    msg.setDestination(32001U);
    msg.setDestinationEntity(229U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.0325326267123);
    msg.setSource(41113U);
    msg.setSourceEntity(7U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(176U);
    msg.state = 202U;

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
    msg.setTimeStamp(0.309755302887);
    msg.setSource(55711U);
    msg.setSourceEntity(42U);
    msg.setDestination(18536U);
    msg.setDestinationEntity(130U);
    msg.x = 0.86522608496;
    msg.y = 0.0181084238074;
    msg.z = 0.522262320445;

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
    msg.setTimeStamp(0.630297984729);
    msg.setSource(47827U);
    msg.setSourceEntity(169U);
    msg.setDestination(31876U);
    msg.setDestinationEntity(103U);
    msg.x = 0.639334766305;
    msg.y = 0.258909398088;
    msg.z = 0.152400676526;

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
    msg.setTimeStamp(0.474561805179);
    msg.setSource(24359U);
    msg.setSourceEntity(10U);
    msg.setDestination(18557U);
    msg.setDestinationEntity(172U);
    msg.x = 0.0944396711247;
    msg.y = 0.116951443678;
    msg.z = 0.788586402293;

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
    msg.setTimeStamp(0.635475105619);
    msg.setSource(54107U);
    msg.setSourceEntity(251U);
    msg.setDestination(59750U);
    msg.setDestinationEntity(71U);
    msg.value = 0.384634295507;

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
    msg.setTimeStamp(0.563178532991);
    msg.setSource(29581U);
    msg.setSourceEntity(138U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(104U);
    msg.value = 0.04330509405;

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
    msg.setTimeStamp(0.625694820488);
    msg.setSource(34084U);
    msg.setSourceEntity(13U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(173U);
    msg.value = 0.200219304679;

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
    msg.setTimeStamp(0.251075167499);
    msg.setSource(21494U);
    msg.setSourceEntity(150U);
    msg.setDestination(47833U);
    msg.setDestinationEntity(216U);
    msg.value = 0.209900893859;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.086592553195);
    msg.setSource(50304U);
    msg.setSourceEntity(64U);
    msg.setDestination(23898U);
    msg.setDestinationEntity(94U);
    msg.value = 0.498016967473;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.452586172687);
    msg.setSource(13123U);
    msg.setSourceEntity(252U);
    msg.setDestination(12981U);
    msg.setDestinationEntity(20U);
    msg.value = 0.271272577444;
    msg.z_units = 92U;

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
    msg.setTimeStamp(0.0327788432532);
    msg.setSource(58176U);
    msg.setSourceEntity(131U);
    msg.setDestination(55850U);
    msg.setDestinationEntity(193U);
    msg.value = 0.60498149294;
    msg.speed_units = 119U;

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
    msg.setTimeStamp(0.863016087681);
    msg.setSource(25042U);
    msg.setSourceEntity(173U);
    msg.setDestination(13463U);
    msg.setDestinationEntity(143U);
    msg.value = 0.080965316334;
    msg.speed_units = 243U;

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
    msg.setTimeStamp(0.44342666252);
    msg.setSource(59237U);
    msg.setSourceEntity(31U);
    msg.setDestination(49289U);
    msg.setDestinationEntity(124U);
    msg.value = 0.181182230505;
    msg.speed_units = 13U;

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
    msg.setTimeStamp(0.147435808282);
    msg.setSource(19933U);
    msg.setSourceEntity(56U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(142U);
    msg.value = 0.0185780755417;

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
    msg.setTimeStamp(0.69959214538);
    msg.setSource(17570U);
    msg.setSourceEntity(242U);
    msg.setDestination(11066U);
    msg.setDestinationEntity(32U);
    msg.value = 0.66097878187;

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
    msg.setTimeStamp(0.348025437515);
    msg.setSource(48801U);
    msg.setSourceEntity(7U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(45U);
    msg.value = 0.98112239863;

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
    msg.setTimeStamp(0.475748254384);
    msg.setSource(63115U);
    msg.setSourceEntity(134U);
    msg.setDestination(15485U);
    msg.setDestinationEntity(22U);
    msg.value = 0.195852297965;

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
    msg.setTimeStamp(0.899770122941);
    msg.setSource(24537U);
    msg.setSourceEntity(229U);
    msg.setDestination(11165U);
    msg.setDestinationEntity(66U);
    msg.value = 0.214274790287;

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
    msg.setTimeStamp(0.203667484906);
    msg.setSource(53152U);
    msg.setSourceEntity(73U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(185U);
    msg.value = 0.887400988248;

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
    msg.setTimeStamp(0.774997879322);
    msg.setSource(29604U);
    msg.setSourceEntity(95U);
    msg.setDestination(979U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0316731290796;

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
    msg.setTimeStamp(0.293308931107);
    msg.setSource(52464U);
    msg.setSourceEntity(25U);
    msg.setDestination(6244U);
    msg.setDestinationEntity(30U);
    msg.value = 0.715869722942;

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
    msg.setTimeStamp(0.979386007028);
    msg.setSource(8890U);
    msg.setSourceEntity(216U);
    msg.setDestination(61011U);
    msg.setDestinationEntity(5U);
    msg.value = 0.723450347731;

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
    msg.setTimeStamp(0.754997187417);
    msg.setSource(44924U);
    msg.setSourceEntity(198U);
    msg.setDestination(43246U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 2941674178U;
    msg.start_lat = 0.0786429451193;
    msg.start_lon = 0.114910332089;
    msg.start_z = 0.0850905681166;
    msg.start_z_units = 185U;
    msg.end_lat = 0.707423086968;
    msg.end_lon = 0.444258731541;
    msg.end_z = 0.726784902725;
    msg.end_z_units = 212U;
    msg.speed = 0.50963332617;
    msg.speed_units = 203U;
    msg.lradius = 0.369090572721;
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
    msg.setTimeStamp(0.741654333046);
    msg.setSource(1490U);
    msg.setSourceEntity(38U);
    msg.setDestination(5031U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 1424215171U;
    msg.start_lat = 0.835984482862;
    msg.start_lon = 0.0685863534324;
    msg.start_z = 0.669126104157;
    msg.start_z_units = 3U;
    msg.end_lat = 0.396582433358;
    msg.end_lon = 0.883798050634;
    msg.end_z = 0.614786766772;
    msg.end_z_units = 195U;
    msg.speed = 0.969794016291;
    msg.speed_units = 199U;
    msg.lradius = 0.948064018149;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.495545086982);
    msg.setSource(61961U);
    msg.setSourceEntity(240U);
    msg.setDestination(25060U);
    msg.setDestinationEntity(36U);
    msg.path_ref = 2360571929U;
    msg.start_lat = 0.320441529277;
    msg.start_lon = 0.771524043457;
    msg.start_z = 0.229769928571;
    msg.start_z_units = 167U;
    msg.end_lat = 0.142500286614;
    msg.end_lon = 0.856066942133;
    msg.end_z = 0.482356356082;
    msg.end_z_units = 171U;
    msg.speed = 0.291475957075;
    msg.speed_units = 127U;
    msg.lradius = 0.635185950367;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.171187504814);
    msg.setSource(26429U);
    msg.setSourceEntity(224U);
    msg.setDestination(62271U);
    msg.setDestinationEntity(124U);
    msg.x = 0.236311702613;
    msg.y = 0.4896755225;
    msg.z = 0.769801096546;
    msg.k = 0.404542003033;
    msg.m = 0.648028144581;
    msg.n = 0.0574891915558;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.056432078533);
    msg.setSource(42917U);
    msg.setSourceEntity(14U);
    msg.setDestination(58507U);
    msg.setDestinationEntity(130U);
    msg.x = 0.343711992408;
    msg.y = 0.718931840873;
    msg.z = 0.797639112956;
    msg.k = 0.236318437354;
    msg.m = 0.3742904509;
    msg.n = 0.891357565709;
    msg.flags = 248U;

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
    msg.setTimeStamp(0.0112415896113);
    msg.setSource(52387U);
    msg.setSourceEntity(85U);
    msg.setDestination(63906U);
    msg.setDestinationEntity(132U);
    msg.x = 0.686233271086;
    msg.y = 0.827593859547;
    msg.z = 0.298173048486;
    msg.k = 0.953133416175;
    msg.m = 0.990980846577;
    msg.n = 0.20055043104;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.0987827111988);
    msg.setSource(30651U);
    msg.setSourceEntity(60U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(192U);
    msg.value = 0.566673562316;

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
    msg.setTimeStamp(0.0718310122555);
    msg.setSource(38480U);
    msg.setSourceEntity(44U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(178U);
    msg.value = 0.994337669619;

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
    msg.setTimeStamp(0.0217976472548);
    msg.setSource(6400U);
    msg.setSourceEntity(55U);
    msg.setDestination(61710U);
    msg.setDestinationEntity(137U);
    msg.value = 0.663346919388;

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
    msg.setTimeStamp(0.619613333385);
    msg.setSource(23332U);
    msg.setSourceEntity(243U);
    msg.setDestination(9674U);
    msg.setDestinationEntity(62U);
    msg.u = 0.0640411422831;
    msg.v = 0.10903634142;
    msg.w = 0.739423253151;
    msg.p = 0.329708073277;
    msg.q = 0.521711039476;
    msg.r = 0.769193220741;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.0869049813014);
    msg.setSource(29344U);
    msg.setSourceEntity(75U);
    msg.setDestination(7326U);
    msg.setDestinationEntity(171U);
    msg.u = 0.413399851448;
    msg.v = 0.944963041177;
    msg.w = 0.658907230769;
    msg.p = 0.0216739707263;
    msg.q = 0.0184372190947;
    msg.r = 0.318130842558;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.487816912988);
    msg.setSource(53900U);
    msg.setSourceEntity(78U);
    msg.setDestination(26848U);
    msg.setDestinationEntity(60U);
    msg.u = 0.937065968465;
    msg.v = 0.0453831729496;
    msg.w = 0.543266789427;
    msg.p = 0.180488953116;
    msg.q = 0.876734986088;
    msg.r = 0.109674245006;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.872924169973);
    msg.setSource(9732U);
    msg.setSourceEntity(89U);
    msg.setDestination(37174U);
    msg.setDestinationEntity(90U);
    msg.path_ref = 2931210620U;
    msg.start_lat = 0.44628413134;
    msg.start_lon = 0.0274456464596;
    msg.start_z = 0.911928318251;
    msg.start_z_units = 73U;
    msg.end_lat = 0.499079551947;
    msg.end_lon = 0.228693479784;
    msg.end_z = 0.0841756098101;
    msg.end_z_units = 142U;
    msg.lradius = 0.836479371425;
    msg.flags = 100U;
    msg.x = 0.335984555088;
    msg.y = 0.398126587709;
    msg.z = 0.603965179846;
    msg.vx = 0.833481261666;
    msg.vy = 0.729469973028;
    msg.vz = 0.609425893295;
    msg.course_error = 0.219108500419;
    msg.eta = 63480U;

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
    msg.setTimeStamp(0.547939543531);
    msg.setSource(27997U);
    msg.setSourceEntity(202U);
    msg.setDestination(46801U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 3890321199U;
    msg.start_lat = 0.78214998139;
    msg.start_lon = 0.863659045217;
    msg.start_z = 0.10449574317;
    msg.start_z_units = 239U;
    msg.end_lat = 0.7682317088;
    msg.end_lon = 0.412690319861;
    msg.end_z = 0.993627755989;
    msg.end_z_units = 179U;
    msg.lradius = 0.438492389476;
    msg.flags = 174U;
    msg.x = 0.90453422858;
    msg.y = 0.498847799039;
    msg.z = 0.722177762583;
    msg.vx = 0.0276198916454;
    msg.vy = 0.224234905867;
    msg.vz = 0.104989313444;
    msg.course_error = 0.463775690068;
    msg.eta = 16373U;

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
    msg.setTimeStamp(0.476390804744);
    msg.setSource(65480U);
    msg.setSourceEntity(164U);
    msg.setDestination(49360U);
    msg.setDestinationEntity(47U);
    msg.path_ref = 3887883499U;
    msg.start_lat = 0.969165970046;
    msg.start_lon = 0.372235879345;
    msg.start_z = 0.188409912206;
    msg.start_z_units = 71U;
    msg.end_lat = 0.822466073571;
    msg.end_lon = 0.199164075803;
    msg.end_z = 0.214257185707;
    msg.end_z_units = 34U;
    msg.lradius = 0.536852343251;
    msg.flags = 94U;
    msg.x = 0.652882554911;
    msg.y = 0.517808097062;
    msg.z = 0.875938189895;
    msg.vx = 0.0875389721825;
    msg.vy = 0.394107991353;
    msg.vz = 0.478068207006;
    msg.course_error = 0.663613917278;
    msg.eta = 53217U;

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
    msg.setTimeStamp(0.531794532221);
    msg.setSource(3254U);
    msg.setSourceEntity(121U);
    msg.setDestination(6363U);
    msg.setDestinationEntity(194U);
    msg.k = 0.900640438337;
    msg.m = 0.307793186784;
    msg.n = 0.111142218623;

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
    msg.setTimeStamp(0.180256124116);
    msg.setSource(19174U);
    msg.setSourceEntity(51U);
    msg.setDestination(21911U);
    msg.setDestinationEntity(47U);
    msg.k = 0.364038878366;
    msg.m = 0.420240205618;
    msg.n = 0.454907677992;

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
    msg.setTimeStamp(0.108576520982);
    msg.setSource(23223U);
    msg.setSourceEntity(185U);
    msg.setDestination(1813U);
    msg.setDestinationEntity(195U);
    msg.k = 0.120361562931;
    msg.m = 0.905805058691;
    msg.n = 0.862527850938;

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
    msg.setTimeStamp(0.113190307428);
    msg.setSource(40403U);
    msg.setSourceEntity(5U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(182U);
    msg.p = 0.359670788936;
    msg.i = 0.0843267919917;
    msg.d = 0.437111346266;
    msg.a = 0.646085688054;

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
    msg.setTimeStamp(0.851736963388);
    msg.setSource(115U);
    msg.setSourceEntity(154U);
    msg.setDestination(8792U);
    msg.setDestinationEntity(235U);
    msg.p = 0.0766819033713;
    msg.i = 0.945344503096;
    msg.d = 0.524564537018;
    msg.a = 0.182493278742;

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
    msg.setTimeStamp(0.31558412259);
    msg.setSource(22043U);
    msg.setSourceEntity(125U);
    msg.setDestination(16668U);
    msg.setDestinationEntity(51U);
    msg.p = 0.605730742548;
    msg.i = 0.549210679621;
    msg.d = 0.688983456129;
    msg.a = 0.527810588429;

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
    msg.setTimeStamp(0.475645212505);
    msg.setSource(45315U);
    msg.setSourceEntity(84U);
    msg.setDestination(36791U);
    msg.setDestinationEntity(76U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.563123467881);
    msg.setSource(58363U);
    msg.setSourceEntity(134U);
    msg.setDestination(24U);
    msg.setDestinationEntity(224U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.454312942867);
    msg.setSource(14893U);
    msg.setSourceEntity(63U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(63U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.221405447187);
    msg.setSource(7454U);
    msg.setSourceEntity(9U);
    msg.setDestination(33566U);
    msg.setDestinationEntity(95U);
    msg.timeout = 60749U;
    msg.lat = 0.447780134524;
    msg.lon = 0.832869740134;
    msg.z = 0.251821927848;
    msg.z_units = 202U;
    msg.speed = 0.587641934986;
    msg.speed_units = 106U;
    msg.roll = 0.513495720694;
    msg.pitch = 0.0913828753523;
    msg.yaw = 0.272920943644;
    msg.custom.assign("IPFOKDIONZIVHSGCDSXRMHWWSQVXYMHTTKFQASEHWJAZFPUKCKJXXOGNCAQSYRJBPAWMNJDGKMGDZXDYAULMWNKJXNTKFTYJBUVOULTTLCFPDQMSPHAHVFILAUZZRCNIJVFWBDTNMDVRKRHOPCELNNIQDEOAWUEHFYBWECCIIKHRBOEZSUTJVSQYOZCCGQ");

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
    msg.setTimeStamp(0.443985281649);
    msg.setSource(58508U);
    msg.setSourceEntity(240U);
    msg.setDestination(13123U);
    msg.setDestinationEntity(3U);
    msg.timeout = 13554U;
    msg.lat = 0.491725891752;
    msg.lon = 0.823679716465;
    msg.z = 0.0117905740772;
    msg.z_units = 165U;
    msg.speed = 0.250674375106;
    msg.speed_units = 169U;
    msg.roll = 0.0432094406064;
    msg.pitch = 0.0336471718997;
    msg.yaw = 0.862051927952;
    msg.custom.assign("EATDJISHUPWOOCLKBWEMUIJQFWZZMZMTNTRM");

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
    msg.setTimeStamp(0.0328330179308);
    msg.setSource(20454U);
    msg.setSourceEntity(226U);
    msg.setDestination(17803U);
    msg.setDestinationEntity(122U);
    msg.timeout = 61532U;
    msg.lat = 0.583130906528;
    msg.lon = 0.433748860672;
    msg.z = 0.293000443267;
    msg.z_units = 75U;
    msg.speed = 0.440797605405;
    msg.speed_units = 113U;
    msg.roll = 0.033837268205;
    msg.pitch = 0.828641916996;
    msg.yaw = 0.621453932306;
    msg.custom.assign("IWTBQUVPQYPWMGZLPNITQOPCIJTHGCIHRNUOZBEBKPEBGOLCVXFMKUFMNSXEOWMTYREADQDWRGLZU");

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
    msg.setTimeStamp(0.702646743046);
    msg.setSource(31267U);
    msg.setSourceEntity(131U);
    msg.setDestination(22244U);
    msg.setDestinationEntity(150U);
    msg.timeout = 2631U;
    msg.lat = 0.634848363043;
    msg.lon = 0.00830626961599;
    msg.z = 0.856075322955;
    msg.z_units = 44U;
    msg.speed = 0.912002436268;
    msg.speed_units = 251U;
    msg.duration = 41974U;
    msg.radius = 0.283413305531;
    msg.flags = 196U;
    msg.custom.assign("UEWCHZPJKGUIBVUBMVRKMMCOPLVYJXCXNZPHKCLJJFDAHQEAGSXBAFKSXCMEYFQALREHSXGCDIZNZTFNYHMDEHIESDVFGQGJXGMWTPSUKCZDCNLPJVGVREJYIABGPHBRGWQUZITAJDFOLSXFSOENYHRDQQYKIQIGKITZTNKXPYKYJWQLTFRKTLTRMMXWNOFAMASEBVUCSWDCFODNROSVORZHMDJPLLAW");

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
    msg.setTimeStamp(0.352861207784);
    msg.setSource(60413U);
    msg.setSourceEntity(162U);
    msg.setDestination(30060U);
    msg.setDestinationEntity(143U);
    msg.timeout = 38825U;
    msg.lat = 0.0239195183385;
    msg.lon = 0.293221581525;
    msg.z = 0.647030221829;
    msg.z_units = 179U;
    msg.speed = 0.181780563025;
    msg.speed_units = 163U;
    msg.duration = 4484U;
    msg.radius = 0.918029523429;
    msg.flags = 11U;
    msg.custom.assign("RWWDAXKJTBFANITMYCXBVXQWBHZPSDWYKTDTTLIOLVRBGYSKGQDKSDGUKMCSJNOWIWTT");

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
    msg.setTimeStamp(0.598218259183);
    msg.setSource(41991U);
    msg.setSourceEntity(66U);
    msg.setDestination(58359U);
    msg.setDestinationEntity(250U);
    msg.timeout = 13442U;
    msg.lat = 0.868059146216;
    msg.lon = 0.0605369434969;
    msg.z = 0.47219750885;
    msg.z_units = 210U;
    msg.speed = 0.328045938769;
    msg.speed_units = 190U;
    msg.duration = 51524U;
    msg.radius = 0.445378551597;
    msg.flags = 154U;
    msg.custom.assign("IOHGYDMYSJCGCLWNPSOKTQBJSIGKOFRFFWUMODRCFZIMHGBEIKOFNFUWVLOJNVMGXCEYTQBNLZXCBTABYIFHQTBZIMZHGJTGKEDVOXYZCBPDMZDEEDMLXXJVPJNVAYPHHJPXWSKQHQNSLZWTUMHZROEPUEXTNAUKFRAJMUCOLILND");

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
    msg.setTimeStamp(0.559789252162);
    msg.setSource(6057U);
    msg.setSourceEntity(35U);
    msg.setDestination(42426U);
    msg.setDestinationEntity(239U);
    msg.custom.assign("IOAFTPGQDTEOXMBIERWXSZBHIQAUOTMYTDEFARHSUCZYCHGJNSVRFKDVSJOYUQHDVJHLVGWIBPAYFCIVQGCNKUWBWOKZFLKSELKZIZOJUFYRVPNU");

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
    msg.setTimeStamp(0.405663493663);
    msg.setSource(58175U);
    msg.setSourceEntity(206U);
    msg.setDestination(48920U);
    msg.setDestinationEntity(221U);
    msg.custom.assign("TINQIGIFSFPVMCOPYJEESSBDGLBKAQTJBLRTBZOLGMMPKEYPASHBUXQEHCHPSQDAHNVOCTSFGYM");

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
    msg.setTimeStamp(0.0441420933246);
    msg.setSource(48480U);
    msg.setSourceEntity(121U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("TKBXDAQIROMEHMYVXLQVOCHQAECDEDWHQLEJSITLOOKSZVJCTLQDWKAZHGYECNQVZHYGUNSWSAGCYTERIERWWGYFXWNNMFZXZRCIIAKBFFPBBZGPMOOHUPBIUHRGUAUNFTRLNLEJMSDGPDSWLBWMFAAZJYUOPINEUVHTNAKRUQCZPFD");

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
    msg.setTimeStamp(0.0845857630965);
    msg.setSource(56634U);
    msg.setSourceEntity(246U);
    msg.setDestination(32594U);
    msg.setDestinationEntity(214U);
    msg.timeout = 65426U;
    msg.lat = 0.766859300913;
    msg.lon = 0.35519184914;
    msg.z = 0.625091085005;
    msg.z_units = 209U;
    msg.duration = 37829U;
    msg.speed = 0.998407579213;
    msg.speed_units = 130U;
    msg.type = 50U;
    msg.radius = 0.201572921813;
    msg.length = 0.40206231797;
    msg.bearing = 0.0488579734431;
    msg.direction = 207U;
    msg.custom.assign("ATTWOMZOLBNKFXVRKXIVKKUQPZLJWKUAIROMLLJJHPYLKQGDMIBVWGNMAEDEPQYPWEJXHXGIUELSRMRHZWBNFYSFCGCPSWYFYVNKNAS");

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
    msg.setTimeStamp(0.501391156143);
    msg.setSource(31064U);
    msg.setSourceEntity(85U);
    msg.setDestination(59134U);
    msg.setDestinationEntity(87U);
    msg.timeout = 17085U;
    msg.lat = 0.621961311454;
    msg.lon = 0.0789758946056;
    msg.z = 0.553588942326;
    msg.z_units = 134U;
    msg.duration = 59647U;
    msg.speed = 0.864695774273;
    msg.speed_units = 218U;
    msg.type = 245U;
    msg.radius = 0.284029127173;
    msg.length = 0.128803221087;
    msg.bearing = 0.168293504731;
    msg.direction = 1U;
    msg.custom.assign("MLUXGXBLAEUDDWWKTYGVCWOHUDUPRYHLGTYMJHQOCJGTUBIMANZPUDMRJPNIAEUCLXNIQLYKXCESNCAMHADHEJMNTKXHIWVQXPWNFSGVPWYWLTTOMLSZFNHBRZGFLQTKEKFIEBOVROFJWGABSKSZNKSFCOCURJEPDVAWYUIZZKQOSTKIBEHRTNPBSSRFYEVLQQMXYCZDZXNVIUHZRPYJJDPOQFRJQPBVABBGHDATWKRGQOEJMLXOFMCFDZI");

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
    msg.setTimeStamp(0.728659839363);
    msg.setSource(53366U);
    msg.setSourceEntity(71U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(124U);
    msg.timeout = 8877U;
    msg.lat = 0.413956361557;
    msg.lon = 0.210039865837;
    msg.z = 0.423725025007;
    msg.z_units = 214U;
    msg.duration = 20243U;
    msg.speed = 0.616374324388;
    msg.speed_units = 124U;
    msg.type = 128U;
    msg.radius = 0.754047716785;
    msg.length = 0.479590530414;
    msg.bearing = 0.952809995181;
    msg.direction = 57U;
    msg.custom.assign("EWVHGSKTIVQUZISTPGGQEXJZLHHABRUTFKNPITFDUUVLWUECZWNEPMGDTGHCPJXNKINOPDSEVBNNOIGOFOXDXHIVRJEEOAIBLBYFFVLMUYJFFKDAFYLMXVOECJYAQCXBOHYMWDWOWTCCKKZBCRDRSMZRBAKDLMQJHBUGZGSNSMCSYZJIFAOFHVLQHUYAIYGKRXQELQACQTNAZAVDVBWRKNWPJIWRRZPUPMTNMQCUQSTPL");

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
    msg.setTimeStamp(0.580876753723);
    msg.setSource(65395U);
    msg.setSourceEntity(206U);
    msg.setDestination(23854U);
    msg.setDestinationEntity(87U);
    msg.duration = 60209U;
    msg.custom.assign("JFJABVKBEYHFKOHYQXOYJFBXIKWECQGYASUZHBSUTWPBGTGXRGOVHNFHUPVQGTZCOMJMNPXILZPWKYTZCEWXDETCSGSSNLQWWZZRIEIGKNTBCAQPKFQHVXOUHRZEGRACBVQODCMDPFVXPPNMRVILSIHZMYFUTLJIPTYEAXMMHDBYUNLRGRBSRTDVFIOSENZKLCFDWEKJCMNNRSQONVLQTLYUXAFLUDDQWJKMWLJGHOVWYD");

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
    msg.setTimeStamp(0.859283747485);
    msg.setSource(52334U);
    msg.setSourceEntity(179U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(87U);
    msg.duration = 56357U;
    msg.custom.assign("MVRITRPABHXWLPDFMHYPQLAOWFPTAUMHXZAXWKMCVUWDLSSWDCIYZPJLLBDQNFDJREERTTXKZYCUZHEIVRUJYOSSHADYIQPRTIXZZNDFCGJGAGNPMXUBFVKWNKDYEOQWXQSTZYCVFAMFLZCMLPBBIOARAECKEJZQSVKMNJOUIRTNQGFSAORNUYGOQPSYJBCBEUWLZIOEJVPWHOJCXKOBISWMLHXEHMJNDNGFSQBTLFGGYTVXHQVTEGHCKBID");

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
    msg.setTimeStamp(0.610558230303);
    msg.setSource(11857U);
    msg.setSourceEntity(233U);
    msg.setDestination(54565U);
    msg.setDestinationEntity(177U);
    msg.duration = 54993U;
    msg.custom.assign("NILCFXIKASIXFSTOVHZSCSIGXRALQLGHFUJFUJTQQUISGHDEIDXSUXOVJOWKYQMJGOHKPELQPVWMNDSPUPQRPETYZHNSAAYVOAKGNPCWDONMJDPJCIFLRGAGHRJFQMEZOWAFIDBUBZYBHRNCNOQXXXGBWKBFHWCKEIMVOZDYJZZRJVQHCTVYMMYZLLEMLSVUA");

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
    msg.setTimeStamp(0.729631665112);
    msg.setSource(658U);
    msg.setSourceEntity(70U);
    msg.setDestination(5405U);
    msg.setDestinationEntity(11U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.717243501824;
    msg.control.set(tmp_msg_0);
    msg.duration = 24514U;
    msg.custom.assign("FSVPBSAMMLYKEIIIQBAHDITMBOCOJJJKC");

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
    msg.setTimeStamp(0.885044324162);
    msg.setSource(42464U);
    msg.setSourceEntity(6U);
    msg.setDestination(37310U);
    msg.setDestinationEntity(44U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.138542958336;
    msg.control.set(tmp_msg_0);
    msg.duration = 43036U;
    msg.custom.assign("HFPJSLITMWAGMUDZVPNYBOFMDTLJRHKTGEYRHZUXWFGDOYFPXBIEOGOVDRQBOTJRFZEVZLKWDHYLTMXXKHYVGDHRQLIUATALHXDPSSQVVALUCRMXASOAKNLBZOSJCUNXRWDAQUDCSAPZWNSBIINTXESOWFMFCTIQUJZWMCUZGEXYSEYNRYNCBBGGCVFVTEEIQJWCGMUYQJJMPELIZSNBQNHKNTYPRDOJFFRIOK");

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
    msg.setTimeStamp(0.601731365259);
    msg.setSource(64748U);
    msg.setSourceEntity(225U);
    msg.setDestination(30095U);
    msg.setDestinationEntity(67U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.588587958857;
    msg.control.set(tmp_msg_0);
    msg.duration = 7909U;
    msg.custom.assign("MEKGPBUAGMBSUYXYJHQXEMSRHJGCXVROFPJMALPSHKERCOFKBVIZWDTLIFUZLVHABBMNWIMSQJCMKBFNFZJHOWGIGBNRPENAAHCXUUTGATVXZGCXQAKFHCWVJLJNKNTDOHKKLNRLPDOEELITPLPIBXNKUTDSTDFTGPDGRBMCIMOQ");

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
    msg.setTimeStamp(0.673644580148);
    msg.setSource(56367U);
    msg.setSourceEntity(76U);
    msg.setDestination(32858U);
    msg.setDestinationEntity(0U);
    msg.timeout = 6164U;
    msg.lat = 0.75986281378;
    msg.lon = 0.568303003705;
    msg.z = 0.497030557333;
    msg.z_units = 205U;
    msg.speed = 0.205904576796;
    msg.speed_units = 116U;
    msg.bearing = 0.679249843767;
    msg.cross_angle = 0.695800979839;
    msg.width = 0.290934389644;
    msg.length = 0.125869119485;
    msg.hstep = 0.523925870783;
    msg.coff = 97U;
    msg.alternation = 47U;
    msg.flags = 224U;
    msg.custom.assign("JOJZOVWAPQANUKDCUNSAZAXZTRJQYEKEFQTDSIYIRTOYEYYRDNUCWGRGNYTJGVVVCGPN");

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
    msg.setTimeStamp(0.69344360799);
    msg.setSource(4151U);
    msg.setSourceEntity(194U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(122U);
    msg.timeout = 19596U;
    msg.lat = 0.307077499931;
    msg.lon = 0.527613852799;
    msg.z = 0.138935037752;
    msg.z_units = 121U;
    msg.speed = 0.652173454837;
    msg.speed_units = 204U;
    msg.bearing = 0.86005687968;
    msg.cross_angle = 0.4215215202;
    msg.width = 0.414853328367;
    msg.length = 0.419017454246;
    msg.hstep = 0.382899964741;
    msg.coff = 55U;
    msg.alternation = 32U;
    msg.flags = 107U;
    msg.custom.assign("JNVFRBYEKHVCBPHZKWQIGSDDZUAOQOQWDLTCJCLODSNTFBEGNPWNFJAJWNPRICFAMBSPGZCMYDFXZEIWHHYVYGKEDWGQINPSRJBERMRGHFZGKKEJKUCKMOXSIQXCFEREBVO");

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
    msg.setTimeStamp(0.64134949611);
    msg.setSource(34952U);
    msg.setSourceEntity(164U);
    msg.setDestination(25559U);
    msg.setDestinationEntity(210U);
    msg.timeout = 43758U;
    msg.lat = 0.195353660626;
    msg.lon = 0.814805626445;
    msg.z = 0.202074390283;
    msg.z_units = 204U;
    msg.speed = 0.595916962868;
    msg.speed_units = 211U;
    msg.bearing = 0.316373210373;
    msg.cross_angle = 0.121102155331;
    msg.width = 0.0359805039154;
    msg.length = 0.382861447932;
    msg.hstep = 0.602265693016;
    msg.coff = 221U;
    msg.alternation = 237U;
    msg.flags = 4U;
    msg.custom.assign("UZEBBEFWTJEOWVLPYAUPBOKVARICSQBLTNRMPDFQRQHOXHGVUWPHLTQIHAKSTTXEECCNGNFNUNLNQOMCWVWYUNMISJCTBYDGLOUDQVWODLHCDMEDMMYLFGMZLEDSKMRRYXEBLISNBOSZATIXRZQBWCQKYYXPRFMKOSNOVAHUGZJNPUKIQWGJHW");

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
    msg.setTimeStamp(0.903144888347);
    msg.setSource(30894U);
    msg.setSourceEntity(18U);
    msg.setDestination(47249U);
    msg.setDestinationEntity(98U);
    msg.timeout = 50296U;
    msg.lat = 0.478831989819;
    msg.lon = 0.642199377565;
    msg.z = 0.401787324543;
    msg.z_units = 124U;
    msg.speed = 0.106699695783;
    msg.speed_units = 9U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.400360251172;
    tmp_msg_0.y = 0.0437187846478;
    tmp_msg_0.z = 0.292373517337;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TPEXKBYJXRYMZFKNILXOKKBTYEKNQJNEVNIGMPEENOTI");

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
    msg.setTimeStamp(0.465153761984);
    msg.setSource(61713U);
    msg.setSourceEntity(118U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(194U);
    msg.timeout = 59515U;
    msg.lat = 0.817334486584;
    msg.lon = 0.342930240874;
    msg.z = 0.358882792026;
    msg.z_units = 103U;
    msg.speed = 0.298220870715;
    msg.speed_units = 29U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0402291073971;
    tmp_msg_0.y = 0.529598897253;
    tmp_msg_0.z = 0.72924329991;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ILAPZTFCJWZTRYDTXPHDMSUVWDNBPWIMCXXHJCAKNAWPRKRESEWSOMXIIUCOMALRLAIKKGFFIRUDRMNUCKZBZCKLFBICWOJGPHSSOIQRAJRJFUZAXUQDTKYSHGCNAZFHNWSBYTQOMML");

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
    msg.setTimeStamp(0.716532493364);
    msg.setSource(62258U);
    msg.setSourceEntity(7U);
    msg.setDestination(2738U);
    msg.setDestinationEntity(128U);
    msg.timeout = 64225U;
    msg.lat = 0.856900018194;
    msg.lon = 0.744542686054;
    msg.z = 0.686048708147;
    msg.z_units = 9U;
    msg.speed = 0.564364118887;
    msg.speed_units = 47U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.485893830098;
    tmp_msg_0.y = 0.652218424399;
    tmp_msg_0.z = 0.704813485774;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZPGOWWFHEVULONXIBCLIIHKNPWKMMVDUMYQKRTHGCJGSBFHRUMUATBCUCYQSJEPPQQNFPZMQJZNPJGXDSLKWRJOZBBFCHIVATVLWDQPKDLOQISETUNDALBVFDBOMVAXVHUPNXJDMOZECEUESQGCYZYYFDIJEIXFYOAHRKSGOXIDEAZWHXBGEZXZXOY");

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
    msg.setTimeStamp(0.0949194207173);
    msg.setSource(22691U);
    msg.setSourceEntity(118U);
    msg.setDestination(42156U);
    msg.setDestinationEntity(254U);
    msg.x = 0.0283927024731;
    msg.y = 0.489035141986;
    msg.z = 0.36746363207;

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
    msg.setTimeStamp(0.043253408575);
    msg.setSource(572U);
    msg.setSourceEntity(238U);
    msg.setDestination(30078U);
    msg.setDestinationEntity(127U);
    msg.x = 0.265316989615;
    msg.y = 0.537780755656;
    msg.z = 0.0189534270483;

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
    msg.setTimeStamp(0.613088708469);
    msg.setSource(48380U);
    msg.setSourceEntity(90U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(212U);
    msg.x = 0.327449785329;
    msg.y = 0.223481378219;
    msg.z = 0.150644688593;

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
    msg.setTimeStamp(0.400713017428);
    msg.setSource(14944U);
    msg.setSourceEntity(146U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(48U);
    msg.timeout = 17300U;
    msg.lat = 0.528745278587;
    msg.lon = 0.428314975184;
    msg.z = 0.440742529024;
    msg.z_units = 142U;
    msg.amplitude = 0.156699714562;
    msg.pitch = 0.248808033494;
    msg.speed = 0.432172618105;
    msg.speed_units = 96U;
    msg.custom.assign("YIPGLYIGSLTZTFAUSWZXMZCPHRJHMEIDYWUPIQHZSENWUDFTXUCMSOUIKOTIDGBGJBURZNBVVZQSOVCBMJEGYVKHCHUVEGRRWMWGBERKKOFHSDZRAXEEBNTOZMVDRFSZYAPIQHCVCCKJWLVPAYQDNKKLETZKYHOKMTANOPWDXPRJIEUFWFPJLXSJIDQLXBAORXYMQPJNBAPTQANBSQLGLYJCOLGGDDMTAO");

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
    msg.setTimeStamp(0.447358374825);
    msg.setSource(17318U);
    msg.setSourceEntity(41U);
    msg.setDestination(15381U);
    msg.setDestinationEntity(194U);
    msg.timeout = 49259U;
    msg.lat = 0.511119468565;
    msg.lon = 0.593547768474;
    msg.z = 0.281197064993;
    msg.z_units = 29U;
    msg.amplitude = 0.386359204267;
    msg.pitch = 0.357288978128;
    msg.speed = 0.318884005578;
    msg.speed_units = 163U;
    msg.custom.assign("OLELHVWXODEIMSEQTLZWMKAFTHGGGCSJVJUNOWKGPWPXOBYGAAHDCQBCRTUTGUSOLXOVNDHJBBGJNUJEXBEUJFKMQKKIMHZPRFJXANXINVLYFIKGEBLXOYPACYFCCMHARADNWJGDIYBDRNLQRUYNYILUWDFWMQLZFVQVPYXHPDITZBUTRPMLXFSWINAJRKRPYKMRNTMWZVVOCVYGACFTXJIOKQCSEVZTKZHOCSUTAESQQUIQZWHHFSPE");

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
    msg.setTimeStamp(0.26103478912);
    msg.setSource(27784U);
    msg.setSourceEntity(252U);
    msg.setDestination(27433U);
    msg.setDestinationEntity(106U);
    msg.timeout = 60124U;
    msg.lat = 0.314189715809;
    msg.lon = 0.627336242386;
    msg.z = 0.364077068061;
    msg.z_units = 167U;
    msg.amplitude = 0.0379084132122;
    msg.pitch = 0.176199963296;
    msg.speed = 0.527095659122;
    msg.speed_units = 198U;
    msg.custom.assign("OYUIOGWKOAEYVWTXFUQDGMGTIAPWGOIVBCGFKSRPSRUQXXSTUXYJEJMURMIOVCGARJFBJDESWBCSCVKMZMNINQOZFSYWYJDDMRXYATRQWLEEYOELNLRVQNRUEPHBPVNJZPQWYZGOFIQKZSASSLCTMHUQAJMEPWKFCAHHOBKVEDGNZFYPQWTVHJULFDDRMGJKEBBIFHITDCLNHTKFRHIHWVCXAPDTCIGZNBVNXAZZBU");

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
    msg.setTimeStamp(0.178732098971);
    msg.setSource(10406U);
    msg.setSourceEntity(107U);
    msg.setDestination(31421U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.788250232367);
    msg.setSource(11271U);
    msg.setSourceEntity(247U);
    msg.setDestination(24080U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.845264006218);
    msg.setSource(14692U);
    msg.setSourceEntity(78U);
    msg.setDestination(27618U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.0289573146139);
    msg.setSource(40607U);
    msg.setSourceEntity(175U);
    msg.setDestination(44303U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.541489866494;
    msg.lon = 0.392599369114;
    msg.z = 0.592163599333;
    msg.z_units = 233U;
    msg.radius = 0.495655919736;
    msg.duration = 56929U;
    msg.speed = 0.952062235918;
    msg.speed_units = 97U;
    msg.custom.assign("HHOAEPWAASGHDTHGXKYZSHEKMFJNBUCZQSWNYTVIDWTUATIBLVWCENEAJVUMVJMZZVMFXUKOBRHARQGXDKQMODSPRDJXZIWVYJNMKGRDFPC");

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
    msg.setTimeStamp(0.472597786048);
    msg.setSource(32934U);
    msg.setSourceEntity(242U);
    msg.setDestination(36524U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.827813386598;
    msg.lon = 0.030588298058;
    msg.z = 0.689468096682;
    msg.z_units = 202U;
    msg.radius = 0.752774693642;
    msg.duration = 17500U;
    msg.speed = 0.315702579577;
    msg.speed_units = 148U;
    msg.custom.assign("QRLPOLMDJAHMRJQAIUSYTSTPHYWTFTVVRNCURKFPOKEEPUQBETCACOWKPKEYBMQAPXLVBVT");

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
    msg.setTimeStamp(0.431082856729);
    msg.setSource(32545U);
    msg.setSourceEntity(235U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.517531275483;
    msg.lon = 0.402052384419;
    msg.z = 0.831655928802;
    msg.z_units = 88U;
    msg.radius = 0.656943749706;
    msg.duration = 36842U;
    msg.speed = 0.915052782242;
    msg.speed_units = 155U;
    msg.custom.assign("EIORHQOEQUZMQGMLLAGLNIGZKJJBXJATEYFRRBLUEIMKPWBGISCMFCNCREHGHZVIJMCJNPLOQAJAGTFWKEXSQKYQVAROEY");

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
    msg.setTimeStamp(0.0413216809489);
    msg.setSource(12663U);
    msg.setSourceEntity(155U);
    msg.setDestination(41478U);
    msg.setDestinationEntity(229U);
    msg.timeout = 21068U;
    msg.flags = 194U;
    msg.lat = 0.363330392102;
    msg.lon = 0.957084846607;
    msg.start_z = 0.268446890314;
    msg.start_z_units = 160U;
    msg.end_z = 0.169877805819;
    msg.end_z_units = 102U;
    msg.radius = 0.726268025788;
    msg.speed = 0.0572648521755;
    msg.speed_units = 158U;
    msg.custom.assign("ZMCMEMFOASJUTKEKDETBNHGGUFUYEICWVNIDVNDAQPOEWVUKLTHNCQNCXMTPZHWFBUPIKXVJWWLDBOTSOFQZKHLXILDSMEJYPBYGRHPMJFARUURBNZBSWMPNGJJHZOMAJEJSLRTBQLOGJAJZECYRSPXVUCCOFVCATKAIVHUIEPCQCSYZZATNOFVFVOXXBEQDRLSXYGTQPQLZITFYMLMIUKHKKLVPOHIDKWGYRWAXZFGY");

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
    msg.setTimeStamp(0.41393997916);
    msg.setSource(30771U);
    msg.setSourceEntity(1U);
    msg.setDestination(49851U);
    msg.setDestinationEntity(20U);
    msg.timeout = 40628U;
    msg.flags = 222U;
    msg.lat = 0.964051375979;
    msg.lon = 0.353520263487;
    msg.start_z = 0.559766902259;
    msg.start_z_units = 160U;
    msg.end_z = 0.60201174928;
    msg.end_z_units = 14U;
    msg.radius = 0.170301274126;
    msg.speed = 0.191500743123;
    msg.speed_units = 82U;
    msg.custom.assign("JEZBYOQXADVMTFGCFBKSXCEKISLTUGEZNPKEKVUNBJIXBDJGEVGEZDFBHQRPBIBRNUHUOFKYWYZXSFKXZJSHPZMSRLIMNVXDCTYGODWLIXXQMZBGNONJDAWIFMLAYLWDAQKUZIOHSWBFMIEPYRGRQJVTRT");

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
    msg.setTimeStamp(0.184455249594);
    msg.setSource(35334U);
    msg.setSourceEntity(21U);
    msg.setDestination(15338U);
    msg.setDestinationEntity(126U);
    msg.timeout = 21892U;
    msg.flags = 112U;
    msg.lat = 0.950476751691;
    msg.lon = 0.885256999613;
    msg.start_z = 0.683468215044;
    msg.start_z_units = 148U;
    msg.end_z = 0.907559003837;
    msg.end_z_units = 76U;
    msg.radius = 0.747322798971;
    msg.speed = 0.839439258685;
    msg.speed_units = 75U;
    msg.custom.assign("TKDJUWAZUSPWJKIHOTIBTHDQSXHUCEUWRVIMIHGPDYVVQDPNNBLFZCCWLDGCKJVOENAAVTCXKUZRKSGBMPSVUYJATYAYOOBLHLGYNOAFWQQERNLXERPMNBAQWFCQDGIBMPVLMOEZYNOUOCGZFWVM");

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
    msg.setTimeStamp(0.0947627089983);
    msg.setSource(45927U);
    msg.setSourceEntity(196U);
    msg.setDestination(5960U);
    msg.setDestinationEntity(248U);
    msg.timeout = 20010U;
    msg.lat = 0.17402434276;
    msg.lon = 0.328009437612;
    msg.z = 0.274829261605;
    msg.z_units = 20U;
    msg.speed = 0.951265758393;
    msg.speed_units = 15U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.847578485433;
    tmp_msg_0.y = 0.444179945012;
    tmp_msg_0.z = 0.272091733253;
    tmp_msg_0.t = 0.553224571547;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HOZFKCIRAVJKVTJQGJPEUSXFILQMOCFBFJRLFXTCWUKJXRFGZHULYMFNJWHPWZXBYQKQUDFZCWNDOKYTOEZDAUKDLZRGISGBQLIOLBISIHABVASWNIBEYAVAXQHDSRDXBEWANZVEICKIUUARCGJOBFMEMTHDJYIHERYNYPSTHTXYXDQCPQGOSWTMKPXOGPULZAVMBZWUNCSNLSQP");

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
    msg.setTimeStamp(0.232482567534);
    msg.setSource(42738U);
    msg.setSourceEntity(43U);
    msg.setDestination(23679U);
    msg.setDestinationEntity(191U);
    msg.timeout = 25660U;
    msg.lat = 0.593388834843;
    msg.lon = 0.265412960583;
    msg.z = 0.832618771501;
    msg.z_units = 69U;
    msg.speed = 0.299667600648;
    msg.speed_units = 220U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.348530631698;
    tmp_msg_0.y = 0.840751988317;
    tmp_msg_0.z = 0.406660642972;
    tmp_msg_0.t = 0.463361121186;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LOLEPMHRGJVKNQWIQLIRXDCLRWSFABMILIKQJECCVBHAMUTDBNYUSHBBNTPGQX");

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
    msg.setTimeStamp(0.675123702675);
    msg.setSource(12119U);
    msg.setSourceEntity(176U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(177U);
    msg.timeout = 62908U;
    msg.lat = 0.683409725028;
    msg.lon = 0.418739448989;
    msg.z = 0.60478906559;
    msg.z_units = 20U;
    msg.speed = 0.978152803739;
    msg.speed_units = 193U;
    msg.custom.assign("RVJCHDRQVFXBCUJROXDXRSSSRQSQTSIRVSIRKUCPVYMOEXPHTOOVLKHHZJJUCCHHFVFRXGSBBBYMJAQJGNIHLBYYNNDBUAGAQIVEYGKGMOKKFNPIVDGZNTAJTLCRETNCMWTWUYQWAZAPXZMMKPMFOZFZFIGZSJFKBLMWFJLWEUHXDELQLOYHPTUIRQMYZJDLWPPNGUKAN");

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
    msg.setTimeStamp(0.0402618433707);
    msg.setSource(58356U);
    msg.setSourceEntity(113U);
    msg.setDestination(33879U);
    msg.setDestinationEntity(238U);
    msg.x = 0.579768270899;
    msg.y = 0.859062699357;
    msg.z = 0.731132645613;
    msg.t = 0.0779938975334;

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
    msg.setTimeStamp(0.183465292327);
    msg.setSource(3474U);
    msg.setSourceEntity(28U);
    msg.setDestination(10566U);
    msg.setDestinationEntity(106U);
    msg.x = 0.533261423633;
    msg.y = 0.753432164699;
    msg.z = 0.495277424425;
    msg.t = 0.042536073236;

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
    msg.setTimeStamp(0.552352466877);
    msg.setSource(35633U);
    msg.setSourceEntity(48U);
    msg.setDestination(5737U);
    msg.setDestinationEntity(97U);
    msg.x = 0.0170421032866;
    msg.y = 0.841010268794;
    msg.z = 0.378015448339;
    msg.t = 0.225968398732;

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
    msg.setTimeStamp(0.81323579745);
    msg.setSource(6043U);
    msg.setSourceEntity(126U);
    msg.setDestination(19109U);
    msg.setDestinationEntity(56U);
    msg.timeout = 64754U;
    msg.name.assign("IJZUIHCFBEXZULIIYVCJLHKHOFWQSATJDGUVRBDYTZKVQNSJ");
    msg.custom.assign("BREIJRTVHWABUGULQGJHNVPDBECPNOVDEOXYGCZDOYJKFVGDNEKAOHYWWUGWNAVTMMGZSDWFSCMDVOFDR");

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
    msg.setTimeStamp(0.528674639821);
    msg.setSource(5465U);
    msg.setSourceEntity(87U);
    msg.setDestination(32200U);
    msg.setDestinationEntity(77U);
    msg.timeout = 37735U;
    msg.name.assign("SFREFTWJBIPXGFZRCVTOUIAYZQZYFBLXSJUQSRFSMRXJXNKOWNZWCRLMZQNELZNFTLPBDTITHJOKDYCIBHFPJJKZSDGUVIMLTMWXUKCHGOIJEGHFYBMBWEDCQPWRAGZVXA");
    msg.custom.assign("DBKOZRCTCGJAGVLHMAOXCRAGUFMBZTIVEHXLJLEQFRZMNBEMQYJMZNTPESGDUUNBNCSGFODTKTAWJVAWNERMPBBCHDPOPYEZODULPLIUJSMWOIYNNVWYZIZZLHUHESHKTPASDIPCDFLWWZVYYPBUFBHZDLQOJBTOKASUIHGHRMQRSWOXJUJLAXKTFXWJXTRQNGQEANKOEGLCRYVCFYRHVISIDNQMKYDXSRMKWFBIGQFY");

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
    msg.setTimeStamp(0.509941165047);
    msg.setSource(4917U);
    msg.setSourceEntity(147U);
    msg.setDestination(58408U);
    msg.setDestinationEntity(33U);
    msg.timeout = 36843U;
    msg.name.assign("VTQWOJDDAZPDTZZNLTMRVLELUIPHKWQKYAGEXWODWUASJKHSQTNFFIMRRXTXIAEEVVYQNLBAHHTKCWZMXOEQUCWWRQHZPRNHDMJVYEXMBZIPZNLHTDJLGOUQCGRBPSRFMJHJLHREJFBDGDFJYAVSNSEZWLPPUBNGHCXBYOAPSYFOXKAOGQUMMRGXPIUYLKCIMGPSONUKJZWTUIALXYMVCSDICCZDGYRFBVFBEECBVKFOSWIGKVFJSYBQQXAC");
    msg.custom.assign("GOZJZMGQNSQUHVDYDEHFMGXRVBKGYNZHBMGKMDILLPFDPGWXLBAXONWIWMIPJPXRUMGRRQOMJSUYBFDUEJHCCLLNSVOWZKWNFDBFHKZMKPGSUAAQKVNHTLOQWWQBWHELDFRMBZOUVJVUPXPZTA");

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
    msg.setTimeStamp(0.680165305394);
    msg.setSource(29558U);
    msg.setSourceEntity(41U);
    msg.setDestination(56120U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.819288472157;
    msg.lon = 0.282123521755;
    msg.z = 0.195236796485;
    msg.z_units = 198U;
    msg.speed = 0.140191192871;
    msg.speed_units = 239U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.895614867355;
    tmp_msg_0.y = 0.0105126388966;
    tmp_msg_0.z = 0.26472325978;
    tmp_msg_0.t = 0.267665704858;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.16446672641;
    msg.custom.assign("RXSOIODNSQPRZEIXLMQYYNRNTCUQGWMSVPSGM");

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
    msg.setTimeStamp(0.554581142908);
    msg.setSource(51376U);
    msg.setSourceEntity(113U);
    msg.setDestination(17308U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.956497988952;
    msg.lon = 0.972703116929;
    msg.z = 0.190869695892;
    msg.z_units = 141U;
    msg.speed = 0.0935819057466;
    msg.speed_units = 129U;
    msg.start_time = 0.793093235526;
    msg.custom.assign("EEURPMBJVXAQPLZGNBJRSNSSIUNKZOLFGDQIPQGCZPYCXLCWMXFOMANXWWJHFWVTFWTYSJQKDZORERRPQIFMEAKSJOWNSYCGLNLTNJFUPOCVFQKIHCFLIDAAMT");

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
    msg.setTimeStamp(0.292402374093);
    msg.setSource(51028U);
    msg.setSourceEntity(103U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.580768467061;
    msg.lon = 0.843199236204;
    msg.z = 0.967026073775;
    msg.z_units = 143U;
    msg.speed = 0.600475242584;
    msg.speed_units = 48U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.39050060003;
    tmp_msg_0.y = 0.873942902187;
    tmp_msg_0.z = 0.595588021134;
    tmp_msg_0.t = 0.931748513604;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.410211169532;
    msg.custom.assign("EGCPMWGRFIZBYCMGUWBYSISHWOZTVTQEMFWKRLTADRYKYUHULPNAVMFDRENANYDDCHOCQIJFKAIPPKQWSXITCNRSYOIQEXDBXCAJABNLKJJYRJTTPLIZFJPSSRXQUUVTCZGZ");

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
    msg.setTimeStamp(0.0488209037378);
    msg.setSource(35992U);
    msg.setSourceEntity(110U);
    msg.setDestination(10553U);
    msg.setDestinationEntity(112U);
    msg.vid = 41305U;
    msg.off_x = 0.907412647459;
    msg.off_y = 0.538830782516;
    msg.off_z = 0.21363705067;

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
    msg.setTimeStamp(0.48677081576);
    msg.setSource(46007U);
    msg.setSourceEntity(10U);
    msg.setDestination(33585U);
    msg.setDestinationEntity(230U);
    msg.vid = 47471U;
    msg.off_x = 0.29253097639;
    msg.off_y = 0.492038625312;
    msg.off_z = 0.192387720429;

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
    msg.setTimeStamp(0.708044909299);
    msg.setSource(49595U);
    msg.setSourceEntity(109U);
    msg.setDestination(34527U);
    msg.setDestinationEntity(214U);
    msg.vid = 32377U;
    msg.off_x = 0.600995605847;
    msg.off_y = 0.515436699585;
    msg.off_z = 0.172729532215;

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
    msg.setTimeStamp(0.943298539416);
    msg.setSource(15354U);
    msg.setSourceEntity(161U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.097617065137);
    msg.setSource(40103U);
    msg.setSourceEntity(52U);
    msg.setDestination(49942U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.999763160958);
    msg.setSource(48268U);
    msg.setSourceEntity(207U);
    msg.setDestination(50944U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.544566673875);
    msg.setSource(61329U);
    msg.setSourceEntity(9U);
    msg.setDestination(58397U);
    msg.setDestinationEntity(193U);
    msg.mid = 28033U;

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
    msg.setTimeStamp(0.780180542842);
    msg.setSource(5205U);
    msg.setSourceEntity(86U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(254U);
    msg.mid = 25312U;

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
    msg.setTimeStamp(0.387702557869);
    msg.setSource(54296U);
    msg.setSourceEntity(175U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(226U);
    msg.mid = 50613U;

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
    msg.setTimeStamp(0.81632268326);
    msg.setSource(59377U);
    msg.setSourceEntity(201U);
    msg.setDestination(33552U);
    msg.setDestinationEntity(166U);
    msg.state = 226U;
    msg.eta = 48718U;
    msg.info.assign("YZMJHPQVJSFFNQSEOAHQYFTLRBXGWCNBBJYVGARKVVHFDXNAPZJICDHWTMFRSDLOJTZXWOSVYJADVSUIZKPBTRWBCXIPGBOWHNLXGYPDPQAODMFPHGCCLTGKNJULPUJKZ");

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
    msg.setTimeStamp(0.578833939081);
    msg.setSource(42259U);
    msg.setSourceEntity(154U);
    msg.setDestination(44983U);
    msg.setDestinationEntity(155U);
    msg.state = 153U;
    msg.eta = 34545U;
    msg.info.assign("KRACCWDGMPDOFUCEJZZCDDO");

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
    msg.setTimeStamp(0.214078938574);
    msg.setSource(23150U);
    msg.setSourceEntity(86U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(56U);
    msg.state = 93U;
    msg.eta = 22425U;
    msg.info.assign("CGJVJODYEMRTUYSBOVWFEEITRYZHXNFGOBPUDYRCCYXYNEJRAWKIQRABNJWAKCCMWMKJWSQXOXDUCNFCGNUSQWBAXUZDD");

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
    msg.setTimeStamp(0.532120175805);
    msg.setSource(14318U);
    msg.setSourceEntity(194U);
    msg.setDestination(49207U);
    msg.setDestinationEntity(79U);
    msg.system = 60788U;
    msg.duration = 41554U;
    msg.speed = 0.171783743891;
    msg.speed_units = 116U;
    msg.x = 0.212872664943;
    msg.y = 0.932962195802;
    msg.z = 0.525578149905;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.835141782867);
    msg.setSource(33176U);
    msg.setSourceEntity(138U);
    msg.setDestination(48119U);
    msg.setDestinationEntity(116U);
    msg.system = 1888U;
    msg.duration = 45119U;
    msg.speed = 0.883005989584;
    msg.speed_units = 169U;
    msg.x = 0.453049171697;
    msg.y = 0.737722280831;
    msg.z = 0.383693129955;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.0166051559295);
    msg.setSource(58366U);
    msg.setSourceEntity(197U);
    msg.setDestination(14202U);
    msg.setDestinationEntity(199U);
    msg.system = 12632U;
    msg.duration = 16486U;
    msg.speed = 0.804027409932;
    msg.speed_units = 66U;
    msg.x = 0.744116190457;
    msg.y = 0.127833035556;
    msg.z = 0.746644891308;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.0457601366093);
    msg.setSource(57443U);
    msg.setSourceEntity(198U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.373716999257;
    msg.lon = 0.708623337346;
    msg.speed = 0.319574017364;
    msg.speed_units = 235U;
    msg.duration = 10206U;
    msg.sys_a = 8831U;
    msg.sys_b = 54756U;
    msg.move_threshold = 0.911068882776;

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
    msg.setTimeStamp(0.452299871208);
    msg.setSource(29741U);
    msg.setSourceEntity(136U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.180661191577;
    msg.lon = 0.538401283684;
    msg.speed = 0.773917688343;
    msg.speed_units = 199U;
    msg.duration = 19564U;
    msg.sys_a = 30581U;
    msg.sys_b = 57493U;
    msg.move_threshold = 0.412558161427;

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
    msg.setTimeStamp(0.795520068193);
    msg.setSource(21547U);
    msg.setSourceEntity(175U);
    msg.setDestination(7932U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.301790034802;
    msg.lon = 0.79417126686;
    msg.speed = 0.344384272886;
    msg.speed_units = 64U;
    msg.duration = 42292U;
    msg.sys_a = 47016U;
    msg.sys_b = 24588U;
    msg.move_threshold = 0.874608446049;

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
    msg.setTimeStamp(0.512614299602);
    msg.setSource(3232U);
    msg.setSourceEntity(50U);
    msg.setDestination(57546U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.907421911141;
    msg.lon = 0.389421531237;
    msg.z = 0.630420432349;
    msg.z_units = 141U;
    msg.speed = 0.617038723923;
    msg.speed_units = 187U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0621874130508;
    tmp_msg_0.lon = 0.975622948256;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YEQGAZLWKCXHTQWDZTSXJCPWHNRBAAMRKEUDYSCIBVJBQRHLHWFOLBMYCFEVXAMVKIKBJXDBLGJEIALFO");

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
    msg.setTimeStamp(0.0235948832279);
    msg.setSource(36110U);
    msg.setSourceEntity(36U);
    msg.setDestination(11681U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.568558171192;
    msg.lon = 0.226370783235;
    msg.z = 0.343717543575;
    msg.z_units = 3U;
    msg.speed = 0.724246664268;
    msg.speed_units = 112U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.146370125889;
    tmp_msg_0.lon = 0.337156965367;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ILNNSVPUBRBEQDXHHSBFGNZTMGEVAOCURGFAEVWFZOERFXTAHCLWMBZJPLZUGIZGCDYPYZBAMZLYYDZPIDJUCKWAKPXRG");

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
    msg.setTimeStamp(0.693787562741);
    msg.setSource(39139U);
    msg.setSourceEntity(49U);
    msg.setDestination(61901U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.674494814001;
    msg.lon = 0.661371050855;
    msg.z = 0.336824991158;
    msg.z_units = 5U;
    msg.speed = 0.820723838397;
    msg.speed_units = 79U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.428179054555;
    tmp_msg_0.lon = 0.622415952835;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CAYVJIWRFOIQUDRFDTZECSZJBVOXJXKXTZVPIHPKHLQMZPLZSYPCKIPHMVMG");

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
    msg.setTimeStamp(0.00353560396447);
    msg.setSource(8188U);
    msg.setSourceEntity(156U);
    msg.setDestination(42928U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.117548339854;
    msg.lon = 0.224381239884;

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
    msg.setTimeStamp(0.333843226602);
    msg.setSource(42573U);
    msg.setSourceEntity(252U);
    msg.setDestination(62213U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.756632672346;
    msg.lon = 0.431985510557;

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
    msg.setTimeStamp(0.97276522903);
    msg.setSource(7942U);
    msg.setSourceEntity(24U);
    msg.setDestination(54234U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.965034403453;
    msg.lon = 0.523177826797;

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
    msg.setTimeStamp(0.375267886213);
    msg.setSource(1388U);
    msg.setSourceEntity(7U);
    msg.setDestination(40090U);
    msg.setDestinationEntity(37U);
    msg.timeout = 45178U;
    msg.lat = 0.913984091057;
    msg.lon = 0.684716569304;
    msg.z = 0.584861321101;
    msg.z_units = 136U;
    msg.pitch = 0.390977897273;
    msg.amplitude = 0.308541593958;
    msg.duration = 25820U;
    msg.speed = 0.216448566522;
    msg.speed_units = 150U;
    msg.radius = 0.0653370682636;
    msg.direction = 242U;
    msg.custom.assign("MHNTMGWLHDPUUTZZMLSHKCULCXVSHCYRYZJKOXZKLVMEJFYGVUNYOGFLRNPEUMUFXLMTFNQRSJBFWVNQLUEEJFBGOQCADTAJMWDEDLYOIUEFTAKWASYKBCWLTYAZKRHKCIGMFTIQWVLEVWGIJSCHVNJOMPXZDTDXCRAPYKSBBBIPQNOEUXOPNRORHQNPIZGTAQMFRCUHZKRAZJXJAVGEQIWDJSBXQPKBBVAG");

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
    msg.setTimeStamp(0.452188845711);
    msg.setSource(64047U);
    msg.setSourceEntity(200U);
    msg.setDestination(56099U);
    msg.setDestinationEntity(115U);
    msg.timeout = 27504U;
    msg.lat = 0.872009993134;
    msg.lon = 0.180824081783;
    msg.z = 0.972600824986;
    msg.z_units = 9U;
    msg.pitch = 0.666114142381;
    msg.amplitude = 0.64301658727;
    msg.duration = 48458U;
    msg.speed = 0.327217168432;
    msg.speed_units = 81U;
    msg.radius = 0.939926242617;
    msg.direction = 120U;
    msg.custom.assign("MBGOYBRAXZTJTSDRHHYNWMQCBWTOPPTQWSLNYOVPQLUEKZAFZUMYRDVLUBVQXS");

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
    msg.setTimeStamp(0.125566318511);
    msg.setSource(44165U);
    msg.setSourceEntity(83U);
    msg.setDestination(62964U);
    msg.setDestinationEntity(183U);
    msg.timeout = 55964U;
    msg.lat = 0.0301858802678;
    msg.lon = 0.400415147773;
    msg.z = 0.54142005023;
    msg.z_units = 10U;
    msg.pitch = 0.293996401102;
    msg.amplitude = 0.860592404161;
    msg.duration = 23338U;
    msg.speed = 0.794450394661;
    msg.speed_units = 139U;
    msg.radius = 0.470035426339;
    msg.direction = 240U;
    msg.custom.assign("XDJBUAOSCLSUPZQJPMPNONWVZCIVCEHAJMWFVBGXDWTDGSIPULMIPRLJEBXMCHRIQVYLHCNDKRHOMNZLDDHHA");

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
    IMC::Formation msg;
    msg.setTimeStamp(0.222212246485);
    msg.setSource(36680U);
    msg.setSourceEntity(75U);
    msg.setDestination(47848U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("FIENDIJCWCZKPHYFAPXVVQQRCNXXYSIEOXBSZDYQAQUUBTHSGM");
    msg.type = 2U;
    msg.op = 151U;
    msg.group_name.assign("UTWKFVZSRTOHBAKHISSUQOHVR");
    msg.plan_id.assign("EQBKURLPWBAMGPWJUQTMWGYWKFHXMLTIKKVRPCENUZTOSAWUHMNCOFOCSQJYOBPLAZCFGSXRXANBZBAZBWYDHNKJIROPOMXDHSGZCLCABBJVZNKUGEGQXWFHGMULRFCQOKVYKFUDIWDSKLGQIEOYLTKTSEHPTVPVCCXXZAAAOJNZLDHDTJVTEDFENYYRMNSINFYHRCUJ");
    msg.description.assign("PGKTWDFXURQBKNYQGEDACTJBEMTAQAVLEUSUWPLFNCAVIIVMAZPIXJJXDONEYHVFUOFTTIORYYUXKFJGODUIRHPBGTMQZOKXIKAHCAYCIQWDIOYJMAPLAEBMYDBDJSARDTYPENQTZQWGZHYNNDWZEQRLWRVZFSJXZEHHYVMFNJGNCWXBRLSCGODVUOOSMWUZHKJECXCBBTQPBHIGMBQNZLJGLWUPRPSVSKLXMVKH");
    msg.reference_frame = 44U;
    msg.leader_bank_lim = 0.812328695454;
    msg.leader_speed_min = 0.91748604502;
    msg.leader_speed_max = 0.967691595881;
    msg.leader_alt_min = 0.254512402192;
    msg.leader_alt_max = 0.860347261433;
    msg.pos_sim_err_lim = 0.760211765892;
    msg.pos_sim_err_wrn = 0.128384699832;
    msg.pos_sim_err_timeout = 18572U;
    msg.converg_max = 0.798512106058;
    msg.converg_timeout = 33286U;
    msg.comms_timeout = 51013U;
    msg.turb_lim = 0.567304690385;
    msg.custom.assign("UPEEGDWLQWZPMYADOGQUOFNYXXXMPSBNDBHCICFEOTRPBKIRYWSAVZGYADWLAKHJZZPECHPNGPRHWLQXAFMZJHCXRXRVLDPOKMRCFVKDZIYRMCUDFSSZQEGAMYGEPXOYW");

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
    msg.setTimeStamp(0.190032260117);
    msg.setSource(60902U);
    msg.setSourceEntity(2U);
    msg.setDestination(37019U);
    msg.setDestinationEntity(71U);
    msg.formation_name.assign("PUSFBDOREGELJBEIELZGPMMKPFRWXJXMOEBJUZUVJVNKCGZSUQPDSIYCJLYYQKCCPSUKEWBJNTEASQWQRTH");
    msg.type = 63U;
    msg.op = 243U;
    msg.group_name.assign("VQRSKXJLRQNWNOZRAEQZJGZMJXHBRQOOPBSYCWNSQEFZGYXDHMMRADGSMTXVNKKEIJDPIPAQTCLSAKSDRKRMXIJIKREVOASWPEPDILGJUFHFPYNAGYEEEOUXRPCHYDWJWLZCUGFXFTOBXVKWVLCWMVILASVOOJCPGHY");
    msg.plan_id.assign("FVEXQTYEKZNXZXSMDLJOKVMTQZAWVTXTYXHLFBEWUVOHNPVUURSRXGSWKNPYIDWPHCNMOUDBMMEPJUGCTNSKRDFDFSAPEILHGYNZZMIFYFDCKQGRXRJLVZKBYJYDDACITPZQORIOYGHHVGIPIVKBAOHUOMTWEORBTQSACMTCUMCXGC");
    msg.description.assign("TYJUGVTBORNIWLERVIKMQJQBIGLQQAIAAHHJRCZPUCMLRKAUDWEBBSPJNIFKLPKYTCXBEIFDHMZUTBZYOTXSYGEJVTYLRWFWCPNSQVGKXVOKDHQGYDLCUYZNEAXPOWARIPQWVWCZJLPDELMXDYFNFQTKGZBRONOBBDAHGPFCXAOVZOCDTNWXZHUUUGPBZJNLIKZDWWYHEAQJSUMEFEESDJIS");
    msg.reference_frame = 159U;
    msg.leader_bank_lim = 0.141566941229;
    msg.leader_speed_min = 0.341012199384;
    msg.leader_speed_max = 0.154353762366;
    msg.leader_alt_min = 0.538390810107;
    msg.leader_alt_max = 0.776414253293;
    msg.pos_sim_err_lim = 0.253600939683;
    msg.pos_sim_err_wrn = 0.000549843099563;
    msg.pos_sim_err_timeout = 7943U;
    msg.converg_max = 0.275598809119;
    msg.converg_timeout = 35789U;
    msg.comms_timeout = 8870U;
    msg.turb_lim = 0.110327117659;
    msg.custom.assign("ROYBPOPBFMREMICAMSTUSJPXWRISRHXAJEKQGJCYNDVZYQTUVKDPKQQYYHCRZECSIVEMXILENQUWJEWZLQVJAQNMFQL");

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
    msg.setTimeStamp(0.753971632991);
    msg.setSource(37524U);
    msg.setSourceEntity(239U);
    msg.setDestination(20844U);
    msg.setDestinationEntity(113U);
    msg.formation_name.assign("BJICNKYRYKDXTSHROPRBFWHXPJHOJGQEIEEAABLMDPUZSVTVVCYICTFQNTFVJGAMPTWOKZQYXFCOHZZQVLCGQNNHLBOFNIVGBSKXUYCPMWEBDWGSNQOLJRNKGAGUFEWJRYIJTWCXHEIDMLREALVDUJPRWEHTYFGGLNZUPTIWBNYXWLXSNRRMSDSWEMUOKSMKZUVBCYJQZXPUHOZRZD");
    msg.type = 190U;
    msg.op = 33U;
    msg.group_name.assign("BYQMNAARZZUNSGPUORUKUTLHNMRHPATJULZNGXXXMHGDHUXFPUIQPTABOWZERQWETTBCPOVTWFWBSRENLJMSNYPKYLZLNJIOLCKIYFARGLIWBOKMITSIJFEDPWLUGYFVOZFEJVDWKEAXGZASRVHAVSMGODYHTSJCCGQJJNEPWOLMPCFKHQBXYTBJKEDLWRVWCKMQIRGYZQDBKSIRBVSDACPXEUNHXMKDZOJVIYFOXBMQVU");
    msg.plan_id.assign("RQYLMVMPBJGXGDZZFPHQHSCUBAOEGXZVRJHSQZAUBEINTYBKINNFMAUOMUWNSSFLWYAESEOCPRWVWNKPJUCUEYTOMWKBOXTJDOLJAHFR");
    msg.description.assign("XZSCANJXZPKUWJKAMMRLQTGPSILIOCYMDEXHLVOZTNLVZGXNJCSPDTFDFDVGGRTVYQKKZKJMFNKATKRHOHBBLZV");
    msg.reference_frame = 130U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65448U;
    tmp_msg_0.off_x = 0.778323634975;
    tmp_msg_0.off_y = 0.678044963827;
    tmp_msg_0.off_z = 0.993571179227;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.887887882976;
    msg.leader_speed_min = 0.914467126346;
    msg.leader_speed_max = 0.204453866209;
    msg.leader_alt_min = 0.574326351942;
    msg.leader_alt_max = 0.377368061673;
    msg.pos_sim_err_lim = 0.777587553515;
    msg.pos_sim_err_wrn = 0.0335663660591;
    msg.pos_sim_err_timeout = 15340U;
    msg.converg_max = 0.526288731276;
    msg.converg_timeout = 16761U;
    msg.comms_timeout = 3561U;
    msg.turb_lim = 0.191904386509;
    msg.custom.assign("PJXGRHOFEOMVWBYREIXJZLZCWSKHTDIBPNXAMBVHIEPXWQXCPQUQJTYPIJAISYYDOIVDRBXXGCQYDMIVOGKCEQRATYNGIDCSDTRUXKHFDSLVIWSPXKWQNTSKARJ");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.912974762331);
    msg.setSource(24024U);
    msg.setSourceEntity(216U);
    msg.setDestination(54342U);
    msg.setDestinationEntity(10U);
    msg.control_src = 10293U;
    msg.control_ent = 153U;
    msg.timeout = 0.00290252890404;
    msg.loiter_radius = 0.675315829276;
    msg.altitude_interval = 0.085914226696;

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
    msg.setTimeStamp(0.536401464651);
    msg.setSource(28609U);
    msg.setSourceEntity(152U);
    msg.setDestination(53950U);
    msg.setDestinationEntity(155U);
    msg.control_src = 11010U;
    msg.control_ent = 33U;
    msg.timeout = 0.965140633433;
    msg.loiter_radius = 0.263083514268;
    msg.altitude_interval = 0.953771495263;

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
    msg.setTimeStamp(0.907404531375);
    msg.setSource(22378U);
    msg.setSourceEntity(233U);
    msg.setDestination(62794U);
    msg.setDestinationEntity(5U);
    msg.control_src = 60679U;
    msg.control_ent = 33U;
    msg.timeout = 0.427412626704;
    msg.loiter_radius = 0.0379245994843;
    msg.altitude_interval = 0.324278897179;

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
    msg.setTimeStamp(0.495763173625);
    msg.setSource(28540U);
    msg.setSourceEntity(231U);
    msg.setDestination(29936U);
    msg.setDestinationEntity(4U);
    msg.flags = 139U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.449722299368;
    tmp_msg_0.speed_units = 214U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0628566027011;
    tmp_msg_1.z_units = 126U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.902687837507;
    msg.lon = 0.176891760402;
    msg.radius = 0.478705127921;

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
    msg.setTimeStamp(0.749642918479);
    msg.setSource(11710U);
    msg.setSourceEntity(101U);
    msg.setDestination(22842U);
    msg.setDestinationEntity(22U);
    msg.flags = 197U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.40915936374;
    tmp_msg_0.speed_units = 194U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.673155333691;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.124746417657;
    msg.lon = 0.753118360876;
    msg.radius = 0.861036873363;

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
    msg.setTimeStamp(0.19614327038);
    msg.setSource(13140U);
    msg.setSourceEntity(156U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(234U);
    msg.flags = 1U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.372999515315;
    tmp_msg_0.speed_units = 223U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.914770021662;
    tmp_msg_1.z_units = 181U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.854692632437;
    msg.lon = 0.808312470381;
    msg.radius = 0.568378299331;

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
    msg.setTimeStamp(0.0571959015737);
    msg.setSource(13391U);
    msg.setSourceEntity(36U);
    msg.setDestination(9555U);
    msg.setDestinationEntity(177U);
    msg.control_src = 35827U;
    msg.control_ent = 93U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8375382435;
    tmp_tmp_msg_0_0.speed_units = 80U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.830988617556;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0747190947938;
    tmp_msg_0.lon = 0.0553220313341;
    tmp_msg_0.radius = 0.43687835769;
    msg.reference.set(tmp_msg_0);
    msg.state = 197U;
    msg.proximity = 103U;

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
    msg.setTimeStamp(0.442948074305);
    msg.setSource(41478U);
    msg.setSourceEntity(89U);
    msg.setDestination(17439U);
    msg.setDestinationEntity(145U);
    msg.control_src = 24701U;
    msg.control_ent = 136U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.895747288476;
    tmp_tmp_msg_0_0.speed_units = 253U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3354768337;
    tmp_tmp_msg_0_1.z_units = 172U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.838161176244;
    tmp_msg_0.lon = 0.115643036796;
    tmp_msg_0.radius = 0.884045090639;
    msg.reference.set(tmp_msg_0);
    msg.state = 231U;
    msg.proximity = 235U;

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
    msg.setTimeStamp(0.425820654023);
    msg.setSource(58381U);
    msg.setSourceEntity(103U);
    msg.setDestination(34985U);
    msg.setDestinationEntity(159U);
    msg.control_src = 15774U;
    msg.control_ent = 201U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 161U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.825416180736;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.340301375804;
    tmp_tmp_msg_0_1.z_units = 45U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7659252873;
    tmp_msg_0.lon = 0.535926938293;
    tmp_msg_0.radius = 0.983398360074;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
    msg.proximity = 131U;

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
    msg.setTimeStamp(0.295762963904);
    msg.setSource(34257U);
    msg.setSourceEntity(171U);
    msg.setDestination(42594U);
    msg.setDestinationEntity(6U);
    msg.dist_min = 0.705790080755;
    msg.ax_cmd = 0.547687316145;
    msg.ay_cmd = 0.640230639608;
    msg.az_cmd = 0.156884120632;
    msg.ax_des = 0.760358078476;
    msg.ay_des = 0.697662995167;
    msg.az_des = 0.219503020862;
    msg.virt_err_x = 0.641516914162;
    msg.virt_err_y = 0.851445115122;
    msg.virt_err_z = 0.97082106941;
    msg.surf_fdbk_x = 0.446727401722;
    msg.surf_fdbk_y = 0.79692752291;
    msg.surf_fdbk_z = 0.902617721926;
    msg.surf_unkn_x = 0.507510723079;
    msg.surf_unkn_y = 0.211711338298;
    msg.surf_unkn_z = 0.184996668388;
    msg.ss_x = 0.431213884295;
    msg.ss_y = 0.808673025126;
    msg.ss_z = 0.782983536903;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TSEYDUULJPAXVFJFLNJZSFCHEMMNBWCNFMFEABGBXPRUQXOILMTXLACNCTYRABYGZEOVRYARDLP");
    tmp_msg_0.dist = 0.551241657336;
    tmp_msg_0.err = 0.933150819593;
    tmp_msg_0.ctrl_imp = 0.704039039129;
    tmp_msg_0.rel_dir_x = 0.427629285692;
    tmp_msg_0.rel_dir_y = 0.933038783757;
    tmp_msg_0.rel_dir_z = 0.0891801160418;
    tmp_msg_0.err_x = 0.942023457944;
    tmp_msg_0.err_y = 0.704184808341;
    tmp_msg_0.err_z = 0.561716997577;
    tmp_msg_0.rf_err_x = 0.833992409322;
    tmp_msg_0.rf_err_y = 0.98731045537;
    tmp_msg_0.rf_err_z = 0.753111525309;
    tmp_msg_0.rf_err_vx = 0.622128362105;
    tmp_msg_0.rf_err_vy = 0.99959662979;
    tmp_msg_0.rf_err_vz = 0.769079226474;
    tmp_msg_0.ss_x = 0.00536313238828;
    tmp_msg_0.ss_y = 0.0536378406703;
    tmp_msg_0.ss_z = 0.276569759765;
    tmp_msg_0.virt_err_x = 0.643886021235;
    tmp_msg_0.virt_err_y = 0.711500079062;
    tmp_msg_0.virt_err_z = 0.615450390326;
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
    msg.setTimeStamp(0.512483081151);
    msg.setSource(1732U);
    msg.setSourceEntity(145U);
    msg.setDestination(14932U);
    msg.setDestinationEntity(186U);
    msg.dist_min = 0.0241889131647;
    msg.ax_cmd = 0.992813499121;
    msg.ay_cmd = 0.371910182409;
    msg.az_cmd = 0.804299412789;
    msg.ax_des = 0.26471419793;
    msg.ay_des = 0.228287307758;
    msg.az_des = 0.251166240058;
    msg.virt_err_x = 0.223717845381;
    msg.virt_err_y = 0.684548915417;
    msg.virt_err_z = 0.133456800848;
    msg.surf_fdbk_x = 0.854903429565;
    msg.surf_fdbk_y = 0.64707217381;
    msg.surf_fdbk_z = 0.58257322764;
    msg.surf_unkn_x = 0.0598185412548;
    msg.surf_unkn_y = 0.737210721651;
    msg.surf_unkn_z = 0.949156960024;
    msg.ss_x = 0.761146278504;
    msg.ss_y = 0.502016713096;
    msg.ss_z = 0.56715833311;

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
    msg.setTimeStamp(0.870750709452);
    msg.setSource(13829U);
    msg.setSourceEntity(204U);
    msg.setDestination(31142U);
    msg.setDestinationEntity(220U);
    msg.dist_min = 0.11737138723;
    msg.ax_cmd = 0.800515128283;
    msg.ay_cmd = 0.755919593579;
    msg.az_cmd = 0.983242350626;
    msg.ax_des = 0.110652376775;
    msg.ay_des = 0.0329754570729;
    msg.az_des = 0.283829981114;
    msg.virt_err_x = 0.267818052635;
    msg.virt_err_y = 0.740566150734;
    msg.virt_err_z = 0.680170314254;
    msg.surf_fdbk_x = 0.237341269807;
    msg.surf_fdbk_y = 0.286188444699;
    msg.surf_fdbk_z = 0.281328651394;
    msg.surf_unkn_x = 0.875295470777;
    msg.surf_unkn_y = 0.346193445416;
    msg.surf_unkn_z = 0.0538029310057;
    msg.ss_x = 0.886449638928;
    msg.ss_y = 0.348903508966;
    msg.ss_z = 0.569057445481;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UWWBQJVIVNEPGKURFSQVP");
    tmp_msg_0.dist = 0.706424246347;
    tmp_msg_0.err = 0.78744505709;
    tmp_msg_0.ctrl_imp = 0.346300854071;
    tmp_msg_0.rel_dir_x = 0.706735311733;
    tmp_msg_0.rel_dir_y = 0.615079460299;
    tmp_msg_0.rel_dir_z = 0.580105188266;
    tmp_msg_0.err_x = 0.401057648685;
    tmp_msg_0.err_y = 0.934932288563;
    tmp_msg_0.err_z = 0.978409207429;
    tmp_msg_0.rf_err_x = 0.23068258627;
    tmp_msg_0.rf_err_y = 0.307767629484;
    tmp_msg_0.rf_err_z = 0.51920847036;
    tmp_msg_0.rf_err_vx = 0.334430989828;
    tmp_msg_0.rf_err_vy = 0.522065909953;
    tmp_msg_0.rf_err_vz = 0.157868873873;
    tmp_msg_0.ss_x = 0.773593331237;
    tmp_msg_0.ss_y = 0.657198746059;
    tmp_msg_0.ss_z = 0.71965199277;
    tmp_msg_0.virt_err_x = 0.833161822103;
    tmp_msg_0.virt_err_y = 0.259187267957;
    tmp_msg_0.virt_err_z = 0.25309258762;
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
    msg.setTimeStamp(0.440414965485);
    msg.setSource(26421U);
    msg.setSourceEntity(28U);
    msg.setDestination(5114U);
    msg.setDestinationEntity(155U);
    msg.s_id.assign("IDFYYZKDMHBUBABJMQHEDVYPJJZCHKQLGNZESCAVGDBAIGVNVJNUFGIEDROQHXLKH");
    msg.dist = 0.631254514715;
    msg.err = 0.987938000523;
    msg.ctrl_imp = 0.0692524386492;
    msg.rel_dir_x = 0.312759438792;
    msg.rel_dir_y = 0.715380033181;
    msg.rel_dir_z = 0.336820572682;
    msg.err_x = 0.277917460282;
    msg.err_y = 0.451333214697;
    msg.err_z = 0.999222883911;
    msg.rf_err_x = 0.400311854231;
    msg.rf_err_y = 0.924217654827;
    msg.rf_err_z = 0.506435433629;
    msg.rf_err_vx = 0.36704144334;
    msg.rf_err_vy = 0.0708897763822;
    msg.rf_err_vz = 0.532350898731;
    msg.ss_x = 0.0691484120814;
    msg.ss_y = 0.075346562258;
    msg.ss_z = 0.43785354045;
    msg.virt_err_x = 0.786564617373;
    msg.virt_err_y = 0.445875109462;
    msg.virt_err_z = 0.068791006302;

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
    msg.setTimeStamp(0.677768024302);
    msg.setSource(23945U);
    msg.setSourceEntity(136U);
    msg.setDestination(61499U);
    msg.setDestinationEntity(75U);
    msg.s_id.assign("JZYSASPKQXNTDGTLHITEBXIANGEWCMWXAUMFKLBOCZINNGLZBAMRQNIKBRSRUCHYJDUTNRIGHDYUBXSCAWJKWFMLVJWZNXIUKSMQE");
    msg.dist = 0.253319477603;
    msg.err = 0.847234963422;
    msg.ctrl_imp = 0.834648947061;
    msg.rel_dir_x = 0.0872292038915;
    msg.rel_dir_y = 0.738056807726;
    msg.rel_dir_z = 0.477786002148;
    msg.err_x = 0.0612327122;
    msg.err_y = 0.207062684941;
    msg.err_z = 0.179660834446;
    msg.rf_err_x = 0.201253554228;
    msg.rf_err_y = 0.494245258974;
    msg.rf_err_z = 0.89266081466;
    msg.rf_err_vx = 0.490324368685;
    msg.rf_err_vy = 0.33514417184;
    msg.rf_err_vz = 0.707456307075;
    msg.ss_x = 0.595284591056;
    msg.ss_y = 0.435968860388;
    msg.ss_z = 0.205379786095;
    msg.virt_err_x = 0.716438617419;
    msg.virt_err_y = 0.557460593987;
    msg.virt_err_z = 0.919057107632;

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
    msg.setTimeStamp(0.60153105144);
    msg.setSource(21802U);
    msg.setSourceEntity(94U);
    msg.setDestination(27521U);
    msg.setDestinationEntity(219U);
    msg.s_id.assign("INTVCAPXGJBVDSWSVIXVQFGNURICLQFZYLNOEPMTIDTCVNALZUTNRSRQZGOSAPJPFQDTAUXUHZUGREQMXDUAMHVOYXXEJTLBQZHHZOIDVCUNBKFPKEYYZKBLJDWLMPRJLFOJSIWGCOMWDFLFWWPMPCKCMHYYGACLHI");
    msg.dist = 0.502914874045;
    msg.err = 0.602110633196;
    msg.ctrl_imp = 0.77761024541;
    msg.rel_dir_x = 0.0620951922149;
    msg.rel_dir_y = 0.201487624649;
    msg.rel_dir_z = 0.0975920564811;
    msg.err_x = 0.693169256286;
    msg.err_y = 0.88612752797;
    msg.err_z = 0.533658142026;
    msg.rf_err_x = 0.54211755847;
    msg.rf_err_y = 0.491314085276;
    msg.rf_err_z = 0.167595110855;
    msg.rf_err_vx = 0.690108087868;
    msg.rf_err_vy = 0.167728045419;
    msg.rf_err_vz = 0.157235519843;
    msg.ss_x = 0.104327339572;
    msg.ss_y = 0.500293440419;
    msg.ss_z = 0.704505889521;
    msg.virt_err_x = 0.846553440144;
    msg.virt_err_y = 0.968714834733;
    msg.virt_err_z = 0.0371013837471;

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
    msg.setTimeStamp(0.335493812809);
    msg.setSource(47385U);
    msg.setSourceEntity(93U);
    msg.setDestination(7277U);
    msg.setDestinationEntity(155U);
    msg.timeout = 29824U;
    msg.rpm = 0.128316818059;
    msg.direction = 169U;
    msg.custom.assign("JXIVWKVHOTPRZNCXOWXZRMSLXYTDSNFJPBCJPUKQJADEPFBLWHSUIYAYEICGUZVZPPOTSDNHQCUCWERKKUYCFADHUARBVMGTHOSRFFREIXHAXRLDOLWVGREHKNVYKQQXZIWNOCAKPEZAAUBFUNTTJXJYFTLMZHPIYGKVMAYJLVYSMDBFMPSRXWLIBEUGGNDSLBJZIOKHDJTDZEXEFVYTQWNQSCNPLSCGMJKWFBQQW");

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
    msg.setTimeStamp(0.602704948505);
    msg.setSource(46615U);
    msg.setSourceEntity(44U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(227U);
    msg.timeout = 3829U;
    msg.rpm = 0.113504714257;
    msg.direction = 219U;
    msg.custom.assign("CSJSDOUGFGF");

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
    msg.setTimeStamp(0.584992899254);
    msg.setSource(22096U);
    msg.setSourceEntity(94U);
    msg.setDestination(20767U);
    msg.setDestinationEntity(55U);
    msg.timeout = 8009U;
    msg.rpm = 0.363038130214;
    msg.direction = 89U;
    msg.custom.assign("ZNMVZDFVDQEGHKIUTODGXGQRUUBJOFVMTJIJDFGAHDYLBWTRFWJREHOPODESVGVLKTXCZULJPSZRWE");

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
    msg.setTimeStamp(0.0542797955468);
    msg.setSource(47300U);
    msg.setSourceEntity(231U);
    msg.setDestination(22593U);
    msg.setDestinationEntity(126U);
    msg.op_mode = 76U;
    msg.error_count = 81U;
    msg.error_ents.assign("RXPTQBGYLPLKCZEJZIVHUNJALIDELJMGWEZFCHZOTBWQUNDTMBWQZCOAAPHPVYCMSNNBEAUDOLCNDMHGQFNVXASSRBFMYTYBGQBTSUVWOIKQRLNGKVGJACOXNFUWBXYFBQGKPVOMURHQITWZFPOIPPKQJIJCFOUOSLYZRVCKGDYVNEWQFXFZTXOHEZIYMUNHAYXXSIJS");
    msg.maneuver_type = 55148U;
    msg.maneuver_stime = 0.337753018357;
    msg.maneuver_eta = 18231U;
    msg.control_loops = 4221819489U;
    msg.flags = 246U;
    msg.last_error.assign("CGKTESJQRSZFIKWBJMVECUHVBWIVJBSTAEJSSWZQYIORKNNDNDAGCMZMLONWYIBZODGITNJGLEDANWDKGKUMZDUZEHAXVOOLXJYULWRZDWUEYPKPTVKPRTQMYHWNZAFQMFOJLQITH");
    msg.last_error_time = 0.694110479448;

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
    msg.setTimeStamp(0.481199876146);
    msg.setSource(46188U);
    msg.setSourceEntity(110U);
    msg.setDestination(61192U);
    msg.setDestinationEntity(178U);
    msg.op_mode = 46U;
    msg.error_count = 156U;
    msg.error_ents.assign("AJPPFHDGXTFNDCXPBQNZFVUVYZARMQHFVXMCLJTNOETGSYFUZYCTELUOPCBSZZRSVABJIRMAKWGHUWKKMUHEMHOAQXDKRKIYXPIBOQRCKMVDZZQNNSJRQEBNVQDKNDXACPTIMCGLUDGEYLLHWNSWCYBCJBOLVKZHWLVBJXYEOGEETZAWPRRSJFGVRKYFKMPFNIAIIUPJGSEXB");
    msg.maneuver_type = 12078U;
    msg.maneuver_stime = 0.791800686925;
    msg.maneuver_eta = 3674U;
    msg.control_loops = 1220327385U;
    msg.flags = 251U;
    msg.last_error.assign("DEVVSFGEPMSBX");
    msg.last_error_time = 0.590357188433;

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
    msg.setTimeStamp(0.0085042173683);
    msg.setSource(13814U);
    msg.setSourceEntity(143U);
    msg.setDestination(3095U);
    msg.setDestinationEntity(123U);
    msg.op_mode = 144U;
    msg.error_count = 17U;
    msg.error_ents.assign("WZGNKVELUAIDKWJRNXJBCEXMUIIVZULHFWMLCWCXHFVZEUWMUSRISGMDGRFGRWZWAOIQZMQQGPCLYSYBRPTYHVRPHVXAPJIFDLMJLAACXTSXFPTLTLMWQSYXNQVSVKITDBOUBKYAYGEND");
    msg.maneuver_type = 2064U;
    msg.maneuver_stime = 0.172661836102;
    msg.maneuver_eta = 10107U;
    msg.control_loops = 3124191696U;
    msg.flags = 216U;
    msg.last_error.assign("BVQXNDOAYWXRJEUFLWLSIVLIERCNOTOJQLESFCTBRRXRUPYAJFPBDWPAJKCVZCXBOZUXSRLPZOGAZVNUKIJAHAMMEYMOHYLYMCHJKHBEVJUIBPELQDXPDWMNWOFAITUBFGGUKLMNAGNKMYBEQQFQVMYFFXTSDIDIWPSTVOBSYWCTKHXHGPHKLYYZIAEHZDQHMKGGOEJKUZWXGAUZPRQTLWSCVZHQRPECQDVNWIFBG");
    msg.last_error_time = 0.123761093602;

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
    msg.setTimeStamp(0.223331848838);
    msg.setSource(48896U);
    msg.setSourceEntity(39U);
    msg.setDestination(42301U);
    msg.setDestinationEntity(93U);
    msg.type = 217U;
    msg.request_id = 26447U;
    msg.command = 170U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 49478U;
    tmp_msg_0.lat = 0.657156861632;
    tmp_msg_0.lon = 0.728838276113;
    tmp_msg_0.z = 0.0895548247357;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.speed = 0.0275433024737;
    tmp_msg_0.speed_units = 112U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.544437395851;
    tmp_tmp_msg_0_0.y = 0.237547013846;
    tmp_tmp_msg_0_0.z = 0.952119714428;
    tmp_tmp_msg_0_0.t = 0.70149347348;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RFQETTKBRLAFEJBUECRLHNTSDXOZUGZIRNFTSMGVEXZWATAJWPGGQKKXZOXWLCCLKKKLPGQPFDFMQQXHEHSJOAIDGKMWZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3095U;
    msg.info.assign("MKWKUBNOBPRTYDEMCBQGWHLRKIDETLIQWSPHGFKIBMNDHGNHXXSFTJZFIUIGZVAELQNKMLSKMJXPCVAXPIHQNZZGZKSTKLWURDCN");

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
    msg.setTimeStamp(0.619679116984);
    msg.setSource(44442U);
    msg.setSourceEntity(16U);
    msg.setDestination(673U);
    msg.setDestinationEntity(139U);
    msg.type = 212U;
    msg.request_id = 49010U;
    msg.command = 58U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.411884240346;
    tmp_msg_0.lon = 0.419134151664;
    tmp_msg_0.z = 0.39734532423;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.radius = 0.272873385534;
    tmp_msg_0.duration = 2486U;
    tmp_msg_0.speed = 0.29371542343;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.custom.assign("NOLIELUWUMOXCMOBEFQTAHMJBNLMKBLNWEPJVTLZECKXGIRWBRHCGBBXTEYUNWSKJQYDFEJHAZXYTRWXBCXDNQDVAFIINGUZSYZRPZASOOGKKUJUVQHMWDHMCVANIGRPHDFIJTFKUZOMORPDAGAONDZUGRISLZBQMHSGXQWNIP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34989U;
    msg.info.assign("GJBDBWHJJVJGKZHOGZKKJPREUXKCRUMTVOKHAHWI");

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
    msg.setTimeStamp(0.839726037042);
    msg.setSource(54994U);
    msg.setSourceEntity(2U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(227U);
    msg.type = 139U;
    msg.request_id = 59258U;
    msg.command = 22U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 37241U;
    tmp_msg_0.lat = 0.279172443965;
    tmp_msg_0.lon = 0.128496449002;
    tmp_msg_0.z = 0.253034196261;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.duration = 49036U;
    tmp_msg_0.speed = 0.322265346926;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.type = 91U;
    tmp_msg_0.radius = 0.626807872183;
    tmp_msg_0.length = 0.933638175217;
    tmp_msg_0.bearing = 0.409261035624;
    tmp_msg_0.direction = 154U;
    tmp_msg_0.custom.assign("ITZLVBAPRCFJNAYMMOXMNWZUWYNFAZVQEUBCMNYYULBQHMJSQDKSDOEUJHYWVPKFURVZOGELVORJLHETQOKTDAAGPLREIAPNPWEXCHBBXGCJIEMRQJTZMHGTGUNXCDXXTFKCJFWUZRFSMCODZVBLNOVSOCDIGGSXWIDUFF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44868U;
    msg.info.assign("FOSTUHQHUDIMHKTWKDJTCVBKEDBOPLWKHNJZGLPSCCJZYPVKWLCVRSSMFCVFMRIVGYYXEORSNCXNOXRGPBXGTANLEJCVGKDTIZDJFDQTFIJOFKCEXNPHSRPQOVDABATFASCHTLCNAESDERIMZOUITERHRFABIPKQZPHYZARLXHBOFZGJZBXQUJNWYNWNZTBQXQKWULWQALZAYOBHMWUMXGSAYIQELYVMY");

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
    msg.setTimeStamp(0.455604916122);
    msg.setSource(46901U);
    msg.setSourceEntity(126U);
    msg.setDestination(9735U);
    msg.setDestinationEntity(72U);
    msg.command = 21U;
    msg.entities.assign("SZITNZPPXQCKTDPUUYWYGNXYGQVNFOEDOCRECRHQTMASJUYCTMTFKGKLPIEOQYEWRGLSAYOVBPDBNFVUDUKEXTQTXUCMZIHUSLTIGRAESWQINRXPICULIJZBMQYLNIBFTHWBUGAWMXNDXIDHPAZHAYPAFDDNDBHJASJF");

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
    msg.setTimeStamp(0.167887158873);
    msg.setSource(29798U);
    msg.setSourceEntity(167U);
    msg.setDestination(58641U);
    msg.setDestinationEntity(47U);
    msg.command = 158U;
    msg.entities.assign("SRVENBVXAIMBIZNHSQBAQOIVDGDTEONMLBFPRISZCHMEPEOTNFLGVTDEWSUIJPXKRWEQOXCVQOUSSBNDJRMKTRCLQJWMPGERRDGUYFFXYOSHXTKMCOJCXELKNWIZYFHDAMPASASUHHRLQWNZCZAVOPELLSPXQAWHIKQUFYVOXUCYTBGHGKYGYXJJFEJCDCM");

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
    msg.setTimeStamp(0.622718005211);
    msg.setSource(37261U);
    msg.setSourceEntity(3U);
    msg.setDestination(27883U);
    msg.setDestinationEntity(233U);
    msg.command = 134U;
    msg.entities.assign("XHVFTVKVJFBEFRVXMQTLAKUPVFCHZMXYZWMLQIWGECZRIXQBOBIINURNFCFEAUYELANPBYNXZRRCAWGWFQJZJBKSSATHWVCMYWCZQEDCXOSXVGCEZTQMTZIQMJTXXPODODKLTGJUFPAHPOUHLCKTKARMBOSBEGUWOLTHDMFUVASAQOYGNLPSYYIUNIJNDQUDWBERETYJZFENRJKXHSDRBKJUDKKNZLCLHPPNVYWDSVS");

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
    msg.setTimeStamp(0.68272612579);
    msg.setSource(56645U);
    msg.setSourceEntity(46U);
    msg.setDestination(3856U);
    msg.setDestinationEntity(185U);
    msg.mcount = 170U;
    msg.mnames.assign("XRHAKRPNDQUMWUEPQVXIXOLYXEHPXJOVQNDPWYITVDSCGXUWDBDQLSKBUBERKFBGOHBFTRDBPRTFMGIOHEJCYVYNRMPROMCYAKWGGGPVEWFCDFVATMHJWCXJCCZFJWGZZJSWNCYQLUUKMMZOAJHKQYBDLVWAPELTLCTZSSNHAGMDVILFJLNYSBDNEKOHIETFH");
    msg.ecount = 151U;
    msg.enames.assign("XJCKPWCRCGCVBKHKDBTCBELSYNJQTJLZMWJQSIZUYSDAADOKVLGROVJUSAXKXSXGH");
    msg.ccount = 129U;
    msg.cnames.assign("DVOIBPFVSKOMHECMSBWIZTPIFGYNXBHJUYYADCQIVQBWRTSQYXLSNICAOGPQKVHXXVZGQFCVUEEDAWAPXDWXCZZEFKAOJMBKDESTXAGFZTGDRHQNOFFLFTLNWHGAPTTJK");
    msg.last_error.assign("KISEBWRZOFNKEHBWDOJWQGRYCNDLMCBOOIQUUTEHZCQZSPZHZRYTQSACZVLMUNBHSSVJDGWFJLPYEGEGFJPZTWOVIKRUBUXYDMPHMWPOPIT");
    msg.last_error_time = 0.830713040308;

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
    msg.setTimeStamp(0.391728454172);
    msg.setSource(19621U);
    msg.setSourceEntity(199U);
    msg.setDestination(42600U);
    msg.setDestinationEntity(125U);
    msg.mcount = 65U;
    msg.mnames.assign("PDJLRKCNCNAQVLSJNDUEWLAMDLQPOHVOUNHYMFJSIGXPOPWLXWGSHIKAKSFFXBTEIJCCCNKJDYPIEPRPUCVTNDKQLL");
    msg.ecount = 99U;
    msg.enames.assign("ILEYUEMADJXTZQGOSSGNKGGCLUAXFOIVECTVQWNFNXKIGEDDODCETJOBXWSBMMWHKWKKHSPYUBFDHGRNMGQQZROMDBQHJLQCXMJDYJLFIRRUYANEZCBQAHPLDLAVEYBPOWYRTZMACHEPSFXLIAQSZKFZNCPYFZOVDXYMZXUYPOTVWCWNBVNYOGNCMPWMUIEKRRZBOATVVTWTKUUHAFAKVLENJ");
    msg.ccount = 62U;
    msg.cnames.assign("MSHHOARNVRNVDNQGSVOJSWWYDOOSLWLQPUXUTRBTXEWMQNJZHSFUUDBFHEJAJYOZNEPEFJ");
    msg.last_error.assign("CDZTAWOAOH");
    msg.last_error_time = 0.793008326806;

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
    msg.setTimeStamp(0.379849286225);
    msg.setSource(5607U);
    msg.setSourceEntity(158U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(167U);
    msg.mcount = 63U;
    msg.mnames.assign("CAXPXOMCORIEBOFDRUBFUSQNTDXCEPTQEMLIYZCYLBDPAYGTSVVRKHUNCARMGHASWUHLMFWWDRBVMKNGQVLWTIZGLQASSNSDKTPKXAQZFOHLGUBJXJFVIZRETNIJEVUGAIFUVTBEAEDYJIYDNZMDNCMKPNEFUGEYJODMITZZSLLRMQHUJOIFRBUKIWVDZZLXOKPZMHYXLNQBCSFPTJOVXHRWSCAVT");
    msg.ecount = 96U;
    msg.enames.assign("AZLWDMDLSU");
    msg.ccount = 96U;
    msg.cnames.assign("KXNAMRLRHCQVBEXLOWLVNMYKJJKZLSFDZHVHLHXUGPEORGZNQKEMAFIUEFGBYIMKGNFZVUCDAYJPSONNTDBZZBEPVZXRWGLSNGOJLJIPTLHCUMUWPNDVOFCWDIOTCBDTRXBHCBTGVASETDQACZKUGWQPYRBSOUWCIUZQQMQKSOHYSWPMQQIXTHDFAPILJADUEOCOJHBVXKJISMBERNKXAVU");
    msg.last_error.assign("YSPVBNHXNHGDJCLZAAQUBYJUAACXZOIMXDEAAWRBOVQQTCMOVJBSDJIVOCVEURPLHALQBNEOIWEGZEBVCHAUZBFEPXQCQDSVRQKIJOGHNOSYMSOK");
    msg.last_error_time = 0.709338664516;

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
    msg.setTimeStamp(0.667046882751);
    msg.setSource(50193U);
    msg.setSourceEntity(112U);
    msg.setDestination(20106U);
    msg.setDestinationEntity(100U);
    msg.mask = 142U;
    msg.max_depth = 0.755714102373;
    msg.min_altitude = 0.420039955583;
    msg.max_altitude = 0.521257601988;
    msg.min_speed = 0.729500982973;
    msg.max_speed = 0.281068808468;
    msg.max_vrate = 0.547961791409;
    msg.lat = 0.969173082534;
    msg.lon = 0.997518450556;
    msg.orientation = 0.927584218127;
    msg.width = 0.449837869829;
    msg.length = 0.789024193518;

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
    msg.setTimeStamp(0.537317798756);
    msg.setSource(9172U);
    msg.setSourceEntity(100U);
    msg.setDestination(10935U);
    msg.setDestinationEntity(252U);
    msg.mask = 16U;
    msg.max_depth = 0.339880464957;
    msg.min_altitude = 0.731566685523;
    msg.max_altitude = 0.491430928512;
    msg.min_speed = 0.83255766796;
    msg.max_speed = 0.501506838207;
    msg.max_vrate = 0.647055502347;
    msg.lat = 0.908311325464;
    msg.lon = 0.571491291909;
    msg.orientation = 0.268729781581;
    msg.width = 0.199344017748;
    msg.length = 0.813110221637;

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
    msg.setTimeStamp(0.0628942239898);
    msg.setSource(37301U);
    msg.setSourceEntity(98U);
    msg.setDestination(61212U);
    msg.setDestinationEntity(33U);
    msg.mask = 171U;
    msg.max_depth = 0.0822218319006;
    msg.min_altitude = 0.559731173342;
    msg.max_altitude = 0.995488288146;
    msg.min_speed = 0.407004535071;
    msg.max_speed = 0.969333315801;
    msg.max_vrate = 0.509002273945;
    msg.lat = 0.429565697683;
    msg.lon = 0.0634172623818;
    msg.orientation = 0.284204125615;
    msg.width = 0.953418531412;
    msg.length = 0.498719526864;

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
    msg.setTimeStamp(0.407300987006);
    msg.setSource(3527U);
    msg.setSourceEntity(164U);
    msg.setDestination(11759U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.242865628344);
    msg.setSource(61807U);
    msg.setSourceEntity(92U);
    msg.setDestination(47611U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.983622639403);
    msg.setSource(31005U);
    msg.setSourceEntity(208U);
    msg.setDestination(22006U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.406835548658);
    msg.setSource(21381U);
    msg.setSourceEntity(7U);
    msg.setDestination(19117U);
    msg.setDestinationEntity(137U);
    msg.duration = 48278U;

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
    msg.setTimeStamp(0.372220235032);
    msg.setSource(39534U);
    msg.setSourceEntity(102U);
    msg.setDestination(1324U);
    msg.setDestinationEntity(131U);
    msg.duration = 9310U;

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
    msg.setTimeStamp(0.198567420566);
    msg.setSource(55920U);
    msg.setSourceEntity(248U);
    msg.setDestination(32466U);
    msg.setDestinationEntity(69U);
    msg.duration = 44905U;

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
    msg.setTimeStamp(0.241406592492);
    msg.setSource(7938U);
    msg.setSourceEntity(9U);
    msg.setDestination(51065U);
    msg.setDestinationEntity(5U);
    msg.enable = 151U;
    msg.mask = 1657392952U;
    msg.scope_ref = 3871753601U;

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
    msg.setTimeStamp(0.601307159284);
    msg.setSource(57024U);
    msg.setSourceEntity(254U);
    msg.setDestination(55552U);
    msg.setDestinationEntity(6U);
    msg.enable = 245U;
    msg.mask = 850009546U;
    msg.scope_ref = 1619301643U;

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
    msg.setTimeStamp(0.869783753394);
    msg.setSource(2198U);
    msg.setSourceEntity(60U);
    msg.setDestination(28607U);
    msg.setDestinationEntity(221U);
    msg.enable = 163U;
    msg.mask = 379253433U;
    msg.scope_ref = 1149059138U;

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
    msg.setTimeStamp(0.28593873137);
    msg.setSource(40036U);
    msg.setSourceEntity(178U);
    msg.setDestination(42695U);
    msg.setDestinationEntity(240U);
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
    msg.setTimeStamp(0.426875466102);
    msg.setSource(34633U);
    msg.setSourceEntity(57U);
    msg.setDestination(41598U);
    msg.setDestinationEntity(26U);
    msg.medium = 237U;

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
    msg.setTimeStamp(0.117160919451);
    msg.setSource(15463U);
    msg.setSourceEntity(40U);
    msg.setDestination(56935U);
    msg.setDestinationEntity(52U);
    msg.medium = 110U;

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
    msg.setTimeStamp(0.0968698998251);
    msg.setSource(8545U);
    msg.setSourceEntity(229U);
    msg.setDestination(25631U);
    msg.setDestinationEntity(159U);
    msg.value = 0.0286646055599;
    msg.type = 38U;

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
    msg.setTimeStamp(0.19465245789);
    msg.setSource(52769U);
    msg.setSourceEntity(181U);
    msg.setDestination(60519U);
    msg.setDestinationEntity(238U);
    msg.value = 0.256074637363;
    msg.type = 218U;

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
    msg.setTimeStamp(0.157730714438);
    msg.setSource(1181U);
    msg.setSourceEntity(164U);
    msg.setDestination(17812U);
    msg.setDestinationEntity(164U);
    msg.value = 0.569692228654;
    msg.type = 225U;

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
    IMC::FormationState msg;
    msg.setTimeStamp(0.511672618014);
    msg.setSource(18820U);
    msg.setSourceEntity(67U);
    msg.setDestination(13651U);
    msg.setDestinationEntity(153U);
    msg.possimerr = 0.154319938904;
    msg.converg = 0.833006428446;
    msg.turbulence = 0.928454516271;
    msg.possimmon = 23U;
    msg.commmon = 0U;
    msg.convergmon = 214U;

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
    msg.setTimeStamp(0.0408790050433);
    msg.setSource(44389U);
    msg.setSourceEntity(130U);
    msg.setDestination(21372U);
    msg.setDestinationEntity(13U);
    msg.possimerr = 0.980082317916;
    msg.converg = 0.38472593746;
    msg.turbulence = 0.88985537994;
    msg.possimmon = 87U;
    msg.commmon = 107U;
    msg.convergmon = 251U;

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
    msg.setTimeStamp(0.745708164191);
    msg.setSource(14355U);
    msg.setSourceEntity(94U);
    msg.setDestination(6653U);
    msg.setDestinationEntity(123U);
    msg.possimerr = 0.963636799158;
    msg.converg = 0.025307954462;
    msg.turbulence = 0.444261518729;
    msg.possimmon = 30U;
    msg.commmon = 233U;
    msg.convergmon = 11U;

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
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.96505661363);
    msg.setSource(7003U);
    msg.setSourceEntity(90U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(190U);
    msg.autonomy = 88U;
    msg.mode.assign("OZAESPDLSVYGMOZHXCIBWFXFVJRTRNEGYAGNNEGSCBUTDNJQMXBVISO");

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
    msg.setTimeStamp(0.276277758011);
    msg.setSource(3149U);
    msg.setSourceEntity(144U);
    msg.setDestination(33990U);
    msg.setDestinationEntity(108U);
    msg.autonomy = 240U;
    msg.mode.assign("JDTYMBTAFAMJMGKUFFCVFWBTCAMWIVLTVESZOGQLFLVLNIWSMBDEHSXJHUFMBTGKXFDJSKWBDOPRBQQOFIHYWXDTORPZELTJJCDEQGIEJZOZADCNZHGFRZKQHNLQSPYAAPNMGPJPUCNWMKROUYBYSEESZXSPWTCREHKOIEMKXGVXHJNRDANCZPKBIBLUKXADAKONIUVPUDROVXCS");

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
    msg.setTimeStamp(0.840232765648);
    msg.setSource(26132U);
    msg.setSourceEntity(71U);
    msg.setDestination(14827U);
    msg.setDestinationEntity(211U);
    msg.autonomy = 174U;
    msg.mode.assign("RPKUOOSSCFBMWEQKGWSVQLVLOLRKQWBFAEBIOSJOJXNCZNHOYIOGWUDELIHUHRSUPNWMGPJCMSUILVFZPVTCQDBQFUQHJLTITLMTDQSHJDS");

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
    msg.setTimeStamp(0.932325773031);
    msg.setSource(56213U);
    msg.setSourceEntity(173U);
    msg.setDestination(32302U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.693458837055);
    msg.setSource(30522U);
    msg.setSourceEntity(145U);
    msg.setDestination(2763U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.180061679799);
    msg.setSource(50077U);
    msg.setSourceEntity(51U);
    msg.setDestination(63798U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.107463528048);
    msg.setSource(55811U);
    msg.setSourceEntity(212U);
    msg.setDestination(3782U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("ZJOKIUWQHNVIMINJTQUFPXBOCGXTZWDPIKNUMSTYDDTESLOWDADIJPBOTVFDRZVRFQZWEAVVTAOOSEPUYXBMGONAVJSNKCJYLAABUUHQFTCSEGFHZLNZECMXHKVHMIRQBDLRESKSRAGRPJWUXLRGHRPEYNGIDCLUHWPQQBYZJYMKQPRFVEZAOPJFFDXXLIMFSHWG");
    msg.description.assign("UAQHDSRWLMKGATBBVQWAPQWCGASGIQMFGVDIZFNNRKNKPAYEEZJXDZOYTHCBQ");
    msg.vnamespace.assign("NATIKBVHYIQTGPBMYNIXIKMSAWWYERCHNGJWOPGXSKXRMURFQOAUXTPSFECARKEPDBMQRDDMAFVMGNMMVTPOKUYUIEDLLZBNBQOPPRDMWJWLSLUCOBYXUMGKZYVYDGNTTHSNKERNSZXBQULCJKLEICVYKHQXUWKZAHQBLIJGVUFLPAOHFGEAYVOJDETWEAJFHGSQZXNJPDCZVBQIGBONZSOOZLDAW");
    msg.start_man_id.assign("YLUNLUHAYOOEFURXSHICTUHYVWQMEDQRDSUI");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HXPLOXZAUSUCOUFUFMKEBYVYQZCTASSTNGPVOWXXMILBAPZQTQIUGCBACFKXDSSOCJJHCJRQUTMCHFDJDYRWERLJTLMEKOGOIGFDXPQRTASPJBAGMUCDCMHFKHAVPRDYSLNLBXKZLSKWFWFJNEVONVUGKHETVTRM");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 59250U;
    tmp_tmp_msg_0_0.lat = 0.198582531772;
    tmp_tmp_msg_0_0.lon = 0.477544743732;
    tmp_tmp_msg_0_0.z = 0.416633927223;
    tmp_tmp_msg_0_0.z_units = 253U;
    tmp_tmp_msg_0_0.speed = 0.470273766374;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_tmp_msg_0_0.custom.assign("EQEGLZIZYVEJIHMJATKLYOHSHIIDCSVPXQFOHHRCABUTCUWRQMDRFYOSWCTDCZXNHBJTUUZEVTVDWHYSPPSMYSMOPWEGWFGLQKFQUFADPINQNSIXHQZGZRGGHKKUOUAUBKKLFBBPSVFMRWLYOSNEBXWMUBNWQJJGTEXBJLVTMCWALJPONODCRILHZAXGLMKAMVZNJFQBTNGFAIZDEDKFREJQNXGAPNCTUIAIVCKVRMDVRETLBRYKYX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AlignmentState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 246U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NAJCFIWYWQMVJ");
    tmp_msg_1.dest_man.assign("LMYXUGDLVCPEKDTBBYZIPGFOOESCUZFZOCCXRWHMHPJXLUJMZBUPMETYKIKVXPGPHRNRZSQAYJISDGJSTTWNYAVCBAEFTWNVTLDZQGAFVMQBBCHOIZREJOAVCDJBKNOIOFMWXNZFVVKCRMQMBDNYNXGXQ");
    tmp_msg_1.conditions.assign("DEBSJXXHHJEHYANHNDHGLSWRAQTAFTTCHIWBPUBGZVAMECBPAQOQOFPDNTWJZXLVOGCESIZVLWMXCLUMVSI");
    IMC::DeviceState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.256914120741;
    tmp_tmp_msg_1_0.y = 0.330747150726;
    tmp_tmp_msg_1_0.z = 0.879291063283;
    tmp_tmp_msg_1_0.phi = 0.580736521556;
    tmp_tmp_msg_1_0.theta = 0.190422018661;
    tmp_tmp_msg_1_0.psi = 0.59596007709;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::UamRxRange tmp_msg_2;
    tmp_msg_2.seq = 36913U;
    tmp_msg_2.sys.assign("YWSEPTOYMTQTVN");
    tmp_msg_2.value = 0.461593151871;
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
    msg.setTimeStamp(0.646813213289);
    msg.setSource(21312U);
    msg.setSourceEntity(252U);
    msg.setDestination(54067U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("FRUGXHSDQPRBKSLEHFPVVYRMRDTPCUFVWQEERMLDDWPVTZCGUHOAZHFJIGOXLLAMYEAJSEYNEWSBBCAYQBK");
    msg.description.assign("FGRYHRNREDLAYCMSWLYLWBTUGZVWJYIEOATDSJZROZGMFKKHHOOYNXCAFMUVUIIOVSQLFWHYXYEWPEI");
    msg.vnamespace.assign("DZPSGQWKDCSHEEGWJCSN");
    msg.start_man_id.assign("TUBTNCCFOXHVNGBIYZXQETSBBRATSIWNQRVCAEDSDPWFQZQTIKXOSWVEYKUUTIMKZOTEKODKBWLPSPWNUTDGPFPIYJDMLFZAJXFTRJNLCOXOZYKGPNFRJBCPKKRWQAGXCCJCJCUWSEEPLRVXPLSYAOFLPAVMIUGSQVVIKMMVOOHHUERDIJNNXQEGLMNGKREVLRWZAIUYQTWQEIJRYMQGYDFAZHHHA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("GIDIYZFPTZMMBETNFSJDYEEKNHSNGNORZSZHCZUTOYQBIEPNVEKULSMFQUMKVYKVRAFDLTYQCYPXFFZWRESLXHOFGSKYWVNWWHMHAWRXAGIQ");
    tmp_msg_0.dest_man.assign("POBBCNZUYJXHNDWKBMFRXJBPKBVSGLCGOV");
    tmp_msg_0.conditions.assign("GKRSRUBFBDEAISLBYTUOYPH");
    IMC::TrexCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 229U;
    tmp_tmp_msg_0_0.goal_id.assign("MTFRVXDUGBJYZODJGLUEBLRBMHSBRHLZBOWASYHUZ");
    tmp_tmp_msg_0_0.goal_xml.assign("WBPFOFMOYCAPMYLDVJHKXABLGBSNEATBNPSJZRZKVRFXUJUUPONLPACBXEMGWHPFYCKRUKPRHZDYYTVCVGZTLORWTAWXMDLOEIQEIQPOMVQIAVXHLODERSYUILFEHRNKNBGJQUJQCZPJRSADXARYHQNQXMCWNQCKUY");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.544568651863);
    msg.setSource(59184U);
    msg.setSourceEntity(173U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("YMOEBQIAVCQSPLGLJESSVSQRZFKNMMNKBDDTMGZUKXFHJUOZLIIUMEOTHRJIYZYRBLFXBUOIPGMEQIJFNCFZQHKXGMRWZSJNUYXHAVPPENBFQZSKXSXLRDUDYCEATFTGD");
    msg.description.assign("RILNPQPRSUCFUNONIRHGWKMWTOGMLFYGAQJZPMIFNIBIUMNVTJGTFIHCGLLHQADVEDEDUTXDKFTCFHHHXEXGLQAVEIPY");
    msg.vnamespace.assign("QJAMYGUKTETQTHKBFZWWNYTGJJNKMALDYDYQOSHQUNFGDEMCDWEXLMFOXZNUUVMLPJOPWPONYLUSZKMNMPVUYROBCBTXIBXZIEZQNWNKEOXHRHXXXEKAHJFWPLRWKHYFZYQISLDQTIJLIXTUCWCFSRZHVPVONHIQVCFNBGJUACJAWPJVDGMGFYXZVPMOFYVVPEESBMDRRSGQKQKBBLHOSECDSRSPFKTAJRCSAZTICTAGIGZBVEULI");
    msg.start_man_id.assign("PMARMHPHRXJOGQEUAHLHKOWMCJKKOEOGQQRS");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.822365877802;
    tmp_msg_0.phi = 0.0843135503122;
    tmp_msg_0.theta = 0.091663224937;
    tmp_msg_0.psi = 0.111108817158;
    tmp_msg_0.psi_magnetic = 0.533113328354;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::Distance tmp_msg_1;
    tmp_msg_1.validity = 22U;
    tmp_msg_1.value = 0.59583506371;
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
    msg.setTimeStamp(0.816304493575);
    msg.setSource(36018U);
    msg.setSourceEntity(122U);
    msg.setDestination(18671U);
    msg.setDestinationEntity(101U);
    msg.maneuver_id.assign("UGEGFVFQEASPKSPEALBVKTTLNSFPMMBTHEMFJAIINPSYBQKAOXDSWYGEPKIQSQTQZISBIJKAWOOVDXGGJLNETBNYEFVHSWFOBRLSXURVLNZYZXUTLJEAUHNZMBTMMBFICMADVXJZDYXKOYDYKYCOJWXHMILUKUMZCVWCQQWDNXQMLBFRRPCGUHZJXKTDCVHRYOCGTCRWJNNRPOTQHWJZHLORPHDEZFVPVOAGIIAXRDWSQ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 18052U;
    tmp_msg_0.lat = 0.452242323618;
    tmp_msg_0.lon = 0.436726372584;
    tmp_msg_0.z = 0.591438457998;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.speed = 0.978337201178;
    tmp_msg_0.speed_units = 61U;
    tmp_msg_0.roll = 0.968362227239;
    tmp_msg_0.pitch = 0.961103497826;
    tmp_msg_0.yaw = 0.059651644629;
    tmp_msg_0.custom.assign("KBHNARAVXEDGKSNXQIFWCZACPHCUIMGKLTVJNKYLWZLBRV");
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
    msg.setTimeStamp(0.851868432079);
    msg.setSource(22066U);
    msg.setSourceEntity(175U);
    msg.setDestination(34840U);
    msg.setDestinationEntity(107U);
    msg.maneuver_id.assign("BFUUPIEZDNSTCSEVGJZMGOREPSZXTGLIDBYABMHKAXAGOQBCOLMZKAFOMSIASBNQYEAXVGWVN");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 5066U;
    tmp_msg_0.lat = 0.845047095814;
    tmp_msg_0.lon = 0.290358451685;
    tmp_msg_0.z = 0.683068882128;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.pitch = 0.480314559881;
    tmp_msg_0.amplitude = 0.734988700198;
    tmp_msg_0.duration = 5701U;
    tmp_msg_0.speed = 0.9788901503;
    tmp_msg_0.speed_units = 237U;
    tmp_msg_0.radius = 0.618147663857;
    tmp_msg_0.direction = 191U;
    tmp_msg_0.custom.assign("QWONZDSPUWCHBBALZDJTXXSKKPDVIBEVNENBBVYTYVMALKLZYQXFKWMIQDGGPFLDIFXAPBEVQBHFCJXSSLYTTEZMFHDOONRISZYTIUIMARFQGPEAGZPFRGMLOUEUERJDGPZDRRKGQHORFOKRAUYCJIGNUUUPDCEGYUHSVRVEJWIXFLH");
    msg.data.set(tmp_msg_0);
    IMC::PathControlState tmp_msg_1;
    tmp_msg_1.path_ref = 2149805614U;
    tmp_msg_1.start_lat = 0.523180966486;
    tmp_msg_1.start_lon = 0.462246854293;
    tmp_msg_1.start_z = 0.714476240203;
    tmp_msg_1.start_z_units = 85U;
    tmp_msg_1.end_lat = 0.789859427927;
    tmp_msg_1.end_lon = 0.12762134196;
    tmp_msg_1.end_z = 0.437287346182;
    tmp_msg_1.end_z_units = 194U;
    tmp_msg_1.lradius = 0.391492203774;
    tmp_msg_1.flags = 151U;
    tmp_msg_1.x = 0.911998787238;
    tmp_msg_1.y = 0.402088358051;
    tmp_msg_1.z = 0.204818490043;
    tmp_msg_1.vx = 0.845419268362;
    tmp_msg_1.vy = 0.374957472138;
    tmp_msg_1.vz = 0.31462537072;
    tmp_msg_1.course_error = 0.444644660587;
    tmp_msg_1.eta = 4712U;
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
    msg.setTimeStamp(0.0906425744112);
    msg.setSource(54638U);
    msg.setSourceEntity(129U);
    msg.setDestination(63227U);
    msg.setDestinationEntity(89U);
    msg.maneuver_id.assign("SCTCYDNCLOGNRTPEEEEFOLYDA");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 1637U;
    tmp_msg_0.lat = 0.441183334282;
    tmp_msg_0.lon = 0.930712799853;
    tmp_msg_0.z = 0.218262252174;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.amplitude = 0.80224440068;
    tmp_msg_0.pitch = 0.279982442435;
    tmp_msg_0.speed = 0.416085957057;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.custom.assign("PQKLLJORJUWWSMPIYDZNAFAOYJEKQXKHQBVHPIPUBSXDFRDGSKPOBUAZTJLHQEFTBEFYBZPEDYHNONMHXIJWLCUTYDEJAZDKLFCURIOYREOGGXPHELGWSCKQQGBNOFDAVDKLLPMZBIVCYGWGJRIHVGAPUXUREFXVHGCWYUSFEC");
    msg.data.set(tmp_msg_0);
    IMC::SetControlSurfaceDeflection tmp_msg_1;
    tmp_msg_1.id = 19U;
    tmp_msg_1.angle = 0.806222552178;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Conductivity tmp_msg_2;
    tmp_msg_2.value = 0.36709976877;
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
    msg.setTimeStamp(0.888279126144);
    msg.setSource(19032U);
    msg.setSourceEntity(144U);
    msg.setDestination(30867U);
    msg.setDestinationEntity(11U);
    msg.source_man.assign("ZLNCEUHZPBVTJTJWHRQMGIUCSWEESIMRUZLCWOLYQYOBAVSJP");
    msg.dest_man.assign("OQSFJGMSSLGG");
    msg.conditions.assign("ATDRVZLZUXESMJYAUAOVIATLBMNPHPSLZZ");

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
    msg.setTimeStamp(0.168136608466);
    msg.setSource(49665U);
    msg.setSourceEntity(183U);
    msg.setDestination(48445U);
    msg.setDestinationEntity(44U);
    msg.source_man.assign("SISTJAHPEEWPOTVRMIVAXBPQHGKXCBYPIUDQONCQNTPVZFLW");
    msg.dest_man.assign("QNTSGCUCEHRARRSABHVIJTUHKYMOVOVWESFEJFRCXGFUBQAGLMWPQLDLXYBBKZHCPNUULXIYYGGQSTLIIDSNJWZAHXMRHOYAYGKXFUNP");
    msg.conditions.assign("HOCVGNZVKXHIVYMFLCXSRBEZYTWNNJTYVWMAIBVRIKMTNNUDS");

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
    msg.setTimeStamp(0.125040649476);
    msg.setSource(29042U);
    msg.setSourceEntity(154U);
    msg.setDestination(47397U);
    msg.setDestinationEntity(100U);
    msg.source_man.assign("KHEJFYIMLQSVUHMMVBCAOQNWDIEDJXPOCJKFEXQZZSSJIEJJAGUTUYBRCFONODXOYWOOYXHDFVTFHDKHYOXMIXSRHZPIETQUGVDONBLITKRGEKBTNNSTVEZG");
    msg.dest_man.assign("EWUFOGJFDBTJNPTHAMAQGZYLHMLKDBVTYFLUWADRSBINTKLXRTUSWOSRVWSCUSGUPTRCEIHFPOYAXLNBSUFBTZBIHBBNVUMNNGXFEWYVSJELXOMWMFYICWMOYT");
    msg.conditions.assign("KMFPUQRRJBFPKCKQRNDWUUQXXAZWLBHNDEIHIFJZYVLOTXAEVQOYJCMBHSUISZWVOQNFUXDAINTKBYUIWYIBYCREQMAPWKJRMPCWHTWQKOXHWZZLZPFPVTSFZNTXFLSVLKLCCUGYGGQCHXVFATVAYXTSBYHRAVGIHYOEBGMSSEJZOBUEJAPSMEBDZQRLZKIJGOTDNTVDTNSGANEOODYCMMMCJBGKUNPLHXRMDWRRWJXH");
    IMC::MsgList tmp_msg_0;
    IMC::PowerChannelState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XXJAFRWSRQLUJZTUFTQGYLXNPERECRABDUMBXJEYZEBGGCSHXDEGYDAXOWPPNUIVFEJKHKHYATCRKTPVZGKTDSPIIFTOEKMLAL");
    tmp_tmp_msg_0_0.state = 118U;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.754564907262);
    msg.setSource(61232U);
    msg.setSourceEntity(244U);
    msg.setDestination(45760U);
    msg.setDestinationEntity(172U);
    msg.command = 126U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XRQSWRUCXUTFOMFFTTPEJAFSIYVNBGCJUHOUJGOMAMNBCDUDWFBAWFPRZNFIXZKYILIAHLNOYRENKAROQVZQUDVCWZNAPILSYPZPNDYSCWLEWVGDTBIZTDDLKPVXJGEHVJREXTOKGXLEPUGJYBMVCGHFSRYOKWQCELNFBGYYQFARXMNDGAQKOVKBNOEZSYPBQOSMKAPJXLIUQGDVUSVZPJDBZTHXAILWCLKHTBTMS");
    tmp_msg_0.description.assign("TJLUEWYHNEKRYCVMTDIZKVZYHMVITH");
    tmp_msg_0.vnamespace.assign("ZUTMAQXNZZEUWLWNAAEOQAZDPHIGXOPJMQZVKBMDYAERDPKIZBWPCRRMNV");
    tmp_msg_0.start_man_id.assign("XVEUIYOEPRMZNOYGAEBETUPBXUNGWSQFTPDVZDOKXDMOSZXFOXRMHUJVMSLGIPAHDYWOAYDNKBDRKYAXWCCDKBSMYQZUCPSZCLSVINROKVWKJBIRTBIGVPGQBHGGKKFDJWLJLPRFQGLGYWHUPXJXISFQHEAIMJIJATEOYUWWHLARNDRSEEZTVTADQZQTLCWQBZHCJQLPHUBNQTMXFSHFPNSFEIZNLLZRYAOREF");
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
    msg.setTimeStamp(0.687123836706);
    msg.setSource(24601U);
    msg.setSourceEntity(158U);
    msg.setDestination(10970U);
    msg.setDestinationEntity(101U);
    msg.command = 66U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MYSSBEPALDHUZWPXDJRVGZQNEYRPWUBIXOEKDCSLBNZUPDMFAKUJTQDIDZ");
    tmp_msg_0.description.assign("SKVUGPKSIYJVHSELFHWRIXEDNMUNLXVVSHMILTALKDYBYVNZZNANEUXTZYPAVFQPRGHQJWBGYODCAWGICDWCDQSBOTTYCYVGF");
    tmp_msg_0.vnamespace.assign("DAQPPZIZMJJDOLDODRCEWJQDABJMGYKHUNNPXWKZUSBKPKDRWFWBQKYZCGBIYHSLQDWBUKSTWCQWIGCHUGMIHEJLMNFJIQXCTAULGAGGVQBLFJHOUEVTDLEYGNUFANCLZRYHYFQESMAEXPYSCZPWAYRAVVFTHEMCPUKUCJRFVOASHXITMTVRLVPZRVVJPTKEJBXOGWNYSOKIEZPXLZBXDQRANOEMOIFRNFFTKSTXIBBH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HJXSANECYZBJBQRIRIIKBCXNFNOYPQXPIWNXFMPOOMLHRMDPTUIHWJVKBRQLJGNGPTNBAZKDVVPWAIUSDSREYOOWSGVQIXDFFZBVCQLPXMNTFUZWXMBLVUFFUJOPKADWAHQDELTHDCCJFPYLVRWADJNYNGJSCEFQHUIZZWLO");
    tmp_tmp_msg_0_0.value.assign("CWRDZKBAGLGBFUMIGPJDOGNOITOKJIUSRVXRWMXPZNXWILVTQSOSVMDHFLCKHFVYICBJYRMKNKCQDUSWDZAIRNOLHOXSQAEQIWGZLSAEBYZZYAAVANHPCXYDJCCANPHVQQDPTMORJUVUXLNSHTBMYVCRTTHLIWEKBXCNDUTDUPGQJJAFHFEFZYECXLMEJWYSNVQGOBMPFKRHBNVGYOTUREXSPWFOBKSMEIEWXWZGKUGFFTLPAHTJZYU");
    tmp_tmp_msg_0_0.type = 228U;
    tmp_tmp_msg_0_0.access = 22U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XKOAGGNNPZGUVRDIPXFSRWDUQPNWOOPBBCGKKACHRKHQIKDVUTEYYEIQBAJFCCTYANPMRXMVMZMLPZZGMAQPRTIZQIWGRWIYBHYYXSNOVEFVMZXHJWHOOUJKUDKBX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YBMFSFBNQVRJDEUVQAYWLAJLECIBRZCIXXOEGHFSOQYRUNRVBNTOOZYYGKTFUEWXPSSJKLFGNVIPSWZPNQYBWRBFKMOJDCNDJSDDOKGULPJFGAXIRAQP");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 15744U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 92U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.532463717768;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.963163874422;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.215111278853;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.k = 0.0844213081197;
    tmp_tmp_tmp_msg_0_1_1.m = 0.844861913826;
    tmp_tmp_tmp_msg_0_1_1.n = 0.489085422145;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.0292345665962;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.278452254023;
    tmp_tmp_tmp_msg_0_1_2.z = 0.22031066611;
    tmp_tmp_tmp_msg_0_1_2.z_units = 26U;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.990525185653;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 101U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.x = 0.437103537391;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.y = 0.677089355579;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.z = 0.177735362685;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.t = 0.387693979877;
    tmp_tmp_tmp_msg_0_1_2.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_1_2_1;
    tmp_tmp_tmp_tmp_msg_0_1_2_1.vid = 32606U;
    tmp_tmp_tmp_tmp_msg_0_1_2_1.off_x = 0.18870103692;
    tmp_tmp_tmp_tmp_msg_0_1_2_1.off_y = 0.452858806649;
    tmp_tmp_tmp_tmp_msg_0_1_2_1.off_z = 0.254684235183;
    tmp_tmp_tmp_msg_0_1_2.participants.push_back(tmp_tmp_tmp_tmp_msg_0_1_2_1);
    tmp_tmp_tmp_msg_0_1_2.start_time = 0.468124492257;
    tmp_tmp_tmp_msg_0_1_2.custom.assign("WSQOAVSULDBDNWYXERSYCKNBHUUYIUJZVAAHQDZPUEHTMYYRIICQGNAKMCR");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("EAXQQLMEPLRBHSMOPOLIJZZQCFGECCOGESWEKRKGUYWNTXOZBMRENQTYMVCURSPDMRLWBITIHLYTQCUUDBANOTQQXMYGYLWLIVUAKHAGQRBDAIVHFJJHAJPPVTMRUPSWDGUNVKVPSHNHXDLFNEUUTGYVXDISWZFDMTXBRGOPZHNEWZJQZJKWWAFFFSGPOJCDAKNPTKFIRTHHOIDFSJIRKUBZVKYWBMOKN");
    tmp_tmp_msg_0_2.dest_man.assign("FVEQYTJTMCOANITXIZLFPVVRUGNQRPRCGDZEEZABKWMPIHNAQTMFOANJBXXKWQMPXJDOSPMVTFUDNBSRGYBIURILYRCDFJWXAGURCGCMELWAHFKJNHBZPMHQYFXQOFUFLDOCEHIDKEJGBTHEOZIKVCUSAXKLIJYGSZWZTQVJWYULIAIOKUOWAVHWZHEKNRLJRCKSDCSTKPDGNEQQLESSBYJQOPWDCHVGXLYAYHSNBLDBPXZZTNPRMSUB");
    tmp_tmp_msg_0_2.conditions.assign("MVISXBVLTGDGQHBKHNHRIHPYASVNOAKNUCRKMONYOSQCQWUDSORWRQPGWXEUPIGRRYRPLPEJCACTNVCLBDVOYTFMUBDUZFZAARQITXRWUJIENBWZGMGEYCJLZZDQMPJJOKHOYMADLWPKTMJGBZPGOZNLGWKDPZVVMAXWXEXFBYJXACNRSCBCSWFDQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SmsTx tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.seq = 2511241246U;
    tmp_tmp_msg_0_3.destination.assign("BBWRESNYVBFPHOKEG");
    tmp_tmp_msg_0_3.timeout = 36819U;
    const char tmp_tmp_tmp_msg_0_3_0[] = {-98, -1, -15, 38, 79, 106, 91, 59, -67, -93, 124, -81, -108, -111, 77, 119, 84, -81, -8, 8, 50, 9, 17, -113, -40, 12, -71, 122, 81, 117, 45, 125, -45, -35, 21, -35, -60, -69, -85, 65, -65, -99, 17, -47, -41, -17, 125, 61, -55, -100, -13, -35, 93, 82, 27, 46, -63, 126, 99, -33, 93, -44, -26, -11, -11, 121, -106, 63, 98, -91, 122, 119, -81, 100, -66, -2, 56, 41, -101, -95, 28, -22, 59, -103, -28, 80, 59, -94, -81, -58, -75, 116, 20, 3, -28, -7, 79, 125, -126, 102, -85, -10, 109, -72, -110, -10, 86, 71, -121, 93, -96, 101, 85, 62, 110, 99, -2, -44, 78, -109, 56, -107, 56, -6, -57, 107, -83, 107, 78, -19, 86, 30, -101, -88, 38, 63, 31, 61, 68, 114, -107, 12};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
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
    msg.setTimeStamp(0.463178431333);
    msg.setSource(22447U);
    msg.setSourceEntity(228U);
    msg.setDestination(5430U);
    msg.setDestinationEntity(1U);
    msg.command = 234U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DJSZPJDADAKRLRGHGAAWFOORXXTXVUWBHORSFCPSVSQYUOFEZWIWPFGDNQPMJRLNCIPTXGJXMNAVIXBBUBNOOIRFSWWBKUOCDNXHZWSKYYEUWYQPYVTEVTPHLZYRKTANHKUEZBHZMPOVBYG");
    tmp_msg_0.description.assign("RPZMEYWMJAJFCKHTLCAVFYDFCA");
    tmp_msg_0.vnamespace.assign("STBGDAZYDCYKLJE");
    tmp_msg_0.start_man_id.assign("KCSSENAWXWZAYIKTHVKBKOICHNJZSVUZLWNYGXHLVNALVMEXUFTPNBOVYTHIQSMLZOLURDERONGKPUJDBTWYKHCFMASKCOQEWZRJJZBGTSZEQXYVZPWQNIIEPSRGVGXQLKJYSNNDAOIJQACCGMQPHQIBMGURFCLFDDIYRFWJVRHTFXTPUBACCHLBALUDOUX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RAMVCQCWTAKPHFDVGGYIGEWRVPFNKGXYTBGZIIFLTZAMNQHFEYBNNEQXARHRCBITSDOJKVRZHOPBKBGOONYDGCJYOKJAMTGBZKSSZPOEXHCIYJSECLUUCIZUDVTCWQBLLXXYFPHUMBULEEKXMVWSYFYTWDZLDHXINHLXMQFAVQWUEDHDQKTUBDXARSOPDULHJNMTONOJJAWESQPAIWACWJCSRMVWFUSBORX");
    tmp_tmp_msg_0_0.dest_man.assign("OHSTLKFBWBXWREQYIOJFZYFDYKAORIKJIDVTFPMZVNIWMICXXHJRGVREPVCPRDLHBTEO");
    tmp_tmp_msg_0_0.conditions.assign("FVMFCNHSSMICBOYMSBZKWUEQFORKNPVWFYWODDLUBSMEJXECYKRPJYLFLUGMZPXBSIATLTJTBHDZITRSOTWYBJEPTXVAMVEYINKZXVIQIQNUPCWLQZXJIHSGZGHRANAALONWYIGKQQDYNHLGQZMSXGCBZKMTCLECJJLFOFUMGQQPEJZFSWMKPXAOGEWDUTNPETCIKYHVKULUGRNWHROFEZHCHXBVQVPFDOJDYAVDWKXAIRR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.939815128489);
    msg.setSource(26890U);
    msg.setSourceEntity(229U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(190U);
    msg.state = 223U;
    msg.plan_id.assign("BBIWNOVNRPZJQRUPVBKBERQUWLNVMCPHGOOEETQDLPMKHFETV");
    msg.comm_level = 225U;

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
    msg.setTimeStamp(0.442275716365);
    msg.setSource(15900U);
    msg.setSourceEntity(152U);
    msg.setDestination(28331U);
    msg.setDestinationEntity(24U);
    msg.state = 112U;
    msg.plan_id.assign("ANPMOLRVDPROYGJVKZHSZJOXIHDAPFUCGELVGBUOMTWKLFQCTAPLVRTVNIXIKVXLMUAKXCUZOXFIXYUJWOOKJIMLCYDMAMFBSVAQHNJRCGRAIZUEUEKXQMZYNTZLSZGGQW");
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
    msg.setTimeStamp(0.546529368036);
    msg.setSource(33716U);
    msg.setSourceEntity(70U);
    msg.setDestination(33537U);
    msg.setDestinationEntity(96U);
    msg.state = 151U;
    msg.plan_id.assign("GKOYZPGYXPTECQAOHJUMYCDJZWNEXSHDZSLACPOIDHDOMAWTRNQBLLEXAIBGBMMSWYYTUTOSXWFZVWDZLIDNCSYXBVCDZUQEJCMRTVFALGGOMVJPNFCGZYJWNSDZDGBUUPAQMTNUWVRALXKKTNAHKMERRFHNFWLIJHIFWKKNKQXCX");
    msg.comm_level = 133U;

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
    msg.setTimeStamp(0.180589044189);
    msg.setSource(45176U);
    msg.setSourceEntity(177U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(10U);
    msg.type = 146U;
    msg.op = 171U;
    msg.request_id = 58759U;
    msg.plan_id.assign("VHGMGODJOPVLKQTYJLTJTHEJFIXPKWGWNMYEFZDCQAYRBBOOBECVZHLFYTEZVLIJHQTQLWGFBDVVACLFZNUFZZAWKONOYMKTJARWAJENWQYKUOMQXTDCRRUYXBWZYMLFFLMUWHGEIVFNRDPB");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 50065U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QXXXCSPOQJODNP");

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
    msg.setTimeStamp(0.0593474655994);
    msg.setSource(39984U);
    msg.setSourceEntity(143U);
    msg.setDestination(15229U);
    msg.setDestinationEntity(155U);
    msg.type = 188U;
    msg.op = 216U;
    msg.request_id = 61764U;
    msg.plan_id.assign("PDUTKLIWPZORJZFDAQJTBOWFBIYMGRSRVOXJUDCZPTRKKVJHGEWLCKZXNIYEAQYOKVGOWVLFVBOAIMVZOYPNELIDQHNEYBBRCWSYXHNTDULXWZATTODLCUDKTCDCEBQCNGGNFFHXMSMFNQHVADQVJINPANIARMWJPYYBOUETIGPCHGEMPQXPY");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("XAIISLBSPEUWDISQLSQHRAPVAYTGAGYZPCHGXJBYHGCLDFPXDNREHEDLHPIOECYNOBJDVJLTLXVKUVZTJNQOBRETWMGRYZANMOGWJYXKJBBKMZKTEMJCFDEGUCFADZMCSXCWQNMISPWJMXTLFCIFNYKO");
    tmp_msg_0.value = 254U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZCZRTQPQVGROSCXMUYRCTNFF");

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
    msg.setTimeStamp(0.325231567197);
    msg.setSource(58432U);
    msg.setSourceEntity(210U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(8U);
    msg.type = 45U;
    msg.op = 31U;
    msg.request_id = 50955U;
    msg.plan_id.assign("ULBTLOOSASFGNEQFVKBBDWMKONVZINWPNZHOBKYCMIGQTZRQ");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 719U;
    tmp_msg_0.sys_dst.assign("JBWPDEFSLUPIUQHUAMZDKHDARBOLSUELHJRVXSTOKILLFQTCTBCJEAMAEYMUPUCCXHIYJPYYVOZQDEBEBUZEVVXWTTACMPEKUNSLPHXXWHXXKDNZJCYHZRMEFTZJZRAUCWSIKMQGKVIGKRRMYGDPWOUVNRHFWZRSGSHOQPBBZOSW");
    tmp_msg_0.flags = 146U;
    const char tmp_tmp_msg_0_0[] = {68, 52, 7, 58, 84, 110, -87, 121, -67, 121, -5, -40, 90, 4, -70, 119, 125, 71, 85, -126, 64, -50, -74, -82, 32, 23, -46, -77, 9, 49, 117, -11, 10, -61, 115, 48, 92, 10, 9, 60, -25, -32};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TXNIDJSGTBOMEYDUAPYQKXFJKEMCFIBORUYRLEBJUGBGZVPETODRRPEQEWSNHPJEMLQQKSOVIZQOZHGMVFTBDXUPHZVCAEHK");

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
    msg.setTimeStamp(0.646801137966);
    msg.setSource(16964U);
    msg.setSourceEntity(6U);
    msg.setDestination(38888U);
    msg.setDestinationEntity(34U);
    msg.plan_count = 61190U;
    msg.plan_size = 1280048058U;
    msg.change_time = 0.660988030757;
    msg.change_sid = 22802U;
    msg.change_sname.assign("IAFJBAWMCELAXHOXNXIGJTPKRSNHGFYRMHHZYTSWQANTKXCKNXK");
    const char tmp_msg_0[] = {76, 14, -97, 27, 77, 70, -108, -16, -55, -89, 123, -104, 59, 94, -76, 83, 24, -23, 28, 15, 19, -67, -53, -62, 118, 93, 112, 107, 9, 40, 39, -115, 31, 103, -73, 64, 101, -60, -44, 50, -18, -120, 118, 97, -90, 107, 121};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MTCDEUDFOATOUVWSYHCNGBEIXGOHCPEFFXJLQDWDYXBTPHUXSMAPRULXQEZVYPYCGTOIY");
    tmp_msg_1.plan_size = 12046U;
    tmp_msg_1.change_time = 0.893616186785;
    tmp_msg_1.change_sid = 23000U;
    tmp_msg_1.change_sname.assign("WZXZHDUCRNAFRSVFWLRARADVFSXSKKQAQFHSPTRJEYNCYXXGLGMJVINOBIQBXPUDHZGSFZOUYIBTTBMLOWAHYJXUIEPACWJTFMBXSXYVZVTEYQNBGRASYAOORWYTKSPBEKURQDMVYMMZJKNCUHLNQUNMSECELBKLMZWYLBWPPGNKFIWCUIBFQVNZTKWHKPHPURSHEIV");
    const char tmp_tmp_msg_1_0[] = {102, 117, 20, 19, 98, -44, -21, 118, -82, -67, 124, 40, 28, -91, 66, -60, 38, -25, -46, -31, 92, -32, -5, -98, 52, -25, -7, -3, 27, 22, 92, -70, 92, 73, -85, -19, 18, -99, -32, 5, -39, -50, -112, 29, -118, -37, -24, -71, -73, 93, -21, 18, 103, -9, -47, 17, 59, -46, -102, -65, 15, 49, 103, 91, 90, -16, -57, -33, -92, 23, 122, -65, 78, -29, 27, 65, -39, -43, -52, -3};
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
    msg.setTimeStamp(0.959262133519);
    msg.setSource(3362U);
    msg.setSourceEntity(235U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(53U);
    msg.plan_count = 9960U;
    msg.plan_size = 870066749U;
    msg.change_time = 0.749855666271;
    msg.change_sid = 44408U;
    msg.change_sname.assign("DEBQDAJWGHZUGXKNPLYXWOTZPOGSVLKPYUWTHXHPSQYOQGNUXGFIV");
    const char tmp_msg_0[] = {-85, -106, -111, 22, 51, 78, 105, -48, -41, -22, -45, 115, 102, -21, -110, -12, 101, -96, 15, -105, 93, -93, 58, -20, -104, 73, 58, 60, 69, -27, 101, 101, 47, 98, -120, 61, 118, -119, -13, -104, -46, 58, 115, -90, 115, -98, 59, 84, 125, -30, 106, -43, -76, -88, 89, -38, -90};
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
    msg.setTimeStamp(0.67911576291);
    msg.setSource(40870U);
    msg.setSourceEntity(230U);
    msg.setDestination(41908U);
    msg.setDestinationEntity(64U);
    msg.plan_count = 63214U;
    msg.plan_size = 1261697364U;
    msg.change_time = 0.458543038987;
    msg.change_sid = 29050U;
    msg.change_sname.assign("MGCHQLVBNWZSHHDIAJQAJVYPSOHLYPDKDAWJUSNPGIKZXMMNEMIUFFCRXCLPSKZPMTDUFFPJRBXIXCLMA");
    const char tmp_msg_0[] = {-91, -81, 58, -76, -86, 113, 40, -44, 100, 45, 112, 40, -105, 58, 1, -119, -32, 64, -115, -83, 13, -73, -81, -13, 30, -60, 71, -111, 88, -1, 62, 82, 101, 87, -44, -102, 70, 57, 41, 74, -87, -55, 85, -115, 25, -88, 12, -50, 116, -68, 111, -36, 25, -121, -59, 7, -127, -113, -8, -16, -84, 92, 1, -13, -74, -106, -78, 83, -10, -54, 36, 45, 58, -59, 12, -7, 111, 109, -107, -68, 99, 58, -101, -81, -37, 104, 44, -99, -92, 57, -88, 36, 41, 6, -125, 10, 20, -43, -96, -61, -8, 61, -30, 67, -96, 113, 124, 33, 66, -127, 15, 97, 18, -117, -68, 51, 64, 15, 86, 14, 20, 31, -78, -40, 41, -53, 16, -127, -85, -101, 72, 49, -41, -48, 41, 32, -8, -17, -64, 73, 41, 49, -37, -10, 3, 95, 102, -59, -15, 113, -12, -18, -54, -1, 120, 121, -78, 84, -101, 12, 41, 74, -122, -87, -63, -29, 0, -37, 72, -48, -57, -96, 9, -45, 96, 41, 67, -4, -31, 41, -102, -116, -91, -50, -109, -47, -23, 54, 111, -35, -92, -100, 74, -45, 114, 59, -105, 117, 86, 33, 104, 27, -23, 19, 23, 47, 79, 10, 98, -14, -100, 118, 66, -113, 109, -35, -125, 107, -27, -116, 99, 68, 28, -3, -57, 59, -109};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZRJHFHGRRSKRLDIYHOPHKOWXLURZVZVHGRSDHOCTZAJSLNNZQYACNCGITGKOXEFEZPUWWMLNQVWXSTXVOYOZNTTCVESMXVBYTQOCKMHUBTIWHXWMCQVTMQPZTVYFSMPDASCQDSABURLYXAJDCJBIBXISFEBYAFXILILDUMJHYYIPLNLKUCXDGKPPWODAOLUVGPFGIMBAPDQUQBOKSFGBEWZCBRHNDEZEMMUJVNUYKJKGAJPTGIJRKENNE");
    tmp_msg_1.plan_size = 28852U;
    tmp_msg_1.change_time = 0.72278891863;
    tmp_msg_1.change_sid = 52388U;
    tmp_msg_1.change_sname.assign("HMSOVDEFYXOAKJUNJDOYGJVGPYLOEFQTRWMJRKSORWBFIULPMFDETZZWUOEWUKYMSHFVGZQMIXSMETTZFBDQYHXGUQWWOUICBDUNIYHVZBDQCTIQWHKIXCRAAXALCIPGLKNRYHBQMWPXHVHVYAFOQCPMALAYBUPUENEMYAKKINCJJCGXIVLZTSBNTFCVLBLKWJQORPTPVPZCKBNAQIZJNSNSXRJCSTAEDVGSLGD");
    const char tmp_tmp_msg_1_0[] = {-104, 75, -36, 66, -124, -19, -22, -94, -109, -70, 88, -85, -64, 2, 88, 33, 66, -123, -103, 35, 35, -75, -47, -124, -22, -6, -121, 83, -116, 73, 102, -62, 122, 117, 69, -18, -92, -96, -6, -10, 19, -26, 80, 49, -87, 70, 21, 29, 53, -4, -85, -122, 81, -85, -51, 33, 102, 104, 12, 70, 96, 105, 26, 79, -35, 89, 14, -27, 83, 32, 99, -44, -55, 123, -50, 104, -92, 74, 48, -65, 4, -25, 55, 65, -74, -121, 22, -121, -115, 1, 77, 69, 82, -94, 44, -1, -71, 42, 46, 24, -42, -117, -79, -101, -24, 105, 51, -107, -125, -8, -85, 46, 94, -89, 3, -39, -112, 5, -7, -113, -14, -62, 36, 108, -37, 77, 81, -88, -20, -72, 34, -73, -23, 42, -95, -7, -68, 113, -53, 103, -126, -34, -6, -74, 8, 107, 123, 22, -109, 80, 56, 72, -43, -113, -14, 89, 49, 74, -126, 76, 60, 116, 114, -49, 48, -21, 120, -80, 96, 125, 86, -21, 91, -78, -113, -109, -90, -55, 110, 56, -113, -33, 61, -13, -100, 120, 11, -120, -69, -105, 55, 114, -87, 3, -3, 59, -73, 108, -92, 32, -31, 112, -1, 110, 105, 117, 111, -83};
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
    msg.setTimeStamp(0.027127572379);
    msg.setSource(41916U);
    msg.setSourceEntity(159U);
    msg.setDestination(26930U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("UNMINDSQYPTLQVHQOBAROXHUFYEGLUAOSNIXVIQZEIECPRIOGYZKJWTRVWYHYTNSKOFJXNKXWWUSGEKYAFHYRDETCMMVQKJWTXAMVNRPOFKCCOVBVIGEZBPCJWZDGALUHI");
    msg.plan_size = 13294U;
    msg.change_time = 0.136088384919;
    msg.change_sid = 12411U;
    msg.change_sname.assign("JWJMRIQOOYJUFKRPFCKCJVGZGUBPDRXOSJKSTSNISTUCYVJJUEJXBIZDFQECTGASTDARVHUDXNPACFZADVLNLAOHKQRPVHNYQMSITWMBBFQQLCTRRIVPQNLFXWBECKUEPGAWOTRHCPQLVOOFHXALDLSINYPHVWYHOWZKWSEUKMTJTCXGFIGANFMUYRWMVZBKKZCXSGMB");
    const char tmp_msg_0[] = {-23, 71, 2, -108, 83, -34, -126, 61, 66, -7, -26, -34, -75, -32, -31, 107, -31, -6, -4, -65, -67, -126, -20, -116, -73, -95, 101, -53, -102, -124, 30, -113, 108, 115, 119, 55, 75, 85, -73, -62, 56, -104, 41, -64, -120, 59, -75, -2, 45, -102, -114, -39, 82, 70, 33, -69, 41, -33, -42, -125, -54, 117, 6, -86, 9, -105, 97, -27, 73, 74, -50, 89, -100, 14, 80, 4, -32, 109, -17, -108, -41, -47, 18, 108, -32, -88, 11, 84, 106, -92, -71, 78, 88, -38, -96, -6, 124, -128, 64, 57, -93, 62, -107, 122, 4, -11, -4, 5, 90, 18, 37, 91, -27, 119, -115, 59, -20, -61, -91, 37, -13, 54, 31, -38, 102, -23, -16, -18, -21, -58, -25, 88, 78, 19, -11, -4, 51, -36, 11, -62, 32, -2, -58, 19, 121, 28, 67, 61, -3, 57, -79, 104, -52, 48, -26, -84, -54, -8, -109, 79, 17, 90, -103, 50, -102, 63, 80, -42, -59, 117, -104, 89, -100, 39, 105, -34, -16, -60, -101, -83, -35, -24, -100, -33, -48, 19, -86, 118, -1, 119, 86, -105, 108, 122, -6, -54, 9, 31, 51, -57, 36, 103, 79, -3, -114};
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
    msg.setTimeStamp(0.981728763787);
    msg.setSource(5208U);
    msg.setSourceEntity(154U);
    msg.setDestination(14532U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("YOAREKOTFHURNRSQLNRLFYMLBQWITYYDKRWNUUZNQIUADYNHVDYJIXSIJHMMHLSTACKTVUMOYAIBCZMVRCPGWBFZKMXOUXTCZVPGJTZPDLGMYTIJARCPGELRPVBLJYWXEEVURMAPBFFZXFJIQTVXQLWPNSFPOGOISSEXDWBJXLKASNEUDWMHWCKABRDAZCWQUKUHDFQCNHO");
    msg.plan_size = 2145U;
    msg.change_time = 0.110123179679;
    msg.change_sid = 34247U;
    msg.change_sname.assign("WVTBXXZLBEMBELQIWONMCIJIZOIHVQCXMKASHORLWUYAGEAQYVJAREYTXESMGSURUYZQESSBUURFLRPLKDDCJGUXDGIVTMSIFWKPCHXIJFNAQLQVULGTHJONFRNDRJXXUPVBCVXZZWIHVGQEJOCZANFXWWWOFUVEJDPFMZNHDCPKKPTBOMRKLKQKBSOICYSNGTYDBHEZTQSANGKWZYHBQNSKGMDTBY");
    const char tmp_msg_0[] = {25, -63, 85, -63, -44, -73, 125, -72, -65, 21, 6, -22, -118, -106, -12, 37, -7, 119, -105, -29, -82, 33, 110, -112, 114, -69, -113, 94, 2, 2, -14, -14, 11, -85, -15, 17, 124, -26, -64, 11, -69, 77, -121, 10, 61, 111, -1, 99, -112, 21, 79, 103, 75, -66, -9, 121, -118, 78, 82, 106, -32, 121, -3, 88, -37, -48, 68, -2, -88, -21, 92, 108, 45, 118, -120, 22, 92, -15, -29, -40, 101, -96};
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
    msg.setTimeStamp(0.798976365557);
    msg.setSource(27192U);
    msg.setSourceEntity(208U);
    msg.setDestination(6891U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("HWBUOPCCCTZTEOYKHHSQKFTRSCJDLEDELLURVJXCOEIGWJGEEXWEDGLUODJUKHLPDFKHZMCHMTXPRFSYZYFGNOLDCXOSVLBBSIXVUTGAEZITRC");
    msg.plan_size = 8903U;
    msg.change_time = 0.891571047912;
    msg.change_sid = 52952U;
    msg.change_sname.assign("XIDEBCGFWRPETQAVOJAEOBPVJREGBNREXUBYPMMACGPXYKXHFMJJGVAHJHOQOUPUMDROASBEKHTDWYXDKSHUSDBBRHSJKGRGVO");
    const char tmp_msg_0[] = {-24, 71, -115, -87, 70, 39, 38, -92, 18, 8, 104, -31, -87, -103, -89, 9, 108, -67, -4, -123, -98};
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
    msg.setTimeStamp(0.341426633413);
    msg.setSource(56371U);
    msg.setSourceEntity(156U);
    msg.setDestination(7369U);
    msg.setDestinationEntity(196U);
    msg.type = 172U;
    msg.op = 173U;
    msg.request_id = 11622U;
    msg.plan_id.assign("SBWRMKDJUADZFRDVORRKBNUNYALULMMVECCTWYANPMGXHUESGQLFJFGDQWQZLGWSZYJXLYHEIQCNIMIGFRVIQPKCTOHPSJVVAXDKJFQNTPEBCBYWBUPOADUZGWTXVRYFXSVACWTOAHVTORZBTYFTLIZOLIDZUXMYDSQHBAUEIJOYJMOLFTZEKKDGGOKEXKHNEBJQOQPNYIPHLZSJP");
    msg.flags = 10829U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.200988451394;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GKMUAKEEDLYVGWZNUROTELZCQCGIVVOBJFFEHLUKQDHUDVMGLIGABRBSVUOAZHFEKPZNNKDZJFQQAMMJWJNSOPONEDAWUUMFIJWTTNHKYEUEGBYIARZFXWSHBPJYHLZDCLQNFLQWUSWK");

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
    msg.setTimeStamp(0.945101357427);
    msg.setSource(3510U);
    msg.setSourceEntity(155U);
    msg.setDestination(19677U);
    msg.setDestinationEntity(196U);
    msg.type = 127U;
    msg.op = 221U;
    msg.request_id = 19161U;
    msg.plan_id.assign("EAQLELJUAIZLOZLLUXDRMYFMDZTRXFQZQGVAMCHIOQWIKTIEVLEFZIBFPROTFSCWQNYCHZYPLFVUUHQGGFOUXHQGHCQAXVGWQFSSHXSUKH");
    msg.flags = 3935U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BWLHVBPDHCBPAFTGOZMFWGYIAFPUTRVIZGYAKPXDJWNIHTCBCGTLUUGRXOQPVRLVXLEXZRJQLHPUYHOZCAYBXNTYN");
    tmp_msg_0.description.assign("SZVFSTHNKEWIDBKIGLRBZDVAJQCOTCMRIMTJCHFIRNPWOBKQVZNOSKIDPPNBNZMAMMWFJPQGRENUZJDWKXQAYSRBAPEWFWUSMDVRJIPFNB");
    tmp_msg_0.vnamespace.assign("UZCJGAASOJT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QRPISEGONDMOVDITALAPXYOKOIJKTYVJBVLTFAOQXOQCZLEAVRJZISKRTXPYRZWUJWBBITDUJPKUGFSJVDOMGGGEYHCAXBVJMNLIUZKNPLTAWKGDXZWYRHDDICE");
    tmp_tmp_msg_0_0.value.assign("XKMBPMTFEAJARGBDXFBMNHWORNYMKBHJYLSEGXYEWVVVVKLWIAVGNCGEPWOHNQZCOCKWXLGDAYTFXBTUKBSWINPIMPSZSJKXTUOQSAPLNRFVDNAPD");
    tmp_tmp_msg_0_0.type = 235U;
    tmp_tmp_msg_0_0.access = 54U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MVFTTGLYQFSYAIIDXGNHGFZDVWOKMANWQCKVVOYZRAHVNWDTVYQRNORSNPBTKWMRKIXUXUSXLSEWFABPJQUMNRNOHJAHYEAQSKPBUEUPTFOFYCJNRKWZGVDIWHJBMUJZQZVQSHHANPOILKXEICJCUDTXUOLGTGDSFCXGCGLXKYMQPBDRFOZLXPONRYSDZHAPZSYETTQLWUUCPWKILHBELIXOAIDJSEVVEGBCJMWMFBKZA");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QEAIFYFPDXIRRRVTQDPEZWONULGVBPNLJAIHIMEGJBIYYNROJALKKTAXLCZSUVYEFWNWHELRMEEOTXLAUXBRQDXXPMCZTEUGAWCQFBXGSSBOQZYPHCIVNUKVQYPQFRFMSFHUWZATWJHBXLRNOIPVJZCWRHSSAJFKPNONMHOBKROGSMHFTVYTCCLKDBDUSONCADGSWKAZYDIKKMMXQGUCGTEMPIDVJJVMUPVHZLEYQNBZGC");
    tmp_tmp_msg_0_1.dest_man.assign("NMZTWGUHRIBHAZVKJJQLGPMWZSAJUUUTMWCERWVSTFK");
    tmp_tmp_msg_0_1.conditions.assign("SXTKVZYGXMOQEBOGKJXLJPYRHNIYGRRJGPKBCCURBAPDFGMKKWDCZTNFJZHRZNMSQYONLQHJBGKHZGVAMTLNAZNLVFPTSUHTCBVNYPOHJKDMUEPUYZMXUIEPEQBQLSRBJTAXTDKGVQFIEIBOFVOMYQDRUSWCFIRSWXWIZEXJSSWNO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CreateSession tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 2798504793U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NMGACDUWNXQPTLVCXVYGUULQCRWTFTJYETPPAWHBAMBILSEIEMYVHVNSKDEYAUVYRNHCCWZOZXQRJTXHYRKSYBKJKXNQ");

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
    msg.setTimeStamp(0.750353183132);
    msg.setSource(3731U);
    msg.setSourceEntity(92U);
    msg.setDestination(30141U);
    msg.setDestinationEntity(69U);
    msg.type = 227U;
    msg.op = 150U;
    msg.request_id = 15332U;
    msg.plan_id.assign("NUWNWNJCCGERUCBZWPSZGIMKFBTPKYHUCNELVRZUSUYACZFTSDXVRFTEYAQXFESHGLRKPTLQFGAVGFGWWIUIIJRAIUHHFEVAJJMKWRUZYBTSWIOISVXBKRDXYANVQOSDNEQHVYQDHOXWRPVMMBUCMYOLTJBJNPZSXPTCDENOQAPBBJISDTYIWMRNARKMNXIAGHMPJADDLEKPHKLCHKHOGLDGBPBXZ");
    msg.flags = 65345U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 133U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.839430040434;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.300600164077;
    tmp_tmp_msg_0_1.z_units = 43U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.127498238655;
    tmp_msg_0.lon = 0.277858732693;
    tmp_msg_0.radius = 0.0163428821082;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FNDQTSTCHNIAHSMMWZQXMOLRWTKGACOO");

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
    msg.setTimeStamp(0.861775537787);
    msg.setSource(55313U);
    msg.setSourceEntity(53U);
    msg.setDestination(60854U);
    msg.setDestinationEntity(143U);
    msg.state = 217U;
    msg.plan_id.assign("AMROHYFEPSWARGSLTCMNEBBAPKFJWKWJRCLZOFFQWRVZBXGUQCKTGXVFEECJZSARPVONBFGZXIXRDHSNMBOOLYUAQZMHGSXMUIBOGLTTZIQESVTUEZXOVYFQTYVLOWVAWVJOZJTZQPQIFXHQCDLFGUCJAHMBPZKDSJXUQYBPCHPLXANKDKLWASHUIWPYDGYOLHJIDGCKNKETKYUNVIUTBHVRDWKEWDNJ");
    msg.plan_eta = 914671590;
    msg.plan_progress = 0.0797802002654;
    msg.man_id.assign("FIPLYSFTQNABWYHVWPXGIVGUVSLKOLQGHDHRAPRGFKJMYBGUZNNWMBBNINKLISJFSZMOUBMCDMCHPJJSKKHBHIJNCDRDVWTGZYLRKVOGSYRPTFTBOOSKMUGERJNHIBTEXAGJSKUUHWOPJWVPXDAEIXQZATYQETZLCWSQBQNIDTOYAEFWZAJDHDNCZVJEZUQDCTBEKEOPKWXLLUIXXCFMUAFUOCVQANEZRIFYFQYLYVTMRDPXMCL");
    msg.man_type = 53145U;
    msg.man_eta = -67849041;
    msg.last_outcome = 26U;

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
    msg.setTimeStamp(0.213935644784);
    msg.setSource(4153U);
    msg.setSourceEntity(52U);
    msg.setDestination(18691U);
    msg.setDestinationEntity(228U);
    msg.state = 226U;
    msg.plan_id.assign("OZUVCZBGAAUVBAW");
    msg.plan_eta = 1329391855;
    msg.plan_progress = 0.49281621532;
    msg.man_id.assign("RZQTLQSROZXBGJVWWPLMCPSUIUHHUZYJIHEHMZKWHAIADXGXZBNGRWMVHTSFQIUTXCEEUKJZHYFMBBKMQJKIJOLGONPWJYPNFMSEAFHVRXSKFQLCJOVDDWXVGODRPLRXVCFMZYOADUDXLCMMVTBTVPAEOSGNKNXKRUULKBYCEKGJFPLYJCTFANNUFBWIHASTYWJBQLNRWSICFBANYIKZTDDQIGGDPRDBTVQEGAQYWHZPEVIXY");
    msg.man_type = 1190U;
    msg.man_eta = -1475104398;
    msg.last_outcome = 68U;

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
    msg.setTimeStamp(0.508949752042);
    msg.setSource(63209U);
    msg.setSourceEntity(200U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(123U);
    msg.state = 77U;
    msg.plan_id.assign("MUXDCTCIAJYVDEGSLVWPRLIEJBCEJTIPAWGQYVSMPIJHKMLQGXHILTSNAWAKKEELENAPFFYJZFZRFAFHWEMYPUMEKNGUQXAAWUNNTPSGGFZRIRORJVTMMUPGCUKRKOCLBAL");
    msg.plan_eta = 1794937826;
    msg.plan_progress = 0.107033841429;
    msg.man_id.assign("CNKMELKBXWVPVUVFSWBCVMQAIJOXXGUTFZOERARGQSCYZWAGVUPIGIOGKIURAMAZBFOTYUOYMINJDICLUHJZBFPSOXIURWEKEKAVJLNJEAFGYPNHBSJLTD");
    msg.man_type = 17517U;
    msg.man_eta = -55710644;
    msg.last_outcome = 223U;

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
    msg.setTimeStamp(0.141579421467);
    msg.setSource(1849U);
    msg.setSourceEntity(239U);
    msg.setDestination(21543U);
    msg.setDestinationEntity(248U);
    msg.name.assign("CXGALWDPKZTIDGJGMSQGPKFJBREOBZINCNIBWOCZTTKMNHZTXODKLTEKUYKBYJFWMLRXAYVZPMVKCHMQAFRTGJHMTEAWSCIPKXPXVUREEILUVECWOSXDZWUGYFSAYCEPHHANOHUNRFVZTZXXQGLQQPLDSZQQQPVBNTWEDHDIZFSKFIXXASVYW");
    msg.value.assign("VDFEKAZMAATCOPTLXLFXYPEEWBBBXYTEWWCZMFLCJVZBRSRHBYXRRJOMMFTQUFKJNBIMFDIPRVHOHGDROAFFQGWPPFHHPZSSTYKYZVTKEEVLPAQSQHUIJOCKJBZZCBWOOVYMUZJVEUKHFBMCRAMZMLZJUJEKYICNDICLNUQKQQWWHGYJUDWPTGLANAOLGCPXTL");
    msg.type = 143U;
    msg.access = 32U;

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
    msg.setTimeStamp(0.405130676871);
    msg.setSource(56099U);
    msg.setSourceEntity(188U);
    msg.setDestination(4449U);
    msg.setDestinationEntity(19U);
    msg.name.assign("GIQEUEJOVPDFCVOFGDWMBVHWWLOFOTSKMDWAITAYSHHMIVKRRQXLNKYYBDKAIUVVEJQXOTXVXCPZKTLSINZWCNXVGWZLXGXBUJPMNEPULCKGXNCWBAIOQUMHIMLYDESZBAPABYEUGTRPDFSVFRJWMGDKHJXBOLZYZZDXMPTYHUUWSCQUHAQNCPIRNIDBMFGFSVQCEECAWFLTPEJQURTZNTJIAJYKSZHFBRNOTQPDRSKGMCHSJEKNR");
    msg.value.assign("NMUSRJDVUGCMBYOKEABFHLYJSEBAUJOYKOSNNYDGLVWIFWRIOZCZIQWMQYBNMQHMJMTCZGHUYWWQIIFKDMXIVHEPRZPTDVHKNOXBSFBWQZHERVUGNUHSXWPSFIJWPSGKUZLCTSUVOLUFHKAIQNPHJDBRKLKJYPXMPCPUXFZMBAOIFRPDOMEXEAL");
    msg.type = 159U;
    msg.access = 121U;

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
    msg.setTimeStamp(0.464024893033);
    msg.setSource(41767U);
    msg.setSourceEntity(244U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(196U);
    msg.name.assign("WUDSZUZWRKTSBVOZSYOBJFWFLXFKXCWHAVCIAGBXKDUFOLKZNTQCUUWOKOHNLKJVGMCMREYCODQQHZKLWAGJDDSVGADNROFNCPRXUSJYTTQBHBYXOQFMGIRDHEVRFTWYCUILQGCIANSTJTPENJABILEESXSKOLPXBFVUIPRXMJQKVQIDTLOVUQRCMAJYRNAVZBHAZKMEQGZG");
    msg.value.assign("PXRDGYEVXQFOWRIWODDBXPQVTZEXIAHYPQZKJDIJIYFHOVIA");
    msg.type = 65U;
    msg.access = 160U;

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
    msg.setTimeStamp(0.682186186015);
    msg.setSource(16784U);
    msg.setSourceEntity(150U);
    msg.setDestination(56380U);
    msg.setDestinationEntity(134U);
    msg.cmd = 103U;
    msg.op = 83U;
    msg.plan_id.assign("EQHLGQWYOTNLHUAAHNBBEDLMZFNBPKWFNJPHFXJCNBUFKTNKIUPESGSXJN");
    msg.params.assign("UTZWFEIMXNAKWBBIYJBGSDQUDDMPTLNCJOWQKUAHBAZINLZFSVKSAOROGLARLKGMLXOFTHQRVGYZVIEKMNHJAFFDETUGEULCCOYWLHUODDXDHXZ");

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
    msg.setTimeStamp(0.441059542027);
    msg.setSource(62680U);
    msg.setSourceEntity(191U);
    msg.setDestination(3150U);
    msg.setDestinationEntity(228U);
    msg.cmd = 82U;
    msg.op = 27U;
    msg.plan_id.assign("UAMGCVQLFLUPWZWHSYGZHFVUIPKYQGAJJCESQFDMSJRAWKPKTOPGNVUIFUQKDHVMONTBMDCQBVCMFXBRXKDMBYHJIWFJLILDCWGUBHZTRKSHTKJBNZLBAYMMEFSIGFUZQNHJYUADWIKHZQQLLEXUBXPJGGZOXOPFKCSNWSXXTENEVPPDJWPETBT");
    msg.params.assign("UPLRROJOCIZWSPIMTGASKQKRIHEWNCFMSMCYBGESMXHLJBDVJMCIBNHCRUQHAZZZPDPYDSEBPXNVIBOLQRLNPGZFRVRDDBSZGTVQEKVMRLXTNFIGXWSVYHAWWFOZORGAYEUVPOZCBTAUNCULW");

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
    msg.setTimeStamp(0.863522019436);
    msg.setSource(43394U);
    msg.setSourceEntity(203U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(0U);
    msg.cmd = 57U;
    msg.op = 25U;
    msg.plan_id.assign("MWSVVLBJPZTONPYCLVDZKKHWHMLXDOABDMFPRJAJGZHGTCMRQNOOGXRDDTILZLHRPYYWUNORGBAXUTYFHVWPQNZFCFTQAAWEIQMKATSTSMCEZXANVHWPEDIZUSEBCQMXTZWKBCNLYRYAKKBJQZUPVRNGHSJRBUKXVIQCNRUVANMOGXLYDLQEYEEUBGIGFYIZIXSUPJHKJLDAFJSJXSPOMIQSEICGDHETOBXIH");
    msg.params.assign("REFQHGQNYSXFKFIVJSSXXKTYSHXZDRLBAAQJGVWBRTJOKDHFTPUAAMYVEZEMNNJQYBME");

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
    msg.setTimeStamp(0.335407404711);
    msg.setSource(54817U);
    msg.setSourceEntity(94U);
    msg.setDestination(18424U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("PHJYNCOEFJDPHZMRMYGBSPRGINHBWOYUIKOVNHZBCMXLVYGKFOCCYXHGRAROSSZNKRWIAUMQBEROUXDQYRMVIHSQRULGVMOYABGPZUOLJHUBFLYVJFZALHADTWOAWMMEXURDBBKTXURJVPEXTKFWNSXSTMIVZKCZNKZUAAVEDXGTPNNDQWSJILGPPYELOWV");
    msg.op = 202U;
    msg.lat = 0.232627274309;
    msg.lon = 0.510557090751;
    msg.height = 0.999471329145;
    msg.x = 0.23640741825;
    msg.y = 0.580594606107;
    msg.z = 0.550220341376;
    msg.phi = 0.0954391861299;
    msg.theta = 0.127219666323;
    msg.psi = 0.283664631282;
    msg.vx = 0.723112135772;
    msg.vy = 0.94364226529;
    msg.vz = 0.561171293307;
    msg.p = 0.809475518163;
    msg.q = 0.154869836131;
    msg.r = 0.865001968143;
    msg.svx = 0.199920254371;
    msg.svy = 0.472790765147;
    msg.svz = 0.0530922039048;

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
    msg.setTimeStamp(0.518664512724);
    msg.setSource(56800U);
    msg.setSourceEntity(247U);
    msg.setDestination(39745U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("VYBSCNNVZHKMPTJJNBKIBRPSJGNELPWQJDFTHHFCYBZDYFZDVKVRKYZLWSWXYW");
    msg.op = 235U;
    msg.lat = 0.632355379621;
    msg.lon = 0.608559798916;
    msg.height = 0.119892228186;
    msg.x = 0.478835088221;
    msg.y = 0.503944874925;
    msg.z = 0.386840076884;
    msg.phi = 0.239708303761;
    msg.theta = 0.80873717402;
    msg.psi = 0.124918193148;
    msg.vx = 0.148383924713;
    msg.vy = 0.879073619767;
    msg.vz = 0.0828733353905;
    msg.p = 0.708109595615;
    msg.q = 0.989081740463;
    msg.r = 0.300298308721;
    msg.svx = 0.436393323795;
    msg.svy = 0.322414931095;
    msg.svz = 0.105948191712;

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
    msg.setTimeStamp(0.808310900536);
    msg.setSource(27187U);
    msg.setSourceEntity(95U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("DUEUGLHFWDMLSXVYTVIJTXZJQIAYMPHEYTMDNBWUCWYEEQOIBPZBUBAOFUDLMIUYQVBEMVKPCXPIJVROAEPYWDJRQCCQFLZNEHTAIMETLSWFZJWUPBANSGRCHSGAOTEJWBZHDROXKTCRQBZVNDUBUKOAQMDOZKYJHFVRUEYLJCKWLPXGZLRFXKXMSGZSTFQYOTDVVKCXOZJJOPSAKNSSCSFIRQFXHGGHHIGQMGTCLNWPANAXNRHMDNPIGBKR");
    msg.op = 88U;
    msg.lat = 0.761967171976;
    msg.lon = 0.470673164631;
    msg.height = 0.626727467828;
    msg.x = 0.421449626087;
    msg.y = 0.355525322797;
    msg.z = 0.206231842684;
    msg.phi = 0.994772778641;
    msg.theta = 0.18505501759;
    msg.psi = 0.246306506014;
    msg.vx = 0.818902211784;
    msg.vy = 0.25596963977;
    msg.vz = 0.584541091344;
    msg.p = 0.823116874196;
    msg.q = 0.957372358478;
    msg.r = 0.749472663516;
    msg.svx = 0.695769893099;
    msg.svy = 0.801227739097;
    msg.svz = 0.293623197186;

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
    msg.setTimeStamp(0.784319401722);
    msg.setSource(37604U);
    msg.setSourceEntity(200U);
    msg.setDestination(17505U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("IBBYKMZSLQWYCELJFJQOXXNQNVSNJRGJIQVTMHABKPAWVTVUOEDSLDZAVXPLVJEYLNJQYFTIOWOUICAAGULWWHRFEDZXCHLMZBXROHTLHMDOOEJIPQ");
    msg.type = 112U;
    msg.properties = 40U;
    msg.durations.assign("GVMNTSVBPIYISMZFVLPLWLIKJWPJLLQYSBBOICIQCIZDUSXMXWTVFYYWONOKBUBMQRDHSQPFAIWAJSNPAHUAUBAYPQBGWIFWNXOWEDJSTVKEKBG");
    msg.distances.assign("YEJLTCFKAPFZUGTZINDWXCGHUQQJNRZKRAOVUQNYDUKSFSEYGWJAOBRBFGDYLMWHTSGKOLLMIXTH");
    msg.actions.assign("IHWTROWSMXOHJEDPRWYFMDTVBGWMPEPEKIKYSSHXXNRAQUGGZXUJQQIAERKUAMPPTQOJRZDGBTZWGZCKDJDJCUHHBISCYOVBJKYLETMBKTYNZYYIAAOWCEHRFREMHSVPXRDKUGBOELKQBBBXPNFIBNTMLSOYTIOIQWGLJWFAFRQMNZDNLHQALZ");
    msg.fuel.assign("EMGVURGUELHYXFESZLSUXLQHJAHQAMLGBCZQMMQHLVDQCFJTHJJITIKHAXIVPBWBWOWSKBQFFKNUOZOHQORGMOJCGWQKMZIROBFBXDOMCXRVAVYMUS");

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
    msg.setTimeStamp(0.407346560816);
    msg.setSource(59019U);
    msg.setSourceEntity(244U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("OCMUQHKYAJAYNFRLPE");
    msg.type = 54U;
    msg.properties = 201U;
    msg.durations.assign("TRNRTFZYXYYOMOBEPHSDMZNXPHXJLCHIFQPSCTVAPVBGLGMWORKLQEDDWJXNLSEXYHDAZOTHCVQCMKHDBOZOIUAKGPMIZARYNINOWJSQXXBNBCAECARTBUEYJEMEQZKMOKSHUKPLDBZFBQSLSUA");
    msg.distances.assign("QWNULOEFLTEUFFSECRVKBYAYVCGKXAHTNWORUPMYTINKOMAEROIKYIOJCYFPVDPMYMRDFGLIBTKWVZKKEDYBHSUHPXOWAPCUJEHHXZUXLQFTVEENZCFPNBAUDJSGIAKROSZXMGXDDWZRGQBODCEODQBXOKTWMGZJLRBBAISBZPMKHHMTAGLWSJTJJJQIWNVISCBGCPMXTFLUMUJCGGTSUJLFHAWVQZSQWDVCENZPXRSNLVNXYQLHRFDVQPNIZ");
    msg.actions.assign("RBZTAYSCXBFKBFJKSCZFNDPZMFGQWDQVHAZYQVURUFUJIPLBUYLIAEARKNBCNCDO");
    msg.fuel.assign("FJFAICRNCFSUWANMDXZFXTLGWAWOPJLGDUUKFVWDAJYRBRKMYQKIHGBEGVOIJSVEGLZYRCFHAMVLBRORMBKJFTYRRGBBWFIFINQXPWMKLRXTNPKYGTSZODXCOTAHSZOUDPUSTNWOSCQJPEOUZBPJHMQHHDXQYIWXETCZDEVKPCHFQYBXQRNLSABEIIXMLT");

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
    msg.setTimeStamp(0.0222842114657);
    msg.setSource(58470U);
    msg.setSourceEntity(208U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("DEMFZYOVSWBVYLFWHCBGUINBZBZYQFAFZPCEDODHTOEGBJYUQGRXUPRVPFNAIGDTNHVVAMHBSCRJIIWHTAI");
    msg.type = 94U;
    msg.properties = 0U;
    msg.durations.assign("IIKNPMHFYMZLSSFRGKOQL");
    msg.distances.assign("HFTKIFRHAVXHHASNTIENZGAFVOERQCWUWYWVSXNCXCUMDBIRKWECZEWPPRZXHUJXVNIVKLOBDBFFASTIFXPWMILQXOMLZS");
    msg.actions.assign("JAXRIVNSZKFBNOOEUUMVOIPKMGHQXYWMEYXVLBRMADUTEIJJMUYCPFLQYCWJGJTCUFLNSLRCWOXGKJUQMTXKWJZPVLYWGEMFL");
    msg.fuel.assign("KZSMHLCPLUMQGSVEKLPYYTLVGIVRUTUCHFSGEVAVOCOSHXREFMYXDKNPXZYZXGKQXPKKNIPDMCWWFAVVZHBAYSBMFAUCYJJLMCXTUSDNWMALGNEREKTROGZGB");

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
    msg.setTimeStamp(0.366941946776);
    msg.setSource(8351U);
    msg.setSourceEntity(74U);
    msg.setDestination(27249U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.342630474376;
    msg.lon = 0.906272454373;
    msg.depth = 0.101664696331;
    msg.roll = 0.470600102673;
    msg.pitch = 0.839269083897;
    msg.yaw = 0.99697519731;
    msg.rcp_time = 0.281239041666;
    msg.sid.assign("TYZTCNKRZGSSDPYCBLNCOMZFJOSFURWVVUHXMHQJGJLYMDNUNXLGLQSJGXKYIOJSCHTYUBPQWMEMCRHOSQEQWLJZIOYXDWUBADORCLXNVADTTBLWEKIHTIDKASOMARLEPBQAUVAZFEVXNQJOLZOITMCBFWFQXIAFPJNXRKNKWYWRVVFPFEXXMCHVSGQBTNWDMHVDPZFJUHEIGHEN");
    msg.s_type = 73U;

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
    msg.setTimeStamp(0.267639465817);
    msg.setSource(24824U);
    msg.setSourceEntity(110U);
    msg.setDestination(2739U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.910433991423;
    msg.lon = 0.577481863129;
    msg.depth = 0.084179687804;
    msg.roll = 0.369637489499;
    msg.pitch = 0.269393904182;
    msg.yaw = 0.21353755686;
    msg.rcp_time = 0.614106754395;
    msg.sid.assign("LHFJPZUCUKFLDHOFIGRNZWPAVKTHHSRVFXGSLCVXOEFPUALGQTFDROWQTXSYOMDQWVIRNSGNECVOZPWMYTMTKDIHKEZPXONQIMWVTNBMGWMCFJWIFDOORJUBPBXXYCAHYLLVINDYAXZBUZAILERXSJSETEYRHJRCCODWSMVRMUAJKLHGZSJSYKPFIDQBJDUAHBYCAYQPMCRKGZEOQTAZVIEHBUPTYUKWTLBNGPNNBDSGUJCWK");
    msg.s_type = 39U;

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
    msg.setTimeStamp(0.638322945585);
    msg.setSource(26988U);
    msg.setSourceEntity(114U);
    msg.setDestination(6740U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.916343371358;
    msg.lon = 0.384339970466;
    msg.depth = 0.888788758044;
    msg.roll = 0.38219505557;
    msg.pitch = 0.775830133666;
    msg.yaw = 0.627861351625;
    msg.rcp_time = 0.525878855434;
    msg.sid.assign("ZHGKPEONITDJQGSWZATJGHHZYPXJMHYKSUEICBIEEYHRVNLPXKMCIOWEQJUKSEMLYAACWLKJUX");
    msg.s_type = 27U;

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
    msg.setTimeStamp(0.797266595038);
    msg.setSource(24779U);
    msg.setSourceEntity(212U);
    msg.setDestination(10709U);
    msg.setDestinationEntity(27U);
    msg.id.assign("MYBOHFLMVTHITNEZSJCQLSDOTAJVIYFPCXHMZNFNCBDQGWHUWXVSOTMMERQNWKDYOGRYIYWTGGXJXXOZOUUHVIPJUUDTTENVDCFXSHAQPBLRDLNCQIMACJPWZDIADVMRGJBUSFMBLYGBPEEKRAZWXEQQOJNOEZLUSUVCNHRJKKFAMZKICJVRNAWTFZFLPXGUWWQRFZYVXKHAYSBPHTIPXRSOKEUIBK");
    msg.sensor_class.assign("SIRJFSZONTNNKDOJWTHYTSBFUEAXXFHITLPHUOEQNEFBYJLGSBKPELCJJPNCBADPMUUKZDYWMIIVLJBMAIVGHPIDXSYAYQ");
    msg.lat = 0.116864309461;
    msg.lon = 0.736066489127;
    msg.alt = 0.693074550312;
    msg.heading = 0.34907883593;
    msg.data.assign("WDDDQFRPBQWSQDHHWPNMWAFKIQZCXLTUUCTZQVCCUGIIGHWQPLXSOEXWADUNEVUDKOOQMOODBIRXUEEBUFWJJAYIOHYVEXEAHVGGBMTJTOQHTMXKKCPVIFCRMVFK");

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
    msg.setTimeStamp(0.828463205558);
    msg.setSource(17418U);
    msg.setSourceEntity(155U);
    msg.setDestination(6289U);
    msg.setDestinationEntity(18U);
    msg.id.assign("HAVRSALOSDMQFHSDISPMWOGGLVVQTJXUVTQBYNBHXGZXCBUTFKNCBAGMIEHUDUPYMO");
    msg.sensor_class.assign("XFVTYXGSVLPCTLKNUDWRDYPTELIDJHPXBSEBUVTWJYHILYVJEIXZGZMWSGRQKRNIMWCKMSMZOXC");
    msg.lat = 0.798216525086;
    msg.lon = 0.626130359759;
    msg.alt = 0.788439724729;
    msg.heading = 0.763474720597;
    msg.data.assign("FVMAHDWEMATNXDSLGOFXVHQPTJDMWWOJIEXIQFNMSLQXUYYIMEHECVGTAMRHWDKTMJLGLIRGNJYTFWVGAUNOVCEPFQQFYZMZKJDWHGZPTPRMOIVGDLCAFUXBPQOCRZYVNLZYRKWIIUQRVEKWUHAIEOBKJBDXXAJRKOSSXPXUNXIBJZCKHSPRZPOSCWEKBJUBOPKHBSFBUAPYTZVFHTWYRCOQGZLCKVNULFSLINMYCBDJNDTNUSHGQBYRETQS");

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
    msg.setTimeStamp(0.0447714754018);
    msg.setSource(19684U);
    msg.setSourceEntity(160U);
    msg.setDestination(13258U);
    msg.setDestinationEntity(242U);
    msg.id.assign("DMTRNBAQWMQDNUJPOVWLVGCTUCCGVOHYNQJXKWVQWIEEBDLEHGFUIFKZPUIBCDURTLREDHXUYOKNOZDBTOHLEKONGKFGYPKSGUQXDPOAAARYYNXPHHWMCHSCVCHOSGMOMRVTKJQAIZFZZBIWTEWPVRBGEXTMZMYFXIGQCJEZXLQJGMQUDVPNSFCFPMSIASLWXAEBWJYNZUWZASSHRJJTYFYOKMKZD");
    msg.sensor_class.assign("RTAPOMTDZAKXSDQSZCFYYFSGZMJBXIOBYSPBUWCHJBONCVKQKVIQXWDFHUHBOKA");
    msg.lat = 0.815870590611;
    msg.lon = 0.826520640055;
    msg.alt = 0.00348872006422;
    msg.heading = 0.253048197056;
    msg.data.assign("VRNFNULWZGYQVFNTMEBCUMJSYKUKUPBTARCXHABRDCMKVXORWDEOHJNHOBLOWTQPDLWPVHKPPNAQRTGRFWGNPUOEUIICZYTUKJFROOYJYPUTDSMVFASUTRXOBBOXEIAKQZZ");

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
    msg.setTimeStamp(0.137443766959);
    msg.setSource(3149U);
    msg.setSourceEntity(95U);
    msg.setDestination(12799U);
    msg.setDestinationEntity(2U);
    msg.id.assign("WYUCACPHAOFENUTAQNWOVMUXYRRJYEOUUPWWEGVMIGJSSAZMHLGMJIZNHKHXNBXHGFTLKFAMKYXOHDDRBEILSNTIZGFJPXXSJCAVFLPIBDGACIQNRBGDBMVFOPTNFABFEGCJCGZNYKAYLZHDRUCMEXOLOKWMYPSDJDPWLQUNYCVVQBSYZPYXZHFSRTQTIKQWRVNEDTMKRUHPLFKSKSWQIXJPIEHARGDBZKVJELVOOQRCIZDTLQVZBTWTMXBW");

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
    msg.setTimeStamp(0.87307577734);
    msg.setSource(42523U);
    msg.setSourceEntity(218U);
    msg.setDestination(24094U);
    msg.setDestinationEntity(201U);
    msg.id.assign("UVFQWHFNBCFMSURIPUSLHJEXDNLHSXO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RKJIVHDCSNNHQRWGSDRTUUMW");
    tmp_msg_0.feature_type = 201U;
    tmp_msg_0.rgb_red = 88U;
    tmp_msg_0.rgb_green = 115U;
    tmp_msg_0.rgb_blue = 182U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.469510621306;
    tmp_tmp_msg_0_0.lon = 0.460940178328;
    tmp_tmp_msg_0_0.alt = 0.942627398058;
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
    msg.setTimeStamp(0.281404285027);
    msg.setSource(32405U);
    msg.setSourceEntity(129U);
    msg.setDestination(39183U);
    msg.setDestinationEntity(53U);
    msg.id.assign("ZBOHWNSUVPLMXNWNAPHZKZSQGTNYCZEZYGYFWQQOKIYKEVMZQGTCMIWRHOFOBBNQMPYHCIVWQTQLBSTRLELHBLVTIBJZDMQJOKPJCPEFDLQHU");

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
    msg.setTimeStamp(0.473934050856);
    msg.setSource(10228U);
    msg.setSourceEntity(187U);
    msg.setDestination(64757U);
    msg.setDestinationEntity(120U);
    msg.id.assign("GQHWOPCEEVMBOGUFQHVIXQJKAEOQBINZTOZKKTIPPOHGNBXUGSDDWBCDVFECGFDABIHNAMWBGZUQYRTULYQMRBKFKVZYTOUPCHKMHVWERAALNOCUVSEFYQJMCDFLWLAKRSAXGKNDWAURKLCILJTSMLXJOSWLRCUQIYJRCVIQDHYESECFONNSJ");
    msg.feature_type = 23U;
    msg.rgb_red = 91U;
    msg.rgb_green = 61U;
    msg.rgb_blue = 15U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.00829705187988;
    tmp_msg_0.lon = 0.671962464578;
    tmp_msg_0.alt = 0.82568049631;
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
    msg.setTimeStamp(0.690165266704);
    msg.setSource(8489U);
    msg.setSourceEntity(139U);
    msg.setDestination(41766U);
    msg.setDestinationEntity(60U);
    msg.id.assign("UZFWSFWRMSZUHAEAGJDXAISRPWLYAZULBNRDKTYMPZWOMRZJGLSHFTFKPBEIANNSTQHLOXOEKZFIACNINMKXDCLDQGQRKOENBEHNJQTGYCKUELGIQFHTXVPQBOPZUTZRGJPLTGYCFIKPMQTCVUKWNMWNUQGXI");
    msg.feature_type = 242U;
    msg.rgb_red = 82U;
    msg.rgb_green = 50U;
    msg.rgb_blue = 7U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.132461558409;
    tmp_msg_0.lon = 0.152539062676;
    tmp_msg_0.alt = 0.649800154625;
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
    msg.setTimeStamp(0.98115313998);
    msg.setSource(63159U);
    msg.setSourceEntity(103U);
    msg.setDestination(17615U);
    msg.setDestinationEntity(93U);
    msg.id.assign("PCGOVQISJCLJNQMSICRECTWZZTNDPHNWJASWWFWAZIOBMGFHOKYRXSPLDFIPYOQFABQXCLRJNOFMUNYDVDGHKQRFNOQXFUYSCFPWRGHVLRYGATLVYXCMDVNXMAZHEZSAATMSJUTKJZSKPFILXBTBJEOQUQXCERLGTINTUVJXDSUAITEQBVPMDEEWHEKPBWI");
    msg.feature_type = 154U;
    msg.rgb_red = 98U;
    msg.rgb_green = 234U;
    msg.rgb_blue = 93U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.822315849793;
    tmp_msg_0.lon = 0.189341828638;
    tmp_msg_0.alt = 0.469025721811;
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
    msg.setTimeStamp(0.918853420034);
    msg.setSource(28263U);
    msg.setSourceEntity(217U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.991561508163;
    msg.lon = 0.680489148496;
    msg.alt = 0.125978731161;

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
    msg.setTimeStamp(0.370730344394);
    msg.setSource(26663U);
    msg.setSourceEntity(189U);
    msg.setDestination(57993U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.101848569587;
    msg.lon = 0.831522745947;
    msg.alt = 0.551946613112;

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
    msg.setTimeStamp(0.341099049553);
    msg.setSource(33446U);
    msg.setSourceEntity(53U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.921702209731;
    msg.lon = 0.173466838788;
    msg.alt = 0.132850192273;

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
    msg.setTimeStamp(0.764530997952);
    msg.setSource(23432U);
    msg.setSourceEntity(56U);
    msg.setDestination(18251U);
    msg.setDestinationEntity(68U);
    msg.type = 89U;
    msg.id.assign("AKOKZPCCJZMBIRWOATGPPAHRKAHTQRHOIZSCDLEFUVIXMWLQTYZQXJYB");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 80U;
    tmp_msg_0.op = 62U;
    tmp_msg_0.request_id = 25812U;
    tmp_msg_0.plan_id.assign("OUSOXWUBLLKCIDMHNZCCUGSNBJERKRTVOCMIWSJ");
    IMC::IridiumMsgTx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 10482U;
    tmp_tmp_msg_0_0.ttl = 8099U;
    tmp_tmp_msg_0_0.destination.assign("KGNOLQLKVMIUHDIMCTKEMOPJQNIUPWVTCGMIWTJVYAPBRIZHJGOXNPUMLGCKLKSQDEFNIAOBYZNRBTPGSZMSHDTTEDNBRIJIGLACSTTSWWLWEXAXAKHEFHSGEFMSYNPPICHJNCXPYSUYTVZQXSZFAFWDUAUFVZQRHOJTYGWVJOELJCVKAOPQSYWAZUHZCCDBKQXFROMBREYBBZVGXHDFRXLDDVALZMOVFOQJILRMHWNQG");
    const char tmp_tmp_tmp_msg_0_0_0[] = {107, 79, 28, -105, 103, -58, -64, -32, 56, 3, 107, -121, 62, -128, 109, -30, 3, 44, -83, -46, -112, 6, -29, 27, 73, 95, 31, -87, 26, -4, 72, -127, -109, -102, -95, 19, 54, 124, 25, -91, -1, 89, 96, -50, 10, -85, 71, -48, 22, 97, -117, -23, -48, -108, -101, 55, 118, -16, -79, -27, -52, -82, -94, 101, 110, -21, 69, 63, 124, 115, -34, -7, -43, -2, 95, 1, 15, 121, 125, -98, -128, -97, -113, 118, 54, -102, -32, 17, -37, -58, -74, 120, 1, -72, 77, -104, 46, 6, -52, 47, 35, -42, 31, 89, -122, -22, -7, 5, 35, 21, -113, 78, -119, 73, -12, -106, 116, 99, -23, -16, -84, 42, -84, -14, -86, 85, 98, 12, -14, -49, -29, -102, -3, -126, -30, -24, -51, 36, 92, -43, 82, -50, 49, 5, -61, 56, -94, 67, -29, -81, -39, 27, -39, 45, -101, -5, -75, -69, 63, 111, 94, -13, -104, 22, -1, 63, 116, 68, -82, -58, 3, -49, 65, -68, 115, 106, 24, -125, -122, 58, -86, 77, 56, -38, 104, -14, 108, -81, -37, 68, -57, 9, 16, -94, 117, -36, -68, -121, -10, 11, -60, 61, -10, -90, -34, 25, 10, 104, -18, 91, -76, 27, -20, -86, -79, 45, -41, -93, -19, -120, 24, -54, 19, -82, 18, 1, -15, 120, -128, -28, 73, 50, 46, -14, -106};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("YYADKOGHZQIKSVHMWLZNVJJAYGQXKJNTWYSJNZGSPTPNO");
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
    msg.setTimeStamp(0.94486489384);
    msg.setSource(59351U);
    msg.setSourceEntity(204U);
    msg.setDestination(20263U);
    msg.setDestinationEntity(201U);
    msg.type = 112U;
    msg.id.assign("ZHSIYHCSYEEWQQSKLUHKJSRVGDLTDZYXAZACPSBOVABWJPGEBRGTNLQPWMTOKYMGXMBANGLIAXYAPUFRIKRXHBPRSTOLVOETBRPDSDJXPJMFJBECRWNEVEJSGPZDMGUFCNVNQRKEYOXCAUFNLDUWWBIANQFHXQTYTQAVQEDCITIBXJUJXWQDLYFMZHWKNZSBZGHKHKOFVFTCCPAXMIDNOKULYZPTWUZRRGYINWV");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PNPJLODAQESRVYWNQVEEYHGAGWMYLVQFZMSTZBBTGZRNZRMTHCXOMYUUCCFRTBKMBCXTCKHIUCGXPBBRGEBTUNEWXXMWJFAOJEVXCGTSODTRUFWQUXKFZBGIOKGXALAWUQCVAPIQPAZDVZNKXMZSUHLWFQOHBPEQFIIYLSYLNRLMZOLRJRAHQPQWDSSPHSVHDJEVNHFJMNVLSWKLYRJKKUOINDKKOZHDAFTWIUENAXITPE");
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
    msg.setTimeStamp(0.523570775992);
    msg.setSource(8260U);
    msg.setSourceEntity(65U);
    msg.setDestination(6862U);
    msg.setDestinationEntity(158U);
    msg.type = 95U;
    msg.id.assign("DNEQWVDYWMUYZBRQEUTDIJFFRAJREYOAWKFZJVYDLMIHSWTNXAFGKMBUBZMLZUTUYPCGRXTTZUQJSOGLPJXFPARGNMYQHXBZPIVLAHEWRVMLQPRHYVBXSSKZKIKIDXHBJHQGNAPGELWWCOLHLEBMIDAZNULVJFGWYXDHFBOWRVCOVHDFKP");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 201U;
    tmp_msg_0.file.assign("YLREHSGIOZXJBBOXKQQFZKSJWKCDIKHCZFPHWUZJJAVARQAFDOVVFTXLPSXZIPKJJXPCNJLVBNGPORVNAWVHYTSOGWDMUSEPTHZRYTDKGW");
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
    msg.setTimeStamp(0.250866512056);
    msg.setSource(3232U);
    msg.setSourceEntity(212U);
    msg.setDestination(46881U);
    msg.setDestinationEntity(163U);
    msg.localname.assign("GDQZBHBPXPGQFSZQXFMIRZSIQJHVHJTMLXXQSKZCORNGZFCLRJGAUVUBOZDXDCNQHMHKWLMDLMBTXKSPRMVATIZUDISIVYKF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SISWCIWDKGIEWQVJWPPFYZSLYIKTEHCQADDQFQOIBBXQELGPBNFPGQOZDLGVEKRKRJRQSPZMZUUFSHAMPNBXLYEHWMIGQKHUNKIHMJZLNTCJCFXOFLPCHJLUURVANBGCYATWQJKOATNIOIZWZAKXTJVRQABTTCNDVVUWXORTROAMEMUVFYTZLSBYPSSWDXZGUHZYDKDXCYYVOPTFRFVGNMGBJWXMKALBRNHSE");
    tmp_msg_0.sys_type = 151U;
    tmp_msg_0.owner = 2450U;
    tmp_msg_0.lat = 0.199146997315;
    tmp_msg_0.lon = 0.347728485035;
    tmp_msg_0.height = 0.794622827802;
    tmp_msg_0.services.assign("XFFCUNCXNWJHBDEKIKFJTNGASOSMHMAXYABNKLYHCRQTGAZXHKGJDZHCETVOPRMEAGGNASFNNZLLJSSRVBWZVDKRRNLAARVZCQBFSHLULYQYSTZBEZBMWPEDH");
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
    msg.setTimeStamp(0.461618985374);
    msg.setSource(29714U);
    msg.setSourceEntity(34U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(123U);
    msg.localname.assign("HDZHTCFWRJYEUKTOMXSBLAWACTJVXVNZWUGVOEGDBKWFQYYMIPEJDSKQJMVEIURNNNZHHPUXOHTODJVTPNAJCBXEKQNLXLFYKUPIKZPUFMMFRHSUEELHOWQJNMCEGARGCXRLRQDXIFAIRYLSOFWAPUMPTFGICZIDEAYHQMGOBZMRUWVPJHALROBABIZOIXNCWSEPAQNGTBJDKQCILYVRCDWXBDXLSZDGYVSOQVFSHMTPGULZ");

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
    msg.setTimeStamp(0.493796062582);
    msg.setSource(51447U);
    msg.setSourceEntity(246U);
    msg.setDestination(17009U);
    msg.setDestinationEntity(19U);
    msg.localname.assign("CDLXYLYFOZEUCJOSVUGZHABRKBTIFYTWPQZYMEFALFBGKGTWECTNGMJGEUQROKYEWAUOAUTXAXCJDDKGOOIHLZCKFPRXPFHGNTEQVNWQRCMZKHRURYSLATVCPOIVXAWSNXSUQDCJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MMGPIFJJMARPDCYWAXQEWYYOLIYNRLRPSSXIFPJOULCCQXXDKULLGMFPERGSFNAIOZRVWTBIDUKGVEAITDDLNONTMZSBAKOJNZBZZWMVTJZCWEMWCPHUPFKRWNOHHESQGHONMABXHAWJJTGVIECYTBTKGECGQCYEQPIYYMQZVOIRYXHSVWZSJUDTBV");
    tmp_msg_0.sys_type = 160U;
    tmp_msg_0.owner = 30873U;
    tmp_msg_0.lat = 0.708895591839;
    tmp_msg_0.lon = 0.0326632440719;
    tmp_msg_0.height = 0.751738547298;
    tmp_msg_0.services.assign("PAVQSJDHQNFYQWCOBHAKURKPNPOOYUJGZJOPPLQTZLNSRCQCJHRGEKUOYTRXXOBBULMAYXMPTPBFKWADHBDIMHKQLHNUEKVYRLWEXGXWDZHYMWNINVKLJJMAXNIRAAYICJSVVGPDCSCZ");
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
    msg.setTimeStamp(0.579019091312);
    msg.setSource(47300U);
    msg.setSourceEntity(253U);
    msg.setDestination(39449U);
    msg.setDestinationEntity(192U);
    msg.timeline.assign("HTSKZKACGDSLCGOPXKOWXDSIQLXMYYAQFVGJICOYJSFZPOTFWZHXWXGLODLUKEYIZTHBRAIXRWVURZLRZMQGDVFYQEPJGEJBFSWEEBXNVFDJBZMOLMRQVDD");
    msg.predicate.assign("TQJRTEQOLWGUCNFWGWYRCGJDPSTPOVJBDDQLHKUTBNCNADEERNIINSEIEVJPXSQDZDQKBCXHXJODXWYVTPMYORVSVMXZGTPOBNZEWSUYFTAFOPHFNBYFELZNZU");
    msg.attributes.assign("NKUANDPSOMXNRPRULRISTGOKNPYKGQYNRTKEPQEMHICSJZWIWODXEAJBLOFNHYDIXDYMLL");

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
    msg.setTimeStamp(0.811550389452);
    msg.setSource(19343U);
    msg.setSourceEntity(80U);
    msg.setDestination(10984U);
    msg.setDestinationEntity(194U);
    msg.timeline.assign("DBVHEQMLQAMBHKJYRQGSQCCSVILTDJZFOEIUSEAWCWFOUFQXORBSORYLPSL");
    msg.predicate.assign("DNJIIATXRVKIOPOEFOSDOGTYLBFECMVVTFCJXIJFHXMNUNXIHWLZKDVLJTMPZQIGGBZVFJHGBQLYPCRJICBQEMYEUSWJVXDNSDFBUWNAAKOZQTSTNPZXHKKAGDQIAVLEWOLOZZERPERYPCMGOWTRWMAAJHARJHYRYCKFH");
    msg.attributes.assign("GHIRAYSIRDHMJAQIKUTIOYWE");

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
    msg.setTimeStamp(0.321764678058);
    msg.setSource(3726U);
    msg.setSourceEntity(17U);
    msg.setDestination(48379U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("MBCVGZGNDVZQGDSSPSIADCNXRUUOMHCDHZYJDLBMBKEUJAJWKHEPMZCD");
    msg.predicate.assign("LRUENGQCVCRWAEAPDTDBTRVQVIGBWZHKGXPIHVXNMTWMJLPQGHUQYTPORXOYNIDWBCNQSTDKHBDYBWEXCAUFILCRABHLAAEOFMYJAHMGZXINWLDMAVXQFCVAWSPRKUEJSQTMSDUXOIOCJCJGMFQSUNKYWZGLMZNHERKPKOZZNKLRIJLJPSQYVHCJOEFO");
    msg.attributes.assign("WYZJCIPOIXLIXZJGLETCFPGRSFWWAAKJNTRURELZKYOWJLXDQSNFGWJFTVZZINCLFKSNQGBJCUJAFHXPDKEKMDVDBXVADYLEMOMHSRGYQRDUKOYQXEA");

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
    msg.setTimeStamp(0.393320395062);
    msg.setSource(5138U);
    msg.setSourceEntity(60U);
    msg.setDestination(50948U);
    msg.setDestinationEntity(28U);
    msg.command = 166U;
    msg.goal_id.assign("QTHAPEBLIUSLKGDABFXBHEOKQHSSIRRZWLLZPWMPRYJFEKZZKMPRLXNGNBASVOMVPAOYMBJHIYCEGXQQFJVOEUYVXMFAUVVNKDPVVETELMFPWHAGDKDRXQWJYMSOSLIMSOQRKTJWKUYAWBIHTNJGOECFOFIQIWKBPJNDRZRLVRYNDELTGBZIXMARCTDSUCQTFMZUHTPNUHUQGXTCNCODEBGZGDCHXWWPYSJ");
    msg.goal_xml.assign("BEJZLBIENVWMQDUTTACVQLCPWYDDYMKAAUHXTFIUTM");

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
    msg.setTimeStamp(0.730600091978);
    msg.setSource(19832U);
    msg.setSourceEntity(184U);
    msg.setDestination(37541U);
    msg.setDestinationEntity(15U);
    msg.command = 240U;
    msg.goal_id.assign("GRAFQSEEEDJTGMWORXITPCRHTQVQUIDKYS");
    msg.goal_xml.assign("ZPQOQXLDXCFVPBFNRIDZZRCPSTHBHDTNVZCXNPBOWRLMGMXWJZJHEAIIRLJNKWBPALYMFGIU");

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
    msg.setTimeStamp(0.721678708791);
    msg.setSource(53480U);
    msg.setSourceEntity(107U);
    msg.setDestination(4784U);
    msg.setDestinationEntity(154U);
    msg.command = 250U;
    msg.goal_id.assign("DBSGSSPSQWMRBPGKYHG");
    msg.goal_xml.assign("GETZCHRUDRHCXPFBDSRTUJGDZVOSWOSPKETIKQAITIVAQCPNGQHWUXCEQWLHYDRVWEZEXBGQWGYRWJVFUUPPUQXNETNIENBHURLBMTZCBKCOYYLCWHOJQQSLHXZVPNAYDDVSPHCJFSABVRXKGRXLTSADTKPGZMOQIZDSPXWBFYLAMJDLNFIYKABYGKHNBVXEMUZMNMNOMOAUFPJJJLWURLFLMIZCGEMBEISWKOIFVKXDZFVQOHAYTR");

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
    msg.setTimeStamp(0.101488620613);
    msg.setSource(16285U);
    msg.setSourceEntity(215U);
    msg.setDestination(23507U);
    msg.setDestinationEntity(62U);
    msg.op = 242U;
    msg.goal_id.assign("NOBSVTOOSKXJLBWHRSHEFUMIHXPGOXHJWBBJAVZROPRMJXMJWUZVFVLBBTQLVZDLACRKTRZPJWOKAAHZITNRMFQYGXDQJVXJTEDMTYFLBKRUDOFCLYKSFNYALJQUXKPAQHQEQTNLHGIVGQIADSIHDIQSSNPDEGVRGPEECGM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LHPMUWLMSGSDOHWENCWCGDSWXCVOTZFBIWBJTOJECAPUBSMJPHQQNHJJATMAEXFFROZSEDPXBBSARITKDOOQKCHSFZJWTPYZEFAUWEDIYZLTIWHYNNKUNRAMORMVGGCILYVZ");
    tmp_msg_0.predicate.assign("YZIWDRGMKOFWETJRXJYDUUVYTASDMVLGHRQDHNBKOITECESFFBZCMIEFMKJUGJNNUMXMTPZTWHJXWVLHJIYKEHULRRSDDBRRTQXQABLBKREWBAWPIFGIGCLTDHVZYZAAQTDTZVKECOFRHPNWOGIPYCOYPGUVSEQGPHQNLILSQPNNCJFUWNJOKZPOXYEWVKUBGOXHSFVBOZXN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TXOHBWCFISLUFLAMQNBAJGGGEOMBFDEAMYISFLOOKIHYTLZHSNCUNMADFRFCZMRVWDURJJHXPLVDXPJZZZIEYIBRLKWEOVIPNHWHVPWJKEUWEFEULYKXEZOFYKUTPWQPRMLQKWMIVAVTPEDSQLYGNXIYCTQAJDTVJQTCYBSNZQBGHYPLHZXCXFKSRGUSGOSRAVT");
    tmp_tmp_msg_0_0.attr_type = 143U;
    tmp_tmp_msg_0_0.min.assign("ZJGIEVIRCMKYZDOCPFZV");
    tmp_tmp_msg_0_0.max.assign("HLZXIPVFQNEEDCGLAVECSNTIEFGOEDCYTLMYYCNTVRWWPHYZSGBXGWSPLMCOBVPSYRCTOMPFZRUQLQHMFQDTYJUIEEODWPMXAGJOIZXUUNAIOLUXHLRXAUAOXGBPVFDBMKKWVQBBRZKYFSFEJLKX");
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
    msg.setTimeStamp(0.844496597908);
    msg.setSource(39533U);
    msg.setSourceEntity(116U);
    msg.setDestination(56274U);
    msg.setDestinationEntity(241U);
    msg.op = 41U;
    msg.goal_id.assign("GZKOSVDCBYWNNIJWOBDNMPQRVEKVMOMCUFSWGZPJKHXQEZXRRDAUJXHSXDFMIRLLGETDLKPODWAFMPXAYISBSTEILQEUCPVBBLPFYOIZRRTQVQAGYXDKYJIOGUACYSTRWVQBFJOIXSDAZXELRHLCKWBGNIGLTGKOAWVNFZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AOWYMXZYMOPIAPIVSUYYYO");
    tmp_msg_0.predicate.assign("STHCSLFVWXOLRNOZVCXFHLESQOZYRPOWXIYWUHZICDQDLGRAFEHNZUBEHQKOHESZDIIAOMJYEXFWBTQSPWEUDMTGGXNXBOIUATYPJYGLJTQWUZCQUPGTKBEIRZITLDFCXKNANMYCUGTBPFLEBEVMDJJKVRDCYFDABQAMWOQRKKWUSZVZGARYZRMTDLGHNCXPKAEVVWQHTNIPJRMNIVWKAJUXBSCQKHLCBJIUPYNJDGFMMVFFASGSJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QOAIZYAOHZTFRXRWDDCORDBSUVOWOWUNWDWCFNOHGFMPJUGLDSQQNJQZBIIGKETRHNFGBZWMLJLAIYUSKCBAZLVQMSPJSZXWXJSORHLYRGAMFUGMFHUNWEVAXCSRBILVQEOAGGKKQXQLTBTXKQTMEIBPXXJHFNFTJHCDYYKJIZPMEUZPCWJCVACMKFTMVPFEESYVYOXASDXWIUAHTLEPGP");
    tmp_tmp_msg_0_0.attr_type = 185U;
    tmp_tmp_msg_0_0.min.assign("FTXQPJCXBQFJNFKXCMZBIWJLWWLUSSWGYTJWDONUYUNVHRCKBILWXSLDFNEGPAGXGOULICFBEGUFTSKEBLZMXIIVGTWMZGARNURRZJAVAOPJHDKCEROFULNHXYHDHYIABVEMSMMRLPWZYMPXZZQNNQCHCMOOOVYCSSPAQDTQTIZJNQSRYBORKTD");
    tmp_tmp_msg_0_0.max.assign("HNEQTCGYNMJPWWTU");
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
    msg.setTimeStamp(0.562881688044);
    msg.setSource(61200U);
    msg.setSourceEntity(66U);
    msg.setDestination(28385U);
    msg.setDestinationEntity(231U);
    msg.op = 29U;
    msg.goal_id.assign("CMQREDDICZIOOJXUSWWVXWNWKUEJZZBHKWUJKDDHKQJRTRDLKISUVOUCBIGXTSXVIBHWBZKACTGIQTAVYFAOSJGXYBPTGCXXELUAJGPSMWNKMFRELQQLUDNTFQGAJWAAOEPVHIMMGYSABVVGNYZVHLVRYTHFRQYMFEMWNGARHTFCNFRJFPQZMZSDQHLOBIBLBPQSZJHNFHMSPICCUDKLSXZURRFTEODEIPOWZX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XQCZKDNUCZWRQZNIPOZRXTHBISBXZEBMMFLQLXNXIQPOQCFYRKKZMWGURPJCKPTB");
    tmp_msg_0.predicate.assign("VBJSBESJDZUGKHETMWALOJETCVJVZFGKYRNDPKUHFBNXRTJYPNPQASFGIXKMNUOTAPCHQJAULYBJIYMQZNXIIKRUROTDGHUXDWMNCWZL");
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
    msg.setTimeStamp(0.460586559404);
    msg.setSource(2803U);
    msg.setSourceEntity(196U);
    msg.setDestination(57492U);
    msg.setDestinationEntity(133U);
    msg.name.assign("OPGGFJLMFBZKIGWJZKKEIZTGSSYOEOHLCLIWUXRQAVRIUPDCCLAKDIBJVFCHIFPUMQDAZNSPPUQSTSLXUMMWAZORRGENLQQOUKLDJHGDXOPYBCNRYNBYNQATYXRXNZVHRNOVEAATFGTYBESBPOPETCZJWSXFLYISINYGTHRVMZBXMBXPKHDMBTSCTOWALMUWAEKKWMYXJLHKTZXEHBQJNUYWJQWEVIJEJOWDDPDKVHFFICVUCRS");
    msg.attr_type = 65U;
    msg.min.assign("WHVLWJYEKTXBCSRSKABXWZBVPUBERAPPFSXLILZSZWFROHXQMEFONHAEXTVDRPOFGQKRTFZTYZGUMCXHCULNCXAHLDDOKNTOWSTZTYBSJDQIAJLGNTLQJVZOWPVWOIEUMUODGMGQJHYCGXDEGCBPBRDASTFFPIAFCSDZKJVWJUNVOYDVHRWYEPLEKTHQAPMRZICQEBZNCXUBSINJCYEGKHYFNQJVAMO");
    msg.max.assign("UVOIXHPQSWWVMNSKTEYGTUSCACELAZJSOOQCNWOOYGDCELNCZGITAAKDRXSIXPBSDVJQXUWFIBYHLOZGUTVIROHDWVFWGIEKIEELAJBYLBEGHLYQIEODWNVKFHOTREXFHQJOSQBZLFBKRURBTXQVUEMPCMAKBYTADUMRLDYVPUARQKGWCJ");

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
    msg.setTimeStamp(0.529596799756);
    msg.setSource(58124U);
    msg.setSourceEntity(245U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(78U);
    msg.name.assign("VRJIKNAUUMJYOMSFCIGEZWTIQETPSJIBYLAKAQDDEZTVBPSQMZGBXZRLWVNWXXJSPQHRSNEORGVRHNBADOHAWEZNCPBIGIOHQYPLRTMZXXJUOEIKRVUSTQLKOCPXPMBSGRFUTFOKQYVKHXCBYEHNPNWKMJDHTXQFLFUWKNRYNAOCYZGTHTWJUKMACJFSTSCVLHWIADJAVCRCWKEBIFZM");
    msg.attr_type = 118U;
    msg.min.assign("ZSPGORTUECKWRITJBTABDKBRYDNLVQDYVP");
    msg.max.assign("XDKFMJUNYHQONGPOLUGIXSAKLXZSVNZLQCVKFHBMBVLRUEUHCANIBOUYDLVJAEZWYRHFSECYZCKZAJOMSWTJBSEMQHKIEJGOMQKLQNAOTIVUYFMUMCFWXYTTELSVXYWLIPDXTUFJHQGWPFLYIXWZRBBBSNFIHBGRFPEDZIJQZBGZESWSQOUMTDUGDLPCGHRVRKJ");

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
    msg.setTimeStamp(0.166684129858);
    msg.setSource(38195U);
    msg.setSourceEntity(77U);
    msg.setDestination(33481U);
    msg.setDestinationEntity(98U);
    msg.name.assign("UJELYBHMNXUCYEJMWCNMVAIQOHELDLQQQWNPWDCXOV");
    msg.attr_type = 168U;
    msg.min.assign("SHGJXPCWJDVYTBSONHEAASIZBVKGQNTBWUUDZOPAZZJJTVNUUWRFSEYKYLHTOFTBNVVC");
    msg.max.assign("BHZHREEDUZHDWCYOMAVVSFFVPSTVEBFWYVULGDJYLMJCMHGJNTOHCKJUNUTZMTXVTFJSLIYBKRRONCBKOFCOKJENFMSXRQXPOTFPQJIRPPHYJQIVDWGWHRESKYESHSGXRLUAKIGOCIGDXTMOFSGKSXDLYCOESWADQTFZMGUZAJQBCIUHPNNQRZNCXLEBYKNBZWXBQCQYBIWKHBRIZUGTPPDWN");

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
    msg.setTimeStamp(0.630260412773);
    msg.setSource(41058U);
    msg.setSourceEntity(221U);
    msg.setDestination(51040U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("DKPJZCYUMNSWHTEXZPXTFHDMZWTWDSBVHWGEKXIFZNSVOPVGOXUAJRCUFSSKOLKNCXAUIMVVCCKKGDDMQVMAYRVPPGVTNAOFQYWMLGDOSIJAGOMOIGXTRLUHSZWUQKPRWBRQUQHAKNNTGINAZRUJCOJLLJYJZJBTBDJLRVYFZGBAXPIHLCXFYXTSVEYLBMQMYQCEOTLPFQIYBEDJNEQIPBEYGCSAHBWNTIA");
    msg.predicate.assign("OSWCYFDSFOXHROXEBTKGWJWFIQGIVYYGAZNWRYNCOCMQWCHPUSITDELNSJSRVZMFPJPQVHXRIGAQPEXLQIBXBFYUZVUWNKWXNCDEPXHGNTXYU");

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
    msg.setTimeStamp(0.267453580077);
    msg.setSource(23538U);
    msg.setSourceEntity(136U);
    msg.setDestination(52645U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("YCMYWVJPIPJOSLKHFKPRJZFLWYIJTEXBUWQRBRQLTWSBGWDOBMFIKKBHAEAWQJIHHGNZLVGIVGIKPDDKQPYMYEAGKXDSAAXUHZNDGUSTMLTOKSHKASBVNPOHVZFDXCZMZBPTFCVMRJQRELCHUTURZEJZBNOZMOYG");
    msg.predicate.assign("PJFOIAUIFSYSZXTHRLYICXENZMSYDSCYTORHBSPWYDRUUAMPXNKHJRBNLLJBEHKKAOEXOKVUKMWMGTQFM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HMKGRMWHVJHQPHCXAUUMWAYMZGRZWKQBIYPSQXRXJXNCRXJRDTEQZBIVYEBDMSTUFAOGCFTFAOXZKPPUDCCYULCIHEUABHJPWTPUNWXMRHGRJVLFCUSNOYEWKFNQAFQGRX");
    tmp_msg_0.attr_type = 234U;
    tmp_msg_0.min.assign("UTQWZQTUFXVDIQCXFASJRROYQFCJSXUUBPKEXJLKABBDJSSLMDPHKZNSCHYQDJRBWGLWWMWRLYZMEFYENZIPRPVKALIETGOXIKDGZAMDNJIXQNKCMVPABBGOIYZHHGWOXKQMMXSTXJNDMYEPHOMIHJYZFTAGFHWVCUVOAILBELZ");
    tmp_msg_0.max.assign("OAQYTTYKXBZIUAFPQUEIAADMEJYKFMOGMVEAFGQMCVXSPLXGZGKBEROXJBRGZDDZFNHJZQETQBACZDMEUPQXHTNWNRFGDHVRYSVKVMNFCZKSJWYHCDMYWELKQSPUXBWIEVVOILOPIWRTJMYLOXRJQUNWAAAJDRPFLJUBYNPZGLCHQHLBZKGQTSSBHDLZTXXWFNUYIVPGIUWMCGXCNNOSOWRRLCTLSIAMJHHSRFTUUKYTS");
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
    msg.setTimeStamp(0.945152763249);
    msg.setSource(18050U);
    msg.setSourceEntity(219U);
    msg.setDestination(42086U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("KZXXPTEXIFVUSHVQJXDITTDQZVGQHUXCBPYOFCSLUPVWUFGAQSXICPEFZUDNOGDBOILFWEMBXRZIAGKTRXASWJTTEMOWJJIHHBMMNAAH");
    msg.predicate.assign("DKWUZTUSCTGYVXHMPKBBORXZRZNTODRFPVJCLSZNSVGFVOTWUDZUXCQGGMYIJTWHWDZKRXJOFIXLTWBUBLHXACBSFSERKEHAPBNAVUBEQJEOYGHKOFSWDFWNZIYHYIFYEANCEKBYLRQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YMGVAFMYCBMTWIMDGULPZKLPDVLRZURLSAKVNVFKFFVZXXXBCDXWFTKNKZZDKGUAXBAZPOZNMJGOBKQCQSSOMPBPTCTADUNQPN");
    tmp_msg_0.attr_type = 214U;
    tmp_msg_0.min.assign("ZURUXBUIELRFKNWDFSKQMINFDAGCWKVUUFKWCOWEHIGFBEQRZYAOXBHBJQUYITZGEEBRVLSHZYDHYKPDAHTTYSODCPNMFLLIFPXYVSXSKJVTAFTVBJMWUQDA");
    tmp_msg_0.max.assign("QPWUAWEEVLIHDXTHUUNNMHNKMLFXGVCPJIOPOQBTYUIGLQWBXRYMZRDESCJWCQJCFLKAGUCRVSQZCAMABKTZMSVNOGZWHHQNKUWOALEXQZKGYLVWYLNTJZHFTFGRMJYNXWIZHUPCPJAY");
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
    msg.setTimeStamp(0.975699135766);
    msg.setSource(10858U);
    msg.setSourceEntity(136U);
    msg.setDestination(24934U);
    msg.setDestinationEntity(236U);
    msg.reactor.assign("CWWUYGNTVHGMOLVFPTFNHLHZMQZCFVSJYZXSCVDOIGORBHKZWKPTAVLKLGJUXPALUPBNTOKXHPWSHVZIKYNZIPZBMEEFYSMDJQLVMLTTP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LQWSSVRTHMCEQZRFXQOWLTLOHDVZEOGFCMJEIULDQNUTUECOYZYMTYBIKJFYTKEUAHFSJAQHDHNPBKSIMRDHWBJNKCLOLUZFGIWWXJBSSYLWGFUAXZYEKWIALDMVXTOPOLDCMEPNJPWCRGOSVAGJBTVFTAMCAVPVEZRYCRBMZQNUXGYNQKWBHEXFLQISIGPJMDVRXABUTZJQUDOKKESYNKGVHXDYZQG");
    tmp_msg_0.predicate.assign("TFAQBPKSUUBSABNPPGHBCTCVZCQHXGZJCHYGGFTIHTAWIKDVIVUWACL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QBWDRMMXUCNANIBPJJHYNSWCVYOLANCFDLBTJIOOPLFHSHBGBUXHQLEELVYJULHPTTZYGROVDRYZRECZEILEUZEWGAKWFZKKG");
    tmp_tmp_msg_0_0.attr_type = 234U;
    tmp_tmp_msg_0_0.min.assign("MFZHUJGDAEEHJCVUPLMYJQNDAJTCKIZFLOXWHOTTRMKZEJVQJSVCFOYQOYJXPBBYIQQYZRWHGGIMRHMGEDCMRAXOMNSZBKKFMOURNVSPLABKASUCWGJFVC");
    tmp_tmp_msg_0_0.max.assign("NQYHKFRCTNMAKBZHNUFW");
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
    msg.setTimeStamp(0.328303955053);
    msg.setSource(24576U);
    msg.setSourceEntity(58U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("AYMPMGENFZVWKGWOAZBNXHYHLZKOIVWWXRPBLJOMJBJEVZKMCSXVRRHPQFHWAKWYKYELUDDPSJYTNTSZNXQWFDJPBTOKC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UZLTEXMFCLJYMIDDQISXIARKPMGPPGZLXGVRYCPWUNPXESB");
    tmp_msg_0.predicate.assign("IUVXODAVUPCIJYETPCFXTCNKNMDKMVEXPBJVIXWGVHIDYTGYCFAHBYMACRWYTWSAPNTMJZMTJABHENGEYQESYYWKXLRZFKLUGNGIKQRSAKGISOMDSDQGVUOCUBIZUFAHHERRPFYZGXFBVULIFJSVFUVHOWQTHNKHVLOQPXPACUPTAHOOLWQJDSNZEHELOILZMPEESWCZFJKGWLQBSQGMDLQDTZRWCSJOMRK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XLCNZBZXVJRREXCDHODMRCHBUNBPYSGZSQIDQCGTSZBWLTVNIPMKBABAWUIJXGMFLKFLPJSWLILCBAUFEVIJUEUYHZNVLQDRZQCFNMOAYNAFYEWQIGTAFIAIXXYYTUSRZERDOVWYQPMJMAQVHNLUVSZRKWWEPGXKLAYHGCKSFQMOTSGKPGTEKJBHCRMWJRVOUPJKCPOSOTODJIDNOFQQGNFDKFPTHBNHHJYXHCLEGVZYEXZVPISMOEDUWARTK");
    tmp_tmp_msg_0_0.attr_type = 40U;
    tmp_tmp_msg_0_0.min.assign("EWQTWBUKHAKPPFMRQRPGXMYPOJTGLJVTLNCJGOQZNUIYECZZSFUQCUXHRLJADRBJCFNTVPOVLUVGYLBRYCZWBYHMZFJJVDQAXCGANBEHSNJKRM");
    tmp_tmp_msg_0_0.max.assign("LMARGGCSNTNGKAIPBIVGHZYCSXOWBSYXQEAGZWKXDZCREVCZOPUJAIIUGYLGVHMBXUUEKEQOTLHWNGFCLLZBYSAKKATXFCBJUIKTRATSSAPBCVGZCMBDPXFEKHMFWRODOO");
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
    msg.setTimeStamp(0.332246228449);
    msg.setSource(41968U);
    msg.setSourceEntity(5U);
    msg.setDestination(39284U);
    msg.setDestinationEntity(96U);
    msg.reactor.assign("PHEDDCIGITWEKYRDJLOPKGNMWVNTRFTXSOJXMLUXJKSXGQASNKUXZURURCMANHIHCFMUKNSOSEEHRADLRBMEQSAXFMOQWYMFVIYTDDLM");

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
    msg.setTimeStamp(0.917354597531);
    msg.setSource(21516U);
    msg.setSourceEntity(250U);
    msg.setDestination(7162U);
    msg.setDestinationEntity(172U);
    msg.topic.assign("OZTOIAXHQRSGSEKAADNXJMYPGDEWUWDYSQTMBSGEHWZBVFKLCHUBKLBGQXZLZYBGORIVGEKRQNBWXPHAMVYDZMSBAFOHXCCPESXPGTLVPNIUBINGRFCMJPGMYKWVWTLTFNZSTZDORVQVOQDATQOCAMYJZUWYUOJJQYCMFMVAFUTRFXRKLHBXQERXSSEIJYJVOFDWZWLHJPHIORJIDCXLICQIMSHNNPJNWNYFTFARKAEPVULIUTPBGDEUDLZK");
    msg.data.assign("RZZLQQFXKPQRUKPDHSUPHENFLIHYEGIUPZIEBRBGNJTINBBCXKUKLXHJHL");

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
    msg.setTimeStamp(0.369598551185);
    msg.setSource(27578U);
    msg.setSourceEntity(43U);
    msg.setDestination(1311U);
    msg.setDestinationEntity(37U);
    msg.topic.assign("AYSIMTHOEAAVJHJMAHURVLSZOVNCDPBQBJZLLRRK");
    msg.data.assign("TWNHUKNJKUXXSNDBCJKALFODZDDRDLLXOJXBFWEWPEYGOIWXPMDNZFQSOJOOQSFHSQMTGZQRKLOHEVSIRAFVYFYBHIURRUEBKLEXZGSTXDVMNQICEKMBTZEUZYFADYTWINWZLOATQQTRQHRJBKHKCXSPJGLTVACMLWWBJA");

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
    msg.setTimeStamp(0.779390850586);
    msg.setSource(4800U);
    msg.setSourceEntity(30U);
    msg.setDestination(8058U);
    msg.setDestinationEntity(89U);
    msg.topic.assign("LMDHBMBXWLQTAJVBBEXFVMORKNXISWAREMCZEZSDNMDTOWKKFTXOSUKZDNOIADXTKGFCIUHWYJCGAPNRNRNXGPKQJPDZQGHGQVIBTFSPRANOJSOLRWCLJWZBEPHMLCPUNPYRUCBSDNZGHCFYBESVJMQI");
    msg.data.assign("UMWCJBREPERHEQZZZGUMUGWBNFCEYDSWWHHGQ");

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
    msg.setTimeStamp(0.53331047749);
    msg.setSource(5544U);
    msg.setSourceEntity(163U);
    msg.setDestination(56589U);
    msg.setDestinationEntity(69U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {-7, 118, -60, 126, -39, -114, -112, 124, -92, -64, -21, 35, 12, -118, -87, 0, 9, 17, 90, -6, -61, 35, -82, -118, 39, 71, 0, 26, -119, 22, -2, 44, -40, -117, 79, -3, 108, -128, -125, -11, 25, -126, -58, -69, -60, -103, -24, -117, 15, -98, 54, 26, 19, -14, -31, -105, -54, -106, 20, 96, 50, -37, 61, -54, -94, 122, -38, 28, 9, 54, 56, 52, -16, 26, 118, -6, -107, 106, 64, -51, -41, -6, 38, 89, 116, -125, 97, 123, -1, 25, -123, -40, 93, -112, 104, 33, -52, -91, -13, 9, 93, -46, -31, 55, 16, 26, 11, 90, 104, -8, -10, -115, 78, 50, 84, -97, -84, -89, -128, -54, 72, 40, -13, -38, -102, 71, -5, 22, 47, -71, 38, -118, -78, 80, -63, 5, -88, 124, 39, 53, -62, -77, -106, -26, -64, 102, 22, 50, -1, 108, 35, 112, -51, -6, -27, -45, -65, -93, 109, -97, -6, -21, -100, -29, 106, 72, 20, 116, -105, -118, 19, 15, 26, 105, -39, -26, 0, -98, 120, 94, -121, -57, 89, -106, -62, -95, -63, -82, 99, -58, 126, -104, -18, -105, 51, 114, -35, -33, 4, 26, 122, -112, -25, 18, -15, -6, 67, 53, 101, -123, 76, -6, 61, -88, -101, -110, 91, 77, -118, 11, -8, 12, -122, -75, -39, -82, -83, 91, -105, 123, 0, 33, 116, -29, -91, 16, 5, 31};
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
    msg.setTimeStamp(0.108657531007);
    msg.setSource(5401U);
    msg.setSourceEntity(249U);
    msg.setDestination(2927U);
    msg.setDestinationEntity(25U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {108, -120, -30, -36, -98, -47, -88, -42, 51, 125, 107, -22, 22, 41, 22, 37, 112, -116, 91, 8, -26, 64, 46, -48, -21, -114, 37, -15, -121, 34, 76, -112, -100, -29, -100, -58, 31, -109, -61, -110, -59, -16, 47, 100, 54, -30, -124, 21, -50, 62, -84, 74, -53, 10, -126, -122, -101, 47, 95, -112, -9, 122, 106, 7, 32, -16, -101, 75, -97, 94, -99, 39, -95, -114, -111, -119, -51, 22, -113, -90, -31, 78, -80, -61, 126, 27, -81, 41, 43, -43, 62, 15, -24, -122, 66, 72, -85, 119, 41, 14, 14, 68, 0, -96, -39, 47, 61, -45, -97, 111, -31, 95, 17, -39};
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
    msg.setTimeStamp(0.962500545178);
    msg.setSource(26875U);
    msg.setSourceEntity(157U);
    msg.setDestination(43764U);
    msg.setDestinationEntity(205U);
    msg.frameid = 60U;
    const char tmp_msg_0[] = {-54, 34, 83, 85, -37, 92, -50, -87, -24, -84, 14, 54, -69, -48, 43, -15, 23, 118, 105, 58, 6, 99, -97, -82, -2, 4, 79, 25, 106, -120, -11, 32, 113, -38, -44, 31, -93, -42, 21, -67, 78, -48, -30, 46, -35, 23, -118, -9, 87, -93, 75, 60, -97, 112, 88, 35, 91, -80, -68, 112, 104, 15, 78, -50, 33, -34, 116, -114, -47, -14, 53, -98, -92, -117, 10, 106, 53, 98, -120, -34, 57, 110, -77, 25, 117, -97, -17, -87, -26, 94, 32, 98, 77, -111, 60, -5, 64, -66, 83, -122, -37, -71, 2, -60, -79, -69, -15, 71, -72, -102, -100, 22, -65, -123, 11, -64, -37, 43, -75, -73, 19, -71, 112, -58, 112, 2, 52, 105, -59, -75, 2, 93, 31, -22, 28, 114, 72, -30, -65, 69, 52, 22, -83, 78, -46, -9, -31, -69, 75, 58, -33, -37, -45, -41, -75, -14, 14, -98, 71, -32, 33, 96, -8, 120, -22, -75, 25, 118, 85, 51, 7, 65, -25, 114, 15, -30, -44, 76, 52, -118, 59, 62, 110, -109, -3, -40, -54, 89, 51, 120, -123, 42, 22, 61, -34, -79, -26, -36, -80, -56, -66, 93, 58, -81, 94, 36, 72, 74, -87, 112, -30, 34, 65, 1, 86, 52, 32, -72, 60, -12, -55, -102, 86, 48, -56, 98, -106, 83, 100, -45, -115, 14, -100, 22, 88, -44, 1, -50, 99, 58, 122, -62, -69, 99, -40, -17, -38, -59};
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
    msg.setTimeStamp(0.39135534067);
    msg.setSource(4788U);
    msg.setSourceEntity(87U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(102U);
    msg.fps = 236U;
    msg.quality = 235U;
    msg.reps = 202U;
    msg.tsize = 6U;

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
    msg.setTimeStamp(0.824619504875);
    msg.setSource(42180U);
    msg.setSourceEntity(176U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(56U);
    msg.fps = 15U;
    msg.quality = 77U;
    msg.reps = 19U;
    msg.tsize = 236U;

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
    msg.setTimeStamp(0.0510498735714);
    msg.setSource(5907U);
    msg.setSourceEntity(77U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(28U);
    msg.fps = 127U;
    msg.quality = 170U;
    msg.reps = 84U;
    msg.tsize = 190U;

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
    msg.setTimeStamp(0.868080098757);
    msg.setSource(44972U);
    msg.setSourceEntity(20U);
    msg.setDestination(7481U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.20799635182;
    msg.lon = 0.661856794475;
    msg.depth = 193U;
    msg.speed = 0.270950889856;
    msg.psi = 0.526840616395;

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
    msg.setTimeStamp(0.943826779288);
    msg.setSource(30501U);
    msg.setSourceEntity(122U);
    msg.setDestination(6200U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.236909222464;
    msg.lon = 0.0207759882083;
    msg.depth = 203U;
    msg.speed = 0.970265599222;
    msg.psi = 0.265830049474;

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
    msg.setTimeStamp(0.946907462261);
    msg.setSource(38098U);
    msg.setSourceEntity(168U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.865959874313;
    msg.lon = 0.21002517817;
    msg.depth = 88U;
    msg.speed = 0.240156736112;
    msg.psi = 0.0523233239735;

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
    msg.setTimeStamp(0.692616831917);
    msg.setSource(27308U);
    msg.setSourceEntity(53U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(155U);
    msg.label.assign("LBZBESRKMWMYPUSACKSUGZWCJRHQUUAMUXYKSRHLQLIAPNLZCGZLQFYCYUQVGEEOJIDSVJPKNFGBVKPXDMJQWGKFJPFDMAHXZSDNNVGECYDIHDXDFDHZSWZPWGIAHOBCBEWVVSXRMQSKTIWTFBHRZULWLOHIRKAHVYM");
    msg.lat = 0.198909772377;
    msg.lon = 0.017600122126;
    msg.z = 0.884244323569;
    msg.z_units = 105U;
    msg.cog = 0.137357976363;
    msg.sog = 0.484810238369;

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
    msg.setTimeStamp(0.491896358761);
    msg.setSource(28641U);
    msg.setSourceEntity(79U);
    msg.setDestination(34662U);
    msg.setDestinationEntity(175U);
    msg.label.assign("EHGXYAWAAQAGKCKIFIKWRYTMECZWUQWJZOBOISLWHZUZGRQFYVYCAJFNBMBJCGKUZFTASLSPMFATRKLIXSSMUOVHJQDNNFXEPPPHQUDJMZOETIZBYWGHXPSFGBFOMQZTPHRANPKNBDGTYLPBZLCHLYZUERKCWMNJXVVWOGUDRTPTYVAXUJKCWVRRNXDMEQLLYEBX");
    msg.lat = 0.955396801588;
    msg.lon = 0.216402276853;
    msg.z = 0.841341935977;
    msg.z_units = 128U;
    msg.cog = 0.868820021471;
    msg.sog = 0.617162982366;

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
    msg.setTimeStamp(0.187864882887);
    msg.setSource(54337U);
    msg.setSourceEntity(171U);
    msg.setDestination(48057U);
    msg.setDestinationEntity(194U);
    msg.label.assign("DONNLGPYEDFZNBQZKWZTJHGCIYYTEECHYRCIADUT");
    msg.lat = 0.91379100674;
    msg.lon = 0.632666308371;
    msg.z = 0.171590920762;
    msg.z_units = 216U;
    msg.cog = 0.867002358537;
    msg.sog = 0.739160700463;

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
    msg.setTimeStamp(0.231284931964);
    msg.setSource(58881U);
    msg.setSourceEntity(54U);
    msg.setDestination(45816U);
    msg.setDestinationEntity(47U);
    msg.name.assign("TOWXNGFAUJTUXYKQBTUFFYSGXFZPZKHIFHVEQRPNAYZPCGAUFHTLFRXCUEZBOTCNTNOG");
    msg.value.assign("LPMCVEMDGCIFOTTHMWYZRGIAEPMKLZI");

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
    msg.setTimeStamp(0.730727099503);
    msg.setSource(42056U);
    msg.setSourceEntity(219U);
    msg.setDestination(31417U);
    msg.setDestinationEntity(164U);
    msg.name.assign("VHTGSHJDQCVPEXZMCUNZDMSEYSANOUHNWPIYYFZGDYZQQTOSWZGHVQHVBESCCTSPLDXMIWVQITKKDMPCUTRYCWEKGRPSWMWXIRETNFNBFQJWIRVPLBJKYZLZYIRSLOAVVDFLHNBJRJICTFVXKMJFNVOXUHXUWRLNIGRFPCJBLKODZKYAXUFLNGBKGDWTSTIDGMFBUUDZIQOQRXPLHJRKOJBMEMGFYAWQBCEOAPQ");
    msg.value.assign("LOTNHXQZETTSPEIDZPTZMBRREVFEQHIRPHBRPJBQPZJMAQDOXYOMHBJXIKUZGVZRTDWTPFWTKMZINNALQGLUQAUNYMEBEVBYYGQOKZRHUVWXFYPGVSIBAXJJQNQVVIGFFASUOJHTGOELCXOOWICSSYLUDJHZUKTWNEISGLGUXCFCLJDBCGUYNMMYXROHDNW");

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
    msg.setTimeStamp(0.111497689633);
    msg.setSource(8192U);
    msg.setSourceEntity(26U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(217U);
    msg.name.assign("SDUGGWRUSNXOXLLWUZSEKYTFPLDOARPJODKMORBRJTGTIMKSVBDNJGSLQVSFWZCOQZQCTIGVQXFGEBUQTHBCOAUYPYYGRFCRHJNVWWVIJQDMODRODFHBZEOMXXSQSIVRFWBLAHYNYHEYDEKPHLUKTFVJIBBLMAVFNXYGQZJCSKC");
    msg.value.assign("MRUWHCLPVHVYOVMVXFSIPMPPALEYHSXKPWNAXJDDIWLFMUADECHSQTEOXHIXIBFYOUUKKUUYCZFFMOUQDHRWROPNZXSCGAJQMZQYAJBWKRCFEOKUDQMGHYJCBDWRMDZCQRCTOBWDGNLSXKUQBFYVLTTKCEAZMCOYZJQEKOQRJBRGJNASPTWAXGIGBEBLJRKXNAHDZSTAZYVFNLWLPNMNJTIEWLEQBYISZIBKPVTGPGVH");

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
    msg.setTimeStamp(0.047744923823);
    msg.setSource(23943U);
    msg.setSourceEntity(239U);
    msg.setDestination(16048U);
    msg.setDestinationEntity(167U);
    msg.name.assign("JZMIKUJMLQJHHNSQHDWCEBXLGMGGAMGMMDYNXSQGFEZXIB");

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
    msg.setTimeStamp(0.903705737655);
    msg.setSource(31093U);
    msg.setSourceEntity(213U);
    msg.setDestination(29165U);
    msg.setDestinationEntity(246U);
    msg.name.assign("VQIFKJBUYDZVCTQJFQOLBMOSXRYZWAWNEJDNNDASABVIESPVYUCXYGJQTPVKDPOXERMSXJACLVEORUBCACIWLKVFOSRAYXKGDUKXKKPTBZNYGHJGQWRXGUELMWNHAGHJCFXSSWMQFTIEADSRLIDQMGHWETFCKPAHWBMQQKVXTINPEDLPFTRDZOGCLIVSZFQY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TDBCPNGAXROKNHLTZLDOMMXQYIASFGTLUMIEIYEUWVBFZVYHLJBXMTXCGWRIUGHEODQJEUVZNBKRULVPSPOKPDQMBNPONPLYFMKCAZBSAIRHDCRERHFCZINHLGUSKYJWWXVJNGSRODESCFIJBMOAEKHHZTYVUEDOGNEBCPOKLWS");
    tmp_msg_0.value.assign("DNDAXRBCIMUVFDWRTGLKQBFMGIURFDYFIPLHERHKOELTCWCLLTGPZZIWOVYWVYJATSHTCZWNFLGIZKJHMYNPZOXUXMXBSYBHCFDFVNK");
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
    msg.setTimeStamp(0.942948628531);
    msg.setSource(44985U);
    msg.setSourceEntity(92U);
    msg.setDestination(64104U);
    msg.setDestinationEntity(69U);
    msg.name.assign("JZKFZARBTPBCWERKQFBMISMGRRKKUNLWRPZASJQKTZNALFLF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VELRNUAWJWOUTTUIEBGCCNMERPFFJKWLCJVACECMYFPRBIALEROZWVDYFDAZBVTPSGNQUGSANZLSJSCEJXHGNPGDNQUDDPKIUHXQSUAYWUXRFLXMIRXLUWVXMQMQFXJZGWYQWYHRVSEMBFRAYBLIETV");
    tmp_msg_0.value.assign("YLSYJHFFRAGKCMGEGQRUIAFTVSPNEPWQEAVVUSODAKFCFBTSSBCUQGOTRZUTOMSPQHXODOISBDHJQHFUZLMFFVCSJXECZWEOENPXUVUIVFPKBECDSAXLNWJKKOWNWRPNTMDQIYKUDRQOCTTGPLIPHYAUVGZJQJZBVHQAXPXHLYTXXKIOZARZN");
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
    msg.setTimeStamp(0.398267214146);
    msg.setSource(54563U);
    msg.setSourceEntity(24U);
    msg.setDestination(49699U);
    msg.setDestinationEntity(182U);
    msg.name.assign("KFTFXHYKFKSKLSJKUPMXNOHZCZGRNMMXWUOXGYDFATOIZURHAAJQESIWZCKSBINEDPPXCBELQCFDOVTVPLTHYEZWVWJAPDMBISGQSFIWLV");
    msg.visibility.assign("MZTXKHOLUBJHXNTUESKXDWZUXJWPPNRISYAYQBGQEXPTJMGRGQHNHZCVSWFRAYLSDNKHFCYXCLLKSMIJQYTZTLUKZJO");
    msg.scope.assign("KVSUXHONNDVBXAGNGSQNWMIEUDILKBVBPEKOKREHEYJTOCGERHJWYZJCSEQTIJKZHYLXIWHOERSXGSJNMNUWPFUMCNACSAXMPWWFLSEYXGRDLMBFZTLMCUDWWCOBXUJKADXVUQLMIJZRBRTJFPNIMVURHZBTITKLVQALU");

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
    msg.setTimeStamp(0.302730131257);
    msg.setSource(33694U);
    msg.setSourceEntity(112U);
    msg.setDestination(57591U);
    msg.setDestinationEntity(204U);
    msg.name.assign("JUAVFZRSEYEPMNEEHVSBHPYSLCBCDJUNGGAXQWFKORPJDPXYEXFUCIKQTPVMQFS");
    msg.visibility.assign("QZLYVVFIHVZBXUUWUOIUZAZRSHZSPECITLKMMERURIIGJDAJGCBXAYRDODPROKULEMFCVSWPWBQGWSIAMTJAJCYLFGQTAEBLJKVOGPOYSOXNASYXVCKKUSXGJFQMQBESWIECHXWJJKVAPTNGTXSWMFFMBLRHETBYYDLITO");
    msg.scope.assign("XAZYUJKCPVRBPEWBVBFLZMMYODQQHIAYLPITMIRVQVXLUWBLBM");

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
    msg.setTimeStamp(0.864352145767);
    msg.setSource(17520U);
    msg.setSourceEntity(145U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(142U);
    msg.name.assign("UTKNZFAHTXWYRPVKIILASIBCZTVPLYQOQECVYIOSNSXVWMWIQOFZTHBIGJGNNUOVMNPSWSKIQEMELQFRIHSOZBEXUPJLEYIRUKHYXHCMOKGCWMRQP");
    msg.visibility.assign("GKKBOGNLWVMOARLIVQOPJZZBMPGTVNDHNWPISVWIQHJZCTZEHXPTVUFUAXLZLDWPFOPNNSUBVZOOQGFRDTXFSAFWGWXTKDHLVTWTGONZNZOQIJRGCWAJCCCEYJMIPFQOLNYJWYVCZUG");
    msg.scope.assign("DZLVOZDEAFALEOFOUUVBPTSBVQPLJPWGHRJKZURYLMKZIQWCTPHATXRIHJIWPLRKUODZXFPRNCHDVMSZS");

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
    msg.setTimeStamp(0.00681403684559);
    msg.setSource(51321U);
    msg.setSourceEntity(204U);
    msg.setDestination(25117U);
    msg.setDestinationEntity(212U);
    msg.name.assign("CZIECNIAJT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FGLAXVULSUSXJAKCYCSMVMAIARPBYGYKLAJCKTSYIZDXKTCHMFVVWPJXVNVUOPISXICBLLQQTRHQUCUBDNDESTQGGUILQTJPX");
    tmp_msg_0.value.assign("GRHSUQJLGPERJKPUJUASPYNCBNJDGKAKARENSAWRVLSZTANDUHYMNAQGTEIXSCPGDVDMPHYVMDRLQZWURFRIHBWAAFNGVO");
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
    msg.setTimeStamp(0.594793509685);
    msg.setSource(21813U);
    msg.setSourceEntity(209U);
    msg.setDestination(49878U);
    msg.setDestinationEntity(249U);
    msg.name.assign("NVJPZICZBLIBERGAKXKOXHMTHZSNIXCUAPRURTWJDORZHIRGFACMKGWRPAQVYQMVFTYXLWJRKOLWFEFGAASVLAQCMDYWHFBWUUEZYGOAWMKCEBHOVTQSZGPMBBKVJSTNXNUTRPNCIXJSDXCEJKEVSSQETGOIBDZDGYOPA");

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
    msg.setTimeStamp(0.42239674356);
    msg.setSource(43804U);
    msg.setSourceEntity(39U);
    msg.setDestination(30436U);
    msg.setDestinationEntity(47U);
    msg.name.assign("IRJWVBCXUXJJUYJKILFIUOCEINSELLXPOAAZMTXZIXAMHLOALMAZQBLZAGRKIADEVEYVEQGDJGRFTAMNUEHRWN");

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
    msg.setTimeStamp(0.513860175715);
    msg.setSource(57443U);
    msg.setSourceEntity(125U);
    msg.setDestination(11194U);
    msg.setDestinationEntity(26U);
    msg.name.assign("ZXPXCDOEQYZSOEKPJRCBZJH");

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
    msg.setTimeStamp(0.267411764237);
    msg.setSource(9875U);
    msg.setSourceEntity(9U);
    msg.setDestination(61159U);
    msg.setDestinationEntity(171U);
    msg.name.assign("OGFIPBYBWJFOZGIYRRSWGNBDDSIEFEBPFIYQXCJUYOEVRZURIMAQMXOTTMQWYQUTSHNCKVAMCPKDPIAAMBCGKYGZIJFJYNZKFRQGSYVOHSQUWWLXVNLOIURLGMRVMLJHVDLPWHWORAZHZVTAXSLXNSFN");

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
    msg.setTimeStamp(0.388293168804);
    msg.setSource(27207U);
    msg.setSourceEntity(11U);
    msg.setDestination(2053U);
    msg.setDestinationEntity(18U);
    msg.name.assign("UMKDKEBFLERFYNMC");

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
    msg.setTimeStamp(0.219823604226);
    msg.setSource(19515U);
    msg.setSourceEntity(57U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(82U);
    msg.timeout = 2374298803U;

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
    msg.setTimeStamp(0.30103519752);
    msg.setSource(23091U);
    msg.setSourceEntity(149U);
    msg.setDestination(45528U);
    msg.setDestinationEntity(105U);
    msg.timeout = 1355450069U;

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
    msg.setTimeStamp(0.858609081586);
    msg.setSource(15829U);
    msg.setSourceEntity(179U);
    msg.setDestination(59273U);
    msg.setDestinationEntity(133U);
    msg.timeout = 3084943811U;

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
    msg.setTimeStamp(0.0413459595253);
    msg.setSource(2892U);
    msg.setSourceEntity(253U);
    msg.setDestination(31219U);
    msg.setDestinationEntity(228U);
    msg.sessid = 1793928306U;

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
    msg.setTimeStamp(0.0359417959822);
    msg.setSource(3569U);
    msg.setSourceEntity(98U);
    msg.setDestination(61769U);
    msg.setDestinationEntity(109U);
    msg.sessid = 2269027926U;

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
    msg.setTimeStamp(0.44635648784);
    msg.setSource(45545U);
    msg.setSourceEntity(166U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(163U);
    msg.sessid = 12496214U;

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
    msg.setTimeStamp(0.466150374849);
    msg.setSource(48757U);
    msg.setSourceEntity(253U);
    msg.setDestination(34637U);
    msg.setDestinationEntity(147U);
    msg.sessid = 4001431030U;
    msg.messages.assign("DOFAHOJZKAPICFPZMBUQHYIUHGXQQSETNHFFTMKMMWJOQEXDERFZKSOVCFQXLZISWBJIRAOZSFGNOLUZDKZJCLHJMQPTORGHNBYMBIOTVSNU");

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
    msg.setTimeStamp(0.542507270823);
    msg.setSource(61000U);
    msg.setSourceEntity(89U);
    msg.setDestination(18622U);
    msg.setDestinationEntity(237U);
    msg.sessid = 647668977U;
    msg.messages.assign("MRXLXPJXFNSMJRPGBEVXNOQBDSUGYHQNNWRQHJOFKTJKFFGYYGGUAXHDQVGIYYHUXEFZIQKO");

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
    msg.setTimeStamp(0.856474839232);
    msg.setSource(22976U);
    msg.setSourceEntity(225U);
    msg.setDestination(23953U);
    msg.setDestinationEntity(31U);
    msg.sessid = 1064825521U;
    msg.messages.assign("OKELPUQCTEVBDOGRRRXYIBWIUWBBLWLEGMGZAPHUIDYVZSWYDDJNSKCCHKOMIYUYQSOJZKQAOELNGSFCWE");

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
    msg.setTimeStamp(0.300630743718);
    msg.setSource(15742U);
    msg.setSourceEntity(160U);
    msg.setDestination(41929U);
    msg.setDestinationEntity(122U);
    msg.sessid = 4281660744U;

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
    msg.setTimeStamp(0.867403045602);
    msg.setSource(22608U);
    msg.setSourceEntity(231U);
    msg.setDestination(16502U);
    msg.setDestinationEntity(191U);
    msg.sessid = 309723482U;

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
    msg.setTimeStamp(0.398464643489);
    msg.setSource(61299U);
    msg.setSourceEntity(2U);
    msg.setDestination(2217U);
    msg.setDestinationEntity(127U);
    msg.sessid = 3321223435U;

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
    msg.setTimeStamp(0.279523982244);
    msg.setSource(53372U);
    msg.setSourceEntity(124U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(143U);
    msg.sessid = 3954292412U;
    msg.status = 190U;

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
    msg.setTimeStamp(0.697791950305);
    msg.setSource(16022U);
    msg.setSourceEntity(81U);
    msg.setDestination(48150U);
    msg.setDestinationEntity(13U);
    msg.sessid = 3824128658U;
    msg.status = 168U;

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
    msg.setTimeStamp(0.491238364926);
    msg.setSource(27405U);
    msg.setSourceEntity(183U);
    msg.setDestination(56450U);
    msg.setDestinationEntity(162U);
    msg.sessid = 2957984469U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.124399242047);
    msg.setSource(43327U);
    msg.setSourceEntity(171U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(32U);
    msg.name.assign("OEAVXFLEXNHRBXXHMWJVPRYOYDEPSEUWRZZAMAEGWAYBBQTEQBHIPYMFVMDCGOVODQIGSRWLIKXIPVAWBTFHMSNHDJZNKUJYSMLZUSJCYNDCKVRKZDQIXNRIDIOOUCKTIRUOGZSXQQIMXQAHVLSGLSFFVSBANTETUEPFOLYPTRQVQPMAKAWSKNZLGNFWJTCKZJIYHCXEWUOFGQCGLTFKAGDBLDCDGYBTUHVRZNJHUWPEMJPMPLYTCCZUB");

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
    msg.setTimeStamp(0.777909866778);
    msg.setSource(34237U);
    msg.setSourceEntity(181U);
    msg.setDestination(21558U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ZLIFLFCUNRAEYLOKHXQDVWTMMDAZJTYDFZDRSWGPLTMVIPZWYIVAIZMNDERHGZ");

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
    msg.setTimeStamp(0.466827495123);
    msg.setSource(28076U);
    msg.setSourceEntity(225U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(27U);
    msg.name.assign("MFNYJRIHTELHBATNIJBFWRPHSTHGODKHKZMPVJBGVMWPULZEPZQOKCJCIBBRFQCUQFJQQXAXLYASLWEVNJSRNAWCQDETJOAWVSGXKDUVUORFCNILJOGBTYMBPOZFHGCHYQKYWKLDWDMBGIQOZUXOHOEFCYWZFRMYPZPTHKTJLCSDVSSGNXZPUPPNNBRG");

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
    msg.setTimeStamp(0.144135200706);
    msg.setSource(26121U);
    msg.setSourceEntity(134U);
    msg.setDestination(35629U);
    msg.setDestinationEntity(188U);
    msg.name.assign("TTFKLAWAEFZKHTLIKDFDJNJFHRHCQCLZUWYB");

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
    msg.setTimeStamp(0.350291818255);
    msg.setSource(38147U);
    msg.setSourceEntity(32U);
    msg.setDestination(8245U);
    msg.setDestinationEntity(250U);
    msg.name.assign("MWGDQSRMKKTYCTAVVJYBZGVWHAINVTNDIRCOZEQWSLDWMVPXSFNUAJBNJKQLWLDVXMQJNMRCUPNFIYESRVUWPXALZLOQLHNIITQUVBLGIGNDMGYSADSOBCXHQDPLGLJEZEZNHPFYIBJBXZFEAFTFXCOQW");

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
    msg.setTimeStamp(0.0563142118356);
    msg.setSource(57124U);
    msg.setSourceEntity(2U);
    msg.setDestination(55677U);
    msg.setDestinationEntity(99U);
    msg.name.assign("MVOXFVFWGQXKAQPTQXYRXBOHOYDRZLJLZFKGYMCKAZKBUZWCCEUZVSFACUNJXEWXYIQYEXBDPUKCNDZLCHAGPJYG");

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
    msg.setTimeStamp(0.308109158826);
    msg.setSource(12190U);
    msg.setSourceEntity(178U);
    msg.setDestination(46915U);
    msg.setDestinationEntity(233U);
    msg.type = 35U;
    msg.error.assign("TDFSBYKQFTDKRXGSMIJVACUEIKQCGZCBEVGNNINEPOAKLBXPLQYHIAWRLOULMHZCNEMNIPOHFQYPSXCLZGHDBZQCJNQIVRYMOSFMWSEKTAWDCAOZBVJGEVWBWHZBUDOJLMDLRYIWURWRTKPVEVSHGHUWBJFPXHVRZJNLDASZQBYQKJGUMSCYUIFNECBPIXKMPZSHDXVTTMKRNANTSGPQTDXATPRQGGF");

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
    msg.setTimeStamp(0.18361000361);
    msg.setSource(60555U);
    msg.setSourceEntity(164U);
    msg.setDestination(51723U);
    msg.setDestinationEntity(157U);
    msg.type = 136U;
    msg.error.assign("UNZCWAMYAJMOPIBKJMRWLNKLOLRLSQHOCJMHIEDQZSBSYNUFUTVRIWOPZUCJZGVJOF");

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
    msg.setTimeStamp(0.322303418265);
    msg.setSource(34952U);
    msg.setSourceEntity(192U);
    msg.setDestination(29920U);
    msg.setDestinationEntity(229U);
    msg.type = 226U;
    msg.error.assign("MDSNSWANNBLHEGFPQQYMHUINCEMIMDPTXYHYCHOXQUQPLFKPMCZLHDWEQPRRXRPPYVKDVWLFSYYRCKWBZHCCMQUJMGRZEDI");

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
    msg.setTimeStamp(0.432113906056);
    msg.setSource(52599U);
    msg.setSourceEntity(106U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(129U);
    msg.seq = 6458U;
    msg.sys_dst.assign("MPLCCVKZDDRNPZSWPTSFXMRFFTEFSWAVMSPTIQEDXVLBXDSBWQZUQVHCHINBGABXTOSZZTQHYIUBN");
    msg.flags = 67U;
    const char tmp_msg_0[] = {-109, 113, 31, -117, -100, -117, -34, -4, -45, -48, 16, 77, -65, -23, 3, 64, -43, -126, 3, 50, 21, -63, -9, 121, -80, 116, -123, 54, 104, 39, -60, 74, 123, 34, -52, 66, -62, 16, -118, -17, -5, -68, 107, 113, -74, 93, 53, -93, 73, 83, 18, -8, -17, -36, 60, 66, -71, 110, 32, 26, 67, -83, -5, 103, -123, -66, 84, -104, -101, -121, -106, -34, -36, 2, 33, 53, 32, 88, 93, 101, 92, 57, -6, 114, -75, -7, 53, 65, -10, 76, -40, 93, -4, 86, -40, -83, -1, -44, -75, -2, -112, -10, -38, 69, -127, -13, -18, 75, 122, -1, -72, 20, 126, 63, -26, 4, 4, -41, -25, -94, -100, -20, -49, 44, -8, -16, -63, 25, 122, -92, 36, 87, 97, 2, -43, 4, 90, -126, -54, 110, 94, 25, 71, 3, -107, 26, 79, -15, 104, 110, 7, -15, 70, 119, -78, 50, -111};
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
    msg.setTimeStamp(0.104031444805);
    msg.setSource(39378U);
    msg.setSourceEntity(35U);
    msg.setDestination(22161U);
    msg.setDestinationEntity(132U);
    msg.seq = 15446U;
    msg.sys_dst.assign("WGVLMNZBILQWYPSKRALZZEPJHYTQERXQQJUOOFTUNCISXYZWXWGCNQOVQKJVXUYYEVEMYCCZUJSZTFWRNJDRKLPASUNDLCDPJTNAIJGKCIZGBGLAUHASWBXIQNRJSUHQURZKDKBXVAEFVSFDOWYHRVCHWSXGDMAUTOCLHXYFNYHGGAWMFSSKBIMRTJJMMAQTOPFKICOPIBBTPBBYZOPIPEOEAPNHHODDDEMLCFFUTVLDQXWIGVNHFRL");
    msg.flags = 230U;
    const char tmp_msg_0[] = {117, 67, -31, -67, 43, -6, -95, -51, -71, -77, -5, -114, -17, -42, -109, -43, 83, -116, 103, -24, -105, 19, 34, -15, -4, 37, 49, -95, 57, 83, -50, -77, 10, -100, 28, -114, 29, -89, -21, -101, 85, 26, -107, 72, 80, -8, -44, 101, 22, 35, 76, -50, 28, -56, 63, 31, 4, -117, -18, -100, 102, -5, 32};
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
    msg.setTimeStamp(0.366097862168);
    msg.setSource(12882U);
    msg.setSourceEntity(161U);
    msg.setDestination(16530U);
    msg.setDestinationEntity(55U);
    msg.seq = 1338U;
    msg.sys_dst.assign("QERBJVYQUMXUPABHOLDSEZPNGWIMOJPEKZEQGXLYYMCHGTBGOLTGRLIVYCNYNCUDAUEJXXGGJALKOVSUVIPSDCEDVTIJNLQOOLM");
    msg.flags = 64U;
    const char tmp_msg_0[] = {-59, -5, -59, 90, 47, -6, 8, 102, 114, 101, 111, 78, -19, -120, 57, -126, 58, 70, 29, -54, -116, -113, 57, 125, 105, 111, -64, -107, -86, -78, -79, -49, 46, 47, 9, 121, -29, 125, 26, -85, -105, -127, -96, 113, -98, 77, -27, 32, -41, 50, -63, -62, 101, -123, 25, 16, -109, 1, 15, -64, -10, -117, -87, 95, -114, -29, 102, 114, -28, 71, 0, -46, -105, 47, -119, -12, 108, 52, 61, -70, 32, -6, -53, 23, -119, 22, 26, 48, 92, 37, -26, 32, -106, -36, -76, -116, -128, -25, 80, -126, -68, -53, -1, 93, -67, -46, 82, 110, -99, 35, -65, 71, 119, 91, 40, 99, -69, -68, -21, -58, -102, 19, -18, 12, -57, -110, -17, -78, 41, -61, -51, 115, -56, -21, -14, -68, -29, 97, -75, 62, 81, 16, -28, -23, -88, -74, -70, 21, -73, -82, -14, -101, 57, 124, -59, 117, 37, -67, 77, -34, 2, -57, 83, 118, 46, 119, -122, 102, -115, -29, 15, 75, 7, -9, -79, 39, 117, -116, -41, 58, -38, -65, 110, 0, -127, 42, 57, 124, -19, 41, 32, 16, -50, 29, 3, 39, -27, 63, 103, 59, 105, 57, -35, 5, 52, 122, 101, -72, -96, -91, -26, -33, 111, -80, -74, 29, -42, -20, 34, -107, 49, -82, -60, -37, -38, -103, -17, -83, 8, 21, -66, -126, 51, -52, 43, 9, -114, 93, -80, -38, 45, -37, -34, 26, -123, 37, -73, -85};
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
    msg.setTimeStamp(0.433446438676);
    msg.setSource(65468U);
    msg.setSourceEntity(224U);
    msg.setDestination(11769U);
    msg.setDestinationEntity(99U);
    msg.sys_src.assign("MJXSWRCGHVXPUEJGCCQGWSCKMOLBYZEKDIHUHZVNICSAYFLEOBFSDLPVTNNXCBMOZONHDJCFITAVBCQRODKRDDEWUJWUQSALYZFBPX");
    msg.sys_dst.assign("ZLHHQUUPCMDGOOORUJ");
    msg.flags = 140U;
    const char tmp_msg_0[] = {49, 63, -73, 97, -61, 114, 26, -67, 116, 0, -114, -61, 107, -84, -126, -100, -3, -64, 114, -110, -21, -46, 98, 108, 35, -72, 90, 12, 68, 90, -18, -78, 72, 105, 43, 71, 39, 18, 35, 5, -113, -30, -4, -39, 36, -43, 26, 19, -65, -61, 59, 22, -97, 66, 12, -85, 102, 71, 90, 11, 68, -67, -40, 89, 84, -3, 66, -82, 0, 45, -109, 39, 20, -79, 45, -66, -21, 26, -60, 118, 50, 102, -40, -112, 2, -77, 80, -83, 126, -50, -110, -85, 87, -16, 107, 114, 87, 28, -70, 101, -12, -65, -77, 78, 42, 124, 19, 51, -48, -118, -101, 25, 114, 126, -23, 37, -53, 107, -19, -30, -10, -100, -46, 62, 66, 64, -81, 18, 79, 108, 84, 81, 53, 86, 88, 126, 71, -128, -94, 72, 125, 33, 15, -77, -115, 37, -78, -28, -51, -29, -41, 47, -33, 19, -41, 43, -17, -105, 34, 55, 115, -113, -37, -59, 91, -92, 2, -18, -3, 104, -86, -29, -67, 19, 63, -40, 30, 53, 39, 120, 53, -14, 32, -114, -5, -42, -99, -51, 66, 27, -75, 109, -70, 9, -41, 79, -6, -86, 82, -67, -85, -35, -70, -124, 106, -66, -93, -27, 110, -34, 49, -31, 14, 27, 22, -79, -46, 94, -57, 56, -40, 87, 17, -81, -55, 104, 70, -51, -4, -21, 119, 62, 81, -113, -89, 92, -55, 56, -3};
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
    msg.setTimeStamp(0.541680197111);
    msg.setSource(33090U);
    msg.setSourceEntity(139U);
    msg.setDestination(4909U);
    msg.setDestinationEntity(64U);
    msg.sys_src.assign("EOQLPRCNSWCVLRQIHWWGBBDPHQMPEXGMVUJVSHTMDROTUHRFEYMASMXRUTLNYNCIRMLSTWBUVSJYIOIUGQFHCSZGOKZYBLNSFLJQDOHNWKBCYTEFTUAAB");
    msg.sys_dst.assign("SCNVWESDJZIRRTOICYPPUZTQQNQIBMCXTIOANEBEZQSASXDKLYYKWAZRCVAVMVKVWVGLWRLKERFHXGTMKHEZJXUHCGZUNBUHJDXOLBOTPUDCVNYSYMSETGEEJFBSLJPVFSUQLBXKFINGVAOOQN");
    msg.flags = 50U;
    const char tmp_msg_0[] = {113, -31, -32, -11, -17, -128, -65, 24, -56, 107, 53, 25, -17, -124, -22, -118, -77, 102, 107, -61, -3, 60, 59, -22, 108, -103, 106, -117, 19, 119, 92, 119, 54, -55, 122, -57, -42, 99, -14, 28, 81, 105, 46, 29, -126, -31, -16, 108, 73, 60};
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
    msg.setTimeStamp(0.579931542151);
    msg.setSource(4899U);
    msg.setSourceEntity(241U);
    msg.setDestination(34951U);
    msg.setDestinationEntity(48U);
    msg.sys_src.assign("QCYVDFGABWFXVJAEUYOJZ");
    msg.sys_dst.assign("WCWXHXCOWTWVNKLRMKTQIXPFFFHGEGUCPRDVDTIFABJMBEZZEAXRUTGKCCVWQWYDLLXYUPSIODCYFWJZASQNHSYOIQPMPHZDTORZYSDLLAQQJENOZRVMOVNUPENTHFEKMYSFLGPSJKFKCMUNXNVKZEZRXYJKXWDGTGMDEQFNEISHUXNPSBPVHJTRQADCHUASOJAZVM");
    msg.flags = 224U;
    const char tmp_msg_0[] = {-87, -37, 115, -86, -84, -83, -71, -56, -1, 0, 2, 40, -75, 32, 24, -118};
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
    msg.setTimeStamp(0.871587629815);
    msg.setSource(19369U);
    msg.setSourceEntity(206U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(163U);
    msg.seq = 3498U;
    msg.value = 125U;
    msg.error.assign("OTFQLWBDYLCWFDSRHIMZUZXZTJUCLXREMKQUVLVRLJRJPFIJGBFRRSAFKNEHCZTDKDVJQYOHXEPSLCQRKEPQWXFOIWPKCDHJNVMTLPMFKSEMEBXNAHTDDXGSGSDDTXAWXHZGGCYABVUBLIBNVRPQUGDWIEZJHUOVHVMJGMZV");

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
    msg.setTimeStamp(0.564300108725);
    msg.setSource(23383U);
    msg.setSourceEntity(159U);
    msg.setDestination(48703U);
    msg.setDestinationEntity(140U);
    msg.seq = 38581U;
    msg.value = 122U;
    msg.error.assign("WKYSJGZHZBJBQDTUPVSJPNNYWEQGZVIFVFJSOMPEXUPFXSDQLQTNRBESTGDRZNOITUWREAFCPGVQOOWMBZUOYIAQZCEGURSASJEWHMXCBVNLYYUNFFHUNVGDWNXOCYEMXADMDFYIZRVDEFSWTIVYLYTFAKCLBGYRXPIFAUZGRMPPDKJETPBCHJTRCXKBQWKLOSHAMEAXOPCIXJQTHKHVKRLKLZLTRGHDANMLJGQICHQUUC");

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
    msg.setTimeStamp(0.809879140331);
    msg.setSource(20694U);
    msg.setSourceEntity(84U);
    msg.setDestination(20352U);
    msg.setDestinationEntity(67U);
    msg.seq = 28321U;
    msg.value = 104U;
    msg.error.assign("KPOVKWODETRTLVLRGWCZESNTUNIGXPHIJVQCHTNCXKKZVPELPIHIQZPNFUYFTUWVURMSGXOTDCJCDVFL");

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
    msg.setTimeStamp(0.428552984469);
    msg.setSource(48018U);
    msg.setSourceEntity(92U);
    msg.setDestination(31555U);
    msg.setDestinationEntity(95U);
    msg.seq = 21091U;
    msg.sys.assign("CKBZDWGCKOWPFHGXSQIMREVXGLVSNBPYWWKABIDNEIIZGTCZPAYWMWLOAIQTPBDRBNYNYHOSIUREDPFUAOFTDFANVOZUJHUINUHIBJKSBAORPWTGQOMRKJTZWRVJFUWJKTZUEXLGMKYRGEEYXQXVRNQKBMMZTHPSUCEPESNHEDLNYZCPICMQXWXIQ");
    msg.value = 0.382335676981;

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
    msg.setTimeStamp(0.682281380246);
    msg.setSource(17158U);
    msg.setSourceEntity(184U);
    msg.setDestination(26632U);
    msg.setDestinationEntity(26U);
    msg.seq = 17682U;
    msg.sys.assign("TJOPDTXFDIJMBDGENYHMBTCHMPXKFDPRKDHQBQUFGXUXEBARCSJOFRCLGQUSGOZSFFDUIWTQCZELMXPDQSLG");
    msg.value = 0.782327018028;

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
    msg.setTimeStamp(0.674856998264);
    msg.setSource(47529U);
    msg.setSourceEntity(145U);
    msg.setDestination(46362U);
    msg.setDestinationEntity(122U);
    msg.seq = 14328U;
    msg.sys.assign("QMONBKRFYDWJEZTWRRYRVTIARZXKPBIKHNZSRCJJGAOOIBTGANUCUBNGYEWPEAHSWQMQLBYOI");
    msg.value = 0.278315653884;

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
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.973905623251);
    msg.setSource(39271U);
    msg.setSourceEntity(240U);
    msg.setDestination(10516U);
    msg.setDestinationEntity(48U);
    msg.action = 204U;
    msg.lon_gain = 0.0412909025977;
    msg.lat_gain = 0.460292045773;
    msg.bond_thick = 0.642443251798;
    msg.lead_gain = 0.425413771768;
    msg.deconfl_gain = 0.273929912018;
    msg.accel_switch_gain = 0.87753059456;
    msg.safe_dist = 0.936984213526;
    msg.deconflict_offset = 0.244441461703;
    msg.accel_safe_margin = 0.053921295535;
    msg.accel_lim_x = 0.993000347882;

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
    msg.setTimeStamp(0.244138295566);
    msg.setSource(3128U);
    msg.setSourceEntity(26U);
    msg.setDestination(23035U);
    msg.setDestinationEntity(34U);
    msg.action = 44U;
    msg.lon_gain = 0.820961775819;
    msg.lat_gain = 0.663062882136;
    msg.bond_thick = 0.705350939159;
    msg.lead_gain = 0.926827659499;
    msg.deconfl_gain = 0.872808246333;
    msg.accel_switch_gain = 0.161680123806;
    msg.safe_dist = 0.229209326218;
    msg.deconflict_offset = 0.966307874701;
    msg.accel_safe_margin = 0.904776200576;
    msg.accel_lim_x = 0.601253727955;

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
    msg.setTimeStamp(0.929622274257);
    msg.setSource(46441U);
    msg.setSourceEntity(110U);
    msg.setDestination(8180U);
    msg.setDestinationEntity(196U);
    msg.action = 119U;
    msg.lon_gain = 0.529876897133;
    msg.lat_gain = 0.135928973693;
    msg.bond_thick = 0.516820493786;
    msg.lead_gain = 0.143997895462;
    msg.deconfl_gain = 0.359926540894;
    msg.accel_switch_gain = 0.0325514184336;
    msg.safe_dist = 0.998242901136;
    msg.deconflict_offset = 0.490670262769;
    msg.accel_safe_margin = 0.199952372757;
    msg.accel_lim_x = 0.598843831202;

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
    msg.setTimeStamp(0.575582189107);
    msg.setSource(797U);
    msg.setSourceEntity(89U);
    msg.setDestination(6648U);
    msg.setDestinationEntity(17U);
    msg.err_mean = 0.654114933123;
    msg.dist_min_abs = 0.0386824171644;
    msg.dist_min_mean = 0.469209878132;
    msg.time = 0.823126219145;

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
    msg.setTimeStamp(0.548429116445);
    msg.setSource(6531U);
    msg.setSourceEntity(60U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(126U);
    msg.err_mean = 0.645013440105;
    msg.dist_min_abs = 0.524482228802;
    msg.dist_min_mean = 0.0405300038827;
    msg.time = 0.0646109073663;

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
    msg.setTimeStamp(0.346753625104);
    msg.setSource(50952U);
    msg.setSourceEntity(211U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(167U);
    msg.err_mean = 0.488768238666;
    msg.dist_min_abs = 0.669116549715;
    msg.dist_min_mean = 0.0676975387679;
    msg.time = 0.212684604163;

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
    msg.setTimeStamp(0.271194271936);
    msg.setSource(47227U);
    msg.setSourceEntity(50U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(80U);
    msg.uid = 62U;
    msg.frag_number = 9U;
    msg.num_frags = 60U;
    const char tmp_msg_0[] = {17, -117, -42, 93, 82, -118, -22, 70, -50, 43, 46, -25, -84, -31, 92, -80, -76, 39, 29, 32, 124, 30, 61, 16, -89, 54, 116, -59, -77, -68, 85, -79, -75, -111, -118, -109, 120, -29, 118, -30, 66, 60, 44, -44, 107, 33, -128, 114, -100, 125, -25, -62, 62, 24, 6, -121, -15};
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
    msg.setTimeStamp(0.848618722958);
    msg.setSource(13965U);
    msg.setSourceEntity(151U);
    msg.setDestination(35037U);
    msg.setDestinationEntity(210U);
    msg.uid = 43U;
    msg.frag_number = 28U;
    msg.num_frags = 74U;
    const char tmp_msg_0[] = {-102, 12, 59, 78, -17, 30, -69, -63, -51, -33, 73, 30, 76, -1, 23, 44, 44, 32, 14, -57, -110, -106, -84, 17, -78, 44, -29, -9, 67, -78, -36, 126, -39, 104, 55, -74, -81, -37, -96, 112, -77, -15, 67, 126, 32, 114, -18, 116, -24, -103, 87, -50, 122, 27, 13, 99, 38, 53, -47, 125, -5, -55, -81, -101, 28, -65, -75, -35, 67, 19, 114, 54, -62, -88, 98, 116, -2, -53, -64, -46, 66, 83, -17, -52, -88, 49, 7, -25, -41, 20, -64, 25, 13, -47, 44, -50, -116, 108, -42, -100, 14, -39, -104, -106, -37, 6, 42, 44, -39, -64, 123, -14, 122, -24, -120, -88, -118, -14, 23, 86, 115, 5, 65, -63, -38, 65, 15, -122, -118, -73, 109, -11, -32, -74, 93, -11, 94, -86, 29, -50, 16, 84, -71, -12, -100, 106, 46, -47, -77, -25, 27, -83, -48, 76, -41, 114, -68, 114, -74, -9, -97, 87, 58, 48, -63, 115, 112, -38, 16, 52, -70, -78, 66, 70, 59, 85, -101, -12, -65, -73, -85, 11, 73, -22, 1, -54, -74, -125, 47, -72, -124, -52, -53, -102, 13, -80, 16, -40, 53, -112, 103, -31, 44, 22, 94, -87, 93, -97, -121, 4, 66, -114, 56, -35, 116, -103, 122, 82, 32, 98};
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
    msg.setTimeStamp(0.933761824301);
    msg.setSource(22396U);
    msg.setSourceEntity(245U);
    msg.setDestination(15634U);
    msg.setDestinationEntity(153U);
    msg.uid = 200U;
    msg.frag_number = 151U;
    msg.num_frags = 235U;
    const char tmp_msg_0[] = {-114, -78, -18, -107, -8, -80, 114, -40, -120, -43, 102, 12, 65, 12, -47, -41, -42, 7, 33, 41, 104, 75, 14, 84, -8, -5, 64, 97, -79, -50, -48, -102, 93, -59, -52, -83, -107, 43, -103, -73, 64, 34, -100, -88, 81, 17, 65, 29, 91, -2, -5, -35, -71, 98, -67, -69, 64, 37, -65, -52, 96, -34, -47, 90, -41, -108, 75, -56, 15, 45, 8, -102, 65, -114, -56, 70, -51, 3, -56, -23, 2, -98};
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
    msg.setTimeStamp(0.503708481716);
    msg.setSource(3126U);
    msg.setSourceEntity(152U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(32U);
    msg.content_type.assign("UJVQOBBFHLRTUZWABZDAXXAVEENBUQTOWSRWRYNSBVWXKOINXMUZDXXHPGMBXMOWEOQNYQQJYYDMCOZBSQQLTUILCKJCQRPLMNKHCEI");
    const char tmp_msg_0[] = {7, 88, 66, -24, 75, -51, 109, -121, 73, 34, 5, -52, 47, -13, -60, -5, -54, -71, 98, 98, -30, 79, 118, -37, -125, 30, -126, -72, 53, -48, 91, -93, -21, 89, 61, 25, 57, 122, -89, -34, -125, 22, 1, 64, 35, -116, -127, 105, -73, 62, 40, 73, -52, -77, 18, -58, -10, 12, 114, 11, 32, 9, 4, -108, -92, 46, 52, -107, -70, -52, 38, -106, 22, -118, -96, 117, 86, 118, -119, -101, 95, -95, 39, -23, 6, -25, 1, -63, 59, -55, -40, 122, 112, -66, -96, -51, -11, 45, 119, -77, -123, 99, -16, -26, 18, -18, 45, -108, -66, 63, 80, 104, -109, -37, -33, 84, 49, 37, 76, -72, 106, 118, 71, -35, -51, -67, -25, -55, -118, 10, -10, -40, -73, 2, -105, 61, 66, 100, 82, 89, 26, 83, 110, -115, 26, -55, -49, -93, 30, -67, -127, 66, 71, 110, 75, 91, 102, -97, -22, 106, -117, -16, 5, -20, -97, 41, 39, -119, -17};
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
    msg.setTimeStamp(0.117139207261);
    msg.setSource(49329U);
    msg.setSourceEntity(234U);
    msg.setDestination(2478U);
    msg.setDestinationEntity(96U);
    msg.content_type.assign("YYYVCDLJFUPVETUMQLRLKWBKSPIHLAMBICDHFJNLGOWLRIPDHFFYGHPBDOGIQHANFLZRNIZMNUDWGOXBEUFTIQNZTWEEJXKRPNSVEMXCNTTCLKXQAPZVBMGUQZUYMOXTYPHLBRJIXXRHTBQTRSEDNKHWAZSCZWVFCGUXNYSWTOVOPECQAKJMWCWDSJXVSZRYPODSKJVABMABCRKSIOREOUGFMCGFPKABUAJQVEIQXLGZSDZGHT");
    const char tmp_msg_0[] = {-69, 111, -37, -106, 15, 16, 18, 92, -53, -1, -100, -16, -82, 40, 117, -20, 56, -125, -6, -10, -25, -65, -50, -44, -82, -43, -103, 21, 121, -45, -115, 51, 91, 45, -105, 76, -78, 112, -110, 77, 43, -120, 39, 66, -97, -58, 71, 52, 25, -22, 126, 77, 74, -54, -80, -24, 67, -36, -127, -18, -61, 116, 28, -1, -90, -59, -81, 88, -79, 115, -25, 118, -123, 55, -25, -70, -116, 108, -39, -114, -108, -104, -109, -57, 90, 47, 5, -42, -27, -77, -23, -60, 102, 63, 57, 18, -72, -81, 8, -66, -29, -123, 116, -53, -56, -94, -11, 119, 5, 57, -103, 121, 108, 110, 3, 61, -116, -124, -11, 14, -44, -68, 114, 65, -44, -26, -108, -88, -2, -76, 101, 98, -85, 80, 80, -72, 13, 6, -86, 10, 82, 35, 18, -62, -63, 122, -127, 41, 105, 91, -61, -4, -55, -98, 29, 105, -40, -34, -68, -41, -45, 115, -48, -123, -122, -62, 123, 39, 52, 94, 48, -128, -96, 63, 20, 71, -120, 6, -62, -12, -98, 64, -111, 28, -78, 11, -95, 6, -70, 126, 14, 39, -85, -112};
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
    msg.setTimeStamp(0.688655237618);
    msg.setSource(55095U);
    msg.setSourceEntity(60U);
    msg.setDestination(62630U);
    msg.setDestinationEntity(244U);
    msg.content_type.assign("IRAPOTCGKDSQALPCCRSFFQGRLYXVEVALHJ");
    const char tmp_msg_0[] = {-126, -49, -88, 26, 122, -27, 81, -20, -114, 77, 32, 106, 71, -83, 5, -54, 62, -49, 41, 19, -34, -125};
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
    msg.setTimeStamp(0.845892064915);
    msg.setSource(19037U);
    msg.setSourceEntity(84U);
    msg.setDestination(49750U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.219798945343);
    msg.setSource(1483U);
    msg.setSourceEntity(38U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.325788254151);
    msg.setSource(24284U);
    msg.setSourceEntity(69U);
    msg.setDestination(53561U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.197383432781);
    msg.setSource(30916U);
    msg.setSourceEntity(242U);
    msg.setDestination(10888U);
    msg.setDestinationEntity(78U);
    msg.target = 25611U;
    msg.bearing = 0.937305115228;
    msg.elevation = 0.436558013764;

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
    msg.setTimeStamp(0.0529254398142);
    msg.setSource(14958U);
    msg.setSourceEntity(173U);
    msg.setDestination(48809U);
    msg.setDestinationEntity(127U);
    msg.target = 27164U;
    msg.bearing = 0.983387518035;
    msg.elevation = 0.535276637101;

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
    msg.setTimeStamp(0.348484692122);
    msg.setSource(42016U);
    msg.setSourceEntity(173U);
    msg.setDestination(43871U);
    msg.setDestinationEntity(253U);
    msg.target = 28364U;
    msg.bearing = 0.170792756338;
    msg.elevation = 0.519241703375;

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
    msg.setTimeStamp(0.859438438616);
    msg.setSource(59745U);
    msg.setSourceEntity(253U);
    msg.setDestination(13359U);
    msg.setDestinationEntity(159U);
    msg.target = 22350U;
    msg.x = 0.422056400554;
    msg.y = 0.562741673736;
    msg.z = 0.537304271111;

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
    msg.setTimeStamp(0.499568890803);
    msg.setSource(18667U);
    msg.setSourceEntity(197U);
    msg.setDestination(48168U);
    msg.setDestinationEntity(179U);
    msg.target = 37008U;
    msg.x = 0.951797527756;
    msg.y = 0.249647933936;
    msg.z = 0.625368490238;

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
    msg.setTimeStamp(0.0780437240052);
    msg.setSource(64117U);
    msg.setSourceEntity(110U);
    msg.setDestination(9865U);
    msg.setDestinationEntity(147U);
    msg.target = 18825U;
    msg.x = 0.0171947845724;
    msg.y = 0.659616554293;
    msg.z = 0.162981827198;

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
    msg.setTimeStamp(0.281304748789);
    msg.setSource(5744U);
    msg.setSourceEntity(96U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(36U);
    msg.target = 23229U;
    msg.lat = 0.106769604112;
    msg.lon = 0.465412317948;
    msg.z_units = 107U;
    msg.z = 0.680733462883;

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
    msg.setTimeStamp(0.947211248037);
    msg.setSource(47364U);
    msg.setSourceEntity(194U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(128U);
    msg.target = 63703U;
    msg.lat = 0.724297517859;
    msg.lon = 0.754115689273;
    msg.z_units = 243U;
    msg.z = 0.410745469197;

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
    msg.setTimeStamp(0.839147808791);
    msg.setSource(22545U);
    msg.setSourceEntity(244U);
    msg.setDestination(5344U);
    msg.setDestinationEntity(220U);
    msg.target = 9648U;
    msg.lat = 0.946835967929;
    msg.lon = 0.279491348173;
    msg.z_units = 162U;
    msg.z = 0.297710409165;

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

  return test.getReturnValue();
}
