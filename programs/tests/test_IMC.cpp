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
    msg.setTimeStamp(0.9171369248587123);
    msg.setSource(18947U);
    msg.setSourceEntity(164U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(48U);
    msg.state = 107U;
    msg.flags = 165U;
    msg.description.assign("VDHKCLSAQAGWPRXLGIVJGJQWTBIFUJCFSQBKNP");

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
    msg.setTimeStamp(0.9574891294143587);
    msg.setSource(33099U);
    msg.setSourceEntity(0U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(32U);
    msg.state = 68U;
    msg.flags = 34U;
    msg.description.assign("CZIGMIODIFTHQQBLWNFTLUSDCGDVKDGDATJFRPABLZLNTRIKIXWMPSGEJNTYKENGKBEXSOPGIULRHJDFXTTBEJDSTYQHVXKWYLCYHSK");

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
    msg.setTimeStamp(0.016639237828948272);
    msg.setSource(32449U);
    msg.setSourceEntity(56U);
    msg.setDestination(20169U);
    msg.setDestinationEntity(148U);
    msg.state = 59U;
    msg.flags = 162U;
    msg.description.assign("NTKLOZMFBONNDAWCCNXKRUEPYMDIFAEWFCSTGGYMVDVMZUFGUOXCQSFXGTCWOMYBVTQXLQROFXMPYEEHBBLZZSYAZNJITPWLUHENQWQQCVGRNGAPHBVMWRENPPBRIL");

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
    msg.setTimeStamp(0.4575721613445304);
    msg.setSource(23283U);
    msg.setSourceEntity(54U);
    msg.setDestination(18428U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.7999829914669965);
    msg.setSource(9997U);
    msg.setSourceEntity(121U);
    msg.setDestination(58823U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.4547613699145411);
    msg.setSource(23732U);
    msg.setSourceEntity(152U);
    msg.setDestination(59719U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.5688254838538411);
    msg.setSource(23564U);
    msg.setSourceEntity(122U);
    msg.setDestination(7108U);
    msg.setDestinationEntity(244U);
    msg.id = 19U;
    msg.label.assign("QEMWNXHURIRHWYTROEXGJMNCVPIRPRLGCJCHOHMEUNVHIPSDFLSYJBZQLZGUUALJZTRGCKLCCUSBFIFYMJXROVT");
    msg.component.assign("QWSTJOOSERTKVHSAWLTPSLYQDYTARSPQZKBUVVXDEZOURMJZUMRLXGCKJOFHIPHAESMADENPTDEFVGXWKHJXXRNUYSLGBBAEWLNNBOQOYDMAMZVKXWORBCVKCJKODLHAJPYXSAZYHEJIAFYDUGYUCDFBQKLJJFERBFETPIBCHKGZMPIBUWUFCNQGWMGIIPQPIQMDYRHTLBNPFRAFGKCQNEIJCI");
    msg.act_time = 17567U;
    msg.deact_time = 29963U;

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
    msg.setTimeStamp(0.802739684170185);
    msg.setSource(57056U);
    msg.setSourceEntity(127U);
    msg.setDestination(9400U);
    msg.setDestinationEntity(112U);
    msg.id = 232U;
    msg.label.assign("PMHAGSQXNJBPDOTFNLDBXFYAEEUJAUIMAHDIIDOXRTMN");
    msg.component.assign("QCHZGOXNWDB");
    msg.act_time = 5720U;
    msg.deact_time = 29637U;

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
    msg.setTimeStamp(0.36874678570934816);
    msg.setSource(57922U);
    msg.setSourceEntity(117U);
    msg.setDestination(10769U);
    msg.setDestinationEntity(53U);
    msg.id = 134U;
    msg.label.assign("HHWZRRGCZJKQNBVGIABFJFPTGQKATFXGEVTPJMOQKHFGBYWJDFZYCLJZ");
    msg.component.assign("BUZJZFZIMEIRARICXULJBHIHOMRNZPHRCFACFVLQCLNQNNJNHACPVEFBMJFGGVMEXNGQQCDXREXPVANKLDQDWRKITVBMOYUSPQSONSKVZIJYHSLBLGCTLSYHHFQYTTTGUUTYHHHUGABEDOEVYRPZUOWEKALXZFTPAPBFAEFOSCKTEKYVUPTXWMBFLWUOIUJKDDJSMJWOCKRGQXKBARMYDMZRTX");
    msg.act_time = 57689U;
    msg.deact_time = 21065U;

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
    msg.setTimeStamp(0.16822258532738954);
    msg.setSource(43227U);
    msg.setSourceEntity(21U);
    msg.setDestination(60149U);
    msg.setDestinationEntity(25U);
    msg.id = 65U;

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
    msg.setTimeStamp(0.33878849508276443);
    msg.setSource(38031U);
    msg.setSourceEntity(209U);
    msg.setDestination(55066U);
    msg.setDestinationEntity(200U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.9432912041770082);
    msg.setSource(11648U);
    msg.setSourceEntity(238U);
    msg.setDestination(23150U);
    msg.setDestinationEntity(212U);
    msg.id = 36U;

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
    msg.setTimeStamp(0.8247814748366276);
    msg.setSource(38646U);
    msg.setSourceEntity(44U);
    msg.setDestination(18587U);
    msg.setDestinationEntity(33U);
    msg.op = 223U;
    msg.list.assign("WZSEVKSDXUQVYNSCNDCSLWZPCBKLAVBNPKTVARGTIDTBJNKSHWKJJXHWONRIZVHJFZCMIGIJOUEKNBABGCENUVVCQWXNXPQECPHJDQASQAEZXCZUDMESKLYUPGELYUOTHCWKIQYATJXQSBDTPVKNHXXAOBFDUDYYYMFKGLJTOXRNTJMOMCOSDQUYEGVLAWWERERFHZMGRMIQBJOPIHAGHFWGIIPSDFIPZXRFZ");

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
    msg.setTimeStamp(0.1810755040401626);
    msg.setSource(56578U);
    msg.setSourceEntity(204U);
    msg.setDestination(58722U);
    msg.setDestinationEntity(207U);
    msg.op = 172U;
    msg.list.assign("HYPPBIEGYQKLHUENPPZHZHDKNUCTSDCWXBHFWLNQSJUHCJEVBWUCDAQHFOROYGDQSQNOFTOSUSUVDXHNXXLSIMLKOOTYIWGXKXGVXFZWCZLLQWYJAQGKDPOMHVAOTOEVYSTLUXEEPHVSJKKYQCBTFNLFWIVUKJBZNRBRRFVRLNCMZIYMAEIJRATISPABREDTSRFURZMJXTCOWKMUPGMNZDMMBCDEQGAVVILGJEBBAZNAGIDJG");

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
    msg.setTimeStamp(0.04024991398387745);
    msg.setSource(60151U);
    msg.setSourceEntity(234U);
    msg.setDestination(21050U);
    msg.setDestinationEntity(16U);
    msg.op = 61U;
    msg.list.assign("IGFEMVLKPSRMYFAQEXLIQQAPRKFSNINEMZJBOHPFMVTZCCGLKRWUNRAVKDULJQHGIYKMOTATYZVWNCTCQKFUHJAXOPHVLJGSJDISHFVONYJDAEWJSMGKSRXKSAETFTBIGWANWPVOZQJFTDFZCCAHBZSWCWIVYDOJZVGOTBPNBXVWDUUKBEZGAQLERNQDUUHXMPSTBEELMSUPHYNLOMOUYNRZYGLOEXRXHIPMKB");

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
    msg.setTimeStamp(0.03854946593556374);
    msg.setSource(15013U);
    msg.setSourceEntity(149U);
    msg.setDestination(47475U);
    msg.setDestinationEntity(38U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.6352447880101755);
    msg.setSource(43603U);
    msg.setSourceEntity(249U);
    msg.setDestination(57753U);
    msg.setDestinationEntity(210U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.9127966752858723);
    msg.setSource(59788U);
    msg.setSourceEntity(32U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(173U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.82505235970756);
    msg.setSource(22142U);
    msg.setSourceEntity(209U);
    msg.setDestination(8775U);
    msg.setDestinationEntity(28U);
    msg.value = 140U;

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
    msg.setTimeStamp(0.15300037024936952);
    msg.setSource(4477U);
    msg.setSourceEntity(141U);
    msg.setDestination(27740U);
    msg.setDestinationEntity(14U);
    msg.value = 17U;

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
    msg.setTimeStamp(0.27614049754079006);
    msg.setSource(41502U);
    msg.setSourceEntity(31U);
    msg.setDestination(1175U);
    msg.setDestinationEntity(216U);
    msg.value = 33U;

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
    msg.setTimeStamp(0.6442187420796749);
    msg.setSource(10217U);
    msg.setSourceEntity(48U);
    msg.setDestination(2685U);
    msg.setDestinationEntity(52U);
    msg.consumer.assign("ZEIBGYPXVRSVIFHXMHAJKFCZCJVBPMLJDMQTKNUVKWRQSMCOUUFCNIPSFANITDCILOJFJSLZUUZLDIJQTYYWZWLMGKWSQUUHQICGNXXNQEJOTDPHKVXSAEVHQURZSRJNDBXPHFVAGXRMYFSITVZAORDPFWXYEZPZBE");
    msg.message_id = 33653U;

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
    msg.setTimeStamp(0.4818834280569526);
    msg.setSource(53052U);
    msg.setSourceEntity(37U);
    msg.setDestination(22510U);
    msg.setDestinationEntity(210U);
    msg.consumer.assign("JFWHAPVFIGIUCINCTPYQGDFVPXPEKVHDAFLWJMKIDOEDKLZREEHJCMHZSBUTBNSGWCJOYNYIKVOAXCBDZBJCABLQZAKHUDFXLEETSMLCFPUKSTZTYRMMUBVNGFYFOYUXUBRXVTGREGYA");
    msg.message_id = 24354U;

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
    msg.setTimeStamp(0.6534322699787783);
    msg.setSource(28132U);
    msg.setSourceEntity(199U);
    msg.setDestination(47245U);
    msg.setDestinationEntity(185U);
    msg.consumer.assign("XUKZWDXTSHNMNXKXDUOWLLRVATBPJJULHMMEUMJAVMRFULCNSGJDRKRZPWRQFYCLKRJOTVJBQIGHP");
    msg.message_id = 24091U;

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
    msg.setTimeStamp(0.3346786856477396);
    msg.setSource(35852U);
    msg.setSourceEntity(167U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.3488643063132483);
    msg.setSource(47728U);
    msg.setSourceEntity(249U);
    msg.setDestination(24770U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.8899102428161975);
    msg.setSource(19457U);
    msg.setSourceEntity(91U);
    msg.setDestination(64053U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.5214106313113246);
    msg.setSource(37610U);
    msg.setSourceEntity(188U);
    msg.setDestination(55432U);
    msg.setDestinationEntity(152U);
    msg.section.assign("MVQSXMFOCTFCNGSKKNQXXEJLJBGULZAZONUQOGXEPAIDENJA");
    msg.param.assign("LGGIKRRXPVCMQJYRPSELDQJJBILASBKDDABUTPFDZOEPFXRHSYVRTMVYSZHIJEOWIKOQPZQTRFIQ");
    msg.value.assign("MLJXCYBBDXEXUVGYKDKDIKFLIMDXKGBYRRVPOSLZBVKAUPQLILFDVHEJOIRSRSCWFFVEYITQNPVCQKWOUMSBEPZSNYUWTUAAROJXFXYQTHRQIWHWRUJPDDNXHJZGK");

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
    msg.setTimeStamp(0.6134164532074509);
    msg.setSource(10594U);
    msg.setSourceEntity(54U);
    msg.setDestination(41519U);
    msg.setDestinationEntity(64U);
    msg.section.assign("HJXFRTMYYOQAHBCBQDRJFBNIMFCSRBVGLXNCHUPKJMRCLAIKIUHLNKXLEWPJHSPZDYENRYOWRIBHGSCMKQEB");
    msg.param.assign("ASIXUMNWXPMVBAXAWRGBTQQORIMOLHRNAMNCYZAYBVIOVGIKFTLMNIUXFDXFWMZSAOWLSJSSBXPSXNKLBEQJTHWODVFAQUTQPDFUBQQM");
    msg.value.assign("JVYUFINXCFMFBHMBSRFBIFIULEELQKJWRQGPQDBFGWYSZBRFZOYZJDOCILDLLSZQOKHNTZJOCEFVEIWCRXWDMPLVKMNSGPSYTYXROKOMCLKTTSVGPTCUVURHJUECKTEFAIXYQQQSWIGYMHDWXCOZWBBGPQYRANSDR");

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
    msg.setTimeStamp(0.9419120456665743);
    msg.setSource(42207U);
    msg.setSourceEntity(223U);
    msg.setDestination(36966U);
    msg.setDestinationEntity(203U);
    msg.section.assign("JOUTYDAAJBQFDKTAGHXMSCUPVFSDPCQXICPLGVIJLONPUTKEBZGWVFOIZDBVRSEHBPFIGHYJASKQWJNKKMRSXNDVPHOVMBWCUUWPXXLUUQNE");
    msg.param.assign("NZZSVPYOHUKMYFXWMXHCJCQXHIWIBDXCYXHRPBHMKSTOVXWEIZUEINZYVHAJCKUBEMWCVYOCWDRIZONXCUTDVUZIUGBTURFWZWNCUKHGPXSQNATVDAVRZWDGNVLSDTJVU");
    msg.value.assign("GRQXOMXZLUJBLLFGGDSYSZXCZCDOTXIEEOZURZVAYOCZCQCAFWJHABBDUFAOXIUMEUHKENTPQSSWZRRSUHEFRIGKBQWUQXLCWBHKFGUAYMNEWWNZPGKIYJKXBMSQFSGYDVWLVKMIJLMWMVNKIPPMXNRIHPKDHFELENTACDUFVTVTHHWBPFCROPQAPPYTZTYJSUTAEJIGRVNXRAJQOFLNYRVDODENNWJPIMAGYSSI");

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
    msg.setTimeStamp(0.8165549334977029);
    msg.setSource(33062U);
    msg.setSourceEntity(21U);
    msg.setDestination(48381U);
    msg.setDestinationEntity(5U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.806883459259077);
    msg.setSource(44318U);
    msg.setSourceEntity(90U);
    msg.setDestination(31087U);
    msg.setDestinationEntity(36U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.42940244114287707);
    msg.setSource(22385U);
    msg.setSourceEntity(184U);
    msg.setDestination(49073U);
    msg.setDestinationEntity(129U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.8751651177690328);
    msg.setSource(6560U);
    msg.setSourceEntity(35U);
    msg.setDestination(60208U);
    msg.setDestinationEntity(139U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.8625850147804055);
    msg.setSource(21833U);
    msg.setSourceEntity(232U);
    msg.setDestination(20140U);
    msg.setDestinationEntity(28U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.18866843212570017);
    msg.setSource(40319U);
    msg.setSourceEntity(136U);
    msg.setDestination(28347U);
    msg.setDestinationEntity(68U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.411196282734295);
    msg.setSource(25222U);
    msg.setSourceEntity(105U);
    msg.setDestination(58243U);
    msg.setDestinationEntity(139U);
    msg.total_steps = 88U;
    msg.step_number = 41U;
    msg.step.assign("QILSWLVKGALGDOGDRTOYNHWGBUDYRMZHDAPFIBYPTMDOYEQAHI");
    msg.flags = 107U;

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
    msg.setTimeStamp(0.617742115648226);
    msg.setSource(32177U);
    msg.setSourceEntity(176U);
    msg.setDestination(56018U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 140U;
    msg.step_number = 194U;
    msg.step.assign("TFBSLFCYLJVEOHQKROTCIXZMKWLFIWJJKLQZUKBPHQYOHEFJCGGXGRVEKKNIDUHKMCMRXTFXHPVDAKWWEXAHPXXGEOYPKNRBXROAJJHJYEMZWUSDER");
    msg.flags = 36U;

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
    msg.setTimeStamp(0.9702252687117073);
    msg.setSource(25967U);
    msg.setSourceEntity(42U);
    msg.setDestination(38703U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 116U;
    msg.step_number = 40U;
    msg.step.assign("MDXQWUVSYZNCGAGJBTLHTBSOKVAEJNLJBYDKGQFCNRSNYEPKFJBACHKZYMCSBCHZGCFZGGCJKMEVEKATVJLWNVUQWYYG");
    msg.flags = 137U;

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
    msg.setTimeStamp(0.018187617929751987);
    msg.setSource(64117U);
    msg.setSourceEntity(253U);
    msg.setDestination(13467U);
    msg.setDestinationEntity(51U);
    msg.state = 207U;
    msg.error.assign("DEVKLOPYXGUWHHMIERDZJHBQNGXATKLUTMFCKIKRLTNQUONXSPKZJRTYWUJTFVVFRNIXGWYBJWJTNTEOSVMMWXWZAHEALLOQBCZSEGGUKYHZIFKRYYALLCTSGZFAIMSTWBWEPOGCNDBRQDNVRJJDAZEGOITCBLYCBIVPYSDHPCWHBIDFYNWRIOQVZCVMSMKDDFCUQQJZILFPVQHZXUCNLFSUPGJHKRPXFOSEUQEMAXPOPAHBNSKMQDEXXBMRUA");

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
    msg.setTimeStamp(0.4323834297313377);
    msg.setSource(25834U);
    msg.setSourceEntity(165U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(42U);
    msg.state = 23U;
    msg.error.assign("SNBRPRDHYUIUWLMBZVIJWBMEAPZVOUKPPXDKFCVNOAYQNGNBOEFVCCSXVTINQNEVTDVTLJQYFA");

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
    msg.setTimeStamp(0.7442797650024507);
    msg.setSource(2914U);
    msg.setSourceEntity(219U);
    msg.setDestination(19130U);
    msg.setDestinationEntity(87U);
    msg.state = 169U;
    msg.error.assign("ZLNHURMCHRBZFSOCQPRKCTGZICCXRXRPCPDOLYMTVTHBQITJDUGVMYKYEXLGHPUYVGJMQGJMVZRJNHWSCFADCWMSGKQ");

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
    msg.setTimeStamp(0.6292590128931325);
    msg.setSource(63038U);
    msg.setSourceEntity(131U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.986099549862138;
    msg.lon = 0.1872686896494592;
    msg.height = 0.27812767791045345;
    msg.x = 0.7178359099011364;
    msg.y = 0.3801045891949808;
    msg.z = 0.6282561606106373;
    msg.phi = 0.6089639597679265;
    msg.theta = 0.016133905648749725;
    msg.psi = 0.43643689649929784;
    msg.u = 0.7751256134682958;
    msg.v = 0.26894353986518804;
    msg.w = 0.016232354962187445;
    msg.p = 0.3633208524443522;
    msg.q = 0.4944339186583224;
    msg.r = 0.6586204938280802;
    msg.svx = 0.016075597889473325;
    msg.svy = 0.07641041235627222;
    msg.svz = 0.2386203164730325;

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
    msg.setTimeStamp(0.6407766184447946);
    msg.setSource(58763U);
    msg.setSourceEntity(119U);
    msg.setDestination(10616U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.9116779876588851;
    msg.lon = 0.344739373200058;
    msg.height = 0.6920737662569552;
    msg.x = 0.548998660424413;
    msg.y = 0.44385727358083993;
    msg.z = 0.19991252246755242;
    msg.phi = 0.1688832097465397;
    msg.theta = 0.3758432618821863;
    msg.psi = 0.9417535015478805;
    msg.u = 0.8600045100086543;
    msg.v = 0.8088510724044421;
    msg.w = 0.05203241369525047;
    msg.p = 0.6482829689173278;
    msg.q = 0.5101315392184669;
    msg.r = 0.05273916688068936;
    msg.svx = 0.6929654808018895;
    msg.svy = 0.9107726519294578;
    msg.svz = 0.5858157200264505;

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
    msg.setTimeStamp(0.20900192386421101);
    msg.setSource(18541U);
    msg.setSourceEntity(77U);
    msg.setDestination(38943U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.9063239371745008;
    msg.lon = 0.4836693045493573;
    msg.height = 0.31279823248085403;
    msg.x = 0.1544488769457576;
    msg.y = 0.6575336576673059;
    msg.z = 0.9710407162964396;
    msg.phi = 0.2364047918260901;
    msg.theta = 0.22803225491053747;
    msg.psi = 0.9726264502618773;
    msg.u = 0.005611391224841555;
    msg.v = 0.917170178483534;
    msg.w = 0.37850420902456694;
    msg.p = 0.2813132029839953;
    msg.q = 0.07285728159726945;
    msg.r = 0.7712656461492021;
    msg.svx = 0.017584259315025164;
    msg.svy = 0.7583826941986037;
    msg.svz = 0.6417766260037349;

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
    msg.setTimeStamp(0.5245559838502649);
    msg.setSource(33737U);
    msg.setSourceEntity(209U);
    msg.setDestination(36143U);
    msg.setDestinationEntity(150U);
    msg.op = 170U;
    msg.entities.assign("HETDWJOOWIJXDBGMVLFBFSNJYUMFQKTEGIXMMXDVHZSCZEGBPGAPPQJZPTJBTUDGYLILNJRASNYLZQZEVNETLPWQXMBXRPPDPPIVDHUYTBUORQC");

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
    msg.setTimeStamp(0.15545394580546024);
    msg.setSource(57808U);
    msg.setSourceEntity(10U);
    msg.setDestination(8989U);
    msg.setDestinationEntity(200U);
    msg.op = 249U;
    msg.entities.assign("RKUFCKLAZCSHFJIBHADHOFGBMFLSPIBYPZNVHGKNWRUWJ");

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
    msg.setTimeStamp(0.18427979639412673);
    msg.setSource(31887U);
    msg.setSourceEntity(99U);
    msg.setDestination(37717U);
    msg.setDestinationEntity(147U);
    msg.op = 161U;
    msg.entities.assign("YCBTEYHWCMNLEKVLXJFKNJFKZJVWLFBHPAHLUPHFXOTJTADTZRYHZUPTUESTDPWNPIQHXGFWWSCIOJWQSVNDMQESEIDZORVDQIUOJRGNHWLTVIUBISXMSJCZPROURQCMTFOYMALEGELUXMGOCUUFVYAQVGQBNZARGORXPZEHNNKSMWIXYYOAPIRMXQDEGGYADKABRRBWNTIBSQKKXBFBCYBHCSIDYWKJFJZKUZTKCQSOMAFELAPCGZ");

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
    msg.setTimeStamp(0.601579619727831);
    msg.setSource(7269U);
    msg.setSourceEntity(63U);
    msg.setDestination(18158U);
    msg.setDestinationEntity(204U);
    msg.type = 172U;
    msg.speed = 4769U;
    const char tmp_msg_0[] = {107, -57, -1, 54, 108, -62, -98, -106, 71, 115, -121, -97, 7, 107, 3, -74, -65, -52, -84, 115, 6, 71, -51, -41, -100, 76, -113, -53, 14, -24, -37, -108, -27, 111, 55, 5, 73, -47, -63, -124, 95, -27, -109, -15, 56, 94, 60, -9, -79, -61, 17, 113, 56, 39, 62, -75, -120, 57, -92, -61, -96, 104, -97, -70, 82, 8, -34, 119, 121, -68, 91, 49, -78, -2, -32, 56, -125, 111, -8, 72, -124, 116, -5, 73, -101, 97, 118, -120, 80, 75, -64, 123, 99, 67, -117, -7, -86, 124, -122, -100, -98, -64, -9, 50, -68, -32, 89, -68, -78, -123, -63, -89, -95, -38, -37, 3, 52, -106, 66, -13, -42, -44, 90, -106, -74, -46, 22, -106, 70, 69, -46, -26, 84, -105, -107, 106, -92, -82, -101, 83, 89, -7, -26, -82, -2, 43, 68, -77, 16, 120, -51, -78, 29, -127, 110, 4, 46, 93, 54, -48, -34, 110, 120, -32, -67, -23, 99, 75, -50, 117, -10, -112, -91, 84, 10, 120, -20, 37, -93, 74, -71, -42, 7, 61, -3, -78, 80, -8, -91, -111, 14, 53, -75, -94, -48, 67, -30, 33, 44, 47, 38, 15, -44, -78, 72, 2, -29, 63, -120, 65, -60, -118, 82, 15, 100, 62, 83, 22, 90, -61, 115, -73, -6, -79, -10, 45, -85, -3, 88, -119, -70, -126, 109, 121};
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
    msg.setTimeStamp(0.47570769755396547);
    msg.setSource(53901U);
    msg.setSourceEntity(208U);
    msg.setDestination(20168U);
    msg.setDestinationEntity(118U);
    msg.type = 59U;
    msg.speed = 27870U;
    const char tmp_msg_0[] = {35, 108, -47, -84, 56, -42, 58, 21, 80, -23, -78, 111, -110, -36, -33, -66, 37, -126, 35, 72, -30, 93, 93, 123, -61, 60, -16, 83, 44, 71, 15, -3, -32, 62, 82, 110, 61, 23, -101, -114, -97, 0, -89, 34, -60, 124, -119, 67, 118, -104, 14, -36, -85, -73, -82, -39, -10, -117, -109, 38, 114, 23, -117, 14, -23, 41, 20, 86, 70, -54, 28, 12, 63, -8, -87, -128, 107, -88, 90, 33, -63, 80, -56, 54, -61, 27, 104, 101, -69, -76, -41, 114, 110, -106, 96, -22, 66, 24, -53, -112, -103, -97, -68, 49, 88, -72, -55, -91, 119, 56, -60, -2, 68, 21, -65, 40, 62, -16, -121, 120, -11, -88, 99, 65, 99, 87, 92, -78, -89, 118, 12, 59, -127, 75, 2, -20, 116, 62, 32, -80, 96, -35, 113, -28, -120, 4, 52, 35};
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
    msg.setTimeStamp(0.4335277821631701);
    msg.setSource(45222U);
    msg.setSourceEntity(84U);
    msg.setDestination(21280U);
    msg.setDestinationEntity(37U);
    msg.type = 97U;
    msg.speed = 35386U;
    const char tmp_msg_0[] = {-26, 98, 93, 83, -77, 22, 99, -37, 63, -59, -42, -33, 51, -67, 90, 79, -101, 42, -112, -35, 23, 105, 12, -63, -60, -69, -4, -38, 56, -38, 79, 14, -121, 55, 77, -65, 9, 41, -101, 11, 24, 31, 77, -48, 109, -114, -88, 107, 90, 10, 10, -55, 24, -79, 115, 35, 73, 98, 64, -21, -73, 89, -7, -79, 56, -74, -106, -27, 85, 53, -71, 124, 109, 85, -66, -73, 70, -54, -103, -46, -59, 36, -59, -45, 107, -73, 53, -70, 87, 48, -35, 75, 65, 38, -121, -81, 53, 60, -48, 17, -36, 102, 76, 117, 40, -91, 41, 66, 120, -107, -76, 92, 74, -124, -57, 87, 0, 43, 93, 23, -124, 1, 114, 8, -60, -74, -30, 0, -85, -38, -1, -100, 108, 122, 17, -80, 122, -35, -104, -33, -22, 16, -12, 44, -97, 37, -41, 94, 22, -114, 42, -95, -32, -32, -58, 60, 87, 51, -9, -57, 114, 66, 52, 60, -8, 89, 51, 85, 102, -93, 92, -5, -99, -115, -118, 89, -76, -70, 33, 3, -68, 61, 26, 51, 108, 66, 5, 53, -27, -100, 70, 77, 67, 82, -121, 35, 65, -7, -107, 17, -81, 98, 126, -62, -41, -23, 38, 124, 76, -57, 41, -58, 121, -51, 108, -72, 30, 23, 108, -74, 118, -3, 14, -28, -120, 1, 62, -109, 6, 105, 44, -118, -127, 83, -54};
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
    msg.setTimeStamp(0.9118028760374622);
    msg.setSource(54155U);
    msg.setSourceEntity(228U);
    msg.setDestination(1826U);
    msg.setDestinationEntity(28U);
    msg.available = 254766501U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.8621050297720034);
    msg.setSource(59549U);
    msg.setSourceEntity(177U);
    msg.setDestination(52324U);
    msg.setDestinationEntity(108U);
    msg.available = 1949665359U;
    msg.value = 71U;

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
    msg.setTimeStamp(0.09868656495269812);
    msg.setSource(20916U);
    msg.setSourceEntity(207U);
    msg.setDestination(9607U);
    msg.setDestinationEntity(242U);
    msg.available = 2170837139U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.25838028682040937);
    msg.setSource(63128U);
    msg.setSourceEntity(210U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(126U);
    msg.op = 239U;
    msg.snapshot.assign("HZYAGHKKIYOLFBHDRFWVJBLESDRABVTQYPCAEAPUQOUZNDIGUUFEQMPQKMRDKRSVCEXVCWQVUBETTL");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 250U;
    tmp_msg_0.plan_id.assign("AUACAVXLFSGRKYDQWTCYMXAAKIOFHMOWINWOWSKCVSGSMZDXDHKYWMFGRTNCZNYHPIRNTNKZVUBEPHLJPCKJMSFLWEXWHKHUTUEBBWZKAPQQSVRAIJUVSHHKIEPIISGXYCWNORREFUVEQNAUMXDBLLIMKPMRIGBDGOGGRQYCTJQEDZZZTBXVRALPNMDUOTLXZFZXCUYTLTJQSTCNOOEB");
    tmp_msg_0.plan_eta = -1277576689;
    tmp_msg_0.plan_progress = 0.553329320946777;
    tmp_msg_0.man_id.assign("SHJATICBVGIDQSVKOYDPBXWNPOIELCIAZJPLJFKZTW");
    tmp_msg_0.man_type = 51419U;
    tmp_msg_0.man_eta = 1795186568;
    tmp_msg_0.last_outcome = 134U;
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
    msg.setTimeStamp(0.6186127857219076);
    msg.setSource(38288U);
    msg.setSourceEntity(216U);
    msg.setDestination(8268U);
    msg.setDestinationEntity(205U);
    msg.op = 47U;
    msg.snapshot.assign("YMJQVLSREVKTSFFYLRYTWQXFTCQYVKVCGOMKBDHDXRQDHAOKHYMXYBZUMQBJKORVIBIDXGZUPAULENXKKJPCJVGOSZIQLLXWEZIJMAXUHBMGFCYLGWTJIPAIWWNWEEISQOBJZONPHVRSCPYGDFPBZSAFHVRRIDSEUDJBXICLQEZTNOUBZGKZAKYQANYETNRJVFLCLGHFAMRFMWTIONMUETNUWEQOCN");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 89U;
    tmp_msg_0.actions.assign("PJTQNXIALSHAXRRCPGXTDXMOBGVSOMYVKWECCXWPTPAMARBMOJPVFHCXKDTYHKYSMSSLTUQINXUMJAFUZAFFFEDFTESZIEQJFINKQK");
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
    msg.setTimeStamp(0.885292125992879);
    msg.setSource(8769U);
    msg.setSourceEntity(189U);
    msg.setDestination(64663U);
    msg.setDestinationEntity(152U);
    msg.op = 13U;
    msg.snapshot.assign("NVBBSLUEHNTZKJNPYRQVLTADGVMQRUYSMHCNXXYDOKCXAXICNCQXTTTJIEZRJUJVJBWVGASQGWAORYPUEGHFZXGISCKEJLBJMGOLVPNKJAIFVZVUKSQDRFYCAJIDNLETCZSAQER");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 81U;
    tmp_msg_0.htime = 0.15685020514251424;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 175U;
    tmp_tmp_msg_0_0.htime = 0.4086600432020896;
    tmp_tmp_msg_0_0.context.assign("MANXLCSAUQRXPRCPTYHFHHTGMJAUXVMWBQYHQHUUJTEHKBZMXWZTOVOLBXPKITTCFPNJMAPSMDVQQICYSRYDWNQHEKJWVIKHBLDJWKLBTOPKQOXGIBXLERMKPOCGSEBUDDJUVWANZPZIDLFJZXJRL");
    tmp_tmp_msg_0_0.text.assign("EORFVFRGUEYOPUDKEISHKLNWYVSGBZUWPJZMFRWQZVLGNABDCMZNYOXVKTLCGCTNSJMHOOUMYQRJCTWQYFFGFXVDVJPBDWSNQVUBRAKJVDWSIYKTPIXANZLICHGVKQUYMBTKXTNASFDWVWZRPXXBHYOCRAMMIWCQKDXKDSZPNLIETGBEHHXJOMUHOUIPTUJKEQLNRNTLHEADRDXAHELEBPSGQPMTOBYORGXUZPCSGECYISQLALBA");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.737650639375378);
    msg.setSource(29459U);
    msg.setSourceEntity(94U);
    msg.setDestination(15048U);
    msg.setDestinationEntity(142U);
    msg.op = 203U;
    msg.name.assign("MMPBXSSIRNXQELBFMLRWBNHTMJIUHCDMOWLBFJSYGERYFBZZDVDCTYZXCIHQTYNPNQAVHIUGGIIPGSVLJEROJXEZOAFAUSKSCKUXATJBMXWJNYNSKHEGCAHYTUOSBAQTWVCVORXWNLI");

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
    msg.setTimeStamp(0.8742942634541021);
    msg.setSource(22435U);
    msg.setSourceEntity(35U);
    msg.setDestination(39513U);
    msg.setDestinationEntity(208U);
    msg.op = 111U;
    msg.name.assign("GWQVDYICAVPOTZQNXPANNLXYWXOCGGNVHUUCOYSXYHKKGPSVCGFINQZDMMSLDTLRLTB");

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
    msg.setTimeStamp(0.32248805535521374);
    msg.setSource(27685U);
    msg.setSourceEntity(55U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(78U);
    msg.op = 224U;
    msg.name.assign("CAVBZAKXOQNERAUMMGVNUAPMJMIEZBQWLGKTIVWPTJDLWUAJKYYBIKKJNJOYONZKHEDYSTZCDBGNCSIZ");

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
    msg.setTimeStamp(0.38272450891067067);
    msg.setSource(10803U);
    msg.setSourceEntity(193U);
    msg.setDestination(35457U);
    msg.setDestinationEntity(153U);
    msg.type = 100U;
    msg.htime = 0.5733278325438375;
    msg.context.assign("VJDTKXKGIIMCILPKXREFJIVHEVPSBVHDGTIRWBWBU");
    msg.text.assign("OWZRWVSAPUJMKTRP");

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
    msg.setTimeStamp(0.766338807291188);
    msg.setSource(22664U);
    msg.setSourceEntity(97U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(59U);
    msg.type = 149U;
    msg.htime = 0.15796539599697068;
    msg.context.assign("TJBQTDPSTGQKIHEZIZAYAPMUVRSOKIVPCMYEWFFOUEDMVSQATNCTHXJ");
    msg.text.assign("XJNWRRCDNDDYEOYNMBKOIAMESEDQFTFLEXVPKKUPDGQUPOBCCBXMNUXDWILJMPBJWXRPYTRATSTVUZFBZCMVUASOAJUDWXWSGGCIFOLYZBXGBAQQVPISJZVFYSECHSJPXLFEHHILTGVQQUOHSWINGSWEHKFWOYNHBCLDPNMZZOAOJXDLEYHAUHMIYBOQFSKPQBLKAJUCIJTKEXKZJVQIFGLRVNNMRIHHMAQGMVDRCYY");

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
    msg.setTimeStamp(0.38137384433913446);
    msg.setSource(23074U);
    msg.setSourceEntity(14U);
    msg.setDestination(19745U);
    msg.setDestinationEntity(224U);
    msg.type = 102U;
    msg.htime = 0.3750911828602359;
    msg.context.assign("TGAHLJFFCJBTDDJDAGQBGCREFCHRJOGMDXLGBXHCYSDYVMREATADEZKEIYVMVBVMMWNBAUHKQNVFUXQYLAFPPDLPVZJRMLSLZMECQBEZHALSRSEIOPTQPSXWURTSSETPFSYONPOKDWKCVDHIASZZJIUXFQWWXXKRYJXDJQZIGCNOCIQTYZCQHNWHWTUUMJONLNCGPKOGUFWNJRXITVOEBQAFUPKBKGFWNENKSYBWYVOMAP");
    msg.text.assign("HKPOGAWDHXTMDOEWQXY");

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
    msg.setTimeStamp(0.3682976849260621);
    msg.setSource(53764U);
    msg.setSourceEntity(117U);
    msg.setDestination(15501U);
    msg.setDestinationEntity(187U);
    msg.command = 162U;
    msg.htime = 0.05690296047338517;

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
    msg.setTimeStamp(0.4109293705160513);
    msg.setSource(6019U);
    msg.setSourceEntity(190U);
    msg.setDestination(60128U);
    msg.setDestinationEntity(252U);
    msg.command = 132U;
    msg.htime = 0.08531149201730337;

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
    msg.setTimeStamp(0.3060388848478298);
    msg.setSource(40588U);
    msg.setSourceEntity(159U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(215U);
    msg.command = 38U;
    msg.htime = 0.1070377291961262;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 218U;
    tmp_msg_0.htime = 0.9577069680370088;
    tmp_msg_0.context.assign("JDFVCTRFXBLFMPGPGLVGLAMMABIDEZHOJARDEPNQDLLJMXYEOJNNHEQKOBXDJRTTOMNRUBNUIMFECKHTDVKLYEYEIYADZVSNGQFSGWHIWMBKPKOYUVITEUHCVOFTPCUUUUNBGKOBXEFYDISVLWWZP");
    tmp_msg_0.text.assign("WHPTTGWMADGFSONHAKVLXAGJXANVNIHWRHHURMRBJTQPZIVPCXZCFNSREDDKUCLALMUZMWYSPQANMRRHVEIKDZXUBLPWVXJHSDLDQEJDBWNLTOEFESSZQWVAGXZUPOFOUTYLEQIFQ");
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
    msg.setTimeStamp(0.7099628933723343);
    msg.setSource(23655U);
    msg.setSourceEntity(27U);
    msg.setDestination(6997U);
    msg.setDestinationEntity(210U);
    msg.op = 133U;
    msg.file.assign("ULJUKRKSHSBAOQCPQRTZRFWFHAUYQCSJDANTPGTJRJMNHHUTPKDACFHUZIMWGOSHF");

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
    msg.setTimeStamp(0.10418731066742293);
    msg.setSource(22138U);
    msg.setSourceEntity(181U);
    msg.setDestination(40904U);
    msg.setDestinationEntity(78U);
    msg.op = 249U;
    msg.file.assign("ZHRLURBGFGEJTGRNAQAAUQODRGKUTWXSQNERMCNIPXLFTVEUBIXMMYJIMOCGJAZMHOZXZLGDBOBUWAUOSHSLZPIAEFNZXCYKBPURJKYKVILVPWLJKLDHPRVXGJYYWVLUQZYJVZCSOCZCQQPBFYMHT");

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
    msg.setTimeStamp(0.0994682427460526);
    msg.setSource(24819U);
    msg.setSourceEntity(109U);
    msg.setDestination(53531U);
    msg.setDestinationEntity(226U);
    msg.op = 83U;
    msg.file.assign("NDWCYFCNJBYSEDDVVZBFLLAWHEGNUFPFYKHQRUEOHMXARNDAFIVISXYGBWRZFQCPRJUUZVKOQDKUTLGBPTJOMUHGXGQPXSDEWQSACTGPIDUSVOPOLTVZHVIUEUMMWRTX");

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
    msg.setTimeStamp(0.7289427595338023);
    msg.setSource(13175U);
    msg.setSourceEntity(91U);
    msg.setDestination(46932U);
    msg.setDestinationEntity(210U);
    msg.op = 75U;
    msg.clock = 0.9116905224152172;
    msg.tz = -14;

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
    msg.setTimeStamp(0.48390542240288015);
    msg.setSource(26648U);
    msg.setSourceEntity(176U);
    msg.setDestination(27467U);
    msg.setDestinationEntity(155U);
    msg.op = 15U;
    msg.clock = 0.5320493288517646;
    msg.tz = -17;

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
    msg.setTimeStamp(0.25915514594657296);
    msg.setSource(12232U);
    msg.setSourceEntity(170U);
    msg.setDestination(65289U);
    msg.setDestinationEntity(181U);
    msg.op = 172U;
    msg.clock = 0.7756319832061194;
    msg.tz = -39;

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
    msg.setTimeStamp(0.06721259618877562);
    msg.setSource(2201U);
    msg.setSourceEntity(170U);
    msg.setDestination(38808U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.31907908933666485);
    msg.setSource(45119U);
    msg.setSourceEntity(164U);
    msg.setDestination(50017U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.4927901164698746);
    msg.setSource(51124U);
    msg.setSourceEntity(47U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.28364964863617903);
    msg.setSource(48685U);
    msg.setSourceEntity(159U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(151U);
    msg.sys_name.assign("KNTSXWAFQTPLWGELTYIHSZJOUQYCKSAXCNPOMENMZIDJJSWDMZHWHNVGQEWTZRLADYNQUXHDCRDRFZEOHJYCBVXAPVMHAUJNGR");
    msg.sys_type = 81U;
    msg.owner = 45309U;
    msg.lat = 0.021153958314124144;
    msg.lon = 0.5597086176414887;
    msg.height = 0.4276535536649768;
    msg.services.assign("VEAMXFGSKWXQRZITBSTGBCKNNPMVBGPIDHXFDPVUHDMILWSENYMHWNKORGUCNJXVYMRKOSKDPYDOAYKSOZVEDNAQIZPLMLFTFFAHBALOAIQUACPQXKPRBZMSNWJCLRGXTBCOGXWBTBUHVGBASRTEHVZZET");

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
    msg.setTimeStamp(0.19890740880201896);
    msg.setSource(52618U);
    msg.setSourceEntity(132U);
    msg.setDestination(22378U);
    msg.setDestinationEntity(164U);
    msg.sys_name.assign("VCTNRIYGUEHWBWGVKDNIFPPWGLCTEXDPCDUUKNQLPZXDHLBUKULWXFVTPJXWXAAZHCTIPSNTILFLDE");
    msg.sys_type = 213U;
    msg.owner = 53867U;
    msg.lat = 0.027152102717166726;
    msg.lon = 0.7458163231099539;
    msg.height = 0.2210929207079072;
    msg.services.assign("KDHFAOKYJCWREJSPLVLENXBXFHMGVQGIYTYXTBAPRNBMEODHXOVQKRVLCADKPXMCVKHIZMCZUQUNGMNCQG");

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
    msg.setTimeStamp(0.8133003552031107);
    msg.setSource(41445U);
    msg.setSourceEntity(121U);
    msg.setDestination(8884U);
    msg.setDestinationEntity(93U);
    msg.sys_name.assign("RHFGHVICTAJAYTGQODSNUEJFIFXKTWLJHCKVAAMJFOEWEDSDJRBIHMEMFNQDZGBQYENNEGTRHVFOJBAWMPVGHYZXSDXJTVXRAKPTPOGLQKUVPYNYKHQJBVPBXWNSTPPXNLORWPLDMWBGMKNUPSTSLUZBKFABSGJABONXADC");
    msg.sys_type = 166U;
    msg.owner = 26545U;
    msg.lat = 0.12766136427842567;
    msg.lon = 0.803363726984694;
    msg.height = 0.4059581248528479;
    msg.services.assign("AHIMYXCKREOOETAJOGSOWFKGNZVEBIQRBGDXXGZVWKBXELERFXTZSLPQQMTABIUPNOPYSSFA");

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
    msg.setTimeStamp(0.5646148892834164);
    msg.setSource(31528U);
    msg.setSourceEntity(245U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(99U);
    msg.service.assign("WHLMPDVVFSHHMXVOHGOMFRPVQMEVCPIGQNSYJAQGCUDDIOUAJBQPLDZQDRGQRSFKYYQQSMXXAIKHMBANGFITZ");
    msg.service_type = 75U;

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
    msg.setTimeStamp(0.09879479005838965);
    msg.setSource(18959U);
    msg.setSourceEntity(240U);
    msg.setDestination(52177U);
    msg.setDestinationEntity(231U);
    msg.service.assign("YVNTCNAUPOTJSMKUIWDGHBBYUWURXZMACPYBTTLVWFXWJKKYSZUEEIZJOLDDOLCLDOASFWJVJKHGXQBNPQYMQSEYTGVUNIZSKUTZJPHJXQJNMXXRLQOYKAQAZAFTUSRIFGBWZFEORNGQRHTCKCTCXEPDMGHFMUNBPVGC");
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
    msg.setTimeStamp(0.5209328729841899);
    msg.setSource(15579U);
    msg.setSourceEntity(218U);
    msg.setDestination(64085U);
    msg.setDestinationEntity(151U);
    msg.service.assign("ZUWTKDZQXKEWWVKKH");
    msg.service_type = 226U;

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
    msg.setTimeStamp(0.2947801065129687);
    msg.setSource(59426U);
    msg.setSourceEntity(159U);
    msg.setDestination(7531U);
    msg.setDestinationEntity(3U);
    msg.value = 0.10483988031364244;

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
    msg.setTimeStamp(0.5673582057951896);
    msg.setSource(57207U);
    msg.setSourceEntity(178U);
    msg.setDestination(43995U);
    msg.setDestinationEntity(88U);
    msg.value = 0.3095120545032487;

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
    msg.setTimeStamp(0.2967376128612129);
    msg.setSource(50993U);
    msg.setSourceEntity(89U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6301061051454597;

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
    msg.setTimeStamp(0.6764443534269409);
    msg.setSource(39322U);
    msg.setSourceEntity(246U);
    msg.setDestination(15840U);
    msg.setDestinationEntity(254U);
    msg.value = 0.018483026138429004;

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
    msg.setTimeStamp(0.46259985900036815);
    msg.setSource(1742U);
    msg.setSourceEntity(48U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6093815598152691;

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
    msg.setTimeStamp(0.18894471944543856);
    msg.setSource(39617U);
    msg.setSourceEntity(174U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(174U);
    msg.value = 0.4787477886839735;

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
    msg.setTimeStamp(0.9199366817852235);
    msg.setSource(19513U);
    msg.setSourceEntity(37U);
    msg.setDestination(2402U);
    msg.setDestinationEntity(150U);
    msg.value = 0.3534687343323708;

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
    msg.setTimeStamp(0.03249035888900753);
    msg.setSource(21026U);
    msg.setSourceEntity(197U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(79U);
    msg.value = 0.44641531278657987;

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
    msg.setTimeStamp(0.054910803911241035);
    msg.setSource(3299U);
    msg.setSourceEntity(205U);
    msg.setDestination(53515U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6746750038673035;

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
    msg.setTimeStamp(0.5687424700262791);
    msg.setSource(59359U);
    msg.setSourceEntity(93U);
    msg.setDestination(607U);
    msg.setDestinationEntity(27U);
    msg.number.assign("OAKHAEJBJBYCRVBMWLDHAXBUTSLTDRBWOWQZIMVYEVNCAODRWFMHYXVRIBBQJJMTQTKYWGKAZUFFLVCCCGNKDUXLOLMUIFHCDQCESXWLPGCZIQNDMBVMIPAPJOCIJPYAXPSHZXIXHUHPGFGFKYQLPYWXBAVEVGLUMKNOFZIQFZUMESTGJCHKEPSVJKESNSKUSSPOQRTLNNNHXOIJRAETBVXJGQODWLZZZPTIAUTSUDRFTKOQFREEN");
    msg.timeout = 77U;
    msg.contents.assign("VQWRIZACOBNOPJLVTUBXOYLMHKVEABMTYZBFMMCNVQMJESTWKFTJLDSMWZVMPVIMNYGDXGJVOFKIDNZZYSQWELHEFPRUAJHSKHDFSJXKZGPHPYNCQLTNNUONXCEHTWGBSHNKWKZIEPGYECQL");

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
    msg.setTimeStamp(0.9373078920829895);
    msg.setSource(60166U);
    msg.setSourceEntity(184U);
    msg.setDestination(10896U);
    msg.setDestinationEntity(254U);
    msg.number.assign("FCXZTZDOQYCXZHUARZWKDIQBAJHRSFXNNFJTOYZPSWKVTEGLJVGFEZYGTHNFKFWMIUUDBQGHNNPC");
    msg.timeout = 6895U;
    msg.contents.assign("OJQJVKIZZHDFBZMDIDFRHEUKPUUBGSCXZIMHNQQEGEEVECOYHPTNAQCSSRUQOIAJCFKWJCMYWBYYFHTRJFRNSJBBDHZFKSNTPAUKBABHVGZL");

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
    msg.setTimeStamp(0.5671023255809883);
    msg.setSource(42623U);
    msg.setSourceEntity(173U);
    msg.setDestination(32436U);
    msg.setDestinationEntity(49U);
    msg.number.assign("ITMQGNDWDQBUXETQKULGYFXJZLRMZXHRIVBHTHYDWCAJBNFLSACYKWRCDYDBJUCOBOAPLDNHXJWHKLFRJMKYMCQTNYJPJEQJYVZWRKSGIEULWANHDFGPFIBFUENOOFTMQUBNOKWOVKYSVFLVYCMQGGUSQDBAXWTEKNCSXWCPTSPRYABGNOQMHKHBPILJUEL");
    msg.timeout = 708U;
    msg.contents.assign("ICTQZAHQFLLZRMNSSXXZMMCYSQWLBTMKMZYQGNJVFGKFOOVVHTZPBEPIUACUIBRRSFFPIYHADVMXOSUZNYWDVQYVDPKQSKSARLFOXNDZHEWOBOPRXADDVUNAWBETNUAVYZJLJTSUDIMGWKPFWTCCUGWCOOESIEEEXRTMXDYBULKUXOGCASWNBAJZKUWIKHFPOKRDMPMJGLEYCLTRNQNZQJFIFCITRJBWXYL");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.6579478511332573);
    msg.setSource(36769U);
    msg.setSourceEntity(87U);
    msg.setDestination(45233U);
    msg.setDestinationEntity(99U);
    msg.id = 63U;
    msg.range = 0.11187800547378923;

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
    msg.setTimeStamp(0.2813493330052894);
    msg.setSource(22688U);
    msg.setSourceEntity(251U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(205U);
    msg.id = 122U;
    msg.range = 0.806118554958577;

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
    msg.setTimeStamp(0.10088124685647604);
    msg.setSource(3987U);
    msg.setSourceEntity(106U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(62U);
    msg.id = 84U;
    msg.range = 0.8592170957769503;

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
    msg.setTimeStamp(0.5800228286732386);
    msg.setSource(1350U);
    msg.setSourceEntity(146U);
    msg.setDestination(28044U);
    msg.setDestinationEntity(132U);
    msg.tx = 172U;
    msg.channel = 162U;
    msg.timer = 57595U;

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
    msg.setTimeStamp(0.3696796622168613);
    msg.setSource(36261U);
    msg.setSourceEntity(54U);
    msg.setDestination(15876U);
    msg.setDestinationEntity(57U);
    msg.tx = 215U;
    msg.channel = 42U;
    msg.timer = 2803U;

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
    msg.setTimeStamp(0.5132073762197784);
    msg.setSource(38412U);
    msg.setSourceEntity(250U);
    msg.setDestination(15065U);
    msg.setDestinationEntity(143U);
    msg.tx = 85U;
    msg.channel = 24U;
    msg.timer = 62611U;

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
    msg.setTimeStamp(0.9149687786078505);
    msg.setSource(37085U);
    msg.setSourceEntity(64U);
    msg.setDestination(59199U);
    msg.setDestinationEntity(209U);
    msg.beacon.assign("NMZUKWWSXVKKUNTOHVLCXHZIZCYQBMZYSGIFOLUWBTNBALHQHMNKNMPER");
    msg.lat = 0.7444327423504274;
    msg.lon = 0.4893339908520188;
    msg.depth = 0.46904655945127116;
    msg.query_channel = 91U;
    msg.reply_channel = 75U;
    msg.transponder_delay = 179U;

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
    msg.setTimeStamp(0.5245922450649622);
    msg.setSource(50574U);
    msg.setSourceEntity(177U);
    msg.setDestination(25546U);
    msg.setDestinationEntity(203U);
    msg.beacon.assign("VGWELQHQDBDSCLWBITGKFZXIDPXUXRS");
    msg.lat = 0.7402508454226758;
    msg.lon = 0.6016208441058238;
    msg.depth = 0.6443979877582258;
    msg.query_channel = 115U;
    msg.reply_channel = 154U;
    msg.transponder_delay = 4U;

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
    msg.setTimeStamp(0.2907191147138263);
    msg.setSource(45828U);
    msg.setSourceEntity(218U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(147U);
    msg.beacon.assign("OMRQCATPIZKWPQYVDYIUBGRWWIFEMCHSUXQLBBGGSJCSUBGOEJNAVDOBUNLHSYESFPBXUCHZZLNKBMMTACCJKIEWQQFYDVFSRGMXBXLHIYJDXWOKFJZTUKITMZTPWEAOYFKUFDLAKNRSISAPEKRBQNJQTNAVNSLJRZHYVHXGCOBIIDNUGPJORZVMYWGWRMFOEAUHZYSHPJAEPONVQVRXXLZWXGQITQDCPLWDZKCVKUHTFGTJXLEMNMAT");
    msg.lat = 0.4338841018495595;
    msg.lon = 0.23014278435015845;
    msg.depth = 0.39336071174039877;
    msg.query_channel = 205U;
    msg.reply_channel = 180U;
    msg.transponder_delay = 200U;

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
    msg.setTimeStamp(0.5617607395833122);
    msg.setSource(63971U);
    msg.setSourceEntity(60U);
    msg.setDestination(64883U);
    msg.setDestinationEntity(117U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.3139089217980383);
    msg.setSource(55393U);
    msg.setSourceEntity(4U);
    msg.setDestination(8470U);
    msg.setDestinationEntity(144U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.67318564558456);
    msg.setSource(49230U);
    msg.setSourceEntity(9U);
    msg.setDestination(24377U);
    msg.setDestinationEntity(4U);
    msg.op = 74U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RVTTVCHBFCMGVGJRUOWSYWENEPLDHNPQKJHWRBNYYCVPZBWOTTNTDCHIQDAECUYPXLQYTVHXZQUURIVZRXHAKRALLVMNUDOAKEIYSDZYQIJDWWBGIHICMLEFBYLZYXXZDSOQLBOMQGDJVQFDZKKTMWAPAEFALMSPKRGUGABQSCBHGMSJPXYLNRFPOMZEBTQUIFKBEVKVTAI");
    tmp_msg_0.lat = 0.34605973436217996;
    tmp_msg_0.lon = 0.2572218045280479;
    tmp_msg_0.depth = 0.7060689671642247;
    tmp_msg_0.query_channel = 46U;
    tmp_msg_0.reply_channel = 223U;
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
    msg.setTimeStamp(0.5931426925133455);
    msg.setSource(56125U);
    msg.setSourceEntity(185U);
    msg.setDestination(41402U);
    msg.setDestinationEntity(206U);
    msg.address = 131U;

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
    msg.setTimeStamp(0.2914444295074985);
    msg.setSource(34677U);
    msg.setSourceEntity(183U);
    msg.setDestination(18069U);
    msg.setDestinationEntity(101U);
    msg.address = 144U;

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
    msg.setTimeStamp(0.5166665863114884);
    msg.setSource(4937U);
    msg.setSourceEntity(116U);
    msg.setDestination(62688U);
    msg.setDestinationEntity(178U);
    msg.address = 156U;

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
    msg.setTimeStamp(0.06757634953739022);
    msg.setSource(47014U);
    msg.setSourceEntity(70U);
    msg.setDestination(61238U);
    msg.setDestinationEntity(103U);
    msg.address = 87U;
    msg.status = 213U;
    msg.range = 0.5099468733914418;

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
    msg.setTimeStamp(0.4092875870876622);
    msg.setSource(36989U);
    msg.setSourceEntity(32U);
    msg.setDestination(65160U);
    msg.setDestinationEntity(140U);
    msg.address = 161U;
    msg.status = 149U;
    msg.range = 0.760488559094787;

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
    msg.setTimeStamp(0.760866198832299);
    msg.setSource(31986U);
    msg.setSourceEntity(131U);
    msg.setDestination(14526U);
    msg.setDestinationEntity(160U);
    msg.address = 7U;
    msg.status = 199U;
    msg.range = 0.5953027455704785;

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
    msg.setTimeStamp(0.5273299581739587);
    msg.setSource(11627U);
    msg.setSourceEntity(167U);
    msg.setDestination(58667U);
    msg.setDestinationEntity(217U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GANYBHPITRMJPLFGRHULXVPFVTCGBVCEXXYINWTOWJQIQOCNJYZMPWZHUMUEUZWUJFMJVZCSKGQQQESNLSJXOLGIYFYGRBTOAULKKVRDARXVKBLYDSOOZIGGMBNFEHMESBACD");
    tmp_msg_0.value.assign("HSNNPUPVATDDXAOJCTURZPLLDCRPJQMUMKGAYAFGJGGUDFVXTRMNWYIIWZROWBJNJWIUAFPTYVLPEKXUQRKDQJIBNLRKFCPJZWLBVQGVFOZWHJNOMEQXTBGQDMBTUPXASISOVHXQEMRAVWYVNHYLCQAMLYGIEKFKHDCKHBBXTKQVMSHEXWAWOPDSZYFDLFSLZNIEHTHNILSYJRGZBUIZT");
    tmp_msg_0.type = 158U;
    tmp_msg_0.access = 48U;
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
    msg.setTimeStamp(0.8748247832332171);
    msg.setSource(6787U);
    msg.setSourceEntity(14U);
    msg.setDestination(27318U);
    msg.setDestinationEntity(164U);
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 47696U;
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
    msg.setTimeStamp(0.4737190108684879);
    msg.setSource(40076U);
    msg.setSourceEntity(211U);
    msg.setDestination(3363U);
    msg.setDestinationEntity(165U);
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.9043268784179175;
    tmp_msg_0.phi = 0.5638224285018172;
    tmp_msg_0.theta = 0.964978029848144;
    tmp_msg_0.psi = 0.6905088310812447;
    tmp_msg_0.psi_magnetic = 0.1360332263098356;
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
    msg.setTimeStamp(0.3394465524750099);
    msg.setSource(13851U);
    msg.setSourceEntity(226U);
    msg.setDestination(13543U);
    msg.setDestinationEntity(250U);
    msg.enable = 228U;

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
    msg.setTimeStamp(0.05768658631863266);
    msg.setSource(5243U);
    msg.setSourceEntity(125U);
    msg.setDestination(31924U);
    msg.setDestinationEntity(71U);
    msg.enable = 214U;

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
    msg.setTimeStamp(0.337061166433797);
    msg.setSource(62439U);
    msg.setSourceEntity(133U);
    msg.setDestination(7876U);
    msg.setDestinationEntity(248U);
    msg.enable = 213U;

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
    msg.setTimeStamp(0.407139258438162);
    msg.setSource(39515U);
    msg.setSourceEntity(165U);
    msg.setDestination(38071U);
    msg.setDestinationEntity(180U);
    msg.summary = 237U;
    msg.level = 119U;

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
    msg.setTimeStamp(0.08349751111534576);
    msg.setSource(41440U);
    msg.setSourceEntity(85U);
    msg.setDestination(1682U);
    msg.setDestinationEntity(137U);
    msg.summary = 22U;
    msg.level = 117U;

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
    msg.setTimeStamp(0.7708321588016053);
    msg.setSource(46955U);
    msg.setSourceEntity(37U);
    msg.setDestination(12318U);
    msg.setDestinationEntity(226U);
    msg.summary = 151U;
    msg.level = 19U;

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
    msg.setTimeStamp(0.3839949525560207);
    msg.setSource(43151U);
    msg.setSourceEntity(192U);
    msg.setDestination(17168U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.03372171663530166);
    msg.setSource(57857U);
    msg.setSourceEntity(135U);
    msg.setDestination(29062U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.7985912936949134);
    msg.setSource(35725U);
    msg.setSourceEntity(47U);
    msg.setDestination(41069U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.44761003103228425);
    msg.setSource(31182U);
    msg.setSourceEntity(131U);
    msg.setDestination(64769U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.8235973778953848);
    msg.setSource(19801U);
    msg.setSourceEntity(11U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.665069894970255);
    msg.setSource(28966U);
    msg.setSourceEntity(72U);
    msg.setDestination(29647U);
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
    msg.setTimeStamp(0.12167402580384279);
    msg.setSource(30028U);
    msg.setSourceEntity(28U);
    msg.setDestination(35300U);
    msg.setDestinationEntity(84U);
    msg.op = 119U;
    msg.system.assign("ORPLWDKKOOIEDVHILYZZRJCMNEBCOMKBABJCOFEIQBLXFGEVUELDUQYYFPIFPYWJFHWGNOVUSXKRWEKSFIJPYWSQUKAHIUGBFZLTNJNTZZMWDGHGNXDISXMSCCJWNTROJTEUTUZMVGTIQMIHRYGDLLCMLLULSVXPRRDPYOCDSWRZNAAXKSCZ");
    msg.range = 0.9138289996199159;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 184U;
    tmp_msg_0.entities.assign("MZWLQJDCVVNPYHRTUHSPWKQHEYUZISVUVSEZUKZWWC");
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
    msg.setTimeStamp(0.5108662891366673);
    msg.setSource(25726U);
    msg.setSourceEntity(29U);
    msg.setDestination(41850U);
    msg.setDestinationEntity(47U);
    msg.op = 86U;
    msg.system.assign("JBPEYCLVATXDMTUHCZNDTUEBSRUBJACCICDTIRMQHWIOIFWBGAGVSUDKDHKZPNJGVWMFRCQYPOYYIPNEYGVOGWWOTJEAFHZHQJGQXALQNWALHTIHZXJCWYAPJNDEJVZVLYTUYICNPQDUBHDOFPPXKXLVRSGPSRKMVEFKKAZSXBUVMQDRLAXAHLOSBOGTSZMBFIYFOMUGIZZLTXQQENSWJEWRRUCMMSGPBHXECXMSOOJUEKFVTNRLLFRFYK");
    msg.range = 0.5371460122827236;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 15692U;
    tmp_msg_0.lat = 0.6489314227318346;
    tmp_msg_0.lon = 0.1693755094670213;
    tmp_msg_0.z = 0.608355681981916;
    tmp_msg_0.z_units = 112U;
    tmp_msg_0.speed = 0.2967071534215622;
    tmp_msg_0.speed_units = 225U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.2138214906790551;
    tmp_tmp_msg_0_0.y = 0.3834650236803575;
    tmp_tmp_msg_0_0.z = 0.17323625490644967;
    tmp_tmp_msg_0_0.t = 0.7747386285846332;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UURWSMECYKBOQXJKIWWSQRZRMBBGWOOHLNTPPZBHDDSSMYTUZIVMIGXLCNFVADVTOQFJERHHTQLVOGEBXSCHZTMJDDRAHAPIRMSRLKLKPXYCRZJQNVTJOTNFSFKEWGZCPRTEWCYIUNJPBFBPEXZOJLPRXEMVNCGJEGMYVNLFKWTQBHJXCAKUUFYIKYDIVBODYCIKGOYELWVFULQUGNUMABAHNVN");
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
    msg.setTimeStamp(0.7315918971964033);
    msg.setSource(830U);
    msg.setSourceEntity(66U);
    msg.setDestination(32937U);
    msg.setDestinationEntity(142U);
    msg.op = 54U;
    msg.system.assign("MJYVEEBRVQLTKUYPCBXNLOOXXQSJTWWKKKTITLYALHUWVLGOMVSYMINSJESZPAZNMGTOYGZZMIGRURKSDMCKAWWVUHJEKCBDWX");
    msg.range = 0.6216228809080122;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("CGEOUSOAVOEZETDTXYXCYCLSWNPAPYIZWOWESODXRBMYHMUJRURMAMJJZLPZWZLFRBPKSVCYKXNJTYSFZNKIXBTHNOCOPOFLMDPSGIYLSBQNSFQHCQQWEDRGCXBWKDJUBVGDMBSLNUSEAAVTTFCMQBUNUZWYJJEGIRHQVFATVBFIVYFLHLUMHRLGNKGTHTZKRIUOVPXQDBNKQQPWIEXGGJPDRYEVAJHXIDRFPECIL");
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
    msg.setTimeStamp(0.9772760214145176);
    msg.setSource(17490U);
    msg.setSourceEntity(241U);
    msg.setDestination(9560U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.4762834354747213);
    msg.setSource(51020U);
    msg.setSourceEntity(205U);
    msg.setDestination(6418U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.12765849854529243);
    msg.setSource(23255U);
    msg.setSourceEntity(55U);
    msg.setDestination(13823U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.509241321554586);
    msg.setSource(58912U);
    msg.setSourceEntity(165U);
    msg.setDestination(21430U);
    msg.setDestinationEntity(224U);
    msg.list.assign("UNMZBQSFMFCSHQCOYIWSGPKJIGDWANEQBJOCSYZ");

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
    msg.setTimeStamp(0.6008088068550793);
    msg.setSource(40787U);
    msg.setSourceEntity(207U);
    msg.setDestination(13881U);
    msg.setDestinationEntity(185U);
    msg.list.assign("VDOPSFWBLMCNLGPUGXVPQUVQPTYWRYVIEPHKEAJTSRELTUODGOFRGLMUNMFHMIQCFDDAEDDCCMWAINMJZJKKCYWKNOZYLRBIISZAGULJEKJABVQSVUXOOSWMFYCYSLXTPZPZIGNDRHZQGOYTRTEUWQBTZPLNYEFIWALGHNLHAMVKWOUCSWSBRSKFKRHQTQJXIIOGBRHBIQVYDVEVPJTZXJKAQECGHHENZNWFXRUPDZBTAXDCBSMX");

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
    msg.setTimeStamp(0.9861470941222983);
    msg.setSource(45172U);
    msg.setSourceEntity(171U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(72U);
    msg.list.assign("LKZQASBUSVRWFPOQTJTSCTUZWKQVZQLXJYGRDFGBYZPXUWBXANWMXGDJFIESVFC");

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
    msg.setTimeStamp(0.0589244080290251);
    msg.setSource(43634U);
    msg.setSourceEntity(18U);
    msg.setDestination(4944U);
    msg.setDestinationEntity(152U);
    msg.value = 10193;

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
    msg.setTimeStamp(0.035267591956574806);
    msg.setSource(64408U);
    msg.setSourceEntity(86U);
    msg.setDestination(13997U);
    msg.setDestinationEntity(54U);
    msg.value = 23343;

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
    msg.setTimeStamp(0.17060316022524835);
    msg.setSource(23471U);
    msg.setSourceEntity(219U);
    msg.setDestination(31564U);
    msg.setDestinationEntity(189U);
    msg.value = 17244;

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
    msg.setTimeStamp(0.35385588241123866);
    msg.setSource(42380U);
    msg.setSourceEntity(50U);
    msg.setDestination(2108U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6986838535716614;

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
    msg.setTimeStamp(0.5690013853908972);
    msg.setSource(23656U);
    msg.setSourceEntity(136U);
    msg.setDestination(18208U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7782226920854755;

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
    msg.setTimeStamp(0.5205119845653);
    msg.setSource(56348U);
    msg.setSourceEntity(227U);
    msg.setDestination(35317U);
    msg.setDestinationEntity(181U);
    msg.value = 0.45554937674189344;

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
    msg.setTimeStamp(0.4784789565890947);
    msg.setSource(27781U);
    msg.setSourceEntity(133U);
    msg.setDestination(54734U);
    msg.setDestinationEntity(240U);
    msg.value = 0.17457993708135844;

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
    msg.setTimeStamp(0.477282683596426);
    msg.setSource(63224U);
    msg.setSourceEntity(16U);
    msg.setDestination(16578U);
    msg.setDestinationEntity(86U);
    msg.value = 0.5791832155646798;

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
    msg.setTimeStamp(0.6833320917238712);
    msg.setSource(31587U);
    msg.setSourceEntity(102U);
    msg.setDestination(28920U);
    msg.setDestinationEntity(233U);
    msg.value = 0.4052838819694635;

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
    msg.setTimeStamp(0.7843837761753223);
    msg.setSource(42779U);
    msg.setSourceEntity(180U);
    msg.setDestination(11254U);
    msg.setDestinationEntity(77U);
    msg.validity = 30534U;
    msg.type = 79U;
    msg.utc_year = 46653U;
    msg.utc_month = 8U;
    msg.utc_day = 18U;
    msg.utc_time = 0.750958378313873;
    msg.lat = 0.7886323864179472;
    msg.lon = 0.18024754210439287;
    msg.height = 0.9081577515991367;
    msg.satellites = 69U;
    msg.cog = 0.33711056924162763;
    msg.sog = 0.9415912085297744;
    msg.hdop = 0.21772753662530586;
    msg.vdop = 0.7140958250177301;
    msg.hacc = 0.8443040530885957;
    msg.vacc = 0.25846637283436613;

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
    msg.setTimeStamp(0.5490162655969099);
    msg.setSource(7992U);
    msg.setSourceEntity(58U);
    msg.setDestination(8592U);
    msg.setDestinationEntity(135U);
    msg.validity = 50770U;
    msg.type = 57U;
    msg.utc_year = 23616U;
    msg.utc_month = 130U;
    msg.utc_day = 195U;
    msg.utc_time = 0.2148218903093223;
    msg.lat = 0.03017681826562235;
    msg.lon = 0.48605525282502815;
    msg.height = 0.23149073465568237;
    msg.satellites = 117U;
    msg.cog = 0.3217791561329326;
    msg.sog = 0.1885509282119362;
    msg.hdop = 0.05660549415248051;
    msg.vdop = 0.0640699796055133;
    msg.hacc = 0.3210959328098799;
    msg.vacc = 0.8632131806754384;

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
    msg.setTimeStamp(0.14769530867795344);
    msg.setSource(45900U);
    msg.setSourceEntity(234U);
    msg.setDestination(46523U);
    msg.setDestinationEntity(162U);
    msg.validity = 15574U;
    msg.type = 41U;
    msg.utc_year = 23991U;
    msg.utc_month = 234U;
    msg.utc_day = 232U;
    msg.utc_time = 0.9690371955210514;
    msg.lat = 0.3317183708155107;
    msg.lon = 0.6734698250104033;
    msg.height = 0.4574094991861768;
    msg.satellites = 150U;
    msg.cog = 0.6227186258115252;
    msg.sog = 0.41449026846660286;
    msg.hdop = 0.05137785685181162;
    msg.vdop = 0.5939062455887735;
    msg.hacc = 0.6844093353334372;
    msg.vacc = 0.48987820145988714;

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
    msg.setTimeStamp(0.4138084704111832);
    msg.setSource(52108U);
    msg.setSourceEntity(15U);
    msg.setDestination(40465U);
    msg.setDestinationEntity(66U);
    msg.time = 0.5938320242249625;
    msg.phi = 0.5438471086975752;
    msg.theta = 0.9616386102149249;
    msg.psi = 0.9661708535734078;
    msg.psi_magnetic = 0.89439214519368;

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
    msg.setTimeStamp(0.7989125488461595);
    msg.setSource(21703U);
    msg.setSourceEntity(3U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(106U);
    msg.time = 0.9659988782326423;
    msg.phi = 0.5060661713065167;
    msg.theta = 0.25790766875665105;
    msg.psi = 0.3347916121671789;
    msg.psi_magnetic = 0.14018263850313228;

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
    msg.setTimeStamp(0.6238174669026708);
    msg.setSource(44290U);
    msg.setSourceEntity(52U);
    msg.setDestination(19897U);
    msg.setDestinationEntity(26U);
    msg.time = 0.9433081981437282;
    msg.phi = 0.9018695392552277;
    msg.theta = 0.9640527917618367;
    msg.psi = 0.22288220831043337;
    msg.psi_magnetic = 0.24044671258606687;

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
    msg.setTimeStamp(0.9236718778812042);
    msg.setSource(11003U);
    msg.setSourceEntity(195U);
    msg.setDestination(54031U);
    msg.setDestinationEntity(136U);
    msg.time = 0.9783711438713251;
    msg.x = 0.9982579641270319;
    msg.y = 0.1489755253458278;
    msg.z = 0.7892848114762068;
    msg.timestep = 0.7193694279344853;

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
    msg.setTimeStamp(0.8703768472335504);
    msg.setSource(4027U);
    msg.setSourceEntity(113U);
    msg.setDestination(25540U);
    msg.setDestinationEntity(138U);
    msg.time = 0.4095697034748481;
    msg.x = 0.2650551586789358;
    msg.y = 0.30420249678969646;
    msg.z = 0.5524904799960921;
    msg.timestep = 0.7780157589444483;

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
    msg.setTimeStamp(0.7459558953036977);
    msg.setSource(4930U);
    msg.setSourceEntity(52U);
    msg.setDestination(42026U);
    msg.setDestinationEntity(8U);
    msg.time = 0.302832925302413;
    msg.x = 0.5005528242235089;
    msg.y = 0.3347616431342165;
    msg.z = 0.5701309956323988;
    msg.timestep = 0.8249670873729082;

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
    msg.setTimeStamp(0.4520291531586136);
    msg.setSource(46726U);
    msg.setSourceEntity(38U);
    msg.setDestination(59644U);
    msg.setDestinationEntity(167U);
    msg.time = 0.301500736532169;
    msg.x = 0.24908276634292825;
    msg.y = 0.9436497752911969;
    msg.z = 0.6118825723006436;

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
    msg.setTimeStamp(0.9348895078937722);
    msg.setSource(41348U);
    msg.setSourceEntity(141U);
    msg.setDestination(25763U);
    msg.setDestinationEntity(135U);
    msg.time = 0.6416864582389925;
    msg.x = 0.18965584543903402;
    msg.y = 0.16124578973984516;
    msg.z = 0.33542844488080126;

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
    msg.setTimeStamp(0.6184801694749466);
    msg.setSource(41273U);
    msg.setSourceEntity(101U);
    msg.setDestination(31950U);
    msg.setDestinationEntity(12U);
    msg.time = 0.09329611096792811;
    msg.x = 0.7127577828970892;
    msg.y = 0.08473074812063763;
    msg.z = 0.7070663932167361;

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
    msg.setTimeStamp(0.5181016854627247);
    msg.setSource(45601U);
    msg.setSourceEntity(167U);
    msg.setDestination(6741U);
    msg.setDestinationEntity(82U);
    msg.time = 0.28293265583217575;
    msg.x = 0.9198414219496209;
    msg.y = 0.7591969935900003;
    msg.z = 0.2551579172703412;

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
    msg.setTimeStamp(0.20226699396953463);
    msg.setSource(64752U);
    msg.setSourceEntity(201U);
    msg.setDestination(64833U);
    msg.setDestinationEntity(99U);
    msg.time = 0.008224971233076972;
    msg.x = 0.903439712258925;
    msg.y = 0.04616720815040565;
    msg.z = 0.77595510490442;

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
    msg.setTimeStamp(0.17130535850403705);
    msg.setSource(31612U);
    msg.setSourceEntity(229U);
    msg.setDestination(23168U);
    msg.setDestinationEntity(76U);
    msg.time = 0.8953366139270702;
    msg.x = 0.12335030580469963;
    msg.y = 0.20451896179051743;
    msg.z = 0.6255053783003054;

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
    msg.setTimeStamp(0.5049605776488486);
    msg.setSource(1030U);
    msg.setSourceEntity(3U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(185U);
    msg.time = 0.3403895825708996;
    msg.x = 0.7559803694538229;
    msg.y = 0.5081220929479815;
    msg.z = 0.06860152408317155;

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
    msg.setTimeStamp(0.7898242094147333);
    msg.setSource(48616U);
    msg.setSourceEntity(87U);
    msg.setDestination(17954U);
    msg.setDestinationEntity(34U);
    msg.time = 0.4353770780776224;
    msg.x = 0.5874211559420173;
    msg.y = 0.812706392111251;
    msg.z = 0.10090149158027006;

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
    msg.setTimeStamp(0.388678244790851);
    msg.setSource(13886U);
    msg.setSourceEntity(32U);
    msg.setDestination(20803U);
    msg.setDestinationEntity(64U);
    msg.time = 0.9271707868224941;
    msg.x = 0.8801380361959602;
    msg.y = 0.16296734838122295;
    msg.z = 0.7960350203426632;

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
    msg.setTimeStamp(0.33117681325763537);
    msg.setSource(60757U);
    msg.setSourceEntity(99U);
    msg.setDestination(44709U);
    msg.setDestinationEntity(135U);
    msg.validity = 233U;
    msg.x = 0.07479011753907994;
    msg.y = 0.9194385388014281;
    msg.z = 0.07117095856019395;

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
    msg.setTimeStamp(0.40393314496140564);
    msg.setSource(10704U);
    msg.setSourceEntity(58U);
    msg.setDestination(6920U);
    msg.setDestinationEntity(194U);
    msg.validity = 228U;
    msg.x = 0.7358356236085128;
    msg.y = 0.8781206831243302;
    msg.z = 0.7923563597573818;

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
    msg.setTimeStamp(0.9139094881183486);
    msg.setSource(1588U);
    msg.setSourceEntity(101U);
    msg.setDestination(3206U);
    msg.setDestinationEntity(147U);
    msg.validity = 93U;
    msg.x = 0.7143587027274831;
    msg.y = 0.9168653817823568;
    msg.z = 0.08002530038782596;

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
    msg.setTimeStamp(0.8246975068745704);
    msg.setSource(7782U);
    msg.setSourceEntity(219U);
    msg.setDestination(42200U);
    msg.setDestinationEntity(143U);
    msg.validity = 218U;
    msg.x = 0.2599015091281469;
    msg.y = 0.022198468148122652;
    msg.z = 0.5923852054884344;

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
    msg.setTimeStamp(0.9916571113543936);
    msg.setSource(27445U);
    msg.setSourceEntity(202U);
    msg.setDestination(13329U);
    msg.setDestinationEntity(146U);
    msg.validity = 208U;
    msg.x = 0.28110740549599755;
    msg.y = 0.7646340554325673;
    msg.z = 0.2533655336588534;

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
    msg.setTimeStamp(0.7530879522897039);
    msg.setSource(28953U);
    msg.setSourceEntity(107U);
    msg.setDestination(4542U);
    msg.setDestinationEntity(25U);
    msg.validity = 97U;
    msg.x = 0.9387285446195861;
    msg.y = 0.503986648287254;
    msg.z = 0.14038794555985246;

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
    msg.setTimeStamp(0.11859518398750846);
    msg.setSource(20207U);
    msg.setSourceEntity(91U);
    msg.setDestination(30454U);
    msg.setDestinationEntity(154U);
    msg.time = 0.03338101257284454;
    msg.x = 0.23758123200907733;
    msg.y = 0.22355283727990916;
    msg.z = 0.5548691696776882;

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
    msg.setTimeStamp(0.9445199718884958);
    msg.setSource(47727U);
    msg.setSourceEntity(244U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(165U);
    msg.time = 0.9844435383797291;
    msg.x = 0.12831291040721515;
    msg.y = 0.5976354567892495;
    msg.z = 0.2924958457905277;

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
    msg.setTimeStamp(0.39858557652775717);
    msg.setSource(55609U);
    msg.setSourceEntity(85U);
    msg.setDestination(16943U);
    msg.setDestinationEntity(43U);
    msg.time = 0.9054615331691596;
    msg.x = 0.3805112035663889;
    msg.y = 0.03957437814252618;
    msg.z = 0.4660101685442115;

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
    msg.setTimeStamp(0.2678139683423961);
    msg.setSource(7936U);
    msg.setSourceEntity(170U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(176U);
    msg.validity = 109U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2682902470378059;
    tmp_msg_0.y = 0.6086825349964874;
    tmp_msg_0.z = 0.334821167175697;
    tmp_msg_0.phi = 0.59434064374439;
    tmp_msg_0.theta = 0.448734541511138;
    tmp_msg_0.psi = 0.07484151935561967;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.43403579427405614;

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
    msg.setTimeStamp(0.9801698647245348);
    msg.setSource(58873U);
    msg.setSourceEntity(155U);
    msg.setDestination(47822U);
    msg.setDestinationEntity(219U);
    msg.validity = 162U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9838705065121602;
    tmp_msg_0.y = 0.07453343355146613;
    tmp_msg_0.z = 0.9493388403892478;
    tmp_msg_0.phi = 0.5428128402794609;
    tmp_msg_0.theta = 0.6760982492841578;
    tmp_msg_0.psi = 0.97323952919146;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9112849982737969;
    tmp_msg_1.beam_height = 0.22920755641496393;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.008150847699958552;

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
    msg.setTimeStamp(0.451993069466209);
    msg.setSource(41189U);
    msg.setSourceEntity(81U);
    msg.setDestination(55072U);
    msg.setDestinationEntity(203U);
    msg.validity = 228U;
    msg.value = 0.8118702037468734;

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
    msg.setTimeStamp(0.04587434792374401);
    msg.setSource(12178U);
    msg.setSourceEntity(48U);
    msg.setDestination(22004U);
    msg.setDestinationEntity(250U);
    msg.value = 0.08186785786956219;

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
    msg.setTimeStamp(0.9417188393282209);
    msg.setSource(30018U);
    msg.setSourceEntity(1U);
    msg.setDestination(27721U);
    msg.setDestinationEntity(249U);
    msg.value = 0.7216907970335689;

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
    msg.setTimeStamp(0.16199883624443867);
    msg.setSource(59107U);
    msg.setSourceEntity(145U);
    msg.setDestination(39032U);
    msg.setDestinationEntity(167U);
    msg.value = 0.27850943749963475;

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
    msg.setTimeStamp(0.5094999049436171);
    msg.setSource(30787U);
    msg.setSourceEntity(98U);
    msg.setDestination(23295U);
    msg.setDestinationEntity(108U);
    msg.value = 0.3871943993280351;

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
    msg.setTimeStamp(0.3389847805424444);
    msg.setSource(39818U);
    msg.setSourceEntity(17U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(31U);
    msg.value = 0.5233042377597511;

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
    msg.setTimeStamp(0.4858386717309282);
    msg.setSource(57158U);
    msg.setSourceEntity(126U);
    msg.setDestination(61333U);
    msg.setDestinationEntity(203U);
    msg.value = 0.055062486289410684;

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
    msg.setTimeStamp(0.495199362085341);
    msg.setSource(46995U);
    msg.setSourceEntity(90U);
    msg.setDestination(136U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8633166938459527;

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
    msg.setTimeStamp(0.08296367214306744);
    msg.setSource(63534U);
    msg.setSourceEntity(139U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(201U);
    msg.value = 0.310896814715239;

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
    msg.setTimeStamp(0.30077767594840155);
    msg.setSource(54984U);
    msg.setSourceEntity(118U);
    msg.setDestination(27909U);
    msg.setDestinationEntity(123U);
    msg.value = 0.21977883670296916;

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
    msg.setTimeStamp(0.24557832201937135);
    msg.setSource(42868U);
    msg.setSourceEntity(121U);
    msg.setDestination(10789U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8957600807763146;

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
    msg.setTimeStamp(0.11747154327328957);
    msg.setSource(34976U);
    msg.setSourceEntity(39U);
    msg.setDestination(9818U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7238180304978917;

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
    msg.setTimeStamp(0.2678166326364687);
    msg.setSource(10882U);
    msg.setSourceEntity(51U);
    msg.setDestination(60875U);
    msg.setDestinationEntity(153U);
    msg.value = 0.12296845397906742;

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
    msg.setTimeStamp(0.03741321068564851);
    msg.setSource(65176U);
    msg.setSourceEntity(87U);
    msg.setDestination(13578U);
    msg.setDestinationEntity(232U);
    msg.value = 0.38677223172404496;

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
    msg.setTimeStamp(0.9267196993565953);
    msg.setSource(7238U);
    msg.setSourceEntity(63U);
    msg.setDestination(46513U);
    msg.setDestinationEntity(32U);
    msg.value = 0.5955494107339664;

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
    msg.setTimeStamp(0.2687400376289757);
    msg.setSource(28868U);
    msg.setSourceEntity(141U);
    msg.setDestination(58690U);
    msg.setDestinationEntity(242U);
    msg.value = 0.14870156278891722;

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
    msg.setTimeStamp(0.7716369137809457);
    msg.setSource(4044U);
    msg.setSourceEntity(85U);
    msg.setDestination(28750U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5732240399857885;

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
    msg.setTimeStamp(0.011150427926497342);
    msg.setSource(890U);
    msg.setSourceEntity(207U);
    msg.setDestination(50554U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5493364611782549;

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
    msg.setTimeStamp(0.4232374661970628);
    msg.setSource(63271U);
    msg.setSourceEntity(167U);
    msg.setDestination(28000U);
    msg.setDestinationEntity(122U);
    msg.value = 0.1364744698550846;

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
    msg.setTimeStamp(0.021697211639178926);
    msg.setSource(44319U);
    msg.setSourceEntity(82U);
    msg.setDestination(63712U);
    msg.setDestinationEntity(53U);
    msg.value = 0.292903009648822;

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
    msg.setTimeStamp(0.4649717201820721);
    msg.setSource(9352U);
    msg.setSourceEntity(29U);
    msg.setDestination(29104U);
    msg.setDestinationEntity(248U);
    msg.value = 0.23474156765425502;

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
    msg.setTimeStamp(0.2798711018695609);
    msg.setSource(43410U);
    msg.setSourceEntity(246U);
    msg.setDestination(61513U);
    msg.setDestinationEntity(230U);
    msg.value = 0.4045115768515737;

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
    msg.setTimeStamp(0.7009373915990912);
    msg.setSource(26641U);
    msg.setSourceEntity(164U);
    msg.setDestination(37061U);
    msg.setDestinationEntity(231U);
    msg.value = 0.14213255624245824;

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
    msg.setTimeStamp(0.8700086081935468);
    msg.setSource(53515U);
    msg.setSourceEntity(249U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5262842286815719;

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
    msg.setTimeStamp(0.21534696025339684);
    msg.setSource(7563U);
    msg.setSourceEntity(11U);
    msg.setDestination(37274U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6876600486054659;

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
    msg.setTimeStamp(0.22474361378275431);
    msg.setSource(57189U);
    msg.setSourceEntity(167U);
    msg.setDestination(47677U);
    msg.setDestinationEntity(92U);
    msg.direction = 0.4449735296607332;
    msg.speed = 0.8168203758438408;

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
    msg.setTimeStamp(0.5559887552423999);
    msg.setSource(58509U);
    msg.setSourceEntity(132U);
    msg.setDestination(43619U);
    msg.setDestinationEntity(61U);
    msg.direction = 0.5829345076876388;
    msg.speed = 0.10004467823069862;

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
    msg.setTimeStamp(0.2500838963267611);
    msg.setSource(18563U);
    msg.setSourceEntity(201U);
    msg.setDestination(65480U);
    msg.setDestinationEntity(236U);
    msg.direction = 0.9290871590440706;
    msg.speed = 0.8733527621445818;

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
    msg.setTimeStamp(0.4629314934057295);
    msg.setSource(24527U);
    msg.setSourceEntity(232U);
    msg.setDestination(18667U);
    msg.setDestinationEntity(203U);
    msg.value = 0.4744644742170856;

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
    msg.setTimeStamp(0.502617801905125);
    msg.setSource(54632U);
    msg.setSourceEntity(240U);
    msg.setDestination(26870U);
    msg.setDestinationEntity(110U);
    msg.value = 0.672569872657335;

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
    msg.setTimeStamp(0.9667948787523716);
    msg.setSource(11415U);
    msg.setSourceEntity(233U);
    msg.setDestination(5842U);
    msg.setDestinationEntity(156U);
    msg.value = 0.10724862185293194;

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
    msg.setTimeStamp(0.9647242470956666);
    msg.setSource(11065U);
    msg.setSourceEntity(46U);
    msg.setDestination(28042U);
    msg.setDestinationEntity(54U);
    msg.value.assign("AKAONGVBQJFWRGOKMKTDEMOXUNSPWOWAUOUQLQHZWPFVUMMMZTLDBGDID");

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
    msg.setTimeStamp(0.7096253952006412);
    msg.setSource(9232U);
    msg.setSourceEntity(184U);
    msg.setDestination(33685U);
    msg.setDestinationEntity(41U);
    msg.value.assign("VVGXFKJZYMLNIFEAQIRQTFBYRNQVOWMCAHPOTGLKWYAFXWGIUIERVCHNQXAMKSGHXROZALPDHDHZGPBZFMHVUDYUPSWBDJCZWTKZFCIFXXAFJHOZQHUEBVYQIGUNQHFQULGLODVCCNZSMJEOTJWJJCBXDBAPKRXLL");

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
    msg.setTimeStamp(0.46124902991266425);
    msg.setSource(2201U);
    msg.setSourceEntity(108U);
    msg.setDestination(19613U);
    msg.setDestinationEntity(41U);
    msg.value.assign("WOCJXSTLNRBSNDYCQORRHHKOWJRFWFEIAKJTTBX");

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
    msg.setTimeStamp(0.38142583342188685);
    msg.setSource(18418U);
    msg.setSourceEntity(150U);
    msg.setDestination(47456U);
    msg.setDestinationEntity(65U);
    const char tmp_msg_0[] = {-117, 102, 105, -39, -71, -23, 73, 44, 122, 105, -43, -114, 61, -70, 56, -41, 106, 3, 2, -20, 97, -124, -119, -114, 116, 64, 0, 73, 7, -127, -30, -25, -43, 79, -127, -103, 101, 104, 12, -89, 71, 70, 114, 61, 39, -48, 50, -58, -100, -97, 79, 84, -94, -46, -126, -54, 51, -32, 17, -95, -76, -88, 8, -20, -124, 12, -113, 17, -51, 73, 36, 84, -40, -3, -93, -118, 27, 21, 35, 61, 12, 91, -59, 15, -115, 101, -84, 122, 98, -13, 88, -54, 90, 19, 12, 84, 46, -64, -14, 19, 96, 55, -80, 53, 42, 28, 126, 38, 89, 4, -128, 20, -6, -46, -15, 61, -84, -23, -25, 6, -33, -97, -50, -89, -23, -107, 69, -70, 61, -8, -120, 61, 53, 125, -75, -127, -26, 0, 109, 69, -85, 122, -57, 52, -41, 82, 69, -1};
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
    msg.setTimeStamp(0.4640523221658408);
    msg.setSource(22324U);
    msg.setSourceEntity(252U);
    msg.setDestination(24624U);
    msg.setDestinationEntity(242U);
    const char tmp_msg_0[] = {-87, 104, -97, 21, 101, 8, 111, -105, -101, 13, -125, -47, 7, -78, -70, 27, 82, 114, 108, 31, 21, -41, -99, -97, -33, -28, 4, 48, -12, 126, -110, -15, 86, -78, -90, 18, 19, 16, -18, 32, -116, 41, 35, -25, -77, 38, -113, 81, -123, -109, 80, 92, 6, 11, -47, 15, 123, 77, 3, 44, -67, 64, 125, -124, 19, -84, 23, -43, 3, -54, -47, 27, -32, -89, 76, -104, 112, 32, 106, 123, -73, -86, 0, 78, -3, -21, 85, -55, -26, 44, 104, 14, 63, -14, 125, 22, 46, 44, 107, 58, -123, -105, 6, -57, 52, 1, 35, -100, -125, -68, -13, 90, 6, -88, -73, 66, -93, 84, 126, -42, -32, 38, 94, 29, -45, 109, 94, -43, 30, 22, -123, -85, 72, 87, -16, -83, 124, 11, -102, 38, -38, 102, 123, -96, 92, -87, -118, 77, 98, -87, -89, 105, 20, -43, 10, -77, 7, 106, -122, 100, -75, 16};
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
    msg.setTimeStamp(0.8581258629459435);
    msg.setSource(59467U);
    msg.setSourceEntity(126U);
    msg.setDestination(25880U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {-85, 125, -119, 2, 39, -81, 122, -108, -54, -62, 32, 51, 107, -89, -70, 69, 81, 68, 99, -19, 87, 37, -26, -45, 111, -57, -75, 106, -61, -14, -78, -112, -9, -69, 82, -64, -68, 38, 56, 80, -8, 120, -85, -106, 99, -51, -38, -41, -55, 18, -113, 122, 72, 40, -54, 45, -85, -25, -105, 69, 9, 124, -120, 94, 33, -69, -78, -100, -98, -46, 107, 118, 7, 118, -51, 116, 96, -78, -80, -102, 2, 87, -44, -27, 99, -64, 17, 99, 13, 86, -122, -52, 89, -48, -94, -3, -26, -60, 89, 57, 80, 96, -26, -46, -16, 54, 14, 59, 118, -87, 97, -66, -32, -76, -23, -107, -119, 12, -29, 120, -19, 45, 75, -54, 1, -34, 22, 18, -13, 92, 96, -21, 93, 54, 33, 87, 82, 64, -74, 14, 97, 107, 15, -39, 120, 74, 117, 23, 10, -2, 39, -66, 15, -24, 56, 63, 61, -124, -96, -3, -25, -54, -84, -101, -15, 45, -86, -79, -100, 111, 19, -3, -86, 87, -90, -126, -88, 7, -58, 45, 19, -107, 24, -93, 73, -68, 13, 53, 62, 74, 29, -59, -14, 106, -81, -78, 12, -73, 108, 126, 31, -90, 104, -17, 4, -76, 20, -27, 77, -104, 10, -56, -72, -100, 75, -3, 23, 62, 79, -40, 42, 45, -127, -31, 85, 101, 93, -95, 70, -118, -22, -26, 38, -127, -33, 45, -23, -29, -51, -88, -117, 69, 39, 58, 113};
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
    msg.setTimeStamp(0.2750447146946381);
    msg.setSource(41090U);
    msg.setSourceEntity(152U);
    msg.setDestination(42996U);
    msg.setDestinationEntity(234U);
    msg.frequency = 856440552U;
    msg.min_range = 37346U;
    msg.max_range = 58802U;

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
    msg.setTimeStamp(0.9411979485775308);
    msg.setSource(38761U);
    msg.setSourceEntity(84U);
    msg.setDestination(54089U);
    msg.setDestinationEntity(113U);
    msg.frequency = 3938941519U;
    msg.min_range = 56670U;
    msg.max_range = 22059U;

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
    msg.setTimeStamp(0.9603818129465488);
    msg.setSource(40073U);
    msg.setSourceEntity(65U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(157U);
    msg.frequency = 2341079239U;
    msg.min_range = 31149U;
    msg.max_range = 36680U;

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
    msg.setTimeStamp(0.5883165208031166);
    msg.setSource(45824U);
    msg.setSourceEntity(138U);
    msg.setDestination(20776U);
    msg.setDestinationEntity(20U);
    msg.type = 70U;
    msg.frequency = 2922296644U;
    msg.min_range = 48671U;
    msg.max_range = 45537U;
    msg.bits_per_point = 74U;
    msg.scale_factor = 0.6692000596710348;
    const char tmp_msg_0[] = {-10, 51, -94, 44, -10, 69, -55, -62, 55, -34, 3, 57, -111, -19, -86, -93, -39, 96, -93, -18, -104, -41, 107, 92, -81, -93, -89, 96, -29, -127, -75, -125, 31, 39, -65, -46, 42, 50, 98, 107, 35, -62, -40, -62, -45, 4, -59, 50, 8, 9, -32, 1, -69, -88, 110, 94, 59, -123, 17, 83, 102, 33, -66, 70, -117, -33, -100, 58, 82, -1, -36, -20, -93, 109, -28, 73, -109, -71, 8, -42, -114, -67, -47, -41, 126, 19, -67, 37, 123, 108, -90, -65, -23, -2, -75, 63, 22, 107, -126, 102, -120, -59, -107, 60, 73, -115, -22, -75, 105, -105, 118, -105, -79, 16, -37};
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
    msg.setTimeStamp(0.2980142839640786);
    msg.setSource(121U);
    msg.setSourceEntity(210U);
    msg.setDestination(63073U);
    msg.setDestinationEntity(93U);
    msg.type = 239U;
    msg.frequency = 3112260837U;
    msg.min_range = 32323U;
    msg.max_range = 2047U;
    msg.bits_per_point = 160U;
    msg.scale_factor = 0.6091565118694777;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6197578046898227;
    tmp_msg_0.beam_height = 0.7662876403147267;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {77, -25, -22, -86, 27, -122, -32, 121, 78, 112, 61, 0, -99, -19, 55, 1, 62, -113, -67, -88, 69, 112, 99, -35, 56, 21, 48, 37, -112, 20, 68, 113, -5, 57, -122, 92, -26, -15, -110, 115, 52, 38, -25, -33, -97, -42, 79, -67, 111, 12, 121, -37, -58, -56, -51, 24, -76, -60, 9, -75, 33, -49, -95, -87, -111, -98, 34, 81, 70, 88, 13, -16, 100, 53, 69, -119, 65, -9, -22, 49, 64, 118, -82, 15, -67, 96, 104, 119, 76, -13, 72, -8, 117, 23, 22, -112, 108, 100, -32, -63, 112, -57, 27, -58, -44, 11, 6, 55, 120, -30, 67, 24, -123, 12, 20, -39, 7, -65, 35, 0, -83, -93, -69, -67, -52, -106, -5, 78, -116, -115, 92, 45, 12, -70, -72, 90, -1, -87, -114, 46, 88, -41, -14, 15, 59, -75, 39, -61, 31, 120, -16, 56, -25, -87, -49, -55, -74, 105, 33, -118, -3, 66, 74, 7, 49, 54, 43, -118, -104, 50, -93, 76, 32, -11, -8, 108, -115, -60, 22, 74, -90, 95, -10};
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
    msg.setTimeStamp(0.8543498855878496);
    msg.setSource(15502U);
    msg.setSourceEntity(118U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(188U);
    msg.type = 65U;
    msg.frequency = 608357617U;
    msg.min_range = 17123U;
    msg.max_range = 35155U;
    msg.bits_per_point = 166U;
    msg.scale_factor = 0.08994641027712258;
    const char tmp_msg_0[] = {103, 118, 103, 42, 18, 110, 111, -57, 10, -125, 56, -46, 81, -67, 22, 10, 73, 21, 13, -95, 27, -107, 24, 10, -11, 98, -40, 47, 27, 10, 16, -81, -61, -18, -93, -61, 55, 26, -107, 8, -116, -4, 31, -47, -81, -87, -61, 2, 27, -87, -104, -62, -62, 25, 95, 90, 88, 81, 79, -49, -1, -25, 81, -22, 107, 52, 0, -110, -14, 43, 111, -14, 44, 54, 106, 19, -75, -49, -7, -70, -32, -36, -114, -78, 51, 115, -23, 26, -95, -60, 112, 107, -89, -14, 116, -85, 122, 80, -128, 118, -109, -93, 116, -72, -100, 45, -80, 22, -122, -22, 28, 63, -63, 57, -70, -62, 79, -118, 54, 122, 84, 92, -34, 63, -10, 40, -52, 34, 57, -26, 37, -19, -123, 10, -80, -31, -66, -91, 86, -78, -81, 35, -61, -10, -98, 125, 107, -86, 55, -38, -62, 9, 110, 28, -92, 3, -97, -58, -15, -65, -126, 121, 114, -112, 23, -74, 112, 94, 48, -74, 41, -79, 78, -74, 98, 54, -10, 118, -121, -103, -2, 89, -24, -2, -19, -125, 51, -70, -16, -78, -24, 80, 0, -43, 105, -37, -69, -101, -53, -78, 83, -3, 2, 103, 83, -95, 103, -83, -122, 109, -75, 81, 31, 125, 17, 87, -105, 121, -46, 115, -57, -77, -51, 69, -95, -23, -104, 80, 98, -54, -49, 117, -37, -31, 100, 40, 93, -116, 50, 6, -30, -31, -1, 74, -14, -16, 110, -81, 65, 53, 93, -51};
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
    msg.setTimeStamp(0.47497210405635426);
    msg.setSource(34194U);
    msg.setSourceEntity(181U);
    msg.setDestination(28549U);
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
    msg.setTimeStamp(0.508579017390475);
    msg.setSource(39719U);
    msg.setSourceEntity(181U);
    msg.setDestination(61447U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.14733616131974347);
    msg.setSource(33808U);
    msg.setSourceEntity(196U);
    msg.setDestination(55624U);
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
    msg.setTimeStamp(0.3279856460795877);
    msg.setSource(52407U);
    msg.setSourceEntity(232U);
    msg.setDestination(51822U);
    msg.setDestinationEntity(143U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.6720203488988179);
    msg.setSource(12315U);
    msg.setSourceEntity(66U);
    msg.setDestination(31741U);
    msg.setDestinationEntity(78U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.5117625971930002);
    msg.setSource(64053U);
    msg.setSourceEntity(97U);
    msg.setDestination(30217U);
    msg.setDestinationEntity(79U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.9730977817551728);
    msg.setSource(14841U);
    msg.setSourceEntity(102U);
    msg.setDestination(1522U);
    msg.setDestinationEntity(45U);
    msg.value = 0.08209399367480952;
    msg.confidence = 0.6486991813451352;
    msg.opmodes.assign("TFFZLRYQAMMEJICUHBVUWDAHVZOWKHXYGNHCRSUVAGSXWNDNBZGXHKRRLPYKLNCQWOYTVGMUEKEMWVHXNQKAWIETYGQQSRJHVUQEQMVCZCAMAIFWHLITLDIXFTBPTSLXUNZFSONOGXYJPZASQMDTIOFEDPKBBQIQFOLAKBYCEUFAGMBKMEOGEXHZIUJKVVYHABDXJRUUDCZFPPJRNLSLZZYVBYJDOFLSIDRPTWPKCRCCMSR");

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
    msg.setTimeStamp(0.5729657501540745);
    msg.setSource(41988U);
    msg.setSourceEntity(186U);
    msg.setDestination(34845U);
    msg.setDestinationEntity(134U);
    msg.value = 0.9766299330069457;
    msg.confidence = 0.10922154773345116;
    msg.opmodes.assign("HUAYNRBWGBWYMHTTZUIICVMRV");

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
    msg.setTimeStamp(0.20719920732834474);
    msg.setSource(54559U);
    msg.setSourceEntity(172U);
    msg.setDestination(17108U);
    msg.setDestinationEntity(145U);
    msg.value = 0.21781871600104086;
    msg.confidence = 0.6114479865525272;
    msg.opmodes.assign("FUPZPTVUEWPALTKHQSRTTMKMJQTQSEBEZLGCRXVNPNVLXZWNWLLVABZSPNMPHLKUVIEHJJIMFYNYFCUDRHIIRHWRDRINIBARSQRSSGDGUDGTAYMOKSZOVCDOZKAZOJNCFAQULFYHIFWYWYKXECUOGMHQBEWOTHBBNBLULZYIFEZYDKCFOQMXQILQDSRGWBIECVXPZRTPUGEVDOGQKNUAJTHTAXA");

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
    msg.setTimeStamp(0.9504319978532513);
    msg.setSource(14926U);
    msg.setSourceEntity(33U);
    msg.setDestination(30273U);
    msg.setDestinationEntity(87U);
    msg.itow = 2696971675U;
    msg.lat = 0.6748763208146932;
    msg.lon = 0.039983773787901855;
    msg.height_ell = 0.24661395563414878;
    msg.height_sea = 0.28546149783301966;
    msg.hacc = 0.691726383798285;
    msg.vacc = 0.10026752261896987;
    msg.vel_n = 0.802914127580653;
    msg.vel_e = 0.2855927657832099;
    msg.vel_d = 0.36471947397319215;
    msg.speed = 0.3056643755871131;
    msg.gspeed = 0.9513814824897592;
    msg.heading = 0.4191221434000575;
    msg.sacc = 0.4144969085101481;
    msg.cacc = 0.4438176208061757;

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
    msg.setTimeStamp(0.5304819274147071);
    msg.setSource(55674U);
    msg.setSourceEntity(167U);
    msg.setDestination(56604U);
    msg.setDestinationEntity(162U);
    msg.itow = 23581948U;
    msg.lat = 0.46556498577081806;
    msg.lon = 0.7850283230982825;
    msg.height_ell = 0.524889893486322;
    msg.height_sea = 0.6138351502763313;
    msg.hacc = 0.6786676313931715;
    msg.vacc = 0.1482297591577495;
    msg.vel_n = 0.35392518159047526;
    msg.vel_e = 0.8626681778332829;
    msg.vel_d = 0.3468585551593343;
    msg.speed = 0.23240913155905019;
    msg.gspeed = 0.2840715388825047;
    msg.heading = 0.02465073904775994;
    msg.sacc = 0.1590167199383805;
    msg.cacc = 0.32863390927538727;

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
    msg.setTimeStamp(0.5126226255501836);
    msg.setSource(12664U);
    msg.setSourceEntity(15U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(237U);
    msg.itow = 1407169766U;
    msg.lat = 0.08696166441731967;
    msg.lon = 0.2711747195928488;
    msg.height_ell = 0.9668715930009857;
    msg.height_sea = 0.8036124590345329;
    msg.hacc = 0.15996956421324948;
    msg.vacc = 0.13735845264576585;
    msg.vel_n = 0.8474805904157439;
    msg.vel_e = 0.17106052277487727;
    msg.vel_d = 0.665792162923692;
    msg.speed = 0.5960418380193362;
    msg.gspeed = 0.8878512008224538;
    msg.heading = 0.5317511745396021;
    msg.sacc = 0.20839049730642112;
    msg.cacc = 0.5596325334121163;

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
    msg.setTimeStamp(0.021125008579288673);
    msg.setSource(17414U);
    msg.setSourceEntity(62U);
    msg.setDestination(15370U);
    msg.setDestinationEntity(171U);
    msg.id = 158U;
    msg.value = 0.6384786750546317;

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
    msg.setTimeStamp(0.6437826096723249);
    msg.setSource(2180U);
    msg.setSourceEntity(1U);
    msg.setDestination(45315U);
    msg.setDestinationEntity(160U);
    msg.id = 93U;
    msg.value = 0.9608878929451825;

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
    msg.setTimeStamp(0.12336309784291022);
    msg.setSource(28459U);
    msg.setSourceEntity(150U);
    msg.setDestination(27688U);
    msg.setDestinationEntity(234U);
    msg.id = 228U;
    msg.value = 0.8434049499867958;

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
    msg.setTimeStamp(0.45441532519342454);
    msg.setSource(23056U);
    msg.setSourceEntity(204U);
    msg.setDestination(33433U);
    msg.setDestinationEntity(157U);
    msg.x = 0.3494890842938362;
    msg.y = 0.33320765179928646;
    msg.z = 0.04755474456251352;
    msg.phi = 0.4937286504105354;
    msg.theta = 0.8403128149054789;
    msg.psi = 0.5932883593635204;

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
    msg.setTimeStamp(0.27087552821831495);
    msg.setSource(23634U);
    msg.setSourceEntity(238U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(98U);
    msg.x = 0.4595918350660295;
    msg.y = 0.1619092853504578;
    msg.z = 0.5226832805668092;
    msg.phi = 0.5012082288979608;
    msg.theta = 0.7586261524887307;
    msg.psi = 0.3229129307688511;

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
    msg.setTimeStamp(0.005422670393144147);
    msg.setSource(35246U);
    msg.setSourceEntity(49U);
    msg.setDestination(56123U);
    msg.setDestinationEntity(242U);
    msg.x = 0.8392341493948113;
    msg.y = 0.45107377141275384;
    msg.z = 0.8407933313284855;
    msg.phi = 0.5384925897317336;
    msg.theta = 0.4000447771198118;
    msg.psi = 0.030790128796858718;

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
    msg.setTimeStamp(0.46225597738034774);
    msg.setSource(34764U);
    msg.setSourceEntity(168U);
    msg.setDestination(51472U);
    msg.setDestinationEntity(27U);
    msg.beam_width = 0.7839262614541677;
    msg.beam_height = 0.05492342339864198;

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
    msg.setTimeStamp(0.5293429669361364);
    msg.setSource(34563U);
    msg.setSourceEntity(96U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(106U);
    msg.beam_width = 0.896987368641161;
    msg.beam_height = 0.2883249220532621;

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
    msg.setTimeStamp(0.02404637075143856);
    msg.setSource(50480U);
    msg.setSourceEntity(90U);
    msg.setDestination(64805U);
    msg.setDestinationEntity(181U);
    msg.beam_width = 0.08951134162628605;
    msg.beam_height = 0.8202456071323964;

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
    msg.setTimeStamp(0.2869821744994282);
    msg.setSource(11773U);
    msg.setSourceEntity(115U);
    msg.setDestination(30605U);
    msg.setDestinationEntity(52U);
    msg.id = 181U;
    msg.zoom = 26U;
    msg.action = 163U;

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
    msg.setTimeStamp(0.8529669076677958);
    msg.setSource(26522U);
    msg.setSourceEntity(186U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(230U);
    msg.id = 10U;
    msg.zoom = 55U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.30557207436248846);
    msg.setSource(23406U);
    msg.setSourceEntity(121U);
    msg.setDestination(36326U);
    msg.setDestinationEntity(9U);
    msg.id = 68U;
    msg.zoom = 105U;
    msg.action = 28U;

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
    msg.setTimeStamp(0.20101572791885414);
    msg.setSource(6746U);
    msg.setSourceEntity(252U);
    msg.setDestination(12552U);
    msg.setDestinationEntity(172U);
    msg.id = 226U;
    msg.value = 0.1725797825487242;

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
    msg.setTimeStamp(0.3183929205354604);
    msg.setSource(56426U);
    msg.setSourceEntity(83U);
    msg.setDestination(35370U);
    msg.setDestinationEntity(241U);
    msg.id = 112U;
    msg.value = 0.9652154641119138;

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
    msg.setTimeStamp(0.7878756424147118);
    msg.setSource(48234U);
    msg.setSourceEntity(6U);
    msg.setDestination(55282U);
    msg.setDestinationEntity(27U);
    msg.id = 220U;
    msg.value = 0.11757178507488752;

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
    msg.setTimeStamp(0.5814910930017619);
    msg.setSource(49980U);
    msg.setSourceEntity(68U);
    msg.setDestination(7897U);
    msg.setDestinationEntity(19U);
    msg.id = 196U;
    msg.value = 0.11888905042639808;

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
    msg.setTimeStamp(0.3937047608340183);
    msg.setSource(29794U);
    msg.setSourceEntity(90U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(127U);
    msg.id = 49U;
    msg.value = 0.9156785746294862;

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
    msg.setTimeStamp(0.8523918965142708);
    msg.setSource(46087U);
    msg.setSourceEntity(133U);
    msg.setDestination(33121U);
    msg.setDestinationEntity(6U);
    msg.id = 244U;
    msg.value = 0.3360502357543579;

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
    msg.setTimeStamp(0.5686402734346511);
    msg.setSource(42441U);
    msg.setSourceEntity(192U);
    msg.setDestination(40108U);
    msg.setDestinationEntity(76U);
    msg.id = 155U;
    msg.angle = 0.7591359391153012;

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
    msg.setTimeStamp(0.06308749810215386);
    msg.setSource(36882U);
    msg.setSourceEntity(54U);
    msg.setDestination(19250U);
    msg.setDestinationEntity(215U);
    msg.id = 19U;
    msg.angle = 0.48198104357642224;

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
    msg.setTimeStamp(0.3983319943314274);
    msg.setSource(12726U);
    msg.setSourceEntity(84U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(18U);
    msg.id = 200U;
    msg.angle = 0.046244961426210596;

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
    msg.setTimeStamp(0.27127213861197885);
    msg.setSource(53758U);
    msg.setSourceEntity(159U);
    msg.setDestination(53863U);
    msg.setDestinationEntity(129U);
    msg.op = 79U;
    msg.actions.assign("PNRMDGXNTECLZRKTLKQEISEJIYKVFAETXMGBULPSGMTUHKBOIZZMCJSAVMXNAFPRRVAHYBJEZCKSREFGPCCHBVPMJUNUCSXOAWIUUNJLUNSRPKBYSKZWVYOEHZWOZFQJLAMGMPFRTWNFHNNVRGBBBDIXVNLCQAGCFUWWOYWIOQKQMQWYQDDTYHHSTSXCIDJVDITTUHWZBCDHAUHYRJZLAFLED");

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
    msg.setTimeStamp(0.6391295736331988);
    msg.setSource(58756U);
    msg.setSourceEntity(229U);
    msg.setDestination(5868U);
    msg.setDestinationEntity(68U);
    msg.op = 188U;
    msg.actions.assign("UHVTIQJDQXOGEPFSOOFDPWAPBTONEZGAISWHGVGINPCJCY");

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
    msg.setTimeStamp(0.38564489695700177);
    msg.setSource(63189U);
    msg.setSourceEntity(79U);
    msg.setDestination(57589U);
    msg.setDestinationEntity(133U);
    msg.op = 223U;
    msg.actions.assign("ATKNSHYIGENZZUODLSLWKEBGNTIFRHXXDHSADDJMYSSCLVGCQCTEDPQYYQEJIBSXVVJALGJMKNWFIPGGZNELJNVBRBPRMIZARVYOHOJFUBXEKNXVFDOPWDMRECZGGCFZ");

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
    msg.setTimeStamp(0.29562211417028283);
    msg.setSource(13016U);
    msg.setSourceEntity(13U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(183U);
    msg.actions.assign("XBAUPNJXXEBMOQYFWRXVHJDGIOCAUXFFOZYTKNTLDJEO");

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
    msg.setTimeStamp(0.8055509128871999);
    msg.setSource(28513U);
    msg.setSourceEntity(81U);
    msg.setDestination(56608U);
    msg.setDestinationEntity(9U);
    msg.actions.assign("VNYBLUQGKKYJDOEEGSPNJQLDHIUPXNAPRYBKSPAXZAMZDTVPSLQMPOVNSKDOZFRUOTQCSXWBDLIEZIQXQTCYTHROJJERUHGHBGHKFWICBJYNQVWTFCVZTMHIEFZIXBXFUJEAGWGXSCKMYGVNPRFHCZNWLCJIZ");

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
    msg.setTimeStamp(0.5148679097908635);
    msg.setSource(46482U);
    msg.setSourceEntity(137U);
    msg.setDestination(25521U);
    msg.setDestinationEntity(115U);
    msg.actions.assign("GWZNLERNXHGIXFSXCUURPBWOYTDPJSHBYBKVEOKDADJONCUCAFDSLCQVYBFKOBKFWRQTCVSNPHMNZF");

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
    msg.setTimeStamp(0.6820513624064898);
    msg.setSource(35115U);
    msg.setSourceEntity(1U);
    msg.setDestination(54390U);
    msg.setDestinationEntity(38U);
    msg.button = 163U;
    msg.value = 192U;

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
    msg.setTimeStamp(0.606899276699218);
    msg.setSource(33134U);
    msg.setSourceEntity(105U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(20U);
    msg.button = 34U;
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
    msg.setTimeStamp(0.2655739686850612);
    msg.setSource(7162U);
    msg.setSourceEntity(209U);
    msg.setDestination(22976U);
    msg.setDestinationEntity(136U);
    msg.button = 125U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.7922750846941891);
    msg.setSource(29530U);
    msg.setSourceEntity(152U);
    msg.setDestination(32992U);
    msg.setDestinationEntity(77U);
    msg.op = 103U;
    msg.text.assign("FBISAFELCPSHOWHEPGDDTVVMBZSSPKCVNJOXZGHMGQIGIZWMJEMVYLMZVNKCQCHGQQRBUXIUTSZWFMUBRJIXWZPEDUVOAPEKAQKGSIXVIHNEBAWJAOHTTLWTMUPXGCOSZDLKIIMK");

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
    msg.setTimeStamp(0.542221680750488);
    msg.setSource(56950U);
    msg.setSourceEntity(182U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(13U);
    msg.op = 22U;
    msg.text.assign("EATNKPGRGBCTQRWEZZXJKFBVOUQEOGNJBHWGMHSLWQSAXHFHEGXHZMBSXDPKKIMWXIRKCYWSLOUVAODBTPAFMDGLTBNMLIPTZVSRTJMONTVULVWIDNVNAFNPWMTRIUBHCSYZRAYCXFOFNCYZGWKCAIFAQHQBCEIXRTMMQFPYQEYRYEEVUHKPCDDJVYJRPPYUSSUKQAUOWHCBIJZELYWGS");

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
    msg.setTimeStamp(0.4803461290262768);
    msg.setSource(49209U);
    msg.setSourceEntity(254U);
    msg.setDestination(58893U);
    msg.setDestinationEntity(168U);
    msg.op = 33U;
    msg.text.assign("OFZTUIWLMNRJHORPMDXHLTSAXHPOWVSSFUASLRQLOYJEZPPNNI");

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
    msg.setTimeStamp(0.6894667242986947);
    msg.setSource(33990U);
    msg.setSourceEntity(68U);
    msg.setDestination(65108U);
    msg.setDestinationEntity(155U);
    msg.op = 94U;
    msg.time_remain = 0.31504454020617756;
    msg.sched_time = 0.8842672708822761;

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
    msg.setTimeStamp(0.01943808205161346);
    msg.setSource(18018U);
    msg.setSourceEntity(166U);
    msg.setDestination(56262U);
    msg.setDestinationEntity(88U);
    msg.op = 9U;
    msg.time_remain = 0.48460863552347944;
    msg.sched_time = 0.18276993494885563;

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
    msg.setTimeStamp(0.6867650774079058);
    msg.setSource(14017U);
    msg.setSourceEntity(229U);
    msg.setDestination(37918U);
    msg.setDestinationEntity(213U);
    msg.op = 98U;
    msg.time_remain = 0.734978509549484;
    msg.sched_time = 0.41945204440787986;

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
    msg.setTimeStamp(0.6918777249701134);
    msg.setSource(3359U);
    msg.setSourceEntity(229U);
    msg.setDestination(8217U);
    msg.setDestinationEntity(66U);
    msg.name.assign("GRKNSJRKNMQLRHJMOCWXSRLNQGVBEXPJUTJEZYATMALUZWAYBCEQIOUKKXAAXTWCPMNO");
    msg.op = 239U;
    msg.sched_time = 0.4080013907664255;

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
    msg.setTimeStamp(0.98139421268518);
    msg.setSource(48934U);
    msg.setSourceEntity(60U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(174U);
    msg.name.assign("MHXMKVHPVDEHSFUJIVLFAUBLIJMFBONQJSFQAFVGZFLEUCQTZ");
    msg.op = 218U;
    msg.sched_time = 0.416257871720885;

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
    msg.setTimeStamp(0.5560929401897762);
    msg.setSource(23623U);
    msg.setSourceEntity(203U);
    msg.setDestination(40854U);
    msg.setDestinationEntity(64U);
    msg.name.assign("CBYTWRBVMCLZCDBEVIKXJVQTEKJOGOLWHAFXOWDEPMZIEMANSYDPQFCCTWJGAXWCCGWBKRSPRPXUIYKWRZPJZKFJONJBLABOPOKTLTZTRQSHQHLWHFPIOPUZHFLCXUBGISSGBWEQGSOYXEVFYDLULNQKKSZGNDLVFRTNIRSESMDIYIXGMQIQGUJRGZUIHXVAYDEA");
    msg.op = 22U;
    msg.sched_time = 0.5958867085844897;

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
    msg.setTimeStamp(0.5208114775317328);
    msg.setSource(39730U);
    msg.setSourceEntity(60U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.17716205443266875);
    msg.setSource(25841U);
    msg.setSourceEntity(240U);
    msg.setDestination(17214U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.23958581118157896);
    msg.setSource(6876U);
    msg.setSourceEntity(173U);
    msg.setDestination(43669U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.3960547062782094);
    msg.setSource(146U);
    msg.setSourceEntity(203U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(128U);
    msg.name.assign("BYLWAVVFRSVFJWLOHYZWDHYOOZQZUABJIDXXXWRZPDCSNSGGBXB");
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
    msg.setTimeStamp(0.4252781822001891);
    msg.setSource(19284U);
    msg.setSourceEntity(193U);
    msg.setDestination(37820U);
    msg.setDestinationEntity(19U);
    msg.name.assign("JPCZMDQAMHSFTLRJQXFZUPUTEWRZAFOZLSKUVRIBBDEMJLEHIJTYESQCXPBPXCWKIDVPTNTWHXLFWKEVIAGSNLLWLKNJAZGOISRLZPFRIY");
    msg.state = 121U;

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
    msg.setTimeStamp(0.27433231250591983);
    msg.setSource(26119U);
    msg.setSourceEntity(32U);
    msg.setDestination(63661U);
    msg.setDestinationEntity(70U);
    msg.name.assign("XLGANKHFVXYGUBLQRPDINZRMWLMZVMLKSBKFRAUECUWZPZGKGDRQGEGTSKWITCPVAMCEQLSVBFTAPXGRKYFTWESAVLAYIFDIGIPMDASOMOVJIPXMBVKHSOQSYJQEZOWLHAWQDAWUZVGYLENFRGJMHETTQKUILJNJXUFOUXMFBXNPHSDWFJCASHDTRIVMYNWJBDYKWHHCUIHDOUXZSJYIECROOL");
    msg.state = 24U;

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
    msg.setTimeStamp(0.051700856577674315);
    msg.setSource(49244U);
    msg.setSourceEntity(28U);
    msg.setDestination(35112U);
    msg.setDestinationEntity(102U);
    msg.id = 83U;
    msg.op = 41U;

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
    msg.setTimeStamp(0.9673305454104598);
    msg.setSource(38961U);
    msg.setSourceEntity(23U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(144U);
    msg.id = 141U;
    msg.op = 136U;

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
    msg.setTimeStamp(0.9945954945597316);
    msg.setSource(50304U);
    msg.setSourceEntity(47U);
    msg.setDestination(9438U);
    msg.setDestinationEntity(23U);
    msg.id = 191U;
    msg.op = 239U;

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
    msg.setTimeStamp(0.5443536374406525);
    msg.setSource(13501U);
    msg.setSourceEntity(114U);
    msg.setDestination(22540U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.3476369160862912;
    msg.lon = 0.35949977219902185;
    msg.height = 0.8005051639147847;
    msg.x = 0.6774544223901636;
    msg.y = 0.16257111575504246;
    msg.z = 0.2891636119725157;
    msg.phi = 0.5114258931400361;
    msg.theta = 0.1727559307226657;
    msg.psi = 0.4947552310444956;
    msg.u = 0.7373234028123777;
    msg.v = 0.26325381275451387;
    msg.w = 0.23438631674874644;
    msg.vx = 0.88840006265936;
    msg.vy = 0.28411414925880174;
    msg.vz = 0.7245614069518628;
    msg.p = 0.8485467891039156;
    msg.q = 0.6334434701193826;
    msg.r = 0.2494052767144188;
    msg.depth = 0.11137905177208163;
    msg.alt = 0.7443596819806203;

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
    msg.setTimeStamp(0.4052690097483471);
    msg.setSource(7599U);
    msg.setSourceEntity(80U);
    msg.setDestination(17260U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.3462540291085514;
    msg.lon = 0.7841604739153669;
    msg.height = 0.7098538648804311;
    msg.x = 0.11581415541578521;
    msg.y = 0.19378885323202355;
    msg.z = 0.46490263190665637;
    msg.phi = 0.47936048852483537;
    msg.theta = 0.2838117374833471;
    msg.psi = 0.6611959510474774;
    msg.u = 0.08411957164544581;
    msg.v = 0.9948654841639626;
    msg.w = 0.8834828722161785;
    msg.vx = 0.45892331172560474;
    msg.vy = 0.059544962640014854;
    msg.vz = 0.32934698210513147;
    msg.p = 0.39892237902281635;
    msg.q = 0.4311274518493249;
    msg.r = 0.09035177657334992;
    msg.depth = 0.17959840796209015;
    msg.alt = 0.5704868151900985;

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
    msg.setTimeStamp(0.4015593488428303);
    msg.setSource(20469U);
    msg.setSourceEntity(82U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.5585422623223281;
    msg.lon = 0.8291073062293551;
    msg.height = 0.0676816722363549;
    msg.x = 0.05204851466438476;
    msg.y = 0.9507688420333397;
    msg.z = 0.7862287554594461;
    msg.phi = 0.8992189644174708;
    msg.theta = 0.7537705286435162;
    msg.psi = 0.2335163975874477;
    msg.u = 0.8492183826942661;
    msg.v = 0.3408336615729949;
    msg.w = 0.1546276759081242;
    msg.vx = 0.1805780789404151;
    msg.vy = 0.4019556344858496;
    msg.vz = 0.6125528452790635;
    msg.p = 0.21246234638337436;
    msg.q = 0.7740558314182803;
    msg.r = 0.10279055510443558;
    msg.depth = 0.5896017937262167;
    msg.alt = 0.40254261541598535;

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
    msg.setTimeStamp(0.7512784814019938);
    msg.setSource(64099U);
    msg.setSourceEntity(49U);
    msg.setDestination(42730U);
    msg.setDestinationEntity(228U);
    msg.x = 0.9179498255233675;
    msg.y = 0.900977744881637;
    msg.z = 0.053363918133974675;

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
    msg.setTimeStamp(0.9362050547042816);
    msg.setSource(24215U);
    msg.setSourceEntity(242U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(225U);
    msg.x = 0.8213859385727217;
    msg.y = 0.8826573939273881;
    msg.z = 0.7594194901869776;

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
    msg.setTimeStamp(0.8513118560397108);
    msg.setSource(23809U);
    msg.setSourceEntity(172U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(167U);
    msg.x = 0.18835102061927966;
    msg.y = 0.15265134747187759;
    msg.z = 0.9378267643270065;

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
    msg.setTimeStamp(0.06614013056468426);
    msg.setSource(46705U);
    msg.setSourceEntity(61U);
    msg.setDestination(10079U);
    msg.setDestinationEntity(142U);
    msg.value = 0.1851255011613534;

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
    msg.setTimeStamp(0.09069431899175917);
    msg.setSource(38702U);
    msg.setSourceEntity(148U);
    msg.setDestination(10566U);
    msg.setDestinationEntity(133U);
    msg.value = 0.20695666136329804;

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
    msg.setTimeStamp(0.07048584997659724);
    msg.setSource(16576U);
    msg.setSourceEntity(53U);
    msg.setDestination(14560U);
    msg.setDestinationEntity(118U);
    msg.value = 0.31998868821450854;

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
    msg.setTimeStamp(0.7822203129803054);
    msg.setSource(35040U);
    msg.setSourceEntity(213U);
    msg.setDestination(55434U);
    msg.setDestinationEntity(171U);
    msg.value = 0.6802428751661689;

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
    msg.setTimeStamp(0.6954544857116354);
    msg.setSource(28256U);
    msg.setSourceEntity(221U);
    msg.setDestination(3456U);
    msg.setDestinationEntity(78U);
    msg.value = 0.29964485029381316;

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
    msg.setTimeStamp(0.5032350656693687);
    msg.setSource(53235U);
    msg.setSourceEntity(18U);
    msg.setDestination(24965U);
    msg.setDestinationEntity(160U);
    msg.value = 0.15429613608873272;

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
    msg.setTimeStamp(0.3000533684473907);
    msg.setSource(36467U);
    msg.setSourceEntity(243U);
    msg.setDestination(33104U);
    msg.setDestinationEntity(98U);
    msg.x = 0.6601375725975599;
    msg.y = 0.43421095459155523;
    msg.z = 0.7462502342229353;
    msg.phi = 0.2452110993226;
    msg.theta = 0.6066403177854826;
    msg.psi = 0.2557814829788747;
    msg.p = 0.9614892730796889;
    msg.q = 0.29112503549454816;
    msg.r = 0.49807461083998816;
    msg.u = 0.10517403123669644;
    msg.v = 0.8475729650636363;
    msg.w = 0.3541853435144182;
    msg.bias_psi = 0.15680949218512952;
    msg.bias_r = 0.5974423448732222;

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
    msg.setTimeStamp(0.2659452562189465);
    msg.setSource(13553U);
    msg.setSourceEntity(165U);
    msg.setDestination(57734U);
    msg.setDestinationEntity(69U);
    msg.x = 0.31735976122265075;
    msg.y = 0.9262353321797979;
    msg.z = 0.7057542997780868;
    msg.phi = 0.9551577315455063;
    msg.theta = 0.1462471586256956;
    msg.psi = 0.733120157485249;
    msg.p = 0.202888564839957;
    msg.q = 0.6114820779882584;
    msg.r = 0.051962415595045885;
    msg.u = 0.1797822393256696;
    msg.v = 0.6695074411477308;
    msg.w = 0.3836303502566353;
    msg.bias_psi = 0.6298732165792583;
    msg.bias_r = 0.04694085507159951;

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
    msg.setTimeStamp(0.28809453561842513);
    msg.setSource(28322U);
    msg.setSourceEntity(103U);
    msg.setDestination(32231U);
    msg.setDestinationEntity(243U);
    msg.x = 0.143067613967082;
    msg.y = 0.442092894562941;
    msg.z = 0.7574659062308737;
    msg.phi = 0.7219023501337096;
    msg.theta = 0.1273106845387616;
    msg.psi = 0.6017164183291447;
    msg.p = 0.6180918094544114;
    msg.q = 0.35248009417779547;
    msg.r = 0.43306528974503056;
    msg.u = 0.8019276744865965;
    msg.v = 0.7108700140124323;
    msg.w = 0.7741457236150747;
    msg.bias_psi = 0.41318778996426264;
    msg.bias_r = 0.6504648990461191;

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
    msg.setTimeStamp(0.4762604130493949);
    msg.setSource(4422U);
    msg.setSourceEntity(36U);
    msg.setDestination(3557U);
    msg.setDestinationEntity(136U);
    msg.bias_psi = 0.24165799390427367;
    msg.bias_r = 0.6612967997646448;
    msg.cog = 0.2793583228236385;
    msg.cyaw = 0.43777460640353283;
    msg.lbl_rej_level = 0.7026040626396662;
    msg.gps_rej_level = 0.16585940716578063;
    msg.custom_x = 0.2777873978318389;
    msg.custom_y = 0.16931024467433198;
    msg.custom_z = 0.6552248524347085;

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
    msg.setTimeStamp(0.8401568075933792);
    msg.setSource(32382U);
    msg.setSourceEntity(170U);
    msg.setDestination(32566U);
    msg.setDestinationEntity(100U);
    msg.bias_psi = 0.002472619073054072;
    msg.bias_r = 0.8627958919743712;
    msg.cog = 0.11412080403525282;
    msg.cyaw = 0.6833259799814956;
    msg.lbl_rej_level = 0.02146649655660493;
    msg.gps_rej_level = 0.014633930615121749;
    msg.custom_x = 0.29810236711208793;
    msg.custom_y = 0.7122457434437341;
    msg.custom_z = 0.6825525678386455;

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
    msg.setTimeStamp(0.33214395439889033);
    msg.setSource(12918U);
    msg.setSourceEntity(225U);
    msg.setDestination(23156U);
    msg.setDestinationEntity(39U);
    msg.bias_psi = 0.3474004012557179;
    msg.bias_r = 0.4721941856576336;
    msg.cog = 0.17609182879591667;
    msg.cyaw = 0.7789065525765656;
    msg.lbl_rej_level = 0.34654392848451343;
    msg.gps_rej_level = 0.9843506206853703;
    msg.custom_x = 0.1597842126812521;
    msg.custom_y = 0.8062432483256339;
    msg.custom_z = 0.9234320120842551;

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
    msg.setTimeStamp(0.22669463246643295);
    msg.setSource(31066U);
    msg.setSourceEntity(63U);
    msg.setDestination(617U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.5362311491443489;
    msg.reason = 8U;

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
    msg.setTimeStamp(0.22135314608483914);
    msg.setSource(60551U);
    msg.setSourceEntity(190U);
    msg.setDestination(14215U);
    msg.setDestinationEntity(104U);
    msg.utc_time = 0.9599216510543925;
    msg.reason = 37U;

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
    msg.setTimeStamp(0.19535864423393723);
    msg.setSource(3609U);
    msg.setSourceEntity(35U);
    msg.setDestination(16743U);
    msg.setDestinationEntity(69U);
    msg.utc_time = 0.8787769597364284;
    msg.reason = 228U;

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
    msg.setTimeStamp(0.11310425065262741);
    msg.setSource(17402U);
    msg.setSourceEntity(141U);
    msg.setDestination(619U);
    msg.setDestinationEntity(196U);
    msg.id = 90U;
    msg.range = 0.7615482351627016;
    msg.acceptance = 22U;

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
    msg.setTimeStamp(0.168528926591462);
    msg.setSource(64761U);
    msg.setSourceEntity(71U);
    msg.setDestination(29238U);
    msg.setDestinationEntity(42U);
    msg.id = 209U;
    msg.range = 0.46635917665738236;
    msg.acceptance = 52U;

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
    msg.setTimeStamp(0.9705250867912711);
    msg.setSource(4064U);
    msg.setSourceEntity(111U);
    msg.setDestination(25787U);
    msg.setDestinationEntity(111U);
    msg.id = 60U;
    msg.range = 0.4753119152859371;
    msg.acceptance = 172U;

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
    msg.setTimeStamp(0.6504259320019083);
    msg.setSource(61778U);
    msg.setSourceEntity(96U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(192U);
    msg.type = 126U;
    msg.reason = 168U;
    msg.value = 0.3355353731454792;
    msg.timestep = 0.2502596301409765;

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
    msg.setTimeStamp(0.7528369229549922);
    msg.setSource(65195U);
    msg.setSourceEntity(108U);
    msg.setDestination(20042U);
    msg.setDestinationEntity(207U);
    msg.type = 214U;
    msg.reason = 214U;
    msg.value = 0.3965261662740154;
    msg.timestep = 0.3731290777260453;

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
    msg.setTimeStamp(0.056009092281838146);
    msg.setSource(484U);
    msg.setSourceEntity(90U);
    msg.setDestination(38159U);
    msg.setDestinationEntity(233U);
    msg.type = 34U;
    msg.reason = 37U;
    msg.value = 0.5215759736947672;
    msg.timestep = 0.7401281366743856;

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
    msg.setTimeStamp(0.6790807563853721);
    msg.setSource(51229U);
    msg.setSourceEntity(66U);
    msg.setDestination(8693U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.4747096270830997);
    msg.setSource(55320U);
    msg.setSourceEntity(92U);
    msg.setDestination(45448U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.6295809578066411);
    msg.setSource(21634U);
    msg.setSourceEntity(125U);
    msg.setDestination(58823U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.054540535522956235);
    msg.setSource(34759U);
    msg.setSourceEntity(155U);
    msg.setDestination(47406U);
    msg.setDestinationEntity(175U);
    msg.beacon.assign("YYAPHZRFSYCRDEASGBLCBNOAONQUESKVOCGCZKUSMGKKKIKDFWVOIDSHJPOIAWODVWGGDXYRAZFEFWNZTXHFEJTNUCXGJJSQBTJXNWVHTLRDICKIIJVTXBYEDSSIVGJJDLRKWNMZMTJPMATYVULOCZYQCLVFHYLZHFTMWWQEBFRMTLMPEXXQGVUFCIIYUEQOLCU");
    msg.x = 0.24929036096371182;
    msg.y = 0.060425697042519655;
    msg.depth = 0.9913969620858326;
    msg.var_x = 0.4689023246869569;
    msg.var_y = 0.18615510719351447;

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
    msg.setTimeStamp(0.3159348025756953);
    msg.setSource(50414U);
    msg.setSourceEntity(29U);
    msg.setDestination(49090U);
    msg.setDestinationEntity(31U);
    msg.beacon.assign("ICWNTMVTIRSDUDLQZPEMBOBEPHJILMRPDWZMVAQQLQWYEWCGIUNKGURLZUAUGYJPUAVSTICONDBDXOOAKXHOHEVCFZDGAWJUVRRXRXSNCJBLZLHVQWUJKUXCSBXYFAJFRLFBYFTGNKZMJHCNYIXDWWSSMFMTOCAPTYOVHAOFVHEKFQEZIHFYBTXBDDKNYEPENLGPRKITJJISQXXTSHPCPJMVELMWZY");
    msg.x = 0.9562107362327428;
    msg.y = 0.17110637798583717;
    msg.depth = 0.4655862445446082;
    msg.var_x = 0.5564052395939253;
    msg.var_y = 0.6554487047608133;

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
    msg.setTimeStamp(0.9184260902173463);
    msg.setSource(22386U);
    msg.setSourceEntity(52U);
    msg.setDestination(46320U);
    msg.setDestinationEntity(119U);
    msg.beacon.assign("NLTFPMJBORWUJXNQGEXXFOTEFUDWMAHMSRAVFFGWKBVTZR");
    msg.x = 0.6497447100652277;
    msg.y = 0.9905952448690896;
    msg.depth = 0.48674601756976554;
    msg.var_x = 0.4086388340895778;
    msg.var_y = 0.4185832473602644;

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
    msg.setTimeStamp(0.3340843039035739);
    msg.setSource(28751U);
    msg.setSourceEntity(197U);
    msg.setDestination(59041U);
    msg.setDestinationEntity(34U);
    msg.value = 0.20863768198778398;

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
    msg.setTimeStamp(0.41550906747494376);
    msg.setSource(5745U);
    msg.setSourceEntity(4U);
    msg.setDestination(16176U);
    msg.setDestinationEntity(145U);
    msg.value = 0.7066432338677364;

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
    msg.setTimeStamp(0.6338547903528944);
    msg.setSource(22263U);
    msg.setSourceEntity(146U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(149U);
    msg.value = 0.46499124055618546;

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
    msg.setTimeStamp(0.847662616942599);
    msg.setSource(40214U);
    msg.setSourceEntity(200U);
    msg.setDestination(2861U);
    msg.setDestinationEntity(244U);
    msg.value = 0.18252193820945561;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.9604496755099038);
    msg.setSource(41076U);
    msg.setSourceEntity(138U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(125U);
    msg.value = 0.600454512070247;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.2948340730759701);
    msg.setSource(6483U);
    msg.setSourceEntity(34U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(194U);
    msg.value = 0.2656759885441837;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.5408748722945173);
    msg.setSource(62637U);
    msg.setSourceEntity(37U);
    msg.setDestination(25223U);
    msg.setDestinationEntity(119U);
    msg.value = 0.19073872166010686;
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
    msg.setTimeStamp(0.7585432192370297);
    msg.setSource(54651U);
    msg.setSourceEntity(87U);
    msg.setDestination(48459U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5924278763473723;
    msg.speed_units = 111U;

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
    msg.setTimeStamp(0.7905310408066074);
    msg.setSource(43003U);
    msg.setSourceEntity(79U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(45U);
    msg.value = 0.5352174668555271;
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
    msg.setTimeStamp(0.4568311171950121);
    msg.setSource(65460U);
    msg.setSourceEntity(188U);
    msg.setDestination(12526U);
    msg.setDestinationEntity(226U);
    msg.value = 0.16613052743780632;

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
    msg.setTimeStamp(0.2883394629806062);
    msg.setSource(4183U);
    msg.setSourceEntity(33U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(218U);
    msg.value = 0.3419915763579765;

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
    msg.setTimeStamp(0.3556823866522163);
    msg.setSource(5858U);
    msg.setSourceEntity(220U);
    msg.setDestination(29242U);
    msg.setDestinationEntity(62U);
    msg.value = 0.5378112875589337;

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
    msg.setTimeStamp(0.35585170139229116);
    msg.setSource(64066U);
    msg.setSourceEntity(251U);
    msg.setDestination(7707U);
    msg.setDestinationEntity(16U);
    msg.value = 0.17524003455948634;

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
    msg.setTimeStamp(0.003993662757267646);
    msg.setSource(2922U);
    msg.setSourceEntity(156U);
    msg.setDestination(37672U);
    msg.setDestinationEntity(46U);
    msg.value = 0.04535239793647916;

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
    msg.setTimeStamp(0.222961805427208);
    msg.setSource(22222U);
    msg.setSourceEntity(220U);
    msg.setDestination(1860U);
    msg.setDestinationEntity(16U);
    msg.value = 0.16991620229221494;

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
    msg.setTimeStamp(0.9677733385428535);
    msg.setSource(52833U);
    msg.setSourceEntity(160U);
    msg.setDestination(58287U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9996169090417917;

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
    msg.setTimeStamp(0.2565267019346059);
    msg.setSource(16676U);
    msg.setSourceEntity(225U);
    msg.setDestination(5988U);
    msg.setDestinationEntity(212U);
    msg.value = 0.0932150577803953;

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
    msg.setTimeStamp(0.6017838775627763);
    msg.setSource(11471U);
    msg.setSourceEntity(111U);
    msg.setDestination(52913U);
    msg.setDestinationEntity(6U);
    msg.value = 0.8986754888106386;

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
    msg.setTimeStamp(0.12499031805142669);
    msg.setSource(11192U);
    msg.setSourceEntity(193U);
    msg.setDestination(3080U);
    msg.setDestinationEntity(90U);
    msg.start_lat = 0.33321006033288136;
    msg.start_lon = 0.79447249371774;
    msg.start_z = 0.9780194058649451;
    msg.start_z_units = 137U;
    msg.end_lat = 0.10684846127256109;
    msg.end_lon = 0.6831282610532103;
    msg.end_z = 0.4404136099883831;
    msg.end_z_units = 223U;
    msg.speed = 0.26305621230589704;
    msg.speed_units = 218U;
    msg.lradius = 0.6343140255825322;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.6849270094561789);
    msg.setSource(35780U);
    msg.setSourceEntity(182U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(149U);
    msg.start_lat = 0.40053000630467306;
    msg.start_lon = 0.2302444593902232;
    msg.start_z = 0.5670796720293022;
    msg.start_z_units = 37U;
    msg.end_lat = 0.34213309007647474;
    msg.end_lon = 0.7928027456250155;
    msg.end_z = 0.3281135109804222;
    msg.end_z_units = 117U;
    msg.speed = 0.9521583863955173;
    msg.speed_units = 198U;
    msg.lradius = 0.09360389548145376;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.01021770590659199);
    msg.setSource(25473U);
    msg.setSourceEntity(192U);
    msg.setDestination(12929U);
    msg.setDestinationEntity(244U);
    msg.start_lat = 0.8541586071958366;
    msg.start_lon = 0.5136231603520561;
    msg.start_z = 0.34473728224279754;
    msg.start_z_units = 182U;
    msg.end_lat = 0.4644099712215236;
    msg.end_lon = 0.041924140839981194;
    msg.end_z = 0.34743634761705444;
    msg.end_z_units = 230U;
    msg.speed = 0.5453800050652571;
    msg.speed_units = 68U;
    msg.lradius = 0.6938609194121733;
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
    msg.setTimeStamp(0.22153310690255723);
    msg.setSource(19863U);
    msg.setSourceEntity(131U);
    msg.setDestination(53364U);
    msg.setDestinationEntity(90U);
    msg.x = 0.3208583284315666;
    msg.y = 0.9057300318081583;
    msg.z = 0.12144568262527455;
    msg.k = 0.09576931017016788;
    msg.m = 0.9151631355504701;
    msg.n = 0.6818997473746392;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.9076540452068073);
    msg.setSource(28031U);
    msg.setSourceEntity(102U);
    msg.setDestination(63805U);
    msg.setDestinationEntity(8U);
    msg.x = 0.42845264553967155;
    msg.y = 0.8781831123292394;
    msg.z = 0.5664725149647476;
    msg.k = 0.6925023754691054;
    msg.m = 0.4731735174699533;
    msg.n = 0.8690728131208751;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.5745578777982595);
    msg.setSource(8193U);
    msg.setSourceEntity(199U);
    msg.setDestination(1286U);
    msg.setDestinationEntity(241U);
    msg.x = 0.682466314574836;
    msg.y = 0.09165850490409388;
    msg.z = 0.5899714229995262;
    msg.k = 0.5420856226755119;
    msg.m = 0.3824708592242012;
    msg.n = 0.10574422135079253;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.6209209415935153);
    msg.setSource(30034U);
    msg.setSourceEntity(143U);
    msg.setDestination(61509U);
    msg.setDestinationEntity(113U);
    msg.value = 0.3713602356889958;

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
    msg.setTimeStamp(0.22202313017236597);
    msg.setSource(373U);
    msg.setSourceEntity(123U);
    msg.setDestination(35922U);
    msg.setDestinationEntity(158U);
    msg.value = 0.32281025271485697;

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
    msg.setTimeStamp(0.0817615171284306);
    msg.setSource(20232U);
    msg.setSourceEntity(93U);
    msg.setDestination(7327U);
    msg.setDestinationEntity(173U);
    msg.value = 0.9303788827104825;

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
    msg.setTimeStamp(0.5239569215470821);
    msg.setSource(45683U);
    msg.setSourceEntity(54U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(43U);
    msg.u = 0.9372912012027176;
    msg.v = 0.7954146607786913;
    msg.w = 0.20909629709252453;
    msg.p = 0.9996203763096205;
    msg.q = 0.5033523159134076;
    msg.r = 0.7699606410253073;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.03607079115838607);
    msg.setSource(5129U);
    msg.setSourceEntity(70U);
    msg.setDestination(38874U);
    msg.setDestinationEntity(179U);
    msg.u = 0.4707224767936249;
    msg.v = 0.9810226248504095;
    msg.w = 0.7573038763542029;
    msg.p = 0.44012215969660207;
    msg.q = 0.7687134101516419;
    msg.r = 0.8246405827599707;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.5847546150158184);
    msg.setSource(10945U);
    msg.setSourceEntity(118U);
    msg.setDestination(44258U);
    msg.setDestinationEntity(118U);
    msg.u = 0.13916130216821798;
    msg.v = 0.18256985980578933;
    msg.w = 0.0586625351271447;
    msg.p = 0.001013884653796704;
    msg.q = 0.3143497350217833;
    msg.r = 0.20381573272170295;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.8108170365905334);
    msg.setSource(12172U);
    msg.setSourceEntity(95U);
    msg.setDestination(59300U);
    msg.setDestinationEntity(176U);
    msg.start_lat = 0.19001984142009865;
    msg.start_lon = 0.15803110126588726;
    msg.start_z = 0.9731521033767669;
    msg.start_z_units = 253U;
    msg.end_lat = 0.9610390102280468;
    msg.end_lon = 0.669576855284298;
    msg.end_z = 0.8678670667632398;
    msg.end_z_units = 186U;
    msg.lradius = 0.39789084476742553;
    msg.flags = 179U;
    msg.x = 0.9634260481436028;
    msg.y = 0.12592053409068238;
    msg.z = 0.39594546891458926;
    msg.vx = 0.6792281483459057;
    msg.vy = 0.9640351477064096;
    msg.vz = 0.9585573036912142;
    msg.course_error = 0.4820009731850968;
    msg.eta = 40783U;

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
    msg.setTimeStamp(0.6303210768626365);
    msg.setSource(38695U);
    msg.setSourceEntity(173U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(53U);
    msg.start_lat = 0.8660645429490418;
    msg.start_lon = 0.08004157140523394;
    msg.start_z = 0.08456652647576068;
    msg.start_z_units = 215U;
    msg.end_lat = 0.7618531513088695;
    msg.end_lon = 0.8125914001234177;
    msg.end_z = 0.1270605438551069;
    msg.end_z_units = 74U;
    msg.lradius = 0.8906506230916656;
    msg.flags = 83U;
    msg.x = 0.6437610863679942;
    msg.y = 0.9978952181919234;
    msg.z = 0.5601472281335451;
    msg.vx = 0.12827004120240282;
    msg.vy = 0.7377768012479148;
    msg.vz = 0.719347171435676;
    msg.course_error = 0.4485356174062205;
    msg.eta = 58271U;

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
    msg.setTimeStamp(0.17344180828686961);
    msg.setSource(52533U);
    msg.setSourceEntity(249U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(16U);
    msg.start_lat = 0.2428119323039496;
    msg.start_lon = 0.2562924763100112;
    msg.start_z = 0.316687122862801;
    msg.start_z_units = 186U;
    msg.end_lat = 0.45805458355636;
    msg.end_lon = 0.27425063407253947;
    msg.end_z = 0.34013194187539286;
    msg.end_z_units = 76U;
    msg.lradius = 0.9600308103201153;
    msg.flags = 5U;
    msg.x = 0.27129231634925555;
    msg.y = 0.5926828702854683;
    msg.z = 0.12253547922154229;
    msg.vx = 0.977651121304051;
    msg.vy = 0.2528296748529505;
    msg.vz = 0.4196861609075896;
    msg.course_error = 0.34000566346880134;
    msg.eta = 57621U;

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
    msg.setTimeStamp(0.130489207515046);
    msg.setSource(47330U);
    msg.setSourceEntity(175U);
    msg.setDestination(24527U);
    msg.setDestinationEntity(132U);
    msg.k = 0.44214300142369933;
    msg.m = 0.7924937367873733;
    msg.n = 0.5780309617509348;

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
    msg.setTimeStamp(0.9177315211568057);
    msg.setSource(32235U);
    msg.setSourceEntity(183U);
    msg.setDestination(41350U);
    msg.setDestinationEntity(19U);
    msg.k = 0.1797674082401458;
    msg.m = 0.23208280954796978;
    msg.n = 0.48696797282972015;

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
    msg.setTimeStamp(0.6434774955551339);
    msg.setSource(50070U);
    msg.setSourceEntity(215U);
    msg.setDestination(8868U);
    msg.setDestinationEntity(179U);
    msg.k = 0.35847688678954626;
    msg.m = 0.8586997235679317;
    msg.n = 0.5770770767228396;

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
    msg.setTimeStamp(0.505357411418078);
    msg.setSource(33026U);
    msg.setSourceEntity(180U);
    msg.setDestination(52526U);
    msg.setDestinationEntity(198U);
    msg.p = 0.08021690565998107;
    msg.i = 0.216028688722405;
    msg.d = 0.9460636119288196;
    msg.a = 0.06511427560199179;

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
    msg.setTimeStamp(0.26470688663585307);
    msg.setSource(42428U);
    msg.setSourceEntity(73U);
    msg.setDestination(51961U);
    msg.setDestinationEntity(116U);
    msg.p = 0.6681275128626982;
    msg.i = 0.9878888621975271;
    msg.d = 0.05062075777463659;
    msg.a = 0.9276059212982732;

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
    msg.setTimeStamp(0.15087266642544883);
    msg.setSource(50307U);
    msg.setSourceEntity(38U);
    msg.setDestination(23470U);
    msg.setDestinationEntity(67U);
    msg.p = 0.8961832474232159;
    msg.i = 0.08705570707076105;
    msg.d = 0.2452378412717524;
    msg.a = 0.3220684040186228;

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
    msg.setTimeStamp(0.949707100611576);
    msg.setSource(14876U);
    msg.setSourceEntity(66U);
    msg.setDestination(33087U);
    msg.setDestinationEntity(31U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.47803869652919984);
    msg.setSource(8715U);
    msg.setSourceEntity(4U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(193U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.9823005848505305);
    msg.setSource(62938U);
    msg.setSourceEntity(60U);
    msg.setDestination(13346U);
    msg.setDestinationEntity(149U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.6237821843301603);
    msg.setSource(18675U);
    msg.setSourceEntity(35U);
    msg.setDestination(51696U);
    msg.setDestinationEntity(209U);
    msg.timeout = 11713U;
    msg.lat = 0.10379922188411628;
    msg.lon = 0.17085786868640263;
    msg.z = 0.005956700337928833;
    msg.z_units = 22U;
    msg.speed = 0.7397515933856839;
    msg.speed_units = 214U;
    msg.roll = 0.6075918084406421;
    msg.pitch = 0.9208394985893957;
    msg.yaw = 0.8946999723327906;
    msg.custom.assign("NFTKZVLTNPACDTSVQQPCRXKPFKOTZNUMLPLEKJELGYQSMYXSXZJOUXJYKKNGLTDSPIHUJMFYM");

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
    msg.setTimeStamp(0.4463238487885236);
    msg.setSource(19192U);
    msg.setSourceEntity(198U);
    msg.setDestination(7134U);
    msg.setDestinationEntity(138U);
    msg.timeout = 27197U;
    msg.lat = 0.24144555047645178;
    msg.lon = 0.0712954252771697;
    msg.z = 0.07957032949278164;
    msg.z_units = 10U;
    msg.speed = 0.6439967507412775;
    msg.speed_units = 144U;
    msg.roll = 0.65157985712211;
    msg.pitch = 0.0019500075025237207;
    msg.yaw = 0.38897667129400104;
    msg.custom.assign("JNXHITKDDKQOVUGXDXDJMXTPXZFSJKYYSGPMRJGWEBZJLVLXGILLKVCOBVJACKLECUEVCAQFENNMEFBRPEIOSIPWFXWDDTSHQSFVKUCYXGAWWZNNMTMYFRGGMSARBINBOARWNWYJZYAOELMXVQPBNJCCHCHDUDEWZERHJATFBHTUIMIFZZIULGCMKIISOHTQWTCRHKRJTPULTYHSGZKZALPEVPPRPSVBVZBAXMYUBYRHONUFNQDQUWAYD");

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
    msg.setTimeStamp(0.8664309217894138);
    msg.setSource(50729U);
    msg.setSourceEntity(25U);
    msg.setDestination(62929U);
    msg.setDestinationEntity(12U);
    msg.timeout = 12345U;
    msg.lat = 0.6351401240290785;
    msg.lon = 0.4461178999327463;
    msg.z = 0.7481995600970189;
    msg.z_units = 161U;
    msg.speed = 0.7976375923323735;
    msg.speed_units = 161U;
    msg.roll = 0.6198094761780036;
    msg.pitch = 0.30398057126451805;
    msg.yaw = 0.7675130729894984;
    msg.custom.assign("NMHCELYFFBIGANMIWPDMKVMOSUFJFKTHODNQIBVTVNAWVZEIVOYBSENOGYHPKFPLAPZQWEATOMBHEMTJNZLQKWUWYEVYRRXRUGXGFLYJGUDUNJEUPEIIYPTPDHFCAGCLSLRZSHQHIDWPCHKWQKUVJPCOTWXXBYAECSSKQIYLWGSJZLDHQWRAMYDSCVIZGPMZAR");

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
    msg.setTimeStamp(0.1615337360420167);
    msg.setSource(45550U);
    msg.setSourceEntity(216U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(149U);
    msg.timeout = 24510U;
    msg.lat = 0.665255941159087;
    msg.lon = 0.6276010555726088;
    msg.z = 0.7242914186884588;
    msg.z_units = 221U;
    msg.speed = 0.9367055687587085;
    msg.speed_units = 48U;
    msg.duration = 7946U;
    msg.radius = 0.40563562710421697;
    msg.flags = 21U;
    msg.custom.assign("YKALBSJCYQQPROPUUFLKTPIRUHIPMTDCHGLDRTBMOQSKZOMIJXVGPULDOLXOTVVWBUASMIYNKZIEPBJRTWSNTREXRPWLGGZNAQFRJEOVVGJWDODEYSNKNMUCRYVJXJDFTKFAUYCIHTBEPMEJZVPMFZGDWAFAQTQCYQHIMAXXCAZQRTXJQVIYZC");

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
    msg.setTimeStamp(0.5895814372711304);
    msg.setSource(60760U);
    msg.setSourceEntity(43U);
    msg.setDestination(45884U);
    msg.setDestinationEntity(47U);
    msg.timeout = 7872U;
    msg.lat = 0.5181787792635368;
    msg.lon = 0.9934544670866507;
    msg.z = 0.033122392087510555;
    msg.z_units = 131U;
    msg.speed = 0.05795133522437579;
    msg.speed_units = 28U;
    msg.duration = 42543U;
    msg.radius = 0.6550094059281755;
    msg.flags = 200U;
    msg.custom.assign("LVPYVTCZIIMQPKISNSIGDUTRQGAPAGSYMONGFDUZZEXBLJHTODFCHDQVWWCEJRXAQJOFWTVMRHTJLTHMRKAJQSOUBCLRANEKRNQNXSMFABYVKKCULFFAWHGUIKHEADNOXDMOYGSXRFSQHS");

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
    msg.setTimeStamp(0.8274340595999887);
    msg.setSource(27040U);
    msg.setSourceEntity(219U);
    msg.setDestination(42103U);
    msg.setDestinationEntity(139U);
    msg.timeout = 23361U;
    msg.lat = 0.7719196661113261;
    msg.lon = 0.13242246802789326;
    msg.z = 0.8962448987694531;
    msg.z_units = 187U;
    msg.speed = 0.643812737010947;
    msg.speed_units = 149U;
    msg.duration = 44609U;
    msg.radius = 0.6458161077010809;
    msg.flags = 238U;
    msg.custom.assign("RIVZIAXGQWPFEPSQXDHCGVMTUNFRYBUNORYDTNIKAFFMRDFZUNRKEFJJZBJDJFHQXEAACKAVOPHHWEPEVTAYLBJWVBICZPUYGYNTKUJHANTZWUSRPQWWKTZLLOTCOPAWBVGETKMIEGPPNBKDXXODGNZJJSIQMQWQBY");

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
    msg.setTimeStamp(0.23591741365217922);
    msg.setSource(51312U);
    msg.setSourceEntity(23U);
    msg.setDestination(63039U);
    msg.setDestinationEntity(96U);
    msg.custom.assign("NYNIMGLPITSXCHBXZCJWFZYEQSIOJOOIXEUEAIVCSKUMWJVAPEJWBUDWDTLDYBIXSHDEFNCJGHOPABLRPPUSDMMZIHRNCOVTQZRHCUWKHRKLWAQHQQYYIPJRJBENSLFYHPLFFMVIXEPTFTKCJQVOCBMARYKKDGQNZGSOLDKGWBUGMVFWMRUEGPJVFYJYVHN");

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
    msg.setTimeStamp(0.794227066037019);
    msg.setSource(34232U);
    msg.setSourceEntity(178U);
    msg.setDestination(8743U);
    msg.setDestinationEntity(102U);
    msg.custom.assign("RBCLTVWFAGMAYFTTFLJGSRCMSLRTMPKTFNSDVNXLPCEONZFABHMKWQKVUGOBVTACCZNKNMYMXNQZRQXHIVWWHJYAYOXXEUQGDAHTAYJLAKIEPOFCEDKACPQGXRWSQQJCFLXNDDGRQDPHCMEWUKZZVISAOIUFTBBPMUNPVKIRCLDEXYZBLISUHYSZSYMPJUSRNOLHKODINGZRJUGEBEJIVRWZOTPKIHTEEXLGDUWQFQOGBHYPWBHMS");

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
    msg.setTimeStamp(0.8056969401461666);
    msg.setSource(9709U);
    msg.setSourceEntity(229U);
    msg.setDestination(9877U);
    msg.setDestinationEntity(36U);
    msg.custom.assign("NUXFCXTMJXHXQEMFLHVMAEHREMPNIJNXRBSWHIRVOWQUCPDOUBAJWFCSKDHAHTEQBCPKPZDACCSLPULARXOOUGYDAXLIORPBTLKYWO");

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
    msg.setTimeStamp(0.9443365810414147);
    msg.setSource(3576U);
    msg.setSourceEntity(106U);
    msg.setDestination(11498U);
    msg.setDestinationEntity(185U);
    msg.timeout = 37867U;
    msg.lat = 0.16507972000103688;
    msg.lon = 0.6629796376272485;
    msg.z = 0.615635589667841;
    msg.z_units = 164U;
    msg.duration = 42950U;
    msg.speed = 0.27657616827482423;
    msg.speed_units = 102U;
    msg.type = 22U;
    msg.radius = 0.6410572110198656;
    msg.length = 0.38067965181523933;
    msg.bearing = 0.5619274796806196;
    msg.direction = 9U;
    msg.custom.assign("QAGXGPFMFBNMGWZJNDTLZPEVIMJHDZRGVZSSALCIUAIQWACXFYJFDOU");

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
    msg.setTimeStamp(0.4454844029546571);
    msg.setSource(48550U);
    msg.setSourceEntity(87U);
    msg.setDestination(40266U);
    msg.setDestinationEntity(227U);
    msg.timeout = 47486U;
    msg.lat = 0.5836629856039613;
    msg.lon = 0.057685285082147986;
    msg.z = 0.19129145069683828;
    msg.z_units = 224U;
    msg.duration = 55166U;
    msg.speed = 0.007262329260795064;
    msg.speed_units = 187U;
    msg.type = 35U;
    msg.radius = 0.2191919639893677;
    msg.length = 0.46998954646161684;
    msg.bearing = 0.8504115228846357;
    msg.direction = 99U;
    msg.custom.assign("MZDPSWTGZNBSCETAIJPSCVAJHUGXMOAEHIYGXCWARYSTPMHLWJIOINWFROJKAYABRUVVLFEADNMHKELUMDMODRQTDVUZDNBWPWDOEFPYPHGORNIXLFXMCCWMVSXKGZUXIX");

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
    msg.setTimeStamp(0.9671698824565459);
    msg.setSource(2U);
    msg.setSourceEntity(206U);
    msg.setDestination(12020U);
    msg.setDestinationEntity(61U);
    msg.timeout = 49229U;
    msg.lat = 0.9754154176080604;
    msg.lon = 0.39363744180375027;
    msg.z = 0.46926086771318143;
    msg.z_units = 160U;
    msg.duration = 21862U;
    msg.speed = 0.3142291509291525;
    msg.speed_units = 50U;
    msg.type = 63U;
    msg.radius = 0.03464973314074782;
    msg.length = 0.06916247424415967;
    msg.bearing = 0.9895857160841854;
    msg.direction = 199U;
    msg.custom.assign("PGONMJZDCLKZZJVWITHSAJVDGZCSWPPTXKLXSMYBWRMUBVQHONAORLZFUOMCGLRUUMIUPDJRURXJDTDTGIEJQFGFRNALXUGIWOGHXVRHUHQBCZQKLCPJNSIMEINQKYPQPDWKLTAZQAEVADYHNFEAVTXOODXYGXHJGXLMTPOWBRPFSBYBBQSCHCFREYE");

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
    msg.setTimeStamp(0.3018738134151636);
    msg.setSource(6673U);
    msg.setSourceEntity(206U);
    msg.setDestination(41696U);
    msg.setDestinationEntity(191U);
    msg.duration = 2983U;
    msg.custom.assign("RQTJFFAPMVRRVBWJNGJSDAZKUZZPKZEHMTBRYFUUJRTYYEIODYWQCYJFMESDLMFYVWGIGLNCSTSUGWOOMLPIYNLXFXDZRXHDBNWDVSHZCNCUMBGXYIALB");

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
    msg.setTimeStamp(0.9266631641371126);
    msg.setSource(65513U);
    msg.setSourceEntity(3U);
    msg.setDestination(2968U);
    msg.setDestinationEntity(148U);
    msg.duration = 17290U;
    msg.custom.assign("QPNDLSIMIUTCRNYQBDHCBVFQJMORRVNMTEZGOUKQIXNAEBAXIOWQXMSVWDMSADRCZFREUDNGQYXLHMJHRGUHJBHBSZLDUSZRBMFIGITEGHAXZKCFYYGYMOLSUTAZIGXSJUMTEEXXYJEQCOUZHFNURNPXGBTKNVWVUYDZSTHTBOBWNCLIWLEWOLKOLFJPDTLKJ");

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
    msg.setTimeStamp(0.7701374073185191);
    msg.setSource(60573U);
    msg.setSourceEntity(237U);
    msg.setDestination(24755U);
    msg.setDestinationEntity(15U);
    msg.duration = 47144U;
    msg.custom.assign("ZPTXPSQZXDKUCQXWAWJUGOZEWFAAVKPQVKAMJPDUXLNVYEGOUKEDXRCTMFRSSEOCZWRZNONCJWZKQEBTSCYJJBJNBAVEBERDBSFTUGMPPKMAHLTAUAPVLWLECIVDNDIYNSWPYROYVFXCHIMYMOZHFGSEJFVDFTDONHYIBFQHBXMOLSMTI");

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
    msg.setTimeStamp(0.5284381046230057);
    msg.setSource(56458U);
    msg.setSourceEntity(48U);
    msg.setDestination(52000U);
    msg.setDestinationEntity(211U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.8951453383196943;
    msg.control.set(tmp_msg_0);
    msg.duration = 51367U;
    msg.custom.assign("XGRHKVEGDIYATBEEXBUGWFRCMKIFSGGWYRRIMTQMWIVGWEIOTHQLOUZMKZHSAPSTPCLQPYVCKBTLONENWDPFNSOQPVYKALVSARXVDESZLNMDXEJXJHFOUMOXWIDCJIPCFFGQMZDYFJHMQMAXPT");

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
    msg.setTimeStamp(0.9954312904419551);
    msg.setSource(18910U);
    msg.setSourceEntity(22U);
    msg.setDestination(37859U);
    msg.setDestinationEntity(229U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.64472168934473;
    tmp_msg_0.speed_units = 205U;
    msg.control.set(tmp_msg_0);
    msg.duration = 60022U;
    msg.custom.assign("QJFRZEVPLKDMFWOMZFPOUCNBKHGXSZMRAISTXZAUPJOCGLBWKDFWDNVUDISQTAFXEDVIOSHZHSMJOJNEVQPRWEGALGOGFW");

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
    msg.setTimeStamp(0.879697187641097);
    msg.setSource(54139U);
    msg.setSourceEntity(23U);
    msg.setDestination(35492U);
    msg.setDestinationEntity(107U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.002498144052505813;
    tmp_msg_0.speed_units = 27U;
    msg.control.set(tmp_msg_0);
    msg.duration = 63413U;
    msg.custom.assign("DRIKIUSNNBJCHKUUBATZWALCXMEOUMOTJYPFCJTWNDLKMYILAQOQOUHHQKECDWFSZHITHRJVDHGVJJGCEWGYPXUNZPHICPPPRRWBUHQ");

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
    msg.setTimeStamp(0.460517224181899);
    msg.setSource(36963U);
    msg.setSourceEntity(3U);
    msg.setDestination(39584U);
    msg.setDestinationEntity(56U);
    msg.timeout = 55534U;
    msg.lat = 0.6575107736690613;
    msg.lon = 0.583565841839845;
    msg.z = 0.6134696551078468;
    msg.z_units = 108U;
    msg.speed = 0.6657227986938865;
    msg.speed_units = 54U;
    msg.bearing = 0.25843336461222655;
    msg.cross_angle = 0.38853768625354435;
    msg.width = 0.5324942487059277;
    msg.length = 0.6100897318141806;
    msg.hstep = 0.7650776229825951;
    msg.coff = 111U;
    msg.alternation = 246U;
    msg.flags = 201U;
    msg.custom.assign("GHCRSZANBUDTXJSGEOETYMTHQHNQONUITPZKQBUAF");

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
    msg.setTimeStamp(0.05248981564888722);
    msg.setSource(23326U);
    msg.setSourceEntity(107U);
    msg.setDestination(55585U);
    msg.setDestinationEntity(78U);
    msg.timeout = 42342U;
    msg.lat = 0.2488100874994542;
    msg.lon = 0.39362434411815794;
    msg.z = 0.26247729909418627;
    msg.z_units = 209U;
    msg.speed = 0.9209478490056775;
    msg.speed_units = 223U;
    msg.bearing = 0.29317989576098535;
    msg.cross_angle = 0.7942766422587535;
    msg.width = 0.5514851375486414;
    msg.length = 0.8408671690494836;
    msg.hstep = 0.21083850408077898;
    msg.coff = 197U;
    msg.alternation = 204U;
    msg.flags = 114U;
    msg.custom.assign("AIHROPDCWOFAGTYISXSALNHEXURYXCWMGWNYYQBHOBVYMOXZZFEKLCODYHGHKODKPBQEP");

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
    msg.setTimeStamp(0.10922387161927183);
    msg.setSource(37864U);
    msg.setSourceEntity(64U);
    msg.setDestination(21182U);
    msg.setDestinationEntity(153U);
    msg.timeout = 44865U;
    msg.lat = 0.210969905075864;
    msg.lon = 0.0978049502833469;
    msg.z = 0.3306759787055832;
    msg.z_units = 249U;
    msg.speed = 0.17260458429824432;
    msg.speed_units = 232U;
    msg.bearing = 0.9127990868402589;
    msg.cross_angle = 0.6153514292258612;
    msg.width = 0.2699219236566296;
    msg.length = 0.03932088875796158;
    msg.hstep = 0.5942143046246805;
    msg.coff = 103U;
    msg.alternation = 195U;
    msg.flags = 90U;
    msg.custom.assign("MXRIXIZUOPLCVDMSTSATKPFWYEIJO");

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
    msg.setTimeStamp(0.01703930037315038);
    msg.setSource(46485U);
    msg.setSourceEntity(120U);
    msg.setDestination(29295U);
    msg.setDestinationEntity(11U);
    msg.timeout = 28229U;
    msg.lat = 0.3251352395371494;
    msg.lon = 0.6250263357359219;
    msg.z = 0.68048437282219;
    msg.z_units = 164U;
    msg.speed = 0.6633943893398607;
    msg.speed_units = 176U;
    msg.custom.assign("DDCPCUSPEW");

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
    msg.setTimeStamp(0.8701968182274317);
    msg.setSource(33671U);
    msg.setSourceEntity(252U);
    msg.setDestination(8308U);
    msg.setDestinationEntity(176U);
    msg.timeout = 2298U;
    msg.lat = 0.4815066443823539;
    msg.lon = 0.08025616037654826;
    msg.z = 0.27618100263116085;
    msg.z_units = 243U;
    msg.speed = 0.5053318907432279;
    msg.speed_units = 4U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.24124150984138437;
    tmp_msg_0.y = 0.3774780758145907;
    tmp_msg_0.z = 0.8080970862041164;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DOZCSAGTHFJOLHALZFDOAFPUKIHWRQPIORHBXLYEYPKPQBLWNQAWDOHGYDNMZIHJYULEIPISJNMLQCUSTXBERBGYMYBCHBVFONKXMRTADWSEKREOTKLGEUJFBWMBIKMDTHWRHCPGWWCUSUGUNDNQVREIEOHZUKZAXXXNNGUVWTLXFEKWFGSCEGVQPKSX");

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
    msg.setTimeStamp(0.4407721915867999);
    msg.setSource(46692U);
    msg.setSourceEntity(140U);
    msg.setDestination(56621U);
    msg.setDestinationEntity(152U);
    msg.timeout = 51883U;
    msg.lat = 0.3391995851241819;
    msg.lon = 0.6694571175542469;
    msg.z = 0.3893703893502358;
    msg.z_units = 197U;
    msg.speed = 0.21489018377804692;
    msg.speed_units = 47U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.04684098208280718;
    tmp_msg_0.y = 0.2248350404929027;
    tmp_msg_0.z = 0.563740885968908;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KCRSIDBLYWIQSYKXBGNIFTPEJMBTOUSWQIQLSYVMQWAAUUYKVFZOKJVZDJVDDMOSCWQFNFCRTBFTROZGNXFLGUKVWPDSXIASRYEJZEUIURHAXMHVCODYUJZLGBOMEEBNMCOHPHTMUVYSGJWFMHJNQJERGZADHAEMPWINPLALXHLGPKRXVILBEQGKWNWSTDSQXIUTZTBXGRLTKNBNOYOJZTGCEACUKHYEQHVJWCZPPFCAQZHKDFALDRNXX");

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
    msg.setTimeStamp(0.21832722222646295);
    msg.setSource(56471U);
    msg.setSourceEntity(61U);
    msg.setDestination(27080U);
    msg.setDestinationEntity(138U);
    msg.x = 0.8388862902211827;
    msg.y = 0.011250339672161491;
    msg.z = 0.11088333555422558;

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
    msg.setTimeStamp(0.5449033516781231);
    msg.setSource(48706U);
    msg.setSourceEntity(240U);
    msg.setDestination(49303U);
    msg.setDestinationEntity(214U);
    msg.x = 0.12003529026795956;
    msg.y = 0.6124602650581767;
    msg.z = 0.8270925352785737;

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
    msg.setTimeStamp(0.447589451963199);
    msg.setSource(62310U);
    msg.setSourceEntity(76U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(107U);
    msg.x = 0.4342335587701277;
    msg.y = 0.45276233605921257;
    msg.z = 0.7343929076235246;

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
    msg.setTimeStamp(0.5447558974459946);
    msg.setSource(43650U);
    msg.setSourceEntity(76U);
    msg.setDestination(58876U);
    msg.setDestinationEntity(195U);
    msg.timeout = 21857U;
    msg.lat = 0.9480759618019482;
    msg.lon = 0.7208962682336072;
    msg.z = 0.08032440476352187;
    msg.z_units = 212U;
    msg.amplitude = 0.5168007076760078;
    msg.pitch = 0.19382999940273593;
    msg.speed = 0.5917817141748641;
    msg.speed_units = 68U;
    msg.custom.assign("HIBGRMKDKLNEIGEFPZMUOXWUADVPQRFOAOLWSSZXMWBQENJCBNEUKBCUHVCSGVHTUZLRFUACMQMGXPJMCJLOQSRCLPVAZKMJAKYTXQIEDTJCBOWWQBJJUFTIRYDGTHRIHNGOEWTCRWZJVFRXKGBSVSXQNILTVHEDZLXSDJKDHVFUOGQATRXMOEYCYYQHJCQLSUONXWFNGPNKZPMFKBYXDMGPIBTETAUZSYYDZKANFBI");

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
    msg.setTimeStamp(0.8462854953804261);
    msg.setSource(23935U);
    msg.setSourceEntity(121U);
    msg.setDestination(14473U);
    msg.setDestinationEntity(230U);
    msg.timeout = 34201U;
    msg.lat = 0.22006354261553862;
    msg.lon = 0.3958309021535644;
    msg.z = 0.313546488779635;
    msg.z_units = 121U;
    msg.amplitude = 0.6510854406623229;
    msg.pitch = 0.2756794503531369;
    msg.speed = 0.15748195395698528;
    msg.speed_units = 16U;
    msg.custom.assign("PIZAVNJHUZSWBPYKKPPUVECLJCILWZZRBAMEKSAYRSNAIDVWXORYHOJMMLNRHVFZNQDJTQVGTRURXEDCENBEBFIFLUXXMPIRXUOZTWWTMLKXUUOEFZCBVEJUCELSZTSAQUOAQQKGYJGOVONCWMSSNHRCIJGYSRMGEXGDFMQFFJHGDTQTOKWOHWKJGGAAIMQBBXWCCVLPHRYYLKDPIBHFHAYDBCDBPFGQUPLXHXNDSOTZWFVNTQKLYSVIK");

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
    msg.setTimeStamp(0.0037146925333838565);
    msg.setSource(42642U);
    msg.setSourceEntity(119U);
    msg.setDestination(64845U);
    msg.setDestinationEntity(15U);
    msg.timeout = 60533U;
    msg.lat = 0.5890486689504856;
    msg.lon = 0.7315164524433122;
    msg.z = 0.9566965316873048;
    msg.z_units = 78U;
    msg.amplitude = 0.6512702445529949;
    msg.pitch = 0.13854868741569426;
    msg.speed = 0.05752291997367043;
    msg.speed_units = 126U;
    msg.custom.assign("ZGDVAQRATFMDLJLKVWTOPXPZVONGCUYUXVSGW");

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
    msg.setTimeStamp(0.9426657365696949);
    msg.setSource(23492U);
    msg.setSourceEntity(97U);
    msg.setDestination(22168U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.6223777490284309);
    msg.setSource(16726U);
    msg.setSourceEntity(120U);
    msg.setDestination(63890U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.9088068843591378);
    msg.setSource(3475U);
    msg.setSourceEntity(75U);
    msg.setDestination(43375U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.1335297319352894);
    msg.setSource(30545U);
    msg.setSourceEntity(159U);
    msg.setDestination(16606U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.8526977859371351;
    msg.lon = 0.30928733195786573;
    msg.z = 0.4054410718790794;
    msg.z_units = 116U;
    msg.radius = 0.5430216470553888;
    msg.duration = 42235U;
    msg.speed = 0.7001806169130929;
    msg.speed_units = 208U;
    msg.custom.assign("HFCUMBBPXOQJGGIXHKDOSURRCQPVEVJDIOCQBDLLWXYAXJZVNLYIQKJGIHDEVVPFTOANORFSCOWCVZPXRQQHCBMOGMQSGWWGRTDLTSJKULMEYKIAHRIJPTBKHFUCJZZLOBFSEPTPWDQBNLMRHEYRHSZKSMFMSNGQWZXZTURPAPITNESQYYBYDUBRWMEVMIVDOJAOTTAELSAEGWLXAEKKIGYKHUWBUTNIWXFVZPFDGNYFCJNKALNUM");

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
    msg.setTimeStamp(0.8410431070816109);
    msg.setSource(29526U);
    msg.setSourceEntity(214U);
    msg.setDestination(33118U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.044886823947955845;
    msg.lon = 0.6934579007845965;
    msg.z = 0.05596697647354576;
    msg.z_units = 132U;
    msg.radius = 0.13880966061601252;
    msg.duration = 45196U;
    msg.speed = 0.28344357249229923;
    msg.speed_units = 232U;
    msg.custom.assign("GINUFROQCMCNWOVWRSJHVVFPAGZBIYNGECCNOHPHRDCZFWBUIBEHMXOCYKYJSCIKDSUUYQSKRVLMSLQLLWXTLNFADBRZBGPMLYLAWNTNAJQOFUVQAALINGQHQHOUCZGT");

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
    msg.setTimeStamp(0.7225042480776231);
    msg.setSource(45056U);
    msg.setSourceEntity(9U);
    msg.setDestination(62408U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.9267622222937308;
    msg.lon = 0.8544510222936356;
    msg.z = 0.6759275889081723;
    msg.z_units = 253U;
    msg.radius = 0.4046598609027958;
    msg.duration = 54459U;
    msg.speed = 0.1354965640767658;
    msg.speed_units = 151U;
    msg.custom.assign("AOPJGOTRHPICELYYJSXFPWMCNZKRXBYBDAZTJZWUDVBDVOAWOXQLLWKFEFXQXICIJFKSTIRZVDQOMACICYUECNNUWXBMFWAJCGQVYNNELYWXEZPFHVTASBIRBHGBAGCQVH");

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
    msg.setTimeStamp(0.6752749959280918);
    msg.setSource(5618U);
    msg.setSourceEntity(147U);
    msg.setDestination(19808U);
    msg.setDestinationEntity(87U);
    msg.timeout = 44624U;
    msg.flags = 223U;
    msg.lat = 0.10727210791502184;
    msg.lon = 0.6959760790511382;
    msg.start_z = 0.20849389185549094;
    msg.start_z_units = 99U;
    msg.end_z = 0.934236386941027;
    msg.end_z_units = 163U;
    msg.radius = 0.07576549502232754;
    msg.speed = 0.05917338527262872;
    msg.speed_units = 17U;
    msg.custom.assign("UURNEBMISINDXSOGIZRMTOCPLIESVGQMTQWLNXUDSCBCHYIVNJHQYHQKOVDJORACHYFUTIKYUZVFWZUWETRXLAZWPSKVQMJFPLELJWKYRCFNMGMZJALDHYAHHNCRICTDOSUOYGXECKDIBBADXMFLHAXOQHSSJPOLGHMWIFPDVZ");

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
    msg.setTimeStamp(0.8033785621803531);
    msg.setSource(33624U);
    msg.setSourceEntity(26U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(65U);
    msg.timeout = 17799U;
    msg.flags = 142U;
    msg.lat = 0.1734699997396807;
    msg.lon = 0.5080208879149923;
    msg.start_z = 0.4739012346298541;
    msg.start_z_units = 67U;
    msg.end_z = 0.5593712936843542;
    msg.end_z_units = 124U;
    msg.radius = 0.41542948232122234;
    msg.speed = 0.5101369959000536;
    msg.speed_units = 23U;
    msg.custom.assign("LUXKJQYUPDIFCATFWEMPMLSUVAKIOVILHSNUDQBFRPCTDGCLNSYNDVTLBSFHRXPPQXPFHBNZLWFBEMCINWDEJAJVFBSEMVGRZZAMFGMMXOENZYAMKSWOBABXYKJLKVRHWQSNJRGVTUUTUEVZDENEYRQLHWWHOARQSEKWEQXXXVUWJRZKAGTTKMQCZVYCGIMUHBIRZGCBXJPTYP");

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
    msg.setTimeStamp(0.09421271624769456);
    msg.setSource(52419U);
    msg.setSourceEntity(157U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(175U);
    msg.timeout = 42792U;
    msg.flags = 239U;
    msg.lat = 0.8384141776108872;
    msg.lon = 0.496438257897969;
    msg.start_z = 0.10073883258270266;
    msg.start_z_units = 74U;
    msg.end_z = 0.6346282105988496;
    msg.end_z_units = 128U;
    msg.radius = 0.9996658559219866;
    msg.speed = 0.835388641328987;
    msg.speed_units = 117U;
    msg.custom.assign("QEKDPBFBJOLQUZYRHLSABVYHTUHFMCCVVGCJKJVSNGKIZEOFEKAFOENGMMHBSFHILDPVRUNABEMFATBVBYYJMPCQRHLYADPCNFXXZTHPYJFPHOVOJGKIIYDLRJVVESTRQZKWCCHMBIEWDAGD");

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
    msg.setTimeStamp(0.7723467753384874);
    msg.setSource(13433U);
    msg.setSourceEntity(137U);
    msg.setDestination(2063U);
    msg.setDestinationEntity(178U);
    msg.timeout = 54988U;
    msg.lat = 0.457711521661321;
    msg.lon = 0.5460110880670498;
    msg.z = 0.12271180613953436;
    msg.z_units = 107U;
    msg.speed = 0.8045134616442253;
    msg.speed_units = 254U;
    msg.custom.assign("HJMDCFTAXBWIPIJBZJBEMSAZODPIOGQVJFJVYTMDXTCEGXXXRSJUXLFZSECBGJIQIUWJAWUKRYNFMGVNPCEOAUTYAWMSVWALTRRGXYGOJKUQPCOCHUHV");

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
    msg.setTimeStamp(0.5209595253183551);
    msg.setSource(43168U);
    msg.setSourceEntity(87U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(49U);
    msg.timeout = 55197U;
    msg.lat = 0.7746722866503352;
    msg.lon = 0.7075664403905074;
    msg.z = 0.5710686548469077;
    msg.z_units = 23U;
    msg.speed = 0.4609550542788833;
    msg.speed_units = 117U;
    msg.custom.assign("CIRRKJTHLNEKWFMUTTLQXSYCRPAIECFKUVOVJXTWNWEBNQSJHOZCQOPFWUOTJOAQMICZKUPGCZJGCZRDUQOGBZXKSEMKIO");

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
    msg.setTimeStamp(0.5585877965767858);
    msg.setSource(5501U);
    msg.setSourceEntity(250U);
    msg.setDestination(62068U);
    msg.setDestinationEntity(31U);
    msg.timeout = 43226U;
    msg.lat = 0.8111462314368284;
    msg.lon = 0.007497393219817017;
    msg.z = 0.44353620763421997;
    msg.z_units = 173U;
    msg.speed = 0.2319063441872974;
    msg.speed_units = 119U;
    msg.custom.assign("GXTLKNLUYRYFBXXNHLXHDVPZEFYOEIWJRREBAKBPMBJUJIKRYRMUCLSEAZSQZKJOXUCTLXJKPVKQZSIHIMWZCPDMWTUPGEHQPYWDDBSQJGZQZFEKSQIVYUTHYADJFABVOAGUXZSCCAQDEYWJQFTUTMXJOVNNAQWIFMXPLFMEWWLMRDAVJMKBNOPHOF");

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
    msg.setTimeStamp(0.18964864404478787);
    msg.setSource(21233U);
    msg.setSourceEntity(201U);
    msg.setDestination(52373U);
    msg.setDestinationEntity(161U);
    msg.x = 0.325109575259249;
    msg.y = 0.5227902025842474;
    msg.z = 0.211091896763682;
    msg.t = 0.8538675397609528;

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
    msg.setTimeStamp(0.6615589721858925);
    msg.setSource(6833U);
    msg.setSourceEntity(201U);
    msg.setDestination(17044U);
    msg.setDestinationEntity(246U);
    msg.x = 0.018609827110766752;
    msg.y = 0.7165119227027582;
    msg.z = 0.7718780060488554;
    msg.t = 0.13362371079973845;

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
    msg.setTimeStamp(0.37202312594471354);
    msg.setSource(10558U);
    msg.setSourceEntity(63U);
    msg.setDestination(36536U);
    msg.setDestinationEntity(41U);
    msg.x = 0.5675773356243867;
    msg.y = 0.28370566300001143;
    msg.z = 0.5903885046206315;
    msg.t = 0.9777024671569209;

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
    msg.setTimeStamp(0.35401030972165404);
    msg.setSource(38261U);
    msg.setSourceEntity(76U);
    msg.setDestination(63066U);
    msg.setDestinationEntity(61U);
    msg.timeout = 49026U;
    msg.name.assign("MFJRZPITQRVUTDZTJHSUCLIQCUYGPCAYZVEPISLFNTCAGKKUZFXTWNMUERKWXNKOBOEMDAPZBPDOXYRYUCBQUUYSIHQJLMCYLCGNAKUKZRKLLXHIXRYSTJHWBAADVGNBYRFZWPZBDV");
    msg.custom.assign("JGRPZNGDYUSHDWCEEDNAQGBHOZWVVSPDEHNCFOIQGPLHJMPKXZHPKFJMXTVKMAG");

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
    msg.setTimeStamp(0.24161027405240276);
    msg.setSource(4886U);
    msg.setSourceEntity(11U);
    msg.setDestination(19925U);
    msg.setDestinationEntity(51U);
    msg.timeout = 27000U;
    msg.name.assign("EVUQMOTWWYFMSJMYNQOYGKMKQTULNBVTWSFHG");
    msg.custom.assign("TOSTQOAMTMHBETAHSFLCPSTUUBVXRJRKPGWVNTBPGBFHJOWGQAWHQYCCIDOBKIQJUKHVYOHPNBLMEXFFFARPHKXKXXBAMQGQMSNYTKVAZUDRVRYNDXDSWJEOWWACGZSJINZBJFPJLNCMLPSMBMCWEGUDIVYYCQYUZEZGVSDIISIQOUFHJDPNRTP");

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
    msg.setTimeStamp(0.07960501310972667);
    msg.setSource(17435U);
    msg.setSourceEntity(217U);
    msg.setDestination(7718U);
    msg.setDestinationEntity(189U);
    msg.timeout = 50772U;
    msg.name.assign("YTWSCUVLVCUIFZPRAHJTEZDVUKQNPWJSQYNQQBATXDQLIPUJHSEULOGDJGSBZDHWZXKMHHKLLPYLDBEBHXEIASKLJIMNHFQHFRYCSTDGHGLJKYFDGOVPSRNXBXGARYVZXFCGMEARCLPEWPN");
    msg.custom.assign("KGEJDRRUGYSXCRCSYIKNBDMSPFUYDVFOEUIFCNTULUTLQJRYIATXJCXQGVMETUN");

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
    msg.setTimeStamp(0.18493310398738882);
    msg.setSource(23080U);
    msg.setSourceEntity(240U);
    msg.setDestination(32658U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.371666050785196;
    msg.lon = 0.6028294975718399;
    msg.z = 0.7105635931742316;
    msg.z_units = 153U;
    msg.speed = 0.9829443079180606;
    msg.speed_units = 105U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.19797796268817502;
    tmp_msg_0.y = 0.5331034046069582;
    tmp_msg_0.z = 0.3769814879604433;
    tmp_msg_0.t = 0.17796454689970398;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.24613705290151455;
    msg.custom.assign("MINWCZUJTKKGGVNNLLPIPMFHYIPJTRTVLJBLYGURSZGAROUJVCHXACAPSBEFVEEIXQCKOFCYFZIXXMTDRTDANXDKNHBRAXQXDJFETQNYBWWXYBTNIFOSKQOWPEM");

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
    msg.setTimeStamp(0.590682363724995);
    msg.setSource(42746U);
    msg.setSourceEntity(232U);
    msg.setDestination(5689U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.22501062792631954;
    msg.lon = 0.8449164720480417;
    msg.z = 0.20575815322050883;
    msg.z_units = 110U;
    msg.speed = 0.2912443705568034;
    msg.speed_units = 79U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.42231590307694844;
    tmp_msg_0.y = 0.1812609422513538;
    tmp_msg_0.z = 0.07634746752765165;
    tmp_msg_0.t = 0.8824568093797109;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9230028922490456;
    msg.custom.assign("KSTJERGJNDEYHGDIZHREFGAGMEXLTVXAHWPWRNYIYTWDWKOFNYITVDSLSXUEZJRMODRYSWQTDJYFHSKWTYEHMQUPOAIJQXXCXARIYUAMIBGABMFHVMLPVOJXMZPNAZEOCRMJSLOAUXBZNKRVLBQKWJUSMKVSGUGBTBUWKFSGFNNRINSMQZLQCLHLDKVCCXBIJVFUPBQAHFQTKQHACYONUQYCZILUPLFCOGOJDCPEOEWFBIPBV");

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
    msg.setTimeStamp(0.33032158440869985);
    msg.setSource(47032U);
    msg.setSourceEntity(250U);
    msg.setDestination(12722U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.9580039163337511;
    msg.lon = 0.6663682263021801;
    msg.z = 0.7601516273424166;
    msg.z_units = 175U;
    msg.speed = 0.18202007514615182;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.003091355710957755;
    tmp_msg_0.y = 0.4668715583493426;
    tmp_msg_0.z = 0.7405158248182927;
    tmp_msg_0.t = 0.2998032819483314;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0023507534800812913;
    msg.custom.assign("IBYKSXXOCTVVUADEPDPNTMGQPOSQLTRLIFYBIYVWEMVTWCGSCYLWFTJFOZJDRGRPZGJKRZVXVQQMBFIKOZNDMHQROIAKYNKKSAIGAPWFAUXJQNCGNJYZYHEZXIKOELCQUXHHMPGSUWMXCWCMATHDXVKHXJJGLVJTYPSDGLJOQVIOWFRWE");

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
    msg.setTimeStamp(0.8314291417864315);
    msg.setSource(2049U);
    msg.setSourceEntity(175U);
    msg.setDestination(38426U);
    msg.setDestinationEntity(89U);
    msg.vid = 29040U;
    msg.off_x = 0.28775195249591556;
    msg.off_y = 0.7039107314259169;
    msg.off_z = 0.5545246034300961;

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
    msg.setTimeStamp(0.5123767278241328);
    msg.setSource(26898U);
    msg.setSourceEntity(173U);
    msg.setDestination(52385U);
    msg.setDestinationEntity(167U);
    msg.vid = 64239U;
    msg.off_x = 0.40203953026414974;
    msg.off_y = 0.7622877395817926;
    msg.off_z = 0.5133699703987001;

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
    msg.setTimeStamp(0.06837531769632488);
    msg.setSource(44047U);
    msg.setSourceEntity(61U);
    msg.setDestination(46660U);
    msg.setDestinationEntity(16U);
    msg.vid = 37130U;
    msg.off_x = 0.8610740881305329;
    msg.off_y = 0.5981495558896673;
    msg.off_z = 0.34285505118490744;

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
    msg.setTimeStamp(0.41926270907604946);
    msg.setSource(51772U);
    msg.setSourceEntity(6U);
    msg.setDestination(19151U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.8469654105420241);
    msg.setSource(39104U);
    msg.setSourceEntity(247U);
    msg.setDestination(23060U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.7056134576645116);
    msg.setSource(59225U);
    msg.setSourceEntity(32U);
    msg.setDestination(2545U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.7409812884956869);
    msg.setSource(50105U);
    msg.setSourceEntity(47U);
    msg.setDestination(20777U);
    msg.setDestinationEntity(186U);
    msg.mid = 62416U;

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
    msg.setTimeStamp(0.660848776693658);
    msg.setSource(49604U);
    msg.setSourceEntity(99U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(27U);
    msg.mid = 32032U;

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
    msg.setTimeStamp(0.16762432585068665);
    msg.setSource(55486U);
    msg.setSourceEntity(28U);
    msg.setDestination(44215U);
    msg.setDestinationEntity(31U);
    msg.mid = 32466U;

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
    msg.setTimeStamp(0.35292327664478895);
    msg.setSource(24507U);
    msg.setSourceEntity(245U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(107U);
    msg.state = 172U;
    msg.eta = 63601U;
    msg.info.assign("SFJZKRDLLVAXEKJPNIZNAQWNWKTVZBOJAXXRRTKRORQTEPRSNPTKYOGJTQMAEDFFCJYGJUWDICCZULQIOBFJSPOLIFXIBJBMZIZEYHPLENPLPRDQRMCYDWYJGCQYXDBXKHUASEMIREH");

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
    msg.setTimeStamp(0.41974527985637533);
    msg.setSource(38097U);
    msg.setSourceEntity(43U);
    msg.setDestination(8209U);
    msg.setDestinationEntity(85U);
    msg.state = 215U;
    msg.eta = 5480U;
    msg.info.assign("YDAHOXYVQHYHOIJQKALTTYNOAGVJMUSEWAGEKZBKGBRSJEORLYMOLTNFDNZNMIFLCPHWECJBERMUCIIYUNGOPWXGPLCEAMBJSQXKIVKOLFUQDTJQBSGCHCHFPJANZZIQVQFLSLBNKEHIKNUVRYGRCZERVDZRHBMMKZJZLMXKPDXROPGFUT");

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
    msg.setTimeStamp(0.3773148236682934);
    msg.setSource(3469U);
    msg.setSourceEntity(149U);
    msg.setDestination(56736U);
    msg.setDestinationEntity(236U);
    msg.state = 146U;
    msg.eta = 10866U;
    msg.info.assign("YYUOZQSKAOLSGXTUGYDRHHNWELNGWURMPQDZYFCUDUSDHPIIWMWJOZNJPKEWO");

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
    msg.setTimeStamp(0.6934638354120088);
    msg.setSource(37854U);
    msg.setSourceEntity(80U);
    msg.setDestination(25405U);
    msg.setDestinationEntity(219U);
    msg.system = 16400U;
    msg.duration = 35192U;
    msg.speed = 0.20105571610910333;
    msg.speed_units = 134U;
    msg.x = 0.19272933826674576;
    msg.y = 0.17903973999672507;
    msg.z = 0.6525031051149753;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.35151321580143635);
    msg.setSource(41547U);
    msg.setSourceEntity(161U);
    msg.setDestination(59210U);
    msg.setDestinationEntity(59U);
    msg.system = 5320U;
    msg.duration = 14647U;
    msg.speed = 0.7293361833031405;
    msg.speed_units = 4U;
    msg.x = 0.391096169196712;
    msg.y = 0.043447642310423085;
    msg.z = 0.13843881470937447;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.137479436944834);
    msg.setSource(51707U);
    msg.setSourceEntity(227U);
    msg.setDestination(24411U);
    msg.setDestinationEntity(243U);
    msg.system = 12971U;
    msg.duration = 57974U;
    msg.speed = 0.15367867483937703;
    msg.speed_units = 56U;
    msg.x = 0.8701581502584131;
    msg.y = 0.48742908084230807;
    msg.z = 0.7009680540960507;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.37300417331623514);
    msg.setSource(58814U);
    msg.setSourceEntity(71U);
    msg.setDestination(6836U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.9920639369176978;
    msg.lon = 0.13601263457581336;
    msg.speed = 0.4393131362545396;
    msg.speed_units = 79U;
    msg.duration = 28254U;
    msg.sys_a = 54614U;
    msg.sys_b = 6285U;
    msg.move_threshold = 0.7652538826188287;

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
    msg.setTimeStamp(0.4395217013956173);
    msg.setSource(54666U);
    msg.setSourceEntity(74U);
    msg.setDestination(56873U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.9736637931434811;
    msg.lon = 0.7146404234121015;
    msg.speed = 0.8446893342469021;
    msg.speed_units = 37U;
    msg.duration = 487U;
    msg.sys_a = 54187U;
    msg.sys_b = 17380U;
    msg.move_threshold = 0.14399137863216016;

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
    msg.setTimeStamp(0.6071643011822689);
    msg.setSource(39094U);
    msg.setSourceEntity(88U);
    msg.setDestination(32177U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.6974624542648008;
    msg.lon = 0.20349954194410513;
    msg.speed = 0.5398346165232761;
    msg.speed_units = 56U;
    msg.duration = 36811U;
    msg.sys_a = 58902U;
    msg.sys_b = 57500U;
    msg.move_threshold = 0.5537324643974723;

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
    msg.setTimeStamp(0.44916513283870796);
    msg.setSource(49802U);
    msg.setSourceEntity(193U);
    msg.setDestination(20377U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.2678762882079895;
    msg.lon = 0.3556092497819351;
    msg.z = 0.30552316878875707;
    msg.z_units = 89U;
    msg.speed = 0.07774514483504558;
    msg.speed_units = 93U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.21694105719602097;
    tmp_msg_0.lon = 0.3512302631204315;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QWRMAFUYWCOYHIEHNBPNVPONFIGLNGSFBYMQDIBSTOKQRTGVUAJMMCTFUZSLXZZUBXVJTPIEOWNZUKACHRFUNSIZFKCGNRAWXYGHTXOWMVKAJ");

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
    msg.setTimeStamp(0.0648677960612577);
    msg.setSource(54903U);
    msg.setSourceEntity(202U);
    msg.setDestination(4852U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.24338071785900017;
    msg.lon = 0.4913992968696329;
    msg.z = 0.233995959057679;
    msg.z_units = 32U;
    msg.speed = 0.6874420008709715;
    msg.speed_units = 228U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.44691387266559224;
    tmp_msg_0.lon = 0.293034798096913;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SUWEUZUECQQWFVZHQVPJKYGVAMZMYMKTNJKUAPDDYWNPKQLNRTUYAGRGWFEHCEIBQ");

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
    msg.setTimeStamp(0.3709331005859292);
    msg.setSource(19452U);
    msg.setSourceEntity(140U);
    msg.setDestination(59841U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.6280894737625963;
    msg.lon = 0.4920214724966454;
    msg.z = 0.02751301228266545;
    msg.z_units = 66U;
    msg.speed = 0.0820634816941439;
    msg.speed_units = 4U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.35837732809536094;
    tmp_msg_0.lon = 0.6143959612871598;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EPAGMQLPJQAGZIWIBRLJWASDJFOUXHRXIWUHKXWNKNMKBHEPEOKGRLNDUGYYGBDATXPIBRCSYKKBFYRSLJHOCNVFTJYVOGKNBRIHNYBWHGHPTVFRTLXMMWMEUAFQWZXZIVGBCBRLDBZE");

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
    msg.setTimeStamp(0.1641241289732167);
    msg.setSource(12481U);
    msg.setSourceEntity(197U);
    msg.setDestination(41698U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.17950120273308878;
    msg.lon = 0.6416010644143592;

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
    msg.setTimeStamp(0.12232616773782368);
    msg.setSource(54727U);
    msg.setSourceEntity(87U);
    msg.setDestination(4824U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.6094290072701878;
    msg.lon = 0.02327436707855879;

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
    msg.setTimeStamp(0.4531849222078298);
    msg.setSource(55746U);
    msg.setSourceEntity(188U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.20041710973845028;
    msg.lon = 0.37704194430824345;

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
    msg.setTimeStamp(0.5515524275162866);
    msg.setSource(40989U);
    msg.setSourceEntity(202U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(194U);
    msg.timeout = 22964U;
    msg.lat = 0.6072996008384752;
    msg.lon = 0.1129217755784746;
    msg.z = 0.4503148154911284;
    msg.z_units = 88U;
    msg.pitch = 0.8720218246919171;
    msg.amplitude = 0.19179074983221422;
    msg.duration = 57074U;
    msg.speed = 0.26563144233123914;
    msg.speed_units = 66U;
    msg.radius = 0.02648292818849185;
    msg.direction = 218U;
    msg.custom.assign("STBUXMRTPJULSUJQDCWOELCWJGRHLGEVOWJHJSUKQNOGDSUSAARHNQCANWXNDXPHPIRNDKYFU");

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
    msg.setTimeStamp(0.4489301735488437);
    msg.setSource(88U);
    msg.setSourceEntity(186U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(191U);
    msg.timeout = 62861U;
    msg.lat = 0.716886069917822;
    msg.lon = 0.030535926895452592;
    msg.z = 0.985898476818451;
    msg.z_units = 58U;
    msg.pitch = 0.5589792467832346;
    msg.amplitude = 0.2029410860399159;
    msg.duration = 3830U;
    msg.speed = 0.9070386687193777;
    msg.speed_units = 157U;
    msg.radius = 0.7642382862555795;
    msg.direction = 54U;
    msg.custom.assign("VFNYYPUVHUWTGWCZKLIJNOSGCNOKRIUJNGWBFSOSVFERTBBFIBHZISEMLHKOLKRDUKNYFVVHMFDKLQPZZXABXHRUNKLCGOMBAJAPMJXZTDWEBAZXVWZLCAFWHCNDUREOGMPGFXJRAYGACVRYLQXIZPJOCWXSTERQNEZJMGQFRYFTJGLPMSDVOBIIKYSEIXANKOPMYY");

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
    msg.setTimeStamp(0.43357739153509245);
    msg.setSource(5295U);
    msg.setSourceEntity(116U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(27U);
    msg.timeout = 13575U;
    msg.lat = 0.9895102300061601;
    msg.lon = 0.7400425195341982;
    msg.z = 0.8348932735832075;
    msg.z_units = 160U;
    msg.pitch = 0.23011973262090968;
    msg.amplitude = 0.3906691440512935;
    msg.duration = 51822U;
    msg.speed = 0.25864355087626356;
    msg.speed_units = 145U;
    msg.radius = 0.2224110121482228;
    msg.direction = 152U;
    msg.custom.assign("JWFBLXINTUFYBWFGDBARVRLJHOYQJIBBSFXWBTTSGZHTMVSGGPOQNNYNTZNHYZKLLDVANQDVVKVFNCARYSAMEZWCIXXHYBYMGALZUMZNREOOJUKMREWSEJEKRSKTIYDPMCGLBXOCSVPDLHXYGFNHWXJIUAVPCPOXIQUGNSZODUIHWIAQOKCWOQP");

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
    msg.setTimeStamp(0.1330370735440538);
    msg.setSource(1278U);
    msg.setSourceEntity(199U);
    msg.setDestination(21268U);
    msg.setDestinationEntity(246U);
    msg.control_src = 24544U;
    msg.control_ent = 131U;
    msg.timeout = 0.7108930003673304;
    msg.loiter_radius = 0.9248399902339528;
    msg.altitude_interval = 0.7271542723563074;

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
    msg.setTimeStamp(0.5818642592796176);
    msg.setSource(22161U);
    msg.setSourceEntity(168U);
    msg.setDestination(4928U);
    msg.setDestinationEntity(123U);
    msg.control_src = 26657U;
    msg.control_ent = 144U;
    msg.timeout = 0.7016567609678832;
    msg.loiter_radius = 0.046798918107403886;
    msg.altitude_interval = 0.6878319007819806;

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
    msg.setTimeStamp(0.18471914275262646);
    msg.setSource(41283U);
    msg.setSourceEntity(244U);
    msg.setDestination(19225U);
    msg.setDestinationEntity(28U);
    msg.control_src = 63848U;
    msg.control_ent = 223U;
    msg.timeout = 0.4791064434217738;
    msg.loiter_radius = 0.12176033457837288;
    msg.altitude_interval = 0.9012870994746592;

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
    msg.setTimeStamp(0.43886815477293495);
    msg.setSource(7976U);
    msg.setSourceEntity(36U);
    msg.setDestination(56068U);
    msg.setDestinationEntity(78U);
    msg.flags = 111U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1439178594303111;
    tmp_msg_0.speed_units = 30U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6993705899097378;
    tmp_msg_1.z_units = 245U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7940837599001063;
    msg.lon = 0.28461971145430975;

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
    msg.setTimeStamp(0.4860808327688645);
    msg.setSource(56628U);
    msg.setSourceEntity(209U);
    msg.setDestination(33160U);
    msg.setDestinationEntity(26U);
    msg.flags = 121U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.13822699970018015;
    tmp_msg_0.speed_units = 76U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7207840023070552;
    tmp_msg_1.z_units = 84U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.997649574611949;
    msg.lon = 0.998185053894824;

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
    msg.setTimeStamp(0.8495373940501082);
    msg.setSource(46893U);
    msg.setSourceEntity(63U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(54U);
    msg.flags = 196U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7682357830602816;
    tmp_msg_0.speed_units = 100U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5569540857115507;
    tmp_msg_1.z_units = 124U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7100165774062003;
    msg.lon = 0.9217991101298589;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.12780499933697853);
    msg.setSource(15638U);
    msg.setSourceEntity(195U);
    msg.setDestination(40899U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 150U;
    msg.error_count = 57U;
    msg.error_ents.assign("ZYYIGTJXXFHKUFFXCEEVGNDIHFFETDYOEWTTOMQRAHMUCAFSUGPGUXRZBAJFAVKVXJNBIRTVVLDJSMWNNMHPHXEZIIXEOSCACYBYROBNDSQGVNULOQJYDZLDJRM");
    msg.maneuver_type = 27260U;
    msg.maneuver_stime = 0.701675306762036;
    msg.maneuver_eta = 41314U;
    msg.control_loops = 3391556770U;
    msg.flags = 39U;
    msg.last_error.assign("YLZUJTFIYCONDPZSHZLWPGSBHKVAOKTPMYNGBLKHRHQEDSEFCZOMTRGBKYVMWBYJXOAZTEWXBKFNUXRKWFRQKBUXGSHMFJOCOGPVSYAATNSXMRYZAGTXUWHPPLJIRUWSKOYXIQCCRVEPCMKNNYRQTQCOAAZHMESIBQDANNHEZDHPBZWTISRLLISKLGQRTQEGAILJOIMCFVUUMPIDWYJEVGVQZBVJXUWODMUCQHPVNFXJLDIEGD");
    msg.last_error_time = 0.17230347288528658;

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
    msg.setTimeStamp(0.6322013817012044);
    msg.setSource(36924U);
    msg.setSourceEntity(16U);
    msg.setDestination(51819U);
    msg.setDestinationEntity(239U);
    msg.op_mode = 219U;
    msg.error_count = 235U;
    msg.error_ents.assign("TXPIDREGHJLUAUWGMPOMTNBIQHWBOOIHPFCFEKKVJEWWYRCKQYQXLROVINSATXVPXJUZSRBOCZEYTAAHWP");
    msg.maneuver_type = 15333U;
    msg.maneuver_stime = 0.4151997306367471;
    msg.maneuver_eta = 28979U;
    msg.control_loops = 159844446U;
    msg.flags = 177U;
    msg.last_error.assign("VSADOXQLXKWYPIKJPSALHCFJFQPMNLGIZORKQWOIVDFNRIQNNHVJILDEAMMTWEZXXEZBMVZOEVTYGTYQBTHCZGYLY");
    msg.last_error_time = 0.43103332989630927;

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
    msg.setTimeStamp(0.7086864436232431);
    msg.setSource(41484U);
    msg.setSourceEntity(153U);
    msg.setDestination(48636U);
    msg.setDestinationEntity(165U);
    msg.op_mode = 86U;
    msg.error_count = 89U;
    msg.error_ents.assign("IORAIGVJGPTIBTAUECMNDXNGOFUHLLDMNGGICEBQXYBLRLVAWNDKHNMEWUXCQWVZIIGJTRAWEJJNYPSPQACTKRTILDZZBAKWHYACLQMVNKFNHYMFXXOVHFXFYNGBQTMZFFVIRYFBDMUBOPSOIMJFHREDLTXHSHPBROMWTBWSQUPOAXVOYXYPWJJRGWJUUAVSKZHZSCPDTKEYCFIZOCEEPSZCEAGDSZDYSUHPQQJKGJBWTZQRKRUCLK");
    msg.maneuver_type = 3251U;
    msg.maneuver_stime = 0.5024362594224759;
    msg.maneuver_eta = 29941U;
    msg.control_loops = 1964388736U;
    msg.flags = 233U;
    msg.last_error.assign("ZWOUBFONVGINSWSVHFLRYKDCSXACZXQIBJYKHJGJNHGVLLWCQMRLBVDRKSEJRHXOLBOJEDQBFVGTSWSYEYSBTMQRUXCTZRHGPCYAZWXPTEPDZAHOWUIDCIYYWXJKKQNGBZUAMRFMMHTPADNBPMSKKMLGNUSJQMEPZGELFOHVEAQCXUYIVFSPVYXCJTQPDPHUGIOBREQRWUTUIN");
    msg.last_error_time = 0.04910340625881515;

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
    msg.setTimeStamp(0.2753850446354955);
    msg.setSource(30179U);
    msg.setSourceEntity(156U);
    msg.setDestination(55307U);
    msg.setDestinationEntity(166U);
    msg.type = 102U;
    msg.request_id = 37525U;
    msg.command = 62U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 38947U;
    tmp_msg_0.lat = 0.8669526211643231;
    tmp_msg_0.lon = 0.5607828689784671;
    tmp_msg_0.z = 0.6050162839627026;
    tmp_msg_0.z_units = 167U;
    tmp_msg_0.speed = 0.15019206376997674;
    tmp_msg_0.speed_units = 97U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.1421799083960117;
    tmp_tmp_msg_0_0.y = 0.9124207788058767;
    tmp_tmp_msg_0_0.z = 0.8605399540758653;
    tmp_tmp_msg_0_0.t = 0.33135622501735285;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("GPUYNRLBPLIKODJVUUPKHEFQXIIEOGYSVRQMEORILPNOGBXIUVWQJIHAHCNYFANFTXTBKCKTYIFVTEWAWQJXHVALSNLYEZHZBXQPTIXIEEZBYGDNKORCOCOIVSAGMHTJSZAQDMDMORWKXMRQSHVWFGDQVMCNADGSLMWBJCKPMSTJEBPZULKNSPPLHQZUMBABGAZWVCRRUJFFDBN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35441U;
    msg.info.assign("GMWNMGVGQZUQUONBHAYALIGMFFJDPZIGKNBYLRIUFFNPCBEWRKJQWUGIEJLYYPMFCTEITPZGZMHSPKIEQMDBMQWWJRZQSRBBJRZROLFOJVMSAXTKUSVISTRSMVTNQWCCDHSAERISBAVQJQOKXKFOGZLHVTLFHAPLDYKLVYXTADDAJNAXXCKEHYAXLQXJVT");

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
    msg.setTimeStamp(0.23402348436024234);
    msg.setSource(10676U);
    msg.setSourceEntity(174U);
    msg.setDestination(58366U);
    msg.setDestinationEntity(103U);
    msg.type = 212U;
    msg.request_id = 21809U;
    msg.command = 140U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.start_lat = 0.4699639410160631;
    tmp_tmp_msg_0_0.start_lon = 0.2637969923781651;
    tmp_tmp_msg_0_0.start_z = 0.6883429637856329;
    tmp_tmp_msg_0_0.start_z_units = 46U;
    tmp_tmp_msg_0_0.end_lat = 0.6137769055093446;
    tmp_tmp_msg_0_0.end_lon = 0.21893441500188526;
    tmp_tmp_msg_0_0.end_z = 0.2979253373142967;
    tmp_tmp_msg_0_0.end_z_units = 207U;
    tmp_tmp_msg_0_0.speed = 0.7157619176618729;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_tmp_msg_0_0.lradius = 0.27948981034682296;
    tmp_tmp_msg_0_0.flags = 195U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 42560U;
    tmp_msg_0.custom.assign("RLEZSSFIANZUXWISXIJKTQCCVBSTBHHRYKOYVKPQFHMROOGXUTPVDKXAUVQIAZPNSHDGMXTGVZRJWATPNJELWECWPQAHRUSURGJXTKUSLKQTJYOKBFMNMDRHJZELNUGNCQEAJGYUVWHWBIROMCYUR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7605U;
    msg.info.assign("HLDJFMYGBXDVKJGYHLCVCTESNXSOCNNFUFYTRGHTLNSISQSIVDRDFICMPCJIIQHLEKNOWOEZRAYAXRYQEUNHPXITUZTBBZOXAQBWNUNHZWFBMPWOWSGMUZEEPDMQGVIVBQEUHTGJJCFPSREOWHMAFCCKWHJLPWJSZDORKYTYIIDBDM");

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
    msg.setTimeStamp(0.950205939938142);
    msg.setSource(39933U);
    msg.setSourceEntity(16U);
    msg.setDestination(45264U);
    msg.setDestinationEntity(134U);
    msg.type = 97U;
    msg.request_id = 42623U;
    msg.command = 103U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 9246U;
    tmp_msg_0.lat = 0.2861453484227606;
    tmp_msg_0.lon = 0.4277198391970878;
    tmp_msg_0.z = 0.5150655273468924;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.amplitude = 0.29602358886460545;
    tmp_msg_0.pitch = 0.9742827277298453;
    tmp_msg_0.speed = 0.2972729789386913;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.custom.assign("HOIDZJZNFTPWILHEGRULTULRRHXFTYAOQWWSYAJDLKQQIKNWGSPGEBGHQYUJXUKGUPSHWEHRKVOSXMBWTPIBGUVTHJJVVEHCJNZOFSMIIAAIL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10846U;
    msg.info.assign("AKGTJVTUXWTNXOBRDUZNNZBEWHYQWVVYTDNYKQGTSSZMMEQQOPCWFNIMVFIGWSGPVGJVBMFBXDHYQAGPROMIIHTFHYCLSDEMZQDGLHJYUREHFSNAKZTRIKLFPMRFJOCCCLVQQWWVOJYTASIBHDERPZEXPIPNTHUYHSKKVSRXGVQZDCLOULCZAOCMJAOLMMUJABE");

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
    msg.setTimeStamp(0.02136709845274365);
    msg.setSource(55855U);
    msg.setSourceEntity(246U);
    msg.setDestination(52147U);
    msg.setDestinationEntity(57U);
    msg.command = 50U;
    msg.entities.assign("HXSRFRSEFWQWTYYULXYOCWMDNMAHKXVPHPBRXYLWWOVPJSKJRLMDQHBCCGBAAEDDOSVXCFNWHMIF");

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
    msg.setTimeStamp(0.3892550445078138);
    msg.setSource(51308U);
    msg.setSourceEntity(208U);
    msg.setDestination(49093U);
    msg.setDestinationEntity(107U);
    msg.command = 210U;
    msg.entities.assign("BNTUSHXTOFEALOBJABXGMWXLYSQMSIVSDWWBVJFVKNPSISKPPFWYVEGFBGDLPJMFCXKNGNSJAIHLIUQQJRLDKWHHXZQJTMTKIZFIRZLNR");

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
    msg.setTimeStamp(0.21215050859070794);
    msg.setSource(28842U);
    msg.setSourceEntity(168U);
    msg.setDestination(64606U);
    msg.setDestinationEntity(248U);
    msg.command = 194U;
    msg.entities.assign("LMWPYBAXVXNTEAPMGOCYEJGILXMUD");

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
    msg.setTimeStamp(0.09960103199859527);
    msg.setSource(30947U);
    msg.setSourceEntity(174U);
    msg.setDestination(53933U);
    msg.setDestinationEntity(70U);
    msg.mcount = 52U;
    msg.mnames.assign("RZFLGNWWCAQDTJCPMCVEXLMTYRMDMQPZLFTLRXENNHOLFIQICLCGZBAHYSBYJJFSWXFAMXWKAAUBVYYKDASJFQYNWCJVRQTUAEKWUBROICELKVRI");
    msg.ecount = 65U;
    msg.enames.assign("WABNGIWYBZHFQMIVDEGGRMEWAV");
    msg.ccount = 211U;
    msg.cnames.assign("OHKHGZTLUGOBZXOXQIYKJUCWTQSQYNKHIJRPDGNJUYKUUXPTZPQQDLMLGLIDBOLETMYGRWMEWRWAJYVZZRMEBMHRASQTSSPAVUTHHZZRXNJTIVACVGXNECPKMCNZVMAEUOWURPVOOLEFWINWCXPDFVGGOCVDKPJVJRACKDFEHCHDSUEJ");
    msg.last_error.assign("AYPCJEJWZJQHXLKXINIOJUIYMGYCSULRPRPZQRUAALICHFFYVHTZRQQQFSSACBKODOMDJZDRZTWEBUIYKNEFJMVIPYFRVPATNNLLIJTUIHSOWGAFWRYXFCCAHVMISRKPMXBMZDXNKVCFPAJNEXK");
    msg.last_error_time = 0.8504036242629294;

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
    msg.setTimeStamp(0.6356277814190657);
    msg.setSource(24728U);
    msg.setSourceEntity(71U);
    msg.setDestination(15413U);
    msg.setDestinationEntity(78U);
    msg.mcount = 107U;
    msg.mnames.assign("QBHSKZJTHLEQWG");
    msg.ecount = 229U;
    msg.enames.assign("LUWBHKAEHDIHINUPLTUGVLSBNJXUYNKKAJORQMGZMQMVQYFWJMMZLOTPPHKUB");
    msg.ccount = 188U;
    msg.cnames.assign("YLLFJOIXSTAVTMUKCKXPIRHZSNBCZNIZRKEHGYQPZALSXETCGFFTJSFRIUPLMAEHWSHMVKKMCDLYJNJHQQKTXRSW");
    msg.last_error.assign("AZTZGNAQJLVVYUORNIWGSKFJMSYXLIBTHBBLMPCFMOXITEWLHCEVDCNAMZTKOIPKWZHNPWAEVBEUUDRBEOCVDSFCTOWEOAJBHSBMDLRCDFYXSUGW");
    msg.last_error_time = 0.14183977049981433;

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
    msg.setTimeStamp(0.811744761909772);
    msg.setSource(50619U);
    msg.setSourceEntity(7U);
    msg.setDestination(20198U);
    msg.setDestinationEntity(13U);
    msg.mcount = 87U;
    msg.mnames.assign("THIKQGMRSDHNFGDMWUVYJSILOFCPPAOHTMWPFGZSZBDELCCQCQMMCNJBBDTNZPY");
    msg.ecount = 81U;
    msg.enames.assign("QVCZDEWINPHCUKQTUVOLYFHWBZRMQVRCOMDGSKYEJUAPBXXZEGFWKPJGC");
    msg.ccount = 7U;
    msg.cnames.assign("NKPLMEMEYPBKIQGZTUHNXZKLKATRTIMQGWBFIDUQGCVAYVFNUSSWWDEYDEZADNPCYROSTYIDQOKQAXDZCFYJLCOAPEDNVVFRXETPBMTRWJWPOUNSUKOXASVSMMGXJXVWLGHWUMRSBGPSRJWHRQCNDC");
    msg.last_error.assign("QBOHBCVPKSDAXHPJMIEGX");
    msg.last_error_time = 0.16576863123010643;

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
    msg.setTimeStamp(0.8099861554433003);
    msg.setSource(34175U);
    msg.setSourceEntity(220U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(177U);
    msg.mask = 35U;
    msg.max_depth = 0.5625955093025479;
    msg.min_altitude = 0.6892682376244553;
    msg.max_altitude = 0.08692952876981908;
    msg.min_speed = 0.38943699608663007;
    msg.max_speed = 0.9244923795555852;
    msg.max_vrate = 0.4425258483218252;
    msg.lat = 0.7450193818429596;
    msg.lon = 0.42007515839392107;
    msg.orientation = 0.7352276125721853;
    msg.width = 0.6672935946555706;
    msg.length = 0.014249703744069975;

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
    msg.setTimeStamp(0.6429857313647797);
    msg.setSource(11776U);
    msg.setSourceEntity(223U);
    msg.setDestination(6148U);
    msg.setDestinationEntity(30U);
    msg.mask = 95U;
    msg.max_depth = 0.21619342039665224;
    msg.min_altitude = 0.9628098340890346;
    msg.max_altitude = 0.6700936252157494;
    msg.min_speed = 0.9502347696671384;
    msg.max_speed = 0.7651997399401566;
    msg.max_vrate = 0.09470805417769701;
    msg.lat = 0.10779651913824173;
    msg.lon = 0.46035135665616;
    msg.orientation = 0.4950549641971348;
    msg.width = 0.5226049909320974;
    msg.length = 0.5488171355910725;

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
    msg.setTimeStamp(0.6631666371848619);
    msg.setSource(29520U);
    msg.setSourceEntity(175U);
    msg.setDestination(31490U);
    msg.setDestinationEntity(241U);
    msg.mask = 174U;
    msg.max_depth = 0.050846759838291455;
    msg.min_altitude = 0.26838637126056253;
    msg.max_altitude = 0.46841707252518505;
    msg.min_speed = 0.774093548933879;
    msg.max_speed = 0.7372128883724167;
    msg.max_vrate = 0.992524489064676;
    msg.lat = 0.2699522999825059;
    msg.lon = 0.6674812782015187;
    msg.orientation = 0.7089622473681075;
    msg.width = 0.09468583509678585;
    msg.length = 0.1848817049391448;

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
    msg.setTimeStamp(0.7360525174006174);
    msg.setSource(403U);
    msg.setSourceEntity(21U);
    msg.setDestination(30686U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.7893476880888718);
    msg.setSource(17049U);
    msg.setSourceEntity(171U);
    msg.setDestination(30252U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.6538999375484453);
    msg.setSource(8006U);
    msg.setSourceEntity(171U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.6812296387017902);
    msg.setSource(14215U);
    msg.setSourceEntity(32U);
    msg.setDestination(54182U);
    msg.setDestinationEntity(249U);
    msg.duration = 50316U;

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
    msg.setTimeStamp(0.3206741365693214);
    msg.setSource(46257U);
    msg.setSourceEntity(133U);
    msg.setDestination(13884U);
    msg.setDestinationEntity(64U);
    msg.duration = 3842U;

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
    msg.setTimeStamp(0.9499880086561051);
    msg.setSource(2988U);
    msg.setSourceEntity(58U);
    msg.setDestination(9259U);
    msg.setDestinationEntity(119U);
    msg.duration = 19867U;

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
    msg.setTimeStamp(0.23353087048727583);
    msg.setSource(37214U);
    msg.setSourceEntity(183U);
    msg.setDestination(54980U);
    msg.setDestinationEntity(245U);
    msg.enable = 7U;
    msg.mask = 2583732229U;

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
    msg.setTimeStamp(0.24334535553462378);
    msg.setSource(16733U);
    msg.setSourceEntity(232U);
    msg.setDestination(1905U);
    msg.setDestinationEntity(150U);
    msg.enable = 128U;
    msg.mask = 2608307141U;

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
    msg.setTimeStamp(0.5048785483112295);
    msg.setSource(15328U);
    msg.setSourceEntity(216U);
    msg.setDestination(44862U);
    msg.setDestinationEntity(214U);
    msg.enable = 220U;
    msg.mask = 2111721870U;

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
    msg.setTimeStamp(0.1605018058504709);
    msg.setSource(27966U);
    msg.setSourceEntity(246U);
    msg.setDestination(13699U);
    msg.setDestinationEntity(185U);
    msg.medium = 118U;

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
    msg.setTimeStamp(0.8974568688873032);
    msg.setSource(8247U);
    msg.setSourceEntity(90U);
    msg.setDestination(2644U);
    msg.setDestinationEntity(190U);
    msg.medium = 244U;

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
    msg.setTimeStamp(0.5240976868853968);
    msg.setSource(1560U);
    msg.setSourceEntity(129U);
    msg.setDestination(13518U);
    msg.setDestinationEntity(68U);
    msg.medium = 112U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.355943632386413);
    msg.setSource(58303U);
    msg.setSourceEntity(118U);
    msg.setDestination(44680U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.9402585949484427);
    msg.setSource(22534U);
    msg.setSourceEntity(56U);
    msg.setDestination(17347U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.21295017436457986);
    msg.setSource(7926U);
    msg.setSourceEntity(52U);
    msg.setDestination(45097U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.49183299530154834);
    msg.setSource(8203U);
    msg.setSourceEntity(185U);
    msg.setDestination(4696U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("JXZAHJKXYYQGIUDBWTSFEKZTHMPQYNIXALXNEDVNNCDECVUWHFKAMSWWCTJLEPHKOAEGFNUCPOFZBTHGAOXGKYABAQFOGMZFWVHVWPNTDUMFALVTWMLXBZFRQYYKZSSUWMEKEFSXXGMNPRPGZPQRCKBLBSIRNOYGJBERQIHOQJYNJQMRROEZM");
    msg.description.assign("ITQJWYUBYWCYEPLUKZCEALRFBXUHYATRZQDEXBRMNQKXVJDIUSMAUDKIKPXODGWORJVAFIQKGMTPZXJJWNVDIXULZHYCSTCPYVNENNFMPERCUKTNHBBGOSEVCPCJBBHXTZKGCCDKJAUZTOJSFADSPYPLNR");
    msg.vnamespace.assign("BTZLBNZFIZEVTWUUGUQWIKXESZPCWOKZKOHSHXTSNKORVIJLXOVLTQFWXFDXTHPENTUVAOAENNLLCUCZXYEFJJSQCDUEWQAYTMGQUSFGFYAIQKFWKVMIGAQHVVDUXLPSUCLLRNIMBGYGPBJREIHR");
    msg.start_man_id.assign("HVIEQRMSCUFVQOQUINADTGMKFDPMUISHXLDRTLGWPYMZUMRNAZDEQAZCWOBJKLPXIJSTQTETISVWTFNUPCEJNUJZJXOYUPXALELIBPSHJOHYINBRWHDXYRWPSIGVSSBYYMGEBSC");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.4733043094486975;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8591034320274087);
    msg.setSource(37760U);
    msg.setSourceEntity(208U);
    msg.setDestination(30173U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("JROAXITTUCVOSQADLITIOOGTYRGAPCLMEMIONEYTUJLOGAEFKEWZQMYECLPZDQVHWHPATDJQEWOUCPJLRYAPUCBRMNNRLNIGE");
    msg.description.assign("ABJQIFWVWHMBHORISFOXHZRRAJMOUYAJYKSOMCWBJLDURFXPFBCKPOXWAJVSAUGRVHMTRLQHWYBSEDEGOHKCNIGMDYNOOZCKFQYEAAXNVHDGQOEEWEZZPADAINLTKJRTEZGFBKPMXDHQKBTSQVFTYFUEPFSBQLTNIJCSDUIPNWQGJLGTPRPKYIUXNTQQICTUBEZCXH");
    msg.vnamespace.assign("KLZAIHIBMLZEJUUSATKDMQSVHSYYTFOASUNVBGLTLWZUKHRVGSACFZEJMOTOXYPUPPHIMKWOYNJVTBJUYBYAIOROGBIVPLPPHAIRXNNNQFJEVZEXEEPHODCILCEDEJ");
    msg.start_man_id.assign("JGSSYZOYHBIMQFESTYUZHVBVIVKFKXFOPDBWNFWWTODDJTGANIGNMOWRXLHVYFQNLKRIOUNQJEPDDYJELCZBEYVBFDDNZYWUJUUAGAJFYSTKTMCMLHLHDPEAREBHJHTAPPZXVICESNP");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.18661974988416086;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::QueryEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("MGPNUYUUKQORTYINRAJSECPHFBFLQKDVDMKUQECEMZTOHHHAABBCPSOFDMQNIGREBKEAIMQJMLWDBTLPZKVGEWTVSEGNUTSEYHNDARZFWYBNVHSJCWWIADXVPCMOFDCW");
    tmp_msg_1.visibility.assign("XSHPOKRTYBWRLQUOYANUZBWBQKRBGHFYCNJFSLGVZURBDEPJRHCJVGUHOEKUIXGZINSLOIETVHWLOVMCSPYRYWPKAOKFQXEOZJPBZKFLKTHECZGJPJRSSDFJLUCHABFQGRNRZOPNNCDAIMAMXFQHNXQEGQTWEGMAAMLYUTDLAHOSMWDIROPUBJKTCNVXIXFISCIMDGYXPWJWVEMGYUQQVWICCSUBVTMVLHQEKDNLYBPDWDVJZS");
    tmp_msg_1.scope.assign("YMSWLAAAPINRUYZKLCJLTNHWGTRUSYYRFJIAJRTRVIKTLJDGOXWILQHGZQHHSMXHQXCPSEENWCVGSQORMBQVMXRUTTLXHZJHDDUWZZUPKBOSCVOGDLRUTZGIMXVVPPIKFVSBUIKVIQPEXWWAUKJPEIDHNQXWGAMYFYAPMJEJZJYFTPTDOFFODGNUO");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6665754316010527);
    msg.setSource(54464U);
    msg.setSourceEntity(137U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("YUAKVQAYSCZQFDGXPUYIFYFLZAENXRAPHRANAEDHHZKCIGHBPLCYMHWTOOECAWVSSVXXKUWTJGNIKJIZSZWBSVRTXEPUUILBCZOKYSWMDNCGQBJEHVMSMBGCMBMNHAUXTOMKRXD");
    msg.description.assign("CDKASGHSPBMTTSCZZTAENPSZWOHZEBBXHFRONVVHVNMGFHCIFN");
    msg.vnamespace.assign("QTXAOHRGQCHKVCNAAEYLZZVUFSGITMXBUUWHEIVQAADIDJNGLWBIDDVSHHMCKIPCJEPCPBDEZQRTMFNFVLDJRZEFHXILJHQRAJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JNWBRUWMQAYJIRQCEGKMIQFPAVCUQGENFTGHNNLICOOYCMFTCBVCDAWLXKSHKXJVQRGVDBOHLMXMQBOPCTNNFPUDBTJHLOXLQXYZODOWPUGRIAZKAPZCSPNHIEWSIRLLBJUFEAKJGUFYRSOXCXPDJUBGPEIWRYDEKMTWVBEKHKMASGDSBKXRRZETHVXQTQVNIFETJPAUVNHAYMFOFLWHBJTNPDMODZRYYVVGZSWKSM");
    tmp_msg_0.value.assign("BDONVIPQFZPUGPHYAJMXJJKMDLHPEGNXRDHUQIONBWJSH");
    tmp_msg_0.type = 1U;
    tmp_msg_0.access = 211U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AJPYYSQJZLPONRTPWLXDEMLYGFXTLPQFYMEIJEEMCMPUWHSAMDUBZFOVXAZYOEHZOPDIDDVBGZBZJHQHEFNNWSMCKRLXBYBLFIEJBHCKCVSQMGKECFTYKUUAJQOOMQAGDYDC");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AUHMHXTOZSNZUHRIOBOWYKIBQAKOYQDDLHXUENPZPFZCZIYSPTQXWCSTTZMEIFWHQPVJAHSOYQCQKYPRVAXDAMHVIZVUBDJLSQECZXTDEUEKBRQJHHXRCFVMUJUBDGGNOESYFXDOGDNGWJ");
    tmp_msg_1.dest_man.assign("PYTXHYOLIKEEVBIKFXRDBTGCQEAROJNNVNAMBMIZLJTCCTAAFFDXGSHEINDCROSGDFLJBOEAGGMDPJZMPUVCNUEYKBAXEXQZTYMLQBLCOUJFTSWZDHRTMYWWMRAQZPLXOKANNSNEZXWUCJKZGMPKPCAHVILMVUPJGDUIGGJLTUQYUWZIYVFRRQKSBBOSJHRHYDQHFQDHNYIVRFKFNGZAKVSWUPTLOEZHQXIXWSCWBWQSJO");
    tmp_msg_1.conditions.assign("VTPLJTHUJRGUTDGCFRVKDNFDNDBLJLLWGIBPQAAKRSVCOVSOIZUWYTUUIFXPCJRZJPGRIAXOSPXF");
    msg.transitions.push_back(tmp_msg_1);
    IMC::TrueSpeed tmp_msg_2;
    tmp_msg_2.value = 0.3739985376445708;
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
    msg.setTimeStamp(0.352016408857747);
    msg.setSource(13640U);
    msg.setSourceEntity(19U);
    msg.setDestination(22066U);
    msg.setDestinationEntity(239U);
    msg.maneuver_id.assign("KCVNTCGEPCXJLALOYQERJRKJQGWWXTGFQHWSNMRAUFWEXDZFPAWOHKNEVFZNPYNDGEFUAGEMGIRVRUZOMNQJBQZEHMFFBCZISLIMBD");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 7165U;
    tmp_msg_0.lat = 0.892198715724982;
    tmp_msg_0.lon = 0.17739159166496354;
    tmp_msg_0.z = 0.035331472287129406;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.7595761617257549;
    tmp_msg_0.speed_units = 58U;
    tmp_msg_0.bearing = 0.14645051011570176;
    tmp_msg_0.cross_angle = 0.6301071076127324;
    tmp_msg_0.width = 0.2351281740783827;
    tmp_msg_0.length = 0.05141774046073344;
    tmp_msg_0.hstep = 0.6745546357372325;
    tmp_msg_0.coff = 132U;
    tmp_msg_0.alternation = 71U;
    tmp_msg_0.flags = 118U;
    tmp_msg_0.custom.assign("LGTYKWBAUHKPPHVRZXMXCAOITVCDLQKHFPJROKNWEHXZMZWEDCCXFCNWGATBYOMBBAFQRQIZRUPEKJCSNSIMHAJELAFYQJNGEDFVQVEDSVSZLXQYRDZRTIJYWBOOPYQGFACJWEMSGPZRPHXDNAUJSZPCOYSXIMBWUHUMXVOVAQWVGVPUFSWFXFTNVHYEGZTKIMYILGNJPJRUNLSZBUTCOLGEDT");
    msg.data.set(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.6481928716432913;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Parameter tmp_msg_2;
    tmp_msg_2.section.assign("AAXYNYDBRMPXQRTNXTXRGPRJDKYJKUXFEUBGIDWZUEZGEZTIHVASZSDNWTYSBHASFDZLO");
    tmp_msg_2.param.assign("EPBLJVTAELNZIQVVZODMMXYOVPHPIIBRMAUDOFAUMTPHFGAXPHDNKYTTZUZLNALCPILDBDIRCKWLKFISGGFSYLOEMNIQFMILCSAYWPBTUXZVUJEECKNXWQCACOUFHAYNNIXGMKHPBRWJSTMKTOBKTURGXJOXR");
    tmp_msg_2.value.assign("IUKHRFALCZGWNSBPIFGKILKRAXNNGSHNJTNKUCDMHQUHXAZYDXAWWXRLXUFFSKBRTXTJAQPTQFGKBINLEZWMAZVJBYUVIIOWFXRWGSJOHSKEYCMMAMTCVNEZOMQBOYPDHSDLLSOTPERKVBDOVACBQKOREPQJZELZGACTDVFBIGSOQVETUDRIXJZWYARFHY");
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
    msg.setTimeStamp(0.41300057079099806);
    msg.setSource(53124U);
    msg.setSourceEntity(191U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(11U);
    msg.maneuver_id.assign("FCOVINHLDLMPOIJEIYYYRDVVEMGAVRUMIIPGMUFGTGNESIBDMFEQSGTDAHZXGLERJLRDYCJPZMSBILOXENLNUBBRSFXPCBZQDQCUCWWUQHWMWUPOVUVABWHTTRWZWPHHFESKN");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 12564U;
    tmp_msg_0.lat = 0.7182289080677154;
    tmp_msg_0.lon = 0.6986463352389727;
    tmp_msg_0.z = 0.2525705979011309;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.speed = 0.6634974596086528;
    tmp_msg_0.speed_units = 80U;
    tmp_msg_0.bearing = 0.7732204423765205;
    tmp_msg_0.cross_angle = 0.4341715957986112;
    tmp_msg_0.width = 0.3845784190926085;
    tmp_msg_0.length = 0.17926758795894704;
    tmp_msg_0.hstep = 0.2957077860612688;
    tmp_msg_0.coff = 20U;
    tmp_msg_0.alternation = 134U;
    tmp_msg_0.flags = 212U;
    tmp_msg_0.custom.assign("MUHHMNHTRBOBHJSRLGZWGXBBFKFMBNVASWOEJXYSVZRUXAPEMWGBGRIIRCJNSQYQPCIEZDMJQOOLUCDYVAHPXATRBZPXSQIEEJYIINUFIUFBPNWKOQFXXSSKQUTPFLLVCLGJKDZUVHSQWVKCYYXZUGLORSTPEMLYDKMWHGNFXWJQZVSYI");
    msg.data.set(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7662584221198373;
    tmp_msg_1.beam_height = 0.26442240923664684;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ButtonEvent tmp_msg_2;
    tmp_msg_2.button = 160U;
    tmp_msg_2.value = 60U;
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
    msg.setTimeStamp(0.08863454002109272);
    msg.setSource(25373U);
    msg.setSourceEntity(14U);
    msg.setDestination(50104U);
    msg.setDestinationEntity(229U);
    msg.maneuver_id.assign("WFYBCUNKNXIJOQWNBCJFNEIMHVPOAELROTZPVYSZPWIATRBRDQOPLGCYFNHSDSTVQPDEHDPJQMUPHTUTMLGGYOFIJLKDZTWOAMVXAQXXRRAVTHJXHMWIIWKMQWXFOB");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 62734U;
    tmp_msg_0.lat = 0.8054545595357469;
    tmp_msg_0.lon = 0.9335273866210811;
    tmp_msg_0.z = 0.32631201739083526;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.08850557914567536;
    tmp_msg_0.speed_units = 111U;
    tmp_msg_0.duration = 56087U;
    tmp_msg_0.radius = 0.07234138295762382;
    tmp_msg_0.flags = 137U;
    tmp_msg_0.custom.assign("EBKGKTBXUFFCSUOGMMKNQDEOOZERXZAZDFURYANZAJDXEXNJQJHVKKPDGLSMXUEPMLEXWYHXTICYROQEMJTQLBSWDVCAMLYBSMJFZZGEYVDLSKQUNGCJAJHAHTFPGHJSMVU");
    msg.data.set(tmp_msg_0);
    IMC::LblEstimate tmp_msg_1;
    tmp_msg_1.beacon.assign("MWLEOPWDXGNFRLWFJRTRAZQEGWTJIOWNIBDCRRNPMDFQXIGMKQYCUZIQXOZOIKVKSVSHSMXOCOBWPSXRKGTAQTGYBSAJJLHFBWSTJGNTYKXCCLNCALGUIAMZIMPVEHZINDFYPDBUQZNLSQFOVVXOMNKZPLPHRXBTMFBLWGARVHUVYQYMQSGFGAFYZPSKDTKUTBIVBNKEVOCRZYJEMWNHJQKEADESRJELXACPUBWCLCJDAVDEFEUTOHHUH");
    tmp_msg_1.x = 0.7892566589201244;
    tmp_msg_1.y = 0.7349485921466685;
    tmp_msg_1.depth = 0.03380873935200224;
    tmp_msg_1.var_x = 0.23033144887811663;
    tmp_msg_1.var_y = 0.28626966160210265;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LowLevelControl tmp_msg_2;
    IMC::DesiredPath tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.start_lat = 0.8975895616319577;
    tmp_tmp_msg_2_0.start_lon = 0.3041212433611291;
    tmp_tmp_msg_2_0.start_z = 0.17994379471279243;
    tmp_tmp_msg_2_0.start_z_units = 247U;
    tmp_tmp_msg_2_0.end_lat = 0.06837866877676868;
    tmp_tmp_msg_2_0.end_lon = 0.8450255951206659;
    tmp_tmp_msg_2_0.end_z = 0.7902229983379166;
    tmp_tmp_msg_2_0.end_z_units = 118U;
    tmp_tmp_msg_2_0.speed = 0.8336332956266513;
    tmp_tmp_msg_2_0.speed_units = 238U;
    tmp_tmp_msg_2_0.lradius = 0.4564787209623641;
    tmp_tmp_msg_2_0.flags = 14U;
    tmp_msg_2.control.set(tmp_tmp_msg_2_0);
    tmp_msg_2.duration = 63333U;
    tmp_msg_2.custom.assign("RZFCRCMAEKAXCNWBKLITQHBQSUPEPHGJIOYDRKPAXTHXNBFAHMTCXWTXBBXEIJLEQXUEWMGDCORMAZCYSLLIBFDEYIHYOZFMROFJVONIDTYEEMVKYNOH");
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
    msg.setTimeStamp(0.4780367606966931);
    msg.setSource(33437U);
    msg.setSourceEntity(247U);
    msg.setDestination(25003U);
    msg.setDestinationEntity(245U);
    msg.source_man.assign("DTAPAJIHDPSLQPJZKESUXECKCRTILRAMALGTAEPTFRKULFMBVHQOCZGNPAIYPHAOUWBTLEZTMACENJNVUYXNJXLSWPMJYIYABFCIBHDIPIQDWQMJTNYEGGVOMGCBHTRFCOLS");
    msg.dest_man.assign("OEJBPTAWVFBPPIIRFACUGNYTGHCWWHLYXMDOZDXQCALAGVOGOVMZJBLXCJHHOINDCTMVCEYAPKDFUCKTURLVHOOWHQUQGPKQMDNCUBDJHAPZFZZSQKYROUGTDSKQENPYHXUMDUETEOXSNKYGJIILJWEWYKVA");
    msg.conditions.assign("TDVUPPTLTIKELJTEEFOHQUVGXGHAANXAZHWPEWKLWGWJTMRDLNNFTIBNGSXEWLINQMZTXTEUJBHARNQVXPCLDYDYYFND");

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
    msg.setTimeStamp(0.3294087764440006);
    msg.setSource(26954U);
    msg.setSourceEntity(231U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(24U);
    msg.source_man.assign("TSWZQZIJRANBFSYPZCSWTFAONPAVJCKGHHATYATIEYRKKNZL");
    msg.dest_man.assign("MEILFJCWPTWJDOWHFTBYFHPKRTARMQFYRZYJYLEFRUWXGUNJDHP");
    msg.conditions.assign("QELDAWJJADFMJLOOCEVDSBQHRQNNKWJWOKASZVGPGQBGYSFUXSLQVXXNDSEKKIADVDOREMONTBKXAHRGOFIMQGLICLKZVLFXHXVZBPTPHTMFJNVC");

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
    msg.setTimeStamp(0.6108523342008316);
    msg.setSource(8104U);
    msg.setSourceEntity(191U);
    msg.setDestination(33161U);
    msg.setDestinationEntity(22U);
    msg.source_man.assign("YQJMCAQXKPYPZXQHNTP");
    msg.dest_man.assign("CRFZWXWPYINYNRSGGSDXKBPIGAIYZKWLWQFSFCZVZBHFTCRUDRJENZVLHDLJJXIESHKKVOIQNBFESMAVDZDKCTFTOTPJOMCPDYPSSGAGXVDYJBQUWSAMNPTMDPGLLKBBJNUZPAKANVFLIAKIHCVESWLYGRYNHORYAIGMRRDJWNQGCKXBCWCQTHQEJOLWOEPRUHXI");
    msg.conditions.assign("DTYGXJWOAYRVXPYTPMZAFDHYKWEJCXIUUHLEQGBNFVBVFXSNCKHWCJASTBHKPMSCQNHXAYMYNBYUUTTGDVKJB");

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
    msg.setTimeStamp(0.8634164100201379);
    msg.setSource(42244U);
    msg.setSourceEntity(152U);
    msg.setDestination(12376U);
    msg.setDestinationEntity(155U);
    msg.command = 221U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YPFOBIYXKCSPLVSJBAJGFCIAQVPGHNWHHUWROLLPZUZBRQKUTHDXZENXQZNNPGDHNEBLRQWTSQGFPDTDVPNCGFYBMACFSIKBCWNOMIMSKEEUKJICHYJARGCJNBRGVEKJYFNYXAVZJQSFVEOFVWGTITBUDWUPDLLLZVRAPOYEMBCOKZTHXVGSSTWWMWWUZAQGURXLKISYADFYBAJEHZOREIJMTMCDUOHIVXMTEJAQ");
    tmp_msg_0.description.assign("KGSLPJNTOHQPPENKOZJLPETXFXOVXQZUNIHGDBNLPEHHMZSRTSQUZSLBOIITKXTNRTKTJPFSXOVYREWLFWGAVKYQHBEHCDWCQXYMJAFZIYZCGRDMOMOZGIUEQJFFAYJKARNIADDDCULWEHTNKWYBJJCDSGWOKRWSVUTCQAIOOKFWRQBU");
    tmp_msg_0.vnamespace.assign("OJBAFYRVVMFHOFTDMMEJHYZBQWEKZKXFEAIJEWUVYTXIJTKALRMSNXBVCAEJYPCRIFZZMUNEDVOJKWVUNQIWWQQZYGSUGAIORBIUCKILCJKGHPEGDIWFLNWCOSHCGU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PYGWCHXRYJVPKTAPTAROMXECAODBUXZPZHLDPKIHKIGMPAFFLREHKJUWQFGDEQGMTDBSSVCMBVWWZNJCYNSQWAFVTIHZBTTWIXGRXZABMHKUFCGNKGAFSJVZBSRFZNBLMBLSGIAGLUOQSLYVSNXIERYYJMURWMNQIH");
    tmp_tmp_msg_0_0.value.assign("ZCSWNVLNURIBBHDVFAWXPVDSYNLKGFFSDZMIKNIDXIAPPSPWOCTJIVZUYAMTHEWTDWBEKUODTZSANTYKOVYFBXUFQEQMKCEQMQVWDJHRUXRAOHZJXFXKRRXUKVIAKOGEYRCZJZMWBCQZHAWTVAJSHLBXCYTGMPQZCHLGHYPIQODNL");
    tmp_tmp_msg_0_0.type = 245U;
    tmp_tmp_msg_0_0.access = 237U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LAMAUFPLASGEBFUJEWJXQAQHISBECRPOYYIBHRZZBXZDXUAIHCOKGZMKMRNFHYUDRLLWGXQIKUVQYUSTOEPJPMHSVIYQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("QWJXCLQWADCYDMTMPVXNMZKWTDSQCIDPFSWJBLVHKTZAAWYAPXOTRAXWKYIMMKZUQVBFT");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.7721793930050744;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7360421918653257;
    tmp_tmp_tmp_msg_0_1_0.z = 0.3604121854467254;
    tmp_tmp_tmp_msg_0_1_0.z_units = 171U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.12831450074607387;
    tmp_tmp_tmp_msg_0_1_0.duration = 14328U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.02851638515087862;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 104U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TEZYNLRBFZESLVQSLGQCNDSLUNHONSFYTGCEWXTIRJEHUBEJPXBYLWKJIBOBGNVEZMQR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrueSpeed tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.7897018077876659;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("DOQHHUORFMZUEPRMYSZPPULTVFDEKRGYMZCETOFLIOAGUAHSIXPWUAKLVWSNMGMAJOBJNERHTY");
    tmp_tmp_msg_0_2.dest_man.assign("SHYESGFMDMUWCJDVJPFLGNFARWIQUCYEJWSPKDTQGCEVTZBEQQXLTEKTZBO");
    tmp_tmp_msg_0_2.conditions.assign("SHZLGYACLNYANJPMWWIZXBUURRQWWNJYQMTFVYKNCUNQBHKQFNVTIDILNTUVXWIZCXRXKBYUUOFOKDSCDIPFMRKIIWWPPVGHSLQJHTPFMUCXFEGCBJTKEHHSARHYDDZGPZECFTSZJREBETNXASPYLSYQIESXAKCDISKGLJRVBAFSAMGHAVAYJBMNODXKVAGMWGQLGXLBDZOOTEURIQDMEOOVKEULHFOUVJPTFLRZBQBJPJOWDX");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.9582904711017409;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.7102095066689462;
    tmp_tmp_tmp_msg_0_2_0.z = 0.12405337937388383;
    tmp_tmp_tmp_msg_0_2_0.z_units = 101U;
    tmp_tmp_tmp_msg_0_2_0.radius = 0.8124275783554509;
    tmp_tmp_tmp_msg_0_2_0.duration = 59023U;
    tmp_tmp_tmp_msg_0_2_0.speed = 0.4906669682930165;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 180U;
    tmp_tmp_tmp_msg_0_2_0.custom.assign("ARCAUZPUBXRGOSCITKDHSGYTVGXOEIZKIFHYORSSBZNPYZAAGHEBXIDBZJNHPWMBSWVLVQDTIINELBVCMATKGPYAPVSUPBHTPRIMCTMMOZORYDSESFNLJNXLWNDRNDKGLHQEKTTWLLOMWEFUCQYTKZSDYQQUJCTGJOXFJQFIVEBCQDLKUWLWAQBCNKGMFNOVLARRQZMUVYBDUSPERFWFMHI");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PolygonVertex tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.2624184279852564;
    tmp_tmp_msg_0_3.lon = 0.28700185337068385;
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
    msg.setTimeStamp(0.9516582251740533);
    msg.setSource(46899U);
    msg.setSourceEntity(253U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(5U);
    msg.command = 177U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AOHWJFRMIPFCVEUAIHETZTTWHAKZJNXVGZDBSETNHUFLIHBTVNFGONNBMBRBSXNNQJOPOODFXII");
    tmp_msg_0.description.assign("ETUZIBEPKKRGRMNCOLBMHHHIWDTGTOHBFBBVRGIBDEZELMIYAWGHRFLXSQNWQDCZMOYDINXZSPMHYEZAMJKHLFSWCKGNGBWTVUJJKXAZDYDANUAIVZTXTGZTNXCFDQWUVFVUINJSZ");
    tmp_msg_0.vnamespace.assign("TEIXRHDAWRRBLWEMACN");
    tmp_msg_0.start_man_id.assign("WTUOQZZYICPRIKHFYFORASXYHETCTWEEJFOGYRKVNPQMGAGOPXFCXOLDBRRFCKTVUWDXFCUHYDXVBVANGHSBJCUAFGVEWIBSIBLBDPSPJMTUNUKTUAFNQNZQZAIIWZMVQJJHELFWLLJDFQJYRDESAZXHEBGWNDRXJUGTGZDQSJNNHOKHLDMRKWMAIKOBPEZTQNVEHCPCOKCOLBIMULDLZPPGA");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("ODIYTEZPXSRIBSTWJNWWKCERTWNIWSMLEDOAHLIOZXCTGVQNQSJRFRZPNAHYOYCTGPPURMKOAYGSBGNBIATLGJPXASHQEZDBEIVLNCZBGAGPTUYRUSCRLVXNWYAVDEMLNUDZJDXQFQJHAKMKYUJXXTXVUHSGPEHWBQDLQFBLDGRCDGQXTQWEWLMFLSBCIPKBHEISVOMIJFTUOVZRMFHEYKKFHRVNCVWOMFUANHVJYMUJFPJAKXCOZ");
    tmp_tmp_msg_0_0.dest_man.assign("OMVOFOGQZMUBHQFIDAUSKAUFVJNZJDJMQIAEXOEBRNLPKSNFVPVBXKYPTKSLNQA");
    tmp_tmp_msg_0_0.conditions.assign("OXGEKLIGPDAQUSXQOFMWEJJTBSZQOLWDVWAEVDSHCCTTWKMRJYJUVUXSZJOVTMFZBRBKCPWNMASBQHBRQGNTAZDMYVCKYTRZEHRQIKGNOZOFCFMEIDI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::NavigationReset tmp_tmp_msg_0_1;
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
    msg.setTimeStamp(0.8982013640953969);
    msg.setSource(10880U);
    msg.setSourceEntity(143U);
    msg.setDestination(58626U);
    msg.setDestinationEntity(90U);
    msg.command = 244U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KHHWZGPRTFRNZAAKLSJANZSUCUGBWEBXMYIZSZOTOVDKAJYSYULAMXFPGMOGDWZDURHDDFOMJCLFBIAVPBKPCKAYKHQVNEKTOMFQTVDEVSJPWTXWQAEGILFSRTJKJOWCRRERUPDLAVHORYCBVZUWSQYKDZXIEFIBMNYXUXHWMMGQNCYJQXIFVCZIMTGXBJ");
    tmp_msg_0.description.assign("CWOQJZBIPROZLWFHHKFKPXECXXBLMHFSXPYQOFEUJDINIOWEITHZLPBCMMVNLTKOPZAJFNGURNWYQVOMSYUDUWRHBO");
    tmp_msg_0.vnamespace.assign("CDAGCIPSHOESXYEWASUBUREKWEXJLZ");
    tmp_msg_0.start_man_id.assign("PSFZJHANYQWGPSBXHBGNO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QBOUJFKWSVCFELBCOBVSAMDUFHYPPXOHMFWACAIUFUNEZZRNCTORMRBNXSZAGFEKLGPFDAJRUTTAMOKWSFTTVPTDYRKIEIWVRJHZJBQYIVEQKCKDELXTRUGLOGMXDXEDFNCLLJICRGJHIULMQBLVCIPMKDCXGGGSAHNYOZRTNQWHOQDWCKJTHAQMYWSVDVLHIJZAWPZKBXOPPDBYZOGUTVYEWPNHQZMAYZUELSQSYVXGIBRBKQPFXHMNIYSJW");
    tmp_tmp_msg_0_0.dest_man.assign("GHWVXGIJLXJUTZAHGJOHMNWFIRDPMZIMVTARZGZJBICMEDTHXGVNJLXWZKBFNAXFDACGMWSNUKGJPLPHQDITYQMEKWUUAROVMUEGXSKBHQSBUBCQAFPOLBRN");
    tmp_tmp_msg_0_0.conditions.assign("MZVHLHAKJAKBAPRFXBOJUFCZTFSGUEOHRRYSKWJCIYMNVFCSKKYIMUPCNWZNTLTXGYADTFQXUNN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::QueryEntityState tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ControlParcel tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.p = 0.5107962272690073;
    tmp_tmp_msg_0_2.i = 0.6971980399374006;
    tmp_tmp_msg_0_2.d = 0.8778109890027923;
    tmp_tmp_msg_0_2.a = 0.045247055825068716;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.6620182877906647);
    msg.setSource(17876U);
    msg.setSourceEntity(254U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(192U);
    msg.state = 17U;
    msg.plan_id.assign("KSZJWLYPTDGCNZWPDVLWWRPCCFLSFBXUTANDVKWQAVQENEMIPMQJRDRPEHSKITOCCPMAIONICWAGMNQYVSYJRJWEDOUDLRUWADVYNSBCVQJGFJZFXHZROIUEYLKAQCKUEE");
    msg.comm_level = 247U;

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
    msg.setTimeStamp(0.07627987696980265);
    msg.setSource(6241U);
    msg.setSourceEntity(132U);
    msg.setDestination(39161U);
    msg.setDestinationEntity(86U);
    msg.state = 92U;
    msg.plan_id.assign("JEXTXIWMMWVNN");
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
    msg.setTimeStamp(0.662059005929456);
    msg.setSource(63314U);
    msg.setSourceEntity(82U);
    msg.setDestination(22568U);
    msg.setDestinationEntity(21U);
    msg.state = 171U;
    msg.plan_id.assign("OOQCAGIPQHUUPJURYZXKXZBMRDMGVBSIXBNOUEEYSQHOFZBE");
    msg.comm_level = 112U;

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
    msg.setTimeStamp(0.8796379546788018);
    msg.setSource(49015U);
    msg.setSourceEntity(207U);
    msg.setDestination(43937U);
    msg.setDestinationEntity(217U);
    msg.type = 169U;
    msg.op = 0U;
    msg.request_id = 65509U;
    msg.plan_id.assign("OQRZUNYKBPMUTJQQLJNEVZMQUDTKVJABBAGCEKTLVZDGPTGSRZOGYUMHXHHJNXOSMURQLIOPIDFIWHWKPANASXRLBQSYJCFGPPXAIRSHTMJYTGUTPWCNJCEFGIOJBEYTLCCEBHSV");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 117U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("XUHZRGWXLXJZZPGLKQFJMBRDIJQXCWKGIFCNLTOHPBQNTMYRMWACWATZNYYTIYYOWJKFARJKSQEGSYFHENLWRBBLKVMHEPEVMVVIUJOIXBSQWTOCRJVEKXCAQEPGBSEMMVHWGLSNUUNFWMKJKAZQQNIHIBULZGGFTSDKXUO");
    tmp_tmp_msg_0_0.description.assign("QNMZETBVZSG");
    tmp_tmp_msg_0_0.vnamespace.assign("VYCYPVORLBHSARJFOIDCNWGXPMTJLPDLNITZDUIETEAFEFMJOSBIKMCYHLSUGYOWILRBENYQRJSGCJHZLOMIVBMSVZWHBJVGVFIABMPTOPUHLBTZPAFGOVPTQMTNXAGJWSMKSKPKCOYGQ");
    tmp_tmp_msg_0_0.start_man_id.assign("YACXLYCPUJFHHXNRVDIRGUCVBTEZIMBLVFIALEFZAUPXEOHIGWYXONRMKEKHTLGOWPEAPBRSXDCLGKYOUWUNFCOKTQDLMTBBQSPBVSUXTDBPKFWBWNAJUTCIKFEOESCDFZHWIJWJAJQEYOPUWPFSDZQCMVZNZ");
    IMC::SetThrusterActuation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 122U;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7655234352260795;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GZTCCLMLZFREHZORAUSTNPPULUNZZVDCGLJXIJORRYDIIFDOQLCWETUTRWHBYDHKDEJNHEQKZINZYPPIVQOJVYKZDQVUSMWGI");

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
    msg.setTimeStamp(0.16823508739501425);
    msg.setSource(12917U);
    msg.setSourceEntity(253U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(37U);
    msg.type = 66U;
    msg.op = 60U;
    msg.request_id = 64680U;
    msg.plan_id.assign("IWJWZJUIJMZXDRYNEKXIVQBMXWIUPZMLDNVDJBVPKAQFHNWDOXIOSZAXRJOKGLSKNXBYTRMDBFUGZEMPQAPVEQSQZCRCGTRKOXUFAWHBHGLPKVS");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5016491044661281;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FYCTSCNPJTDPFGOFWLAYPBIWVOZJWXSIGUEVWNFXHKUMLSGYVZDDDJIUAZACLIHMGGXYZKWYPCBORGEMULFBRHNNFMVNDYYWWFDSPOQXMCNEZEEKCZUOEBFDAVWNXKKBKTOKDERHIIITHASRFUWXQTCXROQEOYCBSTUXGRBUZEMRMI");

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
    msg.setTimeStamp(0.5867586999397872);
    msg.setSource(37854U);
    msg.setSourceEntity(197U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(235U);
    msg.type = 171U;
    msg.op = 99U;
    msg.request_id = 23888U;
    msg.plan_id.assign("GPNLGUONYNPGRVNQKQVJURCCBPHMXQFWDVLVBEREKJUWFACYDHDOHTRIKMOPUYWKMJBNPQLKSWQUDNIZSSLBXAKAARIGLFXIBTMJRMZPHZQDRMZEQXCYVATFGJMXSIZYWCIZJRPCXIPSUOWGFTDTDAZOFVVTLHQEUJOVNNPEDOOIGKOKGOWABYILFSMESQZXXEJEHEVTVXSCTUCCLRBUKJHCZYATWLLDTENAAFFSBYUKHSWPMXBJM");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 39U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TXBMMOAKGPBAMJHE");

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
    msg.setTimeStamp(0.15202944014401865);
    msg.setSource(26455U);
    msg.setSourceEntity(127U);
    msg.setDestination(4497U);
    msg.setDestinationEntity(91U);
    msg.plan_count = 14856U;
    msg.plan_size = 3682449359U;
    msg.change_time = 0.530327605455933;
    msg.change_sid = 23201U;
    msg.change_sname.assign("NBQWCBONIDAYGOJTEHQYOMYJ");
    const char tmp_msg_0[] = {-1, 83, -122, -83, -51, -112, -33, -72, 78, 79, -22, -30, 16, 30};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KQWQLDRFRJHAEUEVVTZWBNZDCEKGOUYUPDHLBKSVJFTSVVGYMYJINOYTXBINAWUDRGCNXKEVADGYSRTKISHMSOPZOUNPLLUAPAWGEXKAQQRACSCXNZFFBZLJBBHXYPPUBJILKBNJZXOCWOJNSGQOQFWNAYDMYEWZQWRXVGFPLVILFVFBHUSOXDMIMGPBAMCQRZRQOJSOCEYG");
    tmp_msg_1.plan_size = 14901U;
    tmp_msg_1.change_time = 0.10617839128014928;
    tmp_msg_1.change_sid = 62778U;
    tmp_msg_1.change_sname.assign("KAQVFQPIBMRYYTJXWKFVNQEQZNOHIENFAMMSALXDGXPCHVEBEMBQLFWRXLLIGKBSBUKIHJQXBIJVGCWWATMPFIBFOLVBGDVNPUNYLHUTTABUNYNHYRUCCUHGSKEIDSGOCSKHHZZ");
    const char tmp_tmp_msg_1_0[] = {123, 111, -68, -93, 52, 122, -126, 118, 57, 32, -26, 1, 1, -51, 11, 24, 64, 11, 28, -73, -95, 21, -83, 49, -33};
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
    msg.setTimeStamp(0.623915124885026);
    msg.setSource(2151U);
    msg.setSourceEntity(85U);
    msg.setDestination(27788U);
    msg.setDestinationEntity(184U);
    msg.plan_count = 28636U;
    msg.plan_size = 2072808532U;
    msg.change_time = 0.30972184102163014;
    msg.change_sid = 63520U;
    msg.change_sname.assign("TSNWXQCQTTXYMQBPUPASHSFZOGEIQVAEIZHZVQBARKEBGZRNJRLUYGFSJCUEUMDXRNYOFKVBEGGGMYNWQWOEXBZNDKDRPPHCHWUUXJIUSECAFNVQGJKATHDBPTWOIZYSNYCLMLZYXDRKIVVIOGPSTLBAMPTZNLKQTFXBTOUOKDFORWHGNCDMBZZFCXXOKR");
    const char tmp_msg_0[] = {107, 25, 60, 71, -88, -70, -124, -26, -86, 76, 51, -17, 48, -47, 36, -25, 25, -18, -71, -32, 115, 47, -31, -52, -126, -87, -7, 68, 44, -78, 110, -32, -66, 71, 18, 85, -25, -61, -30, 109, -112, 33, 82, -68, 126, -28, 40, -117, -70, 105, 14, 62, 22, -88, 52, 58, -77, 61, -62, -65, -37, 63, 94, -94, 124, -85, -66, -114, -104, -11, 3, 5, -35, -58, -64, -42, -81, 81, 77, 7, 86, 88, 62, 67, 82, -111, -119, -83, 25, 9, 89, 32, 9, -39, -103, -127, 79, 55, -2, -113, -73, -109, -80, -28, 66, 36, -67, -34, 11, -70, -104, -89, -80, -124, -106, 0, -73, -14, -73, 17, -121, 44, 11, -113, 70, -40, 115, -24, -126, 103, 121, -55, 62, -116, -51, 28, 101, 74, 47, 61, 75, 33, 125, -29, 4, 13, -17, -91, 2, -83, 46, 42, 123, -39, 32, 9, 114, -95, -4, 59, -6, -15};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HRIUERWTLGCMDXRVG");
    tmp_msg_1.plan_size = 49214U;
    tmp_msg_1.change_time = 0.948209636332553;
    tmp_msg_1.change_sid = 61638U;
    tmp_msg_1.change_sname.assign("JLGTPVZJUBMQPCPKHBAWBBAKKGEGSZPUKAEKQOZDBEMLFODRCKSNNTIWXYJGLXLCTISXVAYVPMEVJAWFERMVVIQWGHVWNXGIOQHDH");
    const char tmp_tmp_msg_1_0[] = {-22, 108, -98, -47, 47, 42, -122, -103, 55, -84, 36, 88, -52, 31, -58, -82, -21, 49, 98, -125, 16, -50, -17, 34, 30, 106, -69, 107, 39, -55, 107, -62, 46, 107, -99, -14, 86, -71, -39, 57, 33, 8, 68, -92, -75, -99, -89, -71, -14, 27, -94, 121, -58, -16, 112, -70, -31, 54, -88, -109, 75, 93, 92, 82, -61, -7, -82, 82, 82, -115, 79, 80, -18, -100, -110, 35, -105, 70, -105, 22, 74, -8, -85, -67, -65, 62, -70, 96, 51, -95, -121, -93, -17, 60, -29, -16, -115, -117, 52, -20, 76, -81, 13, -30, -13, 89, 111, 120, -80, 99, -107, 21, 4, -74, -31, -81, 82};
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
    msg.setTimeStamp(0.25295821898038184);
    msg.setSource(11059U);
    msg.setSourceEntity(108U);
    msg.setDestination(61465U);
    msg.setDestinationEntity(123U);
    msg.plan_count = 27608U;
    msg.plan_size = 972795823U;
    msg.change_time = 0.3089788135026865;
    msg.change_sid = 6124U;
    msg.change_sname.assign("MSTLMIWPPUWXPLTZZVKJDHNDSOOZSFHSINGUVGEXWPKLUFOTXCXJOBECYAXASYYIPTHTRJFSIYUYNZTRMLXRXVVNHWBQAHUAIRQRDVFQJUEFUUUKQNRJCZYXDQQAGCWKTKLGHEWTVQWHXZECGCKBDDMETNJNZIHMTSISBXMJLDGBJFSNRVHBKRYKBPMWRPLZIOENGBMRIODAYQLFCGJSCBFUKWGHAELDGMOPLVVYPAZECVMDNZOWPOFOYAAJB");
    const char tmp_msg_0[] = {-61, -39, 30, -124, 124, -103, 34, 114, 79, 22, 26, -14, -33, 28, -6, 87, -18, 92, 8, 1, -20, -123, -61, -101, -70, -40, 69, -34, -57, 40, 57, -125, -79, -15, -76, 12, -128, 91, -90, 14, 59, 95, -46, 9, 86, -86, -65, -3, -25, 76, -95, -64, -19, 87, 49, -10, 17, -51, 97, -15, 70, -40, 4, 72, -39, -2, -96, 125, -83, 113, -69, -59, -30, 103, -3, 106, 7, -101, -116, -92, 60, -35, 77, 126, -42, 114, 25, 44, 63, 103, 94, -96, 38, -117, -11, -60, 96, -47, -48, 105, -10, 111, 98, -128, 123, 70, 41, -127, -97, 2, 64, -127, -44, 122, -31, -58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UECUBCHHGXSLDGDTJGLGZRVHJHLWFPECXFNWIQABLNBOLPVSJKUKQXHAJCYXJTXWKPIVVZHEMIHALBTVEHFEQVGDQANLUVTQUPNZJKWDYQIODACJMJBSBDONWMOTRZWALPRKDJHTYQYDMGKWRVTSAEEYWSMXKQZBFDIUCDFUUNCZRE");
    tmp_msg_1.plan_size = 24057U;
    tmp_msg_1.change_time = 0.378613920830986;
    tmp_msg_1.change_sid = 55146U;
    tmp_msg_1.change_sname.assign("MSDGGFDCHHWDEZLDMRYAUEHHAZZLJOYDBFWPOCGCZXMOALTZAATBXALGBIHCDYMLBXPYSMWJSUKWLHQUIBSVJKRTDVYHHCINFEUYFPWGJFIRXSUMOVXFNRFROLCQWIMAVCYFZEWQGOLTTOXNEQCPIQQUJDJNBMXLXZKUIKYEJVTPWIOFZKKGASXJBEOPXJUFBRUTNUAPHBVZLSMZNSSPKDNRJVOE");
    const char tmp_tmp_msg_1_0[] = {-47, -35, -73, -28, 105, 118, -62, -38, 115, -68, -121, -61, -21, 75, -40, -1, 49, -125, -128, -16, 37, -126, -16, -85, -78, -124, 110, 90, 46, -25, -95, 87, 89, -104, 24, 79, 44, 12, -76, 99, 65, 45, 91, 63, -95, -70, -104, -104, 5, 56, -74, 107, -114, -80, 53, 45, -26, 65, 81, -111, 92, -13, -49, 96, -69, -94, 23, -57, -60, -80, -26, 14, 118, -19, -121, 120, 118, -24, 64, -70, 103, -53, -6, 117, 120, -91, 75, 117, -114, -96, 122, 52, -118, 93, -115, -123, 45, -85, 67, -66, -44, -9, -70, 110, 29};
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
    msg.setTimeStamp(0.6050352577938958);
    msg.setSource(6836U);
    msg.setSourceEntity(177U);
    msg.setDestination(39307U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("UNZDFIVKIMXBTRWVQOEGOCYVGDLTILQNXCPKSYMAGFRDZIREOGHXJABJPQD");
    msg.plan_size = 44141U;
    msg.change_time = 0.4869628617570495;
    msg.change_sid = 17283U;
    msg.change_sname.assign("YYKSTZROCJXBZKVCWRGUGBKULFJUHYABMXUKLLGDQFIOWJEWJIQWYKCOMZOMQXJCHKSPFDNLWISAPWLQRAVYVOZIDMCE");
    const char tmp_msg_0[] = {109, 31, -106, -68, -89, -65, 123, 94, -5, 81, -128, -33, 104, 91, -77, 25, -113, -125, 120, 14, 94, 112, 115, 70, 43, -84, 46, -12, 32, -58, -65, 118, -127, -126, 27, 6, -128, 120, -120, 124, -16, -95, -111, 103, -113, -111, -101, 39, -7, -24, 62, 29, 68, -8, -82, 118, 126, -128, -59, 51, -108, -44, -51, -78, 112, -32, 56, -12, -105, 14, -90};
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
    msg.setTimeStamp(0.5157900654044715);
    msg.setSource(4071U);
    msg.setSourceEntity(148U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(252U);
    msg.plan_id.assign("BBHSZYTFGPTTBLAETDVDQMLIXXZSCTLDRYLNGYPWBRGHKNDFYXGEDKVVZUCIVOEDSKZOUXBFGBGGBKLYAQJNUIJQZAMJVWTIONZHXPXTNOZSETTITUWHUOYEJSAMSFWUJZEJSAXIF");
    msg.plan_size = 18290U;
    msg.change_time = 0.38312562939358064;
    msg.change_sid = 47771U;
    msg.change_sname.assign("MBSQPYYOUSXOJNADBWBZASCKGPLCIYEGQAGXJZGINYHTMHDP");
    const char tmp_msg_0[] = {-106, 71, 40, -66, -76, 105, -59, 120, 28, -37, 112, -8, 91, -128, 95, -77, -66, 56, -14, 43, 45, 17, 8, -28, -28, 29, -18, 69, -114, 58, 68, 58, -86, -5, -2, 39, 58, 70, -126, -120, 29, -11, 81, 91, -35, 86, -82, -119, -96, -114, -81, 22, -5, 29, -76, -74, 36, -75, -75, 15, 118, 107, -47, -7, -116, -105, 28, -72, -1, 35, 91, -106, 51, -13, -23, 88, -115, 46, 73, -95, -54, 23, -11, 113, 126, 17, -108, 107, -37, 57, 79, -76, -5, 78, -44, 10, -36, -17, 39, 122, 125, 99, -59, 67, 12, 21, 107, 99, -118, 42, 111, 57, -60, 121, -41, -75, 118, 27, 86, -80, -80, 124, -32, 76, -47, -128, -13, -62, -119, -61, -102, -83, -120, -52, -32, 2, -116, 36, -60, 89, -65, 80, -84, 80, 40, 27, -97, -52, 54, 45, -73, 65, -53, 66, 12, -33, -95, -96, -95, -108, -35, -31, -47, 39, 59, 2, -39, -72, 83, -29, 13, -112, -45, 109, -75, 7, 47, 52, -111, 99, 125, 15, 58};
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
    msg.setTimeStamp(0.12063680223906859);
    msg.setSource(13805U);
    msg.setSourceEntity(229U);
    msg.setDestination(18232U);
    msg.setDestinationEntity(134U);
    msg.plan_id.assign("CFFUCIOVOFTCZCJUAOXAEDHQIMXNSNOHADUDTAAVRTIWIYCWBRANDHPHFKWJIZGKFVAJCLVJVJDMHDKBYJTQQTXQQRZEZVTYCRWOGLALRGUZDYOYBYXUJHRGDD");
    msg.plan_size = 8066U;
    msg.change_time = 0.6609542783077742;
    msg.change_sid = 3991U;
    msg.change_sname.assign("WZRFCXDAVHNUCNHYKBDXCIRTYWIAJIOIQWIFIMXMVOJPSQZJDHATCSMBTJZOXBPCQCPAWNYZIZDLQBFWZWPMWVQYGXNSHTFKLSPQGUDVPDYVQGQCSOVTOWILMKMMZFDSGHXGREFEEEROEULAMCBTUACHGHUAUZURRLVQDNMROGQEATYOPOFUWTUHMUTVA");
    const char tmp_msg_0[] = {37, 46, -88, 74, 66, -57, 53, 37, 4, -4, 63, 32, 105, -106, -25, 33, -16, -128, -116, -40, 120, -126, 101, 75, 8, -53, 33, 89, -18, -23, 97, -36, 31, -60, -36, 16, 48, 12, -68, -29, 12, 33, -46, 91, 72, 77, 78, 31, 56, -94, 10, 87, -2, 21, -34, -115, 22, -7, 92, -75, -118, 73, 90, 118, 55, 118, -22, -124, 60, -123, -1, -88, 79, 57, -86, -127, 84, -84, -23, 78, 52, -48, 97, -63, 114, -127, -37, -71, -31, 50, -22, -78, 117, -122, -31, -77, 119, -2, 65, 77, 6, 80, -82, -18, 27, -114, 83, 17, 8, 59, 125, 123, 82, -68, -76, -101, -114, 20, 119, -91, -109, -40, -85, -67, 8, 40, -49, -23, -102, 3, -24, -42, -102, 72, 73, 108, -100, -2, -79, -8, 76, 70, 20, 108, -112, 5, -25, 24, 33, -123, -124, -44, 67, -88, 81, -5, -115, -45, 16, -109, 109, -1, 44, 96, 52, -7, 60, -54, 64, -55, -125, 13, -77, -56, 88, 54, -48, 121, -47, -94, -58, -2, 1, -53};
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
    msg.setTimeStamp(0.09599704659951991);
    msg.setSource(32896U);
    msg.setSourceEntity(32U);
    msg.setDestination(16885U);
    msg.setDestinationEntity(148U);
    msg.type = 179U;
    msg.op = 221U;
    msg.request_id = 6793U;
    msg.plan_id.assign("XAOBERAPJXGWMBFW");
    msg.flags = 7508U;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 49U;
    tmp_msg_0.quality = 128U;
    tmp_msg_0.reps = 75U;
    tmp_msg_0.tsize = 42U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OBPGTXGWRPMBDOQOQYYMJMWEAKUOLTVZVXDQIOBBZULQRGRTSLYIANRFLNQRSOWPIRBUTNPXCZLWOSSZEZNDIRZZXFSUFHNJCXOABXNAGKGEWDUXVWXP");

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
    msg.setTimeStamp(0.503446019753441);
    msg.setSource(1748U);
    msg.setSourceEntity(95U);
    msg.setDestination(23886U);
    msg.setDestinationEntity(239U);
    msg.type = 189U;
    msg.op = 58U;
    msg.request_id = 57622U;
    msg.plan_id.assign("ZRMMKJZSRTWSOHUAMEXCMEJRQFGEDZCCAYNKEKIUDFZRSQQAPDPPXVCRCUSIORSVTQKQAFALGXCJARVPYZEVLNHEJRZXBABJW");
    msg.flags = 13085U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 233U;
    tmp_msg_0.op = 152U;
    tmp_msg_0.request_id = 42320U;
    tmp_msg_0.plan_id.assign("HUPKUCEQFKZOOORAOYJHOASFJIKGAMOLHFMGBMCVNIQZYYRZZIEKULSGBYZGHLWRIJLVYKJFYFAUNRAPAVWTWJTWTBSUPDJWOEMPSQJYNCNTKWNERTPNSDVRDUTEJRXKRCQZFXXK");
    IMC::Pressure tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.11018244783368147;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("SGNODUTHEIRNDWWSGNZPQEYKYOYEJSUIPIVBHHGWRLUNRZEXGLXSMQTQIMXTZVGCBFURMZFLAKKGVJECDYRGQOEFDLCICTHXDYBLQATJTCBCQXHDKNOTHFSWVPJOLBOELPNVKQSQQUNRHZBFXJXWAHWGTGRVPWSIARNBHZICMOFAPZAXMSASEJKZIWULKRDYVVDXDJKZMRPKNNCFBAOYBLFZYBQFXKJOPPDJVMY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QDGMOFMKVTLQXXBCLGYWKPZUBOOXXMKWTEPAVYFOPMUYLCURLVHMRLCHFRRAWGBJ");

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
    msg.setTimeStamp(0.6282499270289491);
    msg.setSource(35514U);
    msg.setSourceEntity(157U);
    msg.setDestination(2623U);
    msg.setDestinationEntity(138U);
    msg.type = 105U;
    msg.op = 52U;
    msg.request_id = 45819U;
    msg.plan_id.assign("IXDCKANZSJNEUNDKBEJHQDSQOASGJLZLJAOWXGJZIPUSHWQTOWHXLUTZPWRCVBUETFBVSADYDHTUOBOHLOMYPKZQUOSEYGJAEFZIYJXTKRWVGHOPJELPKTLYUBAWVBXJCPXNADKILVGCRUIQGJGVWUSV");
    msg.flags = 21683U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 26U;
    tmp_msg_0.eta = 28096U;
    tmp_msg_0.info.assign("FVDLAPENUZLKKGSRZZONKYQINWYTUTKXJTIHGXJD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EJDBSLZMIHRJV");

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
    msg.setTimeStamp(0.9868327895100623);
    msg.setSource(44134U);
    msg.setSourceEntity(248U);
    msg.setDestination(65203U);
    msg.setDestinationEntity(103U);
    msg.state = 221U;
    msg.plan_id.assign("GWWMFBQSQWCXJQCZAKOVZOWWIRLACTGHIPOVNKJSMHKAEFENIHMAJYCSKPPXZVPTHLCQAJLMEDICOIKIKVKXSGNAHEKZICVRSOYBBVIPLUJGGJAUXMUERUNDEBOFLYYDOFZSTCXRRUTFFHYFDOGBWWJRCMRTEQZTNLZDDSFSPQJYQLHNHKRUGOSTPQYLVUXGUYWRQPWGADNGLTNMXVBIKN");
    msg.plan_eta = 481384262;
    msg.plan_progress = 0.7370818854286938;
    msg.man_id.assign("IUESARBQYTUESKMOTUYDJBMYNPCGDILAXUPGQLPUMLAIEZTMMZGWIDUCDXTTSTUQPKWLPXTKJIRRGOCZYEYZDNQJSDAOAEJLRVFJFRIQWFHEHKIHNFBANBCYCHWXFVPNXYFRFJPLVKJNLSBYNHBMAGOVTKVMXDDGKZQSRWVK");
    msg.man_type = 38925U;
    msg.man_eta = -1106450792;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.18054016220483826);
    msg.setSource(19752U);
    msg.setSourceEntity(197U);
    msg.setDestination(34607U);
    msg.setDestinationEntity(60U);
    msg.state = 119U;
    msg.plan_id.assign("VHYNBUDPHGYXVXEVNYFQPKKMQNYZUULUQHHSTCJGTSROKZBPVQCVSIAPLWVPUZSIRSCDIYL");
    msg.plan_eta = -1255116926;
    msg.plan_progress = 0.30080681166407963;
    msg.man_id.assign("TBGQZIPLAKMBVNALEGQXOYWRMOHTGGYEWGRXAVJURKUFLBHSISFIELKAXXRFNNICPFSKMHXMGWVDZTVNHNPWHNAZISSWNJQWRJCHDDPEFESMGBWUAJZHOZXTUBBXMFYORPKBTLRZVPRLMHSDXFDIYCWEFEVNYQZYDCMBCYLHUATCGPPOEIQQLPGDXTKGCSUZQJWVRUKJBZFZIOVH");
    msg.man_type = 56199U;
    msg.man_eta = 2052178346;
    msg.last_outcome = 5U;

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
    msg.setTimeStamp(0.8970926942608755);
    msg.setSource(11283U);
    msg.setSourceEntity(95U);
    msg.setDestination(51492U);
    msg.setDestinationEntity(79U);
    msg.state = 110U;
    msg.plan_id.assign("CUVFHADIDUFIYBECLKLDBVZQMTNKBEWFYOWDMRRSWEDNGZNLJHKXVWFKOXXEPZEFPXVVHPDCCQYUPLGKPTUKJDMLSOFWFHWOLTHMSVJKUYIHADVSKGNIGXRXTLSHYXHQQSAJVRBOMSJMMUIOZBBZMMASWVRFWFJULTKHNPERJTTXBITAGJAEOJGERLZQVMUCYDALWJCIOFAPZSNYUCDPZXCRGBQTENPXTRCQHAKEOCPQNAZYZGRQGWGYBOQYI");
    msg.plan_eta = 1888282582;
    msg.plan_progress = 0.7837820625384766;
    msg.man_id.assign("EUDLXQHQGVJNTFTJRILYTSVNZDDLGOMPSTQEJUXKLINGYZYFLJDIBVFBUEOMECUQYHLNMNZRTFUIBXKWVBSDPIRWREGCPKRWMJELZVSSZOTTAQGOGUMCWKYFAUHFJCYCXEDAMXVKFUTQWDOLPLBWQREXYDPBCKMKPYWZZQI");
    msg.man_type = 10493U;
    msg.man_eta = -1877276514;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.5531808650152142);
    msg.setSource(6770U);
    msg.setSourceEntity(238U);
    msg.setDestination(19755U);
    msg.setDestinationEntity(36U);
    msg.name.assign("CPZNARTPXQJSTPUGDYKTBRTKDQVUQJLOZFTUSODNHPRUDNNPMSLEHCMTEGRDNFAWBWAPBXNKLGYGRCFBKGXWOBMONZXVHUKSWHJJUGOQUGNXASEUVFGVWAEDQFTRFRGEDKTQLXSJ");
    msg.value.assign("AKEUZMJBIPAUTHJEWZNOQURLCNIUTODDMGTLYBQWFBUMPVRZOSWFLEZWLFGCSGRMRSTKQBBMKPQNNVHXJYVMIQTFBKCGTQWHOBVAPYSVYHCGPPJZSKDOKGTUUSBRXXANCFFNSOZC");
    msg.type = 13U;
    msg.access = 0U;

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
    msg.setTimeStamp(0.16228853484436767);
    msg.setSource(6408U);
    msg.setSourceEntity(123U);
    msg.setDestination(4398U);
    msg.setDestinationEntity(8U);
    msg.name.assign("KGDZVTEXSWNVRIBDDMFKSRXJPOACABLYGZDYQBUVKBNJNFXJBVLCPAQRQZRVWYGOSSNXPGUZRVACUIUXWWEYTURHCUZEOALTIYUFDCSARCKJGKEPKWQLHFSHWVXXYGZKIMICETLMOHWAOTFFHFLYYABJKWZGDGNLRTHAQZEDDGMMZBMGSNHDVJHMTKIEOUDSOBFEINOSITXXLJMXJJYMHTPZEPQK");
    msg.value.assign("EUPMRXPIWZVRCYZXNIJQAJBCHUDVYJLWWMHAQPPUROWHWPUAGFZXHVGPSEOBLKJBUNWKKFZNBRUYIFTYRSRECHBCENTBKGURBMVQIKQPMCAIXZJKUHLQIHZOQGDFVYQASSRQEWTTNVPZNAVYVHLGVFMQTGXXYFMDDFVKKEMWBJGFTNNAXHXNAEIZCYESJRCYCSOOLJETKDBYOIOULWWTODNICRKMUHZLL");
    msg.type = 147U;
    msg.access = 45U;

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
    msg.setTimeStamp(0.45463272217050354);
    msg.setSource(1153U);
    msg.setSourceEntity(56U);
    msg.setDestination(50464U);
    msg.setDestinationEntity(160U);
    msg.name.assign("GKSUQGPPUNCCBSFJSUOMJJKAOEOKPGAMESBHKBJEFSHJLJKLZYSCNXT");
    msg.value.assign("CIALNBXKHRREHIQWZHUYPJFWJIXCNUMSRMPWOFMXTMJHNKTDJJKEUSMLZKQLMCDSPDTVIXFEXUASVTGGCTQVCZIQJVEOKGVNTXZGQJFDGNBISHPAVEBFPTOSLQDYEGFUNUXPZJMMNPKNJOREDWWWOALTEGLYZBROKPDVFHRFAFVUUWQLGTYMGC");
    msg.type = 165U;
    msg.access = 175U;

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
    msg.setTimeStamp(0.2818961305624491);
    msg.setSource(5968U);
    msg.setSourceEntity(183U);
    msg.setDestination(32392U);
    msg.setDestinationEntity(150U);
    msg.cmd = 89U;
    msg.op = 112U;
    msg.plan_id.assign("DGRBYTMBWCXKPDWUMBUHAEWZJVODAZYCDUDFJZARNAUWQTWYTX");
    msg.params.assign("XXCEWNNQWSXKRIJWLADYESFNEKAIUVXNSTTLGDKMISIZVVOUHCBHWGIBYQTFRKBOKFX");

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
    msg.setTimeStamp(0.6949869553140534);
    msg.setSource(27778U);
    msg.setSourceEntity(133U);
    msg.setDestination(55672U);
    msg.setDestinationEntity(106U);
    msg.cmd = 77U;
    msg.op = 62U;
    msg.plan_id.assign("SBQCWZZZURSKZVREWWIPQIAYIHANDYRRIDFOOOUOQTCUJYJJJKYDVLKNOKXDQLZFSCHBMXTB");
    msg.params.assign("QGVDJIJRDUAYPRIZVSERSGAWUAHW");

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
    msg.setTimeStamp(0.4450787255957188);
    msg.setSource(57452U);
    msg.setSourceEntity(35U);
    msg.setDestination(60253U);
    msg.setDestinationEntity(38U);
    msg.cmd = 214U;
    msg.op = 190U;
    msg.plan_id.assign("THTOJEFCXLUOHAHSRFNSODJGLIBCTFGTEFZBROYCLMFQPBXADNOXYIWXDTOELJQXYYGRXPIQOVCCIVPDNUKPHBEUANRCYAERPNQTJRDRCWM");
    msg.params.assign("WGSQBZOXFGKCPZRRGQ");

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
    msg.setTimeStamp(0.27034013766342857);
    msg.setSource(44579U);
    msg.setSourceEntity(95U);
    msg.setDestination(37986U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.8692461658203914;
    msg.lon = 0.8414010568561433;
    msg.depth = 0.21375414191259712;
    msg.roll = 0.5136038705909857;
    msg.pitch = 0.9714792086544506;
    msg.yaw = 0.929120471370243;
    msg.rcp_time = 0.21908395031199934;
    msg.sid.assign("MZBLSDTOUQILHMDVZAIKDTFNZVZFKSSAVTTBWLPGQZBJBMHWTUU");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.47807907098943414);
    msg.setSource(41859U);
    msg.setSourceEntity(125U);
    msg.setDestination(43221U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.8060726251529986;
    msg.lon = 0.9305183686605883;
    msg.depth = 0.14876173134216075;
    msg.roll = 0.13914279342316427;
    msg.pitch = 0.520198123648058;
    msg.yaw = 0.7407084353523705;
    msg.rcp_time = 0.6055706679537772;
    msg.sid.assign("YPJUHDCAWWHZERNKKXEAGJDOOCN");
    msg.s_type = 208U;

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
    msg.setTimeStamp(0.25782569674780975);
    msg.setSource(9327U);
    msg.setSourceEntity(29U);
    msg.setDestination(4322U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.8051867611365142;
    msg.lon = 0.21159456784318076;
    msg.depth = 0.4203623571252645;
    msg.roll = 0.5614130860292573;
    msg.pitch = 0.056572782207623185;
    msg.yaw = 0.24387068334805584;
    msg.rcp_time = 0.7158078497272428;
    msg.sid.assign("GTIUTYVIKFDGOAJYSDUJPNSZHLVXEXRVKTDCDYONDLXXHWUVGXQFFUKAHUPJMVFPCIHQQBYJHLSNCVLMC");
    msg.s_type = 107U;

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
    msg.setTimeStamp(0.13463504526887682);
    msg.setSource(28354U);
    msg.setSourceEntity(188U);
    msg.setDestination(59931U);
    msg.setDestinationEntity(74U);
    msg.id.assign("BURIUYLTSWMBCUIEZAVJTNGAPWRPVVYXZBWDTNCJJQRWZPFJPHYWSISELQRLNIHDDEUTHFNGAJJUHPLAGKPOVBFXDAWKUOZPOYVEOIFXMLRQQBKLVUYTANNMXZINBNQEDLQYEZGHAI");
    msg.sensor_class.assign("DTJBLFBJTNCYGOGJNYMRGVQPUZFMNNIWXKJVSMOJEMU");
    msg.lat = 0.47716133076004974;
    msg.lon = 0.6643253278714844;
    msg.alt = 0.939746322164614;
    msg.heading = 0.7232932723812409;
    msg.data.assign("WYNNEQIJVPRZMWZDGTMRAPHRFGHXNLOQRDHTNMOVCJYVAQEMBZKGFZZYFCRMKHQULHLVQCPNGGCALNOREDBNXSASBYWXIFFAOFILTPUVAREZIEFJEJC");

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
    msg.setTimeStamp(0.20644319749330275);
    msg.setSource(10457U);
    msg.setSourceEntity(10U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(219U);
    msg.id.assign("JYTFOUCLCTYRFIQKMTWEPWLQKPNSNZPYTMRAHBJIKRIEVTINBGQMXDFCODAYEEEWPDWHURKCPGOIYZZTVUAGXQQJHFVLAEDDXIUPADJZVFJIULNJMRWENHGVLDNYBV");
    msg.sensor_class.assign("GDWRHLHYTRLZXEENKPJBHOCGR");
    msg.lat = 0.9147348791849997;
    msg.lon = 0.09695630867979876;
    msg.alt = 0.33587843168234166;
    msg.heading = 0.3464756283173872;
    msg.data.assign("XEPVBUSUKQXAMXSTSJKRQBTQEHWLHTJYDRWJFDLLKFDGTKMNBKDOSCEKTGICBCBEMUFYHGFIZPCHRHBCIQLLTCI");

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
    msg.setTimeStamp(0.005146031903777271);
    msg.setSource(5693U);
    msg.setSourceEntity(200U);
    msg.setDestination(56842U);
    msg.setDestinationEntity(16U);
    msg.id.assign("MSVRTNQQIDAMHSZFRABQWXWCMXPDTNIKEPPYHMCUHJXCZBSNKXRORQERNEFHBPWNYMQOZIYQWSUBDPDXDYNFLYIWIPHGUTXBGCXVTXCMXEQEVDAF");
    msg.sensor_class.assign("HJPOAMVMDBYTJEWEBHRQUYVXRKRVCJIDSQQGYVWUHJFQENVDKVFAZMCDDUMYZJHUNSHZTSFIHGMXDAUYUZINKHLFDFPKORFLXGLAXLCNSLTSOGVPGZVNZMEEJSWRUBSTLZELXEKGUKDTZABHWOXRMOQAACXCHAGCWTWPIRILNNTPFBJBDIIOSQUYRWPMZJMWAUNBWTIXEQZOXGNCOOCKVKGBYSLTNSPFYVDFXQHIPJ");
    msg.lat = 0.4362562695290695;
    msg.lon = 0.012532360970931133;
    msg.alt = 0.6730258298165578;
    msg.heading = 0.17110526250936253;
    msg.data.assign("QIIRTPGEVUKWNTJZUULJDSKVYKLFSQZWFLWQZRNCXHDHTZXWOYBYHONSJUWYYKRSOVJOYSMEJYGRTANIWGGGXCENYVDSQDKZAQEBPVQIPXSPJNCOBCUZCVUVSBZCWFLOPLJFFLXGMKCUHEPZZDGHFLEQLESNAARHBXJJMACMRNBIORHCALMURETFA");

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
    msg.setTimeStamp(0.31996882023623385);
    msg.setSource(36151U);
    msg.setSourceEntity(125U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(130U);
    msg.id.assign("FYXJBDMSMFHJCLSYOPKZLBGARBEOVZIONSQPCWRMSMOAFCFPVTEBSTHFLRWTZQHCOIAKKONNLLMJTUFGKXBRNZVEVHNAMCJIXVWCBIUUJAWYQZPHTVXPTPURRFPXSXPQJKYDATLEUGALHZIBEHUGKPIXEIMLAHEQWD");

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
    msg.setTimeStamp(0.1685708503565021);
    msg.setSource(939U);
    msg.setSourceEntity(17U);
    msg.setDestination(56594U);
    msg.setDestinationEntity(175U);
    msg.id.assign("CFODKIUUWTYTXNQNGDMQVMQFEWCKALUXBZECJLTGHOOF");

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
    msg.setTimeStamp(0.531039348136403);
    msg.setSource(11698U);
    msg.setSourceEntity(86U);
    msg.setDestination(21227U);
    msg.setDestinationEntity(93U);
    msg.id.assign("LAJXELXDNXCMTHGHDDIBFHTBBBWZAVOILAUZNCFDCNOFXTKEDFATGKCMFQAZQYCRRDSEAABZJMJFECGRBBXQPSMCIQMEYLGYRJVJSAZQUOVWHH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ODDDVPKMGIMYFFFDEN");
    tmp_msg_0.feature_type = 181U;
    tmp_msg_0.rgb_red = 51U;
    tmp_msg_0.rgb_green = 141U;
    tmp_msg_0.rgb_blue = 107U;
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
    msg.setTimeStamp(0.6151601610992018);
    msg.setSource(17310U);
    msg.setSourceEntity(59U);
    msg.setDestination(25759U);
    msg.setDestinationEntity(92U);
    msg.id.assign("QYJOPXNFPK");
    msg.feature_type = 43U;
    msg.rgb_red = 108U;
    msg.rgb_green = 21U;
    msg.rgb_blue = 23U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0921316732041334;
    tmp_msg_0.lon = 0.24723929768374253;
    tmp_msg_0.alt = 0.13250422342748913;
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
    msg.setTimeStamp(0.5256215538144464);
    msg.setSource(31864U);
    msg.setSourceEntity(220U);
    msg.setDestination(5564U);
    msg.setDestinationEntity(75U);
    msg.id.assign("KIKLLSJGAUHEMJMPWOXCMXWONOITVNVTTWLDENOCWCWRQNZNTKPZWMXFCTECXCBDSEVGFXJNQOFFJTZSUXAPISNAYSMBCUIPGVJYLNXUQDWOAIHYRLQBLRUAREYCAQRXJLBGDDV");
    msg.feature_type = 54U;
    msg.rgb_red = 1U;
    msg.rgb_green = 135U;
    msg.rgb_blue = 244U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6378219539633201;
    tmp_msg_0.lon = 0.7113682307679882;
    tmp_msg_0.alt = 0.05130906125895285;
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
    msg.setTimeStamp(0.08139833382774242);
    msg.setSource(20076U);
    msg.setSourceEntity(70U);
    msg.setDestination(49477U);
    msg.setDestinationEntity(19U);
    msg.id.assign("UXMTPCQFCUOFYCWQBGUZSCJHSYWTERUWGMCIELOOZBVRQEIBWDLFXGSAXDZHXGOMHKXYICFIZNNRNQLMKNVHPTMNIRKDJGXEBYJSUHGQFYNLAMPBHUCSIHOLWESGZQIHMIKRUTUWLFULBLMAZDYPVFVZVPDDOTOXKJJELKOAYMKJLAKNOHIG");
    msg.feature_type = 89U;
    msg.rgb_red = 63U;
    msg.rgb_green = 23U;
    msg.rgb_blue = 195U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5184160347566122;
    tmp_msg_0.lon = 0.9903897438999798;
    tmp_msg_0.alt = 0.03265509627761354;
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
    msg.setTimeStamp(0.18271667244558965);
    msg.setSource(8372U);
    msg.setSourceEntity(54U);
    msg.setDestination(49613U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.41482423744412844;
    msg.lon = 0.869333064636827;
    msg.alt = 0.22243936551262344;

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
    msg.setTimeStamp(0.26155309138381766);
    msg.setSource(40970U);
    msg.setSourceEntity(172U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.9680471951867029;
    msg.lon = 0.7130174616791837;
    msg.alt = 0.2490121940126655;

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
    msg.setTimeStamp(0.8516189264524903);
    msg.setSource(23438U);
    msg.setSourceEntity(196U);
    msg.setDestination(16416U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.3170509076766126;
    msg.lon = 0.7689490696432454;
    msg.alt = 0.4825349262654792;

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
    msg.setTimeStamp(0.9097357602137223);
    msg.setSource(9546U);
    msg.setSourceEntity(53U);
    msg.setDestination(56458U);
    msg.setDestinationEntity(214U);
    msg.type = 189U;
    msg.id.assign("WKTHDUAXFPQBWVBTSVJDCNVDVFDHYCIYSIMDJIZEKVQJSTHPFXZIOWHOCMZHYAWLBGAQLKOLBLILRTKGPWMUXCXJYIGTEFQBPPUPMGKDQLNZEREHOJBQTNYFSAZNGAIHWYYFJMTCVOMNUBMLX");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 3283U;
    tmp_msg_0.type = 199U;
    tmp_msg_0.utc_year = 33U;
    tmp_msg_0.utc_month = 63U;
    tmp_msg_0.utc_day = 247U;
    tmp_msg_0.utc_time = 0.016843296409793984;
    tmp_msg_0.lat = 0.5423430788094153;
    tmp_msg_0.lon = 0.46704298440944525;
    tmp_msg_0.height = 0.02476397272861941;
    tmp_msg_0.satellites = 2U;
    tmp_msg_0.cog = 0.9315571870416275;
    tmp_msg_0.sog = 0.8625399514923967;
    tmp_msg_0.hdop = 0.3752107382807174;
    tmp_msg_0.vdop = 0.9934165166206783;
    tmp_msg_0.hacc = 0.25993191680310823;
    tmp_msg_0.vacc = 0.23970905730316294;
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
    msg.setTimeStamp(0.39846391290289884);
    msg.setSource(50691U);
    msg.setSourceEntity(187U);
    msg.setDestination(39761U);
    msg.setDestinationEntity(241U);
    msg.type = 208U;
    msg.id.assign("LWNQRSNUUZPXSRCXVTBONXQOQZFSWKMJNDMYJBCQVTGVQXSFJYXYNDPOKFWGDPVEYPDAUURTHJI");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 207U;
    tmp_msg_0.zoom = 63U;
    tmp_msg_0.action = 67U;
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
    msg.setTimeStamp(0.8863749796046758);
    msg.setSource(2567U);
    msg.setSourceEntity(150U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(172U);
    msg.type = 206U;
    msg.id.assign("WUGXDSJHAOFMMLZUBWNVGPHHLPLFDCFGKFYSEHMFXSNVCQAZUUNXOYYALTOMNZMJCTDGWVHSYBRAEJBDWUVDKAQZBFQATQNKZJIFVEHPHNMZLHEDJJHBZAOIXGNDAQERMRCTJOOMTTYEWTRFDPTSEXYQCIGIRGEWWZQXNKLIDSP");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ECXSLUPTFEXIWMBNSPKRSOKIOOSCOVUZYTZWLGIQXEMKNEQLPLBCLTKNVTVLNZRIMHHFDHMGUADPYEWFSWKHAUFUGCKOADFORRJVYHTAOXPBRIVGFSJQMJPFCQQJDWJQFEMUVBWDCKNTPRZHGYBDBOBYIWPRESOYDNGHPZJQDGYCUNAXEXUTAWJHLQR");
    tmp_msg_0.visibility.assign("BFUOZPUIKXDOBUAZNDKNCSVYLINIGLEBSGKYMBFPZFHJBZJDHTIJVUZANPEBQNMEHJERFIAMYFKCSHTXZJSOBOCHTXCSMWTDCVXNLKILYQWCTINQNUXHQGYKGUCGRGVGDXGFYPJUWBWADJCOVKQDQWQNRXQAYLOESAVIXOZIMJVRPHRXLTRJSLYROTVTEMPXPDBHWWZKEFURT");
    tmp_msg_0.scope.assign("WBCALLHYOXEHUDZTBRBVWNPJFCDI");
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
    msg.setTimeStamp(0.9135462593146471);
    msg.setSource(20949U);
    msg.setSourceEntity(77U);
    msg.setDestination(19186U);
    msg.setDestinationEntity(63U);
    msg.localname.assign("ITGLTKQTXGLWXANQTXLYIUCTMSROQLHKZBVFTFGGDRBEWSRRNWFWYHEDHEKDZKHRQGXICSLBCSBMNEZOGFPVBJUWMOYWIH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FZVAZZSNJMHCKDMKTPTZDWQYLGSL");
    tmp_msg_0.sys_type = 169U;
    tmp_msg_0.owner = 63450U;
    tmp_msg_0.lat = 0.3049247075114885;
    tmp_msg_0.lon = 0.520305989677474;
    tmp_msg_0.height = 0.8856118285472159;
    tmp_msg_0.services.assign("DUFIGAIDQASKFLXWHHRTBWRWCWQCAZKAKJVCANELZVYMWKZLKWXTYNMTBCHPPVLDJWWSXBZYGQRFBUNCJITRUSEZHGQHJSVZCVELUBQTXRXJREKCGPDCOUUMXQNTYZRPLITDVOCOMZFF");
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
    msg.setTimeStamp(0.12228218647903322);
    msg.setSource(42400U);
    msg.setSourceEntity(174U);
    msg.setDestination(52948U);
    msg.setDestinationEntity(108U);
    msg.localname.assign("MGAZZHMDKDZTCTEURBNJEWFZVMQQYWNGOPLZFULVONDYONETBILDNNVQZXJKPFVYNKZQBORUXVMQPVDJQHLJDHRIMRCUWWGHHWKKZBFSMGDYYTXSSNWUFJAWSEKANHGXSOALLUVHJUTRXAICJEOBDTFNTHPPKXEGVJRGTDSCUKOSZOWLLTOCAPRSGAGEEICPIRQCFAWBPSZCXHQFIMYIO");

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
    msg.setTimeStamp(0.19182369312122027);
    msg.setSource(360U);
    msg.setSourceEntity(232U);
    msg.setDestination(46282U);
    msg.setDestinationEntity(128U);
    msg.localname.assign("PXQYRHULKAYHZAGGMNSPJDZTIXEEBVQGZSZCBMKRPLRPVWAYLNR");

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
    msg.setTimeStamp(0.505824889393284);
    msg.setSource(53854U);
    msg.setSourceEntity(217U);
    msg.setDestination(61873U);
    msg.setDestinationEntity(150U);
    msg.timeline.assign("UGKJEUYDNMJMBTQHFWRSXPQDDKXRIQAJISSAVLNCWTDKLCNPKWGJVIYVLPXZFSGXZYZYWLQPCUALTGFCEREZTFWZRDWVXHFOQPJGDITUBRKVSEXOQUKFGEJMWCBYOHNRXPCZSBFAHJOXFCYFSHHHYQ");
    msg.predicate.assign("IKRUSSUEGZDSQTUSUCSEVYXIROKVMVFYZTELJHZXNRWPLDLFSPGRYWFYLXEZCHHJTAVNUXZOPDGAYHGQWZFCGQCWGBJWXHCCONKPOHYRTXWNVLIPIGFPSDOHKIVRDVJME");
    msg.attributes.assign("EWZDVTVMYZQEBDQLPSKDSGRYGZKKSDNARHA");

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
    msg.setTimeStamp(0.8069240252121846);
    msg.setSource(2047U);
    msg.setSourceEntity(62U);
    msg.setDestination(38999U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("NRNYVXPRFDVEFAMXZGEBTKNQGLDTXBXOUZWUDDGTLHBCANMUNJYFKHQGWFNVPEV");
    msg.predicate.assign("EIIPKNUAXHFSKQOBPONCULDLDCHUQZV");
    msg.attributes.assign("UYUVIQSRIQKRJEQOWZRRZDXSBNJHYBBLDPNFDHVGBLALCUPMCGEZCVCZKHIPZAFMSPBGMGDIUNJXHTNXJAEEJCYQKOXOUKAUHBQLNULRPTOLUDKJRWSEAGXRWYQFONYLWFKDEGGRVHLGMXJASKLVFQMEXOIMRMVMXOZTXVSHUCTFVIDNZGQYTPTQJBTWXYVAZNEBGMFQYJWNE");

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
    msg.setTimeStamp(0.17039371526252);
    msg.setSource(56923U);
    msg.setSourceEntity(122U);
    msg.setDestination(25364U);
    msg.setDestinationEntity(118U);
    msg.timeline.assign("AHGUQWAKRGCMVXDDRBBUTNGNGZFJPESFKONYXPMFWXSJVIUITJJPDXTYLVKMLHMTZOIVARROQPIYBEICZVBLYDQ");
    msg.predicate.assign("NVQLELCUIGMXJSQFTIJDOORKFSYIPRXOKCQJMAHPKVVVKUHUKUQIQPALGWEGPRFYMIXFBMREXHDLHQDEMZVDDJBLYWYCRFJXXFROGSVNYAQQWGCZZBWPETKPWTNOUITJJUEUFSFXJFCWGJSWXOYBVNNBDOMAVSTEZETHRKMA");
    msg.attributes.assign("CLXBGNEEOJDEMKHHECXLVAVZXNOGTJMIYUJPMXTFTSQHIZVBMBFEKLQAWCTSOYCOAIUJGGMCZROYFCWSNTWCQJSQIPBZAZGRBNJOLGHKHKFHSECCNJXSHEWRSRBOMWPJUYKFHNLHTQZYRUXYRAILWFCBYDKDXPTYXWDMDOPXVIBDYPAIYNSPKFRLZJFRVWEWUAUHGGLGNMQRARWF");

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
    msg.setTimeStamp(0.7061452302304778);
    msg.setSource(38916U);
    msg.setSourceEntity(59U);
    msg.setDestination(28759U);
    msg.setDestinationEntity(227U);
    msg.command = 215U;
    msg.goal_id.assign("VUOYBSFQIYDEVZSEWXXTDKZPAHVZDLJQREWJIGGJMWUHPQBJLRLFQPANLGTZXUMMFSNGJYBSFRUVYYMWFTCOWUCSTWHHRHZXDQWUENTYOUXMRCPAFLUREUOBZQCXOKXRLCHOELXAAIKKMEBNSQEJ");
    msg.goal_xml.assign("MIWIUVHGEXRDSWIKYOJXNCXJYMIZIKFVQFEMDXAOABPFZQSTHEUZBKRBUBRHHMLUW");

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
    msg.setTimeStamp(0.9646449332345258);
    msg.setSource(24065U);
    msg.setSourceEntity(27U);
    msg.setDestination(36369U);
    msg.setDestinationEntity(157U);
    msg.command = 211U;
    msg.goal_id.assign("BJAYRZYOGCSMPPVCJUMBONZZZDKICHBMZGKEKHLBSCVLRNZYXNGTTXWKU");
    msg.goal_xml.assign("ABECKCGJBDBULPWHTPCGFLCTTVGQVODVNITDDSTGFVYXIRIJHSLFCENSCMO");

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
    msg.setTimeStamp(0.21429014866020135);
    msg.setSource(58563U);
    msg.setSourceEntity(28U);
    msg.setDestination(16335U);
    msg.setDestinationEntity(204U);
    msg.command = 129U;
    msg.goal_id.assign("CLRROWJHNABLUQCFVIMPAJSHXUZKFNQLXAQU");
    msg.goal_xml.assign("ZDJKRYVXIPMODSISIUX");

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
    msg.setTimeStamp(0.5177284431798991);
    msg.setSource(7598U);
    msg.setSourceEntity(125U);
    msg.setDestination(5012U);
    msg.setDestinationEntity(163U);
    msg.id = 76U;
    msg.width = 41754U;
    msg.height = 26312U;
    msg.widthstep = 11662U;
    msg.channels = 24U;
    msg.depth = 239U;
    msg.finaldata = 234U;
    const char tmp_msg_0[] = {-71, 60, -69, 120, 69, 112, -53, 41, 92, -28, -69, -120, -116, 74, -97, 78, -104, -95, -85, 80, -28, 82, 86, 89, -98, -35, 90, -10, 119, -125, 24, 122, -75, 11, -35, -106, 87, -113, 57, 51, -7, 85, 39, -116, -71, 89, -1, -13, 73, 108, -50, 14, 93, 77, -123, 35, 98, 83, 5, -64, -82, -9, 43, 119, -12, 11, 53, -37, -81, 125, 121, -86, 65, -30, -105, 116, -125, 104, 84, 51, -36, 21, 75, 56, 83, 123, 3, 113, -57, -16, 75, -65, -75, 70, 55, 0, -53, -45, -42, -17, 101, -29, 18, 64, 123, -20, 43, 120, -101, 59, -73, 89, 29, 26, -41, -102, 88, -64, 9, 100, 88, 95, 108, -48, -13, 99, -41, -47, 46, -104, 38, -75, -63, -62, 37, 108, -35, 84, 7, 7, 22, -77, -121, 104, 4, -60, -85, -1, 81, -4, -53, 6, 11, -54, 126, -29, 0, -79, 80, -72, 76, -25, -81, 34, 30, -87, 28, -118, 27, 113, -95, -57, -37, -83, -32, -35, 72, 14, -113, -7, 25, -41, 118};
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
    msg.setTimeStamp(0.9682330994646368);
    msg.setSource(24937U);
    msg.setSourceEntity(116U);
    msg.setDestination(21933U);
    msg.setDestinationEntity(148U);
    msg.id = 240U;
    msg.width = 41031U;
    msg.height = 13009U;
    msg.widthstep = 44656U;
    msg.channels = 141U;
    msg.depth = 47U;
    msg.finaldata = 120U;
    const char tmp_msg_0[] = {-6, 37, -19, 9, -34, 114, -29, 117, 126, 44, -86, -62, -81, -17, 108, -73, -103, -108, -72, -123, -127, -50, -69, 95, -85, 109, -95, 71, 90, -27, 36, 15, 119, -13, 30, 42, 89, 24, 75, 1, -82, 116, 33, 109, 78, 17, 0, 29, -100, 102, -59, -100, 19, 108, -65, -118, -4, 101, -115, 109, 83, -33, -81, -91, 17, -28, -57, 106, -58, -40, 93, -52, 51, 22, -89, -116, 122, 91, 119, 82, -100, -38, -123, 12, 70, -49, -106, 12, -24, 17, -49, 47, 25, -105, -50, -17, -25, 62, 12, -46, 104, 123, 18, -2, -83, 86, 37, -119, 34, 34, -1, -11, -54, 37, 90, 31, 86, 60, -116, 70, 28, -67, -7, 105, -38, 1, 75, 50, 114, -62, 3, 4, -62, -79, 45, 59, 44, -116, -112, -97, -83, 126, -122, -113, 44, -17, 117, 78, -50, 77, 74, 50, 84, -89, -62, -35, -40, 24, 26, 25, -111, -74, -45, -46, -23, 32, 103, -1, 54, -89, 62, -1, 83, -112, -99, -19, 99, -127, 51, 117, 55, 123, -116, -35, -21, -68, 52, -64, -87, 90, 21, 124, 17, -78, 2};
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
    msg.setTimeStamp(0.8658038616448659);
    msg.setSource(42915U);
    msg.setSourceEntity(27U);
    msg.setDestination(57800U);
    msg.setDestinationEntity(158U);
    msg.id = 113U;
    msg.width = 45598U;
    msg.height = 36753U;
    msg.widthstep = 2467U;
    msg.channels = 41U;
    msg.depth = 18U;
    msg.finaldata = 214U;
    const char tmp_msg_0[] = {-50, 5, -98, -3, 82, -97, 65, -74, 15, -75, 111, 24, -121, 10, -60, 114, 55, -8, 90, 15, 120, 13, 108, 2, -128, 112, 13, -44, -94, -72, -40, -98, 122, 15, -64, 56, 17, 62, -48, 87, 122, 8, -117, -42, -8, 98, 98, -124, 26, 71, -109, 124, -127, -99, -4, 122, 57, -96, 57, 91, 79, -3, 29, -62, -39, 108, -77, -120, -125, -102, 108, -118, -1, -106, 80, -39, 60, 98, 89, 22, 42, 23, -22, -63, -21, 22, -94, 91, 126, 92, 14, -35, -31, 28, 108, 89, -33, -43, 79, 47, -93, 98, -31, -12, -19, -102, 78, -58, 79, -31, 47, 0, -7, -128, -33, -23, -65, -116, 61, 41, -78, -67, -91, 26, 78, 59, -84, 18, -25, -23, 27, -77, -89, 125, -34, 119, -28, 117, -73, -123, 71, 76, -44, -2, -42, -57, -110, -59};
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
    msg.setTimeStamp(0.614034015881539);
    msg.setSource(19528U);
    msg.setSourceEntity(122U);
    msg.setDestination(42165U);
    msg.setDestinationEntity(182U);
    msg.width = 59270U;
    msg.height = 13124U;
    msg.channels = 175U;
    msg.depth = 154U;
    const char tmp_msg_0[] = {109, 110, -119, 110, 121, 13, 23, -82, -31, 22};
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
    msg.setTimeStamp(0.23131896921539108);
    msg.setSource(33638U);
    msg.setSourceEntity(143U);
    msg.setDestination(47116U);
    msg.setDestinationEntity(56U);
    msg.width = 47225U;
    msg.height = 24341U;
    msg.channels = 194U;
    msg.depth = 200U;
    const char tmp_msg_0[] = {8, 46, 60, -71, 20, -65, 102, 62, -55, -102, 39, 66, 50, -121, -53, 74, -101, 15, -76, -54, -60, -38, -20, 10, 10, 16, -71, -66, -94, 46, 51};
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
    msg.setTimeStamp(0.7184389827601159);
    msg.setSource(61893U);
    msg.setSourceEntity(137U);
    msg.setDestination(23018U);
    msg.setDestinationEntity(93U);
    msg.width = 22603U;
    msg.height = 59723U;
    msg.channels = 215U;
    msg.depth = 2U;
    const char tmp_msg_0[] = {-82, -126, 43, 18, 30, 84, -35, 51, 80, 56, -63, 66, -1, 64, 122, 126, 7, 87, -15, -45, 110, 82, 68, -5, -105, 112, -44, -33, -92, -53, -26, -80, 14, 104, -51, 19, -47, 122, -115, 57, 82, 47, -23, 85, -38, 50, -25, 46, -19, 111, -22, 101, -119, 53, -74, -100, 106, 87, -88, -100, -61, 5, -58, -4, -22, 120, -88, -54, 40, 61, 45, -53, 96, -25, 67, 71, 65, -50, 36, 6, 47, -77, -99, -53, -100, -31, 62, 112, 50, -41, 4, -115, 18, -19, 90, -78, 68, -126, -64, -54, 5, 28, -8, 91, 41, -26, -59, 102, 56, 65, 119, 94, -10, -68, -87, -5, -14, -90, 100, -93, 108, 27, -72, -121, 17, -83, -53, -79, -8, -98, -109, -107, -53, 34, 69, 30, 90, 93, 108, -108, 7, -32, 16, -128, 34, -3, 69, -85, -12, -101, 122, -86, -116, -53, -91, 101, 84, -27};
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
    msg.setTimeStamp(0.9554881089684797);
    msg.setSource(58224U);
    msg.setSourceEntity(167U);
    msg.setDestination(6959U);
    msg.setDestinationEntity(219U);
    msg.frameid = 34U;
    const char tmp_msg_0[] = {110, 37, 82, -52, -28, 61, -53, -86, -33, -116, 112, -25, 29, 29, -44, 3, 52, -32, 103, -17, 79, -108, -94, -79, 110, 107, -67, 93, -60, 53, 96, 95, 84, -97, 15, -51, 44, -73, -17, 95, 65, 98, -45, 27, 120, 61, 124, 115, 43, -23, -2, -17, -15, -16, -37, 35, 56, 123, -120, -32, 33, -42, -124, -69, -9, 64, -64, 3, -72, -76, 107, 79, 83, -5};
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
    msg.setTimeStamp(0.5882610704631266);
    msg.setSource(38545U);
    msg.setSourceEntity(2U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(64U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {-47, -62, -58, 109, -43, 113, -36, -106, 4, 60, -9, 5, -52, -65, 85, 41, -42, -29, -96, 6, -79, -2, 72, -10, 44, -102, -85, -81, 31, 74, -25, 39, -83, -123, -59, -112, -126, 91, 83, -36, -42, 64, 119, 123, -4, 49, 112, -34, 71, -106, 18, -45, -54, -33, 18, 77, 59, -99, 95, 54, -109, 60, 52, -13, 82, -65, -85, 124, -126, 13, 62, -38, -102, 31, 124};
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
    msg.setTimeStamp(0.8259741106181692);
    msg.setSource(48178U);
    msg.setSourceEntity(234U);
    msg.setDestination(778U);
    msg.setDestinationEntity(60U);
    msg.frameid = 160U;
    const char tmp_msg_0[] = {47, -121, -67, 117, -30, -8, 15, 118, 121, -33, 68, -88, -80, 111, -116, -44, 101, 112, -113, -26, -52, 45, 18, -65, 90, 72, -110, 73, -3, 49, -86, 33, 50, -109, 42, 37, 62, -66, 47, -49, 69, 79, 80, 0, 67, 124, 73, 21, -14, -9, 17, 82, -47, 79, -67, -115, 1, -45, -88, -94, -25, 12, -113, 19, -50, -24, 72, -82, -114, -93, -50, -50, -32, 25, 78, 15, 76, -92, -5, -87, 16, -105, -24, 58, 55, -64, -116, 112, 32, 89, -45, -23, 107, 61, 77, -54, -95, -43, 120, 115, -55, -2, 33, -2, 19, 102, -109, 76, 115, 27, 101, 26, 120, -60, 69, 117, -101, -32, -100, -76, 18, 37, 1, 85, -26, -2, -127, -42, 20, -12, 111, 63, 3, 22, 1, -124, 10, -61, 70, -74, -80, -23, 111, -123, -85, -69, -52, -12, -48, -123, -10, -116, 57, 35, 8, -118, 6, -87, 46, 61, 83, 97, -83, 55, 80, 96, -37, -66, 102, 6, 59, 2, 73, 81, 27, -109, 105, 8, 34, -87, -87, -128, 74, -3, -47, -24, 54, -89, 59, -14, 42, 67, -50, -59, -58, -111, 61, -5, -33, -115, 9, 45, 63, -6, -123, 90, 79, -108, -67, 29, 102, 121, -128, 101};
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
    msg.setTimeStamp(0.05796951766837166);
    msg.setSource(10659U);
    msg.setSourceEntity(20U);
    msg.setDestination(19884U);
    msg.setDestinationEntity(95U);
    msg.fps = 241U;
    msg.quality = 19U;
    msg.reps = 141U;
    msg.tsize = 105U;

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
    msg.setTimeStamp(0.08945133110040071);
    msg.setSource(47645U);
    msg.setSourceEntity(222U);
    msg.setDestination(4529U);
    msg.setDestinationEntity(79U);
    msg.fps = 97U;
    msg.quality = 233U;
    msg.reps = 211U;
    msg.tsize = 100U;

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
    msg.setTimeStamp(0.2765010922120693);
    msg.setSource(26975U);
    msg.setSourceEntity(139U);
    msg.setDestination(40738U);
    msg.setDestinationEntity(30U);
    msg.fps = 203U;
    msg.quality = 251U;
    msg.reps = 23U;
    msg.tsize = 52U;

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
    msg.setTimeStamp(0.7067709113976707);
    msg.setSource(32702U);
    msg.setSourceEntity(92U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.13715025164347405;
    msg.lon = 0.055690521554582983;
    msg.depth = 90U;
    msg.speed = 0.1746881347831989;
    msg.psi = 0.5983299574011041;

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
    msg.setTimeStamp(0.5301228816070727);
    msg.setSource(51703U);
    msg.setSourceEntity(214U);
    msg.setDestination(59450U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.9893240634302612;
    msg.lon = 0.7574303057849597;
    msg.depth = 104U;
    msg.speed = 0.038166588098566545;
    msg.psi = 0.9682945664932359;

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
    msg.setTimeStamp(0.37829894530159347);
    msg.setSource(22479U);
    msg.setSourceEntity(22U);
    msg.setDestination(63136U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.5432617993036145;
    msg.lon = 0.8951873912514301;
    msg.depth = 168U;
    msg.speed = 0.7854840585228143;
    msg.psi = 0.7208190241228569;

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
    msg.setTimeStamp(0.19630083343529992);
    msg.setSource(1200U);
    msg.setSourceEntity(154U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(23U);
    msg.label.assign("SLOWJBEFCGYPGODCAMIPQPZLNITRNGCJLNNVROFWYVDAQSTSQUDLDTJWJPGWWNUBKIXOSHSHWAYDQXKABVVDLHJTTWPCOMRZEMYXEPBQKDNAZSGRFFPRZHOZETGDRCYNMZYMUAIPGZTLYXVBFABRKMRHHKVEDGLVJUJFICLUHITFFTUBOYUOAVOMSWGUJXPDKMHUXBJKEEFPQKQENCMSAHRVZBTGKXEYWYINSZQQZIXKU");
    msg.lat = 0.4745907160553081;
    msg.lon = 0.17703852095285377;
    msg.z = 0.2786676817604983;
    msg.z_units = 222U;
    msg.cog = 0.927798932606806;
    msg.sog = 0.5322082974508742;

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
    msg.setTimeStamp(0.5634337545099303);
    msg.setSource(59888U);
    msg.setSourceEntity(2U);
    msg.setDestination(65250U);
    msg.setDestinationEntity(35U);
    msg.label.assign("QPCKCAUCSYWLKQNBWINPYFTODZIJINGUKXHNDYQKOXPDVUWWOORNMVYVJYVKVVZIBWGGETQSSDBVQLWEXKRGUETCTCBEHQBDXJVMIXFIEDZJQHTOZWFYZAYEHGXRRMGSUARPXGHMWSXOZPF");
    msg.lat = 0.9716527314536413;
    msg.lon = 0.9421828024877362;
    msg.z = 0.6716952206759123;
    msg.z_units = 244U;
    msg.cog = 0.6513097958966377;
    msg.sog = 0.27602842784318016;

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
    msg.setTimeStamp(0.1103618853170385);
    msg.setSource(11553U);
    msg.setSourceEntity(213U);
    msg.setDestination(22105U);
    msg.setDestinationEntity(13U);
    msg.label.assign("LOBBNLGRFIPPDNKOLKOSP");
    msg.lat = 0.7072437212980909;
    msg.lon = 0.7841350914241798;
    msg.z = 0.13749006593894153;
    msg.z_units = 2U;
    msg.cog = 0.19776613606248217;
    msg.sog = 0.7958683441948399;

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
    msg.setTimeStamp(0.31944464531780636);
    msg.setSource(47634U);
    msg.setSourceEntity(38U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(160U);
    msg.name.assign("BUQMHAEBOV");
    msg.value.assign("HYGBILKXOJBNAYVJFRGFPVFXGPOONNPTZMCVDXUCKVTQTSDGUVOJMRCQEBTXJWUJDNAUGSUQKRKNLXHDQYAZDWDRAZFIBFZLWLWNYJZSRQXKSCJCGHTANHMWTKEQEBFSEEWNVQYXOOOPTQYKGPORSIZMTKDZRLBIIVRECNPOLCJMFHZQVIYUEADWSTUQCVXEPZYUFHBX");

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
    msg.setTimeStamp(0.002818409260439969);
    msg.setSource(34933U);
    msg.setSourceEntity(50U);
    msg.setDestination(59620U);
    msg.setDestinationEntity(77U);
    msg.name.assign("QSYQCDXYXWXZMLWJZGIMPHWDGWKTNUBEFQMYMPONHHUBUJFBQYZOVFBRESHRXRJBFCLJAXXGMNJGTJHOSCMVEVNZDLTQJACRPEHCA");
    msg.value.assign("SQDNARPVROIVTAOTDRCBZSWCPDVXDWXYMFFKUULKFKWJGMHNCGVRCH");

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
    msg.setTimeStamp(0.5640120713244868);
    msg.setSource(5258U);
    msg.setSourceEntity(158U);
    msg.setDestination(23228U);
    msg.setDestinationEntity(24U);
    msg.name.assign("CZGVUZUMTSWAKRIPROJDYFIQEBKVBRPYKECPWPSJMAJFVBBXKNIYLKTPJYVAWINDAMNGMODLVGOCJUEGKJNEORPXWSXDTIUNZTFVKDQBMNHWYLZTBQYZQGRHNHVUDXAXHQVLZUYSCOCGHBTFOFYYHKPYRWDRLKAVGMDTXIIZVCWMHUHXIGALFFMCLITS");
    msg.value.assign("RUUSJUDEBJOC");

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
    msg.setTimeStamp(0.5035117677433832);
    msg.setSource(44562U);
    msg.setSourceEntity(118U);
    msg.setDestination(50306U);
    msg.setDestinationEntity(112U);
    msg.name.assign("XJAUXVVXGJGHOIINKXMFDUCXHEPLWANFAVVJTEGTBWXKVCLLHYTPQBNGXKFRNDCIQNWSJJWMZAPSVJUFQYXIVADVDENHORYCFTQPDZKQTRPLQSWOMHCIODZROVZLIEPSWJIBOHEG");

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
    msg.setTimeStamp(0.8762948378760094);
    msg.setSource(1583U);
    msg.setSourceEntity(8U);
    msg.setDestination(44732U);
    msg.setDestinationEntity(52U);
    msg.name.assign("BXUBBBJFXHXTJPRMXLSRWXYQKMUXWTEDDZGOSULQZDPOVNWCWEJTUCOBUEDILIMFWEILDALOQBBSLERQJZOVPEKYWTXFWHODMMNQHTGHSGFGWHEANVVQSNAFAC");

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
    msg.setTimeStamp(0.7146220685215827);
    msg.setSource(13641U);
    msg.setSourceEntity(98U);
    msg.setDestination(54611U);
    msg.setDestinationEntity(203U);
    msg.name.assign("NWUKEXZVXHUZJXRIBWYXFGXIZMKLPIHUVHCYGJUUXLNKHRLJQJACRULGLBVGLSFIKAPBQZQIQBWYKYVZPECPXRPO");

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
    msg.setTimeStamp(0.37157895657056983);
    msg.setSource(43278U);
    msg.setSourceEntity(36U);
    msg.setDestination(61084U);
    msg.setDestinationEntity(224U);
    msg.name.assign("OBXBNPZOJGIFLOXHQDNSNIMQTVMOZVDDIPPYKOVZWXMRNZRKXIDSEDRWKAZWMFPFKANEHHTLBPPLXYELUBEQADTOKFASZ");
    msg.visibility.assign("USXGKWXCKIAEDCVSDAYLKIXFQDZWSTDEAQKRJXPJJTNABDFHFQJXAHWVPOYQNYEXWLNXFBAWIRBIPVN");
    msg.scope.assign("LPBZOVWUCUXU");

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
    msg.setTimeStamp(0.7653608548632266);
    msg.setSource(3016U);
    msg.setSourceEntity(7U);
    msg.setDestination(34833U);
    msg.setDestinationEntity(180U);
    msg.name.assign("YMTJUMKHWXALHRXKHBURQEXPJHAKDPJMZESCAXKUZFBMCNWXQRNGHRFVICLVDUNLUDXTUOPIPWJKNVWBIAFJLBFUDWTGMDMZDGOBOEPXOMFRBYIHMSHCYCOKYCJFOAFXVJWPEPFZOZSKYHEGNCZNLQIRGVQVPPQYEIZPGRSUFGLYSWA");
    msg.visibility.assign("ZUKNZKOSMDPRHQTIMZNNDXGBQKCZRNCRUGSDYWVCYUQELRWFGZWLMQUBWLTSYKJERWDMDMAJLDYVFU");
    msg.scope.assign("ZUDXHBDINTXZTWZLMCPRJONGZHLROUIYRJSTEIOSGGVAMDVCKKEXAKQAHUGXYIAADIFDQDJSPPGFIRHTQYSVBJKKHCEJBYQQGQNODWYFDWBLYOMTV");

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
    msg.setTimeStamp(0.18533998856548695);
    msg.setSource(41080U);
    msg.setSourceEntity(26U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(65U);
    msg.name.assign("TLFFXMXZIPWFIAYJWBINQULDQLPOCXZBLZWJYKSUCXKACCSUYJBAWSWLKOFOPJRWFCGLDNUQEJKFBHXNQDVFQJZDXMSHHKSCPJGPDTBGJUHISAHWVVUVEKXHCPGRQEHRGXTAANEDFTRUQNAMWATZENOUBGWECQNMBJVHAMKSTLLGZTCSDRLAYTFVSLPODKPINPIDYMIHGRZDRMYUTROXEOISRKNNYFGQEVUPYMOTZ");
    msg.visibility.assign("QTYTSGJYIDWUTCUHGIQYMWBARKLDUUDQSJYMIUFEPBKBEIZXUTVBBDUZEMSZKHGAPRBFXNFSNAGXPXSQCHHTBDTJKZZOA");
    msg.scope.assign("OCARYEULHSBTODQBXYXZFEANAZNLCLGTFUHJSNPHPJEIRCZNIOHQLFMJWVIWLRSOUSHVAJQORFDBCDDBGRWBAZOIDDPUKVKVNGMRKSKJPZYHJVTMW");

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
    msg.setTimeStamp(0.035382723063482446);
    msg.setSource(1511U);
    msg.setSourceEntity(192U);
    msg.setDestination(59424U);
    msg.setDestinationEntity(125U);
    msg.name.assign("LPWGKGTXUACYTEMPSEKMSKCMTMHZPIPDIXCNZZHYYCWMFIMBJHRYBVNKYJDXZNQVFSNWBSTQSJRDRLSGZONWQNIIUGINAQRQQGXOTKBBHWDFMSIHKETAODALECLHGNMMLPBATYGGDSURFHSXPKJZYILAXLACJLLUQOEEWUDPBBDVVWJGFVPFTDJCMLRBFUSGRKZVYWNKJCXHHQUTQKCYC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ABHXSFBQRVBTVYNXVJKHRYWQAPWLCIYTUXVAYLXFAEY");
    tmp_msg_0.value.assign("RGGOVRHWZEATFPOKVDPTRCBJOPAHTEFRCPPUDTFDEAWIOAGXOEWYYHVYENMUJJQCRTGWUHXBZCXIAHVBPZQNDTXRLRHZUYVVUCKOSLGYLMBMMRPPSGSNFHDTNQURAAYBBIAZGEUFOMELZXZGEKDJXTEIBODSKBYFDOJKSMJSWVHLOWLCWUTKPXFXLWCIILZCVNZHMJYNQBVYZQSGFQKGECRYHNJIFDKXVIFDMMKI");
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
    msg.setTimeStamp(0.5369041530198783);
    msg.setSource(46149U);
    msg.setSourceEntity(47U);
    msg.setDestination(13072U);
    msg.setDestinationEntity(73U);
    msg.name.assign("CTPXZOPBFVCWIHYZZEJCCYUMRKWRMTCZFHLMCYXLDNNRJPLPJDGYOULTFYAOQGMISTDJPTMNEHBIFGHOKVQVEWNKHIGWGAOSZLQNAMNBFIDCFBLEPD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FHGISXVNVEDTGLZITPRDD");
    tmp_msg_0.value.assign("KCSGGCIIWZRLHRJEYUUZAQYVRDWUHYLPNBSKXKOLIKUAFFMZQVOFNHQNGHAEVMOTTYTLIMMBXDHOWWLJVJYONQITNMEIUFFQHBLVRMWSBTEMXUTCATJZOLVMTNJXCEQZWYPUGSGQ");
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
    msg.setTimeStamp(0.14070425848522694);
    msg.setSource(49808U);
    msg.setSourceEntity(3U);
    msg.setDestination(5625U);
    msg.setDestinationEntity(26U);
    msg.name.assign("UFEMDXMGDCYLHQSPRDBKGJFPSWJOFOEOXLGGYJEHHDJBZXJMSXZIRFJOJWHDZMYCEDIRUAFCVCMYNAGKHAXQEGLKBTQWGNYGOMBSRRZRKWYHDVERWL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZGQQORJIFBFDTNNNICBQIWFFVFVXWHKCGMLPZJYPZFPLHALXA");
    tmp_msg_0.value.assign("VJQNZCWHLLSKWWVXMXPNQBOWGSAKZVIJMIEZVZSUABUNGPEATMDYEDHDAPOSZEFHNPPGWTHMTXFJRDKTSHKWTNYQRGZLURODRBFDNHIKMMMTXVOOGQSJUYBDXBZJRKEC");
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
    msg.setTimeStamp(0.9748718311458155);
    msg.setSource(44287U);
    msg.setSourceEntity(236U);
    msg.setDestination(37197U);
    msg.setDestinationEntity(219U);
    msg.name.assign("MBPTXIOPNUUBSFDBEFODNCYGSNCCNUWTFBNVMOEFCIOUKPYZPUAA");

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
    msg.setTimeStamp(0.1637927094007282);
    msg.setSource(46459U);
    msg.setSourceEntity(159U);
    msg.setDestination(8322U);
    msg.setDestinationEntity(114U);
    msg.name.assign("SALHXIGRZBZQUJUVQNAGCMDJHDYASZEYZXEJLFSPMFAUGKHHELUDFRYUCSKPEBKIEEXSQXTVXFAPYSTOMRAFJWKGRXWMNIVBY");

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
    msg.setTimeStamp(0.578286092954509);
    msg.setSource(21784U);
    msg.setSourceEntity(222U);
    msg.setDestination(8025U);
    msg.setDestinationEntity(136U);
    msg.name.assign("TSUPCLJWUVLZAYIJBEDPZBIKNZPRVNYERXDUFCHNIBYLKDRGWRUVIOJACXPSZXMGKZSHETMFYKXYRREVNNLWQRPXPJTYQIGFSPSZDOSZCEOMBTPBFCCJWEZNKOHWHCRX");

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
    msg.setTimeStamp(0.6589553607546069);
    msg.setSource(45912U);
    msg.setSourceEntity(93U);
    msg.setDestination(8820U);
    msg.setDestinationEntity(143U);
    msg.timeout = 274505273U;

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
    msg.setTimeStamp(0.3767595752966181);
    msg.setSource(33314U);
    msg.setSourceEntity(75U);
    msg.setDestination(50617U);
    msg.setDestinationEntity(10U);
    msg.timeout = 296834860U;

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
    msg.setTimeStamp(0.48825114366006794);
    msg.setSource(34073U);
    msg.setSourceEntity(146U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(176U);
    msg.timeout = 811685531U;

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
    msg.setTimeStamp(0.06130307768278642);
    msg.setSource(60994U);
    msg.setSourceEntity(48U);
    msg.setDestination(20297U);
    msg.setDestinationEntity(195U);
    msg.sessid = 1932772416U;

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
    msg.setTimeStamp(0.17975150547582586);
    msg.setSource(63156U);
    msg.setSourceEntity(152U);
    msg.setDestination(47514U);
    msg.setDestinationEntity(115U);
    msg.sessid = 2415529050U;

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
    msg.setTimeStamp(0.4048673287692207);
    msg.setSource(31123U);
    msg.setSourceEntity(24U);
    msg.setDestination(28228U);
    msg.setDestinationEntity(181U);
    msg.sessid = 3148963577U;

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
    msg.setTimeStamp(0.6817075510694559);
    msg.setSource(56510U);
    msg.setSourceEntity(81U);
    msg.setDestination(13288U);
    msg.setDestinationEntity(12U);
    msg.sessid = 2022563047U;
    msg.messages.assign("QBNMNFYEVJYSBNBUESCIIBIGROLRSMGQWUPAEOLJITOWPAME");

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
    msg.setTimeStamp(0.4372499051569376);
    msg.setSource(38540U);
    msg.setSourceEntity(8U);
    msg.setDestination(41566U);
    msg.setDestinationEntity(101U);
    msg.sessid = 59226890U;
    msg.messages.assign("KVEKGSVDQIXXVXTWIVNSJPUQIIOKEMYWWMIYBDOQEGIOLSARTVRCETCQNNKUBGGCOTAMAZLGQDGURRCJSXQCAHZHFCMYJQEOPZEGQMFHJTJYFXR");

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
    msg.setTimeStamp(0.9151805875895447);
    msg.setSource(20021U);
    msg.setSourceEntity(233U);
    msg.setDestination(17156U);
    msg.setDestinationEntity(178U);
    msg.sessid = 2013753167U;
    msg.messages.assign("VUPVSOQQJFSZNKMHTXEUTDZEFRWZGKQDCXBZXTZDLRRZSNBZVLOTNKNSVIWYYOEAPKWNWDJIHFCSGTMOOBXSHGYTLCRLYVMKGUPRFABIPMKMXIVAKFTIZNDTBOXGRMATN");

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
    msg.setTimeStamp(0.8696136333272692);
    msg.setSource(21860U);
    msg.setSourceEntity(39U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(57U);
    msg.sessid = 3817540833U;

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
    msg.setTimeStamp(0.6081338678022892);
    msg.setSource(38923U);
    msg.setSourceEntity(161U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(72U);
    msg.sessid = 1013451512U;

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
    msg.setTimeStamp(0.6917287384775753);
    msg.setSource(39470U);
    msg.setSourceEntity(78U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(18U);
    msg.sessid = 2988600446U;

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
    msg.setTimeStamp(0.6955320302589781);
    msg.setSource(6358U);
    msg.setSourceEntity(1U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(250U);
    msg.sessid = 960433337U;
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
    msg.setTimeStamp(0.1620264260442662);
    msg.setSource(8373U);
    msg.setSourceEntity(168U);
    msg.setDestination(44001U);
    msg.setDestinationEntity(197U);
    msg.sessid = 3950511880U;
    msg.status = 211U;

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
    msg.setTimeStamp(0.23115776759666262);
    msg.setSource(62320U);
    msg.setSourceEntity(14U);
    msg.setDestination(40030U);
    msg.setDestinationEntity(166U);
    msg.sessid = 116568522U;
    msg.status = 130U;

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
    msg.setTimeStamp(0.492111451567547);
    msg.setSource(21895U);
    msg.setSourceEntity(103U);
    msg.setDestination(22824U);
    msg.setDestinationEntity(251U);
    msg.name.assign("ZECTKWFBWCDPNIAENHQSJABGUYTXIIYSFSOSFJQVXBZLVBLTRVUDUZSHKPMYAEVRPIXTIPLWPPOXOYOMYLFZMHKMNWMIQPDWQWBDXXSFUVZHGHGRIDUDZGEAKBZIGTBFAEJFTEJHXJKHHBZNLROQIYNQLNNYKPLFRHCLODCUGELVXDGUFARCRYTWZTDBPOXTCGVWMMCKCMVJVSQSQTOGEKOJMKEWUAFCAKNSH");

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
    msg.setTimeStamp(0.8790802666143146);
    msg.setSource(53039U);
    msg.setSourceEntity(64U);
    msg.setDestination(34313U);
    msg.setDestinationEntity(117U);
    msg.name.assign("SMPTYELNUUEFXNFKZVCBBYTLRMRCGHUFJDUOTIVPXACGWPUQEWEQAKOIXMQJFNI");

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
    msg.setTimeStamp(0.7867825023161507);
    msg.setSource(58052U);
    msg.setSourceEntity(145U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(49U);
    msg.name.assign("DJALSQCBUNMJMESVFCIQHPWPXNKEPOCFFWIXPQKJJDBPPCXKNMHAKSHSNWIJRLLOGJNTVDBVEZBQYCWYLAKUHGEZXDOIRDORJBVGESRLUQXSA");

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
    msg.setTimeStamp(0.6538705901092885);
    msg.setSource(35240U);
    msg.setSourceEntity(179U);
    msg.setDestination(41429U);
    msg.setDestinationEntity(162U);
    msg.name.assign("BTXDTVZUPFMRJGJHGRFFLWUZGQZOHDBRZCLFEQKYLTYZABLPSWDLXMRVHPA");

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
    msg.setTimeStamp(0.6512192364452861);
    msg.setSource(53849U);
    msg.setSourceEntity(90U);
    msg.setDestination(3134U);
    msg.setDestinationEntity(98U);
    msg.name.assign("IQYMMRJSOIVFZBTOVGAGPKFUXECQTBWRJQYRFSTOMSHRJHHN");

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
    msg.setTimeStamp(0.7660851228628616);
    msg.setSource(27125U);
    msg.setSourceEntity(36U);
    msg.setDestination(36828U);
    msg.setDestinationEntity(69U);
    msg.name.assign("WSCTAWJUTPKGIOCSRFEUXWXTPEUGGJCYQVBU");

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
