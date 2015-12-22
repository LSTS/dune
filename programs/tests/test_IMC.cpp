//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 65ba2ee1d64e9a3f35837bb8072848b4                            *
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
    msg.setTimeStamp(0.5449647102528783);
    msg.setSource(64856U);
    msg.setSourceEntity(170U);
    msg.setDestination(37549U);
    msg.setDestinationEntity(113U);
    msg.state = 134U;
    msg.flags = 93U;
    msg.description.assign("SROGKLQHUFKMCSQALGYHLVQBOZYSTOAEYVJADTNANXWU");

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
    msg.setTimeStamp(0.6756126297348759);
    msg.setSource(47770U);
    msg.setSourceEntity(70U);
    msg.setDestination(62171U);
    msg.setDestinationEntity(31U);
    msg.state = 200U;
    msg.flags = 131U;
    msg.description.assign("JXDYFBMXSNVSHQHHXNWPWYFVZZADGSOXFENDVOPBKNCSSKZUKTIKEBUIBZYJVOYIQUPUDIWGZLKVZGUWHPERYGQLUHJOAGBUQJMEPCOMRNDOPYCGMFLTKTRUQSSIHCZFCTIEHTMTGJLJKZFLGXFYPHAAJRBAHVMT");

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
    msg.setTimeStamp(0.03278917221687605);
    msg.setSource(17916U);
    msg.setSourceEntity(242U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(186U);
    msg.state = 26U;
    msg.flags = 186U;
    msg.description.assign("KUANNNTYCOIHHZJAGTIDCOLZDYDKWJVHVXZDILIKPDFSRLKZYQAOJEKWESCFVEXBXYOTYVTHWNCNPYXPZGYNMZUBRGLYUFKDXMH");

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
    msg.setTimeStamp(0.08323529196947166);
    msg.setSource(20001U);
    msg.setSourceEntity(122U);
    msg.setDestination(37114U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.6730075103527188);
    msg.setSource(39818U);
    msg.setSourceEntity(219U);
    msg.setDestination(15778U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.558993477154617);
    msg.setSource(64045U);
    msg.setSourceEntity(39U);
    msg.setDestination(17154U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.9817467793143035);
    msg.setSource(32559U);
    msg.setSourceEntity(207U);
    msg.setDestination(19398U);
    msg.setDestinationEntity(196U);
    msg.id = 118U;
    msg.label.assign("PIJWWCWVJYIOKGEFBLYZQGMXLVEEVGXCRBLDDRTCHBIKEXFJZDRSIHIOLYTAZQDXFPHIJPQLKPNGERLNJVZBRTBUYFTVDVXMIOYPNNIHAQRDNMUUVFSSTPCPCJKHHFVYHOAZVYAWTYSDCUUKEQ");
    msg.component.assign("INYSDRNWYXUODYMSPOHKXRGKEPLKVJLXCKUGOADHGRFZZPKISCDEXVNYQVHRLKARHBTAJSBTQZQZWSFXRLFCNBUTMQOIMEPJGKWWBEHPLWFBTSYIDGBVPMLRSMNKEEFIJJXMFQUATKEJQZPXATQFAEVAZPARYIHIUZWUGTDFEQKUCJCSHYGTZAVLJUNVPGCUODQGOMIHLVIYTXMMNYE");
    msg.act_time = 38157U;
    msg.deact_time = 49176U;

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
    msg.setTimeStamp(0.6562737215418499);
    msg.setSource(47988U);
    msg.setSourceEntity(71U);
    msg.setDestination(1882U);
    msg.setDestinationEntity(222U);
    msg.id = 240U;
    msg.label.assign("WMQVTPMWWAXJQKZCHWGJGIGLWRSYUQGDCMFZSZXINBTHJFTTURF");
    msg.component.assign("TZMDEKGVKOCVANJGHTCSHGCWZDTLKFJONSMDBDXAFSMKFQPBERIOWDYYCPAWYJGLRFKAGNJOAEVSPRPMSRGXUDRQIIITZXUODVU");
    msg.act_time = 22665U;
    msg.deact_time = 56298U;

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
    msg.setTimeStamp(0.46110315793334133);
    msg.setSource(25520U);
    msg.setSourceEntity(147U);
    msg.setDestination(46159U);
    msg.setDestinationEntity(97U);
    msg.id = 125U;
    msg.label.assign("OMQQYJTTCUVFSDXWUKLAGQKEXDURIDEXBVCXAGDIZHDGHTXYMSWNVAKCFBFAKAPBBWLMFMSTOOYISEQUKGVEZSQRIMFRXMWOAOXZUBESAFBJJUJEPJPGETVGPQI");
    msg.component.assign("SZONAOBFLUWIONKPTSDTCDYVNKZNQXSJHNTWOHDBUGQLJMUUWPZPVFCSKHHSUIUCEMJZGVFAPWVOGLUCXRRMIHMSKULLXEWBYMIAABLFOZTJEWUBOWPFDCGNCYNDSQRFQOGVGLEXCKIMIDJTEXYAYQCMLYDHWTBMITKYJGCJXRQWIANFEZJFHEGQDRZCYXPABOPKYGGWRDALQZVMPVEQXKTSEXJZZFIINUDHTLBH");
    msg.act_time = 62771U;
    msg.deact_time = 42364U;

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
    msg.setTimeStamp(0.35253694582645156);
    msg.setSource(60827U);
    msg.setSourceEntity(199U);
    msg.setDestination(42773U);
    msg.setDestinationEntity(223U);
    msg.id = 37U;

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
    msg.setTimeStamp(0.38392604539187647);
    msg.setSource(487U);
    msg.setSourceEntity(73U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(48U);
    msg.id = 42U;

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
    msg.setTimeStamp(0.5957391775547245);
    msg.setSource(37064U);
    msg.setSourceEntity(29U);
    msg.setDestination(37439U);
    msg.setDestinationEntity(238U);
    msg.id = 47U;

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
    msg.setTimeStamp(0.3093854690255101);
    msg.setSource(58914U);
    msg.setSourceEntity(207U);
    msg.setDestination(9329U);
    msg.setDestinationEntity(218U);
    msg.op = 139U;
    msg.list.assign("OBIYPMHCTKEJRXFIIJMOGTIACSCGLYRFLRPPVSYJJZGSVVKAVEMUQBDJGOPMGOBPTTZHUBKJCPMPWXZRBNAFMOBEOKKJDZDOHZUSEVBUNFFZWUNNASBQXYLWKKYLENDNWXYNCNGFFWEDWBIZESYMUIAKMDLTTULSLHHUIRGKXFJQTREXQHUZAOHWQMCPDADYQUPXRGGQTHQYFXPNDVGKCRQLONZCCSVMV");

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
    msg.setTimeStamp(0.45302617936889633);
    msg.setSource(46927U);
    msg.setSourceEntity(183U);
    msg.setDestination(22752U);
    msg.setDestinationEntity(75U);
    msg.op = 96U;
    msg.list.assign("GRJTTATACQZGHQEOEDCWBYSISDNOLMBWPQSKZDOKWPRSLYMFOTGIIKNEZTLOLVRZZIYKXEPUMGWJLQSPCYVFNYGHNZFCORKPJVCQVHOHCXJBIBTWHNVDDFUXSRUFPYYNRVCMAKWM");

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
    msg.setTimeStamp(0.25452402901907434);
    msg.setSource(15265U);
    msg.setSourceEntity(104U);
    msg.setDestination(33613U);
    msg.setDestinationEntity(185U);
    msg.op = 180U;
    msg.list.assign("JHHQFTGIQBFBVEBNJTEEZAIODVYGLKKLCLQQFLLKWGAJHERKYUIVXGFHODGRFIWALHNFRVFVHSNXOMPUOSPWDKEXWGMXI");

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
    msg.setTimeStamp(0.830760112152324);
    msg.setSource(45722U);
    msg.setSourceEntity(16U);
    msg.setDestination(29714U);
    msg.setDestinationEntity(234U);
    msg.value = 210U;

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
    msg.setTimeStamp(0.214458558869706);
    msg.setSource(45510U);
    msg.setSourceEntity(187U);
    msg.setDestination(1323U);
    msg.setDestinationEntity(164U);
    msg.value = 57U;

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
    msg.setTimeStamp(0.049540943906562385);
    msg.setSource(6250U);
    msg.setSourceEntity(239U);
    msg.setDestination(8199U);
    msg.setDestinationEntity(56U);
    msg.value = 153U;

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
    msg.setTimeStamp(0.4580279655129337);
    msg.setSource(25961U);
    msg.setSourceEntity(3U);
    msg.setDestination(48924U);
    msg.setDestinationEntity(150U);
    msg.consumer.assign("UJPUKGCLKJODAVIGVCQXHPVZNOXKQRDSXYDMRPLNXGEHTGOBLEFNNSJHUTHJDGLQUXEPWEBBI");
    msg.message_id = 1782U;

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
    msg.setTimeStamp(0.45073583659545935);
    msg.setSource(48513U);
    msg.setSourceEntity(127U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(180U);
    msg.consumer.assign("BJZCGMAXKEGWRMYIKGAUQUVGMUIITNLKVPDFUEAYDBJKYHTOQGBJYPNVTXJVASABTSYHCKKADMJFIT");
    msg.message_id = 30676U;

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
    msg.setTimeStamp(0.41704426664568184);
    msg.setSource(47647U);
    msg.setSourceEntity(251U);
    msg.setDestination(40457U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("IPIWSIYLBRBRVYSZYEUVGVSNMJKQBJVAHJGVEHAFHHOHLMTIRVUWHQTKQVDDKTQTNYZARTBEDEOFJBZOYSCSBXZBXRMOTEMNVAAVGNJPHACZXIDQPNNDIEODROYGPYUIGWWDTLPWOYJHXTZFPBWWBZBLUIXXSGPACXGZNLMKRKLXERMLTDWQUCIFGPTKCXFFQZKYJZPMQWCLYUOEAUPLUNHSUR");
    msg.message_id = 12149U;

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
    msg.setTimeStamp(0.8542551657763973);
    msg.setSource(43945U);
    msg.setSourceEntity(177U);
    msg.setDestination(15425U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.6694927610550068);
    msg.setSource(27264U);
    msg.setSourceEntity(244U);
    msg.setDestination(36633U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.29883779178491277);
    msg.setSource(49819U);
    msg.setSourceEntity(177U);
    msg.setDestination(17993U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.8064502508292958);
    msg.setSource(35978U);
    msg.setSourceEntity(120U);
    msg.setDestination(55227U);
    msg.setDestinationEntity(137U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.38522666943041195);
    msg.setSource(2208U);
    msg.setSourceEntity(105U);
    msg.setDestination(52222U);
    msg.setDestinationEntity(199U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.2331225544672041);
    msg.setSource(9481U);
    msg.setSourceEntity(248U);
    msg.setDestination(65220U);
    msg.setDestinationEntity(135U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.17313840327518681);
    msg.setSource(51100U);
    msg.setSourceEntity(236U);
    msg.setDestination(52568U);
    msg.setDestinationEntity(163U);
    msg.total_steps = 250U;
    msg.step_number = 27U;
    msg.step.assign("YEUVZPJOCCAZXDSLBDMARPOZKCNDPGSRTRMDCIEYLCXRVORIFFOMGAYNSKBUFWWNGUJTLJBBEKOIBQXIWEEDOHSPGLTAMJXGNWEJZXNQVVTCIHONIKRXPPYZYMGDJXHYQQHIHXVNXPGFVFWUWOWPZEKHFVZEKNYTVOKCYCFPIQMVEDJARKDKALSJIBSBOQ");
    msg.flags = 220U;

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
    msg.setTimeStamp(0.8733878016732531);
    msg.setSource(61738U);
    msg.setSourceEntity(136U);
    msg.setDestination(7782U);
    msg.setDestinationEntity(70U);
    msg.total_steps = 150U;
    msg.step_number = 233U;
    msg.step.assign("TBYQMBJCATBAYJUFBGWBPWDBPCLXCTJIXOVHRHMRPIIWDZCPOLNNGCEHDSZKFXVHGZMLCVFRHVJBLWPGJTBANWTZVLONGAIPUTSQXDRJFWVUBWESNHIUAKQRZWDMDKKPYGFCANPZLMJEAOHULAFFGXFLVEKXKSZHKKEKEQNXHCYCXOAJTYLQRQUI");
    msg.flags = 20U;

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
    msg.setTimeStamp(0.0828874820915575);
    msg.setSource(27076U);
    msg.setSourceEntity(142U);
    msg.setDestination(14015U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 81U;
    msg.step_number = 211U;
    msg.step.assign("DKOABSYBESZYHLWGHSQMYXFPVJRAACSBIBHWEGQMPYIJQIAKNDHCQGHJEBOSXFLRSCTTWWSRPFTJUZVDDJTMNTBNPAFVFTJCVTKOIYMLZXRZVQPGKCNEJJZAOBZZWNPYIOOANULMDOKHVILKUQKWRDGMG");
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
    msg.setTimeStamp(0.0593799651576864);
    msg.setSource(27896U);
    msg.setSourceEntity(138U);
    msg.setDestination(38303U);
    msg.setDestinationEntity(232U);
    msg.state = 3U;
    msg.error.assign("VFCUKLKNYAGIHEHBWOUFDBOSVEUGYHALKYWXMUIXXRMRRAZROJIJSVUZAZTOGZJBHHYZZOUMNOYMIRWSPKRFIAZTOPTDMHTPWXFJCEWTGSNHQLMSUHLH");

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
    msg.setTimeStamp(0.5389968214032892);
    msg.setSource(37696U);
    msg.setSourceEntity(230U);
    msg.setDestination(40104U);
    msg.setDestinationEntity(79U);
    msg.state = 155U;
    msg.error.assign("EYPDPUZBEFKISJDCFLIDMFSHMJNRDVRYFYWWQQGOCTRBUJSCCAWWWFKUXXHZFMAQBIMPXQEHQA");

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
    msg.setTimeStamp(0.44415221801775673);
    msg.setSource(45128U);
    msg.setSourceEntity(143U);
    msg.setDestination(3497U);
    msg.setDestinationEntity(31U);
    msg.state = 110U;
    msg.error.assign("JUXSFQWFJGCDHEKUXAQAUKHSMIUULQEDGDZGNLONODTWANXJFAIWBRSLGLFVWPDCQR");

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
    msg.setTimeStamp(0.7882484684697331);
    msg.setSource(88U);
    msg.setSourceEntity(187U);
    msg.setDestination(12365U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.047191770014053724);
    msg.setSource(52688U);
    msg.setSourceEntity(77U);
    msg.setDestination(63964U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.1540765966716413);
    msg.setSource(35429U);
    msg.setSourceEntity(186U);
    msg.setDestination(48542U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.17289842948775158);
    msg.setSource(36420U);
    msg.setSourceEntity(228U);
    msg.setDestination(2609U);
    msg.setDestinationEntity(135U);
    msg.op = 140U;
    msg.speed_min = 0.31885515389779684;
    msg.speed_max = 0.08128693348265659;
    msg.long_accel = 0.7522171661136786;
    msg.alt_max_msl = 0.5536902396322777;
    msg.dive_fraction_max = 0.919058997209888;
    msg.climb_fraction_max = 0.3456402940148239;
    msg.bank_max = 0.8076167675438104;
    msg.p_max = 0.1471873413803615;
    msg.pitch_min = 0.42429891674013853;
    msg.pitch_max = 0.6908875162974006;
    msg.q_max = 0.332728795695695;
    msg.g_min = 0.8757625589724042;
    msg.g_max = 0.11308228643243334;
    msg.g_lat_max = 0.2453900016578583;
    msg.rpm_min = 0.5936113233609425;
    msg.rpm_max = 0.6100953914355101;
    msg.rpm_rate_max = 0.9780851168487406;

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
    msg.setTimeStamp(0.9950336371292516);
    msg.setSource(65102U);
    msg.setSourceEntity(102U);
    msg.setDestination(37584U);
    msg.setDestinationEntity(130U);
    msg.op = 201U;
    msg.speed_min = 0.8347886412964761;
    msg.speed_max = 0.188105656812667;
    msg.long_accel = 0.9349159552847347;
    msg.alt_max_msl = 0.5212578997394322;
    msg.dive_fraction_max = 0.9675781579550194;
    msg.climb_fraction_max = 0.9755798286207863;
    msg.bank_max = 0.31986818741930556;
    msg.p_max = 0.21969872817088865;
    msg.pitch_min = 0.42719573244586007;
    msg.pitch_max = 0.455302277885028;
    msg.q_max = 0.21178977625969608;
    msg.g_min = 0.3158588857855549;
    msg.g_max = 0.07856964280340872;
    msg.g_lat_max = 0.4491539171867893;
    msg.rpm_min = 0.9506158501751834;
    msg.rpm_max = 0.9237897069939595;
    msg.rpm_rate_max = 0.18695675863601413;

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
    msg.setTimeStamp(0.9991072920846936);
    msg.setSource(5943U);
    msg.setSourceEntity(59U);
    msg.setDestination(29739U);
    msg.setDestinationEntity(24U);
    msg.op = 222U;
    msg.speed_min = 0.6593108889309084;
    msg.speed_max = 0.6384555830193964;
    msg.long_accel = 0.7133287588483387;
    msg.alt_max_msl = 0.9440348888005893;
    msg.dive_fraction_max = 0.6005557510955882;
    msg.climb_fraction_max = 0.5977576023622898;
    msg.bank_max = 0.16214361879951844;
    msg.p_max = 0.2442598463233625;
    msg.pitch_min = 0.7952086664467165;
    msg.pitch_max = 0.3365638782461049;
    msg.q_max = 0.4353995554602734;
    msg.g_min = 0.7803607101216513;
    msg.g_max = 0.9669220529905225;
    msg.g_lat_max = 0.8639355455958632;
    msg.rpm_min = 0.16731038815941301;
    msg.rpm_max = 0.6843316654719226;
    msg.rpm_rate_max = 0.9945792290086909;

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
    msg.setTimeStamp(0.8578749641732162);
    msg.setSource(30405U);
    msg.setSourceEntity(226U);
    msg.setDestination(12053U);
    msg.setDestinationEntity(84U);
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 53U;
    tmp_msg_0.value = 0.8984661020121432;
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
    msg.setTimeStamp(0.01217918060587031);
    msg.setSource(28316U);
    msg.setSourceEntity(92U);
    msg.setDestination(23460U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.6207922479473534);
    msg.setSource(24862U);
    msg.setSourceEntity(118U);
    msg.setDestination(15309U);
    msg.setDestinationEntity(180U);
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 134U;
    tmp_msg_0.id.assign("MPSELGZWASXWKEMJTTCORQKANYOFXEAHVICWMRHHBMUEFXVTBHQEHUDTCADQHOULKTUCAIPMGJQHSEMTYOPJPQDBBZNUWMDJGRFRAQZAUMGLHCYVSVIGBFYSXHDJIYOJFIEGUKIPWOYCRDILBEXULNLON");
    IMC::Heartbeat tmp_tmp_msg_0_0;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2726351512852456);
    msg.setSource(40331U);
    msg.setSourceEntity(246U);
    msg.setDestination(49062U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.9155732565996803;
    msg.lon = 0.35270986353337075;
    msg.height = 0.5787782587077384;
    msg.x = 0.5356327986797702;
    msg.y = 0.6022080184830851;
    msg.z = 0.17651962428251322;
    msg.phi = 0.9862991548147562;
    msg.theta = 0.0322470395282779;
    msg.psi = 0.12584628002573173;
    msg.u = 0.952670034739638;
    msg.v = 0.7534004179397261;
    msg.w = 0.22008919936985416;
    msg.p = 0.3720559766367494;
    msg.q = 0.07490332942564981;
    msg.r = 0.3452145030608347;
    msg.svx = 0.11857803374121523;
    msg.svy = 0.8530850179453903;
    msg.svz = 0.7710780770528645;

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
    msg.setTimeStamp(0.5668090914842661);
    msg.setSource(38380U);
    msg.setSourceEntity(202U);
    msg.setDestination(9299U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.427020728168097;
    msg.lon = 0.08501915978634633;
    msg.height = 0.13181041128376858;
    msg.x = 0.39734976977601366;
    msg.y = 0.20732422247818216;
    msg.z = 0.3255722633173621;
    msg.phi = 0.05147733158465706;
    msg.theta = 0.7317159130344156;
    msg.psi = 0.42879630746599495;
    msg.u = 0.3906591821006633;
    msg.v = 0.7375472691224659;
    msg.w = 0.8222784985313076;
    msg.p = 0.7859846350314882;
    msg.q = 0.77607002566915;
    msg.r = 0.9977440701917968;
    msg.svx = 0.5132975215250926;
    msg.svy = 0.8510409872711089;
    msg.svz = 0.026688798420581472;

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
    msg.setTimeStamp(0.04246748047672311);
    msg.setSource(54768U);
    msg.setSourceEntity(70U);
    msg.setDestination(40919U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.16768472980368176;
    msg.lon = 0.28537717441022425;
    msg.height = 0.967812184038281;
    msg.x = 0.7100598734265238;
    msg.y = 0.7166312008002104;
    msg.z = 0.329665545959007;
    msg.phi = 0.518639400852329;
    msg.theta = 0.9906210663763703;
    msg.psi = 0.870796194023376;
    msg.u = 0.46932509311628545;
    msg.v = 0.820650383937927;
    msg.w = 0.5308633609898366;
    msg.p = 0.6302175264260054;
    msg.q = 0.852110942380657;
    msg.r = 0.09582491557932538;
    msg.svx = 0.6405903060260522;
    msg.svy = 0.022546115198018857;
    msg.svz = 0.9478267318411273;

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
    msg.setTimeStamp(0.31909672313363213);
    msg.setSource(26711U);
    msg.setSourceEntity(101U);
    msg.setDestination(5674U);
    msg.setDestinationEntity(97U);
    msg.op = 220U;
    msg.entities.assign("HRNSAKNCUBBOYWNTRTTBGFCXCNAINXJJHERSGQAYYSUFRDWKTDXROPGKZSCQINTUZGNZLZPIYASKTMTNUVILBAMFWSYWUEFVJDBLOVPCOOJXPEPXKAMWMFQYVKLMWUVADJJOIWICRLTZLOFDYRCUDCJLJCGIVKEFFGJZQHQDASLEERWOHTDKQUVBOWGJSMXVRLQ");

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
    msg.setTimeStamp(0.10581103207633302);
    msg.setSource(23903U);
    msg.setSourceEntity(144U);
    msg.setDestination(20615U);
    msg.setDestinationEntity(132U);
    msg.op = 23U;
    msg.entities.assign("HMGJWLZBEEOGGVYAIULIMKQKEUTMKZWVJLXCTBQRLADHOGMNTFUWYFZDVOIGDASMUZFGUVUOCFLTDZOTRFFDISJIPOUPKVYP");

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
    msg.setTimeStamp(0.6958729389418962);
    msg.setSource(53219U);
    msg.setSourceEntity(112U);
    msg.setDestination(22781U);
    msg.setDestinationEntity(30U);
    msg.op = 118U;
    msg.entities.assign("NUGSIGBCHVENPRYZFLYHMUWCSXYRWEIAIMDJOHVPXABOLWYFASLURSGFQEZTHMEYCUFXMDDYTFEFIBOSDQHXVJFTFNUYIXZPBOJIENRYAKHVXZLTQQUHRPAGLNIVXNASSDLZVTCBIWOEHGGKAYDZUPKCTXBMMQKKFWSOLQAVTLWOVCUCAUIJJCCSQKWLWHXNRBTZYDOMEKNPWRDJOPQGTSBVMVKBIMMNGHJRNZXPBEKKFWJR");

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
    msg.setTimeStamp(0.9502645518623459);
    msg.setSource(31523U);
    msg.setSourceEntity(239U);
    msg.setDestination(41153U);
    msg.setDestinationEntity(66U);
    msg.type = 248U;
    msg.speed = 31029U;
    const char tmp_msg_0[] = {-115, -70, 16, -121, -114, -89, -27, 93, -79, 108, 28, 111, -57, 97, 2, 50, -15, -28, 41, -45, 82, -32, -70, 48, -65, 80, 55, -63, 99, 5, 43, 99, -77, -30, -94, -39, -49, -25, -23, 77, 78, 108, -31, -16, -35, -42, 49, 125, 83, -33, -81, -122, 59, -93, 21, 82, 30, 10, -75, 73, 123, -52, -47, -119, 109, -56, -20, -86, 67};
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
    msg.setTimeStamp(0.9560561952091626);
    msg.setSource(36677U);
    msg.setSourceEntity(165U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(124U);
    msg.type = 224U;
    msg.speed = 30524U;
    const char tmp_msg_0[] = {-85, 74, -74, -72, 88, 119, 63, 58, 42, 98, -124, 9, -5, 83, -15, -111, -47, 111, -4, -92, -82, -35, -44, -22, 115, -5, 69, 7, -7, 66, -90, -90, 50, -50, 44, -94, 17, -97, -52, -67, 0, 13, 31, -48, 5, -38, -39, 52, 39, 15, -27, -107, -5, 103, 95, -1, -114, -93, -122, -7, 104, -109, 86, -4, -60, 5};
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
    msg.setTimeStamp(0.9128874632640229);
    msg.setSource(11002U);
    msg.setSourceEntity(10U);
    msg.setDestination(18594U);
    msg.setDestinationEntity(94U);
    msg.type = 87U;
    msg.speed = 55395U;
    const char tmp_msg_0[] = {123, -10, -38, -128, 41, -101, -55, 108, -21, 58, -46, 23, 73, 9, -10, -94, 74, 111, 7, 59, 114, 84, 76, 1, 110, -98, 16, -5, -110, 39, -58, -43, -5, -80, -16, 78, -15, -79, 75, 4, -22, -36, 120, -58, 75, -71, 6, -91, 97, -119, 56, -67, 30, -15, -111, 118, -90, 108, -51, -34, 11, -117, 93, 27, 11, -47, -17, 27, 89, -35, -126, -93, 67, -23, -18, -82, 63, -55, -16, 19, -69, 67, -53, 54, -39, 28, -86, -75, -122, -30, -8, 102, 118, -81, -60, 60, 93, -113, -93, 18, 118, 27, -125, 51, 103, -55, -21, 30, -38, 2, 119, 42, 105, 50, 110, -85, 36, 100, -92, -61, 37, -61, -65, 32, 101, 80, 98, -31, -101, 1, 57, 16, -84, 12, 91, 16, -20, 101, 17, 90, -41, 74, 37, 28, 49, 95, 28, -80, -121, -24, -14, 67, -23, 86, -47, 6, -87, 9, 26, 25, 39, -98, 90, 68, 42, 119, 36, -5, 98, -44, -65, -100, 112, 29, 77, 55, -100, -32, 30, -91, 43, 65, 105, -56, -45, -67, -16, 5, -49, 100, -105, -112, -76, -72, 47, -4, -5, -119, -109, -115, -15, -39, 19, -29, -112, 82, 112, 45, -39, -58, -110, 88, -84, -59, 48, -46, -115, -71, -75, 3, 91, -8, 19, 78, 30, 39, -88, -23, 87, 39, 28, 17, -38, -104, -56, -20, 47, -37, -76, 80, 25, 70, -102, -9, 45, -3, 39, 80, 115, -52};
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
    msg.setTimeStamp(0.5769160490469717);
    msg.setSource(9670U);
    msg.setSourceEntity(8U);
    msg.setDestination(63905U);
    msg.setDestinationEntity(33U);
    msg.op = 15U;
    msg.tas2acc_pgain = 0.17364836409020468;
    msg.bank2p_pgain = 0.029506707435075996;

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
    msg.setTimeStamp(0.4917604517362032);
    msg.setSource(30636U);
    msg.setSourceEntity(28U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(138U);
    msg.op = 131U;
    msg.tas2acc_pgain = 0.46347093162228326;
    msg.bank2p_pgain = 0.2689807263596182;

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
    msg.setTimeStamp(0.17507839517933654);
    msg.setSource(40351U);
    msg.setSourceEntity(58U);
    msg.setDestination(64003U);
    msg.setDestinationEntity(154U);
    msg.op = 193U;
    msg.tas2acc_pgain = 0.09112734004973233;
    msg.bank2p_pgain = 0.08647431309215425;

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
    msg.setTimeStamp(0.3838074043600298);
    msg.setSource(52028U);
    msg.setSourceEntity(191U);
    msg.setDestination(30497U);
    msg.setDestinationEntity(15U);
    msg.available = 974001791U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.20113576135245403);
    msg.setSource(37475U);
    msg.setSourceEntity(246U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(97U);
    msg.available = 844350085U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.9192726892718156);
    msg.setSource(42248U);
    msg.setSourceEntity(56U);
    msg.setDestination(65126U);
    msg.setDestinationEntity(200U);
    msg.available = 2596557234U;
    msg.value = 63U;

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
    msg.setTimeStamp(0.13478630742551656);
    msg.setSource(42593U);
    msg.setSourceEntity(42U);
    msg.setDestination(27229U);
    msg.setDestinationEntity(103U);
    msg.op = 66U;
    msg.snapshot.assign("IZYXQBKTGGHH");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 87U;
    tmp_msg_0.error.assign("NFDRBGTFJTCMPJFMNBLMTHHPGLVRSLCOYOBALSKFAVVOTOMKIYUZHSXERRKEAAYGBXAUQPXBWSITZDEZUMHPWTGUISWJGJFQQVAEZXIFILRSENOVLJPDHEIOVXSIRUADXMCCBOUKTDYRXRHQAPYYXSZOQYQPGZZXEQCGQNGJWCQICQGFDNNYUVJKVWPTHIENURSDYKKDWDLNELDZBAKFFTIZSBACNUUZOHC");
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
    msg.setTimeStamp(0.2441655945164667);
    msg.setSource(64638U);
    msg.setSourceEntity(200U);
    msg.setDestination(7148U);
    msg.setDestinationEntity(145U);
    msg.op = 4U;
    msg.snapshot.assign("WPFIOQSOZXYGUJFUVAVANJHOXHKEXNBTPYXQLFBRWEVDADCCERZQUPOXYURDPIHGBZSELAIZLUTNUWWKZISYPHBCJZHGSVKVLTYPDMVAKFNZMWLYECOIRJAIASULJRNQBQJNKSAGRHZPQLLLUXHLBOPCFUNYWDVCCANFTTGFZHSTRJMFICWQCNPAVREWTFKYEWDMGMWHIVKPJBIDDSQXGKTJOMGFGB");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 29840U;
    tmp_msg_0.custom.assign("AKMNGGEWIETZUDNLHAPXTYZDYGWOKXSPQZXLMPJBKKRWZRLJPMVRTTEYMQGGWZPHBTLFTIBXFSZFLOXDHYKPNSAQMAWANNYGOBASHUXJTJWGNWLXURCAIRIFVSFOODDCJILBC");
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
    msg.setTimeStamp(0.206758110628545);
    msg.setSource(60565U);
    msg.setSourceEntity(4U);
    msg.setDestination(152U);
    msg.setDestinationEntity(82U);
    msg.op = 212U;
    msg.snapshot.assign("JPUAZZOCWBFOXWPOADEEQIAOVZVHMXCWAXVNSTJYVGFUWKNQIMQJRMDYNEQUJKHZCXUFHLJPBDLERHGZLSOAXIVLLAKPEFSBITLTSGZCQOUJKJXTBQYPSCRJMLDGBZEDSN");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.12025513922247999;
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
    msg.setTimeStamp(0.592152531154401);
    msg.setSource(21003U);
    msg.setSourceEntity(104U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(71U);
    msg.op = 85U;
    msg.name.assign("ROPGFONLNPGDLSLXSCJNUUAWKIQFFMQWTCBZALEYNWFERRDRVDAXEVYYFEJRNSSEFTCJ");

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
    msg.setTimeStamp(0.9496812880673987);
    msg.setSource(46145U);
    msg.setSourceEntity(135U);
    msg.setDestination(44370U);
    msg.setDestinationEntity(26U);
    msg.op = 1U;
    msg.name.assign("LASYOUSRZBXMDLHFKPSUAKGHEWOSUAGXBSVEBYTKPZHVFFNQUGCRXKTUHMUZUOTAZVYNYYXKNVDAQGMCVQCVLBIPSERYLREQIDMGWFFCENWJARNCP");

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
    msg.setTimeStamp(0.8372326121045446);
    msg.setSource(32723U);
    msg.setSourceEntity(210U);
    msg.setDestination(28811U);
    msg.setDestinationEntity(217U);
    msg.op = 100U;
    msg.name.assign("NAZIYFTTXUTDMQIKPMLDSJWNNFCSEULBZZOCBLUVMCSGWFYESWBVFTDTYBCVMRKQUKULGQYPYJQGRKVBOIFVODLOANPBWEXPJATYXNOZIPUMVMKBBDNZGAWZXPSDUOLSZYIPVDZSICGC");

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
    msg.setTimeStamp(0.9905698068916219);
    msg.setSource(44634U);
    msg.setSourceEntity(207U);
    msg.setDestination(26742U);
    msg.setDestinationEntity(216U);
    msg.type = 63U;
    msg.htime = 0.40563509684816446;
    msg.context.assign("FMBDOACYDPHPTZZDITHVEOVMIUNZTCOYSCNPJOLWGYJ");
    msg.text.assign("SBBXTGNTBMWJVWUJNLMWHDIIATQDPZXIRVKFCFJDIHAPDBQDHFIUJLGOWZDVGEXEFFHXXROSIALMURCYZGLVJEPEPELQIBSVZBSDAUYCRPWZOKBQSYGXEHGV");

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
    msg.setTimeStamp(0.7773363651780968);
    msg.setSource(25587U);
    msg.setSourceEntity(158U);
    msg.setDestination(29317U);
    msg.setDestinationEntity(116U);
    msg.type = 228U;
    msg.htime = 0.7889049971990538;
    msg.context.assign("VWPEIJQTCJJQRVGBNLWBCMOPFPJWBYUVBRCFEPIWGQREHMPXBQWLUXUZUNUQHPFNHHQOZLQORBHFFHYIXTNOOYDPLMIRLVNVPAACRIMKOBGTJEKCSWKWYZRGLDZYNLSJEDRUMUYDXYKHDGKEMTQICKVSSGIUSCIKIBGESGVFUZNWQAAATHXCOORVAQMDZJ");
    msg.text.assign("UYRINUTIKPBQHXUHTLCUYZZJZMYHQSEATHWTWVRXMKWWXJWGEANIPRNQGPFCEBPLWBCHIMOSNVDDQBAJJJZRLXSGZSMKMXSZJUNNYJJKFVBIVOQLOBGWDAQKPFZBFJHWBMYAIOPYWKLFDLYZLLCREEINGFACOFMKYRURUVAACOMOXASULCPWODXIQVKXCPRGQENEHBCDRICQGNTMVTZFPSUFADTHVMGKKXVRUSDIZT");

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
    msg.setTimeStamp(0.8604671668375936);
    msg.setSource(22239U);
    msg.setSourceEntity(184U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(47U);
    msg.type = 214U;
    msg.htime = 0.34119785807876046;
    msg.context.assign("MXVTLAAHPUGCRFRCUFHYKPKGMXEQKWASBEHMTSZABFKTEEKYAYQTLEZPZLQMQBBVQBWUGSCENPLYFNKITWPPNDYWBJIJWUWKEDKNJGLAXWXBURETXIBNRUVVGKLMXTELDFAFHGVZJZLDMKVOOXQPAMRSBGOXONRCQGWISVHJDOZSCDPJHQIUBMQYZICIVHFUANCNVHSPMDEZOFRZUFFSCGLNYRYGCIYDNCMOTTSIXILRXDJUTOJJOJZWDSHA");
    msg.text.assign("VANBAMHMYFDCMUDRATHYEFDVCTFPZOEEEUNZQSXXDVJBJEWOGSGLGZJPUCMLZVIVHORIEMZPWVRAPTQXAFHCHOXFLSBOTLECYCCCNBILCMAVOUBHHIMQJONBUJJWTXQNJFWRCYLYSMHNPGIPFLNVUEQ");

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
    msg.setTimeStamp(0.8409303716048658);
    msg.setSource(31524U);
    msg.setSourceEntity(196U);
    msg.setDestination(33598U);
    msg.setDestinationEntity(99U);
    msg.command = 119U;
    msg.htime = 0.8949091673839532;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 37U;
    tmp_msg_0.htime = 0.6971335147416203;
    tmp_msg_0.context.assign("TFTJECDUXQNJFZDQOXYALWNWDYINXRFWZXNCFMBFFNOQVOXNTPDKYCER");
    tmp_msg_0.text.assign("OJLJETETYDFZMJEBGQQIUHCDQRCZEQHASHVOFNZIEAEBRACLWOVKYUKZNFHUBRQFMFXNJXZIIXILIROTKSRPRIFPNGPQVCGMRHPVLYUETRTSDWGEZGGMFJXBFTQDWVXVKBUJCGJASWVLAPHRHUSLNTDXPMPHKYVNVSMFBOPDDWTQXCPEKCTOMRNJZXYXTOQULLZFANHKKHYGDDDZCSGWGYPAOWJSWESBYZNU");
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
    msg.setTimeStamp(0.5355255980664674);
    msg.setSource(35636U);
    msg.setSourceEntity(16U);
    msg.setDestination(1575U);
    msg.setDestinationEntity(211U);
    msg.command = 66U;
    msg.htime = 0.9151284647652251;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 6U;
    tmp_msg_0.htime = 0.970596342606579;
    tmp_msg_0.context.assign("JJWZAYVUCBUTFZXLCKSOFSXVGPKTZBNQHTUSFKHURBAPQBHQRMZINHGSCLCSIHCPIVAICDXCCYFETYLHHWBFFCUNRJOGXGRSMDILEOIQUWAEXQZUKYYGQVTBXPEGYWYCNXLEAJNJD");
    tmp_msg_0.text.assign("GXLIPOZNOBKQZMRHXQIXSQBISCLGIGAFJTSLVYNYPZPFOF");
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
    msg.setTimeStamp(0.012876580512884539);
    msg.setSource(28123U);
    msg.setSourceEntity(232U);
    msg.setDestination(21901U);
    msg.setDestinationEntity(11U);
    msg.command = 170U;
    msg.htime = 0.5604882227612356;

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
    msg.setTimeStamp(0.24655773176353402);
    msg.setSource(7693U);
    msg.setSourceEntity(103U);
    msg.setDestination(962U);
    msg.setDestinationEntity(159U);
    msg.op = 89U;
    msg.file.assign("TYXNLWKSICYWDVSBYOVHARDKYSWJUAQVSEFXKZEFTHGHOXGQGGNDIUHHJHIJABNLMDXEXWJCYFUWLYIVVVLPNOGNCRLXTSESLTTAPKPPCCNUBPTBHZIYEFXCLBJPUYFWUQAORQMEDFVCMMKVHQRAZPIIJZZOGKTWGFFPKKMUWRBGFEUODGXQJJIKSJRMZAMZDYNRCSMTNORJECNPGO");

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
    msg.setTimeStamp(0.40080645866016384);
    msg.setSource(13965U);
    msg.setSourceEntity(239U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(132U);
    msg.op = 169U;
    msg.file.assign("HEZVEVKRXGMEIECDQOVXGCPKSYNOSNYAZYLSCDSGBQRYRLQLAGKXVMBSBBJHOJFFXWBVWAMPHKFUMDGNJJEUIOJPWIQXTJJIHGUTIROLSQPUETNBDMCFVBYJPAFLOGYULALCHSHQPIOWPXXZDGJHQFBINCMWDQWAUFZHZDYNCLRBRFGZCIIQFFXHSHWOPTDKDWUTKRQBMTGALKAEXTKSARYTCNOJUPTYYUOIVTAEPRWCDKNZNMWN");

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
    msg.setTimeStamp(0.052482945650021096);
    msg.setSource(62948U);
    msg.setSourceEntity(231U);
    msg.setDestination(32282U);
    msg.setDestinationEntity(214U);
    msg.op = 240U;
    msg.file.assign("ELHLQUUWKUIBOAWKDDFTVOZLABJFVEFGOCEKZRRVPUZHFGESGRHMPVQPDEDOWABCXWRLHNRYEKHIKFJHGSPJWKBYPIOZTZDJGZCYCXKBRPYGHWNSSFNVBJYUOGHMBQIFAWXRNBJEMYIZQKROXNNJNEFCDHGUZKSLXYLWNSCVJRZMCPYYTUTWSXAUQARILGDGUPDXBLCWLUBXAVTHIIEDTVLMVQTMCJAYSXQPZXQITMOTNSKPD");

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
    msg.setTimeStamp(0.08224159626610728);
    msg.setSource(31014U);
    msg.setSourceEntity(37U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(165U);
    msg.op = 191U;
    msg.clock = 0.43547629044211034;
    msg.tz = 78;

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
    msg.setTimeStamp(0.873937772677689);
    msg.setSource(17554U);
    msg.setSourceEntity(249U);
    msg.setDestination(24086U);
    msg.setDestinationEntity(199U);
    msg.op = 25U;
    msg.clock = 0.1976418180472156;
    msg.tz = 124;

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
    msg.setTimeStamp(0.08534695869602715);
    msg.setSource(2059U);
    msg.setSourceEntity(231U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(151U);
    msg.op = 24U;
    msg.clock = 0.28414289812414173;
    msg.tz = 95;

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
    msg.setTimeStamp(0.2169302982549529);
    msg.setSource(20709U);
    msg.setSourceEntity(187U);
    msg.setDestination(8462U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.15486983400117504);
    msg.setSource(53752U);
    msg.setSourceEntity(58U);
    msg.setDestination(17267U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.828098182622672);
    msg.setSource(50380U);
    msg.setSourceEntity(54U);
    msg.setDestination(11888U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.054694270339653905);
    msg.setSource(45205U);
    msg.setSourceEntity(39U);
    msg.setDestination(30943U);
    msg.setDestinationEntity(151U);
    msg.sys_name.assign("BEYLOXAXAVQDPZEPLNBEFMUOJIABPIJWJIAYYNUOFEOVKIOMIWTUUQAXQLMYCSKWQDZCSBCIHJSBRRGHQRCFYTMNFQCGODQKKJSLCTBBZJVFPNUTLRUKQNMSLGUCVFFKWHSVZUAOTYEVKAPXBAXJXJZMOPHJDFBCEUFXXRQDHHCHTWWLGUOWNWTEZVQMSKRNVJNY");
    msg.sys_type = 151U;
    msg.owner = 43363U;
    msg.lat = 0.5594886845283815;
    msg.lon = 0.017780416126670362;
    msg.height = 0.6216106749634019;
    msg.services.assign("GZRUHHWVXSKAQUWVJNEOHCXHQIPDSCNJSVMTJOOQFAZWGIRDZGGEUXLBFSFBYWYSACBYRZUOEZKLMSUJGNTBPUBBOEIFLSQHUNQMVSDKYGYTYEYIGTWAZUGLADEE");

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
    msg.setTimeStamp(0.2538083167489953);
    msg.setSource(7282U);
    msg.setSourceEntity(225U);
    msg.setDestination(34615U);
    msg.setDestinationEntity(114U);
    msg.sys_name.assign("JGONBLXYMHGMAPLJBPVWVVTYPLMEPZBRCKECKTBZHJGBIJRCFQQTKYSGOTEDBYNRXXKOKWIIKLKCCGYZVFRXASMZSEDOCNHUMAUGRNQOLXHYTQSTUDZBFFFERBZAXZUQEQ");
    msg.sys_type = 140U;
    msg.owner = 20579U;
    msg.lat = 0.8405573104432565;
    msg.lon = 0.8594675956332793;
    msg.height = 0.7724420121382382;
    msg.services.assign("XKFGGZJRZPCTQVKSRLXPOTDEKWFLQHHTPXR");

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
    msg.setTimeStamp(0.22922537866116677);
    msg.setSource(65465U);
    msg.setSourceEntity(228U);
    msg.setDestination(50449U);
    msg.setDestinationEntity(82U);
    msg.sys_name.assign("UJNNRVDQHABOJIRQRUXPTZMMWIDOQJZVBNPCGSSJABOUUOYYSEKUVIFHLRBWYWZCSQCOFVSKANYKCHSCRKLXYELYXYEWQGBLUZDZJNOQPGELXCXRDHOM");
    msg.sys_type = 233U;
    msg.owner = 3349U;
    msg.lat = 0.8307558404634819;
    msg.lon = 0.8855008946266831;
    msg.height = 0.5328118406402375;
    msg.services.assign("MFTZAWSAWREUUSZV");

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
    msg.setTimeStamp(0.5765955188498344);
    msg.setSource(61260U);
    msg.setSourceEntity(254U);
    msg.setDestination(5356U);
    msg.setDestinationEntity(247U);
    msg.service.assign("LAZJJTISOKDCSPHXRVJQWMXHAPTNYQQBTPTDNHIFSBYELNEQRDZISQRHCNTPGPWWCALIBFXMYPCUDOUSHQNMPMJRITGAIPVPKNFTWDGRYZFZKFRUVEOAGXBMYYWDDKKHZAUATNMOVEORHDYGXHXIIFMLLBWEOYFLFCKSUZQUBLPALBGJXKJAVORYGKWSEOTFXQLGXWWCSIVVOJDGVUVBHSVBEJ");
    msg.service_type = 96U;

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
    msg.setTimeStamp(0.5146686070178468);
    msg.setSource(41906U);
    msg.setSourceEntity(29U);
    msg.setDestination(62644U);
    msg.setDestinationEntity(97U);
    msg.service.assign("JFJYDOIQVZORRQFYMUYCNPOXKDBDEGEGPTLJFLKUASWWZHTWOFEXCOYFHQRHSHXSLGYOTYNOZSXDIMWPGHBUCOXAUCWJDTVTTARRKHZVTQFBDFPWMZIPVUTJERXBSYCVIWPLQJSSSEAIYVTWBPLIMOAVKJBPHPENJCCMR");
    msg.service_type = 33U;

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
    msg.setTimeStamp(0.4656734957441271);
    msg.setSource(27927U);
    msg.setSourceEntity(126U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(14U);
    msg.service.assign("BXETLKZLOJYRWGMBTMUFYJBFAXMRVTPZRCOHTOWGSOITKHFHHTIRFLRJAXEYLFXOZHSEGIPOBNDAICYWSIALTPQHNRSICXPZKQSMTHSJPIAYNSHJUZRNYGCUULGJW");
    msg.service_type = 108U;

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
    msg.setTimeStamp(0.39239553685626405);
    msg.setSource(45655U);
    msg.setSourceEntity(37U);
    msg.setDestination(2334U);
    msg.setDestinationEntity(236U);
    msg.value = 0.204801954969957;

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
    msg.setTimeStamp(0.4762237778311986);
    msg.setSource(36656U);
    msg.setSourceEntity(152U);
    msg.setDestination(56769U);
    msg.setDestinationEntity(173U);
    msg.value = 0.6291360855127771;

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
    msg.setTimeStamp(0.701039060358566);
    msg.setSource(18420U);
    msg.setSourceEntity(5U);
    msg.setDestination(18128U);
    msg.setDestinationEntity(121U);
    msg.value = 0.49769258771223246;

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
    msg.setTimeStamp(0.6454976759576316);
    msg.setSource(33781U);
    msg.setSourceEntity(224U);
    msg.setDestination(41052U);
    msg.setDestinationEntity(88U);
    msg.value = 0.2361699963532119;

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
    msg.setTimeStamp(0.09616620135283427);
    msg.setSource(19117U);
    msg.setSourceEntity(244U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(180U);
    msg.value = 0.17449065584623202;

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
    msg.setTimeStamp(0.38056839912364104);
    msg.setSource(16379U);
    msg.setSourceEntity(170U);
    msg.setDestination(50356U);
    msg.setDestinationEntity(32U);
    msg.value = 0.004117076225624294;

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
    msg.setTimeStamp(0.5868902608050728);
    msg.setSource(34454U);
    msg.setSourceEntity(55U);
    msg.setDestination(27992U);
    msg.setDestinationEntity(82U);
    msg.value = 0.08175221217429263;

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
    msg.setTimeStamp(0.8539835053504604);
    msg.setSource(28092U);
    msg.setSourceEntity(167U);
    msg.setDestination(59651U);
    msg.setDestinationEntity(166U);
    msg.value = 0.15278721871842738;

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
    msg.setTimeStamp(0.21670401666011807);
    msg.setSource(35488U);
    msg.setSourceEntity(185U);
    msg.setDestination(34644U);
    msg.setDestinationEntity(66U);
    msg.value = 0.1410211226769883;

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
    msg.setTimeStamp(0.8190507860143761);
    msg.setSource(22622U);
    msg.setSourceEntity(231U);
    msg.setDestination(57477U);
    msg.setDestinationEntity(79U);
    msg.number.assign("ZFRBPLVOUYFRBLDEZRNBBIMZNCEZKJSIMSFJMEBXLTJULBIUGSNAGTUSXGJZQDPGKRHTWGQEVWCXZXOYYJHDBGMRAEGKFQOLCKWIXCNW");
    msg.timeout = 31521U;
    msg.contents.assign("IMQYKWQVMYCOTZRLWUXEDULWDRTKLPOSXWFXBMLVFVSWQINUFWZHTGZCZKZCHJMVKNTBGWBPYIIBDRIJOHEOKELGTUAYNAQKDEHOIRAAXGJXUJPXKSURJUSQRNMOCKGTOYAEVPJTVEJABPZYCNWSPNHMNPIYPVZGSBROSFUKVHMXXIFECYMDHTBBQFUQYDFYRIDALVCJDKAZJQSNXOXFWSMQHGELZPGRPOAV");

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
    msg.setTimeStamp(0.9369331142027781);
    msg.setSource(33237U);
    msg.setSourceEntity(165U);
    msg.setDestination(18339U);
    msg.setDestinationEntity(171U);
    msg.number.assign("IPQJARIGDWVNWYJVHMCTCXHJUKLFQDIAYJKPXEJKOUVNEHUQHKAEPFVNDOVYHGTLMBGZIHUMOFXAFVYZXTDYHAZTUQQKXBKZFPEOJEQUGBIIKGFJSDGMMTPBEPXDQZZCSYRSRDPPCSSQHBIVRNBEBCYUZWUBXNTECXNKFESPZBXXWTRWNJSAOLWVWD");
    msg.timeout = 40165U;
    msg.contents.assign("WOGYOGOPRMYSCYJCVZNKQIRCPTXJRTFANHEBBPTAIRHJBIJOEVGHUEZVSULGWJKYMAUBKEPWQHUWGNZVMGAMAVIWLQIAKZLONMSIRKDNNNPVYZXPPDKZQJIMCHFTOUMSSGFAFXMCACJHZWRUGEDSDZWVUER");

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
    msg.setTimeStamp(0.2779097912665428);
    msg.setSource(21667U);
    msg.setSourceEntity(230U);
    msg.setDestination(22323U);
    msg.setDestinationEntity(121U);
    msg.number.assign("FCNWSOBNJRJKLCUWHXNDDEYXUNYHKZZMKEXASSTTKFVKEDWPBQQPQPIIJNZAGWTJPFJDYHKMIGEACKXWTQYBCGXBVEAUVMJHCGAPNWNKLERZBXHG");
    msg.timeout = 46288U;
    msg.contents.assign("KUFCXRABEXFHUCNHVNINYUAVDTILERULIGJPEHQJQCOWMJAQPRMFIQOYOXSILXHZFUEESYJUMTJHFPQ");

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
    msg.setTimeStamp(0.6642055072019167);
    msg.setSource(12582U);
    msg.setSourceEntity(230U);
    msg.setDestination(46906U);
    msg.setDestinationEntity(47U);
    msg.seq = 1703206973U;
    msg.destination.assign("GIGNNCRJJYPRTQAITIYRRHUMZYLLNGVCJMGSHGZLDBQBHTOOBKCLBIWBDIXBQRDUOHVENJMJMXHGYAYUPNQHYZZLXTCFFWKXJMZVWOWPVGRPZKJKEOFPVRFXWVMMEELEAXWOBYWGDNSCZDMRGPCNUQETERVYXQKKDDCLDSISHTHNUQPWZMJYHTSEFBOUZKFISOATPSJIKXASUVIEBACSQLTYOFBLESINTQVLHQFAGRKAJDXUPAXUMA");
    msg.timeout = 1563U;
    const char tmp_msg_0[] = {-68, -67, 37, 4, -72, 62, -34, -25, 92, -98, 42, -42, 2, -109, 116, 26, 125, 49, 44, 22, 78, 27, 7, 72, 61, 105, 83, 29, -37, -72, 11, -13, 77, 86, 77, 51, 71, -118, -104, 28, -73, 56, 33, 73, -16, -30, 119, 108, 73, -108, 26, 40, 107, 59, 114, -34, -39, 94, 4, -27, -57, -74, -63, -75, -41, 45, -7, -2, 16, -56, 61, -100, 38, -14, 27, -76, -15, 70, -100, 28, -58, 47, 87, -111, 24, -79, 98, -96, -103, -50, 101, -47, 14, -102, 122, 110, 117, 98, -59, 24, 64, -41, -7, -3, 35, 107, 10, 45, -24, -118, -35, -4, -100, -61, -53, -70, -79, 126, 76, -111, -73, 11, 85, -115, -123, -49, 18, 106, 12, -68, -73, 120, -57, -83, 77, -71, -117, -128, 34, -13, 71, -69, 49, 114, -128, -56, -93, -47, 79, -115, -47, 96, -66, -7, -76, -127, -37, 47, 12, 4, 42, -115, -25, 112, 66, 19, 75, 37, 44, 84, 13, -40, 43, 6, 54, 29, 29, -34, 61, 119, -67, -9, 80, 38, 76, 6, 21, -43, 107, 75, -122, -21, 33, -56, 82, -34, 14, -68, 34, -67, -29, 26, 45, 59, -58};
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
    msg.setTimeStamp(0.7862902376710954);
    msg.setSource(52909U);
    msg.setSourceEntity(209U);
    msg.setDestination(61899U);
    msg.setDestinationEntity(8U);
    msg.seq = 2978392345U;
    msg.destination.assign("DASRDFLYZAWJONHEKXZKBTVGWOPFDMDTEQNJRJTRBHZYQOLCKKYDUKVIMBIFBNUTEJOBVBPKCGSBLOXAASENVMXGTPOUWEXVGZCZEUGETAIYZLVAPRXUKESQMPXLSAGCLDCIRINWJVPZFFMHOCSNQJHFXCSGWHQPWWTKMIRAXLQYYPOACDULHUJDUGNBHYKWFFPCUNHIFMYYBLXVRSAZTQ");
    msg.timeout = 39142U;
    const char tmp_msg_0[] = {73, 123, -53, 86, -67, 39, 8, -93, -93, 64, -73, 72, 72, 117, 41, 88, 112, -52, 58, -38, 8, -44, 87, -23, -5, 9, 99, -110, 119, 92, 14, -105, 107, -95, 44, 12, -110, 99, -5, -15, -127, -57, 62, 95, 126, -36, 31, 23, -110, -125, 0, -54, -56, -104, -98, -94, 34, -69, -57, 113, -91, -20, 125, 96, 77, -45, -110, 49, 122, -51, 29, -64, -66, -80, 15, 81, 111, -43, 92, -106, 89, 96, 49, 120, 16, 4, 58, 12, -33, -109, 120, -127, -80, -82, 27, 116, 37, 74, -72, -39, 109, 113, 102, 124, 104, 17, 8, -50, -63, -39, 82, -90, -126, -90, 86, -105, -85, 51, 35, -126, -32, -72, -28, -26, 103, -103, 3, 86, -83, 9, 97, 111, 108, 0, -11, -12, 33, 55, -97, -89, 101, -11, -59, 84, -99, 15, 14, 67, -100, -21, 46, 37, 14, 60, -19, 22, 28, -28, -70, -70, 42, -83, -77, 97, -18, 33, -44, -123, -103, -62, -32, 88, -38, 30, -55, 97, 124, 90, 36, 35, -123, 45, 65, 46, -77, -77, 8, -126, -93, 103, -104, -86, -124, -127, -29, 76, 92, 8, -98, -113, -57, 35, -84, 19, -100, -5, -84, 97, -91, 65, -52, 40, 92, -26, 100, 111, -33, -39, 12, -16, 36, 10, -40, -2, 34, -69, -36, -43, -119, -37, 72, -115, 65, -99, 54, -74, 51, -57, 71, -74, -61, 48, 23, -47, -118, -106, 112, -95, 67, 33, 46};
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
    msg.setTimeStamp(0.05428522124910384);
    msg.setSource(41105U);
    msg.setSourceEntity(208U);
    msg.setDestination(18558U);
    msg.setDestinationEntity(33U);
    msg.seq = 709939205U;
    msg.destination.assign("KCJLFSGXNMNHHMDCD");
    msg.timeout = 13439U;
    const char tmp_msg_0[] = {66, 18, -5, 25, 51, 116, -105, -57, 7, -43, -85, -43, -25, -107, 66, -106, 120, 81, -69, -75, 62, 68, -121, -62, -60, -52, -46, 63, -110, -116, 38, 75, -22, -44, 113, -85, 96, 34, -107, 56, 23, 50, 92, 22, -84, 79, -69, 45, -66, 92, 102, -83, -34, -4, -104, -107, -41, 62, -88, -60, 70, -63, -83, 121, -45, -82, -26, 57, 114, -96, -82, -26, 64, 42, 47, 11, -11, -87, 62, -120, 31, -117, 93, -34, 3, -122, -11, -103, 29, 115, -14, -93, 20, -37, -60, 57, 118, 5, 67, -87, -95, -120, 92, 50, -94, 86, 88, 7, 70, 78, 110, -8, 70, -59, 121, -39, -32, -69, -36, -12, 112, -11, -44, -4, -77, -78, 116, -16, -28, -63, 35, -109, -52, 117, 99, 42, -37, -78, 102, 30, -61, -108, 126, -75, -115, -78, 101};
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
    msg.setTimeStamp(0.33772949910803185);
    msg.setSource(53170U);
    msg.setSourceEntity(37U);
    msg.setDestination(1582U);
    msg.setDestinationEntity(79U);
    msg.source.assign("OTVSQGAUJXUWEFLGESNONRPVXPCAIFWZUYIPBWXZJPNCUGEECJYYLWAMNPSFXTZLVQQPBMMJNQFNYOZHZSLHIBYAWQEDYXUVUDKSGVZCSHKBVCROFYJALNTKLRRWLAMKTEMDOMHJTCKVYSGKONFQESGIXZMGHMUTUDTICPMTXRBXHASKJUQZERZRZRDJLCWXJDFUI");
    const char tmp_msg_0[] = {3, 34, 15, 72, 45, -111, -30, 87, 62, 32, 64, -124, 105, -67, 0, -87, 8, -83, -57, 27, -63, -33, 25, 49, -13, 116, -123, 27, -96, 88, -69, -43, -34, 119, 10, 92, -44, 8, -26, 61, -15, 3, 29, -96, 79, -8, 13, 57, 72, 85, 32, 57, 116, 38, -100, -33, -90, -111, 62, 77};
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
    msg.setTimeStamp(0.8987325028905);
    msg.setSource(42987U);
    msg.setSourceEntity(253U);
    msg.setDestination(24810U);
    msg.setDestinationEntity(239U);
    msg.source.assign("DAGCNVFKLSKBRJNFPCOZKILGCXOQDSVDEJHHEIHRNYXYAAVLAUZQXGHHFPTCXMPKVQNKCRBAIZKJNWXIUMYHAYMJMUTW");
    const char tmp_msg_0[] = {-14, 59, -118, -65, -33, 118, 107, -42, 24, 52, -32, 25, 102, 11, 37, -20, -106, 91, -126, 15, 24, 0, -120, -92, 111, 26, 82, -17, 11, 99, -80, 44, 17, -1, 49, -79, 117, 58, 107, 29, -45, 95, -88, -34, 34, 65, -112, 101, 121, -38, 123, -86, 50, 95, 76, -47, 106, -97, -118, 111, 25, -83, -52, -89, -92, -16, 9, -78, -10, 41, 67, 116, -39, -95, -49, -87, -48, -118, -84, 73, 52, 30, -118, 39, 32, 61, -41, -101, -12, 86, 106, -12, 39, 106, -117, -40, -86, -120, 86, -67, 11, 38, -81, 20, 12, -59, 124, -128, 113, -31, -55, -52, 62, -112, 102, -97, 102, 10, -7, -82, -34, 79, -30, 125, 99, 102, 76, 66, 63, -43, -3, 61, -68};
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
    msg.setTimeStamp(0.11296952267375504);
    msg.setSource(40875U);
    msg.setSourceEntity(85U);
    msg.setDestination(28517U);
    msg.setDestinationEntity(48U);
    msg.source.assign("BEJSANGZYSPQFKNJJDEHPCKMVQZTHWWNNODYJLYSVIKJPJLBZPSFGPMCCBKEQUZEBAMNFRQYNVVIDQKRKEQEDHNXIVEWWIAKPYXCTRLAUZGFXZCMEAJHWIQMQGIDLTPUGRLSEUWGTVRIHHYVCDFISCKMLPYLUBNUAMWWXIOXQBQRCUJGXOLGXASONNOZBVMMBYTWBKOMSYRHELRVLHOIHDFYCOXDUROUZJTSBFATUTFOWZPFATXZDJ");
    const char tmp_msg_0[] = {124, 125, 37, 44, 112, 45, 98, -84, 49, -9, -16, 7, 124, 119, -13, 126, -36, 60, -113, -115, -36, 109, -115, 94, -36, 19, -62};
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
    msg.setTimeStamp(0.6014681004704637);
    msg.setSource(63034U);
    msg.setSourceEntity(138U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(30U);
    msg.seq = 1593265644U;
    msg.state = 57U;
    msg.error.assign("XTGDNKHUSLTUZMYJIPDRWIEBFUSEREDWQOUGBHINXWPCIFZYCFLHSORQOYAVTCMVHGGASUTBZBBLWNHKQQACPWPZIHCFMTFGOXLKOSXKJPKNYGCJVJXRMMRMOWIPRHSJQMCBDDGSAKTVXKAKNQNBVXYRFAZYNVCLADEFZVOPDYFUNUZGSJNHMPJWIPRVNOLFYTDSBKZYXPIRSDJO");

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
    msg.setTimeStamp(0.6009159732208237);
    msg.setSource(58262U);
    msg.setSourceEntity(126U);
    msg.setDestination(23471U);
    msg.setDestinationEntity(145U);
    msg.seq = 420214417U;
    msg.state = 74U;
    msg.error.assign("BOTSSCEPFQTHSWVAMJQIBDIYPWWNLDNPFBGIEIFV");

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
    msg.setTimeStamp(0.04676904428220796);
    msg.setSource(50687U);
    msg.setSourceEntity(196U);
    msg.setDestination(16206U);
    msg.setDestinationEntity(63U);
    msg.seq = 77023240U;
    msg.state = 165U;
    msg.error.assign("CNZEGGLQHVKYCBAQRSFCUDNLJIXCFRGIOAYJOADIWGJQMPBYTWEFGSPLCVRNEGRIJJVVRTLBXMOIHKZBRXVEKGKLXXSMBZGLZLPEFYLOFERWSQSJUZMHNYEQSPUWUZBMFWAYNXMIISKTAYQFBTCDSHWWNOTYBXWCQUAYZRDHGXVKVDEMRLAOJAZIUTNRLHVKPFPNDTXJBPHUDKCDSABSHYFUUXZQKMVZP");

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
    msg.setTimeStamp(0.7950008862783271);
    msg.setSource(20400U);
    msg.setSourceEntity(175U);
    msg.setDestination(50266U);
    msg.setDestinationEntity(58U);
    msg.origin.assign("DNEHNTOOCUWPSNODVZHXINWYLFMHTZZUPGSMOAEKCJZAQHERCPTONKICIRGBPYBBQZJQCUWXXSGOFFPRXXTDHGPFECKVRBKBLDLAXVPBXQONDGWNMWNWJCZZOAEIFBATFDQNLFVUDVLTEWVIPHGRTSYKBWYJMWGJQKUCRPFSHSYYHIOLMECFVXIZAMPMBZLSKAMAKTYLZDMLTUKVJSSJWXKQUREYSNUGUJGHLACRTFYBUHRVIDQJGOQAVR");
    msg.text.assign("USNNMFDAYSXCANSGGMQQBLCJFAQXIYPMDPNVOASTGYTTWWJRKROBLQNXDPRXJCHATVHFUODMULJTUFKSIVFBNOFYYZHNUJHSQWRBZOPVEXETOIKOGNJLCZWXMOQPLPWZIGFHSIEKOCGZJTAJRLWHHKYRUSBHEXEDPLILUESOCDPVXIKHVDITBCBFYBJUZBZQZGVKXJLRZDCMQUFTHAAQWTUI");

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
    msg.setTimeStamp(0.5711480948736876);
    msg.setSource(33092U);
    msg.setSourceEntity(67U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("NBIBOIFMFOKDRUPYHXFVZEPWRECLJLLZVUPDQXXOTTTCQZXZSGMLSSMZFPEYCRPJUYLROVYENUMGNBTKRFYLIGXAYVGLWZMGRPCIWQDHVWJJKTQKAEZHUFEKHGDNMOWSHVQWIQYOU");
    msg.text.assign("QXFAAQIMRLPJBCNKXSVCFHYEUSRXATLHSQRAIXSCRWNBCDFOJZTGEEFVEZRLTQFGXWNUWXKHSOUITKKGUQLHEOZYUAHORMXGZXYUNOPJDYELKQTNXJYPFRZVLRGWVPNBVUMVPPOGCZQGDHIZEQTMRUWTWBJMYUNOWDMDLLHJJDLKYMVKGWZPXSDGBBAIWCHOMANIKVODIITPVEFCSPLMCITZWIBEFSJKFUZAADOEAHPYQBBSTFQJNRGHYSMCKV");

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
    msg.setTimeStamp(0.8221395498959175);
    msg.setSource(55456U);
    msg.setSourceEntity(209U);
    msg.setDestination(38678U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("VWILFNKLFSJAFESBPMYECOYEBFGHGTWDKDVRTQJODUNZFIIKRYVLFGONBNJVSOQPDLDTOFGLADCDTUYPOJSXYEXSAGTXPBAACZVBEBXCMNFUQTUGHPGCSWWPULRMMCUSXZBBVWJFWLPFHUNHXDPQZOVROZUHYEYAEYJWRQAAMZBEIKCYIQHYTWSNXLIIWUTVCRSQIPTMIZSNMIMVOJKDJVLAJZOHCLTDXEHXHHKRAZUGKEGRK");
    msg.text.assign("QQLGBUKWMWPENCIHWYPCCMKVHGFJTGLWTIOEKAIRMZPWLORVAPVJKGNLJQIKTEMJYDWPALDVBTAMFRQCLFBXXWOFXAXLJHZDFZMOUBKGXPHXERAHPCHGWGTYDGUHZVRBJKYQCRIUFSNOEUCFUAGUIDXTBZSHNDSOMODYUYYYQNBNAMWQYZHSOBNTDRRZTOHLQBEZOIEVASSESGCSQZQNDSPJWEJPVK");

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
    msg.setTimeStamp(0.017702725781961304);
    msg.setSource(21136U);
    msg.setSourceEntity(226U);
    msg.setDestination(62579U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("LQTHKCEGBVXANNKKMCHMEWSGDQSSWXMDBQYEIUPDMTMBXLXIWEARUULWEOKIIBDWYVENZGKZZBOWGECUYIRLTHSYTRUFWXIOQHXYBIGTCRTVNARVNQJBMDLUKFRQLYBPGOWJVBNMRDVNEJASSGLSQCUTQUTDPRSCIJERMAHJFGFRAXZOUMAE");
    msg.htime = 0.8471719785947716;
    msg.lat = 0.40343642592143647;
    msg.lon = 0.4326510171373452;
    const char tmp_msg_0[] = {55, -32, 79, -20, -105, -89, 24, 61, 14, 70, 84, 33, -66, -55, -63, 100, -9, -29, 70, -17, -24, -24, 88, -45, -110, 100, -12, 83, -71, 112, -83, -46, 26, -100, 118, -116, -103, 28, -59, 76, -9, -15, 98, -64, -56, 29, -34, -64, -101, -54, 92, -87, 73, -117, 77, 68, -13, -118, 47, -72, -64, 126, -113, 64, -27, -81, 68, 62, 2, -44, -6, -56, -10, -20, -26, 72, 81, -110, -75, -110, 97, 69, 50, 99, -95, 54, 25, 45, -99, -60, 107, 41, -55, -100, 77, -113, -75, 50, -114, -48, -11, -3, -83, 63, 124, 65, -62, -127, -80, -13, -88, -19, 64, 60, 3, -124, -122, 18, -71, -100, 45, -83, -61, -34, 20, 1, -91, 112, 60, 123, 89, 116, 122, -14, 1, -35, 29, -67, -58, -117, 97, -27, 3, -16, -51, -39, -51, -66, 14, 18, 0, -65, -69, 10, -57, 12, -76, 99, -31, -71, 86, -114, -75, 42, 73, 56, -9, -103, 87, 106, 37, -97, 70, 68, 18, -64, -38};
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
    msg.setTimeStamp(0.8757855437533945);
    msg.setSource(55085U);
    msg.setSourceEntity(145U);
    msg.setDestination(47384U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("RJWGWNNHKTUIIIRGAVHDDDFKWIWKZKXCYBCBARCMSPHCPGZOSEQPNNXSIRJCLMDNJXNERVUPKWFGMSOSXUPLGMZZHAPSBYQDQIXFAXUOTQZPMBOQEYZDIAGUFULLRYHQZRXLZAVTBFUDTTVNULKAJDASMKLTFSMVLWJQBWTEXTYFNI");
    msg.htime = 0.16175605102152057;
    msg.lat = 0.08587372188769826;
    msg.lon = 0.6590997352937279;
    const char tmp_msg_0[] = {-24, -26, -34, -126, -53, 99, 21, 63, -1, 70, 40, 108, -115, -65, -45, 9, 57, -27, -116, 36, 80, -92, -116, 38, 80, -94, 120, -78, -33, -7, -23, -13, 97, -117, 122, -80, -33, 99, 83, 109, -22, 41, -34, -55, 92, 68, -31, -57, 85, -98, 6, -32, 84, 68, -75, 51, -122, 10, 78, -25, 87, 53, -15, -26, -12, -19, -21, 90, 42, -113, -74, 71, -2, 22, 75, 107, 30, -26, 51, -73, -80, -55, 23, 4, 68, 73, 122, 45, 45, -26, -90, -40, 101, -35, -8, 99, 53, -111, 113, 21, -68, -30, -58, -26, -68, -53, 63, 28, 15, 82, 18, -4, 123, -31, -118, -22, 66, -75, -91, 47, -82, 43, 25, -4, -78, -68, -48, 83, 7, -88, 119, -103, 59, 95, 48, -115, -28, -56, -61, -15, -61, 92, 13, -112, -21, -36, 1, -117, 60, 8, 72, -31, 13, -95, -2, -77, -64};
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
    msg.setTimeStamp(0.05036535594973368);
    msg.setSource(8617U);
    msg.setSourceEntity(78U);
    msg.setDestination(35391U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("VBQIRKXXZFTGIAKOVPXSQMLAUXLXDSUQSRQBPJWCTOLSRKIWZUNYKRYTBTFSZYHMTPWGYGLGZEPKWXPJBPSUBVQLWKTJWIEYNKNFZYOEOIVKNJDDDHHNQXBFINEEVGRAZWLMHACULMAQHJGQVCMKVAHFDOOMZRDJFNGLDZRTLISCEHTORPMAPSOQSGGGNBIXEXV");
    msg.htime = 0.6568272691315694;
    msg.lat = 0.4536658954695989;
    msg.lon = 0.5094872340230869;
    const char tmp_msg_0[] = {31, 48, -109, 108, -76, -105, -65, -98, -78, 107, -48, 56, -28, -30, 43, 75, 41, 24, 59, 96, 117, -8, 78, -118, 22, 74, -44, -88, -93, -122, 96, -91, -28, 3, 112, -60, -3, -111, -2, -70, 2, -23, -6, -91, -119, -30, -90, -28, -1, 101, -52, 64, 115, -81, -123, -51, 72, 70, -88, 18, 8, 7, -38, -14, -77, 111, 18, 38, 39, 73, 94, -98, 80, 119, -10, 112, -97, 37, 83, -104, -89, -41, 71, 113, -1, -78, -122, -22, -6, 70, -119, 25, -111, 24, -111, 101, 17, -103, -18, -50, 16, 41, 65, 26, 98, 58, 101, 41, 75, 87, -86, -13, 27, -54, 32, 79, 79, -36, 65, 48, -93, 80, 111, 118, 82, 48, 96, -41, -98, 114, -74, 84, 7, -122, 48, 70, -73, 52, -81, -77, 79, 117, 86, -74, -104, 117, -30, 115, -95, -12, -9, -68, 8, -113, -25, 26, -64, 71, -5, -77, -104, -126, 30, -7, -15, -20, -111, -126, -103, 92, 79, 13, -49, 29, -74, 50, 43, 25, -69, 106, 25, -46, -119, -23, 98, -127, 3, -25, 15, -126, -32, 49, -77, -117, 36, 13, -41, -98, 101, -63, -80, 110, 30, 125, -81, -34, 80, -52, 48, -98, 80, 45, -7, -34, -123, 45, -65, 81, 40, 96, -111, 114, 60, 15, 15, 16, -83, 119, 34, 8, 9, -55, -56, 44, 63, 4, -90, 44, -126, -17, -24, 104, -3};
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
    msg.setTimeStamp(0.18796908194631634);
    msg.setSource(57045U);
    msg.setSourceEntity(102U);
    msg.setDestination(9790U);
    msg.setDestinationEntity(162U);
    msg.req_id = 36472U;
    msg.ttl = 52671U;
    msg.destination.assign("ADFMOHIPFPIWOGIGZDLPBEXAMYQPCGTSLBLTBSGVWKYGZFIHWMAMNZSSHAVBISXNZPADJVTRXYDRYNLBRCLJGREZVAXOVDTQHRZEJHGQHTUWHRUFKKJWQVLGBUGMMYQZXYKMKPHAHLKCUSSUAMEFPQEUDFOCUVNIZLMPTNOAFSQITXBEHDRJOMWDCJJOLCXNQYELCZXGB");
    const char tmp_msg_0[] = {29, -17, 8, 24, 59, 86, -85, 121, 109, -5, 121, -106, -56, 14, -54, -102, 94, 93, -67, 28, 47, -27, -21, -5, -49, 53, 105, -122, 22, -91, -127, 91, 57, -65, -64, 58, 3, -89, -27, -76, -71, 108, 103, 52, -56, -42, -4, 94, 60, -71, -28, 34, 126, 43, -11, 61, -74, -40, -95, 39, 81, 95, -53, 33, 103, 81, 99, 41, -37, -117, 22, 45, 107, 114, -39, -11, 22, -81, 101, -91, 120, 74, -102, 111, 69, -109, 8, 107, -62, 30, 68, 6, 113, 73, 123, -78, -36, 30, 125, -13, -94, 107, -118, -23, 85, 105, 27, 46, -77, -111, -72, 119, 12, -49, -56, 1, 8, 3, -99, 91, -81, -73, -78, 63, -126, 86, 12, -3, -91, -23, -29, 34, 48, -5, -74, 34, 32, 6, 5, 97, -100, 79, -42, 67, -93, 6, -28, -118, 99, -90, 11, -79, -83, -66, 70, -70, -107, -92, -46, -106, 44, 94, -69, 39, 119, 52, -48, -105, 75};
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
    msg.setTimeStamp(0.020743290358874344);
    msg.setSource(42308U);
    msg.setSourceEntity(16U);
    msg.setDestination(11651U);
    msg.setDestinationEntity(6U);
    msg.req_id = 60986U;
    msg.ttl = 9631U;
    msg.destination.assign("SVHWRZNVWOZAHHACGQEKGLYOQMALJPFMGBLMFQAXHGOBRMAKACZXNUYPSLKDQMZFOKJWUOIEYSOQRRDBETJWWURTWVXRTGPMZIUCVWBCQBPSGZNXNRBVTDIMGTNFCYSZLCXJZKTSIUOQPVHPVAYHMWNEDKHCPNFDITVVHEMSJ");
    const char tmp_msg_0[] = {118, -68, 66, 119, 65, -6, 10, 116, -45, 27, -125, -41, -86, -74, 100, -124, -37, -48, -29, -72, -73, -19, 26, -51, 98, -17, -92, 124, -31, 65, -53, -2, -12, -67, 122, 83, -2, -33, -43, 101, 106, 66, 15, -11, -113, 15, -27, 61, -54, -81, -84, 37, 40, -11, 112, 57, -48, -27, 15, 124, -95, 94, -85, 76, 76, -65, -74, -60, -127, -73, 60, 4, 0, -65, 104, -73, 93, 17, -51, -70, 8, -55, -26, 80, 0, -94, 87, -108, -86, 117, 92, 64, -107, -39, -74, 91, -104, -34, -78, -72, 2, -116, -116, -99, -42, -3, 26, -63, 61, 42, -49, 19, -30, -126, -75, 13, -73, 100, 93, -37, -103, -8, 76, 65, -17, 13, -9, 2, 50, -26, -11, -81, 32, -11, -40, -98, -93, 97, -116, 39, 88, -57, 88, 50, -53};
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
    msg.setTimeStamp(0.746431305795848);
    msg.setSource(5964U);
    msg.setSourceEntity(175U);
    msg.setDestination(19883U);
    msg.setDestinationEntity(109U);
    msg.req_id = 48017U;
    msg.ttl = 46052U;
    msg.destination.assign("PSILFGRGBDFNXNTYOVFYYOOIPKAXHALLBQIMMKUXTRFBARDESMFFESQZQURJZJEXNDPIGTNBNGJZUJROQIPXVLQNPVAQLKKLBRRSAVNSHUPBZDWWJMUZPZKXIBTLIZMKYCOTIMGPSOGKVEXQEPFZWOCNKESFRDHGEVIAHLVHGYXHYQGVQRUZTWNTOFJCKUJHHCTLD");
    const char tmp_msg_0[] = {1, -106, 51, 60, -61, -94, 39, -92, -90, -11, -63, -54, 52, 72, -81, -27, 81, 45, -95, 18, 2, 103, -7};
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
    msg.setTimeStamp(0.687674188888258);
    msg.setSource(9485U);
    msg.setSourceEntity(102U);
    msg.setDestination(12824U);
    msg.setDestinationEntity(195U);
    msg.req_id = 17918U;
    msg.status = 179U;
    msg.text.assign("MAFQYIAGEVRLFBIJQVRJVTKRSHYEQVOOHNWLWIUBYKXKMOFBZIGVSHWJPXDTQTRAUIKWPMQTJXDFRZLZHKMKFD");

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
    msg.setTimeStamp(0.15946467866147884);
    msg.setSource(16686U);
    msg.setSourceEntity(76U);
    msg.setDestination(21909U);
    msg.setDestinationEntity(102U);
    msg.req_id = 51282U;
    msg.status = 130U;
    msg.text.assign("KVVXMEJAGYRIAQGWNLYYBMWMHDPHCULPAPOTPUSWKSHDJSGQOKVRKLGTPCINOMVRNORWBWBJBQCSECXSDORHXJUWR");

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
    msg.setTimeStamp(0.38390865405400054);
    msg.setSource(57584U);
    msg.setSourceEntity(25U);
    msg.setDestination(57973U);
    msg.setDestinationEntity(53U);
    msg.req_id = 58516U;
    msg.status = 42U;
    msg.text.assign("NFTKMXVLJYVAFHLYFZLMFCNNEWYAWSUDOATHLLFKGOKBIHTTQCNVTOUCRRJRWBJOJDUYIMWJFEJIJQBBZQUOLJCWTMEHMKVROVDDJMPEPYOQHBVKGCGFPNGLMIPXUMETMGXSABNODKRXGUHSBNBIDGKRREOXVFCENYQZNLSTIEEKYIUPIDCQWAWZUBLCWDTRHWSUMRALPFVZXPASHQKQQRXBDKPZZAXZSSWCHESDAYJQZXCFIVY");

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
    msg.setTimeStamp(0.9518596304236527);
    msg.setSource(61010U);
    msg.setSourceEntity(192U);
    msg.setDestination(40681U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("IXXKDOIJHOTUFTFHGXJOQBXMTENRUIEMLRHSKDLXZNBRPBMIRQGIPSJWQDLAIKVWUBSDOJXVNZUDALMQWJCUYFTSAVALKMIOFQMMRFVLTAKICRJEGWWKPDREPYOQTGYZMCHBYUHLLUZJGLBKYGCKWIZZH");
    msg.links = 2978570369U;

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
    msg.setTimeStamp(0.35190055949654697);
    msg.setSource(20037U);
    msg.setSourceEntity(238U);
    msg.setDestination(17841U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("LMZPTXGANMMVVLUGKIJBWQWWHEKZDUEPYNZFRDIBQZEGSYGSMTGYIOBIYCMWUFDOBDGAUWTCQIJYHLJJTCNLVQREXKHBAPPDNCRYGBZVWETF");
    msg.links = 3719956439U;

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
    msg.setTimeStamp(0.9601530826892009);
    msg.setSource(56569U);
    msg.setSourceEntity(2U);
    msg.setDestination(35918U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("MDBFIBMPLSNJQTHBYFFQJESGZXDHXJOYCGEA");
    msg.links = 2235244414U;

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
    msg.setTimeStamp(0.1932653264226547);
    msg.setSource(50643U);
    msg.setSourceEntity(71U);
    msg.setDestination(21623U);
    msg.setDestinationEntity(71U);
    msg.groupname.assign("GYGNTAABYJGLVYDQKSYZQKBHJNURBUQWZYYJQOAHSXJNAYUWYYPMJRLXKFIOWCWLHEKPHQOUEJDAJRGJDZ");
    msg.action = 100U;
    msg.grouplist.assign("MSMZUVXRBCGNLWDKWJHXVYIHHRWCGNPCKUSGKTDNDBBLATLHRNJGDEWOHTRJMHMYQZ");

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
    msg.setTimeStamp(0.6209253178216132);
    msg.setSource(1763U);
    msg.setSourceEntity(235U);
    msg.setDestination(14582U);
    msg.setDestinationEntity(184U);
    msg.groupname.assign("RBIPSDURFWFPAOVKRXZANXGASLHCXQNJHMWBRCZSEDWGMJJQEZMSINFMEWITLYPXEQJMLWBCRRTJEDXMMLHTPDHYGUIOHSNMBECZPPAHXVIODDFFHROUUTZTNBYOXQJIQGGSYVWIQOWUNWZDVPKINPGFNKKCJVBSYBHXAVMALBCNCFBWTHYCIQOZXWYGRRECKETEDVMAUVZNYGLE");
    msg.action = 105U;
    msg.grouplist.assign("TLFYAVYFDOJPCQPBBOXQRHJLTERQRHOJRJDBKKQDALYKPASGKTBMYIXSGNXAIOYGNCARZIFHSQVEPELBUIFWRMMCCWMULGSRYQZCFVUJMHESLQIJHPYVCDLZSNAOVZXBSCLIFMTVGPSDTBWUYTODKWNDFONAXGMXHCDXKNWVSOTEUURVUPHSFCZEKZEWMHKHHPEDCJZAVGOGIPZDKIUFLYRXWGQZMWUPNWZ");

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
    msg.setTimeStamp(0.905004751801333);
    msg.setSource(20990U);
    msg.setSourceEntity(88U);
    msg.setDestination(25302U);
    msg.setDestinationEntity(50U);
    msg.groupname.assign("PITZCSKCFVCJMYNLKVGPSINIGYXFHJLK");
    msg.action = 29U;
    msg.grouplist.assign("SKLNHPBKYSCBYSKWTSRYHUPTIQPBZFFZHJXJNIKGOBXVVNRXIRQJZKLGIJRLKUUGCBHLLKFYQWFUVMGSRNPSODYCHPOTNBAEHIEBJAKTTKAUGRPMNUPEEQOFQCCSMGQZBDLAEDJHWZQXACWUVVUPLAXMCQVXIWIHNMAQTRYEOMIDCMMYVVOUFZSAOODQWWETKJDRNIDCXXGBWHFWOWFYSFAGNUMVLTEZGTGORJJIXLRH");

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
    msg.setTimeStamp(0.11884903308020345);
    msg.setSource(46911U);
    msg.setSourceEntity(18U);
    msg.setDestination(65126U);
    msg.setDestinationEntity(188U);
    msg.value = 0.45705761331347605;
    msg.sys_src = 15896U;

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
    msg.setTimeStamp(0.09677064113687628);
    msg.setSource(6593U);
    msg.setSourceEntity(241U);
    msg.setDestination(44297U);
    msg.setDestinationEntity(162U);
    msg.value = 0.717527984474741;
    msg.sys_src = 40481U;

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
    msg.setTimeStamp(0.6171236133654713);
    msg.setSource(14579U);
    msg.setSourceEntity(97U);
    msg.setDestination(36231U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2822904364460149;
    msg.sys_src = 57261U;

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
    msg.setTimeStamp(0.8085226248217472);
    msg.setSource(7217U);
    msg.setSourceEntity(94U);
    msg.setDestination(53210U);
    msg.setDestinationEntity(203U);
    msg.value = 0.8775762008095462;
    msg.units = 249U;

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
    msg.setTimeStamp(0.08083582774884002);
    msg.setSource(18080U);
    msg.setSourceEntity(152U);
    msg.setDestination(25503U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6910443082543685;
    msg.units = 249U;

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
    msg.setTimeStamp(0.059098748154848724);
    msg.setSource(16163U);
    msg.setSourceEntity(208U);
    msg.setDestination(18004U);
    msg.setDestinationEntity(156U);
    msg.value = 0.008437882588910539;
    msg.units = 200U;

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.5372217053216652);
    msg.setSource(48908U);
    msg.setSourceEntity(174U);
    msg.setDestination(5079U);
    msg.setDestinationEntity(124U);
    msg.id = 110U;
    msg.range = 0.6736770534629093;

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
    msg.setTimeStamp(0.2945910515088317);
    msg.setSource(53091U);
    msg.setSourceEntity(132U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(233U);
    msg.id = 133U;
    msg.range = 0.6890378540558814;

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
    msg.setTimeStamp(0.4490156993198945);
    msg.setSource(38456U);
    msg.setSourceEntity(132U);
    msg.setDestination(52417U);
    msg.setDestinationEntity(137U);
    msg.id = 144U;
    msg.range = 0.36134623328838966;

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
    msg.setTimeStamp(0.8921218062031369);
    msg.setSource(10107U);
    msg.setSourceEntity(190U);
    msg.setDestination(43368U);
    msg.setDestinationEntity(252U);
    msg.beacon.assign("ARSZNOWIXZIWHYZBRZPVYPCCABYTDPPGKFEWXHQOPSOBXVQLNGZIUFJGXMEVZVYVOKISYYXHBTFBRYHFVWMWSHILTWLOISGECFFKEGNSUPXDFJULZNF");
    msg.lat = 0.4767498504422417;
    msg.lon = 0.9280667010954143;
    msg.depth = 0.6332365287955024;
    msg.query_channel = 227U;
    msg.reply_channel = 139U;
    msg.transponder_delay = 147U;

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
    msg.setTimeStamp(0.3895817151848733);
    msg.setSource(78U);
    msg.setSourceEntity(87U);
    msg.setDestination(2251U);
    msg.setDestinationEntity(250U);
    msg.beacon.assign("NRMPXONSMRCOZGUWUKNMXUEZGCYRGSAVNWGMRVAWERCMIAMIWKLKUFHKKETCDUYYFDBEMPPXWUXVGVXZPHHUNLEUAGMBAGQPNMIJDBGBHQZWHTTSQAZLTVAODQHCKEHNCBLKYTTBAROAFVPPPLNLWRUSYOQEZYNFWOZIAPJFZJMHPJVSGDFVZVEKXRCBYQJQFSSDTQFNJVXFIXJGSSBODTUXJEJKCYFJIIIBCCKDH");
    msg.lat = 0.13293294580386728;
    msg.lon = 0.39112074106214556;
    msg.depth = 0.20674584706114396;
    msg.query_channel = 32U;
    msg.reply_channel = 179U;
    msg.transponder_delay = 47U;

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
    msg.setTimeStamp(0.0005064781861191525);
    msg.setSource(32373U);
    msg.setSourceEntity(98U);
    msg.setDestination(19618U);
    msg.setDestinationEntity(21U);
    msg.beacon.assign("OSJOXKCHZQPESADFJCFVGIAUYOZOXWZNFFYKMLHRNSBMFDXRUEFZCVKZLMBYTYWRKRJLXLTWCVGHRAACWRFNQP");
    msg.lat = 0.19837568025413665;
    msg.lon = 0.18422661424563502;
    msg.depth = 0.36657787686543963;
    msg.query_channel = 145U;
    msg.reply_channel = 100U;
    msg.transponder_delay = 169U;

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
    msg.setTimeStamp(0.024927255582482433);
    msg.setSource(25522U);
    msg.setSourceEntity(227U);
    msg.setDestination(49982U);
    msg.setDestinationEntity(90U);
    msg.op = 3U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HMACIGHLLZMDOPDBQEPSGYOZXTGJKULRKVYTGRONFSSLFYJUXSDFWF");
    tmp_msg_0.lat = 0.6390052925942442;
    tmp_msg_0.lon = 0.6362817984538125;
    tmp_msg_0.depth = 0.2311351844748063;
    tmp_msg_0.query_channel = 46U;
    tmp_msg_0.reply_channel = 82U;
    tmp_msg_0.transponder_delay = 27U;
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
    msg.setTimeStamp(0.1983856425670899);
    msg.setSource(18604U);
    msg.setSourceEntity(98U);
    msg.setDestination(37782U);
    msg.setDestinationEntity(238U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.6833795851151598);
    msg.setSource(33763U);
    msg.setSourceEntity(207U);
    msg.setDestination(39798U);
    msg.setDestinationEntity(190U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.5762327122254004);
    msg.setSource(24176U);
    msg.setSourceEntity(158U);
    msg.setDestination(33173U);
    msg.setDestinationEntity(174U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 124U;
    tmp_msg_0.entities.assign("FVEKNQRRXXSYFGMJKETOONEGCPBZORLUVCANCEFSCXQYVTRVHWZOOPKCGUKDQBSULLNVMBLPRIVYTAHMXDQLIWMJNPFAVBLKDBWHNIWYNDKASHMKALCVKMOMKJLJQQCSJHDYXFQWXIZOHRTGPWKYIRBTTIACHEYC");
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
    msg.setTimeStamp(0.6382972608892996);
    msg.setSource(13044U);
    msg.setSourceEntity(108U);
    msg.setDestination(58987U);
    msg.setDestinationEntity(254U);
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("SZZPZFEURXWJESNYJMQSOWJFRRYSUWHYNTVQILHNGGIELRTXXVKRYOZCYEJNJRIKAUZYLKUPNXMYBYQZNBXIZSQDLGFPDHTPOPTPSJHOJDFDCRLAQVAZDGDE");
    tmp_msg_0.predicate.assign("SYOCVEVZCYJVQZXSAODMLADPCAFWVUESMPIJKMHVCYJKDQOFWJRQDTRFXWKIHGUGUWYQUVNXHZXQWAJOWQCZRIRNNVTKDSCHYPKIFTITJITCNXFLOIBCGMJQLMFYPSRQGKWIGAZXVDGFR");
    tmp_msg_0.attributes.assign("LWLOOVYOKHKCKKOVMFKGPJDOVJQCYHCHMXIQNCXHOLYXUJMGKMMMWSMW");
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
    msg.setTimeStamp(0.939354425367792);
    msg.setSource(45118U);
    msg.setSourceEntity(132U);
    msg.setDestination(9629U);
    msg.setDestinationEntity(235U);
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 212U;
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
    msg.setTimeStamp(0.1320911595481985);
    msg.setSource(64634U);
    msg.setSourceEntity(24U);
    msg.setDestination(51064U);
    msg.setDestinationEntity(82U);
    msg.op = 229U;
    msg.system.assign("SIJXLZBPCDNPZDSAQBQWTOWFVFDPTCYSURZYJTLRATBEFUYOMIRHQUOLJEPFENKKVXLYPSERJSKLNFECJRHAIGZKEBUWEBRWXRGNCMWCKPCJHLGPOQMSJQAHXWGBNVMYCDIFSRGANBZMANIGAJGSNVYHDDMXUQAEIQYKOPXFHCHTQKCZILADSJIKZYUDTFLCVHHRWGLWTONIZDORSVYKOXPMWXDU");
    msg.range = 0.6092766122342027;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.23350608293245523);
    msg.setSource(28970U);
    msg.setSourceEntity(67U);
    msg.setDestination(9792U);
    msg.setDestinationEntity(63U);
    msg.op = 7U;
    msg.system.assign("JQHCPLEQDAHMYXRHEYLOBLBXUMNLJINITTPJEVHBZOCSKXNMGCFZPJIUWTAPYYBWSPHVSDQQOAGKMDOIKFVVGGOZQRKETURSKZNQFKPMDWYXXUILRDWDGUGCTFXDAABYLGXCQWFCZCNFIABELYEWVHUVVXYMHIRKOONBBKZASPPRADINHFQTJSHDWTQZMKFTODPUSTSZVWCGANOZLMWEEJGUCJIRKLOGMYVUSNTSPRCZQI");
    msg.range = 0.34784133042915;
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.09450306117494522;
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
    msg.setTimeStamp(0.9470849857893944);
    msg.setSource(44599U);
    msg.setSourceEntity(18U);
    msg.setDestination(41714U);
    msg.setDestinationEntity(241U);
    msg.op = 214U;
    msg.system.assign("NYEBOJXIMXNVZZKFAWFVHRUMLKCOQQNSUWIPCAHCWSNWGVXCTDVKDRKRBLTHRIIBYURJYQUPMURTXQGHEYGCLKHBBBYTPEBKQJODYIJMDGSUKSXQCJOHCOGAMMZLUEUTLPEJOEBNFEEPIYKCEFZLRFFTNJIQASBSVIFRWQDVGIOQAYPHWZLPDTTDZTRTJNZAHFULDKVMEWNUDPMSAVYHXNPVWFSJXKLDBAOMGCSROHJPXWGWFAZYNSZO");
    msg.range = 0.3189142801896606;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 754431987U;
    tmp_msg_0.messages.assign("TSAWENBSKIGWUBFKSNHUITZQWOULYQSCULFDJROKQQHMWJOXWYEDEYJCRNAKALJAXDVJ");
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
    msg.setTimeStamp(0.20321938943321705);
    msg.setSource(29137U);
    msg.setSourceEntity(103U);
    msg.setDestination(40754U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.9625454097111471);
    msg.setSource(11383U);
    msg.setSourceEntity(169U);
    msg.setDestination(47149U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.5294047836656604);
    msg.setSource(8890U);
    msg.setSourceEntity(14U);
    msg.setDestination(42083U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.682918084800076);
    msg.setSource(1853U);
    msg.setSourceEntity(37U);
    msg.setDestination(27347U);
    msg.setDestinationEntity(110U);
    msg.list.assign("DISUPZBDKSQKOPHCQECMFWKTTUHKJGVSNHRHNIGCCVYAZBIHQMCPVFSNKYLYFTFJXROAXGOLUTRKEMZNKGSEBXSHRZAOBMYXMFDRLVEIMOIWAPSBMTNSJTYONLJPPCELDWZBFNAWZYRCPGLGFSUEJQRBTAEIMQJDVHFIURXLOV");

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
    msg.setTimeStamp(0.056122900288424704);
    msg.setSource(33716U);
    msg.setSourceEntity(241U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(150U);
    msg.list.assign("NFOYTPDGXVYHZEOBLTRBIRXPJFTWTQIERGIHHERCKKSSZDLRWVNTGOPOHQLCNFXBGPFEAXDJJQCIQLAATLVBYVAIBHXMYMQUAEPWYJFBDAYDACKJYQHH");

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
    msg.setTimeStamp(0.9216289597185352);
    msg.setSource(15354U);
    msg.setSourceEntity(170U);
    msg.setDestination(9434U);
    msg.setDestinationEntity(145U);
    msg.list.assign("IFXZNBNZAJKHJYXNCPVSKJXEMDWHKSKREQQFDWTXFXIGPNOOBLOYKQUUVQTWTPDHNOIKUJMZODTZPZGEWJUCGFZNATEQOGAYDUYBTMXWDCBNCMREWHSGPYJOJ");

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
    msg.setTimeStamp(0.9210628372117589);
    msg.setSource(17968U);
    msg.setSourceEntity(8U);
    msg.setDestination(64842U);
    msg.setDestinationEntity(97U);
    msg.value = 8765;

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
    msg.setTimeStamp(0.44455570696566526);
    msg.setSource(54627U);
    msg.setSourceEntity(46U);
    msg.setDestination(600U);
    msg.setDestinationEntity(64U);
    msg.value = -23048;

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
    msg.setTimeStamp(0.06357335720492852);
    msg.setSource(40605U);
    msg.setSourceEntity(122U);
    msg.setDestination(4997U);
    msg.setDestinationEntity(244U);
    msg.value = -7982;

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
    msg.setTimeStamp(0.9586778019806578);
    msg.setSource(6989U);
    msg.setSourceEntity(166U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(31U);
    msg.value = 0.06016982600367782;

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
    msg.setTimeStamp(0.5255122647320895);
    msg.setSource(58609U);
    msg.setSourceEntity(131U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(240U);
    msg.value = 0.4262953938137555;

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
    msg.setTimeStamp(0.5894725432676177);
    msg.setSource(17849U);
    msg.setSourceEntity(120U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9792635632599271;

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
    msg.setTimeStamp(0.30954658629027654);
    msg.setSource(24914U);
    msg.setSourceEntity(28U);
    msg.setDestination(64872U);
    msg.setDestinationEntity(164U);
    msg.value = 0.45890378836179413;

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
    msg.setTimeStamp(0.2968742133814123);
    msg.setSource(41843U);
    msg.setSourceEntity(26U);
    msg.setDestination(51164U);
    msg.setDestinationEntity(161U);
    msg.value = 0.7433867195953687;

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
    msg.setTimeStamp(0.863508628638801);
    msg.setSource(7191U);
    msg.setSourceEntity(240U);
    msg.setDestination(790U);
    msg.setDestinationEntity(198U);
    msg.value = 0.6038586337408416;

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
    msg.setTimeStamp(0.3063970447685802);
    msg.setSource(3787U);
    msg.setSourceEntity(242U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(91U);
    msg.validity = 36040U;
    msg.type = 202U;
    msg.utc_year = 4495U;
    msg.utc_month = 222U;
    msg.utc_day = 22U;
    msg.utc_time = 0.9335537814048666;
    msg.lat = 0.3009518977269485;
    msg.lon = 0.2586139865804763;
    msg.height = 0.4537771983592954;
    msg.satellites = 139U;
    msg.cog = 0.7528636114380146;
    msg.sog = 0.9602797681805061;
    msg.hdop = 0.19074072197773095;
    msg.vdop = 0.13922113327426067;
    msg.hacc = 0.9657527553575378;
    msg.vacc = 0.6952230037500613;

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
    msg.setTimeStamp(0.49247480864851856);
    msg.setSource(13337U);
    msg.setSourceEntity(45U);
    msg.setDestination(55337U);
    msg.setDestinationEntity(245U);
    msg.validity = 64397U;
    msg.type = 30U;
    msg.utc_year = 33940U;
    msg.utc_month = 216U;
    msg.utc_day = 110U;
    msg.utc_time = 0.8045602232177406;
    msg.lat = 0.9599406643826797;
    msg.lon = 0.318412939955263;
    msg.height = 0.03291118524098713;
    msg.satellites = 233U;
    msg.cog = 0.5719767461947102;
    msg.sog = 0.06950070236371686;
    msg.hdop = 0.3840233230403255;
    msg.vdop = 0.47086207507274747;
    msg.hacc = 0.2818566777938708;
    msg.vacc = 0.29528493687175583;

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
    msg.setTimeStamp(0.6642338092012537);
    msg.setSource(22372U);
    msg.setSourceEntity(98U);
    msg.setDestination(17135U);
    msg.setDestinationEntity(148U);
    msg.validity = 63062U;
    msg.type = 177U;
    msg.utc_year = 3700U;
    msg.utc_month = 139U;
    msg.utc_day = 82U;
    msg.utc_time = 0.4755453079470485;
    msg.lat = 0.7846038013227506;
    msg.lon = 0.7218700535377798;
    msg.height = 0.28206291166197095;
    msg.satellites = 159U;
    msg.cog = 0.14920701386005752;
    msg.sog = 0.001779478278715274;
    msg.hdop = 0.08122902611538674;
    msg.vdop = 0.2948462918983247;
    msg.hacc = 0.06340822452103967;
    msg.vacc = 0.8132742489978195;

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
    msg.setTimeStamp(0.05280030750423437);
    msg.setSource(30967U);
    msg.setSourceEntity(184U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(201U);
    msg.time = 0.5108405352966789;
    msg.phi = 0.05785094969138782;
    msg.theta = 0.5996926666191719;
    msg.psi = 0.8071228142510029;
    msg.psi_magnetic = 0.7807131565907238;

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
    msg.setTimeStamp(0.00352786502420388);
    msg.setSource(54088U);
    msg.setSourceEntity(73U);
    msg.setDestination(58410U);
    msg.setDestinationEntity(134U);
    msg.time = 0.6437815408828682;
    msg.phi = 0.9976152595445589;
    msg.theta = 0.5280208766551879;
    msg.psi = 0.8751171869811639;
    msg.psi_magnetic = 0.15541630335940204;

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
    msg.setTimeStamp(0.7409144005622297);
    msg.setSource(17485U);
    msg.setSourceEntity(124U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(10U);
    msg.time = 0.40768882874043;
    msg.phi = 0.058825361240982255;
    msg.theta = 0.40461777928442033;
    msg.psi = 0.8800774772635189;
    msg.psi_magnetic = 0.46373914361768453;

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
    msg.setTimeStamp(0.07824433274274245);
    msg.setSource(56853U);
    msg.setSourceEntity(18U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(180U);
    msg.time = 0.49735285171453225;
    msg.x = 0.28181552590030534;
    msg.y = 0.7241758240765251;
    msg.z = 0.5465217636236963;
    msg.timestep = 0.8195880558737616;

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
    msg.setTimeStamp(0.4828591178564332);
    msg.setSource(32025U);
    msg.setSourceEntity(123U);
    msg.setDestination(1751U);
    msg.setDestinationEntity(103U);
    msg.time = 0.9844276037460546;
    msg.x = 0.8254563077512276;
    msg.y = 0.5142416808054164;
    msg.z = 0.4368315706969258;
    msg.timestep = 0.621986850229228;

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
    msg.setTimeStamp(0.4811367325026752);
    msg.setSource(53822U);
    msg.setSourceEntity(75U);
    msg.setDestination(64607U);
    msg.setDestinationEntity(83U);
    msg.time = 0.608942758032317;
    msg.x = 0.25544267336561954;
    msg.y = 0.2937068796062484;
    msg.z = 0.016023672651799936;
    msg.timestep = 0.7735951043946258;

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
    msg.setTimeStamp(0.8512615800516199);
    msg.setSource(50949U);
    msg.setSourceEntity(122U);
    msg.setDestination(36473U);
    msg.setDestinationEntity(138U);
    msg.time = 0.9074742555206488;
    msg.x = 0.35286085905565645;
    msg.y = 0.004106987851021926;
    msg.z = 0.7462893537461804;

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
    msg.setTimeStamp(0.747345702545141);
    msg.setSource(3754U);
    msg.setSourceEntity(247U);
    msg.setDestination(16199U);
    msg.setDestinationEntity(129U);
    msg.time = 0.9470054381636419;
    msg.x = 0.8294004203071479;
    msg.y = 0.12510480032579474;
    msg.z = 0.31415089492574;

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
    msg.setTimeStamp(0.40953745130540375);
    msg.setSource(36270U);
    msg.setSourceEntity(16U);
    msg.setDestination(22128U);
    msg.setDestinationEntity(53U);
    msg.time = 0.93555849207454;
    msg.x = 0.9287211442580574;
    msg.y = 0.7775158103058536;
    msg.z = 0.1648502910304237;

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
    msg.setTimeStamp(0.25431414281812925);
    msg.setSource(2434U);
    msg.setSourceEntity(91U);
    msg.setDestination(57568U);
    msg.setDestinationEntity(111U);
    msg.time = 0.9420120267375075;
    msg.x = 0.4080974983217329;
    msg.y = 0.3948111570706445;
    msg.z = 0.45713541875654495;

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
    msg.setTimeStamp(0.04307398471915547);
    msg.setSource(45819U);
    msg.setSourceEntity(130U);
    msg.setDestination(1792U);
    msg.setDestinationEntity(9U);
    msg.time = 0.1309078158484418;
    msg.x = 0.9365325870008994;
    msg.y = 0.21173100454006166;
    msg.z = 0.9687516054845676;

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
    msg.setTimeStamp(0.15784095110744545);
    msg.setSource(22457U);
    msg.setSourceEntity(102U);
    msg.setDestination(38225U);
    msg.setDestinationEntity(173U);
    msg.time = 0.6961582007753261;
    msg.x = 0.39383053955237135;
    msg.y = 0.827244148246556;
    msg.z = 0.3393835490842292;

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
    msg.setTimeStamp(0.2765660443952964);
    msg.setSource(18634U);
    msg.setSourceEntity(15U);
    msg.setDestination(23612U);
    msg.setDestinationEntity(47U);
    msg.time = 0.9875542498295888;
    msg.x = 0.6035937615187197;
    msg.y = 0.7613292836658895;
    msg.z = 0.5445529754405491;

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
    msg.setTimeStamp(0.29827635114309115);
    msg.setSource(55130U);
    msg.setSourceEntity(56U);
    msg.setDestination(24153U);
    msg.setDestinationEntity(239U);
    msg.time = 0.3845152125539475;
    msg.x = 0.24927513004473734;
    msg.y = 0.7323543210776483;
    msg.z = 0.8347726148078077;

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
    msg.setTimeStamp(0.3683204874030973);
    msg.setSource(55543U);
    msg.setSourceEntity(103U);
    msg.setDestination(53763U);
    msg.setDestinationEntity(90U);
    msg.time = 0.5644843345668368;
    msg.x = 0.6565418830515788;
    msg.y = 0.2953985329495813;
    msg.z = 0.9101434764981166;

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
    msg.setTimeStamp(0.4868128842605399);
    msg.setSource(42860U);
    msg.setSourceEntity(45U);
    msg.setDestination(5016U);
    msg.setDestinationEntity(72U);
    msg.validity = 128U;
    msg.x = 0.25176677151344495;
    msg.y = 0.43911542200328035;
    msg.z = 0.7937946248737344;

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
    msg.setTimeStamp(0.791751558895945);
    msg.setSource(9398U);
    msg.setSourceEntity(163U);
    msg.setDestination(36868U);
    msg.setDestinationEntity(20U);
    msg.validity = 104U;
    msg.x = 0.8976218338027592;
    msg.y = 0.024282336501315283;
    msg.z = 0.6542247684168715;

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
    msg.setTimeStamp(0.699260604532171);
    msg.setSource(23978U);
    msg.setSourceEntity(71U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(68U);
    msg.validity = 96U;
    msg.x = 0.7352061446174034;
    msg.y = 0.21985851773359544;
    msg.z = 0.6168059259293847;

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
    msg.setTimeStamp(0.4801039992850208);
    msg.setSource(60628U);
    msg.setSourceEntity(31U);
    msg.setDestination(42229U);
    msg.setDestinationEntity(91U);
    msg.validity = 114U;
    msg.x = 0.21754118931205424;
    msg.y = 0.28121217926433717;
    msg.z = 0.9113340441289168;

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
    msg.setTimeStamp(0.44008173562604325);
    msg.setSource(63457U);
    msg.setSourceEntity(137U);
    msg.setDestination(318U);
    msg.setDestinationEntity(3U);
    msg.validity = 223U;
    msg.x = 0.39445147410721626;
    msg.y = 0.31032915395891647;
    msg.z = 0.7019124451402922;

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
    msg.setTimeStamp(0.7925647866529493);
    msg.setSource(26427U);
    msg.setSourceEntity(158U);
    msg.setDestination(23727U);
    msg.setDestinationEntity(139U);
    msg.validity = 173U;
    msg.x = 0.9985373232776679;
    msg.y = 0.6586608830879923;
    msg.z = 0.9205497954402878;

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
    msg.setTimeStamp(0.7510702066732505);
    msg.setSource(53271U);
    msg.setSourceEntity(218U);
    msg.setDestination(60407U);
    msg.setDestinationEntity(120U);
    msg.time = 0.11522766167593079;
    msg.x = 0.5325177899058392;
    msg.y = 0.02056917595802843;
    msg.z = 0.7284047996453534;

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
    msg.setTimeStamp(0.22593684248770063);
    msg.setSource(12705U);
    msg.setSourceEntity(98U);
    msg.setDestination(4441U);
    msg.setDestinationEntity(203U);
    msg.time = 0.9770021970287888;
    msg.x = 0.6339989783992384;
    msg.y = 0.3814735557226032;
    msg.z = 0.27600822579165474;

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
    msg.setTimeStamp(0.48461947580469433);
    msg.setSource(14457U);
    msg.setSourceEntity(34U);
    msg.setDestination(62537U);
    msg.setDestinationEntity(125U);
    msg.time = 0.35430821821128144;
    msg.x = 0.5627891074649763;
    msg.y = 0.7269963484363223;
    msg.z = 0.03561177463797993;

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
    msg.setTimeStamp(0.434850887429699);
    msg.setSource(43602U);
    msg.setSourceEntity(14U);
    msg.setDestination(1814U);
    msg.setDestinationEntity(177U);
    msg.validity = 222U;
    msg.value = 0.33163982370140643;

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
    msg.setTimeStamp(0.024012569615143864);
    msg.setSource(52730U);
    msg.setSourceEntity(28U);
    msg.setDestination(47017U);
    msg.setDestinationEntity(29U);
    msg.validity = 120U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6866515382892501;
    tmp_msg_0.y = 0.24063489471099564;
    tmp_msg_0.z = 0.2995187444982894;
    tmp_msg_0.phi = 0.9545003669489722;
    tmp_msg_0.theta = 0.4771529673958447;
    tmp_msg_0.psi = 0.14789769574277445;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9574924108567567;

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
    msg.setTimeStamp(0.4497197129116105);
    msg.setSource(6305U);
    msg.setSourceEntity(116U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(227U);
    msg.validity = 192U;
    msg.value = 0.05398718799045632;

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
    msg.setTimeStamp(0.48681644162451987);
    msg.setSource(15374U);
    msg.setSourceEntity(16U);
    msg.setDestination(55860U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7965257044836247;

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
    msg.setTimeStamp(0.7286805285491958);
    msg.setSource(13033U);
    msg.setSourceEntity(40U);
    msg.setDestination(15783U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7465327385662809;

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
    msg.setTimeStamp(0.08275976895487558);
    msg.setSource(14490U);
    msg.setSourceEntity(99U);
    msg.setDestination(31644U);
    msg.setDestinationEntity(59U);
    msg.value = 0.04482365992002868;

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
    msg.setTimeStamp(0.8272355116035686);
    msg.setSource(58393U);
    msg.setSourceEntity(240U);
    msg.setDestination(45202U);
    msg.setDestinationEntity(125U);
    msg.value = 0.6084506427015972;

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
    msg.setTimeStamp(0.4942818922348776);
    msg.setSource(49755U);
    msg.setSourceEntity(236U);
    msg.setDestination(15939U);
    msg.setDestinationEntity(202U);
    msg.value = 0.8947576304924607;

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
    msg.setTimeStamp(0.23397380339560003);
    msg.setSource(52565U);
    msg.setSourceEntity(95U);
    msg.setDestination(60179U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3372266483623638;

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
    msg.setTimeStamp(0.6766202855957192);
    msg.setSource(45505U);
    msg.setSourceEntity(202U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(229U);
    msg.value = 0.45109380114602493;

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
    msg.setTimeStamp(0.05954818007081175);
    msg.setSource(49296U);
    msg.setSourceEntity(248U);
    msg.setDestination(6859U);
    msg.setDestinationEntity(34U);
    msg.value = 0.9694901039219599;

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
    msg.setTimeStamp(0.7742698586421548);
    msg.setSource(4877U);
    msg.setSourceEntity(65U);
    msg.setDestination(35569U);
    msg.setDestinationEntity(42U);
    msg.value = 0.7701325909372958;

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
    msg.setTimeStamp(0.2748213626366005);
    msg.setSource(51265U);
    msg.setSourceEntity(156U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6433198631491387;

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
    msg.setTimeStamp(0.40639894896275086);
    msg.setSource(1803U);
    msg.setSourceEntity(142U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(118U);
    msg.value = 0.6529973709909626;

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
    msg.setTimeStamp(0.810642852565828);
    msg.setSource(63938U);
    msg.setSourceEntity(95U);
    msg.setDestination(30894U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6105360594974754;

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
    msg.setTimeStamp(0.8635789736084701);
    msg.setSource(29429U);
    msg.setSourceEntity(113U);
    msg.setDestination(39240U);
    msg.setDestinationEntity(53U);
    msg.value = 0.3376204049708338;

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
    msg.setTimeStamp(0.6893167189825814);
    msg.setSource(56207U);
    msg.setSourceEntity(185U);
    msg.setDestination(45348U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7271782373200338;

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
    msg.setTimeStamp(0.37379102715679724);
    msg.setSource(23873U);
    msg.setSourceEntity(224U);
    msg.setDestination(11885U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9383798421091505;

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
    msg.setTimeStamp(0.17706775262336494);
    msg.setSource(25646U);
    msg.setSourceEntity(44U);
    msg.setDestination(49676U);
    msg.setDestinationEntity(245U);
    msg.value = 0.7840338308576311;

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
    msg.setTimeStamp(0.7578772000372587);
    msg.setSource(18658U);
    msg.setSourceEntity(103U);
    msg.setDestination(60189U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5842657620498032;

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
    msg.setTimeStamp(0.21971071260587705);
    msg.setSource(9108U);
    msg.setSourceEntity(0U);
    msg.setDestination(44207U);
    msg.setDestinationEntity(116U);
    msg.value = 0.28711801933574044;

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
    msg.setTimeStamp(0.647089577104637);
    msg.setSource(32235U);
    msg.setSourceEntity(138U);
    msg.setDestination(54765U);
    msg.setDestinationEntity(183U);
    msg.value = 0.6327443545701757;

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
    msg.setTimeStamp(0.9490116936009304);
    msg.setSource(60767U);
    msg.setSourceEntity(89U);
    msg.setDestination(48856U);
    msg.setDestinationEntity(246U);
    msg.value = 0.44001496855585787;

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
    msg.setTimeStamp(0.3769324389267541);
    msg.setSource(26670U);
    msg.setSourceEntity(152U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9164588149507701;

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
    msg.setTimeStamp(0.8927283763448703);
    msg.setSource(64677U);
    msg.setSourceEntity(0U);
    msg.setDestination(17961U);
    msg.setDestinationEntity(50U);
    msg.value = 0.06655971946237649;

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
    msg.setTimeStamp(0.5995732352476782);
    msg.setSource(22565U);
    msg.setSourceEntity(134U);
    msg.setDestination(12181U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7607524397425116;

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
    msg.setTimeStamp(0.04093112886735906);
    msg.setSource(40926U);
    msg.setSourceEntity(200U);
    msg.setDestination(51370U);
    msg.setDestinationEntity(177U);
    msg.value = 0.9670672388280094;

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
    msg.setTimeStamp(0.45736562579227424);
    msg.setSource(65516U);
    msg.setSourceEntity(63U);
    msg.setDestination(1870U);
    msg.setDestinationEntity(238U);
    msg.direction = 0.1193798303409247;
    msg.speed = 0.9357627039908131;
    msg.turbulence = 0.9539421394598326;

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
    msg.setTimeStamp(0.8465954899512826);
    msg.setSource(45277U);
    msg.setSourceEntity(107U);
    msg.setDestination(60106U);
    msg.setDestinationEntity(162U);
    msg.direction = 0.07361004825792039;
    msg.speed = 0.3836240244522172;
    msg.turbulence = 0.5152289717470178;

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
    msg.setTimeStamp(0.6687998783710197);
    msg.setSource(51399U);
    msg.setSourceEntity(52U);
    msg.setDestination(58784U);
    msg.setDestinationEntity(175U);
    msg.direction = 0.30159326594982083;
    msg.speed = 0.6802319555362611;
    msg.turbulence = 0.35401658848023543;

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
    msg.setTimeStamp(0.017887453071401715);
    msg.setSource(63450U);
    msg.setSourceEntity(6U);
    msg.setDestination(14873U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5879395183251453;

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
    msg.setTimeStamp(0.7227742087729239);
    msg.setSource(32759U);
    msg.setSourceEntity(249U);
    msg.setDestination(26150U);
    msg.setDestinationEntity(5U);
    msg.value = 0.8174917584117081;

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
    msg.setTimeStamp(0.09803662051173223);
    msg.setSource(62996U);
    msg.setSourceEntity(174U);
    msg.setDestination(28233U);
    msg.setDestinationEntity(182U);
    msg.value = 0.07592457912775652;

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
    msg.setTimeStamp(0.11921751327131835);
    msg.setSource(22392U);
    msg.setSourceEntity(95U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(116U);
    msg.value.assign("YOIUJYEDMLJRVQAWVXETJIFGTLWLULSLKSXFRVJWWYCGZKNCNVQJXIIZLMOTA");

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
    msg.setTimeStamp(0.678166362144652);
    msg.setSource(14627U);
    msg.setSourceEntity(235U);
    msg.setDestination(5851U);
    msg.setDestinationEntity(26U);
    msg.value.assign("DFYUXNNRUQPTRAKRYNQKQBZLNAPNGSQISVFWITBGYCRSSMESTHRHCMQDCSKMHWBHHQZVCGWFTXBZZAQXDKVVWEFASUCAVLBCNRJUYVFNUENOOHLXQOCQKMLYKETIKSGTJGOLMGDJKREIOIPORPZEPYAHIZPAHFJSUWJKFALJYUYLDGTUXOFXMWDCBBNMCJZWPEVJV");

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
    msg.setTimeStamp(0.9663733083581225);
    msg.setSource(26173U);
    msg.setSourceEntity(86U);
    msg.setDestination(6987U);
    msg.setDestinationEntity(150U);
    msg.value.assign("PTIXQAIAEYUFRAVOEQBTWNZSUJFXLQHLBWOKKQEHWBDSKFXQCRNVWPSAARHDZIOBKGZMKLQZFJHBCTJLMVKZIFDCPYWGSVOJRMGCYESLOEJQZLXIWFLKPGITIKRVRHBPJOZORIUEHVITNGDZDTMOJCBMMYWCYQNBPDLKUVFGBVPLJAOFGPHSGXYGUQMTAGFNEREEHTANXLAVTQMSCNUDSCDJYXNDVYPWPY");

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
    msg.setTimeStamp(0.8420189935626103);
    msg.setSource(57309U);
    msg.setSourceEntity(4U);
    msg.setDestination(38701U);
    msg.setDestinationEntity(97U);
    const char tmp_msg_0[] = {-89, 40, -60, -22, -98, 1, 0, -9, -93, -11, 78, 91, 52, -106, -45, -127, -12, 67, -126, 71, 2, -58, 119, -61, 11, -63, -66, -56, 91, -123, 87, -4, 70, -71, 12, 60, 41, 68, 83, 123, 41, -88, 90, 35, 76, -15, -40, 91, 54, -50, -50, -65, -91, 78, 34, 22, -99, -44, -122, 125, -107, -17, 11, -4, -40, -14, -95, -55, 63, -103, -50, -121, 68, 107, 112, -9, -7, 84, -22, -125, 116, -127, 1, -95, 96, -19, -93, 124, 58, -15, -96, 98, 114, 10, -79, 60, -33, 1, 81, -88, 71, -99, 71, -120, -36, -22, -45, -56, -111, -114, 102, 8, 87, -76, 91, 10, 29, -97, -65, -64, -70, -86, 7, 14, -79, 71, 63, -45, 88, 38, -84, 33, -119, 55, -122, -63, 104};
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
    msg.setTimeStamp(0.5786765106569014);
    msg.setSource(9034U);
    msg.setSourceEntity(173U);
    msg.setDestination(42821U);
    msg.setDestinationEntity(230U);
    const char tmp_msg_0[] = {121, -18, -60, 90, 46, 70, -116, 78, 125, 28, -47, 75, 119, 31, -17, 30, -57, 56, 90, -47, -86, -70, -2, -36, -41};
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
    msg.setTimeStamp(0.9688428271150469);
    msg.setSource(2311U);
    msg.setSourceEntity(45U);
    msg.setDestination(42170U);
    msg.setDestinationEntity(13U);
    const char tmp_msg_0[] = {-36, -107, -116, -70, -97, 35, 76, -103, -67, 120, -28, 75, -28, 77, 20, 81, 99, 113, 5, 81, -43, -44, 81, 56, -61, 113, 27, -31, 97, 21, 116, -96, -103, 62, 56, 20, -103, -36, -102, -94, 111, 71, 43, 68, -10, 36, -67, 104, -111};
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
    msg.setTimeStamp(0.7897953189783534);
    msg.setSource(53100U);
    msg.setSourceEntity(165U);
    msg.setDestination(6746U);
    msg.setDestinationEntity(203U);
    msg.type = 196U;
    msg.frequency = 3419065307U;
    msg.min_range = 42602U;
    msg.max_range = 59595U;
    msg.bits_per_point = 170U;
    msg.scale_factor = 0.7753527735472449;
    const char tmp_msg_0[] = {107, 67, -72, 59, -77, 96, -91, 41, 69, 22, -30, 13, 40, 14, 49, 12, 65, -85, 29, 91, -5, 10, 85, 109, -32, -14, 7, -99, 87, -79, -52, -115, 76, -4, -49, 36, -85, -56, 85, 121, -74, 60, 103, -78, 99, -77, -71, -114, -20, 28, 49, 87, -1, -79, 21, 80, 66, -14, 100, 21, 57, -115, -65, -73, 62, -80, -80, 104, 69, -86, 126, -57, -54, 81, 32, 28, -78, 122, -125, -122, 5, 45, -89, 45, -97, 60, 60, -3, 97, 119, -80, 88, -90, -116, -113, 125, 40, 90, 25, -84, 97, -85, -43, 80, 7, 1, 30, -25, -98, -53, -127, -32, 120, 15, -79, -56, -104, 38, -128, -37, 20, 71, 23, 107, -9, 98, -14, 21, -12, -11, 77, 4, 25, -55, -23, -24, 37, -77, 87, 50, 35, 86, 69, 61, 60, -6, 4, 30, -77, 111, -70, 12, 90, -65, 121, 31, 62, -26, 6, -73, 93, 1, -19, 36, -87, -71, 86, -58, 84, -71, 113, 48, 11, 48, -101, 68, -69, -1, -106, 8, -127, 3, 117, -52, 76, -5, 66, 92, -93, 76, -13, -38, 116, 112, -55, -105, 3, -6, -74, -102, -7, -21, 5, -22, -27, 32, 22, -108, -39, 106, 56, 1, -21, -62, -99, 27, -125, 14, -11, -127, 18, 23, -62, 102, -91, -97, 40, -32, -12};
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
    msg.setTimeStamp(0.9186301878837667);
    msg.setSource(41816U);
    msg.setSourceEntity(205U);
    msg.setDestination(22159U);
    msg.setDestinationEntity(163U);
    msg.type = 83U;
    msg.frequency = 1892689835U;
    msg.min_range = 26073U;
    msg.max_range = 1533U;
    msg.bits_per_point = 82U;
    msg.scale_factor = 0.42874011240844045;
    const char tmp_msg_0[] = {-21, -45, -76, 26, 77, 38, -9, 42, 36, 2, -127, 47, 44, -41, 54, -103, 70, 16, 92, 121, -102, -77, 63, -76, -27, -75, 81, -107, -68, 89, -128, -16, 62, 65, -78, -63, 7, 112, 119, -126, -79, 37, -59, 90, -105, -118, 82, 0, 29, 44, 41, 35, -38, 116, 125, 77, 122, 28, -112, 106, 103, 19, 93, 44, -35, -74, 116, -101, 6, 33, 49, 104, 16, 107, 125, 112, 112, 22, 74, 4, -55, -92, 31, -78, 37, 52, -96, 115, 25, -23, -69, -61, -5, 97, -1, -7, 40, 86, 108, 111, -122, -62, -23, -47, -67, 23, 124, 119, 29, 4, 95, -120, 48, -63, -25, 1, 121, -21, 61, 98, 87, -82, -14, -22, 40, -10, -27, 63, 123, 96, 8, -8, -122, -108, 35, 11, 46, -53, 121, 82, -76, -15, 66, 69, 53, -124, 32, 56, 20, 103, -121, 58, -77, -108, 12, -123, 44, 75, 39, -30, 93, -74, -31, 58, 60, -88, -89, 116, 67, -87, 30, 86, 22, -1, -94, -2, -110, 75, 6, -97, -4, -55, -52, -122, 106, 62, -68, 73, 55, -27, -116, -111, 23, -77, 70, 64, 23};
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
    msg.setTimeStamp(0.46337277189794623);
    msg.setSource(3769U);
    msg.setSourceEntity(30U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(192U);
    msg.type = 109U;
    msg.frequency = 3431297131U;
    msg.min_range = 41932U;
    msg.max_range = 47494U;
    msg.bits_per_point = 171U;
    msg.scale_factor = 0.14825715721679245;
    const char tmp_msg_0[] = {-15, -63, 4, 121, 77, -127, 11, 56, -13, -107, 47, 102, 75, 51, 38, -70, -30, -92, 42, 58, 117, -24, -67, 28, -104, -39, -77, -41, -71, 77, 44, -30, -36, -99, 91, 67, -65, 10, 35, 93, -25, -116, -67, 22, -91, 42, 14, 24, 123, 97, -76, 91, 83, -59, 53, 64, 86, -71, 82, 74, 44, 108, 69, 54, -77, 33, 87, 31, -97, -101, 47, -117, 12, -95, -82, 32, 45, -1, -66, -111, -56, -117, -84, 24, -60, -87, -27, -13, -92, 121, -48, 95, 118, -64, -128, -19, 116, 114, 59, -116, 55, -11, -54, -123, 74, -92, -4, -92, 64, -69, -7, 86, -25, 106, -6, -57, 55, 85, -80, -35, -8, 76, 97, -107, 81, 104, -67, 18, -42, 32, 2, -25, 40, -102, -103, 111, -45, -66, -92, -68, 0, 71, 73, -106, -12, -55, 78, -85, -102, -28, -117, -36, 2, 107, 112, 12, 94, 95, -92, 16, 47, -10, -123, 19};
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
    msg.setTimeStamp(0.4508239569072602);
    msg.setSource(22462U);
    msg.setSourceEntity(177U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.0784819045273305);
    msg.setSource(11717U);
    msg.setSourceEntity(66U);
    msg.setDestination(37126U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.704530833782482);
    msg.setSource(5563U);
    msg.setSourceEntity(178U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.08580109411467274);
    msg.setSource(29652U);
    msg.setSourceEntity(127U);
    msg.setDestination(45410U);
    msg.setDestinationEntity(130U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.875792550424773);
    msg.setSource(7467U);
    msg.setSourceEntity(114U);
    msg.setDestination(31562U);
    msg.setDestinationEntity(77U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.3891387782992384);
    msg.setSource(10230U);
    msg.setSourceEntity(39U);
    msg.setDestination(23604U);
    msg.setDestinationEntity(45U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.3289167154022453);
    msg.setSource(33118U);
    msg.setSourceEntity(104U);
    msg.setDestination(33066U);
    msg.setDestinationEntity(111U);
    msg.value = 0.08005590250542804;
    msg.confidence = 0.38213420380650776;
    msg.opmodes.assign("XBRIDTOWYRWBMEBTBNQOPSLHUGANWAGAEXJQABSPUOZSSDJKQAHRRDZZUGGWXVZOQVEDGSXIKZVITBEPWPALSJHX");

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
    msg.setTimeStamp(0.9244176622638528);
    msg.setSource(22491U);
    msg.setSourceEntity(123U);
    msg.setDestination(38414U);
    msg.setDestinationEntity(44U);
    msg.value = 0.46701237848169985;
    msg.confidence = 0.8784862217386664;
    msg.opmodes.assign("UNAWJJJKLKBNATTLBLTYBTJKZYGIVKRSSZFUVQIZVDGLAMLFTPLXQATXNLILMMMUTNDRSUAPNXACMRTMUEFKADRPKEPDNKWGEBZSYPTIIXECIVNYWGJZOVHWCVYFUQPYUSRBRFMWODARXNOZGBITOJQ");

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
    msg.setTimeStamp(0.7703145130493806);
    msg.setSource(55672U);
    msg.setSourceEntity(64U);
    msg.setDestination(30012U);
    msg.setDestinationEntity(227U);
    msg.value = 0.10030519122744863;
    msg.confidence = 0.05390484949235097;
    msg.opmodes.assign("EXCNGIBPAEVJSQRUOUYOHZIYC");

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
    msg.setTimeStamp(0.24919948083874222);
    msg.setSource(30895U);
    msg.setSourceEntity(123U);
    msg.setDestination(959U);
    msg.setDestinationEntity(119U);
    msg.itow = 2320819261U;
    msg.lat = 0.4913378002644855;
    msg.lon = 0.7058993183554673;
    msg.height_ell = 0.5447924569235515;
    msg.height_sea = 0.9057868712089486;
    msg.hacc = 0.6943286047743676;
    msg.vacc = 0.8498398534360566;
    msg.vel_n = 0.6611168850087256;
    msg.vel_e = 0.8484109282094795;
    msg.vel_d = 0.8276205670418285;
    msg.speed = 0.31249337745785666;
    msg.gspeed = 0.7608539180988847;
    msg.heading = 0.4261384604396916;
    msg.sacc = 0.7989690793104363;
    msg.cacc = 0.9655634233185875;

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
    msg.setTimeStamp(0.49214957341048937);
    msg.setSource(12054U);
    msg.setSourceEntity(212U);
    msg.setDestination(38499U);
    msg.setDestinationEntity(245U);
    msg.itow = 1148867491U;
    msg.lat = 0.9312626258718615;
    msg.lon = 0.5189984470485751;
    msg.height_ell = 0.2128261288990262;
    msg.height_sea = 0.3648248172681601;
    msg.hacc = 0.14279612495279959;
    msg.vacc = 0.9670075721683693;
    msg.vel_n = 0.2569860908928079;
    msg.vel_e = 0.35851871736075824;
    msg.vel_d = 0.8807053015292751;
    msg.speed = 0.875133635709971;
    msg.gspeed = 0.7991305209941921;
    msg.heading = 0.9806800092627863;
    msg.sacc = 0.789442697468869;
    msg.cacc = 0.009170085130323358;

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
    msg.setTimeStamp(0.8012895827228811);
    msg.setSource(10697U);
    msg.setSourceEntity(193U);
    msg.setDestination(40181U);
    msg.setDestinationEntity(215U);
    msg.itow = 3674076429U;
    msg.lat = 0.754918799228451;
    msg.lon = 0.24794466985003094;
    msg.height_ell = 0.9401664945946236;
    msg.height_sea = 0.24266238908909354;
    msg.hacc = 0.0987398975885121;
    msg.vacc = 0.46930009639364045;
    msg.vel_n = 0.3619603430803916;
    msg.vel_e = 0.0032941234541472575;
    msg.vel_d = 0.9962294293013113;
    msg.speed = 0.4906536613928608;
    msg.gspeed = 0.5641477936750031;
    msg.heading = 0.3220538660243948;
    msg.sacc = 0.30048693990198205;
    msg.cacc = 0.023544769484930672;

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
    msg.setTimeStamp(0.3344640369966363);
    msg.setSource(36850U);
    msg.setSourceEntity(170U);
    msg.setDestination(6382U);
    msg.setDestinationEntity(236U);
    msg.id = 204U;
    msg.value = 0.240652325276408;

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
    msg.setTimeStamp(0.18793251317517923);
    msg.setSource(44975U);
    msg.setSourceEntity(254U);
    msg.setDestination(60097U);
    msg.setDestinationEntity(163U);
    msg.id = 65U;
    msg.value = 0.46163354535685475;

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
    msg.setTimeStamp(0.19044226418337507);
    msg.setSource(59264U);
    msg.setSourceEntity(243U);
    msg.setDestination(47865U);
    msg.setDestinationEntity(188U);
    msg.id = 208U;
    msg.value = 0.04229652396202732;

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
    msg.setTimeStamp(0.7858077158981795);
    msg.setSource(65385U);
    msg.setSourceEntity(170U);
    msg.setDestination(56640U);
    msg.setDestinationEntity(215U);
    msg.x = 0.31685834472851526;
    msg.y = 0.7122957666970438;
    msg.z = 0.35684132278221414;
    msg.phi = 0.3550423464101218;
    msg.theta = 0.7813577808364582;
    msg.psi = 0.6743058952746159;

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
    msg.setTimeStamp(0.2412768807010035);
    msg.setSource(54755U);
    msg.setSourceEntity(251U);
    msg.setDestination(2731U);
    msg.setDestinationEntity(160U);
    msg.x = 0.322412646046088;
    msg.y = 0.47104325624247356;
    msg.z = 0.399662214073205;
    msg.phi = 0.25016279806998076;
    msg.theta = 0.4685343257649647;
    msg.psi = 0.812620669132567;

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
    msg.setTimeStamp(0.10296532032533379);
    msg.setSource(141U);
    msg.setSourceEntity(56U);
    msg.setDestination(8411U);
    msg.setDestinationEntity(138U);
    msg.x = 0.9709319451926767;
    msg.y = 0.6525119889865362;
    msg.z = 0.16171974980716275;
    msg.phi = 0.9970093232782914;
    msg.theta = 0.5103828755654943;
    msg.psi = 0.062397754408056394;

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
    msg.setTimeStamp(0.2910953765122163);
    msg.setSource(7195U);
    msg.setSourceEntity(204U);
    msg.setDestination(16520U);
    msg.setDestinationEntity(15U);
    msg.beam_width = 0.6190271793392158;
    msg.beam_height = 0.94838276330447;

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
    msg.setTimeStamp(0.17096787530189794);
    msg.setSource(52595U);
    msg.setSourceEntity(225U);
    msg.setDestination(35387U);
    msg.setDestinationEntity(228U);
    msg.beam_width = 0.8722390269598717;
    msg.beam_height = 0.08846945058907973;

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
    msg.setTimeStamp(0.9594863171988356);
    msg.setSource(53663U);
    msg.setSourceEntity(38U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.32342046540228864;
    msg.beam_height = 0.29969378859759754;

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
    msg.setTimeStamp(0.8496420624919757);
    msg.setSource(26221U);
    msg.setSourceEntity(226U);
    msg.setDestination(50423U);
    msg.setDestinationEntity(103U);
    msg.sane = 98U;

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
    msg.setTimeStamp(0.7507012982424704);
    msg.setSource(25659U);
    msg.setSourceEntity(216U);
    msg.setDestination(22860U);
    msg.setDestinationEntity(188U);
    msg.sane = 150U;

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
    msg.setTimeStamp(0.022474874489984087);
    msg.setSource(62617U);
    msg.setSourceEntity(223U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(99U);
    msg.sane = 71U;

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
    msg.setTimeStamp(0.4303399943657015);
    msg.setSource(14982U);
    msg.setSourceEntity(153U);
    msg.setDestination(18335U);
    msg.setDestinationEntity(1U);
    msg.value = 0.10088483070770293;

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
    msg.setTimeStamp(0.5912375264574707);
    msg.setSource(26694U);
    msg.setSourceEntity(104U);
    msg.setDestination(21187U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9302985071637809;

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
    msg.setTimeStamp(0.6974690374457472);
    msg.setSource(15072U);
    msg.setSourceEntity(26U);
    msg.setDestination(50186U);
    msg.setDestinationEntity(224U);
    msg.value = 0.14861883256013209;

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
    msg.setTimeStamp(0.01268304270995746);
    msg.setSource(63161U);
    msg.setSourceEntity(202U);
    msg.setDestination(17147U);
    msg.setDestinationEntity(177U);
    msg.value = 0.3031980956269468;

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
    msg.setTimeStamp(0.45356270879473626);
    msg.setSource(11247U);
    msg.setSourceEntity(210U);
    msg.setDestination(53253U);
    msg.setDestinationEntity(216U);
    msg.value = 0.2554762804730528;

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
    msg.setTimeStamp(0.1736518100393024);
    msg.setSource(62875U);
    msg.setSourceEntity(5U);
    msg.setDestination(10545U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6355190573594774;

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
    msg.setTimeStamp(0.46556044997029544);
    msg.setSource(24742U);
    msg.setSourceEntity(129U);
    msg.setDestination(64718U);
    msg.setDestinationEntity(15U);
    msg.value = 0.5668664419631956;

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
    msg.setTimeStamp(0.5485446711522641);
    msg.setSource(3714U);
    msg.setSourceEntity(167U);
    msg.setDestination(55974U);
    msg.setDestinationEntity(56U);
    msg.value = 0.7393765045920783;

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
    msg.setTimeStamp(0.9564562355248536);
    msg.setSource(9666U);
    msg.setSourceEntity(121U);
    msg.setDestination(6430U);
    msg.setDestinationEntity(84U);
    msg.value = 0.6572854947109591;

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
    msg.setTimeStamp(0.031687172582207324);
    msg.setSource(3519U);
    msg.setSourceEntity(235U);
    msg.setDestination(37973U);
    msg.setDestinationEntity(161U);
    msg.value = 0.8670206493064271;

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
    msg.setTimeStamp(0.8123006591649137);
    msg.setSource(15098U);
    msg.setSourceEntity(232U);
    msg.setDestination(3700U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5364111049633784;

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
    msg.setTimeStamp(0.4984367918634822);
    msg.setSource(50329U);
    msg.setSourceEntity(60U);
    msg.setDestination(15429U);
    msg.setDestinationEntity(88U);
    msg.value = 0.48763132088134675;

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
    msg.setTimeStamp(0.33452358179888797);
    msg.setSource(7090U);
    msg.setSourceEntity(188U);
    msg.setDestination(4251U);
    msg.setDestinationEntity(115U);
    msg.value = 0.4387491109446655;

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
    msg.setTimeStamp(0.44101417759525285);
    msg.setSource(29322U);
    msg.setSourceEntity(27U);
    msg.setDestination(16428U);
    msg.setDestinationEntity(124U);
    msg.value = 0.3278237101176996;

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
    msg.setTimeStamp(0.18913362257797328);
    msg.setSource(4653U);
    msg.setSourceEntity(12U);
    msg.setDestination(14856U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6987911537925912;

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
    msg.setTimeStamp(0.24676659978476212);
    msg.setSource(57668U);
    msg.setSourceEntity(178U);
    msg.setDestination(18538U);
    msg.setDestinationEntity(199U);
    msg.value = 0.045801718536959135;

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
    msg.setTimeStamp(0.5274970239334171);
    msg.setSource(47572U);
    msg.setSourceEntity(18U);
    msg.setDestination(52846U);
    msg.setDestinationEntity(112U);
    msg.value = 0.1313039843603342;

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
    msg.setTimeStamp(0.7311743199999705);
    msg.setSource(21810U);
    msg.setSourceEntity(41U);
    msg.setDestination(22589U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9993342988873682;

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
    msg.setTimeStamp(0.01677744113337931);
    msg.setSource(34199U);
    msg.setSourceEntity(181U);
    msg.setDestination(40779U);
    msg.setDestinationEntity(93U);
    msg.value = 0.538265659978935;

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
    msg.setTimeStamp(0.06234580011572188);
    msg.setSource(13789U);
    msg.setSourceEntity(9U);
    msg.setDestination(21373U);
    msg.setDestinationEntity(63U);
    msg.value = 0.511605781842035;

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
    msg.setTimeStamp(0.8460633133799834);
    msg.setSource(41558U);
    msg.setSourceEntity(19U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(97U);
    msg.value = 0.14765304449148386;

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
    msg.setTimeStamp(0.6270657851168725);
    msg.setSource(21712U);
    msg.setSourceEntity(14U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(206U);
    msg.value = 0.7773052024064517;

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
    msg.setTimeStamp(0.13425486391922903);
    msg.setSource(26282U);
    msg.setSourceEntity(134U);
    msg.setDestination(13507U);
    msg.setDestinationEntity(74U);
    msg.value = 0.05892824331726898;

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
    msg.setTimeStamp(0.9910272604495776);
    msg.setSource(64336U);
    msg.setSourceEntity(29U);
    msg.setDestination(33236U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6577812865549317;

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
    msg.setTimeStamp(0.4244929627282171);
    msg.setSource(38201U);
    msg.setSourceEntity(178U);
    msg.setDestination(65377U);
    msg.setDestinationEntity(253U);
    msg.validity = 34868U;
    msg.type = 248U;
    msg.tow = 618833420U;
    msg.base_lat = 0.6042100499196619;
    msg.base_lon = 0.7283379813396391;
    msg.base_height = 0.6311203481310519;
    msg.n = 0.487358320793261;
    msg.e = 0.6149458894106721;
    msg.d = 0.650190282847565;
    msg.v_n = 0.01614886019414674;
    msg.v_e = 0.217564509353544;
    msg.v_d = 0.8093529451765172;
    msg.satellites = 163U;
    msg.iar_hyp = 36292U;
    msg.iar_ratio = 0.6453771889329107;

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
    msg.setTimeStamp(0.9709969103438105);
    msg.setSource(5351U);
    msg.setSourceEntity(113U);
    msg.setDestination(53257U);
    msg.setDestinationEntity(242U);
    msg.validity = 9364U;
    msg.type = 163U;
    msg.tow = 505761674U;
    msg.base_lat = 0.6492621052529791;
    msg.base_lon = 0.7608696410037116;
    msg.base_height = 0.09338738505026012;
    msg.n = 0.3520061995965721;
    msg.e = 0.5961194106110462;
    msg.d = 0.9527422505865264;
    msg.v_n = 0.9952266975775963;
    msg.v_e = 0.9499223004296922;
    msg.v_d = 0.38713187208192235;
    msg.satellites = 149U;
    msg.iar_hyp = 37179U;
    msg.iar_ratio = 0.029093929950216535;

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
    msg.setTimeStamp(0.28074333292886633);
    msg.setSource(44646U);
    msg.setSourceEntity(183U);
    msg.setDestination(2949U);
    msg.setDestinationEntity(83U);
    msg.validity = 31852U;
    msg.type = 113U;
    msg.tow = 4132084542U;
    msg.base_lat = 0.9818258733183082;
    msg.base_lon = 0.17486828253943498;
    msg.base_height = 0.04282948326318725;
    msg.n = 0.48640959313143817;
    msg.e = 0.9679034561296909;
    msg.d = 0.6276676604682855;
    msg.v_n = 0.6646563509635507;
    msg.v_e = 0.7819383522295711;
    msg.v_d = 0.7970451483522445;
    msg.satellites = 252U;
    msg.iar_hyp = 52753U;
    msg.iar_ratio = 0.04620322885108186;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.43357885593611656);
    msg.setSource(63575U);
    msg.setSourceEntity(159U);
    msg.setDestination(8090U);
    msg.setDestinationEntity(137U);
    msg.id = 234U;
    msg.zoom = 145U;
    msg.action = 241U;

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
    msg.setTimeStamp(0.11832610096412954);
    msg.setSource(560U);
    msg.setSourceEntity(29U);
    msg.setDestination(19146U);
    msg.setDestinationEntity(248U);
    msg.id = 93U;
    msg.zoom = 186U;
    msg.action = 210U;

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
    msg.setTimeStamp(0.629530243640959);
    msg.setSource(27960U);
    msg.setSourceEntity(28U);
    msg.setDestination(48468U);
    msg.setDestinationEntity(7U);
    msg.id = 239U;
    msg.zoom = 49U;
    msg.action = 153U;

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
    msg.setTimeStamp(0.10008616301956486);
    msg.setSource(8021U);
    msg.setSourceEntity(11U);
    msg.setDestination(45601U);
    msg.setDestinationEntity(222U);
    msg.id = 225U;
    msg.value = 0.9909299268401732;

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
    msg.setTimeStamp(0.43183657480250115);
    msg.setSource(42982U);
    msg.setSourceEntity(205U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(185U);
    msg.id = 253U;
    msg.value = 0.7524049775177354;

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
    msg.setTimeStamp(0.8782509971321654);
    msg.setSource(17668U);
    msg.setSourceEntity(61U);
    msg.setDestination(15593U);
    msg.setDestinationEntity(161U);
    msg.id = 159U;
    msg.value = 0.2456253476704906;

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
    msg.setTimeStamp(0.9342318666531142);
    msg.setSource(4132U);
    msg.setSourceEntity(132U);
    msg.setDestination(16651U);
    msg.setDestinationEntity(183U);
    msg.id = 204U;
    msg.value = 0.4752507798639152;

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
    msg.setTimeStamp(0.9747326081085496);
    msg.setSource(28476U);
    msg.setSourceEntity(253U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(94U);
    msg.id = 181U;
    msg.value = 0.8591822607843258;

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
    msg.setTimeStamp(0.0912628026675657);
    msg.setSource(19806U);
    msg.setSourceEntity(160U);
    msg.setDestination(59359U);
    msg.setDestinationEntity(160U);
    msg.id = 182U;
    msg.value = 0.08261005466361981;

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
    msg.setTimeStamp(0.708097779251862);
    msg.setSource(54027U);
    msg.setSourceEntity(123U);
    msg.setDestination(26569U);
    msg.setDestinationEntity(75U);
    msg.id = 21U;
    msg.angle = 0.9103043206904567;

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
    msg.setTimeStamp(0.9748971783069246);
    msg.setSource(26804U);
    msg.setSourceEntity(13U);
    msg.setDestination(39332U);
    msg.setDestinationEntity(215U);
    msg.id = 203U;
    msg.angle = 0.45053578990217036;

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
    msg.setTimeStamp(0.17015042387713974);
    msg.setSource(11704U);
    msg.setSourceEntity(100U);
    msg.setDestination(36872U);
    msg.setDestinationEntity(133U);
    msg.id = 119U;
    msg.angle = 0.5332499013191209;

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
    msg.setTimeStamp(0.26942595016327553);
    msg.setSource(37428U);
    msg.setSourceEntity(28U);
    msg.setDestination(33499U);
    msg.setDestinationEntity(129U);
    msg.op = 251U;
    msg.actions.assign("WDSBIMXOJGSVIFZZDFLQUTEBTZQNKRGHQEBAYMLQXWRPY");

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
    msg.setTimeStamp(0.7911951421343069);
    msg.setSource(50263U);
    msg.setSourceEntity(0U);
    msg.setDestination(23068U);
    msg.setDestinationEntity(128U);
    msg.op = 198U;
    msg.actions.assign("LAAXDHRJGFECBHBVYFXUALDTUJUZMBXLLKDGFNOAZKENUQILWHYXTJYCOKGDNDZQWHJWFROTCYVMBPNWMBBBDKZZZTIEHPFPVQTNZVKQAZYBBSPDWSOICUGPNDXCSLJFCMPLNACVGBWMUYGKVCDUTRRIAENGJKCPSDCMZXHWWYOFJQRQMUXRHASNLISTWHJSIRET");

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
    msg.setTimeStamp(0.17885708622428487);
    msg.setSource(34570U);
    msg.setSourceEntity(161U);
    msg.setDestination(61770U);
    msg.setDestinationEntity(215U);
    msg.op = 33U;
    msg.actions.assign("HNKDBFJZBATPNRWKGGTMLAWNXMLIZFYJNXJMZSITBLWENWUVEYYCSKAERVWCVPOKBUBRPPEMMWMSYTYILQCPOOQWUIETMNRVLBFHOKSIBYJUQWXJIQGFHNAGIDJJRTYBZAYNCPUHLXDSGWGVAYOPMOJILDSFVOZKCDGCJFV");

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
    msg.setTimeStamp(0.1356366620221523);
    msg.setSource(17437U);
    msg.setSourceEntity(120U);
    msg.setDestination(32039U);
    msg.setDestinationEntity(158U);
    msg.actions.assign("TQMMFMQLYXGAOTXIMEJBHXPNDOJZXSTGUGKHCPLAOXBEDALJVTBPJWNBIDQVVJULSEINZDFPUJUENWPCGSAYMZLQABBTOCIMK");

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
    msg.setTimeStamp(0.2900627328993599);
    msg.setSource(52511U);
    msg.setSourceEntity(203U);
    msg.setDestination(51713U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("WSROJGQAOFFVXSDWWDZLAXQQZQJBZTXSLLWYZTANZNISHTIQXXVOJZPKXDEXCDSPKEOHTIBHIYCZEVADERLMNLNIGLJTIUCIYSARROUAPFTJHYWNMPKHNYIFMHSDCDUHBCTJLNUTBQOOSQCXVYCBDFHMVWDPSKLMPVVRFGJJVTIAMCTBAGXUMNXBGCMJGBREHELEHAGKWOPPQRUQ");

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
    msg.setTimeStamp(0.47242993506779274);
    msg.setSource(55625U);
    msg.setSourceEntity(53U);
    msg.setDestination(55161U);
    msg.setDestinationEntity(242U);
    msg.actions.assign("KWBDWCCONAXAABZOWAFHZPFYYLMZWPGKPJNBVCNEQYM");

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
    msg.setTimeStamp(0.0006384087610357136);
    msg.setSource(6415U);
    msg.setSourceEntity(234U);
    msg.setDestination(41524U);
    msg.setDestinationEntity(163U);
    msg.button = 193U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.7936189574506143);
    msg.setSource(33503U);
    msg.setSourceEntity(6U);
    msg.setDestination(5114U);
    msg.setDestinationEntity(89U);
    msg.button = 185U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.9108350056000327);
    msg.setSource(57097U);
    msg.setSourceEntity(85U);
    msg.setDestination(40133U);
    msg.setDestinationEntity(209U);
    msg.button = 158U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.7692113921162618);
    msg.setSource(13789U);
    msg.setSourceEntity(120U);
    msg.setDestination(23365U);
    msg.setDestinationEntity(248U);
    msg.op = 45U;
    msg.text.assign("TZIZRSNHDPXWSPIXJASVLVJAVYBCWG");

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
    msg.setTimeStamp(0.859702217501438);
    msg.setSource(32065U);
    msg.setSourceEntity(98U);
    msg.setDestination(7363U);
    msg.setDestinationEntity(47U);
    msg.op = 168U;
    msg.text.assign("ZSNQVPFKGXVAAMEIHXKVXBBYHXQAKATEOGCROPQCYFTQFYOWOVZHIGIQLNZSMQFWMYSXDWMWONYUQCKTFSPBDIIKLSPTUBVRFYBNGQJYQKKXRGGFJCUIKKPAYUCHMSHNASABEQBXZLYBDRHOIGLZCMEGJEVJNWZCTETVWRRSUZ");

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
    msg.setTimeStamp(0.6122764375226315);
    msg.setSource(29260U);
    msg.setSourceEntity(13U);
    msg.setDestination(23280U);
    msg.setDestinationEntity(170U);
    msg.op = 234U;
    msg.text.assign("BQTEADKYRJOPYYIXNZCIRVXIOILFIKISHOSZKJLUAJLCDTWOXZZYTOZKNKPYYUXVAVCKVUJFHVWSGSBMZMQELWGNNLMUBMVOHIJRRKRLBVGAOQEFTDDCBONPFCMHPESMNIBQRUXWHPDXTFXHTUETSWFHQN");

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
    msg.setTimeStamp(0.5298647374448453);
    msg.setSource(19087U);
    msg.setSourceEntity(179U);
    msg.setDestination(13710U);
    msg.setDestinationEntity(109U);
    msg.op = 127U;
    msg.time_remain = 0.5174106227034724;
    msg.sched_time = 0.7086992638049459;

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
    msg.setTimeStamp(0.9762314274627265);
    msg.setSource(46671U);
    msg.setSourceEntity(83U);
    msg.setDestination(39152U);
    msg.setDestinationEntity(115U);
    msg.op = 88U;
    msg.time_remain = 0.5296380120240813;
    msg.sched_time = 0.712282045945099;

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
    msg.setTimeStamp(0.5134557874202716);
    msg.setSource(29913U);
    msg.setSourceEntity(39U);
    msg.setDestination(65285U);
    msg.setDestinationEntity(192U);
    msg.op = 39U;
    msg.time_remain = 0.18218853793251144;
    msg.sched_time = 0.5538697257989096;

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
    msg.setTimeStamp(0.17687395222083913);
    msg.setSource(8954U);
    msg.setSourceEntity(70U);
    msg.setDestination(16380U);
    msg.setDestinationEntity(15U);
    msg.name.assign("RTZITXJHMCWPLFEDXCHZYDAAPNVGLWHNDYWZJOILCGYENNDXLBSWMALQAHSRGGMSUTVCQBKXFMUVMVNNAFJYKESOIPDYWFGROIFPARUAUUEBXSZXZTCPBJJOGFQBTESHLDKWZHPAVWRUXQLERVXOYPDJNSTZBPRKCYYOKIWOBYKCVIUUMHMBMKXKJVKUTLBOBOISFCIIQOSCRJHTJZNRGEX");
    msg.op = 53U;
    msg.sched_time = 0.8015745918676779;

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
    msg.setTimeStamp(0.4150710293310218);
    msg.setSource(27717U);
    msg.setSourceEntity(226U);
    msg.setDestination(23661U);
    msg.setDestinationEntity(82U);
    msg.name.assign("HTCQYYHPJNGGEJCMOBFWRRERYQMFTEIPAEUMUSPPKDVRZJODYOJUYFHLAHBYBYBGRDCTXMULRLBZDTJDXMDZCTDUXZIUKGOQZSMBEDFVSVXLXDSFTTGOAJUZUEXNCLNCCUNTKNRKMGMWHHIQZINISNQVHEWROFIPLRIEWSOIKWTPAKQJSAXGVJVQWICWACSETZGAQQCFLARFZHLANBZKYW");
    msg.op = 114U;
    msg.sched_time = 0.13632096197650334;

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
    msg.setTimeStamp(0.13262339373962795);
    msg.setSource(8696U);
    msg.setSourceEntity(0U);
    msg.setDestination(47458U);
    msg.setDestinationEntity(175U);
    msg.name.assign("KKIORJHCPUQCIMFPYBAJKLCXNTSKFYGUAJZKMCIWORGDRTHCWJQSSYXZNYFYBMBXVJZSZIXLQWIJLGESLCOEAOAKHRHWIWRTJHKVHLFQSCEODPNONF");
    msg.op = 54U;
    msg.sched_time = 0.03741277904331963;

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
    msg.setTimeStamp(0.34456669374219007);
    msg.setSource(24019U);
    msg.setSourceEntity(107U);
    msg.setDestination(43035U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.06996610022754779);
    msg.setSource(52703U);
    msg.setSourceEntity(129U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.32809786526443085);
    msg.setSource(18499U);
    msg.setSourceEntity(91U);
    msg.setDestination(51482U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.6878227029958859);
    msg.setSource(14326U);
    msg.setSourceEntity(127U);
    msg.setDestination(34831U);
    msg.setDestinationEntity(194U);
    msg.name.assign("LWOTKJNVCY");
    msg.state = 105U;

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
    msg.setTimeStamp(0.4347101560712189);
    msg.setSource(26126U);
    msg.setSourceEntity(227U);
    msg.setDestination(12994U);
    msg.setDestinationEntity(23U);
    msg.name.assign("WYGRDYXINCJBBHMRVFHTANVFSISCHFSOOUDOXMUYEUMZQCEXWOFGMKHBYQVFUUDDJKZGLJFNMMJXKLCTQHHPZQOKJNIBVQMWZCFZALTVFJWITNIJQIIPXMLRHGLWOWJKWTSOBPQTGDJDVECZDUKDBEKMXXSKALOPGUEUQNRGAPYYPCZZQPFPDGTACSSZNBPRSXLBEKIHAYETIWATGOJOGELHSBRKWPQIRZFCNUMYR");
    msg.state = 228U;

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
    msg.setTimeStamp(0.21691412817767963);
    msg.setSource(27211U);
    msg.setSourceEntity(142U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(221U);
    msg.name.assign("NMXUADHPRHYIGOXZCPSEXJOTVXWTRRDWPTJAQFAGWVIUPPXHCKPKJNSKNHQQOXYUSZG");
    msg.state = 112U;

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
    msg.setTimeStamp(0.6268851714653598);
    msg.setSource(29736U);
    msg.setSourceEntity(227U);
    msg.setDestination(10498U);
    msg.setDestinationEntity(27U);
    msg.name.assign("PEFDIWOHCRVJDJISQONQHZKUBNICUNKZBOYVCSIIXTPDZUETFLDGWDYMBVYWOIAQHPMETPLMRGRBBFMXUOCRQIHQMLXGYFZOSAKLFNDSKSZSPEKDMXOGOGWDXNLVZCXFXTQZQ");
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
    msg.setTimeStamp(0.804799792546463);
    msg.setSource(54849U);
    msg.setSourceEntity(76U);
    msg.setDestination(62506U);
    msg.setDestinationEntity(250U);
    msg.name.assign("NWXBDRJKFYZGPGCBNKHBTPHUUQQEWWULUIWBYFILAKCPQMJGMEOSQKXRIMDSQFFLJWYRVDZQSJVYFTLMOGOUXEJMNT");
    msg.value = 212U;

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
    msg.setTimeStamp(0.45429759399673353);
    msg.setSource(47163U);
    msg.setSourceEntity(85U);
    msg.setDestination(51483U);
    msg.setDestinationEntity(4U);
    msg.name.assign("CTTQWFNGLEDESSNRFJGHFRMOYPMVZPQCUWHWAHY");
    msg.value = 64U;

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
    msg.setTimeStamp(0.24520567986951802);
    msg.setSource(2933U);
    msg.setSourceEntity(144U);
    msg.setDestination(10176U);
    msg.setDestinationEntity(32U);
    msg.name.assign("UDROXZQBTJCQBZUBEMHYSKXKYEUTHYJQTVHMWJWKOBDZSHBYXYVZCRMODECTLCTOPIEQDXQTAEVNFVNGFSIYXFTQVNWLRABHMERJRKBABLCLPPEAQWZYIMDNIRJXIGDWISCEACPHINJOYNLEGVMBLRVXSLQQGNQNNHUUJJAXHGUXKMGFGPGDPZWYSIOCOHOVWHRARLYAVMTTWIKWJPLOSDTRZ");

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
    msg.setTimeStamp(0.7293551174945149);
    msg.setSource(58667U);
    msg.setSourceEntity(134U);
    msg.setDestination(26121U);
    msg.setDestinationEntity(119U);
    msg.name.assign("HTXWAVYZEAZCOGQFSLDKKZZTGIOWWQEEYNTXXMGULUOXAUNKVYOQIIPWFKMPLABGKHHZXNUYUIGUBNXQZHRDKJRPTYPMFLQHBPWHEFHELOAEEOZECCVKCJGIMFLGVXQJIYPNVTDAILT");

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
    msg.setTimeStamp(0.2879972973747209);
    msg.setSource(42698U);
    msg.setSourceEntity(137U);
    msg.setDestination(31333U);
    msg.setDestinationEntity(235U);
    msg.name.assign("BJDGEHJEKFFNFZQHNCBMJGZJSQCDCRBXQNCUVOLHSNOEWTWHKBGLWXFSEBPRULJTKTPVFXKFKVZAFZQJEAWHEXJVRDVYOUSSDOABVMGAIIYLUMUXMXQPPVQRZIYOGAIALYBGPTWQTL");

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
    msg.setTimeStamp(0.10021707525852008);
    msg.setSource(21038U);
    msg.setSourceEntity(31U);
    msg.setDestination(44441U);
    msg.setDestinationEntity(171U);
    msg.name.assign("JXJPWQFWRDLKHQYVTHJTSSTHLSIISJXFZECWXRUTMMROWOUQCYEITQOPFXAWKTMHIZRPQYINCSDMOCDYAKLGEFKJOMBDLEGOJWYFLPXGUWAIUGBQYDIHPRPKHXGFBZMOSLFSNTHTUGRKNHJBFOQGKUPTOEWB");
    msg.value = 34U;

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
    msg.setTimeStamp(0.3217389638713197);
    msg.setSource(8016U);
    msg.setSourceEntity(111U);
    msg.setDestination(56527U);
    msg.setDestinationEntity(86U);
    msg.name.assign("VZYISBRLILWKHNSLMOJRJLJMWUICFCEEAPQIXXXYYIL");
    msg.value = 1U;

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
    msg.setTimeStamp(0.7680159025738873);
    msg.setSource(26807U);
    msg.setSourceEntity(163U);
    msg.setDestination(55535U);
    msg.setDestinationEntity(2U);
    msg.name.assign("AGVBPICBRLENRSQMRHRJVLBWAXODSQGMCQTVMWOLSIZFMNGDYRMWETASNSYXRUOFGVPEBCMRQVFKGCXTWFLZYUFNGAIHJADPEKPIXTOBEVKSUHAUABXTFSOMXXJYERXWWKCUTSZDQCOWLNEIPJFVBBKDTQUIMLFHPNNLEKVHTBUCDTDEWRKAHSDUMIEKZOIYJPOKHD");
    msg.value = 249U;

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
    msg.setTimeStamp(0.7136053098412732);
    msg.setSource(60696U);
    msg.setSourceEntity(130U);
    msg.setDestination(9329U);
    msg.setDestinationEntity(135U);
    msg.id = 200U;
    msg.period = 3849203453U;
    msg.duty_cycle = 523338933U;

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
    msg.setTimeStamp(0.8102835451699928);
    msg.setSource(53200U);
    msg.setSourceEntity(8U);
    msg.setDestination(50908U);
    msg.setDestinationEntity(62U);
    msg.id = 208U;
    msg.period = 3759536799U;
    msg.duty_cycle = 2481215178U;

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
    msg.setTimeStamp(0.7980671006447482);
    msg.setSource(29935U);
    msg.setSourceEntity(89U);
    msg.setDestination(1513U);
    msg.setDestinationEntity(241U);
    msg.id = 67U;
    msg.period = 109307240U;
    msg.duty_cycle = 3912888298U;

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
    msg.setTimeStamp(0.660251512399291);
    msg.setSource(64893U);
    msg.setSourceEntity(112U);
    msg.setDestination(63899U);
    msg.setDestinationEntity(20U);
    msg.id = 121U;
    msg.period = 927569612U;
    msg.duty_cycle = 816963998U;

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
    msg.setTimeStamp(0.6525104659213087);
    msg.setSource(24328U);
    msg.setSourceEntity(42U);
    msg.setDestination(63387U);
    msg.setDestinationEntity(102U);
    msg.id = 206U;
    msg.period = 4174468031U;
    msg.duty_cycle = 1081613309U;

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
    msg.setTimeStamp(0.08895341157248982);
    msg.setSource(30227U);
    msg.setSourceEntity(159U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(124U);
    msg.id = 168U;
    msg.period = 30128570U;
    msg.duty_cycle = 2520676418U;

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
    msg.setTimeStamp(0.4271293264250916);
    msg.setSource(28682U);
    msg.setSourceEntity(63U);
    msg.setDestination(8830U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.7163767091781843;
    msg.lon = 0.40968197538554085;
    msg.height = 0.44561776125707564;
    msg.x = 0.39812184500335923;
    msg.y = 0.9853111184491871;
    msg.z = 0.40297254446564756;
    msg.phi = 0.8948809290563423;
    msg.theta = 0.07089981084752062;
    msg.psi = 0.8111458053815905;
    msg.u = 0.31744503728588913;
    msg.v = 0.8458794631146018;
    msg.w = 0.4048917745754461;
    msg.vx = 0.731343774749712;
    msg.vy = 0.22773955422992953;
    msg.vz = 0.3576574309214151;
    msg.p = 0.9619226995034617;
    msg.q = 0.5613016012021896;
    msg.r = 0.3112339330947105;
    msg.depth = 0.7061617842642312;
    msg.alt = 0.9821746364159406;

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
    msg.setTimeStamp(0.1920301372784169);
    msg.setSource(32590U);
    msg.setSourceEntity(22U);
    msg.setDestination(25979U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.5473815187100559;
    msg.lon = 0.24976863584772258;
    msg.height = 0.39530759999268683;
    msg.x = 0.3056838826369631;
    msg.y = 0.20903394644871087;
    msg.z = 0.8747608034781734;
    msg.phi = 0.33341432515527214;
    msg.theta = 0.493116375760249;
    msg.psi = 0.6236676417651281;
    msg.u = 0.6238549850988023;
    msg.v = 0.8848304305617953;
    msg.w = 0.477999501145855;
    msg.vx = 0.35301956400128576;
    msg.vy = 0.5640604930462491;
    msg.vz = 0.7629030719904868;
    msg.p = 0.8887012645384696;
    msg.q = 0.2784410249578919;
    msg.r = 0.34202395022313237;
    msg.depth = 0.004836340162105657;
    msg.alt = 0.8691844183515616;

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
    msg.setTimeStamp(0.6035304698827391);
    msg.setSource(51979U);
    msg.setSourceEntity(55U);
    msg.setDestination(60817U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.29708053897140796;
    msg.lon = 0.31734808639184386;
    msg.height = 0.6992059595052532;
    msg.x = 0.443349171864715;
    msg.y = 0.7229247393951554;
    msg.z = 0.49231312455885057;
    msg.phi = 0.47363616208234527;
    msg.theta = 0.22258199371584475;
    msg.psi = 0.8195993490751483;
    msg.u = 0.9476824904989385;
    msg.v = 0.1514693082278845;
    msg.w = 0.04262364436605548;
    msg.vx = 0.6339801324556067;
    msg.vy = 0.15877591417902392;
    msg.vz = 0.14351495432690364;
    msg.p = 0.1526526052581032;
    msg.q = 0.29665405330437256;
    msg.r = 0.2663436025786572;
    msg.depth = 0.36791532076328626;
    msg.alt = 0.9571504947036911;

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
    msg.setTimeStamp(0.48588046733620216);
    msg.setSource(33998U);
    msg.setSourceEntity(116U);
    msg.setDestination(25286U);
    msg.setDestinationEntity(10U);
    msg.x = 0.03837955629018397;
    msg.y = 0.05429154979568529;
    msg.z = 0.7285420282094601;

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
    msg.setTimeStamp(0.2487839794956863);
    msg.setSource(10148U);
    msg.setSourceEntity(113U);
    msg.setDestination(33072U);
    msg.setDestinationEntity(136U);
    msg.x = 0.7865987821622595;
    msg.y = 0.4148334254537066;
    msg.z = 0.0141480131846351;

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
    msg.setTimeStamp(0.4023951827032022);
    msg.setSource(2851U);
    msg.setSourceEntity(248U);
    msg.setDestination(39361U);
    msg.setDestinationEntity(250U);
    msg.x = 0.39019916994697623;
    msg.y = 0.9129371600361919;
    msg.z = 0.7658826017093964;

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
    msg.setTimeStamp(0.3962060429319889);
    msg.setSource(1247U);
    msg.setSourceEntity(23U);
    msg.setDestination(21812U);
    msg.setDestinationEntity(187U);
    msg.value = 0.9822274310295347;

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
    msg.setTimeStamp(0.271683514187417);
    msg.setSource(34150U);
    msg.setSourceEntity(3U);
    msg.setDestination(27725U);
    msg.setDestinationEntity(114U);
    msg.value = 0.40196171639830625;

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
    msg.setTimeStamp(0.1964732554440881);
    msg.setSource(13541U);
    msg.setSourceEntity(89U);
    msg.setDestination(50680U);
    msg.setDestinationEntity(124U);
    msg.value = 0.24717779412499186;

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
    msg.setTimeStamp(0.5599497904887889);
    msg.setSource(51109U);
    msg.setSourceEntity(105U);
    msg.setDestination(52830U);
    msg.setDestinationEntity(74U);
    msg.value = 0.011331890185087845;

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
    msg.setTimeStamp(0.7984020745924194);
    msg.setSource(47713U);
    msg.setSourceEntity(60U);
    msg.setDestination(11861U);
    msg.setDestinationEntity(20U);
    msg.value = 0.8361546905272178;

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
    msg.setTimeStamp(0.21485907505322777);
    msg.setSource(13533U);
    msg.setSourceEntity(119U);
    msg.setDestination(23881U);
    msg.setDestinationEntity(58U);
    msg.value = 0.8557103176575133;

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
    msg.setTimeStamp(0.4520618136989062);
    msg.setSource(40877U);
    msg.setSourceEntity(2U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(96U);
    msg.x = 0.9194961873195583;
    msg.y = 0.5930601530719305;
    msg.z = 0.870537973915124;
    msg.phi = 0.12243319517785434;
    msg.theta = 0.6119390108679726;
    msg.psi = 0.8994476962229934;
    msg.p = 0.4263034925578686;
    msg.q = 0.42904896323637276;
    msg.r = 0.8353666733427131;
    msg.u = 0.8033120103432652;
    msg.v = 0.7245450764241752;
    msg.w = 0.2134832988645745;
    msg.bias_psi = 0.1898553389563422;
    msg.bias_r = 0.28390784505041167;

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
    msg.setTimeStamp(0.1326257830700871);
    msg.setSource(40189U);
    msg.setSourceEntity(244U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(147U);
    msg.x = 0.31772365568383165;
    msg.y = 0.17327173519481875;
    msg.z = 0.8013772000711591;
    msg.phi = 0.7492834502497546;
    msg.theta = 0.7700321716558285;
    msg.psi = 0.32552249730961114;
    msg.p = 0.48777528490830546;
    msg.q = 0.8943950511833316;
    msg.r = 0.8488763045614284;
    msg.u = 0.8500452991623269;
    msg.v = 0.4723440457320842;
    msg.w = 0.445104507552578;
    msg.bias_psi = 0.5131068622706135;
    msg.bias_r = 0.5443213135109235;

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
    msg.setTimeStamp(0.38390439701203305);
    msg.setSource(48545U);
    msg.setSourceEntity(181U);
    msg.setDestination(63564U);
    msg.setDestinationEntity(73U);
    msg.x = 0.8177517635785795;
    msg.y = 0.4638759158604957;
    msg.z = 0.8371758206683185;
    msg.phi = 0.12056811780586396;
    msg.theta = 0.5539853079969213;
    msg.psi = 0.7018887510281939;
    msg.p = 0.988043598883896;
    msg.q = 0.9624726969645916;
    msg.r = 0.44881557777531034;
    msg.u = 0.6855745652793794;
    msg.v = 0.588584282914886;
    msg.w = 0.030673472957628345;
    msg.bias_psi = 0.4910835958063946;
    msg.bias_r = 0.38854018797323864;

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
    msg.setTimeStamp(0.23655388375371666);
    msg.setSource(5015U);
    msg.setSourceEntity(72U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(92U);
    msg.bias_psi = 0.6563136541589251;
    msg.bias_r = 0.6122657819593668;
    msg.cog = 0.08140137681185211;
    msg.cyaw = 0.6446884089093757;
    msg.lbl_rej_level = 0.740628874619472;
    msg.gps_rej_level = 0.6220188449925982;
    msg.custom_x = 0.6690666586422536;
    msg.custom_y = 0.10242013427897512;
    msg.custom_z = 0.1265757386185712;

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
    msg.setTimeStamp(0.33719136175419107);
    msg.setSource(2360U);
    msg.setSourceEntity(35U);
    msg.setDestination(26687U);
    msg.setDestinationEntity(91U);
    msg.bias_psi = 0.8721870456072297;
    msg.bias_r = 0.5847909925283541;
    msg.cog = 0.1299416152966416;
    msg.cyaw = 0.620065864496954;
    msg.lbl_rej_level = 0.43048640849747755;
    msg.gps_rej_level = 0.020078578911132405;
    msg.custom_x = 0.050384063257291056;
    msg.custom_y = 0.8183423432018169;
    msg.custom_z = 0.14598247519139806;

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
    msg.setTimeStamp(0.46273584561079706);
    msg.setSource(19992U);
    msg.setSourceEntity(128U);
    msg.setDestination(33050U);
    msg.setDestinationEntity(138U);
    msg.bias_psi = 0.9833903245421196;
    msg.bias_r = 0.9138011291421774;
    msg.cog = 0.6018851052163556;
    msg.cyaw = 0.03241002358833833;
    msg.lbl_rej_level = 0.47514263562763714;
    msg.gps_rej_level = 0.783929826598724;
    msg.custom_x = 0.6198848994148708;
    msg.custom_y = 0.06466676261102766;
    msg.custom_z = 0.6469082769945118;

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
    msg.setTimeStamp(0.2690384272354428);
    msg.setSource(59006U);
    msg.setSourceEntity(171U);
    msg.setDestination(29858U);
    msg.setDestinationEntity(173U);
    msg.utc_time = 0.4752861453892371;
    msg.reason = 34U;

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
    msg.setTimeStamp(0.15645062970291468);
    msg.setSource(43659U);
    msg.setSourceEntity(117U);
    msg.setDestination(36835U);
    msg.setDestinationEntity(59U);
    msg.utc_time = 0.23079178332230188;
    msg.reason = 231U;

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
    msg.setTimeStamp(0.3282185513837548);
    msg.setSource(45863U);
    msg.setSourceEntity(46U);
    msg.setDestination(54502U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.8384817663631942;
    msg.reason = 90U;

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
    msg.setTimeStamp(0.5380655506433519);
    msg.setSource(27002U);
    msg.setSourceEntity(76U);
    msg.setDestination(21853U);
    msg.setDestinationEntity(176U);
    msg.id = 130U;
    msg.range = 0.4575559287346431;
    msg.acceptance = 125U;

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
    msg.setTimeStamp(0.6067502499821559);
    msg.setSource(2114U);
    msg.setSourceEntity(147U);
    msg.setDestination(62837U);
    msg.setDestinationEntity(166U);
    msg.id = 37U;
    msg.range = 0.4405768347337893;
    msg.acceptance = 235U;

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
    msg.setTimeStamp(0.08419819855915633);
    msg.setSource(42619U);
    msg.setSourceEntity(117U);
    msg.setDestination(11957U);
    msg.setDestinationEntity(127U);
    msg.id = 176U;
    msg.range = 0.08334149249411427;
    msg.acceptance = 241U;

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
    msg.setTimeStamp(0.25064702541982875);
    msg.setSource(56628U);
    msg.setSourceEntity(154U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(144U);
    msg.type = 136U;
    msg.reason = 211U;
    msg.value = 0.41022399826076283;
    msg.timestep = 0.30751600110627975;

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
    msg.setTimeStamp(0.8481170144210567);
    msg.setSource(62348U);
    msg.setSourceEntity(79U);
    msg.setDestination(33890U);
    msg.setDestinationEntity(75U);
    msg.type = 191U;
    msg.reason = 213U;
    msg.value = 0.5796124164907364;
    msg.timestep = 0.07540002199688067;

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
    msg.setTimeStamp(0.6852271352003337);
    msg.setSource(11669U);
    msg.setSourceEntity(51U);
    msg.setDestination(10076U);
    msg.setDestinationEntity(11U);
    msg.type = 245U;
    msg.reason = 81U;
    msg.value = 0.881408120706896;
    msg.timestep = 0.1139865309078053;

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
    msg.setTimeStamp(0.3432582872707952);
    msg.setSource(52271U);
    msg.setSourceEntity(13U);
    msg.setDestination(3354U);
    msg.setDestinationEntity(135U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FUBFDJLTVITGUFICRZVJLGISZNPJYCWZAFORBIUFZARTVPFMOJQVHKBQLQGJKWLMNEDTISRMCWOTMGVCPSICISDMGHJHEEUWXGEBPQMESDRGTIDUKWRZGPNAPZHPACBJYXQWABKEOSEWLQZXYZVTPFIUAHBJHDENLBBMCALNQFHQOFTNPEXOKRMNJKSVTVRSKQMUDNXDWVYXYWXGXSTYMCJXXRKODGAZILFCUYARNYZHKHVYOUBESKO");
    tmp_msg_0.lat = 0.3901643745227562;
    tmp_msg_0.lon = 0.7247861294603954;
    tmp_msg_0.depth = 0.5276941544329798;
    tmp_msg_0.query_channel = 4U;
    tmp_msg_0.reply_channel = 245U;
    tmp_msg_0.transponder_delay = 118U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6846422146808543;
    msg.y = 0.6910623227225448;
    msg.var_x = 0.9050343301613024;
    msg.var_y = 0.14734335383829966;
    msg.distance = 0.012039611089061153;

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
    msg.setTimeStamp(0.38409649412194447);
    msg.setSource(1853U);
    msg.setSourceEntity(192U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(5U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CESAMGJDROEGFGUKOGXLHUZPRHOYVJMEOPZIWMPXRQYRTQVJEANBJIPNVZFWPRSEAMBQNUSJNBYZDKWGHSTCSZFPZUATFIIHPPLULU");
    tmp_msg_0.lat = 0.08833560265386653;
    tmp_msg_0.lon = 0.41491506201708783;
    tmp_msg_0.depth = 0.5934005450886087;
    tmp_msg_0.query_channel = 86U;
    tmp_msg_0.reply_channel = 78U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.11931967524948817;
    msg.y = 0.2668499568103814;
    msg.var_x = 0.554362704582292;
    msg.var_y = 0.08897525787702076;
    msg.distance = 0.9873884120777779;

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
    msg.setTimeStamp(0.17909058006135448);
    msg.setSource(155U);
    msg.setSourceEntity(192U);
    msg.setDestination(35971U);
    msg.setDestinationEntity(65U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QAOYATMZLRIMTODZVWKXFORFWGHPSSGHSCDWQRQVXTHUPJTXPQRCUYUKHUEEDHDNYLADSKWIQOSPMHRJMLEKJPJLXLEHFZMAEVZZCTCBTHUHNADCTYSDOGNMLCUJBQWZBQWAMOXLBRQRGYAESZVNBREYSYHNIZKVIYKUQGUNVFYFABVJGGIYOWOZGMMAAXJOSRVTLDBIPDIEGKMPJUIBNZBRGFCFXFQKXCDCPKPFCXVBNTTF");
    tmp_msg_0.lat = 0.8576444571813319;
    tmp_msg_0.lon = 0.15414740943019245;
    tmp_msg_0.depth = 0.15586260853306522;
    tmp_msg_0.query_channel = 198U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 40U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7021927243197189;
    msg.y = 0.6000229247358372;
    msg.var_x = 0.5692875532001291;
    msg.var_y = 0.6237101911095746;
    msg.distance = 0.7422881973173242;

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
    msg.setTimeStamp(0.5685230064751001);
    msg.setSource(59669U);
    msg.setSourceEntity(184U);
    msg.setDestination(31420U);
    msg.setDestinationEntity(82U);
    msg.state = 211U;

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
    msg.setTimeStamp(0.816599651495009);
    msg.setSource(15069U);
    msg.setSourceEntity(15U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(106U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.9625178178091697);
    msg.setSource(1850U);
    msg.setSourceEntity(95U);
    msg.setDestination(1025U);
    msg.setDestinationEntity(183U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.21252638001362223);
    msg.setSource(26020U);
    msg.setSourceEntity(194U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(113U);
    msg.x = 0.056612879652728876;
    msg.y = 0.38221878624746686;
    msg.z = 0.9213106402110074;

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
    msg.setTimeStamp(0.8946780339181544);
    msg.setSource(7590U);
    msg.setSourceEntity(245U);
    msg.setDestination(47994U);
    msg.setDestinationEntity(30U);
    msg.x = 0.0030803271691643985;
    msg.y = 0.3405927527858268;
    msg.z = 0.9023289875516965;

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
    msg.setTimeStamp(0.20067676189964057);
    msg.setSource(15039U);
    msg.setSourceEntity(19U);
    msg.setDestination(58276U);
    msg.setDestinationEntity(176U);
    msg.x = 0.9659006885789533;
    msg.y = 0.7425202738402482;
    msg.z = 0.8601659322818218;

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
    msg.setTimeStamp(0.7895412064264601);
    msg.setSource(51823U);
    msg.setSourceEntity(49U);
    msg.setDestination(11533U);
    msg.setDestinationEntity(77U);
    msg.va = 0.565260351620791;
    msg.aoa = 0.0032340704254220087;
    msg.ssa = 0.45807384976640264;

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
    msg.setTimeStamp(0.4703236857787232);
    msg.setSource(38166U);
    msg.setSourceEntity(141U);
    msg.setDestination(2717U);
    msg.setDestinationEntity(101U);
    msg.va = 0.039653178947855805;
    msg.aoa = 0.6236513089382963;
    msg.ssa = 0.07902562971399929;

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
    msg.setTimeStamp(0.8404420096388912);
    msg.setSource(53945U);
    msg.setSourceEntity(224U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(129U);
    msg.va = 0.33443070942405395;
    msg.aoa = 0.9968077472627576;
    msg.ssa = 0.85136935363169;

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
    msg.setTimeStamp(0.01484160509910104);
    msg.setSource(56640U);
    msg.setSourceEntity(9U);
    msg.setDestination(16465U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8157780603640074;

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
    msg.setTimeStamp(0.43205208941341566);
    msg.setSource(13020U);
    msg.setSourceEntity(52U);
    msg.setDestination(32482U);
    msg.setDestinationEntity(148U);
    msg.value = 0.40432947177262024;

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
    msg.setTimeStamp(0.500817186783935);
    msg.setSource(44710U);
    msg.setSourceEntity(246U);
    msg.setDestination(33242U);
    msg.setDestinationEntity(184U);
    msg.value = 0.34125153717827994;

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
    msg.setTimeStamp(0.008606720364052856);
    msg.setSource(22895U);
    msg.setSourceEntity(115U);
    msg.setDestination(33570U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7960915918792546;
    msg.z_units = 31U;

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
    msg.setTimeStamp(0.09698822810915664);
    msg.setSource(51563U);
    msg.setSourceEntity(26U);
    msg.setDestination(56644U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5781148205429093;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.26348306741134575);
    msg.setSource(51246U);
    msg.setSourceEntity(70U);
    msg.setDestination(57964U);
    msg.setDestinationEntity(39U);
    msg.value = 0.4623403824004001;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.5442224608288987);
    msg.setSource(63736U);
    msg.setSourceEntity(97U);
    msg.setDestination(14594U);
    msg.setDestinationEntity(185U);
    msg.value = 0.2554646425602056;
    msg.speed_units = 68U;

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
    msg.setTimeStamp(0.47159021415450175);
    msg.setSource(53997U);
    msg.setSourceEntity(182U);
    msg.setDestination(24663U);
    msg.setDestinationEntity(152U);
    msg.value = 0.4469150463519014;
    msg.speed_units = 29U;

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
    msg.setTimeStamp(0.5576592566481825);
    msg.setSource(32080U);
    msg.setSourceEntity(242U);
    msg.setDestination(21403U);
    msg.setDestinationEntity(80U);
    msg.value = 0.11822252147660373;
    msg.speed_units = 29U;

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
    msg.setTimeStamp(0.9443965028214674);
    msg.setSource(48748U);
    msg.setSourceEntity(117U);
    msg.setDestination(22970U);
    msg.setDestinationEntity(226U);
    msg.value = 0.17148022293866994;

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
    msg.setTimeStamp(0.35677069456451993);
    msg.setSource(4420U);
    msg.setSourceEntity(166U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3161643735558127;

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
    msg.setTimeStamp(0.7750978597987884);
    msg.setSource(30848U);
    msg.setSourceEntity(11U);
    msg.setDestination(57502U);
    msg.setDestinationEntity(17U);
    msg.value = 0.26074304618189104;

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
    msg.setTimeStamp(0.5734782799373769);
    msg.setSource(20917U);
    msg.setSourceEntity(238U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(109U);
    msg.value = 0.34641375976955535;

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
    msg.setTimeStamp(0.9227955724552833);
    msg.setSource(48060U);
    msg.setSourceEntity(204U);
    msg.setDestination(65038U);
    msg.setDestinationEntity(29U);
    msg.value = 0.7595496376855064;

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
    msg.setTimeStamp(0.7556047768895525);
    msg.setSource(14209U);
    msg.setSourceEntity(27U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(199U);
    msg.value = 0.40079644076639365;

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
    msg.setTimeStamp(0.7552340946058153);
    msg.setSource(31466U);
    msg.setSourceEntity(16U);
    msg.setDestination(25595U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9645844610419455;

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
    msg.setTimeStamp(0.8482622645510391);
    msg.setSource(58661U);
    msg.setSourceEntity(29U);
    msg.setDestination(31808U);
    msg.setDestinationEntity(12U);
    msg.value = 0.2959246175858036;

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
    msg.setTimeStamp(0.21296294623611467);
    msg.setSource(2735U);
    msg.setSourceEntity(233U);
    msg.setDestination(9369U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5012752510577907;

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
    msg.setTimeStamp(0.9299755655085976);
    msg.setSource(8808U);
    msg.setSourceEntity(67U);
    msg.setDestination(28143U);
    msg.setDestinationEntity(199U);
    msg.path_ref = 282527100U;
    msg.start_lat = 0.9194289960254268;
    msg.start_lon = 0.17691344620364002;
    msg.start_z = 0.6899655425480457;
    msg.start_z_units = 50U;
    msg.end_lat = 0.35150154259847455;
    msg.end_lon = 0.13956114876491;
    msg.end_z = 0.7105803658827657;
    msg.end_z_units = 197U;
    msg.speed = 0.4774947545299909;
    msg.speed_units = 94U;
    msg.lradius = 0.42523228959096493;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.9915563059782927);
    msg.setSource(11039U);
    msg.setSourceEntity(77U);
    msg.setDestination(53475U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 4125339525U;
    msg.start_lat = 0.036050927926158605;
    msg.start_lon = 0.779865388784493;
    msg.start_z = 0.9621795360056735;
    msg.start_z_units = 83U;
    msg.end_lat = 0.3878709977018546;
    msg.end_lon = 0.603741052983516;
    msg.end_z = 0.260391033074036;
    msg.end_z_units = 202U;
    msg.speed = 0.7834132778909979;
    msg.speed_units = 60U;
    msg.lradius = 0.022255033687914594;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.7328468351715036);
    msg.setSource(49271U);
    msg.setSourceEntity(145U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(107U);
    msg.path_ref = 4069296855U;
    msg.start_lat = 0.6628401664481335;
    msg.start_lon = 0.21904523563478362;
    msg.start_z = 0.691982420240939;
    msg.start_z_units = 42U;
    msg.end_lat = 0.9399266144719134;
    msg.end_lon = 0.2769993222180971;
    msg.end_z = 0.23775959570289273;
    msg.end_z_units = 204U;
    msg.speed = 0.6789928737443516;
    msg.speed_units = 224U;
    msg.lradius = 0.9252818759329278;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.7681431056940657);
    msg.setSource(59905U);
    msg.setSourceEntity(174U);
    msg.setDestination(11632U);
    msg.setDestinationEntity(93U);
    msg.x = 0.7818992501044192;
    msg.y = 0.19913507225419447;
    msg.z = 0.19461505100146526;
    msg.k = 0.8018476942422906;
    msg.m = 0.20393176088881737;
    msg.n = 0.27469959483331985;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.10231336231299659);
    msg.setSource(27282U);
    msg.setSourceEntity(210U);
    msg.setDestination(63217U);
    msg.setDestinationEntity(120U);
    msg.x = 0.7698422375898891;
    msg.y = 0.5390105268994022;
    msg.z = 0.8963724916958544;
    msg.k = 0.5596186524851569;
    msg.m = 0.8679538313814081;
    msg.n = 0.5380261733710014;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.13725698947800502);
    msg.setSource(1086U);
    msg.setSourceEntity(233U);
    msg.setDestination(16543U);
    msg.setDestinationEntity(215U);
    msg.x = 0.09569804345712118;
    msg.y = 0.7684064111200947;
    msg.z = 0.23141237413679472;
    msg.k = 0.49049169352107647;
    msg.m = 0.4141965817573351;
    msg.n = 0.9632032664695779;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.051293199414114365);
    msg.setSource(10762U);
    msg.setSourceEntity(149U);
    msg.setDestination(13539U);
    msg.setDestinationEntity(33U);
    msg.value = 0.05532099149627123;

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
    msg.setTimeStamp(0.4996152977407885);
    msg.setSource(29793U);
    msg.setSourceEntity(173U);
    msg.setDestination(25336U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6929442569154851;

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
    msg.setTimeStamp(0.7161008399296032);
    msg.setSource(12019U);
    msg.setSourceEntity(246U);
    msg.setDestination(54555U);
    msg.setDestinationEntity(55U);
    msg.value = 0.6518468802064181;

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
    msg.setTimeStamp(0.2129445139001187);
    msg.setSource(13414U);
    msg.setSourceEntity(36U);
    msg.setDestination(16055U);
    msg.setDestinationEntity(49U);
    msg.u = 0.42873135064396006;
    msg.v = 0.19363937477972226;
    msg.w = 0.03186408727125922;
    msg.p = 0.9868193525764224;
    msg.q = 0.3039497031043933;
    msg.r = 0.7998468303187345;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.058775394559879346);
    msg.setSource(27296U);
    msg.setSourceEntity(44U);
    msg.setDestination(33800U);
    msg.setDestinationEntity(87U);
    msg.u = 0.17699437256388595;
    msg.v = 0.7839581610592963;
    msg.w = 0.7630965688407184;
    msg.p = 0.9672088472698769;
    msg.q = 0.265159057979494;
    msg.r = 0.47516135849761476;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.5427169002244595);
    msg.setSource(49407U);
    msg.setSourceEntity(120U);
    msg.setDestination(8020U);
    msg.setDestinationEntity(74U);
    msg.u = 0.0842640569102886;
    msg.v = 0.7389390243676319;
    msg.w = 0.3526494240764354;
    msg.p = 0.4758697521002261;
    msg.q = 0.11810205192599021;
    msg.r = 0.40799014335179973;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.1337878195753328);
    msg.setSource(13237U);
    msg.setSourceEntity(68U);
    msg.setDestination(28733U);
    msg.setDestinationEntity(127U);
    msg.path_ref = 424310851U;
    msg.start_lat = 0.6445100553665319;
    msg.start_lon = 0.6157221153240741;
    msg.start_z = 0.4309076561805312;
    msg.start_z_units = 54U;
    msg.end_lat = 0.45110452196654294;
    msg.end_lon = 0.4956771674452489;
    msg.end_z = 0.014054077791153086;
    msg.end_z_units = 11U;
    msg.lradius = 0.8902998841336003;
    msg.flags = 139U;
    msg.x = 0.7551678081841616;
    msg.y = 0.17949429892388813;
    msg.z = 0.1624413075652773;
    msg.vx = 0.21809127784274884;
    msg.vy = 0.027323398647508435;
    msg.vz = 0.592726548949854;
    msg.course_error = 0.2978918181240352;
    msg.eta = 45578U;

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
    msg.setTimeStamp(0.1483473343378452);
    msg.setSource(16285U);
    msg.setSourceEntity(219U);
    msg.setDestination(53505U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 3372248071U;
    msg.start_lat = 0.45223786217398054;
    msg.start_lon = 0.9093645735630869;
    msg.start_z = 0.8455623886446615;
    msg.start_z_units = 53U;
    msg.end_lat = 0.3459577673389226;
    msg.end_lon = 0.52778876463512;
    msg.end_z = 0.3888301261735426;
    msg.end_z_units = 59U;
    msg.lradius = 0.22275536556516595;
    msg.flags = 64U;
    msg.x = 0.5939806814835845;
    msg.y = 0.22670288005411;
    msg.z = 0.04745682747221325;
    msg.vx = 0.9193443179574405;
    msg.vy = 0.5484620577053834;
    msg.vz = 0.49221386723984706;
    msg.course_error = 0.7568196586100611;
    msg.eta = 52328U;

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
    msg.setTimeStamp(0.48009530792892174);
    msg.setSource(34676U);
    msg.setSourceEntity(49U);
    msg.setDestination(25334U);
    msg.setDestinationEntity(254U);
    msg.path_ref = 2698331923U;
    msg.start_lat = 0.9768242453652732;
    msg.start_lon = 0.6132605865763755;
    msg.start_z = 0.5165665634032692;
    msg.start_z_units = 175U;
    msg.end_lat = 0.10475316307317972;
    msg.end_lon = 0.7744692680741899;
    msg.end_z = 0.13800427497172296;
    msg.end_z_units = 71U;
    msg.lradius = 0.8552910960825737;
    msg.flags = 110U;
    msg.x = 0.7583608588735187;
    msg.y = 0.6578656384421431;
    msg.z = 0.4060904046197765;
    msg.vx = 0.26371263959907076;
    msg.vy = 0.6664667635365407;
    msg.vz = 0.4337314830098443;
    msg.course_error = 0.2581707286254107;
    msg.eta = 64676U;

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
    msg.setTimeStamp(0.1785883939841848);
    msg.setSource(25264U);
    msg.setSourceEntity(95U);
    msg.setDestination(4074U);
    msg.setDestinationEntity(102U);
    msg.k = 0.5537875127233269;
    msg.m = 0.12451550679259893;
    msg.n = 0.13199958206768647;

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
    msg.setTimeStamp(0.23625666448501836);
    msg.setSource(62821U);
    msg.setSourceEntity(248U);
    msg.setDestination(63177U);
    msg.setDestinationEntity(178U);
    msg.k = 0.31472414518884984;
    msg.m = 0.4769426242804392;
    msg.n = 0.05706199147102131;

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
    msg.setTimeStamp(0.16349019884777904);
    msg.setSource(25429U);
    msg.setSourceEntity(132U);
    msg.setDestination(61652U);
    msg.setDestinationEntity(136U);
    msg.k = 0.9484193465237354;
    msg.m = 0.03968481529886225;
    msg.n = 0.0889530819387665;

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
    msg.setTimeStamp(0.06620224186764134);
    msg.setSource(37713U);
    msg.setSourceEntity(56U);
    msg.setDestination(42245U);
    msg.setDestinationEntity(72U);
    msg.p = 0.6160154399316488;
    msg.i = 0.19103439419411505;
    msg.d = 0.7792539109944888;
    msg.a = 0.7111105297161773;

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
    msg.setTimeStamp(0.1743054620631631);
    msg.setSource(16564U);
    msg.setSourceEntity(35U);
    msg.setDestination(62983U);
    msg.setDestinationEntity(241U);
    msg.p = 0.10844739224122957;
    msg.i = 0.11698581440035138;
    msg.d = 0.06829307718927424;
    msg.a = 0.6491648675834815;

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
    msg.setTimeStamp(0.919460398869053);
    msg.setSource(63830U);
    msg.setSourceEntity(204U);
    msg.setDestination(51812U);
    msg.setDestinationEntity(51U);
    msg.p = 0.8522533658933191;
    msg.i = 0.3642088870453448;
    msg.d = 0.5635774036792716;
    msg.a = 0.3821565057951791;

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
    msg.setTimeStamp(0.8254256353735697);
    msg.setSource(14587U);
    msg.setSourceEntity(42U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(100U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.07196446482561547);
    msg.setSource(5605U);
    msg.setSourceEntity(51U);
    msg.setDestination(22435U);
    msg.setDestinationEntity(115U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.23762041324250127);
    msg.setSource(42796U);
    msg.setSourceEntity(77U);
    msg.setDestination(43616U);
    msg.setDestinationEntity(246U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.02362082243027841);
    msg.setSource(39773U);
    msg.setSourceEntity(133U);
    msg.setDestination(31498U);
    msg.setDestinationEntity(65U);
    msg.x = 0.3959022094398459;
    msg.y = 0.9447012799574961;
    msg.z = 0.5428954398062285;
    msg.vx = 0.2913592671208777;
    msg.vy = 0.802048423283462;
    msg.vz = 0.6327503574662376;
    msg.ax = 0.7482059340127016;
    msg.ay = 0.7870596721997848;
    msg.az = 0.9807263914972927;
    msg.flags = 48674U;

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
    msg.setTimeStamp(0.4847189831894765);
    msg.setSource(11041U);
    msg.setSourceEntity(137U);
    msg.setDestination(15314U);
    msg.setDestinationEntity(177U);
    msg.x = 0.5751473297498789;
    msg.y = 0.39134922380682124;
    msg.z = 0.7368043650679208;
    msg.vx = 0.21928586458704669;
    msg.vy = 0.2984896145219559;
    msg.vz = 0.4714525581996931;
    msg.ax = 0.34737129497305486;
    msg.ay = 0.7643632430314763;
    msg.az = 0.411702949079339;
    msg.flags = 17772U;

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
    msg.setTimeStamp(0.2223118118262165);
    msg.setSource(12784U);
    msg.setSourceEntity(17U);
    msg.setDestination(28469U);
    msg.setDestinationEntity(91U);
    msg.x = 0.2594813457778673;
    msg.y = 0.40448801635100307;
    msg.z = 0.9591269840297264;
    msg.vx = 0.5633695282834967;
    msg.vy = 0.49348791641263334;
    msg.vz = 0.490619719376867;
    msg.ax = 0.07420073099677338;
    msg.ay = 0.30990546865829316;
    msg.az = 0.45302796728477557;
    msg.flags = 33665U;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.4617144386885953);
    msg.setSource(54836U);
    msg.setSourceEntity(94U);
    msg.setDestination(11844U);
    msg.setDestinationEntity(40U);
    msg.timeout = 4671U;
    msg.lat = 0.17940723319091945;
    msg.lon = 0.044830098571926436;
    msg.z = 0.4808683033323291;
    msg.z_units = 34U;
    msg.speed = 0.3895803185357115;
    msg.speed_units = 174U;
    msg.roll = 0.7632008343018646;
    msg.pitch = 0.00888007901119392;
    msg.yaw = 0.33873197855279624;
    msg.custom.assign("IYZMSFSAYKFCWYXBUOMURLJOIBGZKYJNSQHGOVURMXSVRDGWDENODVKDGTDMDTHSVNHYZKVZQNARKJHOCHUWAMNOHIFTCCAKFGXMJJJAWTFNB");

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
    msg.setTimeStamp(0.5667924690387549);
    msg.setSource(57627U);
    msg.setSourceEntity(81U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(28U);
    msg.timeout = 56580U;
    msg.lat = 0.22502228653013512;
    msg.lon = 0.7192937224929534;
    msg.z = 0.7460140737599275;
    msg.z_units = 95U;
    msg.speed = 0.1191406533360484;
    msg.speed_units = 193U;
    msg.roll = 0.4526690740338958;
    msg.pitch = 0.5990849040399215;
    msg.yaw = 0.24496353722575737;
    msg.custom.assign("BCIUFTFMSHKDQPSPRYJDUQDYYWGNNBLHNCPYWEIOIVXZXJXRTJWGPZXKNMLWCFRPPSYIVMRHLIGENNTSIFGHZQNWKSIIZACELMOMHGPCZZSHKWJOIYUODQXHBMCUUGTXW");

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
    msg.setTimeStamp(0.6644483296001278);
    msg.setSource(15376U);
    msg.setSourceEntity(108U);
    msg.setDestination(3250U);
    msg.setDestinationEntity(8U);
    msg.timeout = 3710U;
    msg.lat = 0.8864755511993053;
    msg.lon = 0.8671868399157454;
    msg.z = 0.8901392592251078;
    msg.z_units = 145U;
    msg.speed = 0.5162873610232952;
    msg.speed_units = 217U;
    msg.roll = 0.14418836401695045;
    msg.pitch = 0.18065780195664138;
    msg.yaw = 0.7934928690118503;
    msg.custom.assign("YSNHRQEAEKXGZZGGWFOCNFIPYOKAXQICZTNHSCFVFRSXBVDJOKRGEUPBOJNKILYJOUTVERVRTAQPDESGZAADXBUPMDYKGXQZWIOUWBSHSXLZJJZOROHAFUMMXM");

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
    msg.setTimeStamp(0.5830580528002611);
    msg.setSource(50521U);
    msg.setSourceEntity(161U);
    msg.setDestination(32U);
    msg.setDestinationEntity(229U);
    msg.timeout = 22189U;
    msg.lat = 0.3744583563974512;
    msg.lon = 0.2146365606013888;
    msg.z = 0.9915628261013258;
    msg.z_units = 31U;
    msg.speed = 0.6606016729156978;
    msg.speed_units = 201U;
    msg.duration = 20437U;
    msg.radius = 0.2046943829263933;
    msg.flags = 205U;
    msg.custom.assign("LBAEPKFETXHGTOX");

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
    msg.setTimeStamp(0.12826897756435973);
    msg.setSource(38125U);
    msg.setSourceEntity(213U);
    msg.setDestination(6763U);
    msg.setDestinationEntity(194U);
    msg.timeout = 20312U;
    msg.lat = 0.8120896750546577;
    msg.lon = 0.6421072979501516;
    msg.z = 0.07773684755340016;
    msg.z_units = 73U;
    msg.speed = 0.47457411052617704;
    msg.speed_units = 33U;
    msg.duration = 887U;
    msg.radius = 0.24583018036574822;
    msg.flags = 162U;
    msg.custom.assign("NTQHRMDWGIGLXLSCIRRHBFZXAMCYAUZKWAMTPMVLBIQGTOGKAJLEGCHJIABJUJGCRSBILPXWGPCSJOAHLXYXNAIVQQCQSYUSMENQFASRFZKFWCZLCMKCXKJYV");

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
    msg.setTimeStamp(0.2156940187184586);
    msg.setSource(26226U);
    msg.setSourceEntity(172U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(147U);
    msg.timeout = 44306U;
    msg.lat = 0.4021890766597047;
    msg.lon = 0.7509634972761536;
    msg.z = 0.4576103014870969;
    msg.z_units = 249U;
    msg.speed = 0.3070400069281959;
    msg.speed_units = 85U;
    msg.duration = 29058U;
    msg.radius = 0.28736446389750736;
    msg.flags = 9U;
    msg.custom.assign("XHMISHUAYGEPYMRYANROPUUWVQUCFDGFYLNZEKCURPJVWPHLHAWOWRLIGRZDVKJEQZPTNXNFLQCLLXVMNZQCRFBUGJAQTZSJDBQWCPNAEHAEEOKVLPSJVMBODTDHFOPGZZCGLFHJZYEOWINMRPSYSBTVWSXNFUAOXKKDSRYSUVMKCAKQMLHCRGGBVXIKXLFTBTHBARNQCGOJZTDIZJDOQVTHJMXWNTEBYGIKCASMKYDBUSEIJ");

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
    msg.setTimeStamp(0.14645981508098005);
    msg.setSource(58675U);
    msg.setSourceEntity(168U);
    msg.setDestination(37662U);
    msg.setDestinationEntity(94U);
    msg.custom.assign("NVHESOKIHASQHWLEHUYDNUGMRZDRDLEBWVRNTACMOPDAKNUBKLAYKFDICQCKIBTGNAYCMXGZAURPTQDUFFAPFKABZYBWBMPCPPTTYYPANISKXLIQUMGPWBNDZTUPUSJJXOLUHHXJWZZEZSCO");

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
    msg.setTimeStamp(0.7198241277440518);
    msg.setSource(55603U);
    msg.setSourceEntity(57U);
    msg.setDestination(31632U);
    msg.setDestinationEntity(68U);
    msg.custom.assign("WSZRKUPFAR");

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
    msg.setTimeStamp(0.1775254024656383);
    msg.setSource(59289U);
    msg.setSourceEntity(82U);
    msg.setDestination(14173U);
    msg.setDestinationEntity(9U);
    msg.custom.assign("KNPZRWRYEYLJZPBXIAZESFSLAWWMSYHXUCPKQDOPPJFIDGERHBYJDGFJCZSQJVVIJQQWNWMFGAAORAMEZCXQITJOIEZUIVA");

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
    msg.setTimeStamp(0.4915625198346967);
    msg.setSource(36105U);
    msg.setSourceEntity(226U);
    msg.setDestination(56023U);
    msg.setDestinationEntity(219U);
    msg.timeout = 9841U;
    msg.lat = 0.15372982735607388;
    msg.lon = 0.662993481404613;
    msg.z = 0.12190523324482538;
    msg.z_units = 43U;
    msg.duration = 16483U;
    msg.speed = 0.3989292535935307;
    msg.speed_units = 21U;
    msg.type = 68U;
    msg.radius = 0.038369227041982756;
    msg.length = 0.45744053408656205;
    msg.bearing = 0.9434034811590831;
    msg.direction = 175U;
    msg.custom.assign("TQAXVZNDHTJCCPSJMYDZHMZCAYAQATEHVOHYZCEBJLSGFDQGAGBNUKGRDQTSFWNHTDLUBMYJSHFSVUPHXULXEMXWUYGPOASZYRUGFFLTZGLOVQKGBWCLQVL");

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
    msg.setTimeStamp(0.8041159922899482);
    msg.setSource(59612U);
    msg.setSourceEntity(190U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(168U);
    msg.timeout = 57097U;
    msg.lat = 0.47229357073654543;
    msg.lon = 0.10372907378799212;
    msg.z = 0.735038977943605;
    msg.z_units = 75U;
    msg.duration = 23484U;
    msg.speed = 0.9470701344336684;
    msg.speed_units = 228U;
    msg.type = 137U;
    msg.radius = 0.9561050569087068;
    msg.length = 0.7640161949463959;
    msg.bearing = 0.09227501847441322;
    msg.direction = 21U;
    msg.custom.assign("BHJIKTKONYIOPDITTSNXHTMJIWVUXHNHVECUUZLOQEAJFBZUVWQCOEVERPKRFLZPZSTZZLGYVDFHNJYMTBBOMTLNVSSPWBYDWWUQGICQAPOBXAUXNYFUGWQPSUMCQMXVKKEEARMQPICZLJJLK");

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
    msg.setTimeStamp(0.014858569553847234);
    msg.setSource(45959U);
    msg.setSourceEntity(79U);
    msg.setDestination(25481U);
    msg.setDestinationEntity(232U);
    msg.timeout = 56680U;
    msg.lat = 0.5885097762029979;
    msg.lon = 0.6828414854642867;
    msg.z = 0.9609860021678839;
    msg.z_units = 184U;
    msg.duration = 58723U;
    msg.speed = 0.05153946548736299;
    msg.speed_units = 56U;
    msg.type = 251U;
    msg.radius = 0.23917053741369876;
    msg.length = 0.8320295430629169;
    msg.bearing = 0.42822265541386695;
    msg.direction = 110U;
    msg.custom.assign("JTFAREIJRFCAWKGVRLRUMXMVWZKRNLKTOZENRAKIQHLBUEISBDOOOBLMUHLBTEXQFTICVDMLHCJAWYSEBHBGPRJQZNWEWEZMIUBGYRDRHHPBOWCMXXVQNYFXULOJXYONMHUMPZSPCYFSAGTXJNTJ");

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
    msg.setTimeStamp(0.37602863078161597);
    msg.setSource(57077U);
    msg.setSourceEntity(106U);
    msg.setDestination(21669U);
    msg.setDestinationEntity(227U);
    msg.duration = 52863U;
    msg.custom.assign("VMNBYEAMCJXSWOGYIS");

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
    msg.setTimeStamp(0.6825932780136575);
    msg.setSource(4323U);
    msg.setSourceEntity(54U);
    msg.setDestination(20752U);
    msg.setDestinationEntity(146U);
    msg.duration = 38084U;
    msg.custom.assign("SPMZIJPRBAEEMFGRFILCSWANTUMKUHVHYUJGPOSZUODOULWLWLBQFTJDPCIREQGZZZHMGEKANIXROHWCXSNWYAFQDJDBBXCVTXFRGNXEBYDDVXFEABRGHSDKJWTYTLPYESZKEOOPGZWLDH");

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
    msg.setTimeStamp(0.011510772789613544);
    msg.setSource(52983U);
    msg.setSourceEntity(213U);
    msg.setDestination(23850U);
    msg.setDestinationEntity(103U);
    msg.duration = 43882U;
    msg.custom.assign("HHUCWSSWZDWAMSXEFQRBNUQYETYZFFGXGHCMYAMJBXFPULPZUTXEVQQHRWFPUOXHNNNRNLTIWTKZSWBWOYCKEGJDCCSCIQEIPPAPUKMTELKGVIJKJDJBREIIFMSXBMVBOBMILYJVMVRKHRSPGVRHZQUYKMYBXXVDZAOBRVL");

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
    msg.setTimeStamp(0.5299003236575306);
    msg.setSource(6553U);
    msg.setSourceEntity(152U);
    msg.setDestination(62901U);
    msg.setDestinationEntity(94U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.9994381121277789;
    msg.control.set(tmp_msg_0);
    msg.duration = 64773U;
    msg.custom.assign("ASMLWNNDRGYIBAZYAGEYWIRCHAYKTNGHAWOXBXVYZVGMRYOJTEQTVUXCSFALQNKQPWLGHJTVDPSNSDFNBFVMUYMAPIODPQNLAIHCSDRGKQFEHUUNDXWMXPFIISCBPTTKXWNUBGPUYQOWZTDXLRIQBJLZCZFESGOHRUPXLTSSIUUTCEZJHJYQHVRKPEBVDJJKTZDJMREJOWMQAWLWVNRZMXKOOOBEFUCLY");

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
    msg.setTimeStamp(0.9276710480555713);
    msg.setSource(32441U);
    msg.setSourceEntity(240U);
    msg.setDestination(15695U);
    msg.setDestinationEntity(130U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7367647193945469;
    msg.control.set(tmp_msg_0);
    msg.duration = 9080U;
    msg.custom.assign("JTXIYMKLDDLGTGWWYMNKZEMJKRLGEHCPRUCWDMYERXQMGKGPZIVKBLKZPHDXRRTGZQLXLIKOIOVVJTTICOJAQSIDKNWLPSACHCBZCZTTHGSFZNVMWUIMHYEQVPYBVWRJTPPTUQYBSRNFHGFVVPNYMBSOXXFNX");

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
    msg.setTimeStamp(0.18683748718865612);
    msg.setSource(23679U);
    msg.setSourceEntity(78U);
    msg.setDestination(4891U);
    msg.setDestinationEntity(39U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6535648836014346;
    tmp_msg_0.speed_units = 240U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62236U;
    msg.custom.assign("BZPYKBOUNRVQABXHUPATCKVCSRMZJHNWNMAMKFLGUPSGLSAHTZGXBTSDHSUGPRFKEOIOAYDCMSTOLNDJUDGQAZFQVHMFJRPLIKDHOQYTEJPFKENAXZRRUFXMANITKOHLYBEVCUCQFGCAVPMBRKIDIRWVWBLSFBJRHMTUSAOLVDUYTEMDWHCIPIKTQJGXPYYCBZEULXQXNWNZVZRBEMLGQVDPGJXDWFTOIOZWV");

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
    msg.setTimeStamp(0.4026407924382671);
    msg.setSource(36601U);
    msg.setSourceEntity(253U);
    msg.setDestination(57677U);
    msg.setDestinationEntity(41U);
    msg.timeout = 50037U;
    msg.lat = 0.17088460649536308;
    msg.lon = 0.028344648057026856;
    msg.z = 0.6005366092331835;
    msg.z_units = 161U;
    msg.speed = 0.4346426570952925;
    msg.speed_units = 38U;
    msg.bearing = 0.6558982609294032;
    msg.cross_angle = 0.09099758806262792;
    msg.width = 0.21276984424056422;
    msg.length = 0.4880785188932081;
    msg.hstep = 0.1349492290132549;
    msg.coff = 163U;
    msg.alternation = 65U;
    msg.flags = 167U;
    msg.custom.assign("DZGGYLCYHMYZQCYFGTQOYIFFKHVEJMSLFLVPKGUTXIK");

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
    msg.setTimeStamp(0.22845637553301612);
    msg.setSource(3489U);
    msg.setSourceEntity(146U);
    msg.setDestination(38375U);
    msg.setDestinationEntity(195U);
    msg.timeout = 8940U;
    msg.lat = 0.16630371962539425;
    msg.lon = 0.7652260576297769;
    msg.z = 0.2092890992781955;
    msg.z_units = 30U;
    msg.speed = 0.248738192415645;
    msg.speed_units = 246U;
    msg.bearing = 0.7213314754592182;
    msg.cross_angle = 0.9470166615446359;
    msg.width = 0.5508144190276161;
    msg.length = 0.5196450543709431;
    msg.hstep = 0.5815936833942426;
    msg.coff = 26U;
    msg.alternation = 194U;
    msg.flags = 89U;
    msg.custom.assign("GRXVCTYMXIGOWHSPYAEZFACPNMMJUXFZZWJBVMIMRAKNHGERONOWVIYQPOOJRISWQXTOWLTPDPKHWKOGYAIIUAOYFWHTXGXPUBRSBZLGBYRSTSJYFQNDFZLTDKAPXPHLURSJVFJEUQBJXLRZAVTDDNHGJCEDVPIIZRXPSJD");

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
    msg.setTimeStamp(0.07119974229666592);
    msg.setSource(45034U);
    msg.setSourceEntity(133U);
    msg.setDestination(21165U);
    msg.setDestinationEntity(107U);
    msg.timeout = 3974U;
    msg.lat = 0.00162818546921506;
    msg.lon = 0.2819942423349361;
    msg.z = 0.8342226218211695;
    msg.z_units = 89U;
    msg.speed = 0.11147144265883357;
    msg.speed_units = 146U;
    msg.bearing = 0.5450510020397744;
    msg.cross_angle = 0.42757048911319706;
    msg.width = 0.38336244439921774;
    msg.length = 0.6480695249287908;
    msg.hstep = 0.7631634559579507;
    msg.coff = 108U;
    msg.alternation = 79U;
    msg.flags = 227U;
    msg.custom.assign("VHFSPHJPATBUSDTLWHKATXUEBZRXJGOCVAUITLNQDEJFZRBGDFEMFLQCSSJTGWFRYMPGJXUBANARPHVOLLCUHAVFONCDRCKMNDRPTJFZRPUXLIMEKFUFXUXMBSPNZTSDNFLNKCYZZETVLZV");

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
    msg.setTimeStamp(0.8530902841973491);
    msg.setSource(4283U);
    msg.setSourceEntity(173U);
    msg.setDestination(14926U);
    msg.setDestinationEntity(76U);
    msg.timeout = 30925U;
    msg.lat = 0.0023713404331511256;
    msg.lon = 0.8478478749273972;
    msg.z = 0.29603203816284174;
    msg.z_units = 232U;
    msg.speed = 0.7679983191591512;
    msg.speed_units = 246U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.19538328698893204;
    tmp_msg_0.y = 0.48827455656209273;
    tmp_msg_0.z = 0.2667164813089158;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DPBTNJZXLIJEXTHVJEMJLXOXTJMUMVHSPNCRELPHY");

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
    msg.setTimeStamp(0.926422516169441);
    msg.setSource(9542U);
    msg.setSourceEntity(187U);
    msg.setDestination(41359U);
    msg.setDestinationEntity(29U);
    msg.timeout = 406U;
    msg.lat = 0.5158811094036284;
    msg.lon = 0.5497645739655234;
    msg.z = 0.9737849810815937;
    msg.z_units = 161U;
    msg.speed = 0.8673593929395068;
    msg.speed_units = 1U;
    msg.custom.assign("LISDGRFOHCBIQTXXCRDGPNBJOKUPEVECCQAFJZDQKEZWQWZUHLUTTINRKBOMSBJMZBFP");

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
    msg.setTimeStamp(0.8726706435698599);
    msg.setSource(50932U);
    msg.setSourceEntity(212U);
    msg.setDestination(58268U);
    msg.setDestinationEntity(195U);
    msg.timeout = 21883U;
    msg.lat = 0.41810754932750616;
    msg.lon = 0.086940349000722;
    msg.z = 0.5878563827131279;
    msg.z_units = 127U;
    msg.speed = 0.4963404225410284;
    msg.speed_units = 99U;
    msg.custom.assign("ZABSALLBIGFWPH");

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
    msg.setTimeStamp(0.5579389099878734);
    msg.setSource(21565U);
    msg.setSourceEntity(226U);
    msg.setDestination(14060U);
    msg.setDestinationEntity(227U);
    msg.x = 0.46459716228453396;
    msg.y = 0.5155110744708024;
    msg.z = 0.42265035213283164;

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
    msg.setTimeStamp(0.5848319696976526);
    msg.setSource(33740U);
    msg.setSourceEntity(225U);
    msg.setDestination(46133U);
    msg.setDestinationEntity(156U);
    msg.x = 0.5932292960297858;
    msg.y = 0.8750534143938107;
    msg.z = 0.8469196897740324;

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
    msg.setTimeStamp(0.9765601636896055);
    msg.setSource(52133U);
    msg.setSourceEntity(242U);
    msg.setDestination(28665U);
    msg.setDestinationEntity(162U);
    msg.x = 0.75778017944498;
    msg.y = 0.30573732844758905;
    msg.z = 0.045198335339844964;

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
    msg.setTimeStamp(0.7702484744697708);
    msg.setSource(34832U);
    msg.setSourceEntity(189U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(146U);
    msg.timeout = 15555U;
    msg.lat = 0.12751795812551314;
    msg.lon = 0.3474713943593918;
    msg.z = 0.018817559386749783;
    msg.z_units = 224U;
    msg.amplitude = 0.35485389209804497;
    msg.pitch = 0.02844979276738846;
    msg.speed = 0.4961938539437559;
    msg.speed_units = 45U;
    msg.custom.assign("SSPTCGBLNJFKRBWRKCIGNXHXAVIQRRTGWMKAUWJFSSSDGPHKMRBPPZOZGIUQB");

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
    msg.setTimeStamp(0.9436967217337958);
    msg.setSource(65321U);
    msg.setSourceEntity(100U);
    msg.setDestination(34233U);
    msg.setDestinationEntity(176U);
    msg.timeout = 40711U;
    msg.lat = 0.11761915572947201;
    msg.lon = 0.24165148745865417;
    msg.z = 0.8912589947099562;
    msg.z_units = 121U;
    msg.amplitude = 0.8023284949381093;
    msg.pitch = 0.6681420187279316;
    msg.speed = 0.5576855571546814;
    msg.speed_units = 18U;
    msg.custom.assign("UPOMBZOOOWCFULWQAGLGIWPSTCWOXZDMCHNUSYBAKJYZRIXDXXYXVIGBZNIUNEQDRWZUKYCHQPQOLPLDSVOHTUTQKTUAREEMETYHKNALSVIVEHWHAOGMPWQ");

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
    msg.setTimeStamp(0.695075636696734);
    msg.setSource(2472U);
    msg.setSourceEntity(64U);
    msg.setDestination(19128U);
    msg.setDestinationEntity(197U);
    msg.timeout = 2984U;
    msg.lat = 0.8294466815284867;
    msg.lon = 0.8875754618066963;
    msg.z = 0.5883305331850149;
    msg.z_units = 178U;
    msg.amplitude = 0.7346063440297246;
    msg.pitch = 0.9997108643286118;
    msg.speed = 0.8346072848540679;
    msg.speed_units = 158U;
    msg.custom.assign("USKMLVUCVPDAXMIECRIOGTBTFHLBBGOC");

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
    msg.setTimeStamp(0.6338854972347414);
    msg.setSource(2064U);
    msg.setSourceEntity(248U);
    msg.setDestination(57925U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.7367182624470844);
    msg.setSource(3765U);
    msg.setSourceEntity(206U);
    msg.setDestination(4189U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.6176063291159434);
    msg.setSource(20594U);
    msg.setSourceEntity(39U);
    msg.setDestination(10353U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.8658327797196311);
    msg.setSource(56630U);
    msg.setSourceEntity(231U);
    msg.setDestination(49207U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.6432214300524667;
    msg.lon = 0.2352634086540928;
    msg.z = 0.5615742054992369;
    msg.z_units = 252U;
    msg.radius = 0.02352459738831081;
    msg.duration = 5520U;
    msg.speed = 0.7475751853393605;
    msg.speed_units = 249U;
    msg.custom.assign("YABBRTQJRHJALYBGCPDFHJQIPJJDFNPWCKHSIHDPEXMGMSLHKKHXEVMKSIGZTGVEZPSFDNYZCUBKTDWZNQCHUTZDQCNWLPYJTZOJJCNGRYTSDHEFAUNIGVDWTZNTQQCOXXOJNMZXBYXLMOMIVYGIVUAUIRRDPKYLBSNQVKHAMGLKVGSKEFGVXIZBHSZQOPOURWCIXLSYDRKQWCVTIPFFAVMTEUCWEUWLOSWFBNUBAOXLRRFXYEMBOAFRJULQW");

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
    msg.setTimeStamp(0.16565043996327522);
    msg.setSource(11481U);
    msg.setSourceEntity(195U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.49879111360366324;
    msg.lon = 0.9679258865621778;
    msg.z = 0.5789935421139499;
    msg.z_units = 138U;
    msg.radius = 0.7762909307525373;
    msg.duration = 52611U;
    msg.speed = 0.8131051664527016;
    msg.speed_units = 185U;
    msg.custom.assign("EDADPFQCSMNFAGTUMFKJBNLKXRJHPDVRURXWCEWCJYLMGXQBBCFXRRVGJMWNHEZDYRUIJVPTEUASEOTYEYJWYZBSXHIZOMZKKMHIADSWPIIYKTRIGYTVXJDLSZKDCPJBKMBLGUWOBLNWQBXPUEMKRASOOFTGXVRZHMQADUCJETLQIBPVPNUVQSIGETSANPHQWMBPQVHNHIOXCLJIQKLNOOCT");

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
    msg.setTimeStamp(0.5197962893722912);
    msg.setSource(61819U);
    msg.setSourceEntity(5U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.962676278705457;
    msg.lon = 0.8922211749593805;
    msg.z = 0.2932855385768509;
    msg.z_units = 252U;
    msg.radius = 0.482056090409529;
    msg.duration = 12255U;
    msg.speed = 0.812863364159445;
    msg.speed_units = 128U;
    msg.custom.assign("ZPPLSBZIZPHUCVDDWFWEQFSW");

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
    msg.setTimeStamp(0.6935203134999041);
    msg.setSource(10702U);
    msg.setSourceEntity(107U);
    msg.setDestination(35357U);
    msg.setDestinationEntity(125U);
    msg.timeout = 33064U;
    msg.flags = 85U;
    msg.lat = 0.9108320158263693;
    msg.lon = 0.07785571368520328;
    msg.start_z = 0.04188813274025949;
    msg.start_z_units = 106U;
    msg.end_z = 0.5969526915662798;
    msg.end_z_units = 118U;
    msg.radius = 0.3821516304244821;
    msg.speed = 0.5302498950399805;
    msg.speed_units = 201U;
    msg.custom.assign("EWIXUJNJYEPLMCHUJYMZBDBSEMRGCDTKNAIUIEITYPZFVOVDYRBVHCPQVSJVZJZIUNBRSXAQJNGAFRPARAZEXSNAKMULILEPEITDIKSBVTBTYGDUUGSFHGOJHKMRBZWOZFLJ");

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
    msg.setTimeStamp(0.07635919110609157);
    msg.setSource(41375U);
    msg.setSourceEntity(135U);
    msg.setDestination(14648U);
    msg.setDestinationEntity(4U);
    msg.timeout = 4008U;
    msg.flags = 122U;
    msg.lat = 0.860045452147348;
    msg.lon = 0.2497684571232872;
    msg.start_z = 0.7176062719816871;
    msg.start_z_units = 107U;
    msg.end_z = 0.18285855193094236;
    msg.end_z_units = 111U;
    msg.radius = 0.17435877013731726;
    msg.speed = 0.6854589032491285;
    msg.speed_units = 4U;
    msg.custom.assign("RDGTPUUDMSFKGXVDAUPZSXGIEKLXVFFGPHWVTCPIVDSZQZAJKNGYROCHYOVLOKCAGIXYBDWJPOJMTBDMIOMLYMESBZKHKYNFWTQUJJGZVBWCLPAQXHVJEXIGCUVZYEHQSKVGMTPYWJIALUUAKLIBCHQHCKOOTWCCWHQZRNXTIMHXDRBWRLXQLONTDLHFPWFFEAJFOUVYSROQBDTBYWETNNRRNFEZJNNIEQXBFA");

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
    msg.setTimeStamp(0.4025271541899319);
    msg.setSource(61315U);
    msg.setSourceEntity(226U);
    msg.setDestination(59781U);
    msg.setDestinationEntity(211U);
    msg.timeout = 14461U;
    msg.flags = 168U;
    msg.lat = 0.8823768868513008;
    msg.lon = 0.4054974643815312;
    msg.start_z = 0.7322315091269038;
    msg.start_z_units = 157U;
    msg.end_z = 0.6766962814087581;
    msg.end_z_units = 26U;
    msg.radius = 0.8034330714669992;
    msg.speed = 0.7240573213010276;
    msg.speed_units = 24U;
    msg.custom.assign("VWZBJNKLCNIYXTSJSXJHULPYWKIJUTTGKXOLDKAWRNLGCYVCYSPDEODMX");

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
    msg.setTimeStamp(0.745200325905712);
    msg.setSource(17000U);
    msg.setSourceEntity(67U);
    msg.setDestination(17747U);
    msg.setDestinationEntity(133U);
    msg.timeout = 18681U;
    msg.lat = 0.10697989442021105;
    msg.lon = 0.6791781967016953;
    msg.z = 0.009200188120929154;
    msg.z_units = 180U;
    msg.speed = 0.5088783767578194;
    msg.speed_units = 12U;
    msg.custom.assign("UGICWZOKHRGHNSQDPXMXOJLGMSYZZIWAYRLUAPCDJUNQZQFPNUMMFBESBQWJZETBSDBXAFSRTFPIAWHQSQJXEKCOSHXAIXQYKAPSELCXPTYOTSGUKYAZYGNHMHTIBZSVLMKWZTFRDDXLHUBEYOYGRVICCMVBXBDGNUXKOGMTRHKJFFZJOCREZCLCNWFMWKLBIPUNMPOVJNVVVVIGVNUNPDEJCTVYWIRYTWOQ");

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
    msg.setTimeStamp(0.05460798829414304);
    msg.setSource(45118U);
    msg.setSourceEntity(232U);
    msg.setDestination(59982U);
    msg.setDestinationEntity(186U);
    msg.timeout = 6876U;
    msg.lat = 0.5619264547692291;
    msg.lon = 0.6567864702932925;
    msg.z = 0.9763102191807123;
    msg.z_units = 65U;
    msg.speed = 0.9926006551256475;
    msg.speed_units = 98U;
    msg.custom.assign("HCXRJQQKYUZXPJXCQFTJEABYKEUNZROXHADOZOUIHIZDIGCLNQKISMKOTMAVJYNOIFSVTCUZBHCFDQHFATRWSUSKMFUGIHVLAEJHYWMFLPUHDFFQPPYEKZVDCNYTOXVKZGAMHOHIUNBIWQXQGOPKJPCJXTZXUASRTSGQZYNSNLKETFGIFNVRSLTJLDLRYRWLDGXWPTDXRJCWMBESWVDEVCAVKGBPEBDOYUABLVWRMMNEGENIYRWAJPQB");

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
    msg.setTimeStamp(0.5741855767146231);
    msg.setSource(60465U);
    msg.setSourceEntity(97U);
    msg.setDestination(22131U);
    msg.setDestinationEntity(162U);
    msg.timeout = 21190U;
    msg.lat = 0.8793166190086917;
    msg.lon = 0.14890825403706764;
    msg.z = 0.4080074289620804;
    msg.z_units = 131U;
    msg.speed = 0.8071429965993908;
    msg.speed_units = 57U;
    msg.custom.assign("EMNQWHLHHKQIFWQKBWFMSFXBKANSMTHVNQOVWXGTIHUNBCVAJGGQVXKSGPWJBWUEHYLITKOFPGXQDGCGFCDVNANAMZCRQZBPMRYILXTOKYSC");

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
    msg.setTimeStamp(0.07767888493950392);
    msg.setSource(50855U);
    msg.setSourceEntity(237U);
    msg.setDestination(11121U);
    msg.setDestinationEntity(223U);
    msg.x = 0.49295637469794007;
    msg.y = 0.577810885560986;
    msg.z = 0.25129491995052455;
    msg.t = 0.7246786651066617;

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
    msg.setTimeStamp(0.22730073006433205);
    msg.setSource(2359U);
    msg.setSourceEntity(46U);
    msg.setDestination(65107U);
    msg.setDestinationEntity(39U);
    msg.x = 0.35314081050109936;
    msg.y = 0.27863999992107413;
    msg.z = 0.4774204646942777;
    msg.t = 0.675703501554327;

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
    msg.setTimeStamp(0.43655417386719286);
    msg.setSource(3876U);
    msg.setSourceEntity(97U);
    msg.setDestination(4979U);
    msg.setDestinationEntity(208U);
    msg.x = 0.31498810760507157;
    msg.y = 0.1234151210479898;
    msg.z = 0.8802477784155417;
    msg.t = 0.9546105505899369;

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
    msg.setTimeStamp(0.7955233525717673);
    msg.setSource(28319U);
    msg.setSourceEntity(66U);
    msg.setDestination(59404U);
    msg.setDestinationEntity(246U);
    msg.timeout = 47159U;
    msg.name.assign("NUJVVSXHNMSGOJMRZWQODFWRPMTRQPFWENXSKGPIXUZJNXHEYKWEKRAEYDFQPOWZSCLAXYOYRECDVDMPVQOHTAELULVQTQXGASVBOOMCHFYULCUXILWFMUOTMCTRGQJHBNTYPBJZPOYFVUESMVXXUNKSIOGAIBFAFGMCQDTBCKWPJLZUIN");
    msg.custom.assign("UWVXEIMNMVBSRKXSBKRMOHGFPGMOSNUABKRTGLIVBQJGWCZMJJQNDCJZXNXYNOWPAUCTDDFFMHCZIKOAEEOUMTWGDLTRKKAHOFMRFTIESMKPITNAFNYEFXARBPSSLUJLVAVPVVDWYSKPGFDZEKJJXMLQSRECZPJYAGZTCQ");

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
    msg.setTimeStamp(0.9939203278700615);
    msg.setSource(11571U);
    msg.setSourceEntity(180U);
    msg.setDestination(64744U);
    msg.setDestinationEntity(82U);
    msg.timeout = 51495U;
    msg.name.assign("MBQXHTUWIZDSVXKNGTULCPYOCLFYOEHLIZRDOMGJTQBJAXYHHBMVRQQDJMGTKBRVWAEPRTZOYGMTYFXPNSBPZLQYLODSQWWJIJAOZUUBFTZMDPLTWDAIYMEJNLETCEXOYOCCMPNKKVQBCUZNHOCBUYCDASETJCKPSRANHEKKRENFFWGGDQGJWLVFDGAXXRVRJXIRSVABSVEUFVXSNUFPIN");
    msg.custom.assign("APEHLEVGDUZFWRLXLBKZYNJOFUXSHGYEXJDYHGHZLFJTFPOKBUTTMCNWJZDUULZFB");

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
    msg.setTimeStamp(0.9019130920128783);
    msg.setSource(55170U);
    msg.setSourceEntity(53U);
    msg.setDestination(24195U);
    msg.setDestinationEntity(3U);
    msg.timeout = 19020U;
    msg.name.assign("NKTOUVEPMBCOHDYEZIPRPKTRNOSYWLNBIMUDHYWT");
    msg.custom.assign("ULORKRZPGBBMHEACIPGEASZPTQLKNWFPJLYURLCOQASOXSDWZTHPIYUYQCAIVA");

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
    msg.setTimeStamp(0.38406709690046037);
    msg.setSource(55819U);
    msg.setSourceEntity(214U);
    msg.setDestination(57891U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.1694141313198435;
    msg.lon = 0.013451478960365915;
    msg.z = 0.7319370692616805;
    msg.z_units = 193U;
    msg.speed = 0.4646751921807344;
    msg.speed_units = 171U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8036095976003284;
    tmp_msg_0.y = 0.6455433378701069;
    tmp_msg_0.z = 0.6144457386285018;
    tmp_msg_0.t = 0.08769900940805664;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 34967U;
    tmp_msg_1.off_x = 0.5366077346035216;
    tmp_msg_1.off_y = 0.3189950433078146;
    tmp_msg_1.off_z = 0.19985149663172275;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.2408146482147212;
    msg.custom.assign("MPLNSWBQDEMJZHYSIFDPGR");

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
    msg.setTimeStamp(0.24819398175498508);
    msg.setSource(19941U);
    msg.setSourceEntity(175U);
    msg.setDestination(26242U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.5633669774709316;
    msg.lon = 0.7173874345460836;
    msg.z = 0.08719207466121126;
    msg.z_units = 27U;
    msg.speed = 0.5030723424694704;
    msg.speed_units = 115U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.10254490702525021;
    tmp_msg_0.y = 0.6230699205637598;
    tmp_msg_0.z = 0.6925871520372335;
    tmp_msg_0.t = 0.954321214293734;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9608744007217058;
    msg.custom.assign("BEWYKHFYUMDSLBXUVWYRZPJMDYRQNTFRQPNXPKSFJHWSDXZBLUGGSR");

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
    msg.setTimeStamp(0.23423849978095423);
    msg.setSource(1544U);
    msg.setSourceEntity(150U);
    msg.setDestination(52650U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.30818010115544214;
    msg.lon = 0.2548534998649016;
    msg.z = 0.2861637286936707;
    msg.z_units = 36U;
    msg.speed = 0.7728178923357876;
    msg.speed_units = 199U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44642U;
    tmp_msg_0.off_x = 0.2586812919044752;
    tmp_msg_0.off_y = 0.37393278771585237;
    tmp_msg_0.off_z = 0.9980550973431416;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.172127845664094;
    msg.custom.assign("XVXWCBEMVOJNHZDMYCBIEMTYLTMOJGMRQUDXZSROLXHNPYRADSESDFSYLUYBOUGLPCJORALJPCGYIECKDTSCQPSHVRGCMFYABQE");

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
    msg.setTimeStamp(0.09759696521882666);
    msg.setSource(37712U);
    msg.setSourceEntity(207U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(1U);
    msg.vid = 33997U;
    msg.off_x = 0.6632873052153764;
    msg.off_y = 0.016616845260189694;
    msg.off_z = 0.11474329098312497;

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
    msg.setTimeStamp(0.5369408419682496);
    msg.setSource(52389U);
    msg.setSourceEntity(42U);
    msg.setDestination(14160U);
    msg.setDestinationEntity(177U);
    msg.vid = 27678U;
    msg.off_x = 0.8395427978962741;
    msg.off_y = 0.7135240464556942;
    msg.off_z = 0.5745133394912543;

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
    msg.setTimeStamp(0.7223795846657998);
    msg.setSource(3675U);
    msg.setSourceEntity(205U);
    msg.setDestination(647U);
    msg.setDestinationEntity(206U);
    msg.vid = 56011U;
    msg.off_x = 0.941986856294566;
    msg.off_y = 0.351161862654499;
    msg.off_z = 0.31005333239950184;

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
    msg.setTimeStamp(0.1782672703933893);
    msg.setSource(5621U);
    msg.setSourceEntity(136U);
    msg.setDestination(29076U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.7626336847202848);
    msg.setSource(2417U);
    msg.setSourceEntity(70U);
    msg.setDestination(12298U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.19984025568571273);
    msg.setSource(8424U);
    msg.setSourceEntity(110U);
    msg.setDestination(46810U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.3413567440021237);
    msg.setSource(7344U);
    msg.setSourceEntity(237U);
    msg.setDestination(29119U);
    msg.setDestinationEntity(224U);
    msg.mid = 37413U;

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
    msg.setTimeStamp(0.18296566470695674);
    msg.setSource(63854U);
    msg.setSourceEntity(155U);
    msg.setDestination(43852U);
    msg.setDestinationEntity(84U);
    msg.mid = 32712U;

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
    msg.setTimeStamp(0.9476254643684464);
    msg.setSource(43547U);
    msg.setSourceEntity(144U);
    msg.setDestination(41847U);
    msg.setDestinationEntity(8U);
    msg.mid = 20205U;

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
    msg.setTimeStamp(0.24544253338209454);
    msg.setSource(3402U);
    msg.setSourceEntity(22U);
    msg.setDestination(6377U);
    msg.setDestinationEntity(68U);
    msg.state = 161U;
    msg.eta = 43829U;
    msg.info.assign("FJCDKSMNVGDWUREWBVXXJHYPSOXLXTBDJXCRJMGAKBLPBMRCBUKLEDHLVETOQTCFXUJANWCPUVXBBIDRMFYRIVOAZOOISZILFKDEEGXFVHYKJNNWYZNHQJCYXLVPLQHPXTPISUENZDVQAGSESKSJNMRGIGVAMFYYRQNTRZWOKQUHZTOP");

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
    msg.setTimeStamp(0.2333110907587228);
    msg.setSource(60799U);
    msg.setSourceEntity(54U);
    msg.setDestination(19009U);
    msg.setDestinationEntity(156U);
    msg.state = 208U;
    msg.eta = 61947U;
    msg.info.assign("ZGIBJWJCWZMBRGEZJTPFFFIVWMCROAQDWNBAXZGJPOKBSVFGAWRCJRUOTLTLZKPPNSIAPVPPWWDYINQVXGWYEIOYSGTQPMSTSHFCIOBNXAZKDOAMNTUNAHWHLUXUHWYLVEZHBJOEFDXMUKNEFTRGKNVRRQMKLSYMXLMCDFXUUEQGNKCKVUVMSRZGEAYNYJDXHQOTLXCDKLHPBOGKEYYI");

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
    msg.setTimeStamp(0.683011096528211);
    msg.setSource(37494U);
    msg.setSourceEntity(217U);
    msg.setDestination(2180U);
    msg.setDestinationEntity(188U);
    msg.state = 142U;
    msg.eta = 19352U;
    msg.info.assign("YIRHUZKPLMQZLVSFOLVQKSFYKZGFDJPMCOMUZVFWZLBENBQWHDOOJGUTHVXIUWERSZNGFNXSCFHTWENBGWXLBJISQXVOBZEMUUDOFECY");

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
    msg.setTimeStamp(0.11559019589738095);
    msg.setSource(43952U);
    msg.setSourceEntity(217U);
    msg.setDestination(6515U);
    msg.setDestinationEntity(98U);
    msg.system = 64318U;
    msg.duration = 53545U;
    msg.speed = 0.8150101412458619;
    msg.speed_units = 50U;
    msg.x = 0.6364361561086826;
    msg.y = 0.4487727854802118;
    msg.z = 0.185189492765937;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.5664613295754849);
    msg.setSource(16044U);
    msg.setSourceEntity(126U);
    msg.setDestination(1754U);
    msg.setDestinationEntity(48U);
    msg.system = 64886U;
    msg.duration = 51325U;
    msg.speed = 0.20750409971158135;
    msg.speed_units = 201U;
    msg.x = 0.9323373270929173;
    msg.y = 0.24967832873077223;
    msg.z = 0.7500603959248404;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.8748291670756082);
    msg.setSource(37930U);
    msg.setSourceEntity(222U);
    msg.setDestination(49984U);
    msg.setDestinationEntity(4U);
    msg.system = 32552U;
    msg.duration = 42894U;
    msg.speed = 0.7311391921937775;
    msg.speed_units = 9U;
    msg.x = 0.14304321232393458;
    msg.y = 0.2890368572147808;
    msg.z = 0.7254104027491617;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.7516602872225172);
    msg.setSource(49591U);
    msg.setSourceEntity(26U);
    msg.setDestination(7917U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.8578712821753832;
    msg.lon = 0.8118112791074116;
    msg.speed = 0.03811121495226255;
    msg.speed_units = 155U;
    msg.duration = 21698U;
    msg.sys_a = 24539U;
    msg.sys_b = 49381U;
    msg.move_threshold = 0.4350032912668569;

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
    msg.setTimeStamp(0.07177840952870107);
    msg.setSource(14893U);
    msg.setSourceEntity(165U);
    msg.setDestination(59079U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.6464392879120302;
    msg.lon = 0.08538412677438512;
    msg.speed = 0.5698241198031255;
    msg.speed_units = 61U;
    msg.duration = 35220U;
    msg.sys_a = 50218U;
    msg.sys_b = 16928U;
    msg.move_threshold = 0.07914337153427642;

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
    msg.setTimeStamp(0.01530827521241196);
    msg.setSource(50347U);
    msg.setSourceEntity(60U);
    msg.setDestination(3743U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.08731827616804111;
    msg.lon = 0.782183836143494;
    msg.speed = 0.6606173325681641;
    msg.speed_units = 126U;
    msg.duration = 4450U;
    msg.sys_a = 504U;
    msg.sys_b = 16050U;
    msg.move_threshold = 0.7568287983559868;

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
    msg.setTimeStamp(0.2119356592670757);
    msg.setSource(34117U);
    msg.setSourceEntity(141U);
    msg.setDestination(35969U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.19855938734526957;
    msg.lon = 0.9742020558788207;
    msg.z = 0.9439979301674856;
    msg.z_units = 142U;
    msg.speed = 0.869229194560315;
    msg.speed_units = 231U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38761753768372;
    tmp_msg_0.lon = 0.3621090822692622;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FXRFCWDHJDKXCABLAKSJWQOWVQELIHLBMRTDYIJDBTHSVVKTVPJKDUXNUVEXPZXSVYTXQZVKOGZXJGZTTFMCTXBKOUQTSSFDAPENHNITZULWVMRWBEINUMPUOBESZYJBQCKQNHLVYCYHNAQQYCBPMJOAMPRRTDRPESIWARZRIFLRKLYPCWUAIWQNGPWAMSJDFIKMPE");

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
    msg.setTimeStamp(0.7640891485016641);
    msg.setSource(17766U);
    msg.setSourceEntity(247U);
    msg.setDestination(46740U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.14427690813515193;
    msg.lon = 0.9472891615407159;
    msg.z = 0.4350933111139169;
    msg.z_units = 56U;
    msg.speed = 0.1741733173539105;
    msg.speed_units = 154U;
    msg.custom.assign("MDJHZGUMEXEGDCOVLQPJYMBHYEVCAIQFJHLOXAMSOEYKQFYYOLVLDTDVBFHIK");

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
    msg.setTimeStamp(0.062011534518859546);
    msg.setSource(46536U);
    msg.setSourceEntity(50U);
    msg.setDestination(3538U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.6746306372296054;
    msg.lon = 0.23812405095479783;
    msg.z = 0.26887190995017685;
    msg.z_units = 199U;
    msg.speed = 0.6613794164581376;
    msg.speed_units = 35U;
    msg.custom.assign("TRAQHFNXYVUGFREMITFVCZBPSNAMKDAUSRWCRUIGVOUUFKEFMLRWCHXKZAWNDJWJYMGXZPDGIAESDMBLZSBXHOXBHRVTAKWHNLBOTBGKOVBLQPAJYJUKKGTXTCBJHSOPXZDYZZPZJVKNEYSDINR");

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
    msg.setTimeStamp(0.16055438722585957);
    msg.setSource(54698U);
    msg.setSourceEntity(94U);
    msg.setDestination(54934U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.6652408702074101;
    msg.lon = 0.3996030778284668;

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
    msg.setTimeStamp(0.9619622054378589);
    msg.setSource(52132U);
    msg.setSourceEntity(206U);
    msg.setDestination(1956U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.0303009154604843;
    msg.lon = 0.7013579981561564;

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
    msg.setTimeStamp(0.10561907236549539);
    msg.setSource(14074U);
    msg.setSourceEntity(29U);
    msg.setDestination(35139U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.7440442081078951;
    msg.lon = 0.4891128576885829;

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
    msg.setTimeStamp(0.8990083321931063);
    msg.setSource(5249U);
    msg.setSourceEntity(145U);
    msg.setDestination(22991U);
    msg.setDestinationEntity(216U);
    msg.timeout = 29628U;
    msg.lat = 0.6367773744955014;
    msg.lon = 0.09371429238496998;
    msg.z = 0.007148687405089116;
    msg.z_units = 248U;
    msg.pitch = 0.7787211681150147;
    msg.amplitude = 0.824865241957175;
    msg.duration = 5194U;
    msg.speed = 0.21334746849363684;
    msg.speed_units = 3U;
    msg.radius = 0.3204815125130991;
    msg.direction = 109U;
    msg.custom.assign("UODZXOEFJZAUGKZITOXEWYPCCSJDHFMVYLMAQVSHHTGYIAOWGCEUZBQZCIVQSOSTOLXQNDMNVPAPQIGIULHOCKRCXZIAVJMVMLEGDJMBNKTBDGHTJBKDRQBLYNSAMTGMNVHFKOHXGUFHVBPMEZQDPKXWGWPUSBPFKYXZULJRCYBSNPNXKHOIRBWFFSXDQCTRQTIURKDEZNIFPVJEEJXYLDZYNGUYREWAWLRYLVWRWLCBAT");

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
    msg.setTimeStamp(0.6376676997741605);
    msg.setSource(22584U);
    msg.setSourceEntity(102U);
    msg.setDestination(27393U);
    msg.setDestinationEntity(174U);
    msg.timeout = 65214U;
    msg.lat = 0.40065895129083096;
    msg.lon = 0.31620938106642327;
    msg.z = 0.39716546735426406;
    msg.z_units = 105U;
    msg.pitch = 0.4551179673719178;
    msg.amplitude = 0.6340908350673339;
    msg.duration = 12829U;
    msg.speed = 0.9972219302576998;
    msg.speed_units = 148U;
    msg.radius = 0.1864085080193516;
    msg.direction = 152U;
    msg.custom.assign("AWHOLUEDHVIGGFLLUJAKBBEKJKMEUDTMCBTFKXGNMWWFBPQKYUIETPOEGCRRWNHOFVEUEYOXBEGXOZDYPMIAHCCCGMYXVJOZOYZY");

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
    msg.setTimeStamp(0.8918074314029848);
    msg.setSource(52469U);
    msg.setSourceEntity(84U);
    msg.setDestination(44024U);
    msg.setDestinationEntity(150U);
    msg.timeout = 46376U;
    msg.lat = 0.7382839763332919;
    msg.lon = 0.5039045070493195;
    msg.z = 0.23337388391024028;
    msg.z_units = 173U;
    msg.pitch = 0.8569377561550716;
    msg.amplitude = 0.08800371341550195;
    msg.duration = 22202U;
    msg.speed = 0.9627642461868122;
    msg.speed_units = 230U;
    msg.radius = 0.5512494771524213;
    msg.direction = 36U;
    msg.custom.assign("CQMVNQWPOQCJTWJLRIZIIGMMGKOXVPSJOROYBEZGPLXAHWJMPRHOISXDHXLQIPHRBWXGZDLPBSAVAFNJWGNDZE");

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
    msg.setTimeStamp(0.8964937469544785);
    msg.setSource(1902U);
    msg.setSourceEntity(81U);
    msg.setDestination(7746U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("OVFGYWMCPASBKRYRWKAZJENUPIAVMLEICEIDBJDHJYTASBSIUPDNYSOIEUFTPZELKFJPJHUFAGBPDQSQIRVKLZLYETWLQFWRJLKBLQGDTMXCXJRHEXAZLH");
    msg.reference_frame = 80U;
    msg.custom.assign("RVKZBLJPRPLTETIEUBCIUVKNLGTDMBMPJUYKOTJDWRTONHXZHZYXPIJPVRINFRODWMGAWGHUZJNXCPOSFVESHOKKCGSJYACKYZDAJIMTZVEPZZNACRSERYFSOQAUSOFPEMOWXXLWNZYCVJEALHLIRYCKYALWBLBFDTAKFEHIMBYDUUGQMINNCVTXHRTQRSFZOHUJEKDOFBVCSBXGXQ");

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
    msg.setTimeStamp(0.7659303121245965);
    msg.setSource(63845U);
    msg.setSourceEntity(133U);
    msg.setDestination(170U);
    msg.setDestinationEntity(49U);
    msg.formation_name.assign("IZJWZPANWOYTNIGMIEMDQTXRUESRCDAVZVZXFIOMUWPENWNFDERSFDYEWOFGJFKYMKOUHAQKKUSGAINHRBBBQANBFQOLLYLLTOSXQSYAHDKJGTTDXVHSDXCTYXTWLPGYPFUTIKVEUAVCZCOYMJEMGUYQHJQQRPZGHZVWXKFUPVKIBCLCBOSXQLJHOWYBZNMDVSMGOZGPEIHSJRKZRRSFUJWBLVCQEJWPJRCNTAU");
    msg.reference_frame = 185U;
    msg.custom.assign("YIMOBTWAHFALXRKFDNWKBIYHVPLSAVOSCJYVJLIDUBIZZYYGNMMSKG");

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
    msg.setTimeStamp(0.2917966595587954);
    msg.setSource(21800U);
    msg.setSourceEntity(133U);
    msg.setDestination(55681U);
    msg.setDestinationEntity(193U);
    msg.formation_name.assign("NTWZHQOVAGNODJNKJTYNPHFRIUUUTSCDFDAPKRMLIBIVKHWYVGXWVWHMRDRZXPKSFYQIXJQOGQAQJWBYAYLUYTZOFWFCQEGTULUAIGQMELEOCXOJXYXOETHZCBSJMQMFEMOSHLFRTZMCCMDXNZCYSAJJPZOWKPGVRDSSHVKUWFNPUPXCFSBKEKIGIPLMWLJIVNHVRGS");
    msg.reference_frame = 20U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8702U;
    tmp_msg_0.off_x = 0.3678515669242811;
    tmp_msg_0.off_y = 0.33232477553685735;
    tmp_msg_0.off_z = 0.822912108671785;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UWGHQVWIVLFDZLUXRMVLHSRZZFJKAKPKPXICGUWQAJKWQWSYTTILOJJKAZDNAWGGACJFNXICAPOUGWNEQNBBTLXSXUZSQSIETBOZCVJLVSTMCUOQMZHHHDPILDYOUYGYARSZIBUSYEJKRNCPMQ");

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
    msg.setTimeStamp(0.48553492633910145);
    msg.setSource(57521U);
    msg.setSourceEntity(158U);
    msg.setDestination(58098U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("LNAUXICZIBGVZTEBMRULBVQIPZCSCDZJDQHELQWYIWHYWEFUPGBABSGJFBYSGYNHXUKZMVYPM");
    msg.formation_name.assign("RRQBQNHUIHWYPOATOQCXWDXJBAESMPEHZLADMAIBAGGB");
    msg.plan_id.assign("UMJGCGDQKBFWKYKRKTAERLUJTGQZKATFDIUIGQOAHALKYQPZVBPKUQQXMFOLHTJFMHEIKWYNVBSSASRFBZGJELXSTMRKUZLSPJEVBQISPWBZLADMDDDYCNJGMFWEJUAEFHWPNRVIOUVYEWTZHNYGWSCCOCNCXIDUHWOVCOUVAOPFYBMYAXHTNXPKVLXNUMJDQTHQVFTOSZRWVXDBGPWYSYEIFLCPECJLXMDGTZJIXZSOIXPHRCRNMQOBLNZEAB");
    msg.description.assign("QTYVJHPDZRPEUJANZELQDSJBGRGCWKSYOMAFTUYBVLWNXQXKWUIGXMOVLKDNGFPUELROZITSRDMAKDPTEJCQWEMJQKDHBSUXCUVYBHLNR");
    msg.leader_speed = 0.32407935100368;
    msg.leader_bank_lim = 0.8916908675332235;
    msg.pos_sim_err_lim = 0.9540829147457306;
    msg.pos_sim_err_wrn = 0.4159037570306857;
    msg.pos_sim_err_timeout = 22052U;
    msg.converg_max = 0.9966464497467997;
    msg.converg_timeout = 13571U;
    msg.comms_timeout = 5476U;
    msg.turb_lim = 0.6630470000533545;
    msg.custom.assign("IROZXRBOKHKRNPIQHGJAWWHWWPCOLYQEPDOAQMQHCXGFPKOCVGFFDZUVKMFOHOWKKGHQXTYFIMCDJBVTZJSYXTMBYVSNPLQOADTLGAJXWCAIKVCFMCBIBGQMRCYZUUKPUENYDWUESZEGSBVSLTTQHDVUSQXABRIT");

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
    msg.setTimeStamp(0.24407938376528704);
    msg.setSource(36450U);
    msg.setSourceEntity(221U);
    msg.setDestination(20787U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("BTYMYHQAJEARQXYSPDMJNTGUNWATTMZIDKWRUEVGCNOKTVSNEWXBHLTDZBLMAHICAACVAKYHGUOQKQCEZSGMOPFYTOZFSQQMWRHFZIXLYPWRJRSUISRNJZBFPNNBUMESKMDPORNAXWJOVETVKFXEJBCHUPILYLLZJWEZWURQEOCCERHXPZPNDKVRDJTDHKXGGFXOQBSVVZDSDP");
    msg.formation_name.assign("DJIRZIPZHQYMGVECLKACXZJIWMMRYCJPXSJUNWLKUNFMUHURMJZVKQXIYBYHWAOXTTFLILGRXOEABTCTGRNGAGSMCJEXNBWSDOUFCMSSZHQKIGSFTBGKTFYDYDBDXVTPNCIVPPNTWLRLGHID");
    msg.plan_id.assign("EQCCANHBLYYPWHXKGFCSEEWUCCUAUTIZKEPIRCNZPWJABBMGYZTNIFKIZHGDFAPNPTMOTRCBZXINJDVPWOCFUGQVROLVWDMQCZODBDKUGTOQFBYIRRFRETGSMZVXIISNXWAUGYYDHLVDFJEPLBQQKHMSRHJXTURXPNXJIKWOLHFMOQJHHLWTXMPAAWZLZFZRFEIYATDLJRAMXXVEQAJQQSJBCDVSGVEVYNMKSNTKYEGVNOYLS");
    msg.description.assign("JMMLHKGXSORJIQERWXNESXDKGAYBIKGVQBEUQZHCEWTEWEDHQKLBFXCGHMINHXWKLNPASQXMUAJOTWHDULHKILQMGZZGYSNPOIHIGQNJFAVRVBUGNJSCE");
    msg.leader_speed = 0.5047350846446753;
    msg.leader_bank_lim = 0.2988817474304958;
    msg.pos_sim_err_lim = 0.7911195399944705;
    msg.pos_sim_err_wrn = 0.3938214208143359;
    msg.pos_sim_err_timeout = 36751U;
    msg.converg_max = 0.7296799012038974;
    msg.converg_timeout = 45224U;
    msg.comms_timeout = 24504U;
    msg.turb_lim = 0.2173436733372347;
    msg.custom.assign("DCZEWMTPPOEGBXKBNIUDCRBYNELOCLTRJPOJVKXGXAENKCQRIPKMGDLTQYGVMWHHSWHPXGDOKTMZYOXTMWUNYFDSYFKZIIBDQAQVLHWWRDXVICTJJSHOUUDYUMFUYLVVSPFWJLWRSRJGZYMOZBCTACEFBDQEILSANKNKXPHQNIPIJHFNMGPSQEQWADUKTBSFGJJVCZEUSGRYZLYGRXFTBSLVHABNERVOB");

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
    msg.setTimeStamp(0.17961200402121458);
    msg.setSource(4948U);
    msg.setSourceEntity(21U);
    msg.setDestination(5570U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("BLZHOJURDTVDNDFWIQETABKUCRMNSNLBBEYNMKGXLHPPFMCPIGSERPWFSUWINQJYISOXQGTCMYBPOZSFYJMHOPEEKBUYJGERJPKGGVGCNRMLHVOFAADNCZDXHZTSJNUUVXMQVOEJZJMUCGYQETVQOPWFVWVQCKXNKXPYLRRDAYAHGWNLBFWQAXAXHKEOCKHZDIILFXUHTSYPOISFDTZL");
    msg.formation_name.assign("YWVJHXERHQFAVISDRCNFQTSWALMYFVUOJRJSCAYCNNEPVJOTIAIHSAVXSCBRTQQDAEWBQNGHMWWKPPZZIUSXFXZUQSPMCGIHKZIXPLDZTREQAGLHRVGNKJRKVOMUDLKVQHOPLFYFNWEZENXAPJZIJCLHTYUOWKGITMPGCYYNMVSGDJBLAQECBZORPMOMYUJUWBIR");
    msg.plan_id.assign("QCABJXAMQDPLPBEZXUFNUKRXWHQEGHERCUEGGHSZRSQPPZGPORFVPZACOETUYJXCDOWDLNKSBDRPGHODJFFBSTWVLJPHKUWINOLBAGIHXIAXYMATMSWTFNT");
    msg.description.assign("TBSXXLFHDEGFQNUXIYDSLPYKDBPFSZNFHBPWZFBNHAENRKCVVFURIQYGNSHQFCPJRQSGRYQZZRPVHSWXWKJXDVCDNXYZYTLPBNEVUCQMSZLQTLLTOYWAYETBWDSXCAKOCTJUSKVLPGIOMMMMOVMEJUMAOERRTIQGRAOBKHVKLZBFJLXIVUCAZCTNRMANGIPPEUBWTCXMQEUIGWCKSDAFKHPEUMZWGJWHGOIDHFAIGHKYYTVJNJIQZXB");
    msg.leader_speed = 0.5720505323745997;
    msg.leader_bank_lim = 0.2882538571582509;
    msg.pos_sim_err_lim = 0.4682074992591958;
    msg.pos_sim_err_wrn = 0.6557857275928302;
    msg.pos_sim_err_timeout = 2561U;
    msg.converg_max = 0.12474298624445535;
    msg.converg_timeout = 32186U;
    msg.comms_timeout = 1959U;
    msg.turb_lim = 0.1649193796258983;
    msg.custom.assign("BNGPBRIAYOWVLZNSMRWEQMHQIJDQKKKYVWTKHFHMNNOCONKFISNZRPBPSLCBOIXVQHIJQZMXTZSEUHJWHYFJHYLVAJAROPVCLNIYORULXEKLGEUGFCRXUABRLVAGHAMXBZGK");

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
    msg.setTimeStamp(0.983958266064092);
    msg.setSource(27975U);
    msg.setSourceEntity(180U);
    msg.setDestination(38967U);
    msg.setDestinationEntity(236U);
    msg.control_src = 5312U;
    msg.control_ent = 27U;
    msg.timeout = 0.34450027125574756;
    msg.loiter_radius = 0.6747971304604631;
    msg.altitude_interval = 0.7467890999825091;

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
    msg.setTimeStamp(0.6562762073573434);
    msg.setSource(6400U);
    msg.setSourceEntity(254U);
    msg.setDestination(30140U);
    msg.setDestinationEntity(219U);
    msg.control_src = 3794U;
    msg.control_ent = 222U;
    msg.timeout = 0.7854614778516842;
    msg.loiter_radius = 0.29021142380811116;
    msg.altitude_interval = 0.5045818791270115;

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
    msg.setTimeStamp(0.8514914780439659);
    msg.setSource(3837U);
    msg.setSourceEntity(186U);
    msg.setDestination(14994U);
    msg.setDestinationEntity(63U);
    msg.control_src = 46542U;
    msg.control_ent = 167U;
    msg.timeout = 0.6038352882577662;
    msg.loiter_radius = 0.3897927894636807;
    msg.altitude_interval = 0.687643541124523;

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
    msg.setTimeStamp(0.9995464124959866);
    msg.setSource(54193U);
    msg.setSourceEntity(10U);
    msg.setDestination(47220U);
    msg.setDestinationEntity(10U);
    msg.flags = 242U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5994962694735145;
    tmp_msg_0.speed_units = 79U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5988192748849612;
    tmp_msg_1.z_units = 117U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8561416497320579;
    msg.lon = 0.7540316515469203;
    msg.radius = 0.05379439372520978;

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
    msg.setTimeStamp(0.4938796142996823);
    msg.setSource(32867U);
    msg.setSourceEntity(203U);
    msg.setDestination(22921U);
    msg.setDestinationEntity(210U);
    msg.flags = 26U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09141569419215223;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.37810612557233314;
    tmp_msg_1.z_units = 224U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5094464776941914;
    msg.lon = 0.807711471876963;
    msg.radius = 0.7222152219413062;

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
    msg.setTimeStamp(0.8227117713357401);
    msg.setSource(28499U);
    msg.setSourceEntity(95U);
    msg.setDestination(8451U);
    msg.setDestinationEntity(8U);
    msg.flags = 44U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5173950361968727;
    tmp_msg_0.speed_units = 3U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9557732115873557;
    tmp_msg_1.z_units = 25U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5316829779786872;
    msg.lon = 0.6705538367748325;
    msg.radius = 0.24311863513858567;

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
    msg.setTimeStamp(0.7955900513464833);
    msg.setSource(7755U);
    msg.setSourceEntity(105U);
    msg.setDestination(41616U);
    msg.setDestinationEntity(127U);
    msg.control_src = 11335U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 81U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8872875744407807;
    tmp_tmp_msg_0_0.speed_units = 10U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8258604528792718;
    tmp_tmp_msg_0_1.z_units = 111U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0847703317768721;
    tmp_msg_0.lon = 0.29973683858419675;
    tmp_msg_0.radius = 0.4950977008541252;
    msg.reference.set(tmp_msg_0);
    msg.state = 41U;
    msg.proximity = 126U;

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
    msg.setTimeStamp(0.8269171714269274);
    msg.setSource(28097U);
    msg.setSourceEntity(119U);
    msg.setDestination(24901U);
    msg.setDestinationEntity(231U);
    msg.control_src = 39728U;
    msg.control_ent = 192U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 112U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.42012214645565515;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.17013077209839544;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.40674381593542164;
    tmp_msg_0.lon = 0.9333767987997117;
    tmp_msg_0.radius = 0.009570626551130834;
    msg.reference.set(tmp_msg_0);
    msg.state = 12U;
    msg.proximity = 189U;

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
    msg.setTimeStamp(0.021572413998614204);
    msg.setSource(13647U);
    msg.setSourceEntity(195U);
    msg.setDestination(48660U);
    msg.setDestinationEntity(41U);
    msg.control_src = 30016U;
    msg.control_ent = 67U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 241U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9423139961116807;
    tmp_tmp_msg_0_0.speed_units = 142U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7804667093763116;
    tmp_tmp_msg_0_1.z_units = 71U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.48589314544600504;
    tmp_msg_0.lon = 0.5277894483364286;
    tmp_msg_0.radius = 0.13062132245690405;
    msg.reference.set(tmp_msg_0);
    msg.state = 231U;
    msg.proximity = 218U;

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
    msg.setTimeStamp(0.9006224577594204);
    msg.setSource(59652U);
    msg.setSourceEntity(140U);
    msg.setDestination(23994U);
    msg.setDestinationEntity(95U);
    msg.ax_cmd = 0.09644054974625726;
    msg.ay_cmd = 0.08419485876716515;
    msg.az_cmd = 0.2217157864944691;
    msg.ax_des = 0.7021205268876822;
    msg.ay_des = 0.45942530882412147;
    msg.az_des = 0.5918269303098148;
    msg.virt_err_x = 0.13015975553436643;
    msg.virt_err_y = 0.6371705185663152;
    msg.virt_err_z = 0.6835419883854442;
    msg.surf_fdbk_x = 0.013794233188905491;
    msg.surf_fdbk_y = 0.18870325480593386;
    msg.surf_fdbk_z = 0.7946274134390173;
    msg.surf_unkn_x = 0.003187695249062261;
    msg.surf_unkn_y = 0.00801113670482878;
    msg.surf_unkn_z = 0.210865786899592;
    msg.ss_x = 0.7197154267709551;
    msg.ss_y = 0.4199309593407543;
    msg.ss_z = 0.23340791984060383;

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
    msg.setTimeStamp(0.3904489203370889);
    msg.setSource(6243U);
    msg.setSourceEntity(128U);
    msg.setDestination(16506U);
    msg.setDestinationEntity(222U);
    msg.ax_cmd = 0.5183170753269822;
    msg.ay_cmd = 0.5363581213077397;
    msg.az_cmd = 0.34331931667894655;
    msg.ax_des = 0.9008690173011367;
    msg.ay_des = 0.20546382647914785;
    msg.az_des = 0.9828977746242553;
    msg.virt_err_x = 0.8248390742126696;
    msg.virt_err_y = 0.16042288230565738;
    msg.virt_err_z = 0.7554524873622557;
    msg.surf_fdbk_x = 0.06601263723412731;
    msg.surf_fdbk_y = 0.8191510681500235;
    msg.surf_fdbk_z = 0.4355841695664334;
    msg.surf_unkn_x = 0.07856022075570956;
    msg.surf_unkn_y = 0.7840702414605953;
    msg.surf_unkn_z = 0.02159945067801161;
    msg.ss_x = 0.6010783632919384;
    msg.ss_y = 0.13204752722182544;
    msg.ss_z = 0.4278745713021551;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GJXLZKVKMCXJVPCDFDOSVLSMRQIJRYCZRZOEYSWIWEPHAYFEMKCMGESKITGUPQYGZHGCTJTLHRTKVOVZSAITGGFWOBKBPSAKJXGLMFHLSBDCYJZUHHBDHAPLWUNDKTCKOEWZQRJQVBAAYUUPLVNYXWUOFZOZIDECYAXMPILQDWUMBIILFVNNIRNTLVFXDRGENQQBMQIGFYYKJJDHZTCONWBDBXRTHSEROPUTEXNFF");
    tmp_msg_0.dist = 0.13269269591670985;
    tmp_msg_0.err = 0.6305193919532692;
    tmp_msg_0.ctrl_imp = 0.695137082317975;
    tmp_msg_0.rel_dir_x = 0.07425248674215801;
    tmp_msg_0.rel_dir_y = 0.8267821298756232;
    tmp_msg_0.rel_dir_z = 0.6254148892347822;
    tmp_msg_0.err_x = 0.3056971600426741;
    tmp_msg_0.err_y = 0.2738812324465406;
    tmp_msg_0.err_z = 0.9667284989890522;
    tmp_msg_0.rf_err_x = 0.08240786083680263;
    tmp_msg_0.rf_err_y = 0.22342288818533518;
    tmp_msg_0.rf_err_z = 0.5426568703644663;
    tmp_msg_0.rf_err_vx = 0.31615153432387566;
    tmp_msg_0.rf_err_vy = 0.09873433163430978;
    tmp_msg_0.rf_err_vz = 0.1317444900978545;
    tmp_msg_0.ss_x = 0.9288793597139868;
    tmp_msg_0.ss_y = 0.9977382847763433;
    tmp_msg_0.ss_z = 0.06303903569476943;
    tmp_msg_0.virt_err_x = 0.6296385535878118;
    tmp_msg_0.virt_err_y = 0.8613948281830328;
    tmp_msg_0.virt_err_z = 0.36650353504635746;
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
    msg.setTimeStamp(0.2348531087660225);
    msg.setSource(25919U);
    msg.setSourceEntity(204U);
    msg.setDestination(50111U);
    msg.setDestinationEntity(108U);
    msg.ax_cmd = 0.9603880836008697;
    msg.ay_cmd = 0.2537113118835411;
    msg.az_cmd = 0.49754755596387423;
    msg.ax_des = 0.5306218469412871;
    msg.ay_des = 0.03176068066936333;
    msg.az_des = 0.8488651836858004;
    msg.virt_err_x = 0.08831297462052223;
    msg.virt_err_y = 0.4476194965530531;
    msg.virt_err_z = 0.9037898000182838;
    msg.surf_fdbk_x = 0.20108051074630906;
    msg.surf_fdbk_y = 0.26473224611634105;
    msg.surf_fdbk_z = 0.30853420592941716;
    msg.surf_unkn_x = 0.20820479488247023;
    msg.surf_unkn_y = 0.6420402367579253;
    msg.surf_unkn_z = 0.46619026814927567;
    msg.ss_x = 0.7878846838432928;
    msg.ss_y = 0.17468567147891756;
    msg.ss_z = 0.6478408588534625;

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
    msg.setTimeStamp(0.7030042148338681);
    msg.setSource(1517U);
    msg.setSourceEntity(166U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(7U);
    msg.s_id.assign("WDJHJQWLJPEDDJMDPWXIPUOXCIRRWEOXGQIRLLFTFZQWKIFOEECEMHMDPWLPCFSDLOMQTRQONVAVZGBWZCSWKHHUNXEVHTXYYZDUVQJBAABFPZCQHGLNSKICSOGUNGGYIOIR");
    msg.dist = 0.7091669647917044;
    msg.err = 0.19919442919628227;
    msg.ctrl_imp = 0.5971876375165528;
    msg.rel_dir_x = 0.5809669616430579;
    msg.rel_dir_y = 0.7475169082509786;
    msg.rel_dir_z = 0.851075603407791;
    msg.err_x = 0.7975860981663512;
    msg.err_y = 0.7392084139757692;
    msg.err_z = 0.18258935623560957;
    msg.rf_err_x = 0.8352154170602668;
    msg.rf_err_y = 0.4359384660858089;
    msg.rf_err_z = 0.20317643952327002;
    msg.rf_err_vx = 0.9103706671395051;
    msg.rf_err_vy = 0.6732492124965973;
    msg.rf_err_vz = 0.04635173845504159;
    msg.ss_x = 0.6143474802744543;
    msg.ss_y = 0.36769643772649174;
    msg.ss_z = 0.48455001348146076;
    msg.virt_err_x = 0.3017952321359991;
    msg.virt_err_y = 0.04167829689869951;
    msg.virt_err_z = 0.5933758534937283;

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
    msg.setTimeStamp(0.4256035242047461);
    msg.setSource(61395U);
    msg.setSourceEntity(115U);
    msg.setDestination(2188U);
    msg.setDestinationEntity(46U);
    msg.s_id.assign("HAGPNCWRREPIAVZKHMKJZDFLJYH");
    msg.dist = 0.3299897360755656;
    msg.err = 0.4304616458889823;
    msg.ctrl_imp = 0.7771923129856414;
    msg.rel_dir_x = 0.6684634496797935;
    msg.rel_dir_y = 0.7333824727966975;
    msg.rel_dir_z = 0.7187448045345594;
    msg.err_x = 0.33104989532728435;
    msg.err_y = 0.7425348752983241;
    msg.err_z = 0.42394212581948654;
    msg.rf_err_x = 0.32913337280726396;
    msg.rf_err_y = 0.5571552241615426;
    msg.rf_err_z = 0.3718848716983638;
    msg.rf_err_vx = 0.5321639180582017;
    msg.rf_err_vy = 0.31501398528038504;
    msg.rf_err_vz = 0.1975079594988517;
    msg.ss_x = 0.013727365439930472;
    msg.ss_y = 0.33009950970262536;
    msg.ss_z = 0.5664224675103036;
    msg.virt_err_x = 0.23070494770370364;
    msg.virt_err_y = 0.24480642279360088;
    msg.virt_err_z = 0.5938328447913837;

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
    msg.setTimeStamp(0.48067268184931833);
    msg.setSource(43416U);
    msg.setSourceEntity(245U);
    msg.setDestination(49956U);
    msg.setDestinationEntity(28U);
    msg.s_id.assign("HKDIQMYXIARFMXTAHTBQODXLXVPMKRYJWEWVLNUOHKJZOVEUBBVCZZLZKXBQBJISUAGAWPZCYHCNNWWRFXFCIYJWDPDWFYCYHSUYVNPLXIHVZMQKOKBHWMIUIMPBGQLWVPAVMDDUQPNKOSLKQSRDRZEGPILGNAACL");
    msg.dist = 0.11300876580306074;
    msg.err = 0.3771367837997508;
    msg.ctrl_imp = 0.6857101393793801;
    msg.rel_dir_x = 0.5320517377870092;
    msg.rel_dir_y = 0.5878982304485222;
    msg.rel_dir_z = 0.6951588091911751;
    msg.err_x = 0.0018705016523871132;
    msg.err_y = 0.5077255665016894;
    msg.err_z = 0.8567957626255441;
    msg.rf_err_x = 0.8919762220540275;
    msg.rf_err_y = 0.09614305389207745;
    msg.rf_err_z = 0.43888596540084857;
    msg.rf_err_vx = 0.1557535262738886;
    msg.rf_err_vy = 0.2474915196305557;
    msg.rf_err_vz = 0.6250595460808847;
    msg.ss_x = 0.5639519055093132;
    msg.ss_y = 0.8379033255471461;
    msg.ss_z = 0.7490816981397985;
    msg.virt_err_x = 0.88747424322781;
    msg.virt_err_y = 0.5496862036294359;
    msg.virt_err_z = 0.27028331509212133;

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
    msg.setTimeStamp(0.1073362034675861);
    msg.setSource(62U);
    msg.setSourceEntity(2U);
    msg.setDestination(50515U);
    msg.setDestinationEntity(96U);
    msg.timeout = 30794U;
    msg.rpm = 0.8975396449034647;
    msg.direction = 146U;
    msg.custom.assign("WHYVRQIMORNEFUDVBWONFKWCSIYYDGUYCEMILQGLTWQPPFTILPGWJGKMJVE");

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
    msg.setTimeStamp(0.47629143500461113);
    msg.setSource(24340U);
    msg.setSourceEntity(199U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(41U);
    msg.timeout = 30631U;
    msg.rpm = 0.1570800205472037;
    msg.direction = 49U;
    msg.custom.assign("HDZCTVNUDRQLHBSUWOKQZHZPFJRBVNEDVHKYGJBPBLGIDFQZHWIOPYQWEJMDOGXRBVTYWACRMIANZSEUOKTXPRXJHSQVODLEDTXFKTHPIYRULGHZPIUNBPPCVOXZ");

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
    msg.setTimeStamp(0.333942922653503);
    msg.setSource(51057U);
    msg.setSourceEntity(27U);
    msg.setDestination(21835U);
    msg.setDestinationEntity(41U);
    msg.timeout = 60961U;
    msg.rpm = 0.742504022092496;
    msg.direction = 14U;
    msg.custom.assign("WJINJENOLHSMPTAQXANJSNFQMSNNBZZXTGYGADBUCTPJAKDKSZLDTIYPRYUKFQWDBIMEMMHOTXFJHRFOZXDZWEKDWRVWTNFPHKCUMSCSUPWRXYQRZCCBGVUBZBRZLLTOMYEOVTXFVOUFCWAHBJPW");

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
    msg.setTimeStamp(0.18201968072642905);
    msg.setSource(34111U);
    msg.setSourceEntity(212U);
    msg.setDestination(63755U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("LHWEBMMZRIBCPWDPIYNNKBOAMTLACCLCIZEYGJMXMSKXINXIBCHDVHNHKHFGKBUIPKUNOBNORVQEFOFQMBJGVJTNEAUHKYSEIEVIVMTOFUPSTGDTARRCYHRBASUZPVXAZFCTPWKUNDDPSGEHKWOQJCLQZWQNRXWYHWFMRVIGJYAGOVXZFWSTGJDQZJMURLLIMLECDYZOYUAQVQWUPDYTJQJVPRDLOGLNFXTAOZGXZRUKHEFDBPWJLASEKS");
    msg.type = 205U;
    msg.op = 201U;
    msg.group_name.assign("KFWYHCLHWTXVUMNIYRCMYSOGNDOEQYLFWNMWBVKMKROEYJHQUHLXMPJAEFBCKZSHPBBTIAVYVHALAXPWEQFKLMOXAOJWEXCBOCSIUPHXIAPDVDNGUSTVUZLGNESWUMRNJCFSLECIUWXFXBKTBKDSVTBRXAGMVHGSNKSPGCIRZZRKOVIOGTDCAUFJETQ");
    msg.plan_id.assign("UTNBZAQLFAPXECPARNWTAYETIKHJLKWGANZKQOSZQSUCIONBTCMODUTPKVNYMORNLLLXKSPAXRMKAJMEOBGFDEJFCIGBAYZLKJZIBRVVYVGFYAPHYEWTWKSIDYJRQXXTPGVFUFJZPMXUUTOHQRGNFXWHZMOWSVOGIXRIHCNQUZWUVQFGDLHNDHOFSLCDHDVDQRVIKIGJCZLMSWBJRHLWEJBYFTEBNRYCGTSJMXYAUCDBIUPVEHZP");
    msg.description.assign("BTZCHEHAHQNEQJQGLQVSCDTDGKBUHUWRKNYPFWECVPRMVWTKXGLFFAOBODYBOWTGUUZILJWINCLIGVDRZZJXMEPGSXJTAFYPJVAINRNYUMFUINJEJGMKAKQKSMIGSBOVM");
    msg.reference_frame = 22U;
    msg.leader_bank_lim = 0.9737203607672158;
    msg.leader_speed_min = 0.292657114649823;
    msg.leader_speed_max = 0.2227495764596148;
    msg.leader_alt_min = 0.46850471052854537;
    msg.leader_alt_max = 0.6558191722320517;
    msg.pos_sim_err_lim = 0.1317589901867855;
    msg.pos_sim_err_wrn = 0.9139824107382148;
    msg.pos_sim_err_timeout = 50122U;
    msg.converg_max = 0.1495362497812266;
    msg.converg_timeout = 1821U;
    msg.comms_timeout = 48242U;
    msg.turb_lim = 0.3828882752756968;
    msg.custom.assign("OBEDGWDCMLBCJFREYKRRWATGHQJUFNUQGHEGHNQJSJVDYWHWGTVPYOQNIDKBQDDQXKARANGWNBYNCHCFUDOVECTRSZGBLPARBXIVYIZRKNBMSOYMMZMAKYKNORLFJWEIBLEAXVXUUCTQJYYZAOTTXFPSDFCSKXZUWZCHKZOKPIQUHWXRPUN");

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
    msg.setTimeStamp(0.026148838252970763);
    msg.setSource(30096U);
    msg.setSourceEntity(27U);
    msg.setDestination(61765U);
    msg.setDestinationEntity(137U);
    msg.formation_name.assign("EIYQQBDKKSVTABPSGFFNMAVQXDVIDBWMFFKUGMDXZYXA");
    msg.type = 226U;
    msg.op = 113U;
    msg.group_name.assign("CFNIXLIBRYUCIKWWELNZRRJLYBFPYMTZDKOARUBBKYI");
    msg.plan_id.assign("JEMEJQDYERIGUNDBBOEKJBQZNZUPDEUEIZPVCYWKYNWTSETYNKQTVXHHIGHKSVMCZYVQXTUMLFKYNNLHBCOZMXRSMWASPSDRODLR");
    msg.description.assign("KMJRWGDVMVOJUANLWCYNBRYZUIZXJWDEKLMAJRLNOAENGAJOOGMPAUQOJCHWYSUYUQSRCVHJESPHSAFSMQUVXHRYKNVABXOLRZPVPQHIZHQWYBGHIZTBMGK");
    msg.reference_frame = 222U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43788U;
    tmp_msg_0.off_x = 0.4775995221306819;
    tmp_msg_0.off_y = 0.3460941425588471;
    tmp_msg_0.off_z = 0.9799766478276031;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4205412180319055;
    msg.leader_speed_min = 0.03683154938322564;
    msg.leader_speed_max = 0.5126786840543387;
    msg.leader_alt_min = 0.1861237920023704;
    msg.leader_alt_max = 0.5725919526291897;
    msg.pos_sim_err_lim = 0.36621166587342535;
    msg.pos_sim_err_wrn = 0.2276291376954691;
    msg.pos_sim_err_timeout = 51853U;
    msg.converg_max = 0.6890961506536923;
    msg.converg_timeout = 24293U;
    msg.comms_timeout = 51696U;
    msg.turb_lim = 0.4301122274474273;
    msg.custom.assign("VEYTVZNZLKBGGYLNREZCQPKSXWNKTCWEFRWVS");

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
    msg.setTimeStamp(0.5602480164365453);
    msg.setSource(34179U);
    msg.setSourceEntity(49U);
    msg.setDestination(55259U);
    msg.setDestinationEntity(121U);
    msg.formation_name.assign("RECAWOGNAOTSQXCTPECQZOLOYIJSTWVFFZIWZBVDMGNSWPIGUGXBBNSPPGHMGORFLNUXUUNCCGDBMFFTUJDJBSLEJDNQHFXJQNDYYDNYVOEKUXVXVPHTWKFDLHCRXEMJQLRUGCEZJOVANKHEQZLZIKRSUCVLMZFGXJIISTAORWWNU");
    msg.type = 41U;
    msg.op = 83U;
    msg.group_name.assign("GOKQWVKIELKATESSCYVGQZQPSDETNHZCNYVJIIHOOEDRGNUIOSWDNPUJZWVWUGUWKKYNTLXJXZAEAHIMBLHPJNJRNDQZLWLIIVLRYHXRVGYRNYERFDPSSTDTRFTGEJHFSIUWKLQSUCIPEXXSKVRLXRXFYFWQZTC");
    msg.plan_id.assign("LZQCWOFCOGVLDDZFHJSZCIXCVAEQDNBMAUELVSOHMKOIQ");
    msg.description.assign("RBQNKVICLXPXOIXQARPAUKSMKDHEBRBYHNGGCWRJAHULPVFNTHOBSQEZCAOITMNMAMNMHRLXBQJODMRUEZCBWKUDOIDBNLYTEVGLDQQSUEGIWETWKGCVVDCZYZNEFYXBCLWMVACLSWBS");
    msg.reference_frame = 183U;
    msg.leader_bank_lim = 0.3524572034935177;
    msg.leader_speed_min = 0.7319814156454164;
    msg.leader_speed_max = 0.5436844810158039;
    msg.leader_alt_min = 0.5798822189567798;
    msg.leader_alt_max = 0.6397938519991767;
    msg.pos_sim_err_lim = 0.3603562447607881;
    msg.pos_sim_err_wrn = 0.41750811360317497;
    msg.pos_sim_err_timeout = 13088U;
    msg.converg_max = 0.4602694074384671;
    msg.converg_timeout = 60282U;
    msg.comms_timeout = 30741U;
    msg.turb_lim = 0.7140078893149004;
    msg.custom.assign("VGFFWDRCEIGLHMNCQXUVFMKJBENKYCTBZJEBIWLSNKPNWVZRCQQRFQDCMIWUVXHBFZJFDRGNYRZYTJAWQSEOCLSPVWAEZIAEPCSEXEUQIGOPWC");

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
    msg.setTimeStamp(0.7272446735713456);
    msg.setSource(41966U);
    msg.setSourceEntity(183U);
    msg.setDestination(36789U);
    msg.setDestinationEntity(251U);
    msg.timeout = 29697U;
    msg.lat = 0.3251470894901416;
    msg.lon = 0.5121487596431153;
    msg.z = 0.019890405513661502;
    msg.z_units = 31U;
    msg.speed = 0.9872705839518815;
    msg.speed_units = 6U;
    msg.custom.assign("HLKXAZHSOTYMUKZSNDMTKUYZVCBMBEJOEHQRZVXKUIQFOIZR");

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
    msg.setTimeStamp(0.8057709228277342);
    msg.setSource(62004U);
    msg.setSourceEntity(252U);
    msg.setDestination(21223U);
    msg.setDestinationEntity(2U);
    msg.timeout = 6853U;
    msg.lat = 0.036413678466007515;
    msg.lon = 0.6259184629494569;
    msg.z = 0.47857048862592455;
    msg.z_units = 244U;
    msg.speed = 0.130176655791715;
    msg.speed_units = 248U;
    msg.custom.assign("SDOKZHKCOYRDHCFA");

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
    msg.setTimeStamp(0.8891274377982522);
    msg.setSource(64573U);
    msg.setSourceEntity(14U);
    msg.setDestination(51980U);
    msg.setDestinationEntity(59U);
    msg.timeout = 15861U;
    msg.lat = 0.5758452378541755;
    msg.lon = 0.23876100279137147;
    msg.z = 0.6253703500533887;
    msg.z_units = 71U;
    msg.speed = 0.8099703561602556;
    msg.speed_units = 5U;
    msg.custom.assign("AUYFPTULQJKPGDVUWNVFCYGCOYAGNTAFPSSXKOECRZLTCKCOSMGDCUOQUPIBWDMHAMQOA");

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
    msg.setTimeStamp(0.4012278972451533);
    msg.setSource(36358U);
    msg.setSourceEntity(52U);
    msg.setDestination(28682U);
    msg.setDestinationEntity(200U);
    msg.timeout = 24818U;
    msg.lat = 0.8941382350397479;
    msg.lon = 0.49340713745005516;
    msg.z = 0.04990891657773899;
    msg.z_units = 120U;
    msg.speed = 0.5434799323140317;
    msg.speed_units = 97U;
    msg.custom.assign("HJBQDMILCHEWBPJNBWCXWHZMAAQDUSTMHSGFRFVDJEGULMB");

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
    msg.setTimeStamp(0.988427292243153);
    msg.setSource(16945U);
    msg.setSourceEntity(82U);
    msg.setDestination(5229U);
    msg.setDestinationEntity(6U);
    msg.timeout = 16686U;
    msg.lat = 0.35008963805200743;
    msg.lon = 0.7436752180469774;
    msg.z = 0.48322223824527855;
    msg.z_units = 197U;
    msg.speed = 0.5015679043503323;
    msg.speed_units = 141U;
    msg.custom.assign("EFLXOPIBWJZOQHPSDUVFKFJWAROWTUDEYLTTGCXBECRLNFNOWAUVPNQHCXDAORGTZNAXHYVDGJIQPSXGUKZHSIHPZNHCYBOPWHCSNSRTIAWEVVOFIYZQZDZMUFYIWVQFLKFBUKITSQMMGQHURBVAE");

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
    msg.setTimeStamp(0.15912356048523502);
    msg.setSource(13364U);
    msg.setSourceEntity(20U);
    msg.setDestination(5908U);
    msg.setDestinationEntity(114U);
    msg.timeout = 8190U;
    msg.lat = 0.7918146782669963;
    msg.lon = 0.5788708038491825;
    msg.z = 0.816919851621962;
    msg.z_units = 232U;
    msg.speed = 0.45860811340176644;
    msg.speed_units = 237U;
    msg.custom.assign("SPWURDDBMBAYMQRXICPKNOUVLEZONWDLKRXWTDAACFMJUFALNYLGHMTIWEFSTATOSEVRMXYXAHJGOLTVSOGLCMTHUHZQRCBWFPFAZCDRGQI");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.6632960347061777);
    msg.setSource(14514U);
    msg.setSourceEntity(79U);
    msg.setDestination(4632U);
    msg.setDestinationEntity(163U);
    msg.op_mode = 124U;
    msg.error_count = 89U;
    msg.error_ents.assign("NMVYYTFXHMVMFTZUKACWCFXZNTNQBSCMBQTRISYLXCRJTHQZCUIATREGDAPWJMORRYDVWRKLPAJWXABNRDNNLCQIVKPTHEBMUIBFJJEGMLLVYFFSEDQKYIQGXBOMOVRDYJKRFBKENISNSHPDXHZOSPUVEUGKYSXJDGTUSELAKBCAYIUAHQDPEUVOLPBZCNGQUXYIVGHFEHVPWSGOJQWFNJOZOIZPWIMOX");
    msg.maneuver_type = 49741U;
    msg.maneuver_stime = 0.21555841063238013;
    msg.maneuver_eta = 37277U;
    msg.control_loops = 14184420U;
    msg.flags = 154U;
    msg.last_error.assign("NKNLIRTASOPFJJNJRZTUHDZCRJDUBDGGGHGXNJLNVMWTVUIRSMUSXPGEMWYZWNIZEVVCUEVOYPOBBIGGOWSKKJWIZNABSDPXFNEJLBGNM");
    msg.last_error_time = 0.1752575493525108;

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
    msg.setTimeStamp(0.5197771936009062);
    msg.setSource(55892U);
    msg.setSourceEntity(237U);
    msg.setDestination(35104U);
    msg.setDestinationEntity(128U);
    msg.op_mode = 114U;
    msg.error_count = 114U;
    msg.error_ents.assign("XXHQOBYIWKKMAUIFKQKHTSZYEQVASNEJDNHXTRXFDLLRSQHWRDWPCBH");
    msg.maneuver_type = 46727U;
    msg.maneuver_stime = 0.2933692764667918;
    msg.maneuver_eta = 19347U;
    msg.control_loops = 3334106289U;
    msg.flags = 133U;
    msg.last_error.assign("HFPBRMDPUJDTLLUYHXDUKXNWHXNOQKQTGHVPJOYADFGBAOGSMHOIMIVCVZCUNEWPOCEIBYRGWCPZBZFZACGHQWWLNZJVBKDYISVAEEYDPIIWZMYBQXKDNZJULISLKNWKXQCNLQDRTRGKSLRJTVWCBVUJLFGJJYUTNSMTGKHAFPFSSTCOAIN");
    msg.last_error_time = 0.9640520008006989;

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
    msg.setTimeStamp(0.04673159548210126);
    msg.setSource(41691U);
    msg.setSourceEntity(155U);
    msg.setDestination(5262U);
    msg.setDestinationEntity(226U);
    msg.op_mode = 128U;
    msg.error_count = 243U;
    msg.error_ents.assign("QYBHKONANZCBRPLDDLRZOKEOFPMUIAOSMKILXYEIFXVBMFQBBLHYRGF");
    msg.maneuver_type = 18209U;
    msg.maneuver_stime = 0.8489836416917284;
    msg.maneuver_eta = 26109U;
    msg.control_loops = 2453566323U;
    msg.flags = 138U;
    msg.last_error.assign("DHXQZOEJFSVYYNXTIEXTIIRAWKPVOUAIMWRQTLDDBFMLOCMKDRNHPYADYEQGLUWGUVZJFRCZADAGEZPNXPNUBREWEVNSTJSLVBAEKMRXPHZQUJZRXTEHUKQX");
    msg.last_error_time = 0.7609512731700067;

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
    msg.setTimeStamp(0.7914442497907972);
    msg.setSource(18734U);
    msg.setSourceEntity(3U);
    msg.setDestination(4323U);
    msg.setDestinationEntity(155U);
    msg.type = 32U;
    msg.request_id = 16494U;
    msg.command = 157U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 10756U;
    tmp_msg_0.lat = 0.6665226931170475;
    tmp_msg_0.lon = 0.8090164350384006;
    tmp_msg_0.z = 0.33660935484471644;
    tmp_msg_0.z_units = 215U;
    tmp_msg_0.speed = 0.9881996852557133;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.custom.assign("SARMQNMWGUYABLVYKBCSKRMZOAKYHQJSBOYDPFYEZTMLJELSWPTKYXMIGFHIALBLDQKVVIEARNCRNGKZWNKESBPFOCUDVGQOIBSIGWWAFFDQRJTXEEVVATSJJSNHMXDPOWQDJFWAZGXLPYFURYBFGETTMQQUNCCGZMXQENXPPIXFLECICDAH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33869U;
    msg.info.assign("TXMGIFFKWFNMSKKVDMERXCEXUIJHWPDGSNUGUCAHUDLPXATDNOKQGJASGUDOMLABXFCBMAJRFFKWWNALPQTZWRIQJEAO");

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
    msg.setTimeStamp(0.6509441898269782);
    msg.setSource(52271U);
    msg.setSourceEntity(14U);
    msg.setDestination(9378U);
    msg.setDestinationEntity(180U);
    msg.type = 132U;
    msg.request_id = 26072U;
    msg.command = 104U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 15947U;
    tmp_msg_0.custom.assign("DIFDMMPCXPAIWHLAYABZRVICGACJZDXUCLFUKRWYTGDMJQITRPSLYRFANGOKUBXNLWCFYPRRXCWPTOZBSFFDEJEXKESBTBMTEAUKHXTADNUZNDGTBPLBZMJFGHCVEIDWKNEQYUFFYYUMFVHQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31261U;
    msg.info.assign("PJWBLLQZHXYWCMIYNWGDYJIHFXLVHOMIZQXHXCUEVXSIRUDHNAJUNEB");

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
    msg.setTimeStamp(0.6062177733784798);
    msg.setSource(40302U);
    msg.setSourceEntity(2U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(142U);
    msg.type = 229U;
    msg.request_id = 20687U;
    msg.command = 199U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 3172U;
    tmp_msg_0.lat = 0.9154513553451115;
    tmp_msg_0.lon = 0.22323299802626984;
    tmp_msg_0.z = 0.5007751142831703;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.speed = 0.09211723717737441;
    tmp_msg_0.speed_units = 45U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8401196668247966;
    tmp_tmp_msg_0_0.y = 0.3893304086772601;
    tmp_tmp_msg_0_0.z = 0.21989335977789437;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LGUZXSLPRHZGJEKAXMDBDIQEQEBPUSTLSRGWSVWIRTRTGFFWRUJHFMBWNDHEXCOYLXIRUYGJHORSEURPLXNNPGXWIEBEIKNFQPCHYKYMLNJHNIXROQNEZQGJCDAAKBXSMVROTJAPKTUNJINMBBMAFVVDXDTKQCBAHZKLYUOKKHAPUOYYQFDVCFPSMFEWYFCZTGVTYTIMQJWGWWZOMBQOONVUAVOPIQHJYPHC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19209U;
    msg.info.assign("TGCQBNMJVUOLLVNWYMIJTNSOAWBVUTTHJASGCIJILEFMYCBXCPWRJJQZSPZYDYMUKSUAZGTFDDHFUODFFZCKCLSWRFHWUYVRUCKGXOKSSHYDORBLPQCPMQYAOREAWLXRUEGPEJHGBMTVGRMTRXBXFNJXOJIHEAPZGPQBPNVRXKSPUCGEYZIHDVONVIEANMDAHCOABHMMVILILQQNBQDQBZWKIZEYNUPKXWWHYIV");

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
    msg.setTimeStamp(0.24849895807757572);
    msg.setSource(46001U);
    msg.setSourceEntity(2U);
    msg.setDestination(34947U);
    msg.setDestinationEntity(150U);
    msg.command = 241U;
    msg.entities.assign("ANNWOPYWGVLIPSKVSNEZTPGQUCMQNNTOYYNVSWLLTZVXPDQDMPPRGKQXWOAZVTKTXXWSFAMHHRDJIEBNHLBAKZUISCBQCSWOUZDJXBVORCDMUDAKZQXHQGGHWJKWVS");

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
    msg.setTimeStamp(0.9458578642320147);
    msg.setSource(15197U);
    msg.setSourceEntity(91U);
    msg.setDestination(36234U);
    msg.setDestinationEntity(171U);
    msg.command = 120U;
    msg.entities.assign("JFNENWZEBQSD");

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
    msg.setTimeStamp(0.023613694607028002);
    msg.setSource(58335U);
    msg.setSourceEntity(134U);
    msg.setDestination(506U);
    msg.setDestinationEntity(177U);
    msg.command = 152U;
    msg.entities.assign("QTMRCEOUSUMNMRRCRPZQWOPFXWHBKEFMKFHQOHAJQNKWLQRGOZWPUBLJLTJGXDHEEVIFAABYBDMDNFJBHVYCKLTUHPXBDXVTNTDXIYVWVMEPLKSAYABGWHGQCTXLAW");

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
    msg.setTimeStamp(0.6219291417945486);
    msg.setSource(3951U);
    msg.setSourceEntity(250U);
    msg.setDestination(47143U);
    msg.setDestinationEntity(41U);
    msg.mcount = 32U;
    msg.mnames.assign("CQLKECIPBLLCQFEYEVHTXQZILATYZEYWWBJMIYOKQUJXFMESBAOKSESJNCAHVXXAYGTKCIGMODCLIQUYWNBWIJNBPEHIDSDPSNWAPZGUQPYSPAMJHGODDQJFVIDUDGRZYVBAEEZSLLLOIRMH");
    msg.ecount = 42U;
    msg.enames.assign("GBXTQFPSCELFMMGHQTMGXPRPJPVTRITNITKVFXSUEOEIKEAJBIOUPQVXHHCNRKHDCWINZIVRGRJRAOWKKOELRZZJMRMMOSHCJZMQUGEYLTZOLQNTSAEWYTVXDPIQPWORHLWEGUNSFDRANXZYLIZVSJWFJDYYCJINYSBABZLMFBASSMSKFHQZVLDDCWDDNBPHJZYACUBTXYVFQWHONALUFNDOBTGDKBWQUVX");
    msg.ccount = 187U;
    msg.cnames.assign("HAKFOBYJLKLQXTWKEBCAIXDPICSNHBXDVJKMOSJEBYRMTXHCVUSBQVRDAXGNYTCLBNNEJATWSYODTEZUYOFCWFWIVPBTMJVQMGJKFQLGRGEMNCSCHUBAHOGSAMTAXCUWJR");
    msg.last_error.assign("DUHTWBSBWXJKLLFTWFMUAPIBHOYSELFMLCXWZU");
    msg.last_error_time = 0.20204066883614713;

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
    msg.setTimeStamp(0.8866406323998322);
    msg.setSource(14922U);
    msg.setSourceEntity(175U);
    msg.setDestination(14949U);
    msg.setDestinationEntity(168U);
    msg.mcount = 214U;
    msg.mnames.assign("YZINKSMZXUBLZRQDAMTCWGINFLPWYGGXAJUBGZVOOJIPBFLRAICWWZZOTLHMMJPXQAVEVCXHNULLXPJZHMCENLTPVIQCWFMBMKVURLDZORWFWCFHVGDSISWYYHCQFODRAUOEBGDHDVOKORXBTGTHDJRB");
    msg.ecount = 205U;
    msg.enames.assign("ZAKDPCOYOUNITQGDFYZEABGAHTQHGBUYPRKMQBGHZMIALGEKGFRVGMSJVGDNCKSZLXZHUFFICYEJSPWPJENCRKAVMYOFOCCLVNRRMWXLQUOIAYYFKXZXSEUMRIERTGPBCHXFJPBASNHJJWVDZUQPPRYXROWTJUQLSZNDMQKYNXJMCWIWLZTAXW");
    msg.ccount = 103U;
    msg.cnames.assign("FYNGITJBVSUQWXNHOCKPKIZGLORTDAVPQIAOJZCLEWFBBJTJSUOWYALTCIBCFOQEDHTYJEAYSUNUVNLVZMLAISUPPYTPGXFWRJVNDGGOMCNDIWHSPVFMSVMEMYSWXWBQXFKCKYFZIZANZPQIFQNIHZRHMLLEBOFDVNETUAHCOBEHQUKPUVQMTK");
    msg.last_error.assign("BKVMOAFQVLHCBEJZVITMMITDAWLGVFTSXXMZAOWXGLGNIXUKXYBZCVHQZYQRNBHSDCSCTCQHXWOCELPHHRJSGHBDJPVGFYQRWTOUYFSCBZVYIKFIGNAROMNGUYQFTPZRZXOLFASPEJJBQTNNJFODCJWRAOMRNHFKDZDSKKPMHYLQUKYEEDWNJWUDPEPVPYJWQTPWLRIGSCAFUASZLHEXUGAEOTKDPIJR");
    msg.last_error_time = 0.4515622356496123;

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
    msg.setTimeStamp(0.12147140351961228);
    msg.setSource(50336U);
    msg.setSourceEntity(172U);
    msg.setDestination(17692U);
    msg.setDestinationEntity(211U);
    msg.mcount = 205U;
    msg.mnames.assign("MISVKKWWUKINGEOMYFDYFQEHQSRNOULPKGTOJZAPAJBQFCTRVNPUMWLNIMTCRGJQIUNMWOGWMXSDVKSEKPFKLYLZQESMJNPCACZL");
    msg.ecount = 131U;
    msg.enames.assign("XAJSKSSHBOMODRZGHIBWTLZXEVBOZZDVFCYSWCJCHTTUQBBQVEZFGNFBXRZZAAGYTGDMJHFJPWANVODJKOLUVUXPFELOYUEMHBECMGRPPPVQJBEMDNRWFSUH");
    msg.ccount = 9U;
    msg.cnames.assign("JIPUMHFSPGVOFJXFLEVTYBQDYJJONNOTMOZFRRBARWBCTHQWATZXZWPQXDNOOFZTRILJEQEYBKGODIIPNSPWWRICEKVAQYRRITMDRQYJAZSBWGCUVMCVMANVMYW");
    msg.last_error.assign("AKBCQFIRHJLKRCMKGEMLNMUSFLFGRNDGISDQBWKLFCUTWPEDOXAWDCXFAEVQWGWDGAVZTPAVFZMOHJNWNXWOJKZOGXGSLSAVZTECZZULPPVYLOIQX");
    msg.last_error_time = 0.42491881558917466;

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
    msg.setTimeStamp(0.5229222069660919);
    msg.setSource(16367U);
    msg.setSourceEntity(171U);
    msg.setDestination(60848U);
    msg.setDestinationEntity(227U);
    msg.mask = 203U;
    msg.max_depth = 0.9899970442713261;
    msg.min_altitude = 0.26725141416345455;
    msg.max_altitude = 0.9790480449860691;
    msg.min_speed = 0.6821540860723795;
    msg.max_speed = 0.7479619818066622;
    msg.max_vrate = 0.19309240242588122;
    msg.lat = 0.2785514255952466;
    msg.lon = 0.5114527362854366;
    msg.orientation = 0.28386522757831545;
    msg.width = 0.07429026737174449;
    msg.length = 0.17360032646561052;

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
    msg.setTimeStamp(0.965980462061715);
    msg.setSource(2821U);
    msg.setSourceEntity(79U);
    msg.setDestination(4530U);
    msg.setDestinationEntity(60U);
    msg.mask = 201U;
    msg.max_depth = 0.6051563156346518;
    msg.min_altitude = 0.9328644887891874;
    msg.max_altitude = 0.0007505554855795626;
    msg.min_speed = 0.34378786361159164;
    msg.max_speed = 0.22707786370865302;
    msg.max_vrate = 0.2105200956926676;
    msg.lat = 0.9242982309401109;
    msg.lon = 0.8088026163788565;
    msg.orientation = 0.0868821797662852;
    msg.width = 0.04958278712837583;
    msg.length = 0.6532295053196733;

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
    msg.setTimeStamp(0.00808462345700689);
    msg.setSource(38035U);
    msg.setSourceEntity(211U);
    msg.setDestination(34169U);
    msg.setDestinationEntity(184U);
    msg.mask = 26U;
    msg.max_depth = 0.42404981571317635;
    msg.min_altitude = 0.898012153239995;
    msg.max_altitude = 0.0007656247811124173;
    msg.min_speed = 0.6222078640040689;
    msg.max_speed = 0.9855595012004045;
    msg.max_vrate = 0.5204768414530457;
    msg.lat = 0.5611982319346377;
    msg.lon = 0.37510834043985564;
    msg.orientation = 0.6152270939419046;
    msg.width = 0.6869986849315592;
    msg.length = 0.751199429775697;

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
    msg.setTimeStamp(0.36074458969620304);
    msg.setSource(42783U);
    msg.setSourceEntity(118U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.13703646360735622);
    msg.setSource(17544U);
    msg.setSourceEntity(63U);
    msg.setDestination(23226U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.9820541394908072);
    msg.setSource(58112U);
    msg.setSourceEntity(85U);
    msg.setDestination(7758U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.6528502599345948);
    msg.setSource(45461U);
    msg.setSourceEntity(212U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(112U);
    msg.duration = 10115U;

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
    msg.setTimeStamp(0.2637007641170064);
    msg.setSource(24810U);
    msg.setSourceEntity(63U);
    msg.setDestination(60566U);
    msg.setDestinationEntity(200U);
    msg.duration = 20254U;

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
    msg.setTimeStamp(0.2571825615728941);
    msg.setSource(952U);
    msg.setSourceEntity(18U);
    msg.setDestination(12006U);
    msg.setDestinationEntity(124U);
    msg.duration = 2350U;

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
    msg.setTimeStamp(0.6399978552102233);
    msg.setSource(12113U);
    msg.setSourceEntity(114U);
    msg.setDestination(19584U);
    msg.setDestinationEntity(206U);
    msg.enable = 172U;
    msg.mask = 1072022853U;
    msg.scope_ref = 883834658U;

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
    msg.setTimeStamp(0.31799584599892494);
    msg.setSource(64702U);
    msg.setSourceEntity(7U);
    msg.setDestination(19142U);
    msg.setDestinationEntity(10U);
    msg.enable = 38U;
    msg.mask = 2843450793U;
    msg.scope_ref = 3459891637U;

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
    msg.setTimeStamp(0.3941378555280942);
    msg.setSource(60899U);
    msg.setSourceEntity(236U);
    msg.setDestination(7040U);
    msg.setDestinationEntity(93U);
    msg.enable = 70U;
    msg.mask = 1513539018U;
    msg.scope_ref = 411158289U;

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
    msg.setTimeStamp(0.10366180175106432);
    msg.setSource(26453U);
    msg.setSourceEntity(52U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(74U);
    msg.medium = 29U;

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
    msg.setTimeStamp(0.9745776218681912);
    msg.setSource(3852U);
    msg.setSourceEntity(157U);
    msg.setDestination(50603U);
    msg.setDestinationEntity(129U);
    msg.medium = 154U;

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
    msg.setTimeStamp(0.47582043950027864);
    msg.setSource(19223U);
    msg.setSourceEntity(131U);
    msg.setDestination(62311U);
    msg.setDestinationEntity(83U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.8310755029416755);
    msg.setSource(39782U);
    msg.setSourceEntity(52U);
    msg.setDestination(12686U);
    msg.setDestinationEntity(82U);
    msg.value = 0.2720443927645;
    msg.type = 154U;

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
    msg.setTimeStamp(0.5834638383902585);
    msg.setSource(5020U);
    msg.setSourceEntity(162U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(183U);
    msg.value = 0.7069428459517644;
    msg.type = 136U;

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
    msg.setTimeStamp(0.9147730397046163);
    msg.setSource(10435U);
    msg.setSourceEntity(208U);
    msg.setDestination(10261U);
    msg.setDestinationEntity(240U);
    msg.value = 0.22648179233139565;
    msg.type = 175U;

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
    msg.setTimeStamp(0.5070083247574281);
    msg.setSource(52149U);
    msg.setSourceEntity(165U);
    msg.setDestination(64883U);
    msg.setDestinationEntity(161U);
    msg.possimerr = 0.06031300717053811;
    msg.converg = 0.281661192932917;
    msg.turbulence = 0.007129887396586154;
    msg.possimmon = 148U;
    msg.commmon = 66U;
    msg.convergmon = 164U;

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
    msg.setTimeStamp(0.5279220668810712);
    msg.setSource(9936U);
    msg.setSourceEntity(208U);
    msg.setDestination(24127U);
    msg.setDestinationEntity(84U);
    msg.possimerr = 0.7715085896693085;
    msg.converg = 0.8375103752866618;
    msg.turbulence = 0.2978816467935994;
    msg.possimmon = 189U;
    msg.commmon = 42U;
    msg.convergmon = 84U;

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
    msg.setTimeStamp(0.4507463608998915);
    msg.setSource(26949U);
    msg.setSourceEntity(221U);
    msg.setDestination(2963U);
    msg.setDestinationEntity(105U);
    msg.possimerr = 0.8247891436652266;
    msg.converg = 0.9191152080342928;
    msg.turbulence = 0.4915265478781632;
    msg.possimmon = 145U;
    msg.commmon = 173U;
    msg.convergmon = 197U;

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
    msg.setTimeStamp(0.08519209653656268);
    msg.setSource(1334U);
    msg.setSourceEntity(213U);
    msg.setDestination(51859U);
    msg.setDestinationEntity(195U);
    msg.autonomy = 25U;
    msg.mode.assign("TNGNPBCSJCGDXRWCAFKVEZJIWIOAODUCYLMNHXJRKCPZVEJAFDTQCQSSFUAVLNUHMQJILKKGPP");

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
    msg.setTimeStamp(0.8028597294310923);
    msg.setSource(57271U);
    msg.setSourceEntity(193U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(5U);
    msg.autonomy = 53U;
    msg.mode.assign("WPOATVXYTXULFTMMGHFMHXTESLMRUGZYGEJRUNYVNREBZFDYOIEHMCLPNQRIRSBBPNXTBDALICCKLPYZAYVEQWXMZJMXZOKVWQWJPTGZKDSUBFLAGQEXOLNMNQEVBNNJMLAVSPOSYBHUDXCCILFTKGFVUDPRFJIGPBUONUKZKAAHRAJAZHBNSXBQYKGEOGFJXPWREOVHGQDTDSHFVQWDSCIJDYWSKCZTWUYIR");

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
    msg.setTimeStamp(0.08228150935092404);
    msg.setSource(4718U);
    msg.setSourceEntity(72U);
    msg.setDestination(4337U);
    msg.setDestinationEntity(199U);
    msg.autonomy = 159U;
    msg.mode.assign("TGFMANZARFZPETHMVOERLLEHOYHPSJJCLUDQBUCEIQSMYVWUEXVFLBDFRYV");

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
    msg.setTimeStamp(0.6096510269181367);
    msg.setSource(15198U);
    msg.setSourceEntity(148U);
    msg.setDestination(59299U);
    msg.setDestinationEntity(224U);
    msg.type = 105U;
    msg.op = 246U;
    msg.possimerr = 0.9032032205511416;
    msg.converg = 0.8596052269536064;
    msg.turbulence = 0.4623341012598664;
    msg.possimmon = 49U;
    msg.commmon = 196U;
    msg.convergmon = 154U;

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
    msg.setTimeStamp(0.3494792707391582);
    msg.setSource(46413U);
    msg.setSourceEntity(211U);
    msg.setDestination(23724U);
    msg.setDestinationEntity(42U);
    msg.type = 192U;
    msg.op = 203U;
    msg.possimerr = 0.06976910037101614;
    msg.converg = 0.7908872133221083;
    msg.turbulence = 0.2909394351467067;
    msg.possimmon = 145U;
    msg.commmon = 149U;
    msg.convergmon = 102U;

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
    msg.setTimeStamp(0.90910457249953);
    msg.setSource(12116U);
    msg.setSourceEntity(240U);
    msg.setDestination(61153U);
    msg.setDestinationEntity(174U);
    msg.type = 200U;
    msg.op = 51U;
    msg.possimerr = 0.910249061581421;
    msg.converg = 0.35537577086602057;
    msg.turbulence = 0.7530510881247009;
    msg.possimmon = 54U;
    msg.commmon = 245U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.8343464842920393);
    msg.setSource(27023U);
    msg.setSourceEntity(132U);
    msg.setDestination(12839U);
    msg.setDestinationEntity(210U);
    msg.op = 169U;
    msg.interface = 173U;
    msg.period = 10596U;
    msg.dst.assign("VQZIFQZSOFTSOERMFASAIAPACYNZKWYHFJSDBAJNBDYRGAEYHOGJMQPKLVXTCDBTKFUZZRVUEIGO");

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
    msg.setTimeStamp(0.5209209825117033);
    msg.setSource(65071U);
    msg.setSourceEntity(209U);
    msg.setDestination(4252U);
    msg.setDestinationEntity(59U);
    msg.op = 86U;
    msg.interface = 251U;
    msg.period = 37177U;
    msg.dst.assign("GOSOXGOTXLHDWJANDSFGSHXZAQFXOBOOTWXKPYVPWNUYAPDRJRRUIMZNFSIWBBIRMLNLZZNCTYBIZBEC");

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
    msg.setTimeStamp(0.7641990370348777);
    msg.setSource(54472U);
    msg.setSourceEntity(188U);
    msg.setDestination(32862U);
    msg.setDestinationEntity(23U);
    msg.op = 105U;
    msg.interface = 210U;
    msg.period = 57670U;
    msg.dst.assign("EOUORHRAKYDYADFZSQPPCGTDNNKSNNMJHAFQJATVZHXIKSEGSUOATSWESKOGDQVKMNIBAWRUAAGZUIKVIMXWOZGMQWBZBSDCFIWUJWETRCQGGMYXPLBOOHXGWXRPNYFELFBMOCJZPSZUBNDRCKRCHBVBYVYTEDOYDRQBIKLVXHLOW");

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
    msg.setTimeStamp(0.5322852914304971);
    msg.setSource(18202U);
    msg.setSourceEntity(188U);
    msg.setDestination(599U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.32461734445229795);
    msg.setSource(43503U);
    msg.setSourceEntity(22U);
    msg.setDestination(61539U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.232135194688328);
    msg.setSource(8638U);
    msg.setSourceEntity(91U);
    msg.setDestination(19900U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.02969815680923449);
    msg.setSource(42425U);
    msg.setSourceEntity(37U);
    msg.setDestination(11601U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("PRTCHVWZZIXENGEOUORMPWIAGKFPIHAAHXYDSNFWVQUXRVSYSWTGBTVZNCCODBNJA");
    msg.description.assign("RYFNELAWHBBKMFCOCMRUAUTKACSZFNJILXZDYMXIUKDKCBNMDFUQVMDXGUQQYVHZQXTSCRHLUHXTGOQBAORWILXYDJGSBEEBKBVWYTVXVOBKESTMSPLPGANGJEJJWVQHPTXPNANFMNRVCWKOUIYIPTRBYIDDRJSHPEZQXGJULGJZUDVOXWSVTQNOZLNBAEZVFFWCYNCPGRPZLRJIQIMOTWOCWCEKASZKTMLWOSIGKYGHHAPMUFJSEPAYFR");
    msg.vnamespace.assign("YYSFDMRWOOWLCAHCKWJCBSZOGCNISRQGRPHQCLVUIWFRUEUZSFKBKESPIMVQHQZABJIDBZPXBBMABMNHSEGJOVGWCNLRNPXUXIVVEPDJUACRKMERYLWHNCMZLVGVXABYZYTEOQGLJZFEMXDGITVTUWZGYQMUQEWNURCYQDLVKPGKFYOTNQSHNAZI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PXCTOYQYUXVJDHGOFXHOYPUIDFIGOHUSKXCAMPJILCHWJQVBUUDEBFITQVGSSKYDMZUQNAQSUGPOYTVNUUENYDNJLCIERGYDTYMLQHRHGMZWWTREHFCTLXCVSQRKVITKKZLBXMZROKEOFMFNWVMAYRBNWLHKOZPJEDOTVSXRCKWYWLSJISESCJGIGAS");
    tmp_msg_0.value.assign("MJQGKZYKCJWZJDDHNCBGNTVBBYGELJESVYGUIDHQFMYQYMKLWKVEPDVFSRIDONSHCQJSTNMWRZMKOUXYUMLKBNCKTMPXLQEA");
    tmp_msg_0.type = 75U;
    tmp_msg_0.access = 213U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CXSEAKLTPXHZFVUPMBQOTPZUMBZHKKCJDQEGJDBFJTWKSGBEENCRAEDYQLGSIFGVOAMTTAQCBULBXNGWISOHYYWAZBCNQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BGBPJSSBMOMNHXAQFTNUEJENJRJEPERZWIYEBBTOTADEQKZDMODPWVHQADCLSMMJHCFWXJNOIHKIHDKATFCSUFHRLCWOGIABHFQGPJEGVQPLVNTCJANKLUPWGSBVJAMNYXQXIFYMMXIWLFTPNSDATRFHPXSWUXBVGEEQIZKWOYVZIOTSKCV");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.6985359426955681;
    tmp_tmp_msg_1_0.lon = 0.42367264933552473;
    tmp_tmp_msg_1_0.z = 0.16273648950093744;
    tmp_tmp_msg_1_0.z_units = 57U;
    tmp_tmp_msg_1_0.speed = 0.06441863682329452;
    tmp_tmp_msg_1_0.speed_units = 23U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.27631457122743175;
    tmp_tmp_tmp_msg_1_0_0.y = 0.3723089672920026;
    tmp_tmp_tmp_msg_1_0_0.z = 0.14643010107284027;
    tmp_tmp_tmp_msg_1_0_0.t = 0.9706874674811953;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.vid = 51301U;
    tmp_tmp_tmp_msg_1_0_1.off_x = 0.8631534827220467;
    tmp_tmp_tmp_msg_1_0_1.off_y = 0.9405926194641008;
    tmp_tmp_tmp_msg_1_0_1.off_z = 0.46592099271313236;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_1);
    tmp_tmp_msg_1_0.start_time = 0.5709923888439264;
    tmp_tmp_msg_1_0.custom.assign("QWDEOPYUTPFKPSDIYGSMBLTGWVNBGAMFMGAYYDRKANRLNGPPVBHMNDCWEXSCOSOKNIZXSUWNCIEBZJLQXYRAFJSNCKXTBTJEHNZSBTIOVHBGFJRQMJWBAHHQKIAHDVJOMFQQFYZTLGOPKKYVXZIRYMEOWOJLKDXUWOSCLFCPZQCETHUXTPRZZABUIUXXDLWWVARZN");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FormationControlParams tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.action = 117U;
    tmp_tmp_msg_1_1.lon_gain = 0.7156503813004587;
    tmp_tmp_msg_1_1.lat_gain = 0.362841438486904;
    tmp_tmp_msg_1_1.bond_thick = 0.7609280524063127;
    tmp_tmp_msg_1_1.lead_gain = 0.6244718621407678;
    tmp_tmp_msg_1_1.deconfl_gain = 0.9536412410785814;
    tmp_tmp_msg_1_1.accel_switch_gain = 0.5822643183711791;
    tmp_tmp_msg_1_1.safe_dist = 0.04810610129789383;
    tmp_tmp_msg_1_1.deconflict_offset = 0.03116904248531005;
    tmp_tmp_msg_1_1.accel_safe_margin = 0.5604073982400759;
    tmp_tmp_msg_1_1.accel_lim_x = 0.30746142358052986;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SBVBUNKOGIVTBWNEOGWYGXNCXMSHICSLSMJVPNUYSEHXVDXSYZFIDUJQARDEXFPMKQMDFPZAVYMZELKXSCVPBHEEAUAWZDJCPQKLEZVCCKNCIILXOBHQOZW");
    tmp_msg_2.dest_man.assign("NLNIZLEHOZBTYFYVOUFAFHDSUZEVVEGOWXISOCQUNLFTNWRAYYXJZSYBXFCUJBMPHWBSWLKEAWGZEVXQZVBJSDCIECQXCGXYIGQNULJRLPPGVKTOFPNYKXWMYDRQLVHXTRMMAKFLBSTORSAFNRHJWANYXMWWCGQAICNUQKBJTDMUVPRGPZDRIKSUIIDH");
    tmp_msg_2.conditions.assign("SEZGJGXKLVHLEWQPSNVRQGPIAIYIQQZIJLBMJFUDCRKMKPFXJVTXFDZHSMBTEUSOCPSEWNSMTLDFHSAYFROZWBROGCWHSRNRDGJHMNCIHAHBNRKXRZAMVTQGUZR");
    IMC::SetServoPosition tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 153U;
    tmp_tmp_msg_2_0.value = 0.1473255977145801;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::AngularVelocity tmp_msg_3;
    tmp_msg_3.time = 0.8997191188815469;
    tmp_msg_3.x = 0.11468366585307621;
    tmp_msg_3.y = 0.8137853723242009;
    tmp_msg_3.z = 0.04104208650525987;
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
    msg.setTimeStamp(0.9266975590609223);
    msg.setSource(16965U);
    msg.setSourceEntity(87U);
    msg.setDestination(1101U);
    msg.setDestinationEntity(155U);
    msg.plan_id.assign("GEZBRVEOZWPSJJOMYXFLPGYQMOWQVAAJBZVKCENVNWOWHURKTENVBBZFZTKFRRKVWNHUDCQYZIXTUFSPAYXY");
    msg.description.assign("ZOTKXBHMTGJMXLFACVTDLNWRFCUYCPOMFHNFKBJHXDIELN");
    msg.vnamespace.assign("XJAFGGTKJNWNJGMFKBHQALHESEZHGOAROXFRUCBXDMQWOQOEGXCQVRPFFPHLYVZNBQGLSTIWXRKOMBURQMIEZCIAWTPQOVXARIKGKMMCUHJDEFIHASJA");
    msg.start_man_id.assign("FTPQZORYUXNRFVWOYPVHDMKDGGTNTBKGXFV");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 201U;
    tmp_msg_0.goal_id.assign("SOQLTGVPEUORWUIESNAMMIWRJUKLGNIQDNIGNPJGZFJVTVXGKROEODSKJAYBDJBUMSYDYZG");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("MVJYJFXDUOIYNJJKUTMATSUQBZLTYSQGXYZRSDFFUOIHUSGCMUMMIBGUAHVLSVZUEQOTBYHRKALMAICKDFRZGWRZKRNYFMAQZTBQUNHVZSRRBKXZIOGGETH");
    tmp_tmp_msg_0_0.predicate.assign("SLAATZSXZKZSRDHBCZLRLSJZMV");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("DDCUFTZTES");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 139U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("FZYXUPHVABBISVLKBUUKYHEVPHGWYERGKFXAOUIDHXVJLLIKQAQSFATTSPUAJETEYCXJJUWAQGPBCUXHWFIHJCPYLRKJX");
    tmp_tmp_tmp_msg_0_0_0.max.assign("TUTNKQYIFRHEPESCGOTDVRNHIKLXMDCHAZABJDMHJCDDMEQMVTTJHGJUIUIYSOENCWJBXJOPPOSTLKHWRUNPEBUXLJYIALVWHTQKVCZQYUCBKDNEMFYDHDWPMYVWBOAWFEVHBXCZJNWGOKIMRLBJXGWYKRMFXFOMO");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5958042249794252);
    msg.setSource(62367U);
    msg.setSourceEntity(126U);
    msg.setDestination(4141U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("JQTEDIEUEMMITXDKOLKZTQYUUUMYFZZIFJOIDKUXP");
    msg.description.assign("OHDLUHMASLUEUOBCFFNDCBHYKWGGVHHSBNFDQDUNAATJEONDIEBRYQUXTJKMRIPSFIPEDZGXABVACMMJOKUJWPAOFYJEGUPHNNJQWIXGUQZNKMRQSNSGHPRDSPTDFLWUEMAYCVAKFBJYYTVZRPIWMTGLBXSOITZLFWLOLZJLMUZTNVEKNZXBRXE");
    msg.vnamespace.assign("LAOLKGWKEVVGDWPLVR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ELVGXIFQACBJJJLUAKHBKITOKGNTGHEUPOSOQSDTGZDEAUZDYVHW");
    tmp_msg_0.value.assign("PLPCUCFFMIXK");
    tmp_msg_0.type = 11U;
    tmp_msg_0.access = 192U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CNULXMXVUPDBEEDZBPUHURJBRVMJEIFNFLMKGCXSBEAGSEIQHOXIHOTHKNJFFYSEMSJKXHTB");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JDAEKIWTXCWMIKJCVFCATXBONPFIQVRSYNVOKUGKFMBYUBUJOOSPQPOWFPHWOADTAHVNERAGJMLDCATRNFIWJLITZLFHZJHNYLHQXPOLNETZVIYTTDPUUFOUZDPMWKELUKVRMHBSDNAXQWGXZERYOMSSUGYDXSWNPQZVMEWOIZUBD");
    tmp_msg_1.dest_man.assign("JGSGUKEUHTHWCZXXLCVBBWDVVQOHQDXMZHKBYBJSRDPLTOCFXDBCCUMTUGZOIHCEUPLNSCWDGRJSKRNYYAAKFSBNLDUKNLZZIFVIWYXBVR");
    tmp_msg_1.conditions.assign("FEAOBHMWHRFTOPTROPPQXNNBAVUQYWAZBMFCIHXJIDEVALHZ");
    IMC::TeleoperationDone tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::LeakSimulation tmp_msg_2;
    tmp_msg_2.op = 16U;
    tmp_msg_2.entities.assign("UREOJQVYAGVUZMVMVLUFVFXTVICWPVBWFIBRUXILLGPRNQMZIHYMDLSKTUISBDAYJOOATAQWMFBSPKHNXXRHGPQDQCDJNCADWBRFDUJ");
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
    msg.setTimeStamp(0.1830496238964977);
    msg.setSource(61297U);
    msg.setSourceEntity(170U);
    msg.setDestination(9057U);
    msg.setDestinationEntity(32U);
    msg.maneuver_id.assign("XAZKDFJOGDIPNUXTQZPCVBPZNSNYRHNLSQVXDQDVKYOZERMHKAFUZIAPUGCYGBQLQABOEWFKITVTMIYWYDCTOHKNXQJ");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 29333U;
    tmp_msg_0.lat = 0.38143775989178497;
    tmp_msg_0.lon = 0.4291988690901528;
    tmp_msg_0.z = 0.721147967522284;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.pitch = 0.028163560534708476;
    tmp_msg_0.amplitude = 0.36526945046473935;
    tmp_msg_0.duration = 40516U;
    tmp_msg_0.speed = 0.14258946872544564;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.radius = 0.14035535216300254;
    tmp_msg_0.direction = 144U;
    tmp_msg_0.custom.assign("ESOBOQHYNHQMZEDEKOLULGFYTVCDXQQKTXHL");
    msg.data.set(tmp_msg_0);
    IMC::Phycoerythrin tmp_msg_1;
    tmp_msg_1.value = 0.07918859527884647;
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
    msg.setTimeStamp(0.9269552268884328);
    msg.setSource(20163U);
    msg.setSourceEntity(202U);
    msg.setDestination(19566U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("HMXEXTNDUBIASTIPNZKPKHGJDSYAHWLIHYZAZXESUFVORRBUXU");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 25108U;
    tmp_msg_0.lat = 0.7018706973301782;
    tmp_msg_0.lon = 0.6700904608093762;
    tmp_msg_0.z = 0.07345920438621334;
    tmp_msg_0.z_units = 143U;
    tmp_msg_0.speed = 0.5232010365062457;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.custom.assign("GLMPPGVYSPYUQJIATTIQUUSBOFZVEDKCRYJABNYMXRKBCKZCZNHHTWLUIWFPMKEADDDWMFHOSLIFRGUDDTJWGERJQGSEEKALYMUTUNUHCAKMOTLYXZNSNVITMDQAWFQLYOSPRBRQWELCIVPBEEPNVAZVXNHBAJJITHAFGCCZXQH");
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
    msg.setTimeStamp(0.7615702544683224);
    msg.setSource(29766U);
    msg.setSourceEntity(233U);
    msg.setDestination(52337U);
    msg.setDestinationEntity(130U);
    msg.maneuver_id.assign("CBGQOHBGMTVEQULLABJVHCLVXXTSWTAHJOZSYBWIOBGGOTLSIIADIYYKCLFPRPIHXWPQRXWNJTNJNHZPCYQJSRXWWSWKUDCNIAFPNYHENCYMJFFNKXEJEVURMAKRMSUTFVDOBMSEXZTIWYOFJBGSYVOKEAAOBEUZKKXYNIPLBAYLGMCKIDQSWDAUVTQFHJZSLXPJDQQIGUZNTNDQVQCCEZERBKPPHVUOEDLHUDVZGGFMUZMFR");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 40214U;
    tmp_msg_0.lat = 0.8139052267484963;
    tmp_msg_0.lon = 0.5467741853856941;
    tmp_msg_0.z = 0.23688082266437482;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.speed = 0.9862237925263254;
    tmp_msg_0.speed_units = 37U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9026503266122912;
    tmp_tmp_msg_0_0.y = 0.4184859650897166;
    tmp_tmp_msg_0_0.z = 0.7817360007441527;
    tmp_tmp_msg_0_0.t = 0.3476928484906474;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KOERXFFDOVOFXSEYIGLMNEPVRVPSGYUBEWKVFYWIBXPDBPUBITWPEHCVCGNFJQENCRMAGBSQKNLGIUTVDRXRAKFSAHSPROWHLAVYJAJWCQHYJAYDVBHLEZMMGSNACTNBTHSGHJDPJMODYNILZOAOELSNJWMBUFHKSXROSZUWJTGMPILCIDCDZRYFLDQWEXLQNEUUZRTRKAQUKITYZQJVJYZWGBCHPOTCXMTF");
    msg.data.set(tmp_msg_0);
    IMC::NeptusBlob tmp_msg_1;
    tmp_msg_1.content_type.assign("NFBAIAXZZGKNPLSCBLIHDEZRJQKDJCUUADHVCOCVTUFXEGMKHRXKAENRWYSJNQQOFSHWTXRJKKRFGDEXRSEFEIHYVOHZLYOSUJYTPPOXFD");
    const char tmp_tmp_msg_1_0[] = {33, 90, -121, 77, -77, -67, -90, 17, 1, -128, -92, -84, -50, 82, -105, 56, 84, -1, 91, -42, 90, -127, -104, -126, -9, 10, 39, 16, -58, -86, -123, 86, 21, 50, 46, 27, -60, 108, 108, -93, 17, -45, -92, -19, -45, 64, -94, -61, 117, -28, 34, -54, -29, 93, 124, -125, -26};
    tmp_msg_1.content.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.3027483123262289);
    msg.setSource(15849U);
    msg.setSourceEntity(23U);
    msg.setDestination(27125U);
    msg.setDestinationEntity(171U);
    msg.source_man.assign("RDBVTOUFHZXHOGRPUFQCWZPWKTNZDGQJYQMRWGQJULLIXVJADAKGRPJHGYCVZLNUHBRQVVSKSXQEKETFEXITEEDUBCTFZKNXIXMMHRGYEDBJWKIWAXI");
    msg.dest_man.assign("ZQUHXQDGVLBELDLEDMMXUCQMAEWSWIMNPDJPYNVLYYLURNOAKRPUMSFIPFNWTYJEAAZKSXNIWBTZFZAPKEHTVUTEMMCFSDCHRWSYFDOWPBQRMZEHAOAGRBAJETKPRVZLSDCXBKMUAIPTCINPKHXYKNSGDOOVMXTQUFZGYWOUDQGCZOQCXJJOBAERWNLJJWFTBVXVHRTKHRYOGUGHXKNWXGEQKYBSVBPLYCHJFRCILIOHLSIVFJVDQGCIZBI");
    msg.conditions.assign("DAZCMOXCPOUYVFSSHNNRLHCUIYRXBEGPZQGUJEVNRXHUAWBTAHIZYVLAQBECFCKTZTCYMJZTLKSDJZDQEPMFPOGJERUWMDFSXXHJDHIAWZQMELGGWCJXACKSJPWHEIIKAQKBYFLMKWDQXCRKNFYNORSPTQADQSDOEOBOYVXEZXBFFRTHNIVMWUZKMGPIVABLWPOJUYFULKISEBRJOWADU");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 142U;
    tmp_msg_0.tas2acc_pgain = 0.5916183866022765;
    tmp_msg_0.bank2p_pgain = 0.4759715467057921;
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
    msg.setTimeStamp(0.7389467964710661);
    msg.setSource(28169U);
    msg.setSourceEntity(199U);
    msg.setDestination(34082U);
    msg.setDestinationEntity(123U);
    msg.source_man.assign("IOURXKYGELFSBLIBABMQZEJLLZRCEPWEDCQDUKPNYULGNDBCGPJHKJCOZMASRE");
    msg.dest_man.assign("CPYQUTKTPTFUOPCEKXKUQPIACAMUHTVKQNQOICXZDITUIHEASVLBMXSKCWLJBAGZBJLJASBADYZN");
    msg.conditions.assign("PELFHBPFKJZMHLWLFKUTPSMNHTJDPCLYXTFQABBRRCDAVBESGHQVYICNZTAGMROJCYJHEJXANGNHXOLSUPZJZNOBWKCHURQEPGJGLJXEMADYASOFSKTEACIREXBQNUUCYTVGEGADDNSVRQWVQFIIAHMPNLXKMVNIPXZKZYQXOXWDYQPONITICMP");

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
    msg.setTimeStamp(0.05166898835940459);
    msg.setSource(61517U);
    msg.setSourceEntity(16U);
    msg.setDestination(1497U);
    msg.setDestinationEntity(9U);
    msg.source_man.assign("HUMDBKVHOYBISVDWDTKSGYHBVGUJEFBWSLAYYLTE");
    msg.dest_man.assign("OTRSEPXBVXGJPIQEJEAMLNIIABJMHUXFRSWGUQDAQZQYETAYZBORTYGWFKF");
    msg.conditions.assign("DNPPLHCXFPQOSZSORBMLLLXZWAKDZFZRPQJEBAZEKGVXHOTFRFLFXSVTNKMVVWADGGEJTBLICPAVYORRHWJNQYOHROYLPEUDJRHBVKTSOEIQGMUMTYMFGCQEWQIOQNTLEBUONAAZEMINCIMYUYBVAPGCDQQJWUGMLDJNVTSKKXKCROIYCILAFJHRTVSHFSGZGYFAASBTMIWTNIN");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 32U;
    tmp_msg_0.frag_number = 1U;
    tmp_msg_0.num_frags = 184U;
    const char tmp_tmp_msg_0_0[] = {-48, -127, 70, -1, 28, 39, 114, 65, 108, -74, -35, -20, -69, 24, -18, -54, 67, 78, -49, 84, -36, 99, -88, 97, 102, 21, -9, 103, 40, -87, 12, 82, 122, -69, 99, 113, 14, 57, -92, 80, -107, 29, 20, -91, 124, -18, -97, -51, 20, 65, -51, -55, -22, 79, -95, -117, -118, -2, 11, 0, 2, -44, 104, 16, 87, 124, -16, -93, -91, -105, -78, 80, -30, -80, -107, -48, 17, -99, -14, 77, -108, 27, -24, -128, 67, 1, -42, 81, -93, -23, 57, 90, -49, 52};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.49243914268756106);
    msg.setSource(62013U);
    msg.setSourceEntity(102U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(48U);
    msg.command = 49U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("INTSYCWVHWARUJZFLLHHXUUZCICGBGEMSXSWWVTJXCVSUMCQJEFZLBPCPQKWECPHTWTJEOHSLHAXWDUFAVQWRZTSFMVRIKJOMDEDOPIYQMAKOUIKLQGLBKZVUIADSRAJNMTCBQNHDVUOVTZYZJFXPSPAZNPXEUROGNLNWYLFNYHZVQGEAFRBGYGOKENDFXREPGYEBLYAGJRCMIDCIHZTFBTDKIMYOPDQTGAXOBDNRJKU");
    tmp_msg_0.description.assign("OHGJYLIBTNXCLTQTBFKYGDVUUOTJINZYEKXTJHIYWDUQICBDPJQZXFRTMVNIIMWXVIRBYAVKPHQQGSONXSESKFAFHVXEZZTXBQJZWZLNEIGCEKDPPBNMYHKBRUOPMMANJWPTEZSFCWTRCXARRQGVUFIVRERTKHCKVHXECASJPPPDBCUZRGBDWMMYHKSSJYOOQEMHZCLNAWQGMLNUFCAUDWFBQUUYIPLLASOJXKDAFFVWYSVWRMHAZDNOOL");
    tmp_msg_0.vnamespace.assign("SLMOLFIWWCNQNTLAXWMAPBIWVCAYLWNQXFIMEHTTZJRIJRJRDTUYTOFCIZTIDGIFEWNJJVGLSCNLKGQHPARTWAHVPPBYOPBSXKOEPVKPQZEDYGTNBUGDMEKHCREZDAKQOZJQBHUTNMDNYVJZLHPZFUYLRUADVOPWUXFAVZENUUHRDBKSSDGCGCBCRF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ENOCTQJORMTXTIOOQCTJFGWTVBJSSDNCJAWFCDEDBFDSPKEDKGURZHGSLBSHYMBIVQRBGMAXYBCIAEJDMLGFUIRMQCSJEOCONQNBUNXRRUXHMUBVRRIVLQAJRTVC");
    tmp_tmp_msg_0_0.value.assign("HOJSYSCVSBVUOZHBKSLENVFIJGTBPOFAKNHTFMXADVCDIMRD");
    tmp_tmp_msg_0_0.type = 57U;
    tmp_tmp_msg_0_0.access = 90U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MWJUWDTXQHYZEFRQDQCXTXJHGPFLHUEQEBHCNGUMIMAHZVLOEANXAOYBYFIXYFERZDBJMFWXWBSWYVCNSIVNJYCVOBMVMDYYFAUPMNVRSYMIQCAJUABBDHVZTUXDOOVRHWZPEKRPZGNWJOZTLKLGREIIWABTXGNPZPRGLFKJGVTJFAPLBCNLIEQSISDENBZOFHMTZGEASTQQKUXKKHKCSPSDGRTPKUAVUXQJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PGCCBHOHVFGGZORVQSLNLLXJYQSCHKPBONDQSUPXXJOBDYXTMYPENSXXJNWINERFRKWREMAGIQAHXCWKUVLJXMIZAVIREEUNMTDIVWGZBKLPUBJFMUKGOZPON");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 55889U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.47832858848642446;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0961931856400503;
    tmp_tmp_tmp_msg_0_1_0.z = 0.06485431676662679;
    tmp_tmp_tmp_msg_0_1_0.z_units = 252U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.8868348549490026;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.02009889270725529;
    tmp_tmp_tmp_msg_0_1_0.duration = 52228U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8210251302273406;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 139U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9533917950628306;
    tmp_tmp_tmp_msg_0_1_0.direction = 180U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GKQGWFAGQRQBLPGNBULRVHCVZJSEDGYIWUYKDECQBALSOTDZKWBLGPIDJYOXVVNIODZTKFQRXUDMXHJYAROCFSGNFSBCCHMYXHGNXIYFKTJEXMWIZR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::MagneticField tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.time = 0.6694218552784994;
    tmp_tmp_tmp_msg_0_1_1.x = 0.3200934680950891;
    tmp_tmp_tmp_msg_0_1_1.y = 0.46570680833354805;
    tmp_tmp_tmp_msg_0_1_1.z = 0.12108955556079393;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XIWTSKPNJHOAVVSKVTEMHDHBFUGPWBGXRGWHRTJKNAUUMRLMESZBJUFEEUOGQCIOQMMQSMYAVJWXPFZXTCHLFNYALRNQYJJRPWDSECKGAXXIMINAEUJOCDFYCFFRJUFBVOOEPLXIBQVVTVZBIEFXILJNUASONSDMZLDWNQHPUM");
    tmp_tmp_msg_0_2.dest_man.assign("PBKJKPEZNQWATULICJPDGXKASJDJBEAAXQIXOVAEFUDICALUJMNLHNDZTEGMWITOMHSNFLPYQEHAWXTIUHOLHZOTRDMYRPPPCCJMVDDKHBSJDKLPQTTRUMDUGRMVYPORNDTTBXLACMWSBGZUQCFFGJGKRNACHHIBWKZXUGQCCBYWWYVKSF");
    tmp_tmp_msg_0_2.conditions.assign("OQHAZAQYDJHNUPIFRNKWALRTXXNWVTLPFWOLEPFSBOGJGVYPGHKFJBUZMZUQCDCOGTPNFIDYMOXMMIGIFVOGZYHSBKQKLUQJOZKEDDLHJPIGLPIBVURCJTXKNEHRVEYWLMQNTXPVKAIUJNFTMMEP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::FormationMonitor tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.ax_cmd = 0.5247367413218089;
    tmp_tmp_msg_0_3.ay_cmd = 0.2789044093209829;
    tmp_tmp_msg_0_3.az_cmd = 0.9063097626713057;
    tmp_tmp_msg_0_3.ax_des = 0.20308010916019703;
    tmp_tmp_msg_0_3.ay_des = 0.03324418116533634;
    tmp_tmp_msg_0_3.az_des = 0.3061664723827229;
    tmp_tmp_msg_0_3.virt_err_x = 0.446817634822278;
    tmp_tmp_msg_0_3.virt_err_y = 0.7244364830595742;
    tmp_tmp_msg_0_3.virt_err_z = 0.10738538177957657;
    tmp_tmp_msg_0_3.surf_fdbk_x = 0.23319527532139883;
    tmp_tmp_msg_0_3.surf_fdbk_y = 0.08793412138111834;
    tmp_tmp_msg_0_3.surf_fdbk_z = 0.593464119570067;
    tmp_tmp_msg_0_3.surf_unkn_x = 0.6990894739420556;
    tmp_tmp_msg_0_3.surf_unkn_y = 0.8330575377816473;
    tmp_tmp_msg_0_3.surf_unkn_z = 0.24342553224365104;
    tmp_tmp_msg_0_3.ss_x = 0.1686250461165889;
    tmp_tmp_msg_0_3.ss_y = 0.3009541879075537;
    tmp_tmp_msg_0_3.ss_z = 0.38012099526675014;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.1947701665253042);
    msg.setSource(20095U);
    msg.setSourceEntity(62U);
    msg.setDestination(31523U);
    msg.setDestinationEntity(203U);
    msg.command = 68U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WUNXCDPJGIAXFIOLPYPTRKRFOTHAHOIOQKTQBQMNKKBKBDNAUEXYQMVCSNFJVGNUWVPXBVFSYWBIZGJCWGXBTGURADJATWDTALXJEIELMLUTGYPMYNTBEMHN");
    tmp_msg_0.description.assign("DROALUEEPUQZQUOXPTOLXEIGENNNQVWZYMDBUGXJQHCVGKVRSLWCIBMSXCCFMVAVGXTEYWLOZZRJUNZUPPJVDYISCBHKNHADXTOORAOSCOISICHSMHWRYIINWEUCMFGKHISRMEZKHZEQTEFLLXAAXFDJPSYVFRWPPF");
    tmp_msg_0.vnamespace.assign("UBCSOIEXBRUTUAWZDAATIFSSEDQFQPZOWCRCUGIRDVBOFUPCJCTXZEPNPRBRBWHSIVPHNLOTANBZYOOCGVTKEEYATQZFLFEJMSUELLDXNVCSULDAGKJPYVZDTZZTYFIPJGIHZVUHNMGYXCXWDKEXBFBMRVQHJMGPXNMMKEGYKYYLKUMSOFUDNQJKABCWFOXQAMNHTFLJIWZWWKLIPNDMPKWINYGVAGOTLEJSJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CXSHJBYUBRRQUOQVPKJXKEAOJQIEBIDTANLKEWQIKWSZBZDXZUWMPVGMMTOLPTPELVKVBSRSCWJDFQOVXBHGHQYN");
    tmp_tmp_msg_0_0.value.assign("FVZRJUSDNBVSGZPCORDLOGQDWEKQDPDHSCZNIYVUZNZTFDNPTYPWYQHBEGQRFTWJOMCAKUPEGXOTVIOHANDGCVIHLAGWYILXHWMCJHTXOCJORAKHLYPKRVXRDLTFBGFIWVXEIAMSIEYXXBKFUJWZYJKQFEMNJLMHAZTBBLMMSNAJVMKVWUAGRNSABPEEUGUOAMBXUQSFHOPMLBCKSNT");
    tmp_tmp_msg_0_0.type = 80U;
    tmp_tmp_msg_0_0.access = 74U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TGDRAOAOEAVZLOHWCSESFLKGWUTDUHMIMPSHVMFVGGZRBBQSCFWAXIUJIYHGLZCXXKIKDQNPBAAMPRIWXHBORDDMFFNNQPMULSHECCCXGJGSHJFXPJXKBGUANEIPTKYPOSJKXXPNUUWEEJNEVZFEB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VADPDDLQGUCDYVVISFVFSJRALSSYLKCVRUWQURDMAYEUTDOSZNNKCGQBACPPMLCZQOCWXZWYNZHNZHKEQXOQYNFDIMKPOWHQMQFNGJPAFHNPCPEBLXWLJWYFSXMJ");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 4147U;
    tmp_tmp_tmp_msg_0_1_0.flags = 82U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.16161426319171157;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.1784337668414766;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.024477253048262426;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 122U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.6148132060185472;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 44U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9975236314721141;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9097028043781121;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 31U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ONOKIFFDRHTVUPLMQDTSLJNHMFVISUOQJIIQRMBTGPEOEFQPCNEYOFEKXWOHNASUHQIWRSKZZVGCCRXDEKBURVBRGXNSOCPM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Pressure tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.7589158066313731;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::PathControlState tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.path_ref = 611047953U;
    tmp_tmp_tmp_msg_0_1_2.start_lat = 0.7172807003439191;
    tmp_tmp_tmp_msg_0_1_2.start_lon = 0.3609138931319509;
    tmp_tmp_tmp_msg_0_1_2.start_z = 0.7827948996236808;
    tmp_tmp_tmp_msg_0_1_2.start_z_units = 3U;
    tmp_tmp_tmp_msg_0_1_2.end_lat = 0.5966586365339376;
    tmp_tmp_tmp_msg_0_1_2.end_lon = 0.5315476461487494;
    tmp_tmp_tmp_msg_0_1_2.end_z = 0.7757894947888434;
    tmp_tmp_tmp_msg_0_1_2.end_z_units = 181U;
    tmp_tmp_tmp_msg_0_1_2.lradius = 0.9890473724730003;
    tmp_tmp_tmp_msg_0_1_2.flags = 33U;
    tmp_tmp_tmp_msg_0_1_2.x = 0.5704647985762207;
    tmp_tmp_tmp_msg_0_1_2.y = 0.21952564680944775;
    tmp_tmp_tmp_msg_0_1_2.z = 0.5384415058705431;
    tmp_tmp_tmp_msg_0_1_2.vx = 0.011026413898261866;
    tmp_tmp_tmp_msg_0_1_2.vy = 0.5903620315279932;
    tmp_tmp_tmp_msg_0_1_2.vz = 0.3660314558898802;
    tmp_tmp_tmp_msg_0_1_2.course_error = 0.8009611345569461;
    tmp_tmp_tmp_msg_0_1_2.eta = 15680U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("IQQVBIDGQEYWKLWILRDQYNRTVHGFOZYJIHSJGEELHYTOZPJXPBLAGWAFVVUACEFZEWGIMWPBGXQFJMUXDJSCMQZAFWLBNNVSX");
    tmp_tmp_msg_0_2.dest_man.assign("MSHRHUQCEIPTGPDXJRTTJMUTKREHJXLVXJKKYBUJZGCVNWICPZQWIRKFWOXSBHZGBMWCPQWSDOSCUBOJFIXIXMCJDYFDELRZCFHSIYAMYOFJUFGSOFKVAPYWBLEWVKAWBAYQVNUAPCINQHZSAQFDNKMCWQLYVGITEBNEPVADLBDZQUMGDTEHUDLOJYRRJBTRZROWXRLEZOG");
    tmp_tmp_msg_0_2.conditions.assign("HEDLWNQRCELZKSKYYPMWYVRCUGBFGEQYPTVREPAXZQKOOIEFDAPQZUDPMBKHHUJMDKVTMBIWUTGLZJJZGHNCJNKXZMCYGIASBKCTFGOGQINZJRLZZQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::LblConfig tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 48U;
    IMC::LblBeacon tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.beacon.assign("RHZRWSOLURNPZWFSCKZERWYRSVTUWVKPTPOYIIBEMGASPEPIBJRAUJMEGQKODSKVWDCSD");
    tmp_tmp_tmp_msg_0_3_0.lat = 0.7865528753622195;
    tmp_tmp_tmp_msg_0_3_0.lon = 0.23620179358119797;
    tmp_tmp_tmp_msg_0_3_0.depth = 0.5643097555705967;
    tmp_tmp_tmp_msg_0_3_0.query_channel = 162U;
    tmp_tmp_tmp_msg_0_3_0.reply_channel = 250U;
    tmp_tmp_tmp_msg_0_3_0.transponder_delay = 158U;
    tmp_tmp_msg_0_3.beacons.push_back(tmp_tmp_tmp_msg_0_3_0);
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
    msg.setTimeStamp(0.8838365270562877);
    msg.setSource(35523U);
    msg.setSourceEntity(249U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(106U);
    msg.command = 124U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RXGDRBOORENGEFENOKQYEWYIKDCEGWDXRDFXHWLZZGCTVOVQUBMEOZMXFHZUAJIIWFABRAWQKSZESHYKQMAFEKZUUPQGNQVHSGJLSVVYCAZWXXPLXVSVDGXTJKNUDRAXOSETDPIXGDESTPNJLNWFPJQUFYIHTPCOVUACPYKLJCARMJZFYOTRIBJYLYSRFPWKTNBHZIFLNUQGCNWTAPKBHMQJWRBDTKBSDNICIHSGHOOBP");
    tmp_msg_0.description.assign("QIUTMKMWNZCNXDGZFFLFKFWKDQMYOBRNXJAPDXSYHAJWKLGRMJAYVZAUWRXOOHAXVIYVBPGNBGYACPJLRHIHXPLPBYWLFLBKNIEBRJERVQVISKWCQGEQHOUSQQKGMJZTUVBHLPUOGCXETMGCKIE");
    tmp_msg_0.vnamespace.assign("GTPHFESLVRJQPGRWRRQNDMNCCZHNTBPJIIWLFVDXCIUBQBQKYGXDITEU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("THYUYENGLWYTMSOPKJHTSOTABFYJVGPJNGIKZXLHKWLDSCAABKIGQRYQCCLVZXWHDWS");
    tmp_tmp_msg_0_0.value.assign("ARBDLZFEPBXYZIFWXYQRWQFLJUWIZTRUDKWXYTOSRPTDECQXTZMEALNVVPNCVYWUTWXCZVSJZYSLPGVXEWSKTNSRARWQXFLAOBHHUIQPMSKGJOMKDGENZUBKUNTCHHGABJDLHIQRGGPDNCIHOYKW");
    tmp_tmp_msg_0_0.type = 229U;
    tmp_tmp_msg_0_0.access = 228U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HKFFKBCAEDVQQJXBOSY");
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
    msg.setTimeStamp(0.19597036083694086);
    msg.setSource(10072U);
    msg.setSourceEntity(101U);
    msg.setDestination(34772U);
    msg.setDestinationEntity(209U);
    msg.state = 132U;
    msg.plan_id.assign("PNHZWBRYYVGSAOEVTTHOKLMPFRNXHNNAIPBKFBLJGBVNAZFSUFRPBRSHQAUOUENWQENSXACPYHTQMGNNCBXPFZQJJDJGFMSIHIIYBJOLEOYIZNWMCZWUSCQSLSWFDVRXYGWHJOFLCMYDVPUKFRWGRPKWXUDUTRIIWDUMZCCZTOQMVQABYDLZZRYDGOMQBDXKVEEHDEGVIRUXAOTELCEMZTALSXOTKJGBKJCPSHACQALIJXEDPUT");
    msg.comm_level = 236U;

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
    msg.setTimeStamp(0.9737854746789018);
    msg.setSource(3496U);
    msg.setSourceEntity(186U);
    msg.setDestination(27769U);
    msg.setDestinationEntity(167U);
    msg.state = 80U;
    msg.plan_id.assign("AVCXDQUVHFAJVJLXVAVHNYZZBKMYISGXHIYNNELSGHZQDCORLGUWBCBBIUFHNBRXNOYRJRMOOWKJZYAGLTTCGQPMQQMOFKCBLAXRESYVJOGDRPTIKGCIDMMSCLAMPJXKUDZWJSVYWUJURLLVFFSPEKPYEEDEPCWFTXHTMHQABLPTOPWIBBIFPEZCTIYRJYXJQARIGMENWUDLDNHCATKNAHOBTEMSXWQFFOUWKZQUKDF");
    msg.comm_level = 145U;

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
    msg.setTimeStamp(0.5884058715063863);
    msg.setSource(19021U);
    msg.setSourceEntity(121U);
    msg.setDestination(29994U);
    msg.setDestinationEntity(20U);
    msg.state = 157U;
    msg.plan_id.assign("BDSDKNLJMGTNOUKSBRMSDOFVWJZZRCYCTVEEHHCEMNMEFHHRHCWMWCDUNBJXHLRALTMPXNDAOOPQZZIXGXIQIJGHKVTIUEEPEKVVUTWWTALRMUIDBGRSCJKFYAAFFBVZCRYXGPUVLMTOOKWEFZRDXTXUIXNDPAWQPONSAYOYQYSBDYAXNCAGKGFIQSJMMERBZDILPQGPPQEYK");
    msg.comm_level = 203U;

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
    msg.setTimeStamp(0.8213053218637244);
    msg.setSource(25U);
    msg.setSourceEntity(62U);
    msg.setDestination(9430U);
    msg.setDestinationEntity(140U);
    msg.type = 59U;
    msg.op = 163U;
    msg.request_id = 20657U;
    msg.plan_id.assign("URDFKFZZOHZZYNZVRSMUHOUNTMFIWAWRBAVVJFVAHIILCGBOBXWSMIQJCYWPPSBXNDLUTFKHANUPLYMADMZWEPQHYIDJMAUOBYRQDFMGVAOIKPYJXYYIWSPOCQCEPXCEQLPTDGXCZELSXTKQMRBOCXNDUIGAOQYHNKRKEHBEQCUTIRXRDSKVLPBK");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 131U;
    tmp_msg_0.value = 0.3243233180446584;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KPWGFCUIMUJFIGVVVCBXEBZDPYOXGWWDRFZHRHNWPSNGEOQGKETEOWLJPPSE");

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
    msg.setTimeStamp(0.2992496851891141);
    msg.setSource(52263U);
    msg.setSourceEntity(168U);
    msg.setDestination(59107U);
    msg.setDestinationEntity(221U);
    msg.type = 215U;
    msg.op = 201U;
    msg.request_id = 44319U;
    msg.plan_id.assign("VHYUPNWKKNLACUTAWDOTRGUYTXCGNRXVZOHCFWBDFLCIUXVPKTBSZL");
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.5901040257578357;
    tmp_msg_0.aoa = 0.5053872166490756;
    tmp_msg_0.ssa = 0.24601942829520407;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CGIAKHEOLVRYGWFJLTJBKXXQRYBTUPTOZZQKLCGBYWDRCJFFDQAICDTFVFTMWLXAZGCPJKCKIVZCXKHVMAVFSILVZSYYQCSHOURJKFBGYNBCXQUZNNMAOJALRSJVREMPINHHEGVEZZDRHCMWZEPPIADTZIQKFUDDKEEMISSWNPEHVPPMMQBJBOSILGDPYPWGYTUXXNWWAUYXOBLUKFSNRUDHUAATQQOOUYNRHHMSEGGFW");

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
    msg.setTimeStamp(0.03621161730701428);
    msg.setSource(43360U);
    msg.setSourceEntity(192U);
    msg.setDestination(8977U);
    msg.setDestinationEntity(70U);
    msg.type = 153U;
    msg.op = 201U;
    msg.request_id = 22141U;
    msg.plan_id.assign("KNWJBGQPCCHXFILCILXBLEEHAUYBWIIMAVORTGTRYWTKCVYENYDBDUIZKJSDRRYLMXOHIGNJNMUZMBLSQXTASZYBHQWQIFTMTFLODADCTULHCJRLOCEBRKNOKZBUGKSFZZQTDVWACDERQYXFZCXGPVKMLPFNAIDOVIFWPWSOHTUJMMGPXSSNIKKEWAWUXSHQDNJYBSPVGRZJBYPZFNHVCGPJWUUMEJTEPRRK");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.error.assign("RBKAUAQRTXYLUYOHZKODNDQHCVVPHFSLJUAPYTWXGWTGBITEBRWAYXUJEEIELJFKZBYCVMNTJRJRJFUBDNPZUOQFIAXHJPYMLNSKQBQQCMTPEHCOOFXXKFSVQLOUJHITPDEOAWMWVFTUCLBIAYBVAGFSNDHHYMWELGDGIJGVMNDQRTCGRCXYPPAWVYZIHEDMRZXKVODGZZXKQZVHSBSSNCDQIEPMJSNCNNOKWRGKUEKIGMSCLFBTMULLFZPWZR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GEIEVLPMQUGVFNETLHYFIYRXSCNCHYDBWQBUMTHCBGRTFTVHRUXBSWAUHOUNKIOWDMADRGOHNQLBXNFLJXRVKSTZJCOHPYZMCOWPWKJXIXJMURSYWCPMXGGQEVBFJGXYEDDVURLPGFTGAMSLPQOSCSUFARNHJKBEKEDJCOUBDYZZVJGQAQTNVMZ");

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
    msg.setTimeStamp(0.984591751520348);
    msg.setSource(27428U);
    msg.setSourceEntity(3U);
    msg.setDestination(62958U);
    msg.setDestinationEntity(220U);
    msg.plan_count = 6217U;
    msg.plan_size = 3000620777U;
    msg.change_time = 0.7871766050911778;
    msg.change_sid = 64306U;
    msg.change_sname.assign("LNAXMCZBNLPCGUQUFKOKKUZSDVPTURRVKHCEWKOQWCQJZXFAYHQBDJTEBEBJDYMNWGRXEMRUPFYMEUTUSRSOPNCGPDWYEBRVMORAHEOSPYLIYDJHHGGXNYICFGZKGVXFZSZRKWSIEYHQQMLAADNHATNIMJIXUWXRMMVIXPZPACFULYHBPCTDLOCVNSABOITQDOJDZBF");
    const char tmp_msg_0[] = {18, -119, 100, 11, -49, -102, 5, 40, -97, -59, -46, 91, -93, -83, 111, 91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZUWFZZUZODTAYETNBJGOCLCVURTWWFBSGUURJSMITKHKTVHSSMJNYXJVYDXOCPHWCXOILXIGVKPPJMHTRKJEZMNIZNLAAYOCLIKDDTTQIHFACEQSYHMVUNKGTPUNHLYNNSAOKEIBSYBBBECFPRDGRARYPZPFGGCEQJROXKQEXVXQWSPYNMGHIJWMSW");
    tmp_msg_1.plan_size = 48127U;
    tmp_msg_1.change_time = 0.042851780908469306;
    tmp_msg_1.change_sid = 32595U;
    tmp_msg_1.change_sname.assign("WQNSMUZMCPNYAHJKUUQBJDGXIDXVZDPOCMJZLNFHYHIEIHTWVSSBTFWNINCOV");
    const char tmp_tmp_msg_1_0[] = {-72, 68, -64, -56, 49, 71, 92, -81, -25, 115, -2, -128, -43, 84, 52, 17, 89, -84, 119, -101, -2, 73, -111, -116, -96, -96, -70, 58, 67, -36, -33, 67, 51, -84, 23, -112, -118, 93, -56, 74, 34, -66, -47, -12, 92, 24, -25, -13, -110, -128, -65, -4, 15, -113, -4, -5};
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
    msg.setTimeStamp(0.5596210417697859);
    msg.setSource(62907U);
    msg.setSourceEntity(90U);
    msg.setDestination(22015U);
    msg.setDestinationEntity(206U);
    msg.plan_count = 26634U;
    msg.plan_size = 114085782U;
    msg.change_time = 0.3918907776548771;
    msg.change_sid = 57396U;
    msg.change_sname.assign("GZERWZTTQFWBALNBJIBOQPKDUJIFIKMBMDJSDXRVMIHALYHHUYGLWYHXKVZGOOLFTKUSMTFUIRSJKQCDDJHFCPNDBOEXSKCMOEUMNN");
    const char tmp_msg_0[] = {22, -113, -66, 119, 75, -45, -101, 49, -128, 87, 91, 111, -109, -108, 26, -43, -97, 97, 92, 14, 20, 95, -61, 122, -67, -29, 81, -124, -127, -75, 37, 49, -76, -11, 37, 119, 68, 39, 90, 13, 43, 124, 9, -45, -82, -33, 20, 30, -23, 43, 14, 14, 110, 104, -55, -26, -47, -76, 54, -113, 59, 24, 92, 62, -18, -69, -37, 5, -60, 71, -79, 48, 97, 52, 78, -53, 81, -4, 48, 98, 17, -8, -58, 37, -80, -33, -29, -119, -44, -74, -93, -73, 95, 114, 89, 24, 115, -33, 56, 23, -16, -49, 86, -91, 57, 125, -121, 119, 38, -27, 111, -66, 1, 100, 71, 101, 124, -105, 124, 113, 112, 122, -58, -51, -19, -98, 21, -29, -90, 126, 61, 67, -56, 115, -37, -77, -10, -101, 120, -9, 12, -70, -93, -65, -14, -61, 94};
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
    msg.setTimeStamp(0.20873661820481193);
    msg.setSource(9681U);
    msg.setSourceEntity(206U);
    msg.setDestination(11531U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 3717U;
    msg.plan_size = 885433980U;
    msg.change_time = 0.806560508553572;
    msg.change_sid = 9216U;
    msg.change_sname.assign("AZTSKQGOQXKLHWRSLKAXDENHIOVWCPSUDQJBLOVJTIPYXILADFNEDGVCTVFQVKLNNYSFEHJSBHBCFUKLMJTQETXJWITUWSNHRARRAJHICRUYKRMPAIYMWNMBOVDYAPXBRODJMVHYZNGQZPFQYEXZGJUUKORMDSGZDCUHETWDCYKCQWMCHVZUGBNKSPJYDXMOHXIBAFYTQEGEGZULFGUPZSQATKLVJAWIGICZPWPILFEZLRCPEOVFMBNB");
    const char tmp_msg_0[] = {75, -28, -110, 71, 15, -53, -95, 45, -106, -120, -119, -90, 7, 106, 114, -85, -8, 15, -46, -119, 38, 118, -14, -33, -92, -92, 104, 25, -102, 58, 93, 54, 49, 59, -113, 28, 72, 20, -27, -6, -23, -31, -113, 43, -97, -126, -55, -51, 55, 3, 49, -62, 44, 124, -103, -11, 95, -43, 32, -33, 119, 99, 104, -20, -51, -104, -103, -63, 116, 67, -83, -4, -51, -84, -99, -85, -47, 121, -16, -27, -97, 38, -79, 37, 27, 24, 118, -67, -49, -113, -43, -8, -90, 99, -105, 9, -25, -58, 72, -8, 30, -89, -70, -93, 73, -57, -79, 49, 75, -117, 76, 35, 26, -127, -15, -2, 24, 77, -74, 37, -104, -28, 76, 72, 72, 55, -53, 88, -109, 51, -16, -15, 71, -119, 23, 117, -79, 10, -117, -50, -105, 58, 119, -70, -57, -119, -72, -106, 115, -67, -72, -122, 28, 68, -14, 66, -59, 52, -73, -103, -48, 78, -95, 48, 64, 73, 118, -53, -16, -19, 55, -60, -119, 83, -13, 93, -72, -108, -87, -25, -102, 72, 81, 11, 71, 32, 100, 76, -80, -40, -74, -87, 60, -67, -75, -17, -46, 78, -113, 47, -59, 93, 39, 50, -98, 40, -33, 53, -123, 21, 96, -38, -7, -84, -5, 114, -122, 38, 18, 26, 0, -83, 87, 98, -20, -124, 67, 67, 116, 63, 70, 108, 26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IRINYEYVXYGKTHKPRYGXGRQYSMWWLCAXVDTACDBKPJSBCMWQENCMFYIYOGWKSHQWFBAK");
    tmp_msg_1.plan_size = 7134U;
    tmp_msg_1.change_time = 0.7590666254923852;
    tmp_msg_1.change_sid = 5314U;
    tmp_msg_1.change_sname.assign("SLTTHKXARKJQZUQULWMCTEDEMRLEWKVEVUSOLPQHIBUOZNLAUYRJNEHTVNTDVRTRZKHFJHPIZNAYMYICQDHHVJMDPJTTGRPMEM");
    const char tmp_tmp_msg_1_0[] = {-23, -28, 47, -64, -73, -53, -39, -38, -102, -110, 70, -49, 62, -45, 38, 87, -52, 19, -41, -41, 102, -66, -121, -36, 43, -123, 109, 98, 111, -33, -110, -58, 83, 75, -125, -5, 6, -61, -125, 68, -25, 6, -88, 95, 69, 68, -5, -31, 52, 62, -80, 112, -125, -70, -2, 70, 125, -45, -108, -11, 76, -120, -72, 120, -71, -21, 1, 9, 17, 25, 15, -58, 45, 113, 54, 114, 64, -91, -44, 32, 8, 70, 63, -40, -64, -81, 13, 124, 118, 118, 54, 32, -38, -91, -18, 105, 1, -65, -64, -53, -116, -123, 112, 15, -26, -67, 79, -127, -112, -26, -68, -46, -67, 54, -98, -101, 7, 6, 25, -74, 62, 17, -34, 57, 64, -76, -10, 85, -3, 12, -24, 78, 35, 86, -128, -67, -21, -125, 5, 48, -107, 102, -37, 109, 59, -123, -73, 52, 88, -67, -19, -92, -107, 27, -65, 41, -73, 48, -12, -103, -32, 99, 118, -104, -44, 64, -121, 13, -47, 83, -40, -27, 83, -114, 18, -106, 123, 34, -110, -26, 37, -105, 64, 64, 17, 106, 106, -22, 106, 86, -86, -40, -101, -27, -38, -108, -26, 23, -46, -61, 16, -97, 112, 105, 102, -50, -111, 35, -31, 79, 122, 39, 29, 124, 126, -106, -55, 87, -29, -109, -108, 5, 121, -15, 56, -15, -126, 33, -117};
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
    msg.setTimeStamp(0.866362415736099);
    msg.setSource(39592U);
    msg.setSourceEntity(122U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("ZWJLXDUNEYAVB");
    msg.plan_size = 62391U;
    msg.change_time = 0.8082657057623774;
    msg.change_sid = 27772U;
    msg.change_sname.assign("CWIDRSROUHOXUREBIQPFVRDFUBPBJSVKYACWYUQZNWEDZWALADZIZAIYOGNKUZVYBRLSMWAQLYOKIBZKWMMAJNTIPYAEKXDKLFGCQCEJAPFGQNSDSGFKMVINCMWIZBPGUMLSSZBTTXGFDOEYTYVTHHBPWTTTQOTPRJMLQBPXCQJQVGCCVUHNEIELONGRLNJDRKOLKGJUORCJMMBDUFJXWSXOZP");
    const char tmp_msg_0[] = {-78, -106, -102, -49, -32, -88, -101, 97, -85, 101, -55, -60, -100, 104, -119, -55, 32, -55, -8, -13, 51, 58, 30, 57, 84, 90, -89, 92, 52, -24, 97, 17, -69, 100, 122, -68, 64, 126};
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
    msg.setTimeStamp(0.788345873545952);
    msg.setSource(13153U);
    msg.setSourceEntity(70U);
    msg.setDestination(10137U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("IVUAJXIVTTGVPQBETAWAPMUKLFBUHHLIEBUTQAHRUJXGMZFWMJSVIGPBHGPFGZKWOLQNUCBOFWRNIQYJOFALWIYPQKLSGLNJSRNOMYVMHQEDFUZPJYKFTIBAOHTRATEVCILLSTJRVASFZDCMEWYSGMZYKEWSXNXUZWCNRNZXCPYMDFDSZRRRSNEXWKXCPKXVSMNDPJGQZDBKF");
    msg.plan_size = 49315U;
    msg.change_time = 0.6968572749500347;
    msg.change_sid = 60167U;
    msg.change_sname.assign("LHDSMCQMLOWNWOCQMQFMBBHTYZHHUKYPGDTYXPAQOMIRGEKUJHDJPWZFIJOAAGECTUCXVWFRGTBCXIXGUVEIPVXNOQHZYAAFDWUKIFYNTDKGDMWIQRFUSHJLJFGSBOLXAVSD");
    const char tmp_msg_0[] = {-75, 49, 81, -92, -108, 16, 10, -21, -9, 26, -40, -108, -63, -69, -18, -118, -65, 15, -20, -7, -20, -72, 107, 125, -18, 36, -11, -80, 26, -94, -6, -96, 110, -39, 8, -19, 74, 1, -69, 125, 104, 109, 7, 70, 96, -106, 37, 24, -40, -44, 112, 69, -117, -45, 33, -3, 7, 88, 32, 35, -104, 5, -120, -56, -67, -64, -77, -48, -61, -55, 14, -123, 118, 43, -66, 9, -62, -14, -97, -93, 86, 13, -107, 109, -18, -67, 8, 34, -79, -82, -83, -10, 105, -72, 121, 45, 49, 40, 5, 29, -4, -53, 121, 105, 79, 18, 7, 93, 43, 115, 117, -89, -72, -61, -115, -74, 24, -60, -25, -29, 5, 25, 41, -1, 60, 3, -89, -90, 71, 41, -52, 28, -67, -114, 1, 15, -12, -87, -34, -81, 55, 36, 59, 39, 25, -50, 37, 56, -113, 17, -82, 99, -33, 47, -87, 31, 85, 89, -76};
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
    msg.setTimeStamp(0.6167719631080907);
    msg.setSource(22724U);
    msg.setSourceEntity(82U);
    msg.setDestination(36467U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("KRJMZZVDITRHDUTQPSCOMABNPRDZCNCJIWIGHIBYROQYEAASOVGHZJGMDAVUNMXWEUKHFC");
    msg.plan_size = 18928U;
    msg.change_time = 0.193570289914213;
    msg.change_sid = 29795U;
    msg.change_sname.assign("FLUAMITJDUPWSKDUFQVQQJIFHAOHDCCOMVIRTZOGGEBMPEBXEXCVQDPELIFMAYMHMHHPCDCXPKULAINQJSD");
    const char tmp_msg_0[] = {119, 74, -122, -13, -37, 87, 39, -102, -97, -72, 52, 7, -33, -45, 32, -85, -93, -124, 71, 92, -85, -115, -85, 54, -22, 115, 84, -69, 18, 32, -38, 27, 121, -68, -88, -89, 123, -101, -32, 72, 83, -13, -16, 108, 22, 28, 30, 50, 85, -69, 125, -34, 66, 91, -107, 6, 47, -82, -119, -83, -79, -127, 125, 81, 33, -50, 49, -102, 111, -109, 101, 70, 126, 104, -100, -12, 47, 51, 120, 12, 116, -61, 77, -1, -73, -74, -111, -103, -124, 26, -83, 92, 61, -101, 7, -58, -9, 35, 116, 103, 125, -62, 103, 28, 67, 66, -116, -51, -76, 32, 18, -22, -40, 71, 68, 124, -63, -95, 66, 107, 78, -55, 52, 102, 83, -15, -69, 6, -57, 2, 86, 49, -57, -14, -8, 114, 7, -30, -14, -83, -106, 9, -50, 67, -124, -87, 101, -105, 67, -73, 115};
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
    msg.setTimeStamp(0.5877967367465972);
    msg.setSource(55968U);
    msg.setSourceEntity(103U);
    msg.setDestination(433U);
    msg.setDestinationEntity(27U);
    msg.type = 226U;
    msg.op = 206U;
    msg.request_id = 12508U;
    msg.plan_id.assign("DUHLUEALUOJT");
    msg.flags = 20741U;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HTLAXVGJIUAIQYYVPRSJCSLWKUVSYNGVYIDCJMKATBATPYSNPSFEQDULWBSLVQHMXQOKLQGOQXNGOJXHICGKWCAPBMJWEMZLRBNGRKDTTZJSFSAOLVRMMVAIANZXSDNJOTHUXHHZFNMVVZSIOOWEVBYRDZKZQYDTGRMWEJUXYJPUFEGAQ");
    tmp_msg_0.predicate.assign("OUPAOMANJIRVUBBFXHAQUBXPAVTUGTIWDBZLOLVVHVICRLYCPLWKAMNEJDRMVIMCVRDOLCUHXHJEQDHUSDRVXYYSHHYIOXQAGNFYTKFODWMPEXBRFYMNNMZTG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KBUIYCLMWUKCIUBRZQSJFOHSFWXJVZJAZUKVMHPYQDZUAEVWWBHTJXRJZPXTMWJDPRRVMVPYSDECOQ");
    tmp_tmp_msg_0_0.attr_type = 194U;
    tmp_tmp_msg_0_0.min.assign("YZKWFMETEYMCDYZWKMGZSOHNMBHMMBVMZLNAYVLWCCHCPCGTYMSEEZNIPYOXWAUOKNGHVJKGVTFRIXCUGLABWJAJHTQDARQFLHJALIEGVICRKTBRCJAPGXNBWSNHIBEQSDIKUXOBSIRDEZUERLKODUSAZDZDSJ");
    tmp_tmp_msg_0_0.max.assign("XGZBZMTDLNDHKNPWRHFCBYULKLYHPKOPOSLAWSDDFHWPQEQLXACGQZGSISNKVEMLTMIMEAWIOAYGLUCUCVEIQBMQMCXQPILAJARZTNJVXFJUXYPFJMVNENPASDRRWOTUIPUL");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AHFPATQRZIRVWLZKEAFMWGNOMXPAHNBWXBNLPUZXSNIBUHNEFYKUWRQCAJVCSFEJGCMSC");

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
    msg.setTimeStamp(0.517400097637492);
    msg.setSource(39056U);
    msg.setSourceEntity(33U);
    msg.setDestination(56887U);
    msg.setDestinationEntity(161U);
    msg.type = 230U;
    msg.op = 240U;
    msg.request_id = 44196U;
    msg.plan_id.assign("VHWGVOZZJBUUCGOUWZSIHWQFMGSJYKCWEDHKKQESINYETRVMUDREOKXAIVYJOUPKAJORKCXMSBZEGVXVNLHOTHGOEKPTZZTQNNMVYEGPJIDLPYKHBUNNOWXQYMLUIDCPGXLLLBJFNAPLMYDPHNJSLOEQ");
    msg.flags = 13424U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6165426873879128;
    tmp_msg_0.y = 0.46322303060640446;
    tmp_msg_0.z = 0.48190659493603627;
    tmp_msg_0.phi = 0.2454926110872735;
    tmp_msg_0.theta = 0.7554726978443146;
    tmp_msg_0.psi = 0.07667278524867416;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SDTRVKEPLUMRBFVVVKXFGCMLRXNCMOGJURDCVDOTXJTDFKTBRMEXIKMQOYVFXLRKGSIOAATHJPJZGUNJQAKLBFLQVIUHOISUNSLAFBWFGGBIZAIJUBAHGXECYBZOHGMNVIEDILGZXWBAYPNMWHFWVWWQYPBZFPHJFXJZQDMDOODWECUTHSLBPZSQKSEKWWCQRKTMTKYYPLYSNPANRCE");

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
    msg.setTimeStamp(0.81876546056811);
    msg.setSource(7084U);
    msg.setSourceEntity(174U);
    msg.setDestination(61331U);
    msg.setDestinationEntity(248U);
    msg.type = 151U;
    msg.op = 215U;
    msg.request_id = 22742U;
    msg.plan_id.assign("QDMBRPZEZRQJHDBOPWQIXPAXWPVJJYNTYNYUSTQFMTNYKVBGGYLVB");
    msg.flags = 28222U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 47165U;
    tmp_msg_0.lat = 0.025567289674285343;
    tmp_msg_0.lon = 0.4799907427903549;
    tmp_msg_0.z = 0.4709680184534901;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.1765498394196977;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.roll = 0.0787675220706594;
    tmp_msg_0.pitch = 0.8789344253066708;
    tmp_msg_0.yaw = 0.3231912767113939;
    tmp_msg_0.custom.assign("PYQBYDXERWVHRTWJLQKVDTMREPPENEJIRMZCIXMQITTAJSWSKIWLFYOAWRQRCFPUZZTAMVNMUUSTIDIPGOGDDIMRHLEXKVSCFSHZKHXLFYCRGVGFBECATNWDSHSPKXNLTFZBGHCYZMGNOVHAMFUYICZCMAZLQJSBEXNRJCLHQJYBKDFPOOMOYOWYJOOHIQDUHUGQQIKBWPLJKVZUPUTXOJGVBJANYVPCXSRDLWLBKXA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JOADJFRMYLYNDVHUVKITKRVFHVYXGFNQEQFAKDLWETFYUXGFRPKTQTDEQSWPLADDGUAZFHARXLIKNHYNSJLQSCBOENYNIDJJXWTJIBKYTHLRTQTVDZUOFGSIOBOJQGWEPXVAKHSBZMVPSXPMMXSUNBTEDJKBWIXKCZUKWPAEYVALSHWCFGRWADECUPRQNMCGPZOTLRZCYABUELNZZOWZGLNMMO");

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
    msg.setTimeStamp(0.9729613511263493);
    msg.setSource(13426U);
    msg.setSourceEntity(76U);
    msg.setDestination(56542U);
    msg.setDestinationEntity(128U);
    msg.state = 217U;
    msg.plan_id.assign("JBMXIASIYEQZTRLYWFYCIVNGWCUONAESXGDWNIVUVQOJHXPSCWPUELRFMBUJDFTRZXZEUQTIRJHZDTWZHRRHXFHSYWBSCPAKVWVQGBKOEEOMOYLKXTLBITQCEQYUPPUUVAXKYGYLLOSVSRSFHPBRFBCFPFJVEJKDCNQZGUDINZELMDYDKTXDGEHMSAZOT");
    msg.plan_eta = 250658811;
    msg.plan_progress = 0.18712869396155762;
    msg.man_id.assign("JWUNKECQMZAQSGKGEKDKMHEMMGOHQIJZAFDVIQTXOFDMLWZIOUWAUZILXYIWOYAQCBKTPQDUPLNVLFNYSNVNMXTCELQPNUTZLCQBNNTBGYBGDVZCAJBGWAJVKURFTGPAJJGJ");
    msg.man_type = 32205U;
    msg.man_eta = 1876132254;
    msg.last_outcome = 151U;

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
    msg.setTimeStamp(0.7552900833067133);
    msg.setSource(51375U);
    msg.setSourceEntity(233U);
    msg.setDestination(41377U);
    msg.setDestinationEntity(221U);
    msg.state = 62U;
    msg.plan_id.assign("RDUZFNRNPVTCVUIZJAPNMKLNMKLQYXOXDGYARLAOWSKHPLVGITBCES");
    msg.plan_eta = 1592805366;
    msg.plan_progress = 0.15739638250126753;
    msg.man_id.assign("WPRSGVFRYGEWIQOIAGKWYNJDBPFRZFQFKYECJIZCKFXWHJPCCSTQVVUQIBZRGTCIUXIEJKYJMBMONCVANLMXYMEVERAWVAHPPUW");
    msg.man_type = 31381U;
    msg.man_eta = -1816491357;
    msg.last_outcome = 222U;

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
    msg.setTimeStamp(0.09550931456894618);
    msg.setSource(45113U);
    msg.setSourceEntity(210U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(214U);
    msg.state = 228U;
    msg.plan_id.assign("UNYYRLBCHHMJVJIQXCZFNZOIQWECCZFR");
    msg.plan_eta = -496150989;
    msg.plan_progress = 0.003893379776857886;
    msg.man_id.assign("FEMFKKJWAXVUYXEZKNPCVHZSGLGPUSHGZNCNIHJZFTIGVPUTQSQLJTODXHKBKIEMRENKNMQRJSLFRIVLXYBCVEHYEWZSDAMIEDAJPYIMLRAHRYBZBWRNMJTCGXXMBUCTQOZXOHSGQ");
    msg.man_type = 10367U;
    msg.man_eta = 134505412;
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
    msg.setTimeStamp(0.8029150848877107);
    msg.setSource(23853U);
    msg.setSourceEntity(160U);
    msg.setDestination(34239U);
    msg.setDestinationEntity(177U);
    msg.name.assign("NTAQMMIRHDDPJDQFTRJLYOHUEWWMZXZPPDRRKEPPCCBUPVOQRIDKOXJUYVKWTMQPZCS");
    msg.value.assign("RWQRKNZCYVWZINFJGXWEKAVVNPILGSPFAXTXBQPKXPMHJUWHPXWGEILIIDEMQTUVBQHNFHOCAPFATVVRTBXDNYKKUE");
    msg.type = 219U;
    msg.access = 21U;

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
    msg.setTimeStamp(0.46141205074096114);
    msg.setSource(27642U);
    msg.setSourceEntity(177U);
    msg.setDestination(56745U);
    msg.setDestinationEntity(84U);
    msg.name.assign("NGDHWSBLTXBEVUHNSMLN");
    msg.value.assign("RIZYMLKRODXVKDLFGLQJJSNPNSG");
    msg.type = 115U;
    msg.access = 157U;

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
    msg.setTimeStamp(0.15671240769638173);
    msg.setSource(51627U);
    msg.setSourceEntity(60U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(245U);
    msg.name.assign("QEDBLRNCSMGEODDUEONGUWYARMANFTAIEXEJGFQEHXMJLQDJBG");
    msg.value.assign("XGZAEEKDUUHXSTSXNJDHSJKGRROUBPENHGYQSPQPWELAZIAMJOXCBEIDSIHSBPYNYKYYMPAHRPFGRKVBDGDLKNNZKUXBCIFTIKYEJTKWBWOZMTGDJNQAKAIZGMMYBPRICMFQAWSHDVDCVURSOOLXTCVMFJLGGZWAUBMWVTTRHZFYFIWGJLVYRECSTNWDQPLVJXO");
    msg.type = 223U;
    msg.access = 57U;

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
    msg.setTimeStamp(0.8374525618667038);
    msg.setSource(48880U);
    msg.setSourceEntity(162U);
    msg.setDestination(43508U);
    msg.setDestinationEntity(154U);
    msg.cmd = 179U;
    msg.op = 23U;
    msg.plan_id.assign("ANCACSFPLEKIBRZAJLVCBPVSJCDADBVMUWLUMNFQMDIZXKZEHQCGPRLQCQYYQOSSCUTLKQGXBWJQLDHQAMKZSTQEEBTETJPIKGVOGRINVYNGWBHTYENFFWABVTOHVXKYUSDMWMHJJXJWJSSK");
    msg.params.assign("CSBXJUQRGUZIWOZZDSPYWBGHWLUEYOWPVKHQFPNXOYQYFJNLGJEEBGCSSTLDXEGRJNHUAVOMBEWRIAXBGAUEBRLJNUYMLPRCVYFODUVCSDTBKQWVKFAKJPAMABTOIVDFFSSGRKMDDXXBDKKSNPHHWMQZWRIPROKXCUQJVQTNZYMCGHOHJLIAQNEKKZHFSUGZFYHQZCWBVZTXNECLVFXNGEFWPYXEAUTLPCC");

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
    msg.setTimeStamp(0.6040480297489855);
    msg.setSource(22487U);
    msg.setSourceEntity(192U);
    msg.setDestination(43187U);
    msg.setDestinationEntity(15U);
    msg.cmd = 131U;
    msg.op = 8U;
    msg.plan_id.assign("KZXVKBOICHYDOIUFQCPLEJEWZDNZPEZCQDIMBWDTMOKNJBEKCSRLGSMKCYWSRJCXXMSSUUUTVONUZPGKZYTDBOYRHJVQIVWTQBBYHSGDEUAURNGHJXDLLXWPBTQFAFJPHWKGOEFKR");
    msg.params.assign("AJFAGWTMXIKOGMQLVTFUDZQSOUZVOCFPUHLTIUJLVWJFHFQREWGPNGALPUYKDSRKPRFKPGHJZDJQR");

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
    msg.setTimeStamp(0.5937152270102655);
    msg.setSource(39080U);
    msg.setSourceEntity(171U);
    msg.setDestination(1030U);
    msg.setDestinationEntity(219U);
    msg.cmd = 117U;
    msg.op = 16U;
    msg.plan_id.assign("YHZYSXHMBHPRZLQNUUIDOWBGCSQFKTRYLUDDAFXNJQRGGPOPMRHFEMRGKAZKFDXNXOIWIZNPTDXKPQGLBEIOVGTYTCUEQTLQVQJHSEGOIPCMCYEJKTPKGDYTAWVASVTYJBVZKXOXLMMPSKRFUECFBLOJFCHSUVJWHJPTFJRSRDQYHGHMSCMFVXLHSOZAONNMPWTBUCWQZCYJEBIDAUBRXRNNONVIWCJEMVEAVBIGZIYLADDL");
    msg.params.assign("HMCZMXRMNRMLFWVKYYFZQBHQPAWGVQTKUTJDDPJYGNCXFRWKYLVUDZNOWJQDBFOJIGNBECHFYQDVCYBDL");

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
    msg.setTimeStamp(0.3218060992939259);
    msg.setSource(3643U);
    msg.setSourceEntity(92U);
    msg.setDestination(1652U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("ZBRVHLREPOMPOAVGAGCAGGLDICSDNFFOZEBPGYPNXLYHPUOAZKQNASSBHBHLYGSYVFBBMQHCEKUUAXJMWN");
    msg.op = 129U;
    msg.lat = 0.6592776297000242;
    msg.lon = 0.051797589634972385;
    msg.height = 0.4424693784565469;
    msg.x = 0.6746437243812822;
    msg.y = 0.5972832960217961;
    msg.z = 0.5243393865322872;
    msg.phi = 0.22736999918090783;
    msg.theta = 0.4178740174031039;
    msg.psi = 0.901432120767209;
    msg.vx = 0.2672631619443362;
    msg.vy = 0.41075432537025336;
    msg.vz = 0.16606298908469164;
    msg.p = 0.7245499341066299;
    msg.q = 0.3237987290015124;
    msg.r = 0.01967488117383087;
    msg.svx = 0.9784955245193923;
    msg.svy = 0.2771922986574582;
    msg.svz = 0.17477199175853464;

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
    msg.setTimeStamp(0.7399816191891259);
    msg.setSource(16352U);
    msg.setSourceEntity(57U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("HMYJINNWRSPRGSBTNQLXBJECOWHTRRYIQOXTTRZQKUEQQSGZMAHNBBLPVYJWHVAVJFBDSBKUWYKAWFAHDYGKOGYXCDIJGDDPGMDCFTLWLQKAXJJDSFJUXGZCTAHKNXQPMGFRYBIYFENAHEHGPIVHMLSSJMJSNECPDLYWOTWSURPXNXOVUIQVVOZOECTKQDIKFLDUZATNRMUVAEZZZEFUBHCYELWOPMEMXLITPZXPIKCONCRA");
    msg.op = 232U;
    msg.lat = 0.7715503620036201;
    msg.lon = 0.5178066857987743;
    msg.height = 0.3162310524948958;
    msg.x = 0.43080828851760977;
    msg.y = 0.512628676919999;
    msg.z = 0.6501617336164213;
    msg.phi = 0.6430239780166475;
    msg.theta = 0.8794872520832911;
    msg.psi = 0.7398936630396187;
    msg.vx = 0.24886601614059534;
    msg.vy = 0.20214981547115463;
    msg.vz = 0.6704481697262953;
    msg.p = 0.6939623598734393;
    msg.q = 0.4933203984730584;
    msg.r = 0.2004720405385959;
    msg.svx = 0.16394931638989807;
    msg.svy = 0.9125558315011175;
    msg.svz = 0.7011512584461492;

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
    msg.setTimeStamp(0.8777128938982663);
    msg.setSource(46721U);
    msg.setSourceEntity(14U);
    msg.setDestination(40423U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("DSBWROLWMGXQYQTHXZUUORSTVMTFABCJTERKWU");
    msg.op = 140U;
    msg.lat = 0.6332227495294925;
    msg.lon = 0.6421733357173719;
    msg.height = 0.6034555117403906;
    msg.x = 0.12972432098289088;
    msg.y = 0.7834165400988948;
    msg.z = 0.3239994116281386;
    msg.phi = 0.5441918778701004;
    msg.theta = 0.16801749167171798;
    msg.psi = 0.8541235366767351;
    msg.vx = 0.42837124960130246;
    msg.vy = 0.3025399708182792;
    msg.vz = 0.5199611828146288;
    msg.p = 0.7056813773842521;
    msg.q = 0.6610869332595727;
    msg.r = 0.3349110046028122;
    msg.svx = 0.40108231006287587;
    msg.svy = 0.8652073079994955;
    msg.svz = 0.38023415157532636;

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
    msg.setTimeStamp(0.5513082241214662);
    msg.setSource(16051U);
    msg.setSourceEntity(233U);
    msg.setDestination(13920U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("GOQQQTGVADWXSIXMJAUBBFGVHMBKZYIDXDOALYVFUEQAOCVNFZDWARHKOQRWCLVTJBZPPXFLREBEJCVJPQRSTMEZGTGMLOWNEOMQVTDIQTD");
    msg.type = 69U;
    msg.properties = 165U;
    msg.durations.assign("DNABWFLKRQJFWEZGFXJDRDEDUIHANPGXEUSJQCAKRTPKIQXMNUHVGSIEYYSJKTURYNOMZMRBXEWHVBOWQBGEPAZHLKUSITLGJUJAKUEHHACCMEIRAFSCFQCDBWTLLCHHGHNRXYLIMWKNVQUTDDYTZFLIDINOYWFRVBWMYTLZULSZXJJKMMIPOGFUCEYRPMDGLGNPVSADBPPNRZBIJVONBSBTKVPVXZJHVOSQFXWFQAQKZTCOMPZAYQVXOESC");
    msg.distances.assign("YAGQMYPRFKSMIVKUWTLTUKJJSOGLXBRHHUMYTSBHIQWEPTJKDFMXOFECLJXEZRUQDDOTONANWEAFYVNAEEXDNRFYCATRDTOPSLRCK");
    msg.actions.assign("YLWYXEIKNZGVONSPQLLCGQFRUJTELMQYZWFYZXOAKRISQAKOUGHMTUVSICLEKZHMHGYCHJCVLRWDKPRRUEOMLLITGAEMOOIFJDNUUDUAY");
    msg.fuel.assign("CLJHKIOVSELZBLNMEHVPVRXPNWSGOBZHPZMOKSVNDLPUFZQTEPIESEJHUBKXSYGCKJWAXRWKDDLIPLFALEMEDKPDMROMXBZWXQGRYYEUBKTGVAHTDLVQSGWYQRQWHHBAGOIFKTSCYFVZFXRMIFJNIRPGIJEWAAZVCGDLCSXQFCXSDUFAXOUOJWNYTQDUNYBZNPMMHJIGURBXZTEJMQSUYJAYGVOPADIYNRCAJT");

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
    msg.setTimeStamp(0.6119200193608341);
    msg.setSource(17988U);
    msg.setSourceEntity(236U);
    msg.setDestination(17195U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("SCHPGKJGSJRKQEWWIOAPFCXKKZZHVYRVQZNZGYOXLLZNEOPPBDMYZABIMIUEGADCCIXHRJYNOUVHNBRSHQIPDCOUSVTUDWNBFTMPZIAFMICQBTTTXWTUHRVWKZIPSVWYJLMGDXEUHQCIWAFVMEMXGRNHREDFVEYJURPLFXFGQDSKYLSWOBNW");
    msg.type = 237U;
    msg.properties = 242U;
    msg.durations.assign("PYUKTJBSOLHCPTURGRYWCUQJFAJDTURBLSMSJDYYDNEIKIQJFCOHSXQKSKIQKMBNTFOVMHXWUGABBHXUUEZDNWACZEELCLYCPFDKKSVG");
    msg.distances.assign("BUHOPQGWIBCHHTUAMCXATCCJWDOMHPZJQEIOLOOGVRGCAKGSFWRWYZISUUIQQGKEPTFCXHPOIANRTZRSYHWIANRLDITFRZKKBBVOQJUPPYXZLNMBFEJVDTISFFJDJQSYNEXGPLWSTVLJZXCLLZIWMWBMBAXRUDVXDMOLGODQNNVZMPAUVHYOVHQHJBNEKKSYQGNCRHVKDAGIFAEYMQYEKNXTMFYJPTLGCSJFBCZYR");
    msg.actions.assign("RBGLJFIHKRBRYFMSBHYPFXNCQLFTBHJPRDWQMGJUUOOIUTWAUYVKIHXDRLJJRRDTXRWDCLVSKYCTFDVQPVGFDTKDGGKDYFYUEQMCENPNMYNJXXJJBGAWWOLDESHPGABGNQOARZFXZNCDPQTSLQILWSUUKQNVCACUHNZTBIVYXZAEECHIHOIPAOEXFEKCKESPOYMVTNKZEZUIJPNQXZJCZGBEWMFVL");
    msg.fuel.assign("JPPXINTNQCISISKWQRZYOXMWQCH");

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
    msg.setTimeStamp(0.006743714332999695);
    msg.setSource(44590U);
    msg.setSourceEntity(235U);
    msg.setDestination(61242U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("XYLFNUCLVYWZCNGYCPERDFAWFBHEUVJECZXQDTZDUVRWHQVNLXOJTVDQOSYNJOMIDJKYMPMHYOPQZCYRRDPKLHLIYXRBZOAWRGLBQUIFAFGSFXSHPBJBALLAIYSQQREMHHIJQPOTMPGSFGAHISCKBJPSKNBWLHXVZBUXOGYTAWXJZACKVUGDEMMKTORNIDOQFSFBNAKETKMANZSINWWHKDGUCICJVRXZMNGPLDWVQUWVSCGIPE");
    msg.type = 8U;
    msg.properties = 133U;
    msg.durations.assign("MOBKQZPVYXPGYBTPFHOEZTJEDGYMCOIPGAEDVLWDJZRVLRKBGNSJJJKHBUQOPXFAUHAFLZHVSY");
    msg.distances.assign("OMPOUBZNKWPUNKRDNGBZBQYETBVITRKIXPLMAHYVWUAFXCCRSAHVEFZIERPWRDKQOLZHLQGHSSJMGNEFJJAUIUBSZQRAIQUJLIDJHEFXXTQVKOMTFFJTYBKGQVQDBWXIRKEZBEPYYLOWACUHZADDHPFSSNXGTUDYOOBADCWASWMEGRSHLTGYPVCPGIIMYEWUCVWFLTZCYIHVFRCFWKSMEBOTHZUNZYVJGOJAOKLKMDSCLQC");
    msg.actions.assign("WPBEATKQNXUAZAZCCKCBDTAUJPZBXWZWXRQCUGYPAIGNUOYVSMDNFRKEXMHYGFAXYGVIEUDRPOQEWLDWCKCZPAMIRRMJOVCUQBHLBLPJVNOUWATZSGTYSGF");
    msg.fuel.assign("BXBJDZCNSMDWJMGTTVMPEMLGYPKYGJMJFJYWZUKNUHGKJAQKQKVFMNSNIKSHOCHUOHIGROVLCOZERCGUOXTPQDXNOWLLEKLNMPXQDNLBUGYUDC");

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
    msg.setTimeStamp(0.38415256845725165);
    msg.setSource(52992U);
    msg.setSourceEntity(151U);
    msg.setDestination(10123U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.14295082274854287;
    msg.lon = 0.8225106225698625;
    msg.depth = 0.23111064118507008;
    msg.roll = 0.740593696523983;
    msg.pitch = 0.43731689734153445;
    msg.yaw = 0.9081096504601837;
    msg.rcp_time = 0.10499570596727559;
    msg.sid.assign("XBTQWGBDNMMOVYCDVFPRKQCPXWOJTAZHAXSTRYTWCAQDDMRXUEVORFZEGIAKPNMZWSEIWMIHDILSHIFSJKDUTGEULVXTWLRQZWTNHQXZDZOMPOJUEHVOFIIYBVQHAXYCLPNXEFKJJOCYYT");
    msg.s_type = 57U;

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
    msg.setTimeStamp(0.7121688541669049);
    msg.setSource(46396U);
    msg.setSourceEntity(21U);
    msg.setDestination(15568U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.7779456058740508;
    msg.lon = 0.6826405657761645;
    msg.depth = 0.004730171225320379;
    msg.roll = 0.09152448935346824;
    msg.pitch = 0.759215393456816;
    msg.yaw = 0.12237620558213791;
    msg.rcp_time = 0.26723268891547025;
    msg.sid.assign("XLWUFRMOVMDQVKUQFPUKWLKELCLSCTQWQCYQAYZXKSFZSJMOTHCLINLIMVDXEHVDKPXLCNVR");
    msg.s_type = 148U;

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
    msg.setTimeStamp(0.8669399497562161);
    msg.setSource(25252U);
    msg.setSourceEntity(97U);
    msg.setDestination(26106U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.8251215828628186;
    msg.lon = 0.11702406249100694;
    msg.depth = 0.7858604321922955;
    msg.roll = 0.627033562486431;
    msg.pitch = 0.4361953909824351;
    msg.yaw = 0.5367534532894424;
    msg.rcp_time = 0.1599562193540226;
    msg.sid.assign("KKYLKNKRIDHSAXUOEVRFCNVSXJYMJMGSVIUZLCIBJDYZJHRLTODIQTMGQTUNNUBMZKYMQEIATFCOVPNIDHKCCFAQTRYTBZJBWV");
    msg.s_type = 79U;

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
    msg.setTimeStamp(0.12544744372700156);
    msg.setSource(20250U);
    msg.setSourceEntity(38U);
    msg.setDestination(40331U);
    msg.setDestinationEntity(58U);
    msg.id.assign("VUWEFIMFCALMTEZRUWHPQWGKDXGDRAAXIHFFKJYSPSEOJDYPKODXSLOVRNAGQSUTJTXGREZCVBZQSIAZNAYTBCPQ");
    msg.sensor_class.assign("AFGIXCGBMCWERVBVP");
    msg.lat = 0.39537263902052777;
    msg.lon = 0.051683923400922205;
    msg.alt = 0.34205821530729985;
    msg.heading = 0.8789930977399404;
    msg.data.assign("ZGQHCNCRXISXXSROKOJKDSBBWHZSOFOQSZNTYEGVRNOZNQRVYVSDXKYLCSIGMPNVXOYDKLQZXFNAWDNDQBHVICUDQIHTJKDDIXTWPWTMUHBLFYTGTNCAGYYZTEQMBULP");

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
    msg.setTimeStamp(0.2288416921032147);
    msg.setSource(27721U);
    msg.setSourceEntity(20U);
    msg.setDestination(3449U);
    msg.setDestinationEntity(33U);
    msg.id.assign("IEUSDFLRPZQBWDLAEKTJXEVCJQVFEIDXGYPYSCYGBFGEFIHUIPBTYOSCHVJHDZEXZMXTNZQDKSPDERLGOMUXGAPE");
    msg.sensor_class.assign("IJJXCDNQDQGCHHZXZLOKGUPSHXPXBVBHHGALFOYFFHKRSJWODHSFHKKNAXGOEJIJUYTZFJMTBLCXCQWVMAFZVLQYWBVYPWCPCXDNOMTIMUYABMTRBGIOLAUGWPJGSKSUOWAPTIKRBRYIKZVMJRQUIVARLUSPLQKYWERNPDITVNRDGQNBAETDUDL");
    msg.lat = 0.2641650925288218;
    msg.lon = 0.8717045171480116;
    msg.alt = 0.9048145140456548;
    msg.heading = 0.6509266997397791;
    msg.data.assign("KLQDDBONXREKMMGUPJDAPSZKJTEVGBAIHAIRAHOAYFGWJBGOZENVBQHPQYEPLWROMTEVLZQCTWVBNMTMQTHVOPSMCZSSNRYLFHSWFQLHJELKIWPPWJOLCURXPGVGVXIUUGTUIKKOWASISOTBXKNGDDACJFKTDJHNNYDYWKFYPXDZFNMGYAINYMBZLCHJN");

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
    msg.setTimeStamp(0.06330355324674031);
    msg.setSource(26018U);
    msg.setSourceEntity(189U);
    msg.setDestination(18119U);
    msg.setDestinationEntity(78U);
    msg.id.assign("ZYTDTKWCEHLGANLJTGXVMTDWSLQDWEOFFMQTVRXBSHNQIPLLZCFPIUNAHXJSINPIJKAPXSVYVCXHMVPQDCBXGYSARUGSPTAZGEFHNADLUGRINDJXBTMQQUENOFOGMISCCWMPMZLUSEHWFCFXGVZHVOOTHRS");
    msg.sensor_class.assign("FBMMLTSMZQDQTJOIEIBNKDLKGGDKSFYOFVCXNELSCFIXXHAEPXPPCNJMNBMVGOACCUSZLKAHAAGSULPETOGROWTURSLEVNVXBTWRJYTBAXJCGBHTYZYPAWNWGEAUDAIMDGWYSXVUFZPXKYJHUBFBKIZILRLKURJEJTPDKROMUKLJNZYOWGUQEWFRMNHIIYJNTQMZRHQXFQBWWXHCPEKWCREGNSQCVHZDY");
    msg.lat = 0.29118729179071245;
    msg.lon = 0.573633890907061;
    msg.alt = 0.1882898506476508;
    msg.heading = 0.39857277563143023;
    msg.data.assign("TGHNKYOBBPZTZASJAKRVBOIYYRODTESGFCQXUCVYAMFQAWILDLPDGRKWIHSGDYTNUYKRZGBHFZBEGWDXSVPHHAORNQFMLLXNQUASQMIHJEDUIMJHJVBOYJFTCBONPMWMBQWSZAJPNAIZTZVISVKUVQIRBEYEROCNXHLNILPDMWXFECKVMUJCJPGXWMRFPGKXFXQZTNRKZFXWCSJLUQKINLDDSJUYZOTY");

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
    msg.setTimeStamp(0.9369535174474714);
    msg.setSource(47484U);
    msg.setSourceEntity(218U);
    msg.setDestination(4140U);
    msg.setDestinationEntity(76U);
    msg.id.assign("KMMOADOHEYIOKLRXURWUBLOMGCLOMFIN");

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
    msg.setTimeStamp(0.6317355802477739);
    msg.setSource(18148U);
    msg.setSourceEntity(20U);
    msg.setDestination(27017U);
    msg.setDestinationEntity(124U);
    msg.id.assign("KHINHURVCLVCVOKSWMPHKQOKWSXEDYLMPMOJXSNFEJKPJEIZLPQQVTMBUTIQBDTCAXWRKCJPENFMESSVDXVEAUHFXDLGGABTCIPJLFBHQNYZPDEWWKBIHBIYXBDRWNIZLVVPEZAIJWLCWDYANNGUWGMRJOJFZKGBTUFZOSFMCQXUKPGAYQMESODOBYUADNTIQMXCQO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IYYCHVLBJWMVWKKXSYSHTQCRXBHPQMZRSQLAVOKBKAODGGCEPFURWDFXWBEQOHZZSASLBGGNGTFFJKIWAPKVOPIXPONLKABDZXRCAUVUGNCKPWNURRYFYIMTEYHLXSYIUHPJOWQZBDQFCVNOTIXDGAUMFQLREEPANTLGSRMYZVWJNDLOOEHVTHISUUINKJJRZ");
    tmp_msg_0.feature_type = 68U;
    tmp_msg_0.rgb_red = 243U;
    tmp_msg_0.rgb_green = 87U;
    tmp_msg_0.rgb_blue = 89U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.20667059866762405;
    tmp_tmp_msg_0_0.lon = 0.7726150475226101;
    tmp_tmp_msg_0_0.alt = 0.9517789001480109;
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
    msg.setTimeStamp(0.5889227110309978);
    msg.setSource(35557U);
    msg.setSourceEntity(139U);
    msg.setDestination(8604U);
    msg.setDestinationEntity(19U);
    msg.id.assign("VHSBSWHCPNKXRHCBYWECZKZANPEXBBOZX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AMLIHOSWJNSHBXIOWVYCWDGUMDBMSTNUNRVCGCATFYJGHYLRQEGUIJAWYXFSYFSJJUGPSPQRVAWOMAFVTXTKFBVIVUCHKKFDPXLUEOPZCNRPVEWHQ");
    tmp_msg_0.feature_type = 93U;
    tmp_msg_0.rgb_red = 113U;
    tmp_msg_0.rgb_green = 227U;
    tmp_msg_0.rgb_blue = 109U;
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
    msg.setTimeStamp(0.7175121927816398);
    msg.setSource(60660U);
    msg.setSourceEntity(218U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(155U);
    msg.id.assign("XTAYOIZZXMMZUVWEFNNPDKCJOSWTGGQWAUBGJZBGVQXBRZSC");
    msg.feature_type = 44U;
    msg.rgb_red = 153U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 193U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8915970237027531;
    tmp_msg_0.lon = 0.8142411871221386;
    tmp_msg_0.alt = 0.1986992311114334;
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
    msg.setTimeStamp(0.34241675022779905);
    msg.setSource(22871U);
    msg.setSourceEntity(210U);
    msg.setDestination(56285U);
    msg.setDestinationEntity(190U);
    msg.id.assign("WAJBUHNMGYLBCRRRWPDHVAYUKJAXGSYRFMZLQFUDDIJBEIFQMLALUFSEBSDZUUOJYKLOKGQCISKECEXJBMFHIKDINJNEYOG");
    msg.feature_type = 121U;
    msg.rgb_red = 163U;
    msg.rgb_green = 245U;
    msg.rgb_blue = 171U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8864045144139364;
    tmp_msg_0.lon = 0.9708862935907772;
    tmp_msg_0.alt = 0.5833345508002251;
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
    msg.setTimeStamp(0.7124316246114862);
    msg.setSource(47801U);
    msg.setSourceEntity(193U);
    msg.setDestination(6666U);
    msg.setDestinationEntity(103U);
    msg.id.assign("LZBUYJSFIOIPZIEJKWGLCIQKMHGNCANVJPWTNTCAVYFFZWGQLGRNRRJESEZPWCCNFBNXPQAKPQNTULZGHYQQKQAOUUFMMBCOXRHFTRBXAZTUDUVHXDGTJSRZARMSDUTGBISWBFUDKYBCLCEAETPNMBHPVIXRXBHGOPGOYUJCDLWUJMWIIRSDMYFTSNQLEKWHMOSTAOAIZLVDWKKVFXHJSYOLVFPKYSVNL");
    msg.feature_type = 133U;
    msg.rgb_red = 142U;
    msg.rgb_green = 131U;
    msg.rgb_blue = 74U;

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
    msg.setTimeStamp(0.9769991242048557);
    msg.setSource(19359U);
    msg.setSourceEntity(132U);
    msg.setDestination(62985U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.27191606551957415;
    msg.lon = 0.3982667197388531;
    msg.alt = 0.8257399198670513;

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
    msg.setTimeStamp(0.38254743125529467);
    msg.setSource(61514U);
    msg.setSourceEntity(51U);
    msg.setDestination(4955U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.7472029814147003;
    msg.lon = 0.9809084623440456;
    msg.alt = 0.22754410861487084;

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
    msg.setTimeStamp(0.6447932542713942);
    msg.setSource(65299U);
    msg.setSourceEntity(98U);
    msg.setDestination(59260U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.6185392692093584;
    msg.lon = 0.437410331173397;
    msg.alt = 0.12025756719795355;

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
    msg.setTimeStamp(0.9211288698710502);
    msg.setSource(33227U);
    msg.setSourceEntity(30U);
    msg.setDestination(14850U);
    msg.setDestinationEntity(83U);
    msg.type = 127U;
    msg.id.assign("OBGGOKSTQAXJHTLZYMMPHHFRBLDAJFKHNAPOTLOKPUZTSPNUSXNKOIGFPDMKMJDRIHFLYKNEMPOZQGDAFYSCVWUQMCVBZEXCR");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 29264U;
    tmp_msg_0.value = 57U;
    tmp_msg_0.error.assign("QZRIWORLOEGOXAUUKYFTRDLUIRUUWHLZORIZXRGOYCCLQGHGZNSZYJPVMMVVJTEAIKKXLXHXOSNQWTMJXBMIAMBGVLVBNKJFNRLNTDWKAYRDDRAKEUOBRDYFNSBMTXEYQZWHBWLOBPPMBD");
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
    msg.setTimeStamp(0.04159427112151781);
    msg.setSource(61207U);
    msg.setSourceEntity(46U);
    msg.setDestination(53169U);
    msg.setDestinationEntity(154U);
    msg.type = 13U;
    msg.id.assign("PVAMFRFLUIPIHNAJBOESDACXEBRDVYDTTCIMZVWQWJAGUXBVATATNUSUVNXBTNDRRPFQGFHCRHELDSGKODIGKEKFRYQEGQIYMIHSDUJZWLACDKPFJOKOHZXBQZCXFOGSYHYPSKHXDTLURBXWBZMTAGPPYFMCUZMYKQYQELBSAJSCTVWJXVUKZGPWMZUEWVYQFJBRNKJOWNJZPBOEVWNIHLFRDCLHKNCGIUTXPOJTZYENQMEROOLX");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 241U;
    tmp_msg_0.eta = 42058U;
    tmp_msg_0.info.assign("GTHGMWOOYSGWAYMUAVRBKRUSLPSSTWFIRHJLQMKSGDXQQUZOEAXRCSIOYUGFUKZIDIHMHBETCOWKOTUQOVGOLGMMZDQAXXINXNWAILNEPFJKEDHUTJNELBCVFXIOBLRJCYCLZXHFKBEBTPG");
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
    msg.setTimeStamp(0.5846201043850092);
    msg.setSource(51206U);
    msg.setSourceEntity(146U);
    msg.setDestination(51011U);
    msg.setDestinationEntity(231U);
    msg.type = 193U;
    msg.id.assign("BKLOJDESFCTAFLELSUREISYPXHIWQMJAHRJNYYXXSSHTZRFQVFYUPTIGEBCWGXMCMDGJBKDKMVZIBFSNNPLTEHZUWONWKDSFIGNJK");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 44432U;
    tmp_msg_0.lat = 0.9291317671707428;
    tmp_msg_0.lon = 0.9151351329286735;
    tmp_msg_0.z = 0.6004502940214196;
    tmp_msg_0.z_units = 92U;
    tmp_msg_0.speed = 0.8466050446595851;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.custom.assign("LLNHJZKIGSOYAKZRIGMQLYWKXAIFIUIFSPBWXDDJGCNQVXGDMYYXPFNPBMBCXJSJNNDMKCODWXAHBCZUTQNEWNRCQTYSTSVTVHKRIOYBXOHQHVNTAIWKJGLUVOKAAPHRBEMJXOGOLRJFEQTEFSGVVTFSTHLUYXILMZDFDWJYIOVBREPBUOCPELW");
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
    msg.setTimeStamp(0.7996514588115263);
    msg.setSource(50832U);
    msg.setSourceEntity(225U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("YTTYUUYTFFKEXWQYULEBBQZMCYBNQSJWQVCPHTINEJAJGAKQFOQHJOXSGKEYICVXGZFQROKAAWSVKSWBFOTDJSPGIMOUIIYRBBPQDEBNFOULMRKUIOTKPGECAELCUHZPAYVMOZBWXLDUMRRCDZHVBDLKHCJJBN");

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
    msg.setTimeStamp(0.37630483838093354);
    msg.setSource(43248U);
    msg.setSourceEntity(133U);
    msg.setDestination(36984U);
    msg.setDestinationEntity(12U);
    msg.localname.assign("KDWTGWTCJBVIXNZIMRLDPBPNHRQURVYTNSEPSXDHSCEKCSJJHAPAUMIOQRFOHRSBLLSKWHZUBGDEZGUWEFGGKAZQWMJDQRLGLFMGLCJQZPEMJIVNZDBAMRIXE");

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
    msg.setTimeStamp(0.8097158636952572);
    msg.setSource(36131U);
    msg.setSourceEntity(89U);
    msg.setDestination(17830U);
    msg.setDestinationEntity(83U);
    msg.localname.assign("GXSBQAMRJIRKKWZEVBQZVLDUIGTDMGMYYBZYAEZKZPRKSPSHLTCCYXWYPHAPGNNGJNFSGZHPJFVBGCKOBOEUGTOQMQWFHFUJTXNLFJZAIECNPUOGUVOLVABXCRLVNTXDAWDJCFBMNMQAAXCLCTSZWNPPEWOQKLUFWNDBFTYPDWHHXKROISSVYOMS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UXJFRTTAXPZHUFWTVDPDRSZYLBMIUMCOREWDWEGFZYOLWDHCKGUWRFKEGSCNZEQRJIQWAQOETP");
    tmp_msg_0.sys_type = 194U;
    tmp_msg_0.owner = 59755U;
    tmp_msg_0.lat = 0.9123863040596747;
    tmp_msg_0.lon = 0.5327735790538307;
    tmp_msg_0.height = 0.9024867763765562;
    tmp_msg_0.services.assign("ULYCUJFKBWQFOCDTJYOAQSSJEHHTSZUMSGSUIGTQNEFMOHOQLAZVIJXZLKPUMPYPIQVXSTEHZKEZRLUJHKYKJCANXRCWVIDMNZGDWMBSINMGUZFCDABJFPQWHDGVTYPKNYOKHRBIFOXVTLNGGCCJXDXLQAXTRGYVRDBCDARVLJYWATQOZDEEFIWEVZCHMVLWSFRXABMUJINWEAZWSOCEN");
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
    msg.setTimeStamp(0.7158306600073093);
    msg.setSource(20327U);
    msg.setSourceEntity(177U);
    msg.setDestination(49322U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("PWSYXZVEFCGBOMWIVRBCYKZBKTSVUZIFURDXEMDHLSYHWXOJGDQFNJUATPOGLXIVAGTZRKKSOTMCDSCNTDTEUGBEEUXTJULDFJARLBNCEMPOSVETFFPAFPBQYIAPXVQWRQXECBKSJHZDIWQIZHA");
    msg.predicate.assign("GJCKOHTUESPE");
    msg.attributes.assign("UYYSLUNZJZPGMWHKQZLJFRDHDTZOHISYXFNSUISQEEXAEIKKMVVIZAQIJXMIDCASMBVWOYMZWZNGQFLNZVDBBMBLTEGOVZOSBWNIAYSVFNUBTPDFAWKGGPTNHSNCPQICBYCOWRPUAJLRJPONIKWDJRGQWGWKRTQRXDOXPKKYHHUCKOPOQFAJRRADLHVLMDOYFXUEYLXEGRNBHUZCBEXJGRYCCJFFHFCTEDSV");

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
    msg.setTimeStamp(0.6762600791723288);
    msg.setSource(12174U);
    msg.setSourceEntity(230U);
    msg.setDestination(25129U);
    msg.setDestinationEntity(33U);
    msg.timeline.assign("SAZYCEBVGBFWNOBWLVVAMHSCRMLNLEGFWEWTDPBQNMUHVWINGQGJHOFDYUQHM");
    msg.predicate.assign("QJKXBIBYPFFTWBZCTHKVLAPHIXMNYSTMMECCOWCRKQWONJSSZBNVNGABRMEODAXYJBDERHVPYUIZWDDPKRFUCOJDDWYCYTQPEPKDSYFQABIGZOFITVISWELCEQHXEXDCTTLCZHUIFEALMSFZHZUQKQJMKJXMSKUEOOVGNAZYNUDWFPMXBST");
    msg.attributes.assign("NCNSUFBAACRWNOLPYEPTGVLMLYFZFYKDQZSPAVZLIKSWGCUWJGBTSHVBKXRMZKIWLLLOHACQHBDCEPGMRYPRSQQMOWAQNSUSXVGYFEIZHKVVSCJTMPHQGTDQNDIAENAKOCUGDIXFILHPQFAZMTUXYEOXBDKRZWPNTJWOPFBFWZRJRUNBORUDAZJBDJYDXBTJOJMTIRTMUSWXGGUIKUYCRXTYVWNHKEXZQIJD");

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
    msg.setTimeStamp(0.11412291663722107);
    msg.setSource(12702U);
    msg.setSourceEntity(213U);
    msg.setDestination(21506U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("EWRSTGJHUCVDORGHBBFJKHTIOMPYCNYIEAGPUNAHBSOSYNRUUSQIAJBCLBGTQPPEKFLNJSELNSIENALSHFKRPPJSWMVTGHWZXDJAJMRXUCQFMFAVLDYHEZRYXNEDKVKNUGZJGB");
    msg.predicate.assign("NZIGPXMIULXAWVWONZUOWUIEXBENCTUJISZFSXYQLGNVKRGZCQDAIOAYPYMGMNIGFXHJGBCVHPXMFSWKRSVOFRXZOZWFMHMQDHNAWHXZLYDZLYDWKKJHKAMCGRCPQZETOJKTLPRYOPNNVHNCLWVLPXOCKBVULOVXQYTYDUTLTIPAQYOFKFFBCUPDTKETQRBSLVSDHUBPERTVWBEIHGFAJYFIMJTEZSBCJADJSSHUQQQRREBJDGEUGMAC");
    msg.attributes.assign("WCJEQJIVLUUNMOYEYWEMZZDBLDJWXVFIBRHTJULJYDFSXMHVHOBLIXANSONKHGJBGVYGDNZPSXZGIYNTBJCZRDEBDQVPEWBCWKVAARTVGMHUPNQVAHQUGOZUAMBEDFYDUPJRJKUKOCROCWKK");

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
    msg.setTimeStamp(0.2864547297325396);
    msg.setSource(31792U);
    msg.setSourceEntity(181U);
    msg.setDestination(63626U);
    msg.setDestinationEntity(92U);
    msg.command = 47U;
    msg.goal_id.assign("INCPKFOJYTKDWJHQXKQSBUTFRWMEWRMCTGKCDVWMDTAVOVQVRFELPEGDNRGCEBZMFUZHNPUZHKOFYHSSWBIRZLLANVPXSJUJZNKQNURSLKQZDHAITHVQMEGZQUARPSIQJXOFBPYJBHXGMOIXGEXUDNVEKBMAJYOSIDRPVSDVHAZYDPEOBUCMYOUSIJAMCVGFABYTRQCILCYOPFYITJZULECHEBPNLKLXZOWDARQTHNYFNXWWTIF");
    msg.goal_xml.assign("BTNJDSCWPVGAAZJNCSZBXMGKNHAZBFMTQIOHRDVGCDIIYKXVSUCBNMOTAPSXRWFZTKUSRYQIULQEARHURLMFCMVODXS");

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
    msg.setTimeStamp(0.8834563231302921);
    msg.setSource(41190U);
    msg.setSourceEntity(1U);
    msg.setDestination(45287U);
    msg.setDestinationEntity(244U);
    msg.command = 240U;
    msg.goal_id.assign("LFGNDYEIYSOANHUPOLEROJFYMSGRUZAJLRWGSDNRQETPAFLRNWFKCNMWMCIHFFTPQCFBGPALCLXCXOISX");
    msg.goal_xml.assign("RNCCJDUCLIICAWDSBSHQUJIVLAKYPZVIEBYOGQPSGKOFSNNAXTETHTGQMQVRAHCFOKLWAWNZDIZZLQKAUOKRVSBYKJJRMGXGDZTTGVTZBLSDWGFKRXWBHSIUTDHZSOEXEHMRVAJJUPPUONYMVXVMQUXWHXKZTMEZONAQSPOROQ");

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
    msg.setTimeStamp(0.4055856808326025);
    msg.setSource(20152U);
    msg.setSourceEntity(65U);
    msg.setDestination(1770U);
    msg.setDestinationEntity(172U);
    msg.command = 109U;
    msg.goal_id.assign("PQYTCSCLKDBOISWXKHYUENSAGAWLOTMAEUAQUXCFWEJMPHOQJXOQEMZRTTHZBLUWZAJBWWKKADQEDVCKRDABXYKNXHFELBTYTOOFJBSRCEIXGRZDPGDKCLINMXYYCTVLOLVBSUAFIFGWPHYVVQZHETFNBWCQHGMCNWQGMZJGXOGUZIFJNJPRGRUITMYHNKHRVPS");
    msg.goal_xml.assign("YZYNOFEWAISQKXYBRWLABGJKYMUFBEPVLVKDMVSMREHSSFOAXKJINTLHWDUQJLBKRQZWMRRFULYBZOOZVKYPHVZPCDRXZEMUDTBEWGSOAXDKCKOHSTPQLNGONRHVXDNHWZCQX");

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
    msg.setTimeStamp(0.8943580014855568);
    msg.setSource(38315U);
    msg.setSourceEntity(237U);
    msg.setDestination(47800U);
    msg.setDestinationEntity(98U);
    msg.op = 132U;
    msg.goal_id.assign("PHUVBATLAIUGTJJAVLMONVNKQEPZZLQRFDDYMNKYUYMOQNCHWANZWROXVTPYJSYFLSPADQGJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CBLCPGQYPKMGIEZHBKUITPVJNQGHSOLJWADIZHVHQTVVDCBFDHSALLLGHKMXDQHOUDTAYEGREEZTKWKFJXOWPMJLUNAJKORWFSOAKSPBGTOTCHJBFDBDHIZCPYSXVSGWNLSFAY");
    tmp_msg_0.predicate.assign("WOCXUKDYNMZYGQFHACWVAOPCJKYTKYPUJDTIYEHVBNFBKFSIUGXARJIHIRR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WQLIRHLHKKCPWNQTMTHMSDBREDEFJMSEIEFVZQOPYMAXZIGTLZEOIOYMGSJRIBXELFKZBTKMCPHYADBFDLRXVFGCQKYJUZCTXZHBBRWLCAPDKJNUWEMAHGVTPMTYXOPCOYAWDOLKBZYCHFJDJYIIDPXNFLAJUIVHOOGGBPQBEVTZROSRAMFASNVXZQSLRHUUDTRGQTMIGHCPFLQVRYNVXNFKUEKJWESNBNWZXWDKSUYIOVQACNUPUQAJVXCWSG");
    tmp_tmp_msg_0_0.attr_type = 88U;
    tmp_tmp_msg_0_0.min.assign("GVSWQWYJTJIBLKIIMBPRPDHYINTMHATRDSQMZBHYFBCBOYRMSDNWJTEJAFDIAKJKUJFKSTEYDCWSALYFZSZUQFXRZONUSUNGBFPJCXKRMPOAUQHQUHKYQIMABUYVZDLWZPKZFIPVNJFGPGNPXNUDIELMOMZXSLOWHMBJWKHQEQODHHQDTNACUOHLFEXEATIURVJXVCNCSAAKGEEVTOZGZXIBGVKLGBOVXCRYEVVPWXOCYMQRWXTRW");
    tmp_tmp_msg_0_0.max.assign("EIDVBQOYKLBSKICZAJTDDGPAUSVMCQQLBOZVGLXDTDNRRHXGSFFEHEWFBBHWNCSTVGYBJMHOTA");
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
    msg.setTimeStamp(0.3629459887491049);
    msg.setSource(38343U);
    msg.setSourceEntity(170U);
    msg.setDestination(42518U);
    msg.setDestinationEntity(214U);
    msg.op = 186U;
    msg.goal_id.assign("BCXYPCMLWOSYHKBEHKIGXFQUZNEWBGXHNHJZNDAJZSQOBWQJOVIEDIOTRILIUACVOHXICGPRFVT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XYZOAKRXBXMHVLVGYDIRJJAKMQJSPSACCYHFDETRZPZBWAITBRCHDTTHUDQLUSFLEXSVXFFSKIQHQVDNCEYEKYKDOPJWBYRWGAAERGSCPTATNMHWWCQUFVQOWPFHHMKSFOILOLIJPPOMHBKZBEJVNTZGBMPCHOWQMKJXGKSUWILENNOF");
    tmp_msg_0.predicate.assign("MWFKSOMGNZNLNVAHZDTRRTYESBURPGUYFQEVHWDIBWOQAUJDADSIQXGZFJOVDCDGNHOOVAINCZGICIVKJMKXPNKHHCIZFTTAHUVASOXJUXOOLVMESGUTKSKBJGZEZQCMFFEUCACTNURMXUYSLLRWTYTQHCPVXIQMBDLFYKRAOTIXYUPEKPHBLDBYMXXWRWJLIVZEBBFXRIKLQYZWSNJLARLRGJGFPHTSPWWMQPAMGNEND");
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
    msg.setTimeStamp(0.8131554113586612);
    msg.setSource(53570U);
    msg.setSourceEntity(45U);
    msg.setDestination(61219U);
    msg.setDestinationEntity(4U);
    msg.op = 197U;
    msg.goal_id.assign("DCLZWNHHROYTESUVDKKUJKLGNOTJFHBLARVUYWGMPDGTQIDUPLXDMJHHIIYFMCEKXDVV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VGZMCFIQTILYCQGJTSTCPEZJOOZHAXWBKTFSPBYY");
    tmp_msg_0.predicate.assign("BNKDXITKHUQOMLSSPWJDLANIKZIICXUDVFCHGFRMZFYSZWCEUJHDLNWEYCRMRYRZCZYBJZMWANDSHJQOWKAMHLAKHYPOQJIZRQEP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KGCMMQIPZSYWIRUVHAHUOKTLASMNBEVNDNNOMWOHWZERQPBYSVWTEJXUEDFMVFREFRBTNAHEGBGCWQVYFUVXKLKIIORIJFYUQLXOVPKSQQLDXSEWDSMOXDNCIYGAKSDPZQKJL");
    tmp_tmp_msg_0_0.attr_type = 11U;
    tmp_tmp_msg_0_0.min.assign("PXLKTPPDHVMDDJMEYSWCFWCBZYINLWMYXIWRQYFTBLHEIEUJFDDHJQUNFBMLIEQLUOXCCMVGHZKINGSRKNONZABQDDMQAGLICPJJPKGXFBZZGPHXOBQOABTBXWWUQSVVTKABMUVRJDNISNYGBHAARXYEQZVHQOWCSSKEYJHPXTOUNICKTCZJJKFVIKULUORFYADXEGTDESWNTFYAELPSPOPKQGXCCGAUEINVRZVTWFR");
    tmp_tmp_msg_0_0.max.assign("ENBJXPLUYLWBOMMVMBCSOEUXKTHBWLAWNDNYRUBOXVMLANBEZDAIGKZBNAPQJTSCDXWWHQKUJCTYDOKYUFZPCEQIIPMHZGHHRJAYLVEUCCTKXLIZJXGYXSSWDVLRHFKSPAFHHALBQZROJYSOOCGROEARSYQMFTQTUDPAGBPKSMRI");
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
    msg.setTimeStamp(0.2603548687714361);
    msg.setSource(55153U);
    msg.setSourceEntity(198U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(96U);
    msg.name.assign("QFIDCHZCWYWSLCMKQRPQDNEGNLGBUZWQHX");
    msg.attr_type = 97U;
    msg.min.assign("WKYGSULZHLGYTRFF");
    msg.max.assign("HURBGJZJWFWLAOGISWQMUXFVUSIMEAEQOGWMOFXCQNMRTGDNIFLZDGMMSXRNUBVHIUTNOYTWTW");

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
    msg.setTimeStamp(0.9502100475431335);
    msg.setSource(31847U);
    msg.setSourceEntity(27U);
    msg.setDestination(25771U);
    msg.setDestinationEntity(202U);
    msg.name.assign("YBPOPSAMIIXCRYDTSDBWODLQ");
    msg.attr_type = 222U;
    msg.min.assign("IOPDJRJCXYLMCMSDFZIIYJMGYFTPUSVVRHTBYAOOXVNDWYFPIOFZYSUAZSHSTMPGBNKKTRGDKEHCWNVWSWQSZLTVGGMVRMFQKUHNCJNXLANGKXCOREIPFACLPQIOHEADWMHSXCBKQKQRYZKHRWRXJFLIMUDVBGPJJEVVIZQCNQWRUUXWZDQUQFBGQBYYCEOEIFMLTDHKUBLZALWVFTTOYHRSNGPGJTOJEBPDBMBWUHELKJPAXTAIZOAXANDE");
    msg.max.assign("MFDWPEUBHLGIRNVNTOTBMDAAFQDYIZKLZIJLQVJIWUDVGGFLXZCCUSDANFTNFRPRNECTYMBBFHDWBPKCWYLRSYMOCNFOHRZAPU");

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
    msg.setTimeStamp(0.7508765718961466);
    msg.setSource(37313U);
    msg.setSourceEntity(177U);
    msg.setDestination(40345U);
    msg.setDestinationEntity(208U);
    msg.name.assign("XKGMAMKBVSPQCCAKVIZRNQSCNFGRQSXRZQEEPJUZVZSONAMGYBBXGBIWRDEUXKDCFWJDYSMXLEAOENYIGUYCTAKUYVMUKVQNZFINTLBAWKJPLODIBKLFCOPOOSODFAUEMJJVUD");
    msg.attr_type = 6U;
    msg.min.assign("JBMNPGQIAQHIOZAEPDHPJTPWAKZXKFLRAZLDAGOUCIWDJETQFMKFOPMAQBHFQBLWICICYTDLDADXEFKMMDPNHGGZVBRYFXRMHWUHLPSSTSAVGOZQRZEBBFJHLMREGJGUYKJIWREZKWCEITMQCVLJCUAORDYYFSBBSOLBGO");
    msg.max.assign("SABIGVDYCHHQWTONXVBPECIDVDJEBOOJDPARFBWFUKUNHSYOIFZZUFKWUXRKJZXEJHUYWCDTRLUFTODZKICADFENNVMFTEXBVZJTYZHULWPCINX");

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
    msg.setTimeStamp(0.7909905091109323);
    msg.setSource(24723U);
    msg.setSourceEntity(221U);
    msg.setDestination(63530U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("KFJWGNAYSMJDYPOREDGBQAGCKCMLXOISUCRQITURRQWQUEJEAOYNTUHGCLTYLUEMMMEYUHAXDBSDNMKVRDNOVTBBYGGYWFMDZRFJCWKPNWCUVZIQPHZQZWPEAZHOQDAECSTKZKGTWFTBRDAKOUFJEMXNJUSHHSPPZPBVTVQVPADGXNXVSWBIRSLWCXSVZGPXKLLHBEUFYKAGHONJVOWHRIITIJXRIKZZPOIFJFFXXQQVL");
    msg.predicate.assign("RKALWGAJDUYBYKOIEOCZDQUCRVVNPFGVYIEXEUXERYLSFPOFUOEISAOULAETYWUEZSZWYDDHYTFWNATFQXSWLLT");

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
    msg.setTimeStamp(0.7275858492686689);
    msg.setSource(27786U);
    msg.setSourceEntity(110U);
    msg.setDestination(15149U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("NYWVQNASXREOIJSHYNMPWOLDXWIUUWTJAYPJEUFRHWESAWEZZ");
    msg.predicate.assign("SQSZIXMBJHGCJSYSDKKGZWAMOIAVYSH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RQTPWSXZKIJENNPLDJOAEQWXMHIRHBARBJMGZMUWKQBGHTNCJRDWPIKEELMAFOVANINJMWYPKCTTFXLIHYZURDOLSVUQFCRUIJNSSWTHDFOOMCHHBQGQSPVDVUKLITVZSBRKYMWAXXAYTQLQFYNDJGTVWEAFROQVGXKGPZZBETPYJZKSLDBRFYXLFIYNETNPUCGX");
    tmp_msg_0.attr_type = 196U;
    tmp_msg_0.min.assign("GYLFYYSEWSZZNCKTMINUKHBYWLDDUUQMAWGUWREBARCJGHXQYBNQCOMOUGEVQXCCMKGTKZZPWOWWFLTSJSHVVVSYFJBPXGJNMCQPJHFBPNVAANKTJXSRCNIWBVPHBPHFIFQDGXEIXPHDORJGUVNIB");
    tmp_msg_0.max.assign("BBCXXRMPMOJQKAOBFTHDQKTBVRYISIJAXQKBOTWFRUZVTLPQENLZTGYWVPVFEIUNNRBLAMBOIPGDXKEUACZNOVPFDUDSGCEPFBZVRGWIWGZRIAGCDHDNZOZCQHUCPBDSQMXSLFHPMYWMXWENZZKYYNOHUKEBNZJEXUMHNAWQCMOXJQAGRGUIFVCLM");
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
    msg.setTimeStamp(0.7160090275910074);
    msg.setSource(1470U);
    msg.setSourceEntity(228U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("ULVRRXRNHDPLTEYWKWMFDVMQBAZEHZBROGYPNIXJMCWBZLQNIWMOYTPSQYWQQRAFJJVJSGDAAEMUYDJXHSG");
    msg.predicate.assign("LGPWNIVLYBUUMRRHKQOVZRQERYIWLNPHRIATWCKYQLXBSAKQCJJDLLTNGDLBZOSTJMGOBEHJVSAUBWZMUKEIBCDMSVCNUTGBDNILUXQOYEFWJEHESFPJFRYAZORSXRDWOJLYXKGJEMFZQHCIXXMLEZVYACPKQMPCFRMOXFFSUBRPONTWEKDAOPPJTCAGMTKXTPUDDKVDQACVWXUGYHPVTIH");

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
    msg.setTimeStamp(0.8068285476407782);
    msg.setSource(7851U);
    msg.setSourceEntity(233U);
    msg.setDestination(41647U);
    msg.setDestinationEntity(10U);
    msg.reactor.assign("RRATDLUFXEHHZWZCLLJYTKEQUMOUCMANDLNDLKJMKSCQZDPSQPVTOSSRBFFUVS");

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
    msg.setTimeStamp(0.046276123822502124);
    msg.setSource(3746U);
    msg.setSourceEntity(124U);
    msg.setDestination(2996U);
    msg.setDestinationEntity(160U);
    msg.reactor.assign("AIBHNAWCYMFNRDULPUTJMOIOOUPCEJPMAHBDJVZVLVSEVQBPAEZWIGYFXWYBJKFYJXERYPVYWYITFEJTIAQHEZTLQGJJWMQWNXGPEYSXSKSDKXAGQDHSCHSDFAKSFCRILJDLYOAZKNVYMNOFQWXUQIQKMFNHOLRICWZVJMAXKTEMURLGTRDPLONUSAVBKBNNTCZODHXHHOCVLRMZXMQCCGTFPIODBXTBGGPZNRZZTUUPLWKUSEQHWIVBKGR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CYDRTGSIPDGYXJAQEOOPBUJDIIFGFJYXGECEARVMXNBRXMUHEZNYSHVMHNFAMQKVBXAKHFEBNNSKDWTLSXGZWDDPLTZTJHCIKYCLLTBWUQGKUURMHGYHSEWYAKHZHVEIFPOZWLLRXRIVFATPDPKKCQWOJGJXVGLSUXBWEOZIQGLJNINWFEWPNDQJFODVBLAMRPJRSXTISBCKPV");
    tmp_msg_0.predicate.assign("KZCMJPLHTQRBERKNNHYFDGCYUWOEAJQBERJTAZFNQFNHPCHBGZWILCVOCWNENMRSFSPIIAQDMORQS");
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
    msg.setTimeStamp(0.7229421849510185);
    msg.setSource(51007U);
    msg.setSourceEntity(237U);
    msg.setDestination(52215U);
    msg.setDestinationEntity(250U);
    msg.reactor.assign("GXNBEXTPCRLHOCQNJGWEGKBRPJBMTCVWKFYONYUOE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SDKMZQWLFOZEBQSGNVQKDKTOQTARUNABVPITJUHVSKYJPLYNRDDJXWKITGMEYVJCMMQUSAFHIWXAUOVFJZSLLXEBLDVQRFHIFXCVYIWIEFFACOMUNAVBHXULJGWJWJYYQQKRFTKPWWBNRLDNTDDHNHBEGYTFKSSRGDCHMCCYHLHEPKMOIIMZGLBJXYUXKFECMNGUAUPHQYXTIXSBGCMPCLRCGSIAZRAPRENGTPJQOPENEAOSZUTVBZOWRD");
    tmp_msg_0.predicate.assign("YXNFPYSHWUJEAEFFEWUTMWHYWCDRFHQBAZQAWYLPMJBPXNSGSCOMJFVJPOULCESSHUSNXGAACJNTOVHRAIMDYTQCWBUPYTEXVIMAOK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AWLKUJPEYQZSIEYMSLWNLFGJNUXFMGHPNTXCHVBPEJKDKAGUMFPTBXNWSWTQCTCYTXITQIVXEQGGZAQBAVZPGONNUMPEZLYDTNHKXTSIJUTZQ");
    tmp_tmp_msg_0_0.attr_type = 129U;
    tmp_tmp_msg_0_0.min.assign("CRRTJGYWXUAODXNFYHVBZHVTZBBSINZVEIWUMZYVGACVMTCEMADPPDSIBBMTQNPMSVCGKNNUHMUKOLDPEYVDLZRFUWRHQIEEOJIYO");
    tmp_tmp_msg_0_0.max.assign("QYKAPBKPJNMUWFEQDRPKKLJDQNBHHZFCACFZJLVZRBVSWCTZHNJTLBGQYQWIUNOXTXVKJOXPBUEXOPFOPMCBBPYRGFLISTHGISMDWCZROZEWKTHIENVCTLKAVUUEDIUXMSHZZJRPBFTNFVXIAHOUGALVXABYILTSIRGRDGKRHIQMJFAGMUWSYUHNLXCSLJPGQSYDGDUOOJZXRYZABQCDQWREMVEPCDNXQWVYJYHOGYMFSNMEETKKF");
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
    msg.setTimeStamp(0.47146034566838435);
    msg.setSource(22026U);
    msg.setSourceEntity(63U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(151U);
    msg.topic.assign("SUQIAEMHVACXNVWMFFZPVRHHBCRJFXTKNVGJLM");
    msg.data.assign("LWGXOSOSCZPWGHUMKEUZVQFLZFEJMCRPOBVJHOIIGNYJENXPOJHCUGVDRZMLGYFLEYJAYLBHQAPHAZXKGTBQVEBVAFUDYFTBCYXZHXDPPORRXTGTFBKVKCNMQIQNFCDSKGG");

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
    msg.setTimeStamp(0.9497295785636729);
    msg.setSource(16606U);
    msg.setSourceEntity(189U);
    msg.setDestination(15435U);
    msg.setDestinationEntity(0U);
    msg.topic.assign("VMWCIGVRHYGQCWUPKCMNEIZTTZYUWYOVQGJXSTROVGTMMKJJEJZNBASVUWPLXNEZJBVYXAZL");
    msg.data.assign("YJLXCYZWNYKNQFQJUIGXLDJARSTFWQRHTKGKAMFENZETBIQU");

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
    msg.setTimeStamp(0.11728348134667321);
    msg.setSource(61648U);
    msg.setSourceEntity(40U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(165U);
    msg.topic.assign("CEPCXFZNIPFVEYNEZAKBLZZLSQAGBKRQ");
    msg.data.assign("AFRWIDEUMQONAKWZLOXLKJGHLPFTVISSISDDRMXPQZTFHTBTZGMNCZDNKKNAAFPJEPXYGHXKAIPDTNVIWEKZAVBFBMLGQNQMWZLWISJUTHRBOJYPXEYCBZXBLCFPUSLHMOCRXOYGHRNFRGRISPLXUODDBYYPWVUXIIJBGAYDWQZGAJADEXVGGHZUTHJLSU");

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
    msg.setTimeStamp(0.43277170787159547);
    msg.setSource(25931U);
    msg.setSourceEntity(181U);
    msg.setDestination(61186U);
    msg.setDestinationEntity(129U);
    msg.frameid = 107U;
    const char tmp_msg_0[] = {94, 64, -120, 76, 81, 76, -5, -7, 75, 51, 49, -78, -108, 39, -104, -31, -39, -92, -93, 83, -126, 0, -45, -92, -92, -32, 90, 101, -107, -118, 104, 59, -85, 47, -52, 1, -82, -74, -25, -123, 40, -36, 71, -48, 74, 46, 1, -58, 1, 114, 63, 22, 0, 63, -91, 88, 20, 22, -89, 17, 93, 87, 37, 112, 45, 35, 22, -107, -68, -34, -67, -118, -111, -4, -54, -115, -121, 3, 61, -109, -101, -78, 73, 22, -125, 84, -22, -117, 42, -49, -73, -76, -37, 29, 53, 38, 48, -8, -96, -119, 37, -81, 123, -59, -63, 123, -58, 39, -46, 33, -15, -11, 82, -108, -54};
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
    msg.setTimeStamp(0.329645233942623);
    msg.setSource(49939U);
    msg.setSourceEntity(77U);
    msg.setDestination(37180U);
    msg.setDestinationEntity(115U);
    msg.frameid = 56U;
    const char tmp_msg_0[] = {121, -63, 85, 49, 15, 4, -125, 119, 104, 97, 3, 107, 26, -77, -3, -118, -21, 96, 119, 67, 0, -124, 18, 38, -48, -86, -51, 36, 64, -104, -21, -79, -75, 2, -113, 4, -89, 122, -66, 58, 34, 67, 76, 67, 36, 79, 55, 61, 51, 33, -119, -27, 117, -59, 38, -114, -29, 32, 93, -80, -87, -84, 64, -37, 73, 3, 44, 107, -31, 7, 108, 64, -17, 27, 122, -88, -54, -17, 52, -15, -9, 44, 11, 35, -59, 50, -104, 67, 116, 101, 101, -110, 59, -81, 118, -50, -57, 115, 79, -55, -21, 41, -98, -55, -65, -92, 98, -35, 126, -13, 49, 32, -9, -112, -67, 73, -62, 93, -69, -85, 104, -16, 69, 76, 75, 21, 53, 48, 41, -111, -3, 78, 66, 29, 61, -88, -88, -16, -11, 28, 61, 0, 90, -57, 72, -20, 88, 64, 16, 29, 110, 68, -11, -44, 3, -22, 91, 3, 13, 35, -118, 71, -122, -23, 73, -35, 35, -8, -31, -33, -95, -20, -14, 66, -77, 70, -94, 99, -64, 15, -61, 23, 42, 83, -70, -123, -102, -109, -65, -97, -20, 34, -11, 43, -9, 96, -35, 64, -81, 98, 79, 71, -102, 111, 72, 68, 63, -109, 99, -90, -2, -118, 98, 53, -27, 67, -122, -42, -9, -18, 76};
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
    msg.setTimeStamp(0.20610429166400357);
    msg.setSource(40477U);
    msg.setSourceEntity(105U);
    msg.setDestination(64356U);
    msg.setDestinationEntity(140U);
    msg.frameid = 84U;
    const char tmp_msg_0[] = {88, 7, -65, -55, 91, 54, -40, -7, 97, 8, 97, -125, 49, -109, 59, -128, 1, 4, -20, -57, -11, 16, 41, -40, -16, -24, -26, -110, 37, 57, -6, -122, -119, 40, -45, -55, -92, -119, -67, 45, -121, 3, -34, 28, -35, -17, -16, -35, 70, 9, 15, 9, 0, 74, -24, -88, 46, 120, -123, 9, -85, 9, 116, -3, 12, -23, 79, 95, 24, 34, -3, 121, 47, 18, -47, 61, 60, -77, 101, -118, -36, 23, -119, -80, -27, -20, 110, 99, 29, 25, -32, -26, 53, 37, -74, -118, -44, -65, 97, 28, 57, -25, -44, 118, -38, -127, 6, 47, -94, -68, -128, 90, -83, -77};
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
    msg.setTimeStamp(0.680888625764998);
    msg.setSource(33485U);
    msg.setSourceEntity(13U);
    msg.setDestination(20818U);
    msg.setDestinationEntity(60U);
    msg.fps = 38U;
    msg.quality = 134U;
    msg.reps = 37U;
    msg.tsize = 101U;

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
    msg.setTimeStamp(0.2568288820057967);
    msg.setSource(31322U);
    msg.setSourceEntity(63U);
    msg.setDestination(49824U);
    msg.setDestinationEntity(133U);
    msg.fps = 144U;
    msg.quality = 153U;
    msg.reps = 232U;
    msg.tsize = 149U;

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
    msg.setTimeStamp(0.44084019502508165);
    msg.setSource(2U);
    msg.setSourceEntity(75U);
    msg.setDestination(47494U);
    msg.setDestinationEntity(194U);
    msg.fps = 188U;
    msg.quality = 253U;
    msg.reps = 108U;
    msg.tsize = 88U;

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
    msg.setTimeStamp(0.8261433129212139);
    msg.setSource(1516U);
    msg.setSourceEntity(214U);
    msg.setDestination(36518U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.2570984616980718;
    msg.lon = 0.2928283379321497;
    msg.depth = 214U;
    msg.speed = 0.27295908847665096;
    msg.psi = 0.362848904231013;

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
    msg.setTimeStamp(0.47996309069115417);
    msg.setSource(27428U);
    msg.setSourceEntity(219U);
    msg.setDestination(56056U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.21292707750302053;
    msg.lon = 0.1267900789344547;
    msg.depth = 78U;
    msg.speed = 0.0021434921625403947;
    msg.psi = 0.7416432436434759;

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
    msg.setTimeStamp(0.37223687941127315);
    msg.setSource(5552U);
    msg.setSourceEntity(57U);
    msg.setDestination(13930U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.37589576153806004;
    msg.lon = 0.0931190311399388;
    msg.depth = 234U;
    msg.speed = 0.18429583549965178;
    msg.psi = 0.3747125850052174;

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
    msg.setTimeStamp(0.8383691695291495);
    msg.setSource(30980U);
    msg.setSourceEntity(170U);
    msg.setDestination(15745U);
    msg.setDestinationEntity(250U);
    msg.label.assign("AQGARJZCANUEVMTWOOPRUKXTMIZLJDUOMHMQJQDKOSYBSEVRRLPGHNZWOQWHCNWIWPLOBAIPBZBJKWZEPRRHYXNKJPUFXJLIVCJQAFQFYPMIBTVDCGGGGFHFCWWGEFYCFVHYOMQXQZUVHLMEWXKTIKMTTDEALRIBDJADBLCJHNTZFHYUIKFPSDGSNIKKMUGJQXPKSTEAZLPL");
    msg.lat = 0.2061829818587927;
    msg.lon = 0.9084368233467937;
    msg.z = 0.7076438190511926;
    msg.z_units = 135U;
    msg.cog = 0.45070017071113877;
    msg.sog = 0.6877351742203722;

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
    msg.setTimeStamp(0.23751925965337595);
    msg.setSource(12732U);
    msg.setSourceEntity(174U);
    msg.setDestination(24683U);
    msg.setDestinationEntity(175U);
    msg.label.assign("YWMLYQKLQUNXTHUMAEUSJZLOOUZKJFPPUNAINJQONJVSPSECFQMSCAHELGDJEBHHHXNBWVYLFLHVPTNCFSWTKCBCNUYQYMKZEGLVLNZXKSWWTMAZETZAUIKLRBWPTRXWRSAKCDBRIHYVOQJFOWUFURVCXKOMOOZEIHEUGYCDIQTPAQGKOMSJRFIXSP");
    msg.lat = 0.4270440034250089;
    msg.lon = 0.2431511671561153;
    msg.z = 0.6131104411997979;
    msg.z_units = 243U;
    msg.cog = 0.11405332270048818;
    msg.sog = 0.9706617661475843;

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
    msg.setTimeStamp(0.22368691916961858);
    msg.setSource(3763U);
    msg.setSourceEntity(107U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(45U);
    msg.label.assign("MBNHGKFWHECZCHOLBHTELXKCZGVXYFCATBYRMEDXTFDPKUGYUDGSHVMQKYRSKBAOQWPCUNAAWLSRDDWJNEFQZNKYTBYQSZRFRWNWCKIUDHQSJTBLJTBVZIWZNJEQVKINORPTHDWPSROYFPXVQLJFPUBLMGQIBYCMAGUGMI");
    msg.lat = 0.879868201093687;
    msg.lon = 0.2781733748049211;
    msg.z = 0.8517147681359393;
    msg.z_units = 95U;
    msg.cog = 0.6348182154414519;
    msg.sog = 0.5803713237745097;

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
    msg.setTimeStamp(0.19458391295447075);
    msg.setSource(16020U);
    msg.setSourceEntity(124U);
    msg.setDestination(42462U);
    msg.setDestinationEntity(61U);
    msg.name.assign("QBMMTBMFUPRSBNDWEPZFBUNGNACACHUTVKLZWTKOYSDCVGELWCNUPUITDOPZSLBGDVLXVMIFTFVLKKACEWQCQCKEMXDDQAYFIYILRJFJSXANYKEWJRXQXGLVIIXQFNRXOJAKRWIBJHPQYFUYT");
    msg.value.assign("ZGSIZIGXJHPPUINWKTPUSGHLSVADATDEHKGJASRGQXTCLERTCGRXMBZAQPQAYMTIHUPMZYMJBZJPGVKNEKNCIWOMOZYWCLJXYDSXUKFWBEXTAVQBFTWOHHEQZVMGIPHYYGAFRLNNUZDSQ");

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
    msg.setTimeStamp(0.29360644283444703);
    msg.setSource(15104U);
    msg.setSourceEntity(143U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(194U);
    msg.name.assign("JSDDHIJGMRWZEENJIKVTSTQUDFRQRHCHUORHIMEJWZSHSMBFEUZYWMQZOCGIWITGWRTYQJHYXLOWUWTMPXAMSYJRSGQBQZUJVNXFTEECQDAYOCDLGFTRULYHOLVNVTCCLPKKYUFXNPKZAPBZLAJOBVSGVYE");
    msg.value.assign("CUYMXXIDFHRZXHSTVOFJSIQFMRHMRGANQHMRKTPSJWNSKFXKLMWDFYPRGOJI");

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
    msg.setTimeStamp(0.8346533046296222);
    msg.setSource(33286U);
    msg.setSourceEntity(119U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(36U);
    msg.name.assign("TTNUPGJMRHCSWFCHFTYPJCXRIHYEXBLGNIMUFNAOSHSCQUYVLLRQUQKPGRCBBVOOAEAICWUVVOOHSUMXTJZHAQCNRJLDHDSGXZIKDZVEOMCHXVFBMMEWAUFLKKPVALSRDKQNIZFSXDMZFLSWKQETMDNKTHYTXYBEZGRPNSUDNYTCWUIVBOQEIJKMJZWPQISQZYOTPBGWKYYPBRBAEEPLQLOJZIYFTGMUJRNXRGIXPOEGFZ");
    msg.value.assign("OUBKVCVGSQZSMSMDKUBJNX");

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
    msg.setTimeStamp(0.8910610624626959);
    msg.setSource(30972U);
    msg.setSourceEntity(220U);
    msg.setDestination(1390U);
    msg.setDestinationEntity(144U);
    msg.name.assign("HHMXIZQFJYOOBVKCRULEAIWSLHPMRGMLSJTCEUZFQSDPSOTPUTVIWGBZPEFWATDFUCUXMRAAEREKKUGBQSFBJOPANBJRRXCLIKBBZDLCKABQWHDY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EPQEUPYXSGISKXSKTCHZMSLQRQVNGPGRGJNMWFVPDXNASEPOQTANVFTHADOEDAWJHPZOFPZGVTVGRFJKTFPXMUDCFBDMTLBGAUJQDC");
    tmp_msg_0.value.assign("LPVWCSNMBPLTRDLUFUKCMWUEEGBJLJGAXIYVIZCBOTTYSHFGYXCPZDPVDRUPZWKDQZAQZCABNMQHMWOMUALITJFFWVOKYHQHIPEHBOVRNCSESHNXKMKUGSAYRADMJDYJGREURJXEXGTRIKQZXSTGSVHJCQXLBIBHYVUPFEZOPTAOLISVBUCHWOVBNXQNWFAFSWTOYZDNOXGJOPKKIDRYWRNJDJNAMQLMPDLCTFIEZXQRB");
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
    msg.setTimeStamp(0.6689017572661643);
    msg.setSource(3580U);
    msg.setSourceEntity(165U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(250U);
    msg.name.assign("JOOQCZKFNUGWYZBIGVYJLKCNVIZEHTDYCSBCHJDFUDWCLMGMXLTMOPBZPEFJYPRQXGRBPMIDEWXYGKEOUXSECOWCKDWPWSZXPPUEHLIZVTZIRAWCAQCGHAXHUMFTCHFBRDXZZYPMLYDRENWPGBSFTSNJMDQJQGIEWJMMIBAOFQIONWSRNSJFLKUQSAATHEBFSXQTALQQHNBPLHYARYXJVRZUUNHDY");

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
    msg.setTimeStamp(0.47858107104746495);
    msg.setSource(38880U);
    msg.setSourceEntity(81U);
    msg.setDestination(27188U);
    msg.setDestinationEntity(5U);
    msg.name.assign("ZKWEOUWQOISOIIFRLFBSIXRTNPQLREBHBMDZSQHPMHQCAPIZXSPFWBTPCNPQHAMRLZYGFVNYAJTUKFJFAORPWKNAVVOXWWDXYCUDIIDJKQWWBAODNLYLJYYEOPDKHMVXXQHURSPLPRTTXGKDRY");

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
    msg.setTimeStamp(0.9034712327408256);
    msg.setSource(51948U);
    msg.setSourceEntity(174U);
    msg.setDestination(61924U);
    msg.setDestinationEntity(130U);
    msg.name.assign("CKYURIOWDJKLEFJAWGRANSQCNDTSCOIVXGUKXVCXFGMUQYACWGHTQOECAWLZYSSHHOGHZULKSRIZHZYBXJJTBZJAYWBMNIDGZYXJFYAFEPXOTVCRBZXLMYTCGXYVHOSFBNUMBQTHPSLPSWLANOUDONEDDKTENIRDVEJO");
    msg.visibility.assign("HYIXGXZOLXMMAXGZNQSJTFZPYTFHLTSONMGQEPLWIN");
    msg.scope.assign("ALVXZVVNSASSKESODJWWDIJPMKLZSHNCWMIDJTDGQVERQXBYHBEUVXRZYODPHSKZQKUJQCYEKNMPBKRPRMVFLDNDKXJWFQOHBWQCGHPGCGQWFIZFNBTPRNTYXULYDWHIVKGKMCOYLGXCLLOOGPJRXRABENCTNNTSLHOMUSYVIZTDETMHZQJYWBIZRWDJABGVYAFFMOCQAPOKASXHULFIIABQGSEYACRRFAFUWUZECJPBGXHLJPFUMEVTOETIX");

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
    msg.setTimeStamp(0.5339962385717979);
    msg.setSource(39689U);
    msg.setSourceEntity(60U);
    msg.setDestination(32209U);
    msg.setDestinationEntity(114U);
    msg.name.assign("BNRPRFCLSUAOBMWMPIARTFFQUZBQ");
    msg.visibility.assign("ASWQBFFAJYPIZLGKNBVFBTUQOIDIYGNMQAAJHZPCUGOZGVZZADCWVPRDQRPKSBKYBEVXKITJHQNLNONPLRTXNVHXNSEQAZKOVXFCTBISMYUXEECRCMIMDLDTBHLOMAABXYOQFUOYEZJEHPGUXAYCWRK");
    msg.scope.assign("JBROMVTEFODXIJHECGWVVTJCBKTRQMLIBAKKFVADAPEYFIUYAXTXJ");

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
    msg.setTimeStamp(0.6113571705328186);
    msg.setSource(57764U);
    msg.setSourceEntity(248U);
    msg.setDestination(3068U);
    msg.setDestinationEntity(252U);
    msg.name.assign("BWGEVICHUQLIEIMKZJDXTQOYNRRSKVWVSBLKZPLNFLANDIGIDMPTBR");
    msg.visibility.assign("SFPEDCMLJGIWAICUFJZEEKMSKTYHAUBSRF");
    msg.scope.assign("FVJRUSTNDFVBDYPCVOLFJXIHZUNTGUCOARABHXQBRVIZOOWNGUWTYGHSYKBGYAICWYENWEDKBRBPSREYUBEXMCSZAMUJQYQNPPRVREHBMZARIYDEDVCJILYXXIZLAJHIPWQMVCQKKKIVBXMMGJNTQHPSGJAQYWLKJWKOGVKXRLTZHDAOSILNLTGAOTCXMFFDWQALPFL");

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
    msg.setTimeStamp(0.9104787662535909);
    msg.setSource(34724U);
    msg.setSourceEntity(133U);
    msg.setDestination(42408U);
    msg.setDestinationEntity(202U);
    msg.name.assign("YJRGRKPEGWQJXZFPVJRBEHMXTOLHSBJJZNOCCUFJXKGWFZVPVMFTWSUANNZPRZONUVHGMYKNBZYTKWRLTMISRQEUGRDANFTHUOAYWNQQFTLERSSOPUGYFZLJEIBKIPIINMDRXBUHBBBODHSQCQLZPVDVHMGSODE");

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
    msg.setTimeStamp(0.6467834741498499);
    msg.setSource(25183U);
    msg.setSourceEntity(172U);
    msg.setDestination(11919U);
    msg.setDestinationEntity(48U);
    msg.name.assign("BHIWSNQBPHROIDAABMRTTPEYJZFNQPEHXVYWELKQSTCYAESPJCVBBSIRRQLHIYPXWJWKXYOEKFKUWCCEOPKDWNPUCBCNENOVRIFKDBXUUKKMTCNWYUXJAZHXSOSGTQNHSDMKLOOVHZGFJGEVWFRWXZYLPYRSDSGBMDTFQRLAPGVUJMUNALQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LHSFXFZLMKTBEXTRQJLYZIUNKDIUQFOMTDVZFHATVD");
    tmp_msg_0.value.assign("OPCRUVUMHQRGINFLEIGKRJZQKTFMEANDUKAQELHOXLOTVQWULPEDRJBCMDWACBBOWIPYWSMNTEILJYEVJCXCDGVBQFYXYHFVNGXPPIUEKHPFMCHQOQZYXYKIDFTZRDEZONIBAUPCLMYFRZZREIYNFBJHZJOSKLAYAUSVTNOJPHTORRBOTSWQUHS");
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
    msg.setTimeStamp(0.9132160334895885);
    msg.setSource(54151U);
    msg.setSourceEntity(199U);
    msg.setDestination(1514U);
    msg.setDestinationEntity(180U);
    msg.name.assign("AXLCQAEMDFMVOISLFXXPUCARVSEZDVIAUMITJNECVZTKBLGDKSAOEYAMCGYQWIBUCQXKEVNWOGXJZSFVUMUMMTRWEGTFBABYFQBYNZKYZQQTFGGJZZRSZJUNURBAPLGPQDHYIWTXVCYHZVHDKNUPUWJXPLSHYJMNIROKICL");

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
    msg.setTimeStamp(0.5477048996969383);
    msg.setSource(5212U);
    msg.setSourceEntity(27U);
    msg.setDestination(1416U);
    msg.setDestinationEntity(55U);
    msg.name.assign("NRGXSVYUOZUVUIHQMYKWUYZHIWEMIRSLDUGSKWYLZAPVCSOBNTJEZTFJONWAVWFTPGQYPPLLVYRFETFSSXWBQADXPZRQTNNHKZYNGCYSUFSEVOVDFTPQEMEHEBCHNOQEZJLKFXOGJOQBEAEJJPGXJHRQJZMTICXSKRNWDZBFWRVDQPVUARAVJPTLOKHLBIMCHJACGDRDRUYULNIXIHMWFIZAUWAAIT");

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
    msg.setTimeStamp(0.4053467446356803);
    msg.setSource(41949U);
    msg.setSourceEntity(48U);
    msg.setDestination(50595U);
    msg.setDestinationEntity(229U);
    msg.name.assign("XZUIZAHEZYWCQLVALOVMYUONIITAJZKAKLLHDUXBURSBJKSTHOVEFGUFGNNWOGWMQPNCSJFQYMGCCNFGIOPHEEPLMTRSCPRNGQZIKFMIXLBWIVEKWTNUNHGVESSAGZBNXRIXJUCPKTMLPLFJZBCD");

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
    msg.setTimeStamp(0.04566099485012154);
    msg.setSource(44470U);
    msg.setSourceEntity(150U);
    msg.setDestination(3833U);
    msg.setDestinationEntity(228U);
    msg.name.assign("EMEVOOUCWZTJKFMQVIVVBELPGHVFYVZNCAQXBSXJPRZMGEDIAMPBLBKTVYTFKHXPMUWESKSQQIEESXSJXYLKROXSUBZZOLTLNDDAGEWKIDKBMUHPGIRVNOZGOUAWAXKDQE");

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
    msg.setTimeStamp(0.09495811722718484);
    msg.setSource(32784U);
    msg.setSourceEntity(150U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(134U);
    msg.timeout = 1118256645U;

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
    msg.setTimeStamp(0.26997848604625074);
    msg.setSource(7367U);
    msg.setSourceEntity(141U);
    msg.setDestination(3228U);
    msg.setDestinationEntity(198U);
    msg.timeout = 3419137873U;

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
    msg.setTimeStamp(0.6915189228214035);
    msg.setSource(11756U);
    msg.setSourceEntity(169U);
    msg.setDestination(47446U);
    msg.setDestinationEntity(85U);
    msg.timeout = 2654488925U;

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
    msg.setTimeStamp(0.7158478018894333);
    msg.setSource(22667U);
    msg.setSourceEntity(67U);
    msg.setDestination(20596U);
    msg.setDestinationEntity(79U);
    msg.sessid = 2805364262U;

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
    msg.setTimeStamp(0.8500267723844036);
    msg.setSource(9468U);
    msg.setSourceEntity(85U);
    msg.setDestination(24397U);
    msg.setDestinationEntity(207U);
    msg.sessid = 2814931019U;

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
    msg.setTimeStamp(0.09436252590603178);
    msg.setSource(28770U);
    msg.setSourceEntity(117U);
    msg.setDestination(18217U);
    msg.setDestinationEntity(231U);
    msg.sessid = 1414435820U;

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
    msg.setTimeStamp(0.764860342544856);
    msg.setSource(27910U);
    msg.setSourceEntity(231U);
    msg.setDestination(12871U);
    msg.setDestinationEntity(107U);
    msg.sessid = 531992497U;
    msg.messages.assign("ODFDNKTWBNECCOALZUGRGNBOMAQFFCZTETZBTMEUEMAKDQIVSIBRYPHYPEWXNXQTLQAQJDVHNRLUVMKRDNDXXMFJVIQHLRQYCZGVNINKWSMHVVVKYAHKGOSCIZSYVQZDJWXBPEVAFYTHJFPHPQFPSCECSGYOXAHJ");

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
    msg.setTimeStamp(0.9594157027957666);
    msg.setSource(40849U);
    msg.setSourceEntity(131U);
    msg.setDestination(16922U);
    msg.setDestinationEntity(83U);
    msg.sessid = 2420112902U;
    msg.messages.assign("HTZTVLLHPEWIPFGGPYDQGYTHQVDTTHWKOLEIWWJMYPJNPAYOCLVZCPSFUJRYVRNZSZSQGVVDEFVAFKJDAOTNKUBWHAYPQMPKWCXBLAFANKPLCX");

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
    msg.setTimeStamp(0.9423062066721858);
    msg.setSource(5278U);
    msg.setSourceEntity(224U);
    msg.setDestination(2897U);
    msg.setDestinationEntity(100U);
    msg.sessid = 1906533771U;
    msg.messages.assign("SBGQDGBXTQWCGMHWYJZPHGODPQAERVUFLBXGEQKWVUVAMNTDFBKZBKYVZOWVZXEVMJWDWDDQKTVSLLCLUULPANGMFCCHFERKXRTAYGYFQPMYRVINSJMTYFRUDNYPEOXEUCLBIVNJESHQDIHSAPYMZOLTZTPHEZYJRCTFZQDAXPBSXQXIPENZIPKUIBXZDOSNJOGEINKKSOTGLJR");

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
    msg.setTimeStamp(0.5593083328566599);
    msg.setSource(57829U);
    msg.setSourceEntity(230U);
    msg.setDestination(8012U);
    msg.setDestinationEntity(129U);
    msg.sessid = 662746095U;

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
    msg.setTimeStamp(0.7677187216319863);
    msg.setSource(46937U);
    msg.setSourceEntity(139U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(116U);
    msg.sessid = 2385084006U;

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
    msg.setTimeStamp(0.23239618322683753);
    msg.setSource(27730U);
    msg.setSourceEntity(118U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(90U);
    msg.sessid = 2575535051U;

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
    msg.setTimeStamp(0.8614137604371226);
    msg.setSource(18530U);
    msg.setSourceEntity(102U);
    msg.setDestination(60884U);
    msg.setDestinationEntity(208U);
    msg.sessid = 4064568101U;
    msg.status = 8U;

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
    msg.setTimeStamp(0.6916067893712888);
    msg.setSource(6935U);
    msg.setSourceEntity(14U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(219U);
    msg.sessid = 4234663912U;
    msg.status = 196U;

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
    msg.setTimeStamp(0.058248430087194825);
    msg.setSource(14759U);
    msg.setSourceEntity(109U);
    msg.setDestination(396U);
    msg.setDestinationEntity(143U);
    msg.sessid = 3597709130U;
    msg.status = 161U;

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
    msg.setTimeStamp(0.04779289395384689);
    msg.setSource(18469U);
    msg.setSourceEntity(126U);
    msg.setDestination(58323U);
    msg.setDestinationEntity(188U);
    msg.name.assign("LHAUBVOGOXUDXLGBMXWHYOIEJMICSZHQIDILVZAKOXR");

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
    msg.setTimeStamp(0.1511117615592843);
    msg.setSource(45322U);
    msg.setSourceEntity(243U);
    msg.setDestination(13417U);
    msg.setDestinationEntity(46U);
    msg.name.assign("MLLXNSDOZLYDUPOAKCOCJGCHYKNOTKFJRFQRVJCCTSSCKMTR");

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
    msg.setTimeStamp(0.7248050575412955);
    msg.setSource(65259U);
    msg.setSourceEntity(123U);
    msg.setDestination(43273U);
    msg.setDestinationEntity(3U);
    msg.name.assign("OHQULIDUAZZDVSBDXSGDFEVMMGDHKJEMNEFCPXGSKUXDWNLNLUFDIOMQQVKXZLIYCPHVRXEMSVUBHKBYADIKCNETOCUISNARHMEEZKMYYTPPMLAGGFJEJKASJRQNYBTRERYPXGORVLBPTABKABDTCJRCHYRPJPYSIXQAAWWNQBIUGTBGQICNBSUQJKSFFHJUHVYZGXCOIGMCXZWVOVZAWTWNOLTRZWFRONDMOTQWZULOPXIZFEW");

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
    msg.setTimeStamp(0.23417059574269972);
    msg.setSource(49602U);
    msg.setSourceEntity(34U);
    msg.setDestination(1895U);
    msg.setDestinationEntity(49U);
    msg.name.assign("DEZJVYUKPTYIQNJFZLGMZFYMJPHULNAXCWXKNGRNDQVPOYXCBMBEWZVMCWMARQJMXKRIQHDULLNEWBPGFERVSHJKTMYUMRYQBONOILHCDBASIZSIVLAPUJXKVNTFGQRGBUHGHWKJRWEMDBBSGGNFAQYDUQCLHHCMKRFCEYTNLOEATFDKOTJGUPWL");

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
    msg.setTimeStamp(0.6837157782243605);
    msg.setSource(31510U);
    msg.setSourceEntity(187U);
    msg.setDestination(40154U);
    msg.setDestinationEntity(230U);
    msg.name.assign("XOIRLYKXDLIEANJAGLWXFZMIQHPFSYJSBTBRPUKUTPNLUFFXMEZYOUIUVAJVJAYERWISFVAHFXUJQWESBKMNCUAAWMCVRTYTCNDQGPXC");

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
    msg.setTimeStamp(0.34075043074627087);
    msg.setSource(44479U);
    msg.setSourceEntity(198U);
    msg.setDestination(55286U);
    msg.setDestinationEntity(78U);
    msg.name.assign("DZENMJJIUXJCDFUIJPNHKWBNRGWJKLTGIFRBTKNVOUSAMZOSKVKYHAWMRKPIIKWESMVZFFFNNKIMMAQSCPCFEVBYEWMJERAWGRHCVDLQPTXZFTCTJAKJOAQVJEEGXYPUOALDMRLEZXORUMNISYQBOXZFXIDYSOVCOIHGTYZYIHDELWUBQL");

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
    msg.setTimeStamp(0.5571731578796771);
    msg.setSource(32808U);
    msg.setSourceEntity(23U);
    msg.setDestination(4299U);
    msg.setDestinationEntity(165U);
    msg.type = 129U;
    msg.error.assign("BMUXKIEXFOLMKZNBIUKNZWIJQFMOSCHPOVUFQAFODMRRIBKZSELYJJSVWXFFSQPGZVRUEEYODERAXDIWGHTOGNNJCSTOATYRMUSCATUDFIENKHHWPLNYWGYSRATENBVTDKLHAYHAROQQJQTBQVCICJEZYUWHMPIFTCJSXMBUGLPZAHKSJXRHGAVLVXKWUJGCFXVMFZXHJRABMKTBPNYBDDVZMIDCRCKBPPGZPCEGLQLSWYTWUXIOQGDOLLWDY");

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
    msg.setTimeStamp(0.5644520795699296);
    msg.setSource(4076U);
    msg.setSourceEntity(93U);
    msg.setDestination(33943U);
    msg.setDestinationEntity(158U);
    msg.type = 97U;
    msg.error.assign("LBAZVOBSIZOYKBTHTEMWWIVZQROVFOCDRFKXQQPMYDIRTRKMCBACGQILZRPUUTSLVVUFXRJCYJAPBHVXZFFJKQHBHYUTDEAOGGMNPXCXCIAJTDEMOHZSJJWHBEENFONYFRBVARWWECFZIVIBTAIIYDWVLPOKTRQQDGSUUABNGMKSKHKLYNNQXFWLPXNZIGXLXMUSDSJEUGSWYFAYJPLWEPKVNMACHNDHJGDXWSKLCJPYUQGPGZUZNTESR");

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
    msg.setTimeStamp(0.31575185252575066);
    msg.setSource(56463U);
    msg.setSourceEntity(65U);
    msg.setDestination(62590U);
    msg.setDestinationEntity(171U);
    msg.type = 5U;
    msg.error.assign("OWPXJPUFGRXONGWWXRHORENULJMPSMRMVOQFNCTMBYDHEDWMGWWAHPBEEZGJNBOZSWLFCNCXRAJPMQGICVHCIUTZOKINIBOXDMVAWSMDNURBGYPQPLFBSEODHDENGYIKUQQVIZSHXTESATLDQKMUGXZTRQYKJSORARKMHKZBV");

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
    msg.setTimeStamp(0.748298438106338);
    msg.setSource(59886U);
    msg.setSourceEntity(185U);
    msg.setDestination(50288U);
    msg.setDestinationEntity(61U);
    msg.seq = 25311U;
    msg.sys_dst.assign("KCGSRYDTCBNJUFWP");
    msg.flags = 176U;
    const char tmp_msg_0[] = {-110, -48, -102, 6, 108, -101, -49, 78, -114, -119, -67, 89, 45, -9, 70, -93, 91, 112, -49, -108, 19, 2, 41, 51, 65, -93, -117, 56, -94, -50, 100, -76, 67, 71, -85, 100, -57, -33, -14, -58, 11, 16, 3, 21, -104, 66, -128, 13, -70, 13, 89, -104, 96, -75, 0, -4, -70, 20, 78, -15, -9, -94, -30, -70, -34, 39, 63, -98, -32, 16, -82, 20, 72, 12, -69, 111, -34, 32, 24, -114, 97, -115, 126, 87, -25, 23, -106, -34, -93, 101, 118, 117, 10, 91, -85, -68, 70, -39, 46, -39, 4, -19, -28, 6, 27, -3, 92, -79, 85, 80, -41, 51, 115, -101, -11, 48, -65, -113, 83, 3, 38, -109, 82, -26, -67, -13, 111, 32, -38, -84, -26, -61, -2, 1, 12, -81, 43, -126, 33, 87, -14, 52, 9, 54, -32, 117, -84, -107, 28, -39, 32, 78, 5, -83, -73, -79, -112, 88, -105, -44, 60, -126};
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
    msg.setTimeStamp(0.45778718741126245);
    msg.setSource(53764U);
    msg.setSourceEntity(156U);
    msg.setDestination(56593U);
    msg.setDestinationEntity(194U);
    msg.seq = 60219U;
    msg.sys_dst.assign("HXRKCZBHSCHLLYGXNPGWIMZRFRONCVWJRPEIVOXBKKSUUEEKCZCZGLHRWWTMLFYBXIUEGLFEEAKHEIYKR");
    msg.flags = 60U;
    const char tmp_msg_0[] = {34, -75, 53, -118, -47, -80, 123, -69, 67, -117, 36, 27, -58, 1, -127, -100, 10, 53, 5, -79, 123, 6, 112, -9, -77, -112, -111, -85, -40, 118, -16, -79, -4, 108, 112, -105, 45, 88, -77, 96, -20, -9, 20, -4, -35, 76, -96, -4, -69, -119, -90, 50, 50, -58, -104, 101, 6, -11, 3, 110, 59, 100, 43, -124, 44, -105, 77, -23, -120, -75, 7, 63, -107, -106, 63, -77, -94, -98, 73, 112, -11, -74, 35, -10, -27, 107, -101, -123, 109, 10, 48, 64, 115, 11, -11, 47, 15, 125, -111, -29, -102, 64, -68, 115, -128, -35, 66, 36, -101, 5, -102, 53, -27, -13, 117, -59, 81, -12, -8, 52, 47, -93, -73, 69, -89, 94, 108, -127, -11, -44, 26, -71, 9, 42, 86, 65, -47, 75, -63, -111, 90, 25, -43, 102, -116, 0, 98, -60, -99, 51, -3, -74, 110, 33, 22, 17, 64, 64, 5, 13, 20, -52, -70, -121, -16, -112, 109, 32, -91, -99, -89, -85, 46, -99, 86, -125, 88, -105, 116, 8, -113, 57, -24, -97, 17, 70, -42, 41, 57, -116, -102, -64, -121, -34, 10, -53, -33, -2, -97, -123, 61, 120, -115, -101};
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
    msg.setTimeStamp(0.6807514402192198);
    msg.setSource(24566U);
    msg.setSourceEntity(191U);
    msg.setDestination(57625U);
    msg.setDestinationEntity(40U);
    msg.seq = 35449U;
    msg.sys_dst.assign("TEONNTBGUYMRVXJVECLBXARVZXIRJKXAEPYQXBZKKCVJMCQOSEFFPSJCUJTPVLLUUMHYWHGPBVSJSFFHBBWNUONOADEIAFLXACOEKLKMVGEIFTRFSKPDHIMMTAYJERHWGHQUGSHXZDPBYFWAKXQFQRGZZPUOLIHXSYQUDIWWWAJMPTOBLSDRCCIIOADCRZWLGRPNZKJENYQNMNYYNRWHVZMTUFQI");
    msg.flags = 144U;
    const char tmp_msg_0[] = {122, -113, -29, 65, 65, 29, -128, 112, -86, 124, -5, -104, -43, 10, -65, 88, 113, -22, -17, -98, -18, 86, -69, -94, -10, 57, -55, 36, -77, -58, 10, 14, -72, 67, -46, -64, 105, -66, -28, -104, -100, 116, -97, 122, 53, -123, 42, -21, 100, 123, 48, -13, 49, -73, -102, 8, 111, -23, -78, 29, 122, 30, -4, 64, 52, -110, -12, -13, 55, 123, 9, -75, 18, 79, -37, 9, -52, 78, 109, 100, -116, -45, 101, 122, -82, -24, 24, 10, -109, 106, 28, -69, -70, -76, 1, 41, 43, -43, 107, 66, 42, 42, -84, 72, -118, -103, -20, 5, 16, 25, -35, -45, 82, -25, -93, 61, -20, 70, 119, 32, -76, 20, 105, 126, -49, 41, 28, 54, -60, 99, 114, -73, 46, -1, 114, 39, -68, 117, -111, -9, 67, 118, -4, -49, 76, -55, 102, 9, 93, 45, 37, -52, -1, 72, 41, -117, -35, -101, -8, 27, -102, -103, -37, 58, 78, -65, -113, 83, -19, -127, -40, 82, -7, 64, -94, -29, -2, -93, -73, -121, 72, 28, 59, 92, 72, -79, 3, 67, 24, -9, -125, -82, 17, -31, 43, -78, -53, 124, -37, -44, -42, 50, -49, 14, 48, 5, 28, 60, -97};
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
    msg.setTimeStamp(0.22586789094033832);
    msg.setSource(48741U);
    msg.setSourceEntity(21U);
    msg.setDestination(30374U);
    msg.setDestinationEntity(36U);
    msg.sys_src.assign("ZESNZKYVOJKVHDKEQLGTRTFICJVHSFAXKPSQRYTFRHQXTDKXGGGEDJVRWCUBZ");
    msg.sys_dst.assign("DLQCYHMEEW");
    msg.flags = 82U;
    const char tmp_msg_0[] = {77, -9, 59, -5, -125, -13, 17, -63, 24, 4, 45, -9, 83, -114, 20, 15, 113, 106, 71, 38, -48, -112, -38, -15, 73, -38, 2, -6, -81, -48, -50, 70, -34, -34, 79, 76, 5, 33, -36, -81, 13, -82, -50, 47, -59, 124, -126, 79, -105, 103, -88, 39, 95, -46, -110, -13, -74, -26, -11, 108, -45, -78, -70, 70, -126, -36, -113, -80, -21, -106, 33, -58, 116, -113, -95, 4, -74, 79, 24, 25, 90, -76, 31, 85, -16, 67, 103, 27, -98, 92, 32, 21, -87, -54, 25, -100, -71, -15, -47, 40, -65, -16, -96, -14, -52, 61, -18, -81, 90, 80, -90, 34, -31, 52, 110, 3, -6, 58, -74, -91, -29, -42, 33, -45, 10, -46, -113, -122, 82, 41, -82, -72, 31, -64, 95, 62, 33, -25, 119, -123, -39, -99, 93, 31, -29, 58, 26, 89, -2, 77, -18, -1, -42, -14, 15, 41, 61, 36, -37, -64, 41, -73, 51, 86, -57, -66, -7, -83, 85, 55, -93, 119, -31, 68, 22, -54, 69, -82, -92, 21, 102, 50, -40, 79, 10, 106, -29, -82, -120, -41, 93, -22, -122, -36, 45, -38, 99, -127, 89, -84, -94, -29, -35, -112, -49, -96, -100, -54, -49, 32, 9, -115, 82, 60, 36, -99, 112, -68, -59, 101, -119, 93, -128, 63, 91, -122, 40, -9, -76, 83, 64, 10, 115, 27, -19, 77, -47, 119, -84, -109, -9, 69, 6, 26, -124, 15, 17, -26, -18};
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
    msg.setTimeStamp(0.6820828903215946);
    msg.setSource(41443U);
    msg.setSourceEntity(195U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(2U);
    msg.sys_src.assign("ABMXCOQHDOWYJGJAHRXRFMTAGZCOMRSYDETZOBXJWLXCBFKMNROJBSAKNPGQELTCONNYXXPCPGASUWAUYHVJKNOPVXSFPUWDVUQWHADJOVPGZLGHJLCMYQIMUKTZHQDSWKQTJZSWBMUZKGHWSEIYARCDQLEBQMDIRPLYYHVCEHSFZILFPFPFKILMVOEKTNLRCNTUAJWSUIGRABBDXGIYRU");
    msg.sys_dst.assign("TAJVSFHCXYIMRBWDRKVEPGOVLCMDXCBHEBITCJCYLPWSHZJZJBMOPNZVGHPMZYCLITSOOCAYJUXTVUWKUDYEHJNTTDWJRNODNLFEOUVIHMDNUWLSHNSGXFIIYKBTXZSZAFXLXFFHGTUQLMZIWQPEWCKREGDRZJVAJFDQIOOQEGMALNYPALSARRSIQREYIFPEBPKAAU");
    msg.flags = 131U;
    const char tmp_msg_0[] = {39, -97, -39, 61, -75, -67, 27, -107, 115, -24, 109, -109, -3, -21, -26, -57, -7, -28, 79, -91, -87, -38, -76, -24, -93, 75, 56, 91, -13, 126, -78, -64, 114, 22, -38, -33, 33, -27, -35, -26, 2, -9, 111, 41, -126, 106, 115, 37, -3, 121, 22, -105, -77, 100, -114, 17, 81, -119, -50, -43, 12, 69, -40, 104, 61, 33, -122, 122, 28, 92, 113, 116, -65, 93, -32, -96, -120, -17, -33, 16, 82, 57, 93, -77, -92, -45, 39, 92, 15, -30, -20, 39, 52, 106, -26, 15, 68, 84, 35, 47, 35, 64, 83, 81, 108, -9, -97, 116, 37, 18, 57, 107, -114, -115, -100, 22, -61, -84, 5, 57, -79, -114, -93, -50, 125, 46, 100, -50, 21, -108, 48, -21, -50, 91, 45, 43, -123, 97, 7, 126, -33, 111, -111, -77, 96, -94, 114, -97, 88, -122, -102, -35, -95, 80, -52, 105, -13, -69, -80, 100, 25, -46, -21, 109, 76, 96, -127, 73, 1, -24, -34, 29, 57, -74, -118, -104, -124, 6, -2, -61, 39, 88, 104, -98, -94, 48, 90, 18, 58, 39, -11, 11, 94, -105, -43, -75};
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
    msg.setTimeStamp(0.9012168209308267);
    msg.setSource(55325U);
    msg.setSourceEntity(175U);
    msg.setDestination(62483U);
    msg.setDestinationEntity(7U);
    msg.sys_src.assign("LGPJJLTBCDOWQDQBNHWWSKJHCIEYXTSTVNUROTCRZQVLXEEFHUPKJJHULKLXGAYNTCGJJCRWFSMKNIBWTQAPOWSPCWEZBWDETIXRVGBYMCMYRNPNSHHXFMVEYIEKIBUDLJHHDABWAFTFVESLAPVBXGUUJLHZNNFCDZIUGRVSDWQZBOPFOKVOOSIUAXQPQMA");
    msg.sys_dst.assign("OMDEOCRHOGNALSBZXNFYEDMCDVYYLXKZKSRDDFFKBIVATHIAFKXPJPPBMNRUIYXKSLQWSFTVONYZSFIVUKIUGRUANUQJZVAFGKQWBYXMGVZPDXGRWLNTSTNFCIBJELAZRQMYUQUSRZVJJYWHMRPQISEACQATPWSWBTEBMJVXGCGJZDCNNECOMDGPJXIPHO");
    msg.flags = 69U;
    const char tmp_msg_0[] = {-82, 108, -90, 0, -72, -51, 102, -64, 30, 89, -17, -122, 43, -115, -123, -29, 94, 102, 88, 23, -90, -18, -57, -30, 76, -8, -25, -51, 47, -108, -126, 125, -64, -98, -40, 49, -95, 72, 84, 56, 14, 84, -74, -4, -21, -1, -94, 77, 69, 25, -81, -85, -29, -38, -51, 108, 110, -114, 83, -93, 104, -20, 103, 44, 125, 109, 36, -70, -116, 4, -26, 12, 26, 100, -71, 14, -72, 29, 33, 68, 4, 72, -11, 51, 55, -43, 84, -20, -93, 54, 69, -76, -6, -4, 78, -37, 41, 0, 54, -84, 94, 30, -109, -108, 19, -62, 57, 110, -73, 38, 67, 106, -108, -34, 113, 3, 96, 17, 113, 115, -93, -92, -94, 81, 109, -67, 85, 95, 3, -46, 89, 47, 12, -68, -25, -16, 80, 96, -82, 83, 91, -24, -116, 10, -69, 30, -59, -90, -39, 53, 77, -56, -51, -107, -5, -16, -58, 38, -16, 56, -71, 19, -49, 122, -25, -81, -79, -36};
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
    msg.setTimeStamp(0.37819606894410973);
    msg.setSource(14479U);
    msg.setSourceEntity(160U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(246U);
    msg.seq = 4384U;
    msg.value = 17U;
    msg.error.assign("OZNDSXBQSMNRWJFKJQWTZSVALOECIECDPVUIKFPUMLACRDCXQTYYDSIQDGEAQILEIEXFBMKDSJPHKHWGSSQAVUGNJGVHNQEOEWNZEALFZXCPGHDXMDWGIVKAQGUYHB");

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
    msg.setTimeStamp(0.41376187107960005);
    msg.setSource(13207U);
    msg.setSourceEntity(168U);
    msg.setDestination(64740U);
    msg.setDestinationEntity(85U);
    msg.seq = 30306U;
    msg.value = 41U;
    msg.error.assign("LGCYYLFMRWLZEKRIOITSBTWJHKKVPBDMPCANNRNOAZCNGNFYXOIWMHQJSOMDUIREGJAFODKQGSLJZHJ");

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
    msg.setTimeStamp(0.6695780721129215);
    msg.setSource(9027U);
    msg.setSourceEntity(251U);
    msg.setDestination(21744U);
    msg.setDestinationEntity(96U);
    msg.seq = 6192U;
    msg.value = 204U;
    msg.error.assign("QDIKDOZGPJBUUZXEMYZSGOUXJUKHRNXWFREPHRUNMKOWXQXPAGHUTPVNBTZFRFLCMQAOQQLWUWMFXMGNV");

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
    msg.setTimeStamp(0.3950433144553963);
    msg.setSource(51422U);
    msg.setSourceEntity(65U);
    msg.setDestination(7244U);
    msg.setDestinationEntity(231U);
    msg.seq = 1507U;
    msg.sys.assign("FRDFZTYGINLQQABEEKSADZOUXLIRSEUNUZMCVPOFKVMTMVDXHONFJCEGLAVLRFKZPTDXUZMKJGPYTBENWQQBPXIZQUKRXAOMWJYEUQSTPPACSBGRKJGIKJHXAIYXIMJLHLCQCHYTBCPIOAIZBHOFXNCGBRWYLMYFJTYRU");
    msg.value = 0.7596577494981369;

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
    msg.setTimeStamp(0.39603296687966316);
    msg.setSource(15299U);
    msg.setSourceEntity(101U);
    msg.setDestination(39010U);
    msg.setDestinationEntity(173U);
    msg.seq = 50666U;
    msg.sys.assign("LUDWURMGHVHVFRKBYDVTBCIACTWQXVJNRKLFZDNXTUZUGNSWAUXWEIIHQOQTAIEEGOHDMDNXXPPZFYJMPKCENXNMZOJUJ");
    msg.value = 0.15712668908820804;

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
    msg.setTimeStamp(0.6118860317555576);
    msg.setSource(50138U);
    msg.setSourceEntity(232U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(7U);
    msg.seq = 47857U;
    msg.sys.assign("IBKDAGAUXSYCLCNDTZLBJYWRBQNJYFHWFOLNMCPCVVPMKDAMRSUERJKYTATQGGRQDIAWWZHZLVJSNHLVVNOREXTIXSJHDVOLVR");
    msg.value = 0.6233115624219723;

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
    msg.setTimeStamp(0.41205853998583963);
    msg.setSource(3604U);
    msg.setSourceEntity(202U);
    msg.setDestination(44190U);
    msg.setDestinationEntity(35U);
    msg.action = 99U;
    msg.longain = 0.8420953107328841;
    msg.latgain = 0.7784031684003002;
    msg.bondthick = 2297682398U;
    msg.leadgain = 0.1621055001444972;
    msg.deconflgain = 0.7673021942670415;

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
    msg.setTimeStamp(0.5970051040548643);
    msg.setSource(61829U);
    msg.setSourceEntity(47U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(15U);
    msg.action = 100U;
    msg.longain = 0.9442315652080435;
    msg.latgain = 0.200521567130161;
    msg.bondthick = 1104103613U;
    msg.leadgain = 0.8730249348552147;
    msg.deconflgain = 0.28219764104819567;

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
    msg.setTimeStamp(0.5893338061641871);
    msg.setSource(10086U);
    msg.setSourceEntity(80U);
    msg.setDestination(48100U);
    msg.setDestinationEntity(153U);
    msg.action = 146U;
    msg.longain = 0.7963300839785543;
    msg.latgain = 0.9157211366834406;
    msg.bondthick = 3081720373U;
    msg.leadgain = 0.6598545165161263;
    msg.deconflgain = 0.8765329647991712;

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
    msg.setTimeStamp(0.4121193990215444);
    msg.setSource(16942U);
    msg.setSourceEntity(198U);
    msg.setDestination(8368U);
    msg.setDestinationEntity(228U);
    msg.err_mean = 0.9736462407549636;
    msg.dist_min_abs = 0.16676422738233387;
    msg.dist_min_mean = 0.03012099943511526;

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
    msg.setTimeStamp(0.09258079246075057);
    msg.setSource(64832U);
    msg.setSourceEntity(52U);
    msg.setDestination(13806U);
    msg.setDestinationEntity(9U);
    msg.err_mean = 0.24361394192943342;
    msg.dist_min_abs = 0.3388610919723428;
    msg.dist_min_mean = 0.6432424587563416;

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
    msg.setTimeStamp(0.45800305315898315);
    msg.setSource(49886U);
    msg.setSourceEntity(180U);
    msg.setDestination(57985U);
    msg.setDestinationEntity(231U);
    msg.err_mean = 0.41029156318559556;
    msg.dist_min_abs = 0.006206758835449522;
    msg.dist_min_mean = 0.05069564037205476;

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
    msg.setTimeStamp(0.5572192018981781);
    msg.setSource(19130U);
    msg.setSourceEntity(1U);
    msg.setDestination(56242U);
    msg.setDestinationEntity(128U);
    msg.action = 113U;
    msg.lon_gain = 0.9941863447130108;
    msg.lat_gain = 0.27221811987717637;
    msg.bond_thick = 0.44623241124113966;
    msg.lead_gain = 0.04705617102007287;
    msg.deconfl_gain = 0.6844336131825547;
    msg.accel_switch_gain = 0.4002078774026865;
    msg.safe_dist = 0.012852762650588323;
    msg.deconflict_offset = 0.7806150347450984;
    msg.accel_safe_margin = 0.8995234798342844;
    msg.accel_lim_x = 0.4045468691029509;

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
    msg.setTimeStamp(0.15044616073855588);
    msg.setSource(29922U);
    msg.setSourceEntity(169U);
    msg.setDestination(14059U);
    msg.setDestinationEntity(5U);
    msg.action = 120U;
    msg.lon_gain = 0.9243495514494728;
    msg.lat_gain = 0.6628952868986596;
    msg.bond_thick = 0.5540528658298082;
    msg.lead_gain = 0.6605478099680556;
    msg.deconfl_gain = 0.5542014856246233;
    msg.accel_switch_gain = 0.22942744255646896;
    msg.safe_dist = 0.30041546225513194;
    msg.deconflict_offset = 0.3063634034343188;
    msg.accel_safe_margin = 0.040060932689796935;
    msg.accel_lim_x = 0.9149147173171865;

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
    msg.setTimeStamp(0.5639064951305615);
    msg.setSource(13774U);
    msg.setSourceEntity(58U);
    msg.setDestination(40584U);
    msg.setDestinationEntity(30U);
    msg.action = 137U;
    msg.lon_gain = 0.7852498838675045;
    msg.lat_gain = 0.7383727195692401;
    msg.bond_thick = 0.9558323586679015;
    msg.lead_gain = 0.9629401584319315;
    msg.deconfl_gain = 0.15621492463149378;
    msg.accel_switch_gain = 0.8640557630631376;
    msg.safe_dist = 0.9452124675399839;
    msg.deconflict_offset = 0.059014241980529514;
    msg.accel_safe_margin = 0.28074312575559235;
    msg.accel_lim_x = 0.054836545878212184;

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
    msg.setTimeStamp(0.9979675346936127);
    msg.setSource(40589U);
    msg.setSourceEntity(109U);
    msg.setDestination(43681U);
    msg.setDestinationEntity(215U);
    msg.type = 139U;
    msg.op = 250U;
    msg.err_mean = 0.7822926877027012;
    msg.dist_min_abs = 0.14545779165009365;
    msg.dist_min_mean = 0.055475719672725465;
    msg.roll_rate_mean = 0.6466807610120265;
    msg.time = 0.10432352119368138;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 196U;
    tmp_msg_0.lon_gain = 0.7608559359283867;
    tmp_msg_0.lat_gain = 0.8210937643125039;
    tmp_msg_0.bond_thick = 0.1852393434251992;
    tmp_msg_0.lead_gain = 0.24209794163874765;
    tmp_msg_0.deconfl_gain = 0.057050238046182256;
    tmp_msg_0.accel_switch_gain = 0.5971042212770555;
    tmp_msg_0.safe_dist = 0.6560318895854677;
    tmp_msg_0.deconflict_offset = 0.27779393961387255;
    tmp_msg_0.accel_safe_margin = 0.12321684171028291;
    tmp_msg_0.accel_lim_x = 0.11904388869747817;
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
    msg.setTimeStamp(0.6076034639985172);
    msg.setSource(10963U);
    msg.setSourceEntity(254U);
    msg.setDestination(61087U);
    msg.setDestinationEntity(31U);
    msg.type = 193U;
    msg.op = 227U;
    msg.err_mean = 0.3105495449835607;
    msg.dist_min_abs = 0.18271741605460612;
    msg.dist_min_mean = 0.5739513415101436;
    msg.roll_rate_mean = 0.6454800259923422;
    msg.time = 0.5223148925026191;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 130U;
    tmp_msg_0.lon_gain = 0.7588489729787143;
    tmp_msg_0.lat_gain = 0.2560076525440792;
    tmp_msg_0.bond_thick = 0.9958959742244391;
    tmp_msg_0.lead_gain = 0.988435077966049;
    tmp_msg_0.deconfl_gain = 0.6158604690309732;
    tmp_msg_0.accel_switch_gain = 0.3540621254493136;
    tmp_msg_0.safe_dist = 0.5487832194542874;
    tmp_msg_0.deconflict_offset = 0.561396478591615;
    tmp_msg_0.accel_safe_margin = 0.2775231903256201;
    tmp_msg_0.accel_lim_x = 0.8114557716471203;
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
    msg.setTimeStamp(0.7246802043894709);
    msg.setSource(7026U);
    msg.setSourceEntity(238U);
    msg.setDestination(6964U);
    msg.setDestinationEntity(218U);
    msg.type = 32U;
    msg.op = 247U;
    msg.err_mean = 0.24497275394866058;
    msg.dist_min_abs = 0.24278936250363903;
    msg.dist_min_mean = 0.21117317345310416;
    msg.roll_rate_mean = 0.09647352021339073;
    msg.time = 0.8318782009327834;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 6U;
    tmp_msg_0.lon_gain = 0.09181866943938333;
    tmp_msg_0.lat_gain = 0.26465886282839435;
    tmp_msg_0.bond_thick = 0.9628486636983755;
    tmp_msg_0.lead_gain = 0.423749106504144;
    tmp_msg_0.deconfl_gain = 0.2529042836561054;
    tmp_msg_0.accel_switch_gain = 0.5277186258809947;
    tmp_msg_0.safe_dist = 0.3070306450367487;
    tmp_msg_0.deconflict_offset = 0.6802438097102379;
    tmp_msg_0.accel_safe_margin = 0.6374312192570255;
    tmp_msg_0.accel_lim_x = 0.8847750177154035;
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
    msg.setTimeStamp(0.6268358339466933);
    msg.setSource(42069U);
    msg.setSourceEntity(56U);
    msg.setDestination(18213U);
    msg.setDestinationEntity(249U);
    msg.uid = 31U;
    msg.frag_number = 225U;
    msg.num_frags = 34U;
    const char tmp_msg_0[] = {20, -105, -29, 48, -60, 11, 12, -124, -125, 13, 58, 117, 50, -102, 64, -102, 36, -74, 46, -73, -17, -27, 2, -37, 2, 123, 91, -111, 41, -106, -34, -10, 32, -78, -63, 38, 61, 45, -81, 2, -31, -61, 88, -29, -54, 65, -103, -90, -20, 63, 33, -61, -75, 43, 2, -108, -95, -83, 76, -54, 58, -47, -12, 19, 126, 52, -34, -90, 86, 73, -35, 109, -118, -105, -35, -92, -64, -87, 9, -100, 2, 52, 95, -41, 72, 120, -95, 41, -31, -37, 93, 3, 13, 78, -76, 32, -88, -99, -53, -126, 62, -84, 84, -122, 67, 55, -47, 115, 121, 93, 78, -5, 110, 65, -27, -42, -56, -61, 88, 119, 115, 118, -116, -71, 65, -31, 91, 114, -95, -41, 91, -97, 58, -74, -85, -1, -92, 19, 46, 60, -74, -50, -122, -98, -10, -41, -123, -91, -81, 92, -10, -80, 112, -37, 126, 33, 81, -14, 108, -113, -91, 2, 61, 19, -19, -110, -103, -40, -127, -13, 18, 8, 25, -29, -98, -59, -75, 87, -52, 32, 22, 88, 11, 122, -98, 112, 61, -84, -1, -41, 72, -76, 54, 20, 12, 3, 62, 104, -23, 13};
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
    msg.setTimeStamp(0.7195809162625085);
    msg.setSource(38544U);
    msg.setSourceEntity(225U);
    msg.setDestination(21507U);
    msg.setDestinationEntity(87U);
    msg.uid = 97U;
    msg.frag_number = 241U;
    msg.num_frags = 154U;
    const char tmp_msg_0[] = {16, -32, 115, 125, 86, -83, -29, 91, 97, 33, 39, 60, 92, -2, 85, -49, -95, -22, -66, 10, 59, -101, -7, 54, 101, -3, 61, 20, 24, -26, -82, 42, -28, 75, -10, 15, 28, 55, -82, -118, -104, 40, 60, -39, 42, -33, 70, -40, -115, 13, 48, -93, 39, 106, -104, 57, -19, -28, -125, 48, 48, 2, -6, 105, -119, 25, 101, 4, -67, -99, 70, -65, -114, -35, -27, -18};
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
    msg.setTimeStamp(0.4940497891078339);
    msg.setSource(2907U);
    msg.setSourceEntity(62U);
    msg.setDestination(58453U);
    msg.setDestinationEntity(250U);
    msg.uid = 244U;
    msg.frag_number = 126U;
    msg.num_frags = 54U;
    const char tmp_msg_0[] = {3, -121, -26, 97, -54, -51, 89, -124, -65, 102, 49, 84, 57, -30, 68, 20, -73, -75, 88, 87, 62, 8, 97, 22, 89, -12, 90, -118, -32, 33, 5, 64, 120, 73, -64, 118, -123, -36, 87, 35, -115, -42, -61, -83, -69, -29, -10, 42, -90, -11, 24, 62, -117, -45, -92, 90, -105, 63, 122, -103, 122, 72, 29, 79, -107, -15, 118, 0, -114, -56, -43, 52, 3, 37, -110, -71, -107, -4, 41, 123, -100, 5, 16, 83, -113, 111, -109, -40, -63, 87, 87, 111, -5, -4, -107, -94, 25, 38, -106, 32, 73, 64, 73, 67, 110, -59, 87, 87, -5, -51, -89, -100, 117, -52, -111, -65, 19, -119, -68, -59, -15, 115, 120, -2, 0, 109, -92, 2, -127, 21, -10, 94, -61, -44, -57, 19, 29, 109, 96, 39, 57, -31, 73, -24, 62, -29, -52, -111, 73, -94, 58, 62, -50, -28, -66, -84, -16, -127, -53, 64, 34, 126, 43, 49, -23, -79, 12, -15, 21, 113, 88, -16, 7, 125, 94, 123, -79, -100, 107, -24, 46, 118, 77, -43, 68, 122, -83, -35, -104, -3, -68};
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
    msg.setTimeStamp(0.006927943802383596);
    msg.setSource(38560U);
    msg.setSourceEntity(228U);
    msg.setDestination(8102U);
    msg.setDestinationEntity(230U);
    msg.content_type.assign("KVJGOLLOYGZDUVVWVSIOIEPLWAPYGXCINAJCISEURJZDUKWNFOZWOXYCZGQBSNMBRVOLJLLBYDSKHVEVXJMPNSWYWQTXFYNCFERWUQZXXQRXAHIRIPYRPQNIHMTBDLARFZFGECMJOBLPJPZQNVJSDZCQGLMEHWOGTKVFHDNHEXJUDMEKRZMRXOVKTSYDFTUTULZFKUWSKACGHHBDWYNSFICADXUBGNPAAYPI");
    const char tmp_msg_0[] = {-76, 47, -22, 40, 117, -30, -83, 56, -92, -60, 76, 18, -104, 63, 85, -95, -93, -70, 41, -77, -73, -85, -101, -34, 39, -80, -87, 92, -21, 18, 34, -70, -44, -99, 19, 75, 36, -82, -1, 20, -16, 103, -53, 68, 54, 100, 64, -122, -116, 74, -16, 109, -102, -116, -42, -2, 101, -125, 56, 115, -50, 5, 97, 66, -40};
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
    msg.setTimeStamp(0.4841571031730917);
    msg.setSource(42104U);
    msg.setSourceEntity(224U);
    msg.setDestination(29411U);
    msg.setDestinationEntity(111U);
    msg.content_type.assign("GJVGPDDIOVPHSEZQDYASZHMLMDATVVSOLRTEEXRRVJKJKDLCUWPKPHNNDJHWHXBIGOTQELFVIYLXSLFOMOXMHZIYMVRYMRSLYIXLKSWFQHSLURYRRBUKYCIUJPWFQGCTBBCVNOJQNZSMRUDZECJOT");
    const char tmp_msg_0[] = {-8, -77, 68, 52, -81, -66, 15, 108, -96, 106, -90, -40, -48, -14, -50, -30, -74, 71, 73, -38, 49, -113, 18, -92, -70, 70, -19, -122, 75, 17, -28, 33, -91, -16, -16};
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
    msg.setTimeStamp(0.5631674829162835);
    msg.setSource(9157U);
    msg.setSourceEntity(56U);
    msg.setDestination(19967U);
    msg.setDestinationEntity(56U);
    msg.content_type.assign("FDLIOUNKLIKGGWSXFBQTLEIJBKKZFPAUWWAVJPVHMQXDRYMNWTIFDFYFCIQTIXYFQMXTZSULGYXAMKXYSZMREOKNNZSXVJKSCIPUWTCRYBRAREHOGQOZFJOFBTQHNPDFRCVVGVVTZEKNICLPKZDPHRUVUORGXLOELDVHJHNAR");
    const char tmp_msg_0[] = {104, -108, -31, 33, 37, 114, -31, 104, -127, -55, 6, -120, 9, 21, 99, -34, -104, -63, -32, -88, -52, -46, 0, -62, 79, 21, -41, 39, -85, 77, 52, -15, 93, 89, 8, 15, 106, 86, -72, 124, 52, -68, -96, 33, 78, 57, 32, 109, 94, 12, 117, 88, -55, 29, 107, -63, 46, 44, -10, 59, -110, 51, 117, 54, 74, -1, -53, -25, -7, 88, -93, -77, 32, 25, 47, 21, -109, 83, 11, -55, -3, -97, 56, -98, 97, -96, -115, 29, -30, 4, -69, 88, 110, 80, 63, 72, 41, -40, 31, 77, -55, 75, -20, -84, 38, -99, -24, -34, -41, 64, -14, -26, -98, -44, 85, 107, -126, 28, -24, 70, 34, -56, -87, -28, 37, 93, -19, -104, -53, 118, 84, 90, -73, 60, 25, -34, -108, -33, -99, -44, -15, -94, -106, -24, -68, -18, 82, 100, 13, 67, -17, 31, 75, -85, 19, 53, 15, 80, -52, -94, -128, 36, 91, -58, 75, 22, 99, 77, -73, 41, 124, -35, -93, 6, -54, -66, 32};
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
    msg.setTimeStamp(0.21575062476775198);
    msg.setSource(20394U);
    msg.setSourceEntity(246U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.8579673994534243);
    msg.setSource(46484U);
    msg.setSourceEntity(206U);
    msg.setDestination(39859U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.06303486362865696);
    msg.setSource(26440U);
    msg.setSourceEntity(168U);
    msg.setDestination(27547U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.17549339662386854);
    msg.setSource(58268U);
    msg.setSourceEntity(130U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(181U);
    msg.target = 17620U;
    msg.bearing = 0.3946737863946037;
    msg.elevation = 0.2130457645970052;

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
    msg.setTimeStamp(0.22517422275538446);
    msg.setSource(4057U);
    msg.setSourceEntity(133U);
    msg.setDestination(1601U);
    msg.setDestinationEntity(21U);
    msg.target = 15409U;
    msg.bearing = 0.5862470018175175;
    msg.elevation = 0.8607786681027254;

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
    msg.setTimeStamp(0.3835915610029882);
    msg.setSource(29U);
    msg.setSourceEntity(205U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(153U);
    msg.target = 15798U;
    msg.bearing = 0.8085440005920997;
    msg.elevation = 0.4160880276910929;

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
    msg.setTimeStamp(0.576588625421596);
    msg.setSource(55056U);
    msg.setSourceEntity(241U);
    msg.setDestination(1720U);
    msg.setDestinationEntity(221U);
    msg.target = 26005U;
    msg.x = 0.9522329626408208;
    msg.y = 0.301322055038018;
    msg.z = 0.6953540494533208;

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
    msg.setTimeStamp(0.776366987175983);
    msg.setSource(59504U);
    msg.setSourceEntity(207U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(170U);
    msg.target = 41935U;
    msg.x = 0.4658487099846106;
    msg.y = 0.5774735869674513;
    msg.z = 0.9880866441144224;

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
    msg.setTimeStamp(0.5248658925253447);
    msg.setSource(27131U);
    msg.setSourceEntity(235U);
    msg.setDestination(24814U);
    msg.setDestinationEntity(36U);
    msg.target = 5639U;
    msg.x = 0.7931173394439986;
    msg.y = 0.38326186577507215;
    msg.z = 0.8245528872030273;

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
    msg.setTimeStamp(0.9098759412431342);
    msg.setSource(26954U);
    msg.setSourceEntity(247U);
    msg.setDestination(2120U);
    msg.setDestinationEntity(117U);
    msg.target = 40236U;
    msg.lat = 0.9459259254115144;
    msg.lon = 0.9965384945601021;
    msg.z_units = 124U;
    msg.z = 0.9360725750196403;

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
    msg.setTimeStamp(0.7419978004434014);
    msg.setSource(32752U);
    msg.setSourceEntity(4U);
    msg.setDestination(27101U);
    msg.setDestinationEntity(108U);
    msg.target = 51445U;
    msg.lat = 0.40300491375504377;
    msg.lon = 0.9636925701434134;
    msg.z_units = 169U;
    msg.z = 0.39281648024818727;

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
    msg.setTimeStamp(0.4961133572421622);
    msg.setSource(58063U);
    msg.setSourceEntity(230U);
    msg.setDestination(35697U);
    msg.setDestinationEntity(220U);
    msg.target = 56586U;
    msg.lat = 0.6527282654640686;
    msg.lon = 0.6609443190626445;
    msg.z_units = 27U;
    msg.z = 0.788189677998642;

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
    msg.setTimeStamp(0.25425627202684087);
    msg.setSource(7810U);
    msg.setSourceEntity(169U);
    msg.setDestination(8530U);
    msg.setDestinationEntity(16U);
    msg.locale.assign("YSNSQXKOMZLRNCGFZPKLIOJHTP");
    const char tmp_msg_0[] = {8, -68, -39, -114, -118, 60, -44, 106, -64, -118, -63, 62, -87, 9, -22, 100, -69, 69, -64, -5, -36, 72, 106, 81, 21, -19, 126, 99, 68, -124, 114, 42, -86, -88, -119, 61, -15, -26, 57, 45, 70, 39, -46, -94, -83, 10, -97, -53, 30};
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
    msg.setTimeStamp(0.9060574305880483);
    msg.setSource(42283U);
    msg.setSourceEntity(199U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(58U);
    msg.locale.assign("CCFJQSCOBOFJWNYPHRFGQBTFUFCBDXZGCZTIAHRCFKELJAIMJADMEIGULKAADTHRPOXIZEY");
    const char tmp_msg_0[] = {42, -92, 20, -109, -87, -86, 96, -3, 65, -102, -9, 73, 118, -47, -35, 113, 106, -1, 19, -44, 19, -40, 45, 98, -46, 10, 114, 50, 44, -128, 112, 18, 41, 67, -87, -64, -7, -124, -96, 78, -58, 58, 64, 8, -44, 2, 19, -5, 61, -89, -118, 95, 6, -117, -107, 29, 69, 45, 53, -48, -25, 76, 107, 27, -14, -106, -20, -123, 99, -17, -44, -82, -101, 67, -114, 63, -112, 121, 99, -18, -1, 105, 95, 0, 42, -97, 5, 23, -91, -121, 16, -78, 53, -128, -127, 49, -61, -80, -117, 64, -64, -123, -6, -92, -9, -20};
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
    msg.setTimeStamp(0.5770965385984875);
    msg.setSource(49338U);
    msg.setSourceEntity(12U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(105U);
    msg.locale.assign("FKWEORNSUPPAMDGAROIIJBWWSPQCMDYIEMNIPLFHXZZHBKSSJDZQOPCUFEBJOMGPVHTHASVKGYQIRQUUFMUSYAHLLVRFNMJEKXLLMDYENBJCWISUAYFIZDNXROSLWQCTXCKTRYBJMJCMWPKBDJLMRHBDNNXFFBWLKEXYVYEEPGWCOZHEFLG");
    const char tmp_msg_0[] = {43, -50, 81, 35, -70, 41, 15, 64, -127, 62, -76, 15, 24, 56, -20, 19, 97, 33, 38, 39, -49, 0, -36, -22, 8, 70, 51, 68, -61, -91, 33, 51, -101, 56, -114, 20, 118, 11, -82, -58, -104, -34, -101, -65, 78, 29, 39, 85, -70, 24, 100, 55, -79, -66, 125, 75, -13, -99, -81, 94, 83, -128, 15, 4, -123, 106, 21, 62, 110, -65, -4, 81, 69, 73, -51, 44, 69, 88, 87, 66, 104, 63, -45, -125, -7, 85, -37, -13, 54, 51, 107, -112, 44, -63, 53, 11, -88, 70, 67, -56, -116, 117, -13, -2, -115, 119, -117, 40, 6, -75, -40, -93, -8, -64, 47, 20, 50, 74, 99, 26, -54, 86, -120, -17, 14, 23, 93, -3, 109, 73, 54, -120, 0, 28, 110, 74, -82, -7, 103, 75, -70, 98, -78, -72, 105, -82, 45, -2, 72, 114, 79, -77, 64, 114, -70, 84, -18, 73, -33, 44, 103, 108, 65, -27, 39, -108, 122, -74, -52};
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
    msg.setTimeStamp(0.0373626644360564);
    msg.setSource(4378U);
    msg.setSourceEntity(66U);
    msg.setDestination(16283U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.11728128559576179);
    msg.setSource(16556U);
    msg.setSourceEntity(123U);
    msg.setDestination(33287U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.21117553454763183);
    msg.setSource(46087U);
    msg.setSourceEntity(106U);
    msg.setDestination(10765U);
    msg.setDestinationEntity(162U);

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

  return test.getReturnValue();
}
