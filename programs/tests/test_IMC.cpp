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
    msg.setTimeStamp(0.5779515073134658);
    msg.setSource(35433U);
    msg.setSourceEntity(14U);
    msg.setDestination(61724U);
    msg.setDestinationEntity(253U);
    msg.state = 143U;
    msg.flags = 167U;
    msg.description.assign("BGJZYVIFIEQXOZNTFIJRNYNEJPKCFVHVPUMAEDMQOYGXKMXWDLTKGOOWRDCXXBUIQTCETHFJMVZYSSIYTBOPAPHSGXYELGDKSAJUZHMQRNTFRFNSZMRIWULAJELWNAXMUDIPHEZRVAFKNOCKHXGWHNMSTSPDVJLBOEGZOOYZYQHRTAGBKRLLIJCAJQYPCEFTXWCSIBZWTEVKDZCHUQBFUSCMIVALG");

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
    msg.setTimeStamp(0.3011394617181278);
    msg.setSource(22844U);
    msg.setSourceEntity(2U);
    msg.setDestination(57378U);
    msg.setDestinationEntity(210U);
    msg.state = 201U;
    msg.flags = 136U;
    msg.description.assign("JMTRPUCLIJSQZONXDOVQDAXDWACPZBFBWPKQVRRMIYSTXKPIDQWDXYXCHWNOUEPXYV");

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
    msg.setTimeStamp(0.44751554133756033);
    msg.setSource(7027U);
    msg.setSourceEntity(223U);
    msg.setDestination(63496U);
    msg.setDestinationEntity(83U);
    msg.state = 37U;
    msg.flags = 211U;
    msg.description.assign("JVUMKEHWIOQFNOQZNZRVIMACANQXYENTDDLQTWDYHIIKNOEQFWNKYAURMIYITBQRTZIRRM");

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
    msg.setTimeStamp(0.16849078949060603);
    msg.setSource(36743U);
    msg.setSourceEntity(248U);
    msg.setDestination(14180U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.6909657597952849);
    msg.setSource(45749U);
    msg.setSourceEntity(213U);
    msg.setDestination(13553U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.9684378415905682);
    msg.setSource(23770U);
    msg.setSourceEntity(88U);
    msg.setDestination(16850U);
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
    msg.setTimeStamp(0.040998717481060765);
    msg.setSource(38141U);
    msg.setSourceEntity(83U);
    msg.setDestination(30369U);
    msg.setDestinationEntity(82U);
    msg.id = 65U;
    msg.label.assign("UDJEJIMEUSOCOPMYMZINADBPCNFKXUINPCURIHVLVFDZPAQHTYMXLUQZSMJMZJBMIWYYBEGWDOSRHLPTGSGPKEROFXQNXGFOBJSTNZKLXNXXCPEZRWDDZWTJQCWHFKCCMRZAAEYYJNSOAXVYA");
    msg.component.assign("TNKJZYCPYZABTVMDFYXYMJTZIBPVZDVJTJLKLZWFHLZTKZXLQOGQZGGMSBBQFRKWBJJICDAXCCHNXLIOZPRKFDBUQXGPQWFRKPWHMIYECNMOETSOWHAISUZUUKWEWGNHNCCLSKBNFLVICSHAICPHPOXBTFRSHDXVWYRQISAGAWGXEHFDDG");
    msg.act_time = 19360U;
    msg.deact_time = 43333U;

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
    msg.setTimeStamp(0.8526617916488081);
    msg.setSource(55678U);
    msg.setSourceEntity(223U);
    msg.setDestination(34778U);
    msg.setDestinationEntity(200U);
    msg.id = 47U;
    msg.label.assign("XVTNFGYYNTUKILPIINSVQBPWPMXHTPGCBBCXIUQWMKQRFCGFKORERGVXRDAPNPJDRCIBXVSZSJENKJVLKBWAQKCYCZSHIVHMRVOWJOHEPVITOVQKXGNMZYULZZKYDNZQLCDCPWQPIJOXLGBODAPZMHBAGUYFUODECLKORFYHHAQBAF");
    msg.component.assign("TGFYAAHGCTAEIHTSKWPRVRDBBUZB");
    msg.act_time = 55990U;
    msg.deact_time = 59894U;

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
    msg.setTimeStamp(0.9906238349770551);
    msg.setSource(20834U);
    msg.setSourceEntity(61U);
    msg.setDestination(26190U);
    msg.setDestinationEntity(110U);
    msg.id = 104U;
    msg.label.assign("LNKXORSCFPACVWMQGBVAUNMGLZZJRRSMEEMLUNCPSJXEZDWZQROPHQTWYAJZUXZRLWHWIJNMMQAGHCJLDVSBUMAXIKIICHLIOPBOKNPLKXPUJVRTMQSKZTYRCZCRFOPGITYOXEQEIKQWOIKKQVDENEEPYUBUJPIFXUZD");
    msg.component.assign("KICZEQGWVXPZXYVPDCWLHFAJCADBQWNTISQ");
    msg.act_time = 38712U;
    msg.deact_time = 48425U;

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
    msg.setTimeStamp(0.9355979923279285);
    msg.setSource(37813U);
    msg.setSourceEntity(105U);
    msg.setDestination(29880U);
    msg.setDestinationEntity(162U);
    msg.id = 78U;

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
    msg.setTimeStamp(0.3417561754504852);
    msg.setSource(45444U);
    msg.setSourceEntity(14U);
    msg.setDestination(335U);
    msg.setDestinationEntity(161U);
    msg.id = 211U;

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
    msg.setTimeStamp(0.10702796755832122);
    msg.setSource(16236U);
    msg.setSourceEntity(150U);
    msg.setDestination(64892U);
    msg.setDestinationEntity(122U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.661335572094496);
    msg.setSource(13242U);
    msg.setSourceEntity(24U);
    msg.setDestination(21108U);
    msg.setDestinationEntity(104U);
    msg.op = 71U;
    msg.list.assign("UTHWUEYXVFSOBFHWCYZVMWHOYRGBFOBNCJHGPHILCRKEWQPKYPRMRSLBUEYSRPAVKYFMXIMOZDALHYCQLMEFBQCNAATJSUKPFETCOVOIAGSIBDRAURBMTQFGDZGHMPKINGPVGJOONFJSFZI");

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
    msg.setTimeStamp(0.19539082496851534);
    msg.setSource(65113U);
    msg.setSourceEntity(244U);
    msg.setDestination(61791U);
    msg.setDestinationEntity(193U);
    msg.op = 63U;
    msg.list.assign("RZWJOWKIEITUFHGEFHUPUWAHYFEPOYBUFYZRNJIBVJNKIEQAIOSRBIXOVVUBGKGNNDOZQVYXXSCDCHLBYLMCKLWTACKHTGDN");

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
    msg.setTimeStamp(0.022312487808335613);
    msg.setSource(61547U);
    msg.setSourceEntity(67U);
    msg.setDestination(15664U);
    msg.setDestinationEntity(245U);
    msg.op = 138U;
    msg.list.assign("LKVGOBZDIQYFHASTMUPDTULEHRQFCUFSS");

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
    msg.setTimeStamp(0.8382104049645374);
    msg.setSource(9269U);
    msg.setSourceEntity(203U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(162U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.6407499606296051);
    msg.setSource(14077U);
    msg.setSourceEntity(180U);
    msg.setDestination(32480U);
    msg.setDestinationEntity(173U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.7514468555916739);
    msg.setSource(51616U);
    msg.setSourceEntity(126U);
    msg.setDestination(49010U);
    msg.setDestinationEntity(36U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.7179998446981264);
    msg.setSource(63248U);
    msg.setSourceEntity(134U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(36U);
    msg.value = 100U;

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
    msg.setTimeStamp(0.6094087807135771);
    msg.setSource(24200U);
    msg.setSourceEntity(171U);
    msg.setDestination(61537U);
    msg.setDestinationEntity(243U);
    msg.value = 160U;

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
    msg.setTimeStamp(0.5014685228263285);
    msg.setSource(1480U);
    msg.setSourceEntity(243U);
    msg.setDestination(6372U);
    msg.setDestinationEntity(147U);
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
    msg.setTimeStamp(0.8942256444631573);
    msg.setSource(9155U);
    msg.setSourceEntity(159U);
    msg.setDestination(28635U);
    msg.setDestinationEntity(158U);
    msg.consumer.assign("EBPLBKHDBONLRKHPCZMNSQMWTL");
    msg.message_id = 17911U;

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
    msg.setTimeStamp(0.922854213062037);
    msg.setSource(38192U);
    msg.setSourceEntity(219U);
    msg.setDestination(17254U);
    msg.setDestinationEntity(250U);
    msg.consumer.assign("AYSUILDPHYBXMQHDDHMBGJSTIQTJZZLVMZBEQPDR");
    msg.message_id = 52865U;

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
    msg.setTimeStamp(0.03794373638709381);
    msg.setSource(2968U);
    msg.setSourceEntity(158U);
    msg.setDestination(7948U);
    msg.setDestinationEntity(214U);
    msg.consumer.assign("BHFKCHUKHPRTMXYGSNQHDTPJPRUOHDXBWOQZUJWQSXBXZKMLJXTVQBEZMZECGTUGIAGVIPCFRCGUOXVYDCGSFNPQEEOCSNISMBZWBODIMFOWSAKKCLAYPEIUEOSPGPJAWNWAAUJFUBYJNYETDWYYLOTNVFKDBMLSLJXARNJLCJUIWJIZWALHRMTKKQWYIFIFHPGQQXGLTBVRTEVAEHRURCK");
    msg.message_id = 33817U;

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
    msg.setTimeStamp(0.7974111432704591);
    msg.setSource(47817U);
    msg.setSourceEntity(137U);
    msg.setDestination(16392U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.4412726387954017);
    msg.setSource(24783U);
    msg.setSourceEntity(53U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.744336134620332);
    msg.setSource(23612U);
    msg.setSourceEntity(5U);
    msg.setDestination(36740U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.2387793616068814);
    msg.setSource(52567U);
    msg.setSourceEntity(0U);
    msg.setDestination(102U);
    msg.setDestinationEntity(140U);
    msg.section.assign("BETLLBUCFHOKZJHLSPJXLDBOGXDDIVFKJNNMXUNEJCEPWRXEKQRUKINPLXUZOVPTGYYVACXKEWFMGORKSQPBKQWPDFNKIXRMISWIZGSWHFDHIVPZJMJRTCRYRGALUZDTOKFQCJMGCAITBPVOZTFLLYLUEBATGGSAAYWJCEXEYTOBNOPUT");
    msg.param.assign("DGPUIHQZYXVBDUCSUWFVZYDRUOFVLMNRCSCNCZCIHOKWNBHPTOCPPKZFWOUDZNTFMUEQYAEKD");
    msg.value.assign("OTXRXQONGOZGCOYPVDXWOSNJHHGULIASJMOJEPYDZKLGPWPWDMHI");

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
    msg.setTimeStamp(0.07402892611580603);
    msg.setSource(25075U);
    msg.setSourceEntity(197U);
    msg.setDestination(57091U);
    msg.setDestinationEntity(65U);
    msg.section.assign("FCQRDCGJHAAAWFRFUSJSVYLGMFEZBBOORMNLTBCPVPASHMEFCPQCMKYJKDDCSRXGYUYIQTTSIRXOBIRNBYOVEIHUKOJWZVLEWZHWZDKNYREAUNDCWUCVIITSZJXYBWBZNDOROMGBXWPTKLZZXEAGLXSQZMBHLFKCNADFHXUSOTJUOLPJITPERXXWGAMNTPKOPK");
    msg.param.assign("IUMHOKXLSZWWBEILECUGILMRQPZRRUBCINUNYHXILPHELJMQGZHYOYHEPYLDIXOAYWTEVYLJKGVSPOYRWXWBFVRQADCDOAFLNDASEXEPDJNCWQFSMAEAOTWVFKSQTLDABSTFEKVUMHWYDPQGCJITUXABXOQTYNENFUJFGROQGDFZCPUSPWGJSHGABHCJUZJXZKR");
    msg.value.assign("LSDQMOAWXXXSAXIDLKBBJEOYQIQYRAFUFPCNKSFSNHNJJOWYBYWOAVTHJVCYTDDCZRTMJYKBDHAVEZOEGHAERIMNOGPKSCAGNIKNRUZHBAFONPRIDXIEWLPOZUENQPVTIGUQQWCILFXJDVCCOVTEGBCWH");

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
    msg.setTimeStamp(0.3048111159353303);
    msg.setSource(47624U);
    msg.setSourceEntity(98U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(147U);
    msg.section.assign("FETXBCVRVUENWLDDNKZQSFQEXSRQLMMHTYXYKMIIPOCQTHYAAWWXEBNNWDCGPJFSUTFSJGMITZQKIFOZSHRU");
    msg.param.assign("UOAVNVWIJUQFTULVJOVKAPDMGATEUYKPIHNOYBIBBKDNMHGLFDRRVCWQLLHJOERPFKCXDTKKYRBSVCRGNSSOCSTEDCHOYLFDFFWXUSJMIQXOWWIYLYDGNQLBNQZNZARCHIWMTNQGIPVECAQXHGPWFFZHRVBAIXMKEIRZKKLTHRPTZJPLAQOGXZMWMHISEMEPKONSZZFPJT");
    msg.value.assign("CKMZSGAHEAAVPQBRLHWYGHNQLGBRXSBZBDJCGNFFSPDJTEOSZDMRVYZXDIEYHJNARXLMGIJWEHAELPCTAKCLPIIGHIOSDYOCDAVNL");

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
    msg.setTimeStamp(0.31714224204290986);
    msg.setSource(23993U);
    msg.setSourceEntity(212U);
    msg.setDestination(38498U);
    msg.setDestinationEntity(176U);
    msg.op = 246U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QUUZFJPHYROWLIKMNECSXACQTSEETVUKMYKLUYJIYRXDOFLUKSGSHRNPDPLQGXJLJWGESQZZBCTDVEFDXYUYBDMGDZVQFBAQUJNLMNHSLOGMQZHTTYJFKYAALFEKMURVKFNOBHZTWGBSCRTHQGEGJIDAJUPXEHWQIPACABFVIHIVKSSQEACPBPMCWWJVEYHWOXGB");
    tmp_msg_0.param.assign("RUSOZRBPWRTUDWURUPVFPJMWNWFODWKDAFTWUPAYBACJEBZEVAKLFYNHOANDKBVPWQYEWKQGQFXCXZCINHGGVLTIKVKFGDQZRWSHBJVPXGHJFYCQJMEJVV");
    tmp_msg_0.value.assign("GNZPPMPUZEWERBVKEBLQTBHDCCDNG");
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
    msg.setTimeStamp(0.5318545066540048);
    msg.setSource(47662U);
    msg.setSourceEntity(0U);
    msg.setDestination(9966U);
    msg.setDestinationEntity(195U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.8719146667696805);
    msg.setSource(4201U);
    msg.setSourceEntity(67U);
    msg.setDestination(63191U);
    msg.setDestinationEntity(54U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.7067619245320066);
    msg.setSource(55529U);
    msg.setSourceEntity(102U);
    msg.setDestination(28064U);
    msg.setDestinationEntity(238U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.39810943312920966);
    msg.setSource(18687U);
    msg.setSourceEntity(249U);
    msg.setDestination(30769U);
    msg.setDestinationEntity(195U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.18165862977399427);
    msg.setSource(59564U);
    msg.setSourceEntity(186U);
    msg.setDestination(40984U);
    msg.setDestinationEntity(164U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.7074121328996613);
    msg.setSource(18719U);
    msg.setSourceEntity(155U);
    msg.setDestination(36731U);
    msg.setDestinationEntity(170U);
    msg.total_steps = 74U;
    msg.step_number = 254U;
    msg.step.assign("GYFTUEVRDKWMPRSKPFXIJOIINQPFHIUICZHTESAVYMBEHSXVHCRLIQDLNRWQBNIYEZZILAHWQHGTAWXVAVNRMOWDBLLBZYGYSTWJRVOQWDHFDAOMWUNYUPDVBZNPBQGJNKPSSGZKKUAFSCMXAOLUJQUDYVNDJGMTKGQQJLUOEGTJPPOKLRZTEIBEHCCXNEWJ");
    msg.flags = 195U;

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
    msg.setTimeStamp(0.28137451003874026);
    msg.setSource(32171U);
    msg.setSourceEntity(73U);
    msg.setDestination(30637U);
    msg.setDestinationEntity(253U);
    msg.total_steps = 195U;
    msg.step_number = 194U;
    msg.step.assign("VEYXJHEEZMWBLQGWCUBEEEHRJOFQQFPLZACFPMZRTZYABVZIPSFGLWISRBMZLYNVGDJPJVYXDVSJUEZSRWPYXTJBKNCPVOEDXEKOVIAMXQKXURUPMCLBSTNSGDCNDIXDPXUFECIWIDQNWHXFOJUHFGSHYGASYLRIYVABHWAKLHIZATGDBMRNOFNFQLVALDYWIOCOINUOKALSBJNJ");
    msg.flags = 28U;

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
    msg.setTimeStamp(0.551618186317515);
    msg.setSource(35520U);
    msg.setSourceEntity(30U);
    msg.setDestination(54435U);
    msg.setDestinationEntity(206U);
    msg.total_steps = 170U;
    msg.step_number = 19U;
    msg.step.assign("GKBUCOEXQYOJARVAQWYISDRMILQVMDGGDXJZMUMTENLBKXYFDVCBUUADJJBLZPAPDMMMSJKXJZYHCQSAIVFQSXENAVFVMFPPTKWFRNQXELMTCHBEUFLOEPYQVQXBILXFKOCWAZQJDYOIRRGIWXYOSHJLKVCASKSKPNDGYBTZGULOWGWHAPNPREZNZYAOFTUDFEFRCTHHPIBLJRIGZNDWCKYU");
    msg.flags = 174U;

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
    msg.setTimeStamp(0.9663126185731963);
    msg.setSource(60136U);
    msg.setSourceEntity(175U);
    msg.setDestination(16127U);
    msg.setDestinationEntity(72U);
    msg.state = 9U;
    msg.error.assign("IYWIUABPVVMEJDKEIHRSLJUIFISEBOVINTEHMSGBNTBWFSBKZZEXADGERXABXJXYXSJNQYVUCIQKCBHGXNTLQKZYTQCL");

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
    msg.setTimeStamp(0.07554722011925574);
    msg.setSource(41840U);
    msg.setSourceEntity(205U);
    msg.setDestination(49780U);
    msg.setDestinationEntity(63U);
    msg.state = 224U;
    msg.error.assign("ZOQPNSXWNJERHUAEFKRKIEJGMVETVDAZLKKSONPACOVORLVIYEJD");

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
    msg.setTimeStamp(0.10723646062575043);
    msg.setSource(61474U);
    msg.setSourceEntity(115U);
    msg.setDestination(45268U);
    msg.setDestinationEntity(19U);
    msg.state = 193U;
    msg.error.assign("BKBHCDQAMJINRTOZQNBLQDTSAXSAOGNUYKKHIVWDZYLIOKHSKVEVMITEJLYYTGTUBWSFRXMPDOMBUZLVIDRGOEJLJUXECOHVJPTCGVYFWWJWUJQZQMSNDUOFGGSFKOXLCWLXRZEZRUCPSDFEPYAMSFQPBWVQZHOICGPHAWMCQCKAPDTENWTCVJCHKRERHEFRMKIBAVDXPFIGHSBPXKOXAMUHXPDJZTGNYEFJAZRMIAYIGNUYQBLTRYNZFNNL");

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
    msg.setTimeStamp(0.12498792903391576);
    msg.setSource(12944U);
    msg.setSourceEntity(26U);
    msg.setDestination(62482U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.3424309651471472);
    msg.setSource(36953U);
    msg.setSourceEntity(79U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.8736987316467043);
    msg.setSource(31169U);
    msg.setSourceEntity(33U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.11619471350946098);
    msg.setSource(64246U);
    msg.setSourceEntity(65U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(189U);
    msg.op = 246U;
    msg.speed_min = 0.6307714773522074;
    msg.speed_max = 0.5584265817846424;
    msg.long_accel = 0.4744286204092484;
    msg.alt_max_msl = 0.21617653329719344;
    msg.dive_fraction_max = 0.722548036690831;
    msg.climb_fraction_max = 0.6310915089552119;
    msg.bank_max = 0.6127514737112639;
    msg.p_max = 0.7306462372871966;
    msg.pitch_min = 0.5453100935177666;
    msg.pitch_max = 0.001696651123434867;
    msg.q_max = 0.953243747209105;
    msg.g_min = 0.11617252867503747;
    msg.g_max = 0.0622781339054983;
    msg.g_lat_max = 0.08226937561754666;
    msg.rpm_min = 0.25948476502338214;
    msg.rpm_max = 0.7394919225372107;
    msg.rpm_rate_max = 0.5923850810298601;

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
    msg.setTimeStamp(0.5952202750845222);
    msg.setSource(29708U);
    msg.setSourceEntity(18U);
    msg.setDestination(4462U);
    msg.setDestinationEntity(209U);
    msg.op = 178U;
    msg.speed_min = 0.8726848192196416;
    msg.speed_max = 0.6713196818728103;
    msg.long_accel = 0.7217558791688168;
    msg.alt_max_msl = 0.6260179511218114;
    msg.dive_fraction_max = 0.6086676867798774;
    msg.climb_fraction_max = 0.5039433062251073;
    msg.bank_max = 0.9297226500715955;
    msg.p_max = 0.7814277761757499;
    msg.pitch_min = 0.258745324742487;
    msg.pitch_max = 0.509152775510811;
    msg.q_max = 0.6642156639208653;
    msg.g_min = 0.19402542634017594;
    msg.g_max = 0.6971321137410902;
    msg.g_lat_max = 0.058253527425201956;
    msg.rpm_min = 0.29581196480721095;
    msg.rpm_max = 0.18721056718849272;
    msg.rpm_rate_max = 0.5714485061477601;

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
    msg.setTimeStamp(0.5751863844663719);
    msg.setSource(65258U);
    msg.setSourceEntity(30U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(175U);
    msg.op = 202U;
    msg.speed_min = 0.7488582563350086;
    msg.speed_max = 0.010510821458572961;
    msg.long_accel = 0.4858637779837083;
    msg.alt_max_msl = 0.816047345919367;
    msg.dive_fraction_max = 0.5688044695413312;
    msg.climb_fraction_max = 0.5843847417656886;
    msg.bank_max = 0.8223432192476422;
    msg.p_max = 0.620426299265987;
    msg.pitch_min = 0.8480612589829921;
    msg.pitch_max = 0.058175091851134786;
    msg.q_max = 0.18771401527991638;
    msg.g_min = 0.24888231050846932;
    msg.g_max = 0.16194339738349506;
    msg.g_lat_max = 0.388692796947816;
    msg.rpm_min = 0.4350654175611164;
    msg.rpm_max = 0.49833363983192935;
    msg.rpm_rate_max = 0.6958190130013344;

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
    msg.setTimeStamp(0.6793363993670787);
    msg.setSource(33018U);
    msg.setSourceEntity(233U);
    msg.setDestination(63708U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.5939014708831176);
    msg.setSource(22701U);
    msg.setSourceEntity(52U);
    msg.setDestination(5681U);
    msg.setDestinationEntity(183U);
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 113U;
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
    msg.setTimeStamp(0.6725048915277927);
    msg.setSource(59550U);
    msg.setSourceEntity(62U);
    msg.setDestination(37008U);
    msg.setDestinationEntity(71U);
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 225U;
    tmp_msg_0.level = 4U;
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
    msg.setTimeStamp(0.6579346321435102);
    msg.setSource(3902U);
    msg.setSourceEntity(233U);
    msg.setDestination(32535U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.7542709403127901;
    msg.lon = 0.7518118984325911;
    msg.height = 0.00577640079853492;
    msg.x = 0.28814071355997883;
    msg.y = 0.10111244944201192;
    msg.z = 0.7298883565132164;
    msg.phi = 0.879337792091037;
    msg.theta = 0.1975007594748157;
    msg.psi = 0.5309435698540579;
    msg.u = 0.4557718744963005;
    msg.v = 0.2090878806968941;
    msg.w = 0.6799357275799849;
    msg.p = 0.9885436066209381;
    msg.q = 0.896757068649103;
    msg.r = 0.7002054775470873;
    msg.svx = 0.6369864787699518;
    msg.svy = 0.41032821210091897;
    msg.svz = 0.38964368550995376;

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
    msg.setTimeStamp(0.47282343116284664);
    msg.setSource(21782U);
    msg.setSourceEntity(220U);
    msg.setDestination(39771U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.7766216610983281;
    msg.lon = 0.10574324526058643;
    msg.height = 0.5394735588381127;
    msg.x = 0.48784121347099907;
    msg.y = 0.5606863368319916;
    msg.z = 0.26002741616912084;
    msg.phi = 0.10029401206011868;
    msg.theta = 0.3028980456370971;
    msg.psi = 0.7151584047482673;
    msg.u = 0.40728452754022604;
    msg.v = 0.9597048636123858;
    msg.w = 0.718490397704902;
    msg.p = 0.18016193617862009;
    msg.q = 0.7987030105732249;
    msg.r = 0.13407604792446615;
    msg.svx = 0.3062607227074434;
    msg.svy = 0.43297179874052394;
    msg.svz = 0.4729435279574822;

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
    msg.setTimeStamp(0.033446447266397006);
    msg.setSource(64687U);
    msg.setSourceEntity(6U);
    msg.setDestination(42346U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.3081790168638603;
    msg.lon = 0.6567248318137084;
    msg.height = 0.3836971845419411;
    msg.x = 0.12212337519248406;
    msg.y = 0.5091940621259831;
    msg.z = 0.6846133438530088;
    msg.phi = 0.5888194634169025;
    msg.theta = 0.4000409487896476;
    msg.psi = 0.10831851184397234;
    msg.u = 0.3618044637215688;
    msg.v = 0.3360563065757064;
    msg.w = 0.9759907887967554;
    msg.p = 0.9870135757169899;
    msg.q = 0.13029290268618332;
    msg.r = 0.6403060769830183;
    msg.svx = 0.24900410372306725;
    msg.svy = 0.17084092813418383;
    msg.svz = 0.24317046696374678;

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
    msg.setTimeStamp(0.216776499037438);
    msg.setSource(10681U);
    msg.setSourceEntity(140U);
    msg.setDestination(1683U);
    msg.setDestinationEntity(48U);
    msg.op = 124U;
    msg.entities.assign("FYBCZODSQBGWVWSPARRCVADDYSDUBQMFJVOBFTZPWNYHBVPXXUNIHWCVHLGOTZDTRBFGYCEIFIMHGLTDVJXAWVIUFLQRLLBXPKEXSNMTZIPGSDTOMNFVMOQREKXWKEEJNIHXJUZFZRSOQYARGQYJRCMFSPZDYAAHENKVWDJQGKJKQU");

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
    msg.setTimeStamp(0.607014520725881);
    msg.setSource(56362U);
    msg.setSourceEntity(242U);
    msg.setDestination(51155U);
    msg.setDestinationEntity(158U);
    msg.op = 150U;
    msg.entities.assign("LYXPHCGWVSVNYVCAXOJOYBSSCLKEQHOBAO");

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
    msg.setTimeStamp(0.4542660261643129);
    msg.setSource(26807U);
    msg.setSourceEntity(176U);
    msg.setDestination(21297U);
    msg.setDestinationEntity(182U);
    msg.op = 132U;
    msg.entities.assign("ZGSDAPNWYMWJBOOHTPEPAKSCATIRYZJFPHBYOZXURPTBNTAJYACZDGAMBPRFJFESLZDGUIXYHFSJNUQAIDUXGMCKHISIRUMWWDEECVPNC");

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
    msg.setTimeStamp(0.6763387284155973);
    msg.setSource(45389U);
    msg.setSourceEntity(86U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(196U);
    msg.type = 190U;
    msg.speed = 19556U;
    const char tmp_msg_0[] = {37, 95, -113, 126, -66, 108, 100, 105, -81, -22, -48, -99, -96, 108, -109, -44, 121, 44, 123, 26, 50, 14, 8, 81, -14, 110, -58, -14, -61, -32, -19, 15, 35, 70, 121, 63, -87, -42, -57, -107, 84, -33, 39, -124, 47, -111, 101, 81, -3, 99, 36, 113, 114, -8, -110, -62, -16, -98, -81, 9, 83, 9, -60, 67, 120, 3};
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
    msg.setTimeStamp(0.4121795726498859);
    msg.setSource(684U);
    msg.setSourceEntity(191U);
    msg.setDestination(21475U);
    msg.setDestinationEntity(154U);
    msg.type = 145U;
    msg.speed = 9631U;
    const char tmp_msg_0[] = {-87, 6, -2, 57, -88, 27, -126, 94, 112, 22, -101, 8, -32, -98, -32, -80, 59, 89, 66, -7, -107, -22, 113, -38, 16, 115, -77, -11, 14, 75, -84, 26, 70, -100, -29, -57, -35, 9, 80, -31, -104, 80, 90, 33, -97, 66, 83, -19, 53, 9, -66, -26, 90, 56, 32, -44, 37, -61, 46, 67, -63, -93, 38, 96, -85, -101, -110, -14, 109, -16, -27, 52, -95, 58, -34, 99, 34, 99, 56, 82, 51, -109, 58, 77, -105, 68, -105};
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
    msg.setTimeStamp(0.9306271039469556);
    msg.setSource(13606U);
    msg.setSourceEntity(7U);
    msg.setDestination(57244U);
    msg.setDestinationEntity(53U);
    msg.type = 21U;
    msg.speed = 50961U;
    const char tmp_msg_0[] = {-44, -113, 120, 27, 34, -83, 41, 35, 47, 93, 118, -5, 27, 67, 28, -117, -37, -81, -26, -54, 14, -113, 96, 64, -43, -5, -56, 25, 57, -31, -125, 38, 18, -20, 108, -113, -108, -35, 22, 20, -117, 16, 50, -102, -70, 66, 100, -30, -22, 65, -83, 41, 50, -79, 114, 65, 121, -48, -128, -94, 41, -49, -31, -115, 71, -86, 98, -86, -45, 108, -5, 20, -61, 47, -113, -17, -25, -75, 16, -97, -51, 9, -24, -49, 4, 87, 21, 54, -2, -118, -96, -12, 32, -47, 114, -119, 48, 8, 6, -92, -125, -69, -46, 59, -38, -13, 95, 118, 54, 83, 18, 16, 68, 63, -79, -53, -71, 100, 54, 85, 60, -119, -55, -20, 97, -120, 22, -53, 20, -116, -59, 106, -2, 69, 9, -44, -5, -85, -28, 67, -21, -80, -128, 25, 124, 93, -31, 48, -46, -104, -14, -7, -32, -57, 41, 104, 66, -76, -58, 15, 93, 88, 71, -29, 114, -117, -122, -107, -116, 9, 125, 98, -4, -60, 70, -109, -11, -108, -120, 32, 35, -30, 57, -79, -121, 55, -60, 115, -35, 34, 69, -82, 50, -21, 3, 25, -27, 23, 95, 44};
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
    msg.setTimeStamp(0.035247148995638966);
    msg.setSource(62778U);
    msg.setSourceEntity(221U);
    msg.setDestination(44518U);
    msg.setDestinationEntity(141U);
    msg.op = 156U;
    msg.tas2acc_pgain = 0.9294304378426871;
    msg.bank2p_pgain = 0.8033058626930989;

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
    msg.setTimeStamp(0.9823082102409746);
    msg.setSource(51512U);
    msg.setSourceEntity(77U);
    msg.setDestination(12117U);
    msg.setDestinationEntity(134U);
    msg.op = 61U;
    msg.tas2acc_pgain = 0.5166423703845466;
    msg.bank2p_pgain = 0.9007113497745696;

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
    msg.setTimeStamp(0.7187948720392875);
    msg.setSource(50350U);
    msg.setSourceEntity(42U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(177U);
    msg.op = 8U;
    msg.tas2acc_pgain = 0.16929767163421583;
    msg.bank2p_pgain = 0.46552410385098264;

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
    msg.setTimeStamp(0.5408523548241715);
    msg.setSource(44140U);
    msg.setSourceEntity(34U);
    msg.setDestination(49192U);
    msg.setDestinationEntity(232U);
    msg.available = 4175031347U;
    msg.value = 130U;

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
    msg.setTimeStamp(0.6943138507595822);
    msg.setSource(6816U);
    msg.setSourceEntity(245U);
    msg.setDestination(1903U);
    msg.setDestinationEntity(91U);
    msg.available = 1569526586U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.8389734869641672);
    msg.setSource(21690U);
    msg.setSourceEntity(7U);
    msg.setDestination(55000U);
    msg.setDestinationEntity(166U);
    msg.available = 2955480654U;
    msg.value = 114U;

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
    msg.setTimeStamp(0.40326030972389915);
    msg.setSource(38517U);
    msg.setSourceEntity(140U);
    msg.setDestination(60101U);
    msg.setDestinationEntity(17U);
    msg.op = 203U;
    msg.snapshot.assign("XBEOCSDJXIODDXXPBWZVRUNASXAVVKKGHVLLSAGOOHRRQHLNBNZMFEDRTXIQTMBDHEJXSIMYRZIXMLSHEKKURUSOZSTLNGBERDPAVWUGHDMGVIBMBLZTYKUFFZJJHCMQMPFJGXPZCWIKCFBEQVYGGDQHYFGUFWYZJUNPYJVSXFWLCIJNWWZJMNPIKHBFRYAQTYNCGYZ");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.6741465838292362;
    tmp_msg_0.lon = 0.9461437783376467;
    tmp_msg_0.z = 0.18768712317458236;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.radius = 0.43128345773490806;
    tmp_msg_0.duration = 32385U;
    tmp_msg_0.speed = 0.15526767289987764;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.custom.assign("ZLQUYJWKTLWAOQIXAAHPDBLVGVSBPWSMXSFESYWVEAMGWBYPOTOOWJODFKVOCMDKQOPCEGLRYMIZFOTHRCDUSPVCVNQKWIEHZHEBWUTDQBODEMESMXJZMJBPQLKNJKKNIFCPGBSRCJYQNZXJWXHTZKEXVNIQRXGDDIYIXYQUARHFAYNMWFULJQTPSXKLNC");
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
    msg.setTimeStamp(0.38684402752011204);
    msg.setSource(44334U);
    msg.setSourceEntity(99U);
    msg.setDestination(2155U);
    msg.setDestinationEntity(183U);
    msg.op = 19U;
    msg.snapshot.assign("DQDDPGRTDDZEROLQWEABWNJDKBXGFRWHEYLCLVTYLQKHLJNUELLDPQJCNYSATGUJGBURGJDCWUTITOHNXZLSBBHPTSSYUXTFDTVCXYOHXFVNVPFPIRVZUVIMPEMYEAHFQQWMZJ");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 551748240U;
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
    msg.setTimeStamp(0.2516185757211654);
    msg.setSource(57017U);
    msg.setSourceEntity(189U);
    msg.setDestination(9190U);
    msg.setDestinationEntity(29U);
    msg.op = 61U;
    msg.snapshot.assign("FDRLCRAAXPDWBQEGTMBJZZTLQAGPUNHOSZJTWRNZCCJTOHQYOFEIIQESNPMCOADPICPPRLKMMJVKALVYBEGOJXOXBEGCMSGKVWGYELXOJGVLGNFVUUTBSISDPZQYUIAFUZWMJWHTKCNDAZYWKVWZRXCMLEWFTKQKCOBHYBXYWJJPUYZQIOGZADWYTXAFEFUSESXKLLMDSK");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UNGZLUZKMHBESFAXIYYOXUTLNBEDTCHXOJTCDGMJEBBQKJIVMACMJSKVIYXHBQZNPKCENMUAQYRAYRYCEKZNWRLSIPNGTTNQLLODEYWIWMVIOIOPKWQEMJLZSDVNMYEUZOTSPJZFCBVFVSGROQHHXARAMPJAKBFHDZHBCMWVCVQFDNGOSEIXHLKKXRRFWDYWLPTGJGODIPNUABWRPCSLJLWEHXWGTSVDFQYRDGGOH");
    tmp_msg_0.visibility.assign("CGKAPFAGUHMANDTWNFSPHQZBALWZTJMEDDFOBUYTPGQOWRMYWPVNHWUEQQIKZJUCEYODXIBJGEVNKKRIGWOLLTQBCYFZUPTUXCLVJKMMLDKVXFDSQVNEGVOLPASLYXHYOOMZIJNCBHRTBTXR");
    tmp_msg_0.scope.assign("BAOJJLDDHCJHKLUWAHWCLKJNTEIJXURTRYUAMXPECEVYICNQYYNVXPUFDZIQDSOOPWMXPWMPSVIALQMLDQCCURJHTBEOBQF");
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
    msg.setTimeStamp(0.6442726260029484);
    msg.setSource(64312U);
    msg.setSourceEntity(61U);
    msg.setDestination(22332U);
    msg.setDestinationEntity(67U);
    msg.op = 230U;
    msg.name.assign("SGXXHPJEUSLTJXGKXOJKUQXARCPLLFKMOVFBOPCHZIEDIQLHRBHSDIGOLXAMOFBLISISXVIPPRXUYKJZWWQTNZIEKYCQVUGXVTKYLNMFCEABVHYWWACDCQNHRISJGMCHMIEQYWENWYTFTMZPGKBTAUYWQUORKEZJPEJKDUPDORVGDJNRACYSKWFEBNMQPFMUVDWMLYUETLWBAVVRJAOTOAUZGQPYXCTFLSHVRDZOQZ");

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
    msg.setTimeStamp(0.7381018308128483);
    msg.setSource(6171U);
    msg.setSourceEntity(30U);
    msg.setDestination(5109U);
    msg.setDestinationEntity(189U);
    msg.op = 221U;
    msg.name.assign("JPBDDYKAJWLKPLYTPOFOHQDRQXHYONXNTMCWXWNECKNCOFXUKBFRANPFZWSDMJFGVHDOWRWPPJOGMJCLEZMZEFLRGCFTACXLWRIYEFHLVXUUCEJDWKWMYIAKGBAMGTILCUTOFPTUJTVDSSYRJQESNAHQGNYVJGAVKPEHEVBTGKKUBORBYEQLOUHBGQAL");

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
    msg.setTimeStamp(0.8119900924319545);
    msg.setSource(43453U);
    msg.setSourceEntity(161U);
    msg.setDestination(55328U);
    msg.setDestinationEntity(9U);
    msg.op = 199U;
    msg.name.assign("WOHCVSRVSLDWWQKXIGOUODJWRLTSBRIJBAPIFYJRJEOGNPJAQNCEGTXBDAFSQRYRVIXXVCZUPKACTDXZNHEPBZCWKBXHAOOKFUDVZETWFYFOTQVPZKCVBSMVSLUOUSVMIGSJUGAZDIY");

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
    msg.setTimeStamp(0.9442087035843574);
    msg.setSource(63845U);
    msg.setSourceEntity(65U);
    msg.setDestination(12221U);
    msg.setDestinationEntity(254U);
    msg.type = 102U;
    msg.htime = 0.04513427373371981;
    msg.context.assign("VHUCADYLZYBCJOPNGYSEFESTBLLKFTHPRSOKCYWYVCFGQRKAWEGQNXHBUAQUBOVAZRSYGQPMXJGSOUKYZETWRYNMQQDOAZUFTAMPTCBDIPIJXKNVQYUMJWEJCBKFCIZOEHWTURTPHDRDNHHJKJLWVWWHTMNHQAL");
    msg.text.assign("NDGNMVJXKAICGPGRUAJCXCEMUIXURVEGDBDGURTRTZYVUOESQMJPDYAKXEIRLQYTZQXUIIYWCZPAAQGQMSOJRNLJDFJXBQGHOFOMFVWFHBWXUSNYFBSHTYYTBWCQWECOSBCQHTITIXSUNAWKWVGZMOSZARPCJBMLGHZYLWXCHBMTKPUNCNLKRBVKEWPVSDLAEVSHWFYLDDLMHEXTLASOIRDHZFFBKNKKFVQPJYKTOPZNJMPZEJAPRQFIOZNHEV");

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
    msg.setTimeStamp(0.5867526802485528);
    msg.setSource(64892U);
    msg.setSourceEntity(118U);
    msg.setDestination(27738U);
    msg.setDestinationEntity(192U);
    msg.type = 171U;
    msg.htime = 0.24071558709466745;
    msg.context.assign("ARVKHNYAUPZEXRUWNZOVKRYAZSPSFUCWLOLOBVCFOEDWZAVHDITSDKVTBVXEOELLFHFKMYJGIFGCAUFXPBEKRZKDOOQMLBEPLCWGQFSJJCUUSMFYURLGT");
    msg.text.assign("ONARUYJTSKWRAFFX");

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
    msg.setTimeStamp(0.11224295144636964);
    msg.setSource(28149U);
    msg.setSourceEntity(173U);
    msg.setDestination(40522U);
    msg.setDestinationEntity(39U);
    msg.type = 143U;
    msg.htime = 0.22177543416487644;
    msg.context.assign("BWMQHYBUUPULDRMGFQDIWJKRVBEDSFSWSMXNAPKDGAGYIABUNBDIOCJBUGRPVAHLKVISXPDIVFQWIRKOELZQQPSTPJDPKCVRHRHJBPNR");
    msg.text.assign("EUVAMPFQQQFGJRVVWJRTUQZTMEYHKNSODTHXYHLDJOGDPYQIWTKOKSMIRADTIZLPANKVVPHMARTPPFOBCADMLETHVWEGDKMCJCRCLIPSUJYXMIWGEBHONEBJBWXQACLOUSGARNBBCTYGOTCJCQVYKIGHQSFHRYHIZONLMUDFFSLWGPUAZOLFCPWJSKSVSDXCDINAWOUBNRPQUWXYSUZXHMFWBEE");

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
    msg.setTimeStamp(0.9582516495045769);
    msg.setSource(13674U);
    msg.setSourceEntity(153U);
    msg.setDestination(47105U);
    msg.setDestinationEntity(81U);
    msg.command = 196U;
    msg.htime = 0.2658149702996512;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 244U;
    tmp_msg_0.htime = 0.21520969628139086;
    tmp_msg_0.context.assign("CTABJPNIUVHUIQQMFXHCBPISFGHSPGUNVZYEHEJLZDWJVRENRFOHRUASGDIVHEYXDDWACGDIKJVXLJNHMGNTYSPKRKZAIVLSLJBWCCBRWTDSCELGHELGMGOMSTGFPNODDWKQXLNCZSCFBWOJNOQUOMQVUSUMBKHYNQOZIRRKTQ");
    tmp_msg_0.text.assign("QWDERJGPYKPSOTLEJIUDOCUEECCRIZINWSSQHHUOJORDVFCIQKFPILQFXPRHAVZAVFDUZHQZVMGKUUPHGDGIKCXTSSHJTFXOPEXLDYSUGMAKPLGPGOUYMTPQBIJTKLNNQNOCWNYEVLLEFHYCAZFSMZHVCEXNKVBMJJFDBTBJWRFQRTVFKZOITTYRQMDXZOBSJERTYLWILBZV");
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
    msg.setTimeStamp(0.8216967553595738);
    msg.setSource(62569U);
    msg.setSourceEntity(219U);
    msg.setDestination(57158U);
    msg.setDestinationEntity(125U);
    msg.command = 197U;
    msg.htime = 0.7549043547293655;

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
    msg.setTimeStamp(0.7052023320314109);
    msg.setSource(19770U);
    msg.setSourceEntity(91U);
    msg.setDestination(22215U);
    msg.setDestinationEntity(74U);
    msg.command = 153U;
    msg.htime = 0.18664048603443573;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 203U;
    tmp_msg_0.htime = 0.3009543929791836;
    tmp_msg_0.context.assign("ZSOEIGVRODQUUQGXRCBJNNZKDIGVHAWWBEGKLPMJRFAWMQXEAVVSNJMPFYLCGHXEZGPFNOBSHIDZEVIAHYCCYHTMWTHWAVSTAFXFSRKYHJGBXZCGRCFUNHCVKQDXWORKLJDPVDNXCQRMLNSQKIITTBKNPDUJEALASUQTTPMMJYTLYLFEUJSMYIOZGIZWUPQMIWBUJPZVQ");
    tmp_msg_0.text.assign("ETRVYZAPIXFXTWPCXWXUJYKDYQLFNLXUZGPMGSTVCQKAVUSXSZYHJVMAIGLJPBZWKZRYLYUDHQNZOPKOWACHOZWKJAVAQDEBIHQEVPBHDFTXFMGGORGVQTUQSWWCVXOUNTRRHCETLPPBHSOWZPGVMKEQNRADIENRTYKOMKCBNIDISDNXSMLQTRXJAKCIHNJOBZJBSFRRWGFBIEPOGTUFDMLYELZUJFYDMCGLKYNLSUDUMCIHJFWIFAV");
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
    msg.setTimeStamp(0.7296629881177582);
    msg.setSource(48982U);
    msg.setSourceEntity(19U);
    msg.setDestination(25508U);
    msg.setDestinationEntity(10U);
    msg.op = 178U;
    msg.file.assign("WJZSDXUOGSSIQHDJYFROTMIYMPOFKTTSCCDQVBQNBVIWESOINBIJNUXFINHDLTCQRLFVRZKLLYRCTRCGQDLMPSRGHVSPBNSRQDDQZPOWUUOIKISCNHTHJRZTGXFOUHHLZALICLNMQPOJGKGUNBVEFKHAVEEIMYAVAYRXEXNHBJYUFZGDZPCGYXBMTBXAKPXPECJVBWDAYTWHKEY");

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
    msg.setTimeStamp(0.61638792079159);
    msg.setSource(14532U);
    msg.setSourceEntity(95U);
    msg.setDestination(58200U);
    msg.setDestinationEntity(240U);
    msg.op = 48U;
    msg.file.assign("DLEJKHYCUMHQTZSGONVDSQTZRABMEUNTQPRQHLRINBKVAZMZKMWTPHWWJFENRIYTMUVYXRFWKRPRKPCPWUGLFXWOGLJGVSHOHCCDGYXRYGGBAQXZABLISIJHTJPTBEOCPTHXGAZOA");

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
    msg.setTimeStamp(0.5542947743326817);
    msg.setSource(31629U);
    msg.setSourceEntity(193U);
    msg.setDestination(20665U);
    msg.setDestinationEntity(66U);
    msg.op = 4U;
    msg.file.assign("UAVLEJRUDSZCDYMWSLHGVSNLQULITBCFHKUYENRMIHKJE");

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
    msg.setTimeStamp(0.4805389689546973);
    msg.setSource(4937U);
    msg.setSourceEntity(150U);
    msg.setDestination(36875U);
    msg.setDestinationEntity(57U);
    msg.op = 12U;
    msg.clock = 0.03101238501015935;
    msg.tz = 30;

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
    msg.setTimeStamp(0.9973377781984849);
    msg.setSource(6337U);
    msg.setSourceEntity(224U);
    msg.setDestination(4177U);
    msg.setDestinationEntity(21U);
    msg.op = 72U;
    msg.clock = 0.6666793845960571;
    msg.tz = -52;

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
    msg.setTimeStamp(0.6441598056481576);
    msg.setSource(57494U);
    msg.setSourceEntity(6U);
    msg.setDestination(35794U);
    msg.setDestinationEntity(203U);
    msg.op = 27U;
    msg.clock = 0.020604429693255266;
    msg.tz = -50;

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
    msg.setTimeStamp(0.7090464740568067);
    msg.setSource(54543U);
    msg.setSourceEntity(237U);
    msg.setDestination(43799U);
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
    msg.setTimeStamp(0.9729727847041533);
    msg.setSource(45086U);
    msg.setSourceEntity(131U);
    msg.setDestination(36105U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.17678171457061242);
    msg.setSource(64935U);
    msg.setSourceEntity(163U);
    msg.setDestination(27624U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.6270252602767293);
    msg.setSource(1181U);
    msg.setSourceEntity(79U);
    msg.setDestination(20775U);
    msg.setDestinationEntity(222U);
    msg.sys_name.assign("CCLDLXXWWIUHMVN");
    msg.sys_type = 75U;
    msg.owner = 5494U;
    msg.lat = 0.4268202388782252;
    msg.lon = 0.24071287352172266;
    msg.height = 0.8321459635915351;
    msg.services.assign("LQYMDBWKOOJYTWORGV");

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
    msg.setTimeStamp(0.48645203691592553);
    msg.setSource(62265U);
    msg.setSourceEntity(25U);
    msg.setDestination(2724U);
    msg.setDestinationEntity(107U);
    msg.sys_name.assign("SBXDGJWVPDZDOVBUGMMHOAZYSQZNKEKHJBGCIAKRXPNLAOKEFZTZNWOJQRNGTWUGIFXYYKFAHIASNFKAOPOFBQMUGAWNQQXCWUXLDVIRSQMUWKIUTMIYRXVPWELUTZJPCYARXCLGNJTCGFYVVLRLHPETAMBMJIFS");
    msg.sys_type = 30U;
    msg.owner = 6553U;
    msg.lat = 0.5248380592314494;
    msg.lon = 0.6416876856768065;
    msg.height = 0.9693352906247475;
    msg.services.assign("UKBVHPAGFUOAAJPJCKBVEEPAERVRNCKPXLMFZSCISTSZGBM");

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
    msg.setTimeStamp(0.9338746948427215);
    msg.setSource(5148U);
    msg.setSourceEntity(141U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(178U);
    msg.sys_name.assign("NQKHLFYRYCZDKETYBUBLLJNCKJLGKBUTFLYHQEDJNRKXJREJAGCWHSEDTMZPMIERHANWFHWJVSROZMEDMYKMFHHQFXYHBAXINPSEAODPK");
    msg.sys_type = 2U;
    msg.owner = 7808U;
    msg.lat = 0.09418243200946863;
    msg.lon = 0.6691830962783158;
    msg.height = 0.2846973344236685;
    msg.services.assign("SYIWISICNLITEUWQYPDPZTEJIFQVIAEGDFSCOZOXGLVFHXKWVTVEYRMJPMZQJWHQHMQDRNP");

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
    msg.setTimeStamp(0.47116853086353605);
    msg.setSource(20987U);
    msg.setSourceEntity(254U);
    msg.setDestination(24714U);
    msg.setDestinationEntity(225U);
    msg.service.assign("CDFJVJLMSCEZKNGVEOWVSZIMCASOFTOMDKBQWDGKFGZOUNJPCTKLNBNLAJIOFIXAUCFBSHKLQWVRXHXEUHIZHTMKVMYOARDXSONBMRUHQDJGLJZVKFEDRBWWYUTADWJFPIHFVIUOSGNTDACMGTGVAHYQPLTWKLJQTMKKNBSTLGHPEQGEQDXPJAPWQEXRCJEWIFSUTHYMRYZZUXNIIM");
    msg.service_type = 120U;

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
    msg.setTimeStamp(0.4671301952427429);
    msg.setSource(4762U);
    msg.setSourceEntity(58U);
    msg.setDestination(49645U);
    msg.setDestinationEntity(139U);
    msg.service.assign("OFRROWUKUGSOCOIWOQPXRLYYZLMQPBKENNDZQGAXVJJHTQKKJVFCIMPPCDSACOIRXVILLEVUTWFHHXZYDHYMCAAKXBGJKGIXOTFPRVWNBYFURHQGPRFAMDGDZFWCFUJNBHHXUZLBHZSWXDYTUYQLKDPUSSSOGDGEKVRQJMDEAMACZYWNBMIHQVQSZXLLJPWIXANTFNZBASEZCKUTVPNTRJOBJTEJOEBMEKPLQ");
    msg.service_type = 39U;

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
    msg.setTimeStamp(0.025049925037563647);
    msg.setSource(61021U);
    msg.setSourceEntity(30U);
    msg.setDestination(4778U);
    msg.setDestinationEntity(150U);
    msg.service.assign("TNXDQHOIKJRGDJZFVSZRPAQFHZZWKIFBEQHVUYUMVCVACIIJEKXXU");
    msg.service_type = 37U;

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
    msg.setTimeStamp(0.04452209938204321);
    msg.setSource(64095U);
    msg.setSourceEntity(146U);
    msg.setDestination(63489U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9665193490114529;

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
    msg.setTimeStamp(0.7094349481165618);
    msg.setSource(17435U);
    msg.setSourceEntity(61U);
    msg.setDestination(3782U);
    msg.setDestinationEntity(204U);
    msg.value = 0.4092565814248571;

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
    msg.setTimeStamp(0.005840715482376524);
    msg.setSource(45291U);
    msg.setSourceEntity(116U);
    msg.setDestination(1422U);
    msg.setDestinationEntity(235U);
    msg.value = 0.15175374788404494;

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
    msg.setTimeStamp(0.02001800444557733);
    msg.setSource(56455U);
    msg.setSourceEntity(140U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(167U);
    msg.value = 0.6516464024738998;

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
    msg.setTimeStamp(0.3365435839385703);
    msg.setSource(45082U);
    msg.setSourceEntity(230U);
    msg.setDestination(50850U);
    msg.setDestinationEntity(20U);
    msg.value = 0.24595620538214957;

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
    msg.setTimeStamp(0.6846417134505505);
    msg.setSource(5705U);
    msg.setSourceEntity(187U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(186U);
    msg.value = 0.09406265774996203;

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
    msg.setTimeStamp(0.8382406827763123);
    msg.setSource(54323U);
    msg.setSourceEntity(34U);
    msg.setDestination(361U);
    msg.setDestinationEntity(46U);
    msg.value = 0.8927680428919004;

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
    msg.setTimeStamp(0.18642257606490376);
    msg.setSource(11212U);
    msg.setSourceEntity(66U);
    msg.setDestination(9524U);
    msg.setDestinationEntity(135U);
    msg.value = 0.7638749688770474;

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
    msg.setTimeStamp(0.014901356494994245);
    msg.setSource(45978U);
    msg.setSourceEntity(87U);
    msg.setDestination(56658U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9772573470959359;

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
    msg.setTimeStamp(0.2507573692323404);
    msg.setSource(48421U);
    msg.setSourceEntity(70U);
    msg.setDestination(51256U);
    msg.setDestinationEntity(185U);
    msg.number.assign("XVGCHVLZSATLPGLQEUONYDACRUPDGFVTKWNFGLBN");
    msg.timeout = 53941U;
    msg.contents.assign("NOTYXSGGLVQUBUVFYJRKOGCNJWX");

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
    msg.setTimeStamp(0.26538750833722247);
    msg.setSource(21079U);
    msg.setSourceEntity(187U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(108U);
    msg.number.assign("VTSMNHLFOEFHXTEBZYHZBCWACSIJVXADLMGQJQDWXZKXRNQGUKQSOKVPFICYFPVEGFMEDRIJDHJUOWSCJJXYPJLWLRBYTNMKTHZRETLZPFFBZNOOQTLWHIOCYGDTYZPUWN");
    msg.timeout = 18368U;
    msg.contents.assign("QQZGDTQGPKSNXELVBBOLHWWRNPHGVVYLCNAFUSHRFZEBPUQSEATURQNFGHTSSYZMZKBDFWMTNMQCRCKILUXSO");

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
    msg.setTimeStamp(0.06495922840401303);
    msg.setSource(22441U);
    msg.setSourceEntity(52U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(161U);
    msg.number.assign("IRATHRPKSJVTJGKMIZUTMYBXJXJRVRAUYCBGLGGEAPEQBBMPTWQHQXUXOLYPHHQOFCENCMSELLBUNOJOILTZIPXDXVAUKFSZHFMNXLSYOMEPWQJLIMYIFSFNDNNFKMPYDYK");
    msg.timeout = 46991U;
    msg.contents.assign("EQUJNJZOANYXAVHGVRSQCEXZOMMMASPKAVOUFKANSFRGBXBCNTKESQZUHMOXCDTNECKSVSPMRTTUHZRASFVRQRWXLADLBTWBHIZKCMGRQMBZYBDGRJKZPSXWRQEEKHMTCOINUCJE");

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
    msg.setTimeStamp(0.17336013577066478);
    msg.setSource(32040U);
    msg.setSourceEntity(212U);
    msg.setDestination(4130U);
    msg.setDestinationEntity(217U);
    msg.seq = 2509408524U;
    msg.destination.assign("SPQHVTNPNKRAVFSTUKTLMAIUEHGEWFDADLPUQHUSYBDYZUTCTGWSXSBYMBZOPOARRABCJDKRPMPUOWXAMXCZNSLYULUQEEDCONDLMINOCUQGUSQPDPXPQKYZIGYKDMQEBNDYYICCKPJLJHGWETBVSJREOHMTINL");
    msg.timeout = 48437U;
    const char tmp_msg_0[] = {-94, -70, -90, -27, 85, 93, -59, -13, 45, -104, -4, -33, 101, -13, 108, -8, -30, -38, -35, -125, -15, -18, -97, 32, -44, -44, -41, -120, -31, -56, 37, 34, 15, -3, -98, 73, 45, 126, 117, 35, 87, 20, -42, 48, -32, -104, 29, 4, 67, -26, 16, 96, 24, -48, 53, -43, -106, 84, -31, -33, -92, 75, -62, 86, -7, -33, 5, 54, -109, 89, -33, 120, -111, 37, -116, -85, -105, 1, 72, 55, -46, -97, -37, -15, -103, -69, 70, 41, 122, -96, 40, 107, -43, -13, 83, -24, -15, -35, -65, 102, -33, 54, 10, -18, -37, -121, -3, -61, -50, 83, 123, -34, -56, 113, -103, 60, 64, -61, -55, 51, 111, 107, 21, 0, -35, 51, 121, -55, 67, -9, 41, 10, 19, 98, -102, -114, 10, -20, -40, 65, -70, 8, -80, -111, -67, 64, 75, -10, 60, -37, 73, -40, 101, 100, 79, 106, 55, 32, -51, 16, -79, -25, 96, 45, -25, 0, 121, -95, 54, -113, 126, -15, 37, 49, -87, -10, 15, 112, 81, 125, 83, -105, -118, -45, -99, 33, -74, -81, -89, 35, -60, 40, -69, -41, -64, -5, -70, -5, 0, 48, 35, -27, -113, -36, -71, -12, -24, -20, 74, 76, -57, -31, 97, -6, -3, -111, -123, 30, 105, 125, 102, -76, 40};
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
    msg.setTimeStamp(0.5838685155326735);
    msg.setSource(53370U);
    msg.setSourceEntity(113U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(172U);
    msg.seq = 2816189606U;
    msg.destination.assign("WJGFWYAXZLYQRKVUSLYROMVMZXNQNBWCPAJSPBEDEESUEHWAVQOUIYEKDGEQHHNZYDGNSYXNUTIGJJTMTLZCOU");
    msg.timeout = 43637U;
    const char tmp_msg_0[] = {-23, -100, 61, -34, -78, 97, -59, -76, 53, -11, 67, -114, 74, 122, 91, -67, 11, 16, 79, -6, 86, 108, 89, 94, -128, 125, -87, 5, -83, -109, -121, 94, 83, -15, 79, -20, 17, 68, -31, 106, -85, 42, 69, -31, 74, -13, 30, -76, -93, 12, -57, -113, 120, 21, 4, 68, 34, 13, -42, 66, 31, 16, -13, -1, 81, -91, 31, 2, 104, -37, 50, -36, 79, 102, -1, -52, -28};
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
    msg.setTimeStamp(0.22639556209803768);
    msg.setSource(60687U);
    msg.setSourceEntity(21U);
    msg.setDestination(58535U);
    msg.setDestinationEntity(83U);
    msg.seq = 1589074874U;
    msg.destination.assign("MWDAXJTJKLSXIVPZUSAHVPBJERFWFDSCQYKABWDGUISUKFXP");
    msg.timeout = 6516U;
    const char tmp_msg_0[] = {77, -52, 64, -84, -51, -93, -75, -103, 123, -103, -56, 70, 69, -25, -123, -99, 67, 11, 24, 115, 55, -90, -73, -106, -1, -28, -104, 15, -23, -27, 60, -27, -78, -5, 56, -10, 99, -88, -97, 1, 118, -103, -75, -35, 116, -108, 14, 120, 97, 61, 51, -6, -36, -107, -25, -5, -52, 6, 69, -45, 126, -15, 55, -128, 108, 46, -82, -118, -57, -122, 15, -102, 123, 4, -79, 59, 121, -52, 44, -66, -71, 54, 97, 110, -29, 112, 44, -95, -69, 13, 122, -77, -60, 58, 47, -83, -98, 66, 24, 9, 84, -117, 5, -83, 38, -113, -107, -110, 69, -8, -42, -114, -30, 109, 92, 123, 76, -83, -7, 109, 103, 34, 112, 89, -25, -107, -15, 21, 104, -32, -113, -27, -34, -40, 41, -117, 5, -106, -23, -68, 3, 22, 96, -89};
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
    msg.setTimeStamp(0.1656785643033013);
    msg.setSource(13399U);
    msg.setSourceEntity(151U);
    msg.setDestination(17698U);
    msg.setDestinationEntity(206U);
    msg.source.assign("DTRBDZJWXBTPCGBEKQDFJLIMPQZUFXWLTZSJEIXKSUAQRMFVHRGO");
    const char tmp_msg_0[] = {-98, 68, 94, -98, 32, 69, 114, 38, 85, -93, -125, 28, 60, -60, -61, -35, 58, -14, 39, -3, 60, 10, 51, -116, 10, 56, -65, 120, -1, 51, -79, 72, -13, 24, 25, -120, 103, -93, 56, 8, 73, 97, -60, -33, 102, 2, -1, 63, -3, 63, 63, 29, -109, 73, -15, -39, -1, 63, -64, 23, 12, -81, -57, -114, 125, -54, 102, 56, -42, 47, 101, 14, -68, -68, 61, -32, -69, -32, -92, -101, 48, 11, -60, 38, -73, 1, -109, -94, 108, -66, 84, -88, 28, -69, 36, -47, -114, -107, 32, 78, -28, -104, 19, -61, 69, 101, -49, -9, -42, 96, -113, 105, 122, 25, -56, 54, -3, -107, 99, 65, -49, 108, 66, -12, -120, -50, -96, -19, 120, -15, 6, -46, 55, 81, 113, -43, 117, 33, -75, -29, -51, -36, -5, -12, 75, 65, 90, -2, 47, -50, 84, -116, -14, -64, 112, -101, 89, 10, -15, -67, 1, 84, -65, -7, 40, -78, -15, -34, -90, -59, 63, -5, 63, -109, 12, 89, 17, 29, -2, 78};
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
    msg.setTimeStamp(0.49412840688524196);
    msg.setSource(34074U);
    msg.setSourceEntity(5U);
    msg.setDestination(35202U);
    msg.setDestinationEntity(63U);
    msg.source.assign("TWCNEHKTKOQSQTCADVPQFAKERIMHLDLLFLHL");
    const char tmp_msg_0[] = {-112, 1, -109, -117, -18, 66, -8, -6, -46, 20, 23, -83, 94, -35, 124, -53, -57, -112, 70, -52, 118, -94, -128, -45, 7, -51, 63, 73, 106, 112, 27, -20, 103, -22, 64, 9, -30, -10, 90, 24, 117, 119, 17, -47, 104, -21, 116, -80, -116, -32, -64, 17, -23, 40, -16, 58, -84, 35, -66, -29, 88, -40, 106, -22, -44, 67, 32, 2, -22, -47, -121, 72, 27, -25, 38, -122, 98, -61, 9, -116, -84, -31, 78, -77, -66, 67, 62, -96, -43, 80, -122, -128, 22, 98, 16, 9, 100, 20, -7, -44, 56, 34, 26, 48, -59, -32, -79, 21, -86, -43, 26, 120, -66, -8, 26, -83, 99, -24, 24, 37, -43, -60, 99, -115, 81, 108, -21, 77, 46, -91, 50, -46, 47, 3, 89, 76, -73, -116, -38, 47, -123, 126, 45, -32, 55, -108, -75, -72, -6, -91, 65, -64};
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
    msg.setTimeStamp(0.0745942410426157);
    msg.setSource(20769U);
    msg.setSourceEntity(242U);
    msg.setDestination(28063U);
    msg.setDestinationEntity(10U);
    msg.source.assign("XFTFUOLTDQRSUSMRENJHHCGXTGPSGKCJZWSQLJMUGYPZXNBHKNGXNKSCVPICCHWFVNE");
    const char tmp_msg_0[] = {121, -45, -37, -24, -7, -29, 122, 32, 84, -63, -74, -41, -76, -31, 41, 72, -100, 25, -45, 32, -25, -91, -81, -121, -80, -113, -6, -14, -29, -108, 16, -119, -53, 92, 126, -36, 6, -65, -17, -8, -94, -70, 124, 98, 68, -100, -7, -63, -12, -55, -126, 112, 67, -35, -4, 34, 82, 86, 13, 119, -125, 71, -121, -52, -116, 107, -7, -7, 99, 59, -49, -23, -72, 49, -128, 45, 107, -37, 41, -91, 118, -23, -86, 80, 81, 82, 75, -12, 91, 88, 107, 66, -35, -103, 90, 27, 62, 42, -96, -88, -127, -122, 51, -53, -16, 123, -27};
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
    msg.setTimeStamp(0.448315697498022);
    msg.setSource(36086U);
    msg.setSourceEntity(236U);
    msg.setDestination(41241U);
    msg.setDestinationEntity(186U);
    msg.seq = 2302599285U;
    msg.state = 161U;
    msg.error.assign("WKFDKYOCJWHOONCJPRTWSITO");

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
    msg.setTimeStamp(0.0023115293156612537);
    msg.setSource(50059U);
    msg.setSourceEntity(53U);
    msg.setDestination(22738U);
    msg.setDestinationEntity(81U);
    msg.seq = 2837419818U;
    msg.state = 154U;
    msg.error.assign("DYPWUQVBMZVE");

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
    msg.setTimeStamp(0.15106949528989044);
    msg.setSource(45887U);
    msg.setSourceEntity(79U);
    msg.setDestination(39877U);
    msg.setDestinationEntity(191U);
    msg.seq = 824953944U;
    msg.state = 142U;
    msg.error.assign("FHGCOQQJAMCKTJWJPIKFIOSQCEHRVCXOPADWZTRAKVLTZITOKNHMTDYMNIBMYJPVOLGGXIBBSRJDBICLIBAOAFCZEQSDZXHNOWCVWQYBLLNGDSBRZHPEULTHWGYZFXBPIQLMVTNYREEVCSJMWPMUQVLSFBRZHXDWRGFA");

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
    msg.setTimeStamp(0.5170170092993861);
    msg.setSource(60560U);
    msg.setSourceEntity(243U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("VQNBMDLATNDTMLHVXFVHYTKGESEZWOMQBIHCJYZINNEIUICVAYAXFMQPUXUJZHLAVKGVGNFOTYUSOBDXGBSFMINTSEPGIUFCIRQFMWRMQVJFZLKXBWFDEQSLTWGWMEWUBZLIEDUHACRWOJCLYSHOKOKBVPXNAJKZNAYPHJTZDJQROFHWSMPOMIYQYCZSGXAVSEPNKTZHCRJPXWXUCRDVRSRGDOHGZOUKCKITDKNP");
    msg.text.assign("TYIUQBMJGNMLWROFQDFASLPZEQNWRLBCKYUXEPPZNITXGZCROOSZLIXRUZAVQIVMUYZPWGANDJNTHBDOLCQHWFUUHRDVQANMMTLXFMJTCEFCIGGQVEEBRKBCVYNYKBJJWCZLSDMIKLYHUYKXVNBGOMKPFYVGZOHZSBZQMURHSJHDS");

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
    msg.setTimeStamp(0.7632465772185274);
    msg.setSource(17334U);
    msg.setSourceEntity(111U);
    msg.setDestination(29633U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("QKNEKYNGQBHCYNRBFMBSHMZZLOWACGYNFZETWWIZATFZUQTIYAIDOAMKTOSZSCGUCEHJKJWXZBMAAGOYQFAIZLCNVXORUDHWFULXEYGQREDYIVQUOJTDFPBJSRZVRSDIUGNMVJPFTXXLQODLJETUKEINZTJWIPNHWFCSARQCCHDPM");
    msg.text.assign("DFZIECHPDUFLSKZWSYMPRGVHRKAWHJNTOYTSEQAIGZRIJGDDQJMUQXAOBKGGINNOTDHPLKXIPOFVUZSRXCPIYXGTVVXCTWLECBRUJHJVNSRMLXTNUCXONEZ");

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
    msg.setTimeStamp(0.08062563556505631);
    msg.setSource(7188U);
    msg.setSourceEntity(216U);
    msg.setDestination(27377U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("WOMUUYLGRGHTSGJFKELJAUJCERRYRLVWETDZVESUGPRDDLPUQTEONCCSEENVMNBXWTNFIJQLEVZKVDPKBMHNYUYPWFPIGALYRXQNPASAHGOIQYSAIHLGHZXSXXETFGTWJYFBZQXQWJUZRWBGNIXKSMDSBVHTZQXCSVQQZDIVFDACFOBNINVFJZBLOMAVGYMFZOSKWKMAKIKJKTPRFI");
    msg.text.assign("XMLRXUXJCDJFFREGAARUQONLHGWMKYTHPJROSXCTAZGMLZBOBCSGGYDPPATVKCIZKHLFIQEIUJOWFCEHNMNCHSKDVUFQPIRMLOGWFEIXATEGPYNQSTIPZGHHBYWCOUSQKBTCFCQDWMZYQVLBDRVDPQTMXMBLSLOYEALWYANNNJCMVDSNERIIDXUYMRZXJHTWZK");

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
    msg.setTimeStamp(0.9852914258771261);
    msg.setSource(63330U);
    msg.setSourceEntity(94U);
    msg.setDestination(6965U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("BKJMGMLZGQOPQBPORHNBEQKPPYCOZWCZLCUBICZMFEGIVJLUKOSQEQQFTRKMUWEVGJGCSBEDUIRTYUWQFXLNRXTGCYHFWZOKDPWREIUVYAJCGNLDZPEFOXYURWZLSMAAITEUQ");
    msg.htime = 0.7634336593874295;
    msg.lat = 0.5030799097010368;
    msg.lon = 0.040230864848154524;
    const char tmp_msg_0[] = {86, -113, 58, 93, 87, -120, 35, 112, -53, 5, -102, -114, 74, -83, -50, -93, -3, 96, 8, -20, 91, 47, 26, -120, -73, 37, 25, -71, 89, -122, -118, 90, -45, 94, -99, -33, -64, -128, -36, -128, 60, 40, 94, 28, -12, -26, 78, -99, 20, 22, -54, -5, -20, -122, 46, 114, 17, 34, 55, -11, -3, 26, -13, -62, 126, 45, 23, -9, -1, -42, 47, -52, 90, -106, 60, 97, 51, -98, -78, -115, -35, 124, 44, 102, -53, -72, -16, -100, 120, -97, -10, -113, 102, 18, 47, 71, -94, 11, -104, 126, 31, -121, 45, -87, 97, -125, 8, -4, 117, -90, -65, -1, 12, 71, -67, -39, -63, -93, 104, 38, 60, -22, 67, -99, -86, -99, 84, -85, 75, 110, -95, -97, -70, -54, -71, 94, 34, 79, 16, -120, -66, -27, -42, 84, 109, 70, -99, -122, -87, 31, 21, -33, 14, -83, 93, 8, 56, 92, -73, 19, 4, 82, 97, -21, -5, -86, -109, -103, -104, 95, -80, 59, -42, 19, 28, 54, 104, -32, 19, -73, 4, 98, -19, -109, -37, -67, -21, 61, 70, -20, 19, 4, 111, 77, 68, 29, 46, -78, 124, -18, 66, -37, -57, -128, -114, -103, 11, -48, 28, -67, 40, 117, -52};
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
    msg.setTimeStamp(0.9580861545345452);
    msg.setSource(25598U);
    msg.setSourceEntity(251U);
    msg.setDestination(173U);
    msg.setDestinationEntity(185U);
    msg.origin.assign("PEVYFMNJAXBIYVFKVGCCHYLHTPCNADZNGTBVDLXRTSBQWYBEASXRILUJOIPGKWEIYHMPLPQDCGMVPYDOZCEFLJAQFRNQDEHTCVPRZMVAIISSTYPPSJZJFMKLZBAWRSAHKBGWNDUXYNBOJZFQKKAYMKMWGPXWLRWDERXNASQGFLGUIOFMFOAQNGDUKTQHWQMJDECIHJOYUIVUXXRXB");
    msg.htime = 0.43996844067497953;
    msg.lat = 0.7012905989911847;
    msg.lon = 0.43489616367833617;
    const char tmp_msg_0[] = {-55, 105, 124, -123, -77, -76, -9, 121, -111, 13, 7, 17, 85, -103, -57, -7, 21, -112, -82, -21, -26, 7, 21, 28, -5, 1, -41, -4, 48, -61, 57, 67, 126, -66, -61, -66, 7, 21, 12, 91, -115, 70, 27, -54, -81, 96, 101, -100, 95, -111, 101, 44, 120, 89, 95, -106, 81, -111, -2, -88, -96, 12, 58, 20, 61, 124, -28, 7, -53, 61, 36, 13, -66, 48, -73, 33, -52, -79, -46, -15, -23, 126, -69, -73, 15, -53, -68, 110, -62, -22, -61, 40, 74, 21, -76, 39, 100, -59, 105, -1, -20, 83, 68, -35, -11, 54, -2, 83, 40, 69, -70, -90, -59, -47, 61, -127, -68, -5, 86, 112, -20, 83, -1, 123, -90, 19, -82, 35, 103, 55, 56, -71, 49, -85, 115, -72, -123, 68, -34, -82, 126, 46, -32, -56, 10, -97, 64, 113, -112, -121, 52, 46, 16, 99, 114, 8, -98, 55, -21, 93, 60, 97, 94, -90, 19, 72, -75, -81, 40, 117, -53, -10, 94, -127, -16, 27, -103, -87, -44, 27, -45, 3, -92, -66, -14, 99, 4, -83, 36, 17, -73, -94, -103, 19, -124, 103, -28, 79, -68, 43, -42, 87, -89, -22, -18, -47, -47, -82, 56, 5, -17, 109, 95, -77, 91, 110, -120, -47, -1, -43, 14, -22, 33, -9, -117, -96, 86, -106, 83, 8, -10, -41, -66, 64, -68, 97, -74, 46, 29, -45, -77, 113, -29, -54, -65, -21, -76, 60, 93, 33, -6, 34};
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
    msg.setTimeStamp(0.6904263402909945);
    msg.setSource(12588U);
    msg.setSourceEntity(39U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("GOUBOCPTOBLQIQGZPLAADMXHVYWMEZHRWWTAPHZFYPAWDGIGXFOFRNTASXVDDSNOBFOXDHKMKBNWCCRUYTOL");
    msg.htime = 0.9520431031516031;
    msg.lat = 0.9598164689633224;
    msg.lon = 0.8274024625956595;
    const char tmp_msg_0[] = {18, -33, 92, 93, -65, -40, -120, 120, -7, -46, 19, -113, -20, 47, -9, 61, 64, 120, 121, -82, 16, -47, 106, 115, -85, 92, -118, -24, 27, -29, 77, 39, 47, 89, -12, -4, 52, 93, 70, 46, -6, -88, -95, 4, -78, 80, 54, 63, 45, 52, -42, -31, 88, -13, -5, 43, 5, 59, 59, 36, 47, -50, 93, 104, -5, 84, -112, 92, 72, 70, -50, 15, 110, -114, -15, -17, -21, 99, 93, -65, -126, -1, 113, 108, -41, 32, 64, -30, -94, -1, 112, -9, -75, -10, -1, 25, -127, 2, 8, -57, -77, -84, 71, 87, 108, 21, 81, -67, -77, 57, 87, -52, 13, 15, 111, 63, 26, 87, -107, 23, -70, 102, -18, -127, -103, -120, 25, 61, -119, 78, -110, -108, -94, 93, 101, -79, -106, -116, 92, 14, 124, 121, -66};
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
    msg.setTimeStamp(0.028191883659761774);
    msg.setSource(25343U);
    msg.setSourceEntity(106U);
    msg.setDestination(31430U);
    msg.setDestinationEntity(233U);
    msg.req_id = 65446U;
    msg.ttl = 47064U;
    msg.destination.assign("QACIVHDMEMWOAWLYFJMOZIGZBTIZXDPJXKFJWPYSTSDEGYFWVENVWAOQKAYFBRAIGICPPBPMESPTHUUGMJXURLLHUXAWOFCLOHHNXOLEEHXINGQLDSKYIJDYKSUAMMSLKSNZFHQWKQJUHNDMIDXJWZVGKUVNPTDYTGHWPQRRZBQMT");
    const char tmp_msg_0[] = {112, -30, -126, 3, 27, 0, -25, 27, -90, 90, -22, -4, -45, -70, -64, -59, -95, -127, 88, 34, -121, -5, -82, -40, 46, 44, 114, 12, -63, -115, 19, 101, 35, 114, 23, 105, -7, -114, -3, 24, -95, 95, 29, 108, 64, -120, 76, 44, -65, -51, -126, -111, 101, -107, -77, -2, -30, -73, 49, 88, -7, -101, -112, -33, -29, 126, -30, 36, -84, -115, 30, -13, -17};
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
    msg.setTimeStamp(0.42421268480426666);
    msg.setSource(27665U);
    msg.setSourceEntity(236U);
    msg.setDestination(51456U);
    msg.setDestinationEntity(238U);
    msg.req_id = 63468U;
    msg.ttl = 15538U;
    msg.destination.assign("KNGDXVTBAXKUQSTLFSFXKFQAFDFPAZJUZGJXCQCXALVLOQWTUXSARCCETFLINCOUNDVFLMRRYRAXDYDPHETCRHJBSJKBUPMGBHPVINVTOJGQWEMJHWJNLSXXSYZZEPHI");
    const char tmp_msg_0[] = {5, 85, 63, 20, 87, 54, 5, -122, -42, -25, 106, 104, -95, 67, 64, 32, 85, -115, -47, 122, -38, 8, -119, -35, -45, -54, -50, -105, 115, 27, -125, 64, -64, 12, -109, -76, 4, -46, -95, 52, 90, 97, 5, -83, 18, 52, 37, 110, 36, -102, 31, -68, -73, -72, -124, -2, -89, -16, -1, -115, -8, -48, 6, 28, 71, -92, 27, 111, 76, -16, 118, 110, -112, -50, -46, -58, 90, 38, -5, -14, 43, -119, -18, -125, -37, 45, 95, -85, 109, -110, 126, -122, 125, 50, -10, -82, -9, 110, 2, 29, -40, -84, 121, 15, -98, 5, -27, 24, 98};
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
    msg.setTimeStamp(0.9963464074582442);
    msg.setSource(22145U);
    msg.setSourceEntity(157U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(209U);
    msg.req_id = 2187U;
    msg.ttl = 41746U;
    msg.destination.assign("OVPMHABDSUBGPRKNFFUJB");
    const char tmp_msg_0[] = {-119, 64, -119, 61, 44, 124, -19, -37, 10, 126, -126, -16, -113, -39, -109, -124, 71, 111, -19, 26, 48, 122, 56, -6, 31, -90, -48, 11, 40, 39, -95, 22, -105, 52, 123, 53, 68, 23, -84, 92, 33, -19, -46, -49, -59, 116, -83, 87, 18, 22, 101, 3, 44, 24, -92, -20, 14, -120, 79, -76, 98, -50, -65, -18, 9, 104, -64, 89, 75, -77, 98, -25, -13, -4, -26, -52, 125, -90, 52, -111, -19, -51, 20, 36, -66, 108, 26, 123, -46, -9, 79, 69, 98, -94, 27, 117, 78, 105, 116, -106, -11, 89, 24, 2, 67, -103, -72, -33, -69, -7, 105, -117, -30, -29, -80, 75, 50, 13, 78, -15, -104, -23, 34, -64, 34, -1, -98, 66, 63, -74, 68, 99, -1, -117, 34, -110, -12, 15, -105, -72, 82, -42, 118, -51, 9, -2, 68, 48, 78, -3, -47, -117, 77, 65, -121, 38, 20, 72, 57, -106, 20, -66, 28, -112, -64, 18, 66, 7, 74, 31, -80, 123, 31, -123, 1, 75, -84, 93, 107, -65, -109, -21, -72, -119, -59, 31, 113, -41, -68, 72, 73, -85, -98, 120, -47, 49, -75, -7, -22, -16, 100, 89, -72, -52, -113, 121, 48, -54, 87, 106, -62, -86};
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
    msg.setTimeStamp(0.6944063790191347);
    msg.setSource(50693U);
    msg.setSourceEntity(211U);
    msg.setDestination(57384U);
    msg.setDestinationEntity(237U);
    msg.req_id = 17805U;
    msg.status = 165U;
    msg.text.assign("NFMOMVVLUZXILFEUIDRCHYETTRDHCIMEAKEELABBSUMKWRKWQMRZBPBGYIEXVDYFXON");

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
    msg.setTimeStamp(0.9039001932615922);
    msg.setSource(31020U);
    msg.setSourceEntity(30U);
    msg.setDestination(4111U);
    msg.setDestinationEntity(74U);
    msg.req_id = 25156U;
    msg.status = 149U;
    msg.text.assign("VZQIPUENKYXGIEBLRZWDDVGWTAFLMFDMYLTVYTOPBXBHAONJXKMZRCRZXNEQDYVUPUMSUCICTKJOFRIJIXAPLXTSLVIUJY");

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
    msg.setTimeStamp(0.3533357403621912);
    msg.setSource(29823U);
    msg.setSourceEntity(17U);
    msg.setDestination(2122U);
    msg.setDestinationEntity(36U);
    msg.req_id = 44694U;
    msg.status = 175U;
    msg.text.assign("COSTNQQEVXQUTHLYDSBWMEZYUSXCSRHHVOMXJABDVINOOFNKXKFOPEGWGBKJGLWQEWUKCYQVAWAVPCTLHWMOXQOGTOIFK");

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
    msg.setTimeStamp(0.6311793629482523);
    msg.setSource(41318U);
    msg.setSourceEntity(98U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(141U);
    msg.group_name.assign("ZMGFEHIPQZBJBSOSRWMFMIWUQQTIYGJNEADIGQERWALUNZALBPLTYUEKNPCPYIUOXEUNJRDSPSJCTTWRAVOWWZYHRKYRGVL");
    msg.links = 2712998936U;

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
    msg.setTimeStamp(0.1449263988400139);
    msg.setSource(36018U);
    msg.setSourceEntity(229U);
    msg.setDestination(109U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("CSSNCTCSNLUQXTPWKQOIVATHIALARKUXZXBLYLSBKCXOFVNLKXOPVOZSWQHPPPDMMYVTQAEDXGPORFNPODPBHQTKJUMMZZDELZSCORCJLYVEVEZLMEOMFQDZBE");
    msg.links = 3127921737U;

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
    msg.setTimeStamp(0.5088376653912194);
    msg.setSource(43838U);
    msg.setSourceEntity(189U);
    msg.setDestination(34656U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("CGPGTMUELZUHAAEHNNTERZGGQONEOEQVLPBVYLKZJTSDLPVCLCLZRXHXJAYOQMQNDAJFDQVWCJBGNIHTJLFVKWKTIKYBHCRAMYXTFLNTBRRDQZVIX");
    msg.links = 2006857255U;

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
    msg.setTimeStamp(0.1397864126242957);
    msg.setSource(12974U);
    msg.setSourceEntity(39U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(115U);
    msg.groupname.assign("BVSQLYWJVSFLFIJDWRIQTXHKFKSMVRDBODTMBNDXZMJNHQEAUERSVFKVKXXBHPOOKRNQMPXDRXYBKRCSUMLUXPYFOJPLQACOLWGFNIEI");
    msg.action = 196U;
    msg.grouplist.assign("FRISZHTZSVLXNVKWBXDDGLKSKVEVEVWRQTCZEISQRMJUBPGLGAELCNRIHDTEAFTSOJICOJWXQFKFMOAZNRAPBFDUXXOHMNCJWASGIQUZLEMMVLRTTTYYLEXQBUNNWOPKQPPNXUFISBVIWPEBUZGLPYAXRIGBONUDQFSZMHAFLZRBJHCCHUXEINIMADEGKCHSOHGOMDOJWTKPQGUYMWARCMYJCXJKHJ");

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
    msg.setTimeStamp(0.23352771034216557);
    msg.setSource(15006U);
    msg.setSourceEntity(64U);
    msg.setDestination(52526U);
    msg.setDestinationEntity(75U);
    msg.groupname.assign("YPDHMZWPOTAPIUFTPKNBKVSUAISJLAPJHQIOCXTUT");
    msg.action = 145U;
    msg.grouplist.assign("MWSUQUIBHIRWCJXISMNAKTLHSOFPZDIDLAFODLJXNDFRGTSHFKZXRLYXMERTLOIQJFLYWZHVTYBDJIB");

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
    msg.setTimeStamp(0.29208178633685067);
    msg.setSource(57365U);
    msg.setSourceEntity(162U);
    msg.setDestination(61369U);
    msg.setDestinationEntity(8U);
    msg.groupname.assign("BSEUJATZHGMHPEJGXFUBDZALBROGCCKFSTQMJVBPRWGVLUEYFHILMUBLQUGFBUYSLATIISWNECHROKWHSTXAOYCSWOSCNFIEPPTQVAJGQYHBJFAIWONPBRDAFXKJUDRROVC");
    msg.action = 123U;
    msg.grouplist.assign("BBZNWYLPACQWEBNSFSBAKXQFCJIZAEWDFIIQSOIXUXDUMKGLJGSSDMJEDOCYPXNBLYEHGFRTCGJOSCYWYIBYETWHHYGHZITRIFULUVNFEGFXOFRZNJYWJWHXDAKVXFMTWCQHLRNKZHJSEVBLZASTKRVCQNQRNJUTLDETMIYKOJOXKUQGVLBOMAGUVUOGKSHRIAPLTZDMQSBFRMNAOVMAETVHWPPXCEGWOUBHPVPTZPRMDYLD");

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
    msg.setTimeStamp(0.3786872412024439);
    msg.setSource(21742U);
    msg.setSourceEntity(111U);
    msg.setDestination(10304U);
    msg.setDestinationEntity(22U);
    msg.id = 17U;
    msg.range = 0.14316351788120296;

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
    msg.setTimeStamp(0.8148526547846109);
    msg.setSource(26703U);
    msg.setSourceEntity(97U);
    msg.setDestination(10409U);
    msg.setDestinationEntity(148U);
    msg.id = 124U;
    msg.range = 0.9055999104617816;

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
    msg.setTimeStamp(0.1256829378206502);
    msg.setSource(58221U);
    msg.setSourceEntity(35U);
    msg.setDestination(5493U);
    msg.setDestinationEntity(93U);
    msg.id = 178U;
    msg.range = 0.17187975630748253;

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
    msg.setTimeStamp(0.34781419941508274);
    msg.setSource(35389U);
    msg.setSourceEntity(228U);
    msg.setDestination(57826U);
    msg.setDestinationEntity(169U);
    msg.tx = 138U;
    msg.channel = 78U;
    msg.timer = 47700U;

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
    msg.setTimeStamp(0.661135004143247);
    msg.setSource(56141U);
    msg.setSourceEntity(130U);
    msg.setDestination(39934U);
    msg.setDestinationEntity(168U);
    msg.tx = 176U;
    msg.channel = 165U;
    msg.timer = 23226U;

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
    msg.setTimeStamp(0.9879623511954412);
    msg.setSource(57255U);
    msg.setSourceEntity(80U);
    msg.setDestination(47456U);
    msg.setDestinationEntity(250U);
    msg.tx = 186U;
    msg.channel = 44U;
    msg.timer = 29963U;

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
    msg.setTimeStamp(0.33849793009404583);
    msg.setSource(2664U);
    msg.setSourceEntity(197U);
    msg.setDestination(47147U);
    msg.setDestinationEntity(39U);
    msg.beacon.assign("LDNMJIHXFWWUBLHSPTADCKXWYSBQSGUJFIKFMQVWMLRRCVQFUZLOVSYPJNEFREFPGOMIHCOPLDXJTGRDCTTZBBGEEGLHXWKYMIZIHAASGZEJTFKUIZQABWAJSHPSVDAXMMDNCYZDJNTNRNIRXODUCNNWDJVGLOGZIXOKCTLYQECHPCQFQENQVGMA");
    msg.lat = 0.1294582528836008;
    msg.lon = 0.5215226574328903;
    msg.depth = 0.9812312620240018;
    msg.query_channel = 17U;
    msg.reply_channel = 114U;
    msg.transponder_delay = 218U;

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
    msg.setTimeStamp(0.362716772540874);
    msg.setSource(38622U);
    msg.setSourceEntity(243U);
    msg.setDestination(5780U);
    msg.setDestinationEntity(237U);
    msg.beacon.assign("WHHLBCQYZGNECNEEDUGYKCBROHWEHKMVHDZRTDSUMCMBNVFIYOSTPEHKZLALTLBVGDUGAXKWDKRKXSNYUZCMINIOOLVTQMZEDRVEJXYDDQYDZGJIAJSLKBTHQLSSCONIKYCAKWTZOWMAIAJIFYOJXUFQPZGBXTVFCCPRJMAJBSSRWQ");
    msg.lat = 0.2682453356311275;
    msg.lon = 0.13084936632154864;
    msg.depth = 0.24782644570354706;
    msg.query_channel = 96U;
    msg.reply_channel = 0U;
    msg.transponder_delay = 137U;

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
    msg.setTimeStamp(0.6736878887647885);
    msg.setSource(44956U);
    msg.setSourceEntity(55U);
    msg.setDestination(15103U);
    msg.setDestinationEntity(181U);
    msg.beacon.assign("DCJXWJQTTBWVKYEJPZUGLNAZHWMUDAUWDCWGFQFQDORPXNGXSOUNMYDFNCVVPFWRYZIHXLIXXPGROQNDFKLAYJKTRMIUDSVOBDCNEERGOXOUFZLHRRRTKEVLECOQTMRJYZAZQJTCMTSVUVAQXWBSETPTJZVUYNPIFKMFZHHXMWGDODABZHAVGSYLSHBCKHEGICYFSCUGLIUQSMPACEWYNWFBBMXLQPNBPBZ");
    msg.lat = 0.42724819176982975;
    msg.lon = 0.6368447710893524;
    msg.depth = 0.7830562645770326;
    msg.query_channel = 209U;
    msg.reply_channel = 22U;
    msg.transponder_delay = 163U;

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
    msg.setTimeStamp(0.1277605469397125);
    msg.setSource(5710U);
    msg.setSourceEntity(233U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(1U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.35694473814587746);
    msg.setSource(62815U);
    msg.setSourceEntity(54U);
    msg.setDestination(7688U);
    msg.setDestinationEntity(114U);
    msg.op = 45U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KAYHQZMJNBOIPCQDMEUORGRUJUSIXTTBKVHPJFJGEWFLXCUUGEGRTKBEWYZLYGPLAABTMCMHLKFKCSVHUZNPKYPFZYQDQMMOEWNVSKXVDTHPSABLEPLNGG");
    tmp_msg_0.lat = 0.612017873291334;
    tmp_msg_0.lon = 0.7312839047603831;
    tmp_msg_0.depth = 0.15440722638040938;
    tmp_msg_0.query_channel = 135U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 72U;
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
    msg.setTimeStamp(0.04954457574535154);
    msg.setSource(47809U);
    msg.setSourceEntity(121U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(211U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.7656133286478604);
    msg.setSource(40713U);
    msg.setSourceEntity(120U);
    msg.setDestination(25056U);
    msg.setDestinationEntity(116U);
    msg.address = 13U;

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
    msg.setTimeStamp(0.5887874504809257);
    msg.setSource(33856U);
    msg.setSourceEntity(254U);
    msg.setDestination(25145U);
    msg.setDestinationEntity(186U);
    msg.address = 110U;

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
    msg.setTimeStamp(0.8078914236496024);
    msg.setSource(15910U);
    msg.setSourceEntity(64U);
    msg.setDestination(16778U);
    msg.setDestinationEntity(103U);
    msg.address = 221U;

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
    msg.setTimeStamp(0.5742544050283547);
    msg.setSource(58954U);
    msg.setSourceEntity(113U);
    msg.setDestination(39400U);
    msg.setDestinationEntity(142U);
    msg.address = 236U;
    msg.status = 237U;
    msg.range = 0.27246224406329766;

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
    msg.setTimeStamp(0.5556559548479921);
    msg.setSource(51382U);
    msg.setSourceEntity(12U);
    msg.setDestination(22496U);
    msg.setDestinationEntity(158U);
    msg.address = 110U;
    msg.status = 147U;
    msg.range = 0.8807006009153996;

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
    msg.setTimeStamp(0.2385243020771315);
    msg.setSource(39066U);
    msg.setSourceEntity(112U);
    msg.setDestination(15187U);
    msg.setDestinationEntity(125U);
    msg.address = 106U;
    msg.status = 107U;
    msg.range = 0.47571094936467506;

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
    msg.setTimeStamp(0.0339413491608348);
    msg.setSource(61769U);
    msg.setSourceEntity(144U);
    msg.setDestination(28740U);
    msg.setDestinationEntity(98U);
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 98U;
    tmp_msg_0.value = 28U;
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
    msg.setTimeStamp(0.6188585751859568);
    msg.setSource(28036U);
    msg.setSourceEntity(119U);
    msg.setDestination(55463U);
    msg.setDestinationEntity(48U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5257620103489173;
    tmp_msg_0.speed_units = 188U;
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
    msg.setTimeStamp(0.32200296178937404);
    msg.setSource(55611U);
    msg.setSourceEntity(185U);
    msg.setDestination(54909U);
    msg.setDestinationEntity(229U);
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 128U;
    tmp_msg_0.clock = 0.7758268304788288;
    tmp_msg_0.tz = -106;
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
    msg.setTimeStamp(0.9533744008396265);
    msg.setSource(13226U);
    msg.setSourceEntity(68U);
    msg.setDestination(25141U);
    msg.setDestinationEntity(109U);
    msg.enable = 201U;

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
    msg.setTimeStamp(0.10338461955614564);
    msg.setSource(48007U);
    msg.setSourceEntity(177U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(33U);
    msg.enable = 26U;

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
    msg.setTimeStamp(0.788817632518694);
    msg.setSource(39015U);
    msg.setSourceEntity(48U);
    msg.setDestination(25900U);
    msg.setDestinationEntity(193U);
    msg.enable = 169U;

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
    msg.setTimeStamp(0.2792670094926061);
    msg.setSource(31695U);
    msg.setSourceEntity(170U);
    msg.setDestination(47192U);
    msg.setDestinationEntity(164U);
    msg.summary = 174U;
    msg.level = 5U;

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
    msg.setTimeStamp(0.394567517234379);
    msg.setSource(59378U);
    msg.setSourceEntity(243U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(5U);
    msg.summary = 26U;
    msg.level = 209U;

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
    msg.setTimeStamp(0.9498328834556578);
    msg.setSource(13087U);
    msg.setSourceEntity(157U);
    msg.setDestination(25002U);
    msg.setDestinationEntity(20U);
    msg.summary = 73U;
    msg.level = 94U;

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
    msg.setTimeStamp(0.4402512430192076);
    msg.setSource(48051U);
    msg.setSourceEntity(254U);
    msg.setDestination(54326U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.8895576801149786);
    msg.setSource(57466U);
    msg.setSourceEntity(199U);
    msg.setDestination(56982U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.6799991075364913);
    msg.setSource(25689U);
    msg.setSourceEntity(86U);
    msg.setDestination(27282U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.25654000239610864);
    msg.setSource(35365U);
    msg.setSourceEntity(116U);
    msg.setDestination(47211U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.9351714366031969);
    msg.setSource(34262U);
    msg.setSourceEntity(148U);
    msg.setDestination(24904U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.8097825269158924);
    msg.setSource(14012U);
    msg.setSourceEntity(43U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.0732581774372505);
    msg.setSource(59682U);
    msg.setSourceEntity(151U);
    msg.setDestination(19267U);
    msg.setDestinationEntity(61U);
    msg.op = 202U;
    msg.system.assign("ZNJVUBJUWLHRFBZANDPEUJAEKEGXOVHQKGYAYOOFMHFMLOPMWTNLWZWQHEYMKTFCSIQRAICLFODNVTGHYOPOSPEVAKLCUJYZDQUEGICLIDVVUFIXJZJJNKAUIFTYPCWDFXVXQRYFMEDHEPBBNPHRTISQSKYAIZZKBSBMVBKJPGZREWBULLCJXYVBPRARGQSODSQRWZXTQMTMHINRWDANVMFJSNWSDEGNCLUCYUGTBCWHTZTOMX");
    msg.range = 0.8423204126636894;
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 226U;
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
    msg.setTimeStamp(0.28151541711338435);
    msg.setSource(8686U);
    msg.setSourceEntity(76U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(62U);
    msg.op = 69U;
    msg.system.assign("IULJZGTVRFXUTGMGFOCYDLVIVZGVLXSDPUZXHXVPOGWFTARFECGKVVNMHSPKQCYWIEBAUHCNZHWWSNILAPBEYANDUATKYXMOLXKFLDKRFZNETHDOW");
    msg.range = 0.005597648438544156;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("OJSZIRWKDGQHCOGADHCXZDYSQZLWVILGGHJMPPZTFLVKAFSSRQENTPXYXVTKVJXSAOPDMHRJXENATECWNMUPTBBZLQWWBWPHKDVKVYCMUJBOAHYNNEOCMLWNLSMMFLQJBDYQKJUFUYDGCNNOEKQPCUHJBYZIKGIEVMOUZHIPXROOQUBYWJTWXDEIBHCKOASANVSQJSQI");
    tmp_msg_0.action = 131U;
    tmp_msg_0.grouplist.assign("KKQQEXHDGUXJLRAILFUAQPAVYOILGMPCIQEIXRBDZCHTKAWBVIKSNETXOTRITLSOZQBFRTRWHHYPDMAMXKKDAEAURFDCWLNCSEFWJZELWRJDVYBMUOC");
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
    msg.setTimeStamp(0.4026704132354165);
    msg.setSource(4474U);
    msg.setSourceEntity(50U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(183U);
    msg.op = 62U;
    msg.system.assign("WLNLLISBOHGCLIUNUOLXIQEWNTUGRGJKMBHZBHCWNHQCSOJGUZFSENPPMRYIVVSYJTXSMPWAFCECZEDPQHONBCJKKXDLXZMUIDXFDDWALQCFZDZSETTAOXOJIXEIKBTLUAVTCCWOVRRFQJEYGSXRQRWEREADUSASEZYHMYYUVATKKVMJW");
    msg.range = 0.502957533373238;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 34U;
    tmp_msg_0.mnames.assign("GXUGJSIAGYJGPTFEIJHEVUCFTSZLUNPQWPXVJRZQKVUMRTXIERYQZRLMHBJQMMPGEOEXLBFZNJOOQLGWKBTNXSFCCSZOURKADTINFPGTZBHSIKSVRWFDPBFCH");
    tmp_msg_0.ecount = 136U;
    tmp_msg_0.enames.assign("BVARMTDLVFCWMHWOFLIZZXYPWLEKTVBCWSTFBQYVLAHIORZEWFRBDNUKLCZTBDSGVSDDSRMCXJYBRYGFMUOSZIORXDMPTKRELPSXXKKNGKYYJYUD");
    tmp_msg_0.ccount = 108U;
    tmp_msg_0.cnames.assign("SULLZEKOZPNEZVJIWNHKVDASBPPLIMBEAAAMBCMDSVRUQDCOLOSLFWSZZIFMUHZRWCCEBGHPKGILVSXKWEFAUICRNOXQIQHVAMQLJXTSUVPBXYFXOWYZNNZFWQZMRCONIGMJVBYDHNFJYQRCQJMSQOYGERYTMHEVDSNOCXUDDWXTEDPDPJLJGJHYLTKPCAPEUBBUQGXKGRTNYXKKTNTFUMOTYQGARIIHTBJILJVRBWEFYXOWWVFPGZGHFDHARK");
    tmp_msg_0.last_error.assign("WVELXXYXFCRLSLZLVUZKKSZBUKVDXDHXGMSBHDXABPEOFOXCRDCEMCTMRYBOBVAYPSZYCSGARMRYEJYTMJMUENGWNIQZHDQLCBCFLFEWQPSPVIEQTQVTUMJVNINBGDGOYPHFGFTARJNKQGTWORXEJZPPGOUWFXAFATFIVUSZMMUGRBPQWLWFKCLISSYVJKNATJSWHDJWIKAAPXNHUQTBDOOAJIKHNLKL");
    tmp_msg_0.last_error_time = 0.5214758656883268;
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
    msg.setTimeStamp(0.8010379903899787);
    msg.setSource(60405U);
    msg.setSourceEntity(107U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.7948288749644591);
    msg.setSource(63309U);
    msg.setSourceEntity(24U);
    msg.setDestination(8721U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.9474908497173715);
    msg.setSource(41687U);
    msg.setSourceEntity(8U);
    msg.setDestination(19343U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.4392603004958855);
    msg.setSource(53036U);
    msg.setSourceEntity(95U);
    msg.setDestination(28470U);
    msg.setDestinationEntity(76U);
    msg.list.assign("FUFPKWKCSZGXGQJFYIETYVRWMTJFZSOIZRTPODYZSQIFVEXSAGOQLJTNYAJCBYZSPJCBLHULSMKLSQLBMHBUCPGISIOVXRRVNCRIFJVLAXVWDNWFWTAQJBNGLGKZHKUMJWWZCIAQEAORUDREOOITADNURBJDKZWTDXLOVFEPMEFFEZIESYHAGBUVKOAPHDXYOHQLQMJYCV");

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
    msg.setTimeStamp(0.348712892203328);
    msg.setSource(16488U);
    msg.setSourceEntity(7U);
    msg.setDestination(28205U);
    msg.setDestinationEntity(78U);
    msg.list.assign("GQVHXPHOVYF");

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
    msg.setTimeStamp(0.41262574480609004);
    msg.setSource(10977U);
    msg.setSourceEntity(212U);
    msg.setDestination(44692U);
    msg.setDestinationEntity(196U);
    msg.list.assign("OXHDOTCJFQZBSUSMUTMUNYKRCQUIZSLPGJAFLQKEHCBVUFIBCYBARHUTJJNGWXBPJT");

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
    msg.setTimeStamp(0.9957115074742882);
    msg.setSource(10398U);
    msg.setSourceEntity(55U);
    msg.setDestination(5859U);
    msg.setDestinationEntity(150U);
    msg.value = 10174;

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
    msg.setTimeStamp(0.10338986524313609);
    msg.setSource(58695U);
    msg.setSourceEntity(218U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(173U);
    msg.value = 15860;

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
    msg.setTimeStamp(0.6754811966993501);
    msg.setSource(12710U);
    msg.setSourceEntity(77U);
    msg.setDestination(27752U);
    msg.setDestinationEntity(45U);
    msg.value = 12984;

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
    msg.setTimeStamp(0.42085112120513457);
    msg.setSource(46559U);
    msg.setSourceEntity(92U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(215U);
    msg.value = 0.5448860077259663;

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
    msg.setTimeStamp(0.07598608133439733);
    msg.setSource(23041U);
    msg.setSourceEntity(143U);
    msg.setDestination(30452U);
    msg.setDestinationEntity(4U);
    msg.value = 0.07179088226618857;

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
    msg.setTimeStamp(0.45311487655824934);
    msg.setSource(22839U);
    msg.setSourceEntity(108U);
    msg.setDestination(2118U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7689581886326695;

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
    msg.setTimeStamp(0.16686449495917177);
    msg.setSource(12583U);
    msg.setSourceEntity(9U);
    msg.setDestination(59332U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9665010556512392;

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
    msg.setTimeStamp(0.9622253034391625);
    msg.setSource(34718U);
    msg.setSourceEntity(105U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2722303599037794;

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
    msg.setTimeStamp(0.4343578706823863);
    msg.setSource(34800U);
    msg.setSourceEntity(165U);
    msg.setDestination(55285U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6781697332666572;

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
    msg.setTimeStamp(0.24526127372217377);
    msg.setSource(38438U);
    msg.setSourceEntity(211U);
    msg.setDestination(47043U);
    msg.setDestinationEntity(31U);
    msg.validity = 8030U;
    msg.type = 37U;
    msg.utc_year = 14281U;
    msg.utc_month = 98U;
    msg.utc_day = 193U;
    msg.utc_time = 0.8021832686703264;
    msg.lat = 0.30437723251333804;
    msg.lon = 0.22151908511007756;
    msg.height = 0.5475794945295973;
    msg.satellites = 128U;
    msg.cog = 0.07530592462272745;
    msg.sog = 0.12164357382623714;
    msg.hdop = 0.9791728230156816;
    msg.vdop = 0.9783183102117926;
    msg.hacc = 0.39759065122309545;
    msg.vacc = 0.2941054355295397;

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
    msg.setTimeStamp(0.7845609061772116);
    msg.setSource(65183U);
    msg.setSourceEntity(236U);
    msg.setDestination(39433U);
    msg.setDestinationEntity(203U);
    msg.validity = 13781U;
    msg.type = 179U;
    msg.utc_year = 33064U;
    msg.utc_month = 197U;
    msg.utc_day = 216U;
    msg.utc_time = 0.02255610727076307;
    msg.lat = 0.5474127924243686;
    msg.lon = 0.8785586775324123;
    msg.height = 0.6948304690503118;
    msg.satellites = 230U;
    msg.cog = 0.6204495974360823;
    msg.sog = 0.8549137397836756;
    msg.hdop = 0.7981295785987883;
    msg.vdop = 0.46375695073541534;
    msg.hacc = 0.17923386856195211;
    msg.vacc = 0.6116160692665229;

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
    msg.setTimeStamp(0.12460376676496909);
    msg.setSource(37739U);
    msg.setSourceEntity(90U);
    msg.setDestination(46014U);
    msg.setDestinationEntity(82U);
    msg.validity = 34978U;
    msg.type = 208U;
    msg.utc_year = 582U;
    msg.utc_month = 158U;
    msg.utc_day = 192U;
    msg.utc_time = 0.08431798393115952;
    msg.lat = 0.8740133687765764;
    msg.lon = 0.43928358753181607;
    msg.height = 0.32282985468976766;
    msg.satellites = 108U;
    msg.cog = 0.10160348346524894;
    msg.sog = 0.5428480289619106;
    msg.hdop = 0.4882977353206278;
    msg.vdop = 0.5769188159384377;
    msg.hacc = 0.40829968621517254;
    msg.vacc = 0.2381496081903015;

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
    msg.setTimeStamp(0.7564885044179637);
    msg.setSource(23993U);
    msg.setSourceEntity(138U);
    msg.setDestination(59093U);
    msg.setDestinationEntity(203U);
    msg.time = 0.38356837151258283;
    msg.phi = 0.5995602258563609;
    msg.theta = 0.15607261410185203;
    msg.psi = 0.6990539261603198;
    msg.psi_magnetic = 0.16445630866683159;

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
    msg.setTimeStamp(0.5987598568182984);
    msg.setSource(17453U);
    msg.setSourceEntity(243U);
    msg.setDestination(44450U);
    msg.setDestinationEntity(54U);
    msg.time = 0.17424101032225214;
    msg.phi = 0.13735971582371875;
    msg.theta = 0.11315335432153362;
    msg.psi = 0.5963942097947602;
    msg.psi_magnetic = 0.2594598405036782;

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
    msg.setTimeStamp(0.6112794495203193);
    msg.setSource(64627U);
    msg.setSourceEntity(72U);
    msg.setDestination(51052U);
    msg.setDestinationEntity(226U);
    msg.time = 0.4585287208258636;
    msg.phi = 0.4807697778435196;
    msg.theta = 0.4347855176314701;
    msg.psi = 0.8841861564491904;
    msg.psi_magnetic = 0.8444098052412489;

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
    msg.setTimeStamp(0.6327363049754822);
    msg.setSource(53929U);
    msg.setSourceEntity(143U);
    msg.setDestination(8363U);
    msg.setDestinationEntity(63U);
    msg.time = 0.8552962154656437;
    msg.x = 0.7820807651629426;
    msg.y = 0.9091891729371268;
    msg.z = 0.6142143069139056;
    msg.timestep = 0.3696147745572428;

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
    msg.setTimeStamp(0.18759606594554645);
    msg.setSource(24098U);
    msg.setSourceEntity(121U);
    msg.setDestination(34591U);
    msg.setDestinationEntity(238U);
    msg.time = 0.47999282817888056;
    msg.x = 0.4011587318951755;
    msg.y = 0.6423732338913112;
    msg.z = 0.20987843743819645;
    msg.timestep = 0.7061453380535112;

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
    msg.setTimeStamp(0.6262052536988701);
    msg.setSource(25207U);
    msg.setSourceEntity(151U);
    msg.setDestination(47713U);
    msg.setDestinationEntity(47U);
    msg.time = 0.9850005605300599;
    msg.x = 0.12023381724552196;
    msg.y = 0.6216322608539523;
    msg.z = 0.6635100993720046;
    msg.timestep = 0.4550092267347492;

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
    msg.setTimeStamp(0.18204129331163021);
    msg.setSource(22220U);
    msg.setSourceEntity(178U);
    msg.setDestination(33064U);
    msg.setDestinationEntity(191U);
    msg.time = 0.75516524779221;
    msg.x = 0.7465556040512474;
    msg.y = 0.24309174725487204;
    msg.z = 0.025213911999327876;

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
    msg.setTimeStamp(0.1764017790883078);
    msg.setSource(30041U);
    msg.setSourceEntity(212U);
    msg.setDestination(9047U);
    msg.setDestinationEntity(105U);
    msg.time = 0.7585073500855329;
    msg.x = 0.3589782707646042;
    msg.y = 0.11141570906364018;
    msg.z = 0.38033816243823615;

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
    msg.setTimeStamp(0.35066438890059426);
    msg.setSource(1571U);
    msg.setSourceEntity(234U);
    msg.setDestination(37546U);
    msg.setDestinationEntity(89U);
    msg.time = 0.33616009342843967;
    msg.x = 0.4969981603736593;
    msg.y = 0.8215555358026262;
    msg.z = 0.7889781029599433;

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
    msg.setTimeStamp(0.23799892147689183);
    msg.setSource(55037U);
    msg.setSourceEntity(125U);
    msg.setDestination(44807U);
    msg.setDestinationEntity(190U);
    msg.time = 0.7253660484663839;
    msg.x = 0.8814864102207594;
    msg.y = 0.8190459698168991;
    msg.z = 0.23122725967229418;

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
    msg.setTimeStamp(0.25512348867618184);
    msg.setSource(27742U);
    msg.setSourceEntity(86U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(48U);
    msg.time = 0.18578746522218537;
    msg.x = 0.8948649865870913;
    msg.y = 0.7662353931930541;
    msg.z = 0.46982499889935225;

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
    msg.setTimeStamp(0.8125799413376247);
    msg.setSource(17363U);
    msg.setSourceEntity(99U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(135U);
    msg.time = 0.6013052022856138;
    msg.x = 0.2918955016260868;
    msg.y = 0.6369494230088631;
    msg.z = 0.5887909383185856;

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
    msg.setTimeStamp(0.24703714911182117);
    msg.setSource(31733U);
    msg.setSourceEntity(64U);
    msg.setDestination(49636U);
    msg.setDestinationEntity(145U);
    msg.time = 0.26682338011831264;
    msg.x = 0.0039010951842685104;
    msg.y = 0.5072121243786829;
    msg.z = 0.44238301467763297;

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
    msg.setTimeStamp(0.8316478204769623);
    msg.setSource(59857U);
    msg.setSourceEntity(155U);
    msg.setDestination(56787U);
    msg.setDestinationEntity(241U);
    msg.time = 0.7281630504515813;
    msg.x = 0.5565057524819792;
    msg.y = 0.03872060430286495;
    msg.z = 0.022524137680207224;

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
    msg.setTimeStamp(0.96130507531763);
    msg.setSource(54796U);
    msg.setSourceEntity(208U);
    msg.setDestination(36431U);
    msg.setDestinationEntity(251U);
    msg.time = 0.5111991424536937;
    msg.x = 0.26768909254403617;
    msg.y = 0.2055278829987066;
    msg.z = 0.30379935005295555;

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
    msg.setTimeStamp(0.12782565570932325);
    msg.setSource(43369U);
    msg.setSourceEntity(71U);
    msg.setDestination(46906U);
    msg.setDestinationEntity(83U);
    msg.validity = 62U;
    msg.x = 0.7976620378685157;
    msg.y = 0.3654060474210922;
    msg.z = 0.750957517450429;

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
    msg.setTimeStamp(0.49419905141824416);
    msg.setSource(40254U);
    msg.setSourceEntity(196U);
    msg.setDestination(1691U);
    msg.setDestinationEntity(91U);
    msg.validity = 5U;
    msg.x = 0.33210686741354345;
    msg.y = 0.3812573190331383;
    msg.z = 0.45929893582149817;

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
    msg.setTimeStamp(0.27468629790258803);
    msg.setSource(49626U);
    msg.setSourceEntity(125U);
    msg.setDestination(29852U);
    msg.setDestinationEntity(237U);
    msg.validity = 31U;
    msg.x = 0.8736116255259144;
    msg.y = 0.34201014212732395;
    msg.z = 0.28632894280106047;

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
    msg.setTimeStamp(0.5223539937159479);
    msg.setSource(40680U);
    msg.setSourceEntity(134U);
    msg.setDestination(30397U);
    msg.setDestinationEntity(154U);
    msg.validity = 201U;
    msg.x = 0.746987729867678;
    msg.y = 0.8675956986928196;
    msg.z = 0.159044891850607;

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
    msg.setTimeStamp(0.7833692934301133);
    msg.setSource(23187U);
    msg.setSourceEntity(130U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(111U);
    msg.validity = 46U;
    msg.x = 0.5220736980305892;
    msg.y = 0.7448049795729642;
    msg.z = 0.990553876065093;

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
    msg.setTimeStamp(0.3016234361087067);
    msg.setSource(19317U);
    msg.setSourceEntity(129U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(80U);
    msg.validity = 180U;
    msg.x = 0.08495289568033093;
    msg.y = 0.6826199420469954;
    msg.z = 0.7009725332200414;

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
    msg.setTimeStamp(0.4101371045025828);
    msg.setSource(20718U);
    msg.setSourceEntity(54U);
    msg.setDestination(30888U);
    msg.setDestinationEntity(188U);
    msg.time = 0.12337619486169937;
    msg.x = 0.9749920508087703;
    msg.y = 0.7946815527207934;
    msg.z = 0.49399402948005344;

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
    msg.setTimeStamp(0.2711889819171377);
    msg.setSource(14849U);
    msg.setSourceEntity(98U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(208U);
    msg.time = 0.012950799078768283;
    msg.x = 0.17586141366996422;
    msg.y = 0.8167129359575585;
    msg.z = 0.6411022950889196;

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
    msg.setTimeStamp(0.34084418449146725);
    msg.setSource(3607U);
    msg.setSourceEntity(147U);
    msg.setDestination(50841U);
    msg.setDestinationEntity(77U);
    msg.time = 0.16194618485326617;
    msg.x = 0.4609154545047345;
    msg.y = 0.29717430724967786;
    msg.z = 0.31059706348197724;

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
    msg.setTimeStamp(0.7069888139314916);
    msg.setSource(1127U);
    msg.setSourceEntity(116U);
    msg.setDestination(11303U);
    msg.setDestinationEntity(159U);
    msg.validity = 155U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7208627831224336;
    tmp_msg_0.beam_height = 0.1760396312836774;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.2908549743887179;

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
    msg.setTimeStamp(0.45435435737141305);
    msg.setSource(7636U);
    msg.setSourceEntity(118U);
    msg.setDestination(56078U);
    msg.setDestinationEntity(123U);
    msg.validity = 208U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6601899071159795;
    tmp_msg_0.beam_height = 0.6824983338733991;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9755248429842455;

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
    msg.setTimeStamp(0.7492542406079776);
    msg.setSource(57790U);
    msg.setSourceEntity(79U);
    msg.setDestination(59642U);
    msg.setDestinationEntity(57U);
    msg.validity = 212U;
    msg.value = 0.8126545159943612;

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
    msg.setTimeStamp(0.22778910151680398);
    msg.setSource(4202U);
    msg.setSourceEntity(105U);
    msg.setDestination(31819U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6718319930163197;

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
    msg.setTimeStamp(0.5975186402783794);
    msg.setSource(36380U);
    msg.setSourceEntity(170U);
    msg.setDestination(14359U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6733073020041555;

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
    msg.setTimeStamp(0.2521747148865088);
    msg.setSource(9430U);
    msg.setSourceEntity(120U);
    msg.setDestination(17530U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6402261354955439;

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
    msg.setTimeStamp(0.8129492745615382);
    msg.setSource(52053U);
    msg.setSourceEntity(108U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8464601265713411;

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
    msg.setTimeStamp(0.6121151565961493);
    msg.setSource(9773U);
    msg.setSourceEntity(180U);
    msg.setDestination(54241U);
    msg.setDestinationEntity(48U);
    msg.value = 0.30844703947524965;

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
    msg.setTimeStamp(0.6040172903875947);
    msg.setSource(8038U);
    msg.setSourceEntity(78U);
    msg.setDestination(35650U);
    msg.setDestinationEntity(192U);
    msg.value = 0.4282586961283399;

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
    msg.setTimeStamp(0.13535860854065151);
    msg.setSource(52130U);
    msg.setSourceEntity(246U);
    msg.setDestination(2290U);
    msg.setDestinationEntity(192U);
    msg.value = 0.3758915637686344;

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
    msg.setTimeStamp(0.33220242087640095);
    msg.setSource(61345U);
    msg.setSourceEntity(205U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7449710717434634;

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
    msg.setTimeStamp(0.7457442911340281);
    msg.setSource(3053U);
    msg.setSourceEntity(167U);
    msg.setDestination(31418U);
    msg.setDestinationEntity(189U);
    msg.value = 0.24261978319045518;

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
    msg.setTimeStamp(0.9764305007456681);
    msg.setSource(31455U);
    msg.setSourceEntity(78U);
    msg.setDestination(15182U);
    msg.setDestinationEntity(137U);
    msg.value = 0.038859956625968195;

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
    msg.setTimeStamp(0.15564253585985122);
    msg.setSource(29585U);
    msg.setSourceEntity(26U);
    msg.setDestination(43699U);
    msg.setDestinationEntity(148U);
    msg.value = 0.21230694266782923;

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
    msg.setTimeStamp(0.5464740112962331);
    msg.setSource(18183U);
    msg.setSourceEntity(226U);
    msg.setDestination(22063U);
    msg.setDestinationEntity(117U);
    msg.value = 0.3586124824072955;

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
    msg.setTimeStamp(0.23031949115580264);
    msg.setSource(3483U);
    msg.setSourceEntity(252U);
    msg.setDestination(16362U);
    msg.setDestinationEntity(87U);
    msg.value = 0.4813146079455871;

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
    msg.setTimeStamp(0.8201062302761429);
    msg.setSource(49863U);
    msg.setSourceEntity(147U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7620394816037719;

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
    msg.setTimeStamp(0.8406140570330912);
    msg.setSource(9591U);
    msg.setSourceEntity(73U);
    msg.setDestination(45497U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7961938146099237;

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
    msg.setTimeStamp(0.5489586018306658);
    msg.setSource(17989U);
    msg.setSourceEntity(234U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7932959768774489;

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
    msg.setTimeStamp(0.40020421021000907);
    msg.setSource(36825U);
    msg.setSourceEntity(231U);
    msg.setDestination(40506U);
    msg.setDestinationEntity(194U);
    msg.value = 0.5963511812925811;

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
    msg.setTimeStamp(0.5400030247102984);
    msg.setSource(15080U);
    msg.setSourceEntity(252U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(201U);
    msg.value = 0.911263743137927;

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
    msg.setTimeStamp(0.7166128222424436);
    msg.setSource(12786U);
    msg.setSourceEntity(48U);
    msg.setDestination(62708U);
    msg.setDestinationEntity(251U);
    msg.value = 0.8020202020470527;

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
    msg.setTimeStamp(0.3130525635038367);
    msg.setSource(13867U);
    msg.setSourceEntity(115U);
    msg.setDestination(31956U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5986853275704945;

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
    msg.setTimeStamp(0.5396997379336383);
    msg.setSource(45981U);
    msg.setSourceEntity(30U);
    msg.setDestination(57642U);
    msg.setDestinationEntity(205U);
    msg.value = 0.47975822079440844;

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
    msg.setTimeStamp(0.038259317140622806);
    msg.setSource(27682U);
    msg.setSourceEntity(214U);
    msg.setDestination(33687U);
    msg.setDestinationEntity(157U);
    msg.value = 0.18389298523450204;

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
    msg.setTimeStamp(0.72961330688527);
    msg.setSource(13516U);
    msg.setSourceEntity(200U);
    msg.setDestination(34108U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8242424514526967;

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
    msg.setTimeStamp(0.6969905996237277);
    msg.setSource(45192U);
    msg.setSourceEntity(119U);
    msg.setDestination(25705U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5010925952599914;

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
    msg.setTimeStamp(0.11827751605307413);
    msg.setSource(12815U);
    msg.setSourceEntity(179U);
    msg.setDestination(40946U);
    msg.setDestinationEntity(123U);
    msg.direction = 0.8453921385880568;
    msg.speed = 0.5856239600006239;
    msg.turbulence = 0.6359710132113495;

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
    msg.setTimeStamp(0.923871648365168);
    msg.setSource(43821U);
    msg.setSourceEntity(172U);
    msg.setDestination(25196U);
    msg.setDestinationEntity(254U);
    msg.direction = 0.5171527637230386;
    msg.speed = 0.9808576251855782;
    msg.turbulence = 0.4798572514546109;

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
    msg.setTimeStamp(0.8655307268737468);
    msg.setSource(34203U);
    msg.setSourceEntity(80U);
    msg.setDestination(39089U);
    msg.setDestinationEntity(225U);
    msg.direction = 0.010186569036555015;
    msg.speed = 0.6272419552168648;
    msg.turbulence = 0.599505909844493;

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
    msg.setTimeStamp(0.10165859735792859);
    msg.setSource(61335U);
    msg.setSourceEntity(73U);
    msg.setDestination(52508U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5945615573863233;

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
    msg.setTimeStamp(0.7535755186330763);
    msg.setSource(62377U);
    msg.setSourceEntity(92U);
    msg.setDestination(47226U);
    msg.setDestinationEntity(5U);
    msg.value = 0.053527366084946015;

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
    msg.setTimeStamp(0.01238184911256801);
    msg.setSource(2558U);
    msg.setSourceEntity(163U);
    msg.setDestination(38644U);
    msg.setDestinationEntity(21U);
    msg.value = 0.2544045080171847;

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
    msg.setTimeStamp(0.21694205790357934);
    msg.setSource(32713U);
    msg.setSourceEntity(118U);
    msg.setDestination(20547U);
    msg.setDestinationEntity(21U);
    msg.value.assign("FUHEHXBGKOIWMVHWTTLYQYOSZMIDTXGZPNRIMPNRKCKBJCBOSVEKNAQOLMIAQUVUUDNPUXYVNYZSVFERYGJRYEOSVUAJKQEZLMCSGWPZCBQCPSNSIKKHIBVYFWLEWWCHHZTMBYCGALF");

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
    msg.setTimeStamp(0.27751455809938763);
    msg.setSource(54528U);
    msg.setSourceEntity(142U);
    msg.setDestination(43846U);
    msg.setDestinationEntity(148U);
    msg.value.assign("TEVBDSPBPECJWNHNISQRXDUUJLDQAKKMPHOJXZCAYTXJNVABBGEFSJNYQDFMZYREQPZYITMRJDDQFHOGGTUJCLEWSMEOIFFRWTQCKLBOBFSLOMEYZTTVUVGFLSHILVGJDULKFWCODVIYDHTKXNBYOCCPKHILUKFQZGBIBGIAKAPOLOGRRZUNPSXXGZZXTNCQW");

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
    msg.setTimeStamp(0.9288203494172731);
    msg.setSource(7809U);
    msg.setSourceEntity(253U);
    msg.setDestination(3514U);
    msg.setDestinationEntity(138U);
    msg.value.assign("AGOEXOJIUYJOONXKUICCFJMDCSKDWMRYLJEAKAVWTPCGTOCRAIQQYFJFZUSNDENNPVBYJGZLPCLFLGHASBAQRBUIMGYFICQJEBTCOUSGMTXVZLAUFWEHPKZLGPHBMZBDIQLSKONGGFHSZQKHVMZUDOIUVRZEHEQ");

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
    msg.setTimeStamp(0.5450249595280325);
    msg.setSource(14384U);
    msg.setSourceEntity(230U);
    msg.setDestination(23229U);
    msg.setDestinationEntity(35U);
    const char tmp_msg_0[] = {-94, 92, 89, 109, -107, -119, 10, 98, 35, -84, 75, -9, 54, -79, 19, -83, -87, -3, -110, -64, 5, 57, -97, 33, -112, 82, -16, -11, -64, -117, 24, 38, -24, 16, 48, 73, -78, -93, 79, 42, -51, 50, -72, 6, 105, 25, -87, -59, -22, 35, -49, -127, 41, -128, 51, -75, -27, -94, 17, -126, 72, 88, 87, 27, -90, -118, 71, 92, 18, 84, 108, -118, 24, 89, -113, 104};
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
    msg.setTimeStamp(0.8435627497961576);
    msg.setSource(5078U);
    msg.setSourceEntity(220U);
    msg.setDestination(57553U);
    msg.setDestinationEntity(208U);
    const char tmp_msg_0[] = {-70, 27, 89, 19, -32, 31, -82, -98, 33, 41, -92, 121, 86, -51, 87, -32, -93, 116, 94, 35, -27, 42, -2, -82, 95, -72, 10, 67, -56, 94, 42, -127, -1, 62, -54, -35, -36, -10, 104, 59, -94, -88, 5, 91, 98, 11, -70, -76, 76, 71, -4, 6, -46, 47, -97, -74, 112, -81, -14, 85, -84, 90, -34, 60, -41, 29, 54, -80, -26, 19, -42, 67, -115, 93, 43, 100, 98, -69, -36, -33, 92, -15, 59, -93, -52, -9, -4, -37, -70, -68, 4, 102, -11, 122, 12, -33, -112, -50, 8, 46, -55, 71, -90, -47, -73, -126, 39, -85, -10, -92, -25, 71, -102, -110, 92, -78, -83, -40, 52, 69, -21, 81, -57, 65, 85, -109, -87, 37, -27, -79, -42, -54, -39, 77, 85, 9, 123, -80, 84, -42, -110, -14, -34, 41, -96, 118, -50, -87, -66, -89, -44, -106, -65, 62, 101, 75, 24, -118, -77, -60, -105, 90, -13, 105, 119, -41, -51, 3, 59, -69, 57, 74, 61, -56, -75, -105, -52, -104, -104, 5, 64, -77, -69, -36, 11, -89, 72, -116, -102, 7, 27, 43, -79, -122, 36, 11, 27, 97, -75, -120, -25, 73, -58, -9, -73, 94, 52, 86, 111, -31, -10, -30, -70, 118, 92, -125, 95, 50, 14, 23};
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
    msg.setTimeStamp(0.45440305530650194);
    msg.setSource(17751U);
    msg.setSourceEntity(149U);
    msg.setDestination(50139U);
    msg.setDestinationEntity(141U);
    const char tmp_msg_0[] = {19, 112, 4, 35, -116, -91, 99, 84, -50, -17, 43, -41, 108, -5, 15, 73, 11, -53, -119, 116, 98, 47, -93, -88, 121, 32, -7, 62, -71, -33, -112, -11, -119, 79, -91, -28, -10, -77, -56, -77, -104, -120, 6, -41, 126, 72, 23, -94, -123, 35, 1, 95, 0, -84, -103, -80, -102, 62, 43, -16, -33, -68, 96, 68, 14, 124, 59, -61, 75, -2, 73, -112, 11, 56, 103, -44, 42, -87, 110, 107, 70, -59, -25, 9, 125, -79, 114, -125, -84, -90, 25, -19, 51, 75, 2, -46, -92, 1, 80, 78, -91, -34, 92, 111, -92, -37, -56, -76, -125, -98, 4, -51, 120, 18, 116, -67, -80, -108, -110, -40, 41, 0, 5, 125, -91, -42, -71, 25, -33, 103, -124, 106, -119};
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
    msg.setTimeStamp(0.5272399967753931);
    msg.setSource(24356U);
    msg.setSourceEntity(74U);
    msg.setDestination(48801U);
    msg.setDestinationEntity(193U);
    msg.frequency = 1687274759U;
    msg.min_range = 60298U;
    msg.max_range = 63860U;

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
    msg.setTimeStamp(0.7759429013904519);
    msg.setSource(20410U);
    msg.setSourceEntity(214U);
    msg.setDestination(58739U);
    msg.setDestinationEntity(192U);
    msg.frequency = 3244159678U;
    msg.min_range = 52528U;
    msg.max_range = 56049U;

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
    msg.setTimeStamp(0.16466434126131257);
    msg.setSource(45513U);
    msg.setSourceEntity(120U);
    msg.setDestination(39661U);
    msg.setDestinationEntity(91U);
    msg.frequency = 3372763208U;
    msg.min_range = 40797U;
    msg.max_range = 26599U;

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
    msg.setTimeStamp(0.6354887106990283);
    msg.setSource(56857U);
    msg.setSourceEntity(28U);
    msg.setDestination(26992U);
    msg.setDestinationEntity(43U);
    msg.type = 158U;
    msg.frequency = 1859799019U;
    msg.min_range = 17186U;
    msg.max_range = 63274U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.4076202683629119;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.04934949307604686;
    tmp_msg_0.beam_height = 0.2390919640755248;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-79, 29, 18, -80, 53, -8, 4, -44, 49, -72, 113, 70, -41, -13, -56, 118, -80, 29, -24, 28, -106, 17, 50, -53, -13, 93, 109, -49, 72, -10, 40, 40, -91, -22, 110, 91, -12, 13, 64, 25, 49, -1, -86, 121, 5, 58, 109, -85, 59, -102, 19, 113, 77, -4, 83, -128, -118, 2, -46, -57, -50, -104, 25, 51, -122, 43, -58, 66, 28, -81, 27, -88, -41, 98, 117, 11, -17, -66, -82, 40, 56, -125, -83, 57, 9, -15, 76, -80, 113, 19, 40, -126, -82, -42, 41, -70, -86, -47, 97, -20, 29, 41, -71, -56, -30, -17, -119, -40, 95, -78, 22, 93, 39, 64, 46, -126, 7, 85, -1, 67, -99, 48, 13, -81, -97, -10, -67, 124, -59, 21, 58, 43, 85, 26, -25, -24, 30, -103, -38, 12, -104, 66, 126, 111, -60, 10, -15, 102, -92, -107, 64, -11, -60, 21, -23, -9, 1, -61, 92, -9, -2, -46, -6, 81, -113, -123, 117, 43, -85, 27};
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
    msg.setTimeStamp(0.7456519873898592);
    msg.setSource(28122U);
    msg.setSourceEntity(229U);
    msg.setDestination(40595U);
    msg.setDestinationEntity(254U);
    msg.type = 89U;
    msg.frequency = 2688494334U;
    msg.min_range = 17545U;
    msg.max_range = 11713U;
    msg.bits_per_point = 207U;
    msg.scale_factor = 0.20339736644218975;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.906037360844645;
    tmp_msg_0.beam_height = 0.777464427369514;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-47, -78, -41, 117, 86, 14, -82, -51, 67, -33, -32, 41, -79, 44, 59, 36, -90, -51, -62, 47, -50, -15, 63, -1, 39, -5};
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
    msg.setTimeStamp(0.6303710194496994);
    msg.setSource(28357U);
    msg.setSourceEntity(128U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(22U);
    msg.type = 22U;
    msg.frequency = 603733263U;
    msg.min_range = 29558U;
    msg.max_range = 4513U;
    msg.bits_per_point = 48U;
    msg.scale_factor = 0.9112605513283373;
    const char tmp_msg_0[] = {101, 44, -60, -100, -3, 109, -26, 96, 59, 32, 37, -118, 111, -118, -80, 96, -61, 76, -33, -99, 57, 96, 8, 42, 82, -90, -90, -120, 2, 98, -82, 62, 53, -13, 52, 121, 7, 16, -30, -13, -128, -94, 94, 124, 95, 15};
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
    msg.setTimeStamp(0.008655221501606136);
    msg.setSource(59235U);
    msg.setSourceEntity(214U);
    msg.setDestination(64173U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.448825684301028);
    msg.setSource(60369U);
    msg.setSourceEntity(170U);
    msg.setDestination(5380U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.1550709667614345);
    msg.setSource(57399U);
    msg.setSourceEntity(63U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.8566279532533515);
    msg.setSource(64835U);
    msg.setSourceEntity(142U);
    msg.setDestination(13875U);
    msg.setDestinationEntity(226U);
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
    msg.setTimeStamp(0.398933876279308);
    msg.setSource(4545U);
    msg.setSourceEntity(156U);
    msg.setDestination(60682U);
    msg.setDestinationEntity(182U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.045495658859418864);
    msg.setSource(31977U);
    msg.setSourceEntity(157U);
    msg.setDestination(926U);
    msg.setDestinationEntity(58U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.41248083622752474);
    msg.setSource(16886U);
    msg.setSourceEntity(201U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(103U);
    msg.value = 0.2686685266742258;
    msg.confidence = 0.43843521096844795;
    msg.opmodes.assign("NFUABOFNMIOWMKLJSTCXQXZHRLUWQEUDACMEMQGDWNQGEHOBVEZIETPFMWZASTWMYCJUTVJRCRODWAUIQFNVVANWNAIDVVYBREMLVPJDHFCPPHGVFQCKTRPETYQXKIHTJHYYYLCKISYFOUDCHRGURZNLAIHQXZKZZLVQGMDUXOYBISECJXPGLKMSOIFXSATABKTJULQXB");

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
    msg.setTimeStamp(0.8287456149325616);
    msg.setSource(977U);
    msg.setSourceEntity(48U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(229U);
    msg.value = 0.015533813510630434;
    msg.confidence = 0.36408966194983217;
    msg.opmodes.assign("YMQSGZNGQELOLTKUBOSFYSWUCHAHHRWYULYQPOKCVUMJHCERPPZDKXAQVRBMAKHNZBAWXNNBDVWWGOGTVNGPRNCAWAMOVBWBFEPVXNJAGJLKIXETLYTTUMJSAMJIOLJZHWGLSFWGBQDDIMQRTKEOY");

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
    msg.setTimeStamp(0.07559178442040493);
    msg.setSource(62059U);
    msg.setSourceEntity(214U);
    msg.setDestination(48669U);
    msg.setDestinationEntity(162U);
    msg.value = 0.909081404170367;
    msg.confidence = 0.7508523145306238;
    msg.opmodes.assign("SDOJOPAJAVVBIQRTXHWIISBEYWAIZXRYJKULWMRMBRXWLAKOCDNCYYDCVQHSEHAFVQQHNSDSFTFIUUMHERZUZGJAIPMZCRLNOZSKNJVCGWOZGABPKMDSFIEPGAXLBUGEZKVVSPHBTWBWXHXUNAMVEKCWTURQPCNPCRJKGXLDOFHLFKILZNLOQDVTQYEUOCTTF");

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
    msg.setTimeStamp(0.8227107064082501);
    msg.setSource(3456U);
    msg.setSourceEntity(1U);
    msg.setDestination(54611U);
    msg.setDestinationEntity(88U);
    msg.itow = 2832199464U;
    msg.lat = 0.5239904488791535;
    msg.lon = 0.9750372451529179;
    msg.height_ell = 0.5106807520719999;
    msg.height_sea = 0.19534071145449816;
    msg.hacc = 0.17296602777669312;
    msg.vacc = 0.008622507134075308;
    msg.vel_n = 0.7778376862200735;
    msg.vel_e = 0.859638845708113;
    msg.vel_d = 0.6571045907336993;
    msg.speed = 0.884524370837769;
    msg.gspeed = 0.3111207280714241;
    msg.heading = 0.49918068809326444;
    msg.sacc = 0.20252410919862696;
    msg.cacc = 0.5296626923472613;

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
    msg.setTimeStamp(0.036716741976037026);
    msg.setSource(25799U);
    msg.setSourceEntity(113U);
    msg.setDestination(59817U);
    msg.setDestinationEntity(195U);
    msg.itow = 2694024396U;
    msg.lat = 0.2852472708815845;
    msg.lon = 0.2393035114471994;
    msg.height_ell = 0.5730550584731748;
    msg.height_sea = 0.4525658259040616;
    msg.hacc = 0.8411891831176681;
    msg.vacc = 0.02721316841390209;
    msg.vel_n = 0.8657593768042232;
    msg.vel_e = 0.8245196193811831;
    msg.vel_d = 0.051120145599844014;
    msg.speed = 0.645825125626533;
    msg.gspeed = 0.278777630403219;
    msg.heading = 0.21900184418207813;
    msg.sacc = 0.10646134204131197;
    msg.cacc = 0.8775310656837052;

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
    msg.setTimeStamp(0.12080108018845659);
    msg.setSource(60895U);
    msg.setSourceEntity(43U);
    msg.setDestination(4202U);
    msg.setDestinationEntity(8U);
    msg.itow = 3198506563U;
    msg.lat = 0.8861800760980839;
    msg.lon = 0.9124742456256613;
    msg.height_ell = 0.13859167461172506;
    msg.height_sea = 0.3334250804663259;
    msg.hacc = 0.009570911827293194;
    msg.vacc = 0.4862260367962652;
    msg.vel_n = 0.6876317278109187;
    msg.vel_e = 0.5009791953696627;
    msg.vel_d = 0.40985460791380357;
    msg.speed = 0.020881220876307727;
    msg.gspeed = 0.6749871789806335;
    msg.heading = 0.3887159598455808;
    msg.sacc = 0.17640670539609093;
    msg.cacc = 0.5454379066180899;

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
    msg.setTimeStamp(0.9799973910831016);
    msg.setSource(4913U);
    msg.setSourceEntity(58U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(246U);
    msg.id = 21U;
    msg.value = 0.7107228358758441;

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
    msg.setTimeStamp(0.9628495721672484);
    msg.setSource(55067U);
    msg.setSourceEntity(100U);
    msg.setDestination(40062U);
    msg.setDestinationEntity(108U);
    msg.id = 214U;
    msg.value = 0.46120598126918166;

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
    msg.setTimeStamp(0.6682677859246458);
    msg.setSource(29040U);
    msg.setSourceEntity(147U);
    msg.setDestination(44615U);
    msg.setDestinationEntity(119U);
    msg.id = 254U;
    msg.value = 0.6553086821295943;

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
    msg.setTimeStamp(0.18970294785453645);
    msg.setSource(41260U);
    msg.setSourceEntity(68U);
    msg.setDestination(61639U);
    msg.setDestinationEntity(160U);
    msg.x = 0.19155228462340768;
    msg.y = 0.814720251132905;
    msg.z = 0.23138044514036626;
    msg.phi = 0.6531045081224701;
    msg.theta = 0.7199693898599617;
    msg.psi = 0.8381738185326222;

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
    msg.setTimeStamp(0.5856701476756047);
    msg.setSource(45050U);
    msg.setSourceEntity(145U);
    msg.setDestination(35528U);
    msg.setDestinationEntity(117U);
    msg.x = 0.4177963018010301;
    msg.y = 0.8576715249979296;
    msg.z = 0.2570280525907236;
    msg.phi = 0.6040744902841185;
    msg.theta = 0.7030454057395896;
    msg.psi = 0.3885129243829246;

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
    msg.setTimeStamp(0.5856908391871674);
    msg.setSource(55376U);
    msg.setSourceEntity(68U);
    msg.setDestination(19766U);
    msg.setDestinationEntity(127U);
    msg.x = 0.019697411351084604;
    msg.y = 0.483605457043897;
    msg.z = 0.3494142398470045;
    msg.phi = 0.507599722112329;
    msg.theta = 0.4977335243595492;
    msg.psi = 0.26215424841862367;

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
    msg.setTimeStamp(0.17943701526838152);
    msg.setSource(13311U);
    msg.setSourceEntity(130U);
    msg.setDestination(26522U);
    msg.setDestinationEntity(189U);
    msg.beam_width = 0.9340890249138301;
    msg.beam_height = 0.7236728843894439;

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
    msg.setTimeStamp(0.5783361367557189);
    msg.setSource(23604U);
    msg.setSourceEntity(180U);
    msg.setDestination(51530U);
    msg.setDestinationEntity(228U);
    msg.beam_width = 0.27309645622270684;
    msg.beam_height = 0.6636648644030878;

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
    msg.setTimeStamp(0.6925432700025528);
    msg.setSource(19047U);
    msg.setSourceEntity(32U);
    msg.setDestination(19391U);
    msg.setDestinationEntity(153U);
    msg.beam_width = 0.7423921137653227;
    msg.beam_height = 0.271600184818374;

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
    msg.setTimeStamp(0.26999810967819093);
    msg.setSource(63508U);
    msg.setSourceEntity(78U);
    msg.setDestination(19411U);
    msg.setDestinationEntity(128U);
    msg.sane = 231U;

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
    msg.setTimeStamp(0.2797996691414457);
    msg.setSource(5593U);
    msg.setSourceEntity(145U);
    msg.setDestination(49865U);
    msg.setDestinationEntity(133U);
    msg.sane = 208U;

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
    msg.setTimeStamp(0.9896152802806844);
    msg.setSource(50564U);
    msg.setSourceEntity(80U);
    msg.setDestination(59447U);
    msg.setDestinationEntity(76U);
    msg.sane = 234U;

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
    msg.setTimeStamp(0.4036141950251597);
    msg.setSource(58970U);
    msg.setSourceEntity(216U);
    msg.setDestination(15238U);
    msg.setDestinationEntity(172U);
    msg.id = 19U;
    msg.zoom = 113U;
    msg.action = 99U;

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
    msg.setTimeStamp(0.9974129182324146);
    msg.setSource(3872U);
    msg.setSourceEntity(221U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(150U);
    msg.id = 30U;
    msg.zoom = 105U;
    msg.action = 223U;

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
    msg.setTimeStamp(0.6915111830755086);
    msg.setSource(28624U);
    msg.setSourceEntity(213U);
    msg.setDestination(48660U);
    msg.setDestinationEntity(113U);
    msg.id = 214U;
    msg.zoom = 169U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.34813319096953044);
    msg.setSource(1103U);
    msg.setSourceEntity(32U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(21U);
    msg.id = 64U;
    msg.value = 0.6712268044112591;

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
    msg.setTimeStamp(0.7808471585947967);
    msg.setSource(36497U);
    msg.setSourceEntity(101U);
    msg.setDestination(39411U);
    msg.setDestinationEntity(0U);
    msg.id = 252U;
    msg.value = 0.32944344937217207;

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
    msg.setTimeStamp(0.3705873250859809);
    msg.setSource(25051U);
    msg.setSourceEntity(141U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(199U);
    msg.id = 139U;
    msg.value = 0.14028671272233995;

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
    msg.setTimeStamp(0.2223102366972869);
    msg.setSource(29176U);
    msg.setSourceEntity(14U);
    msg.setDestination(43635U);
    msg.setDestinationEntity(242U);
    msg.id = 100U;
    msg.value = 0.22414239461049157;

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
    msg.setTimeStamp(0.5818673385924625);
    msg.setSource(58682U);
    msg.setSourceEntity(32U);
    msg.setDestination(61841U);
    msg.setDestinationEntity(90U);
    msg.id = 188U;
    msg.value = 0.9879272748146638;

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
    msg.setTimeStamp(0.17481288102475);
    msg.setSource(34679U);
    msg.setSourceEntity(83U);
    msg.setDestination(57131U);
    msg.setDestinationEntity(183U);
    msg.id = 41U;
    msg.value = 0.6940648469229439;

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
    msg.setTimeStamp(0.10535592770274183);
    msg.setSource(59770U);
    msg.setSourceEntity(184U);
    msg.setDestination(64693U);
    msg.setDestinationEntity(13U);
    msg.id = 4U;
    msg.angle = 0.5021446265251752;

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
    msg.setTimeStamp(0.7482124738957502);
    msg.setSource(46489U);
    msg.setSourceEntity(124U);
    msg.setDestination(62053U);
    msg.setDestinationEntity(40U);
    msg.id = 148U;
    msg.angle = 0.08143353260238106;

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
    msg.setTimeStamp(0.8446098316415603);
    msg.setSource(56315U);
    msg.setSourceEntity(4U);
    msg.setDestination(52316U);
    msg.setDestinationEntity(139U);
    msg.id = 64U;
    msg.angle = 0.5200742401972739;

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
    msg.setTimeStamp(0.3084634215619815);
    msg.setSource(14103U);
    msg.setSourceEntity(225U);
    msg.setDestination(54404U);
    msg.setDestinationEntity(32U);
    msg.op = 22U;
    msg.actions.assign("WRKUYOUHHCGRWJMCRLZFGTUWSZMFNHMQEKIOZDLUWUJBCOJOYXIUDQQGSBAMOAHMTMIVWVPZAIBQTETEVXHYDROPQFLYSGHYQXLUSQPRZJEJKXHFDLASKJSCZLNDCNGGXEWTABXXHLRKVRKNNYORQPNLEAACODJDOTGDEVILTDPCPVYPHBZDTLTSEBZFKNXFIKYKEPNIEMFGOGNUBBRMRBMNWAIW");

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
    msg.setTimeStamp(0.2824560132819781);
    msg.setSource(64824U);
    msg.setSourceEntity(251U);
    msg.setDestination(45596U);
    msg.setDestinationEntity(179U);
    msg.op = 55U;
    msg.actions.assign("PWWSCVRVYAUPRFZQEYVJHRNKJVRDFNEGAYZUSDUBIKFGJUSSZKYSQEBVNHSEPUZUBKTYMZYPTEHBQEESQJVMDHLSLJKNMVZADIPXBNCMJDDWJIWTWQPLPRAFNXGHALBTBKCOIVXYKDQIFHMCLCFUOXXLJGRXDOKIDAVHQOWZNWEKLHAQNAM");

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
    msg.setTimeStamp(0.7225972484507597);
    msg.setSource(15605U);
    msg.setSourceEntity(150U);
    msg.setDestination(32379U);
    msg.setDestinationEntity(62U);
    msg.op = 199U;
    msg.actions.assign("OQLDGUXSAAIONKHVDHMBVRTVDVWICWZWPXFULXMJCE");

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
    msg.setTimeStamp(0.49774593022125935);
    msg.setSource(3722U);
    msg.setSourceEntity(3U);
    msg.setDestination(25888U);
    msg.setDestinationEntity(70U);
    msg.actions.assign("JYOEMSJNSOSTKKPDGKKJPMFMIJPKGAQTVDSSVFEZIQUJPRTXNFLOGYFMTLRRXVLOZEWODIANPQXHPLSSUMOQAATYMIWCQVPZNDLPZGHBMJINAWBCCOSDUBKQBKJWWRGCUXFBNK");

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
    msg.setTimeStamp(0.36303340155778785);
    msg.setSource(38266U);
    msg.setSourceEntity(106U);
    msg.setDestination(27693U);
    msg.setDestinationEntity(187U);
    msg.actions.assign("BPZRABOCDXFVNRDMPIPGPVSNQMOMOVHHVPCAAKKAKJXUDGMDQHCHVRUUMTCCSEGXAWDHRPFJJJPTEGALYNQRTESAZUKFWEOVAJPYIHKGNREYLWCNCGHHLXXWKQXEO");

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
    msg.setTimeStamp(0.1585385219550436);
    msg.setSource(15970U);
    msg.setSourceEntity(168U);
    msg.setDestination(48876U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("OEMCSDBGKJKURCUGZJNVSENLPDUQTYXTSQBIVLAYNGXDKDAMGKJGYBCZFSNQHOHMYNGJGPJJTVIFEAOSLFVSQDUAWFMNLZZEEORBQTOGYEZBOVIMRXIWFITTHYPTWDVKPCWAJSCPWKFCMNLWZMOMTXKUNQBXISZWARZCAIRYQHGIPPCXZCVLDKFEKUROLXLVQFURZBIHVLRWXEBJYOMPIYA");

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
    msg.setTimeStamp(0.1791219472634069);
    msg.setSource(53998U);
    msg.setSourceEntity(133U);
    msg.setDestination(53096U);
    msg.setDestinationEntity(130U);
    msg.button = 134U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.34028453074976184);
    msg.setSource(14380U);
    msg.setSourceEntity(76U);
    msg.setDestination(25125U);
    msg.setDestinationEntity(227U);
    msg.button = 73U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.14987652511247285);
    msg.setSource(23317U);
    msg.setSourceEntity(38U);
    msg.setDestination(41038U);
    msg.setDestinationEntity(154U);
    msg.button = 122U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.5283299832856312);
    msg.setSource(26342U);
    msg.setSourceEntity(216U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(148U);
    msg.op = 148U;
    msg.text.assign("ZBZYUWPGWQOKTQTITRNXGXRHFNZJHWPIVDYFIBCLMUOXJJZPLZHEVCMSQIBEQTDGU");

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
    msg.setTimeStamp(0.8877625005052643);
    msg.setSource(46815U);
    msg.setSourceEntity(16U);
    msg.setDestination(40494U);
    msg.setDestinationEntity(1U);
    msg.op = 154U;
    msg.text.assign("IBQRHHETWOWILVJRSUHVWMWXEWLNEVPTPUZCXTIEDJAGZKEMXCYFMPDEFNBADSGKDJIFGHZIDYPRDHIAMFERDQHNZQXUCNWBOAHBYPPGBZKTZAFJTOSMNPSUKDAVQEAKLCWAURGOMKVKCRLSBQVTQHTNIZOPGZXXUIFYNVKWYUSVXJGOFLUGZRCQETFJUYYAUOWCVKBLLNBBPNLXXLWGGJPYQISYMICDCH");

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
    msg.setTimeStamp(0.6169707461989503);
    msg.setSource(12248U);
    msg.setSourceEntity(253U);
    msg.setDestination(31922U);
    msg.setDestinationEntity(192U);
    msg.op = 218U;
    msg.text.assign("RDMLAOTCNBQNJVPARCGWECHVDCALHNAHPTLUEZLFDZMYZJXHWOXBVRBVZKWKEVFMEEAPQLSFJDNECBPOIQKXIJJIOVIXXBBXVYWPYAWTAACBXCQHOGVKMOUYSPKDDMSPGLZSLNUJBEUFSFCMWDGRCTUMDTJLSLKOJGMTTWUQHEI");

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
    msg.setTimeStamp(0.12180077003633405);
    msg.setSource(46069U);
    msg.setSourceEntity(102U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(155U);
    msg.op = 205U;
    msg.time_remain = 0.17703558166439126;
    msg.sched_time = 0.250841209916969;

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
    msg.setTimeStamp(0.9214359086952445);
    msg.setSource(47778U);
    msg.setSourceEntity(211U);
    msg.setDestination(14425U);
    msg.setDestinationEntity(98U);
    msg.op = 25U;
    msg.time_remain = 0.5123687288748089;
    msg.sched_time = 0.9960704856346194;

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
    msg.setTimeStamp(0.38850749922732375);
    msg.setSource(13557U);
    msg.setSourceEntity(113U);
    msg.setDestination(40480U);
    msg.setDestinationEntity(75U);
    msg.op = 202U;
    msg.time_remain = 0.3883502580510846;
    msg.sched_time = 0.43991425308112797;

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
    msg.setTimeStamp(0.13925664027648366);
    msg.setSource(23498U);
    msg.setSourceEntity(15U);
    msg.setDestination(43824U);
    msg.setDestinationEntity(99U);
    msg.name.assign("VWJTUJBRIHKBHIBYXQEMRDOMZHNTHBY");
    msg.op = 99U;
    msg.sched_time = 0.41156479581459326;

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
    msg.setTimeStamp(0.7645390160253074);
    msg.setSource(24499U);
    msg.setSourceEntity(67U);
    msg.setDestination(8645U);
    msg.setDestinationEntity(207U);
    msg.name.assign("AYWMRJKNKHI");
    msg.op = 68U;
    msg.sched_time = 0.6594021143459272;

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
    msg.setTimeStamp(0.364789968228185);
    msg.setSource(15398U);
    msg.setSourceEntity(60U);
    msg.setDestination(46307U);
    msg.setDestinationEntity(214U);
    msg.name.assign("WCUQBUXGKXDTRFTHZQCYDIEEZOXDDEFLHZNPGRBVOPOSZRRPUSYIHLCGAEQOFNEFIKJHJICIJWVZXCQLCW");
    msg.op = 206U;
    msg.sched_time = 0.4559281487536978;

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
    msg.setTimeStamp(0.9531428055208001);
    msg.setSource(20444U);
    msg.setSourceEntity(54U);
    msg.setDestination(48735U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.11647246704004255);
    msg.setSource(17546U);
    msg.setSourceEntity(95U);
    msg.setDestination(8631U);
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
    msg.setTimeStamp(0.11324598934774499);
    msg.setSource(10272U);
    msg.setSourceEntity(201U);
    msg.setDestination(44982U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.24112639871246733);
    msg.setSource(48685U);
    msg.setSourceEntity(249U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(101U);
    msg.name.assign("DQWOIRZUOBRMYAQNVSVPRSTOLOVCFPXABZXRNWYGSNLYCDJLDUQIHX");
    msg.state = 232U;

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
    msg.setTimeStamp(0.7057189754975974);
    msg.setSource(52819U);
    msg.setSourceEntity(114U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(70U);
    msg.name.assign("XFHXLNCILTDTNWTOITWETRGWSFRMICAAVQDOOVYJJUPRMFGKKPDLURAGJTKMOFSDCHHDVYDOLQAAZKOTMVUFGPLRXPYJUVCZRSDNCZHFAYIJKCFMWFSQUCDNAOMECMBSHSZTGXHVWWEUPMBJJQQUSPGSJRNYXWFBYCNWPHWOE");
    msg.state = 164U;

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
    msg.setTimeStamp(0.8503122758780111);
    msg.setSource(15316U);
    msg.setSourceEntity(137U);
    msg.setDestination(62992U);
    msg.setDestinationEntity(249U);
    msg.name.assign("JWKQVMSLFQAVAXDCNYSBIYYUXIBIXENBMIERCRIQIDYDFQIMRLFZMYBRGCUXZSXRRPHFAGSEHBZKKGDXNZVPJNUINVAQKTOTPTVWRGZWJJLXCHCAAFLHZWEIWJAKFQNNHYCMMODHEGCXPRQXOPJOPVQUEUSNSOLDMLSCLFGZHFRABKLKWQASGMPUFYPOTUBMLOEVTGMTDPLSYTXRHFSDEZHYDOCKDBACJUT");
    msg.state = 237U;

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
    msg.setTimeStamp(0.3830264878427364);
    msg.setSource(6303U);
    msg.setSourceEntity(54U);
    msg.setDestination(36584U);
    msg.setDestinationEntity(248U);
    msg.name.assign("CLUGVDJWIUMJMJYGONZHRCCJCTOVXIRDZOJMXSLWLRXDZPMSBBIHHBACJTIFLMKKEHS");
    msg.value = 89U;

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
    msg.setTimeStamp(0.45872463193561064);
    msg.setSource(49128U);
    msg.setSourceEntity(185U);
    msg.setDestination(64573U);
    msg.setDestinationEntity(218U);
    msg.name.assign("COSNUGHJYDTDZZSSEVIHFCTYOKENOCCJUJWDIGZRCEMPLHBJGKVAABBNLQYDLROHMAQWYXWSXBWKMWQQAUEQXICUKDKOOZPYXGPHNAOXPXFXFJMIUHTSPPZTYIQFIFUKVEVPXLRGSFAGMGCRVWTDYVDTDGQVURJXIHFRLGSTYMLHQTHKJVCAPNOKLPWN");
    msg.value = 58U;

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
    msg.setTimeStamp(0.988440919279148);
    msg.setSource(44833U);
    msg.setSourceEntity(183U);
    msg.setDestination(31953U);
    msg.setDestinationEntity(235U);
    msg.name.assign("ROPIUFNYNUXPPTCTJNAWXFNKTAVASYFKVQYESNZDZVJIGWWBBMPPVGWQVAJUAMEVBXEUYDKZZIAJONDWONQHWZORFLUMGSFRQERNCLSGHCCFKMCUWOQMTLFASVPHDVXKXCRYJGECVROHPIXXKURXYLTUZJ");
    msg.value = 203U;

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
    msg.setTimeStamp(0.18168204425829715);
    msg.setSource(63860U);
    msg.setSourceEntity(12U);
    msg.setDestination(21783U);
    msg.setDestinationEntity(154U);
    msg.name.assign("GZWHINHYUQSGFKCOTMUJVCVBSNEZVDRLYXLRLPWXWOXAFCX");

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
    msg.setTimeStamp(0.28828875957569977);
    msg.setSource(34085U);
    msg.setSourceEntity(8U);
    msg.setDestination(51874U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ECJGFAPVDOMTJJSMLANTUIWVTCFNHKCBHSQZELGMPSDCWHPSLIZMLGSYJGSEFSRBINXCXLYLICORJDFPILOEOEMNCPAADDPFIEXUNKJYOQOYFHHCQHMALFBIRWGPQHQGUMQXNRBPAYVQHTZPWZZXCLKIQHTDTYXRBDEGDRKAKLUBADOMNSQXXBWWUYOJZHRWYRIFZUQVYNTZFKSXMA");

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
    msg.setTimeStamp(0.3132824737762687);
    msg.setSource(16981U);
    msg.setSourceEntity(156U);
    msg.setDestination(39095U);
    msg.setDestinationEntity(147U);
    msg.name.assign("QPFANKGWUDXFBJKXUWBIFMYFQVELGQKTGHWNIKIDPYRSUUJLENIDQ");

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
    msg.setTimeStamp(0.6728007753347757);
    msg.setSource(29181U);
    msg.setSourceEntity(219U);
    msg.setDestination(52837U);
    msg.setDestinationEntity(129U);
    msg.name.assign("QGWZLWDWRYCKBZUTROCPZGVLGCEHAITSIUKOAXHXENPFEJJYUJMAQUEMOIYNDDYHTRRIVGWRVQEOFWOVEAMPIBJFZQYKIAMTLWBDNXKZAYNSPXGVNHAUAGWHPXFMQEIVHNBJGMAPHHQUYSQVPNHLEJHLGKRCEYJKTULZXTFSCDMTNBBKLTFGSXVSEILKPGQRBDFBRCUNMCVAXOBJDOVUXCLMSOIPFNY");
    msg.value = 42U;

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
    msg.setTimeStamp(0.9018637482631856);
    msg.setSource(34998U);
    msg.setSourceEntity(131U);
    msg.setDestination(38674U);
    msg.setDestinationEntity(16U);
    msg.name.assign("OFCWTQJEXEKSBEJBDOIUYLMVNJCLBUJIMZNQLOWHDQPAWQVYCLBWCBSPF");
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
    msg.setTimeStamp(0.15901500168769478);
    msg.setSource(17315U);
    msg.setSourceEntity(32U);
    msg.setDestination(55472U);
    msg.setDestinationEntity(62U);
    msg.name.assign("EOMBEVETXCZQBLSUHXHGKIPKJKICUCXQEWVCJFAMRNOOVJVSTINEBVWQIPNPKYESWAAWJNHSTZT");
    msg.value = 96U;

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
    msg.setTimeStamp(0.20877604127205251);
    msg.setSource(45887U);
    msg.setSourceEntity(116U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(173U);
    msg.id = 92U;
    msg.period = 936119121U;
    msg.duty_cycle = 3200592887U;

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
    msg.setTimeStamp(0.7104123460459206);
    msg.setSource(48826U);
    msg.setSourceEntity(177U);
    msg.setDestination(24038U);
    msg.setDestinationEntity(12U);
    msg.id = 81U;
    msg.period = 1381835036U;
    msg.duty_cycle = 3525392440U;

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
    msg.setTimeStamp(0.18828306827692476);
    msg.setSource(46850U);
    msg.setSourceEntity(148U);
    msg.setDestination(16385U);
    msg.setDestinationEntity(254U);
    msg.id = 68U;
    msg.period = 2657803349U;
    msg.duty_cycle = 1630912397U;

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
    msg.setTimeStamp(0.5883025303055001);
    msg.setSource(2687U);
    msg.setSourceEntity(134U);
    msg.setDestination(7636U);
    msg.setDestinationEntity(88U);
    msg.id = 211U;
    msg.period = 1578989954U;
    msg.duty_cycle = 2033095804U;

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
    msg.setTimeStamp(0.8785574083599559);
    msg.setSource(6309U);
    msg.setSourceEntity(233U);
    msg.setDestination(30075U);
    msg.setDestinationEntity(210U);
    msg.id = 187U;
    msg.period = 281586131U;
    msg.duty_cycle = 1064870873U;

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
    msg.setTimeStamp(0.25869930973750543);
    msg.setSource(5860U);
    msg.setSourceEntity(212U);
    msg.setDestination(52217U);
    msg.setDestinationEntity(77U);
    msg.id = 161U;
    msg.period = 160640730U;
    msg.duty_cycle = 3477708671U;

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
    msg.setTimeStamp(0.3041905353556599);
    msg.setSource(19144U);
    msg.setSourceEntity(141U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.6529779731982894;
    msg.lon = 0.6477422788061379;
    msg.height = 0.33889403956295294;
    msg.x = 0.5014115220890034;
    msg.y = 0.040102329378602475;
    msg.z = 0.42375430012271853;
    msg.phi = 0.8356790909028029;
    msg.theta = 0.9949373388443817;
    msg.psi = 0.8905957242471447;
    msg.u = 0.865834019407319;
    msg.v = 0.8871950139382673;
    msg.w = 0.7343866752646807;
    msg.vx = 0.017220365170377727;
    msg.vy = 0.9876332480155303;
    msg.vz = 0.39919208142982643;
    msg.p = 0.009416349187101658;
    msg.q = 0.050429737970892896;
    msg.r = 0.8678437303481377;
    msg.depth = 0.8869335614152383;
    msg.alt = 0.5618155942320153;

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
    msg.setTimeStamp(0.8618965641461916);
    msg.setSource(56087U);
    msg.setSourceEntity(250U);
    msg.setDestination(43799U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.4053140712474169;
    msg.lon = 0.09420722895109612;
    msg.height = 0.7775160791724589;
    msg.x = 0.7231675230328255;
    msg.y = 0.8004672072784472;
    msg.z = 0.297227157285591;
    msg.phi = 0.448365543064392;
    msg.theta = 0.38445125984127415;
    msg.psi = 0.9834326262407252;
    msg.u = 0.8452326495505734;
    msg.v = 0.3684810526745075;
    msg.w = 0.18707426217885803;
    msg.vx = 0.9554868203635531;
    msg.vy = 0.49837045649727263;
    msg.vz = 0.491070735552409;
    msg.p = 0.91058356058447;
    msg.q = 0.9370739372903565;
    msg.r = 0.6761928610375068;
    msg.depth = 0.10317252761525553;
    msg.alt = 0.7454384572694397;

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
    msg.setTimeStamp(0.29954538184675705);
    msg.setSource(19651U);
    msg.setSourceEntity(195U);
    msg.setDestination(58252U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.3168492316400825;
    msg.lon = 0.5142502874525117;
    msg.height = 0.4453907651006772;
    msg.x = 0.7590132927479428;
    msg.y = 0.3193203021411267;
    msg.z = 0.0562701908433626;
    msg.phi = 0.9224274643930941;
    msg.theta = 0.10350371122621649;
    msg.psi = 0.544401606286462;
    msg.u = 0.07278127517592803;
    msg.v = 0.1686111675219737;
    msg.w = 0.22195100269074675;
    msg.vx = 0.48563251354007053;
    msg.vy = 0.41960463324584973;
    msg.vz = 0.14576431436513138;
    msg.p = 0.6010367836652935;
    msg.q = 0.6373412416009866;
    msg.r = 0.797613387199105;
    msg.depth = 0.17477089991857453;
    msg.alt = 0.23594039001848333;

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
    msg.setTimeStamp(0.6016099247265116);
    msg.setSource(59720U);
    msg.setSourceEntity(23U);
    msg.setDestination(37959U);
    msg.setDestinationEntity(95U);
    msg.x = 0.477243428867447;
    msg.y = 0.7042515689026909;
    msg.z = 0.29683188787452386;

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
    msg.setTimeStamp(0.7776122644740685);
    msg.setSource(20935U);
    msg.setSourceEntity(243U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(32U);
    msg.x = 0.2870283706101291;
    msg.y = 0.29948042889935256;
    msg.z = 0.17382986539005918;

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
    msg.setTimeStamp(0.26079238328656884);
    msg.setSource(58085U);
    msg.setSourceEntity(109U);
    msg.setDestination(49457U);
    msg.setDestinationEntity(36U);
    msg.x = 0.8480077401153634;
    msg.y = 0.9752648170104823;
    msg.z = 0.14117879737362093;

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
    msg.setTimeStamp(0.4133472268130962);
    msg.setSource(25374U);
    msg.setSourceEntity(11U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(168U);
    msg.value = 0.4424381181127267;

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
    msg.setTimeStamp(0.01325700686526654);
    msg.setSource(39453U);
    msg.setSourceEntity(231U);
    msg.setDestination(60307U);
    msg.setDestinationEntity(37U);
    msg.value = 0.17436976540782323;

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
    msg.setTimeStamp(0.48761164581364236);
    msg.setSource(37883U);
    msg.setSourceEntity(133U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(28U);
    msg.value = 0.6319495829688305;

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
    msg.setTimeStamp(0.5457254862499822);
    msg.setSource(57277U);
    msg.setSourceEntity(101U);
    msg.setDestination(38697U);
    msg.setDestinationEntity(67U);
    msg.value = 0.9328687717771152;

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
    msg.setTimeStamp(0.6727306302702081);
    msg.setSource(15376U);
    msg.setSourceEntity(123U);
    msg.setDestination(59658U);
    msg.setDestinationEntity(15U);
    msg.value = 0.40685808043072036;

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
    msg.setTimeStamp(0.868560550351019);
    msg.setSource(22470U);
    msg.setSourceEntity(126U);
    msg.setDestination(8599U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9838565131964624;

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
    msg.setTimeStamp(0.6601174994393976);
    msg.setSource(38197U);
    msg.setSourceEntity(12U);
    msg.setDestination(34579U);
    msg.setDestinationEntity(160U);
    msg.x = 0.3608524161083766;
    msg.y = 0.527337773697185;
    msg.z = 0.7025886649062455;
    msg.phi = 0.03202191263860743;
    msg.theta = 0.10256128997092973;
    msg.psi = 0.8258923063399001;
    msg.p = 0.7861148311385459;
    msg.q = 0.7170960134673445;
    msg.r = 0.49329937501959786;
    msg.u = 0.7126431141025815;
    msg.v = 0.1804302417274618;
    msg.w = 0.11780849124140325;
    msg.bias_psi = 0.3244041412744523;
    msg.bias_r = 0.7597117669291114;

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
    msg.setTimeStamp(0.7927202920194822);
    msg.setSource(61547U);
    msg.setSourceEntity(133U);
    msg.setDestination(6302U);
    msg.setDestinationEntity(230U);
    msg.x = 0.4171724985966635;
    msg.y = 0.9099413753109198;
    msg.z = 0.0015041755251340438;
    msg.phi = 0.03253220481151409;
    msg.theta = 0.8785210987108527;
    msg.psi = 0.42171068813044166;
    msg.p = 0.8063714823038017;
    msg.q = 0.0886598573856715;
    msg.r = 0.721654482181281;
    msg.u = 0.9893864604810646;
    msg.v = 0.6937990319743921;
    msg.w = 0.515757423178568;
    msg.bias_psi = 0.942428745328834;
    msg.bias_r = 0.038581022793889086;

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
    msg.setTimeStamp(0.05638298414290277);
    msg.setSource(20555U);
    msg.setSourceEntity(115U);
    msg.setDestination(32084U);
    msg.setDestinationEntity(42U);
    msg.x = 0.7116942140497702;
    msg.y = 0.5242841482095302;
    msg.z = 0.5097418148849067;
    msg.phi = 0.2634471274673983;
    msg.theta = 0.39846350715220946;
    msg.psi = 0.4482632681673723;
    msg.p = 0.8427047728823464;
    msg.q = 0.521763292998399;
    msg.r = 0.011985375449750646;
    msg.u = 0.5130896681331947;
    msg.v = 0.3972613908814815;
    msg.w = 0.9084609402236481;
    msg.bias_psi = 0.8254286425231369;
    msg.bias_r = 0.8839282037617229;

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
    msg.setTimeStamp(0.9837574726401991);
    msg.setSource(61773U);
    msg.setSourceEntity(22U);
    msg.setDestination(65184U);
    msg.setDestinationEntity(63U);
    msg.bias_psi = 0.4464736612782393;
    msg.bias_r = 0.9260557284383593;
    msg.cog = 0.17500904023039043;
    msg.cyaw = 0.534047236079135;
    msg.lbl_rej_level = 0.5251132664714628;
    msg.gps_rej_level = 0.11034591866572097;
    msg.custom_x = 0.523858673148751;
    msg.custom_y = 0.9675246403630423;
    msg.custom_z = 0.7245483544777335;

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
    msg.setTimeStamp(0.6601765181537944);
    msg.setSource(49831U);
    msg.setSourceEntity(135U);
    msg.setDestination(6424U);
    msg.setDestinationEntity(237U);
    msg.bias_psi = 0.4773208190417825;
    msg.bias_r = 0.6238057660367146;
    msg.cog = 0.9641233987282709;
    msg.cyaw = 0.6580370307889957;
    msg.lbl_rej_level = 0.5043472040841869;
    msg.gps_rej_level = 0.6469049533221451;
    msg.custom_x = 0.21062415022524295;
    msg.custom_y = 0.8265527150426114;
    msg.custom_z = 0.5716309252969872;

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
    msg.setTimeStamp(0.9776122120182686);
    msg.setSource(58406U);
    msg.setSourceEntity(115U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(76U);
    msg.bias_psi = 0.5133059258971463;
    msg.bias_r = 0.548417988102152;
    msg.cog = 0.05449688252723606;
    msg.cyaw = 0.5548685602263613;
    msg.lbl_rej_level = 0.410604214261011;
    msg.gps_rej_level = 0.3081348096671408;
    msg.custom_x = 0.31696370868440404;
    msg.custom_y = 0.1477834835451236;
    msg.custom_z = 0.1283867226088854;

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
    msg.setTimeStamp(0.0425478240724152);
    msg.setSource(31001U);
    msg.setSourceEntity(56U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(221U);
    msg.utc_time = 0.5202465649690038;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.6926336665619567);
    msg.setSource(4436U);
    msg.setSourceEntity(249U);
    msg.setDestination(40556U);
    msg.setDestinationEntity(207U);
    msg.utc_time = 0.9274057687313504;
    msg.reason = 253U;

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
    msg.setTimeStamp(0.35135165456392625);
    msg.setSource(51872U);
    msg.setSourceEntity(178U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(1U);
    msg.utc_time = 0.6792187016929854;
    msg.reason = 182U;

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
    msg.setTimeStamp(0.635606711739187);
    msg.setSource(42227U);
    msg.setSourceEntity(150U);
    msg.setDestination(50541U);
    msg.setDestinationEntity(2U);
    msg.id = 154U;
    msg.range = 0.26687732320832247;
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
    msg.setTimeStamp(0.8215411887695996);
    msg.setSource(2677U);
    msg.setSourceEntity(105U);
    msg.setDestination(22361U);
    msg.setDestinationEntity(222U);
    msg.id = 253U;
    msg.range = 0.46371812268391954;
    msg.acceptance = 189U;

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
    msg.setTimeStamp(0.18483593410623533);
    msg.setSource(64669U);
    msg.setSourceEntity(19U);
    msg.setDestination(43611U);
    msg.setDestinationEntity(123U);
    msg.id = 172U;
    msg.range = 0.9064964815870963;
    msg.acceptance = 199U;

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
    msg.setTimeStamp(0.009740868020410742);
    msg.setSource(56192U);
    msg.setSourceEntity(115U);
    msg.setDestination(28280U);
    msg.setDestinationEntity(128U);
    msg.type = 219U;
    msg.reason = 209U;
    msg.value = 0.12248154543354384;
    msg.timestep = 0.5767266023419141;

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
    msg.setTimeStamp(0.9678364769591922);
    msg.setSource(44808U);
    msg.setSourceEntity(220U);
    msg.setDestination(33188U);
    msg.setDestinationEntity(103U);
    msg.type = 226U;
    msg.reason = 154U;
    msg.value = 0.7568359945663784;
    msg.timestep = 0.09284129616725612;

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
    msg.setTimeStamp(0.8512955143129592);
    msg.setSource(28649U);
    msg.setSourceEntity(133U);
    msg.setDestination(52096U);
    msg.setDestinationEntity(134U);
    msg.type = 175U;
    msg.reason = 183U;
    msg.value = 0.1575497216743349;
    msg.timestep = 0.2259928070970707;

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
    msg.setTimeStamp(0.3256848426350035);
    msg.setSource(38988U);
    msg.setSourceEntity(52U);
    msg.setDestination(12766U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.11100431368585817);
    msg.setSource(3357U);
    msg.setSourceEntity(7U);
    msg.setDestination(488U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.47681467837209335);
    msg.setSource(8574U);
    msg.setSourceEntity(243U);
    msg.setDestination(9518U);
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
    msg.setTimeStamp(0.36905661336528073);
    msg.setSource(64361U);
    msg.setSourceEntity(33U);
    msg.setDestination(6488U);
    msg.setDestinationEntity(215U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GENVUAPUJFUJAPAHKOINBHTRDUPLQOMWTWZMCBGYXKBNNKCFAASZUHVTHCULNAZYZCOAHTJAYQOKDHDJSTBPNWUVTTEMIIYHSIMQXISIVRPISPBNCBDIRWJQDEWKGJLVYGRJVFXBOFIKLHGKWXNPPIOYZWEBOJAXZGMKTOEWGSAEQVLKFLW");
    tmp_msg_0.lat = 0.7138934799175664;
    tmp_msg_0.lon = 0.9791080558100134;
    tmp_msg_0.depth = 0.8455907110032891;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 158U;
    tmp_msg_0.transponder_delay = 160U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.14176013177132463;
    msg.y = 0.36544057836894883;
    msg.var_x = 0.46583900116839083;
    msg.var_y = 0.88415441726273;
    msg.distance = 0.5306609426942297;

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
    msg.setTimeStamp(0.47437891998168236);
    msg.setSource(32581U);
    msg.setSourceEntity(191U);
    msg.setDestination(20136U);
    msg.setDestinationEntity(92U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MKDXWEGDMCYSZONBRYZRNUFIFTIZMYWRKMESEJTPILDKVWZMAFMQRPRJQCZBIQTORPLHCZRNERALUJGQVOCNZCCSOSYDFSHKPDETWYLXMVWYECRPSBOYQAMJSVJGKFYUKCDFFXHQSBABPTGFLTKYIEEWVBDELUAAYJZJMLUHUIXOONBVTGAFGATKROXVXVWHCPSXPGHQNWNDGUHEOKIGOXWZUPGJHIIDKLBVQDMAXCNUTLHBHUQIJFAV");
    tmp_msg_0.lat = 0.9483067087131549;
    tmp_msg_0.lon = 0.8209808343286673;
    tmp_msg_0.depth = 0.889671628964225;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 175U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5152936205305937;
    msg.y = 0.54891378195619;
    msg.var_x = 0.7122119214417638;
    msg.var_y = 0.7278030596657153;
    msg.distance = 0.06519999553483846;

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
    msg.setTimeStamp(0.5587368471613221);
    msg.setSource(43634U);
    msg.setSourceEntity(240U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(183U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("THCEAUOZUFXXPKNMBGQQBFPMGGYCWWEZOQQKHLNEPYCMDSFEIQRDAIXPTTLQEVZIMHCHADNHQIUOARWMPFDTVDIFLOSXSRTZTBNGSSSMOYYHHKPJCITXNWFFWXNMVDJBNJCNFMYXUVBUCVTHAWUAYQGGQCELVJDEKSYIEYFBLBRHZPMAVSLOROFWAGZNBUJWJGTDJZDBVGQGPWKRRBKDIRZVHISJRZOWLOLUYCJNEVXLKTOKMK");
    tmp_msg_0.lat = 0.06065602132403336;
    tmp_msg_0.lon = 0.2693465899413696;
    tmp_msg_0.depth = 0.7896547229227884;
    tmp_msg_0.query_channel = 232U;
    tmp_msg_0.reply_channel = 117U;
    tmp_msg_0.transponder_delay = 114U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5381128363636564;
    msg.y = 0.9835183729053147;
    msg.var_x = 0.7930478541691245;
    msg.var_y = 0.6959820145911602;
    msg.distance = 0.7578739756264522;

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
    msg.setTimeStamp(0.6727441678491454);
    msg.setSource(19246U);
    msg.setSourceEntity(53U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(241U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.8042947368899414);
    msg.setSource(28172U);
    msg.setSourceEntity(163U);
    msg.setDestination(28612U);
    msg.setDestinationEntity(7U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.33277799505210004);
    msg.setSource(33441U);
    msg.setSourceEntity(58U);
    msg.setDestination(48753U);
    msg.setDestinationEntity(1U);
    msg.state = 141U;

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
    msg.setTimeStamp(0.6163171489961982);
    msg.setSource(30539U);
    msg.setSourceEntity(89U);
    msg.setDestination(8572U);
    msg.setDestinationEntity(178U);
    msg.x = 0.027428576017952122;
    msg.y = 0.6891866573670916;
    msg.z = 0.40437088164624335;

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
    msg.setTimeStamp(0.14943705388619288);
    msg.setSource(50645U);
    msg.setSourceEntity(37U);
    msg.setDestination(30490U);
    msg.setDestinationEntity(70U);
    msg.x = 0.08379544489758306;
    msg.y = 0.10844360379439266;
    msg.z = 0.01307475564569327;

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
    msg.setTimeStamp(0.8630407588502986);
    msg.setSource(26226U);
    msg.setSourceEntity(194U);
    msg.setDestination(64768U);
    msg.setDestinationEntity(81U);
    msg.x = 0.7386832669893632;
    msg.y = 0.01270913878797908;
    msg.z = 0.8059841626914029;

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
    msg.setTimeStamp(0.46733745261139537);
    msg.setSource(26474U);
    msg.setSourceEntity(251U);
    msg.setDestination(28828U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5461363931400325;

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
    msg.setTimeStamp(0.05996288348279444);
    msg.setSource(38194U);
    msg.setSourceEntity(102U);
    msg.setDestination(18862U);
    msg.setDestinationEntity(190U);
    msg.value = 0.2705723631686616;

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
    msg.setTimeStamp(0.4353706465233034);
    msg.setSource(5944U);
    msg.setSourceEntity(45U);
    msg.setDestination(330U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6619152565713782;

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
    msg.setTimeStamp(0.6499164014701689);
    msg.setSource(63599U);
    msg.setSourceEntity(50U);
    msg.setDestination(33920U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4540836403541023;
    msg.z_units = 98U;

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
    msg.setTimeStamp(0.3414187126438605);
    msg.setSource(39049U);
    msg.setSourceEntity(216U);
    msg.setDestination(4195U);
    msg.setDestinationEntity(138U);
    msg.value = 0.7492107850189615;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.7299062910079834);
    msg.setSource(26211U);
    msg.setSourceEntity(228U);
    msg.setDestination(34699U);
    msg.setDestinationEntity(155U);
    msg.value = 0.6797156829424127;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.9078254319874265);
    msg.setSource(15742U);
    msg.setSourceEntity(176U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(7U);
    msg.value = 0.9557963884576436;
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
    msg.setTimeStamp(0.07334451119616403);
    msg.setSource(26940U);
    msg.setSourceEntity(126U);
    msg.setDestination(24085U);
    msg.setDestinationEntity(100U);
    msg.value = 0.6855353645053112;
    msg.speed_units = 161U;

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
    msg.setTimeStamp(0.38755831875886804);
    msg.setSource(18233U);
    msg.setSourceEntity(153U);
    msg.setDestination(19862U);
    msg.setDestinationEntity(209U);
    msg.value = 0.18997951606133345;
    msg.speed_units = 61U;

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
    msg.setTimeStamp(0.6764784658595526);
    msg.setSource(21365U);
    msg.setSourceEntity(110U);
    msg.setDestination(16281U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0682279184418112;

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
    msg.setTimeStamp(0.22676801542089187);
    msg.setSource(31790U);
    msg.setSourceEntity(43U);
    msg.setDestination(8833U);
    msg.setDestinationEntity(201U);
    msg.value = 0.15002586207097568;

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
    msg.setTimeStamp(0.20009932291305843);
    msg.setSource(47678U);
    msg.setSourceEntity(17U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(205U);
    msg.value = 0.6916837682122484;

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
    msg.setTimeStamp(0.15797687131793037);
    msg.setSource(22781U);
    msg.setSourceEntity(68U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(219U);
    msg.value = 0.33338346722821943;

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
    msg.setTimeStamp(0.5661170522798363);
    msg.setSource(19398U);
    msg.setSourceEntity(118U);
    msg.setDestination(49808U);
    msg.setDestinationEntity(65U);
    msg.value = 0.338326533564017;

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
    msg.setTimeStamp(0.0798741648488881);
    msg.setSource(40436U);
    msg.setSourceEntity(220U);
    msg.setDestination(12511U);
    msg.setDestinationEntity(3U);
    msg.value = 0.42198927532660924;

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
    msg.setTimeStamp(0.29567742310840084);
    msg.setSource(44447U);
    msg.setSourceEntity(46U);
    msg.setDestination(14891U);
    msg.setDestinationEntity(244U);
    msg.value = 0.03674463249578408;

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
    msg.setTimeStamp(0.05306564690836657);
    msg.setSource(33692U);
    msg.setSourceEntity(100U);
    msg.setDestination(58845U);
    msg.setDestinationEntity(210U);
    msg.value = 0.34904593938707995;

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
    msg.setTimeStamp(0.5497279730690189);
    msg.setSource(28587U);
    msg.setSourceEntity(115U);
    msg.setDestination(42226U);
    msg.setDestinationEntity(154U);
    msg.value = 0.9169904306161316;

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
    msg.setTimeStamp(0.9506146825219826);
    msg.setSource(34363U);
    msg.setSourceEntity(171U);
    msg.setDestination(8847U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 3281221659U;
    msg.start_lat = 0.8647005354044589;
    msg.start_lon = 0.9529506351007675;
    msg.start_z = 0.7293688569857436;
    msg.start_z_units = 31U;
    msg.end_lat = 0.5441523438338334;
    msg.end_lon = 0.4292736569548573;
    msg.end_z = 0.4565406893756373;
    msg.end_z_units = 24U;
    msg.speed = 0.6725926678664462;
    msg.speed_units = 247U;
    msg.lradius = 0.27461794131545336;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.721625130154343);
    msg.setSource(60540U);
    msg.setSourceEntity(61U);
    msg.setDestination(15394U);
    msg.setDestinationEntity(94U);
    msg.path_ref = 744867304U;
    msg.start_lat = 0.6332362258804716;
    msg.start_lon = 0.8473902634046552;
    msg.start_z = 0.04516545739825806;
    msg.start_z_units = 165U;
    msg.end_lat = 0.024743618943975587;
    msg.end_lon = 0.5784568878391876;
    msg.end_z = 0.7980406302097519;
    msg.end_z_units = 242U;
    msg.speed = 0.16025813615932516;
    msg.speed_units = 170U;
    msg.lradius = 0.32291234719589057;
    msg.flags = 116U;

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
    msg.setTimeStamp(0.6263275999709442);
    msg.setSource(1094U);
    msg.setSourceEntity(174U);
    msg.setDestination(7278U);
    msg.setDestinationEntity(35U);
    msg.path_ref = 621676316U;
    msg.start_lat = 0.6557724264193237;
    msg.start_lon = 0.6941322667042538;
    msg.start_z = 0.5973688324476766;
    msg.start_z_units = 37U;
    msg.end_lat = 0.551798355137939;
    msg.end_lon = 0.9466061563768505;
    msg.end_z = 0.6034186405652016;
    msg.end_z_units = 191U;
    msg.speed = 0.7726419018325321;
    msg.speed_units = 158U;
    msg.lradius = 0.95049204765295;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.7433714724001242);
    msg.setSource(20702U);
    msg.setSourceEntity(131U);
    msg.setDestination(64171U);
    msg.setDestinationEntity(47U);
    msg.x = 0.8917584365416923;
    msg.y = 0.02605975465790178;
    msg.z = 0.14041476940077824;
    msg.k = 0.6595040871649482;
    msg.m = 0.42772118209581234;
    msg.n = 0.7102641893854157;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.6731576085568161);
    msg.setSource(10238U);
    msg.setSourceEntity(20U);
    msg.setDestination(46571U);
    msg.setDestinationEntity(225U);
    msg.x = 0.41222517230901756;
    msg.y = 0.6342908020794837;
    msg.z = 0.8172841375047424;
    msg.k = 0.2335580728955583;
    msg.m = 0.02580608125197259;
    msg.n = 0.3957408502632034;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.06902220969178996);
    msg.setSource(16851U);
    msg.setSourceEntity(226U);
    msg.setDestination(4615U);
    msg.setDestinationEntity(91U);
    msg.x = 0.39136473816539974;
    msg.y = 0.30705389061103483;
    msg.z = 0.8409044207946097;
    msg.k = 0.054294565298419695;
    msg.m = 0.6218076933857362;
    msg.n = 0.9494438594817548;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.8948465032850438);
    msg.setSource(10309U);
    msg.setSourceEntity(144U);
    msg.setDestination(15143U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5154047358290021;

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
    msg.setTimeStamp(0.9353426703773015);
    msg.setSource(55458U);
    msg.setSourceEntity(30U);
    msg.setDestination(34783U);
    msg.setDestinationEntity(33U);
    msg.value = 0.37568955267821225;

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
    msg.setTimeStamp(0.358923111635445);
    msg.setSource(23445U);
    msg.setSourceEntity(77U);
    msg.setDestination(26396U);
    msg.setDestinationEntity(65U);
    msg.value = 0.06923290447546693;

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
    msg.setTimeStamp(0.953744922131161);
    msg.setSource(14998U);
    msg.setSourceEntity(209U);
    msg.setDestination(24566U);
    msg.setDestinationEntity(39U);
    msg.u = 0.7915019633156364;
    msg.v = 0.9062799021642118;
    msg.w = 0.18496120534269544;
    msg.p = 0.8892873046074048;
    msg.q = 0.9610255980933498;
    msg.r = 0.7465014335025029;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.23320584634812902);
    msg.setSource(39518U);
    msg.setSourceEntity(81U);
    msg.setDestination(35478U);
    msg.setDestinationEntity(56U);
    msg.u = 0.36530546062400215;
    msg.v = 0.9608652930370802;
    msg.w = 0.5903384354538027;
    msg.p = 0.762359740401787;
    msg.q = 0.013375470280981738;
    msg.r = 0.05042076931245043;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.08272775387698339);
    msg.setSource(35501U);
    msg.setSourceEntity(193U);
    msg.setDestination(35961U);
    msg.setDestinationEntity(226U);
    msg.u = 0.3595476829929998;
    msg.v = 0.03645525659041382;
    msg.w = 0.6342734314830341;
    msg.p = 0.32369366961564805;
    msg.q = 0.07138935805586033;
    msg.r = 0.989011763285281;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.18472200639110803);
    msg.setSource(34615U);
    msg.setSourceEntity(25U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(26U);
    msg.path_ref = 1061922548U;
    msg.start_lat = 0.16463573061032166;
    msg.start_lon = 0.8367830361199213;
    msg.start_z = 0.12088513141453994;
    msg.start_z_units = 141U;
    msg.end_lat = 0.6927225498862064;
    msg.end_lon = 0.6736670745887331;
    msg.end_z = 0.2689399411740262;
    msg.end_z_units = 165U;
    msg.lradius = 0.6571738562942004;
    msg.flags = 1U;
    msg.x = 0.08167932497455488;
    msg.y = 0.017872718193239323;
    msg.z = 0.12191319402758982;
    msg.vx = 0.18309974579642352;
    msg.vy = 0.13236671492567187;
    msg.vz = 0.05876255608840475;
    msg.course_error = 0.9468211313874508;
    msg.eta = 65391U;

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
    msg.setTimeStamp(0.8602204400342269);
    msg.setSource(51107U);
    msg.setSourceEntity(15U);
    msg.setDestination(53916U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 414260379U;
    msg.start_lat = 0.24351221342587037;
    msg.start_lon = 0.3913065864943722;
    msg.start_z = 0.7836239470536303;
    msg.start_z_units = 31U;
    msg.end_lat = 0.5361055246702441;
    msg.end_lon = 0.05117451539288509;
    msg.end_z = 0.9793601087520821;
    msg.end_z_units = 28U;
    msg.lradius = 0.41335509480393484;
    msg.flags = 12U;
    msg.x = 0.2770416123921966;
    msg.y = 0.6089968608811372;
    msg.z = 0.8788121707658492;
    msg.vx = 0.054599184084735075;
    msg.vy = 0.21229620278264716;
    msg.vz = 0.5744906140400838;
    msg.course_error = 0.6899306730662819;
    msg.eta = 55281U;

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
    msg.setTimeStamp(0.7788331278152333);
    msg.setSource(29329U);
    msg.setSourceEntity(141U);
    msg.setDestination(29579U);
    msg.setDestinationEntity(177U);
    msg.path_ref = 1630184351U;
    msg.start_lat = 0.13137568594308746;
    msg.start_lon = 0.24633876084061312;
    msg.start_z = 0.8239116795119271;
    msg.start_z_units = 178U;
    msg.end_lat = 0.7284198809079313;
    msg.end_lon = 0.8970140868499525;
    msg.end_z = 0.7883160623869154;
    msg.end_z_units = 214U;
    msg.lradius = 0.9648179346287101;
    msg.flags = 142U;
    msg.x = 0.9434745889964324;
    msg.y = 0.050630619134625854;
    msg.z = 0.9041025716097988;
    msg.vx = 0.2427788104521098;
    msg.vy = 0.15524328395892095;
    msg.vz = 0.35699482376298564;
    msg.course_error = 0.5607683143884038;
    msg.eta = 50643U;

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
    msg.setTimeStamp(0.053734188733860266);
    msg.setSource(59124U);
    msg.setSourceEntity(191U);
    msg.setDestination(38791U);
    msg.setDestinationEntity(33U);
    msg.k = 0.3998331025092283;
    msg.m = 0.009133476472434343;
    msg.n = 0.14289261161810696;

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
    msg.setTimeStamp(0.4866402585878369);
    msg.setSource(44415U);
    msg.setSourceEntity(172U);
    msg.setDestination(10472U);
    msg.setDestinationEntity(138U);
    msg.k = 0.5693707988443191;
    msg.m = 0.07912856949090807;
    msg.n = 0.7198803553343522;

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
    msg.setTimeStamp(0.2737593619733827);
    msg.setSource(17951U);
    msg.setSourceEntity(248U);
    msg.setDestination(34535U);
    msg.setDestinationEntity(191U);
    msg.k = 0.33763287474174875;
    msg.m = 0.7401873012437914;
    msg.n = 0.12004368356510675;

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
    msg.setTimeStamp(0.21775127689318774);
    msg.setSource(61687U);
    msg.setSourceEntity(60U);
    msg.setDestination(19935U);
    msg.setDestinationEntity(195U);
    msg.p = 0.812280100529061;
    msg.i = 0.19619432936091885;
    msg.d = 0.32270562616270115;
    msg.a = 0.2793954499260932;

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
    msg.setTimeStamp(0.02771792808152118);
    msg.setSource(7399U);
    msg.setSourceEntity(53U);
    msg.setDestination(1208U);
    msg.setDestinationEntity(162U);
    msg.p = 0.10654968349004623;
    msg.i = 0.5832506542323577;
    msg.d = 0.20171153181327206;
    msg.a = 0.40062015389837846;

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
    msg.setTimeStamp(0.6201007511513527);
    msg.setSource(42592U);
    msg.setSourceEntity(180U);
    msg.setDestination(19543U);
    msg.setDestinationEntity(11U);
    msg.p = 0.6941224144764058;
    msg.i = 0.31867597512649015;
    msg.d = 0.2574940362052679;
    msg.a = 0.7504900917180747;

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
    msg.setTimeStamp(0.4577036547159592);
    msg.setSource(37324U);
    msg.setSourceEntity(146U);
    msg.setDestination(56578U);
    msg.setDestinationEntity(133U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.170446961580781);
    msg.setSource(10809U);
    msg.setSourceEntity(85U);
    msg.setDestination(6270U);
    msg.setDestinationEntity(237U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.04374197095699728);
    msg.setSource(53626U);
    msg.setSourceEntity(71U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(68U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.4020712834941268);
    msg.setSource(33971U);
    msg.setSourceEntity(104U);
    msg.setDestination(23622U);
    msg.setDestinationEntity(239U);
    msg.timeout = 48220U;
    msg.lat = 0.7509662035653506;
    msg.lon = 0.8569583708967534;
    msg.z = 0.40614738735367795;
    msg.z_units = 128U;
    msg.speed = 0.905726915968772;
    msg.speed_units = 50U;
    msg.roll = 0.5627591610314033;
    msg.pitch = 0.6595654790774156;
    msg.yaw = 0.715765234046029;
    msg.custom.assign("TQBZLFOFIWHFSYIXBKOJHUGTLQGHVWPQSYUNETNWGXGANLQZNKXZMQEELCYRQOVVTOTSZRBSCSIADJKYJ");

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
    msg.setTimeStamp(0.2496942511310125);
    msg.setSource(62719U);
    msg.setSourceEntity(33U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(36U);
    msg.timeout = 44260U;
    msg.lat = 0.49692311597594074;
    msg.lon = 0.32476701163625543;
    msg.z = 0.08150114311372758;
    msg.z_units = 250U;
    msg.speed = 0.06820688778700856;
    msg.speed_units = 241U;
    msg.roll = 0.6454924957281278;
    msg.pitch = 0.38850949145199765;
    msg.yaw = 0.40978719678373443;
    msg.custom.assign("JFMLYXZRFDCLZMPQVXHWHSQRZCEQYRVNKBHWSMLFJVXVBIKBBYPCJDNQXCRLOQTIHUGRLDGFRIFITCXGFQBEENOUTUSMATWUWYUPJZPCOXPQGOKEYTOWSSCSSILCVAYEJMHHLNTAYBJQERVWBKNMFQGDDNUOEWUHFCTPUADTVKUV");

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
    msg.setTimeStamp(0.08347171649877727);
    msg.setSource(25229U);
    msg.setSourceEntity(83U);
    msg.setDestination(38968U);
    msg.setDestinationEntity(154U);
    msg.timeout = 64521U;
    msg.lat = 0.49659341576879223;
    msg.lon = 0.8893137350658671;
    msg.z = 0.8830493978373084;
    msg.z_units = 210U;
    msg.speed = 0.14745567304720908;
    msg.speed_units = 194U;
    msg.roll = 0.8748765137892236;
    msg.pitch = 0.432489433855037;
    msg.yaw = 0.39000909841334197;
    msg.custom.assign("AVWBBUKRSRAWAHTZJQLOJXYQOWPOSGNUDVCTQGWDKTTAWCFRDACUWTRADGIJXFZKDEXONCLGVKYWRAEJXPIMHDFJIBANEJSOQHGSEKNIKYHGBBBUIKYVBUSDZPVPNEDLSVSGZKNEBDMFCMZYTLCROYVXXPPZMIAHSHLGLECJPXMQMYYCTRINHIO");

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
    msg.setTimeStamp(0.9792486124504051);
    msg.setSource(16222U);
    msg.setSourceEntity(75U);
    msg.setDestination(40566U);
    msg.setDestinationEntity(145U);
    msg.timeout = 42017U;
    msg.lat = 0.357912417589623;
    msg.lon = 0.5249550069361874;
    msg.z = 0.3120389214205542;
    msg.z_units = 189U;
    msg.speed = 0.8977512450729113;
    msg.speed_units = 189U;
    msg.duration = 47834U;
    msg.radius = 0.1779896505434302;
    msg.flags = 171U;
    msg.custom.assign("ZZYFNIRBNUZILOMBEWBLHAAPOOHTKHVMDJUWJAPQYUTPRYFDQEOVCKEOLSNCTJKWEPYENJBCSTXWLRBRIYEHEJUFBKMXQNFGSPSXAJNPBHCYILOKZCAXZRDIUFRWMNMIFXGTRVASQLFWAKXLOXIDLMVNIHXIVZY");

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
    msg.setTimeStamp(0.29281285809915136);
    msg.setSource(8901U);
    msg.setSourceEntity(45U);
    msg.setDestination(41420U);
    msg.setDestinationEntity(139U);
    msg.timeout = 40182U;
    msg.lat = 0.27085307074739084;
    msg.lon = 0.7358487721749589;
    msg.z = 0.5373913753449574;
    msg.z_units = 236U;
    msg.speed = 0.6623253714384102;
    msg.speed_units = 191U;
    msg.duration = 1180U;
    msg.radius = 0.27547043217231526;
    msg.flags = 119U;
    msg.custom.assign("XGSZFXZDWNEQWTQASTUBLZAPEPPAZSZICBGHNRKFNQRLROBJKUORXRCYTDQQQXXOADHVINRMFVKUOFPLCD");

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
    msg.setTimeStamp(0.3113719804224071);
    msg.setSource(36850U);
    msg.setSourceEntity(76U);
    msg.setDestination(61609U);
    msg.setDestinationEntity(46U);
    msg.timeout = 56953U;
    msg.lat = 0.2631212386803836;
    msg.lon = 0.052148967125538404;
    msg.z = 0.7140815613848263;
    msg.z_units = 105U;
    msg.speed = 0.9957368060348263;
    msg.speed_units = 128U;
    msg.duration = 45256U;
    msg.radius = 0.43600318877431377;
    msg.flags = 81U;
    msg.custom.assign("BKMIHWKNLGNXEGGPEOEFRIWSXLJSZJUYTAZNLYXCAIBOAG");

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
    msg.setTimeStamp(0.5851708952236403);
    msg.setSource(45117U);
    msg.setSourceEntity(238U);
    msg.setDestination(8800U);
    msg.setDestinationEntity(182U);
    msg.custom.assign("EZKZAQXVDVQSZUUOYOWGNJCWUROBLBLIHBRZMTSNYEBWIORYJBGGSWVQNANIBSQYICHFVFMQOPWTDEXKANQYICPRBRRZTNDRQDPXRUVSFNFLVWJTEPKJMQHYKMBIMRWYYBIXDAOKLSGUVXGCYFDJJLAZMIJHFQODTTCLFHSVKURICKMGFEKCTXLGJPCFAGO");

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
    msg.setTimeStamp(0.18600126282734997);
    msg.setSource(21457U);
    msg.setSourceEntity(124U);
    msg.setDestination(6278U);
    msg.setDestinationEntity(33U);
    msg.custom.assign("OMXBVKGKVTHXJJCKQTEMUUSUOEOXKSHLRWDPTQPUORRYJZEWWTVCCWFEPDRNWSICMETIT");

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
    msg.setTimeStamp(0.9696081425343334);
    msg.setSource(61710U);
    msg.setSourceEntity(225U);
    msg.setDestination(20518U);
    msg.setDestinationEntity(111U);
    msg.custom.assign("LCUBKIMVODDSBFVVHRUAJWTPZZWOEFYNRXAPFPFIWGCRQHSZOQDPEEWMNTKTDHGD");

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
    msg.setTimeStamp(0.5920114431594656);
    msg.setSource(31509U);
    msg.setSourceEntity(138U);
    msg.setDestination(9952U);
    msg.setDestinationEntity(102U);
    msg.timeout = 35089U;
    msg.lat = 0.705904485272934;
    msg.lon = 0.6170416514413561;
    msg.z = 0.1844869812444897;
    msg.z_units = 16U;
    msg.duration = 57952U;
    msg.speed = 0.8265910905423306;
    msg.speed_units = 198U;
    msg.type = 121U;
    msg.radius = 0.9610886916278345;
    msg.length = 0.297596368792893;
    msg.bearing = 0.4219600852166534;
    msg.direction = 16U;
    msg.custom.assign("XOJCTJWPWHGPEKVIRDEMEJFMCQNFA");

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
    msg.setTimeStamp(0.2420546570182116);
    msg.setSource(42598U);
    msg.setSourceEntity(54U);
    msg.setDestination(39509U);
    msg.setDestinationEntity(185U);
    msg.timeout = 3118U;
    msg.lat = 0.946311578309727;
    msg.lon = 0.5107436103951324;
    msg.z = 0.4292826173827794;
    msg.z_units = 36U;
    msg.duration = 33548U;
    msg.speed = 0.31159014852204414;
    msg.speed_units = 47U;
    msg.type = 250U;
    msg.radius = 0.13695878578872767;
    msg.length = 0.17871899441842398;
    msg.bearing = 0.2778978497732284;
    msg.direction = 209U;
    msg.custom.assign("QKPJNVHUAOEZEIGOBFOFBFNYHGDXBMMWCBGKYWQZCEZIUBATVCZFLKGSNIQLSRTDUWKPXPKNJQLEJPJKIYTRJMILSOWNSZFHVYCGBAQFTK");

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
    msg.setTimeStamp(0.3291492512348546);
    msg.setSource(26647U);
    msg.setSourceEntity(149U);
    msg.setDestination(27080U);
    msg.setDestinationEntity(207U);
    msg.timeout = 6968U;
    msg.lat = 0.39661044691537717;
    msg.lon = 0.017371092038571123;
    msg.z = 0.541092751559164;
    msg.z_units = 176U;
    msg.duration = 46052U;
    msg.speed = 0.42888336221369205;
    msg.speed_units = 90U;
    msg.type = 84U;
    msg.radius = 0.8653779803537324;
    msg.length = 0.4720542223095945;
    msg.bearing = 0.10989215974258981;
    msg.direction = 23U;
    msg.custom.assign("PLAOTMIDXAQTTOJQGHNAPKTKBLDAWCUUDRKGDKCVXQMDSQJLFEDKNRZWTFNYFYSNXBYVXERCMVTUDHRXDZAEOJSREOYUHPIAPNNARZOPBAYZSWYGZEFQGYCAHVUIJRSPLHFMXSOZUXLYJUOWJIMCAFGHCOBHQPMKIEUXZKWVHBYLOTETEWMLBFWVCBDQUNJPVEFOSXJITJISVWIDQJQSGNC");

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
    msg.setTimeStamp(0.5299141598110054);
    msg.setSource(3607U);
    msg.setSourceEntity(230U);
    msg.setDestination(38244U);
    msg.setDestinationEntity(212U);
    msg.duration = 65401U;
    msg.custom.assign("PYCPIGUTSXADDGYNRFZPEJ");

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
    msg.setTimeStamp(0.17779425834760543);
    msg.setSource(30298U);
    msg.setSourceEntity(25U);
    msg.setDestination(57172U);
    msg.setDestinationEntity(149U);
    msg.duration = 18008U;
    msg.custom.assign("ESTYHVKEFTNWVJLALYADHQKGNDJBUOIEBGUVAISUXQRXKHMRHMNYKXFSWVVSULPJSPCXQBTIUZNXFJTFZPRPRHBXQFMUEFGAALNWTYGSWEOYMXBJWJKLOYQGAAAMTZIDJBNKZLWJEPCWZCWFVFQMRNCDHHSXMQSHVGZTDQPRKGIXUVUJUQRSHAYWV");

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
    msg.setTimeStamp(0.6487713886304851);
    msg.setSource(17954U);
    msg.setSourceEntity(46U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(19U);
    msg.duration = 37498U;
    msg.custom.assign("LRVJZVIFHGXFISZFRFLFRIFEHJQBXLEOUAQRMVYBZLCXUYQKJNYATWKNLFATTCJVSISURGXWNCYKBU");

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
    msg.setTimeStamp(0.5050157689190533);
    msg.setSource(7103U);
    msg.setSourceEntity(89U);
    msg.setDestination(3316U);
    msg.setDestinationEntity(83U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.12221761402875886;
    msg.control.set(tmp_msg_0);
    msg.duration = 47348U;
    msg.custom.assign("ZZXMRUJZAPNWZXEXIOBPJOEBPIDTTPBFOXTGBTZMINJNRQNACMUYPBXJSJOYOMAWQVEHVVLILWQXWYLLWICLVUQUTQNWDTXMDHPKFAPVBQJSVUGZFTFZFSDZHQRRDJQYTAIJOGLRTSLKKFBMERKTFXUXYSPLCVDHOOFKNABZS");

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
    msg.setTimeStamp(0.7436669751252213);
    msg.setSource(34047U);
    msg.setSourceEntity(69U);
    msg.setDestination(18886U);
    msg.setDestinationEntity(95U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4268031407U;
    tmp_msg_0.start_lat = 0.9601207722594758;
    tmp_msg_0.start_lon = 0.636901837876751;
    tmp_msg_0.start_z = 0.46264095997535837;
    tmp_msg_0.start_z_units = 155U;
    tmp_msg_0.end_lat = 0.17840914657835283;
    tmp_msg_0.end_lon = 0.8974880035061581;
    tmp_msg_0.end_z = 0.03352266576975993;
    tmp_msg_0.end_z_units = 46U;
    tmp_msg_0.speed = 0.5540775563858014;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.lradius = 0.9719227322232538;
    tmp_msg_0.flags = 92U;
    msg.control.set(tmp_msg_0);
    msg.duration = 18406U;
    msg.custom.assign("NBSKBVXPGHFELJISCVDAGXNDJGXNMIYVRHAUUFIXYWNOXTGEPLBHUOQYAWHQJTPNGLWZHCPUNQGTUZKEAVBSPZHTWSFTASILFXZSREYASIVWISUJCDHWOCOGFRDAYHKBGQRPXATKBMDGMMFBMZMTEQNWTYQTFUCPEKAVKNLHZVRUBMQMUZOWETYPIMLKJ");

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
    msg.setTimeStamp(0.6537873122051907);
    msg.setSource(63444U);
    msg.setSourceEntity(217U);
    msg.setDestination(18926U);
    msg.setDestinationEntity(134U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.15420860243767187;
    msg.control.set(tmp_msg_0);
    msg.duration = 20806U;
    msg.custom.assign("QSMUPYQPDARYTGUQKCAZUIPMRDECJVEOYVSERHOLHXSNLVXQIEKVDJUGFSTWJBZGPXVKAGMAOVUODZKZNGURR");

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
    msg.setTimeStamp(0.6248213873868097);
    msg.setSource(31427U);
    msg.setSourceEntity(78U);
    msg.setDestination(12692U);
    msg.setDestinationEntity(22U);
    msg.timeout = 19060U;
    msg.lat = 0.49599273811558175;
    msg.lon = 0.6536639363081891;
    msg.z = 0.7363913224126174;
    msg.z_units = 163U;
    msg.speed = 0.2409817339303083;
    msg.speed_units = 187U;
    msg.bearing = 0.06491372210261237;
    msg.cross_angle = 0.9092977966838369;
    msg.width = 0.4606567765139836;
    msg.length = 0.4469206149393259;
    msg.hstep = 0.533675199830805;
    msg.coff = 214U;
    msg.alternation = 144U;
    msg.flags = 116U;
    msg.custom.assign("PCVVNBMDBOAJWMNIIJQYPSTHRSPDDRSHQWXODHMJOUCCPPRZFCLATNLFNOBXVURDCSWMJZGYVJDWFQUFVNUJZUGYPGBFCANXAOIJMFXRZXYGIXXRSKTQLTQNLKAQLYWOIGTGHDOTPBESXNHWRITIDKQYFMDE");

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
    msg.setTimeStamp(0.8663373097633547);
    msg.setSource(31492U);
    msg.setSourceEntity(99U);
    msg.setDestination(59246U);
    msg.setDestinationEntity(187U);
    msg.timeout = 25309U;
    msg.lat = 0.5266932186732047;
    msg.lon = 0.6727823594229327;
    msg.z = 0.42452587416433885;
    msg.z_units = 73U;
    msg.speed = 0.6889140211890902;
    msg.speed_units = 90U;
    msg.bearing = 0.3261498055359052;
    msg.cross_angle = 0.9226372267647782;
    msg.width = 0.9091476304205449;
    msg.length = 0.8951554236602643;
    msg.hstep = 0.331263714825045;
    msg.coff = 205U;
    msg.alternation = 191U;
    msg.flags = 155U;
    msg.custom.assign("ZTNPABOOHDANHVITPUAUBREBXJZHSJTJLZLRRSMOXIFXMYNPZISQOFMWDXUYCJYEWCZUGOWGUKCLOVGLHKYQVDXAJQYIVQBUFFNFVCWOHCSIBWROMASM");

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
    msg.setTimeStamp(0.2033751510405113);
    msg.setSource(12284U);
    msg.setSourceEntity(11U);
    msg.setDestination(49761U);
    msg.setDestinationEntity(29U);
    msg.timeout = 34148U;
    msg.lat = 0.3203675820223414;
    msg.lon = 0.8160876529777443;
    msg.z = 0.2160727158420671;
    msg.z_units = 1U;
    msg.speed = 0.9136520503989065;
    msg.speed_units = 44U;
    msg.bearing = 0.9257999938907367;
    msg.cross_angle = 0.9520306007609096;
    msg.width = 0.09460208715397089;
    msg.length = 0.4777329774223339;
    msg.hstep = 0.6649029532301769;
    msg.coff = 205U;
    msg.alternation = 222U;
    msg.flags = 95U;
    msg.custom.assign("XWOPZNFOCTHRUMGAGSXFFPELKDORAXSJBWRFVMIZPBBPWPLFLNVYSQJBTFKVWHEJYJKOYENQZAUDXFGXAEPQEPBDDISYM");

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
    msg.setTimeStamp(0.8307932058850033);
    msg.setSource(12776U);
    msg.setSourceEntity(214U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(253U);
    msg.timeout = 29643U;
    msg.lat = 0.9574087866423301;
    msg.lon = 0.2626436649972844;
    msg.z = 0.5867795348263278;
    msg.z_units = 117U;
    msg.speed = 0.9560581442463664;
    msg.speed_units = 42U;
    msg.custom.assign("GBAGVPSCAZRKAWEDZCEUSLGPWREFXVAIBVSAIRSBOMZTLGPDMGODNABWBMQGBBVJOCQQYHXCJHQXHNCKIETNFVVXMBJDYPUWFNULHIAYXDRGJUTKQYOCWNIDMIEKOWLUMHMSPFTTGVTQ");

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
    msg.setTimeStamp(0.08521158869937484);
    msg.setSource(48453U);
    msg.setSourceEntity(203U);
    msg.setDestination(41908U);
    msg.setDestinationEntity(58U);
    msg.timeout = 57519U;
    msg.lat = 0.7536307125937195;
    msg.lon = 0.7864595902997126;
    msg.z = 0.17766662264244826;
    msg.z_units = 69U;
    msg.speed = 0.28948990569550925;
    msg.speed_units = 91U;
    msg.custom.assign("LLRYDGMHNXCPWN");

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
    msg.setTimeStamp(0.7645118070045612);
    msg.setSource(36512U);
    msg.setSourceEntity(251U);
    msg.setDestination(42617U);
    msg.setDestinationEntity(34U);
    msg.timeout = 1745U;
    msg.lat = 0.2544760584127115;
    msg.lon = 0.11305935480424845;
    msg.z = 0.4850112952619331;
    msg.z_units = 12U;
    msg.speed = 0.7005764465706932;
    msg.speed_units = 70U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8726383422294466;
    tmp_msg_0.y = 0.5202524328049728;
    tmp_msg_0.z = 0.6452630932464272;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YSBDSITVKHBVAGDBCAZWETPTBLDVGEFGTKVLAROSFEUDFLJZPEUFJVJZUYMCFKZBUOANYJCOQXWQZWLRWGTSYAFWUXORMPTBXEODQAMENJOYYPWOHDWQSSQJYZESMYWYPINUBXK");

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
    msg.setTimeStamp(0.5542179215699602);
    msg.setSource(26290U);
    msg.setSourceEntity(92U);
    msg.setDestination(6064U);
    msg.setDestinationEntity(37U);
    msg.x = 0.6474473135557022;
    msg.y = 0.46197657404009107;
    msg.z = 0.4512455368755526;

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
    msg.setTimeStamp(0.3281536088366166);
    msg.setSource(55316U);
    msg.setSourceEntity(134U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(66U);
    msg.x = 0.4182473679232933;
    msg.y = 0.088230253592539;
    msg.z = 0.6313529580026669;

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
    msg.setTimeStamp(0.8125301688512455);
    msg.setSource(9440U);
    msg.setSourceEntity(114U);
    msg.setDestination(9367U);
    msg.setDestinationEntity(239U);
    msg.x = 0.6823480991516816;
    msg.y = 0.9789040940919942;
    msg.z = 0.9591678263222799;

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
    msg.setTimeStamp(0.983008636947986);
    msg.setSource(57562U);
    msg.setSourceEntity(248U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(22U);
    msg.timeout = 36665U;
    msg.lat = 0.6409322832779517;
    msg.lon = 0.8517495491024538;
    msg.z = 0.1872079700319741;
    msg.z_units = 201U;
    msg.amplitude = 0.24581488288986308;
    msg.pitch = 0.3447617188789973;
    msg.speed = 0.9428958664023628;
    msg.speed_units = 193U;
    msg.custom.assign("IJIZCPMZHFEOFHGDRBSQLRQWKDCVGLORYZWAYXOBYUWVSQRIRAIYRTMGJDKVKAADZXOWNGFJNBYNSCLHZFEXWXNEBUUFKPLNDWPEGVUFLVXJQSCRFPDTQHUAKUQDDXMNCTZZOCAGEIIGKFTOTWEXPIMQXJBUYJVRETQHCYUSGNMJTSZ");

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
    msg.setTimeStamp(0.18642262270380894);
    msg.setSource(64183U);
    msg.setSourceEntity(8U);
    msg.setDestination(30274U);
    msg.setDestinationEntity(112U);
    msg.timeout = 49309U;
    msg.lat = 0.572588854396499;
    msg.lon = 0.5192611577289045;
    msg.z = 0.8485866117841726;
    msg.z_units = 251U;
    msg.amplitude = 0.7445685585890041;
    msg.pitch = 0.2842418972482619;
    msg.speed = 0.60529504541181;
    msg.speed_units = 58U;
    msg.custom.assign("LXSZEKMFEOXCVYUOZKTGIXDRUSNL");

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
    msg.setTimeStamp(0.040370344165928884);
    msg.setSource(48542U);
    msg.setSourceEntity(234U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(155U);
    msg.timeout = 40930U;
    msg.lat = 0.5499482480351718;
    msg.lon = 0.5925052291137969;
    msg.z = 0.48269999819322673;
    msg.z_units = 207U;
    msg.amplitude = 0.22245064583779206;
    msg.pitch = 0.5063926658728236;
    msg.speed = 0.5987327265801108;
    msg.speed_units = 187U;
    msg.custom.assign("BAIZSYXGVCTMDFLTLRUOAEBNWMMGZMKHNRRNCSDKSWAYSBNOUDQEBEQVLJRPKNZYRVTTONGINOUJOBVOGDUDAZFSLXTYJYP");

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
    msg.setTimeStamp(0.8916816390075564);
    msg.setSource(40764U);
    msg.setSourceEntity(159U);
    msg.setDestination(12802U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.5725386562100212);
    msg.setSource(29932U);
    msg.setSourceEntity(10U);
    msg.setDestination(28148U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.16187814285348456);
    msg.setSource(57701U);
    msg.setSourceEntity(46U);
    msg.setDestination(60742U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.02433889130034106);
    msg.setSource(6773U);
    msg.setSourceEntity(209U);
    msg.setDestination(22662U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.04957634250085097;
    msg.lon = 0.09867818366317416;
    msg.z = 0.750427003515123;
    msg.z_units = 207U;
    msg.radius = 0.1630921051899088;
    msg.duration = 7659U;
    msg.speed = 0.7147647558846765;
    msg.speed_units = 98U;
    msg.custom.assign("HGYLFRPFJIEJEPXNTBT");

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
    msg.setTimeStamp(0.3407191998886193);
    msg.setSource(32274U);
    msg.setSourceEntity(120U);
    msg.setDestination(64721U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.013616666706482539;
    msg.lon = 0.095510659749665;
    msg.z = 0.12732419709460296;
    msg.z_units = 106U;
    msg.radius = 0.31448749544545807;
    msg.duration = 43055U;
    msg.speed = 0.07842411818052697;
    msg.speed_units = 229U;
    msg.custom.assign("HYPLMZFBTHRKJUXPOBVFUYXXPSAACCUMPMZVBDYRZJTFPGSVKYOLOBYKSUWNVGVBMWXZHBSTGIGMPDOEIRRPXEWPYQLOWTCNIUM");

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
    msg.setTimeStamp(0.8962567716181351);
    msg.setSource(63094U);
    msg.setSourceEntity(32U);
    msg.setDestination(48842U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.10249306115482248;
    msg.lon = 0.8574968508685165;
    msg.z = 0.770749031108838;
    msg.z_units = 96U;
    msg.radius = 0.9464476805718045;
    msg.duration = 4517U;
    msg.speed = 0.18877174569376665;
    msg.speed_units = 102U;
    msg.custom.assign("ODZIDCEGQPOPZLYMJWOMHVBJFHTNNGJVAJOVQOSLUKJZXMCXMCEFNWYQQVFXFFIYIGUJETKPIWNKGSDWRMUEAHHWKCNVSLGXQZTYEPTAVSQIVYHKWBWFBKRYXMPHTJIYBRFARWLRQSLPOPYNBMIADSRCABELTRXLZHCHQTSFAWDQDZXZUCDKCTCEVAGMPEHLYPBRGBUUVRJNGUOUAVWZLBGFUCXOYSKKONNPLGKDXSHOESMNMZARDIDE");

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
    msg.setTimeStamp(0.47996287758889156);
    msg.setSource(36010U);
    msg.setSourceEntity(177U);
    msg.setDestination(30589U);
    msg.setDestinationEntity(155U);
    msg.timeout = 3456U;
    msg.flags = 30U;
    msg.lat = 0.1457273472131071;
    msg.lon = 0.9200989962956767;
    msg.start_z = 0.31717235231578245;
    msg.start_z_units = 95U;
    msg.end_z = 0.7041192925515273;
    msg.end_z_units = 59U;
    msg.radius = 0.6780424921629156;
    msg.speed = 0.29924844989260846;
    msg.speed_units = 205U;
    msg.custom.assign("ONJLBKUJIXQOAGZGPZGSBELMRPVKTUWIGFGKKHJYGFMJAIVHKNMCDDSDREXLJTLXTCBVMQFKMXJROFKBJHOAHCWEDHVZCXSCNPHWISWIIRSWIYRLBXERLKUFBQONCSDDTPYAZQXLYXHVVNWDNTTP");

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
    msg.setTimeStamp(0.4582314303028504);
    msg.setSource(41225U);
    msg.setSourceEntity(231U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(82U);
    msg.timeout = 12106U;
    msg.flags = 46U;
    msg.lat = 0.6853546494937358;
    msg.lon = 0.08502692486284191;
    msg.start_z = 0.4253918417809325;
    msg.start_z_units = 165U;
    msg.end_z = 0.9359093903001299;
    msg.end_z_units = 20U;
    msg.radius = 0.07027560863583626;
    msg.speed = 0.24237150741174507;
    msg.speed_units = 98U;
    msg.custom.assign("YMFGYOOQHVDUIMBOASZUCRPSCIYMCPDZHBJAOIRBTKHHGEHSUESEWYNCLOLDPDL");

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
    msg.setTimeStamp(0.26731300881087394);
    msg.setSource(51049U);
    msg.setSourceEntity(147U);
    msg.setDestination(14849U);
    msg.setDestinationEntity(96U);
    msg.timeout = 32707U;
    msg.flags = 120U;
    msg.lat = 0.9082325374962277;
    msg.lon = 0.5786877125310214;
    msg.start_z = 0.8777002680771898;
    msg.start_z_units = 254U;
    msg.end_z = 0.6129253811576567;
    msg.end_z_units = 152U;
    msg.radius = 0.45299175430969807;
    msg.speed = 0.8373876144879508;
    msg.speed_units = 183U;
    msg.custom.assign("ZNQARRFLKMLZEQNWYFGOHBEANZAUXYVFAFCFUOHDSYUSNABKWYWCCWBIPGTYOCIGYPNIKRPHGVEEDKKUEJDTBQMTDBSZUCBNDUWPRKAPXRTGENKEDMMCJMFGZLICLVXRVOYVFAVTPNMGBXTJLXIIQHOJDSJESUVNZGWVHQXKZSSWYIGHQQHABMJIXFPTVFMUOWPWCBZJQOPLBTCEDXHSQFSLLAHEKLINWQSKDXGOAYLZDPTJTYZ");

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
    msg.setTimeStamp(0.22607811721927462);
    msg.setSource(47671U);
    msg.setSourceEntity(173U);
    msg.setDestination(56134U);
    msg.setDestinationEntity(110U);
    msg.timeout = 44000U;
    msg.lat = 0.7790048354587229;
    msg.lon = 0.26870522782279205;
    msg.z = 0.3285095148760556;
    msg.z_units = 63U;
    msg.speed = 0.10801677573505186;
    msg.speed_units = 50U;
    msg.custom.assign("HMOTUEQVUOOESXTFQPRGOLHCVBIAIHNYRTQB");

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
    msg.setTimeStamp(0.1631106664938189);
    msg.setSource(36096U);
    msg.setSourceEntity(95U);
    msg.setDestination(20433U);
    msg.setDestinationEntity(139U);
    msg.timeout = 1066U;
    msg.lat = 0.930768282128251;
    msg.lon = 0.7534971556373373;
    msg.z = 0.32639589578055694;
    msg.z_units = 48U;
    msg.speed = 0.0007776029707792231;
    msg.speed_units = 72U;
    msg.custom.assign("WKQJLOCIBKOEDRRICALDGZXRQLXFMZIMBBUSCYEUTAYYMVKGYKKXZHPQJJLHOTVEVUPICDTFROIGPBVSDOASMTHNEJSHQFGBGPJKTPNFFRNLCTIIHFKSFUOXTH");

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
    msg.setTimeStamp(0.3516729161997584);
    msg.setSource(63978U);
    msg.setSourceEntity(19U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(214U);
    msg.timeout = 35367U;
    msg.lat = 0.5319751096029276;
    msg.lon = 0.786380522730501;
    msg.z = 0.6167771296930482;
    msg.z_units = 217U;
    msg.speed = 0.20898855633337887;
    msg.speed_units = 186U;
    msg.custom.assign("GEPNHQWTXLLRDZNFTPQKJWIKISNDGMRMWZOFNBZSLBTXJAMBVMPZGFCFSEVJQYULYEIHORXRKHMPOUTMOMQZVUBHTOVJOXAYPUEOAILWZHGNVSJM");

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
    msg.setTimeStamp(0.6365392024597146);
    msg.setSource(59338U);
    msg.setSourceEntity(23U);
    msg.setDestination(57582U);
    msg.setDestinationEntity(192U);
    msg.x = 0.3221756832372894;
    msg.y = 0.4527141418124173;
    msg.z = 0.6650238932658354;
    msg.t = 0.04043472883499999;

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
    msg.setTimeStamp(0.1569711812775041);
    msg.setSource(15075U);
    msg.setSourceEntity(249U);
    msg.setDestination(17289U);
    msg.setDestinationEntity(111U);
    msg.x = 0.1097230497900662;
    msg.y = 0.6018042531403547;
    msg.z = 0.3126521396298434;
    msg.t = 0.7313600953029199;

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
    msg.setTimeStamp(0.8390979242351653);
    msg.setSource(51996U);
    msg.setSourceEntity(86U);
    msg.setDestination(4466U);
    msg.setDestinationEntity(236U);
    msg.x = 0.6952260518688727;
    msg.y = 0.4476864812439064;
    msg.z = 0.8351825883776137;
    msg.t = 0.23666689275855346;

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
    msg.setTimeStamp(0.43814617612796447);
    msg.setSource(31334U);
    msg.setSourceEntity(13U);
    msg.setDestination(16667U);
    msg.setDestinationEntity(226U);
    msg.timeout = 49955U;
    msg.name.assign("LDWRBGJOFOZOVEYEFIXVIPCZXCPIEJANVMXACXGLYNZVYXIHYGYQWEUKTVMBDGXBCRJXDCCHEZRJLUKFFL");
    msg.custom.assign("MXNARQPUPCBWGIKQYAJOBRSKETRFKFNLQCSVGUZBLAXDVZFHMSCZMXZJQXSNBPIMHPEOCTEL");

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
    msg.setTimeStamp(0.9894680159439913);
    msg.setSource(19737U);
    msg.setSourceEntity(30U);
    msg.setDestination(2429U);
    msg.setDestinationEntity(89U);
    msg.timeout = 3559U;
    msg.name.assign("HZQNJVYTWHOPSIUFBXKPYVEVBCWTTADK");
    msg.custom.assign("HIKJREXHBRGNFQRKAMHCSKGMFRWTKDHYPSQJNMGRWTJTLRPIQEGPPBXBAGEZJXOAXKOSLOVLLVAJDCHYOSLJZFMGYTEDZVAJPUOPBBSNMHIVCYWFYVKUINXCABPZARWGZTQUNLIHGYWNFWQNMYRQLFXCGDCXKIZKBKCFUWEVQCBNMVVDMPBFMFEEKZPSODLJWYODUJLQIUTVJOTUUS");

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
    msg.setTimeStamp(0.053356655192227986);
    msg.setSource(15154U);
    msg.setSourceEntity(59U);
    msg.setDestination(6175U);
    msg.setDestinationEntity(183U);
    msg.timeout = 26469U;
    msg.name.assign("IAMARGNPXQLZYNMXORFNOCZYEDZVWGKMSFJDWQIEJCYRFQXBBVEPKUPZIAUDYCEQRFLCOMMCIVZFAUDHXLUUAEOTNRWQJEHFKTMIFPCQOGGZLPWHGKDJFAQWXUWTLHVPRBSYNDZACVMOS");
    msg.custom.assign("EYNGLZCRPSBYNVRUNSFDIUJMTVSKOHCVGLXOQSAELECWTVTBBAIOBHKYYUTHKXXVZAOZFNRWSFVIBXGNGDSICUXPXBYLFDZBQRXELWSPWZPQDNGGZILKPNQQEKJVXFJJTYQFVOWUUHLDHWNMCMFBTYHDYIOMMNESZGCJLBEORZQHFIRGJPRBYHMRCRAJTICHPIJXDXFEMLZWQKGTUKPYKORGWAMKAECVFULPUDZSDAUQJAJAMEDQTIWWKCMVA");

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
    msg.setTimeStamp(0.636215651881391);
    msg.setSource(9094U);
    msg.setSourceEntity(149U);
    msg.setDestination(60454U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.6474489070997665;
    msg.lon = 0.8846374342436707;
    msg.z = 0.36145483936854594;
    msg.z_units = 90U;
    msg.speed = 0.563094141203486;
    msg.speed_units = 227U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25681U;
    tmp_msg_0.off_x = 0.2922733492700922;
    tmp_msg_0.off_y = 0.1046499622221908;
    tmp_msg_0.off_z = 0.8106630415352376;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8479347599522419;
    msg.custom.assign("KPTPJZNHDEVYTQRKKWIAGWEJOVVWJPLULZNEBCFTABGLIGVMZBMXZEWDXYCKYSSSFWYTFYBWQZOLTIWPNEYCOOGHDRXPSVPAJLRTRUJDMYOOFAUMUGQGGEJNSXJDKSBBDMNDWCKNKGUITHQ");

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
    msg.setTimeStamp(0.9680802281150495);
    msg.setSource(31935U);
    msg.setSourceEntity(119U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.7915992674251326;
    msg.lon = 0.1630713937493088;
    msg.z = 0.9329497399167217;
    msg.z_units = 55U;
    msg.speed = 0.3382961048319353;
    msg.speed_units = 34U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.32008906292607997;
    tmp_msg_0.y = 0.23891938148344094;
    tmp_msg_0.z = 0.0970233703574579;
    tmp_msg_0.t = 0.8014695218096414;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6117575483518983;
    msg.custom.assign("ZBSOWQHPUUXUYCAYKFVIXPPSOTMXREOHWBWDTGKVMJZDEFRSCWXIULLUYBRAGGVYBHZDGKNHIVNPRCUBCVPTZQYESEGHOQZDQJJRKZEFAOSAZAWYQJLOAZIOBTGMBFDFUNRJKICSECETUECMTAFCJNFBLYWDUNVBOMWTMDMMAYXSASNKFDUCQGNSPHPGXXLRFRLHVOZWIVS");

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
    msg.setTimeStamp(0.5339673868366676);
    msg.setSource(19877U);
    msg.setSourceEntity(228U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.7589359409338493;
    msg.lon = 0.4935623091688913;
    msg.z = 0.2970959710176405;
    msg.z_units = 29U;
    msg.speed = 0.6264204699357916;
    msg.speed_units = 39U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4081539141047812;
    tmp_msg_0.y = 0.7999057356688792;
    tmp_msg_0.z = 0.41556588063346445;
    tmp_msg_0.t = 0.7866162920392594;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31893U;
    tmp_msg_1.off_x = 0.9881122433980561;
    tmp_msg_1.off_y = 0.7415251772092621;
    tmp_msg_1.off_z = 0.5772049919659425;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.09463635425048589;
    msg.custom.assign("AMMRBNHEUGXEWAOFUDDGPKJEUCHLZUKRZZVHXGYQMFJFTAFUSPAXORAYZBCANHOCMIRQLWSZPLVVIQXIGFQEXJAEZSIULDVBXHBISRMCVVTEXJWWCTNZDCJLFSOSBQOOEOKOKPSNQWDYIMHGYWQYPNOBVOQJLYVSKKRFLBMTBAYH");

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
    msg.setTimeStamp(0.033974582249404084);
    msg.setSource(45904U);
    msg.setSourceEntity(22U);
    msg.setDestination(52907U);
    msg.setDestinationEntity(208U);
    msg.vid = 29435U;
    msg.off_x = 0.38084488323120214;
    msg.off_y = 0.552236423278168;
    msg.off_z = 0.5035954612075522;

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
    msg.setTimeStamp(0.9568010756888017);
    msg.setSource(25319U);
    msg.setSourceEntity(89U);
    msg.setDestination(32453U);
    msg.setDestinationEntity(131U);
    msg.vid = 17960U;
    msg.off_x = 0.2759092507306381;
    msg.off_y = 0.5297804754768873;
    msg.off_z = 0.7665198664107263;

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
    msg.setTimeStamp(0.7475472836000475);
    msg.setSource(51232U);
    msg.setSourceEntity(29U);
    msg.setDestination(30806U);
    msg.setDestinationEntity(71U);
    msg.vid = 37299U;
    msg.off_x = 0.26958501712146643;
    msg.off_y = 0.5083294341882917;
    msg.off_z = 0.5580372170482341;

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
    msg.setTimeStamp(0.09510675346480091);
    msg.setSource(20013U);
    msg.setSourceEntity(196U);
    msg.setDestination(58364U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.5177971325964391);
    msg.setSource(5009U);
    msg.setSourceEntity(223U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.4052037750170494);
    msg.setSource(5097U);
    msg.setSourceEntity(241U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.6883745175473394);
    msg.setSource(64296U);
    msg.setSourceEntity(169U);
    msg.setDestination(8212U);
    msg.setDestinationEntity(142U);
    msg.mid = 6944U;

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
    msg.setTimeStamp(0.8948184574930701);
    msg.setSource(3364U);
    msg.setSourceEntity(203U);
    msg.setDestination(29060U);
    msg.setDestinationEntity(81U);
    msg.mid = 12514U;

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
    msg.setTimeStamp(0.10137672980544121);
    msg.setSource(40230U);
    msg.setSourceEntity(210U);
    msg.setDestination(54860U);
    msg.setDestinationEntity(27U);
    msg.mid = 59949U;

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
    msg.setTimeStamp(0.357263141290732);
    msg.setSource(48726U);
    msg.setSourceEntity(92U);
    msg.setDestination(982U);
    msg.setDestinationEntity(246U);
    msg.state = 85U;
    msg.eta = 60910U;
    msg.info.assign("KRJUGLSYPIEMSMRLKYUEZXNHGIIFDKGPKCLGNCKODLKAYRSUSRZCALTMAUPDIXSVVFQYDSZHBSWNJQKAXETLNNYQNOJHPKWCDHKTMFIDUAQHAGAWJTVCTFRPSMCPBOYI");

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
    msg.setTimeStamp(0.2291833566131889);
    msg.setSource(1341U);
    msg.setSourceEntity(221U);
    msg.setDestination(20078U);
    msg.setDestinationEntity(239U);
    msg.state = 34U;
    msg.eta = 4539U;
    msg.info.assign("INZJZFOSCPWEMJDFYSJOYXITOWOGQXUFQQVVCMAXRIZZPCWURQZVRWAXNLIRFKQLNLBHGSUHGWOBDXRBJMYPYCOUVHELXBNDHSE");

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
    msg.setTimeStamp(0.7264154206608048);
    msg.setSource(11718U);
    msg.setSourceEntity(6U);
    msg.setDestination(39966U);
    msg.setDestinationEntity(21U);
    msg.state = 190U;
    msg.eta = 48459U;
    msg.info.assign("BLHQPMDXUJLOMSTSTHUQWDDGKHROMNTKYCREEXB");

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
    msg.setTimeStamp(0.7349909840089954);
    msg.setSource(52856U);
    msg.setSourceEntity(151U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(58U);
    msg.system = 53600U;
    msg.duration = 10334U;
    msg.speed = 0.9814754918176529;
    msg.speed_units = 9U;
    msg.x = 0.9474535555304467;
    msg.y = 0.3244889793530952;
    msg.z = 0.8000013400776087;
    msg.z_units = 25U;

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
    msg.setTimeStamp(0.16267713829977237);
    msg.setSource(46819U);
    msg.setSourceEntity(189U);
    msg.setDestination(36838U);
    msg.setDestinationEntity(2U);
    msg.system = 15560U;
    msg.duration = 46236U;
    msg.speed = 0.5019448392028807;
    msg.speed_units = 0U;
    msg.x = 0.5628332531843149;
    msg.y = 0.2769139379943879;
    msg.z = 0.38945686792326095;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.05306664235465708);
    msg.setSource(37802U);
    msg.setSourceEntity(185U);
    msg.setDestination(14483U);
    msg.setDestinationEntity(152U);
    msg.system = 63579U;
    msg.duration = 14572U;
    msg.speed = 0.24155658251691148;
    msg.speed_units = 44U;
    msg.x = 0.7407844802557983;
    msg.y = 0.533401165163211;
    msg.z = 0.6215946451857829;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.40891325222526);
    msg.setSource(42809U);
    msg.setSourceEntity(130U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.9423402567624981;
    msg.lon = 0.01418043618891629;
    msg.speed = 0.7606386220650366;
    msg.speed_units = 158U;
    msg.duration = 13634U;
    msg.sys_a = 44706U;
    msg.sys_b = 19731U;
    msg.move_threshold = 0.7091240948668539;

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
    msg.setTimeStamp(0.14932750830552355);
    msg.setSource(26478U);
    msg.setSourceEntity(55U);
    msg.setDestination(10942U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.2108981379557855;
    msg.lon = 0.5228197285817117;
    msg.speed = 0.402010950641148;
    msg.speed_units = 30U;
    msg.duration = 65392U;
    msg.sys_a = 37231U;
    msg.sys_b = 56411U;
    msg.move_threshold = 0.10120075565781272;

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
    msg.setTimeStamp(0.25037428064100453);
    msg.setSource(40151U);
    msg.setSourceEntity(167U);
    msg.setDestination(47158U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.8225913415401849;
    msg.lon = 0.03124380152414674;
    msg.speed = 0.5645004854973458;
    msg.speed_units = 120U;
    msg.duration = 420U;
    msg.sys_a = 37290U;
    msg.sys_b = 50673U;
    msg.move_threshold = 0.6715899071819622;

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
    msg.setTimeStamp(0.10992272652120172);
    msg.setSource(59958U);
    msg.setSourceEntity(191U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.9607403934763602;
    msg.lon = 0.8588708252351663;
    msg.z = 0.10192880167803309;
    msg.z_units = 87U;
    msg.speed = 0.19631503169258868;
    msg.speed_units = 81U;
    msg.custom.assign("QTLZIZOBWGEPXQNSHHLBMTPSHEIRHXOPSRPSXUUKYOBGMINPRDLBIWAFJEQUADTSGYFYWOKHLGXEFNLPJUHLSDWSQDTKTWPDXNVUQXWFOGYNUCBRXFTFZVGMAIRJZJVHLZBDNTFCEPOIYDVHAI");

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
    msg.setTimeStamp(0.40509021018678604);
    msg.setSource(5276U);
    msg.setSourceEntity(170U);
    msg.setDestination(495U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.002607825728862978;
    msg.lon = 0.01850031382612982;
    msg.z = 0.04358677665316446;
    msg.z_units = 135U;
    msg.speed = 0.960462759367278;
    msg.speed_units = 58U;
    msg.custom.assign("BMLIPXDAVAQCJMTGGBKNNQPAXRSLYNPQTFPPYTOOMHFZUGGJLQYRAIXFZTYDWUZKZDYBUZYVZFSPSHUHMEJTHXLUDXTQXOBOKQRDRBQZHUNSDFJBOMAEEILJYSNPXKVMQZGBTTXSENBOKGMOXDBIDRAHYNIPLNWWRZVMJCFOCEGHRARWUCUVWHEVRDFPETSOAVKWRNVQEPUCCEFFVLBSVMIMKGIIJSGAHLKDXOCCW");

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
    msg.setTimeStamp(0.22115673980009232);
    msg.setSource(9829U);
    msg.setSourceEntity(111U);
    msg.setDestination(59170U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.040074071477387396;
    msg.lon = 0.41425861206014336;
    msg.z = 0.6331879930646009;
    msg.z_units = 254U;
    msg.speed = 0.24534144374615374;
    msg.speed_units = 169U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9229669124596175;
    tmp_msg_0.lon = 0.12593050075160772;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PGFEYVJHIOVNRXQBIJWZFPYLUAECUDUUDKIIESBVZPLSQXSCIQDHXTBGCXOEVIAMMTEGKKHRGAHDXDGIYLDJTSQCZJDOPJOWUYVWQNKTGZYBRCHOFQTFSFILXIYNGYVBZKOIXDOEWWANJCYHVXCHLBSHMSPQJFOFRBPKSECUTATATQKB");

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
    msg.setTimeStamp(0.5353431062934498);
    msg.setSource(635U);
    msg.setSourceEntity(61U);
    msg.setDestination(42439U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.6378990851572993;
    msg.lon = 0.09210724140411752;

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
    msg.setTimeStamp(0.20890683743545158);
    msg.setSource(55212U);
    msg.setSourceEntity(6U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.004847282402650643;
    msg.lon = 0.8904824261662219;

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
    msg.setTimeStamp(0.08026002841351931);
    msg.setSource(2355U);
    msg.setSourceEntity(58U);
    msg.setDestination(31679U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9105448133195917;
    msg.lon = 0.9631708091417447;

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
    msg.setTimeStamp(0.2551777619071802);
    msg.setSource(61179U);
    msg.setSourceEntity(82U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(143U);
    msg.timeout = 58941U;
    msg.lat = 0.7376285262707194;
    msg.lon = 0.46636783563740714;
    msg.z = 0.17538910969962473;
    msg.z_units = 224U;
    msg.pitch = 0.9922972467063895;
    msg.amplitude = 0.4860988920921294;
    msg.duration = 57915U;
    msg.speed = 0.026803145611503654;
    msg.speed_units = 90U;
    msg.radius = 0.05274013206654227;
    msg.direction = 111U;
    msg.custom.assign("YVMMDHOWSRMWVUEERJOULVKAQWYEGWFVDWCKIZGZQPIQOHZGTZXPLMIWDNQLYHKIUSBHZMEMARVJKOZXUIFKFCYBEYLINCHNXAUDIVEFIGYNKSWXDNER");

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
    msg.setTimeStamp(0.31605288651214536);
    msg.setSource(8182U);
    msg.setSourceEntity(107U);
    msg.setDestination(500U);
    msg.setDestinationEntity(132U);
    msg.timeout = 57962U;
    msg.lat = 0.7939018070889501;
    msg.lon = 0.28286611263476735;
    msg.z = 0.11489614624455313;
    msg.z_units = 29U;
    msg.pitch = 0.3199933284707285;
    msg.amplitude = 0.7177517900777692;
    msg.duration = 28399U;
    msg.speed = 0.9578010982084049;
    msg.speed_units = 98U;
    msg.radius = 0.9302944049886568;
    msg.direction = 208U;
    msg.custom.assign("CYZSEBCGANTQCAWFK");

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
    msg.setTimeStamp(0.6032118116708793);
    msg.setSource(13824U);
    msg.setSourceEntity(67U);
    msg.setDestination(54207U);
    msg.setDestinationEntity(20U);
    msg.timeout = 15915U;
    msg.lat = 0.045369510723059614;
    msg.lon = 0.7353888594335264;
    msg.z = 0.8790269862298493;
    msg.z_units = 78U;
    msg.pitch = 0.206336485915383;
    msg.amplitude = 0.5028308423060063;
    msg.duration = 8044U;
    msg.speed = 0.9035922796443362;
    msg.speed_units = 77U;
    msg.radius = 0.9990725202764539;
    msg.direction = 16U;
    msg.custom.assign("GAOKYXWZRUSQNXAHDGDUCQOQJIJRYULSIKVEUHHJBVREBWYKFGFIOSPCCPJGHRGUVIJOOADKXC");

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
    msg.setTimeStamp(0.03390839490922848);
    msg.setSource(37854U);
    msg.setSourceEntity(38U);
    msg.setDestination(58684U);
    msg.setDestinationEntity(252U);
    msg.formation_name.assign("ABJTEKHERYPTKRGVBIFKUBRQPMVODQQMUPTNFXJQYCNSUSAHOIECBCUZFDGNGZQQOWLZKOUZHDSKXSRIY");
    msg.reference_frame = 250U;
    msg.custom.assign("TJDRYAHYOLUGZYHFCQSADGDGKNXCOAACJLXMTQQJKXECIXVVRRCKVMGFPFLZLNKDEWCWNPMFUZLYMNIZCWZKAQOOLCSRPZBWMQQPOEIQJJHHYSVUTIJJSITRQLKBU");

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
    msg.setTimeStamp(0.7363094984369492);
    msg.setSource(55525U);
    msg.setSourceEntity(127U);
    msg.setDestination(51562U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("FDMMMTDZPOCAOCANJJLFOJFQCTCXNBAQOYABEQHZQJRPZSXPXUUMSRKUZHDL");
    msg.reference_frame = 247U;
    msg.custom.assign("YSMHRAKDICWMCEABXIRFYZKUBLPNLXGDIWDUWBENOSWMZSGTLUDLYNMAZYHHMNFMKFXZSGKEAVAYWAASQRKCXHUUWLNQWJVWBLWYEEJAHFJQOKUXTFZQKEOIFRLWQJLORQGOBYJJCGGMVOS");

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
    msg.setTimeStamp(0.5775212334904057);
    msg.setSource(39958U);
    msg.setSourceEntity(179U);
    msg.setDestination(44250U);
    msg.setDestinationEntity(250U);
    msg.formation_name.assign("DFUSAJEKNCITYQPYQGZRDNLYVQUUZEUWHDYIPIFIJWNZEQLYCLMUXJHGHYPERYWTYMWAIAUXCOVFKZPBOHWVGOPWRHAXEFIVIYCKLXFXCFVBHMKALBPEDEMTTTLHJQKFUOTNSBRSLDAGZQVQNMOMRNLOZGMCZJUTOBSBNGNGMSTXMRKQSAWKPGKBBRNXHESVTBPFQCJRUQWXNRLXISODVCA");
    msg.reference_frame = 86U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33336U;
    tmp_msg_0.off_x = 0.615551848771391;
    tmp_msg_0.off_y = 0.375125576164026;
    tmp_msg_0.off_z = 0.02087057079164034;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GTKDANPKRTMOHXMZMMWASBVCLQUBZSDPUTXADZKEDPRDKGFXUUDCWOYOVLJGPURWTKLRJONIHRDJGBEEKYSIIWYFCONAQIYLWRFWEKLNGZFBMGIMACMXNYIOUZGSIQVGQTZKPESNGHQPHHFTVPJBUPUJNTDEEVCATSZQORJLSHKORZEXWJQAJLAPZFMHBESCYYVVCBJTDCSXUCJ");

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
    msg.setTimeStamp(0.4432778416460821);
    msg.setSource(7316U);
    msg.setSourceEntity(108U);
    msg.setDestination(21216U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("HYDANFVRCCWXAROZMVWGEESMTLDDTUOVGFRYOHTNLZKQIOPBGHDBNLHSCHVMGPXYXQBLJFUYDVBNPIP");
    msg.formation_name.assign("QGKUSNALGRCPIWLWFFHNKIHAPYRRSMVZNEKCZJZFUTYDZODT");
    msg.plan_id.assign("YCGPTMTQIGJGLTXCWOAFBZRVFLWBDRFICHRROZMREDWMRKQFJZSEYEIHMFOTGXZCGUYRLLUNHSJJIIFYQKQIPEZIGDJBHSQKVAXIVIWPJSCTKBVXBQYAIADMFOYTEXMDENNSONDWNPPHVKPO");
    msg.description.assign("ZEBJLETSEGFHFAMCMGKUUNHBBEPXCRRESCMVUFSFQODBKYIRYAJCYKWDJOKRGUYCTASDFDLWFFRQXDWSUUDNPKKPZBAQUHOLIW");
    msg.leader_speed = 0.43039275820569234;
    msg.leader_bank_lim = 0.6879537781999471;
    msg.pos_sim_err_lim = 0.41553474808032465;
    msg.pos_sim_err_wrn = 0.3667364407210638;
    msg.pos_sim_err_timeout = 5211U;
    msg.converg_max = 0.24195261180845018;
    msg.converg_timeout = 60327U;
    msg.comms_timeout = 53026U;
    msg.turb_lim = 0.4399651527079196;
    msg.custom.assign("IADNRZUTKGLHFYWNANAAJRFLBQAJGDKJSTRVSSLFPTNBMUIVBSWVWKPULHVCYHDPFBJKJYUFVLQPEFUZMBIZKOWHNQZBHOYONWNFQIEWOLYPEXOTOGUDTSBINQHGEXNOCAJUVJCZWMVCDLMQMZFKDXSTWCDETIHSQXEFLB");

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
    msg.setTimeStamp(0.09502450634614235);
    msg.setSource(12409U);
    msg.setSourceEntity(16U);
    msg.setDestination(45062U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("PMVNGMRHBIFZOALYVCCDUXKAGYRSQDSTOQMXKUGFJEXCFOGUENSGJYDLQHBZCFWNZAAVRSVNQSSYEORNMHZIYOYZDJOLPCMGMVICAEFPWUKOZRCUUOJYXMEALILTZWL");
    msg.formation_name.assign("FFJMKYTFLJTNCLUSCSWHQMZPAETIJHTIFSLMXFRTBLEZHRZYZOOYAXJEIQVNVOXBPIGGLWQZHSGNYMUDWUJLWCXPRJFPMEXPDBRIKRXICTTLAGJYUVHYTESUQNODSOFHCQLWXOXBSG");
    msg.plan_id.assign("XXFZOAACYXONHIKXHDVWDJKYHGEVHYFOTKRRONRRVBTFOTABRLGFCEPUCQZLDNGAAHRMQUMUZYETWQBWVBGMAWPRLXBIQKYGPKVVMWLJPPLZJWCDO");
    msg.description.assign("XWLCKXFQENFXDQJMLQTOQBULAFBWKWRKPKLJMCMRBGHTPIGHDZSDOZIMGDOKVGGRIVCIRMNAWYEMQVDQADPGESTWSYMQVYCVYYPBLJZCCBCOLAUBPWT");
    msg.leader_speed = 0.11081835073436852;
    msg.leader_bank_lim = 0.9547430984423332;
    msg.pos_sim_err_lim = 0.7078661846871651;
    msg.pos_sim_err_wrn = 0.5202019187837812;
    msg.pos_sim_err_timeout = 48313U;
    msg.converg_max = 0.6991901306681128;
    msg.converg_timeout = 50822U;
    msg.comms_timeout = 9656U;
    msg.turb_lim = 0.8468459336135403;
    msg.custom.assign("MJIKGXDTUCVBVQCXSFKWDFEMMANVLWHGXQOJLPCQAALI");

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
    msg.setTimeStamp(0.3783072152045466);
    msg.setSource(40234U);
    msg.setSourceEntity(235U);
    msg.setDestination(3568U);
    msg.setDestinationEntity(243U);
    msg.group_name.assign("ENYEAHXRBBOMYYZYPPNHFKSHHKPQTTMEHTXLGNMAOUZFVFPLIJCLVNHLEIYVOVLQBMERVMCBILFZXZGEDUKDVADQPCNDVGZAUPNQQXOUZFSRSFKCIWOWWFDBXGDLJSBURQJWGZVQGMBIZGZJWDNQENKJNWUPWMDLSKZQXVPDLWAIEFYUIRQRSTOXHNTTUCKSFBACKJCWACYRESLWXCCUTKATOJRTSGIGROSAJBMHYYGJOKFMXPOHPYAEH");
    msg.formation_name.assign("BFDXOUQETXYUJFTFDQZHLTQSKZSUVLRXNNPPXPYZBLNOLMNYLWVHHOJVQREMXWWOYREZBVCCGBACKONSBIAMYPFWFGDUSKAUAYWIUTKFNJPDXCGVZRJCNBMOZSWZILRETQMMDTPILCEPFKXEJLIGIHAQOVBZHIJROUUYXGOHNQDKFFKTNEDXGICTLQLBMPHK");
    msg.plan_id.assign("GDBZROZQEUWKTLMJFSYCFVUPNZDROHBCFEHWQUODCHPBPBDHJXRTMIQIAABGYFGSXMGBTQOANBKYCYJWVSCTVVJIMNEGHLRPRTUFVGJPOXDIAEVASIEVYKZDHYWFCGTFSELOUILMNUZFFNAQC");
    msg.description.assign("MXCVHTYRFKVWUPNJFRKHVIYXGOTNQFVYSCWSZTEJUXHZQSCFEHQLWILFCWNHDEVNHJSAXTNOJWLGJXZJXNKFBLDOJDDDSTQOWYMJYCPNZBRQKVPKBATABGZGOEMFXCOBWIIPACEAOYPTUBYDLBYOGDAQELQIVGSKHZJKKDRRIOMAQDICLPMZWIZWUESHTCFIMZBMAJAMKDUGGXPTKRXVRGLHUANRVGYYBPMIWECZUPQSR");
    msg.leader_speed = 0.35634806117280515;
    msg.leader_bank_lim = 0.4420544851781639;
    msg.pos_sim_err_lim = 0.32152091393824644;
    msg.pos_sim_err_wrn = 0.259922895854371;
    msg.pos_sim_err_timeout = 57177U;
    msg.converg_max = 0.7082234603155704;
    msg.converg_timeout = 43386U;
    msg.comms_timeout = 55543U;
    msg.turb_lim = 0.16453144147135035;
    msg.custom.assign("CNCYSXHWJUPHRAZJNVXKHFJBHNCSDSKWTGQYGQYKXMIIXUFRECEBPJEOEEQRWNZQROJQTYPZMDHAJIDAABJCDCQTXIEIPRFEAITEUAFUBKPOLHDLYSVZVTNFFWBOOLTMS");

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
    msg.setTimeStamp(0.28436418827018395);
    msg.setSource(19402U);
    msg.setSourceEntity(39U);
    msg.setDestination(22971U);
    msg.setDestinationEntity(35U);
    msg.control_src = 50305U;
    msg.control_ent = 115U;
    msg.timeout = 0.3147691644667199;
    msg.loiter_radius = 0.8286401863832287;
    msg.altitude_interval = 0.252866267476492;

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
    msg.setTimeStamp(0.925111770842689);
    msg.setSource(42172U);
    msg.setSourceEntity(238U);
    msg.setDestination(34796U);
    msg.setDestinationEntity(17U);
    msg.control_src = 28505U;
    msg.control_ent = 115U;
    msg.timeout = 0.037510461322343924;
    msg.loiter_radius = 0.534192900203344;
    msg.altitude_interval = 0.5186262519198942;

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
    msg.setTimeStamp(0.8954100871140693);
    msg.setSource(34839U);
    msg.setSourceEntity(152U);
    msg.setDestination(3032U);
    msg.setDestinationEntity(91U);
    msg.control_src = 19036U;
    msg.control_ent = 177U;
    msg.timeout = 0.8961573548540508;
    msg.loiter_radius = 0.48812592634004626;
    msg.altitude_interval = 0.362550136871437;

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
    msg.setTimeStamp(0.15873921071872754);
    msg.setSource(59311U);
    msg.setSourceEntity(77U);
    msg.setDestination(46604U);
    msg.setDestinationEntity(89U);
    msg.flags = 220U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.04727651684564793;
    tmp_msg_0.speed_units = 229U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3273939483740351;
    tmp_msg_1.z_units = 103U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.263246795867475;
    msg.lon = 0.46375183648072416;
    msg.radius = 0.6816248244311401;

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
    msg.setTimeStamp(0.2865519014035758);
    msg.setSource(21326U);
    msg.setSourceEntity(22U);
    msg.setDestination(64820U);
    msg.setDestinationEntity(42U);
    msg.flags = 191U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5527302907121725;
    tmp_msg_0.speed_units = 87U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2880729378035457;
    tmp_msg_1.z_units = 245U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7872560625985187;
    msg.lon = 0.8889379528863172;
    msg.radius = 0.4256081544548964;

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
    msg.setTimeStamp(0.7996995749750664);
    msg.setSource(14743U);
    msg.setSourceEntity(196U);
    msg.setDestination(39966U);
    msg.setDestinationEntity(221U);
    msg.flags = 55U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.36219526186404394;
    tmp_msg_0.speed_units = 120U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6767327664004812;
    tmp_msg_1.z_units = 17U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.08603391256422399;
    msg.lon = 0.38262306224253684;
    msg.radius = 0.8558980228620318;

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
    msg.setTimeStamp(0.40169123820661456);
    msg.setSource(12209U);
    msg.setSourceEntity(206U);
    msg.setDestination(10657U);
    msg.setDestinationEntity(181U);
    msg.control_src = 64318U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 30U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4011963543706951;
    tmp_tmp_msg_0_0.speed_units = 27U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.11658603446408933;
    tmp_tmp_msg_0_1.z_units = 156U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2234369523820513;
    tmp_msg_0.lon = 0.09728998879794104;
    tmp_msg_0.radius = 0.8085249993868863;
    msg.reference.set(tmp_msg_0);
    msg.state = 134U;
    msg.proximity = 11U;

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
    msg.setTimeStamp(0.8494313163875841);
    msg.setSource(7267U);
    msg.setSourceEntity(251U);
    msg.setDestination(4907U);
    msg.setDestinationEntity(130U);
    msg.control_src = 33295U;
    msg.control_ent = 98U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 115U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5901149760443545;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5459926793118796;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7596334321410285;
    tmp_msg_0.lon = 0.5760819641988466;
    tmp_msg_0.radius = 0.34399460275135085;
    msg.reference.set(tmp_msg_0);
    msg.state = 42U;
    msg.proximity = 108U;

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
    msg.setTimeStamp(0.6503102947948602);
    msg.setSource(14685U);
    msg.setSourceEntity(197U);
    msg.setDestination(64524U);
    msg.setDestinationEntity(159U);
    msg.control_src = 34714U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5651511879958572;
    tmp_tmp_msg_0_0.speed_units = 38U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.38864782610814463;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3952989978221738;
    tmp_msg_0.lon = 0.5633303177899603;
    tmp_msg_0.radius = 0.48997880738722677;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 47U;

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
    msg.setTimeStamp(0.9252400904393149);
    msg.setSource(410U);
    msg.setSourceEntity(57U);
    msg.setDestination(9159U);
    msg.setDestinationEntity(204U);
    msg.ax_cmd = 0.1686427984918033;
    msg.ay_cmd = 0.8548078356551898;
    msg.az_cmd = 0.32393523993050743;
    msg.ax_des = 0.12319118878857527;
    msg.ay_des = 0.2576086521769414;
    msg.az_des = 0.7326125426668534;
    msg.virt_err_x = 0.43877014286797744;
    msg.virt_err_y = 0.10838092613856776;
    msg.virt_err_z = 0.22184604206834502;
    msg.surf_fdbk_x = 0.036080396072323606;
    msg.surf_fdbk_y = 0.1142616122654575;
    msg.surf_fdbk_z = 0.3196941339825311;
    msg.surf_unkn_x = 0.1469492174399104;
    msg.surf_unkn_y = 0.8657079282546373;
    msg.surf_unkn_z = 0.42641890262762494;
    msg.ss_x = 0.6211532934633148;
    msg.ss_y = 0.25760088359800737;
    msg.ss_z = 0.5026661429497071;

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
    msg.setTimeStamp(0.48542480574740043);
    msg.setSource(44064U);
    msg.setSourceEntity(153U);
    msg.setDestination(52624U);
    msg.setDestinationEntity(226U);
    msg.ax_cmd = 0.823970240684845;
    msg.ay_cmd = 0.7081820315217275;
    msg.az_cmd = 0.6106759550276881;
    msg.ax_des = 0.09694069774205438;
    msg.ay_des = 0.13175106879837095;
    msg.az_des = 0.6088442689331112;
    msg.virt_err_x = 0.5973089017719475;
    msg.virt_err_y = 0.6913421856214412;
    msg.virt_err_z = 0.0021268007827657254;
    msg.surf_fdbk_x = 0.7046628778483962;
    msg.surf_fdbk_y = 0.7351405246752137;
    msg.surf_fdbk_z = 0.8102146500313815;
    msg.surf_unkn_x = 0.5473085191645962;
    msg.surf_unkn_y = 0.9607522482321033;
    msg.surf_unkn_z = 0.9504956978044036;
    msg.ss_x = 0.8456612860280704;
    msg.ss_y = 0.8889015365588219;
    msg.ss_z = 0.8104238297230089;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ONJULSYKGNEHYCCRJPEFLIZSIHBRLULPQJNMKMMGKMWMJSWSBKFGKOXDQXPQHGZCPDHXFMEFHTQOVMFIYUMIXVWYCOAXBHPTNBRWDFBPVDSKENWQYKQLOVFIENSSCZRTLQKACBZLZVUYECRCUYGXBESNZJVDTAWEAJQDQADMQBIRU");
    tmp_msg_0.dist = 0.4217837481206358;
    tmp_msg_0.err = 0.3541727741476285;
    tmp_msg_0.ctrl_imp = 0.1455418110412603;
    tmp_msg_0.rel_dir_x = 0.8684000619836513;
    tmp_msg_0.rel_dir_y = 0.422389291521187;
    tmp_msg_0.rel_dir_z = 0.15428680455282273;
    tmp_msg_0.err_x = 0.6375700428141731;
    tmp_msg_0.err_y = 0.96246109128206;
    tmp_msg_0.err_z = 0.320834838358277;
    tmp_msg_0.rf_err_x = 0.7496705166570224;
    tmp_msg_0.rf_err_y = 0.8778922988879446;
    tmp_msg_0.rf_err_z = 0.4383541149588285;
    tmp_msg_0.rf_err_vx = 0.1474594254449315;
    tmp_msg_0.rf_err_vy = 0.0022687075849739946;
    tmp_msg_0.rf_err_vz = 0.32705457740770316;
    tmp_msg_0.ss_x = 0.04470337607348296;
    tmp_msg_0.ss_y = 0.30462754016118754;
    tmp_msg_0.ss_z = 0.4254966786203611;
    tmp_msg_0.virt_err_x = 0.4450870432755556;
    tmp_msg_0.virt_err_y = 0.7991553667479493;
    tmp_msg_0.virt_err_z = 0.23486932419635342;
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
    msg.setTimeStamp(0.5387200817682376);
    msg.setSource(53164U);
    msg.setSourceEntity(134U);
    msg.setDestination(2692U);
    msg.setDestinationEntity(195U);
    msg.ax_cmd = 0.6020538108992403;
    msg.ay_cmd = 0.24627579506797537;
    msg.az_cmd = 0.6250158004086533;
    msg.ax_des = 0.7237288214430027;
    msg.ay_des = 0.1714715636638381;
    msg.az_des = 0.001321149538441535;
    msg.virt_err_x = 0.6942583173916372;
    msg.virt_err_y = 0.8442037920262653;
    msg.virt_err_z = 0.36479461277917347;
    msg.surf_fdbk_x = 0.34489047293140906;
    msg.surf_fdbk_y = 0.11534763245264834;
    msg.surf_fdbk_z = 0.35737529006336743;
    msg.surf_unkn_x = 0.49766965155832765;
    msg.surf_unkn_y = 0.6379091579394927;
    msg.surf_unkn_z = 0.6840543997568694;
    msg.ss_x = 0.21526651880554304;
    msg.ss_y = 0.6258836021359973;
    msg.ss_z = 0.07970366463846612;

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
    msg.setTimeStamp(0.21834702905707104);
    msg.setSource(36506U);
    msg.setSourceEntity(6U);
    msg.setDestination(24695U);
    msg.setDestinationEntity(114U);
    msg.s_id.assign("PIVXQYNMWMFUXBNVTSNZBOEXRLUKEDZGWVTESZIBOYXPTSKDESHEJKAFYMVUPCQDORLRSHYIQCHZLUNFOKJKAJLQFYWJJGYEHVFBMBGTBMCOACPVTAJTRTMGAGTDGONZHIWLHINSOUDXAEZYDUJFIGQCKBSDOQMFPUWCJLCVYFZNUXYCWHHAQSAZRPTIKVXLQSEMTMDGHPDCFRLXFQRWBHOJNQWGARJUGEKEZIZI");
    msg.dist = 0.592981384596332;
    msg.err = 0.4771361201952997;
    msg.ctrl_imp = 0.7904453807213059;
    msg.rel_dir_x = 0.35365012645443406;
    msg.rel_dir_y = 0.8599016710344456;
    msg.rel_dir_z = 0.797970650529415;
    msg.err_x = 0.7635494524264926;
    msg.err_y = 0.9051066374876519;
    msg.err_z = 0.9853707760324881;
    msg.rf_err_x = 0.21233284672438935;
    msg.rf_err_y = 0.6751420856137818;
    msg.rf_err_z = 0.19015781022299516;
    msg.rf_err_vx = 0.09152899129573422;
    msg.rf_err_vy = 0.30825592467712637;
    msg.rf_err_vz = 0.08023488452782834;
    msg.ss_x = 0.7043257600461967;
    msg.ss_y = 0.3028527859068918;
    msg.ss_z = 0.23708013172636;
    msg.virt_err_x = 0.5552993789028391;
    msg.virt_err_y = 0.29491771253259746;
    msg.virt_err_z = 0.7794459015040914;

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
    msg.setTimeStamp(0.30489921230458283);
    msg.setSource(44939U);
    msg.setSourceEntity(16U);
    msg.setDestination(4518U);
    msg.setDestinationEntity(62U);
    msg.s_id.assign("NBKGVDBGGFGELWRHHRYRUKEEEYEHJZCSVVKLOSPVPRUYDUMDJCKJFCKAMNGXTUITLDYTZRAGFEZHSFKHMMRWDFOVWXNTXYAOTHCQLGBWHNIUNIXSSIGQQTERILIAWNSAPJIPJSVVDZYVJNYDXJZPKEUNNHJXCFLMXBKTTRXAQOTMFVIQBGMKEAOPCFIBNWWCXOLUMMXRPPYSBWUZDMSCOPWDZWLYGHUDARJBOILZEQC");
    msg.dist = 0.9772810361724774;
    msg.err = 0.1499127343787996;
    msg.ctrl_imp = 0.24020972476125335;
    msg.rel_dir_x = 0.43379558231235105;
    msg.rel_dir_y = 0.14367843370447142;
    msg.rel_dir_z = 0.5237453548640294;
    msg.err_x = 0.1411704373947278;
    msg.err_y = 0.7090046720770941;
    msg.err_z = 0.5107638157345298;
    msg.rf_err_x = 0.9202694676093627;
    msg.rf_err_y = 0.640362928836047;
    msg.rf_err_z = 0.5230941120385624;
    msg.rf_err_vx = 0.8128846811157795;
    msg.rf_err_vy = 0.9366241023091758;
    msg.rf_err_vz = 0.60869813000007;
    msg.ss_x = 0.9533137013265178;
    msg.ss_y = 0.7718938018220243;
    msg.ss_z = 0.02180337162850199;
    msg.virt_err_x = 0.42592988914731267;
    msg.virt_err_y = 0.7330078948965312;
    msg.virt_err_z = 0.023521448738409445;

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
    msg.setTimeStamp(0.061616412953179545);
    msg.setSource(2757U);
    msg.setSourceEntity(196U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(153U);
    msg.s_id.assign("HMBQHYJKDZQBCXCWJJEEWIYNSRNOWPLJETTAEGGQSGIFZPVGHXUDVDDACPXHZIMSUOIGJIOGWNUDABEZFDWBPERMKTFIZXCYKYBAHUNRLXNIAKOZKVXWUGTGQXHCUKDPUSLLSOERRWCTYMXBMNNYPMALMHBWTJFUNSYEDASTZCAVEZJLOGQTNVSWVOVJSRFOMKLQVMBKXHPMKLAYLZYCVDJBACHXDWQIFRITNRRFYPCZQL");
    msg.dist = 0.8678311047726195;
    msg.err = 0.6830897883726093;
    msg.ctrl_imp = 0.424754978717098;
    msg.rel_dir_x = 0.372649845399035;
    msg.rel_dir_y = 0.09746257192414565;
    msg.rel_dir_z = 0.2086794232738376;
    msg.err_x = 0.8807424514983975;
    msg.err_y = 0.7743482493355732;
    msg.err_z = 0.8319831092575688;
    msg.rf_err_x = 0.20010347977408405;
    msg.rf_err_y = 0.13976288246548285;
    msg.rf_err_z = 0.9209712624172874;
    msg.rf_err_vx = 0.9801481603909181;
    msg.rf_err_vy = 0.4664632337215273;
    msg.rf_err_vz = 0.19323585805794197;
    msg.ss_x = 0.771706562496872;
    msg.ss_y = 0.09900095263384412;
    msg.ss_z = 0.9956850769682573;
    msg.virt_err_x = 0.5066378861274957;
    msg.virt_err_y = 0.9006810382598625;
    msg.virt_err_z = 0.005743311160666953;

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
    msg.setTimeStamp(0.3090643868501386);
    msg.setSource(12576U);
    msg.setSourceEntity(105U);
    msg.setDestination(63333U);
    msg.setDestinationEntity(178U);
    msg.timeout = 3511U;
    msg.rpm = 0.11792012979252231;
    msg.direction = 72U;
    msg.custom.assign("PEUCWNBVSSORLVREKOBVZMESIYOKAIAPHRNXFAIGFGPYVTDKZPXMKKTFWBCUHIDCTYHWSVKCUTJQJVOJPRWBQUDGNFOVOFDNQNZUMPBHNGZHKQILYTBLENJSTLJZLDWEHIGSYGCJYOXMSZ");

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
    msg.setTimeStamp(0.8028508149191325);
    msg.setSource(40388U);
    msg.setSourceEntity(11U);
    msg.setDestination(11917U);
    msg.setDestinationEntity(134U);
    msg.timeout = 11312U;
    msg.rpm = 0.3563334574400535;
    msg.direction = 217U;
    msg.custom.assign("YWUGDZTEJHYCKQVHLOWVXPMMJDFEDKYBHIVJQBPLFOYBRVIJNHWGEZBWTUMNUTOGIEEEDTKZREWLUYHUONNKNKRZSOQNSJJSDFXITACBVRVXCSGBIMCLSVAWJUEWSATHXGQVAPLQYRRYJVUPBJIOUFNNRAEOZMZLZNSDBSRNLMKXPWYVBMIYSLFLXHJCQGTPPZXFLPCKMRTPFFZIAK");

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
    msg.setTimeStamp(0.24652923153852513);
    msg.setSource(36029U);
    msg.setSourceEntity(135U);
    msg.setDestination(51165U);
    msg.setDestinationEntity(105U);
    msg.timeout = 34772U;
    msg.rpm = 0.3504996291425113;
    msg.direction = 130U;
    msg.custom.assign("MIQCTMJTZTQHUBPMBTDCUGKZXMEEHFFVSYAEAPINOAXZGVRHIMLJNDJUOWQAONZEOYFDVTTBWMSHPHURFLAZDALVXTHKXEKEPOZIFPCZEULSUULCNIGCUGZFULRXVTDYSDTGDDIKBLPYQJHGKGJBYUPBVJYESQRKLBPXQOIOLCWASQNJNHPFIAPKCVWMYXMVNGBVXCQHBNRMSFZWRK");

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
    msg.setTimeStamp(0.8944881373760837);
    msg.setSource(34838U);
    msg.setSourceEntity(14U);
    msg.setDestination(34740U);
    msg.setDestinationEntity(249U);
    msg.op_mode = 23U;
    msg.error_count = 26U;
    msg.error_ents.assign("HBQGCCROWNDDSKAWCLRXSQJAHLKBTBKOESDMTVRRPTGAUGDCQQVRJCMB");
    msg.maneuver_type = 38710U;
    msg.maneuver_stime = 0.7578166603300802;
    msg.maneuver_eta = 57198U;
    msg.control_loops = 2801747683U;
    msg.flags = 152U;
    msg.last_error.assign("RQHZDBIXWTKLEWCUQSSRFHBSRRKNNVVGOXZUCPSTGALAQTKAHMEEVCG");
    msg.last_error_time = 0.49676235797103485;

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
    msg.setTimeStamp(0.027576636119679865);
    msg.setSource(47226U);
    msg.setSourceEntity(36U);
    msg.setDestination(46869U);
    msg.setDestinationEntity(15U);
    msg.op_mode = 84U;
    msg.error_count = 217U;
    msg.error_ents.assign("LNOAOTKVPIITOZBCVEXVIJENWPUWXZPFKIGFQHGLKXWQHNAKPWDWVFHJTFMTDLHBQTHJYFODTFKHVCYBNCXOPSTJBLRSDDOWWAYGSWXXWQKGUYBMBMMQYNULYAFYYZEJOCBURQIWXUVPFUIZLAZZIVXHRURAKIAITNYUPGCSJRBABMFEIOBNNSOYMXCRXSKG");
    msg.maneuver_type = 39646U;
    msg.maneuver_stime = 0.7688164861168871;
    msg.maneuver_eta = 23230U;
    msg.control_loops = 3070993568U;
    msg.flags = 125U;
    msg.last_error.assign("PIDKLNHVMCSHETLQSHEOYROMAWRWHPIEHVIAFHVEWCTKUWVSWBVLWRSUSUEJQPCGLBJMJLRVKZOQKZOQNCXCJGKIVJYDZUHJNISIPAMAKLEMTXGYAEFFYDNUFNOJNBWRYYFPDPXZWDHTTKQTAGQJVUQYYONFDIBAZPFUXKQNEEFRVBLLWSCXDXIRUYMAPNAGSDZXXROGB");
    msg.last_error_time = 0.14205456330442512;

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
    msg.setTimeStamp(0.48625647667700544);
    msg.setSource(41312U);
    msg.setSourceEntity(223U);
    msg.setDestination(64183U);
    msg.setDestinationEntity(117U);
    msg.op_mode = 149U;
    msg.error_count = 107U;
    msg.error_ents.assign("ITVFHRMYJEMJEEZUNFGCHRDCAJDQIYSETWGCHNBBBRZJMVNBIXURROTSJXRPSIFRRSQKEWBCDAADRTOTQQGXIPKHGSVMLQLWXTOVVMYK");
    msg.maneuver_type = 47543U;
    msg.maneuver_stime = 0.3001699037757213;
    msg.maneuver_eta = 9499U;
    msg.control_loops = 2745635899U;
    msg.flags = 73U;
    msg.last_error.assign("WNPMIJIKVNKGHLUQQVDHQVXIWXOHXZPGRJCTYGHATOMFYBBQPVCFYUPCWTQRMXPOXVFKFNFEVHXKSRZBIOTWIDGXKZZJUAMPRPRNNRVCKZFDCZSMBFTAMIOANQ");
    msg.last_error_time = 0.04215753690146895;

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
    msg.setTimeStamp(0.05255236407598296);
    msg.setSource(57278U);
    msg.setSourceEntity(75U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(222U);
    msg.type = 235U;
    msg.request_id = 46687U;
    msg.command = 5U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 57285U;
    tmp_msg_0.lat = 0.23771558022133055;
    tmp_msg_0.lon = 0.909654762028337;
    tmp_msg_0.z = 0.23155733644476817;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.amplitude = 0.3692945453202656;
    tmp_msg_0.pitch = 0.12776872607802026;
    tmp_msg_0.speed = 0.8827873851823471;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.custom.assign("DCXWVGOBPKZSCTOLJLTGKDALFXVELGAFRNCGROIZQFDKJBKAAKRSLUCTYUIHWSVBCQVTRVZMFZKHEUONQMRKDRJXAOUGSYGHPUTGPZJMRPAQVCZZOYQGNIDJFXPYPUSIXVNULYARJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18424U;
    msg.info.assign("ULWKQABYLDJNLRMXJWFDBOMZWWSSUQCIQBYQOHFUNDMJPIODLAZTMHEODGFCHGKGPNPPYFRSOARCDREEMNDVSETJUUYYTLEXTSURVBKAUBRGQNXPFTZWCPTVLDSXTJXRHBAJVTGCHFAEISDNPVYPQBVLOKJPKICVXYLWWTKMAMOSHFZWZNX");

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
    msg.setTimeStamp(0.42695462890430547);
    msg.setSource(17070U);
    msg.setSourceEntity(241U);
    msg.setDestination(30320U);
    msg.setDestinationEntity(37U);
    msg.type = 88U;
    msg.request_id = 539U;
    msg.command = 48U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.7677526611712665;
    tmp_msg_0.lon = 0.013388660283956466;
    tmp_msg_0.speed = 0.9151687352964979;
    tmp_msg_0.speed_units = 186U;
    tmp_msg_0.duration = 31026U;
    tmp_msg_0.sys_a = 36548U;
    tmp_msg_0.sys_b = 38369U;
    tmp_msg_0.move_threshold = 0.6127947865340431;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5261U;
    msg.info.assign("GBJDDUNFCNGNZWTOULHWWUHMVDXJNZBIAETBOPPUFOAXDKCVDRGZCNGFLUFSGZYJYCBRZUKYMPQVHJZEPILQOCKZOXVMQBRMNHGESLXIGYXTBXDTHPVPNGKHIMOPHAIEYXJMBSWINAOENQUTFGZZFWFGLZKOXLERANRJDJTVWWTXVLVPFTJWBOSYRBUQQMYEASKMCPDCLHEQFRFDXYQULKWYTCTJAQQSAVB");

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
    msg.setTimeStamp(0.09770011014766278);
    msg.setSource(6588U);
    msg.setSourceEntity(200U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(20U);
    msg.type = 129U;
    msg.request_id = 62129U;
    msg.command = 10U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.162714100986054;
    tmp_msg_0.lon = 0.23967203098607426;
    tmp_msg_0.z = 0.8060772237672595;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.speed = 0.6382579799382603;
    tmp_msg_0.speed_units = 242U;
    tmp_msg_0.start_time = 0.3230575168042009;
    tmp_msg_0.custom.assign("LGJINCOUXDLJTUYBFWPFXSRSTIIDJHQCYMWBIWRFJOBVCZJIVPLASPXOXEAFAKWRFKPUNQXSPEHW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8174U;
    msg.info.assign("TNVDTPVNJYJQAVAGHSXBXODZMRDVD");

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
    msg.setTimeStamp(0.9567610375772038);
    msg.setSource(19785U);
    msg.setSourceEntity(57U);
    msg.setDestination(62980U);
    msg.setDestinationEntity(187U);
    msg.command = 247U;
    msg.entities.assign("YJZORYACTUXLYMUNAYIXOCNKHMGOZEPZWDUSARHTUFNSVZSQGKMKIPDAOSLBYVGTATQBBPMPOAUVJYRCMWCBIWBOQQERFILSVIQWTDLFLMVZYCHEGKCBWVOCRSIECTEIMDKDKHGKXJUMEOQMEHZKPRVJUGOFKDJBZGMWQHEUNFUXDWDXPLHTJSWGY");

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
    msg.setTimeStamp(0.26176562788517077);
    msg.setSource(40972U);
    msg.setSourceEntity(83U);
    msg.setDestination(25141U);
    msg.setDestinationEntity(17U);
    msg.command = 185U;
    msg.entities.assign("EZCGPAUDWCSKICPMVDECRDTZKFCTRRMNLDSKTFBFEJRUBXBAPNIGNTCRZEYLLWJVBESUVMQKRHINAEMGBTSWXVOEQUULIRFBLPXDWZNUQNPFVCOORTPKVWWTDQTKHOZPJLVOYMONPKBGQQMRKIOJUQRSNVIFHYHWQWBYFNZSYMXHILFSIPY");

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
    msg.setTimeStamp(0.8330025835058583);
    msg.setSource(63136U);
    msg.setSourceEntity(91U);
    msg.setDestination(56172U);
    msg.setDestinationEntity(19U);
    msg.command = 75U;
    msg.entities.assign("EFNRFKVLXWIFACONOJKCICRDHQFRIGMHGPPAKIYTEVCJLIMKNEGTUUXTBSTGBOXZRY");

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
    msg.setTimeStamp(0.06604909058136499);
    msg.setSource(46406U);
    msg.setSourceEntity(175U);
    msg.setDestination(28509U);
    msg.setDestinationEntity(54U);
    msg.mcount = 141U;
    msg.mnames.assign("VYQWPAPIOUAQSZCUPFHXINNSSEMGLXBQLAXELNDBJTXEYIKINPQW");
    msg.ecount = 72U;
    msg.enames.assign("QBMEIVAZJBEKFZXXOEZOPTTVTXYNRGGECCNSOXAAYPZASCHNHDGJVQDFTFOCHRJKAELCXMLIJRIJAZIWKZYLZMDINCTJQUX");
    msg.ccount = 53U;
    msg.cnames.assign("OXRTWGSAYIXUOKFACOZBIAEF");
    msg.last_error.assign("LAHHOJUUKMKMTWWYAVEYBETBDEFQPWCTIBTXMMRZSWCWUZMMYZIVKYQLXJNIEPEVDVYGWDAROCNFCRHIAZMHIVKEAFZNJTBQHKVPNOGHQPPOWEZGCYYY");
    msg.last_error_time = 0.4320571590998459;

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
    msg.setTimeStamp(0.5247177110598071);
    msg.setSource(14232U);
    msg.setSourceEntity(139U);
    msg.setDestination(49093U);
    msg.setDestinationEntity(251U);
    msg.mcount = 118U;
    msg.mnames.assign("RBAKGQCTUCQDOYXJDELQAXDZCUPMYOJLTVPGGZROIHEQBBHQLWMFVBSOTSGCSCWDMMZJINPPXQEYSUZWXLKFVMGIDCNYEXGIIIKIVAIGZNWKYQPJRJNHRSEWSOBVDDNSZFAMYTZGFXUFVHENXQWZPDLWUAGLNRTBKUZLHEUTEFSECUTCOWDABUJJUNPVIQLMFFSCHMHAWRSJFROVHBKXNBVKORZDBKJY");
    msg.ecount = 178U;
    msg.enames.assign("YTROVXHWRUPMMKPGLFETXPDJJNBZHKKQCYEPCBUVCFWDXGEDMOTELATIIUOWILIITQTVWUNDFPSZAQARL");
    msg.ccount = 237U;
    msg.cnames.assign("ZVLWQUKPWJXCLIGZNTAAWSAUAIHDDPJXKAYUQOBGZKIWGNEOUBPENEJOTUBTMSYAEGNLRQITDHLYCDUNIPEMHZKSPGWDZVTRHZCEGHTALSRFYKYKSXTCYQQGURYRMOMCOWSSYBHHWIXLYJABNPVCFQPRFRJVVZHWOUDWEDMGFOIPXPDFRGFMDVHGLAIEFLKQZZNKZLUOKOMJJRPRXFUQTVJNSOIVTMD");
    msg.last_error.assign("DSRVVNCQUYDWTLDIRJQUWTNHVRHLFMLKREXWNAZIIPEZZHOQOZFXRELSAGBRXVDTCPBYGAABBGBDFFYRWVCXWEFOTLEQVEGNUXIJHAKMCPTYQWJSADGFIIINTUPNCFMTUIOLQMTLZFMOZMWXJSOPIEYWRHRKWBJGKDYFMPJNNMXCTXQSMMSDBZHEGKJVLARSYKLFUPZAYOJNBAVH");
    msg.last_error_time = 0.11703803902443932;

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
    msg.setTimeStamp(0.12197593556545683);
    msg.setSource(36558U);
    msg.setSourceEntity(152U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(167U);
    msg.mcount = 200U;
    msg.mnames.assign("EPAHQLKALCGRBIQCLRRIRQXNIKPZINDOVSICBSPHWZSEQJTLHJUVWJFISARANNWVMFSOBDQAMJTCXQQMPKUSNYCLQTVYJKCUTQFQIJOZNYJLXMKTVFHTWZYKTYHMSGSNXFGLGSEDYVCEOGDGBONRERKEEWIUDFXLZMUPHUDRVJBZKCEPUDLTVKHLBGHFGMZXXNWXVHJZZFDAWORDXTPBFOGYOYCBMVWAPDROFHGOWEBAEU");
    msg.ecount = 30U;
    msg.enames.assign("ZLCAMWKWEDJWIIRUJNEHBNZSCJESPMDNIHJEUURWANOEEPAUNJZKYWQPLRCJFGCKPGXKLDGMXVUDBO");
    msg.ccount = 129U;
    msg.cnames.assign("ZVRFJTPBHXAUZYMSETNNWYNDQUDPGXRUZZTBOAYHFLRHRYDVJAWVGLXSZWXMHQCTVSFJJBZVGYPCCPKPCZGETLXZMKPQIKXMKICZWNHMUGBCVOFQFGYPJLGITFM");
    msg.last_error.assign("QYFVPVCDXTZYQBUGAUDWQDC");
    msg.last_error_time = 0.31649113921390704;

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
    msg.setTimeStamp(0.9698669127957988);
    msg.setSource(55721U);
    msg.setSourceEntity(147U);
    msg.setDestination(27320U);
    msg.setDestinationEntity(221U);
    msg.mask = 109U;
    msg.max_depth = 0.6475829292422085;
    msg.min_altitude = 0.8822888765202119;
    msg.max_altitude = 0.9767428676796097;
    msg.min_speed = 0.6712932501722366;
    msg.max_speed = 0.4050382016022781;
    msg.max_vrate = 0.6464042164609592;
    msg.lat = 0.28099890916495074;
    msg.lon = 0.3989006263336994;
    msg.orientation = 0.12673288612609435;
    msg.width = 0.2729599198425239;
    msg.length = 0.6199444393315915;

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
    msg.setTimeStamp(0.0704501853007311);
    msg.setSource(19404U);
    msg.setSourceEntity(44U);
    msg.setDestination(17712U);
    msg.setDestinationEntity(103U);
    msg.mask = 135U;
    msg.max_depth = 0.012161497449901248;
    msg.min_altitude = 0.9565388079545938;
    msg.max_altitude = 0.21428096129851593;
    msg.min_speed = 0.30485544020213107;
    msg.max_speed = 0.45397354840632875;
    msg.max_vrate = 0.509430886064483;
    msg.lat = 0.013307221980296102;
    msg.lon = 0.7876098609000238;
    msg.orientation = 0.6074443562288085;
    msg.width = 0.41148929127382516;
    msg.length = 0.9090034025550162;

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
    msg.setTimeStamp(0.4832399917552217);
    msg.setSource(6177U);
    msg.setSourceEntity(100U);
    msg.setDestination(62799U);
    msg.setDestinationEntity(174U);
    msg.mask = 197U;
    msg.max_depth = 0.17568011505770453;
    msg.min_altitude = 0.36523240221982234;
    msg.max_altitude = 0.14281406035119193;
    msg.min_speed = 0.4126968052488049;
    msg.max_speed = 0.016835835224017215;
    msg.max_vrate = 0.5383570510584429;
    msg.lat = 0.2598409994171559;
    msg.lon = 0.30686758401194647;
    msg.orientation = 0.5391003761386818;
    msg.width = 0.2469213526075804;
    msg.length = 0.8158900655860212;

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
    msg.setTimeStamp(0.8749275587956427);
    msg.setSource(12841U);
    msg.setSourceEntity(174U);
    msg.setDestination(54715U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.35849133962509305);
    msg.setSource(27253U);
    msg.setSourceEntity(157U);
    msg.setDestination(49117U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.6785956376538128);
    msg.setSource(45998U);
    msg.setSourceEntity(99U);
    msg.setDestination(10248U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.8631178998573924);
    msg.setSource(61428U);
    msg.setSourceEntity(179U);
    msg.setDestination(55628U);
    msg.setDestinationEntity(232U);
    msg.duration = 61873U;

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
    msg.setTimeStamp(0.9080144054146686);
    msg.setSource(20080U);
    msg.setSourceEntity(177U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(154U);
    msg.duration = 42412U;

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
    msg.setTimeStamp(0.06679568016884385);
    msg.setSource(6394U);
    msg.setSourceEntity(69U);
    msg.setDestination(43105U);
    msg.setDestinationEntity(99U);
    msg.duration = 32282U;

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
    msg.setTimeStamp(0.9707369831196186);
    msg.setSource(14277U);
    msg.setSourceEntity(173U);
    msg.setDestination(33952U);
    msg.setDestinationEntity(156U);
    msg.enable = 68U;
    msg.mask = 369463974U;
    msg.scope_ref = 3235095969U;

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
    msg.setTimeStamp(0.3495768424194752);
    msg.setSource(8468U);
    msg.setSourceEntity(98U);
    msg.setDestination(40383U);
    msg.setDestinationEntity(180U);
    msg.enable = 188U;
    msg.mask = 2242765951U;
    msg.scope_ref = 2906683104U;

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
    msg.setTimeStamp(0.023569330072849226);
    msg.setSource(63351U);
    msg.setSourceEntity(82U);
    msg.setDestination(12904U);
    msg.setDestinationEntity(42U);
    msg.enable = 24U;
    msg.mask = 3703145806U;
    msg.scope_ref = 835502911U;

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
    msg.setTimeStamp(0.41253980621898634);
    msg.setSource(49968U);
    msg.setSourceEntity(192U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(245U);
    msg.medium = 123U;

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
    msg.setTimeStamp(0.9763144525546203);
    msg.setSource(25886U);
    msg.setSourceEntity(54U);
    msg.setDestination(729U);
    msg.setDestinationEntity(215U);
    msg.medium = 78U;

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
    msg.setTimeStamp(0.2347490471520881);
    msg.setSource(53950U);
    msg.setSourceEntity(7U);
    msg.setDestination(43686U);
    msg.setDestinationEntity(166U);
    msg.medium = 197U;

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
    msg.setTimeStamp(0.4799411391655266);
    msg.setSource(61634U);
    msg.setSourceEntity(7U);
    msg.setDestination(55388U);
    msg.setDestinationEntity(108U);
    msg.value = 0.4774968140009136;
    msg.type = 160U;

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
    msg.setTimeStamp(0.8249465178782892);
    msg.setSource(35811U);
    msg.setSourceEntity(9U);
    msg.setDestination(28512U);
    msg.setDestinationEntity(162U);
    msg.value = 0.2296101150237736;
    msg.type = 27U;

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
    msg.setTimeStamp(0.9331744540635193);
    msg.setSource(10426U);
    msg.setSourceEntity(99U);
    msg.setDestination(40662U);
    msg.setDestinationEntity(2U);
    msg.value = 0.7444791293428656;
    msg.type = 117U;

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
    msg.setTimeStamp(0.856857601732418);
    msg.setSource(62510U);
    msg.setSourceEntity(73U);
    msg.setDestination(22334U);
    msg.setDestinationEntity(23U);
    msg.possimerr = 0.8047473070823521;
    msg.converg = 0.5594088865737114;
    msg.turbulence = 0.9656957922930959;
    msg.possimmon = 146U;
    msg.commmon = 17U;
    msg.convergmon = 32U;

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
    msg.setTimeStamp(0.02369134308670451);
    msg.setSource(44870U);
    msg.setSourceEntity(109U);
    msg.setDestination(4041U);
    msg.setDestinationEntity(237U);
    msg.possimerr = 0.6660947100909965;
    msg.converg = 0.9293411135711908;
    msg.turbulence = 0.8313013613773979;
    msg.possimmon = 28U;
    msg.commmon = 11U;
    msg.convergmon = 70U;

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
    msg.setTimeStamp(0.6036818306950545);
    msg.setSource(32766U);
    msg.setSourceEntity(240U);
    msg.setDestination(46236U);
    msg.setDestinationEntity(8U);
    msg.possimerr = 0.4553310060380359;
    msg.converg = 0.665912094303863;
    msg.turbulence = 0.7854524596152114;
    msg.possimmon = 200U;
    msg.commmon = 129U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.1976266236937294);
    msg.setSource(10018U);
    msg.setSourceEntity(50U);
    msg.setDestination(26027U);
    msg.setDestinationEntity(122U);
    msg.autonomy = 212U;
    msg.mode.assign("UZOOOSDCZIWHAKROFTKYAFLPLIIHJBWZMBVCWVNSTHQLDUTFTKCWRLVRCKJSGGGZNSRZOBIGXWDHMRQ");

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
    msg.setTimeStamp(0.24147887810594182);
    msg.setSource(11013U);
    msg.setSourceEntity(197U);
    msg.setDestination(8627U);
    msg.setDestinationEntity(226U);
    msg.autonomy = 28U;
    msg.mode.assign("QINDDHILNYYJXSJURWCGLYSLPZJCRSBRGQDAQZKMOO");

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
    msg.setTimeStamp(0.829058786246973);
    msg.setSource(8527U);
    msg.setSourceEntity(177U);
    msg.setDestination(29738U);
    msg.setDestinationEntity(84U);
    msg.autonomy = 151U;
    msg.mode.assign("VPGHGKUQZEPYHXAKZIXPLGUTTFEHHOFROMRQWZFGVKBNWJJZLDXQIXMYQZIAQCCBNLEDAJKSMDARSCWSQUPBOYYKJUHRUSXUQTOLICKRAUERMMAAOTQVMDSBFNNDYMOMESVLLXZOXSWIYNCXGKQLGNXRECSGHFZBBDKXYGCITYIEFQNBTVHOIETAWWPHVONJDBSWCVPGLPEYVSUGZBDKJJ");

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
    msg.setTimeStamp(0.7583075212311929);
    msg.setSource(40738U);
    msg.setSourceEntity(106U);
    msg.setDestination(41933U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.3668732119469127);
    msg.setSource(18500U);
    msg.setSourceEntity(234U);
    msg.setDestination(9537U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.48562359533513155);
    msg.setSource(37216U);
    msg.setSourceEntity(28U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.9132838466209964);
    msg.setSource(29868U);
    msg.setSourceEntity(56U);
    msg.setDestination(16876U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("RFNUWPOSHTZBBIIXKRZJEXCGKSGJGUAMZWLKUYJSLNVVMKKOHKXPGFWQTYSZNGYJEV");
    msg.description.assign("QWMBLDQXQUFZXXEMHSRNIKPNQMRJGTESVYUNRXJJKONKIOKZHVGASXJPGDPTCHHWVEJNMWPTNKUDFSZUOCYYAUOMPWCZRRNKVASAYYTBMBIBSZ");
    msg.vnamespace.assign("DCZRHUWQOTZWIECOLCSWXTSYUCSEGTGXHYUHFBIHNZXKNEPQAKLPMRFTLWJDFTUQOVEAISJARVYOSMFAUGRWPUIQWOIYTLVBIJHRCHLFZNHMSW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ONWACEKPMRDTYYNOXOUCIXBOXJQBSKPLMALFNKNUJJBZKQIERFTKCABGZRUBDZBSZLEIEHYWCSBHMIGTGBPPNJNMEFIP");
    tmp_msg_0.value.assign("HYMMQOHIUNBANYWCJIYXFJQVWYUMECEJGPWANRCVMSNRWXSCJUKGZKAZWSLQXPCHWXVSSCUZVBVEWFIWVUHUULKFGVFHBRBBILUEVXLIKLJDEONSEYGGDXHTFCPLIAVOHIDAPCBIETNFQMTZSFYGNTDAT");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 62U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RHTSQEFUMDXPAZHIVDMHAFUISXNYGEBIOAIOLCXOWYDCXRERIPGJMFXKQGTWDKZPLOZPXJNWQBNEMPAEWRTMBNBQZJACVFDNWXRHDGSEFRGFMUGBJZVUIEMLQKOOCJQNLWSMBWLLOJCYFLUZORKJFRVBAVJFETMUQLQDIXHAZKHCGDV");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SDAITZACWUWQVUFHSZCZDBNDBGKQQGITSZEIEYPXUTRGPWYQRWPKWBDEXLHTIPNGDBFMITOEZMXYFCABQCRQBWESSAFVDXYAAZIQCETIJWCYTPTUANYNDOLJJMCYBYNNFU");
    tmp_msg_1.dest_man.assign("OQQWSYNZIXCVKYRFTXYJIXBGRBCRBLFJQTWYFJBJSVJQDNCPXEEAUWXRLHMRGXTENLFHAELDVSTWCOFODJRYKUPPVFOPZXPPMNHKVUCMZNEIPVBAPHVXFMXCXSCGDATNYDDZDUCMBBIQMHNWREYKVAKZGKJYMCIAGZCZDGAWBYEHHFOOGZIALIKTKUJTUWNUQDBIUOM");
    tmp_msg_1.conditions.assign("GVSOVJSXLYSMJJFAVDPCMKNYLDGEDUIQZOAWCENTITSXLQQMSIZMOHXMMUJAALEUPWHWEPZKSKTPZRUBAORAPRNYLRHIKDHVLNWBGFIUJCWKHYBKBRFPMXTSQVAELOTHYF");
    IMC::PWM tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 5U;
    tmp_tmp_msg_1_0.period = 2717292876U;
    tmp_tmp_msg_1_0.duty_cycle = 3871839590U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6744352210440137);
    msg.setSource(2035U);
    msg.setSourceEntity(102U);
    msg.setDestination(20966U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("WQVTLFXTZWZYUAGGENAOFQIUZVGYLOIBRSFOLVITRNB");
    msg.description.assign("JAODIKQXFXQMAWGMIBQUVTDUVDHSLRHRBEBPHOCKULQSLLKJZXKEBIRJHAASJNOGHBNPLRCXIMISRMGQFRDPVCBMTTJQRNBLOFPKCYNRATEUQMSINCMEOPGIODKLVYPLIHAOUUZVPZNGXHGRZMKWAVLYATYJEVDZFOTPEWKETYSEXVFXYWTFZTDBSMXCBCCNDJHZEFYUCHUEGPIGZWGUGAZPNKCFUWIDLXNROSQYWWBJTAFOFYSWYXDNM");
    msg.vnamespace.assign("HADTPIWAMFLPKVUEVXUYLWEKGFSWFQGQAGAL");
    msg.start_man_id.assign("NSSALBQAUAFKIFOMILSYFDHTUJUABCZZKMMYTKSQOUDNYPJLDRROKZBHNNYVFEWAHJLTNYYICEEHWRXVXENICFFHUVLJMZJDUGLELDXZZZCVCDQCHQSKTTQQIVMNSEOAPHGKBRWRJGISUGVOWOITPXUYZX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QHHKGWRZZVRIVXNTRHUAASAIDFRJCYBXKLESRNFDWCNHUWYNHBJXLAQPIJPWKFGTJCOEIECZLKMSQGAALDNFVMAOEMLSYD");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 62414U;
    tmp_tmp_msg_0_0.flags = 48U;
    tmp_tmp_msg_0_0.lat = 0.3171937529388428;
    tmp_tmp_msg_0_0.lon = 0.2865261189751953;
    tmp_tmp_msg_0_0.start_z = 0.3093192655978335;
    tmp_tmp_msg_0_0.start_z_units = 40U;
    tmp_tmp_msg_0_0.end_z = 0.22425675326073058;
    tmp_tmp_msg_0_0.end_z_units = 10U;
    tmp_tmp_msg_0_0.radius = 0.37763400523675705;
    tmp_tmp_msg_0_0.speed = 0.6893113690956575;
    tmp_tmp_msg_0_0.speed_units = 13U;
    tmp_tmp_msg_0_0.custom.assign("TGJLYTWQJIWBEGOOIXTRQQPLGUZXVMBCIZMRGFPARUUHNLUJAKZQGVKLWOYNGCYIBOVHNGJSBKPPTANXDKNJTFLZFYSLXIFDUAELHDCSBUFKSLYFEOOZYHXMDEDRVMZDTPJIXECEWKVWYQZTHNPMIRSE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Map tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id.assign("QJMDXEUNCOWIYENKKTAFVBHLZANIQOQGUBMGPQGLPLALPSJGCWZFASHHBENXTJVEVMBBRGAVJKCDRABNBVPVECLYCYONWHOYOPMZEENDRPYSUSUQZTGJCGKVIPXBYPTLMFKGXOEHQFRCMZGMSONJUYXICRIYPOUFQEZDDQXTYJPKTZESJACYRAFVXWBHXWIFKTTDDITNRSMVFWIFXARMU");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.08646965136482698);
    msg.setSource(49650U);
    msg.setSourceEntity(73U);
    msg.setDestination(46593U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("TWVGCMWMZSTRLIGGYMAROUOKSJSFEMHFGEOFWROPZHONRJGDCLXIXHQIYKKHWEVLHYWNAINCKFLRURITUVLNZBASHJDPMDSZSOGSXDTNJQUIYMICTZENXASKXQCBLGEDVBPGEVQWBZAYJWJENLPZVDAOHOBFBKIEYNDCPJRQMFDBUUQZGCER");
    msg.description.assign("CJIONSDFNBLHBGDYQUVBPDURPHERIAMLAUVRLHNXCUKDMSGBZFMMOWUTPJKMWEJSDOIBXXFXJEJJABRCBFABRFEPYCKSVAWPJZYSILRHZQWYFVMQANROVYTK");
    msg.vnamespace.assign("SAKNWBOYUGUVVGWIJPRYGECLHNATCFFPIIZOUELFBPXLUTSODDPCWOIBWLOCURKRLSMHDATLRSITCYVQMRKFBHPTKJWYZVVIBQUNMBFKGUYZADWIRIDATZEXCONQXIJGKQXQXBPPZPNJJSIXQWVCLQNUFDNREFNSZALV");
    msg.start_man_id.assign("TKGYUVCUCZZGMDYUCJIDIWQJOWQXQUIUTXIXWMJEHULVWRPQJOVYXKNCRVAIENRCPOPNEXWSQSPZFGMSSRHFCLIEQLTJIKYGDVLZTTOIMFGLBRQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UPSTMVGOHKSCIIQAXROPDAFQMQWXPMZAQMGROOUGYGYSLTAMJUYBBICQEPDGIUYZRLKIOUVDONHNRCIZDMYRGYBAOHDPKZDHQVWVKUQLWGIXREWKJXWTZBQXXYCPYQCUWFJCFEZBVLJKTGNBZJAEDAHQGWMHOHTCKSRLUZNEBEENESFAKYWHSLCXCUTFGX");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 15410U;
    tmp_tmp_msg_0_0.lat = 0.42593215874151213;
    tmp_tmp_msg_0_0.lon = 0.985999306280179;
    tmp_tmp_msg_0_0.z = 0.9297227812186007;
    tmp_tmp_msg_0_0.z_units = 80U;
    tmp_tmp_msg_0_0.amplitude = 0.4889935625616775;
    tmp_tmp_msg_0_0.pitch = 0.26028189152585945;
    tmp_tmp_msg_0_0.speed = 0.5011739950874533;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_tmp_msg_0_0.custom.assign("WXODDVGFAZEBELYVENHAJNJUKEMLFMSFAHEANQRBVVXCJASOCFQDXHRKRYRNGBASUVWSMPLFLGDLIPQOTCNJLMHHGUVJDDETYSTZHNMYAKTIXZBBXKNRYUQJBORIDPWJULQWQTMKMIILGWAFGOSUZDCQYRU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YTXAPGRRLHAQMLMKDKRSRFRSYBPKCPDZXEQYRZGYUPEHVIWHK");
    tmp_msg_1.dest_man.assign("FHCEGCLKASQIYOQROJOWVUYTYFTJUMACQSIQLV");
    tmp_msg_1.conditions.assign("QXGKMYMVJWZXKYHCWFSIYJMHUPEUSOAPSTTCLYSCOZUOQPEMELINBIL");
    msg.transitions.push_back(tmp_msg_1);
    IMC::EntityParameter tmp_msg_2;
    tmp_msg_2.name.assign("CSELLUATJXHPIUSVYSTVQYALJPANLBYTWFERIPPPEOWGJMUFTWFARMYBCXJGXDLQEJYNNSBLSZLQVZKDQISQOUXRMWIXGINFMNZYJNVQDTMMZCZHMKJVWJWDNEPZVFKBYUSSVBGYNWVHXSBKQKFGWICRXNHKKXJFHEOTKPG");
    tmp_msg_2.value.assign("XZFKQGQEJBYIYFZXIAVZUVJSQMXKNOZKVVENNRNBPGQATEABXHEUIYLXULLRCXIOMHNVU");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Goto tmp_msg_3;
    tmp_msg_3.timeout = 4946U;
    tmp_msg_3.lat = 0.7568892730798842;
    tmp_msg_3.lon = 0.77477600135823;
    tmp_msg_3.z = 0.3645045627052206;
    tmp_msg_3.z_units = 109U;
    tmp_msg_3.speed = 0.8292115181198932;
    tmp_msg_3.speed_units = 63U;
    tmp_msg_3.roll = 0.920255621444427;
    tmp_msg_3.pitch = 0.6406720955288003;
    tmp_msg_3.yaw = 0.2597044521148748;
    tmp_msg_3.custom.assign("UFDFXFOVSZYPRBXVWDCUOKTGVLPPJHTKKZCIEAHDAQXMYLUBXGJJ");
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
    msg.setTimeStamp(0.6709878380750414);
    msg.setSource(37781U);
    msg.setSourceEntity(248U);
    msg.setDestination(57043U);
    msg.setDestinationEntity(195U);
    msg.maneuver_id.assign("LBZHDKQSOYNWHPBXZYNWLHALBSOWWZEEOPONIVZFDVIIGMCHISQKREZULWMWUQHYXRLMDLISKENNQMY");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("BFCPTGFPEJXISUMQCVIYUREPJIDITIXIQLYPTSRHPZOKRMGLGAKZBWQFJRLAGAGWNXJFXGAWYQZCZPBMEYZHENQTVMHRLKDITBDOM");
    tmp_msg_0.formation_name.assign("MCQCRHZDHGNNCHHSNYTNVUZOPVTXVEENPSMGKPUZXIKNAPBUFONWSQKXVEQHTSOEOKIUAKOADSUFXTBZDAJJRDIJQZQJJMJWPHJNRGFEYBDVQKMHWCHTGILLA");
    tmp_msg_0.plan_id.assign("VYQGZXLBWSTHEGEDVKYOMOBRJGNJOCFVNKLQZXWKVBKYYOIPLFUSZPIDODSFNCNZQQZJVHKXTZUWEMLSQDAEPVJLBAKTLGQNHKZNWFTGYISZLPPODREVJPUIWXTIXGFREEIRQHRCEUTJJUYGVAZPXDMGTSKDUDNUAQJJJSWFCNIQFMMO");
    tmp_msg_0.description.assign("NOMBEQDVSWECFZSG");
    tmp_msg_0.leader_speed = 0.778828456016888;
    tmp_msg_0.leader_bank_lim = 0.8822315409621718;
    tmp_msg_0.pos_sim_err_lim = 0.3431212146413126;
    tmp_msg_0.pos_sim_err_wrn = 0.2089633242938893;
    tmp_msg_0.pos_sim_err_timeout = 40836U;
    tmp_msg_0.converg_max = 0.6574694270422581;
    tmp_msg_0.converg_timeout = 23451U;
    tmp_msg_0.comms_timeout = 27144U;
    tmp_msg_0.turb_lim = 0.019256584331274862;
    tmp_msg_0.custom.assign("SWBZVMDREVPJHHAZAUTDTDZJSLKSIWTPCVDVUNZRQSYDPWZMXAJNUFISRRNONNHKDXCTEOYXGMZEWCACUMILEONYDBDUIGKHFFTPZJQGOQLEOPJJWYEJXQOGGLUPBEGDNLFMRYAXIXLOYFFQI");
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
    msg.setTimeStamp(0.4368515857142088);
    msg.setSource(24651U);
    msg.setSourceEntity(14U);
    msg.setDestination(17693U);
    msg.setDestinationEntity(23U);
    msg.maneuver_id.assign("ZDTIZSLODUMZFZEGXOPPCNJJOOIQFJTIUCONXLUQUGPIMBBJZYAYRYSKIVVHAKXGHNAFDIAQTVCXTPDWQYVWHKTYRVVTMSMBNNKAHWRHSQBQYLJZHFXUMMSZHAUJLOVEEPBXGGWGMWLKESINWDAFDMYYWTDRFQTSCRYACEPOZZLWJUOJNQRTPNOWYUKOTSFXKCVUEBCLLBRGXMBVJMQNSPLSEFPFZFIIADGDKHJLCPX");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.0900118472927941;
    tmp_msg_0.lon = 0.20163066494682358;
    tmp_msg_0.speed = 0.6739100064285155;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.duration = 62887U;
    tmp_msg_0.sys_a = 3031U;
    tmp_msg_0.sys_b = 5738U;
    tmp_msg_0.move_threshold = 0.33788020176354616;
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
    msg.setTimeStamp(0.7407722345273262);
    msg.setSource(14161U);
    msg.setSourceEntity(155U);
    msg.setDestination(58766U);
    msg.setDestinationEntity(162U);
    msg.maneuver_id.assign("XWUOTZJVHNVMMYBTBWCVORKWGSHMLXCIASBVNYCGQWQWQPNXRTEYLZCDUNCFTVZRPXBHIZQLIWZJGEVKMUHEQGMUKLKBZNGDORODCGYOFGUSRXUBDGTIEUWHEKJKRELAYNIRCPHSXPQKJDJCRHWGQWJDFJXSGDJDORFAOVINZ");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.18929937844851796;
    tmp_msg_0.lon = 0.2927881524159265;
    tmp_msg_0.z = 0.9207373542436793;
    tmp_msg_0.z_units = 67U;
    tmp_msg_0.radius = 0.05421268435610571;
    tmp_msg_0.duration = 35856U;
    tmp_msg_0.speed = 0.5356466686888753;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.custom.assign("YFZCJKKBRERDNGIVPNLPSMWIGSZXXCYATDZOOUVVJQMRBAEYQFURHEQQLHXCHOUBWJFQJTMUBVDPTTORREGGPCHKTMYVKSBRHYKXNRRZHOEJMAMFTIPNWQJXKBUGUPKOA");
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
    msg.setTimeStamp(0.3754485577892793);
    msg.setSource(6018U);
    msg.setSourceEntity(37U);
    msg.setDestination(7536U);
    msg.setDestinationEntity(43U);
    msg.source_man.assign("IAHJZBYGFBETKDIEPGRGHMDSAORXXEWKWAEHIUAAUGHWURNIMCYKVMLXCPFWKXBSJCNHNFXVSUCJIOS");
    msg.dest_man.assign("XQLWIJIHHYDVNRWLWQBZDNWEYJKXMFLUCWQZTJFYMNZMHKCIKFGNSQUFVLCSLQFI");
    msg.conditions.assign("BEAKDSRQZHGNKWIGRADMJHLUVSZJRVVPXNNGBJRJBWTBLSSITVAJCKY");

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
    msg.setTimeStamp(0.49596824417702645);
    msg.setSource(35282U);
    msg.setSourceEntity(16U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(180U);
    msg.source_man.assign("MYVOWYEHSDNZCOUIZJFVNGCCYIIPYIRTLZKEWSAHORZECWGCVABRTKVDOUWCKEDEDLSLTJSFXXEYBUPGFXNLEBVPQAIHTJRHTOBIDPRRXWPCTXSQONFDWFTVKJQMJMUQAANUXTZUEVLPSFLDOBZSHBNEMUGCGRWMVMDHNQIGJQBXPWLHBRCDYKTJZILYBHJBHMSLQZGJIQKPXYNFFFIMAUNAE");
    msg.dest_man.assign("UTUITYWKFIJUSFMJGVRHOGQAQBKSOOLUPYVKWAEBXDFYOTIDRYNEHXREAWUDSEPDAJZFJSJNOGVHSZJNCMUPNFZMBWLRSHIYAMSLEFDBXGQGOQZYCCDHVYKIVYBZQXALBCVIFHGUHRPKGVDXLQNCQLORJWYALRGNSXXCTMLCUKLMCVZXKDHLWEPJQZTRAIPPBEGSHFYBXIMWMRBPMTKOHVSWBXUPKDCETZF");
    msg.conditions.assign("EBLLDBFVQSFKMLOGMIJXDALJVUZRFSMYDUYEXJQKTCOXGQPHHIEOCBWZHXVVKJNSTJRSCAXSIGRNEEZVBYJCDHTIKZGBODRICKZEIHIOYVPNXOTEZYGCJMPMAUAPBN");

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
    msg.setTimeStamp(0.23987391576430073);
    msg.setSource(42703U);
    msg.setSourceEntity(130U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(174U);
    msg.source_man.assign("ZZBIRAXFINKAIFEWIKFSCWILWFEAXUNONMRZZDFMPXSKYXJQYRECKTLGAFLLUBRRYPYYWOCMTUTDSJBCNWMGMOEVYPWPRYLRFIHCWXYOGQEVGDXYCPJB");
    msg.dest_man.assign("ITLAQXFEXRFBCUWFKAZVQNZGXZURFBTKLMYGXYUCENKNVQISOYMWBSZAEWMKBRPCJALWKEWVPSSGZVMJUJBQLBUAGFNTGZJXETBPOLVFHYTBHENOHOMQFMGZHUYNPIOLOOLJTXCKLYCPPIJNREKJACXVSOJJSISWDLOKUCNQSZZDIGMUZQVBIDPHRRQDWHYOXDQMNPCITKXVHBCDRIHAQNEVAPRGIWYAYSYEEFUTWHLKCSXDP");
    msg.conditions.assign("LYOYJGNKQUVRBZPPMWWPJNJIBPWVMPQCGUKDEFTHQCJNBCZUERPFXNOEVPMIPSJUYFOH");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 67U;
    tmp_msg_0.value = 0.052450187167732865;
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
    msg.setTimeStamp(0.7305433523416632);
    msg.setSource(53635U);
    msg.setSourceEntity(41U);
    msg.setDestination(49736U);
    msg.setDestinationEntity(89U);
    msg.command = 16U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZBJQPWRVXAHVARMRBZHIPVRBSCFTSAOUYNYZPLSGRLZDKKRSZVFUJZCBTAZ");
    tmp_msg_0.description.assign("CHILMGGRZHQVERDSXKCFLOTFNAUIHEAOLPZUWOZINCHVYKQQBNKKSKLZMJSHOJPHYTDFMDRBPUDBFINUBDKXTOEIWWPRXLPUSCHLAAOJMTIQCBAJHWWCNIVXOFJNDDRUEDTMBZVYZGUXQNENACGXHXFUWGOSMXDVTNZETWPSSYYLEDULFQSSKYRQV");
    tmp_msg_0.vnamespace.assign("DOQCNULSZKYGHJFIGACBGXKXPDEJCAVNTGMZSJXGMPTTMTVANCQBWAFOJVXALIRFEWEDBMNSIYUMYNRFPEFLQSOIVLJVSUA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VFIMHDMUTNJGGYJBMLLOZGXVGUXURWXEKP");
    tmp_tmp_msg_0_0.value.assign("IXWKZZYCIXCKGTWJHLHNVXENFODVUADZELGIXAXFHYFPQRYOBRBHFAETFOOLLPVXRLEMJGJAITNSJBPCQVRPWSCOKUCYBQPETGSFQLUTKHSUHSEYNNZKYBKE");
    tmp_tmp_msg_0_0.type = 131U;
    tmp_tmp_msg_0_0.access = 70U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JWEVZCDOGMEUTLJTFFCGUDHCIGLXZWVQEITBLKXNHBWZQJPNASRNUKVYFPVMSOBCEQXBMOARLQDRICWUWGT");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ULJMXSCEKJOQCDJNXNTFIRHQLRTPHNIXTYEOAZMFIIZDQNIWDPRZDOUVVYURRMBGEDFWHNEBMFOHERQYKCRTLKTCPFBRPBAVGSPQUZKUGFFBTYPMDVWEGCATKVJLBNJXCJZGGNVYMFVTUOXWGYINWYVXOPXSJHXSQOGAI");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9059542796443967;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6408029299789719;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8546279802578671;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 47U;
    tmp_tmp_tmp_msg_0_1_0.duration = 32225U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 40302U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 61179U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.5375915908619674;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::DynamicsSimParam tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 11U;
    tmp_tmp_msg_0_2.tas2acc_pgain = 0.6143154544208627;
    tmp_tmp_msg_0_2.bank2p_pgain = 0.46284046707586857;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.5232424931563097);
    msg.setSource(65269U);
    msg.setSourceEntity(39U);
    msg.setDestination(52359U);
    msg.setDestinationEntity(85U);
    msg.command = 119U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OQPEDGHXQRLOTSKFRWJKGHPRAZPNLLYXIXTRDIPTJVMHVAVUDXAAFPMOQWZREBBYHDNIKUSBUTLQRNSPGWCGHPDDOGAVDCNZTM");
    tmp_msg_0.description.assign("VNSNFWMGKRUCYZPUJWHXMYDTQOXBJSEKUBLOKO");
    tmp_msg_0.vnamespace.assign("ZVDEEDCDYBOPOFIJWBUNNGGRKHOQRKSALIVMYSIFITDWLYKJBYDMUHVMLGAOGRJOVECZVFNCKPWFTFKXJNHJLSNWHMDTSYGSYZKPCVP");
    tmp_msg_0.start_man_id.assign("DRMYOJENJQQXTUNITZSVGGTWDAESQTQSVHQKCRCRBAYKYTEEYVOUJXUMVEGMHWXPRFDTVLTPXHIJMBOBBPIJUZHLLPYYWZNKPSPBDKUODCGZFPWCPGJLMDAKRGMNVHRBTXUFYDSWSDXIBPOQJAKZHNCMIAJIVLCZQFFOEHDIFOQHZOZGYSWSTEKRRAXQSZNJGIATHLLDVWNHNELWJIIPSNOFGVFEXWKXFWRMCMCLBUQZVNXURAFBLOC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UVYWGNCJJDGAVULFXHYHJMPZXTRSOIRZEQETIOKWSLYZHMMBBRCBFBB");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7027755399202666;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.13705576907118167;
    tmp_tmp_tmp_msg_0_0_0.z = 0.9240687977136127;
    tmp_tmp_tmp_msg_0_0_0.z_units = 126U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.20674419934425825;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 44U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.05416561112597584;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.06106519882573824;
    tmp_tmp_tmp_msg_0_0_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EFDFSAQPVONUCNGYZUGYTTLNRODWTXPLQBOJHVNRAHPNPOSQXR");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Conductivity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.3819776640325009;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VTIFRQJWWZGHDOWDMSYCQEAOBXQUZNETVSGFVJHJFJQHAAVHKRUDUKVDPSBRLYXCVPXKJMBCTCBWOLESZMEFAWCIPHOTRLGOUJQLXDOXWRFBCAAUIGWNPIZFYDMLIZYSMJNNQD");
    tmp_tmp_msg_0_1.dest_man.assign("RBYJEKSVLPXEDKQCAZPASNGUDWZGUVRYIFHIADMOSJMISUZEEHJZGYWMGMKQLPE");
    tmp_tmp_msg_0_1.conditions.assign("YQORQGICZSKQEDYKLJAFSEDIIOHWWBDVLKBIYDCDCZOUIGTQMKXFXHBLXMGVTSAAHZNQEAMSMBDDUOTEJRHGTFWNLUORYGCTHPAFTBEFMXYIXKPCNPMGVWBKBSZRSIHNPCGMHVAZWFWHKJTCPUFLNTXOYAJRGIZNYPCLV");
    IMC::DesiredPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.path_ref = 845444139U;
    tmp_tmp_tmp_msg_0_1_0.start_lat = 0.6749641101764412;
    tmp_tmp_tmp_msg_0_1_0.start_lon = 0.9985326440531607;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.5716335954297395;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 115U;
    tmp_tmp_tmp_msg_0_1_0.end_lat = 0.496270742028625;
    tmp_tmp_tmp_msg_0_1_0.end_lon = 0.614122153969499;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.5277319230149653;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 169U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.5739335395463924;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 223U;
    tmp_tmp_tmp_msg_0_1_0.lradius = 0.7485688459577137;
    tmp_tmp_tmp_msg_0_1_0.flags = 127U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 3146U;
    tmp_tmp_msg_0_2.value = 19U;
    tmp_tmp_msg_0_2.error.assign("TPOHKLIHCFPLJWREOULIZBNCSCMK");
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
    msg.setTimeStamp(0.36732119843907896);
    msg.setSource(16086U);
    msg.setSourceEntity(229U);
    msg.setDestination(42058U);
    msg.setDestinationEntity(46U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PAXDFSDXFELOSJZZUSADGJCXYIESOHWCTQKMTH");
    tmp_msg_0.description.assign("KTZMRCUZFZOWEMLVXTDNDCPJYLRETBEAFMPTSYWKPBRAIQCUJQGEJSWMPBFOLJXTNQSOMUMQOWXCGXHOUAYIQQ");
    tmp_msg_0.vnamespace.assign("CXYMPGDOBKWAHBSPGWINFYUDISMXPMUGKEDFAVJOJXKJZPAGOHHKCVVXVZJEEZIPFHTIRITALVYGQAYWJKHMYDNLZHBQZDLNXBMSHNCBSKPYOSPRNQVUQBIB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JGWJRWGBILFJZSJVTMLYPPZPDXOJGAQIQEHGP");
    tmp_tmp_msg_0_0.value.assign("JTANHTGYJCMSGDDQQQVSCFVUFOVITMBMJILWFCISLRBANVPHSSVNHGLSYWZKRNINOAWABFYARNVUAHVMPQTFNXUPZJPFROXMAWFHWLNJUMKFOGTPGSPFKUEKBZEIBBTIXRSAXOMQZMCQGXDOXEOCCRDWYPTRCZUOUHW");
    tmp_tmp_msg_0_0.type = 109U;
    tmp_tmp_msg_0_0.access = 74U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZOHMDZKPDLLJAWYEPCSAJLFZXQWBNQDKHPJLZVZOSIJETOPXDQXIHFMZHMTJJNMJSWTTUDKFJGZUBXLRWNMPVFPGDRBOEDUSWNINAYNJGVQYWEYOPI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UKJEEYILKUWSPBCITMGGMOJSVHEPIMVWKOQOENDDNGCKGZZGMFJASFSRZOMYLEPYEQNVGKZAPBDJTJJRAQKIPCXUBHHPWXXCWLKSUJLBLBWZXZPXGYVSYUBRJUARMNYNUOJIMFQKIBAFGFGVF");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 39148U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("SSHZBFTLXGHAQVKMLFHOKSDCJUMJWPDDBPPXLQEPK");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KATVPNJRCH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EntityParameter tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("EORCRASCDZZIHRBPVNXUDCXIALDUUPKTFHCSCWQGDZVJQZPGWTXIZZPVJHMJCIRPWAWGFZCTVVWGXPQFYDWTYLE");
    tmp_tmp_tmp_msg_0_1_1.value.assign("VEXKCGJZHTHEIXWTRFMLZZDUZZRBNHJHASFVMRJCJLQKSMUCDPMMQGYEMWBAQOVTBYQUEENIVUBCMEBWMYTSACRLAGALANXNCMNEPSSVBUQSOTAIEYPAHKXZUMFPWKHFWJYUDYSNNBWWGIEPCQRBLGRJVIOCLOLLBVTQTNODDZTKYOFWNYRGRAQZHTPHLKIGIQIDUOISOYIOCZDVWOCGVAHQXDXTKPKJSXSFXDPWRFE");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("CWQQRTEAQPJNGHPMLSSFGZSQSFTVQVYOKURZJCEWAAMXIETQRUTKKNINEHLCKXIPBAOJWJGZJMPJWUGDXMDBSPKBXCVDKDXSDOZSIARDXRJGWKTCMELPXSNU");
    tmp_tmp_msg_0_2.dest_man.assign("WLVDJBSESZYUNCADBGVJBHHBJWKHHYUFLQSWITKNZFRXVUJFNKKIDCQBCZLTLSZIWCOGQERDTTMGGCTBGWSVJRBAPPLSAYXWQDXYIEVEAKSHSQOZIWGCITPBYLYJOIRXVAVOBTMNHXCDRTRMMXCYQAOOUWMPRYSYRFTNKORIAXVCEUHBFVQXEJNUQKPKDTXWZZPXEVUOFJHFGJNAL");
    tmp_tmp_msg_0_2.conditions.assign("LKZSIMHPUJANPTISJCMMITJTVTOYJGUKOFOGAXVIEFWKIHZDFLTATLZHIKBWBPUCILHHHDCX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::MsgList tmp_tmp_msg_0_3;
    IMC::Sms tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.number.assign("RRLNVZRZTIMSRYWEFUCSRDINKKNNVAOAKKHMPJVHSHFXTNUFOJDEKFOHMVTBXVGPICJZIXRQDMQIOYZYPDELOHHFDXACMDEATOMPGMZBQBQBNKZZVMSCSKGAQTWUJ");
    tmp_tmp_tmp_msg_0_3_0.timeout = 2315U;
    tmp_tmp_tmp_msg_0_3_0.contents.assign("DTRUIECGHQPQWOPMFRPMARDNMFJUHGZCXFWLBBQMTDDIXDMZRZKOH");
    tmp_tmp_msg_0_3.msgs.push_back(tmp_tmp_tmp_msg_0_3_0);
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
    msg.setTimeStamp(0.8389434595561558);
    msg.setSource(21048U);
    msg.setSourceEntity(74U);
    msg.setDestination(62883U);
    msg.setDestinationEntity(47U);
    msg.state = 42U;
    msg.plan_id.assign("KQYOFRTSFJXQXGHUEMPHMNAIHFQPSHBXTXCVJLWKFUWBFZWZUJHCUKVWWBLLALQYVTYOLNVMVQEBCHKAODIEMJLTECKRPTZXABVEVBDNKYPRTPELJKLOZMGCG");
    msg.comm_level = 19U;

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
    msg.setTimeStamp(0.9152471493955577);
    msg.setSource(20015U);
    msg.setSourceEntity(247U);
    msg.setDestination(9539U);
    msg.setDestinationEntity(61U);
    msg.state = 69U;
    msg.plan_id.assign("RZDVUNLXLQFNVWKLGXTKWXKRYRFRLNMKLGVHSWBVHVZFEEVBAUNJFOCAGERYCIAJOLWFGMAUUJOAGJ");
    msg.comm_level = 82U;

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
    msg.setTimeStamp(0.9193879450850332);
    msg.setSource(53266U);
    msg.setSourceEntity(150U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(1U);
    msg.state = 65U;
    msg.plan_id.assign("HGIBLLFUOZZBLBOGMKDMXHRQORYMBQKTVIXBJEYTYQYVOZKDYDEQTOFSJSGYVDQZGBOSFRWDWTGGWRWSHUXHRJWCNTYWXZHZMYIUVJDCOBJIVMPVUPFXMCLQDGUVRUATRUHCCEWSBXQKDSEEWWTLJEUNPIZJVNOCHPIATYOKHAQAGBMLFQYRHNKADNEPJRGXZUNISHALSS");
    msg.comm_level = 157U;

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
    msg.setTimeStamp(0.03933070615030687);
    msg.setSource(55639U);
    msg.setSourceEntity(75U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(247U);
    msg.type = 217U;
    msg.op = 161U;
    msg.request_id = 36437U;
    msg.plan_id.assign("KVRUSNEEBZXXKWXDYHFMUTQFCEPPJUVMJKBANAYIXGMCDIZEBTWSIKWMKTGSGJFGUZOHHCZIMLLOOBPSPEADNC");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 208U;
    tmp_msg_0.goal_id.assign("UIVMMCHEKYCEGJZDSH");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("WSTJXCZWSVOYNXAUHQULNDNGIBHJLCVSVIJUUZYUUBRNTDJYIWMJMDGHOBQRIIZAWSMMVXXSZFZSDLPKFLOETDEWBMFTFIBHEBKNQSUONRAAUYFVFICYPIAFKNJBBKAMRJMPIXGGWNSACVOCTXKLGRQEYQZCHTJPPOCALWDELQSWDRDGCPXXSBZYQTENWPTPRHVUHNTCXHBEYGYRVOTLMGPKYZEFQKKAQDKHLGJAR");
    tmp_tmp_msg_0_0.predicate.assign("FAJTZJKFYWHCADKLH");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("QVODADNWBVMYKCHFDHMKZDJFLHOBHGYUYEBQYJQXWLUGMXSCOPXPTVOYDRNBWGSSYANQMZDCHAKWMLKIRLSDWCAZUTTBMFNPIVQROMJLRUWLXIU");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 146U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("KEHSRLFVSPMYYHCLMWDFMWCCIPBLANZCALFSXFBKQRCCMNLQKGKTGLR");
    tmp_tmp_tmp_msg_0_0_0.max.assign("LCYZPXSQKCJVAQODDSAOUHQLMMLIFEVUJCPZYBGSHARTWBIVHXNTGFVKWOBPOJPWWYFULMQNXYUJPZAGSJWIYBNEQJOWRDHTHPEAJTCZDNQUSSXXQTIQFGZYDNUTPBANRKPESEAUUQORYVRLZVLEKJHEENNMOCRCCRSVGFCFIJV");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KNBPQKVLOEKPJLYZORZAWPODLZUAUJZIBAVUGRLNRSWHGKLSJUXBZTYGYSVDIXIPXWAEVELBXWIPEKQXCHYXCZOPFGBFQBMCDQNEFAIVFQOTKPDJQT");

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
    msg.setTimeStamp(0.18850809399528268);
    msg.setSource(15613U);
    msg.setSourceEntity(188U);
    msg.setDestination(25926U);
    msg.setDestinationEntity(114U);
    msg.type = 173U;
    msg.op = 174U;
    msg.request_id = 63587U;
    msg.plan_id.assign("LTHDVLWNQODSJLQCAHZFIGUDYIEEIABORANEXBQJVGSGNAULYWBKDAODMZKPTTWKYEYFXFYNKPGVLRENCATUOJVMJUVWZRUNTABXLYQJNFJPQKCDTISHXWJJSPFPEUKRUHB");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("GMIJMKOMVFJXQTI");
    tmp_msg_0.lat = 0.052839434204384306;
    tmp_msg_0.lon = 0.098420772485452;
    tmp_msg_0.z = 0.16016709514284588;
    tmp_msg_0.z_units = 101U;
    tmp_msg_0.cog = 0.4892710157461506;
    tmp_msg_0.sog = 0.9647953951913701;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SXGZYMCALOGQGVTRUZAXGUFWHRMW");

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
    msg.setTimeStamp(0.5355172803969261);
    msg.setSource(17055U);
    msg.setSourceEntity(195U);
    msg.setDestination(34593U);
    msg.setDestinationEntity(68U);
    msg.type = 245U;
    msg.op = 40U;
    msg.request_id = 13361U;
    msg.plan_id.assign("VNQFMJADRYIZCLBOCOCHHXSZCUJGVMTRUNGLENRNLBGWKIBUZWEAEEOIGKWIGZXVQAAELBXYMJPXMTSQVFTDKJOUWOTCXVQYHIRBANABDSXLXUSBJNNGUTRHKXBFOORGHXFOHNQUHWDJGMZLIEZASASUQHZEECOIYBLGCYARSTPFPHURMTMKQYDDWZLHD");
    IMC::NavigationReset tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PMKYJJYJOIVSFQVUC");

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
    msg.setTimeStamp(0.6071243527025322);
    msg.setSource(26800U);
    msg.setSourceEntity(0U);
    msg.setDestination(15005U);
    msg.setDestinationEntity(35U);
    msg.plan_count = 21994U;
    msg.plan_size = 749801369U;
    msg.change_time = 0.4948043052783435;
    msg.change_sid = 60005U;
    msg.change_sname.assign("IEVGHOWJKXACJXPDSKXLOHOCPZQRQVROGWCVUHDMHOLTQLIYKMMJWLQOMBBPCPXRGT");
    const char tmp_msg_0[] = {-29, -9, 5, -52, -86, -119, 68, 105, -117, -35, -37, -30, 54, -118, -20, -33, 54, 77, -96, 97, 110, -90, 58, -125, 81, -120, 71, 4, -53, -41, 63, 114, -1, 3, 38, -17, -10, 86, 15, 73, 100, -113, -83, 120, -28, 20, 111, -11, -75, -3, -119, 117, -50, -74, -93, 119, -108, -97, -8, -40, -55, 8, 104, -108, 67, 39, 80, -126, -121, 37, 109, 25, -35, -105, -64, 77, 46, -62, 89, -120, -26, -72, 30, -32, -94, 48, 96, -68, -46, 77, 27, -57, 13, 89, 97, 92, 66, 99, 124, 29, 110, 79, -83, -28};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AAWTBMKRNNWZADUTXCGSPVJTNRWQRMXTDOBQHZECUTTQBXINBHPZHGJBHFHWXOFUTNWZYPKTCQGHRLNLOVFMTXOJCGDULWSIPFORVJYI");
    tmp_msg_1.plan_size = 13326U;
    tmp_msg_1.change_time = 0.5883340513925813;
    tmp_msg_1.change_sid = 5899U;
    tmp_msg_1.change_sname.assign("SHPNEEFMNVTPSEWUBAXSHZUHESYNXFVILGOREHDCDNWRVBRVVWBSPEBWVPBJGLKUWMDBFEKCFJCYTCBYRCQYAQXFJFSADAZKFGATIFZGKAIPMLJYMSDCQVRODXROBKNHQHAYSRGZIRQPUTLDPKMTMHKVZTIBFGBIOLNIJXIUGWPUCXHRPUUMSJREYQNGWVYUATS");
    const char tmp_tmp_msg_1_0[] = {-56, -79, -58, 109, -15, 50, 101, 22, -84, -41, -84, -73, 121, -16, 88, -67, -68, 15, -90, 99, 115, 41, 7, -120, 103, -28, -60, 37, 49, -101, 86, 35, 71, 93, 116, 53, -22, 117, 109, 80, -103, -71, -74, 83, -2, -116, -2, -115, 43, 105, 62, 49, 32, 7, 42, -2, 15, 77, -15, 78, -4, -104, 119, 114, 76, -83, -122, 50, 86, -105, 30, 13, -21, 5, -15, 9, -87, -12, 40, 30, 61, 11, 120, 24, -25, -41, 43, 20, -24, 43, 23, -49, 31, -97, 56, 19, -123, -117, -85, 94, 65, 107, 27, 53, 88, 56, 122, -124, 76, -100, -27, -50, -50, -40, -112, 42, -108, 111, -121, 87, 60, 69, -20, -77, 39, -15, -44, -87, -86, -1, 86, -116, 77, -114, 32, 123, 53, -25, -71, 117, -17, 38, -64, -114, -69, 112, -19, -75, -56, -78, -17, 38, 28, 57, -125, 47, 9, 52, -106, 89, -97, 58, -54, -22, -103, -55, -53, -94, 100, 52, -4, -106};
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
    msg.setTimeStamp(0.14828570559819032);
    msg.setSource(46205U);
    msg.setSourceEntity(208U);
    msg.setDestination(33813U);
    msg.setDestinationEntity(56U);
    msg.plan_count = 19178U;
    msg.plan_size = 3716162945U;
    msg.change_time = 0.9652020196115412;
    msg.change_sid = 24448U;
    msg.change_sname.assign("EMBADFSJEIIIRWLSHUJVJNCWHQWIWOKRUDFPMBTAXQBYRFESJGUVUMEB");
    const char tmp_msg_0[] = {-89, -111, -70, 117, -103, 22, 51, -8, 38, -18, 76, -109, 22, -108, -15, 51, -111, 48, -118, 98, 63, -50, -61, 69, 18, -4, -104, 0, 57, 94, -34, -112, 92, -48, 35, 32, -72, -46, -31, -12, 15, -119, -45, 78, -125, -32, -15, 92, -50, -54, 110, -79, -78, -54, -9, 46, 94, 28, -30, 30, -110, 89, -70, -7, 98, -90, -63, 21, 82, -17, -122, -4, -98, -114, -37, 110, 116, -28, 124, 96, 96, -10, -40, 95, -74, 22, 81, -67, -93, -98, 22, -126, -80, 91, -37, -82, -6, 102, -109, 18, 87, 13, 94, -25, -44, -5, 72};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZNIDPXPVAMJMNFHYOBQDGXKVVHSAPQOYJNKFACHZHHMVMNSZBCJXDROUHTJNLFVNSRGKTLADKUUMUDWXCVIUWNOTYASYJESZFATVJMIAXXWIERGWBCTAITZDDJFXGRMOLFDIBUKYUHECSHCOMQQSBROPIBLTPGYULENMRXPFMRQYCEVBZGWOKJBQRQYTSZUVKBPGLTETPLPRDDNZFWYSNALQKGGGJPWQOVLWZFRIEXIHJIECEZK");
    tmp_msg_1.plan_size = 56472U;
    tmp_msg_1.change_time = 0.19758894104920655;
    tmp_msg_1.change_sid = 142U;
    tmp_msg_1.change_sname.assign("MAOZGNOOGRLIYTDQ");
    const char tmp_tmp_msg_1_0[] = {-44, -2, -32, 57, -118, -105, 35, -128, 106, 120, 43, 71, 117, 97, -31, 66, 56, 44, -46, 28, -13, -39, 88, 81, -41, -90, 48, 15, -19, 21, -16, -44, 88, -23, 26, -18, -127, 43, 89, 21, -94, 123, -59, 58, 64, -66, 109, 92, -115, 37, -125, -45, -95, 75, 85, -107, -44, 113, 84, 51, 27, 112, -57, -123, 5, 48, -12, 24, 21, 37, 103, -22, -55, 90, 124, -68, 36, 22, -113, 74, -57, -76, -1, 33, 17, 4, 15, 64, -78, -54, 70, -44, 62, -84, 89, 81, -111, 37, -7, 50, -2, 72, 43, 45, 111, -75, 94, 31, -110, -8, 22, 63, 2, -127, 45, 7, 125, -125, 42, 95, 69, 88, 28, -50, -95, -127, -31, 17, 67, 124, 17, -116, -64, -30, 84, -90, 5, -77, -63, -28, 41, 69, 124, 114, -32, 84, 57, -17, -85, -46, 120, 31, 23, -4, 66, 15, -80, -102, -39, -51, -99, -16, -120};
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
    msg.setTimeStamp(0.3396074542990132);
    msg.setSource(12043U);
    msg.setSourceEntity(221U);
    msg.setDestination(20405U);
    msg.setDestinationEntity(149U);
    msg.plan_count = 60088U;
    msg.plan_size = 768374884U;
    msg.change_time = 0.19586632826222328;
    msg.change_sid = 6488U;
    msg.change_sname.assign("SNBQVCWZLNHUVIDHWAGEEHQJUBKDJRAAYINTCYEMUZKWYRKWVUVBAFYTAOQWLIMRBPXTGQXILSLHWQBWSBHWPCGJHJUCQCNGGDXQJDTEXOMEOFUNNBXTOSLAFJRFFLK");
    const char tmp_msg_0[] = {-7, 54, 47, 41, -56, -117, -124, -128, 99, -8, -126, -44, -58, 73, 100, -43, -117, -63, 47, -125, -115, 98, -95, 81, 65, 61, 104, -5, -9, -60, -78, -125, -16, 6, 98, -89, 21, -93, -89, 118, 122, 17, -53, 2, 119, 26, -31, -22, 78, -74, -44, 44, 20, 88, -128, -34, -30, -51, -30, 62, -51, 92, -112, 58, 54, -100, -13, 79, 46, -105, 8, 27, -78, -54, 37, -109, -96, -92, -54, -88, 54, -58, -127, 20, 22, -8, 42, -80, -88, 117, 91, 70, -16, 21};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FWGIUIGYITWLMTOEMHUQQLDQZFMUVZPYSPQNYFDGTUVOHHLPVZAJBMRJATXKBNTWIWVLFURLRJTRQGZEMCLKPXHQGZPVJZNAWORAIOVQIKHUOGXARSYOXRWSWKQQIXGWTWYSFSMXSIBLJXSCDJTRFHMSADLVUWCAGYQCEJYPPRZUAKFGEBHTAJ");
    tmp_msg_1.plan_size = 49686U;
    tmp_msg_1.change_time = 0.4179681327012089;
    tmp_msg_1.change_sid = 898U;
    tmp_msg_1.change_sname.assign("MCYZRZYGGPZRPMBJFFGCPRVSTXUIOVEOFTEOHDBSPAFBMQUDLIXNZFPRYWSIIDOYPOQEIALGKFXGNAYFNNKRSISLQMKWDPAQZVKGHCUDSVHWYDBTOBWIBYRIDEJICNTBQZGEBCPWRBUKAMEKEFMEVURWFTAHLLARVRKXSLJLJCXJALYUAOMBXNHKLWNQHCUAXODCVUVZECYOMXEGHZTJHMNT");
    const char tmp_tmp_msg_1_0[] = {41, -104, 32, 86, 102, 10, -2, -5, 95, -1, -6, -6, 117, -41, -89, 87, 69, -47, -58, -5, -49, -30, 103, -68, 73, 96, 41, 120, -26, -114, -68, -61, -90, 60, -71, -4, 103, 69, 114, -97, -95, -20, 49, -80, -38, 65, -23, -65, 14, -90, 100, 13, 29, -71, 4, -54, 26, -14, 115, -74, -119, 119, 9, -45, -35, -30, -27, -45, 116, -115, -119, -14, -25, -108, 50, -73, -6, 12, 39, -16, -88, 62, 45, -126, 38, 0, -61, 49, 78, -67, 25, 11, 76, -27, -98, 17, 5, -23, 124, 72, -89, 117, 70, 87, 117, 57, 36, -12, -13, -83, 9, -24, 64, -3, -87, 97, -122, 78, -72, -108, -36, -72, -31, 93, 71, 55, -47, -43, 95, 109, 73, 24, -55, -25, 90, 41, 74, -115, 12, -66, -90, 86, 86, -71, 43, -78, -14, 82, -42, -6, -74, -22, -32, 12, 40, 48, 30, -92, 120, 62, -31, -58, -37, 0, 2, -67, -105, -127, -4, -9, -18, 117, 108, 75, 58, -82, -14, -76, -54, -69, 54, 3, 52, 88, 4, -109, -2, -15, 76, -44, -54, -98, 28, 88, 101, -39, -46, 82, 6, 26, -17, 22, -103, 105, 17, -7, 97, -62, 18, -119, 108, -84, 90, -102, -2, -81, 78, 53, -93, 30};
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
    msg.setTimeStamp(0.0501368157175448);
    msg.setSource(18372U);
    msg.setSourceEntity(18U);
    msg.setDestination(23970U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("LEQFBHHVMDTJKUOCUXTTBRNDTSDFLWKAWUFGJZTFLXTQWPMOFMMNZBHUSNDXGVQELLSFVLGBCZMIELJQKKPBOWFVBUBYTRNAKVOHGPMFRVMPHYHWRCCG");
    msg.plan_size = 16050U;
    msg.change_time = 0.46944593524812983;
    msg.change_sid = 23101U;
    msg.change_sname.assign("BOAXTXODEUSOARPRSNPDKBXQBAMBRXOEYTVCMWMQGV");
    const char tmp_msg_0[] = {2, -17, -128, 116, 119, 25, -92, 32, -39, -21, -98, -25, -79, 25, -42, 85, -40, -119, -16, -102, 94, 124, -51, 35, 25, 110, -82, -55, 71, -48, -22, 103, -2, -128, 85, -83, 126, 40, -119, 49, -54, -81, 21, 62, -82, -23, 8, 29, -55, 24, 92, -7, 108, -75, -41, -81, -124, 6, -14, -125, -51, -106, 30, -85, -10, 33, -43, 65, -77, -26, 6, 4, -114, 2, 18, -9, 38, -96, -23, 105, -4, 22, -33, 70, -78, -84, 94, 106, 71, 79, 18, 119, 123, 77, -29, -114, -57, -57, 27, 83, -2, 35, 54, -29, -40, 125, 44, 45, 94, -15, 50};
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
    msg.setTimeStamp(0.737984910845982);
    msg.setSource(63127U);
    msg.setSourceEntity(253U);
    msg.setDestination(44299U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("EYQYLMDXYKPAFRFKZRCIRWPWCGVOVNDFXKHQLD");
    msg.plan_size = 14462U;
    msg.change_time = 0.07865807644355638;
    msg.change_sid = 47845U;
    msg.change_sname.assign("GDVNUCRFELZUWOYJVSYBKQLHTXRNSPNUTOLWGBFQKDYZOEJQWHYGJWNRAKLAEZLPUNNWAUDMJRUCDMEGJGTHOZICXKFMSCZGOAZHNHDWEIXVJXWSJVPTMATFSHFLSHTJRHBEUMUFYMHNCRZXP");
    const char tmp_msg_0[] = {20, 30, 73, 12, 56, 34, 62, -111, 19, 92, 66, -119, 87, 111, 67, -50, 37, -48, 120, 67, -12, 90, -78, -30, -90, 19, 84, -49, 114, 102, -57, 16, -13, 73, -17, -113, -58, 63, 61, -59, 49, 11, 19, 78, 52, -16, 50, 94, 60, 118, 23, 39, 17, -99, -15, 90, 113, 91, 114, -25, 75, -57, 48, -66, -30, 76, 21, -44, 72, -43, 118, 32, -2, 78, 99, -8, -28, -48, -13, 9, -12, 120, 118, -111, -2, -27, -6, -28, -19, 49, 78, -72, -122, 70, 121, 9, 76, 13, 6, -53, 44, -127, -55, 41, 98, 79, 57, 61, -39, -80, 60, -7, -84, 74, 61, 65, -108, -69, 21, 71, -116, 100, 58, -30, 125, -37, -102, 98, -7, 115, 38, -104, -52, 92, 15, 88, 8, -20, 95, -119, -86, 22, -73, 83, 126, 91, -127, -54, -11, 122, -105, 122, -2, 119, 13, 118, 95, 25, 1, -65, -30, -90, -22, 34, 52, 59, 116, -6, -15, 90, 67, 17, -19, 72, -98, 75, 7, 67, 60, -25, -121, -16, -64, -36, 64, -92, -69, -37, -16, -50, -58, 57, 50, -30};
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
    msg.setTimeStamp(0.7805333790374449);
    msg.setSource(33258U);
    msg.setSourceEntity(218U);
    msg.setDestination(28340U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("ZBBPACUEEDFZCRVJIUMUGKKOVTBGSHECIBNXNOVOONXHMKNYBDSQYRTHARRFKWVMDOFQFZSSWOHWJQOTYYQAINZDLPZSLLHLIZHUXBEGVGMSJNFDCLEUPXMIZUWSDDKIVQGJYGZKU");
    msg.plan_size = 49032U;
    msg.change_time = 0.419603990664432;
    msg.change_sid = 48231U;
    msg.change_sname.assign("VDEPWYGOBHSNVYGHAJKCWADLDDCBLSJBNJBXCSYWQOTRIZJUVCCZXNTAWOXVZKDJCINQRKMUEAHTNAPWPPATRPLMLVIQMMUXWTNFJUFZGDRUHEZNRSOLQYPWKWKMJLNASCBIVTAOUOLZPUFMIZOFDWRSOSEFFZPIGLZRXCVIGIGB");
    const char tmp_msg_0[] = {-16, -124, 46, 8, -56, 84, -81, 31, 102, -31, -32, 61, 89, 75, -30, -65, 110, 1, 115, -53, -12, -56, -61, -120, 10, -32, -85, -28, -99, -16, -16, -109, 49, 37, -4, -63, -25, -60, -46, 69, 103, -59, 56, -124, 103, -23, 4, 72, 57, -12, -17, -2, -55, 49, -108, 113, 33, 0, -100, -61, -52, -121, 65, -7, 99, -72, -62, -80, 67, -67, 81, 5, 40, -28, -23, 87, -69, -9, 114, -12, 83};
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
    msg.setTimeStamp(0.29530660699564826);
    msg.setSource(62172U);
    msg.setSourceEntity(125U);
    msg.setDestination(43880U);
    msg.setDestinationEntity(66U);
    msg.type = 17U;
    msg.op = 234U;
    msg.request_id = 60235U;
    msg.plan_id.assign("MJAPFELZFRACGLFUXTLPDDWVRHHSNTTDRCTXAITYLEOOYWHJQPUGDRYKCPSYGGUGIOLCZHXONWOMVEJVLDBNBKZBAXPBIVQEKBQDGMCAYMIMJZFFLMX");
    msg.flags = 48083U;
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 66U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UPPWDYVGWZBLKIANSNV");

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
    msg.setTimeStamp(0.405861987240432);
    msg.setSource(34697U);
    msg.setSourceEntity(228U);
    msg.setDestination(51333U);
    msg.setDestinationEntity(19U);
    msg.type = 181U;
    msg.op = 225U;
    msg.request_id = 49071U;
    msg.plan_id.assign("XWFRIFDGTVECVIJITGNLYLWCZCCHKXOJMONTWREUPEDCLCXJVUUPKHGJSKNJGBIFGMVBPQLAEFGZQNOFVQYUVNWOBTSXVUYVBDXSYTRATPDSEBAZ");
    msg.flags = 17489U;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 40U;
    tmp_msg_0.value = 0.527429902827585;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XUVFBCPXTKJDNIRLKXIGSCWITAJOHEEKWRCQI");

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
    msg.setTimeStamp(0.6202828729565807);
    msg.setSource(60219U);
    msg.setSourceEntity(13U);
    msg.setDestination(39120U);
    msg.setDestinationEntity(22U);
    msg.type = 9U;
    msg.op = 191U;
    msg.request_id = 32160U;
    msg.plan_id.assign("WHPNJVKQPRZWOAXDOZUFZCQMJYJFQDHLUIJBBKSLTLEUGNYECYXTGAEBHUJRWFILZRFNOYWMNSNMEIMJQEKPQGLVAACHSDNZQBCW");
    msg.flags = 44507U;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.6071743508886838;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EBUTEHRAJFSCDAKCYONZVSJBUBOQGTMMQGHVHMDGUIRQVLNRMQITPYMVDOWCEANBJIACDJTGGLPCHSDFEZZKEJAKZSYHZIHVHLDZCWRGRCVXORAUFKPYWVRXDJUU");

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
    msg.setTimeStamp(0.34058447205186704);
    msg.setSource(3305U);
    msg.setSourceEntity(16U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(251U);
    msg.state = 200U;
    msg.plan_id.assign("BOUPZUOIKPWEIRELAAHQAPHENTRHCGVHWWEINPYPDYGCXNKBKTMQQBMMIAXWKMLGEJZHRVOTLFIRKDIVDRIBRMTXMJMDGXSKWEEOVRGEVNJZLMJYZBCCQBPWWLRFZZLTNLPWSFSAFQYUZHFDVBUPFJDOXKNTDYTSQAGZIWYLAXMJDXNGHHQUOTUJSNSZGVSYW");
    msg.plan_eta = -92919006;
    msg.plan_progress = 0.9984843834105425;
    msg.man_id.assign("GNMMWRXPYHVOEDTLZUNNWMUMHSXVIRKTSQGPKUXBKWRDNFDTSLGGODXQNMAXZQNDZTRBJXUGYITPPYJYKLN");
    msg.man_type = 9346U;
    msg.man_eta = 746995734;
    msg.last_outcome = 116U;

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
    msg.setTimeStamp(0.8304066362241838);
    msg.setSource(55398U);
    msg.setSourceEntity(197U);
    msg.setDestination(27517U);
    msg.setDestinationEntity(31U);
    msg.state = 84U;
    msg.plan_id.assign("PSPYLMCNDJTJIYO");
    msg.plan_eta = 110044667;
    msg.plan_progress = 0.3740759998992359;
    msg.man_id.assign("NUATMSYQTXMLOWVKKAIUDEGXPUWFXXCEYXEJYRDNZTSZLBNPBNWKBILKMQCJFUQ");
    msg.man_type = 19257U;
    msg.man_eta = 1136481222;
    msg.last_outcome = 194U;

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
    msg.setTimeStamp(0.019886477874411);
    msg.setSource(8197U);
    msg.setSourceEntity(44U);
    msg.setDestination(61415U);
    msg.setDestinationEntity(74U);
    msg.state = 153U;
    msg.plan_id.assign("JDWVATEDYKTUXPMTQRMCYGVMGXUEXWAHYUFZVNGIDIUQZPXTVFGWRGHHLBACEDZIOMGVHWTZFLQKMONYRKFRJKWJRYPOVM");
    msg.plan_eta = -2082278155;
    msg.plan_progress = 0.1400376680996539;
    msg.man_id.assign("NCKPQQLPPPBIHJHMKHRBHWNGHZZJQUMKXCBPJYFXGFCEATIALEECKEPBAAW");
    msg.man_type = 33450U;
    msg.man_eta = 1789435471;
    msg.last_outcome = 139U;

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
    msg.setTimeStamp(0.6913727827558728);
    msg.setSource(34968U);
    msg.setSourceEntity(17U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(64U);
    msg.name.assign("SLWKVKZBFSSQODTGGAMMEBQWULJYBXDRKTTJHDARSZXVPUDLSRLZYMGWWYKXOXNKVXYPJLNNRQPEQ");
    msg.value.assign("HEZQEYBPBXXIEADBDJQGGHRUZJOBKZEMDMHLMWSFCZUOQIOADZSIVDDCHIRVBWLRSKPZUOZYBETSGYKPNUAVNLXYDPTPLYKOOESXFNGVRUOBSLUYKEGXNCFETIIJJMHXSHJTRWLRTSQFQVMPFXAYWICHCLIMCZJKEUMFAPOKPUTNBHCSAONRQUWLFYTWTERLNVCMXFZQDTRCABHPVKYFFRGWVIDWGPMADGJKLAXGJXO");
    msg.type = 28U;
    msg.access = 235U;

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
    msg.setTimeStamp(0.8887518479320006);
    msg.setSource(985U);
    msg.setSourceEntity(97U);
    msg.setDestination(36002U);
    msg.setDestinationEntity(203U);
    msg.name.assign("DUCNANCHADWKJBLUCEENWTYOOOJNUUEGVZWACGKGYCWXQJQTYFGXRPKIXNBKAKMJVJIROETJMBFMIGIFFRZIPLAHKPUNNYSYOUYALLZPZXTVKKGMEUMRZWZAFALWMHQVNAWDLSOPNFEVWOORSEIJRRMVDQHMXYVTMQRQCJCVT");
    msg.value.assign("LQLFLJTNIQAFZYDMVVNGLZH");
    msg.type = 196U;
    msg.access = 183U;

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
    msg.setTimeStamp(0.5838282715434188);
    msg.setSource(39263U);
    msg.setSourceEntity(120U);
    msg.setDestination(39733U);
    msg.setDestinationEntity(79U);
    msg.name.assign("AZHTXPAPEGEKAUKMZTXCSRWFPQVIOYLWPFOLSBVUCHCCOKJGZCFXWYVRVDNDRNFSWCMSYQJIPBEDYSDZGAWJVBGXKEOIOLXHEWNBUTVSDQMQHEYQFJNSNLXDJLRUS");
    msg.value.assign("UAJRKFMIMDY");
    msg.type = 254U;
    msg.access = 28U;

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
    msg.setTimeStamp(0.9983517268113526);
    msg.setSource(62354U);
    msg.setSourceEntity(106U);
    msg.setDestination(51109U);
    msg.setDestinationEntity(105U);
    msg.cmd = 144U;
    msg.op = 170U;
    msg.plan_id.assign("IFZEVVUWBAYCWOPMHETSKACQSPCOISZQJNYWAZCFMFIUCXZZLQMUQGYLYRNBVGWIXUGPHTXJOYHBPKYDNWRTZBHIFLOOAHETMDTJGUHONSTKTBXFEQWEWISPOCRVGXBBJKCDAJMIUCSFIJNPNXPNTRNCDZWTKSXEIPLOZZEVEQLLLADWREMSXUTFVJMLZKAJHVG");
    msg.params.assign("XTVHEBJOGKBCPDGMQLUJCHRVMPCGJKVUHYOFHYKVNUDMDTXLNZISLIUERJJDSONZEMBMRPCTKOTFQKUOXFMDNOVQDIOSXIYZLCNUJSSSEILLUSHZXDNVNTIQAOTYGWAARVXMFBZJGVFUQKZKDXSLRWAFEWMBIVBJKBZRGFZYMBLHWXYGFTBGXIYATW");

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
    msg.setTimeStamp(0.18026906376852214);
    msg.setSource(26391U);
    msg.setSourceEntity(113U);
    msg.setDestination(2474U);
    msg.setDestinationEntity(240U);
    msg.cmd = 232U;
    msg.op = 131U;
    msg.plan_id.assign("HITNJYWGMMAVEUWOBNRCKWYDKNXFZGOKOMUSZYLXTRSSOSYZEXWTLFGVMPQDUHEEBBXOWXVIAHZZMAYEFCVAPVFXLOVRAEBDHFSDKKRCJGOAKQEJTRVUREZMPIHLFMZVALRDCQTMNAGQYCBTXXGOTNJHKOUXNEUQDPZAIIBKCJHLMDG");
    msg.params.assign("HDNMUHLZLIATPNWWEZSYROPXJLMLDMSCXMNVLRJFXBRQXWYHYQQPTFDJVTRPSUMRJTGNVMFAFYVFBUNXFIPSLGRJZKCZGFVBQEYPJYQMHWVGEEABBECKQIJDVGPTTEGEXAAWIRYDKAIABKZOAGZDNLCZKFOQCZWDOFPKIKRBVEAKALSEXSTZSUOOQCHJXSGFTXM");

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
    msg.setTimeStamp(0.8647910011166376);
    msg.setSource(41601U);
    msg.setSourceEntity(208U);
    msg.setDestination(65501U);
    msg.setDestinationEntity(153U);
    msg.cmd = 201U;
    msg.op = 134U;
    msg.plan_id.assign("DTYJXWZQIYCNFORFIESKLRUACFLDPLWIKATJGJRRHMWQGOVFMDJYIKFOCCKAZJMPCNBKAZJCXGHZXNXMMYRXUGLIFTPZONEFRSSSLYDKODTRXAJDBTCVEAEGYLCBVLXEHHSVYDIQJNPWRZVFFBQZPDYQOKWUJRHMNQBPSMAOOEUVSDUXXCGUTTBIHPLGZVUYQPNILGJPGHVPRBHMKBBOGLFQDAUSY");
    msg.params.assign("EJDZUKZHHEZCGFKMMJODMIAGESSNWLOJTZABWPDUMNGWTEXKSLHHZVZPRNOPQITRVPUPPPXSUJERSQBFNKBCDFNNHIMFJQIVVTWEP");

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
    msg.setTimeStamp(0.40602095876443867);
    msg.setSource(26369U);
    msg.setSourceEntity(138U);
    msg.setDestination(27178U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("IFYZYDGLCOJPZBXEYJXHMMCBEREQCCNFMZRDNMZQNQGUSXVIDPIFJIPIWKOSSFJAAXFTFYABTWBRTGMJUUSJBSGWJUMFKKIAAWTYWPXVJUIETHSPCXLOSYPHDRKDXAVUIUUVBVMBHXFEOZCCNSJTLLNLHTSOKECPVADCNGYWYNQTLKZVGVLPEKGPRQHLBQQONZUQMRGHSRKVAJR");
    msg.op = 64U;
    msg.lat = 0.5593876045720156;
    msg.lon = 0.5814895336509974;
    msg.height = 0.8327952502530475;
    msg.x = 0.6467299365019447;
    msg.y = 0.254807352065629;
    msg.z = 0.21165551046452813;
    msg.phi = 0.5487388404994064;
    msg.theta = 0.9284947476859006;
    msg.psi = 0.3824672903314976;
    msg.vx = 0.9399376265423489;
    msg.vy = 0.8416948320304567;
    msg.vz = 0.09998881440088714;
    msg.p = 0.35219145486271863;
    msg.q = 0.20747351489007615;
    msg.r = 0.9169765961597273;
    msg.svx = 0.6791896466266688;
    msg.svy = 0.3864615885758984;
    msg.svz = 0.3408489271493802;

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
    msg.setTimeStamp(0.3702222388010856);
    msg.setSource(41853U);
    msg.setSourceEntity(130U);
    msg.setDestination(21620U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("AURHTSJGVQEMUOEUEWHUAQCWVRNOWNYVQLLFUYVTDHBVXLSWESDBKCIWIYRAICDCSJTRIBOHJQYJFYUMBNCKSNGPWDZRFYLNOIDAFALAGQDFNPVPBHJUQMQEVJFZZMIHKKTXFGZSOXWXBVXGUIJEHACKWQZXTTZSOLPDAEKQAXHCPBRTMMTMULRZEOMRJNBUOPFIXKH");
    msg.op = 7U;
    msg.lat = 0.9822960543810124;
    msg.lon = 0.37436123233682184;
    msg.height = 0.41284527874875443;
    msg.x = 0.8295696477129454;
    msg.y = 0.44058092889397693;
    msg.z = 0.8487092810763373;
    msg.phi = 0.02598295687108443;
    msg.theta = 0.9663711418617484;
    msg.psi = 0.0513699203888055;
    msg.vx = 0.9129491134411795;
    msg.vy = 0.6145574109912871;
    msg.vz = 0.47238151272663453;
    msg.p = 0.9606274857516788;
    msg.q = 0.37640458419685263;
    msg.r = 0.2223511092903191;
    msg.svx = 0.1045438680214199;
    msg.svy = 0.9962566553708809;
    msg.svz = 0.3575047423806803;

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
    msg.setTimeStamp(0.27553559353291346);
    msg.setSource(19064U);
    msg.setSourceEntity(192U);
    msg.setDestination(23919U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("WHTSUJNLDQRTILSVD");
    msg.op = 174U;
    msg.lat = 0.8057573739147083;
    msg.lon = 0.3084986625169025;
    msg.height = 0.340697088530566;
    msg.x = 0.5132202372361317;
    msg.y = 0.7033204654684511;
    msg.z = 0.38004357997212457;
    msg.phi = 0.28487249031837525;
    msg.theta = 0.6132427067507901;
    msg.psi = 0.7153936969580205;
    msg.vx = 0.5629848305011215;
    msg.vy = 0.20413280933523437;
    msg.vz = 0.8778735042386029;
    msg.p = 0.7944311090201273;
    msg.q = 0.2419871325602756;
    msg.r = 0.35781355567789674;
    msg.svx = 0.3912843977215278;
    msg.svy = 0.33232121164564365;
    msg.svz = 0.20272994427699076;

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
    msg.setTimeStamp(0.08124405397040091);
    msg.setSource(26083U);
    msg.setSourceEntity(146U);
    msg.setDestination(56574U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.7641224830753985;
    msg.lon = 0.2322705219019605;
    msg.depth = 0.331838833809887;
    msg.roll = 0.738834341844963;
    msg.pitch = 0.8313501865538224;
    msg.yaw = 0.9964868766698209;
    msg.rcp_time = 0.7767471214481054;
    msg.sid.assign("SVNUFPNRSSUFHFVTTQPMNBEXRUKXBOCLWCFHGKKYQZNCLNUYTDIWJKAHZRWNTWNTPMRVHIGAEAROKYXSRPPZZMEEJVOERXAZUCBEJZJKNOIXYDZFLJLGQDTTQZGDHO");
    msg.s_type = 187U;

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
    msg.setTimeStamp(0.6358874992552825);
    msg.setSource(20675U);
    msg.setSourceEntity(215U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.4590973865051744;
    msg.lon = 0.2049010960257358;
    msg.depth = 0.4650318505127493;
    msg.roll = 0.6470695531885096;
    msg.pitch = 0.1444734262743098;
    msg.yaw = 0.8663345246100316;
    msg.rcp_time = 0.034610492156656014;
    msg.sid.assign("HONSUCRUSAPOLHGYLFIMOHNXFQAALGNEHJDZZPUIOMKSYAPVCSBSAYKZOUZYRHUEPFAMKXQRKKGFBDCYEWTMXGTTLBGSSYBQJACGREOERZQHEFVNZNFFYPMQEERIQNLQXPBMMWHSLDZQWNWAOKVVJDECLBXZGLJSAJUPGJPJIMSFWKRFKDIIOHCVJTVXTWCBIMVWQNBDUTRVGWZXIOTWPHEORHQZDFTVTJUUNKXBMXTCLWYD");
    msg.s_type = 168U;

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
    msg.setTimeStamp(0.2664218015244938);
    msg.setSource(5364U);
    msg.setSourceEntity(98U);
    msg.setDestination(63893U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.5288981829555174;
    msg.lon = 0.9665772959219376;
    msg.depth = 0.2261297330567027;
    msg.roll = 0.5623251698088343;
    msg.pitch = 0.9381621380924856;
    msg.yaw = 0.49693338295477396;
    msg.rcp_time = 0.5940399521759082;
    msg.sid.assign("WITSKWBITPEVMIXXZBCFRTOUZOBRSYCCUKYJBWPLZKTBLUNEMKRODLWOKIJSAZLHFDMFO");
    msg.s_type = 151U;

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
    msg.setTimeStamp(0.049306734698650434);
    msg.setSource(37189U);
    msg.setSourceEntity(233U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(192U);
    msg.id.assign("HBXTSWUFXTLJXOHPKOAKSTYGSOWNXYRJLJXAJLZLCCLKJDEPSTWIUZENCVYHMXIAQ");
    msg.sensor_class.assign("ZRWMHLSCJYUTYQDRKTMXVFJKDSYWEXEGFOSBVAQVZAOLIGPMRNOSTOKECGDVPNCBVQHIWALRSBGLXS");
    msg.lat = 0.7934482783771554;
    msg.lon = 0.2531707551201883;
    msg.alt = 0.7216231561190745;
    msg.heading = 0.42851704553140546;
    msg.data.assign("WRRNGEJSHPNVAHYJJWYQEQJZBITEWSOWRXUEAZNKXBFLQNXFMZWDGOYBTUELUAGWODTYZHVRSUATBAORVKWAVECULBISTNHJYSLTWTGQJGDTAIKFYHFLOCZGSHVUPSDPZLDDXBAMSFHLWKXXEPXSQBYQUMVMQGBVUJQOHNFPRFDEMDGGVJMKMKIYQUIWNRCHIPPCDCPNXPNBFNHTVMKXXRQOLLCAZOIIJZOVPCAEUKKESTOJCZC");

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
    msg.setTimeStamp(0.41099618597922605);
    msg.setSource(5788U);
    msg.setSourceEntity(31U);
    msg.setDestination(53251U);
    msg.setDestinationEntity(79U);
    msg.id.assign("JXIZYMGHACCFLMLKRBPNDWIHWVLBERHOLRSXBCUOHXJPRJMLJFRZXBYMEXZMQPONHKDGWJGGVTTUHYQBWUKTBFPXYXPFH");
    msg.sensor_class.assign("PQYQROINEVBZCZZPVBESFYYPGPTBQZUEOHBZXNLONFWQVISERMXORCTRUKOPWDPCNHZDZUYKHCDCDWJT");
    msg.lat = 0.0039245964033644;
    msg.lon = 0.9980596317615419;
    msg.alt = 0.16411442221032524;
    msg.heading = 0.9785435595091053;
    msg.data.assign("GSBOYLWYTENGUWIBOPAUJZOVZPCVFYTVLKONNOQHOFZFBLFIQAQUDCFBSVHUKRNEISEZBNHDXLDZUUJEMWXKTJSBNWANXICRFPVNFIIDLURKBHXVSMDHEAEHJHKTJOKCCI");

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
    msg.setTimeStamp(0.006317279002964971);
    msg.setSource(11093U);
    msg.setSourceEntity(126U);
    msg.setDestination(42504U);
    msg.setDestinationEntity(137U);
    msg.id.assign("RHQEOVSOBVRHEGUUWJCHMRALBXPXENEADNFXXITUVQPPWMCOPRPCLGCNWLGQHHRTTGKOHJABIWETAUAPOXJYLZVCAJKEFSNWRBIYWHULMLVDMCMYVZEAIIZDDTSPZBAUYBFCQNELTUUSXZGXMVYRYWZXGGIKKTNOVMRLLCYFDDFASSQKQSROKXIHJIIKZJFQUUQFGVKZDOBSZVLKWGKMPCBFCWDABNWJMYDJ");
    msg.sensor_class.assign("QHETZFRGMWSJXLGUSHJIFH");
    msg.lat = 0.2008361014596609;
    msg.lon = 0.13899319826316592;
    msg.alt = 0.4064955528972459;
    msg.heading = 0.8720728852645846;
    msg.data.assign("KAVISESDTFDITQFYMUWORMESKMUFIWKEWCBSCTRDLOOWAJHIIWDPXOFESZXBRHHQYULEUVLXZQGERYQXFMMTBBTTZNHCWYANUECZCDXKAGUMTEKNUJAJNWYKBCVQXJPOOHHXPIHGSNMSCLFOHLTBEPFYZYVSYKZCNVCQLZAPVJLPOOQBZDRDKAAKGQBZDZFVNJDLMMHUKJPUJFLGWWXLUGPGPJDMRBGXTBQFORCVGNRYQXYSSIGEPHJI");

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
    msg.setTimeStamp(0.810712828693168);
    msg.setSource(756U);
    msg.setSourceEntity(16U);
    msg.setDestination(40323U);
    msg.setDestinationEntity(241U);
    msg.id.assign("HRSQJYPWVXUHMROYPTLQVEAIIOHEVYVLTYXLHGGPRPICZWETUVXVNZVCNFXSRPZWNBPUJBGQUREPGRMBKVZTCNUGGXSNSORKTXVYFLIJCXXSAPRMLWPXUMBKAZJKLWJIJWGLQNTCOFFDUWNCKDDYFTSNXIFCMFZGHZFISOHDFETJHLQHYKBGBIDWAESOAKYLUDMJKJSIRA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DTGYQDXIIFALJADSTRWZKVZRXELKKRHMEUCQGSQVNZOYHCQKBHHHYEDXUGRJKZIWESQPUXAHIYTNRLJMJFVOZPBFLPONAYCDPQIOILKDMAVSIUSUQGNCHJNWDHCRXNRVFCLXTCVKYHWXBODNWGMAMIVCUYWEQZMXNDGPWWEIRXZTKLGBSPWLJTEXPMEMMBOLLTKOUFGSOOHKBESNFCUYIZURVFBTTCJOPJUFQBSFNGFV");
    tmp_msg_0.feature_type = 44U;
    tmp_msg_0.rgb_red = 236U;
    tmp_msg_0.rgb_green = 201U;
    tmp_msg_0.rgb_blue = 239U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.46255081744316806;
    tmp_tmp_msg_0_0.lon = 0.32887512341653324;
    tmp_tmp_msg_0_0.alt = 0.9760347091643926;
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
    msg.setTimeStamp(0.5103598702851518);
    msg.setSource(4311U);
    msg.setSourceEntity(222U);
    msg.setDestination(9514U);
    msg.setDestinationEntity(58U);
    msg.id.assign("CUEVQJOTYRVJQDFUUTXZJBUAKNGQYJANRFJKQCLAPIBUTECWYGSVRGOFCUMCLJANAMFMKBRYDEJNBHZDGLLSBOFDPXMLRYZWLPKTHWPFUXPGZSFMTEGDKHCZLZODMVILXYOHCVEOWHSQKRSFDZFONXJMPGWIUQAZP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BIQVPNMEOAIMEWFYIOCZCJIGYPVOPJSWCKKMVYBPUKAQJDGGCHRVZHKIGJUNXUWXCXHHLKXWLDMJUFTTWEKTRGSGVNXILDDYLQGWSTMEQCEXSVLGAIRSGDXWDSUQPHYYKHKSTNAGKQBORSFZFTIFZYNVAZDZMEFOLBRHBUOFJORHCANJCVPYPWEUUMEHNONEFLQIT");
    tmp_msg_0.feature_type = 248U;
    tmp_msg_0.rgb_red = 28U;
    tmp_msg_0.rgb_green = 158U;
    tmp_msg_0.rgb_blue = 102U;
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
    msg.setTimeStamp(0.812254826061596);
    msg.setSource(1635U);
    msg.setSourceEntity(174U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(164U);
    msg.id.assign("TQRDSVKHZKUMSNFBAAIWIUTGVTXBBRLNGENZPPSMNPAYLFXLMTZYXVUOUOFJDJZAXAHGPRJLPWNYLIOJHBTQBRMUDWOBCETGRVKDIIWHQWUVEHCOYHPZSCJKAOCURUUJIEQIJFQYVKNFLHFDUYOOENXQSFZPDDFACQTGEMWJYWCEKHFGVVNOIHKRFWSCE");

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
    msg.setTimeStamp(0.23215584283031088);
    msg.setSource(14136U);
    msg.setSourceEntity(143U);
    msg.setDestination(26507U);
    msg.setDestinationEntity(177U);
    msg.id.assign("IJDWLFWQJIXAUURVWOCPMHXFEDMTDWTXEICOUOCNCGVLCAVSBZDFDHNHMNKMUMJFZGXGHLSRTAXEMSZUYNRVZJYJNVBZWCOQKWICBMROJWYQNZRTIGQANBXMQXVCZBTRPGMLQBTPMGXSEHBWIXSNLOVUOHFEUPVPYQEPPDWEE");
    msg.feature_type = 106U;
    msg.rgb_red = 47U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 39U;

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
    msg.setTimeStamp(0.44763962434336446);
    msg.setSource(4192U);
    msg.setSourceEntity(212U);
    msg.setDestination(50875U);
    msg.setDestinationEntity(59U);
    msg.id.assign("FBJIUNKYQEBTNDJVLCDQXHVEYQNYTAADLZQXAOUXYWHPUW");
    msg.feature_type = 149U;
    msg.rgb_red = 35U;
    msg.rgb_green = 42U;
    msg.rgb_blue = 197U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5660583843150108;
    tmp_msg_0.lon = 0.4013944506449081;
    tmp_msg_0.alt = 0.04526235569901549;
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
    msg.setTimeStamp(0.09936457728478354);
    msg.setSource(48442U);
    msg.setSourceEntity(180U);
    msg.setDestination(31041U);
    msg.setDestinationEntity(235U);
    msg.id.assign("PYJAGKXFAYNWMN");
    msg.feature_type = 167U;
    msg.rgb_red = 234U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 67U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9245560726981119;
    tmp_msg_0.lon = 0.14781946222718756;
    tmp_msg_0.alt = 0.700936586596738;
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
    msg.setTimeStamp(0.08495039175622554);
    msg.setSource(37519U);
    msg.setSourceEntity(196U);
    msg.setDestination(39392U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.8440267822096804;
    msg.lon = 0.4510376786770879;
    msg.alt = 0.8874754971170123;

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
    msg.setTimeStamp(0.20549023160977886);
    msg.setSource(11824U);
    msg.setSourceEntity(168U);
    msg.setDestination(24661U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.888513812259339;
    msg.lon = 0.5812433126752063;
    msg.alt = 0.4423374987772033;

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
    msg.setTimeStamp(0.3771253467390405);
    msg.setSource(2624U);
    msg.setSourceEntity(110U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.1271205731966285;
    msg.lon = 0.3616123097871422;
    msg.alt = 0.8010780830197279;

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
    msg.setTimeStamp(0.5107164072764081);
    msg.setSource(5904U);
    msg.setSourceEntity(242U);
    msg.setDestination(40437U);
    msg.setDestinationEntity(98U);
    msg.type = 17U;
    msg.id.assign("OLZBHPCAWUWYDBNQGQBGDIDXMKTWMFQWJOCIQBMIRVNOEKYGWANEKYNNGOCDTERPAVYMPOZHAULHGFUGLQQBRSFTLTPRZLBVSUQLTUIJUBVKAYZLXSZJSSEPZYLKVJATUXNGIOIJLMAJWYSZFCCHMSQNGKZHWUWJRHBIJKCEOFTKDVFXARXTCCXARWMNAHZPSIFHDPJQNKQKMZWRVETXMDSUHVPSMBYELNXDFOD");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.2960898910902354;
    tmp_msg_0.speed = 0.9104198225130054;
    tmp_msg_0.turbulence = 0.5546424320451018;
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
    msg.setTimeStamp(0.6439289363184187);
    msg.setSource(39625U);
    msg.setSourceEntity(230U);
    msg.setDestination(57583U);
    msg.setDestinationEntity(243U);
    msg.type = 206U;
    msg.id.assign("KZZQDERUULQAXTURRKFNGHLRBGCNSZBNAONRYYOYWJKIFVZFKTSCPDIHAAQIPVUJMQNMFBTMCWZGROBWPHFYOHZOMMIQDEPIEKDOKSTEOWGHVKLFJHEWFECGXVQFYWSCLVUTCAZSAUVSIKGJJSFIPNJKTXLUWSLDEHVDXBXYPWGRTHYTNZYJFDTBSQYUEPOLJYQMAINDXMCQ");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.2912507572839148;
    tmp_msg_0.x = 0.17430748603713164;
    tmp_msg_0.y = 0.5792994285290809;
    tmp_msg_0.z = 0.8264472697260747;
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
    msg.setTimeStamp(0.21625970747190593);
    msg.setSource(23683U);
    msg.setSourceEntity(117U);
    msg.setDestination(28631U);
    msg.setDestinationEntity(79U);
    msg.type = 60U;
    msg.id.assign("ULQOCOMGZVMSGYWRPSXOSERSXGTHQECGWDOBCCMSMQLFAZQEKAQYNKYHLSNUMPXNZIHZJNKRAYPWVCWITRODGPZIJNBEDLFSMBTBCLLJUNVVEFNUOA");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.11990099543437105;
    tmp_msg_0.y = 0.4409570494388477;
    tmp_msg_0.z = 0.8549270683478263;
    tmp_msg_0.k = 0.14203947329436828;
    tmp_msg_0.m = 0.96027125664092;
    tmp_msg_0.n = 0.7532164413936803;
    tmp_msg_0.flags = 48U;
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
    msg.setTimeStamp(0.6006350310327586);
    msg.setSource(46068U);
    msg.setSourceEntity(168U);
    msg.setDestination(7438U);
    msg.setDestinationEntity(132U);
    msg.localname.assign("RLUPYJXFFSJXZFBRZJAVRTLOIYVLMEDBXRPNCCVPEFWDOTOLUMNUPWSNUPERQJWEOJFCRUGHVGIG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EKQPAVZPTNOKUDRPXXRRMRCIVJLBACJMNZ");
    tmp_msg_0.sys_type = 35U;
    tmp_msg_0.owner = 28993U;
    tmp_msg_0.lat = 0.6738548971132121;
    tmp_msg_0.lon = 0.2818281410897492;
    tmp_msg_0.height = 0.08316580044550836;
    tmp_msg_0.services.assign("QTTJYFCDKRWBOADLLVMDNLBSOBQOHIRVWIXMUFWXOFASHEQQXZUWLPCJLHVPGPXRGBJTFIIWTEGAVHFMWBENOHKESYMSQFVCGIGMJVPGAMUQEMRFFRMUYOCOYTKTBEYLSUBZRDGQPXLIQIDCJHWYYWGBDVXWAANEAZXYFJZOJNTDOVDDZDXSKKPHCKBNXZGKGZYSQPSRUHTULL");
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
    msg.setTimeStamp(0.5531950530415894);
    msg.setSource(26698U);
    msg.setSourceEntity(222U);
    msg.setDestination(55006U);
    msg.setDestinationEntity(65U);
    msg.localname.assign("LAMCWIOSCOUJERRWBMUFPWHPIQVBKVIAPNYIWKJMFLVHUMMGPLIZUAYOGYWHGHEXZRBOGULONYHBFONEDCINOPRLSILXX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RUZNXGJHTMZLJAKBVOZFDZGJVBDQUPBXOOXGTGKETIILOHZRCDDXHFMSZCFPHIJYNFELBQWVPLAWFWBZKRYPXNAUUIRIGIOUTKSLBVQZGKVFYAKYPEMIUJSECJCLODDAFBDVA");
    tmp_msg_0.sys_type = 248U;
    tmp_msg_0.owner = 26853U;
    tmp_msg_0.lat = 0.9470916739428101;
    tmp_msg_0.lon = 0.7122636661574091;
    tmp_msg_0.height = 0.031398278024476034;
    tmp_msg_0.services.assign("SCGJVQHCYWEPHCTTKKFBEZXG");
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
    msg.setTimeStamp(0.6997931520547745);
    msg.setSource(45017U);
    msg.setSourceEntity(22U);
    msg.setDestination(63901U);
    msg.setDestinationEntity(29U);
    msg.localname.assign("XQADXFZIRHSVGMJDMWFUMAUPJISKYZLHFLZQYBAUNWJUQGPIZNEWWTDWGGDBOUHEHORCXIVGEWEHAMKYKKDAZJLONIGYRHQJXRVXOEMGHUKPPDPLNLSWSCGSJILZVEBTBXXVCWFYKBNQAQYVKFNXCI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IYPYFMMMUUBZUFUDDWGNXATWZWRRDYAZQGXJOCSXTMCSBDKKRDZKLHJDVBRMQGNPZGMJKESBJYUOMTOCJKHASYUFXFGL");
    tmp_msg_0.sys_type = 134U;
    tmp_msg_0.owner = 34521U;
    tmp_msg_0.lat = 0.4826744637440935;
    tmp_msg_0.lon = 0.14912821196010928;
    tmp_msg_0.height = 0.4054701624868752;
    tmp_msg_0.services.assign("KARAQDDDKXOIZPRRGMEZYXPABOWFSIEXIJKJLGBVVCDCODTFIFFLLNHHAOBHOETIZXGUZHMNYJTRBWLDLBCZGQZKMXUHPEKUIQERZLTAKS");
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
    msg.setTimeStamp(0.5531060627487295);
    msg.setSource(27532U);
    msg.setSourceEntity(122U);
    msg.setDestination(32603U);
    msg.setDestinationEntity(39U);
    msg.timeline.assign("DOZBBBXMFOWBEZYLLOVDPDZCPRNDGREXJYUJBHBTGWJQEQCAZSPXFYGOQKFMZDDSAWVWNZTGNPASEOVKJITFCJGKYJVWZURQUCAVCKYVAXKOLGYVBHWTIPXRXICEUJELBU");
    msg.predicate.assign("JHTGQGOLHQAETECFSQQJBBOIGTAOLM");
    msg.attributes.assign("ZZVGCOCXJXTJYMIIREZRZQFZAHUHADLFTXDTXVAMJSDSUPDSYBPHFIKKWLCNMFONSKBNEVXEYPBAWONKGAHGVJMJPPTRBYWKHFDTZQMHQMUUYVQUZQAMGVOTZFNEWRTLXOIMWGAXULMDSDDWQSWONNBVNIMSZJYACTCHBU");

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
    msg.setTimeStamp(0.1078658878028611);
    msg.setSource(1945U);
    msg.setSourceEntity(184U);
    msg.setDestination(3265U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("VWSSXVNAUJOZRUGYIHRBKHCODEUVMTYCDYWJHSNTXJXTHKCABLGIPTEPBTPSLNYPMYQQAWMQDOLJHYFNFTSHLZJEYQQULIOUJHFJNAAFBRDGTBXWOJTATXBGMZZLQAZCFMS");
    msg.predicate.assign("SMGJTRFEYTPKGDOKCYMXNXBXRQXWLPJJMHCXZCGHICDENECVNUZQPVJHZYWLBJECSUTWEWLWZUEZBHYSSRMUFTATDBGFMSUZRQDHZQAAJWKHDMOZTJRIOPNQAGWIVYCICUSFYRBVGAWOLFQKDQAETPTVALDKHLLZAOVRN");
    msg.attributes.assign("ZRLHJBUTIRISTAXJSACCROLPFNEGFGCKCSWENDCJIEPHBMVMUNMCIJWJHPJDEKNHPKLOGINCXTSGOLIIDCCSTOYUJATBPPVSFDYEAXQNRDYWVOWFDUZRPKWEQFKZMHAQXMXMGZVQMACVEGSMSROXGLQNBTQJKY");

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
    msg.setTimeStamp(0.6745705180061848);
    msg.setSource(10018U);
    msg.setSourceEntity(98U);
    msg.setDestination(16734U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("BJJVAHHSSNBYBWKNKMCENQWLMCSRBQTYWMAYOUFIQVXARPLOLGGTFPRKPKXIKNLVOTLHVOLHHJOQMJKHPIFAJHCVPNDGZYGVIAFHPTDRAZKYGGVFSJFELLDVPOWVLBXFZDZEZPWSBCQUDVNESXFUMIICPETYMNYWGTRJRKYDNXXUJMKXPTQGQRQXHSAUIQBFCWFLSUUNOBZTIBKCDBRGZDERSRNUIAMWUJ");
    msg.predicate.assign("HPDMPSDKZSUYHDFAGKJYUJZICCDRLQZBNNXIPZMFVMYUNOQBVFXPTAVECLMXIRRVFSEMAEHJOWGEEFUNFBBENRPSHBHWQDLYWWAZEBOSKYYNZWJIMWZTQUYQORUOQJTDFAILCMAIHRNIBFXJVKJKTWTRSPQMZCFSLWMNJLQHFNICOUSUVDGKTYJRTGG");
    msg.attributes.assign("MVRQNCQGHBYRIKJPSZWYDWEEATUGYHDJFZVQLCURIHAMJZXNDMUWRFITGFRTPKJAHAIGFYEBBTNKNDRWPDESOLBBEKWDRLLCVLVLSJAIKEZXNWFIKEPLFCBQOYSJKPEDAVXUHGXDSQAUHWMHUMIGWHTXLZXAFPCQIMOKTULBHVXCMUYCPKNZGYBWGUCOOQOYSPXMVNDAZJOCJNRJ");

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
    msg.setTimeStamp(0.2998660838424184);
    msg.setSource(2814U);
    msg.setSourceEntity(128U);
    msg.setDestination(55111U);
    msg.setDestinationEntity(250U);
    msg.command = 194U;
    msg.goal_id.assign("HPFTPJMFKNIWLVYHOSASYMRNQTCKTRQZVUKOWCAYXVOVDBPMDGRQUASJ");
    msg.goal_xml.assign("SMKGZPNVHTSXQNTAWCSIYBEUQMLYSJNTWMBIIROQVLGXDZLOVOUVBYTDKRCHFKOJAFDYHYEHMELKQJYCUBZGZIKFQQPTISAPFDTWOVQDHPIATFKXHFEDWZOWXXEKMMHPDRPXMWEJOGCURGFPUGQSVNJZKNQRDTCEPJNIRZSBCLCUOEVANCLYWLXLIVAHOHNYARZUWGESZGXUYCWIAQFJGWBVJMEDLZXTN");

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
    msg.setTimeStamp(0.7869875133757328);
    msg.setSource(19564U);
    msg.setSourceEntity(94U);
    msg.setDestination(38455U);
    msg.setDestinationEntity(57U);
    msg.command = 130U;
    msg.goal_id.assign("IJVEXVEKZSOQMFBDDPMXEYFGESCYTRQAQCEANVUCPYPBNNTHTRJAUWJJJMUWFXWFCURQMKOEYRBTVIDLSUANAKIIIXZVYZKBVYOYEZTCFFJOTLBSLFXNSYLWYPDNPTKZHQAJGREGAID");
    msg.goal_xml.assign("PRLHEBWIUFVGCTKMJFVYVGWHDIHMYDBMBSKOQE");

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
    msg.setTimeStamp(0.7175382568860634);
    msg.setSource(4285U);
    msg.setSourceEntity(111U);
    msg.setDestination(11531U);
    msg.setDestinationEntity(214U);
    msg.command = 244U;
    msg.goal_id.assign("TDZOGYFMHGCQWCOMVUUTWLGOJBNDABTVYGSOFKCWLKPZHHXDCQYVBPSPOTANQHFNFOZTJDNEYWZCJXMRWVONGMUMBZQFPAKQRJVOEPMTAIBEUUWZGLHIAHPMHBYZCSQLV");
    msg.goal_xml.assign("KPYDRHPWPLQRTCADXBNPOMCRCHCOTQXGFJAMBFACULLDBEENEIEPWGPYJHSAQIVRXNTGYKJOQPWTFAUWUGGDVKVDWKIJALNEOCDLUKZQNHAHSCQOXSNAZBZBXAYLSEBMVHDOPFFLBIUOKZKMAYHUEVLJFEMZSTDRKSX");

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
    msg.setTimeStamp(0.4659241594016401);
    msg.setSource(63230U);
    msg.setSourceEntity(88U);
    msg.setDestination(20756U);
    msg.setDestinationEntity(44U);
    msg.op = 131U;
    msg.goal_id.assign("HPAGVLZSQXBMWMTCDWJDMAVBYYXOXNBUGUOENWIYCZXTVQJWHUNSYOQNBFOYALENAUMZZXKHKJEKLBITGAASBCTJNKHHODXIYCJUKFQLVTXJXIS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OIOIHNABLYYTPJRBURPBWZWJYPQMYAFGNKBJRCEZFOGMGSYLODCSAJZUTNSLPRCWFSDLVGAYOWSAHLDBOBZDCFJAVXFFWREAWNTIMRVQKULLIMZRIXWNZXJEDSGCEBCYHVVUDUXRMFLUMKCVQEIHXQPMINGWCHLQKEZHAKSULBEEYQXGNDTOJ");
    tmp_msg_0.predicate.assign("TJNXUQTYUXCXOKZDLPUKQBZTDGGJHTARPMMVYDKOUREOKJAESVLNBZGFCXDUAEMNASQQEO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RMZZTGKJHFUGBDFXWAKNTNONOYRGXETTKCMZHHJAUWOYUIPPW");
    tmp_tmp_msg_0_0.attr_type = 177U;
    tmp_tmp_msg_0_0.min.assign("SNUXPTIEWDJAUFONXPJLOMNUUGRACSZYLSRVNTMEFLYQBZKASDWECHSECCQSWGQIXWZIQKPLMNGHRIBFMWSMBIQJBUV");
    tmp_tmp_msg_0_0.max.assign("ZLBMGWYREAANHAXVQDFZRVPYWUOHJWBIDYWFMDQTOMMUTNUOVPE");
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
    msg.setTimeStamp(0.6866957447243728);
    msg.setSource(29716U);
    msg.setSourceEntity(211U);
    msg.setDestination(41503U);
    msg.setDestinationEntity(13U);
    msg.op = 65U;
    msg.goal_id.assign("GBKKUGKIIRYJRFEBTGGDKHWKIDOBBBCJNWGRXOVJRWZQUQVIFDUNHBEQUQVXLSVBGJVNRRDLLMXFDUZGKVTGEWRSIBXJWQPTZUDLOHYMPOYXABXYNJNADSOWSOPPCPCGOPJMIEQQVNMTZSXUHAQECQYKFEFWMCAVZHCDPYTAHALNNAHOFEZPUXZZXFUPFOSAAGETJFWMKMKCIYODZHRAIMMICJKTVQNRCWSUTRHLWXVLDBZHY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LTTOWJHVYFCPIQMLKQYIVXLFAISYAJUVEQRGTJASWCHGXRPCAPHNFUOCPZZUOQSKQYXKDCCUYCIDJIXVJMRXBJPWDONURRNURAAYBLQNWPLVFQXVGZQVDEDHKZFIUFJQOIWFHYLTCBJRDETZNKMHPRPEVGZMSSGICAPOTZGJDMTBONPEKEJVBUEEOUSKLDAEGASGSIFSBBYRMGMNKMOHWZIFAZNLVBTGH");
    tmp_msg_0.predicate.assign("DOYDWAPGLNZGRATFWVMENSFYHTDXPJKSWKIWLXBSLOZRNGFMWYVQAECRQRVYSCMKTNCOVTENJEZBUCTDYEZARWKZDEKDWTJDPNPITHAUCIYTJLRQHXGBGVQALGVIBMFJNPBJUVHZFKVAFEFXBKUAFKQPGCYXXIBMMHPFHDIWCXOMEBGUJBSZAWIMRSCVPARNCENSCJKILQYYZXUILYXPHUOOSQLLUUDOXJOZGVBEH");
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
    msg.setTimeStamp(0.4271631202336119);
    msg.setSource(22017U);
    msg.setSourceEntity(29U);
    msg.setDestination(55996U);
    msg.setDestinationEntity(170U);
    msg.op = 192U;
    msg.goal_id.assign("XAWKQQDLLJIXEKVMKFZXIFFLGMHFYTYNYYVVNBDZUUHHMCOLBKTYKSIESVYPIBDHVCZFJNUYCNLEWWSLTRRKTQGOEOQRIGKSOXYOJAHPTCAVNTWWPKNPGJMPIAQXUSMREXHBJZMCWHJBSORLDALPDFEZZBAFSGTMGVJZURCAQUSICDGTJQDOMGLZVWUREPAFMTUDGXX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YJQRVBRONVKEFVZJKEKUVUTZGZEMTAJCFVDMXHNYXTNCKOFEOHPSFWMQLXKBRNGIOZMCHIYAFTPSYGHQZLRIITJNLPOKXPUUZQAAFRNODVGBNMOFWIGDICR");
    tmp_msg_0.predicate.assign("DBHTYTXSYMAIRNFYLABQGUJTAKJYKKGPLLEBVMQMJBXCYGZUFTSVWWHZEDWKUFFMYOGDWIHUUTQQYWXQJPTDXXUVJLDKJZHBXPCTSZOAJQNIIDCGKWNFVGFAANCFHQXOEYPOYJEXVTWSBRSICINOPWNPMOVESLEKKGAFLNRPPEZGPWRAKSBKWIMRNUCADDHCTSFLUBOJLVLORXYSCIRQCEVHDZTHZBGRCLHGSINREZBNVAOQVJR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EHLUFAKFMPZQDTTWDZHRZGAPVTYFBFGAWMHQCVKQLJJGHULVOSILPQBTRYAOISNWSXJBBHFHWKYBMAVRCDXEODVZNHNSEFRRZLKTOCWIYVOBEAXTDECLDXKDVNONPVDBCZJQFNZKPIEUNRWSQNYAUITMYSWKYGNISEMCHBMLVXIIUGUKDRRAWZIPNFKXXJOXAYYGJPTXWUUMGGOFPGMITOQLALZJVXQUBBJQTKEOHECFQ");
    tmp_tmp_msg_0_0.attr_type = 46U;
    tmp_tmp_msg_0_0.min.assign("CWSGYWEZJDSPYWIMQKMKUTXSAMSUBCKPHBTRAICGTVNDDBADVETULQNTAGHKWAOZBNHXCZYRBRUETZYUVGHPECMQHCGBFBJQZDUAIYXWMHXKLBINLTUESPRONVKEIONSBFFHNKZKMMRPPYOUIQFSQJELNVWZYLSWXOJPGDVMOJYLAFCFQVSUNQOIREOXMLPCC");
    tmp_tmp_msg_0_0.max.assign("MQYXSZNTJXRXHTLRWGRDAIVYUQKFSQELUROCEPKGTSHZYTYENGVAYCREAAQLCUZYQIBTWHFNJOAJOQVDIDRXDNGYMCFZMIBLWPNIYDUSDCPMNZTUVPPLRWXFAIOKWMQAYKAOVCVPNDSZVHLDPWQDCJTJBZMGOSFJXSMKOJBAIXGJU");
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
    msg.setTimeStamp(0.8371682428599586);
    msg.setSource(57982U);
    msg.setSourceEntity(130U);
    msg.setDestination(49513U);
    msg.setDestinationEntity(135U);
    msg.name.assign("LFQYOZBTVHGZPWN");
    msg.attr_type = 212U;
    msg.min.assign("ZQGIYWMESMAOWFRLAGJFXLBOKKCUKSAINMTMBNJGNPQRXNIUQDTHLYOJGLFAQCUYOOCOEPPXRIZNLFAWWQHIGJMSFTQIFJDVBCQPJSUMSECKXKEBRLCDUZDRV");
    msg.max.assign("PYHCKWDNAQCZYEVEOLNPHARDSTJYHRFWECCAQMZKPWXGINIVUTDNEPNISVHSJDXBKQUOQFPRYUMYEEJXQDCFFGTTFBUYVAQEXKKDQNHOQUORFNRCFBJJPQMPZDWJLLMLVZXWIGJXKMBWGLBTINYIISZBYGZAPLUMYWKOCVREIZJWGNATSVAXHMHOPTLSLDOCCV");

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
    msg.setTimeStamp(0.7701586457322193);
    msg.setSource(2607U);
    msg.setSourceEntity(94U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(48U);
    msg.name.assign("VNONGHQLTESM");
    msg.attr_type = 194U;
    msg.min.assign("VHIXBWIFOTIXSGDLKYAXTPMZPHILLAFFPSUDDDDYJFSGQPOJNLJBVC");
    msg.max.assign("DRNVGLFMWRDPECDGVOFGYEHJLJLCSEFSXCOSYUHPGJWFHTXNXBGTMHQBHSUXQPDQPZTRUBRHKLSATCTIQVBZJW");

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
    msg.setTimeStamp(0.6248340015259322);
    msg.setSource(37924U);
    msg.setSourceEntity(17U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(233U);
    msg.name.assign("PTOHOATAWFQFQSAUKDOHGCHDJGXGXMFWEEVPOYNXUZCJMSHDSOVNVXFJMVCRYPJYZIDZCWXYHSJEBWFRADFCAIAGQTATMMBPWHCPDKUXURDWGNLYOIJXVMQOKGSTHZFZOIWSFLXLLCTQUDINVQNZUKEQHLJPNQO");
    msg.attr_type = 207U;
    msg.min.assign("TJIIVREDQBDWQMVNLVURAYMXTLHFGACKSGAUGNPBUIVSTMMTOAIZWBSIUCVLVHMNDOINRLWPIOZRXTUQRCONSQEHXWMACMTBJGFPKYQFRRPWNKXIPNEKJKOATZZRLQHYBGCXCGBEHEKQSHPQSXJJBMOGSDFVIOSJOQKHFLXUWUFOUICNTJOLZAYBQLHUALWWTZVYTNWHYDRCDLEZJDYPGPSYDYPNEZRE");
    msg.max.assign("NRXYQLDHOSRASOUJUWUKIRPFIEVLRTMWBNSOOPGXKCFHQDCEWSBCVXLXUHFNTPXJEVCQEGRMDBAPTGNHLRFCVZMAJORBUJGVJQJZWQLNFPMRPA");

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
    msg.setTimeStamp(0.8862494321134932);
    msg.setSource(28344U);
    msg.setSourceEntity(73U);
    msg.setDestination(28766U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("HNDDAMIZEXRIYSUKCGABFJLXXMNKWLNZHFROJPUWGLBVCOWITNLWINTCLYEPDQ");
    msg.predicate.assign("DHRZPRQKGXXWLOKWGCGYQLCOBPZQNGLQTAFOICMEKUNSTFPPUDORHQVERFYREMXSLNZWAVAYERIKGJNVLUOMUBVFDXKTHWROSEKABOJCNAWIDCETMTQSLBPZOTTMHAGASSUSIGAJVJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LRZNODATSGFKXMBELBECGCFRENYOPPQEBXXDIZHHGBZNJNHRHGJPTPKDDOTXFYFHSADTCIWZK");
    tmp_msg_0.attr_type = 102U;
    tmp_msg_0.min.assign("GFBSHKDIZHBYVULWPVYVUXDWIHYZHIWCNDGUPSDYVPIJPFOJJJOPJUGHLOKZACUVZQCRIQNXYYTLQTBRVWJMLEQHMSCXLAZREWTDLEGOAFXEESZTPOYKTMUAPROAHNDILPSRANNBUKIQCUL");
    tmp_msg_0.max.assign("AJUONPYRSUXKKQHHCIIFLZBEPQGPSQERSFTIYF");
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
    msg.setTimeStamp(0.6208042187340981);
    msg.setSource(52153U);
    msg.setSourceEntity(63U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("XZJIQDASUQEWVBIRWGUCNETGEHCHUTQCYWAMFVHOVELHIBTABLQMOQCVLLSEANACOKNSMRHQRWSAOCKMIDFXIKTGUZIARGKTPX");
    msg.predicate.assign("KLRARVVXLRVFNXFTDKYHEPFKSRFKGPRHYIOLNFBRDFPLAWCAYVNJBDMYRZRQVLBBQTHJXYUZEUUOVQKCMGHWWJBDGLDCCITJULPCJHVJTDOMZQVTSU");

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
    msg.setTimeStamp(0.002370647092709288);
    msg.setSource(31910U);
    msg.setSourceEntity(131U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("CRKYOTSBPJGUTZZNECRESXXBIWQOILMFWYIKGNHOPUBRJRWOMCAADKEJCLRLOQZGSMQYJGEFVD");
    msg.predicate.assign("WFZHSRJPMWOQGHHPXKVZYELUJKDGIYETLXXYOCSQWJICZJNWQRXE");

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
    msg.setTimeStamp(0.8880340218918462);
    msg.setSource(56133U);
    msg.setSourceEntity(241U);
    msg.setDestination(29705U);
    msg.setDestinationEntity(163U);
    msg.reactor.assign("FTYHUDWREYQIIVHCHICKHRLTNBGLDUPVSSLGLFIRIYHXCFZJWUNKOXHMEXUBNYQLSSWXOITTDKZTIMIVJGXBAZMLAPFMYJWQHWTXFGCTDFCGSUOYKFLUHKYOMJXQMDJAQBGNDWRVJRJUCPFPAZNNIAEWSQPAAPTQEE");

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
    msg.setTimeStamp(0.5960601164699713);
    msg.setSource(38552U);
    msg.setSourceEntity(181U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(203U);
    msg.reactor.assign("AETRVADCNLJKGSTPKFUDYFIPBQHHYLWTMDPWLBSSIOMMXPMLUUTVNOMMHKTAJNIPKULRZSOUSDZJXLGFPQSUJOZGHEQKJHDZADXNRKVTBBSJAQKOXJPUIOYVRCNNGYPOEUWSNZWCBGRGQVZWMKFHFFYJATYNCGAIMLYD");

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
    msg.setTimeStamp(0.7446571513034833);
    msg.setSource(28796U);
    msg.setSourceEntity(84U);
    msg.setDestination(58721U);
    msg.setDestinationEntity(92U);
    msg.reactor.assign("WUVGHBLKCGQECAKOCALDLECDXTJGDX");

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
    msg.setTimeStamp(0.5623726087161373);
    msg.setSource(14582U);
    msg.setSourceEntity(6U);
    msg.setDestination(9718U);
    msg.setDestinationEntity(187U);
    msg.id = 139U;
    msg.width = 24128U;
    msg.height = 7891U;
    msg.widthstep = 62908U;
    msg.channels = 233U;
    msg.depth = 182U;
    msg.finaldata = 133U;
    const char tmp_msg_0[] = {-96, 80, -102, 53, -9, -26, 29, -86, 45, -107, 71, 90, -8, -75, 111, 79, 53, -28, 71, 30, -4, -30, -39, -35, -123, 8, 106, -72, 22, -21, -15, 7, 46, 59, -16, -1, 32, 117, -101, 92, 47, 116, 21, 22, 40, 85, -7, -101, -88, -84, 122, 85, 121, -41, 62, 72, -42, 119, 113, 96, 97, 66, 60, 101, -4, 113, -109, -46, -114, 18, -18};
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
    msg.setTimeStamp(0.6973922439479654);
    msg.setSource(65314U);
    msg.setSourceEntity(150U);
    msg.setDestination(1282U);
    msg.setDestinationEntity(163U);
    msg.id = 196U;
    msg.width = 60362U;
    msg.height = 37322U;
    msg.widthstep = 54671U;
    msg.channels = 31U;
    msg.depth = 196U;
    msg.finaldata = 177U;
    const char tmp_msg_0[] = {102, 87, 13, -94, 125, 39, 94, 39, 119, 36, -50, 7, 2, 72, -41, 45, -70, -37, 44, -83, 117, 126, 71, 80, 95, -98, -106, -53, -10, 9, 102, -77, -95, -56, 113, -115, 21, -81, -128, -112, 48, 19, -10, 118, 68, -86, 27, -29, 65, -35, 74, -64, -24, 110, -1, -109, -33, -95, 76, 47, -19, -66, 115, 106, 42, -56, 11, 83, -78, 26, -2, -32, 82, 61, 24, -114, 117, 55};
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
    msg.setTimeStamp(0.11812524804003988);
    msg.setSource(61694U);
    msg.setSourceEntity(184U);
    msg.setDestination(65312U);
    msg.setDestinationEntity(110U);
    msg.id = 191U;
    msg.width = 38508U;
    msg.height = 30569U;
    msg.widthstep = 45904U;
    msg.channels = 140U;
    msg.depth = 65U;
    msg.finaldata = 233U;
    const char tmp_msg_0[] = {-9, -22, -59, -104, 79, -67, 73, 1, -67, -123, 88, -86, 15, -69, 64, -88, -49, 77, -43, 124, -101, -22};
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
    msg.setTimeStamp(0.19258462124361375);
    msg.setSource(23174U);
    msg.setSourceEntity(165U);
    msg.setDestination(10684U);
    msg.setDestinationEntity(195U);
    msg.width = 61625U;
    msg.height = 15809U;
    msg.channels = 113U;
    msg.depth = 204U;
    const char tmp_msg_0[] = {-60, 110, 110, -120, 116, -30, 41, -115, -51, -5, -34, -56, 33, 49, -106, -46, -117, 90, 72, -41, -128, -50, -96, 96, -41, -88, -50, 41, -109, 72, 38, 18, -26, 126, -12, -62, -9, -70, -97, 57, 91, 58, -80, -50, -111, -45, 111, -16, 40, -82, -45, 115, -42, -6, 17, -19, -82, 3, -56, -91, -81, -56, 71, 87, 22, -27, 123, -74, 55, 72, -56, 114, 33, -105, 47, -37, -125, -51, -13, 125, 96, -21, 76, 9, -10, -126, 75, 53, -102, 70, 61, 30, -6, 5, 72, -6, 58, 21, -9, -34, 80, 117, 111, -89, -24, -54, -92, 112, 69, 69, 45, -11, -69, 111, 106, -32, -25, 86, -78, -21, -44, 0, 113, 116, -98, -83, -83, -94, 72, 65, 2, -48, -74, -79, 1, -71, -42, -97, -26, 17, 37, -5, -55, -70, -72, -81, 51, -99, 0, 109, -123, 26, -3, -67, 37, 60, 126, 112, -120, -41, 58, -97, -113, -21, -85, 67, 80, 110, -50, 114, -36, 55, -55, -18, 2, -99, -15, 37, -23, -65, 93, 41, -48, -57, 121, 30, -49, 23, -114, 91, -108, -50, 13, -114, 90, -67, 36, -28, -19, -47, 38, 16, -102, -1, -53, -75, -77, -110, -11, 27, 8, -81, -40, -4, -61, 99, -85, 101, -92, -81, 87, 102};
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
    msg.setTimeStamp(0.44796548456690355);
    msg.setSource(36835U);
    msg.setSourceEntity(127U);
    msg.setDestination(32996U);
    msg.setDestinationEntity(149U);
    msg.width = 63606U;
    msg.height = 28862U;
    msg.channels = 18U;
    msg.depth = 119U;
    const char tmp_msg_0[] = {111, 77, -112, -115, 5, -7, -91, 79, -35, -17, 106, -107, -116, 116, 85, 46, 97, -89, 18, 120, 26, -2, 66, -17, 103, 35, -100, -36, 111, -94, -113, 87, 62, 27, -17, 115, 52, -86, -95, -87, -112, 4, 76, -65, 18, -43, 83, 72, 48, -66, 11, -2, 113, -66, 0, 105, 53, -25, 42, -47, -20, -47, 14, -17, 79, 67, 57, -117, 46, -91, 5, -121, -44, 117, 75, 28, 60, 42, 107, -1, 77, 116, 107, -95, 43};
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
    msg.setTimeStamp(0.21032908047641108);
    msg.setSource(3462U);
    msg.setSourceEntity(36U);
    msg.setDestination(49340U);
    msg.setDestinationEntity(220U);
    msg.width = 61661U;
    msg.height = 56819U;
    msg.channels = 53U;
    msg.depth = 185U;
    const char tmp_msg_0[] = {58, -76, 24, -73, 50, -97, -122, -106, 124, 15, 23, 36, 49, 53, -21, -20, -30, 77, -6, 79, 80, 61, 117, 86, -114, 6, -48, 14, -54, 66, -61, 92, 1, -19, -70, 115, 29, -44, -66, 60, 8, 95, -4, 111, 103, -70, -74, 121, -64, -58, -77, -117, 55, -63, -107, 34, -87};
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
    msg.setTimeStamp(0.170673170948626);
    msg.setSource(40166U);
    msg.setSourceEntity(30U);
    msg.setDestination(7265U);
    msg.setDestinationEntity(59U);
    msg.frameid = 188U;
    const char tmp_msg_0[] = {95, -50, -83, -29, -100, -96, 61, 95, 20, 47, -111, -69, 52, -33, -121, -109, -108, -4, 39, 65, 116, -22, -91, 32, -4, 34, 124, -22, 95, 62, -25, -97, 23, -3, -71, 91, 23, 20, -48, 17, -104, -51, 57, -33, 30, -63, 86, -62, -10, -14, 69, -14, 66, 69, 111, 14, 62, -53, 27, 76, -57, -100, -122, -11, 125, -125, -13, 99, -78, 18, -63, 63, -53, -124, -32, 93, -108, -16, 106, -1, -125, -74, -37, 0, 26, -19, 16, 19, -97, -76, -56, 101, -91, -122, 37, 43, -56, 55, 35, 18, 85, -75, -14, 94, -34, 86, 62, 34, -105, -5, -73, -72, 13, 118, -18, 117, -117, -122, 90, 0, 28, -118, -112, 87, -121, 44, -113, -41, -33, 123, -42, 96, -94, -7, 53, -52, 110, 1, 43, -36, 94, -11, 78, 28, 47, -1, 43, 49, -20, -81, -101, 39, -97, 7, -28, -64, 110, 45, 102, 109, -107, 81, 40, 4, -66, 99, -60, 64, 116, 97, 119, -73, -76, -100, -82, 75, 38, -76, 59, -31, -103, -44, -36, -25, -10, 122, -49, 80, 46, -63, -119, -22, -102, -98, 67, -116, 99, 114, 13, 122, -2, -121, 61};
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
    msg.setTimeStamp(0.2716260085352724);
    msg.setSource(13803U);
    msg.setSourceEntity(54U);
    msg.setDestination(58876U);
    msg.setDestinationEntity(155U);
    msg.frameid = 140U;
    const char tmp_msg_0[] = {49, 89, -37, 56, 62, 84, 91, 61, -15, 77, -93, -120, -55, -24, 104, -4, -67, 39, -127, -78, 120, 77, 61, 25, -25, 90, -13, -39, -4, -18, -2, -4, 52, 88, -69, 123, 113, -19, 120, 126, -85, 103, 8, 51, 117, 41, 81, 18, -87, -96, -60, 91, -75, -102, 104, 75, -102, 57, -102, 52, 34, 45, 57, -4, 22, 105, 28, -92, 75, -82, 78, 28, 123, 6, 21, 97, 85, -127, -55, 113, -65, -109, -20, 13, -80, -106, 52, -112, 64, -9, 48, -57, -112, 48, -108, 71, 121, 66, -8, 3, -105, -77, 45, -116, 80, 41, -14, -122, -99, -41, -53, 112, 48, -61, -5, 47, -83, -111, 24, 87, -46, 43, -82, -112, 54, -26, 113, 2, -31, 116, 32, 44, -31, 59, -57, 94, -88, 60, -105, 70, -123, -23, 18, -103, -114, -62, 89, -69, -114, -124, -77, -78, -123, -122, 117, -55, 120, -58, -80, -43, -24, -66, 9, -112, -67, -99, 96, -62, 43, -117, 79, 121, -38, 20, 41, -103, -90, -77, 57, 114, -98, 118, -48, 24, 108, 93, -115, 96, -128, 46, 55, 19, 89, 116, 116, -31, 57, 45, 79, 104, 45, -105, -4, -40, 52, -84, -92, 101, -2, -41, -120, -84, 18, -41, 74, 106, 7, 16, -63, -99, -47, -22, 65, -39, -21, 89, 0};
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
    msg.setTimeStamp(0.31302385859204185);
    msg.setSource(1536U);
    msg.setSourceEntity(81U);
    msg.setDestination(39193U);
    msg.setDestinationEntity(96U);
    msg.frameid = 113U;
    const char tmp_msg_0[] = {5, -10, 103, -13, 67, 41, -35, 82, -109, 105, 55, 114, -60, 104, -5, -51, 116, 22, -38, -10, -117, 78, -6, 96, -124, -106, 125, 116, -21, 27, -74, -103, 61, -4, -58, -32, 37, 43, -7, -100, 111, -36, 61, 20, -81, -118, 25, 88, -29, -121, -2, -106, 15, 117, 36, 21, 116, 53, -82, 55, 32, 15, 9, 112, 126, 76, -116, -10, -5, 20, -64, -114, 7, -18, 31, -99, 25, 69, 49, 0, -79, -16, 70, -121, 30, -16, -111, 51, 109, -94, 99, -77, 83, 89, -85, 36, 1, 45, -5, -51, -78, -64, 80, -59, -119, -25, -119, 47, -93, 92, -51, 10, 23, 54, -127, 65, -21, 37, -56, 113, -28, 110, 17, 17, -90, -55, -59, -108, 110, 112, 33, -98, -92, -85, 65, 115, 107, 114, -99, -48, -100, 19, -52, -86, -21, 113};
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
    msg.setTimeStamp(0.9494191141540773);
    msg.setSource(11836U);
    msg.setSourceEntity(163U);
    msg.setDestination(3208U);
    msg.setDestinationEntity(185U);
    msg.fps = 18U;
    msg.quality = 14U;
    msg.reps = 212U;
    msg.tsize = 137U;

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
    msg.setTimeStamp(0.4291016358921693);
    msg.setSource(13907U);
    msg.setSourceEntity(45U);
    msg.setDestination(41043U);
    msg.setDestinationEntity(199U);
    msg.fps = 209U;
    msg.quality = 77U;
    msg.reps = 16U;
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
    msg.setTimeStamp(0.4583564956217008);
    msg.setSource(46098U);
    msg.setSourceEntity(120U);
    msg.setDestination(31764U);
    msg.setDestinationEntity(33U);
    msg.fps = 239U;
    msg.quality = 6U;
    msg.reps = 64U;
    msg.tsize = 230U;

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
    msg.setTimeStamp(0.9022759289739564);
    msg.setSource(26357U);
    msg.setSourceEntity(103U);
    msg.setDestination(6959U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.9454343424941734;
    msg.lon = 0.4205500777320548;
    msg.depth = 187U;
    msg.speed = 0.483040820169104;
    msg.psi = 0.9104495192158293;

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
    msg.setTimeStamp(0.5732847089615576);
    msg.setSource(40939U);
    msg.setSourceEntity(193U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.14211040481144066;
    msg.lon = 0.2303523526424638;
    msg.depth = 54U;
    msg.speed = 0.7473996043979647;
    msg.psi = 0.7676324514552276;

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
    msg.setTimeStamp(0.4850615745284399);
    msg.setSource(32942U);
    msg.setSourceEntity(176U);
    msg.setDestination(53856U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.3521800164737354;
    msg.lon = 0.12192628784253445;
    msg.depth = 242U;
    msg.speed = 0.7974388258650702;
    msg.psi = 0.43089121290697263;

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
    msg.setTimeStamp(0.6031956945814544);
    msg.setSource(36063U);
    msg.setSourceEntity(146U);
    msg.setDestination(36827U);
    msg.setDestinationEntity(239U);
    msg.label.assign("EWHXCBWYYIRSWWKXWGNBIBGKLZPRBKOVTZDFPUBLPKQJYZRIAZIDILDRAEJLVFFBSJCZVBJEOVXPNGDAICUUXBWIEXUWJHNRYYQFOQCKWJHSOUHMJXKJCPMGMYGFFCLOHBDNYNVHQMUTSYUQSTSOXQYMFYNXGAFMEPGUAPOMDZLRCQGLOBKFEPVJALMNTCMKXHTACDOZGKQNVNEHZGU");
    msg.lat = 0.7847077572039011;
    msg.lon = 0.9752507297395261;
    msg.z = 0.9631286683331294;
    msg.z_units = 250U;
    msg.cog = 0.9736376859957346;
    msg.sog = 0.39841234994075747;

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
    msg.setTimeStamp(0.02090368437020218);
    msg.setSource(65277U);
    msg.setSourceEntity(199U);
    msg.setDestination(21987U);
    msg.setDestinationEntity(132U);
    msg.label.assign("CCSOXVELDRFJHKPTKCLXRHELHUQKNJYUEICZYFGZLARYPOKGEPR");
    msg.lat = 0.32108226719934985;
    msg.lon = 0.022761445367462718;
    msg.z = 0.7018728730398998;
    msg.z_units = 87U;
    msg.cog = 0.0008330249103454257;
    msg.sog = 0.35811837675414326;

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
    msg.setTimeStamp(0.9093488935195223);
    msg.setSource(9625U);
    msg.setSourceEntity(213U);
    msg.setDestination(10699U);
    msg.setDestinationEntity(12U);
    msg.label.assign("YMVCCSFLDECSBWMHWRWPZMACPUEBBUVLUFAOYJYKVFZEATMAIGNMDIIOXJVGOCCLZKXXZDDPQUFBPSNWULWQKU");
    msg.lat = 0.7548366680400979;
    msg.lon = 0.3847145006164019;
    msg.z = 0.10961809050685756;
    msg.z_units = 59U;
    msg.cog = 0.88483955169471;
    msg.sog = 0.9703391560830757;

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
    msg.setTimeStamp(0.5903937036644895);
    msg.setSource(62898U);
    msg.setSourceEntity(77U);
    msg.setDestination(7824U);
    msg.setDestinationEntity(104U);
    msg.name.assign("WMHWIDEQDXMITKKJRGIXDEFNXPPCYNBEASXHZGPVBOCLVINOQLPWZKNMJDSVEXVOETGLZLTTPDYIRZIKCLRFSJBWAGICGCJVBQYDBULOZROXNYCSUGEXAPLNPWQRNKTABGYSNBVQTVPAUFOJYYTTQQSIQCQECEIMLIFGUDVVEMPMKSAFLAKOZRTXUOUDWQKUJMFNZMEHXUOGDHHUAXJHNFSR");
    msg.value.assign("QPPHHFKNGMAAJWIGZECVYXGSEYPMFRSFLFMUVMFGAJLIHZPFPUUWAPXLQRWTYGIRQSXZKGNUMRFJGJKLICGSIKASQIDVDHTZKVDOOUTXWBUXDFULBIUGXKODSZAFCBIOCNTYE");

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
    msg.setTimeStamp(0.6208509095673613);
    msg.setSource(64095U);
    msg.setSourceEntity(209U);
    msg.setDestination(50304U);
    msg.setDestinationEntity(134U);
    msg.name.assign("QFCUUVIAKIMDCFIBPRUOKHNKHPQKZJDSIRWBZWJFAKDHFXQRCEXDVVTYUYFNNHEVQOPBEZJROBWELLCYJSULASVSCKLGXXHSHBKNEEQUMDCXXAPLADKCFUZXWKBRISIMVXCPPJOJIMEYNYNXLGY");
    msg.value.assign("IEILWVTNBVTMZXXGYFHRKDZZTRKQRMKQQZPSVHXCWRMLUZCBDSJLQPPYPYTALAHABBYZFKNHOEXIWXCY");

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
    msg.setTimeStamp(0.7224983365080024);
    msg.setSource(51784U);
    msg.setSourceEntity(164U);
    msg.setDestination(40790U);
    msg.setDestinationEntity(2U);
    msg.name.assign("CTLRDQZQNFGVCHNYUZEUWVNGHWMIWZQRWTPIDKGDOEWHSDIOLIWEWKTBJPMXXXEEIURSWPSYYEOTQVADENNZHAXCVBBLZPEJPMHFHPBCDZISBOASSSTQBMUYGXUHDJXGMQKRUGWYATVCJOLAVUAQYFZBAJGZJANCKPEXKHTRRKNQFFVQYUNFXXIDWFKJKMMBKPTOTAOFXMCRSPNLYRSYOLJEILOVOFGHGQCVHIVZYL");
    msg.value.assign("OATAYPMOKSQYPUYTGLEHCMITANLJPGOZURPEXMQBWBRCWYCTCZJQCEKOADVSYQDGKJEVOSMPZTNQADSNXHISKHJHWOGZHWSVBDXJMFNGEUOFSXVQJVTNEEKLIMCRYAUMBVHSWINBLFFHVLUCCIRCGUEFKZKU");

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
    msg.setTimeStamp(0.5098735893941176);
    msg.setSource(27959U);
    msg.setSourceEntity(49U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(138U);
    msg.name.assign("KTLCRUILTVZVHPAQWPFFFMJYFQPGOBKCUAYTATCDUDNH");

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
    msg.setTimeStamp(0.0884723073673126);
    msg.setSource(58323U);
    msg.setSourceEntity(252U);
    msg.setDestination(63121U);
    msg.setDestinationEntity(96U);
    msg.name.assign("SSESWKNEQSBHMGUUFPCVDWZQKDRLACDLIJIBRHVAKERMHNCQUXOXBZOGNNMLHFBTUWICSIKNXDNTBGNNOVWPCVSBFYJLLQMYKQTFBEWDIYPJKGQQUNDANJBACWGMRQAOLFGJPEUXTYSAJHHOJUULFITTPIOEWHAMZRYCPIHTFFOOKOHDLOMYDAXCKWZSVYVCTRDYCPSERELRJGZXYIVWGYZ");

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
    msg.setTimeStamp(0.31562813730539285);
    msg.setSource(31148U);
    msg.setSourceEntity(28U);
    msg.setDestination(54701U);
    msg.setDestinationEntity(117U);
    msg.name.assign("WEDFVZFKOKALNEWKQEMZTMZJRSVGTXALRIHLVONMYYWQKJUIKYJHNELYJWXBHRYZCLIUBHHQXIYNXPRUHQHXFYFXTMABSFOFLYPHHEISLDDZTEOSAACNTGXJCWDDAGKNKYAASVMIGORPJQSVRWZFQVITDTJDPVGVIZNTGCQEJBIDPUVNTGWSSMOMHZOEIFKMSYDWBKLCOMRSMBLXCWCCCRBNPPKQJGAOOPJUECFPLZUXXE");

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
    msg.setTimeStamp(0.071380466352305);
    msg.setSource(53495U);
    msg.setSourceEntity(246U);
    msg.setDestination(44717U);
    msg.setDestinationEntity(104U);
    msg.name.assign("IJIKRZWHYTCAFPKBBNVKMHNFG");
    msg.visibility.assign("VUIIQSEHNRYYMJGRMULXHNTOVMCIIBEJQKULOOBLQEELNPTGVFSQGPRERDYMVGLMNXBZAOKJVLPZDNDOTELDUCAUPSFSDPBSNZGBUKQZCVJFAINKIHSIDQOINYOTAKADTWZVWHQWRGTLOESNRHPJWQJG");
    msg.scope.assign("TROGXCIVPQASCWJALQSHYPLZKF");

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
    msg.setTimeStamp(0.9849590411750935);
    msg.setSource(21580U);
    msg.setSourceEntity(155U);
    msg.setDestination(5712U);
    msg.setDestinationEntity(146U);
    msg.name.assign("XAWUVGUAXOHUSCJDFJOZTEULYJNPDIHFWGC");
    msg.visibility.assign("YSYFCTOKGJBWFKZQVDEPJEBQRRFDDVOOTVTAEXLIXCMGNYPODMZFXUSNXXXIDGSPGWSTNRQJNTKUQKDZAEU");
    msg.scope.assign("XJHERVEHASLXTKDBTDXAPWOQGUWLSDRMKPOCJRDYYTXMAEVHBLATCIFNPBNSXN");

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
    msg.setTimeStamp(0.9254136629226841);
    msg.setSource(58522U);
    msg.setSourceEntity(227U);
    msg.setDestination(5092U);
    msg.setDestinationEntity(63U);
    msg.name.assign("HOOBSSCNFEIWUQSFUGSUZUNKYFHRZBJGTXUDYMVBZRIVIKVWMWAQ");
    msg.visibility.assign("CXVJQJEXDPSMOAFHIJKCVMTZILPOZABNCZQQKRGSHDEKBJACWUFFTLWTBBTGIAEWLGPREXHEVZDVHOHYSNXEGIOTDGNQSWIYBYMCSGWOADKSOTLZUNCIESOMEYY");
    msg.scope.assign("KLYOVLCBXJZOIIGDOKMRSWOBKMDJJEUTCIJNFDGNW");

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
    msg.setTimeStamp(0.145073811728605);
    msg.setSource(41020U);
    msg.setSourceEntity(125U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ZEIHPUDSHTXNGPLYVNTAMHQOLUCTMXJOIJLCYTYQRQTZFSXWZUTBMIVCLFKVLTINMWIGBOJDSSDXUKGIMPVLQCOYZNELKVEUOPSHYDARCABZMZPSEMDZGEEQKEZIGJGFHZHWCUWTLSWWJYEJPCRKASFBFRAORYBBQHNWCZWFDGHPRCDEKQHFXVRNKATGTJYAVUINBPVDGUNBQWURIOXMBYVBFDNAKLNAQLXMP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VSRAJWUEZLQVVTOKYJRKANYGRENKNJQQOPMFGSTJXYENSBXCVYZEZKPLZXKRDHCHUEZODGPIGUOHWSCMPTFOOYSLMAYRGAVCIDRUOEEXMWBDDMHETEWYXSRTJPFQWNCDUFKQBXMCZODQDMICJZYMCSMPXUYGZRYBTVAZLHLDMBH");
    tmp_msg_0.value.assign("OFXSNQTSANHNZEOZDKDDFRWGMYPVIZFJACIFWSUQBVTDFKSQCSKJGBGRHGRTOYSEFJFBLSAOMPZBLBJYMWWZNYTVFHTGGMJYEQIKMHCMRSAIGIVJURXWPBENUQWCDMBELYXYVUNMHXMEDXVHSGFEPDWDLYAICHDZPZUGYPBUNWZPQNUHTXVATOLEOLVXJOTUJOCJKQPLCDPLBHKIGEKPTWOQIUOFSQRQCMITKAXAIZLXVKLBCRYCHE");
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
    msg.setTimeStamp(0.4808639389667383);
    msg.setSource(11595U);
    msg.setSourceEntity(128U);
    msg.setDestination(50225U);
    msg.setDestinationEntity(187U);
    msg.name.assign("UZXNBMPEXOBONZAOFSWUIZEIBDRUBTYWCMGHXNYPQLCWMHRHHXYRLRVDTFQKCSVPEOESMMVYGTDVGKWPBGLUYLOJYDFPLDXUTJZOFIZBWDANSAVPTUIDNN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PBWIPKRDDDKYUCCVROQJUZSRPLHBGLKFPTGYLCZTXKMOMYLWWXFVEQVBWTCGIDUWLJQGXBGHARGUHQNBJZYOIPZNCRXEFMAYEOOQPBEMFUWDWSFWHSSDYJCGVOKETFTQFMZKAQGPCVSUDNVMSUZNAOSNJXRIEQPBKIFQLRXHKMJBLCVAZUNHERQIUSGEZIZLFHASIJWXMYAISOKFXHPXMAHOVGNHYACORD");
    tmp_msg_0.value.assign("KYIPRGWHNODVOUPFZGQFVFUTMLEQAKMXBCBYICDZYRIFQMSWWQJOMEZQTXJVWVRBIGYYKCPXZJYDXMVDTVZCJNNLMHSJADSMTYHSDGPEWTZBEOTQNHJPXUXOWMAZURKCZPNOGTIOWHGSWJKLEFRDVUGBCQAWALHUBKIULOVAPDNMCLL");
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
    msg.setTimeStamp(0.3872716842913333);
    msg.setSource(30553U);
    msg.setSourceEntity(152U);
    msg.setDestination(57735U);
    msg.setDestinationEntity(218U);
    msg.name.assign("BHFECGNUAEGRUHICPNMIJWEFZYWDMSGQBVBREZKAIBQADSGPJHQZNHNUGQXCOQUOLXTRFNEYXMDIJMRYCUZDNAHUXLSAEWJPXKXFXXIBKPVODOPQCRQXRASWOXSHFVYOSGTHRTBPJWEWFKVIUDMLVAOVMQTURNRLPKJYSNHIQYTTBOHEVELFZFLDLINJVPGONUUCLRWTLOWZPLTWYCFVKKKD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HUPCNQJYAGGCRBIXJCRL");
    tmp_msg_0.value.assign("SNRIIOGACLTUDGOMZRWSJDTQFVMJRIYEDJNQOWFDZNFQFAGBFETHVEGTCPARXUTBYLJM");
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
    msg.setTimeStamp(0.04891372924949311);
    msg.setSource(4686U);
    msg.setSourceEntity(204U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(38U);
    msg.name.assign("NMDCVZUOOLLCUFATKTETQIIRNGAOEZP");

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
    msg.setTimeStamp(0.46836168312956006);
    msg.setSource(53660U);
    msg.setSourceEntity(170U);
    msg.setDestination(22234U);
    msg.setDestinationEntity(113U);
    msg.name.assign("JKMHWILUPGBGKRQRJUAPLNSCSTBTFIIKNPOCWJVKFUQOVRQDPGIDQTILEMEBPYEIGVHNQHMSOLFDQDHWCPEWRWQYXPYOSCZXTSMBDVGAJSKVFJLNNBC");

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
    msg.setTimeStamp(0.5895809517049616);
    msg.setSource(12978U);
    msg.setSourceEntity(149U);
    msg.setDestination(21878U);
    msg.setDestinationEntity(62U);
    msg.name.assign("AXYKJIIWHZKSKDOLGVEQWMUWJOLLADWESDGPPVAQBXJVBZRHYSVCIFXFCTLWSSSECNRFBRNCJHZCFPYZFXYWOUXWPMZFMUARSJHKDXBGIPQTIKXQDGOBTINNEPMHFHMMZNRAGHDAUTFQIERBKYKOMTCGTITHZZCUEPQDXJDYOQCNUTLUVFXUNEMZSYLSEWGUJYLBRLW");

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
    msg.setTimeStamp(0.1145676354831845);
    msg.setSource(2886U);
    msg.setSourceEntity(78U);
    msg.setDestination(17923U);
    msg.setDestinationEntity(148U);
    msg.timeout = 4265165971U;

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
    msg.setTimeStamp(0.6936742721609815);
    msg.setSource(60288U);
    msg.setSourceEntity(35U);
    msg.setDestination(766U);
    msg.setDestinationEntity(221U);
    msg.timeout = 3709657085U;

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
    msg.setTimeStamp(0.4861292998604201);
    msg.setSource(2753U);
    msg.setSourceEntity(157U);
    msg.setDestination(28520U);
    msg.setDestinationEntity(30U);
    msg.timeout = 1824195243U;

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
    msg.setTimeStamp(0.2227639319823893);
    msg.setSource(15147U);
    msg.setSourceEntity(169U);
    msg.setDestination(50458U);
    msg.setDestinationEntity(197U);
    msg.sessid = 439402179U;

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
    msg.setTimeStamp(0.8774229488823475);
    msg.setSource(58434U);
    msg.setSourceEntity(165U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(149U);
    msg.sessid = 2148618950U;

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
    msg.setTimeStamp(0.7094731902036495);
    msg.setSource(23491U);
    msg.setSourceEntity(228U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(175U);
    msg.sessid = 4258874114U;

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
    msg.setTimeStamp(0.681768601547283);
    msg.setSource(3006U);
    msg.setSourceEntity(3U);
    msg.setDestination(17282U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3169833633U;
    msg.messages.assign("RTCURJCGZZGBFSKAECYVJQEIYXOUQDIYBPEOYFXXIMWFLAWASUGJTSHVPBQHIOSYIDHZFOWIAUZSDDKCGXGBRHSMXGTTDBJHOAGOETLSELYTEAERGCRQJCJMPDKHUMXHSKNXOBVVMGVKULMPUSWSWYNQRFYNXUIINPCIJFOAGORINLPQDZMEHQFLHVJNWTAAMJVLNXKLKLUZMNTLQZBVRJDBBPPNKVWC");

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
    msg.setTimeStamp(0.971764950414142);
    msg.setSource(8340U);
    msg.setSourceEntity(173U);
    msg.setDestination(4610U);
    msg.setDestinationEntity(77U);
    msg.sessid = 2487723973U;
    msg.messages.assign("HGIFPZXUBJVGGAEUDNHMWZDFSENQMOULRISUSDLHUVQBTLRCPIZCZC");

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
    msg.setTimeStamp(0.8168108461254954);
    msg.setSource(26137U);
    msg.setSourceEntity(120U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(123U);
    msg.sessid = 2934230663U;
    msg.messages.assign("VOKGQGXMQSNQSIKXVWRHIQRPYIWUKTHEUDPL");

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
    msg.setTimeStamp(0.1559324359401003);
    msg.setSource(50858U);
    msg.setSourceEntity(152U);
    msg.setDestination(9194U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2562835478U;

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
    msg.setTimeStamp(0.2830242732732414);
    msg.setSource(58194U);
    msg.setSourceEntity(15U);
    msg.setDestination(42879U);
    msg.setDestinationEntity(46U);
    msg.sessid = 228240649U;

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
    msg.setTimeStamp(0.9224344689454345);
    msg.setSource(12427U);
    msg.setSourceEntity(81U);
    msg.setDestination(57171U);
    msg.setDestinationEntity(204U);
    msg.sessid = 114765429U;

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
    msg.setTimeStamp(0.9986938246563225);
    msg.setSource(36185U);
    msg.setSourceEntity(103U);
    msg.setDestination(41727U);
    msg.setDestinationEntity(43U);
    msg.sessid = 2971409512U;
    msg.status = 94U;

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
    msg.setTimeStamp(0.7319835057653503);
    msg.setSource(63495U);
    msg.setSourceEntity(114U);
    msg.setDestination(16118U);
    msg.setDestinationEntity(73U);
    msg.sessid = 2729927192U;
    msg.status = 92U;

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
    msg.setTimeStamp(0.0614333755370966);
    msg.setSource(7190U);
    msg.setSourceEntity(65U);
    msg.setDestination(53220U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2799978976U;
    msg.status = 128U;

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
    msg.setTimeStamp(0.7654910420665685);
    msg.setSource(34586U);
    msg.setSourceEntity(114U);
    msg.setDestination(38162U);
    msg.setDestinationEntity(49U);
    msg.name.assign("SJMZMWAUJLNKFLICVGIAVQLBDPTLHUVOYGONRJVSUHWTBGAAGHGBDADRPNTSDNSQCBHFWMDRSZVUKXTBDEMYACYZXYIRKLEXNHITNVUKFIXWNIUVXZUCQEQXPQKCQHSQWO");

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
    msg.setTimeStamp(0.6105440166571391);
    msg.setSource(17622U);
    msg.setSourceEntity(139U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(115U);
    msg.name.assign("XTCWNRBPNZRBXHGHYMHICAIPHCGHBSJEMOFETEBNLKQXNZOFTSBTWEKAXQFANQPAYPVJSILGUBOCRWLCEFYSGNUOKOGENKZIQQFAGTLTZPDQVMXOEMRXHPAKMPEMIYUCIDJQKXKUVYZRHJPRJBASZODAWZXWLDVGNDTEPYVDZLPFUZYBFUROVAYMQVKOSULCCIWRJSLHOSTTVBCDWJVDJCWYQBW");

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
    msg.setTimeStamp(0.18890121762371437);
    msg.setSource(4949U);
    msg.setSourceEntity(241U);
    msg.setDestination(24187U);
    msg.setDestinationEntity(112U);
    msg.name.assign("LWENYIAIKBRVBPKSFUTRYBDLPCLNXSSSPEKVTVFNDYFEFCMOESMGIVTIJZKULWTKAMTYYAZPHRPKWNAXWFNXIFRITZQMLDPHFKREHOWEPHDMPBROBDPQEOMZALVJASFDQXKTJZBQVJCWHJWCUPQJOOUINQLDBNRXCEJNCHAZYAIGYUKVJTDVGWGDGUAXMQQRLQILTFSCQEDYUWRMELOOCKZUJVZHOSACJMHZNGTVGYUUBOIYGSHWHNB");

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
    msg.setTimeStamp(0.2626046196874582);
    msg.setSource(3443U);
    msg.setSourceEntity(205U);
    msg.setDestination(18264U);
    msg.setDestinationEntity(64U);
    msg.name.assign("CUVOMSQIANQT");

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
    msg.setTimeStamp(0.5464115671620223);
    msg.setSource(29076U);
    msg.setSourceEntity(234U);
    msg.setDestination(39689U);
    msg.setDestinationEntity(27U);
    msg.name.assign("ZUPJCLDLORJBPOBNNUJFQKGZWURPSOPTACTQKGMFXGRDRWIXREZXNHGYZFOOKGDLYVKMVHHUMESLRTCVWVSZWWFRCCMBTAGMQWCXEKBGWAKOXECDXTSBTDNQBN");

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
    msg.setTimeStamp(0.35983298058986324);
    msg.setSource(42735U);
    msg.setSourceEntity(47U);
    msg.setDestination(22607U);
    msg.setDestinationEntity(65U);
    msg.name.assign("UKIDRJTITZTUTGWLMZSNHAWJUIWQQVUMZAAECAJGGPCWJYWPBHCTYKDXKPPVBMJHDKOVCSLEIXXFMRRZDKYZNKKKBDKNUYBVQFNSLHVI");

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
    msg.setTimeStamp(0.34740411004540683);
    msg.setSource(48959U);
    msg.setSourceEntity(103U);
    msg.setDestination(29128U);
    msg.setDestinationEntity(177U);
    msg.type = 12U;
    msg.error.assign("SDPLILBLBLFSCTFTHCIJYVULGQZTHEMOKBOONRHWVSDHRKMBWBUYEGRDUCXMZNEZXLQHAPKNJFGHIZFZADEKWEWGPPSPLUQUAZAAYOOZXUNWIZDI");

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
    msg.setTimeStamp(0.30984664971938725);
    msg.setSource(14703U);
    msg.setSourceEntity(93U);
    msg.setDestination(673U);
    msg.setDestinationEntity(37U);
    msg.type = 218U;
    msg.error.assign("PBCKMXROEYCCWWBPRNJLYMSGOGIUIKKFHMXLRADWFLOZFIZYYVTENEFWADEJDBGUCEYKZVZ");

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
    msg.setTimeStamp(0.816568249291283);
    msg.setSource(35851U);
    msg.setSourceEntity(223U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(2U);
    msg.type = 99U;
    msg.error.assign("HCOQEFJVQWGETKFDFBNZYAHJFEDXUBUDJCMEYONGJZZPDHSGSPAOPLFDTXYRWIBKGQZVKVOXCWBREWSNAPYJSJTSIXNNRGRFCHHJCWLMYQDMAYKWPIRTIJQBAMTZBPJVFPHSPTVERUNIULTORUETEXTKQGY");

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
    msg.setTimeStamp(0.5918170565677492);
    msg.setSource(44074U);
    msg.setSourceEntity(162U);
    msg.setDestination(30780U);
    msg.setDestinationEntity(91U);
    msg.seq = 48451U;
    msg.sys_dst.assign("QXEJDRBIRVCSWQAYCYDONDKIXMVHUMSNYHLAQXJCPKMVGQBS");
    msg.flags = 215U;
    const char tmp_msg_0[] = {98, 95, 64, 71, -122, -100, 24, 89, -7, -9, 77, 30, 75, 125, 102, -94, -35, 53, 92, -85, -115, -87, 78, 72, 68, 76, -18, 106, -22, 55, 101, -62, 99, -54, 93, 78, -12, -75};
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
    msg.setTimeStamp(0.7122061580618498);
    msg.setSource(11277U);
    msg.setSourceEntity(74U);
    msg.setDestination(50099U);
    msg.setDestinationEntity(35U);
    msg.seq = 38983U;
    msg.sys_dst.assign("KMPARPFTXJWZWQXLZQVUXLURATNFITGQNKGXWNTJJRYHJCXBBDZDPCKOTGYRBERTUUSICJKPWYRNJXYYFOZMIVIDUOSLERGAZNQUQOKBOMDYIABXSGWQHHQHYPAGCBQDIFMRZJBAEVPKWFEKLAGQCYWTMMCZBIHXVWFLIDOKFGKHYLLSMDUZWVASOOSVNR");
    msg.flags = 61U;
    const char tmp_msg_0[] = {-63, -32, 26, -23, 44, -107, 92, 121, -15, -126, -56, -103, 44, -8, -41, 119, -89, -73, -10, 32, -121, 105, 111, 118, -67, 87, -18, -42, -99, 81, 73, 124, -123, -116, -42, 114, -91, -84, -114, 8, -4, -56, 73, -96, -120, -36, 5, -23, -70, 45, 17, -15, -118, 83, -66, 26, -60, -40, -91, 84, 113, -79, -122, 31, 103, 73, -81, -48, -97, -102, 107, -19, 45, 54, -29, -62, -125, -31, -48, -79, 59, 61, 86, 15, 4, -21, 119, -31, 122, -107, 28, -93, 1, -31, 0, 63, 113, 87, 45, 56, 85, 12, 123, 35, 45, -34, 36, 27, -114, 69, 60, -119, 110, -93, -127, -11, 3, -89, 41, -31, 100, -8, -83, 11, -37, 62, 113, -5, -108, -72, 57, -61, -113, -103, 65, -85, 70};
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
    msg.setTimeStamp(0.8058061633651287);
    msg.setSource(58182U);
    msg.setSourceEntity(245U);
    msg.setDestination(59863U);
    msg.setDestinationEntity(109U);
    msg.seq = 2223U;
    msg.sys_dst.assign("KFXRUITITZIKWHHYFDSBURWNHKNWTSJSCIAHKVQQETALYSUZAGPYXMVJMJIOBVUQGJRJPFDPLDOOMCJEDYUGCUMVKDVGAQNYGGCVJKCPXDTMZKCZYRMRRMXVYDKGLFKDBLSHYHQXEFZJQOCIXNCAMSTWDCJTIRBQEWEI");
    msg.flags = 205U;
    const char tmp_msg_0[] = {92, 57, 63, 91, -84, -3, -118, 50, 2, -32, 44, 56, -57, -117, 75, 47, 125, -45, -18, -20, -80, 25, 60, -118, -101, 21, -65, 108, -108, 102, -54, -79, -32, 99, -6, -24, -70, -20, -105, 49, -47, -104, -113, 30, 10, -30, -128, -54, -94, -87, 46, -61, 66, 7, 95, 57, 126, 10, 91, 0, -95, 54, -5, -77, 125, -29, -111, 111, -3, -27, 96, 118, -107, -114, -69, 121, -122, -100, 49, 102, 5, -77, 20, 113, -78, 4, 114, -37, 87, -97, 121, 101, 97, 87, -5, -115, -54, -89, -128, 18, 120, 32, 112, 69, -51, 64, 120, -101, 10, 0, 125, -35, 27, -96, -44, 73, 34, -73, 120, 90, -43, 124, -80, 82, -22, 34, -5, 52, 38, -65, -115, -56, 59, 82, -82, 37, -107, -45, 81, -71, -15, 62, -68, 122, 82, 108, 71, 115, 43, 95, -28, 117, 105, -79, 1, -2, -42, -95, 16, -30, 80, -8, 78, 82, -77, -25, -21, 17, 123, 91, 29, -27, -125, 33, -98, -34, -12, 29, -31, 97, 38, 62, -95, -128, 64, -31, 122, 118, 103, 80, -12, 12, -60, -53, -77, -21, 73, -40, -107, 101, 17, 76, -7, 123, 64, 112, -62, -53, -73, -89, 67, 122, 56, -77, 52, -6, -34, 108, 24, 66, -26, -25, -126, 73, 75, -3, 86, 124, -57, -24, 125, 11, 67, -123, 10, -84, -1, -112, 5, 9, -85, 23, 28, -103, -88, -20};
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
    msg.setTimeStamp(0.25997550626383215);
    msg.setSource(41127U);
    msg.setSourceEntity(234U);
    msg.setDestination(15404U);
    msg.setDestinationEntity(124U);
    msg.sys_src.assign("YKOWMLSKFETRNWDPMWVNOWGVBPCUFBTBBUQLORIDPZULNNUJEXWNTURMNKXSZFBFSFIOPJAUBGKCHZJSWUTLNJZBCTGLSBOAVZYZMFOLXHKOLDIQMCPPEQUYEJQRMVXCPYKQCTIRVGHZHKSXREFHRJXHYXAFHMPNZDWAPUETKYDVIUYYMRZWMFPTKEYKSWRQJGLTIADQOGLVFXHMATOEGACWDIQD");
    msg.sys_dst.assign("PTFLMDTSFBKTSWHKAPSCPJYVOSRCQYZCUGWLINEQPZSJHBMTQHDJMHY");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-50, -42, -17, -7, 26, -32, -2, 109, 124, -95, -122, -109, -47, 55, 3, 20, -32, -103, -68, -77, 87, -4, 12, -103, 15, -43, -100, 109, -84, -62, 43, 83, -86, -15, -48, 0, -57, -40, 87, 73, -11, 4, -68, 62, -26, -76, -44, -5, 36, -102, 107, -128, 98, -52, 73, -64, -72, 19, 85, 32, -15, 21, -37, -27, 64, -58, -53, -65, 16, 79, -55, -27, 62, 126, 124, 7, -20, -68, 73, 84, 48, -53, -25, 103, -29, 80, 51, -51, -63, -41, -102, 109, 63, -118, 8, -23, 38, 123, 65, -39, -90, -81, -95, -59, 105, -95, -85, 52, -97, -96, -77, 47, 26, -3, -10, -72, -56, -120, 22, -98, 18, -80, 54, 101, 45, -124, 104, 121, 88, 24, -113, -64, -77, -66, 60, -117, 77, 87, 122, -101, -15, 70, -82, 25, -85, 118, -106, 93, 64, 117, -92, 40, 84, -32, 70, 126, -75, -24, -21, -51, -82, 97, 8, 34, -12, 82, -66, 35, -68, -42, -46, -117, -109, 36, 64, -65, 29, 82, 97, 27, -124, -22, 2, 62, 68, 48, 64, -114, -124, 112, 5, -102, 60, 100, -88, -47, 117, -111, 88};
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
    msg.setTimeStamp(0.7352964435944774);
    msg.setSource(2615U);
    msg.setSourceEntity(146U);
    msg.setDestination(31925U);
    msg.setDestinationEntity(49U);
    msg.sys_src.assign("TEDVFVBYINDBCQABDLQRJCYEUTEVNRVJLYHO");
    msg.sys_dst.assign("SIJGXUYMRRQYBIHAVLJYZUGHXFVDBKNOPOPJDQCCKXOBPYZBASKQPNJMFEMVWMSUSFFMOONEAGJEUREQYVPTRTEMGKDPAOSLJVAKSVFZJDHFQFLGGKKNLQCAWWCULDIRZTQCZXZHP");
    msg.flags = 247U;
    const char tmp_msg_0[] = {32, -10, 63, 66, -21, -60, -96, -4, -84, 23, 95, 83, 115, -118, 0, -42, 6, 81, -122, -82, -8, 104, 26, 77, 90, 2, -90, -125, -57, 88, 56, 101, -24, 82, -93, 113, -114, -88, -111, -44, 108, 111, -26, 124, -11, -86, -30, 41, 109, -8, -81, 1, -127, -61, -119, -22, 109, -10, 18, 108, 42, -104, 46, -79, 23, 103, -78, 121, 45, -74, 33, -33, -73, -6, 103, -57, 90, 25, -96, 95, -33, 61, 45, 25, -4, 81, 73, -45, -92, 48, -9, 62, -30, -114, 31, -48, 87, -114, -87, -6, -33, -93, 113, 40, -39, 121, -3, -30, 97, 60, -2, -23, 106, 73, -1, 65, 31, -79, -127, 75, 36, -48, 67, -31, 98, 46, 109, 36, -127, 21, 119, -42, 58, 46, 124, 13, 95, -30, 11, 31, -24, -88, 72, 113, -6, 12, -51, -10, -90, -27, -102, 120, -39, -19, -33, 25, 33, -44, 48, -47, -14, -14, -68, -13, -113, 43, 115, 109, -64, -41, -104, 122, 13, 17, 10, 115, -43};
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
    msg.setTimeStamp(0.34360080822462624);
    msg.setSource(9202U);
    msg.setSourceEntity(79U);
    msg.setDestination(42841U);
    msg.setDestinationEntity(222U);
    msg.sys_src.assign("XJESEIGHJGEWMOPZWDXDLIWAVVBUYDDBEACXHGKYINPKWSGMGVNWSJKPLFLGQRZHETULPWNNQKNATNUVYTMZHCX");
    msg.sys_dst.assign("AQXJTVKUHFOCJKTNAENSLVOYPXGAYOWQEEYEGAZOGCMCZUKVZKFKPTRBEAQBWQMFYUCUYPTQFCNWMHEIHBGHMMIVHOYCTNMSBDHTNZOSAZLPXSHCJTDJWBNJYZRVRZOFJEHLGTVWGVHPWQJEXRTZBRACLESMKRWLFN");
    msg.flags = 244U;
    const char tmp_msg_0[] = {-72, 87, 126, -87, 65, 2, -56, -35, 3, -48, -79, 125, 126, 58, 94, -108, 72, 42, -88, 104, 42, -8, 45, 88, -63, 74, -34, 5, -11, 23, 114, 29, -6, -103, -100, 116, 115, 125, 98, 47, -66, 32, -71, -85, 50, 85, 48, -105, 126, 63, -35, 37, -75, 81, 87, -72, 46, 60, -82, 40, 3, -52, 1, 37, -86, 20, 64, 117, -88, -81, 38, -44, 57, 115, 25, 74, 41, -112, 61, 73, 28, -66, -11, 15, -21, 80, -92, 17, -103, -93, 2, -83, 62, -30, 69, 38, 64, -116, 31, -105, 83, -90, -68, 7, -99, -31, 13, -123, 67, 117, 69, -112, 60, 70, -101, -90, -19, 69, -47, 77, -48, -30, -113, 17, 103, 87, -51, 16, 5, 15, -114, -128, -92, -107, 80, 13, -80, 80, -93, -125, -8, -17, -3, -80, 110, -45, 65, 104, 91, -52, -77, -22, -128, -63, -38, -15, -76, -73, -59, -126, -38, -25};
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
    msg.setTimeStamp(0.19357407768967194);
    msg.setSource(64226U);
    msg.setSourceEntity(216U);
    msg.setDestination(40798U);
    msg.setDestinationEntity(212U);
    msg.seq = 46736U;
    msg.value = 36U;
    msg.error.assign("WXMKKBPQXMCHVKNHPJRIPOZVQPJLMKSPLGYPCRN");

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
    msg.setTimeStamp(0.7080949150528618);
    msg.setSource(35480U);
    msg.setSourceEntity(112U);
    msg.setDestination(19819U);
    msg.setDestinationEntity(188U);
    msg.seq = 59929U;
    msg.value = 159U;
    msg.error.assign("KKMHYLTPQEVOEPTUGBVGQHTAJRAKMCGOCVRQYBNMKFPCMGRWUJAPYJNTIETGISBQDTQUVOJTTFURZZXPPUXXCECGINWVQNIUMFJEXRWKWOAQGAVVEELSFSFNWQFCMYHLLLODZBDSHHJIYYWHOEUCZCJ");

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
    msg.setTimeStamp(0.369201327810064);
    msg.setSource(55169U);
    msg.setSourceEntity(8U);
    msg.setDestination(63367U);
    msg.setDestinationEntity(82U);
    msg.seq = 51797U;
    msg.value = 132U;
    msg.error.assign("LCMZDAPCTVOKWISBSOMENZUKOJALYWIQRRQHUWMUOJCQWOTHNOKCPCNVZAFHOJHCEWH");

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
    msg.setTimeStamp(0.6791675037068119);
    msg.setSource(44087U);
    msg.setSourceEntity(99U);
    msg.setDestination(20535U);
    msg.setDestinationEntity(68U);
    msg.seq = 31698U;
    msg.sys.assign("JGWDCSSXOBJCRQDKNSGAUVFJWHZIKHLADKXVQTYCSJRJRXNESBHWRXPTPEHBYMPGBITWRBUIFKOCCLIOISLFCJLTPVMUJNEQYETQGSBQWCLSKUGEOYLOFOAGCFNDVDMXVKNLZSH");
    msg.value = 0.0015302532036975958;

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
    msg.setTimeStamp(0.7697264198910362);
    msg.setSource(43434U);
    msg.setSourceEntity(65U);
    msg.setDestination(19876U);
    msg.setDestinationEntity(196U);
    msg.seq = 61545U;
    msg.sys.assign("TGXIYMENXQDUGNRYJKQWHPGXFTAFTBXEOMLLUTHIPPORWBKMYQEUOVUXWPIRGNZCRPRCDGHAOLFHTUCGJLSVSKIWGWKZXVKNLQDSEZWEFMWQNXZUSGFXKHDFMASPEDLJRTYHTUDKZRYWEWOBEAGZZBLIQKJKQTBJCJSIJFSHBCZXPVJLRJIVAUBADIEJAMUBPRFTBNUYMHCDQHLNDPVEMVWOSSYOFZZBLQACNORACPYMHMOSAINFQC");
    msg.value = 0.338055385752254;

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
    msg.setTimeStamp(0.6074712535355236);
    msg.setSource(632U);
    msg.setSourceEntity(93U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(188U);
    msg.seq = 30921U;
    msg.sys.assign("QLNAYOHNPKBABWGJCVNIIXTXFQJHLWXUFRBUJCSPGOQCFUQWAQHIXNQQNLXMPOSZLDYWZNBEZMADFBDAKZWEJKAHEEIERPPRIAMSGJIAWKMYZCWVLVTYTCCGGTMCNTINGACKVLTFSDBOKUKPYITXKGBHPVPHYSDRXHDAGFVFWXJSQDDEQLRMVPOFETGTUBVOJJCRROBJHCFVVZKWUMUHHLUNJZREME");
    msg.value = 0.5978422065924196;

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
    msg.setTimeStamp(0.36188612790360963);
    msg.setSource(62829U);
    msg.setSourceEntity(101U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(5U);
    msg.action = 8U;
    msg.longain = 0.3983025116368324;
    msg.latgain = 0.24405311454834266;
    msg.bondthick = 3434349970U;
    msg.leadgain = 0.278588667527256;
    msg.deconflgain = 0.8841330443110788;

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
    msg.setTimeStamp(0.31247831803590786);
    msg.setSource(8632U);
    msg.setSourceEntity(78U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(204U);
    msg.action = 123U;
    msg.longain = 0.9528638702214045;
    msg.latgain = 0.8835879411053587;
    msg.bondthick = 4085007924U;
    msg.leadgain = 0.04201745168035986;
    msg.deconflgain = 0.2378119861901309;

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
    msg.setTimeStamp(0.8455436738707176);
    msg.setSource(17517U);
    msg.setSourceEntity(124U);
    msg.setDestination(25081U);
    msg.setDestinationEntity(243U);
    msg.action = 20U;
    msg.longain = 0.22890054972944307;
    msg.latgain = 0.12316633071396521;
    msg.bondthick = 846527860U;
    msg.leadgain = 0.9735491989298689;
    msg.deconflgain = 0.33189610298768846;

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
    msg.setTimeStamp(0.019552223268379798);
    msg.setSource(39472U);
    msg.setSourceEntity(11U);
    msg.setDestination(63507U);
    msg.setDestinationEntity(237U);
    msg.err_mean = 0.27795873840755914;
    msg.dist_min_abs = 0.21639227717200216;
    msg.dist_min_mean = 0.32979233141166797;

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
    msg.setTimeStamp(0.37627663703717207);
    msg.setSource(40435U);
    msg.setSourceEntity(165U);
    msg.setDestination(17356U);
    msg.setDestinationEntity(180U);
    msg.err_mean = 0.5198901933418252;
    msg.dist_min_abs = 0.2850069400873204;
    msg.dist_min_mean = 0.9978594812217738;

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
    msg.setTimeStamp(0.21307645242098427);
    msg.setSource(62965U);
    msg.setSourceEntity(174U);
    msg.setDestination(49103U);
    msg.setDestinationEntity(73U);
    msg.err_mean = 0.9557981995878297;
    msg.dist_min_abs = 0.6612299566551474;
    msg.dist_min_mean = 0.7047438662852352;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.2767224447732972);
    msg.setSource(62195U);
    msg.setSourceEntity(1U);
    msg.setDestination(33042U);
    msg.setDestinationEntity(144U);
    msg.uid = 26U;
    msg.frag_number = 242U;
    msg.num_frags = 100U;
    const char tmp_msg_0[] = {-30, -83, -122, 104, -20, 39, -80, 114, -125, -122, 110, 29, -40, 3, -51, 120, 31, -113, -57, -55, 78, -13, 8, -61, -13, -65, 102, -120, 7, 104, 13, 91, -67, -85, -40, 88, 21, -125, -85, 117, -49, -5, -51, -76, 103, 16, -60, -55, 73, 59, -82, -51, -76, -8, -95, 15, 44, -95, -12, 108, -15, -3, 67, -122, -124, 53, 59, -67, 109, -111, 36, 42, 107, 54, 2, -66, -12, -78, 119, 51, -128, -47, -53, -128, 86, -41, 125, 32, -81, 77, -18, -14, 4, 69, 106, -6, 21, -51, 23, 47, 66, 20, 11, 14, -40, 9, -64, -19, 4, -125, -72, -70, -21, -8, -74, -78, -19, -101, -71, -92, 33, -103, 74, -17, -68, -40, -12, 4, 29, 107, -124, 21, 48, 13, -84, -97, 23, 102, -54, -63, -70, 8, -89, 83, -73, -53, -6, -122, -112, -115, -94, -58, 46, 7, -105, 63, 33, -52, 19, -117, 123, -25, 91, -15, -120, -14, -25, -102, 89, -5, -120, 82, 52, -48, 41, 58, 50, 15, -24, 87, -54, 40, -53, -17, -103, 74, -103, -83, -81, 121, 10, 50, -59, 66, -110, -54, 86, 6, -112, 2, -126, -18, 31, 22, -107, -70};
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
    msg.setTimeStamp(0.24070930527504186);
    msg.setSource(18659U);
    msg.setSourceEntity(158U);
    msg.setDestination(7847U);
    msg.setDestinationEntity(56U);
    msg.uid = 84U;
    msg.frag_number = 219U;
    msg.num_frags = 114U;
    const char tmp_msg_0[] = {-58, 0, 114, 92, -87, -110, -114, 45, -3, 9, -13, -89, -118, 74, -12, -24, -98, 64, -2, 53, -114, -102, -91, -50, 69, -30, -128, 90, -7, -93, 51, 16, 95, -12, 112, -86, 12, 113, 58};
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
    msg.setTimeStamp(0.8847594753336638);
    msg.setSource(63164U);
    msg.setSourceEntity(176U);
    msg.setDestination(9926U);
    msg.setDestinationEntity(242U);
    msg.uid = 4U;
    msg.frag_number = 227U;
    msg.num_frags = 177U;
    const char tmp_msg_0[] = {83, 89, -65, -47, -124, -12, 77, -115, 97, -97, 35, 115};
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
    msg.setTimeStamp(0.6592115989552217);
    msg.setSource(38571U);
    msg.setSourceEntity(14U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(73U);
    msg.content_type.assign("GTEJVZDHBWIRPBDADCGDOCJHRROKSKTPHAKOCUCVESRBTKUOXOZBYHHFBZENXZGUMVEEFXVHAXGQAVEDJWRJEHXGBZRVYEZXRPYQBAPVXCJYLHUOJPSZLCWIAQJDWSLAGUVCMTVLOMDXIKFNQSNKMULBONRJYTWTLSJOKMFZBIFFYSXTCKPDUU");
    const char tmp_msg_0[] = {-11, 74, -67, 98, -111, 13, -51, 59, -85, -2, -108, 123, 32, -13, 7, 92, 16, -109, -122, -57, -27, -27, -55, 83, -74, 39, 52, 2, -5, -30, -45, 18, -18, 61, -50, 124, 33, 14, 91, 17, 91, -63, -97, 68, 35, 21, 1, -85, -58, -31, -76, -77, 67, 9, -71, 39, 47, 16, 55, -42, 43, -118, 25, -106, -85, 21, 9, 115, 58, -43, -118, -34, 11, 1, 65, -21, 117, 18, -6, 104, 5, -91, 126, 56, 120, -33, 103, -40, -5, 81, 69, 46, -48, -34, 102, -52, -28, -108, 83, 110, 17, 16, 86, -119, -113, -21, -99, 26, 94, -126, 33, 71, -111, -33, -125, 76, -60, -38, 79, 18, 58, 121, -40, 38, -104, 109, 81, -19, 105, 83, -51, 36, -81, 114, -6, -127, 84, 99, -68, 92, 105, -115, -94, -50, -93, -24, 57, -94, 79, 112, 10, -65, -48, -49, -10, -38, -30, -102, 116, 77, 69, 117, -8, -30, 5, -63, 69, 61, 119, 66, 78, -9, 36, -56, -33, -34, -80, -125, -73, -14, -107, -2, -20, 15, -57, -20, -97, -53, -100, -108, 79, -26, 106, -87, 37, -51, 97, 66, -78, -6, -113, -86, 100, 16, -101, -42, 35, 5, 101, -124, -20, -8, 6, -67, 30, 66, -87, 47, -44, -87, -81, 121, -69, -100, 110, 122, -108, -115, 65, 60, -127, 109, -47, -56, 113, 14, 57, -31, -45, -65, 64, -34};
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
    msg.setTimeStamp(0.9696301366583817);
    msg.setSource(11442U);
    msg.setSourceEntity(77U);
    msg.setDestination(32659U);
    msg.setDestinationEntity(62U);
    msg.content_type.assign("YPURGJZHZGCXSDUNWTYDSTAMNUUMEQZNFIIPW");
    const char tmp_msg_0[] = {-89, 120, 13, 8, -99, 45, -88, -6, 26, -64, 124, -127, 5, 115, 79, -58, 18, 32, -30, -10, 80, 45, 24, -80, 44, -48, 96, 19, -26, 99, -32, 13, 107, 99, -30, 35, 121, -87, 121, -23, 82, 109, -64, -70, 98, 46, -103, -41, 81, -24, -75, -71, -100, -14, 41, 95, -68, -77, -66, -31, -98, -112, -105, -45, -88, -35, -47, -72, -128, -65, -87, -33, -39, 33, -1, 32, -126, -33, -113, -105, 112, 66, 40, 43, -119, -69, -112, -107, 105, -87, 49, 50, 48, 99, 91, 60, 91, -22, 37, -96, -95, 45, -59, 117, -77, -118, -48, -3, 3, 105, 119, -50, -82, -86, 63, 98, 51, -96, -17, -6, -122, -106, 24, 117, -54, -16, 58, -126, -75, -79, 50, -43, 21, -12, -90, 83, 82, -68};
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
    msg.setTimeStamp(0.023303878857987792);
    msg.setSource(44601U);
    msg.setSourceEntity(89U);
    msg.setDestination(61080U);
    msg.setDestinationEntity(96U);
    msg.content_type.assign("UMGPQBGPPTDYJORHYNVSLIETTQOQBZRMDIQJTMLSFHFKSQXMCQPIVNFCKHYLCBBSHKABHMZOPJJAKWLDTXZAKJYCOFZFMCOZREEIKWKBNEOXZUREWDYXTGZLUZTGHQRKJFNJBWDSSGAYQHBMQIXFIIWYBTVRYDLVUQAAHVAMJDGSGXHCSWAXCU");
    const char tmp_msg_0[] = {65, 3, -48, 25, -64, -35, -19, 2, 103, -22, 5, -43, -92, -48, -100, 83, -114, -1, 17, 81, -6};
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
    msg.setTimeStamp(0.028550046177645227);
    msg.setSource(35576U);
    msg.setSourceEntity(107U);
    msg.setDestination(22168U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.9767901976202802);
    msg.setSource(3062U);
    msg.setSourceEntity(2U);
    msg.setDestination(17628U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.7312206342918054);
    msg.setSource(21636U);
    msg.setSourceEntity(51U);
    msg.setDestination(63384U);
    msg.setDestinationEntity(156U);

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

  return test.getReturnValue();
}
