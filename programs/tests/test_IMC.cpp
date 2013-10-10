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
    msg.setTimeStamp(0.874613689974);
    msg.setSource(13796U);
    msg.setSourceEntity(24U);
    msg.setDestination(5854U);
    msg.setDestinationEntity(153U);
    msg.state = 159U;
    msg.flags = 78U;
    msg.description.assign("PDXWIEGJLCLXQQEBGDDQTLAHWENPQV");

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
    msg.setTimeStamp(0.478804755685);
    msg.setSource(41311U);
    msg.setSourceEntity(27U);
    msg.setDestination(56153U);
    msg.setDestinationEntity(127U);
    msg.state = 40U;
    msg.flags = 97U;
    msg.description.assign("YFANHEVWFGWNSGBSMCPIOZMPRNFJWRWZYAIUUXFARJGPHDTQRAHBSWMYZIIADHOTVOPXUEEBBZKNXCDKYWHQBKXARCCIXOPTOOL");

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
    msg.setTimeStamp(0.636218943012);
    msg.setSource(33886U);
    msg.setSourceEntity(223U);
    msg.setDestination(32623U);
    msg.setDestinationEntity(97U);
    msg.state = 102U;
    msg.flags = 14U;
    msg.description.assign("XQEDQMXGNFKMQBCVWKOEJLLHLUBNOQVKBTXQPYIBNPYFTDUVNYNHJNKZHYVRIWCHJOUIHFQMJRWJBMDKLURIJDCAZKMSPCEMLTAFTMCLFBSZGREOXBDAZTCILFWCAPGEXAOISXHPKVOWXQOCETZAXJDJYUMKHRGIJWTRUSHSPVZFXUDPNLTSFMFIDLEOYSBZTQWGNIWYKSEYWYVAGPNLCFVWCRROSRZPUJUU");

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
    msg.setTimeStamp(0.764939519704);
    msg.setSource(17625U);
    msg.setSourceEntity(128U);
    msg.setDestination(11522U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.894379625902);
    msg.setSource(16847U);
    msg.setSourceEntity(65U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.446087050941);
    msg.setSource(58236U);
    msg.setSourceEntity(78U);
    msg.setDestination(13762U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.974853076765);
    msg.setSource(59107U);
    msg.setSourceEntity(197U);
    msg.setDestination(36549U);
    msg.setDestinationEntity(107U);
    msg.id = 178U;
    msg.label.assign("LOUXARFVZGSOSZZDVUWAIOYDCHPXEMRVDQXUZEVEFQUJQKKAIHWLPQZTUFXGLUVFOOAGYCBPCBAHJGSCLTANVYJAOZLEEORMWSSNSQYTTWGFFBDHBDLSQHYTCLINHLAVFRJEMPOKKMAJLMHTGIBIGIFHJRJSVXDQXZEUBZWTRMWINYKNXXPUCXUTKRCCZYKQWGNTYHBQKFKBNIRESVPMYMDWY");
    msg.component.assign("VLTFZUHHBYDDZMFRNGGASEIKDLFEJWXKGLTNKADMQPBXWCNIRCVELGPOYPRFUPRZYAHVGCIRQAEVJBTIMIVJZAHSLILMWTSWPJLDZNBYAYKCKQTWEAQOMKOW");
    msg.act_time = 8222U;
    msg.deact_time = 46959U;

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
    msg.setTimeStamp(0.876961061677);
    msg.setSource(1967U);
    msg.setSourceEntity(68U);
    msg.setDestination(46548U);
    msg.setDestinationEntity(120U);
    msg.id = 17U;
    msg.label.assign("DRKNWOQQZGIRMFGUAUKFCFXWJPOODGMVJXYRGITHCDFPANCCJTAWGATKIONUOHPEZBDVIDALABSXNEWKJCUJCXEBVZUZSEZNWHTOZBFSQWCRMVWYTMXIPNEIKLRUSNMMLOLQVHYJWMSTRBJMYQFRPD");
    msg.component.assign("QMRWSWLRBCTVXNRAGVGFSXOYDMUGHXPFQADZQNKEMDZJEJAUUYKRGQWDCSLUCXOEHMGMXVVKFPYNFHDVGBTWYLXBBTCGSBMFLXYOOAUCTEZISKNVDJBKEFRATEJOQGIAXSRCWLWPHJYZJYNKIQYPNIZHILFJZOZHFJAIYZPWVAXWMKQQJYENOWGTUSOVE");
    msg.act_time = 7754U;
    msg.deact_time = 11949U;

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
    msg.setTimeStamp(0.886531998657);
    msg.setSource(14534U);
    msg.setSourceEntity(139U);
    msg.setDestination(13317U);
    msg.setDestinationEntity(67U);
    msg.id = 79U;
    msg.label.assign("AEJVXZFKLTDPWHFATCPCLEWNCSMBYEGOQIGHDHUMVLJUFBXNBZNMMIFYFPRCXJGXYGTWDCJYGJDRHSVGDCCQSUHQXTBLQFKODHKQXGVMJJOAZOPTBSRNXZGBXUMWDNEHZYRMOSHYLRANWVVITAXKFIKPQM");
    msg.component.assign("KXBMOBHRUWVFRNEGNUCAFUYVWMTIYVROZEWGWLXQHKVCRQEXQBDKGACNUTQJXJRDWOB");
    msg.act_time = 10322U;
    msg.deact_time = 57498U;

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
    msg.setTimeStamp(0.131971840904);
    msg.setSource(57600U);
    msg.setSourceEntity(89U);
    msg.setDestination(37948U);
    msg.setDestinationEntity(113U);
    msg.id = 2U;

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
    msg.setTimeStamp(0.438248917201);
    msg.setSource(64539U);
    msg.setSourceEntity(103U);
    msg.setDestination(18480U);
    msg.setDestinationEntity(208U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.254708332974);
    msg.setSource(48640U);
    msg.setSourceEntity(28U);
    msg.setDestination(43516U);
    msg.setDestinationEntity(87U);
    msg.id = 210U;

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
    msg.setTimeStamp(0.462756519115);
    msg.setSource(57533U);
    msg.setSourceEntity(224U);
    msg.setDestination(20392U);
    msg.setDestinationEntity(158U);
    msg.op = 29U;
    msg.list.assign("ZMMJDUVGDPQXVSJHSBENYFHINEHENTGFZEPYWQTHPYACJQKAPDNUQVBCXLSUPIWSTUJRDVRONWKAZJXEFUJTWCLYROMAIMCGSLWYIYRXXQX");

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
    msg.setTimeStamp(0.706475669257);
    msg.setSource(59846U);
    msg.setSourceEntity(72U);
    msg.setDestination(13651U);
    msg.setDestinationEntity(182U);
    msg.op = 213U;
    msg.list.assign("RPFUGGDCEGIGKQPGSVSKWBKTTWNVPCZVZXANAPFHFLOMDALYIRBZPVUDYMISXYOWVPNAQLLURDJEQJJYHZRKWOBBLIBTXYMYAFTBXQHDFXROFDOJUBETXCMELFIKYXZHNAGXZ");

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
    msg.setTimeStamp(0.0692303567823);
    msg.setSource(52765U);
    msg.setSourceEntity(17U);
    msg.setDestination(5047U);
    msg.setDestinationEntity(57U);
    msg.op = 104U;
    msg.list.assign("CWLGXTONZILIQQFVVARHSMIFMIKIWRALKPKMJFHKYOYAPWRUYDXMDMAHUAKZBQWQECCMHQCVVFIXPHLQSXEEWEWTRJUSBTDC");

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
    msg.setTimeStamp(0.0669328002204);
    msg.setSource(56826U);
    msg.setSourceEntity(199U);
    msg.setDestination(50220U);
    msg.setDestinationEntity(186U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.697925370378);
    msg.setSource(36631U);
    msg.setSourceEntity(213U);
    msg.setDestination(44672U);
    msg.setDestinationEntity(111U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.170099779086);
    msg.setSource(30119U);
    msg.setSourceEntity(39U);
    msg.setDestination(8153U);
    msg.setDestinationEntity(200U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.704096155084);
    msg.setSource(36829U);
    msg.setSourceEntity(50U);
    msg.setDestination(289U);
    msg.setDestinationEntity(17U);
    msg.value = 156U;

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
    msg.setTimeStamp(0.685078394278);
    msg.setSource(41322U);
    msg.setSourceEntity(69U);
    msg.setDestination(63386U);
    msg.setDestinationEntity(222U);
    msg.value = 96U;

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
    msg.setTimeStamp(0.427240218977);
    msg.setSource(42929U);
    msg.setSourceEntity(96U);
    msg.setDestination(53237U);
    msg.setDestinationEntity(207U);
    msg.value = 221U;

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
    msg.setTimeStamp(0.767981150307);
    msg.setSource(5635U);
    msg.setSourceEntity(127U);
    msg.setDestination(5415U);
    msg.setDestinationEntity(110U);
    msg.consumer.assign("WEUCKZXMKCHSWUMTAVORACSPDMHDUDZLRKQNQEFBCVABNNWLOCLUMKRHADBVRCSZUIOLHWJONIOIGYKG");
    msg.message_id = 20091U;

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
    msg.setTimeStamp(0.334142736757);
    msg.setSource(11480U);
    msg.setSourceEntity(50U);
    msg.setDestination(57527U);
    msg.setDestinationEntity(44U);
    msg.consumer.assign("UFYITUQWSOXSDUIHOEFHZWCMRGYKKRKRYXISGAOYWBVFDLWJMRFCIIBGHMLDYAJ");
    msg.message_id = 25020U;

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
    msg.setTimeStamp(0.215215180637);
    msg.setSource(9686U);
    msg.setSourceEntity(5U);
    msg.setDestination(5223U);
    msg.setDestinationEntity(238U);
    msg.consumer.assign("CPOVGGEHQQQSCNYSGTOSXRNQVRZOEQLIKSKKKFAAIPHMLVTXYZWMNFRUBICZDXUUZRLOJJWHCIBAIAKRITBLTPJBDIHYEQEWKUMTBIMCFALLCHJPQALGHDVNMYQVCUONNYCFEQQGLUCSSXRPY");
    msg.message_id = 42596U;

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
    msg.setTimeStamp(0.339280424773);
    msg.setSource(23391U);
    msg.setSourceEntity(203U);
    msg.setDestination(17711U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.401743609055);
    msg.setSource(45755U);
    msg.setSourceEntity(77U);
    msg.setDestination(51448U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.889113990789);
    msg.setSource(24407U);
    msg.setSourceEntity(194U);
    msg.setDestination(23785U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.102012610225);
    msg.setSource(30265U);
    msg.setSourceEntity(160U);
    msg.setDestination(13040U);
    msg.setDestinationEntity(71U);
    msg.section.assign("QKGJKSCISOPGURCOMYXJBXTXZIWYFULZTZORQIIYCSHXWLBTTOHAENDWFNUNIDADFCEMHLYPEZBMKHJEPUPPDGOVGVLGHUPFVAIBRIZSFVJPUYKWDBYODEMNWQRZMFXIAKHHCENIDOGFTGXDHBMDWXQRNWSJQEBPJMFHZCZLKASFDKZSVKWPRRXRKMEHNFVTTJLYTUNNBCUAC");
    msg.param.assign("YRDBFPBCTDGUAFHHJLKTDNURFEVEDWZDJCZEREHIJMLYSUXNPVNJUJJPXOLYOXKMVCBSZATIRJPLQNYKJGRBVOCUXVTEZYOZPOKRISAMMOVWUOIADKWMUAHSPBDWWFBTHUMTVGZPSSFGGNOKQFLTFVJIDQIKLAGAQXCEU");
    msg.value.assign("EAUNHJRMEMMEXBEZNVKLULFONFIGRKAFNIRWJXIYGGYUSYZQMSMTJXDGHRDKXXHBJH");

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
    msg.setTimeStamp(0.518571612168);
    msg.setSource(56885U);
    msg.setSourceEntity(173U);
    msg.setDestination(27835U);
    msg.setDestinationEntity(43U);
    msg.section.assign("GXQFIWFSXAZXXTJFEKXGRIMLKXNEHVZKPDDEMOZAVNQQTHNEPOWCYYMDNRQHZROSQHX");
    msg.param.assign("ZNKMUIOSVRSPRTWVJCYBXZSXMAPCAAIPLRWYPVODVEZUKGJEBLKBHTIQFDQGBZJLBCAEWCGBCXZZFOLDHYUWEOCVUJTKWLDFFYEXEZVSNUOKSIEHVLDRFMZBA");
    msg.value.assign("BRAFDSCAKQRSZBOMHTXSPODCUCYVLJGIPTWKVQPDRTUEFN");

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
    msg.setTimeStamp(0.227578689939);
    msg.setSource(42187U);
    msg.setSourceEntity(228U);
    msg.setDestination(9235U);
    msg.setDestinationEntity(249U);
    msg.section.assign("QGIRIAVFDLGDKSTIODRNIXAKJUUVVOXQGXKAAMMMCXPENHBOVGYEOWYXSMRZUFYCBVRXVFQQYFWLSIKZFJKLHRSPCZJPZFKUDPHZSPCBEPIKIUZOQWEJQQNBRHNMNTWALPWHUKAORGNJWRTFPJMAIYNNTWDXVLCMHXYZXEGJYIATCWENDTVBQETKFBRWYZULPYBHLBOTQTDUFEUHUAKCCENOGRJXJCVHSOIOFSZDBPMM");
    msg.param.assign("OADSEUELHYGYPCRYFZVAEODAKEFHOTYTUIRRJEHIBUJYZPPSWJZCVRIITVKG");
    msg.value.assign("PEMUGJGJDFMXLAEYFAXYKVJSOGXNDEFNVFGHPENNQVWCFIBXLZAXJWPSPQKKGNIBCZYIKCSDSCUYHPSCDMLEBXUYWVARKIOHXUHRQPHLRTWARQLUHPQTZGQJADVODNTIEVMGBRSGCOWBNYJNXSQBIAUTZNTTARBPPPMHLUFFSIV");

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
    msg.setTimeStamp(0.298568885928);
    msg.setSource(376U);
    msg.setSourceEntity(173U);
    msg.setDestination(30094U);
    msg.setDestinationEntity(245U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.459795943898);
    msg.setSource(49935U);
    msg.setSourceEntity(123U);
    msg.setDestination(11479U);
    msg.setDestinationEntity(45U);
    msg.op = 231U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("RIIWUURCFELLXONOHHLQJL");
    tmp_msg_0.param.assign("AOSGMBKWOMIAWLRGMBOXHCEJLDPQMDNLQXTJHLDAFWIODROVAVYFFNWHZMWUBKVRVHDVUQFOSRIJENPUCGLMRBHPMYHCAOMFLGETNSPIZAJCXXEEYUSZRBDXNUTJIYBDZGKWIZTLCQGYLLIKIEXFTICJSPJFSYQAHKBQWPJFGEKYGPDBDECQPAGENZSAKSWBOMTTKWYC");
    tmp_msg_0.value.assign("UHOWMMIQIOGBAZJGSHQTFKEWHJJOUBKFZQBBMSSBLZBNVTQJ");
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
    msg.setTimeStamp(0.910679488675);
    msg.setSource(52581U);
    msg.setSourceEntity(242U);
    msg.setDestination(15474U);
    msg.setDestinationEntity(215U);
    msg.op = 250U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FHLKRRWPLOAETDYIADBJOILNDRCXLSQSWXXSPRHIGVNHZHFEPUBQWJSBWMEJ");
    tmp_msg_0.param.assign("LNMSSTSHQYBSOMWCZOBWBAZLP");
    tmp_msg_0.value.assign("UZSYBLXWRMZMJETNOCBJPXKBGDLTSGPAUYLAUUHQ");
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
    msg.setTimeStamp(0.967772360317);
    msg.setSource(49335U);
    msg.setSourceEntity(45U);
    msg.setDestination(57462U);
    msg.setDestinationEntity(179U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.121360855946);
    msg.setSource(40525U);
    msg.setSourceEntity(237U);
    msg.setDestination(44763U);
    msg.setDestinationEntity(241U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.29750696496);
    msg.setSource(38196U);
    msg.setSourceEntity(169U);
    msg.setDestination(48752U);
    msg.setDestinationEntity(133U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.201482459334);
    msg.setSource(21311U);
    msg.setSourceEntity(173U);
    msg.setDestination(11461U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 199U;
    msg.step_number = 212U;
    msg.step.assign("OQTEXOMYTOKXLUHVRJWEUONZDYSHWPAPXLQXEKCGSOJTFNMMUSWKYTTQDEVSFGABHFWLLQLWTYUUOUYIIHTCSPILVKVJSISMBGEWWVGSSVHRXAUXGRPAFFMYVMZLDUXZJHBCIOLERNWOEYJOZPTQDGAPHGBAYDDZARZPQYBJWVWNPCKNNK");
    msg.flags = 138U;

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
    msg.setTimeStamp(0.876953367725);
    msg.setSource(30471U);
    msg.setSourceEntity(121U);
    msg.setDestination(20981U);
    msg.setDestinationEntity(3U);
    msg.total_steps = 46U;
    msg.step_number = 79U;
    msg.step.assign("OVCKLXLDDKBOXFHBBABLZKQMPWXQYGBDPNMQJITJCDBTFQVKGZHMLHRVTCSSEXYZPYXRZMWPIEBFNXHMEYTOBIFRLCFUVJTRQEAGUXNHXJMNJPFVYLKLY");
    msg.flags = 251U;

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
    msg.setTimeStamp(0.70505492032);
    msg.setSource(41780U);
    msg.setSourceEntity(202U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(118U);
    msg.total_steps = 58U;
    msg.step_number = 29U;
    msg.step.assign("GSJWVMDDVKZMPOEJYCIKAIPHANLAZUSBSBX");
    msg.flags = 182U;

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
    msg.setTimeStamp(0.585341117025);
    msg.setSource(5732U);
    msg.setSourceEntity(96U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(211U);
    msg.state = 90U;
    msg.error.assign("IKIKTSNHOIDXJDWXLBRIAPCVMHGHXACNZFTUIYOOAUJVFDVRLAMDJVZJETWNDEOGUGQDYQPEUOTOCTFMWZWEFDSPIEKZWBKTRIPVGFADYJMYYUGMJCDFKUPLQGXBVSLTWWVNCSQRIWTASQEAMUTHVZJJJOHPGHIBSJ");

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
    msg.setTimeStamp(0.485242003894);
    msg.setSource(61957U);
    msg.setSourceEntity(181U);
    msg.setDestination(44894U);
    msg.setDestinationEntity(88U);
    msg.state = 4U;
    msg.error.assign("KLCAYSSZPMJD");

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
    msg.setTimeStamp(0.374520396557);
    msg.setSource(2475U);
    msg.setSourceEntity(78U);
    msg.setDestination(48010U);
    msg.setDestinationEntity(50U);
    msg.state = 216U;
    msg.error.assign("ZXNCOJKGEVYQQXDFJUDEZGQFMKCHMOFJODVZYPQBSWJDYIAAHRVSOVDOYABBWLPLCRSPUUAVCDGDXBYHWSZAIPBXLISQKXMAEMHQNFZLSTFXGPQRPCESXUCQNZGURQKVWCSXFSDNJDNTBFNRLQZCICBPIFGXAGGZHYZEOBLWRNETPKEWS");

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
    msg.setTimeStamp(0.272289906875);
    msg.setSource(1709U);
    msg.setSourceEntity(17U);
    msg.setDestination(43329U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.338551770415);
    msg.setSource(34173U);
    msg.setSourceEntity(211U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.799822736045);
    msg.setSource(739U);
    msg.setSourceEntity(74U);
    msg.setDestination(7252U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.0252451738809);
    msg.setSource(22726U);
    msg.setSourceEntity(59U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.121463880691;
    msg.lon = 0.0847899805098;
    msg.height = 0.447473849171;
    msg.x = 0.379622575378;
    msg.y = 0.0217892078617;
    msg.z = 0.341639378186;
    msg.phi = 0.902531891441;
    msg.theta = 0.841345897364;
    msg.psi = 0.0845924785581;
    msg.u = 0.236643768803;
    msg.v = 0.606712508495;
    msg.w = 0.54244953038;
    msg.p = 0.904801855633;
    msg.q = 0.198587721434;
    msg.r = 0.90758764803;
    msg.svx = 0.690154707799;
    msg.svy = 0.894944171606;
    msg.svz = 0.244240813086;

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
    msg.setTimeStamp(0.932962558115);
    msg.setSource(35331U);
    msg.setSourceEntity(244U);
    msg.setDestination(35228U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.229302295762;
    msg.lon = 0.97920429903;
    msg.height = 0.746648153885;
    msg.x = 0.789248394007;
    msg.y = 0.760935634029;
    msg.z = 0.930861290881;
    msg.phi = 0.0597999830703;
    msg.theta = 0.707332798004;
    msg.psi = 0.985298447902;
    msg.u = 0.278754591071;
    msg.v = 0.355827006432;
    msg.w = 0.798648206956;
    msg.p = 0.74314799205;
    msg.q = 0.125161792864;
    msg.r = 0.0670571339136;
    msg.svx = 0.533691782385;
    msg.svy = 0.27027037721;
    msg.svz = 0.115123554487;

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
    msg.setTimeStamp(0.919064482984);
    msg.setSource(36061U);
    msg.setSourceEntity(104U);
    msg.setDestination(43467U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.0149797213511;
    msg.lon = 0.0937662183818;
    msg.height = 0.243576425629;
    msg.x = 0.291481179165;
    msg.y = 0.993671130843;
    msg.z = 0.960246256181;
    msg.phi = 0.736739559961;
    msg.theta = 0.0223224854066;
    msg.psi = 0.701860256727;
    msg.u = 0.550607424934;
    msg.v = 0.339877316438;
    msg.w = 0.989917238238;
    msg.p = 0.150631679023;
    msg.q = 0.903789211363;
    msg.r = 0.823046974126;
    msg.svx = 0.928915603371;
    msg.svy = 0.0473575347103;
    msg.svz = 0.511888049071;

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
    msg.setTimeStamp(0.0497028192584);
    msg.setSource(48509U);
    msg.setSourceEntity(39U);
    msg.setDestination(25013U);
    msg.setDestinationEntity(232U);
    msg.op = 54U;
    msg.entities.assign("MINLSOYPLWUXNXVIBQREZATQJEUZOHHEHGIZNVCKALSEVJUGRXKIJCFOWXGWCYLSUYJLGPOZFIFWHEOQDATNUTYVKUQXIHLSNNOVGAWCAMWTCEQWBDFQBPHJHZRSXBXXQDKZC");

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
    msg.setTimeStamp(0.121186936183);
    msg.setSource(53065U);
    msg.setSourceEntity(219U);
    msg.setDestination(53042U);
    msg.setDestinationEntity(203U);
    msg.op = 194U;
    msg.entities.assign("KFIIJBFPECCAGHKTXSLSQHAYGVRZIUPODPUXQNLJBKTZQTCUOLNNVIEWOTVLBBAKMBJRGNUJLZWWLVRGVWZDGXSNYIRFXTMMLDNFEYSXPJCRHACODVBEUFTKOGTDFSJMPHDYWOZIILDEAIWQEZPMUKOCDQVSXJBABCZCYXPPXIIFUQOYMTBSOAGCYNTH");

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
    msg.setTimeStamp(0.470080242203);
    msg.setSource(50857U);
    msg.setSourceEntity(45U);
    msg.setDestination(65415U);
    msg.setDestinationEntity(247U);
    msg.op = 183U;
    msg.entities.assign("SIKEEYEUGPCJKZBSUBAYNMYPIVGCZMDNMYNYOQJXNWOSVJYIJAIVJTXUTFKWMPCLLDFEVJONCZPZHFUAMYQROKHXZMNWDXQULKHTKWYHTEISHUFQLGWGUYOHPBFEFSZSFAXOSZVHBRHGLCZGBDWLUTDJRFEQVCHROADIOQPXUDDEQKPLANUBERZJFSCMTLYBGTBWRCKWCJROMEXRQVW");

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
    msg.setTimeStamp(0.525202292543);
    msg.setSource(56574U);
    msg.setSourceEntity(216U);
    msg.setDestination(198U);
    msg.setDestinationEntity(212U);
    msg.type = 20U;
    msg.speed = 45018U;
    const char tmp_msg_0[] = {-66, 104, 112, -60, 25, 67, 54, 77, 69, -90, 103, 7, 52, 68, 78, -98, -83, -28, -93, -120, 2, -112, 121, 55, 65, 97, 39, -56, -10, -39, -77, 52, -4, 103, 16, -88, -104, 24, -82, 91, 51, -1, -118, -46, 62, -50, -95, -103, 107, 31, -121, 72, 54, 124, 90, 118, 28, 39, -54, -112, 7, -115, -82, 33, -98, 83, 22, 44, -115, -121, 47, 74, 21, -122, -127, -28, -59, 41, -25, 111, -54, 15, 114, -96, -73, -64, -19, 57, -17, -79, -115, -55, 74, 77, -56, -76, 78, 79, -96, -22, -19, 27, 36, 23, 79, -93, 75, -64, 97, 30, 40, 3, 104, 114, -89, -96, -94, 54, 94, 68, -46, -105, -84, 126, -59, -91, 83, -99, -74, -121, 112, -126, 94, 47, 82, 4, 42, -24, -95, 97, -25, -66, 113, -66, 6, 68, -80, 97, -77, 108, 68, 81, 49, 117, 42, 123, 23, 61, 68, 27, -72, -26, 65, -42, 57, -66, 92, -82, -28, 15, -36, 102, -44, 96, -113, 30, 117, 57, 123, -66, -25, 112, -89, -83, 0, -76, 103, -48, 3, -103, -47, -14, 59, -69, -66, 52, 109, -62, -111, -107, 0, 2, 8, 18, -20, -116, 98, -5, 60, 10, -28, -79, 112, -95, -66, 35, 84, -70, -79, -98, -110, 9, -13, 2, -16, 80, 122, -106, -9, -82, 75, -110, -61, 121, 115, -106, 82, -56, -36, 94, -51, 59, -47, -61};
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
    msg.setTimeStamp(0.665416918645);
    msg.setSource(38574U);
    msg.setSourceEntity(39U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(20U);
    msg.type = 84U;
    msg.speed = 48050U;
    const char tmp_msg_0[] = {76, -88, -67, -30, -17, 50, -83, -9, 68, 122, -81, 122, -50, -63, -45, -3, 48, -103, -111, -23, 68, 35, 7, 17, -121, 74, -102, 97, -23, 104, -22, 8, 85, 104, -120, 44, 93, -14, 2, -104, -49, 43, -32, 81, 68, -111, -36, 101, -14, 96, -127, 74, 30, 27, -22, 52, 77, -112, 103, -119, -79, -103, -2, 15, -31, 112, -82, 113, 10, -16, -86, -71, 45, 79, 100, -37, 67, -45, 50, 125, 112, 38, 110, -38, 110, -28, -43, -62, 15, -12, -37, -126, -31, 105, -117, 126, -49, -126, -58, -15, -14, -31, 7, 38, -43};
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
    msg.setTimeStamp(0.955084453861);
    msg.setSource(43587U);
    msg.setSourceEntity(81U);
    msg.setDestination(58507U);
    msg.setDestinationEntity(30U);
    msg.type = 56U;
    msg.speed = 22289U;
    const char tmp_msg_0[] = {-51, 115, -75, 102, 119, -127, -110, -9, -88, -112, -26, 53, 30, 26, 107, -40, -121, 38, -44, 14, 54, 42, -44, -118, 111, 26, -73, -118, -65, -19, 83, 15, -118, 65, -50, 45, -47, -67, -84, 89, 78, -34, -72, 32, -49, 106, -1, 71, -17, -19, 21, 117, -6, -72, -39, 49, 70, 50, -92, -27, 10, -8, -26, 52, -74, 30, 24, 25, 121, 79, 61, -39, -93, 73, 23, -124, 39, -5, -40, 100, 108, -128, -100, 98, -97, -72, 55};
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
    msg.setTimeStamp(0.668081147177);
    msg.setSource(39996U);
    msg.setSourceEntity(84U);
    msg.setDestination(43220U);
    msg.setDestinationEntity(70U);
    msg.available = 2228097012U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.301993521592);
    msg.setSource(50117U);
    msg.setSourceEntity(236U);
    msg.setDestination(35865U);
    msg.setDestinationEntity(166U);
    msg.available = 4187792716U;
    msg.value = 176U;

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
    msg.setTimeStamp(0.908863686915);
    msg.setSource(34755U);
    msg.setSourceEntity(50U);
    msg.setDestination(52825U);
    msg.setDestinationEntity(4U);
    msg.available = 1031495338U;
    msg.value = 126U;

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
    msg.setTimeStamp(0.723285442841);
    msg.setSource(57436U);
    msg.setSourceEntity(155U);
    msg.setDestination(61955U);
    msg.setDestinationEntity(112U);
    msg.op = 33U;
    msg.snapshot.assign("KYYRTHOSUATTETPVBWVGITESSIBKACCVXJVWSSMKSAKGZEPEFZTSRTDTKPMZDKUZFMEMEHYKIWOYXQHQHBQQDCPNPONBNUULGZLDONNVWQM");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.68417824782;
    tmp_msg_0.x = 0.486685598892;
    tmp_msg_0.y = 0.531729660434;
    tmp_msg_0.z = 0.336554656776;
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
    msg.setTimeStamp(0.485236396569);
    msg.setSource(63946U);
    msg.setSourceEntity(51U);
    msg.setDestination(15330U);
    msg.setDestinationEntity(126U);
    msg.op = 212U;
    msg.snapshot.assign("RZUCLZYPZTYVYETMYWSYSSKSXKDMPARLPXFAWRJXOAWRGTMHCZIGSRQPWKDJBONZEGULVCSAMSPRWOSORIMWKKFFOHDUJJVZODOBOBXFVBEANUVCQXNNBQTZEEILLBHMJVFVWZCCKFISDNJYQ");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.90646191722;
    tmp_msg_0.x = 0.124095273911;
    tmp_msg_0.y = 0.677695174973;
    tmp_msg_0.z = 0.906210545834;
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
    msg.setTimeStamp(0.217834713967);
    msg.setSource(18419U);
    msg.setSourceEntity(38U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(102U);
    msg.op = 149U;
    msg.snapshot.assign("BEGHOCUBWPDBURMVEBZNHHRZVWXIEZYYQHGLYXKDMUQKFSTLWNWXJDXMITMRNQYKGVRLVRPAZGKFBLVJEHBHWVJDPLPYCTHEMKJDZBJXKTINFJSGQFOOSGMQKVI");
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 171U;
    tmp_msg_0.width = 33869U;
    tmp_msg_0.height = 28731U;
    tmp_msg_0.widthstep = 48240U;
    tmp_msg_0.channels = 236U;
    tmp_msg_0.depth = 181U;
    tmp_msg_0.finaldata = 207U;
    const char tmp_tmp_msg_0_0[] = {125, -125, 6, 1, 122, 63, 103, -69, 92, -12, -79, -41, -60, 28, -126, 5, 61, 68, -127, 23, 91, -45, -16, -23, -64, 23, 124, -52, 69, 23, 8, 28, -37, -26, 59, -87, 121, -85, -106, -101, 24, -26, -72, 82, 105, -44, 69, -76, -68, 5, -40, -106, -54, -83, 42, -9, -12, -9, 31, -119, 39, 109, 6, 102, -99, -84, -40, -50, -87, 88, 39, 56, 22, 125, 21, -58, -80, -115, -69, 3, -80, -88, -53, 31, 40, 123, 17, -7, 89, -14, -60, 21, 99, 109, -30, -45, -2, -73, -95, -15, -113, -122, -84, 111, -93, 117, -108, -93, -30, -26, -115, -65, -95, -64, -100, 89, 54, -99, 36, 10, 78, -64, -113, 75, 23, 1, -70, -85, -62, 116, -37, -16, 62, 61, 33, 76, -112, 109, 101, 81, 96, -84, -61, -89, -25, -79, 101, 73, -52, -96, 12, 69, -69, -54, 23, -9, 79, -120, -127, -61, -41, 57, -128, -123, -31, -33, 101, -80, -99, -71, -88, -125, -98, -71, -6, -65, -73, -124, -126, 122, 111, 104, 11, 1, -101, -94, 34, 10, -57, 24, 6, -81, -32, -104, 64, -61, 24, 34, 69, 27, -85, 47, -14, 98, 56, 23, -86, 17, -79, -23, -84, 58, 118, 101, 19, 74, -37, -76, 32, -80, -52, -76, -78, -9, 106, -99, 11, -97, -44, 91, 14, -19, -20, -62, 104, -26, -26, 17, -20, -74, -125, -44};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.907452736337);
    msg.setSource(36025U);
    msg.setSourceEntity(96U);
    msg.setDestination(29782U);
    msg.setDestinationEntity(243U);
    msg.op = 66U;
    msg.name.assign("KZPFGVOWJHWCINCEMJMKSTWLXAUTLLLMGRMXRBQKDSSORVSGJNTLUSUYQABTECBVPNJPVSOVRPAYSXVNYQOEXONBZUJMAGHFTHUFJPUMRKAEVKDGPXIZTKROFDLTZAUNGCJWWFWFFETXVUITXIHSLQBYXHBDINZJYEMQPGNHZDTNPEUAFKCDHGHWWSCLXAICBWIEGGIYDPZQQBKLXDJVOCJPQ");

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
    msg.setTimeStamp(0.257424381907);
    msg.setSource(24208U);
    msg.setSourceEntity(175U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(164U);
    msg.op = 139U;
    msg.name.assign("AXNEHDTBLL");

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
    msg.setTimeStamp(0.251355793873);
    msg.setSource(26074U);
    msg.setSourceEntity(85U);
    msg.setDestination(41092U);
    msg.setDestinationEntity(227U);
    msg.op = 205U;
    msg.name.assign("WDWTZAMDRMLQLKKDUUYZPRBAAKAJZRYSTSOIHQGGECUGYYVSNBHVWIDPKVIMNVVLPWCGQIJIZAZCUFDHKAOFZFFQYXZQLKBUMDJQFYZSHMHTOCOTVPCSQUTPBBWUZQAEXH");

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
    msg.setTimeStamp(0.095533526752);
    msg.setSource(8116U);
    msg.setSourceEntity(38U);
    msg.setDestination(59221U);
    msg.setDestinationEntity(149U);
    msg.type = 42U;
    msg.htime = 0.834629363549;
    msg.context.assign("HQVQEXHCWTJLCKGIHFMBFWBEZXPTQXUJFTSHQPCYVLIWITQUUWUYAZQWNHYZNIOWVXMRBSFZAGVGBDDUAUTKMGEJLDZKRRIULJSNADCWOIDFYYRQCQMSIJBZZEGRYGAHIVOOGIENGLYEAXAPBOUXBZRLDSQVHTBXOMPCFKNEAVPSJNSAHDJPXRCFYUINOTPKESUFPZRCDAYLCMNBBMSXKHWPXJKJEFMGZRMVODDLKLN");
    msg.text.assign("ICPSNAQQDKHHZMCPKFWPBGWSJBWITCVLGYOFOQUMRLWX");

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
    msg.setTimeStamp(0.33146261672);
    msg.setSource(24314U);
    msg.setSourceEntity(64U);
    msg.setDestination(57445U);
    msg.setDestinationEntity(14U);
    msg.type = 217U;
    msg.htime = 0.231723873425;
    msg.context.assign("XPQRCSYKHGTJPRTTZEZWZVOZCMUCKQMSAXYVYILWFUBNMPAEYEOTYZOKDBLDGIPXEQVNFLQOKGROYYNYSODNQHGDDBTCTIDKAJTLMUDSUJKXAIGVMXZVPBMGMBFSHRFBNNHJCRFSRSVBLBXXAAKCQR");
    msg.text.assign("OTJLROYDAJYIWNAAPCKHBIGNACFONFIZCFSMPBZDITGPEKIAQQZRQXOGEVPYYOWEBRJEVHULHTRRZUAPITVNVJKRNQATUKZJKADQSDGZQLBVMNQPEXPIA");

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
    msg.setTimeStamp(0.470477865284);
    msg.setSource(21779U);
    msg.setSourceEntity(142U);
    msg.setDestination(64644U);
    msg.setDestinationEntity(69U);
    msg.type = 69U;
    msg.htime = 0.477586490931;
    msg.context.assign("BFPRJDKINIMVIVNILMDMTYNJPSDHLURMBWJWVNYGDKAAIIAYXJFDGQYBQXDUZPWVHJMNPGJDZXUXFVSSJFPIAQXDIXQ");
    msg.text.assign("OSZGYOSCHZYUVCFSCUFCHXQROBLDANWGYVULNGTKWJUIEKBNKTMPDINJPKFOIIRZCZVCPRNZWIQCIUDXRGB");

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
    msg.setTimeStamp(0.538643574259);
    msg.setSource(28317U);
    msg.setSourceEntity(254U);
    msg.setDestination(47333U);
    msg.setDestinationEntity(169U);
    msg.command = 14U;
    msg.htime = 0.731008038624;

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
    msg.setTimeStamp(0.195018669927);
    msg.setSource(35899U);
    msg.setSourceEntity(122U);
    msg.setDestination(5085U);
    msg.setDestinationEntity(174U);
    msg.command = 181U;
    msg.htime = 0.98634173191;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 111U;
    tmp_msg_0.htime = 0.626542611101;
    tmp_msg_0.context.assign("AOFAJMXPQDZNAXGKBKJVZNDOYDQKNFSAHTACXBXEVSSLNLHUPLPLZEGNCXVPH");
    tmp_msg_0.text.assign("KAHNQVOBCCNAQUPOXBDCUUYONDQVQQTLFHHITTOKFDLTNXUMLYWCFLCEJWMXMERSFWMEMULSLWHDAWNEYKAHGJRHGZLMMIKIQGGBEGFEBJPIJWGYKZXBPVFCCAPJIJB");
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
    msg.setTimeStamp(0.259700455269);
    msg.setSource(38917U);
    msg.setSourceEntity(172U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(141U);
    msg.command = 160U;
    msg.htime = 0.741668311485;

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
    msg.setTimeStamp(0.585544046467);
    msg.setSource(15282U);
    msg.setSourceEntity(150U);
    msg.setDestination(31685U);
    msg.setDestinationEntity(194U);
    msg.op = 164U;
    msg.file.assign("PHYPPUVOATMZVTGULGFEJXXIXMOKGENWATDRKKCNYLELAZQCHCFHEGJDPAWKGQXWBUSNATPMISCPBCLKBBYKBDSFTWRFZNHIAJYLMIORRRMDWVRBPEIWJBQUUYYVNCYEZIFMBXHPKUHNWZBFMHAGCDORUTFZTRYBZTFJAQDHAJLRPLXFKKDHSOXGGMIUOEIQITTXMRWYDDKSVXNQCVDIOLSHJQFVWS");

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
    msg.setTimeStamp(0.0813690276873);
    msg.setSource(34360U);
    msg.setSourceEntity(242U);
    msg.setDestination(32263U);
    msg.setDestinationEntity(246U);
    msg.op = 211U;
    msg.file.assign("LODAHSSTUOPOBQVYJUQHLEARCSRCXTHXLWXOCHQGYJEQGEXKGQXTJFMAIGVVUFUPFIDKROFGZHPARSZWMLZHKEHAJRSMVBUVMLJKMQPQRZOGNSVYKGLHNXCXUVDEBFGULCZEPDBZYUFCYFZIRBSAPDIMRZFINPOLBOIAKBMTZVHJZHWVIXEAMTIKFOKYPKMUDSRNTDGTEJQJN");

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
    msg.setTimeStamp(0.848015171423);
    msg.setSource(55344U);
    msg.setSourceEntity(126U);
    msg.setDestination(22839U);
    msg.setDestinationEntity(246U);
    msg.op = 157U;
    msg.file.assign("FKBCXYNXEVHXIAQBDUEWRXKVTAQBWNPPGUYAKFLFSSOIEQSPNKIKTTKGWMGISUTRECRCOLHZLJCTJQDZYCUQ");

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
    msg.setTimeStamp(0.621723226471);
    msg.setSource(32019U);
    msg.setSourceEntity(57U);
    msg.setDestination(41507U);
    msg.setDestinationEntity(203U);
    msg.op = 79U;
    msg.clock = 0.279083327744;
    msg.tz = 125;

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
    msg.setTimeStamp(0.194300322464);
    msg.setSource(53924U);
    msg.setSourceEntity(82U);
    msg.setDestination(11448U);
    msg.setDestinationEntity(37U);
    msg.op = 148U;
    msg.clock = 0.423759637925;
    msg.tz = -23;

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
    msg.setTimeStamp(0.461644537112);
    msg.setSource(23415U);
    msg.setSourceEntity(40U);
    msg.setDestination(15666U);
    msg.setDestinationEntity(166U);
    msg.op = 238U;
    msg.clock = 0.873841122212;
    msg.tz = 51;

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
    msg.setTimeStamp(0.162220885015);
    msg.setSource(18550U);
    msg.setSourceEntity(98U);
    msg.setDestination(29876U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.681271121743);
    msg.setSource(1437U);
    msg.setSourceEntity(54U);
    msg.setDestination(23862U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.386004048295);
    msg.setSource(45932U);
    msg.setSourceEntity(13U);
    msg.setDestination(29217U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.421089747817);
    msg.setSource(34120U);
    msg.setSourceEntity(147U);
    msg.setDestination(28062U);
    msg.setDestinationEntity(206U);
    msg.sys_name.assign("WZPJWHSDTWSUUEELEUHDVIVFJGLXSDCQDVMQMRBGOYIROKFQYJFHHMSYCWAGKLWIDJHAGLIXYVUVPQMJRNOQMETWKVRXECBDKRBUUIOHLNZSLWYDZDVIOIGKNMEBNMT");
    msg.sys_type = 46U;
    msg.owner = 57536U;
    msg.lat = 0.289873020026;
    msg.lon = 0.980515497692;
    msg.height = 0.0602029178199;
    msg.services.assign("FOKTUIBEAVOHXJYYWYSMQAQLATDVRTSHKNIFQWESCVREVADAAXEMHDFHFUTJELPGWGMHJQEVKTMXQIERFHADOHKMGJHXFPXYQPTWOBKSIRNGCXURLUWMRACBNSYGCBLUHK");

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
    msg.setTimeStamp(0.616875257203);
    msg.setSource(19768U);
    msg.setSourceEntity(208U);
    msg.setDestination(17229U);
    msg.setDestinationEntity(220U);
    msg.sys_name.assign("CVSFBNUWKYIMETBHLYLDMIOULZKNEWXFVEYMOGNITSIGAEHJSYOBYGOUWCLWVGTGMZZWWZGXQQATONVAZEYCOYNXDBRPQBUDAMKAQPVEFZMADIWTCGZVWLJRMUSCARANBDQIAEHZITYLRCYPJFQTVGIDKPFENRPOMNPWWJHBKDBCUESDHPMHOXRKFXLPSKSVDULXOBQMXHTRFQOUJNVNQUYLSFLPTRJJKCPVKBTXZSFSJHQRFZJRJAUKCHXIE");
    msg.sys_type = 204U;
    msg.owner = 64381U;
    msg.lat = 0.13889071285;
    msg.lon = 0.439759491076;
    msg.height = 0.671986744649;
    msg.services.assign("SCSIYTDERZFNTZYELLXNLPUWVZREVQCWDZPQUMOCMHBTCAQWPCFBONXQRGWZXROMIKOBUZHXWEGLUMUKSFXNFYADHFJVJDLGKIVUNPRXIHSBLNINGLEPNYAZOAOHNINGZDLLCYBCWVJHOBHGVGXJFWXSOTIRISVJREFBJDHAZFSYMPAPTKKXRFAMQVYURTQJDY");

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
    msg.setTimeStamp(0.374273952728);
    msg.setSource(24550U);
    msg.setSourceEntity(43U);
    msg.setDestination(11767U);
    msg.setDestinationEntity(180U);
    msg.sys_name.assign("PBRDULWGVBENYGAOTLHEDNLZATAGFCBSANQMTZGTNRZIUCPAJPNVMUODRSXBKMMNEKGQVRTLILIUHSWRJBBNOQLOOLWKQSOUMXWPQCSNFYPGFVPBTIJYLIFOJJXKCKYMNWXTZDSDEAKIASEYDBQMUQOPUQRWZBXAVWIFWMM");
    msg.sys_type = 89U;
    msg.owner = 14914U;
    msg.lat = 0.512148666111;
    msg.lon = 0.15593956105;
    msg.height = 0.325979163535;
    msg.services.assign("PMIXCGUTCTKDZDHBJFKQYWMCFCPOGYIQKLOTZBBPPTUITOXCWECRUNHEMLIMHSSFXCKZNNZPAKYWRAGUYKXOPAWZGOTOMPBKAWRTBQFLWGJJNNZUMEARBIQDYBGDBZTBEVYFZYRSXFILLGBTLYGHXOMRVOEARJPM");

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
    msg.setTimeStamp(0.130455382863);
    msg.setSource(34369U);
    msg.setSourceEntity(19U);
    msg.setDestination(18056U);
    msg.setDestinationEntity(90U);
    msg.service.assign("NRJCYTWVOFFBKNPEQHGURKCSHOZEGPMJGCUTRPYWYXYBSTKUSIJGWDOCLAPFKPCDUQSTUKWVAYQXLBGODGJLTQIBAIHODFAXAANVNZNBLBSEDYCDFROOYQJZRVEUZFUDFZYJMZEMPXITWVKHJHCXVNC");
    msg.service_type = 205U;

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
    msg.setTimeStamp(0.227676442195);
    msg.setSource(40057U);
    msg.setSourceEntity(164U);
    msg.setDestination(21152U);
    msg.setDestinationEntity(19U);
    msg.service.assign("TYURDLOSTIUIAGMBGUPPTLYKQJPKFATVTVIUJRLEMGPJMWQMBJATIIJRRPOFCYXZZUWETXICDWLAFVHKKOKDUXFYXCCAPWZXADMYNNYZCQBSNIJATZAZQNSDIXDPXWWDVGOZEMVDNZNKOMK");
    msg.service_type = 197U;

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
    msg.setTimeStamp(0.168466494772);
    msg.setSource(27826U);
    msg.setSourceEntity(48U);
    msg.setDestination(61414U);
    msg.setDestinationEntity(240U);
    msg.service.assign("MUTXHRFRYPCQKVOZIMVSVHVMAEQTXEJJPJYQLDWBVXJZGNKRXWMTLMXM");
    msg.service_type = 48U;

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
    msg.setTimeStamp(0.0544955339509);
    msg.setSource(31126U);
    msg.setSourceEntity(227U);
    msg.setDestination(3265U);
    msg.setDestinationEntity(192U);
    msg.value = 0.596375793199;

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
    msg.setTimeStamp(0.255790529404);
    msg.setSource(3471U);
    msg.setSourceEntity(50U);
    msg.setDestination(9993U);
    msg.setDestinationEntity(1U);
    msg.value = 0.853688912227;

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
    msg.setTimeStamp(0.732034602144);
    msg.setSource(25735U);
    msg.setSourceEntity(1U);
    msg.setDestination(26754U);
    msg.setDestinationEntity(48U);
    msg.value = 0.458622671399;

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
    msg.setTimeStamp(0.160178637039);
    msg.setSource(17727U);
    msg.setSourceEntity(129U);
    msg.setDestination(23635U);
    msg.setDestinationEntity(24U);
    msg.value = 0.785663519325;

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
    msg.setTimeStamp(0.621542319925);
    msg.setSource(14513U);
    msg.setSourceEntity(122U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(61U);
    msg.value = 0.116274086744;

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
    msg.setTimeStamp(0.136032011918);
    msg.setSource(6502U);
    msg.setSourceEntity(60U);
    msg.setDestination(6828U);
    msg.setDestinationEntity(11U);
    msg.value = 0.917947026778;

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
    msg.setTimeStamp(0.0275627409047);
    msg.setSource(20158U);
    msg.setSourceEntity(191U);
    msg.setDestination(54379U);
    msg.setDestinationEntity(249U);
    msg.value = 0.509146481113;

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
    msg.setTimeStamp(0.935293774485);
    msg.setSource(12437U);
    msg.setSourceEntity(145U);
    msg.setDestination(61855U);
    msg.setDestinationEntity(115U);
    msg.value = 0.11363594402;

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
    msg.setTimeStamp(0.690199716004);
    msg.setSource(61494U);
    msg.setSourceEntity(36U);
    msg.setDestination(18192U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0607814271251;

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
    msg.setTimeStamp(0.915600361672);
    msg.setSource(49690U);
    msg.setSourceEntity(174U);
    msg.setDestination(37344U);
    msg.setDestinationEntity(78U);
    msg.number.assign("PCLTXLTMCWHGNMLQNGLWAELNVZKMJKGSUEPKQZCVQNEUQSRITFXZOJPPHLBAFEMPZYTNAVORORGXULEISOWRXSWJITXZFEUJDTQSAFVHCIMHAAWZOBRYJPIKNFPYHTBIOWHIAVQQWTDFPBNEANOMDXSVUDRVXIODJSAMDDBRHHGXKCFUWBZYUCQYSGFGLYOFGDRBCCFIGJXWVRBJHKKKS");
    msg.timeout = 32497U;
    msg.contents.assign("NHEJLZVFQEXGRMPTEPIMKOCQSZRRFAJPAZVCAMQTNWERRATTGJFNXGZKSSDUCWV");

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
    msg.setTimeStamp(0.340022762856);
    msg.setSource(56648U);
    msg.setSourceEntity(217U);
    msg.setDestination(36899U);
    msg.setDestinationEntity(214U);
    msg.number.assign("NQIADXAZLWWADZTXHZQNQTRKBBZAMKCBSNHCTRDWGBRMIROSBPLLPQEFOGSSGCQGWROODRTMDFTZCKNCVYSPOQEBYCWNWNKJWISHKEUNFKGVITFIKYUCJEYLTWPVMCKMDLYDJXBWBDQUHPQVZHPRHFUTUFESEAIUHCDUQVEJMPLMQMZTHGJOBPLPARHNHYEFUCUFVFMJEIGOMXVJITXRGJIOXXZYYVD");
    msg.timeout = 32438U;
    msg.contents.assign("UFRYLXPIDIFWJDGSDAFTDLNRRTNBQBDHLVMOIWVUKGOXQJVZPMGUJTKWZETIHXVRVALAFHCXWHMGRYGRADGBNQBJCXUQEVOIZUUEZPWHXFSRSLQOVNADMOKCPVZMNHDUNWLSDKOEWCQLJVPTIIZPEJEXDUSFBCWXAAHMFICCGYZ");

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
    msg.setTimeStamp(0.814652506105);
    msg.setSource(37662U);
    msg.setSourceEntity(228U);
    msg.setDestination(45342U);
    msg.setDestinationEntity(217U);
    msg.number.assign("AQIVRHWDNGITGITRLMPWDFUGIAAQAPUOAIVHHGBUTFPNRXWJCFOPPUEKOEFWEWZFLODZSVSBGGWQPQHSCYIRUMBSJMCXHOQAIUFLZKNMXQJMDOWERFZDQAJECWQNLTJBXQTZNYFXDYVKNKJVKLWBHKEBLUSLZSVNYSNOCDLUHKXVMFHLNLV");
    msg.timeout = 25597U;
    msg.contents.assign("AZNXAAXIQXYEBWDCSIVUSJUHERGMANYOJWJGYGMOHLAQTUVLLGHRKFPJBYHLGQKQDZEEGTIAMJYVGMNHUU");

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
    msg.setTimeStamp(0.592103960284);
    msg.setSource(11642U);
    msg.setSourceEntity(208U);
    msg.setDestination(41896U);
    msg.setDestinationEntity(131U);
    msg.seq = 2641085330U;
    msg.destination.assign("EIMQOJBQVVYHRGSPTWWSPBYUGDUEGCLWAPAGAOCOQJLUWENEIHRFKZSNHFUHKQDLDQBECLNRJIWMQADZHRLTVNXMSNHXVPMBPCMKFNXPJUDOXTZYFTXUKI");
    msg.timeout = 9649U;
    const char tmp_msg_0[] = {-62, -35, 110, -55, 110, -101, 58, -56, 11, -24, -13, -50, -18, -49, -91, -10, 62, 103, -37, -9, 15, 2, -100, -93, -5, -64, 80, -119, 126, 14, -103, 10, -92, -21, -77, 86, 12, 85, 88, -36, -48, 72, 60, 17, 108, -82, 62, 76, 31, -126, -105, 87, 2, -63, 92, -49};
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
    msg.setTimeStamp(0.840719917069);
    msg.setSource(55029U);
    msg.setSourceEntity(65U);
    msg.setDestination(58058U);
    msg.setDestinationEntity(51U);
    msg.seq = 2499155791U;
    msg.destination.assign("AEMVUZKUGTMRYOGSHVEWWNLUDTYAZJXTMXUWUFWAOWLGEJGYUSWYTXTHKESIYQLFTICCNJYHXUFCCPMTZQPGOAAIAJPMPAMRLCDBHZMCYFESBNRZPCRQLWTEIDNLOIHGQVMYIHQPJORDPLXUIXDHNEFWGLVNBBAXSNDPVNVFVKXBGKRFZFNRNYJAKDIHSS");
    msg.timeout = 19243U;
    const char tmp_msg_0[] = {42, 3, 7, 28, -37, 87, -127, 38, -115, 108, 49, -48, 30, -90, 29, -107, 91, 67, -63, 85, 77, 120, -70, -92, -3, -96, 96, 103, 77, -109, -103, 31, -110, -118, 11, -92, -94, 48, 56, -29, 10, -65, -119, 10, -14, 27, 72, -59, 41, 4, 63, -106, 77, -42, 38, 76, -119, 32, 96, 77, -10, 24, 8, -63, 96, -104, -20, -38, 42, 112, 11, -98, 12, -86, 51, -1, -38, 80, -60, -88, -44, -31, -102, 77, 59, -31, 98, 76, -96, 74, 109, 1, 116, -87, -57, 51, 54, -96, 60, -10, -112, 31, -120, -42, 52, 10, -58, -76, -8, 72, 5, 78, -63, -56, 74, 124, -88, -53, 89, 38, 25, 99, 60, -103, -120, 116, 77, 55, -40, 3, -66, 7, 110, 57, 106, -78, -86, -23, 0, 7, 90, 27, 123, -22, -58, -11, -106, -19, -93, -126, 98, -40, 7, 95, -69, 3, 107, 41, 58, 24, 67, 93, -104, -100, -105, 105, 73, -84, -89, 85, -25, 16, 47, 92, -49, -32, 12, -48, -79, 61, 90, 80, -54, -69, -16, 99, -50, -41, 55, 71, -108, 126, 85, -45, 16, 25, -27, -77, -27, 29, -34, -55, -105, 123, 9, 34, 67, -59, -45, 104, 2, -128, -53, -27, -44, 66, 105, 93, -12, 10, 105, 34, -92, -81, 79, -78, 20};
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
    msg.setTimeStamp(0.414856041073);
    msg.setSource(19193U);
    msg.setSourceEntity(186U);
    msg.setDestination(57221U);
    msg.setDestinationEntity(218U);
    msg.seq = 2700993126U;
    msg.destination.assign("TTKNNCRFAGREAWBBFLSSLXLAYZUNSIJDPYCVJVQHEALHC");
    msg.timeout = 37314U;
    const char tmp_msg_0[] = {24, 63, 113, -122, 101, -81, 30, 87, -70, -88, -46, -42, 72, -125};
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
    msg.setTimeStamp(0.455933030275);
    msg.setSource(11046U);
    msg.setSourceEntity(183U);
    msg.setDestination(21641U);
    msg.setDestinationEntity(162U);
    msg.source.assign("LGAZCESVCNINPHUZMGBRYKUEODBJSGWQKXXTJZIIMNEZNAHQWPRRBEBTAJFREGJTKZOIOKZYUPIIPZDCBDEDGFAXHACRXXNWLWDKHDFIYHXGJYEKPCNAVMWXSBFCLKBKXRURMHTVLPYWGKDORFWQURFVELWQNIQAPXVWTYJPIWSTLTRBVOHZPSACCJGSSYCQXN");
    const char tmp_msg_0[] = {37, -24, 123, -6, 102, -85, 39, 17, 17, -102, -102, 109, 65, 126, -124, -48, -93, 102, 115, -98, 19, -62, 26, 120, -98, 86, 84, 7, 34, -86, -108, 19, -63, -41, 65, 8, -90, 87, 66, 51, -15, -92, -10, 69, 51, -92, -9, 55, -24, -108, 19, 67, 52, -62, -103, -65, 26, 60, 45, 27, -59, 108, 65, -83, -58, -90, 27, 73, 118, 62, 97, 78, -57, -22, 12, 65, 91, -10, -25, 103, -49, 44, 107, 95, -23, -37, -24, 21, 73, -74, -128, 117, -74, -86, 23, 77, -21, 124, -113, 40, 114, -16, 120, 53, -108, -64, 25, -59, 121, -90, 77, 118, 29, -71, -85, 69, 27, -83, -61, 106, -83, 39, 104, -94, -41, -53, -9, 56, 18, -116, -58, 116, 44};
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
    msg.setTimeStamp(0.508536545701);
    msg.setSource(58791U);
    msg.setSourceEntity(146U);
    msg.setDestination(34680U);
    msg.setDestinationEntity(78U);
    msg.source.assign("DJLBXERVHETGPPOPQODLYPWYNYODIDSNIGSCHZXYNJEIQYFDKZBQHSSKURCSHXDGTOAFFYEMRWIZZQZXCHLVUVJWCSPTENLCITVWJQOJZJWLHDURKUWQGAPVUETTX");
    const char tmp_msg_0[] = {-10, 75, -126, -110, -116, -90, 43, -109, 94, -8, 93, -51, 82, -31, 73, 107, 26, 90, -43, 61, 85, -80, -117, 64, 56, 28, -60, 48, 51, -28, -65, -114, -80, 33, -16, -32, 105, -75, -105, 4, 37, 94, 81, 97, -95, -64, -35, -91, -63, 114, 42, 7, -68, -43, 86, 91, 25, 5, -121, 31, -67, 120, -59, 51, -45, 91, -43, -60, 51, -52, 74, -14, 44, -43, -41, -10, 79, -33, -24, 104, 68, 12, -108, -91};
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
    msg.setTimeStamp(0.113040720746);
    msg.setSource(20031U);
    msg.setSourceEntity(17U);
    msg.setDestination(12148U);
    msg.setDestinationEntity(211U);
    msg.source.assign("GOHTATXXRRTDKGDLIODIKODNVJUASBBYIPKCUPFXEVVWBYNHDHELMOHWTLAVPDCIRMBGVGMVWWPEUYCJZAQLEQOBHDRVDRKNWYLOOWAUGAZBOWJATQYJPPGZCPKBGKZSEKCUHWNINSNXZQSBEEABBJITQZUFSSFNFFKVK");
    const char tmp_msg_0[] = {-48, 39, -14, -118, 5, 93, -83, -111, 51, -21, 62, 75, 47, 122, -25, -125, 101, -61, 53, -71, 83, 112, 13, -22, 50, 46, -78, 10, -124, 40, 99, 67, -49, 124};
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
    msg.setTimeStamp(0.533316721193);
    msg.setSource(46792U);
    msg.setSourceEntity(12U);
    msg.setDestination(11554U);
    msg.setDestinationEntity(122U);
    msg.seq = 192000777U;
    msg.state = 118U;
    msg.error.assign("FDFNUCTGDSHTXCQRNIPDYLPVRXESTGZTVVKMQXNHWBEQEMEZNVYTSEMMKFNMVZZAWQZCIXPGLVSQBZGKHNYVLQGLXIUHWJEJMLQXJNFOLAHDOQGJWRBXAUFAZIBKRFPWPOMWICBIKWXOJRCJMJTUAVCTZULH");

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
    msg.setTimeStamp(0.877069362799);
    msg.setSource(58749U);
    msg.setSourceEntity(143U);
    msg.setDestination(2799U);
    msg.setDestinationEntity(190U);
    msg.seq = 2912130717U;
    msg.state = 252U;
    msg.error.assign("PISKNAPZSMNCEOUIWNXKVVCPWJEPKLBNDDQRLDTCDOZSMMVFUPYSUJQWAGKGTQXEBXUXXPTSFRDOZEKKZYUBFKDFGZHWCINPSFCAFBERQPHVGCYDEJJDGHAXSVGWHROIVYZTRNJRZBAMHFGBLTHWULTTQGJTOLRJMWYYJ");

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
    msg.setTimeStamp(0.797186631922);
    msg.setSource(6390U);
    msg.setSourceEntity(98U);
    msg.setDestination(8843U);
    msg.setDestinationEntity(155U);
    msg.seq = 3411785435U;
    msg.state = 91U;
    msg.error.assign("HJZDYPIKOHAFETUJIJZLSSGABVFSRZJEFIASFCXNSDAYXKWPTPXHTQLWEHUJXHDOCCKEKTXC");

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
    msg.setTimeStamp(0.809278082161);
    msg.setSource(35449U);
    msg.setSourceEntity(217U);
    msg.setDestination(21038U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("MDAZYCIKVLXMKNKSXRQYQPDZEYHPHMAVAFMDPPOSSNHOUKWIAXTXHAWZIUQCXJEFTHOUFVBJJWLJPJKZILPTNWUDCBGVGRXCDNGQNGZUREFTEZTZPUYJBSWCLIVHBJYRONCFFOYGERZQRBMSSLWXKJDRSEHKTRSILLFIUVYV");
    msg.text.assign("XBZOBJMNMVTACHHSBSSNLGNQSZHMENJBOGCPTDWUSCYRKPQCWHHIZUGNOAQLRACERQQIDHJQTLFZKFTXRWFVEBYMVDAHMSVBJGIZABTFOODRLXGMJPOQGQUZVTVWEIERRJVHYYIWWPFNGDVZFXRSSJSMHLNUWIJ");

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
    msg.setTimeStamp(0.779903959329);
    msg.setSource(41322U);
    msg.setSourceEntity(153U);
    msg.setDestination(63604U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("TSKIIDZXTGGNLOFPBQJNEMTBAALBWEEJUAOGUVKRPCKSSDLGAQHFIGUPGIVXKCFUXIFVRUUMZSISLYZLVTHAPDALQDWQEIJOWJFDYEXFYRVZRYCDCCWMSJJTNRINJWXBEOQDNLPXHMCBVVOHWKTMYPXHWZMYAVFHWEZLQ");
    msg.text.assign("RPDSFNEGHIXKNVAWTZXBUENLWBZUPI");

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
    msg.setTimeStamp(0.00493327646877);
    msg.setSource(27641U);
    msg.setSourceEntity(137U);
    msg.setDestination(36713U);
    msg.setDestinationEntity(168U);
    msg.origin.assign("UVMFYOPGCHLNKUZZKHLWQZPZVUJULBKSISCHAXIGJXIJMBFGMEXCYVPMPQZDNHFBMHCDLXZOOYSGWQBEFERYWWRKEFLJOYOSGXBTSFZANWOTIAOYMXZWMDGVNFGUTMGQQVFNBPKDLADLTNJEKDRKIMIOSACREBOILRDRSTJXEKRDRTQUYPVXEKPVPTISLHWCOUUHRADWHBYWITQHKUNYNAIVUWAFXGBQZTHNQCY");
    msg.text.assign("HCIETYRYJDYLSBYO");

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
    msg.setTimeStamp(0.0199025548882);
    msg.setSource(7237U);
    msg.setSourceEntity(155U);
    msg.setDestination(48289U);
    msg.setDestinationEntity(170U);
    msg.origin.assign("XAQDZXNFHDODMLMQIWOWCCVJGFENITXLVNAPT");
    msg.htime = 0.397991822144;
    msg.lat = 0.321542270443;
    msg.lon = 0.894888819675;
    const char tmp_msg_0[] = {-22, -28, -71, -126, -31, 81, -17, 33, -19, -56, -128, 11, 122, -33, -97, -116, 11, -51, 125, 85, -14, 117, 35, -43, -53, 96, -49, 123, 75, -71, 20, 32, -123, 88, -101, 21, -22, 106, -91, -106, -35, 56, -13, 84, -37, 19, 84, -29, 101, -107, 25, -100, 87, -128, -74, 80, -111, 31, -5, -111, -101, 79, 16, -67, 18, -19, 81, -28, 115, -84, -51, 115, 67, 107, -23, -88, -107, 87, -46, -116, -121, 114, -75, 40, -21, 120, 97, -44, 100, -113, -72, -8, 14, 68, 17, -60, -114, -95, 84, 16, -40, 12, 59, -33, 100, 126, -106, -90, -80, 90, -64, 13, -69, 50, -97, -35, 23, 86, 42, 109, 61, 113, 62, -120, 32, 36, 38, 0, 31, 121, -53, 95, 99, 64, 113, -18, 84, -41, 0, 65, -69, -55, 25, 24, -47, -54, -104, 118, 48, -123, -124, -127, -18, -74, -72, 115, 20, -71, -93, -40, -38, 23, -28, 5, -55, -118, 83, -86, -125, 87, 88, -113, 60, -22};
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
    msg.setTimeStamp(0.883030623343);
    msg.setSource(52118U);
    msg.setSourceEntity(222U);
    msg.setDestination(35080U);
    msg.setDestinationEntity(112U);
    msg.origin.assign("QUMQKMDMTZNESTZRBANBPOJIWDJYZQJVXOXLFQOQWTPUSNUOVBGFULE");
    msg.htime = 0.566900520451;
    msg.lat = 0.431836607814;
    msg.lon = 0.208918204138;
    const char tmp_msg_0[] = {-83, -111, 81, 103, -22, -4, -68, 14, 89, 51, 110, -90, 115, 48, 43, 108, 118, 93, 96, 119, 66, -30, 45, -92, -28, -84, -38, 64, -34, -99, 66, 40, 110, -64, 0, -92, 84, -31, 11, 33, -7, -1, 104, -57, 31, 33, -79, 97, 51, -9, 11, -84, -79, -122, -115, -127, 63, 51, 102, -39, -84, 88, -97, -77, 67, -45, 99, 18, 62, 104, -32, 118, 83, -91, 120, -124, -33, -101, -66, -76, -99, -97, 8, -98, -63, -13, 36, 19, -122, 81, -124, 70, 125, 17, -35, 125, -65, 84, 111, 43, 2, 59, 113, 19, 51, -122, -32, -26, 50, 99, 101, 31, 107, -32, 85, -121, 67, 25, -111, 96, 93, 70, 94, -67, -49, -15, -93, 36, -34, -70, 87, -14, -50, 10, -48, -73, -53, -27, 53};
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
    msg.setTimeStamp(0.0868952197959);
    msg.setSource(37691U);
    msg.setSourceEntity(240U);
    msg.setDestination(25956U);
    msg.setDestinationEntity(122U);
    msg.origin.assign("ZUXCJYLEGEKLVIATHXQOEFUMZPQCSMFZNPOCADYPODCVWGX");
    msg.htime = 0.975781132375;
    msg.lat = 0.81994211836;
    msg.lon = 0.767592434662;
    const char tmp_msg_0[] = {-47, 106, 84, 20, 126, -127, 11, -42, 61, -68, -22, 18, 62, -56, -47, -9, 111, -37, 52, -23, -8, 126, -126, 92, 14, 77, -104, 61, -65, 78, 108, -54, 63, 36, 46, -35, 25, -120, -23, 64, -7, -28, -31, -117, -108, -75, -5, 124, 79, -123, 3, 31, 2, 71, 97, 105, 125};
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
    msg.setTimeStamp(0.215877295807);
    msg.setSource(33011U);
    msg.setSourceEntity(112U);
    msg.setDestination(60819U);
    msg.setDestinationEntity(86U);
    msg.req_id = 31252U;
    msg.ttl = 27212U;
    msg.destination.assign("DXGUTGNENRASPFBXYXPCADSRIGRYFVWVZEIVFLWMZVYHHNCHJLMUEYFAKDXROLMSVCBRZTMENPAUSWATHOUHPQNQHZYBWXOSCIVUNBILAXXJDTQMRDBCCKGLZLTFCOXYTEWRWISJDVPGKUHTTQCRKSWLPQIKNQAIIRMQNQKZJLRCBFFXHGYUWWDOGUOYBXNKOIKQLMAGJIUJBAWVASZQPVFSLPZHOVBYDSKEMPOGFJMHJDCZZPEETBTJEUDJ");
    const char tmp_msg_0[] = {51, -78, 121, 106, 17, -36, -93, -127, -56, 6, 10, 103, 46, -113, -38, 28, -1, 63, -21, -125, 107, -103, 34, -91, -123, -53, 117, 62, -108, -34, 34, 22, 80, 51, -32, 26, 35, -84, 14, -22, -14, -20, -73, 104, 110, -80, -5, -91, 2, -103, 88, 67, 10, 88, 16, -38, 57, 114, -39, -3, 87, 12, -99, 99, -14, 114, 60, -29, -36, -75, 74, 116, 43, -23, -98, -14, 57, -93, -48, -65, -98, -39, -9, 37, 58, 26, 115, 78, -77, -48, -56, -85, 77, -97, -106, 109, 66, -65, 95, -3, -31, -58, 104, 115, 124, 91, 125, 74, 4, -126, 104, 1, -15, -75, -75, -66, -87, 41, -105, 62, 58, 32, -116, -16, -97, -55, -98, 35, -95, -109, -128, 96, -68, -89, 105, -24, 84, 109, -66, 91, -96, -119, 118, -32, -76, -18, -71, 29, 6, 18, -117, 21, -56, 37, -59, -62, 92, -114, -121, 117, -86, 119, 104, -80, -68, -119, -42, 99, -22, -126, 21, 41, 22, 120, 126, -50, 34, 91, -104, 107, -43, 60, 64, -37, -94, -28, 59, 5, -73, 117, -46, -60, -23, -44, 47, 6, 67, -11, 112, 42, 39, 84, 32, 72, 69, -81, -121, -81, -108, -58, 108, 10, 54, 107, 14, 126, -103, -35, -76, 114, 22, -116, 78, -96, 1, -118, 51, -54, -33, 38, -12, -84, 79, 99, 119};
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
    msg.setTimeStamp(0.417549752485);
    msg.setSource(39440U);
    msg.setSourceEntity(237U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(11U);
    msg.req_id = 18430U;
    msg.ttl = 54373U;
    msg.destination.assign("HWTVRJCAFIDFWHNBBKSUAMRXGCVLWKLJJMYQNYIHUPGVCXBQDPFSPBLJEHSNOTUHCJDWRGCGYRXLLMKKSRIQWMSEHJOGOHUQULKQYXEEAKZOPVRRPBKGQSQZTBUXZKFBITYZITSWSYHTOVJQAARZJFLNCNMSQYAGPEMOZWXAO");
    const char tmp_msg_0[] = {-104, 46, 10, -100, 2, -103, 14, 115, 31, 42, -54, 8, -38, 4, -102, 79, 113, -44, -100, 77, 19, -119, -19, 101, 67, -96, -20, -11, 56, -2, -18, 15, -56, -93, 34, 109, -93, -116, -7, 120, -13, 120, -91, 85, 93, -21, 2, 2, 75, 44, 35, 68, 47, -124, -50, -12, -84, 44, -57, 37, 73, 59, -81, 112, 120, -43, -73, -125, 89, 56, 52, 84, 87, -78, 4, 113, 23, 5, 56, 12, -20, -37, -68, 94, 90, -103, -90, -114, 105, -119, -66, 91, -69, -82, 64, 77, -87, -116, -27, 1, -8, -33, 3, 94, -91, 83, 120, 16, -82, -60, -42, 71, 19, 126, 71, -53, -90, 10, 10, -47, 20, 6, 63, 44, 6, 60, -61, 39, 11, -90, -38, -92, 52, 17, -35, 11, -102, 86, -103, -109, -114, -127, -14, -40, 55, 83, 44, -125, -19, -73, 68, 9, -23, -70, 77, -26, -62, 3, 70, -72, -96, 125, 12, 11, 44, -56, 64, 68, -3, -120, -105, 7};
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
    msg.setTimeStamp(0.441965404368);
    msg.setSource(22753U);
    msg.setSourceEntity(81U);
    msg.setDestination(8032U);
    msg.setDestinationEntity(204U);
    msg.req_id = 44809U;
    msg.ttl = 22666U;
    msg.destination.assign("EJCIXZAJAHMCSHIETWTUWKVKSSNSNTOQHUFLRNXHRPSHMAJCSTFXOJYSPPHWJQNWVYMTUYMRGKOKURZECMEMORV");
    const char tmp_msg_0[] = {-126, -60, -2, 21, -87, 112, 83, -60, 81, 88, 36, 57, -63, 2, 24, 31, -32, -12, -45, -21, -74, -43, 14, -101, -41, 32, -21, 7, -107, 72, 115, 43, 83, -93, 103, -73, 17, 44, 14, 105, -47, 69, 48, 101, 78, -49, -2, 87, 26, 2, 123, -94, -10, 20, -28, 67, 123, 70, -51, 64, 48, 123, -48, 70, 7, 42, 15, 50, 94, 24, -127, -44, -78, 29, -128, -123, -78, -9, 11, 49};
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
    msg.setTimeStamp(0.900175467925);
    msg.setSource(34834U);
    msg.setSourceEntity(53U);
    msg.setDestination(14037U);
    msg.setDestinationEntity(120U);
    msg.req_id = 18140U;
    msg.status = 175U;
    msg.text.assign("TVBXSPKIOOIAWOUATZBEULATFIWCOIIKHOPAGFXOHFYTBGQIQYZWDVYYVEEELYJQRHKFDTUJUKQZMPXNYSQNXKMBGYYTGWJJSMSMWRQYPAMFTAZDBMURZVNJLQNUCGWOFEILFNAZXSVKXMLABUXBUHDRGNAMRZPEVPGEVWBXJDZTDUPLOCSTPSLWVCDZKHRANYHRGOGXLNCDFWXRHVSOCFIIKRLWJSHKEHSDIRUNVCTLMQEF");

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
    msg.setTimeStamp(0.987592135045);
    msg.setSource(49036U);
    msg.setSourceEntity(91U);
    msg.setDestination(54733U);
    msg.setDestinationEntity(26U);
    msg.req_id = 4191U;
    msg.status = 191U;
    msg.text.assign("IOASOOGQUUFQFMNENESUSTCIYRLZPZSUOQJOGHREFXNTSGROKPUKNZMFBSCYHMRDZZATSNJPNFNRHWEXTBQGWHONQDDTYFHDVIILLMPJDYWLMBMFYFZAJMWJXJKGMJKUHGULHWAKKBCBQIZPIGMXVVZLEAXLWKTXAGIKCTADNVD");

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
    msg.setTimeStamp(0.66739826499);
    msg.setSource(45211U);
    msg.setSourceEntity(16U);
    msg.setDestination(9600U);
    msg.setDestinationEntity(102U);
    msg.req_id = 20335U;
    msg.status = 110U;
    msg.text.assign("DQBORHRBYCFFFPEXVQGMAZHYSPGBNJVGUCRKBFMTAEHOGQTS");

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
    msg.setTimeStamp(0.784050778194);
    msg.setSource(48201U);
    msg.setSourceEntity(109U);
    msg.setDestination(55482U);
    msg.setDestinationEntity(24U);
    msg.id = 160U;
    msg.range = 0.668427358742;

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
    msg.setTimeStamp(0.613210393536);
    msg.setSource(5780U);
    msg.setSourceEntity(63U);
    msg.setDestination(21244U);
    msg.setDestinationEntity(226U);
    msg.id = 220U;
    msg.range = 0.0621749380926;

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
    msg.setTimeStamp(0.173959479757);
    msg.setSource(106U);
    msg.setSourceEntity(226U);
    msg.setDestination(50275U);
    msg.setDestinationEntity(154U);
    msg.id = 108U;
    msg.range = 0.48154543432;

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
    msg.setTimeStamp(0.261192185465);
    msg.setSource(44252U);
    msg.setSourceEntity(224U);
    msg.setDestination(34402U);
    msg.setDestinationEntity(225U);
    msg.tx = 219U;
    msg.channel = 70U;
    msg.timer = 20940U;

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
    msg.setTimeStamp(0.10256856413);
    msg.setSource(34667U);
    msg.setSourceEntity(219U);
    msg.setDestination(26513U);
    msg.setDestinationEntity(233U);
    msg.tx = 41U;
    msg.channel = 127U;
    msg.timer = 60450U;

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
    msg.setTimeStamp(0.135814878898);
    msg.setSource(60246U);
    msg.setSourceEntity(88U);
    msg.setDestination(55181U);
    msg.setDestinationEntity(132U);
    msg.tx = 18U;
    msg.channel = 245U;
    msg.timer = 3778U;

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
    msg.setTimeStamp(0.0854295297075);
    msg.setSource(52690U);
    msg.setSourceEntity(165U);
    msg.setDestination(27375U);
    msg.setDestinationEntity(160U);
    msg.beacon.assign("DLLMLPNRFGRDVMYSNMDVSYDQBAFZTODHRUQRWRPIPGVNKKJJKGONUIDUAQDKUDOABGMSWXFTRPQCNVHGZZSPYXLCUZIFHZDSUFNFIWTNWETQCEOVXYSUIPKSYZAYHWXHHYJCQTRZCAWDEKYWGEOMBKEH");
    msg.lat = 0.0812856811916;
    msg.lon = 0.160202065107;
    msg.depth = 0.100085867397;
    msg.query_channel = 12U;
    msg.reply_channel = 201U;
    msg.transponder_delay = 158U;

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
    msg.setTimeStamp(0.24800270953);
    msg.setSource(62909U);
    msg.setSourceEntity(5U);
    msg.setDestination(40335U);
    msg.setDestinationEntity(166U);
    msg.beacon.assign("ALNIVHBHOMFEJFXQGHMSYOTDCNNDNWSOQCSPLAHBETNAREXKRYJZHHLLNGXNWAZMDCIFIFNVPFIFEAYQDPODCSLZTRXVVPJYCJWURXBYGUTETRHMVMGEWFDYZYMVKXKSCKRTQYGGNNBVGQOLEDFDRWZMKGXHQTPBUBFZQMVSLOYJLE");
    msg.lat = 0.760574205029;
    msg.lon = 0.359386752348;
    msg.depth = 0.375633682359;
    msg.query_channel = 7U;
    msg.reply_channel = 145U;
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
    msg.setTimeStamp(0.239644283664);
    msg.setSource(38732U);
    msg.setSourceEntity(159U);
    msg.setDestination(43145U);
    msg.setDestinationEntity(47U);
    msg.beacon.assign("WBGBTIUYKESSMSXPHHSIRUBNDAOGLECKFCXRHSFKILIEUZEOJTEKQSANSURXTNHTMQYINJVKQDJXOVLRRTDROIOHAGNYUSWYZPMEWNVUJZLAWTLEODLYPNINBJFQJGMXTBPOYCTKDDJTHFYHVBALJZDLUUFHCXMOCVFRWOZXGCUWVFBFQZMKPWVNQYJUAFSEGRZGKJWTQAMVNPPDCMCPIVHAEMYPAOLKBGBFWHQGWKIZXXLDGXZZCQ");
    msg.lat = 0.187270919994;
    msg.lon = 0.285749026373;
    msg.depth = 0.459683658112;
    msg.query_channel = 181U;
    msg.reply_channel = 254U;
    msg.transponder_delay = 44U;

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
    msg.setTimeStamp(0.678649876183);
    msg.setSource(15402U);
    msg.setSourceEntity(129U);
    msg.setDestination(38448U);
    msg.setDestinationEntity(254U);
    msg.op = 193U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WYGVZUBQAOUWSXUERFVNNDTFVZYDYPFVHTGTJZLYRGQUEGBRHCAMCIAKPXAAYTEOEUSGYJCCAWFOSZBIEIQVZTKBHSUIVXPLTXLILQIKNSZHVCTWTWAJKILPBVANMHMRDMOGWKCNPJKCHHXXCNWDGDXPNERLIHNFVQI");
    tmp_msg_0.lat = 0.105356530655;
    tmp_msg_0.lon = 0.236538707599;
    tmp_msg_0.depth = 0.0756611095485;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 103U;
    tmp_msg_0.transponder_delay = 147U;
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
    msg.setTimeStamp(0.621311034589);
    msg.setSource(64935U);
    msg.setSourceEntity(158U);
    msg.setDestination(35036U);
    msg.setDestinationEntity(30U);
    msg.op = 146U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IVIEYMKABAXLACRNSVTKWTUDHGFPNLWZZTROLNHDPVPJMEFRCTUFBYDVKUMDQWYSZRVYQAWIONSDQUYQBGECJDURGAAIZGAFPBBOCIQYKNMWTUXHHGZNPCSFGESAO");
    tmp_msg_0.lat = 0.858655421841;
    tmp_msg_0.lon = 0.0133660405033;
    tmp_msg_0.depth = 0.591383700393;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 197U;
    tmp_msg_0.transponder_delay = 50U;
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
    msg.setTimeStamp(0.563334631884);
    msg.setSource(47179U);
    msg.setSourceEntity(81U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(253U);
    msg.op = 11U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CRHOUMJLLRDQCIHHJGNALSBLZGADHGVODOUQOOTFBSJRASOPVNYDZVPFWXCMMIZZGERCNYITUXDUGTZAFTDNSBUCCWOAFNXVPZPMHICADHVKWBLLPHJSEEMZXWKYANCPZWHEKRUEQFRVBSWQPRBQJHEQBIDXSJDCMERKSOUYTKFOTRLLM");
    tmp_msg_0.lat = 0.645895345842;
    tmp_msg_0.lon = 0.727043290072;
    tmp_msg_0.depth = 0.206087168579;
    tmp_msg_0.query_channel = 214U;
    tmp_msg_0.reply_channel = 244U;
    tmp_msg_0.transponder_delay = 111U;
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
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.398479562768);
    msg.setSource(58452U);
    msg.setSourceEntity(233U);
    msg.setDestination(64465U);
    msg.setDestinationEntity(185U);
    msg.address = 117U;

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
    msg.setTimeStamp(0.195234749216);
    msg.setSource(12350U);
    msg.setSourceEntity(166U);
    msg.setDestination(51921U);
    msg.setDestinationEntity(42U);
    msg.address = 109U;

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
    msg.setTimeStamp(0.748895596391);
    msg.setSource(43111U);
    msg.setSourceEntity(33U);
    msg.setDestination(33695U);
    msg.setDestinationEntity(212U);
    msg.address = 155U;

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
    msg.setTimeStamp(0.811504271608);
    msg.setSource(24402U);
    msg.setSourceEntity(119U);
    msg.setDestination(50400U);
    msg.setDestinationEntity(97U);
    msg.address = 174U;
    msg.status = 145U;
    msg.range = 0.677288245712;

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
    msg.setTimeStamp(0.460238187538);
    msg.setSource(58494U);
    msg.setSourceEntity(89U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(203U);
    msg.address = 71U;
    msg.status = 44U;
    msg.range = 0.868851054693;

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
    msg.setTimeStamp(0.775632404158);
    msg.setSource(53104U);
    msg.setSourceEntity(199U);
    msg.setDestination(54032U);
    msg.setDestinationEntity(60U);
    msg.address = 130U;
    msg.status = 11U;
    msg.range = 0.375178701344;

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
    msg.setTimeStamp(0.4906320364);
    msg.setSource(2837U);
    msg.setSourceEntity(251U);
    msg.setDestination(56658U);
    msg.setDestinationEntity(83U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 62U;
    tmp_msg_0.entities.assign("IUGAKHJJQOSYGOINWDTJSZZXNZCYUYMUMMVLEUEDPYJKRRJWTPLCZWMWOHSIDHDTXCPQNSWUYYDECWNNPVLZOETEOAXEIMTGHPANDFMNXICHCRYQXIBRDOJUMLMZDQKQLZILLFTWGZQMOSBHLZKFQVVVXUBBPXWAARCBNFRQXPEHYZTMJUYAAESJJSV");
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
    msg.setTimeStamp(0.485912399797);
    msg.setSource(9807U);
    msg.setSourceEntity(82U);
    msg.setDestination(55543U);
    msg.setDestinationEntity(54U);
    IMC::AcousticPing tmp_msg_0;
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
    msg.setTimeStamp(0.334990833754);
    msg.setSource(56226U);
    msg.setSourceEntity(208U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(187U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 253U;
    tmp_msg_0.mask = 3917151429U;
    tmp_msg_0.scope_ref = 0.456185777818;
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
    msg.setTimeStamp(0.582437421179);
    msg.setSource(56730U);
    msg.setSourceEntity(204U);
    msg.setDestination(3769U);
    msg.setDestinationEntity(59U);
    msg.enable = 178U;

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
    msg.setTimeStamp(0.858947576515);
    msg.setSource(55994U);
    msg.setSourceEntity(214U);
    msg.setDestination(16744U);
    msg.setDestinationEntity(253U);
    msg.enable = 34U;

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
    msg.setTimeStamp(0.342031184325);
    msg.setSource(59278U);
    msg.setSourceEntity(105U);
    msg.setDestination(9769U);
    msg.setDestinationEntity(203U);
    msg.enable = 137U;

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
    msg.setTimeStamp(0.925116031925);
    msg.setSource(44203U);
    msg.setSourceEntity(104U);
    msg.setDestination(39049U);
    msg.setDestinationEntity(187U);
    msg.summary = 115U;
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
    msg.setTimeStamp(0.472838767048);
    msg.setSource(48685U);
    msg.setSourceEntity(2U);
    msg.setDestination(33308U);
    msg.setDestinationEntity(223U);
    msg.summary = 45U;
    msg.level = 221U;

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
    msg.setTimeStamp(0.40603660798);
    msg.setSource(28383U);
    msg.setSourceEntity(80U);
    msg.setDestination(58229U);
    msg.setDestinationEntity(11U);
    msg.summary = 166U;
    msg.level = 72U;

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
    msg.setTimeStamp(0.545380236656);
    msg.setSource(41736U);
    msg.setSourceEntity(249U);
    msg.setDestination(42044U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.928733481865);
    msg.setSource(47690U);
    msg.setSourceEntity(139U);
    msg.setDestination(32525U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.808506203997);
    msg.setSource(20769U);
    msg.setSourceEntity(221U);
    msg.setDestination(36247U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.0378871986155);
    msg.setSource(28914U);
    msg.setSourceEntity(187U);
    msg.setDestination(38975U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.394549271617);
    msg.setSource(60007U);
    msg.setSourceEntity(132U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.181530943551);
    msg.setSource(28837U);
    msg.setSourceEntity(167U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.380080967809);
    msg.setSource(57072U);
    msg.setSourceEntity(102U);
    msg.setDestination(61914U);
    msg.setDestinationEntity(28U);
    msg.op = 50U;
    msg.system.assign("IADCJWFNAYHRWPOMTWXUYANUYUMBJYPKBVJLLARHDD");
    msg.range = 0.552959370485;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 35U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.548991906428;
    tmp_tmp_msg_0_0.speed_units = 82U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.733505928778;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.648541224375;
    tmp_msg_0.lon = 0.643586949303;
    tmp_msg_0.radius = 0.290447008193;
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
    msg.setTimeStamp(0.82422948715);
    msg.setSource(53517U);
    msg.setSourceEntity(104U);
    msg.setDestination(30248U);
    msg.setDestinationEntity(107U);
    msg.op = 84U;
    msg.system.assign("NVWFFMHMBKRRPSAZBMCIYMMGNEJIIXIRDKZMNIEQAEGYPVSIGRBVVZPGYMEQXLTO");
    msg.range = 0.286545086629;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1897249843U;
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
    msg.setTimeStamp(0.752643624963);
    msg.setSource(623U);
    msg.setSourceEntity(71U);
    msg.setDestination(32019U);
    msg.setDestinationEntity(121U);
    msg.op = 53U;
    msg.system.assign("URKQLRHCSWIFPBIJGSXVTPQTMDYAOIMWFFDYHUJGFWDNBRVVBLWQNFXPPDOSOQVPPXSMUAWGSVEQWTARDKRCUUMHCTLHYJAAXKIELGOOJYHGFPARWCYMEULRHXWNRHDOREZETIZZTPYSLLQPWQSJNDQHCKEUGQAVOGUBONJNYQDTLYG");
    msg.range = 0.844407208246;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 47U;
    tmp_msg_0.x = 0.138989647446;
    tmp_msg_0.y = 0.456473040693;
    tmp_msg_0.z = 0.0378470685988;
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
    msg.setTimeStamp(0.233131624631);
    msg.setSource(61121U);
    msg.setSourceEntity(119U);
    msg.setDestination(43603U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.812820812016);
    msg.setSource(61204U);
    msg.setSourceEntity(183U);
    msg.setDestination(46741U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.36337725453);
    msg.setSource(3366U);
    msg.setSourceEntity(34U);
    msg.setDestination(20215U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.00650626206745);
    msg.setSource(23243U);
    msg.setSourceEntity(16U);
    msg.setDestination(21930U);
    msg.setDestinationEntity(119U);
    msg.list.assign("YBLZMOGREOJINWSBVKWLONYVFYNCQUWXJWEMCDNNFEAPGNGQZRSICUWPAOGINTPZCAEUTSFKZYZTVQKUCXDJXVHCFBKCURQYBJPZIKXVAVQRFALDVTSBJKOJLDSVFQUKFJZMPLDQTYKWPTKDDQKDJOYGRZUMCBMBBSXQPCEABXWPXA");

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
    msg.setTimeStamp(0.144910648924);
    msg.setSource(60275U);
    msg.setSourceEntity(249U);
    msg.setDestination(27179U);
    msg.setDestinationEntity(198U);
    msg.list.assign("RDIOZGTPYJDWRHNTUJBYZQJBBDJWVHHUYOEZOJCLMCLYIMMCOBATJTSDHNWQWXDVGPHGEXFVKUMQQDQSEMIURCTYCFTBOERAJKFSZWHQSAXVAKRNSVLSUXYPTRXCKFNBYDYBUEKIJWRWKAPUINOQLFGZEAPJESGQNRNUGXVNLSPOUIGDDLTTJHZRZOAKWGVLWNKKLQZPVX");

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
    msg.setTimeStamp(0.0894616851437);
    msg.setSource(21543U);
    msg.setSourceEntity(90U);
    msg.setDestination(54199U);
    msg.setDestinationEntity(161U);
    msg.list.assign("XUZYLTEQDGWCJHEZXGUJFAGTOCTPQLSCPONKACSNSPDOUFCWRBRYGVABYYEAQNJBXCQREHKWGMMHWHJTINOMOMMQMBFRIRLBXYPVTBIQVMDUMYEQAOZZDXAVRULRSILHKFMWKCRSBPJCSGHSVOVIUVFVHOZFDDWLKRTUUZYAQJQXOGWKJLFKDFPNGEABYBVHLSPUNCOPZQKCPIXAETLFSNJXNASMVIZITTJWYHZNZYGEJUDIWDDKGHBTLNK");

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
    msg.setTimeStamp(0.444589070604);
    msg.setSource(62461U);
    msg.setSourceEntity(145U);
    msg.setDestination(43290U);
    msg.setDestinationEntity(96U);
    msg.value = -5407;

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
    msg.setTimeStamp(0.868983684364);
    msg.setSource(14444U);
    msg.setSourceEntity(113U);
    msg.setDestination(65414U);
    msg.setDestinationEntity(58U);
    msg.value = -13318;

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
    msg.setTimeStamp(0.374827414825);
    msg.setSource(63585U);
    msg.setSourceEntity(240U);
    msg.setDestination(42190U);
    msg.setDestinationEntity(221U);
    msg.value = -28028;

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
    msg.setTimeStamp(0.955543100512);
    msg.setSource(59729U);
    msg.setSourceEntity(63U);
    msg.setDestination(36075U);
    msg.setDestinationEntity(61U);
    msg.value = 0.0680337203102;

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
    msg.setTimeStamp(0.67610283777);
    msg.setSource(17785U);
    msg.setSourceEntity(97U);
    msg.setDestination(21883U);
    msg.setDestinationEntity(254U);
    msg.value = 0.114374801789;

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
    msg.setTimeStamp(0.449589262917);
    msg.setSource(15966U);
    msg.setSourceEntity(5U);
    msg.setDestination(5166U);
    msg.setDestinationEntity(75U);
    msg.value = 0.82563651464;

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
    msg.setTimeStamp(0.220071833461);
    msg.setSource(10864U);
    msg.setSourceEntity(251U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(166U);
    msg.value = 0.276730579314;

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
    msg.setTimeStamp(0.382860915422);
    msg.setSource(35704U);
    msg.setSourceEntity(154U);
    msg.setDestination(17439U);
    msg.setDestinationEntity(76U);
    msg.value = 0.792365129396;

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
    msg.setTimeStamp(0.314305374539);
    msg.setSource(25185U);
    msg.setSourceEntity(33U);
    msg.setDestination(28199U);
    msg.setDestinationEntity(193U);
    msg.value = 0.807050250179;

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
    msg.setTimeStamp(0.845856624152);
    msg.setSource(55788U);
    msg.setSourceEntity(178U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(156U);
    msg.validity = 45590U;
    msg.type = 200U;
    msg.utc_year = 41126U;
    msg.utc_month = 126U;
    msg.utc_day = 174U;
    msg.utc_time = 0.636840235614;
    msg.lat = 0.106401873582;
    msg.lon = 0.100652193243;
    msg.height = 0.331198384657;
    msg.satellites = 64U;
    msg.cog = 0.216599302986;
    msg.sog = 0.577974203856;
    msg.hdop = 0.0658462055262;
    msg.vdop = 0.783002799759;
    msg.hacc = 0.732109630269;
    msg.vacc = 0.937395684133;

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
    msg.setTimeStamp(0.967489092905);
    msg.setSource(13828U);
    msg.setSourceEntity(122U);
    msg.setDestination(45665U);
    msg.setDestinationEntity(121U);
    msg.validity = 30068U;
    msg.type = 25U;
    msg.utc_year = 60723U;
    msg.utc_month = 195U;
    msg.utc_day = 89U;
    msg.utc_time = 0.372600927516;
    msg.lat = 0.510313196203;
    msg.lon = 0.993369317067;
    msg.height = 0.276677510518;
    msg.satellites = 183U;
    msg.cog = 0.124169514777;
    msg.sog = 0.831139310454;
    msg.hdop = 0.282142320457;
    msg.vdop = 0.20409210748;
    msg.hacc = 0.884533124263;
    msg.vacc = 0.390044265485;

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
    msg.setTimeStamp(0.0707132302694);
    msg.setSource(39687U);
    msg.setSourceEntity(201U);
    msg.setDestination(26873U);
    msg.setDestinationEntity(70U);
    msg.validity = 6581U;
    msg.type = 13U;
    msg.utc_year = 32775U;
    msg.utc_month = 143U;
    msg.utc_day = 193U;
    msg.utc_time = 0.738653180839;
    msg.lat = 0.452435222137;
    msg.lon = 0.976848794527;
    msg.height = 0.408014172062;
    msg.satellites = 50U;
    msg.cog = 0.868383363903;
    msg.sog = 0.545076761027;
    msg.hdop = 0.584516131476;
    msg.vdop = 0.633030299008;
    msg.hacc = 0.571883739188;
    msg.vacc = 0.48106833209;

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
    msg.setTimeStamp(0.219127154932);
    msg.setSource(31616U);
    msg.setSourceEntity(184U);
    msg.setDestination(45917U);
    msg.setDestinationEntity(22U);
    msg.time = 0.654907846045;
    msg.phi = 0.687956557407;
    msg.theta = 0.97137101049;
    msg.psi = 0.628035141291;
    msg.psi_magnetic = 0.685947503709;

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
    msg.setTimeStamp(0.427376190724);
    msg.setSource(57129U);
    msg.setSourceEntity(142U);
    msg.setDestination(22194U);
    msg.setDestinationEntity(78U);
    msg.time = 0.0885888228907;
    msg.phi = 0.440249402513;
    msg.theta = 0.812768323834;
    msg.psi = 0.977633455363;
    msg.psi_magnetic = 0.839399455727;

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
    msg.setTimeStamp(0.766937389465);
    msg.setSource(5100U);
    msg.setSourceEntity(178U);
    msg.setDestination(21380U);
    msg.setDestinationEntity(127U);
    msg.time = 0.883338157894;
    msg.phi = 0.585559525734;
    msg.theta = 0.0138777160391;
    msg.psi = 0.122461132958;
    msg.psi_magnetic = 0.746051217493;

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
    msg.setTimeStamp(0.0867587490529);
    msg.setSource(4658U);
    msg.setSourceEntity(14U);
    msg.setDestination(27257U);
    msg.setDestinationEntity(61U);
    msg.time = 0.392574357728;
    msg.x = 0.152185934856;
    msg.y = 0.882668568353;
    msg.z = 0.0818236066292;
    msg.timestep = 0.47726988317;

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
    msg.setTimeStamp(0.0993839277552);
    msg.setSource(39203U);
    msg.setSourceEntity(229U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(217U);
    msg.time = 0.111849722935;
    msg.x = 0.114088203789;
    msg.y = 0.840587707954;
    msg.z = 0.00897576524997;
    msg.timestep = 0.885640149914;

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
    msg.setTimeStamp(0.422605054163);
    msg.setSource(31370U);
    msg.setSourceEntity(165U);
    msg.setDestination(62722U);
    msg.setDestinationEntity(187U);
    msg.time = 0.938885389403;
    msg.x = 0.295736655368;
    msg.y = 0.987976144387;
    msg.z = 0.319636476823;
    msg.timestep = 0.732933392888;

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
    msg.setTimeStamp(0.032223492697);
    msg.setSource(38974U);
    msg.setSourceEntity(169U);
    msg.setDestination(61743U);
    msg.setDestinationEntity(59U);
    msg.time = 0.982409851548;
    msg.x = 0.581871517728;
    msg.y = 0.799511750823;
    msg.z = 0.769504467002;

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
    msg.setTimeStamp(0.00325965606502);
    msg.setSource(28427U);
    msg.setSourceEntity(130U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(246U);
    msg.time = 0.94606355774;
    msg.x = 0.93849350825;
    msg.y = 0.3129516574;
    msg.z = 0.877498722946;

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
    msg.setTimeStamp(0.444255034524);
    msg.setSource(25700U);
    msg.setSourceEntity(99U);
    msg.setDestination(2432U);
    msg.setDestinationEntity(215U);
    msg.time = 0.774038733774;
    msg.x = 0.0879369968496;
    msg.y = 0.52100359845;
    msg.z = 0.0261672679127;

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
    msg.setTimeStamp(0.288567069842);
    msg.setSource(4010U);
    msg.setSourceEntity(66U);
    msg.setDestination(61587U);
    msg.setDestinationEntity(188U);
    msg.time = 0.840246793338;
    msg.x = 0.669402111079;
    msg.y = 0.0901659278551;
    msg.z = 0.557888220641;

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
    msg.setTimeStamp(0.0482804919244);
    msg.setSource(5173U);
    msg.setSourceEntity(171U);
    msg.setDestination(24505U);
    msg.setDestinationEntity(12U);
    msg.time = 0.728206914087;
    msg.x = 0.501807938031;
    msg.y = 0.42072942643;
    msg.z = 0.780197640063;

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
    msg.setTimeStamp(0.594176044995);
    msg.setSource(49415U);
    msg.setSourceEntity(190U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(42U);
    msg.time = 0.678501864349;
    msg.x = 0.27745785895;
    msg.y = 0.0365280377361;
    msg.z = 0.00746614864611;

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
    msg.setTimeStamp(0.521092771871);
    msg.setSource(7460U);
    msg.setSourceEntity(220U);
    msg.setDestination(40559U);
    msg.setDestinationEntity(31U);
    msg.time = 0.411022048584;
    msg.x = 0.797434604968;
    msg.y = 0.0840388871289;
    msg.z = 0.233857879133;

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
    msg.setTimeStamp(0.40541979144);
    msg.setSource(63834U);
    msg.setSourceEntity(69U);
    msg.setDestination(23774U);
    msg.setDestinationEntity(239U);
    msg.time = 0.577436449726;
    msg.x = 0.732275696636;
    msg.y = 0.930826911602;
    msg.z = 0.485108671094;

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
    msg.setTimeStamp(0.553051809223);
    msg.setSource(27291U);
    msg.setSourceEntity(31U);
    msg.setDestination(40576U);
    msg.setDestinationEntity(87U);
    msg.time = 0.658203306771;
    msg.x = 0.740221219884;
    msg.y = 0.391567081926;
    msg.z = 0.916333931152;

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
    msg.setTimeStamp(0.46342590333);
    msg.setSource(30819U);
    msg.setSourceEntity(202U);
    msg.setDestination(41781U);
    msg.setDestinationEntity(192U);
    msg.validity = 198U;
    msg.x = 0.934780807623;
    msg.y = 0.892698916357;
    msg.z = 0.465271285283;

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
    msg.setTimeStamp(0.912733717141);
    msg.setSource(54766U);
    msg.setSourceEntity(182U);
    msg.setDestination(630U);
    msg.setDestinationEntity(14U);
    msg.validity = 29U;
    msg.x = 0.100239613051;
    msg.y = 0.563990583626;
    msg.z = 0.653282203629;

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
    msg.setTimeStamp(0.794148128111);
    msg.setSource(29686U);
    msg.setSourceEntity(192U);
    msg.setDestination(29205U);
    msg.setDestinationEntity(204U);
    msg.validity = 165U;
    msg.x = 0.495001361252;
    msg.y = 0.332675343748;
    msg.z = 0.792298203627;

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
    msg.setTimeStamp(0.197761141089);
    msg.setSource(48252U);
    msg.setSourceEntity(30U);
    msg.setDestination(38921U);
    msg.setDestinationEntity(127U);
    msg.validity = 134U;
    msg.x = 0.341933582041;
    msg.y = 0.359314484828;
    msg.z = 0.505785850997;

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
    msg.setTimeStamp(0.0427526382606);
    msg.setSource(41235U);
    msg.setSourceEntity(1U);
    msg.setDestination(27959U);
    msg.setDestinationEntity(228U);
    msg.validity = 51U;
    msg.x = 0.828660509437;
    msg.y = 0.732526430539;
    msg.z = 0.941074443892;

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
    msg.setTimeStamp(0.306514489992);
    msg.setSource(22820U);
    msg.setSourceEntity(90U);
    msg.setDestination(48292U);
    msg.setDestinationEntity(110U);
    msg.validity = 219U;
    msg.x = 0.0461774136452;
    msg.y = 0.538173030774;
    msg.z = 0.629649335944;

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
    msg.setTimeStamp(0.550032027257);
    msg.setSource(41439U);
    msg.setSourceEntity(96U);
    msg.setDestination(6736U);
    msg.setDestinationEntity(135U);
    msg.time = 0.471340998174;
    msg.x = 0.698158633403;
    msg.y = 0.778393802538;
    msg.z = 0.616485722115;

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
    msg.setTimeStamp(0.554286318818);
    msg.setSource(63038U);
    msg.setSourceEntity(16U);
    msg.setDestination(42667U);
    msg.setDestinationEntity(150U);
    msg.time = 0.501740210069;
    msg.x = 0.850545317706;
    msg.y = 0.771197928984;
    msg.z = 0.84351798481;

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
    msg.setTimeStamp(0.944409011249);
    msg.setSource(24357U);
    msg.setSourceEntity(189U);
    msg.setDestination(19215U);
    msg.setDestinationEntity(186U);
    msg.time = 0.0561644563947;
    msg.x = 0.348041997543;
    msg.y = 0.401797890201;
    msg.z = 0.666640908801;

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
    msg.setTimeStamp(0.515485635793);
    msg.setSource(51158U);
    msg.setSourceEntity(230U);
    msg.setDestination(60912U);
    msg.setDestinationEntity(226U);
    msg.validity = 144U;
    msg.value = 0.408646272149;

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
    msg.setTimeStamp(0.158490333457);
    msg.setSource(33931U);
    msg.setSourceEntity(227U);
    msg.setDestination(51140U);
    msg.setDestinationEntity(21U);
    msg.validity = 75U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.403507093161;
    tmp_msg_0.beam_height = 0.197588581467;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.415601197237;

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
    msg.setTimeStamp(0.774164931357);
    msg.setSource(64824U);
    msg.setSourceEntity(227U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(166U);
    msg.validity = 158U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.753635883293;
    tmp_msg_0.beam_height = 0.804830401795;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.560656666755;

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
    msg.setTimeStamp(0.570796461867);
    msg.setSource(30610U);
    msg.setSourceEntity(71U);
    msg.setDestination(58629U);
    msg.setDestinationEntity(180U);
    msg.value = 0.841219135349;

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
    msg.setTimeStamp(0.257077168763);
    msg.setSource(52354U);
    msg.setSourceEntity(74U);
    msg.setDestination(60497U);
    msg.setDestinationEntity(204U);
    msg.value = 0.784998042166;

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
    msg.setTimeStamp(0.975622132584);
    msg.setSource(9605U);
    msg.setSourceEntity(233U);
    msg.setDestination(26311U);
    msg.setDestinationEntity(125U);
    msg.value = 0.866344159408;

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
    msg.setTimeStamp(0.816101036822);
    msg.setSource(43235U);
    msg.setSourceEntity(137U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(1U);
    msg.value = 0.253953206339;

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
    msg.setTimeStamp(0.936359724032);
    msg.setSource(10873U);
    msg.setSourceEntity(67U);
    msg.setDestination(30956U);
    msg.setDestinationEntity(123U);
    msg.value = 0.918033900841;

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
    msg.setTimeStamp(0.851327079199);
    msg.setSource(15141U);
    msg.setSourceEntity(123U);
    msg.setDestination(38522U);
    msg.setDestinationEntity(166U);
    msg.value = 0.544599087014;

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
    msg.setTimeStamp(0.0279538655228);
    msg.setSource(49236U);
    msg.setSourceEntity(214U);
    msg.setDestination(34050U);
    msg.setDestinationEntity(186U);
    msg.value = 0.666171702746;

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
    msg.setTimeStamp(0.871853209617);
    msg.setSource(4777U);
    msg.setSourceEntity(246U);
    msg.setDestination(63547U);
    msg.setDestinationEntity(63U);
    msg.value = 0.0371940792727;

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
    msg.setTimeStamp(0.151356849577);
    msg.setSource(36618U);
    msg.setSourceEntity(38U);
    msg.setDestination(53206U);
    msg.setDestinationEntity(35U);
    msg.value = 0.251728817265;

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
    msg.setTimeStamp(0.574013472309);
    msg.setSource(24184U);
    msg.setSourceEntity(24U);
    msg.setDestination(55238U);
    msg.setDestinationEntity(32U);
    msg.value = 0.496989496612;

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
    msg.setTimeStamp(0.156675516574);
    msg.setSource(8092U);
    msg.setSourceEntity(184U);
    msg.setDestination(64161U);
    msg.setDestinationEntity(226U);
    msg.value = 0.211481394458;

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
    msg.setTimeStamp(0.701779816706);
    msg.setSource(46073U);
    msg.setSourceEntity(0U);
    msg.setDestination(42257U);
    msg.setDestinationEntity(6U);
    msg.value = 0.157473313707;

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
    msg.setTimeStamp(0.837237754828);
    msg.setSource(46311U);
    msg.setSourceEntity(107U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(254U);
    msg.value = 0.0101944633089;

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
    msg.setTimeStamp(0.0211057343923);
    msg.setSource(56562U);
    msg.setSourceEntity(142U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(243U);
    msg.value = 0.836301852202;

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
    msg.setTimeStamp(0.636040060762);
    msg.setSource(65235U);
    msg.setSourceEntity(71U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(43U);
    msg.value = 0.259536070349;

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
    msg.setTimeStamp(0.156250304947);
    msg.setSource(42656U);
    msg.setSourceEntity(170U);
    msg.setDestination(63764U);
    msg.setDestinationEntity(118U);
    msg.value = 0.779697747628;

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
    msg.setTimeStamp(0.742905225596);
    msg.setSource(59075U);
    msg.setSourceEntity(50U);
    msg.setDestination(6522U);
    msg.setDestinationEntity(82U);
    msg.value = 0.122951878417;

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
    msg.setTimeStamp(0.0812676825831);
    msg.setSource(42182U);
    msg.setSourceEntity(210U);
    msg.setDestination(20107U);
    msg.setDestinationEntity(182U);
    msg.value = 0.706903361611;

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
    msg.setTimeStamp(0.693687444907);
    msg.setSource(34884U);
    msg.setSourceEntity(11U);
    msg.setDestination(38002U);
    msg.setDestinationEntity(149U);
    msg.value = 0.0610162016277;

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
    msg.setTimeStamp(0.550214374723);
    msg.setSource(45924U);
    msg.setSourceEntity(135U);
    msg.setDestination(29932U);
    msg.setDestinationEntity(116U);
    msg.value = 0.812826455627;

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
    msg.setTimeStamp(0.694923636475);
    msg.setSource(36847U);
    msg.setSourceEntity(123U);
    msg.setDestination(59024U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0424627350489;

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
    msg.setTimeStamp(0.128886437859);
    msg.setSource(11637U);
    msg.setSourceEntity(200U);
    msg.setDestination(50319U);
    msg.setDestinationEntity(164U);
    msg.value = 0.914443746241;

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
    msg.setTimeStamp(0.828479112649);
    msg.setSource(55747U);
    msg.setSourceEntity(18U);
    msg.setDestination(38242U);
    msg.setDestinationEntity(11U);
    msg.value = 0.550114761704;

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
    msg.setTimeStamp(0.474677809871);
    msg.setSource(56218U);
    msg.setSourceEntity(97U);
    msg.setDestination(40159U);
    msg.setDestinationEntity(77U);
    msg.value = 0.439383209704;

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
    msg.setTimeStamp(0.784969723521);
    msg.setSource(5743U);
    msg.setSourceEntity(212U);
    msg.setDestination(29798U);
    msg.setDestinationEntity(165U);
    msg.direction = 0.599550897551;
    msg.speed = 0.805589732325;

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
    msg.setTimeStamp(0.520230315279);
    msg.setSource(285U);
    msg.setSourceEntity(216U);
    msg.setDestination(21998U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.188052714374;
    msg.speed = 0.227422227348;

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
    msg.setTimeStamp(0.708015331957);
    msg.setSource(38662U);
    msg.setSourceEntity(27U);
    msg.setDestination(37028U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.559838796113;
    msg.speed = 0.785608822066;

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
    msg.setTimeStamp(0.853558298901);
    msg.setSource(13142U);
    msg.setSourceEntity(211U);
    msg.setDestination(51834U);
    msg.setDestinationEntity(23U);
    msg.value = 0.515099563136;

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
    msg.setTimeStamp(0.406201040662);
    msg.setSource(33101U);
    msg.setSourceEntity(51U);
    msg.setDestination(53792U);
    msg.setDestinationEntity(146U);
    msg.value = 0.799458855121;

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
    msg.setTimeStamp(0.405590152931);
    msg.setSource(10149U);
    msg.setSourceEntity(231U);
    msg.setDestination(6574U);
    msg.setDestinationEntity(52U);
    msg.value = 0.337977289617;

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
    msg.setTimeStamp(0.544409099666);
    msg.setSource(21529U);
    msg.setSourceEntity(26U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(211U);
    msg.value.assign("LXLQHDQDBPLPWJJNCKKPQVQUYJEKZOWEVMGVTIREZYWGVLCFORCWHQSWIQFEQOBCBIVNSZHTCDYCYBPEATOXJUFTPBQKSKUOWTGUEZSRZISUC");

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
    msg.setTimeStamp(0.609352222672);
    msg.setSource(25591U);
    msg.setSourceEntity(146U);
    msg.setDestination(943U);
    msg.setDestinationEntity(25U);
    msg.value.assign("DYXBDTUAXCMZJEFBASKOYWFIQRFCMTVFNYHMABVSHAGRMSSJKACILYDAZOZORWCAMMQGOTQCSBRKYYHBIHESOLINPNAQUWRZIEUMDVDTD");

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
    msg.setTimeStamp(0.776402750699);
    msg.setSource(19402U);
    msg.setSourceEntity(164U);
    msg.setDestination(4482U);
    msg.setDestinationEntity(188U);
    msg.value.assign("VQJTVSIVXPJIXSEZTFYNEMRCAHQQFUWFZMWGAJFPDVKZAJPQDJCWNWGMNGLGGMHURQILHMSOICBXUYEDNSSZAH");

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
    msg.setTimeStamp(0.340454073262);
    msg.setSource(48985U);
    msg.setSourceEntity(180U);
    msg.setDestination(52604U);
    msg.setDestinationEntity(11U);
    const char tmp_msg_0[] = {89, 16, -74, -90, 86, 49, 75, -95, 46, -111, -26, -67, 23, -18, 43, -91, 47, 80, 31, -73, 71, 84, 64, -32, -44, -61, -95, -119, -46, 115, -44, -27, 126, 85, -11, 9, 82, 90, -77, 5, 80, -43, 97, -126, 41, 52, 23, -58, -65, -126, 101, 55, 34, 58, 7, -37, 26, -64, 27, -62, 21, -86, 63, 9, 82, -32, -18, -125, 96, 7, 7, 25, 101, -21, -42, -89, 39, 50, -94, -56, -84, 42, -20, -68, 47, 29, -101, 7, -36, -114, 94, -67, 60, -8, -34, -70, 123, 126, 50, -65, -127, -63, 72, 51, -59, -38, 115, -79, 26, 104, -56, 14, -27, 39, -80, -111, -57, 78, -119, -15, -123, -69, -28, -86, 88, -46, 11, -115, 118, -102, 48, 82, 103, 87, 59, 32, -96, 67, -11, 14, 23, 83, -79, -60, 57, 116, -89, 76, -34, 77, -122, -108, -77, -25, 65, 25, -101, -38, 77, -13, 82, 16, -55, -107, 29, -39, 30, 62, -41, -26, -22, 97, 43, -115, 89, -86, -20, 38, 114, 94, 1, -103, -54, 92, -61, -113, -96};
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
    msg.setTimeStamp(0.700255041266);
    msg.setSource(61536U);
    msg.setSourceEntity(36U);
    msg.setDestination(26526U);
    msg.setDestinationEntity(23U);
    const char tmp_msg_0[] = {56, 55, 123, 14, 90, 45, 49, 61, -66, -32, -93, -108, 47, -60, -77, 73, 6, 57, 33, 48, -116, -33, -70, -14, -33, 37, -30, -97, -128, -54, 2, 2, -45, -106, -27, 121, -55, -111, 119, 58, 0, 56, -11, 71, -83, -104, -60, 5, 113, 0, -71, 9, -124, 74, 39, -125, -7, 92, -127, -32, 107, 28, 108, -23, 80, 71, 102, -103, 103, -94, -20, -52, -20, 102, 11, 37, 37, -37, 37, -14, -108, 86, -84, -38, -89, -67, 92, -56, 112, 56, 35, -24, -127, 40, 51, 57, -11, -48, 107, 77, 6, 2, 90, 15, -44, -18, -110, -128, 45, 30, 42, -110, 125, -25, -10, 105, -66, 63, -98, 47, 10, -57, -113, 97, 124, 94, -108, -21, -20, -78, -17, -2, -76, 70, -95, -42, 69, -74, 105, 78, -103, 108, 98, -40, 59, 19, 125, -92, 43, -56, -20, -102, -110, 9, -94, 37, 100, 78, 105, -115, -51, 20, -62, 92, -33, 18, 63, -126, 111, -30, -115, 52, -37, -52, -24, 60, -82, 118, 64, -115, -63, 42, -123, -83, -121, -121, 26, 37, -50, 13, 27, 122, 12};
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
    msg.setTimeStamp(0.532642183312);
    msg.setSource(14149U);
    msg.setSourceEntity(173U);
    msg.setDestination(18341U);
    msg.setDestinationEntity(211U);
    const char tmp_msg_0[] = {-39, 92, 117, 99, 21, -98, 76, 2, -122, 41, 20, -103, 53, 83, -109, -95, 83, 2, -39, -41, 82, -22, -117, -106, 112, 73, 24, -62, -48, -35, 29, -88, -101, 68, 107, -17, 67, 119, -104, -62, 44, 28, 66, 8, -50, -61, -84, 121, -99, 67, 33, 79, 2, -47, -127, 113, 25, 100, 120, -24, 27, 118, 17, -30, -78, -106, -22, 62, -84, 8, 116, 97, -108, 51, -32, 114, 31, -48, -14, 17};
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
    msg.setTimeStamp(0.544590782991);
    msg.setSource(24630U);
    msg.setSourceEntity(184U);
    msg.setDestination(16827U);
    msg.setDestinationEntity(26U);
    msg.frequency = 4077909948U;
    msg.min_range = 14870U;
    msg.max_range = 11825U;

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
    msg.setTimeStamp(0.313324940321);
    msg.setSource(51U);
    msg.setSourceEntity(135U);
    msg.setDestination(3430U);
    msg.setDestinationEntity(10U);
    msg.frequency = 3548990457U;
    msg.min_range = 36422U;
    msg.max_range = 28538U;

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
    msg.setTimeStamp(0.330944994889);
    msg.setSource(64465U);
    msg.setSourceEntity(226U);
    msg.setDestination(27583U);
    msg.setDestinationEntity(179U);
    msg.frequency = 3128344131U;
    msg.min_range = 9422U;
    msg.max_range = 48638U;

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
    msg.setTimeStamp(0.294419987405);
    msg.setSource(3719U);
    msg.setSourceEntity(86U);
    msg.setDestination(18912U);
    msg.setDestinationEntity(96U);
    msg.type = 21U;
    msg.frequency = 881756806U;
    msg.min_range = 50210U;
    msg.max_range = 16784U;
    msg.bits_per_point = 146U;
    msg.scale_factor = 0.623651690412;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.112487253851;
    tmp_msg_0.beam_height = 0.128797113648;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {105, -86, -2, -38, 82, -79, -75, -97, 44, 85, 98, 12, 63, 22, 101, 106, 39, 111, -17, 12, -116, -66, 93, 60, 70, -24, 118, -92, -47, 36, 95, 107, 90, -44, -18, 68, 107, -5, 64, 94, -119, -52, -14, -75};
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
    msg.setTimeStamp(0.502387534928);
    msg.setSource(3154U);
    msg.setSourceEntity(219U);
    msg.setDestination(19840U);
    msg.setDestinationEntity(50U);
    msg.type = 116U;
    msg.frequency = 1182594449U;
    msg.min_range = 12880U;
    msg.max_range = 51947U;
    msg.bits_per_point = 62U;
    msg.scale_factor = 0.230401752052;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.409200261069;
    tmp_msg_0.beam_height = 0.566544473162;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {37, -48, 115, -57, 82, -34, 36, -115, -54, 12, -5, 79, -8, 0, -57, -38, 24, -20, 83, -13, -23, 88, 71, 119, 110, -51, -16, 114, -2, 120, -89, 49, 101, -55, -113, -19, 59, -24, -112, 25, 119, -49, -118, -43, 14, -86, -89, 12, 69, -22, -102, 5, 3, -7, -101};
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
    msg.setTimeStamp(0.391305824249);
    msg.setSource(11431U);
    msg.setSourceEntity(182U);
    msg.setDestination(46618U);
    msg.setDestinationEntity(10U);
    msg.type = 189U;
    msg.frequency = 2327619726U;
    msg.min_range = 6448U;
    msg.max_range = 57388U;
    msg.bits_per_point = 124U;
    msg.scale_factor = 0.49398970627;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.298650565766;
    tmp_msg_0.beam_height = 0.241546632621;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {103, 83, 12, -13, -42, -20, -69, -51, 58, -75, -96, -57, 39, 26, 21, 87, 25, 54, -118, -13, -97, -58, -88, 5, 71, 77, 6, 26, -47, -44, 103, -88, 51, -69, 40, 30, -97, 116, -43, -87, 86, 97, -57, -55, -30, 28, -59, 101, -69, -32, 96, -6, 79, 111, 89, 110, 101, 71, -102, 84, 44, 5, 73, 12, -29, -6, 113, 36, -66, -79, -18, 104, -49, 58, 44, 19, -16, 76, -79, 54, 48, 75, -100, 125, -100, 97, -22, -29, -78, 86, 24, 125, 97, 2, -88, -70, 33, 77, 98, -58, -94, -81, -77, 43, -87, -123, -100, 41, -1, -2, 38, -14, 74, -14, 66, -127, -38, 69, 83, -36, 6, -111, 102, 88, 22, 74, 19, -116, -32, -108, -18, -109, -126, 113, 75, -128, -126, 42, -93, 72, -102, 30, -74, -72, -11, -50, 116, 33, -11, 46, 73, -125, 104, 40, 0, 71, -104, -14, -64, -23, 94, 20, 31, 21, 78, -42, 23, -115, -107, 93, -91, 20, 45, 18, -19, -59, 99, -16, -86, -127, -32, 16, 69, 64, 111, 98, 31, 104, -29, 122, 63, -7, -76, -102, -73, -15, -106, 80, 86, -13, -6, -94, 51, 0, -110, -38, -48, -123, -92, -50, 42, -67, 53};
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
    msg.setTimeStamp(0.179563809676);
    msg.setSource(3324U);
    msg.setSourceEntity(83U);
    msg.setDestination(35519U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.327380995511);
    msg.setSource(31639U);
    msg.setSourceEntity(206U);
    msg.setDestination(15652U);
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
    msg.setTimeStamp(0.508947528574);
    msg.setSource(25090U);
    msg.setSourceEntity(245U);
    msg.setDestination(65374U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.023918206985);
    msg.setSource(13032U);
    msg.setSourceEntity(173U);
    msg.setDestination(25730U);
    msg.setDestinationEntity(193U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.752610276951);
    msg.setSource(26570U);
    msg.setSourceEntity(107U);
    msg.setDestination(27894U);
    msg.setDestinationEntity(236U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.449313077983);
    msg.setSource(42497U);
    msg.setSourceEntity(227U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(32U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.789119710607);
    msg.setSource(18048U);
    msg.setSourceEntity(63U);
    msg.setDestination(56242U);
    msg.setDestinationEntity(44U);
    msg.value = 0.83136434093;
    msg.confidence = 0.0583343462415;
    msg.opmodes.assign("LYVKEFPWOBXZKYURZWLACATHHDVWVBZCFCGIHXJWNEXXEQXPDSIHRXGGEMZTGLSRNUXUGCRTGFAEQUJEENINEWCSAOWKAMZNCHCUNQYSBIIRUNBKNIHPZJFQWTLCQVXYVEUPVUBTZYVJRMMALBOPRTTJIHVLOXGDXKMJB");

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
    msg.setTimeStamp(0.657406684559);
    msg.setSource(27189U);
    msg.setSourceEntity(120U);
    msg.setDestination(36237U);
    msg.setDestinationEntity(6U);
    msg.value = 0.965789427018;
    msg.confidence = 0.831497133397;
    msg.opmodes.assign("GOZUJIAQWUKFATTOEWMZFKCMIQYBZTHWKAFDRCMPHJTHCCVCWRRSJYGWKGLTNMGKIHWETSAZEIIUAAFPSPAWMIWRHVPCVTSXSIHBREDJFHORSZXFUVRXXXPYQZVGNXQQQGZDZLUHUFIIZJQLXODNBEONWMEPCXXUAOLNFYUYLSBMRNSDHUPOJKVLGOVDYKLHNYZTQVNBNJELJQRCYOVSJEGRBPBPOFLXQGDDFEGMWLBIDV");

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
    msg.setTimeStamp(0.798626974518);
    msg.setSource(52833U);
    msg.setSourceEntity(239U);
    msg.setDestination(2610U);
    msg.setDestinationEntity(162U);
    msg.value = 0.898402870349;
    msg.confidence = 0.59326544743;
    msg.opmodes.assign("KDDQQOKKTSMKRFJMUCZXJPGDRDQFIQKXMKTZZHABOSPAWCVHWLODXBBRBADSSAEMNHBOFHVZGIBKJQLUGYXPTXYZEGMYFZIVBXNWJYJLOLWTHZJIVTDVTBIRACFYNGVMHJYOLSDUEPMWIQEJECHFXSLFEOTCWSFPCFNCLGCUQRZY");

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
    msg.setTimeStamp(0.976897148005);
    msg.setSource(40413U);
    msg.setSourceEntity(35U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(41U);
    msg.itow = 742260242U;
    msg.lat = 0.497374573167;
    msg.lon = 0.421644434285;
    msg.height_ell = 0.0894478392113;
    msg.height_sea = 0.0837877463859;
    msg.hacc = 0.499584350202;
    msg.vacc = 0.811852738626;
    msg.vel_n = 0.705642956838;
    msg.vel_e = 0.438314550067;
    msg.vel_d = 0.477350388502;
    msg.speed = 0.724585197556;
    msg.gspeed = 0.0265133817266;
    msg.heading = 0.12314964267;
    msg.sacc = 0.0780786717279;
    msg.cacc = 0.310120983057;

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
    msg.setTimeStamp(0.226330583377);
    msg.setSource(15261U);
    msg.setSourceEntity(247U);
    msg.setDestination(43845U);
    msg.setDestinationEntity(250U);
    msg.itow = 1973465841U;
    msg.lat = 0.774416974536;
    msg.lon = 0.245418802992;
    msg.height_ell = 0.150099937602;
    msg.height_sea = 0.861741523164;
    msg.hacc = 0.796179294264;
    msg.vacc = 0.794911629623;
    msg.vel_n = 0.0568307347752;
    msg.vel_e = 0.763141117372;
    msg.vel_d = 0.84112750804;
    msg.speed = 0.0941281069402;
    msg.gspeed = 0.677465359188;
    msg.heading = 0.70244493943;
    msg.sacc = 0.775260822694;
    msg.cacc = 0.950787502309;

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
    msg.setTimeStamp(0.536490804957);
    msg.setSource(52178U);
    msg.setSourceEntity(102U);
    msg.setDestination(6154U);
    msg.setDestinationEntity(155U);
    msg.itow = 3120028256U;
    msg.lat = 0.094291186364;
    msg.lon = 0.131401799878;
    msg.height_ell = 0.540043895402;
    msg.height_sea = 0.419097179016;
    msg.hacc = 0.464896817042;
    msg.vacc = 0.741027026503;
    msg.vel_n = 0.938812597683;
    msg.vel_e = 0.120950992189;
    msg.vel_d = 0.408467391471;
    msg.speed = 0.982089936369;
    msg.gspeed = 0.389074218308;
    msg.heading = 0.893146760549;
    msg.sacc = 0.732505561243;
    msg.cacc = 0.0674637208939;

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
    msg.setTimeStamp(0.583075892803);
    msg.setSource(30282U);
    msg.setSourceEntity(185U);
    msg.setDestination(30895U);
    msg.setDestinationEntity(19U);
    msg.id = 45U;
    msg.value = 0.478633270539;

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
    msg.setTimeStamp(0.00207362782022);
    msg.setSource(33988U);
    msg.setSourceEntity(8U);
    msg.setDestination(38579U);
    msg.setDestinationEntity(88U);
    msg.id = 191U;
    msg.value = 0.104902048381;

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
    msg.setTimeStamp(0.938825147965);
    msg.setSource(59744U);
    msg.setSourceEntity(15U);
    msg.setDestination(15142U);
    msg.setDestinationEntity(76U);
    msg.id = 145U;
    msg.value = 0.75764081051;

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
    msg.setTimeStamp(0.198972766719);
    msg.setSource(50214U);
    msg.setSourceEntity(33U);
    msg.setDestination(50542U);
    msg.setDestinationEntity(71U);
    msg.x = 0.358294057155;
    msg.y = 0.057613590621;
    msg.z = 0.963843644035;
    msg.phi = 0.844291763016;
    msg.theta = 0.908218023781;
    msg.psi = 0.437956015311;

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
    msg.setTimeStamp(0.760994312063);
    msg.setSource(7204U);
    msg.setSourceEntity(191U);
    msg.setDestination(40254U);
    msg.setDestinationEntity(10U);
    msg.x = 0.859906203434;
    msg.y = 0.47770783145;
    msg.z = 0.534404665012;
    msg.phi = 0.579510772316;
    msg.theta = 0.61707470435;
    msg.psi = 0.782319091644;

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
    msg.setTimeStamp(0.211364841625);
    msg.setSource(16503U);
    msg.setSourceEntity(164U);
    msg.setDestination(56446U);
    msg.setDestinationEntity(17U);
    msg.x = 0.354858431881;
    msg.y = 0.631475784704;
    msg.z = 0.0892444356704;
    msg.phi = 0.824590036672;
    msg.theta = 0.599009236657;
    msg.psi = 0.573713186983;

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
    msg.setTimeStamp(0.963164796292);
    msg.setSource(38079U);
    msg.setSourceEntity(151U);
    msg.setDestination(18070U);
    msg.setDestinationEntity(157U);
    msg.beam_width = 0.102908651242;
    msg.beam_height = 0.642238465347;

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
    msg.setTimeStamp(0.657507782087);
    msg.setSource(15754U);
    msg.setSourceEntity(132U);
    msg.setDestination(5325U);
    msg.setDestinationEntity(184U);
    msg.beam_width = 0.615105995895;
    msg.beam_height = 0.827281427602;

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
    msg.setTimeStamp(0.742552202288);
    msg.setSource(31956U);
    msg.setSourceEntity(78U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(204U);
    msg.beam_width = 0.560782785736;
    msg.beam_height = 0.568141566313;

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
    msg.setTimeStamp(0.777423210662);
    msg.setSource(29962U);
    msg.setSourceEntity(31U);
    msg.setDestination(39403U);
    msg.setDestinationEntity(36U);
    msg.sane = 74U;

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
    msg.setTimeStamp(0.449017467513);
    msg.setSource(63666U);
    msg.setSourceEntity(4U);
    msg.setDestination(47075U);
    msg.setDestinationEntity(136U);
    msg.sane = 95U;

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
    msg.setTimeStamp(0.372779679497);
    msg.setSource(41147U);
    msg.setSourceEntity(238U);
    msg.setDestination(50007U);
    msg.setDestinationEntity(185U);
    msg.sane = 0U;

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
    msg.setTimeStamp(0.81408359826);
    msg.setSource(1283U);
    msg.setSourceEntity(198U);
    msg.setDestination(49585U);
    msg.setDestinationEntity(68U);
    msg.id = 158U;
    msg.zoom = 216U;
    msg.action = 188U;

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
    msg.setTimeStamp(0.606263185288);
    msg.setSource(60977U);
    msg.setSourceEntity(144U);
    msg.setDestination(42930U);
    msg.setDestinationEntity(124U);
    msg.id = 156U;
    msg.zoom = 164U;
    msg.action = 153U;

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
    msg.setTimeStamp(0.739465756221);
    msg.setSource(51435U);
    msg.setSourceEntity(163U);
    msg.setDestination(54574U);
    msg.setDestinationEntity(112U);
    msg.id = 147U;
    msg.zoom = 27U;
    msg.action = 144U;

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
    msg.setTimeStamp(0.547028177138);
    msg.setSource(45773U);
    msg.setSourceEntity(57U);
    msg.setDestination(20384U);
    msg.setDestinationEntity(232U);
    msg.id = 150U;
    msg.value = 0.104725865782;

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
    msg.setTimeStamp(0.0244019119685);
    msg.setSource(43701U);
    msg.setSourceEntity(150U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(225U);
    msg.id = 225U;
    msg.value = 0.840221539671;

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
    msg.setTimeStamp(0.466999508486);
    msg.setSource(31206U);
    msg.setSourceEntity(65U);
    msg.setDestination(53930U);
    msg.setDestinationEntity(243U);
    msg.id = 5U;
    msg.value = 0.525716727804;

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
    msg.setTimeStamp(0.385242561392);
    msg.setSource(7616U);
    msg.setSourceEntity(158U);
    msg.setDestination(20730U);
    msg.setDestinationEntity(14U);
    msg.id = 214U;
    msg.value = 0.597876848711;

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
    msg.setTimeStamp(0.873350383578);
    msg.setSource(4087U);
    msg.setSourceEntity(163U);
    msg.setDestination(33619U);
    msg.setDestinationEntity(222U);
    msg.id = 84U;
    msg.value = 0.868305292243;

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
    msg.setTimeStamp(0.482011226694);
    msg.setSource(31393U);
    msg.setSourceEntity(121U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(49U);
    msg.id = 202U;
    msg.value = 0.412815384974;

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
    msg.setTimeStamp(0.97270390661);
    msg.setSource(17469U);
    msg.setSourceEntity(120U);
    msg.setDestination(61530U);
    msg.setDestinationEntity(186U);
    msg.id = 40U;
    msg.angle = 0.39733257616;

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
    msg.setTimeStamp(0.881383857769);
    msg.setSource(64459U);
    msg.setSourceEntity(237U);
    msg.setDestination(38023U);
    msg.setDestinationEntity(106U);
    msg.id = 0U;
    msg.angle = 0.348799766136;

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
    msg.setTimeStamp(0.152269269131);
    msg.setSource(53587U);
    msg.setSourceEntity(165U);
    msg.setDestination(51450U);
    msg.setDestinationEntity(209U);
    msg.id = 109U;
    msg.angle = 0.324698396487;

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
    msg.setTimeStamp(0.562624437418);
    msg.setSource(6115U);
    msg.setSourceEntity(219U);
    msg.setDestination(57685U);
    msg.setDestinationEntity(65U);
    msg.op = 123U;
    msg.actions.assign("ZTXQYSQLTBSROWWFNZLWCHADKBABMERBBRVSOSQUHHWQTNERMQMNHCGMGJNVZFUDTUDBNGRKLPTJYGTEYJVDEPLPLTJKKWEOUMWLWDKZQCPYQIGPJDQROJXUTYZXVISBIMNIHVHZXQUZCADGKPOSJIVFXSYSYVZAIZVTAXECQYAVUKAICPMKOUBCMFHRHOWLMSXOZKJGTUGCHRXFYFNDNXDUIALEILCPFHJVAK");

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
    msg.setTimeStamp(0.794059830795);
    msg.setSource(25679U);
    msg.setSourceEntity(110U);
    msg.setDestination(42330U);
    msg.setDestinationEntity(97U);
    msg.op = 146U;
    msg.actions.assign("IDYSBTVYWEPPXCWOIYGUJZDHNXWFMPRNAKRJKNWQIQNVZTKBVZXLXBMQJCYSENGOSOSPQTBSYREFESXHYAKSOIWQQAGITXIGWWAKDBLZUMRGZESYUCCCJNLMBUNFBNRSZHOWFRNDRROHZDTZPFILXHVUHFHDDFCEUJJSKHOTTWXGOETIJGJTFOHMPUFGYUILOGPQYBVKNMCACGXJVUQAKKMLEDQ");

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
    msg.setTimeStamp(0.276319349644);
    msg.setSource(10645U);
    msg.setSourceEntity(115U);
    msg.setDestination(40647U);
    msg.setDestinationEntity(155U);
    msg.op = 99U;
    msg.actions.assign("AYKUGCFLEIQFTDCRHGBDTUJDNXZPFPWLAWHDNISLOGSPSMBXYGCDTIPPEVEGUMRCGJJIUZLNVRHHBBMTOEWRAYXQNRBOWHDMVRJWIHXVNYCZRLXVH");

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
    msg.setTimeStamp(0.945117016557);
    msg.setSource(6878U);
    msg.setSourceEntity(243U);
    msg.setDestination(37511U);
    msg.setDestinationEntity(54U);
    msg.actions.assign("DHGTLRWIHLVDAAWNNSEILJRKNZAXYFPMXJKIYMMOSFLVZUFXDPEDGLTHGXTFYFNZPDOEVKUYPNJPWVOSHFQQOUJSHPVLZIRZCGPXKXLSALBBNTWOSMQGBPKTXUWWOKWTFAKDRMJQNZOHAUORYCNMTCZBQEZWTIRUJDAUVJBNCKRJFATZBJWOHFKB");

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
    msg.setTimeStamp(0.134267979987);
    msg.setSource(40807U);
    msg.setSourceEntity(78U);
    msg.setDestination(60086U);
    msg.setDestinationEntity(78U);
    msg.actions.assign("XCLOQMGHWHNUZKGZWDIMLFAVCSIRIBPRFWVVWHOUHWATRZJCPNFXJJYTSUPQWILVSDXCEDOPSPUFZBCZKCNXHMSFXJSLWIGGFHSTDXBDROOLDKMYQRQKMDEYUMOHFPIZQAJKZLSAYNLMRYQUVUQIGFVBLRBTVJQJZLUGEYYGOTUKABZJWMPXNMANCENH");

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
    msg.setTimeStamp(0.901636658741);
    msg.setSource(17351U);
    msg.setSourceEntity(29U);
    msg.setDestination(57056U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("YGTNVDSOETHSPHQHUKLQDVZLTEEEZMIWFBMCFILBKPCUGLUOAFAZDDZNUTGUNO");

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
    msg.setTimeStamp(0.678034342407);
    msg.setSource(40737U);
    msg.setSourceEntity(116U);
    msg.setDestination(33075U);
    msg.setDestinationEntity(59U);
    msg.button = 223U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.160463623952);
    msg.setSource(54556U);
    msg.setSourceEntity(30U);
    msg.setDestination(37017U);
    msg.setDestinationEntity(254U);
    msg.button = 63U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.0542394393827);
    msg.setSource(49388U);
    msg.setSourceEntity(202U);
    msg.setDestination(20427U);
    msg.setDestinationEntity(22U);
    msg.button = 103U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.671907964715);
    msg.setSource(56042U);
    msg.setSourceEntity(74U);
    msg.setDestination(58882U);
    msg.setDestinationEntity(182U);
    msg.op = 121U;
    msg.text.assign("TXZGCXUCOSVMJLKACYPEIIMMJCZJROOKJXMWMBUMKCAQRHVQXFLZXRSDBBGFQSEBIHELVPEZFWVJVWBGULNHEVLGPNHFICAYBTLQGIZEOFURMOYXQYAPWBKSCDBRYIYJHQKASPRCNDHSTYQMGUPAGNRWKWRCVELUYOKHFNUDQARZKYZIVDQCTZBXPDXOTXZEWSFNN");

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
    msg.setTimeStamp(0.504708397454);
    msg.setSource(24458U);
    msg.setSourceEntity(162U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(201U);
    msg.op = 92U;
    msg.text.assign("IZQXECJOYILJJDEJDEZPQRGYHWSDTDHZNMYZTKEABHHVJVCCBEEKKCXLPAXGXOQHMNUQWSHSUUAORJVSHKYQBMCNIPTIPUPEYFMFSFXRGMTVLETHFMGYOKBSUDUTKVBTTPJXOPUNZGVWNMCPVAARQRXSYZLDTRUJIO");

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
    msg.setTimeStamp(0.0742640519327);
    msg.setSource(18995U);
    msg.setSourceEntity(222U);
    msg.setDestination(57931U);
    msg.setDestinationEntity(152U);
    msg.op = 26U;
    msg.text.assign("OVEVUOWWXSPQXH");

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
    msg.setTimeStamp(0.272305010189);
    msg.setSource(50444U);
    msg.setSourceEntity(113U);
    msg.setDestination(13733U);
    msg.setDestinationEntity(142U);
    msg.op = 215U;
    msg.time_remain = 0.727847970404;
    msg.sched_time = 0.808615091662;

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
    msg.setTimeStamp(0.581980544946);
    msg.setSource(12147U);
    msg.setSourceEntity(221U);
    msg.setDestination(47125U);
    msg.setDestinationEntity(3U);
    msg.op = 170U;
    msg.time_remain = 0.672013152233;
    msg.sched_time = 0.568119988515;

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
    msg.setTimeStamp(0.172548512767);
    msg.setSource(50523U);
    msg.setSourceEntity(28U);
    msg.setDestination(61870U);
    msg.setDestinationEntity(107U);
    msg.op = 236U;
    msg.time_remain = 0.471877045235;
    msg.sched_time = 0.297831826687;

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
    msg.setTimeStamp(0.895449414439);
    msg.setSource(14466U);
    msg.setSourceEntity(187U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(105U);
    msg.name.assign("BRFLRGGFOTXSHJXZKEKBLUXAOILNPCVHJOSESBEDLLAWFULMMJMCNUZMZYLADWQMJNHFPIJRWGMCHQBOPKUJDJIKTAPEUTSUOBQICH");
    msg.op = 40U;
    msg.sched_time = 0.178672553728;

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
    msg.setTimeStamp(0.405939792033);
    msg.setSource(61579U);
    msg.setSourceEntity(222U);
    msg.setDestination(63274U);
    msg.setDestinationEntity(96U);
    msg.name.assign("HYIYKTONCTJOHDWSVQLRMKGZPLIPAFBPUCTSRIREEDWCGRUWXIFLQOCRCNGMEFACZJEJMOOKVSRHTYFNSTUXCQCBYNOMWAQHPEDIKRY");
    msg.op = 238U;
    msg.sched_time = 0.742407762243;

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
    msg.setTimeStamp(0.0224161756858);
    msg.setSource(50774U);
    msg.setSourceEntity(206U);
    msg.setDestination(4910U);
    msg.setDestinationEntity(158U);
    msg.name.assign("XADNAOUUEGVWVNATIBMZENLVREIHOYITLHJZNDGKPYCKORYGTXKGNZAVWMVBQKQPVYMGXCYPQSVDPWHKBPZFFZASBGMTWJUX");
    msg.op = 4U;
    msg.sched_time = 0.535271406496;

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
    msg.setTimeStamp(0.775453865053);
    msg.setSource(14688U);
    msg.setSourceEntity(206U);
    msg.setDestination(34239U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.103870924958);
    msg.setSource(10080U);
    msg.setSourceEntity(232U);
    msg.setDestination(28470U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.33268553569);
    msg.setSource(42382U);
    msg.setSourceEntity(92U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.83870625778);
    msg.setSource(24037U);
    msg.setSourceEntity(137U);
    msg.setDestination(8981U);
    msg.setDestinationEntity(4U);
    msg.name.assign("EJSTUKPSZENGAJJNPQEYPGTWOCRZVVYTYLBHDOFJOTOBBZBHTFFYELVMJEJPUXNSWJJCK");
    msg.state = 200U;

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
    msg.setTimeStamp(0.237741661012);
    msg.setSource(43346U);
    msg.setSourceEntity(46U);
    msg.setDestination(39079U);
    msg.setDestinationEntity(91U);
    msg.name.assign("PANFKEFJEZMQNGCSGDXZTWA");
    msg.state = 139U;

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
    msg.setTimeStamp(0.215026908427);
    msg.setSource(53034U);
    msg.setSourceEntity(60U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(188U);
    msg.name.assign("QWGYERDTNWJQAAGOBWKBKEJTQCVXFWIAUXCZQAMNNIZNUQZQZSOPRJESENKSAZJBYYMDTZKDRYBWDPDMLBOKXBRJIQTTRPNOPACNGY");
    msg.state = 130U;

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
    msg.setTimeStamp(0.261920287041);
    msg.setSource(42192U);
    msg.setSourceEntity(249U);
    msg.setDestination(65525U);
    msg.setDestinationEntity(84U);
    msg.name.assign("YKVRPQSYZGAAAJXNWBBQLFMDYLAHGOZSULJLNNQRITRZVMHKMUKMFEPXCLYIKOIKVDWFJGIUVVXSXDQYWCXSJLUOCDGBFNYLOGPBBPPUOATCNQHHZVVFNCTHZMRZHTQCIEVKAJEGWRVOHTWBPVFDSBXJIAZODIRWAPYTQUTICCERJEEXQFTGG");
    msg.value = 1U;

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
    msg.setTimeStamp(0.576826921288);
    msg.setSource(28203U);
    msg.setSourceEntity(72U);
    msg.setDestination(17568U);
    msg.setDestinationEntity(237U);
    msg.name.assign("AOIKMGTYSEWIRKCRKGVQZEMLRWBQUJMQISORHUOPVHTTOTALFVOTXSKEZXBZVNOEUJYPMXYZOXGSZKCLXTIEHJPIPMXBTINPHCUNKFWJWJNQKBUIBRYCCLWHAWXFNUFBVDGXLEUQYNHKAYJASDHGNPAWPTRGZLOQWZNFOSHQYDHDBGNCTABCWVZPOADRBZPCUEPRGVQKJLGLEMVDBYUSDSFLILMJIDZSEAWCEA");
    msg.value = 25U;

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
    msg.setTimeStamp(0.477342479852);
    msg.setSource(33427U);
    msg.setSourceEntity(71U);
    msg.setDestination(62444U);
    msg.setDestinationEntity(62U);
    msg.name.assign("ZAZPTBARDEMTRDDPEZLQGGIWAUWQCJJNNWNQBEDOWKLBRMALAWGSYRBZRMOGFTZCDGXVCYYPRLHPJESMMJYHBWXHITRBYULUSMAZYTNCHFXXKQKPCWFVDRRIGEDDSPLVIFSSQOGMVCZUXJBJSOXPXCOYGFSOHUFUIKGQEAPDOTFOAEUXXIQFTCZJHDVUTVUQYNHGKPVBNASPQWYLCKKHBXHIUROENMLZSJWL");
    msg.value = 150U;

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
    msg.setTimeStamp(0.0694582292088);
    msg.setSource(42344U);
    msg.setSourceEntity(44U);
    msg.setDestination(27374U);
    msg.setDestinationEntity(165U);
    msg.name.assign("TYBGACNUZRHNBPFFXBXMSLLDNAEWTMALWPJOYOTPOKIDXVBIFGRZANJARENBGNZRQYDEXHBWEDSRKMGCPZQIVEM");

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
    msg.setTimeStamp(0.511003418035);
    msg.setSource(3430U);
    msg.setSourceEntity(6U);
    msg.setDestination(11931U);
    msg.setDestinationEntity(208U);
    msg.name.assign("RMGYZMXKFVNDOYRHNVMQHUCCZKLZEPEWBGQARFEVIXCEYMQDRIYMSUZTCSRFJFFIXGWLIZHNOKYIJXSGUJJZDKHIDXYTOAPSGOSUNJAQYUEWSPACCANHQEEOWYAJURMOSODUISILVBECKPPLQVVRPID");

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
    msg.setTimeStamp(0.316246267196);
    msg.setSource(57557U);
    msg.setSourceEntity(167U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(177U);
    msg.name.assign("KOXTQGMZUSBWTCOXYRBKGOEMIGUNEOFDNXELAIVQBIEGCVSPRANDLXQYZIBMJORBVKYHWBAATWRWTSMLIADKLLDZHVBXOVWPNXRSZXVFWIKAGRPPPMHIWEWYBVSUUKEYXQXCOHJVFZFQNKNMDEALRCHMSRC");

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
    msg.setTimeStamp(0.494719581467);
    msg.setSource(14690U);
    msg.setSourceEntity(243U);
    msg.setDestination(7167U);
    msg.setDestinationEntity(247U);
    msg.name.assign("VROYSBGBLMTAZJSRORMJQKZYEKVX");
    msg.value = 251U;

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
    msg.setTimeStamp(0.404362407722);
    msg.setSource(14320U);
    msg.setSourceEntity(19U);
    msg.setDestination(17759U);
    msg.setDestinationEntity(201U);
    msg.name.assign("TMYSOXRSKYZKQKPNPARVCUGSZOTCBLRMDUFKVUZJTSNVSHDPMTDBKVFQHYDTWYHLXXUH");
    msg.value = 186U;

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
    msg.setTimeStamp(0.421015894291);
    msg.setSource(2120U);
    msg.setSourceEntity(229U);
    msg.setDestination(24518U);
    msg.setDestinationEntity(18U);
    msg.name.assign("HQJZOOYGACNPVUA");
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
    msg.setTimeStamp(0.862915767091);
    msg.setSource(61138U);
    msg.setSourceEntity(121U);
    msg.setDestination(8809U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.000803992745096;
    msg.lon = 0.249817866505;
    msg.height = 0.618329424818;
    msg.x = 0.442548887873;
    msg.y = 0.888664194856;
    msg.z = 0.93512049648;
    msg.phi = 0.471624461262;
    msg.theta = 0.88658424512;
    msg.psi = 0.597525352373;
    msg.u = 0.334518401254;
    msg.v = 0.346437814009;
    msg.w = 0.506452998931;
    msg.vx = 0.685615883874;
    msg.vy = 0.440932468905;
    msg.vz = 0.378067066162;
    msg.p = 0.281016490518;
    msg.q = 0.156851151801;
    msg.r = 0.820465869836;
    msg.depth = 0.216253111069;
    msg.alt = 0.136409071749;

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
    msg.setTimeStamp(0.766782144965);
    msg.setSource(2782U);
    msg.setSourceEntity(54U);
    msg.setDestination(13686U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.700766403021;
    msg.lon = 0.393516259263;
    msg.height = 0.982050302244;
    msg.x = 0.254994734641;
    msg.y = 0.0531273031041;
    msg.z = 0.935494929034;
    msg.phi = 0.906874550916;
    msg.theta = 0.67293034814;
    msg.psi = 0.656590759107;
    msg.u = 0.308084636522;
    msg.v = 0.295082771528;
    msg.w = 0.733916499875;
    msg.vx = 0.972177868543;
    msg.vy = 0.187679074508;
    msg.vz = 0.11067432539;
    msg.p = 0.301968106221;
    msg.q = 0.968787650161;
    msg.r = 0.192270118892;
    msg.depth = 0.25191924098;
    msg.alt = 0.489544542999;

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
    msg.setTimeStamp(0.940177496988);
    msg.setSource(64190U);
    msg.setSourceEntity(205U);
    msg.setDestination(24000U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.687369176591;
    msg.lon = 0.998858173777;
    msg.height = 0.645015490263;
    msg.x = 0.642837223592;
    msg.y = 0.163509329829;
    msg.z = 0.721530276872;
    msg.phi = 0.344222238221;
    msg.theta = 0.263701522731;
    msg.psi = 0.395223365812;
    msg.u = 0.323208483057;
    msg.v = 0.366657998251;
    msg.w = 0.265883908065;
    msg.vx = 0.870919898779;
    msg.vy = 0.76417085468;
    msg.vz = 0.561309544879;
    msg.p = 0.278570853517;
    msg.q = 0.608156941474;
    msg.r = 0.0839990469392;
    msg.depth = 0.157943799613;
    msg.alt = 0.573166811015;

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
    msg.setTimeStamp(0.606516792269);
    msg.setSource(3338U);
    msg.setSourceEntity(99U);
    msg.setDestination(5949U);
    msg.setDestinationEntity(105U);
    msg.x = 0.530651372734;
    msg.y = 0.860590369124;
    msg.z = 0.473795703656;

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
    msg.setTimeStamp(0.544198407424);
    msg.setSource(63193U);
    msg.setSourceEntity(230U);
    msg.setDestination(59213U);
    msg.setDestinationEntity(61U);
    msg.x = 0.612475031553;
    msg.y = 0.994110610127;
    msg.z = 0.441302938763;

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
    msg.setTimeStamp(0.215620396373);
    msg.setSource(29508U);
    msg.setSourceEntity(179U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(161U);
    msg.x = 0.664821326317;
    msg.y = 0.255976733198;
    msg.z = 0.898904381001;

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
    msg.setTimeStamp(0.805374800497);
    msg.setSource(50057U);
    msg.setSourceEntity(162U);
    msg.setDestination(4471U);
    msg.setDestinationEntity(191U);
    msg.value = 0.437754521899;

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
    msg.setTimeStamp(0.890050219319);
    msg.setSource(37517U);
    msg.setSourceEntity(133U);
    msg.setDestination(17631U);
    msg.setDestinationEntity(198U);
    msg.value = 0.509834796735;

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
    msg.setTimeStamp(0.281693997312);
    msg.setSource(62755U);
    msg.setSourceEntity(66U);
    msg.setDestination(55340U);
    msg.setDestinationEntity(59U);
    msg.value = 0.243520887361;

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
    msg.setTimeStamp(0.332101442435);
    msg.setSource(9382U);
    msg.setSourceEntity(112U);
    msg.setDestination(51997U);
    msg.setDestinationEntity(180U);
    msg.value = 0.505400135575;

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
    msg.setTimeStamp(0.0750501766543);
    msg.setSource(39211U);
    msg.setSourceEntity(219U);
    msg.setDestination(36761U);
    msg.setDestinationEntity(119U);
    msg.value = 0.253898195863;

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
    msg.setTimeStamp(0.350943706062);
    msg.setSource(39090U);
    msg.setSourceEntity(254U);
    msg.setDestination(48990U);
    msg.setDestinationEntity(68U);
    msg.value = 0.768900150111;

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
    msg.setTimeStamp(0.334387745195);
    msg.setSource(944U);
    msg.setSourceEntity(75U);
    msg.setDestination(4790U);
    msg.setDestinationEntity(247U);
    msg.x = 0.912922645659;
    msg.y = 0.641930338914;
    msg.z = 0.923059666882;
    msg.phi = 0.887716014323;
    msg.theta = 0.942218444802;
    msg.psi = 0.29846569283;
    msg.p = 0.202543067011;
    msg.q = 0.250237829179;
    msg.r = 0.0724510100003;
    msg.u = 0.388377962692;
    msg.v = 0.181102891993;
    msg.w = 0.341309128242;
    msg.bias_psi = 0.899782081669;
    msg.bias_r = 0.188355801505;

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
    msg.setTimeStamp(0.397928676336);
    msg.setSource(26495U);
    msg.setSourceEntity(103U);
    msg.setDestination(14843U);
    msg.setDestinationEntity(47U);
    msg.x = 0.312880141758;
    msg.y = 0.428626709911;
    msg.z = 0.175773001041;
    msg.phi = 0.962697664357;
    msg.theta = 0.981808517476;
    msg.psi = 0.918667395288;
    msg.p = 0.072373094289;
    msg.q = 0.454658658251;
    msg.r = 0.0398947077693;
    msg.u = 0.839748525018;
    msg.v = 0.458413274912;
    msg.w = 0.0186772048364;
    msg.bias_psi = 0.494062651514;
    msg.bias_r = 0.423858603833;

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
    msg.setTimeStamp(0.304688594113);
    msg.setSource(13586U);
    msg.setSourceEntity(203U);
    msg.setDestination(40347U);
    msg.setDestinationEntity(239U);
    msg.x = 0.624320440783;
    msg.y = 0.807238966337;
    msg.z = 0.188003397789;
    msg.phi = 0.192903539298;
    msg.theta = 0.417593263316;
    msg.psi = 0.866329364576;
    msg.p = 0.436466944077;
    msg.q = 0.858070872546;
    msg.r = 0.441378659828;
    msg.u = 0.505219281565;
    msg.v = 0.196450221395;
    msg.w = 0.0411304896926;
    msg.bias_psi = 0.413233671081;
    msg.bias_r = 0.984749679806;

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
    msg.setTimeStamp(0.951129435237);
    msg.setSource(21129U);
    msg.setSourceEntity(247U);
    msg.setDestination(36405U);
    msg.setDestinationEntity(24U);
    msg.bias_psi = 0.459438465528;
    msg.bias_r = 0.487177458059;
    msg.cog = 0.345600433984;
    msg.cyaw = 0.0606739081507;
    msg.lbl_rej_level = 0.64647202471;
    msg.gps_rej_level = 0.0683622317817;
    msg.custom_x = 0.973245642745;
    msg.custom_y = 0.138227964559;
    msg.custom_z = 0.719566071328;

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
    msg.setTimeStamp(0.0808845481581);
    msg.setSource(30569U);
    msg.setSourceEntity(247U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(214U);
    msg.bias_psi = 0.0915756656151;
    msg.bias_r = 0.48144295363;
    msg.cog = 0.794104964518;
    msg.cyaw = 0.976713403504;
    msg.lbl_rej_level = 0.234058894166;
    msg.gps_rej_level = 0.514181963592;
    msg.custom_x = 0.942822384557;
    msg.custom_y = 0.555185755632;
    msg.custom_z = 0.732165927277;

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
    msg.setTimeStamp(0.0808398580413);
    msg.setSource(33956U);
    msg.setSourceEntity(153U);
    msg.setDestination(65171U);
    msg.setDestinationEntity(141U);
    msg.bias_psi = 0.258632524869;
    msg.bias_r = 0.691680802737;
    msg.cog = 0.817768792532;
    msg.cyaw = 0.45392051218;
    msg.lbl_rej_level = 0.532213224352;
    msg.gps_rej_level = 0.736632654768;
    msg.custom_x = 0.0220564952123;
    msg.custom_y = 0.134897835846;
    msg.custom_z = 0.320580795047;

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
    msg.setTimeStamp(0.00771001522257);
    msg.setSource(7458U);
    msg.setSourceEntity(174U);
    msg.setDestination(59060U);
    msg.setDestinationEntity(116U);
    msg.utc_time = 0.869296993113;
    msg.reason = 93U;

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
    msg.setTimeStamp(0.843423551741);
    msg.setSource(13621U);
    msg.setSourceEntity(160U);
    msg.setDestination(55591U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.326298691406;
    msg.reason = 120U;

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
    msg.setTimeStamp(0.529773842258);
    msg.setSource(19064U);
    msg.setSourceEntity(52U);
    msg.setDestination(41865U);
    msg.setDestinationEntity(239U);
    msg.utc_time = 0.754261905949;
    msg.reason = 248U;

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
    msg.setTimeStamp(0.053447924452);
    msg.setSource(9753U);
    msg.setSourceEntity(152U);
    msg.setDestination(41167U);
    msg.setDestinationEntity(207U);
    msg.id = 56U;
    msg.range = 0.784673750754;
    msg.acceptance = 116U;

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
    msg.setTimeStamp(0.276399680219);
    msg.setSource(25038U);
    msg.setSourceEntity(163U);
    msg.setDestination(31083U);
    msg.setDestinationEntity(173U);
    msg.id = 238U;
    msg.range = 0.854510467723;
    msg.acceptance = 76U;

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
    msg.setTimeStamp(0.561070967157);
    msg.setSource(52823U);
    msg.setSourceEntity(113U);
    msg.setDestination(35258U);
    msg.setDestinationEntity(105U);
    msg.id = 249U;
    msg.range = 0.489916985577;
    msg.acceptance = 156U;

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
    msg.setTimeStamp(0.139106167388);
    msg.setSource(64419U);
    msg.setSourceEntity(0U);
    msg.setDestination(40335U);
    msg.setDestinationEntity(55U);
    msg.type = 77U;
    msg.reason = 46U;
    msg.value = 0.805063338349;
    msg.timestep = 0.956659390335;

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
    msg.setTimeStamp(0.794900163812);
    msg.setSource(42621U);
    msg.setSourceEntity(75U);
    msg.setDestination(6300U);
    msg.setDestinationEntity(44U);
    msg.type = 32U;
    msg.reason = 178U;
    msg.value = 0.918061540174;
    msg.timestep = 0.0622752745759;

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
    msg.setTimeStamp(0.390738695807);
    msg.setSource(16149U);
    msg.setSourceEntity(172U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(41U);
    msg.type = 229U;
    msg.reason = 25U;
    msg.value = 0.286649890133;
    msg.timestep = 0.952672388439;

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
    msg.setTimeStamp(0.10833382423);
    msg.setSource(8039U);
    msg.setSourceEntity(57U);
    msg.setDestination(63768U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.917259069801);
    msg.setSource(26339U);
    msg.setSourceEntity(34U);
    msg.setDestination(8161U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.415477383365);
    msg.setSource(20998U);
    msg.setSourceEntity(73U);
    msg.setDestination(65380U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.323694204984);
    msg.setSource(8023U);
    msg.setSourceEntity(155U);
    msg.setDestination(51982U);
    msg.setDestinationEntity(13U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VVJKVGCZRNGACRNOZGKLKXLSCOIYTPHQZPELCEPDIMRDJBNUCDBDIMTSIHAOATFBIXXOXCTMMHFNUSHYWSPHYDDCLRALBOEEQFWYUZTJKZKAUGIUVMCPDAGNQKHWJSNVCVNIIAXWGRVKRAHKJTPRXIASTZZQPIWETMNBXYQNUFYXJUQFOPOETZCBGGBHJMQUHLBAMYWFGMBMRJYHUBEQVQE");
    tmp_msg_0.lat = 0.381054058385;
    tmp_msg_0.lon = 0.790579369584;
    tmp_msg_0.depth = 0.853996421151;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 139U;
    tmp_msg_0.transponder_delay = 29U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.582970051289;
    msg.y = 0.336100650803;
    msg.var_x = 0.94783446863;
    msg.var_y = 0.189430284606;
    msg.distance = 0.659056720984;

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
    msg.setTimeStamp(0.209140152418);
    msg.setSource(29116U);
    msg.setSourceEntity(98U);
    msg.setDestination(28421U);
    msg.setDestinationEntity(55U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GLXAEGEBDYANZYPVBZGAIYFWAIVHGLXNOHQLJUGTZTJCSHFOUHNXDMLJGMYEHFCSEKBFUIDMAXGFILVHPRJSROITWXAEJLZNCXRVJSZPWSKUVEQRRVYUSMBFRSQ");
    tmp_msg_0.lat = 0.113286436193;
    tmp_msg_0.lon = 0.439735028241;
    tmp_msg_0.depth = 0.820211306055;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 83U;
    tmp_msg_0.transponder_delay = 23U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.691439337905;
    msg.y = 0.0593980223462;
    msg.var_x = 0.369498013676;
    msg.var_y = 0.107245842594;
    msg.distance = 0.550464121312;

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
    msg.setTimeStamp(0.770951001226);
    msg.setSource(27185U);
    msg.setSourceEntity(244U);
    msg.setDestination(10019U);
    msg.setDestinationEntity(149U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CWVVGAWDLQNDTKYOZFXEBHQKZUKBNJPFBUGMQVJIPKUEZL");
    tmp_msg_0.lat = 0.253262188486;
    tmp_msg_0.lon = 0.830180610134;
    tmp_msg_0.depth = 0.322491280433;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 129U;
    tmp_msg_0.transponder_delay = 41U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.827989455053;
    msg.y = 0.197229062054;
    msg.var_x = 0.169154481164;
    msg.var_y = 0.565880833594;
    msg.distance = 0.373440751834;

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
    msg.setTimeStamp(0.0412632367437);
    msg.setSource(16883U);
    msg.setSourceEntity(224U);
    msg.setDestination(25790U);
    msg.setDestinationEntity(9U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.939979052347);
    msg.setSource(62685U);
    msg.setSourceEntity(245U);
    msg.setDestination(19815U);
    msg.setDestinationEntity(20U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.701461564629);
    msg.setSource(33266U);
    msg.setSourceEntity(128U);
    msg.setDestination(55684U);
    msg.setDestinationEntity(117U);
    msg.state = 219U;

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
    msg.setTimeStamp(0.00679458730851);
    msg.setSource(43650U);
    msg.setSourceEntity(234U);
    msg.setDestination(24039U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0402307720173;

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
    msg.setTimeStamp(0.713572480218);
    msg.setSource(44318U);
    msg.setSourceEntity(16U);
    msg.setDestination(9776U);
    msg.setDestinationEntity(189U);
    msg.value = 0.536227734812;

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
    msg.setTimeStamp(0.485667503839);
    msg.setSource(35028U);
    msg.setSourceEntity(166U);
    msg.setDestination(2072U);
    msg.setDestinationEntity(216U);
    msg.value = 0.375609550885;

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
    msg.setTimeStamp(0.196599896543);
    msg.setSource(13292U);
    msg.setSourceEntity(63U);
    msg.setDestination(29800U);
    msg.setDestinationEntity(247U);
    msg.value = 0.245871677812;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.746229257597);
    msg.setSource(51774U);
    msg.setSourceEntity(221U);
    msg.setDestination(53138U);
    msg.setDestinationEntity(123U);
    msg.value = 0.434238060149;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.203350480548);
    msg.setSource(25492U);
    msg.setSourceEntity(72U);
    msg.setDestination(64304U);
    msg.setDestinationEntity(5U);
    msg.value = 0.434754322831;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.265593801541);
    msg.setSource(43373U);
    msg.setSourceEntity(127U);
    msg.setDestination(33328U);
    msg.setDestinationEntity(69U);
    msg.value = 0.64005870415;
    msg.speed_units = 0U;

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
    msg.setTimeStamp(0.593796476777);
    msg.setSource(7291U);
    msg.setSourceEntity(157U);
    msg.setDestination(36893U);
    msg.setDestinationEntity(179U);
    msg.value = 0.898010566983;
    msg.speed_units = 228U;

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
    msg.setTimeStamp(0.700643205553);
    msg.setSource(29590U);
    msg.setSourceEntity(70U);
    msg.setDestination(52914U);
    msg.setDestinationEntity(9U);
    msg.value = 0.950747308218;
    msg.speed_units = 83U;

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
    msg.setTimeStamp(0.718499166221);
    msg.setSource(22696U);
    msg.setSourceEntity(188U);
    msg.setDestination(12065U);
    msg.setDestinationEntity(207U);
    msg.value = 0.274149233321;

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
    msg.setTimeStamp(0.136927645365);
    msg.setSource(46150U);
    msg.setSourceEntity(166U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(168U);
    msg.value = 0.0571309432443;

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
    msg.setTimeStamp(0.0708872523347);
    msg.setSource(38625U);
    msg.setSourceEntity(246U);
    msg.setDestination(2785U);
    msg.setDestinationEntity(82U);
    msg.value = 0.652865641095;

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
    msg.setTimeStamp(0.829455664526);
    msg.setSource(28852U);
    msg.setSourceEntity(38U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(153U);
    msg.value = 0.453359854448;

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
    msg.setTimeStamp(0.548310860622);
    msg.setSource(8805U);
    msg.setSourceEntity(104U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(35U);
    msg.value = 0.128359261049;

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
    msg.setTimeStamp(0.212633389093);
    msg.setSource(26757U);
    msg.setSourceEntity(245U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(134U);
    msg.value = 0.71082520012;

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
    msg.setTimeStamp(0.823762622567);
    msg.setSource(14716U);
    msg.setSourceEntity(35U);
    msg.setDestination(45123U);
    msg.setDestinationEntity(216U);
    msg.value = 0.520569937733;

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
    msg.setTimeStamp(0.711619309979);
    msg.setSource(16490U);
    msg.setSourceEntity(127U);
    msg.setDestination(16293U);
    msg.setDestinationEntity(12U);
    msg.value = 0.590993350352;

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
    msg.setTimeStamp(0.63389808956);
    msg.setSource(36544U);
    msg.setSourceEntity(4U);
    msg.setDestination(16286U);
    msg.setDestinationEntity(215U);
    msg.value = 0.886313799437;

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
    msg.setTimeStamp(0.95221846017);
    msg.setSource(61388U);
    msg.setSourceEntity(161U);
    msg.setDestination(20093U);
    msg.setDestinationEntity(221U);
    msg.start_lat = 0.689526714883;
    msg.start_lon = 0.0869067123428;
    msg.start_z = 0.804687407072;
    msg.start_z_units = 76U;
    msg.end_lat = 0.859230068306;
    msg.end_lon = 0.0775743178641;
    msg.end_z = 0.991042952852;
    msg.end_z_units = 133U;
    msg.speed = 0.74312008561;
    msg.speed_units = 173U;
    msg.lradius = 0.398551478868;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.450115416047);
    msg.setSource(14416U);
    msg.setSourceEntity(42U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(146U);
    msg.start_lat = 0.131131578517;
    msg.start_lon = 0.94601704778;
    msg.start_z = 0.864581305428;
    msg.start_z_units = 55U;
    msg.end_lat = 0.156799678832;
    msg.end_lon = 0.916634673606;
    msg.end_z = 0.0112948166905;
    msg.end_z_units = 193U;
    msg.speed = 0.0970133354169;
    msg.speed_units = 62U;
    msg.lradius = 0.723470567072;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.45106340473);
    msg.setSource(21822U);
    msg.setSourceEntity(170U);
    msg.setDestination(20186U);
    msg.setDestinationEntity(13U);
    msg.start_lat = 0.69301276789;
    msg.start_lon = 0.554261860708;
    msg.start_z = 0.216196874912;
    msg.start_z_units = 64U;
    msg.end_lat = 0.395426257759;
    msg.end_lon = 0.180380976462;
    msg.end_z = 0.512200964414;
    msg.end_z_units = 46U;
    msg.speed = 0.354361428749;
    msg.speed_units = 13U;
    msg.lradius = 0.537110871011;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.979818967555);
    msg.setSource(36990U);
    msg.setSourceEntity(100U);
    msg.setDestination(38942U);
    msg.setDestinationEntity(99U);
    msg.x = 0.869005169068;
    msg.y = 0.0127540963922;
    msg.z = 0.777950687739;
    msg.k = 0.128336926357;
    msg.m = 0.896187267401;
    msg.n = 0.185730693617;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.679968178259);
    msg.setSource(968U);
    msg.setSourceEntity(76U);
    msg.setDestination(45295U);
    msg.setDestinationEntity(4U);
    msg.x = 0.522368283959;
    msg.y = 0.408787683517;
    msg.z = 0.039744352744;
    msg.k = 0.818034135609;
    msg.m = 0.0403170553576;
    msg.n = 0.013238886447;
    msg.flags = 98U;

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
    msg.setTimeStamp(0.694056277194);
    msg.setSource(22857U);
    msg.setSourceEntity(131U);
    msg.setDestination(5520U);
    msg.setDestinationEntity(100U);
    msg.x = 0.351103890606;
    msg.y = 0.677798096389;
    msg.z = 0.614187273328;
    msg.k = 0.227527277301;
    msg.m = 0.349403104431;
    msg.n = 0.259991980014;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.0577839777246);
    msg.setSource(23428U);
    msg.setSourceEntity(196U);
    msg.setDestination(30947U);
    msg.setDestinationEntity(206U);
    msg.value = 0.816314675303;

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
    msg.setTimeStamp(0.0949572044257);
    msg.setSource(14000U);
    msg.setSourceEntity(25U);
    msg.setDestination(43411U);
    msg.setDestinationEntity(115U);
    msg.value = 0.418769347797;

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
    msg.setTimeStamp(0.153356686258);
    msg.setSource(8949U);
    msg.setSourceEntity(160U);
    msg.setDestination(57259U);
    msg.setDestinationEntity(134U);
    msg.value = 0.918994079648;

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
    msg.setTimeStamp(0.31252224828);
    msg.setSource(31721U);
    msg.setSourceEntity(30U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(251U);
    msg.u = 0.259343727989;
    msg.v = 0.615998568173;
    msg.w = 0.373463817978;
    msg.p = 0.392955223119;
    msg.q = 0.145901297871;
    msg.r = 0.797339252257;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.391747279688);
    msg.setSource(34187U);
    msg.setSourceEntity(197U);
    msg.setDestination(26412U);
    msg.setDestinationEntity(101U);
    msg.u = 0.212123057765;
    msg.v = 0.918773020137;
    msg.w = 0.589659683532;
    msg.p = 0.471910150819;
    msg.q = 0.501528221213;
    msg.r = 0.706789663539;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.258797336089);
    msg.setSource(36202U);
    msg.setSourceEntity(173U);
    msg.setDestination(27028U);
    msg.setDestinationEntity(50U);
    msg.u = 0.892761247914;
    msg.v = 0.913049444446;
    msg.w = 0.903841089814;
    msg.p = 0.0169590098763;
    msg.q = 0.441882700336;
    msg.r = 0.540256642986;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.0551130674301);
    msg.setSource(19096U);
    msg.setSourceEntity(240U);
    msg.setDestination(29301U);
    msg.setDestinationEntity(37U);
    msg.start_lat = 0.478128562954;
    msg.start_lon = 0.345788785416;
    msg.start_z = 0.150122968386;
    msg.start_z_units = 237U;
    msg.end_lat = 0.387647009578;
    msg.end_lon = 0.610373439396;
    msg.end_z = 0.0480143926624;
    msg.end_z_units = 205U;
    msg.lradius = 0.689679017391;
    msg.flags = 28U;
    msg.x = 0.465419757593;
    msg.y = 0.629645614952;
    msg.z = 0.329355975541;
    msg.vx = 0.202860896841;
    msg.vy = 0.13248877673;
    msg.vz = 0.392655003658;
    msg.course_error = 0.171559338857;
    msg.eta = 46769U;

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
    msg.setTimeStamp(0.454013355275);
    msg.setSource(9061U);
    msg.setSourceEntity(116U);
    msg.setDestination(3790U);
    msg.setDestinationEntity(65U);
    msg.start_lat = 0.0762039498171;
    msg.start_lon = 0.12167603021;
    msg.start_z = 0.458425806624;
    msg.start_z_units = 243U;
    msg.end_lat = 0.628478241448;
    msg.end_lon = 0.445517580868;
    msg.end_z = 0.607948912762;
    msg.end_z_units = 71U;
    msg.lradius = 0.378998792053;
    msg.flags = 70U;
    msg.x = 0.474605180883;
    msg.y = 0.474425688034;
    msg.z = 0.854208202182;
    msg.vx = 0.59087833015;
    msg.vy = 0.3107720083;
    msg.vz = 0.863153020425;
    msg.course_error = 0.271442168636;
    msg.eta = 26810U;

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
    msg.setTimeStamp(0.0753296588243);
    msg.setSource(45131U);
    msg.setSourceEntity(165U);
    msg.setDestination(57849U);
    msg.setDestinationEntity(80U);
    msg.start_lat = 0.736984587085;
    msg.start_lon = 0.930659217328;
    msg.start_z = 0.759593020205;
    msg.start_z_units = 0U;
    msg.end_lat = 0.987430350145;
    msg.end_lon = 0.895425617954;
    msg.end_z = 0.249129189263;
    msg.end_z_units = 26U;
    msg.lradius = 0.987776323886;
    msg.flags = 201U;
    msg.x = 0.0320529549293;
    msg.y = 0.488595367492;
    msg.z = 0.0799306607508;
    msg.vx = 0.245913473601;
    msg.vy = 0.330898600174;
    msg.vz = 0.729150132071;
    msg.course_error = 0.357254762858;
    msg.eta = 44121U;

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
    msg.setTimeStamp(0.382359230482);
    msg.setSource(55302U);
    msg.setSourceEntity(195U);
    msg.setDestination(52630U);
    msg.setDestinationEntity(161U);
    msg.k = 0.395291650319;
    msg.m = 0.776090675216;
    msg.n = 0.50342091962;

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
    msg.setTimeStamp(0.906351561807);
    msg.setSource(12306U);
    msg.setSourceEntity(21U);
    msg.setDestination(35006U);
    msg.setDestinationEntity(181U);
    msg.k = 0.260381660123;
    msg.m = 0.61288843837;
    msg.n = 0.572360886458;

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
    msg.setTimeStamp(0.495533076131);
    msg.setSource(49842U);
    msg.setSourceEntity(199U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(190U);
    msg.k = 0.44289179784;
    msg.m = 0.45201463365;
    msg.n = 0.984081429328;

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
    msg.setTimeStamp(0.290274715964);
    msg.setSource(2598U);
    msg.setSourceEntity(234U);
    msg.setDestination(55753U);
    msg.setDestinationEntity(81U);
    msg.p = 0.108290126074;
    msg.i = 0.448204784169;
    msg.d = 0.838412188174;
    msg.a = 0.215259045956;

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
    msg.setTimeStamp(0.0535143033736);
    msg.setSource(35368U);
    msg.setSourceEntity(207U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(252U);
    msg.p = 0.139370804719;
    msg.i = 0.428072739177;
    msg.d = 0.647784452967;
    msg.a = 0.832205944888;

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
    msg.setTimeStamp(0.848242314539);
    msg.setSource(25544U);
    msg.setSourceEntity(213U);
    msg.setDestination(50728U);
    msg.setDestinationEntity(46U);
    msg.p = 0.397179680177;
    msg.i = 0.505537410185;
    msg.d = 0.971545913779;
    msg.a = 0.978617765729;

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
    msg.setTimeStamp(0.99531596112);
    msg.setSource(61036U);
    msg.setSourceEntity(210U);
    msg.setDestination(39857U);
    msg.setDestinationEntity(225U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.648042472398);
    msg.setSource(36681U);
    msg.setSourceEntity(60U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(47U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.537687346426);
    msg.setSource(64812U);
    msg.setSourceEntity(81U);
    msg.setDestination(63381U);
    msg.setDestinationEntity(15U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.479724020972);
    msg.setSource(8367U);
    msg.setSourceEntity(27U);
    msg.setDestination(4154U);
    msg.setDestinationEntity(193U);
    msg.timeout = 56489U;
    msg.lat = 0.386571552869;
    msg.lon = 0.441088225227;
    msg.z = 0.73799920495;
    msg.z_units = 6U;
    msg.speed = 0.486115426256;
    msg.speed_units = 209U;
    msg.roll = 0.421564930622;
    msg.pitch = 0.0596518264214;
    msg.yaw = 0.68854904758;
    msg.custom.assign("ZGDTPOSEOCMTQMXKIRJGOUBEDGMGRUQPYHWZRYFNLUDNEYNLEWKPAIACPSTFUZSBWRYCLAKRYNIJ");

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
    msg.setTimeStamp(0.537589219747);
    msg.setSource(37615U);
    msg.setSourceEntity(16U);
    msg.setDestination(61218U);
    msg.setDestinationEntity(245U);
    msg.timeout = 44685U;
    msg.lat = 0.899473924378;
    msg.lon = 0.627521313406;
    msg.z = 0.132154815375;
    msg.z_units = 165U;
    msg.speed = 0.760658984084;
    msg.speed_units = 160U;
    msg.roll = 0.809053478949;
    msg.pitch = 0.982724345671;
    msg.yaw = 0.126141348711;
    msg.custom.assign("BJNLOJVEIRTXEZYWHWMVXQYNKMYPEBHSVFTLCCCGZFJNRONMUHTPVSXUNDULORCIBKYGADUQRETLUSOIEGSUSBIPSIGFHKCXKYMPFJFQDDLNBELWKGEDKBPQXKWCUJGFLAYDUCFWSBNKROZIXMZCVQQQFRHVRWDAQJDWHCTWRPDPZCGODLXTIFPGRUNYFBZHWMMSZANKMJALZTYSPVUHMRZKBVIEXAAWVYJJEHJTLYTOXQTGBOEMAPSO");

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
    msg.setTimeStamp(0.205788999285);
    msg.setSource(36546U);
    msg.setSourceEntity(76U);
    msg.setDestination(28590U);
    msg.setDestinationEntity(7U);
    msg.timeout = 21298U;
    msg.lat = 0.413883783756;
    msg.lon = 0.770153285156;
    msg.z = 0.661909275054;
    msg.z_units = 189U;
    msg.speed = 0.88401478219;
    msg.speed_units = 63U;
    msg.roll = 0.86014512041;
    msg.pitch = 0.157003551881;
    msg.yaw = 0.449500634193;
    msg.custom.assign("ZACPHADQBMYHZTUVWENQICEWWZRYQGSJUISPORKJXGNKESCOKB");

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
    msg.setTimeStamp(0.815262409658);
    msg.setSource(34070U);
    msg.setSourceEntity(99U);
    msg.setDestination(53176U);
    msg.setDestinationEntity(25U);
    msg.timeout = 10494U;
    msg.lat = 0.443955380932;
    msg.lon = 0.279482359324;
    msg.z = 0.75128451252;
    msg.z_units = 35U;
    msg.speed = 0.0456767499473;
    msg.speed_units = 221U;
    msg.duration = 54302U;
    msg.radius = 0.995521062886;
    msg.flags = 44U;
    msg.custom.assign("PBIKQENCVRYJCAUIWDFYWOTXLOZELTXVXOEEXRZUZZYPXBKKGWBCYPILDJPEEPMSWTDQYPIGDTMVQJSDWZXRULBFOPCIAIJFB");

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
    msg.setTimeStamp(0.445963898434);
    msg.setSource(37285U);
    msg.setSourceEntity(213U);
    msg.setDestination(31252U);
    msg.setDestinationEntity(212U);
    msg.timeout = 19125U;
    msg.lat = 0.584659131894;
    msg.lon = 0.045956530725;
    msg.z = 0.936753785543;
    msg.z_units = 46U;
    msg.speed = 0.589120096386;
    msg.speed_units = 117U;
    msg.duration = 30556U;
    msg.radius = 0.739785184263;
    msg.flags = 65U;
    msg.custom.assign("DCLNGYKHDYKSIBYWZAVLIFAHDLOLHFEGXTVBCAPGBARDOSXDCNUVEKQZKWWMJXFQYIMZPQHNBPNJGCHBMSTXPBHXCPAOXTDMRILRRZNAVFILPJQTMNUKOUFRXTWOEVURSLZMJWQXNG");

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
    msg.setTimeStamp(0.782232759539);
    msg.setSource(45375U);
    msg.setSourceEntity(76U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(25U);
    msg.timeout = 55923U;
    msg.lat = 0.305104939442;
    msg.lon = 0.709466099481;
    msg.z = 0.126664691267;
    msg.z_units = 220U;
    msg.speed = 0.569355950543;
    msg.speed_units = 219U;
    msg.duration = 53513U;
    msg.radius = 0.362510392189;
    msg.flags = 10U;
    msg.custom.assign("HOVRCICAEJZLTSBXMGRAZGKQDVCYPTVGJGYHEPTQEACQEFIYMCNQDZNXMBLIDARKGNOJWBJMRELLZSQFIWQZINHGFOZWDSHFDWUDVIDQLVIVNCJMHOSFWFPUHDBCWWUSAZNUFBSLMLUKYBABRXTBXNIKAPXUAYLQSKYJZOZRETKVPFQOTIKPSRKRXMHAXOPODHRAPPTG");

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
    msg.setTimeStamp(0.891812610153);
    msg.setSource(62622U);
    msg.setSourceEntity(171U);
    msg.setDestination(20178U);
    msg.setDestinationEntity(235U);
    msg.custom.assign("CTGMJPWQLTIVHYYFKMYBCYGPCQYWZSMNKXPMEQAGMHQRDBNIBXWOMHSUHWXJFKETFRHBXDJINZBISZSVTKKBJRIJLWDEDUFNJFTAECPCAROZNFICUGVEXCSRVSZIJCLTDRHLUQVTBYLERVDSABAUQJVJOHROVFZERLZGZL");

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
    msg.setTimeStamp(0.850919439201);
    msg.setSource(64608U);
    msg.setSourceEntity(179U);
    msg.setDestination(45832U);
    msg.setDestinationEntity(85U);
    msg.custom.assign("XOFHODBIVACWBQBRSNBRAYBVETGEFTSTMRUXAAAQLPDDPJDYESULLNICHMZSEYPSPBUOJGYUYZJJJHZKADJTKOVLTHGKFECTNJRWKB");

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
    msg.setTimeStamp(0.862930123167);
    msg.setSource(47613U);
    msg.setSourceEntity(1U);
    msg.setDestination(32405U);
    msg.setDestinationEntity(247U);
    msg.custom.assign("NHQRUVYXNSFZXUNBVOPNCPDXGJKEOZ");

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
    msg.setTimeStamp(0.598874580983);
    msg.setSource(26665U);
    msg.setSourceEntity(13U);
    msg.setDestination(35355U);
    msg.setDestinationEntity(17U);
    msg.timeout = 29063U;
    msg.lat = 0.721515123999;
    msg.lon = 0.0903818446402;
    msg.z = 0.342981195407;
    msg.z_units = 191U;
    msg.duration = 36626U;
    msg.speed = 0.641895045631;
    msg.speed_units = 251U;
    msg.type = 99U;
    msg.radius = 0.485531148509;
    msg.length = 0.806134523588;
    msg.bearing = 0.364759858203;
    msg.direction = 140U;
    msg.custom.assign("THGDTPJWYCSUPFTEXMKEAGBTUQKPINGKRAOEHQQYBVCNYDYZAVNVDAXRDCKSGULYWFEVFNOWJCJCMSGDDISEFBOYBGNKSPHNHMMBEAYXMUTIQTVIRZIUVCDBFLDWBKUYXHSBFZRHRNNKFBTRZDJVWLZAOOMVYUSPPRXPRLLHTLRCCZVLQPJLIPMKSOSZXJKTOXUXOOAGGWEIANCYUEILLPBMRUZQHGXMQZWGITVAJCNOIEF");

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
    msg.setTimeStamp(0.244396524048);
    msg.setSource(13060U);
    msg.setSourceEntity(0U);
    msg.setDestination(55930U);
    msg.setDestinationEntity(43U);
    msg.timeout = 62413U;
    msg.lat = 0.876353528614;
    msg.lon = 0.618815763136;
    msg.z = 0.293046371667;
    msg.z_units = 201U;
    msg.duration = 20677U;
    msg.speed = 0.426907862609;
    msg.speed_units = 149U;
    msg.type = 86U;
    msg.radius = 0.908180814317;
    msg.length = 0.689535997532;
    msg.bearing = 0.620490053514;
    msg.direction = 169U;
    msg.custom.assign("RVSWIXTLNZUAPGAMIWJTRVGGKSDEULCRDNTQXQJURFJALKZTGOO");

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
    msg.setTimeStamp(0.27981509913);
    msg.setSource(55578U);
    msg.setSourceEntity(196U);
    msg.setDestination(9226U);
    msg.setDestinationEntity(114U);
    msg.timeout = 51656U;
    msg.lat = 0.796877256061;
    msg.lon = 0.67874399198;
    msg.z = 0.996460938625;
    msg.z_units = 124U;
    msg.duration = 38599U;
    msg.speed = 0.585527709682;
    msg.speed_units = 142U;
    msg.type = 160U;
    msg.radius = 0.454829931017;
    msg.length = 0.999178166617;
    msg.bearing = 0.571547015482;
    msg.direction = 81U;
    msg.custom.assign("EMWPNFAEQLTBSZGNELKPLITJYTOFIBKOALVANVDWTSOSGYRMXFPCDFXQOYDCIEBYGJQSMVTDBSZDVSWQUONRVKKXMHHRNWELMHCTMRIIYLBWKOUPZKMWEDCCYGXSRBLUQPNCOYBJHBMUQKCIXZODTJMDVUTQKLZPVJDGAXXQRHIARJLJGIKZEGAOFBZWPGUFFHCC");

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
    msg.setTimeStamp(0.0435063247245);
    msg.setSource(60447U);
    msg.setSourceEntity(89U);
    msg.setDestination(44344U);
    msg.setDestinationEntity(35U);
    msg.duration = 16375U;
    msg.custom.assign("OZCUJFPYYMFSIHQQXR");

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
    msg.setTimeStamp(0.857102900161);
    msg.setSource(57302U);
    msg.setSourceEntity(11U);
    msg.setDestination(20219U);
    msg.setDestinationEntity(116U);
    msg.duration = 12011U;
    msg.custom.assign("ZALOHREZLOMNMRJOZRYFZVEBZQSZUYWJEYJHAZGKAKFOVMWECVOUXCTUVQKKLQVXMOOKKPNGIVSIFHCIYAQTKXBWWRHQTAPBSWGEGGWEDBNPNBLIJFHVBAZPYCYFPXDYGWKNRRLFEFJXFRBEQQVTSOFMATZGKLQSHPUODBMLPMUDQESSVARBFNETQMXITVHGJHYCCOP");

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
    msg.setTimeStamp(0.96268844465);
    msg.setSource(61745U);
    msg.setSourceEntity(200U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(195U);
    msg.duration = 7263U;
    msg.custom.assign("XYNMDNJJKGRYNGXEETULB");

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
    msg.setTimeStamp(0.336518965793);
    msg.setSource(30773U);
    msg.setSourceEntity(18U);
    msg.setDestination(31327U);
    msg.setDestinationEntity(179U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.206902807749;
    tmp_msg_0.speed_units = 177U;
    msg.control.set(tmp_msg_0);
    msg.duration = 30708U;
    msg.custom.assign("ZSIBVKJBBQGPEQNANASCRWXDCFIDIPEVVMFWDWTTSZEVVNJOWHHEEDGPYVAOUWSTNEXHCLKESPFJCLGLNRFUNSGYHIIUUIOCFRYPLSUQAHQGABXMSLLSZFOTVWNDGHXXOT");

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
    msg.setTimeStamp(0.557039584384);
    msg.setSource(16113U);
    msg.setSourceEntity(137U);
    msg.setDestination(40781U);
    msg.setDestinationEntity(242U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.815288540963;
    msg.control.set(tmp_msg_0);
    msg.duration = 3181U;
    msg.custom.assign("PFMBXUPRGNBMTJOEYXJIQIIYMLDULFYKWLFCNHFVIKJHWXZQDYTUZTGCWRWEWQYLABSGAZKVGQXQVRASCNMZDJMFSSNLJELESCHJBPUIVQQZEYAVAOGGRXDTLTZKAQYORDVMGIKYZKZURMSPTZHPDXRP");

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
    msg.setTimeStamp(0.835669297477);
    msg.setSource(50837U);
    msg.setSourceEntity(22U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(154U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.381477027289;
    tmp_msg_0.z_units = 214U;
    msg.control.set(tmp_msg_0);
    msg.duration = 7442U;
    msg.custom.assign("YPQZVNIWUDPJOKJOAZGXNKRFFOCXXLRYLPXREBIEZMYBUZELTVZ");

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
    msg.setTimeStamp(0.160600463872);
    msg.setSource(12708U);
    msg.setSourceEntity(99U);
    msg.setDestination(28296U);
    msg.setDestinationEntity(157U);
    msg.timeout = 2863U;
    msg.lat = 0.146982871392;
    msg.lon = 0.531123936346;
    msg.z = 0.367456941015;
    msg.z_units = 131U;
    msg.speed = 0.23467854305;
    msg.speed_units = 76U;
    msg.bearing = 0.864963599896;
    msg.cross_angle = 0.569367745368;
    msg.width = 0.620797539533;
    msg.length = 0.286140795205;
    msg.hstep = 0.026344245147;
    msg.coff = 125U;
    msg.alternation = 75U;
    msg.flags = 2U;
    msg.custom.assign("PZLTTYGQZCUCEGQARXRYVUFLQAHWILBGDTQIWETSCEPVFKWDIZPMMMVPJYVRICJRXZRMHSZZKBUOBVPAIDCZKSKXHNBAKKRTGZEVOVENSUFUINYXJUNTWNINULNWLJOGYCZHJXCQYFBLJTQM");

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
    msg.setTimeStamp(0.2102807152);
    msg.setSource(46679U);
    msg.setSourceEntity(62U);
    msg.setDestination(9393U);
    msg.setDestinationEntity(226U);
    msg.timeout = 26239U;
    msg.lat = 0.849192585763;
    msg.lon = 0.74618988581;
    msg.z = 0.487153350137;
    msg.z_units = 186U;
    msg.speed = 0.616289429558;
    msg.speed_units = 10U;
    msg.bearing = 0.872882560895;
    msg.cross_angle = 0.880384125642;
    msg.width = 0.212904355711;
    msg.length = 0.724194043302;
    msg.hstep = 0.250762841945;
    msg.coff = 83U;
    msg.alternation = 87U;
    msg.flags = 33U;
    msg.custom.assign("ABXCASRGIGEIREXDGGYMOVPQMIHFYIHOVMDELVNOHGGMSXLYZFZTZENHCXUVSNWPABMIWXAATYDEPPBKLEUQTJWSEQLAEJUORDUBCJQLUBJDWHCQHTXDIKLWHOKGUVVTQPIGZKFFUBEHBRZWNXCUFZNAWWCEOFRPMNKIOJCIOWTGPYFAQZKDULYVDHF");

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
    msg.setTimeStamp(0.445106757714);
    msg.setSource(22254U);
    msg.setSourceEntity(59U);
    msg.setDestination(6902U);
    msg.setDestinationEntity(123U);
    msg.timeout = 17578U;
    msg.lat = 0.591394995119;
    msg.lon = 0.280658473741;
    msg.z = 0.210112821278;
    msg.z_units = 237U;
    msg.speed = 0.590346714231;
    msg.speed_units = 13U;
    msg.bearing = 0.364858652068;
    msg.cross_angle = 0.654230132482;
    msg.width = 0.0275354635436;
    msg.length = 0.925129895663;
    msg.hstep = 0.842993852768;
    msg.coff = 234U;
    msg.alternation = 196U;
    msg.flags = 89U;
    msg.custom.assign("SFXTGBIJPHOHQFNUECQVR");

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
    msg.setTimeStamp(0.722519868986);
    msg.setSource(3906U);
    msg.setSourceEntity(143U);
    msg.setDestination(14849U);
    msg.setDestinationEntity(3U);
    msg.timeout = 7692U;
    msg.lat = 0.781539077319;
    msg.lon = 0.780593792337;
    msg.z = 0.552915095686;
    msg.z_units = 16U;
    msg.speed = 0.83439374718;
    msg.speed_units = 127U;
    msg.custom.assign("DRRFYKFFEOUBTBQCCSPDBNZPGSTGMEJEYKMADZONBJRMBUJWZKAMXGIJTQMXCXG");

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
    msg.setTimeStamp(0.0322615737199);
    msg.setSource(33563U);
    msg.setSourceEntity(128U);
    msg.setDestination(14149U);
    msg.setDestinationEntity(112U);
    msg.timeout = 65349U;
    msg.lat = 0.210898599;
    msg.lon = 0.400019215484;
    msg.z = 0.461412924259;
    msg.z_units = 240U;
    msg.speed = 0.886745079548;
    msg.speed_units = 245U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.167357659227;
    tmp_msg_0.y = 0.974435020045;
    tmp_msg_0.z = 0.0434825029281;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZRZFGUFQOLLVAGHLUKDVDYAORCOXXNCUITUIXYMGBJACREMM");

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
    msg.setTimeStamp(0.251463049979);
    msg.setSource(1424U);
    msg.setSourceEntity(9U);
    msg.setDestination(46903U);
    msg.setDestinationEntity(14U);
    msg.timeout = 54078U;
    msg.lat = 0.578708183211;
    msg.lon = 0.585657424364;
    msg.z = 0.87244231891;
    msg.z_units = 94U;
    msg.speed = 0.874009144594;
    msg.speed_units = 76U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.265927563042;
    tmp_msg_0.y = 0.242659085521;
    tmp_msg_0.z = 0.82465748037;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XOJVCUHCAJNROSJIZQXNITLUAQQHKGUEJVEAAGAIWNLVZHOVLDOAHUFBRDIYRSVYGBBBODATWTCZPIPOZXKTRNBPPQGGKLSTTZFPFZKXDVBCFMSZOEACKYFFCJLDQEGHEWIUNWTMDK");

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
    msg.setTimeStamp(0.950610982985);
    msg.setSource(64306U);
    msg.setSourceEntity(100U);
    msg.setDestination(25175U);
    msg.setDestinationEntity(151U);
    msg.x = 0.6280649229;
    msg.y = 0.988252824001;
    msg.z = 0.811559441414;

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
    msg.setTimeStamp(0.490874254334);
    msg.setSource(57469U);
    msg.setSourceEntity(162U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(178U);
    msg.x = 0.128602289816;
    msg.y = 0.78938595127;
    msg.z = 0.79287845985;

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
    msg.setTimeStamp(0.0657986574008);
    msg.setSource(16083U);
    msg.setSourceEntity(151U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(66U);
    msg.x = 0.941835013659;
    msg.y = 0.714202296282;
    msg.z = 0.103315067581;

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
    msg.setTimeStamp(0.287608347618);
    msg.setSource(24389U);
    msg.setSourceEntity(75U);
    msg.setDestination(3315U);
    msg.setDestinationEntity(219U);
    msg.timeout = 19446U;
    msg.lat = 0.440684523267;
    msg.lon = 0.841467632673;
    msg.z = 0.858168275267;
    msg.z_units = 178U;
    msg.amplitude = 0.538141893937;
    msg.pitch = 0.569103870767;
    msg.speed = 0.605148439729;
    msg.speed_units = 190U;
    msg.custom.assign("HNBHHSJMYXYFZIAKPRTQKSCYXMKEBKBXGFERTAAWLKJCXARJINJJMQSEHCIECVKNXPTJEOBMBMTZFFSUGBLTFCDYYHXTAU");

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
    msg.setTimeStamp(0.705119708799);
    msg.setSource(41501U);
    msg.setSourceEntity(89U);
    msg.setDestination(30815U);
    msg.setDestinationEntity(197U);
    msg.timeout = 20144U;
    msg.lat = 0.592060478453;
    msg.lon = 0.576377595231;
    msg.z = 0.0585402623019;
    msg.z_units = 195U;
    msg.amplitude = 0.298335205463;
    msg.pitch = 0.0937200711265;
    msg.speed = 0.448596120649;
    msg.speed_units = 208U;
    msg.custom.assign("DOLNWDCCBVKBTXQPKAQJUQMQCFUQJGHSAILPYXMJVSRRTPQVTYDZGINXULMFAFDCAJSOMWHAOILZNFJDKRXBSUZHTGNRZCHNMSOVXWMPLVRMJTXURSRTWCEBECYEEFXPUCVRFIOBBGTITZPWZKMWEINWYVQGUVDAONTVUOHYZESKBOEPGJJLFLEOHLYXHMZAUUEMBKGCSKSXKEVGJGN");

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
    msg.setTimeStamp(0.761808515338);
    msg.setSource(46940U);
    msg.setSourceEntity(156U);
    msg.setDestination(64581U);
    msg.setDestinationEntity(50U);
    msg.timeout = 25181U;
    msg.lat = 0.214351496915;
    msg.lon = 0.86304642682;
    msg.z = 0.88017212096;
    msg.z_units = 45U;
    msg.amplitude = 0.877663272917;
    msg.pitch = 0.16575843859;
    msg.speed = 0.554516552679;
    msg.speed_units = 90U;
    msg.custom.assign("GEDBMKINBMYEIWOVPVHLLNQNREKNBIEUYWJTZZKLOHJRUMQISMYKIDYUFDGCXHZTZLTGNSZPUZWEJNRFECRFVL");

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
    msg.setTimeStamp(0.0401299949984);
    msg.setSource(4000U);
    msg.setSourceEntity(128U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.996843686254);
    msg.setSource(27809U);
    msg.setSourceEntity(221U);
    msg.setDestination(54326U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.250763585716);
    msg.setSource(63476U);
    msg.setSourceEntity(100U);
    msg.setDestination(59036U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.398957910155);
    msg.setSource(13634U);
    msg.setSourceEntity(46U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.854761583608;
    msg.lon = 0.0578074612957;
    msg.z = 0.828960649793;
    msg.z_units = 225U;
    msg.radius = 0.960565871377;
    msg.duration = 35790U;
    msg.speed = 0.749295811893;
    msg.speed_units = 109U;
    msg.custom.assign("WFYHMXDZPKAJLKGQEJIBONXCNZYDSUVXFEABWAEMVZNBBVWYMZQBGVONYQXEJSPLZUVJMUMADNUAERKEPGLCAXUOBBODQTOCAQRPPIQHCRSLRHSGNJFJMOSFETKFHUIBHGSGNWYLQWQCZBTSUJPVFFSVMLPWWTDIHWNKGJDXFLDYLJAMIKNQULXYDQHRCIEHLAXVGONIIPIOTKTEGKJEORDPHKWM");

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
    msg.setTimeStamp(0.39998816182);
    msg.setSource(15929U);
    msg.setSourceEntity(66U);
    msg.setDestination(52467U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.712424204292;
    msg.lon = 0.978013038383;
    msg.z = 0.0899837654853;
    msg.z_units = 215U;
    msg.radius = 0.93402792497;
    msg.duration = 473U;
    msg.speed = 0.558521865895;
    msg.speed_units = 169U;
    msg.custom.assign("KROVGRFYSDWMVUDKR");

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
    msg.setTimeStamp(0.0408756606496);
    msg.setSource(18234U);
    msg.setSourceEntity(159U);
    msg.setDestination(11160U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.533528077466;
    msg.lon = 0.665592046812;
    msg.z = 0.905465574441;
    msg.z_units = 121U;
    msg.radius = 0.699812832621;
    msg.duration = 17286U;
    msg.speed = 0.808047283413;
    msg.speed_units = 59U;
    msg.custom.assign("IOMWBRWGJOVYZWRATMVXTDUBSHLJFFLGDHPOJHLSVKINPWJCOYITGFPL");

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
    msg.setTimeStamp(0.266050699108);
    msg.setSource(64289U);
    msg.setSourceEntity(193U);
    msg.setDestination(15236U);
    msg.setDestinationEntity(209U);
    msg.timeout = 44964U;
    msg.flags = 2U;
    msg.lat = 0.616088619734;
    msg.lon = 0.851816458175;
    msg.start_z = 0.139533487591;
    msg.start_z_units = 206U;
    msg.end_z = 0.411921597931;
    msg.end_z_units = 73U;
    msg.radius = 0.94024591313;
    msg.speed = 0.38109890828;
    msg.speed_units = 64U;
    msg.custom.assign("PMGPGFTYXDHFYCTDEDTFLHZRYRLRCHNCFJCTMMMEKYHOYFJASHIXVKQWBRLXNGCJRWEWWJBIZXTOVQEF");

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
    msg.setTimeStamp(0.517839847592);
    msg.setSource(63418U);
    msg.setSourceEntity(244U);
    msg.setDestination(55794U);
    msg.setDestinationEntity(120U);
    msg.timeout = 36044U;
    msg.flags = 218U;
    msg.lat = 0.974469265545;
    msg.lon = 0.241707974983;
    msg.start_z = 0.830408298196;
    msg.start_z_units = 87U;
    msg.end_z = 0.0222003545057;
    msg.end_z_units = 76U;
    msg.radius = 0.520565939952;
    msg.speed = 0.822708847522;
    msg.speed_units = 137U;
    msg.custom.assign("HSXZEECBSNNQPLRJDGAQEVKWZULSLMHTGXFFJOABDOHOTDSLOUOWFXOGNMUPVTTHBIHQNFBMQSDTGJBINWIACPXKAUWNPCVPJIUJXLKMYASEFRPIHZTGZIPQQKKSMGSNYNWPGMITQHGNUFFTQFWWCJ");

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
    msg.setTimeStamp(0.0279536230713);
    msg.setSource(52071U);
    msg.setSourceEntity(55U);
    msg.setDestination(2852U);
    msg.setDestinationEntity(3U);
    msg.timeout = 44352U;
    msg.flags = 149U;
    msg.lat = 0.570618129796;
    msg.lon = 0.606202887387;
    msg.start_z = 0.882571636006;
    msg.start_z_units = 229U;
    msg.end_z = 0.264619479832;
    msg.end_z_units = 19U;
    msg.radius = 0.650244663148;
    msg.speed = 0.985185753893;
    msg.speed_units = 27U;
    msg.custom.assign("VJNZCYGCAXOBFFUKPPVQZUTWWOSYVJHSAORJQJRODSAUMAGPBIGTRXXSZTSM");

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
    msg.setTimeStamp(0.339750293754);
    msg.setSource(46925U);
    msg.setSourceEntity(219U);
    msg.setDestination(42965U);
    msg.setDestinationEntity(229U);
    msg.timeout = 28009U;
    msg.lat = 0.586100479674;
    msg.lon = 0.530839325926;
    msg.z = 0.591591405814;
    msg.z_units = 140U;
    msg.speed = 0.959903174646;
    msg.speed_units = 43U;
    msg.custom.assign("VCQPGUSANTCPKBJASFCSSGEKUBTKFUQVNUXYCREXYFMOOBMZLSZTZODHYYOECGNLWGTIBIWOREOBNFFEHJVSKAWIIOGRCDAGLAUQROYKIMPWGVJYDXWTILIVXHBMDVEVUMFXZUSAQFHJHEWDGPZIXUVNWNXLVAXDHHZBXUTNEYSSRIOIKHQTMZPDQTAZXK");

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
    msg.setTimeStamp(0.372370773855);
    msg.setSource(58022U);
    msg.setSourceEntity(58U);
    msg.setDestination(61261U);
    msg.setDestinationEntity(91U);
    msg.timeout = 15323U;
    msg.lat = 0.287503878059;
    msg.lon = 0.00154748244839;
    msg.z = 0.572048299961;
    msg.z_units = 38U;
    msg.speed = 0.803057122858;
    msg.speed_units = 240U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0785084383847;
    tmp_msg_0.y = 0.118350676312;
    tmp_msg_0.z = 0.48575749072;
    tmp_msg_0.t = 0.522670072477;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JQUZRJNBSXMMAIKGLFHNIFXVCALQKRLLBKHCBGXZVYUCAYQVSQTPWIMHWYBWJAATJPJUMRSWNIRPCBNGZFERIXIBTGNMTXQBVHEFHFWZGUDYONKLKPHIONCTHAUTLEHRCTQMZDAKXMJOSLPGEAXUDZQGVDOBZOZYFWSDVZRHAFOFDPTJYWMPSGYRBIPETINBEVKQMUXDHYEIJKVF");

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
    msg.setTimeStamp(0.0159184304109);
    msg.setSource(26926U);
    msg.setSourceEntity(102U);
    msg.setDestination(16792U);
    msg.setDestinationEntity(209U);
    msg.timeout = 944U;
    msg.lat = 0.00422782010981;
    msg.lon = 0.439540832236;
    msg.z = 0.234871034013;
    msg.z_units = 141U;
    msg.speed = 0.676134246833;
    msg.speed_units = 145U;
    msg.custom.assign("WCBRSEOJRLFFARGIDUXIXYZOLVDEEXYAKTMMQZWOBJOFYCOGNXMGGUHTWJOOIHSGXRLHMIWSSFPNHKDHUMJTQXRVPLDQFHUGMQVQZGCYTPDDNKZOKBALQTJSPRMJCAFNPBWKRATSKPWHZEKDCNWLAPUAMSBLAJWJPYQXCKUTNSWLFQNARVFNVIZPUFYVECBVHPISY");

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
    msg.setTimeStamp(0.0519505321788);
    msg.setSource(1800U);
    msg.setSourceEntity(159U);
    msg.setDestination(62253U);
    msg.setDestinationEntity(156U);
    msg.x = 0.123420387836;
    msg.y = 0.543953552532;
    msg.z = 0.203437951425;
    msg.t = 0.113237615811;

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
    msg.setTimeStamp(0.622065022552);
    msg.setSource(53330U);
    msg.setSourceEntity(254U);
    msg.setDestination(39094U);
    msg.setDestinationEntity(45U);
    msg.x = 0.62585508132;
    msg.y = 0.403220484593;
    msg.z = 0.328316843685;
    msg.t = 0.707048228128;

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
    msg.setTimeStamp(0.489081079843);
    msg.setSource(5976U);
    msg.setSourceEntity(149U);
    msg.setDestination(3455U);
    msg.setDestinationEntity(33U);
    msg.x = 0.203006362895;
    msg.y = 0.330266749702;
    msg.z = 0.963232651135;
    msg.t = 0.0392534797478;

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
    msg.setTimeStamp(0.416159110609);
    msg.setSource(21664U);
    msg.setSourceEntity(23U);
    msg.setDestination(56302U);
    msg.setDestinationEntity(71U);
    msg.timeout = 25534U;
    msg.name.assign("OAPJETVGSEBCEGYXNWKBZPEU");
    msg.custom.assign("IYWLJWGIPKUBPDZQTBFPUSCWKOXXLNAZDJKNBZWJQCPVITUTDUNHFNYKPJLQIDBSCRWWFUHZDSEMLATVTUZIFPFWOIHMPVODRNQXYODSIHRBILRELGLRQPQZFBTDCQRAMOHWHSFXITEIGYOQSGOYTOXBPGBXTDEYCHEJKWVERTAALCGYJNNAJSUUCZEGUZYNWVKGMOEZSVKGRXQXJHVHUFESKADLNMVAJQXCCRMKPJEVMHAMSLFBBMNZMR");

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
    msg.setTimeStamp(0.530615391906);
    msg.setSource(59111U);
    msg.setSourceEntity(225U);
    msg.setDestination(5875U);
    msg.setDestinationEntity(111U);
    msg.timeout = 4425U;
    msg.name.assign("DBGOLBUCCXQEKXFCMFDKEFUOSLUROJHZPEXYRRNDZAGBOSPHYTBNTQVYQWVTYNWOMWOLZSROHJWNNHQYGJFKJYAZJ");
    msg.custom.assign("RCDZNIUIGEDBQXCFRZTSKRJWKYYPMNAZWBPFOCHOEUOFCXXGLECOSEGCVISFUQCGKDZPEBTVD");

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
    msg.setTimeStamp(0.0283101693599);
    msg.setSource(52348U);
    msg.setSourceEntity(92U);
    msg.setDestination(737U);
    msg.setDestinationEntity(231U);
    msg.timeout = 8659U;
    msg.name.assign("PQMPRMBFFHCBVFVFORXISYACWCXKSDEUUEMKNOZVYHLVNJOQUVIBEGYHVFBTGQEPISMWVPJWLIDDTGPZQEQGQTYXLOPOKUAROHWESSDJUGADCLYDQCMLABHTNHIBJCMRABKRTFJHWTSXSYVMJBGIENWBCPDMHJYARDWJGZFPHHUTSSNZUKX");
    msg.custom.assign("KWAXPQLEFVLKWYFYJOIBURZXGCKFDEVXT");

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
    msg.setTimeStamp(0.290658440957);
    msg.setSource(44431U);
    msg.setSourceEntity(229U);
    msg.setDestination(44042U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.168872520155;
    msg.lon = 0.182165882491;
    msg.z = 0.883104824384;
    msg.z_units = 53U;
    msg.speed = 0.389361519768;
    msg.speed_units = 4U;
    msg.start_time = 0.640852915591;
    msg.custom.assign("REQMKBHWRHUGZQSNEWBKYBOSWGMZZXFLZKNXVJOCEKWIPLJQJRMTGUWETHWLDYQOFCLDYGJSTOBKPSCMFKBDJVGUXPORJSUZWBCMGFWQUIKJIPQHIXKFMDPRIREAVAPYHRBVMIZIUXIUDMTEUUZCLERFDEUITJHCTVZNFGJECDXNNQMNCOASLJACHHVNCITVAAXLBRSPDOGNEGYVADTYAWHFOKDZVWXAGYQYTSLY");

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
    msg.setTimeStamp(0.802660797806);
    msg.setSource(18669U);
    msg.setSourceEntity(144U);
    msg.setDestination(13707U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.255731535223;
    msg.lon = 0.112305299093;
    msg.z = 0.855147950077;
    msg.z_units = 11U;
    msg.speed = 0.458012718809;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.276960774374;
    tmp_msg_0.y = 0.948630524793;
    tmp_msg_0.z = 0.8010702598;
    tmp_msg_0.t = 0.0381614581992;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.804092908644;
    msg.custom.assign("ZVRKROZANABOPYQJNPMBLJWFKZEVDPZFSGRERREENVDNPFTJUDVQAFMLLUSAWDYFGYJKCWXLJSTQYXFXTHZADUYLSLPVYHIQOQOUSJBZOMGOJUGKCRCBODCWDKCVYIILKLAQKIVHNPGUUZBWTSUHXIFPWIKNBTXWMMKZXNTSHXZWLMXQDRNTYSGVNJKIQCAMVHIMMISBVSFCFAHEBCCERAEEP");

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
    msg.setTimeStamp(0.618253180624);
    msg.setSource(29680U);
    msg.setSourceEntity(162U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.111378238668;
    msg.lon = 0.508910168413;
    msg.z = 0.944557567208;
    msg.z_units = 97U;
    msg.speed = 0.0406933809323;
    msg.speed_units = 250U;
    msg.start_time = 0.892422934225;
    msg.custom.assign("VILXEYPUCFHYOSEYHSUVDTWRCRFNOCXSZBZGWTKMWQQRONPSGEIDCPTHQLXXVICOBLVQWHLLFICAXCBUZUFKLAYOWHHHJQBGIJKDMQJFYRADPMMZQBTTKZJYJVMGRRXXMTFPJJNFQNUMDKANKDIBIEJUOZEBTBICERGSYNPXQALICWDESHABOILPOUVVEKESYZSKRVADKZVGPLPGGNTWUBPURZMGSJYGNH");

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
    msg.setTimeStamp(0.654270142039);
    msg.setSource(54917U);
    msg.setSourceEntity(107U);
    msg.setDestination(17809U);
    msg.setDestinationEntity(115U);
    msg.vid = 56356U;
    msg.off_x = 0.486259866927;
    msg.off_y = 0.403587776038;
    msg.off_z = 0.276146287573;

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
    msg.setTimeStamp(0.0689930586367);
    msg.setSource(43702U);
    msg.setSourceEntity(70U);
    msg.setDestination(16620U);
    msg.setDestinationEntity(197U);
    msg.vid = 36400U;
    msg.off_x = 0.178558496315;
    msg.off_y = 0.241943382602;
    msg.off_z = 0.659201399761;

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
    msg.setTimeStamp(0.0547577245418);
    msg.setSource(30564U);
    msg.setSourceEntity(121U);
    msg.setDestination(22792U);
    msg.setDestinationEntity(125U);
    msg.vid = 44541U;
    msg.off_x = 0.860502393914;
    msg.off_y = 0.38300539915;
    msg.off_z = 0.50022547958;

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
    msg.setTimeStamp(0.629197003123);
    msg.setSource(39290U);
    msg.setSourceEntity(58U);
    msg.setDestination(3712U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.903183999808);
    msg.setSource(8636U);
    msg.setSourceEntity(118U);
    msg.setDestination(878U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.883719301969);
    msg.setSource(8188U);
    msg.setSourceEntity(65U);
    msg.setDestination(38519U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.328034108924);
    msg.setSource(46082U);
    msg.setSourceEntity(254U);
    msg.setDestination(53849U);
    msg.setDestinationEntity(182U);
    msg.mid = 18633U;

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
    msg.setTimeStamp(0.502600306146);
    msg.setSource(40794U);
    msg.setSourceEntity(213U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(238U);
    msg.mid = 19676U;

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
    msg.setTimeStamp(0.821093430972);
    msg.setSource(32681U);
    msg.setSourceEntity(109U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(227U);
    msg.mid = 61702U;

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
    msg.setTimeStamp(0.369509304526);
    msg.setSource(19695U);
    msg.setSourceEntity(23U);
    msg.setDestination(37729U);
    msg.setDestinationEntity(205U);
    msg.state = 131U;
    msg.eta = 58200U;
    msg.info.assign("SGEECFKBHWYFAVZZEEKFRNTPZDTMJCOANBZOBTCHNAWJICPNFCHAVUDUNMJUYFNTYVXLQZKLZGWWYOUWEGMJRMEADHRAPFSWEYGGKXLOVMRUYKYOYIPLGDXLJLSAALSDWWMXHQOIPCRNXZTADUXIJVSBCMLNSWOQVNRKBMIUHBSTNJHVHGQHXXDFFGPBFISUQVZGZPTEOSMQCJYPCXBOMDUJRSRLKBDKTXVJIGWPQQFDPELIAUO");

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
    msg.setTimeStamp(0.88673492791);
    msg.setSource(49473U);
    msg.setSourceEntity(103U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(238U);
    msg.state = 105U;
    msg.eta = 12895U;
    msg.info.assign("QRNTSKXROEMSMILEUCCYQONLYFGRCGVTDPWBDHRNBQINRZDECXKSWVOQQGFWLEQPJKUIMCWBXTMYBMQDLDATODKSOMXRHPHEYPSLJQYMZJLLPSTGNBEKBRTZVFREPFSUZBOWGAULFLIGHPKFKSFJVTIAZWYABNXGKCZ");

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
    msg.setTimeStamp(0.935660718147);
    msg.setSource(27770U);
    msg.setSourceEntity(57U);
    msg.setDestination(37999U);
    msg.setDestinationEntity(252U);
    msg.state = 50U;
    msg.eta = 38219U;
    msg.info.assign("WZZTAXRVHNQUHKFMEUCNMFIOFOHWZYJMQOLTHKOYIRB");

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
    msg.setTimeStamp(0.734524366824);
    msg.setSource(19991U);
    msg.setSourceEntity(120U);
    msg.setDestination(32368U);
    msg.setDestinationEntity(190U);
    msg.system = 7841U;
    msg.duration = 522U;
    msg.speed = 0.0831060582854;
    msg.speed_units = 225U;
    msg.x = 0.174643741058;
    msg.y = 0.77864424457;
    msg.z = 0.178794531037;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.429404134379);
    msg.setSource(54635U);
    msg.setSourceEntity(11U);
    msg.setDestination(30571U);
    msg.setDestinationEntity(15U);
    msg.system = 21888U;
    msg.duration = 65410U;
    msg.speed = 0.268490402698;
    msg.speed_units = 167U;
    msg.x = 0.867195127885;
    msg.y = 0.629124334881;
    msg.z = 0.904710315525;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.726442016705);
    msg.setSource(36786U);
    msg.setSourceEntity(126U);
    msg.setDestination(61893U);
    msg.setDestinationEntity(33U);
    msg.system = 48962U;
    msg.duration = 59183U;
    msg.speed = 0.608912134482;
    msg.speed_units = 104U;
    msg.x = 0.836226924088;
    msg.y = 0.913185256275;
    msg.z = 0.766845720702;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.894547748202);
    msg.setSource(41391U);
    msg.setSourceEntity(104U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.248788662665;
    msg.lon = 0.213872791792;
    msg.speed = 0.297492136986;
    msg.speed_units = 215U;
    msg.duration = 13928U;
    msg.sys_a = 44176U;
    msg.sys_b = 39993U;
    msg.move_threshold = 0.266927757878;

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
    msg.setTimeStamp(0.304744882328);
    msg.setSource(6824U);
    msg.setSourceEntity(93U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.640498232278;
    msg.lon = 0.46092949372;
    msg.speed = 0.417615129879;
    msg.speed_units = 80U;
    msg.duration = 35461U;
    msg.sys_a = 43263U;
    msg.sys_b = 32846U;
    msg.move_threshold = 0.515853133032;

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
    msg.setTimeStamp(0.467261456447);
    msg.setSource(11418U);
    msg.setSourceEntity(60U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.830064635039;
    msg.lon = 0.432781786966;
    msg.speed = 0.617354789034;
    msg.speed_units = 192U;
    msg.duration = 18283U;
    msg.sys_a = 53617U;
    msg.sys_b = 60942U;
    msg.move_threshold = 0.125970959027;

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
    msg.setTimeStamp(0.184714263373);
    msg.setSource(38639U);
    msg.setSourceEntity(135U);
    msg.setDestination(62211U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.146661241687;
    msg.lon = 0.373735212959;
    msg.z = 0.936892784602;
    msg.z_units = 208U;
    msg.speed = 0.682022489133;
    msg.speed_units = 75U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.275231817367;
    tmp_msg_0.lon = 0.813712126868;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MJPQSSUCXUZEDOFYBHXOCSXIOOAHHTTNXIWMQOVFJIFMJKWUURTCNDERBIAOHKNGYAPZMVNGHZLZQLVRWGZYJQAEBGDVLPJBCGOKIETDGR");

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
    msg.setTimeStamp(0.580864242353);
    msg.setSource(56416U);
    msg.setSourceEntity(129U);
    msg.setDestination(37183U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.48312318486;
    msg.lon = 0.454656749219;
    msg.z = 0.59941327024;
    msg.z_units = 124U;
    msg.speed = 0.417601570456;
    msg.speed_units = 220U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.628607239;
    tmp_msg_0.lon = 0.340293503702;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VXQZMGBRNEWGAFL");

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
    msg.setTimeStamp(0.734056300744);
    msg.setSource(4121U);
    msg.setSourceEntity(84U);
    msg.setDestination(54075U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.0805493063759;
    msg.lon = 0.383609983103;
    msg.z = 0.349625366324;
    msg.z_units = 76U;
    msg.speed = 0.815177064431;
    msg.speed_units = 91U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6421024494;
    tmp_msg_0.lon = 0.976932278623;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DGQYRUNXNJMKXJHIACOHXEQIZLMELWANBPSSDDZFNAPYRELYYZKJIWLIGMPMTCXXUSVGWXJPQRZTLDWGCHRDRQSYLTUPTGKYFLOIWVECKPXBRFMHDQJUTDPOCBSDAQ");

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
    msg.setTimeStamp(0.194150371759);
    msg.setSource(40599U);
    msg.setSourceEntity(252U);
    msg.setDestination(49927U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.336464097114;
    msg.lon = 0.717289105843;

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
    msg.setTimeStamp(0.169055686025);
    msg.setSource(33705U);
    msg.setSourceEntity(128U);
    msg.setDestination(62113U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.846358776405;
    msg.lon = 0.76020340253;

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
    msg.setTimeStamp(0.871386458187);
    msg.setSource(57226U);
    msg.setSourceEntity(70U);
    msg.setDestination(44156U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.763795023544;
    msg.lon = 0.474692364408;

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
    msg.setTimeStamp(0.311813586052);
    msg.setSource(44815U);
    msg.setSourceEntity(122U);
    msg.setDestination(34726U);
    msg.setDestinationEntity(168U);
    msg.timeout = 64142U;
    msg.lat = 0.941461813989;
    msg.lon = 0.558485000605;
    msg.z = 0.301994518358;
    msg.z_units = 171U;
    msg.pitch = 0.259994743854;
    msg.amplitude = 0.103618924015;
    msg.duration = 28876U;
    msg.speed = 0.594556835821;
    msg.speed_units = 116U;
    msg.radius = 0.0324841431344;
    msg.direction = 115U;
    msg.custom.assign("CRHIRGTQMWWDTTUSQSCYUSWGBKWZZTEHIENBNKHGMOPBXCEAXRFPNGOGWJUEBLXGJMNCGKZPQEUSGIVDYLUWTKDRJXNJFSMWSBQXPKAAPWADLYVOATCGZPDVPRFAFXKFEIWRFLHVYCVCLBZNNYXCYRHOYFQIYJDE");

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
    msg.setTimeStamp(0.486432173334);
    msg.setSource(25930U);
    msg.setSourceEntity(80U);
    msg.setDestination(52350U);
    msg.setDestinationEntity(209U);
    msg.timeout = 62721U;
    msg.lat = 0.377839833715;
    msg.lon = 0.311630801058;
    msg.z = 0.919233303017;
    msg.z_units = 185U;
    msg.pitch = 0.885916523316;
    msg.amplitude = 0.47181808188;
    msg.duration = 61637U;
    msg.speed = 0.368770284923;
    msg.speed_units = 143U;
    msg.radius = 0.824846302174;
    msg.direction = 125U;
    msg.custom.assign("LASMFDLXWRTBZJRRGXPKRBCFSJUZOEHWNWGNUEGTGHOAQIGKYKIXFPLRF");

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
    msg.setTimeStamp(0.469695059831);
    msg.setSource(1813U);
    msg.setSourceEntity(136U);
    msg.setDestination(56925U);
    msg.setDestinationEntity(171U);
    msg.timeout = 7525U;
    msg.lat = 0.74502974455;
    msg.lon = 0.295033311409;
    msg.z = 0.368782372642;
    msg.z_units = 168U;
    msg.pitch = 0.131690730134;
    msg.amplitude = 0.614895692662;
    msg.duration = 61852U;
    msg.speed = 0.771020600466;
    msg.speed_units = 98U;
    msg.radius = 0.877689942289;
    msg.direction = 241U;
    msg.custom.assign("YRYGOMKIYNYUGPZPWNABZRPMZGLHMKFVEETRPDSQOGFOWFYKVRJQZOTWUACHSJQGAMREAQXBNDFJTPSRJVBCVIKSXIAEWWSXWBQHIYDKGCKXSDGOOPHSXYLPWCWNFNJJQTLCVKM");

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
    msg.setTimeStamp(0.146427230017);
    msg.setSource(58280U);
    msg.setSourceEntity(160U);
    msg.setDestination(3580U);
    msg.setDestinationEntity(141U);
    msg.control_src = 39014U;
    msg.control_ent = 76U;
    msg.timeout = 0.189357652921;
    msg.loiter_radius = 0.491210018012;
    msg.altitude_interval = 0.208023283408;

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
    msg.setTimeStamp(0.372566062119);
    msg.setSource(48199U);
    msg.setSourceEntity(109U);
    msg.setDestination(29443U);
    msg.setDestinationEntity(122U);
    msg.control_src = 51819U;
    msg.control_ent = 62U;
    msg.timeout = 0.245803690497;
    msg.loiter_radius = 0.104868108908;
    msg.altitude_interval = 0.0616847959937;

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
    msg.setTimeStamp(0.964019868647);
    msg.setSource(13054U);
    msg.setSourceEntity(19U);
    msg.setDestination(53520U);
    msg.setDestinationEntity(197U);
    msg.control_src = 42110U;
    msg.control_ent = 3U;
    msg.timeout = 0.763858569771;
    msg.loiter_radius = 0.640091918725;
    msg.altitude_interval = 0.234261360349;

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
    msg.setTimeStamp(0.952868588742);
    msg.setSource(60829U);
    msg.setSourceEntity(39U);
    msg.setDestination(10193U);
    msg.setDestinationEntity(76U);
    msg.flags = 244U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.947304546355;
    tmp_msg_0.speed_units = 229U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.732313841495;
    tmp_msg_1.z_units = 154U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.220940647504;
    msg.lon = 0.135318148219;
    msg.radius = 0.925001115141;

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
    msg.setTimeStamp(0.511010283102);
    msg.setSource(34974U);
    msg.setSourceEntity(166U);
    msg.setDestination(11872U);
    msg.setDestinationEntity(214U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.718021732466;
    tmp_msg_0.speed_units = 225U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.806078443031;
    tmp_msg_1.z_units = 17U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.898689812058;
    msg.lon = 0.742505178694;
    msg.radius = 0.657396314723;

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
    msg.setTimeStamp(0.884284287046);
    msg.setSource(22019U);
    msg.setSourceEntity(221U);
    msg.setDestination(18380U);
    msg.setDestinationEntity(207U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.813473972845;
    tmp_msg_0.speed_units = 114U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0930871933808;
    tmp_msg_1.z_units = 173U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.488388464985;
    msg.lon = 0.566853148287;
    msg.radius = 0.796112676782;

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
    msg.setTimeStamp(0.245736647612);
    msg.setSource(52486U);
    msg.setSourceEntity(61U);
    msg.setDestination(20076U);
    msg.setDestinationEntity(238U);
    msg.control_src = 159U;
    msg.control_ent = 124U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 177U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.228326084651;
    tmp_tmp_msg_0_0.speed_units = 172U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.866422896154;
    tmp_tmp_msg_0_1.z_units = 159U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.105722617055;
    tmp_msg_0.lon = 0.7550944545;
    tmp_msg_0.radius = 0.0541296507622;
    msg.reference.set(tmp_msg_0);
    msg.state = 142U;
    msg.proximity = 208U;

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
    msg.setTimeStamp(0.45604032622);
    msg.setSource(62756U);
    msg.setSourceEntity(181U);
    msg.setDestination(52048U);
    msg.setDestinationEntity(186U);
    msg.control_src = 44567U;
    msg.control_ent = 195U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 10U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.323290312293;
    tmp_tmp_msg_0_0.speed_units = 117U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.736692698254;
    tmp_tmp_msg_0_1.z_units = 172U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0647234084831;
    tmp_msg_0.lon = 0.649090241976;
    tmp_msg_0.radius = 0.809881068863;
    msg.reference.set(tmp_msg_0);
    msg.state = 152U;
    msg.proximity = 105U;

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
    msg.setTimeStamp(0.0970598324997);
    msg.setSource(53329U);
    msg.setSourceEntity(94U);
    msg.setDestination(65429U);
    msg.setDestinationEntity(72U);
    msg.control_src = 7409U;
    msg.control_ent = 75U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.608090968394;
    tmp_tmp_msg_0_0.speed_units = 67U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.475291346914;
    tmp_tmp_msg_0_1.z_units = 7U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.348929395593;
    tmp_msg_0.lon = 0.404571818187;
    tmp_msg_0.radius = 0.140402624387;
    msg.reference.set(tmp_msg_0);
    msg.state = 30U;
    msg.proximity = 102U;

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
    msg.setTimeStamp(0.186655474307);
    msg.setSource(22233U);
    msg.setSourceEntity(67U);
    msg.setDestination(32380U);
    msg.setDestinationEntity(66U);
    msg.op_mode = 137U;
    msg.error_count = 190U;
    msg.error_ents.assign("FSQPCKHHKAXVEZLQJUCLBDNOWOVBYHWVXBBYSOYTYSGLTXIGYSRGXTVLCJCTKMWAMHCKUPCQZNOJOWNPSCUBBDMQWWNFUBJZFAEQEEMXDVYGJQUIRSOEMKDCIKGHUMFFBKFQRPGEHDIRJXZPTGTTLYYHPOPNFQFZRAZOFLKZDXOGLCNYUHJVANICZJWDLHAIGMPAPRJKNMTINMRUAXMNELSDOVSWJW");
    msg.maneuver_type = 2401U;
    msg.maneuver_stime = 0.0563524742334;
    msg.maneuver_eta = 55618U;
    msg.control_loops = 3542716239U;
    msg.flags = 146U;
    msg.last_error.assign("MJRQYDEEYAPSQUBBIBHEBAZUASCZWBALAGOTKUSNUHFZUVBGMZLJEHZRYYCPQOLTRYEDCNKVAKHRHRNVVRCGUXNDZCXBWZMOOFUXUYQXNXFQIXKYFNGCIHNMQWJECAUSGKHDIEGALDLJWMCNSPGTEONCSOWNSBJUSJWVOHXJRBMIMKDXJYHHFIYTKTZRIVOSZIQCLPXTOKPDDGAKQDLFLPYVPWTF");
    msg.last_error_time = 0.94896335878;

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
    msg.setTimeStamp(0.375517493095);
    msg.setSource(21559U);
    msg.setSourceEntity(64U);
    msg.setDestination(47848U);
    msg.setDestinationEntity(12U);
    msg.op_mode = 152U;
    msg.error_count = 189U;
    msg.error_ents.assign("KUSTEYKSLVPXXBPCVXPKBYFSHJMLIAOURHWZXRDMPBXRKY");
    msg.maneuver_type = 8363U;
    msg.maneuver_stime = 0.58119408125;
    msg.maneuver_eta = 50156U;
    msg.control_loops = 1174122049U;
    msg.flags = 22U;
    msg.last_error.assign("WOAVARTUXNRTXXABXLOJZWHOYUIHNIGGKIMSPFEERSMQWRKYSULEBPPE");
    msg.last_error_time = 0.171252406557;

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
    msg.setTimeStamp(0.470826909258);
    msg.setSource(13110U);
    msg.setSourceEntity(142U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(19U);
    msg.op_mode = 16U;
    msg.error_count = 162U;
    msg.error_ents.assign("PECOJVFDQLSEFYBJKHURAGRFNQMSAHXGBVHSHOHRYNUFHXKOIMZUAAGMLCZUDQUKRIXRUWWBNFTLKEYYMVDIKTDFWLPESIYOBSNQXQIVJVQDSPPPGHQAOCODXZHBOJITNXEDMMQUXDBWNMYGZGTQETIJVHOJSWZMRAZHPUQCLJLIBTELTSXSKCVRFDAWUGFJCMZULYBECJPE");
    msg.maneuver_type = 42995U;
    msg.maneuver_stime = 0.564295929046;
    msg.maneuver_eta = 52681U;
    msg.control_loops = 2350453382U;
    msg.flags = 14U;
    msg.last_error.assign("EQOXXETZMXAKNYKMDETJEROVEPCQRVUQRXKVOBGUSRWANWRZRHBYDNVVDCGICWPDGTKOTLHOTOEUVCYUQUZFMMSIAJDQKCEJHUSNFDGPVPLGFWQNWXIRIQLMEJIWKJGAMBFNGXEOXQ");
    msg.last_error_time = 0.968494907886;

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
    msg.setTimeStamp(0.698620504101);
    msg.setSource(51517U);
    msg.setSourceEntity(108U);
    msg.setDestination(38102U);
    msg.setDestinationEntity(223U);
    msg.type = 139U;
    msg.request_id = 38152U;
    msg.command = 56U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 9539U;
    tmp_msg_0.lat = 0.0122405397648;
    tmp_msg_0.lon = 0.908954104844;
    tmp_msg_0.z = 0.839588424536;
    tmp_msg_0.z_units = 31U;
    tmp_msg_0.speed = 0.856845828278;
    tmp_msg_0.speed_units = 170U;
    tmp_msg_0.custom.assign("FYATRVIHZEDDAEOHEILOPNCSCUDNSRPDJSDNEOGIOKJAALRUHCGXDSM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3795U;
    msg.info.assign("GRVTRSCNFFVOJMKWMVSHVIBFTQSVNLILNEAAQWQHBLPUXRTVBMDZZFXFZEUOJYMBPZLDBRCXKOESE");

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
    msg.setTimeStamp(0.656009927436);
    msg.setSource(1001U);
    msg.setSourceEntity(187U);
    msg.setDestination(11674U);
    msg.setDestinationEntity(175U);
    msg.type = 14U;
    msg.request_id = 33795U;
    msg.command = 110U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 56179U;
    tmp_msg_0.lat = 0.978474534821;
    tmp_msg_0.lon = 0.108709144548;
    tmp_msg_0.z = 0.648533972192;
    tmp_msg_0.z_units = 197U;
    tmp_msg_0.amplitude = 0.00414012805977;
    tmp_msg_0.pitch = 0.458380154616;
    tmp_msg_0.speed = 0.925591702059;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.custom.assign("USHPDVYFPKEVCKWZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49512U;
    msg.info.assign("HOTPFBNTPTMFRFQAFYFLJGXTARRHLPVQJTOZASOWHNHEYIAAMTGIMWUBVUUXQYSCMIVGCPUJDIHLWEXSGBLPXJCGDXFDWXLSQPHIQKKYZNASEVVECIYKOOJMQGKSYVRXAWMCUOWORQDZTLLPTTJHJJFRTKUCIGGZXKKBSPNSBPRVKQGCDILFEVYZDAFUJUOKSENCUBWPHLMMNYMNBYRGHZEDBJKHDBZVZWUZXNRSDVNZIFQMOQR");

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
    msg.setTimeStamp(0.79709277503);
    msg.setSource(46036U);
    msg.setSourceEntity(0U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(53U);
    msg.type = 124U;
    msg.request_id = 48314U;
    msg.command = 241U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 33572U;
    tmp_msg_0.lat = 0.885507440289;
    tmp_msg_0.lon = 0.857125098222;
    tmp_msg_0.z = 0.753014777624;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.136737959713;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.custom.assign("FAYJWGUCCGIQHGMQDCFMCISPEPVXMATWOGWYDKHFRZSGIKTQUIUKWZORUWLTJOXNTJBEXBQMYSSASRIGITEMSWBRRJYD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41289U;
    msg.info.assign("CVPMGRPYTJGLCTMTJBDUY");

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
    msg.setTimeStamp(0.651853062516);
    msg.setSource(604U);
    msg.setSourceEntity(143U);
    msg.setDestination(27019U);
    msg.setDestinationEntity(129U);
    msg.command = 2U;
    msg.entities.assign("UQLNVYAUASBJYDDTKMNTTMOBQPI");

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
    msg.setTimeStamp(0.38257013945);
    msg.setSource(5157U);
    msg.setSourceEntity(5U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(177U);
    msg.command = 42U;
    msg.entities.assign("KVRIOHDEOUWTFXFKVYNCWPNAZZBWCAEPDQFJOHIGUADWLKVZT");

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
    msg.setTimeStamp(0.25355350456);
    msg.setSource(32068U);
    msg.setSourceEntity(142U);
    msg.setDestination(34899U);
    msg.setDestinationEntity(208U);
    msg.command = 172U;
    msg.entities.assign("MKGDXDQQVUGXTFRCSNFHLIJTEWLZMJXVVTQNJUODSQCOORRZMRMANPRVITYFNJCBEGORZIN");

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
    msg.setTimeStamp(0.565752753997);
    msg.setSource(53849U);
    msg.setSourceEntity(106U);
    msg.setDestination(17462U);
    msg.setDestinationEntity(166U);
    msg.mcount = 13U;
    msg.mnames.assign("ZRBZSECGXBXNHVAMZHNGOYVOXSTWKQULVYRHEEOQNQRMMJEZRYRSAKIJVOXXAWLKPQTAGFUSVNLUCNKLFBDCPMMEVKJWDSNGFFGUKOMCWTOVJZKWCQHYRUYMPUGOCTIRBJFGAUOIQDSMSJDQPVGHBY");
    msg.ecount = 253U;
    msg.enames.assign("CHEKGLFUGJUPABWJLGWDQKOUDZIHLMKVSTUWUVRBCVBINSXSOCDMSCUYPANHUTSAGZWEASPZUJYYKJQYJNLQOB");
    msg.ccount = 189U;
    msg.cnames.assign("FXRBWRTKUUBIULFNIKJPMEZWXRRACDEGAKNADTOLPNGVJOKMTXOHDATGERDQSUIWMIRPRKEVPZGIQLKUAPEDRBQUFAKGTMDQEZPVOWJBPOLNQUREZNQQYPVGASRVHBBGHWWMFMNJJFJJSSKUNCIWIULUVSPYIHSOZKLGDFCTZLCGCESVXAOEYZYJEODJFMZYV");
    msg.last_error.assign("XEWCDQLFHBITKNVMUCKMYARMFUPQDEOKRWFULULNPEZGEMYZWNMIRQBNAWCIVAHTNZZCWRJDNSFNGKCVZMHMXSOYYZQPALJZPVKTISULXPODJFRWGRRBTCILOMNXQAAJOGPPQUYGGO");
    msg.last_error_time = 0.464148005204;

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
    msg.setTimeStamp(0.77904860224);
    msg.setSource(13853U);
    msg.setSourceEntity(174U);
    msg.setDestination(55176U);
    msg.setDestinationEntity(145U);
    msg.mcount = 220U;
    msg.mnames.assign("FNNUKDFGVPAUAPCQNRTIEJVVEZXTQWPUXKWGGKWUYSRHYPMDBECSJQNRCWIFIGDGLQINGKUXEOZXFMQOAIBCPHEFURVODLXRSHXOHMSRRAMTDZUHBFTZJWBLYYWDACOSNAZNEBPNGMKHHMOI");
    msg.ecount = 25U;
    msg.enames.assign("DFGWWZHSLOKZOXYAMNQPWSYFHQRBJJISYQNORYFOMCWBKXOGOJGTVLUVIWKKYBKQFQQGFSRHPSSCUZNSNZEJHFPDTXEAOBVQPPIZZWNRXYCSQDWVGAUMKFMVGM");
    msg.ccount = 165U;
    msg.cnames.assign("KGQFDJZMFUBCNYVNZCKRMDSIAPLTBTQKGDRXFETEPMCJFQEGQROLJLYYQXUZONIQVWWAAALSWBXAYBORNVTKQL");
    msg.last_error.assign("CAWBMRWBRGJLNERFKJJHLXXQNDAMYVPPZVOCVCOGPDGHODRNBMFAHLNLXUFQXDWXBBXDKZBSOUPKDSSAEIYEGGMVMYTHAYJOIDETSRKJIQVTFFKYUWIGELEJRZMTLVDLFCUAPWZKYWONHOJLYIEQJCSIPQKZADIZTKHBVATNZYLYNZXQUOZ");
    msg.last_error_time = 0.158410247259;

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
    msg.setTimeStamp(0.396834769021);
    msg.setSource(60914U);
    msg.setSourceEntity(166U);
    msg.setDestination(16600U);
    msg.setDestinationEntity(208U);
    msg.mcount = 77U;
    msg.mnames.assign("DMFNCKTJIOYMEGINMMKMTBBPMCIJGUQZYDHPTDGSIJGZWYGUCDUQCQWULKNUJACXNGELAOZRPEWKOENHQBCKFRQHWL");
    msg.ecount = 17U;
    msg.enames.assign("DFKDZLQPWLEVFCASYZPGLHTGOKABNSMGRDYJCKBOIYAGRXMTSSWQBYTLJNGNRACKHLHWKUQCJPZYLVRWIVCXOVVEMJIKUBFSMFICACSOTTBAXNIDIQYGUO");
    msg.ccount = 242U;
    msg.cnames.assign("KUCZPNJBZIKDYIKGSEQZIXXVOKDDSBFBYXDGCWWUAFWELBGYHLRJRJZMVPFYHUEQCEXEONXNFCQAYERJMTRQAPTLQNDFMPDHCLWSMQJNWBPUYIRESDBNUBSRGNOMVTAMTWFZHHAXIOJMODZHUKQLFLTFVSSLTCSAKFSHIWJQAUXBOIIDYPGOVIQAVYFVPSXWPKPRMTUVLCBVZZNIBPMUHKCEYZWYRXGGHDLUCTZKEN");
    msg.last_error.assign("JASYEOCFHNWZAEVULVFOKGTXKZLEKNRBKYHPJYPCUZYWBHZBBETYBXNXVXGFJRVURAIQOMANYXYRIVXAMSBLWGPRTPOMQRPMNPZDGJZIKDZFDMRYEQMBQDGUCYJSWFOKLCMRWLFJTHNUOIBKCUZUIKHSRVMOTAXZTGJGOVXEWUUQ");
    msg.last_error_time = 0.393749084037;

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
    msg.setTimeStamp(0.389545662413);
    msg.setSource(39381U);
    msg.setSourceEntity(97U);
    msg.setDestination(5230U);
    msg.setDestinationEntity(244U);
    msg.mask = 90U;
    msg.max_depth = 0.502637028344;
    msg.min_altitude = 0.30159373974;
    msg.max_altitude = 0.280199112156;
    msg.min_speed = 0.740247410181;
    msg.max_speed = 0.0382018347371;
    msg.max_vrate = 0.366755212586;
    msg.lat = 0.166021074789;
    msg.lon = 0.861661098957;
    msg.orientation = 0.34560486043;
    msg.width = 0.345770467223;
    msg.length = 0.728748719733;

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
    msg.setTimeStamp(0.863706554345);
    msg.setSource(21919U);
    msg.setSourceEntity(236U);
    msg.setDestination(40667U);
    msg.setDestinationEntity(76U);
    msg.mask = 23U;
    msg.max_depth = 0.336133942415;
    msg.min_altitude = 0.546004658074;
    msg.max_altitude = 0.269775493139;
    msg.min_speed = 0.468829734828;
    msg.max_speed = 0.907627482095;
    msg.max_vrate = 0.905508159359;
    msg.lat = 0.872156072945;
    msg.lon = 0.0372191799323;
    msg.orientation = 0.195532456933;
    msg.width = 0.968420282657;
    msg.length = 0.664102720655;

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
    msg.setTimeStamp(0.975775601061);
    msg.setSource(58986U);
    msg.setSourceEntity(64U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(101U);
    msg.mask = 132U;
    msg.max_depth = 0.385211556772;
    msg.min_altitude = 0.402857823048;
    msg.max_altitude = 0.954735030299;
    msg.min_speed = 0.982488326111;
    msg.max_speed = 0.0135224765464;
    msg.max_vrate = 0.707279256973;
    msg.lat = 0.129472238818;
    msg.lon = 0.53644681117;
    msg.orientation = 0.456002290731;
    msg.width = 0.466962720159;
    msg.length = 0.694228980786;

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
    msg.setTimeStamp(0.618548389583);
    msg.setSource(14754U);
    msg.setSourceEntity(177U);
    msg.setDestination(9651U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.285549542861);
    msg.setSource(3799U);
    msg.setSourceEntity(150U);
    msg.setDestination(3738U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.047048710738);
    msg.setSource(63059U);
    msg.setSourceEntity(32U);
    msg.setDestination(7068U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.415081195207);
    msg.setSource(53301U);
    msg.setSourceEntity(231U);
    msg.setDestination(43759U);
    msg.setDestinationEntity(91U);
    msg.duration = 3063U;

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
    msg.setTimeStamp(0.543749486652);
    msg.setSource(51708U);
    msg.setSourceEntity(161U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(64U);
    msg.duration = 57225U;

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
    msg.setTimeStamp(0.834211798988);
    msg.setSource(25575U);
    msg.setSourceEntity(144U);
    msg.setDestination(41855U);
    msg.setDestinationEntity(80U);
    msg.duration = 2620U;

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
    msg.setTimeStamp(0.023443754287);
    msg.setSource(61836U);
    msg.setSourceEntity(109U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(110U);
    msg.enable = 121U;
    msg.mask = 1753018028U;
    msg.scope_ref = 0.44118457362;

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
    msg.setTimeStamp(0.947701874216);
    msg.setSource(32965U);
    msg.setSourceEntity(173U);
    msg.setDestination(50482U);
    msg.setDestinationEntity(82U);
    msg.enable = 81U;
    msg.mask = 4129562456U;
    msg.scope_ref = 0.772955961065;

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
    msg.setTimeStamp(0.536252061633);
    msg.setSource(27311U);
    msg.setSourceEntity(186U);
    msg.setDestination(4763U);
    msg.setDestinationEntity(208U);
    msg.enable = 178U;
    msg.mask = 181854839U;
    msg.scope_ref = 0.602857288088;

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
    msg.setTimeStamp(0.426226289449);
    msg.setSource(2578U);
    msg.setSourceEntity(108U);
    msg.setDestination(10502U);
    msg.setDestinationEntity(40U);
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
    msg.setTimeStamp(0.119574948511);
    msg.setSource(21641U);
    msg.setSourceEntity(39U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(231U);
    msg.medium = 115U;

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
    msg.setTimeStamp(0.658125326409);
    msg.setSource(32325U);
    msg.setSourceEntity(60U);
    msg.setDestination(23165U);
    msg.setDestinationEntity(138U);
    msg.medium = 9U;

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
    msg.setTimeStamp(0.678196202492);
    msg.setSource(22756U);
    msg.setSourceEntity(227U);
    msg.setDestination(46638U);
    msg.setDestinationEntity(80U);
    msg.value = 0.489811139136;
    msg.type = 214U;

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
    msg.setTimeStamp(0.215119951137);
    msg.setSource(41028U);
    msg.setSourceEntity(127U);
    msg.setDestination(65139U);
    msg.setDestinationEntity(132U);
    msg.value = 0.792835748663;
    msg.type = 161U;

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
    msg.setTimeStamp(0.600264063164);
    msg.setSource(19333U);
    msg.setSourceEntity(170U);
    msg.setDestination(41397U);
    msg.setDestinationEntity(110U);
    msg.value = 0.30067867929;
    msg.type = 100U;

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
    msg.setTimeStamp(0.291756734398);
    msg.setSource(37118U);
    msg.setSourceEntity(102U);
    msg.setDestination(64989U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.289798424801);
    msg.setSource(127U);
    msg.setSourceEntity(108U);
    msg.setDestination(38370U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.0431998605004);
    msg.setSource(27626U);
    msg.setSourceEntity(159U);
    msg.setDestination(14812U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.913948229484);
    msg.setSource(18125U);
    msg.setSourceEntity(150U);
    msg.setDestination(52368U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("ROJSLIGZSCGDHWVAXQPFWROEWYFJMQAGEEEKRAJJSCRPPKXTZYGDAMRXBDYAWYHILPOHQNSMXVELZVQQADKIUJPLMSVOEDLCHGMZGZMXXNAQXDSUCLLANCIBOSEPUGKKMNJVLTANABBTNVGLUOTFQYIIRKGLJMCZWYZHFDHOTXFCRHB");
    msg.description.assign("XBDWLIOZKPKRNFTAJNAJDFUUIDETDGXDOONRXSQHXYZSFDAQKCATTVATPDZKEWXJKEMMEBUOSZYPLPAYWZUCTSYUEBZGEENLKMTQXBZENUVMRHWMLFTETCLOOSMIRHBVFHAYDDFFNSILOWRUGPYLKJASOCVYHOJGDRBGAKSOLYXCQFHFVBILIFCILNYEMQBIHNMHISGGXPRQGBWJURBCRJVPVCIWWKURZVPGQMXXHYQW");
    msg.vnamespace.assign("VSONDXBAVKLRTAOBFQTRZSOBQAQAKCYIUKEGDVMEDHUOLMNWCRBLCLGKZRXHVRIVWRJGNXIQJBKCPJKPGUFUUFRVMNPEYUWVHXCLQEHYCKDTLOUCERXHWETADIZIMGFZBMQGPMPIXLMNRWWILKNFBZIQJWM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EYFGLXKMZLDLXTNJRYSJQVHEFHXQGOZVNJCOCFGDXDVSDCSTLOFTDSOANRQUQPGSNIQDNBAWKRWUPORXZMES");
    tmp_msg_0.value.assign("QTKUHSSKZRIINJKDBBEOGYFZQJPNGMNIJXWPDNKYVUFZSRTGQVBZCQDHORLSZPZDRLZZXISVIEUKMETWKMRACGNWLJOYFQGRHPNVHTAAOXWQNUGTSJIUXBXBOCPXWEDFSROROHUQYFOJEVFYLHYCPYVKCLBVQEIWQFBTAUUWUTHHGTKJHQWFIDMWEUWJXEDBVMEJZBXMGJADDLNGLMOPKSRXLIEYNVCSGCXMCMHFINZTYPPC");
    tmp_msg_0.type = 212U;
    tmp_msg_0.access = 103U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GWCXMDTFRVDABYSPQKXBQHXGDCRFMJVNPUSXUEHSVGMTLCNOEHAELBQZQXHELSLRMHQQCDUEMLVFJXKYXFSMZPZLADZKNUOBTJQKGQCAWKEVDTYAJCCWOUJHTRJRAJKGNZUPDYBUXTHFCPFYFZDFIIIWPJHIYGNVOVSHGJKZBPHBEUOCJPMWAXOGRIKVLNWIBWBPGUORQMIZNMDWNAWONEZLESLIDGZQIYR");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("FSZDRFIRXOUSOOHZLNGZJYNEPCUCCZYXVCAPVVNDDWKMOG");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredRoll tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.368658763533;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 53056U;
    tmp_tmp_msg_1_0.custom.assign("YRRTFGJKTGCPLOWPSKWYRIKLTDFUQHTJPXGMUTDQCOSWNONWNGVBYSYLQLAAQFRYUJIUPVKJPXAOEZJPXHLPMUMPEAEMNCNUHDCZBKMTGYQSXNAHFHDSJIJJDVMFTOXKQQBIVHHIQWCFFZZANJXXTP");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Teleoperation tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.custom.assign("LVNPYUVEFXKACLZSJKXZMIFWSYBOOUZETJCKRANBIPGHGRUVMQIJZYODRKBVTJUJQHXMAEDWCQYPNEODAAMFUKKCYAAUMMMQGPBYWAFHOXQFFYTQKWGXRQQVCYDPIYHGTBWGNLOISJDSISZRTZVSNDRNRIEUEOCZTQGLVDRHTFVLMSBGMZHIPWXENJXJFDYIUHJPXCATWCPOWSZARBEVBSOHDNBPBLETNFLTXOUHZXFGKQKSGILCKVMEHN");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("YORUARIKLQHJCMRQGGMMYUIPUSPKVBQEPIQKPMHODUTARBHEGBYBIVIGMVZIGDLNMDCCCHWKZLSEUTESVPFRFPXZZSDEKTQZLDSLXWJHBAGWAJOOJFOYYQNYBTQLPNFRFBOXNTIXJNAOSCKKUZWSHHUXWZFYJSWC");
    tmp_msg_2.dest_man.assign("JQCXNSPEEIGGVHHOVHQWLKPDRNWHFSKJZUVRMDPAKSVEMLYMIECTWLBUMHXGIRMZMGCTIHXRQPSCQYONKZEUQYAKJNOWDABKSLNNWBNXAKBDUAJKJJDQYTGTBVSJGMEZWAEIVUMRETOZTISLFZEHZYGGXBFFDOLOLDTDAXYSWTLVONUAWYSPFFKWCVOUJIXURBPFCFQHPZWHOQDUMEXRYHYPTFZNCJCRNPJLXCIMGVIDB");
    tmp_msg_2.conditions.assign("TKGDQQIMIUWPSKVERPGCTAXNWOZYFJDJOATHCFPRPNKGTUELCVPPKCSAKUXIBNHZWFXPTQMYAYGOLCOXMJMISALDSLTXBUHGWSDUMSOFGNVKGDEGBBFFVTJHDZ");
    IMC::LblEstimate tmp_tmp_msg_2_0;
    IMC::LblBeacon tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.beacon.assign("QUVHDDKKCGJPUZEHDHBNIXKBTOEHAWQRFJHOEDJRSKXIRPEUEQTLDLYKOTIUGQAXYLRNONJTXUDFOMIFNXNTXWQWVZBIGSODPMBEJSGSPIWVZVGCBEKKHZBLMUGCWPMQNWACCQVSXASAKYNSOLQZGQLEIUMOVFJTHJZLZCPWHYUMBOVNIHUXSGVJPFHFVPRYDCACPYZNXCBELDCTMUTFDPAYMFRQYWWOIANKIYGLMZLE");
    tmp_tmp_tmp_msg_2_0_0.lat = 0.347276787432;
    tmp_tmp_tmp_msg_2_0_0.lon = 0.359881114721;
    tmp_tmp_tmp_msg_2_0_0.depth = 0.945311027578;
    tmp_tmp_tmp_msg_2_0_0.query_channel = 51U;
    tmp_tmp_tmp_msg_2_0_0.reply_channel = 37U;
    tmp_tmp_tmp_msg_2_0_0.transponder_delay = 96U;
    tmp_tmp_msg_2_0.beacon.set(tmp_tmp_tmp_msg_2_0_0);
    tmp_tmp_msg_2_0.x = 0.0295413960439;
    tmp_tmp_msg_2_0.y = 0.305658118619;
    tmp_tmp_msg_2_0.var_x = 0.595224849631;
    tmp_tmp_msg_2_0.var_y = 0.606796636191;
    tmp_tmp_msg_2_0.distance = 0.70343838787;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::PathPoint tmp_msg_3;
    tmp_msg_3.x = 0.668483683701;
    tmp_msg_3.y = 0.810301639591;
    tmp_msg_3.z = 0.05544041045;
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
    msg.setTimeStamp(0.183210602845);
    msg.setSource(53757U);
    msg.setSourceEntity(14U);
    msg.setDestination(33450U);
    msg.setDestinationEntity(67U);
    msg.plan_id.assign("JUMWEOCMWWNBTZHXFKBTLRZLUORTPYCJIDINRAXSGPBWHZMQXVAJCOINXLAAYZMLVSWFCDECWSSODAIZCLDGHQQISNPMMLPFPEIGNIPIGPTCRNXYJKKBXEHYXIRECKSGYKZBQSCXEFHWUKTMYWLLCGMZEKJ");
    msg.description.assign("SAICOIRBBAEAMBXBECMWKJUOEYQMQCTHNLKNFDULXDUOHGKBXPUXBIDKGDIZZUNQPLFNXKLTXROAJMLPWFACGCHEGVRQZBCEENKSSVGPSVNNHNVMDIYVMYDGLOIKAUGWQTLMUDPQZJPJCEVSRAJTJFIGWAPQYYSJYIRFYSFJXMRFTERTDLFZRUZVVEQSTVIXXDRVS");
    msg.vnamespace.assign("HCOLFENKETWXYJSARNWZCXEOQOGLVKQDUDNZVFMJSIGCBAUQPZPUVFRQUXAMJZNDTPELPSQKOJRWGMRJAWQHNZAGITNXKRJTLNCEBZSFPHKCOYGTC");
    msg.start_man_id.assign("RVKATFEZJSPFCBOCWKQHTMJAPYXRNUQUJMVWXVOOYZIXNIDLKPKNLHIBVRAJUMWPTUGPEXSTCNHZRWHSYFMDLGHZLABDKHRLXZGDTWSFNRYMFQAFWAOOZIIDXHCOIWCVOSDGBMIVZTJDRPPZTKNJCQHCLBFOCQIKAUVNLNUQUM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FCJDUUOPDSRSFNFBCHWIACGAVERIONVSTGNTCJUNBLCAXWCFRZNJPGTBQFMILEWACRKMUGQLKYEWVPMKPRCYTEUWEEJNTPYDOROSGAZUBWZSQDLYVTMDBQMLXAGMLGTOPKSSIYBERGHTUFJKDYEBKPUYXNYZGENFMYDXXJDAHQNZIFYQGKTPVQOFJBWHSAVEHKXVKVPJMZHAOVXPZOXQX");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 26304U;
    tmp_tmp_msg_0_0.lat = 0.215821459887;
    tmp_tmp_msg_0_0.lon = 0.490572721394;
    tmp_tmp_msg_0_0.z = 0.0413494474854;
    tmp_tmp_msg_0_0.z_units = 81U;
    tmp_tmp_msg_0_0.speed = 0.868682028461;
    tmp_tmp_msg_0_0.speed_units = 175U;
    tmp_tmp_msg_0_0.bearing = 0.550323777616;
    tmp_tmp_msg_0_0.cross_angle = 0.797325740141;
    tmp_tmp_msg_0_0.width = 0.0956749513337;
    tmp_tmp_msg_0_0.length = 0.146737614216;
    tmp_tmp_msg_0_0.hstep = 0.430639814806;
    tmp_tmp_msg_0_0.coff = 141U;
    tmp_tmp_msg_0_0.alternation = 174U;
    tmp_tmp_msg_0_0.flags = 113U;
    tmp_tmp_msg_0_0.custom.assign("FMCWUNZMJPLDTOQMKEQCJHJEUMWBAZSGPFKZRZHKECALAEYQHJCXGSSTIPPVREXNFARVIENCWYVSBZRIHFHIAQZBBOITLDHJGXGTGBEDTXVTQJLNJIORXDWXBSVLNUDXQYLVSKADDPANFYXGTYMWANHQOPUCDHFDEVMWKZLARIXMGCCOGF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EntityMonitoringState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.mcount = 70U;
    tmp_tmp_msg_0_1.mnames.assign("UMAMUBRZKIBHSGQEYAIDSIYWSCRILFZJXZVQMCTIJHYNJNEOKQOBPAMNXWHRDRKBIOZPGCBNVRASSFNSKHLPFTJPIWZVHJJYGDQRWDHZCRCOEFGOVVUIAEAZNKYQHQPDXNMJCPHZWVGXUSUAPLGZVVSFHCBDEMTDO");
    tmp_tmp_msg_0_1.ecount = 0U;
    tmp_tmp_msg_0_1.enames.assign("LFYFNAFUYUNJMINXEETRSLKNPCAFTHLXZOPPCBBHCNNMASGMHXL");
    tmp_tmp_msg_0_1.ccount = 51U;
    tmp_tmp_msg_0_1.cnames.assign("BSHGGJDASHHIBVGCZAOUHMNOISZXRPPVSPOVPWWXCTZZJWJDLQJCMHDABAFRYLQNTDUPDRFZMHJPJTJFF");
    tmp_tmp_msg_0_1.last_error.assign("HJNFHATJOSGCJMITUBDQFRLZNERTHLDLNICGRW");
    tmp_tmp_msg_0_1.last_error_time = 0.911553620305;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::GroundVelocity tmp_msg_1;
    tmp_msg_1.validity = 164U;
    tmp_msg_1.x = 0.762829361619;
    tmp_msg_1.y = 0.899966447452;
    tmp_msg_1.z = 0.482531374148;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CcuEvent tmp_msg_2;
    tmp_msg_2.type = 50U;
    tmp_msg_2.id.assign("PJJQWYVPZXRJIDSAOCHEYEIFRLBCNRVSURLKHKHCAGURYRTWEGLQSNLAVPBISWMFMZAUYAXHSTDVEEDTWLKOOKQA");
    IMC::Rpm tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 25386;
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.571247839742);
    msg.setSource(31194U);
    msg.setSourceEntity(175U);
    msg.setDestination(8119U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("WJGPUHLCGIOIKJQEYUEMMVNUSXDUSZXSJFBOACSCTAKANWXGTNDAQGCNIYWAEWJDWTFVOFMAGXQYRVDOKGKHSCNNOAAEBSHAOXMQKFSLERPZOOLMCSIIUKTFBYMRPNVQWBTBPVBPXVMRUWZUSDBEGKQJXYPOXRYZLYUDRFOXDPQPETCHLRIVIIIEGMKZMRQDVHGCAFLDNYVZBWRZZZTHLCYVHTXQHNFEGLJFWJUFLR");
    msg.description.assign("DBGQQRSPHQNLIJRGSFUDMQUGCJWSLNUYFOSVMAJVKHBDBTJGMIVWUALMLZIZKOXDWZOVSMZYPAJBYCJEWDYEEISZYTEFCPHTIENFMFCWADPWYXHUXTSLQRTSFYW");
    msg.vnamespace.assign("DRROGISOXPIEWQNVESBTMPQHSWTJOPSVDCBVLXXUBVDREYCMSLJFPZREIJJBRFHIZWEFMLEGECQHFUHPGADSAYHKLIZUNOZNKOYZYTOCSVUCRLCWDQTHGAYXKTUYMKBBLMRMQZVGWCJFKFNUENIHNCAIZTRWQBWLUDAAVTJIAYFHPGMZOBDFXNLBUSPRGXGAECMJOGQTWESVMAGTXPOBJULRZMHSKIYQNPW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AJEXCREFYZWTUZHKVWTZXPYAABJKXTVQRMEURIKXKAHCGVYVAUSSRYOKSSFUEUWJJGPEXOFNUSXQLXXDCPCMZGBMNIYCOEGSYLFWERRIHQTJVRBMUOZSBTYVEWLSPOJFVVDANRKWWHTCBXJPIZAPUSKOKKBKVOOHQCIQIFFEXGNDOMWFLNTLMGMVDZPFE");
    tmp_msg_0.value.assign("TQFRLCVWFPLAXDVWZRZAJNMTHTBWGAOLSZTZTIJFUYQAUUFOPREIAGSQTFXWCUDCDNYCPDECNJXRIBYJXRVIZTUOIIYUEFHMHVLEDKJEJLOBHQDSAACBGMBIOSURBVXDIZLCJNGMHXRAPLGKZGHOJRBHRQPWJSQEBCAYMOXZOHSPQONDCFUXKVLKOWVSMUNMFIUYZQHEGTCBYDRNTGNNENLXKLPFKEKPSYQHSMIYS");
    tmp_msg_0.type = 153U;
    tmp_msg_0.access = 234U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OQJNHFGSCLKOSPTHQFKKEVXUIDLQEYWSGTLCTFBXBXECMJIQ");
    IMC::SetControlSurfaceDeflection tmp_msg_1;
    tmp_msg_1.id = 145U;
    tmp_msg_1.angle = 0.658578468801;
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
    msg.setTimeStamp(0.334796655384);
    msg.setSource(31245U);
    msg.setSourceEntity(51U);
    msg.setDestination(153U);
    msg.setDestinationEntity(243U);
    msg.maneuver_id.assign("SZWHROSWREZAALMZGDUQAKADBGTWPIEZINBNAFJVULPTEEBPZXMODWUVMPIXAMLBDSJONMNGZMGIJKNUZRQSJCQYHZEHLEQETZOYKYTCIYEKDDLRMOSSVCGUCBSTVJVYJNKKFVXGFHXIWQFULYUDMHUNKKXQLJGAWJOXCBQDFFBCKCLZINNWMLXCWWXRISXSUVVFCFQG");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("SBLOSLGWCZNUV");
    msg.data.set(tmp_msg_0);
    IMC::VehicleFormation tmp_msg_1;
    tmp_msg_1.lat = 0.378036973876;
    tmp_msg_1.lon = 0.329954209964;
    tmp_msg_1.z = 0.60800171761;
    tmp_msg_1.z_units = 250U;
    tmp_msg_1.speed = 0.289833672246;
    tmp_msg_1.speed_units = 198U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.233669199492;
    tmp_tmp_msg_1_0.y = 0.455715835337;
    tmp_tmp_msg_1_0.z = 0.0775235457257;
    tmp_tmp_msg_1_0.t = 0.853602508612;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_time = 0.194526792984;
    tmp_msg_1.custom.assign("KNYQMWERMJDMJSYWVVHTFTXEWONRJPHRNNHZIPPIMEIYTLVRBUCGGXWTFLARUMZWIHXGHNZYPDMGGNMYPQTDLCVIZMYKFXEGIGZZVBIDJPQYOSDPEKUSLRKLPLXUKDBKLACCJVZVACUUEAXPQBQPHUWOANOBT");
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
    msg.setTimeStamp(0.593754003918);
    msg.setSource(61570U);
    msg.setSourceEntity(232U);
    msg.setDestination(580U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("TMDMULMSAORQBAMLDZVTMHBYMKIEGUCWUVPVQKHQZQWLOJOWWRKHNGTVGZXVXWTSUQEIZBPQIXTJOAKIBYZEQYTOEWXASIGCFBKNPPSPYRMPRHRNYNGCNUFBREFQYRNEDGUVZXAGBZYSRRMLCKKL");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 34228U;
    tmp_msg_0.lat = 0.86376249132;
    tmp_msg_0.lon = 0.887949016727;
    tmp_msg_0.z = 0.607247548497;
    tmp_msg_0.z_units = 53U;
    tmp_msg_0.speed = 0.295623964487;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.roll = 0.20171202029;
    tmp_msg_0.pitch = 0.0762799526179;
    tmp_msg_0.yaw = 0.190314146588;
    tmp_msg_0.custom.assign("FFGOENPKEFVQMMQALSMTZBFQTIJQUVWISAJBPMSBHCZCTXIVLEDHYCD");
    msg.data.set(tmp_msg_0);
    IMC::Voltage tmp_msg_1;
    tmp_msg_1.value = 0.274938563984;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Map tmp_msg_2;
    tmp_msg_2.id.assign("HGNHQMVPXNBTMWLCGDNMTSOL");
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
    msg.setTimeStamp(0.114809059073);
    msg.setSource(49262U);
    msg.setSourceEntity(227U);
    msg.setDestination(47974U);
    msg.setDestinationEntity(243U);
    msg.maneuver_id.assign("XTWGZIQSEMFBUOLARJTSFCGAWWIXWLALQPSGUZIYYSYZUHCOJWLGPPYYZTOFIFOGOHRXHMBXLOSTSMKXGAVFCOPMNOWCREUAKDYXRYVVIDQRMZHMDBVGINENFDZKWHBUCOQIKLGKAQTXEDNDFMJNRVBRSJTEZ");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 55340U;
    tmp_msg_0.lat = 0.572334660962;
    tmp_msg_0.lon = 0.42598622858;
    tmp_msg_0.z = 0.928393579164;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.pitch = 0.386212952914;
    tmp_msg_0.amplitude = 0.803625801898;
    tmp_msg_0.duration = 11056U;
    tmp_msg_0.speed = 0.578851394444;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.radius = 0.890275200515;
    tmp_msg_0.direction = 188U;
    tmp_msg_0.custom.assign("AOPCKHJNCDOUFDFEIKPQGOCUYEGSITEZFFBSZHMXTXDMZTLHIURCFGVVLCQHYVSWLKYJDJWKUTNTRBYZAEMXSFMRZUFCXTDFBVCDWLQUNFXMOJJNNJLIZAXLQOMEGC");
    msg.data.set(tmp_msg_0);
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LOBXICEOYPAZLVGQSHKTKBXUDNVSBPVLBLFFOFEXYZROEKISGLGNMRFEJODTYCMUYKGRBCLZVYMIIWJOJFXBSLAZWUKNJDTTKATXTOIACQCBRTUFZPQPSKPCUUMLOGMYYQNHFHIANARCWWJVBMXDWXIHTPUKFDJWDNMRXWGTFAPAJLVAUSHYGRWQXCUEVBDJRHZGEJQMSWDZWEEH");
    tmp_msg_1.plan_size = 37780U;
    tmp_msg_1.change_time = 0.774836066699;
    tmp_msg_1.change_sid = 59400U;
    tmp_msg_1.change_sname.assign("JQKCDXDSIPQPETLBLQYNTBDLTKSVECIOFIJVARDMRYNCYANHDVSGIOCISXTDCWYFHHPBDMXLXYBBMSAPOYCUUHEGXOLXSNHOOKYJEZCIRFWMWYFTPHBGPSZGYIUOXAKFMUTFMPZHQHZZPHLGQRWVA");
    const char tmp_tmp_msg_1_0[] = {29, 35, -32, 70, -89, -117, -93, -73, -102, 73, -15, -123, -101, -61, -9, 122, -4, -70, -5, -57, -20, -99, -22, -22, 1, -105, 92, 114, 27, -43, -123, 14, 46, -35, 4, -111, 44, 17, -35, -94, -105, -63, -22, -102, 86, -53, -79, 118, 24, -122, 29, 11, -20, -16, -65, -92, -43, 45, -70, 2, 63, -2, -8, 73, 122, 104, -63, 0, 43, 88, 111, 81, 61, -43, -77, 75, 48, 10, 114, 0, -114, 97, 49, -123, -15, -30, -2, -24, 4, 52, 63, 77, 77, -29, -105, 24, -105, 64, -71, -14, -37, -39, -93, -27, 2, 41, -92, 56, -104, -123, -118, -51, 84, 119, -48, 58, -68, -24, 111, 122, 52, 53, -101, -126, -94, -56, -65, 124, 94, 11, -95, 97, -64, -8, -3, -46, -60, 101, 71, -120, -45, 73, -93, -4, -6, 107, 23, -109, 112, -128, -36, -2, -15, 52, -126, -92, 99, 112, -48, 102, -112, -24, -125, -43, -47, 46, -60, 53, -51, 66, 105, 32, -37, 106, 79, 20, 124, -67, -35, -48, 65, -19, -42, -108, -73, -74, 101, 120, 77, 118, -67, 7, -15, 8, 123, 124, -120, -50, 79, -25, -15, 55, 21, 45, -13, -58, 45, 40, -83, 50, 44, 7, 12, 87, 52, 114, 33, -62, 53, -64, 38, -8, -41, 95, -20, 3, 24, 18, -16, 35, -3, 96, 27, 65, 107, -9, 107, 118, -6, -128, 60};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanDB tmp_msg_2;
    tmp_msg_2.type = 44U;
    tmp_msg_2.op = 10U;
    tmp_msg_2.request_id = 53694U;
    tmp_msg_2.plan_id.assign("DLMUFMMDTWVNALFLCDOXKGGBLCQIUWRQYLXQRQDCZLUOFBOMSXLQPXKHUNNSTHTVZXUOGXTKVFIGEYYNJBFCKTOHURNSVOPNEITZAVEGXAZSFTJQVJKNWWIRJPYSWOQXYPQBAYKDJHGIUVPOMKYRXGJAMWLVAPLPIENEUKVEEXTJRMZDF");
    IMC::FollowPath tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 2177U;
    tmp_tmp_msg_2_0.lat = 0.290669760075;
    tmp_tmp_msg_2_0.lon = 0.619061293186;
    tmp_tmp_msg_2_0.z = 0.109224769559;
    tmp_tmp_msg_2_0.z_units = 217U;
    tmp_tmp_msg_2_0.speed = 0.678640264644;
    tmp_tmp_msg_2_0.speed_units = 141U;
    IMC::PathPoint tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.x = 0.302888011678;
    tmp_tmp_tmp_msg_2_0_0.y = 0.300633773108;
    tmp_tmp_tmp_msg_2_0_0.z = 0.204172810692;
    tmp_tmp_msg_2_0.points.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_tmp_msg_2_0.custom.assign("PTRBNEGDINWVARZTSGHSJLJGIPUXFHLUOIOATKXRSVYHPUYROBWXBOMBMLEFZIWVQXAPDKZFJSFVFQRUSSAKWXJFZTZQEOTDGALOHYJIVJHMWVOIUCQZYQWPVEGEXIUFXTMZEAPIYQKKMBUPTEDKLPKOXWNYZDALWNDAULGDLMWWNCLVYVYJIFEBNTBXKMSMLBCCRRKOJYMTBPGSQ");
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
    tmp_msg_2.info.assign("WYCLBRQJPXFCSMP");
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
    msg.setTimeStamp(0.115854899641);
    msg.setSource(5747U);
    msg.setSourceEntity(114U);
    msg.setDestination(12369U);
    msg.setDestinationEntity(169U);
    msg.source_man.assign("QZMSDYXRCOJBKVUWTYQYOIGBVCAZBBUFMXHXQLUNPWIWDGSYUJRORJQTJTIBWSDZPNYMZVEDBKBEHVKDBVXWCECFXEKDSVIKXGRMEXAWCGFFTMWSTYAVNDATXQECPMHQLJHTTHALUKDHNFSOAHPKUPNJILUEZWLOMZLCX");
    msg.dest_man.assign("NAZABXJNIGAVKXYELXSFHOYBWSCNDTCOKCOSNDPXHPKWMUBKIFSPMAOZVTREGXDGEOJBIZGFQIEPAGFTPHBIPYSLYFYFMRZGHBRMOISWPQDEVLERMKPLXMWCGSPXYBKNJFOHTNDSWDVUNVUBOZGCNLLDIFIZVTDQIRLOJTWQCDFZVYGKYWWUDJTAQLLVERQCRMEKCHEJS");
    msg.conditions.assign("WLJCPUYVYJUVIKQRYEKKKQXFWTDZFMIDXOKVNMNLVJXXAZVOZSLWSFPTDUSHGGAPOENEBVUUKSWUBAAIGMHEMWVXPXTUNRACSGVFYQZEX");

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
    msg.setTimeStamp(0.091280337274);
    msg.setSource(60940U);
    msg.setSourceEntity(41U);
    msg.setDestination(15597U);
    msg.setDestinationEntity(24U);
    msg.source_man.assign("FXVYNHWSAXLVLQPJOIODPXBPTFFZXRABTUGLTJIPIMTANKUNWGPRVVHKENRWJQQACUBRYVCABSWHOOWPGBYYIUOEKGEQTMPBLTAQUZCOXKDDSOCVMRKDTZQGSUPTNAZYHLQFDYCMBNFQKVXDOTHVKDFVUJHIBGHHZJPDJ");
    msg.dest_man.assign("AZHWLHCNKYTRZDBMIQYSGMCORCIQZSGOTMKLUZVEERJMFAVOTKQGBJRCXKPVOWJYRGECOSTRYAFRSDPDTKDVGQLEXQBJNNOGPKMTUWJTKKDRLEDUWPIILLEXMUKBQSCRVAICNHQNZXLPXQUAPIIFGSVYUVNOBXNAFWGZFDJYCHBERPDCMJYQDPJXBHYWPGBXUWASXSZNAVLEJGHZFMNHFSBKCYWHFIEVJMOVLPL");
    msg.conditions.assign("WVSMLUGMQWPUEWRWPCDMRWSLRBVPFLZGBZTKWBHFCWNKRGETCHJCGIHVEMTTBPAYYHFFKQVDMYBLUJXJLCBITYTMSJDVNDEUXQWBQEXPAHOVJADRD");

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
    msg.setTimeStamp(0.988831999898);
    msg.setSource(57540U);
    msg.setSourceEntity(131U);
    msg.setDestination(58379U);
    msg.setDestinationEntity(133U);
    msg.source_man.assign("PZIGSOLMOCOUOYRLSWJQJFDONSUYTCRBLJHQIXGFRDFSCDBWIYKVKKMTPFQPHLRTCUBQBMVWXWIMENLXVVGDGNJZGYKZJBIJYDIVULDRSGEXAHDUJWNJQKNXEPQPYGEJFBCXKAOAAFSEGKTHNXVLUWTLQZREKGNYUVIVOXPCPEWRTPSMGRCIZQFUSZCABKFSWZMTVCIJNHBEAHZT");
    msg.dest_man.assign("TXYKSYORPQWLADSYZXEPIDAZIDCNCDKKWZQRMRCKXZGEEAWPRUBAUXRPKCXHOBOTCUXXHYVHZVQMEBCVFMNHXWWTEYMFGSNJKKNUAPIAWVLIFRVF");
    msg.conditions.assign("SZNQMIEBJUOILTTWQZXCEBNJBAKTUXAGVZIQZPFXPODACIHDFUSVJZHMECYKPVJFXWRSNUTKKQIHYOXOWJAKDEUVDM");

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
    msg.setTimeStamp(0.48695758659);
    msg.setSource(5811U);
    msg.setSourceEntity(49U);
    msg.setDestination(3288U);
    msg.setDestinationEntity(243U);
    msg.command = 115U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YKJFQVOTNLIQSPFDDPYGROLYBOFXGSYVMHBANJWKVCKTOWHAQAMTBZUYESSMWJUITUBZCNCCMVPJERJDTIFTFLYILMSURHMCKAREHQKFRCIAUAHBZ");
    tmp_msg_0.description.assign("BAWNXLODYTRXAOAPUEPGXXFPJTDSQSPOSBTFSBGDUHNOQSTUGHTDMCIQXYBEFDUMTAGLIRZRPHLYCABOTVBYSVLDAOFLRGDJNUGCLVZQWHZSEHIWPEJDWCVMNEXZSJRZVWYMIINZMYHVXHEYCERCLNIZAJNM");
    tmp_msg_0.vnamespace.assign("MMUFCNNZKEOOOKINASCQGXELAXOVIELGCPYHPSXIXVTPTNXNMYKLKDWEJITYRLUJOPZ");
    tmp_msg_0.start_man_id.assign("RMICAWETXRZMDJCHBXJUKIDCDCIGPCGIRVXDTQHEIDWQKJJZPYIHNBMROZFASNZEWDHRLVSLJBWYAPFKQFXOMHSKYBSVQGLTBVYZSRNAKONHJEGIQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WSUOMTIVFCVGDUBRRLDXPWLPQTBSWEJMQRHLJSAJBOHNNANQOEZUDHRYMAOACCENWOBUPGGYGWUAATGWLKIWSGTZJPDMUJMJYEXFNNFCPKVXNBVOREQLPVTEKHOTXIKYLQLYYZPZVRKEBCYHIHWSMVVXSRIKGZJNAHCJDPQDAXOLKHQDZXRIUMOHQFAUZHXEIFQAFFBSIES");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SQUVIEDVGDHNJSLOWGGVQBJZJYZIEIOCOLJURKRTXPKLPKHTQMEALCKEXILEFHLCQSBVDDPMWIZYTCJWXXYWMTFCXHHMJGZMHKSRAUAQQSZYCUGOSDFKRTNEGVCDVKHIPWMGNQRAQYNVGHBYNSEOILCBTOYDBFVATUNFAWOFJAOIQBZDYJNOFEFANKIJUUNXZRUHCZT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::MonitorEntityState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.command = 80U;
    tmp_tmp_tmp_msg_0_0_1.entities.assign("FFBLXNRHEYGJHDTPNSKMBNYWLNLCMGOKUJDCESJVOZJRQQLHUMYHLCMYZBCMFDYULOWWEQOLKEEMMJZDNSQGBZUYCXMEIZEEWSZQTNAVNYNJDKJDATPVHUJWTYGPIPAOIVNSQSFSCKEIGBTZZARFBDTRSGX");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("THNORQWPHELLLDVKAUREMOJLJZWCXQJPFTQJFWSFIQTMTQYNARIHBTGMTSNVKMPDJIFUFPXVCUEQBYZMWABKQNTSEZNIZYBAINHGRZWOYEAYNUZYGOGGJOSQTIXXMUDLTXDZDAMZFZIMM");
    tmp_tmp_msg_0_1.dest_man.assign("EWDPPRUOJJAFHXNGNTFEKDZATEQBWQPIKEWDAKPCADZUQRWRDMHIIRALTXJRHYQVASXFTWFHBESEEHKHYVVNCVSMFRJRUYCDSQCXGHPUIOCGXZNRJSVAOJVZYLQZTBNNENUUOGMDETCWZCITAMHPWLLBDVZMUWLSFDOLTDQVSOOZRIJCGGLIKPUUSSVJVNLBQKTTOUIYZRFHABLMKGNGZYKYIWKFOJSWMPGXBNCYYHXAFPQJBLBMBCEO");
    tmp_tmp_msg_0_1.conditions.assign("QRZCRFMKGFCSTWCRVWDWQOKFCATAKCGHULYMEERRSUFDAPNVLBJODCXIWBYWMD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::WaterDensity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.789099353855;
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
    msg.setTimeStamp(0.41028611294);
    msg.setSource(1369U);
    msg.setSourceEntity(64U);
    msg.setDestination(32874U);
    msg.setDestinationEntity(37U);
    msg.command = 37U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LZXOBASSQKTMUCCVHOPVCVLGCXBNXCYWCPAXGFSMCBNTFZMWUFQUFBTULXORJRDERNYOJWALEJZRVAPPGPFZZAYUQANDEBKZUFMIYGKAQLKYVHPQMYXKAZKHIWWDLPIJRTHDHTLOSUUHGRJSNOVXTUGBVGNF");
    tmp_msg_0.description.assign("ORMUMKLKWCNOBPXGJCVLRFXYWVZDBAXFWBGAQSPHRQUBZQDIESMKTXNEQNLSHMKLUJQKGOGNDBYYJPTRUUAJWFRVTCPZNFDUEOHOCJWKAILYZIPAVVTQZHOOTHXHHDMWXUPWEGRXNZOPAVKLSMRJKJTZ");
    tmp_msg_0.vnamespace.assign("QUNUOQYPQIKJCIIVOGPKCRZSDTTKPKKUPPXXAKBZFEIZKNWVWXNORKXYFGAULBWIBHSJPIJOSHENXHRMJNSTYHOPGRWFGPMZQVTOFDQEYBHAVBFMMVXEVNLMTFQDZWVYMEGCRLODLKFSQJUXLCMAZCDMEDGRQNFYTVJGZSJHRAULBIJWNOAUNKQXMZIJGCMLNCDSYSUIWHTFBJTTULWHRSVZOYDZYCBWFERHHVDPTSWUB");
    tmp_msg_0.start_man_id.assign("COPMBIWEDDEIRTAEKTZDTQPNSLEUXALAFLSHCKLIPFTUANDXVJRCCAXFEHFTKRXRMYRJSPDRLAPFQVVQIWGMBHLBFVZQJYBLWPSDGFRWXDKQMSDYHTSLUQGVSSVUCFRB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HJGCJAQLKYXHVGNIDROHF");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 17468U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.882344129659;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.867517713849;
    tmp_tmp_tmp_msg_0_0_0.z = 0.616457287923;
    tmp_tmp_tmp_msg_0_0_0.z_units = 57U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0384176007528;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 92U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GMQEQOBMQKLZZQIQAHFPIDOGYBUFFLHFVTKHDIXDBNCNBUDCVBHJWZQDZHVJOELEXNXCONVCXKWWAAYPCEUQHLMEYAJRKLSMLTBSBEZDOVWWGTWKPBOIIGFOLEMZVNQCMAXAGODPSJYZPWMRKJDYPUKFSXHVFWBYYPNYALUWFTTIXSMKNDOUZFSSEYQSINZONPEUTRTKCIRVJPJGCUTHIRLSGJIHGARZYAGTMLCUSHXDFUXPRKBJJVC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AcousticRangeReply tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.address = 44U;
    tmp_tmp_tmp_msg_0_0_1.status = 11U;
    tmp_tmp_tmp_msg_0_0_1.range = 0.170995761591;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::AllocatedControlTorques tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.k = 0.712114048563;
    tmp_tmp_msg_0_1.m = 0.182235577744;
    tmp_tmp_msg_0_1.n = 0.936221204761;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.509227364703);
    msg.setSource(497U);
    msg.setSourceEntity(81U);
    msg.setDestination(561U);
    msg.setDestinationEntity(71U);
    msg.command = 192U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TPNDFRCVUPHRBFFKEDIEEEKNTOWJSYGOTXLSDAVSHIUBHBDJSRKXRGGVMAVDLYPOYUWSUKSWLCRATTKJRHTQ");
    tmp_msg_0.description.assign("QZJSCHLRRBFOZCDUIKCMISATXMXAGJKBHAQSMWTGJFLJPFWNUXTMYYNKXXJIGGUUZSWPFAHLOZNVYRAFBMKVEMEORIBBWUQGZSWCUPRZTVEOVMUJFIDGPXFNXCMDEWZSGCVWDSTWQOEKFVNUCLFCBHKJTISSCLHGPNOQYIEXVVYIKQHGNHBWCKBLFJYDOGOEYIQPYA");
    tmp_msg_0.vnamespace.assign("NFBCTDORRMRIITIIAKVBWDSPPCJUDMKXHFRYLRWPYQWJBMZAFPDHAZCXZXBFENKITQWQWKVMXIGWDHANFGEEQLVPHFAWWDYCOBSNPXNWSXGXQEMODASS");
    tmp_msg_0.start_man_id.assign("ADYXNFQXIHWEUALUFJNRMVPEGHRCPAEHZGTLJZLNHRYERADFPLBSBWDNJFCSOMRNXPEFQXCPXMPXZQDOLMUTIVKHPGGNSJOIFLCHOUMZZWBMGRPPGADXYWIFBWLIUSWWMNTBBGKLFIUQRZVCGBKOAYSBTHQFSDQEBNUQFOKCUZLYKMCHCIWNUKKWEHGJVAYZTZOIDXTJVORDQJVXYPSDCRVVYHVXQOUTETGLWISIKKSMYKQTOEJMVBAATAJS");
    IMC::EntityActivationState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 84U;
    tmp_tmp_msg_0_0.error.assign("ZMMDEVHVVWFFCJJMIPKLOYQIJWHWLDKGVISQTXPMAZSPGRHIRHMWINKQVOCBIJKWRCRFGYXCKTD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::PlanSpecification tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("EVQUZPRFRAUFNRSGTURHUOGYQPIT");
    tmp_tmp_msg_0_1.description.assign("HFMSNKXNZPYUOPKWHTFYMRPAFWMPIOREHGOFIAUYEKUBJDYDXMLWZJBRJYDNEGGDVGYYQPYVRNJCIABJREBPWCZTKTEVFHEZNSNOAWZOQJQOXGHRMKIVIPWDSXIKFQUQGJTXEFZCWVXCUSIOSCFBEBITXTSHGRGSDHLOCTRIQOAYBBAUMDJKBCMUWQCZVNMLZUUVKKGQKLAUERMCJXDLYJLSW");
    tmp_tmp_msg_0_1.vnamespace.assign("SRNMNLPKDFLMSJZDFEATDXELBYRODEYPJTQWKNDBDHXTHOUSCACLIMONBERPFJLXXGPCGMUVQHIQEGGPHVIXBMRZGCSNIKVXFUOHFWOZTLTGNKNBZAWWETTXEQUUQBKFRFVSGUTAMFOUBLJYCYHZUHVCKOARGOAWDXTKWLBMKUESDZCCRAACYPUSRYPEFV");
    tmp_tmp_msg_0_1.start_man_id.assign("HYHMAFLUAUNTKPBSHGCIQWOFNSNIBJHHNHWIOTXOLXIWPZKFFSVAIJUMQUFSQAR");
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
    msg.setTimeStamp(0.536058960902);
    msg.setSource(13945U);
    msg.setSourceEntity(212U);
    msg.setDestination(3749U);
    msg.setDestinationEntity(62U);
    msg.state = 207U;
    msg.plan_id.assign("IWTDKFYNUZHBSNMUBWNFPEIQOIPEJCJVERSPDQCCMUYOCNXGVEBPFECWTMOILZDLULZQPIICVRKXMHTNUEPSXCJFIXAPUJXQBBRGMPAHTDYGPKGOZFEQVLGOYNAMWJUVEKWSWMSBSYFIXFILYFVVGGDSVNRKWSHROAZZCVSUBAXAQKDUDNHPZBVTQTGQXLCOGADZTRLKZMCFJUARZDRXQYYRJTYHOJAHABIOEQKTN");
    msg.comm_level = 161U;

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
    msg.setTimeStamp(0.0294974996459);
    msg.setSource(17643U);
    msg.setSourceEntity(45U);
    msg.setDestination(33344U);
    msg.setDestinationEntity(53U);
    msg.state = 129U;
    msg.plan_id.assign("UIDWGZBNKHZCPWXPCYITMPSMGKVWJHQXUXLVIQHOMOMYWZZVYLNSYNIFEQUJMZLTNFNNDXUAALUIXTBPSFAVYXJDFFEQMZMLPJPNCEOUVUGTJATCSWDAQOVROGJRUTEFGHHHRCKYZWLHAGBPWHHMGLRRKFQNJDWXIQSZVSTSKDLRSFPOM");
    msg.comm_level = 225U;

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
    msg.setTimeStamp(0.576154791976);
    msg.setSource(52105U);
    msg.setSourceEntity(10U);
    msg.setDestination(64247U);
    msg.setDestinationEntity(1U);
    msg.state = 90U;
    msg.plan_id.assign("XBCCACFNEHZWMVGQAFVEEJKFFMRLADGYEQLXCLPZIOLTSULCLHNQIWZKGGDUMHYSHWMNERJJPISRQUXYMRFIYPEITHNWOAHOAOPXYJGXDYRFZHPOUEWHDUUQORSBUYVWHYEBNMJVWJMBOTXBVZRDWUBQZBJSSDQAKXBQHSKKSJAKTZDIVWPC");
    msg.comm_level = 192U;

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
    msg.setTimeStamp(0.765987452438);
    msg.setSource(42369U);
    msg.setSourceEntity(70U);
    msg.setDestination(6011U);
    msg.setDestinationEntity(126U);
    msg.type = 30U;
    msg.op = 108U;
    msg.request_id = 65076U;
    msg.plan_id.assign("YJPNMDFHUDRKKSZIMURBDKOWAZJAWQXFZHNLYFLPKAXXFITELBWNMCELRRVANUUPBWHBQUEHHLONEGCJYZJOICFYPNBXEITIISWGUWJDHZZPSKDOMTVVQQYFJOMBQXCQXAGATYDKZLRDSNMGBZPPXKSQUGKUCZVGJAYXKPDWIGOEABRBMYMVHDQJTKXDOWMVTIUO");
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QQUBSYMCEJOWRZZIFEMXXRPJHTQDLZPJLGTKOFVVFUZACIXLWUDJZITPWAOXNSVEZSWAHUTXUYDJPKMUDPFCQKTYJZMWKOFDRLNHKIYNMNDCTBVSHJLABDCOXRLTHXOXQLTNNEKKQANTFHEKEQRPMFYH");

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
    msg.setTimeStamp(0.0179971080481);
    msg.setSource(39550U);
    msg.setSourceEntity(244U);
    msg.setDestination(62454U);
    msg.setDestinationEntity(183U);
    msg.type = 137U;
    msg.op = 40U;
    msg.request_id = 16811U;
    msg.plan_id.assign("BKGBDKQZQWBHONBJIWLHWYUBCWKDVXEWDYVUPFDELOCHITYFQNPQEMAFMTSOINYCGNGVZFHIMAVJGABUGZUUGTROZCGFNSERJKXKECZAUXMCYVMTEOREXBLQPQSIINKZXNKANW");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 252U;
    tmp_msg_0.range = 0.797366643156;
    tmp_msg_0.acceptance = 153U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UIFWBOGCUEVBVNICWQNRRNSWUTNHYKOQHJTXJMPCUQDHLTUJWBFRSHWVHQGTPAGRJLDALLTDHJPZNZIFFCJSLOORYKVKSBIWEQTZDRFVYUMZOIMJMPBIGNMJCDHLCZJORXAPXCZXGVNEWVVBBTIGYNWEOGLPUHAQMPKBUXSXYDMCWFXYMDTGRYTDDOCIQRAYCASXWK");

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
    msg.setTimeStamp(0.904526984727);
    msg.setSource(37768U);
    msg.setSourceEntity(42U);
    msg.setDestination(58778U);
    msg.setDestinationEntity(174U);
    msg.type = 241U;
    msg.op = 223U;
    msg.request_id = 47793U;
    msg.plan_id.assign("YEMGRSHTHIJTITMBIFSCFBGNCUVVDHWNOFQTNSKFUHFWJPUWGLESEXFMGRWXXJPTSZKLWTH");
    IMC::NavigationReset tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NRHCUDFSVWDTHOTMDJUEXOAPFCVADWKEMTQXNMKQBIXRYDKNYVKOAZMAEKUASTLYGSWOGSHTWAKIOQWPFMHYUSDYUKHVNRMNVTJEVFIJBJHUQW");

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
    msg.setTimeStamp(0.559981558441);
    msg.setSource(14300U);
    msg.setSourceEntity(47U);
    msg.setDestination(27262U);
    msg.setDestinationEntity(218U);
    msg.plan_count = 24098U;
    msg.plan_size = 3755185746U;
    msg.change_time = 0.773874638861;
    msg.change_sid = 43092U;
    msg.change_sname.assign("LFOPMCKKATJOVRWEBRHZOGSGQWQXTDTFDVTZUPTYD");
    const char tmp_msg_0[] = {-35, -100, -43, 10, 98, -5, -14, 17, -51, 79, -123, -58, 59, -43, 99, -68, -17, -79, 95, 93, -69, 5, -100, 68, -90, -120, -46, -42, -12, -95, -105, -52, 111, -54, 102, 56, 12, -108, 47, -7, -121, 105, -62, -33, 76, -96, 109, 11, -92, 11, -71, 27, 19, -110, 126, -43, -86, 9, 54, -86, 68, -105, -47, -80, -15, 26, -36, -37, -73, -121, 36, -112, 51, -27, 101, -40, 11, 113, -123, 63, 91, 65, 42, -59, -99, 53, 113, 66, -112, 51, 35, 44, 125, -91, -30, -101, -28, 92, -55, 17, -16, 89, -105, 105, -11, 104, 89, 10, -28, 71, 81, -24, -92, -50, 120, 38, -26, -51, 99, -82, 17, 118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JQWDDTBPOWIQROQVSZSFWKDGWCLHBNZQIPLHZYRBVDGBLGZFLUCPHKKPXAJICNEQLQXAVZDHFJOOEEBXFUTXCBGGXKBSXCZKXMNNHYVMFIMKTURJRLVTJI");
    tmp_msg_1.plan_size = 17089U;
    tmp_msg_1.change_time = 0.0719326417467;
    tmp_msg_1.change_sid = 49185U;
    tmp_msg_1.change_sname.assign("AHPBZPWXCYSPTUBMXFOFHTWDMRCSDXDRYFRJVORHBXUWVEYYAGUWLQYXFZVCOSHJTEVACN");
    const char tmp_tmp_msg_1_0[] = {48, 100, -119, -9, 75, -64, 5, 98, -125, 17, -3, -48, 42, 21, -32, -9, 100, 65, -125, -67, -20, 7, -43, -96, -116, 100, -22, 12, -10, 126, -107, -102, -99, 116, -107, -33, 126, -3, -11, -105, 37, -21, -34, -90, 89, -13, 48, 6, -104, 89, 40, -33, 78, -110, 76, -111, -60, -59, -106, -75, -54, -63, 77, 33, 51, 64, 79, 68, 121, -8, -66, -55, -2, -128, 20, -119, -48, 29, -46, 29, 39, -21, -84, -37, -15, -103, 107, 14, -36, 70, 125, -112, 67, -103, -115, -9, 114, -4, -39, 43, 66, 126, -79, -55, -39, 64, 123, 78, -86, 98, -52, 126, 112, 26, -109, -79, -124, -8, 35, -54, 99, -76, -124, -25, 9, 93, 83, 13, -70, 3, 27, 102, 86, 33, 62, -104, -111, 6, 88, 101, -71, -90, 17, 74, 89, -59, 7, -18, -122, -11, -84, -31, -27, 15, 96, -107, 48, -60, 60, -106, -82, 110, 35, 50, 113, -70, 124, 60, -103, -79, -11, -39, -123, -128, -36, -97, 115, -108, 59, -74, -120, -56, 97, 126, -70, 10, -61, 122, -67, 53, 111, 22, 103, -77, 54};
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
    msg.setTimeStamp(0.0857378488605);
    msg.setSource(33753U);
    msg.setSourceEntity(228U);
    msg.setDestination(47988U);
    msg.setDestinationEntity(37U);
    msg.plan_count = 65254U;
    msg.plan_size = 4065581854U;
    msg.change_time = 0.423697351832;
    msg.change_sid = 2968U;
    msg.change_sname.assign("NEMKNQUKCLTKVPHIAXMAHNBNJYDFBWRBPKYSCGIUDZTYLMXLKAGRRQCRIQLSVHYIMZDJDAAGHGTQFLLPADMVOUEPPYOJCHQEVUEHCBGFZCOPGMZHSDBDBKFOFQXODXILXIYQHUVNOYJPMXEWYZYETVGFNMZPMSPWOVKFWWSZGFCNWATVBSSWCLZTVXHTUGNTINSRCHVOKICRQDUAWKEETYOPRJBGWXREOFQFERLJUSAQBTZRKUBSMXJI");
    const char tmp_msg_0[] = {-56, -33, -114, 33, -71, 88, -121, 123, 116, 3, 52, 69, 112, 105, -53, -20, -78, 72, -45, 10, -31, -112, 7, 49, 40, -115, 58, 87, -121, -45, 96, 87, -75, -71, -95, -114, 49, -76, -92, -89, 1, -92, 53, -77, 75, 121, -3, 62, 81, -83, 88, 65, 42, -37, 89, -58, 51, -109, -51, -118, -50, 7, -44, -75, 28, 29, -87, 116, -6, 5, 67, -81, 107, -109, 91, 56, 66, -93, -25, -53, 70, 42, 117, 93, -96, -29, -126, 80, 29, 81, -82, 117, -110, -44, 57, 67, -52, -74, -82, -117, 77, -52, -53, 37, 18, -3, -112, -88, -93, -120, 118, 48, 16, -30, 75, -95, 47, 76, -71, -116, -79, 61, 32, -23, 95, 17, 118, -10, 80, 80, 14, 5, -74, -45, -96, 93, -124, -81, -127, -108, 100, 103, -119, -65, 46, 17, -106, -107, -2, -93, -51, -68, 112, -113, -92, -43, -76, 31, 111, -37, -109, 117, 78, -40, -5, 97, -44, 4, -26, 15, 48, 71, 87, -107, 81, 37, 25, -82, -34, 106, 101, 90, 58, 95, -26, -44, -93, -124, -25, -77, -77, 37, 42, -59, -4, 11, -5, 86, 121, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LPOMCCXGMDOZHDUM");
    tmp_msg_1.plan_size = 18610U;
    tmp_msg_1.change_time = 0.413698075444;
    tmp_msg_1.change_sid = 20572U;
    tmp_msg_1.change_sname.assign("VIRBPCBWZCYVLYYLDSKBTEITZZBKKHBKQW");
    const char tmp_tmp_msg_1_0[] = {-12, -76, -87, -17, 98, -106, 106, 14, 59, 22, 107, 38, 86, -15, -76, -95, -128, -9, -80, 9, -121, 57, 5, 98, 43, -110, -70, -37, 1, 59, 24, -9, 23};
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
    msg.setTimeStamp(0.622304080434);
    msg.setSource(1452U);
    msg.setSourceEntity(204U);
    msg.setDestination(34244U);
    msg.setDestinationEntity(88U);
    msg.plan_count = 45879U;
    msg.plan_size = 2293941713U;
    msg.change_time = 0.502263517286;
    msg.change_sid = 10581U;
    msg.change_sname.assign("RUUSVKQMYPVVEIHZQJIKWOHMRNGQFTSSKCHHNLXGKUPEEWEYLFZFXUEONIATAYMFELYBJQNTHXHITNDGXCMUDWRHXCUTGWWSXCCYHPGWMTOASWGJQOSMSLRZBYBRIWDPMORYSLILQLJBTQB");
    const char tmp_msg_0[] = {-94, 51, -71, 4, 7, -92, -12, -45, -2, 98, 56, -25, -58, -126, 78, 21, -34, 99, 69, -80, -109, 10, -71, -18, -90, -81, -49, -32, 45, -58, -32, 101, -39, -35, -45, -64, 12, -94, -72, -90, 115, 90, -17, -47, -123, 60, -80, 10, 5, -77, -3, 32, -115, 86, 102, -10, -96, -111, 117, 59, -29, -75, -64, -71, 99, 106, -98, -118, 51, -45, -65, -59, -115, 16, 58, 44, 115, -112, -82, 55, -98, -52, -93, 28, -39, 107, 101, -59, -74, 120, -24, -1, -119, -16, 86, -37, 88, 104, -27, 14, -25, 17, 117, 110, -87, 15, 67, 93, -88, 38, -4, -66, -90, -108, 49, 24, -18, 62, -108, 106, -21, 50, -53, -41, -42, 29, -115, -102, -84, 36, 16, -32, 19, 120, -52, -14, -5, -19, 46, -71, 69, -119, 79, 118, 8, -54, -20, -18, -114, 101, -94, 88, 22, -25, 23, -125, -31, 31, 2, -3, -33, -38, -8, -8, -113, 36, 24, -101, 63, -119, 40, -102, -89, 49, 80, 118, 73, -14, 117, 4, 34, 0, 29, 64, -24, 38, -110, 91, 1, 90, 126, 75, 105, 126, 126, -77, 106, -29, 86, 108, 67, -17, 7, -79, 65, -21, -112, 90, 29, 25, -114, -54, 80, 20, 5, 86, -91, -57, 90, 83, 11, -106, -70, 35, -41, -85, -126, 109, 40, 1, -101, 107, -2, -83, -103, 52, 50, -3, 36, -25, -59, -38, 48};
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
    msg.setTimeStamp(0.90400574219);
    msg.setSource(27879U);
    msg.setSourceEntity(222U);
    msg.setDestination(25023U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("SSXZYLSBFMIKJVYJRFSZQGKULKMWFFQ");
    msg.plan_size = 48786U;
    msg.change_time = 0.0301019002122;
    msg.change_sid = 53729U;
    msg.change_sname.assign("FBPRDQOSIVWASVLSEJFTTCXGRDVREDFNZPOJGEKYTADIOBMDQSYGHAHTLMCCMXMDWNPZPRQJWBYHDMKRXOCMDBHEJETORZMZXYTLVFKPUQZUOLRTXWHKCSHGWRVABCFHHUAPMTZQJADJAYF");
    const char tmp_msg_0[] = {-30, 86, -89, 84, -21, -8, 67, -6, 90, 69, 30, -7, -44, 69, 119, -87, 114, 60, 81, -8, -59, -29, -64, 68, 99, -79, -97, 21, -102, -36, -67, 95, -73, -102, 13, -23, -12, -120, 5, -72, 25, -70, -84, 116, -58, 87, -114, 5, -7, 12, 100, 23, 34, 124, 10, -17, 79, 85, 30, -92, 16, -46, 12, -124, -12, -80, -18, 80, -9, -38, -19, -76, -21, 37, 2, -66, -66, 116, 18, 88, 29, 18, 12, 74, -123, -93, -92, 45, 82, -18, -69, 107, -24, -7, -99, -124, 101, -5, -86, -57, 63, -25, -57, 40, 95, -7, -64, -3, 41, -30, -99, -110, -64, 23, 17, 5, 9, -33, -28, -58, 83, -59, 8, -52, 10, 120, -32, 20, -63, -121, -111, 74, -16, 114, -44, -5, -90, 125, -68, -115, 94, -84, 58, 18, -87, 100, 85, 35, 56, -4, 6, -40, -89, -34, -30, -98, 22, -66, 49, 107, -102, 115, 44, -70, -97, -39, 50, -25, -98, -28, 87, 29, 6, -72, -20, 62, 89, 46, 101, 52, -31, -41, 111, 11, 85, -120, 94, -107, 0, -82, -40, 14, 30, 112, -104, 102, -111, -17, 12, 51, -83, 109, 117, -113, -93, 19, -3, 55, -36, 21, 48, -57, 57, -105, 82, -110, -83, -107, 52, 119, -58};
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
    msg.setTimeStamp(0.547169061532);
    msg.setSource(38667U);
    msg.setSourceEntity(83U);
    msg.setDestination(32739U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("NJFUUPCTKZEXGRQRYCNUKIXHCXDFSVUBBNGTGZCDIJZJNEHLNMOOMPVLBBPXTVANWFYYRQVJX");
    msg.plan_size = 17579U;
    msg.change_time = 0.164901477831;
    msg.change_sid = 59341U;
    msg.change_sname.assign("EKGXXIRXQXTPDOPYTEY");
    const char tmp_msg_0[] = {-28, 105, -93, -94, -27, 88, 62, -37, 3, 109, -22, 17, -63, 43, -38, -45, -119, -3, -112, 80, 79, -24, 119, 32, -106, -36, 115, 65, -80, 4, 86, 32, -3, 39, -91, -118, 56, -76, 87, -78, 74, -15, 21, 10, -96, -125, 114, 90, 105, -25, -112, -46, -23, -47, 65, -98, 71, -70, 96, 58, -68, -73, -79, 18, -126, 79, -13, 36, 85, -21, 65, -72, 24, 15, 87, -116, -102, 84, -82, -86, -109, -29, -75, 58, 25, 13, 72, -43, -70, -32, 101, -56, 108, -70, 115, 102, 36, -26, 112, 109, 27, -40, -47, 109, 118, 121, -56, -20, -99, -14, -44, -78, -22, -24, 76, -16, 29, -5, 33, 82, 75, -106, -77, 7, 69, -93, 43, 30, -101, -119, 31, -1, 8, -68, -15, -31, -47, 95, -48, -126, 46, 106, -61, 4, 48, 60, -52, 68, 60, -89, -55, -80, 82, 2, -80, 121, -30, 61, 36, 18, -14, -94, -117, -64, -102, 115, -107, 69, -48, 39, -81};
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
    msg.setTimeStamp(0.0239517479293);
    msg.setSource(59602U);
    msg.setSourceEntity(187U);
    msg.setDestination(17255U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("WNFKOCMTUNYJKYTSOZMAOEKUXGPXUIGIDQFLMZVOMVACIRNYNYKPRHOGTDHKJJUEWKDBAXUVDRDMRUEYUQZGMPQQYLWIKZJLAWQYLVYUXZBUMVLRYNBFDKXCCPDWCEPNLFKGFVRENPIIFZCTSRAOCJSNTBHAUHPQHZXDZSQBTSGMDPVOXSOBWYMITWFBQXIHSAJNHBJQGSZGAIAWSJVNLAFFRPZLTETIBRBPRGXESHVHLMC");
    msg.plan_size = 14079U;
    msg.change_time = 0.864092068032;
    msg.change_sid = 13458U;
    msg.change_sname.assign("NIQFJTIHGUDWXYJRAPLOAWEKXBOJOXHWALQLJYGVIZBVYJZPJEWCVNMCSVDISLQBUIBCREIJKHSCFGRVKHTKAMUURYXPCYPTNJBVSSPEIXOXEXSNLURYODRKLRADTZUBMKZZLKDTOYHEXGUWXAFNWDBMCZGVMJISYDPHQFAGQVNG");
    const char tmp_msg_0[] = {31, 78, -69, -32, -112, -40, 117, -117, 64, -53, -26, -9, -80, 90, -68, 124, -81, -121, 43, -34, 106, -94, 58, -5, 5, 102, 58, -119, -124, -122, 107, 63, -58, 98, 48, -123, 70, 93, 119, 100, -70, -116, 7, -80, 107, 101, -20, 100, -20, 88, 80, -78, -10, -32, 1, -97, -124, 124, -106, 123, 108, 32, 7, 6, 54, -42, -64, -11};
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
    msg.setTimeStamp(0.903243697315);
    msg.setSource(57588U);
    msg.setSourceEntity(38U);
    msg.setDestination(39496U);
    msg.setDestinationEntity(49U);
    msg.type = 67U;
    msg.op = 75U;
    msg.request_id = 1311U;
    msg.plan_id.assign("VZWDLBDQSJOMZVGCGRUYAAIOGQMKORRAWWEZHUFSNECFDWZNACQGXVJPITMVEGSDKHYHTKNUPYIRCFSLALHSKMEVCDSEKCIDECFKAJMHXURFYSTQPXDPYBNLDBOALRMWCRQIRFSLXOTBHVPCHLUT");
    msg.flags = 11699U;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 208U;
    tmp_msg_0.htime = 0.308347071404;
    tmp_msg_0.context.assign("UYHJPNEVVOCLBTMOTRRBUNIWCDRUSZAUZLYWRRUKLNRWYQKQXSSOBHIKFCAEWMNAOPXMYLUAYMJFPZJPLKBQBIYTEJHQMAXDMYTFVFHQQKGCHFGLELNRGPSOLDJBYSTAVUCOAIZRNVGB");
    tmp_msg_0.text.assign("LAUDSGVDGFLPHVUPVUELNEDNONGZOMBTMUQBNOXQWMPKTPZALJMHSIJKXYBBSVQPETYGIUNHMSFETKTERKYZZNCXCLQTLUGVHVFUSYTDSIGZQAIBQCRWKWOAORXNXGUNIAOXAIQZDRFRFRRHCACMJYDKZHFLIIDKBXEWWTLCTISPVFRZSBMWPHTGJCASXOJQVUKVJNLSWXWPKXJGEYCRYDVOAOOFZHBEBIPHEJKWMNDBFQJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HWRJRLKTCIZEXHTVTQCVEBQGLXXGEMORUDYSUDVQXEFPXZXTTQCSOLBUJFMTJSOOAGWLKBFYJDEICLGWCKISAFLTGAXVAFXAPNDTUYPZERAHFHEVTQOUADFBSQQRPVYGNUFLOEWKJDMDHUGSNULENXLSMWWDJVKMZIIZYINBYGRYWSPABHYNKXNAZIJRSEPMTBJRIQQLUVKBMMWKRNPKHCYPGOCKCQPIHFBC");

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
    msg.setTimeStamp(0.0870362596259);
    msg.setSource(21058U);
    msg.setSourceEntity(229U);
    msg.setDestination(16459U);
    msg.setDestinationEntity(78U);
    msg.type = 20U;
    msg.op = 9U;
    msg.request_id = 36836U;
    msg.plan_id.assign("XXMKUDEJOJLYJKDZZVWMMFUINBULBRVSSYBCWBXXTZHHTWUOXJKOYZIWCQDNHVYOWQZNZUJGCAXZUJUUGKPHUAPGCETIEIWXVNQKGRBDGQPTFRAIEPPVHBQSLHFMARVEDFSOWQOOYLKRLFPYGHBMTFNYCFYEQCVNTSINLAEK");
    msg.flags = 54288U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.437193049602;
    tmp_msg_0.lon = 0.992589558308;
    tmp_msg_0.depth = 155U;
    tmp_msg_0.speed = 0.919189539812;
    tmp_msg_0.psi = 0.147173944384;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GMGPPYRFFHHUZPGNEQJBYYRCVFYOGRHPSJNTWKBMUEBMLBETYXPLAUWWAOBATZTUPPCDFAYZMZUSRNOOHGIDXSSNWVEJNXDOCJEJKECCNDCQOOBDCKVLUTPXQLGVSSMLJHLQNKYAGFNOWRKCHALWIUVQXHWTPWPKRHKQTZDIVSQGWDXXYEJMDZ");

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
    msg.setTimeStamp(0.082160790572);
    msg.setSource(37753U);
    msg.setSourceEntity(141U);
    msg.setDestination(27199U);
    msg.setDestinationEntity(199U);
    msg.type = 50U;
    msg.op = 17U;
    msg.request_id = 17378U;
    msg.plan_id.assign("MNMUAWVREJLTGKJAAMDSVDZTDEPEGERYQLIBOUBCFLOTFAEWELFGWIBIIXPVCCLPYZSPJQMRWGODYPNYBYGHGCINAYUQQZOJHTAOKJDQIEEHWANHWZJKEBOMFNBLSXEHBLSXVKWXCXRVVZPUKXUDSMKJUNHRDTQAASIJJKNYUOAWQ");
    msg.flags = 58763U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::TeleoperationDone tmp_tmp_msg_0_0;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ISDSZTMCXMCMIOJJBRLTGJGYSTAGOIYMLCVJDCFVWZCKPHNHVBTVKYJNJOCSLSAYBHTJVNWGMGOUZTOUIIQBJWOZAXUXQQZEFKRCHUDYPVPOZQKEYLMFHHZPZDVNBRPFBIEJCIFAWCSEXIHWDEEARDRDQAAULFKGSUQ");

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
    msg.setTimeStamp(0.714898967856);
    msg.setSource(472U);
    msg.setSourceEntity(226U);
    msg.setDestination(2772U);
    msg.setDestinationEntity(115U);
    msg.state = 54U;
    msg.plan_id.assign("WOXNHGZQXVJAASAEBAYPZFVLNLZTKFFSTNMNEFZDYAJMHQTVTJEKSIAOQUJCRQDUMLMLOPQPCTBOHWKCILXCOMPCDRCQBWEQKVPERODPWOUBSIAEKPBVVXDGGSSXAIMUMLFZWFMNJTSUUATXCRCEBYZLBVNVINXBRONIMDTYYILGSKUTXDFKPFWGHPWIFZYDGHHHKPWMF");
    msg.plan_eta = -322539972;
    msg.plan_progress = 0.059502121602;
    msg.man_id.assign("NOMSWHCLZQOBHVYBTRNXCMVMDWCFCXJWWWOYQGVXGQEFHPHOTHUAZFSOFNDTEQFVIBEESZRXNRXBSIKEVHKBSYUOAVFAMOZCUPGDWTUSZZUEPRUYCACVJYJBFRQXARKMQECKGLIPYAADPSLTBYMRZHKTIRMZLDDPROAISUN");
    msg.man_type = 25908U;
    msg.man_eta = 1010902601;
    msg.last_outcome = 223U;

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
    msg.setTimeStamp(0.730557961321);
    msg.setSource(13218U);
    msg.setSourceEntity(223U);
    msg.setDestination(60107U);
    msg.setDestinationEntity(151U);
    msg.state = 228U;
    msg.plan_id.assign("OGTJSCWHHQRFGSYDVDUNJWFVZHQFVQZLRGZECVKYBSVTMNYOOWYDPIJEJWCRUKSTZGRWRCPMIXVMCOQWLRLQVFUMQQESKZLXEUCLPBJCXPPEQBRAYYIDKCDMKKFOGQIGHAUYUFWAPKBCGMSNZLHGFXPFGUBFRWAMZIDBLWYKTHIXNEDKLROSZVAZBMY");
    msg.plan_eta = -1358451038;
    msg.plan_progress = 0.303631603854;
    msg.man_id.assign("FEOXVVNZEGHYOOPMGXLTWNIRFVSPYKDYAQHHDQQSQQXZZIBGXDJDKJGBGCIOKCARBNHXURNJRZNWHBXLZTZPQCJAGWUMGAOCWTSEYBR");
    msg.man_type = 26794U;
    msg.man_eta = -1971018693;
    msg.last_outcome = 85U;

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
    msg.setTimeStamp(0.0976799168517);
    msg.setSource(20317U);
    msg.setSourceEntity(151U);
    msg.setDestination(13328U);
    msg.setDestinationEntity(111U);
    msg.state = 119U;
    msg.plan_id.assign("KXLLMRSATBGUJKDPCFEDSCCORWNENTFUDDXZVNCKYWIJQPKPZITMLBZNMFLBHCUGOHXPGVJYAOTGREUCOWBQTGSVQPAYUVKSBEEWKNLEPOVAAYSQIHYSERVIAABTZMEVTITTIEQBXFMNHOVIFYDJZOQBSBDYHPQDMOQMDCAXYAFUCIHWHAFSURHGOVCFJGJWXURNWK");
    msg.plan_eta = 1378715854;
    msg.plan_progress = 0.528956453634;
    msg.man_id.assign("PUUTZDZOVXMZUQLCKLNFEHCARCPKVIOYVIVBPYBFVIJAEDEWSJVPZNLYJWUOQPICQQKJHFAASLRLRTEHETBQEZWXMODKJRMEMYQCTPQBDWGJIXGONRHSBOUNVTDOSFWGENFYRWECXHJMGNMTLSAMXZBAHKGJEACYRSXPNMCUKYXUDIPGQVQBPU");
    msg.man_type = 16777U;
    msg.man_eta = -1513086403;
    msg.last_outcome = 236U;

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
    msg.setTimeStamp(0.985893773562);
    msg.setSource(57476U);
    msg.setSourceEntity(134U);
    msg.setDestination(14788U);
    msg.setDestinationEntity(95U);
    msg.name.assign("CAEKNVXYHBDHKDSKWVJRTJLYQHJJMWRRPRCGSGZRJCKMXKOAYOIQUUYCUSMNMHU");
    msg.value.assign("EOBDOZZDWITSJASXBOCWIJCWUAOZNZHOGIMRZJXUHDWEEEAVRIBEKMIHFBNPHZSVTICDZPY");
    msg.type = 249U;
    msg.access = 76U;

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
    msg.setTimeStamp(0.0766994772482);
    msg.setSource(45276U);
    msg.setSourceEntity(18U);
    msg.setDestination(56229U);
    msg.setDestinationEntity(145U);
    msg.name.assign("TRDZWSQPBKPJSQEKGJKZFLMZGQOTOOWJVYFYPZJGGHKHKDCODERSOFQHXRMYCNELKVUUYFNGBWADXVCEZTMUHHRZXQYXLNRMUOMRRUFISRYQTTPHUPPMACXDGX");
    msg.value.assign("JRQKRKMSOLWYLOZUPWXQQISOUFFTKPNYFXJYZDWOUMFDAOTHMJUXBMEPRETMAIGCBWVSEIEZGISDMCDUDEAKFRWFNIOAVEGKCAPHEHKZQNVYRSZDJLTPVUKXNYVKFEGZG");
    msg.type = 134U;
    msg.access = 209U;

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
    msg.setTimeStamp(0.100924662465);
    msg.setSource(36068U);
    msg.setSourceEntity(200U);
    msg.setDestination(34860U);
    msg.setDestinationEntity(159U);
    msg.name.assign("EEOEMXFFLOHMSEQWBNOLDIJUSUVPBFDNZZRWNMYCSWAYNPKOHPZGVOVKQMYRKHXGKAJKQXRCPBUZIMXJSLUFVIAHVVRIKPNDCTFVYNLZDNKTNFQTGQHCTITWBAPMPGYWRRQULCHBTMOYGUCBGBOGJRKWEPLDIDSGWICHELSBODWUAAHJTUJHHDXDSLRZIYMYLEIGZXMBAGPXJSDSZNKTFR");
    msg.value.assign("GQKXWQVXYZJKWDNDGVYBSKENAELNDHFPWULKUJYKKLIEPLWBBLUQRFQCHNDZIUAWQKXUDICMPJEXKOQTYRGWCMFIXEVZPFXJHQCBWAJTBEF");
    msg.type = 108U;
    msg.access = 197U;

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
    msg.setTimeStamp(0.723890331002);
    msg.setSource(58380U);
    msg.setSourceEntity(84U);
    msg.setDestination(61057U);
    msg.setDestinationEntity(248U);
    msg.cmd = 178U;
    msg.op = 23U;
    msg.plan_id.assign("UXHLFURFYOADPZNPZFEMWWSWNULAVLJIRXFGSFHBHGOFDQUTCAXMCVYORSFNZHUPENVVMBOHRQTVYPPLHKWTUBFMYYTIPZICZXQSSQNXBKURWAAE");
    msg.params.assign("PJQDMPEQAASXSVINSZKLLEGMBCGCMYUVTISNDPZJZZOTOHUGDIOYDNDDDAFMVJQSGFAXGMZCKGEWVSERQNQFLHKBNXNUGBWHBYPERFUNYCGZYXIVVRANEHUXQEZWEJRTMACDKOJTXIBVFKKCHILJTJCVOGKTHBQWBFPXUJZWPOLQRLLYRH");

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
    msg.setTimeStamp(0.632288503531);
    msg.setSource(25958U);
    msg.setSourceEntity(98U);
    msg.setDestination(34072U);
    msg.setDestinationEntity(102U);
    msg.cmd = 103U;
    msg.op = 194U;
    msg.plan_id.assign("PAVGJVDDGETNTBODVLUZFRMWCPQKSXSEOHWPDACVKATBOPWMRORYEMLTV");
    msg.params.assign("FKVCQPLKBGNXITGOBSVQYZIIXUHINCHVSPYQBTVSGVNQHHYBWERENNDUFIQOPZOEADEYLFXGKLCIXDUOUPIWTLPMZA");

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
    msg.setTimeStamp(0.283005812198);
    msg.setSource(30830U);
    msg.setSourceEntity(27U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(27U);
    msg.cmd = 173U;
    msg.op = 82U;
    msg.plan_id.assign("QOHHSELCKSLLHISOVBQHLLRPKDKSDAOUOOHLUJBFIEXKMFB");
    msg.params.assign("LHRMQPUFUVJKROBUFPZEYFISTVWXFMOWYOSMIERDVWPJOAMFRQAEWNOOSTZNNXQWAMCTGIMKAVFSBCQBLLQXYUTYPMCEYCWUXPYQIANDSOEBFGKJBCLRHWPBOPPNTLPSQSLNNGILCVHRPGDIHZDEAZZXWZVSUVBVXITXWBZGGUFJNXNESAMITMF");

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
    msg.setTimeStamp(0.874231386684);
    msg.setSource(46124U);
    msg.setSourceEntity(237U);
    msg.setDestination(41491U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.575120491759;
    msg.lon = 0.159945752619;
    msg.depth = 0.939256352708;
    msg.roll = 0.58519854212;
    msg.pitch = 0.25768147256;
    msg.yaw = 0.143163303146;
    msg.rcp_time = 0.84171958603;
    msg.sid.assign("DUMKPZLCVBSMFJVYJLKUXGCNVNBYYVFEYIDGSYIRTEIPLYMWJZPHNLJJOXAHFWDXISKRPEHYKGZWLWNDCBEUZVVOBJNTVISWHEPTQGAWGRLQMJOJIQRFLILQROATBIXHSCSHGMIZYZDTWTAACFAMNGHYMBATRASPGSPXBLNCMUKNSFDBWAUXZQRKLDMRKTOWJBFVNUZUEPGAQTZ");
    msg.s_type = 84U;

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
    msg.setTimeStamp(0.303998090723);
    msg.setSource(22785U);
    msg.setSourceEntity(216U);
    msg.setDestination(525U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.586208060462;
    msg.lon = 0.778977148878;
    msg.depth = 0.878882586416;
    msg.roll = 0.474406746522;
    msg.pitch = 0.676724634019;
    msg.yaw = 0.565698254995;
    msg.rcp_time = 0.115010721885;
    msg.sid.assign("IBKDBSKJGYVCTGKWSDFXKSVIXKFMIODTDMLBDOMIKYRVFJNIPINZEYFPRADVLTTRNYYQCBYCAXJMLQULWWWPNYGZWRXPCFUEUHEKGFXJVIQZGUYJSMHLJENGFQRWZESXEFYEKQRMU");
    msg.s_type = 192U;

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
    msg.setTimeStamp(0.747807177155);
    msg.setSource(30324U);
    msg.setSourceEntity(233U);
    msg.setDestination(47453U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.832752468759;
    msg.lon = 0.914626493236;
    msg.depth = 0.987261366564;
    msg.roll = 0.295272179395;
    msg.pitch = 0.386333707378;
    msg.yaw = 0.695852553467;
    msg.rcp_time = 0.810486658985;
    msg.sid.assign("YHFIRQXRLFBINVXBFZPYYDYIERMHQSUWJNGSMBJCKPJKEFWVWFLNA");
    msg.s_type = 246U;

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
    msg.setTimeStamp(0.785776206286);
    msg.setSource(32234U);
    msg.setSourceEntity(94U);
    msg.setDestination(42822U);
    msg.setDestinationEntity(181U);
    msg.id.assign("HYPDAHVEBIYOUXRJXYNMIMSMFRZNRUIZULLAQQFQTLERKWZYXKYQDGTFIAGYDSTSGVGDOCDPAXIPKEVNQKMJEOOMLFRIAFEAIHCTPKJVZYXEPRJEYYNGWPROVSMOMWHKZWWQMADSWRHUHBVICTOOAZSBDFBMGQCJDCHNPBCFXGGZNGLU");
    msg.sensor_class.assign("ORCJATTFMIJWBIGYNOONMSOLGLILAPHVIOLAVKYUZIPGMYAFDMGGTXSXPQEWWFWBZGZKZNRMREZDVKPUCQVUXCHJLQNCSWFTXYNGILGQFUCOQDIIKJJPTTVHPVPFDRWSYKEKMASBQJCJQY");
    msg.lat = 0.695077425907;
    msg.lon = 0.728197648115;
    msg.alt = 0.431358034442;
    msg.heading = 0.918649690824;
    msg.data.assign("QXDJOLLWYKBAJTHAASHWXBBKTYKGLTTXDGKCOFPZEHQIMAHRVTIAHRLOKRUEOVSDPGMDIMDJBTFCVNEQSOPAUMZFZOEMUJYERGJALNWYCIZPNJYPSVHNFPPKJFYSDDROOHXVJYZINHFGBPZRLPYULSFXCSVVFRJCECINQFRBBTQKAQVEHIHIELFVUUINWXQXUZUZWCXYQLBGQDWTYDGDWIKXWRCZMRGUMOVASWTBSGNMTEQMEUMKWPXNKOLJC");

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
    msg.setTimeStamp(0.781114032471);
    msg.setSource(59431U);
    msg.setSourceEntity(221U);
    msg.setDestination(31965U);
    msg.setDestinationEntity(17U);
    msg.id.assign("GJWZRDUHUCPVBXPTPYNLRYBVWTCBBSONQIKOGTZFUVLWYLGTVRRNPKQJIFHDYCYQLSFSXWXZOFCCGEODSWDSXXMMKZDPTMCKJZKZVCZFFINEQBNHNFVSUEDHONLTOWDAZGOJSSAERBGZIAHQQXHIQRKAHEHTCROIAXXIVIAWWKVLTDOKTUPQACOPYFBNJNAPWMEMWRDXGMEYILLEEUALSHUXUBKMJRPEK");
    msg.sensor_class.assign("CONZGRSYFBTYFNKDIIVFPNZYXSKBIXIFFZZZ");
    msg.lat = 0.773434122479;
    msg.lon = 0.623478638018;
    msg.alt = 0.127553119421;
    msg.heading = 0.253831219415;
    msg.data.assign("QGVZYLJQALJQHTSBNCRPEAUWVFNYDAHXCBZYQFFJKNDXITOMESUYKHHVIVZMEZPGRAWLDDCXLDRZJTCVZOPQURVSBCJSGSIKTTRGICI");

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
    msg.setTimeStamp(0.35424849364);
    msg.setSource(15478U);
    msg.setSourceEntity(29U);
    msg.setDestination(62879U);
    msg.setDestinationEntity(52U);
    msg.id.assign("LHUDTLCZFXSMIKZFPRIRBFRHSMNPNAEVWGYLJTOKOPMOUYSUCDABNKPAXUTLMNM");
    msg.sensor_class.assign("ADTIDOQECXSBQCSPSYSVPUBNJIFHIBJXENOHCQKXVRNPMHNVYVKNADYZTYWLOGGRMWGRABKZPZGPFWTSWLGSYECABPRZEXFZJWXLSPVRJHEBDYEHLQXMTWUCGHENSFVAUIYVILNKOGLECQMR");
    msg.lat = 0.921673106457;
    msg.lon = 0.854353298569;
    msg.alt = 0.583951808325;
    msg.heading = 0.153303113286;
    msg.data.assign("MCROIIFTLGNATJDRLJMSNZPMAQUSOAPBGNXEFKQZMNDUBCHGQAQQSXMNFTSVIYXZLWOZWGEWNCHGHWJXXORAXFYEFJICVSIYLJBXWZAMEGSHPRLUAWLPPLIZDCYFFNJEBHCUKDDKKOZVHCBFMZYEQKRNUQMTQDLKUASKPYDGPRSHLE");

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
    msg.setTimeStamp(0.695142350045);
    msg.setSource(15893U);
    msg.setSourceEntity(95U);
    msg.setDestination(37143U);
    msg.setDestinationEntity(11U);
    msg.id.assign("DPRDADQMLWPERHBCJQFEMOXXJPSWLVAGBHLLECEZMHUYTNMVIZVCKGTQLZUZMQBZXHKRWWIXXMJRLFDQDUSHSJSKMILYQGOGATFJWEWYUSEDQSBWFTEVUTQWIDIGNQUFJVAFAKZJHPOGINOUBONYXPATTKALHNSQMVGUCRNPBNUVXXRKRBVFFGUCMTIACCZBHSHSLIIZRZYYDVWZMJSXOYOBTKOTKCAJNCJKOEKWHENOYXGALDPR");

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
    msg.setTimeStamp(0.779767987041);
    msg.setSource(56454U);
    msg.setSourceEntity(71U);
    msg.setDestination(60530U);
    msg.setDestinationEntity(66U);
    msg.id.assign("ZZRRZVHLVSXPIMDBGVCJJTKQHEDGWOPZEUBRRNUDMFVFHOFSDXRWIXMGPTDDKLLKUFNHGBGIPANYHJOSJCZUQMXZJOFGPYHUNYWATOFEAOZKRWBJSFVKAWPNIVAMHYTFZUQNKVRUBNXQEJUUKCNQLMVQTCQVGAHQOMTGWMIYKKDICCWCESCOIYYXRELRJMTWSBHANLXI");

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
    msg.setTimeStamp(0.195704067074);
    msg.setSource(2415U);
    msg.setSourceEntity(163U);
    msg.setDestination(51157U);
    msg.setDestinationEntity(151U);
    msg.id.assign("MQEIRWQJLKSALKIUIPXYQSOQOBWXSUWNBYSONNGLXTATVBCFBSNFUZJXSODUVRJXHFAWWILDMDAZVIOHBAEWLOUBTXACSTAFMBYKULXAHVBRREHOZOVDLJIPNXQGMDFBCHJNECJRUGMUTVJGCKGTTPZWYTHA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WNWFYMZCHWWIIWECLLMJOWENHABKUWKKKDQNDSGMQRKCCBEMVIOOSWACZFNUHKBEJYXPPGZFGLKSJAQIPQPSSRFFOPMLLKIZNQQHYTRTSVHQTAILYTXLKTWZAOOVBVCNSGARGCXDDSQSXI");
    tmp_msg_0.feature_type = 23U;
    tmp_msg_0.rgb_red = 184U;
    tmp_msg_0.rgb_green = 67U;
    tmp_msg_0.rgb_blue = 26U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.791179218759;
    tmp_tmp_msg_0_0.lon = 0.295994894759;
    tmp_tmp_msg_0_0.alt = 0.558135736154;
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
    msg.setTimeStamp(0.369382755992);
    msg.setSource(44760U);
    msg.setSourceEntity(35U);
    msg.setDestination(41139U);
    msg.setDestinationEntity(2U);
    msg.id.assign("LMATIPNTRPDGBGZUWYWHIBVKEYCANWERVNPIDLFNLJBJGQMZWYYWUUDDGFPVAAOQNXEULGAYJJPTLLQOZIOFPAFYXTCBCLHKWWHRDCTZONIXFEMEMKJM");
    msg.feature_type = 218U;
    msg.rgb_red = 35U;
    msg.rgb_green = 21U;
    msg.rgb_blue = 89U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.154244145333;
    tmp_msg_0.lon = 0.0411467495451;
    tmp_msg_0.alt = 0.947038199883;
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
    msg.setTimeStamp(0.401223986848);
    msg.setSource(57548U);
    msg.setSourceEntity(250U);
    msg.setDestination(44642U);
    msg.setDestinationEntity(125U);
    msg.id.assign("XNIURWWFKWDRFASTNVXFLJNNGRDSGMMRASENXXGGUGEGJIVNJMGAUJEHQFJKAPZLFHQTZPMCLPIAYIWDXRYERWQBTVFVRDOBOMNCKHAVZQZOOIKCSKHTPTQONPQTXVILUMLQCKVKGKAECSUARJDODJXLHBLVFEBOTUFHRMPYOSYJJMOCZAXXZWEIHRYIPBBMY");
    msg.feature_type = 35U;
    msg.rgb_red = 171U;
    msg.rgb_green = 44U;
    msg.rgb_blue = 204U;

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
    msg.setTimeStamp(0.968017478122);
    msg.setSource(57696U);
    msg.setSourceEntity(4U);
    msg.setDestination(28567U);
    msg.setDestinationEntity(191U);
    msg.id.assign("MLVASBUXNEHHHZXVXJWCALINIIGXQSOKCULUXTDTYSOFYWURDJEOWDF");
    msg.feature_type = 120U;
    msg.rgb_red = 171U;
    msg.rgb_green = 141U;
    msg.rgb_blue = 215U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.660345925956;
    tmp_msg_0.lon = 0.182428076869;
    tmp_msg_0.alt = 0.780238249073;
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
    msg.setTimeStamp(0.663256641594);
    msg.setSource(27067U);
    msg.setSourceEntity(43U);
    msg.setDestination(64747U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.175693913994;
    msg.lon = 0.572185169009;
    msg.alt = 0.827404849328;

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
    msg.setTimeStamp(0.662025182495);
    msg.setSource(55254U);
    msg.setSourceEntity(53U);
    msg.setDestination(7197U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.45852045937;
    msg.lon = 0.467526343472;
    msg.alt = 0.916243169388;

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
    msg.setTimeStamp(0.57853646356);
    msg.setSource(23122U);
    msg.setSourceEntity(202U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.56535348353;
    msg.lon = 0.151503035917;
    msg.alt = 0.129426889695;

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
    msg.setTimeStamp(0.114230080037);
    msg.setSource(61515U);
    msg.setSourceEntity(119U);
    msg.setDestination(50471U);
    msg.setDestinationEntity(119U);
    msg.type = 120U;
    msg.id.assign("PIJWBIMAIZVNQUIBFMTXYOUHVWUJDSCDLEHTAMJYPZRNBOSQKIBWDDGYDUJCRDPBZSVRCOKUEYTCCKNLHTSMWBAXQFPOCOONEFFUTNTEKAXGHLTNDOGVSWEIAHZCRCGZPGQHVDLJHVMFRMVAQGVUWCLXGILMGSXRFJAZNWZSXXRPOZGLMBKODXSAOLVFVTCIERARZYHPJKSFBKBYLEENZUEISEAPRJTHXXWWU");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 163U;
    tmp_msg_0.mnames.assign("TEEAUJCHTMQXSTCQCHMLGOFLIHTDFXWBOBVHVLQJODHKDGLNQERNTQJXEDFRJQPYORNHJKKMUORAZEXZWCVCCPYZMBLEKJXUHPSXGMIPIPYSRCEPMLMWYBGZSKARVIHWYCAELGFZJOOIWVEBAUNSDNNIVULVUATUHSDSZWKDMJCBGZSIVFGTATPPDIZAGNRFGPQQOBOLXBNSJBYEAUJONFBTWNVQYKXULXZWVSDRKPF");
    tmp_msg_0.ecount = 233U;
    tmp_msg_0.enames.assign("NYVWMUHTBDOIZJDGFQKIUCOIAPMYRLESDZGRETQTWWEDTKJRFWXDLPBNZXGRESZOQUQZVCCCFLCIWYZGATDPELABXDMYPRKWANXPRUEQGHGVHHYMBTYJSWYNFLUDUPTCLXCWEAPSFFEBKSZGAOTPKILVIJJLKARVBJCKSYIGMJNBXTFNWXHIOYWSPROVSZSIELGQZXMBVCTMGBJZEOAUFJHOFNRINNFUUJOVQLHD");
    tmp_msg_0.ccount = 41U;
    tmp_msg_0.cnames.assign("PDAKGHYJWSZFKMHPHXZBYO");
    tmp_msg_0.last_error.assign("YLVUFLCDGBXJUHEXVIGYMCINNZXTOIKWFJRELOPZBGBEWFHSMWNQTWPXPEXZSRKTDDQERVWUONAIBSKTBZAEUHAFNSHYOPZXNFXJEJULLVXTBAQQRCZUPDJYTNNFRZESKCIDOFJUWISKOYIKVZMMBEVLAVKAOLROQLHD");
    tmp_msg_0.last_error_time = 0.143114943103;
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
    msg.setTimeStamp(0.263274692689);
    msg.setSource(54888U);
    msg.setSourceEntity(99U);
    msg.setDestination(39065U);
    msg.setDestinationEntity(67U);
    msg.type = 206U;
    msg.id.assign("UADMLGUJRBUQAXYKDBMFIDFZNHPQDYZHYWAVJBUOHMKNLHJTOCVIQOABODSQKZPPKYKLIZTNNCCRTTXFVRHKEFXISQB");
    IMC::LblDetection tmp_msg_0;
    tmp_msg_0.tx = 200U;
    tmp_msg_0.channel = 147U;
    tmp_msg_0.timer = 13988U;
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
    msg.setTimeStamp(0.320828070412);
    msg.setSource(46079U);
    msg.setSourceEntity(247U);
    msg.setDestination(10049U);
    msg.setDestinationEntity(70U);
    msg.type = 188U;
    msg.id.assign("TWIKHHZIBMLEAMGJYDEDJLMLJPYACAABQCLBXOUFNNSCRZDBIPHEGBYRMTKCXHWOZQQMUDRFCCNYKBAVGKLATWDZHOVXZKKBHDISUEZGYIFRTPRUQROMFRXOMEARXFDQWUVCGYGBFCVVQASOBLWWNSVPZNTKKCPNLCHDPWVFWOOSQOJGDIQJSXLJFPSNEYIFPTYRBXUHTJZXMPT");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.861709019636;
    tmp_msg_0.phi = 0.645702359338;
    tmp_msg_0.theta = 0.522720437842;
    tmp_msg_0.psi = 0.97756148081;
    tmp_msg_0.psi_magnetic = 0.76892278204;
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
    msg.setTimeStamp(0.706655294434);
    msg.setSource(21946U);
    msg.setSourceEntity(213U);
    msg.setDestination(285U);
    msg.setDestinationEntity(145U);
    msg.localname.assign("GRMKUDBPPMFHCZHKEPIKFSOYWEOLAQPNUHZZTLJSHXNSVAVKMJWGKVKTMBCUEJRQVVTKXMQAFEBJPQRGEFDFCNIEBSYQZXICBBNAFCCWUYHHZIWVYIXJTXHIAFPDAPFEMIWOGNIJGXWALQVQHGYEHYEMZOBUGDXTRFRBYGRAOMJUYYLIOTWPRXNQLDKUNOMSCLZNQVQMDLGKOCETWDSBTLGWCDOT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XGYNCUMALVPIQHQFLELI");
    tmp_msg_0.sys_type = 64U;
    tmp_msg_0.owner = 26414U;
    tmp_msg_0.lat = 0.979915499613;
    tmp_msg_0.lon = 0.701614056202;
    tmp_msg_0.height = 0.508996675398;
    tmp_msg_0.services.assign("JQOKLNROUUDLMJELPZDESBIYHFSZYOBGVTVRRNHFBRAWBAPTEKAZDKLDDSHEBSUBKPVPGOTMFVQIMHGPXHXAJVQDAZTOFMAPTNQMJDFUBWJYXGUKGHZZWCJNCWQOPTJIKQRNCXAOWSDZSHVYWTRIUL");
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
    msg.setTimeStamp(0.107706789449);
    msg.setSource(20274U);
    msg.setSourceEntity(25U);
    msg.setDestination(40099U);
    msg.setDestinationEntity(95U);
    msg.localname.assign("XSAYUUBZKJFLVOVLXWEQLYMNWJLVFHGXEWEDFMSDBAMEBFRUDVKASUROUXWJZHBWPCMQOUHIDPMRQILORXOHRQUSXMCQIOLDLDINMBAQBVKGCACZMCIWFTGTMJRJYLVEIGFHCOYKBOKIGRVRBRUCYEQXLREDSJIM");

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
    msg.setTimeStamp(0.782983021689);
    msg.setSource(44165U);
    msg.setSourceEntity(6U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(43U);
    msg.localname.assign("FCRGHHTDQDMLAQXBTYQCKASMPJULOOMMRWWFWGEPOUKEVJYWCZEMJWWQKQVOBFJABRGSJITGUEZAHNVXYUHRCTJEIMXPPMYCVBHCNSPKHIKSRPIRBP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EVKVOHNLASHTGBSMXNERHIJETVBJNWPUFHZGTIWYXCYMSDALFAGBZCRDMSVKEDVOSGKTQUMKBDNAPVTWZGOFEWXZFUNQEOMAUCJPCYIU");
    tmp_msg_0.sys_type = 1U;
    tmp_msg_0.owner = 39851U;
    tmp_msg_0.lat = 0.64818891847;
    tmp_msg_0.lon = 0.778033354741;
    tmp_msg_0.height = 0.226964373595;
    tmp_msg_0.services.assign("ANDUYEOZOQKASRQVSDGVUKWMARANMVSVPSXJERQLZQDFGRDGMTBEDIPYCGGCQPPMQXWDMEPMTCBSVZTCGOKYPJJCLNZPHBXHROXHFOJJDHHHIJWGANVKNUNSCVTUSIGFRZDQLAMJLLOZCJIUBSFFEAIPVXJSBOHBLOE");
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
    msg.setTimeStamp(0.496314573825);
    msg.setSource(48114U);
    msg.setSourceEntity(85U);
    msg.setDestination(19976U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("BCEKZOPSVSDYUCHMDIBPEDDSNYRQGXQZLXWDJGZPMSIOEGPHTPIBBBOAIYUFQCDLHCXCRRZDABSXYELOFCLNNJWYNHLNMDPJQOHFVNWLMFBXUKQTQJGPMOGMCLUXEUKZMTGSUAUNNNSETSKJEORYAXZRFXRHZLJWXOBTZLAGRFFMVIEPKMIUAVAORGNWFZPTKGVFXBWIQQVKAYKVWUSRCDDIH");
    msg.predicate.assign("LZBUANYOBCYQWCGCCHXYIFPXFDRRJAAOQMUCWOWTAHKWAVPPGVXOTBGKWLMFWZLJCPXNTNJGRUQKGELKHPRMOMURHVAEEWSJAJKEIJULJRQNHAZOVIXKJEHTNATEZIFNUUUSIYXFHKKJUVHYJXMHACMZXZVBQSDDVYPVVBESPGQDRFTNFELGQCOLZTNCZTHBLSEIMMF");
    msg.attributes.assign("NJEPFKZOLGTLMVAQOFADIZLPNR");

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
    msg.setTimeStamp(0.12602702703);
    msg.setSource(54936U);
    msg.setSourceEntity(68U);
    msg.setDestination(9869U);
    msg.setDestinationEntity(132U);
    msg.timeline.assign("WWZEXNFQRRSSFKNZOVNMRFFAAILDYWGZJMRTPUCQZQXTQLXMKOCUHVUCCYBCKKTYFETSWWWCJBVJJIORLOORTZBRBJZNXJLEBTLNHIVVUKPAIZGZFXKWWUIMEDMHXDEBYKQDPJPCBIZHSGADNYWGXQSQGQRAHQTXODIWPNEQTDGKYMVIBUUVEI");
    msg.predicate.assign("MUPDYIZBTDKSKKLOJHQDFEKPCANAWOVIHQVRWLTUCIG");
    msg.attributes.assign("DHQGEBIFIETMUPDXPUEGPFRCFGALOWXISSYOXJZUKBKPEPCBYCKXYTVRXHJCJYFCMIBTADILMMLJZZWFSQTOFNPKFDSXGAOOMJYWZSVANVVRRSMSBFHWNUHMOLGRBVVAXJOWQAQJWZTQHWVEYUNKYASHBPHSKDENTTOICWCAL");

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
    msg.setTimeStamp(0.241260955679);
    msg.setSource(38144U);
    msg.setSourceEntity(217U);
    msg.setDestination(44458U);
    msg.setDestinationEntity(33U);
    msg.timeline.assign("KTOXHXZNRJWUJTBELWPBMNLCYQYMBYMKEPUNIURZLJATCSNXCVZCKDVPGMNCJQAPWRLDKWUEGZQSVABLCAFTDPWEFGYHCYSKEPJYGXJVWRQTSKSLXNBKQFIFLQOFTGMTXFTGBSTZPPROHVVEOSDAHPLNNOZRHZDGEBXGLOHQR");
    msg.predicate.assign("BLJHUVQFHLKZOHSRBHARGJUVFEKTABMODSDSSWGMKJGQMLAYUYVHDEAGUCONXBWMJRRNPVXWQQCADZXWIJDIQNSFSMCAAJITNYWANQPRDDGXVPYAHEGYRPYBWLJSTNOMWOSEFCXZLXYKVMUOBROPQWNBCEKTECXPINUZDJKQCWCTQIVEDYRKHTCEFLAGTSMIZFLIVJIHIP");
    msg.attributes.assign("WUMVFKXJWOTXCYBGWCVYOEEMXAJHZBANRXIPBTIMWOHZGCEWETJIDGTMYSKUANUFQQVWIRUCFDAZXYNSJKQMPZPBMVXHULPLSFMYQHRJYDTLJEGGDIKZLGOWSVIRNUFTBQBDRAFCTMEGQEHKXRUPVSLLTMJJKZSDADWLBAVCCPUOJPQPKTI");

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
    msg.setTimeStamp(0.703960216909);
    msg.setSource(10559U);
    msg.setSourceEntity(46U);
    msg.setDestination(23992U);
    msg.setDestinationEntity(68U);
    msg.command = 131U;
    msg.goal_id.assign("KIBQYONWJTMSYLGDROZDRJEYTIHJZQIOBIOSYPNTCSCZTBNRACZUPKOWLHUYGMKNEQIJPYAQDQHZKXCLEKDNWXZMCEBAQHVHNNTUAQOMPAEHGDFAWLQSLDEVFESAUDWNEOTOLHYMCTGBOGBHDEVTUFLKXGPKEOULGS");
    msg.goal_xml.assign("AMGGYZMJDHUSUPQBWCOPGRKGXUQFEHFKWRJFYIGUIORVHWVNGDCIJERDOZXYEESRKWEAOXTRNQUGLCFIXCVMXDLNQXNLYMETQTNLBHTXKBEKGAVCSSMZCWDPKDLTWVQPVYHNQEYTGFNFZTKIMHIMOKAVOSFLUNDOZBIOMWMIAPKQQ");

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
    msg.setTimeStamp(0.427849335886);
    msg.setSource(30359U);
    msg.setSourceEntity(47U);
    msg.setDestination(16106U);
    msg.setDestinationEntity(64U);
    msg.command = 140U;
    msg.goal_id.assign("HHZBEETNNJZMCXVMIALRTWFQDDMSSOYYMFTJSWXIZGSXIHUASPKPBFOPUIZDHQDBOYLOOKYCSQTEPAKWRFZWYLUCIYEIDFARXUQNLKNMGJCJLDUM");
    msg.goal_xml.assign("IAENJLIMKYQVBFGOVEALBRWUFSZTOOVHKTNZUESLOGRUBQEFGSHWSTVTSLDEXDMSCHFDQYMOTTJMDHPRCHIFDAFXNNJNUYCBXNGLKXUHIGBQIWCNIDKQOMBBDITJMGLXOQFEROGPQYCJBBJLYMPFZRVFLEWRGELYZYKCNXETWXIYRKZAATVUJPSHNUVWZRUMCYWZZXOUEOVRSATQIMJPNPC");

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
    msg.setTimeStamp(0.265061586459);
    msg.setSource(48958U);
    msg.setSourceEntity(192U);
    msg.setDestination(63223U);
    msg.setDestinationEntity(172U);
    msg.command = 66U;
    msg.goal_id.assign("GXKNPFOQXZWDZ");
    msg.goal_xml.assign("PUDJASINGDPQEIFETXQULDGRUTUYHZOZITSMAYFMPSLOMREBUONHZCZRIHAYGOKYZXWKRVGBGKACQNFMMTHMJXRJETQTJCKBNGBKTFUOBESLMWDRQP");

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
    msg.setTimeStamp(0.0203125321903);
    msg.setSource(45602U);
    msg.setSourceEntity(144U);
    msg.setDestination(2244U);
    msg.setDestinationEntity(178U);
    msg.op = 25U;
    msg.goal_id.assign("LSBWRTGAUZKVWGXEDEVQFAPFJZKZCSVBPHOQVBKSLNOSCPHDLPXRZKFMYOTTEIHOSBMPTMINCIPHHMQLJCZZCFWZMFBLTCYZPBNTBFEGGGPAKUYHWHYCGTRKLTLLSOXMTAUXKQCOUHZEBNIGFUIWYPIYZDJFNYEJAICAGMNERBJBEVHQQUQVGX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PNKNXPIHWDPARUPJPDNNCLRQJQZYQKMVSFOSGVESZFKMZJVHKDTCWDYDHFLFKOTCUVVLBEIMGKYJPGWMTUJGBNERWXSSTBDWLOEZEXNQNVRBVWSZPCQUJHOKMMZFHNUXKXAGCZFQOUTMGBOYXIHZRTWCTUAYBQIISIQFVZKLHQEXKRJDADWCJGTXTYYBURGGCCHALYSLFAJFRMAJINBPEVLRNOIOBIFUOAIRWWDHX");
    tmp_msg_0.predicate.assign("NXNQZIPNJHBDUNRGLQVPJZKTCGZSMISUVRKRVFRCAUQJYXO");
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
    msg.setTimeStamp(0.509386589519);
    msg.setSource(45933U);
    msg.setSourceEntity(16U);
    msg.setDestination(21525U);
    msg.setDestinationEntity(28U);
    msg.op = 70U;
    msg.goal_id.assign("YOVKJUCXJOSURMZZXWEWYYBVYBGCKZWNLQBCMZLHDNSVAWGJQWGLHEFGKUYFCQVHRRSVZGLBSKZEISXLDUIEGIBVDHNMWSHFRBVDPPFKHAXSKFAKHUANYMZUGBCGUDFHAORQMYCYKAMRGFTIJTOCMRJECQBPMLPBXIJJJWQWPEKFMTYLQOLUNERGUTDCIWDMZTNUWPFETQXIHFQIBRXJVESLOSE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TJYCDFJNPUKZSEGCTIYRMUWFDBHWXIOKMHHULTUGZBUZXRLMDPVHQLZGQLHPMYQVJMRMCAAMEGEDNUOBSSKVXLWUR");
    tmp_msg_0.predicate.assign("EAOQKXGMEYVLSHFZMPRDTLMTAJOCZXBGNPTUVRTIAYJAEIVSTJWSIQMZHFYLTAPRXVUYOJKWAPIVQKQZYESLMEARWBEXIPDFFPEHNOTXBBKJCJIIXSGDBVZMTNPCODGSQBAHKKHQVJSNUZHWCF");
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
    msg.setTimeStamp(0.444620017378);
    msg.setSource(51714U);
    msg.setSourceEntity(2U);
    msg.setDestination(29217U);
    msg.setDestinationEntity(94U);
    msg.op = 67U;
    msg.goal_id.assign("VHIJKYTGEIPTZGEYAOKAJTBTLNXALOMQPFNVBULUVEZVFKVDQNFFMTSBNHBKUPNUGSWLRGXQFRIRHIDWSNLCRCXBIPZIWGURQPYUEXNDEUAQOKSHKHIASXJICZMTZYSCUNAZBWFVYVMUIQXLMSOJTMBEBRHCHJXFQWXNWAJHLRBSCCHWSTCJFQMVVOPWGCDYFZXEKPJPLQVDTAIDODMCUKKDPGZYEJBOAYPSTYDMGFGLKNO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VXLBDJUWKZUPARWKYGPPVUDOOKCBEUFFAWNVWEIPZPEQDEJIDVVYMXBYCSJDBOTXWNUWLMHARXZSTXRKFHUIRNBZKCSJZLJXEFMPXPMUGTLNRIETRKICLIGOESTYKMNSLYPLBCZLJXVHVNGXYBOYSQJUSMRHOUZNNAAVGMHIQRQAQOODARVTQGNYSVJMUGOQSCHFJHFCWWLDIDHZECQGQFAMFEYFZZIHQTTDBCWOKPXFSWITGAMKDREGNY");
    tmp_msg_0.predicate.assign("XTUWTFTWIMZHVDBSBALXNXJCKHAZXAKBVGICMTGMLPPHKPFMFGUCTLEBJWZTXCSRGDQORPZSEIOKLZSDWYCMUPYGGVOQSNSZPQFVDAKDAVXQVLOOFBPQWUIHYDCWRGXHIUYQLKGYNFQCOYMRDDSGMBWIKJYNZOBZIRUMEAKOJEFVKUNUUEORPZAVFYJHJTPACEHEQMCSLOLEXAWNRBXLJYFKJNEHMHL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JQUONAIKYDKLEBBLMJLYBCRCPPOSDWFRBUGUUJOTPLTYMXNXMHXTOKKQGKZUGQIRTZZHPEFBNIHZSFRYANDNTZLPUQBRKLQGVWSSXJIANDPEXIWRRHSVVPQEEMTOXVNHLGLHZEIMDJF");
    tmp_tmp_msg_0_0.attr_type = 220U;
    tmp_tmp_msg_0_0.min.assign("MWOIHYORNROZUHTPKATMTFAGRDTOVWFQDOJKGXZSVKRLUGKHJZKBXKNFYSTLIHLLEUOXGLBEASLFQGEFHCJEGVPXXMQSVPUEJIHQTTVFEMSIDSGWZPBSIUMIUABDVDUWCYSHYRRY");
    tmp_tmp_msg_0_0.max.assign("IJLDJGDVCYKZYUE");
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
    msg.setTimeStamp(0.0773369888937);
    msg.setSource(18482U);
    msg.setSourceEntity(237U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(49U);
    msg.name.assign("RIDAIPFKONYFHEHOGHAQRUOPWUJLWNZYPCQMSITCNGYBCAKL");
    msg.attr_type = 28U;
    msg.min.assign("ODYLFJPHWKMGQPJGBCVDWPSQQZHJKUVRUEBGCOXWRJLHQRCQLDGOKBIUCWPYVEQSFOBXUCFEZCMXVNCMKNNFRGVABMTXKWSLJCCXOSIILAKGGALKWTYTHSOJRYZAWUDVFXTWYNTNUOPJBTPFIXXISOPTLZYKARBEZZETZUEQUMRAHHNNPCYYIILEQGDGAHEGVIMTDWRDBYEYSRVIIFHQEDZHLZXSMKANUFNATMZFSPVS");
    msg.max.assign("NNFPWQJCCKUOXFZKVATVIOYVMUOUMSMZYVYFPXKDCOBGWOQXCELPDTTLPMBWURYXFEHNISWIQGDTJJBRXFGTTZVNLGJBGWBUZQBDISHIEGMHWCYYHLSPTZKHUSLKYFFWVOERAZNGCBSNUZRZXKFJRJSLCEVAUSRJOVQBQGZCMAFIADMBXKNHYHPJDPWLVXVCXJIYYNMMOFPTKTDREHHIUQONSQWLAPXBTAECLRGELMKZEQSAUOPDAHAQGJI");

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
    msg.setTimeStamp(0.438460936524);
    msg.setSource(9578U);
    msg.setSourceEntity(191U);
    msg.setDestination(10137U);
    msg.setDestinationEntity(121U);
    msg.name.assign("NYPXIBOCCMLJSBCFBENZSSIYWVAUQYPCGSMISXOXXCJOTOTECIMPGDCD");
    msg.attr_type = 13U;
    msg.min.assign("RFXFRQDQYKMYYXQYZQLUTOHGKLLUCPVUSSCNEMGGPWIFLEWCVDUPPLIEECSPFCAUZNORQJQHNESJODRJHRORYIZMXAHEIXMTHANAMDYWAEKZANGZYFAHJJMURGBGHSIIQPQUPKZZSFMUWLTCWBOGPXBTLLVXQCUJVGJYHVZSLDTBSVIFGFDVIKKHCUJZDTORTVFHDORPNKRKFLVKYPXAAOCJWWXYBIMSTTTNN");
    msg.max.assign("BFRKRSENVOOIXBBKMHOJLZXPGJNNFISGJIKCOGAUMXLZCTDBFTNVWQAMCXHIJPDDAHEQUYKLOGRVFVWSQTEIHXAPYQYEWTQCAXESWBDQBMMELFAPUUGSNLHPBDKCRXOYLEDFMIUHREKBJZEKDUZZSXGRYDBOOTHIWFCPQZRWYXGTTVVJNNRUMYZLPDEKIXUOPWCFSUCWWNRTHPOIZHKYLHSWUTN");

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
    msg.setTimeStamp(0.525006033812);
    msg.setSource(34432U);
    msg.setSourceEntity(135U);
    msg.setDestination(28741U);
    msg.setDestinationEntity(229U);
    msg.name.assign("EWLPMDQOCNXYHDBSUYRNWUCWYYPKRPKDDYATOXRBMRZKNFTVMNDIELSFUCIJAIRQYTHAXPMXQIGIJMEQTIBUHWSYSUGTAXVYCKUUFOJEOSAQPANWENTAIJHVCRMXAQUJVCCBGHGWORURZMSDAHEKBZWFPDVBWCFUFFIOZOZJPNLQKETMDSZALBHWXDKYBKVGVOIHFREBYGJCLVPTZQGEPXPGFZTINJJOZ");
    msg.attr_type = 148U;
    msg.min.assign("OLFKBSOGMFANUYTRQGDCCRQSGNOKCGJYVSVZYAWCFZXCWCKTCPLLMVGZZVKSLTFHXPOGZMVMTIXERNMEOBKZUJYVKDJQATPGRDXIUVDWLIBYUABFZGSLQNQIFBXYJWUHWSDOMBHVOWCHAXCTKMU");
    msg.max.assign("EBERCSKHAZWMNBUJXRETXDONOVCTMNNRNZIYFAMFPVOSGPTWNZMSUCDWRURYMT");

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
    msg.setTimeStamp(0.107803189985);
    msg.setSource(23007U);
    msg.setSourceEntity(49U);
    msg.setDestination(27909U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("IMRBXOGNCXYKEUTMMJUJTDHZXUOH");
    msg.predicate.assign("GVTXLUJTUFWDIAM");

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
    msg.setTimeStamp(0.160383037687);
    msg.setSource(56856U);
    msg.setSourceEntity(210U);
    msg.setDestination(58514U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("ROKMSFBNFASWIGRRFKNC");
    msg.predicate.assign("HRANKFTLGQSMOVOAUWQPUYSSWBWQZPHWEYCYAUORLYZKFBWVMNLYOTFHQCNFYRLUAGCGRVECJQHTUKFS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SQROLIXXZMVWPJQUIMRNCKEFMREJVTQFYORNZQKWSYGAQMZGDEBKVOFUORNUDICTRQUNPSDHKLVCVNCXJVW");
    tmp_msg_0.attr_type = 76U;
    tmp_msg_0.min.assign("GUYHMBWNWBEQZMVRIAHTNNEBLREQHPUPJGZEJYZEWKYAXJZIQZIQTLUHDNCLZTIBOFAMRSQAIKVMSXVOJJEKIAPUTUYKKIWNMYKHLLLNPXNVKDFDFOLBKIXYRWDJKXHWOQRDFEXSHVDUQLUGNSFOZJEAMVNHKETPBJHVPDNFYGXSSWUYAPBXMGHOCGVQOLYMCZEJVOIGZZFCWSPFCPYOCJARBWOSUMTLGRDFCTRGFRIQSUCDBRQCDSX");
    tmp_msg_0.max.assign("PRLXKMXMODEHNVTHEZTNEZCERWWRUQJIMHIZUHMGRKCYBOMPMEGOQBNVTYVQAAFFATWZJOKJUXRVVZDGSBICOXUUNJCXSBDDRETHJGCOYTLUKZCCFTPAQRFPGTGD");
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
    msg.setTimeStamp(0.338893648793);
    msg.setSource(46013U);
    msg.setSourceEntity(149U);
    msg.setDestination(53730U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("VQWIWEYIHMEAKIXFSCZHHFWUHTGEPYSWFNOJVMRFLAKPTRSRWLVIOVAUGJWCESUCLEEFBNELHIIKKPIMQFGKCDITRTYXOXABNZZBNQGVEXKJMTYBNUXVOTZNIOSMJRUJTEQYLDAMBXFVNSQUCSBYGVRYWFXKZVBXSIJNHGRFQWXLMANOMSXCDZEBHTKQGNGCZQYLPRLPJHWYDPHCLLAUDOQTTCWGBQMCOGAUDAPPYJ");
    msg.predicate.assign("NVKRVSMJALWJGLWOOJYPKZBGXSLXHLHRBMHKMFMEIAROTRFQCTPBAUQECSEAPRNGBFELWEQKMDTBSDJZZAYFQWGGXIOZPVNYBJYVEUBOERVEKGNWZXQISUUCCKPYIZRZNTUGYKMVDXHLFHYKPDUNVBXAJFCVVJDFDFCQJGSZYHJIYFXRUZBCVOXLFHDEAWWOPNQYTDOQQPWSSMCBIPPJTSTISMARUNTGCUIAILGATCMQEMXRNOUOLWZLHDKHD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HGCHSKWLRJNWDBUOBYVEJEYCOCQEIRZGEIJVLQZVNA");
    tmp_msg_0.attr_type = 7U;
    tmp_msg_0.min.assign("UOSAIMZNCCKDZLHMLWROJMKFETZOCTJRJBNPMTGIQNROOUFUEXXJK");
    tmp_msg_0.max.assign("IIKHWQGPNYYYIWBUTQERGXFWASWMJNLDHMQRYFERLTRPGASVRNZTUNPECGOIBNOVSZBLOMESEQPCSKSGXOKFQNZJBKRVYZMPUOYQSOJVTKZXAQFCGYXYILKJGGUD");
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
    msg.setTimeStamp(0.335193636599);
    msg.setSource(35751U);
    msg.setSourceEntity(110U);
    msg.setDestination(53117U);
    msg.setDestinationEntity(190U);
    msg.reactor.assign("VZZWMNHOZRHSLWXNDPCDVHURXRKXJPVMIZQXYNHUDZGMRIFHBSSPIMNFYUXDFUQOVNZPWEQUYQAAOMPIGPOECVJQMXFHRKLKCNGEVCXUEFCTSQRJBE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IANZXCQVPNAQESCNWVGTBJNRDLYLTLIYPZWDUVTLPPDUNAUOGOJFFKZPEHEAFA");
    tmp_msg_0.predicate.assign("GMPPQGNYOJCOKNJOYIVALWGTLJTFDTSQRUHGUAUASEMUVSDMNFYXURUQTUBWLEDZBIKIPOBMFFWXZMOVSHVWZBPITALZNMDXIHIAZZLYFXEK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QEJEBYPKOYXCSFFJDCGICBBLAXMBURGMHWBAUFGXEFNBFTKJNTBGYDJZLPAZGRMEKMDPMOWTUVNUBBSETRPAJUHWAXAVTJUIQLGISHYEQHFDKSAJHUNHFZROONIYDCQXWQDMYNODSTJGKSNCGQISKZNKZFQHTWFCWXQOLIJSOAVKLCWVEGEZLRITEVMKLOCXQUWKAWLFZUXCSPYOAUDWLYJPDGHIZSPRRQI");
    tmp_tmp_msg_0_0.attr_type = 134U;
    tmp_tmp_msg_0_0.min.assign("QFNDKQHXAWIWJJAYNBLCSKQYXQOVQHGXVVGCIVALDCMOMEVDOFZNVBWSLVYREJPSEMHTKFOOTPUPAKGYIRGQPZKBJUUTYDCWBHTDHDXMECRBGEGRUHQALXFVKOIRCVNFSLNZXQGXZASVTDPEPSIWYPDWOWDLNBYUMESHIHXEFFUTJSGXWSROJMIHCMKFJJMUZBWXLPDGCIAHNRBUCMBNCFZRKUEQZRATZBQGUITPSTENZROYAKPNAZILJMW");
    tmp_tmp_msg_0_0.max.assign("NLMANCHFEMKKBXJZUZLOMXIIRBVZHPEJBGAQZVKWCVICIWYUKQYDTFWKJQSWATDBLQVVORAPXUVUSLJHYMMAFHNDYTLXQYEEHVWERJTNBHHSRPUKCSLTGDFTBFXORHKQNAPFYUX");
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
    msg.setTimeStamp(0.0919723895654);
    msg.setSource(6680U);
    msg.setSourceEntity(81U);
    msg.setDestination(63045U);
    msg.setDestinationEntity(222U);
    msg.reactor.assign("AOQXZHNSPMKYKFWNUGTXVVBAUIQNHABFLDKPKALGKSZRPIRTOWUVFBMJKXTXHSJGRGRIIPAEWCWCBPEGHNYKPHRITPGCQCVBGXMFVXMOXLEEOFGDQLNMQJCDODQUDRYOXIUCMYRTXK");

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
    msg.setTimeStamp(0.112573130518);
    msg.setSource(43315U);
    msg.setSourceEntity(15U);
    msg.setDestination(7478U);
    msg.setDestinationEntity(229U);
    msg.reactor.assign("EWMOZPKFYKZPPRZCQMCORJVWBHNTBKQOVYJALDIHEWJVTDXERUBLZDYTOSSXIPHUVDZSINCBHLWUDSTXELKJQANTFUEEIHQWDYSZVWGAXDIEUQVKXJFMYXQRTNCPIVCBGVSFRRXJELWHJTPSWPWDHQOAZUAKBMFGDH");

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
    msg.setTimeStamp(0.319013312911);
    msg.setSource(2518U);
    msg.setSourceEntity(253U);
    msg.setDestination(17473U);
    msg.setDestinationEntity(84U);
    msg.id = 23U;
    msg.width = 62056U;
    msg.height = 17202U;
    msg.widthstep = 282U;
    msg.channels = 219U;
    msg.depth = 152U;
    msg.finaldata = 131U;
    const char tmp_msg_0[] = {-42, -5, 12, 61, 54, 22, 72, 36, 43, 72, 37, -87, -76, -8, 86, 98, -43, -103, 28, -108, -39, 70, -12, 20, 76, -17, 28, 121, 116, -35, 12, -55, -36, 91, 85, -98, 122, 83, 17, 11, 123, 6, 28, -38, 75, 109, -20, -54, 126, -6, 103, -31, -43, 39, 5, -35, -100, -63, -90, 69, 30, -113, -100, 17, 117, 31, -122, 101, -109, -92, -58, 86, -71, -36, 75, -14, -32, 16, 67, 96, 42, -98, 20, 27, -45, -77, -91, 40, 69, 109, -12, 117, 86, 63, -90, 81, -1, 21, 55, 58, -108, -59, -72, -24, 46, -13, 4, 30, -89, 22, 21, -23, -87, 13, 46, -46, -82, -57, -89, -15, 31, 93, 97, -15, 89, -118, -54, -57, -107, 59, -33, -69, -24};
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
    msg.setTimeStamp(0.741027254315);
    msg.setSource(13147U);
    msg.setSourceEntity(82U);
    msg.setDestination(22475U);
    msg.setDestinationEntity(39U);
    msg.id = 107U;
    msg.width = 43058U;
    msg.height = 9493U;
    msg.widthstep = 23884U;
    msg.channels = 125U;
    msg.depth = 197U;
    msg.finaldata = 128U;
    const char tmp_msg_0[] = {-97, -99, -47, -108, -52, 56, 17, 12, 111, -72, 41, 0, -13, -75, -114, 47, 6, -31, -116, -20, 55, -74, -61, -75, -109, -108, -66, 110, -2, -13};
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
    msg.setTimeStamp(0.00390301848009);
    msg.setSource(55029U);
    msg.setSourceEntity(177U);
    msg.setDestination(57104U);
    msg.setDestinationEntity(88U);
    msg.id = 54U;
    msg.width = 8453U;
    msg.height = 47959U;
    msg.widthstep = 1661U;
    msg.channels = 123U;
    msg.depth = 15U;
    msg.finaldata = 166U;
    const char tmp_msg_0[] = {-15, -117, 32, 115, 85, -92, 16, 82, -71, -58, -128, 101, 73, 19, -36, -108, -117, 63, 7, -127, 67, 73, -93, -119, 64, 111, -122, 102, -97, 25, 86, 92, -118, -113, -72, 46, 46, -58, 107, -76, -79, 77, -3, 61, -121, -73, 92, 110, -111, 22, 86, 99, 22, -92, 114, 19, 39, 31, 17, -117, 10, -60, -83, 1, -19, -116, 8, -91, -37, 126, -113, -10, 55, -47, -6, 84, -75, 57, 97, -67, -22, -123};
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
    msg.setTimeStamp(0.299387600583);
    msg.setSource(27841U);
    msg.setSourceEntity(76U);
    msg.setDestination(44633U);
    msg.setDestinationEntity(128U);
    msg.width = 56192U;
    msg.height = 8301U;
    msg.channels = 195U;
    msg.depth = 216U;
    const char tmp_msg_0[] = {118, -103, -76, -94, -90, -117, -70, 18, -56, 53, -45, -17, -7, -65, 26, 16, -38, 86, 102, 107, 7, 119, -110, -90, 76, -110, 84, 19, -23, -52, 52, -23, -45, 113, 75, 31, -66, -63, -98, -14, -34, 21, -87, 40, -76, -11, 67, 71, 42, 111, 32, -10, -105, 41, -77, -97, 23, -21, -37, -68, -61, -54, 93, 69, 20, -23, 56, -33, 45, 68, -122, -90, -37, -126, 50, 60, 20, 84, -33, -52, 122, 26, -110, -45, -96, -63, -120, 86, 113, 95, -47, -85, -55, 48, 3, 89, 27, 35, -82, -90, 87, -62, 17, 117, 67, -88, -54, 21, 5, 95, -46, -122, -76, -55, -98, -71, 49, -88, 73, -66, 68, -82, -17, 101, -94, 17, 82, 54, -62, 57, -118, 70, -49, 85, 26, 112, -125, 21, 69, -35, -1, -27, 101, -63};
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
    msg.setTimeStamp(0.309211155337);
    msg.setSource(54690U);
    msg.setSourceEntity(40U);
    msg.setDestination(32109U);
    msg.setDestinationEntity(173U);
    msg.width = 2644U;
    msg.height = 51834U;
    msg.channels = 17U;
    msg.depth = 7U;
    const char tmp_msg_0[] = {94, 53, -82, 87, 85, -86, -113, -39, -69, 97, -36, 75, 23, -111, 113, 90, 59, 80, -81, 83, 105, 95, -59, 57, -77, -24, -54, -70, -118, 33, 11, 42, -113, 16, -53, 40, -40, -33, -65, -71, -95, -126, -120, 77, 49, 48, -114, -110, 108, 75, -112, 73, 28, 89, -2, 121, -94, -84, -88, 60, 86, 37, -124, 8, 126, -59, -124, -92, 3, -24, -41, -2, -49, -102, -73, -46, -74, 6, 52, 13, 113, 21, -42, -99, -105, 83, -34, 76, -104, -30, -35, -68, -59, -93, 21, 85, 46, -1, 37};
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
    msg.setTimeStamp(0.174413774041);
    msg.setSource(35382U);
    msg.setSourceEntity(0U);
    msg.setDestination(55052U);
    msg.setDestinationEntity(35U);
    msg.width = 38509U;
    msg.height = 41116U;
    msg.channels = 215U;
    msg.depth = 217U;
    const char tmp_msg_0[] = {-30, -112, -50, -95, 86, 13, 110, -94, -66, -66, -88, -107, -104, 93, 37, -78, -1, 11, 5, -106, 61, 91, -79, -107, 53, -8, 115, -23, -95, -98, 124, 116, 103, -98, 4, -54, -97, -126, 65, -47, -86, 104, 80, 77, 88, 12, -33, 116, -30, 13, 0, 45, -72, 66, -18, -32, 12, 103, 14, -9, -34, 10, -1, 19, 59, 36, 113, -1, 28, -26, -127, 61, 110, 26, 101, -14, 88, -115, -84, 56, 1, 116, -69, -67, 32, -17, -16, -30, -7, 75, -2, -127, -32, -99, 60, -90, -114, -2, 102, -20, -18, -67, -87, 78, 123, -32, -120, 79, -60, -121, 17, -42, -28, 31, 29, 67, -123, -121, 83, -15, 55, -102, -128, 54, -14, 8, -122, 101, 96, -15, 0, -79, 68, -119, 35, -28, 51, -94, -100, -88, 46, -46, 15, 25, 49, -45, 107, -124, -51, -124, -44, -69, -58, 64, -11, 75, -62, -116, 70, -128, -24, -7, -64, -68, -12, -76, -105, 90, 82, 118, -118, -26, 124, -120, 49, -62, -36, 88, 59, 117, -6, -95, -68, -20, 51, 76, 106, 90, 65, -14, 8, 70, 23, -115, -51, -57, -105, -121, 28, 14, 78, -86, 91, 18, -58, -97, 13, -57, 13, -51, 18, -128, 110, 19, -73, -118, -44, -61, -20, -124, -76, 51, -110, -79, -71};
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
    msg.setTimeStamp(0.385450719715);
    msg.setSource(56672U);
    msg.setSourceEntity(213U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(112U);
    msg.frameid = 146U;
    const char tmp_msg_0[] = {-86, -69, 48, 65, -68, 81, -54, -29, -60, 106, -57, -18, 117, -36, -61, 98, 4, -71, 96, -114, 118, 4, 82, -115, -108, -104, 10, -14, -63, 62, 43, 46, 26, 65, 0, -61, 63, 116, 119, -97, 118, -99, -2, -7, 126, -93, -40, -22, 90, -94, -47, -33, -3, 99, 27, 31, -42, 8, 0, -60, -32, 77, 56, -72, 72, -22, -16, -29, -106, -62, 13, 10, -24, 32, 124, -39, -127, 119, -18, 28, -28, 96, 31, 116, 108, 119, -40, -33, -101, -3, -124, 63, 70, 69, -44, 33, 116, 82, 126, -15, -62, 60, -98, 93, 85, 95, 124, -9, 74, -36, 45, -79, 27, 85, 32, 126, -23, -3, -12, 115, -64, 33, 32, -93, 118, -104, -31, -99, -56, -70, 108, 43, -38, 29, 120, 29, -117, -121, -68, -22, -85, -99, 122, -15, -98, 57, -99, 68, 89, 74, -47, -97, -119, 61, 24, -68, 50, 57, 104, 30, 95, 109, 116, 15, 28, 86, -26, 79, -61, 75, -116, 19, 41, -95, -94, -40, 92, -37, -102, 17, -24, 9, -72, -120, -47, 70, 35, 51, -20, -45, 89, 9, 86, 24, 40, -70, -73, 63, -108, -94, -70, 107, -128, -84, 62, -52, -31, -34, 5, 116, 91, -41, 90, -107, -89, 126, 67, 11, -106};
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
    msg.setTimeStamp(0.408013067777);
    msg.setSource(36255U);
    msg.setSourceEntity(57U);
    msg.setDestination(57716U);
    msg.setDestinationEntity(180U);
    msg.frameid = 94U;
    const char tmp_msg_0[] = {-11, 125, 61, 68, -33, -37, 85, 37, -37, -125, -45, -37, 54, -85, 53, 19, -69, -19, -112, 87, -83, -94, -10, 111, -115, 19, -30, 64, 77, 114, -96, 66, 82, -124, 107, 33, 38, 24, -77, 125, 59, -77, 98, 55, -108, -103, -53, 0, -76, 125, -116, 86, -81, -64, -37, 76, 90, -3, -66, 122, 56, -124, 118, -25, -100, 12, 121, -63, -128, 94, -103, -74, -62, 82, 7, -28, -12, -109, -15, -82, -1, -27, -43, -27, -53, -15, -101, -51, 112, -40, -31, 10, 1, -122, -79, -109, 90, 49, 86, -85, -108, 12, 27, -29, 116, 38, 104, -18, -33, 116, 96, 57, -126, 88, 85, -63, 19, -80, 68, -50, -127, 95, 60, 33, 41, 55, -41, 92, -13, -118, -66, 82, -29, -7, -91, -112, 97, -54, -58, 13, -39, 108, -10, -22, -102, -21, 40, 106, 112, 108, 29, 38, 85, 85, 31, -11, 54, -51, 107, 96, -96, -16, 47, -29, -65, 59, 16, 9, 75, 77, -52, -6, 31, 70, -47, -99, 79, 90, 71, -9, 105, -112, -74, -117, -83, 7, -18, 126, -9, -44, -106, 62, -57, -64, 85, 29, -43, 81, 82, -20, -72, 42, -14, -5, 70, 92, -48, -84, -105, -69, 79};
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
    msg.setTimeStamp(0.659605019906);
    msg.setSource(25023U);
    msg.setSourceEntity(58U);
    msg.setDestination(17242U);
    msg.setDestinationEntity(3U);
    msg.frameid = 240U;
    const char tmp_msg_0[] = {27, -28, 72, 126, 115, 62, 114, -67, 58, 22, -35, -68, -25, 106, -69, 73, 105, 93, -3, -104, 100, -102, 41, 109, -34, -121, -43, 36, -95, 0, 80, -1, 68, 38, -56, 81, 78, -118, -47, 15, 41, 78, -93, 2, -82, 72, -8, -78, -23, -70, 44, -22, 11, 57, 74, 109, -101, 112, -78, 64, 68, -26, -62, 22, -13, -85, -101};
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
    msg.setTimeStamp(0.578227338784);
    msg.setSource(1460U);
    msg.setSourceEntity(97U);
    msg.setDestination(14266U);
    msg.setDestinationEntity(145U);
    msg.fps = 254U;
    msg.quality = 232U;
    msg.reps = 72U;
    msg.tsize = 194U;

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
    msg.setTimeStamp(0.892560384336);
    msg.setSource(26375U);
    msg.setSourceEntity(196U);
    msg.setDestination(36664U);
    msg.setDestinationEntity(62U);
    msg.fps = 68U;
    msg.quality = 26U;
    msg.reps = 122U;
    msg.tsize = 125U;

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
    msg.setTimeStamp(0.120578150483);
    msg.setSource(18226U);
    msg.setSourceEntity(137U);
    msg.setDestination(10336U);
    msg.setDestinationEntity(59U);
    msg.fps = 87U;
    msg.quality = 123U;
    msg.reps = 131U;
    msg.tsize = 251U;

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
    msg.setTimeStamp(0.021203932295);
    msg.setSource(45425U);
    msg.setSourceEntity(114U);
    msg.setDestination(56537U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.157029582756;
    msg.lon = 0.226813222004;
    msg.depth = 58U;
    msg.speed = 0.236665579953;
    msg.psi = 0.0911540149726;

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
    msg.setTimeStamp(0.790527520839);
    msg.setSource(58820U);
    msg.setSourceEntity(249U);
    msg.setDestination(22U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.263481107311;
    msg.lon = 0.335047340792;
    msg.depth = 232U;
    msg.speed = 0.156763527986;
    msg.psi = 0.16358142043;

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
    msg.setTimeStamp(0.537406683125);
    msg.setSource(26961U);
    msg.setSourceEntity(195U);
    msg.setDestination(59405U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.897961681913;
    msg.lon = 0.825179527181;
    msg.depth = 100U;
    msg.speed = 0.0669692234377;
    msg.psi = 0.812187263403;

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
    msg.setTimeStamp(0.540068485302);
    msg.setSource(55439U);
    msg.setSourceEntity(41U);
    msg.setDestination(17737U);
    msg.setDestinationEntity(105U);
    msg.label.assign("IZODZXGJKHHTTKVLYFHCNNFJJPNI");
    msg.lat = 0.552536477733;
    msg.lon = 0.655964675745;
    msg.z = 0.854496272768;
    msg.z_units = 239U;
    msg.cog = 0.294151541051;
    msg.sog = 0.82895775441;

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
    msg.setTimeStamp(0.0778342826041);
    msg.setSource(45019U);
    msg.setSourceEntity(240U);
    msg.setDestination(33949U);
    msg.setDestinationEntity(232U);
    msg.label.assign("BYQJVENKREPXRQNSZSEHGUDGMMQZQPNKYNSAHCJVITUUIJUOSKIJYITNDKSKBVFFGZHCQXQC");
    msg.lat = 0.215717713524;
    msg.lon = 0.436384231528;
    msg.z = 0.256855521368;
    msg.z_units = 232U;
    msg.cog = 0.996132986242;
    msg.sog = 0.00162513447537;

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
    msg.setTimeStamp(0.394214060342);
    msg.setSource(24349U);
    msg.setSourceEntity(67U);
    msg.setDestination(2647U);
    msg.setDestinationEntity(8U);
    msg.label.assign("FMOALVOEPBKW");
    msg.lat = 0.0524255316136;
    msg.lon = 0.580390544141;
    msg.z = 0.246247490064;
    msg.z_units = 209U;
    msg.cog = 0.27769330315;
    msg.sog = 0.527276489322;

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
    msg.setTimeStamp(0.776815019262);
    msg.setSource(64297U);
    msg.setSourceEntity(116U);
    msg.setDestination(60789U);
    msg.setDestinationEntity(94U);
    msg.name.assign("FSUOBLQPKCIWZIYSVOGMVMTNHRBGJJOVHNRVLWDGARWPMKDTEZVHOLAKUDCTQDDYUIUYFBRYASHJHKSEETMXQNYNEUTHUUXALWSFLACXBIEXVXUKMIJQEJAAIXBSWDZOZGBSNVPOT");
    msg.value.assign("KRLBJLTKYTLYANKGMHRSSSYCHZMAICJJPISSYCPPFWPAPPCKVCLNNINUVDLUPIDOUALTZBQCFNKXOUQ");

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
    msg.setTimeStamp(0.130014947707);
    msg.setSource(21677U);
    msg.setSourceEntity(58U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(173U);
    msg.name.assign("DYUWFIFXHJNHGTLGUXYDQIK");
    msg.value.assign("FTUSJUYNXIAAYDBXCFZUGPSWFPHGXBGZUUDMSIASHOUMFUSIZOESPJXGBDWJAEMJBOCLTQXDLRRHYQWQWZOLVTODOXYTIAVLTMTGJBRPVPVMICLRKATXIWWLCYDLBGMXJNVEXWWTWGSKHQZYEGNVCGBBUCSRZMPRMYKHMFRFCKAYRBUAOZNTKNHEZDFAQVDEQCJCJPPQKQEN");

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
    msg.setTimeStamp(0.546142578949);
    msg.setSource(1461U);
    msg.setSourceEntity(9U);
    msg.setDestination(40580U);
    msg.setDestinationEntity(120U);
    msg.name.assign("KNVPLYCKRAXBCGPDLDKSHJYBOHILAKYAWNEMKRTXZZFGGSTZLBXIMXUJDPXSSBTJOQQGSUNVBVMSXLZJG");
    msg.value.assign("TYTWTGNEXKMIUWGQWKVMFHAHPQBCPCVYOVPXAVIKZEAGOCAYDNCRTHZNWNDZFULXLUKFSBKJVWAECYIDRMSDEUCGRZSERPAOZYXQVNAWCYPFECTJYJXFJB");

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
    msg.setTimeStamp(0.487314863458);
    msg.setSource(57616U);
    msg.setSourceEntity(19U);
    msg.setDestination(55726U);
    msg.setDestinationEntity(152U);
    msg.name.assign("TTZDPMVDHLOXGXHOCULRUTPBLYCDACNAYOOIGBKIEXGFNBKHWFQDVDWBKJJMBGMNVZOERFCSLXPAOQAVNPDBUQDFSBHNHVPSELNJYAIZXWGQSFKWQEIZNFYAZNGLINVUYWRUHWYACSXABFREQPKRTQVEK");

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
    msg.setTimeStamp(0.177609034643);
    msg.setSource(57843U);
    msg.setSourceEntity(113U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(93U);
    msg.name.assign("IWQCPINIFPOOGXTTSTHMIPRFBFZUOQWSZUMJPARDEDYYNPBJQINAFFZMRBXAVXSALLDGVSDYMBXWQZBYGUWAWIWXOHEEQLDRLUNAOTCDLCTRUZPYTGTPKFMSNVBENKDTZEKGHMZHLNBGRVJBJORZVWPTLMQUYOKYMLYNBHTEKXQYVQSGHEUCKFFSKRAWHPCG");

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
    msg.setTimeStamp(0.184060556053);
    msg.setSource(53355U);
    msg.setSourceEntity(154U);
    msg.setDestination(56578U);
    msg.setDestinationEntity(74U);
    msg.name.assign("TWISESEHQUGNAHFYKMQDNLQCZXZSLHCXZAMWIIGYQYBVCZWSYUGJLBNOXPORAECJ");

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
    msg.setTimeStamp(0.937788847451);
    msg.setSource(48086U);
    msg.setSourceEntity(229U);
    msg.setDestination(20687U);
    msg.setDestinationEntity(228U);
    msg.name.assign("FSTAOPLHCCOMMDBVZWKQYQKUPSTEJZWKTXIHDOQVELIXZWGESJELRYNBHVPORLMTVQJKAOGRDPMZUAGEUBKICACNLNMZOTWZZLBVCSNMFNNBFOFSPQQVWXURKGPPACEBXSSJLHJIKXKYAUOETZYECRGDWYXHRGXFATDPJGJDKVLDEUTQBWBRTPFRRDYGXIHAGDDFAJFGMKH");
    msg.visibility.assign("FSVQEAISNYGNDDAKCHYICPFHPRDQFBVXPZEOPTUOJKZSXNQPSFBJYSHZDOLCDIYOYEJVXMLWRAQEKEWOMLKHVYPSRBJXDUMWYVJGMCJMWGPSWCJKBBNLAZLHRMLNTIXFTSTDPMUQBHPRTKBIWXNUTXVYLIDZFIJOFOYXULWCQAUQQGGKDWCLCBCZOMNSGAAEYKBMRGIAZTKXVEULIFQHKE");
    msg.scope.assign("AFFVSAUXKXYNBTWUUXHWIQYLRUZYLLSGBYAXMPXZTDKLUFCMMQDYDHHRCRRSDHCNPOELGEWXGUBPUWJCFWNPWKBBSVFXPHYSNVPPRBDOTKLGMZZSZIZEVYGEWDGVVXSKAEMTQTMNQ");

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
    msg.setTimeStamp(0.50625468361);
    msg.setSource(40673U);
    msg.setSourceEntity(181U);
    msg.setDestination(45672U);
    msg.setDestinationEntity(221U);
    msg.name.assign("AVAZWOYFZHUTAZYHBNFTTMHPROVKSREFYEDJJMBMSEEHAEROFDSWRTDODEGYMWGUGWUJJCVVNHJZLCTSEUANDISLJBYJVCPOLXKGDFZPCZZCRKIKBZJXBGVMMHJMANNTLNTKBYPOGZMTUMZLDNXGQQDGSXEXWWWCQPOVBOHCQKASDWFWFYBQKUYQHIIGUXQAPLGCIFIRSRJWINMYXPEIIPUPXUSQRHDXVSTUAFNRPALCYT");
    msg.visibility.assign("PHWZJYTNDRLHCVLXYFNRPEGGSVKRQVKXWBYGMKPAREBXLSMGDOXMWICDIGCNOZZOFPMEROAUYPJNAQUJLAJVBMTQXDXAPLVCGIVKZPBIYDOAPWESOXDUBZFFBQSUHIWJHQJYZFXRKIAJQHHYSOWPAYEXLMUKUQVNANGTKDEZVKRTRCCUBOTUSGUCAJKZFTZHOTKGICOFGWDIVTYNJDMLENDBVXPLHFSLLSIEWZRBBNRWESYNQUIECQHH");
    msg.scope.assign("EXQXYUALJOOIIWDYNAEOFXIOVJWTSGWHNKMNQZIFNOEPKWVWQXREOLLQKVGDIAGXZJPVRATOAWWCCMWNZBKQUMPSNDRXVKGGBRBFRFMZU");

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
    msg.setTimeStamp(0.504357128067);
    msg.setSource(33791U);
    msg.setSourceEntity(74U);
    msg.setDestination(35008U);
    msg.setDestinationEntity(64U);
    msg.name.assign("QZGGEIDRMVA");
    msg.visibility.assign("SLKIYAWSIOSGHABXYYJQXDSVJCFGDFCWUDR");
    msg.scope.assign("BVSLKROLJZMLQLJBDJTWMDISYDIOUAVNKANCEHGWNTRCZGRROWUECROFAHXVLEUGSGQATPSZYAKPBBDJZNVNTPQCMSSRPKYKDUYZFMOTH");

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
    msg.setTimeStamp(0.40764585328);
    msg.setSource(64665U);
    msg.setSourceEntity(95U);
    msg.setDestination(640U);
    msg.setDestinationEntity(79U);
    msg.name.assign("AUKRUEOKISCGFTTXSZCOHIQGEVVWKCMFHSPVTTDIXCSMZMHSBILZEMZWTFMCTGAYJZNECLYOXYFFFOBCNIXWGPJQUWQCBQINDGCJRNRXOYJOJRNUBLRTVEHSLUDFPYLGRUOMWEUVBGHBTHLGTALFRZP");

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
    msg.setTimeStamp(0.559134303492);
    msg.setSource(36936U);
    msg.setSourceEntity(73U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QBNJACQIYBRMCWQCBDFXABVPRHEFUCZUWBMUXDOEPTKGBTYVGZOFURERFMOLOA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QTKEGXEGQIQOZBUVYZQERJVUOYUEPFIYLBDNGYXWNEBIFXHJHRXTNVYORMLKHTTEQFJHGDDSHURKGDWWHNCJKSQWDMRUVULZSUZJOMHPIDWCMXVVAKICMBWJAQMLBORNSSLZGLUYRFOBYCSBVUJMNPUPJATCMJZZLIECCWFAAAILWRSXSAIOSWPKXND");
    tmp_msg_0.value.assign("ZDAOHXPFVDXGEXOBRAMBTGOPDGWPTOEUXEYLQCHKWQPHBBZAZWIBZSNICFEJVUJUUANFHNFCESQDYHWAZTNLSVDOOISFCLJHBVCLMYOCIJKZWRRQNWKWCXGLVUKGWTDDTXEYNVTETJSFUEMYQAZFRLORQMVLGPCPETNRRJSOPPMUAAYGFKBIHJODTMKIAGJNIQTXMWPNUGRHZXSUAQYMIQDUGEHXRSBQYZXYFSHBJPLVNFBLICKLWDJMV");
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
    msg.setTimeStamp(0.863121782764);
    msg.setSource(24812U);
    msg.setSourceEntity(27U);
    msg.setDestination(33209U);
    msg.setDestinationEntity(20U);
    msg.name.assign("HCXADKSQABWJJLQETASSMHUSAIEPRDUGBWCMXQYQPYIKCNHVKQFKZDTFJLFAHLMOQXRMFMJSCYYOWJTQBNWFVSNLNHTEEZCUVHUSGBJCMIRZLHDZOXAWUZRAFPICFANHJPGWKBWBGVUYVRDGRIYGDGPTIVJEDDUDYFREMYXTOY");

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
    msg.setTimeStamp(0.143675311336);
    msg.setSource(390U);
    msg.setSourceEntity(58U);
    msg.setDestination(42204U);
    msg.setDestinationEntity(41U);
    msg.name.assign("KUJPGOTWYGMRNNKERZSMGXRQPJMPUENVBXOBOHFAEYLDTZYANEJPCEKWQEKUQSKQNWTZPLZBZHWCZXOLQCFHKYRRPJUWBBDJTJOYKUYDSFJVXHTFMGXNEACVJUGWZBBQJDAMPMFXYEOYLMLGIINGLFILVDLRBIVSAHZJHWTCHGKGHXQASTWUPYBQUASTEVPBMREPKWNGCNKZWUAVDFXOIIDROFMZSHQLXTSVRAV");

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
    msg.setTimeStamp(0.147121347708);
    msg.setSource(49084U);
    msg.setSourceEntity(197U);
    msg.setDestination(49455U);
    msg.setDestinationEntity(140U);
    msg.name.assign("KMNPZHFKJQTLKLNGHUCBEPIOPTXSIWMOWYGLGRHZBODNVUX");

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
    msg.setTimeStamp(0.490149895694);
    msg.setSource(3676U);
    msg.setSourceEntity(236U);
    msg.setDestination(30899U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ZCNWGDZXRBDXPBYCJWYLVXRMBZIQPSTWLMFQJTTAQHFPEVJDVAVKOKHVZNUUOEXHCHGJEHODFTJQVIKRVEELINNICAGCSPMUTCNHHAIMMETYFSUPMZHWRSYFQUCEBXGXLPLRGWIBAIMYWKGYWHROWQSYDZWFGFPYZOSLLOLIUTOXZNNCVDYWZRAXQLRFPJBKBFLDJCSVCTKFEYSHQIKPMNGXBESTJNBUE");

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
    msg.setTimeStamp(0.377019259539);
    msg.setSource(19050U);
    msg.setSourceEntity(241U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(63U);
    msg.timeout = 894887147U;

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
    msg.setTimeStamp(0.885308746854);
    msg.setSource(31257U);
    msg.setSourceEntity(141U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(223U);
    msg.timeout = 1510094487U;

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
    msg.setTimeStamp(0.112033370787);
    msg.setSource(42853U);
    msg.setSourceEntity(156U);
    msg.setDestination(43596U);
    msg.setDestinationEntity(52U);
    msg.timeout = 2069969590U;

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
    msg.setTimeStamp(0.818964605636);
    msg.setSource(53172U);
    msg.setSourceEntity(246U);
    msg.setDestination(33674U);
    msg.setDestinationEntity(111U);
    msg.sessid = 3774909042U;

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
    msg.setTimeStamp(0.67456294965);
    msg.setSource(48615U);
    msg.setSourceEntity(199U);
    msg.setDestination(16798U);
    msg.setDestinationEntity(92U);
    msg.sessid = 304596492U;

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
    msg.setTimeStamp(0.465159785419);
    msg.setSource(21910U);
    msg.setSourceEntity(34U);
    msg.setDestination(46316U);
    msg.setDestinationEntity(49U);
    msg.sessid = 2627578531U;

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
    msg.setTimeStamp(0.345400364713);
    msg.setSource(59052U);
    msg.setSourceEntity(61U);
    msg.setDestination(25141U);
    msg.setDestinationEntity(74U);
    msg.sessid = 3328259910U;
    msg.messages.assign("KLNMSASEKKPXPUVRQKGYACMTDYTQBESEMPIVBZGOYLJBLHCRSXAWJWX");

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
    msg.setTimeStamp(0.843024322658);
    msg.setSource(42684U);
    msg.setSourceEntity(196U);
    msg.setDestination(6965U);
    msg.setDestinationEntity(46U);
    msg.sessid = 3972133533U;
    msg.messages.assign("VYPWCNKTRECYYAFXJRYEMCGZUJDVAGQPRYXAAMSQBIVKEMKFUBFYQSCPFUQMTFDFISKKXBXVPMZUTNAHZCHGKAOIHWVBXTWCTSTHPSLBDKJCAJZKPEMNTODNVNVOWEFUYXRJHZRLOZZXNJVLTGEGIGUIENYHBUHDQRBRDQGHCTLIVBOWPJSHRTJRSMLZWLYWGOCS");

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
    msg.setTimeStamp(0.194339330123);
    msg.setSource(53686U);
    msg.setSourceEntity(194U);
    msg.setDestination(36178U);
    msg.setDestinationEntity(203U);
    msg.sessid = 2309220881U;
    msg.messages.assign("NRDZVXYHFGUAWPPTDAWIFLLCTSCZVFYSIHEOFWZLQJCUJOVIHHNUXDEWXQVYDGKKEJJYMAQYLKRAKFJXAMHMPEZFFGIEBBMLGXDZDMCQOVWEIIKAKOOMRNEUSJNOTRZQTOPCUNSWISAQBVSQERMOPPAYTQFXXYTKDNPBUCGNBYAGAERDNMYLPTIHLSUJUZQOIREZBPVHFQTDJCTNGWGWBCHVZYJTG");

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
    msg.setTimeStamp(0.767482776371);
    msg.setSource(4489U);
    msg.setSourceEntity(29U);
    msg.setDestination(5005U);
    msg.setDestinationEntity(57U);
    msg.sessid = 3479358307U;

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
    msg.setTimeStamp(0.318194083827);
    msg.setSource(55509U);
    msg.setSourceEntity(219U);
    msg.setDestination(37618U);
    msg.setDestinationEntity(147U);
    msg.sessid = 4289606490U;

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
    msg.setTimeStamp(0.709451880706);
    msg.setSource(3284U);
    msg.setSourceEntity(51U);
    msg.setDestination(15811U);
    msg.setDestinationEntity(87U);
    msg.sessid = 2698326860U;

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
    msg.setTimeStamp(0.91851108484);
    msg.setSource(10420U);
    msg.setSourceEntity(173U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(170U);
    msg.sessid = 3221172834U;
    msg.status = 88U;

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
    msg.setTimeStamp(0.868017262042);
    msg.setSource(7432U);
    msg.setSourceEntity(66U);
    msg.setDestination(39683U);
    msg.setDestinationEntity(49U);
    msg.sessid = 4248729403U;
    msg.status = 10U;

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
    msg.setTimeStamp(0.277362954054);
    msg.setSource(12177U);
    msg.setSourceEntity(203U);
    msg.setDestination(23538U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2544425077U;
    msg.status = 122U;

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
    msg.setTimeStamp(0.524349335914);
    msg.setSource(43541U);
    msg.setSourceEntity(31U);
    msg.setDestination(30774U);
    msg.setDestinationEntity(176U);
    msg.name.assign("OTTEMSFHXBFYWFUYCAAPOVLAJDXRJRKUUHWHTVEZEVNPLPNKPRDMFOREJZPOQRSBYAZSWMJSSOGKVQ");

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
    msg.setTimeStamp(0.212783014216);
    msg.setSource(36029U);
    msg.setSourceEntity(131U);
    msg.setDestination(13826U);
    msg.setDestinationEntity(155U);
    msg.name.assign("DIDMBLELHKOHBJOHUTQWKOAXGEYPMHCJCAFEXBENVPFGVOYTHTUVMATNZMXBSVQSTGQBRHVCOPZRFPNWCRDDMUILXRRSXIQHMOLQRUKKZNXZNWVJNJYLGR");

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
    msg.setTimeStamp(0.797636754089);
    msg.setSource(11570U);
    msg.setSourceEntity(17U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(50U);
    msg.name.assign("NHXSKKYMOUEIMIJCRVDDQBGJJLACBTRANUPTDKHOMLOHONVSSQFXMRZSNWTUNNETNNSZWPHCXLQBWFZWGYLDPEYVFASTBHNQSRSYEICULFYMYHEIEFMXJKALCFULMLGDZXGPGZGJKXRXJWLGEVEQMHFRQWTTEXPJDPLBKDHQYFOPWCKFGAWUPAZEBDVCRFIRU");

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
    msg.setTimeStamp(0.282069853495);
    msg.setSource(41881U);
    msg.setSourceEntity(202U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(173U);
    msg.name.assign("ZQBLVSWRUKNUVJOZWHIOGBGVQMCSPSEBLFAWXKAETFBGHAWVEEHRPIUMFLJZZJQNVSLCLLZWUYEYDLPTIJDKPCQYPDJIINWXSFSQNCYOHGOGBNLQITPEFOQBXAKJMVMYUIXKJCXEDPTEJQJRFHGZGDANRIYMCFMRUSQNVREUGP");

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
    msg.setTimeStamp(0.767574454863);
    msg.setSource(32936U);
    msg.setSourceEntity(67U);
    msg.setDestination(7789U);
    msg.setDestinationEntity(23U);
    msg.name.assign("XCJNSZAPIGTDYVMZCNNMSJCDCMPHJSZJIOSNUGHBBUXCSJWKLHUPVQFWETIZQNTEFDMMNGDUMTMGBYLONVPWRJQWMRKIHXBEQIJEFHDOBLPQBOSUUJEODYVIKAKVUAEXFTWACGLLTCGZXBOIRAXNHPYZGVESWPFGUWGJDZCHYAIUTIKYRDCLRLFTBROILSKKRZEN");

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
    msg.setTimeStamp(0.416067670334);
    msg.setSource(56154U);
    msg.setSourceEntity(15U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(141U);
    msg.name.assign("FEPZLZRENTLRUQYRLDYPJVEDVJFLNSOEZN");

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
    msg.setTimeStamp(0.399213475279);
    msg.setSource(61681U);
    msg.setSourceEntity(176U);
    msg.setDestination(49560U);
    msg.setDestinationEntity(92U);
    msg.type = 104U;
    msg.error.assign("JRSLWBOPGIMFVMEKXOBHCISBEYZCAPUAYDQAJONHDDLIXZXYCQKHRTGHJTIODECCAELYDPGRUWSWIPBUQRKJQHBZFOXLVRUJVANSEBZWWECVNSSNVJBZJLWLATCBOZOZVOFL");

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
    msg.setTimeStamp(0.639095892695);
    msg.setSource(37960U);
    msg.setSourceEntity(172U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(152U);
    msg.type = 61U;
    msg.error.assign("PJRHKZLXNSYEJARFYVUENUFOTFCYGXLMKWRBTCKRSBWIEJXBMRITJOHBDITFKVIABAEWKMPSYQQIQFIPBAGAGKPJPPLFAMCVZZUHBSJAOSLLZGPLGYOIRYWCNNBOLDGKHMDULHNDSQEUHWOIHTR");

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
    msg.setTimeStamp(0.611908377421);
    msg.setSource(44054U);
    msg.setSourceEntity(198U);
    msg.setDestination(62428U);
    msg.setDestinationEntity(186U);
    msg.type = 17U;
    msg.error.assign("XTQAVIKTJPDMRHNAYOPMFFXTSQSEFTUOLDOCCBLGLOUDYJMAEODKQGMACPKRIUVYIHRTXFTRSEEVNBLIKYLHLVVWNDYSEDJFOZEIUAQGRMEZTWEOPJYADZFCVCPWGKSJBIOHPCZSMWRQQPVNIWPYKVVAIYJGHFXWXQWHKCQVDZGNGCFMZHACRPHUESJOAIOTAMPRGSUJLBSB");

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
    msg.setTimeStamp(0.878230277729);
    msg.setSource(36825U);
    msg.setSourceEntity(224U);
    msg.setDestination(38877U);
    msg.setDestinationEntity(76U);
    msg.seq = 24223U;
    msg.sys_dst.assign("MNCETZRDPGWQQDFTBJGXIOBYNJWPCVUZJVKELPSUUBDKFXLTYCHMBVKZZEQFIBCYLPPHRCGBXUAOVHFBMNXCCIVNIHNFMBJLKXG");
    msg.flags = 188U;
    const char tmp_msg_0[] = {-30, -69, 2, -30, 51, -60, 11, 24, 121, -11, -40, -71, -31, 68, -66, -109, -19, 47, -112, -35, -8, 65, -97, -76, 123, -5, -24, 126, -8, -68, -45, 36, 39, -61, -85, -121, 65, 95, 12, 41, -69, 100, 16, 70, 36, 46, 48, 24, 63, -125, -89, -82, 39, -73, -85, -3, -99, 5, -105, 83, 92, 97, -124, -50, -67, -38, -47, 62, 71, -96, 78, -92, -84, 86, 89, -32, -39, 80, 50, -32, 18, -89, 32, -9, 18, -92, 87, -64, 14, 38, -85, -67, 64, 16, -91, 50, 1, 85, 98, -74, -27, 9, 87, 69, 34, -50, -29, -68, -24, -3, 31, -24, 110, -123, -67, -9, -114, 124, 99, 35, -60, -14, -127, 43, -108, -51, -110, 8, 97, 97, -41, 13, -55, -112, 11, 52, 18, -50, 76, 17, -112, -109, 89, -65, -115, -38, 89, 123, 120, -3, 116, 70, 33, 85, 94, 117, 80, 52, -99, -110, 14, -25, 87, -24, 68, 119, 43, 47, -50, 50, -71, 105, 28, 108, -47, 70, -81, -18, -110, -66, 81, 1, 61, 25, 49, 16, -102, 35, -80, 52, -52, -123, -108, -8, 25, -100, 90, -14, 126, -71, -56, -120, 63, 67, -94, -119, -88, 70, -55, 18, -128, -49, -69, -73, 114, -43, -123, 83, -61, -73, 14, -118, 8, 82, 52, 116};
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
    msg.setTimeStamp(0.226359842527);
    msg.setSource(9889U);
    msg.setSourceEntity(22U);
    msg.setDestination(42984U);
    msg.setDestinationEntity(60U);
    msg.seq = 34290U;
    msg.sys_dst.assign("JNRLDEHUBKBBEQYPOJCSBNVKNJZVKOZUSW");
    msg.flags = 178U;
    const char tmp_msg_0[] = {-42, 66, -103, 58, 1, -127, -84, -12, -39, -36, 3, -22, -28, 38, 93, 51, 118, -4, -84, -52, 42, 42, -80, -83, 5, 43, 43, 22, -9, 53, 40, 36, -38, 33, -106, 28, -26, 38, 63, -126, 120, -110, -45, 26, 49, 103, 87, -14, -49, -57, 42, -105, -42, -48, 24, 99, 108, 34, 90, 65, 125, -126, 109, -102, -34, 76, -36, -2, 44, -90, -86, 17, 83, 103, 43, -92, -124, 113, 47, -111, 44, -64, -56, 15, -97, -94, 89, -117, 87, -98, -27, 28, 80, 84, 87, 96, 24, 45, -96, -74, -118, 105, -108, 98, -120, 32, 9, 91, -23, 3, 38, 75, -45, 98, -60, -105, -9, -41, -2, -73, 126, -44, -108, 106, -10, 40, -126, -101, -81, -21, 32, 117, -121, 24, -81, -95, 48, 96, 93, -60, 25, 3, -62, 12, -1, -88, -63, -89, -18, 12, 34, 102, 109, 73, 61, -39, -34, 90, -28, -46, 64, 121, 88, 73, -111, 56, -54, 72, 59, -91, -14, -43, -106, 27, 107, -23, 76, -91, -38, 75, 62, 5, -37, -22, 17, -91, -91, -34, -40, -93, -106, 78, 17, 107, 123, -72, -64, -56, -121, -86, -121, 53, -68, -37, 98};
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
    msg.setTimeStamp(0.769184207179);
    msg.setSource(58857U);
    msg.setSourceEntity(128U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(197U);
    msg.seq = 30672U;
    msg.sys_dst.assign("XVOUSAFISWJZHSJSULMXGNAKVJVADNTWHYMLTCIURRBTCO");
    msg.flags = 105U;
    const char tmp_msg_0[] = {5, -105, 38, 126, 58, -94, 102, 38, -103, -81, 61, 86, -85, 89, -11, 38, -114, -93, 19, 14, -29, 52, 85, 82, -125, 27, 114, -79, -36, -3, 35, 19, 57, 105, -15, 80, 40, -34, -93, -33, 10, -28, -34, -93, -52, -71, -103, -64, -66, 17, -12, -8, 38, -27, -110, 44, 59, 11, 77, 113, 91, 6, 98, -72, 105, -73, 16, 103, 72, 104, -116, -61, 99, -3, 3, -68, 3, -1, -113, 21, 15, -54, -2, 44, -113, 24, -95, 41, -56, 32, -8, -122, -105, -123, -52, -43, 20, -31, -43, 34, -64, -48, 73, -61, 25, 93, 118, -100, -75, 34, 61, -27};
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
    msg.setTimeStamp(0.0729289636101);
    msg.setSource(59224U);
    msg.setSourceEntity(154U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(16U);
    msg.sys_src.assign("GVUZDVYXOAESDHCAGOTKFISGNP");
    msg.sys_dst.assign("AHYWVLMKMHCDFPJYBQBQIBNWHZZHEJQAOFMJPQOGFXRNCLRCTNNHKDFUCYBSQVAIONTPRFMHKFQAEWCIIRZQTFQGFMUUXDWTVYTTDNRWTEAVCGUCBFUJAWVOOBOAVPHTBNRGZDWHDOEAXDXVUIUGCTEWRBKSRBLCMRZLBVEZGSSILJLAKYYWIEPMGUQMXXTRYPIVOISSLOXEMXUNAY");
    msg.flags = 37U;
    const char tmp_msg_0[] = {-37, -98, -110, -41, 68, 75, -18, 55, 64, -84, -114, -22, -11, 81, 97, 36, -123, 20, 12, 66, -105, -60, -10, 94, -121, -126, -94, 60, -103, -16, 72, -111, -74, -17, -1, -114, 84, -42, -7, -39, -63, 89, 40, -91, 83, -63, -7, -106, 32, -31, -8, -122, 86, 27, 80, 89, 9, 81, -104, 63, 75, -89, -60, -50, 82, 89, -61, 41};
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
    msg.setTimeStamp(0.590221708643);
    msg.setSource(17338U);
    msg.setSourceEntity(176U);
    msg.setDestination(5469U);
    msg.setDestinationEntity(6U);
    msg.sys_src.assign("AHZRLMQPDWVMNHCEKMSDKURRXKCAKTONPOLUJMDTSTIMMVOHKXPNBCESKRNAWBLVLZ");
    msg.sys_dst.assign("SRNOFZKNCMJANSDZBPKDTGIGBWXCZNVTTAUVWYWKKTZQSEGYYINVHOMYBDTJPNHHCYSMRRKGIXWIDFOETJMPHSQEDUDGO");
    msg.flags = 163U;
    const char tmp_msg_0[] = {-70, 26, -89, -44, -30, -120, -33, 41, 62, -78, 8};
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
    msg.setTimeStamp(0.391788193581);
    msg.setSource(57014U);
    msg.setSourceEntity(158U);
    msg.setDestination(6554U);
    msg.setDestinationEntity(222U);
    msg.sys_src.assign("DZQQCZDIVSPQSYKWPCGJVGKFEOFJZATCSSOGLDWVOUAHPNJOALMMULJJETITGBTWIZPTXJPYEDZMDMCXAYUHSNHAVHNCHIMXFOBTVJLMGRXTZUIUNKOFEBFGFKRXHXVBQNLMYFPXNISMUKJNYONPRVLXARSGPHKBUTBOCDOQPDIWLKEBAPWEKWKLKWZBIQNIYGBCZZADQXBOHFCYXGMEDVVVETQULSTDHNQW");
    msg.sys_dst.assign("CAQTNXUGPXEKRKUTBJSSVEZFJIDJOHRLGZFPSCDDKP");
    msg.flags = 4U;
    const char tmp_msg_0[] = {-87, 120, -117, -57, -111, 47, 84, 101, -76, -13, -125, -100, -73, -36, 89, 105, 83, -104, 97, -113, 102, -82, -114, 67, 25, 99, -97, -99, 14, -83, 97, -66, -44, -18, 106, -32, -91, 111, -121, 62, 111, 104, 101, 58, -2, -68, 88, 103, -50, 108, -46, -21, -51, 103, -9, 42, 55, -17, -76, 111, 47, 15, -48, 75, 67, 99, -95, 102, 110, 9, 95, -104, 8, -96, -127, 61, 124, 70, 80, 97, -119, -56, 79, 106};
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
    msg.setTimeStamp(0.760524959474);
    msg.setSource(35739U);
    msg.setSourceEntity(242U);
    msg.setDestination(37743U);
    msg.setDestinationEntity(38U);
    msg.seq = 61616U;
    msg.value = 62U;
    msg.error.assign("CFYJJVHXUOTKSBREZMWLCYSBJDKKSQQPRMCFJQRZAUFEPIYJPUCFZWPXHEJWHNXHJLZUQGLTYPNQLFHBVNIDGBMGVIASUSBEMOEWWICLKEVIRIJMVNGUENYSOFNTKEXRNFDIGKODVSREPXSQUORPHGVYYBPNORAFATZQ");

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
    msg.setTimeStamp(0.0754313667907);
    msg.setSource(29915U);
    msg.setSourceEntity(129U);
    msg.setDestination(4709U);
    msg.setDestinationEntity(177U);
    msg.seq = 50386U;
    msg.value = 88U;
    msg.error.assign("DTWMIMPWURZBOCDEWLKXTCYXYGAJTMXEKWZOSZDAFBSCWJHKJUYGZZJTTZVS");

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
    msg.setTimeStamp(0.7351192469);
    msg.setSource(55671U);
    msg.setSourceEntity(97U);
    msg.setDestination(12006U);
    msg.setDestinationEntity(15U);
    msg.seq = 1227U;
    msg.value = 232U;
    msg.error.assign("UFBADAWHPKWSBEDIDUJRKUBHOQIHJWALRQSGGRCHPVFCOQRLBPOMHEITGEAVODXVLAJPIHCASQZTVGQCWOQOVLQVGSYYRIKPXBSMLDLPYZUMXJOZNLXNPJTIUGTVGONWLITXKKGBYTQRDGKYCFYJZZASTYYFNAUMHPYRKVCFUSAZCXQJOBBAWNHEIMZOITDEEFJTEMV");

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
    msg.setTimeStamp(0.916258876388);
    msg.setSource(45738U);
    msg.setSourceEntity(47U);
    msg.setDestination(26037U);
    msg.setDestinationEntity(16U);
    msg.seq = 7711U;
    msg.sys.assign("SYLKSDGJPQKOLBTLVEXREJVXBWMAXAKPGAXCIACMWOJCDZQAVFTUFPUCZYYHSUW");
    msg.value = 0.570323191577;

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
    msg.setTimeStamp(0.0216714399977);
    msg.setSource(64497U);
    msg.setSourceEntity(27U);
    msg.setDestination(59462U);
    msg.setDestinationEntity(43U);
    msg.seq = 4573U;
    msg.sys.assign("SEHADBZLWHIFGOARPRUOJOHTYERDELKBGNXMFTOFVETUVUKKEEYMJAJYZGKQQJVBDNBBHDCLUYYJTIXEAZDNFGVQESYXKISMAMKGAWJPZMZSOYDXBFHFINYVSRTXUKCTNRZIPWUFFTJBLZQHMKGPFRPLHXINOLJSYDRCCSUQGNWVPGICWVVDQUWPQMPNWKMOLFRBJZJASRXTUCNZZGXIELWVOLBOCPW");
    msg.value = 0.99811013494;

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
    msg.setTimeStamp(0.57238943507);
    msg.setSource(47620U);
    msg.setSourceEntity(37U);
    msg.setDestination(38033U);
    msg.setDestinationEntity(143U);
    msg.seq = 49902U;
    msg.sys.assign("JNEOJNKFAUFVXVHTCOPBCWZHHGENMDBOWOTZZUGJJVGENZBXGLDWPNVREHZUWWWYYKQUVIHPIGJSBZZTMJPQYFGQXDYEDBLACSZDHORSJWLFDRIOPCSNLOBMMAFQRMPXALCWFXSKYKJUNFUGYAJUOLHENDYVXYXVXTICRVCBQRSIOTCDAENACMLDRUZFALTTHAGFVKYQMERJYFKSZML");
    msg.value = 0.366588466404;

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

  return test.getReturnValue();
}
