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
// IMC XML MD5: 5bfe1a693e9fcbf67bf6175e44375d8c                            *
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
    msg.setTimeStamp(0.39974986278);
    msg.setSource(30646U);
    msg.setSourceEntity(67U);
    msg.setDestination(21261U);
    msg.setDestinationEntity(192U);
    msg.state = 78U;
    msg.flags = 246U;
    msg.description.assign("KTDFGHUGHBHPSPVYRPEGCETAYCLCWEIYHWKDNRBBVZOOWHTQZAUSANHBSD");

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
    msg.setTimeStamp(0.378934440827);
    msg.setSource(25861U);
    msg.setSourceEntity(162U);
    msg.setDestination(26034U);
    msg.setDestinationEntity(21U);
    msg.state = 107U;
    msg.flags = 118U;
    msg.description.assign("LJICIEOZFABVVNXMNJKAJFZRSLSQIPOIRNYDWPBGKJLTBSVYUEOLDDTXDCHPDFFEHQOGZHZVEWCHCMNTGJADXECVRELSQMVTIUYXHIZHBCFAUPUGFWOVPX");

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
    msg.setTimeStamp(0.341855099952);
    msg.setSource(32642U);
    msg.setSourceEntity(46U);
    msg.setDestination(36939U);
    msg.setDestinationEntity(170U);
    msg.state = 66U;
    msg.flags = 56U;
    msg.description.assign("NESUEEAPLUAJKVZDXUCJBSL");

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
    msg.setTimeStamp(0.377116512364);
    msg.setSource(47142U);
    msg.setSourceEntity(239U);
    msg.setDestination(7110U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.639285391074);
    msg.setSource(54842U);
    msg.setSourceEntity(107U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.117112906598);
    msg.setSource(52319U);
    msg.setSourceEntity(139U);
    msg.setDestination(11071U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.869618726516);
    msg.setSource(40020U);
    msg.setSourceEntity(111U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(203U);
    msg.id = 163U;
    msg.label.assign("XHLFTVMGPGEJQKQSWANIOZRQJGWWAAPGQBISUWFBPFSELONEFWPXAQFGHEHPKVESCGWFYCPCDODZKENATHIBXRDKZICMUHJFBKDEINHOSCMAORZMRQTEHNTIBFNHAVLLVYWLARQXKDOZRRS");
    msg.component.assign("AGHMIIJOHJWNLMRVBLTEWCWTQNROXQIPKGAFPJSSMWDRTPZOCLBIWKQLYZZMSIMFURFKYVEVRXUHNCVFVMOQCCQMRETKPBJFMZZFLSKJCGFXXVQGBQ");
    msg.act_time = 2364U;
    msg.deact_time = 25170U;

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
    msg.setTimeStamp(0.0403377908188);
    msg.setSource(26315U);
    msg.setSourceEntity(25U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(160U);
    msg.id = 182U;
    msg.label.assign("POTOVHTKGUGFBZCCBWJIQEMDVQPFPJKIJQBMOMJHJWDPYMLTAHLKTIARULXGRRUVADPMBYKNMGIZTICELALDVXVZHRVNYXFH");
    msg.component.assign("NWQDQKCTCNXJNXEWZKENIOKLANMXREJEJJYUXEDBRHBQZXTUXABLHZJKHADNLTI");
    msg.act_time = 4510U;
    msg.deact_time = 14690U;

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
    msg.setTimeStamp(0.160219423442);
    msg.setSource(1850U);
    msg.setSourceEntity(217U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(134U);
    msg.id = 8U;
    msg.label.assign("VUMJSGWSNZNNLQMDHUYHQDWNLAARRXONNDVMJUCHGKTPLDTLIQZNPNVGPWULBKKBLFXBUHKSWNSGZEGPFKPXZDLAKSIWAAGUIFXWXXNLAIIBCILFMAAREWGVEHUWRFEGM");
    msg.component.assign("HFUSHRTANBRXBGGQMQXBQAEGNWDPPQWCZDPTFWGIRQMJSJKJSCNWRKEEBLVMSNKMSFAZGIMJRATFUAUMALLWCLZIJKHDUVOBAXSMICBISHRQEHDVPHNIUFBPISVYDRXWWVXCKDMOPCYKJVELOETHTTPOPZIKCNXANFQDKOFZITVUSRHYKAEGVYJXCHWZCIOUEMLOYXW");
    msg.act_time = 35453U;
    msg.deact_time = 26999U;

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
    msg.setTimeStamp(0.446604034469);
    msg.setSource(14609U);
    msg.setSourceEntity(240U);
    msg.setDestination(53703U);
    msg.setDestinationEntity(106U);
    msg.id = 111U;

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
    msg.setTimeStamp(0.816507748161);
    msg.setSource(30387U);
    msg.setSourceEntity(15U);
    msg.setDestination(28823U);
    msg.setDestinationEntity(152U);
    msg.id = 21U;

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
    msg.setTimeStamp(0.797991605484);
    msg.setSource(53753U);
    msg.setSourceEntity(193U);
    msg.setDestination(3895U);
    msg.setDestinationEntity(146U);
    msg.id = 194U;

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
    msg.setTimeStamp(0.216165445835);
    msg.setSource(26247U);
    msg.setSourceEntity(247U);
    msg.setDestination(50992U);
    msg.setDestinationEntity(233U);
    msg.op = 133U;
    msg.list.assign("DPNPPWJNOGROHRTSZXICFZWKYGXBNNMJUVCSMEAFQPJATWYEOLDLUIUDYEHAZDBHVNKXGLSIBCWTCVDTKHTWMEYLLHQCQMOARATLHPUPPEDCRYLFSFOBKCNUSURSGQDVNAGSJKMQIWXJOQQVGEBYTAXAGFMJZIIJXIKOGDSRWFNCOKRYDQBZRKJEAOBDWJQACWPIZIZVXQVMYUSKXENHFVFUIOHYZVHCLXTSLZB");

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
    msg.setTimeStamp(0.785684895293);
    msg.setSource(35468U);
    msg.setSourceEntity(191U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(232U);
    msg.op = 242U;
    msg.list.assign("FNAQXBNMGVPMBMECMRWSJKWMTOKIFIMDOEXTATZSCOUEYDGUJKQGYZFUCIBBGEGNLDOIVLASCMJZMYHVYLYUQWKWFXAXDSKDQJVXUOEOBKVTYJAFOSHJVWTINEWJMLLADZRGVXJZRWBLCHRTHTYFIKCPNEQFZNXASSSCHFSJGIWJHIWGHZRNUIMZQDXULAAUBKDRCNQIRVPTXWOCNPRKSEFVZBYYFRGQPYQKUGDPCEOZHDVQABPLHBP");

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
    msg.setTimeStamp(0.141536797228);
    msg.setSource(31940U);
    msg.setSourceEntity(104U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(78U);
    msg.op = 179U;
    msg.list.assign("SHXHOVDCSNMLFTKKBGRMEPXPVOSOQEGUJZKMZNAUICLFTEPVGGOHBDHHYITAWOVBDXYNMJVTVDRVBAQKKDNEZLYVIAHTRPXQOGWEEXIRAJWBNCGSYPBCWKUUDXNICYZPIRJHNPAUSYZCLFAJEQTMWZMFEKLOLQFFJFDFJAOQLBTKUGHYVHQTNQBIUYWXVZQBYHDGRILJQWGPUCSLJCKKNZNJOUCSWMIMZTWDXTMOSERRIPDSFAEB");

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
    msg.setTimeStamp(0.425076216693);
    msg.setSource(11129U);
    msg.setSourceEntity(49U);
    msg.setDestination(28870U);
    msg.setDestinationEntity(14U);
    msg.value = 211U;

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
    msg.setTimeStamp(0.299539124036);
    msg.setSource(22309U);
    msg.setSourceEntity(40U);
    msg.setDestination(40101U);
    msg.setDestinationEntity(38U);
    msg.value = 21U;

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
    msg.setTimeStamp(0.369187616541);
    msg.setSource(20759U);
    msg.setSourceEntity(103U);
    msg.setDestination(64410U);
    msg.setDestinationEntity(24U);
    msg.value = 117U;

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
    msg.setTimeStamp(0.543311556761);
    msg.setSource(37466U);
    msg.setSourceEntity(74U);
    msg.setDestination(21827U);
    msg.setDestinationEntity(152U);
    msg.consumer.assign("WPYFDRJXYRCNRHFLSEDAIEXLYTUSFUZSJCXCOABTVGGBAOGQOJKXICNHAFGMCPXTDGRSLIJEKCCOOKMAHWVZCBZSRFXQWABFQHWIOSHXMLUKXJGQPBHQOOFU");
    msg.message_id = 44165U;

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
    msg.setTimeStamp(0.680116432579);
    msg.setSource(3407U);
    msg.setSourceEntity(123U);
    msg.setDestination(34309U);
    msg.setDestinationEntity(4U);
    msg.consumer.assign("JQWEUWMKOFDGLPELOJPYXURRHDEXUHRLVCTGFWBEYQKOXHHFSHUZQLPYNAOR");
    msg.message_id = 60526U;

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
    msg.setTimeStamp(0.602200373642);
    msg.setSource(11034U);
    msg.setSourceEntity(97U);
    msg.setDestination(4786U);
    msg.setDestinationEntity(68U);
    msg.consumer.assign("IPDOZYOGIFFUKYBKEHFXYBSNZTNFDLCCRIHBMRXDWGXSDQUVELGVZXJTGDHMCPWOKWNYNITOMGMZEZACELNISEKAWFSABTBZJWL");
    msg.message_id = 32006U;

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
    msg.setTimeStamp(0.544507039226);
    msg.setSource(28395U);
    msg.setSourceEntity(2U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.0413709538056);
    msg.setSource(64992U);
    msg.setSourceEntity(168U);
    msg.setDestination(29538U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.216431691524);
    msg.setSource(20276U);
    msg.setSourceEntity(174U);
    msg.setDestination(48434U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.728473081393);
    msg.setSource(1123U);
    msg.setSourceEntity(156U);
    msg.setDestination(32055U);
    msg.setDestinationEntity(244U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.179693741524);
    msg.setSource(13047U);
    msg.setSourceEntity(163U);
    msg.setDestination(8457U);
    msg.setDestinationEntity(80U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.0244012852816);
    msg.setSource(57104U);
    msg.setSourceEntity(118U);
    msg.setDestination(33722U);
    msg.setDestinationEntity(112U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.667754140773);
    msg.setSource(65205U);
    msg.setSourceEntity(74U);
    msg.setDestination(34585U);
    msg.setDestinationEntity(13U);
    msg.total_steps = 147U;
    msg.step_number = 23U;
    msg.step.assign("FWFCRNJIFDODQVYRZGHYHJRXCGVLICZIJKVETGPHLMIOFFTSQPOZAGQYSCZWIKGKNQZTDYVOIQEQRMJPHZLSGAVCFMMXOKTDMSXYDTVXNWJBADEXYHZKJTBLVKKVHUKWSEEWPSUIOLLZBIPUXCCBNTUNBRXZVNNSQFPXNURMBTOTSDRAQBWNJUYBGCPMPBKAXOAGQLN");
    msg.flags = 124U;

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
    msg.setTimeStamp(0.838158054234);
    msg.setSource(16069U);
    msg.setSourceEntity(5U);
    msg.setDestination(56054U);
    msg.setDestinationEntity(107U);
    msg.total_steps = 113U;
    msg.step_number = 95U;
    msg.step.assign("TWBBAATHBOTPYIYPSLIZRNDTJJIQJYMDILSSXOCNTNXAFMLZXUAFNFLGPEFWPCDUPWCNRSLKIAIDEJXQBCNEGQOAHUXGTWKCKMUDZHCNICYARXOPHJXMVPZKTAOBBCQLDBILZOOEEFWKNLDFPVUWHHCKKGGROQYXDPHPTYAESMZJVDEUFNJYGWIVKLBSHQBMZZZFRJBMUVNYGESRGEIS");
    msg.flags = 27U;

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
    msg.setTimeStamp(0.616836765644);
    msg.setSource(31129U);
    msg.setSourceEntity(240U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(93U);
    msg.total_steps = 111U;
    msg.step_number = 126U;
    msg.step.assign("ZVAZGINRHVUDCAZSLPGWOBHILIIJEEEJGJRMUQQQSWAAQR");
    msg.flags = 25U;

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
    msg.setTimeStamp(0.42822337614);
    msg.setSource(23U);
    msg.setSourceEntity(78U);
    msg.setDestination(42051U);
    msg.setDestinationEntity(149U);
    msg.state = 239U;
    msg.error.assign("JHSLDMGFEEAPUUTMPDXQGQXUEVNWCFKKLUUBYIZDBHAII");

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
    msg.setTimeStamp(0.638550142145);
    msg.setSource(42325U);
    msg.setSourceEntity(198U);
    msg.setDestination(51468U);
    msg.setDestinationEntity(196U);
    msg.state = 74U;
    msg.error.assign("SRZKFRLQPYOHJRWOKEDXEXDZLUDHVHVYCMUIFTXDZJOLFMKAZLRARGEAZUYVSPAWTHQSJFSCGSLCGSGQBPBQIJRICELRNAUAB");

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
    msg.setTimeStamp(0.595220160249);
    msg.setSource(37493U);
    msg.setSourceEntity(156U);
    msg.setDestination(42364U);
    msg.setDestinationEntity(4U);
    msg.state = 170U;
    msg.error.assign("ZMYACJHJQTOADPICBZRB");

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
    msg.setTimeStamp(0.375315624921);
    msg.setSource(48409U);
    msg.setSourceEntity(211U);
    msg.setDestination(5075U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.742881222152);
    msg.setSource(53029U);
    msg.setSourceEntity(250U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.579070309834);
    msg.setSource(44596U);
    msg.setSourceEntity(189U);
    msg.setDestination(18975U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.644517583117);
    msg.setSource(14843U);
    msg.setSourceEntity(100U);
    msg.setDestination(14326U);
    msg.setDestinationEntity(71U);
    msg.op = 22U;
    msg.speed_min = 0.865622127203;
    msg.speed_max = 0.264430926114;
    msg.long_accel = 0.566788670186;
    msg.alt_max_msl = 0.263817836926;
    msg.dive_fraction_max = 0.124055450581;
    msg.climb_fraction_max = 0.461239413976;
    msg.bank_max = 0.0112904685463;
    msg.p_max = 0.092685001805;
    msg.pitch_min = 0.799265737355;
    msg.pitch_max = 0.371602887739;
    msg.q_max = 0.411776215372;
    msg.g_min = 0.140764586621;
    msg.g_max = 0.7248335524;
    msg.g_lat_max = 0.942678943385;
    msg.rpm_min = 0.735123124953;
    msg.rpm_max = 0.0256134989309;
    msg.rpm_rate_max = 0.230038513422;

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
    msg.setTimeStamp(0.733747742561);
    msg.setSource(33790U);
    msg.setSourceEntity(65U);
    msg.setDestination(59580U);
    msg.setDestinationEntity(168U);
    msg.op = 29U;
    msg.speed_min = 0.252937894705;
    msg.speed_max = 0.732103911334;
    msg.long_accel = 0.140134899881;
    msg.alt_max_msl = 0.303912623667;
    msg.dive_fraction_max = 0.13370430461;
    msg.climb_fraction_max = 0.0402155123794;
    msg.bank_max = 0.767814551726;
    msg.p_max = 0.764120413503;
    msg.pitch_min = 0.328199426981;
    msg.pitch_max = 0.463021020508;
    msg.q_max = 0.894876822938;
    msg.g_min = 0.731419579125;
    msg.g_max = 0.985114444807;
    msg.g_lat_max = 0.700866844149;
    msg.rpm_min = 0.418831323638;
    msg.rpm_max = 0.301944051527;
    msg.rpm_rate_max = 0.833030325123;

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
    msg.setTimeStamp(0.958241760015);
    msg.setSource(63259U);
    msg.setSourceEntity(217U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(244U);
    msg.op = 117U;
    msg.speed_min = 0.923038461922;
    msg.speed_max = 0.80857749751;
    msg.long_accel = 0.24681915363;
    msg.alt_max_msl = 0.59095284599;
    msg.dive_fraction_max = 0.18248628321;
    msg.climb_fraction_max = 0.305357675287;
    msg.bank_max = 0.248009788023;
    msg.p_max = 0.162253070224;
    msg.pitch_min = 0.372560884879;
    msg.pitch_max = 0.766113624584;
    msg.q_max = 0.242191018165;
    msg.g_min = 0.43648816659;
    msg.g_max = 0.224059918496;
    msg.g_lat_max = 0.701383234056;
    msg.rpm_min = 0.276197473164;
    msg.rpm_max = 0.0754558486335;
    msg.rpm_rate_max = 0.775078775174;

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
    msg.setTimeStamp(0.273470663872);
    msg.setSource(334U);
    msg.setSourceEntity(127U);
    msg.setDestination(47256U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.299207477129);
    msg.setSource(61387U);
    msg.setSourceEntity(231U);
    msg.setDestination(23434U);
    msg.setDestinationEntity(114U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("HLTDUTAOAMMYJZPBEBGSUPOCVJCJDKXSFBIXEWOTURLNCTATEIVQDROBKLNQAUZUFEAGIQFTJIMATOIRV");
    tmp_tmp_msg_0_0.lat = 0.340779931961;
    tmp_tmp_msg_0_0.lon = 0.89844378618;
    tmp_tmp_msg_0_0.depth = 0.972089513756;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.322316896182;
    tmp_msg_0.y = 0.0800102510905;
    tmp_msg_0.var_x = 0.423557600098;
    tmp_msg_0.var_y = 0.264156456302;
    tmp_msg_0.distance = 0.550803693846;
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
    msg.setTimeStamp(0.0458149668806);
    msg.setSource(17176U);
    msg.setSourceEntity(136U);
    msg.setDestination(55282U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.654117468138);
    msg.setSource(28708U);
    msg.setSourceEntity(209U);
    msg.setDestination(62324U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.126967828504;
    msg.lon = 0.287428323802;
    msg.height = 0.352952729954;
    msg.x = 0.948869436257;
    msg.y = 0.871098230721;
    msg.z = 0.890901257475;
    msg.phi = 0.424118972012;
    msg.theta = 0.201066569497;
    msg.psi = 0.0598456479417;
    msg.u = 0.104297958645;
    msg.v = 0.978733831226;
    msg.w = 0.206178143581;
    msg.p = 0.516546810177;
    msg.q = 0.444440843859;
    msg.r = 0.21717686293;
    msg.svx = 0.060144813355;
    msg.svy = 0.975544666179;
    msg.svz = 0.24301625667;

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
    msg.setTimeStamp(0.568275310748);
    msg.setSource(19988U);
    msg.setSourceEntity(96U);
    msg.setDestination(62541U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.286055772994;
    msg.lon = 0.575731138187;
    msg.height = 0.729594206029;
    msg.x = 0.366404248107;
    msg.y = 0.279263642348;
    msg.z = 0.0214560236241;
    msg.phi = 0.709413144809;
    msg.theta = 0.178386960376;
    msg.psi = 0.962763774373;
    msg.u = 0.897161695382;
    msg.v = 0.540969011776;
    msg.w = 0.0252476942766;
    msg.p = 0.487370684789;
    msg.q = 0.893828615881;
    msg.r = 0.67131290665;
    msg.svx = 0.882941764361;
    msg.svy = 0.385287562222;
    msg.svz = 0.373962109525;

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
    msg.setTimeStamp(0.153385271197);
    msg.setSource(6810U);
    msg.setSourceEntity(141U);
    msg.setDestination(41787U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.0474824624324;
    msg.lon = 0.636816568795;
    msg.height = 0.562649622219;
    msg.x = 0.10545890056;
    msg.y = 0.906747324797;
    msg.z = 0.318456483909;
    msg.phi = 0.186876593734;
    msg.theta = 0.131143316231;
    msg.psi = 0.984709294097;
    msg.u = 0.079029160778;
    msg.v = 0.76080299915;
    msg.w = 0.624300133189;
    msg.p = 0.967684535353;
    msg.q = 0.491643095273;
    msg.r = 0.362210641817;
    msg.svx = 0.793098716531;
    msg.svy = 0.840019735658;
    msg.svz = 0.585923202343;

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
    msg.setTimeStamp(0.299807268647);
    msg.setSource(49800U);
    msg.setSourceEntity(70U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(18U);
    msg.op = 170U;
    msg.entities.assign("GQXVOOTZMSBIPYEIHMZDQWAHXBYXETUCQEFNIOBWKTZQOGUKHEVLMVABWMCPYYQWLNPRGHUSSMPEGQVEVAUSFCIDTBAIXLIBWMJVOFIPYKDJFNWNXDYAKXMANHGJYNPJZMOVHZUUTSJDLCQHNKRQGJFTTRYKTBRIQHOLGSUZFOORXPJYXECNZPZHWRCPKDJDIEKACDSXEEYLMGFUWUSUGCDMK");

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
    msg.setTimeStamp(0.442137251911);
    msg.setSource(40536U);
    msg.setSourceEntity(74U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(6U);
    msg.op = 84U;
    msg.entities.assign("PZRFWQSOZLXFJYVSBMTTNLHAIAQSHBGQQMMRHADCOCLFQZIOASMZCKLSKWBNAGVPMJNFDEVCMXPXETCDBPHEFBBRDDH");

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
    msg.setTimeStamp(0.367156777771);
    msg.setSource(28715U);
    msg.setSourceEntity(149U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(13U);
    msg.op = 104U;
    msg.entities.assign("NTEUVJODGIFSXXYGJDZQFQHMDMETGVQGQIWLESJXHCBMFCJJZKGGIETSHLHTMODXWEFKGGQNYWRJYOQYWCQZOGUXLAMBIYTZWCNBNXDZSRAYKIUMZYAAQFBXVBHVIXJISVCJTLOVPREKHOVAKNFONAUIRKHPRDWCPDMUNELLPZZARLVOTYIQRPWWFDRFBBUHHPZTSFPEXEDEQPKJLMPTMUNHCUAKYFGBNASRKMDJTVCRCZOYXPANWUWBLOSU");

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
    msg.setTimeStamp(0.73407976843);
    msg.setSource(3802U);
    msg.setSourceEntity(37U);
    msg.setDestination(48063U);
    msg.setDestinationEntity(119U);
    msg.type = 52U;
    msg.speed = 43442U;
    const char tmp_msg_0[] = {-109, 19, 18, -90, 42, -8, -124, -69, 101, -42, -44, -30, -121, 114, 101, -24, 113, -75, -119, -23, -58, -121, -68, 61, 93, -73, -42, 108, 105, -47, -82, 110, 43, -69, 92, 92, 82, -81, -29, 45, -109, 113, -114, -16, 80, -16, -16, -6, -125, -77, -123, -55, 88, 52, 106, -47, -7, -111, -73, -15, -43, -33, 107, -114, -56, 7, -50, -38, 43, 0, 4, -10, 91, -124, 23, 12, 54, -111, -4, 8, -93, 57, 3, 89, -117, -106, -43, 51, 94, 50, -93, -49, 51, 117, 86, -28, 35, 74, -73, -29, -9, 37, 41, -105, -73, 11, 51, -85, 120, -13, -110, -79, -114, -127, 61, 72, 38, -104, -101, 11, 100, 80, 40, 25, 3, 97, 111, -105, -104, -107, 95, -51, -57, 31, -26, -80, -92, -71, -11, 22, 40, -21, 95, -101, 24, 33, -78, -116, -34, 94, -87, 87, -108, -24, -116, -78, 23, 12, 94, 17, 85, -3, -6, 105, -72, 58, 107, -111, -104, 43, 126, 15, -102, -23, -4, -13, 105, -86, 21, -95, 10, 28, 29, 114, 21, 75, -56, -38, 94, 91, -66, 25};
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
    msg.setTimeStamp(0.0461092810597);
    msg.setSource(54748U);
    msg.setSourceEntity(84U);
    msg.setDestination(47259U);
    msg.setDestinationEntity(34U);
    msg.type = 101U;
    msg.speed = 15033U;
    const char tmp_msg_0[] = {2, -118, 107, 15, -29, 87, -94, 94, 120, -51, -102, -44, 62, -10, 125, -122, -89, 108, 48, -127, -109, 97, 7, -78, -20, -39};
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
    msg.setTimeStamp(0.695503541767);
    msg.setSource(63044U);
    msg.setSourceEntity(112U);
    msg.setDestination(33910U);
    msg.setDestinationEntity(116U);
    msg.type = 76U;
    msg.speed = 20442U;
    const char tmp_msg_0[] = {95, -27, -83, 41, -7, 68, 124, 105, 100, -15, -111, -19, -27, 22, -111, 33, 6, 121, 95, 95, -70, 72, -110, 40, 38, 114, -122, -91, 88, 56, -57, -98, 96, 22, -90, 11, 33, 13, -109, -102, -11, -38, 93, 103, -99, 22, -28, 0, -5, -123, -83, -127, 61, 16, -59, 74, -77, -42, -62, -43, -92, 89, 36, -5, 78, 20, 12, 125, -48, -47, 30, -3, -31, -37, -122, -106, -20, -89, -64, 108, 104, 25, -18, 0, -57, 24, -9, -101, -19, 123, -63, 69, 11, -62, -100, -57, 28, -79, -122, -46, 53, 101, -123, 59, 117, 10, 25, 105, 12, -85, -110, -60, 83, -72, 97, -97, -82, -96, -1};
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
    msg.setTimeStamp(0.563237797856);
    msg.setSource(55323U);
    msg.setSourceEntity(121U);
    msg.setDestination(54763U);
    msg.setDestinationEntity(126U);
    msg.op = 123U;
    msg.tas2acc_pgain = 0.042279558346;
    msg.bank2p_pgain = 0.089790289901;

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
    msg.setTimeStamp(0.797241612122);
    msg.setSource(8529U);
    msg.setSourceEntity(174U);
    msg.setDestination(48416U);
    msg.setDestinationEntity(238U);
    msg.op = 50U;
    msg.tas2acc_pgain = 0.462006890429;
    msg.bank2p_pgain = 0.0575700841079;

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
    msg.setTimeStamp(0.0270843101549);
    msg.setSource(51484U);
    msg.setSourceEntity(178U);
    msg.setDestination(29584U);
    msg.setDestinationEntity(9U);
    msg.op = 15U;
    msg.tas2acc_pgain = 0.933246673428;
    msg.bank2p_pgain = 0.788617510523;

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
    msg.setTimeStamp(0.0625926451307);
    msg.setSource(64156U);
    msg.setSourceEntity(55U);
    msg.setDestination(28425U);
    msg.setDestinationEntity(27U);
    msg.available = 3569431992U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.4776176047);
    msg.setSource(20843U);
    msg.setSourceEntity(78U);
    msg.setDestination(6105U);
    msg.setDestinationEntity(153U);
    msg.available = 3692203438U;
    msg.value = 103U;

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
    msg.setTimeStamp(0.433712755182);
    msg.setSource(59607U);
    msg.setSourceEntity(137U);
    msg.setDestination(47952U);
    msg.setDestinationEntity(226U);
    msg.available = 1205807238U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.459580464447);
    msg.setSource(17529U);
    msg.setSourceEntity(53U);
    msg.setDestination(51842U);
    msg.setDestinationEntity(119U);
    msg.op = 149U;
    msg.snapshot.assign("WBWEQWBVUG");
    IMC::PlanStartPoint tmp_msg_0;
    tmp_msg_0.plan_id.assign("IVYNHCKRGBOWROXRDJQVWBHCRTUEKNMOJHCHKKGUGOIAVIBJGIRLRZUAYXKQXLFBAAFJIZLTQNBJEXPIMNJZSLLCNHOZSZUZQSIGWKEDMENGFNDDJOQCVWWPFSKJTRWYLSSWPCHIDBPBKLSGHNEZMFOVPSZXWVTDQUVZFAYXRQFSKDMMTJMFCNYVYUQEPPARTTAWYOVUMEHGTGKMPUAGBLYJHPTIBFPLMYXDF");
    tmp_msg_0.lat = 0.0785071657148;
    tmp_msg_0.lon = 0.317880771198;
    tmp_msg_0.z = 0.0797472172794;
    tmp_msg_0.z_units = 63U;
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
    msg.setTimeStamp(0.0801158707738);
    msg.setSource(53238U);
    msg.setSourceEntity(171U);
    msg.setDestination(33461U);
    msg.setDestinationEntity(22U);
    msg.op = 48U;
    msg.snapshot.assign("UGTDRKFTQIUTWRXYKBYUJFKYWTJGWPBVOWSGXFVEEZCBNOUDZCJRBWYVWJMVUMIPQBSOOSNCXPHIIFKLUSBCHRDEFFQNOYNAJCXUYESLLNIDNTEFOIOGKZMRBZGWOCKHMARQLPFMCURHWKHJVKDXZWJOPQPRTHZSVRLALHMJMTGAAQNEZLPDVMPDXVTNZEOBFHIDCEAYXKAEGCGUXABQIXZGJWUMNGLLT");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.759229375611;
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
    msg.setTimeStamp(0.279979123115);
    msg.setSource(5477U);
    msg.setSourceEntity(74U);
    msg.setDestination(34393U);
    msg.setDestinationEntity(112U);
    msg.op = 58U;
    msg.snapshot.assign("OUAVKYUNEBYQHSTZRNFDBDQKKOCNMMWVTCXGPFFXMXWUOYHYRFCCOTKVOVZZMSRSGRUXRNRSMUPJZSVNILOHCBG");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.395968180005;
    tmp_msg_0.i = 0.281565633042;
    tmp_msg_0.d = 0.244117512006;
    tmp_msg_0.a = 0.273497874102;
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
    msg.setTimeStamp(0.0849268910979);
    msg.setSource(47348U);
    msg.setSourceEntity(99U);
    msg.setDestination(5096U);
    msg.setDestinationEntity(50U);
    msg.op = 150U;
    msg.name.assign("ELFMGGHTIKOQSJVFKFTXLWKAWUSZSPZJVXIYLGMFSCRDXTADNHPAOLOPJUOYGQEKRNPJUOZCBFWIPOUVBTDPGZMHRBCJWMQAWFFDABJYMDYRAQGDFQSNTCMNWYUEHNMLMUTBETXHXWLNHQCTGEDZATCNYEJIZVPZEAGMWRKLURQDUEBTYIOPXCBOHWX");

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
    msg.setTimeStamp(0.237840932081);
    msg.setSource(6570U);
    msg.setSourceEntity(53U);
    msg.setDestination(24644U);
    msg.setDestinationEntity(89U);
    msg.op = 136U;
    msg.name.assign("OGDLMCURDSXNEUXOPLASJBIQFQZALDQKPVZSXQYRTQYYWGCFSVJTWHIDZBTNUJDCGOFUWSYEBVKTIEPWVAHGHKZLCZGWSNDOOKAFAUXROIJTIBBCJITEKZQBMRTNOGKYJPVAAZP");

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
    msg.setTimeStamp(0.879730987284);
    msg.setSource(62807U);
    msg.setSourceEntity(30U);
    msg.setDestination(37515U);
    msg.setDestinationEntity(125U);
    msg.op = 220U;
    msg.name.assign("MWFZWKESHQNHMQRSDGIBERXCGCZHEIBCTBSJHOISBUCZAOKEMPLYOUOCCTRGVOYPYIFMUVRLNFBUVX");

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
    msg.setTimeStamp(0.243179726474);
    msg.setSource(36872U);
    msg.setSourceEntity(1U);
    msg.setDestination(39554U);
    msg.setDestinationEntity(199U);
    msg.type = 107U;
    msg.htime = 0.386540065993;
    msg.context.assign("OUQNJZUZPWNHEKFPDTCHOPLUCYZWDSCWBPXMSHSNLTOZFIELQOMXXNNWNJUCFBMDNEHDGRHGXLWMELXOLDAIBYLMVKGBI");
    msg.text.assign("BRRCIQIBEGOCZZRAKSHSYVVNUHGHWYSQHJIIDCBTKDZGGAGNTCMMLHWZKPJQEPZOVJLSXDSSLHZBUGXQLLGPEKPPBVQPTWNFWFTOGFXAGWUIFBQIYMYKBRLXJQWBEMPNHHOCUMYOVCAYFVWFJXQQEJIKXDISKAYZRNVNTKCTASXMJRFOTNRF");

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
    msg.setTimeStamp(0.470577374617);
    msg.setSource(35556U);
    msg.setSourceEntity(56U);
    msg.setDestination(4580U);
    msg.setDestinationEntity(116U);
    msg.type = 10U;
    msg.htime = 0.748242588551;
    msg.context.assign("JXMGCFBXCUNRYTAIIHAQTNNFZQGAEJIZMFJAWWCFMUNYXOKIEBZTPUBHJWKGSOFMCYPXDCBGGERADKDBLSTMYXRHNBMBPWXYEVWDJGVCIJSTFZTOKAGURBFDVUHLTEODKQOVHDUWTSVWNKSOSVQNLQWJEKRWAVSJIGXZVEIAIZFFLQEQPJKCOCGSM");
    msg.text.assign("OVAIQPXAZDHJEPHVZPQOHBDUSFONSZTJMORAVGKGOXGXSDNNHJSLHFFYEWKIJTUAKRSTIUYTCVUYVMDPLWMRRPRDTBSFDKWCYBTZESEVIUUPRWBNMAWNJAEDPVJSI");

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
    msg.setTimeStamp(0.892644391059);
    msg.setSource(13632U);
    msg.setSourceEntity(230U);
    msg.setDestination(34176U);
    msg.setDestinationEntity(49U);
    msg.type = 94U;
    msg.htime = 0.28723206498;
    msg.context.assign("SIRJUFPYEWJNOYMJJOLQZEHKGMAGQUZBBBVZAKPWALAFZUILTMXMVFELFSESVXEKCIKUXQYVRDKWVTEVSIQOVRSANYPNJODD");
    msg.text.assign("ZWPJKAWCPUKGNEHDVFMZZJCNONZHKCSAQBBVYTSIZWCUMEXJG");

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
    msg.setTimeStamp(0.108600458573);
    msg.setSource(33884U);
    msg.setSourceEntity(135U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(169U);
    msg.command = 23U;
    msg.htime = 0.18860832403;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 173U;
    tmp_msg_0.htime = 0.132238993066;
    tmp_msg_0.context.assign("JLJNFSWASRCRMBCMILCHYIFVXRNNKGJPMBGNLCHEHWGWHSSIVEYQZUBAPKLITLEBXNLPQTCIPHRJHDZOQPMXWLZXMYSU");
    tmp_msg_0.text.assign("LQSLUMGUVZOSPYKBOCXFZYWBEBIOHTBNDHRYAIEMZDYMBLFDJCPWDXZIWDPUNTECEXVMNZYPNTMJDKPKFMAWJFUIWTFHOZWGPTXQUCCBDAZQHANTCRLRXMVGSGMQTFFBSKOZAXOGBCQISJZEJVXDEGVONLQDYQSMFLIUXSRGXQWCYKIKZRPBHJKLRSJPIKNFUGERBHHARVSMTY");
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
    msg.setTimeStamp(0.198357665802);
    msg.setSource(31793U);
    msg.setSourceEntity(171U);
    msg.setDestination(8907U);
    msg.setDestinationEntity(174U);
    msg.command = 90U;
    msg.htime = 0.0201561250742;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 122U;
    tmp_msg_0.htime = 0.819719666628;
    tmp_msg_0.context.assign("WIMVVQADZRXTRKUDEIHPLSHRKYOIFNECBGSUTJGFGHADLONKFNFPFABEOFCFIRXDQSSZKKYLXTMVWBHNQIJDEGPJGMWYXYCGCAYJQNRVNUWRHAQMOFWMJBSBCEDGSJJEOMZPZQKARIHJNWXWYIDWDDVZWNLBJTZPNAUPSUSXMAYSWDTVPZLUKKCOYGQEKSQQCZVXCCYLLHTUOTTPPEQILVXOMFNHAHHUBIGRXTZOUZPBFMRCVKXBRMU");
    tmp_msg_0.text.assign("UNKTVHOEZFDMAPWIGRRTSORYLBQTOTGLANPXZPWNSAFJKEGKJHCDZNPFITDX");
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
    msg.setTimeStamp(0.429382521314);
    msg.setSource(46586U);
    msg.setSourceEntity(24U);
    msg.setDestination(53506U);
    msg.setDestinationEntity(189U);
    msg.command = 83U;
    msg.htime = 0.332819368319;

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
    msg.setTimeStamp(0.704337539564);
    msg.setSource(15476U);
    msg.setSourceEntity(107U);
    msg.setDestination(38315U);
    msg.setDestinationEntity(20U);
    msg.op = 167U;
    msg.file.assign("HTUDIYXBJIXPDNUOWCRPREQJZGUNKQGEPBEVFHHLPFGCGHE");

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
    msg.setTimeStamp(0.738629575936);
    msg.setSource(2985U);
    msg.setSourceEntity(1U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(241U);
    msg.op = 174U;
    msg.file.assign("TXAUHKGCYQTVXTVLQHMWRJHDXBZHKCFOPKI");

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
    msg.setTimeStamp(0.553716867342);
    msg.setSource(15985U);
    msg.setSourceEntity(164U);
    msg.setDestination(112U);
    msg.setDestinationEntity(115U);
    msg.op = 96U;
    msg.file.assign("ATNIXKARVCCKZEJAGSFKSRCKHMQWUZFOIMLEVHAXYPEQSN");

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
    msg.setTimeStamp(0.456603568837);
    msg.setSource(2548U);
    msg.setSourceEntity(222U);
    msg.setDestination(22531U);
    msg.setDestinationEntity(29U);
    msg.op = 138U;
    msg.clock = 0.913215527472;
    msg.tz = 22;

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
    msg.setTimeStamp(0.196526713157);
    msg.setSource(16280U);
    msg.setSourceEntity(36U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(126U);
    msg.op = 229U;
    msg.clock = 0.212123071733;
    msg.tz = -7;

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
    msg.setTimeStamp(0.0943324138637);
    msg.setSource(31448U);
    msg.setSourceEntity(138U);
    msg.setDestination(7187U);
    msg.setDestinationEntity(5U);
    msg.op = 65U;
    msg.clock = 0.178442088304;
    msg.tz = 52;

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
    msg.setTimeStamp(0.595747315572);
    msg.setSource(20946U);
    msg.setSourceEntity(244U);
    msg.setDestination(57231U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.852435048732);
    msg.setSource(6622U);
    msg.setSourceEntity(44U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.723690281015);
    msg.setSource(51260U);
    msg.setSourceEntity(165U);
    msg.setDestination(42829U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.439075427402);
    msg.setSource(54686U);
    msg.setSourceEntity(19U);
    msg.setDestination(49921U);
    msg.setDestinationEntity(25U);
    msg.sys_name.assign("RJXJBASSHOQDYHQOYOX");
    msg.sys_type = 247U;
    msg.owner = 16976U;
    msg.lat = 0.729409185517;
    msg.lon = 0.00270496538506;
    msg.height = 0.439014206317;
    msg.services.assign("MGVIYRMGPOKYMVZSANIOXEOUTYCUXWODQHZUFELFMHNVNQPYCRUKLHMIANRCTXQPQEETZXCHHFIHYUOVQEKOHNIRXLRIBOGDKVWNQBAPXYVZP");

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
    msg.setTimeStamp(0.732560959867);
    msg.setSource(749U);
    msg.setSourceEntity(101U);
    msg.setDestination(4659U);
    msg.setDestinationEntity(133U);
    msg.sys_name.assign("EELKDNUSWOJEINCIAYZCBQDFYQCSXHAGWSSODTGJWWVZGLXUHLFXANBBCFCTDHYOIUIJTRJPOTLGDWTHGUGQ");
    msg.sys_type = 51U;
    msg.owner = 12526U;
    msg.lat = 0.0345994395285;
    msg.lon = 0.413706990086;
    msg.height = 0.899842731049;
    msg.services.assign("PXROXQPZMPRDNBCITSGMIQRBJVSSFLYADXYGGY");

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
    msg.setTimeStamp(0.00100254830383);
    msg.setSource(1941U);
    msg.setSourceEntity(106U);
    msg.setDestination(27729U);
    msg.setDestinationEntity(187U);
    msg.sys_name.assign("XZFSVPSBFZXRSNBMFZPSPRJGSSIKKTMVFJWSGBIGCQVGVWVAAOQDXGXXJLHNXCUMAZZACACWECRCJJLJ");
    msg.sys_type = 40U;
    msg.owner = 60076U;
    msg.lat = 0.207190958126;
    msg.lon = 0.439398718797;
    msg.height = 0.61756619299;
    msg.services.assign("PGDCPTESLTTCSUBEYDNCIKDZJQHUGIOKLYFASRWEJEYWONIJXRZGZNWBQOPKLSAQMVMBDRNQJFQMNAGCQSRABVCXVLWFAWNRUKHUYBIZJDCQBPICMHRVPSJZTVRFFVXGUCXMXTXRCLBZTDUXMMYBETADMHUYOILAJKYKZZALWTBOEGNFEIJMGZSQVPOYOWYFQDOTAHXLAKYIXGRKVHJGOECUJSFLNSXIHWRNHUPDWVTZEKB");

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
    msg.setTimeStamp(0.37899651393);
    msg.setSource(48847U);
    msg.setSourceEntity(211U);
    msg.setDestination(38786U);
    msg.setDestinationEntity(252U);
    msg.service.assign("GWNKQTMYAIIXCRTQJIVYVASQKZPWJGLYFXZDFCSBJXWHGFTBSWFCUAJEDRIEDFACJLMMCLQBUOGGBGQLINIODOKFESRKEEKRQWNZMPUHTLSCRALRJTKWKVZNYHFYFYNJDUQYVMZOQESSKAIAMYEEMVWJTZWXMHUJMAHODBEJSPIRHK");
    msg.service_type = 217U;

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
    msg.setTimeStamp(0.558753881915);
    msg.setSource(59199U);
    msg.setSourceEntity(245U);
    msg.setDestination(25062U);
    msg.setDestinationEntity(149U);
    msg.service.assign("REIFSEZKVVDFQNFQUQGOAPWWDSKBHOVSTQBXDGGIWAJYBBTUTBPXNLUCYRSUSEOSXTZHGVVZJOSTQFGDMCIWTHMLPJEJEKNFUNXPBVFISSAQDRRGYRHPGFMEZNRTNLHRMEICFUQJKLVBHI");
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
    msg.setTimeStamp(0.499585924048);
    msg.setSource(42463U);
    msg.setSourceEntity(180U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(43U);
    msg.service.assign("WUAZRMBTRPVDEECDTTNTLFBAXXSFDMJTWWGKNLZRAVKHYUQXPWWPNXSWWTYOCBUIUCOIQHALFYOMKSCAYJDLTEZNXUCAKFLQOCAQNEJXEBWOIRQMQBQHBHXHZDIUFBXMZNSLOGPVKXJJDKVXFJJIDRDRVISQUISKVGQGPVVSVKLSOOZFPCGMYNYKPLCSSCFMZAYDOETIJMTTPHHGGGVRMENBZBFAHFZYDWBEGPRIJNRULYPHOQL");
    msg.service_type = 50U;

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
    msg.setTimeStamp(0.185133739373);
    msg.setSource(6260U);
    msg.setSourceEntity(32U);
    msg.setDestination(24030U);
    msg.setDestinationEntity(122U);
    msg.value = 0.979536601712;

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
    msg.setTimeStamp(0.856384736305);
    msg.setSource(50035U);
    msg.setSourceEntity(103U);
    msg.setDestination(58398U);
    msg.setDestinationEntity(163U);
    msg.value = 0.772901686159;

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
    msg.setTimeStamp(0.182215571318);
    msg.setSource(1668U);
    msg.setSourceEntity(223U);
    msg.setDestination(11073U);
    msg.setDestinationEntity(190U);
    msg.value = 0.322808725838;

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
    msg.setTimeStamp(0.627084290703);
    msg.setSource(60118U);
    msg.setSourceEntity(236U);
    msg.setDestination(48405U);
    msg.setDestinationEntity(109U);
    msg.value = 0.575781128201;

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
    msg.setTimeStamp(0.685088642742);
    msg.setSource(33379U);
    msg.setSourceEntity(17U);
    msg.setDestination(43642U);
    msg.setDestinationEntity(59U);
    msg.value = 0.996728593272;

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
    msg.setTimeStamp(0.919906547426);
    msg.setSource(40944U);
    msg.setSourceEntity(169U);
    msg.setDestination(53303U);
    msg.setDestinationEntity(249U);
    msg.value = 0.26410895539;

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
    msg.setTimeStamp(0.709850138006);
    msg.setSource(11962U);
    msg.setSourceEntity(32U);
    msg.setDestination(51406U);
    msg.setDestinationEntity(122U);
    msg.value = 0.415608929544;

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
    msg.setTimeStamp(0.189154141781);
    msg.setSource(40949U);
    msg.setSourceEntity(20U);
    msg.setDestination(25570U);
    msg.setDestinationEntity(89U);
    msg.value = 0.930338352159;

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
    msg.setTimeStamp(0.489836792866);
    msg.setSource(5560U);
    msg.setSourceEntity(154U);
    msg.setDestination(3359U);
    msg.setDestinationEntity(78U);
    msg.value = 0.657706953994;

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
    msg.setTimeStamp(0.732786797407);
    msg.setSource(30718U);
    msg.setSourceEntity(148U);
    msg.setDestination(1067U);
    msg.setDestinationEntity(72U);
    msg.number.assign("KDEZSJFWQCJMWLTPLCZKLJFLYNYYANWFUBUTHNVXFSVZKEGVVDTHSFSYRGAVLGGCKZKSCSIMWPTUAIDVETQMWORFWRIGVXJAOMRFGIXGRSYYZBPTUTQQEPURYACMVPZQKYODODN");
    msg.timeout = 29241U;
    msg.contents.assign("ALCYIPJVSSJYIVTKHFKRPFZIRXYMSNDDHQVFYCPUETBFYMACCXDAZQZMKULEMNEIVJCBSHDWBWXNLKGOEOWGWCMNTMRFPJZKOKOHQSMGYVIJFGGACEGOTWNUQHEHYNBRBNB");

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
    msg.setTimeStamp(0.247614279869);
    msg.setSource(58918U);
    msg.setSourceEntity(63U);
    msg.setDestination(33729U);
    msg.setDestinationEntity(178U);
    msg.number.assign("WKCDJAVMOFVPQVZBRWTVSUXJDLNMYNZQCEJGIDRVUFTNAGAUABDYTTQTVDNIQQEGOQXZLAHHCRYESJZGIKXFHPCCUXUAOFTKJMLPQBNBMVWNRECEVWBFCTMJKZQSRDTOJPWICHLGWSBGOFIXZZEXVTVNEGCYUPFYHHPSQZHGNZYCKEBPPWEMZLOOI");
    msg.timeout = 23662U;
    msg.contents.assign("IPGUSXTRITSWKLEIJYVAHCZAIPWVOKRLYZJHAOPGAZXYWDMRFHBRFMLKDOQKDZAYPVONLQREZRLEOSCZVNXQZLHS");

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
    msg.setTimeStamp(0.723755352531);
    msg.setSource(40695U);
    msg.setSourceEntity(129U);
    msg.setDestination(57263U);
    msg.setDestinationEntity(208U);
    msg.number.assign("OMFTYUESGNIZJOYZICLW");
    msg.timeout = 45436U;
    msg.contents.assign("DCRRDTMMQAIOVLQCKDWITGPFWSABLWWOKJDOGFIJNFLEPVEXPBCJHYAPHNNYBRMDTVKBXOPOFBZZDTNIIIIUVVFQMWCZSREQPYFTYWOSCLYJUESHEFCMZWRXOUPQNBZNWCAPUEUTJYNFGSLRBCPWUXKFXYMSSMBGNGMHKIXRYLSAPZVOZSHEDLGAXQFUTSKAMHJKIJVYXZUUCKDZA");

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
    msg.setTimeStamp(0.475248131161);
    msg.setSource(18446U);
    msg.setSourceEntity(38U);
    msg.setDestination(57594U);
    msg.setDestinationEntity(146U);
    msg.seq = 4230327458U;
    msg.destination.assign("SEJKSOWSPAOBPSGPZDANFYWQKUVPZDWTENAZJAMXURRLGULYGLPIUUFZCCWGDREWQXQYIZBZHAEZQXPIKKDNMIOLBIFNJQXOFBXFHVEODFHRKHHOTRYVVNBHOMTSJDDQUNRWITFIXCBCRXTMQMVDJAEIKXYSSVJMAZLRBVBAHKQSUXLWTWCCUN");
    msg.timeout = 4126U;
    const char tmp_msg_0[] = {76, -91, 61, -80, 64, 5, -16, -80, 40, -2, -99, -43, 79, -27, -45, 22, 116, -124, 118, -3, -126, 37, 85, 107, -59, 118, -18, 14, -122, 33, -68, 102, 32, 121, -106, 111, 52, -56, -92, -80, -17, -68, -57, -44, 8, 98, -27, 95, 88, 19, -22, 121, -111, -73, 115, -87, 124, 109, -36, -18, -101, -128, -119, 15, 19, -128, 30, 4, -33, 2, 119, -47, 102, 122, -9, 70, 18, -62, 94, 46, -60, -58, -2, -121, -36, -66, 13, 37, 63, -128, 122, 22, 90, 8, 68, 122, -65, -37, 35, -98, -17, -113, -16, -26, 51};
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
    msg.setTimeStamp(0.223311947565);
    msg.setSource(32199U);
    msg.setSourceEntity(31U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(73U);
    msg.seq = 65295454U;
    msg.destination.assign("EYLXNYDGACIKGIACFAMUODURBZLXJYZVPHIWLOTJHEYCDSHROTXABCBPQXTIIPQZMWSXGODZEMYTIESQKVQIRFRNUFKLKFWLFVHVPSQRNXTCRLWMAYUZLUDEKXCCNMAFJNUXYUMSVMLEY");
    msg.timeout = 65029U;
    const char tmp_msg_0[] = {16, 45, -54, -76, 62, -112, 28, -22, -79, 44, -16, 12, 100, 27, 119, 1, -78, 28, 112, -72, -87, -38, -85, -76, 84, -39, 60, -48, 69, 104, -13, -24, -92, 45, -46, 47, 30, -34, -112, 46, -114, -16, -109, 45, 60, -41, 107, 97, -111, 57, -86, -74, 46, -68, -90, 84, -105, 93, -112, -49, -89, 118, 98, -18, 106, 22, 10, -111, -34, -57, -30, 85, -117, 0, -125, 62, -26, -112, -117, 73, 97, 115, -85, -101, 12, -6, 107, 95, -37, -93, 65, 70, 10, 9, -100, -2, -114, 84, 63, 53, 37, 33, -111, 61, -93, -12, -109, 67, -73, 59, 119, 75, 69, 47, -116, -20, -116, 60, 96, 77, 52, 71, 40, -24, -24, -14, 80, -113, -41, 89, -76, -7, -21, 16, 79, 3, 27};
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
    msg.setTimeStamp(0.809017940982);
    msg.setSource(41663U);
    msg.setSourceEntity(235U);
    msg.setDestination(8783U);
    msg.setDestinationEntity(89U);
    msg.seq = 2060435120U;
    msg.destination.assign("UNHFPJRTGDJXUGKMXPWLEVOFOZWKSTSYFSKCVQHCLEMANIGSMJOMDGAEOAQLATZIINEOREYCCJCQVBGIGNTFRSVKQUDLMSUSVKHBKUCCJIWNADYMERJMREVTLCYEZQSOZSBPLVLMNQXISWUXTX");
    msg.timeout = 20441U;
    const char tmp_msg_0[] = {-75, -109, 83, 34, -86, -9, 104, 10, -105, 97, 13, -36, 51, 41, -48, -104, -37, -31, 106, -31, 11, 16, 57, 122, 84, 126, 10, -71, 64, 93, -46, 120, 78, 26, -37, -39, -118, 48, -79, -106, -107, -60, 53, 62, -59, -10, -16, 116, 101, 99, 53, -57, -93, 106, -112, -115, -6, 83, 18, 3, -27, 90, -64, 10, 95, -55, -110, -70, 37, 97, -60, 90, -94, 118, 55, -121, 66, -123, 101, -8, 51, 74, -74, -125, -3, 101, 33, 9, -50, -89, -68, -125, 109, -103, 32, -68, 1, 56, -92, 4, 30, -83, 18, 118, -71, 79, -65, -10, -51, -103, 106, 11, 122, 9, -14, 117, -93, 107};
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
    msg.setTimeStamp(0.249540568088);
    msg.setSource(55624U);
    msg.setSourceEntity(94U);
    msg.setDestination(7067U);
    msg.setDestinationEntity(177U);
    msg.source.assign("SKXCHTLJGIJKDZJA");
    const char tmp_msg_0[] = {-69, 89, 30, 34, -111, 3, 109, -99, -70, 84, -120, -116};
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
    msg.setTimeStamp(0.0317392158495);
    msg.setSource(53220U);
    msg.setSourceEntity(216U);
    msg.setDestination(17980U);
    msg.setDestinationEntity(196U);
    msg.source.assign("JXSBISAVJVCALXUAQFDTBCFECRTCXMDFHCGQVPRSOXECNNAIIZJRRSYGIYAESVILAOBLFHZABSVNTAIJEYMDCRYIVPGNXMNLRWBUULDAXJOEQQJUKJQZOEKMJLRLIYWFPADVOGOESBMWETDZDNLCUPMZUMKWXTRUTYVLBJMKNQFVCDHVTLHWDGY");
    const char tmp_msg_0[] = {0, 39, -61, 106, -95, 35, -2, 52, -127, -112, -43, 45, 124, -20, 119, 100, -105, 92, 85, 85, 91, 29, -9, 126, -34, 68, -121, -47, -65, 88, 54, 18, 7, 126, 126, 62, -28, 74, -65, 2, -25, -83, -114, 64, -5, 94, 49, 44, -36, -51, 103, -52, -1, -37, 23, 76, 17, 72, -54, -49, 33, 57, 6, 115, 17, -111, 21, -11, -24, -79, -44, 102, -4, -85, 83, -30, -16, -48, -127, 33, 16, -18, -40, 41, -94, -42, -22, -49, -19, 42, 62, 110, -4, -69, 25, 64, 87, -114, 28, -59, -69, -41, 85, 111, -94, 25, -25, -52, 72, -48, -86, -74, 9, 44, -4, 121, -4, -94, -125, 77, -99, -70, 122, -16, -100, -70, 89, 71, 46, 47, -51, -128, 95, -79, 5, 52, -25, -39, 25, 31, -24, -1, 105, 89, -120, 78, 83, 1, 122, 63, -20, -123, 115, 53, -84, 53, -42, 15, -97, 61, -42, -73, -10, 35, -7, -24, 113, -83, 41, 91, -50, 57, -13, -32, 86, -91, 41, -23, -71, 1, -64, 31, 75, 118, 55, -4, 34, 88, 96, 91, -80, 109, 73, 98, 113, 43, -21, 93, 82};
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
    msg.setTimeStamp(0.162184993344);
    msg.setSource(31329U);
    msg.setSourceEntity(195U);
    msg.setDestination(7386U);
    msg.setDestinationEntity(165U);
    msg.source.assign("YFHSIIHIBIPUZVXEWNVMWALMGXRWRWILNENJRJXHQVDUTERKSZGRDBOBPZHJTUPKNLJOQGJBUVNYNIPZSUWCATTFBXJFPDVBWJSDNYQETQOXOCGEALGIPVQYGNOEYLZZMOFAKFMKDWIOZXQHRBAYZCBUTMXSPDLSEVHCYKTXXCJCMRZSFBOAKXKLGTHJKAKZCRTCWAAV");
    const char tmp_msg_0[] = {-27, 119, 17, -8, 16, -44, 24, 63, 32, 85, 8, -128, 47, -54, -37};
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
    msg.setTimeStamp(0.43674604041);
    msg.setSource(50057U);
    msg.setSourceEntity(173U);
    msg.setDestination(18079U);
    msg.setDestinationEntity(187U);
    msg.seq = 1258913477U;
    msg.state = 237U;
    msg.error.assign("KEXQFQQXMEAMWGCOOZMXXKQJVYCHEWFGIIYJKIBDYRPYZKICILRAPLBXVBFEMQRQWGSCUCGYUUUKNSEFZZOJLYSVQHIMRDMYLPQBV");

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
    msg.setTimeStamp(0.684184476615);
    msg.setSource(10245U);
    msg.setSourceEntity(248U);
    msg.setDestination(54235U);
    msg.setDestinationEntity(14U);
    msg.seq = 4132285584U;
    msg.state = 41U;
    msg.error.assign("AINDMPGABRUHOTXYLHQJWDXEJSH");

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
    msg.setTimeStamp(0.939262319295);
    msg.setSource(31761U);
    msg.setSourceEntity(189U);
    msg.setDestination(63147U);
    msg.setDestinationEntity(201U);
    msg.seq = 1402153255U;
    msg.state = 85U;
    msg.error.assign("QDDEEWQLRVDYNNUMNAKXHONNRQOXYUWJIMLXJKHZGRJFSCPWJWVMUCIIEBDCVZSHEDUJZTDRPWXESQFWHGZUSSXEHIJYGVMLUZJHFSNXYANZTXCGWTKDUEGKMUVFWBPCKPOPMCHAFNFZRFWX");

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
    msg.setTimeStamp(0.0566405235204);
    msg.setSource(38549U);
    msg.setSourceEntity(90U);
    msg.setDestination(63754U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("JKVJNKXEBSDMOMAAGSBRUESWYOSNKFUFHHWVGLZWCQIRAWJKWZKFDBFGRFEOKHUSLTUSPYJCPXVXKWWRPYZGRNQUVIOZVHEIBLTBCJJGSZUBLDTCDDOOXTEXKAEQLOCIPOVIPKXNRDCXCQYJLUNUUFFFBPAQQPABLHTVN");
    msg.text.assign("NSGXJAVKKTIBMR");

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
    msg.setTimeStamp(0.0560230992668);
    msg.setSource(63559U);
    msg.setSourceEntity(252U);
    msg.setDestination(32000U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("WIZJGWJDKLHWASFIIXOFZRWERZOBKPOUMXYHVOMXWTLWQZCHGQIVKRIWRY");
    msg.text.assign("JCUVIPVNTZJZFYUNAKWPAODOYGGTQUMWPBIDUSOMCLNDKESJBWAGZAOBIQTHMVIMFWKWMATCKAFAJCGCXIREENDKOYRYRJQBTSTIWFZGPLSVRQSPXHOUSRGFZOLZBVHDLIBPTKWFEUVBHSHJTMAPAUCWGLBVKLMRHXELLSYFEQHQHKPWTNLCSXONEXRBNJSOMKGMDUZUEINVNV");

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
    msg.setTimeStamp(0.59176498878);
    msg.setSource(49900U);
    msg.setSourceEntity(39U);
    msg.setDestination(41422U);
    msg.setDestinationEntity(201U);
    msg.origin.assign("JJRIIBVFRNYOORNAZYKTHDCEKPIXTQMOITEYEHKBLTDMPUOIKWUXQMUNPNBPVIQGSAMLOEYACURCJHRZEPMB");
    msg.text.assign("ADPDLQRIBDSKHHDWERDTEDOTMUFQIB");

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
    msg.setTimeStamp(0.869717931078);
    msg.setSource(11015U);
    msg.setSourceEntity(59U);
    msg.setDestination(16360U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("HMQJIZMBRJXBAHTHYUEADEVMZQVOVMSGINVPGKCQNZMJYEGFXWOGBWPQPTWMWGRLFYDXMQOZKWABIRYCDBGMVVAPFLCFFUBYUXVZQLGODBAOEVKAFPIXORTQXPRHZISXSRXYJYWMAJDN");
    msg.htime = 0.169099965457;
    msg.lat = 0.996817573573;
    msg.lon = 0.958205142517;
    const char tmp_msg_0[] = {-87, 81, -122, 13, -75, 99, 45, 109, 117, -94, 7, 104, -124, 2, 19, -71, 110, -56, 29, -86, -116, -57, -58, -22, -99, 35, -27, -63, -100, 96, -45, 15, 75, -95, -126, -53, -15, -71, -18, -56, -31, -107, 117, 113, 95, -124, 20, 65, 123, 76, -108, -55, -120, -9, -63, -125, -94, -39, -39, 45, 53, -46, -116, 45, -77, -25, 103, 52, -106, -88, 50, 53, -86, 69, -38, 0, 36, 55, -21, 83, 75, -70, -62, 74, 110, 44, -126, -81, 106, -11, 112, 50, -16, 118, -100, 112, 99, 15, -61, 14, 76, 117, -19, 126, 93, -125, 81, -100, 73, 12, 114, 62, 98, 19, 87, -124, -94, 35, -32, -46, -58, 121, -97, -39, 124, 54, 20, 47, 35, 100, -112, -60, 38, -108, 78, 95, 2, 64, -37, -84, 13, -91, -85, 27, 43, -82, -103, -85, 5, 92, 92, -114, 94, -35, 46, -59, -124, -93, -65, 43, -74, 102, -109, 86, 56, 2, 51, -109, -92, -44, -26, -120, -46, 106, -32, -71, -106, -60, -104, -13, 4};
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
    msg.setTimeStamp(0.682945917363);
    msg.setSource(9066U);
    msg.setSourceEntity(94U);
    msg.setDestination(31363U);
    msg.setDestinationEntity(188U);
    msg.origin.assign("LVTQUUZPHRKCHAIOQWLWAQLOGABOXIPMYGSMTJPUFNDPJEHKUUNPCJVRXMBXWPMONFCYIALNTTMNSYTKQXSDISDAHXZ");
    msg.htime = 0.856596159463;
    msg.lat = 0.641692563928;
    msg.lon = 0.326046204005;
    const char tmp_msg_0[] = {-23, -35, 124, 4, -91, -6, -124, 87, -21, 109, 51, 92, 50, -19, 82, 112, 68, -76, 2, 33, 69, 41, 119, 28, 34, 10, 45, 94, 111, 60, 53, 20, -121, 66, -42, 29, -89, -67, 88, 69, -21, -11, 93, -103, 122, 97, -27, -59, 112, 75, -71, -125, -48, 27, -40, 80, -23, -91, 120, 52, 108, -69, 113, 23, -56, -43, -25, -34, -45, -30, -91, -60, -110, -75, -67, 103, -36, 23, 60, -18, -112, -82, -12, 77, -59, -125, 50, -26, 56, -109, -103, -73, -28, 114, 101, -118, -105, -79, -128, -66, 77, 25, 54, -27, 54, -111, 93, 84, -51, 21, -124, 103, -66, 101, 17, 82, 34, -13, 55, 118, -19, 48, -45, -11, -103, -128, -54, 111, -61, 8, -83, -40, 18, -81, -105, 10, -55, 108, 1, -59, -65, -18, 32, 21, 23, -48, -128, 103, 33, 50, 51, -64, 49, 24, 63, 120, -5, -74, 42, 74, 15, 65, -56, -59, -38, -46, 17, 54, -7, -75, 64, 112, -33, 125, -16, -23, -116, 47, 94, 116, -66, 65, -126, 52, -14, 20, -24, 66, -16, -16, 56, 44};
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
    msg.setTimeStamp(0.166906121048);
    msg.setSource(64117U);
    msg.setSourceEntity(93U);
    msg.setDestination(9435U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("HLVBGUARNLGOWRFEKMDBXBDIYLBCAEJDBZTAFVXHHMSVGDRHMAGASEPNIXZPYOGZVLOCFCWFZFNQNUGSUWPQXEJCRUBULKVKWXIOADQEHSOKZUPZQTHGOHBQYTGKWTXMCFLALSKOJINDQHMI");
    msg.htime = 0.886260829447;
    msg.lat = 0.929346648158;
    msg.lon = 0.179683689335;
    const char tmp_msg_0[] = {86, 41, -128, 15, 99, 120, 7, -127, -56, 17, 0, -67, 124, 92, 78, 57, 117, -117, -29, 63, 78, -124, -123, 26, 71, 87, -85, 105, 49, -128, -3, -26, 20, 72, 33, -4, -16, 46, 64, -10, 124, -128, 52, -15, 0, 109, -122, 114, -119, 69, -28, -110, 42, 110, -47, 87, -112, 60, -16, -36, -25, 80, 17, -40, 17, 123, -57, -113, 58, 100, -66, 24, -70, -69, -52, 21, -120, 120, -49, 99, 82, -90, 50, 97, -16, 65, 120, 91, -88, 95, -75, 0, -124, -126, -31, -13, 3, -100, 44, -5, -38, -127, -87, 47, -1, -46, 119, 117, -11, 94, -11, -103, -82, -17, -101, 88, 111, 73, -125, -26, -74, 88, 111, 103, 47, -67, -45, -38, -66, -61, -109, -81, 56, 109, -58, 19, 38, 26, 46, -116, -2, 49, -110, 77, 91, -66, 56, 31, -5, -41, 34, 124, -3, 36, -14, 90, 66, 35, -45, 73, -114, -86, -72, -92, -101, 6};
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
    msg.setTimeStamp(0.149169196356);
    msg.setSource(1228U);
    msg.setSourceEntity(176U);
    msg.setDestination(59416U);
    msg.setDestinationEntity(94U);
    msg.req_id = 45986U;
    msg.ttl = 49358U;
    msg.destination.assign("WCBLTSPJLUXIYIZGARNQGTNUBMKEQKGGCMEPRMPROTVVXBIOJPKEAJZQCSDMUPYMIWFQADCYNUOIOJPFASNSIUQXJLWCMVGZXELFEBQNJZIRL");
    const char tmp_msg_0[] = {-5, -114, 100, -35, -124, -110, -5, -97, 79, -70, -68, -76, -79, -74, -102, -19, -23, 67, -41, 7, -120, -46, -98, -26, -9, -82, -57, 75, 42, -118, -5, -5, -60, 113, 64, -19, -105, -121, 72, 24, -120, -21, -106, -103, 125, -57, -111, -109};
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
    msg.setTimeStamp(0.324592609217);
    msg.setSource(60149U);
    msg.setSourceEntity(39U);
    msg.setDestination(36666U);
    msg.setDestinationEntity(73U);
    msg.req_id = 1863U;
    msg.ttl = 49609U;
    msg.destination.assign("NXNLCVXYMUIJQOINFCEKYGTIGSYDSEEUIUYRWLQOLAFJPKUSIVBRHXFMPDXFOBQMOZLWFATKHQAWOOJAPJMPHCFQIZGGEZWGHWTZXTRNBKVAMQOLEZKBWASKHRSVAYPS");
    const char tmp_msg_0[] = {25, 34, -62, -51, -65, 88, 70, -1, 114, 17, -39, 26, -100, 90, 106, 24, 80, -38, -36, -122, -22, 27, -44, -96, 117, -2, 96, -60, 24, 18, -102, -40, 101, -40, -104, -58, -15, -62, -92, -9, 53, 14, -85, 8, -62, 112, 3, 27, -114, 68, -82, 124, -104, 86, 106, -118, -120, 67, -101, 112, 18, -27, -53, -115, -97, -11, 25, -2, 12, 25, 54, -80, 41, 96, -37, 61, 2, -124, 97, 11, 74, -37, 40, -62, 78, 104, 103, 107, 111, -45, 4, -31, 53, -102, -65, 57, -115, -62, -87, -96, -48, -22, 23, -34, 89, -65, -66, -32, 31, 19, 97, -116, 98, -1, 97, -114, -66, 93, 32, -100, -86, 90, 3, 59, 70, -76, -65, 111, -121, 44, 110, 90, -117, -42, 18, -117, 63, 57, -10, 47, 4, 2, 125, 59, 73, 86, -20, -80, -73, 94, 68, 6, -83, -119};
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
    msg.setTimeStamp(0.9772502104);
    msg.setSource(12398U);
    msg.setSourceEntity(88U);
    msg.setDestination(55762U);
    msg.setDestinationEntity(220U);
    msg.req_id = 60145U;
    msg.ttl = 6457U;
    msg.destination.assign("CTINSCHSPMACXRZLTZHRQWKRRGALDHIMFFEBMQNDWXUQVMJNVVZBCFLDACYCJLXMFOJCZFXOFYWDVYVKXYHHI");
    const char tmp_msg_0[] = {30, -46, -27, -77, -119, -24, -52, 4, -15, -125, 16, 96, 31, 108, -112, -119, 28, 27, 4, 120, -17, -13, -22, -103, -4, -115, 70, -78, -18, 47, -126, 52, 93, -9, -126, -125, 4, -128, 76, -41, 125, -103, 76, 5, 8, 118, 76, -33, -70, -97, 17, 33, -74, 0, -102, -7, 54, 90, 96, 4, 25, -102, 45, -112, 44, -73, -72, -88, -67, -95, -85, 2, -126, -31, -122, -89, 71, 120, -103, -50, -40, 121, 20, -78, 13, 55, 53, -109, -76, 119, -76, 44, 27, -60, 26, 11, -58, -17, -75, -50, 37, -6, 47, -76, 28, -7, -67};
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
    msg.setTimeStamp(0.763243195898);
    msg.setSource(36003U);
    msg.setSourceEntity(137U);
    msg.setDestination(2740U);
    msg.setDestinationEntity(208U);
    msg.req_id = 1039U;
    msg.status = 92U;
    msg.text.assign("BLFRGFVHOSMKXQKUPFMDIHEOQSTYIZIXSFXATFZWVTLAYYJIAMGEZUDMHSURJEYSONIXHIGCQXLAGHCAOHRQARBYHYZXJBQMJZPDNZWQZGDPLBWDCYUHTBWREEGGLODPQNRTKXUIEVJVLCPKUPMCVLXNPWBZLKFQBFFCCKZOXWCJENKDMAMJHBPVOKTSDWLOHLBWEBRNPQTPKMJEFNDNOYVSAGWGXTQJURJUAMFG");

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
    msg.setTimeStamp(0.95832745728);
    msg.setSource(1926U);
    msg.setSourceEntity(219U);
    msg.setDestination(48729U);
    msg.setDestinationEntity(174U);
    msg.req_id = 40215U;
    msg.status = 112U;
    msg.text.assign("QJHMXBSYZV");

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
    msg.setTimeStamp(0.532213793628);
    msg.setSource(52298U);
    msg.setSourceEntity(247U);
    msg.setDestination(37119U);
    msg.setDestinationEntity(230U);
    msg.req_id = 41505U;
    msg.status = 28U;
    msg.text.assign("KOTQSYCUCOEPGGGSXKQYMWFBNNGFMWHDHORDNMKUVCAMAVMRPHZVZTLXOFQHSDNKAUKNEEYMOZHUWFRBVIE");

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
    msg.setTimeStamp(0.996645102902);
    msg.setSource(14513U);
    msg.setSourceEntity(254U);
    msg.setDestination(13882U);
    msg.setDestinationEntity(203U);
    msg.group_name.assign("FJGFQMGEAYMXEYWOGQDLMTJVNGOPAINDKIOINULGDZBUSKFOPBYCIBTQPHVUGXQTDZEXPLHZCBYSISJDDJPLKNJVVZNVTBHQLSUMWECLJORFQHCZKFZEAY");
    msg.links = 482890797U;

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
    msg.setTimeStamp(0.484328934664);
    msg.setSource(20293U);
    msg.setSourceEntity(189U);
    msg.setDestination(64295U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("RIIGGBBOKORGQCILRRRYUJYIUDXWEMAYADAMTTUJBIGDFHWXITTFQBOUDTVSPREPSZRFGZXBTNYAWBKUOZBSHTJAVFYEGIQCLGZCZVXBOMHKSMDOYUUDQHJZLFYAUTJZJEQPCROYZLSLPHOPEHXKWDINSMFAYNPJCZAVQNDJWGXKFOULDHUTNELCEOJELXMSPLBGMFBPVAQMHGXEVSKYXMP");
    msg.links = 1466721645U;

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
    msg.setTimeStamp(0.5704429822);
    msg.setSource(30805U);
    msg.setSourceEntity(89U);
    msg.setDestination(6851U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("JRWKATGQRWXLJOYLKZNZTLZUNDXSPJBHDURWIBLCQAIRKMMYTDBTKOBUCAKSNEYEOIYCUENYIMOZXQNMURQTALFMDZTVPPEXJTJSNCRAWZYBIQHWFFMZVEXHGXQGOJRHQISQRPOMHCOPNNZQSUKGCIMZKGHYASPVXUEHXWNAKHGFADBGYVQW");
    msg.links = 3088076308U;

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
    msg.setTimeStamp(0.272852764362);
    msg.setSource(57175U);
    msg.setSourceEntity(71U);
    msg.setDestination(44783U);
    msg.setDestinationEntity(53U);
    msg.groupname.assign("RDUCKPCIUJIP");
    msg.action = 202U;
    msg.grouplist.assign("FZIDKONJNCNLEIJLRLEURBWGZRVEILWRWVXHBXBENTMSPTXFUADDMPGMGIRJXTJNTPQJFKLKBUZFLXSPBUBJCVWVQBOSCAAYDZELMEFBERUDAZWHQEQQJHOYWYYIETVNXGCPQTFYQJHOJTMMNTHHYKYUWCRUIOY");

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
    msg.setTimeStamp(0.266646618523);
    msg.setSource(31285U);
    msg.setSourceEntity(112U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("JOGRLPZBYDJVVTPKUGTQXCWASATKEMPROUUMNDFQHXKPAWAYGQXVSPDFJMODEBSGBSLWNDUELJDGLUCTJSCORLKXIUELYUHWNAHEBAOQJSGJMUZEIYRYHMUZXFNNYWDIFKGHRKKTWQVIYEQAJEPXIMLS");
    msg.action = 72U;
    msg.grouplist.assign("GWDGYPZTVRULNUKEQAABKDJYWUTDBBIVIXLGGNSZCSTQCUEXWROGJOIFKHF");

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
    msg.setTimeStamp(0.242136503382);
    msg.setSource(44022U);
    msg.setSourceEntity(36U);
    msg.setDestination(32630U);
    msg.setDestinationEntity(119U);
    msg.groupname.assign("NROCPUTOXOTUELAXMAPOFSJCBMEXHRIQNTDNDOKFYCGNPEDFSBNGIHRVVHJTUBABLSHAMXPESUCZCHMQHVCCOGADJRXFIYQEYSYWRPOGRAYSNDLBZSFBRUZYWBVWZVWLVHJUGXRMITAEUJMPFQRDLMTIJGMCHWJCNUY");
    msg.action = 145U;
    msg.grouplist.assign("QURAXQRMIDKUUVRSFWGVHKUPYXIUSRPPTBLHITWWABYCFNSCWJPTYTZYPUZLVLFZIMLZDFBWMNVXFWDJUEZNOTPHGKHQOKIPCIEOYGXQXSEGZJKLJLMBMDFRAAKOXAZEVLPJOHNNKTPDLTJIYSQMRXHMROEOODKTXCQGSBCERNVVEJBBBSFWBDWJTNSZCQUSHQNGCVHIOPCRGJLXCHULQHAYVYEM");

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
    msg.setTimeStamp(0.0162167371207);
    msg.setSource(21295U);
    msg.setSourceEntity(46U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(249U);
    msg.value = 0.428980461107;
    msg.sys_src = 50872U;

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
    msg.setTimeStamp(0.21309025263);
    msg.setSource(30703U);
    msg.setSourceEntity(208U);
    msg.setDestination(63554U);
    msg.setDestinationEntity(212U);
    msg.value = 0.159321054716;
    msg.sys_src = 54373U;

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
    msg.setTimeStamp(0.570004976047);
    msg.setSource(15922U);
    msg.setSourceEntity(6U);
    msg.setDestination(27855U);
    msg.setDestinationEntity(232U);
    msg.value = 0.716765625908;
    msg.sys_src = 23541U;

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.164889892235);
    msg.setSource(31271U);
    msg.setSourceEntity(189U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(164U);
    msg.id = 32U;
    msg.range = 0.760802437901;

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
    msg.setTimeStamp(0.582690747147);
    msg.setSource(34743U);
    msg.setSourceEntity(233U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(177U);
    msg.id = 102U;
    msg.range = 0.122762030956;

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
    msg.setTimeStamp(0.73583027674);
    msg.setSource(5699U);
    msg.setSourceEntity(130U);
    msg.setDestination(59096U);
    msg.setDestinationEntity(224U);
    msg.id = 153U;
    msg.range = 0.727998819099;

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
    msg.setTimeStamp(0.630714918384);
    msg.setSource(32465U);
    msg.setSourceEntity(191U);
    msg.setDestination(23113U);
    msg.setDestinationEntity(224U);
    msg.beacon.assign("MGCKKGEHNBXVWYTLHNSQYBSIPVZWOKFVRFBMGRWMDRACZHPBVZEYGWGAQJICGWCOOMYOYAH");
    msg.lat = 0.618744102884;
    msg.lon = 0.253024574313;
    msg.depth = 0.0132218852643;

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
    msg.setTimeStamp(0.442199163294);
    msg.setSource(32868U);
    msg.setSourceEntity(85U);
    msg.setDestination(388U);
    msg.setDestinationEntity(201U);
    msg.beacon.assign("FPOIVQMFPNKZQLSNBHLDJDEGKXNYRAFGGKEGIRDEVTCKMTZPHUD");
    msg.lat = 0.401231311843;
    msg.lon = 0.41384755916;
    msg.depth = 0.378791615186;

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
    msg.setTimeStamp(0.108468692864);
    msg.setSource(17439U);
    msg.setSourceEntity(229U);
    msg.setDestination(51444U);
    msg.setDestinationEntity(68U);
    msg.beacon.assign("XHJBHLXQBAVNLDFHBHOKDSUJOCELVMVKATSFJBOQMHDGKHYNAGOQRZXMYPFWUCQYENBCPTYYCUHQJALXHARMWVXRS");
    msg.lat = 0.899338443777;
    msg.lon = 0.425278132987;
    msg.depth = 0.0413020283871;

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
    msg.setTimeStamp(0.271344779241);
    msg.setSource(20192U);
    msg.setSourceEntity(59U);
    msg.setDestination(19495U);
    msg.setDestinationEntity(216U);
    msg.op = 61U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DXDCZUAVULTUMFUSSZWWHXCJTWNEJLHOCFIEHPCQJBUWNVSUGQLPINABTEZIIMYTOHSRYNBQGPXDQRYVEMJVZHBAXTJSRZPLBYEQHFSDOWRVFRJHJBOWD");
    tmp_msg_0.lat = 0.190053622062;
    tmp_msg_0.lon = 0.0285521631335;
    tmp_msg_0.depth = 0.845502703588;
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
    msg.setTimeStamp(0.00681000574852);
    msg.setSource(23650U);
    msg.setSourceEntity(108U);
    msg.setDestination(42669U);
    msg.setDestinationEntity(4U);
    msg.op = 94U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TLMFVOVCGJYQIMCNEMNKGBCIOOZSOTFXHJQYKSAILNPUJQJPQBNNKTFUCHZIPIXKWTMMGNSYRUWAYWMRRWWJJNAHFUXBSZJCRGBVGAVYXFPB");
    tmp_msg_0.lat = 0.529002264487;
    tmp_msg_0.lon = 0.276760750335;
    tmp_msg_0.depth = 0.661050696698;
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
    msg.setTimeStamp(0.545304726127);
    msg.setSource(27222U);
    msg.setSourceEntity(156U);
    msg.setDestination(25876U);
    msg.setDestinationEntity(40U);
    msg.op = 133U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FFPQEAGUYCSZYSLRMFQTVBRVKFXWMDQAJKEPYHWUHAOFRSYGOQNMZGNIOJETVJDDTFEZKVUXXDCIWWPWEVGZRSRUDKGIXMBBSKNISHNABGLPEZBPNDPANIYBCIMAXYQQUKAHQCYJPUVHOHKHLCXZBDRITWOIPARZOXTMQPOTS");
    tmp_msg_0.lat = 0.420495147216;
    tmp_msg_0.lon = 0.806419067928;
    tmp_msg_0.depth = 0.152535729496;
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
    msg.setTimeStamp(0.276251460068);
    msg.setSource(22426U);
    msg.setSourceEntity(143U);
    msg.setDestination(44823U);
    msg.setDestinationEntity(68U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1404538782U;
    tmp_msg_0.start_lat = 0.977958929984;
    tmp_msg_0.start_lon = 0.722646709026;
    tmp_msg_0.start_z = 0.175641812243;
    tmp_msg_0.start_z_units = 141U;
    tmp_msg_0.end_lat = 0.871459696603;
    tmp_msg_0.end_lon = 0.844973094258;
    tmp_msg_0.end_z = 0.495025418684;
    tmp_msg_0.end_z_units = 103U;
    tmp_msg_0.speed = 0.998637269095;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.lradius = 0.564432979573;
    tmp_msg_0.flags = 176U;
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
    msg.setTimeStamp(0.221632568865);
    msg.setSource(45781U);
    msg.setSourceEntity(156U);
    msg.setDestination(19036U);
    msg.setDestinationEntity(123U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.148326642149;
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
    msg.setTimeStamp(0.963750961458);
    msg.setSource(64111U);
    msg.setSourceEntity(106U);
    msg.setDestination(34200U);
    msg.setDestinationEntity(202U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.988659300452;
    tmp_msg_0.y = 0.334267172257;
    tmp_msg_0.z = 0.380921326906;
    tmp_msg_0.phi = 0.143694901569;
    tmp_msg_0.theta = 0.449963219103;
    tmp_msg_0.psi = 0.50067735908;
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
    msg.setTimeStamp(0.292378927659);
    msg.setSource(20898U);
    msg.setSourceEntity(154U);
    msg.setDestination(28327U);
    msg.setDestinationEntity(142U);
    msg.op = 152U;
    msg.system.assign("DFCVRBPSBZUNGRFKGZVDWJJALNGGJWMOSPXVVHGMWKBDPKXLQUTUPTXVIMSQFOUEOOKPNSOTLMYZCWMWILEAXUNSHKPHSNDJRZTJGBBKQVXGAZRYUICCOZXPGIZJSIIIDLFMQBHTDDKKIOAYAFHXAPBVKYUZSJIWVJCAHFOFNSMLEYQWWPTJWNRUHRLTHDBELZNCUYFTQRXYHXQVBLGPKDQTNYO");
    msg.range = 0.835752299123;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 1731273093U;
    tmp_tmp_msg_0_0.start_lat = 0.471523489828;
    tmp_tmp_msg_0_0.start_lon = 0.984821838658;
    tmp_tmp_msg_0_0.start_z = 0.939699839415;
    tmp_tmp_msg_0_0.start_z_units = 175U;
    tmp_tmp_msg_0_0.end_lat = 0.344571512007;
    tmp_tmp_msg_0_0.end_lon = 0.992010582663;
    tmp_tmp_msg_0_0.end_z = 0.991459072023;
    tmp_tmp_msg_0_0.end_z_units = 116U;
    tmp_tmp_msg_0_0.speed = 0.569180367475;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_tmp_msg_0_0.lradius = 0.325830350977;
    tmp_tmp_msg_0_0.flags = 121U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 11514U;
    tmp_msg_0.custom.assign("IZHJOVTNTSFPPORCAUIYIDAXCELUACWZMMGABODDCLJHKKYFLGYJUOTLFTDFYJWWUEXXJYZBBOVCCDISJQKUKTNGUZVDMVKXUHACOWUANHQHQRQMBHRMOSPLVSCYAKJRTFZGVPPWNKRVYWBRESENXQGNPKHAQPTMOQZAOHRXZIWGKFSNJSXMFSCKGPNELBOHDYCSFIJRLNMVMBDQBIQWPSETXIREYLZVNRZZTEBHMUVEB");
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
    msg.setTimeStamp(0.283221000986);
    msg.setSource(13889U);
    msg.setSourceEntity(185U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(39U);
    msg.op = 239U;
    msg.system.assign("DTNFFVRNBDLBJJQYLRMVYRSSEYWNHVKHIAIVNSEDIHZDKUAORAGYJPBLBNTFLUZQBFWXWHQXKPEXFDGSAMHKEOYTADOKFFDXCVEMYLCWWVRUUPXOIJGKSCUPRNASMBCNZTTZQGBBVPLFOKYGUEBYILEFDCHYRMPPDHIIUXJOSRYIQSNVOZEJOUCXGTLWKDCMTQAVKHJESTJGWNHIWOZXMQGTZNQPPQQM");
    msg.range = 0.793991392604;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 188U;
    tmp_msg_0.reason = 90U;
    tmp_msg_0.value = 0.235244554743;
    tmp_msg_0.timestep = 0.954968775616;
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
    msg.setTimeStamp(0.18165814708);
    msg.setSource(34213U);
    msg.setSourceEntity(138U);
    msg.setDestination(22024U);
    msg.setDestinationEntity(59U);
    msg.op = 213U;
    msg.system.assign("PQQYOTIQBUIGVUQJGYDWBMYETHMZCSWIZVIHRFODALPUHSXUEHCUKZLDTIEVYWCABGPLSBMMDLJWOXAESSVEVDLEVJHZUKYRRLHPMYRNXGGIEDAZLKKSTOBOGXFCDQKSNJJUUOHQNRCTNTXAEFCXCFVHBFXPMLTMOURCNLZJVWZAPGSBLNWBACWFAZCPIF");
    msg.range = 0.281432410517;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.0150273438735);
    msg.setSource(3358U);
    msg.setSourceEntity(154U);
    msg.setDestination(34589U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.570079098066);
    msg.setSource(16670U);
    msg.setSourceEntity(41U);
    msg.setDestination(47642U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.996533841612);
    msg.setSource(9741U);
    msg.setSourceEntity(249U);
    msg.setDestination(14067U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.408631897138);
    msg.setSource(50532U);
    msg.setSourceEntity(17U);
    msg.setDestination(20862U);
    msg.setDestinationEntity(12U);
    msg.list.assign("FACTBRQGMCADUHMCXIUNEXPZMHNMCGVDAAYWBZSAFPOXOFIYZI");

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
    msg.setTimeStamp(0.901765551203);
    msg.setSource(18632U);
    msg.setSourceEntity(212U);
    msg.setDestination(30743U);
    msg.setDestinationEntity(233U);
    msg.list.assign("IQGOMEESGGPEDJSIDFFYEPKKRTBXSTXDMEXYBUUPKAXAFQZEVDVCVDKGMLSGTVWROZALNWMBJSCCKNDYUCHRWMHHHXYWGQWZFWAJBBJZVOIBGLKHEWPTCATKGXOARSWLMYBXIOVCHEDSGJFOVQAZHBGVIJFPTVJNZVSRQEMKCRTHXS");

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
    msg.setTimeStamp(0.582102287526);
    msg.setSource(13495U);
    msg.setSourceEntity(97U);
    msg.setDestination(61163U);
    msg.setDestinationEntity(244U);
    msg.list.assign("RXKUBZSBOWVGWCRAXCNMUVLLQBXRXWQTNTENLVODPFAQGJZKTSPPMHXYUDESUJJHTENRWPHMBYRNETYNIRJFHQDIVLOHFZCVBGUYHBCMNGYFKZ");

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
    msg.setTimeStamp(0.302132670374);
    msg.setSource(17366U);
    msg.setSourceEntity(211U);
    msg.setDestination(15065U);
    msg.setDestinationEntity(146U);
    msg.value = 23389;

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
    msg.setTimeStamp(0.571265483618);
    msg.setSource(43862U);
    msg.setSourceEntity(225U);
    msg.setDestination(5739U);
    msg.setDestinationEntity(210U);
    msg.value = 1410;

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
    msg.setTimeStamp(0.676347702141);
    msg.setSource(58503U);
    msg.setSourceEntity(194U);
    msg.setDestination(9994U);
    msg.setDestinationEntity(236U);
    msg.value = 20704;

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
    msg.setTimeStamp(0.61054179472);
    msg.setSource(35889U);
    msg.setSourceEntity(182U);
    msg.setDestination(37304U);
    msg.setDestinationEntity(5U);
    msg.value = 0.877031222607;

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
    msg.setTimeStamp(0.425316464902);
    msg.setSource(26549U);
    msg.setSourceEntity(119U);
    msg.setDestination(24373U);
    msg.setDestinationEntity(10U);
    msg.value = 0.796324542201;

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
    msg.setTimeStamp(0.391772148714);
    msg.setSource(64836U);
    msg.setSourceEntity(59U);
    msg.setDestination(43571U);
    msg.setDestinationEntity(87U);
    msg.value = 0.444224464423;

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
    msg.setTimeStamp(0.0330324466415);
    msg.setSource(62776U);
    msg.setSourceEntity(147U);
    msg.setDestination(47362U);
    msg.setDestinationEntity(248U);
    msg.value = 0.510149410865;

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
    msg.setTimeStamp(0.548422068394);
    msg.setSource(34597U);
    msg.setSourceEntity(248U);
    msg.setDestination(11746U);
    msg.setDestinationEntity(156U);
    msg.value = 0.191470075647;

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
    msg.setTimeStamp(0.359990437932);
    msg.setSource(60633U);
    msg.setSourceEntity(197U);
    msg.setDestination(50715U);
    msg.setDestinationEntity(65U);
    msg.value = 0.094914467445;

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
    msg.setTimeStamp(0.0816818864416);
    msg.setSource(10155U);
    msg.setSourceEntity(158U);
    msg.setDestination(44492U);
    msg.setDestinationEntity(33U);
    msg.validity = 62009U;
    msg.type = 124U;
    msg.utc_year = 52677U;
    msg.utc_month = 119U;
    msg.utc_day = 38U;
    msg.utc_time = 0.55368311917;
    msg.lat = 0.297032063588;
    msg.lon = 0.211094007444;
    msg.height = 0.241742241799;
    msg.satellites = 33U;
    msg.cog = 0.898861251798;
    msg.sog = 0.196509372665;
    msg.hdop = 0.281040629052;
    msg.vdop = 0.905755343114;
    msg.hacc = 0.453969832532;
    msg.vacc = 0.184344925875;

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
    msg.setTimeStamp(0.184136824081);
    msg.setSource(4525U);
    msg.setSourceEntity(49U);
    msg.setDestination(25016U);
    msg.setDestinationEntity(84U);
    msg.validity = 43731U;
    msg.type = 66U;
    msg.utc_year = 42158U;
    msg.utc_month = 194U;
    msg.utc_day = 158U;
    msg.utc_time = 0.823298066223;
    msg.lat = 0.0730918233968;
    msg.lon = 0.775490018919;
    msg.height = 0.206664541275;
    msg.satellites = 101U;
    msg.cog = 0.182757529407;
    msg.sog = 0.744294069191;
    msg.hdop = 0.971883914605;
    msg.vdop = 0.778529822141;
    msg.hacc = 0.690326340897;
    msg.vacc = 0.0798806753535;

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
    msg.setTimeStamp(0.633145892668);
    msg.setSource(45250U);
    msg.setSourceEntity(246U);
    msg.setDestination(44379U);
    msg.setDestinationEntity(94U);
    msg.validity = 7092U;
    msg.type = 253U;
    msg.utc_year = 33490U;
    msg.utc_month = 93U;
    msg.utc_day = 50U;
    msg.utc_time = 0.668742888981;
    msg.lat = 0.203022347448;
    msg.lon = 0.688323684676;
    msg.height = 0.314243578354;
    msg.satellites = 203U;
    msg.cog = 0.82980445339;
    msg.sog = 0.068973588511;
    msg.hdop = 0.0500927460577;
    msg.vdop = 0.185995861336;
    msg.hacc = 0.711669805159;
    msg.vacc = 0.114305469911;

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
    msg.setTimeStamp(0.775170090966);
    msg.setSource(63015U);
    msg.setSourceEntity(74U);
    msg.setDestination(65133U);
    msg.setDestinationEntity(6U);
    msg.time = 0.022268982557;
    msg.phi = 0.772251493969;
    msg.theta = 0.336617461875;
    msg.psi = 0.91589405291;
    msg.psi_magnetic = 0.506877365954;

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
    msg.setTimeStamp(0.546771422471);
    msg.setSource(19659U);
    msg.setSourceEntity(153U);
    msg.setDestination(1598U);
    msg.setDestinationEntity(112U);
    msg.time = 0.912823413343;
    msg.phi = 0.78651841274;
    msg.theta = 0.295329342181;
    msg.psi = 0.405544246793;
    msg.psi_magnetic = 0.93096256436;

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
    msg.setTimeStamp(0.44272700103);
    msg.setSource(60348U);
    msg.setSourceEntity(142U);
    msg.setDestination(122U);
    msg.setDestinationEntity(80U);
    msg.time = 0.717849912095;
    msg.phi = 0.148588978564;
    msg.theta = 0.462121343692;
    msg.psi = 0.940017149636;
    msg.psi_magnetic = 0.699118578148;

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
    msg.setTimeStamp(0.402569094699);
    msg.setSource(8842U);
    msg.setSourceEntity(198U);
    msg.setDestination(27842U);
    msg.setDestinationEntity(35U);
    msg.time = 0.301974963662;
    msg.x = 0.353609906983;
    msg.y = 0.902395980161;
    msg.z = 0.219296075042;
    msg.timestep = 0.341074212779;

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
    msg.setTimeStamp(0.361879598626);
    msg.setSource(63762U);
    msg.setSourceEntity(129U);
    msg.setDestination(10038U);
    msg.setDestinationEntity(129U);
    msg.time = 0.282035737396;
    msg.x = 0.340601780678;
    msg.y = 0.555388628695;
    msg.z = 0.981722093036;
    msg.timestep = 0.932968738479;

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
    msg.setTimeStamp(0.420971658718);
    msg.setSource(51714U);
    msg.setSourceEntity(79U);
    msg.setDestination(23208U);
    msg.setDestinationEntity(181U);
    msg.time = 0.445869908366;
    msg.x = 0.70656990507;
    msg.y = 0.431573747595;
    msg.z = 0.923115497712;
    msg.timestep = 0.472742991819;

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
    msg.setTimeStamp(0.144622916158);
    msg.setSource(29881U);
    msg.setSourceEntity(149U);
    msg.setDestination(17476U);
    msg.setDestinationEntity(213U);
    msg.time = 0.863962030677;
    msg.x = 0.106054171713;
    msg.y = 0.870746909816;
    msg.z = 0.471636087359;

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
    msg.setTimeStamp(0.186869967325);
    msg.setSource(22312U);
    msg.setSourceEntity(4U);
    msg.setDestination(62882U);
    msg.setDestinationEntity(116U);
    msg.time = 0.512010527187;
    msg.x = 0.590243525284;
    msg.y = 0.676651408974;
    msg.z = 0.347852639914;

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
    msg.setTimeStamp(0.205783525712);
    msg.setSource(62049U);
    msg.setSourceEntity(200U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(219U);
    msg.time = 0.912204989754;
    msg.x = 0.309392496153;
    msg.y = 0.677814079937;
    msg.z = 0.329167872276;

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
    msg.setTimeStamp(0.118521522581);
    msg.setSource(27392U);
    msg.setSourceEntity(2U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(155U);
    msg.time = 0.00161211273756;
    msg.x = 0.607223312505;
    msg.y = 0.42988337723;
    msg.z = 0.0671249812518;

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
    msg.setTimeStamp(0.138234294176);
    msg.setSource(55542U);
    msg.setSourceEntity(175U);
    msg.setDestination(45467U);
    msg.setDestinationEntity(41U);
    msg.time = 0.275340151312;
    msg.x = 0.488431785871;
    msg.y = 0.632698304234;
    msg.z = 0.914339951705;

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
    msg.setTimeStamp(0.635279552785);
    msg.setSource(46891U);
    msg.setSourceEntity(11U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(11U);
    msg.time = 0.960351928808;
    msg.x = 0.193882226546;
    msg.y = 0.530012036598;
    msg.z = 0.288190582301;

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
    msg.setTimeStamp(0.113754070207);
    msg.setSource(47407U);
    msg.setSourceEntity(230U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(6U);
    msg.time = 0.251915933523;
    msg.x = 0.7967170479;
    msg.y = 0.1712070048;
    msg.z = 0.3501070518;

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
    msg.setTimeStamp(0.482487878949);
    msg.setSource(60690U);
    msg.setSourceEntity(216U);
    msg.setDestination(64208U);
    msg.setDestinationEntity(239U);
    msg.time = 0.276507634914;
    msg.x = 0.179168594248;
    msg.y = 0.229913468839;
    msg.z = 0.51784564115;

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
    msg.setTimeStamp(0.0186385177943);
    msg.setSource(14487U);
    msg.setSourceEntity(82U);
    msg.setDestination(5196U);
    msg.setDestinationEntity(163U);
    msg.time = 0.735248890378;
    msg.x = 0.757784773492;
    msg.y = 0.750145007182;
    msg.z = 0.836455635201;

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
    msg.setTimeStamp(0.134241735224);
    msg.setSource(13247U);
    msg.setSourceEntity(213U);
    msg.setDestination(18004U);
    msg.setDestinationEntity(252U);
    msg.validity = 82U;
    msg.x = 0.700271584814;
    msg.y = 0.716556213763;
    msg.z = 0.433408499985;

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
    msg.setTimeStamp(0.791476578476);
    msg.setSource(40190U);
    msg.setSourceEntity(222U);
    msg.setDestination(57496U);
    msg.setDestinationEntity(19U);
    msg.validity = 142U;
    msg.x = 0.0697191511171;
    msg.y = 0.903887249775;
    msg.z = 0.331017061275;

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
    msg.setTimeStamp(0.111895706467);
    msg.setSource(24066U);
    msg.setSourceEntity(134U);
    msg.setDestination(53908U);
    msg.setDestinationEntity(233U);
    msg.validity = 84U;
    msg.x = 0.992252587008;
    msg.y = 0.878520452139;
    msg.z = 0.931009093219;

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
    msg.setTimeStamp(0.463208264948);
    msg.setSource(7805U);
    msg.setSourceEntity(149U);
    msg.setDestination(22804U);
    msg.setDestinationEntity(57U);
    msg.validity = 20U;
    msg.x = 0.822564766287;
    msg.y = 0.315716499715;
    msg.z = 0.353712637231;

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
    msg.setTimeStamp(0.0468230284163);
    msg.setSource(22837U);
    msg.setSourceEntity(199U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(226U);
    msg.validity = 58U;
    msg.x = 0.457558911149;
    msg.y = 0.512034514899;
    msg.z = 0.135292369696;

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
    msg.setTimeStamp(0.304605020204);
    msg.setSource(64833U);
    msg.setSourceEntity(176U);
    msg.setDestination(48649U);
    msg.setDestinationEntity(1U);
    msg.validity = 86U;
    msg.x = 0.594933860082;
    msg.y = 0.950177313036;
    msg.z = 0.220522584278;

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
    msg.setTimeStamp(0.522272924484);
    msg.setSource(54137U);
    msg.setSourceEntity(99U);
    msg.setDestination(56235U);
    msg.setDestinationEntity(189U);
    msg.time = 0.410915643725;
    msg.x = 0.337515536321;
    msg.y = 0.653000652924;
    msg.z = 0.65479400784;

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
    msg.setTimeStamp(0.32363318307);
    msg.setSource(312U);
    msg.setSourceEntity(160U);
    msg.setDestination(64739U);
    msg.setDestinationEntity(82U);
    msg.time = 0.931452911714;
    msg.x = 0.546873095169;
    msg.y = 0.930438934535;
    msg.z = 0.29313614083;

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
    msg.setTimeStamp(0.665324864479);
    msg.setSource(22288U);
    msg.setSourceEntity(41U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(229U);
    msg.time = 0.447630754757;
    msg.x = 0.911681855489;
    msg.y = 0.316876746155;
    msg.z = 0.193551174572;

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
    msg.setTimeStamp(0.834665444554);
    msg.setSource(40766U);
    msg.setSourceEntity(131U);
    msg.setDestination(11742U);
    msg.setDestinationEntity(99U);
    msg.validity = 241U;
    msg.value = 0.450909127119;

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
    msg.setTimeStamp(0.809327496828);
    msg.setSource(42772U);
    msg.setSourceEntity(143U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(86U);
    msg.validity = 209U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.228661596558;
    tmp_msg_0.y = 0.774272107007;
    tmp_msg_0.z = 0.892783945439;
    tmp_msg_0.phi = 0.0232048193965;
    tmp_msg_0.theta = 0.361711885837;
    tmp_msg_0.psi = 0.831823839781;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0193167820144;

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
    msg.setTimeStamp(0.327497464026);
    msg.setSource(1846U);
    msg.setSourceEntity(79U);
    msg.setDestination(47406U);
    msg.setDestinationEntity(163U);
    msg.validity = 128U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.273506741843;
    tmp_msg_0.beam_height = 0.155310496827;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.957484541272;

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
    msg.setTimeStamp(0.311942399443);
    msg.setSource(5511U);
    msg.setSourceEntity(123U);
    msg.setDestination(17678U);
    msg.setDestinationEntity(194U);
    msg.value = 0.635491286605;

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
    msg.setTimeStamp(0.6386757982);
    msg.setSource(44297U);
    msg.setSourceEntity(5U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(238U);
    msg.value = 0.168295430357;

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
    msg.setTimeStamp(0.522044534237);
    msg.setSource(17087U);
    msg.setSourceEntity(5U);
    msg.setDestination(29349U);
    msg.setDestinationEntity(63U);
    msg.value = 0.898988796229;

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
    msg.setTimeStamp(0.71509548657);
    msg.setSource(36131U);
    msg.setSourceEntity(156U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(97U);
    msg.value = 0.980585054374;

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
    msg.setTimeStamp(0.502723811787);
    msg.setSource(60323U);
    msg.setSourceEntity(172U);
    msg.setDestination(50547U);
    msg.setDestinationEntity(218U);
    msg.value = 0.24545937447;

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
    msg.setTimeStamp(0.0483866058492);
    msg.setSource(1978U);
    msg.setSourceEntity(154U);
    msg.setDestination(1321U);
    msg.setDestinationEntity(230U);
    msg.value = 0.949046185362;

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
    msg.setTimeStamp(0.361969550251);
    msg.setSource(46316U);
    msg.setSourceEntity(27U);
    msg.setDestination(46641U);
    msg.setDestinationEntity(254U);
    msg.value = 0.0123828179414;

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
    msg.setTimeStamp(0.350771133246);
    msg.setSource(5772U);
    msg.setSourceEntity(111U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(253U);
    msg.value = 0.179578207422;

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
    msg.setTimeStamp(0.587810201224);
    msg.setSource(64432U);
    msg.setSourceEntity(77U);
    msg.setDestination(27827U);
    msg.setDestinationEntity(35U);
    msg.value = 0.582954297932;

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
    msg.setTimeStamp(0.991400797061);
    msg.setSource(53226U);
    msg.setSourceEntity(205U);
    msg.setDestination(57728U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0618985825162;

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
    msg.setTimeStamp(0.897359877239);
    msg.setSource(40987U);
    msg.setSourceEntity(3U);
    msg.setDestination(54532U);
    msg.setDestinationEntity(14U);
    msg.value = 0.915627737828;

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
    msg.setTimeStamp(0.103171575036);
    msg.setSource(7010U);
    msg.setSourceEntity(90U);
    msg.setDestination(30526U);
    msg.setDestinationEntity(165U);
    msg.value = 0.661019932667;

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
    msg.setTimeStamp(0.69286100369);
    msg.setSource(30519U);
    msg.setSourceEntity(216U);
    msg.setDestination(2683U);
    msg.setDestinationEntity(67U);
    msg.value = 0.0123313254294;

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
    msg.setTimeStamp(0.0246064389619);
    msg.setSource(11457U);
    msg.setSourceEntity(196U);
    msg.setDestination(44334U);
    msg.setDestinationEntity(39U);
    msg.value = 0.652117511709;

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
    msg.setTimeStamp(0.0347409102753);
    msg.setSource(106U);
    msg.setSourceEntity(239U);
    msg.setDestination(20349U);
    msg.setDestinationEntity(180U);
    msg.value = 0.585750773524;

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
    msg.setTimeStamp(0.962693371354);
    msg.setSource(45128U);
    msg.setSourceEntity(149U);
    msg.setDestination(37197U);
    msg.setDestinationEntity(149U);
    msg.value = 0.490641095982;

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
    msg.setTimeStamp(0.148153260486);
    msg.setSource(28167U);
    msg.setSourceEntity(153U);
    msg.setDestination(52762U);
    msg.setDestinationEntity(37U);
    msg.value = 0.962337207319;

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
    msg.setTimeStamp(0.981674601189);
    msg.setSource(24791U);
    msg.setSourceEntity(250U);
    msg.setDestination(56593U);
    msg.setDestinationEntity(47U);
    msg.value = 0.730288004068;

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
    msg.setTimeStamp(0.342662699265);
    msg.setSource(33242U);
    msg.setSourceEntity(167U);
    msg.setDestination(42413U);
    msg.setDestinationEntity(190U);
    msg.value = 0.281695194376;

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
    msg.setTimeStamp(0.847996062656);
    msg.setSource(16897U);
    msg.setSourceEntity(140U);
    msg.setDestination(61080U);
    msg.setDestinationEntity(55U);
    msg.value = 0.726963580964;

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
    msg.setTimeStamp(0.92890851542);
    msg.setSource(24873U);
    msg.setSourceEntity(74U);
    msg.setDestination(15613U);
    msg.setDestinationEntity(143U);
    msg.value = 0.726151830157;

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
    msg.setTimeStamp(0.340908318519);
    msg.setSource(57230U);
    msg.setSourceEntity(101U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0901823762277;

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
    msg.setTimeStamp(0.877948665441);
    msg.setSource(49262U);
    msg.setSourceEntity(243U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(195U);
    msg.value = 0.254418105737;

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
    msg.setTimeStamp(0.228250109252);
    msg.setSource(55866U);
    msg.setSourceEntity(40U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(208U);
    msg.value = 0.965701266645;

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
    msg.setTimeStamp(0.969773747247);
    msg.setSource(36164U);
    msg.setSourceEntity(192U);
    msg.setDestination(22370U);
    msg.setDestinationEntity(209U);
    msg.direction = 0.951511331637;
    msg.speed = 0.529095079437;
    msg.turbulence = 0.18112749909;

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
    msg.setTimeStamp(0.0568027147892);
    msg.setSource(31644U);
    msg.setSourceEntity(247U);
    msg.setDestination(41073U);
    msg.setDestinationEntity(208U);
    msg.direction = 0.81643892195;
    msg.speed = 0.63170594736;
    msg.turbulence = 0.12728043689;

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
    msg.setTimeStamp(0.651237956359);
    msg.setSource(1457U);
    msg.setSourceEntity(46U);
    msg.setDestination(52287U);
    msg.setDestinationEntity(247U);
    msg.direction = 0.716367488849;
    msg.speed = 0.224436895898;
    msg.turbulence = 0.646996313553;

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
    msg.setTimeStamp(0.45738307909);
    msg.setSource(5296U);
    msg.setSourceEntity(118U);
    msg.setDestination(28000U);
    msg.setDestinationEntity(97U);
    msg.value = 0.244942632207;

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
    msg.setTimeStamp(0.989807521651);
    msg.setSource(8941U);
    msg.setSourceEntity(175U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(55U);
    msg.value = 0.830332315517;

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
    msg.setTimeStamp(0.759831435134);
    msg.setSource(9208U);
    msg.setSourceEntity(206U);
    msg.setDestination(45744U);
    msg.setDestinationEntity(215U);
    msg.value = 0.0642545314288;

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
    msg.setTimeStamp(0.297748351335);
    msg.setSource(34732U);
    msg.setSourceEntity(89U);
    msg.setDestination(23436U);
    msg.setDestinationEntity(42U);
    msg.value.assign("AGKTIMSNPWQEGRTZUHVNGORGUXQMVYKYXPTNFBFPAKYXSYZTQTWDMPCNAEWODSEFGQDEEYAIGKRKGOQVLZAVTHVCQEMARVSSFMJTOIPLE");

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
    msg.setTimeStamp(0.440825941767);
    msg.setSource(15378U);
    msg.setSourceEntity(80U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(27U);
    msg.value.assign("RUGVLBGNJNSOAPSFPYDYRDXHSFBYTDHUWANAHEXZUGPGSBUICDEVNPISAQRPULKXXWOTMKPBTCMUOHQIFOFKPYWRZYWDPEDNROTLGKQJHMTHQEYVIDCFKVHEUWUJSKZIWZJMSSVSLWERLZGSZCBEBXCQJMNLHAFTCVXNTJVOKQBGIAFIJGRTYQQFDTJMMPWTYMNYCRK");

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
    msg.setTimeStamp(0.439340374136);
    msg.setSource(45508U);
    msg.setSourceEntity(100U);
    msg.setDestination(19669U);
    msg.setDestinationEntity(172U);
    msg.value.assign("WTRVSULNXKUGNKMB");

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
    msg.setTimeStamp(0.6468046062);
    msg.setSource(13314U);
    msg.setSourceEntity(145U);
    msg.setDestination(23793U);
    msg.setDestinationEntity(83U);
    const char tmp_msg_0[] = {-39, 90, -53, -24, 17, -94, -100, -43, 48, -54, -119, 100, -68, -112, -61, -117, 3, -21, 74, -69, 27, 87, 61, -80, -8, 5, -6, -33, -79, 82, -35, -33, 75, 121, 125, 107, -26, 54, 82, 112, 35, -76, 54, 11, 52, 11, -126, 111, 71, 1, 3, 22, 37, -97, -85, -25, 124, -41, -76, 120, 28, 49, 88, -29, 19, 6, 1, -66, -83, -119, 64, 41, 15, -42, -126, -14, 76, 37, -34, 101, 52, -112, -46, -15, 35, -75, 72, -39, 21, 110, -109, 103, -111, -12, -115, -6, 78, -114, -117, 50, 34, 2, 9, -95, 99, -120, 24, 66, 36, 42, -3, -31, -92, -52, 35, 90, -87, -28, -51, 87, 61, -29, -86, -102, -73, -52, -7, 91, -114, -81, 33, -26, 121, 72, 25, 73, -31, 33, 40, -27, -122, -43, 92, -79, 8, -35, -75, 6, 3, 2, 109, -40, -2, -125, 6, -105, -54, -33, -1, 12, -108, 18, 123, -33, 78, 38, -41, -98, -53, -19, -17, -56, -72, -72, 82, -50, 117, -128, -7, -97, 90, -22, 125, 89, -45, -50, -88, -11, -80, 102};
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
    msg.setTimeStamp(0.0140986847329);
    msg.setSource(25406U);
    msg.setSourceEntity(13U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(112U);
    const char tmp_msg_0[] = {86, -59, -21, 15, -43, -51, 7, -91, -55, -126, -41, -81, 29, 28, 64, -11, -100, -29, 17, -25, 120, -109, -121, -42, 59, -98, -15, 13, 107, -120, -28, 9, 124, 122, 75, -90, -105, -62, 61, 124, 57, -30, 19, -108, -33, 11, 56, 70, -31, -98, -4, -7, 107, 45, 122, 104, -13, 45, -25, 8, 31, 94, -46, 92, -11, -26, -6, -28, 76, -102, 109, 73, 97, -43, 7, -76, 60, -21, 6, 113, 92, -97, 113, 57, -109, 16, 70, -33, 71, 37, -27, -77, -92, -2, 60, 51, 41, 21, -102, -58, 76, -125, 48, -122, 92, -79, 48, 41, -39, 15, 94, 112, 30, -82, 122, 107, -66, 7, -94, 17, -115, 121, 1, 72, -123, -97, 113, 32, -10, -44, -28, 83, -20, -124, -122, -53, -47, 35, -122, -39, -46, -17, -43, 32, -66, -9, 66, -82, -1, 21, -25};
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
    msg.setTimeStamp(0.722186135555);
    msg.setSource(36443U);
    msg.setSourceEntity(155U);
    msg.setDestination(49153U);
    msg.setDestinationEntity(61U);
    const char tmp_msg_0[] = {108, 10, -11, -20, 98, 59, 104, -39, -39, -98, 42, 57, 27, 64, 12, -104, -21, 0, 12, 63, -45, 49, 60, -61, -8, -96, 73, 51, 11, -113, -46, -50, 37, 119, 76, 109, 102, 118, 44, 57, 53, 114, -93, 112, -93, 102, -29, -21, 50, -71, -118, -112, 34, -66, 50, 69, -11, 115, -112, -35, -58, -26, -17, -69, 81, 75, -100, -75, 104, -16, 102, 82, 78, 97, 62, 107, -77, 51, 60, -123, -10, 97, -60, -51, 112, 77, -107, 40, -112, 87, 42, -42, -48, -59, 5, 83, -47, 78, -49, -103, 39, -117, -44, -50, -70, -44, -48, -121, -11, -4, 124, -76, 45, -103, -39, -46, 39, 39, -112, 90, -92, -28, -42, -56, -109, -102, 33, -49, 101, 105, 92, 5, -110, 58, -52, 110, 83, -91, 106, -106, 83, -10, 56, -34, -40, -38, 107, -43, 93, 19, 54, 121, 84, -6, 93, -64, -62, -100, -42, -42, -68, 60, 27, -109, -109, -110, 121, -67, 122, 68, -98, 22, 53, 9, -109, -46, 7, 121, 50, -54, 7, 43, -106, 116, 118, 120, 69, 37, -15, -25, -50, 108, -30, 121, 62, -82, -69, -89, -87, -2, -65, 102, 91, 100, -20, 70, 113, 88, -34, 7};
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
    msg.setTimeStamp(0.609130610782);
    msg.setSource(3507U);
    msg.setSourceEntity(182U);
    msg.setDestination(35748U);
    msg.setDestinationEntity(147U);
    msg.type = 93U;
    msg.frequency = 209937966U;
    msg.min_range = 12108U;
    msg.max_range = 46424U;
    msg.bits_per_point = 57U;
    msg.scale_factor = 0.936302203008;
    const char tmp_msg_0[] = {27, 63, -97, -3, 19, 17, 2, 114, -9, -80, 43, -68};
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
    msg.setTimeStamp(0.192677840184);
    msg.setSource(10174U);
    msg.setSourceEntity(58U);
    msg.setDestination(52129U);
    msg.setDestinationEntity(46U);
    msg.type = 131U;
    msg.frequency = 2377595286U;
    msg.min_range = 25620U;
    msg.max_range = 12662U;
    msg.bits_per_point = 205U;
    msg.scale_factor = 0.985512218561;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.303117602569;
    tmp_msg_0.beam_height = 0.80599058598;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {109, 87, -43, -2, -19, -75, 31, 26, 4, -6, -27, -67, -71, 96, 64, 10, -31, -80, 54, 95, -69, -87, -95, -53, -23, 86, -77, -62, 126, -1, -31, 79, 14, -56, -16, -18, 15, -83, 66, -92, 64, -5, -10, 59, 115, 75, -48, 49, 74, 28, -32, -106, -120, 7, 7, 126, 125, 112, 37, -60, -80, 84, 75, -5, -106, -8, 88, -106, 98, -22, -98, -46, 22, 73, 116, 50, -43, 92, -64, 84, 125, 121, 99, -19, -53, -84, -119, 74, 65, 1, -71, -114, -63, 78, -82, 23};
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
    msg.setTimeStamp(0.470988039987);
    msg.setSource(39760U);
    msg.setSourceEntity(88U);
    msg.setDestination(12582U);
    msg.setDestinationEntity(24U);
    msg.type = 37U;
    msg.frequency = 1074990303U;
    msg.min_range = 11862U;
    msg.max_range = 16823U;
    msg.bits_per_point = 135U;
    msg.scale_factor = 0.393070455971;
    const char tmp_msg_0[] = {45, -10, 72, 67, 123, 51, 87, -59, -113, -6, 82, 9, 94, 35, 93, -98, -55, -7, 85, -63, 71, 116, -76, -42, 74, -72, -103, -14, 49, 82, -122, -39, 26, 76, 17, -67, -10, 125, 86, -97, -117, 35, 95, -78, -40, 103, -72, 104, 77, -66, -17, 116, -53, 3, -92, -7, 117, -38, -121, 60, 100, -10, -31, 58, 46, 76, -1, -16, 37, -23, -74, -18, 86, 71, 77, 59, -35, -89, -32, 55, -56, 75, -84, 50, -125, 80, -79, -43, -1, -91, -63, -112, 21, 10, -121, 23, 2, -80, -44, -77, -77, -80, 57, -112, 124, -112, -65, 62, 26, 71, 33, -63, 48, -89, 29, -38, 84, -40, -29, 117, 104, 74, -88, -21, 48, 85, 1, -58, -84, -93, -60, -14, 80, -5, -8, -52, -93, -120, -2, 45, -65, -37, 6, 65, -41, -73, -13};
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
    msg.setTimeStamp(0.621106529016);
    msg.setSource(41259U);
    msg.setSourceEntity(31U);
    msg.setDestination(11227U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.83597209159);
    msg.setSource(43534U);
    msg.setSourceEntity(225U);
    msg.setDestination(7421U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.479019724987);
    msg.setSource(11136U);
    msg.setSourceEntity(59U);
    msg.setDestination(2502U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.573761807939);
    msg.setSource(41445U);
    msg.setSourceEntity(54U);
    msg.setDestination(3462U);
    msg.setDestinationEntity(167U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.651170245147);
    msg.setSource(4550U);
    msg.setSourceEntity(156U);
    msg.setDestination(50797U);
    msg.setDestinationEntity(205U);
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
    msg.setTimeStamp(0.988350539301);
    msg.setSource(23986U);
    msg.setSourceEntity(157U);
    msg.setDestination(24888U);
    msg.setDestinationEntity(214U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.282230912493);
    msg.setSource(36705U);
    msg.setSourceEntity(187U);
    msg.setDestination(15856U);
    msg.setDestinationEntity(238U);
    msg.value = 0.285998077834;
    msg.confidence = 0.118755287825;
    msg.opmodes.assign("PHCOTXHRVRWQIWBHQIMVMNTPNDYVXYDOFFMB");

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
    msg.setTimeStamp(0.248613785292);
    msg.setSource(5565U);
    msg.setSourceEntity(164U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(119U);
    msg.value = 0.286150543321;
    msg.confidence = 0.584044066917;
    msg.opmodes.assign("IQMKHSMZOXJEZLBNDQWQYECJVRVZSXROMZRDYLBASENHCDYVYHCDOYAKXOCWZBNEAPPTEWNIGGAWJOTADHFYJBQRKPOWPLXBXFXAROIIOIFEDVWFZFQKZCUDBWGAONLLLCAGGLNVCHTPUMMKURSWBJSGKJFETJMDPGUQGTKMKZIILUEQUWIEYTOXBSVFRYSPQAVVPQZGBRHUJLPXZBPKIMFCYHDQLMVTNFUAXISWRSHVNCTMTNSJDNR");

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
    msg.setTimeStamp(0.830589656351);
    msg.setSource(49059U);
    msg.setSourceEntity(78U);
    msg.setDestination(13531U);
    msg.setDestinationEntity(134U);
    msg.value = 0.948563518075;
    msg.confidence = 0.414258146105;
    msg.opmodes.assign("FYWTEHIVDWWEZFRJFSSBPGKMZZUJEWSFNGKCPQBIROHCHUXJMNLRBXSXQOSJLIOXGRSHVTJJEXNNAIVPAUJXUOQADDCUZYGLNWTBYRMAFDAGORUHNPHDYYWGKFEVEKPIZDUDCFVZTTLOQGKBPQNNKINXUAZQOCRMYMLSKIEPTYQHPQCMNDGYLGCTDFWMZQAHTZAU");

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
    msg.setTimeStamp(0.696115096231);
    msg.setSource(16685U);
    msg.setSourceEntity(24U);
    msg.setDestination(23506U);
    msg.setDestinationEntity(140U);
    msg.itow = 1699873854U;
    msg.lat = 0.302909498906;
    msg.lon = 0.697874251448;
    msg.height_ell = 0.038797800965;
    msg.height_sea = 0.192510826163;
    msg.hacc = 0.618587407272;
    msg.vacc = 0.945301611146;
    msg.vel_n = 0.901599572368;
    msg.vel_e = 0.793299312918;
    msg.vel_d = 0.764770534924;
    msg.speed = 0.920066327614;
    msg.gspeed = 0.246605110678;
    msg.heading = 0.573804690938;
    msg.sacc = 0.955554280459;
    msg.cacc = 0.0293038701659;

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
    msg.setTimeStamp(0.379870406795);
    msg.setSource(29208U);
    msg.setSourceEntity(139U);
    msg.setDestination(43401U);
    msg.setDestinationEntity(19U);
    msg.itow = 2286932759U;
    msg.lat = 0.987130394378;
    msg.lon = 0.0262566687564;
    msg.height_ell = 0.357625332505;
    msg.height_sea = 0.228925096114;
    msg.hacc = 0.27620344814;
    msg.vacc = 0.751615141339;
    msg.vel_n = 0.640402260596;
    msg.vel_e = 0.324002892027;
    msg.vel_d = 0.164666797177;
    msg.speed = 0.804600807692;
    msg.gspeed = 0.756369747684;
    msg.heading = 0.399292699042;
    msg.sacc = 0.098725367932;
    msg.cacc = 0.635482520258;

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
    msg.setTimeStamp(0.449574554775);
    msg.setSource(29689U);
    msg.setSourceEntity(225U);
    msg.setDestination(56412U);
    msg.setDestinationEntity(228U);
    msg.itow = 662200671U;
    msg.lat = 0.425673568818;
    msg.lon = 0.876864800644;
    msg.height_ell = 0.362232566434;
    msg.height_sea = 0.313370338463;
    msg.hacc = 0.832130633489;
    msg.vacc = 0.723717081251;
    msg.vel_n = 0.471870228171;
    msg.vel_e = 0.379405286552;
    msg.vel_d = 0.709136032089;
    msg.speed = 0.915588457321;
    msg.gspeed = 0.3496291254;
    msg.heading = 0.336815078967;
    msg.sacc = 0.0158516150278;
    msg.cacc = 0.504536510707;

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
    msg.setTimeStamp(0.498023217318);
    msg.setSource(56809U);
    msg.setSourceEntity(122U);
    msg.setDestination(8709U);
    msg.setDestinationEntity(226U);
    msg.id = 190U;
    msg.value = 0.31151695777;

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
    msg.setTimeStamp(0.127047903793);
    msg.setSource(47960U);
    msg.setSourceEntity(30U);
    msg.setDestination(9217U);
    msg.setDestinationEntity(119U);
    msg.id = 42U;
    msg.value = 0.423220377955;

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
    msg.setTimeStamp(0.509853255026);
    msg.setSource(8441U);
    msg.setSourceEntity(172U);
    msg.setDestination(30007U);
    msg.setDestinationEntity(199U);
    msg.id = 230U;
    msg.value = 0.713894755327;

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
    msg.setTimeStamp(0.673372912542);
    msg.setSource(18387U);
    msg.setSourceEntity(150U);
    msg.setDestination(8112U);
    msg.setDestinationEntity(135U);
    msg.x = 0.710039742596;
    msg.y = 0.0299470423157;
    msg.z = 0.848979628743;
    msg.phi = 0.538051600258;
    msg.theta = 0.315359096212;
    msg.psi = 0.0292239014733;

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
    msg.setTimeStamp(0.621545658362);
    msg.setSource(41263U);
    msg.setSourceEntity(47U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(185U);
    msg.x = 0.856737084478;
    msg.y = 0.299907750505;
    msg.z = 0.322209515785;
    msg.phi = 0.0604114011428;
    msg.theta = 0.467545091393;
    msg.psi = 0.709300574848;

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
    msg.setTimeStamp(0.84254201963);
    msg.setSource(44121U);
    msg.setSourceEntity(107U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(239U);
    msg.x = 0.680479042982;
    msg.y = 0.358633085431;
    msg.z = 0.454694132159;
    msg.phi = 0.141948491345;
    msg.theta = 0.244961681076;
    msg.psi = 0.212042576006;

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
    msg.setTimeStamp(0.71232778855);
    msg.setSource(63634U);
    msg.setSourceEntity(222U);
    msg.setDestination(46715U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.44540391194;
    msg.beam_height = 0.506216933997;

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
    msg.setTimeStamp(0.525360327603);
    msg.setSource(33819U);
    msg.setSourceEntity(193U);
    msg.setDestination(39826U);
    msg.setDestinationEntity(124U);
    msg.beam_width = 0.956199482265;
    msg.beam_height = 0.113331127501;

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
    msg.setTimeStamp(0.61589443687);
    msg.setSource(49395U);
    msg.setSourceEntity(73U);
    msg.setDestination(31233U);
    msg.setDestinationEntity(123U);
    msg.beam_width = 0.819591432226;
    msg.beam_height = 0.116868707819;

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
    msg.setTimeStamp(0.122569274452);
    msg.setSource(46955U);
    msg.setSourceEntity(108U);
    msg.setDestination(11286U);
    msg.setDestinationEntity(58U);
    msg.sane = 23U;

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
    msg.setTimeStamp(0.62750942953);
    msg.setSource(14227U);
    msg.setSourceEntity(26U);
    msg.setDestination(56736U);
    msg.setDestinationEntity(178U);
    msg.sane = 115U;

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
    msg.setTimeStamp(0.575676100769);
    msg.setSource(3563U);
    msg.setSourceEntity(124U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(32U);
    msg.sane = 20U;

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
    msg.setTimeStamp(0.774831428642);
    msg.setSource(27517U);
    msg.setSourceEntity(246U);
    msg.setDestination(719U);
    msg.setDestinationEntity(160U);
    msg.value = 0.248050416827;

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
    msg.setTimeStamp(0.637271508711);
    msg.setSource(48307U);
    msg.setSourceEntity(27U);
    msg.setDestination(34864U);
    msg.setDestinationEntity(82U);
    msg.value = 0.345420140027;

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
    msg.setTimeStamp(0.0516997235603);
    msg.setSource(27773U);
    msg.setSourceEntity(210U);
    msg.setDestination(7463U);
    msg.setDestinationEntity(141U);
    msg.value = 0.801661423311;

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
    msg.setTimeStamp(0.338688461152);
    msg.setSource(55452U);
    msg.setSourceEntity(112U);
    msg.setDestination(21006U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0524526402053;

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
    msg.setTimeStamp(0.00197987372569);
    msg.setSource(30858U);
    msg.setSourceEntity(102U);
    msg.setDestination(46171U);
    msg.setDestinationEntity(102U);
    msg.value = 0.809566634094;

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
    msg.setTimeStamp(0.52397198511);
    msg.setSource(57842U);
    msg.setSourceEntity(108U);
    msg.setDestination(15599U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0141991341235;

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
    msg.setTimeStamp(0.6836560898);
    msg.setSource(8064U);
    msg.setSourceEntity(96U);
    msg.setDestination(61194U);
    msg.setDestinationEntity(143U);
    msg.value = 0.176154959976;

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
    msg.setTimeStamp(0.763332136081);
    msg.setSource(14576U);
    msg.setSourceEntity(232U);
    msg.setDestination(45404U);
    msg.setDestinationEntity(230U);
    msg.value = 0.413307329976;

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
    msg.setTimeStamp(0.177038512081);
    msg.setSource(30025U);
    msg.setSourceEntity(0U);
    msg.setDestination(64270U);
    msg.setDestinationEntity(241U);
    msg.value = 0.462808269964;

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
    msg.setTimeStamp(0.226266663631);
    msg.setSource(11354U);
    msg.setSourceEntity(226U);
    msg.setDestination(11018U);
    msg.setDestinationEntity(75U);
    msg.value = 0.507923669339;

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
    msg.setTimeStamp(0.71869536265);
    msg.setSource(2859U);
    msg.setSourceEntity(223U);
    msg.setDestination(18645U);
    msg.setDestinationEntity(203U);
    msg.value = 0.180895060301;

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
    msg.setTimeStamp(0.26095064506);
    msg.setSource(59567U);
    msg.setSourceEntity(29U);
    msg.setDestination(1005U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0402777135868;

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
    msg.setTimeStamp(0.637870528048);
    msg.setSource(61330U);
    msg.setSourceEntity(232U);
    msg.setDestination(48270U);
    msg.setDestinationEntity(207U);
    msg.value = 0.682187721547;

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
    msg.setTimeStamp(0.934826162828);
    msg.setSource(41061U);
    msg.setSourceEntity(69U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(224U);
    msg.value = 0.176229484228;

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
    msg.setTimeStamp(0.864170394097);
    msg.setSource(20339U);
    msg.setSourceEntity(205U);
    msg.setDestination(9908U);
    msg.setDestinationEntity(57U);
    msg.value = 0.725937672516;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.305037357409);
    msg.setSource(35649U);
    msg.setSourceEntity(220U);
    msg.setDestination(40800U);
    msg.setDestinationEntity(194U);
    msg.id = 27U;
    msg.zoom = 86U;
    msg.action = 2U;

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
    msg.setTimeStamp(0.276112409811);
    msg.setSource(14427U);
    msg.setSourceEntity(74U);
    msg.setDestination(5024U);
    msg.setDestinationEntity(18U);
    msg.id = 221U;
    msg.zoom = 202U;
    msg.action = 158U;

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
    msg.setTimeStamp(0.0898585922905);
    msg.setSource(18879U);
    msg.setSourceEntity(101U);
    msg.setDestination(28332U);
    msg.setDestinationEntity(21U);
    msg.id = 249U;
    msg.zoom = 67U;
    msg.action = 159U;

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
    msg.setTimeStamp(0.0399693010163);
    msg.setSource(46051U);
    msg.setSourceEntity(33U);
    msg.setDestination(9562U);
    msg.setDestinationEntity(205U);
    msg.id = 49U;
    msg.value = 0.986970554711;

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
    msg.setTimeStamp(0.137568733817);
    msg.setSource(18974U);
    msg.setSourceEntity(178U);
    msg.setDestination(17856U);
    msg.setDestinationEntity(170U);
    msg.id = 3U;
    msg.value = 0.961622013335;

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
    msg.setTimeStamp(0.409454064303);
    msg.setSource(7612U);
    msg.setSourceEntity(20U);
    msg.setDestination(57064U);
    msg.setDestinationEntity(134U);
    msg.id = 85U;
    msg.value = 0.910777715303;

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
    msg.setTimeStamp(0.331076872071);
    msg.setSource(23295U);
    msg.setSourceEntity(192U);
    msg.setDestination(51316U);
    msg.setDestinationEntity(161U);
    msg.id = 109U;
    msg.value = 0.344288645689;

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
    msg.setTimeStamp(0.256410812438);
    msg.setSource(22461U);
    msg.setSourceEntity(42U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(6U);
    msg.id = 103U;
    msg.value = 0.961842569384;

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
    msg.setTimeStamp(0.756562093736);
    msg.setSource(64935U);
    msg.setSourceEntity(159U);
    msg.setDestination(28004U);
    msg.setDestinationEntity(245U);
    msg.id = 52U;
    msg.value = 0.493425564117;

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
    msg.setTimeStamp(0.980324893703);
    msg.setSource(58548U);
    msg.setSourceEntity(235U);
    msg.setDestination(42427U);
    msg.setDestinationEntity(181U);
    msg.id = 142U;
    msg.angle = 0.859253547885;

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
    msg.setTimeStamp(0.863387155944);
    msg.setSource(43058U);
    msg.setSourceEntity(189U);
    msg.setDestination(25077U);
    msg.setDestinationEntity(114U);
    msg.id = 30U;
    msg.angle = 0.956698342721;

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
    msg.setTimeStamp(0.374807366067);
    msg.setSource(56509U);
    msg.setSourceEntity(240U);
    msg.setDestination(54354U);
    msg.setDestinationEntity(48U);
    msg.id = 108U;
    msg.angle = 0.72217161021;

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
    msg.setTimeStamp(0.708521904601);
    msg.setSource(23341U);
    msg.setSourceEntity(238U);
    msg.setDestination(57837U);
    msg.setDestinationEntity(193U);
    msg.op = 187U;
    msg.actions.assign("ZYFRKMABJDHCKGUGQBFWWYVCXJMLQKWFTDNEJJWSHFYYFALVASSDABNQIRVKXDUZQLOALHVWYTKPJLZLTTPSVJOEHBZWDIYRQIZSANLFCEROCBTCXVLHOIWMHPNYKGZPRDKSFDGBTURGSMMZUPNGOEABYQVGEFNDMKBFPCSXRJZOQNRULNVSXUEQHTJB");

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
    msg.setTimeStamp(0.133719379361);
    msg.setSource(36631U);
    msg.setSourceEntity(72U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(224U);
    msg.op = 188U;
    msg.actions.assign("GBLSVNERKHCJTYWLONGTZQXWKSZHRDLBHBQPEXOMRAZGSGPHUOFS");

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
    msg.setTimeStamp(0.271166249357);
    msg.setSource(33008U);
    msg.setSourceEntity(125U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(235U);
    msg.op = 115U;
    msg.actions.assign("JBPAKUTMLIDTFGLMECIQORQYCHOZYHWYLRYEKTZXZWDLKEACMWPNZHKFNLMFNKFIQXBZCIYMPDZANIBNBJXDIXRAMKVLWYBYCXAHLNUBRSWXBSZTDQIFUIEGJGSVBSFAVIPS");

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
    msg.setTimeStamp(0.686636544341);
    msg.setSource(15726U);
    msg.setSourceEntity(119U);
    msg.setDestination(21547U);
    msg.setDestinationEntity(69U);
    msg.actions.assign("XFUNGNVNBPPCAHHEAACQSYOIKIVKSPDIEWDKLUZEKMCGCTEIHJJWZVSTRZVQQKYTQGLFXPCBMBYECFVNLWLGOMVYA");

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
    msg.setTimeStamp(0.415342666213);
    msg.setSource(35874U);
    msg.setSourceEntity(124U);
    msg.setDestination(56929U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("WLOGPMDHNECIVAKXZQRUVOCSW");

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
    msg.setTimeStamp(0.296559275124);
    msg.setSource(48462U);
    msg.setSourceEntity(75U);
    msg.setDestination(59986U);
    msg.setDestinationEntity(149U);
    msg.actions.assign("SGIRDYUUFFKZMAAODAKBITYTPTIHXYYOHUKTCRFPLBWUJJLNRMROVPNCGDVMXEFZAWDFMHYXVLPHRJ");

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
    msg.setTimeStamp(0.109171065431);
    msg.setSource(30526U);
    msg.setSourceEntity(174U);
    msg.setDestination(19136U);
    msg.setDestinationEntity(93U);
    msg.button = 33U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.325564775181);
    msg.setSource(5072U);
    msg.setSourceEntity(141U);
    msg.setDestination(57187U);
    msg.setDestinationEntity(214U);
    msg.button = 148U;
    msg.value = 166U;

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
    msg.setTimeStamp(0.490211755798);
    msg.setSource(10771U);
    msg.setSourceEntity(201U);
    msg.setDestination(37833U);
    msg.setDestinationEntity(104U);
    msg.button = 78U;
    msg.value = 250U;

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
    msg.setTimeStamp(0.856332364248);
    msg.setSource(56825U);
    msg.setSourceEntity(182U);
    msg.setDestination(48164U);
    msg.setDestinationEntity(77U);
    msg.op = 203U;
    msg.text.assign("NVPRALWQATWTRJIEBZYUGAVKPKHMSMDQUSIYJJTKVKZFIBTFKXBHGWOVVDKDRNSOBSYETGKTFNS");

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
    msg.setTimeStamp(0.919013384904);
    msg.setSource(25190U);
    msg.setSourceEntity(146U);
    msg.setDestination(17741U);
    msg.setDestinationEntity(181U);
    msg.op = 233U;
    msg.text.assign("NXMXTQXMCSREHRMQBTGQJWUBDRSAJRNXXPUPBKNEPDZGKYLVFUINKMALKNKFDZWFTAIAEEOHIFHPTZUHVKZQGUHYYDBXVLAVTEBZJGRECJIOOVILVYXIJAGTEVMGCOYQPOGDQBTKSNUJDBHISZYWGIDARSTMEYTNUWSMKOJDULBBQBVJCXOORWNXUFRFYZFYGMWKLL");

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
    msg.setTimeStamp(0.297408480127);
    msg.setSource(37229U);
    msg.setSourceEntity(156U);
    msg.setDestination(14745U);
    msg.setDestinationEntity(76U);
    msg.op = 6U;
    msg.text.assign("KGEFPMLYIWMBSLREYEAFDFNCDNFZTDQQKAZPIYJZFKHWLTZYPASXPBHXJZCPVETQODICLTBVQMBKSULJRQXWMCYVUDEYWCTYKSLGEGLOPWMIYSFHDJJBFGSYXRXIQRRBQDYEOSIZFDUVIQRKGSMJUURAOMRLBUTSEKUMAJOZXKVUCELWZASXWIGGVMWOBPVACZNAUBFNDLAZHHFPGEMXRNIQNP");

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
    msg.setTimeStamp(0.570544257153);
    msg.setSource(39876U);
    msg.setSourceEntity(150U);
    msg.setDestination(37206U);
    msg.setDestinationEntity(111U);
    msg.op = 150U;
    msg.time_remain = 0.251180267828;
    msg.sched_time = 0.321763399559;

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
    msg.setTimeStamp(0.451528684116);
    msg.setSource(4094U);
    msg.setSourceEntity(19U);
    msg.setDestination(65035U);
    msg.setDestinationEntity(240U);
    msg.op = 171U;
    msg.time_remain = 0.151252783724;
    msg.sched_time = 0.144632672287;

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
    msg.setTimeStamp(0.812478642209);
    msg.setSource(44719U);
    msg.setSourceEntity(196U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(177U);
    msg.op = 2U;
    msg.time_remain = 0.559527432951;
    msg.sched_time = 0.368916023055;

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
    msg.setTimeStamp(0.293776345251);
    msg.setSource(10965U);
    msg.setSourceEntity(57U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(189U);
    msg.name.assign("MQJCIJTTCKGNRIGRUNMTCWPWYCBBEMHLFBQCFFQXBHUAPTCZSYYYJHLPWSIFUSZZDNGQYWULVOTMMYJWXGUAXEZWRUVLDQ");
    msg.op = 116U;
    msg.sched_time = 0.314807210232;

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
    msg.setTimeStamp(0.825483144062);
    msg.setSource(36645U);
    msg.setSourceEntity(18U);
    msg.setDestination(29113U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ECGEVXUBYQBTZNHNJXABPRQVMZBMBVWBNFJGAQSVYHIUGTFZDGXUCIFTCTHRJRHNLYPAIQWOEZEEVLKYZWLLQPJORICDZKKGOTLQAXURCYHDPJNPYUMAREGAZUFXNIQJECIICMHPQWORSKOSMHZLLGTFMNWNOTKVKZIXMWXLSSDDBDGCBXUKVCMCFAMDISXLYWHOEYYIQBVBSJFVMYAUA");
    msg.op = 254U;
    msg.sched_time = 0.142917891741;

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
    msg.setTimeStamp(0.129817018408);
    msg.setSource(1492U);
    msg.setSourceEntity(14U);
    msg.setDestination(49896U);
    msg.setDestinationEntity(181U);
    msg.name.assign("ZGDPSDSNXEYXTTPFQDXKZYSJMNHZMAOHSEOYTVEZVRQJADARFUVBJXUBHBFZJKWWBJWQNYWVOLSDRLFGGBLMNNITIOQUMLHBHWIQPLBXEJFMXPZIOIANLEDFDSOTYRGWWKHBTKPLZGZSAVTGAEQNMECCYTAFRIHEPMYUTA");
    msg.op = 9U;
    msg.sched_time = 0.737033205928;

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
    msg.setTimeStamp(0.756177849541);
    msg.setSource(12402U);
    msg.setSourceEntity(74U);
    msg.setDestination(19825U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.346667693057);
    msg.setSource(52665U);
    msg.setSourceEntity(16U);
    msg.setDestination(46584U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.0585720390086);
    msg.setSource(10898U);
    msg.setSourceEntity(191U);
    msg.setDestination(59835U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.251750757689);
    msg.setSource(37269U);
    msg.setSourceEntity(219U);
    msg.setDestination(39488U);
    msg.setDestinationEntity(103U);
    msg.name.assign("MSKACYXQZBBDXUKIAZVTOPMAKJQGOMJTUGOCPTUJOTVWEDIHSLBJNRZXFBMCDLNBIKQSAOWGVJDSDBCMLYUTPXEXEAZFOFYUNDJXGEGJLBWSQTYCRYQPLYVGPVPVNWNJLGQZKCECHIHFSBDUMDONNAXTIZEQURSRJNWILHRAWWFYBQVNHHHXKSMECFBXZRRHYLIYFTQOREHKZTYAKEGDOVPVVUCNGM");
    msg.state = 21U;

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
    msg.setTimeStamp(0.276435233887);
    msg.setSource(22485U);
    msg.setSourceEntity(151U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(208U);
    msg.name.assign("NFIJLKLXKMKTPSJOMVSEULZUNUIIBQMSSEYCGQIRMMLDSFCBFCTPNHGWOYOLGHYECWYIAOKQBXWAVJEDWDAJCAMTNZQXUEVMDNPJAWGSQAOOLAMGPHQYRHIYWEKNWDTWDNVXGQHCXFGJKCKXDKJFTPPTBWGROZPEDZZLAEBHRVAOUIXQCOHDYGUMVHCMRNPTUSUZKTZRFNCITHRXORJLIGZUQARXRLBVEBYIZKPDEWFPSFSNBJVTBY");
    msg.state = 52U;

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
    msg.setTimeStamp(0.1018104595);
    msg.setSource(39U);
    msg.setSourceEntity(80U);
    msg.setDestination(16979U);
    msg.setDestinationEntity(138U);
    msg.name.assign("DLPFXMHTOVEBQOQTYKSJOSKYIMJKZGCNCJTQWOWYOVHDWEQLKQHIKFSUDYMX");
    msg.state = 201U;

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
    msg.setTimeStamp(0.769724479277);
    msg.setSource(24294U);
    msg.setSourceEntity(121U);
    msg.setDestination(47599U);
    msg.setDestinationEntity(94U);
    msg.name.assign("FLPUEWPGXUSHYLRWOYRQLZWFCMISA");
    msg.value = 62U;

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
    msg.setTimeStamp(0.178109456296);
    msg.setSource(32286U);
    msg.setSourceEntity(229U);
    msg.setDestination(38896U);
    msg.setDestinationEntity(202U);
    msg.name.assign("LBRAIOAXCIMGJONFMFJWZ");
    msg.value = 56U;

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
    msg.setTimeStamp(0.729774000485);
    msg.setSource(46748U);
    msg.setSourceEntity(64U);
    msg.setDestination(25102U);
    msg.setDestinationEntity(118U);
    msg.name.assign("CIJRUEWAJTTLAGQCSPJDCHNJWZKKCMUYBEGBXBLXMRMNYIEMUPJWFSLZLPNDDLSYOGPMAUKDBYVENTHYBIKFQQLAUIEMWTKRS");
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
    msg.setTimeStamp(0.649090885926);
    msg.setSource(25155U);
    msg.setSourceEntity(201U);
    msg.setDestination(22860U);
    msg.setDestinationEntity(20U);
    msg.name.assign("GLVDDVVNDROQZYCVACWOBZHHGZSTZNSOCSRLZCIALGJJNEGBPROFNBILSFALAFFEGOGNOMQJTUKZMXAEWMSXUXZPEFVKIIHBWPGFKVYBVTUQLFAXQ");

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
    msg.setTimeStamp(0.540847648534);
    msg.setSource(33294U);
    msg.setSourceEntity(53U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(217U);
    msg.name.assign("ACRXPYVEZPPNOKQZJFSQCQSHDDLOOPPRIGRROWQDGZTISBTQSTCMDOEKETRZRKZEVGYCSMGIKCTGUJNSHSNCFBGEKXTVISJTDRCBNKPIWXVBBXVZAXKHFWVJF");

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
    msg.setTimeStamp(0.783748645806);
    msg.setSource(15492U);
    msg.setSourceEntity(20U);
    msg.setDestination(44648U);
    msg.setDestinationEntity(178U);
    msg.name.assign("JMFKMBWBDZPYYJICGJTTDLIRFYHUNAMQSRMLIVVJRLFZGGXJ");

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
    msg.setTimeStamp(0.995143862654);
    msg.setSource(2546U);
    msg.setSourceEntity(91U);
    msg.setDestination(4234U);
    msg.setDestinationEntity(16U);
    msg.name.assign("IATOMFOQAXRFAUNYOQIPEEPICEXTFTSZWKYYAVGZBCRJTUOLZCOTHIXBANJSYKVOKFDIRVSFNHQWCLUQMEMHPGWHYUJPLFXXCAWBJDHQWAZBBDMPIIXQSGHMGLTXHEKHPMJHPDIQVONCWEUUKQDESFSGTYTONRODLSKQBVDXUJDONDXSLFXYKJUEZBPYBDRGNRVJMRWGSZ");
    msg.value = 158U;

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
    msg.setTimeStamp(0.659854119345);
    msg.setSource(5354U);
    msg.setSourceEntity(29U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(203U);
    msg.name.assign("RQJZMLCSTHSRBKURYMQPWEXYEZODKRXHQJJROKIUGXBHVOSEPZCAWFKPLDZCAOBZDFUEPFOJHILYGNQOMY");
    msg.value = 222U;

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
    msg.setTimeStamp(0.520677305167);
    msg.setSource(1284U);
    msg.setSourceEntity(213U);
    msg.setDestination(57356U);
    msg.setDestinationEntity(247U);
    msg.name.assign("AMFDGXVTXPHNBFQBJKUUBGIDLOFSSTOPAF");
    msg.value = 63U;

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
    msg.setTimeStamp(0.477987706384);
    msg.setSource(38362U);
    msg.setSourceEntity(22U);
    msg.setDestination(42364U);
    msg.setDestinationEntity(46U);
    msg.id = 109U;
    msg.period = 2026227783U;
    msg.duty_cycle = 1731358726U;

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
    msg.setTimeStamp(0.392562592892);
    msg.setSource(17989U);
    msg.setSourceEntity(158U);
    msg.setDestination(28655U);
    msg.setDestinationEntity(110U);
    msg.id = 59U;
    msg.period = 551616845U;
    msg.duty_cycle = 1143703251U;

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
    msg.setTimeStamp(0.0506268883961);
    msg.setSource(61955U);
    msg.setSourceEntity(13U);
    msg.setDestination(57620U);
    msg.setDestinationEntity(11U);
    msg.id = 2U;
    msg.period = 2333790394U;
    msg.duty_cycle = 3159814157U;

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
    msg.setTimeStamp(0.908663109811);
    msg.setSource(6628U);
    msg.setSourceEntity(235U);
    msg.setDestination(34189U);
    msg.setDestinationEntity(173U);
    msg.id = 7U;
    msg.period = 3921796775U;
    msg.duty_cycle = 1959555131U;

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
    msg.setTimeStamp(0.507274566107);
    msg.setSource(6367U);
    msg.setSourceEntity(57U);
    msg.setDestination(64191U);
    msg.setDestinationEntity(156U);
    msg.id = 226U;
    msg.period = 3510320394U;
    msg.duty_cycle = 3883112323U;

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
    msg.setTimeStamp(0.721129911261);
    msg.setSource(24551U);
    msg.setSourceEntity(245U);
    msg.setDestination(59955U);
    msg.setDestinationEntity(5U);
    msg.id = 242U;
    msg.period = 2231135776U;
    msg.duty_cycle = 1313082197U;

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
    msg.setTimeStamp(0.492495100129);
    msg.setSource(15773U);
    msg.setSourceEntity(178U);
    msg.setDestination(10416U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.0265051466578;
    msg.lon = 0.0775294292976;
    msg.height = 0.442255843152;
    msg.x = 0.594319363189;
    msg.y = 0.64176723296;
    msg.z = 0.153746006254;
    msg.phi = 0.00424825899208;
    msg.theta = 0.135987072273;
    msg.psi = 0.283967329377;
    msg.u = 0.795456718568;
    msg.v = 0.197553705626;
    msg.w = 0.247879642112;
    msg.vx = 0.0750130986474;
    msg.vy = 0.670767953885;
    msg.vz = 0.00483319384179;
    msg.p = 0.528604385318;
    msg.q = 0.0491940365118;
    msg.r = 0.348268777629;
    msg.depth = 0.242752418287;
    msg.alt = 0.411484429968;

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
    msg.setTimeStamp(0.0637830725324);
    msg.setSource(62130U);
    msg.setSourceEntity(226U);
    msg.setDestination(27412U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.309833681782;
    msg.lon = 0.421513226309;
    msg.height = 0.320516910583;
    msg.x = 0.717715149967;
    msg.y = 0.647183221488;
    msg.z = 0.782489570487;
    msg.phi = 0.958298866013;
    msg.theta = 0.0125850881548;
    msg.psi = 0.781322194584;
    msg.u = 0.186656959794;
    msg.v = 0.22762645125;
    msg.w = 0.178563411343;
    msg.vx = 0.130846925468;
    msg.vy = 0.229657378466;
    msg.vz = 0.530481706821;
    msg.p = 0.123268384575;
    msg.q = 0.284059181222;
    msg.r = 0.586745377417;
    msg.depth = 0.505112644518;
    msg.alt = 0.174337592173;

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
    msg.setTimeStamp(0.262742793069);
    msg.setSource(8395U);
    msg.setSourceEntity(251U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.190301490678;
    msg.lon = 0.721073910629;
    msg.height = 0.358355495123;
    msg.x = 0.292224048344;
    msg.y = 0.763594965967;
    msg.z = 0.451585524504;
    msg.phi = 0.344922539715;
    msg.theta = 0.19718208869;
    msg.psi = 0.446600665156;
    msg.u = 0.360376372775;
    msg.v = 0.342028472972;
    msg.w = 0.106810052231;
    msg.vx = 0.937115983573;
    msg.vy = 0.118764190817;
    msg.vz = 0.000211216878333;
    msg.p = 0.428282025135;
    msg.q = 0.130723249898;
    msg.r = 0.759591015673;
    msg.depth = 0.6681749011;
    msg.alt = 0.148850564618;

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
    msg.setTimeStamp(0.522216571966);
    msg.setSource(59351U);
    msg.setSourceEntity(146U);
    msg.setDestination(45848U);
    msg.setDestinationEntity(157U);
    msg.x = 0.698814533022;
    msg.y = 0.696147883019;
    msg.z = 0.564006621086;

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
    msg.setTimeStamp(0.557122201152);
    msg.setSource(13244U);
    msg.setSourceEntity(197U);
    msg.setDestination(8447U);
    msg.setDestinationEntity(45U);
    msg.x = 0.581055379595;
    msg.y = 0.689446960093;
    msg.z = 0.578895905997;

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
    msg.setTimeStamp(0.82577440011);
    msg.setSource(27069U);
    msg.setSourceEntity(72U);
    msg.setDestination(943U);
    msg.setDestinationEntity(130U);
    msg.x = 0.933173548446;
    msg.y = 0.126588466791;
    msg.z = 0.472383850903;

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
    msg.setTimeStamp(0.657865835385);
    msg.setSource(48965U);
    msg.setSourceEntity(75U);
    msg.setDestination(30582U);
    msg.setDestinationEntity(99U);
    msg.value = 0.751095283948;

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
    msg.setTimeStamp(0.0393064418813);
    msg.setSource(42920U);
    msg.setSourceEntity(166U);
    msg.setDestination(54156U);
    msg.setDestinationEntity(132U);
    msg.value = 0.79691667654;

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
    msg.setTimeStamp(0.870404848542);
    msg.setSource(16627U);
    msg.setSourceEntity(120U);
    msg.setDestination(61079U);
    msg.setDestinationEntity(113U);
    msg.value = 0.859232226906;

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
    msg.setTimeStamp(0.367861295988);
    msg.setSource(49916U);
    msg.setSourceEntity(87U);
    msg.setDestination(26944U);
    msg.setDestinationEntity(147U);
    msg.value = 0.248007668828;

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
    msg.setTimeStamp(0.237799842081);
    msg.setSource(1825U);
    msg.setSourceEntity(143U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(133U);
    msg.value = 0.828881509837;

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
    msg.setTimeStamp(0.0881281351714);
    msg.setSource(56306U);
    msg.setSourceEntity(66U);
    msg.setDestination(3633U);
    msg.setDestinationEntity(160U);
    msg.value = 0.21758541322;

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
    msg.setTimeStamp(0.0201418240568);
    msg.setSource(40690U);
    msg.setSourceEntity(33U);
    msg.setDestination(10102U);
    msg.setDestinationEntity(93U);
    msg.x = 0.426020884369;
    msg.y = 0.119146902794;
    msg.z = 0.416982505742;
    msg.phi = 0.13734360878;
    msg.theta = 0.273766854532;
    msg.psi = 0.456814924419;
    msg.p = 0.32338905382;
    msg.q = 0.195559320579;
    msg.r = 0.172125400003;
    msg.u = 0.655285481201;
    msg.v = 0.149626296746;
    msg.w = 0.123773722751;
    msg.bias_psi = 0.60589265336;
    msg.bias_r = 0.936937136447;

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
    msg.setTimeStamp(0.984570254586);
    msg.setSource(54679U);
    msg.setSourceEntity(151U);
    msg.setDestination(58154U);
    msg.setDestinationEntity(52U);
    msg.x = 0.0820874418215;
    msg.y = 0.287729481172;
    msg.z = 0.866883475996;
    msg.phi = 0.00598119190552;
    msg.theta = 0.41439252909;
    msg.psi = 0.669148163946;
    msg.p = 0.0956410844481;
    msg.q = 0.585810219331;
    msg.r = 0.813779374712;
    msg.u = 0.507591763561;
    msg.v = 0.394734192657;
    msg.w = 0.10456564055;
    msg.bias_psi = 0.817178801029;
    msg.bias_r = 0.240346193518;

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
    msg.setTimeStamp(0.111256134313);
    msg.setSource(14977U);
    msg.setSourceEntity(202U);
    msg.setDestination(59792U);
    msg.setDestinationEntity(16U);
    msg.x = 0.621922289561;
    msg.y = 0.159461724953;
    msg.z = 0.842827203779;
    msg.phi = 0.831191626846;
    msg.theta = 0.425376229401;
    msg.psi = 0.258139275152;
    msg.p = 0.0986480479381;
    msg.q = 0.804443475109;
    msg.r = 0.211001046679;
    msg.u = 0.601985163107;
    msg.v = 0.284721584609;
    msg.w = 0.724494544692;
    msg.bias_psi = 0.0188150336183;
    msg.bias_r = 0.938408309315;

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
    msg.setTimeStamp(0.220386919421);
    msg.setSource(18193U);
    msg.setSourceEntity(6U);
    msg.setDestination(9528U);
    msg.setDestinationEntity(176U);
    msg.bias_psi = 0.809376532427;
    msg.bias_r = 0.365813858941;
    msg.cog = 0.946047084899;
    msg.cyaw = 0.990790054476;
    msg.lbl_rej_level = 0.23369523724;
    msg.gps_rej_level = 0.461763584605;
    msg.custom_x = 0.299600907345;
    msg.custom_y = 0.386309198305;
    msg.custom_z = 0.135299092713;

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
    msg.setTimeStamp(0.932100329823);
    msg.setSource(14460U);
    msg.setSourceEntity(219U);
    msg.setDestination(29634U);
    msg.setDestinationEntity(69U);
    msg.bias_psi = 0.235469087324;
    msg.bias_r = 0.301330798337;
    msg.cog = 0.943779193194;
    msg.cyaw = 0.265450499394;
    msg.lbl_rej_level = 0.861200250384;
    msg.gps_rej_level = 0.932875667343;
    msg.custom_x = 0.574564072249;
    msg.custom_y = 0.479916564019;
    msg.custom_z = 0.445549243635;

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
    msg.setTimeStamp(0.873279807182);
    msg.setSource(19501U);
    msg.setSourceEntity(217U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(66U);
    msg.bias_psi = 0.31064015461;
    msg.bias_r = 0.492808624577;
    msg.cog = 0.674217548896;
    msg.cyaw = 0.0705442448335;
    msg.lbl_rej_level = 0.918782692879;
    msg.gps_rej_level = 0.286470961579;
    msg.custom_x = 0.995480295044;
    msg.custom_y = 0.750567831823;
    msg.custom_z = 0.904639676674;

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
    msg.setTimeStamp(0.01115167949);
    msg.setSource(25044U);
    msg.setSourceEntity(107U);
    msg.setDestination(51236U);
    msg.setDestinationEntity(152U);
    msg.utc_time = 0.765521366791;
    msg.reason = 148U;

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
    msg.setTimeStamp(0.124042368798);
    msg.setSource(28690U);
    msg.setSourceEntity(153U);
    msg.setDestination(57673U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.641869657851;
    msg.reason = 207U;

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
    msg.setTimeStamp(0.672150983191);
    msg.setSource(1782U);
    msg.setSourceEntity(193U);
    msg.setDestination(17557U);
    msg.setDestinationEntity(33U);
    msg.utc_time = 0.279169617818;
    msg.reason = 199U;

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
    msg.setTimeStamp(0.959594623315);
    msg.setSource(62946U);
    msg.setSourceEntity(128U);
    msg.setDestination(32481U);
    msg.setDestinationEntity(58U);
    msg.id = 176U;
    msg.range = 0.781586718968;
    msg.acceptance = 118U;

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
    msg.setTimeStamp(0.375768207813);
    msg.setSource(60625U);
    msg.setSourceEntity(218U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(137U);
    msg.id = 236U;
    msg.range = 0.572093763802;
    msg.acceptance = 90U;

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
    msg.setTimeStamp(0.722158959122);
    msg.setSource(15767U);
    msg.setSourceEntity(24U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(74U);
    msg.id = 100U;
    msg.range = 0.436089301692;
    msg.acceptance = 45U;

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
    msg.setTimeStamp(0.170809516891);
    msg.setSource(63551U);
    msg.setSourceEntity(12U);
    msg.setDestination(37381U);
    msg.setDestinationEntity(241U);
    msg.type = 122U;
    msg.reason = 234U;
    msg.value = 0.786697682972;
    msg.timestep = 0.795552649683;

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
    msg.setTimeStamp(0.788317121184);
    msg.setSource(5906U);
    msg.setSourceEntity(83U);
    msg.setDestination(11465U);
    msg.setDestinationEntity(243U);
    msg.type = 21U;
    msg.reason = 29U;
    msg.value = 0.987294773921;
    msg.timestep = 0.159880688249;

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
    msg.setTimeStamp(0.722210600859);
    msg.setSource(15665U);
    msg.setSourceEntity(216U);
    msg.setDestination(33522U);
    msg.setDestinationEntity(134U);
    msg.type = 145U;
    msg.reason = 84U;
    msg.value = 0.494078281591;
    msg.timestep = 0.899232766812;

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
    msg.setTimeStamp(0.467385751536);
    msg.setSource(2858U);
    msg.setSourceEntity(137U);
    msg.setDestination(24918U);
    msg.setDestinationEntity(119U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GUUQVGVCAVFIMNQPRBQMPZUFFWPDOJEDBVMJPUKSEERBQRLGTVWCDSNZKHZEUHHHVLAUHZTNUVEIVDOMEJGFKQCIALMJRYBYGLKENXSRTGYAYJLSOJORMALGSIXTFNWRLEUADTAOHBZBKYBQJQGAILIQSNSOWRYX");
    tmp_msg_0.lat = 0.578779528725;
    tmp_msg_0.lon = 0.133722607757;
    tmp_msg_0.depth = 0.355745725989;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.888713036959;
    msg.y = 0.830872008667;
    msg.var_x = 0.952518794088;
    msg.var_y = 0.236285826581;
    msg.distance = 0.980284456093;

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
    msg.setTimeStamp(0.0165371766785);
    msg.setSource(61967U);
    msg.setSourceEntity(191U);
    msg.setDestination(49535U);
    msg.setDestinationEntity(201U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EVQUHQQHCUOMWOXGCXAIVKFBDRWFUTDMLPFZXZLVNQUHSIGCJYBMBBPPBTSVURNATMVVWUAJCIFCLZGUCTLEFSEJUAZUAMECHNKGJPXODYIRSIIAZDXVOLBHGIVBCWWHKIZWXEGVNZFBMSKUYYQJQTWQOTBRRGACNSNLTDKQLYFKGHGXPMYEMKZXPNPOKXJFNYVQIEDHDSRPWDJSDAJOEOZS");
    tmp_msg_0.lat = 0.674238726404;
    tmp_msg_0.lon = 0.400243531164;
    tmp_msg_0.depth = 0.475490575338;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0272000209472;
    msg.y = 0.447561937303;
    msg.var_x = 0.129618116609;
    msg.var_y = 0.868132767166;
    msg.distance = 0.459825702005;

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
    msg.setTimeStamp(0.565292506338);
    msg.setSource(37311U);
    msg.setSourceEntity(70U);
    msg.setDestination(31639U);
    msg.setDestinationEntity(194U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CYSGWOKUCNWONSFOJGKHFUPKFQPYFWYCFYUCHZWFIPLFMLHQZRCZSDWVXLXKVGXIDIYDHTSXEFSWIOSYON");
    tmp_msg_0.lat = 0.237294564612;
    tmp_msg_0.lon = 0.386913280516;
    tmp_msg_0.depth = 0.764311850665;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.497309109801;
    msg.y = 0.513068713402;
    msg.var_x = 0.445509411005;
    msg.var_y = 0.261447292765;
    msg.distance = 0.568009212231;

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
    msg.setTimeStamp(0.701531812468);
    msg.setSource(53947U);
    msg.setSourceEntity(234U);
    msg.setDestination(6700U);
    msg.setDestinationEntity(179U);
    msg.state = 127U;

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
    msg.setTimeStamp(0.779054761908);
    msg.setSource(24824U);
    msg.setSourceEntity(84U);
    msg.setDestination(22363U);
    msg.setDestinationEntity(109U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.632272691718);
    msg.setSource(23559U);
    msg.setSourceEntity(135U);
    msg.setDestination(20033U);
    msg.setDestinationEntity(211U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.573003591144);
    msg.setSource(28910U);
    msg.setSourceEntity(117U);
    msg.setDestination(46883U);
    msg.setDestinationEntity(254U);
    msg.x = 0.172249889512;
    msg.y = 0.829233042565;
    msg.z = 0.528586158552;

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
    msg.setTimeStamp(0.807389853571);
    msg.setSource(29937U);
    msg.setSourceEntity(229U);
    msg.setDestination(47741U);
    msg.setDestinationEntity(8U);
    msg.x = 0.891174408512;
    msg.y = 0.143286640048;
    msg.z = 0.0896626212053;

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
    msg.setTimeStamp(0.142101313439);
    msg.setSource(56256U);
    msg.setSourceEntity(223U);
    msg.setDestination(23873U);
    msg.setDestinationEntity(163U);
    msg.x = 0.0612548728544;
    msg.y = 0.0450628497358;
    msg.z = 0.856061909155;

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
    msg.setTimeStamp(0.914969858896);
    msg.setSource(42675U);
    msg.setSourceEntity(212U);
    msg.setDestination(37073U);
    msg.setDestinationEntity(122U);
    msg.value = 0.641424148503;

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
    msg.setTimeStamp(0.945836909028);
    msg.setSource(33082U);
    msg.setSourceEntity(22U);
    msg.setDestination(2658U);
    msg.setDestinationEntity(179U);
    msg.value = 0.388487325431;

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
    msg.setTimeStamp(0.928302532889);
    msg.setSource(7816U);
    msg.setSourceEntity(186U);
    msg.setDestination(52750U);
    msg.setDestinationEntity(79U);
    msg.value = 0.640295900112;

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
    msg.setTimeStamp(0.224259406128);
    msg.setSource(36497U);
    msg.setSourceEntity(47U);
    msg.setDestination(9337U);
    msg.setDestinationEntity(194U);
    msg.value = 0.1293011634;
    msg.z_units = 246U;

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
    msg.setTimeStamp(0.645831803149);
    msg.setSource(601U);
    msg.setSourceEntity(239U);
    msg.setDestination(4803U);
    msg.setDestinationEntity(74U);
    msg.value = 0.325928424452;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.266584205219);
    msg.setSource(7477U);
    msg.setSourceEntity(4U);
    msg.setDestination(14257U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0251664734581;
    msg.z_units = 139U;

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
    msg.setTimeStamp(0.88318173316);
    msg.setSource(53804U);
    msg.setSourceEntity(176U);
    msg.setDestination(19542U);
    msg.setDestinationEntity(36U);
    msg.value = 0.59674900041;
    msg.speed_units = 181U;

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
    msg.setTimeStamp(0.33332713596);
    msg.setSource(23586U);
    msg.setSourceEntity(29U);
    msg.setDestination(1910U);
    msg.setDestinationEntity(201U);
    msg.value = 0.902689486328;
    msg.speed_units = 225U;

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
    msg.setTimeStamp(0.246630260583);
    msg.setSource(7625U);
    msg.setSourceEntity(111U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(28U);
    msg.value = 0.0638541812149;
    msg.speed_units = 50U;

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
    msg.setTimeStamp(0.357060571207);
    msg.setSource(62744U);
    msg.setSourceEntity(243U);
    msg.setDestination(58683U);
    msg.setDestinationEntity(55U);
    msg.value = 0.243284047946;

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
    msg.setTimeStamp(0.929554683453);
    msg.setSource(34351U);
    msg.setSourceEntity(225U);
    msg.setDestination(6506U);
    msg.setDestinationEntity(126U);
    msg.value = 0.333536047509;

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
    msg.setTimeStamp(0.190268549416);
    msg.setSource(9193U);
    msg.setSourceEntity(208U);
    msg.setDestination(24202U);
    msg.setDestinationEntity(191U);
    msg.value = 0.0343230639595;

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
    msg.setTimeStamp(0.779634349258);
    msg.setSource(37936U);
    msg.setSourceEntity(249U);
    msg.setDestination(11061U);
    msg.setDestinationEntity(238U);
    msg.value = 0.0462531743662;

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
    msg.setTimeStamp(0.587879317098);
    msg.setSource(15225U);
    msg.setSourceEntity(101U);
    msg.setDestination(24095U);
    msg.setDestinationEntity(218U);
    msg.value = 0.461487995728;

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
    msg.setTimeStamp(0.873257217245);
    msg.setSource(30588U);
    msg.setSourceEntity(224U);
    msg.setDestination(23876U);
    msg.setDestinationEntity(193U);
    msg.value = 0.345348761495;

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
    msg.setTimeStamp(0.490249289056);
    msg.setSource(14225U);
    msg.setSourceEntity(74U);
    msg.setDestination(49310U);
    msg.setDestinationEntity(44U);
    msg.value = 0.44387927635;

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
    msg.setTimeStamp(0.488512579957);
    msg.setSource(32960U);
    msg.setSourceEntity(90U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(59U);
    msg.value = 0.411158153486;

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
    msg.setTimeStamp(0.286906267921);
    msg.setSource(25540U);
    msg.setSourceEntity(162U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(0U);
    msg.value = 0.424579822901;

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
    msg.setTimeStamp(0.108834468114);
    msg.setSource(35956U);
    msg.setSourceEntity(33U);
    msg.setDestination(54312U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 261874632U;
    msg.start_lat = 0.873471641155;
    msg.start_lon = 0.026508733596;
    msg.start_z = 0.467236770128;
    msg.start_z_units = 8U;
    msg.end_lat = 0.255768601859;
    msg.end_lon = 0.208470808372;
    msg.end_z = 0.158571675046;
    msg.end_z_units = 219U;
    msg.speed = 0.813415123672;
    msg.speed_units = 203U;
    msg.lradius = 0.062417515778;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.536579589153);
    msg.setSource(11249U);
    msg.setSourceEntity(117U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(112U);
    msg.path_ref = 173708945U;
    msg.start_lat = 0.594420066343;
    msg.start_lon = 0.701386500448;
    msg.start_z = 0.0702322351628;
    msg.start_z_units = 6U;
    msg.end_lat = 0.984837267989;
    msg.end_lon = 0.191588988519;
    msg.end_z = 0.949680809895;
    msg.end_z_units = 162U;
    msg.speed = 0.351750309672;
    msg.speed_units = 121U;
    msg.lradius = 0.456831673958;
    msg.flags = 228U;

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
    msg.setTimeStamp(0.687206593925);
    msg.setSource(38826U);
    msg.setSourceEntity(37U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(216U);
    msg.path_ref = 373061448U;
    msg.start_lat = 0.170661313445;
    msg.start_lon = 0.765595414277;
    msg.start_z = 0.726347301083;
    msg.start_z_units = 23U;
    msg.end_lat = 0.316208603771;
    msg.end_lon = 0.941997040397;
    msg.end_z = 0.228939286059;
    msg.end_z_units = 246U;
    msg.speed = 0.224405168906;
    msg.speed_units = 40U;
    msg.lradius = 0.384690620786;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.961267129023);
    msg.setSource(50820U);
    msg.setSourceEntity(155U);
    msg.setDestination(22568U);
    msg.setDestinationEntity(44U);
    msg.x = 0.731809867493;
    msg.y = 0.478849012134;
    msg.z = 0.335549507285;
    msg.k = 0.081013948702;
    msg.m = 0.45497278787;
    msg.n = 0.341022672596;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.824479734104);
    msg.setSource(13717U);
    msg.setSourceEntity(110U);
    msg.setDestination(18108U);
    msg.setDestinationEntity(48U);
    msg.x = 0.834896507328;
    msg.y = 0.911271646477;
    msg.z = 0.63570965864;
    msg.k = 0.358788015392;
    msg.m = 0.933778603754;
    msg.n = 0.480508078391;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.40187854492);
    msg.setSource(20285U);
    msg.setSourceEntity(58U);
    msg.setDestination(47392U);
    msg.setDestinationEntity(98U);
    msg.x = 0.146950450216;
    msg.y = 0.921613208473;
    msg.z = 0.71875058723;
    msg.k = 0.849562074849;
    msg.m = 0.335204591676;
    msg.n = 0.600075864233;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.00809688260074);
    msg.setSource(55335U);
    msg.setSourceEntity(14U);
    msg.setDestination(44541U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0615623916275;

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
    msg.setTimeStamp(0.077190620551);
    msg.setSource(9440U);
    msg.setSourceEntity(77U);
    msg.setDestination(48957U);
    msg.setDestinationEntity(244U);
    msg.value = 0.810121815667;

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
    msg.setTimeStamp(0.475630975995);
    msg.setSource(58174U);
    msg.setSourceEntity(254U);
    msg.setDestination(35777U);
    msg.setDestinationEntity(188U);
    msg.value = 0.976377523084;

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
    msg.setTimeStamp(0.907156683807);
    msg.setSource(47966U);
    msg.setSourceEntity(199U);
    msg.setDestination(48287U);
    msg.setDestinationEntity(218U);
    msg.u = 0.79062974758;
    msg.v = 0.837584172303;
    msg.w = 0.384657151768;
    msg.p = 0.80762788712;
    msg.q = 0.0925684729203;
    msg.r = 0.969488399822;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.505127071032);
    msg.setSource(50603U);
    msg.setSourceEntity(57U);
    msg.setDestination(45735U);
    msg.setDestinationEntity(181U);
    msg.u = 0.130630421605;
    msg.v = 0.778784975529;
    msg.w = 0.815312222419;
    msg.p = 0.515352646647;
    msg.q = 0.304482004931;
    msg.r = 0.674957424205;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.576485346725);
    msg.setSource(64166U);
    msg.setSourceEntity(25U);
    msg.setDestination(16254U);
    msg.setDestinationEntity(13U);
    msg.u = 0.388756169862;
    msg.v = 0.86695914979;
    msg.w = 0.00968971613609;
    msg.p = 0.667017376876;
    msg.q = 0.0889385712249;
    msg.r = 0.807796216996;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.0198360711544);
    msg.setSource(38718U);
    msg.setSourceEntity(190U);
    msg.setDestination(3664U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 3705645588U;
    msg.start_lat = 0.0718075113413;
    msg.start_lon = 0.479684145633;
    msg.start_z = 0.918205467666;
    msg.start_z_units = 79U;
    msg.end_lat = 0.349885312275;
    msg.end_lon = 0.281871065083;
    msg.end_z = 0.269340284049;
    msg.end_z_units = 96U;
    msg.lradius = 0.544879797282;
    msg.flags = 220U;
    msg.x = 0.903920027574;
    msg.y = 0.346949203393;
    msg.z = 0.114941503395;
    msg.vx = 0.466906405241;
    msg.vy = 0.409338206369;
    msg.vz = 0.383304011222;
    msg.course_error = 0.177870636321;
    msg.eta = 6197U;

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
    msg.setTimeStamp(0.802980923702);
    msg.setSource(13800U);
    msg.setSourceEntity(27U);
    msg.setDestination(39134U);
    msg.setDestinationEntity(4U);
    msg.path_ref = 2210176292U;
    msg.start_lat = 0.678729332765;
    msg.start_lon = 0.319560434805;
    msg.start_z = 0.547707052128;
    msg.start_z_units = 52U;
    msg.end_lat = 0.861260902841;
    msg.end_lon = 0.544298414003;
    msg.end_z = 0.200946433711;
    msg.end_z_units = 5U;
    msg.lradius = 0.564599170657;
    msg.flags = 34U;
    msg.x = 0.597007668025;
    msg.y = 0.0450422145981;
    msg.z = 0.694337169134;
    msg.vx = 0.0549661381664;
    msg.vy = 0.223029069116;
    msg.vz = 0.794509589637;
    msg.course_error = 0.555689496155;
    msg.eta = 40892U;

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
    msg.setTimeStamp(0.065273705833);
    msg.setSource(1494U);
    msg.setSourceEntity(101U);
    msg.setDestination(42957U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 2124244719U;
    msg.start_lat = 0.322403611691;
    msg.start_lon = 0.648883643027;
    msg.start_z = 0.832810209528;
    msg.start_z_units = 123U;
    msg.end_lat = 0.334592504942;
    msg.end_lon = 0.369740410052;
    msg.end_z = 0.32716884233;
    msg.end_z_units = 5U;
    msg.lradius = 0.0409192024338;
    msg.flags = 140U;
    msg.x = 0.260879425995;
    msg.y = 0.214142776701;
    msg.z = 0.188619169945;
    msg.vx = 0.602368246528;
    msg.vy = 0.546723248036;
    msg.vz = 0.676068974715;
    msg.course_error = 0.443243763718;
    msg.eta = 36891U;

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
    msg.setTimeStamp(0.402532395289);
    msg.setSource(64608U);
    msg.setSourceEntity(27U);
    msg.setDestination(2831U);
    msg.setDestinationEntity(200U);
    msg.k = 0.189799723496;
    msg.m = 0.56418855949;
    msg.n = 0.72491868983;

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
    msg.setTimeStamp(0.386166588152);
    msg.setSource(65012U);
    msg.setSourceEntity(90U);
    msg.setDestination(45375U);
    msg.setDestinationEntity(208U);
    msg.k = 0.15562882632;
    msg.m = 0.261102454072;
    msg.n = 0.176988398535;

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
    msg.setTimeStamp(0.174426489493);
    msg.setSource(39329U);
    msg.setSourceEntity(27U);
    msg.setDestination(6718U);
    msg.setDestinationEntity(127U);
    msg.k = 0.62973424667;
    msg.m = 0.657299316252;
    msg.n = 0.477904588952;

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
    msg.setTimeStamp(0.883033574732);
    msg.setSource(14219U);
    msg.setSourceEntity(6U);
    msg.setDestination(50980U);
    msg.setDestinationEntity(32U);
    msg.p = 0.426161684868;
    msg.i = 0.193125308855;
    msg.d = 0.496735105998;
    msg.a = 0.0706981903115;

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
    msg.setTimeStamp(0.17752341425);
    msg.setSource(9443U);
    msg.setSourceEntity(93U);
    msg.setDestination(46620U);
    msg.setDestinationEntity(74U);
    msg.p = 0.128714493506;
    msg.i = 0.00422619315242;
    msg.d = 4.326275582e-05;
    msg.a = 0.0421472489844;

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
    msg.setTimeStamp(0.582212758402);
    msg.setSource(3703U);
    msg.setSourceEntity(8U);
    msg.setDestination(21300U);
    msg.setDestinationEntity(148U);
    msg.p = 0.749342873414;
    msg.i = 0.085246195373;
    msg.d = 0.491765908495;
    msg.a = 0.124223421569;

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
    msg.setTimeStamp(0.256194137476);
    msg.setSource(24567U);
    msg.setSourceEntity(91U);
    msg.setDestination(50714U);
    msg.setDestinationEntity(171U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.693802301136);
    msg.setSource(41950U);
    msg.setSourceEntity(102U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(214U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.938441200799);
    msg.setSource(34201U);
    msg.setSourceEntity(107U);
    msg.setDestination(50355U);
    msg.setDestinationEntity(154U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.79345689549);
    msg.setSource(7943U);
    msg.setSourceEntity(23U);
    msg.setDestination(54742U);
    msg.setDestinationEntity(35U);
    msg.timeout = 47995U;
    msg.lat = 0.700114943011;
    msg.lon = 0.696988156238;
    msg.z = 0.205933842685;
    msg.z_units = 119U;
    msg.speed = 0.511836459113;
    msg.speed_units = 185U;
    msg.roll = 0.180288610151;
    msg.pitch = 0.0196532704069;
    msg.yaw = 0.280280622065;
    msg.custom.assign("DYGBLQODCP");

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
    msg.setTimeStamp(0.738464802481);
    msg.setSource(34434U);
    msg.setSourceEntity(145U);
    msg.setDestination(15391U);
    msg.setDestinationEntity(240U);
    msg.timeout = 56739U;
    msg.lat = 0.169116018946;
    msg.lon = 0.428679957079;
    msg.z = 0.417212859886;
    msg.z_units = 40U;
    msg.speed = 0.0287308663527;
    msg.speed_units = 135U;
    msg.roll = 0.818534308778;
    msg.pitch = 0.75649243857;
    msg.yaw = 0.418173812861;
    msg.custom.assign("NRFOGOREFGQXVRIRGLIHHPFNWHIVVUDHSCHEEDFJJECOUJYDQYHUGRWCFPSRNOQMJZFBP");

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
    msg.setTimeStamp(0.53989898447);
    msg.setSource(22763U);
    msg.setSourceEntity(220U);
    msg.setDestination(20884U);
    msg.setDestinationEntity(187U);
    msg.timeout = 54908U;
    msg.lat = 0.316691141384;
    msg.lon = 0.393360812272;
    msg.z = 0.129180906691;
    msg.z_units = 199U;
    msg.speed = 0.199556700354;
    msg.speed_units = 230U;
    msg.roll = 0.541478539197;
    msg.pitch = 0.592862384224;
    msg.yaw = 0.0699739207915;
    msg.custom.assign("FRXZQFXBDCRUNYVXXHYRDZSOTFIGUDLPIVOCPDRKLUGXHUECIIBUEMFJQMRWIHEYZDZZGLQTSJSMMPYKOCYWXVOXREJZJATTJBQXUCOUNSZZSJLVQGJEDEJMZYSGIUXLFIKGNAOTYADERQKINQFZCP");

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
    msg.setTimeStamp(0.846719485279);
    msg.setSource(34589U);
    msg.setSourceEntity(163U);
    msg.setDestination(26771U);
    msg.setDestinationEntity(246U);
    msg.timeout = 64905U;
    msg.lat = 0.120303875038;
    msg.lon = 0.431243384805;
    msg.z = 0.0339261025915;
    msg.z_units = 63U;
    msg.speed = 0.260816966031;
    msg.speed_units = 108U;
    msg.duration = 19282U;
    msg.radius = 0.984090427781;
    msg.flags = 73U;
    msg.custom.assign("XSCBOHUUWIKLTGJCYGNVVWQFDLHHNBSQWYRWKSKZKZMUWAUCCXLDPFEVGDTAKPCMPZWVXTFCFRBEQWLSGKOELRUILQRJQWDPICOXDPYYJMMBHUUMCBTNMOQYJDNSGTEGNMFPFCRJAYEXMUAFHGTEQNDQWTUZRDBPBSZXOALIIEPHLAGAVDZITVRAQZSAKMYXOSIFSETLTJRJHJFSO");

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
    msg.setTimeStamp(0.463965308696);
    msg.setSource(7650U);
    msg.setSourceEntity(2U);
    msg.setDestination(25590U);
    msg.setDestinationEntity(208U);
    msg.timeout = 6917U;
    msg.lat = 0.0247267099427;
    msg.lon = 0.329403488697;
    msg.z = 0.956933643574;
    msg.z_units = 111U;
    msg.speed = 0.274436412633;
    msg.speed_units = 88U;
    msg.duration = 16783U;
    msg.radius = 0.893741355782;
    msg.flags = 9U;
    msg.custom.assign("OSFMCXIASMKPGCUXLPNGWVNAFMBSEGGHKJIUCGKHTLESYQQPNTKLJGXFTDDUZRDSDYAEGNUE");

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
    msg.setTimeStamp(0.906550557232);
    msg.setSource(58723U);
    msg.setSourceEntity(91U);
    msg.setDestination(39406U);
    msg.setDestinationEntity(251U);
    msg.timeout = 11413U;
    msg.lat = 0.810957527214;
    msg.lon = 0.549962059903;
    msg.z = 0.853284142451;
    msg.z_units = 79U;
    msg.speed = 0.642298657756;
    msg.speed_units = 59U;
    msg.duration = 23763U;
    msg.radius = 0.468015372856;
    msg.flags = 145U;
    msg.custom.assign("RSAXTXXKSWQBZTLIBMMPKQGNEMHX");

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
    msg.setTimeStamp(0.733271305729);
    msg.setSource(33705U);
    msg.setSourceEntity(46U);
    msg.setDestination(18332U);
    msg.setDestinationEntity(99U);
    msg.custom.assign("CYCKXFBMJXQVSAXHWFWUHBJPAZXPTOJAYPQKRD");

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
    msg.setTimeStamp(0.161703413257);
    msg.setSource(855U);
    msg.setSourceEntity(139U);
    msg.setDestination(121U);
    msg.setDestinationEntity(203U);
    msg.custom.assign("JEUJLSMIFWGOLBUOIMNIHWTLBRYFAHVCKOMPUDJKYNNWDPWIBOBTWRGVSJUNUXATDMAEOVGHNFHRLQMVJAKQUVHBSNGPEOYCQRWZOTGETKIZYISKBABWNCIQMOSIJMSCXVATNGAGAZQITKKJMREYJKXDNRXWTACFHZXXEDYQXC");

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
    msg.setTimeStamp(0.26622074415);
    msg.setSource(29288U);
    msg.setSourceEntity(0U);
    msg.setDestination(35344U);
    msg.setDestinationEntity(56U);
    msg.custom.assign("MZAODLLBCCGRYFJPXVVQURJBXFVFSYKEANKIDXHQLYABUWICQXAIMLTXEQLWCZYPZCRIUZOYATNTYOUSCGJJCKETPSKYPOMTNEDNSEIVHOGSLTVHFFMNWRJESJAKWTKQBHDZROBMKQWBJLJZNPXRQRHHGMRYGVGLWDAKPZNUWUMGHJJGXOOBDIFESWIBPHCPNIDODVVZQQXSFXWFAUMMKDEPZERTKG");

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
    msg.setTimeStamp(0.209653491018);
    msg.setSource(32694U);
    msg.setSourceEntity(82U);
    msg.setDestination(34306U);
    msg.setDestinationEntity(156U);
    msg.timeout = 40558U;
    msg.lat = 0.884275661415;
    msg.lon = 0.0676013456002;
    msg.z = 0.256750992462;
    msg.z_units = 19U;
    msg.duration = 33069U;
    msg.speed = 0.727167173837;
    msg.speed_units = 19U;
    msg.type = 235U;
    msg.radius = 0.771062005296;
    msg.length = 0.857797229843;
    msg.bearing = 0.669728620166;
    msg.direction = 223U;
    msg.custom.assign("YMVSQKCUGKHDVLYJTRVALAYKYHZNKJZPEGJGMWZKKMWKBOGSTIOHFPRTUAUZRPSIUAXEELVVAQGHDZNXHINDBTPQNBHMGYDBBDNWVYGCNEOVNCTBFSBHJMXDTN");

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
    msg.setTimeStamp(0.595616793272);
    msg.setSource(26230U);
    msg.setSourceEntity(130U);
    msg.setDestination(6053U);
    msg.setDestinationEntity(246U);
    msg.timeout = 52714U;
    msg.lat = 0.181726536001;
    msg.lon = 0.587039261573;
    msg.z = 0.746481102233;
    msg.z_units = 249U;
    msg.duration = 6337U;
    msg.speed = 0.670316087173;
    msg.speed_units = 137U;
    msg.type = 254U;
    msg.radius = 0.367623772548;
    msg.length = 0.457197241326;
    msg.bearing = 0.800125714952;
    msg.direction = 240U;
    msg.custom.assign("UTFAKRZBHLEGRBJACAUSGPOVKGQSOUWYZXTLPLNJLJQCKQAQJFEVRSIDXXUZNHTYWQNXFDKQJRVIOSTTHDYGWYDBUPHBMLAIHDSGPBZZJNUMGDVIEONROCHLIYXIXOBIKGLMAPTDPFDSCWXWYEDXZBMTFZMUFKRZBIKWAMA");

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
    msg.setTimeStamp(0.0878503853059);
    msg.setSource(35205U);
    msg.setSourceEntity(251U);
    msg.setDestination(40512U);
    msg.setDestinationEntity(64U);
    msg.timeout = 22196U;
    msg.lat = 0.142027574708;
    msg.lon = 0.628659633058;
    msg.z = 0.0264806599197;
    msg.z_units = 232U;
    msg.duration = 54671U;
    msg.speed = 0.188054746412;
    msg.speed_units = 96U;
    msg.type = 172U;
    msg.radius = 0.735719568255;
    msg.length = 0.190008964622;
    msg.bearing = 0.0537442664024;
    msg.direction = 173U;
    msg.custom.assign("LKCRIVXMGJBJDKLLEHDNFZEXDRNVXZURQQKFXQGPMJOCYXN");

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
    msg.setTimeStamp(0.573049280278);
    msg.setSource(47950U);
    msg.setSourceEntity(183U);
    msg.setDestination(31815U);
    msg.setDestinationEntity(1U);
    msg.duration = 26307U;
    msg.custom.assign("PTMDBIMQRFBPGUOEFMGGFFKNCFSHXKZPNQZWORVIDRFRBCKWZGHMIZEESTQHPNGRQYYCUNOLWJCEZUTBHAGVYAAJWLMVTDYHKQVRDJWIDPB");

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
    msg.setTimeStamp(0.12359019033);
    msg.setSource(30652U);
    msg.setSourceEntity(159U);
    msg.setDestination(22932U);
    msg.setDestinationEntity(103U);
    msg.duration = 47298U;
    msg.custom.assign("EPLDJQLMMUOLDKQCZGPKWDTKOKUHLSYPYOAAMR");

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
    msg.setTimeStamp(0.0967340854396);
    msg.setSource(12551U);
    msg.setSourceEntity(249U);
    msg.setDestination(3093U);
    msg.setDestinationEntity(1U);
    msg.duration = 7140U;
    msg.custom.assign("AWVPNCZCEWIXUWSBCQORVNQAJKTKVOFBKPHMILBUXUNWXSGQXDAACVDZTFGKRYNMLJPJYLBVHVFMDFIRMLRJKUXUXLKDOGSWHSUCKGXUVNTIVDZNCTPIEAEBBRLOPTHWZSKRJFZLQHJYZTRPPWYBFYQOVQEIMYUDBEEJYNTMSM");

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
    msg.setTimeStamp(0.369262022338);
    msg.setSource(16598U);
    msg.setSourceEntity(29U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(244U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.451726430391;
    msg.control.set(tmp_msg_0);
    msg.duration = 25317U;
    msg.custom.assign("YHXCDAVLOSPVXGIKIMKRYQNJGJSVNJLJVPLB");

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
    msg.setTimeStamp(0.634743948119);
    msg.setSource(54778U);
    msg.setSourceEntity(241U);
    msg.setDestination(39036U);
    msg.setDestinationEntity(234U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.914854974446;
    msg.control.set(tmp_msg_0);
    msg.duration = 7484U;
    msg.custom.assign("EUUUKYLIAEGEJSTFODCTXFWWOCAGPWQGWZQHQCKJXNZPVVJERVMNTQWLHYAVIIMVSCKWYUAPLANBFCJCYGCOZFBIQLOSHHNPESTPDDXPWQKBBDTYMKURMEEBKDHQKEBZNUURXPAXPWH");

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
    msg.setTimeStamp(0.749457783363);
    msg.setSource(53518U);
    msg.setSourceEntity(189U);
    msg.setDestination(2891U);
    msg.setDestinationEntity(221U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.695046260714;
    msg.control.set(tmp_msg_0);
    msg.duration = 32984U;
    msg.custom.assign("IXXYZDSZPVSBADOQJERYEMENLUJYCWQRMEYYYLAKKOXKRWEMANKNTGWDGJUYVQQMDYEXPVTIFSHAPAIRBQBZUWNRYKCUBEPPIHLXMVKUOSFJDUTQDLGIAZFPCECBFELJGFOTJLGHOTISWAMDHTWRNPGDFSCWOABSGXFORTHSIKCCKUZZWWRVRATNWAXVIZDOEIUQIBKLBNVHUZLGMQMGJOXYOK");

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
    msg.setTimeStamp(0.764527146745);
    msg.setSource(25247U);
    msg.setSourceEntity(65U);
    msg.setDestination(49452U);
    msg.setDestinationEntity(207U);
    msg.timeout = 37324U;
    msg.lat = 0.072122704785;
    msg.lon = 0.165498591801;
    msg.z = 0.00131295310924;
    msg.z_units = 104U;
    msg.speed = 0.171682496996;
    msg.speed_units = 199U;
    msg.bearing = 0.196454513696;
    msg.cross_angle = 0.494247161276;
    msg.width = 0.678552062341;
    msg.length = 0.744903335611;
    msg.hstep = 0.524731381418;
    msg.coff = 177U;
    msg.alternation = 65U;
    msg.flags = 246U;
    msg.custom.assign("GKHEWUHGWLPDSLMTIDFDNHFPWORALMJDZAFICAPXFMMUERSJGBNLUWXONQCGSINCVEDCXABOVJPZMPXORLSIVWRZRVQJHHJBGUERIJBCLZQTZKQXBUWBINVDVQZEFFXOZFOANKTHQKXOUPWYLTABEABLNHBTVKYZSMUAMEPSRLVFFGOEWVDMTYDAYISPKCSWIRUHTCIOPAJKNYCJRGVHQYXGQYW");

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
    msg.setTimeStamp(0.68142561906);
    msg.setSource(4132U);
    msg.setSourceEntity(177U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(235U);
    msg.timeout = 60989U;
    msg.lat = 0.277029498678;
    msg.lon = 0.37390110484;
    msg.z = 0.772694246252;
    msg.z_units = 38U;
    msg.speed = 0.220165866135;
    msg.speed_units = 15U;
    msg.bearing = 0.615864523828;
    msg.cross_angle = 0.40109132753;
    msg.width = 0.381420105125;
    msg.length = 0.391468770692;
    msg.hstep = 0.772802484569;
    msg.coff = 106U;
    msg.alternation = 225U;
    msg.flags = 44U;
    msg.custom.assign("SKNFYZJBKWNXO");

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
    msg.setTimeStamp(0.177171787856);
    msg.setSource(35897U);
    msg.setSourceEntity(112U);
    msg.setDestination(53179U);
    msg.setDestinationEntity(228U);
    msg.timeout = 35548U;
    msg.lat = 0.436010513374;
    msg.lon = 0.120457928093;
    msg.z = 0.53226401152;
    msg.z_units = 49U;
    msg.speed = 0.131669748963;
    msg.speed_units = 52U;
    msg.bearing = 0.219505141029;
    msg.cross_angle = 0.687684719266;
    msg.width = 0.84304357418;
    msg.length = 0.755556742402;
    msg.hstep = 0.920016915463;
    msg.coff = 36U;
    msg.alternation = 212U;
    msg.flags = 184U;
    msg.custom.assign("JIVMKJHPJQPYLLRBOEHXACOHTDYZWSNVYFXILKWBPTDCEQQUMVAPWOYSCYGVDPBNDFPPACZZGRQRJHZGXLEWJSIVUAKAACRJHNVJSTGXILFSGBGMUQSDHKMLDGHINRUIZNKUXIUBIHUKOECGBFVPNSFCMTAATQPCSMEKVNAOWUZEGDJVFEZOWFRRDXUIFWYMPNRYQRKFNDIYEBUOXYOLHTWMZQKKJEEMMGFQSQTWSRBCADNTLLVWBXX");

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
    msg.setTimeStamp(0.832821785118);
    msg.setSource(48883U);
    msg.setSourceEntity(152U);
    msg.setDestination(31626U);
    msg.setDestinationEntity(198U);
    msg.timeout = 36430U;
    msg.lat = 0.938062591257;
    msg.lon = 0.160254119043;
    msg.z = 0.468669821727;
    msg.z_units = 173U;
    msg.speed = 0.157991165516;
    msg.speed_units = 173U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.278184686322;
    tmp_msg_0.y = 0.770226884901;
    tmp_msg_0.z = 0.900006065149;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QLNLCJZTDQLYTGBMTPYVSFFKIOCYEIJBICPRNYEKIFHVMP");

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
    msg.setTimeStamp(0.31241390278);
    msg.setSource(55649U);
    msg.setSourceEntity(46U);
    msg.setDestination(37072U);
    msg.setDestinationEntity(119U);
    msg.timeout = 38583U;
    msg.lat = 0.932553369262;
    msg.lon = 0.412390852019;
    msg.z = 0.190660339873;
    msg.z_units = 117U;
    msg.speed = 0.894176111595;
    msg.speed_units = 144U;
    msg.custom.assign("ERZJIHSUGOYITFOJFPVXXXKDFYHPPLWWYGMOZLINCQWMEYABKJTGQZBEDJVMSOINTCLXFHOMNRYVQHLWHRBZUSRQUNBMCMDTUJZFQDRXWHRPNDNIVLLURFCZEREKUOLTKUENAXHULEYMXGCTHADMWYCQVLFQVOSQDTJCAEYISAIBFTSRZOWAUNJPLKG");

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
    msg.setTimeStamp(0.274738342913);
    msg.setSource(3909U);
    msg.setSourceEntity(238U);
    msg.setDestination(8368U);
    msg.setDestinationEntity(227U);
    msg.timeout = 32941U;
    msg.lat = 0.409519526201;
    msg.lon = 0.162291727121;
    msg.z = 0.787653759911;
    msg.z_units = 7U;
    msg.speed = 0.0939207783968;
    msg.speed_units = 98U;
    msg.custom.assign("AIMUXRACDQDCPFFCJWIBOCPKLNYWGREYFQLWORUUPNPMUHGEHSKIBHQYMQVGCJZJZFTZIHVKYVIPAGZXKOLSBVXZNWQRWPEMARSUHPTBUORCVTJMTSTLYRXGUCINOOUPDTLONGDGXALZNNDHHVJEXVKZOKSZMGEBFJYRBLXSWSQQFZXWSDJECWMWYSOUFYDAUDJPNHTTMVFYKCHYEKN");

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
    msg.setTimeStamp(0.566958645457);
    msg.setSource(60093U);
    msg.setSourceEntity(225U);
    msg.setDestination(41034U);
    msg.setDestinationEntity(226U);
    msg.x = 0.288576960018;
    msg.y = 0.490260353988;
    msg.z = 0.562723781157;

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
    msg.setTimeStamp(0.0126813599729);
    msg.setSource(7454U);
    msg.setSourceEntity(168U);
    msg.setDestination(48055U);
    msg.setDestinationEntity(52U);
    msg.x = 0.868972909022;
    msg.y = 0.493521470994;
    msg.z = 0.454921001477;

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
    msg.setTimeStamp(0.187355892115);
    msg.setSource(7422U);
    msg.setSourceEntity(29U);
    msg.setDestination(41296U);
    msg.setDestinationEntity(143U);
    msg.x = 0.823349237915;
    msg.y = 0.610253766454;
    msg.z = 0.757709290062;

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
    msg.setTimeStamp(0.350549912911);
    msg.setSource(61833U);
    msg.setSourceEntity(122U);
    msg.setDestination(6823U);
    msg.setDestinationEntity(253U);
    msg.timeout = 25736U;
    msg.lat = 0.587343758139;
    msg.lon = 0.543435415951;
    msg.z = 0.925001725131;
    msg.z_units = 114U;
    msg.amplitude = 0.0726593054202;
    msg.pitch = 0.341855860797;
    msg.speed = 0.0532657118391;
    msg.speed_units = 225U;
    msg.custom.assign("LIPHWTTJBAVOLNSKIJZBDHNJQUWECWRVKHQAQDSXSTCGXRHQEJKNSTWASPOEYUTXRYDGRRAAZTSSLBWJYAUYKBXNBIV");

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
    msg.setTimeStamp(0.430390624324);
    msg.setSource(31831U);
    msg.setSourceEntity(104U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(222U);
    msg.timeout = 48295U;
    msg.lat = 0.956371375396;
    msg.lon = 0.134907033669;
    msg.z = 0.331519499676;
    msg.z_units = 228U;
    msg.amplitude = 0.936882277319;
    msg.pitch = 0.58926783361;
    msg.speed = 0.676317153215;
    msg.speed_units = 145U;
    msg.custom.assign("QCXGFGDORNFFBZPKLTKYKSMNIJBQJITZPNVRUSYTKUBLCXWNANWUVEGTDQALVYZPCKTMHRRGYLEWZUIHEDGLEXSHSAIDHHFIVVYOTQZMMFJHCBRMRFGIZXVXVWNMALPZOJTLCNIEHMACBOQJFXSIJYYGTRXPJQIDNMWWKQVJEATKPPOQGRBUDJUJPWOKVPHYNDUBVBQCE");

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
    msg.setTimeStamp(0.819828546253);
    msg.setSource(38732U);
    msg.setSourceEntity(79U);
    msg.setDestination(27105U);
    msg.setDestinationEntity(204U);
    msg.timeout = 29679U;
    msg.lat = 0.890052356243;
    msg.lon = 0.45455151667;
    msg.z = 0.733397392926;
    msg.z_units = 79U;
    msg.amplitude = 0.43273755104;
    msg.pitch = 0.848380430907;
    msg.speed = 0.672645556967;
    msg.speed_units = 44U;
    msg.custom.assign("IUAVBWXDMTIIWXRLVDVXGNKPTEVILRQOHUBADTAJBLPCQCEGEONYNMGQTGSAZOEMQCLBJMAMUNPVP");

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
    msg.setTimeStamp(0.659656157932);
    msg.setSource(25318U);
    msg.setSourceEntity(78U);
    msg.setDestination(31756U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.810879024383);
    msg.setSource(13084U);
    msg.setSourceEntity(39U);
    msg.setDestination(12139U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.685653412903);
    msg.setSource(37154U);
    msg.setSourceEntity(3U);
    msg.setDestination(34629U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.500336953344);
    msg.setSource(49153U);
    msg.setSourceEntity(122U);
    msg.setDestination(9677U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.46586421171;
    msg.lon = 0.881751448586;
    msg.z = 0.903261638947;
    msg.z_units = 128U;
    msg.radius = 0.418110445603;
    msg.duration = 39384U;
    msg.speed = 0.242478811254;
    msg.speed_units = 34U;
    msg.custom.assign("EMFCTLOKIHQRVYAYKJNXRKR");

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
    msg.setTimeStamp(0.260189004755);
    msg.setSource(13023U);
    msg.setSourceEntity(161U);
    msg.setDestination(41164U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.626525713086;
    msg.lon = 0.606932579829;
    msg.z = 0.181926155108;
    msg.z_units = 159U;
    msg.radius = 0.18202133159;
    msg.duration = 8148U;
    msg.speed = 0.625631661909;
    msg.speed_units = 190U;
    msg.custom.assign("KFZDHZUJQGEYZRAJRMTORAEQSDWKEBIKBFODNUVELKCWNDLXNIGXNTIPYLWXTFZFVPDQSQPFZORPYAKUJZVMBERSOMHMHOGKEZMHGUMQHTGLAMYIIYITRZCBIYJJLFQWPWSCYOEJZAULHTLKHGPZSHOKLTEYQYXJBOICADVWJSCNIFVDFVLFHQJGSCARAVDUWEWGCNGTHWOUFKDPPDTJQMSRAXMGXVUNXCYBNT");

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
    msg.setTimeStamp(0.134023626151);
    msg.setSource(25620U);
    msg.setSourceEntity(206U);
    msg.setDestination(10257U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.617022505753;
    msg.lon = 0.93338349359;
    msg.z = 0.262892548316;
    msg.z_units = 154U;
    msg.radius = 0.729028271536;
    msg.duration = 61569U;
    msg.speed = 0.138053576728;
    msg.speed_units = 212U;
    msg.custom.assign("QYOUWVCBFRPESEBZZJUEVNVEMQKXVQTQXTLGDBRUJBHVYVEKASKXYYNLBNGPYTKXENMSDCIWUOOUZPJQRMHGIBILCDYRLBRHFUXCOPKSDLLSHIMMCEWQKTQWRJVFFPAUNJZDFLOKAHJAGZBSIFPGSKJJQYZNVHSNXDXOLRODWITCQMHCAZVFUPWHTAPUMMYERVWPCABQWSKGGDINIKOMIUZ");

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
    msg.setTimeStamp(0.198118135868);
    msg.setSource(19809U);
    msg.setSourceEntity(134U);
    msg.setDestination(144U);
    msg.setDestinationEntity(79U);
    msg.timeout = 9666U;
    msg.flags = 190U;
    msg.lat = 0.76993763471;
    msg.lon = 0.13188936642;
    msg.start_z = 0.372039126531;
    msg.start_z_units = 103U;
    msg.end_z = 0.205547534856;
    msg.end_z_units = 10U;
    msg.radius = 0.544004483891;
    msg.speed = 0.52748704726;
    msg.speed_units = 139U;
    msg.custom.assign("RBEHLQKVPEJACQXCLNGQPZDFXLNJYQSLDHBWRPFYAONVECIUIRDMHKPDE");

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
    msg.setTimeStamp(0.304938845933);
    msg.setSource(8046U);
    msg.setSourceEntity(73U);
    msg.setDestination(5776U);
    msg.setDestinationEntity(117U);
    msg.timeout = 21759U;
    msg.flags = 53U;
    msg.lat = 0.18570550197;
    msg.lon = 0.394285163078;
    msg.start_z = 0.147170558261;
    msg.start_z_units = 159U;
    msg.end_z = 0.545151889282;
    msg.end_z_units = 195U;
    msg.radius = 0.564041964157;
    msg.speed = 0.155357885283;
    msg.speed_units = 76U;
    msg.custom.assign("MEFJFRVAZJZHTIOZDHSPILZASUDTPVBQXOYRLUEEDCJITSELNKKWAPEMXABYJVMHKILTLQIBKKQWGCYAIJBCLFZRVJFFOQUOCUHCOJTGWIORFURWUKGXYGHPNVCNPQCIHV");

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
    msg.setTimeStamp(0.751844878961);
    msg.setSource(56932U);
    msg.setSourceEntity(29U);
    msg.setDestination(12483U);
    msg.setDestinationEntity(42U);
    msg.timeout = 27898U;
    msg.flags = 198U;
    msg.lat = 0.884956466487;
    msg.lon = 0.102825634662;
    msg.start_z = 0.420027442344;
    msg.start_z_units = 194U;
    msg.end_z = 0.733030643092;
    msg.end_z_units = 180U;
    msg.radius = 0.460936922529;
    msg.speed = 0.937585062491;
    msg.speed_units = 91U;
    msg.custom.assign("FAJVCAZMMYHHQYASKIYCSNMINUQOPKKHXKTJGKJCITGFWISMVLRAAXTGTTKGVBZPCSNYHZYMAQGNQJDUWZDIFNTPI");

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
    msg.setTimeStamp(0.347640701804);
    msg.setSource(55085U);
    msg.setSourceEntity(197U);
    msg.setDestination(13336U);
    msg.setDestinationEntity(116U);
    msg.timeout = 20508U;
    msg.lat = 0.587183087044;
    msg.lon = 0.403876517906;
    msg.z = 0.273046426398;
    msg.z_units = 165U;
    msg.speed = 0.275370624642;
    msg.speed_units = 82U;
    msg.custom.assign("FUCPTKMXNXTOAKOKMACWGIGXRMHEPGXETKRLZPWIKLTQUOSDFRJZERUENNBHHWOJCFJQRCDWYHEVOILJXZCJPKUAOGFRDUUZKAAAQTVDVCNLBVPNSZONYLSVHZWH");

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
    msg.setTimeStamp(0.67943584639);
    msg.setSource(29518U);
    msg.setSourceEntity(50U);
    msg.setDestination(8483U);
    msg.setDestinationEntity(230U);
    msg.timeout = 8111U;
    msg.lat = 0.86871562537;
    msg.lon = 0.962868854901;
    msg.z = 0.047843929539;
    msg.z_units = 178U;
    msg.speed = 0.665063514598;
    msg.speed_units = 16U;
    msg.custom.assign("VASZCZIWCNZQHRTDEJHPUGTJGMROKDBNXPDHBKVRDBUEWADDUNOJWZQOFTUOPEQLXKCTBYXITVYPZDYPVKLWBAMKGXKLGGCRWCFGJXYINNYNQWJBPJZWSHCHGAWGGCUEWZUBEMSYBBUEVEXV");

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
    msg.setTimeStamp(0.326391486004);
    msg.setSource(742U);
    msg.setSourceEntity(189U);
    msg.setDestination(2784U);
    msg.setDestinationEntity(0U);
    msg.timeout = 13640U;
    msg.lat = 0.982390127425;
    msg.lon = 0.93663444636;
    msg.z = 0.579374620835;
    msg.z_units = 134U;
    msg.speed = 0.784740043069;
    msg.speed_units = 64U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.538640132549;
    tmp_msg_0.y = 0.648182152681;
    tmp_msg_0.z = 0.181706222688;
    tmp_msg_0.t = 0.668076358167;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EKOUKOQHXOBOHFFCWMDKLPSPJTXFPCYDDZIKYAVWAVZRWAZKGQNPMUWCVRSLTOFZEDLLBOKILYTMUFFLMFMXVXBSYGNPGEFGBNIDGEEICXVYMINURNQCIQDHKKYZUZVBJNQXUQWRJAMHCTORUMEOQOUMDRSUDKYSRYAHCFLEOISJJGDZPCWAPSI");

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
    msg.setTimeStamp(0.786822166214);
    msg.setSource(17872U);
    msg.setSourceEntity(101U);
    msg.setDestination(38290U);
    msg.setDestinationEntity(219U);
    msg.x = 0.44218968744;
    msg.y = 0.976395921488;
    msg.z = 0.0952381543711;
    msg.t = 0.75930885183;

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
    msg.setTimeStamp(0.532633739085);
    msg.setSource(2816U);
    msg.setSourceEntity(130U);
    msg.setDestination(20532U);
    msg.setDestinationEntity(147U);
    msg.x = 0.415973898236;
    msg.y = 0.41111888273;
    msg.z = 0.249610084551;
    msg.t = 0.779782472772;

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
    msg.setTimeStamp(0.487038568136);
    msg.setSource(14880U);
    msg.setSourceEntity(131U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(252U);
    msg.x = 0.508120681151;
    msg.y = 0.804449807767;
    msg.z = 0.809936942639;
    msg.t = 0.453591684393;

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
    msg.setTimeStamp(0.838584450727);
    msg.setSource(10331U);
    msg.setSourceEntity(115U);
    msg.setDestination(31780U);
    msg.setDestinationEntity(53U);
    msg.timeout = 19486U;
    msg.name.assign("JIVZTTXQEVGEYEOGTSKBGVVSRJZINQGCAQLDSOHXYGUDOKBIEZGTUVHXZBILWLOJLZUQRJXNINKOJOMFECTPIEPDALCJRGCZKMBYQLAPBRLMHHHPGRCIPYTQXF");
    msg.custom.assign("UTZTNQZOQBVNOIMLDUPBVATCVUBRYDOASPXQWPKNXGOKWLSHMVYXUZFEEBMCBZOVT");

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
    msg.setTimeStamp(0.136560199659);
    msg.setSource(22430U);
    msg.setSourceEntity(168U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(180U);
    msg.timeout = 60201U;
    msg.name.assign("HZZTEDXQGEOTHIRONSLOLROAMZLBMCFAOGFZGLKCMCVPUYMNWRGHRFNHEYTUANPHUFDZYHQNBLPPDQOTEFEXBTNVUAMMBVDJSZVCDYPJFUATESYRYAQWAVLDVSEGFUGTBBKOSML");
    msg.custom.assign("HEWIRKDLMBCODHPBZTEOOFWJRJTZOYHBZKFDIBQWPERYDRTGYPFMCFHQIKEEFUQSYWBYCDQFBZGGLRTZRHSHUIJLNZAJVEKMBKPMAZKJOJSMFXQTGTDBLWTHQLEHOYZEWOKCMAKRQXVQVGCGWSCXTBSXUVPNLCYRXYUNMVDUVWC");

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
    msg.setTimeStamp(0.645691241565);
    msg.setSource(13391U);
    msg.setSourceEntity(215U);
    msg.setDestination(12884U);
    msg.setDestinationEntity(252U);
    msg.timeout = 33778U;
    msg.name.assign("ALOFCJTLDJPGEPITNAZOTTNJZLPDBJBOWWSNCMGLBFNWKULGBZIMNMJXYIGLQZUEJXJRUEIXWMQVSGRCSQFCVILKUMPOZZORHCXMZTPQFLMPEVOAUEKRBCABHUYYVNHKKHVEEVUWTQYFHRWYZNUDFBXISWHKQSLZS");
    msg.custom.assign("DXWUCJQYXGJFPYDNZREISRJQCJEABAHWELEWKHHCDPFLETNVPZUTKMJXZDDJL");

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
    msg.setTimeStamp(0.607913216632);
    msg.setSource(56852U);
    msg.setSourceEntity(138U);
    msg.setDestination(32434U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.227010023558;
    msg.lon = 0.90432317891;
    msg.z = 0.965507248268;
    msg.z_units = 230U;
    msg.speed = 0.84972179265;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.459130214743;
    tmp_msg_0.y = 0.939676811356;
    tmp_msg_0.z = 0.0194162312176;
    tmp_msg_0.t = 0.895561552982;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.389839660907;
    msg.custom.assign("ACNUUVDVTBWEDSIRHTMNKPCQGRHCATONEJVZJRQBGEIPUYSBYAZHSXNROCLEFVBSSTPWXPKWUKXRROGWUKNXQPMZTFJUDMIS");

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
    msg.setTimeStamp(0.195723215531);
    msg.setSource(49949U);
    msg.setSourceEntity(55U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.975094942521;
    msg.lon = 0.244343923879;
    msg.z = 0.0125119901779;
    msg.z_units = 235U;
    msg.speed = 0.419005266871;
    msg.speed_units = 110U;
    msg.start_time = 0.407138809097;
    msg.custom.assign("IEJWOWGSVVIYKRBHZPE");

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
    msg.setTimeStamp(0.279867352137);
    msg.setSource(42044U);
    msg.setSourceEntity(100U);
    msg.setDestination(50325U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.776196934988;
    msg.lon = 0.489278137116;
    msg.z = 0.794187653932;
    msg.z_units = 217U;
    msg.speed = 0.609228999222;
    msg.speed_units = 156U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.953035053379;
    tmp_msg_0.y = 0.310511526272;
    tmp_msg_0.z = 0.579792151781;
    tmp_msg_0.t = 0.14474481923;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31070U;
    tmp_msg_1.off_x = 0.878208520234;
    tmp_msg_1.off_y = 0.13333361027;
    tmp_msg_1.off_z = 0.805552442244;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0088212443984;
    msg.custom.assign("XPYJEHTQIEMHNUATMKCYMWDMGGLIFFWFYANLEVXEVNTMJIAQIQRTWFCXZEYSGXUAVQCYCGTYLAGNDMXRGPXYZJGNRVSELPCPQVUHGNEZPZTZBZQVLHXOQCUDLDAXOKKJRFMODPVAUZMKSOGBCWOBUOIPCWOIKGEUSTKWZJXJFWARSFDBBTOZFVODQX");

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
    msg.setTimeStamp(0.442199211229);
    msg.setSource(38239U);
    msg.setSourceEntity(62U);
    msg.setDestination(39351U);
    msg.setDestinationEntity(151U);
    msg.vid = 6425U;
    msg.off_x = 0.381970556939;
    msg.off_y = 0.394391882102;
    msg.off_z = 0.754673117621;

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
    msg.setTimeStamp(0.992449942143);
    msg.setSource(8145U);
    msg.setSourceEntity(0U);
    msg.setDestination(11386U);
    msg.setDestinationEntity(105U);
    msg.vid = 1242U;
    msg.off_x = 0.578195656522;
    msg.off_y = 0.284031060899;
    msg.off_z = 0.966684108362;

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
    msg.setTimeStamp(0.313979679771);
    msg.setSource(1703U);
    msg.setSourceEntity(199U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(141U);
    msg.vid = 33633U;
    msg.off_x = 0.433037393014;
    msg.off_y = 0.403720365217;
    msg.off_z = 0.777377986205;

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
    msg.setTimeStamp(0.0743233520601);
    msg.setSource(4347U);
    msg.setSourceEntity(138U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.145377149786);
    msg.setSource(44045U);
    msg.setSourceEntity(241U);
    msg.setDestination(54736U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.0453843935796);
    msg.setSource(4141U);
    msg.setSourceEntity(250U);
    msg.setDestination(8300U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.330342225503);
    msg.setSource(65291U);
    msg.setSourceEntity(196U);
    msg.setDestination(59048U);
    msg.setDestinationEntity(99U);
    msg.mid = 44467U;

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
    msg.setTimeStamp(0.930550037872);
    msg.setSource(31702U);
    msg.setSourceEntity(7U);
    msg.setDestination(24041U);
    msg.setDestinationEntity(145U);
    msg.mid = 4892U;

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
    msg.setTimeStamp(0.16056082782);
    msg.setSource(11079U);
    msg.setSourceEntity(9U);
    msg.setDestination(30044U);
    msg.setDestinationEntity(156U);
    msg.mid = 11535U;

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
    msg.setTimeStamp(0.208826535983);
    msg.setSource(22006U);
    msg.setSourceEntity(150U);
    msg.setDestination(44582U);
    msg.setDestinationEntity(218U);
    msg.state = 201U;
    msg.eta = 1183U;
    msg.info.assign("PLDBCFVNZXTOHGAECZFUMTGCPBDUCCPKQIWULAHNXRJDQIRIIJJBZTESFGCNPSNNEJVYDWFMLVOAKDLXJBISVURQFODDGPZYERUUMYIWXLKRWZYFKDKOPAGREVOYAXZVZMCMGWWPWMUTXYTZQXOJWGYPNVEHTFSBIWSBQCVSHYQAHBLIVNRKMHKMHCREMILENJFWLOMDJYZNFNHEHSHSXQBJTAOPJUQGEXSGIVFRUBZGTAOKQS");

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
    msg.setTimeStamp(0.499655686638);
    msg.setSource(1202U);
    msg.setSourceEntity(230U);
    msg.setDestination(64308U);
    msg.setDestinationEntity(229U);
    msg.state = 94U;
    msg.eta = 11395U;
    msg.info.assign("TSIYGREUSKVVTPEZGUBZLTMGVYRSOQIPBHUVTLJIRJPOQTTWHGRRGZMBIXADBCFDTHUINYNMUHMVYINXPQMPWZLZICYZDWEASOSQGVMASUKOJDCFQGCRLXCENAWAVNFYAACVAXDGYTXWEGBIVJSLKOOLFBHZHSBFKQRZSAYUMIRRGWFLOKCXPEFI");

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
    msg.setTimeStamp(0.479042757909);
    msg.setSource(386U);
    msg.setSourceEntity(29U);
    msg.setDestination(48629U);
    msg.setDestinationEntity(123U);
    msg.state = 109U;
    msg.eta = 63910U;
    msg.info.assign("XPKVHVJKSHAYNPCNWEQNMQTYITESACPDJLIOJFTGWRPZWWDGEVZUBKNBAWULCCCBGJEUIYOSQZNXBFXBIUXOIIDHTOVMSRVSPXSXKRFTMFXINAEXQTHCHNCHQAQOVQAUDHMUTFNCKI");

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
    msg.setTimeStamp(0.079464180817);
    msg.setSource(42183U);
    msg.setSourceEntity(223U);
    msg.setDestination(9903U);
    msg.setDestinationEntity(23U);
    msg.system = 7567U;
    msg.duration = 51539U;
    msg.speed = 0.943722847048;
    msg.speed_units = 32U;
    msg.x = 0.651019119807;
    msg.y = 0.329840303973;
    msg.z = 0.809032764008;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.868102948032);
    msg.setSource(139U);
    msg.setSourceEntity(127U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(32U);
    msg.system = 57265U;
    msg.duration = 35442U;
    msg.speed = 0.68189867615;
    msg.speed_units = 240U;
    msg.x = 0.404257931884;
    msg.y = 0.775929820498;
    msg.z = 0.853028146345;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.784447882936);
    msg.setSource(8240U);
    msg.setSourceEntity(82U);
    msg.setDestination(11284U);
    msg.setDestinationEntity(218U);
    msg.system = 22984U;
    msg.duration = 55348U;
    msg.speed = 0.275729430858;
    msg.speed_units = 114U;
    msg.x = 0.930685567365;
    msg.y = 0.347725512024;
    msg.z = 0.273030984217;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.320186908172);
    msg.setSource(37122U);
    msg.setSourceEntity(158U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.383940676376;
    msg.lon = 0.933780034767;
    msg.speed = 0.837821004882;
    msg.speed_units = 183U;
    msg.duration = 28253U;
    msg.sys_a = 41091U;
    msg.sys_b = 48195U;
    msg.move_threshold = 0.187154738342;

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
    msg.setTimeStamp(0.0467194328765);
    msg.setSource(56949U);
    msg.setSourceEntity(63U);
    msg.setDestination(9089U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.943613525099;
    msg.lon = 0.497016019067;
    msg.speed = 0.967119400264;
    msg.speed_units = 111U;
    msg.duration = 38845U;
    msg.sys_a = 21047U;
    msg.sys_b = 44247U;
    msg.move_threshold = 0.826099088329;

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
    msg.setTimeStamp(0.582971776445);
    msg.setSource(36082U);
    msg.setSourceEntity(54U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.334672268826;
    msg.lon = 0.557620007409;
    msg.speed = 0.797793837711;
    msg.speed_units = 219U;
    msg.duration = 14934U;
    msg.sys_a = 42690U;
    msg.sys_b = 52652U;
    msg.move_threshold = 0.722734475649;

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
    msg.setTimeStamp(0.317243093013);
    msg.setSource(58224U);
    msg.setSourceEntity(191U);
    msg.setDestination(58529U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.497800446435;
    msg.lon = 0.026614357293;
    msg.z = 0.0220363682149;
    msg.z_units = 199U;
    msg.speed = 0.518774378198;
    msg.speed_units = 81U;
    msg.custom.assign("IZXNMEUOVDDSLYCRJMPJDITORYTQBEKMXMBEAXGNQTWUXWKVEICWKMKNWKFQJRIHFAZVDCGXGBUALTSDPPDSUJRGVWCVMGETXAVPJBGHATJZEIFTROOIUESSUNQKWHDONQRWHPEMZHUE");

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
    msg.setTimeStamp(0.16060978203);
    msg.setSource(26993U);
    msg.setSourceEntity(155U);
    msg.setDestination(13966U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.571504347697;
    msg.lon = 0.904377450377;
    msg.z = 0.836500032188;
    msg.z_units = 111U;
    msg.speed = 0.580025641963;
    msg.speed_units = 39U;
    msg.custom.assign("XTSXLJRPVKFLSWADHJNSOIYVEWPJGIIZKHPCTHGMWSZFLKTIOUMXUEN");

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
    msg.setTimeStamp(0.110516223611);
    msg.setSource(10910U);
    msg.setSourceEntity(122U);
    msg.setDestination(61947U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.610208531818;
    msg.lon = 0.314692205936;
    msg.z = 0.428981619543;
    msg.z_units = 233U;
    msg.speed = 0.57177443019;
    msg.speed_units = 186U;
    msg.custom.assign("XBCLQGXPZUKVCWNAQHHWEZJEBXAOSUXUBRFVKGIWKHQGNONGMBYARTS");

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
    msg.setTimeStamp(0.0452676752442);
    msg.setSource(62841U);
    msg.setSourceEntity(88U);
    msg.setDestination(1287U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.319838405831;
    msg.lon = 0.344369778021;

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
    msg.setTimeStamp(0.899717586004);
    msg.setSource(44575U);
    msg.setSourceEntity(16U);
    msg.setDestination(39249U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.128115992114;
    msg.lon = 0.326422653307;

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
    msg.setTimeStamp(0.91839009788);
    msg.setSource(31400U);
    msg.setSourceEntity(105U);
    msg.setDestination(38500U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.600654538071;
    msg.lon = 0.270053438173;

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
    msg.setTimeStamp(0.0463292371634);
    msg.setSource(30844U);
    msg.setSourceEntity(2U);
    msg.setDestination(57917U);
    msg.setDestinationEntity(54U);
    msg.timeout = 24843U;
    msg.lat = 0.873001410455;
    msg.lon = 0.706382744495;
    msg.z = 0.520717363827;
    msg.z_units = 177U;
    msg.pitch = 0.478841219475;
    msg.amplitude = 0.555715129762;
    msg.duration = 31982U;
    msg.speed = 0.461948353778;
    msg.speed_units = 4U;
    msg.radius = 0.391346876886;
    msg.direction = 179U;
    msg.custom.assign("VNVHEKIYTWOFDQHRZNRUQOXESMJONSDJJCD");

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
    msg.setTimeStamp(0.478354613447);
    msg.setSource(52885U);
    msg.setSourceEntity(19U);
    msg.setDestination(60622U);
    msg.setDestinationEntity(22U);
    msg.timeout = 30395U;
    msg.lat = 0.535411301703;
    msg.lon = 0.613077720497;
    msg.z = 0.73159730099;
    msg.z_units = 150U;
    msg.pitch = 0.770706786893;
    msg.amplitude = 0.696769718323;
    msg.duration = 42804U;
    msg.speed = 0.934487980675;
    msg.speed_units = 26U;
    msg.radius = 0.995037731077;
    msg.direction = 113U;
    msg.custom.assign("XIJRBPBTMLKEIOCXURLEZGMDDCRVYAIXEHKCZCGPFMUJACDEHVEKFVQTOGXNMMPPRHOUQJIFAFWBIPCMRYOHDOLUQELOTXHKUG");

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
    msg.setTimeStamp(0.503064982839);
    msg.setSource(9687U);
    msg.setSourceEntity(74U);
    msg.setDestination(37698U);
    msg.setDestinationEntity(210U);
    msg.timeout = 17413U;
    msg.lat = 0.186372503075;
    msg.lon = 0.871981805312;
    msg.z = 0.756237337506;
    msg.z_units = 165U;
    msg.pitch = 0.77401216229;
    msg.amplitude = 0.264388686381;
    msg.duration = 17829U;
    msg.speed = 0.67234647737;
    msg.speed_units = 136U;
    msg.radius = 0.30099147483;
    msg.direction = 26U;
    msg.custom.assign("LNABUYLRBWTWBOOZYQIRDMZIIDIOVFSXTSQEGZZWCQKVFWRGDYIUPUMCATNJZMKVCPPNSACKWCOSKRALYKOTOPPYGBMVXHKEUQBAYHRQCSPLENSG");

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
    msg.setTimeStamp(0.249081824498);
    msg.setSource(8853U);
    msg.setSourceEntity(190U);
    msg.setDestination(11940U);
    msg.setDestinationEntity(168U);
    msg.formation_name.assign("KTVWKMIZHWMSXXVBINHBIQGXJXCUYJAVCKSJAQPCUWLJVGSPEPJSDDTRODSGKYLGRABYQTNFRUDGJVAINKCZVZDOGSJZEMWFQAIHKLWNEUHWHOFOUPZLJUFRLFVJKXDHMYBANBSBENOIGLZZPPUEJORQFCNTTMVRXWCDOTYUFHYLSPYCX");
    msg.reference_frame = 144U;
    msg.custom.assign("INCJALWYQRPPGNDSBDOHEVXHYMJQVACGWLVHSVQHRXURSMDVHQWUAJK");

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
    msg.setTimeStamp(0.921767974696);
    msg.setSource(9343U);
    msg.setSourceEntity(199U);
    msg.setDestination(12332U);
    msg.setDestinationEntity(59U);
    msg.formation_name.assign("DBNDAVSLAZCRWRCKHBESTRFKFVCDOYMOPNWZQKWGVBBIZAFTDOJUUJELHWHIUNVMIIMCXRLQAHPRUNMPMDKKMFLBPUDSMGVCEKSVMUADEPYSOFEXGCEFXOAMHJWYPNTGOSJYZPBYFEKHXFVRGGBNQJSHOTCDXTHPWJZGJTIJDWGPVZQJFCKPSSRVLJXZBAIYHFTIQENQWXTCYCHERUWUOEBN");
    msg.reference_frame = 128U;
    msg.custom.assign("RCOBQUPAFZVSEWOMMANZAXDYTJNK");

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
    msg.setTimeStamp(0.367451983587);
    msg.setSource(15479U);
    msg.setSourceEntity(177U);
    msg.setDestination(38195U);
    msg.setDestinationEntity(211U);
    msg.formation_name.assign("PRCGMOYQTATWMXJFRVNQZXTTYDNZWDCABVYPVXFKFYUBNVGWYAOBVJTPEBVGSPFXHCKHCNQIFKSMIWMQHSHJGHTZYAAARJWEBKEAMQALQUZFODRMMPTDNBODKOYOIZEDU");
    msg.reference_frame = 245U;
    msg.custom.assign("OBFQWDMAPFYEQKAIHEAVMDXSCKYZQBESQLLPWXTPFPGEPQXAAYFGUZNUQJJJKLTOMADL");

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
    msg.setTimeStamp(0.47292702775);
    msg.setSource(12874U);
    msg.setSourceEntity(177U);
    msg.setDestination(21597U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("ZQCQSSRESGYIMEEUMYCRDMKETYUDSVLFZWXOEHKWNFODRZSATUNYPWSATAXHVHOGHDBXFCHCQQWDBVMBKQPJRLSXJAIXWGKPPFRJSVWILZPYBHQXDYPTWBSVNIKABNPMOAXCELZEOJQKFNCWKMDWEUCINNTLLDJOQRUUOVNIZZLXVTZWLIYRMEUUIANTYPPZBFJYIFGJGAAABCE");
    msg.formation_name.assign("YQLUOKRZRD");
    msg.plan_id.assign("RGBDOESRTOPJUUKNTNERDGOXZKGTAIULQOOVYDPXVGMIBMVPHAWKUQAXFEEPUHWDVFCFBQKTFKXJVFDEYYJYTXTHYKJRHJPRARNXXENJBLAAFHWMQAXLHVROKZEUBVWE");
    msg.description.assign("RCFNAPRIMSXOMGDHJZTFWLKICNULXFSYQGCQHSUEFFKMZJBPBLLSIHIECRGMOANIJKAJNTYVOPUEWNLXXKJBJWHAWRZTOBETRTXXJORDYMLYBAQSWFWTQDPIERQNEOTOSDGCTVLCQOLDYPHJNJMKGXQNPCWWFBKQZHRBYBEYQVDAAZGDKDNFKXNLJUHMUR");
    msg.leader_speed = 0.400145357398;
    msg.leader_bank_lim = 0.910434180983;
    msg.pos_sim_err_lim = 0.14532894609;
    msg.pos_sim_err_wrn = 0.767722801247;
    msg.pos_sim_err_timeout = 18697U;
    msg.converg_max = 0.62321886068;
    msg.converg_timeout = 7919U;
    msg.comms_timeout = 20151U;
    msg.turb_lim = 0.992213057305;
    msg.custom.assign("LWKZZYNAQUYLKGOPAAXBXIMOITOWYACXUQTGHJXOPFOGPVHNUSMSVTWUJERXQCYHZERKWUATZBFYWJVMYTLWTRHKCSWHLPDJXPCEJEEDODRGNCURQIUKQDUTCPVXRRCKFLAYKHIKS");

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
    msg.setTimeStamp(0.717065508974);
    msg.setSource(42753U);
    msg.setSourceEntity(246U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("YZRWJCIVCSZRENYSFOKFBIGVZEBTNNSJBUDQRVMMMQITOAPKLXNUGDCCLTGSWETVAXJBTYKHC");
    msg.formation_name.assign("WSMLYOEDLDNZCMJBMTSRTHVXOHZQUOYNKDRHAXLQVNCINWJERLMLCVKSCWKEUCXEQMNEJBICFOSHGHJKMTYVMNPRPFKGWUUGEQPFAQPJPQTZODQDODBVFKIJTIIRKJFMKVYNMILRQAAQJDSZVCVAWGNJGRPY");
    msg.plan_id.assign("HWGPTHMSLQQFJFBAVBDIPSNGRKMQWUMUTHRGRGPRMZWLLXSTJTNQGTRWUERSXWWLGKJDQODJNVOWCYVIBNBMUVKFQNESPILEBXISEEIUOJDDVYHRXOOHTJDTGFVODANACZZX");
    msg.description.assign("ETXNTTMUSAQKOCYHGRLITRZHSZVALHAVDJHTGOGNKIQUSF");
    msg.leader_speed = 0.871713436263;
    msg.leader_bank_lim = 0.126284764675;
    msg.pos_sim_err_lim = 0.107475320817;
    msg.pos_sim_err_wrn = 0.374473387438;
    msg.pos_sim_err_timeout = 41156U;
    msg.converg_max = 0.481674303009;
    msg.converg_timeout = 45265U;
    msg.comms_timeout = 13836U;
    msg.turb_lim = 0.374555972707;
    msg.custom.assign("OQZUHNATXCVLBCMVBGBDJEILSFKCZZJNSUKCELVTDSYGZHONWCVZTKQPFRUPPGKCFPIMKAXBGAXMQXNZLPPSSZIMHHNYQWJRKTSDIYACPNKIFHJUJYUDVKRPRYTEIKZYDTBBOCUEWWTLMALFRKLYQTMUJMGSEDFDQFCNQRTVNOPVLBODNLQQUVGJAEYSOWIHJBMEEWSUOEGARXTWSXDCJQYFDPVOAHXHGVXIHFOWHFYGNEBRZBGOUXLIWJ");

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
    msg.setTimeStamp(0.446106422422);
    msg.setSource(12413U);
    msg.setSourceEntity(232U);
    msg.setDestination(22484U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("GHSKKRRSFSQQCXNEDYIJLSLUAMNLIIVCHEOIZDXPUTWTWWEUQKJMBZANOAORXPGPVCBFDELYMSAZOAUETPWTYDQDRTCVRDULGJNFHYQQQGOGSRJKZLRUXXJFIZFWTEYWRKUCMKAKPITQERMUFJHICQWVD");
    msg.formation_name.assign("YHRESQPHIFLLSUMBBRYYREHTTHCYTDKAJNDWJUNTSDWZFCBBIFXSTZQKNBUXCTEOOBYVHQLPXLRIYWPMVEPGISMSKUFNPQDAXEOARCZOVOOWZZILOPDEANICHPAGGZUCUQCIHNAXVDSMENXGYI");
    msg.plan_id.assign("ZQYIJOCIUHHNNZBBVQKSOUAVMIAMDSKRFVSQCYYTXKLUHJJUEVGHPZLLDRWRDQNOIWPNKZITDTMVZEUXXTRXVNJKWIQULYBJNUQNJ");
    msg.description.assign("QQHFMKXFLLJCJXGRDWQWQWOAOKTAGJKTLADIWZVJBZBNHBMVLEEGPEVUMUZGONSMPICCNVHYYFYEFDMPBLOJCTZHUORKKNGQHRWAWSWOVJWSDFPONXKADJNSLUYESIFVMUZWXAPVJNRDDZTYIILBGAXFBYTCPTHSWMIUDEIYXQOPPHUKBFLTAGYVRDGEETUBXKHOICRRVXHRHETAKGQGFCJ");
    msg.leader_speed = 0.482781593487;
    msg.leader_bank_lim = 0.58847162511;
    msg.pos_sim_err_lim = 0.743858491023;
    msg.pos_sim_err_wrn = 0.0154818337317;
    msg.pos_sim_err_timeout = 19631U;
    msg.converg_max = 0.511805786515;
    msg.converg_timeout = 11223U;
    msg.comms_timeout = 4561U;
    msg.turb_lim = 0.237871093933;
    msg.custom.assign("BWELZNDSWZTEWIGVBIWFJNYKXSWFVQVQHGAXFQCXFAYFHOFVCARKBDSNUROIOZIEBBDUHSMBCRKCFIPQJXWHSANCHJEMQRYZD");

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
    msg.setTimeStamp(0.918233407397);
    msg.setSource(1962U);
    msg.setSourceEntity(114U);
    msg.setDestination(64374U);
    msg.setDestinationEntity(242U);
    msg.control_src = 58887U;
    msg.control_ent = 94U;
    msg.timeout = 0.155653186791;
    msg.loiter_radius = 0.846473599652;
    msg.altitude_interval = 0.0127853037513;

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
    msg.setTimeStamp(0.913600681996);
    msg.setSource(62075U);
    msg.setSourceEntity(229U);
    msg.setDestination(20236U);
    msg.setDestinationEntity(145U);
    msg.control_src = 22124U;
    msg.control_ent = 98U;
    msg.timeout = 0.492888123308;
    msg.loiter_radius = 0.947587735071;
    msg.altitude_interval = 0.420566224816;

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
    msg.setTimeStamp(0.940528921655);
    msg.setSource(37973U);
    msg.setSourceEntity(1U);
    msg.setDestination(53278U);
    msg.setDestinationEntity(83U);
    msg.control_src = 25352U;
    msg.control_ent = 125U;
    msg.timeout = 0.365376465597;
    msg.loiter_radius = 0.415417428991;
    msg.altitude_interval = 0.138694763581;

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
    msg.setTimeStamp(0.875400414567);
    msg.setSource(35397U);
    msg.setSourceEntity(210U);
    msg.setDestination(51647U);
    msg.setDestinationEntity(97U);
    msg.flags = 230U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.261940509907;
    tmp_msg_0.speed_units = 162U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.174554339676;
    tmp_msg_1.z_units = 217U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.164346662745;
    msg.lon = 0.472243406436;
    msg.radius = 0.156178254757;

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
    msg.setTimeStamp(0.271982386264);
    msg.setSource(72U);
    msg.setSourceEntity(216U);
    msg.setDestination(61701U);
    msg.setDestinationEntity(195U);
    msg.flags = 85U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.929013174003;
    tmp_msg_0.speed_units = 71U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.696186253655;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.444637717287;
    msg.lon = 0.852977505407;
    msg.radius = 0.48480995532;

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
    msg.setTimeStamp(0.299289492689);
    msg.setSource(56194U);
    msg.setSourceEntity(47U);
    msg.setDestination(5294U);
    msg.setDestinationEntity(155U);
    msg.flags = 143U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.862905152014;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.684963627021;
    tmp_msg_1.z_units = 252U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.771103044319;
    msg.lon = 0.94716779031;
    msg.radius = 0.101588494741;

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
    msg.setTimeStamp(0.655560186674);
    msg.setSource(22755U);
    msg.setSourceEntity(63U);
    msg.setDestination(14664U);
    msg.setDestinationEntity(209U);
    msg.control_src = 63152U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 240U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0107324291958;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.975446240918;
    tmp_tmp_msg_0_1.z_units = 184U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.348924013768;
    tmp_msg_0.lon = 0.599972305747;
    tmp_msg_0.radius = 0.521661609537;
    msg.reference.set(tmp_msg_0);
    msg.state = 175U;
    msg.proximity = 188U;

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
    msg.setTimeStamp(0.682733333203);
    msg.setSource(8938U);
    msg.setSourceEntity(15U);
    msg.setDestination(28097U);
    msg.setDestinationEntity(183U);
    msg.control_src = 64671U;
    msg.control_ent = 223U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 237U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.87332925862;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.572159611717;
    tmp_tmp_msg_0_1.z_units = 17U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.826388693542;
    tmp_msg_0.lon = 0.756777561559;
    tmp_msg_0.radius = 0.890431012424;
    msg.reference.set(tmp_msg_0);
    msg.state = 21U;
    msg.proximity = 32U;

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
    msg.setTimeStamp(0.679242460767);
    msg.setSource(5371U);
    msg.setSourceEntity(100U);
    msg.setDestination(6202U);
    msg.setDestinationEntity(214U);
    msg.control_src = 9549U;
    msg.control_ent = 165U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 84U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.848528031317;
    tmp_tmp_msg_0_0.speed_units = 138U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.629758000029;
    tmp_tmp_msg_0_1.z_units = 216U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.689204825026;
    tmp_msg_0.lon = 0.0708959352856;
    tmp_msg_0.radius = 0.425895134363;
    msg.reference.set(tmp_msg_0);
    msg.state = 164U;
    msg.proximity = 64U;

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
    msg.setTimeStamp(0.405737832607);
    msg.setSource(61974U);
    msg.setSourceEntity(53U);
    msg.setDestination(63889U);
    msg.setDestinationEntity(29U);
    msg.ax_cmd = 0.34276722783;
    msg.ay_cmd = 0.296391629412;
    msg.az_cmd = 0.943170465344;
    msg.ax_des = 0.804026748634;
    msg.ay_des = 0.186749924831;
    msg.az_des = 0.0527238142197;
    msg.virt_err_x = 0.321016842639;
    msg.virt_err_y = 0.453763215355;
    msg.virt_err_z = 0.132690396974;
    msg.surf_fdbk_x = 0.406013519313;
    msg.surf_fdbk_y = 0.803820236887;
    msg.surf_fdbk_z = 0.423413488024;
    msg.surf_unkn_x = 0.949227807266;
    msg.surf_unkn_y = 0.142635409909;
    msg.surf_unkn_z = 0.978417784322;
    msg.ss_x = 0.405791959621;
    msg.ss_y = 0.176237779174;
    msg.ss_z = 0.226346539245;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DINEMBCEKTOCVIAZGQXWUMHIUXFILBTOOPQMDQXYFWHXVYAHYDEHKGWDMMCHLFBFJPGWIZVKXBYIEDVCSYEPVCDNWJLHGKLADVJGRWNVAQTQQ");
    tmp_msg_0.dist = 0.514639470373;
    tmp_msg_0.err = 0.454887889378;
    tmp_msg_0.ctrl_imp = 0.127325313248;
    tmp_msg_0.rel_dir_x = 0.625055237222;
    tmp_msg_0.rel_dir_y = 0.68625856286;
    tmp_msg_0.rel_dir_z = 0.331488993265;
    tmp_msg_0.err_x = 0.0525555405391;
    tmp_msg_0.err_y = 0.451678941656;
    tmp_msg_0.err_z = 0.238441638142;
    tmp_msg_0.rf_err_x = 0.932668940167;
    tmp_msg_0.rf_err_y = 0.837959916375;
    tmp_msg_0.rf_err_z = 0.313206413044;
    tmp_msg_0.rf_err_vx = 0.51912342833;
    tmp_msg_0.rf_err_vy = 0.506613629114;
    tmp_msg_0.rf_err_vz = 0.545140582988;
    tmp_msg_0.ss_x = 0.824615400221;
    tmp_msg_0.ss_y = 0.0619110921082;
    tmp_msg_0.ss_z = 0.508260604693;
    tmp_msg_0.virt_err_x = 0.294946577142;
    tmp_msg_0.virt_err_y = 0.600830785215;
    tmp_msg_0.virt_err_z = 0.146640512255;
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
    msg.setTimeStamp(0.154201215406);
    msg.setSource(29739U);
    msg.setSourceEntity(10U);
    msg.setDestination(55094U);
    msg.setDestinationEntity(222U);
    msg.ax_cmd = 0.801541005204;
    msg.ay_cmd = 0.420834411262;
    msg.az_cmd = 0.757109101862;
    msg.ax_des = 0.392976004666;
    msg.ay_des = 0.868342450987;
    msg.az_des = 0.77593457624;
    msg.virt_err_x = 0.543013861023;
    msg.virt_err_y = 0.31471707812;
    msg.virt_err_z = 0.597925332821;
    msg.surf_fdbk_x = 0.200992826281;
    msg.surf_fdbk_y = 0.561204493393;
    msg.surf_fdbk_z = 0.988082853121;
    msg.surf_unkn_x = 0.116823729813;
    msg.surf_unkn_y = 0.592268474546;
    msg.surf_unkn_z = 0.750052811678;
    msg.ss_x = 0.886505982998;
    msg.ss_y = 0.881897959503;
    msg.ss_z = 0.751412956259;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DMPCDARRUVWXHTSSOOPILEKPGYEDDWQJNNTWCIDSUQJZNCIWMOH");
    tmp_msg_0.dist = 0.486049639944;
    tmp_msg_0.err = 0.655040793316;
    tmp_msg_0.ctrl_imp = 0.657785081828;
    tmp_msg_0.rel_dir_x = 0.58031016767;
    tmp_msg_0.rel_dir_y = 0.93861736401;
    tmp_msg_0.rel_dir_z = 0.516478972689;
    tmp_msg_0.err_x = 0.50372871214;
    tmp_msg_0.err_y = 0.611733000557;
    tmp_msg_0.err_z = 0.766722094873;
    tmp_msg_0.rf_err_x = 0.102193611345;
    tmp_msg_0.rf_err_y = 0.562087800222;
    tmp_msg_0.rf_err_z = 0.308052346952;
    tmp_msg_0.rf_err_vx = 0.861619994463;
    tmp_msg_0.rf_err_vy = 0.374909557129;
    tmp_msg_0.rf_err_vz = 0.0761601227036;
    tmp_msg_0.ss_x = 0.205233762968;
    tmp_msg_0.ss_y = 0.960974029583;
    tmp_msg_0.ss_z = 0.864154658916;
    tmp_msg_0.virt_err_x = 0.790691412215;
    tmp_msg_0.virt_err_y = 0.373926699943;
    tmp_msg_0.virt_err_z = 0.420763298856;
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
    msg.setTimeStamp(0.133798852522);
    msg.setSource(38910U);
    msg.setSourceEntity(215U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(186U);
    msg.ax_cmd = 0.370987611866;
    msg.ay_cmd = 0.252110985488;
    msg.az_cmd = 0.712286588221;
    msg.ax_des = 0.729252610336;
    msg.ay_des = 0.141256858958;
    msg.az_des = 0.67365864056;
    msg.virt_err_x = 0.831760769436;
    msg.virt_err_y = 0.305197424847;
    msg.virt_err_z = 0.087639558095;
    msg.surf_fdbk_x = 0.191554642911;
    msg.surf_fdbk_y = 0.355092118998;
    msg.surf_fdbk_z = 0.701950419693;
    msg.surf_unkn_x = 0.505626344188;
    msg.surf_unkn_y = 0.312544908679;
    msg.surf_unkn_z = 0.828151569284;
    msg.ss_x = 0.66845894352;
    msg.ss_y = 0.426641337468;
    msg.ss_z = 0.00666325965846;

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
    msg.setTimeStamp(0.244392621343);
    msg.setSource(34526U);
    msg.setSourceEntity(148U);
    msg.setDestination(57640U);
    msg.setDestinationEntity(147U);
    msg.s_id.assign("ZBYLXZUUHQEJBBVUZRYJMDXZANYSCWJJWQECPQTPQTVTDAMZMFRHWYAUPSOENTIMKHPDNJOUFKFTWRXKOLWDMQBNWJTFPECFJUCZPQXDMSLUPFVLRLDKATO");
    msg.dist = 0.88044003256;
    msg.err = 0.106783635634;
    msg.ctrl_imp = 0.240236901228;
    msg.rel_dir_x = 0.102844899532;
    msg.rel_dir_y = 0.0045327257094;
    msg.rel_dir_z = 0.549689207515;
    msg.err_x = 0.607424774999;
    msg.err_y = 0.493324220926;
    msg.err_z = 0.078633439382;
    msg.rf_err_x = 0.817381313044;
    msg.rf_err_y = 0.388956611807;
    msg.rf_err_z = 0.430828403053;
    msg.rf_err_vx = 0.507493886956;
    msg.rf_err_vy = 0.724141526431;
    msg.rf_err_vz = 0.0427600173347;
    msg.ss_x = 0.773736601017;
    msg.ss_y = 0.0685786265368;
    msg.ss_z = 0.0177086106974;
    msg.virt_err_x = 0.925306021456;
    msg.virt_err_y = 0.624900190808;
    msg.virt_err_z = 0.263863415432;

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
    msg.setTimeStamp(0.184234276716);
    msg.setSource(53398U);
    msg.setSourceEntity(118U);
    msg.setDestination(38792U);
    msg.setDestinationEntity(74U);
    msg.s_id.assign("VNQDCBLNRWPRTJJBOABTMMVZXZUYUQLUQQHEVDJNGIITEWESQNBVAMDXDLWCJYAWXUPKRICWIZTAAWFPVGIZZZEUJRASHCCWHXWILGJYAJMPSYMHNLDIPXXOSQKKOEGRDTQFYIKRFQFXARSCKBEGNNOQLZCLFCMOGKPSJNXQFBHFTKZK");
    msg.dist = 0.246817003653;
    msg.err = 0.518584508038;
    msg.ctrl_imp = 0.621374626305;
    msg.rel_dir_x = 0.454446961656;
    msg.rel_dir_y = 0.861794640252;
    msg.rel_dir_z = 0.890715292289;
    msg.err_x = 0.239455643996;
    msg.err_y = 0.104697364016;
    msg.err_z = 0.0120267594152;
    msg.rf_err_x = 0.891753696403;
    msg.rf_err_y = 0.637376736643;
    msg.rf_err_z = 0.964243747366;
    msg.rf_err_vx = 0.921177565477;
    msg.rf_err_vy = 0.124080769508;
    msg.rf_err_vz = 0.976365504136;
    msg.ss_x = 0.781886642612;
    msg.ss_y = 0.581085538932;
    msg.ss_z = 0.876903849957;
    msg.virt_err_x = 0.27034243482;
    msg.virt_err_y = 0.586299379243;
    msg.virt_err_z = 0.631946889626;

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
    msg.setTimeStamp(0.607058355659);
    msg.setSource(22349U);
    msg.setSourceEntity(254U);
    msg.setDestination(53557U);
    msg.setDestinationEntity(23U);
    msg.s_id.assign("LBFGSNOBWM");
    msg.dist = 0.507349155466;
    msg.err = 0.466079024175;
    msg.ctrl_imp = 0.0419619234357;
    msg.rel_dir_x = 0.709562855088;
    msg.rel_dir_y = 0.308134196048;
    msg.rel_dir_z = 0.560304965516;
    msg.err_x = 0.489825545293;
    msg.err_y = 0.443804910782;
    msg.err_z = 0.712209708048;
    msg.rf_err_x = 0.637789692658;
    msg.rf_err_y = 0.258944954413;
    msg.rf_err_z = 0.983299041495;
    msg.rf_err_vx = 0.552185893535;
    msg.rf_err_vy = 0.800874711803;
    msg.rf_err_vz = 0.245847630594;
    msg.ss_x = 0.213928125593;
    msg.ss_y = 0.723231333214;
    msg.ss_z = 0.202391535643;
    msg.virt_err_x = 0.0254408946379;
    msg.virt_err_y = 0.697202863046;
    msg.virt_err_z = 0.162590293044;

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
    msg.setTimeStamp(0.473440873055);
    msg.setSource(7622U);
    msg.setSourceEntity(43U);
    msg.setDestination(41407U);
    msg.setDestinationEntity(164U);
    msg.timeout = 14044U;
    msg.rpm = 0.777902171188;
    msg.direction = 235U;
    msg.custom.assign("EFEQSDQDDBVSLZBUYYBBJDKPNJWGZEYKUC");

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
    msg.setTimeStamp(0.180666808632);
    msg.setSource(11653U);
    msg.setSourceEntity(53U);
    msg.setDestination(17323U);
    msg.setDestinationEntity(124U);
    msg.timeout = 24348U;
    msg.rpm = 0.718662450747;
    msg.direction = 34U;
    msg.custom.assign("JYBKOBPLRCCWZKBJDYIFXOCSQLNJZXVAWEEKNNTKIMDRDFYGUUXALBYOGCUQWULHFCWSMHSZIPVAOKQ");

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
    msg.setTimeStamp(0.673712340211);
    msg.setSource(1699U);
    msg.setSourceEntity(130U);
    msg.setDestination(44436U);
    msg.setDestinationEntity(155U);
    msg.timeout = 33036U;
    msg.rpm = 0.500876526401;
    msg.direction = 214U;
    msg.custom.assign("KFXQHOPQOMNFBYFCZHPTMING");

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
    msg.setTimeStamp(0.145910808248);
    msg.setSource(7858U);
    msg.setSourceEntity(172U);
    msg.setDestination(21530U);
    msg.setDestinationEntity(139U);
    msg.formation_name.assign("YKOIUUIRVKXMYFNLVCVAYNUBBNBTZUEIDTSUJUETFRYQSZRTHYGJHYVHFCFWWEMSMQUBNRXPZAMGGTBQEWCCWVVQNPACTGXSFANFTOFXNHGJKOCWLRWTQODVAAIHUPEEVQMMREHQCJJXADIZCGLKFWZJKXJQPJOLOLNLHOPARDJXGGSMQINZADP");
    msg.type = 191U;
    msg.op = 239U;
    msg.group_name.assign("DPBBVQSEAHDKEGBVKTCWFMWTYMRJXXOCYHIZAYCEWCOMBUAKFTEHTSPRXGXPLNEOANWNPSCQLTAZWZYYGMKHYVBJUTKSQSPKEDCSJHJJPQLWCELFXZMQGZQNREVIABLLGAEPHOASBYGBAHZOZFYKEZCSODBUJMNGKXUYZAVDTIIU");
    msg.plan_id.assign("ACSADLASVTBKILWUFZDB");
    msg.description.assign("WXYIAFZQAGMMQHHDVXGVCDTCWXDNGPHEXOFYPWNPIIZPVDVQNTNEMVHULSAPYZJTGZQJCSUBYHXFJX");
    msg.reference_frame = 110U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64791U;
    tmp_msg_0.off_x = 0.98821420388;
    tmp_msg_0.off_y = 0.378224052946;
    tmp_msg_0.off_z = 0.427105388446;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.19336967388;
    msg.leader_speed_min = 0.0488171031895;
    msg.leader_speed_max = 0.406529372553;
    msg.leader_alt_min = 0.661074460664;
    msg.leader_alt_max = 0.62940909771;
    msg.pos_sim_err_lim = 0.862564382647;
    msg.pos_sim_err_wrn = 0.598248281266;
    msg.pos_sim_err_timeout = 12572U;
    msg.converg_max = 0.635591319717;
    msg.converg_timeout = 30258U;
    msg.comms_timeout = 43284U;
    msg.turb_lim = 0.792192760562;
    msg.custom.assign("ZAQPSGQWNBLYMSAMCURMSLGGFPIBWQKIRZRPWXPLIVPOREDZXVHWEYCZVBUDGETXJPRQKCJWPVEFXXXFWYRVBYCSWJRBFVZOWGZHQDDUJNAQOKLUYKIJFPSIMNZNLPSCLXVENCZCTVSWODLNIGOQNOAHJSOTUHELOJVBOMFBBGLKFARFOZXRWPEXDGMGUAEIDKRMIYINKHCEYTGJKZBTUJMQUCFHHTY");

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
    msg.setTimeStamp(0.0524271069167);
    msg.setSource(51895U);
    msg.setSourceEntity(113U);
    msg.setDestination(16403U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("YVDGETEMFLOOLAPWKKGSPKKUEDSQZSZADCYLYMGMMJIPJFGUMZUBQXEMTAANTYYQBJTNOBRMVIJHLIYJILZLOQTOYWUNQRNNSFVTSUEZKJPNRYNMHNPZGIWFGTQHTOKXIWRXZCIEXBQCSHJLGDVZRPKVHCSLESEBDOA");
    msg.type = 215U;
    msg.op = 74U;
    msg.group_name.assign("GDJTBVROHFDPELSZXDGKBLHDCTTSWXHLUPFGJQPOSEQEJVHFCLGFKIAC");
    msg.plan_id.assign("TPWXGDBSGGYKXBNIAEWFLXYQMAAVXYFKAYPBQSJDZCD");
    msg.description.assign("ZNEPNYIFFNMLMJPOOIKYGCXPFXEPQDMTKRDRYCSBIAVDZSZIZLVTAQMHKJLHQLCYNQTNVPGAOTSTAVUKLBLDVTTLXFUVXQJDJUHQMXOYRLMUHBBCEKSEGHGIIINURERCZPHKKGHGJWPNTFBBCOGJSADELFAGWQDUVXZMWXDJJEHDWGYUEOTSOUMSFHOIRYMWSBXEWCPKOYMZY");
    msg.reference_frame = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28853U;
    tmp_msg_0.off_x = 0.718869398327;
    tmp_msg_0.off_y = 0.789417231825;
    tmp_msg_0.off_z = 0.368084617604;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.281820476962;
    msg.leader_speed_min = 0.532862385907;
    msg.leader_speed_max = 0.137213332666;
    msg.leader_alt_min = 0.844973411268;
    msg.leader_alt_max = 0.610229217578;
    msg.pos_sim_err_lim = 0.153069198501;
    msg.pos_sim_err_wrn = 0.789317083804;
    msg.pos_sim_err_timeout = 58791U;
    msg.converg_max = 0.505625323943;
    msg.converg_timeout = 2899U;
    msg.comms_timeout = 977U;
    msg.turb_lim = 0.123501867812;
    msg.custom.assign("SBBRIGPNIRXKNVILAVUSTPWRMHXEABGWROEEYYUJBPNJVDLGIWM");

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
    msg.setTimeStamp(0.432345256657);
    msg.setSource(16700U);
    msg.setSourceEntity(16U);
    msg.setDestination(39355U);
    msg.setDestinationEntity(130U);
    msg.formation_name.assign("TNFMBUKLBYFYCUPUPXPDHIQIJWXDTLZVDENLMVSIQTDYAIWXQVQSRKRYEAOKMDDKKOZANFHDSHSPLVPLMGVVKXHIZAINICHGBTYECWOWUWQQCVGXMKZRZFNBXEZDERKGHZZEYHEQCW");
    msg.type = 166U;
    msg.op = 202U;
    msg.group_name.assign("AMOFDFLXIIFUJUHEVMFDXMJPKDZFMHCVKQKPWXZCCRZDOGLYZMUTWILVBHQPIJJNXFQLQDLPGBRUMNLXAVGHOBXVWVNFROGZFAWYABNFHWRQNYRZQJRTOGSYATCCFUMGONDHKWBZQGDKCDTVEACHENHIHITSYETBPPKROWJJYCAYOTLWPSDBTJUKZPTMPRLUSXCMINAVKIJPEOEIUESYXEMUQSAGBNGVBHSUIZRSLKNQYWVJYBKGXSS");
    msg.plan_id.assign("KASJZMUEYOPLZKVDHPYHFAMSPKUNXLHBMOQTWAZRTXBWZICMOJGBYUAOMRYBESAXQEWNPSNXSFUEKIVKMTSEUIKYQIVIJKPOQYEGSERIRPHSCHXDRSOUROXEICAHDUJJEIWGBVWRTLVNVRMDTZQCPNBATAZCDXMGWEDBCWAXMMZGTZUNBHQWBKJHVLUSPPVXTZFOCJOHQ");
    msg.description.assign("IRRNKTEGNXAVUWPWQNTGHWSXVNPHCNXVDCHZICGMMEXHJPBELAXCXRODSDADHAVQTGMTBSLAMLIFGYJPZZMRDYEZIBLCIKCOOSAUKESKFSESDBWDOHWTSFPZPQHUNOCQKWFJMJWGONICLTJLXRONVKQBGKREBCUZYAUFWALTTQAUQMPJOQBDOIQYFZQERFJTLYBNGSZAZKDBVBUKODFYVWLPEXTUYFJYIHFHMUCVUXGMSHM");
    msg.reference_frame = 48U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52880U;
    tmp_msg_0.off_x = 0.426093974189;
    tmp_msg_0.off_y = 0.143185642452;
    tmp_msg_0.off_z = 0.595169555927;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.277629380367;
    msg.leader_speed_min = 0.219836291773;
    msg.leader_speed_max = 0.752845473336;
    msg.leader_alt_min = 0.365948002795;
    msg.leader_alt_max = 0.690300511579;
    msg.pos_sim_err_lim = 0.448959605;
    msg.pos_sim_err_wrn = 0.403512760054;
    msg.pos_sim_err_timeout = 4708U;
    msg.converg_max = 0.0725192146156;
    msg.converg_timeout = 32402U;
    msg.comms_timeout = 39795U;
    msg.turb_lim = 0.379170040247;
    msg.custom.assign("PQAEYVSWOPFDDOXPVTNRCEWZMJWDKWATLYYQZHRLNPHPQKCSNKVLZDWEJGXARODUALJIWAKNOYHKVSRCTBKDWNQYFCOEVXTWNSRBUVTHMMQYFUYGAQDJCBOBESKKJMFMRXMVHLPNAGQDZZKOHZETUHFCLVSTTUZAJMAUMENSVWSECIBSBFJXFJZHFOYILCQMGBOXPNZECVBTGXRJUKFRXGYGLJUTUIGXRIUGOMLPGIRQSLZIXNCPPBQ");

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
    msg.setTimeStamp(0.876922009013);
    msg.setSource(53409U);
    msg.setSourceEntity(74U);
    msg.setDestination(39220U);
    msg.setDestinationEntity(168U);
    msg.timeout = 19272U;
    msg.lat = 0.623701909008;
    msg.lon = 0.955871878692;
    msg.z = 0.856073299159;
    msg.z_units = 16U;
    msg.speed = 0.228393338531;
    msg.speed_units = 209U;
    msg.custom.assign("LGLNKJCBVFUNMSQJRPXKWPIYTXHFLICBDJCDUHYIDRBODZEWDGGJRDWVQOKTIZZYKPSLEFWMWPSRXVBSKWVOFGQXACHRMSTQTTEETTROSDPQHAXICBIFLFBYYMJACTIVRTPACHQFMEGKLVAOYWNOEQBJGUMUNEQUZZDKOJMURZRCHAQBAHSKNIPCOCLUFGVOALZGEHZXDGINBVLWUMP");

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
    msg.setTimeStamp(0.175438493475);
    msg.setSource(32902U);
    msg.setSourceEntity(32U);
    msg.setDestination(14737U);
    msg.setDestinationEntity(232U);
    msg.timeout = 60352U;
    msg.lat = 0.510436462559;
    msg.lon = 0.523165099838;
    msg.z = 0.885259466463;
    msg.z_units = 26U;
    msg.speed = 0.678171433445;
    msg.speed_units = 189U;
    msg.custom.assign("XRGZGPBOZTUHBUMRSYKXOCESBIXTQBODFFCVJPDKVIEPWUKBMIHJQTOUNIIGBBLTCVOMZEVNGFYGMLASZFOQGDKYTKWEWCYJLFRWYEJLYWAXGEPJYPNXAUXOSTDALNRDSBQZVWNWHQLRHKZQRFB");

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
    msg.setTimeStamp(0.396563226745);
    msg.setSource(63327U);
    msg.setSourceEntity(17U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(33U);
    msg.timeout = 44933U;
    msg.lat = 0.261201433057;
    msg.lon = 0.638253986744;
    msg.z = 0.39620660787;
    msg.z_units = 48U;
    msg.speed = 0.305752689677;
    msg.speed_units = 37U;
    msg.custom.assign("DEBRKFTTNGABXTJPQMZDEKJFXQCHKGCQVTOFQHCZHQUGKWGKZCNYLJUFIOZGYDWSNFMZAMEOWJUBYYNTZSUPVMTXGNVXRMRUBRAZAVBQOOSQOPHIRQWRDISMEYLYZINCLVGCAPESHVGIIJHBSPKLJZYCVSHUIPAQBIPDNFUAJSDLEEUKETXBPJJIKHYSWJAZHAPBVMPNHWXBLXADNCLGTRYLGVCWXEWO");

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
    IMC::ExtendedFormationMonitor msg;
    msg.setTimeStamp(0.364241447872);
    msg.setSource(33639U);
    msg.setSourceEntity(65U);
    msg.setDestination(34976U);
    msg.setDestinationEntity(146U);
    msg.dist_min = 0.630145808658;
    msg.ax_cmd = 0.98713462709;
    msg.ay_cmd = 0.437449649273;
    msg.az_cmd = 0.410144013772;
    msg.ax_des = 0.553952546947;
    msg.ay_des = 0.890998517621;
    msg.az_des = 0.00307234515079;
    msg.virt_err_x = 0.697239695043;
    msg.virt_err_y = 0.401724829243;
    msg.virt_err_z = 0.74072002428;
    msg.surf_fdbk_x = 0.630652757822;
    msg.surf_fdbk_y = 0.715030580897;
    msg.surf_fdbk_z = 0.280391885798;
    msg.surf_unkn_x = 0.45377357063;
    msg.surf_unkn_y = 0.199007431066;
    msg.surf_unkn_z = 0.637594072265;
    msg.ss_x = 0.847389362663;
    msg.ss_y = 0.494280519801;
    msg.ss_z = 0.519136778784;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KIJQOZUTRIXJPGHOEXDRLTQZEVMWVSQCFQMIAWVUPSFFXLNDLHNOEJBFSORIBWOVTUZTSJARJBWXWJRCMXDKUJADKSUTGCNEYCXURSZUFFQSWHRVNMSDCLHNUPKPCPNVKSDESKDGOGALQHBRHELMQMCDIVXZGGPVVHLNULCFOIUTMGGMRZYNZBTNIOFMJYBWLKCCLWKYIPPFJYYQREZY");
    tmp_msg_0.dist = 0.0705349321047;
    tmp_msg_0.err = 0.329860884745;
    tmp_msg_0.ctrl_imp = 0.453446654402;
    tmp_msg_0.rel_dir_x = 0.134095391667;
    tmp_msg_0.rel_dir_y = 0.212412261489;
    tmp_msg_0.rel_dir_z = 0.312998008398;
    tmp_msg_0.err_x = 0.511645352411;
    tmp_msg_0.err_y = 0.134792382961;
    tmp_msg_0.err_z = 0.216013206669;
    tmp_msg_0.rf_err_x = 0.455571776752;
    tmp_msg_0.rf_err_y = 0.924802920336;
    tmp_msg_0.rf_err_z = 0.69185054537;
    tmp_msg_0.rf_err_vx = 0.560890436079;
    tmp_msg_0.rf_err_vy = 0.0541371844172;
    tmp_msg_0.rf_err_vz = 0.209164059584;
    tmp_msg_0.ss_x = 0.0700900047901;
    tmp_msg_0.ss_y = 0.180616770744;
    tmp_msg_0.ss_z = 0.633168762412;
    tmp_msg_0.virt_err_x = 0.724223725604;
    tmp_msg_0.virt_err_y = 0.567652282946;
    tmp_msg_0.virt_err_z = 0.642720547229;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationMonitor msg;
    msg.setTimeStamp(0.694099134599);
    msg.setSource(14778U);
    msg.setSourceEntity(73U);
    msg.setDestination(19833U);
    msg.setDestinationEntity(38U);
    msg.dist_min = 0.999717249327;
    msg.ax_cmd = 0.375199297554;
    msg.ay_cmd = 0.320618179553;
    msg.az_cmd = 0.988634377357;
    msg.ax_des = 0.796608902221;
    msg.ay_des = 0.495368841504;
    msg.az_des = 0.419513780484;
    msg.virt_err_x = 0.334061900624;
    msg.virt_err_y = 0.0117943323594;
    msg.virt_err_z = 0.460415315062;
    msg.surf_fdbk_x = 0.12053350769;
    msg.surf_fdbk_y = 0.42161789326;
    msg.surf_fdbk_z = 0.0220103000539;
    msg.surf_unkn_x = 0.888868357465;
    msg.surf_unkn_y = 0.502451397032;
    msg.surf_unkn_z = 0.883137723711;
    msg.ss_x = 0.759258236923;
    msg.ss_y = 0.344731595209;
    msg.ss_z = 0.722314060834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationMonitor msg;
    msg.setTimeStamp(0.68321935436);
    msg.setSource(38612U);
    msg.setSourceEntity(119U);
    msg.setDestination(58615U);
    msg.setDestinationEntity(241U);
    msg.dist_min = 0.0698369876256;
    msg.ax_cmd = 0.0763980594483;
    msg.ay_cmd = 0.165420693977;
    msg.az_cmd = 0.511800382889;
    msg.ax_des = 0.310077608447;
    msg.ay_des = 0.940484053294;
    msg.az_des = 0.0848407745883;
    msg.virt_err_x = 0.888851428819;
    msg.virt_err_y = 0.98333347433;
    msg.virt_err_z = 0.428525543434;
    msg.surf_fdbk_x = 0.259762011376;
    msg.surf_fdbk_y = 0.538159622092;
    msg.surf_fdbk_z = 0.0829045887522;
    msg.surf_unkn_x = 0.267048087285;
    msg.surf_unkn_y = 0.712482117906;
    msg.surf_unkn_z = 0.935759521242;
    msg.ss_x = 0.694370234825;
    msg.ss_y = 0.22886984619;
    msg.ss_z = 0.245397434432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationMonitor #2", msg == *msg_d);
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
    msg.setTimeStamp(0.536977106458);
    msg.setSource(55841U);
    msg.setSourceEntity(5U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 236U;
    msg.error_count = 71U;
    msg.error_ents.assign("FVCXUDFYVDYKFLCZSHDAZAJVETGEYDVGMNPWCWIAKRLMCGLKXIQCUQRBATRNNEVUMLOPKVOIFBRJDRVTBIPQX");
    msg.maneuver_type = 36815U;
    msg.maneuver_stime = 0.516702105507;
    msg.maneuver_eta = 51922U;
    msg.control_loops = 1603972051U;
    msg.flags = 127U;
    msg.last_error.assign("TLANLULNCJYRKBMBUTIEPNBWGNXWBMKDBOHLRRZDJZTGFAMDQEDJOLNFQQRASUSXSEKYHCIZPGAXZXFELNHEHEYOIIBVJRWUSOSGWGUHAFIZFZNVQTATBVOQCGNWKSTSLMBVYALZOVMMNC");
    msg.last_error_time = 0.731887476596;

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
    msg.setTimeStamp(0.467832280093);
    msg.setSource(37322U);
    msg.setSourceEntity(75U);
    msg.setDestination(41974U);
    msg.setDestinationEntity(27U);
    msg.op_mode = 7U;
    msg.error_count = 96U;
    msg.error_ents.assign("VENDRJMJTKVHBUWELKBOYRUXGWRIAOYFNRQZACPIUHBNAEJUXRODADVPPNGPLZIYFZUDMNAGRMIWGTLQAJUXCXELCZOWOIDKALKYJTFNYIORIYMTHGQTJUSFXCJSHINFZBQH");
    msg.maneuver_type = 11845U;
    msg.maneuver_stime = 0.758195110178;
    msg.maneuver_eta = 62976U;
    msg.control_loops = 3216390981U;
    msg.flags = 23U;
    msg.last_error.assign("YGTDFIRKCYKIDMOEAWZUATPNFANOEDLZKBSZYGYPPGBNSNFNOHGXDVCMBDQLQCQ");
    msg.last_error_time = 0.0696453141943;

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
    msg.setTimeStamp(0.0443358106175);
    msg.setSource(62872U);
    msg.setSourceEntity(97U);
    msg.setDestination(45319U);
    msg.setDestinationEntity(143U);
    msg.op_mode = 16U;
    msg.error_count = 143U;
    msg.error_ents.assign("VSQODKHMLSLNXOBZNEWJDOCPGWTGRACAWJVSRJBAAAPNOWZTSVNYJLUANMZPKATDIJLPDFTBRCEVEEUITUGPJBXZHJYSDIUDRIQVLWXVGBNSYQRRGXZSGVTUEZCWMIXRLIPNORHTJXPCGBWGFCVBHYPEFELOUJDTFOFMQHQZGMVGOSERRLQQSQBXCUKYCEDMJAZMKZQTFWEBUUNTKDOOUMZFYYDKFLIIHAMKSXPKHWIKAYPHFCCHYFNKYMQWB");
    msg.maneuver_type = 2499U;
    msg.maneuver_stime = 0.497230926878;
    msg.maneuver_eta = 37739U;
    msg.control_loops = 4150516474U;
    msg.flags = 151U;
    msg.last_error.assign("ECPPRQJKTFHZWIZBFIWAKOLBISAZDMGJZURYCFBBXXTHVYSJQNGBFIENXJCNMJUXDNWVFRJTJCPMYCWHCLRTFXYZBVWTJPHRRPEIVEKRVWRAXKOQQZSUXXODYGBOCDC");
    msg.last_error_time = 0.793968024695;

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
    msg.setTimeStamp(0.435730395091);
    msg.setSource(32651U);
    msg.setSourceEntity(253U);
    msg.setDestination(27913U);
    msg.setDestinationEntity(55U);
    msg.type = 5U;
    msg.request_id = 41121U;
    msg.command = 165U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 56986U;
    tmp_msg_0.lat = 0.847604322937;
    tmp_msg_0.lon = 0.148200239057;
    tmp_msg_0.z = 0.385155289772;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.242239750413;
    tmp_msg_0.speed_units = 29U;
    tmp_msg_0.bearing = 0.685452691052;
    tmp_msg_0.cross_angle = 0.811082978998;
    tmp_msg_0.width = 0.298164939334;
    tmp_msg_0.length = 0.812224892923;
    tmp_msg_0.hstep = 0.868427446167;
    tmp_msg_0.coff = 88U;
    tmp_msg_0.alternation = 161U;
    tmp_msg_0.flags = 18U;
    tmp_msg_0.custom.assign("FCFXDWEAELDTIHHSHZMAUUOZUXPBRNEXQUUBWDOZXRORILVELCUJQADPYSLKONWCPVPMYJRRWIPZEAGFQGXTIRGCSBAYQSCMKMCKWKWESVIZVLUCYSGYJBWDBNPEGMLVFKGRYJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1118U;
    msg.info.assign("MSBAJYDYCADONGEFPZUZFVQYVWEEEAWRJRHUQIXHVLJRZTRLVYVLBKJTFYEUMENPDT");

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
    msg.setTimeStamp(0.0629093315777);
    msg.setSource(23431U);
    msg.setSourceEntity(163U);
    msg.setDestination(36994U);
    msg.setDestinationEntity(214U);
    msg.type = 41U;
    msg.request_id = 12815U;
    msg.command = 154U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 59779U;
    tmp_msg_0.lat = 0.750226113429;
    tmp_msg_0.lon = 0.978296872214;
    tmp_msg_0.z = 0.249937497229;
    tmp_msg_0.z_units = 57U;
    tmp_msg_0.pitch = 0.667378699249;
    tmp_msg_0.amplitude = 0.0135378866463;
    tmp_msg_0.duration = 58053U;
    tmp_msg_0.speed = 0.860911751766;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.radius = 0.434108216145;
    tmp_msg_0.direction = 246U;
    tmp_msg_0.custom.assign("EHNQSOYRZDFSWHWJYLCWXDIGEPKOKYLGRLZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47704U;
    msg.info.assign("DCGNXFCMWOFKUUGYPNRKOPIOMW");

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
    msg.setTimeStamp(0.342501942967);
    msg.setSource(55307U);
    msg.setSourceEntity(177U);
    msg.setDestination(12599U);
    msg.setDestinationEntity(139U);
    msg.type = 95U;
    msg.request_id = 20912U;
    msg.command = 148U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 55621U;
    tmp_msg_0.lat = 0.245647641364;
    tmp_msg_0.lon = 0.00139889339476;
    tmp_msg_0.z = 0.499874178758;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.speed = 0.278541009947;
    tmp_msg_0.speed_units = 43U;
    tmp_msg_0.custom.assign("VLDWYQSQAWLURVDWABWERBZEYBKQITLHABYKYJDELMMEAVCUJGLIIILJHVPRZNQBGTWXJZOXPHVLGQJKCVWEUODDYDXBKUXBVCQRGAHNGFFMKWSQCGDXVPBAZOROPNXSKJNLVEFYASNOIUTTDRHNNXWUFKTPYMFPCDHOPGYITFROTESAAGIZTYMFXUZSHQQDJNPXJOPMZWFKSEWZOHG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56350U;
    msg.info.assign("KLREEZOUEBHBHTFDMKVDIWWZCSNVFXVPRIPEMXQYTPZGEKXSGFRMUCGPPCHDHSASIMAMTLDROCCYNSDLARQXTZVLYLTJUKHSIWGIIJCQKWJXBAXEAWDWKJSNCNTODFQHARFHJEUOXVRPOPTAGYIHL");

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
    msg.setTimeStamp(0.691681315748);
    msg.setSource(18143U);
    msg.setSourceEntity(212U);
    msg.setDestination(4334U);
    msg.setDestinationEntity(242U);
    msg.command = 206U;
    msg.entities.assign("GWCJOVZWCGVFAZFONWUSNYLCZYHAWVJAHCVBSPOWAIDFITHHUESLPVWGYBGDRGXCATJPLEJBMMXRIQLACPXSI");

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
    msg.setTimeStamp(0.823749135815);
    msg.setSource(25723U);
    msg.setSourceEntity(192U);
    msg.setDestination(48138U);
    msg.setDestinationEntity(241U);
    msg.command = 187U;
    msg.entities.assign("WRGMCQVUFZBROFEEPDGUFWYWXTJONZIEILMBKBBIFSIXJPGEMUUYQXREKFPFSVTDPWQABJWZPBCEQIHLVYCARRIQZUEIKOPCRNRAFGMFLYAPIQRLKJAUZKANKJFAXANJWHTOTSKMOANXMLSGQUXDKODQOZLZSHNTMAHKYDZHCKPSYJPFSWMBCZDSRYWMGHGYLDXVUWVDCTHEVUBXQLDCNXNLLWVHYCJTBVMGVDGTHJO");

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
    msg.setTimeStamp(0.752377280207);
    msg.setSource(11155U);
    msg.setSourceEntity(229U);
    msg.setDestination(1424U);
    msg.setDestinationEntity(231U);
    msg.command = 235U;
    msg.entities.assign("RIZCSOEVBDIKYHKEYTRTACHQOLLQWFUXZMSTEIVYUVNJXDIGILPNJKUWZLPCKQPJLKZUGAPRNSLQPUMGBASRDJGRNYRUEDIYSKLVOFXPSIJHPRNTVYWBEHPZUXJFWODBOIQEBEAVOMJEXVBTERQMXWXAKNHMXXSZFULOQCDRXKDOFVOFNKABNPJGSBATFFLBHWHZUVGYZDTNNTCCQJGFFZTDKWICTIYCS");

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
    msg.setTimeStamp(0.0166738518116);
    msg.setSource(27256U);
    msg.setSourceEntity(55U);
    msg.setDestination(7195U);
    msg.setDestinationEntity(10U);
    msg.mcount = 113U;
    msg.mnames.assign("SVOEHLSWRBMCJZEHJTRXMGVXPMAGSKPUPWRRIAKODYNBFJJENUZVUMCRXZUGBDEPJYCTRDZFWZRZYRLIPIOPSTVWQWTVDDYILJFPAFMIU");
    msg.ecount = 73U;
    msg.enames.assign("KMDICOSPZTLKXSCFXJYYEDXZJDYMXRAFRQWIUDIGZXUBRJZEPKGSTVHAK");
    msg.ccount = 220U;
    msg.cnames.assign("GYBQDPJDMRINEPSBGSWVERHCENARILSPTSJFQQHCHRAWXVLZQPIAADOFZRYSPEGUGUTBQOTMTXCLHKLFWEPJOESWGLUOXJYOQTNQEIXWGVDMSMFKNKFIURIBIVMTPQFXWAUWTXYDECVIXNPMDRBM");
    msg.last_error.assign("KQDYBEZLPUNPWVCGHORL");
    msg.last_error_time = 0.277429224835;

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
    msg.setTimeStamp(0.99346564611);
    msg.setSource(15385U);
    msg.setSourceEntity(56U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(163U);
    msg.mcount = 155U;
    msg.mnames.assign("BOIGLMXJADMCFOSECORQRRGZIZKXRFQGTXCVUTQBWAMFVJCTYJDTABSGEVKMPYJQEKYZATVUPOIPXNSMUFLCLIBWDBHUIUELDQTHKIEJUCQUJD");
    msg.ecount = 59U;
    msg.enames.assign("EIEWAKUSJEMSNWGORUDEACIHPCMCLMMPQRWCUWHEVQAMEVFBALKTGKGGLUZRCQZFQKTHYHJFPGIZROOVVSJCXPJUBKDKXBDSTVLLCBXAFLHQMKGLKXPUTFFJNRPSQJXNBYAMTTHXVDFVNRNZLAQLVPWDUWHNGWJOIYRXNQIPRECDMFBGADBXZCWZZKIDTFLYVJZNYMHOZWPAIBHSUUEBIRTPYOJCJRXYSYKVFOYIDOSESXEYOSQZHNT");
    msg.ccount = 236U;
    msg.cnames.assign("WYLXQDLFMBCHCXGZFEKWVRWNOKQEAMSOGNMBSVWDAEKTLTJIEJVKURYVCW");
    msg.last_error.assign("PXBBBKIMXVQROGYAJIQQVDFPCRGEBVIXLDTDFYLISGLOVMHKUZQVZIJKSSFATSUAPZOYWQGOBCKCSIPCCATZQWHLGOUMMCAPALBMGWHUESDTMCFNUIDRYDYZRXKEEXUJCRLKKTTQXHLZQYXMVPGBJTMCGJNBVFLFZWIOUCUFOPFSEVWEMAJHRDNNZHWGODHHEWSKLF");
    msg.last_error_time = 0.537479105677;

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
    msg.setTimeStamp(0.12978254633);
    msg.setSource(28244U);
    msg.setSourceEntity(253U);
    msg.setDestination(81U);
    msg.setDestinationEntity(90U);
    msg.mcount = 177U;
    msg.mnames.assign("JHWGSHAQIUCAOTKLWTUSQRDGMFKNDMTKJBFMKEVROOKYKXFPEPADOIMZQGWMVQESLPDWONEFPQIYJUGUOGPSOLNPXRITDNYZYJPQWZFLQXAJWFATNSZYCMGEYAUXDVBVXWTUJUIRDKXQUZNBWIHGOBOEZGRMAQDCHABBKSJAEVSLIFVIDEYLOCNBPNVWRHZRXZHTXCLLQ");
    msg.ecount = 95U;
    msg.enames.assign("VCEYEHXSXDMJINSUYROZHFYZXALZKVTSDLNFVPQVHXKYWRONMSUMCAKUEDPEGXLCNJNAOCGJBNBGLCQWDRHFYIZVMCAUOBZGZIMQGLVBHAVTGEIIOPNZEOMZOFZDAWTOJHDQWDBKAGGPRJQ");
    msg.ccount = 147U;
    msg.cnames.assign("FUSOFLHIIYMIVVXRVHLVPGWRHFTKULQZQODWNOAUXVYSJKPMKWEUWNQTJEMSTPGLCM");
    msg.last_error.assign("IUGFSAIDFOHAHGZYRYCPVGUKDWDSBURQJVUVIUPGXECVSVPMZNFAL");
    msg.last_error_time = 0.770298356956;

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
    msg.setTimeStamp(0.0189264142112);
    msg.setSource(42121U);
    msg.setSourceEntity(52U);
    msg.setDestination(46760U);
    msg.setDestinationEntity(85U);
    msg.mask = 70U;
    msg.max_depth = 0.282824547713;
    msg.min_altitude = 0.375772544576;
    msg.max_altitude = 0.873282236102;
    msg.min_speed = 0.0529438282176;
    msg.max_speed = 0.453315607653;
    msg.max_vrate = 0.148599098086;
    msg.lat = 0.358798659351;
    msg.lon = 0.114113603101;
    msg.orientation = 0.237684016054;
    msg.width = 0.404646552488;
    msg.length = 0.389800845192;

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
    msg.setTimeStamp(0.55139511078);
    msg.setSource(39113U);
    msg.setSourceEntity(119U);
    msg.setDestination(21686U);
    msg.setDestinationEntity(57U);
    msg.mask = 99U;
    msg.max_depth = 0.312793698233;
    msg.min_altitude = 0.393364101338;
    msg.max_altitude = 0.181900888871;
    msg.min_speed = 0.395246510883;
    msg.max_speed = 0.955691828591;
    msg.max_vrate = 0.829906548765;
    msg.lat = 0.0619451442982;
    msg.lon = 0.430481272348;
    msg.orientation = 0.0291157602179;
    msg.width = 0.67913992366;
    msg.length = 0.750008794671;

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
    msg.setTimeStamp(0.176070190767);
    msg.setSource(64403U);
    msg.setSourceEntity(94U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(177U);
    msg.mask = 221U;
    msg.max_depth = 0.99538627544;
    msg.min_altitude = 0.415995395425;
    msg.max_altitude = 0.826084024351;
    msg.min_speed = 0.552285980676;
    msg.max_speed = 0.288255433158;
    msg.max_vrate = 0.656179359184;
    msg.lat = 0.0224636959978;
    msg.lon = 0.12368692978;
    msg.orientation = 0.836742173592;
    msg.width = 0.434939238473;
    msg.length = 0.103578363251;

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
    msg.setTimeStamp(0.3615117696);
    msg.setSource(53337U);
    msg.setSourceEntity(32U);
    msg.setDestination(9071U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.564148337661);
    msg.setSource(24534U);
    msg.setSourceEntity(22U);
    msg.setDestination(19802U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.863726398038);
    msg.setSource(592U);
    msg.setSourceEntity(199U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.599194270403);
    msg.setSource(55199U);
    msg.setSourceEntity(144U);
    msg.setDestination(34513U);
    msg.setDestinationEntity(94U);
    msg.duration = 19848U;

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
    msg.setTimeStamp(0.0551657113402);
    msg.setSource(25000U);
    msg.setSourceEntity(155U);
    msg.setDestination(4197U);
    msg.setDestinationEntity(237U);
    msg.duration = 44617U;

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
    msg.setTimeStamp(0.968949012861);
    msg.setSource(7205U);
    msg.setSourceEntity(167U);
    msg.setDestination(31533U);
    msg.setDestinationEntity(237U);
    msg.duration = 50988U;

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
    msg.setTimeStamp(0.160620762487);
    msg.setSource(10357U);
    msg.setSourceEntity(134U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(189U);
    msg.enable = 176U;
    msg.mask = 2723804804U;
    msg.scope_ref = 552033119U;

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
    msg.setTimeStamp(0.0148834323652);
    msg.setSource(6398U);
    msg.setSourceEntity(60U);
    msg.setDestination(5993U);
    msg.setDestinationEntity(172U);
    msg.enable = 180U;
    msg.mask = 1699318862U;
    msg.scope_ref = 3190814254U;

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
    msg.setTimeStamp(0.669200267734);
    msg.setSource(14235U);
    msg.setSourceEntity(252U);
    msg.setDestination(11699U);
    msg.setDestinationEntity(130U);
    msg.enable = 34U;
    msg.mask = 1910521510U;
    msg.scope_ref = 313674537U;

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
    msg.setTimeStamp(0.303948237924);
    msg.setSource(60155U);
    msg.setSourceEntity(162U);
    msg.setDestination(18999U);
    msg.setDestinationEntity(74U);
    msg.medium = 189U;

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
    msg.setTimeStamp(0.47216240133);
    msg.setSource(55123U);
    msg.setSourceEntity(210U);
    msg.setDestination(18258U);
    msg.setDestinationEntity(105U);
    msg.medium = 3U;

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
    msg.setTimeStamp(0.814583883331);
    msg.setSource(23658U);
    msg.setSourceEntity(159U);
    msg.setDestination(3669U);
    msg.setDestinationEntity(141U);
    msg.medium = 236U;

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
    msg.setTimeStamp(0.381088393286);
    msg.setSource(61025U);
    msg.setSourceEntity(52U);
    msg.setDestination(30057U);
    msg.setDestinationEntity(233U);
    msg.value = 0.929709005774;
    msg.type = 81U;

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
    msg.setTimeStamp(0.580500084098);
    msg.setSource(9348U);
    msg.setSourceEntity(208U);
    msg.setDestination(40795U);
    msg.setDestinationEntity(161U);
    msg.value = 0.621859905643;
    msg.type = 124U;

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
    msg.setTimeStamp(0.780961287617);
    msg.setSource(3583U);
    msg.setSourceEntity(85U);
    msg.setDestination(218U);
    msg.setDestinationEntity(246U);
    msg.value = 0.476198828434;
    msg.type = 112U;

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
    msg.setTimeStamp(0.791793623914);
    msg.setSource(2500U);
    msg.setSourceEntity(4U);
    msg.setDestination(16150U);
    msg.setDestinationEntity(199U);
    msg.possimerr = 0.253843911797;
    msg.converg = 0.896178688284;
    msg.turbulence = 0.0680498083405;
    msg.possimmon = 43U;
    msg.commmon = 1U;
    msg.convergmon = 137U;

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
    msg.setTimeStamp(0.877776566187);
    msg.setSource(25724U);
    msg.setSourceEntity(21U);
    msg.setDestination(33506U);
    msg.setDestinationEntity(186U);
    msg.possimerr = 0.480448780414;
    msg.converg = 0.605002853961;
    msg.turbulence = 0.254434354153;
    msg.possimmon = 225U;
    msg.commmon = 224U;
    msg.convergmon = 53U;

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
    msg.setTimeStamp(0.37508293068);
    msg.setSource(20325U);
    msg.setSourceEntity(245U);
    msg.setDestination(46758U);
    msg.setDestinationEntity(73U);
    msg.possimerr = 0.459766582839;
    msg.converg = 0.0261971014273;
    msg.turbulence = 0.643644941243;
    msg.possimmon = 219U;
    msg.commmon = 247U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.223232616534);
    msg.setSource(57271U);
    msg.setSourceEntity(40U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(156U);
    msg.autonomy = 200U;
    msg.mode.assign("CSMFBDMUQZMTYCKUSPHTSYSMNAAWZXOIJTWNFNTCOBRNGWSQDLZZOGCHBCERIFBCILJOGKQQMALRUAXGSCFJRWYINYJBMHPXSNZFRIUXWNQGULTIARYDIVRFDJFQMYGTZKXDFLYEZPKBVEAWEKVOBCKKTHQBUNHEMRWDUJVLXDWPDHTCPMOKCPNFU");

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
    msg.setTimeStamp(0.948724524818);
    msg.setSource(2265U);
    msg.setSourceEntity(108U);
    msg.setDestination(33291U);
    msg.setDestinationEntity(86U);
    msg.autonomy = 68U;
    msg.mode.assign("XISRVBMDFPSHBDYTCKLYHKEBXQMGUPYCTFPMOXKTULJZBSKKJMTZEOLQJOGNFKZRZGKICWEIAIQDYAUVZWGONYREGJSURQWLGEVIXTBQAOSZOEGDEJRYVRPXXHMSTCZHNXNGLWHVAFPWMSZZUTESZTMEHHUDLDRGBAWVOVRLJTMDDAVUNSCFKJOSARF");

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
    msg.setTimeStamp(0.399277808432);
    msg.setSource(44901U);
    msg.setSourceEntity(155U);
    msg.setDestination(58523U);
    msg.setDestinationEntity(17U);
    msg.autonomy = 133U;
    msg.mode.assign("PDVCHDPZAKXVJLLOCTYUAAXIGAPTQOBZLUZFKZERVKNFFPHMMNMBFHSZQTRQMAGGOTRWKBLSSNXOOQKODYHGYGKVQKCW");

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
    msg.setTimeStamp(0.940377542024);
    msg.setSource(20897U);
    msg.setSourceEntity(227U);
    msg.setDestination(16406U);
    msg.setDestinationEntity(190U);
    msg.type = 73U;
    msg.op = 242U;
    msg.possimerr = 0.472933474447;
    msg.converg = 0.263739568537;
    msg.turbulence = 0.349151584367;
    msg.possimmon = 62U;
    msg.commmon = 152U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.695014198948);
    msg.setSource(15127U);
    msg.setSourceEntity(239U);
    msg.setDestination(39884U);
    msg.setDestinationEntity(39U);
    msg.type = 133U;
    msg.op = 47U;
    msg.possimerr = 0.333099451584;
    msg.converg = 0.09371167657;
    msg.turbulence = 0.0366758772083;
    msg.possimmon = 145U;
    msg.commmon = 222U;
    msg.convergmon = 154U;

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
    msg.setTimeStamp(0.518923197158);
    msg.setSource(45162U);
    msg.setSourceEntity(24U);
    msg.setDestination(9499U);
    msg.setDestinationEntity(90U);
    msg.type = 151U;
    msg.op = 89U;
    msg.possimerr = 0.871184279051;
    msg.converg = 0.231835134221;
    msg.turbulence = 0.875742792687;
    msg.possimmon = 171U;
    msg.commmon = 250U;
    msg.convergmon = 227U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.136287575355);
    msg.setSource(31358U);
    msg.setSourceEntity(112U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.551385599082);
    msg.setSource(60265U);
    msg.setSourceEntity(40U);
    msg.setDestination(35527U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.140813456518);
    msg.setSource(50587U);
    msg.setSourceEntity(213U);
    msg.setDestination(31960U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.372034280625);
    msg.setSource(20751U);
    msg.setSourceEntity(9U);
    msg.setDestination(64934U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("NKUAKWYCOMPSUTGBOQZWIKATPYRSUEDZDLHGYSKIOALTBNEOBSLSVIYAJAIOWTEHZUCGTZWLHJDLREBIBANJSUXYNAAXUDEYKHOERXJNVGSBXUQVBZFHKQWZKPQCVMTYNEVFGNLRHNKVGWCMRBUQCFTLPMXCPVYU");
    msg.description.assign("XKUKUHYNMLWSSKJHASBHRKVNUOGQAFGQPJGFZDOTHSXGDMQXYWYFUNNCVLVNXYHXMIXJHJTCBZJXHSVQKTMPJTKULEKLIWEEVQNATYRORZPYLSQUUELOIJSSCLIOPPCOBTFPUGZ");
    msg.vnamespace.assign("MTWURCUNIBKBDWHAYPTOKGATWLRSGJHVRBMISPQXLIEQRHMNWANYGRSBCXSFAJQZTTKXUNRLVEJZKRUKTWRVZFVOZHOYFHIJVTYLPKVZLAWSUUXPOOHEVSJBAZNHMGHCDEPCEGDGKMQLDCBAXDLEIYFETGQCFMGRYNIQYTCLKNJYQLDBROMJBINKAJYPPWDFKECIUHZXE");
    msg.start_man_id.assign("JJUYHOKAZBNSVNXUQNLIMHQJAHCFDTLWGGABJLFMMVKKSECOPYKYALFXSNXIRZEKWMEXJCPVRBVPPRFMVODVHBNWOZRVWWQPDPDSIAJAGRCMCWQTXNIGSUAVCSSVIILEMZLOXRQFD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DQAXTEXHNYYBDEFSSMBTNPDMFPZRLLOA");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.967889645926;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 12651U;
    tmp_tmp_msg_0_0.custom.assign("WLXQYCDVFZDGAOUSWTRKTWHVDICLOODMMCQWTRUZLVJEHSFDFCIKRGYLCVIJYJIYMNTMHKNFIAEXOVJATCWJXSYWZGMNJTDQNIXVNPRGMOBJKKRMZVGARMPSCGKLVFACQOKXBUYKBKLUJJSELIPUHBHBZMHOQOCMUYUKULTVPEDQNNDNFPFTEZGRFGVHYGARPXDREAIPBNASSWWXOZFUSSAEHQZTQUPWYXIBAQZHD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JOPMDGAJJB");
    tmp_tmp_msg_0_1.dest_man.assign("NGUHCJGPAEWGLRQPPJIRLUZQIPTHNLWLEAJZHBZXVLPMOZHBGAVYVOLQPVZTXSVLFTVQIAENADFEJONXENRRMBUUFPMUCWYBTVCDIGXWVPFZKQNFAANYXTCQTZRHRJH");
    tmp_tmp_msg_0_1.conditions.assign("ZXALXOUPJMQKUEDXFWMEBUSRYZKMWCSTSLWNEVCPKLOWRVFHMTDZCBYRKQTLPLMMQJVMAVNDQWIHPSLGOETZTYUYHNKFFAYCCFHBENJGSDSHTAJXUGGOYUBQIDSIDHIMRAQXCPHRWFCBJWXZIEUBWYVYPNCKIKFNPGLZOSJRBIMVFHKETNCAXDKJOVALWQFIBZAS");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::TrajectoryPoint tmp_msg_1;
    tmp_msg_1.x = 0.724553461682;
    tmp_msg_1.y = 0.767635662164;
    tmp_msg_1.z = 0.337161926938;
    tmp_msg_1.t = 0.229827672158;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.350139594701);
    msg.setSource(13688U);
    msg.setSourceEntity(76U);
    msg.setDestination(26024U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("DNKSAJNSPIUXIRYYGCHYCQVZOWXPZGTRDVCJBXVCIAFXMTUNETEGGAUSRGUVGOHEZDDHYIPBTK");
    msg.description.assign("DWLDHZURSMGLYAFSVAUPCRIFBWBKZVLDDHKMIDCMIJGWAQRUQHYRGYQTHOPTZMKYPKZAOQTVVRKQNSXYSHOALONXBJIMWPWGFVUCAXKYCWUYOHYCBOZKJZOMZDPWDRUCVWOFIXJLXAVBTAECDFTJENIEKJXRQSHUNEGRHRUXJPARXTBGENJCIFDXMQIZVSBEDBTJOTEPNPFSLZNYKGPZSTGGAOWHFPMCQLJHNNIVLWLSXUTQNLM");
    msg.vnamespace.assign("NAILTWLRMZVDRGMNZRLUGXINLEULTABHEHKLDUOPZEFRHCGEHTVEINEDOAQJPZXQBBOJUKZKQKWKWQCBKCVDSIOCGPNLABSXSAFVKYMSDMZJBWYYPQSPHCYBRIPNAWCGFLXWGIRHJDJWQUDNMHEQOOEQTETYOKKGUPTRXLCBFQZOFIJSTPELVAZRGYMCCHASXPXTZZORFFYHIXDBYTUJUAAWVSJUNM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EDLDVBTZDYRXKAAGNWBOGOONPRMVSQBEEIFXDFVXNWCAJEGZLPYGSTHZWVPVAIOCLJHERCEKAGLQYEPICCUCTBJDGVILNMFCHJBVKTCKCVZSXNVKAUWZJABQILRMRJYHGJFOUHRTLIOVRXSPPSHHUBFMZRESYHQYWZXZGNXMJ");
    tmp_msg_0.value.assign("WLWDVECVGKWKFKIYPTQHANGSVPZSWQTIIPPKKTOAONEHIBJKRUJCVKHQBRHGWBDOAGTEXNZVYPRVJXMULOGHLHSCFHLLOBAPDJQPQARCLDQWFEYERMNOUYXNTYNTCVZCXYNPSZQEQSJMFIW");
    tmp_msg_0.type = 109U;
    tmp_msg_0.access = 25U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IWSSWKISHVUTPONVLOAXSGDUWYVZOLAANXLCIHUDTFNZNQDSATUEMIQAKCSAGKFCVPCGDGIRSWMMARHZZEEUGNXPWOJVFCVYVZWSIZYYRBYHKIJBSLYBGIBTGBTMLCBUKEAMWDDNTJJWQJXEGFEEYJFHQPOFZUAQWPHIURADPUXRCWNQTPYMHVMKNEXOJYEOT");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IAJZRVBDLAJJIOJYMHCTYCHLQAMXBFAVNRTHLOWEXZTFTWMIEKENUDYRDEWJSSBQTDEWUXHPLQXN");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 61423U;
    tmp_tmp_msg_1_0.lat = 0.205727768736;
    tmp_tmp_msg_1_0.lon = 0.183629391282;
    tmp_tmp_msg_1_0.z = 0.61114215764;
    tmp_tmp_msg_1_0.z_units = 119U;
    tmp_tmp_msg_1_0.speed = 0.705490371317;
    tmp_tmp_msg_1_0.speed_units = 110U;
    tmp_tmp_msg_1_0.bearing = 0.0517102146157;
    tmp_tmp_msg_1_0.cross_angle = 0.937540367811;
    tmp_tmp_msg_1_0.width = 0.330738274151;
    tmp_tmp_msg_1_0.length = 0.68675138119;
    tmp_tmp_msg_1_0.hstep = 0.711303478482;
    tmp_tmp_msg_1_0.coff = 104U;
    tmp_tmp_msg_1_0.alternation = 207U;
    tmp_tmp_msg_1_0.flags = 86U;
    tmp_tmp_msg_1_0.custom.assign("KXJQVNUMCBHXECYSMLMPWUUZUFCOIZHEOBKDFDNJHNJEUIXJBJZOSLZXRHTSRQVNGZYDUCEWBYKCTZJGGOCJVORMDBZAUQQPMZBNFSCYIVVLHXEZGWGRFOAHKQKJGWEQVWFWUYAVNNRGIPDLVFB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::AutopilotMode tmp_msg_2;
    tmp_msg_2.autonomy = 223U;
    tmp_msg_2.mode.assign("OMYIJMPETCUZRIOKZRRKKXRIJNVJFNGBPIFXCCNUUWAMHWSBVTAMPCEBOBSQKAFONHOZGQWPFZWHYSEJAPQHYIVQMAEBFGDKGVCUONCPHNBDSMYMCGIOEBXCMWDOCERLDAVLLLZOKUWJVTTFETDLJDXPWALFFNEMWJJLSJLLUZTYBQXTQEUYHGGIQGGSKXNABQXWPXNAHSJDANHSTIRVDVVDHSKCYLUIOXPYFSTUMPR");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::VehicleState tmp_msg_3;
    tmp_msg_3.op_mode = 87U;
    tmp_msg_3.error_count = 234U;
    tmp_msg_3.error_ents.assign("NRCLCTWRYOTNXRHHWPFTAEVEDPYYUGXRIQQTVJNHPHPIQVLHETEGUBEEFGZWFWYNISTIZFDCSZUBTNDRRNFGIOVCEXBYHUUSNAOSMGXLQBQWYDAVWKMIRNMVYSDZOSCYQZNJUOUXJMXOM");
    tmp_msg_3.maneuver_type = 63828U;
    tmp_msg_3.maneuver_stime = 0.456853059946;
    tmp_msg_3.maneuver_eta = 23349U;
    tmp_msg_3.control_loops = 2455680680U;
    tmp_msg_3.flags = 209U;
    tmp_msg_3.last_error.assign("EMLLAOJKGCFOOXQWGXDATVDSAMFZ");
    tmp_msg_3.last_error_time = 0.148974268872;
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
    msg.setTimeStamp(0.906823889846);
    msg.setSource(50456U);
    msg.setSourceEntity(4U);
    msg.setDestination(9967U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("HICPTESTXAYHTOXYZKNTJKUSJLFWXEIWUOIUPDZLVVPBFYQFACIXNEIAVKGTUQPWTLDQERMVRQBCHGQXOVMOBLPJSAYHYQLEFRDYCGWJSNEKHGJBNTITCODHKUGAAWZXKHGPIMSQIOZDFCKEWRYEENBQHNBXFMMVXMDRJPAIFRWHXNWFJPNNWHYUFDTONZBZTLDUMGSCKPLCXDVJLRFUUQOMR");
    msg.description.assign("UEZCQXBLZCNXRZAVLPJZG");
    msg.vnamespace.assign("JTFCZCOWLBPKBQOOKRTCRSAXRFQNTNBNTVPQPGFVNRTSBKXTALXKNWWVDRFLUHCIQTUSFGZQKOGIJADIEYVJGKIEMG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NDRLYPNGBBWFMG");
    tmp_msg_0.value.assign("YUMENYVZRVDWWUFLVQJMJCJTSJGFRUBLZTKRMECGFMNINPZAIDWYAAXKEMULAFXXDKJAXIPMTQBPNEZCOZKFBHLVIDAWLUNEIJAUHYKIJJLVXMCQAWRRISBTAMSYHNCGZHXAYBOOQF");
    tmp_msg_0.type = 18U;
    tmp_msg_0.access = 98U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XDWVQGVIHEMJDOMYULUDQHMMVFKZTFF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QNHGMXZKLHLFEMAUDQYRXFRHECFSWJRACIXHVKDFQFUINRKDVDGBABUHNLBSWWBFNVWYKJLXUUSMGRPGBUGJJDQTWZXXIMXEIYEFBIQRIPHEPMZHULYSCDCGJODQIVYJTUVYKZCJESMONTJHETOBNKTIOPPHATOTXGHSAZVLDWLTEYSVYJGAMALZLRSPZUZYQWIBWGDZBOMCNCOFQQTCRSNWNVEOVPAYTO");
    IMC::CompassCalibration tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 56651U;
    tmp_tmp_msg_1_0.lat = 0.898292938816;
    tmp_tmp_msg_1_0.lon = 0.791254137497;
    tmp_tmp_msg_1_0.z = 0.195047344927;
    tmp_tmp_msg_1_0.z_units = 90U;
    tmp_tmp_msg_1_0.pitch = 0.878874190699;
    tmp_tmp_msg_1_0.amplitude = 0.181767170321;
    tmp_tmp_msg_1_0.duration = 48008U;
    tmp_tmp_msg_1_0.speed = 0.110932328869;
    tmp_tmp_msg_1_0.speed_units = 179U;
    tmp_tmp_msg_1_0.radius = 0.786891659561;
    tmp_tmp_msg_1_0.direction = 162U;
    tmp_tmp_msg_1_0.custom.assign("CRMCNPPZYQLYBCUACYPANWXCOPRCJBMTHDRWLVXUEGBQRVAZKSCCBHFIKFHCTFZLXXJTPXEKBKJOENMTMBUVAQAZHODKQHSODNFTNQADIWDGKKOEOPJWEOUQRWHTLHIZIBIDGVEFWMWSZLIBWJUPUGYSFNPMRRNQFMAGAEBZHQR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::SessionSubscription tmp_msg_2;
    tmp_msg_2.sessid = 2168301224U;
    tmp_msg_2.messages.assign("CHDJBTASQMKMEQYWTGUZORXQRYJPXCJHTBQHLCMEFFYLGJZHANRYGZWVDBVIVAWCTAAOBUGLFDWHKEUUSMNJPUESQRKFMNJBAKINISDZUGTEZDF");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::GpsNavData tmp_msg_3;
    tmp_msg_3.itow = 3301592876U;
    tmp_msg_3.lat = 0.916026868416;
    tmp_msg_3.lon = 0.430256187446;
    tmp_msg_3.height_ell = 0.253567709161;
    tmp_msg_3.height_sea = 0.329605590267;
    tmp_msg_3.hacc = 0.445641046716;
    tmp_msg_3.vacc = 0.353825214904;
    tmp_msg_3.vel_n = 0.495973532739;
    tmp_msg_3.vel_e = 0.468567280264;
    tmp_msg_3.vel_d = 0.135551912574;
    tmp_msg_3.speed = 0.98604581056;
    tmp_msg_3.gspeed = 0.711680419824;
    tmp_msg_3.heading = 0.549533620706;
    tmp_msg_3.sacc = 0.317480511933;
    tmp_msg_3.cacc = 0.638047564601;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.542117080268);
    msg.setSource(4004U);
    msg.setSourceEntity(146U);
    msg.setDestination(52793U);
    msg.setDestinationEntity(64U);
    msg.maneuver_id.assign("HHBKTOXXNDAETITHHSSIUARDKJGSKREXPIVLVQKALDOQVKRGDMYVSOZYJUTUBCSZJVJPZYEHQJFSJVGNIUAGFJABPYRRZMSVZQKKQCOMFQHLZQTTAUUPUVDCAARDNQNVBKWCWWDLGIGPHVWXPIWCBEJHTDXMWEGWGFKZYRIZYGFCKIFPUFIOOLPCCSORHHYJDQXMNMEZXOSBNPZOXTEQYFTRLSMNXUTCBY");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 18450U;
    tmp_msg_0.lat = 0.452806885562;
    tmp_msg_0.lon = 0.668931048831;
    tmp_msg_0.z = 0.342924588598;
    tmp_msg_0.z_units = 227U;
    tmp_msg_0.duration = 54196U;
    tmp_msg_0.speed = 0.956691842098;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.type = 153U;
    tmp_msg_0.radius = 0.556473479387;
    tmp_msg_0.length = 0.757598266278;
    tmp_msg_0.bearing = 0.578222738352;
    tmp_msg_0.direction = 154U;
    tmp_msg_0.custom.assign("DUDCVOAELJPWOWHLRUNNJVBTFOAADLZQWMGJPBZTASCFXJISIXBWEJMXVIFFXBKGZAQDFBYRITKYYVCRSMVKGGQWACUNHFXVKALOZTGQDMWHNLFJGAYBKQZLYLOYBDTFCVPNHOMMZETJUTDEBNCRZBNOHWFQJXIKAPUSKRHTIVXCTPWPYHXTZIVEJLXGDNOVWGEQOYPUQDEZSHKRMZQHPSGSYR");
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
    msg.setTimeStamp(0.39316593495);
    msg.setSource(28072U);
    msg.setSourceEntity(34U);
    msg.setDestination(44171U);
    msg.setDestinationEntity(205U);
    msg.maneuver_id.assign("SMPMZQDNXELNAHWEGOILYFPHLCDAGRWILVRKIBJRHKGPFFUFBMPEPJPTQATKENZJQMULVJLOQEESODSDVISQXCHURNCVWVGHTGBXYYGIKHGJQEMTAPHXNUQCCXRZKTXDGMRNVEOBKMUFRNVJWQFFWUEWKWHTIOATGCNSTLYDQWSJZFPDUASBCHVAYBYZSZLKBWBJFSPMYTYYXMRISEOOIOVONFZXQDKZWRLXOCMZUCJVUAUZAIRBHYDAL");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 46394U;
    tmp_msg_0.flags = 45U;
    tmp_msg_0.lat = 0.429356430173;
    tmp_msg_0.lon = 0.301717671578;
    tmp_msg_0.start_z = 0.3755200375;
    tmp_msg_0.start_z_units = 237U;
    tmp_msg_0.end_z = 0.190761562994;
    tmp_msg_0.end_z_units = 236U;
    tmp_msg_0.radius = 0.106530621762;
    tmp_msg_0.speed = 0.742715741023;
    tmp_msg_0.speed_units = 145U;
    tmp_msg_0.custom.assign("UFIVFVAFDRPTLHYQVCFUJSEZNNGGUAKWAKHYMXOBBGLWRNBSOCDDCTGPWYMKJWAHJREQGALZDIBIWPHHXERIJSPTRUOZPIVNCSTUNNEGCMOBVIRZDNWPWDHDYTLTRQLDXALHUYJPJXKWQHGVPLCZIVLEWBBYZMFSKXSHCMTKGH");
    msg.data.set(tmp_msg_0);
    IMC::VehicleLinks tmp_msg_1;
    tmp_msg_1.localname.assign("GDUZWOTFMLHENKZRSCGJSQQFTNAHSRPVLHLNDNTQXRCEWXPAPKWELLTUWJFODRZGKQWGOUVSXNIMGVOKQXPHZWVVENXMVAPGYECUQMKMYCGSRZCEXVCWLJTCDKRGMUNIXMNYXDGTNMMJUADSACFGLZJBTUARVTFJBQIKUIYNDUAJDOWXFCZOLOFHMLWDSVHTAEPHHDIBOYPHKEPKIZZBKXIFRZHRYSJISAUBFRQQFBBQJETW");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FormationMonitor tmp_msg_2;
    tmp_msg_2.ax_cmd = 0.796663196873;
    tmp_msg_2.ay_cmd = 0.806633865306;
    tmp_msg_2.az_cmd = 0.741469433022;
    tmp_msg_2.ax_des = 0.510381405215;
    tmp_msg_2.ay_des = 0.152203925738;
    tmp_msg_2.az_des = 0.541953437541;
    tmp_msg_2.virt_err_x = 0.268843970021;
    tmp_msg_2.virt_err_y = 0.327260227832;
    tmp_msg_2.virt_err_z = 0.418844585632;
    tmp_msg_2.surf_fdbk_x = 0.679291956617;
    tmp_msg_2.surf_fdbk_y = 0.953757006785;
    tmp_msg_2.surf_fdbk_z = 0.409520920056;
    tmp_msg_2.surf_unkn_x = 0.850450277893;
    tmp_msg_2.surf_unkn_y = 0.91201599168;
    tmp_msg_2.surf_unkn_z = 0.154855407531;
    tmp_msg_2.ss_x = 0.581991347641;
    tmp_msg_2.ss_y = 0.840107741377;
    tmp_msg_2.ss_z = 0.145576161991;
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
    msg.setTimeStamp(0.660858432081);
    msg.setSource(20773U);
    msg.setSourceEntity(208U);
    msg.setDestination(5628U);
    msg.setDestinationEntity(215U);
    msg.maneuver_id.assign("YUBUBXSOLQLGAQYHOYHMOTEZNVTTOWECABJCRRPZNPYXVBHBTUBYXNQWNVHFZGMGWDABQIFTYFGPZDMGPGRKTZRHRLQIIESQTXSXKDAJCKFXVQKJOCIGADDLYDBWJFOAESUWVRHHPCKWMJQCABIVKSTDDHEPHLFJYJZCSBEURZPIFAVGFZXYGCPKLVKLNINEDPXUSXXLQHCTKOQIWVMSIVRENGKMMANNUJJAMTWOMRZDMUOPLSUIY");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("CVICEJXRKKJICYXDHFMZZQGWUJYLLUUDSXLIZDYKYXEVVNYZMELSEQMNBI");
    tmp_msg_0.formation_name.assign("IDPREYAOXODUWLWTSACOIPLBUQTIBOHPZIKCMUBFEBCJXLRUWXKFHNSVNYFVZWQNDTYJGQMNTGUILTDUCHRGFMRSEVHPLRNMQMD");
    tmp_msg_0.plan_id.assign("XFVGOPCKOMZDBURHZJRDASXGUABOWJMKOPZETSYCJHVOIDJUYFVGUZAHGBFKSLOQNJTFNPJBAWJOERZNMWNLIDQBKSYRFUGLZQQUIEAKKVSXLOTANFUSXOLMIFLXEPVGXIMHYCYRRBPFDPSREBJEZQPCVQWNYEAVNTESHGGPCIGEKXRXNIWXWDYPNDAUNHLZMSYPTQAWYZVHHHYDCHWEJFKTULTIDJTBQCVZCACK");
    tmp_msg_0.description.assign("NKFJKZGEYPVHWVWDDYXUVVJKQJLUYBZNGCASVYPNLLPTIQCOCUSATDAJECPJCWULKTRGFEIFMJDHEF");
    tmp_msg_0.leader_speed = 0.863886372448;
    tmp_msg_0.leader_bank_lim = 0.51351394805;
    tmp_msg_0.pos_sim_err_lim = 0.814032326629;
    tmp_msg_0.pos_sim_err_wrn = 0.473089125473;
    tmp_msg_0.pos_sim_err_timeout = 27564U;
    tmp_msg_0.converg_max = 0.0480021279872;
    tmp_msg_0.converg_timeout = 30942U;
    tmp_msg_0.comms_timeout = 43212U;
    tmp_msg_0.turb_lim = 0.00384496944656;
    tmp_msg_0.custom.assign("QIVFLFHOMGIWQRAXGOUJECDTGMRBHARMZHNUTXINFIYREPHEJKSWAHSGWBQIDBZECNTDCMTEXBLNIDKPLMCXGFCMKBNLHYQVYAYHBIZUJVXNHZUNGDSEOWUCHTAYDLFRDMWFJFWFNMULUJCLVKUTYAOLTHJWSTKJGBELWVPZUQEXKZPQDFEXRGFRXCOKXMNSYSZYKTEXDAKYPBVUOBQJPNQGVJRAVPGOCJYSZI");
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
    msg.setTimeStamp(0.652199973511);
    msg.setSource(23796U);
    msg.setSourceEntity(223U);
    msg.setDestination(47927U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("EOAHZPIJDK");
    msg.dest_man.assign("SPFDJGOZQRIHOOUFROUUYRSUPHCGXOFWZXDKODQMLLGIPRIIRWRYDRMJAAOIVTDIGLASQKGOEGSNBFYXQZCHSCTBPYWPHMMFBBVVKWETPMLZULNYMRKHAZSJNLEVBFSKUYKJNJDGTJTUYCEEFBJJTBCVHCPQIKAMJWWLTNVLPWEQXNXXIDKFAENSZYCSHHJSRHCUTXIZBWERVGNAFMZKDF");
    msg.conditions.assign("GCNSXCDZISFPBSQYPEIDYWUTMXYLCIDEOWIWGPXTXCTUUDMVHBESBSNPZCOEYFTDQCODBACIZWKLAVIIIRZSJFEOPBXNRZLFHQKXKULOQFFNTJUUGYHNLKTQSJZYLHFAGNWDHPZOVOKKJJXDBBHZASJXMGBEACFPQLQVYGMJMSRWHJMOREFEVRHGGQWSUWQPVQOPDAFBKNNWRDTMLZU");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 119U;
    tmp_msg_0.eta = 11457U;
    tmp_msg_0.info.assign("OBCERZMPXRMTRVAWURPIQLMNGTDIHJSHFZNASTSCFZQKWCGUXDKFSAVYBJNWIJLOKPSDJGJINJFQOQYDRBEHNXDMYVVBGHLCUKJCEQZLEFRNA");
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
    msg.setTimeStamp(0.281102856976);
    msg.setSource(45415U);
    msg.setSourceEntity(144U);
    msg.setDestination(54129U);
    msg.setDestinationEntity(171U);
    msg.source_man.assign("KSCTSUGMBGTPNNYATPEUYVEHDXGZUZHPXEZGYTVHYXKOMUGMNATGC");
    msg.dest_man.assign("CYHPLNEBKYKMEOWMFLLBNLOUAF");
    msg.conditions.assign("NFXGVWQVHMOBGSXBMFNDVHLYTAYSGTRDPOLRORASLAVCKFGZYBEMYREOJMKALZCGNRAZIMWLAQTTOTOXDWKKXFJJUJPWBYUKCICSKFIWPJMDDDSHAZZSKGEVJWECAPEWZUJGHBCGIQMCUYOFZHFPDJULBNBHUIVWSTBKFFQVXBHPIVMNDGEXIRTIQXHHYBDQHJILAQQLEEPIKVUYPXNYARCVUPZGRQPCYSMLLZRWTODCSJSWENTUNQOXTO");

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
    msg.setTimeStamp(0.234252755491);
    msg.setSource(52264U);
    msg.setSourceEntity(145U);
    msg.setDestination(45156U);
    msg.setDestinationEntity(28U);
    msg.source_man.assign("PPZOANMEJOZNWFQNUVLFKPIKUEGPIOLYMJRYNABMHENTSIGBMYYIPFJFSFDJZTQJXEGOXDAMBBAXSXRIVCUXVRQNZJGLYBQZWYNRHZUUDRFSXYCQWQCFQESGCSUXBWFKZTCLUIPHVTGZMWDAOSAIKVRHVVKGESNGDWLHXHHNLUCOYTJECLMTEIBKIADEVLDUOBXOKVQRWCJRCZDFRKJLKZADXATCKEWGNSYOAMWDQHSPTPHLVQJ");
    msg.dest_man.assign("DLLNRGOIVYRMPKNTCKFJKZCICAXIZHNYPXXLFDOKAGLHFVHDUGUBLVASFWQPRCKWVTWYWRZIMUMOBEZYYZTVDUTLILRBSJZSZOSYORODRQXEVQQSCXJUHJQFCXNAEHSFSGIRVOXNHILYTCAJIFDJWUKEKFYMZNKPDSPGOGBITEZBEEPTXQPHSHHDSUQIOGTGACLMTETBJJWPBJVR");
    msg.conditions.assign("FABOYKPIAHZSFDBDUALKUFLYSYIMHQGTXHPZUUHWLLHDFWUBXBTDCOYMUNOZFWWZEANRZEAIFEOEJMIPELJBRNYEYELICZSQTKJWPXWOJYVVOUTRQDDTGZYICREORSHGSTGNMAEAM");

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
    msg.setTimeStamp(0.3454474139);
    msg.setSource(8470U);
    msg.setSourceEntity(70U);
    msg.setDestination(54062U);
    msg.setDestinationEntity(7U);
    msg.command = 67U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VQRLFXNJSZNBKYFRZXDNTTHLWLCGMBBTWSWSLYPJPBSEMBCDCAXOHYSRYGPLQAUMGITRQQWOYEJJXXGBHWHZCUDQIMCIULZJHTCQSVUBJVEAKOFWMRTZFQUGUHDEOADZCBFDRKINNTJYOXLBIAULMXVHLUVPAKKJPGSEVPPJVWOIMRGMWCYUEEXVTBXEEYPRHNINDAIYHPZKRCRAQMKOFADLWGZQIJHFZDSSVONY");
    tmp_msg_0.description.assign("NGVBSIDKCXTEFYTNXHLJEPQCHICKADJVKBWABQANIFDXVSMDTSVRWGOCAJAIUHSTEGQURKLFYFSNPUYBMDJRDZVGAEWJQFZLAQVIBYGTTUWISU");
    tmp_msg_0.vnamespace.assign("JVTMSSPEXPOHGLJKCMVYTUQNSGEBTRJQGFDXKHWWSAUHCVGJCVEBJUUWDFTZZIEZWWPQLDTCPXDRYKWASGCMVSRBEFALXTFWYMKPQEIJSJVPXHGEXQBLPNZYYKBBDDXSRLLYCARQCGROMBNUGZSMGRHMEIJRNVCOJEACAZMDFAYTAQHIKXUFTM");
    tmp_msg_0.start_man_id.assign("DUIEDFCFJQII");
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
    msg.setTimeStamp(0.138754195826);
    msg.setSource(14186U);
    msg.setSourceEntity(229U);
    msg.setDestination(24189U);
    msg.setDestinationEntity(228U);
    msg.command = 147U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VVZRYQMUSNJKYZRBIUFAISIINJXOYXWLIOBELCBNVUEFHGWFVTBBGROMBOGBMUHWYXAGFFOPESPSOKHEZMQKSXFXKBUQSPTJPILMJWTRJVQXDPZZDWUQUWSEDPDLUTNTHLYXTPKNSRN");
    tmp_msg_0.description.assign("IPBOXEMBIUDSKGRCNZGFJEQBKULRBTZLJABHYIEXWZAJAMFWQKEPDYGMVGBYBIHESMKKUVFCFCBQLFICTEPPHDSKTOOWHAMWYHQIAOODCMPDRAROOSUFVWVLXZUJXTEWHTLQJTERHLYXKSORLOYMZQNCYUSWFUJVTDRMQSELZKCXDRDQYSXXZIVBALYCPPJGZZS");
    tmp_msg_0.vnamespace.assign("BPUITATYLQCAMNAHDZQGJEVZMZSKYEKEZTNDXGDEMLHJCMTBMUYYWCTVLLOGYOPPOZNQGSFMIRFBVWDHXXCCNXWZHGGPBAMXTF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NMCIEGEGKPLHQOGOCACQZAILZEOLHXYVRHJJTDDVPHJWBPOMQIERVLFKRJXWHILRSAXMSNUQGYBZFUPGLSBVQBCFGNUZPFLIIWCGEAVEIHHBNAZNONJMNNWJ");
    tmp_tmp_msg_0_0.value.assign("TAKBWEJWOIOQMAEPYSLILLXQBZXHGCDZKOUGEYSVYDZ");
    tmp_tmp_msg_0_0.type = 146U;
    tmp_tmp_msg_0_0.access = 145U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OETIKOYXGQCERDGXDKG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RDGVYLWCYZZILBHJBHWYHXJNGXSFWLEAKLTGDYSTVJTQJMDBZKUT");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 55952U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DLFZNLDUGBMJFNVGED");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FormationParameters tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.formation_name.assign("JJJWOIBCQFXXVLIZFWSRQLHJMMGQSNUYWGIGTTLKQZGAUTWPFRINCIDECDYVUABTJKHBHCNWBYCPNDLILGFVXANEUMPIGSSNRCWTEWXEYDKHRQJRTXIAXBUZSVAGDZTEMCJNDPOHPPZTVHSZZJBLKSIDRYKGFIQUUEFQPHUQROSLXJBTCALAXRVPGKOO");
    tmp_tmp_tmp_msg_0_1_1.reference_frame = 245U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.vid = 9125U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.off_x = 0.399056633769;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.off_y = 0.279858894666;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.off_z = 0.989805347602;
    tmp_tmp_tmp_msg_0_1_1.participants.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.custom.assign("KUBJRSYELTAMVXMSIMJJZRWTGKNOYKFUQZZGWDEDFMNNJQFFHARUIOSCPZVUIBCFJTXHIIQB");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::AcousticSystems tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.list.assign("RPLEXOXXVNHQIJHAGCYMBB");
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
    msg.setTimeStamp(0.268233673307);
    msg.setSource(25764U);
    msg.setSourceEntity(145U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(32U);
    msg.command = 0U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CMOJHYPMUJWMKZPLEXLDKUUJYRFBWZNZZNKPEUWAXGUZSLXHAYBTPCTNBTVTSMPKEWSOMHKHIHIHDPSKBIYVCKCTUXYODGYQUVMFJACAGAEESELINOGGQGXIFLWLHTBTJBQGIIFRDQQBLRENZFLRJCZCFVHPXKOLWRSFCXARBDUUISBAGMNAXSBVQYKOYKFJESVQOWAWGPTCXGFHFCMWVRROWIMRJORVVELZZZAPDNDPHXYDU");
    tmp_msg_0.description.assign("YTJLIPJCJLUNA");
    tmp_msg_0.vnamespace.assign("OETDNXTUQPXHQEFZNYBCFTEHULDDECBGXWLMYUTDXGHKOOMPADOVCBZRCEVREIVDMOYJGNPYFBIPFYDQKQMWGKSIJVNCAPTYSKYNQIMRPWGEKKPLSWLVUCPOXLQOBIORRJBQTCNRKAMYQVHBLHKUKXRNUHGGETZDSFCZBAJUSZWPAIZLCJFLXMSVRHYZTHBJSFQLJFAXTZMWR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JDIYFIJCDNIFWIZGUOLAKIQAPFVQLOQHRMCEEZZBGYKVRLZFCMCYZZSAIGLDRHWXPEQHPJPKWOLTJYLDQEOXSNMITUCWZRQYAHAHRVWEFCMQPWJWCNEKLSYXKYEPBEDKGISFGBXTKUSCHB");
    tmp_tmp_msg_0_0.value.assign("OVEYQLBXPIZTGIEKPFXKFXEZGDVLTBYASQNMKSWOLNPEOZUYSFCOZBJGAFANHUCRMTBGDVURELLDMOTRPCHMGUSHJTAGFCVPOXYQUIZAENXWSZGQROFBJXUMINVOWILZDRRQWVUCTCOXQPDOQKGITJCJRXFIHWWKBDJZCZLQEHDKEBAHRDNJWJNUBJLMEKAWYWHHDLIXPCVBCSRPDTXKFVGLPKNVSYZHMFQNYUAA");
    tmp_tmp_msg_0_0.type = 98U;
    tmp_tmp_msg_0_0.access = 186U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GVXNBJDNFVFEGEJVEYYEYVFRZ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YPRTYMPYNFBVXIRFZUTJDDUYIUGPVRDYBIKYQVZUSERTJUFGTWMVEJALMGWOXUGRNSNZTFKFOEHNCOJDBABPLBMAAJNSSVHFGCCIZRCQSLJOMGBYRDIEMUEVAVIXWZTYKIEJHZLCQPJLYLGAYANTUZBPEMINTXIQRADHGXBNQHOXSFQKLCSNQBZCHDOJWMQGSSMVWODXWREJHUTQVDLZEKAFMOQGAWNW");
    tmp_tmp_msg_0_1.dest_man.assign("GITJBABTZIOCULKGOPVKKMLCTREQTNASYYRISORWHPOTCGUSIHFNWHTEIYEUUASGPOUSSXTDBPHLHLEKXBJHZEJYFRVMZDDKPCAVAXTSOEMIKLLDWMRAWNDMMGZVBWQWLCMXQNUJZGMPKTOPRWCSENNDVEC");
    tmp_tmp_msg_0_1.conditions.assign("DKUQCORJLASADNPQQBBZJVNOCKSVNQUFOBBOEYPDZBYYETTLHYFJOFBJMOIGBMLPCJWVSEPIVNHPQJGSEKMRCGNUDACMVLXWXGTGUZUYCPOCEZXGMELDHFBJOR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CacheControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 253U;
    tmp_tmp_msg_0_2.snapshot.assign("RLVBVUVMFOXZFHEKDPGZPSRXWNYMPFIBJUIBNAGMOGUQCBTLUNFZWZIWIAELMRAJUGAYLCTDQDPUJKGBQMFOWOQKEAXHFISHEEMSHO");
    IMC::DataSanity tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sane = 232U;
    tmp_tmp_msg_0_2.message.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::LblEstimate tmp_tmp_msg_0_3;
    IMC::LblBeacon tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.beacon.assign("ACMJXATCTWKYUJGMWZQGJRHCTNQDAGNSVEXELNEIPOFNDZFMYFLBTKSHWLTMOFNPWBWVOHRUEOFCIJKZSOHFPZWBDSFCCIQSPQOBGUXYTKGYOIZWMYUFVNQHHTDIBPGKKRILWKRTJLUXROXLLNHUS");
    tmp_tmp_tmp_msg_0_3_0.lat = 0.728621969026;
    tmp_tmp_tmp_msg_0_3_0.lon = 0.938324789174;
    tmp_tmp_tmp_msg_0_3_0.depth = 0.237055665623;
    tmp_tmp_msg_0_3.beacon.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_tmp_msg_0_3.x = 0.211815924308;
    tmp_tmp_msg_0_3.y = 0.433736096819;
    tmp_tmp_msg_0_3.var_x = 0.655049765309;
    tmp_tmp_msg_0_3.var_y = 0.511619819136;
    tmp_tmp_msg_0_3.distance = 0.635419051964;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.477443519908);
    msg.setSource(55324U);
    msg.setSourceEntity(217U);
    msg.setDestination(24687U);
    msg.setDestinationEntity(247U);
    msg.state = 79U;
    msg.plan_id.assign("MEDBODTRPALRQHSNCBVYRACIEWOHZDYDJQLXSOTYKUVPBXSBAFIHTIEGRDZPUOZXSJGVDOX");
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
    msg.setTimeStamp(0.540498819801);
    msg.setSource(8643U);
    msg.setSourceEntity(189U);
    msg.setDestination(63296U);
    msg.setDestinationEntity(163U);
    msg.state = 213U;
    msg.plan_id.assign("JJODPZXQACQCKHABLIRNJBNSVMYAMWOHWRPVFCCDXBQIGVPETFZQXZDTQOSVWJIKGWLSYUYEXFNFHBRZKUKMONRXDNUCDXLJDRIGFZOCSPAFXTZXIWGJGZHDAYJITOLHLSNGWYTNMFEDLISUQMURMOTMGEPTSYERAEVAEQMCAQTXFWYBZDJYSRNVUNBTHKBBMLWETVGLCPJUISFPUKDRKPVEZJSQBOKQ");
    msg.comm_level = 246U;

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
    msg.setTimeStamp(0.150595875243);
    msg.setSource(60553U);
    msg.setSourceEntity(146U);
    msg.setDestination(31420U);
    msg.setDestinationEntity(148U);
    msg.state = 55U;
    msg.plan_id.assign("WCMOKNHLMAYNDPMIUDRWGYWAVQBGCNUHCFZDKXESGQNXZISVYRBFDZBFVJMKAZXVRGTUVUAVZCLGKNJSXSKHYHXSJTZLRTFDFGRE");
    msg.comm_level = 84U;

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
    msg.setTimeStamp(0.644283333012);
    msg.setSource(40435U);
    msg.setSourceEntity(11U);
    msg.setDestination(59429U);
    msg.setDestinationEntity(207U);
    msg.type = 183U;
    msg.op = 152U;
    msg.request_id = 49582U;
    msg.plan_id.assign("PNYQELYKGOZQBRIXTEFJILSWEGUOHKRAHQEBVZPFDPLXNVIRUHCCOGJOGCFQKLMLLJTYQNWXBAVFGACSUVGPPFQMZZXKKMRJYISYLHPMGAABMAMRSNJDZCFEMACXODHSONWLHWQYBWTLHSKSRTZITKJFRENIMNWENYLRKPDAYZIWCJEPHVOBFXMVCBXFUDITKNDPUYMGXSDVBGJJTHUVWCGRTIENXTJOUVZTBHIZDKFPODOWRSUXSYDCAQQW");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.257554907238;
    tmp_msg_0.lon = 0.862113096742;
    tmp_msg_0.height = 0.94683429626;
    tmp_msg_0.x = 0.960487244973;
    tmp_msg_0.y = 0.810887318977;
    tmp_msg_0.z = 0.93693043654;
    tmp_msg_0.phi = 0.302281820852;
    tmp_msg_0.theta = 0.369113644677;
    tmp_msg_0.psi = 0.977087202127;
    tmp_msg_0.u = 0.201114554326;
    tmp_msg_0.v = 0.552884236383;
    tmp_msg_0.w = 0.10393624345;
    tmp_msg_0.p = 0.22643978323;
    tmp_msg_0.q = 0.213893984005;
    tmp_msg_0.r = 0.0241383658489;
    tmp_msg_0.svx = 0.826404388775;
    tmp_msg_0.svy = 0.156870450107;
    tmp_msg_0.svz = 0.350553283408;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IYRRDOLKBWUJOZZILZBYPSMHQVTPUTMZCUMLBOXSTDFGBFLROTHHQWDNFWADDKFSGYAFIVVEIXCVGZGYSAEZEKQHRJUWFEMDRUKWQNBQALAGHRRSXNHPZFDHMOYSNXYJVWQGPGXMIBHATDIRQEJOBAEJMXQVMOVLDHEJUZSWIPLBCYKFTYCIKCCXCXMTXJPWWOKTGCGJNPUCBKJPKUYOZLDRNNAXEFFQEVVUIPMBNNEPHLGKSIARWN");

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
    msg.setTimeStamp(0.738832612799);
    msg.setSource(5559U);
    msg.setSourceEntity(24U);
    msg.setDestination(38217U);
    msg.setDestinationEntity(234U);
    msg.type = 216U;
    msg.op = 172U;
    msg.request_id = 17843U;
    msg.plan_id.assign("IVHSMJUDWUEWGLLZXZXEJAXPBDVVNFMHYVIFSQROPJTGXZQTRPZACHKWTZPUUVTGOUIQMDQYNLXFJKAGJDZCEYILMHADRBAHQVLNOWHDQCQWHBGWGVEGTSZNTRSKMYRCUSQGVPFEDBSABEFOJATOLECOXPWYXHNSTRVKTCAIKEPOLNPIIZSBBDDNKOLKRMKKFPFCWNGQYUUFJYCMEJKTSZPJQWRHFXWCYMN");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 46254U;
    tmp_msg_0.name.assign("VYJIJNMKTFGJNCAFHPRZXOGHYOHXDFDPGZHLJQTJUCHSFTUBSIWKRJCMYLNBYEDPEOLLFZDEPZZHIAXSCSTWTAURCNQIZGBLKYKWQRLNTCOJRAAZFHOMQGYKUXHMASIKSTEIMBPYOUONKJPQ");
    tmp_msg_0.custom.assign("FMLWXQZKJHVESGPDHVKKRAPZYKHAJDDAEXFNOFINJTUHOSJLOGZLYNSCWCEWCMLZNMZKMEUWORGQTWGJQFVADXKCDNXOTCSIFBUBYPMRALXAUOUOMZZNMIALQARTCBQAWIEEJIYRYOSBUGKTJGGWXKNSBIRLMFXRDHKCLVDGFEQFPHFGJCCIVITSPPVQODLSIUBEYPZJRXHUBT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TVHICPCYFNVUXKUICYMPBLVGAJZGTJVSOYNFWBIDRUYLTGECOHQRAPWEBFIZSVCNHWIGSROCJHNXQNBKKABUHKBUTEMYYFVATJNXZCXJDWBOXDJGAPGHOFQMGPMTXBAQSWZJORQOOZKIARSBNFOQQIUUFWIGDLKNZESXLREPENPKUQTYAMVEXEGLZH");

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
    msg.setTimeStamp(0.694332107899);
    msg.setSource(16616U);
    msg.setSourceEntity(166U);
    msg.setDestination(29557U);
    msg.setDestinationEntity(129U);
    msg.type = 32U;
    msg.op = 129U;
    msg.request_id = 47823U;
    msg.plan_id.assign("ZOHTAYKIGGDLUDOKFJRLOCVDZPJSIJXJRZMEVVSSYCCLYANTMTQROGAQYRSMDFLYBDNBXXITHHMZZTKMTIZNPOVGIPMXHNQYEBSIM");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 230U;
    tmp_msg_0.plan_id.assign("TXVRREOHVSYKIZIJIAZKAYSRDQTQWIIOUGANFIGWKIHCAWQDWGQMJRPTFMKWLLAKHZSXBUWGPLTUODXBMYWGHPKZLTRCXPCRVZOVXPIVJQUEHJQJUMJLP");
    tmp_msg_0.plan_eta = 855169455;
    tmp_msg_0.plan_progress = 0.969431556536;
    tmp_msg_0.man_id.assign("FSTXTLJXIUSLQABNHVJPLQKVSGYYMIRYNLIRXQPZQUUENAYSLTVUUHFRXSXENYZRHOKBJQDGYGIFXXUZTYDZEKHHIJMPPWGTVGGITAXWFDESEOOQKKHMEEYWNWGGTCBIMWPMWDEFMB");
    tmp_msg_0.man_type = 52704U;
    tmp_msg_0.man_eta = -847202565;
    tmp_msg_0.last_outcome = 168U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JEYKNIPAPUEQMUKFBILILKVDUQMUOLCOEDBBEHTXHOARBOCMWPTXGPPAJSUZGXIWUSFSBZCEWOSYSEMIEWUVZYOGKLTNUHVJWJIKFNSWUXWLQAQYYIJJXFJLSKUXCKRQBNSRLYXRGAZADZGPDZMDGADNOHKLYNFEFVVJTEEZW");

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
    msg.setTimeStamp(0.209228527597);
    msg.setSource(55836U);
    msg.setSourceEntity(149U);
    msg.setDestination(60868U);
    msg.setDestinationEntity(68U);
    msg.plan_count = 24518U;
    msg.plan_size = 866765066U;
    msg.change_time = 0.764196617457;
    msg.change_sid = 27243U;
    msg.change_sname.assign("VPRWDPOTAQOBCWDKIBHFUGHJFZZYUXSPDETDVLRYOPAJKPDKMJJCWWVRBLJPCYEHRLTYIUTVMANCJPWEEIMSDNFFMCACXVWQRFMBRSYBFYJLXNQCWPREJBVSEVL");
    const char tmp_msg_0[] = {119, 63, -58, -20, 103, -75, -51, -107, -14, -110, 42, -112, 0, -120, 91, -55, -113, -10, -124, 82, -24, -42, -35, 104, 100, -119, -80, -68, -95, -96, 98, -9, 59, 59, -70, 14, 49, -32, -127, 2, -85, 49, -125, 12, -23, -50, 73, 108, -122, -70, -68, -100, 78, 1, -86, 70, -25, 35, -36, -33, -113, 121, -128, 49, -115, -97, -47, 13, 123, 69, 34, -86, -43, 114, 83, -17, -58, 45, 32, -94, 6, -25, 42, -61, 94, -40, -71, -87, -75, -118, -52, -64, 54, -61, -34, 24, 76, -54, 42, 124, 7, -76, -5, 80, -78, 26, 100, 57, 54, 64, 9, -86, 75, -44, 83, -63, 13, -72, -7, -38, 45, -75, -26, 124, 104, -28, 90, -67, 17, 85, 51, -16, 71, -5, -15, -56, 110, 5, -20, 28, 102, -105, -103, -14, -36, 72, -91, -1, 48, -65, 54, -106, -58, 72, -45, -121, 90, 100, 54, 1, 117, -86};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JNKVTKGZRVIYCGGMCUPIRN");
    tmp_msg_1.plan_size = 57704U;
    tmp_msg_1.change_time = 0.0894217435988;
    tmp_msg_1.change_sid = 33883U;
    tmp_msg_1.change_sname.assign("MBSMMNLYPANMVZXVWNVPLQOZUSDMTWMMB");
    const char tmp_tmp_msg_1_0[] = {105, -69, 22, -54, -60, -113, 79, 96, 100, 19, 110, -52, 94, -36, 61, 43, 48, -8, 81, 57, -52, -99, 96, -56, 87, 76, -109, -108, -81, 34, 38, 117, -81, 7, 117, 32, -85, -71, -25, -98, -68, 57, 96, -33, 31, 102, -18, -54, -109, -121, 6, 34, 52, -4, 36, -47, -68, 69, -98, -85, 77, 57, 26, 119, 29, 2, -111, -41, -116, 83, -121, 85, -100, 7, 81, -108, -115, -11, 13, 118, -123, -71, 29, 105, 98, 65, 48, 51, -99, -10, 120, 3, -93, -27, -47, -82, 65, -64, 88, -5, -122, 17, -10, -29, 90, -22, 63, 34, -103, -9, 78, 112, -11, 10, 100, -116, 72, 5, 32, 44, -45, -122, 64, -89, 42, 23, -11, -57, -96, -94, -13, -80, -44, 98, -106, 79, 49, 19};
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
    msg.setTimeStamp(0.313070497037);
    msg.setSource(61580U);
    msg.setSourceEntity(170U);
    msg.setDestination(29132U);
    msg.setDestinationEntity(78U);
    msg.plan_count = 49190U;
    msg.plan_size = 2605564672U;
    msg.change_time = 0.0400818320184;
    msg.change_sid = 5372U;
    msg.change_sname.assign("OBFRQGEBQJWGKGKMHEPCLAIUAHIXSNQMNHHZKEIVP");
    const char tmp_msg_0[] = {-36, 122, -42, 2, 33, -31, 33, 53, 36, 29, 119, 75, -119, 20, 123, -95, 97, -122, -15, -67, -45, 18, -119, -41, -88, 48, -102, -62, 34, 91, -119, 25, 122, -125, -12, 45, 37, 8, 0, 114, 73, -108, 30, 117, 61, -26, 2, -114, -111, 87, 54};
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
    msg.setTimeStamp(0.0231145138939);
    msg.setSource(9334U);
    msg.setSourceEntity(110U);
    msg.setDestination(14476U);
    msg.setDestinationEntity(182U);
    msg.plan_count = 8897U;
    msg.plan_size = 608189343U;
    msg.change_time = 0.1095617692;
    msg.change_sid = 46356U;
    msg.change_sname.assign("LXOBSJFRCEGUFLPIDHCIDJOPRIOMCAYOGATVCHAFXTLVFMOTQEPKQCWWZZPMKVYXMRNJZHPTRFJDZAMJZPCYEAGJOUEDDYSXEIRIAMNCYGWBXPRXWEWDNFVEBQHOLEHOQTVULWMSRVBYNRAUDCLBQVHTPQIFGBODSLINMHCHLSHSBBKJNXSMIARBYEVZUWIJLFXGKTEFXMUYZKK");
    const char tmp_msg_0[] = {30, 78, -121, -58, 118, -32, -62, 82, -93, -79, 62, 15, 68, -123, -63, -1, 102, 107, -94, -1, 107, 46, -107, -7, -10, 2, -121, -24, -83, 85, -82, 21, -89, 104, 21, 5, 68, 41, -56, 78, -13, 87, 101, 9, -81, -110, 39, -85, 95, 62, -17, -71, 67, 23, 66, 19, -116, 57, -120, 105, -9, -30, -8, -27, 85, 1, 48, 96, 22, -127, 35, -19, 25, -122, 31, 33, 20, -42, -120, -43, 52, 109, 76, 78, 56, 64, 59, 122, -107, 34, 119, -67, 38, -29, 47, -41, 43, -128, 6, -38, -104, -7, 21, 66, 99, 70, 10, 91, 6, 8, -33, 16, 78, -81, -6, -13, -50, 118, -15, -24, -45, 29, -87, -125, 93, -16, 79, 48, 97, -38, 107, -101, -40, -83, 54, -92, 99, -7, -102, 96, -35, -125, 51, 108, 77, -107, 65, 117, -12, 42, 6, -108, 75, -109, -116, -27, -31, -71, 74, 57, -73, -8, -37, -115, -1, -46, -99, -61, -60, -86, 111, 82, 26, -103, 41, 106, -12, -20, 104, -22, 40, 99, -54, -1, 113, 29, -121, 8, 19, 53, 92, 6, 32, 100, 19, 78, 123, 55, 43, 43, -127, 77, -60, 75, -33, -101, 43, -123, 44, -71, -34};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UIBWQWXTDTLBWXONACIHRIYVMULDIDGNKPQBKDRRYJGDXVTPCBLFRATVTJRPEUFHAKQXEJBUFYVQYVMGAVGGQVLVUEKCOACWFYHCDAJIHYYCIOWUYQZWLENSOKNGQDGSJRFDSOSJFMKXBXGKMMHTZWSDRRCHFLEFRQWCQHSPYMZRTXMIPLHJTMKZHOHUXVZZAFLBKOCUAJGLUBSZWIVBZWJNTLSNADYMCSEXJEMPEPQBAPEZEO");
    tmp_msg_1.plan_size = 12113U;
    tmp_msg_1.change_time = 0.662613688076;
    tmp_msg_1.change_sid = 30312U;
    tmp_msg_1.change_sname.assign("ZACNXDXFHJIMVYBSPOYHFLUUVYKMCLFUJZBERDFPNTTQEYSVNDORTBUTDPLKRESMGDMSSCJZXNGNUJEHDJZPFYMFKMCEEVVBBIKUELGRWZPKHQUABDXLJUTKSITENNHCOSPIMZNOOWQJYOHIADLAGQ");
    const char tmp_tmp_msg_1_0[] = {-95, 117, -62, -58, 17, -111, 17, 83, -45, -18, -14, -60, 70, 79, -108, -128, -26, 90, -27, 48, -109, 5, -73, -53, -46, 125, 70, -34, 29, 8, -95, -35, 35, 50, -113, -26, 108, 86, 106, 52, 7, -87, -19, -73, -80, -57, -109, -119, -96, -93, -28, -21, -97, -40, -16, 67, -35, -108, 34, -3, -47, 60, 125, -92, -47, -94, -77, -75, 14, 125, -126, 43, -73, 16, -85, -54, 105, -35, 100, -117, -49, -30, 62, -37, -123, 91, -19, -64, 99, -62, 25, -17, -63, 32, 84, 114, 111, 90, 5, -20, -109, -50, -29, 25, -123, 23, -48, 56, -84, -7, -79, 7, -124, -122, -117, -14, -126, -111, 60, 117, -17, 42, -55, -13, 87, 88, 19, -116, -114, 82, -15, 24, 43, -106, -74, -48, 76, 0, -91, 74, 78, -36, -49, -104, 103, 60, 47, -49, 33, 42, 44, 103, 99, 44, 101, -46, 14, -2, 58, 22, 116, 109, -32, 121, -108, 57, 20, -70, -76, -107, -102, -82, -73, 120, 64, -10, -79, -4, -16, -98, 98, 94, 43, -11, -72, 83, 34, 40, 71, -20, 27, -2, -42, 65, 89, 89, -93, -75, -95, 85, -65};
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
    msg.setTimeStamp(0.459414666594);
    msg.setSource(39365U);
    msg.setSourceEntity(43U);
    msg.setDestination(21543U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("UYZAPQOMTUGSSLIGMPWMHYVIFZOXPGNTFAAVEKKBPYSCWXOKAR");
    msg.plan_size = 6248U;
    msg.change_time = 0.564548246322;
    msg.change_sid = 61448U;
    msg.change_sname.assign("GYPSSJEVNMIKFPXOEUEYHKFQWLZYYJTLRLQNZXFPJHTUBXFXHZCASKGPOXVZMADTLUHBTRUIDINWRDWZGDEBVHUURGYIKYCZJOSMLQFGFEPGNBXOATKMNXSCSCORIITZLSOZGPVQRNIZILPDFJAQHWJRQGBWVBWXKDHUCMMCJKAIRQWUOFNYZVTMDQDFVCPBSTBAOHM");
    const char tmp_msg_0[] = {-85, 51, 99, -28, 36, -52, 103, 83, 70, 89, -59, -35, 73, 62, 46, -112, -89, -122, -62, 35, -66, -64, 42, 113, -83, 9, 104, -90, -29, 78, -49, -122, 113, 6, -108, -70, 22, -105, 34, 76, -60, -30, -42, -68, -13, -24, 46, 113, 19, 33, 57, 86, 73, 67, -44, -63, 84, 37, 87, -50, -21, -85, 50, 7, 27, 120, -122, 94, -63, -17, 70, -35, -22, -26, -93, 105, -63, -32, 24, -9, 91, 40, 80, -58, -95, 54, -21, 74, -54, 126, 86, 112, 109, -5, 33, 109, -123, -7, -119, -4, -51, -69, 14, -95, -90, 47, -7, -97, -9, 21, 106, -73, 25, 117, 125, -94, 5, 107, 126, 94, -108, -64, -4, -120, 99, -69};
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
    msg.setTimeStamp(0.0363374377092);
    msg.setSource(47540U);
    msg.setSourceEntity(17U);
    msg.setDestination(55770U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("HPTXLHGPLZXSIIEMCUCDBZHTWNCEFLNEFOQQIROHCAMWDWERVZPEZSJPSACSRGTSQKMZMWNFDMJHFABLJHUCVOYOUCJVYJUBVYWXGRFQXPOYRROJUZFEBAKFEVBDMXEUNTYHUWSUIIWKGNDGOF");
    msg.plan_size = 30924U;
    msg.change_time = 0.168494647535;
    msg.change_sid = 41136U;
    msg.change_sname.assign("FZQKBMGVUEKULLIGXDDTEGTNYJW");
    const char tmp_msg_0[] = {11, -91, 62, -22, 5, -65, -88, -2, -17, -65, -72, 46, -67, -118, 73, 125, -101, 29, 83, 55, -31, -22, -58, -17, -53, 88, -68, -117, 60, -110, -90, 46, -35, -4, -33, -91, 100, 87, 86, 100, 74, 94, 78, -20, -57, -5, -40, 119, -123, 64, 125, -84, 17, 21, -42, -57, 8, -88, -105, -73, -47, -20, 100, -36, 45, -4, -115, 3, 116, -4, -106, 28, 19, 97, 18, 26, -61, -7, -25, 104, 71, -112, -37, -86, -70, 123, 41, 55, -116, 126, -25, 57, -2, -29, -71, -12, 47, -121, 101, -58, -84, 39, -77, 25, -24, 80, 71, -73, 36, -107, -23, 3, -116, 7, -60, 116, -119, 19, 103, -85, 69, -51, -120, 89, -105, -73, 38, 93, 25, -44, -67, 125, -102, 66, 120, 87, -53, -82, 58, 122, -14, 21, -46, -104, 126, 81, 112, 68, 104, 88, -123, -114, 77, 96, -88, 81, -92, 111, -102, -18, -67, 92, 51, -39, -69, 115, -18, 64, -98, 15, -116, -79, 30, 99, 82, 61, -66, 9, -109, 96, -110, -32, -63, 108, -63, -45, 47, -52, -114, 110, 99, 66, 109, -106, 114, 94, 106, -24, -4};
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
    msg.setTimeStamp(0.354182527531);
    msg.setSource(15940U);
    msg.setSourceEntity(251U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("UNYUBDZKORELNLGYJQKFHPIXZHGQYWJZQMYBCLSCPQKGRKXRCOEZYZULAKCXLBHMUVWOAARJEJTSGWILIRLKQJLIFKUSRMSPMCPFPUMFHMEXZRWHUYFPYKREXGARUSZINEQBQJDEZRMVDNBHAGGDAENLZHC");
    msg.plan_size = 18096U;
    msg.change_time = 0.725863605755;
    msg.change_sid = 33766U;
    msg.change_sname.assign("JXRFQTTBNUPSZAZIHYSLHXHDSFZZBHOOWCKXAPPCFFGPEDJJAGVQCRORKFCWAPTTURONAOKIFKGHNWMKWUZPJEJXWCVVEVFZIRKLRNNVKQAUYKYYDEQHQWAGVQDOSTBCJOSVZNPBAGDVDUMDNPMOMMIILQSITKNPOSUSETEXBINUUAEFCUEVBORTYCRXCGZJYKHJILNDMMQRSLXBXYMBWDZTLAHMSTJWWYHLVXEFYCGJGLFRGQIXBBZL");
    const char tmp_msg_0[] = {118, -32, 3, -119, -92, 12, 102, -113, -68, -12, -45, -65, 112, -96, 86, -104, 74, 26, 85, 32, 107, -88, 109, 51, 18, 14, -23, 105, -46, -69, -107, -73, -123, -44, -39, 68, 25, 53, -14, -73, 6, -50, -20, -59, 65, -78, -103, -67, 67, 68, -57, 112, -4, -24, -63, 32, 81, 32, -78, 84, 109, 35, -32, 9, -99, 70, 3, -115, -105, -93, -15, 42, -81, -71, 3, -19, -83, -55, -120, -38, -49, 60, -16, -75, -84, -56, 74, -34, -71, 51, 96, 36, 38, 10, 68, -55, -29, -104, -3, 104, -23, 123, -96, -1, 0, 37, -118, 57, 90, -81, 22, 100, -57, -32, -59, 121, -34, 92, -63, -41, -1, 126, 20, 39, 39, 108, -62, -8, -33, -33, 20, -56, -8, 4, 20, -89, 14, 123, 93, -46, -126, -55, -100, 13, -112, 88, -53, 51, -20, 21, 24, -89, 1, -113, -45, 101, 1, 74, 121, 92, -25, 46, -121, 49, -105, 37, 81, 88, -31, -23, -44, 80, 32, -81, 28, -27, 116, 28, -29, 70, 108, 34, 8, -41, -11, -72, -119, -20, 106, -69, 10, -72, 0, 116, -127, -18, 67, -93, 23, 74, -76, 15, -35, 55, 108, 70, 90, 73, -47, 41, 112, -54, 101, -86, -49, -6, -105, 43, -83, -33, 79, -20, 118, 69, -103, -33, -110, 43, 78, 47, 118, 13, -105, 105, 112, 113, 83, 7};
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
    msg.setTimeStamp(0.808362599755);
    msg.setSource(5566U);
    msg.setSourceEntity(52U);
    msg.setDestination(61229U);
    msg.setDestinationEntity(111U);
    msg.type = 115U;
    msg.op = 20U;
    msg.request_id = 42544U;
    msg.plan_id.assign("MSJXIJDUMCMQMQJRRKNSUFDLWCPCBWBHLHAVTJYJKKYHHDXFMFBH");
    msg.flags = 11164U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("KVAVOUMKASSCYZDVBFSAEPLCFNZNQHCD");
    tmp_tmp_msg_0_0.lat = 0.636683453336;
    tmp_tmp_msg_0_0.lon = 0.335003244873;
    tmp_tmp_msg_0_0.depth = 0.577205381614;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.581637233578;
    tmp_msg_0.y = 0.512861005002;
    tmp_msg_0.var_x = 0.155082418606;
    tmp_msg_0.var_y = 0.748563179644;
    tmp_msg_0.distance = 0.960443177133;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LLTLHGCSHTYLEGDOKXPZKPPBFIWLKIZWPJXNHUPGTBUQNYGDSGKWMMQVECXZTRDUOVAYFIIXSHZQFEH");

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
    msg.setTimeStamp(0.100669217738);
    msg.setSource(57891U);
    msg.setSourceEntity(218U);
    msg.setDestination(27568U);
    msg.setDestinationEntity(143U);
    msg.type = 252U;
    msg.op = 13U;
    msg.request_id = 27628U;
    msg.plan_id.assign("HYIKWESRGQVIYZEMGUIFFAEEQVTHAUZHCPPEDGJLXSDGTCWTCBZAWUHXVNYUOJMZLPBAB");
    msg.flags = 65473U;
    IMC::ExtendedFormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 217U;
    tmp_msg_0.op = 158U;
    tmp_msg_0.err_mean = 0.394583963315;
    tmp_msg_0.dist_min_abs = 0.262003707162;
    tmp_msg_0.dist_min_mean = 0.236841395663;
    tmp_msg_0.roll_rate_mean = 0.63026058509;
    tmp_msg_0.timespan = 0.0156789039347;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 144U;
    tmp_tmp_msg_0_0.lon_gain = 0.129027576096;
    tmp_tmp_msg_0_0.lat_gain = 0.250958703907;
    tmp_tmp_msg_0_0.bond_thick = 0.374598043699;
    tmp_tmp_msg_0_0.lead_gain = 0.931698365955;
    tmp_tmp_msg_0_0.deconfl_gain = 0.0994040332378;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.603784356891;
    tmp_tmp_msg_0_0.safe_dist = 0.343713872036;
    tmp_tmp_msg_0_0.deconflict_offset = 0.770559053445;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.37489900205;
    tmp_tmp_msg_0_0.accel_lim_x = 0.411046924165;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EJSUQQVKVHWBQGBXJDJKXJQCIDGQGGLICMPMDBTNGVUCOPRIMWTGZQPNVRELHOXKYSOUPJDRIZPXXWNOTCALTSYAOBDXYLDZTMZRIOECACXFBHKSKKNDFWNJAQJAYDUEGNLNVIZILSYXWIQCJTEAYFIBNGBMWMNRXHFPHKYYSDUEWQYCCSYZTOVRUMFPZUUWZLJHUDIVBTHBEMETVMAAHKRP");

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
    msg.setTimeStamp(0.338872107071);
    msg.setSource(62965U);
    msg.setSourceEntity(96U);
    msg.setDestination(12920U);
    msg.setDestinationEntity(142U);
    msg.type = 161U;
    msg.op = 58U;
    msg.request_id = 20457U;
    msg.plan_id.assign("SIOHBLNDLAXQMSIKVKFCSLPTDPKXJGLVGREWCAUQPVVDLNNBDYVWGNCHVXPJQNXRUJNJKFIGTEWFLQBQWXIZBOCJEBFJPGOOSRFHYFTTULWTCOZGSXYCUGYKEXMVNUPNJFMKLTKSMGOUBRYTMIHDUUMSIEZLPZYKMOZ");
    msg.flags = 4052U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 49300U;
    tmp_msg_0.rpm = 0.650552676588;
    tmp_msg_0.direction = 77U;
    tmp_msg_0.custom.assign("ZPOIXWHVTURXTMWXIBKISFCLJPRGKCDMZTADLACUVINATYGWEBLRBYNYKXLAEDSKJZTSZVRHXCMLEMTAWIJORZORUODTFAFUFZQNFUNJNTNWFKHMOSXBAHXNCSZXQEDQDP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("REBNOXGXAXYRGTMOYBWKCPZAQQTUGGQQCOIEAWKOLPSLOGAMJUBLYUJMEOADVYFHJVTZOHMPEDXEJSUVGEKVTIPQCSWGVZLHCDYEFCRIMFZJFSYHXLHQMVGJRDFQRZADHBFNXVISKIDTDYHJZTZQNXIXSSBTTFLIXNFHYNWEWJODUI");

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
    msg.setTimeStamp(0.617295697813);
    msg.setSource(32945U);
    msg.setSourceEntity(101U);
    msg.setDestination(27124U);
    msg.setDestinationEntity(185U);
    msg.state = 152U;
    msg.plan_id.assign("HFLRWQHUVDFGXWHADWXPOTURWOFLEDVGNWSOJEKQQBQLCRMZFUHWLXNPZSWGRXIRLCGNCJYEHIZSEFPIPMFKIOGLRIFOVF");
    msg.plan_eta = 855264686;
    msg.plan_progress = 0.801499516321;
    msg.man_id.assign("QXQSGMTOFBCMCDEUVQMUIHIULHCPSENTUGJVWEXHKVQOASFKEZKRMGRDRUJVIWYHUWDIZYWIYAZCBYOUBDQSPZBELKXSFBFVZBFWREWKPGOTOZDLGVZLQJVQIVMEBDBRJXDPORIKASNIS");
    msg.man_type = 65295U;
    msg.man_eta = 184174007;
    msg.last_outcome = 40U;

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
    msg.setTimeStamp(0.0740194944757);
    msg.setSource(15385U);
    msg.setSourceEntity(74U);
    msg.setDestination(9981U);
    msg.setDestinationEntity(41U);
    msg.state = 218U;
    msg.plan_id.assign("UZPIQOPJOGXJCDQXPKCMIHHASCMJLXEOLPKLNZBWEAWBPXYJOEKNSIAEGCGJKQNVPQWHWSBMZDPZXFMNWFTMBMMIVVIRLQHAKXSKNVDYVUGOQDJYTEOFHLOZVDKWAYBJFVTJKYTUDZOBRKVOHZXGENDMBZPYDSZCWBRRYKQXNELRSAGPUFTFTRGFBJUCDUNQVLIHAWLUYQCGZWBAETUSSTIPYLMIFRNXHLGFSREEJCWMTHXQYG");
    msg.plan_eta = -998662002;
    msg.plan_progress = 0.386736061316;
    msg.man_id.assign("RORKATQBICIMVVVYEESWLCOEWAKBAGLYOUIGNEKWWZBIZKGWURHZNBSUTZJXWNXLDVUJEALLEUFDTCNXTJVWKPMHGHXRYCMWJSCTWJTYMVIEONOKRHQFQUBPHIFFRDBMLRTXWIKTBZYTODFNQOUBAMKLFNP");
    msg.man_type = 55080U;
    msg.man_eta = 329152306;
    msg.last_outcome = 4U;

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
    msg.setTimeStamp(0.119103894953);
    msg.setSource(30797U);
    msg.setSourceEntity(248U);
    msg.setDestination(13113U);
    msg.setDestinationEntity(63U);
    msg.state = 214U;
    msg.plan_id.assign("IORSSRBLCUOHDYQYDLHYGVNPDMWREDXTKUQKCBCQZZWGGXXGZIHISPRJEMJQQONMEXQFGOZORNJESVETCSAXUKBHOKXZGKLVPVKGLWBLHRTCFAJEKIJEINGVIKQVTNRJPVWFWAUYUABLUMUTOZFAHTFGVTCILQCUBSAWXNWIUJSYDYQDFXFRZDFBIHMCSMPADOJOYTZRCBARJNYTEWWUMEGKOYL");
    msg.plan_eta = -338447784;
    msg.plan_progress = 0.444358306641;
    msg.man_id.assign("BEDIBGHGUKSFULVRJZQPBPAWABIOBPZBEHTMXKYAYJWXRESNBVIVTCLJTCIHTNWVZOEKKDUNSIQWSSCKHBUMSZLCTQZHQYXFWFXGLHHNYGUZFRRYEWWZJKFPDAMQTNNTSHAURXOZEOONVJQOUVJVCRAGDHYGALZNTWSYCLJMPWMEDPAXQVMYFSCXRKHLXQEILOUVMFADPLRYFYCCPCKLJUIBS");
    msg.man_type = 41085U;
    msg.man_eta = 1611642634;
    msg.last_outcome = 67U;

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
    msg.setTimeStamp(0.511435902328);
    msg.setSource(25317U);
    msg.setSourceEntity(213U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(104U);
    msg.name.assign("SDUSLBWVJEFRLNWDWXYZXMGUXKCOUNNCTPQXHWILKNDPEZCHJEVDQKJYJCAQOBFXCTSSRL");
    msg.value.assign("ZPFWNLQFHJZKXYNABYKNAPAVEWDVRIRXEVEJWMISTAOVCFJXWJWCNXTWNJQNLTSGZDOGHCBUUOOZKNHNYMZZQAMWGBWOTJYAMVBFLOACXIQDLHMXSPODSSBYYTTBRHGQBKRGA");
    msg.type = 108U;
    msg.access = 68U;

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
    msg.setTimeStamp(0.313740386595);
    msg.setSource(51659U);
    msg.setSourceEntity(206U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(105U);
    msg.name.assign("XRDHTCZJOODVAEDQAYECBPBIBZGLZABRLWPALMNQDNJPMTRRFDSLWSVDIWQPJPXZAKHWVAFBRKCNEZCQPKVRSEIVHZJOYFYMHKNBSWWONGFXGPFIEBJIDLGSIBJNGKMRKUZPXSVRYRYVVTWEFDOLUGNWTTUIHBZFIALNUUGEGQCHNOMNEYKXMVSPGWUYQJTAEDTOFAEXVTQTISXIYMCJKMLHOXX");
    msg.value.assign("ZAPHDCUJPJUARXHKYAQQKLSCVDCQTAXTCZQLLCWGCKRYPMBJZPYMLQAJUXLHJVIOSJTEZALAMKFHWVBZRRHKUOPKNETOZKIRXUAYMJCSMYRNMMIZYWDHELZKIPRWOFXXSTYDUFHGCKWOQWKDABSWNILBEJMEXVVGTZQEPNNQCGETLPENTIIUUG");
    msg.type = 181U;
    msg.access = 242U;

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
    msg.setTimeStamp(0.544909115306);
    msg.setSource(53169U);
    msg.setSourceEntity(22U);
    msg.setDestination(51453U);
    msg.setDestinationEntity(95U);
    msg.name.assign("CCVTIANEGRHUUTVLSPGPPRAUEXEOXXBNZVOWKKPXVGWFUIRLSEGMDCJAITNRYJSQMKRHPZXDDAKSVSCFITZZJWHRUBKLYTDRJOJHZKIQBXTGJRYLMIVKSEBFPK");
    msg.value.assign("IZFXXQNHAYXZUOMVGYEQPKTBLRFEHJNLLLKKOUBJDJEQGUPONWSHMPDDGSCKPQVGPHSKHFQJWFROTZSMXFUICEVIANPEBGIVTRNYMAMFJBOCEKQTCSGHEJFFCKMWNZALDAWQDDYOYUPXCLANDMRIQUJCZSRURBQWXUZREXPFUWAJ");
    msg.type = 227U;
    msg.access = 221U;

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
    msg.setTimeStamp(0.126726860615);
    msg.setSource(54930U);
    msg.setSourceEntity(127U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(89U);
    msg.cmd = 26U;
    msg.op = 80U;
    msg.plan_id.assign("TKGUXITBQAESRSAWMQURUOINIPAHHKOOQEFMFOYSZVPPGTGMFZDBLJLHMNJVCONGWLRENBNQYRQQTDJUMSLWXEUNZXCXRQBFFWOJPHRVDDTITTCAYX");
    msg.params.assign("XFEHQZDPLKNEPSERBKOCVUGWOVMNWMFMSHYNUGJTXDOLQXITRQH");

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
    msg.setTimeStamp(0.786252575916);
    msg.setSource(32670U);
    msg.setSourceEntity(76U);
    msg.setDestination(32982U);
    msg.setDestinationEntity(127U);
    msg.cmd = 196U;
    msg.op = 44U;
    msg.plan_id.assign("QKOYNWBSVMQWIHLOCMLTNKAQFMRJRIRFXBLSXWHHZLCMLRLGUXKNUBWUGVQIUCDPQKGJPEHEXDSBUGFIFAFYAZVYAPUVYOXOXCDUICGHCWUTSOKDRQHTRXPGJPYDBTZSPTZODTTNLKODCPNSHBYFFUBXZQKWEIMYHAFKEMGWREKXSVAZKNYPVEGTJWAAINZNEBOMDLJFSLBACXIMVMPHQQRVIUYGREJHJZCJPTVENJWJSTFSBRCWZLOGIV");
    msg.params.assign("GKQXZCBNLFOMKOUDNGASBCFCGAOQVOTXCNLFWAWQTRFAUUPHLGFAYGMKYASQBZNLLCKXAMTQTYOEUWJDMRIKPIEARFPXLBHHGZHWEFEDZUWUBERNUZDBEPJRFVK");

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
    msg.setTimeStamp(0.765815420284);
    msg.setSource(32616U);
    msg.setSourceEntity(89U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(102U);
    msg.cmd = 156U;
    msg.op = 127U;
    msg.plan_id.assign("AIKMVEAAEUOMKSUCBHEZXQGEZG");
    msg.params.assign("KUQBIOCVFGTBETIFHUXTCPXQKYZPPKNORHDCMRFZMYTWGNTLUVPQUCGOFQJMUBDSUFOKVRAAJHWXNMIEABKIJLMZXDESJWBJTOEFALMLQBEDSCRNYHPMNWAHZFPOBYQHGYPFUQOWSSEJZMJLZONHYDLSQNCCQMTKWRGBVNMSIHIDELAWSGRYEKFYWGIXKDCUZAIPPKNWWGXZOLDR");

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
    msg.setTimeStamp(0.0615630779582);
    msg.setSource(64802U);
    msg.setSourceEntity(178U);
    msg.setDestination(38610U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("OZEFDEFJPBVQFBQMJTCPJJBIGTTLBBGWOCKTUDPJRVMNNYSHHULETKWPUXCZLXYYVGHXDKMUAUICSWWOYJEIAIZROLTKAACPUDIYLQQMSUZUHYEJDKECDVCLSAMGFEPNSSSWZRTUUDOVGG");
    msg.op = 186U;
    msg.lat = 0.656073042934;
    msg.lon = 0.00210923265208;
    msg.height = 0.203948872855;
    msg.x = 0.21987592838;
    msg.y = 0.842697376956;
    msg.z = 0.272237872134;
    msg.phi = 0.00767353640613;
    msg.theta = 0.167479956576;
    msg.psi = 0.821074079086;
    msg.vx = 0.894184545685;
    msg.vy = 0.70789572615;
    msg.vz = 0.107658751767;
    msg.p = 0.796812768525;
    msg.q = 0.602669249291;
    msg.r = 0.740123618277;
    msg.svx = 0.0915328071191;
    msg.svy = 0.411325430066;
    msg.svz = 0.951885331893;

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
    msg.setTimeStamp(0.668917945115);
    msg.setSource(19023U);
    msg.setSourceEntity(71U);
    msg.setDestination(54445U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("NWIAUDNDCDIXNHRRZTGMXRUYVCUBWCADHMMSGFPLIOBLITBKKWQZKYVGAZTILDEFUIMLULPPVQYEYTUNUZNVXJHRHEJMU");
    msg.op = 127U;
    msg.lat = 0.172746315083;
    msg.lon = 0.699726021455;
    msg.height = 0.997835019751;
    msg.x = 0.71480219266;
    msg.y = 0.0141485625197;
    msg.z = 0.0296849074303;
    msg.phi = 0.0699395966388;
    msg.theta = 0.21116791259;
    msg.psi = 0.227479407138;
    msg.vx = 0.0305458490826;
    msg.vy = 0.72849353105;
    msg.vz = 0.446110138046;
    msg.p = 0.0245774617403;
    msg.q = 0.649555396413;
    msg.r = 0.749660230262;
    msg.svx = 0.267469510496;
    msg.svy = 0.610352253846;
    msg.svz = 0.553643186868;

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
    msg.setTimeStamp(0.381403073806);
    msg.setSource(22099U);
    msg.setSourceEntity(124U);
    msg.setDestination(33733U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("GWDAENZCDJLDTTTBMSMXQFAOXWPJELLJAKJVZHJMOLCUOMQWXMZIGMSQLSASLIEHVCKRCRDXDJYUIIAHFSPDQHJJHUUECREIKFADZBKWNVGIMNZLXSCRJFMBNKIHELBYQHUNBREXORYQRXCHIYZAIQNTNGYUJSFVYBAFXPSCVPPLBHNYUBKTAGKKKKUVRPQMWGPETURNGODFCONYYRV");
    msg.op = 248U;
    msg.lat = 0.00893831322388;
    msg.lon = 0.708139791703;
    msg.height = 0.82489812008;
    msg.x = 0.949119861198;
    msg.y = 0.641172293804;
    msg.z = 0.212247692305;
    msg.phi = 0.409972791418;
    msg.theta = 0.596320072618;
    msg.psi = 0.943403519063;
    msg.vx = 0.431320798186;
    msg.vy = 0.745721560686;
    msg.vz = 0.394903927213;
    msg.p = 0.527253539249;
    msg.q = 0.598755307475;
    msg.r = 0.168404662662;
    msg.svx = 0.0013415124031;
    msg.svy = 0.888908596576;
    msg.svz = 0.0865898053551;

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
    msg.setTimeStamp(0.119918673556);
    msg.setSource(10597U);
    msg.setSourceEntity(19U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("XNHIBYYKYCPVUXZKSPGTRDUDMCYAPNCNFNRREKMEWOTFVWRBJTXHPQPSGIBRJUAHEGKCEEBMDLILCPUGJLZTCTKTSIZHKEOIKMUBSIVMUHWGIDQJLJXXOSHIRLFZHKAFWFNTACURUJZVRZJGYMFYOJPTCRWNZPALVHOYNNBIGWAAQVWOCWSPJBFOXNKDULVIUMDYLOZQQQGXWNQKYBYSMBFPMDQSVVAGGWATSTZQEFHOOXXZMDAEXDREBSJQE");
    msg.type = 242U;
    msg.properties = 209U;
    msg.durations.assign("OBEXSIZTVRSIUPQEWTHSJGMDIEHVYGWGJWMTQOHPOKPNHPUJEZFXCEACYTKDZQJTXX");
    msg.distances.assign("EMDLBEEHTHJQUBZLILTCLWJTHSEUNGBYHRKRANZZWPAVGXNLGGEACTVXUISBSMIZWBFIHEUKMRSSAKSVRYJQIZQKWCFCOBXSXCPEFGSFHNLYJKEGDIWCZWMVIZTOOGVOROFYPFQFHRLAJGPKMXUXUQQQAWJADYPUYPRYOP");
    msg.actions.assign("EHRUUOHDNHJIBTHUMXFHJKFXOWYLFPTEJIRITSJDYCBZZJJVXUVFLESQQYUMXTITMEMWHYCKQAJFSHPONRAKZEWPZIRVOSPFLODTDQKU");
    msg.fuel.assign("EPWBIDCEWGCFECLQRXTESNOMTSGKSFRKRVDUYVJECOOGGMMVWZWBBUVQESIBCNFPBAEKQOAWKTLUTLRLOSONZKBYDXZVYWKIORTTTILZCKXWBYXRXMPHQIGKTNCSNXAJQAHQNXNULWFDMMNRHPYGGYSLWGPLBUJXBCSLHJSRDONIIGMHJFEJYVHAVHWIQQCJHUUZVHKFEZRNDFPMDUXHSYTLPMDUDEZBOQDVQRJPVAFAICGPM");

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
    msg.setTimeStamp(0.789329420698);
    msg.setSource(3085U);
    msg.setSourceEntity(125U);
    msg.setDestination(23151U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("UQZGSAIYDVRUMESQCGXHKOAPNEKCTDLYBETCBWPIYQUNVWLMOIPLQNSXMUHJFJVAQFXFCFKDWVBRTWKDLTPTWWAULCDQOLSPBERQEJPJJZUYYPXBVQWIXYHMTQBNDMSZTYWTDOAHJGRBCKGSHKKMZPVNOGYWENXTNRCIWCFBKOVINLVXGLDFAVKIRVMSJXFARJUAXZSAZDZFYIZSBHONCOEEPRHMEOGKOGZYSJHUQ");
    msg.type = 44U;
    msg.properties = 160U;
    msg.durations.assign("WGQPEWNSAITMBIHLSZRQSVJQHCAMGCJEZIWSJGQDABRWSYKLMURYVYKPGMEIEZGELYXFTIPOKXJDSHVFFPOBDZPABPADHNODCODSFKZWIGTXGYUQCYNJCTHQMBSUFOCFURNADEOLZVYQPXRVRTURIMKHRQFHKNVCAXLMIGPAXJLBINUCTUBTWFDJEWICLVRSBNLZJNXWNTBUKVAVMORHLTGGYBHWZMPOXEVXQNLFSPHQMZU");
    msg.distances.assign("QRAYHOYVXJDCKNZIBOWPANPYFJBCDPAUELWHOKJQZOMIBQRVUEHSMTBZSVZEYGTECCYVLOFGTJFGAZDNFGLAMRLOEFGNBVDDHYVQRIBHVOLWFTIHSKAGWKTQPYDEUTKKWZUNMWPNPMNWRUCMIYVEIKUDUJHGMJCCBQA");
    msg.actions.assign("MTOYEAYWMGVEHTTCEKDFWBXOUWIZXSQQOKOJXNMZCIAMKCSJKDRYRLGXGWJDVUPDPZCLQBUPNHDNEXUTZSRVSEJHGCXWHOIYENBLPYADOPWGTLSVKJPABZZYCQAMVBFULDNISJDFMUGCTPXHRIFNVIUUIRABSSKTLGWHJXHHGOYELWMGZKBBBWRFVUQKBMARVHRDGQCRTFSJVN");
    msg.fuel.assign("ONWNABGWIVTLPSQFOZRKWSYNAGOXLIYWKVMHPUMVQJIXAKYLBTRCTDXDSQHWSSTUOOGXGPSTYVBJZZIFSKGMXHJPLREMBUVPEDMCAIHYUJRYXNTPYCNAJOIVTFRPHDWLBEWQOJZULQSRCFVFNFPQBMEKUEDXTXNQEZHZFZFOACHZATHPDUJXCGYDVEPUNHDOLMDBRQLALDQNZSBCFKVU");

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
    msg.setTimeStamp(0.709931425871);
    msg.setSource(40355U);
    msg.setSourceEntity(205U);
    msg.setDestination(10234U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("DWTUYFFGXCHLTEUXRMPFFAZEMMDVEADXYAEEWT");
    msg.type = 114U;
    msg.properties = 22U;
    msg.durations.assign("ITOTMALXZQQUUTJPFMPLHNRHYXNQYVOAHHQTQVBKAYXETHPZFIBABAEFUPMDSYDZCOUZCCWMUDGLMHJKRQJRIVZUWKIBLFEFTXARDSYWCGMNYVZOMBLOLPNGXTPJMECFDIAQPIXVPBZECYQSYGGYRJLIJZGMWSYRFONEDQRWOWPCIXADNLGWWBSTACIJUBASSVVKLNOFXLVKKECBUKKEOHIXCZKRUUHDHWONSMGED");
    msg.distances.assign("GCZSSBKYIAXVQKBYULMBKLWOABTCUXFLADEHKZMCLNRDXYJPGTRTKBOYMNPYTTPPPNVHADEIRTPETWKVJVRXQGKUJYZJ");
    msg.actions.assign("AOCKBHINTLUBZESDARPROBFRNWPZLLIDERQRLLJSIOKPURUWKIWHNEHOQIDGILQZTOEEVHQGKNVGNECJIJKJWYHVDUOMLJSXHTXWQYXOMEFIXYDRSVYXWYRMXFYAXBRYIEJYHTBJVVNQRGGLFDUTCMSSTEQMLUCHMFG");
    msg.fuel.assign("OOWGBVIQHWYJNAHLIHSPRDCEEHASLCMUKPOFBTGUWMXPPBCMKYZXEWFVOGUCDKPMNPMHQDLJDOVVOCDPLCSTINWJYDEIKCQVWZDUQIOABNRLKUKMULXSJMPGZVHUERXOATJPDANHDBABY");

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
    IMC::PlanStartPoint msg;
    msg.setTimeStamp(0.897799957726);
    msg.setSource(30573U);
    msg.setSourceEntity(79U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("FYIQQDZQNTWUM");
    msg.lat = 0.0742670319478;
    msg.lon = 0.161176743686;
    msg.z = 0.211691142027;
    msg.z_units = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStartPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStartPoint msg;
    msg.setTimeStamp(0.666562891021);
    msg.setSource(37251U);
    msg.setSourceEntity(102U);
    msg.setDestination(50927U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("MPZFXMGHDRRKTWAPGASJDAUNUAFSUEKGTFQRUPZYBLLJRPWBXJPNQSMLSNTHIIDPTLMNNHDDEILUVSIBLEFOM");
    msg.lat = 0.548911039348;
    msg.lon = 0.0350121720942;
    msg.z = 0.859554304414;
    msg.z_units = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStartPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStartPoint msg;
    msg.setTimeStamp(0.703747995103);
    msg.setSource(51659U);
    msg.setSourceEntity(103U);
    msg.setDestination(48897U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("PUZHJRAVAZXGJFIBXBMWNAFMEZOBQMKWEALWEBERPWLZIBJAVTRWPEJRVISNNVXOSJMKKJLHXGDYYBSKLHXBRWZKFUDGUSORRDWHGAYNCHKLSCCFKPQQKPATDOAXCWVFOZSHVEJTJJCXAQGHBHFVSSTZZTVWOCLSQQWNGKVBYPANFYLBOXFTMRXQYYUFGHCMIVINODEI");
    msg.lat = 0.296866265935;
    msg.lon = 0.688046400252;
    msg.z = 0.0182469714181;
    msg.z_units = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStartPoint #2", msg == *msg_d);
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
    msg.setTimeStamp(0.865592196608);
    msg.setSource(50917U);
    msg.setSourceEntity(56U);
    msg.setDestination(34993U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.899096188758;
    msg.lon = 0.413618877709;
    msg.depth = 0.662037942152;
    msg.roll = 0.970836069738;
    msg.pitch = 0.850905741735;
    msg.yaw = 0.695401289994;
    msg.rcp_time = 0.684178777631;
    msg.sid.assign("EDYIKOFUYQPZCBWLFMQJWUDNMGKTLQVDTTDSBUONICVUIACBHRZMYFHLXTVNEGMNRQLRHIIXMUUETJLSAUPVONVRJAKNQGXXNIXLVKPUKPZRSSCYSFLWBNOHZGAWIGDQPRKQFHWJUVYBZTEDYDYCLJLAORJFWXSRXOPOJEEVWADVCCSCDBPKGCHITOQQBCJYMRWZOPZMNAEBTBHZMXJSIMAYKGXZ");
    msg.s_type = 162U;

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
    msg.setTimeStamp(0.413899917386);
    msg.setSource(38099U);
    msg.setSourceEntity(75U);
    msg.setDestination(12381U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.320999782246;
    msg.lon = 0.482228402434;
    msg.depth = 0.614212836515;
    msg.roll = 0.957869089641;
    msg.pitch = 0.0522849134924;
    msg.yaw = 0.837412069884;
    msg.rcp_time = 0.346512979918;
    msg.sid.assign("PQIAEJZITIZLPUKWHGFATBPPLRHNXQUGSLPOMOQCBUFFXLITIKATIIHJQFWQOUEFIJQJWIXYJWYTNZHGOHSVYENBSZMSVKTDDNLYCHOKYAYNTPVNGLFCRRHXYMREZMZSMNGZFJSRRUWPUPXVSMUKWAZHZJFLMWNQUEACLAQCRKUVDJSBONCQGGKDDEWMDFEWQOBW");
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
    msg.setTimeStamp(0.360589851446);
    msg.setSource(28035U);
    msg.setSourceEntity(182U);
    msg.setDestination(17274U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.682553832786;
    msg.lon = 0.467244618191;
    msg.depth = 0.0273367113069;
    msg.roll = 0.1244888;
    msg.pitch = 0.552656302049;
    msg.yaw = 0.31111954474;
    msg.rcp_time = 0.65525773192;
    msg.sid.assign("HCFQDUNOMKFIJVJHUPDHIUKTEGOZV");
    msg.s_type = 163U;

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
    msg.setTimeStamp(0.542515589984);
    msg.setSource(58277U);
    msg.setSourceEntity(126U);
    msg.setDestination(18446U);
    msg.setDestinationEntity(89U);
    msg.id.assign("WTMKYIBSUGXRMFZAAYPVOQTHYKTJSNEWQGJCPUNGYULZZEDDWTNIKNNVMQZOTYREBJEHZFPQQIXKIRLBIRNRFJQLODVOWYRPDDLPVBMKNCXKKUFLWUEHZIHEJUJGHDNPVHHOOCSPBAOCLZYXVSF");
    msg.sensor_class.assign("PWVXNDMJJPSDCVQPEVAQCXKAEBAKYNYZGHKTHFYCBYWBHCQWPUIYECKRLJAOTUPYARIXNITBNGAKUMDURRHXQYIGSAXHCFSLRNJQZZJWOLATLHMHNTFSLBJBPSGGXI");
    msg.lat = 0.064931877738;
    msg.lon = 0.602987727025;
    msg.alt = 0.825747325677;
    msg.heading = 0.206891308637;
    msg.data.assign("FSBQJBVHRIGEOUNHWJCDUOHMBDCYR");

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
    msg.setTimeStamp(0.734889898015);
    msg.setSource(63551U);
    msg.setSourceEntity(228U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(102U);
    msg.id.assign("OFFWIAVZIZJOZKGFWEYPPSZUVNXLMJMPXMROWVALBOIAXHFJPPNJGBZAVJVYRPINYPKGGRNICFDXMLHUTFGTBHMFWIXDHKZEAXRULSRSLGVWHFEAVUEEIUIRQOKAQDCMXNSGJJGHWKZUBCBSPBNYGQROFMLESJGCOSQNEWVNZUZIFWSTLNMLTSYMYOW");
    msg.sensor_class.assign("ZHTSRNJMQLAWXVUHLOEIYIXMGQCFBBLDZWLRZYMRVIYJIYWAEFTRXGKQLLESPWSMCPSDBKIMEKVNEOOVIDNWHOHXECROWJZNWPTUMXBLLUOKWKLQ");
    msg.lat = 0.266881058893;
    msg.lon = 0.448010435704;
    msg.alt = 0.0554597146579;
    msg.heading = 0.615142928196;
    msg.data.assign("YLKFVXRZCPCMUGLFNHYDRDTBABMQTMWAXZSYPLMZCWCSYTZULLNHNGONGHUVVFOKTJOZCXZVENOGPXAQCDWTMRJCBADKGFDAUDMOXCPKJWHWUWKXVEIESUCIYEBYPU");

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
    msg.setTimeStamp(0.346415476766);
    msg.setSource(57715U);
    msg.setSourceEntity(181U);
    msg.setDestination(11844U);
    msg.setDestinationEntity(0U);
    msg.id.assign("CTIMEQHXQUFBSTLIFGWCXBOZOPEZKRXXCPOEFNAHENKGVGAPULSWLIWLEYLJTYNLDSTOTFPEABTZCORVQVVMDJGZERYUWNKSQAISYIMDDJHVKDWHRQASAMNOBGMYPYKPDUJYRJSNWURIY");
    msg.sensor_class.assign("LIYONPMAERTGULMKDDAWBVQOEGOZHKARKWCJOSQZZKMBTVWDWCFRWSHYENHFQJDAFIUGYPSNGDPJQLSDUBKCLZYVIZBEOQPBRBATMCNFPBBQDYAWUMINCEMHJVCEWOTRJJEHDKXPXFISNZKMJHFOSCYHQIP");
    msg.lat = 0.981717047674;
    msg.lon = 0.334941191679;
    msg.alt = 0.351616029166;
    msg.heading = 0.876472361972;
    msg.data.assign("UPBWZPDBQEMFHJPBZHDGXSOFWXLVELZXOTKWXVJRQLJIHN");

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
    msg.setTimeStamp(0.89129856965);
    msg.setSource(23020U);
    msg.setSourceEntity(30U);
    msg.setDestination(48929U);
    msg.setDestinationEntity(122U);
    msg.id.assign("ECFMQWJHEGIELCQSCMGXSUPIG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SEUKPAWWQGZHZCQGKDFDUTFOENHXKHYTQVBGLRDCEIKGJLPINZJBRLADHSJRILGZJRJMORHKCFNGNSUADGGPONPJWCYOBZZAZXQVCUAHCSLSHXWMWATUDRNRIQTWXCMDXVYBIFSKJEJOQTJFFYYGPILFQQPEHBZYMNBKFPEYVQLUHSFBQLITMVKMMRNBBKUMYEIVKWADVCOPUONXTEUSJIPSXVWIYAVDOZYBAMAXRTZGH");
    tmp_msg_0.feature_type = 124U;
    tmp_msg_0.rgb_red = 180U;
    tmp_msg_0.rgb_green = 14U;
    tmp_msg_0.rgb_blue = 193U;
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
    msg.setTimeStamp(0.0823977075012);
    msg.setSource(52045U);
    msg.setSourceEntity(226U);
    msg.setDestination(41397U);
    msg.setDestinationEntity(234U);
    msg.id.assign("HTTCYWADQYYAKHRKPLYTXRMFSGKNLEZBQRVSRFIYTUNQKYOMKISHYBHJQSFKUDNPANLIBFFNGLPPIEPOBOOEPORSTUZVXU");

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
    msg.setTimeStamp(0.741825661663);
    msg.setSource(14484U);
    msg.setSourceEntity(82U);
    msg.setDestination(52528U);
    msg.setDestinationEntity(49U);
    msg.id.assign("KLBBKTLZEARCWPWAFITXCPXEZNQZGWJMPVHQBQGOTTKKMOKZNOBSLFYKKSPLSUZQMJADVWWDNXAUVWNUHTDEIZHWMYNIMYHUXNFSWDBAHOVCECLOMJKTOFECFGJYTBYQETJFGDMERMBNZZOIHXDOGRPSCYJXVTMDONBCIRQIEQVKAUWQGRFDUFCCQRSGXHGBRRVITXLYCHVFSAZAJXAXQIGPRRLEPYVHBIUZLUMJSGPNF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MLQTPNDZXZRFIHAHFDUJEIRTJGWAUGTLHOWXGQZ");
    tmp_msg_0.feature_type = 233U;
    tmp_msg_0.rgb_red = 132U;
    tmp_msg_0.rgb_green = 189U;
    tmp_msg_0.rgb_blue = 5U;
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
    msg.setTimeStamp(0.798888577669);
    msg.setSource(19203U);
    msg.setSourceEntity(78U);
    msg.setDestination(39259U);
    msg.setDestinationEntity(126U);
    msg.id.assign("MEUTDBTDRTRGFKAJVWHQXDVXTPYVZFCBIPLNPXULYBISOJKSBRLQJOSXHLBBIRBMETJWSLXDKJMIAGVZCMVBXRWCNGVZQJAHODEARTRIVPLCCYHMFOVWKODSYAUCPWUALQRYPWQWRQSQASKOTDQXYKJGW");
    msg.feature_type = 86U;
    msg.rgb_red = 35U;
    msg.rgb_green = 193U;
    msg.rgb_blue = 72U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.261230267566;
    tmp_msg_0.lon = 0.287063694536;
    tmp_msg_0.alt = 0.119822696846;
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
    msg.setTimeStamp(0.996451307769);
    msg.setSource(58026U);
    msg.setSourceEntity(124U);
    msg.setDestination(54953U);
    msg.setDestinationEntity(81U);
    msg.id.assign("EQHXBOACHLWLIKQGBLVRNJYRNJRQDXUODUATLSKJWFWSVERYPGZMEJRACTPBNKOHYYHOPAIDZWTSTGTPSHCEKMMSRIVJUEMNDFQVLGMZKHIHPYSDPLUFVDEGHWLLTZYTFNHNVQZAJIXYXGPAOVKSRIBBSCXFCJATEKZNGRBPMAMCVQEAKETHF");
    msg.feature_type = 124U;
    msg.rgb_red = 47U;
    msg.rgb_green = 93U;
    msg.rgb_blue = 175U;

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
    msg.setTimeStamp(0.480802907771);
    msg.setSource(18996U);
    msg.setSourceEntity(213U);
    msg.setDestination(9920U);
    msg.setDestinationEntity(46U);
    msg.id.assign("ROHSUAIKXQGVJCNLKKOPADMLADPXHOBYCGNUNBMFGUFILHIZBXBQTAVC");
    msg.feature_type = 191U;
    msg.rgb_red = 229U;
    msg.rgb_green = 56U;
    msg.rgb_blue = 57U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.00919348898265;
    tmp_msg_0.lon = 0.241637705624;
    tmp_msg_0.alt = 0.900027559792;
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
    msg.setTimeStamp(0.211001929481);
    msg.setSource(29209U);
    msg.setSourceEntity(93U);
    msg.setDestination(59668U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.749553067807;
    msg.lon = 0.47290676378;
    msg.alt = 0.979389714511;

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
    msg.setTimeStamp(0.334218398247);
    msg.setSource(15958U);
    msg.setSourceEntity(138U);
    msg.setDestination(43875U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.630064786056;
    msg.lon = 0.0879819253866;
    msg.alt = 0.893834712949;

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
    msg.setTimeStamp(0.882068862935);
    msg.setSource(36093U);
    msg.setSourceEntity(239U);
    msg.setDestination(32498U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.845004130366;
    msg.lon = 0.345925824346;
    msg.alt = 0.537214056182;

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
    msg.setTimeStamp(0.82979090992);
    msg.setSource(6094U);
    msg.setSourceEntity(24U);
    msg.setDestination(7133U);
    msg.setDestinationEntity(56U);
    msg.type = 55U;
    msg.id.assign("VGZIMBCSQEYZSIRILIZPENNVDWKHCJTAFVNCTOHJWRLMTOPRYTSGGXDUOBQTTBOMUEJGFQNSFDXERUXKAUDSREEIBZTJBKNAKQQHBZJLIDNWUDYPAGMVJJWPHWPYAHIMEOZRHLWMRXESTBEZMGFHTRGQBXFUNBUPCXUFSKQSEADAVXCGVGPPZCKLHDAWMJYQRMBPI");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 3708971027U;
    tmp_msg_0.messages.assign("KUQOGKLEMBNWOLTHVNFPXWJOFQEXVQEXPWMSGLRDADDIJUGTMYHDAXFARWJSJMCRARDXZLPFUCSGFWIZFXUSIQCSVAQIYRBZTHGVAAJWSWNUSGFYAMEPIOMZTWFKNKRBBTPPKCVGXXVITPKUSNHZBEEQRVLRWUXHOKZUZOIJSVJLNGKIITDPYNNYMTYLCKALEQMFTUZQDDBSDHWRJHLBCOP");
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
    msg.setTimeStamp(0.505717287453);
    msg.setSource(30575U);
    msg.setSourceEntity(152U);
    msg.setDestination(24168U);
    msg.setDestinationEntity(241U);
    msg.type = 122U;
    msg.id.assign("OJXNLSWNCVVWPCXPITFFGBUXAJDMFUXDLECMJC");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.107974616439;
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
    msg.setTimeStamp(0.767281709007);
    msg.setSource(62026U);
    msg.setSourceEntity(171U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(233U);
    msg.type = 108U;
    msg.id.assign("PZIRDCMZBJVQKSGMMHAEMGLLERYHXLVQIENFWWFEANJUWCXCAICAKWHIRUMCTPVFVLOYGSIJZZ");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("AMKWSXXDONZDIJACGYYLPMCKJOBQLFARUQAMIWICYHYTKWXQCIMIPUNWDGDDTBRGNKAHTFFGKHJPRZJNFHIRKHQEYJEEWRDXZAPLYUFN");
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
    msg.setTimeStamp(0.0513062555423);
    msg.setSource(61821U);
    msg.setSourceEntity(229U);
    msg.setDestination(25601U);
    msg.setDestinationEntity(168U);
    msg.localname.assign("DUQKPGXPXLODUUNMEJKXQLFEEWGFGQAXBPJEAMNBIXOWNNQMJSRVSTYQGMQFDOGQFARLKTZRDROORGUFLTFMUQHASVYCCPLNHWYSRBTCWWPCSEZXNIATYYHLVXVMYIJMSKKDMVJTVJQPXHVHYBUIOCYVZAFPWAUCWAUZYIFTX");

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
    msg.setTimeStamp(0.489724640737);
    msg.setSource(35164U);
    msg.setSourceEntity(231U);
    msg.setDestination(12508U);
    msg.setDestinationEntity(210U);
    msg.localname.assign("UHCHCWOMKMEDQYFDNRQIMGCOIMYBIJPHTQKGIPVBOFGMOJTLMSTVVBFUWSNLYSZRGPSEVPKSDHWODANUIOARTFIZAHLGTTQEGXJRSMVYXXONBNKPOUWHNIYMAEKYAL");

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
    msg.setTimeStamp(0.643042332621);
    msg.setSource(34089U);
    msg.setSourceEntity(46U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(111U);
    msg.localname.assign("FWRXFGDSJJNWOHXJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NUJFVECVKRLBHLCCQIIDMGQMIFMTTUKDHVDTBSBGYHWQARQMIDLOJOXSLLKXIAFAVBYROONYRZYOKJAAWSJGDPFPXPKTUMHJXIHDDBNSYKTMWHLYZCNLKULNWMEIAGZCZRPPVBOLSRZEGQJQGZRCAPUKSFVWZQVEYUHVETQQCMBWYVZFJZLBSWXMWXOTBHUE");
    tmp_msg_0.sys_type = 157U;
    tmp_msg_0.owner = 34083U;
    tmp_msg_0.lat = 0.679170035632;
    tmp_msg_0.lon = 0.241903438251;
    tmp_msg_0.height = 0.507587393417;
    tmp_msg_0.services.assign("VFGAZEGOHJMKEXYTDFBOMBVPKBOEXOIQVCWTZEVQQCPTYBCJDREMCEARJKEJFXUNJWHXZXPWVUGEZKUDQQDCDORJFXAWBFMRVJGIHHMQDQWKSZCVYRBGZFANWRIIKMLVSLKNYTJXASPLPSZUNIAHSLYTMSPWSQWIBKP");
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
    msg.setTimeStamp(0.468706014482);
    msg.setSource(28562U);
    msg.setSourceEntity(212U);
    msg.setDestination(11631U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("ZANLIOSAEFWFGEOANCJLJQGVMMYMUBAXESPEMPURDONEGJYLOYSHTXFJVXTVTYBNBJIIGYWLBCZBHFQZMRMAUHJMHUUD");
    msg.predicate.assign("GHRHVXLBBJSOOKWIVVWGEIIIGNJCWXSLKEPDEXNCWVVFNMTIBBMYMMNGIDQSPQQIDYSKPQREHJCUFRHYRIWHZLZYDPJQACAMPEXIRNFVOEXVNAZKAPUPZMBUMYYQLHRPODDBUCEDXZAJHKNCOD");
    msg.attributes.assign("NOMDBQYMFIEVHNTWUWMANTDUGKFMEGNJOVWHZDMAYUUCCOMSBIIUQKZEUKUIPCIPJSVNZFJKMETGTZZTRANRSSDIDLQOHXQVFJGYXHABBFHYQQNFZAENTONKAPOCVD");

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
    msg.setTimeStamp(0.823244095692);
    msg.setSource(40854U);
    msg.setSourceEntity(167U);
    msg.setDestination(15658U);
    msg.setDestinationEntity(187U);
    msg.timeline.assign("KJWPCCSTWYRWKDUQYTUOIPM");
    msg.predicate.assign("KKNEVQFPDRVANSXCWCPEHTACEYKUYVUQIZMRDQCGIFPBHLMHPGLKOIHDVAHJCHRKJUJQXMMSSJOYLHDWGWTIMZMSOFXQPZCZNXZTXLAIUYVOGEDUEEVXUVBCQIBIBRJPDNGLASRNMHMFLPRFNTSRIPYLGITKGDXXBJEXNLUJDOAFROSWFJTKBQMFTKEVRBJGBOZQEZNZUWQYPWEDVNYWCWWJPOXG");
    msg.attributes.assign("CACMYUMFIYUNZEWTLYKHQBVPGDJDMAFQXNWJBIYANSRJHCUKMWWEZGKGXXPSPSZRYASINJKQECZSKPSHWQLEMFQVVADTTJXTMYZNRFNTVZRIFDCTKEVRCGQYPGJZSFFLLHAIWUOKIEBETFQOMLPGNBUJIPCUJVRWAHOPXXPFLOIDRBCQJGNHOGHHXOBSFLTQZEYEHHAUAYVMRJWBLLDGBDLSKTWUBQOVVPBWNODGE");

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
    msg.setTimeStamp(0.765798290121);
    msg.setSource(463U);
    msg.setSourceEntity(29U);
    msg.setDestination(4108U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("ELXFWWNYOMQUEGBQTGSFYHTJMLDCGXMHSUYZIGDYIJSBEDKJS");
    msg.predicate.assign("IBJWRNHHMSEWVQLNKHKDBUYPBGZWWOEYNCOTWBLSTETKICLXIMCILTFTUXXYOAJQRQJYHXHVFMXQNQJRXSAPJARWNOIQNYEZHOEYBKCSVUJDPKJSYLOAVPPFBBEJIMVDHXDOCFUSECIJUUEFAMFVSTIMEHDGXVYGAFRGVGUBKDZYCXZFZPPTDNUMQTMTZTBZASCKPLJHRSZBFAQRKMWFMZNPVASCG");
    msg.attributes.assign("IJTUBCPMAJWNXUMYTCTIPZJTIWRHQCEQQPAAYAZXOXHGVGBENBUZKOMYKCEFCLYWFKUOHDBEWTQBDRZMAWSHJQGCLIHKSDLOTYXQGIZZLXEBGEOIBIWLBZVDF");

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
    msg.setTimeStamp(0.957756612905);
    msg.setSource(58757U);
    msg.setSourceEntity(81U);
    msg.setDestination(12833U);
    msg.setDestinationEntity(4U);
    msg.command = 20U;
    msg.goal_id.assign("PZMEGWTFKIPLYQVBECGBXHCMFYRRVHEHVVTWANNCPYLQRXDPFBGTHGZLKTBOUSEOGXQQIXWRYQKEIVVOGVQSWMCDFIRVFANVEIOHDZPXTBXKFPMMUPEKYBDJFLUJOJFUNAKWNTRKHYIUA");
    msg.goal_xml.assign("MJSVMGDXOROPKNWZFDVDTELXOUNSZPLTTUNSYGFDTAXKBKMZWBCVNSAPJDBYIFTGRZDNXQGMUJIRJZDZLLXYFMRUFCGTUHUYKGOVHYENBFPQPUEFPKMNEHRWLQEIVBOSLHKTAUUBSJQWLIOXXLWWCJZDDIIOPMMAWYWJSFDKBGILEHNROQAJYCCCQCPAREUTHKIPBRKYSSMTHEEFXFWBNCACXVQYMO");

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
    msg.setTimeStamp(0.872729521916);
    msg.setSource(38178U);
    msg.setSourceEntity(200U);
    msg.setDestination(21532U);
    msg.setDestinationEntity(110U);
    msg.command = 167U;
    msg.goal_id.assign("PYGRXCELYDYZUTOQTDDOJMSYNNZAVCTYUSHDTQDZNIRENWKBERLWHVGKMFBQNJJUGCKPJHSVMMHDFKKAATCWITOMHXDIXFQTXAWLCSQFEVANROUGEHCZVVBWBMXFSMWIGROJBLLISSSAVTAWSSXOFOYQXHFLQIMJLRGLJQRTZEPPRYIYEUKBCBGEFWPQX");
    msg.goal_xml.assign("GECJFMTOPVSXKEKYVNQDDLBWXBBWSTNWZPPFNXLOZUDICFTMHGTFAMQOOOVJAYPRYLCXATAOHBFCPWNZVRJWVDJTUKRAKGDHPMIOLBBQCQTUDDTNFZQFCRLELCKBCNLVGJZOCRSZQVWSUJIKMUHVMWPIAVZSDGFTGSIXVRIXSPZJUNWGBBJYUIUFKZXHNEYIAQID");

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
    msg.setTimeStamp(0.446622970557);
    msg.setSource(57775U);
    msg.setSourceEntity(15U);
    msg.setDestination(18111U);
    msg.setDestinationEntity(35U);
    msg.command = 120U;
    msg.goal_id.assign("EJTATSKVCZHSNVQHYSBLDYAHBSDLGWIDUUPOQKXOYHZHOLUDFLIFWQIEZXXLGPNMAFUNTMWGOAMXISKOFDFHTCGDCMNTPFRRAIXPZZCWBNCIPSLSTVFMDDJSRIJBKKXJDNZWEVYBYPZWSCANQBGZKOEBJMEFRFKEQPGTRJQBHAULTYKHUCQOJBGEKVQAZZNVNPDVIYLJSWBCV");
    msg.goal_xml.assign("WLDWLIBIZWBYRYFCWXXGVCMECDQUAFVQZJTNRNJWHSVOPZXHJOMUECTLQPXFBNTRCOJWSOKFLWTGPWQYTF");

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
    msg.setTimeStamp(0.694973206406);
    msg.setSource(24918U);
    msg.setSourceEntity(106U);
    msg.setDestination(58423U);
    msg.setDestinationEntity(48U);
    msg.op = 97U;
    msg.goal_id.assign("ZVOMDGKINXTDOPZSMKOEVACTTBDMHQYFJLLOQVIIBCARTOQDWSEFKQQWRVWCPRCZLYIARXSVAOVGKNTZZDWXKPHUUQYFCZMJFECYELGKKXJBTOHLXNIZFQBMJHWUPJQQMNMPDCWCDHHRSLGDNGPSBAPHFXREL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BOTOODHVOSLGMJPCYPPKQACYSYRJWEACIINUDFZXIRSXIIQELOOIIFSFCZVZUGDKQAOVSBGEHHJSXOJXPGNTIFRETXINLUVQRXRYQNBXUKEZFGGMCQWDGZEKNNTBBFBPKEWEJJNKXZSLY");
    tmp_msg_0.predicate.assign("SXBAWMYIDQMAPCFOOUAGUTGZOCPYWIKBDFNLHNSPFBCMZVQEAKGBSMFOPAHHQVKDJHJRJSUIRLKFCFPDUREGGFWZQRYDLENTMBPYEUBYQTXTMHEJKLKERYGTYBNRKTUIAHOHSLCVDJJMWXKOONQIYILNOGWJRUJTIHGGSZFOCEPRXZBTPKAUBSEPVXSXIJQOIRNLZHNVVUKWACEVAZQXBYWWYMVQCPZWICZAG");
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
    msg.setTimeStamp(0.621598972042);
    msg.setSource(4179U);
    msg.setSourceEntity(12U);
    msg.setDestination(25554U);
    msg.setDestinationEntity(238U);
    msg.op = 181U;
    msg.goal_id.assign("KXYXJWVIMRIJEX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FOFJZCZUUENSJQLLHFEIIWEHYSRYNXLHHOLCWWPKSNSYAYYOTNFZHVMURBDBJFXNAMBQCYXONFJDZKGDZVHSTHYWGKXTUZTRAILUWIFDORKOIIWVZVELTBGLUDJDMXBATPPMPCYVQEPDMYILHXB");
    tmp_msg_0.predicate.assign("WMNYEKJBFACLCROTNMVYMRCTLARUMLKXJQZOESCPFBGHKFJVIZGQXFXQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DVABOOUQTHVJMQKSKYOINCLSYQGTERODCDHHQIZFDZJYMPNRPGTPNFV");
    tmp_tmp_msg_0_0.attr_type = 32U;
    tmp_tmp_msg_0_0.min.assign("JTSKTCKWDMTJBNKSUHCCCZDPHIKLYJVOLGSDXIGAKXPBQNXFIRXAQZHGCZIUFXPYXSNPPUULCDUGSPMOJBKYWRODBFTTYCONAJZEUMHQABQRPFVJALKZEKERZWHOTRCLBATUKJEMHWMNROJBEU");
    tmp_tmp_msg_0_0.max.assign("ATGXCCYWFWYCXBHHTQHMTAOWPUYUFDJKXFTSGRKJNSSHWSLOHBFXJUNMLEPQOAZVYAPXZODTVSQEUBCQKNFKWHLPLNQDDCROSLONDIGXMDPZIIDZYRXWSHNNIQEGVLUDYOOZRUPKMPQJWVSIFCOGEHKGBENZBRXJIGNUIMGTQDSAYLODBEPEJKRJJXTMVIWTNVKAYTRGBZMHKVAICAULCVSAACHJUMMVEBUFMRWREBJZWTYK");
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
    msg.setTimeStamp(0.208539826677);
    msg.setSource(47145U);
    msg.setSourceEntity(18U);
    msg.setDestination(4215U);
    msg.setDestinationEntity(66U);
    msg.op = 103U;
    msg.goal_id.assign("RDSUTRNUXCQKOEDHROKOJSAHLNSWJRUDLGUEFIPMMOHAQOPWVDKIVCJYLWFNQGXRFPHPXFZITCRAFKGMCMVINABHAWTCKPZDGYDVDFCAWEZXPIBQWQZDZXTYTBNBVUHDYNGLITNKJAJECSYNGZEWMNKEIJWHLJBBYKCOSTRTZQMZZRGSPBVJBGGVCZKXXONPFFHSBUAJILEJHAITYMAUUFVPCXXQYSTQFSBREQM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FOYECKPKXUCXSIHMCMMZHRXVJVUVXIBYHHPCYCRQGLQGEVOQKRRWZXXYZBLLYYMYWHEWCQHVJMZMURNUZATTMYGATTIFXQFTRDJF");
    tmp_msg_0.predicate.assign("ACOWCHPLQWSKNRYYUMTRMIEHJMHWQNPNSRWGCXLHXZMKJJWZBLBG");
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
    msg.setTimeStamp(0.645178675145);
    msg.setSource(41884U);
    msg.setSourceEntity(7U);
    msg.setDestination(24545U);
    msg.setDestinationEntity(183U);
    msg.name.assign("ONLJEIUMCYVHZSBRCHSCHTNGTSJFAXEATBYJOWWFUIGHGDDVOPJYETZIFXCWDUAPEKPYNVZIEANXXFLZOWLQGMHUTAMSZZHYPW");
    msg.attr_type = 138U;
    msg.min.assign("VWCXVJCHSWOCPAXTXRLXVREGFGZESWVUFWASWACQIGLUOKWXHHYPBQECNUQPAQVKEZMYZIEKYMTIRVSROPRQDHQPCVQBJKDRGDDCECAYKBTXQGMLRIOJXARTNXJPFHEIZZDWENDGPOUSXNMBLMFJUOIAUPJAUKSKFSFUTHULFHBYIZJLRPCNMDLBYWFMFYDRNOKTG");
    msg.max.assign("LOGXWGFBEDBHFMZSXAIAWNHOIBQKWCCDQNEXUBMDKXYQOQFUDZXYYUPOHU");

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
    msg.setTimeStamp(0.0980976977121);
    msg.setSource(34872U);
    msg.setSourceEntity(121U);
    msg.setDestination(45667U);
    msg.setDestinationEntity(11U);
    msg.name.assign("MXKLXYXKMLDAAHPMYKLDFBJQLCQTJGSKJBMHXLTXYUUMOQRVLKOKEZOFNWIJGEBGNQUHSGVNTNJWKQOZNJDCFYRGSUBAEPQASGBXZGOEECWYFORVPULVWTXPLFTDQYEHDZOAISJYGCHMWNCBPWFLH");
    msg.attr_type = 200U;
    msg.min.assign("KRRFMJNKZXVECNLTEBILGRNPNSHQAGZRTSSKLXTLNCMMIBLCJVZJFKXOJEOMRAZHFPFHXNUTEGKXYGXWVIBMWOPEUMJQLOALCDVQVW");
    msg.max.assign("EKDQYGRTVGBCCRNENNJOXKGIZEMUMBWTERKGCEPZUSMFIOVDRPVFJFVVJMHPSWAYZBJCVKCUBTENQRSINQKUFWLLDJDONKNTAUPSQTBDAVATFYYSGENQKLMJTBVZQXXUZMSUPJTXZOFPIOQFCIRJDBCUSCIGEPKCMUOSDCLAFHXLHIBXJHRWAHYILFBXNEOZHWWDWHKGEPXYLHYMZYDQO");

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
    msg.setTimeStamp(0.799767684964);
    msg.setSource(30793U);
    msg.setSourceEntity(36U);
    msg.setDestination(21102U);
    msg.setDestinationEntity(20U);
    msg.name.assign("IHEHIWDNZTYBKEKKMGUERHYYBALWMQZNVSPMBFIINZAZFCDIGNCCWYXSATUUGDPKGJPSNIDOUQRZLUXAQPRGDKRZTOPJFCYOJCQMQLUXTXDROGSHDXKWDMKIXZEROJEXTNJJXRHWNVERVLOWALCKIOENVWVKIWQFRLPNHMFUFXCFHVDUTRFLSZMETPQHNGPAPBDFIBVFELK");
    msg.attr_type = 128U;
    msg.min.assign("EWSDJIAYBKTVBEXVHZOKSOZMWZDYRZDFBZZSSAZRIONPMJQNEPQRWUYTJEONTBDVUVHWNKHW");
    msg.max.assign("BUZRVZKPMDXABNOECPPUBWSUFGVPUJKWWPQIHVOQVOXEDFCSBJMKYJICAOGBNCTFEJPILSKXQXGZRNRTZQCYRXFRMOUMGCATQBOGHNEQCTLXZBF");

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
    msg.setTimeStamp(0.537277373157);
    msg.setSource(26519U);
    msg.setSourceEntity(140U);
    msg.setDestination(21919U);
    msg.setDestinationEntity(180U);
    msg.timeline.assign("EEZKORXGCIAWASIRSVXTCOFSVHIJLDUJKBWULXDSMUWNCIAGNYLQTWEVKELCDOCXZNRVPHUPAJDEOUBKHYKOMWPGXPDIJAURWZMZFPZOEGQOYBCLGAAPIZFCUZWOYGBXDZGFINVVQJKMPTAVUYLYEHKQNYLJHIGJTSRAFNPDTZAUNQWHLJQXRBSSPTFHYQXDCFQOTNDNVLTLYQKBXMJRBFVSRFHBCXMSQVBETWYMUHHICONSK");
    msg.predicate.assign("GBALHISSRQLRPFUJZOUHMJVTWXCLNYJYNKPNRXTUNTXAXZDZAYIFKWKCLVSSYRZMRYZTQYMMFKSDVRWHGWOPCLVBLJNLVBHTZEWZAKGTPKUXWHXVPEEEZTD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WODSVHPQXWTFVOLPBVRJKOYISFUFNLLIQRAZMUTTPLPXYZEREIQJIYAKQCGBCAHBIUHGYETXSFXJIQGRFNKICMTGOWCXZVZC");
    tmp_msg_0.attr_type = 35U;
    tmp_msg_0.min.assign("OPOFGPKNLBM");
    tmp_msg_0.max.assign("GBNFMFXUFIMHLNAUJAVJEEKQWMWPZRLDBCXAOIQCXDXFPCKBVLFDOISYXPPGRSRZLETWABEHXPTWLUSMQUKVREBFZEORDPYQKGDDNFNLPIHYEJXAFGLXTHFCOAMVSPJKWOZSOORRIR");
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
    msg.setTimeStamp(0.436268222823);
    msg.setSource(6U);
    msg.setSourceEntity(80U);
    msg.setDestination(22454U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("OMYLDXEYGTEBXPAXUFYWPYUSHVLCPSARPTNGPONSKIFKRAIEFAXSAHHZOATNTZMYBQVRIBMOCNFLCYHMSELSHMGVAREIJVGAQFEZYKVJLNJUZVZOWDROKHXHZROUCBQGGXUMLTXGSGFDMIGJLZHCVRZJWCNWFBKUBKQHSK");
    msg.predicate.assign("VQFAUCZXPFUZXQNRUAPUTNRMCHXHVYVUBVEYYSGBCULWMQTCFEAPQECDRTAGRHSJFBIUQXIRLBAVWGQOCWSPGNCIFZRYOBUEIFXHJILKTLZDNVSQNZNZGPBWYQDFCKGOW");

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
    msg.setTimeStamp(0.0682119077524);
    msg.setSource(6026U);
    msg.setSourceEntity(34U);
    msg.setDestination(4460U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("CCOYPRCOAXANMEBUFSJTFUOTNQTVVHNAJOHESUVQTIFJSCUBQAAZCUQPIZSWAEDRSFHCDKRKZGEGKUHZXMRYWHHTXKAKPQFLSVLJMRZROVTXYBJPOHVUFPLQDHIRDNMIJWBLYLIEJWBFTXOIBENEELMFHPLOJGKMAKAO");
    msg.predicate.assign("GSDJYDPFTDFYSCVEYDGMRBVAIEXRRWVHLXOXZBAZDUJCXZKACYOMKIMBFWRBMANMKHIWSIKQJHTIUZRGOQVARJOUOHRZZBNFLWQNFHNTRTQXIESEPYCJPUMSPGCAUNJPIQRDWLJHVJISVVBUDUAQNGNZXBLTCPXUGPJAODSSKWDOKHTMLBCYWVFORHY");

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
    msg.setTimeStamp(0.461423111124);
    msg.setSource(3298U);
    msg.setSourceEntity(194U);
    msg.setDestination(48577U);
    msg.setDestinationEntity(234U);
    msg.reactor.assign("WMKTPSLYMOXSVHMJDGS");

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
    msg.setTimeStamp(0.262785766113);
    msg.setSource(13632U);
    msg.setSourceEntity(89U);
    msg.setDestination(48977U);
    msg.setDestinationEntity(109U);
    msg.reactor.assign("ESOYCWEXLAFVYOLXIXQJAYUZUAALTOURQJYVEZFGPMQORCBIMKLTDNOEELYLJAIUXUBNPUMCFYYDBDJDMNHFIDPSPJCUIFRPOWNKZYQRPYVMHMMBNLZCANVXXIJXTVMGOJPGESUKSAVBZKPNMJZWTZGFRWHUROWEWIBDZDWTPCYKHVABVRCGKKSRQOEJUHETWFSQEHNICWBQSDXNKCHLXXQQTFGHIVZNHGVMDGCGAWIRRG");

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
    msg.setTimeStamp(0.0963782069708);
    msg.setSource(8642U);
    msg.setSourceEntity(69U);
    msg.setDestination(55785U);
    msg.setDestinationEntity(133U);
    msg.reactor.assign("MSCVZWJUYYILLUYFVGJ");

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
    msg.setTimeStamp(0.233548438426);
    msg.setSource(9063U);
    msg.setSourceEntity(83U);
    msg.setDestination(5891U);
    msg.setDestinationEntity(222U);
    msg.topic.assign("XKPYPMDETREZETNKRDKOZSFUMMZVQHNFAHCAOKZMKNQLEMCERWJJXLSIAZHIHGOOLHIYLJCKJYFXRZJWLUXEDMJUKQOIRQYHQWCSNTKIDOHWXECQIDBA");
    msg.data.assign("NELNGGJSYYPXXQSCOONZCEOFXRSJNSFYVPPEJHZSOTRTGFALMMORHIAGCQNMYEGMXTEGYUKJOCXSUQOBWFQLMKUWTLVKZGVARWZBHJYSSWVCOMQBEHKUXNGHTVU");

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
    msg.setTimeStamp(0.0118928133147);
    msg.setSource(37724U);
    msg.setSourceEntity(253U);
    msg.setDestination(45730U);
    msg.setDestinationEntity(32U);
    msg.topic.assign("MEBYCDGTXOAJNNVNKIWEDKZCAOPAHUGSHEUZDMTPQEPZQXJQXWQGLMISGAMHFNLBZSBNUYGBVSURISXKBDDSSNDCOKYYVXRMDCTZTYCLJHLGERCRJULKRRPEFQ");
    msg.data.assign("QGKZHWUCSHCRNKCTXIQZULGMKFLOFTLOETUKXOPRDWTQPUHOHYBOYCTYNIEZZNZDOXISMRNYJUPFPMGFGILABJDWLMXLOTHVHMQDXYAOFSTGM");

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
    msg.setTimeStamp(0.90541517867);
    msg.setSource(30931U);
    msg.setSourceEntity(125U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(188U);
    msg.topic.assign("OTQUEKPGDSACURDDCDRSHLZOGBEYUUIAXKHPTMUJICZBSHDCEECIOJVXEYAWWBCMDIXCKAFAUJUJXIUIQZLTFYPGSJRMOOGFOGZYWMMQJUSRHIRBDOEWLLCAVNPAWMPTXPNFHKVKNYXVJCYSWWFKJTGQEHZQRMQASVIJDFQGYWVZHTVNRKSZNVLEXBZRQWKNBQHFENXFZAEYTHIBTDDPOFLWMXGKGBPBIGLTNLQ");
    msg.data.assign("TBIEVPRVHEJPXNHSGQHYOOJUBIYOPWGZDLIOMVQYLJDHVXRPGBXLJNGEPAYFRFUFWQRSZCRGWMZVHZUNGTZRCZFRHDSFPKNBKEDZCXPFWQOIUMVIUBSACDVWWEYXXUHBGCOQFXWAUBADNATXNTVLYATIQDHNKIYTXBACROKE");

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
    msg.setTimeStamp(0.849099827451);
    msg.setSource(23340U);
    msg.setSourceEntity(146U);
    msg.setDestination(41382U);
    msg.setDestinationEntity(240U);
    msg.frameid = 123U;
    const char tmp_msg_0[] = {70, -75, -92, -72, -34, 87, 89, 123, -92, 24, -33, -36, -8, 31, 24, 82, 40, -13, -101, -46, -28, -67, -74, -13, -51, 3, 106, -77, 108, -21, -72, 43, 33, -47, 84, -67, -90, -101, -34, 116, 126, 55, 108, 21, 114, -80, -101, -61, -110, -7, -29, -52, -92, 42, 17, 94, 117, -93, 43, -115, 84, 29, 53, -75, 21, -65, 60, 4, -77, -4, 29, 94, 66, -105, 119, 79, 106, 105, 36, -71, -81, -96, 39, 96, 100, -1, 69, -44, -17, 67, -15, -34, -88, -32, 35, 25, 54, -66, 92, 51, -33, 54, -40, 69, 123, 61, -34, 43, -70, 19, 90, 22, -49, 4, 122, 26, -124, 45, 16, 7, 54, -6, 111, 100, -63, -42, -15, 56, 11, -35, -75, -84, 98, -110, 106, 41, -70, 113, -65, 43, -37, 44, 19, 67, -115, 26, -41, 85, -113, 58, -61, -119, 42, -3, 84, 122, 115, -98, 36, -82, 63, -50, 8, 94, -110, 121, 102, -3, 31, 98, 0, 27, -105, -105, 123, 2, -13, 3, 44, 58, 47, -87, 42, -104, -70, 42, 102, 24, -86, 79, 97, -97, -81, -86, -101, 25, 44, -123, -123, -124, -91, -71, -7, 15, -68, 0, 118, -24, 95, -95, 92, -103, 126, 92, -9, 101, 115, -121, -10, 53, -17, -111, 73, -62, 40, 26, -78, -31, -22, 42, 73, -74};
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
    msg.setTimeStamp(0.478329608099);
    msg.setSource(47431U);
    msg.setSourceEntity(221U);
    msg.setDestination(23192U);
    msg.setDestinationEntity(94U);
    msg.frameid = 201U;
    const char tmp_msg_0[] = {-28, -61, -27, 105, 107, -20, 50, 72, 60, 116, -106, 93, -111, -36, -77, 68, 63, -13, 113, 114, 114, 82, -114, 4, -88, -3};
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
    msg.setTimeStamp(0.243053120624);
    msg.setSource(44504U);
    msg.setSourceEntity(182U);
    msg.setDestination(35707U);
    msg.setDestinationEntity(107U);
    msg.frameid = 115U;
    const char tmp_msg_0[] = {-84, -96, 20, -10, -99, 11, 119, -34, -107, 92, 87, -76, 61, 84, -103, 98, -30, -118, 31, 35, 7, 10, -17, -74, 119, -93, 57, 48, -98, -117, 76, -109, -22, -47, -119, 107, -100, -11, 12, 116, -51, 59, -46, 7, -33, -95, -19, 108, -98, -90, -37, -1, -86, 108, 46, 4, -46, -108, -32, 93, 50, 37, 66, -75, -36, 13, -59, 32, -103, 113, 18, 64, 74, 87, 42, 25, -111, -79, 2, -47, -117, -23, -127, 33, -38, -44, 44, -107, 71, -107, 25, -70, -66, 86, -124, -41, -15, 15, 73, -35, 83, 88, 88, -39, -28, -62, 73, -37, -56, -97, -25, -32, 64, -115, 108, -60, -30, 19, 64, -51, 31, -44, 65, -40, 63, -105, -61, -108, 109, 84, 102, -122, -58, -20, -46, 30, 67, 114, 50, 85, -103, 98, 75, -15, 88, 84, 89, 89, 118, 17, -47, -77};
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
    msg.setTimeStamp(0.00871355725565);
    msg.setSource(10027U);
    msg.setSourceEntity(225U);
    msg.setDestination(13280U);
    msg.setDestinationEntity(116U);
    msg.fps = 158U;
    msg.quality = 193U;
    msg.reps = 217U;
    msg.tsize = 136U;

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
    msg.setTimeStamp(0.50646426549);
    msg.setSource(54095U);
    msg.setSourceEntity(87U);
    msg.setDestination(3431U);
    msg.setDestinationEntity(190U);
    msg.fps = 42U;
    msg.quality = 63U;
    msg.reps = 46U;
    msg.tsize = 46U;

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
    msg.setTimeStamp(0.751838842286);
    msg.setSource(51363U);
    msg.setSourceEntity(244U);
    msg.setDestination(60240U);
    msg.setDestinationEntity(243U);
    msg.fps = 101U;
    msg.quality = 218U;
    msg.reps = 233U;
    msg.tsize = 208U;

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
    msg.setTimeStamp(0.216111246993);
    msg.setSource(21707U);
    msg.setSourceEntity(4U);
    msg.setDestination(14340U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.555618285202;
    msg.lon = 0.482915816049;
    msg.depth = 216U;
    msg.speed = 0.622652355407;
    msg.psi = 0.901402517625;

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
    msg.setTimeStamp(0.589592540841);
    msg.setSource(35990U);
    msg.setSourceEntity(130U);
    msg.setDestination(13216U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.00939583481379;
    msg.lon = 0.295819436937;
    msg.depth = 197U;
    msg.speed = 0.332619636616;
    msg.psi = 0.0231569629928;

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
    msg.setTimeStamp(0.787807635421);
    msg.setSource(41409U);
    msg.setSourceEntity(142U);
    msg.setDestination(7606U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.849004012686;
    msg.lon = 0.312199407735;
    msg.depth = 34U;
    msg.speed = 0.127754514055;
    msg.psi = 0.396822425735;

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
    msg.setTimeStamp(0.698896119094);
    msg.setSource(60200U);
    msg.setSourceEntity(157U);
    msg.setDestination(23084U);
    msg.setDestinationEntity(146U);
    msg.label.assign("WWYKQNIZJFCXZPDMMJNLHUXZGQFCGRHENSKHQFIVMEFBULLRYQHHLZKQBOGCXGXKKTWCNZJUJXHCQJCICBMDIPFJRDMUNXGWIBVDTVNYBKSWRESKUQPALHTHEISQWBYPZOERCNDEYS");
    msg.lat = 0.180475203386;
    msg.lon = 0.325416413851;
    msg.z = 0.0486599287268;
    msg.z_units = 166U;
    msg.cog = 0.481363587423;
    msg.sog = 0.755136163101;

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
    msg.setTimeStamp(0.895690981956);
    msg.setSource(63888U);
    msg.setSourceEntity(154U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(206U);
    msg.label.assign("IPOTRQXWKRMPISPMOGZXKEVMPFRXAHFIWMEXHTUCHDVULUVDLGYIVPOSSUSAQKRV");
    msg.lat = 0.734865764494;
    msg.lon = 0.6475914975;
    msg.z = 0.696671424048;
    msg.z_units = 238U;
    msg.cog = 0.197888632906;
    msg.sog = 0.723975417795;

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
    msg.setTimeStamp(0.0928483901368);
    msg.setSource(9779U);
    msg.setSourceEntity(75U);
    msg.setDestination(26851U);
    msg.setDestinationEntity(197U);
    msg.label.assign("JKPTAZUMERKOULKDMGVXPUNCAVOVWYECMRSXHAZTAXJVMEOLBPHXUFODIDHJVFGPVTGGDGI");
    msg.lat = 0.18602431431;
    msg.lon = 0.647944411117;
    msg.z = 0.993813247012;
    msg.z_units = 182U;
    msg.cog = 0.0128298656213;
    msg.sog = 0.482546959374;

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
    msg.setTimeStamp(0.505545678095);
    msg.setSource(47976U);
    msg.setSourceEntity(215U);
    msg.setDestination(64343U);
    msg.setDestinationEntity(14U);
    msg.name.assign("DASRTKPJDFGVPVGWFHICHTATNUTOSEIDLUPQGKAIQBJCRGYQHHCVEMZWQEXWDKAXIRFDWRRZVMSKPITAXENDCFIXHBBMZIQMCGEUHFKCAHNTLEATBAAOXVGJCWNYYJJSMJMVXSMQOOVYNBVLQYFPZWYOZPFZRDWJSCZEIURUQMZNLBZHBMPNKAUXGOHLQTDBRSFBWJLEOGFEGKKOLTLKNUSSIOSYC");
    msg.value.assign("PJBCKAPMDGGFRXXWMPPFUTDDEQLJZQKWRXQYUBKWGBHBXHNABJIIOISPRBGFNQCABSMJFTIAEXYOUUTOZIEDJDJHKAFMZPLLYGG");

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
    msg.setTimeStamp(0.703020017725);
    msg.setSource(28977U);
    msg.setSourceEntity(199U);
    msg.setDestination(54U);
    msg.setDestinationEntity(185U);
    msg.name.assign("UGJUHXHKFIEHHIGMYKDXDCZNLAKDFVKWUGFMQZUIQZWDLZGSPOVKXECISRBPTHLCNIOYLEXJBYHSDLEOWBTGGBNLWEJNPBDVQWGRURQVSSAMKAIZHCTYIFQOLQWTJMKDPHEOQOU");
    msg.value.assign("HYKPXCACNGZPMXCZCZMEYWCJIHTJUGIFYOVIARVXNFKZNQHXCOHJSZRTRBUHSQMXPAWQKP");

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
    msg.setTimeStamp(0.474679915317);
    msg.setSource(53923U);
    msg.setSourceEntity(39U);
    msg.setDestination(29247U);
    msg.setDestinationEntity(229U);
    msg.name.assign("YXRMVPENRFGRBIUXLEHWQOAQUTAZHRWWXYJWNQZFYBRDEZDHBEOYJQFFBGYGUTSQBGDKOXCMISILSOYIBHKTIM");
    msg.value.assign("YMPJAEHINCBACISUASMAPZFHFVYCIPHCTNMCTVHYJKKOGTOCDJQZGWVLTPBWEQOGTEMBIWNCKLGLHTUAVIETJQUUWXNXXGWVCHPJWGMXBVETAOYFIJSRRMBQYFYKHXSEORXUNWRLH");

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
    msg.setTimeStamp(0.483077311544);
    msg.setSource(9991U);
    msg.setSourceEntity(99U);
    msg.setDestination(53813U);
    msg.setDestinationEntity(52U);
    msg.name.assign("ZPJNABWAJFLPFPZXBKAVXMTJSJEFWTDLMNQBDLEKPLRVMOHKJSDOAKHTIQHIQGMGP");

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
    msg.setTimeStamp(0.349775653148);
    msg.setSource(47170U);
    msg.setSourceEntity(43U);
    msg.setDestination(4482U);
    msg.setDestinationEntity(107U);
    msg.name.assign("RFZNXHDUGGMBVOPIEUQEWDTJRMEOZSGJLZGJXMOAIGTFILAVTNQUSOQFIFYXAHKORYYKNASMTPHLTDRJVVODPGHIZZCEUQDOMAIHIGVBDVFVPTSYXBSBHCBZLRNMTQAQUWMPBLFUKQCYKFTENPMWNNBUEBT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HGRBXTWDKFZSRMPYO");
    tmp_msg_0.value.assign("UBMJHSIHTAACAPESNJEHXBKDERNYTWJJRVNNUYPTEGLX");
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
    msg.setTimeStamp(0.156793452599);
    msg.setSource(48484U);
    msg.setSourceEntity(62U);
    msg.setDestination(64889U);
    msg.setDestinationEntity(220U);
    msg.name.assign("QRKQCOAVZVUJHTKAIKPYFEZQYJVWCMRCITFOOGFNNPXORVQULJXPZPSLGUXJBPHTXIQRUBSATDXRNGXFZWXTIHLOYGWLCDVLBGKAIBGJVQMWAFALCGOEZWEHYSKGLZAYSBTQEHCWSFJTNLETMQFXTIPVBDEHWPNVYODCZOUMHURNMDOMDZPAACLZWMJCIGAHPZSEWBSKFBGQKJUVKOEJFHYIRBEXILXIEPMDYNVJUKYD");

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
    msg.setTimeStamp(0.497163731614);
    msg.setSource(34428U);
    msg.setSourceEntity(103U);
    msg.setDestination(43316U);
    msg.setDestinationEntity(45U);
    msg.name.assign("CHXZCVSLRPGLMIMZTEXNYXKSMMHKNFKGDJHCZFDDTSFJZSEFWPAYVJSKIZTCKHITHYTWJKKJNXDQWTCAYUXHJNDBOPPJVPXWNQFPDVCXABIBMTIKOEZGBAFRLGMFRLGHAUAVZUOCFRBBBYSSEQDFAWOZXMAYNGJEWZEBLOQKXKWGENEFCHQNVMINVRLHRBWUYYNILTAAVUQXMQQYOTRRUGTPWBWCEUUZJYUGQVOJV");
    msg.visibility.assign("CVGTZETQLXC");
    msg.scope.assign("XMSVWTELQQUPKNKJINZMTHFWJCBGFSWHQVGDVLLJADFHKQPIVOGCMRDYXSROZ");

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
    msg.setTimeStamp(0.625230666087);
    msg.setSource(34669U);
    msg.setSourceEntity(219U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(250U);
    msg.name.assign("MNXDIFBWNSWTSVHPSOWYCYVBAAZSSQOLLKBCIPXYTPKLLQNOZDMJMRCRKXVGHIJMOOIFEOEMCLFQGOVJPDFRTLHNIIAUAKZGHYTOHHAPPWFNTDYFAMEIKEIYVMSEVKGQZRVKXQFYQHXFDLLJZWMCUUTPSGEXVKTV");
    msg.visibility.assign("SIKNDUWFHQGETFNYLOHYJJAJZCKRLENUBBFCQHJGDTJZHWGFPZLZGXUDHNINMWRDOBSASCGZZVY");
    msg.scope.assign("EUPSSHVKNGXRKBYSBPBJCTKDGHTSKFOKAWIJCSTNSLZWUAGCOIYHEEYDASROBMGKGWRQONCZDURBFVABZJVGQETMIJIFCRCUPRJUJLUPDVTAVEMLPTNAZICKOTHZECP");

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
    msg.setTimeStamp(0.25057075329);
    msg.setSource(17339U);
    msg.setSourceEntity(128U);
    msg.setDestination(31754U);
    msg.setDestinationEntity(93U);
    msg.name.assign("RXGLLAFOPYQISXLDQDXMCNILIIULOTMFNBGMZYCKZUOIXZCUEURUPRNJVSATFKSHAYDBOCEHZPYQRBWSAEBBQZTDLHJJEOHHWMBSOTFFACIVJPVDLWMKHEZEREPDWGPUQVGUWFAMNLUTSCJVUHVCQGPQNNMTYYXWGOJIZKJAVMKGXQCKXXLAXZMQVHRJND");
    msg.visibility.assign("APVJRPISWAFQYOLFHBPRYSLZCNDMDDUTNSMDQVIMVRXELFBQQCQRZHYZTBSQYRKBUIUXWEWG");
    msg.scope.assign("DPMSJXUIHCTBURZQSAQWJRKSYQKGDVLOUNJPZJFKJHCPVPBTOMISLRRVCSCVXNLWOLDGYVNDUTGWWIOVZNSSIXQYEESDNBBROLSAKJNRICWHQIUXKHBPUGAWVNIX");

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
    msg.setTimeStamp(0.540234469138);
    msg.setSource(27111U);
    msg.setSourceEntity(162U);
    msg.setDestination(44449U);
    msg.setDestinationEntity(137U);
    msg.name.assign("PXDXMDAKZAZKUGHVHGEQDPLCVUOEJUGBPZOVPBMLRFDHSAJZIVKXRHDHOOFFRRSWYVPPNFOXYOFLUHMPKCBCMVGQBYMBSZGJRLEAIPCJAJEZFCRKWRUOYYZMSUSCAKTQQTYMIVGKDKNHLJXQNXDXYWCVAMNWWTKFUJNCBSQGYTZNHXGJWQSLGNEBTEHZALMBEEUSEBLZCRSIRNTJWFNRFIAP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YFXKFPIBFVMRDLVWSGWZAOAPVLJWPIA");
    tmp_msg_0.value.assign("XILOOJXUIYBZUNXKMPFNUNJWXEKTUPY");
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
    msg.setTimeStamp(0.479924933104);
    msg.setSource(20737U);
    msg.setSourceEntity(47U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(213U);
    msg.name.assign("YIDHJRPPGTOXZMBGJMXJSNFWIYEONIVLDNQMWZDOQIZSWSBQCJHROERLQMUWROXRZVYVJNHHIIRRXCBPUHUCVBLLKZJTJMAHPPUAQIHKSWETOHAFXIPHPUSSGWPVSBYFKFKXNBYBAGYGSNEVJCSJFZFOBBJDKCRPLQXMUXPYTGE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DQJLUTORZVQIIGNJBOJH");
    tmp_msg_0.value.assign("LQUJWHPTAZOBPCGNZOQFGPMYFQIWLLBROWRVRGZCMW");
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
    msg.setTimeStamp(0.71494448801);
    msg.setSource(38686U);
    msg.setSourceEntity(85U);
    msg.setDestination(12980U);
    msg.setDestinationEntity(91U);
    msg.name.assign("WKNZFQBVQEOFHOIZACVFELWSMHKMQPMSRKEVGGJSDAVRYWNJAZPYWBNDUUYVVQBYUJHMXKUKPLCOSTGNKHCMWLJMDGRBOBMCCNPJGQXCPJAPBTXIEJBWWIPFKTLOVPGDHFHHSENQRSHLBPYAAYOULDKKGDTXEUIWRFCTZFNWRDRFIEMAOIGYNFEYRKMJOHZLTDDPTZRSTDUMZWXBRZGXICEOISQQQAAYIXLN");

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
    msg.setTimeStamp(0.940639117865);
    msg.setSource(42827U);
    msg.setSourceEntity(10U);
    msg.setDestination(55440U);
    msg.setDestinationEntity(197U);
    msg.name.assign("OXLVWBFICNPNRFLUIVQDTDYKAYAUTMGBWKQPGULPBSFEHQSIYIYIZSFXZJCUMNUSXTFZANZMOYNCODCTSFCCRRBUTBWHFKVKJADANSVMEOGKKVRLDYMBHDZOHFBYGAPOLDNLZAJWCGCTDIZHXLQQTEIRGGHGMXITPPCSDUNLXPROMHWVVSTEKXQEEYJJROJABXVPIBZKRZJUQWHFSNBHCXOUZWOQARVGEQUSKJPWFLYGJI");

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
    msg.setTimeStamp(0.156166685791);
    msg.setSource(19415U);
    msg.setSourceEntity(35U);
    msg.setDestination(62590U);
    msg.setDestinationEntity(135U);
    msg.name.assign("OIMPOSZHWDCYDSUQRCLNWZEGDMCKXMFYXTAOJOTIFB");

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
    msg.setTimeStamp(0.786670320154);
    msg.setSource(52023U);
    msg.setSourceEntity(94U);
    msg.setDestination(51108U);
    msg.setDestinationEntity(75U);
    msg.name.assign("NGLPBVNIZZNVEUXHSUUMFZXWLHAUMLMMMBOUEDNETIUXWVXQWBLKWJAFNIMYSZADKOTTRBKVMPRQHKKSJCYOLGTGLGIQETREFJCUHHWFMTEMPFFITYKSCZOCCXZWRERPEGKRLILCAHSCHVAOWJRPHQYXCZDULQNAJQOBFAJHNNDNVBYYKBQHDODPIZJEIWR");

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
    msg.setTimeStamp(0.37735882737);
    msg.setSource(5508U);
    msg.setSourceEntity(186U);
    msg.setDestination(46329U);
    msg.setDestinationEntity(59U);
    msg.timeout = 1659051679U;

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
    msg.setTimeStamp(0.285205893361);
    msg.setSource(7822U);
    msg.setSourceEntity(15U);
    msg.setDestination(5378U);
    msg.setDestinationEntity(76U);
    msg.timeout = 2292308306U;

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
    msg.setTimeStamp(0.376461752901);
    msg.setSource(10518U);
    msg.setSourceEntity(134U);
    msg.setDestination(9233U);
    msg.setDestinationEntity(166U);
    msg.timeout = 2306592750U;

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
    msg.setTimeStamp(0.0254634813944);
    msg.setSource(4430U);
    msg.setSourceEntity(184U);
    msg.setDestination(50223U);
    msg.setDestinationEntity(177U);
    msg.sessid = 1729511575U;

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
    msg.setTimeStamp(0.853649984719);
    msg.setSource(25553U);
    msg.setSourceEntity(24U);
    msg.setDestination(52613U);
    msg.setDestinationEntity(137U);
    msg.sessid = 1254325278U;

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
    msg.setTimeStamp(0.787386647969);
    msg.setSource(1936U);
    msg.setSourceEntity(100U);
    msg.setDestination(54444U);
    msg.setDestinationEntity(127U);
    msg.sessid = 3013585150U;

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
    msg.setTimeStamp(0.383902910631);
    msg.setSource(53029U);
    msg.setSourceEntity(81U);
    msg.setDestination(26201U);
    msg.setDestinationEntity(211U);
    msg.sessid = 2787133262U;
    msg.messages.assign("CNHWHOAZDTXRDHJSLCDBLBOITAJXUBZKLTOSNBLPUNFMMORMEHDOQGPQYQJBEQKAWXZUBDNPXOPKVZGWZPDNGSACOBIFASUYJHK");

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
    msg.setTimeStamp(0.953733221633);
    msg.setSource(47814U);
    msg.setSourceEntity(27U);
    msg.setDestination(18458U);
    msg.setDestinationEntity(242U);
    msg.sessid = 4065366710U;
    msg.messages.assign("FPKIRHIJCIBYIRGQVQWEVISRLPTXIETDGVVXJLEZCSPXDSVKHAOVHOGULQCYDCBMFZUWWYPTQSCZTSWBIDAAWBDEGIPTJHSZLZZHROZPQMIFAJJSFMUSNNONOMIAZXZNPJEPGWWQEDKXUKSCFEPRHGXNYCVMLYLROQJGTFRFDYOBBAHYWUABKBCUBYRFTKCDHLHMHONFQWXEWRLDZKSMAOMARKDVXTUGVNNNKYOJBFGMJYVQUANUMGXQKET");

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
    msg.setTimeStamp(0.411501517851);
    msg.setSource(49001U);
    msg.setSourceEntity(157U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(12U);
    msg.sessid = 2419160158U;
    msg.messages.assign("MZUQPGDOYBIRTBFZGDUZDQLKVBOYOTCIXETSFSPFHXFUQLXWWYWZCAFYBNZNNQADEBRQLKHWRDATDAHYUKNCYSFHPJJLPYNHKVJVRPQBXUKMGGTTXQXKMBURWIRCNLPJLOKAOAEVRAOUMRVAVSVWNZ");

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
    msg.setTimeStamp(0.0418093413287);
    msg.setSource(61235U);
    msg.setSourceEntity(80U);
    msg.setDestination(44377U);
    msg.setDestinationEntity(88U);
    msg.sessid = 3351543509U;

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
    msg.setTimeStamp(0.270443921011);
    msg.setSource(39228U);
    msg.setSourceEntity(112U);
    msg.setDestination(36377U);
    msg.setDestinationEntity(91U);
    msg.sessid = 642318193U;

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
    msg.setTimeStamp(0.649238205151);
    msg.setSource(1999U);
    msg.setSourceEntity(40U);
    msg.setDestination(64392U);
    msg.setDestinationEntity(36U);
    msg.sessid = 3998294566U;

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
    msg.setTimeStamp(0.183446062106);
    msg.setSource(48554U);
    msg.setSourceEntity(74U);
    msg.setDestination(6729U);
    msg.setDestinationEntity(133U);
    msg.sessid = 245346466U;
    msg.status = 38U;

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
    msg.setTimeStamp(0.307457025342);
    msg.setSource(37819U);
    msg.setSourceEntity(113U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(192U);
    msg.sessid = 893559493U;
    msg.status = 11U;

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
    msg.setTimeStamp(0.0984953007238);
    msg.setSource(40023U);
    msg.setSourceEntity(65U);
    msg.setDestination(31716U);
    msg.setDestinationEntity(27U);
    msg.sessid = 648461775U;
    msg.status = 156U;

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
    msg.setTimeStamp(0.671461273);
    msg.setSource(60680U);
    msg.setSourceEntity(92U);
    msg.setDestination(60367U);
    msg.setDestinationEntity(182U);
    msg.name.assign("IMZYBKGFHRHLWFKRMXCTBCHBGYQFEDGOKFFIXNGNCWPOFXHGLSDCKUBKWWRIBQASDOZIULITFAPIOJEJQVMQCYELBVMIW");

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
    msg.setTimeStamp(0.835549950149);
    msg.setSource(50941U);
    msg.setSourceEntity(202U);
    msg.setDestination(26946U);
    msg.setDestinationEntity(225U);
    msg.name.assign("HSNNULBBRTSNOTJECUPPUGLKREGUZEMFSWXKZYQVEQAOHWLAJALFDHDYUDSCAFRFUGSCBJODVVZIEYYRFNTMDQHZXVKTFUSYLQPFHELCGTZCOWKIGIDIFXQOSPHIWEQTOIYVZGONPVLHMBOUZBAGODZOPXJMCZBFKVYMPMPBGRHUJTKWGFLVAXKNNKTSEZLRDRNQDYJQJSJNGIAPXSWXRCQCVCMTXKPXTRLIAYABREKWWUMW");

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
    msg.setTimeStamp(0.758451732729);
    msg.setSource(49388U);
    msg.setSourceEntity(71U);
    msg.setDestination(31151U);
    msg.setDestinationEntity(150U);
    msg.name.assign("HPYPSUCFPVBOQPHBUUMBUNZDCYMVIEZWIUDLAQQEMDHWPQXEEPBWNUCZLHUKRRSFRYCVNDLBQMXCXJJICNOYQDJBIUPUCSFOTFZKJNEJXNGHGMYBGSFAVGNGXHXTDALTKQGDKTTWDGRYZYEHBPSRRARLASVDLXHRVEEFBIZWTZYGGTICIOXKAVOOGFXYMBOJLKIMHVKSXLSANKDJKMWFQOOFTAIKPNAHCWVTOMVJAZERQCJYLIJQZSLZERWWNW");

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
    msg.setTimeStamp(0.345707966226);
    msg.setSource(19117U);
    msg.setSourceEntity(211U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(207U);
    msg.name.assign("TRRJNVGYHMKZSVOACHXTZMBYWTRDOGQXMUSSFBIGKXUGDUEWHVPLVLDKUZPSPVUCXZGICOOQHWXUDSWHLEUFJQMZKKFNDBDKEENECDQRTQYAFTPBJCOMPXWUMNIBRHPPGLYKYBFCILLOTAFMUOFPSYGVYNOIBQNENAEWROLNGHQWILVIWDRNAOCAQXXZBZYJCVTZSHJRBIEHRVJIPUKCCQJVMLMTFJZTXLYRBZNHGIAKKFJEAM");

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
    msg.setTimeStamp(0.62282952531);
    msg.setSource(32346U);
    msg.setSourceEntity(219U);
    msg.setDestination(29116U);
    msg.setDestinationEntity(171U);
    msg.name.assign("DQFLRDUAYRXLKRWGCYWBEPGOXVAOGLZMBOBEJPYSZLWQXQKUGCYERVUDEZANITUFQQZKDHPEJSXDWETHBYXKUJDMYXHZZEDQNMFVNOOCAIVLMIBGIMGLNDVRMSNIXKUJP");

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
    msg.setTimeStamp(0.414593493197);
    msg.setSource(16788U);
    msg.setSourceEntity(219U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(168U);
    msg.name.assign("ACTAIYBWBBVWXUTZLGFMJAPHLADWJJSKONTJSFHIFUUVLNLYPQJSPHATHUBQBYTHVFQQYEQMJBTOLCVBCOMDITDXGFKZJRNPDDNMMOMVKPRDYCRAHDIHGYVUXWRNRVUSZAXMZYGSRFHKJCTUEOENLZURZEZWCNNEIZTQG");

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
    msg.setTimeStamp(0.210445378542);
    msg.setSource(54781U);
    msg.setSourceEntity(60U);
    msg.setDestination(51586U);
    msg.setDestinationEntity(80U);
    msg.type = 145U;
    msg.error.assign("OMMTNYABPHVMYPZFVINDONEKZYNBCLQTDFKXTIWRBJYNIGHIPAREQOUZNBFUOEOGLHXZGRFEEDKTTRVEVGSVXUNHXHAQGOKOCCJZIUSRWCLIJURVHFRBCMPYBNVFSYSGXIVIVAGWYWMNKSNBWFSHLOQEYZQJHOAUMPGYGKDWCJML");

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
    msg.setTimeStamp(0.214417336217);
    msg.setSource(3638U);
    msg.setSourceEntity(89U);
    msg.setDestination(23564U);
    msg.setDestinationEntity(192U);
    msg.type = 42U;
    msg.error.assign("GNYXCBTSODOXW");

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
    msg.setTimeStamp(0.0983422661524);
    msg.setSource(21662U);
    msg.setSourceEntity(93U);
    msg.setDestination(32873U);
    msg.setDestinationEntity(117U);
    msg.type = 102U;
    msg.error.assign("CIBUWYZCRLGLBTNGNTXDWSUBAHFPTRYHDBBHTKAWUFGMLXVUQIEFVOYORXHJEEJVZWZOMAJFJMGYZUQHVFFKKCZDWAFBXJMEQLYESFCYJSDLGNHWYKSCQLAUTXXMITJWHAVZDOFNWKCBZPPROQXINZGUMRPIAABNMXPADPGCRDIEYJOVQVLXQQPYNISRUSZBTGGUSNZDDKPWNKIDKQRS");

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
    msg.setTimeStamp(0.854401292242);
    msg.setSource(1165U);
    msg.setSourceEntity(164U);
    msg.setDestination(2065U);
    msg.setDestinationEntity(36U);
    msg.seq = 7518U;
    msg.sys_dst.assign("CNFFHWVTWNRXCZNTRWYENSBSYEKTQKZOQRXGQSKUZIAIOYMJVSHTJQPGKFOMVPYHOAMQCEUAN");
    msg.flags = 125U;
    const char tmp_msg_0[] = {109, -3, 6, -108, -78, -77, -108, -101, 66, 22, 112, 19, -20, 103, -50, -82, -32, -79, -16, -11, 126, 26, -102, 123, -83, 74, -28, 15, 1, 65, -6, 1, -5, -64, 100, 124, 76, -47, 126, 1, 50, 6, -28, -128, 38, -114, -36, -25, 118, -76, -55, 104, 84, -75, -29, -121, 96, -29, 102, -113, -107, -100, -26, 60, -71, -5, 99, -23, 52, -113, -113, 117, 19, -30, -64, -3, -30, -27, 110, -92, -71, -125, -84, -85, 69};
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
    msg.setTimeStamp(0.746735560085);
    msg.setSource(25080U);
    msg.setSourceEntity(254U);
    msg.setDestination(44677U);
    msg.setDestinationEntity(198U);
    msg.seq = 29799U;
    msg.sys_dst.assign("HCPFFEGVUOUVMZHYQWEOBVXKDQPJROIGCUIABUENYBIZDTDQJWHEJBHUWCSVTPDXKHYRRGJCZAKDSTJREQYGGHTXRICFXBVJWSVLMUZCSTFSXHXRNAJPZEHMHHQSOEBKJKNMNPJQQSDDWVTKXAQZXMGBFNOUFSELYMRBIUWLLKYDENBQMTWPKXKFYSLFTZCGGJAYRZNLPPTACDNPWLVCIOVMLZWMGWVOG");
    msg.flags = 136U;
    const char tmp_msg_0[] = {-62, -59, -58, -73, 49, 93, 42, 120, 32, -34, 36, -2, 121, -113, 59, 45, 3, -83, -2, -76, -88, 45, 102, 66, 60, -94, 43, -108, -28, -13, -4, -22, 22, -111, 96, -72, -88, -14, 94, -33, -126, 3, -38, -122, -122, -74, 101, -65, -46, 123, -109, 120, -109, -53, 26, -115, -2, -90, 117, -12, 103, 19, 44, 121, 6, 108, 87, 41, -98, -71, -124, -40, -66, 97, 90, 122, -128, 70, 45, -2, 46, -114, -5, -101, 102, 87, 78, 93, -54, 60, -69, 112, -62, 0, -90, 39, 24, -114, -9, -23, -93, 106, 93, 102, 116, 56, 14, -88, -24, 102, -1, -84, 95, -67, -118, -97, 18, 81, -81, 76, 124, 7, -86, 126, 17, -103, 94, 28, -109, 101, 111, 2, 89, 64, 115, 68, 69, -58, -99, -69, -122, 55, 118, -15, -104, 13, -104, -124, -95, -72, -26, -49, 124, 53, -85, -43, 89, -92, 17, 0, -72, -112, -37, -128, -75, -122, -75, -4, 120, 118, -96, -22, -85, -51, -92, -116, 104, 95, -77, 106, 44, -109, -111, 61, -61, -118, -23, 1, -49, -40, 47, -57, 19, -3, 37, -121, -35, 27, 39, 29, -41, 24, 46, -97, -111, -56, 27, 47, 65, -75, 9, 51, -94, -39, 12, -95, -125, -96, 23, -100};
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
    msg.setTimeStamp(0.238949956351);
    msg.setSource(53781U);
    msg.setSourceEntity(50U);
    msg.setDestination(60058U);
    msg.setDestinationEntity(74U);
    msg.seq = 53379U;
    msg.sys_dst.assign("PMIOFKLZMTLNQALZGNNWIEDRTWSKKDHXGFXIPBMBUKVWFJNGWDWCCCMFAXCZROEQIYKXNVRNTBVODRQJETDYEANFHMVUOBNLNUEPIFBQXEWUVPXDZEFHDYCYSHMZJUSZJPYJDEIMTQSBCRHUIWSYMWGHIHOEIKFKGMRCPJVZQZYGOABSPULJTPCJAHCQVDVBMLHGQSTRAKIWPJUKRLLNXJBQSHAAGXEVAZDQTWFXTCRAOKGSOVLOYUFTYROX");
    msg.flags = 148U;
    const char tmp_msg_0[] = {95, 16, -10, 35, 35, -30, -89, 107, 37, 122, 21, 58, 33, 19, -41, -12, -118, 112, -117, -74, -53, -95, -28, 104, -63, -99, 18, 49, 79, -74, 1, 99, -31, -123, 40, -62, -18, 122, -91, -59, 51, -11, 117, -33, -107, 39, -19, 48, 19, 30, -97, -115, 12, -13, -101, 16, 36, 113, 1, 48, -82, 37, -95, 58, -10, 39, 61, -84, -9, -8, 1, 70, -21, 112, -78, -107, 116, 9, -17, -50, 35, -45, 107, -85, -97, -38, 126, 112, -104, 44, 6, -12, -59, -128, -9, -88, -47, 52, -10, 91, 104, 25, -112, 56, 76, -67, -118, 28, -44, -81, 96, 61, -47, -28, -114, 113, 63, 126, -25, -44, -76, -115, 72, 72, 8, 35, 70, -61, -104, 4, 105, 61, -114, 31, -35, -59, 87, -44, -47};
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
    msg.setTimeStamp(0.160711400112);
    msg.setSource(671U);
    msg.setSourceEntity(108U);
    msg.setDestination(48259U);
    msg.setDestinationEntity(169U);
    msg.sys_src.assign("KGFHWAIPXRIMNSNFBVPIRHJRJVWZMSGMZBJQPOPJPZWCIXRFQKVESZVTXJIWNSXBOZKAFWJXASWAQJLNKXUKTDZBYY");
    msg.sys_dst.assign("KZPPRFSZESYTYBPTZNYDIJDAJVSWQVRKDHTTPWINPXDXMEWCIRHXACFTGMFBNKEKEYYRJJIGBHBLDNWYPACIJPCGIBOIJTVHVOBZIKTMHOUYVEATSUKOQKLJSCCNKVLDBQEQZQWJIJMB");
    msg.flags = 148U;
    const char tmp_msg_0[] = {39, -46, 66, -87, 43, 33, 114, 114, 94, -71, 103, -85, 28, -73, -43, 63, -54, -8, -19, 75, 110, 77, -16, 6, 95, 23, -87, -113, 123, 85, 104, -97, -31, -62, 34, 0, -66, -65, -27, -16, -10, 46, 34, -103, -39, -106, -115, -121, 87, 15, 40, -1, 57, -37, 113, -31, 19, 97, 43, -48, -95, 82, -81, -19, -117, 92, 119, 28, -18, 124, -10, 16, -65, 124, -88, -67, 12, 5, -117, 48, -40, 1, 2, 59, -117, -18, 44, 56, -60, -1, -118, -41, -104, 10, 42, -108, 18, 93, -110, 58, -3, 33, 79, -50, 111, 47, -117, -32, 52, 39, 41, 11, 40, 98, 107, -38, -79, -70, 108, 55, 106, -86, -16, -90, 31, 89, -44, -58, -124, 43, 26, -65, 125, 62, -108, 109, -86, -17, -33, -80, 126, -73, -119, -23, -85, -86, -118, -51, 45, 82, -33, 52, 4, 106, -74, 72, -26, -20, 90, -51, -17, -86, -9, -27, -125, 72, -122, -45, -72, -5, -113, 17, -106, -60, 90, -120, -85, -5, 62, -113, -79, 122, 9, 11, -25, -5, -14, -61, 113, -19, 38, -23, -54, 50, -102, -19, 19, 117, -42, 30, -79, -9, 104, -83, 17};
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
    msg.setTimeStamp(0.0102813641573);
    msg.setSource(10381U);
    msg.setSourceEntity(237U);
    msg.setDestination(21946U);
    msg.setDestinationEntity(166U);
    msg.sys_src.assign("OXYZSURKMEHSHWFGOUZNXNEWGNXTTFCSDDVIQKMMBMNSVDDYFMJODIDJPTPPRXJCLLVQYV");
    msg.sys_dst.assign("VEYGDFBPXGYHOKQZOPWPFTMLCIQWADOBIZMUOPTPJXUCZOCPDRQJIIWHDINJDSAUXYSNKFSUGLXKDYEWEAVWXOWJETWTXAAOLKBFEHCNDMQFREBQFGZALEOI");
    msg.flags = 154U;
    const char tmp_msg_0[] = {11, 50, -103, 28, -126, -31, -99, 60, 56, -89, 80, 67, 97, -94, -99, 93, 56, 23, 67, -32, 100, 40, 16, -99, 60, 101, -11, -3, -1, -74, -30, 32, -31, -25, -112, 62, 36, 42, 10, -19, 95, -6, 35, 45, 77, 26, 31, -33, -42, -42, -26, -39, 77, 2, -66, -82, -105, -69, 99, 92, -96, -86, -105, -128, 82, 17, -114, -73, -92, -11, -76, 108, 93, 82, 121, -2, -126, 66, -61, -91, -21, 67, 0, 90, 77, 47, 94, -72, -63, 97, -44, -33, 54, 104, 16, -95, 46, -71, -22, -114, -113, 3, -125, -56, -73, 82, -27, 110, 85, -4, 101, 104, -36, -96, 78, -121, 72, -27, -50, 110, 69, 86, 26, -14, -39, -27, -42, 54, -78, 53, -11, 2, 123, 18, -26, -103, 114, -85, -30, -26, 48, -110, -8, -125, -80, 60, -17, 60, 40, 79, 22, -71, 47, 78, 20, 72, -116, 70, 125, -24, -9, 44, 14, 8, 8, -119, -68, -88, 12, -37, 65, 80, 89, 76, -82, -86, -93, -103, -36, 94, -32, -17, -67, -122, 10, -25, 76, 45, 30, -33, 5, 116, -127, -111, 45, 4, -63, -60, 33, 81, -71, 108, -68, -39, -33, 23, -49};
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
    msg.setTimeStamp(0.0852834332857);
    msg.setSource(37467U);
    msg.setSourceEntity(159U);
    msg.setDestination(47101U);
    msg.setDestinationEntity(153U);
    msg.sys_src.assign("LZPGHQJVRTNZWSOHCCLXFADGPAVAANVQECTTSMPWSFRUYONVHBAPSTFISDRSZULLKKYIDXOWXLOIWZUMBELQZPKMLXFROZMFJZNVUOMGXBPKTJXHNNIHSABSBDQBSAFODL");
    msg.sys_dst.assign("PVFCQUYUDTIFFTSUIEGNYOOEJRCSEMMDKILFVHQV");
    msg.flags = 112U;
    const char tmp_msg_0[] = {-89, -37, -49, 89, 80, -75, -82, 64, 18, -18, -83, 72, 57, -62, -97, 11, 65, -43, 121, -22, -42, -1, -80, 107, -85, 42, -73, -106, -13, 67, 107, 24, -119, 63, -51, -91, -62, -2, 26, 56, 94, 23, 72, 51, -47, 71, 84, 26, 120, 39, -96, -41, -23, 55, -100, 106, -63, -115, 5, 49, 124, 31, 35, 53, -75, -88, 108, -68, -35, 92, -89, 44, 1, 59, -71, 99, 78, -83, 51, 40, 10, -4, -26, 11, 73, 84, -83, 87, 111, -10, 3, -49, -96, -44, -12, -67, 123, -15, -23, 4, 26, 58, -9, -13, -107, -115, 69, 106, -26, 12, -8, 14, -118, -102, 13, 97, 83, -80, 90, -29, -33, -71, 43, 116, 123, 103, 105, 31, -3, -79, 75, -86, 92, -84, 35};
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
    msg.setTimeStamp(0.722659443089);
    msg.setSource(57040U);
    msg.setSourceEntity(25U);
    msg.setDestination(20112U);
    msg.setDestinationEntity(72U);
    msg.seq = 29489U;
    msg.value = 107U;
    msg.error.assign("UYWGATORPWYWAVCBZUQIHPHTYBXWDMOYZOAZQGYFJPVNEJTXFXGCBPHTAGKKELQJTDGMIQQXEBLNPHCXZSOFIMFNUJNAGHVSODVFHFWXBTFPJQBUEXKNJBOSQMVYVSKGJZORGVZTLWDPPYI");

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
    msg.setTimeStamp(0.631144858844);
    msg.setSource(50571U);
    msg.setSourceEntity(207U);
    msg.setDestination(21315U);
    msg.setDestinationEntity(48U);
    msg.seq = 47696U;
    msg.value = 185U;
    msg.error.assign("LWCWGBHECZSCUACLRRINCDGDVEUBSSOCCHZUKWDEFVOXIAORVZDXPFVPRTSYYUDSMPRKRYFQYPQDARNQTJGJJLRVBBXBIXMQWOKFZHIEVMGJIFEMNCKQLTEXOAZWDWADAUVKLNTBSHUQNYCARGHMIZWMLFNVWILBHETXYHPMHBS");

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
    msg.setTimeStamp(0.90553120385);
    msg.setSource(13387U);
    msg.setSourceEntity(22U);
    msg.setDestination(23966U);
    msg.setDestinationEntity(234U);
    msg.seq = 34042U;
    msg.value = 129U;
    msg.error.assign("NPVJWYEHLJZDCYMDFYIIGTLJRASGGPMAFTVWUZBICIQ");

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
    msg.setTimeStamp(0.0644738934314);
    msg.setSource(56243U);
    msg.setSourceEntity(189U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(202U);
    msg.seq = 34070U;
    msg.sys.assign("LRVPMFANGGGWOBVZHDYSHTUWXHKSZJRNCIYGHEMKBVOABUGZRFZXJLRPETCXXOZTJTAZAVBCMOQBSQGWXECMLEBGJUMXRWHOINPQCVCYFWIDSAHJRQYJVZDMONLFSJOKEIGPJWFGDOZHDGUCHZEUPKAVPWNEDCALPVMNQYBFAQRLFQBYMQIBKEOTNSAXKTSCUNTPKDUJTWWYRRPFEVLMHURKYUYBQPDNLXC");
    msg.value = 0.20772062212;

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
    msg.setTimeStamp(0.471862185027);
    msg.setSource(58614U);
    msg.setSourceEntity(221U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(79U);
    msg.seq = 18156U;
    msg.sys.assign("NSKOIZIQRIJOLRIVIVUXQUJCYACRERALHSQVMZNFMBXYXFBRTNOMFYTLFEAMLEZXISGDOTKJPT");
    msg.value = 0.979306176422;

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
    msg.setTimeStamp(0.618908285878);
    msg.setSource(8653U);
    msg.setSourceEntity(50U);
    msg.setDestination(19352U);
    msg.setDestinationEntity(113U);
    msg.seq = 35306U;
    msg.sys.assign("LJUQDJGKNOHXXIDNECNGPPEDYQFGKTMDCWLKPXAMZEFTSYEROJBROUFKFCJRZXRWZQXOJUVUTNSYWXHJLCEWLSSBYYW");
    msg.value = 0.509126668092;

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
    msg.setTimeStamp(0.530122113149);
    msg.setSource(10020U);
    msg.setSourceEntity(217U);
    msg.setDestination(34558U);
    msg.setDestinationEntity(134U);
    msg.action = 52U;
    msg.longain = 0.732871334458;
    msg.latgain = 0.106810381322;
    msg.bondthick = 1725805519U;
    msg.leadgain = 0.0361193480909;
    msg.deconflgain = 0.511146837731;

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
    msg.setTimeStamp(0.454757621121);
    msg.setSource(33840U);
    msg.setSourceEntity(11U);
    msg.setDestination(58622U);
    msg.setDestinationEntity(28U);
    msg.action = 207U;
    msg.longain = 0.724045452393;
    msg.latgain = 0.476552310086;
    msg.bondthick = 3596559545U;
    msg.leadgain = 0.348162997182;
    msg.deconflgain = 0.390040726812;

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
    msg.setTimeStamp(0.605316028907);
    msg.setSource(5488U);
    msg.setSourceEntity(155U);
    msg.setDestination(26886U);
    msg.setDestinationEntity(231U);
    msg.action = 3U;
    msg.longain = 0.828932968811;
    msg.latgain = 0.593131515453;
    msg.bondthick = 1342290438U;
    msg.leadgain = 0.506307732876;
    msg.deconflgain = 0.0181247024698;

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
    msg.setTimeStamp(0.791514384001);
    msg.setSource(37406U);
    msg.setSourceEntity(145U);
    msg.setDestination(64916U);
    msg.setDestinationEntity(184U);
    msg.err_mean = 0.0367934995586;
    msg.dist_min_abs = 0.825701109306;
    msg.dist_min_mean = 0.713741687532;

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
    msg.setTimeStamp(0.318448490513);
    msg.setSource(27293U);
    msg.setSourceEntity(85U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(146U);
    msg.err_mean = 0.0133882941083;
    msg.dist_min_abs = 0.692717831463;
    msg.dist_min_mean = 0.854085931752;

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
    msg.setTimeStamp(0.822453531161);
    msg.setSource(49296U);
    msg.setSourceEntity(225U);
    msg.setDestination(22906U);
    msg.setDestinationEntity(11U);
    msg.err_mean = 0.597381073658;
    msg.dist_min_abs = 0.0691083906011;
    msg.dist_min_mean = 0.598239242133;

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
    msg.setTimeStamp(0.97396523861);
    msg.setSource(48179U);
    msg.setSourceEntity(197U);
    msg.setDestination(32489U);
    msg.setDestinationEntity(107U);
    msg.action = 67U;
    msg.lon_gain = 0.726924467671;
    msg.lat_gain = 0.850731574749;
    msg.bond_thick = 0.372299967796;
    msg.lead_gain = 0.474319166699;
    msg.deconfl_gain = 0.793316950702;
    msg.accel_switch_gain = 0.818696129124;
    msg.safe_dist = 0.0326321938497;
    msg.deconflict_offset = 0.221445389323;
    msg.accel_safe_margin = 0.856371814391;
    msg.accel_lim_x = 0.914813719669;

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
    msg.setTimeStamp(0.561620434598);
    msg.setSource(4398U);
    msg.setSourceEntity(141U);
    msg.setDestination(54378U);
    msg.setDestinationEntity(17U);
    msg.action = 3U;
    msg.lon_gain = 0.239316029836;
    msg.lat_gain = 0.639806468742;
    msg.bond_thick = 0.393381909353;
    msg.lead_gain = 0.171549280459;
    msg.deconfl_gain = 0.453548311856;
    msg.accel_switch_gain = 0.17542970548;
    msg.safe_dist = 0.872211897179;
    msg.deconflict_offset = 0.385128065053;
    msg.accel_safe_margin = 0.415650017522;
    msg.accel_lim_x = 0.689302408575;

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
    msg.setTimeStamp(0.216136807922);
    msg.setSource(57632U);
    msg.setSourceEntity(0U);
    msg.setDestination(17335U);
    msg.setDestinationEntity(205U);
    msg.action = 186U;
    msg.lon_gain = 0.438412519221;
    msg.lat_gain = 0.698513362653;
    msg.bond_thick = 0.0728684419655;
    msg.lead_gain = 0.120969966992;
    msg.deconfl_gain = 0.543850071825;
    msg.accel_switch_gain = 0.780707098039;
    msg.safe_dist = 0.497122626833;
    msg.deconflict_offset = 0.212331017085;
    msg.accel_safe_margin = 0.615398662816;
    msg.accel_lim_x = 0.103920424043;

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
    msg.setTimeStamp(0.832751400272);
    msg.setSource(26156U);
    msg.setSourceEntity(13U);
    msg.setDestination(53968U);
    msg.setDestinationEntity(252U);
    msg.type = 53U;
    msg.op = 39U;
    msg.err_mean = 0.421320745095;
    msg.dist_min_abs = 0.068883767475;
    msg.dist_min_mean = 0.501946366499;
    msg.roll_rate_mean = 0.509020019972;
    msg.time = 0.187413901086;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 52U;
    tmp_msg_0.lon_gain = 0.460620645992;
    tmp_msg_0.lat_gain = 0.1306431971;
    tmp_msg_0.bond_thick = 0.19453233221;
    tmp_msg_0.lead_gain = 0.16803087099;
    tmp_msg_0.deconfl_gain = 0.417415398719;
    tmp_msg_0.accel_switch_gain = 0.616013683999;
    tmp_msg_0.safe_dist = 0.710376939675;
    tmp_msg_0.deconflict_offset = 0.400046864236;
    tmp_msg_0.accel_safe_margin = 0.753743585119;
    tmp_msg_0.accel_lim_x = 0.218107920517;
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
    msg.setTimeStamp(0.855158625928);
    msg.setSource(25096U);
    msg.setSourceEntity(113U);
    msg.setDestination(18497U);
    msg.setDestinationEntity(83U);
    msg.type = 151U;
    msg.op = 92U;
    msg.err_mean = 0.175987867376;
    msg.dist_min_abs = 0.397797502866;
    msg.dist_min_mean = 0.201286419227;
    msg.roll_rate_mean = 0.156242607037;
    msg.time = 0.813257147919;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 66U;
    tmp_msg_0.lon_gain = 0.378219186;
    tmp_msg_0.lat_gain = 0.834257753787;
    tmp_msg_0.bond_thick = 0.254963017694;
    tmp_msg_0.lead_gain = 0.54609626942;
    tmp_msg_0.deconfl_gain = 0.833973008432;
    tmp_msg_0.accel_switch_gain = 0.661200369075;
    tmp_msg_0.safe_dist = 0.219669263458;
    tmp_msg_0.deconflict_offset = 0.740247518011;
    tmp_msg_0.accel_safe_margin = 0.204260640429;
    tmp_msg_0.accel_lim_x = 0.871125421218;
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
    msg.setTimeStamp(0.549409616992);
    msg.setSource(44282U);
    msg.setSourceEntity(239U);
    msg.setDestination(13724U);
    msg.setDestinationEntity(23U);
    msg.type = 244U;
    msg.op = 62U;
    msg.err_mean = 0.988828556286;
    msg.dist_min_abs = 0.0237518713775;
    msg.dist_min_mean = 0.308765932985;
    msg.roll_rate_mean = 0.441498640338;
    msg.time = 0.786443556064;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 28U;
    tmp_msg_0.lon_gain = 0.376424511193;
    tmp_msg_0.lat_gain = 0.819004475125;
    tmp_msg_0.bond_thick = 0.582248281337;
    tmp_msg_0.lead_gain = 0.125806251211;
    tmp_msg_0.deconfl_gain = 0.322057869037;
    tmp_msg_0.accel_switch_gain = 0.591476633733;
    tmp_msg_0.safe_dist = 0.652457799329;
    tmp_msg_0.deconflict_offset = 0.439524798962;
    tmp_msg_0.accel_safe_margin = 0.334890923044;
    tmp_msg_0.accel_lim_x = 0.555853817732;
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
    IMC::ExtendedFormationEvaluation msg;
    msg.setTimeStamp(0.208158387375);
    msg.setSource(13604U);
    msg.setSourceEntity(161U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(46U);
    msg.type = 143U;
    msg.op = 186U;
    msg.err_mean = 0.915797266423;
    msg.dist_min_abs = 0.971910475245;
    msg.dist_min_mean = 0.62405132848;
    msg.roll_rate_mean = 0.458969703174;
    msg.timespan = 0.342253532096;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 75U;
    tmp_msg_0.lon_gain = 0.80630948011;
    tmp_msg_0.lat_gain = 0.200254137653;
    tmp_msg_0.bond_thick = 0.00228573907857;
    tmp_msg_0.lead_gain = 0.962904131983;
    tmp_msg_0.deconfl_gain = 0.930909279225;
    tmp_msg_0.accel_switch_gain = 0.91300010037;
    tmp_msg_0.safe_dist = 0.191741603153;
    tmp_msg_0.deconflict_offset = 0.35326839429;
    tmp_msg_0.accel_safe_margin = 0.467719346355;
    tmp_msg_0.accel_lim_x = 0.386006131598;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationEvaluation msg;
    msg.setTimeStamp(0.707511091775);
    msg.setSource(25914U);
    msg.setSourceEntity(189U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(139U);
    msg.type = 246U;
    msg.op = 244U;
    msg.err_mean = 0.345506511548;
    msg.dist_min_abs = 0.386722127948;
    msg.dist_min_mean = 0.055057205255;
    msg.roll_rate_mean = 0.859339825684;
    msg.timespan = 0.956457389399;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 63U;
    tmp_msg_0.lon_gain = 0.0550167135791;
    tmp_msg_0.lat_gain = 0.993347402968;
    tmp_msg_0.bond_thick = 0.452424613924;
    tmp_msg_0.lead_gain = 0.0725759819631;
    tmp_msg_0.deconfl_gain = 0.880694513882;
    tmp_msg_0.accel_switch_gain = 0.748612933674;
    tmp_msg_0.safe_dist = 0.637749897275;
    tmp_msg_0.deconflict_offset = 0.636161910987;
    tmp_msg_0.accel_safe_margin = 0.351767158496;
    tmp_msg_0.accel_lim_x = 0.220531029328;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedFormationEvaluation msg;
    msg.setTimeStamp(0.228219188016);
    msg.setSource(53202U);
    msg.setSourceEntity(250U);
    msg.setDestination(47217U);
    msg.setDestinationEntity(25U);
    msg.type = 218U;
    msg.op = 62U;
    msg.err_mean = 0.968762755722;
    msg.dist_min_abs = 0.271033273913;
    msg.dist_min_mean = 0.00793497786453;
    msg.roll_rate_mean = 0.308988860503;
    msg.timespan = 0.0110662511693;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 108U;
    tmp_msg_0.lon_gain = 0.577552229322;
    tmp_msg_0.lat_gain = 0.3430914948;
    tmp_msg_0.bond_thick = 0.570864043063;
    tmp_msg_0.lead_gain = 0.846869520275;
    tmp_msg_0.deconfl_gain = 0.0524749828216;
    tmp_msg_0.accel_switch_gain = 0.953187201994;
    tmp_msg_0.safe_dist = 0.812736126169;
    tmp_msg_0.deconflict_offset = 0.844664688891;
    tmp_msg_0.accel_safe_margin = 0.166425273279;
    tmp_msg_0.accel_lim_x = 0.345310257945;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedFormationEvaluation #2", msg == *msg_d);
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
    msg.setTimeStamp(0.559266410591);
    msg.setSource(47316U);
    msg.setSourceEntity(124U);
    msg.setDestination(14726U);
    msg.setDestinationEntity(183U);
    msg.uid = 210U;
    msg.frag_number = 52U;
    msg.num_frags = 24U;
    const char tmp_msg_0[] = {60, 12, 87, 50, -104, 39, 56, -6, 92, 4, 90, 45, 113, -71, -100, -71, 34, -23, -42, -67, 75, -98, -4, -112, 34, 120, 104, -76, 30, 104, -32, 7, 39, -36, -51, -48, -52, -43, 3, -5, -65, 8, 29, -29, 74, -92, -29, 55, 75, 31, -33, -126, 32, -110, -101, -99, -88, -43, -43, 23, 122, 82, -107, -20, 44, 45, 74, -5, 113, 78, -115, -28, -125, 121, -110, 86, 86, -100, -100, -126, 20, -24, 32, 57, 126, 97, -10, 35, 41, -91, -108, -85, 20, -50, 9, -95, -80, 69, -125, -108, 70, -2, -46, 33, 116, 23, 10, 81, 57, -63, -66, 11, 73, 81, -8, -118, -37, -93, 76, 125, 75, 100, 63, -9, -122, 95, -90, -58, 70, 95, 62, -54, 2, -4, -108, -25, 0, -75, -53, 41, 54, -36, -40, 18, -31, 42, -13, 102, -25, 114, 75, 97, -122, 69, 104, 110, -81, -97, 36, 84, -52, -8, 50, 86, -57, -3, -31, 62, 60, 18, -1, 108, 11, -128, -56, -68, -84, -9, 3, 19, -19, -38, 30, -64, -38, -17, 63, -5, 6, 86, 47, 10, -80, 63, 87, -19, -64, -28, 94, -73, -48, 79, -50, 86, -30, -88, 76, 11, -1, 111, -22, 78, 79, -13, -65, -39, 69, 64, 27, -68, 68, 31, -69, 76, -86, 44, -48, -35, -47, 102, 112, -44, -41, -95, -47, 18, 8, -83, -23, 64, 124, 14, -58, 97, 97, -123, -70};
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
    msg.setTimeStamp(0.670841225648);
    msg.setSource(35088U);
    msg.setSourceEntity(164U);
    msg.setDestination(1882U);
    msg.setDestinationEntity(150U);
    msg.uid = 2U;
    msg.frag_number = 47U;
    msg.num_frags = 230U;
    const char tmp_msg_0[] = {-67, -66, 68, 116, 53, -108, 58, 27, 23, 121, 24, -59, -122, -122, -101, -43, -40, 91, 101, 63, -91, 119, -111, 3, 112, 21, 56, 82, -32, -2, 17, -19, -2, -22, 26, -104, 21, -5, -86, -73, -28, 126, -102, -111, 116, -27, 111, 126, 58, 6, 66, -30, 5, 118, -12, -124, 52, -119, -63, -9, 19, -3, -127, -49, 118, -36, -14, 58, -65, -3, -40, -25, 93, -36, -57, 60, 105, 69, 46, -24, 47, 17, -56, -51, 112, 67, 47, -15, -56, 84, -4, 95, -20, -103, 101, 59, 104, -59, -41, 45, 65, 118, -48, 99, -101, 79, -86, -120, -56, 72, 126, -52, -123, 88, 89, 59, 8, -96, -99, -89, -83, 37, 70, 21, -103, 78, -29, -59, -117};
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
    msg.setTimeStamp(0.582641111895);
    msg.setSource(38733U);
    msg.setSourceEntity(17U);
    msg.setDestination(36061U);
    msg.setDestinationEntity(153U);
    msg.uid = 83U;
    msg.frag_number = 42U;
    msg.num_frags = 133U;
    const char tmp_msg_0[] = {-28, 38, 63, -77, 116, 31, -10, -86, -71, 56, -17, 77, -111, 59, -57, -7, -22, 94, 81, 112, -31, -31, -80, 53, 77, -17, -10, 108, -37, -105, -68, -64, 110, -45, -119, 26, -27, 46, 24, 8, 28, 38, -6, -44, -68, 40, 58, 54, 75, -3, 84, -18, -4, 58, 60, -78, -61, 52, 104, -103, -76, 86, 83, -65, 61, -87, -120, -61, 5, 11, 105, 0, -115, 76, 91, -69, -104, 11, 51, -43, 59, 121, -96, 116, -91, 52, -121, -96, 78, 29, -21, -103, -26, 22, 18, -74, 81, 59, 59, 93, -123, -116, -128, 47, 126, -110, -33, 22, 29, -104, 61, -59, -105, 97, 117, 51, 40, -57, 37, 67, 112, -10, -83, 122, 88, 31};
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
    msg.setTimeStamp(0.142331937382);
    msg.setSource(37619U);
    msg.setSourceEntity(124U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(133U);
    msg.content_type.assign("RYLNUXVWYZQZFZQQMOTRQZISMWFSIZPOILHBYBZGTSJLYQCPAHETOODVJBVTYXGWVPNDXLFJMYBWEVKSZEWEBIXHYPTJCBGUNXNHAQCZCKEWNFCJKRGWEKGIBEJBGFH");
    const char tmp_msg_0[] = {104, 50, 70, -115, -95, -55, 125, -109, 93, -19, 76, -2, 91, 8, 125, -41, 71, -99, 58, 101, -103, 38, -6, 37, -18, 31, 55, 42, -105, 34, -21, 62, -37, -54, -111, 14, 44, 99, -2, -46, -46, 30, 101, -37, -103, -36, -87, 17, 40, 85, -3, 72, 98, 123, -127, -79, -48, -112, -89, 42, -120, -17, -14, -46, 77, 11, -37, 50, 40, 39, -59, 44, -5, -61, -122, -69, 11, 65, 43, -94, -30, 77, 103, 53, -54, 86, -28, 120, -119, -97, -53, 90, -109, 80, -13, -101, 13, -48, 37, -43, -113, 120, -13, -31, -67, -102, -52, -76, 124, -12, -83, -97, 92, 122, 5, -31, -109, -63, 54, -26, -2, 104, 119, 93, 126, 99, 41, 123, -76, -37, -20, 90, -81, -73, 83, 114, -97, -38, 58, -38, 50, -121, -15, 22, -123, -15, -39, -112};
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
    msg.setTimeStamp(0.823443370137);
    msg.setSource(12315U);
    msg.setSourceEntity(126U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(48U);
    msg.content_type.assign("ABFDZEMKSRQCJJIOFUSIXCGRRADJYKXHIZNHGIDIZVBCBUYEHOFZGRZXSCXQZJALKPNYTEXWDMZQWPMLMYNVCRKXAYTABEWXQKEGDBMDUMATLJVECYLTHVRSDLGVGTMMPFLWOKBYTZTAQBKBPYQKGJNIOFHCDOQFXROEEUHUBLYWVTJOSNPVLWL");
    const char tmp_msg_0[] = {-60, 77, 53, 3, 103, 111, 24, -107, -82, 121, -90, -26, -17, -11, -115, -8, -1, -128, 82, 74, 44, 117, -54, -24, -94, -112, 123, -71, 112, -6, -96, -21, 102, -51, -37, 113, -93, -58, 76, 40, 110, -92, 106, -99, -103, 25, -45, -84, -63, 83, -10, 93, 101, 29, -31, 100, -46, -123, 37, 8, -51, -58, 45, -34, -20, 22, 101, 125, 31, 3, 14, -118, -55, -86, 9, 69, 35, -26, -107, 74, 104, -125, 125, -23, 58, 126, 36, 116, -128, -90, -31, -111, 98, 110, 3, -125, 102, -111, -24, 97, -87, -72, 82, 90, 117, 94, -97, 67};
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
    msg.setTimeStamp(0.223358618058);
    msg.setSource(38809U);
    msg.setSourceEntity(95U);
    msg.setDestination(65045U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("OMOLBXHPAFXZ");
    const char tmp_msg_0[] = {60, -19, 121, 45, 12, -99, 39, -103, 121, 73, -95, -21, 12, -122, -60, 84, 120, 73, -117, 87, 27, 61, 20, 23, 100, -29, 27, -98, -122, -43, 32, 119, 95, -114, -31, 103, -105, -37, -100, 13, 45, 86, -114, 15, 121, 32, -35, 123, 7, 116, 21, 8, -14, 74, -81, -77, -81, 17, 48, 104, -67, -107, 56, 34, -17, 20, 49, -117, -116, 57, 105, -36, 59, 94, 55, 92, 105, 96, 104, -41, -116, -15, 102, 67, -48, 53, -98, 91, 89, 104, -127, -94, 86, 34, 74, 17, -122, -119, -79, -30, -92, 57, 58, -13, 30, 63, -4, -101, -37, 87, -61, 79, -25, -100, 83, -98, -60, 99, 73, 57, -34, -4, 30, -31, 108, -5, 1, 34, 13, -102, 15, 71, 108, -80, 111, -86, 68, -85, 15, 45, -124, -56, 50, -81, 4, -15, 110, 61, -77, 16, -3, 107, -66, -88, -14, -16, -76, -73, 8, -43, -125, -81, 98, -34, 95, 107, -88, 58, -98, -109, -107, -111, 96, -19, 92, -62, -127, -34, 69, -50, -89, 117, 107, 94, 122, 25, -99, 85, -26, -60, -52, -118, -1, 18, 58, -93, -39, 8, -105, -41, -30, -5, 54, -114, -30, 92, -69, 85, 76, -30, 6, 51, 22, -94, 61, 71, -21, -104, -92, 86, 63, -43, -121, 87, 94, -35, -85, -23, 118, -19, 6, 2, 64, 32, 89, 60, 76, -87, 31, 124, 70, -9};
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
    msg.setTimeStamp(0.436715359457);
    msg.setSource(51168U);
    msg.setSourceEntity(23U);
    msg.setDestination(37953U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.283204561572);
    msg.setSource(60824U);
    msg.setSourceEntity(19U);
    msg.setDestination(63744U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.605279848094);
    msg.setSource(30698U);
    msg.setSourceEntity(40U);
    msg.setDestination(37964U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.728909438474);
    msg.setSource(5954U);
    msg.setSourceEntity(48U);
    msg.setDestination(59756U);
    msg.setDestinationEntity(57U);
    msg.target = 41604U;
    msg.bearing = 0.0994108989492;
    msg.elevation = 0.424124964308;

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
    msg.setTimeStamp(0.007965890077);
    msg.setSource(34979U);
    msg.setSourceEntity(99U);
    msg.setDestination(19814U);
    msg.setDestinationEntity(212U);
    msg.target = 27437U;
    msg.bearing = 0.459394420396;
    msg.elevation = 0.96624877313;

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
    msg.setTimeStamp(0.0184880759141);
    msg.setSource(15312U);
    msg.setSourceEntity(88U);
    msg.setDestination(40430U);
    msg.setDestinationEntity(212U);
    msg.target = 30626U;
    msg.bearing = 0.522121491291;
    msg.elevation = 0.140079762187;

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
    msg.setTimeStamp(0.452352736922);
    msg.setSource(2757U);
    msg.setSourceEntity(103U);
    msg.setDestination(30074U);
    msg.setDestinationEntity(240U);
    msg.target = 5264U;
    msg.x = 0.73232847314;
    msg.y = 0.385724862427;
    msg.z = 0.275735243797;

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
    msg.setTimeStamp(0.932090862424);
    msg.setSource(24691U);
    msg.setSourceEntity(11U);
    msg.setDestination(34096U);
    msg.setDestinationEntity(156U);
    msg.target = 40610U;
    msg.x = 0.561326347461;
    msg.y = 0.481405185244;
    msg.z = 0.110767966631;

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
    msg.setTimeStamp(0.372299463085);
    msg.setSource(63883U);
    msg.setSourceEntity(65U);
    msg.setDestination(50980U);
    msg.setDestinationEntity(35U);
    msg.target = 994U;
    msg.x = 0.231595593094;
    msg.y = 0.28398028364;
    msg.z = 0.168817234094;

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
    msg.setTimeStamp(0.630291989506);
    msg.setSource(34411U);
    msg.setSourceEntity(122U);
    msg.setDestination(14797U);
    msg.setDestinationEntity(37U);
    msg.target = 14669U;
    msg.lat = 0.513603762049;
    msg.lon = 0.467111633299;
    msg.z_units = 119U;
    msg.z = 0.827133462541;

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
    msg.setTimeStamp(0.808614132995);
    msg.setSource(30787U);
    msg.setSourceEntity(8U);
    msg.setDestination(36876U);
    msg.setDestinationEntity(86U);
    msg.target = 36051U;
    msg.lat = 0.686135216278;
    msg.lon = 0.536274588919;
    msg.z_units = 134U;
    msg.z = 0.792810556774;

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
    msg.setTimeStamp(0.694521290274);
    msg.setSource(44029U);
    msg.setSourceEntity(61U);
    msg.setDestination(6902U);
    msg.setDestinationEntity(90U);
    msg.target = 21029U;
    msg.lat = 0.732782805256;
    msg.lon = 0.282073530471;
    msg.z_units = 221U;
    msg.z = 0.766163414971;

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
    msg.setTimeStamp(0.882894868656);
    msg.setSource(319U);
    msg.setSourceEntity(48U);
    msg.setDestination(22398U);
    msg.setDestinationEntity(104U);
    msg.locale.assign("HUKDQYZOKQMTBIGSDDFPIOLUNNJEBQGTRMAPUTBFIOKERJNGTNEVEAWYCDOLMDYWTBFXFSSEMDCLDXPKMJAYUPURYCQFJOSDWPZFSSAGAZUDHIFVXGBYXNHBPMJRQAZNEHKHOSHXTVZLJXWMLVPJXVGNWZBGDQXEKCABSHKVUSOXJJTGPURZCYRIULCEWNCRWHAQRMNUBGCVOIQEWRHKCMIPFJAETOYVIKVAHZXLLYRTBZTGFWYFPLC");
    const char tmp_msg_0[] = {69, -77, -18, -78, -32, -33, 114, 60, -58, 30, -124, -62, 37, 74, 47, -93, -126, -105, -125, 107, 76, -125, 56, -65, 81, 4, -18, 68, -81, 30, -22, 4, 122, -67, -2, 59, 24, -86, -10, 107, 95, 10, 77, -123, 74, -70, 21, 114, 122, 124, -72, -51, -35, -81, -68, -29, 88, 17, 23, 116, 69, 63, 13, -82, -112, 65, 119, 0, 15, 14, 90, 110, 96, -50, 34, -65, -73, -67, -104, -4, -89, 122, -32, -102, -87, 62, 94, -78, -8, 37, -87, -49, 8, -120, -63, -70, 91, 93, 41, -35, -93, -69, -99, -9, -49, 19, 81, 110, 71, 40, 23, -11, -37, 45, 58, 14, -14, -30, -86, 40, 37, 68, 23, 36, 62, -4};
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
    msg.setTimeStamp(0.921275192573);
    msg.setSource(63715U);
    msg.setSourceEntity(26U);
    msg.setDestination(27834U);
    msg.setDestinationEntity(15U);
    msg.locale.assign("BDQIODWOGKXLETSHNSQXCWJIKPGECYDGGBHGXZLWLVPIMMUOMSECZBFTFBXLNXWABHNYZUANONXOIQFQENNBBHSZWCNGKGIJPNWQVVLBARCVDCOZEFRGHKVDRJJCMXHZTYMUOEYJTSUJUMAPFFKYHLOELKBJKUAULPPNESJKTSWQIPMLMRDF");
    const char tmp_msg_0[] = {65, 93, 17, 120, -59, -34, -16, 99, -91, -4, -46, 110, 40, 24, 33, -126, 99, -71, -23, -13, -107, 69, -6, 69, 10, -113, 95, 15, 35, -97};
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
    msg.setTimeStamp(0.667131339608);
    msg.setSource(55626U);
    msg.setSourceEntity(199U);
    msg.setDestination(64625U);
    msg.setDestinationEntity(88U);
    msg.locale.assign("XERYBZVWVXBAFPQOQTNZQJSABMSTBNKZFAAOVQRRTNIPMHIMQLUGWOWHHAHPENNONFKFEUTMNKCOUCGLNRORCJYSJOLEOSENHGICUHFPA");
    const char tmp_msg_0[] = {-50, 53, -20, 111, -4, -36, 1, 2, -109, 100, 99, 54, -95, -114, 120, 98, -125, 69, 63, 76, 94, 58, 11, -46, -101, 126, -77, 56, 66, -18, -89, 53, -43, 38, -45, -82, 113, 102, -98, -110, -68, -100, 92, -22, -116, -73, 60, -72, 49, -63, 34, -89, -120, -18, -6, -3, 38, 82, 50, 100, -44, 42, -12, 51, 110, 13, -85, 55, 55, 65, -117, -77, 43, 75, -97, 86, -89, 46, 7, -103, -14, 74, 99, 9, -43, -57, -25, 45, -125, 7, -72, 35, -6, -40, 103, -52, 71, 126, 86, -46, 87, 119, -54, -40, -112, 42, 46, -114, 65, -35, -71, -104, -69, -94, 79, 43, 12, 78, 115, 117, 92, -84, -99, 112, -86, 12, -119, -87, -4, 42, 52, -36, -93, -15, 29, 16, 68, 18, -44, 66, 4, 83, 92, -3, 20, 75, 121, 49, 104, 29, 107, -82, 125, -86, 45, -42, -26, -103, -27, 12, 67, -20, -69, -47, 5, 86, -61, -75, 8, 4, 104, -28, 75, 109, 123, 12, -53, -8, 89, -34, 15, -43, 126, 11, 117, -95, -87, -27, -112, -38, -79, -54, -107, -37, -9, -50, 34};
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
    msg.setTimeStamp(0.916923763524);
    msg.setSource(42462U);
    msg.setSourceEntity(128U);
    msg.setDestination(9335U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.904362970401);
    msg.setSource(55437U);
    msg.setSourceEntity(230U);
    msg.setDestination(8590U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.85132527098);
    msg.setSource(30422U);
    msg.setSourceEntity(25U);
    msg.setDestination(6094U);
    msg.setDestinationEntity(1U);

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
    IMC::NecMsg msg;
    msg.setTimeStamp(0.318523338544);
    msg.setSource(62242U);
    msg.setSourceEntity(240U);
    msg.setDestination(26613U);
    msg.setDestinationEntity(4U);
    const char tmp_msg_0[] = {-28, 28, -16, -82, 52, 35, -100, -73, 62, -23, 106, -1, -70, 26, -49, 116, 36, -9, -89, -11, 87, -60, -92, 11, 30, 56, -104, -100, 125, 0, -124, -48, 76, 45, 1, -52, 28, -52, -75, 106, -39, 116, -71, 72, 72, -96, -2, 90, -59, -104, 116, 3, -53, -64, -68, -123, 26, 22, 54, 126, 22, 50, 102, 106, -69, -24, 8, -2, 3, 6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.28949270766);
    msg.setSource(3565U);
    msg.setSourceEntity(234U);
    msg.setDestination(33191U);
    msg.setDestinationEntity(47U);
    const char tmp_msg_0[] = {-109, -37, -80, -120, -96, 18, 34, 112, -50, -78, -6, -91, -9, 103, 74, -80, 105, -20, 92, -83, 58, -57, 66, 122, -110, 78, -38, 52, 82, -55, 42, -105, 52, -105, 15, 108, 25, -90, -56, -54, -56, -75, -92, -110, -22, -125, 125, -51, 94, -128, -117, -41, 21, -54, 95, 53, -85, -97, 17, -101, 103, 77, 4, 4, -115, -4, 75, -118, -85, -37, 62, -107, 10, 41, 124, -128, -33, 95, -93, -71, 12, 59, -116, -105, 12, 4, -68, 65, -70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.402928192576);
    msg.setSource(36560U);
    msg.setSourceEntity(29U);
    msg.setDestination(25960U);
    msg.setDestinationEntity(200U);
    const char tmp_msg_0[] = {-119, -38, 35, 28, 69, -47, -66, 48, 92, 97, 36, 59, 111, 121, -117, -74, 40, -36, 54, -27, -79, 89, 27, -2, -103, -113, 112, -116, 53, 56, 33, 110, 54, 30, 48, 41, 51, 35, 42, -128, 54, 48, 68, -95, -55, 92, 93, 47, -66, -67, -67, 110, 13, 109, 120, 67, -1, 50, -4, -47, 53, 14, -69, 11, 76, -121, 125, 112, 111, 65, -18, -127, 36, 48, -16, 78, -55, 21, -43, -116, -121, 27, 73, 119, -61, -2, -61, 47, -70, 65, -105, 107, 14, 33, 88, -66, 48, -93, -118, 124, 58, -24, -82, 114, -5, -71, 75, 71, -98, -50, -121, -73, 0, -14, -68, -104, -56, -36, -81, -56, 17, -59, 5, 47, -103, -34, 68, 102, 69, 66, 29, -77, -83, -68, -81, -42, -14, 72, -57, -43, 4, 0, -108, -23};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.00805401166274);
    msg.setSource(247U);
    msg.setSourceEntity(236U);
    msg.setDestination(50606U);
    msg.setDestinationEntity(111U);
    msg.json.assign("CQIMPXOZODESREZYPQHWMNMPJSFNDMNDLBCEWNICQYYYUBAFDPHAZAZIEJLKMXNJUCZMYIWPLBKSLRLDGBNSPAYNUJXELLCZXJPRBGAHRJVILPEBUWUYGOTUKBZRPRXXZWINKDRUOOATIXASZEQBCTQNUDTWNECRTJCCHHEOBSVZFSGXHDDTJWMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.827787143069);
    msg.setSource(63726U);
    msg.setSourceEntity(236U);
    msg.setDestination(65015U);
    msg.setDestinationEntity(157U);
    msg.json.assign("XMYQMLJQJHUZLRYVFIEMVJUHAIBVABIAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.994256831031);
    msg.setSource(2106U);
    msg.setSourceEntity(72U);
    msg.setDestination(35995U);
    msg.setDestinationEntity(1U);
    msg.json.assign("OOFPGKRPXUAMSIFAFUKNKWGIVMSDFQBQSFEWDRRVSJVPTKEZQYFDKAJXMLBBTRIQUFSVYROAAZRHITUSNSJAZOMZPTWYI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #2", msg == *msg_d);
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
