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
    msg.setTimeStamp(0.5942248846106667);
    msg.setSource(56086U);
    msg.setSourceEntity(188U);
    msg.setDestination(11830U);
    msg.setDestinationEntity(116U);
    msg.state = 22U;
    msg.flags = 149U;
    msg.description.assign("RAQVLZWYJUEJAMEBHDUJHVDLBTCASMMMOWDCMFNXHFKXBZEUSQOIWYPLCWEXRAZLLQNVLKKECRKCZVNJTNDHEOIWJHSRBLPPGEEUXSTWDSSOVTJMSIQUTIYMVZKZXWPTGGICFDOFTAGGLYQQEOKHNKXJIIFBBIPDRPJOHGHWZAGSUVVAYNCJFAGHFENSKRXQAKYUZDOHWKRTIFNCXOMQMPWOFDXLZCBYRNMDAP");

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
    msg.setTimeStamp(0.667308827591639);
    msg.setSource(19565U);
    msg.setSourceEntity(77U);
    msg.setDestination(44744U);
    msg.setDestinationEntity(12U);
    msg.state = 210U;
    msg.flags = 161U;
    msg.description.assign("GFBTEYPUNZSGOKVFYXWEBOJMCLAEKREMEWGHBAPULLDSCUOXTSOYYDUFGFMRZLBGCZPSQHNWFIWNLVVUCKISYGCDNUYHARVQWCIAZIVPYAIFOQJXMRAXPQJYVZS");

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
    msg.setTimeStamp(0.42996518005094886);
    msg.setSource(6648U);
    msg.setSourceEntity(24U);
    msg.setDestination(24042U);
    msg.setDestinationEntity(141U);
    msg.state = 197U;
    msg.flags = 163U;
    msg.description.assign("QCOXSEKNYGKCVBBCHPAXLHEUZIXIMGMBFWBHRJRTOBZSHJOHFDOXFVXBATPRSJLFMJGSUFUHZLCFDWCADMVSOJQMWEOMIJVHHKUYXEPAAPQMFZKIPDTSVWQNQQZIQQGQYJDWIPNTBSBVEDZBWQTYOUCMAYNWET");

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
    msg.setTimeStamp(0.3828981787067468);
    msg.setSource(32038U);
    msg.setSourceEntity(186U);
    msg.setDestination(62167U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.1457636318736334);
    msg.setSource(30913U);
    msg.setSourceEntity(108U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.28580005019397703);
    msg.setSource(64309U);
    msg.setSourceEntity(97U);
    msg.setDestination(28712U);
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
    msg.setTimeStamp(0.047172779649476526);
    msg.setSource(14016U);
    msg.setSourceEntity(34U);
    msg.setDestination(1066U);
    msg.setDestinationEntity(187U);
    msg.id = 131U;
    msg.label.assign("JRSTWOSCUHMFZWIBNGVSSEEVKMWJFZWGXNOEJEXHKECDWIVDSLEUAWXTBCUINDYATBZSDARMBOLUKDLQLVLAYEAKRXPGSFNMTMNZCEJOWOYRMZZBTVRMHDPQUTUTUJWGL");
    msg.component.assign("GHWWAAXWDPSRLOHIOXECIIFNUAOAYKVBBN");
    msg.act_time = 55379U;
    msg.deact_time = 15578U;

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
    msg.setTimeStamp(0.046051235788991285);
    msg.setSource(30706U);
    msg.setSourceEntity(158U);
    msg.setDestination(52872U);
    msg.setDestinationEntity(126U);
    msg.id = 176U;
    msg.label.assign("MRZUMOSPDZIYIPQNEYTAZALBCUPAGEXYCLWOFGVEJGUQFBNODFGAWEZTKDXNJXHIXJEFZWGBFSYKYEAISEUPHLGIXXKQWCKRTKUIHBBWLRRKULMYMVJFCMCFFOBLLHLPPFPMINTRNNEWJVVBTGODVDROBDZVEXLDQJZVMJOKSZWORCAPNYYMBWXEOHRTCDPKFKJHSISSJHAINAAXOZUGSUDTHRGWQNBWZQVCTQXTHTQKSPICMAMQVRQDSYVNH");
    msg.component.assign("MPPDSQHFCDYOBCDBVQXSTQEZERRFDPXXTLSEGLRWMLZAVWQEHCEN");
    msg.act_time = 50043U;
    msg.deact_time = 12296U;

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
    msg.setTimeStamp(0.945780969764029);
    msg.setSource(48872U);
    msg.setSourceEntity(244U);
    msg.setDestination(57268U);
    msg.setDestinationEntity(137U);
    msg.id = 42U;
    msg.label.assign("RFOHZZKUJOGVOPLGICASYADSAQYVPDYVHCKQAULVGGHMEFIKSYTWTLCKNTIURZMDAMYPTOTYONPNZVDUOCLJESMQIQEMEBJFGHNDUXSENLGNWPSTADLIFXBMTGDOIFZGHXSVKUMBWKYLNXWKEPZOMPWUQXBFPJYVXZJQULQPJWVBNAHHZTFCXBUDHREKYIWF");
    msg.component.assign("UQQSPBIHPYKKZCBJIVILJUDBCHWNGJGTFCKEYJOWCNMDVBBLVIOYSMEQXAGTVDHMXUVWXWQMZMAPINXNRWMIXQTWAIAKPSXMOBPFKRZATWZNLCYPEWLVINUJLYDRIODDFEREHBXQNLDRAEZHOF");
    msg.act_time = 55494U;
    msg.deact_time = 51875U;

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
    msg.setTimeStamp(0.2096492856971035);
    msg.setSource(43406U);
    msg.setSourceEntity(215U);
    msg.setDestination(58640U);
    msg.setDestinationEntity(197U);
    msg.id = 196U;

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
    msg.setTimeStamp(0.6521133660452432);
    msg.setSource(8382U);
    msg.setSourceEntity(183U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(52U);
    msg.id = 41U;

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
    msg.setTimeStamp(0.27943696365549986);
    msg.setSource(29807U);
    msg.setSourceEntity(205U);
    msg.setDestination(25161U);
    msg.setDestinationEntity(80U);
    msg.id = 181U;

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
    msg.setTimeStamp(0.6146515185565662);
    msg.setSource(61613U);
    msg.setSourceEntity(209U);
    msg.setDestination(56616U);
    msg.setDestinationEntity(181U);
    msg.op = 13U;
    msg.list.assign("LURDATULOTHYL");

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
    msg.setTimeStamp(0.9474803157221379);
    msg.setSource(45328U);
    msg.setSourceEntity(16U);
    msg.setDestination(29744U);
    msg.setDestinationEntity(80U);
    msg.op = 5U;
    msg.list.assign("NXRJBGKSCBBUVHWGLNFQOBNAWIIZKVFRXUYXQVWIOYJBDICRZIMGTCXSAHVQUIBYOBXAKFEOSSKPTTDCZXOZFEFVMWZTUDXRWQSKTLSITLTLRXUOWTQJDHPFHPVQCHBKXHE");

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
    msg.setTimeStamp(0.7120791756351794);
    msg.setSource(32225U);
    msg.setSourceEntity(131U);
    msg.setDestination(36758U);
    msg.setDestinationEntity(144U);
    msg.op = 154U;
    msg.list.assign("QKDAYZUJDMJI");

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
    msg.setTimeStamp(0.9471523039569542);
    msg.setSource(30703U);
    msg.setSourceEntity(245U);
    msg.setDestination(38146U);
    msg.setDestinationEntity(25U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.5764671448800458);
    msg.setSource(7937U);
    msg.setSourceEntity(135U);
    msg.setDestination(62442U);
    msg.setDestinationEntity(89U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.5106272692621996);
    msg.setSource(22389U);
    msg.setSourceEntity(105U);
    msg.setDestination(49851U);
    msg.setDestinationEntity(52U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.5572730803803444);
    msg.setSource(31746U);
    msg.setSourceEntity(41U);
    msg.setDestination(6019U);
    msg.setDestinationEntity(175U);
    msg.value = 149U;

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
    msg.setTimeStamp(0.34607459685598074);
    msg.setSource(5116U);
    msg.setSourceEntity(241U);
    msg.setDestination(1651U);
    msg.setDestinationEntity(66U);
    msg.value = 144U;

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
    msg.setTimeStamp(0.28701790684711537);
    msg.setSource(64764U);
    msg.setSourceEntity(176U);
    msg.setDestination(17060U);
    msg.setDestinationEntity(191U);
    msg.value = 44U;

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
    msg.setTimeStamp(0.2241736166731758);
    msg.setSource(29701U);
    msg.setSourceEntity(59U);
    msg.setDestination(60981U);
    msg.setDestinationEntity(230U);
    msg.consumer.assign("QRXADLDMCNFIYOROQZYOAKDODCIMQXVMQZMGAEKXOIUSYBQ");
    msg.message_id = 48065U;

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
    msg.setTimeStamp(0.801118559392686);
    msg.setSource(51939U);
    msg.setSourceEntity(1U);
    msg.setDestination(28169U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("QPZQHBMHYYWJSCOYFZFZFTYBYCDVCAHTOPUAZQQAEIKHSXDJVLXAQAGGLUFCDCCJOJZEVXERESUDMGUDCNRDAUTBOFFCIOJLWIGZBNMKPWXPYVBDQGORHWILXXRRHEXUH");
    msg.message_id = 31494U;

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
    msg.setTimeStamp(0.5895731493575529);
    msg.setSource(51618U);
    msg.setSourceEntity(138U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(20U);
    msg.consumer.assign("PTXBOUHUSYCOPBBVAFFBQF");
    msg.message_id = 30714U;

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
    msg.setTimeStamp(0.5270740204099019);
    msg.setSource(33927U);
    msg.setSourceEntity(148U);
    msg.setDestination(5875U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.4952343081136539);
    msg.setSource(20793U);
    msg.setSourceEntity(232U);
    msg.setDestination(24376U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.598819124936295);
    msg.setSource(56581U);
    msg.setSourceEntity(246U);
    msg.setDestination(30429U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.686881812422531);
    msg.setSource(46597U);
    msg.setSourceEntity(240U);
    msg.setDestination(39585U);
    msg.setDestinationEntity(1U);
    msg.section.assign("QHAXIKDIQDPKRNWRAOKNSJNMKJLOVOVWHYUMUBAXSDUAATAPRYIMOZFKFUSCIPCPPTHPZXKLYGBNFTCQJGWUGOMVNBBKSEGYRHJNSWDKHZVWQXIWHOSXVJQAYECQPERZWFUTEGNXLMDQVIBDAOTMYKSHVLLRJESFALGAZPZDKFUSTXHLC");
    msg.param.assign("LNGYIHBUMCISDTIDXEOBNYNVLKHZNZLQBXSGEOZLJHIYLNSRGPIGGGMXRCYNDUJBFATEFHCQDYRKKHNUZXXZVHMQKRKVWWDHRPIYHBQEUCEJMMGMNKDOQPFFNADSTIZESROVTARNWALLAVMTSOSLWPXDVXICWQAADLFUUMSPXSWVKFQGKHEYJSJQJOHCUBVCTVIAOJFCUZ");
    msg.value.assign("UEOIDMZOEIUJOFNVCREFVMMHSBBXXVRQDVAPQPAAPGFTUYQLXAXOFLDSEGQCSQBHNTUPRJCTVSWJTGKLHOPMYOJJMKOHTHRDIWUYWECKZXGNBWWGLGSZBJMKAFPXHDCHAZLLFHDZVCBKYXQIMIAPMPEKVUKJELABEYTEMWIOLQTPNDNGORSRCMGGFIVNDSXXUYBZLAIRQCZVANKBEWHYCTUULOWBSGNZXDWRPKSNJNKCDJYZSFI");

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
    msg.setTimeStamp(0.2166327028187408);
    msg.setSource(19179U);
    msg.setSourceEntity(140U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(39U);
    msg.section.assign("CYALNWSARRYEQMLOPUDEWCCLPNKAEJANFQKYZFOCZZHTDJZIGDSOZUMN");
    msg.param.assign("IOQWGORAXKKEYIEKBPZDNVSMNBJZESBUWGXHOKXGXTGFMYZNYQTRCHLYKDNDTBMIOLSZMWPJUUZEZHVTNYSWYULKHYIXDPHEZSRTCUBERVYOFGERHGNQQCQPTECAXPIQTDSRMLMJFWGBIHSFDULKVDXROPSZKBVGUAJWFVQWJLWUEDZNTAILGSMOKWZTQEXBNPCUPFXMFPCFADOLVAFACMJJBJAYITORYN");
    msg.value.assign("KZDSGGJLHRQTWZBWRHTCIDFGBGKALNGFVOCV");

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
    msg.setTimeStamp(0.18832724848017457);
    msg.setSource(49664U);
    msg.setSourceEntity(244U);
    msg.setDestination(2560U);
    msg.setDestinationEntity(150U);
    msg.section.assign("VOGCUDLCYTRLEWXFHHIYMHLODCPLFKSPNVTJCDXFEXKLZKCFUOBXYIJUDWGHCRJMIEWPFFUWKBMAROZEBVTDLPRCUFYORDYCQSQVMSXIDSPBANXICGJOGZESTGBRAQNUJXVTHZWWAXAYSJYTUQEYRDRMYZIEWPQBMZJASIKWCIHTZBTOUEHLKFNQGQAKEKGMNMUAPZOGJ");
    msg.param.assign("KGASZOLVLXCFIKQKSEUTSEJBBWTSITMCBOTYQXLZTGHEIXVEBVGVFWCQXAGSJUPQNJYIHAPMZVCZCXLGCZJGUKNXNDIRDOMAAYFRTYZWWVUWWWPYMMFLDDLPBPFKRBUCMDLEZSANXWEMGZGXNSXBPNDQTMCDHBZJQLRAAYJJCLHNICOUREHPZ");
    msg.value.assign("VRURJKVEDSKCHTGBFTMXQQCUZINBKJFXXRFYLWYJWLMPYOXHHMZZPZCBGAQQXQXDZYKVPUXVSWNEDUJVGNWALPGEBMDFPDFZALZRRONSKOVMGWFVLCUSBIJBMPAFHMGVHCURISMSWTTKAANWEDKBTLSYGRDCIQKXMYZUDIOWHNOHXLCPIEPLLJKTPITXJYYUYUDFOHPLYCIOBBIQWJZQTSRRQHVNEANRFBJTSGNZMEDAOWH");

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
    msg.setTimeStamp(0.46952899433102624);
    msg.setSource(9905U);
    msg.setSourceEntity(137U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(141U);
    msg.op = 112U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("LVIFFAFMRNCNOFLQALUWCZJKQVNAXLLLGWIKNSFKFEIOKEPGBDOPOZNZDHIMAZEECZDPBURTNLNGWBRRCZHCLYGTSAYMKDMBWJXJDW");
    tmp_msg_0.param.assign("KCJAODIQLKSNGBMENBQIJQSWNCRYQVZTVJHOBHEGPZUFAXFDAZYDVOXRBXRDDPDYEFCWAOBVDUUXZFJSGYKLNRNZZHZCWINPDPKTPATMVMWRQSFGCLXYPCKXRNOOCWAIIUFLAJGTGQYMCVJYMNQQSLPUUECTXBXVXPELMSLHRRCHTHBPJHTHEBMKSTOHITDEJGQKWYWMJFHEREXTKIUKAPUFSNVOIMSQBBLM");
    tmp_msg_0.value.assign("ONONMWPFRSRERULCOBCPLEYJZGQHPHCAMEAKMIJOKPGUYMKFCPPSDAKPNDUCYHYXWOHDGPZIIVIBJVKTUZWQTAMTMAXRLXRPL");
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
    msg.setTimeStamp(0.5733280934129719);
    msg.setSource(29843U);
    msg.setSourceEntity(226U);
    msg.setDestination(13559U);
    msg.setDestinationEntity(113U);
    msg.op = 135U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("LZKOHSUDJFRQAYPSDEZRMKDDNALAEBDWKONIAYOQORGPESFKGCGHNJTVNESIHLMUXUKTULOTEDHXMJFMLUYSXZHICVQCXOAFGONPNWIZMEVVUUBEBAOWKWVJPWJUTIIBKKQXUUTAVYPRECYHHSXQKYGSGBSNTBZJLRGHDFQZVCD");
    tmp_msg_0.param.assign("JQSIADSCELNWXSJZDCIBGSENWDWNHKOIJOMEVMNCODGYFIRCGRTVUIKYCLQRVLCKTZPXYUUFPIHMLTKFHNJATJHYVBFHJZPNVCHXXOFHKCPNWZBZM");
    tmp_msg_0.value.assign("AIKUTYYYGLNDTWJESVTMNGYAZBEIAJLG");
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
    msg.setTimeStamp(0.488527464660686);
    msg.setSource(48052U);
    msg.setSourceEntity(160U);
    msg.setDestination(16070U);
    msg.setDestinationEntity(34U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.6650700837448394);
    msg.setSource(9804U);
    msg.setSourceEntity(207U);
    msg.setDestination(53374U);
    msg.setDestinationEntity(198U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.9920170481174452);
    msg.setSource(52277U);
    msg.setSourceEntity(87U);
    msg.setDestination(25408U);
    msg.setDestinationEntity(91U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.08349112903928413);
    msg.setSource(56165U);
    msg.setSourceEntity(131U);
    msg.setDestination(37662U);
    msg.setDestinationEntity(148U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.9791044610340798);
    msg.setSource(28826U);
    msg.setSourceEntity(54U);
    msg.setDestination(27478U);
    msg.setDestinationEntity(241U);
    msg.total_steps = 80U;
    msg.step_number = 36U;
    msg.step.assign("FFDUVHJFSACUTYWPRVSGELKGSFDQBPTKQLABYNTMRCKXIVESIOFCPYRUCQNELGOWRMADXVOXUHICSAHNKEY");
    msg.flags = 144U;

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
    msg.setTimeStamp(0.4229079031624584);
    msg.setSource(16208U);
    msg.setSourceEntity(242U);
    msg.setDestination(37658U);
    msg.setDestinationEntity(181U);
    msg.total_steps = 57U;
    msg.step_number = 19U;
    msg.step.assign("TURWZDBRTNLMTCUGLOCIBZKBTCDTAMOQGBYLEWRIWBTXDVZAOFVAGJOLPQOBOKHHYIPSESWARAZTKFQEFDNFUFTSUPDCKJWOYJCHJBOXYMVGEEHCNMEXMKINXAMXUGFZPJNDYHMVBWCQIDSXPJPHXGHFARIZQEWENMYYTPRZKYHHWGSSFJNGVBILMOFIXNJNZHRQLLJFGVSDPSAO");
    msg.flags = 10U;

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
    msg.setTimeStamp(0.5283829706514539);
    msg.setSource(21656U);
    msg.setSourceEntity(60U);
    msg.setDestination(20397U);
    msg.setDestinationEntity(188U);
    msg.total_steps = 3U;
    msg.step_number = 103U;
    msg.step.assign("MONWCQGDSOFGVQAFTVCPIAKINSDFXKSVMKUWBAJJOJZOGQISNRAYDJEGDBSFXLTELCUSHWPGNPJQAHQEGRBNHURVJTHXZXPTFBLUROSZBDDUIDPYPJFSHTYYDAYWGLTTNIMXNMRPWCLUHZECYRLWFQCRRVZOI");
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
    msg.setTimeStamp(0.3965410025323516);
    msg.setSource(43493U);
    msg.setSourceEntity(158U);
    msg.setDestination(35553U);
    msg.setDestinationEntity(41U);
    msg.state = 14U;
    msg.error.assign("EWADQUUADBMHUTUGJGFSEVVYBMINYAVQHSERYKAIJKTCDSCWOQHCYZEJDUMCLAMVAIIRZGC");

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
    msg.setTimeStamp(0.48593401929970426);
    msg.setSource(27148U);
    msg.setSourceEntity(132U);
    msg.setDestination(56256U);
    msg.setDestinationEntity(248U);
    msg.state = 205U;
    msg.error.assign("QHRVEILCYEIWDHCLNUKHYTPAYBPMCYMSNGPDNIUZGFJOWPWOXHEZEZWUAAKCNYAOBMHONNGMDOWSTQMNXFAHBDSNYQRHMZSZLZJIMYQGPJPXBLACSFYZNJJKSCRKQTJFVWU");

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
    msg.setTimeStamp(0.20314560036476903);
    msg.setSource(22443U);
    msg.setSourceEntity(239U);
    msg.setDestination(32858U);
    msg.setDestinationEntity(174U);
    msg.state = 174U;
    msg.error.assign("RFQOAXOSOTHTFCWIAIKMDKNRYIPIBFICHIGJASXNVSJURZLLWDBVGJLTEECZTXSFBZEBKYWNJVJUGFTITFVJLMZCPCOOJONTKDQSPMADMFAGZQVHMHEBHWWAOTYWEGHHFQPSPYKIKCRJXLLRQAAWQNUCLYYZKUSPEPQQFXZJLMEHVCTEUSEVBUDFOULRBYINNVBAUEDPJWKUTZDLXXRNBQMNHMRMHBRKAGIDYGZSXDWCPGXZU");

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.10464725350582915);
    msg.setSource(1248U);
    msg.setSourceEntity(141U);
    msg.setDestination(9300U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.9493065049865373;
    msg.lon = 0.08298994563275208;
    msg.height = 0.3393069696018596;
    msg.x = 0.09877730768676263;
    msg.y = 0.7377555588794996;
    msg.z = 0.6055363683993338;
    msg.phi = 0.6571046880351534;
    msg.theta = 0.21532541890480417;
    msg.psi = 0.028895500509262484;
    msg.u = 0.5880947403133877;
    msg.v = 0.835024989073045;
    msg.w = 0.20306916434217726;
    msg.p = 0.9898198319324161;
    msg.q = 0.38726418036569654;
    msg.r = 0.07834011684404119;
    msg.svx = 0.004375654592510547;
    msg.svy = 0.19054441844454528;
    msg.svz = 0.7117582646189098;

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
    msg.setTimeStamp(0.4529995841605654);
    msg.setSource(46715U);
    msg.setSourceEntity(240U);
    msg.setDestination(29573U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.9234490493606458;
    msg.lon = 0.9958520027705682;
    msg.height = 0.3570817271868555;
    msg.x = 0.11848722333829309;
    msg.y = 0.5022038705354396;
    msg.z = 0.8993958387568112;
    msg.phi = 0.20389057332601956;
    msg.theta = 0.6374973437610766;
    msg.psi = 0.5713691985075016;
    msg.u = 0.11327530157987509;
    msg.v = 0.5623725312233128;
    msg.w = 0.02803732549599458;
    msg.p = 0.4630373160791236;
    msg.q = 0.5420527091723976;
    msg.r = 0.5713417930487411;
    msg.svx = 0.4116686857242219;
    msg.svy = 0.45415420078138236;
    msg.svz = 0.7157407799347135;

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
    msg.setTimeStamp(0.05875461353263456);
    msg.setSource(52739U);
    msg.setSourceEntity(135U);
    msg.setDestination(40667U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.5682020528942352;
    msg.lon = 0.7446495218601864;
    msg.height = 0.6122659322716819;
    msg.x = 0.7695521742290118;
    msg.y = 0.06421874753799128;
    msg.z = 0.2922057055871835;
    msg.phi = 0.8181386442132903;
    msg.theta = 0.9608417121597687;
    msg.psi = 0.9951730844538048;
    msg.u = 0.7999523399770863;
    msg.v = 0.7040955169553937;
    msg.w = 0.21061227948837724;
    msg.p = 0.19909404547636522;
    msg.q = 0.6964427335457686;
    msg.r = 0.7586337721036076;
    msg.svx = 0.1746171166528897;
    msg.svy = 0.4385965430760983;
    msg.svz = 0.7998636389759382;

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
    msg.setTimeStamp(0.7880989844379978);
    msg.setSource(39254U);
    msg.setSourceEntity(231U);
    msg.setDestination(29269U);
    msg.setDestinationEntity(122U);
    msg.op = 27U;
    msg.entities.assign("HOGVIPWXZWJWFOPKMBJKCTDDKBPFQUUJHEUAHMIDQKRTQFQSIGMYNZCEADKLNLNBCZHCINRWFQODXVNZEGLDFQTXMBLRLVJMZREIXFJBUTUEULCONTZRVQMWOGIVNZHYOSFYVAMTSHQNSPGBWPYCOJABEGJXTGMVARMAGBLIYVCAWCQRYYPDBKXXVKXPZKPRSLULSVKSWSIAPZGXDTTNFYBDUSNJHCWUYR");

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
    msg.setTimeStamp(0.7382663662761892);
    msg.setSource(26396U);
    msg.setSourceEntity(171U);
    msg.setDestination(51778U);
    msg.setDestinationEntity(186U);
    msg.op = 111U;
    msg.entities.assign("JUIWOYQHCMKIOPJTZJTHULALQSPDLNDWORKUHWBOSBVXHLNPGTQERNQKOMOHKOTUHKNGAAWKGLMXRJDDPSRTZGNDYPNAYEGUMXZIPBQZWOURXYZRGLBSPACVXZZHULSNWUCDAIYUMXVDTFNLQRXMOJGMVCXBXPUFTVYKKJA");

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
    msg.setTimeStamp(0.9291932292244486);
    msg.setSource(3734U);
    msg.setSourceEntity(14U);
    msg.setDestination(38215U);
    msg.setDestinationEntity(78U);
    msg.op = 210U;
    msg.entities.assign("AGGRIKUGPTKVBJXSZSJXLNOIGJOGIEODETJOQUREQKPXWXDRFEZNQYDILLJBDPVTNHOFLTWKMWRBYMWYUPDKMBZHLAQONOXRVUPPSSR");

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
    msg.setTimeStamp(0.023429613216710554);
    msg.setSource(41327U);
    msg.setSourceEntity(35U);
    msg.setDestination(64747U);
    msg.setDestinationEntity(149U);
    msg.type = 28U;
    msg.speed = 42826U;
    const char tmp_msg_0[] = {-122, -50, -88, 82, -59, -123, -65, -28, -100, 69, 86, -33, -62, -77, -82, 117, 80, 2, -115, -88, -45, 15, -40, 64, 13, -108, -81, 1, 64, 65, -42, -32, 54, 21, -49, 90, -53, -126, -114, 30, -103, -35, 58, -54, -78, -104, -3, 104, -58, -122, 27, -99, -72, -88, 49, 95, 94, -104, -84, -57, -14, -76, -52, 18, 0, -62, -95, 19, -29, 113, -48, 2, -105, 2, -18};
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
    msg.setTimeStamp(0.349606621261244);
    msg.setSource(51694U);
    msg.setSourceEntity(58U);
    msg.setDestination(48842U);
    msg.setDestinationEntity(161U);
    msg.type = 203U;
    msg.speed = 43072U;
    const char tmp_msg_0[] = {-31, -21, 108, 46, 45, 74, 41, 77, -13, -53, 5, 111, -78, 40, 39, 31, -23, -54, -84, 10, -62, 47, 11, 51, -107, 23, 110, -67, -122, -119, -37, -32, 121, 4};
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
    msg.setTimeStamp(0.48089386400080136);
    msg.setSource(54384U);
    msg.setSourceEntity(165U);
    msg.setDestination(22732U);
    msg.setDestinationEntity(26U);
    msg.type = 225U;
    msg.speed = 46146U;
    const char tmp_msg_0[] = {47, -44, -115, -127, 35, 22, -64, 2, -64, -66, -51, -126, -127, -68, 28, 115, -28, -27, 73, 66, -13, -94, 6, 76};
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
    msg.setTimeStamp(0.34534408251531823);
    msg.setSource(53648U);
    msg.setSourceEntity(121U);
    msg.setDestination(13950U);
    msg.setDestinationEntity(116U);
    msg.available = 3187525848U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.6218588259686154);
    msg.setSource(47651U);
    msg.setSourceEntity(77U);
    msg.setDestination(62949U);
    msg.setDestinationEntity(216U);
    msg.available = 1155799415U;
    msg.value = 126U;

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
    msg.setTimeStamp(0.7859382369835206);
    msg.setSource(35393U);
    msg.setSourceEntity(17U);
    msg.setDestination(57891U);
    msg.setDestinationEntity(28U);
    msg.available = 2761814657U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.41020766607401304);
    msg.setSource(31320U);
    msg.setSourceEntity(30U);
    msg.setDestination(51329U);
    msg.setDestinationEntity(214U);
    msg.op = 134U;
    msg.snapshot.assign("BDAVTSXLWRCOWHFNZZQWOECVPUZLETBJFIFFMLEKYAJHPFLZWRSPOJREEAHXLKOVNIJWQZPFTKSMUAORXIPYGHBMTIUMMCQGGOYDXHISFCRCDWAHECCTBITDSPGTYVEZPNNNWSMVRKFIJJUEHQQLNLWWOSYUTBGUTDXNGBVCRAJAQUQRBKKDNPKPSXXZUXVMELRBDZQFNIOOGYVIYY");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 48U;
    tmp_msg_0.actions.assign("ZJLCOOGQBYUKXTZWWJNLPZXUIJHPBEUEZQUKRVDBTWOQECLIKFOLLIYLKGTEPNWRVGTGDSBKQUETAABPIJODRAKMMIWIENASNXUJOCGZUFSQUPBXJGNCIERSMFFJXTRQFMCSV");
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
    msg.setTimeStamp(0.37039429894242126);
    msg.setSource(14266U);
    msg.setSourceEntity(251U);
    msg.setDestination(58130U);
    msg.setDestinationEntity(114U);
    msg.op = 117U;
    msg.snapshot.assign("HBEDWTONIPXXGWQAHZQBPEOELFTTFJUXCIQCIRPDGYMVYKGHFOISNDWOSGCUKYUTCVRRATGXYQGLKAYHLRHUQIDSUNIXSOHVYIAGMCPGWIJXUELBMJRPLC");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.9995359746335789;
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
    msg.setTimeStamp(0.9844674796939924);
    msg.setSource(50206U);
    msg.setSourceEntity(50U);
    msg.setDestination(60441U);
    msg.setDestinationEntity(224U);
    msg.op = 46U;
    msg.snapshot.assign("WXGDMGEYLVVWAQBYPQETXRQOUBMWGCMRTGBIREQKKYASHHJQHDPMOWSTIFHJCVEKOZKIWECRDGGYZLANXRNMPXIVPIJHBZJJTCYDHVIJXCSHNWVFWVNNWPCZEHNYLEAFMUUCEHTRHMMALTAJJPOLPVQIFFB");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("MFMMDPHCDURQFQPULPAPKCACLVGKRMUEGFQKZWIPBNNSMHYCPAOIZNBOIVTOFLLRZVBBMAZOGIWFLJLDXTFZTPIJTXFDWKJBISYNLYUMMYACPAXHWGVQOSIUBXETHGYWEJPVJWHSVCGHDFIJMLXOTRHYGWISZKUETRVXRJEDYNGRSAJR");
    tmp_msg_0.plan_size = 13252U;
    tmp_msg_0.change_time = 0.3931602419444097;
    tmp_msg_0.change_sid = 16102U;
    tmp_msg_0.change_sname.assign("SWUTQJPHXFUWTHJAZVFVQADMKUCVYYXCRTCLHNZUMTJQMGQQAGGWFEIUOLYXKZUZVJCWFFJOGRTUYIIIRCRCEKMAXIBYFDJVBPGMLAXOWXRIFYNJAEMNRESNOJPNMSPQKLLWXVKHAZOYHCMPSGNSOHYBQDWEQOX");
    const char tmp_tmp_msg_0_0[] = {52, 55, -73, -8, -52, -95, -50, 14, 126, 14, 57, 66, 68, -14, -15, -46, -40, 62, -40, -51, -74, -1, 17, 118, -120, 42, 4, 94, 21, 70, -67, 121, -41, 13, -20, -63, -67, 4, -122, -60, 45, 75, -81, 87, -55, -66, -50, -16, -52, -37, 111, 19, 16, 103, -80, 5, 53, -48, -119, 50, 48, 121, -95, 112, -8, -66, -44, -124, 117, 100, 82, 104, -76, -35, 32, 66, -112, 78, 34, -85, -128, 118, -37, 116, 63, 65, 45, -122, -59, -35, 70, -80, -40, -108, -92, 31, 119, -117, -56, 115, 100, 118, -34, -63, -119, -92, -54, 72, -78, 123, -14, -67, -82, 60, -115, 109, -46, 27, -53, 109, 46, -113, -99, 40, -25};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8525497205485728);
    msg.setSource(44222U);
    msg.setSourceEntity(64U);
    msg.setDestination(17185U);
    msg.setDestinationEntity(236U);
    msg.op = 61U;
    msg.name.assign("JCHDEEHZTESJCESSBICYQNSQYBVTQURDQWRBJWUMZRMGLUYOUEQJJXGCOGXCOLPEJAFXUJNPVHJBNAHWBTAFUGZZKBXFKREMWKWHWLNOCIIQSHZOOLFKPMOWGCGIBKRHZKANCKAOFYQGNAXVSKTJFFQMHAPNAF");

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
    msg.setTimeStamp(0.9883968105090511);
    msg.setSource(40708U);
    msg.setSourceEntity(250U);
    msg.setDestination(30867U);
    msg.setDestinationEntity(9U);
    msg.op = 243U;
    msg.name.assign("KQNCTCQJPIAUXBROZCXDPCORBFPSLWASBWPFODJAPGUXWMJDHPMTRTSMXYDGLETUYGTIXHFFIZWMWSYAQ");

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
    msg.setTimeStamp(0.5635216642095596);
    msg.setSource(10057U);
    msg.setSourceEntity(118U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(124U);
    msg.op = 250U;
    msg.name.assign("SIVBVRDIZUFLFZUGERSOLOKQCBIHFFEPSGLGFMNYQWMBHLJCQJRKNNTCYUWWNGVX");

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
    msg.setTimeStamp(0.8551734936230837);
    msg.setSource(18778U);
    msg.setSourceEntity(1U);
    msg.setDestination(3798U);
    msg.setDestinationEntity(82U);
    msg.type = 2U;
    msg.htime = 0.9685259814299955;
    msg.context.assign("FVFWXGALLVDQENNVMTTRTKPYLYXOYWFZNSJGIFPHGKKNMSIR");
    msg.text.assign("ONNHTWDDTMNOGOMHVQJPSBXMOXJHTYELXFBOWALLZYQFCOKPMEVCDRPZYKKZVJUCKIWIKLFTZRXFGUKBRCDRSWAQGPKCSUNDGDMIZXQRITECNORAUSYNVEHGHJACZSDIYUJPVBIKJQXMBNQXWXWHNGWAQFFYEWDGLVKSHECYMGAPUUOXUGBTLLER");

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
    msg.setTimeStamp(0.3527406954131872);
    msg.setSource(32399U);
    msg.setSourceEntity(11U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(200U);
    msg.type = 220U;
    msg.htime = 0.4073308987342711;
    msg.context.assign("UXJMLMPBLHLEURORIZHFQOOZHWZWSEUQFNZZXYRCKIETACXDHAYWIYJXBCDPSHXQABABBKLWRVEPBHPNJTDSFBKTNYLZJKCJTNFAWVDGVQAGROLRXZWGCGTTEBYLVKTCPRGZRGZSQIIFKWWFDYLUODCAVWPMLVNEIQQGLCECDYAJVSKNUTWQMIGUYHOHPMRFJVUSKINAOKXUFOZYQUDMCSNDPSSUJXFVKOJJPXE");
    msg.text.assign("FKYOKYTQDKRBIDUNPPSYZDSGORFFIWHACBIJKQTNJXECMXMVUCBVZHCNADGLQZUNWGCAHORJFGMDVUTXTVKEUNGABBZVRCISUYHHODOYFEYMNEZSDHALTSXGKFYTULJYWYIOEMZMPHENIQVEKCBXVLHJPE");

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
    msg.setTimeStamp(0.5907164502649566);
    msg.setSource(13297U);
    msg.setSourceEntity(115U);
    msg.setDestination(46953U);
    msg.setDestinationEntity(103U);
    msg.type = 73U;
    msg.htime = 0.11575456878348167;
    msg.context.assign("CPPFGYPVHNWIWAUONOORICYMYQLHEMMWOXEVVNXIZRCOHZGGDTIUOROKSJBEBZVUXAHPFCQJRMPLBXSNCPVTWGDHLDWCWSHEENYRZWQBETDAZYCHTIISNASQCUKJFDNSWOUGZIVJAJIXHYKRYIUESMUEVVQELZHBZWQRQYCMFEDKALUTJXLSUFNMGDAJFFNKKGJBMTRXQGABTPLBBIJKLVYKBYAW");
    msg.text.assign("ZVTGZXQWMFHNLLEKIBDNZWFBHEGFOPVWYPCJWJMKQSHXGLIBVWHXBAYOWTMCGWXLMDFXRJAHSATCIXZOJIFBRILSTXSNDIZOVDXRYDKRKGBQTGEWJ");

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
    msg.setTimeStamp(0.00028230351680236243);
    msg.setSource(46370U);
    msg.setSourceEntity(133U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(242U);
    msg.command = 157U;
    msg.htime = 0.7325561991002861;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 200U;
    tmp_msg_0.htime = 0.3210483808689102;
    tmp_msg_0.context.assign("FYERYGVWYQBVNPYMJBAGUZOQTVRGCCWYZTODSBIKPLQSHHGEEYROYGQZFGABHFZBBKRUVZFSWTXDRADUIKJJKN");
    tmp_msg_0.text.assign("PTJQOALZIZLZBRZMPIYYIWZRCGFNPYDWOOHDEQXNXFNPLZAUDQHCAJUSPNSEMQYCQAVTMHKRLACPGUSPJMHXLKXCWUKQVCQWHJXINBMGVZORGBAGSOEHBWSYSEUKVXSXZURNTHWRRIJMGFNKOJTGAGSHCNQKLRFFPOTCDRVUKBIHDNLFMOFEHTBEJYKDDQTGSXOPVYGSWCIEDA");
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
    msg.setTimeStamp(0.4072253158558198);
    msg.setSource(2718U);
    msg.setSourceEntity(240U);
    msg.setDestination(36793U);
    msg.setDestinationEntity(128U);
    msg.command = 197U;
    msg.htime = 0.5058715094620992;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 21U;
    tmp_msg_0.htime = 0.8747080168117174;
    tmp_msg_0.context.assign("MWDDCOAMXBFDPKVGUSTBTGKBMJKUUFHJKREJREDRCRHNYIFKTCDSUBEGQYJUZYCKRNGGZYOISAJZVGYCSPKBZIOQOMAWWVOUTMYLAFVCSCPFLDILDPHOOZBZUYAMQJYWNFKJPUXDNOHFWSYWLQUNWTIXAZVWFVUGRKAGNEIFDME");
    tmp_msg_0.text.assign("DNQTUKWNACSXQZHGGYIAVRXUDYSJVTKAVINJQJJUPFCRXXZBIERMOCSAZQPAOMICEFWUSARQDWLWAMHXEFLZNKRSHPWSNTRYWFGMBUTBKPGKTDL");
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
    msg.setTimeStamp(0.5919375954479532);
    msg.setSource(22595U);
    msg.setSourceEntity(57U);
    msg.setDestination(2345U);
    msg.setDestinationEntity(124U);
    msg.command = 117U;
    msg.htime = 0.7998186250896335;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.htime = 0.4519015644721952;
    tmp_msg_0.context.assign("STFAGEDFDCKBPPXFPQFOJGUGCDTOEQIRJKRTWFITUZODSXZNBWAAEYYICRPHCBQVSYFUBVKSBVXZMMIASUWJKMLRNIYQLLIVTGMPIWUGNJVCAPUMINCGGKLBBDTUNEHBJHXVHCEOSPVEAGKOH");
    tmp_msg_0.text.assign("SNANTIZGRZGYFWSDLPVGKDZXTCEXWKVKJPCAXACJCJNPOMHIMNBYOVZUSZYXZHKJBGHTCXDITKDRSKPEMISFHTNTBLGORWHJXFUBODLZMNSQREPEIRELTQUTMBQIBUASHJFGIAVYEDANOPDGKLENGFMLFRQNVVRBXOUCURZCMHYAVWSQFFRYEVZYU");
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
    msg.setTimeStamp(0.5701333298305514);
    msg.setSource(51291U);
    msg.setSourceEntity(180U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(11U);
    msg.op = 181U;
    msg.file.assign("ZDIBLCUBEVYTAJKGMYSLSODFEZ");

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
    msg.setTimeStamp(0.254091246576729);
    msg.setSource(2325U);
    msg.setSourceEntity(221U);
    msg.setDestination(44069U);
    msg.setDestinationEntity(166U);
    msg.op = 20U;
    msg.file.assign("APNBDNMJRYKDUOBSQMGYHDQBVUWKTJDAQKKEMDPMUBSKWKQLFIHYOMRMFZQPCJZPQCZTOXEELUELTBGBXAVCPFWJC");

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
    msg.setTimeStamp(0.056040612977755866);
    msg.setSource(53547U);
    msg.setSourceEntity(158U);
    msg.setDestination(48307U);
    msg.setDestinationEntity(51U);
    msg.op = 149U;
    msg.file.assign("IMXAXIZLVLGGYDRFIURMCVTHSHSHZBJSMZXGBOEUKORWNFHCFDHRDVUGULTJTMACNMJZECNKNAGGQTDBGOWQLXGIXCFGKECPEEBOVDGKDYSJZMIZA");

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
    msg.setTimeStamp(0.7714125881866695);
    msg.setSource(34644U);
    msg.setSourceEntity(231U);
    msg.setDestination(17235U);
    msg.setDestinationEntity(67U);
    msg.op = 76U;
    msg.clock = 0.8793371395746472;
    msg.tz = 45;

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
    msg.setTimeStamp(0.10930311357262201);
    msg.setSource(37752U);
    msg.setSourceEntity(71U);
    msg.setDestination(56181U);
    msg.setDestinationEntity(88U);
    msg.op = 128U;
    msg.clock = 0.7514602816828374;
    msg.tz = -109;

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
    msg.setTimeStamp(0.49702098619605284);
    msg.setSource(43811U);
    msg.setSourceEntity(47U);
    msg.setDestination(45123U);
    msg.setDestinationEntity(51U);
    msg.op = 123U;
    msg.clock = 0.4629862609196175;
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
    msg.setTimeStamp(0.07649140997215886);
    msg.setSource(65120U);
    msg.setSourceEntity(36U);
    msg.setDestination(50673U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.5665736475860133);
    msg.setSource(44490U);
    msg.setSourceEntity(222U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.7701011063991284);
    msg.setSource(32924U);
    msg.setSourceEntity(108U);
    msg.setDestination(7462U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.6794742088736965);
    msg.setSource(13203U);
    msg.setSourceEntity(67U);
    msg.setDestination(4582U);
    msg.setDestinationEntity(197U);
    msg.sys_name.assign("FUZCICMWUEJEDQEDFHYEUDPJWYRWKKVPKJTQEVSDZRJYZMVTNVFLYUIECF");
    msg.sys_type = 206U;
    msg.owner = 5662U;
    msg.lat = 0.6615575967277365;
    msg.lon = 0.7996060827969528;
    msg.height = 0.02471486922309185;
    msg.services.assign("WOYJAXJKGOQHNISQBHATMMUUNFAIZRIHSLUWLDVMJWJIAFXIBGCG");

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
    msg.setTimeStamp(0.7964102046032212);
    msg.setSource(2849U);
    msg.setSourceEntity(207U);
    msg.setDestination(50832U);
    msg.setDestinationEntity(106U);
    msg.sys_name.assign("EIOVTXOFXZSDBLFXXYQXXBGMQNKRPTSTDEBMNNEFHMJKGOQLWPPNWLEYRDLDUJTBUSTFVSRG");
    msg.sys_type = 186U;
    msg.owner = 20475U;
    msg.lat = 0.10875866976604887;
    msg.lon = 0.040997498709995916;
    msg.height = 0.9048739510580949;
    msg.services.assign("JLILJOZUYESNMCRFY");

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
    msg.setTimeStamp(0.6719235312623488);
    msg.setSource(24614U);
    msg.setSourceEntity(249U);
    msg.setDestination(5044U);
    msg.setDestinationEntity(240U);
    msg.sys_name.assign("JHPSOFKCUQLTTYBRXXBLQMVAJIJRPZIREUTGXNFICNTFVGIVZDMKCQHKLRKWPCYCXWWAHLRGSFMNZXEZPFIXMPBHEKUKYQBYUYJQOEHIKWKDVTIBOYJYAWGXBYSFOLYV");
    msg.sys_type = 136U;
    msg.owner = 31861U;
    msg.lat = 0.4641521190088165;
    msg.lon = 0.7635700087777255;
    msg.height = 0.2527230136176335;
    msg.services.assign("HVSJKREMFLIFUYACPHVUGDMULCIUFXQVTXQRMCE");

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
    msg.setTimeStamp(0.4849342921602029);
    msg.setSource(21504U);
    msg.setSourceEntity(31U);
    msg.setDestination(57610U);
    msg.setDestinationEntity(34U);
    msg.service.assign("WJRDSDLBLRNTTDKLPUUDEIAKBIEOVOANNCMHBBEXMYVSNJVNJPVTIHZFQICZUYMDJZMCGFERDORVMQPBFRCOOFQYVKHJQXWSMPLZKGNZGPXECGTKFZTBHFXULXXWQFDFBVHUDOCWPGIOMWSZYSOOLGAXXVWAWBHJWFA");
    msg.service_type = 246U;

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
    msg.setTimeStamp(0.10974787589368984);
    msg.setSource(55716U);
    msg.setSourceEntity(6U);
    msg.setDestination(25099U);
    msg.setDestinationEntity(42U);
    msg.service.assign("UVYCODGBFEEMNAHQVXRYPWFITERQWMOMSUMIPAJIWIKUQAFLCWNMUARBY");
    msg.service_type = 156U;

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
    msg.setTimeStamp(0.7329643446808665);
    msg.setSource(4077U);
    msg.setSourceEntity(164U);
    msg.setDestination(12732U);
    msg.setDestinationEntity(154U);
    msg.service.assign("FBGNOKQFWXOCDPHSRHLUEXXVBLAIFQJWPAGXWFIPTYPSKIEIUAKMKTSCUUZTSZGCWSFXSCAEGJ");
    msg.service_type = 47U;

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
    msg.setTimeStamp(0.8920833159152982);
    msg.setSource(2564U);
    msg.setSourceEntity(198U);
    msg.setDestination(18255U);
    msg.setDestinationEntity(186U);
    msg.value = 0.03121641247053475;

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
    msg.setTimeStamp(0.05917764086649524);
    msg.setSource(26842U);
    msg.setSourceEntity(141U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7721778967487982;

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
    msg.setTimeStamp(0.09949107476539742);
    msg.setSource(16008U);
    msg.setSourceEntity(33U);
    msg.setDestination(7834U);
    msg.setDestinationEntity(11U);
    msg.value = 0.8073448515807439;

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
    msg.setTimeStamp(0.3909071777252303);
    msg.setSource(60147U);
    msg.setSourceEntity(247U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(147U);
    msg.value = 0.620637461356576;

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
    msg.setTimeStamp(0.44554010609381445);
    msg.setSource(58151U);
    msg.setSourceEntity(182U);
    msg.setDestination(41503U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6270890835573154;

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
    msg.setTimeStamp(0.4993345450814052);
    msg.setSource(23612U);
    msg.setSourceEntity(212U);
    msg.setDestination(4550U);
    msg.setDestinationEntity(42U);
    msg.value = 0.668349131343223;

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
    msg.setTimeStamp(0.24668551392880833);
    msg.setSource(5722U);
    msg.setSourceEntity(121U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5119567244011055;

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
    msg.setTimeStamp(0.9279115499666039);
    msg.setSource(34012U);
    msg.setSourceEntity(204U);
    msg.setDestination(6324U);
    msg.setDestinationEntity(238U);
    msg.value = 0.6002730373816609;

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
    msg.setTimeStamp(0.38390118966358633);
    msg.setSource(55046U);
    msg.setSourceEntity(170U);
    msg.setDestination(33591U);
    msg.setDestinationEntity(152U);
    msg.value = 0.9231697857460485;

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
    msg.setTimeStamp(0.018311638302382582);
    msg.setSource(9946U);
    msg.setSourceEntity(252U);
    msg.setDestination(57787U);
    msg.setDestinationEntity(71U);
    msg.number.assign("EVHCFJAFVNRACQHQPZTJDAHNGPMLCOZWUUWJOIUFISTBPMATLRLRJZIPXSUQWMSHWWNVUMNTDDYFKBIRZTJYVQOEOPYBUNNWVIBXAUZS");
    msg.timeout = 49190U;
    msg.contents.assign("LOTHYKJPBQKUGVAFZTPZWFGSKWLNIEOXRQSZGWMNXTGMIVCZIYOLKMZKIYGXVQGGBQPPNZNDOLDETKMIJDNVYEYZEALOJEFPXFATDIAGDOEORKLKUZYTUXMSAQRUQATBSCMMHMQHPYCWBDHBJCRNFJVNURXNBGCJJWIAYVFEDXYFFALRFC");

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
    msg.setTimeStamp(0.20450146728182728);
    msg.setSource(46035U);
    msg.setSourceEntity(253U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(192U);
    msg.number.assign("DDWCEDLSRJVHGDXKWTBCWXZQOANYTDUFIFHSOKMENIFBPNWBVKLJSBAZSSAYIIEZLBJAGROQJJJMTEURGUFVRZOBHSFTTFUXPWPDSDWGRIRMKPEMEHIHYMFFUILLKJUXMVOTZGVZTUONDRREJZYJNHPVFWWCDGYANLKBMLUNQBUCCVEAHNRXPFCISZKGQYXTKWANJMMVHYPQVEXLCGQWYSONHPQCOIEQLBXYMB");
    msg.timeout = 64365U;
    msg.contents.assign("XRIYITYBTMHCSZSUXOLXEZZSXQCJHUOFBGVNQVAMWDYNANUTIBXTEIJQPXVWAZSVILOK");

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
    msg.setTimeStamp(0.6156348984987942);
    msg.setSource(4188U);
    msg.setSourceEntity(151U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(9U);
    msg.number.assign("CINWNABCOGBJDDVXZHVPUZFDAETZOSSEKSDUEYRZAFBAU");
    msg.timeout = 34033U;
    msg.contents.assign("GNHEKJIHGTRDWRRXMRALBNHMPYTICZEUJFNWKQHRLWVDTKGPBYVTIATGOSNUECKSQSLUOYDRVAXAAOZHXYOWEBUHQSBLMQJPMDSIGYLZSSEMQIKOGQJOIXGKFXBPAVNWZDCKSWCEQODTLRPQPOYLUMFUL");

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
    msg.setTimeStamp(0.09349379355144316);
    msg.setSource(57198U);
    msg.setSourceEntity(150U);
    msg.setDestination(41927U);
    msg.setDestinationEntity(71U);
    msg.seq = 180861450U;
    msg.destination.assign("QMVKUUYLFCODOFWGYNISSFTETCDZGQGNYMLICQZIETZBXHWFNIYRBDMLHKQBUIXCVLNPPWEGFAGDHWFOYBDZD");
    msg.timeout = 24513U;
    const char tmp_msg_0[] = {55, 55, 80, 121, 49, -3, 113, -30, -50, 6, 37, 21, -126, 37, -88, 71, -101, -71, 4, 68, -100, -23, -6, -27, -124, 73, -106, 15, 108, -101, -111, -8, -127, 77, -47, 100, 42, 79, 113, 120, 62, 86, 94, 49, 25, -6, -41, 23, 48, -3, 99, 52, -114, -63, -13, -38, -23, -23, -116, 76, -25, 21, 88, -111, -2, -31, 12, -124, 35, -115, 52, -67, -49, 48, -85, 20, -105, 110, -53, 100, 89, 36, 16, 67, -23, -42, 36, -17, 66, -92, -73, 71, -103, 118, 98, -120, 3, -10, -126, -47, -90, -59, 93, -73, -32, 107, -38, -113, -106, 74, -11, 65, -102, 110, 103, -76, 23, 67, -96, -77, 107, -97, 94, -22, 48, 102, -52, -1, -111, -25, -48, -92, 75, 121, -86, 113, -59, -53, -43, -4, 117, -8, -96, -102, -108, 0, 57, -84, -107, 111, -90, -121, -43, -86, -80, 52, -69, 114, 121, -51, -34};
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
    msg.setTimeStamp(0.18990458752551698);
    msg.setSource(25822U);
    msg.setSourceEntity(251U);
    msg.setDestination(22455U);
    msg.setDestinationEntity(171U);
    msg.seq = 403161956U;
    msg.destination.assign("MKKNSMDRGUBBAZAFRVFRLYTOAVOZAQUHIUGPRXGEAHAQVTVPESTFSXTDYCUKPZQXAKJYSHXVHWSJYNCRPTZOKQTTDBYDMVXIUFVBUDYGMXRSLUGCZPOHHNWWWLAEFLGMEQRGJOGRDFZPFEOLXZVIIGVBXBCJQKDSNHKMOJFTE");
    msg.timeout = 61501U;
    const char tmp_msg_0[] = {8, 45, 124, 67, 76, 125, -60, -105, -33, 54};
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
    msg.setTimeStamp(0.5594706367296778);
    msg.setSource(46368U);
    msg.setSourceEntity(101U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(26U);
    msg.seq = 3517808633U;
    msg.destination.assign("WCXSEEJJWPZCJFVHTIATXCZUKTTYQBZRDCNBAUWHIHNRUKQBGUJUTVZUJNMRGOFMKHXOVGYVYDCWEJLDVPDESSBGXXMNLGUXRHUROSQANKPRGKVAPZWTFQFLEMPJJLJLIMYXSHSOAOHCTKMEZVXPYSFMWCZYFBNYHBQQVLBOOGOFLDCRMPHIDDVJFLOGZYTBEFPAIDKDKHROXIZWENVESKLIPNNMAAIQRZKQQIWGDQFBMTWIYUTYU");
    msg.timeout = 10268U;
    const char tmp_msg_0[] = {-2, 45, 1, -83, 6, -13, 112, 121, -27, 93, 16, 100, 62, -92, -97, 79, -64, -21, 59, 47, -36, -66, 94, -13, -89, -123, 80, -103, -119, -69, -111, 52, 86, -18, 9, 70, 53, 50, -11, 29, -54, 17, 51, 53, 92, 5, 119, -52, 3, 21, -6, -35, 13, 116, 3, -126, 112, -69, -102, 107, 68, -127, -41, -47, -90, 119, 68, 54, 52, -93, -113, -53, 37, -45, 105, -26, 46, -23, 83, 24, 75, -118, -101, -117, -86, 32, -38, -16, -62, -36, -103, 21, 28, 124, -11, 106, -115, 29, -57, -69, -74, 15, 98, -77, -30, -71, 92, 54, -56, 59, -83, -45, -56, -22, -73, -35, -28, 53, -63, -69, -48, -64, 51, -122, 5, -56, -18, 97, -53, 56, 79, 126, -73, 8, -46, 56, 110, -110, -18, 35, 23, 84, -8, -8, -115, 101, 111, 77, -85, -52, -118, -19, 41, 69};
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
    msg.setTimeStamp(0.2739803095111031);
    msg.setSource(327U);
    msg.setSourceEntity(140U);
    msg.setDestination(29318U);
    msg.setDestinationEntity(216U);
    msg.source.assign("KGKUOTUHDKSCBZIANKNYLRNRJOOJZPQVWQDNJLOYVBUDSBPWANWMKLXGMWLTNKDQJVFECXPVFGHOSYB");
    const char tmp_msg_0[] = {-55, 14, 117, 102, 26, 80, -125, 88, -103, -22, -107, 11, 20, 92, -16, 26, -86, -58, 35, 83, 1, 86, 65, 25, -59, -45, -56, 82, 42, 98, 71, -98, -125, -38, 80, -93, -70, -56, -50, -89, -10, -1, 68, 56, 81, 40, 118, -40, -120, -124, 34, -74, -115, -59, -49, 60, 6, -4, -34, 66, 76, -101, -5, -27, -73, 77, 3, 93, 32, -100, 21, -96, -89, -81, -125, -73, 91, 119, -82, -3, 78, -69, -56, 58, 93, 35, -86, -58, 29, 74, -126, 87, 81, 50, 113, -125, -43, 106, -15, 84, 103, -91, 55, -122, 12, -4, -10, 114, 77, -10, 50, 78, 75, -93, -47, 66, 17, 78, 87, -48, -73, 62, -10, -4, -74, 13, 104, 18, 112, -80, 44, -109, -57, -95, -34, -53, -101, -52, 24, -53, 102, -7, 25, 105, 39, 6, 72, -52, 106, 98, -77, -95, -54, -3, 100, -50, -18, 118, 93, 37, -93, -91, 48, -41, 15, -104, -117, 85, -40, -6, -87, 58, -56, -31, -83, 16, 68, -16, -18, -12, 121, -11, 4, -95, 21, 37, -39, 54, 111, -3, 98, -13, -97, 58, -112, 27, -67, -110, -72, 98, 39, 114, -126};
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
    msg.setTimeStamp(0.5591227900016136);
    msg.setSource(46360U);
    msg.setSourceEntity(13U);
    msg.setDestination(34016U);
    msg.setDestinationEntity(223U);
    msg.source.assign("LDADQSWMAMWNIXAYFLQBYUCEEYUTAGMMAPSFIBEGWCSNPPVCEELVTLOJNKDUABEJYZBXZLSDGDFXDEXJPJQYYHPPKRQTGRFFWLIPROSLWDSVYNQTOBOUUHQWKNVXKBONZQGHAUYRIZPJNGKVMFSELJHQKTOXBNRFXVHJCHGQJTERCYOID");
    const char tmp_msg_0[] = {51, -81, -85, -25, 11, -65, 61, -75, 45, -16, -79, -32, -128, 67, -94, 85, -44, 68, -41, -46, -1, 45, -77, -6, 2, -67, -117, 81, 107, -100, 27, -35, 98, 96, 121, -29, 101, -83, 49, 89, -12, -67, -124, -99, -128, -112, 70, -70, -96, -81, -61, -24, 106, 104, 120, 51, 27, 83, -47, 98, 8, -94, 97, 48, -72, -56, -70, 52, 97, -42, 94, -116, -26, 56, 99};
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
    msg.setTimeStamp(0.6026174982404146);
    msg.setSource(49061U);
    msg.setSourceEntity(16U);
    msg.setDestination(32099U);
    msg.setDestinationEntity(248U);
    msg.source.assign("RZMRQDJENCVZPEMJBPNTOTRYSDVBK");
    const char tmp_msg_0[] = {64, 3, 30, 11, -125, -86, 50, 83, -75, 92, 64, -1, 115, -85, -117, 101, 68, 46, -87, 19, -6, -75, -66, 15, 91, 109, -99, 4, 74, 83, 71, -90, 116, 20, 64, 80, 106, -88, 74, 31, -91, 104, 50, 53, 2, 21, 85, 93, -37, -123, 84, 23, 55, 67, -109, 116, -68, -59, 5, -18, -32, -114, -100, -128, -58, -83, 69, 78, 24, -126, -108, -37, 15, -22, -69, 91, 69, -123, -108, 116, 106, -80, 22, 122, 6, -40};
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
    msg.setTimeStamp(0.921604701241189);
    msg.setSource(59095U);
    msg.setSourceEntity(191U);
    msg.setDestination(10069U);
    msg.setDestinationEntity(15U);
    msg.seq = 2618490606U;
    msg.state = 224U;
    msg.error.assign("ZSKWNGUXHESDQRWDWCAYBXNLROBRMQBPMETLBOZXNDQIIYRMGZYEOYYQZLICONYLFIKOPWJIUMQVGGXYDTJNFSDTNPBDASNVMQVJLTVARSALPXYTQCIXVMUKOTXKXHOPKMOJHRUDGEAQTOJHKNWGHBJYVFIXSCFGW");

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
    msg.setTimeStamp(0.8082101247670855);
    msg.setSource(4009U);
    msg.setSourceEntity(87U);
    msg.setDestination(52879U);
    msg.setDestinationEntity(190U);
    msg.seq = 864569777U;
    msg.state = 146U;
    msg.error.assign("IJIDPFVSYDXGUWIXSYOCERCOIHHRICNFMGSFAZFOPJKHHWYUSDMHWCFFCPTOCYTZSERHCDGEUIAOMJRQWZYIQQZYQZWIPJJVEEZGASNGGRTZOPDINJZULZDRELWKXDVUMTDOALACXMABUKRQKFTFCCQWPHBSTMWLSBUQPUFKLLJURVEHMVKTNYEBTSYNXGBVXTAQBEKXGRMQLPBWOHKLXNQWOXKLKYBDZJU");

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
    msg.setTimeStamp(0.4299876854927609);
    msg.setSource(4899U);
    msg.setSourceEntity(7U);
    msg.setDestination(8717U);
    msg.setDestinationEntity(92U);
    msg.seq = 2451151095U;
    msg.state = 113U;
    msg.error.assign("FBHGNTSDUZEFYQKQXQPUFSMHTIVCTXCITBVMOUOYNPXPPPNZIGRQTBUSMAEDFARRNKRNRWIQZRBTHOLHUQTLOZDHQABMLYBZSKWEXMCXEVFMNZLVPKLIUDPVSECJRFDVSERJRJGILQJVTWVXODMGRYLGPXQXHZPDLTGAEXLDKMCJFCDEAONJFKNGWIJSPOJCYUYHSOSYIQKKMUKJYMNICHGWDAYBTVHAIBNASOVZEBKLUAHCEZFWFJGXCYWAW");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.2982639477195934);
    msg.setSource(30062U);
    msg.setSourceEntity(189U);
    msg.setDestination(13904U);
    msg.setDestinationEntity(73U);
    msg.id = 140U;
    msg.range = 0.7651317949761053;

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
    msg.setTimeStamp(0.04806458303442118);
    msg.setSource(44288U);
    msg.setSourceEntity(217U);
    msg.setDestination(18653U);
    msg.setDestinationEntity(141U);
    msg.id = 100U;
    msg.range = 0.6953349884099785;

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
    msg.setTimeStamp(0.002325165096170201);
    msg.setSource(30383U);
    msg.setSourceEntity(242U);
    msg.setDestination(15149U);
    msg.setDestinationEntity(62U);
    msg.id = 215U;
    msg.range = 0.3908258378657785;

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
    msg.setTimeStamp(0.270283578532975);
    msg.setSource(14925U);
    msg.setSourceEntity(191U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(223U);
    msg.tx = 136U;
    msg.channel = 117U;
    msg.timer = 16503U;

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
    msg.setTimeStamp(0.07317436116330012);
    msg.setSource(39135U);
    msg.setSourceEntity(37U);
    msg.setDestination(3445U);
    msg.setDestinationEntity(14U);
    msg.tx = 57U;
    msg.channel = 93U;
    msg.timer = 19042U;

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
    msg.setTimeStamp(0.9565903317607858);
    msg.setSource(29641U);
    msg.setSourceEntity(191U);
    msg.setDestination(32856U);
    msg.setDestinationEntity(252U);
    msg.tx = 83U;
    msg.channel = 0U;
    msg.timer = 42258U;

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
    msg.setTimeStamp(0.5141282923080732);
    msg.setSource(28663U);
    msg.setSourceEntity(116U);
    msg.setDestination(43564U);
    msg.setDestinationEntity(118U);
    msg.beacon.assign("JLTWTRFOUHBOBBBDMCYPQVRCHYITBTKRXHDNZIZRSZEHZAPSCZFGNPESHAJVAOYYYYIMXUHCDYHJWRQJYXWVEOHDJCUMPMBNJYUXNFAPOJWMCZUEJYLVILLTBFVIGKDQNLVWHKWEDCTWZAQAQGZQQXFWECPTRFDSMDQXLZRCEVNIUIMBPTDIULKKKB");
    msg.lat = 0.06766430020787273;
    msg.lon = 0.0014451888258049106;
    msg.depth = 0.9008310387875726;
    msg.query_channel = 78U;
    msg.reply_channel = 170U;
    msg.transponder_delay = 143U;

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
    msg.setTimeStamp(0.4536627110067667);
    msg.setSource(17742U);
    msg.setSourceEntity(210U);
    msg.setDestination(38094U);
    msg.setDestinationEntity(194U);
    msg.beacon.assign("PCUJMLBXOIUHXLPRZXJJRTQACRMQMOLNOTIJNMIRSDKSDKVBHRUIETOQTGAYVDGOCSBSSVGZGPQPDVIYHNVYORUYZPFTOMAWWYQQVSHJHDJQRI");
    msg.lat = 0.7829355082056311;
    msg.lon = 0.6563944878130267;
    msg.depth = 0.093122317781408;
    msg.query_channel = 150U;
    msg.reply_channel = 207U;
    msg.transponder_delay = 34U;

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
    msg.setTimeStamp(0.6904624272354467);
    msg.setSource(45198U);
    msg.setSourceEntity(84U);
    msg.setDestination(59391U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("MMJTOZLCCBWUKALFNZGRPHXHULIIDJEKIEVLDENKYTSMMFIRZARONOZKIBFASPJFWPIXXSHJSPRRXIMDRBOHTYUFNQEGQM");
    msg.lat = 0.4038995212373445;
    msg.lon = 0.8711243593125595;
    msg.depth = 0.9958071520895162;
    msg.query_channel = 83U;
    msg.reply_channel = 3U;
    msg.transponder_delay = 58U;

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
    msg.setTimeStamp(0.7902192793522785);
    msg.setSource(26504U);
    msg.setSourceEntity(253U);
    msg.setDestination(31943U);
    msg.setDestinationEntity(19U);
    msg.op = 167U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UQKYPLEFASZARGZDGBJFHYFRXYWTQEWBVJYULJCYPRSSMDHJVXMDWGUENERZUZQUBKLFQRFWIXEZHPMLCVLSZCAYPMRHICAVQOBJNZPQFYRBSKDQLGUTSLVGMEDCBPZONANUTOPDTFJKAMVUVOOMEBWKYGMVEXLBRXSIAJIZCO");
    tmp_msg_0.lat = 0.9573954801465758;
    tmp_msg_0.lon = 0.7005070037165951;
    tmp_msg_0.depth = 0.33316495155600767;
    tmp_msg_0.query_channel = 11U;
    tmp_msg_0.reply_channel = 241U;
    tmp_msg_0.transponder_delay = 199U;
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
    msg.setTimeStamp(0.9186970227565552);
    msg.setSource(14564U);
    msg.setSourceEntity(248U);
    msg.setDestination(52977U);
    msg.setDestinationEntity(86U);
    msg.op = 151U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZFRZAKOJNDZQMZRXAHHORLCTFBQDYYWFJVBOUMYCFODQVVBIDXECPXENBKJPZGOAXUZTGYWSINXJNZJQPADXHMGKMSISYHLXFYICNUAGINIAVOXAEUBRSCKLIENKKCGRBRHCUPGLVSDOEUNTOL");
    tmp_msg_0.lat = 0.8516898083803068;
    tmp_msg_0.lon = 0.22629966469737772;
    tmp_msg_0.depth = 0.023666686261168857;
    tmp_msg_0.query_channel = 176U;
    tmp_msg_0.reply_channel = 251U;
    tmp_msg_0.transponder_delay = 238U;
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
    msg.setTimeStamp(0.250214060429675);
    msg.setSource(40397U);
    msg.setSourceEntity(204U);
    msg.setDestination(5266U);
    msg.setDestinationEntity(136U);
    msg.op = 60U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RQCIBUXKACCXXPWKYGIXKBCOSGWUCMKGMSLUQGMTZYYGQZFTTPCESETEPVZEYASHADUGDNANHROVHFFCUDEIIBOJFXSXYKLVCEGLKGBJRJYAMNFVWWJDUJPKZXBFMPNOJGVUTHEJTONLOKHSQXPRJASQOWIQBMBMEWWRPFZCLERHNHAVNZFDIIZHDDZVVZARLLRNAJOMBFPOHIV");
    tmp_msg_0.lat = 0.7096152233889913;
    tmp_msg_0.lon = 0.6906951598184904;
    tmp_msg_0.depth = 0.046566802564576015;
    tmp_msg_0.query_channel = 105U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 60U;
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
    msg.setTimeStamp(0.10169634643657433);
    msg.setSource(14806U);
    msg.setSourceEntity(48U);
    msg.setDestination(56342U);
    msg.setDestinationEntity(173U);
    msg.address = 43U;

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
    msg.setTimeStamp(0.06965646025485517);
    msg.setSource(18176U);
    msg.setSourceEntity(78U);
    msg.setDestination(50758U);
    msg.setDestinationEntity(149U);
    msg.address = 124U;

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
    msg.setTimeStamp(0.5860995844379708);
    msg.setSource(27249U);
    msg.setSourceEntity(195U);
    msg.setDestination(10299U);
    msg.setDestinationEntity(215U);
    msg.address = 238U;

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
    msg.setTimeStamp(0.1030991737230248);
    msg.setSource(47498U);
    msg.setSourceEntity(31U);
    msg.setDestination(51521U);
    msg.setDestinationEntity(58U);
    msg.address = 99U;
    msg.status = 144U;
    msg.range = 0.6436378271906463;

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
    msg.setTimeStamp(0.8217033189696076);
    msg.setSource(58566U);
    msg.setSourceEntity(70U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(175U);
    msg.address = 8U;
    msg.status = 214U;
    msg.range = 0.1000869673141267;

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
    msg.setTimeStamp(0.5624604393726591);
    msg.setSource(43333U);
    msg.setSourceEntity(103U);
    msg.setDestination(47947U);
    msg.setDestinationEntity(159U);
    msg.address = 64U;
    msg.status = 224U;
    msg.range = 0.1049886316004115;

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
    msg.setTimeStamp(0.714822730035987);
    msg.setSource(7629U);
    msg.setSourceEntity(115U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(76U);
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.2456420131325252;
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
    msg.setTimeStamp(0.8291302206027282);
    msg.setSource(30367U);
    msg.setSourceEntity(252U);
    msg.setDestination(45276U);
    msg.setDestinationEntity(199U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.08205363698286405;
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
    msg.setTimeStamp(0.6225394884683529);
    msg.setSource(61271U);
    msg.setSourceEntity(176U);
    msg.setDestination(18120U);
    msg.setDestinationEntity(54U);
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 113U;
    tmp_msg_0.label.assign("CFBAZRDQBEEVMNJRAXUKKLPITJSZZHXIPBBJUILEZPAXWGYVONVLQXJTGQSKVRUJIPCHNKBPNVFCOGMDEBRUVOKYFOZWYJF");
    tmp_msg_0.component.assign("IOJBURQVIGHONYORVHNMAGLYTMDSGKGCDRIRDFOEZFXXWSULMQKATDUNBDEVVYLRIEYMZPMCWLCRTFZNBZLUUIQFHAISWMJTGTAKCTQGLPSQXOFOEXNEWUAUJCVJAPGDFIXQFMZDQ");
    tmp_msg_0.act_time = 40390U;
    tmp_msg_0.deact_time = 47762U;
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
    msg.setTimeStamp(0.8629728334407202);
    msg.setSource(58137U);
    msg.setSourceEntity(229U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(19U);
    msg.enable = 59U;

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
    msg.setTimeStamp(0.28158322418902926);
    msg.setSource(32576U);
    msg.setSourceEntity(202U);
    msg.setDestination(2908U);
    msg.setDestinationEntity(3U);
    msg.enable = 13U;

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
    msg.setTimeStamp(0.8966291471768674);
    msg.setSource(19847U);
    msg.setSourceEntity(67U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(238U);
    msg.enable = 212U;

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
    msg.setTimeStamp(0.7778510325159921);
    msg.setSource(18957U);
    msg.setSourceEntity(12U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(100U);
    msg.summary = 191U;
    msg.level = 182U;

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
    msg.setTimeStamp(0.16573405651597972);
    msg.setSource(17511U);
    msg.setSourceEntity(175U);
    msg.setDestination(47774U);
    msg.setDestinationEntity(231U);
    msg.summary = 10U;
    msg.level = 182U;

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
    msg.setTimeStamp(0.5132954115133918);
    msg.setSource(16441U);
    msg.setSourceEntity(26U);
    msg.setDestination(57730U);
    msg.setDestinationEntity(6U);
    msg.summary = 62U;
    msg.level = 90U;

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
    msg.setTimeStamp(0.3911989948906811);
    msg.setSource(45536U);
    msg.setSourceEntity(107U);
    msg.setDestination(51157U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.5031171703585164);
    msg.setSource(2360U);
    msg.setSourceEntity(250U);
    msg.setDestination(63047U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.43255657842475004);
    msg.setSource(10383U);
    msg.setSourceEntity(31U);
    msg.setDestination(59127U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.31844126573981646);
    msg.setSource(34894U);
    msg.setSourceEntity(108U);
    msg.setDestination(25185U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.463372243381873);
    msg.setSource(31663U);
    msg.setSourceEntity(81U);
    msg.setDestination(53777U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.026087214318571195);
    msg.setSource(53239U);
    msg.setSourceEntity(144U);
    msg.setDestination(17455U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.6129142772227466);
    msg.setSource(27555U);
    msg.setSourceEntity(109U);
    msg.setDestination(3433U);
    msg.setDestinationEntity(154U);
    msg.op = 39U;
    msg.system.assign("FQEJXHTSCRIIQVAHBWAHHPCQYVICYHQSTEGEMLVTRBKMJHOONKGJUIRLMYAUTZLKBBDZQSWMHTNJWFSDWOKCSPEUVZOJTYYDRUCHYHSJREZTFTRQDIPMAOGGPUNLSJXRJFFPAMYXPEOWYIZYMKPBEWUWUTFDGWZZQWKCUKNNBLTDAVDFIOFZLFXCDECRQBBVLIJABVAGUEXVKOSFANRQXXVGDMYKVNMNINCPLCIHLQMOORPKE");
    msg.range = 0.18597031227737304;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 194U;
    tmp_msg_0.mask = 1892198201U;
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
    msg.setTimeStamp(0.31729531080963924);
    msg.setSource(5330U);
    msg.setSourceEntity(218U);
    msg.setDestination(61842U);
    msg.setDestinationEntity(181U);
    msg.op = 17U;
    msg.system.assign("OVTYVPVJIMOYMASCFKKLVWRFIYGUQN");
    msg.range = 0.001848363417484511;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("WEKFJRQQJNXJQKZOZBSYDERSBXOQZVIEZTLILJISGHQEPIAHY");
    tmp_msg_0.state = 68U;
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
    msg.setTimeStamp(0.000816999657771933);
    msg.setSource(33828U);
    msg.setSourceEntity(127U);
    msg.setDestination(42171U);
    msg.setDestinationEntity(208U);
    msg.op = 57U;
    msg.system.assign("UPQHPMXFHOPIXOEJTLCYXGDKUWIHKUFZTTJUOXUMSJNSXQFQZ");
    msg.range = 0.8014181690675132;
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
    msg.setTimeStamp(0.9383310589368259);
    msg.setSource(5803U);
    msg.setSourceEntity(158U);
    msg.setDestination(54213U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.9047211373495646);
    msg.setSource(16879U);
    msg.setSourceEntity(210U);
    msg.setDestination(63767U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.30383467180832113);
    msg.setSource(49654U);
    msg.setSourceEntity(84U);
    msg.setDestination(16844U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.07364341638144334);
    msg.setSource(46891U);
    msg.setSourceEntity(129U);
    msg.setDestination(43057U);
    msg.setDestinationEntity(20U);
    msg.list.assign("HCSYZBUOTPWPEFXSJNHNZDWEUCPVOOBOIXSUSTJTIJZXSKSDUJARCOMIVVLDATNJWGEVCYZVTLAFUPYAMKAQYMVMPXUQRWDAAUCAGOOFDQMYKRNESNJBHPIQLK");

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
    msg.setTimeStamp(0.02160233791206745);
    msg.setSource(40388U);
    msg.setSourceEntity(243U);
    msg.setDestination(64371U);
    msg.setDestinationEntity(90U);
    msg.list.assign("HFBUVONJLXOHZUHIVMQDYOQFAATVKSJEWZOGLUINGTXGYUMTVPNDXPLZUGJXQLLLLJWJ");

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
    msg.setTimeStamp(0.7208946115423251);
    msg.setSource(47155U);
    msg.setSourceEntity(233U);
    msg.setDestination(1543U);
    msg.setDestinationEntity(113U);
    msg.list.assign("DCIFHJOKIASFDBFXDJAGTRJCIYVCCA");

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
    msg.setTimeStamp(0.7094448614063301);
    msg.setSource(33104U);
    msg.setSourceEntity(212U);
    msg.setDestination(56553U);
    msg.setDestinationEntity(163U);
    msg.value = 26524;

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
    msg.setTimeStamp(0.053477649539090844);
    msg.setSource(5609U);
    msg.setSourceEntity(175U);
    msg.setDestination(23755U);
    msg.setDestinationEntity(218U);
    msg.value = -16863;

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
    msg.setTimeStamp(0.9853836851999513);
    msg.setSource(30046U);
    msg.setSourceEntity(188U);
    msg.setDestination(13213U);
    msg.setDestinationEntity(165U);
    msg.value = 25440;

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
    msg.setTimeStamp(0.9136358231854858);
    msg.setSource(8251U);
    msg.setSourceEntity(212U);
    msg.setDestination(12912U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9812677980109803;

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
    msg.setTimeStamp(0.7208299864392236);
    msg.setSource(48101U);
    msg.setSourceEntity(59U);
    msg.setDestination(5612U);
    msg.setDestinationEntity(175U);
    msg.value = 0.4444345919595034;

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
    msg.setTimeStamp(0.9722354867097398);
    msg.setSource(22467U);
    msg.setSourceEntity(179U);
    msg.setDestination(6111U);
    msg.setDestinationEntity(26U);
    msg.value = 0.768165642676071;

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
    msg.setTimeStamp(0.5673735299425535);
    msg.setSource(9977U);
    msg.setSourceEntity(62U);
    msg.setDestination(49020U);
    msg.setDestinationEntity(112U);
    msg.value = 0.205424203676705;

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
    msg.setTimeStamp(0.6211579662423233);
    msg.setSource(29923U);
    msg.setSourceEntity(234U);
    msg.setDestination(36653U);
    msg.setDestinationEntity(109U);
    msg.value = 0.2718293626477025;

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
    msg.setTimeStamp(0.3386012179662503);
    msg.setSource(5127U);
    msg.setSourceEntity(129U);
    msg.setDestination(4148U);
    msg.setDestinationEntity(221U);
    msg.value = 0.16287605420028262;

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
    msg.setTimeStamp(0.7575493122281243);
    msg.setSource(63836U);
    msg.setSourceEntity(184U);
    msg.setDestination(47181U);
    msg.setDestinationEntity(184U);
    msg.validity = 22678U;
    msg.type = 107U;
    msg.utc_year = 1159U;
    msg.utc_month = 63U;
    msg.utc_day = 26U;
    msg.utc_time = 0.23736934711515845;
    msg.lat = 0.9543645697193841;
    msg.lon = 0.9980066644917843;
    msg.height = 0.23328297313812207;
    msg.satellites = 134U;
    msg.cog = 0.06075473956389055;
    msg.sog = 0.6527494924935641;
    msg.hdop = 0.6273503058687148;
    msg.vdop = 0.0017141936141370495;
    msg.hacc = 0.5233099007848997;
    msg.vacc = 0.41380928901289316;

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
    msg.setTimeStamp(0.8961047231175694);
    msg.setSource(20646U);
    msg.setSourceEntity(115U);
    msg.setDestination(13333U);
    msg.setDestinationEntity(51U);
    msg.validity = 24341U;
    msg.type = 40U;
    msg.utc_year = 61991U;
    msg.utc_month = 153U;
    msg.utc_day = 210U;
    msg.utc_time = 0.8405648297670049;
    msg.lat = 0.19850176153765065;
    msg.lon = 0.913160216802647;
    msg.height = 0.08510748876532837;
    msg.satellites = 170U;
    msg.cog = 0.21300522787993315;
    msg.sog = 0.6349131860495524;
    msg.hdop = 0.04662531251751523;
    msg.vdop = 0.30813615679437445;
    msg.hacc = 0.864774031850191;
    msg.vacc = 0.7030359660382118;

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
    msg.setTimeStamp(0.5682710798215806);
    msg.setSource(58610U);
    msg.setSourceEntity(153U);
    msg.setDestination(22844U);
    msg.setDestinationEntity(248U);
    msg.validity = 48086U;
    msg.type = 129U;
    msg.utc_year = 39562U;
    msg.utc_month = 16U;
    msg.utc_day = 45U;
    msg.utc_time = 0.13040589156819005;
    msg.lat = 0.7434158660299995;
    msg.lon = 0.49924828670061083;
    msg.height = 0.08605455130573392;
    msg.satellites = 108U;
    msg.cog = 0.35688867705017946;
    msg.sog = 0.5859865473897694;
    msg.hdop = 0.20318648335908995;
    msg.vdop = 0.19125988351584366;
    msg.hacc = 0.12624144713265495;
    msg.vacc = 0.6740400375312507;

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
    msg.setTimeStamp(0.44747915674303873);
    msg.setSource(30527U);
    msg.setSourceEntity(214U);
    msg.setDestination(42301U);
    msg.setDestinationEntity(90U);
    msg.time = 0.7839042243740114;
    msg.phi = 0.006178237244464202;
    msg.theta = 0.1536122186202039;
    msg.psi = 0.8959002958283853;
    msg.psi_magnetic = 0.06565957199154382;

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
    msg.setTimeStamp(0.7212472045787114);
    msg.setSource(33913U);
    msg.setSourceEntity(33U);
    msg.setDestination(42215U);
    msg.setDestinationEntity(200U);
    msg.time = 0.470912240092787;
    msg.phi = 0.9889194858407291;
    msg.theta = 0.3699148657869189;
    msg.psi = 0.28389453907482165;
    msg.psi_magnetic = 0.3921291407710261;

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
    msg.setTimeStamp(0.9702396976499702);
    msg.setSource(60694U);
    msg.setSourceEntity(42U);
    msg.setDestination(34779U);
    msg.setDestinationEntity(54U);
    msg.time = 0.27295234392986834;
    msg.phi = 0.600957131772134;
    msg.theta = 0.5793357331386821;
    msg.psi = 0.2844364288857819;
    msg.psi_magnetic = 0.4431261716047258;

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
    msg.setTimeStamp(0.35744516760593803);
    msg.setSource(24382U);
    msg.setSourceEntity(109U);
    msg.setDestination(25094U);
    msg.setDestinationEntity(121U);
    msg.time = 0.3432118401568939;
    msg.x = 0.7082542605635037;
    msg.y = 0.7323675140242767;
    msg.z = 0.2421677862431042;
    msg.timestep = 0.5674335451132902;

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
    msg.setTimeStamp(0.4683840593986702);
    msg.setSource(31447U);
    msg.setSourceEntity(1U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(182U);
    msg.time = 0.09128777836280888;
    msg.x = 0.3921432576828223;
    msg.y = 0.8551293801972562;
    msg.z = 0.8258395251488397;
    msg.timestep = 0.5558836759165883;

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
    msg.setTimeStamp(0.49820402464333624);
    msg.setSource(37494U);
    msg.setSourceEntity(175U);
    msg.setDestination(28476U);
    msg.setDestinationEntity(2U);
    msg.time = 0.20553768865035282;
    msg.x = 0.472424035792246;
    msg.y = 0.6962788943407667;
    msg.z = 0.8174879764181253;
    msg.timestep = 0.17547165499787343;

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
    msg.setTimeStamp(0.29093886668559676);
    msg.setSource(17802U);
    msg.setSourceEntity(141U);
    msg.setDestination(46807U);
    msg.setDestinationEntity(191U);
    msg.time = 0.4616697413134796;
    msg.x = 0.659459661010789;
    msg.y = 0.9921286647177571;
    msg.z = 0.6105255401607067;

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
    msg.setTimeStamp(0.391320374711444);
    msg.setSource(57655U);
    msg.setSourceEntity(40U);
    msg.setDestination(45246U);
    msg.setDestinationEntity(231U);
    msg.time = 0.8640382502158149;
    msg.x = 0.6867081294928178;
    msg.y = 0.5651604102755472;
    msg.z = 0.053019889876223636;

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
    msg.setTimeStamp(0.9542262825188559);
    msg.setSource(2852U);
    msg.setSourceEntity(118U);
    msg.setDestination(33625U);
    msg.setDestinationEntity(43U);
    msg.time = 0.820195212683056;
    msg.x = 0.2597241027617905;
    msg.y = 0.4350445619773877;
    msg.z = 0.024452886636891713;

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
    msg.setTimeStamp(0.19811476785853244);
    msg.setSource(52891U);
    msg.setSourceEntity(151U);
    msg.setDestination(57853U);
    msg.setDestinationEntity(29U);
    msg.time = 0.5161623430075333;
    msg.x = 0.42874832653650996;
    msg.y = 0.28522224513800076;
    msg.z = 0.9339534207963684;

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
    msg.setTimeStamp(0.9980961034967889);
    msg.setSource(52429U);
    msg.setSourceEntity(45U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(254U);
    msg.time = 0.48981551510127086;
    msg.x = 0.11385350463191068;
    msg.y = 0.5707161832093703;
    msg.z = 0.42114118580646576;

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
    msg.setTimeStamp(0.6056376347634547);
    msg.setSource(21680U);
    msg.setSourceEntity(124U);
    msg.setDestination(35795U);
    msg.setDestinationEntity(8U);
    msg.time = 0.9139587970573995;
    msg.x = 0.45955119851041004;
    msg.y = 0.5139059540804608;
    msg.z = 0.42543818162192293;

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
    msg.setTimeStamp(0.5742044213270936);
    msg.setSource(15927U);
    msg.setSourceEntity(99U);
    msg.setDestination(46219U);
    msg.setDestinationEntity(244U);
    msg.time = 0.1327646323656878;
    msg.x = 0.734201719512811;
    msg.y = 0.9030839927389223;
    msg.z = 0.5737398872671402;

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
    msg.setTimeStamp(0.158727175221544);
    msg.setSource(58212U);
    msg.setSourceEntity(28U);
    msg.setDestination(34425U);
    msg.setDestinationEntity(14U);
    msg.time = 0.4190614608796287;
    msg.x = 0.6504670733486432;
    msg.y = 0.699203887735669;
    msg.z = 0.28701968221088825;

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
    msg.setTimeStamp(0.1323965224531155);
    msg.setSource(13479U);
    msg.setSourceEntity(133U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(21U);
    msg.time = 0.4855608668691216;
    msg.x = 0.8844634658720065;
    msg.y = 0.24877137201925903;
    msg.z = 0.06348422797660791;

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
    msg.setTimeStamp(0.7500632401136261);
    msg.setSource(284U);
    msg.setSourceEntity(234U);
    msg.setDestination(33192U);
    msg.setDestinationEntity(44U);
    msg.validity = 96U;
    msg.x = 0.596139091548481;
    msg.y = 0.8839638096832656;
    msg.z = 0.8652706906254988;

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
    msg.setTimeStamp(0.968947715145906);
    msg.setSource(37639U);
    msg.setSourceEntity(178U);
    msg.setDestination(62621U);
    msg.setDestinationEntity(107U);
    msg.validity = 14U;
    msg.x = 0.4781578432252329;
    msg.y = 0.6719616898944522;
    msg.z = 0.9136336036550199;

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
    msg.setTimeStamp(0.5347759937351777);
    msg.setSource(52997U);
    msg.setSourceEntity(217U);
    msg.setDestination(57267U);
    msg.setDestinationEntity(232U);
    msg.validity = 51U;
    msg.x = 0.7926562782871999;
    msg.y = 0.16124192453394215;
    msg.z = 0.6988808459805607;

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
    msg.setTimeStamp(0.6139689492293936);
    msg.setSource(43669U);
    msg.setSourceEntity(178U);
    msg.setDestination(5321U);
    msg.setDestinationEntity(43U);
    msg.validity = 131U;
    msg.x = 0.07528298273876133;
    msg.y = 0.639285313184296;
    msg.z = 0.2912956379787274;

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
    msg.setTimeStamp(0.8441123055833561);
    msg.setSource(12684U);
    msg.setSourceEntity(129U);
    msg.setDestination(16630U);
    msg.setDestinationEntity(179U);
    msg.validity = 196U;
    msg.x = 0.22511724155417712;
    msg.y = 0.36721526337085086;
    msg.z = 0.3288630878588389;

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
    msg.setTimeStamp(0.15466936111275864);
    msg.setSource(3720U);
    msg.setSourceEntity(92U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(14U);
    msg.validity = 209U;
    msg.x = 0.3552718010401682;
    msg.y = 0.48107654757349283;
    msg.z = 0.9396781451995112;

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
    msg.setTimeStamp(0.9353519033572979);
    msg.setSource(13898U);
    msg.setSourceEntity(59U);
    msg.setDestination(38519U);
    msg.setDestinationEntity(44U);
    msg.time = 0.06513260472062032;
    msg.x = 0.2011401960506194;
    msg.y = 0.62096308300093;
    msg.z = 0.2937919218003645;

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
    msg.setTimeStamp(0.9299837733851878);
    msg.setSource(29593U);
    msg.setSourceEntity(250U);
    msg.setDestination(49086U);
    msg.setDestinationEntity(36U);
    msg.time = 0.8683187150556048;
    msg.x = 0.15642912601681014;
    msg.y = 0.12081465848189432;
    msg.z = 0.470078315822568;

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
    msg.setTimeStamp(0.1553557723192125);
    msg.setSource(12184U);
    msg.setSourceEntity(126U);
    msg.setDestination(19073U);
    msg.setDestinationEntity(251U);
    msg.time = 0.5675438952237737;
    msg.x = 0.21940081927084998;
    msg.y = 0.16159401807612228;
    msg.z = 0.03199734022436773;

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
    msg.setTimeStamp(0.6401435443240088);
    msg.setSource(10643U);
    msg.setSourceEntity(113U);
    msg.setDestination(59278U);
    msg.setDestinationEntity(222U);
    msg.validity = 81U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.08556280901853852;
    tmp_msg_0.y = 0.05663264166843729;
    tmp_msg_0.z = 0.18806020144453095;
    tmp_msg_0.phi = 0.7226801324905973;
    tmp_msg_0.theta = 0.7026973131964658;
    tmp_msg_0.psi = 0.2817855357883541;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9521788331225592;
    tmp_msg_1.beam_height = 0.2530270198111627;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5472340757522057;

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
    msg.setTimeStamp(0.9400620327653862);
    msg.setSource(441U);
    msg.setSourceEntity(198U);
    msg.setDestination(52388U);
    msg.setDestinationEntity(7U);
    msg.validity = 27U;
    msg.value = 0.19041708840624005;

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
    msg.setTimeStamp(0.775440234388379);
    msg.setSource(39974U);
    msg.setSourceEntity(97U);
    msg.setDestination(39780U);
    msg.setDestinationEntity(125U);
    msg.validity = 187U;
    msg.value = 0.12665332490012549;

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
    msg.setTimeStamp(0.6797017223296619);
    msg.setSource(62642U);
    msg.setSourceEntity(218U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(178U);
    msg.value = 0.10723425364148909;

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
    msg.setTimeStamp(0.3324716063791757);
    msg.setSource(64159U);
    msg.setSourceEntity(46U);
    msg.setDestination(35163U);
    msg.setDestinationEntity(8U);
    msg.value = 0.606171338263527;

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
    msg.setTimeStamp(0.03809712010373045);
    msg.setSource(49554U);
    msg.setSourceEntity(139U);
    msg.setDestination(11220U);
    msg.setDestinationEntity(241U);
    msg.value = 0.7532118937480741;

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
    msg.setTimeStamp(0.7887288938834272);
    msg.setSource(12318U);
    msg.setSourceEntity(55U);
    msg.setDestination(22623U);
    msg.setDestinationEntity(197U);
    msg.value = 0.07239003673898836;

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
    msg.setTimeStamp(0.2497579394514412);
    msg.setSource(43145U);
    msg.setSourceEntity(218U);
    msg.setDestination(11209U);
    msg.setDestinationEntity(16U);
    msg.value = 0.6948126981739388;

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
    msg.setTimeStamp(0.09743905652513851);
    msg.setSource(29889U);
    msg.setSourceEntity(198U);
    msg.setDestination(26220U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6314933930752613;

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
    msg.setTimeStamp(0.23258776374565404);
    msg.setSource(12675U);
    msg.setSourceEntity(234U);
    msg.setDestination(9776U);
    msg.setDestinationEntity(57U);
    msg.value = 0.8353863237902068;

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
    msg.setTimeStamp(0.5876654651491793);
    msg.setSource(62277U);
    msg.setSourceEntity(203U);
    msg.setDestination(48878U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9964771310893453;

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
    msg.setTimeStamp(0.013310611006443374);
    msg.setSource(10604U);
    msg.setSourceEntity(114U);
    msg.setDestination(37071U);
    msg.setDestinationEntity(39U);
    msg.value = 0.9872924348083866;

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
    msg.setTimeStamp(0.46710599790120144);
    msg.setSource(31781U);
    msg.setSourceEntity(79U);
    msg.setDestination(40604U);
    msg.setDestinationEntity(141U);
    msg.value = 0.7499037121493579;

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
    msg.setTimeStamp(0.3792508862349321);
    msg.setSource(51689U);
    msg.setSourceEntity(232U);
    msg.setDestination(50575U);
    msg.setDestinationEntity(3U);
    msg.value = 0.4689782396746651;

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
    msg.setTimeStamp(0.5873979670083677);
    msg.setSource(35955U);
    msg.setSourceEntity(62U);
    msg.setDestination(31255U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8918760884203801;

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
    msg.setTimeStamp(0.8477360248004366);
    msg.setSource(3345U);
    msg.setSourceEntity(31U);
    msg.setDestination(65031U);
    msg.setDestinationEntity(62U);
    msg.value = 0.15060091833442213;

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
    msg.setTimeStamp(0.5349716091041143);
    msg.setSource(41368U);
    msg.setSourceEntity(214U);
    msg.setDestination(33603U);
    msg.setDestinationEntity(229U);
    msg.value = 0.23634479784201345;

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
    msg.setTimeStamp(0.002811310810047818);
    msg.setSource(36748U);
    msg.setSourceEntity(47U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(67U);
    msg.value = 0.947824146698591;

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
    msg.setTimeStamp(0.6390600399195945);
    msg.setSource(48262U);
    msg.setSourceEntity(124U);
    msg.setDestination(27521U);
    msg.setDestinationEntity(119U);
    msg.value = 0.13631634780874213;

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
    msg.setTimeStamp(0.5033364927673623);
    msg.setSource(50390U);
    msg.setSourceEntity(126U);
    msg.setDestination(13974U);
    msg.setDestinationEntity(204U);
    msg.value = 0.35819431815957825;

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
    msg.setTimeStamp(0.10847008643317191);
    msg.setSource(57845U);
    msg.setSourceEntity(237U);
    msg.setDestination(19382U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5246665711917985;

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
    msg.setTimeStamp(0.7856469618969626);
    msg.setSource(24471U);
    msg.setSourceEntity(210U);
    msg.setDestination(24171U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8202289810560361;

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
    msg.setTimeStamp(0.8747615788796624);
    msg.setSource(32134U);
    msg.setSourceEntity(243U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(251U);
    msg.value = 0.459287871621596;

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
    msg.setTimeStamp(0.1748913130474895);
    msg.setSource(55356U);
    msg.setSourceEntity(252U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(27U);
    msg.value = 0.16559705697249683;

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
    msg.setTimeStamp(0.2372057474974264);
    msg.setSource(42401U);
    msg.setSourceEntity(103U);
    msg.setDestination(39788U);
    msg.setDestinationEntity(37U);
    msg.value = 0.7408891801071265;

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
    msg.setTimeStamp(0.6742822711223246);
    msg.setSource(15088U);
    msg.setSourceEntity(92U);
    msg.setDestination(1252U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6230468466401118;

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
    msg.setTimeStamp(0.684877497363846);
    msg.setSource(29052U);
    msg.setSourceEntity(240U);
    msg.setDestination(39167U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7171770795411604;

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
    msg.setTimeStamp(0.5590470424604974);
    msg.setSource(35854U);
    msg.setSourceEntity(238U);
    msg.setDestination(64544U);
    msg.setDestinationEntity(87U);
    msg.direction = 0.48496772969710156;
    msg.speed = 0.3101149519516303;

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
    msg.setTimeStamp(0.5293392528623474);
    msg.setSource(55987U);
    msg.setSourceEntity(160U);
    msg.setDestination(24840U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.05088883181714654;
    msg.speed = 0.9760804033147295;

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
    msg.setTimeStamp(0.5454374768618662);
    msg.setSource(51174U);
    msg.setSourceEntity(141U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(3U);
    msg.direction = 0.0025836628026051356;
    msg.speed = 0.28818232644095165;

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
    msg.setTimeStamp(0.03209188211710601);
    msg.setSource(44153U);
    msg.setSourceEntity(188U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6510075912991629;

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
    msg.setTimeStamp(0.7931354737616234);
    msg.setSource(39893U);
    msg.setSourceEntity(108U);
    msg.setDestination(36654U);
    msg.setDestinationEntity(207U);
    msg.value = 0.25142744891713253;

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
    msg.setTimeStamp(0.14968250795302773);
    msg.setSource(27464U);
    msg.setSourceEntity(81U);
    msg.setDestination(45823U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6328563350190776;

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
    msg.setTimeStamp(0.03180866643344393);
    msg.setSource(31179U);
    msg.setSourceEntity(0U);
    msg.setDestination(21427U);
    msg.setDestinationEntity(60U);
    msg.value.assign("HRUDCMUKADYMBFFYHWGZHSTBWTLGBDKWKJDFHZRJARMYZEJNSMOIXBDOKXRRIRPQRGFJBZGMVOXNYEPJUTABWXALHOEFAVYIXWH");

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
    msg.setTimeStamp(0.23800477341162307);
    msg.setSource(63823U);
    msg.setSourceEntity(232U);
    msg.setDestination(50188U);
    msg.setDestinationEntity(93U);
    msg.value.assign("IUJBWOEGCWOSGPQOMYFVUAAYJMKLBYDVXWVETLGDQKBKHDFFNPEWIOVMTRZTXEYLTMOTDAHHRIPCNHGSCAYAHZIDUIUTQRYSZPRDNLEQKKCHUXBKBXGSXSMKXJBEEKPTDGRGRMFPALZIWMLWFPXINFAGUODVQIJKNLSFWVNJLUABQRMOPZVCTFWJRYRVZDPUAYNXLMJTSZWBZMGUIQZCLXHE");

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
    msg.setTimeStamp(0.051057564651415865);
    msg.setSource(59300U);
    msg.setSourceEntity(56U);
    msg.setDestination(7664U);
    msg.setDestinationEntity(65U);
    msg.value.assign("TCJXVLAUMENQWBSWDTCURBKKYNECWLQPOBJTUWIEAMVONJGWFCDXADVOMNKFUUPGAFVSMQSWZGTQJLIUFIKXUWPVCJPSLPHPVLXCHJQWDZMCIXPSBXLHSULMKDOPDOVSJEAUMGIHHJYJYV");

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
    msg.setTimeStamp(0.15986023198956856);
    msg.setSource(56240U);
    msg.setSourceEntity(87U);
    msg.setDestination(48517U);
    msg.setDestinationEntity(190U);
    const char tmp_msg_0[] = {66, -76, 119, 38, 51, 112, -91, -43, -101, 30, -30, 14, -104, 57, -97, 80, -26, -7, -37, -75, 20, -105, -109, 83, -92, -57, -78, -8, 72, 53, 97, 88, 76, -34, -112, 62, -44, -11, 78, 78, 93, 88, 25, 78, 77, 103, 108, 48, -102, -11, 90, 1, 47, -3, -111, 45, 107, -30, 80, 104, -111, -81, 15, 89, -99, -111, -87, -1, 30, -108, -98, -20, 6, 11, 13, 30, 15, 77, -98, -109, 113, 41, 93, 62, -104, -66, 62, -41, 40, 55, -31, 67, 19, -111, -100, -28, 9, 40, -46, 32, 77, -56, -48, 68, -38, -29, 60, -68, -18, -66, -13, 60, -91, -32, 25, -48, -65, -106, -37, -3, -81, -85, -99, -6, 34, -122, 47, -25, 25, -100, 45, 0, 81, 57, 76, -55, 37, 28, 109, -52, -90, -30, -7, 22, -128, 121, 116, -10, 34, -9, 16, 94, 32, 82, 68, 52, -86, -121, -25, 97, -60, 121, 12, -83, 96, -94, 8, -107, -104, 63, -62, 52, -78, -36, -31, 73, -93, 63, -52, -35, 75, 108, -107, 17, -35, -45, 71, 125, -66, 87, -19, 105, -99, 43, 38, 116, -72, 79, -19, 90, -118, -46, -44, 76, 41, 13};
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
    msg.setTimeStamp(0.03213894915253479);
    msg.setSource(30210U);
    msg.setSourceEntity(247U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(231U);
    const char tmp_msg_0[] = {71, 99, 8, 47, -88, -100, 109, -94, -110, 126, 33, -28, 33, -55, -91, -49, -72, 82, 31, -76, 100, 17, 37, -85, 7, 126, -82, -98, 92, 96, 104, -122, 117, 121, -90, -64, 39, -114, 42, 67, 46, -42, 115, -74, 3, -15, -33, -96, -97, -2, 59, -93, 86, -54, -96, 100, -56, -95, 96, -122, 54, 27, -11, -20, 15, 11, 68, -17, -8, 108, -96, -3, 67, -14, 120, -105, 18, -119, 25, 103, 14, -82, -92, -113, -21, -29, 21, 38, 85, -93, 22, -35, -72, 7, -8, 115, -18, 23, -19, -42, 59, -98, -115, -37, -6, -13, 88, 99, 36, -108, 101, -47, -32, -61, -7, 46, 36, 82, 42, 65, -65, -12, 103, -70, 56, -49, 12, -33, -59, 67, 102, -18, 121, 63, -3, -25, 105, -70, -16, -55, 52, -40, 39, -43, -105, -117, 25, -55, 118, 36, 33, 48, 22, 34, 70, 38};
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
    msg.setTimeStamp(0.6786704716281888);
    msg.setSource(4086U);
    msg.setSourceEntity(221U);
    msg.setDestination(49270U);
    msg.setDestinationEntity(44U);
    const char tmp_msg_0[] = {-40, 67, -71, 109, 56, -24, -72, 79, -65, -95, 17, 107, -15, 11, 107, 98, 35, 49, 22, 81, -92, -30, 121, -34, -127, 20, -54, 59, -49, -41, 101, 42, -49, 20, 108, 85, 47, -126, 45, -62, -57, -112, 13, 124, -126, -45, -28, -90, -34, 79, -67, -67, 43, -18, 60, 58, -18, -51, 25, -3, 125, -118, 48, -122, 0, 66, 56, 121, 57, -20, -30, -34, 63, 16, 93, 52, -7, 47, 110, 99, 71, -61, -48, 97, -15, -33, 58, -27, 55, 96, 102, 82, 39, -1, 97, -74, -11, -48, -27, 84, -17, 31, 29, 113, 50, -63, -7, 55, -120, -96};
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
    msg.setTimeStamp(0.5451459687318556);
    msg.setSource(54351U);
    msg.setSourceEntity(206U);
    msg.setDestination(45224U);
    msg.setDestinationEntity(6U);
    msg.frequency = 860635993U;
    msg.min_range = 50231U;
    msg.max_range = 53246U;

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
    msg.setTimeStamp(0.04185911064833381);
    msg.setSource(63648U);
    msg.setSourceEntity(131U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(175U);
    msg.frequency = 2109307547U;
    msg.min_range = 31942U;
    msg.max_range = 13608U;

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
    msg.setTimeStamp(0.47141194783990137);
    msg.setSource(51782U);
    msg.setSourceEntity(232U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(226U);
    msg.frequency = 380074314U;
    msg.min_range = 34747U;
    msg.max_range = 23987U;

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
    msg.setTimeStamp(0.6822929640115715);
    msg.setSource(37705U);
    msg.setSourceEntity(193U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(90U);
    msg.type = 171U;
    msg.frequency = 3989287100U;
    msg.min_range = 57538U;
    msg.max_range = 38243U;
    msg.bits_per_point = 191U;
    msg.scale_factor = 0.21021964475475585;
    const char tmp_msg_0[] = {114, 70, -69, -29, -97, -3, 118, -17, -31, 51, -82, 97, -84, 77, 100, 26, -126, -74, 30, -111, -109, 108, -43, -71, -87, -11, 79, -4, 13, 49, 4, -105, 57, 104, -78, -57, -70, 63, -37, 92, -68, 18, -98, 116, -92, -110, 69, 2, -38, -80, 15, -82, -63, -25, 39, 117, -47, 75, -68, 66, 103, 68, 103, 122, 1, -36, 30, 83, -46, -18};
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
    msg.setTimeStamp(0.9174568886403889);
    msg.setSource(56132U);
    msg.setSourceEntity(130U);
    msg.setDestination(41226U);
    msg.setDestinationEntity(136U);
    msg.type = 86U;
    msg.frequency = 2609125518U;
    msg.min_range = 21046U;
    msg.max_range = 27256U;
    msg.bits_per_point = 236U;
    msg.scale_factor = 0.9790507341295616;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6618304040623575;
    tmp_msg_0.beam_height = 0.9705920677192428;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-109, -92, 74, 70, 1, 101, 29, 113, -4, 50, 49, 126, -41, -123, -118, -40, 120, 109, -72, -128, -50, -73, 83, 72, -6, -37, -86, 95, -69, -96, 102, -15, -67, -29, -34, -40, -5, -20, 4, -120, -1, 86, 19, 29, 42, -60, 64, -90, 46, 77, -105, -4, -71, -91, -8, -29, 41, -78, 66, 126, 11, -82, 2, 30, 51, -57, -17, 96, 8, -80, -91, 95, 61, -31, -56, 50, -54, 108, -53, -64, 110, 76, 63, 1, 3, -126, -37, 45, 58, -75, -50, -69, -30, -61, -20, -118, -70, -109, 86, 68, -117, -128, -123, 80, -33, 24, 34, 96, 84, -103, 85, -118, -39, -110, -45, -27, 64, 74, -106, -104, -105, -69, 14, -75, 100, -114, -62, -124, 93, 90, -102, -17, -55, 6, -77, 7, -115, -19, -88, 46, -4, 31, 37, 92, -23, 1, -96, -109, -122, -109, 50, -26, -95, -17, 101, -28, 85, -25, -50, -54, -85, -20, 39, -41, 90, -119, 35, 37, 72, -109, 105, 94, 94, 31, 21, 53, 25, -118, 112, 80, -46, 109, -62, -106, 39, 115, 46, 95, 31, -67, 17, 54, -109, 41, -16, -47, 87, 1, -96, 39, -61, -111, -102, 90, 21, 75};
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
    msg.setTimeStamp(0.5006218882000139);
    msg.setSource(49516U);
    msg.setSourceEntity(90U);
    msg.setDestination(15111U);
    msg.setDestinationEntity(200U);
    msg.type = 191U;
    msg.frequency = 352328949U;
    msg.min_range = 42103U;
    msg.max_range = 55393U;
    msg.bits_per_point = 70U;
    msg.scale_factor = 0.5399919272028741;
    const char tmp_msg_0[] = {22, 86, -21, 101, -98, 75, -51, 52, 48, 104, 77, 86, -110, 30, -59, -72, -125, -44, 114, -118, -97, -15, -68, -11, 66, 12, -91, 60, -3, 32, 51, -34, -28, 8, 47, -120, 43, -69, 16, -30, 76, 3, -62, 62, -117, 26, 50, 37, -126, -22, 64, 6, -73, -108, 30, -44, 9, 65, -37, -81, -78, -77, -64, 64, -101, -123, -114, -30, -98, -96, -40, 111, -47, 93, -52, -77, -50, 92, 7, -2, -78, 10, -124, 78, -74, -98, 58, 98, 12, 31, -16, 35, 0, -31, 41, -71, -7, -34, 110, 42, 103, -31, -12, 56, 3};
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
    msg.setTimeStamp(0.2664187578407401);
    msg.setSource(41641U);
    msg.setSourceEntity(54U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.5571078285160851);
    msg.setSource(20560U);
    msg.setSourceEntity(241U);
    msg.setDestination(13172U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.7606534850505087);
    msg.setSource(19541U);
    msg.setSourceEntity(130U);
    msg.setDestination(59190U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.07773829094822837);
    msg.setSource(59117U);
    msg.setSourceEntity(124U);
    msg.setDestination(14178U);
    msg.setDestinationEntity(187U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.3984106623596799);
    msg.setSource(32798U);
    msg.setSourceEntity(127U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(8U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.5101927675296796);
    msg.setSource(34727U);
    msg.setSourceEntity(81U);
    msg.setDestination(62099U);
    msg.setDestinationEntity(141U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.44427485112231646);
    msg.setSource(43224U);
    msg.setSourceEntity(24U);
    msg.setDestination(41212U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9388753012088304;
    msg.confidence = 0.18505793146462712;
    msg.opmodes.assign("KFXYMMPZLQMBUISWVUOBFOPMYHXVFZNVCKELSAGURYLYTRRTUXGNIQTNCOJGAJFQLDOEZQELBIGTPCKWNVXSKZAEXHHJRWLGZDRMINSGJNDFFFMSSVLWHOMRXYG");

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
    msg.setTimeStamp(0.9404002688508483);
    msg.setSource(17036U);
    msg.setSourceEntity(141U);
    msg.setDestination(21207U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5115762408144424;
    msg.confidence = 0.21855827421390872;
    msg.opmodes.assign("MPJWAMRFCIYVKDXHUPZUJANYNMGBWWSODLWXUVLJZCJDBRLVSSYWTHFEKGAOGRMXXVYIOUZQGZBSZUILBJTZPKLQWUEMNHKFMGFBLBRKYEFFO");

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
    msg.setTimeStamp(0.15925996447097424);
    msg.setSource(28346U);
    msg.setSourceEntity(154U);
    msg.setDestination(49066U);
    msg.setDestinationEntity(175U);
    msg.value = 0.41011405675895685;
    msg.confidence = 0.21443346354353;
    msg.opmodes.assign("MZIKAVRNXTJDEBVWDGSHTIAKWZUBHPRMYLUEUMTQJFJCVBKZDOPIXRRCYLVCYOMLGFLUBHCJORLNZSHSTJRUDVWNMBWNFIGVZUNCAIGXJHULFRYNMYAZPCDPIQEIKDQLCYXWQYTHXEIDCUSTYOVJKWVFNWFMCGQGR");

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
    msg.setTimeStamp(0.4801528732048925);
    msg.setSource(59431U);
    msg.setSourceEntity(36U);
    msg.setDestination(19348U);
    msg.setDestinationEntity(224U);
    msg.itow = 2210000733U;
    msg.lat = 0.7615467460207507;
    msg.lon = 0.5989595951048063;
    msg.height_ell = 0.27161338716464156;
    msg.height_sea = 0.5886478468075276;
    msg.hacc = 0.7844426297660813;
    msg.vacc = 0.7461084355801609;
    msg.vel_n = 0.5914513953266223;
    msg.vel_e = 0.7978488440445451;
    msg.vel_d = 0.5528373465898603;
    msg.speed = 0.7983467908497001;
    msg.gspeed = 0.15793201919906674;
    msg.heading = 0.9277646721222123;
    msg.sacc = 0.22108734026178256;
    msg.cacc = 0.3656819411389395;

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
    msg.setTimeStamp(0.6028542176513486);
    msg.setSource(25347U);
    msg.setSourceEntity(87U);
    msg.setDestination(51006U);
    msg.setDestinationEntity(162U);
    msg.itow = 964394993U;
    msg.lat = 0.5967261336226996;
    msg.lon = 0.8441632504538137;
    msg.height_ell = 0.8821273158019729;
    msg.height_sea = 0.5323599126730028;
    msg.hacc = 0.9394289533865617;
    msg.vacc = 0.5517335623746413;
    msg.vel_n = 0.004334863382158383;
    msg.vel_e = 0.5901160547520503;
    msg.vel_d = 0.8797929924158346;
    msg.speed = 0.5666209728534841;
    msg.gspeed = 0.5514856203534457;
    msg.heading = 0.4754152706348018;
    msg.sacc = 0.9693790220112727;
    msg.cacc = 0.6298394256299644;

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
    msg.setTimeStamp(0.3584606393501867);
    msg.setSource(50388U);
    msg.setSourceEntity(125U);
    msg.setDestination(20223U);
    msg.setDestinationEntity(191U);
    msg.itow = 539491684U;
    msg.lat = 0.1430104255647734;
    msg.lon = 0.042864437992379045;
    msg.height_ell = 0.051600918515293026;
    msg.height_sea = 0.5631153172385343;
    msg.hacc = 0.574390515898786;
    msg.vacc = 0.6346415833771405;
    msg.vel_n = 0.025997296515473445;
    msg.vel_e = 0.8783829143823957;
    msg.vel_d = 0.019521342646829476;
    msg.speed = 0.7819951447843728;
    msg.gspeed = 0.9524979869447517;
    msg.heading = 0.6550214663565302;
    msg.sacc = 0.8139496994418656;
    msg.cacc = 0.5011665311944423;

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
    msg.setTimeStamp(0.7142864931365638);
    msg.setSource(47552U);
    msg.setSourceEntity(128U);
    msg.setDestination(2284U);
    msg.setDestinationEntity(150U);
    msg.id = 197U;
    msg.value = 0.7280262266193317;

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
    msg.setTimeStamp(0.1121806513810154);
    msg.setSource(35993U);
    msg.setSourceEntity(214U);
    msg.setDestination(42238U);
    msg.setDestinationEntity(44U);
    msg.id = 2U;
    msg.value = 0.0419512123927267;

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
    msg.setTimeStamp(0.6965681699712258);
    msg.setSource(47891U);
    msg.setSourceEntity(197U);
    msg.setDestination(18421U);
    msg.setDestinationEntity(139U);
    msg.id = 139U;
    msg.value = 0.4285042911248502;

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
    msg.setTimeStamp(0.3551055209706039);
    msg.setSource(52880U);
    msg.setSourceEntity(159U);
    msg.setDestination(7197U);
    msg.setDestinationEntity(218U);
    msg.x = 0.283084788399964;
    msg.y = 0.08798274908821124;
    msg.z = 0.7377907037633904;
    msg.phi = 0.9129554148693829;
    msg.theta = 0.3978918793684698;
    msg.psi = 0.11561700462441349;

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
    msg.setTimeStamp(0.6343060909670831);
    msg.setSource(5964U);
    msg.setSourceEntity(228U);
    msg.setDestination(65053U);
    msg.setDestinationEntity(105U);
    msg.x = 0.19935683539208482;
    msg.y = 0.2899641270066181;
    msg.z = 0.188112885093369;
    msg.phi = 0.30719637587779125;
    msg.theta = 0.9938338930745682;
    msg.psi = 0.7618754948594201;

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
    msg.setTimeStamp(0.5389453236712896);
    msg.setSource(4513U);
    msg.setSourceEntity(45U);
    msg.setDestination(5929U);
    msg.setDestinationEntity(53U);
    msg.x = 0.3539368092773819;
    msg.y = 0.4466124649855855;
    msg.z = 0.5059023629958034;
    msg.phi = 0.6056223412384337;
    msg.theta = 0.7265394457349487;
    msg.psi = 0.617246634305032;

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
    msg.setTimeStamp(0.8043200710230896);
    msg.setSource(15570U);
    msg.setSourceEntity(90U);
    msg.setDestination(31856U);
    msg.setDestinationEntity(214U);
    msg.beam_width = 0.6484118427580049;
    msg.beam_height = 0.08466178081738951;

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
    msg.setTimeStamp(0.09874662870287831);
    msg.setSource(22041U);
    msg.setSourceEntity(116U);
    msg.setDestination(3495U);
    msg.setDestinationEntity(36U);
    msg.beam_width = 0.6314596093003573;
    msg.beam_height = 0.2995502598096442;

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
    msg.setTimeStamp(0.01224743506745185);
    msg.setSource(37624U);
    msg.setSourceEntity(161U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(33U);
    msg.beam_width = 0.9347487869129597;
    msg.beam_height = 0.6660311626339227;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7030430550585983);
    msg.setSource(21706U);
    msg.setSourceEntity(101U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(75U);
    msg.id = 62U;
    msg.zoom = 10U;
    msg.action = 57U;

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
    msg.setTimeStamp(0.11122028530176553);
    msg.setSource(6954U);
    msg.setSourceEntity(124U);
    msg.setDestination(31144U);
    msg.setDestinationEntity(0U);
    msg.id = 177U;
    msg.zoom = 153U;
    msg.action = 76U;

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
    msg.setTimeStamp(0.40401434732357056);
    msg.setSource(42590U);
    msg.setSourceEntity(158U);
    msg.setDestination(27363U);
    msg.setDestinationEntity(113U);
    msg.id = 168U;
    msg.zoom = 117U;
    msg.action = 20U;

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
    msg.setTimeStamp(0.25184714486618953);
    msg.setSource(46026U);
    msg.setSourceEntity(244U);
    msg.setDestination(993U);
    msg.setDestinationEntity(223U);
    msg.id = 131U;
    msg.value = 0.026612474487426763;

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
    msg.setTimeStamp(0.4994099562069636);
    msg.setSource(41903U);
    msg.setSourceEntity(37U);
    msg.setDestination(27158U);
    msg.setDestinationEntity(60U);
    msg.id = 116U;
    msg.value = 0.6674182381682306;

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
    msg.setTimeStamp(0.2804254959818342);
    msg.setSource(8043U);
    msg.setSourceEntity(154U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(193U);
    msg.id = 3U;
    msg.value = 0.5633629443761934;

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
    msg.setTimeStamp(0.9195420056527976);
    msg.setSource(64289U);
    msg.setSourceEntity(2U);
    msg.setDestination(59880U);
    msg.setDestinationEntity(94U);
    msg.id = 83U;
    msg.value = 0.28473972339697307;

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
    msg.setTimeStamp(0.48804165215118944);
    msg.setSource(410U);
    msg.setSourceEntity(136U);
    msg.setDestination(39362U);
    msg.setDestinationEntity(221U);
    msg.id = 70U;
    msg.value = 0.02270070945608349;

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
    msg.setTimeStamp(0.6586913767839722);
    msg.setSource(18821U);
    msg.setSourceEntity(148U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(81U);
    msg.id = 221U;
    msg.value = 0.6655948304764895;

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
    msg.setTimeStamp(0.5142555729687494);
    msg.setSource(51978U);
    msg.setSourceEntity(117U);
    msg.setDestination(6901U);
    msg.setDestinationEntity(45U);
    msg.id = 75U;
    msg.angle = 0.10103749604487666;

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
    msg.setTimeStamp(0.41781578679568665);
    msg.setSource(50684U);
    msg.setSourceEntity(130U);
    msg.setDestination(6981U);
    msg.setDestinationEntity(171U);
    msg.id = 113U;
    msg.angle = 0.4711557462940168;

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
    msg.setTimeStamp(0.5013151860315618);
    msg.setSource(45156U);
    msg.setSourceEntity(133U);
    msg.setDestination(37664U);
    msg.setDestinationEntity(161U);
    msg.id = 37U;
    msg.angle = 0.47698076353586405;

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
    msg.setTimeStamp(0.6853166733823391);
    msg.setSource(24783U);
    msg.setSourceEntity(223U);
    msg.setDestination(18813U);
    msg.setDestinationEntity(31U);
    msg.op = 97U;
    msg.actions.assign("EAPODBHYLNLGCTFDSIKKTHYEZMAUXGWKIELZEZXSWOQJWAECSWLCQUECOBDJOAOWITBWPMPLPTRKKQWVYQGUSNTRHVWYFKVYGZUGVZYURMHOXMUSRJBYABRXPJQBRHTXYEDQLUNVFNVJLJXZSANODZZFFJSPHWFUMMSTAVXDINWHKUMDLFYNGBQIKISSIBFRJJBDCTZHQXLPVHMVDG");

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
    msg.setTimeStamp(0.4662812400175228);
    msg.setSource(54000U);
    msg.setSourceEntity(8U);
    msg.setDestination(62142U);
    msg.setDestinationEntity(21U);
    msg.op = 218U;
    msg.actions.assign("HTMWHRKAATAVCXNOFJRFYMSCIRAMOGNMMICQEQPUNVUILTWQLBAZKBAGMFZJFZASULQHSFFIWFXSSGECYYEKN");

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
    msg.setTimeStamp(0.35119024287490586);
    msg.setSource(37554U);
    msg.setSourceEntity(162U);
    msg.setDestination(16298U);
    msg.setDestinationEntity(182U);
    msg.op = 188U;
    msg.actions.assign("HIRSHNTRTVJODCTRLYSQKEWSWKGMFNPLDJEPZUYVXVYAGBASCOMDEWEPOWGKOWYSYQUYNNRZSWQQHSQJLT");

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
    msg.setTimeStamp(0.22694241236847168);
    msg.setSource(38707U);
    msg.setSourceEntity(134U);
    msg.setDestination(29611U);
    msg.setDestinationEntity(242U);
    msg.actions.assign("ESASKHWVVGYTRLRQTMZQCKLXVIEMJPMSDNHIGPNDHGDKWOHQCTMPRSUIRYQQFCZULTWXUTTKENNUKGQBVBZAFFTIYWPRWVCXRKJJOFJMMUOYNKIUZULLINN");

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
    msg.setTimeStamp(0.17421792006285497);
    msg.setSource(49581U);
    msg.setSourceEntity(43U);
    msg.setDestination(17962U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("ZIYTCASCKPXOKOUPMM");

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
    msg.setTimeStamp(0.3427215524774576);
    msg.setSource(42206U);
    msg.setSourceEntity(116U);
    msg.setDestination(51493U);
    msg.setDestinationEntity(172U);
    msg.actions.assign("JYRUQBWFVYHKHVEZLEIUHIKGGIZWCSF");

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
    msg.setTimeStamp(0.303424807938923);
    msg.setSource(46812U);
    msg.setSourceEntity(65U);
    msg.setDestination(35760U);
    msg.setDestinationEntity(130U);
    msg.button = 166U;
    msg.value = 33U;

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
    msg.setTimeStamp(0.3923982946078848);
    msg.setSource(55710U);
    msg.setSourceEntity(84U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(237U);
    msg.button = 77U;
    msg.value = 82U;

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
    msg.setTimeStamp(0.8094604805583752);
    msg.setSource(1770U);
    msg.setSourceEntity(2U);
    msg.setDestination(47547U);
    msg.setDestinationEntity(14U);
    msg.button = 166U;
    msg.value = 44U;

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
    msg.setTimeStamp(0.4417003198955328);
    msg.setSource(52814U);
    msg.setSourceEntity(192U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(74U);
    msg.op = 192U;
    msg.text.assign("WEIZWPLBNXUCCJRFQHPLESNGWWB");

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
    msg.setTimeStamp(0.2933424635095102);
    msg.setSource(48163U);
    msg.setSourceEntity(216U);
    msg.setDestination(41056U);
    msg.setDestinationEntity(246U);
    msg.op = 199U;
    msg.text.assign("VOWFQDEMCGBRKSHRCUTEZWEIAOBDQIPDOVGLZPJJGSXRCALWDRRNKIYUKUFXLJAQNTUNBKGMTAXVDPFYNYFYARZNMDMMPHSABFPZDLPWSHIWXBYKQKSGXCERGKNUFKTVZLNLEHIGOVHTXNEFHZTWJLJIQCZVYUOESOHRAWYMXVBTXLIFARCKZCEDZVTWUTNYUDPXSBYKWWIESHJBAPVQJHPRQOFOGLCGCDQAOJQ");

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
    msg.setTimeStamp(0.0741947700001877);
    msg.setSource(45276U);
    msg.setSourceEntity(125U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(24U);
    msg.op = 245U;
    msg.text.assign("CVBTJZKUHVOPYVGATRMOIXDAIKKUXEWZIONNARUDNVRADIXXNCEBPSQZHJZYGQJWKRQLNROCEEAFPQGPEUKMHFNTOLKTMBTCBFWYCHUDKRNUTVYXGHHQLSMLYIZWEBMPVNULYSMFPSSSEGZMYAWWSQAGIFDCXKCBFFLXJIBWDJMNGBCJVYCM");

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
    msg.setTimeStamp(0.07260369858963389);
    msg.setSource(64580U);
    msg.setSourceEntity(89U);
    msg.setDestination(31428U);
    msg.setDestinationEntity(222U);
    msg.op = 196U;
    msg.time_remain = 0.6492625964741251;
    msg.sched_time = 0.5981520650515965;

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
    msg.setTimeStamp(0.7594961009183592);
    msg.setSource(55936U);
    msg.setSourceEntity(147U);
    msg.setDestination(38336U);
    msg.setDestinationEntity(75U);
    msg.op = 37U;
    msg.time_remain = 0.9264408915465581;
    msg.sched_time = 0.38468372755804237;

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
    msg.setTimeStamp(0.6293959748879778);
    msg.setSource(28154U);
    msg.setSourceEntity(234U);
    msg.setDestination(50858U);
    msg.setDestinationEntity(91U);
    msg.op = 178U;
    msg.time_remain = 0.8514000550804081;
    msg.sched_time = 0.23063450227453774;

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
    msg.setTimeStamp(0.38489351375065683);
    msg.setSource(58914U);
    msg.setSourceEntity(93U);
    msg.setDestination(7588U);
    msg.setDestinationEntity(35U);
    msg.name.assign("SIKHAACTMEGRNZEQZIYJHRGXIDKFAJOZTSQLGTRBREIZSSGXSVLSCEEORASTUXYXZDVOWFMPBGRTQFBHDJVPMVUQKYKVFTYHVJCYLYVKZDDHEJMHBIABVTJRLWLGYYAVKXZRUALPWYDXIUGFWXUPWFYHGTNBFPNQSPNIDWCIGNDWJQFDQOOUAS");
    msg.op = 221U;
    msg.sched_time = 0.05582208670533473;

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
    msg.setTimeStamp(0.697635038731945);
    msg.setSource(6729U);
    msg.setSourceEntity(151U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(83U);
    msg.name.assign("FHKUUSVQGXVGAKTUYCRWBJTYKGVNJGMFORCPDPJJRWEYWESVBUATEWZXLJXBYHJZNCCGDHMNRDGRAQHHPTKADOQOZISVZHFJYXPRDPBDVXBMGWM");
    msg.op = 41U;
    msg.sched_time = 0.63043426415953;

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
    msg.setTimeStamp(0.746572623234607);
    msg.setSource(24793U);
    msg.setSourceEntity(213U);
    msg.setDestination(6255U);
    msg.setDestinationEntity(101U);
    msg.name.assign("BAYFURORGMNCEKAEUNMWLYPNVHAFVKRBEXIUGSQBGXMIWCDCFMAOFWNFTUAMXAOPRKIDDVGRQGPKNQHBTQXCZPSHFFLMSYGJHMTIRPCCKTPKRZRXBYEZSKTWGEOJYTJNNBWEHHZFYQIEMLWDZYRVQHNOUTDCSANWOUVSFLJBCZDKIGWUGTFSQSVAPJXZP");
    msg.op = 163U;
    msg.sched_time = 0.9430309044561721;

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
    msg.setTimeStamp(0.7777191263841916);
    msg.setSource(55193U);
    msg.setSourceEntity(232U);
    msg.setDestination(7612U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.8744225238284719);
    msg.setSource(63060U);
    msg.setSourceEntity(237U);
    msg.setDestination(37771U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.1794054576535391);
    msg.setSource(23730U);
    msg.setSourceEntity(231U);
    msg.setDestination(22556U);
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
    msg.setTimeStamp(0.06663411359066596);
    msg.setSource(57243U);
    msg.setSourceEntity(226U);
    msg.setDestination(58109U);
    msg.setDestinationEntity(39U);
    msg.name.assign("YWYPLVHJFDJZZKQPVG");
    msg.state = 251U;

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
    msg.setTimeStamp(0.4923590047964015);
    msg.setSource(42971U);
    msg.setSourceEntity(162U);
    msg.setDestination(37315U);
    msg.setDestinationEntity(158U);
    msg.name.assign("NBOWABJVQRJZYQGIWCUAMAEJZFUGIHQFVONENXPFQNMPJOWFRLKFRKOXAIPLCEPPVGLMLCIEHBDOLSINJTSJSKMHBNSTRKLPXKWIVUSMZKZUDYTDKIPSOQRYEP");
    msg.state = 150U;

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
    msg.setTimeStamp(0.6714191682529123);
    msg.setSource(53518U);
    msg.setSourceEntity(151U);
    msg.setDestination(7048U);
    msg.setDestinationEntity(223U);
    msg.name.assign("TJUBITMHLDOQIBPUTXQGJILUIGKVNLEKEUEVASOHWMWMLKRCQSNBHITKGKYOURZRZJJFAFHXHAFWXDKPGWGMYCXNBOBJACTNQSVBEWHXXRPFAT");
    msg.state = 48U;

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
    IMC::LedControl msg;
    msg.setTimeStamp(0.553504207229564);
    msg.setSource(59233U);
    msg.setSourceEntity(168U);
    msg.setDestination(41362U);
    msg.setDestinationEntity(209U);
    msg.id = 148U;
    msg.op = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.01857865865104913);
    msg.setSource(6881U);
    msg.setSourceEntity(98U);
    msg.setDestination(15222U);
    msg.setDestinationEntity(47U);
    msg.id = 81U;
    msg.op = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.9329160809562586);
    msg.setSource(23931U);
    msg.setSourceEntity(186U);
    msg.setDestination(761U);
    msg.setDestinationEntity(46U);
    msg.id = 163U;
    msg.op = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.32828547366677097);
    msg.setSource(29257U);
    msg.setSourceEntity(180U);
    msg.setDestination(5925U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.09862308017765964;
    msg.lon = 0.31557087414134577;
    msg.height = 0.49443255800339536;
    msg.x = 0.6927609792359226;
    msg.y = 0.08964571800280585;
    msg.z = 0.5093954939480055;
    msg.phi = 0.05125699535598849;
    msg.theta = 0.7637285164697701;
    msg.psi = 0.29933076956829485;
    msg.u = 0.018067619682901714;
    msg.v = 0.38185886153996107;
    msg.w = 0.14326355285774472;
    msg.vx = 0.2464035487320584;
    msg.vy = 0.8465517226536364;
    msg.vz = 0.7491477961340368;
    msg.p = 0.2203493008149472;
    msg.q = 0.2535383286777513;
    msg.r = 0.18083553210660142;
    msg.depth = 0.5761871027052531;
    msg.alt = 0.5956509592447852;

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
    msg.setTimeStamp(0.5492722282157054);
    msg.setSource(24608U);
    msg.setSourceEntity(33U);
    msg.setDestination(11985U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.22141354192180485;
    msg.lon = 0.2374123444757943;
    msg.height = 0.43199508389894237;
    msg.x = 0.5692435082007544;
    msg.y = 0.7779667797138554;
    msg.z = 0.8905522546002211;
    msg.phi = 0.28898513640018897;
    msg.theta = 0.2229880850400724;
    msg.psi = 0.016462397139468177;
    msg.u = 0.417812813712199;
    msg.v = 0.8934921380150318;
    msg.w = 0.19963928442222434;
    msg.vx = 0.6821242825394729;
    msg.vy = 0.29653264562226567;
    msg.vz = 0.08706436442964804;
    msg.p = 0.631217433564635;
    msg.q = 0.16778365776988102;
    msg.r = 0.5946029164061529;
    msg.depth = 0.6644002483761452;
    msg.alt = 0.08683241440962886;

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
    msg.setTimeStamp(0.6536528379377765);
    msg.setSource(14677U);
    msg.setSourceEntity(180U);
    msg.setDestination(46882U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.7713254833007891;
    msg.lon = 0.37033209778409837;
    msg.height = 0.30054246870882895;
    msg.x = 0.9531651778931719;
    msg.y = 0.3013941646581084;
    msg.z = 0.2712545988419499;
    msg.phi = 0.05043460431918867;
    msg.theta = 0.039832531551738826;
    msg.psi = 0.21927637022434354;
    msg.u = 0.26698266548769245;
    msg.v = 0.21302412350805333;
    msg.w = 0.39129815055778594;
    msg.vx = 0.4587125369410495;
    msg.vy = 0.9042095957105586;
    msg.vz = 0.36548240021444667;
    msg.p = 0.9558230480583108;
    msg.q = 0.6219153030800384;
    msg.r = 0.07601105172762768;
    msg.depth = 0.414148527444417;
    msg.alt = 0.5729975708611268;

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
    msg.setTimeStamp(0.6304531788790049);
    msg.setSource(37246U);
    msg.setSourceEntity(216U);
    msg.setDestination(13554U);
    msg.setDestinationEntity(38U);
    msg.x = 0.31708057621883645;
    msg.y = 0.39600429668752746;
    msg.z = 0.8922395985059886;

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
    msg.setTimeStamp(0.554123396601794);
    msg.setSource(42850U);
    msg.setSourceEntity(136U);
    msg.setDestination(30777U);
    msg.setDestinationEntity(245U);
    msg.x = 0.16833646377074696;
    msg.y = 0.3870994191020576;
    msg.z = 0.1647558465964497;

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
    msg.setTimeStamp(0.1599560750127621);
    msg.setSource(21529U);
    msg.setSourceEntity(158U);
    msg.setDestination(43964U);
    msg.setDestinationEntity(19U);
    msg.x = 0.4677363176665552;
    msg.y = 0.9228412579337864;
    msg.z = 0.3218870237498802;

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
    msg.setTimeStamp(0.36251102620956066);
    msg.setSource(52087U);
    msg.setSourceEntity(202U);
    msg.setDestination(14394U);
    msg.setDestinationEntity(84U);
    msg.value = 0.017987583510681415;

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
    msg.setTimeStamp(0.6427023882037444);
    msg.setSource(3553U);
    msg.setSourceEntity(11U);
    msg.setDestination(46538U);
    msg.setDestinationEntity(103U);
    msg.value = 0.8377912716543506;

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
    msg.setTimeStamp(0.03142045460256826);
    msg.setSource(57560U);
    msg.setSourceEntity(174U);
    msg.setDestination(11956U);
    msg.setDestinationEntity(196U);
    msg.value = 0.05037712060171551;

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
    msg.setTimeStamp(0.5745181500614351);
    msg.setSource(47307U);
    msg.setSourceEntity(200U);
    msg.setDestination(8310U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6566637152515267;

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
    msg.setTimeStamp(0.9050220065430589);
    msg.setSource(6491U);
    msg.setSourceEntity(55U);
    msg.setDestination(58667U);
    msg.setDestinationEntity(31U);
    msg.value = 0.6263356117194938;

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
    msg.setTimeStamp(0.20585895451686353);
    msg.setSource(482U);
    msg.setSourceEntity(42U);
    msg.setDestination(3918U);
    msg.setDestinationEntity(135U);
    msg.value = 0.21581160438447344;

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
    msg.setTimeStamp(0.5223089150782582);
    msg.setSource(43504U);
    msg.setSourceEntity(34U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(16U);
    msg.x = 0.94218633879473;
    msg.y = 0.6220117817741179;
    msg.z = 0.5184519957176043;
    msg.phi = 0.8344912040833983;
    msg.theta = 0.14008556049887155;
    msg.psi = 0.95909170879622;
    msg.p = 0.566374224273926;
    msg.q = 0.26378391487073716;
    msg.r = 0.3328910765584626;
    msg.u = 0.9111316124876128;
    msg.v = 0.4146484821056152;
    msg.w = 0.07595025026231927;
    msg.bias_psi = 0.8939232668307953;
    msg.bias_r = 0.658688755282408;

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
    msg.setTimeStamp(0.723132941876557);
    msg.setSource(43970U);
    msg.setSourceEntity(118U);
    msg.setDestination(29968U);
    msg.setDestinationEntity(8U);
    msg.x = 0.17573012621420836;
    msg.y = 0.6833974769705674;
    msg.z = 0.5636341470656883;
    msg.phi = 0.17707714002137454;
    msg.theta = 0.7979649687124789;
    msg.psi = 0.36835065750092577;
    msg.p = 0.2181225880989499;
    msg.q = 0.33609588153524195;
    msg.r = 0.36429364009524;
    msg.u = 0.7249191536588765;
    msg.v = 0.31708352783097016;
    msg.w = 0.03164549313724707;
    msg.bias_psi = 0.36919409010513515;
    msg.bias_r = 0.2740728166345793;

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
    msg.setTimeStamp(0.10170910933362964);
    msg.setSource(61196U);
    msg.setSourceEntity(190U);
    msg.setDestination(55488U);
    msg.setDestinationEntity(150U);
    msg.x = 0.6406704004255303;
    msg.y = 0.1872128987662267;
    msg.z = 0.4677621006708006;
    msg.phi = 0.3382521871518386;
    msg.theta = 0.6979994575810041;
    msg.psi = 0.9398131753790269;
    msg.p = 0.37644642520273097;
    msg.q = 0.28577175277338474;
    msg.r = 0.9564778798706585;
    msg.u = 0.15734693057198212;
    msg.v = 0.3857527416230727;
    msg.w = 0.9537978710621307;
    msg.bias_psi = 0.95307036684066;
    msg.bias_r = 0.0790296842411935;

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
    msg.setTimeStamp(0.8971794625128688);
    msg.setSource(34116U);
    msg.setSourceEntity(115U);
    msg.setDestination(537U);
    msg.setDestinationEntity(18U);
    msg.bias_psi = 0.6750766840937829;
    msg.bias_r = 0.22683074743701293;
    msg.cog = 0.8021574073261312;
    msg.cyaw = 0.3687473684458591;
    msg.lbl_rej_level = 0.9256796963784857;
    msg.gps_rej_level = 0.4101033674504958;
    msg.custom_x = 0.35698883657310376;
    msg.custom_y = 0.7671920101364093;
    msg.custom_z = 0.2450348289322627;

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
    msg.setTimeStamp(0.06856354609479653);
    msg.setSource(39555U);
    msg.setSourceEntity(202U);
    msg.setDestination(24253U);
    msg.setDestinationEntity(95U);
    msg.bias_psi = 0.36480447446720365;
    msg.bias_r = 0.6117088135147601;
    msg.cog = 0.5208355492434691;
    msg.cyaw = 0.5662338414523809;
    msg.lbl_rej_level = 0.8889314287776087;
    msg.gps_rej_level = 0.16984795892912286;
    msg.custom_x = 0.9025652675290387;
    msg.custom_y = 0.051631915479929735;
    msg.custom_z = 0.8390755705168321;

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
    msg.setTimeStamp(0.21418255509129636);
    msg.setSource(6796U);
    msg.setSourceEntity(19U);
    msg.setDestination(48813U);
    msg.setDestinationEntity(18U);
    msg.bias_psi = 0.47571012156268355;
    msg.bias_r = 0.3908750491646019;
    msg.cog = 0.9180799849863194;
    msg.cyaw = 0.658395139128703;
    msg.lbl_rej_level = 0.8015924410974378;
    msg.gps_rej_level = 0.6890984759027097;
    msg.custom_x = 0.5102218830266775;
    msg.custom_y = 0.12307888004419909;
    msg.custom_z = 0.06508966147051409;

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
    msg.setTimeStamp(0.6899711385969769);
    msg.setSource(44270U);
    msg.setSourceEntity(48U);
    msg.setDestination(45486U);
    msg.setDestinationEntity(103U);
    msg.utc_time = 0.5452281834019548;
    msg.reason = 44U;

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
    msg.setTimeStamp(0.23398263102431882);
    msg.setSource(57924U);
    msg.setSourceEntity(41U);
    msg.setDestination(43577U);
    msg.setDestinationEntity(149U);
    msg.utc_time = 0.4662854318592278;
    msg.reason = 7U;

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
    msg.setTimeStamp(0.7334264357459108);
    msg.setSource(28301U);
    msg.setSourceEntity(61U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(86U);
    msg.utc_time = 0.19975280112919924;
    msg.reason = 130U;

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
    msg.setTimeStamp(0.7683018629439572);
    msg.setSource(52968U);
    msg.setSourceEntity(133U);
    msg.setDestination(33982U);
    msg.setDestinationEntity(131U);
    msg.id = 157U;
    msg.range = 0.11083044782331475;
    msg.acceptance = 245U;

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
    msg.setTimeStamp(0.4402630557601914);
    msg.setSource(17148U);
    msg.setSourceEntity(132U);
    msg.setDestination(17684U);
    msg.setDestinationEntity(48U);
    msg.id = 25U;
    msg.range = 0.7190123500257305;
    msg.acceptance = 240U;

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
    msg.setTimeStamp(0.6910501252143073);
    msg.setSource(57203U);
    msg.setSourceEntity(250U);
    msg.setDestination(33754U);
    msg.setDestinationEntity(218U);
    msg.id = 16U;
    msg.range = 0.39463954028073334;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.362123165270563);
    msg.setSource(38062U);
    msg.setSourceEntity(64U);
    msg.setDestination(13453U);
    msg.setDestinationEntity(81U);
    msg.type = 24U;
    msg.reason = 77U;
    msg.value = 0.8544324462132071;
    msg.timestep = 0.1457932372314612;

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
    msg.setTimeStamp(0.17065597359056328);
    msg.setSource(14836U);
    msg.setSourceEntity(102U);
    msg.setDestination(53879U);
    msg.setDestinationEntity(225U);
    msg.type = 193U;
    msg.reason = 46U;
    msg.value = 0.45755720658121035;
    msg.timestep = 0.6687337478356912;

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
    msg.setTimeStamp(0.12515471322283633);
    msg.setSource(41450U);
    msg.setSourceEntity(141U);
    msg.setDestination(4950U);
    msg.setDestinationEntity(83U);
    msg.type = 244U;
    msg.reason = 37U;
    msg.value = 0.9203898946015394;
    msg.timestep = 0.11741988791795643;

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
    msg.setTimeStamp(0.7412611853871983);
    msg.setSource(10884U);
    msg.setSourceEntity(73U);
    msg.setDestination(41464U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.6461076209683515);
    msg.setSource(20431U);
    msg.setSourceEntity(158U);
    msg.setDestination(43607U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.14779214998104095);
    msg.setSource(64666U);
    msg.setSourceEntity(187U);
    msg.setDestination(5447U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.20395267932569017);
    msg.setSource(20158U);
    msg.setSourceEntity(197U);
    msg.setDestination(60004U);
    msg.setDestinationEntity(245U);
    msg.beacon.assign("NMEUUUCBDDWRKJLYCOZHXODNQCPPJHXUMJIZWGBGVEDYFSXUYMNKRGCYELHMIUACKNLELBTUEWXJQPWXYLVMDPKICPMMMCTSZBIJXXIOMTHWG");
    msg.x = 0.0036709710216469293;
    msg.y = 0.4348513881445848;
    msg.depth = 0.39909171063043414;
    msg.var_x = 0.556901785700502;
    msg.var_y = 0.5650324235919835;

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
    msg.setTimeStamp(0.09088418850849045);
    msg.setSource(65003U);
    msg.setSourceEntity(130U);
    msg.setDestination(24883U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("RZPGQPBAUTKWQGJIBRCZGAJLDLZHTLXAMPKTQRFXDBSUTPXOVFEACHJFOOWDANELQWCPTQFSEIIZRMKDVHHOWCCXSVVOBUVAKFTUBEOAVXLYCDDGFJXRSBMTNMHMNUIAUCIBIMEQVMSRVPJTPCFDWLLYKJUZFYYTSHKMMLKITSCANFILNDDZGGENFZKBRJQBYERWXOYWVZUQENWXRPGPSIKGQUVHSXNYHYZWIGYLXOEUCNWAYH");
    msg.x = 0.39901604188332584;
    msg.y = 0.20998469947281995;
    msg.depth = 0.6358070759747646;
    msg.var_x = 0.5698437093884285;
    msg.var_y = 0.6627011873239302;

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
    msg.setTimeStamp(0.12812775756732708);
    msg.setSource(60198U);
    msg.setSourceEntity(66U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("ZWHYJOWYBVWGUIFAFLECQLEMCAAXJGPCLLRTMBTPJUVQBSFXXCDJUYTLMLKKBZI");
    msg.x = 0.0034714820254710954;
    msg.y = 0.7851330790216294;
    msg.depth = 0.1679143309026203;
    msg.var_x = 0.5438252810635531;
    msg.var_y = 0.6473581698303719;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.4986492951155763);
    msg.setSource(61089U);
    msg.setSourceEntity(113U);
    msg.setDestination(19426U);
    msg.setDestinationEntity(69U);
    msg.value = 0.49542410041429186;

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
    msg.setTimeStamp(0.9008753141020615);
    msg.setSource(35310U);
    msg.setSourceEntity(204U);
    msg.setDestination(36902U);
    msg.setDestinationEntity(189U);
    msg.value = 0.3039350747291786;

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
    msg.setTimeStamp(0.6416983847443649);
    msg.setSource(1199U);
    msg.setSourceEntity(59U);
    msg.setDestination(3551U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9437664380954435;

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
    msg.setTimeStamp(0.2244492667769552);
    msg.setSource(11993U);
    msg.setSourceEntity(117U);
    msg.setDestination(54420U);
    msg.setDestinationEntity(78U);
    msg.value = 0.44190766493812184;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.36724145408005415);
    msg.setSource(50697U);
    msg.setSourceEntity(64U);
    msg.setDestination(16988U);
    msg.setDestinationEntity(29U);
    msg.value = 0.7151394218145366;
    msg.z_units = 128U;

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
    msg.setTimeStamp(0.869710935137502);
    msg.setSource(56518U);
    msg.setSourceEntity(162U);
    msg.setDestination(43755U);
    msg.setDestinationEntity(170U);
    msg.value = 0.12072951796188625;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.3076609059429939);
    msg.setSource(33664U);
    msg.setSourceEntity(102U);
    msg.setDestination(18263U);
    msg.setDestinationEntity(137U);
    msg.value = 0.012841986458733579;
    msg.speed_units = 169U;

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
    msg.setTimeStamp(0.2721700014793984);
    msg.setSource(59653U);
    msg.setSourceEntity(113U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(25U);
    msg.value = 0.08938257400720273;
    msg.speed_units = 185U;

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
    msg.setTimeStamp(0.8345349442197393);
    msg.setSource(61887U);
    msg.setSourceEntity(146U);
    msg.setDestination(22939U);
    msg.setDestinationEntity(15U);
    msg.value = 0.610967194536568;
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
    msg.setTimeStamp(0.7568379375034209);
    msg.setSource(7643U);
    msg.setSourceEntity(120U);
    msg.setDestination(39698U);
    msg.setDestinationEntity(134U);
    msg.value = 0.25200906714719595;

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
    msg.setTimeStamp(0.2459428740727052);
    msg.setSource(34523U);
    msg.setSourceEntity(88U);
    msg.setDestination(46561U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7296830947321329;

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
    msg.setTimeStamp(0.35238117842782546);
    msg.setSource(4187U);
    msg.setSourceEntity(168U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(10U);
    msg.value = 0.1084205686870593;

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
    msg.setTimeStamp(0.9426127628927314);
    msg.setSource(59836U);
    msg.setSourceEntity(99U);
    msg.setDestination(9429U);
    msg.setDestinationEntity(85U);
    msg.value = 0.7235466575301502;

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
    msg.setTimeStamp(0.525145755360639);
    msg.setSource(22802U);
    msg.setSourceEntity(23U);
    msg.setDestination(61151U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5711744077040619;

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
    msg.setTimeStamp(0.21314363362899957);
    msg.setSource(58521U);
    msg.setSourceEntity(95U);
    msg.setDestination(18691U);
    msg.setDestinationEntity(54U);
    msg.value = 0.7298201575429762;

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
    msg.setTimeStamp(0.11635110763164225);
    msg.setSource(53350U);
    msg.setSourceEntity(119U);
    msg.setDestination(6581U);
    msg.setDestinationEntity(232U);
    msg.value = 0.029593565941511524;

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
    msg.setTimeStamp(0.8764695504723667);
    msg.setSource(63995U);
    msg.setSourceEntity(245U);
    msg.setDestination(31555U);
    msg.setDestinationEntity(246U);
    msg.value = 0.3167901841072618;

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
    msg.setTimeStamp(0.2187059056435533);
    msg.setSource(53056U);
    msg.setSourceEntity(221U);
    msg.setDestination(10791U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6959372335301779;

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
    msg.setTimeStamp(0.043941899540687834);
    msg.setSource(23160U);
    msg.setSourceEntity(242U);
    msg.setDestination(45691U);
    msg.setDestinationEntity(216U);
    msg.start_lat = 0.8309264728378022;
    msg.start_lon = 0.1225947961960775;
    msg.start_z = 0.5310561621237999;
    msg.start_z_units = 155U;
    msg.end_lat = 0.9785519950972961;
    msg.end_lon = 0.4597355962873576;
    msg.end_z = 0.6956942082904269;
    msg.end_z_units = 101U;
    msg.speed = 0.5473887672691882;
    msg.speed_units = 171U;
    msg.lradius = 0.6739374356923943;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.17498730471105617);
    msg.setSource(26505U);
    msg.setSourceEntity(127U);
    msg.setDestination(58486U);
    msg.setDestinationEntity(21U);
    msg.start_lat = 0.33461304596274966;
    msg.start_lon = 0.04766740812836223;
    msg.start_z = 0.4859796257061765;
    msg.start_z_units = 78U;
    msg.end_lat = 0.7890794798835997;
    msg.end_lon = 0.45506314471795173;
    msg.end_z = 0.6283215768001905;
    msg.end_z_units = 233U;
    msg.speed = 0.35333489953280117;
    msg.speed_units = 77U;
    msg.lradius = 0.5569659312057549;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.26247643820452393);
    msg.setSource(14979U);
    msg.setSourceEntity(241U);
    msg.setDestination(12560U);
    msg.setDestinationEntity(6U);
    msg.start_lat = 0.844418351842317;
    msg.start_lon = 0.1663787245469075;
    msg.start_z = 0.7512348062288629;
    msg.start_z_units = 134U;
    msg.end_lat = 0.8285481355234618;
    msg.end_lon = 0.5315290001374295;
    msg.end_z = 0.9816245523381505;
    msg.end_z_units = 149U;
    msg.speed = 0.9482299334393671;
    msg.speed_units = 45U;
    msg.lradius = 0.941209416620419;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.43768848085665835);
    msg.setSource(33338U);
    msg.setSourceEntity(210U);
    msg.setDestination(4520U);
    msg.setDestinationEntity(88U);
    msg.x = 0.5342133246147732;
    msg.y = 0.5613543474361834;
    msg.z = 0.1507081586629675;
    msg.k = 0.3254143447181479;
    msg.m = 0.9398808725139446;
    msg.n = 0.7840935445450348;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.07549410391041478);
    msg.setSource(53786U);
    msg.setSourceEntity(119U);
    msg.setDestination(58527U);
    msg.setDestinationEntity(14U);
    msg.x = 0.7263253649660958;
    msg.y = 0.015262491328549732;
    msg.z = 0.9205723618788005;
    msg.k = 0.6296727370624573;
    msg.m = 0.510422388620887;
    msg.n = 0.34603924396246877;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.7570296824765647);
    msg.setSource(7490U);
    msg.setSourceEntity(236U);
    msg.setDestination(31755U);
    msg.setDestinationEntity(21U);
    msg.x = 0.5499116229627729;
    msg.y = 0.8671733607542655;
    msg.z = 0.5564000631263744;
    msg.k = 0.609566922944279;
    msg.m = 0.6030709581821497;
    msg.n = 0.3749816441604539;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.7146575278995938);
    msg.setSource(10896U);
    msg.setSourceEntity(26U);
    msg.setDestination(33909U);
    msg.setDestinationEntity(150U);
    msg.value = 0.8714806629805003;

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
    msg.setTimeStamp(0.14855238961451855);
    msg.setSource(3731U);
    msg.setSourceEntity(199U);
    msg.setDestination(24443U);
    msg.setDestinationEntity(35U);
    msg.value = 0.07169484931417569;

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
    msg.setTimeStamp(0.35326160199396694);
    msg.setSource(34461U);
    msg.setSourceEntity(138U);
    msg.setDestination(18642U);
    msg.setDestinationEntity(71U);
    msg.value = 0.03102920441233359;

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
    msg.setTimeStamp(0.35324681630939414);
    msg.setSource(19549U);
    msg.setSourceEntity(240U);
    msg.setDestination(14254U);
    msg.setDestinationEntity(142U);
    msg.u = 0.6549883389567995;
    msg.v = 0.9125754315482559;
    msg.w = 0.29434508576054097;
    msg.p = 0.43148822927577823;
    msg.q = 0.7857115878362569;
    msg.r = 0.20795145995722775;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.1652028852878773);
    msg.setSource(35633U);
    msg.setSourceEntity(41U);
    msg.setDestination(52324U);
    msg.setDestinationEntity(250U);
    msg.u = 0.6812534716311894;
    msg.v = 0.5580291836263543;
    msg.w = 0.7422649453324592;
    msg.p = 0.7921849626977959;
    msg.q = 0.04497580260187195;
    msg.r = 0.9675133847985979;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.9507144444968186);
    msg.setSource(15942U);
    msg.setSourceEntity(246U);
    msg.setDestination(20186U);
    msg.setDestinationEntity(35U);
    msg.u = 0.25689249088608723;
    msg.v = 0.6745940543667501;
    msg.w = 0.26920923009975173;
    msg.p = 0.5716072935164371;
    msg.q = 0.948308390884184;
    msg.r = 0.23214331046709114;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.7592543290666023);
    msg.setSource(51113U);
    msg.setSourceEntity(19U);
    msg.setDestination(59200U);
    msg.setDestinationEntity(111U);
    msg.start_lat = 0.8718871370514897;
    msg.start_lon = 0.028537260619199256;
    msg.start_z = 0.4466743642282377;
    msg.start_z_units = 130U;
    msg.end_lat = 0.10657843725368621;
    msg.end_lon = 0.465218900439177;
    msg.end_z = 0.7949528218244426;
    msg.end_z_units = 227U;
    msg.lradius = 0.5191296642061756;
    msg.flags = 107U;
    msg.x = 0.6922801362327383;
    msg.y = 0.44207792374881716;
    msg.z = 0.35988508457077895;
    msg.vx = 0.7100468516459632;
    msg.vy = 0.5927668385431273;
    msg.vz = 0.13475322708837545;
    msg.course_error = 0.6035702014531726;
    msg.eta = 19847U;

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
    msg.setTimeStamp(0.6475892872358867);
    msg.setSource(40626U);
    msg.setSourceEntity(73U);
    msg.setDestination(41907U);
    msg.setDestinationEntity(109U);
    msg.start_lat = 0.6925731423741143;
    msg.start_lon = 0.622467144623188;
    msg.start_z = 0.7188444989153399;
    msg.start_z_units = 97U;
    msg.end_lat = 0.07665186096271126;
    msg.end_lon = 0.7398356529639587;
    msg.end_z = 0.5048141387906566;
    msg.end_z_units = 86U;
    msg.lradius = 0.47493779228001354;
    msg.flags = 8U;
    msg.x = 0.14025764095582183;
    msg.y = 0.8011146680506838;
    msg.z = 0.15499081294117345;
    msg.vx = 0.6653916905590979;
    msg.vy = 0.5197518927734525;
    msg.vz = 0.274026875412705;
    msg.course_error = 0.032850494911074835;
    msg.eta = 39405U;

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
    msg.setTimeStamp(0.21323048585282134);
    msg.setSource(5302U);
    msg.setSourceEntity(191U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(68U);
    msg.start_lat = 0.9336158429808702;
    msg.start_lon = 0.15920509786860226;
    msg.start_z = 0.6978108288761768;
    msg.start_z_units = 96U;
    msg.end_lat = 0.20940089725140676;
    msg.end_lon = 0.02561391246486866;
    msg.end_z = 0.6724488498065103;
    msg.end_z_units = 90U;
    msg.lradius = 0.7833850646087851;
    msg.flags = 5U;
    msg.x = 0.8053869071288947;
    msg.y = 0.762894757797455;
    msg.z = 0.9277081672198485;
    msg.vx = 0.8441407085314027;
    msg.vy = 0.482618653407359;
    msg.vz = 0.9723270789564498;
    msg.course_error = 0.8985306345224064;
    msg.eta = 49591U;

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
    msg.setTimeStamp(0.4629260211266045);
    msg.setSource(24569U);
    msg.setSourceEntity(92U);
    msg.setDestination(36598U);
    msg.setDestinationEntity(101U);
    msg.k = 0.5008470487508614;
    msg.m = 0.3986176212886562;
    msg.n = 0.1822464801638254;

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
    msg.setTimeStamp(0.8708129338258829);
    msg.setSource(54610U);
    msg.setSourceEntity(238U);
    msg.setDestination(39878U);
    msg.setDestinationEntity(1U);
    msg.k = 0.3433886563672084;
    msg.m = 0.9809018020593683;
    msg.n = 0.3109032570636828;

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
    msg.setTimeStamp(0.47263260806871166);
    msg.setSource(59918U);
    msg.setSourceEntity(50U);
    msg.setDestination(54447U);
    msg.setDestinationEntity(244U);
    msg.k = 0.09202245868864689;
    msg.m = 0.8396152499539915;
    msg.n = 0.7152141191299763;

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
    msg.setTimeStamp(0.3254191843172213);
    msg.setSource(503U);
    msg.setSourceEntity(127U);
    msg.setDestination(43463U);
    msg.setDestinationEntity(83U);
    msg.p = 0.5226145856296996;
    msg.i = 0.30563524381420315;
    msg.d = 0.33589995002239026;
    msg.a = 0.21239743188171634;

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
    msg.setTimeStamp(0.18957155043962237);
    msg.setSource(8532U);
    msg.setSourceEntity(21U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(223U);
    msg.p = 0.9665648420253455;
    msg.i = 0.2841680093829341;
    msg.d = 0.8134754125658784;
    msg.a = 0.23220993647799137;

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
    msg.setTimeStamp(0.8762818772134813);
    msg.setSource(13503U);
    msg.setSourceEntity(124U);
    msg.setDestination(56127U);
    msg.setDestinationEntity(45U);
    msg.p = 0.484787630090877;
    msg.i = 0.18046221532263185;
    msg.d = 0.39290461495634676;
    msg.a = 0.2202890175364841;

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
    msg.setTimeStamp(0.7798104960548667);
    msg.setSource(57009U);
    msg.setSourceEntity(251U);
    msg.setDestination(40373U);
    msg.setDestinationEntity(56U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.9493373781665574);
    msg.setSource(58185U);
    msg.setSourceEntity(233U);
    msg.setDestination(11305U);
    msg.setDestinationEntity(248U);
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
    msg.setTimeStamp(0.4225387324160089);
    msg.setSource(61741U);
    msg.setSourceEntity(229U);
    msg.setDestination(931U);
    msg.setDestinationEntity(98U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.7929384258392761);
    msg.setSource(8973U);
    msg.setSourceEntity(58U);
    msg.setDestination(862U);
    msg.setDestinationEntity(129U);
    msg.timeout = 41320U;
    msg.lat = 0.22149966385460507;
    msg.lon = 0.47115199360191795;
    msg.z = 0.30079065842283204;
    msg.z_units = 242U;
    msg.speed = 0.7850612367599317;
    msg.speed_units = 140U;
    msg.roll = 0.4211424781812725;
    msg.pitch = 0.4624908466540346;
    msg.yaw = 0.2669523433530705;
    msg.custom.assign("BWMWCUGGSIXOSNLHOTIYDLMJLSCLEPOHIYKEVPZAYTUNZFMQ");

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
    msg.setTimeStamp(0.30776360689402094);
    msg.setSource(58267U);
    msg.setSourceEntity(96U);
    msg.setDestination(58671U);
    msg.setDestinationEntity(233U);
    msg.timeout = 57489U;
    msg.lat = 0.15796520057036612;
    msg.lon = 0.9780989028550913;
    msg.z = 0.374312946523357;
    msg.z_units = 244U;
    msg.speed = 0.026708121518272177;
    msg.speed_units = 107U;
    msg.roll = 0.12480199692173255;
    msg.pitch = 0.3575424540261519;
    msg.yaw = 0.5652258996402441;
    msg.custom.assign("IAYEROWUJKNSTZVSYADHJIRPFFHGYQDVPWEIZQVXSMKWWZBJVTGWFDURFXBCYNEPBBQYRMBJLIONOTKZDWMPZUCFLDAVMUCSTCCLDQIERIXQIPPBHKCLHYPQXDUWBWAFNZKQIGXCFLCJSEO");

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
    msg.setTimeStamp(0.08359657310788715);
    msg.setSource(55185U);
    msg.setSourceEntity(78U);
    msg.setDestination(47449U);
    msg.setDestinationEntity(212U);
    msg.timeout = 59710U;
    msg.lat = 0.04256905807109301;
    msg.lon = 0.6165315077806256;
    msg.z = 0.9018311728138346;
    msg.z_units = 15U;
    msg.speed = 0.9967041230017144;
    msg.speed_units = 65U;
    msg.roll = 0.8468511546607187;
    msg.pitch = 0.18435050210869275;
    msg.yaw = 0.23476608990008208;
    msg.custom.assign("BKUTWBCQFNEIMGEJMPXQGMGNKJVGQHHWKEBVNXRFKMDRCGINQSBSDMIFWDKUGWBDRREBESIOACAHZBVYGIJAPSRXQWXKHIORWCA");

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
    msg.setTimeStamp(0.33538541719435866);
    msg.setSource(1008U);
    msg.setSourceEntity(111U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(146U);
    msg.timeout = 32620U;
    msg.lat = 0.16830475245637844;
    msg.lon = 0.21129489013101022;
    msg.z = 0.6696197505037116;
    msg.z_units = 97U;
    msg.speed = 0.07943073440974058;
    msg.speed_units = 171U;
    msg.duration = 43993U;
    msg.radius = 0.7161353235752004;
    msg.flags = 53U;
    msg.custom.assign("BXOODLIFNRKMGXLAQNLFPYYBWKQVZIXVXOFTYNSSZJFTOQLKXTKFRGFCWYQVDHAKJENWEQRYIIVJPDSKIVIWZMBIAXHBOJODROEUBNDTS");

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
    msg.setTimeStamp(0.871594733616565);
    msg.setSource(24045U);
    msg.setSourceEntity(92U);
    msg.setDestination(31189U);
    msg.setDestinationEntity(137U);
    msg.timeout = 33051U;
    msg.lat = 0.46185355561258556;
    msg.lon = 0.45031093598751115;
    msg.z = 0.7834558390204492;
    msg.z_units = 159U;
    msg.speed = 0.11885093806540037;
    msg.speed_units = 254U;
    msg.duration = 51880U;
    msg.radius = 0.5168966032492506;
    msg.flags = 132U;
    msg.custom.assign("TTZNDUMBFDCJZSZBARCWDGTKOEJMFQZWTOWVRBUNIKAIRXDQYMHYHSEBHJDZPPQJAILSJGRKIDHOWCNBOOFEEAUANVSXEILLLWGPPNTCLKOQQWKUVOTYDWCXGHIHYZWXXHMYFYLMHRPUHJTIYOPCNBGSDSXHQVF");

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
    msg.setTimeStamp(0.5207370299193285);
    msg.setSource(6888U);
    msg.setSourceEntity(245U);
    msg.setDestination(26774U);
    msg.setDestinationEntity(169U);
    msg.timeout = 51739U;
    msg.lat = 0.5646790576360896;
    msg.lon = 0.9484647892204324;
    msg.z = 0.8612669516948166;
    msg.z_units = 252U;
    msg.speed = 0.9049783586235407;
    msg.speed_units = 67U;
    msg.duration = 60246U;
    msg.radius = 0.5838973096002471;
    msg.flags = 187U;
    msg.custom.assign("EBEQFFDGWTRKGTANKUMIVZCTAEPVLBVDIPRLPIZWCKZAXUFMWVRJHTJFIPYGMCGQMZJDAUHVXFRRCLZGLVKHSDLYORNJEQFSTBNCNKWPRJPGYJSQACOHUDWIYUXFAPUNPZYLLTIRDTBFJDJZVXSDDQXOGOZUHWSSGNKWYHOQ");

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
    msg.setTimeStamp(0.9122856037514324);
    msg.setSource(22748U);
    msg.setSourceEntity(24U);
    msg.setDestination(54705U);
    msg.setDestinationEntity(33U);
    msg.custom.assign("BRXBAICUMMASBDIYEYZJMWTVHQSCUOBIGRNOZCWWLKASUOQUPCFQFRRDPHGXIRULRWWDMLKBFHGFBSLHLAVCEVHJFVMXNYOBVZKALIDNAPWXZESCENBINXNGUQLUZDOXWVPKU");

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
    msg.setTimeStamp(0.06145217140518855);
    msg.setSource(34340U);
    msg.setSourceEntity(206U);
    msg.setDestination(47278U);
    msg.setDestinationEntity(215U);
    msg.custom.assign("WQGOAGQLGBAKXWXTBTJXPDDTUKRLRICLYZAZKDDUIOSYQSGWGXJMCSMJQEKRCYKCLZNDNOXGCAECWQJHAKLVXRMTXXFFHICOHNWBVYUBFUTRUAUVMKOOKPNRMHUPGNEHLHFTZKSDZRQIMLWMZUEENNPYDBFSVHBCPTJIFPZOHSIFGUMXVMWAWTHEQ");

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
    msg.setTimeStamp(0.6753775458591185);
    msg.setSource(15110U);
    msg.setSourceEntity(34U);
    msg.setDestination(26362U);
    msg.setDestinationEntity(142U);
    msg.custom.assign("FLPBSXZKEGYLMEERYIQZXSGBORUYZSXDPMKDZCODCNJSBRIXSBH");

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
    msg.setTimeStamp(0.3553600118429824);
    msg.setSource(48037U);
    msg.setSourceEntity(229U);
    msg.setDestination(54187U);
    msg.setDestinationEntity(173U);
    msg.timeout = 18667U;
    msg.lat = 0.3692462765297777;
    msg.lon = 0.43340050129103824;
    msg.z = 0.3709757073667621;
    msg.z_units = 9U;
    msg.duration = 52686U;
    msg.speed = 0.6238176620501839;
    msg.speed_units = 11U;
    msg.type = 99U;
    msg.radius = 0.1431929487584198;
    msg.length = 0.7855580352745464;
    msg.bearing = 0.7417685350644236;
    msg.direction = 15U;
    msg.custom.assign("QDPWYPGOPCXCRKO");

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
    msg.setTimeStamp(0.6266010815434429);
    msg.setSource(1805U);
    msg.setSourceEntity(143U);
    msg.setDestination(13952U);
    msg.setDestinationEntity(184U);
    msg.timeout = 7549U;
    msg.lat = 0.5598355634211313;
    msg.lon = 0.6931561621722437;
    msg.z = 0.4764514817253387;
    msg.z_units = 134U;
    msg.duration = 38775U;
    msg.speed = 0.731179701674381;
    msg.speed_units = 146U;
    msg.type = 85U;
    msg.radius = 0.254707854463165;
    msg.length = 0.6804603256075471;
    msg.bearing = 0.1997475511030521;
    msg.direction = 84U;
    msg.custom.assign("ERYPRVYJZVPMQSODRJDUQZLWPECLIKDETIFOMYYMIJKNHFVLXPZOZBXLPGHOHSHVCWVHOSSLPFFCLWQGZAISTPIYKJUVJDMDQABTOINGTZXOMJICWHANTAQSGXNFYADLKGJXERTNU");

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
    msg.setTimeStamp(0.10236065190784582);
    msg.setSource(8765U);
    msg.setSourceEntity(199U);
    msg.setDestination(23184U);
    msg.setDestinationEntity(164U);
    msg.timeout = 35525U;
    msg.lat = 0.688063212396138;
    msg.lon = 0.8118005831640784;
    msg.z = 0.5124996455093422;
    msg.z_units = 106U;
    msg.duration = 46930U;
    msg.speed = 0.20021664995604538;
    msg.speed_units = 115U;
    msg.type = 134U;
    msg.radius = 0.0534260959427556;
    msg.length = 0.6387705420235705;
    msg.bearing = 0.8446938107380456;
    msg.direction = 188U;
    msg.custom.assign("XLIZJKOYCNFUOALRKVGDYWMPUQE");

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
    msg.setTimeStamp(0.30856894239098365);
    msg.setSource(10177U);
    msg.setSourceEntity(79U);
    msg.setDestination(45162U);
    msg.setDestinationEntity(78U);
    msg.duration = 10171U;
    msg.custom.assign("HGGNXXWTIQDNROYPCWQASEOPAVZBMRRVRBACIPQIWLUYARVEGVMOQMWETTDHLLNOPGMSUXXJZCBBCSUKYUMWYEHZLGAEOKHSHAOBZOIFLVKNXPJDPXJVLDHUJJZCKIWFHLRECDGYFTIUXGJUXQAKQKEBCGBRNWSVRMKLNBYFBMESMKOTIVYNYKJTUDUFWSGTTSWJATRDFQFHYMXAANNJQPFDGZNKPPVDECCFFHLOC");

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
    msg.setTimeStamp(0.8910438353104977);
    msg.setSource(26779U);
    msg.setSourceEntity(52U);
    msg.setDestination(43311U);
    msg.setDestinationEntity(42U);
    msg.duration = 27895U;
    msg.custom.assign("VPXEKGKCAMFVEMVJXKKKADIKXYFOIZEGJQTZVJKGAQYDQNFJYQOVOGQFOGSCSMQZPBNHLVUBVXSZLZATKGPHYIJLUXZDBTSPE");

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
    msg.setTimeStamp(0.9699961023947229);
    msg.setSource(21369U);
    msg.setSourceEntity(60U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(228U);
    msg.duration = 32643U;
    msg.custom.assign("TAVZQWJCLVYUENNSSBWCQRRYGMPGXKTUXAVCLXWJPMWVHFOELWDKDGZIFVCPQPRPOQYVBAMNJOGZQGIGBBZRDADTBUCSUOPRFFFSSCHXSBUNGLWTLJVZUSPKOUFOQLTEFNKJYKRXBYMQIJNHXJCEDHPWHEZ");

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
    msg.setTimeStamp(0.0389929887632019);
    msg.setSource(34926U);
    msg.setSourceEntity(15U);
    msg.setDestination(40464U);
    msg.setDestinationEntity(117U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.7582146426744604;
    tmp_msg_0.start_lon = 0.9899035471041226;
    tmp_msg_0.start_z = 0.13798714055679684;
    tmp_msg_0.start_z_units = 169U;
    tmp_msg_0.end_lat = 0.14767946620274797;
    tmp_msg_0.end_lon = 0.016285391746106548;
    tmp_msg_0.end_z = 0.9158112387313176;
    tmp_msg_0.end_z_units = 105U;
    tmp_msg_0.speed = 0.8080011756629996;
    tmp_msg_0.speed_units = 182U;
    tmp_msg_0.lradius = 0.6451745662255164;
    tmp_msg_0.flags = 129U;
    msg.control.set(tmp_msg_0);
    msg.duration = 33019U;
    msg.custom.assign("MQBBYDAFBEIVXRSVUIBCCPDOYMSQHHFMYIYAVVKFNPLSADOZKVABUZTWKLGZPGTFCNGHNRYDQDLMTIUFSTKNTOJYEI");

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
    msg.setTimeStamp(0.6608061553929364);
    msg.setSource(41815U);
    msg.setSourceEntity(56U);
    msg.setDestination(17731U);
    msg.setDestinationEntity(23U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.328245589746088;
    msg.control.set(tmp_msg_0);
    msg.duration = 24975U;
    msg.custom.assign("XBXZDZEJNDUKGMQHHJOVMZDIMCVACASYUVVCTBLOKETNPFUPVYCKYLXILHKFWPCRPKBDWSCPDTWZNQHMOURWXVGXXUDTYFQBJAULFJNLFLMSDLSFTJMOHYJGXHAKKNWEYQUIMNBGDZIFBINEVAPZERYPFCKWZWEOXIJGSYTQXSPFJIRFOWSBEEDUKIMQHRGGRIOTYIYETRXHTKUQAVCLCGMZNOSRHJLPGSDOAMJ");

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
    msg.setTimeStamp(0.014945323028092927);
    msg.setSource(58951U);
    msg.setSourceEntity(238U);
    msg.setDestination(9101U);
    msg.setDestinationEntity(177U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7932199652309353;
    msg.control.set(tmp_msg_0);
    msg.duration = 32899U;
    msg.custom.assign("GCZUUPHROUHQJKMAILOWHEKZYUKJCKSRICDTSTVBWITYFQFRYOCASNZKEYDWTHOBDLFDJFZJJIOVEBUVCOAVBNMODTVNRFVSKXCAEXGJBYRAFTLVNCLKEHCFJMIQSEJNTGGXXLHADTUSAZQUUOPBQGTMYIFQTLPNMWGPXJPWSEVXDBMSAK");

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
    msg.setTimeStamp(0.18987562198587593);
    msg.setSource(49520U);
    msg.setSourceEntity(110U);
    msg.setDestination(61709U);
    msg.setDestinationEntity(154U);
    msg.timeout = 2349U;
    msg.lat = 0.39812385004610606;
    msg.lon = 0.3003993173147411;
    msg.z = 0.44259077443846573;
    msg.z_units = 19U;
    msg.speed = 0.8940604654603628;
    msg.speed_units = 178U;
    msg.bearing = 0.4636308698980075;
    msg.cross_angle = 0.9604681878508228;
    msg.width = 0.514035428237257;
    msg.length = 0.6292364074211881;
    msg.hstep = 0.33307958220308;
    msg.coff = 249U;
    msg.alternation = 208U;
    msg.flags = 1U;
    msg.custom.assign("CMEJGEHNSGXLUDKZIELOIJHPSMJYZZMITYIOZUXUYKGXRNBJJBKVJRMRLIKCGVOLGKCABASZRYTRDAHQLXCDZSFHHUWTPTKILDNM");

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
    msg.setTimeStamp(0.5116091970173083);
    msg.setSource(48391U);
    msg.setSourceEntity(94U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(90U);
    msg.timeout = 14359U;
    msg.lat = 0.8650829237454788;
    msg.lon = 0.22790466994755643;
    msg.z = 0.45465669880956106;
    msg.z_units = 124U;
    msg.speed = 0.7081687578556458;
    msg.speed_units = 139U;
    msg.bearing = 0.0009559923919582047;
    msg.cross_angle = 0.8769535763992279;
    msg.width = 0.0467701571993151;
    msg.length = 0.4996975824781057;
    msg.hstep = 0.35090951984956165;
    msg.coff = 85U;
    msg.alternation = 252U;
    msg.flags = 47U;
    msg.custom.assign("PKOVRWREOURWGRBWKIMNPQGXMMGQFHJGDYKAUIUSUQYWRWTYDCXFLQYOSJBABVSVXFTGZEVESZGIQYVHWDNCFZLIHICOKXJHHINNSECNRPODKODIOTPMTCJQVDPSSNJBZNDBZHUPYAOCEQYKDLQVJCREFKAUEALPIHJ");

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
    msg.setTimeStamp(0.6975402878956903);
    msg.setSource(41303U);
    msg.setSourceEntity(228U);
    msg.setDestination(6470U);
    msg.setDestinationEntity(17U);
    msg.timeout = 58237U;
    msg.lat = 0.5292802939841466;
    msg.lon = 0.49699122913013205;
    msg.z = 0.15265397436369854;
    msg.z_units = 177U;
    msg.speed = 0.47420495669788143;
    msg.speed_units = 84U;
    msg.bearing = 0.6414213738185396;
    msg.cross_angle = 0.4855036718750443;
    msg.width = 0.0819231443977757;
    msg.length = 0.28557524759702435;
    msg.hstep = 0.5467805429993856;
    msg.coff = 48U;
    msg.alternation = 223U;
    msg.flags = 113U;
    msg.custom.assign("IRPVFFPVDKUNCIYDUYWOMWZSBFSDZYWOGANF");

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
    msg.setTimeStamp(0.8557291479283639);
    msg.setSource(18605U);
    msg.setSourceEntity(35U);
    msg.setDestination(47357U);
    msg.setDestinationEntity(19U);
    msg.timeout = 42332U;
    msg.lat = 0.6941120504800244;
    msg.lon = 0.4029736357698409;
    msg.z = 0.5956070561741061;
    msg.z_units = 99U;
    msg.speed = 0.8464717638265241;
    msg.speed_units = 68U;
    msg.custom.assign("WKVNPDICHGBCWNAZCRPLEBIDNUFZMJXIJUXVJJNVQLCUBMKTXPIAHPSCXTWWIMHYWYRJTQNNNXAVYRKQMPSDPYHSEHSFBMVLBIEOEHRYVQBKGTGAUVFDEAAVPPDWQZRAGU");

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
    msg.setTimeStamp(0.9536728665485279);
    msg.setSource(31332U);
    msg.setSourceEntity(214U);
    msg.setDestination(45469U);
    msg.setDestinationEntity(0U);
    msg.timeout = 38263U;
    msg.lat = 0.9621651445107048;
    msg.lon = 0.15929563759494625;
    msg.z = 0.07725004498960364;
    msg.z_units = 103U;
    msg.speed = 0.20151256937927065;
    msg.speed_units = 42U;
    msg.custom.assign("FBLLKOPQORIZNVTFXTIVAWJVRJUTFFVOLPPHWTCPZSLULNXASFACLMXWCNIBSMZCOJVCJAHMQAEOLXLLETNDHGNGKWBPDGJYEFHSYJAZRSCJRIESIEVAMWXUNCPYMZJZWKUGIGYSOYGTNGO");

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
    msg.setTimeStamp(0.05038914101058156);
    msg.setSource(52081U);
    msg.setSourceEntity(128U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(41U);
    msg.timeout = 38114U;
    msg.lat = 0.6906829971832527;
    msg.lon = 0.023835986779753737;
    msg.z = 0.12294008216235486;
    msg.z_units = 204U;
    msg.speed = 0.7012265784240594;
    msg.speed_units = 26U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6812072630056265;
    tmp_msg_0.y = 0.7892293437155312;
    tmp_msg_0.z = 0.16279834948283567;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YUMQBSHXSWSHTETHGUARTJJUGDBNLDIZPMXFHEHWPOWMAAFWNZHCCBHENHVRIAECUFMKZRCMPEXGSWUGFOIGQIMOVZYFTTLHXLJIQXWKIDERAKD");

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
    msg.setTimeStamp(0.2596029055089316);
    msg.setSource(51463U);
    msg.setSourceEntity(57U);
    msg.setDestination(6835U);
    msg.setDestinationEntity(83U);
    msg.x = 0.46000230945444487;
    msg.y = 0.07534595776809916;
    msg.z = 0.24204181185697282;

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
    msg.setTimeStamp(0.8836016451837289);
    msg.setSource(19165U);
    msg.setSourceEntity(98U);
    msg.setDestination(62293U);
    msg.setDestinationEntity(156U);
    msg.x = 0.4603451823994924;
    msg.y = 0.1889466347256734;
    msg.z = 0.0004869964375280311;

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
    msg.setTimeStamp(0.873526310126632);
    msg.setSource(37125U);
    msg.setSourceEntity(151U);
    msg.setDestination(6738U);
    msg.setDestinationEntity(112U);
    msg.x = 0.7710560448130085;
    msg.y = 0.3872139340143844;
    msg.z = 0.27990033579935114;

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
    msg.setTimeStamp(0.24752865361141796);
    msg.setSource(4030U);
    msg.setSourceEntity(110U);
    msg.setDestination(51206U);
    msg.setDestinationEntity(254U);
    msg.timeout = 46523U;
    msg.lat = 0.022603848739676136;
    msg.lon = 0.10268059711245348;
    msg.z = 0.8692208519658732;
    msg.z_units = 178U;
    msg.amplitude = 0.690065055939312;
    msg.pitch = 0.17869317957760555;
    msg.speed = 0.6821247742958836;
    msg.speed_units = 110U;
    msg.custom.assign("LDXLJRFGTITQWMDBICFJKFINVEQXLONEEPUKMRNZFTOAKKAAXJTHYZWKERDBQMSDABCOVIDGVDSFCTBJASRWWGNEPBPRYMAHMYIWZNCWAYQEUZFBKVVOJUMDGFXVOGQNZLQPOTDLHJGQARPBELPDIJU");

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
    msg.setTimeStamp(0.7550550957002891);
    msg.setSource(23311U);
    msg.setSourceEntity(171U);
    msg.setDestination(19445U);
    msg.setDestinationEntity(48U);
    msg.timeout = 11976U;
    msg.lat = 0.8755597538822386;
    msg.lon = 0.2948845615209391;
    msg.z = 0.6152600785866481;
    msg.z_units = 66U;
    msg.amplitude = 0.7536462094679793;
    msg.pitch = 0.918301190977492;
    msg.speed = 0.9357535751243966;
    msg.speed_units = 146U;
    msg.custom.assign("VXNIQTGSFSDABLHWBFBIGOUDKZPBPRZQCGCCTDWJAKHLPUWTPOOFPMYYTWJYRFWNWAGSDDIHMQXHEGKSPEOJXPVNSM");

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
    msg.setTimeStamp(0.9040200192077422);
    msg.setSource(37538U);
    msg.setSourceEntity(187U);
    msg.setDestination(18214U);
    msg.setDestinationEntity(71U);
    msg.timeout = 25307U;
    msg.lat = 0.4383442931469955;
    msg.lon = 0.7204571707827737;
    msg.z = 0.3204439679267296;
    msg.z_units = 92U;
    msg.amplitude = 0.3486771451757643;
    msg.pitch = 0.780910468832815;
    msg.speed = 0.006514116127903202;
    msg.speed_units = 170U;
    msg.custom.assign("UHWVVOKDUBPXDMQTWKLFNOCWGVHSPOLQCHDMLKGIGHUFPAGBAKWMVVXLRMPQORQUNFPJAYJNEGEDKYJUDROMFITVTIFVUILFFQUIGYCZXYBRTGLNTQHQJZLNSNZCQHFXPZEEDILBMSAIOXSWLQFHRSVWAOZRRDNSNJJTTXRVK");

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
    msg.setTimeStamp(0.9521377252567559);
    msg.setSource(9168U);
    msg.setSourceEntity(4U);
    msg.setDestination(23622U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.4595976572727778);
    msg.setSource(61179U);
    msg.setSourceEntity(111U);
    msg.setDestination(62005U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.1993907320279309);
    msg.setSource(53488U);
    msg.setSourceEntity(58U);
    msg.setDestination(59446U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.8805319852635471);
    msg.setSource(15791U);
    msg.setSourceEntity(6U);
    msg.setDestination(58777U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.27904055005146566;
    msg.lon = 0.9283662352341736;
    msg.z = 0.3339135481297184;
    msg.z_units = 159U;
    msg.radius = 0.05042545867795556;
    msg.duration = 34268U;
    msg.speed = 0.769783263291947;
    msg.speed_units = 77U;
    msg.custom.assign("RACUTICTHVYTTUDZWKRAJNQIHDESWBZRVUIBMXGBNNUYUKWCIZCYFXDQVCPRINFTNJXJSK");

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
    msg.setTimeStamp(0.1071414666753896);
    msg.setSource(20319U);
    msg.setSourceEntity(81U);
    msg.setDestination(37032U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.9756368766744463;
    msg.lon = 0.836213175994456;
    msg.z = 0.12002389992617146;
    msg.z_units = 92U;
    msg.radius = 0.4286328220836485;
    msg.duration = 10947U;
    msg.speed = 0.0283614095343655;
    msg.speed_units = 47U;
    msg.custom.assign("APOYKTEFAWRIZSUGBIATXTCOTGFLUSEMHMYOZUYVJEVIQUREDLYVKEZXRNREHKZXNBCGDVUWYODFJXPNSCDZQKMJNYSCQMPJMYRNQZQXFYGULWWRAABXSIIKXIIZLLHLDTITHFMODQKZZUSDVNPOUOVFGSNGRBAFDCWJPBEVUSFHXEOHMMKXCXPULNL");

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
    msg.setTimeStamp(0.2876926182175622);
    msg.setSource(15109U);
    msg.setSourceEntity(37U);
    msg.setDestination(1078U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.30620502925206106;
    msg.lon = 0.07876877998213128;
    msg.z = 0.21080354233488896;
    msg.z_units = 124U;
    msg.radius = 0.4208068014866979;
    msg.duration = 10219U;
    msg.speed = 0.3907688222756238;
    msg.speed_units = 220U;
    msg.custom.assign("URQTZWTROUUSNXYNDVQVPDVSXWKCLZKPLBOGGJEFTDULTCHALRGYXIKWSIRUBMYVBJWOBFUJZSPUAWXELCGOTPDSVAJWGNFNAWGEPRHHAJLOHCNRXJOXBWFFWGCURIFPTATSAQBEIEYCZYFFEEIAORXBIIZQKELMPOHJLGCQNTMYXCMVMKZUVYRAFZZYVKMBHONMXTRSAMPSQSDIHKPIQQJHCHGYKPSEXNNNEMDOVTHKJLDQZ");

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
    msg.setTimeStamp(0.9952185539454576);
    msg.setSource(47348U);
    msg.setSourceEntity(199U);
    msg.setDestination(56387U);
    msg.setDestinationEntity(237U);
    msg.timeout = 1756U;
    msg.flags = 7U;
    msg.lat = 0.7162910290792642;
    msg.lon = 0.23853100641104552;
    msg.start_z = 0.3173693028248181;
    msg.start_z_units = 167U;
    msg.end_z = 0.08813937178190512;
    msg.end_z_units = 18U;
    msg.radius = 0.6322038742227293;
    msg.speed = 0.5625346118775282;
    msg.speed_units = 191U;
    msg.custom.assign("EDIDBYREZCJHRIGHZXNIYJVAMENCYNMUOHNERTO");

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
    msg.setTimeStamp(0.6324962737224422);
    msg.setSource(31519U);
    msg.setSourceEntity(81U);
    msg.setDestination(38931U);
    msg.setDestinationEntity(176U);
    msg.timeout = 63281U;
    msg.flags = 230U;
    msg.lat = 0.9049614580844796;
    msg.lon = 0.397123551082497;
    msg.start_z = 0.951981629849507;
    msg.start_z_units = 229U;
    msg.end_z = 0.7367489025483343;
    msg.end_z_units = 61U;
    msg.radius = 0.8471784176510738;
    msg.speed = 0.47723106144936733;
    msg.speed_units = 54U;
    msg.custom.assign("UPVFPLTOKKFNWSORBIPGVSQPLQOSCYCPQMCVKKAPQMBZUANQHRQFSARARVZNBEWKYNZINCXTXHOLVKXTLWNUEZUHZFIBMZLMWCAWIBXEFHMUEOUDCBRVUNEUOAELQIMKDLKGWGBOYNSRZHBDKHBJJPIVZURQCCRTWEJZVMDQCDKOGXBGJNRGITGGUIMSLJFCLYHAXMVTMFHSTDXFDVY");

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
    msg.setTimeStamp(0.1054961063982145);
    msg.setSource(1033U);
    msg.setSourceEntity(150U);
    msg.setDestination(39093U);
    msg.setDestinationEntity(164U);
    msg.timeout = 19246U;
    msg.flags = 93U;
    msg.lat = 0.3578655421036846;
    msg.lon = 0.5195410573317061;
    msg.start_z = 0.5022025857132701;
    msg.start_z_units = 108U;
    msg.end_z = 0.032066770863613536;
    msg.end_z_units = 107U;
    msg.radius = 0.28114072867650164;
    msg.speed = 0.14752754580420613;
    msg.speed_units = 64U;
    msg.custom.assign("VPPAXPAQSGLXTAFCUPZIXHHVGYIQPSHJMHITSFKQIYCEVANRSKVZQMYGIZJDWGZUBYXCAJMLORTOPDIPKJZDCOG");

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
    msg.setTimeStamp(0.9470081736743028);
    msg.setSource(51802U);
    msg.setSourceEntity(151U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(100U);
    msg.timeout = 9251U;
    msg.lat = 0.4889969010293459;
    msg.lon = 0.8144861840378227;
    msg.z = 0.8272905565711554;
    msg.z_units = 169U;
    msg.speed = 0.6783730388244087;
    msg.speed_units = 50U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3877529839534314;
    tmp_msg_0.y = 0.3735411773289805;
    tmp_msg_0.z = 0.06687361586391449;
    tmp_msg_0.t = 0.31621400507915076;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("URSLZCQXFBYWJNVEXSWTDXWJIBAVQRJXSDOJNMFZGICBBVILUUZFGULMOSLCCTBDJGTVMYSOVMNKMTWMHHQAKKGGCZBEXPUPTDDGVPEJONOOOKOIAENKDDKVWZKZHIFAFGWTQHOGYLEZLLYSPHCFQGQXIQQBNJNRNUELLDEJDKAWRIWSGRRHUENZBTRFMTCYJHTCISW");

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
    msg.setTimeStamp(0.7716801587569686);
    msg.setSource(47939U);
    msg.setSourceEntity(56U);
    msg.setDestination(53061U);
    msg.setDestinationEntity(162U);
    msg.timeout = 43444U;
    msg.lat = 0.18818376299299455;
    msg.lon = 0.6120999471765873;
    msg.z = 0.8516698272204588;
    msg.z_units = 226U;
    msg.speed = 0.5871108298742492;
    msg.speed_units = 217U;
    msg.custom.assign("HNXMJWLTJQLKWBGZRZFTMVWGLPGNQIUYRXJYQABKUCNRPZLILUQXYBPWABSLISLDEERTBODZMIZHNRFGALRRPPCVVVAEFIXSKYMZTYFPACGOVSHUARKDYFBJNGKPBKMJIZFJHKORREAJJLUTTQBCTMGCQWPCZXDOACCCQXTQUSDXXJHFOQUSIGTYDOVEBSNPSHDUQCOZNENDAWMJEBH");

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
    msg.setTimeStamp(0.2910635869019085);
    msg.setSource(54683U);
    msg.setSourceEntity(154U);
    msg.setDestination(39690U);
    msg.setDestinationEntity(158U);
    msg.timeout = 53057U;
    msg.lat = 0.670158216618001;
    msg.lon = 0.8718449273244444;
    msg.z = 0.34325934843509154;
    msg.z_units = 38U;
    msg.speed = 0.6696387481763693;
    msg.speed_units = 172U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.47855820762836276;
    tmp_msg_0.y = 0.6540793561351015;
    tmp_msg_0.z = 0.626176608901849;
    tmp_msg_0.t = 0.3532007262432634;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TVTTZBJEGVDTGIUPFEYEVYRHUNYZCVIKMHBKSORMNCBSAIERKQLAIBWAMTSFNJJQWAHMPRPNDDQMEHFTYOFLMKZUIFZGVJMGSAHCBUXAOLNZQSFDJQLGCOXPEUXATEBBPKQHONDAGUYIGBPPVCRXWRLZTSXASKCCLKJ");

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
    msg.setTimeStamp(0.8430062576114411);
    msg.setSource(15516U);
    msg.setSourceEntity(188U);
    msg.setDestination(57785U);
    msg.setDestinationEntity(86U);
    msg.x = 0.48090604533144254;
    msg.y = 0.2840437676959022;
    msg.z = 0.7553444612067091;
    msg.t = 0.08325302340765495;

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
    msg.setTimeStamp(0.8495709348347263);
    msg.setSource(39627U);
    msg.setSourceEntity(238U);
    msg.setDestination(30330U);
    msg.setDestinationEntity(191U);
    msg.x = 0.9371935002593181;
    msg.y = 0.18504094294767115;
    msg.z = 0.2769077208615003;
    msg.t = 0.8938378237682552;

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
    msg.setTimeStamp(0.1726712590546311);
    msg.setSource(43192U);
    msg.setSourceEntity(23U);
    msg.setDestination(54110U);
    msg.setDestinationEntity(221U);
    msg.x = 0.7673877260713993;
    msg.y = 0.7558076475557742;
    msg.z = 0.44464486023208205;
    msg.t = 0.7194555138766267;

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
    msg.setTimeStamp(0.8851105490128952);
    msg.setSource(42164U);
    msg.setSourceEntity(123U);
    msg.setDestination(65196U);
    msg.setDestinationEntity(170U);
    msg.timeout = 37546U;
    msg.name.assign("VGMJODJAUSGVOLEHXIOKKZLTJVTCCPYXSDPIOENFHZDCKVLVVLIVBLQFDKLAGGRHXUSEJHACRQUMFDYYKLMCGRTRSDZJRTTHQBWXWBUJKSODBQPLNBUJZBKHCIGCXSGQBQGGBDPWSCEYXYEOWTMJISJMAZCHMIEBTFNRMF");
    msg.custom.assign("GBVOCFOUTXSQFRTUYDHVMLBLGGPENWYOJUWOAVXHNWWIFRIZLSRTSAUBLLOIXJYFGDFUSBCNUTFWZHPXCGKAXOKZTINQWVRAKXJBOPXJYKRRDJKRQEXFCFZQNKPCEYPEUSMPNSTZISOWINKYZYULGMUFOCAHDHDSVMHQEQMTJHFGAVZIPNPRPKHMOWCDNAEAVZDVEKLJEDU");

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
    msg.setTimeStamp(0.9225851050008795);
    msg.setSource(30071U);
    msg.setSourceEntity(166U);
    msg.setDestination(21874U);
    msg.setDestinationEntity(203U);
    msg.timeout = 59380U;
    msg.name.assign("NJRVPTKUMJFYFRAGWCMUTMPBIKICQLTUODACEHOTCYMGPLUNCWKHXMOXXSPOMOGGJPJXYKIBDSIUIBTHGEAUNQDXDMYTFSVEAHRYUYYVFSAZCZBPVFBHNONVKSHNLYQKRRTWJLYTZEHHQDZNFMZOJVLBQLGTPRAGRKSIXEWHNABTDQXDYBZICDWDFSAWEORXQEPBGWXIJPHUEOPGBRJJEEILOWZLMCLQQFVXCKRV");
    msg.custom.assign("QZILPRGTEORITBUJOKMEZFRNBIGYFNAJIKMKJEHCHMLIDEHFYOP");

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
    msg.setTimeStamp(0.567388277334105);
    msg.setSource(29737U);
    msg.setSourceEntity(53U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(61U);
    msg.timeout = 52073U;
    msg.name.assign("HRBQCVIJIOKRZMKKNXSQFMCRSJIAUZFUZCTZCKTGLVUMQWVGCXZEFQWODXQOSAIPUPWWEDTRDTGLGJZTYJZLVPNNVSAARUWSNNANKBLBQDRFXDJQMPEDVEXUAYIVXCDTIJFCIEJZSKCBBVVWPGDLLABBSRYBEHPOAFOWWEIPEULSQLKXMCVOYOOUCYYMZEYJFPYYTPHMPBN");
    msg.custom.assign("ZLHKFVUBYPHEZCXJYVSWMXIMFROBFIYLTMEOTSUUNVSIBDO");

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
    msg.setTimeStamp(0.5556310064207536);
    msg.setSource(9405U);
    msg.setSourceEntity(180U);
    msg.setDestination(18666U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.4339065103174735;
    msg.lon = 0.5797250003173042;
    msg.z = 0.452958117805622;
    msg.z_units = 239U;
    msg.speed = 0.3019241052547521;
    msg.speed_units = 246U;
    msg.start_time = 0.34839681601354244;
    msg.custom.assign("LOLFRXIPWMLBCINWQGAJTZCAJPETKMSOEVUGATTBQUMPJRQADDMHYWPCVNSPJKIVLHPRGDTBRKIJNDQXWFRFQSMCNXQFWPULKXBLZVSZYXABCODVPGXSVJOYEIEIWUUSTDZKIXOMVKUYEHPDFUZOLYUXECZHGAZMBDVGJTGUQHJFYFQNAFSGAJKKFDYWX");

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
    msg.setTimeStamp(0.9620383294560502);
    msg.setSource(51043U);
    msg.setSourceEntity(206U);
    msg.setDestination(20561U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.9414309870500083;
    msg.lon = 0.9115606293546241;
    msg.z = 0.5314833792574837;
    msg.z_units = 184U;
    msg.speed = 0.8266401221091257;
    msg.speed_units = 44U;
    msg.start_time = 0.15852974806290643;
    msg.custom.assign("JKHHVGVJOFHRHDEKTFXMYXACKBFYRMLKXHBUSPDBYKMICKXZGDIAGHNFVWMWSPWXFVDEGWMPVNLHXRROUMTTLNIZPIQAEEASFQYWGTCYPQRKYIVDFYZAQZPGFJBVZJQJWZTUQUBJMLJXASZLSAEOKUJCQBYQCNSMTIYVNIESRTENIXFDNL");

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
    msg.setTimeStamp(0.4650315643214038);
    msg.setSource(58938U);
    msg.setSourceEntity(135U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.8681353351563651;
    msg.lon = 0.4458996962131103;
    msg.z = 0.7556666332613278;
    msg.z_units = 226U;
    msg.speed = 0.7754348897241995;
    msg.speed_units = 181U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8996537175375181;
    tmp_msg_0.y = 0.5666103288651653;
    tmp_msg_0.z = 0.06230942605296019;
    tmp_msg_0.t = 0.8265310571490994;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6819727287775837;
    msg.custom.assign("LYERTTVFXJCEBQZHIANJUSMCKOSUIDKJFAUQSWRGNDBJCDRCMDFDNJOCOEGQELPLYRZXUHRGPIZMKTXCSJFCSVYBVBEEPZWAMDSRNHPHLGNOSOCKZCSIKBMLYSEUITJVTEHWXPOOAAFXVLIPXGWYVQJGKHADWLZRIBHAFOMRUMYVVXFHJYQHFZFPDQLULANKBWGSXQNVBEYQEQNA");

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
    msg.setTimeStamp(0.8735617647692253);
    msg.setSource(36932U);
    msg.setSourceEntity(19U);
    msg.setDestination(52926U);
    msg.setDestinationEntity(41U);
    msg.vid = 17121U;
    msg.off_x = 0.7176910700766472;
    msg.off_y = 0.7329250938222825;
    msg.off_z = 0.4123463918141671;

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
    msg.setTimeStamp(0.5587602069038394);
    msg.setSource(32980U);
    msg.setSourceEntity(189U);
    msg.setDestination(31389U);
    msg.setDestinationEntity(148U);
    msg.vid = 4376U;
    msg.off_x = 0.123262551781254;
    msg.off_y = 0.9603863977031695;
    msg.off_z = 0.6215277977591125;

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
    msg.setTimeStamp(0.2570439430361081);
    msg.setSource(54930U);
    msg.setSourceEntity(1U);
    msg.setDestination(44105U);
    msg.setDestinationEntity(45U);
    msg.vid = 48005U;
    msg.off_x = 0.5519309255806257;
    msg.off_y = 0.7798253609165143;
    msg.off_z = 0.7000146375883782;

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
    msg.setTimeStamp(0.1486497031956029);
    msg.setSource(43944U);
    msg.setSourceEntity(86U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.44679582107423066);
    msg.setSource(155U);
    msg.setSourceEntity(129U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.2662941259969236);
    msg.setSource(35446U);
    msg.setSourceEntity(112U);
    msg.setDestination(7841U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.7050228067318663);
    msg.setSource(50720U);
    msg.setSourceEntity(3U);
    msg.setDestination(12240U);
    msg.setDestinationEntity(209U);
    msg.mid = 47841U;

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
    msg.setTimeStamp(0.9648605829370244);
    msg.setSource(54370U);
    msg.setSourceEntity(154U);
    msg.setDestination(36266U);
    msg.setDestinationEntity(32U);
    msg.mid = 37785U;

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
    msg.setTimeStamp(0.8345201568520597);
    msg.setSource(45686U);
    msg.setSourceEntity(165U);
    msg.setDestination(43423U);
    msg.setDestinationEntity(145U);
    msg.mid = 16351U;

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
    msg.setTimeStamp(0.6129266699791028);
    msg.setSource(31279U);
    msg.setSourceEntity(51U);
    msg.setDestination(37311U);
    msg.setDestinationEntity(225U);
    msg.state = 188U;
    msg.eta = 40260U;
    msg.info.assign("FYUWTRDSUTCRYVUKVWXDPBVFUMEUHVQULQLENYMVRSANUYGNRLHCWXCGGPMEVXHGTOAQHBLOOYQRKPOHCHRLOZLQZAAFNDWBCPQTIBSQCEZ");

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
    msg.setTimeStamp(0.6151345543052147);
    msg.setSource(16292U);
    msg.setSourceEntity(253U);
    msg.setDestination(33093U);
    msg.setDestinationEntity(36U);
    msg.state = 57U;
    msg.eta = 15532U;
    msg.info.assign("DVGLQDESMHJRBCNQFYEBKAYOVCMBPZUIPOTWXCCWDWXTYEGOTWWNJCGKAAVNFOSZUCLFTHJWHVZCSNWAHARRSKDKSRVLDPUASPRCQZFQIRRJBZIRHZHSUOMSTIALGKJKMLPTZLAYBQGPUTOYUFMIKIGYKGCN");

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
    msg.setTimeStamp(0.19437460032628018);
    msg.setSource(33817U);
    msg.setSourceEntity(131U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(116U);
    msg.state = 82U;
    msg.eta = 52291U;
    msg.info.assign("RMNXQEYVWSPELZNTPGZYHXEOTLYJTPRJUYDASQKSNWNJHSCNEWUGAJKUXGKDPOBXWPKEKLPGODRGMOKQCEEXSPMPWXUFAIBSVPMYZDFVMJVOJZGJVTRZMET");

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
    msg.setTimeStamp(0.2560282107935563);
    msg.setSource(22431U);
    msg.setSourceEntity(193U);
    msg.setDestination(30243U);
    msg.setDestinationEntity(213U);
    msg.system = 39009U;
    msg.duration = 26512U;
    msg.speed = 0.25229096041406096;
    msg.speed_units = 204U;
    msg.x = 0.6053321777740189;
    msg.y = 0.11055659844721077;
    msg.z = 0.430330726913597;
    msg.z_units = 33U;

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
    msg.setTimeStamp(0.632614049655971);
    msg.setSource(17082U);
    msg.setSourceEntity(158U);
    msg.setDestination(17907U);
    msg.setDestinationEntity(122U);
    msg.system = 29760U;
    msg.duration = 48175U;
    msg.speed = 0.27120601342397355;
    msg.speed_units = 71U;
    msg.x = 0.0645738902698787;
    msg.y = 0.5814183752679135;
    msg.z = 0.5123898276934086;
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
    msg.setTimeStamp(0.28798223592360983);
    msg.setSource(64101U);
    msg.setSourceEntity(249U);
    msg.setDestination(4932U);
    msg.setDestinationEntity(204U);
    msg.system = 51838U;
    msg.duration = 25928U;
    msg.speed = 0.35367526124133997;
    msg.speed_units = 96U;
    msg.x = 0.7768880556507817;
    msg.y = 0.32257692726521703;
    msg.z = 0.5517620174423392;
    msg.z_units = 186U;

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
    msg.setTimeStamp(0.46969623328188914);
    msg.setSource(7690U);
    msg.setSourceEntity(176U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.40003152202474535;
    msg.lon = 0.7859035135278819;
    msg.speed = 0.47273214601745117;
    msg.speed_units = 239U;
    msg.duration = 23368U;
    msg.sys_a = 25964U;
    msg.sys_b = 5713U;
    msg.move_threshold = 0.7017907250090514;

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
    msg.setTimeStamp(0.17720771245343092);
    msg.setSource(27136U);
    msg.setSourceEntity(154U);
    msg.setDestination(17913U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.7715743361239931;
    msg.lon = 0.0808478463598784;
    msg.speed = 0.5600170721207667;
    msg.speed_units = 68U;
    msg.duration = 52413U;
    msg.sys_a = 45463U;
    msg.sys_b = 51973U;
    msg.move_threshold = 0.9360055414528645;

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
    msg.setTimeStamp(0.5170459764844401);
    msg.setSource(24157U);
    msg.setSourceEntity(133U);
    msg.setDestination(47666U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.5268984823917316;
    msg.lon = 0.5384884163928199;
    msg.speed = 0.2256156231241322;
    msg.speed_units = 199U;
    msg.duration = 9582U;
    msg.sys_a = 54188U;
    msg.sys_b = 55803U;
    msg.move_threshold = 0.8286905044396031;

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
    msg.setTimeStamp(0.2397913005216611);
    msg.setSource(47272U);
    msg.setSourceEntity(187U);
    msg.setDestination(12751U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.06518133695849293;
    msg.lon = 0.6521975838015627;
    msg.z = 0.08436504271788026;
    msg.z_units = 221U;
    msg.speed = 0.24239722156641486;
    msg.speed_units = 82U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.24933752436648915;
    tmp_msg_0.lon = 0.7874290904965064;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EQGMIOQKEQHVMQXGTYKBECTGVRQCEDSDFNJDOKLBIKIKXJMHBHGCGOUVSPXFWRSTFPPUJLLHHXXNTEYDQJDBCQTICBIXXUWXOSFAIIUNAEASTWCZJGAFVMRRNOGSCFGHNQLYTRJAOLLCWPJAYFEAMUYHDULOHPFTZOLORIVZZFEWPZWFQVZQMD");

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
    msg.setTimeStamp(0.44570487480416143);
    msg.setSource(29856U);
    msg.setSourceEntity(54U);
    msg.setDestination(40429U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.9011388123753703;
    msg.lon = 0.3756494243918874;
    msg.z = 0.05879460760568023;
    msg.z_units = 180U;
    msg.speed = 0.28345327997739567;
    msg.speed_units = 188U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.47805096327375785;
    tmp_msg_0.lon = 0.43269657292036356;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PUBZWCBQHWZJNDQUMGBAPRFQUMZINUOIFTYWXBKQJBHNOSLJFTRXNWAEHUFTDDAWIVZFVPGLGVGRKZUPWMAHYYLDFSASRBXBRIYDMCZGXSMELKJEOTONXEXIJYLKSESMKOEAHBTPSVMTLTAIOCGRWZONTPHSKHQZPUEVAXYXJGLCKEHUCVXFVQABKGMC");

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
    msg.setTimeStamp(0.1843010629181573);
    msg.setSource(53195U);
    msg.setSourceEntity(183U);
    msg.setDestination(59495U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.33123164747610234;
    msg.lon = 0.2539277871152843;
    msg.z = 0.6730598066092112;
    msg.z_units = 216U;
    msg.speed = 0.27362070410324846;
    msg.speed_units = 31U;
    msg.custom.assign("KCJXFWRGLOMMVRJLZDDAEIJFMVCCFTKDUAMWAJBQQUFSPPWAWHTHSAYMMEVGOIDEPJYETTGYZDBZWAATHLZFWWYHSYRDGGLPEFEZBQSSTXORYVMIPBLKSZYIEGTSNHEICXNFWOZFVXNCFKPVGXFNYOGZMT");

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
    msg.setTimeStamp(0.6707357802275642);
    msg.setSource(53408U);
    msg.setSourceEntity(113U);
    msg.setDestination(57470U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.18435170992546013;
    msg.lon = 0.4611040667019263;

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
    msg.setTimeStamp(0.24406947425947856);
    msg.setSource(39157U);
    msg.setSourceEntity(80U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.08622860016151634;
    msg.lon = 0.14160365870907043;

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
    msg.setTimeStamp(0.15289280926962845);
    msg.setSource(39378U);
    msg.setSourceEntity(117U);
    msg.setDestination(63198U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.9102745598475019;
    msg.lon = 0.19576231195077398;

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
    msg.setTimeStamp(0.8778726011714864);
    msg.setSource(62057U);
    msg.setSourceEntity(172U);
    msg.setDestination(26110U);
    msg.setDestinationEntity(243U);
    msg.timeout = 47026U;
    msg.lat = 0.4811004700719911;
    msg.lon = 0.08291918722374614;
    msg.z = 0.8265925809315068;
    msg.z_units = 14U;
    msg.pitch = 0.2617879246519873;
    msg.amplitude = 0.6441214294862893;
    msg.duration = 9227U;
    msg.speed = 0.07868336774437701;
    msg.speed_units = 62U;
    msg.radius = 0.3676175002331188;
    msg.direction = 3U;
    msg.custom.assign("DUQVARDPCYJILXPXOQRYGEYVDRZTFDZGXLUZCVJSNNSCCGHXFWWCAUAMNYQXBEGBSPRTFWDNLDLRXHLGZIS");

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
    msg.setTimeStamp(0.6870744258757802);
    msg.setSource(32536U);
    msg.setSourceEntity(147U);
    msg.setDestination(40579U);
    msg.setDestinationEntity(239U);
    msg.timeout = 1859U;
    msg.lat = 0.9064045671804857;
    msg.lon = 0.7318820601238833;
    msg.z = 0.5150727005337622;
    msg.z_units = 166U;
    msg.pitch = 0.5477405176172999;
    msg.amplitude = 0.1747047983367731;
    msg.duration = 28268U;
    msg.speed = 0.660074880808614;
    msg.speed_units = 131U;
    msg.radius = 0.14181139404966459;
    msg.direction = 212U;
    msg.custom.assign("AHFVDVMONURSRMWWCWCAJEUUDCPYYLPFKYZXOXBWZTOBWQNMIFDGBAQJAGBJJTSDVXEMUUTUKZYPLLUKODALAVSPEBCIHNBRIORXLTOMSIQMONDGNVEHLGOF");

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
    msg.setTimeStamp(0.099130498983247);
    msg.setSource(637U);
    msg.setSourceEntity(227U);
    msg.setDestination(38030U);
    msg.setDestinationEntity(167U);
    msg.timeout = 61953U;
    msg.lat = 0.7562622095937143;
    msg.lon = 0.11030903912388401;
    msg.z = 0.041188607647131836;
    msg.z_units = 116U;
    msg.pitch = 0.8235723230306807;
    msg.amplitude = 0.07295418540935539;
    msg.duration = 37933U;
    msg.speed = 0.7675178921136571;
    msg.speed_units = 71U;
    msg.radius = 0.8650316676582189;
    msg.direction = 18U;
    msg.custom.assign("ZPAYZCFCSJSPKCRGKTGLTPXFLRCFBDLLXSBXOGRIYHDGKKEMVCQUANRMIHVOYGYVRJQIRDVIAMGNNZRCEEFWGBNYKEQUNBQMTUELTHUBWDPADUTKBBEINSLWLJYDEGOSAOZHJIFZSAYRZNYYMNKVTFFIWZSWCHMMOFZTDPTNQVQSOXWLFJCQLGJBXLIZOWRWTQICWSVAXOOHVMUPDUASFVHPAURMJWPOUHINPBQKCEPXDDMQEAKH");

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
    msg.setTimeStamp(0.756826130395254);
    msg.setSource(5519U);
    msg.setSourceEntity(220U);
    msg.setDestination(52263U);
    msg.setDestinationEntity(126U);
    msg.control_src = 26875U;
    msg.control_ent = 122U;
    msg.timeout = 0.8446520366600923;
    msg.loiter_radius = 0.9749979030789747;
    msg.altitude_interval = 0.00955174479925891;

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
    msg.setTimeStamp(0.9706248357914496);
    msg.setSource(26716U);
    msg.setSourceEntity(42U);
    msg.setDestination(28499U);
    msg.setDestinationEntity(114U);
    msg.control_src = 33684U;
    msg.control_ent = 19U;
    msg.timeout = 0.8805363035723924;
    msg.loiter_radius = 0.46416079390092124;
    msg.altitude_interval = 0.2860748628430203;

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
    msg.setTimeStamp(0.9923560407255457);
    msg.setSource(14961U);
    msg.setSourceEntity(89U);
    msg.setDestination(21373U);
    msg.setDestinationEntity(82U);
    msg.control_src = 41589U;
    msg.control_ent = 220U;
    msg.timeout = 0.8987456317455509;
    msg.loiter_radius = 0.4217617549248489;
    msg.altitude_interval = 0.5309253712954041;

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
    msg.setTimeStamp(0.33274858457842427);
    msg.setSource(30605U);
    msg.setSourceEntity(207U);
    msg.setDestination(27815U);
    msg.setDestinationEntity(159U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9817904738523499;
    tmp_msg_0.speed_units = 107U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7877974819745848;
    tmp_msg_1.z_units = 102U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3854924914661565;
    msg.lon = 0.4009272265345235;

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
    msg.setTimeStamp(0.4583399408118549);
    msg.setSource(5869U);
    msg.setSourceEntity(249U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(233U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5325843589210288;
    tmp_msg_0.speed_units = 192U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.49805600663772487;
    tmp_msg_1.z_units = 109U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.42733077757575644;
    msg.lon = 0.11640037426147765;

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
    msg.setTimeStamp(0.2720232036357595);
    msg.setSource(57465U);
    msg.setSourceEntity(232U);
    msg.setDestination(25830U);
    msg.setDestinationEntity(125U);
    msg.flags = 140U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4052714603910844;
    tmp_msg_0.speed_units = 148U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3415783268320862;
    tmp_msg_1.z_units = 39U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9313071166553549;
    msg.lon = 0.2866880542559578;

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
    msg.setTimeStamp(0.3855560284840909);
    msg.setSource(306U);
    msg.setSourceEntity(164U);
    msg.setDestination(52416U);
    msg.setDestinationEntity(84U);
    msg.control_src = 47779U;
    msg.control_ent = 230U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7429647126090723;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09632008924419788;
    tmp_tmp_msg_0_1.z_units = 52U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5141388106650362;
    tmp_msg_0.lon = 0.8430810361690891;
    msg.reference.set(tmp_msg_0);
    msg.state = 238U;
    msg.proximity = 55U;

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
    msg.setTimeStamp(0.1960209301120852);
    msg.setSource(36104U);
    msg.setSourceEntity(149U);
    msg.setDestination(19289U);
    msg.setDestinationEntity(54U);
    msg.control_src = 52982U;
    msg.control_ent = 192U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 100U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1599699009577269;
    tmp_tmp_msg_0_0.speed_units = 90U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9844807108104812;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6209593000350913;
    tmp_msg_0.lon = 0.33613454815791466;
    msg.reference.set(tmp_msg_0);
    msg.state = 20U;
    msg.proximity = 193U;

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
    msg.setTimeStamp(0.9087007637772502);
    msg.setSource(5006U);
    msg.setSourceEntity(201U);
    msg.setDestination(25072U);
    msg.setDestinationEntity(243U);
    msg.control_src = 16892U;
    msg.control_ent = 243U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 28U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9053562716344108;
    tmp_tmp_msg_0_0.speed_units = 62U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6873472635707898;
    tmp_tmp_msg_0_1.z_units = 121U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.33269141767138255;
    tmp_msg_0.lon = 0.6585099919390013;
    msg.reference.set(tmp_msg_0);
    msg.state = 197U;
    msg.proximity = 53U;

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
    msg.setTimeStamp(0.34026838486651456);
    msg.setSource(697U);
    msg.setSourceEntity(203U);
    msg.setDestination(59464U);
    msg.setDestinationEntity(178U);
    msg.op_mode = 93U;
    msg.error_count = 145U;
    msg.error_ents.assign("BKOHZGPJAAYNOANAMBCLGFRB");
    msg.maneuver_type = 10124U;
    msg.maneuver_stime = 0.22056813606415437;
    msg.maneuver_eta = 43286U;
    msg.control_loops = 2976443876U;
    msg.flags = 58U;
    msg.last_error.assign("MGIVIGNDJRBGBOPVBFEQNUTJMCXKCCAENUIZJRCRETRKMBPTMLOZJBUOUSSLDZBAIROSDSGUTMVURTQLFQWOWFOKUBEUQXKFOHGIWNKDEXMWPNFAIYPTUEWLTMSAPXFYADJLRZKOGTJERXPGTVGIFIYGCXZIKFQXLSZKEPHXHAHNDJWDOKYBYWCVNHNVCOPCPZGB");
    msg.last_error_time = 0.8596869755321691;

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
    msg.setTimeStamp(0.1074602575486302);
    msg.setSource(49088U);
    msg.setSourceEntity(182U);
    msg.setDestination(57451U);
    msg.setDestinationEntity(217U);
    msg.op_mode = 31U;
    msg.error_count = 99U;
    msg.error_ents.assign("KXABPQALRENHTCYGFOTUIVUDFNYLCNRTIJFFTNJKUIJAULHDLFBYRWKDVXVFXIJATBLRGQZJNCSEAEWRJQZWAOZEQYBEBYZOTZSXQJEVIT");
    msg.maneuver_type = 36651U;
    msg.maneuver_stime = 0.19334117282313001;
    msg.maneuver_eta = 52650U;
    msg.control_loops = 4280741891U;
    msg.flags = 19U;
    msg.last_error.assign("JHNPDOONLYEGGJFZAOSFDOPNBNULCVIKVYBEQCWDZQZVYGMUKZXJKYKCYEWSHPWEHSPLSQXVORNBNDYXOTASJZMTCHSDTCPUKVWHIVUFGPJFLQDFYKDUIXWBIDPM");
    msg.last_error_time = 0.08737603267372707;

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
    msg.setTimeStamp(0.7166775539797223);
    msg.setSource(59351U);
    msg.setSourceEntity(175U);
    msg.setDestination(53411U);
    msg.setDestinationEntity(81U);
    msg.op_mode = 46U;
    msg.error_count = 235U;
    msg.error_ents.assign("OOGFRHUPLNWKBBDBGWSUZDAYOISVIEYVTTPRSOWRCJTZVNLOAXMAAHYCYTXQNYUDFGMIEUBWYCDA");
    msg.maneuver_type = 14467U;
    msg.maneuver_stime = 0.33914775246407447;
    msg.maneuver_eta = 59392U;
    msg.control_loops = 1040927273U;
    msg.flags = 124U;
    msg.last_error.assign("DSNHUZKEEMGWRLRQMLIAWFOTYRCYRDGDQEWDYPHQJRTGBWHFHFOFXEEUUDAUNUZPYPZMCKEAWYTIMISUBXTRCOOGLQWAJLTVSPQTUNLDMBNSUKBKFAVNKXVTNYLACGFFGBVVVEJDYPHSPQGQFAYRCHHLWKBDOCQIXRXJMOK");
    msg.last_error_time = 0.007254980927045462;

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
    msg.setTimeStamp(0.7946929987609509);
    msg.setSource(12722U);
    msg.setSourceEntity(175U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(163U);
    msg.type = 212U;
    msg.request_id = 23478U;
    msg.command = 148U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6775240787089222;
    tmp_msg_0.lon = 0.7137323803327251;
    tmp_msg_0.z = 0.8845067419026007;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.7168681763123912;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.start_time = 0.0034523988174598452;
    tmp_msg_0.custom.assign("ZSWEGDWOGAQZHEAPQNZZGKDHRBBPBYSQJN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62813U;
    msg.info.assign("FDBUTGHYEGRXVRAISLOIZQYLSBPPMCJYUXHGEIRJYFXGJXNYKMQJKNCXHHEKSGHPCNAJYWDKHBRKALYPSAJNZQOXLOCLEDHTWKORDPMGBBSTKBNRIVFAVINUMOCSUNFKXAQEQUZIJDBJIUBPYCUIWFAWQNLZTFNLA");

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
    msg.setTimeStamp(0.3602282643844865);
    msg.setSource(63763U);
    msg.setSourceEntity(219U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(246U);
    msg.type = 189U;
    msg.request_id = 37626U;
    msg.command = 252U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.49888488886498894;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 26357U;
    tmp_msg_0.custom.assign("IEWYCRAVTVWHZRYILAPVVSMMVEAAYUBXGGRNEZLBNJXOANSQEDOIRPCDOZYWJSXHQFXPHUIDEOHZH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55768U;
    msg.info.assign("WFAHWLHRUNUFQOTLERYZWHZNUVNWHFVRSUBGVPFUEWOKKPJIZDHOGVXWPIXKGSBL");

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
    msg.setTimeStamp(0.16472775873037948);
    msg.setSource(28985U);
    msg.setSourceEntity(104U);
    msg.setDestination(14748U);
    msg.setDestinationEntity(39U);
    msg.type = 58U;
    msg.request_id = 25790U;
    msg.command = 233U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 62122U;
    tmp_msg_0.lat = 0.3812237102924232;
    tmp_msg_0.lon = 0.2061320509241994;
    tmp_msg_0.z = 0.024308143319749953;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.8003362262463098;
    tmp_msg_0.speed_units = 57U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.14324805065488233;
    tmp_tmp_msg_0_0.y = 0.38786283471662075;
    tmp_tmp_msg_0_0.z = 0.0495045065563694;
    tmp_tmp_msg_0_0.t = 0.25150790810003554;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PCIZBQDBEJUCPTJEMIAWNKXXBCTNYBJVUUQKMWSSBOVIGNSUQIESJZOVQMJFUUQALRIFIZFITLBWEUCARXMHBVQGNYHAQOFBTOWRVDEGYNWTDUMPDKOCXOXGKETSIOHRSMFNYMZSRQLCHZANPDMPSPIMKYLDXBXGPFXRWZHYUCQFHDJWYKCARAECLZGYJHZRVDNKJWYRGKVFAGBFVCTVWHNPVZJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42848U;
    msg.info.assign("FEHWMSTKFRMQHZSLTWBXOALTVAGZCMUTYXZGOZOQRIKKFQGIHOWEIRHALJEKUNLPSWYVDQFGFEYULBHTZ");

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
    msg.setTimeStamp(0.5215641615133296);
    msg.setSource(34165U);
    msg.setSourceEntity(109U);
    msg.setDestination(10019U);
    msg.setDestinationEntity(173U);
    msg.command = 96U;
    msg.entities.assign("BYKZFSUKSQRLSZETAELFIQAWJATLRAMXRSJXTMRHGNQSCYBKZJMPVVYUVHIZRKBREUBDVUOAPIEDYNLDBXRFDIWUTBPE");

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
    msg.setTimeStamp(0.9858502129799136);
    msg.setSource(11701U);
    msg.setSourceEntity(80U);
    msg.setDestination(7605U);
    msg.setDestinationEntity(251U);
    msg.command = 204U;
    msg.entities.assign("GXBKNNSMEZXWEOTACSLERXJHCGGE");

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
    msg.setTimeStamp(0.13539161164489244);
    msg.setSource(63814U);
    msg.setSourceEntity(136U);
    msg.setDestination(60706U);
    msg.setDestinationEntity(63U);
    msg.command = 143U;
    msg.entities.assign("IGLCDVSIAPPQBDVZSRXDXUJZLKZTZHYRQFZBTQUPTMRJQOWGDZKPOGQKMCRJALUEVMJHKAUQTYVNOLWWQEXZIXKWHYJTJRZUBDNIOYXAYHGZSOYTCFNEJJGKUALIOMGSXOFFYHFSYAECA");

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
    msg.setTimeStamp(0.7099917805330549);
    msg.setSource(17181U);
    msg.setSourceEntity(9U);
    msg.setDestination(24271U);
    msg.setDestinationEntity(109U);
    msg.mcount = 157U;
    msg.mnames.assign("UTABEGYGLHMTKASNGROMVUJTZPGVNLPKXVYMKTDNVWVEEPHCZDLPXWZIIMJPQSLTNOKAFHOIAFZNFQWZOKUYUEVJZHIBWAGMKJFIXEGBSGLYCLDNRBTOUHAWHNBBUNRSFCOUPCOBSIWAETQVITYSGLDZROXFDLCYMDYWDJHAMNUREQXXCKORMORMPKJXRJXXVDASCAYLUJKWQZQFVPFTHNWQCJBH");
    msg.ecount = 160U;
    msg.enames.assign("AXWGTRQMHJAXWRNORQDWQAOWJNEPWZNOGZQTWTIUMCEZUBDEIVLTZXBRPZLLBGLRKOTUVHUJIELFYCTDLZVCWDUHLEOXJAOJHAVTYQANKDZXKSXHDHHWSDIUKGCAIFTKVFAMMJPSYSRJRYXANBF");
    msg.ccount = 31U;
    msg.cnames.assign("BPJESOWDVMHXXVSRSHFNWZMBLDKJXIQAAGKTDZOQPKOHQAZILKYJIJMQUCYERPCNZSOTHLHT");
    msg.last_error.assign("ATXKJQDQTHXSAGTXKDHZCXDMAYSQELNBYXYDIRHMWIVOJSPCXMOFVHJSLNTCYJSCAFZ");
    msg.last_error_time = 0.9131667122021696;

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
    msg.setTimeStamp(0.042651965883156784);
    msg.setSource(14482U);
    msg.setSourceEntity(234U);
    msg.setDestination(9193U);
    msg.setDestinationEntity(148U);
    msg.mcount = 122U;
    msg.mnames.assign("ASWUJGPMHJQEZRE");
    msg.ecount = 234U;
    msg.enames.assign("MVVJBYJAQUDHYSXIFHNTXWRRKNABBPGAIYJXCZMJZKAMLNVXADFNMHROSXNISPUMAHWTSIRXDPPHOLPQSDPZURTYWBTGIHIGEVLPQKGKWNIEFFKOMXUUCJIFXHOGSPOGJRYUPXKOFGAZECDUXAEVTOHEDPGRJKWLZZQYNECMEWTLFBENKTLOCUWGYNQYBWDIVZVMWLCLIKTMUKAFNGCMFACYDBCEVBZRSLSJTEQ");
    msg.ccount = 184U;
    msg.cnames.assign("BBRYUZJJEMGGZHXOEXQSNJPUBWRVLNWZPERYOSOFUKIYZCSLKLBUSJAAFHXMDPVNBRHGYGOTUCFSCTTNJWVPGQYHEXDCDOXWHNWBZIWTFMRCBZVPKWFCCHHFABDKUFDZYKERPJMPQOYBTQNNWMIVJQJCSAYGYOIZDQQLVT");
    msg.last_error.assign("BESFDOEKJAYWHUZPVLFEUIFRRKIYDNPZLQGAOFTDXMBRRWFDQOAIIKAPQJXCOBGBLDNBECOCGGOCUVDHXFTMJVAUHMSEULTHNZTWGQLQIRYVNJKZKMOWWQACYTPIBEMMWGHHIGFWUMTXXMEVVPKLWSFDRGDZGVAONSOXYKCCXUAEZPKIPCQLASSJNJZPQSWMYYEBQZJYRUBTFBXLLZENBHSPCR");
    msg.last_error_time = 0.00016005033647881195;

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
    msg.setTimeStamp(0.4863375918629923);
    msg.setSource(3653U);
    msg.setSourceEntity(171U);
    msg.setDestination(45881U);
    msg.setDestinationEntity(54U);
    msg.mcount = 120U;
    msg.mnames.assign("SEVJEXFCLMPSNXLFODBKLIUWMOBQPRKYGRZDCZFYICQCJWPTTJKVTFRLXDUWNZSRLGXCZBKCQDDUYPFIBTYXKXVHMZZPEDNVISEYBRVMNLLENJDCAENNCQTGHOUDUSLGCTAMEEYQANVKAQPVIUGFWEOKIOUKMMVYHWASPMGMZADWFBJTAGJUTPTVQHRXGHCYFBADWSBVEYGFNBKFRAZMW");
    msg.ecount = 196U;
    msg.enames.assign("KFZQWRQGZABCKRVUHQAJNTUEHVHHJDQNICNCAPUGSTAWFNOJNUGFMHTOMUHTDEAJELVKSXRYMSQBODBRGREXFOZBDWDCTGAZULDLDVFZUFMMGOXCOFKREFEJVIBSNBMIYRMPUCYSSIHXHQAL");
    msg.ccount = 14U;
    msg.cnames.assign("OWMSIKDLXHTCMIWEIRIMFPZDRJBMFUAEZKBBTHNNBLBOASVPMILONVXJQSYHDWESELGPFQUCJARMUCKGZDNCGJFOXFTQEMJTSXEPPSLAUOYPMHWKLONCCOWZKNGTZQMBURICKUNIFTJVNDHVLGCORJARVGXYRHSWJFTHSHQGRFYIJSVGZXAGJQXBBRVDKEAAXGPOPHZVYYASWIC");
    msg.last_error.assign("JRAZKQPVQGVSPTUYMDEQXMOWOERZHBPNJSIGYZDEDNUZMXOPNHOYPALOHFIJOFLIULXBKSAABKKJTDNVLJFDRRCSYZTFBMTGVFKQSDSWPCMVWVCDJQYUHUFUGVLWVNZPLZVAGAPMZUWCLTRDRNQQBFXSOBHHTTWLJMHOECNSSXKUKAHESFFVXZAYCRI");
    msg.last_error_time = 0.45488806216253164;

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
    msg.setTimeStamp(0.4171518694487225);
    msg.setSource(48128U);
    msg.setSourceEntity(19U);
    msg.setDestination(55538U);
    msg.setDestinationEntity(217U);
    msg.mask = 178U;
    msg.max_depth = 0.18464715813326282;
    msg.min_altitude = 0.06084321411749927;
    msg.max_altitude = 0.4850956399766938;
    msg.min_speed = 0.08804566433075356;
    msg.max_speed = 0.7559779793344426;
    msg.max_vrate = 0.1975394959017852;
    msg.lat = 0.10001191966571132;
    msg.lon = 0.48411573194702795;
    msg.orientation = 0.9175000390659795;
    msg.width = 0.9069445681328796;
    msg.length = 0.7998895932163249;

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
    msg.setTimeStamp(0.6970940601520169);
    msg.setSource(44412U);
    msg.setSourceEntity(27U);
    msg.setDestination(58254U);
    msg.setDestinationEntity(149U);
    msg.mask = 21U;
    msg.max_depth = 0.5177505064835289;
    msg.min_altitude = 0.3296542958936207;
    msg.max_altitude = 0.8731498295650131;
    msg.min_speed = 0.6029373313541108;
    msg.max_speed = 0.18082434007591908;
    msg.max_vrate = 0.7382454574963014;
    msg.lat = 0.985843903163356;
    msg.lon = 0.45549900239512686;
    msg.orientation = 0.04605143192356631;
    msg.width = 0.08369514650080545;
    msg.length = 0.5778679838326812;

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
    msg.setTimeStamp(0.37365052471637883);
    msg.setSource(55514U);
    msg.setSourceEntity(208U);
    msg.setDestination(22735U);
    msg.setDestinationEntity(183U);
    msg.mask = 138U;
    msg.max_depth = 0.03016328065675722;
    msg.min_altitude = 0.7575340631713996;
    msg.max_altitude = 0.2121820063622143;
    msg.min_speed = 0.19045607755604488;
    msg.max_speed = 0.8485784060748676;
    msg.max_vrate = 0.18887567553079587;
    msg.lat = 0.7808811492925224;
    msg.lon = 0.3179096680809066;
    msg.orientation = 0.9992093441438817;
    msg.width = 0.896496846362244;
    msg.length = 0.7539237904505669;

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
    msg.setTimeStamp(0.8050473812205938);
    msg.setSource(41097U);
    msg.setSourceEntity(10U);
    msg.setDestination(37830U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.5423724660525747);
    msg.setSource(19361U);
    msg.setSourceEntity(148U);
    msg.setDestination(15798U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.6293399997688578);
    msg.setSource(7940U);
    msg.setSourceEntity(120U);
    msg.setDestination(26788U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.06209328035709338);
    msg.setSource(27061U);
    msg.setSourceEntity(132U);
    msg.setDestination(57755U);
    msg.setDestinationEntity(193U);
    msg.duration = 23590U;

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
    msg.setTimeStamp(0.028554574740810912);
    msg.setSource(16566U);
    msg.setSourceEntity(229U);
    msg.setDestination(38916U);
    msg.setDestinationEntity(200U);
    msg.duration = 52118U;

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
    msg.setTimeStamp(0.1610145367260084);
    msg.setSource(48045U);
    msg.setSourceEntity(80U);
    msg.setDestination(24130U);
    msg.setDestinationEntity(126U);
    msg.duration = 6432U;

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
    msg.setTimeStamp(0.5106227209613364);
    msg.setSource(53504U);
    msg.setSourceEntity(227U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(20U);
    msg.enable = 192U;
    msg.mask = 3048924025U;

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
    msg.setTimeStamp(0.6705766970838434);
    msg.setSource(59655U);
    msg.setSourceEntity(192U);
    msg.setDestination(42804U);
    msg.setDestinationEntity(177U);
    msg.enable = 199U;
    msg.mask = 4109697391U;

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
    msg.setTimeStamp(0.6599114050369219);
    msg.setSource(6059U);
    msg.setSourceEntity(68U);
    msg.setDestination(7778U);
    msg.setDestinationEntity(219U);
    msg.enable = 73U;
    msg.mask = 2447383941U;

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
    msg.setTimeStamp(0.15002711640320554);
    msg.setSource(12520U);
    msg.setSourceEntity(127U);
    msg.setDestination(53430U);
    msg.setDestinationEntity(42U);
    msg.medium = 150U;

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
    msg.setTimeStamp(0.1551960233266485);
    msg.setSource(55327U);
    msg.setSourceEntity(139U);
    msg.setDestination(24484U);
    msg.setDestinationEntity(77U);
    msg.medium = 32U;

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
    msg.setTimeStamp(0.852387489605213);
    msg.setSource(30366U);
    msg.setSourceEntity(116U);
    msg.setDestination(59125U);
    msg.setDestinationEntity(30U);
    msg.medium = 189U;

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
    msg.setTimeStamp(0.643960996421287);
    msg.setSource(55510U);
    msg.setSourceEntity(152U);
    msg.setDestination(3152U);
    msg.setDestinationEntity(136U);
    msg.value = 0.4059591936419008;
    msg.type = 118U;

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
    msg.setTimeStamp(0.3225259105661059);
    msg.setSource(23718U);
    msg.setSourceEntity(117U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9775979047502665;
    msg.type = 18U;

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
    msg.setTimeStamp(0.3573093943619956);
    msg.setSource(27187U);
    msg.setSourceEntity(193U);
    msg.setDestination(61534U);
    msg.setDestinationEntity(215U);
    msg.value = 0.12448649503741638;
    msg.type = 65U;

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
    msg.setTimeStamp(0.4097818034712932);
    msg.setSource(38731U);
    msg.setSourceEntity(128U);
    msg.setDestination(12403U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.48114221583008554);
    msg.setSource(20842U);
    msg.setSourceEntity(90U);
    msg.setDestination(26250U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.5474036266206171);
    msg.setSource(12720U);
    msg.setSourceEntity(87U);
    msg.setDestination(29936U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.29426308071669116);
    msg.setSource(42640U);
    msg.setSourceEntity(99U);
    msg.setDestination(57460U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("TXCRZLWNMUOPPGETZQQXGTOHRUYSDPROYJJSAJKVIFYVQEJCVIZPTANRNRLVKMYHZOCEFTFCBDNWEWZSLKAZFODWUBGIGDGCHWEBKBQCUKFINRLYZFJYLHSWOTMEXQNSYGWIXKAMKCD");
    msg.description.assign("AQWPWVHOIPJZMOXIVLEYAKPTYRSCQOGCCGQFXHAJLWBHUGUYTMYJBKDUEHMKFEQBXBYTARZQOPXGFSOLFEVAKCHYLKGAWDFXRPEIMSFBLETIOECVAYLUNREOYRKJSDANRLVGNSIPI");
    msg.vnamespace.assign("CBPUQIIASCALGZCZVWAMRVPJWFLQFTJUVEFVESQWFTDTXYHHLQCDLQSNMUBWVTCLRKXEEWJMPMFFOKWELEYOYSRRTHNZIZUYIHREOFIPZMFSDBKRDUNNZILOQFAOJWTCKXATKGWNVGXENHNDURFYQNMWJVJJUBIKZYAVXKCGGQHSKXBOT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DFLPQJBROCGMVUUWXIQHMIFQDOOZHAVSGSWBYJQDSQOBHJZKTNLP");
    tmp_msg_0.value.assign("UGHTQPDKALGMCPWHQAQLRGZDPARIVVAYKZIKSVIXUOEACEOKRZKXFRJVBSEXXNHJDKUWQSLMZUYHNABKDQXNSNCLWJSN");
    tmp_msg_0.type = 90U;
    tmp_msg_0.access = 79U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ROEMYDIAXTBVPBJJAKNMKHGQYGXCVVHKNUNSLPDSKFUWFKTZFHLZYDGRNFDIOVAGXPUGZVKHTJUSVEMQATQUCDMWOOTDXKEUPMSYLFSQXEGCPSPEXUNQPBVQOZINHWCRQEIZTERSWWUGOGIIDMFIY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IKQQFZCTYRLSTARIZUDYVSLFKHBIVFWHDZUXOQPBOTRWJXYUCAIGHPTGZLLNXUIETESWMLOIQNJKRJOBEQUJWPEJNIPOFYVRQKSMYECAUKZBICTSTWNXOBZLUZXGCXEPLDOGKAMJBMDUEONCDLMBYJZFCGYQJVBXMSFWWNGIYVGMSUAAQVYNEZDMDXULVKWCTSKGHJMQTHXNODQBJRAPPBWOCEGKPGVWHRHALFXRAASH");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 34751U;
    tmp_tmp_msg_1_0.custom.assign("BZXYMBEEGUTTHXGNGGEWVLWUAQTPHLCXNIQUHMCDUHONMZNNPDHYKHOHJCFVYDQCPLCIWGODPAJSXKSISHYOEETIRKDPXDSFUTYTUJPWIHDEKQZIFKJAAGINRCIZKYPANETQJKQDYBLBXFSRXO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::GpsFix tmp_msg_2;
    tmp_msg_2.validity = 30424U;
    tmp_msg_2.type = 117U;
    tmp_msg_2.utc_year = 1357U;
    tmp_msg_2.utc_month = 239U;
    tmp_msg_2.utc_day = 236U;
    tmp_msg_2.utc_time = 0.5805233136037534;
    tmp_msg_2.lat = 0.020195482462631476;
    tmp_msg_2.lon = 0.3934576216550911;
    tmp_msg_2.height = 0.2663474195886887;
    tmp_msg_2.satellites = 80U;
    tmp_msg_2.cog = 0.8658943762416138;
    tmp_msg_2.sog = 0.18783964598920266;
    tmp_msg_2.hdop = 0.022377434013745257;
    tmp_msg_2.vdop = 0.5394153308925526;
    tmp_msg_2.hacc = 0.5093712391201125;
    tmp_msg_2.vacc = 0.013851732470424039;
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
    msg.setTimeStamp(0.07103692497108893);
    msg.setSource(3209U);
    msg.setSourceEntity(120U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(70U);
    msg.plan_id.assign("RZWSXRDSFSXDXOCMHTQXMMMZTRJGHGCDBIZUVASTNLPPDAKOEEULDQORXRSXOHJJHEYKDBHEACRUMSQCOPFGVPIGTLFWDBOUWGGLSQQKNNSVUFNABYEXFVAMIVKRZVTNZJYJBIY");
    msg.description.assign("VIHWDTLVUSHDKLLZVSZEBZJVRXXDYPXGQKFVRACNEJIFSMMHPYQEEAYTNYVJCMYMZGQLBKXUSJBEUUWYMCUERTOUPIJILOUPZIMSWWWQLJIQPTTQTHDWPAI");
    msg.vnamespace.assign("CWWFWRARAOJNGLPWTDPLJDVZXGMFIFZPDMWKYPBVDWUVZIJGMIGYNAJUEHLQGPXKELTVOSODEZQARPZNTJKKNKLAYEISHHHBOFWRJUZEQFDOJQVPQGUTFSXGXNMRRWOVDPEOHQPOKYBIYVDBYOSACBTEFXVMMNBIZILIQTAJNVXTCDYMCZKSFKKCL");
    msg.start_man_id.assign("PCUCLEOTYUEOJMSKXFHLFPVCHHEQXXGRKSBMZGKBYJARYIGOCJLDPZFDSZPBVOKWOADUJSRHVLVWKWSZWTJWNHVNNCKLMHFATHZQHPEKIGFEMNVYFGXPSYVDTOIUTKJFTILGNUDLWAVBEDWEQROYSWZAX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EZMQCXQXRMPULRGLHBYWIIUFUFLNKIZHQXACGQYZOGNMIJVZYSRNWBQDHBDIVMOYQEFOEVDW");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8123441368358733;
    tmp_tmp_msg_0_0.lon = 0.2924107560094631;
    tmp_tmp_msg_0_0.z = 0.6874078332627385;
    tmp_tmp_msg_0_0.z_units = 148U;
    tmp_tmp_msg_0_0.speed = 0.7448856137248524;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_tmp_msg_0_0.custom.assign("UTOGXCHCSOSGPJLAXQLIESXUAZGZCWOEDKHWJRRICLYXWADURKVQMAFJAYJTZUZZFG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WSWGPCBLSBUXTCFEFYAPQIAGIHCDHPUJLHVUQLSJLAEXSAEZMNDKXKLKOZYEVOUFZSRXRDCMFVYQTAAHBVFZBYKWGBQYJYHRZFKNOAGGOAIFMPJCXTZDQZBORSGGHNNBFKNCOUIQSHBSGDSCJWFNPULNZMEQMTTVHPYDTVRVHOIIOECOEPKTMTUXVWLGYMCEZXVJDRAXWROIWJXLKUTMJY");
    tmp_msg_1.dest_man.assign("JLJBIOFZDNVVXANUEILQDLRGRKEHQNNHKSCCFVSPCXPBGWIOZITIEWPIHGGIFZXA");
    tmp_msg_1.conditions.assign("TMHHUDPMWUHSGPPZRMXBQPHSCFDLCTELNUAMIOXTWXFZSFMXYWHSHQKXYWGAEJLDIKAYKYRFGDPGUFXMUCHNESMCXZIFRBCYPWKDFIZJGYVBUEQMCDOPTAXINKATVNNOIZCSULIDNPKGBHQQJJOBJBAALDSBKBFLCNVDGKWHNUOWZVRAAJXJYZQORJCVYOFZGZQIWVXTVWLIEQORRQEHTERTORUSPBPIVAS");
    msg.transitions.push_back(tmp_msg_1);
    IMC::VelocityDelta tmp_msg_2;
    tmp_msg_2.time = 0.4886507567672077;
    tmp_msg_2.x = 0.7050980389969697;
    tmp_msg_2.y = 0.18078223883687727;
    tmp_msg_2.z = 0.05922873594531508;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PopUp tmp_msg_3;
    tmp_msg_3.timeout = 25389U;
    tmp_msg_3.lat = 0.8863666254484421;
    tmp_msg_3.lon = 0.2905049559973092;
    tmp_msg_3.z = 0.745216175355861;
    tmp_msg_3.z_units = 189U;
    tmp_msg_3.speed = 0.6151111619961336;
    tmp_msg_3.speed_units = 108U;
    tmp_msg_3.duration = 35695U;
    tmp_msg_3.radius = 0.22856126395750487;
    tmp_msg_3.flags = 88U;
    tmp_msg_3.custom.assign("TKWXUKRUWGJLERJIPXPIQWYRZDOXIZ");
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
    msg.setTimeStamp(0.7283902150463792);
    msg.setSource(56621U);
    msg.setSourceEntity(143U);
    msg.setDestination(59720U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("AEEVYNOZDXYFJFBHNJORKFBSLHDOXTRMCSDVUUBJUQZCRGYKPYAPQQJBOLWCUXNLSYQETCXIAFDZGRZRJLTGDPQMSRPWJISELBJQWVRIGEBZCQUPXFUDZMIGPBBMMMTVCJVDKJOCUDTVLHKIPHQGPGMSFUEGHCSXHKNMSTOLWI");
    msg.description.assign("JLEPPLFKYOCXQSCYLOCDXGIBEPBGWCGJRUEXAMWJHOKDAZJWZQBJGWBMZYMNWBEFVTWQAFRTQVSZCKAGXFWWOPFPHFCUPR");
    msg.vnamespace.assign("DDOYVJPWZMSENQGYSSQBTEOQTKHWZSMZRJHDZCMIFMRCJQAEFHRJWYCZJUHEPQZMUKVNNTGXRWVORYGDPHZBKULASDQPI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JRKAGRMYWWADIIQAUDLGHEKBSKQJXNMFBUEOMBSMDUUVLQFIODPBVGDHSPCWUYGZCNAAMHTOPQXCYNTPGWCUWYFDORWEVF");
    tmp_msg_0.value.assign("TSNWYJFRLUZRBNWMZUYPAHMFDAWGUONFIOHTRFLQWHCRBEGDMKDERWWGAABOTSOQHPDOXKTOMUAHNBHKSTPEGLVXSQPNWIYPXGDVDQNEHBRPPKWUACCZALVPQCUIINJTRTDJAFLRIQJKQEMHUIZJXZBSYFCKKNZ");
    tmp_msg_0.type = 26U;
    tmp_msg_0.access = 177U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AHMLMBQXBXKJZZWCTPZQMYPNRXJJPWEOHJVHRBROJODCTVUJANPZDXNFVZYKPHWFOZYRGWOVQLUNEFPMOEDWVXLXHHTKRVXNKBWTGKGXGYSYCGDLGQFRIZVQNSMDKSMWQWCAAAEQEROOBLEUACWTCLMGZSIURAIXLCLCBHOFIJEBTCJUTHTKUSAWDBHKLQVUUEBPADEDYDSGYFNRSNHIYYFSSSMI");

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
    msg.setTimeStamp(0.9924249550887376);
    msg.setSource(22185U);
    msg.setSourceEntity(179U);
    msg.setDestination(33672U);
    msg.setDestinationEntity(212U);
    msg.maneuver_id.assign("PMNULGFROGAREJUHYNOXHUQFREGIRKBBRCCVSONIPHPATYOUGKSYJAZLBSLQWWYIHKBEKISAHBTKDTJGRNLDMFXMDZWKLJDJEDPIRVNIUFNZGHXXEUTSLYBXDQCVQXVIJXTLWXBHCCOUOXZMOHHRBEESDJQPNYAZJZNPUVSVLFDBRFUTZ");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 52327U;
    tmp_msg_0.lat = 0.7916601875706322;
    tmp_msg_0.lon = 0.37051150108338615;
    tmp_msg_0.z = 0.5202103375437368;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.speed = 0.5563767434056647;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.duration = 29681U;
    tmp_msg_0.radius = 0.4736500257086359;
    tmp_msg_0.flags = 155U;
    tmp_msg_0.custom.assign("GBGXBWZEXJFFGMBKJIOHDNEXBLPEQWGXERVMKAUAYDIFCDHNLPNKPBAMNPYSQHWYJKFUMREYTWUUFVRLWLQIQJSOI");
    msg.data.set(tmp_msg_0);
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 243U;
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
    msg.setTimeStamp(0.9814979719423236);
    msg.setSource(43132U);
    msg.setSourceEntity(246U);
    msg.setDestination(54890U);
    msg.setDestinationEntity(251U);
    msg.maneuver_id.assign("CLHJQTWTGPBGWCFCYSEQACDONRXRHIKKRREFHYLIVYTFWMFSETQYONFMSCNXTNAEKMJAYEHHNPGKCQIAVPAUEUOOONBJWRZJGCXHSXURGLMQEUPDQFQDHTCAVSLNVKMASMXJOIGZDVFVKSZKOPBNPV");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 29916U;
    tmp_msg_0.lat = 0.8514477244358523;
    tmp_msg_0.lon = 0.6752622576960496;
    tmp_msg_0.z = 0.8639896907110202;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.pitch = 0.2462105652413722;
    tmp_msg_0.amplitude = 0.5943029395116423;
    tmp_msg_0.duration = 48280U;
    tmp_msg_0.speed = 0.7139516671339744;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.radius = 0.10380406209493664;
    tmp_msg_0.direction = 203U;
    tmp_msg_0.custom.assign("UKPDXIZULYLPYAJDHHXGQKCQZTTECESIBMYVCPOLNVXRINOYCEUQVGAFGSBMSAJMMYYGTSNKSBHJKJFXAPVHCMBHKNUELPFFRDZHSRDWETLJZMXDNKVXJNWAEGTIRDBWFRQFHZCUCTMAIBVJHPHXAQTTOOABCDVIXYLDIUGPPXZNWBRLVSGFNQVEEBEGIO");
    msg.data.set(tmp_msg_0);
    IMC::LblDetection tmp_msg_1;
    tmp_msg_1.tx = 36U;
    tmp_msg_1.channel = 72U;
    tmp_msg_1.timer = 20622U;
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
    msg.setTimeStamp(0.8747856519618182);
    msg.setSource(2746U);
    msg.setSourceEntity(216U);
    msg.setDestination(13609U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("QREAJBJBCPIRMIJPHLTZASKLRODSPUNLFYPHJVZIXAVDHNYDIWWGIMXXUJWVPGHFZUUMGQBBXZHDYGEFOUYMJGFOEMCRQVVMAVSCKWUNWVCSCCQFYTEFNJSGKFXLRUBPVSMAKZAKLLBTZXYARNHIPIACEIROMGYTRLCXNZYDJEJKJGZHQWOQBKPYCQUBEKHLPDOTDTVNQFENEKWS");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 53519U;
    tmp_msg_0.lat = 0.7445640966725534;
    tmp_msg_0.lon = 0.9751722486599981;
    tmp_msg_0.z = 0.37411407447867717;
    tmp_msg_0.z_units = 79U;
    tmp_msg_0.amplitude = 0.8956954470084062;
    tmp_msg_0.pitch = 0.1900471222486778;
    tmp_msg_0.speed = 0.5786207545279911;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.custom.assign("BMKKLCNTMVRTJJHYIUUDXBNREAHNHTWIBDNHQOVALHJCYXFLLVIOZQLFKJMQUDMLFSTHUTKQFORNGBYDAYYSSUHWZSJXYVGXRXZPSDNRFBGZRRSERKTSDKZYDAWOFPHKRTYJVEYENECLEWVEVZOUUPZCLPUGIPQVAKASFEMCQZMDJNJYDOMZCAOBPTKCIWGHSDOWEUFHOLEBIQXAWCIQPQTVOBBWUVIMJGJAZCFPLWGTQGPXRMIAGN");
    msg.data.set(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 137U;
    tmp_msg_1.frequency = 343074638U;
    tmp_msg_1.min_range = 30198U;
    tmp_msg_1.max_range = 36535U;
    tmp_msg_1.bits_per_point = 40U;
    tmp_msg_1.scale_factor = 0.663927969157611;
    IMC::BeamConfig tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beam_width = 0.8617344259276222;
    tmp_tmp_msg_1_0.beam_height = 0.682196974541432;
    tmp_msg_1.beam_config.push_back(tmp_tmp_msg_1_0);
    const char tmp_tmp_msg_1_1[] = {-43, 1, -21, 5, -1, 48, -2, 76, -18, -42, 19, -102, -128, 124, 92, -73, 53, 71, 66, -13, 43};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_1, tmp_tmp_msg_1_1 + sizeof(tmp_tmp_msg_1_1));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LcdControl tmp_msg_2;
    tmp_msg_2.op = 1U;
    tmp_msg_2.text.assign("MWVGDPOVALGTYFLQUNFIQUXMIABGJYJOYHMANCTKWWNHEVDGGHQFGYTIHUIMAWQAEMSKACFDTBSDIEPNFPZGXFIRRIYGHNUMVQSDZDLWXAYWSME");
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
    msg.setTimeStamp(0.6449691961096914);
    msg.setSource(61884U);
    msg.setSourceEntity(209U);
    msg.setDestination(16261U);
    msg.setDestinationEntity(130U);
    msg.source_man.assign("IFTASXRIQURPPEYKBJQLJJGPYRAQOOPUOSKTKEDOPRBXNIWZTVWRM");
    msg.dest_man.assign("OHFTPGFVIRNBQZAUTXMGATHKYCSXQZKNCEFDUPVFOJXJVKORQJBGHUUJBMYSZCACQLVLZXFXIEHDJXPOYDDERLNTNJRAUWP");
    msg.conditions.assign("KXOCDMQJSDJZGVDHNTNLWOAEQXNICHZOCPQIZFDESORGALCGTBQUFWTIYLBMYPMLUJYA");

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
    msg.setTimeStamp(0.5644551431993018);
    msg.setSource(61820U);
    msg.setSourceEntity(146U);
    msg.setDestination(27946U);
    msg.setDestinationEntity(117U);
    msg.source_man.assign("VBJPZQKKSTAXEUWVSDFQJTZEAHMRBHENGEWIUUXCVGMKHQGRZIIULYUAEGXZOYVZIURELWMSKTVBABSNCDEKHQOLSECMZXNPJLMWSJJFOIMNXNJDHIAOFJLATNYBFODYVFTZKMRMLWGAFPCYIPLHFCRVHGPCPGWNUKRQCOBDAIYSHYDZJIMKVILKCYXPWUBPBVATTJRQEOWUNXDWFAXDQROLBEDSZNHDXRSTYOGGFJQWCUGQL");
    msg.dest_man.assign("IBUEMSTIUZFJVZHHPYPOQFTMEVBFZZXGTCBDMBDJJJCGONXBHHLDRSUAPOIRDOHRDQRQJQFRGMVCLIEMDTGUKGUKFXCDIEIEJOWOMSFJBKZXWBURWILJPZGWTQPKQLKZYPKGROACWHALSRRCWSUVZVJPL");
    msg.conditions.assign("VUDVIEBLNXZULXOFP");

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
    msg.setTimeStamp(0.9654572575233334);
    msg.setSource(22703U);
    msg.setSourceEntity(92U);
    msg.setDestination(64884U);
    msg.setDestinationEntity(182U);
    msg.source_man.assign("PHSKITVTNAVURGPHPGXRBMROCQWNKGEFOGXRBLLHVFKLTHTPPGICSSPIJMBNPZYNJLQEWUQWLKDIOQBRRSJJFXDVLYJYPTZMZERXRKTLOWFGESLBZHVANXKWYOAORCVQICDHUJTDEEWWHMXGCSUEWAPOMGQFUDFEZNFFIZBYGLCXAEAJCMAYURQQHMXAWAOSQZG");
    msg.dest_man.assign("UZPSJWCRIPHYXJHGLFO");
    msg.conditions.assign("IHEDDMIGYTZMSHYTCKOLMXUUYIBATJFMGVWIWXXCULWOUMPEWILVQFBLXAREROFWUZVLHAQNDYHPJSMBENXMXVJDVYAQIDZRXGMZRTPNJBFSMRXZCHAZBDQAPOTSBEWNJRDQKTWETWFULJ");

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
    msg.setTimeStamp(0.5173216334641423);
    msg.setSource(44440U);
    msg.setSourceEntity(210U);
    msg.setDestination(63324U);
    msg.setDestinationEntity(96U);
    msg.command = 0U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QZFHZFZZSNPSVVFOVIIVQCVADDDNVIETRRHLUOZLTDGLKEHTHHZGGLSKBIDCROPHWPIGGETEKPKKLSGDIJXFAXU");
    tmp_msg_0.description.assign("CXHSHEXLBGJEICGGHYPRWAOQHHTPCHOBJAXVKUSKBERWYXOQHVRJXNRLZKPUZOCTWQAMLCFUVFVXWKIBQVITRVDPXHKRNRUDJZQDQNEQM");
    tmp_msg_0.vnamespace.assign("CNIYNWLLSPMNRDNIJMUBABTC");
    tmp_msg_0.start_man_id.assign("DBKCGFXCXRNWJGDWUZXBFTGJRELFQLSHPJBOJYPNNKSMMXVZXPEARIRJVKQKPJDLFFRQTLCBJSYISNLVMHKPHOVCEUVLIUGSGKKUHYPICV");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9544024765231494;
    tmp_tmp_msg_0_0.lon = 0.2631657405805212;
    tmp_tmp_msg_0_0.z = 0.7952841670806119;
    tmp_tmp_msg_0_0.z_units = 149U;
    tmp_tmp_msg_0_0.speed = 0.985722258611405;
    tmp_tmp_msg_0_0.speed_units = 18U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.1972586436977385;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6558153189815941;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("NSOHUJKJTYRRBBOEBATQMGZCMHTEMOKBVZANTUTKHWZHOULDWKXCCEOAVCDPJAYJSLIDLLUYPMRCAAEGUGFQSSXBQNYZITSPVCOFDBFSCFVKRYQQAMWFLHXEWGLZCBYUTWFJKMIIUHOVIKGIQVZZPMYZEHNQAZFNKXRVEXNHWEITYNJWUCCNGQWZDVDOPKROWDQLKXPRRDNNIEFPGHJGVMLMAHTPFXVSG");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::Announce tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sys_name.assign("SLFCJAUJVERPXXKJOSQPACMVMYEFMFNFHSOSVTHNKHUFRWKMDPNYAPWADUVNEBZZRTXTUBJIRXAOGYZZGMLKNFZWXEVDOXZBMGEEKBJAOCGHOLCTNVVWFOBTQTTRWHHCUACSPBIMYAIKTBQYWNVWBH");
    tmp_tmp_msg_0_1.sys_type = 183U;
    tmp_tmp_msg_0_1.owner = 30132U;
    tmp_tmp_msg_0_1.lat = 0.351390793786027;
    tmp_tmp_msg_0_1.lon = 0.9135516153340024;
    tmp_tmp_msg_0_1.height = 0.03679824830864631;
    tmp_tmp_msg_0_1.services.assign("ZJXYTXOZOUMETUVYWYTVSOBKIRUSPPXDLLMRXUHMEXSNAFFZQLXTNKKLIMLHGCMSURSIRMILXAJGFMQCQYKTVDOSUDWAGSPDOPCCJDASDGFGAGYEDPNNEHPULEGXOEWFWVOLFHJHBBHPBMZBMZWWOBCHTGNGWSKZCEYRWITQUYQVIKDLXVYRIHNFFWMTKEAQAGIJDRVNAS");
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
    msg.setTimeStamp(0.4077237174402706);
    msg.setSource(3964U);
    msg.setSourceEntity(145U);
    msg.setDestination(34933U);
    msg.setDestinationEntity(225U);
    msg.command = 81U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SKWHGCNAPAWBHBFYVFTJNBQQHURZFQMJEYLZEVIFNFZXBNBCVGVSCOZIKMBNRDDYYDCHUBUSTEC");
    tmp_msg_0.description.assign("ZLSALVKUBJZENHEBHIYJMNCATOIQXXXNLMTKGTSFAVYRDVSHUJOPDMQFHRUDJVVQRDEARNJIPKYIYUVCYGNPHPCZURFFQCALE");
    tmp_msg_0.vnamespace.assign("EVKZAFIZHXCAWWEUVQMZJGKYOVZXDUDGUBXCNHXCARTSQEOMKTLOL");
    tmp_msg_0.start_man_id.assign("VWHADYUPGLVIFPUFOSZENXQJLXWMFZYGFSRPNEPBCODJUGZOJGIDGNTLQDBVIAYUUTZOIHEFPFKQBICOYQANBDM");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SSGIZIIVTYRKHPRJCHIWEQLNVUIQFKWEJHRNLGHUBAYOBPOEASARQWOGMBEUVVCOIHEJKUBJTUTCOMLOGVYQCZSMNSNGXZZBAFQLHWWARVKDBZTWXYGMGAAAEWVEYOMTXXPPGYUFWLJNKKPXWGHSCUUSORJNSDJCXFXUIPOJDTFTLQNYSPMOBCIHKSDDPNDLXNZKNCMZBJCXLDFLFQQKPZUIZFMTKPBEEMFQYYVVZD");
    tmp_tmp_msg_0_0.dest_man.assign("OBIKTFFGMRGIHLYXVOMTYPUYVPBLOZGIQDXWEHKBVRAOTSBSRRWYAOSLTFGLRUERPSYUHGYDECGIBZTLCMJNTVPNKHIBFZPXPCWEIJCJDWAHXAVOWHJDESQAAROKZVHCCJNDJ");
    tmp_tmp_msg_0_0.conditions.assign("ULIIUDOPHZRFLMAPIKPWWKMSKOJCJIDYVRBBOGNDUMBRZVA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7824771085517926);
    msg.setSource(28374U);
    msg.setSourceEntity(124U);
    msg.setDestination(14136U);
    msg.setDestinationEntity(43U);
    msg.command = 161U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TBVCSBXNEUOUGWJLPMLGVFIOXHINCZLYQPU");
    tmp_msg_0.description.assign("IIOQFASATPUONSXWGUOJBAGVYTPHHLHZZVPYGXIRMRVEUBKSLAKWRENQRORDLJHUWLETWJGKCYTKNJDPUSOMFRLWNBVGZNHDJVXBAOKTYPVECQMIPFCAGLDXIZITWSEKWDZXJQHKWNAESYZBHRMGKHBFLEYHRSGYNPDKWGLSCU");
    tmp_msg_0.vnamespace.assign("NCJELMATTCXUMHXZHXAPTKWJJIDGSMFREDMNFPLZSJBNXBINQPVEUWUTMCIMCIIXYODRGIQHOUOQRCLSGHAGMCHXJABYLQELVFIRLGVCDPZAXCENTKTDSPZVWUGKYGPDDNOERYSFAEJV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EYILANWDKEQFMWZXOBJJIKDKRTYFZL");
    tmp_tmp_msg_0_0.value.assign("QSUZSOOKBLQDCTPZVRSKBNGFFVVJLHACAWAUHSAOEPXBNRWHVD");
    tmp_tmp_msg_0_0.type = 55U;
    tmp_tmp_msg_0_0.access = 213U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HPXKJPKRLQSHBEXZVQQWBFOCWZZMOMYZAMZRDMTOORUNTXUHZADWHQFRVFEBSHJXEHSLNPCLQBCRALOFUMDHVAGTJFLYIQGUJDRVQUWBYMNXGWSKZRDCLVTKMNNYWMDPMVYXNBSXCTTKEFIACTVRLRUYJGFFKD");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BLWDPTLYFWUEXPLZVOTKMOEHTSUMASDSZKFJAVT");
    tmp_tmp_msg_0_1.dest_man.assign("EVTPHEVHVWLSBRTXDRVGUSEBGOJQRYCSQYUYQAMRFFDGIPZVHWGUJHYCMFWZMDSKIPDEQDNKXOBGJHKUQHNBFWBMZMZOFQIPIVWHXYZMZXCTJCI");
    tmp_tmp_msg_0_1.conditions.assign("MUCDEGOASNIUEXLUAFWGBMZVBRCOANULEVGIKENMZLQBGZQLFHGEPZCTPXSD");
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
    msg.setTimeStamp(0.776526508590838);
    msg.setSource(53348U);
    msg.setSourceEntity(117U);
    msg.setDestination(42389U);
    msg.setDestinationEntity(238U);
    msg.state = 102U;
    msg.plan_id.assign("PZDBVMCDGXOSAKYIIEFOVIRCLPBQFXNFRIDUQCUKSOCYVEVWHLBLBHJGCYCSMQUDGJAAFEJRATFOFGTWLYEVZXZLTJYRFNDJHSYIMAUHFDLGNRVDISXIGWLTUNDAQZSTUBYOHCBHTKOREMWEQZSQJZNPXFNYGPQVATIWAHXGB");
    msg.comm_level = 150U;

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
    msg.setTimeStamp(0.5942948328803346);
    msg.setSource(43011U);
    msg.setSourceEntity(132U);
    msg.setDestination(21404U);
    msg.setDestinationEntity(105U);
    msg.state = 215U;
    msg.plan_id.assign("HRVCRJUTLLFIXHZNGDDTCUWFARJYCJMPKTMGPKVJOMHYVQVQGBOZEOMJQHYGPGKDQPLSAOKUFGLIWZQMNRLAQEOSYPBUZHKKKCEBVRPQHVRTSBLEDYHAIFUMZLRHFDTKXBPCFDTEXBJYGWBDNWFREJOVOUUJHDIDAQEREYBESLSLIWCZKZPFOXXTNIDCPGAGMSYQESAXYFJYKNXNCUTUVIRTZAXNI");
    msg.comm_level = 243U;

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
    msg.setTimeStamp(0.8672788636819729);
    msg.setSource(54175U);
    msg.setSourceEntity(47U);
    msg.setDestination(44835U);
    msg.setDestinationEntity(19U);
    msg.state = 127U;
    msg.plan_id.assign("EOGFBJNDHAMKGNDWDRVFXICRZWEBTAYAEBWQWCYMPITUVWRDEROSBGQV");
    msg.comm_level = 216U;

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
    msg.setTimeStamp(0.7890749608262377);
    msg.setSource(21098U);
    msg.setSourceEntity(53U);
    msg.setDestination(5467U);
    msg.setDestinationEntity(184U);
    msg.type = 241U;
    msg.op = 217U;
    msg.request_id = 56100U;
    msg.plan_id.assign("VROQPKQJQBASGSHMYKDPXIBRGIZPKMETELKMBLHZIAPRGMFRNKIFVWBKYDXKWBHUPDNXJPLLAYSUVQNHKERZJTLDTDMJELVKHCUCDACHLSZHSXCLJORAWSDGNVKPNRZFJOBNFGWEQVOUBGZUSWBJMIHRAAVQUQXLJYJIZVZYOTAHYWPYNZWFGOGQSETZGQTTAWUXMXCFVHADOXTPBEEMUSRINYMYNOUGCCXVIXDENCSFTFICWMPFQ");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("HVZFCFWMHQGARYZUNPIHVAYMMRXHVKGUXUSLYSLGWOTDHXQNGLBSREPCRGHYMBYDFIAIUPWLWGEKQXFUQGTJKEVOKLZQJSDNJJTNWJFBPZJGECMBCAXIBECUSDNEUBDLFSZCDLDIVYHIEIIYOOKKOYMJIZMNRQQPF");
    tmp_msg_0.message_id = 31386U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZRRJIHYPWMLPEWXYWBDGISFOSUALI");

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
    msg.setTimeStamp(0.6845842525637978);
    msg.setSource(62446U);
    msg.setSourceEntity(243U);
    msg.setDestination(16685U);
    msg.setDestinationEntity(80U);
    msg.type = 244U;
    msg.op = 10U;
    msg.request_id = 55835U;
    msg.plan_id.assign("THGALSZBMRIFNAQNKQSUTZIVLEEKZWLMUBFBMOFWBPZBVTJXQSYDOSVKTQALYKZGGKAQKCMHTEIWUOJDOSLZOHLHSUDVTIANPVCRGAQNXCVDGNZWCJSVAPMVYYKBS");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 15169U;
    tmp_msg_0.custom.assign("NVUKJUIDYFOBQRMOEDKPISACMPFBSPXTJOLDJAIWN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AQAHVXZZPHTXJENCFVYCVGVMSZUFAWTIYYNXRBPEGSMVGGITILDRBFYTEODWNHMNGPRMGCVJVJPDTQDOWIQUNJYOKXBCGUBNQWXDPVFTKEJZQULVSDPLSBZRYHUMMIOJGYENTXASKDAMOAHWPSAFNOTQJYUFWTLORBRKIAXREYDQHCRFIKSMIAGFWLBSUMHIDCOQJZSXL");

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
    msg.setTimeStamp(0.47120737793336964);
    msg.setSource(44152U);
    msg.setSourceEntity(134U);
    msg.setDestination(20166U);
    msg.setDestinationEntity(163U);
    msg.type = 217U;
    msg.op = 221U;
    msg.request_id = 54317U;
    msg.plan_id.assign("FMACXQXJRPLSTOGBUSLXALGAWGYSKMQVACJSZLHHNVXMHKHMJIZBQOBFCPXTTHIDEYCJNNXFCDDTIDGKOGERKEYVIARJCAUOCNKEPYKBLOJYWRNAMHRTXVFBQNFKREARJNWSLIZXDUHUVVUMYBLEIDMOSTPHGAODPIEYQNQBWTWPPWUXCAQYMJKDWGVZHNEHDBXBYJUSRGFELMOPDMWSUIKUTQPWLOVLYONGSFFUJQGVZTQRZRTWCF");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.21515182019587786;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IFYLOHPCKQMCBSNRTDBSFKDNRJQTFBVHXWLHIDQABQHMKEURHPDCNYEOHEDGNPDPXVRVOXGVOGDBOWJVIGPGPKTQUPXTAJTLKUQUVJIRFENLZZAOSBCZACZYYLQCDCWQFFBUGKIPLEYJMMUVRMXSE");

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
    msg.setTimeStamp(0.6992285967637878);
    msg.setSource(51301U);
    msg.setSourceEntity(12U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(97U);
    msg.plan_count = 2730U;
    msg.plan_size = 2883563716U;
    msg.change_time = 0.25288498144848326;
    msg.change_sid = 29830U;
    msg.change_sname.assign("GVORBJYKDCNOLJSZLRJVUHKXSLWGEDPPI");
    const char tmp_msg_0[] = {-4, -55, -8, -14, -41, 118, 105, -53, 91, -112, -11, 115, -125, -91, 14, 60, -100, -10, -52, -77, 35, 21, -128, -71, -98, -32, -117, 69, -36, 29, 103, 80, -17, 63, 68, 84, 114, 32, -114, 67, 58, -38, -68, 39, -111, -39, 2, 41, 35, 95, -126, 30, -94, -29, 55, -37, 9, -46, -96, -30, -16, -40, 43, -58, 55, -39, 57, 94, -106, -80, 8, 99, 6, -109, -123, 116, -106, 17, -2, 100, -11, -102, 79, -22, 39, 111, 102, -102, 6, 47, 70, -36, -109, -95, -83, 40, 28, 91, 25, -103, 18, 18, 33, -85, 4, -118, 110, 60, -40, 45, -23, -89, 105, -58, 34, 4, 6, 93, 93, 43, 74, 83, 37, 48, 96, 116, -80, -1, -1, -105, -29, 126, 80, -22, -28, -17, -84, -26, -17, -116, 58, 110, -63, 13, 48, -123, 67, 105, 23, -29, -28, 58, -5, 2, -16, 115, -42, -51, -103, -43, 65, 60, -117, -63, -5, 122, -48, 113, 37, -33, -43, -74, -84, -5, 55, -128, 35, 18, -23, 110, -13, 106, -88, -65, -41, 108, -23, 8, -51, 87, 16, -15, -100, -93, -25, 122, 3, 60, -98, -32, -79, 52, -42, 29, 103, 85, -43, 0, -55, 109, 55, 103, -47, -56, 54, -66, 6, 110, 87, 95, 116, -19, 57, 70, 46, 55, 43, 39, -10, -82, -43, -33, -44, -68, 54, 109, 93, -40, 36, -100, 91, -37};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DLMVSXUUFHGBFQNYNHCTRWPRHGIHSVFNIPJELHOPKPNOPCZGOPBXXNIV");
    tmp_msg_1.plan_size = 56867U;
    tmp_msg_1.change_time = 0.4734965318251111;
    tmp_msg_1.change_sid = 32481U;
    tmp_msg_1.change_sname.assign("ZDZEJOYUWXSBDYSTIGQMXLIWHMUEDBCGLYVZWSSMBCVHLLNWWNCEDNWZKEMRIHGMBUYKKXX");
    const char tmp_tmp_msg_1_0[] = {72, -106, 70, -69, -43, -18, -74, 94, 49, 68, -81, 118, 16, 31, 45, -10, 5, -35, 74, 62, -64, -39, -13, 93, 124, -110, 78, 13, 34, 62, -44, 124, -79, -60, -121, -54, 33, -29, -49, -72, 35, 117, 117, -119, 64, 49, -80, 14, -90, -124, 118, 106, -23, -10, 5, 26, -74, -46, -36, 46, -108, -27, 63, 5, 61, 44, 49, -23, 43, 87, -88, 59, -59, 18, 28, -82, -49, -117, -19, -76, 44, -25, 4, -93, -30, 27, -72, -50, -106, 8, -3, 13, -41, -25, 103, 82, 50, -107, 48, -54, -107, -80, -35, -70, -5, 115, 5, 24, 59, 3, -71, 102, 9, 117, -97, 68, -26, -22, -121, -2, -27, -49, 111, 94, 94, -108, 70, -46, -20, -22, -9, 89, 11, 75, -69, -81, 122, 5, 82, 21, -119, -64, -123, 71, 116, 38, 81, 57, -73, 0, -87, -26, -93, 19, -28, -95, -116, -22, 58, 70, -59, 102, 66, 91, -53, -109, 101, -43, -7, 61, 66, 93, -72, 60, -116, 35, 96};
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
    msg.setTimeStamp(0.7673763204274391);
    msg.setSource(36252U);
    msg.setSourceEntity(15U);
    msg.setDestination(29565U);
    msg.setDestinationEntity(183U);
    msg.plan_count = 35101U;
    msg.plan_size = 559234502U;
    msg.change_time = 0.9843516209066706;
    msg.change_sid = 63419U;
    msg.change_sname.assign("TBUGBEUYDNJGLUOBYNDINMTQWSQQPZSAYTZKPEFKEZUFBWCFMFHREKOTNJMJHARNPCVWGCQWIKHKZSQDJIZUGVSAHYOZBYUGABIPXWWEBNEHUZIVVGCHXAQSAPVYBGMOYRCCZXPHTDOVPAPJSLGHDFOOTRAIEOLNYJXJLNXWRHPWSRTJAKDTOCFEEULMDOXLQXMEKWILQSIICPDDLVKVFQKHLYQZNXMV");
    const char tmp_msg_0[] = {38, -9, 71, 93, -45, -29, 44, 107, -111, 79, -39, 32, 48, 52, -113, -80, -66, 44, -64, -40, 113, 77, 121, 118, -87, -73, 44, 43, 53, 111, -13, 78, -86, 38, 109, 65, 43, 97, 62, 69, 26, 76, 54, -116, -21, -85, 73, -60, 95, 12, -62, 90, -83, -71, -34, 82, -38, 96, -16, -80, -54, 97, 52, 2, 29, -47, -84, 125, -128, -112, 109, -74, -11, 88, 123, -67, -20, 66, 104, -85, -7, -32, 118, -19, -75, 61, -115, 5, 14, 113, 97, -50, -121, -52, 126, 30, 124, 48, 67, -105, -26, 99, 53, -84, -125, -79, -12, -81, -86, -117, -41, 103, 126, 61, -102, -74, -106, 2, 84, 115, -50, -26, 35, 64, -91, -22, 65, -85, -70, 37, 30, 1, 64, -2, 16, 44, -97, -58, -70, 53, -88, -97, -41, 19, 81, 33, 119, 51, 43, 26, 116, -19, -95, -52, 30, -119, 63, 18, -92, 46, 57, 41, 91, 76, -31, -19, -72, 114, -24, 77, -96, 38, -77, 41, 83, 0, 100, 36, -116, -48, -29, 86, -97, -12, -90, 49, 0, 37, 23, 10, 85, -126, 31, -57, 10, -6, 57, -37, -50, 34, 45, 0, 2, -103, 122, -53, -39, 32, -81, -47, -50, -59, -88, 54, 27, -77, 30, 45, 76, 53, -78, 9, 76, -71, 14, -48, -1, 68, -56, 75, -109, -76, 122, 94, 32, -117};
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
    msg.setTimeStamp(0.8553022071084047);
    msg.setSource(61573U);
    msg.setSourceEntity(188U);
    msg.setDestination(10538U);
    msg.setDestinationEntity(88U);
    msg.plan_count = 63174U;
    msg.plan_size = 4183459590U;
    msg.change_time = 0.7182848407490939;
    msg.change_sid = 48932U;
    msg.change_sname.assign("HFUYRVPBYXPKDXJMHVRCDWGUGISFCZNKQCDSFGICGRFMDWIHAXFRWCXPYZYVNHKXZFMIOLTLPCJATMHASOQOGWIHQAETEBDUTHNDGBZTEPKARNQZUDIEAWUOKNBWLEJWRHQFROVTIAVTUJSWREBMIFRQLVXIYOYBKMSYZXQQS");
    const char tmp_msg_0[] = {-45, -101, 86, 65, 6, -34, -48, -110, -41, 87, 66, 39, -55, 3, 116, -40, -99, -45, -32, 5, -52, 50, -89, 21, 65, -113, 24, -93, -96, 103, 92, 6, -39, 109, -92, 46, 72, -12, 33, 27, 78, 91, 9, 111, -12, 16, -17, 1, -68, -96, 7, 76, 124, 77, -116, 61, -117, -20, 116, -13, 72, 57, -103, 64, -48, 34, -103, -15, -21, -96, -103, -29, 66, 32, 25, -37, -36, -123, 105, 18, -128, -60, 101, -43, 37, -112, -11};
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
    msg.setTimeStamp(0.5184116304228952);
    msg.setSource(61295U);
    msg.setSourceEntity(188U);
    msg.setDestination(48035U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("LPXAXSMPMRENQGEJKWDXNAJWBPTLSMARCNVZBIEVVFAZTOQLNOJQVWDZTVKHMPZQBRFCIZWMQUCOUTOVKIHZHJNSPKWABFZXXWUSHFMKBXVYLKJSCUMWEDVTXIJBRRFFIRJECIHOZOMFJMYTBENFOIIDCANUTZEQKDLLOCHAHUECLKGGRWYUCFRYPDASGBOYQPNPQDSQNXKLR");
    msg.plan_size = 5931U;
    msg.change_time = 0.44935729474011676;
    msg.change_sid = 58555U;
    msg.change_sname.assign("NECFKNOLUNFFOAMFY");
    const char tmp_msg_0[] = {-61, 98, -110, -83, -34, -68, 107, -71, -7, -120, -23, -42, -31, -52, 121, -100, -25, -102, -114, -61, -94, -89, 93, -14, 10, -45, 64, -118, 112, 53, -38, -85, 5, -28, 23, 38, -49, 109, -122, 32, -35, -123, 67, -10, -44, 84, -10, 73, -55, 106, 93, -80, -79, 87, 116, 87, 29};
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
    msg.setTimeStamp(0.8348862719020875);
    msg.setSource(60191U);
    msg.setSourceEntity(184U);
    msg.setDestination(53761U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("NOORGEVXMPZIMPGNBLQWNBFTLBUSZKHOTSNWNWNFJLJWFLMDQGQZBEGHWOLDCMHEQSDKOOETCTJXTNRKWXAMZPKSJIQPFCXVPLQWEMCYHNDB");
    msg.plan_size = 33336U;
    msg.change_time = 0.47981036720425074;
    msg.change_sid = 5271U;
    msg.change_sname.assign("BCUYDKMTUIADOWYGTORLABLCASDJHKTRPPNNRGBFJSOEMPDZKEEFIACZBKEJGHISRKPQMHYECCRZFFODRJYIRHZHNASLQTCDWTXVWKOFNFREKUYJXQQJIUXAWFBUIGSDZKLVOWOXQULTGIPVHZMUXLAGZMCAXVAGWNUMVTMSVRYPLQEPLLQDMQYVBSNDVCKXAEQMUNYCCPHJBBZGHWSYPTZXGFJBNOOIKHDMPWVZWSSXNGOTBRNJ");
    const char tmp_msg_0[] = {62, -105, -52, 10, -91, 98, 28, -41, 80, 83, -52, -5, -122, -49, 116, 112, -35, -90, -80, -62, 30, -26, -36, 67, 105, -117, 94, -61, 110, 73, -94, 83, -127, -81, 37, 32, -101, 10, 50, 69, 71, -98, 113, -3, -82, -79, 63, -90, 33, 100, -103, 101, -124, -44, -45, 76, 72, 52, -119, 83, -126, 124, 78, 117, 43, 40, 48, 46, 124, 45, -62, -116, -74, -40, 103, -25, 109, 45, -29, 105, 69, 8, -81, 44, -118, -124, 126, 113, 11, 107, 72, 44, 103, 46, 71, 98, -41, 80, -89, 66, -22, -71, -50, -81, -82, 42, -95, -41, -23, -99};
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
    msg.setTimeStamp(0.8922957740365398);
    msg.setSource(9702U);
    msg.setSourceEntity(215U);
    msg.setDestination(19918U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("IGVHQDJQNCJ");
    msg.plan_size = 19434U;
    msg.change_time = 0.3190288648980486;
    msg.change_sid = 36673U;
    msg.change_sname.assign("JAZIRQXLMEMOJPRUCUMTGZPJBVVFLYGKKOCTLSBHQNNFCJHSTOYQSSKAVIPFSUOONYCCNUJLOUDPBVWGDLQFGV");
    const char tmp_msg_0[] = {22, 15, 79, 126, 114, -7, 31, -68, 20, -4, -76, -37, 82, 60, -9, -80, -73, -98, -30, -91, -32, -76, -79, 18, 111, 64, -41, 123, -118, 25, -74, -82, -8, 84, 41, -111, 16, -22, 118, 0, 61, 64, -111, -121, 75, -110, -89, 80, 81, 7, 32, -110};
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
    msg.setTimeStamp(0.5461929348601922);
    msg.setSource(51572U);
    msg.setSourceEntity(156U);
    msg.setDestination(38600U);
    msg.setDestinationEntity(30U);
    msg.type = 232U;
    msg.op = 205U;
    msg.request_id = 2953U;
    msg.plan_id.assign("ZAUBLTKZQCBOADQFTSXCSGRXYCAKJPMHRAJSMVHIDXEGPNQWWPSKJNIHYIGYKTNZBLGRDYPJCUZTSTKOJLGVXRXJYGKXZVYSXQVPBLFDRLFONAREMUTOIJUPJWUODDEVAYHPUUASFUNAOSYQBILQZDMKBRYFVCFWLLDVRWBPSTQHBKMVHZZN");
    msg.flags = 57181U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 107U;
    tmp_msg_0.eta = 35789U;
    tmp_msg_0.info.assign("AFRLXFLHDHMPNZCKOPUAUAVLFFXANRCVLXGVUWWKEUXYYKQNFZUHZKNSZOYEDHNSQBBMFJLCWGSWQTZIGERKTVHZDDIYAQPERDBSBICOMXPFZLSHS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CRBPWSFJUJYTRYAGEVUBOYJIEQIVBIAHZDGFOXAYO");

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
    msg.setTimeStamp(0.12780935381049463);
    msg.setSource(20731U);
    msg.setSourceEntity(105U);
    msg.setDestination(19468U);
    msg.setDestinationEntity(201U);
    msg.type = 12U;
    msg.op = 97U;
    msg.request_id = 49560U;
    msg.plan_id.assign("JAQWVTICAKRZUCWYWEFLKTVXNDNCMVBYCYMXNDM");
    msg.flags = 10292U;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.9897710451145996;
    tmp_msg_0.x = 0.2385128435249657;
    tmp_msg_0.y = 0.8236322699720718;
    tmp_msg_0.z = 0.20671672567252453;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MARBVZDXUGHOINHGYUPPGPPYRGNJBBTWWSQKKKJMMJFLDVOOAIGZBMSNJGLMSDKKLVLJXYYOFAWEFAWDZUTLHSOLTHDWBXNQRKTPXVKENENUEXUWZWRFL");

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
    msg.setTimeStamp(0.5556550511607679);
    msg.setSource(42709U);
    msg.setSourceEntity(240U);
    msg.setDestination(62582U);
    msg.setDestinationEntity(87U);
    msg.type = 70U;
    msg.op = 88U;
    msg.request_id = 57956U;
    msg.plan_id.assign("NSIGTZZTBQCLMOJUWRKABRPOQAGOFWGWMYUBJRHZSIEUXDUJINUCLFWDZLGBOMEUSMHSJVYNFSQGMRXMIQRIKCKWPTXYHSNZVHVDKRYHKXIYEGKZPTQFKNLCHDPBFZOXMHDWDXJPLBL");
    msg.flags = 19562U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 251U;
    tmp_msg_0.max_depth = 0.1409393455468665;
    tmp_msg_0.min_altitude = 0.08709986530434277;
    tmp_msg_0.max_altitude = 0.2959073268395478;
    tmp_msg_0.min_speed = 0.1398339935315116;
    tmp_msg_0.max_speed = 0.6298309769434836;
    tmp_msg_0.max_vrate = 0.27592114712451765;
    tmp_msg_0.lat = 0.5811039668987719;
    tmp_msg_0.lon = 0.46216570756413955;
    tmp_msg_0.orientation = 0.12806922344805194;
    tmp_msg_0.width = 0.7659542027593772;
    tmp_msg_0.length = 0.566719807068517;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RATQXGAMHJIAJVFGWZFTPSKMVOATMLFVTLAITCLVGVULHRKJRYCERIXSORMROO");

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
    msg.setTimeStamp(0.7838801958424874);
    msg.setSource(29861U);
    msg.setSourceEntity(152U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(62U);
    msg.state = 71U;
    msg.plan_id.assign("NLEULYOLFRJUIFJPETYQKOZPYKBZQUVNEXDKKTCGBTDLAWLVHRMITKADJMEAWNGPZRYHCHMNBPMTBRPJURRTAHJFYBWTZEHVJZMSDKGBOXOMCUGCQDCIUXKIILLZBOIUSPAZGEJEFOXZGCOVDPAVSXOPIWJDWVEMPGAWI");
    msg.plan_eta = -1002804749;
    msg.plan_progress = 0.04326566081694605;
    msg.man_id.assign("AKNQYPJSTOKECONIHKNAJCCWUOBFEDPPUPISGHAXVZWVBGSHZKXVEPALFOVCWIYHMGGCMIOWCJRHMHNQKWRGQSTDSWAMJGAYHNFEEDKQFNCTUZTWXKQQBVHBXBIHWVRAXIXBUQJCNYWMUZGMYAVPDSPAYNGOROSFDYTXTBLPYBRSDFJMHRMUQIGBUFETJKRFZXEGCJOILLUDMVRETOYWTJLXPTZXKLCMELNUQULRVZJP");
    msg.man_type = 10910U;
    msg.man_eta = -1727781135;
    msg.last_outcome = 35U;

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
    msg.setTimeStamp(0.2307887110111897);
    msg.setSource(18060U);
    msg.setSourceEntity(236U);
    msg.setDestination(30032U);
    msg.setDestinationEntity(127U);
    msg.state = 131U;
    msg.plan_id.assign("IBAGIOQSJYNOMMCAIHDZOKYVNTJJDRDSQXTNRASMSBCFZJDDNEQPVPXHFWTSFSCDGWTBYESTKKWRDNFPXCNCOWZMYJOGRKWULLUCGRLVEUAPDVJRSZBMNOVCNFTIEKXJQEZFVLL");
    msg.plan_eta = 1104887873;
    msg.plan_progress = 0.9178142612612886;
    msg.man_id.assign("FFDMXQOSFOLJZDVHZZDUQUJITBXOXICDWDTNGHSNOMKQVEDTFDDSMASETDXYJ");
    msg.man_type = 26020U;
    msg.man_eta = 1495988526;
    msg.last_outcome = 95U;

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
    msg.setTimeStamp(0.10163056677102467);
    msg.setSource(33329U);
    msg.setSourceEntity(68U);
    msg.setDestination(18983U);
    msg.setDestinationEntity(141U);
    msg.state = 35U;
    msg.plan_id.assign("LKJIBDVPUFUMYCCLKFAXOFJYAXBAXEIPVOLQLJBMWBKNWJQGSOCTUQSKHDDIHCWHVZMDKOXFEGJDVRRVRZRUIXWQRMUFBSCEZPIQOZOAOIJLZNLXTIAHUTGTEHHGFEGAYEDGCERBANBSDPUXWLSTVPWVAKJGGKWMMWNXJARFQVQRYISNMJFGHZEVCRWNUJPNRNQHUPSYXBMODPOGHFYOEVZYPZBYQPTSYDWHKSMCKDTEUMTXLNYQZILI");
    msg.plan_eta = -164146498;
    msg.plan_progress = 0.3000692963226598;
    msg.man_id.assign("EFUYUZWTJXDJNXFOOXCYEADDZGBQLHOBYOYXBRTEIRTFSHWHJOPZTQWYAPHGVENVAAWDLOPMFLHEBXJERZBRHWKNVGCKDRVMHQJOAEJILIYNWRPQOZTGWYGTPMBNRKUUIFZXGKZUSPKDWVTYYSLHSSKSIUVKLNEUPWVBJXFPFAFQ");
    msg.man_type = 28707U;
    msg.man_eta = -69946560;
    msg.last_outcome = 140U;

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
    msg.setTimeStamp(0.14542879357007776);
    msg.setSource(12817U);
    msg.setSourceEntity(106U);
    msg.setDestination(46391U);
    msg.setDestinationEntity(131U);
    msg.name.assign("TXZWOUGFTFFMFWBICGKRAPDQEDHUCEBNCYKGEJSGDIQHEDYBDPSJZQLNAJGOLTYTFXRZXAHVZRIOLCVHUKJXCYWGGOIXELQPMWNGXZQUXHTLXWOVRYZPXCMCVVTJQSERHYRFBTMAJGNTZVSSZYSFXSPRTHKIMOBMIDYAVKKEJHKJLUC");
    msg.value.assign("EHIDWPFRMXKYZKFULXGBPZLIMZOGSCGVKBTLTVYSGPZCZMUMVCDZRMFCRPQNQDCAGLYBQWEBPFPJJNJDSINXEYXFHA");
    msg.type = 188U;
    msg.access = 65U;

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
    msg.setTimeStamp(0.4686652720741593);
    msg.setSource(49330U);
    msg.setSourceEntity(13U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(162U);
    msg.name.assign("IKAHBUKXCWJAOWTJBDZQMHEWLBDAYWKTGVWSLLSPTEMAQOZQCAZMFCHYZDASZCMHHHLSJAERRVAVTTZXLVUNRAJGVIDHJECFFGSHZUBEOTAKPCQWWPBOQYJKIMPNDYTVJSEYVQCDYPIFEFURSNUE");
    msg.value.assign("TNICRRYFXHLLNIAYFIPVFPCREJEBKKLZWKGFUMJCGYFDXDRSSZWWPHPCUNPPIYOWKALNMZRWOJTIAXTGEGQUJTQYFBMFAJQKQNBSALTUNEMDGXBUSNHXDPUMBCVDTGAXEJFDEOSODETUHXUDWPYEKOKRXSYNCZSZLLZZNROFPUMYTZQBJYQVSSIQHAVHINCFWVOMWO");
    msg.type = 58U;
    msg.access = 20U;

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
    msg.setTimeStamp(0.5466165933985861);
    msg.setSource(10046U);
    msg.setSourceEntity(52U);
    msg.setDestination(31491U);
    msg.setDestinationEntity(16U);
    msg.name.assign("NTLZDUHEPIUCAZJLKRKKNKEUNDPEBGHTSDOSIOEZAVXPOYCKONGJRUASLHOEWCMSGBYEDGTZRWLRBCSCMBODUAXG");
    msg.value.assign("GLMGJPZYPSRVFLRVII");
    msg.type = 9U;
    msg.access = 183U;

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
    msg.setTimeStamp(0.23580997746381227);
    msg.setSource(64027U);
    msg.setSourceEntity(158U);
    msg.setDestination(4650U);
    msg.setDestinationEntity(86U);
    msg.cmd = 69U;
    msg.op = 35U;
    msg.plan_id.assign("OMQYTDWGWHTBHQUVXNCAUY");
    msg.params.assign("FFGUVXGHJRZQBXIENFEHCEKPFGTUCOAGRNCIVISVEDXXTZXLOVEKEKBLFYWAWCRUPDCMWQGBMTNUWTZRLHQRFHUMTIAJDLEJEXXBKKHDCKQOLWNLZZFBQFJSBSARSWMIHWZLMUCTYWTAPPOKOHLISINLQSUPSGXLVDBDASYSODYXANNRQXBOGPVWJIPPZVRMCAHQODWY");

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
    msg.setTimeStamp(0.3032201048066666);
    msg.setSource(6764U);
    msg.setSourceEntity(159U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(212U);
    msg.cmd = 202U;
    msg.op = 29U;
    msg.plan_id.assign("YHLSHTNAEKRBVTCVLZCMRPOEXXFMOBGLINMAAXCNYDPKYUFZPDCADRQDTMUIDPMYFQHAYVTSXHOURCLPFZRGWZKYCGLPEEGVMMZUVVRAPWWDRJKXAJWUKWXFKCIIPWEHDSBUMTAHNDSUKSJVYNTYEKWXBQVCE");
    msg.params.assign("WYIFFWJHXTNFSTEZTHRMEAAVCZINOGKOMVJQDVOLSDHDJDJFBBBIXAUIROSTNUKZMEQYUUDROGXXWYEPZETUVALLSZMPYXPGILLNKMDCGDWRLIFLBVPRCTRHGBBRGPGNIJSKIJNQQYKAJOKVZAWCCSJCZQMYOUVQMXTPXUBOHKVQFHHUCJVKPARSOIKENEXVTSYCH");

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
    msg.setTimeStamp(0.1118138493253259);
    msg.setSource(8812U);
    msg.setSourceEntity(247U);
    msg.setDestination(33669U);
    msg.setDestinationEntity(170U);
    msg.cmd = 201U;
    msg.op = 240U;
    msg.plan_id.assign("VJIHSJBBWCKAHHEFQHREIDDNAGUPXUWYKBPECMMPCCERWFOENBXZWFNTNSONZWGBPFSXPLDWZAOWKFIMFJOSXZSHZLBGRXCCADKYPDJRGCZBUTFFEHLTJOSLPBTDKQ");
    msg.params.assign("LMDXWYBIJCWCHCQRNKDUWULSOCJANGDPRFKQ");

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
    msg.setTimeStamp(0.4443052734820556);
    msg.setSource(18035U);
    msg.setSourceEntity(66U);
    msg.setDestination(31442U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.4404547374344495;
    msg.lon = 0.6273634542875017;
    msg.depth = 0.7841898968207681;
    msg.roll = 0.2382595637244843;
    msg.pitch = 0.8490270342254554;
    msg.yaw = 0.6947316833981212;
    msg.rcp_time = 0.5707708731712297;
    msg.sid.assign("CAZOUPEXKQVUIHYLXQPCQCNKJRJGDORBULUXKFAGEVYMWRWSWRSZLMQVGQCMSGFGJQI");
    msg.s_type = 39U;

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
    msg.setTimeStamp(0.674012607002786);
    msg.setSource(37829U);
    msg.setSourceEntity(64U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.5855381738665107;
    msg.lon = 0.4262685192014988;
    msg.depth = 0.38919402558708116;
    msg.roll = 0.8469926679620671;
    msg.pitch = 0.8187692861275309;
    msg.yaw = 0.7188607620323844;
    msg.rcp_time = 0.0401986427668497;
    msg.sid.assign("JIVHGSGKLJVWANTXAIDXWSZLCHZQOHUTJUQGOXDKPTXDWT");
    msg.s_type = 95U;

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
    msg.setTimeStamp(0.2371957581237485);
    msg.setSource(3115U);
    msg.setSourceEntity(155U);
    msg.setDestination(53712U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.90273478848386;
    msg.lon = 0.12222028812705776;
    msg.depth = 0.00801756918022889;
    msg.roll = 0.765864789613701;
    msg.pitch = 0.7397242418954625;
    msg.yaw = 0.36086675575185234;
    msg.rcp_time = 0.7480537147281511;
    msg.sid.assign("ACMBORQJLEPXSQPBXLNQJYVKQMJHKHNGJHOPNLDRUYAHAUVEKZLHBVTVAJEMYTXXGFIPYPZCTYIUCLNJMFGHPHOZOGWPRKIXYGSFDQUQNRKBWHVRSFLKZCEKALSKHXMDJWEMEZCLTAZVWQTAIEFFZWURGWXBPNORQEECAMOWNOYMSODWZYUFJVLFYRHTDSUXDGSIGCRBBJWIANTNXGSPUFPIQFXMOMRKIZWCUDSYBIIZB");
    msg.s_type = 21U;

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
    msg.setTimeStamp(0.6328876712098747);
    msg.setSource(47785U);
    msg.setSourceEntity(143U);
    msg.setDestination(47139U);
    msg.setDestinationEntity(148U);
    msg.id.assign("WXPDNUVGYNZQHIPMVJMNAOVRKBQXCEFGKWZKJRPEQIFKGYZUDLNIIWLWXVFSEUSWENFCMOOQBTIVHOIRLBDPNSXJCORTSTYMNZFKTSMIBBVFKYAHPMDLACTLNGUIARZXSAMWGAWAPEXHPVZYYZMMTQDZKZICEXJCWGRAAHYHUYDHOWBEPIYUXTERJGURUSYDJXQCLUJXSHCFVPVFHQLBCKNQZBTOVRDSLOEA");
    msg.sensor_class.assign("THRJMRJHRMYGEOOQHWSECDQFYSPOEHHJUVTGPOIBCNFZDBLPRQNVBEVVLUWJRZZBOEQLGKJYWJMZSINFKSHXJUZYIANOZTLKBBPNFGTKCDIWRXSMMPBMPMUYTCSFQETFXULCXRVACC");
    msg.lat = 0.39191053802901743;
    msg.lon = 0.7934632952919891;
    msg.alt = 0.3792817092101938;
    msg.heading = 0.6842848401304258;
    msg.data.assign("IGTVHEOFZNGTQQRTKBUHIVCYRAUXNMHHJOSVPOLTFMVZOXDEPQVRYCLFERQJUKRNONEYYZANFDXCGXGOQKCSESFLRWYHPCNQJRPZDPRMYGKXIZTRFNHOAESRXBBAFVIIWOXVDBATBWMXDPDIOOISCUBZJUVDWMMEWXLCGHQHPWYNGUGELDJZTWXNBUSLHADLVM");

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
    msg.setTimeStamp(0.8493944080235559);
    msg.setSource(3204U);
    msg.setSourceEntity(64U);
    msg.setDestination(7999U);
    msg.setDestinationEntity(76U);
    msg.id.assign("FVFVUPRTSAJJYBMJFHAOHIFECXYWTIPEMEPFVDNYKMUCOOJWBGPTGRCKCVOBOMUEPHLJFSILSJUNEZZUZCKJMQXHKYZENCGQMIDLMBQLNHDARLPDEURRMKQQGSHAQBZTKZDFJRRGCYIFGIHHYWWSBVKLMBCSLRICFHAYJDHLQDZWWZUQCDVOEVTMPPSYZATNBZKYL");
    msg.sensor_class.assign("TIQFTAGIIWUBGHSPHMRHJULEAXVGKHCKMDLQQRYDFWUSXBLJOLXFCXQYJGDXNSAKXGVYLUBCVVMZTLCENFQDIZDWMQDCPNNENPDYYYIWFXOHRZCXZCOUAQJVUMVCRPYHSDFZBWUMMPHBMVYFJRBTTSZOXQWOVSCELIIZENPPAKEJUOT");
    msg.lat = 0.3778789795616835;
    msg.lon = 0.1930378271516907;
    msg.alt = 0.06999552079876459;
    msg.heading = 0.9590620323047515;
    msg.data.assign("GUQOWIBGZUAULJXDJKYBICZQQWEVWCDRDGUJVLBFJENSZSLHNWPFMZNKXPYLCMZSPDNASFPA");

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
    msg.setTimeStamp(0.868407448765321);
    msg.setSource(59212U);
    msg.setSourceEntity(59U);
    msg.setDestination(11681U);
    msg.setDestinationEntity(21U);
    msg.id.assign("RHEUQNIPQUQVDRIGJOLLKPAZVERMCIDCPGCWQIAUHAGQRXPTBXDZCAJTAEWXFYNUAZWHIEKLKBPWLKFGHOEBMZPVCTQYFMSNKINXHSCJTOLLSBJNXODSRDZAXUOLFBYUDRAMWNPSHUNZAYMQTXHHXFDMSDOWZEIIJOFPUMVQGZKLFGJCTIEYVVNVGWPSQHYERIBDRBLJWKBTEEVGVSVNFUSTUYODHBCOGCPXCZLYKWQRAMTSWJT");
    msg.sensor_class.assign("SYSSLDWVKLDFBIIJMYPXEHSTBPPCFTEVOVERAGMWGVTULXBNKZWPARGIZWZCOBDIRTHBOXKCOZNGBXVSUNAHXQMBADQYYLYVSQMTLKWOLRRIWEHJOUQTRPPMVGLECYODJCWXQNNPQYRLTJUTGFWSOKODJXUCJFSDRIAHFAGWFCXTPSDFLYZMCVDQKHNGFSHPHBAAXFZUMNVJKQZGZJMGKRUIEKNDUCVZJWU");
    msg.lat = 0.1782513135338989;
    msg.lon = 0.36621415412463976;
    msg.alt = 0.32490964023447777;
    msg.heading = 0.7492813051043604;
    msg.data.assign("HJFSMGRXTFDVOZZDXBOFBXLLWWWXGXYENKTRQZLHJOKITNXMCGZRYEYGHAXVHKIFJMRQQRDIUIVPKEBRJWVUINUSGGKYSSWYVZYPSZBGTDCDQOEEAMGZCCOJFNWUUCBPNMVVKZMHSAYPPMWHHIAPUBFPHDJLJ");

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
    msg.setTimeStamp(0.5438251101773467);
    msg.setSource(3173U);
    msg.setSourceEntity(242U);
    msg.setDestination(27956U);
    msg.setDestinationEntity(164U);
    msg.id.assign("YOSGWWYNIIYKTHYGDFZLBVQTNWGBGZRXMOICIJWFOQKIEOCKPSKDBBJQLWAMUPVXLEAAVENTFGIBSAETCJBNUUZYTHBAJHRHRLWTSXCYOQAOMEVZUAQRMEADJLDOHYPHJFXDFDWBSOXYQTQSKFNMVVUFQVGKETUEYDWOIDPIZTDEXDZICXKHLLNLZMZFMPUBXZWESN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WADYUWSECF");
    tmp_msg_0.feature_type = 242U;
    tmp_msg_0.rgb_red = 216U;
    tmp_msg_0.rgb_green = 66U;
    tmp_msg_0.rgb_blue = 32U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4286723263138891;
    tmp_tmp_msg_0_0.lon = 0.2713767443892502;
    tmp_tmp_msg_0_0.alt = 0.6320888130371354;
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
    msg.setTimeStamp(0.061455919062384234);
    msg.setSource(49080U);
    msg.setSourceEntity(57U);
    msg.setDestination(27193U);
    msg.setDestinationEntity(57U);
    msg.id.assign("TKIWQKRUWOPTUVPFWMITDHTQYADGRCBNKLRKCTUOAJRJDMMSWYNBHCMRJINZWHPHBVQLWJXCEYXLWCQPNVAZYVUCEGRIDPFPPCMSAPKMMDLPBLKEFBSZILAFWNXXLEFQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PVZDTUUNDWLGDOOKTBUAVIXQOXCPDCAMGWUAUDHJKZETWILOPYJEUXKAVRSXDOLEXJNFDQUTHKATQNYRJCYLBBZPRFVGDGIWXKGPELZWQOBLWWHRBAYYHTWRWYCZAVHKBFYHZURACLCLIBR");
    tmp_msg_0.feature_type = 168U;
    tmp_msg_0.rgb_red = 227U;
    tmp_msg_0.rgb_green = 161U;
    tmp_msg_0.rgb_blue = 13U;
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
    msg.setTimeStamp(0.35725230286493304);
    msg.setSource(52493U);
    msg.setSourceEntity(88U);
    msg.setDestination(27732U);
    msg.setDestinationEntity(121U);
    msg.id.assign("FLJEMDBRKXZHLXPWBBOCXHPNRRFDGWHCPMQAMOKFGATAJMNSHKCUWVWPPRYYUGKJXSESNTPVRDZZSJIXLILGILJXNPUKFHDQVPVFTLFITGDFFNRH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EVHNEQPYNMCIGDGJNTCDNMFFTBPSYCKEGFWWEAMYMUOQOQPLXWBLTOFIOXSFDZSMSUKIBWCIXFAUFDCNRJWKHVSTHRSUJXHKUCKBLAEXBUGITGMCF");
    tmp_msg_0.feature_type = 2U;
    tmp_msg_0.rgb_red = 241U;
    tmp_msg_0.rgb_green = 178U;
    tmp_msg_0.rgb_blue = 18U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.23351175396007895;
    tmp_tmp_msg_0_0.lon = 0.9288871202906064;
    tmp_tmp_msg_0_0.alt = 0.25799911409044296;
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
    msg.setTimeStamp(0.49807675634259874);
    msg.setSource(59260U);
    msg.setSourceEntity(11U);
    msg.setDestination(49479U);
    msg.setDestinationEntity(84U);
    msg.id.assign("EXNPYSPUGFLRYYGOUOJIQCEBVVDZAFFTOZBESMHQFIMRNQGRWUWNLVVWNNJCWWKIZRQARHWKQKDWVLALTTTDXKVOXNADHFSEKCRSKOFD");
    msg.feature_type = 91U;
    msg.rgb_red = 117U;
    msg.rgb_green = 116U;
    msg.rgb_blue = 146U;

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
    msg.setTimeStamp(0.47193553758023166);
    msg.setSource(22459U);
    msg.setSourceEntity(151U);
    msg.setDestination(49651U);
    msg.setDestinationEntity(148U);
    msg.id.assign("SDIDFZKRFHAJCWJXMUTRPMFCYPMFYAWBDKRZGAPVXKENFKPEDSDOZWTGSFSFDZSYCM");
    msg.feature_type = 241U;
    msg.rgb_red = 147U;
    msg.rgb_green = 107U;
    msg.rgb_blue = 201U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.07593385598987623;
    tmp_msg_0.lon = 0.05962886358938446;
    tmp_msg_0.alt = 0.005590356543141772;
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
    msg.setTimeStamp(0.1980503903401305);
    msg.setSource(55358U);
    msg.setSourceEntity(154U);
    msg.setDestination(63530U);
    msg.setDestinationEntity(192U);
    msg.id.assign("YEEANAOHITURQVBPQIKTRDKRBWGNBKALMYZSWYGSONJBWDVXHTYMIIBHNFUTNGKMFPVPRIQKCSHDNXTNZEOKJHFARVLSCGZGAZCXJHKTGCSZ");
    msg.feature_type = 123U;
    msg.rgb_red = 43U;
    msg.rgb_green = 197U;
    msg.rgb_blue = 35U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.40115596832549816;
    tmp_msg_0.lon = 0.05417311469023833;
    tmp_msg_0.alt = 0.9476354236757754;
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
    msg.setTimeStamp(0.9064460269366171);
    msg.setSource(41421U);
    msg.setSourceEntity(170U);
    msg.setDestination(2227U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.24026923352550056;
    msg.lon = 0.981379428946289;
    msg.alt = 0.5166280691241427;

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
    msg.setTimeStamp(0.5555990662961344);
    msg.setSource(61661U);
    msg.setSourceEntity(120U);
    msg.setDestination(41306U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.16959514165650624;
    msg.lon = 0.0395136762047249;
    msg.alt = 0.27033404291288676;

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
    msg.setTimeStamp(0.005779413139570533);
    msg.setSource(15440U);
    msg.setSourceEntity(173U);
    msg.setDestination(46208U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.6211836698513689;
    msg.lon = 0.4129611247942965;
    msg.alt = 0.7497243684238445;

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
    msg.setTimeStamp(0.7908199057393375);
    msg.setSource(14678U);
    msg.setSourceEntity(117U);
    msg.setDestination(29025U);
    msg.setDestinationEntity(45U);
    msg.type = 221U;
    msg.id.assign("FQPNMZZJFGNLRBHTQOMABSTKMRIDJZBLEVOPKNBZPGMVHUISFOTGUSCGATDFWYIQUFRASMSLUJLVDXCCMTUBCDYEWGQBJNUOBPITJADVBYFUGNWQWKOENUKCJPVRBZSOHRDYIQGPUKQRFTCSYWTSAUJDLSXRCKRXCI");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ABKMDZLGVWOKLYMNQPRWJYSNVUBPRBPTJUFZFAGPASCNYMBRASTIGYZSQXKKVFIOCGTXMCRVPSKDBQELTWTCKDXRCRHEJPUORXBNFGWRZIXCTQAPYFNJQVNLHBOOMEFFMKUMNUW");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GECINRRBPJSGFXVQQUYMYWINZYZXWZIROCYOMOKNGDJIPWBAADZMDSKXGJKHFPHCRSWZDWZFEZWBLSTVFJNBXPCARPBFCYAUYMFTVVRBPLVDXFQGSXANETMSXLEQKQVRYUGFAYUTHOTQOKLSEJBALLJTDNN");
    tmp_tmp_msg_0_0.value.assign("KQYETQIULDANJXPZEHZPEANSQPOLFDGPQOKCXZLCNKKUQGXOMBGGLFURRHWZZSDEERBREVYTJJFODVJAXCHWVQP");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.1227983680519168);
    msg.setSource(30204U);
    msg.setSourceEntity(224U);
    msg.setDestination(8729U);
    msg.setDestinationEntity(50U);
    msg.type = 213U;
    msg.id.assign("ZVGRNLDRAGMNIHRVQFDYFFRUUXREERBPDKMIWBTAOTYHOAOSBPQXIHCBXXSOBOAQPZPJJLUXKAVSSEKBEVYBVLIJDVTHFBNUPYGHNPEADRMWXIAWCCAJOCDQCFZXGHQNOZAJMGKUHTJOLFQGEZXHSOYOWTSTDUVPTRXZFBZTGPKNFJUKVSURWDNYPMKEWGSFZMLCGKLZNEXCIDITILQHEULLYYPNJBARHUWCL");
    IMC::AcousticPingReply tmp_msg_0;
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
    msg.setTimeStamp(0.058123204314716403);
    msg.setSource(64756U);
    msg.setSourceEntity(210U);
    msg.setDestination(28674U);
    msg.setDestinationEntity(69U);
    msg.type = 66U;
    msg.id.assign("SHUYKWKSPINMACHTARTIPWRWSXUUNITGWQJYWJLXPAPDJVGDBZKOYVIXHATLFEUGVATJENXCVJAWMTWFNLCSLAECLSPHUTKMODMDOYCPXXDQPGRAVMXGLTMORRGUOFNGIRZITBKLVBBFGBINFIZWNOOERGVICCZGKDINDPQWXHA");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.7812735401766534;
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
    msg.setTimeStamp(0.012231595031681364);
    msg.setSource(63652U);
    msg.setSourceEntity(156U);
    msg.setDestination(8527U);
    msg.setDestinationEntity(110U);
    msg.localname.assign("RPUAIZKFAEJMMHMPWFPSJFBRVNCTKIOMRMHRCKHBTGTKFLZWLJYVQLBVTYCPBLJLWXQUKTDJOJHOCBNCTYDQOBISIZXUTVEIESXDSCNELYIZKZEMAJNCQSWJKBYLOVVIDHMENRAHIISGUWVZGREBEVSDSHGEDQOLTHQDUFOUQVAFQWFWMOJRQQNGSP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PCHCLBDSYREDOEQCOJISJRFDINWSKXDTQIKCWFUKJRKDKVH");
    tmp_msg_0.sys_type = 67U;
    tmp_msg_0.owner = 12650U;
    tmp_msg_0.lat = 0.8774493190228241;
    tmp_msg_0.lon = 0.28103801444323073;
    tmp_msg_0.height = 0.5097592281196041;
    tmp_msg_0.services.assign("APZMJGZQTRLPDCLRPZEVYXQGJDFNSRIFEGMSCMWVHBBAEOOJROGKZEEKTTDVFAZPFVFIVBLALXGLWXBNMGSOYPJWRWWNFSLKWTSHYWPMKUGWFMOSUAYFGWRBZXRNLAIBIPHBAYGELORFUNZOTJVTKKPSUUTJQDZXUXUCDKXOXAIJKFNHEDYCQUQOQQHDNHEABZSGMM");
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
    msg.setTimeStamp(0.7897149558541561);
    msg.setSource(5961U);
    msg.setSourceEntity(132U);
    msg.setDestination(1355U);
    msg.setDestinationEntity(81U);
    msg.localname.assign("BQJJBSRMMGWMMCZSJYONAMLZJYTXHWQOSNSBRXVHGXHGPWTFRVXTWREFIVHMHAZZOUPMDITFYOLDCCPZPJGZENYYMXTUSHXFEBXQOUOMXZPGWJIUZGRKEXQBIHTEWSBUKBJCGQLAAYFOSNNYDKTFYEVNVZJDNYCWVDQGFEKOOSXSKPRDIEFKK");

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
    msg.setTimeStamp(0.8783810035595686);
    msg.setSource(22952U);
    msg.setSourceEntity(245U);
    msg.setDestination(22768U);
    msg.setDestinationEntity(154U);
    msg.localname.assign("BPDGCVWHNDDCITHYQJNRSBDHIZEPCKMKNSLZOBQVSAHSJNANMZPXHFSWRNIMROSOYCUZPGWUYYPETCBMLOMIQESBEFTUQIQPILFZUV");

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
    msg.setTimeStamp(0.04002108880172417);
    msg.setSource(31392U);
    msg.setSourceEntity(208U);
    msg.setDestination(47495U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("MDZFTRUAOPKRGXHUFCHZWWHJWRINJBPLHUIM");
    msg.predicate.assign("SBCAMIWADRNSQUO");
    msg.attributes.assign("ESZIMYUVOPLQWPIZPSKYKBDBHNVAETWPJXBQZOFVCYABPKERJKNOBMAZHE");

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
    msg.setTimeStamp(0.2416087475157782);
    msg.setSource(46216U);
    msg.setSourceEntity(211U);
    msg.setDestination(62641U);
    msg.setDestinationEntity(108U);
    msg.timeline.assign("DVEQXAHXNGFYKIFZUNGADZDVQNEQLGZUOXWNZMBZLBAYMOGWVSBFKLCQKCAWTOPQOPNUCTRMWTGPSVCJWRHQEXXTNVTHIYPCAIOBGHUBIMEOCNSJWPIWDAZZVWKLRVFFUXURYSJEAQJKXNKXLSDAMPMJWVHUSDTESYDKRHRLYAJBSRBMFYPZEDIMJCPCRSVVZGPTFXNMGAKKBTPIJQNSMQLDJOOTUIYYILBCTELGYHXDHWGKLRIUHFZB");
    msg.predicate.assign("LSBLAQEUKNXSTUYBFMMCAPOJADUYCNQGRDBYEHXIFDUDNPJBIYDJYJLIWQERAIAHDUIZTAHNXTUBPCCARDVKSVHVGSZWQRBGWXVOBFSJQJHDKEQFKZMGMCGFFWXMITWMHSLCQGPHVKMLEBVROTJDVYLPCSTFNFNETSVKRHOQJZFYYMCUTKJEE");
    msg.attributes.assign("HMMBUNAFRHWDAEJUERWMISUFWGNQFJRJDJXONILZULACYFAKFEGGNJJCQXSILNBVCOCZLGKBKPDTTOFAEUMTBBSHNKIAIZUTUYORVWUNNQPEITSWXPKTHTUVLRAVHDYBXMRGLWOEIIPHEJEYHRYKRJDB");

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
    msg.setTimeStamp(0.5386553316411138);
    msg.setSource(2986U);
    msg.setSourceEntity(170U);
    msg.setDestination(26234U);
    msg.setDestinationEntity(228U);
    msg.timeline.assign("UJZHLCXRYMOQRWHZCJUAZHCJGRWKAOCALQWCIHWSAYRCBBFWYUVOENINLSQVCGEYZTKFOYFDXOFDKFRJVEEDVHTIXZVBGKCQAHBQUGSQGFLAEZKGKVIKYVHDIDHFBJHBPQMTSGOQTTPKMDFDMGTAXVNPWMXNYOTIVQPLHIREOYJAJ");
    msg.predicate.assign("LJPQWOBVJFFECCPOVDINVSPMYFXFKOYSSNXBPIHZBYRXQFTKDFXJIMGCQTCUSFGUJHNLNWPVEXAWXQTJUVKOVSTRETKCRIEOKQBEZNYXTXKQTRMRPJTOZJFFLYSDQMKIREMVVWIAQUDLAMGKGYQPJNYMDANJBHUEXRWHFLOZUYGKXUIGEBZZYURZGZGDISYZPLHCVLCWBTBDPBHNNIDDEMU");
    msg.attributes.assign("PGXMUXBZCSEEIMXVHTNKQXWTDYZLGTJAFRTXPPGEOYNKOZMDKTIBYTGYYBIQMEOGVMDPWCVALFQHYANNAKNASRYASVQTIFHLFQSYRXDFWZJVVJAOOUZGODPBGNHAZGKRKBU");

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
    msg.setTimeStamp(0.5678921421764892);
    msg.setSource(7159U);
    msg.setSourceEntity(45U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(100U);
    msg.command = 241U;
    msg.goal_id.assign("RGJYMEQYBXITCYEQDGLZVAEWQLPYRFOALKLGFBEICSFNPGOHJUCOTPYKBNGHXGUCUIFHXFHTOUIZQTQVWVGSDKHIJERGVUNXZFRQHTXJENMERXDPBPBLAAQRWQMVBBRZRLUNWAMAABXUKASHULEWZDSMBVKOSWODFLIOABVCCCGJTMZTALMJOFXPYNDWNRUNEIVJFUDZJPZSSJDPCEKWLCHNMYZQHKTGYCIPTQPSM");
    msg.goal_xml.assign("CTAICNIDSMLHTWZFMLQKLFWJSJVXNWKFHTKTUFPKRFNYSVHHAAQSZRDPPAYIQCPHXMKAIOYDEQCXAEDBTGUNUZYH");

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
    msg.setTimeStamp(0.02662827466085571);
    msg.setSource(36599U);
    msg.setSourceEntity(37U);
    msg.setDestination(3418U);
    msg.setDestinationEntity(30U);
    msg.command = 146U;
    msg.goal_id.assign("WTCOHVJPWZLEQTVCKNSKMFVTWLSJZPEDBZJGMUQIPFNHDXJBIBLSIRWNPNLNLXTDBCUHIRKATSIWRGRWKHM");
    msg.goal_xml.assign("FAVBJSYPSANHRVOHHTWHICNNNAQEDDMBTBLFGUEYCQLWPZDZSBVRGYCUMJXPKPVWMLEBXDDKUJHLYYBREEDEPTITSXJHRLPAYZHXPTLGFIJ");

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
    msg.setTimeStamp(0.858366082200409);
    msg.setSource(3228U);
    msg.setSourceEntity(65U);
    msg.setDestination(37580U);
    msg.setDestinationEntity(91U);
    msg.command = 106U;
    msg.goal_id.assign("GSLSYYUFTKWUMBHRAKSTYXBYDPQFRZXDASKJQTRKIFCRLZSEPHVTRSFOUHSUZWGJNNDRNUVFHQOO");
    msg.goal_xml.assign("CCUMOGXDTTGAFMMHBEZLOIJXXTHUSUVKZHRCIARBCSOVOYKSSFKJZQHUJNA");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.2010375566349515);
    msg.setSource(14750U);
    msg.setSourceEntity(208U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(51U);
    msg.id = 114U;
    msg.width = 35751U;
    msg.height = 53204U;
    msg.widthstep = 50504U;
    msg.channels = 254U;
    msg.depth = 246U;
    msg.finaldata = 47U;
    const char tmp_msg_0[] = {-66, 69, 116, -24, 93, 13, 118, -126, -67, -62, -98, 68, 29, -125, -114, 122, 115, 125, -37, 61, 41, -103, -104, -80, 33, -76, 108, -20, 98, 78, -62, -42, -81, 85, 8, -47, 75, 99, -119, -23, -112, 44, -120, -112, -23, 118, 36, -41, -88, -76, -87, -122, 102, -69, 75, -64, -25, 15, 2, 106, -27, -107, -30, 1, -62, 62, 56, 18, 70, 43, -127, -71, 31, 93, -38, 13, -65, 108, 81, -118, 22, -43, -13, 65, 88, -53, 63, 111, -86, 64, -128, 79, 16, -33, 40, -65, -23, 6, 80, -6, 58, 82, 8, -77, 49, -104, -114, 7, 60, 90, 79, 50, 76, 124, 94, 77, -102, 34, 79, 109, -96, -61, 93, 22, -26, -32, -34, -38, 24, 110, -102, 106, 72, 13, 82, -84, 63, -76, 114, -1, -58, -106, 104, 44, 13, 82, -66, 95, 104, 35, -82, 48, 61, 58, -120, -13, 84, -38, -47, 39, -19, 100, -81, -123, -92, 33, -102, -108, -11, 50, -70, -80, -115, -97, -3, 79, 0, -11, 72, 68, -7, -68, -16, 1, 48, 75, -34, 44, 105, 95, -60, 87, 34, -62, 80, -29, -96, -94, 63, 92, -95, -37, 17, -50, 55, -23, -73, -45, -31, -28, 18};
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
    msg.setTimeStamp(0.7945109078914295);
    msg.setSource(52777U);
    msg.setSourceEntity(90U);
    msg.setDestination(53475U);
    msg.setDestinationEntity(129U);
    msg.id = 149U;
    msg.width = 54590U;
    msg.height = 49294U;
    msg.widthstep = 14468U;
    msg.channels = 121U;
    msg.depth = 113U;
    msg.finaldata = 95U;
    const char tmp_msg_0[] = {79, 78, -98, -80, 13, 100, 53, 25, 24, -122, 101, -51, -8, -76, -122, 109, 64, 42, -57, 80, -91, -107, 46, 33, 101, -46, -32, 28, -15, 41, -23, -58, 115, 19, 97, 45, -63, -46, -76, -104, 28, 44, -128, -80, -87, -56, 87};
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
    msg.setTimeStamp(0.12281005011980872);
    msg.setSource(3668U);
    msg.setSourceEntity(173U);
    msg.setDestination(16079U);
    msg.setDestinationEntity(185U);
    msg.id = 74U;
    msg.width = 64959U;
    msg.height = 26276U;
    msg.widthstep = 11935U;
    msg.channels = 162U;
    msg.depth = 92U;
    msg.finaldata = 159U;
    const char tmp_msg_0[] = {68, 110, -47, 109, -70, 77, 32, -106, 50, -61, 60, 90, 44, -68, -123, -127, -27, 109, -4, -40, 23, 84, -70, 48, 50, -8, 89, -60, -20, 118, -39, -24, -114, 58};
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
    msg.setTimeStamp(0.7139976950495991);
    msg.setSource(11160U);
    msg.setSourceEntity(0U);
    msg.setDestination(54380U);
    msg.setDestinationEntity(3U);
    msg.width = 19274U;
    msg.height = 14977U;
    msg.channels = 20U;
    msg.depth = 163U;
    const char tmp_msg_0[] = {121, 115, 14, 57, 0, -74, -102, 24, -95, 54, -42, -57, 82, -87, 21, -18, -16, -56, 106, 51, 97, -99, 10, -124, 125, -15, -31, -25, -9, 46, 14, -126, -116, 71, 34, 107, -3, 41, -82, -94, -92, -5, 44, 32, 93, 93, -80, 12, 74, -49, -40, -94, 12, -53, 30, -38, -80, 115, 117, -114, -10, -69, 87, -84, -35, 10, -94, -51, -3, -83, 64, -40, 68, 106, -22, -79, -87, 92, -18, -110, -54, -93, 38, -80, -86, 15, 39, 80, 95, 5, -6, -74, 108, 91, -91, 98, 3, -107, 65, 109, -126, 123, 70, 35, 105, 35, -29, -64, -77, 26, 125, 113, 94, -41, -10, 88, 25, 54, 50, 35, 1, -96, -38, -30, 19, 54, -17, 84, -25, -12, -19, -103, -125, -53, 120, -63, 103, -99, 45, 83, 41, 9, 20, 95, 107, -31, -108, -124, -29, -3, 36, -98, 80, -58, -36, -90};
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
    msg.setTimeStamp(0.8347460770937664);
    msg.setSource(13216U);
    msg.setSourceEntity(74U);
    msg.setDestination(2501U);
    msg.setDestinationEntity(204U);
    msg.width = 24317U;
    msg.height = 2582U;
    msg.channels = 31U;
    msg.depth = 18U;
    const char tmp_msg_0[] = {72, 53, 22, 70, -120, -74, -56, -105, -68, -19, 80, -69, 72, -1, 27, -42, 38, -115, 74, -40, 36, -63, -72, 103, 113, -2, 3, 9, -43, 16, -38, -76, 104, 20, -28, 110, -118, -37};
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
    msg.setTimeStamp(0.1282797367326075);
    msg.setSource(59620U);
    msg.setSourceEntity(192U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(102U);
    msg.width = 17862U;
    msg.height = 29323U;
    msg.channels = 150U;
    msg.depth = 153U;
    const char tmp_msg_0[] = {32, 50, 19, 102, 10, 125, 116, 34, -36, -103, 120, -107, 63, 3, 11, -86, 38, 1, 3, -127, -17, -2, -23, 62, 114, -105, 62, -104, -79, -89, -64, 121, -39, -18, 96, 95, 48, -89, 28, 76, 60, -29, 99, 51, -49, -106, 98, 71, -4, -7, 64};
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
    msg.setTimeStamp(0.6303996864383048);
    msg.setSource(59772U);
    msg.setSourceEntity(181U);
    msg.setDestination(45191U);
    msg.setDestinationEntity(153U);
    msg.frameid = 9U;
    const char tmp_msg_0[] = {-12, 23, 6, -103, 6, -36, -57, 71, -16, -25, 95, 73, 13, 24, 112, -99, 114, -26, 6, -13, 6, 4, 44, 15, -104, 120, 28, 112, -32, -74, 45, 87, -12, -37, 67, 56, -34, -124, -45, -55, 46, 74, -120, 62, -118, -58, 80, -58, 23, -70, -19, 123, -26, 53, -77, 38, 86, 83, 66, -15, 41, 39, -72, -25, -120, -50, -70, -31, 98, -115, -4, 117, -88, -55, -61, -18, 91, 5, 47, -95, 66, -64, -24, -92, 18, -2, -102, -59, -62, 13, -14, -23, -33, 99, -68, 38, 11, 116, 70, -34, -5, 62, 35, -96, -18, 54, -20, -24, -10, -4, 84, 52, 61, -15, 62, -24, 0, -125, -33, -74, 106, -104, -92, -119, 2, 76, -53, 95, 86, 123, -63, 97, 104, -51, -79, 86, -50, -111, 126, 34, 112, -18, -31, 125, -88, 105, 112, -98, 105, 65, 121, -84, -11, 32, -108, 70, 4, -96, -85, 57, -99, -116, 49, -16, -33, -115, -8, 52, 126, 76, 23, -6, -39, 3, 2, -10, -120, -72, -14, 0, -64, 27, -24, 84, 4, -98, -72};
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
    msg.setTimeStamp(0.40170067285268973);
    msg.setSource(1697U);
    msg.setSourceEntity(131U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(246U);
    msg.frameid = 235U;
    const char tmp_msg_0[] = {-55, -48, -31, -52, 77, -99, -40, 56, -128, -125, -48, -125, 95, 76, 76, -58, 58, 54, 28, 46, 75, -123, -90, 85, 16, -110, 55, -114, 82, 28, 113, 118, 82, 3, 104, 74, -68, 20, 125, 86, 4, 21, 49, 91, 118, 118, -9, -109, 88, -31, 30, 26, 3, -117, 55, 25, 62, 81, -44, -80, -17, -80, 94, -102, 60, -103, -125, -6, -7, 38, 116, 57, 79, 78, -114};
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
    msg.setTimeStamp(0.5477145696744685);
    msg.setSource(45119U);
    msg.setSourceEntity(151U);
    msg.setDestination(41866U);
    msg.setDestinationEntity(81U);
    msg.frameid = 95U;
    const char tmp_msg_0[] = {80, -55, -40, -102, -14, -100, 41, -39, 34, -18, -128, -51, -48, 75, 26, -30, 7, -90, -108, 71, 70, 33, -53, 98, -20, 119, -43, 51, 118, 81, 0, -96, -39, 99, -85, -86, -105, -125, 35, 78, -117, 32, 63, 35, 63, -5, 117, -106, -65, -34, -77, 86, 16, 52, 24, -21, 86, -83, -23, 121, -70, 80, -10, 98, 77, -88, -51, 72, 33, -14, -96, 28, -29, -23, -40, 19, -108, 17, 43, 105, -82, -75, 9, 87, -26, -113, -52, 23, -121, -62, 46, -89, -83, -127, 106, 38, -63, -94, -66, -70, 42, 102, -32, 55, -58, -99, 118, -15, -96, -102, 43, -102, -27, -45, 87, 12, 0, 32, -66, -109, -95, 10, 49, -78, -110, 51, 86, -78, 115, 125, -3, -81, -39, 118, 18, 104, -74, 73, 37, -74, -41, -101, 115, -101, 44, -33, 29, 90, 98, 57, -10, -56, -32, 43, -82, -103, 63, -55, -29, -96, 93, -112, 11, -104, -74, 53, -109, -117, 9, -28, 67, -112, 55, 41, 82, 94, -95, 97, 43, -121, -66, 13, 100, 12};
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
    msg.setTimeStamp(0.3163304387027839);
    msg.setSource(17733U);
    msg.setSourceEntity(138U);
    msg.setDestination(63331U);
    msg.setDestinationEntity(36U);
    msg.fps = 1U;
    msg.quality = 174U;
    msg.reps = 170U;
    msg.tsize = 29U;

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
    msg.setTimeStamp(0.2111577815354535);
    msg.setSource(28766U);
    msg.setSourceEntity(249U);
    msg.setDestination(48012U);
    msg.setDestinationEntity(54U);
    msg.fps = 220U;
    msg.quality = 44U;
    msg.reps = 142U;
    msg.tsize = 218U;

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
    msg.setTimeStamp(0.254781576436789);
    msg.setSource(25164U);
    msg.setSourceEntity(72U);
    msg.setDestination(40543U);
    msg.setDestinationEntity(44U);
    msg.fps = 223U;
    msg.quality = 96U;
    msg.reps = 196U;
    msg.tsize = 182U;

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
    msg.setTimeStamp(0.8930998151952084);
    msg.setSource(20322U);
    msg.setSourceEntity(68U);
    msg.setDestination(14646U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.7562096688385491;
    msg.lon = 0.5683579429711594;
    msg.depth = 34U;
    msg.speed = 0.5325736713560566;
    msg.psi = 0.6710504058478955;

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
    msg.setTimeStamp(0.5606992909530688);
    msg.setSource(5385U);
    msg.setSourceEntity(226U);
    msg.setDestination(58371U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.0803336629625595;
    msg.lon = 0.25013142774402186;
    msg.depth = 238U;
    msg.speed = 0.07826388938578821;
    msg.psi = 0.5952340830247117;

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
    msg.setTimeStamp(0.5808557445225081);
    msg.setSource(19693U);
    msg.setSourceEntity(152U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.44145824950467993;
    msg.lon = 0.8067066525318802;
    msg.depth = 93U;
    msg.speed = 0.8636979915875774;
    msg.psi = 0.27773333837153724;

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
    msg.setTimeStamp(0.5634778855376634);
    msg.setSource(55470U);
    msg.setSourceEntity(196U);
    msg.setDestination(26858U);
    msg.setDestinationEntity(207U);
    msg.label.assign("FABHKUAFIISJLLBRMUUHGWYFYNVQTTQZXOMYBVJOWGRJRECESMNYKLYRWZFBHPFSCNDBJZIVDIOZLRMWTLWTXEQTCVSGHCIAOUVCKKQCECEJXFZDKELNBCADASLJQFZTQGMAOQGVVSMNAGKOHWSUHVROXIUPYEDXWUWPHCYKMJPEQGIAIGLC");
    msg.lat = 0.05258326318159057;
    msg.lon = 0.957038167739058;
    msg.z = 0.12104875844348073;
    msg.z_units = 89U;
    msg.cog = 0.14966610759478682;
    msg.sog = 0.22366906300367317;

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
    msg.setTimeStamp(0.8443783347002402);
    msg.setSource(37760U);
    msg.setSourceEntity(248U);
    msg.setDestination(13728U);
    msg.setDestinationEntity(136U);
    msg.label.assign("CBASNERWJAORKTSLRJOYGGMV");
    msg.lat = 0.51849757939936;
    msg.lon = 0.6192294486602657;
    msg.z = 0.14486524248043997;
    msg.z_units = 12U;
    msg.cog = 0.6566535445539706;
    msg.sog = 0.10057116776397523;

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
    msg.setTimeStamp(0.4782414729845248);
    msg.setSource(25634U);
    msg.setSourceEntity(253U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(36U);
    msg.label.assign("JNEFCDTJRANKSMPCAFOSEKYCQVBOIEJZKDLGGNIPQYUCFPICOLALMTFGOLAMMXCWIVTEAXTRFZEEQGSBOMEZVYBUMHHGOXSJDNZARNHTDIBWGEZGDVLBCFSQPBSCHTWYUWPBILKHGTWJAYOUVPXRHFZBKRUUMYNIRQOZRLWDDSMJLBNTDAYCGHHSKVLXUFNRYY");
    msg.lat = 0.6966280196137223;
    msg.lon = 0.9092762863296555;
    msg.z = 0.030197799843552198;
    msg.z_units = 21U;
    msg.cog = 0.31606962729914756;
    msg.sog = 0.5415375449114816;

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
    msg.setTimeStamp(0.053406793626161186);
    msg.setSource(58909U);
    msg.setSourceEntity(187U);
    msg.setDestination(31253U);
    msg.setDestinationEntity(253U);
    msg.name.assign("UCZBRMTEFXQPKHBKKTZEVWCMXJELCPBFAWEZSYITDJYPQKCNWBEXGRQOWYGBYFUWUIBODNFSSJVRNANLOSVYMHAPUVJRNXLIGRIAUAIYGEXULHS");
    msg.value.assign("XYDEBYEKIMAEGUVWIMJXUVKCZDJOOLTHHDESPEVUPKOZGIIGEUJHOGWOSGMEIVRJTBUQRG");

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
    msg.setTimeStamp(0.9079684917041768);
    msg.setSource(20698U);
    msg.setSourceEntity(166U);
    msg.setDestination(36893U);
    msg.setDestinationEntity(57U);
    msg.name.assign("JUQZFTPTPZKPRUZOETYLKIDJHDYCZVAEYWWLNXGBSYLEUBCQPMDIXAVNMMGBFS");
    msg.value.assign("WBUTCLJOSINGQLTPZEVZEMYRKFLSGZRMDTHPHNAZBMQQZIWNJNIXWFFLXRKNXLJIGISKXKLSNPYOQFJTSDDPBLMPCASYDEWVUVREGIRZGPDYWJWMRDEAMDSFALVJKRFFOCBJZHIXYHWHOSM");

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
    msg.setTimeStamp(0.688284573152656);
    msg.setSource(58895U);
    msg.setSourceEntity(38U);
    msg.setDestination(25569U);
    msg.setDestinationEntity(13U);
    msg.name.assign("ICHKGSRBFTDUROBEPQPZRENKRBMHQYURGRQGVSFEWWILNKFVFUIWMYDUKAZPLYXJNZPQTLDEKDXXZHGIQZSVDZLAQIYCXJRVLOFZATCGRJJSGLWYSDLUXQMKOWKJFNOGAISTPHITBOBZUCCUMUPTNBACHEA");
    msg.value.assign("METAZDZFJGMAJIUVSOALHCUVUBFIETQSNXPYACBXDOOPTQTSLB");

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
    msg.setTimeStamp(0.5074088244980584);
    msg.setSource(17743U);
    msg.setSourceEntity(2U);
    msg.setDestination(33827U);
    msg.setDestinationEntity(112U);
    msg.name.assign("ZILBFFSTOCYXCNHXPMCTMTNQXAPQJISUSOWUUWUEVFOPUTLZDCTBHPKECEDIIZLRORKGZMYYYVXBFACQGTVSYWMYNHBZAOHRRGUGJZUXGTHMSBWODEDKPRIO");

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
    msg.setTimeStamp(0.5220617143380907);
    msg.setSource(9614U);
    msg.setSourceEntity(194U);
    msg.setDestination(33875U);
    msg.setDestinationEntity(205U);
    msg.name.assign("GNKXSUOQBZMGRTCICVMMHUVFHJQNYIMJNJAGZUENJCLYBDJWYSEYPWONDUGBONQBQUPKVUCSGKSFAYAWOOZEWJTURNFDFNBTFOPWSRSAPOFDUTDVATAXLMQDWAANSZCRHDDKPEEIBQZIZHEJMLJIISIJANPMEZQCKPCWRHILUXBBVVLLRWZGXZYHTWLTGMQFEYUPOHXMLXKCJHFLFLPKABFOGQCEDYZRIKBKRYRDYRMXVGSGVVIO");

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
    msg.setTimeStamp(0.627954175498751);
    msg.setSource(64693U);
    msg.setSourceEntity(174U);
    msg.setDestination(8513U);
    msg.setDestinationEntity(53U);
    msg.name.assign("QZWQPNHFNLIJLVOKUPYODBQLJOPKDJPBDQUCVXCDRIETXCCLSVCMXOBGUBNESPNLHLXBJRGGRWYFBDHJMSKUMWRWNEHLFOQQJVVMHETZATXMHIPZLAYGHAGGOHKBKTZVWWISRBEOUWYFAQTFJWPZVJVNYCLIYNZORH");

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
    msg.setTimeStamp(0.8255009661198375);
    msg.setSource(11774U);
    msg.setSourceEntity(37U);
    msg.setDestination(24033U);
    msg.setDestinationEntity(85U);
    msg.name.assign("EYCTGJDQCGKXXAFRTKDLMMZCHRXPFMRUIOGVWXLEUSOYRVDZQZSQBTZZKIEDMKEJLBHKFVWKSJUHJNEOLIDUGTSLVHWPFIPHRDPZIEVRFKUSPZNHTHKYAVWYOMPMEHCQQDCTHNXC");
    msg.visibility.assign("RWGEICVBMDJTLQKWBBTSMQCMFFFRVGSULCYGUZIVIMOREFDMQACYFCYFERWADESPMAQYZZVPNJOLRRHVXOUJKPGJTUEYDNRILURQVVCXX");
    msg.scope.assign("QFPRYXDYTAJNZSWUYFTFLCWCKTLIJUYRBDISXFGRHKUZZEEQOHBRDVXKMGHTAXOTEDTPGHKXDIPJVAQUWPSPNEWZOIQ");

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
    msg.setTimeStamp(0.6730726598172019);
    msg.setSource(60687U);
    msg.setSourceEntity(26U);
    msg.setDestination(6923U);
    msg.setDestinationEntity(146U);
    msg.name.assign("VKRRASLKAWCZNUOSZGQBMFUBFLNQISNAUUITEZCPACHMTFGFWNORANVURDENIHOGLJQLYPRLXWAJAXIGYBQ");
    msg.visibility.assign("FTLVZYSKVEEDRRUTTQVMPLPRUVRBWHGUBBHJLIRUYMVFLWPJQJUKBYPSEXFSQEWKJCDOGRYDXQMIDQOGMYETKHHL");
    msg.scope.assign("SWLGZXLDEUEURLMTWYBFII");

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
    msg.setTimeStamp(0.8059547214966345);
    msg.setSource(40619U);
    msg.setSourceEntity(188U);
    msg.setDestination(12733U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JMRSYVQXZLPURPMOWMYOGFENDLSSTIJLHHMDKIPKFIYCKMVPHJZUUNKUEIGGBWSYMOZDVUXZJWCPBQUHWFWLNDDKCMLOYSUWBSFACTBZOTYZEVBFBERDOWJFOCTTJQAAQRQBHMATAESQRGAMEQUNXNVOIVQNFHJGOTWFJWPZNXVSL");
    msg.visibility.assign("XSETZBMOGSWVEUT");
    msg.scope.assign("CFVBICDXZOEBH");

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
    msg.setTimeStamp(0.49609562370200977);
    msg.setSource(22816U);
    msg.setSourceEntity(57U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(67U);
    msg.name.assign("IWCGUTCGTUQRHOPGVOJLX");

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
    msg.setTimeStamp(0.872531513248421);
    msg.setSource(61630U);
    msg.setSourceEntity(54U);
    msg.setDestination(3018U);
    msg.setDestinationEntity(1U);
    msg.name.assign("ZCEDLWWYNORGHSZLBNXDPQHRAVHDETSPZBJCTSXQLIAEONNIBRHIZOXVMYVFLXFQGUTJHRKCKFOZJRVHTJLOEPYVUPLXERFRFGQXTXFUZ");

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
    msg.setTimeStamp(0.3221663803854937);
    msg.setSource(19381U);
    msg.setSourceEntity(32U);
    msg.setDestination(41106U);
    msg.setDestinationEntity(78U);
    msg.name.assign("KTZOUARBJITCCXVMGVBESROIMVNTSDZFEAVCBDNOSOTXIJDAEGWLKAPKZJRFEJUJIZTVMWTNNGYMHLQAQWKGLWSJJIDKLDOLIVVTQB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NNLITPRPZODKHFOJWEVXGIBJXEEGTDSKGQMTFWHCHCBEEVSNGPKVQSXFMRCMSDYFOEZSTHQAMRIPMDGTZSOQBLAFEXMYUAQALJJKNLVYJCDVDKRSZZLUNPJJHLINNAYHQRPKXBUKAMSRKUEWXOTFFPYJBCZLQIG");
    tmp_msg_0.value.assign("SANJTHGSVOKGHYGXZGHBVAWNSLZJCUYQCLUOSXHFCQUBJJEJAOEQYRRWPOAQOYFUYKNOWBCOHWJXDKCSRWMSIPGZFDIBTVMHNMLVJJLQTLESXUCTPBMVODMHWDVCDJXPWKY");
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
    msg.setTimeStamp(0.20785046889170644);
    msg.setSource(37036U);
    msg.setSourceEntity(4U);
    msg.setDestination(63793U);
    msg.setDestinationEntity(169U);
    msg.name.assign("WWRDAOURIGEECBVLDPBYQBINEXXEHSVNTKWTPDYAUPOUWOPTGNTJVEOXFFIHAOLPKIQLZGTMRSQZWHWABBAUNXUXSAO");

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
    msg.setTimeStamp(0.05702444373933868);
    msg.setSource(61937U);
    msg.setSourceEntity(134U);
    msg.setDestination(20186U);
    msg.setDestinationEntity(223U);
    msg.name.assign("ZWTFMRPUZXQYONBNDTOYIYCFAYGDONSIBJI");

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
    msg.setTimeStamp(0.8603242926860327);
    msg.setSource(42686U);
    msg.setSourceEntity(2U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(93U);
    msg.name.assign("CNNYEJGSGOUTZJQKVXETXJFYRXTJNCAJGLTEZBOCFODNSETBGZBQNYLMWVDYGGGJUVOAGPVOTHCMBYQTUMEAVPQHZVYRXINIELBKRRKYAQDTVUQWBWAPHIDOSEANVHSLHJOAFWDSTRPFNKR");

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
    msg.setTimeStamp(0.09443267007192468);
    msg.setSource(46784U);
    msg.setSourceEntity(31U);
    msg.setDestination(4508U);
    msg.setDestinationEntity(36U);
    msg.timeout = 3216143638U;

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
    msg.setTimeStamp(0.4912372484767358);
    msg.setSource(62373U);
    msg.setSourceEntity(129U);
    msg.setDestination(27162U);
    msg.setDestinationEntity(41U);
    msg.timeout = 2325322386U;

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
    msg.setTimeStamp(0.9482529682595477);
    msg.setSource(13083U);
    msg.setSourceEntity(129U);
    msg.setDestination(5186U);
    msg.setDestinationEntity(135U);
    msg.timeout = 2561927298U;

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
    msg.setTimeStamp(0.9199730047073067);
    msg.setSource(46058U);
    msg.setSourceEntity(157U);
    msg.setDestination(55657U);
    msg.setDestinationEntity(36U);
    msg.sessid = 3549228187U;

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
    msg.setTimeStamp(0.8316734443778683);
    msg.setSource(44974U);
    msg.setSourceEntity(2U);
    msg.setDestination(55284U);
    msg.setDestinationEntity(210U);
    msg.sessid = 3424509448U;

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
    msg.setTimeStamp(0.31606133487457944);
    msg.setSource(27417U);
    msg.setSourceEntity(117U);
    msg.setDestination(21755U);
    msg.setDestinationEntity(32U);
    msg.sessid = 629184998U;

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
    msg.setTimeStamp(0.06026059190294375);
    msg.setSource(24045U);
    msg.setSourceEntity(115U);
    msg.setDestination(55198U);
    msg.setDestinationEntity(144U);
    msg.sessid = 1652404971U;
    msg.messages.assign("SKJEEFIUILUMLPYWQBGUXXVCRMAYHFAHMGAHXSYWTGCGTJYATZVETMINUMVYDEXXRFYGUCBKZKDSBORHKSLKVSQDOCCTWKNRFLOXSHHNUSPO");

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
    msg.setTimeStamp(0.42519277071363404);
    msg.setSource(46303U);
    msg.setSourceEntity(182U);
    msg.setDestination(7462U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3201524393U;
    msg.messages.assign("GUMNWGMALKWLJTWEFJRBQFGXCXLHTXLSXQKIUNQEYPCNPKVLSDBRPLTSDBZRCLBKYFNVFRAQEAHOASZODOWICFUNJLVBKRMFMVAKFGEEVZYNCYIVBIJNSWTPHDWYAHBPQUHKIQEMCVCINZGOHMQGDZFEZODTSERIPDMUJVOGWKJQXYTCJWGTVDTGEXUCOUZXUBCNSUJSPHXMHZQPBZRKAOPLWZH");

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
    msg.setTimeStamp(0.24500426485090343);
    msg.setSource(5500U);
    msg.setSourceEntity(11U);
    msg.setDestination(7410U);
    msg.setDestinationEntity(108U);
    msg.sessid = 640471296U;
    msg.messages.assign("BNOBJQVXLGERNHIAISTCBIYTARCCKRUZUDVACWHXTWIBBFJVZFMBLUKXWHQZAAVQGNTMUDOXBQASGXKPYCMLCCEPGSKHXAHWBELCJBUYWTEDPZDFSQOFPOUEYMJWU");

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
    msg.setTimeStamp(0.790779357171598);
    msg.setSource(15031U);
    msg.setSourceEntity(10U);
    msg.setDestination(10804U);
    msg.setDestinationEntity(24U);
    msg.sessid = 1450137462U;

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
    msg.setTimeStamp(0.5519542870367055);
    msg.setSource(7499U);
    msg.setSourceEntity(250U);
    msg.setDestination(21858U);
    msg.setDestinationEntity(128U);
    msg.sessid = 1492455748U;

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
    msg.setTimeStamp(0.8644170205369568);
    msg.setSource(55799U);
    msg.setSourceEntity(12U);
    msg.setDestination(8949U);
    msg.setDestinationEntity(152U);
    msg.sessid = 3862958108U;

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
    msg.setTimeStamp(0.35481254163793474);
    msg.setSource(19814U);
    msg.setSourceEntity(37U);
    msg.setDestination(4342U);
    msg.setDestinationEntity(24U);
    msg.sessid = 895861220U;
    msg.status = 72U;

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
    msg.setTimeStamp(0.13246086850792027);
    msg.setSource(8658U);
    msg.setSourceEntity(178U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(115U);
    msg.sessid = 2380273485U;
    msg.status = 60U;

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
    msg.setTimeStamp(0.23646804306404234);
    msg.setSource(16992U);
    msg.setSourceEntity(83U);
    msg.setDestination(15738U);
    msg.setDestinationEntity(35U);
    msg.sessid = 3280828008U;
    msg.status = 46U;

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
    msg.setTimeStamp(0.21698604354172524);
    msg.setSource(15041U);
    msg.setSourceEntity(175U);
    msg.setDestination(42653U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ZOFJAMVKVLJNKGWHTLKUTKLDCOEYUNWDAXSVURLBIWAKFDHGSHGSNOUNUKBBNBVEPILDCNVAL");

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
    msg.setTimeStamp(0.14567584026434122);
    msg.setSource(47181U);
    msg.setSourceEntity(81U);
    msg.setDestination(29158U);
    msg.setDestinationEntity(179U);
    msg.name.assign("VTQEAQVJRMYAWOVQUSJEHIQYELHESJCTZXDGCMBFQNMKTBNKUOYGTCANVLUDLFURBGMTVHNTKXKJSXUYLQWZEOMMASXYZLHRDAHRTPLHMXBPIFQBYKPWGXDPGNMGYSRPSLUNNVQWSIWLLPJPGX");

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
    msg.setTimeStamp(0.7264871720071856);
    msg.setSource(60899U);
    msg.setSourceEntity(205U);
    msg.setDestination(12268U);
    msg.setDestinationEntity(69U);
    msg.name.assign("CNVHUHOBCLCAMOKQZGCPIRBWBKBZBPJZXRFGARDXIPSISRWGUVJLCHZFJNLUYYOUENEVDGWUBWNHQWVMLZYKJSQIHIAQAOMHTTHCUEFPQFGDUDULCVYOTXKTPQ");

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
    msg.setTimeStamp(0.4716584499220635);
    msg.setSource(47919U);
    msg.setSourceEntity(65U);
    msg.setDestination(710U);
    msg.setDestinationEntity(195U);
    msg.name.assign("VAOMGCAECNNKFFLROJKHIXSQJBVZXLWHTWRVASEDOHDMUCCAAROEZGEVDOXPTWLXLJPYFTBRFMUQRCHQYTWZNYDSANJXSGREFOBFYSUQLYITBYZKPWFIOWIMNBMYOBDZKXPUDMVCIGKYIQAUKZNSLCGHQVTRBENX");

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
    msg.setTimeStamp(0.29362242337647715);
    msg.setSource(8635U);
    msg.setSourceEntity(7U);
    msg.setDestination(41733U);
    msg.setDestinationEntity(87U);
    msg.name.assign("EJOODWOJTXYBMLCMAQTKWZLQAAJWGASANPKMYVZPJBILFWLNVMRGPLPXZNSALBTBYQYHMLTRNHRBAGKUSJSZFYMRQXCXZZUJNRIODCXIJUCDEFNGVOEPSWFJSNURHCPFSFQKIHZLPEJMYAIDTOXXVOCXCVDNNICQVMQKFXKDDBKGIKTIAHPWDFYEZHMPEETTWLJYKGSKSROUUUFWUCCDVTGONBWHYIMHBR");

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
    msg.setTimeStamp(0.0816888351728281);
    msg.setSource(8757U);
    msg.setSourceEntity(179U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(107U);
    msg.name.assign("FZNVRAVBUQWDTTQRLENWOBGEDDVKZJYFOIANMPABYFLZHZHZBCEOLBRKVBKIPYUTBJZUWTNPZPRVMAFXMCNDJGPESUJPSXXCIOTWHXEHWIHMDUVFKUMMCWIESRWJYTLAJJIGKGDBGEHSLBNXLWQFNXZAVUFLNLOPEIDSVQRTSVUHQCXKKSFCMLUOCTGDDIIEQAYZAAGARZYQSXFNERHIDGFQGTWQX");

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

  return test.getReturnValue();
}
