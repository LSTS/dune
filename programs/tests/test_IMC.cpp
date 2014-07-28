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
    msg.setTimeStamp(0.25515466584112245);
    msg.setSource(53156U);
    msg.setSourceEntity(178U);
    msg.setDestination(3076U);
    msg.setDestinationEntity(33U);
    msg.state = 243U;
    msg.flags = 158U;
    msg.description.assign("DAMJVUKWRUQFDREWTGJFXKTSOWQQHEFCEQDNMHIRAWBLQNWYCCYPFQQMJMMWFHPAIELYRYVOJOWJGJOEBULZYLNAAUOMWPSXRJHE");

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
    msg.setTimeStamp(0.9243765726128405);
    msg.setSource(39887U);
    msg.setSourceEntity(52U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(231U);
    msg.state = 74U;
    msg.flags = 41U;
    msg.description.assign("CONYGLYTWKOEYVHGMRDBEDCVLAYPMFZPNWSHJWFRAMUPDEAWIWSDOXLFYBLHQYXOBXPKMQNVISZFTRNKVSZMYCEAGTPTWRTESKOJQDBKTTOEZBMZCJNYUKUGBMCGUIKQJSJYLGKHFHNKBXLNDWTVIAWQECRCGPPXAILZIXRQVLIZBUHPCHXGZGXTEFOJAHDRBAWMCSFRSRWQAJHI");

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
    msg.setTimeStamp(0.6193625610442944);
    msg.setSource(5720U);
    msg.setSourceEntity(120U);
    msg.setDestination(52795U);
    msg.setDestinationEntity(252U);
    msg.state = 249U;
    msg.flags = 170U;
    msg.description.assign("ROEARKNRDRSLBRTBZNRYIZWPVVRQRIPDFAHYJEWKVEOXLMJXSKPPDYBBGKLHYHATJNQQNVZZIFSQFJQOWQQUGCASUMIJCXWJLYRDPZHBXVUGKTQBSZMKCLYNIOAFZAHUDLYAICWTKADXTEDVNUCLXYNSZHMCYFOWTTGKAMXXUHVILBEBTIGQRDOWSQFTGFDCJGFVCWUYCZPCZHEOVFPSMAJNPUDHUPIEVBMSWXFKPMOEJ");

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
    msg.setTimeStamp(0.5390148931244144);
    msg.setSource(28926U);
    msg.setSourceEntity(130U);
    msg.setDestination(47125U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.20582103347708125);
    msg.setSource(31640U);
    msg.setSourceEntity(67U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.0329899788079695);
    msg.setSource(8655U);
    msg.setSourceEntity(163U);
    msg.setDestination(59322U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.10587168496449129);
    msg.setSource(31757U);
    msg.setSourceEntity(75U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(208U);
    msg.id = 117U;
    msg.label.assign("XKWEAMEUCWALQCDTCLRVNEBKTNYSLZCYSYXPWHUTIVNDBWMOQJZUEIMHLMSSILUPTZYSFXGMNERDEMPNJIURVXMRCZKBRSUDQMXUGCOQMHSNAOBNHJOSKXGFVAVCCLBFOVLFPKKXOHCPYWWBRJQZRTIGPZQOTKAKAJDEVBINGFAUYDTWJ");
    msg.component.assign("WRHJKFDXVHQBZAHIFEWGLRWPNDLKIQILAZXTPVFUGFZAYZXQORSMHBNPNJCBQVOCNQOZIOFKUVGBALXWCPSREOVADZLVMNNAZQKQVIMKPKGWQCMERRPTCUZYGXCRDSXZSDQIWJWYYSGRTHRXNFEEUDRLNBTUFJOE");
    msg.act_time = 19238U;
    msg.deact_time = 21236U;

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
    msg.setTimeStamp(0.08074534714064996);
    msg.setSource(31509U);
    msg.setSourceEntity(56U);
    msg.setDestination(52404U);
    msg.setDestinationEntity(38U);
    msg.id = 209U;
    msg.label.assign("CSDCEEIGRHLKICHRJBGPYAUMWSTOTXGAIONYPCIJVHRELMYBOVMNNSOVBPDFAWBNOHDGJZTBYLKMRNCZZLXACCTGXZODTUZPRBQDVZLXWTUSIEHQSDWFTWNFDEIEMKVMNJQUFAOGHVXTIXTRSFUPSTWQKRIIDMLJHBGEQNWEQVOAKDCMULJZAUFEGPJFLVYHAXROUVZGZRFMUVCDPQAPQQXYJ");
    msg.component.assign("WDHDJYPHSEEEJMFZBHHNKNTNSKWKKYLFCIV");
    msg.act_time = 14196U;
    msg.deact_time = 44344U;

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
    msg.setTimeStamp(0.007496549364142013);
    msg.setSource(65234U);
    msg.setSourceEntity(125U);
    msg.setDestination(42606U);
    msg.setDestinationEntity(243U);
    msg.id = 2U;
    msg.label.assign("QJLWDSQCOEJKBCGRTOKOFHRRRDBPAIAJYWOVJRMDWSEDZBYSQEXIPKXINCAVJJGEIOVLIYSWERJHNKNLPDUSVXWLHSZGKMAIUPEYJNCFOXZJPTGNYEZDINWBMHOVPSGYQTMYKCMLTYEXBZLRPQECZVVFSLAPNHMKAQQHWWBLYRWXGDXZ");
    msg.component.assign("TNPWBDDPWGUXKPLFUEUSLFERRBRXGWAPAMXXPOQKVZLNWNMHHMANIXSQZGNPREJTHIOAIRVXZJASGXTQLLUZCOMKUEIYAZBDFVQYSBGOFHRCRDYZLWGGITHTUVPLDHZEPXTBRQQOEIZCJSKACDJXGJLTOAJBKJSXFAUQYNMNFNISHSVGSHHSRPKTZBCCIWWFYQLWJWHWTCODPEECUUIYFOYKQBQETGFAMYLFEVDJM");
    msg.act_time = 3801U;
    msg.deact_time = 65391U;

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
    msg.setTimeStamp(0.4012208068450698);
    msg.setSource(18624U);
    msg.setSourceEntity(108U);
    msg.setDestination(47746U);
    msg.setDestinationEntity(195U);
    msg.id = 239U;

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
    msg.setTimeStamp(0.8043830424270668);
    msg.setSource(7831U);
    msg.setSourceEntity(138U);
    msg.setDestination(58284U);
    msg.setDestinationEntity(34U);
    msg.id = 245U;

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
    msg.setTimeStamp(0.03754871887150879);
    msg.setSource(49533U);
    msg.setSourceEntity(55U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(6U);
    msg.id = 28U;

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
    msg.setTimeStamp(0.3871677611206442);
    msg.setSource(24170U);
    msg.setSourceEntity(171U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(106U);
    msg.op = 94U;
    msg.list.assign("PGXUCTWIEKYHFMQBTGOONKYVTVLHCQVZDPKDLASQSKIPJDRYGSKGUIMPGZRIAXOBHMZRVIHWKKXJACETHICYPNSPSLVFO");

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
    msg.setTimeStamp(0.7483022906335778);
    msg.setSource(31500U);
    msg.setSourceEntity(21U);
    msg.setDestination(48905U);
    msg.setDestinationEntity(248U);
    msg.op = 123U;
    msg.list.assign("UYLPUPUGACVKSSMTNXBZYSGAJWDZEITGLAYCJPMDAOFJZOEKOFDAXBCGTBPTMZDQVFTBWVDRHYQVZWRKPQ");

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
    msg.setTimeStamp(0.6511546463319697);
    msg.setSource(52781U);
    msg.setSourceEntity(32U);
    msg.setDestination(37841U);
    msg.setDestinationEntity(3U);
    msg.op = 235U;
    msg.list.assign("WGBEYZTHCEKYUVAJOOYADAGJWCBVDVLNNVLZKEQZZNEZBMCDWIGHUHGYPRMLDVRGDLMXRMOURFMBSQXRZKGLBHENXZNTCUEHJOWYQTFNVJBLXMWJIAWXQQGSDSCKQGEKXRLKFIXRJTYPOCKZDPVUFVIJG");

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
    msg.setTimeStamp(0.693578156216427);
    msg.setSource(28634U);
    msg.setSourceEntity(43U);
    msg.setDestination(36576U);
    msg.setDestinationEntity(31U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.7393362422224704);
    msg.setSource(27728U);
    msg.setSourceEntity(167U);
    msg.setDestination(27822U);
    msg.setDestinationEntity(92U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.6704853996848541);
    msg.setSource(12200U);
    msg.setSourceEntity(94U);
    msg.setDestination(36335U);
    msg.setDestinationEntity(196U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.9619913962893633);
    msg.setSource(48581U);
    msg.setSourceEntity(226U);
    msg.setDestination(48754U);
    msg.setDestinationEntity(190U);
    msg.value = 128U;

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
    msg.setTimeStamp(0.5011612937572966);
    msg.setSource(4827U);
    msg.setSourceEntity(32U);
    msg.setDestination(64525U);
    msg.setDestinationEntity(23U);
    msg.value = 124U;

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
    msg.setTimeStamp(0.39216132021855243);
    msg.setSource(54024U);
    msg.setSourceEntity(228U);
    msg.setDestination(6992U);
    msg.setDestinationEntity(94U);
    msg.value = 115U;

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
    msg.setTimeStamp(0.16226678275651096);
    msg.setSource(44553U);
    msg.setSourceEntity(110U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(250U);
    msg.consumer.assign("OPBMGTGACLIHSAYSXIFWDYVEVVZAMNHCZANYDBFCJPYPTFKKSSINDZXKIXRJBCYBDGSYRSJETMGNEJLTLJIVOGRLHV");
    msg.message_id = 16088U;

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
    msg.setTimeStamp(0.7530461257032327);
    msg.setSource(3277U);
    msg.setSourceEntity(57U);
    msg.setDestination(38047U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("EBQIEOSLISZAJOEJJMQKPYNWNF");
    msg.message_id = 45485U;

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
    msg.setTimeStamp(0.027691887867684284);
    msg.setSource(45115U);
    msg.setSourceEntity(169U);
    msg.setDestination(893U);
    msg.setDestinationEntity(27U);
    msg.consumer.assign("BNBQKBRKKCNLDNAJYBAUBGYYEPOWHHDYPNJVFWQFKGOFFXPBHMLQTKZFAEVJRTFQZDHCOQDAANLXOLIDZRNXVOEHYPTDCDDWNRYVTLLIUYLUXSTMHSSSVOSUJMIMQAIKKOXVRWVIWJCFHGVQBTAZPJMEESQNXENMGUCJJWMTADYIBULCOZWKONGKPLUZYGIRSIPEVEBBCSYWMCUWTHRFZMPEJFKPWQXXVHXFIPXAOUZAG");
    msg.message_id = 8749U;

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
    msg.setTimeStamp(0.5839027133913521);
    msg.setSource(23953U);
    msg.setSourceEntity(253U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.601397496583089);
    msg.setSource(46352U);
    msg.setSourceEntity(236U);
    msg.setDestination(663U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.8303540040264493);
    msg.setSource(13084U);
    msg.setSourceEntity(152U);
    msg.setDestination(40499U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.41949934560686397);
    msg.setSource(54663U);
    msg.setSourceEntity(212U);
    msg.setDestination(43924U);
    msg.setDestinationEntity(246U);
    msg.section.assign("YXMDGDUXZTBQANSWSBLHYWVBUIWFGMFHPWQGGIDEQCTSUGPRUWNAZKUWWENJBPZLXRKOTYKCIVPHEAELYAARGUWYKYLWDVBNOTPRYKQXFNIADTRHBXGYRMZAVBLLMJXJHCOUDFMYIOXPGIVCZEPTBTJIJVZGWEZTXSLN");
    msg.param.assign("MFYKXVTUCVEFFWDYFTLPYRQDLGRRELHZATMIDTMGL");
    msg.value.assign("RHQERVTGHIAWUXWZGUWFTEYJKZXVERJIGUTWTVIJYFITVAEOTUKXPANHPGZKNDPYACDQGZMEPBFCOCGSENQAMVOIFSFKIWVKUBXOQGYOBXQYJZPCDSLFLVQOWODCBTWWMB");

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
    msg.setTimeStamp(0.07615840521390926);
    msg.setSource(18661U);
    msg.setSourceEntity(230U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(171U);
    msg.section.assign("JFGFZCSZAOPKPDXIJPYLOUWDVDIZLFXCKJVABMSJBUZZSSHROBVRGIWMNRKMIFETWNSKCVYFARQYYSVTYXEHYXTBRDDBOKZLBYLJVLSGRJMUJHAEWFCUSGRGIWEAQINNQJGIEDWMP");
    msg.param.assign("LFPRLIQCWVOESU");
    msg.value.assign("ODCUOOIYZRAAHWGDXHHXPVDWVUZJQFJOVCIZTAE");

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
    msg.setTimeStamp(0.1464416341309538);
    msg.setSource(10114U);
    msg.setSourceEntity(159U);
    msg.setDestination(39511U);
    msg.setDestinationEntity(164U);
    msg.section.assign("PETLJYKESUDBSFOWWOZLSYJFCMDNKSVBQQVCUUMBUBECX");
    msg.param.assign("NUXKOWYCASKBQLNWJQMRCDKGYQIGYULEGIPVAKXCTOYOVPNEXIHJKZYHPJNPBWSWDNRAGUPSJWBALBCFQRLZVNWUJUVTOXXAWOJXSJMQCWRRAOOJJQZDAEGLLLHVVCPXNVUKDTEMHPNFMUSYBIIAQWEGUQRCNZTGAV");
    msg.value.assign("PRRCWBHLFDCOIOQXBPIVWCZJLKVKHQMHTQROQERAAYZGHSNABGVAJIKPTPEFANABTYSBOXOZXCCSZUFNQXZNNOXEHZGMJDEPDBQNRGUXBDSKHTXICYVMP");

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
    msg.setTimeStamp(0.320558237378735);
    msg.setSource(54300U);
    msg.setSourceEntity(12U);
    msg.setDestination(35370U);
    msg.setDestinationEntity(93U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.23076222603053986);
    msg.setSource(1439U);
    msg.setSourceEntity(175U);
    msg.setDestination(18193U);
    msg.setDestinationEntity(50U);
    msg.op = 124U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("YWTFCIWYRLQNSZTGWVMEGZPOGERPZAYNCWBYRFHXRPKNQVQDIMXVGXJHBMECGHCIZRJYKLPVABLLPNJNBEEIQWBGMOTHOXWHBZDUOETAUSMDUOVRNSKSUUMRDWCFGLCOMKAEYDDFVFTBEKZJKXVOKEJBZELZCRJDIGAIDHDLRNGYXUIVUHSTYLPXJYTANFQCBPISAZIFUOJZMVPSKQWCGAQXNFSCXJHBKFUWJMTLQDRISQQXTAA");
    tmp_msg_0.param.assign("LAJLRUSIWOMCZIEMXJHJCGPUIOTYHWWWVIDVJZLWNPMUXOKJWXFXDFQKAFBAOKMNUPKRXQQMWRBYCUKENGKMYRFKCRYMIPDFEAAHTOUVHLIKVSOUSEEDDTTFYWGWDMSUIPXNESMQBLVPAYSWTGSZCNDQCKZHRXEE");
    tmp_msg_0.value.assign("BEYGYLUVVOLYLQYOUTVWNPHZOFHPHGPAAEKSCIPVXDKZXXKREDKCBLNIBSSXHUXEDWQKJPZFFBAUBMIZQXWUZNPHJSNDCZMTOLTQGXVPTLXEOAOKJBGR");
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
    msg.setTimeStamp(0.5505193670136459);
    msg.setSource(2129U);
    msg.setSourceEntity(216U);
    msg.setDestination(51250U);
    msg.setDestinationEntity(134U);
    msg.op = 152U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("YRBYTRQEAQTBXPDZMKWBHPXZOEIKALLANVKJGYSVCOFUFYDTUCPYQOSALGJMMIEBSKHYMGRPHAXCJMOSLDCKUIFHAEHRXDYPZBQDOIEXZXUXMQTF");
    tmp_msg_0.param.assign("MKHMIPTANQTFFHMZVBIECVBHFCXGKMCGUVNNJSJPNYAIWEFYCBCGDRJWYXBPWEXZOICUOZXFOAYRUMGPBHQDQGEIDCGBKVNMAIUDWZHPFBAUEKJQYFZPSWAXWYTOGLJVQIXTVZDTVPJGNAOHTVNDRO");
    tmp_msg_0.value.assign("GOVQLOWJGNZIQNLYFLQETZOXGUJABTSSEQTRCHLKAVXUDFPNIEXZSEDIRXZAHSQGCIJKJTPJEVQNBAMPPSWUAWTKZCMIGGLYPDJOXNZUAGCSBMNZYDQDWWHXEIBXHWLCMWNMADXTBUSCZAKMTNZVZPCLGVJOKDBEQOEYUAAGYKFHSMRKCINKXPGDBFEKQBQYOIWOYSFRPCFFJIUJEHYRHKRFRDVDBYFRHUUWXCVTBNPJHIS");
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
    msg.setTimeStamp(0.6506206785908669);
    msg.setSource(12659U);
    msg.setSourceEntity(37U);
    msg.setDestination(37440U);
    msg.setDestinationEntity(43U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.533821267095945);
    msg.setSource(11631U);
    msg.setSourceEntity(249U);
    msg.setDestination(17928U);
    msg.setDestinationEntity(176U);
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
    msg.setTimeStamp(0.21704381684474705);
    msg.setSource(44977U);
    msg.setSourceEntity(77U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(175U);
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
    msg.setTimeStamp(0.6204186622110595);
    msg.setSource(43978U);
    msg.setSourceEntity(29U);
    msg.setDestination(35115U);
    msg.setDestinationEntity(164U);
    msg.total_steps = 48U;
    msg.step_number = 174U;
    msg.step.assign("JVNDPCVCBAYQHYZTTWZRUVONWIAKDFCIIKSACFMLUYEJUBHIINBBOGBGWRXSHUTFFOTEGQBDSHD");
    msg.flags = 1U;

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
    msg.setTimeStamp(0.4748215981361176);
    msg.setSource(11698U);
    msg.setSourceEntity(106U);
    msg.setDestination(63157U);
    msg.setDestinationEntity(13U);
    msg.total_steps = 177U;
    msg.step_number = 184U;
    msg.step.assign("OKBDWVGFCUWTEMUTFIXDCQEIDNTKCPDAJMVYFZHTLRJXRSVEFUCBPEESVCWNYNCYOOVBOMOLS");
    msg.flags = 198U;

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
    msg.setTimeStamp(0.5187769101748897);
    msg.setSource(16294U);
    msg.setSourceEntity(82U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(117U);
    msg.total_steps = 68U;
    msg.step_number = 126U;
    msg.step.assign("CKCWYHFQCHOSHRAJXBFSLQAIVUFTDBYGQTBFPLATO");
    msg.flags = 74U;

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
    msg.setTimeStamp(0.37737810013378803);
    msg.setSource(13163U);
    msg.setSourceEntity(249U);
    msg.setDestination(43261U);
    msg.setDestinationEntity(4U);
    msg.state = 58U;
    msg.error.assign("ZMFDNZZJMG");

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
    msg.setTimeStamp(0.03611027479737938);
    msg.setSource(50224U);
    msg.setSourceEntity(40U);
    msg.setDestination(53744U);
    msg.setDestinationEntity(90U);
    msg.state = 66U;
    msg.error.assign("WHPSRMMFDUBREKFYKVEMPJFQGXBPFEQZNWUCMTSLJJHGRZSWXIOVWSVBRCYIYKTADIZBQWLJHCBQLBWJZMODRTSIALKIJQTDAEATVVVRXGKBERKZ");

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
    msg.setTimeStamp(0.6238906494526609);
    msg.setSource(23719U);
    msg.setSourceEntity(74U);
    msg.setDestination(47353U);
    msg.setDestinationEntity(76U);
    msg.state = 193U;
    msg.error.assign("QWYCSHXLWYVEMJKBITDUNAQQCHLSTTBWLORSKEHANAZGJYVUWBASSPGPBBVQCBFTVNMGVKAXEMVKZVKYAZRQPQCBOEFWZOYLNEYCDJXVKPGJOGRDAEGJLTFZBSUFQRMMIIDMITJLUWPHZOOJGXWQETVSUMPSCUABHDLLYIOPSNPFUMIPAKXPERDE");

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
    msg.setTimeStamp(0.6896265408702125);
    msg.setSource(27588U);
    msg.setSourceEntity(43U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.7687357417549668);
    msg.setSource(57228U);
    msg.setSourceEntity(41U);
    msg.setDestination(51788U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.16998533159853357);
    msg.setSource(2157U);
    msg.setSourceEntity(212U);
    msg.setDestination(62376U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.6067811738652242);
    msg.setSource(22463U);
    msg.setSourceEntity(52U);
    msg.setDestination(8701U);
    msg.setDestinationEntity(75U);
    msg.op = 90U;
    msg.speed_min = 0.6678224646705951;
    msg.speed_max = 0.35659051532593944;
    msg.long_accel = 0.5424611113027324;
    msg.alt_max_msl = 0.4683759846520563;
    msg.dive_fraction_max = 0.6391588570001424;
    msg.climb_fraction_max = 0.5610426082787612;
    msg.bank_max = 0.7744030676023228;
    msg.p_max = 0.3040080159022487;
    msg.pitch_min = 0.8316802410363235;
    msg.pitch_max = 0.3949739517261791;
    msg.q_max = 0.5360081782229864;
    msg.g_min = 0.8303429253288133;
    msg.g_max = 0.4422896615366557;
    msg.g_lat_max = 0.3535615958913131;
    msg.rpm_min = 0.7180431724567509;
    msg.rpm_max = 0.4241582916958909;
    msg.rpm_rate_max = 0.8234525628493417;

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
    msg.setTimeStamp(0.26554822594398175);
    msg.setSource(4278U);
    msg.setSourceEntity(245U);
    msg.setDestination(36635U);
    msg.setDestinationEntity(149U);
    msg.op = 125U;
    msg.speed_min = 0.9657395932849896;
    msg.speed_max = 0.505208906757714;
    msg.long_accel = 0.8271655671885859;
    msg.alt_max_msl = 0.6139850431657581;
    msg.dive_fraction_max = 0.8375837776903788;
    msg.climb_fraction_max = 0.2569628958233803;
    msg.bank_max = 0.4194136376649882;
    msg.p_max = 0.48570663446777607;
    msg.pitch_min = 0.6868230917049888;
    msg.pitch_max = 0.5947423471646477;
    msg.q_max = 0.3009105535165595;
    msg.g_min = 0.6696721429642924;
    msg.g_max = 0.022054216099003376;
    msg.g_lat_max = 0.526324854695786;
    msg.rpm_min = 0.2608363098871769;
    msg.rpm_max = 0.041502062285788344;
    msg.rpm_rate_max = 0.8088804389783185;

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
    msg.setTimeStamp(0.8582075803204692);
    msg.setSource(61996U);
    msg.setSourceEntity(155U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(194U);
    msg.op = 39U;
    msg.speed_min = 0.6616602332810793;
    msg.speed_max = 0.1472856187181728;
    msg.long_accel = 0.26449177831019244;
    msg.alt_max_msl = 0.20008711194615125;
    msg.dive_fraction_max = 0.19658972235475092;
    msg.climb_fraction_max = 0.5617634951853467;
    msg.bank_max = 0.7081414629125268;
    msg.p_max = 0.9297169667889682;
    msg.pitch_min = 0.6603864948328333;
    msg.pitch_max = 0.6570902545930407;
    msg.q_max = 0.10456153591561423;
    msg.g_min = 0.8900669794312108;
    msg.g_max = 0.20090340865101985;
    msg.g_lat_max = 0.7230610236343537;
    msg.rpm_min = 0.9079784642338201;
    msg.rpm_max = 0.7606520392568925;
    msg.rpm_rate_max = 0.9289949008882881;

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
    msg.setTimeStamp(0.6833265502625244);
    msg.setSource(8166U);
    msg.setSourceEntity(35U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(100U);
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 10404U;
    tmp_msg_0.name.assign("MEKOODQVIECXRKBRZEENLXWTPHYWESDUWCIQGHPSFDDGNKRCVJPMFUWRYHAGKBLEWMEUBOUFVDRLPNDWQSUJRFHTCHLRIPLXUGHAZAYIQSXHHZLDRSKVAFVOCKNAJJSNMCQQFZEFLTBANTCGIVSGOSAWGAICGJHXYMLZYYVEZIKHDBXLWSPCMNOTBQIMOYRYFJYDLXNQJPUPOQOVNEWJTZDWJVZTNPUXTVBXTZJQBFGBSKFTKXUMUYAMR");
    tmp_msg_0.custom.assign("IFNUBYXKTTCWOEGZZAHKWBAOQURFXSNJHFGPEGRMVXSZHTIOKNAQWFDXOBOJKQQHOLMANLJAPAPDZFBMKCNSDDDLTYIIFMYIFQCJYLYSRYXEWYRZEJRQOCLRJWCSLEXMGVBNSSZENYEBVRXMUOHJQVUJCTFCNCHHLICOBOSZIXUUQDWPWHRTNQZWYDYUVLGUKJEKQBFHXVUHGPTPPMCGRGMFIZXASTAWVEGTKLZPKWPJMUDVBDAAVR");
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
    msg.setTimeStamp(0.7002437448589326);
    msg.setSource(3792U);
    msg.setSourceEntity(52U);
    msg.setDestination(62508U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.43764418696542295);
    msg.setSource(13745U);
    msg.setSourceEntity(184U);
    msg.setDestination(10676U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.8569199290569189);
    msg.setSource(11187U);
    msg.setSourceEntity(213U);
    msg.setDestination(27931U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.41227182930975126;
    msg.lon = 0.9643070357592765;
    msg.height = 0.07452554459051752;
    msg.x = 0.7091916542321969;
    msg.y = 0.7172855347803072;
    msg.z = 0.8846125567892593;
    msg.phi = 0.320919867663772;
    msg.theta = 0.46822217686931256;
    msg.psi = 0.5923292145859994;
    msg.u = 0.0008703252048612997;
    msg.v = 0.5351186039911308;
    msg.w = 0.8722714499987007;
    msg.p = 0.9941975217653005;
    msg.q = 0.6392152963083508;
    msg.r = 0.23500294399460653;
    msg.svx = 0.3925261513494317;
    msg.svy = 0.5066257608040031;
    msg.svz = 0.9713106876873797;

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
    msg.setTimeStamp(0.2529420510098823);
    msg.setSource(27243U);
    msg.setSourceEntity(150U);
    msg.setDestination(26905U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.38230752836141135;
    msg.lon = 0.03812089667455332;
    msg.height = 0.11468037175731416;
    msg.x = 0.09770752117272974;
    msg.y = 0.5151506942882333;
    msg.z = 0.5974285182129196;
    msg.phi = 0.8866329365834891;
    msg.theta = 0.10095174167553644;
    msg.psi = 0.9543948535592668;
    msg.u = 0.5220275163324133;
    msg.v = 0.41176385106334146;
    msg.w = 0.914739391430116;
    msg.p = 0.253461303800521;
    msg.q = 0.5639865688428525;
    msg.r = 0.6325926458795138;
    msg.svx = 0.30954780348450117;
    msg.svy = 0.11781779051995045;
    msg.svz = 0.40321371583573795;

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
    msg.setTimeStamp(0.6788093010531848);
    msg.setSource(61702U);
    msg.setSourceEntity(124U);
    msg.setDestination(679U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.14692659272845454;
    msg.lon = 0.425415118435831;
    msg.height = 0.027816145344332077;
    msg.x = 0.9630817039911268;
    msg.y = 0.7389088093409689;
    msg.z = 0.6416462346758175;
    msg.phi = 0.5252316755963699;
    msg.theta = 0.19716451374751542;
    msg.psi = 0.4339306025716265;
    msg.u = 0.9345191650015793;
    msg.v = 0.31583826640084045;
    msg.w = 0.5045577664027578;
    msg.p = 0.8159341888265608;
    msg.q = 0.32505176809491687;
    msg.r = 0.16128250265721122;
    msg.svx = 0.6131649821447084;
    msg.svy = 0.12993256761712446;
    msg.svz = 0.5207789343782863;

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
    msg.setTimeStamp(0.6710623283408905);
    msg.setSource(56637U);
    msg.setSourceEntity(114U);
    msg.setDestination(39788U);
    msg.setDestinationEntity(57U);
    msg.op = 35U;
    msg.entities.assign("EGAUFPEVLSJUITVLJZOMINYXLGILQZZNWVPYTTJNXYDOYZBNSJWXMNYGSJKTWEMLQADDRFHFBFLHHRFEWXOWBFZSAUCPBMIZVAIMDACEUPJMGQRJMWNHPXFO");

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
    msg.setTimeStamp(0.6947616558618358);
    msg.setSource(23576U);
    msg.setSourceEntity(223U);
    msg.setDestination(29731U);
    msg.setDestinationEntity(15U);
    msg.op = 219U;
    msg.entities.assign("SUDDPZZCIRBNQKPSXRGOWSTNGLCXSQPORHATXFKIUMVEQOEAKDYOEHPWOWSRZEWZLLQFKVSQIUJVECVTNMKHCNJWSFBOKYTJMBFKIMLUXJDKJCYEGAEJCRNJYFBUFUXALDADYHDNQIVGGQZIRHIKWSRGHSGJRACXZZRXAHAFONIBULEJWWWQEPXZPLITZBRMMZCOF");

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
    msg.setTimeStamp(0.8863541191905943);
    msg.setSource(3419U);
    msg.setSourceEntity(142U);
    msg.setDestination(41139U);
    msg.setDestinationEntity(103U);
    msg.op = 27U;
    msg.entities.assign("RMIGUUOIBUOMKDXGUFMKHMWZQCHQBVVSVZZTYDYZEWOHOXUWTYYSRDRFNLZKJHAIPWMNLDFHEEMXEISHXNOUFNCYCGAN");

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
    msg.setTimeStamp(0.9357685522810493);
    msg.setSource(46040U);
    msg.setSourceEntity(68U);
    msg.setDestination(65209U);
    msg.setDestinationEntity(190U);
    msg.type = 17U;
    msg.speed = 20074U;
    const char tmp_msg_0[] = {-13, 123, -127, -42, -81, 119, 83, -28, 23, 105, 29, 103, -99, -32, -48, -70, -108, 66, 82, -28, 33, 49, 1, 1, 77, -74, 100, 100, -86, -102, 103, -84, 62, 23, -110, -51, 2, -22, 106, 92, -40, -127, 115, -90, 48, -87, -29, -92, 111, 35, 63, 39, -7, 72, 25, 30, -73, 123, -110, 41, -23, -36, 97, 26, -23, 125, -41, -39, -115, 106, -24, -40, 27};
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
    msg.setTimeStamp(0.46268612187011693);
    msg.setSource(1229U);
    msg.setSourceEntity(248U);
    msg.setDestination(31418U);
    msg.setDestinationEntity(72U);
    msg.type = 121U;
    msg.speed = 4683U;
    const char tmp_msg_0[] = {-19, 56, -61, 74, 33, 111, -82, -108, 57, -47, 17, -15, 2, -69, 70, -99, 1, 75, -119, -2, 71, 50, -51, 79, -111, -46, 77, 78, 29, -9, -37, -20, -9, -5, 69, -48, 56, -56, 75, 116, -15, 39, 84, 65, -122, -5, 93, 23, -90, -109, 125, 25, -44, 67, -47, 53, 12, -82, -22, 99, -47, 47, -68, -60, -104, -8, 123, 124, -3, 3, 32, -30, -90, -97, 52, -69, -110, 64, -123, -69, 95, 45, -114, 31, -97, 70, -80, 86, 69, -100, -12, 76, -41, -123, 56, -69, 11, -59, -45, 69, 106, -113, -9, -58, -106, -71, -6, 110, 112, -79, 109, 125, -17, 113, 37, -2, -48, 29, -100, -97, 101, 61, 15, -121, -5, 57, 29, 13, -16, 27, 44, -41, 116, 101, 20, -76, 23, 40, 10, -73, -11, -100, -108, 66, 95, 5, 65, -102, -115, 109, -27, -84, 109, -24, -2, 84, 34, 119, 112, -6, 89, -70, -91, 65, 122, -13, -86, -97, 35, -53, -9, 79, -124, -42, -107, -39, -82, -4, 8, -83, 53};
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
    msg.setTimeStamp(0.1286064262791743);
    msg.setSource(23790U);
    msg.setSourceEntity(197U);
    msg.setDestination(60257U);
    msg.setDestinationEntity(112U);
    msg.type = 209U;
    msg.speed = 17438U;
    const char tmp_msg_0[] = {-30, -111, 114, -116, -10, -106, -3, 2, 79, 52, -12, -77, 43, -11, -89, -128, -90, 23, -34, 101, -9, -124, 99, -48, 123, 73, 1, 48, -113, 71, 38, -98, -90, 44, -36, -114, -25, -32, -57, 34, 12, 107, -73, -45, -125, 84, -96, 62, 42, 98, -47, 24, 106, 0, -46, 10, 21, 1, 100, -107, 91, 107, -22, 99, 74, 77, -19, -109, -94, 92, -48, 52, 0, 5, 82, 106, 102, -89, 105, -35, -87, -6, -31, -40, -86, 19, -44, -3, -122, -108, 52, -6, 109, -63, -33, -71, -84, -101, 43, -80, -103, 13, 18, -53, 89, 3, 7, -60, -106, -92, 27, -115, -119, -58, 19, -80, 68, 94, 45, -51, -83, -90, -60, -49, -77, 57, 26, -122, 24, 4, -6, -13, -13, 36, -16, -87, 46, -80, -20, 98, 99, -54, -65, 74, 81, -41, 36, -30, -14, 28, 56, -94, 1, -125, -91, 63, -64, -113, 111, 24, 19, -97, -78, -70, -65, -17, 69, 62, -86, -103, 116, -98, -105, -38, -105, -74, -80, -50, -14, -20, 25, 90, 86, 78};
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
    msg.setTimeStamp(0.8572187677006398);
    msg.setSource(24354U);
    msg.setSourceEntity(201U);
    msg.setDestination(591U);
    msg.setDestinationEntity(164U);
    msg.op = 186U;
    msg.tas2acc_pgain = 0.11784436839316437;
    msg.bank2p_pgain = 0.7668330425522916;

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
    msg.setTimeStamp(0.9840175005809213);
    msg.setSource(38165U);
    msg.setSourceEntity(118U);
    msg.setDestination(58582U);
    msg.setDestinationEntity(239U);
    msg.op = 23U;
    msg.tas2acc_pgain = 0.5613817398352572;
    msg.bank2p_pgain = 0.34741465158122964;

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
    msg.setTimeStamp(0.9948415457994108);
    msg.setSource(40312U);
    msg.setSourceEntity(65U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(182U);
    msg.op = 245U;
    msg.tas2acc_pgain = 0.4967335897027527;
    msg.bank2p_pgain = 0.3296249279840602;

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
    msg.setTimeStamp(0.6269241644542018);
    msg.setSource(59476U);
    msg.setSourceEntity(105U);
    msg.setDestination(13780U);
    msg.setDestinationEntity(105U);
    msg.available = 1568209828U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.3192387135575563);
    msg.setSource(34541U);
    msg.setSourceEntity(146U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(156U);
    msg.available = 3751757630U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.24125546589646685);
    msg.setSource(53434U);
    msg.setSourceEntity(33U);
    msg.setDestination(38737U);
    msg.setDestinationEntity(0U);
    msg.available = 1889635713U;
    msg.value = 24U;

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
    msg.setTimeStamp(0.41208323536324853);
    msg.setSource(21572U);
    msg.setSourceEntity(38U);
    msg.setDestination(34734U);
    msg.setDestinationEntity(137U);
    msg.op = 179U;
    msg.snapshot.assign("UXQDYBBEDKDHIWNZXUJJKASGFOYTEHIUCXFUB");
    IMC::AbortAcked tmp_msg_0;
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
    msg.setTimeStamp(0.6960296407755688);
    msg.setSource(42405U);
    msg.setSourceEntity(52U);
    msg.setDestination(4749U);
    msg.setDestinationEntity(67U);
    msg.op = 16U;
    msg.snapshot.assign("TJPPGMHGCEMPIHIALNTCLZXTCISMJENQXYBAO");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41748U;
    tmp_msg_0.off_x = 0.15462490817179142;
    tmp_msg_0.off_y = 0.8549807003568982;
    tmp_msg_0.off_z = 0.47914596829443135;
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
    msg.setTimeStamp(0.5196778380060239);
    msg.setSource(49446U);
    msg.setSourceEntity(94U);
    msg.setDestination(21173U);
    msg.setDestinationEntity(217U);
    msg.op = 68U;
    msg.snapshot.assign("AJWNPYZMYLJENGTNGILAHKXAZKWWNFUMREIDMSYQNKSSBKOTHYMNIPLOYSNAZYULZLETRNCQNIQHDEJTLZECPYJUDRHBPWGKBCXGTYJTGVQQIVWWCQFOVFBOHPRFIIOKHSOXGLVVCEGJMGHVXMPQLC");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 33U;
    tmp_msg_0.error.assign("GYWFVGSKWEMXPEZAVQFELKUBICOZHCCOEOESAGYYCCLYKLSFURHUIITTDYKBIOSHBJNUDYAUOWQTHDESBPXXPCWJMOJYBFNDFWWHGZYDGGANYTCSNOVSREWVZZJOHNLA");
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
    msg.setTimeStamp(0.6104200489664233);
    msg.setSource(8476U);
    msg.setSourceEntity(134U);
    msg.setDestination(34341U);
    msg.setDestinationEntity(152U);
    msg.op = 61U;
    msg.name.assign("RGYNNAQSFIXNVCMMHMHGECDSJUQADPEMAKGEHRCUTZYRUAOVRITCMLGPOTIXZFJQLFWKJZJVYHKBGXRBEGSNLISYBOPFOUJNTCIQLIODRYQHLAHOOUBVEXS");

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
    msg.setTimeStamp(0.8748195541842847);
    msg.setSource(26670U);
    msg.setSourceEntity(29U);
    msg.setDestination(27661U);
    msg.setDestinationEntity(56U);
    msg.op = 144U;
    msg.name.assign("HOVTIARAOZUQWWPRAENQTDOVHGKGEBCMDFANZCVNFPWXBBMGFMJNLMSKHBNOFVXKTVCOXRQUMBJVNDIMWFTLTPVSGJEIQHJJFIARJOCYMSEMEKILBDSSUCWTQZPECDKIHBDXIGYKGQXGWHGNHAQXTWHLZBRDCEYRYKPJXZZNYARKETUGYXSVRIAQULKSTQZPRTUCPJDCOZSSOVWWPYNHAELHGEOILSYBXZAL");

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
    msg.setTimeStamp(0.8568941134399174);
    msg.setSource(39034U);
    msg.setSourceEntity(54U);
    msg.setDestination(44383U);
    msg.setDestinationEntity(150U);
    msg.op = 36U;
    msg.name.assign("WBNEWRDDBEXFXRYZAEQIPJXRKFKLOLDHOJEGFPZPHINYYEBFQVMJSMPWQKDPVTSNWOVEJXDFIGPLOAYDTVJVUYUVXTKPNICZCYQRNLGUNKWCAJMGPBHHCLCSAISGUJVKIKDYOANYULBYIEFTQTZEGSRTCGHSUSFFWNMNHMGESZTOUAVBASMFOLG");

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
    msg.setTimeStamp(0.035776827886499496);
    msg.setSource(56589U);
    msg.setSourceEntity(108U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(67U);
    msg.type = 129U;
    msg.htime = 0.946613411574286;
    msg.context.assign("SDPIUSHQTXYOJJYNBFODAVEAKXCCDWIQYCTGQLGLWUYDERNPBKYKGQGFBXGQXEQJUVOCVTUURLWMRVRPVKKCZAZADRKIEALWOHPJYGXZXHDJIWJUINXVHABOONOHSRZSOMGTWTFXFRCFULUFDZCQJFFMEVESMZOMLEANKMKZEBHVAQRQBGUABFRLFNGPCZYPTWULCIBXAEOTZWMPTDIVISMJITSNTHMDSPWM");
    msg.text.assign("JAUCJDBAJRNAWMEXLNGNHBSUOCZZYAMJKCTYSOTYPXVUIOGXFDZPANIVAQFPMDFCNOUMNRCNQKCTLTUKZSBPUZSXJTQGMAHBIFITNNWOTKDPQKRBDUVYSEUIRWPHOJKMYSCXHFJAEZFHRVIVMQQYEBVYYCLWFDROOE");

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
    msg.setTimeStamp(0.3387112400536707);
    msg.setSource(11856U);
    msg.setSourceEntity(4U);
    msg.setDestination(57036U);
    msg.setDestinationEntity(131U);
    msg.type = 92U;
    msg.htime = 0.1968209650390541;
    msg.context.assign("BHJWCETBGIPLNPULVAIFZVSOVOJRTAMEGATTKVXMCCXLYCCJQVFAAIKMINPDUXDVAJBYEKMPIGUYRGDWMASQQRWQHYEHTXFKZSJLKRWSFMKDVTIZNLFIZGYEPRXEOFOGQYGGOQHXVBCUWILHNNBDDXNBLQRFLAMPCSEOHXQYAAUZWKUKEZRTLVGDFNHDXDSBMKESNWZJMMHZYSKPILURYOWESWXUCJPHCOFTVJUHZOCGPTNNRZQYPISQFBT");
    msg.text.assign("QTJYUHRJXEHXOQLEJNMWNIYCQXFXMRELWVRXYEMGRWEFPCIWGBBTBSXKKGKSKMYISSAWBANJEKBQLNZRDXHZHNBDDUHLMCJPQPQCWNZRBFILOQPAGQNWFPBTFPVWAOUYPLRVUDEKT");

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
    msg.setTimeStamp(0.7666364500344803);
    msg.setSource(47127U);
    msg.setSourceEntity(209U);
    msg.setDestination(49275U);
    msg.setDestinationEntity(13U);
    msg.type = 42U;
    msg.htime = 0.7600120373940173;
    msg.context.assign("OSRRFGYMAXJIHCXUMPBZDBFGQTIIAZTNJUTZGWATBXBWCGQNPNHYCMQMYWFGWFRUILMBQHVOCYUYPKDSIBJCLVPVSEHMWQZPBAGUOQEMKODEOELYOXYPRDAEHLIMCFHNDXRMYQJIFFKCTE");
    msg.text.assign("BZVLGMOQDLBXJGOYCIIKGIJVQBKSPZFRUOMSXBFQPDANMFSHTBWFRNYAGJGDYMGCOJUZRZLHVWDFFEKSNDZEYBULXYIFGHFCRQHUZHKISUPOUWVWDCTHTWOKQKBMENJSBJYAQKCKUNNXTGAWXNJYBRPENCSLETBHCYVMAHNIJWXVCVXUJHRIM");

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
    msg.setTimeStamp(0.3055511607689295);
    msg.setSource(17635U);
    msg.setSourceEntity(201U);
    msg.setDestination(61657U);
    msg.setDestinationEntity(95U);
    msg.command = 107U;
    msg.htime = 0.08000361004516776;

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
    msg.setTimeStamp(0.8508883771389982);
    msg.setSource(25125U);
    msg.setSourceEntity(61U);
    msg.setDestination(38926U);
    msg.setDestinationEntity(211U);
    msg.command = 137U;
    msg.htime = 0.2997702939458914;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 195U;
    tmp_msg_0.htime = 0.06402049300958113;
    tmp_msg_0.context.assign("EQGXGLXQGFCOPVHWEHALGTFTHCLNPLIUYYCTUXUFC");
    tmp_msg_0.text.assign("LUYGCHQOBAQYJVGXDCKZHBDRQFHTOQQBEHTQDVWYVMWMMBJRNSZCAJOPFTLJ");
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
    msg.setTimeStamp(0.1160697580964627);
    msg.setSource(61019U);
    msg.setSourceEntity(253U);
    msg.setDestination(56846U);
    msg.setDestinationEntity(48U);
    msg.command = 241U;
    msg.htime = 0.18318156806537456;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.5975666252496101;
    tmp_msg_0.context.assign("WRAQYNJZWZWDMKNMCQSCXY");
    tmp_msg_0.text.assign("OXLFAGUJTUBYWDBQKBHNJPMSIVJTCFRNXTFQRUTJSPHEOZRCMFONXDOCGMLRNLEAWCEDKXMTQCQGVAPKGYQSKRBPHXYEYVID");
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
    msg.setTimeStamp(0.7612779308652847);
    msg.setSource(57256U);
    msg.setSourceEntity(63U);
    msg.setDestination(1213U);
    msg.setDestinationEntity(57U);
    msg.op = 156U;
    msg.file.assign("ZFBNBADXRPSRQYEWLQFGWBHIICUPACJVHOZBWKFOJTWYPVIJBCUTHHYLALIVEJMQXVUUUNDDZZGZKDGQZUMNFCANKORYPMGFZAIOKKJWKRGQBZUWMLQRHVHBZYQSWYXOHGTXWAEENJJGQFAXIMJNDGCUNCASFAWKIRSDLLZSHHUIPSOYSMOITROLTWJVLPJDNSMPDTMYEXXMVRBPRXRTBNELMEDTKCCGFGXIFSHSPTLAUYFKKQCV");

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
    msg.setTimeStamp(0.5212513964509485);
    msg.setSource(58550U);
    msg.setSourceEntity(131U);
    msg.setDestination(27961U);
    msg.setDestinationEntity(69U);
    msg.op = 3U;
    msg.file.assign("QANLLESVLGQFZJIHNCJYIPKDEDBMLAIEXDIHTCPTZZBJGDNFRGEYIVEFJRFHRDXEWOFSCUTICMVUPWUVUKHBNTYSCWKPHDELXMPKLOQWFSYWQRUGVEUCIUVBUPJBCWNEKOXUNKYCWPXXFZLQRQUZCLYZMTGFMPTOXFZATAAROBSAGQJIXOGTBKOHGCMZHYYVBMGQ");

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
    msg.setTimeStamp(0.8582314362475898);
    msg.setSource(8531U);
    msg.setSourceEntity(120U);
    msg.setDestination(62732U);
    msg.setDestinationEntity(93U);
    msg.op = 48U;
    msg.file.assign("CKCZKUHOLOFNBEHKAIUUCORDOIDYRYANQCGPSUCYJWTKTMYKAZNAZQYJDIJKWDQCWTIFGSXFYHMBVEPMOEUGBGDGWCVQZZQNFDRIRSCBRPOTVPTVIQLXIXIUEQGLTEIKHDNSBRBHSNWXGUZHPXDJQYSFEKYAJMSUCLEG");

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
    msg.setTimeStamp(0.20765801577428922);
    msg.setSource(65012U);
    msg.setSourceEntity(72U);
    msg.setDestination(5692U);
    msg.setDestinationEntity(233U);
    msg.op = 52U;
    msg.clock = 0.8276207558520429;
    msg.tz = -31;

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
    msg.setTimeStamp(0.165105358558726);
    msg.setSource(46252U);
    msg.setSourceEntity(227U);
    msg.setDestination(15805U);
    msg.setDestinationEntity(229U);
    msg.op = 123U;
    msg.clock = 0.09668899458622449;
    msg.tz = 24;

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
    msg.setTimeStamp(0.38276130129522734);
    msg.setSource(39887U);
    msg.setSourceEntity(96U);
    msg.setDestination(23924U);
    msg.setDestinationEntity(163U);
    msg.op = 39U;
    msg.clock = 0.19176363437519273;
    msg.tz = 100;

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
    msg.setTimeStamp(0.02436044332130638);
    msg.setSource(39405U);
    msg.setSourceEntity(184U);
    msg.setDestination(59570U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.26606074667609014);
    msg.setSource(32431U);
    msg.setSourceEntity(246U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.9522047642866076);
    msg.setSource(46469U);
    msg.setSourceEntity(46U);
    msg.setDestination(49856U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.7298467004394603);
    msg.setSource(2602U);
    msg.setSourceEntity(15U);
    msg.setDestination(36113U);
    msg.setDestinationEntity(207U);
    msg.sys_name.assign("LZIZJPGMVGQODFYDCJZJAUEZXAQXKRCPBONXFTARJVZSGMIOMUVBHYMKWKNIJCWAGZULFHAVUSXXTPWOYLCGTWMKVKDLTSIBEMXDLVHSATFAPOEHUKHKAXUWWQIDJGWXCVRMNCLRIPCPSMMSHCKSBUEWSLZUSGQENKTOHZUNPPYGTKJYTDOQZVDYLJOYFWIEIETHSQX");
    msg.sys_type = 40U;
    msg.owner = 28496U;
    msg.lat = 0.43350612794255694;
    msg.lon = 0.42690352767426964;
    msg.height = 0.29242058967918405;
    msg.services.assign("EBAVPODGXSIHRSYQIMFMLKFKDDFMFMKNMRCRUUUBBVNFIITRVTYCOHATERWUKXKGZABEJSOBFXTJJHUQROCLGGEBJQNXMHOHTVJVOVBQRVPWXSNOLIDPTEQVDAMKFKTCACLMWXTJHIFGUGB");

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
    msg.setTimeStamp(0.5264750029531152);
    msg.setSource(58532U);
    msg.setSourceEntity(40U);
    msg.setDestination(205U);
    msg.setDestinationEntity(165U);
    msg.sys_name.assign("XCSFHVHXXBMIQUWGWRMMDRVBO");
    msg.sys_type = 82U;
    msg.owner = 63977U;
    msg.lat = 0.5181828388297207;
    msg.lon = 0.6095841723535708;
    msg.height = 0.18825386541875888;
    msg.services.assign("UKBOPEUVLBMIOWVXYMUPQWUOFCPSQXNLJ");

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
    msg.setTimeStamp(0.16362729836375378);
    msg.setSource(29264U);
    msg.setSourceEntity(71U);
    msg.setDestination(59007U);
    msg.setDestinationEntity(116U);
    msg.sys_name.assign("DMHMGADUVAANLRGQHMZRMEKWUKCXCJFPJJHUAYCTYLSWOQVQESRDLWZBPDQPYQUBIORXFLDMEEBGKGBARVZIPCHSBXCZ");
    msg.sys_type = 31U;
    msg.owner = 59756U;
    msg.lat = 0.6271453264091966;
    msg.lon = 0.4440996119245233;
    msg.height = 0.8467892243477274;
    msg.services.assign("LPPEBJMMDTSMDTVRULEKCKIXLVJKNZWJIHAVCIFHURNVETDXNOIYYDZWUYGOQNDORKDBNECYOLUYKQPBIBBUSDTFHFOPRPNVGTSHCHHLSETZLYILCHBHXFUFJKNGXJGAXODTEUOPMXWHKLZXUEPFVCMVVKIWWRECVCTUIHWFWGAJSASA");

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
    msg.setTimeStamp(0.21674988680196372);
    msg.setSource(40740U);
    msg.setSourceEntity(64U);
    msg.setDestination(16293U);
    msg.setDestinationEntity(123U);
    msg.service.assign("MEMCLHMENWBXDNKYUIHFAVWBIBRATXEQJPKXIKBAJKBVXVPDOEPEOSCDZIJPAROILEOSLZXMMMLYOYYNNVOVEVQZJITJYKZIWLRVLHXAYRIRPHENBOZTLHKHGHQGSMGTYSODVNVTWSYRCJUSQNNTUUZCCRTG");
    msg.service_type = 27U;

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
    msg.setTimeStamp(0.44675979640568797);
    msg.setSource(19314U);
    msg.setSourceEntity(227U);
    msg.setDestination(62325U);
    msg.setDestinationEntity(6U);
    msg.service.assign("AKRZQEASIQKJCWEDREAUXDEQRWSVHTWJKBJQANEACPE");
    msg.service_type = 34U;

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
    msg.setTimeStamp(0.8574807509319421);
    msg.setSource(6323U);
    msg.setSourceEntity(64U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(178U);
    msg.service.assign("GJLEOHXKAVEAMBZXIGNFHFOCQBSPYKCISLNCPSNVAWGGR");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.7083354867792946);
    msg.setSource(15959U);
    msg.setSourceEntity(18U);
    msg.setDestination(48097U);
    msg.setDestinationEntity(199U);
    msg.value = 0.9388001950691572;

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
    msg.setTimeStamp(0.4524402727307121);
    msg.setSource(64480U);
    msg.setSourceEntity(89U);
    msg.setDestination(30689U);
    msg.setDestinationEntity(90U);
    msg.value = 0.024318617909795837;

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
    msg.setTimeStamp(0.18564158898743544);
    msg.setSource(63114U);
    msg.setSourceEntity(80U);
    msg.setDestination(13507U);
    msg.setDestinationEntity(67U);
    msg.value = 0.48151842010914103;

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
    msg.setTimeStamp(0.6734922994460801);
    msg.setSource(16537U);
    msg.setSourceEntity(120U);
    msg.setDestination(31285U);
    msg.setDestinationEntity(231U);
    msg.value = 0.4222188150963224;

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
    msg.setTimeStamp(0.3547730376283743);
    msg.setSource(20092U);
    msg.setSourceEntity(193U);
    msg.setDestination(25447U);
    msg.setDestinationEntity(213U);
    msg.value = 0.058656032531596014;

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
    msg.setTimeStamp(0.5987196786350043);
    msg.setSource(21694U);
    msg.setSourceEntity(50U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5120852497623436;

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
    msg.setTimeStamp(0.09000729867396395);
    msg.setSource(27921U);
    msg.setSourceEntity(202U);
    msg.setDestination(22503U);
    msg.setDestinationEntity(233U);
    msg.value = 0.30397503793145675;

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
    msg.setTimeStamp(0.8913350918619151);
    msg.setSource(7527U);
    msg.setSourceEntity(115U);
    msg.setDestination(46280U);
    msg.setDestinationEntity(143U);
    msg.value = 0.39209071560370123;

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
    msg.setTimeStamp(0.7185804261894881);
    msg.setSource(8272U);
    msg.setSourceEntity(221U);
    msg.setDestination(8943U);
    msg.setDestinationEntity(151U);
    msg.value = 0.23016409745176003;

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
    msg.setTimeStamp(0.9334496451478194);
    msg.setSource(27319U);
    msg.setSourceEntity(57U);
    msg.setDestination(30022U);
    msg.setDestinationEntity(129U);
    msg.number.assign("FFWYIVPKZDASQXJTARHUAFLPSLRXCBQBKVHYRXWGYNDTXWSTNTXUYIZBJEGFGMWUVVQXOUMJCEOROLGOGJIXQGDKAMYXLZPMAKBQCSOCF");
    msg.timeout = 37834U;
    msg.contents.assign("FEJAVIRKUGNQRNTCPCGZKLPKZKVHQPPMIKHCGVOBABRQMDQIFKUHTEBWOUCMEOZCGQVRTHVESPECZRATMEDAJHVBIPMQKWUBOLLWHWLSFVVGDLHYOCTDMMUJFCERNWSPFQOAYJJHBXLEPOVNYWYOZNJGTSYUYYJDGM");

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
    msg.setTimeStamp(0.25587225945509573);
    msg.setSource(25379U);
    msg.setSourceEntity(121U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(120U);
    msg.number.assign("RKUARFZFPYMJEBYBFDHVFSJOFSHKYPNEGDCKGECTXPOIFWBEVYHSLMXOPDDDOMINCIMEORSJ");
    msg.timeout = 37934U;
    msg.contents.assign("QINARDZQPSIBHXOZZTWMHBRBAJLKDSTALCYMCYSTIQNRKTNGWFBYWTPDIMZIXPZHDUCVRZHQZUEKEHIITAVVHNPLKXBAVLOERJYOASREHF");

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
    msg.setTimeStamp(0.9789102551836623);
    msg.setSource(3467U);
    msg.setSourceEntity(140U);
    msg.setDestination(31971U);
    msg.setDestinationEntity(217U);
    msg.number.assign("KQOBRFYZOGTWHDSLVNXVKKTXFQRFDOBCAMLAMGSPEQIOOOUGUEAFNLKSZPBRQBBZCDVRJHHTOXAKEBTWZHTPAKLDULJAMVUXTSYSCRRWWASZYNTQVSPUBQIHIDRSGPVBVBHOMHUWCSWLTIYVQXYFMJNKJVTLMYTQCPGPUDPWNNFDZZJANEGZOHQFWGSLZEXIJAH");
    msg.timeout = 3849U;
    msg.contents.assign("ESJVWXNBKLQZPWPDCMZZKGNXCLCZAURVBQVNACAETGGPVRBYHBCUVNSHWPDVTNAOQELIOYTDKGNFXJSUSUKRWRSYDMYDOZNJFGHZFECWQYASMYSAXDUWOUVIPEZOHCWIGZFJFOIA");

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
    msg.setTimeStamp(0.3995018923152662);
    msg.setSource(24094U);
    msg.setSourceEntity(51U);
    msg.setDestination(55635U);
    msg.setDestinationEntity(6U);
    msg.seq = 1551489667U;
    msg.destination.assign("GIGBQDEFQJZBLNUAMFWYJBLCBEZCRXIYNMYDR");
    msg.timeout = 20829U;
    const char tmp_msg_0[] = {82, -75, -30, 81, 68, 6, -69, 19, -20, -106, 117, -100, -72, 77, 30, 59, 120, 0, 115, -12, -54, 36};
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
    msg.setTimeStamp(0.4177238989777794);
    msg.setSource(23327U);
    msg.setSourceEntity(40U);
    msg.setDestination(10036U);
    msg.setDestinationEntity(6U);
    msg.seq = 4215104139U;
    msg.destination.assign("UPQVWVUQJGRHGLHXHVFUQZJKCGIBJMMTPJXNJGMKPDYYTHCEXNOCYDSFOORNHQWIOTNBUZXELWOTGFZIEKEGVFBMHRBAECXERGDZYMASHADFLNRJJWRLKWSCOGNSA");
    msg.timeout = 9999U;
    const char tmp_msg_0[] = {110, -44, -86, -3, -28, -80, -62, 89, -32, 84, 49, -20, -53, -127, -88, 75, 115, -94, 70, -94, -78, 122, -58, 102, -37, 28, 43, 9, 90, 23, -78, -30, -114, -86, 84, 94, 38, -127, -101, -55, 115, 29, -123, 7, -37, 126, 88, -39, -69, -83, 68, -81, 88, 48, 90, -73, -6, 13, -18, -76, 63, -127, -12, 85, -82, -29, -65, -103, -62, 71, 124, 74, 77, -65, 92, 97, -85, -30, 113, 117, -114, -118, -101, 30, -115, 99, 27, 120, -4, 64, 33, -69, 50, 44, 74, 42, 92, 59, 98, 19, -111, -32, -92, 111, 65, -52, -22, -107, -29, 31, -17, -91, -127, 33, -119, -90, -21, 7, 61, -50, -45, -64, 64, -106, -56, 100};
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
    msg.setTimeStamp(0.3497301019689639);
    msg.setSource(11815U);
    msg.setSourceEntity(120U);
    msg.setDestination(22773U);
    msg.setDestinationEntity(148U);
    msg.seq = 2191841894U;
    msg.destination.assign("FTUXCUJBOYGBQFDWCHVQDCSLDDBIIDIELNYRGOYVXHKHKMGQANYRVNQNTONSZFZWLLPMSKMYHIFSKNCLJQABOEHENUHXQVPHXIDTUOOIZSRKFCGDGRRROVUEEBGRFJQOJAXTBCWRFYLILYOQTELSMSWBBJWJMQFXKREAFPTKASCVWJZYAPZMEWVJXKLPIPIDPDMBGGTVTYALDCJBPPHJUGEUCXMZVKZRVCNAT");
    msg.timeout = 15436U;
    const char tmp_msg_0[] = {40, -82, 108, -54, 63, -33, -44, 104, 124, 121, 117, 63, -49, 25, 37, 123, 31, 15, 10, 21, 119, 111, 81, 63, 44, 94, -51, -74, -84, 106, -124, -24, -32, -104, -114, 84, 93, -85, 104, -89, 55, 66, -58, -63, 77, -91, -57, -27, -79, -95, -94, -38, -123, -41, -8, 85, -65, 1, -103, -63, 56, -117, 5, -46, -38, -35, -76, -30, 116, -56, 26, -128, 104, -88, 2, -110, -75, -49, -95, 78, 32, -115, 117, 90, 125, -37, -50, 44, -38, -111, -73, 11, -56, 74, -33, 73, -64, 83, -79, 73, 117, -112, -101, -127, -46, -7, 93, 44, -80, -88, -99, -1, -8, 17, 29, -125, -7, 116, 18, -105, 9, 73, 64, 13, -102, 87, -18, -128, -99, -59, -79, -113, 104, -20, -12, 4, -112, -13, 11, 36, 16, 116, -65, -50, 11, 105, 110, -8, -87, 53, 52, -124, -2, 82, -41, 13, 13, -117, 34, 49, -11, 42, -29, -114, -70, -100, 69, -22, -18, 86, -102};
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
    msg.setTimeStamp(0.27790993220882687);
    msg.setSource(16160U);
    msg.setSourceEntity(207U);
    msg.setDestination(43206U);
    msg.setDestinationEntity(50U);
    msg.source.assign("RSOODLZLDMCBYACVXTEANVWWCPXQMNHBWEGBQRIGXVXRHUJKRLXFXDYYFYBPVGPBZNIVDCJGISJHTOJQMCQMLOFWFRGBWDETKFZENDWLKZAWOQKUUGGCNFEHMELJHKPYUFEYFUJVCMIJOKTVRSIZUPOADQVZJCSOTISPZMTAFKTFUNARBYBIYTANACXMWOGSDVPVHLKYSSGCLZAAWYSPEOEXM");
    const char tmp_msg_0[] = {-7, -103, -99, -53, -101, -122, -7, 42, -51, 60, 72, -96, -15, 21, 23, 86, 84, 41, -6, -2, 91, -27, -24, 109, -74, 78, -61, -20, 59, -111, 77, -66, -3, 71, -63, -64, 115, 5, -24, -95, 15, 33, 114, 98, -111, -34, -106, 35, 68, 123, -102, -118, -88, 124, -89, 24, 1, -64, -99, 36, -27, 55, 59, -67, 30, -38, 118, -43, -91, 71, 25, -64, -55, 126, 38, 113, 91, -93, 120, 91};
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
    msg.setTimeStamp(0.24370376897885715);
    msg.setSource(33944U);
    msg.setSourceEntity(111U);
    msg.setDestination(35701U);
    msg.setDestinationEntity(34U);
    msg.source.assign("VEKMDQBJJRFLBMXUCATGSHDLUCSXSUOFHQINYULNMTUWOXBLROOCJNUJFE");
    const char tmp_msg_0[] = {-111, 91, 77, 13, -98, -103, 91, -71, -41, -96, 36, -66, -87, -77, -24, -16, -64, 124, 50, -53, -125, 91, -59, -1, 3, -98, 45, 88, 98, 44, -88, -85, -67, -112, 103, 24, 68};
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
    msg.setTimeStamp(0.46971762555268115);
    msg.setSource(50270U);
    msg.setSourceEntity(3U);
    msg.setDestination(32954U);
    msg.setDestinationEntity(31U);
    msg.source.assign("VTEYYRZWSIGLHEIUGBSFNKGSBGPAIXUVPQVNHQVQHLPXXFLAILROJFSCGDMKUVYFWSFGFYXHTVSBOMTZFAGIYANPFJUXNRB");
    const char tmp_msg_0[] = {-34, -105, 26, 109, 104, 63, -104, 19, 18, -126, 116, -96, 46, 21, -31, 68, 81, 88, 50, -98, 36, -28, 33, 32, -92, -109, -54, -112, -122, -113, -23, -88, -85, 122, 85, 104, 80, -69};
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
    msg.setTimeStamp(0.020874733538611245);
    msg.setSource(54475U);
    msg.setSourceEntity(223U);
    msg.setDestination(18996U);
    msg.setDestinationEntity(118U);
    msg.seq = 782103872U;
    msg.state = 196U;
    msg.error.assign("PTVLOEVYSPAGXNCNMTEQAEZZYBUKQHKRWLSGMTXBPIBVHIVBDKSDHWNPCXELOAPLZICYFOCFFOJWWFGRONXRMPREIYEZJGKMCLKRRVUZDGWWMVIEDHLDYBFQZXBSUYHTQSFNVULOSBDWQSXZROLNSPGUOUDTZNUDHMCBPBGKTJYOZXCSKMCHKEKNUIYOEQMANJFIQRLLFHGJVCWTAFJVJYMBSWIYDUKEJ");

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
    msg.setTimeStamp(0.44551992645761007);
    msg.setSource(2242U);
    msg.setSourceEntity(252U);
    msg.setDestination(9649U);
    msg.setDestinationEntity(195U);
    msg.seq = 2805236957U;
    msg.state = 190U;
    msg.error.assign("IDSAAEWRTZYSFGSOUADGTHQUBXMGBCWHIFTLXLPHLVAOAFHGVBNDLTRGV");

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
    msg.setTimeStamp(0.47854351115344984);
    msg.setSource(31818U);
    msg.setSourceEntity(248U);
    msg.setDestination(60965U);
    msg.setDestinationEntity(166U);
    msg.seq = 2341208562U;
    msg.state = 194U;
    msg.error.assign("OXTOSYMJAXWJSBQBSWNDMUFPWSJNAXNIXBQDCETNFFVVMHZNMRRENVELZFNEYTHITGCXXBHFCOLQUYHACCXWYVPF");

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
    msg.setTimeStamp(0.8307251104890079);
    msg.setSource(32546U);
    msg.setSourceEntity(68U);
    msg.setDestination(23437U);
    msg.setDestinationEntity(115U);
    msg.origin.assign("BZCCWSGPCZBEBLMTHTZDRPGYLPDZRHQKIBDUXTCWYVPOTIDNBKDPBANCJIJTCKPHDUEEDVGROZESYWJMSUGSOAORDQCHVRWRERDVMAFPPHAFJXBCTHZMFELZTLATFXOJQWQZIKKFOUVHBAUWQOKANYKZUJNMJOVHNYRFJXMIQENESWLTWVYYMYIQEHLXMUGLEUCAJVQYGWDSH");
    msg.text.assign("ZTZTHNUSCBNIUVQBENLXYDGRZELIBVLPBFGUCJMHHXDJMULCNPQUTMWGTHYPEWPVEAXOTJHQFOSCOBYXOUVZPVDVAWRHKLIAYLHNQOKTPXMRIVFITYVHCVUJMSCCFKXIZAIPSXDWVGEEZYBRGBYWDHBJGZYFRUADOIOORKSJGYCAPJDWOTXGGAQMEZPRQMDQI");

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
    msg.setTimeStamp(0.5396523003841265);
    msg.setSource(23780U);
    msg.setSourceEntity(143U);
    msg.setDestination(142U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("LCNUDNXYMKAWZTFTRMVXXZNQSBSYQJFEANRSOGDTBUBWHHIBRGMKPRUCHOEJCRMWQTCEPANKOONSBIKTEJOOKHBCVZLVMQCYRVACPGWHYBPQREMQVDXSPOELBZUVFMPNGGXKSCSXWTFQHHFELQYAZDZSWCJGXLJUMLUSPB");
    msg.text.assign("PLHMICEYQJRHCUAYQTGIKUYKEOBJAQMKWNYTMLT");

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
    msg.setTimeStamp(0.7998667809096937);
    msg.setSource(12187U);
    msg.setSourceEntity(165U);
    msg.setDestination(20802U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("DFDZCSYDXLKKGEJSMMJXAPXLULFGOEWTYZRVOEDQUUZODRVQUPKPQBKLMEGKWEDCTCUINPVRADGNMJHHFAQNXSULJOOYOHWAOIRILNYMGNHSYIWHTWAURQEDRMFWUVLGIKNICOJUZCFTZXVSOTHITKXIQPPMVOHLTYYSSGCKCFTBXCTLUKNPIZBSBJAJFQLVREXJWRAIWBBEJSMCFNZGHYBVGKDNVEBRCBRA");
    msg.text.assign("ROJXYTNHZLQ");

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
    msg.setTimeStamp(0.13585251370013862);
    msg.setSource(17755U);
    msg.setSourceEntity(196U);
    msg.setDestination(51704U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("ZYCXYVTRRLOWQWYZUBQXJVDSWCOJWZJKCBBDIUSHRSCQNZYBFGSKBQJRIKZEDZDPAESRUNNTZSXWPXMXOAUHZVMCLMWOEQLTPJFKGTGQKBVWSWNJTJOQNGEMKYXAPDQCUMUHFXAMHBSYBTIJDHVVAPHTKNUARIGYOURFET");
    msg.htime = 0.7509115970438122;
    msg.lat = 0.05635898223901814;
    msg.lon = 0.3598666269051439;
    const char tmp_msg_0[] = {123, 115, 62, 0, 84, 48, 70, -75, 84, -90, 54, 29, -70, 80, -124, 34, 123, -46, 68, 58, -123, -26, -26, 39, -57, 29, -28, -49, 125, 80, -42, 87, 94, 105, -34, 4, 55, -15, -47, 100, 86, 17, 9, -62, -58, 70, 85, 11, -96, 124, 96, -61, -119, 12, 109, -64, -57, -87, 56, -93, 36, -89, -69, -105, 5, 100, 26, -115, 31, 2, 6, -12, -46, 102, -88, 98, -47, -41, 1, 126, 118, -71, 82, -45, -23, 28, -11, 82, -75, -87, 56, -50, -112, -37, -81, -45, -72, 125, -11, 27, 44, -64, 43, -82, -128, -31, -65, -53, 76, 41, 55, 110, -114, -35, -21, -46, 68, 38, 106, -118, -53, 120, 113, 73, -127, -26, 108, -99, -28, -47, 115, -98, -126, 103, -126, 100, -127, 119, -87, -67, 7, -38, 11, -21, -68, -23, -103, -3, 97, 120, -56, 34, -114, -97, -48, -100, -72, 96, -60};
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
    msg.setTimeStamp(0.6119962122167726);
    msg.setSource(13283U);
    msg.setSourceEntity(71U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("FLVJQGETSEXJBYZNHADOQMDMGKKBKBANQCDVWWCISSJQXJRFYHPMXCPNNQFRNOLRUTESIUIQXWAGWIOEEZADUZTBXGPEPEZYFOUUFFRHOMJIAGPRZDMGFZWSZUQSVCLMEVAJTDTCHHBVUYKIZWVCLJTAAOOXTWCVCRNOBWKHIPLKTYBRSKELZNIFPCYLYC");
    msg.htime = 0.7072324146955521;
    msg.lat = 0.883667745090966;
    msg.lon = 0.4991685314637542;
    const char tmp_msg_0[] = {-120, 30, -65, 114, 45, 65, -95, 15, 55, 96, -22, -4, 100, 27, 122, 5, -90, -113, 104, 1, 51, 72, -37, -126, 84, 42, 29, -67, -37, 5, 37, -103, -31, 53, -28, -123, -30, 79, 34, -88, 29, -96, -79, -13, -63, 114, -55, 18, 16, 84, 47, 4, 112, 16, -35, -79, -18, -1, -33, -18, 96, -102, -106, 7, -52, -74, 86, 47, -55, 27, 115, 84, 116, 83, -115, -12, 30, 65, -8, -75, -29, -75, 6, -84, 27, 52, -81, 17, 81, 93, -6, 17, 100, -109, -71, 34, -18, -73, -57, -88, 126, 87, -118, 59, 122, -38, -29, -76, -69, 91, -107, -99, 103, 4, 44, 120, 121, -43, -95, 71, 93, -106, -29, -75, 99, 40, -41, 56, -4, -50, 97, 95, 88, -1, -45, -93, 2, 3, 90, -53, 48, -90, 30, 17, 103, -87, 8, 55, 28, 67, 89, 92, 38, -128, 101, -10, -53, 61, -56, -100, 30, 81, 103, 65, 84, 42, 63, 16, -74, -79, -117, -77, 112, -102, 106, -102, -56, -19, -94, 49, 112, 1, -117, 12, 21, 13, -57, 90, 38, -30, -63, 102, -1, -100, 64, 74, 84, -14, -91, -88, 104, -55, -2, -44, 95, -82, -103, 34, -77, 93, -63, 79, 101, 108, -111, -114, 64, 115, 89, 97, -115, -18, -17, 38, 100, -62, -106, 54, 3, 26, -110, 21, -126, 37, -50, -22, 52, -88, 18, 1, -35, 60, -45, 126, 12, -31, -10, -125, 84, 76, -17};
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
    msg.setTimeStamp(0.9055185115507342);
    msg.setSource(40777U);
    msg.setSourceEntity(196U);
    msg.setDestination(38770U);
    msg.setDestinationEntity(45U);
    msg.origin.assign("QEXNDRVGWCVSLRQRGFVXUEKNEUOFAIBQMJNDURVHWWGIYOSLSPOYMJNXXODTRIDWLL");
    msg.htime = 0.5334475694066289;
    msg.lat = 0.5598070196541691;
    msg.lon = 0.13113102067515936;
    const char tmp_msg_0[] = {-97, 93, 21, 91, -125, -5, -39, 41, 28, -97, -37, -12, -49, -8, -51, -110, 33, -9, 115, -66, 97, 86, 90, -4, 46, -11, -77, 100, 126, 48, 60, -89, -38, 111, 69, -15, -33, -24, -122, 84, 73, 15, 34, 1, 89, -113, 15, 10, 66, -124, 55, 101, 55, 110, 44, 73, 20, 30, 36, 5, -30, -94, -98, 16, -111, -6, 56, 72, -102, -125, -86, -65, -107, 41, 72, -90, 118, -10, 60, -7, 54, 6, 114, -1, -8, 61, -93, 121, -106, -93, -116, 28, -63, 58, -6, -122, 51, -109, 102, -51, 24, 12, -23, -96, -51, 95, -61, 122, 62, 73, 81, -51, -49, -76, 119, 40, -91, -76, -73, 22, 51, -34, 16, -95, 10, -126, 101, 69, -38, -6, 95, 21, -91, 3, 51, 88, 26, -106, -36, 105, -71, 54, -105, -9, 4, -59, -112, 45, 89, 84, 111, 97, -119, 12, 122, 13, -53, 15, 65, 76, 123, 4, -37, -74, 114, -127, 103, -46};
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
    msg.setTimeStamp(0.1444842429022758);
    msg.setSource(50818U);
    msg.setSourceEntity(132U);
    msg.setDestination(59828U);
    msg.setDestinationEntity(144U);
    msg.req_id = 46885U;
    msg.ttl = 11205U;
    msg.destination.assign("VHYHAWMWTFDDKFIRLVKOCZPSFMTVNA");
    const char tmp_msg_0[] = {-96, -37, -61, 5, 90, 121, -74, 5, 32, -114, -7, -16, 46, 20, 123, -120, 102, 126, -107};
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
    msg.setTimeStamp(0.05631970321638391);
    msg.setSource(18062U);
    msg.setSourceEntity(7U);
    msg.setDestination(26389U);
    msg.setDestinationEntity(69U);
    msg.req_id = 61506U;
    msg.ttl = 20756U;
    msg.destination.assign("RTCUXZBDOGNDAPYMSRUFYWNLLUEEPSHBWBXDCVMXBWVAUFHGWUKQEAOCOYJOMMYGJWAQBRVOSZNJTATXQKDEWRFWNDVUYJX");
    const char tmp_msg_0[] = {54, -43, -15, -50, -121, -11, 67, -22, -33, 57, -11, 111, -34, -117, -101, -42, 76, -84, -14, -99, 42, 73, -7, -124, 64, 114, 29, -94, -35, -93, -111, -53, 7, 73, 40, -10, -46, 81, -106, 122, -16, 41, 16, -118, -14, -54, 78, -125, 88, 99, 83, 0, -14, -116, 59, -19, 47, -10, -84, 28, 52, -76, 35, -100, -17, -99, 33, 66, 115, 50, 112, -101, 107, 3, -14, -82, 22, -126, 81, -59, -17, -21, 83, -75, -30, -13, -107, 45, 100, -10, 54, 96, -29, 64, 92, 113, -109, 40, 94, 6, 40, 116, 6, 13, -88, -31, -25, 115, 36, -45, -39, 60, 2, -95, -110, -114, -4, -15, 75, -44, 111, -79, -122, 86, 10, -116, -72, -68, 69, -120, 28, -22, -125, -116, 29, 66, -81, 57, -50, -91, -87, -63, -72, 59, -125, -78, 10, -113, 54, 44, -101, -19, 104, 103, 85, 55, 3, 15, 35, -58, 39, -33, 34, 53, 4, -60, 60, 19, -27, -21, -45, -71, 16, -29, -75, -30, -127, 19, 70, 38, 102, -17, -48, 53, 111, 90, 44, -54, -18, -19, 126, -66, 65, -119, 86, -54, 18, -115, -116, -103, 27, -23, 77, 9, 69, 89, 96, -12, 61, -8, -101, 68, -99, -97, 84, 99, -96, -67, -28, -106, 101, -66, 6, -90, -6, -117, 70, -90, 73};
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
    msg.setTimeStamp(0.10055548216402488);
    msg.setSource(42078U);
    msg.setSourceEntity(252U);
    msg.setDestination(51597U);
    msg.setDestinationEntity(169U);
    msg.req_id = 1404U;
    msg.ttl = 8034U;
    msg.destination.assign("KAAONKIZXEKABIHLUBIPONLRBFCAOHTZUEIDUZSEFAQIFTDYPPYMWERNFMVLODCFFJOQETCYWDTKXKVGYGDRPWPXMYSCCMSHOQHJJNLGFNZIJNFQUQFWAYCRMQVVDRWNECMMLUPLKZATWVHMW");
    const char tmp_msg_0[] = {-66, 107, 92, -125, 85, -124, 123, 123, 72, 100, -125, 93, -98, 60, 56, 60, 3, -30, -88, 108, -115, -59, -87, 71, -77, -8, 111, 42, 67, 114, 104, -28, 124, 113, 114, -12, 91, -7, 10, 119, -41, 100, -71, -112, -121, -77, 1, -100, 10, 95, -110, 124, 3, 4, -32, 117, -126, 15, 87, 99, 119, -39, 78, 12, -121, -108, -42, -3, 24, 27, -48, 104, -57, 60, 75, 6, -126, 98, 78, 101};
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
    msg.setTimeStamp(0.29038316971181366);
    msg.setSource(1280U);
    msg.setSourceEntity(33U);
    msg.setDestination(32812U);
    msg.setDestinationEntity(199U);
    msg.req_id = 40402U;
    msg.status = 106U;
    msg.text.assign("MPWQKFKEZSMTMPTGYPFJBQCKJECBEGRPRJQAXNUVIPPEHITJVVDIHQQRNIMHWHCNUXFSLGYFTDTVAFZWCRLIUBXMCYBJVIGO");

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
    msg.setTimeStamp(0.27213647573321886);
    msg.setSource(36558U);
    msg.setSourceEntity(26U);
    msg.setDestination(22085U);
    msg.setDestinationEntity(205U);
    msg.req_id = 55697U;
    msg.status = 243U;
    msg.text.assign("AOFBMXWGNVJVBIAQXEPDGNEXBUZTSXULECIZWACSYVFTYLNFRQMTACFVZLTGRNJNNHGGMRUULWGFZEUYOH");

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
    msg.setTimeStamp(0.3315946771353534);
    msg.setSource(27006U);
    msg.setSourceEntity(82U);
    msg.setDestination(10402U);
    msg.setDestinationEntity(169U);
    msg.req_id = 11919U;
    msg.status = 6U;
    msg.text.assign("KUXNBOPOWXDFBBRIFSCDGHXAEIIFZETYTTOMZFVMPDVYPPNWGTPVHYCEHLCHITSLSEKRLUFNOLQJQRLCOIDLRRNYWJMZKVBXULJZRQABCAONDRJQAVWWZAFGMQ");

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
    msg.setTimeStamp(0.7519082198021482);
    msg.setSource(33665U);
    msg.setSourceEntity(80U);
    msg.setDestination(53677U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("TVJVUDXSUCAZUIYLV");
    msg.links = 2955752084U;

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
    msg.setTimeStamp(0.5457745610563887);
    msg.setSource(20918U);
    msg.setSourceEntity(145U);
    msg.setDestination(55007U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("SEPCKRAHRXKPXCHWTVTSQGCZOVDXUVAFMYQZGVFUPFGGINOAIABVSILHODWHWYZSFRDFNWOFHUFNDZMVANNBUORBEJOYMXRCMAUBVNEKLMQTZDGBXMZPQTGRHBXKJPGEKCULWMTLLVKAPEXJRLYTGUHYRX");
    msg.links = 2983069489U;

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
    msg.setTimeStamp(0.34892591325872113);
    msg.setSource(41676U);
    msg.setSourceEntity(68U);
    msg.setDestination(39691U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("OQDBYIZNAGSJKZTCTMXTYBIQTXJNVFAUIELWPVKXRPDIRMBOQUETBEPDSABPSOFKWQTWSCGCSUDDNWHZPMBTYXEUPZFRKFJIHHLJUIRYPGQPQNGMDGLRMOFBQJOIKHXHNHXRZMATYQOUYJAXMPGSUAJSFLAWTHWGPQFXVLXODHWVFELDBRKTOKZMGEL");
    msg.links = 1215597090U;

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
    msg.setTimeStamp(0.08912945664751615);
    msg.setSource(24107U);
    msg.setSourceEntity(207U);
    msg.setDestination(11349U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("BPONDLMKLOTOWYVIRASLPBZMSGYVMKDXEMSXKQKYZACDCPSXLDHGCQQZYECNIZSEAPOXWLFBFJVHUSTUIXUOGOJFAUZYWUREWFFIFBJDJOYAKVGHIYHEXJBZACBXCPJWXPYRORMETWXBAAKBARLKFMGWDEHPWHEGLVDGTZIRNMPTHAWUHENCSQIQZLQUCKGVUHNNQJNPVENGRTDLBFUFMGZJIOQSKZMRLNTRYNSIHUVVOSMYJJQBRICWD");
    msg.action = 171U;
    msg.grouplist.assign("RYVQUDLTWJIBEAOCKDTCEFWVUKXFLIWMMIBBTADVQIHAMOARDPBYTXQXWVIWDYAVWJZGVPXJAKTXHNGUPCMWLDSDHNRZCTYKMGHGRNSOQZYWVTRSAOMHAYFQIMOPNSNDHRSWHFLGQUQXHUJMPXIOBELLNGGPJMEPUHCAPYHKQIAESLCGTLOMPSYZNZEXTCJKKUDZB");

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
    msg.setTimeStamp(0.6806147034619434);
    msg.setSource(39836U);
    msg.setSourceEntity(60U);
    msg.setDestination(50890U);
    msg.setDestinationEntity(82U);
    msg.groupname.assign("AAKGENFIZXDMVMRYSQGXYJ");
    msg.action = 9U;
    msg.grouplist.assign("DDMOEJFWPECDQNVXNNSOY");

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
    msg.setTimeStamp(0.8656169878272272);
    msg.setSource(31279U);
    msg.setSourceEntity(247U);
    msg.setDestination(52744U);
    msg.setDestinationEntity(97U);
    msg.groupname.assign("OLDHTKUSYJAFRSRARBIAIJZNXHOGWFSNQSWVUMNECLVAOGAPOMZATYOEJHHQMALUOGZXYGRNIMPLTBPUGKEILBCAAQWWKNWHSJJZCNYKZPGJOVSTVXKMQWVNLLBIMKREFHOHXWCASHDHBNPEXIFEPGJVJSKQMSVNFGQGS");
    msg.action = 161U;
    msg.grouplist.assign("OTXFBCXDYRLXWJSUSNMSJBUVWKZUMCIZIHADWMLCXWXQNCQIQHNDRKDXTYOFBVOORFJYYEVIHVEZAABFTBDESHTVGDRESUFGAMPRLKWOIOAYHIYBDAQDKPPSPTNVFKRYIZIWC");

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
    msg.setTimeStamp(0.8202529023083812);
    msg.setSource(62938U);
    msg.setSourceEntity(49U);
    msg.setDestination(20944U);
    msg.setDestinationEntity(202U);
    msg.id = 192U;
    msg.range = 0.31801439265617293;

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
    msg.setTimeStamp(0.4726251533605307);
    msg.setSource(19283U);
    msg.setSourceEntity(226U);
    msg.setDestination(61259U);
    msg.setDestinationEntity(29U);
    msg.id = 12U;
    msg.range = 0.26143244438589996;

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
    msg.setTimeStamp(0.4320959822128586);
    msg.setSource(56409U);
    msg.setSourceEntity(72U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(60U);
    msg.id = 219U;
    msg.range = 0.1480085120423773;

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
    msg.setTimeStamp(0.38122047853327734);
    msg.setSource(16302U);
    msg.setSourceEntity(229U);
    msg.setDestination(25210U);
    msg.setDestinationEntity(215U);
    msg.tx = 240U;
    msg.channel = 229U;
    msg.timer = 4353U;

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
    msg.setTimeStamp(0.7153962838740906);
    msg.setSource(22946U);
    msg.setSourceEntity(146U);
    msg.setDestination(41514U);
    msg.setDestinationEntity(97U);
    msg.tx = 49U;
    msg.channel = 197U;
    msg.timer = 9501U;

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
    msg.setTimeStamp(0.8560048852116164);
    msg.setSource(19941U);
    msg.setSourceEntity(117U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(116U);
    msg.tx = 79U;
    msg.channel = 91U;
    msg.timer = 43562U;

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
    msg.setTimeStamp(0.8661296247286636);
    msg.setSource(4685U);
    msg.setSourceEntity(119U);
    msg.setDestination(61619U);
    msg.setDestinationEntity(78U);
    msg.beacon.assign("SUZITGWGBCLZPULWMKZFDCOHKVYUSPCRPIZOGBQVFRDLCPNDRSXIMLBQCJRTKUBQHAURNHVFZBYRUUEAAEGZNSWGGXJAKOSTFMNNCMAOQIBYNFXWDPDXRRNTMEAKFPAECXTEXSHSORXZJGBQFHJKNHQWAVYCWYOETVGMBSVKRPEEFYABTIXLZVUMJEGMDN");
    msg.lat = 0.1704471247659346;
    msg.lon = 0.7870617353378397;
    msg.depth = 0.9268919552810297;
    msg.query_channel = 145U;
    msg.reply_channel = 66U;
    msg.transponder_delay = 52U;

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
    msg.setTimeStamp(0.09161054192789753);
    msg.setSource(30489U);
    msg.setSourceEntity(33U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(124U);
    msg.beacon.assign("LUVVZSAGHOBGEZAQCRJMLENRWHRTNXUEQXZMCYIPWTPHUXHDSXGCKHHMTKBXDNLRWOBFBINNMDOCACPAZCNUPSIWUDTVYPADNUBIAAFYOUOBQNBKXFFYRLUGYGPZPDYWMWBIMTJQBUSTFTSEKJJKLXSQNPZJWFMQXVJLLNQFBKCOVTCEHMIWYMAHEYJIJVKJF");
    msg.lat = 0.36764415895996105;
    msg.lon = 0.8910232787951126;
    msg.depth = 0.6737525620723567;
    msg.query_channel = 143U;
    msg.reply_channel = 151U;
    msg.transponder_delay = 124U;

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
    msg.setTimeStamp(0.06253955742711848);
    msg.setSource(14924U);
    msg.setSourceEntity(79U);
    msg.setDestination(17445U);
    msg.setDestinationEntity(2U);
    msg.beacon.assign("ZSFZJIRKTDEMUMIPCGPXYOLSYVGP");
    msg.lat = 0.1439792926238127;
    msg.lon = 0.32380958395808535;
    msg.depth = 0.7564774171609562;
    msg.query_channel = 248U;
    msg.reply_channel = 21U;
    msg.transponder_delay = 219U;

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
    msg.setTimeStamp(0.48271521810494444);
    msg.setSource(63452U);
    msg.setSourceEntity(41U);
    msg.setDestination(43086U);
    msg.setDestinationEntity(66U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.24963047847735198);
    msg.setSource(17019U);
    msg.setSourceEntity(134U);
    msg.setDestination(64938U);
    msg.setDestinationEntity(113U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.07508204266234497);
    msg.setSource(8553U);
    msg.setSourceEntity(156U);
    msg.setDestination(33679U);
    msg.setDestinationEntity(102U);
    msg.op = 38U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EOGUWLUJHUBCHCURJCDQWI");
    tmp_msg_0.lat = 0.5025818040065063;
    tmp_msg_0.lon = 0.14169211364814438;
    tmp_msg_0.depth = 0.5285666602557291;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 33U;
    tmp_msg_0.transponder_delay = 157U;
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
    msg.setTimeStamp(0.11008842641574546);
    msg.setSource(11189U);
    msg.setSourceEntity(222U);
    msg.setDestination(42559U);
    msg.setDestinationEntity(227U);
    msg.address = 235U;

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
    msg.setTimeStamp(0.9652919976941411);
    msg.setSource(29227U);
    msg.setSourceEntity(40U);
    msg.setDestination(33471U);
    msg.setDestinationEntity(185U);
    msg.address = 133U;

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
    msg.setTimeStamp(0.37173717638978665);
    msg.setSource(60740U);
    msg.setSourceEntity(151U);
    msg.setDestination(36802U);
    msg.setDestinationEntity(143U);
    msg.address = 160U;

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
    msg.setTimeStamp(0.19397840577465053);
    msg.setSource(15934U);
    msg.setSourceEntity(109U);
    msg.setDestination(40114U);
    msg.setDestinationEntity(188U);
    msg.address = 180U;
    msg.status = 225U;
    msg.range = 0.43988617991265255;

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
    msg.setTimeStamp(0.5649270424332179);
    msg.setSource(19480U);
    msg.setSourceEntity(52U);
    msg.setDestination(56471U);
    msg.setDestinationEntity(72U);
    msg.address = 220U;
    msg.status = 120U;
    msg.range = 0.7254938165711571;

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
    msg.setTimeStamp(0.5728773909813243);
    msg.setSource(23128U);
    msg.setSourceEntity(41U);
    msg.setDestination(4108U);
    msg.setDestinationEntity(105U);
    msg.address = 172U;
    msg.status = 177U;
    msg.range = 0.40882258614262756;

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
    msg.setTimeStamp(0.3678004187370585);
    msg.setSource(64210U);
    msg.setSourceEntity(211U);
    msg.setDestination(33443U);
    msg.setDestinationEntity(66U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9976640710724077;
    tmp_msg_0.lon = 0.7832660507731821;
    tmp_msg_0.height = 0.6523356438989667;
    tmp_msg_0.x = 0.6678778079405991;
    tmp_msg_0.y = 0.12536704145764954;
    tmp_msg_0.z = 0.4300880893667346;
    tmp_msg_0.phi = 0.640935275488995;
    tmp_msg_0.theta = 0.7890743943324532;
    tmp_msg_0.psi = 0.3898170271541922;
    tmp_msg_0.u = 0.4361054399039668;
    tmp_msg_0.v = 0.5108092500974507;
    tmp_msg_0.w = 0.37287323717037113;
    tmp_msg_0.vx = 0.6013391684523157;
    tmp_msg_0.vy = 0.17284380409053612;
    tmp_msg_0.vz = 0.8303792604584953;
    tmp_msg_0.p = 0.20747369476385524;
    tmp_msg_0.q = 0.30777735870315215;
    tmp_msg_0.r = 0.8282483281588123;
    tmp_msg_0.depth = 0.5147134595753904;
    tmp_msg_0.alt = 0.7698750579882208;
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
    msg.setTimeStamp(0.3315255593927382);
    msg.setSource(5690U);
    msg.setSourceEntity(181U);
    msg.setDestination(12286U);
    msg.setDestinationEntity(11U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6077563874810008;
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
    msg.setTimeStamp(0.16504950872407698);
    msg.setSource(31080U);
    msg.setSourceEntity(20U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(175U);
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 216U;
    tmp_msg_0.longain = 0.3193484692018287;
    tmp_msg_0.latgain = 0.3529917133252515;
    tmp_msg_0.bondthick = 3425400295U;
    tmp_msg_0.leadgain = 0.44949891906893924;
    tmp_msg_0.deconflgain = 0.34165448825856914;
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
    msg.setTimeStamp(0.3968264516156472);
    msg.setSource(59623U);
    msg.setSourceEntity(187U);
    msg.setDestination(21538U);
    msg.setDestinationEntity(120U);
    msg.enable = 176U;

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
    msg.setTimeStamp(0.8709606046324203);
    msg.setSource(37160U);
    msg.setSourceEntity(208U);
    msg.setDestination(2196U);
    msg.setDestinationEntity(198U);
    msg.enable = 41U;

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
    msg.setTimeStamp(0.5566735520077276);
    msg.setSource(9229U);
    msg.setSourceEntity(97U);
    msg.setDestination(28387U);
    msg.setDestinationEntity(6U);
    msg.enable = 53U;

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
    msg.setTimeStamp(0.7194520459287109);
    msg.setSource(300U);
    msg.setSourceEntity(212U);
    msg.setDestination(20545U);
    msg.setDestinationEntity(204U);
    msg.summary = 66U;
    msg.level = 166U;

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
    msg.setTimeStamp(0.2231874012238425);
    msg.setSource(56726U);
    msg.setSourceEntity(131U);
    msg.setDestination(42565U);
    msg.setDestinationEntity(233U);
    msg.summary = 129U;
    msg.level = 94U;

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
    msg.setTimeStamp(0.5786264506416933);
    msg.setSource(55424U);
    msg.setSourceEntity(95U);
    msg.setDestination(26724U);
    msg.setDestinationEntity(95U);
    msg.summary = 229U;
    msg.level = 137U;

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
    msg.setTimeStamp(0.8671072501693761);
    msg.setSource(46206U);
    msg.setSourceEntity(11U);
    msg.setDestination(13097U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.422493361678865);
    msg.setSource(63050U);
    msg.setSourceEntity(43U);
    msg.setDestination(30165U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.47670365479947197);
    msg.setSource(63418U);
    msg.setSourceEntity(15U);
    msg.setDestination(9726U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.22174349761757495);
    msg.setSource(24451U);
    msg.setSourceEntity(202U);
    msg.setDestination(5022U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.2962989964017745);
    msg.setSource(26311U);
    msg.setSourceEntity(65U);
    msg.setDestination(65087U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.21348078248976532);
    msg.setSource(56145U);
    msg.setSourceEntity(237U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.4442019885682893);
    msg.setSource(23189U);
    msg.setSourceEntity(182U);
    msg.setDestination(610U);
    msg.setDestinationEntity(247U);
    msg.op = 71U;
    msg.system.assign("AXVJXIOTSDCMKHIYHRLJZDAQLHMDVYHEEBGLBVHXEFQPTWMAOCCBWKFKBUXFICQGXHXCRECGLIWZFNYIJUG");
    msg.range = 0.5148056087915733;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("QWKPKRVIRHDLWZNSYJXSNUQJIPCZXTBKYORUHMCEMJRNSLEDXXQZSMHWFTONDOUJAFHEGKHFGQABLGBRDIWBRVXHFPCFVAAXIJEBYOOQGHQVXCCBPAPLNZWKVILULEAILTWUTVXZUWFXZRYGTQAMYGIHVNTGLBIZWOSIDAPQSYFJLYMGKCYOTKDJOEHMLZMGSEPJKN");
    tmp_msg_0.text.assign("MRNULXNMEDMSPMOUMYRGAPBZBNYASVFSKPXPWIIKHJYMQFCXNFRESYUXTDGRVOUTZVHOHKXYCXWTJTJBZAIHNWQOGCOXQEBNJHDVVUKGDHAZIFMSDVFVSDDKVPWMCVYQULNIQQOUKBEWEKDACPRCMWLITZUSTZLVIGFWGURPZB");
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
    msg.setTimeStamp(0.029141898060967675);
    msg.setSource(30237U);
    msg.setSourceEntity(233U);
    msg.setDestination(10737U);
    msg.setDestinationEntity(204U);
    msg.op = 112U;
    msg.system.assign("WQLMEEWSEGTHNHDCVJLTZSCYMSVAVZURQWUXTXGPGWYBUMALFXSRONYNIMLZYNFBHHDHBCBQOINUCXUGWMXIJHUNZFCPPKRJKNQANJL");
    msg.range = 0.3125536719925208;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("RNDOSLRVVEYPKWHVLCVQSYLAAWFRIWDCZSKSJVOEOSBDQJLMIQNGIPGHONNAPRYIAGIORAXVJUKTNCMUGZUVWFUQTCGQNLPXMCYTKCWEPOGOGJBTMDJFJUYBXFWZOHAHXGYQZPERZHBURTLCURFJSFSMRKPPXEYHAJXWEHCKTMHBHLLUUXBVZSTCRYQYNIMPBDEASFDJPBFMFDANZSTYBZKIQZKEUNVFEWGKITDDXTAJWWDBQGXLKQMMCNZIIX");
    tmp_msg_0.message_id = 23570U;
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
    msg.setTimeStamp(0.04841309208112299);
    msg.setSource(25705U);
    msg.setSourceEntity(106U);
    msg.setDestination(4846U);
    msg.setDestinationEntity(131U);
    msg.op = 65U;
    msg.system.assign("MRYHLZJFDKOEWYWHZVJNGCWYIAENZNYVRWFEDCAZMMSTWXBPXCZSNBHMSFQAOWUQGPUSITTJCQKMPPKBF");
    msg.range = 0.3133768895705197;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 142U;
    tmp_msg_0.id.assign("LQZUAEAOJTIGJTYFDZFENOJNNONSEYTIKRQMXPRQUZ");
    IMC::SaveEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JFQWRYHVJPAYHJGLKOZBRWMQTCJPOSETQWBBDSVEOPMNSACITQAUVKPFQEPJIXEBLYDKJUYJRZCJICPHIOVDNHOTVMOWHGTEBNZUPCMSHZOUOLDCXTKAG");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.757437418836602);
    msg.setSource(25785U);
    msg.setSourceEntity(62U);
    msg.setDestination(25214U);
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
    msg.setTimeStamp(0.38040352467530847);
    msg.setSource(61230U);
    msg.setSourceEntity(132U);
    msg.setDestination(51854U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.27087803771674934);
    msg.setSource(12445U);
    msg.setSourceEntity(233U);
    msg.setDestination(57792U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.25071253975255037);
    msg.setSource(64091U);
    msg.setSourceEntity(205U);
    msg.setDestination(11214U);
    msg.setDestinationEntity(56U);
    msg.list.assign("AWQPJAWBUIBAKQSYZQHUJFDWQRKGEWEPRIWXTUNDTPAEFLVJEZ");

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
    msg.setTimeStamp(0.6017022792891714);
    msg.setSource(32024U);
    msg.setSourceEntity(134U);
    msg.setDestination(59002U);
    msg.setDestinationEntity(94U);
    msg.list.assign("XPVSUCNIDDUALTQXEIZNFZODCTOJPPIOVFSOURQBMGIWLKRFFQNIKYNUPWTLAZKENDAXJOBWYVQHVNUQZWDFBDUELWYCLPHCVKCZSYQXEAMWQHTJVCFMJDANDJMPAGJHWOONLEWXMRXJRTTXMSMZGPXHFDMBLYBOCI");

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
    msg.setTimeStamp(0.03931162874202332);
    msg.setSource(31366U);
    msg.setSourceEntity(177U);
    msg.setDestination(19966U);
    msg.setDestinationEntity(21U);
    msg.list.assign("KCYBYEQMUBZPWQPUUOMUQVKWUNURBVCFGKAEDOADNNJSLEYFZRESTPCSSXCAXGIFMQGVIBHDNHBLDJZRDIMXNTRLKFKSGYWHOJHCCNWUOUALYHZAXMTDHYEYRSZVRZOEBUBPNPSE");

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
    msg.setTimeStamp(0.02687722242011803);
    msg.setSource(1176U);
    msg.setSourceEntity(117U);
    msg.setDestination(8751U);
    msg.setDestinationEntity(4U);
    msg.value = 32118;

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
    msg.setTimeStamp(0.2788086238913521);
    msg.setSource(36764U);
    msg.setSourceEntity(43U);
    msg.setDestination(59639U);
    msg.setDestinationEntity(133U);
    msg.value = 29334;

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
    msg.setTimeStamp(0.0616145013785665);
    msg.setSource(45614U);
    msg.setSourceEntity(22U);
    msg.setDestination(40166U);
    msg.setDestinationEntity(186U);
    msg.value = 15746;

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
    msg.setTimeStamp(0.7496019526092295);
    msg.setSource(54971U);
    msg.setSourceEntity(125U);
    msg.setDestination(61258U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3253081482304341;

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
    msg.setTimeStamp(0.3791452237213221);
    msg.setSource(22432U);
    msg.setSourceEntity(230U);
    msg.setDestination(8485U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9912946735400555;

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
    msg.setTimeStamp(0.21234778415027944);
    msg.setSource(58693U);
    msg.setSourceEntity(82U);
    msg.setDestination(28146U);
    msg.setDestinationEntity(12U);
    msg.value = 0.28862053179031155;

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
    msg.setTimeStamp(0.243270047067763);
    msg.setSource(54449U);
    msg.setSourceEntity(97U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(91U);
    msg.value = 0.9841329864674137;

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
    msg.setTimeStamp(0.06877472463360002);
    msg.setSource(19374U);
    msg.setSourceEntity(120U);
    msg.setDestination(36881U);
    msg.setDestinationEntity(21U);
    msg.value = 0.13287446475896236;

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
    msg.setTimeStamp(0.00245580887810648);
    msg.setSource(46188U);
    msg.setSourceEntity(164U);
    msg.setDestination(43769U);
    msg.setDestinationEntity(222U);
    msg.value = 0.37171788130685535;

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
    msg.setTimeStamp(0.6522313638026452);
    msg.setSource(58535U);
    msg.setSourceEntity(135U);
    msg.setDestination(31753U);
    msg.setDestinationEntity(203U);
    msg.validity = 54145U;
    msg.type = 40U;
    msg.utc_year = 14245U;
    msg.utc_month = 144U;
    msg.utc_day = 252U;
    msg.utc_time = 0.5735030153657987;
    msg.lat = 0.028736647943185867;
    msg.lon = 0.25968647445776327;
    msg.height = 0.495371545528703;
    msg.satellites = 32U;
    msg.cog = 0.6379682356239199;
    msg.sog = 0.8392655974950844;
    msg.hdop = 0.5454783500963638;
    msg.vdop = 0.41267734718827653;
    msg.hacc = 0.563593031466592;
    msg.vacc = 0.34644700422324715;

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
    msg.setTimeStamp(0.9207289331038773);
    msg.setSource(13420U);
    msg.setSourceEntity(51U);
    msg.setDestination(52447U);
    msg.setDestinationEntity(131U);
    msg.validity = 5011U;
    msg.type = 114U;
    msg.utc_year = 12287U;
    msg.utc_month = 193U;
    msg.utc_day = 124U;
    msg.utc_time = 0.11244290895240672;
    msg.lat = 0.12625558862218667;
    msg.lon = 0.2865135586439801;
    msg.height = 0.9467562035060246;
    msg.satellites = 160U;
    msg.cog = 0.47465470997456005;
    msg.sog = 0.1572514698946147;
    msg.hdop = 0.39406493460185266;
    msg.vdop = 0.8663253808433178;
    msg.hacc = 0.7177356092219215;
    msg.vacc = 0.2160246601038085;

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
    msg.setTimeStamp(0.9709315719982123);
    msg.setSource(33858U);
    msg.setSourceEntity(177U);
    msg.setDestination(18127U);
    msg.setDestinationEntity(182U);
    msg.validity = 21137U;
    msg.type = 240U;
    msg.utc_year = 2957U;
    msg.utc_month = 52U;
    msg.utc_day = 109U;
    msg.utc_time = 0.621285264180884;
    msg.lat = 0.7096151377865274;
    msg.lon = 0.5966846433560192;
    msg.height = 0.6490172709905381;
    msg.satellites = 25U;
    msg.cog = 0.5818123015632425;
    msg.sog = 0.44520338537520576;
    msg.hdop = 0.4739535617087013;
    msg.vdop = 0.9896351482947264;
    msg.hacc = 0.1023029058221665;
    msg.vacc = 0.9611614099107312;

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
    msg.setTimeStamp(0.16322133291989205);
    msg.setSource(8242U);
    msg.setSourceEntity(147U);
    msg.setDestination(8715U);
    msg.setDestinationEntity(86U);
    msg.time = 0.7214521678020704;
    msg.phi = 0.07525749799346293;
    msg.theta = 0.1332348133653768;
    msg.psi = 0.3920826832279043;
    msg.psi_magnetic = 0.5012909198488067;

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
    msg.setTimeStamp(0.381143811363018);
    msg.setSource(45104U);
    msg.setSourceEntity(193U);
    msg.setDestination(44671U);
    msg.setDestinationEntity(196U);
    msg.time = 0.6814748083157545;
    msg.phi = 0.40885806522131884;
    msg.theta = 0.254764317977601;
    msg.psi = 0.7911551176798683;
    msg.psi_magnetic = 0.19596594520788801;

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
    msg.setTimeStamp(0.9267602667375703);
    msg.setSource(14187U);
    msg.setSourceEntity(62U);
    msg.setDestination(5278U);
    msg.setDestinationEntity(254U);
    msg.time = 0.7160566629047366;
    msg.phi = 0.6872379785210198;
    msg.theta = 0.9099557355281904;
    msg.psi = 0.6620658149234737;
    msg.psi_magnetic = 0.8432139198784608;

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
    msg.setTimeStamp(0.8065414143121546);
    msg.setSource(8820U);
    msg.setSourceEntity(132U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(82U);
    msg.time = 0.6016311426591957;
    msg.x = 0.2554462151790745;
    msg.y = 0.6993670142093964;
    msg.z = 0.7814847364587589;
    msg.timestep = 0.34984899499884736;

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
    msg.setTimeStamp(0.9346697656459023);
    msg.setSource(45417U);
    msg.setSourceEntity(149U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(177U);
    msg.time = 0.4366678412527417;
    msg.x = 0.14698573401656;
    msg.y = 0.2077471984945891;
    msg.z = 0.22989906618601086;
    msg.timestep = 0.4448981224755614;

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
    msg.setTimeStamp(0.8730181833415139);
    msg.setSource(12044U);
    msg.setSourceEntity(52U);
    msg.setDestination(7247U);
    msg.setDestinationEntity(206U);
    msg.time = 0.47441082463794637;
    msg.x = 0.30954102415381024;
    msg.y = 0.5681764786953191;
    msg.z = 0.9542476182682318;
    msg.timestep = 0.6801064885053056;

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
    msg.setTimeStamp(0.17197638653632397);
    msg.setSource(49564U);
    msg.setSourceEntity(251U);
    msg.setDestination(11073U);
    msg.setDestinationEntity(226U);
    msg.time = 0.851200985725461;
    msg.x = 0.09921548884914266;
    msg.y = 0.3137621126653978;
    msg.z = 0.65164927367227;

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
    msg.setTimeStamp(0.019891296609534148);
    msg.setSource(19743U);
    msg.setSourceEntity(94U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(20U);
    msg.time = 0.647962146451461;
    msg.x = 0.11663660912894036;
    msg.y = 0.26366018347712605;
    msg.z = 0.9025907166896853;

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
    msg.setTimeStamp(0.8478339861208797);
    msg.setSource(28005U);
    msg.setSourceEntity(7U);
    msg.setDestination(6648U);
    msg.setDestinationEntity(12U);
    msg.time = 0.9491637911342362;
    msg.x = 0.4199815235456278;
    msg.y = 0.5697005250294643;
    msg.z = 0.27084120604489104;

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
    msg.setTimeStamp(0.6408868619083727);
    msg.setSource(18585U);
    msg.setSourceEntity(2U);
    msg.setDestination(50295U);
    msg.setDestinationEntity(217U);
    msg.time = 0.08742092742533258;
    msg.x = 0.050539542620953615;
    msg.y = 0.871428463142708;
    msg.z = 0.060718701327496793;

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
    msg.setTimeStamp(0.24275736068012976);
    msg.setSource(38868U);
    msg.setSourceEntity(10U);
    msg.setDestination(45224U);
    msg.setDestinationEntity(112U);
    msg.time = 0.5542514480691481;
    msg.x = 0.8536018230654715;
    msg.y = 0.4298679289063432;
    msg.z = 0.8045315287896986;

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
    msg.setTimeStamp(0.31070863267673354);
    msg.setSource(18210U);
    msg.setSourceEntity(208U);
    msg.setDestination(58544U);
    msg.setDestinationEntity(122U);
    msg.time = 0.28499308152426384;
    msg.x = 0.5336322780448378;
    msg.y = 0.7513977135741962;
    msg.z = 0.12110069893653541;

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
    msg.setTimeStamp(0.3406999328623631);
    msg.setSource(35913U);
    msg.setSourceEntity(180U);
    msg.setDestination(40082U);
    msg.setDestinationEntity(158U);
    msg.time = 0.8906682507522529;
    msg.x = 0.37698662380472403;
    msg.y = 0.9092222236873551;
    msg.z = 0.5387225840569827;

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
    msg.setTimeStamp(0.45406470636012364);
    msg.setSource(2181U);
    msg.setSourceEntity(212U);
    msg.setDestination(16957U);
    msg.setDestinationEntity(46U);
    msg.time = 0.07988967198051022;
    msg.x = 0.7627841672699729;
    msg.y = 0.07207549375871103;
    msg.z = 0.7769592712430397;

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
    msg.setTimeStamp(0.813023534832135);
    msg.setSource(61426U);
    msg.setSourceEntity(222U);
    msg.setDestination(29242U);
    msg.setDestinationEntity(114U);
    msg.time = 0.28236734813533304;
    msg.x = 0.2537552341453643;
    msg.y = 0.204437218585668;
    msg.z = 0.7810668740717428;

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
    msg.setTimeStamp(0.623581720319343);
    msg.setSource(5092U);
    msg.setSourceEntity(166U);
    msg.setDestination(11699U);
    msg.setDestinationEntity(97U);
    msg.validity = 219U;
    msg.x = 0.6931658809535762;
    msg.y = 0.4875209869559005;
    msg.z = 0.7010621705420215;

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
    msg.setTimeStamp(0.36490466246990994);
    msg.setSource(1808U);
    msg.setSourceEntity(249U);
    msg.setDestination(9335U);
    msg.setDestinationEntity(90U);
    msg.validity = 93U;
    msg.x = 0.16586609480403114;
    msg.y = 0.3755150081909219;
    msg.z = 0.28075736015957864;

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
    msg.setTimeStamp(0.36774207015372895);
    msg.setSource(8800U);
    msg.setSourceEntity(108U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(247U);
    msg.validity = 98U;
    msg.x = 0.1504282310185454;
    msg.y = 0.7652610108248887;
    msg.z = 0.7176228832971565;

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
    msg.setTimeStamp(0.27616628880122696);
    msg.setSource(1888U);
    msg.setSourceEntity(229U);
    msg.setDestination(14157U);
    msg.setDestinationEntity(145U);
    msg.validity = 214U;
    msg.x = 0.913425649282001;
    msg.y = 0.49196576896655575;
    msg.z = 0.16892981159071607;

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
    msg.setTimeStamp(0.2434990196095661);
    msg.setSource(39668U);
    msg.setSourceEntity(240U);
    msg.setDestination(53482U);
    msg.setDestinationEntity(109U);
    msg.validity = 217U;
    msg.x = 0.07070946896310293;
    msg.y = 0.8098117617470846;
    msg.z = 0.7683484569167385;

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
    msg.setTimeStamp(0.5872057879349624);
    msg.setSource(21265U);
    msg.setSourceEntity(206U);
    msg.setDestination(59857U);
    msg.setDestinationEntity(1U);
    msg.validity = 188U;
    msg.x = 0.5111742250215082;
    msg.y = 0.7503485034433682;
    msg.z = 0.2990129436718595;

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
    msg.setTimeStamp(0.5052278181285237);
    msg.setSource(36565U);
    msg.setSourceEntity(5U);
    msg.setDestination(52357U);
    msg.setDestinationEntity(159U);
    msg.time = 0.7442298875952661;
    msg.x = 0.1837092286740244;
    msg.y = 0.9131601062609384;
    msg.z = 0.9441718626755626;

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
    msg.setTimeStamp(0.9749831647185692);
    msg.setSource(47829U);
    msg.setSourceEntity(222U);
    msg.setDestination(4131U);
    msg.setDestinationEntity(254U);
    msg.time = 0.1708488684406605;
    msg.x = 0.084054467275117;
    msg.y = 0.9379714336688602;
    msg.z = 0.967466197627826;

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
    msg.setTimeStamp(0.20308193009359155);
    msg.setSource(17580U);
    msg.setSourceEntity(163U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(161U);
    msg.time = 0.7617704649300636;
    msg.x = 0.2820852498442261;
    msg.y = 0.08305414280805123;
    msg.z = 0.9593566978369904;

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
    msg.setTimeStamp(0.592290687274515);
    msg.setSource(795U);
    msg.setSourceEntity(25U);
    msg.setDestination(57316U);
    msg.setDestinationEntity(164U);
    msg.validity = 133U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1303037707525101;
    tmp_msg_0.y = 0.9304839073188231;
    tmp_msg_0.z = 0.24283073330316285;
    tmp_msg_0.phi = 0.3912484251488927;
    tmp_msg_0.theta = 0.7048968770669496;
    tmp_msg_0.psi = 0.47515775217554557;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.6494629737556421;

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
    msg.setTimeStamp(0.7120519712843449);
    msg.setSource(940U);
    msg.setSourceEntity(186U);
    msg.setDestination(57515U);
    msg.setDestinationEntity(166U);
    msg.validity = 86U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.406779437323888;
    tmp_msg_0.y = 0.9532800067528245;
    tmp_msg_0.z = 0.9753676847319096;
    tmp_msg_0.phi = 0.7971359915140535;
    tmp_msg_0.theta = 0.7524990301354174;
    tmp_msg_0.psi = 0.3488252122396731;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.130733945647579;

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
    msg.setTimeStamp(0.2035376677061368);
    msg.setSource(15588U);
    msg.setSourceEntity(123U);
    msg.setDestination(50507U);
    msg.setDestinationEntity(197U);
    msg.validity = 119U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6883773151796224;
    tmp_msg_0.beam_height = 0.8623840066074565;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0939024568901563;

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
    msg.setTimeStamp(0.6060761831540162);
    msg.setSource(60281U);
    msg.setSourceEntity(197U);
    msg.setDestination(48281U);
    msg.setDestinationEntity(104U);
    msg.value = 0.6208837384501745;

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
    msg.setTimeStamp(0.21598059031846484);
    msg.setSource(16658U);
    msg.setSourceEntity(131U);
    msg.setDestination(31696U);
    msg.setDestinationEntity(116U);
    msg.value = 0.05687353981577148;

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
    msg.setTimeStamp(0.8356187254804316);
    msg.setSource(8459U);
    msg.setSourceEntity(75U);
    msg.setDestination(63800U);
    msg.setDestinationEntity(79U);
    msg.value = 0.7636864447829439;

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
    msg.setTimeStamp(0.3343254035198632);
    msg.setSource(63929U);
    msg.setSourceEntity(132U);
    msg.setDestination(16269U);
    msg.setDestinationEntity(12U);
    msg.value = 0.7882784804905852;

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
    msg.setTimeStamp(0.3967267347025123);
    msg.setSource(29857U);
    msg.setSourceEntity(155U);
    msg.setDestination(33609U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8937595047369572;

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
    msg.setTimeStamp(0.3298034523692832);
    msg.setSource(63370U);
    msg.setSourceEntity(17U);
    msg.setDestination(31259U);
    msg.setDestinationEntity(135U);
    msg.value = 0.866775388538373;

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
    msg.setTimeStamp(0.7707737594596817);
    msg.setSource(3046U);
    msg.setSourceEntity(59U);
    msg.setDestination(18982U);
    msg.setDestinationEntity(235U);
    msg.value = 0.04044169692830013;

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
    msg.setTimeStamp(0.7039723933373672);
    msg.setSource(23189U);
    msg.setSourceEntity(106U);
    msg.setDestination(52205U);
    msg.setDestinationEntity(7U);
    msg.value = 0.15682496573143878;

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
    msg.setTimeStamp(0.39738481081935106);
    msg.setSource(58721U);
    msg.setSourceEntity(169U);
    msg.setDestination(4191U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7615529489415169;

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
    msg.setTimeStamp(0.3029201287615537);
    msg.setSource(16393U);
    msg.setSourceEntity(183U);
    msg.setDestination(9814U);
    msg.setDestinationEntity(86U);
    msg.value = 0.6388406106304912;

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
    msg.setTimeStamp(0.23893950830276678);
    msg.setSource(42596U);
    msg.setSourceEntity(125U);
    msg.setDestination(19218U);
    msg.setDestinationEntity(98U);
    msg.value = 0.052832594770809704;

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
    msg.setTimeStamp(0.6051926067168475);
    msg.setSource(10594U);
    msg.setSourceEntity(112U);
    msg.setDestination(12767U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7211200489003893;

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
    msg.setTimeStamp(0.8496098322864211);
    msg.setSource(42522U);
    msg.setSourceEntity(98U);
    msg.setDestination(18384U);
    msg.setDestinationEntity(29U);
    msg.value = 0.4505457495716958;

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
    msg.setTimeStamp(0.6234458633293637);
    msg.setSource(64486U);
    msg.setSourceEntity(176U);
    msg.setDestination(12673U);
    msg.setDestinationEntity(89U);
    msg.value = 0.9974139248476793;

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
    msg.setTimeStamp(0.006315574285445491);
    msg.setSource(48536U);
    msg.setSourceEntity(154U);
    msg.setDestination(23819U);
    msg.setDestinationEntity(29U);
    msg.value = 0.32976421206514295;

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
    msg.setTimeStamp(0.2240726289757139);
    msg.setSource(35036U);
    msg.setSourceEntity(74U);
    msg.setDestination(63249U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5187182708395279;

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
    msg.setTimeStamp(0.32370874419962903);
    msg.setSource(14293U);
    msg.setSourceEntity(138U);
    msg.setDestination(38411U);
    msg.setDestinationEntity(230U);
    msg.value = 0.17673801137651102;

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
    msg.setTimeStamp(0.6746794793469739);
    msg.setSource(17059U);
    msg.setSourceEntity(22U);
    msg.setDestination(57194U);
    msg.setDestinationEntity(51U);
    msg.value = 0.365678627229017;

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
    msg.setTimeStamp(0.5007065319491697);
    msg.setSource(3784U);
    msg.setSourceEntity(36U);
    msg.setDestination(4000U);
    msg.setDestinationEntity(89U);
    msg.value = 0.9684283458451898;

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
    msg.setTimeStamp(0.6331662478245648);
    msg.setSource(3046U);
    msg.setSourceEntity(57U);
    msg.setDestination(38763U);
    msg.setDestinationEntity(25U);
    msg.value = 0.336944407692814;

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
    msg.setTimeStamp(0.05145119395553466);
    msg.setSource(55936U);
    msg.setSourceEntity(131U);
    msg.setDestination(65442U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8838547501982368;

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
    msg.setTimeStamp(0.15726548790100647);
    msg.setSource(37339U);
    msg.setSourceEntity(232U);
    msg.setDestination(4709U);
    msg.setDestinationEntity(81U);
    msg.value = 0.22846940416843675;

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
    msg.setTimeStamp(0.40795752739106106);
    msg.setSource(56134U);
    msg.setSourceEntity(2U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(218U);
    msg.value = 0.057940788090969364;

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
    msg.setTimeStamp(0.6262892532172749);
    msg.setSource(10563U);
    msg.setSourceEntity(67U);
    msg.setDestination(34733U);
    msg.setDestinationEntity(135U);
    msg.value = 0.9342737683957727;

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
    msg.setTimeStamp(0.4484228010936663);
    msg.setSource(31396U);
    msg.setSourceEntity(24U);
    msg.setDestination(43667U);
    msg.setDestinationEntity(227U);
    msg.direction = 0.8356840761727534;
    msg.speed = 0.6305255988143482;
    msg.turbulence = 0.5257630866350473;

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
    msg.setTimeStamp(0.778547158691077);
    msg.setSource(28834U);
    msg.setSourceEntity(140U);
    msg.setDestination(11630U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.5809777017125394;
    msg.speed = 0.8341496497188372;
    msg.turbulence = 0.15412888615203113;

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
    msg.setTimeStamp(0.5795331749022457);
    msg.setSource(26092U);
    msg.setSourceEntity(66U);
    msg.setDestination(5765U);
    msg.setDestinationEntity(76U);
    msg.direction = 0.8581764336408245;
    msg.speed = 0.18612249670032954;
    msg.turbulence = 0.6363247309222723;

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
    msg.setTimeStamp(0.9425069547857432);
    msg.setSource(50106U);
    msg.setSourceEntity(40U);
    msg.setDestination(23218U);
    msg.setDestinationEntity(253U);
    msg.value = 0.5594971772031352;

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
    msg.setTimeStamp(0.7201517733149739);
    msg.setSource(10619U);
    msg.setSourceEntity(130U);
    msg.setDestination(4781U);
    msg.setDestinationEntity(59U);
    msg.value = 0.11398423344668096;

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
    msg.setTimeStamp(0.6007137500390227);
    msg.setSource(32174U);
    msg.setSourceEntity(154U);
    msg.setDestination(5335U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9122587010371457;

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
    msg.setTimeStamp(0.9128443024212948);
    msg.setSource(2060U);
    msg.setSourceEntity(148U);
    msg.setDestination(32565U);
    msg.setDestinationEntity(150U);
    msg.value.assign("PDPAWUPBVSVVHFHXPPERLQWTQKVZXFKGSRIWEGNJOSSEOSPMMBOUISRJZHYWTAUDWZQIAUAMUQENHIVGOSZKY");

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
    msg.setTimeStamp(0.4089923278537595);
    msg.setSource(62693U);
    msg.setSourceEntity(4U);
    msg.setDestination(30804U);
    msg.setDestinationEntity(168U);
    msg.value.assign("SZNAAQTWQTJLKGQLRNKTIYXDYMYZPYRJFOBJCPGJSZPIINRDQHMRZFDXRXHEO");

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
    msg.setTimeStamp(0.77609374699987);
    msg.setSource(44153U);
    msg.setSourceEntity(128U);
    msg.setDestination(1844U);
    msg.setDestinationEntity(101U);
    msg.value.assign("HSMHNVDEPQLTJIQJCUMWDNNTWWKAXQIOEJWRJRJGCFUCAKTCXAPBWYVIKWKDCLBYICMDJFONPRXDFRHJTTLLUMBONHIXGPWYIOZSUNZVULOZMVGEQAHEVXTAYYYEAMNBGJGIGEXDNSRDSJKGJRHFNYVSUMGCFUVHOWEOWIPUGIFMKABQFESVQBKLVGSZPWTPOTHCYNBDAFKHKTSHQMUSPOLQBOPZXSX");

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
    msg.setTimeStamp(0.7395066469944626);
    msg.setSource(21793U);
    msg.setSourceEntity(80U);
    msg.setDestination(58316U);
    msg.setDestinationEntity(62U);
    const char tmp_msg_0[] = {-28, -112, 69, 78, 120, 86, 54, 81, -43, -127, 51, 72, 35, -95, 47, -101, -15, 12, 49, 92, 17, 87, 25, -34, 45, 54, 82, -61, 45, 35, 123, -14, -95, 0, 1, -110, 106, 113, 89, -33, -68, -47, -96, 69, -51, 119, 39, 24, 29, -21, -90, 70, 5, 39, -5, -70, 81, -108, -11, -115, 112, -38, 16, 63, -87, 68, -104, 28, 111, 70, -84, -128, -8, 88, 104, -58, -70, 86, 111, 27, -31, -47, -123, -27, -2, -122, 35, 80, -7, 81, 86, 11, -38, 78, 29, -79, -81, -109, -51, -106, 31, -33, 41, 101, -1, 30, 96, -50, 2, -39, -42, -90, -23, -109, -46, -9, -109, -18, 103, 37, -74, -20, -75, 36, -64, 18, 33, 106, -10, 56, -107, 66, -110, -14, -24, 68, 18, 45, 104, -19, -105, -13, 64, -120, -87, 73, 102, 15, -38, 85, 93, 73, 62, 119, -66, -32, -99, -108, -127, 79, -1, 76, 104, 83, -65, -29, 55, -112, 29, -80, -104, 69, -8, 21, 16, -55, -113, 19, 91, 95, -21, 98, -69, 92, 14, 76, -76, 53, -112, -45, -90, -57, 98, -34, -17, -41, 7, 72, 28, -90, 40, -100, -12, 41, -45, 56, 27, 11, 110, -70, 93, 75, -127, -21, 18, 59, 63, -96, -21, 25, 62, 43, 39, 91, -86, 34, 21, -100, 84, 80, -68, -61, -100};
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
    msg.setTimeStamp(0.009137572580591669);
    msg.setSource(30784U);
    msg.setSourceEntity(54U);
    msg.setDestination(33828U);
    msg.setDestinationEntity(82U);
    const char tmp_msg_0[] = {23, 54, -116, -122, 23, 38, -36, -10, -113, -13, -48, -74, -103, -65, -97, -51, 56, 68, 16, 87, 86, -17, -20, 20, 5, -68, 77, -86, 34, 35, 35, -63, -98, 108, -99, 6, 107, -66, 94, -83, -97, -14, -82, -30, 97, -67, 32, 109, -78, -28, -92, -44, 57, -84, -48, -122, 95, -81, 94, 109, -47, 7, 109, 103, 89, 126, -6, 62, -24, -99, 86, 82, 99, -68, -26, 22, 7, -1, 59, -41, 38, 124, -48, 39, 98, 2, -97, 14, -88, -39, -61, -50, 66, -80, -126, -53, -64, -16, 80, -105, 62, 117, 76, -7, 39, -52, -15, 5, -6, -35, 108, 46, -19, -94, -126, 90, 93, 64, 38, -102, 118, -115, -42, 21, -91, 61, -75, -92, -100, -54, 53, 85, -79, -110, 102, 6, -39, -48, -105, -44, -44, -119, -104, -53, -30, 60, 83, -15, 1, -71, 116, -7, 110, -75, 20, -87, 44, 5, -106, -30, 33, 103, -19, -124, 14, -21, 35, 111, -74, -80, -121, 6, 119, 105};
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
    msg.setTimeStamp(0.11772807796532625);
    msg.setSource(47272U);
    msg.setSourceEntity(48U);
    msg.setDestination(57924U);
    msg.setDestinationEntity(167U);
    const char tmp_msg_0[] = {-50, -92, 101, -98, 87, 18, -101, 104, 119, -41, -121, -29, -63, -82, -20, 32, 97, -89, -122, 115, -6, 39, 52, -8, 37, 12, 119, 122, 86, 118, 84, 36, -110, 61, -100, -121, -66, 70, 4, -31, -32, 83, -4, -61, 49, -110, 25, 70, 38, -55, -109, 30, -37, -103, 119, -72, 31, 109, -23, -123, -33, -22, 79, -5, 92, 0, 81, -119, -127, -46, 51, -33, 34, -114, -105, 27, -47, 27, 80, -11, -13, -99, -7, -4, 71, -19, -55, -61, -61, 112, 35, -80, -70, 80, -86, 73, -26, 107, -69, -68, 47, -17, -4, 97, 67, -77, 59, 120, 95, -128, 103, 101, 66, 123, 87, 113, -35, -109, -128, 113, 97, 8, 20, 51, -20, -23, 52, -77, 75, -44, 64, 11, -51, -108, -86, 80, -108, -73, 26, -52, -122, 94, -109, 63, 29, -113, 103, 56, -15, 84, -50, -28, 14, 125, 76, -10, 22, 30, -15, 40, 41, -51, 122, 8, 93, 101, -41, -1, 34, 99, 56, 27, -95, -96, 123, 72, 39, 81, -97, -106, 43, 31, -85, 94, 114, -1, 79, 97, -17, 52, -104, 97, 126, -9, -100, -11, 60, 85, 21, -3, 117, 94, 49, 37, -108, -68, 87, -26, 11, 119, -86, -124};
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
    msg.setTimeStamp(0.8782958516658513);
    msg.setSource(30577U);
    msg.setSourceEntity(244U);
    msg.setDestination(18770U);
    msg.setDestinationEntity(116U);
    msg.frequency = 2898505195U;
    msg.min_range = 57633U;
    msg.max_range = 35825U;

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
    msg.setTimeStamp(0.46161920975665094);
    msg.setSource(16253U);
    msg.setSourceEntity(243U);
    msg.setDestination(40547U);
    msg.setDestinationEntity(70U);
    msg.frequency = 1073002606U;
    msg.min_range = 33527U;
    msg.max_range = 2495U;

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
    msg.setTimeStamp(0.9661227744228265);
    msg.setSource(64929U);
    msg.setSourceEntity(183U);
    msg.setDestination(39657U);
    msg.setDestinationEntity(167U);
    msg.frequency = 432516157U;
    msg.min_range = 63922U;
    msg.max_range = 29970U;

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
    msg.setTimeStamp(0.05653901696124575);
    msg.setSource(5823U);
    msg.setSourceEntity(163U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(196U);
    msg.type = 66U;
    msg.frequency = 1534464105U;
    msg.min_range = 57477U;
    msg.max_range = 34620U;
    msg.bits_per_point = 55U;
    msg.scale_factor = 0.6808186193931226;
    const char tmp_msg_0[] = {-39, 54, 30, 120, -94, 80, -60, -5, 101, -32, -36, -29, 32, -106, 113, 35, -60, 73, 89, 97, -40, 40, 21, 61, -67, 67, 88, -6, 43, -124, 126, -77, -73, -62, 102, 66, -125, 104, 33, 25, 121, 33, 66, -94, 91, -58, -81, -68, -119, -80, -58, -93, 87, 29, 24, -84, -35, -38, 95, 91, 50, 23, 95, 1, -112, 53, 92, 34, 51, -21, -7, -50, -45, -65, 10, -119, -58, 27, -2, 93, -77, -43, -102, -99, 51, 111, -127, -54, 119, -93, 105, 65, -6, -51, -117, -54, 85, 105, -21, -92, -88, 90, 6, 25, -19, 30, -13, 80, -111, -31, 52, -38, -105, -36, -109, -21, 85, 1, -96, 64, -119, -36, -92, -112, 107, 34, -57, 109, -80, 10, -17, 91, -53, -33, 6, 51, 18, -121, 36, 13, -55, -99, 61, 82, -103, 42, -108, 58, 16, -11, 36, 51, 33, -102, -90, 115, -115, -37, 37, -49, -124, -36, 97, -33, -44, -120, -73, 11, 0, -74, 75, -93, -96, 28, -81, -16, 122, -11, 121, -13, -109, -24, -81, -91, -38, 8, -11, -21};
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
    msg.setTimeStamp(0.7898091274829272);
    msg.setSource(56708U);
    msg.setSourceEntity(247U);
    msg.setDestination(58574U);
    msg.setDestinationEntity(114U);
    msg.type = 199U;
    msg.frequency = 2990299621U;
    msg.min_range = 56629U;
    msg.max_range = 32402U;
    msg.bits_per_point = 158U;
    msg.scale_factor = 0.622692379792275;
    const char tmp_msg_0[] = {-65, 37, 31, -65, -39, -22, -69, 19, 65, 5, -111, -75, 58, -104, -23, -42, -123};
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
    msg.setTimeStamp(0.4163505149132315);
    msg.setSource(7780U);
    msg.setSourceEntity(33U);
    msg.setDestination(30337U);
    msg.setDestinationEntity(107U);
    msg.type = 10U;
    msg.frequency = 3083008848U;
    msg.min_range = 53777U;
    msg.max_range = 20911U;
    msg.bits_per_point = 14U;
    msg.scale_factor = 0.7451809447194806;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.48355742303321103;
    tmp_msg_0.beam_height = 0.4279712260730929;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {96, 84, 123, 105, -93, 90, 63, 57, 74, 8, 91, -38, 6, 30, 123, 14, 23, 30, 12, 118, 39, 38, -9, -87, -69, 71, -59, -121, 75, 2, -36, -81, 12, 112, 78, 23, -126, -57, -65, -102, -51, -119, 86, -82, 73, -98, -57, 46, 113, 16, 113, -93, 116, 56, 74, -115, 71, -88, 121, 90, 18, 60, -76, 35, 36, 12, -67, 101, 82, -15, 73, -95, -2, 74, 56, 109, 112, -30, 17, 85, -112, -85, 118, -44, 98, 48, -103, 102, -44, -98, 43, -17, 22, -123, 93, -36, -58, -73, 98, -91, 109, -26, 121, -47, 88, 29, 56, 79, 123, 102, -12, -35, 123, -81, -42, 9, 62, -99, 63, 12, 44, 54, -110, 4, 14, 61, 8, -89, 116, -49, -120, -57, 69, 113, 51, 27, -6, -10, -67, -124, 31, 60, 78, -38, 115, -110, -91, 16, 21, 46, -23, -14, -118, -27, -117, 27, 11, 13, 118, -93, -81, 42, 58, 67, 20, 100, -83, 68, 86, 105, 23, -51, 97, -33, 16, 66, -88, 14, 97, 79, 57, -16, -44, -96, 96, 40, 24, -31, 21, 125, -42, 13, -108, -25, 54, -119, -95, 101, -53, 108, 126, 66, -100, -46, 83, -7, 87, -17, -14, -47, -54, -17, -34, -21, 126, -2, -68, 16, -53, -27, -33, -114, 33, -96, -98, 63, -1, -80, 106, 61, 77, 50, -38, 75, -47, -59, 64, -84, -128, 76, -43, -40, 56, 41, 19};
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
    msg.setTimeStamp(0.2536665592052585);
    msg.setSource(35134U);
    msg.setSourceEntity(225U);
    msg.setDestination(30876U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.31851264960591263);
    msg.setSource(10994U);
    msg.setSourceEntity(131U);
    msg.setDestination(11440U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.6566734513931771);
    msg.setSource(35232U);
    msg.setSourceEntity(222U);
    msg.setDestination(27835U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.5434388429267764);
    msg.setSource(37243U);
    msg.setSourceEntity(183U);
    msg.setDestination(8643U);
    msg.setDestinationEntity(250U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.5271290171710419);
    msg.setSource(2548U);
    msg.setSourceEntity(86U);
    msg.setDestination(14840U);
    msg.setDestinationEntity(252U);
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
    msg.setTimeStamp(0.08504796310506046);
    msg.setSource(22273U);
    msg.setSourceEntity(81U);
    msg.setDestination(63041U);
    msg.setDestinationEntity(157U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.8546291623733132);
    msg.setSource(20417U);
    msg.setSourceEntity(170U);
    msg.setDestination(47200U);
    msg.setDestinationEntity(189U);
    msg.value = 0.9434049775378519;
    msg.confidence = 0.39965360124338245;
    msg.opmodes.assign("KAILCBMDZNABTDGMWWBGSZYJUYYRGPAHVEVTHPSKIDTODRIEWVVMTNUVMMZCTWUCUNJKZBJLKGXWFAMSBQZQMHKFIYSOAFZS");

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
    msg.setTimeStamp(0.8190782802366795);
    msg.setSource(16769U);
    msg.setSourceEntity(113U);
    msg.setDestination(37504U);
    msg.setDestinationEntity(128U);
    msg.value = 0.2691531709168036;
    msg.confidence = 0.4530820188222717;
    msg.opmodes.assign("LAEKESISXSPRGUVUTAEWHOMNEWGMFRBUJGPRWERBBWIZZCGQISXMOXMBOPTQRVYXMVCRHICKXCUIKKJMLFLFWANBXPFWMZKQVPUQOKPXDZACGOLRJYUTYDQRMAPHZEJNXCUVBDOFGBLZXBSDEYDHKGANZJTFRAPZTLTEOPKHGDLHDQICOITFWVYJODIKSUQESLNWPMHCIHGYAQTJVQL");

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
    msg.setTimeStamp(0.10400253177230712);
    msg.setSource(54479U);
    msg.setSourceEntity(63U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(28U);
    msg.value = 0.13683654301066872;
    msg.confidence = 0.21300144888116013;
    msg.opmodes.assign("AIVGEDLTXMTPNNJNSOGLWUDHALSDGHWRZABKVGOIESQAMCDSCPXBWUQUEEFMGLEOYCKCMOMRWXZAQDWWFLXNSCZTYPDINSPMYQ");

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
    msg.setTimeStamp(0.4105045346633506);
    msg.setSource(25930U);
    msg.setSourceEntity(124U);
    msg.setDestination(48986U);
    msg.setDestinationEntity(80U);
    msg.itow = 1405351524U;
    msg.lat = 0.23082495709454742;
    msg.lon = 0.9085305847079371;
    msg.height_ell = 0.29148428127509185;
    msg.height_sea = 0.8264492973293498;
    msg.hacc = 0.432690141251977;
    msg.vacc = 0.589864673061597;
    msg.vel_n = 0.39177447735044313;
    msg.vel_e = 0.5238951962521843;
    msg.vel_d = 0.9137845922989593;
    msg.speed = 0.019224431833828826;
    msg.gspeed = 0.7071238996258857;
    msg.heading = 0.7556011535555119;
    msg.sacc = 0.21200488129924944;
    msg.cacc = 0.2870031824143924;

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
    msg.setTimeStamp(0.9068289823850215);
    msg.setSource(21404U);
    msg.setSourceEntity(251U);
    msg.setDestination(25404U);
    msg.setDestinationEntity(64U);
    msg.itow = 3242830819U;
    msg.lat = 0.48842650538520593;
    msg.lon = 0.5779872248150107;
    msg.height_ell = 0.8167992960540341;
    msg.height_sea = 0.34817928272735077;
    msg.hacc = 0.1916877151620665;
    msg.vacc = 0.10717487174903795;
    msg.vel_n = 0.11174850302812844;
    msg.vel_e = 0.3320522142379818;
    msg.vel_d = 0.8496614166727536;
    msg.speed = 0.0709377751685113;
    msg.gspeed = 0.23106570704524132;
    msg.heading = 0.2977589157037369;
    msg.sacc = 0.13439692009002424;
    msg.cacc = 0.42301292227120524;

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
    msg.setTimeStamp(0.3328767854026061);
    msg.setSource(53022U);
    msg.setSourceEntity(8U);
    msg.setDestination(18504U);
    msg.setDestinationEntity(94U);
    msg.itow = 1429838063U;
    msg.lat = 0.05772963992462754;
    msg.lon = 0.3472027005761539;
    msg.height_ell = 0.1522783855981784;
    msg.height_sea = 0.9789912284308941;
    msg.hacc = 0.29550274513367025;
    msg.vacc = 0.8280636197687151;
    msg.vel_n = 0.25330809232608775;
    msg.vel_e = 0.050357192846611554;
    msg.vel_d = 0.25179030040450956;
    msg.speed = 0.5675811248075505;
    msg.gspeed = 0.7940032678403219;
    msg.heading = 0.6492206813924948;
    msg.sacc = 0.11669019324405316;
    msg.cacc = 0.493608079466045;

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
    msg.setTimeStamp(0.5431766871829845);
    msg.setSource(30677U);
    msg.setSourceEntity(177U);
    msg.setDestination(507U);
    msg.setDestinationEntity(77U);
    msg.id = 199U;
    msg.value = 0.6155374587533846;

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
    msg.setTimeStamp(0.32227540702260793);
    msg.setSource(35857U);
    msg.setSourceEntity(121U);
    msg.setDestination(3490U);
    msg.setDestinationEntity(252U);
    msg.id = 136U;
    msg.value = 0.7698898401956368;

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
    msg.setTimeStamp(0.558953920843941);
    msg.setSource(32624U);
    msg.setSourceEntity(47U);
    msg.setDestination(56603U);
    msg.setDestinationEntity(40U);
    msg.id = 125U;
    msg.value = 0.3192528149466751;

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
    msg.setTimeStamp(0.10062327509121782);
    msg.setSource(54241U);
    msg.setSourceEntity(210U);
    msg.setDestination(64622U);
    msg.setDestinationEntity(89U);
    msg.x = 0.10776830258410508;
    msg.y = 0.19198547360549478;
    msg.z = 0.175694163405144;
    msg.phi = 0.11218876618979012;
    msg.theta = 0.111992435273912;
    msg.psi = 0.33762537518057223;

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
    msg.setTimeStamp(0.2510178728081419);
    msg.setSource(13748U);
    msg.setSourceEntity(210U);
    msg.setDestination(61049U);
    msg.setDestinationEntity(155U);
    msg.x = 0.40987061835590977;
    msg.y = 0.7705802479777697;
    msg.z = 0.8945326278046626;
    msg.phi = 0.44032242032920155;
    msg.theta = 0.9013240965179228;
    msg.psi = 0.799743711675018;

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
    msg.setTimeStamp(0.8402817500681966);
    msg.setSource(2764U);
    msg.setSourceEntity(158U);
    msg.setDestination(52618U);
    msg.setDestinationEntity(240U);
    msg.x = 0.701445411849618;
    msg.y = 0.7710684961703261;
    msg.z = 0.37991782484289083;
    msg.phi = 0.6230123224366602;
    msg.theta = 0.13662945832473228;
    msg.psi = 0.0495191265843129;

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
    msg.setTimeStamp(0.35703693654820445);
    msg.setSource(1925U);
    msg.setSourceEntity(101U);
    msg.setDestination(16550U);
    msg.setDestinationEntity(234U);
    msg.beam_width = 0.6063481290498808;
    msg.beam_height = 0.17628399451999677;

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
    msg.setTimeStamp(0.02185067374579619);
    msg.setSource(29929U);
    msg.setSourceEntity(81U);
    msg.setDestination(12083U);
    msg.setDestinationEntity(238U);
    msg.beam_width = 0.13672398008819941;
    msg.beam_height = 0.8392837866978401;

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
    msg.setTimeStamp(0.24938744237272126);
    msg.setSource(21728U);
    msg.setSourceEntity(238U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(250U);
    msg.beam_width = 0.9321412379441774;
    msg.beam_height = 0.8143812247778176;

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
    msg.setTimeStamp(0.39651581456286655);
    msg.setSource(7849U);
    msg.setSourceEntity(134U);
    msg.setDestination(41938U);
    msg.setDestinationEntity(247U);
    msg.sane = 117U;

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
    msg.setTimeStamp(0.08806209261702536);
    msg.setSource(26080U);
    msg.setSourceEntity(0U);
    msg.setDestination(8716U);
    msg.setDestinationEntity(184U);
    msg.sane = 5U;

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
    msg.setTimeStamp(0.9699305344570246);
    msg.setSource(40730U);
    msg.setSourceEntity(142U);
    msg.setDestination(30365U);
    msg.setDestinationEntity(91U);
    msg.sane = 218U;

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
    msg.setTimeStamp(0.2976424387956561);
    msg.setSource(27405U);
    msg.setSourceEntity(124U);
    msg.setDestination(36306U);
    msg.setDestinationEntity(10U);
    msg.id = 194U;
    msg.zoom = 11U;
    msg.action = 91U;

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
    msg.setTimeStamp(0.3099252703167765);
    msg.setSource(43586U);
    msg.setSourceEntity(96U);
    msg.setDestination(51339U);
    msg.setDestinationEntity(174U);
    msg.id = 132U;
    msg.zoom = 60U;
    msg.action = 196U;

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
    msg.setTimeStamp(0.4896743258475573);
    msg.setSource(26575U);
    msg.setSourceEntity(164U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(130U);
    msg.id = 241U;
    msg.zoom = 120U;
    msg.action = 233U;

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
    msg.setTimeStamp(0.0025588829978151484);
    msg.setSource(45867U);
    msg.setSourceEntity(82U);
    msg.setDestination(48331U);
    msg.setDestinationEntity(99U);
    msg.id = 245U;
    msg.value = 0.6572154314564411;

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
    msg.setTimeStamp(0.7712694972586698);
    msg.setSource(15570U);
    msg.setSourceEntity(127U);
    msg.setDestination(57218U);
    msg.setDestinationEntity(209U);
    msg.id = 73U;
    msg.value = 0.009692955573026518;

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
    msg.setTimeStamp(0.9908251087895482);
    msg.setSource(15992U);
    msg.setSourceEntity(219U);
    msg.setDestination(40686U);
    msg.setDestinationEntity(143U);
    msg.id = 80U;
    msg.value = 0.46895001783860635;

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
    msg.setTimeStamp(0.8529075384129728);
    msg.setSource(22238U);
    msg.setSourceEntity(231U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(219U);
    msg.id = 111U;
    msg.value = 0.0435209544193037;

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
    msg.setTimeStamp(0.2394553429508547);
    msg.setSource(53155U);
    msg.setSourceEntity(105U);
    msg.setDestination(38316U);
    msg.setDestinationEntity(206U);
    msg.id = 30U;
    msg.value = 0.608150292115762;

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
    msg.setTimeStamp(0.6533892040934336);
    msg.setSource(55767U);
    msg.setSourceEntity(201U);
    msg.setDestination(1712U);
    msg.setDestinationEntity(158U);
    msg.id = 83U;
    msg.value = 0.9041165439265396;

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
    msg.setTimeStamp(0.3384360903058101);
    msg.setSource(21901U);
    msg.setSourceEntity(176U);
    msg.setDestination(49252U);
    msg.setDestinationEntity(145U);
    msg.id = 110U;
    msg.angle = 0.4692356583495173;

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
    msg.setTimeStamp(0.26820361018427796);
    msg.setSource(44743U);
    msg.setSourceEntity(161U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(96U);
    msg.id = 105U;
    msg.angle = 0.9778444414382494;

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
    msg.setTimeStamp(0.8470655279968246);
    msg.setSource(14149U);
    msg.setSourceEntity(127U);
    msg.setDestination(8873U);
    msg.setDestinationEntity(212U);
    msg.id = 0U;
    msg.angle = 0.4938335841660505;

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
    msg.setTimeStamp(0.5327495728505839);
    msg.setSource(695U);
    msg.setSourceEntity(244U);
    msg.setDestination(30807U);
    msg.setDestinationEntity(15U);
    msg.op = 83U;
    msg.actions.assign("SRCCYUFUNXVLSOIOLXXSOZUMBCQHMAIECYOPIUDEWKNAJTBNZWRTIHPXZGELS");

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
    msg.setTimeStamp(0.33848252201058715);
    msg.setSource(885U);
    msg.setSourceEntity(240U);
    msg.setDestination(41643U);
    msg.setDestinationEntity(165U);
    msg.op = 155U;
    msg.actions.assign("ZZIXBQHGCHISLUAKPKRXKXMRUSUOQCIRBZQOWUPOHNBUPMRBFGYJ");

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
    msg.setTimeStamp(0.5727754355416822);
    msg.setSource(7210U);
    msg.setSourceEntity(131U);
    msg.setDestination(24845U);
    msg.setDestinationEntity(194U);
    msg.op = 187U;
    msg.actions.assign("YPOCZFOMUCCNPIWUGMMMZFGBYATVAYAECIHMCAUKFLNNOUIWTKRSPVQUODWXBBMYFBXLIKZTPTMQKZISLWUVQXOFRUBPJSDJTFVYVEXSJNPBELQOUGPYHDHGSZHIACRDVMTLFRLHTKHHOUJSXXIGHZQCNEULWSDYKGVNPTYIFQPKBOWPCXMR");

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
    msg.setTimeStamp(0.7533165527472383);
    msg.setSource(26075U);
    msg.setSourceEntity(154U);
    msg.setDestination(26841U);
    msg.setDestinationEntity(229U);
    msg.actions.assign("CMXJEWWNVSBDWGEOJAZABEUJMYAKKHDEWAQSSSQFURKVFNDLEQFXQYKQZNSMNFGFGRTQCDORWFTQCIPHIHBXXTEZQRPLRCCLTBXCJILJIEBKPJSZWMYCDWVIZHXHHEMGGTPJLBPOFKCRYPPMGXAPFVUFTBOKWXDKRY");

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
    msg.setTimeStamp(0.4228231369498998);
    msg.setSource(55524U);
    msg.setSourceEntity(110U);
    msg.setDestination(60215U);
    msg.setDestinationEntity(244U);
    msg.actions.assign("BLYSNSXNQLDOFWQZVDNQR");

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
    msg.setTimeStamp(0.8621865067309146);
    msg.setSource(11319U);
    msg.setSourceEntity(6U);
    msg.setDestination(30709U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("ZIBQNSQKUHFJKLAVBYDIVDKVAFPETLBSUFQOUCGXAHWNOHRUWFYTE");

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
    msg.setTimeStamp(0.4754378156611143);
    msg.setSource(29360U);
    msg.setSourceEntity(205U);
    msg.setDestination(40103U);
    msg.setDestinationEntity(25U);
    msg.button = 34U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.3856575109270405);
    msg.setSource(14929U);
    msg.setSourceEntity(112U);
    msg.setDestination(38753U);
    msg.setDestinationEntity(115U);
    msg.button = 155U;
    msg.value = 78U;

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
    msg.setTimeStamp(0.023067423970543177);
    msg.setSource(15215U);
    msg.setSourceEntity(203U);
    msg.setDestination(52480U);
    msg.setDestinationEntity(251U);
    msg.button = 186U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.6494608031176754);
    msg.setSource(30144U);
    msg.setSourceEntity(51U);
    msg.setDestination(27292U);
    msg.setDestinationEntity(2U);
    msg.op = 216U;
    msg.text.assign("NXSOYCSPYKCZJSWKADMLMWTFJEHRBJMOOGISFKCSAHYFJRFNKRJJOQHSZKZCIIFYOQQ");

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
    msg.setTimeStamp(0.6669246305477157);
    msg.setSource(22800U);
    msg.setSourceEntity(214U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(207U);
    msg.op = 146U;
    msg.text.assign("VFGUVGBRGLMBLWETBGXTORTWBZPHGQNZVBIVJMSXWYDNKIVYKKRAEBZAYYUAZMWDMBKEYWIHFTPCOKLMQTGFWCUQOSDEBGWXCLAPJPYFZNJOJRCXSHIRHHTEVZVDAFGAUQLONKMXLSKNPREHLIZLCAEXIUSQRVSPKRHQWIDMTLYPRPSQNSFNSPBOCXZTXNCSGHIACMDKWQJXWX");

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
    msg.setTimeStamp(0.31657033935942935);
    msg.setSource(20683U);
    msg.setSourceEntity(216U);
    msg.setDestination(29289U);
    msg.setDestinationEntity(251U);
    msg.op = 168U;
    msg.text.assign("MNEBMIMAFKIRCOVCJGFNQPEZBMCNGLYYKWEPIJBBBHPFZMUKSDOYLZOJRCDAFHIGNPRYETEQDDULPWDUAUWYMVJZAWLXCZCDDSFBENTYYYACGGVUGYVVMGNUTTRN");

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
    msg.setTimeStamp(0.5982125453857446);
    msg.setSource(24946U);
    msg.setSourceEntity(231U);
    msg.setDestination(13862U);
    msg.setDestinationEntity(242U);
    msg.op = 62U;
    msg.time_remain = 0.789765346955377;
    msg.sched_time = 0.41082022364039605;

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
    msg.setTimeStamp(0.4686247345485073);
    msg.setSource(21866U);
    msg.setSourceEntity(66U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(196U);
    msg.op = 119U;
    msg.time_remain = 0.8065585355963232;
    msg.sched_time = 0.619945502390824;

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
    msg.setTimeStamp(0.11055435686968529);
    msg.setSource(5488U);
    msg.setSourceEntity(48U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(133U);
    msg.op = 115U;
    msg.time_remain = 0.6358682833128199;
    msg.sched_time = 0.3777762767124312;

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
    msg.setTimeStamp(0.426572302877231);
    msg.setSource(41486U);
    msg.setSourceEntity(17U);
    msg.setDestination(46807U);
    msg.setDestinationEntity(248U);
    msg.name.assign("SCQLJYPDSKAAEPFEMRPYFCFSIORLPMYIEZBHGKIHAJKWQVHJAXUFPDGZGGOHLSDXIIMMBCTNUFTBNIOEBPLEASWUJNQEJFVWOYVJZBKNAMWIVXHMWPXKQDZWRSZZMGEITOMUFUCJQQQSKPOWBBGLWVLGFJCKXDZOEONUPCMRDVQVCVKTOLDXMXYKECZYHQNNFRSPLTRUHIOEZWNDUDVHHBUCAHLXGTBWSYLJV");
    msg.op = 248U;
    msg.sched_time = 0.18702348013245296;

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
    msg.setTimeStamp(0.00791849410655987);
    msg.setSource(9202U);
    msg.setSourceEntity(226U);
    msg.setDestination(35893U);
    msg.setDestinationEntity(242U);
    msg.name.assign("SBJIOGINUETBOJVRRQMZIWGXHLYSUALINLSPELJVFQTPGJKTXSKRJJGDNVCHCNKAKQIKODYHCZCWDUHMSUUFHWRCTQBNZJFAYAXWKBGYFYEDXPENTAMAPZVKHORZWEWMLQBUGMDXTWREEVCORTDULMSGBCXAYQKSGUXPHFLATYBIURFZEGPDPHVMOAALIBHCPMO");
    msg.op = 22U;
    msg.sched_time = 0.49382337983699875;

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
    msg.setTimeStamp(0.7521462952205651);
    msg.setSource(37650U);
    msg.setSourceEntity(60U);
    msg.setDestination(961U);
    msg.setDestinationEntity(125U);
    msg.name.assign("NPRONWPFBYQWXRJXUOGIUFJIVFCCHDSHJDTQIFHUIZPPTHYEFRTYKGWYKWTYEXBEIJZORARFYTOPVUGKEQXGXRJBPMNCASHNCWGSDNL");
    msg.op = 244U;
    msg.sched_time = 0.2604888041041469;

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
    msg.setTimeStamp(0.9077161401278221);
    msg.setSource(34114U);
    msg.setSourceEntity(170U);
    msg.setDestination(49861U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.7369834394655294);
    msg.setSource(23127U);
    msg.setSourceEntity(177U);
    msg.setDestination(41691U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.3184411928327514);
    msg.setSource(51644U);
    msg.setSourceEntity(188U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.6040386880748683);
    msg.setSource(45918U);
    msg.setSourceEntity(233U);
    msg.setDestination(4338U);
    msg.setDestinationEntity(96U);
    msg.name.assign("UKHZJYFSBQLTQEDEWWRDLARUQSUYDQHLECPMWRUGIWSWJXPSCPFEEPJEXABIHNWXTVGFHCUOMTDFBVMHZCRMEBJKMNGVBLXXKFNQFFPPWPDXYINYTFBFSDLJHJQTXNAONNZGXDIKZQVLCJPGDBRSMADBGTGSMJCNAVKYSPTMQEYKOPALQWVLAEHHUMLAINQKSEZIDCBYOACWFVGKHMIZOUURSHCVBITJOKTUKOYYRZTIINOROZXYZGWURLV");
    msg.state = 15U;

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
    msg.setTimeStamp(0.4939602210854507);
    msg.setSource(44872U);
    msg.setSourceEntity(138U);
    msg.setDestination(63234U);
    msg.setDestinationEntity(69U);
    msg.name.assign("RNBHBYNWYNCFTHYHCKPANQQMRMALMATRSZKSJUUJYIHBCJVXBZDVKXETEEMJWDKZEZZNQSPRFRMEOFXAKCBIKXYLTQPADXVVCAJHGHGCUTGJOEFPRIMPFLEWNZYLOHRRASXQDVOCTMD");
    msg.state = 85U;

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
    msg.setTimeStamp(0.5069060421537954);
    msg.setSource(44694U);
    msg.setSourceEntity(178U);
    msg.setDestination(50638U);
    msg.setDestinationEntity(240U);
    msg.name.assign("BIFRYOMSUQEICSHIWIWYEVBZCSJPPMFNSHHKZVLAGLGTGOKSJJFAZWEKTKMTTLGDLQFOVUARQPMHJEYFDUNQYJMTNEPFXBRPHIZISIGSMWRLQOYXEKVRXZQDRFJLACQBCDGOXTGQOUPFBLZPADBYWVNNNXVCNBH");
    msg.state = 87U;

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
    msg.setTimeStamp(0.9039383940104292);
    msg.setSource(34378U);
    msg.setSourceEntity(59U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(107U);
    msg.name.assign("RCEGERVAEXUYNEDPIBJXNLRJSUTIBPJKACQOWIGBXWJTTHZQHHDZSXIXIKOFWBBTYFLPFVWYOTMCMSHAVPMCLDTNHYSDKWYGXKPCGIVRFCEZBHVAROWRQNROHJBGYKZOFLIFGMZVWZMKDVNGGPXQHTJAPTAJLGSSDULCYKQOCMWMRNENUNXJOUFTVDAMJAUKPNRQLTYZDFUUNZHLSEBEXPZKDWKIAXOYQWZQBIRDQCVE");
    msg.value = 160U;

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
    msg.setTimeStamp(0.44369739600453095);
    msg.setSource(48472U);
    msg.setSourceEntity(75U);
    msg.setDestination(20917U);
    msg.setDestinationEntity(131U);
    msg.name.assign("LYSIKNNPEGXVIPDWJVHJONAAKUBIPQOAHH");
    msg.value = 66U;

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
    msg.setTimeStamp(0.8830652826134008);
    msg.setSource(33678U);
    msg.setSourceEntity(240U);
    msg.setDestination(54768U);
    msg.setDestinationEntity(2U);
    msg.name.assign("JQIYCFELKIVODWXGPUONHFBEJIVOOEAQ");
    msg.value = 174U;

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
    msg.setTimeStamp(0.7257085648136894);
    msg.setSource(10347U);
    msg.setSourceEntity(172U);
    msg.setDestination(11492U);
    msg.setDestinationEntity(6U);
    msg.name.assign("FUSCSRPJDXYLDGWYEXOFUGMKLEWZFNDXEALKKRSQCZXUTFNIWDYTDKOVEDZXYFFBOMTDJRYYCUKOBBRVVYUAQEEXLJCFJHRSJIUPCVAUYGIRIJRLDIGQMWDENPVZJTVQIHATMGBMKPVZLMEZSLAWKXNAFTAENUBYPDMPEQNQWWTXNVQVZRO");

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
    msg.setTimeStamp(0.28936063468204865);
    msg.setSource(51293U);
    msg.setSourceEntity(113U);
    msg.setDestination(44060U);
    msg.setDestinationEntity(81U);
    msg.name.assign("YYMWZLJEWMUXQZFFIGQBPJIE");

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
    msg.setTimeStamp(0.6559090272877732);
    msg.setSource(65358U);
    msg.setSourceEntity(237U);
    msg.setDestination(27979U);
    msg.setDestinationEntity(239U);
    msg.name.assign("BJQQWBBFAXVUJPHBPRMOBZHMOXDOXJNGHHLITUJQWKQCZVLTA");

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
    msg.setTimeStamp(0.21590167014960582);
    msg.setSource(55837U);
    msg.setSourceEntity(217U);
    msg.setDestination(37326U);
    msg.setDestinationEntity(201U);
    msg.name.assign("NYGAYWCEQZUCVXXJHDINIWTXDROQYPPVGUMBHBZRKPTZFPEOOBKMRTRJJTJRMQMNQIDRPAMJKGCHPUFNBRVVPJQTSAZYJECFHYSKLXEXGEOOAAEPFPSIHMBLBEUKSDFQWBWDMYYSJXNHJCLBZZZDSQWHINLRGMUVSHIX");
    msg.value = 220U;

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
    msg.setTimeStamp(0.5063852687337623);
    msg.setSource(11362U);
    msg.setSourceEntity(191U);
    msg.setDestination(15130U);
    msg.setDestinationEntity(254U);
    msg.name.assign("VUOOJYDMZKUHTIWWHDPYZDKLTLS");
    msg.value = 208U;

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
    msg.setTimeStamp(0.9661906772993538);
    msg.setSource(59792U);
    msg.setSourceEntity(11U);
    msg.setDestination(18987U);
    msg.setDestinationEntity(45U);
    msg.name.assign("ZSFIGYFCTLPYFWSAYVVEFLGNNSRYPPMFFXZATQCDRBCMKBEQVGFUCGZEMKDVPVGONTKYB");
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
    msg.setTimeStamp(0.8976576068747195);
    msg.setSource(52520U);
    msg.setSourceEntity(110U);
    msg.setDestination(59750U);
    msg.setDestinationEntity(161U);
    msg.id = 38U;
    msg.period = 1238021736U;
    msg.duty_cycle = 1689728547U;

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
    msg.setTimeStamp(0.6462059588143569);
    msg.setSource(61013U);
    msg.setSourceEntity(198U);
    msg.setDestination(2649U);
    msg.setDestinationEntity(166U);
    msg.id = 165U;
    msg.period = 2917071829U;
    msg.duty_cycle = 2648377508U;

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
    msg.setTimeStamp(0.5684789014342034);
    msg.setSource(17764U);
    msg.setSourceEntity(247U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(243U);
    msg.id = 4U;
    msg.period = 581168367U;
    msg.duty_cycle = 1777558276U;

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
    msg.setTimeStamp(0.3253514178741602);
    msg.setSource(15483U);
    msg.setSourceEntity(163U);
    msg.setDestination(63120U);
    msg.setDestinationEntity(91U);
    msg.id = 153U;
    msg.period = 1505187688U;
    msg.duty_cycle = 3263701917U;

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
    msg.setTimeStamp(0.6972223110671937);
    msg.setSource(7075U);
    msg.setSourceEntity(12U);
    msg.setDestination(65115U);
    msg.setDestinationEntity(23U);
    msg.id = 197U;
    msg.period = 809214732U;
    msg.duty_cycle = 497573738U;

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
    msg.setTimeStamp(0.33110698646757586);
    msg.setSource(42178U);
    msg.setSourceEntity(58U);
    msg.setDestination(57915U);
    msg.setDestinationEntity(248U);
    msg.id = 99U;
    msg.period = 4245224049U;
    msg.duty_cycle = 3690783643U;

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
    msg.setTimeStamp(0.24934710284205708);
    msg.setSource(6979U);
    msg.setSourceEntity(173U);
    msg.setDestination(21376U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.4825473148789269;
    msg.lon = 0.31815082518236604;
    msg.height = 0.590995655904938;
    msg.x = 0.2831596050581022;
    msg.y = 0.43610442020196216;
    msg.z = 0.13742011074948546;
    msg.phi = 0.21741652059454575;
    msg.theta = 0.7075885292843344;
    msg.psi = 0.4798245103650036;
    msg.u = 0.9043328899960753;
    msg.v = 0.21745032716122858;
    msg.w = 0.46193741076179073;
    msg.vx = 0.23496250070379254;
    msg.vy = 0.03625051328902018;
    msg.vz = 0.7125690197961964;
    msg.p = 0.004243447280352308;
    msg.q = 0.1346406393312939;
    msg.r = 0.8766464355648294;
    msg.depth = 0.39068002186571593;
    msg.alt = 0.16943279739048123;

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
    msg.setTimeStamp(0.5111274154559571);
    msg.setSource(39820U);
    msg.setSourceEntity(238U);
    msg.setDestination(1461U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.21859968475658564;
    msg.lon = 0.8722205171830715;
    msg.height = 0.4396067035711406;
    msg.x = 0.26057268584539317;
    msg.y = 0.2531867710072837;
    msg.z = 0.8189061963350204;
    msg.phi = 0.9107323330034398;
    msg.theta = 0.49104103702743873;
    msg.psi = 0.7068411991068445;
    msg.u = 0.21199640696891886;
    msg.v = 0.956361567795891;
    msg.w = 0.5713248517573196;
    msg.vx = 0.1359346222984389;
    msg.vy = 0.09499505617632975;
    msg.vz = 0.9088218239520856;
    msg.p = 0.8407836767446789;
    msg.q = 0.04805929326559388;
    msg.r = 0.02634536575055957;
    msg.depth = 0.4774832521515474;
    msg.alt = 0.7610878285102072;

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
    msg.setTimeStamp(0.8558774549511269);
    msg.setSource(26483U);
    msg.setSourceEntity(116U);
    msg.setDestination(50679U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.9935713500385942;
    msg.lon = 0.27076247491992556;
    msg.height = 0.6647296381589417;
    msg.x = 0.1980550643364304;
    msg.y = 0.6713043258357743;
    msg.z = 0.09432049646588969;
    msg.phi = 0.2713295677177723;
    msg.theta = 0.046320471625869386;
    msg.psi = 0.3121840396348651;
    msg.u = 0.03083984182432442;
    msg.v = 0.05904843489190437;
    msg.w = 0.4281842864323282;
    msg.vx = 0.6396702989176546;
    msg.vy = 0.23699152783883226;
    msg.vz = 0.9879298642322157;
    msg.p = 0.2630969205150645;
    msg.q = 0.6444352656521622;
    msg.r = 0.7145041790582934;
    msg.depth = 0.5083043848130134;
    msg.alt = 0.04252647989499214;

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
    msg.setTimeStamp(0.7820213614159136);
    msg.setSource(28133U);
    msg.setSourceEntity(125U);
    msg.setDestination(23007U);
    msg.setDestinationEntity(86U);
    msg.x = 0.5153223859030015;
    msg.y = 0.5381150800813373;
    msg.z = 0.28923085907012;

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
    msg.setTimeStamp(0.3587144849768712);
    msg.setSource(47821U);
    msg.setSourceEntity(8U);
    msg.setDestination(15569U);
    msg.setDestinationEntity(55U);
    msg.x = 0.8718393160782452;
    msg.y = 0.47814798038800543;
    msg.z = 0.40441738626665324;

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
    msg.setTimeStamp(0.34735649653066547);
    msg.setSource(14360U);
    msg.setSourceEntity(109U);
    msg.setDestination(26666U);
    msg.setDestinationEntity(99U);
    msg.x = 0.6458889999545444;
    msg.y = 0.6416412426572825;
    msg.z = 0.3831217963361756;

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
    msg.setTimeStamp(0.4866795076126206);
    msg.setSource(19857U);
    msg.setSourceEntity(94U);
    msg.setDestination(52058U);
    msg.setDestinationEntity(147U);
    msg.value = 0.46632517270550344;

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
    msg.setTimeStamp(0.7047329816840502);
    msg.setSource(59761U);
    msg.setSourceEntity(192U);
    msg.setDestination(39894U);
    msg.setDestinationEntity(6U);
    msg.value = 0.03930668048475072;

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
    msg.setTimeStamp(0.6747450449391375);
    msg.setSource(2139U);
    msg.setSourceEntity(140U);
    msg.setDestination(37394U);
    msg.setDestinationEntity(182U);
    msg.value = 0.2677620144892604;

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
    msg.setTimeStamp(0.5155489887833498);
    msg.setSource(6061U);
    msg.setSourceEntity(107U);
    msg.setDestination(60286U);
    msg.setDestinationEntity(97U);
    msg.value = 0.40273946252351356;

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
    msg.setTimeStamp(0.50055552170777);
    msg.setSource(63359U);
    msg.setSourceEntity(238U);
    msg.setDestination(5798U);
    msg.setDestinationEntity(252U);
    msg.value = 0.27002800412305106;

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
    msg.setTimeStamp(0.6142277900075048);
    msg.setSource(17726U);
    msg.setSourceEntity(238U);
    msg.setDestination(50090U);
    msg.setDestinationEntity(227U);
    msg.value = 0.95112763745027;

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
    msg.setTimeStamp(0.9243959031658426);
    msg.setSource(26457U);
    msg.setSourceEntity(100U);
    msg.setDestination(20310U);
    msg.setDestinationEntity(190U);
    msg.x = 0.9058319695056389;
    msg.y = 0.19584082900844946;
    msg.z = 0.52100930606448;
    msg.phi = 0.8336858400409016;
    msg.theta = 0.610013207331039;
    msg.psi = 0.6433357857646587;
    msg.p = 0.18438781036668117;
    msg.q = 0.48382243215498;
    msg.r = 0.27611171944027724;
    msg.u = 0.47035611971273794;
    msg.v = 0.05419372934181199;
    msg.w = 0.22090703198936013;
    msg.bias_psi = 0.4792690472199812;
    msg.bias_r = 0.5146873586638803;

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
    msg.setTimeStamp(0.590158021949667);
    msg.setSource(52288U);
    msg.setSourceEntity(240U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(171U);
    msg.x = 0.7572499827201375;
    msg.y = 0.013554071577661975;
    msg.z = 0.21928091946531558;
    msg.phi = 0.7624565503467067;
    msg.theta = 0.5850739995438027;
    msg.psi = 0.8012652527911146;
    msg.p = 0.8060915100249401;
    msg.q = 0.07330420654741954;
    msg.r = 0.9011639700445815;
    msg.u = 0.5416615566283203;
    msg.v = 0.8785434235915945;
    msg.w = 0.3915852880028893;
    msg.bias_psi = 0.8094300330736796;
    msg.bias_r = 0.9122418804737594;

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
    msg.setTimeStamp(0.7464236399916149);
    msg.setSource(28705U);
    msg.setSourceEntity(62U);
    msg.setDestination(32128U);
    msg.setDestinationEntity(207U);
    msg.x = 0.954510702121654;
    msg.y = 0.6368258735360756;
    msg.z = 0.21606189579686952;
    msg.phi = 0.8329651884948874;
    msg.theta = 0.7872435280518776;
    msg.psi = 0.16075146968932164;
    msg.p = 0.587553781209264;
    msg.q = 0.3472424952043801;
    msg.r = 0.2996401946309484;
    msg.u = 0.9939328240757648;
    msg.v = 0.7943672799616834;
    msg.w = 0.9215883076669136;
    msg.bias_psi = 0.5669430509280353;
    msg.bias_r = 0.7790305452228672;

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
    msg.setTimeStamp(0.035178016796389655);
    msg.setSource(2805U);
    msg.setSourceEntity(209U);
    msg.setDestination(24056U);
    msg.setDestinationEntity(228U);
    msg.bias_psi = 0.06481244694090105;
    msg.bias_r = 0.8090804112915354;
    msg.cog = 0.451504104027037;
    msg.cyaw = 0.31108308714772837;
    msg.lbl_rej_level = 0.30975500235320674;
    msg.gps_rej_level = 0.9216121205348413;
    msg.custom_x = 0.6509001448727952;
    msg.custom_y = 0.8947749308506118;
    msg.custom_z = 0.5524635374717756;

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
    msg.setTimeStamp(0.22957588480814128);
    msg.setSource(16352U);
    msg.setSourceEntity(40U);
    msg.setDestination(42583U);
    msg.setDestinationEntity(72U);
    msg.bias_psi = 0.6667834665536726;
    msg.bias_r = 0.3144370564416763;
    msg.cog = 0.8088669701857943;
    msg.cyaw = 0.5820897408766068;
    msg.lbl_rej_level = 0.5135060587794754;
    msg.gps_rej_level = 0.5335617765451779;
    msg.custom_x = 0.3356225301947656;
    msg.custom_y = 0.8952118541096726;
    msg.custom_z = 0.4548923559378746;

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
    msg.setTimeStamp(0.2625903258818153);
    msg.setSource(23319U);
    msg.setSourceEntity(6U);
    msg.setDestination(27201U);
    msg.setDestinationEntity(81U);
    msg.bias_psi = 0.7815169972641858;
    msg.bias_r = 0.712829110941938;
    msg.cog = 0.7825652961903412;
    msg.cyaw = 0.1949898454900888;
    msg.lbl_rej_level = 0.04586003209238931;
    msg.gps_rej_level = 0.45819149124774694;
    msg.custom_x = 0.46608877170368856;
    msg.custom_y = 0.297803143646866;
    msg.custom_z = 0.7702893201301005;

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
    msg.setTimeStamp(0.8936664553643457);
    msg.setSource(17081U);
    msg.setSourceEntity(237U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(114U);
    msg.utc_time = 0.03232006524752862;
    msg.reason = 219U;

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
    msg.setTimeStamp(0.20774392961524923);
    msg.setSource(17798U);
    msg.setSourceEntity(25U);
    msg.setDestination(39505U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.016027831281676175;
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
    msg.setTimeStamp(0.9926502462413834);
    msg.setSource(40702U);
    msg.setSourceEntity(5U);
    msg.setDestination(37517U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.015967743788632083;
    msg.reason = 252U;

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
    msg.setTimeStamp(0.14896684698988882);
    msg.setSource(6177U);
    msg.setSourceEntity(56U);
    msg.setDestination(34615U);
    msg.setDestinationEntity(45U);
    msg.id = 175U;
    msg.range = 0.17940103527836748;
    msg.acceptance = 52U;

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
    msg.setTimeStamp(0.023174987678374226);
    msg.setSource(22148U);
    msg.setSourceEntity(22U);
    msg.setDestination(16636U);
    msg.setDestinationEntity(220U);
    msg.id = 40U;
    msg.range = 0.026019082018063244;
    msg.acceptance = 140U;

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
    msg.setTimeStamp(0.786277458375092);
    msg.setSource(2873U);
    msg.setSourceEntity(63U);
    msg.setDestination(61785U);
    msg.setDestinationEntity(120U);
    msg.id = 201U;
    msg.range = 0.8539457054413342;
    msg.acceptance = 204U;

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
    msg.setTimeStamp(0.4877527753430405);
    msg.setSource(41318U);
    msg.setSourceEntity(68U);
    msg.setDestination(3398U);
    msg.setDestinationEntity(20U);
    msg.type = 144U;
    msg.reason = 230U;
    msg.value = 0.24035686493237307;
    msg.timestep = 0.6737090588968282;

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
    msg.setTimeStamp(0.792988849534782);
    msg.setSource(28037U);
    msg.setSourceEntity(249U);
    msg.setDestination(41889U);
    msg.setDestinationEntity(233U);
    msg.type = 107U;
    msg.reason = 208U;
    msg.value = 0.8825514703257809;
    msg.timestep = 0.4195801921968655;

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
    msg.setTimeStamp(0.005652857689399271);
    msg.setSource(6724U);
    msg.setSourceEntity(234U);
    msg.setDestination(53054U);
    msg.setDestinationEntity(36U);
    msg.type = 123U;
    msg.reason = 78U;
    msg.value = 0.6687273966515863;
    msg.timestep = 0.4600640174308508;

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
    msg.setTimeStamp(0.6523889422179525);
    msg.setSource(18311U);
    msg.setSourceEntity(156U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.420245489773064);
    msg.setSource(60069U);
    msg.setSourceEntity(86U);
    msg.setDestination(53159U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.2665763562630864);
    msg.setSource(5166U);
    msg.setSourceEntity(232U);
    msg.setDestination(61323U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.037306131206654936);
    msg.setSource(17296U);
    msg.setSourceEntity(33U);
    msg.setDestination(2820U);
    msg.setDestinationEntity(143U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RZNUJZONWPNZFITWAVWJIHHTMOZQTACRXLFHXFXAJHFLFVRNKIUIWQMUWUAJYHIDTOVSKJQRPUCPJTBPFVOYCSQSFKBHGQWSEJYSGDECEPSAIHRCYPFEOLMVGNCDGRZYDHFOXAMRGBMEDIZQCOBNAAPLTXEKKKKUWRBKLEAAIWXZZYOEPIBZODSXKTYXHVYQCCDPQ");
    tmp_msg_0.lat = 0.14933040986300639;
    tmp_msg_0.lon = 0.11571433018486532;
    tmp_msg_0.depth = 0.5024720544469081;
    tmp_msg_0.query_channel = 85U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 194U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.002108814338372733;
    msg.y = 0.9982961038806033;
    msg.var_x = 0.9279585109688429;
    msg.var_y = 0.7123812797585674;
    msg.distance = 0.9855203099295532;

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
    msg.setTimeStamp(0.7118415608110934);
    msg.setSource(18258U);
    msg.setSourceEntity(80U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(21U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OWCKGCWEJGUFSYXMQPSFYFYAQDILYXTPUHYT");
    tmp_msg_0.lat = 0.70428952536278;
    tmp_msg_0.lon = 0.5368859159827588;
    tmp_msg_0.depth = 0.8594723812612736;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 154U;
    tmp_msg_0.transponder_delay = 205U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4189340370025266;
    msg.y = 0.9105994857139676;
    msg.var_x = 0.9498851851508009;
    msg.var_y = 0.9621891274518163;
    msg.distance = 0.4533613593167619;

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
    msg.setTimeStamp(0.572255852226291);
    msg.setSource(45497U);
    msg.setSourceEntity(69U);
    msg.setDestination(19475U);
    msg.setDestinationEntity(254U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KNARTSOJVEISXCVRWPKMLDOWHTEUZVNMTCP");
    tmp_msg_0.lat = 0.5917933457505667;
    tmp_msg_0.lon = 0.4048638983795705;
    tmp_msg_0.depth = 0.8501575780877908;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 87U;
    tmp_msg_0.transponder_delay = 168U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6659319539822514;
    msg.y = 0.9201417124373018;
    msg.var_x = 0.2551543556060887;
    msg.var_y = 0.28983453143436355;
    msg.distance = 0.11905313223455216;

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
    msg.setTimeStamp(0.2099974149520455);
    msg.setSource(29361U);
    msg.setSourceEntity(6U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(94U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.6041059249702343);
    msg.setSource(2822U);
    msg.setSourceEntity(106U);
    msg.setDestination(13033U);
    msg.setDestinationEntity(16U);
    msg.state = 229U;

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
    msg.setTimeStamp(0.5764542797073281);
    msg.setSource(9968U);
    msg.setSourceEntity(114U);
    msg.setDestination(26632U);
    msg.setDestinationEntity(57U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.7407683123997016);
    msg.setSource(11185U);
    msg.setSourceEntity(103U);
    msg.setDestination(65461U);
    msg.setDestinationEntity(68U);
    msg.x = 0.43800770531698174;
    msg.y = 0.023247332411036936;
    msg.z = 0.28417869772776694;

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
    msg.setTimeStamp(0.5572167626164493);
    msg.setSource(34081U);
    msg.setSourceEntity(194U);
    msg.setDestination(5059U);
    msg.setDestinationEntity(168U);
    msg.x = 0.7062936593655924;
    msg.y = 0.25791325247555397;
    msg.z = 0.1277066212075424;

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
    msg.setTimeStamp(0.6777631355146806);
    msg.setSource(6363U);
    msg.setSourceEntity(154U);
    msg.setDestination(35436U);
    msg.setDestinationEntity(249U);
    msg.x = 0.508296978516491;
    msg.y = 0.9933709124897705;
    msg.z = 0.4372196436694171;

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
    msg.setTimeStamp(0.7148562445407842);
    msg.setSource(16698U);
    msg.setSourceEntity(220U);
    msg.setDestination(25930U);
    msg.setDestinationEntity(87U);
    msg.value = 0.07435421351888527;

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
    msg.setTimeStamp(0.3349928325034912);
    msg.setSource(24840U);
    msg.setSourceEntity(92U);
    msg.setDestination(56699U);
    msg.setDestinationEntity(198U);
    msg.value = 0.2752517601119331;

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
    msg.setTimeStamp(0.8219169545293226);
    msg.setSource(33289U);
    msg.setSourceEntity(188U);
    msg.setDestination(35678U);
    msg.setDestinationEntity(226U);
    msg.value = 0.21769928731933552;

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
    msg.setTimeStamp(0.6318838659188457);
    msg.setSource(25426U);
    msg.setSourceEntity(106U);
    msg.setDestination(807U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5021357553522725;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.4981135853795323);
    msg.setSource(14379U);
    msg.setSourceEntity(122U);
    msg.setDestination(33711U);
    msg.setDestinationEntity(40U);
    msg.value = 0.37741659779401937;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.696647101520683);
    msg.setSource(62812U);
    msg.setSourceEntity(209U);
    msg.setDestination(31773U);
    msg.setDestinationEntity(85U);
    msg.value = 0.08420153007093922;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.9156234354652435);
    msg.setSource(9200U);
    msg.setSourceEntity(2U);
    msg.setDestination(56515U);
    msg.setDestinationEntity(250U);
    msg.value = 0.6475261819974154;
    msg.speed_units = 108U;

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
    msg.setTimeStamp(0.22154595815978106);
    msg.setSource(37206U);
    msg.setSourceEntity(115U);
    msg.setDestination(26245U);
    msg.setDestinationEntity(239U);
    msg.value = 0.40861246667621787;
    msg.speed_units = 223U;

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
    msg.setTimeStamp(0.2430763491776453);
    msg.setSource(60149U);
    msg.setSourceEntity(190U);
    msg.setDestination(30427U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6224349646983282;
    msg.speed_units = 177U;

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
    msg.setTimeStamp(0.6686521085656988);
    msg.setSource(48348U);
    msg.setSourceEntity(218U);
    msg.setDestination(53829U);
    msg.setDestinationEntity(198U);
    msg.value = 0.45497821533578264;

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
    msg.setTimeStamp(0.6815086053505895);
    msg.setSource(22356U);
    msg.setSourceEntity(66U);
    msg.setDestination(12773U);
    msg.setDestinationEntity(65U);
    msg.value = 0.9994187828216369;

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
    msg.setTimeStamp(0.9017447727581417);
    msg.setSource(27037U);
    msg.setSourceEntity(188U);
    msg.setDestination(35715U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9886482163722272;

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
    msg.setTimeStamp(0.6832596351788626);
    msg.setSource(48853U);
    msg.setSourceEntity(25U);
    msg.setDestination(46147U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6684749065745234;

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
    msg.setTimeStamp(0.7197266134878618);
    msg.setSource(61978U);
    msg.setSourceEntity(146U);
    msg.setDestination(44073U);
    msg.setDestinationEntity(245U);
    msg.value = 0.5283641672493619;

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
    msg.setTimeStamp(0.3186950248192133);
    msg.setSource(25836U);
    msg.setSourceEntity(160U);
    msg.setDestination(43688U);
    msg.setDestinationEntity(235U);
    msg.value = 0.39087903075919617;

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
    msg.setTimeStamp(0.44790530889915403);
    msg.setSource(4320U);
    msg.setSourceEntity(199U);
    msg.setDestination(29909U);
    msg.setDestinationEntity(225U);
    msg.value = 0.1275780812598244;

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
    msg.setTimeStamp(0.7895483233008579);
    msg.setSource(40838U);
    msg.setSourceEntity(239U);
    msg.setDestination(59040U);
    msg.setDestinationEntity(111U);
    msg.value = 0.7424330349355396;

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
    msg.setTimeStamp(0.9785658666307305);
    msg.setSource(65236U);
    msg.setSourceEntity(65U);
    msg.setDestination(10565U);
    msg.setDestinationEntity(15U);
    msg.value = 0.5974831457145197;

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
    msg.setTimeStamp(0.06425813962385518);
    msg.setSource(23561U);
    msg.setSourceEntity(228U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(238U);
    msg.start_lat = 0.6669369949475858;
    msg.start_lon = 0.033045573558648234;
    msg.start_z = 0.6032147169831806;
    msg.start_z_units = 254U;
    msg.end_lat = 0.11820325395265574;
    msg.end_lon = 0.5771479682433182;
    msg.end_z = 0.3977347526382278;
    msg.end_z_units = 128U;
    msg.speed = 0.6595563078572657;
    msg.speed_units = 111U;
    msg.lradius = 0.8818529705842844;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.40883569654446394);
    msg.setSource(43413U);
    msg.setSourceEntity(215U);
    msg.setDestination(18476U);
    msg.setDestinationEntity(27U);
    msg.start_lat = 0.9924869280051924;
    msg.start_lon = 0.9187133493770229;
    msg.start_z = 0.08399209865484147;
    msg.start_z_units = 84U;
    msg.end_lat = 0.17071485635285977;
    msg.end_lon = 0.7418943610831125;
    msg.end_z = 0.31719728457158125;
    msg.end_z_units = 65U;
    msg.speed = 0.6273511173400008;
    msg.speed_units = 198U;
    msg.lradius = 0.3670108331599048;
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
    msg.setTimeStamp(0.33548262757929526);
    msg.setSource(474U);
    msg.setSourceEntity(108U);
    msg.setDestination(16696U);
    msg.setDestinationEntity(60U);
    msg.start_lat = 0.8443153543096447;
    msg.start_lon = 0.5959324931304408;
    msg.start_z = 0.4656069875231317;
    msg.start_z_units = 28U;
    msg.end_lat = 0.7871804862084234;
    msg.end_lon = 0.031370232891027805;
    msg.end_z = 0.017242619270392612;
    msg.end_z_units = 203U;
    msg.speed = 0.3791311151863894;
    msg.speed_units = 20U;
    msg.lradius = 0.7168112337440427;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.4973580878139521);
    msg.setSource(29466U);
    msg.setSourceEntity(103U);
    msg.setDestination(27692U);
    msg.setDestinationEntity(11U);
    msg.x = 0.7663769272532679;
    msg.y = 0.7487736449939403;
    msg.z = 0.4403899084631362;
    msg.k = 0.5278752759995458;
    msg.m = 0.8345143613188934;
    msg.n = 0.8248370863934066;
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
    msg.setTimeStamp(0.21090816052378547);
    msg.setSource(6138U);
    msg.setSourceEntity(237U);
    msg.setDestination(11905U);
    msg.setDestinationEntity(169U);
    msg.x = 0.2985043221464796;
    msg.y = 0.1723969064356643;
    msg.z = 0.6495117932155062;
    msg.k = 0.6240563035927695;
    msg.m = 0.8902051395636493;
    msg.n = 0.6272802808626652;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.267034831096827);
    msg.setSource(57247U);
    msg.setSourceEntity(182U);
    msg.setDestination(43435U);
    msg.setDestinationEntity(24U);
    msg.x = 0.09752977472943825;
    msg.y = 0.8363580604928119;
    msg.z = 0.22468551850901775;
    msg.k = 0.08126591109893888;
    msg.m = 0.9426293750152113;
    msg.n = 0.4443262128975418;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.80514694386726);
    msg.setSource(56820U);
    msg.setSourceEntity(70U);
    msg.setDestination(9208U);
    msg.setDestinationEntity(1U);
    msg.value = 0.03654657920521509;

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
    msg.setTimeStamp(0.07279413983741367);
    msg.setSource(44967U);
    msg.setSourceEntity(153U);
    msg.setDestination(60360U);
    msg.setDestinationEntity(241U);
    msg.value = 0.6424326737079264;

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
    msg.setTimeStamp(0.8254961203979841);
    msg.setSource(39363U);
    msg.setSourceEntity(250U);
    msg.setDestination(26792U);
    msg.setDestinationEntity(98U);
    msg.value = 0.4377098406128769;

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
    msg.setTimeStamp(0.8626847092972602);
    msg.setSource(40184U);
    msg.setSourceEntity(210U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(226U);
    msg.u = 0.9027044342684464;
    msg.v = 0.9529004522741166;
    msg.w = 0.3143106174284124;
    msg.p = 0.6694062112733588;
    msg.q = 0.2799614488885336;
    msg.r = 0.8290498766300703;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.25171489836439076);
    msg.setSource(58777U);
    msg.setSourceEntity(62U);
    msg.setDestination(40590U);
    msg.setDestinationEntity(160U);
    msg.u = 0.6076737602548877;
    msg.v = 0.48525713411292903;
    msg.w = 0.915140668071015;
    msg.p = 0.04397033641656156;
    msg.q = 0.2793842642458022;
    msg.r = 0.3637428709917754;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.3191040854691948);
    msg.setSource(60973U);
    msg.setSourceEntity(195U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(201U);
    msg.u = 0.14524816792069883;
    msg.v = 0.5862694306809215;
    msg.w = 0.40658690522315366;
    msg.p = 0.03703769972800819;
    msg.q = 0.8686789673983675;
    msg.r = 0.6805262749452449;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.644205497960933);
    msg.setSource(65471U);
    msg.setSourceEntity(127U);
    msg.setDestination(62226U);
    msg.setDestinationEntity(118U);
    msg.start_lat = 0.13004214680261383;
    msg.start_lon = 0.37030688354344987;
    msg.start_z = 0.677170922633329;
    msg.start_z_units = 60U;
    msg.end_lat = 0.7112899056557184;
    msg.end_lon = 0.25560089074277403;
    msg.end_z = 0.008563603478307091;
    msg.end_z_units = 186U;
    msg.lradius = 0.9147803803651418;
    msg.flags = 158U;
    msg.x = 0.839502403689216;
    msg.y = 0.682365843755341;
    msg.z = 0.03517349245319057;
    msg.vx = 0.1470671452041138;
    msg.vy = 0.27765993943068124;
    msg.vz = 0.9833527118500813;
    msg.course_error = 0.6408613827698525;
    msg.eta = 57971U;

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
    msg.setTimeStamp(0.3997129746461039);
    msg.setSource(2943U);
    msg.setSourceEntity(123U);
    msg.setDestination(61718U);
    msg.setDestinationEntity(212U);
    msg.start_lat = 0.7116444232547153;
    msg.start_lon = 0.3351909883371357;
    msg.start_z = 0.5569780049910631;
    msg.start_z_units = 79U;
    msg.end_lat = 0.46677241855864204;
    msg.end_lon = 0.1174662660617698;
    msg.end_z = 0.4983467028641191;
    msg.end_z_units = 45U;
    msg.lradius = 0.21035424455008334;
    msg.flags = 193U;
    msg.x = 0.3666221290345677;
    msg.y = 0.27493410608345703;
    msg.z = 0.5417970241072455;
    msg.vx = 0.7905458759552901;
    msg.vy = 0.8192241241485734;
    msg.vz = 0.9268063958026209;
    msg.course_error = 0.10286363215984373;
    msg.eta = 45677U;

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
    msg.setTimeStamp(0.3387377414903079);
    msg.setSource(19236U);
    msg.setSourceEntity(165U);
    msg.setDestination(54734U);
    msg.setDestinationEntity(130U);
    msg.start_lat = 0.3453622506528442;
    msg.start_lon = 0.32637063721537374;
    msg.start_z = 0.9633333220539769;
    msg.start_z_units = 56U;
    msg.end_lat = 0.8799538950605087;
    msg.end_lon = 0.7641848186472392;
    msg.end_z = 0.2814702685802277;
    msg.end_z_units = 167U;
    msg.lradius = 0.45052479848864024;
    msg.flags = 227U;
    msg.x = 0.07811923440007962;
    msg.y = 0.9061315771989433;
    msg.z = 0.9372998284394413;
    msg.vx = 0.4515200857459245;
    msg.vy = 0.7875270487997605;
    msg.vz = 0.5253382040551652;
    msg.course_error = 0.9429780232719932;
    msg.eta = 19077U;

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
    msg.setTimeStamp(0.5322158695175688);
    msg.setSource(63091U);
    msg.setSourceEntity(67U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(44U);
    msg.k = 0.18224651814932535;
    msg.m = 0.7724301043025188;
    msg.n = 0.3811213682163582;

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
    msg.setTimeStamp(0.1323061269336453);
    msg.setSource(59265U);
    msg.setSourceEntity(76U);
    msg.setDestination(25693U);
    msg.setDestinationEntity(234U);
    msg.k = 0.44858661044710113;
    msg.m = 0.13874835219120274;
    msg.n = 0.5129513279192225;

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
    msg.setTimeStamp(0.5984432426908582);
    msg.setSource(18534U);
    msg.setSourceEntity(90U);
    msg.setDestination(37706U);
    msg.setDestinationEntity(229U);
    msg.k = 0.2682845079378322;
    msg.m = 0.8212193977439735;
    msg.n = 0.33898606973196654;

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
    msg.setTimeStamp(0.3827439719538641);
    msg.setSource(57386U);
    msg.setSourceEntity(54U);
    msg.setDestination(59226U);
    msg.setDestinationEntity(153U);
    msg.p = 0.7158873322272766;
    msg.i = 0.36452549801167666;
    msg.d = 0.700239442666143;
    msg.a = 0.3036210587120344;

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
    msg.setTimeStamp(0.11898776393752619);
    msg.setSource(846U);
    msg.setSourceEntity(115U);
    msg.setDestination(31140U);
    msg.setDestinationEntity(188U);
    msg.p = 0.0023369429419783927;
    msg.i = 0.9861548582662889;
    msg.d = 0.1418798262191171;
    msg.a = 0.7036711280398744;

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
    msg.setTimeStamp(0.2342244622509111);
    msg.setSource(57740U);
    msg.setSourceEntity(106U);
    msg.setDestination(53952U);
    msg.setDestinationEntity(168U);
    msg.p = 0.7700537478184378;
    msg.i = 0.20636471917154808;
    msg.d = 0.17669965939004573;
    msg.a = 0.8577657010411304;

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
    msg.setTimeStamp(0.812317407592739);
    msg.setSource(32463U);
    msg.setSourceEntity(155U);
    msg.setDestination(5587U);
    msg.setDestinationEntity(187U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.5331590733921914);
    msg.setSource(45586U);
    msg.setSourceEntity(116U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(243U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.21218917288064765);
    msg.setSource(12581U);
    msg.setSourceEntity(92U);
    msg.setDestination(17805U);
    msg.setDestinationEntity(10U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.9802476895870122);
    msg.setSource(63114U);
    msg.setSourceEntity(140U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(208U);
    msg.timeout = 3497U;
    msg.lat = 0.3870330567200049;
    msg.lon = 0.16922735741908967;
    msg.z = 0.7705382445401591;
    msg.z_units = 118U;
    msg.speed = 0.7825103448464755;
    msg.speed_units = 245U;
    msg.roll = 0.3287188530491203;
    msg.pitch = 0.810304280651315;
    msg.yaw = 0.7970895241727011;
    msg.custom.assign("OUKMWOSAEEOYZVRSLERWPODLXVVRQEOZQFDLGEDTOHKBGHFBDPTZOXTCTMNZPRRSESGHAGPYFWUNZKDQHYINCBMAWFQQALETVNQEVBPTVPJLAIFMEHLGLJYCKMFXUANI");

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
    msg.setTimeStamp(0.17312910765621392);
    msg.setSource(2800U);
    msg.setSourceEntity(165U);
    msg.setDestination(7316U);
    msg.setDestinationEntity(55U);
    msg.timeout = 25886U;
    msg.lat = 0.131142690779666;
    msg.lon = 0.3896704824854609;
    msg.z = 0.6939796461853466;
    msg.z_units = 190U;
    msg.speed = 0.14468242690941668;
    msg.speed_units = 68U;
    msg.roll = 0.6574301566321191;
    msg.pitch = 0.48820725169383217;
    msg.yaw = 0.35492342739847893;
    msg.custom.assign("IRKQCMBSBLDTFVBIBPOKOTFTSSNPKQODAEZXTZEWFLRXHRMMJMRCDAULPDMYIWOJYDMKQVZSDARFQZEYECNOVIHRETHRSEFGQGLFUYWKDPRTLISOXZGJEWTGBNXTLAKQBQPZDUEAHCNNBYXWTHVBYACEGUIC");

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
    msg.setTimeStamp(0.2572960557697943);
    msg.setSource(11076U);
    msg.setSourceEntity(158U);
    msg.setDestination(45003U);
    msg.setDestinationEntity(8U);
    msg.timeout = 25776U;
    msg.lat = 0.7338988770557083;
    msg.lon = 0.7549185282191896;
    msg.z = 0.17562380549102252;
    msg.z_units = 246U;
    msg.speed = 0.5374130598468456;
    msg.speed_units = 27U;
    msg.roll = 0.4193059343796929;
    msg.pitch = 0.9375277691697668;
    msg.yaw = 0.15578732235254766;
    msg.custom.assign("CRGSGAFGHXBZDSQIBOBCXDNSMSNRHLHVVFLDGXIASJUIMQDEQKBAQMFPTMODMGSOWMDVCWURHNNFNISYYTOWCASXTCJHKNHYYYQHQUNSJCTMAQOEOPAUJZIQUKEZLDKKBPKCTTIEZRXYGPBWFNCUFPWWTLOECRSXKBIHUGLWKKCZZVWZLDLEJHTREUMOLRAPPFYRPWVVA");

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
    msg.setTimeStamp(0.9199636213623964);
    msg.setSource(14331U);
    msg.setSourceEntity(87U);
    msg.setDestination(1381U);
    msg.setDestinationEntity(149U);
    msg.timeout = 27283U;
    msg.lat = 0.9950971738594938;
    msg.lon = 0.688868335366645;
    msg.z = 0.9549961140000999;
    msg.z_units = 80U;
    msg.speed = 0.20083027387512875;
    msg.speed_units = 58U;
    msg.duration = 14384U;
    msg.radius = 0.9141831557565038;
    msg.flags = 38U;
    msg.custom.assign("FQPCUZJZDKNJRVWYPTYBRPAAJQPPPOLMLBABEVWBDOTDXXVNRHRSPWFZJFEXVFSHIECNPICYZULLEBGJHMUUXWQFLGZAGLXDCNOAIGJZDKZTEUJVDSQSIXGSFZHCTDIHUKIFBATVSNTBVWPJRCDDSNWVNTIZGRPRVWATKEUYW");

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
    msg.setTimeStamp(0.6543224777481109);
    msg.setSource(60993U);
    msg.setSourceEntity(133U);
    msg.setDestination(21247U);
    msg.setDestinationEntity(212U);
    msg.timeout = 12845U;
    msg.lat = 0.19336599038800384;
    msg.lon = 0.26482500718366053;
    msg.z = 0.14969332234354493;
    msg.z_units = 202U;
    msg.speed = 0.9279050216559446;
    msg.speed_units = 234U;
    msg.duration = 29753U;
    msg.radius = 0.2702166635644252;
    msg.flags = 184U;
    msg.custom.assign("IJKKNTYKJEWE");

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
    msg.setTimeStamp(0.2624136237578397);
    msg.setSource(11222U);
    msg.setSourceEntity(224U);
    msg.setDestination(27073U);
    msg.setDestinationEntity(233U);
    msg.timeout = 6278U;
    msg.lat = 0.9092182967837464;
    msg.lon = 0.4322755645276585;
    msg.z = 0.08705779255524704;
    msg.z_units = 252U;
    msg.speed = 0.09067408042358471;
    msg.speed_units = 138U;
    msg.duration = 31008U;
    msg.radius = 0.1867432280468947;
    msg.flags = 10U;
    msg.custom.assign("VPLPRHVLSEJZFFMOJNWWENDLAQGTWNJPTTWICOSNBCFEZKXNWUPTFXAKHRCHPTBWLVQAUSMSEAIIVXEEUERFMCVOKVJSYFUPTYHGAYTLCHXGRWRQWXDTEUKSQDZFAHNZCORWSTIVLGZMPMDLYRAOUNKIRMPJYIQCKYXDGAVGXRQKUFRMOAIJFOJZJXDTOLNUDWMPX");

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
    msg.setTimeStamp(0.4786981464791411);
    msg.setSource(8331U);
    msg.setSourceEntity(253U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(48U);
    msg.custom.assign("CQQVHTCDUVBHKYETFJZIZNFIMVPVJXHBVIGBRJXIBOFBLICAKZTABMSQIYGLPWQTAIPNNZMQRSOGXRBRQWAWXSPXMCQXJBTKHLGVNXENMUHPTJRZUXOJCFVLRJZDDAAFPYVAEBZDSQOKELWVEWOORGYGEEUMEAMLSEPUEHYPPTHLRFBIWIWDGSSDKDYGIJAOGZDKZOMLFAGRHNUQFHK");

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
    msg.setTimeStamp(0.6645550252635875);
    msg.setSource(18508U);
    msg.setSourceEntity(170U);
    msg.setDestination(44310U);
    msg.setDestinationEntity(204U);
    msg.custom.assign("QTEJQRULJNKNITJTUEEGBCFUQLQOOXGUKODNYNCVRIFMXZDKWZWXIIFNCANPKYNYHYIBLWAMKXFTUDWRXQUEPIOSVODLKTFRPMBVZORVJAQRVMPZALRYSFBIKDEZFMXACGWJPZJRBLIGPOVOFHSMKBTRWHNQH");

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
    msg.setTimeStamp(0.45572905138708575);
    msg.setSource(18521U);
    msg.setSourceEntity(158U);
    msg.setDestination(30524U);
    msg.setDestinationEntity(69U);
    msg.custom.assign("ZAFDRADSIAGPTKYXTFZYQZULYPHTMCUCCFSRSYEEDJXLVOOFSBWRRTJLMPQONNVGKXQFLUMVJIKGHVCQVFJYJXDIGJBUEQCSEIDZAAFAHGRAWACJSOIPWHVSNZVWEYZFXVSWWBQGHKORWTNIINGWIPLXQDENTPUWCZHYIPKXXMBUZUM");

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
    msg.setTimeStamp(0.10936143616462823);
    msg.setSource(22921U);
    msg.setSourceEntity(107U);
    msg.setDestination(19419U);
    msg.setDestinationEntity(195U);
    msg.timeout = 54199U;
    msg.lat = 0.3245694931327042;
    msg.lon = 0.27687808307293427;
    msg.z = 0.6363743889671541;
    msg.z_units = 250U;
    msg.duration = 42452U;
    msg.speed = 0.7910638273347019;
    msg.speed_units = 75U;
    msg.type = 131U;
    msg.radius = 0.8029772911299913;
    msg.length = 0.3679042846794135;
    msg.bearing = 0.3430017657998434;
    msg.direction = 24U;
    msg.custom.assign("BYGMICUJJKBADFVRMDCQSPJVLTFRFCLRCIEARXZKNHXBOIAOPPQKBUWCUYAINB");

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
    msg.setTimeStamp(0.42412241684583085);
    msg.setSource(1505U);
    msg.setSourceEntity(2U);
    msg.setDestination(16042U);
    msg.setDestinationEntity(122U);
    msg.timeout = 4813U;
    msg.lat = 0.37090630194612606;
    msg.lon = 0.9098825782536181;
    msg.z = 0.04107133190955714;
    msg.z_units = 127U;
    msg.duration = 50915U;
    msg.speed = 0.72777309793892;
    msg.speed_units = 129U;
    msg.type = 140U;
    msg.radius = 0.0362484195034839;
    msg.length = 0.20197646983746342;
    msg.bearing = 0.6716770049657595;
    msg.direction = 19U;
    msg.custom.assign("QENRYYKCENMXLDTCEQNHYMYODOIZGNTZCAIXPOCISHUDDMVVHOWKWPSAREIYHOFMBKJEKPSSAJPJNZNBQFLXFGNFLVJCCWUMUUGLGBUMMWXSAUGVMLPCS");

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
    msg.setTimeStamp(0.7326630331330014);
    msg.setSource(30460U);
    msg.setSourceEntity(30U);
    msg.setDestination(19703U);
    msg.setDestinationEntity(230U);
    msg.timeout = 40678U;
    msg.lat = 0.8196436297293032;
    msg.lon = 0.5563532066158973;
    msg.z = 0.7110986816525001;
    msg.z_units = 10U;
    msg.duration = 45930U;
    msg.speed = 0.3037963022044703;
    msg.speed_units = 154U;
    msg.type = 120U;
    msg.radius = 0.42342301938736404;
    msg.length = 0.3848618211592535;
    msg.bearing = 0.8209368708323584;
    msg.direction = 237U;
    msg.custom.assign("MCVUESWJPTJVROWGDWCBFDTEZGMSRORYSNVYXNTZYPFRXMLQQJUGGZBZHAEQHTITDPDNYPCKXIPKKVP");

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
    msg.setTimeStamp(0.3883938629206558);
    msg.setSource(7758U);
    msg.setSourceEntity(26U);
    msg.setDestination(7385U);
    msg.setDestinationEntity(211U);
    msg.duration = 10578U;
    msg.custom.assign("FIWMKBVPKPMFVJPULPRVUHPGAGIZNZDZZDLLPNUTEOYOBCIORXGGWLQTFBKNEXQZIQSRLVTEEIRV");

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
    msg.setTimeStamp(0.836378058368796);
    msg.setSource(36270U);
    msg.setSourceEntity(12U);
    msg.setDestination(11689U);
    msg.setDestinationEntity(143U);
    msg.duration = 43455U;
    msg.custom.assign("VGMXCMRUPOUOHJQOMKNLTOUWFZZUWVVSWQRXMOXPHJHLZDKMRQUFXMUKBLPYWDKPUOKFCBNIZPHFMJTDXRBIECYZREVVIUAGTNAVFC");

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
    msg.setTimeStamp(0.26573904497213796);
    msg.setSource(44306U);
    msg.setSourceEntity(19U);
    msg.setDestination(52315U);
    msg.setDestinationEntity(93U);
    msg.duration = 31016U;
    msg.custom.assign("JNBJZYPUUDPIQMGEQVYRFGGRUGAPYRMUSFJREJMTLIJHYJJPYQALCWSXBATWYBSGOOOIHWLFZTMOQIUTIKDKGDEPDAVUVKNPSCQJFEVMZWIAZBWLIRDZFYVDGVTPFBAXMCXPTQCUHFQLDNMEBHFMNTVK");

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
    msg.setTimeStamp(0.720710188503179);
    msg.setSource(55286U);
    msg.setSourceEntity(205U);
    msg.setDestination(43381U);
    msg.setDestinationEntity(13U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.44442233153669286;
    tmp_msg_0.z_units = 136U;
    msg.control.set(tmp_msg_0);
    msg.duration = 34181U;
    msg.custom.assign("MKWEBKIDRUHHXZMONWYGCMPPRLIGZCVNLCYNXTABREMZURAFTBKKSJGFABTYRNVAXWHHCXGMJFBDDGONIFFJSVNTKFXXFSJQNETJZBSVSKFMXPAAENZDYNTRKOCWZYIPLVWZMTQUURHDZATUEPPDTJIFUGDEOYIKILRVWETCPSJIWOSZ");

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
    msg.setTimeStamp(0.16392209311116357);
    msg.setSource(63671U);
    msg.setSourceEntity(92U);
    msg.setDestination(41958U);
    msg.setDestinationEntity(155U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.9088959542272427;
    msg.control.set(tmp_msg_0);
    msg.duration = 40005U;
    msg.custom.assign("ZUMBGWSUWIUCIEBSCQOYIJTRHAOMFAZHOQJDYBPKCLNVWNIQRIIAHNPMBLJGHJNFGKQGKMQNSSXIATCPYEVBTXVKUYYKIEUUQZNWEVOIH");

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
    msg.setTimeStamp(0.7728206142007111);
    msg.setSource(35335U);
    msg.setSourceEntity(110U);
    msg.setDestination(30056U);
    msg.setDestinationEntity(150U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.06616384839998102;
    tmp_msg_0.z_units = 65U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61258U;
    msg.custom.assign("ZPWNYXIRBXGGWXNOZETLQHULPCOMCYRTWDZQTJNEYWHIMQCSYQWKBETHKRTZVENEAE");

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
    msg.setTimeStamp(0.6557852233574084);
    msg.setSource(49400U);
    msg.setSourceEntity(34U);
    msg.setDestination(27572U);
    msg.setDestinationEntity(235U);
    msg.timeout = 19217U;
    msg.lat = 0.21394727865892682;
    msg.lon = 0.15169221782037412;
    msg.z = 0.294185643480261;
    msg.z_units = 1U;
    msg.speed = 0.43962588937977287;
    msg.speed_units = 216U;
    msg.bearing = 0.09845905187957282;
    msg.cross_angle = 0.7474034371158835;
    msg.width = 0.4487227414359466;
    msg.length = 0.8023274526370094;
    msg.hstep = 0.8978493269616667;
    msg.coff = 79U;
    msg.alternation = 24U;
    msg.flags = 234U;
    msg.custom.assign("IGZHRGDJSOFPDTIGGZCOHQKEHOXKWABKFTVX");

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
    msg.setTimeStamp(0.3894944990934833);
    msg.setSource(50960U);
    msg.setSourceEntity(19U);
    msg.setDestination(18433U);
    msg.setDestinationEntity(146U);
    msg.timeout = 37322U;
    msg.lat = 0.1912200711822074;
    msg.lon = 0.40362048157249664;
    msg.z = 0.7727743325626475;
    msg.z_units = 227U;
    msg.speed = 0.4880051270214779;
    msg.speed_units = 95U;
    msg.bearing = 0.5354662906158271;
    msg.cross_angle = 0.0703177897030659;
    msg.width = 0.9541864592841952;
    msg.length = 0.9271456561455191;
    msg.hstep = 0.8176375432277818;
    msg.coff = 105U;
    msg.alternation = 194U;
    msg.flags = 61U;
    msg.custom.assign("EASLTBUHDAQPLWNSXDNGTQFPXBCCEQNTKDVWFNQBIMJLUQAXZJEOBLBXEOZOJQRTXPOQPIMCOIBSDPYREWVUIGCKZZQDFXGVDWNASBSVAEGYYKDZHEPMAHROTWHUAAEMHVLLZKBNDOZRJHYNBFYUUJPFVBAKMTGLIVNAVXZTCRKOIMQKPNYIXOMJTWRTVVENMUXCRZMPFHFHKUWUG");

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
    msg.setTimeStamp(0.8818499351920703);
    msg.setSource(48750U);
    msg.setSourceEntity(231U);
    msg.setDestination(20200U);
    msg.setDestinationEntity(115U);
    msg.timeout = 30869U;
    msg.lat = 0.5193822004055845;
    msg.lon = 0.1617536002637303;
    msg.z = 0.7346674886824651;
    msg.z_units = 86U;
    msg.speed = 0.624059612301532;
    msg.speed_units = 239U;
    msg.bearing = 0.2880854696470483;
    msg.cross_angle = 0.2890285968123395;
    msg.width = 0.8361224691533333;
    msg.length = 0.7195639773486349;
    msg.hstep = 0.21084930847555128;
    msg.coff = 220U;
    msg.alternation = 212U;
    msg.flags = 44U;
    msg.custom.assign("VOXKLVNVIGBQEGUAXIDNKBVTSEAZQUNUAGAXAHZBDHTNHKIUHEJCYSWWKUHNLCSCXJXOMRVGIOYGJBTATVNCQFSVRQPWFPOSWYAHLDCFJJEKPFLIJMKPPRRFOWXCRIMGUQMROIZORAOWGSFAORANMCMQRSGDSZHUWHMZCTTLBQFTPHDUK");

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
    msg.setTimeStamp(0.7021870687291901);
    msg.setSource(14078U);
    msg.setSourceEntity(193U);
    msg.setDestination(55218U);
    msg.setDestinationEntity(219U);
    msg.timeout = 43963U;
    msg.lat = 0.06352083689854449;
    msg.lon = 0.32638169526925576;
    msg.z = 0.6701246603929764;
    msg.z_units = 43U;
    msg.speed = 0.5757660657064787;
    msg.speed_units = 17U;
    msg.custom.assign("OSBFXJZOKXGHOLPYWSQOMIDVZULWLUNHDHPQBQKIZBIRYESOJLYHKESEXGJSQSFSDGKFAGVSPQDTJPDQCGYMULCNLBVBHSTCJFQRBKLYMXKVINQ");

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
    msg.setTimeStamp(0.8180727684575755);
    msg.setSource(45158U);
    msg.setSourceEntity(207U);
    msg.setDestination(3816U);
    msg.setDestinationEntity(112U);
    msg.timeout = 64116U;
    msg.lat = 0.6532992357674788;
    msg.lon = 0.8383658392404355;
    msg.z = 0.5750943097413529;
    msg.z_units = 8U;
    msg.speed = 0.38069703909314156;
    msg.speed_units = 77U;
    msg.custom.assign("PFGSDTHJUPYQCXLPNIJLLFOXLRKVFUYZZJYLVEZVMJGAWEMRGAZHIBXFAUVNWTIVRICWXCIDUHGNVLXFTZMOYESHSORMFGHVJWPMQESONDRFBCFLQAWYZWMBDPCHYBCBGSFWQUOTNPVCGSNOENBYFAXQGHOIZ");

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
    msg.setTimeStamp(0.21512909331165897);
    msg.setSource(59439U);
    msg.setSourceEntity(17U);
    msg.setDestination(27014U);
    msg.setDestinationEntity(196U);
    msg.timeout = 25057U;
    msg.lat = 0.18316864661305876;
    msg.lon = 0.8480301931410934;
    msg.z = 0.6660245858899172;
    msg.z_units = 205U;
    msg.speed = 0.6500079272019098;
    msg.speed_units = 156U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6299508165386719;
    tmp_msg_0.y = 0.1213509090081839;
    tmp_msg_0.z = 0.37851438278620786;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CBQCLNLTYUKRZPQNJOAXVHKTIZFUIVKYSULISMTGXTCJVHBZLOKPZACAVDEGVNVXWURLTDMRCSBLRAYXVDVJFYBCIDWFJPOUILMRFWJOOLDXYPMYNEIYTHUMFAPAZFJNWHSECGAZBAONXZJXZEFAMGTQXHZJHTDWNKQIDQBGBNVRGSZEWRWQMKGWSSHSRMXYJPUWYBVDIHXBWBTFTPKQUSIKFERUEHDNQOPKJQELOICPSQCM");

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
    msg.setTimeStamp(0.09730173032707512);
    msg.setSource(21812U);
    msg.setSourceEntity(207U);
    msg.setDestination(18904U);
    msg.setDestinationEntity(171U);
    msg.x = 0.8560659270859687;
    msg.y = 0.06459139337056108;
    msg.z = 0.34675461453608813;

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
    msg.setTimeStamp(0.8977070718972262);
    msg.setSource(54260U);
    msg.setSourceEntity(107U);
    msg.setDestination(45154U);
    msg.setDestinationEntity(177U);
    msg.x = 0.054429065914971875;
    msg.y = 0.7227994462281013;
    msg.z = 0.1849874516287986;

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
    msg.setTimeStamp(0.58005206620559);
    msg.setSource(3284U);
    msg.setSourceEntity(208U);
    msg.setDestination(18879U);
    msg.setDestinationEntity(62U);
    msg.x = 0.6215168615252733;
    msg.y = 0.9987471647113493;
    msg.z = 0.588745948457841;

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
    msg.setTimeStamp(0.6215633451708041);
    msg.setSource(6303U);
    msg.setSourceEntity(162U);
    msg.setDestination(19204U);
    msg.setDestinationEntity(35U);
    msg.timeout = 24226U;
    msg.lat = 0.23741843501477622;
    msg.lon = 0.32229823042931616;
    msg.z = 0.7799497307577148;
    msg.z_units = 69U;
    msg.amplitude = 0.9928086612298522;
    msg.pitch = 0.387850690591252;
    msg.speed = 0.2248783361088671;
    msg.speed_units = 80U;
    msg.custom.assign("PHIARTEAUYAFPSSSTVDVCKMVLQFJECQKLGPCJBSJDVZIXRQPZETWHYPPAIWDWNSHNOZADOZJNBJLLDMHQJCIBWKGXDVCYBIXKFVURCYQKIMOYNROUUSWAFRNGCBPZKAUNWMVQDTPHMRZ");

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
    msg.setTimeStamp(0.6196258426237181);
    msg.setSource(25946U);
    msg.setSourceEntity(40U);
    msg.setDestination(47555U);
    msg.setDestinationEntity(222U);
    msg.timeout = 3165U;
    msg.lat = 0.9633132999460744;
    msg.lon = 0.25692327819609495;
    msg.z = 0.20870572840303414;
    msg.z_units = 15U;
    msg.amplitude = 0.767082785973396;
    msg.pitch = 0.5053775006321517;
    msg.speed = 0.07788365763413996;
    msg.speed_units = 183U;
    msg.custom.assign("NVSODQTRYKQVTJBNUJTFLPIJCRCPSWCGGFDBWJWOAXERIWEUJCOHUOGGOPXQNQUPFLMXQBHGFKVDFKFYTMEVZCMHRRMZNBCPDCXKDDZXGMUINLSGVUHZGYMCILYJAOMLOOEISXVDLMLDHALHZINPJSXEYVYVVSAONDWUCJLGAQESKAPRIBNBEIUW");

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
    msg.setTimeStamp(0.7799910379603174);
    msg.setSource(10535U);
    msg.setSourceEntity(139U);
    msg.setDestination(24887U);
    msg.setDestinationEntity(98U);
    msg.timeout = 46381U;
    msg.lat = 0.4783613610471371;
    msg.lon = 0.5854750077993907;
    msg.z = 0.0027990942241483685;
    msg.z_units = 201U;
    msg.amplitude = 0.5656236226699078;
    msg.pitch = 0.1939044927540865;
    msg.speed = 0.9848523011033165;
    msg.speed_units = 25U;
    msg.custom.assign("MZTHQLFYBGOYFTMEZRFTHADLOPUFTTPCBWFOVGGUASDSHYKDDGCSZPAPEHCJCXSULZVXHYUJIGDMEVOLIBXQIXWKENBQFHWPKWNHECDSWPXYYKMAUUQOPYXIJ");

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
    msg.setTimeStamp(0.5246449202337736);
    msg.setSource(9803U);
    msg.setSourceEntity(251U);
    msg.setDestination(15254U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.24098156648997016);
    msg.setSource(33818U);
    msg.setSourceEntity(225U);
    msg.setDestination(48386U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.3190473985527613);
    msg.setSource(43935U);
    msg.setSourceEntity(26U);
    msg.setDestination(64890U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.2807360634591982);
    msg.setSource(42003U);
    msg.setSourceEntity(163U);
    msg.setDestination(64638U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.4880237818516231;
    msg.lon = 0.025531630053798327;
    msg.z = 0.8266634852224095;
    msg.z_units = 7U;
    msg.radius = 0.06480425770388487;
    msg.duration = 57154U;
    msg.speed = 0.7601352430490742;
    msg.speed_units = 10U;
    msg.custom.assign("HUHZHOPOYVOHOJORHYMCPTFTIBOJDAZEVSQOJCCIQEZKERJINOMJPYAWLDNHCCLXEYMTTTUADPKGAKPZRPRMQVWUXDNIENLWZLSVWXQWSIPTUZAHHSLSR");

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
    msg.setTimeStamp(0.19757365689421813);
    msg.setSource(52094U);
    msg.setSourceEntity(77U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.7390359539864538;
    msg.lon = 0.3061013855374026;
    msg.z = 0.7516616668837183;
    msg.z_units = 179U;
    msg.radius = 0.46332569626775055;
    msg.duration = 22747U;
    msg.speed = 0.3055061013728395;
    msg.speed_units = 165U;
    msg.custom.assign("VLCRPGADGCWNAILTMEUCBKGWOSEPIFTWSBSKYLAIQBOCQXAAUJFJWFRNIORLIWGTASJUEYXZYYGGQHCFDFKJONTMAKTGQMXXOQAMBPFFXJTZAYTPDNEXJOZZDQRQPCRZPGDRIWDECHLSRVEHKFTSPKSUKVTLVROUKWHWUJVQZBRLNHMPWMMYDJPUNHNDFSOYOKZUN");

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
    msg.setTimeStamp(0.07836061030334851);
    msg.setSource(59021U);
    msg.setSourceEntity(11U);
    msg.setDestination(32124U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.7832343111214722;
    msg.lon = 0.6989672741100498;
    msg.z = 0.3086645292572845;
    msg.z_units = 228U;
    msg.radius = 0.34188611632443555;
    msg.duration = 32006U;
    msg.speed = 0.8918097294636227;
    msg.speed_units = 193U;
    msg.custom.assign("ECQLPSPZVRAXDVBWNPSNWWHGUZMGAJGNJUHAPDJJZRMIKTYTUYQLSHUZNNMEDYHBJZWKEOUUKNXEMFBRPPUCMXRDDZQAVYFUMGTVEIALTAVRNKWRTOKUHOAZCKMKJTIHJEPXDIOCPHMKBFIHZBONRGCNVCWEAQGESVFXWRHS");

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
    msg.setTimeStamp(0.6149378162118067);
    msg.setSource(8349U);
    msg.setSourceEntity(5U);
    msg.setDestination(27351U);
    msg.setDestinationEntity(237U);
    msg.timeout = 58553U;
    msg.flags = 17U;
    msg.lat = 0.3302628310543816;
    msg.lon = 0.6369768257560984;
    msg.start_z = 0.727578551474981;
    msg.start_z_units = 93U;
    msg.end_z = 0.05435807640199808;
    msg.end_z_units = 95U;
    msg.radius = 0.08737257356830008;
    msg.speed = 0.273788824703022;
    msg.speed_units = 176U;
    msg.custom.assign("DIQNTYMCAXUGZOBKVRJJPMLTEWMSZWZBLYLOLCIOEBRCGGD");

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
    msg.setTimeStamp(0.4907079270835554);
    msg.setSource(49866U);
    msg.setSourceEntity(170U);
    msg.setDestination(42374U);
    msg.setDestinationEntity(85U);
    msg.timeout = 56536U;
    msg.flags = 204U;
    msg.lat = 0.8481225260729319;
    msg.lon = 0.4072801385273581;
    msg.start_z = 0.4924382573853481;
    msg.start_z_units = 180U;
    msg.end_z = 0.7478694017704567;
    msg.end_z_units = 67U;
    msg.radius = 0.7070023774059648;
    msg.speed = 0.06082661106754017;
    msg.speed_units = 70U;
    msg.custom.assign("RTKSYWJCSOUTSNOVWWAUHWRQENRGHDFWIGVUIQOJCUATUZMMUKKISBLXIMZZGGVFDDQKAPVPBGEGEDMNQIPMFWQVFCFBTEUYODVYLNPJOIBXCSMHNLRYCBVGPCAHYBLDBOROAUTUVIKAYSMQXIWQBIXSTEXJJVELJHPRHTHXNKSPSZMJFRJFAZAEEZNIQMBNOQHXVYPUOCSH");

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
    msg.setTimeStamp(0.3681537104981134);
    msg.setSource(52015U);
    msg.setSourceEntity(86U);
    msg.setDestination(30268U);
    msg.setDestinationEntity(132U);
    msg.timeout = 60202U;
    msg.flags = 40U;
    msg.lat = 0.32705210409751717;
    msg.lon = 0.3905690894686503;
    msg.start_z = 0.10212740372020346;
    msg.start_z_units = 80U;
    msg.end_z = 0.6147588227278393;
    msg.end_z_units = 66U;
    msg.radius = 0.9019368828774257;
    msg.speed = 0.4653514780591741;
    msg.speed_units = 99U;
    msg.custom.assign("HASNAIFMBMVYOPFBDJUXWYFDUSSUBTGMJHZPSQHWSTKBURTGQPVECGARCTMJRGOSPYIYRWCDIDAFLQFYQUHEGKERBXEGVFOEOYJXCHDWGBAGTXLNXOSVXDQUJHAPXZOTVNNIDDOBIIJBDQMYSVCPILZZGWNDQLHZBZYEKPAMQNRFZIZLVLZKCKJLXMWCKRVZUVKOSKPKMEEIEAHUMHENO");

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
    msg.setTimeStamp(0.023748411424282523);
    msg.setSource(21731U);
    msg.setSourceEntity(90U);
    msg.setDestination(65264U);
    msg.setDestinationEntity(53U);
    msg.timeout = 60118U;
    msg.lat = 0.6459225488067898;
    msg.lon = 0.6320740049355924;
    msg.z = 0.9720085233403128;
    msg.z_units = 39U;
    msg.speed = 0.6928448985043315;
    msg.speed_units = 169U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.10102394949552973;
    tmp_msg_0.y = 0.8390185198624278;
    tmp_msg_0.z = 0.336497755287806;
    tmp_msg_0.t = 0.6966881532228991;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KFWNULZGJKHFTWBMCQKUKLXVVDJTSPICSFHAYFDINVEBUNWIMREXDICUKVGCZVLANGLYSQVDEHRHMLHWECBISPIXMWUFPAKNJBGOOPSLQRJYTDMHNAASOWLKVMEYREZZWQXKEEHPBYTOJBLAYQCRUYZRQSPIMXTADANA");

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
    msg.setTimeStamp(0.27406505146114823);
    msg.setSource(402U);
    msg.setSourceEntity(102U);
    msg.setDestination(14641U);
    msg.setDestinationEntity(240U);
    msg.timeout = 61654U;
    msg.lat = 0.8114488123648151;
    msg.lon = 0.9270594219471385;
    msg.z = 0.7461103898708539;
    msg.z_units = 177U;
    msg.speed = 0.38070252990025955;
    msg.speed_units = 69U;
    msg.custom.assign("UXQEAYHEDNYBGJDLJAMTVUDPQWCLWDUTWCQNVUHATRQVWIFVLYRKUKBIKMJLSWCZTRIDYAJWBPFMXZCFNUOQZWMOPOGNVHCZPKERFMKDVNHTQGNOOTIOFELRHGKXPLBGNHXIJYCZLSBXESEPSEJLGBWEXGQJSVOHFURJYGDVDURZ");

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
    msg.setTimeStamp(0.7433212232360639);
    msg.setSource(34489U);
    msg.setSourceEntity(78U);
    msg.setDestination(45808U);
    msg.setDestinationEntity(223U);
    msg.timeout = 1331U;
    msg.lat = 0.16591315814802587;
    msg.lon = 0.5063206169528908;
    msg.z = 0.3162704061654954;
    msg.z_units = 28U;
    msg.speed = 0.1516446326848575;
    msg.speed_units = 197U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.038117458514302704;
    tmp_msg_0.y = 0.08828890586884519;
    tmp_msg_0.z = 0.021017582036547355;
    tmp_msg_0.t = 0.9921855569209893;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RHHCJTFOXYIELWFYFOKBWDAJTAEGSPMRKOGOQADOULUNXUDWNYSYGZKAASICDTDMHRHICJXTUJBLLHMQSPUHYKBXGOVWRSQNZGTKKCWYFARRPUAMOVBRSPPUYRECDDLHYBAOWIUNPFKEHXKSLIRSTUXYCQPLEYJFGMISCMFLAGDQGJJIALSZNTVJTTETKCPJQNMVIVGPEJZMGBVXOVENNLZBIMFHEZWPNBURBWXDZQQFXZCQM");

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
    msg.setTimeStamp(0.25411950326367627);
    msg.setSource(27427U);
    msg.setSourceEntity(152U);
    msg.setDestination(32557U);
    msg.setDestinationEntity(211U);
    msg.x = 0.10701022238068303;
    msg.y = 0.3111122645239528;
    msg.z = 0.6151680425259031;
    msg.t = 0.0546859796896193;

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
    msg.setTimeStamp(0.012611933816278231);
    msg.setSource(39372U);
    msg.setSourceEntity(215U);
    msg.setDestination(58990U);
    msg.setDestinationEntity(129U);
    msg.x = 0.15204241511841698;
    msg.y = 0.765916399255021;
    msg.z = 0.8192233416246306;
    msg.t = 0.342315533235393;

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
    msg.setTimeStamp(0.5711222865990558);
    msg.setSource(44795U);
    msg.setSourceEntity(198U);
    msg.setDestination(4001U);
    msg.setDestinationEntity(24U);
    msg.x = 0.7649505408583822;
    msg.y = 0.5900918422787023;
    msg.z = 0.6304197505854753;
    msg.t = 0.9284070189228154;

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
    msg.setTimeStamp(0.995389274394233);
    msg.setSource(17785U);
    msg.setSourceEntity(222U);
    msg.setDestination(57038U);
    msg.setDestinationEntity(221U);
    msg.timeout = 16169U;
    msg.name.assign("ILJRMKIDLOVZFBEUFUERXQUGIXWBMXIRDLWUBKCWXDQXIGPUJDTHOOSDNQISZSMBGEADMKQJTYVTEDFSJOIEGSZPRTNCUYPAZOIZEIDLNHDHKHLXVFXHRKACQKVCG");
    msg.custom.assign("GMQILMXEXYTPOKYBNZVMIJTDQLYZOAMTBNBQMFSMOPIHAGEZCGLAVIVXHHQNCQJSDIDNKNDVPKEYYVRZVUWRFECMGGEISZRCHSDNWEPKFAYJEAMFBWQGOGUDIIQGPWSXNFRLODOKLKOXWXDAXNHCFEJRPVFIZYWVTBJBPZRNXFOMHSXNSLAYFJQORSOWTPBA");

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
    msg.setTimeStamp(0.5484071911258172);
    msg.setSource(31835U);
    msg.setSourceEntity(107U);
    msg.setDestination(62897U);
    msg.setDestinationEntity(93U);
    msg.timeout = 63175U;
    msg.name.assign("MELLLMWPJTYPVMUXZZKZFHKXQCAHBNFXMCCEFQGGTEPZEBFTTBDGQZAYLNYNCWSXZJIHIDEKLIKSRBTEHHBOICRGABSFBSICANWALSVDMMJJDWRCQYOOMORSZRURHZUWFLUGBNRNCXAIKKHPDN");
    msg.custom.assign("TTBOXOXMMSJEGAZICTWNQLBIDFZZIAIYBFGOJUVLRAANXTOJBLYMUGLIBHSUBDEAPJRQIIHXUCTHKEXPRACMCDKYSQEFQSFLPVXJWHEDQSIKFBGFLPHLXKQQWEOYXVJBFRUVJKYODKAGVXPCZPVZZCNDPCRNREUHCWIFWUHMSNHNQWRQWFOJGZQRUYHBVZVBAYSMPVWNOEATTDKSGRESKLNETPZUVOYDMMCYGYAWJGDTXDWLMKOSPUNRKM");

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
    msg.setTimeStamp(0.04693839990376136);
    msg.setSource(2877U);
    msg.setSourceEntity(193U);
    msg.setDestination(31967U);
    msg.setDestinationEntity(209U);
    msg.timeout = 36625U;
    msg.name.assign("ILDFYEZRVXQGVYWTYJVJGHNXGWRLOC");
    msg.custom.assign("CANZPOWDGCYNUYOQXRXEJJPEIJSGNZMOEIMPHDPPYGYJFFDAVYLIWAPHDJCWMRTKZRNGOVJYPTCUNQVLXJLBGUXTMBLRJEAUBZQWSUKDGSDIWPGCCFQTSUBSXIGHLAWLYOBCRKZWNAE");

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
    msg.setTimeStamp(0.2706887011697703);
    msg.setSource(19215U);
    msg.setSourceEntity(67U);
    msg.setDestination(17033U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.1143408634002071;
    msg.lon = 0.853806282677263;
    msg.z = 0.7411041854109646;
    msg.z_units = 6U;
    msg.speed = 0.027859927399480733;
    msg.speed_units = 91U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.42520189684331744;
    tmp_msg_0.y = 0.6838080545677226;
    tmp_msg_0.z = 0.6158436657550511;
    tmp_msg_0.t = 0.31221082472950334;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 10520U;
    tmp_msg_1.off_x = 0.9027600325011358;
    tmp_msg_1.off_y = 0.3857225536169321;
    tmp_msg_1.off_z = 0.2977456254463986;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.9042834074750463;
    msg.custom.assign("HBEWZDBAPYZKFYBLFKWJSRUVHRMUKVXEOWVSRNQIDPLWOCIJKUPEBOWMQHJRFAQIKAUJHVOZKTFTOMTCKYQELYRMGYIWVGXJREUXSLNRNNULOCQFBGKCGERTYJUJNELXTXUGQICVHXNXACIHDCPGNOQSWRLXNSDVBAMVMJWKPSMBPWXBMCPDFJEDMFGTRTDUGQI");

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
    msg.setTimeStamp(0.12254722006368424);
    msg.setSource(42923U);
    msg.setSourceEntity(42U);
    msg.setDestination(64951U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.47318711354433307;
    msg.lon = 0.5366349349819625;
    msg.z = 0.44425783321297185;
    msg.z_units = 206U;
    msg.speed = 0.5534033668664868;
    msg.speed_units = 153U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9226271680886093;
    tmp_msg_0.y = 0.3567207575282165;
    tmp_msg_0.z = 0.0737739435405983;
    tmp_msg_0.t = 0.9869402218746041;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8529117398196031;
    msg.custom.assign("IIEKOOIKFWGRXMLJZKLFMYNPEEVQSNJYHCWLWJBTYUVXQTXMVCCJTOAYPLTGKVQLUMCVIZKEUZBXQRXHTRYSPDGPEAGAUTGVNTMUYIOSWFJPBZROSQHNHVKWLLGNCGAOQFNHCPPCJGHMBBJMMOKXNRZZSBEIQHCMDVJKSUXUPWHITUMARNPKWDYIEFCNSYWBLFOGFRAELCZYQDSAXJHBFZLDZAHYWDWOESNQAURRRTBEFJGDVFQSAD");

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
    msg.setTimeStamp(0.10215992564461751);
    msg.setSource(65430U);
    msg.setSourceEntity(159U);
    msg.setDestination(64934U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.7295095802414954;
    msg.lon = 0.26542377457085775;
    msg.z = 0.12034605802242937;
    msg.z_units = 136U;
    msg.speed = 0.5772979740760252;
    msg.speed_units = 61U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.42179746815160957;
    tmp_msg_0.y = 0.4681168653723643;
    tmp_msg_0.z = 0.5669454247212281;
    tmp_msg_0.t = 0.5468444870629264;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 59446U;
    tmp_msg_1.off_x = 0.10209028654111263;
    tmp_msg_1.off_y = 0.08797618639715743;
    tmp_msg_1.off_z = 0.7526042641279498;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.9649725220285292;
    msg.custom.assign("MZFWGDHMTLXPZNVLRJCSZEDZKYLIFVAOQHNLLIEXEHKAGFGJBCTUWCMBKSHCJLIBTXCVVKJTXVBIGLTXGEKIMDRWSSPKDXIOFPOJYRTBPPEECDQOOKECTEZSRWQJGPRUHYMOEXOYTOFJEZSNZMQXHIMVUXQMAKNKPDDFNCAQSVOZUC");

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
    msg.setTimeStamp(0.4433614616230649);
    msg.setSource(25560U);
    msg.setSourceEntity(252U);
    msg.setDestination(11483U);
    msg.setDestinationEntity(57U);
    msg.vid = 51196U;
    msg.off_x = 0.40989981715601354;
    msg.off_y = 0.6593997154140319;
    msg.off_z = 0.6946000145557293;

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
    msg.setTimeStamp(0.01612563322984939);
    msg.setSource(54592U);
    msg.setSourceEntity(128U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(2U);
    msg.vid = 49825U;
    msg.off_x = 0.5639606747268353;
    msg.off_y = 0.5498241126958762;
    msg.off_z = 0.026995947264125242;

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
    msg.setTimeStamp(0.5583546956979776);
    msg.setSource(42282U);
    msg.setSourceEntity(26U);
    msg.setDestination(39614U);
    msg.setDestinationEntity(165U);
    msg.vid = 24784U;
    msg.off_x = 0.32436466443480505;
    msg.off_y = 0.8238539111571519;
    msg.off_z = 0.7090701796275047;

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
    msg.setTimeStamp(0.1740943964416779);
    msg.setSource(5105U);
    msg.setSourceEntity(247U);
    msg.setDestination(18031U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.4742507958108676);
    msg.setSource(53914U);
    msg.setSourceEntity(208U);
    msg.setDestination(54816U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.24973559833992398);
    msg.setSource(24343U);
    msg.setSourceEntity(23U);
    msg.setDestination(11358U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.7139546927488664);
    msg.setSource(44045U);
    msg.setSourceEntity(9U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(87U);
    msg.mid = 40248U;

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
    msg.setTimeStamp(0.05230772584818166);
    msg.setSource(48774U);
    msg.setSourceEntity(106U);
    msg.setDestination(8172U);
    msg.setDestinationEntity(110U);
    msg.mid = 57504U;

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
    msg.setTimeStamp(0.20511483033500244);
    msg.setSource(8997U);
    msg.setSourceEntity(151U);
    msg.setDestination(41347U);
    msg.setDestinationEntity(56U);
    msg.mid = 44955U;

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
    msg.setTimeStamp(0.6003932367701912);
    msg.setSource(40621U);
    msg.setSourceEntity(115U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(114U);
    msg.state = 113U;
    msg.eta = 45726U;
    msg.info.assign("KLQXMUBYNLBOJDJZBEHVCYRMAGJKQPEAHEWYFFPTRYHCEPQNSTXQGPFVYMQUJOTXSGWDCCUCOBTHALGCFXNQCPIKAOZZPAKXNMKNWSOMHLEMFDZIQSFHRITZPNOBNKROICLIIKKTLMZUYOVWJDIULGSLAXRRQRMRTLZEOXFGUASBMCYXRHVVIWHSDSBGJFZEHIMTFN");

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
    msg.setTimeStamp(0.2550168224031374);
    msg.setSource(43649U);
    msg.setSourceEntity(203U);
    msg.setDestination(31306U);
    msg.setDestinationEntity(143U);
    msg.state = 133U;
    msg.eta = 33255U;
    msg.info.assign("LNNMVDCQJYRUYTOAIXSGTXXMMYVINLOMXZKWNFKHHPIBQOBPREWHGEULOFIPZOCGEWBVXIHYJHHVTXMJJMBSDQADKXUBVZZSAFLIDAWJHSIZWWJSEYAVJKUSNGKJQVGTBLSDOAIDONUMP");

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
    msg.setTimeStamp(0.09588362254936234);
    msg.setSource(11010U);
    msg.setSourceEntity(9U);
    msg.setDestination(50611U);
    msg.setDestinationEntity(141U);
    msg.state = 169U;
    msg.eta = 12061U;
    msg.info.assign("MZGVEUQWBXWRMSDFCANDTRHVYFWZJMVFJZSEHNERQVTPFZWCWKLYTTGHDNXJOJVKBIPMJMSBECMMBDQDXSMGAQDCFHJZRBKIXJHAEUSHAJJRLWAGKRQRZVIYBVNKFBTUZNUZGQPYAWEOLIOXOPXKYLXIQXOBPLVCFEICEIIAISDURVTWWE");

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
    msg.setTimeStamp(0.6455873497495593);
    msg.setSource(22651U);
    msg.setSourceEntity(106U);
    msg.setDestination(64938U);
    msg.setDestinationEntity(34U);
    msg.system = 7097U;
    msg.duration = 35634U;
    msg.speed = 0.9425622252770389;
    msg.speed_units = 249U;
    msg.x = 0.4212513251484885;
    msg.y = 0.8370604681154348;
    msg.z = 0.20704914949343134;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.490700942966358);
    msg.setSource(33191U);
    msg.setSourceEntity(232U);
    msg.setDestination(32007U);
    msg.setDestinationEntity(101U);
    msg.system = 22872U;
    msg.duration = 21780U;
    msg.speed = 0.9769573098876791;
    msg.speed_units = 58U;
    msg.x = 0.5896167372220629;
    msg.y = 0.6945006789734847;
    msg.z = 0.8301927718729097;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.6757852677823937);
    msg.setSource(63036U);
    msg.setSourceEntity(252U);
    msg.setDestination(42675U);
    msg.setDestinationEntity(129U);
    msg.system = 60916U;
    msg.duration = 15675U;
    msg.speed = 0.5689026397047018;
    msg.speed_units = 111U;
    msg.x = 0.820672709029752;
    msg.y = 0.9404953760773561;
    msg.z = 0.4952050592658045;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.7114882283563213);
    msg.setSource(62445U);
    msg.setSourceEntity(47U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.6018603773776965;
    msg.lon = 0.7609287800539946;
    msg.speed = 0.01062192739442791;
    msg.speed_units = 189U;
    msg.duration = 3302U;
    msg.sys_a = 18428U;
    msg.sys_b = 25608U;
    msg.move_threshold = 0.42556932010623705;

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
    msg.setTimeStamp(0.5969257063359525);
    msg.setSource(24569U);
    msg.setSourceEntity(176U);
    msg.setDestination(9878U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.7095845990079631;
    msg.lon = 0.9586638495141087;
    msg.speed = 0.22594829243379877;
    msg.speed_units = 206U;
    msg.duration = 56169U;
    msg.sys_a = 62381U;
    msg.sys_b = 45135U;
    msg.move_threshold = 0.9210687256166964;

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
    msg.setTimeStamp(0.3435202998793496);
    msg.setSource(28225U);
    msg.setSourceEntity(7U);
    msg.setDestination(51282U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.1244218006604848;
    msg.lon = 0.4188699496459899;
    msg.speed = 0.35803462143510045;
    msg.speed_units = 54U;
    msg.duration = 48757U;
    msg.sys_a = 23457U;
    msg.sys_b = 44452U;
    msg.move_threshold = 0.8642432445525295;

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
    msg.setTimeStamp(0.47119580788165094);
    msg.setSource(29876U);
    msg.setSourceEntity(221U);
    msg.setDestination(17167U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.5309523515972098;
    msg.lon = 0.8394333440944163;
    msg.z = 0.36956524546030534;
    msg.z_units = 161U;
    msg.speed = 0.4376830280083557;
    msg.speed_units = 116U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5328046736556871;
    tmp_msg_0.lon = 0.9298151666520796;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JDXLPBMYJBJWRTLXEXXYEUNHCHKQIPDONESDEHSVBQEQRUWZPXOBMYFYBDCGWLOKRGPOWYJFCJRIAQMTRMYOFGLCK");

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
    msg.setTimeStamp(0.5572635539870594);
    msg.setSource(14924U);
    msg.setSourceEntity(172U);
    msg.setDestination(4068U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.2285251861488058;
    msg.lon = 0.9185730512016265;
    msg.z = 0.908617100123337;
    msg.z_units = 62U;
    msg.speed = 0.1912691178850866;
    msg.speed_units = 4U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5173680025246071;
    tmp_msg_0.lon = 0.8812842939177356;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WGNONODSYYZNKFHFMRXRPUKXFRTTYOQDENEODOZFFLHLYANZLUQNVDFHLSMMJASLBHVBFYKBWBGZPPFQMHGUGBE");

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
    msg.setTimeStamp(0.9719383925457904);
    msg.setSource(59070U);
    msg.setSourceEntity(21U);
    msg.setDestination(18118U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.5142769173071068;
    msg.lon = 0.30060993493566923;
    msg.z = 0.06575880240443155;
    msg.z_units = 103U;
    msg.speed = 0.52082570978878;
    msg.speed_units = 69U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.21981871740322645;
    tmp_msg_0.lon = 0.1433176498342308;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IWQYJXWJKPQNWIEHOSIFHYIDXCNTODYBGUHOKTJZDODRQXUYXCCLUDTZJBIJMJELUCORFYVSNLDIGHDWOXTMUBZSOPJSXBXNLRVTAGXNYGPCPLAUVLAFHUBLPSRTPCQOSENZOFKMLWMZKRMSAPBKGKRQVCZUMGCBFRVWSQWVJEFKPKMVBRZAKKYNSQTXITEIAFIHGQDWUAWHAHVTMEDLQHPAYBMVRNGJUTFGOZVMHQAYNNSWBYFEEERLFJEC");

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
    msg.setTimeStamp(0.46920018977325284);
    msg.setSource(11611U);
    msg.setSourceEntity(199U);
    msg.setDestination(47392U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.737419569090996;
    msg.lon = 0.6985972314898841;

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
    msg.setTimeStamp(0.22692399477852976);
    msg.setSource(46392U);
    msg.setSourceEntity(92U);
    msg.setDestination(4853U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.5671006895432621;
    msg.lon = 0.5755666449069368;

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
    msg.setTimeStamp(0.8156447797604549);
    msg.setSource(12958U);
    msg.setSourceEntity(109U);
    msg.setDestination(17186U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.11406861422296233;
    msg.lon = 0.4387986607165767;

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
    msg.setTimeStamp(0.3439533515249953);
    msg.setSource(55921U);
    msg.setSourceEntity(124U);
    msg.setDestination(33304U);
    msg.setDestinationEntity(149U);
    msg.timeout = 51475U;
    msg.lat = 0.6716039006213205;
    msg.lon = 0.5039964039540404;
    msg.z = 0.18322746006526514;
    msg.z_units = 9U;
    msg.pitch = 0.3533800635290356;
    msg.amplitude = 0.6999655771306978;
    msg.duration = 11611U;
    msg.speed = 0.7725146013875448;
    msg.speed_units = 183U;
    msg.radius = 0.30862643420035907;
    msg.direction = 253U;
    msg.custom.assign("CGOFTRRMZSUNKWNSXEVIHUWDSYBTGRHYPGDKBIQQXOSANRXBGNTGDLXEWYJDUSHDLBKHVTLWZ");

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
    msg.setTimeStamp(0.6394402913332792);
    msg.setSource(22572U);
    msg.setSourceEntity(51U);
    msg.setDestination(18474U);
    msg.setDestinationEntity(109U);
    msg.timeout = 7878U;
    msg.lat = 0.10560601595341312;
    msg.lon = 0.0916928619080386;
    msg.z = 0.969200213291811;
    msg.z_units = 139U;
    msg.pitch = 0.4335949123788658;
    msg.amplitude = 0.4153037665561633;
    msg.duration = 45733U;
    msg.speed = 0.6998488511293814;
    msg.speed_units = 187U;
    msg.radius = 0.4884632086474606;
    msg.direction = 214U;
    msg.custom.assign("EIAGXUKURSYWOWLEDMQGCNCNFDAMRJVVPFAUTXIOMZMOZRPDICWCCUHXSTOKDZDITPJMYEHDVIUVFPGYFJNTTYGZSRXKZBWEWLDSPUTUXWBKQABQTCYKHRZUGQLSDOSBSFOFXPRICRQFVLQDORWRMJNHMDBVEJLMPOLYYFQNWXEHIAVQZPESIAVLTLPLUCKZEQCSNJGYKGSGBNKJALYEJOTOWMQMBAVBXTNA");

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
    msg.setTimeStamp(0.747822004903617);
    msg.setSource(41920U);
    msg.setSourceEntity(155U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(239U);
    msg.timeout = 43622U;
    msg.lat = 0.4553636500754439;
    msg.lon = 0.8853842193898684;
    msg.z = 0.7180284182141303;
    msg.z_units = 170U;
    msg.pitch = 0.41134011775940305;
    msg.amplitude = 0.5010675467074829;
    msg.duration = 55645U;
    msg.speed = 0.324481947496311;
    msg.speed_units = 37U;
    msg.radius = 0.25069187396763704;
    msg.direction = 248U;
    msg.custom.assign("GGWHMCMEFXRURCZA");

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
    msg.setTimeStamp(0.2328290381191218);
    msg.setSource(50431U);
    msg.setSourceEntity(150U);
    msg.setDestination(57099U);
    msg.setDestinationEntity(101U);
    msg.formation_name.assign("ZBYOACJUFLNGNKRTRTYADFMMVACFTCQOUSICEOXRAKWCHSQXIWBZTQOHPGCILIPBDALNQUTIPYJGJEHSRWEO");
    msg.reference_frame = 64U;
    msg.custom.assign("KELUESQZSGGWHLNREDRCMRJZPBYBONOK");

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
    msg.setTimeStamp(0.6574326116488899);
    msg.setSource(2272U);
    msg.setSourceEntity(84U);
    msg.setDestination(57418U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("TEXAABIBGLH");
    msg.reference_frame = 220U;
    msg.custom.assign("CWSCPMQKKREJWBJYTFHQCGLTQQRFYWPEOOCRAEXAOHUYTEXDKTUHKHIKQVPGIXOMGGZMBHSPBDHCRXHNHVANSGQQQTZWJIIKIYLSFTZDVFZUTBBRLVUJFDOXMZDCRAZASAVSDUPYUDJGVNCRUNRAGYYCQZTO");

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
    msg.setTimeStamp(0.6643842736646174);
    msg.setSource(6129U);
    msg.setSourceEntity(235U);
    msg.setDestination(58466U);
    msg.setDestinationEntity(143U);
    msg.formation_name.assign("JONFZTAAYHJBDMNCRRZGLYCYSNFEQKOVLTTJOKXZPEHAZBVIRASLBJPUEIMLIJFKFSJPTAUISNIIZKUFBNOHZHNHFQYKPHVMDYRXLZWWEMHQACKRJCWTVUN");
    msg.reference_frame = 217U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36011U;
    tmp_msg_0.off_x = 0.1192411144751645;
    tmp_msg_0.off_y = 0.5763580031581341;
    tmp_msg_0.off_z = 0.533680042928477;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EDKXLVGCWABRHYPGAXLTLOBJPTOUCMIZCOUTDDMZQKNHZEFMNWTZNHLIXDNGHGYRHKAKEIQHDTQKLEEBJNUDAPZINYYTFVDNUMKJECFEQSTXVCRDMMXSEPXRHWKLOCXFARQBPJJVWFCRWGYOPWFPSWUMVQYCPQLKIBFDYYXJZBZJWLAZTVTIHFBFIBRU");

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
    msg.setTimeStamp(0.9019509907430804);
    msg.setSource(59250U);
    msg.setSourceEntity(102U);
    msg.setDestination(26583U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("PJFUFSRVNUTTWXMIVROKPSLMBENWQIWXKB");
    msg.formation_name.assign("NZXUYTKUDISRQTQXFSCQWZONZXXHPWSFSUMPCYODTSBQAGCGUBUQANTLVPWXHFNPKTYZWRBAEETCQLNQNGQYMJBQFUWOFGJAZFFORJJLAEKZHSEIHARUDYIGWIVLJMSVZCMXYUXEMPDVICLZTGRNLXYSYPVIPWKOZJETJRUKHILGVENFYVSIEAKHRHDKUHOTQMRICVFWOJBDCKNESPXD");
    msg.plan_id.assign("AGAWPFIVHWZVOVZTDBXMOLAIYMWPFFJOKKY");
    msg.description.assign("NTZHJXGCRTJMHJTKAGZSVGAQOWWQLXGUIQXRFFAMMHIMAIWXUUWNPHVJSRROPBNEQCXSMOYSNJPHWPDAZMTKDDCISOCMZCBDKEJTBQLLUEQLRANLBKBUIKOTYNWWVY");
    msg.leader_speed = 0.5558733172551467;
    msg.leader_bank_lim = 0.8020290914510104;
    msg.pos_sim_err_lim = 0.6554893963652614;
    msg.pos_sim_err_wrn = 0.6923920254161549;
    msg.pos_sim_err_timeout = 45236U;
    msg.converg_max = 0.8260525429451282;
    msg.converg_timeout = 54525U;
    msg.comms_timeout = 40011U;
    msg.turb_lim = 0.5291589259653917;
    msg.custom.assign("JIRQISYYSYEGNFGZCIFKAPHLLJGARTWEPXJDOMXOWBRWXXYRUZYVVTQWLLKEVDCUQCXRFDFTQBBAHNNMPJBTOGKTLUTNNDQEJIMHMMPKAKDKPAJCESLABZXSOZTCQREZCWVEIGBJPXCCUBZLOXHBBWODHOWOMZFF");

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
    msg.setTimeStamp(0.23017947416458295);
    msg.setSource(49383U);
    msg.setSourceEntity(155U);
    msg.setDestination(31960U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("QFIDYYHCFSFOEXARZCJGGYMZHTJRHDTLCVUZJPNHCQPMDVASUBYUQCQIVKNOAYOLFTYNZGHXSEVMFGXGIAOUKQWOILKYDYZVRLERSBHIMWKZGMCGRABCQRCTKAELLRFLJPGXSZMPMPBXKYVREOZAJNTHTWADE");
    msg.formation_name.assign("CBQCJAEIZMEMRSBHFEOYMIIUQCDPMSTOTWHZKLVXWLHMZBNVAYLZZDAZHYRPIPFDGEKJKVESWBGJOHQYIGCFYYYRGTNSNSC");
    msg.plan_id.assign("ABGZEYPFBHSUSRNFKNXAVSSORTDCQKWAYZZOULXRSAFYGQUFOKDVXAWSVIMVFQCKDBJNEPEFJEFJAZUXFHGZS");
    msg.description.assign("BLQSCLDEHMBNPUNRWHPVBWAWXZXIIJMQZIQYFWDMPYMPGBNTKWJVZWEPAPMOJZIVPREGARHHGKIHUEOXYRDQJRKOTTBUVLSYCOWHVAGPKUJOZZRUTTDJWCQGCYVLOOKRSYPMGSCLUNKYRUSOGFRGCFZLXBEEFZAXSBZBNYDUSNSVIKVLOFTQQOMYTEMNYCGITXXPQCUD");
    msg.leader_speed = 0.7817699082454159;
    msg.leader_bank_lim = 0.42936744636391244;
    msg.pos_sim_err_lim = 0.1455132513243267;
    msg.pos_sim_err_wrn = 0.8941181485312251;
    msg.pos_sim_err_timeout = 18741U;
    msg.converg_max = 0.0266694153925362;
    msg.converg_timeout = 31137U;
    msg.comms_timeout = 40728U;
    msg.turb_lim = 0.3690743237638556;
    msg.custom.assign("VJNIGMVPEUYFQIBHQLRSRLTTDTPEHYFZAOCNUUJIYRRVRYQDQMIDGJAXHVZDJFYHURQEXOKGQGCVTZSFSMWBOFPJEHZTYXONJIYTDGCMLNTBYJEVSSSAOBPEQ");

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
    msg.setTimeStamp(0.08994194759179241);
    msg.setSource(25891U);
    msg.setSourceEntity(32U);
    msg.setDestination(54484U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("ZFHGWFTGNKRBXMQHUXMNJUOGZPZCAOZJOQPYASOZVQTJDSPASQMCSXJRZQNGBFGHCVKCWINRTKEUZCZCFMBOIXLLGSVPDMWECFISYAENPVJVVJHUSVBZEXAKILHLYKMLETCXYBMTWDSDZVPJBDUUOYEX");
    msg.formation_name.assign("XYTKXKYRQUQXYRJBYQUGDM");
    msg.plan_id.assign("QJFTCAPXTQASTJKCGKHATWWNVAQQDQCHKIBEGZMAXVDUCUUYEKPZJRLQOFIPUAEPRBRQVIEGYBVZVNVUXZXDYLTRESXMTLVCZTTLEQXNBOHPAKRFYDDQUWUGRYKMJKFGHUIOGSWMEOIRGDFTLINLRLLSSBACVMPPHBREZMNHNSSBHJOLYXDYXHWOWCPGOLNYIHZOWEZNFJIHB");
    msg.description.assign("YKDYHOFKRVBVELCDUSLANIYQHKIWBNNLMSDUXTZFUHABGDVRFOTIPCQWGEWHELZCNHIUBGQVYANOMIBYREMOPBIJSJZFFBWMAXZZDPXMQAFZSFEWRDWKAXKVKEKFAGEBDBRVT");
    msg.leader_speed = 0.5503697977722845;
    msg.leader_bank_lim = 0.5444756472581113;
    msg.pos_sim_err_lim = 0.6197161477238259;
    msg.pos_sim_err_wrn = 0.1129264467897545;
    msg.pos_sim_err_timeout = 58217U;
    msg.converg_max = 0.01932020970185433;
    msg.converg_timeout = 8261U;
    msg.comms_timeout = 27172U;
    msg.turb_lim = 0.7597990399881686;
    msg.custom.assign("FSPHUXWNWFEMZXKFBLZZXDOYEICDWHMYZIQTVXKKQCKSOAGPUVJZAESWAURXZCUVUEJHYCTZRILFDOWHJCHAOEPDMYAYAUZSRYICQRSWJVPVWBBDLNJQCTRQXEVSTWPJJJPCVOBZHRDJBNOBENJDUODVEBROGMMPMDRYTITNKXHPYMGLONHK");

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
    msg.setTimeStamp(0.8168372391585119);
    msg.setSource(37489U);
    msg.setSourceEntity(183U);
    msg.setDestination(15834U);
    msg.setDestinationEntity(216U);
    msg.control_src = 59272U;
    msg.control_ent = 107U;
    msg.timeout = 0.7930286998800989;
    msg.loiter_radius = 0.8661216670218036;
    msg.altitude_interval = 0.4045851311185641;

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
    msg.setTimeStamp(0.05108208619016563);
    msg.setSource(36541U);
    msg.setSourceEntity(93U);
    msg.setDestination(44629U);
    msg.setDestinationEntity(150U);
    msg.control_src = 41904U;
    msg.control_ent = 156U;
    msg.timeout = 0.5102772030531234;
    msg.loiter_radius = 0.09403827679612708;
    msg.altitude_interval = 0.4014373691178925;

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
    msg.setTimeStamp(0.7723703286200944);
    msg.setSource(33750U);
    msg.setSourceEntity(175U);
    msg.setDestination(38679U);
    msg.setDestinationEntity(227U);
    msg.control_src = 17421U;
    msg.control_ent = 250U;
    msg.timeout = 0.9127759188344554;
    msg.loiter_radius = 0.20538710930027315;
    msg.altitude_interval = 0.9279551993657846;

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
    msg.setTimeStamp(0.7502328418626338);
    msg.setSource(18694U);
    msg.setSourceEntity(180U);
    msg.setDestination(54041U);
    msg.setDestinationEntity(113U);
    msg.flags = 183U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8032196818846524;
    tmp_msg_0.speed_units = 197U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.527988360059221;
    tmp_msg_1.z_units = 39U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.26826481961132564;
    msg.lon = 0.41283103114134845;
    msg.radius = 0.2364282314809546;

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
    msg.setTimeStamp(0.140280990243992);
    msg.setSource(9823U);
    msg.setSourceEntity(48U);
    msg.setDestination(61978U);
    msg.setDestinationEntity(53U);
    msg.flags = 215U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.11081035183674459;
    tmp_msg_0.speed_units = 103U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8349070433895125;
    tmp_msg_1.z_units = 9U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5780894126110904;
    msg.lon = 0.9906100379710678;
    msg.radius = 0.675703420630019;

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
    msg.setTimeStamp(0.004040841354909563);
    msg.setSource(34366U);
    msg.setSourceEntity(245U);
    msg.setDestination(3501U);
    msg.setDestinationEntity(217U);
    msg.flags = 6U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8433079170870694;
    tmp_msg_0.speed_units = 226U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5250249211428606;
    tmp_msg_1.z_units = 171U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5805796936861267;
    msg.lon = 0.7039974532600266;
    msg.radius = 0.4040364778064599;

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
    msg.setTimeStamp(0.40429078662837226);
    msg.setSource(23734U);
    msg.setSourceEntity(71U);
    msg.setDestination(46695U);
    msg.setDestinationEntity(57U);
    msg.control_src = 35981U;
    msg.control_ent = 38U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 159U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.707226625795391;
    tmp_tmp_msg_0_0.speed_units = 54U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.16790623812213878;
    tmp_tmp_msg_0_1.z_units = 200U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.484177074762683;
    tmp_msg_0.lon = 0.5724204626851175;
    tmp_msg_0.radius = 0.7131242927497101;
    msg.reference.set(tmp_msg_0);
    msg.state = 27U;
    msg.proximity = 158U;

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
    msg.setTimeStamp(0.4817022759164584);
    msg.setSource(11658U);
    msg.setSourceEntity(113U);
    msg.setDestination(60387U);
    msg.setDestinationEntity(153U);
    msg.control_src = 36628U;
    msg.control_ent = 2U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 139U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.718773831581757;
    tmp_tmp_msg_0_0.speed_units = 210U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9067468873498148;
    tmp_tmp_msg_0_1.z_units = 57U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5461987602038155;
    tmp_msg_0.lon = 0.4511940969136813;
    tmp_msg_0.radius = 0.8251412187292997;
    msg.reference.set(tmp_msg_0);
    msg.state = 147U;
    msg.proximity = 30U;

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
    msg.setTimeStamp(0.9888287960746469);
    msg.setSource(40900U);
    msg.setSourceEntity(160U);
    msg.setDestination(1845U);
    msg.setDestinationEntity(103U);
    msg.control_src = 9175U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 163U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6039444999698044;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6602280900778345;
    tmp_tmp_msg_0_1.z_units = 34U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9918935349512936;
    tmp_msg_0.lon = 0.7299234314979418;
    tmp_msg_0.radius = 0.761227195328053;
    msg.reference.set(tmp_msg_0);
    msg.state = 130U;
    msg.proximity = 77U;

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
    msg.setTimeStamp(0.12584062090565917);
    msg.setSource(18372U);
    msg.setSourceEntity(31U);
    msg.setDestination(32381U);
    msg.setDestinationEntity(121U);
    msg.ax_cmd = 0.9254525061821154;
    msg.ay_cmd = 0.721947584985919;
    msg.az_cmd = 0.7479597599818497;
    msg.ax_des = 0.9372114469230448;
    msg.ay_des = 0.41490388948410595;
    msg.az_des = 0.007035626833985176;
    msg.virt_err_x = 0.7710431479166645;
    msg.virt_err_y = 0.13463740899653054;
    msg.virt_err_z = 0.3167606898646381;
    msg.surf_fdbk_x = 0.8922880507137527;
    msg.surf_fdbk_y = 0.9554058576527723;
    msg.surf_fdbk_z = 0.979633153302374;
    msg.surf_unkn_x = 0.6576696187668805;
    msg.surf_unkn_y = 0.6276426494743227;
    msg.surf_unkn_z = 0.4820791331775557;
    msg.ss_x = 0.13197362582389016;
    msg.ss_y = 0.04084275006328897;
    msg.ss_z = 0.857460500558463;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GADSYRNXTTCJPFLLDVAMUHGHJHJNHKRSQDCRLZFYWVTEUFLNAKIFBKXPANCWOYEDVZHOEKLNJMODNRMSMUPVSGPWVMVGOGBW");
    tmp_msg_0.dist = 0.8070082635655027;
    tmp_msg_0.err = 0.05494238911081484;
    tmp_msg_0.ctrl_imp = 0.2741267419259543;
    tmp_msg_0.rel_dir_x = 0.662675182726275;
    tmp_msg_0.rel_dir_y = 0.7785173590986397;
    tmp_msg_0.rel_dir_z = 0.7449352005801053;
    tmp_msg_0.err_x = 0.9283413368681391;
    tmp_msg_0.err_y = 0.3600475039731723;
    tmp_msg_0.err_z = 0.5993291477169282;
    tmp_msg_0.rf_err_x = 0.9821932761049442;
    tmp_msg_0.rf_err_y = 0.5554752142244328;
    tmp_msg_0.rf_err_z = 0.6298737068379235;
    tmp_msg_0.rf_err_vx = 0.802167764273287;
    tmp_msg_0.rf_err_vy = 0.6653364301490108;
    tmp_msg_0.rf_err_vz = 0.3143112525022742;
    tmp_msg_0.ss_x = 0.35086483968270377;
    tmp_msg_0.ss_y = 0.6160397483739114;
    tmp_msg_0.ss_z = 0.9148516163071088;
    tmp_msg_0.virt_err_x = 0.1743761511893318;
    tmp_msg_0.virt_err_y = 0.4955755726720683;
    tmp_msg_0.virt_err_z = 0.7585381220969687;
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
    msg.setTimeStamp(0.8016015851148212);
    msg.setSource(2600U);
    msg.setSourceEntity(193U);
    msg.setDestination(24670U);
    msg.setDestinationEntity(85U);
    msg.ax_cmd = 0.4804682741170717;
    msg.ay_cmd = 0.6084129717918818;
    msg.az_cmd = 0.6069144795362866;
    msg.ax_des = 0.5922931943920063;
    msg.ay_des = 0.27100604177391885;
    msg.az_des = 0.019999300563303013;
    msg.virt_err_x = 0.08606681372274505;
    msg.virt_err_y = 0.392118961502983;
    msg.virt_err_z = 0.6346421208344306;
    msg.surf_fdbk_x = 0.9147072395834565;
    msg.surf_fdbk_y = 0.27702367705943043;
    msg.surf_fdbk_z = 0.8867962602394232;
    msg.surf_unkn_x = 0.40564577308721206;
    msg.surf_unkn_y = 0.020632593493725482;
    msg.surf_unkn_z = 0.002844801571470823;
    msg.ss_x = 0.4260276538801361;
    msg.ss_y = 0.2970129717301112;
    msg.ss_z = 0.19357671525078868;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BBPHRTTNOVJHLDJJLOLUNNJRSARWZMUWYCCGSFXBQZOYPTKTHEYMYQWVOXYBOTHSFAZHFU");
    tmp_msg_0.dist = 0.8964008216995519;
    tmp_msg_0.err = 0.5082818146332208;
    tmp_msg_0.ctrl_imp = 0.10459505856387197;
    tmp_msg_0.rel_dir_x = 0.9543083637774731;
    tmp_msg_0.rel_dir_y = 0.074944171345667;
    tmp_msg_0.rel_dir_z = 0.04762803688588968;
    tmp_msg_0.err_x = 0.6579745610267487;
    tmp_msg_0.err_y = 0.26447142534651846;
    tmp_msg_0.err_z = 0.8031099431927456;
    tmp_msg_0.rf_err_x = 0.7672688057651035;
    tmp_msg_0.rf_err_y = 0.5957425137827519;
    tmp_msg_0.rf_err_z = 0.14459829812330227;
    tmp_msg_0.rf_err_vx = 0.7955043744919779;
    tmp_msg_0.rf_err_vy = 0.1256760110536328;
    tmp_msg_0.rf_err_vz = 0.7870844393741306;
    tmp_msg_0.ss_x = 0.39868080757504853;
    tmp_msg_0.ss_y = 0.8242556050191175;
    tmp_msg_0.ss_z = 0.41066999519427605;
    tmp_msg_0.virt_err_x = 0.3217569223396535;
    tmp_msg_0.virt_err_y = 0.6518580349865303;
    tmp_msg_0.virt_err_z = 0.6375072451913781;
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
    msg.setTimeStamp(0.5090478026820987);
    msg.setSource(7745U);
    msg.setSourceEntity(5U);
    msg.setDestination(5397U);
    msg.setDestinationEntity(67U);
    msg.ax_cmd = 0.5407820591795212;
    msg.ay_cmd = 0.42498353377632303;
    msg.az_cmd = 0.23591928949746455;
    msg.ax_des = 0.7675008216882285;
    msg.ay_des = 0.46021673660699025;
    msg.az_des = 0.026696913814266976;
    msg.virt_err_x = 0.8184333766374365;
    msg.virt_err_y = 0.5234611805418651;
    msg.virt_err_z = 0.40778321042460186;
    msg.surf_fdbk_x = 0.6919065763502471;
    msg.surf_fdbk_y = 0.5186608887421483;
    msg.surf_fdbk_z = 0.8328003141480657;
    msg.surf_unkn_x = 0.6767560072884478;
    msg.surf_unkn_y = 0.8540332450719379;
    msg.surf_unkn_z = 0.05074870159875633;
    msg.ss_x = 0.5240364142627649;
    msg.ss_y = 0.9519580434675402;
    msg.ss_z = 0.5475792579169244;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NCOSODYWHT");
    tmp_msg_0.dist = 0.611445770852399;
    tmp_msg_0.err = 0.1731584430264047;
    tmp_msg_0.ctrl_imp = 0.6082181055048895;
    tmp_msg_0.rel_dir_x = 0.052792456549240585;
    tmp_msg_0.rel_dir_y = 0.1092466598066878;
    tmp_msg_0.rel_dir_z = 0.29728121788404416;
    tmp_msg_0.err_x = 0.3531441071852731;
    tmp_msg_0.err_y = 0.2951962322361523;
    tmp_msg_0.err_z = 0.671116515217541;
    tmp_msg_0.rf_err_x = 0.9353302302949924;
    tmp_msg_0.rf_err_y = 0.331687487150652;
    tmp_msg_0.rf_err_z = 0.7144759305686608;
    tmp_msg_0.rf_err_vx = 0.30739204537732123;
    tmp_msg_0.rf_err_vy = 0.9998732021435226;
    tmp_msg_0.rf_err_vz = 0.14818573658100498;
    tmp_msg_0.ss_x = 0.43877255694494444;
    tmp_msg_0.ss_y = 0.583755763752669;
    tmp_msg_0.ss_z = 0.01617097098893827;
    tmp_msg_0.virt_err_x = 0.536318195948754;
    tmp_msg_0.virt_err_y = 0.24534164005927261;
    tmp_msg_0.virt_err_z = 0.5304048320109717;
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
    msg.setTimeStamp(0.9329544466503265);
    msg.setSource(24490U);
    msg.setSourceEntity(36U);
    msg.setDestination(13886U);
    msg.setDestinationEntity(72U);
    msg.s_id.assign("XAGDAEDHCOMNAPLBRAFQRMMZXMYRDIVZBVTXGYGPHUKOWSBCCQWHSKJIJTXLHWKQECPLQFYNTATLXKDJTBWAHVVBDRQVVCESSUAYSLWFJNRXELYGZRFLIIUFDDVTPEKIFEMMOUSG");
    msg.dist = 0.8103646843970166;
    msg.err = 0.28214985887872523;
    msg.ctrl_imp = 0.7400288469946817;
    msg.rel_dir_x = 0.38613458250159394;
    msg.rel_dir_y = 0.4661517364207304;
    msg.rel_dir_z = 0.5906905445072496;
    msg.err_x = 0.9035746742118915;
    msg.err_y = 0.04189480542584301;
    msg.err_z = 0.7974652972161962;
    msg.rf_err_x = 0.028337944980523222;
    msg.rf_err_y = 0.49274105868400253;
    msg.rf_err_z = 0.45672333339684146;
    msg.rf_err_vx = 0.8015059965523444;
    msg.rf_err_vy = 0.027602858977295197;
    msg.rf_err_vz = 0.7216235848519565;
    msg.ss_x = 0.26154415577181755;
    msg.ss_y = 0.3273322648865491;
    msg.ss_z = 0.23727321903647736;
    msg.virt_err_x = 0.8523615351804161;
    msg.virt_err_y = 0.1857959114523018;
    msg.virt_err_z = 0.9921371599152988;

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
    msg.setTimeStamp(0.9749832027780851);
    msg.setSource(8097U);
    msg.setSourceEntity(44U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(231U);
    msg.s_id.assign("PEXEOVKDATSRKITXGKQIOFUVYOGEEZIARAEUNPMSJRTJYDSODATAUDHKNFZOYMULSQLCGWGRBRLFNLZVZOYRYWYVIILEKAPWUCFZVGJXPKGRSJIHNOEQIN");
    msg.dist = 0.5113799386765122;
    msg.err = 0.5417260383546494;
    msg.ctrl_imp = 0.7138013118347998;
    msg.rel_dir_x = 0.415307113529953;
    msg.rel_dir_y = 0.7282863521057553;
    msg.rel_dir_z = 0.16398535358907562;
    msg.err_x = 0.2214006177746476;
    msg.err_y = 0.3873484229799522;
    msg.err_z = 0.46186801734908356;
    msg.rf_err_x = 0.2236132381500049;
    msg.rf_err_y = 0.05895955776184336;
    msg.rf_err_z = 0.8530000526843637;
    msg.rf_err_vx = 0.7944891626914473;
    msg.rf_err_vy = 0.9697633571405332;
    msg.rf_err_vz = 0.4432666023974756;
    msg.ss_x = 0.6780088236037972;
    msg.ss_y = 0.06550531392660486;
    msg.ss_z = 0.8460099646507399;
    msg.virt_err_x = 0.5892529883912166;
    msg.virt_err_y = 0.020060048049992063;
    msg.virt_err_z = 0.8988310227960575;

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
    msg.setTimeStamp(0.07144651695593829);
    msg.setSource(31676U);
    msg.setSourceEntity(219U);
    msg.setDestination(58709U);
    msg.setDestinationEntity(72U);
    msg.s_id.assign("BCHBYZQLQDXYOHMKSKQUQFUXKEBMHPSWXFZASKVTUCWVWRINAXOYZSTVUCIWDWFLLIXJCPONGKCIAOJTFSRTQNFCFLQEBIMPIYSMBPNSWWGKPTMBZIXETCIZNGMERZPQHVDZNSGUJGAYRTFCERWMEJWUJJYEVEGDEYHAWNDYKJLTLUKODMKZIOHHBDQFVYXGYRHXVNTLDSJRTXROPVM");
    msg.dist = 0.6403320866859663;
    msg.err = 0.5585340165529914;
    msg.ctrl_imp = 0.9353551018144282;
    msg.rel_dir_x = 0.2708576843230064;
    msg.rel_dir_y = 0.4334134048765361;
    msg.rel_dir_z = 0.2128117526076133;
    msg.err_x = 0.3719766118669703;
    msg.err_y = 0.0005437206433480668;
    msg.err_z = 0.9459496430342078;
    msg.rf_err_x = 0.007818556836154955;
    msg.rf_err_y = 0.32726507115915726;
    msg.rf_err_z = 0.5791919143447248;
    msg.rf_err_vx = 0.32683377628770727;
    msg.rf_err_vy = 0.49657293576094896;
    msg.rf_err_vz = 0.4952701332367264;
    msg.ss_x = 0.7804965279686122;
    msg.ss_y = 0.2311126739521292;
    msg.ss_z = 0.16459205728183657;
    msg.virt_err_x = 0.7898207719591605;
    msg.virt_err_y = 0.16725970236699106;
    msg.virt_err_z = 0.23819191182403676;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.9118302517963699);
    msg.setSource(55346U);
    msg.setSourceEntity(22U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(238U);
    msg.op_mode = 153U;
    msg.error_count = 191U;
    msg.error_ents.assign("GVROYJCRCGKCLVWLHHJYBGUIOUIPPVYCFQPEUXIBFVUFNWWVELBXSQRSKEGNSQDSSJQARBSYJEQAKUYRGDPZWOHTPJKYFZDRFEAKQA");
    msg.maneuver_type = 35080U;
    msg.maneuver_stime = 0.5993264255692734;
    msg.maneuver_eta = 31080U;
    msg.control_loops = 1572457172U;
    msg.flags = 172U;
    msg.last_error.assign("YNGJJEALEBQVPMHOZNIVABUDHKZGSFSSQBEJHZVMDLFEYDMFNFMKNLBPRSQQVQRZQPRPULAIJFJKCGICBCEOSBUNYOZTNWMDTZXIEXODKSHDXDIWICGLLRWWPIZXCGIRJPVYUMKIEHRWRTLVLKSCAGXVJGFUHSGMYRYQVODAUQPYBBBOTJWLVJXCWXFYKNZBPCLQASXHUGTEEZXEZYATUANAQOOHTPOMSOWKYDCJMKPRH");
    msg.last_error_time = 0.09417407353101603;

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
    msg.setTimeStamp(0.8213594911673785);
    msg.setSource(1844U);
    msg.setSourceEntity(162U);
    msg.setDestination(25081U);
    msg.setDestinationEntity(222U);
    msg.op_mode = 167U;
    msg.error_count = 43U;
    msg.error_ents.assign("ZONXQEDEXX");
    msg.maneuver_type = 28726U;
    msg.maneuver_stime = 0.28867485395964754;
    msg.maneuver_eta = 46955U;
    msg.control_loops = 1649281289U;
    msg.flags = 236U;
    msg.last_error.assign("YAVNAWQYBOOFWNOTNPUWZCKVPSANMJWFJNILUTXBUBJOXVLKKDIHPPZZDIKLOGOWXTGTSAUJYCTMVDHTCLTQSBEFVFLZLCKWGRISOAQSW");
    msg.last_error_time = 0.7907572539359151;

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
    msg.setTimeStamp(0.4990511332081724);
    msg.setSource(40110U);
    msg.setSourceEntity(195U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(178U);
    msg.op_mode = 54U;
    msg.error_count = 178U;
    msg.error_ents.assign("PPKRAELDLWJKOXCORQSNLDFXHUZEJFFXKAYMVVOBMJOHHYQKMDVBMOJYJYNFBBTWONRYEATKTUGP");
    msg.maneuver_type = 57079U;
    msg.maneuver_stime = 0.44007918103879706;
    msg.maneuver_eta = 5439U;
    msg.control_loops = 3155382049U;
    msg.flags = 221U;
    msg.last_error.assign("WVFNERRYREHORPMNHWQOQFJKZKMSQTQPDEADZRGTHSOFCSYVCMTFSNJUUAJTIXRLZVG");
    msg.last_error_time = 0.20618767816635764;

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
    msg.setTimeStamp(0.48943836416439923);
    msg.setSource(38516U);
    msg.setSourceEntity(92U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(197U);
    msg.type = 22U;
    msg.request_id = 5505U;
    msg.command = 252U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.1468647152314989;
    tmp_msg_0.lon = 0.4360273916416093;
    tmp_msg_0.z = 0.2288851063413363;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.speed = 0.005148973609079177;
    tmp_msg_0.speed_units = 126U;
    tmp_msg_0.start_time = 0.5589019367330396;
    tmp_msg_0.custom.assign("REDMOALLFSTIHGMFKBNPCKMQGBZRNCZJNYOPWAXFPEOVJMFIVPUSVAIKTNFDTQNCZVQDYYUHSQRZLHLVXBMYWOCISXPSANKYYWBWLABKTJHDBUXEAHFFSOVRCSWQJZMSRRELQH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51448U;
    msg.info.assign("BPRRZSPVBWRVZCZFPCODSQOYVFYCMRLRYALDVDXIIMOXXQSSPF");

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
    msg.setTimeStamp(0.9991213829632233);
    msg.setSource(35637U);
    msg.setSourceEntity(125U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(168U);
    msg.type = 153U;
    msg.request_id = 41303U;
    msg.command = 42U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 43598U;
    tmp_msg_0.lat = 0.10797327605748486;
    tmp_msg_0.lon = 0.795009795482414;
    tmp_msg_0.z = 0.0492205052863407;
    tmp_msg_0.z_units = 59U;
    tmp_msg_0.speed = 0.18187724478881295;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.roll = 0.11877811639516211;
    tmp_msg_0.pitch = 0.7915242435544407;
    tmp_msg_0.yaw = 0.07872825171810272;
    tmp_msg_0.custom.assign("CSALUTUHADSOCFWNDWUEICEITJOHWAZVVWXSQFOMXKMRXMEPGGEQRCTPRKZZBQJPERCVJIYPMSHUHJKTDACXKXJYGRUVYRFNGITKEIYLLNINMOKBMXLDVQCJPIGFNBQUFBHDYNA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13504U;
    msg.info.assign("JSXXQJOJTPGEZVZXJCISJHJJBFIUEHSZYCHKWSTRNFLWNMSZCKDIECWEOFPZBKGMBPODBAOLRMRNDWBHMLJCFAVWNRDTVLBAITMQLGUXKFLIMJSTZFRRXURRADEHMAKSHSSIWVKDDCZPNVBVTWNKBKHFCGYAVIWAEGGRXCKUGOBMIVYZNUYOUOT");

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
    msg.setTimeStamp(0.8763800876124218);
    msg.setSource(26360U);
    msg.setSourceEntity(14U);
    msg.setDestination(50083U);
    msg.setDestinationEntity(41U);
    msg.type = 27U;
    msg.request_id = 44558U;
    msg.command = 172U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 24756U;
    tmp_msg_0.lat = 0.7014854864363187;
    tmp_msg_0.lon = 0.6885542728944358;
    tmp_msg_0.z = 0.1437030257430072;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.speed = 0.6777395605832666;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.duration = 36470U;
    tmp_msg_0.radius = 0.2981931040416993;
    tmp_msg_0.flags = 88U;
    tmp_msg_0.custom.assign("VXOMYBKTRFJANEURYBXCNATFKQMKYMGVDUUGAEMBXMFCMTFXSGYJDJPNOHBWXZMGSEPLLDWKLIKQTBAVRXWFUZNPJPDADSJXTLVQLTJQHIDPAZIQQDQCZTAKEFUGCLHVSJXANGWHFPHUCNROPAKOJQREHDLIIWWYVVRYGQYLHINSZEVGUJTYDRQUBEKVGUIZFCNOZKPUHESF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29586U;
    msg.info.assign("AGFFYAJDBQGYTUENWYLVSSBBTJKRSREIOYSQIOPTNCXXESXINXZAVZLEMLLTNAWNVIKWZGDDPURYVCTJKQHPYXSZYKWGIPTMMACVPGKIVSFPJJLYMHFRTFDDJVNPTCIIEKCZOVABMRFWEQSVRXN");

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
    msg.setTimeStamp(0.7281416170994401);
    msg.setSource(62417U);
    msg.setSourceEntity(127U);
    msg.setDestination(36074U);
    msg.setDestinationEntity(3U);
    msg.command = 114U;
    msg.entities.assign("BXFLURTDXPHZEDRUESLEAPKDRBNITIZVJNQSEUONHWTALEWJGWJHIQMXMHTCRJXYPXFHRKCJPWBFUSSZXKIOIJLRHNRJPTOBLKKPDVFNVLIFDWSKKHAOGOFFMKZUWDPAIZRAYAZLITZHBBYSEBRWFWXYXMVIQTABESMJNMJY");

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
    msg.setTimeStamp(0.5044203400119269);
    msg.setSource(1176U);
    msg.setSourceEntity(179U);
    msg.setDestination(38112U);
    msg.setDestinationEntity(90U);
    msg.command = 47U;
    msg.entities.assign("QZDLSURRIFHOTEMVSXZEVUAEMGFWGJBLBLGHVASHPITQWUGNYSYFMBZXOXKIHULHNNWKDRPMQMXYFYDPNOZCKQFSQDBZFCEQJEJKLYPHONRXAVTQHGITSAEVMVXKXVBWMENJJDSCKUZWZLKBLGOROVLCGRGZBWWUUDHRCGAYXRPOSFHUTIMTTLYFNE");

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
    msg.setTimeStamp(0.5972120208669008);
    msg.setSource(61949U);
    msg.setSourceEntity(162U);
    msg.setDestination(28179U);
    msg.setDestinationEntity(37U);
    msg.command = 46U;
    msg.entities.assign("IXDXQAFCKZQIYBSEBRFYOCKFXUBAZPPLEKZZLYXEBBVDSHOEQCJDLHWETLDNUWNPDXYSCPJWIVTFAEHCMWYBLIUKRFQNVARADMNCTQDYORQNKRBWGSGSFXZPVORTXLYTKMAIFBSVGRQNOCEHVJNFUQFDJHZMYMTQHOTGWVVWDUFMITUERGWUZNMCPCALOKUOPXLSTI");

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
    msg.setTimeStamp(0.295825717400681);
    msg.setSource(40029U);
    msg.setSourceEntity(220U);
    msg.setDestination(60190U);
    msg.setDestinationEntity(43U);
    msg.mcount = 101U;
    msg.mnames.assign("WJGGCYJQKKGCRDXVADBUXUDRNMSMCFKAXFAEBTDJSJEJPUKMNPASXBAIHYLOTLRQDUQEJCWVZUZYKGQLLNYHHDUEXRIFLGNLJSWHWLQTDHHGVOAOHWBLMEZSNHFMGVPZIKXFZPRKUMXZTWMWOTIEWP");
    msg.ecount = 230U;
    msg.enames.assign("XSGKGDTSKOBFUVXLXFPPSYHWKMRGNLCRJTIERBLTXFZTIFYUXMEOUUGVEINQLGAPRNDPHKJBZSAVMEROVMCMNUXOSKZHJPRYJNLCZSTWBYQHDZLUPJBOGCQAANLMUFHEYQIDOBWCMECHBDVWVTALHPEZTERFKFARESOKCXNWLFTJZWMSIVBKZHRGQFPCQQFMYSODOYIKZJJOIYCDWCNWVUEBJDVURNHXQAIYYMALPJNWDKIADWUQTGIAT");
    msg.ccount = 167U;
    msg.cnames.assign("FKETOYYZGEIVIHIKQRMJCAAPRGTJQWCDMXMFGZTMULBJHOSUVBXDXRTHHWAKNZVLFBFGNOKNTICKRBWUCZORBLVMYSWQSSIMATCJETEUGYXUSXEAEUEWQWGSVKWJSNLMYMKVOQWFCUQRQYIDDPNJRHGZOLHFFLCEOBZDURAFZLDHPEYNCYVWXBPGHDAPDJCNUFLTSXPSOIDLWPZOYBYTRNIQGCBHZVLZKHJIRM");
    msg.last_error.assign("RHEFQTRKZLAIWSXDHHTBLLFFHYMGJHQJSUCQMRUJCQDSIROKNDNPZMKLBZJVICTLIXDRRMD");
    msg.last_error_time = 0.8405228550129892;

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
    msg.setTimeStamp(0.5487971090362647);
    msg.setSource(29263U);
    msg.setSourceEntity(66U);
    msg.setDestination(34961U);
    msg.setDestinationEntity(24U);
    msg.mcount = 63U;
    msg.mnames.assign("DEREBHERJRKFINDJOGMGRXQYZYFFMQZKSUCNMDCEWXCIYSICSWTYJOSFZZLGNJSHGRYSXPATBZYTMOBIJANMZQSVKAUPICZKNQJVELDNPUNSHCHZXBVRBT");
    msg.ecount = 132U;
    msg.enames.assign("WQSSJMFCJSGLKTYCHXSUCYLTVJMPYMOPKCHWQOIPDHRDXOBKE");
    msg.ccount = 104U;
    msg.cnames.assign("BZONPPFDTXHGWEPKXCYMOZSMBLRVSPUXUHJOWZYYFSADCAVVNEACYOQXKRFLFROANQHNIBDKDNUAKLFCSQQEPARLWXNJOVFXCWBOVHQAIUTPFPJYINVTLZDEMRRISRPYVFJCUDZMOTCQGXEBBKGQHZZQVFUHXWKOKJHCIMSXITJCGLNJH");
    msg.last_error.assign("JWNHIYXJYKLSWEERHCHMKSVZUQZOUMCFNKUZOXGBMDRDVEVPJZCGKXBCDKXIESTRCJOFURPNEYQLGIBFUPSZJIMXZBZKJGMJHVXNTZCTRQRYLGBGFHOWFPNQWSTTPXKFUHA");
    msg.last_error_time = 0.6554829758269415;

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
    msg.setTimeStamp(0.2322492590599189);
    msg.setSource(58964U);
    msg.setSourceEntity(134U);
    msg.setDestination(180U);
    msg.setDestinationEntity(124U);
    msg.mcount = 200U;
    msg.mnames.assign("VBTBUBMGPYNKAPMZXWTOSIQWGQBGVEGUKLCW");
    msg.ecount = 48U;
    msg.enames.assign("GSNDXEXLTNMXARYPVIOAWDDLBYHNBZQFBVDQOTJLZWJACGDQSNUYMHKNIGJMYBJLJEJTWKPYOBULOQCHTSDBAQHFAHMMHWMKNJLCSRYOTIFZHZVHQKOPCTQYCQZWSBKTDRCPMLAMNMAQWGBZNZEXETOXXWORRNWRABUUVKUEHUGDBIJTEEXGPXTIESPFCYYOLARUKNELUOSFVGSRZVPEVJVWXPILDJYPPISFRKFGMURGKHC");
    msg.ccount = 63U;
    msg.cnames.assign("SOOSBKEWFACJMYLEHHLICWGJDIGYOVJBCIVPPGOHJURDCYFUWFLXERRQCLXEJLGNUSTMNQTDFIHDIBYDEGZASEYAZPKDFNDUAUBDSGLLLWGFXPQUHOKTRNDNZXMZVEMZM");
    msg.last_error.assign("KSMUGKWROYJGFSTSBHRIGDNQJKDPROTXYYGMAOFPNHYLXCVFZFKHLREJNBDPQVAOOWAK");
    msg.last_error_time = 0.1212732435802758;

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
    msg.setTimeStamp(0.9402149786072974);
    msg.setSource(15231U);
    msg.setSourceEntity(46U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(32U);
    msg.mask = 39U;
    msg.max_depth = 0.8290542998519095;
    msg.min_altitude = 0.521701485332558;
    msg.max_altitude = 0.2494507743167944;
    msg.min_speed = 0.6086230035759017;
    msg.max_speed = 0.17224620492416365;
    msg.max_vrate = 0.6098386306347914;
    msg.lat = 0.9811439313325165;
    msg.lon = 0.04124320527017156;
    msg.orientation = 0.6964091558418358;
    msg.width = 0.43942885157840683;
    msg.length = 0.35414108567924074;

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
    msg.setTimeStamp(0.6987522125405686);
    msg.setSource(55142U);
    msg.setSourceEntity(230U);
    msg.setDestination(244U);
    msg.setDestinationEntity(195U);
    msg.mask = 148U;
    msg.max_depth = 0.5404485225856034;
    msg.min_altitude = 0.681240236221777;
    msg.max_altitude = 0.8607174928426783;
    msg.min_speed = 0.5443205989924953;
    msg.max_speed = 0.3938120360476699;
    msg.max_vrate = 0.05335231096847626;
    msg.lat = 0.1951587566460251;
    msg.lon = 0.39881029646100596;
    msg.orientation = 0.026414206753742397;
    msg.width = 0.9575561800680181;
    msg.length = 0.43551279294845247;

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
    msg.setTimeStamp(0.7543617971786939);
    msg.setSource(38076U);
    msg.setSourceEntity(140U);
    msg.setDestination(37462U);
    msg.setDestinationEntity(233U);
    msg.mask = 225U;
    msg.max_depth = 0.7137839243642246;
    msg.min_altitude = 0.24350501879080255;
    msg.max_altitude = 0.9661122254276476;
    msg.min_speed = 0.485987531954057;
    msg.max_speed = 0.5411984238485193;
    msg.max_vrate = 0.6784660591195052;
    msg.lat = 0.11590184516958524;
    msg.lon = 0.9917727075739076;
    msg.orientation = 0.49756884040007043;
    msg.width = 0.13271941702100742;
    msg.length = 0.2414341470588185;

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
    msg.setTimeStamp(0.7152362619496608);
    msg.setSource(58201U);
    msg.setSourceEntity(166U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.9846436709475161);
    msg.setSource(22702U);
    msg.setSourceEntity(96U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.923124773928014);
    msg.setSource(15634U);
    msg.setSourceEntity(143U);
    msg.setDestination(20598U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.5914633247248207);
    msg.setSource(62726U);
    msg.setSourceEntity(59U);
    msg.setDestination(63209U);
    msg.setDestinationEntity(169U);
    msg.duration = 23347U;

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
    msg.setTimeStamp(0.642701531921244);
    msg.setSource(52184U);
    msg.setSourceEntity(15U);
    msg.setDestination(59103U);
    msg.setDestinationEntity(4U);
    msg.duration = 33728U;

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
    msg.setTimeStamp(0.2983017757518155);
    msg.setSource(57031U);
    msg.setSourceEntity(158U);
    msg.setDestination(27107U);
    msg.setDestinationEntity(95U);
    msg.duration = 60564U;

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
    msg.setTimeStamp(0.5845318207384387);
    msg.setSource(37810U);
    msg.setSourceEntity(10U);
    msg.setDestination(13398U);
    msg.setDestinationEntity(253U);
    msg.enable = 97U;
    msg.mask = 3018554598U;
    msg.scope_ref = 3176547297U;

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
    msg.setTimeStamp(0.27165393831733364);
    msg.setSource(61018U);
    msg.setSourceEntity(248U);
    msg.setDestination(46681U);
    msg.setDestinationEntity(175U);
    msg.enable = 126U;
    msg.mask = 3992404164U;
    msg.scope_ref = 2040597171U;

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
    msg.setTimeStamp(0.3445510064833355);
    msg.setSource(58357U);
    msg.setSourceEntity(81U);
    msg.setDestination(5570U);
    msg.setDestinationEntity(7U);
    msg.enable = 56U;
    msg.mask = 206900951U;
    msg.scope_ref = 2121926555U;

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
    msg.setTimeStamp(0.988407676214557);
    msg.setSource(14972U);
    msg.setSourceEntity(75U);
    msg.setDestination(49286U);
    msg.setDestinationEntity(108U);
    msg.medium = 62U;

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
    msg.setTimeStamp(0.15962325003341304);
    msg.setSource(29972U);
    msg.setSourceEntity(124U);
    msg.setDestination(22152U);
    msg.setDestinationEntity(215U);
    msg.medium = 246U;

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
    msg.setTimeStamp(0.739770203988496);
    msg.setSource(26988U);
    msg.setSourceEntity(30U);
    msg.setDestination(6213U);
    msg.setDestinationEntity(169U);
    msg.medium = 20U;

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
    msg.setTimeStamp(0.37153932420827507);
    msg.setSource(1684U);
    msg.setSourceEntity(192U);
    msg.setDestination(21785U);
    msg.setDestinationEntity(58U);
    msg.value = 0.039960493428805366;
    msg.type = 69U;

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
    msg.setTimeStamp(0.5871737020983939);
    msg.setSource(4193U);
    msg.setSourceEntity(136U);
    msg.setDestination(3175U);
    msg.setDestinationEntity(186U);
    msg.value = 0.07338987690358578;
    msg.type = 214U;

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
    msg.setTimeStamp(0.6034354013567266);
    msg.setSource(59572U);
    msg.setSourceEntity(35U);
    msg.setDestination(22253U);
    msg.setDestinationEntity(191U);
    msg.value = 0.16538021639974743;
    msg.type = 35U;

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
    msg.setTimeStamp(0.9371579870193445);
    msg.setSource(51270U);
    msg.setSourceEntity(210U);
    msg.setDestination(10523U);
    msg.setDestinationEntity(201U);
    msg.possimerr = 0.34308569689615753;
    msg.converg = 0.7472701921203112;
    msg.turbulence = 0.0696590133042202;
    msg.possimmon = 243U;
    msg.commmon = 59U;
    msg.convergmon = 168U;

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
    msg.setTimeStamp(0.09946410851406795);
    msg.setSource(53321U);
    msg.setSourceEntity(95U);
    msg.setDestination(13206U);
    msg.setDestinationEntity(23U);
    msg.possimerr = 0.018338988305247605;
    msg.converg = 0.1860499168003733;
    msg.turbulence = 0.2722291119489726;
    msg.possimmon = 131U;
    msg.commmon = 254U;
    msg.convergmon = 161U;

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
    msg.setTimeStamp(0.06579615619198786);
    msg.setSource(32993U);
    msg.setSourceEntity(158U);
    msg.setDestination(33605U);
    msg.setDestinationEntity(132U);
    msg.possimerr = 0.5176510056361708;
    msg.converg = 0.8246512732524532;
    msg.turbulence = 0.5567341759301798;
    msg.possimmon = 168U;
    msg.commmon = 110U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.5884590770220741);
    msg.setSource(25297U);
    msg.setSourceEntity(129U);
    msg.setDestination(62911U);
    msg.setDestinationEntity(9U);
    msg.autonomy = 225U;
    msg.mode.assign("LBNTHJSGMVORBZFWIIKDJMWQZSSBEDNYFHHQMZZNAIYBDOGOBHLFJROTWXTFUPOVQTPYTNAZEYOTYRXHIQSWDZAAEFDDBWMFKYWHQNLKHJWSRURCIJNANESCHESPYQCCWQTKEXAIQKGMPUKIXITRFVYVAXKJXNCPPQHIPGPUFMMXZKUZKUXEL");

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
    msg.setTimeStamp(0.09328971743792347);
    msg.setSource(2296U);
    msg.setSourceEntity(248U);
    msg.setDestination(36230U);
    msg.setDestinationEntity(15U);
    msg.autonomy = 129U;
    msg.mode.assign("MQGMAFLIJXREHYSIJXVDXIKTRBWWXCLRXFIWKNQHHDZZOYWMXHZGMKXWHYJZEGHZCSTTLMUQXRNIGLFLBQCRKTCVVJYKEHLPPZQJHCKZSUVGMAFYMNPUDTRD");

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
    msg.setTimeStamp(0.5663895202506849);
    msg.setSource(6645U);
    msg.setSourceEntity(164U);
    msg.setDestination(48075U);
    msg.setDestinationEntity(225U);
    msg.autonomy = 157U;
    msg.mode.assign("XOWXTCPSQQTMHUHDBXMGILPBRBJLFQNICRYFDCRBEWCEJBJYMUBWWPOWLSDMWOLTWNCEXXRFKIRNHRIZPJUVEOESAIRLKQIHMCGFYJNPZKNAYOQGNTMABPHGSMAQKEFZFJBDTZZIYEDJOAMZJNVAJYVVXMIFWAUVOGXUSTYUAKVHHNEQSLQLYSHTKESUQVCGVFK");

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
    msg.setTimeStamp(0.11893721363229193);
    msg.setSource(22799U);
    msg.setSourceEntity(121U);
    msg.setDestination(8183U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.7559791130964241);
    msg.setSource(24883U);
    msg.setSourceEntity(216U);
    msg.setDestination(6158U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.22761409699543);
    msg.setSource(51129U);
    msg.setSourceEntity(231U);
    msg.setDestination(43100U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.8719612876058479);
    msg.setSource(28741U);
    msg.setSourceEntity(195U);
    msg.setDestination(7934U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("XLTPZEAXDRMFOGQCAFYUCGBFZATJHINMSEBTTUUJHWEITURYGUMHXWWWHSFTSAFDYYLQFXVNWEPLHKDONBDSMGGFSZYXPEQCRIIPQTNPBHWI");
    msg.description.assign("HKMVWKCVXUKIVBBAEVACDCUOVFFMWXMLEYXNIJLFZCCMJMSRNJXEDGCUDKSHPXRFNUAYDWBNVPAHDBTNAYZSHQJFRHKOZIPOHJGZMGJSYSIBHGIYBUUSKXUDRJULVQINFCZVDGLQPXDEMLNGJWEOEEXJLBALTWJOTVCUFQTASYBCXZPORKGVMWGTTMFOYCLYSLGQYEAEXQNPWQSPQZHTFWYFILBMGQPKINPEZPTRDAQUIH");
    msg.vnamespace.assign("RDCDWPXDOEDKJZVVLJFQBSUMBIOGYKVNXHVTZUGSOGCANHUYYTBBRIJMNTSPZPUGHARCGUKUTHPMYEHYZHDUIMDJENFKQIMCCESGSYNDYXZOUHGVFYQJKPVQTRLABGBWQNJBIXLADXFVPIKHECJUXPFUAQTZMPGEMXWRNOWTFKOJTFEIDQZQNCQSLOFLROOCTIAOQXASNEAARLZVLSHWMJESMPFMWZKCZAICYXEGV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GKLRWBKXNPPCUVBXFAFGKBRFLALBYISFDTFGCXPTBVYAGVFAIORYYJOTINMKWFMJFSGYHOXSPGHAPIMIWKVKQGEVRDZKUCCPTOUCLRYWQLEOOZD");
    tmp_msg_0.value.assign("AENEEARNMZYUXNXTNZUCNUBYVLLJBWHTISLUFQGTOPWRYCGKPOKBPTCGGUMIQFWQPZCVLODLKVIIXROJTRLPSHXWZASXAPHRAHDNZOBVGKEBEDJRQIDUJJLATWGYASCEJTKXRWIHSFCSGUVRHBUZXKAFYWNLNFDJKSVQ");
    tmp_msg_0.type = 238U;
    tmp_msg_0.access = 119U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KCIXXEZEEMUSFUAIUHVTZQVZMBOIFQDXVQBTMKEUCXIPNVBZAVWWNYCBOFUSLEKCBLGJJPKTTYONJSB");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("XXOGQIQJNNZXVCXFLUOQIADBJLMAFSNWUFCHPXIKGJGTFKDCHZOYLKL");
    tmp_msg_1.dest_man.assign("BXVBIWGIXYBJQACANEKQYDDLFZIGGYNPYYWSOTCZBVJEMUGZBQHJPSTZYBVKAHWLTDFAKGHELZMZPTBQWICTWBOEVSUMJPPVSFPQRJFLWRRKQNYRDQZOVZD");
    tmp_msg_1.conditions.assign("SEYCMXUGHL");
    IMC::PlanGeneration tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.cmd = 208U;
    tmp_tmp_msg_1_0.op = 77U;
    tmp_tmp_msg_1_0.plan_id.assign("EYLURGCEPUNHBOHTVDLXRAOIGBYSWCPSXOUIPMODZLTQVDJHAKHJCLDMFOZGCBQCSJKIVCLVTAGBNPJFVEXSAUNNXRLFZRQOKQIXFEOVZTRQEQHRRREQWBMYNDPRPYNZCDDWUPBWNXHAYGPTWGFECIEGFFVKWQAYZGTXBCVMFKKKUAZDOARNYSEXQTSTOFIZLKHCSWTLVZWMPIHIJBISDNLUYEGMMJMUYWDXJ");
    tmp_tmp_msg_1_0.params.assign("VTNPZZLUTENGZEAZRRBDRHSEMZWODIYBLNWCTFSUEKLJJHTVROYBPDKPBHUYDYZBHNXDJLTZUCOJIGGFEKEQQPRGNXOVIDHLHWGYVNYKTMRMPQUZGFSRDAALHOIWMHETCCXPZCFNXGWBSOZMJLJBVQYRFFUHWQLDLEMMMXYOSXCXBVJNEUKWVIKAQWFJXAVRONQ");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Teleoperation tmp_msg_2;
    tmp_msg_2.custom.assign("JIZWRHFUMDAOUAPPZTCCCTWQQZEYTAOMZAILVRBNUBICMZEOUGHEBTFCMSAAPYKJQOXSVRHKQ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::AcousticPingReply tmp_msg_3;
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
    msg.setTimeStamp(0.9778319960434133);
    msg.setSource(61424U);
    msg.setSourceEntity(145U);
    msg.setDestination(40668U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("BOAUMGWYVYTKFRPBPMSSQBONPFZBWXUQVDNTKMWWDQSEBISGACGURKOTPKCWYZJXIOKHZEURUHRHFQVYISFZAVOKEOQXHZFHSZENDIHGRMYAJLAIVGAFJKZEQCHDHMBIFPRIAJZKXXKVMNEPVYMVVGUXUGBWAUMWJLMNUPYYTL");
    msg.description.assign("WZDUZEBAVOQWRPKMQVLCHPUKOTJINRHOWFZNFUIAFJEKJDNGTQGOWSLCFMPKXCJETRRDCMSBXSLGPOYGTOECTW");
    msg.vnamespace.assign("OUCJGMIOUNDQTHNFXAGJBIXUXDLKEYNDNWYTTUWZMLOBJMPLDEFLCHFYZZOAMEUOCJEOSYMHFBBAZKVRWTJQIUIXYBGCACBJVMZVPJMVGNPWFEITFHNKUWGCWOOKHKVPRQLXZXBRDLRPHVIGKJAARMHNFCKSSKZDWRBYORUQLFXHPSEKJHWMQQEZAZSIIGLDLYSX");
    msg.start_man_id.assign("WIWKIAXWJECMHHBKQHSLLYCVZZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MHHNYUTNMDWIYAPSXCBLBAAQMOED");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 44461U;
    tmp_tmp_msg_0_0.control_ent = 45U;
    tmp_tmp_msg_0_0.timeout = 0.6969367969160319;
    tmp_tmp_msg_0_0.loiter_radius = 0.258269945494772;
    tmp_tmp_msg_0_0.altitude_interval = 0.7517112637741916;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RemoteState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.5178107899060279;
    tmp_tmp_msg_0_1.lon = 0.8813914488015919;
    tmp_tmp_msg_0_1.depth = 111U;
    tmp_tmp_msg_0_1.speed = 0.9952776929859091;
    tmp_tmp_msg_0_1.psi = 0.5444565802014611;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KSQDYNONEQVYSABHMVMZWSDBLJEPURZHHPMBFDAIKCKWMPWIGEPPBBAQLQQXLSOOXLHRVSPDYSKIMXZTLTIOOJUNXRLTNAHBMLVGTDMWFNHTGFRHRUHUBPZUFKYTXWVNV");
    tmp_msg_1.dest_man.assign("OGQJSQDWYKKVYZDCRAFQXGVSBRQEYDDJUBOHGSAQIWFISNWJVZTJSPLMLURIPHTEZBFBIOXXIPLDVIPXNUQLXGUMCZVYGNFGWPAFECXRJAXUAOTHYBRJMSAZTCVC");
    tmp_msg_1.conditions.assign("UWTLKYHTLTXBAEPMOZCRDTLHYJZOCUPJVVZSWFEQIITNDVNEZHJNKMWZSFAZFXHVHNQXWTIZKJULRMBQMXYSVXDWGDPRVADPONKOUSSSRGEMBDVUAWHQUKFWGRPWAOCATTZDUGPJHEXL");
    IMC::LblDetection tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.tx = 215U;
    tmp_tmp_msg_1_0.channel = 58U;
    tmp_tmp_msg_1_0.timer = 51004U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.07556929441236304);
    msg.setSource(42864U);
    msg.setSourceEntity(141U);
    msg.setDestination(30300U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("OTYLKRTTJNLXDITTEYIURPOLSIQYEGNIDDBSJMSKPEOVFWZWWEUPXDPCEQEHCFYVTJCRHCKAQFYVTUKWG");
    msg.description.assign("RWJWKSOAWMAHCXWVXEZHCGJYKDIDKXGYDUULHMQUTCMXREJFGCVISPWDNSQOSKXTQKVDVQNARJBVNJFFMJRHYZKLX");
    msg.vnamespace.assign("JFPTSZQWIDTHQHYXBWLDACXWTTPVSHESWRJUTMUQAZUADBPDQALYUFIOXRGJAKCPWOSNNVAVMNKFNIRGVWJPJFVCUGGUMLSDYBVAKBIRXLNJACMUSQBHQEIOTSPZWLLAMUPGDYEHMGBRJIHEBNKCEZNFPHBJIGTTXZEQXMRTYRZZJCHNQEZKOERHDKEFWNUZCKVMUASTCOIYQDBV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ISJFUJHAPFZGUDTLSNZDJFEYEKEMPMLUNXDWPXBLQHMBHCEFUSLZKKYCFOTZSFRVJM");
    tmp_msg_0.value.assign("RVDPWROUOGFBISRGDBHHQWZHQKTCJAAEUOFUVCMQAXNNFAKJEOBMWTZFLTULBNAGMYJZYYCDXXETTZFCLFYREDUJRTIJYAKEOHKGCUOOTOIWMMMRIZLLRDVXTVKQGVXDPGPESOQVIWKJPSQLSDCZIPSCPCNXRYHSYHHEDAZCVIMIUNSRUXXMMGWGR");
    tmp_msg_0.type = 112U;
    tmp_msg_0.access = 101U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FNQTRPTTHERWXHYZIUOUXBI");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("CJQIUTUVGWVHFCNSLPFZOBAXGVXRDQZXDKRFMKRVZOPCFXWWKHTXEIBIBJCEWLYQQRRUSAJKKKDVCLPCZZNJFQEBIHYMXQOXMFGVOZQPPCKMIOTUQTCLVGTSJIWRMH");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.7524144481202037;
    tmp_tmp_msg_1_0.lon = 0.19648597171707893;
    tmp_tmp_msg_1_0.z = 0.8822792488281411;
    tmp_tmp_msg_1_0.z_units = 137U;
    tmp_tmp_msg_1_0.radius = 0.3283865667776221;
    tmp_tmp_msg_1_0.duration = 37612U;
    tmp_tmp_msg_1_0.speed = 0.20216250926394652;
    tmp_tmp_msg_1_0.speed_units = 250U;
    tmp_tmp_msg_1_0.custom.assign("DYHBYJLOWNICPYETMRQMWDTEVOZURTQVSPCIEDLKLKJSPHLRIVGXCSNIXBNFZYGFMXUEZGHLPSMDJTCZHGYYTBWZLCIXVSEILPBAVUDUBESGOSNRPJXUNRIXXMSEBASOMANZISQVZXFFW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Pressure tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.401946928120515;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::UamRxFrame tmp_msg_2;
    tmp_msg_2.sys_src.assign("QQHUIORVNSPJCUWAIESFRZQSJMOVIYKQRAVZHGEYUTIFFWWXMFAQABRUYHZBEWOGSRMYYXZWHNXLGGKCWEYXROJKGPHKBDHNTYZPXXCJEGVFIJMSJFPEF");
    tmp_msg_2.sys_dst.assign("RRRSNJVZBJGTUOYMKNFZWCDAHXDMUJPICQNNFLKHJXWEIXZEQKZLVTWRROEIDWLBCDFONYNBFYKMOOHUCRCDAHI");
    tmp_msg_2.flags = 203U;
    const char tmp_tmp_msg_2_0[] = {62, 126, 61, 72, -73, -104, -128, 6, -1, 21, -21, -67, -16, 123, 9, -28, 16, 6, 78, 111, -104, -90, 111, 29, 112, 66, -90, 89, -82, -17, -26, -41, 89, 18, 35, 17, 88, -17, -8, 124, 87, 96, -61, -82, 20, -114, -6, 120, -97, 111, 92, 22, 54, -100, 105, 120, -76, -106, 126, -112, -7, 96, -104, -54, 17, -36, -33, -36, -99, -47, 67, 0, 20, 118, -71, -120, -62, -44, -23, 94, -29, -68, 18, -17, -39, 37, 51, 20, -80, 21, -123, 102};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.12977687697777174);
    msg.setSource(9657U);
    msg.setSourceEntity(150U);
    msg.setDestination(2747U);
    msg.setDestinationEntity(210U);
    msg.maneuver_id.assign("WFLBMBNWXIIIRAUAKIUQIKSPWMAVQZFNHLLFRVDEWKWSCHPSCJPBFJVVVDRNELRFHSOQPLOYCUNZPGVBWOZTGWSEBTIXBHYMRIMWSPZXTBJJALLUMBZCBJWCHZENOTGCPTRKHLGJZJNVNQRSAOOOFVMXIDTDKVSHHAZ");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 30763U;
    tmp_msg_0.lat = 0.3428540054163809;
    tmp_msg_0.lon = 0.0637790754297074;
    tmp_msg_0.z = 0.5535713034483657;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.pitch = 0.2890163937365785;
    tmp_msg_0.amplitude = 0.4230499377268435;
    tmp_msg_0.duration = 42455U;
    tmp_msg_0.speed = 0.7828702834973621;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.radius = 0.7106666021656287;
    tmp_msg_0.direction = 2U;
    tmp_msg_0.custom.assign("VTXSBXXQLVRDJKAEIDFPKIPSZSKKMAZYGGEKXHCHCZWIYBYAPUYNFAZDXMPUKLYXEFFEXRVTWIIYBHIQQCSDSMGLWNOARBMGPGOQXKZBURXUZNJUSJFYGLGDJOJFEOTPWYNBBSNRLQMFCVHTUNRPVLMQTWVDNKAJKBOHPVVIWUVYDPNHQIJASOCRJOIA");
    msg.data.set(tmp_msg_0);
    IMC::RawImage tmp_msg_1;
    tmp_msg_1.width = 44372U;
    tmp_msg_1.height = 38186U;
    tmp_msg_1.channels = 16U;
    tmp_msg_1.depth = 103U;
    const char tmp_tmp_msg_1_0[] = {120, -44, 49, -104, 14, 118, 46, 61, -53, -112, -61, 42, -48, -67, 119, -12, -52, 77, -35, -45, 96, 20, -49, -125, 0, -114, -121, -8, 97, -65, -119, 116, 113, -37, 97, 57, 102, -90, 32, 106, -128, 72, -27, 21, -41, 58, 13, 83, 69, 124, 48, 28, 81, 9, -95, 21, 57, -57, -112, -57, -119, 93, 0, 103, -95, 51, 55, -67, 46, 94, -30, 57, -124, -119, -115, -40, 80, 3, -63, -98, -61, 28, 14, 59, -76, 63, -70, 14, -123, -28, 98, -59, -101, -49, 95, -100, 105, 7, 33, 110, 57, -40, 6, 102, 101, -19, 64, 104, -87, -4, -31, 109, -92, 75, -4, 120, 70, 102, -81, 88, -53, -51, 57, 42, -43, 46, 92, -90, 80, 111, 74, -84, -26, 15, -81, 86, 0, -54, 26, 59, 80, -108, 81, 11, -31, 96, 73, -128, -23, 12, -47, -121, 36, -86, 7, -55, 93, 34, -62, -89, 106, -92, 85, -33, 86, -107, -54, -113};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8134954796056437);
    msg.setSource(7492U);
    msg.setSourceEntity(226U);
    msg.setDestination(64784U);
    msg.setDestinationEntity(149U);
    msg.maneuver_id.assign("SNSIVDSOACKFLHYUXXOEKBUXZRYHDTGDNACLCLWVMHJYISGYNZBLKMQBWFHZTNRPOQWUWIKHQEKSLZVUWXJIQKJHGWGVOLNWWNAUQXMEUPCLZEXSEXRIVDSYEZRJIBONUTPCQTJRGJAPYFKFSWZHTJRFFGZDYXLMSAMQNGCRYBPFEDLADELDQPMPYKDSTIZNJHJKIOMOGGUIACJ");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("WEMZSPEBRHVHFYXQUWSOUQUQWADRPBMMIKYNTVIXVRXFSTYEVLKADWLNYCGQEMZGNDTYAMZZVWGAJJBOFOPBRDIMOGGUHSWCKEXFRFUUFDFIUPQZLRFPKJPLCHPYXBBTYNKBKLJOWTHWVKTWDTIPADDSZLVHSMDSNESLZJXEANRC");
    tmp_msg_0.reference_frame = 199U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 8143U;
    tmp_tmp_msg_0_0.off_x = 0.17092073273466424;
    tmp_tmp_msg_0_0.off_y = 0.10423369846222852;
    tmp_tmp_msg_0_0.off_z = 0.09663078898528366;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PLVKGMSVNHGTOCUUFOIRWDNHHPNDJGSXFXGDOMJMGKGMJMTHPHVWOXKXNDHVLRDPPMSIAC");
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
    msg.setTimeStamp(0.11243691504714015);
    msg.setSource(11777U);
    msg.setSourceEntity(233U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(18U);
    msg.maneuver_id.assign("CVFSBIVKYZNNSLDOLNJ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 30463U;
    tmp_msg_0.lat = 0.14631737098886433;
    tmp_msg_0.lon = 0.09430370908056473;
    tmp_msg_0.z = 0.6941152086941944;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.24915513254568455;
    tmp_msg_0.speed_units = 225U;
    tmp_msg_0.custom.assign("KDJOCLVTLXDDMSDYPLPBAYIKWDASUXOSMPJHCQUMHIMZCNEDPCMHATQWLEUFBYWGIQNWQMGXWXLJRZSENHDJJKEBMSPKICLRA");
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
    msg.setTimeStamp(0.38220988130754596);
    msg.setSource(21960U);
    msg.setSourceEntity(154U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("HRCIXBFIOEPSMNQKZURVJGVIYB");
    msg.dest_man.assign("WZLINZGMXGJTGIXEGEEWYWZHGBDTGJPDJKCMCWO");
    msg.conditions.assign("MZORFRZSASTQQESKMHNENPTRVMPDOVEXRYQEWNXZUTTODJCLHGSBJCHOFBXHWZJVXLYWHPJXXHQAZYCU");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.4660785326032325;
    tmp_msg_0.lon = 0.5145495549079593;
    tmp_msg_0.z = 0.6898837209993522;
    tmp_msg_0.z_units = 79U;
    tmp_msg_0.speed = 0.46638988440112306;
    tmp_msg_0.speed_units = 134U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.5585250670626177;
    tmp_tmp_msg_0_0.y = 0.6418290824292027;
    tmp_tmp_msg_0_0.z = 0.68503790987174;
    tmp_tmp_msg_0_0.t = 0.6210561981242765;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.6170844288991167;
    tmp_msg_0.custom.assign("LCCCTORFOZBKWGSDMDUWBHINTQUQWTGMVAWPUJXVZZDBFHBOHOESEKCJAXPTVLYZUWLVUOGCDSFANTIR");
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
    msg.setTimeStamp(0.35882335622309647);
    msg.setSource(11191U);
    msg.setSourceEntity(246U);
    msg.setDestination(6423U);
    msg.setDestinationEntity(32U);
    msg.source_man.assign("EQJIUXTJXXHYXNPWJXGDKARVRLYFFUBCBNHZDNPUASOVEFWDQWGVDZNZMNQPIJATBCTSGOTWBLVOZZZASFOTVRIKCCSLLFBSRHEBMLFCPAFRZBJWUPDLKHADHEWQXUQOECFNLKEQYARMTYPJIGIIXKAGMYLXEAMKWHNJBNWKKZVZITZKIQUHNYSQVMMMHRVMUCXINYUSTUISUGL");
    msg.dest_man.assign("BUGOZUMFPHINIVWBNNWZTVVAQXSDZKDHTUSRKGHFJBDYBLQJAUQWRMEKZ");
    msg.conditions.assign("KFNLWHKYUTSQUGXMZTHYCNDQJFQPWSQTCJRPLZDVNWDOSICXSNYTMUCQZGOFQMGG");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 153U;
    tmp_msg_0.mnames.assign("ECYNNSFTMJIHTERTDLOYPZYPXBLISQZZQCRZVIWYFBOUGUYZENSKSNJJSMCYASPICPMVVXDPYRRWWDLCVTMVAGONMRCDIRBUEBVPIKSKTPBXGJRHEMUVRQHGMHICFXIAXU");
    tmp_msg_0.ecount = 254U;
    tmp_msg_0.enames.assign("ZVXWATSFFUPG");
    tmp_msg_0.ccount = 174U;
    tmp_msg_0.cnames.assign("QEQEOJRUPDZKEBKDLPGZONQTDRMNYJLMBSGQAZXEGLVBSEVWP");
    tmp_msg_0.last_error.assign("YRNMKQLBZVGLVGOMWNRDJ");
    tmp_msg_0.last_error_time = 0.37024662611057335;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.41956616895328747);
    msg.setSource(47486U);
    msg.setSourceEntity(246U);
    msg.setDestination(17848U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("GBMUJSSGREXLSGLRRHQGJZHSDEMINHPRDVFQNTWIKGLEWXLZOJWBZLYTHCJOGCDWOEUMNBYYFHHXQXCPTVCXQKQVBGPRRUFJ");
    msg.dest_man.assign("QXPPKGABXPXGLHDYUSKRAHBQIDNUIGHZEXPBATMOIMBLISYTMELBT");
    msg.conditions.assign("CUNXNZHIBFUVPQNVVQLGKADHYJAKUXWBCZDOKAITNRWIOZVFEYLURGRMSSVJHCLDMDKPMAUMRZZPDGCLNBTPJPJIKXMVCGGSDTSFBYFIGXDACWYLTJHLJABQQTEYWMPNZUIHEDVMABHRXQLROSNPFZLONSWAMTYIWDNUCBUAATEXTFWIBEPQKHRYOWSSBFPMYVFVUNGEXGOWFWKOZKSERTJXJLQJPBGRQQOVHEZEXCG");

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
    msg.setTimeStamp(0.7748715994466432);
    msg.setSource(424U);
    msg.setSourceEntity(70U);
    msg.setDestination(10917U);
    msg.setDestinationEntity(10U);
    msg.command = 45U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SITDJWATBYICJFENNRCQZDCFEISUKOUHBLLNMUXAZIXUVEDRIRMFAVUWEZFGTKDAREYGTHPBWJPURCQULLTVYKPWWVPZOSNHQCLAFQMBBHOXEELZEONWALVQYQWOCUZZMYJXWJKRWRJSPAMWIVGTSXBJFAHRDKYIINMKPJNCFTTPHTMCMYHXGESSYEQYRVFHXKGVPSMOAGKGGZOYLLZHIVJDDHBQXA");
    tmp_msg_0.description.assign("ZGFRDVXSNINQDBPMGASALJGVMBFCNUXSCBFNLUYMOPCUUYGOGYDXNN");
    tmp_msg_0.vnamespace.assign("YENIBDNURIKRSOPOSIZLGVPEHTENHNUVHGQYHOBZWXKFMFZRSBLBBGHLTJZPVYS");
    tmp_msg_0.start_man_id.assign("PATEWBDEVWYAYBRIZGSATNUZXQVVKFEPVJSMJLKCERTXGTHIJPDLFAQWOMVUKZANGUDBZXSVERSCFLMQHEXUDRPNNYMGCPFY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AEAEZTXZSTSFGRDPGCSEDARPLLXHRIVYXZVDRZHYFXECEIDLEIKRWEPULYJNGPORZKSKFMCCTVTWVBMPXXBGJECMWSTMQAPPSNZBGXISQMHNYYRZKWFTCVNYDHFNCEFBVYZTNVTCUIOGUKPPELCOBBHFUKDQVQYRGDAWLJZWKUWAMKJKJOPNOJVLUJXBFOGUDFYHULAOITAZUSWXJVQIOQMQ");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.6922845265307674;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 177U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 58037U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FVNAIMZDXGUGWDFSKBCNXUHZDNVZVDIKTLLPGFZYLXVQKHONWTQDWWXHSVKQSEAAJRWMYRKVBE");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LblBeacon tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.beacon.assign("PTBHJBRLTMGAPOVWHDEPRWEKASUXIQNWUJUENUCHWHKKNWZMDTFICFTMIMRWGJVTMSVNDBHCEXJLDYXBPYNZXDGJLMTYYRXKKZTOAIGENUALACLUOASNPKPXGJWSCFCFDGDYGLUVQOKF");
    tmp_tmp_tmp_msg_0_0_1.lat = 0.45128937814693926;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.7592327263909292;
    tmp_tmp_tmp_msg_0_0_1.depth = 0.29138226657348854;
    tmp_tmp_tmp_msg_0_0_1.query_channel = 51U;
    tmp_tmp_tmp_msg_0_0_1.reply_channel = 191U;
    tmp_tmp_tmp_msg_0_0_1.transponder_delay = 27U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::SonarConfig tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.frequency = 2224470085U;
    tmp_tmp_tmp_msg_0_0_2.min_range = 61817U;
    tmp_tmp_tmp_msg_0_0_2.max_range = 33243U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.start_lat = 0.6052194122378537;
    tmp_tmp_msg_0_1.start_lon = 0.576451054002352;
    tmp_tmp_msg_0_1.start_z = 0.9489919145421445;
    tmp_tmp_msg_0_1.start_z_units = 32U;
    tmp_tmp_msg_0_1.end_lat = 0.9212764873689783;
    tmp_tmp_msg_0_1.end_lon = 0.5539212529926381;
    tmp_tmp_msg_0_1.end_z = 0.9136429829165336;
    tmp_tmp_msg_0_1.end_z_units = 138U;
    tmp_tmp_msg_0_1.speed = 0.2714284216263355;
    tmp_tmp_msg_0_1.speed_units = 144U;
    tmp_tmp_msg_0_1.lradius = 0.21358187600487488;
    tmp_tmp_msg_0_1.flags = 127U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ClockControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 126U;
    tmp_tmp_msg_0_2.clock = 0.9589171162015472;
    tmp_tmp_msg_0_2.tz = -27;
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
    msg.setTimeStamp(0.28570718138083206);
    msg.setSource(9343U);
    msg.setSourceEntity(253U);
    msg.setDestination(42161U);
    msg.setDestinationEntity(81U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XDUNBQCSTLOYLERVGI");
    tmp_msg_0.description.assign("ALDFESKINOMTKORJJCXZLDHHBHWQAXRPVQXUGRMDAWYUZQCZKVHTDELKLISHMQILEWWUOTZFPTMKWTGRDZLRWLQNSMDYXVDONWYNGORSEQJEFXMZONIQLXXSKCMAFPYKVQBWLCKJPGXYFBVSNCZHPYVDZXGGMWTPPNZHOKSIHVTPNUCRRYNUKFUUDJMPGFERDZVBNBLCIWTAEYEVEHGOJAATYBFOAT");
    tmp_msg_0.vnamespace.assign("ZFDJCDYPQUZBCYTFYDJFFDMWXOZQJICHRWTAZXXVJNSNSNJUXVZXAPVMGGXBYMSQITTUHOTRKMYJGEWSARYQDPTKZVVSAIVKFHTLHPHEPHJGYQUDNKIRRIBUZYVDNNTOTMLIPVSGNBMNUIRSWURBKLRVCVY");
    tmp_msg_0.start_man_id.assign("LIYYXJUXUDXHEFEDNDMWHSRIVAPDIZYGOBBCDKFNZPAHKBBNCJNQNYAZRQMTUVPOVKQUUWUSATNGMCOSFQOWVLQGHWPODMPNYJLPXYVRYLCWCGWGHBIWLXSCPCXCRJUQPBQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TSJXIUNVKZNXMXGCXWPTQDQVBKMCLLASUMSCVMEYDFDDGTCHLMAZRCHWTFNJHEKKUZLNUWZREQPSEWHWTMFBJOKXLFLTEJBD");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.502158704452486;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6605297170052017;
    tmp_tmp_tmp_msg_0_0_0.z = 0.005595067361861994;
    tmp_tmp_tmp_msg_0_0_0.z_units = 126U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.47805667417247244;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 157U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vid = 59459U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_x = 0.2346093909013508;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_y = 0.028992114142389003;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_z = 0.04095359847870117;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.14167071705327106;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ETNMCVLCFAJAZFYXDTVPUKHHSDGIEOXAEGPXGHPINHHAULNUUNDISIKMYBCNSQOVAQDIYYOOHMVPQTKKDTQOOYGNEEK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JVLCFHUFJLZJSXSHUWSIEEMMHWFTBFEUUUNOWSPHYDVKCAXYHIRFBCKUGLRHIFIIKEJOYOJUZANXCNCDWFADQVVBZGPZEMDFVNSPGWPDYCNQTSTAVTFXFHJQHYWCJTPMQKCNRESJGKASRGPIXLUZQDRCHMBSBMVODHPGOLTZQIPBNRRGVADKAYLEVRBYWJ");
    tmp_tmp_msg_0_1.dest_man.assign("DELMJYMTMDQCVMBZXKZDTSMKYSPFTFABSVHOOWWLJHKVUEXJZETHDOMZAUNPNMSCGUNF");
    tmp_tmp_msg_0_1.conditions.assign("XOEAGGCEBLMIFEBNVDXYFNUWBGNFFKZAXCWRQJCQRXPIPZPNMFMRGDPHMDNSVUIUZQMQRSUHACBDBPTZWOUNSOFTRLIIMSYWDWCAS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsNavData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.itow = 1223601817U;
    tmp_tmp_msg_0_2.lat = 0.5220702200414834;
    tmp_tmp_msg_0_2.lon = 0.23450417349245267;
    tmp_tmp_msg_0_2.height_ell = 0.35844522375665855;
    tmp_tmp_msg_0_2.height_sea = 0.016823945284497044;
    tmp_tmp_msg_0_2.hacc = 0.32109601197009185;
    tmp_tmp_msg_0_2.vacc = 0.5636483542694282;
    tmp_tmp_msg_0_2.vel_n = 0.25833918614620854;
    tmp_tmp_msg_0_2.vel_e = 0.7988302779394653;
    tmp_tmp_msg_0_2.vel_d = 0.117201258473558;
    tmp_tmp_msg_0_2.speed = 0.24536033891227982;
    tmp_tmp_msg_0_2.gspeed = 0.20174853507143953;
    tmp_tmp_msg_0_2.heading = 0.6410305734870416;
    tmp_tmp_msg_0_2.sacc = 0.6612831430306951;
    tmp_tmp_msg_0_2.cacc = 0.9935264134703105;
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
    msg.setTimeStamp(0.6939707490675839);
    msg.setSource(5858U);
    msg.setSourceEntity(4U);
    msg.setDestination(48687U);
    msg.setDestinationEntity(113U);
    msg.command = 102U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TBYSJXOLNJXSLUKNHEOBWMNFKFPJDTWYQDIMDUVGDLHDLNOADWHHXPRKKFOTORJCUEOZVEOTLGZVJYYCSQHCZXCPZTUDNHSSIUYSQKRWAUYBIUMRBKXQURNIRPH");
    tmp_msg_0.description.assign("RODZVNMAQYPRBXOCFIRVSJOQENBGONLLOBEFZLMWEDTBKTHBAKMIPLJJCKZUWAIFTZGJOAUAYXWPYSNRREUPSLDMLQBFUSAYZULATNVKIRSWQBLEEQQQXSTTHJZCVUTXIFXGCFICDDWYMGUGBNWKHVHIOFUREYAEZAMK");
    tmp_msg_0.vnamespace.assign("WOOKLANTTJIYWHCHLGDVVKHGRRSZMGCYXNCZPLXQZYUOOSJVARLRKDOVBPODMTNECHAWZRAAGKNCKLDYAGOGLAKYASUZLBJTQLMJEXPNXVQBWTBICCQVWXNZXDFGIXGN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NHWCDRZKZFMOXGNUBHIYQPMHIZXGNUZCSTHDFFUOUQAKBVJAVL");
    tmp_tmp_msg_0_0.value.assign("XFDNAVLKBU");
    tmp_tmp_msg_0_0.type = 213U;
    tmp_tmp_msg_0_0.access = 199U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MINTIRJQRMYRGXPXGCMTBFSD");
    IMC::TextMessage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.origin.assign("EACXOZBZYNRYHQRLUZFHMOSHWJOKCXXTCGUZJKZAEAUHATXBQIQMJWIHITDMGXZVZIGUQERASUEEFBIWDUYDCBPYMJPRCPKBSXQ");
    tmp_tmp_msg_0_1.text.assign("VRBLOCXGVSPJKZPYZQINOOMURSIMNFSEPCXERPSVRYGTAFEXTACKEQQMTKZKHCKCDUWMYOSBEPJOQJXDSDSNKLUKPAFIXWOKBDFTXSXMAIZHTHQTVWPLPYRWCRGVRIQIOFASBGTLWLWZGFRBVQRMNDALQUBYZLJGHIUBHDVCNDBAHHYUWHEAKLNYUXIMRDLPXOJJDJJJEZOWBFHCHGFNWEYUGIMYENKVETVGXSVCAQANZGJ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Goto tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 10376U;
    tmp_tmp_msg_0_2.lat = 0.1020577876254698;
    tmp_tmp_msg_0_2.lon = 0.7138609328492063;
    tmp_tmp_msg_0_2.z = 0.4049010512551554;
    tmp_tmp_msg_0_2.z_units = 7U;
    tmp_tmp_msg_0_2.speed = 0.36665819943890166;
    tmp_tmp_msg_0_2.speed_units = 140U;
    tmp_tmp_msg_0_2.roll = 0.15978682862991;
    tmp_tmp_msg_0_2.pitch = 0.6100461772702955;
    tmp_tmp_msg_0_2.yaw = 0.9398945870274831;
    tmp_tmp_msg_0_2.custom.assign("LBQWBCJLNKNFEJPZQVQOICYZTSUIMEIQQXKXJADLUNLVZKQSYNRGQHMATDLITFMVQZJOGPAAYXBWEJW");
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
    msg.setTimeStamp(0.607282014065402);
    msg.setSource(11883U);
    msg.setSourceEntity(8U);
    msg.setDestination(42874U);
    msg.setDestinationEntity(33U);
    msg.state = 47U;
    msg.plan_id.assign("XIHQDLFAYXKZYVVVIXUUGYUYJWNTHBZAZZCYITJSXPCONLGATEWKLQDJHLMGDWDJRHUKDVHWBJKDGQFUHULPARGZIQGHTNOCZQTNSBBBLADDNFESUDPHVAKLFJRZJONWHEVGKQXMYKMPNXIMFWXHVIOCJPEMMRZCORRQZKNTREDUEYEIPJGLSFOPBBXSCAIMVGMMIYPCOAJWMEXFOEYQPWTVCNYE");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.06807880575559189);
    msg.setSource(18025U);
    msg.setSourceEntity(156U);
    msg.setDestination(61238U);
    msg.setDestinationEntity(244U);
    msg.state = 116U;
    msg.plan_id.assign("CSHLSGOUPBMJGVDXBBCDTQNIQNORMBUNVHOKTXZPMEHPPRVTLBXTZJHYWNPMSCQTNWQUMBESLXUWCACFOJLURKDVEMHLLKZBWE");
    msg.comm_level = 190U;

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
    msg.setTimeStamp(0.8644187858285644);
    msg.setSource(27239U);
    msg.setSourceEntity(190U);
    msg.setDestination(58511U);
    msg.setDestinationEntity(100U);
    msg.state = 56U;
    msg.plan_id.assign("HEHLPNSBOAMFZVJZJLDKTHBVXUIECOD");
    msg.comm_level = 86U;

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
    msg.setTimeStamp(0.4728759807808285);
    msg.setSource(17726U);
    msg.setSourceEntity(107U);
    msg.setDestination(33934U);
    msg.setDestinationEntity(235U);
    msg.type = 93U;
    msg.op = 135U;
    msg.request_id = 13202U;
    msg.plan_id.assign("KOMOXGQXOEIOWHJRYHHLXIZENGNWXZDQSBSGFFVQIOOTOTABRTCUEIXDVKEDQZPJRFLBEWRARNVUWYIMJHREJVZPRPCWLWCKMZIUFSUEVCFLYXNAGZGMKJODNEYHTBFFSLKQKYPUMSACNGEJNGSTKLAAVBVHKFCISQGMKYMWPITDPOBM");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 212U;
    tmp_msg_0.max_depth = 0.7530725436625364;
    tmp_msg_0.min_altitude = 0.5991055546294098;
    tmp_msg_0.max_altitude = 0.38434127448986133;
    tmp_msg_0.min_speed = 0.8195690183471224;
    tmp_msg_0.max_speed = 0.6766706663313267;
    tmp_msg_0.max_vrate = 0.3425604610243751;
    tmp_msg_0.lat = 0.47729488752955906;
    tmp_msg_0.lon = 0.32136078653499733;
    tmp_msg_0.orientation = 0.4873143473625394;
    tmp_msg_0.width = 0.5134921302057558;
    tmp_msg_0.length = 0.08904100469644605;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ULRCERXNFQONYFZGHKMXKASFKSQZLUBRJVWBHLNDUGKGAUVTSEUDMAMNPIJNZPTERHCQGUCCDJUIDZQLHAXBMPYPIGMVEBBIYMVKFADKSMNCMWOJOEERQOCSPXBAKFL");

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
    msg.setTimeStamp(0.5843028708108208);
    msg.setSource(9869U);
    msg.setSourceEntity(114U);
    msg.setDestination(35378U);
    msg.setDestinationEntity(1U);
    msg.type = 158U;
    msg.op = 16U;
    msg.request_id = 23282U;
    msg.plan_id.assign("KIPJWMDYAPISQULCCRSWYSHVZHLYBFPHQBPLTODCYUGBXOVSELSXHTARXLOBPMHNWTEHEMBCKKFAWTDERHXYFVUZUCONEKKPTERBAYVDLJGGBWAMMRMHHDUAYCJGFIUDCMTKNAGRXBJLPHUCLGGZQUCFLPQQNIRO");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("KHGBNIODBNWKPRHSBFVMSCETUDYVCKPFZLPHMRYKOKACKXIXULTMBXNGIQJSMDYQLQBVXCOAGGERACXUWILCACLTCYZOETAWFMTZQFRLXCVZJUTJGFMFYWUOSDZEEJRPNHJUNYXONGZFPSVMMQUTBQJYVHHYLYSBOQHVKDGMIZJSVTWUVELRNRGHSDWQTSENMPTZRYXFLKVAQABKWJEPGGXBOAIDUDOCJNZQIJWRPPIFDOLSHKFBWNAIRW");
    tmp_msg_0.op = 110U;
    tmp_msg_0.lat = 0.3573137855987727;
    tmp_msg_0.lon = 0.16570609726845287;
    tmp_msg_0.height = 0.04882821075375243;
    tmp_msg_0.x = 0.8798515390952203;
    tmp_msg_0.y = 0.6072415638817488;
    tmp_msg_0.z = 0.0859232113239562;
    tmp_msg_0.phi = 0.11592127290874277;
    tmp_msg_0.theta = 0.29362884629187935;
    tmp_msg_0.psi = 0.12907112691201106;
    tmp_msg_0.vx = 0.2962041367889867;
    tmp_msg_0.vy = 0.20417692044132063;
    tmp_msg_0.vz = 0.647619944627552;
    tmp_msg_0.p = 0.1270194097392997;
    tmp_msg_0.q = 0.023073658015704046;
    tmp_msg_0.r = 0.6292950279768779;
    tmp_msg_0.svx = 0.7579962205832463;
    tmp_msg_0.svy = 0.49466155422726577;
    tmp_msg_0.svz = 0.8415195162824751;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EWJQWAXJJPILPDUMGORSXVOJFIZAYNQTPBMTONUZB");

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
    msg.setTimeStamp(0.6348154112777866);
    msg.setSource(53319U);
    msg.setSourceEntity(218U);
    msg.setDestination(34325U);
    msg.setDestinationEntity(176U);
    msg.type = 112U;
    msg.op = 91U;
    msg.request_id = 12471U;
    msg.plan_id.assign("JATQYAPQZIDDFLNPQRHPRGZHRGPMUACSPVLAJOLCTLNECVSZMJPKKCZMBKWNJOHRQEBNYZTKKGAOUSUMZFIFKUMVFIFAKHSRGEDCDTNZKPICTREMQIDEHMRPBETEAPOACCTPQJQTYWICZMMGWAOSGODWESBYREXXOSYUWVFQVTUXJDFYVFYLFXLBWWGKBCYZFHVWMGHXUNIDILWYDXLBTJXVQ");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5736394959101033;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ICRTQJKGUAEBUXTMLRIRUGSOGMMCOUBLHGJIDWWJSGCVWTFHARVDARPNXFYMNAGUVYZQZPNELRFFQGWKXPCDSTRDNIVHZXKJXMAGONJQEULVDLOXQHNYISETEIPAGXYFEAFJIOSHQDYTMDHFSQOUZMSPDJVLFJKWPNWEWYLOYBYTBKKVMOGZBWHZOVTDRNCBEIJLCMZYAKKSRBPCIAPHWDFLSXEUP");

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
    msg.setTimeStamp(0.7076323211747431);
    msg.setSource(64947U);
    msg.setSourceEntity(58U);
    msg.setDestination(5520U);
    msg.setDestinationEntity(155U);
    msg.plan_count = 22619U;
    msg.plan_size = 3975524963U;
    msg.change_time = 0.4526573367868394;
    msg.change_sid = 61793U;
    msg.change_sname.assign("ZGLMMPPTHBTAZDHDRQDOLZHOXOWTZIH");
    const char tmp_msg_0[] = {-88, -65, 73, -38, -10, -125, -36, 57, 80, -37, 66, -119, -54, -26, -118, -55, -127, 118, -83, -48, 50, 56, -9, -110, -8, -6, 85, -48, -32, -10, 7, -58, 91, -31, 78, -24, -18, 70, -119, 90, 102, 85, -71, -103, 93, 72, -21, 98, 24, -30, -125, -19, 50, 61, -22, 93, 114, -11, -22, -88, 91, -9, 122, 11, -121, 32, -44, -79, 3, -90, -88, -11, 67, 20, 43, 93, 115, 36, 15, -112, -97, -42, 21, 80, 31, 42, 126, -46, -30, 24, 42, -106, -98, -49, -21, 43, -2, -97, -98, 47, -27, 24, -91, -114, 100, -22, -116, -42, 119, 101, 112, -81, 112, 97, 42, 9, -15, -44, 111, 46, -78, -93, 32, 85, 25, -29, -2, 102, 81, -70, -102, 118, 110, 64, -8, 76, -56, 72, 56, 60, -77, -120, 67, 68, 6, -25, 104, 56, 118, 106, -86, -6, 99};
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
    msg.setTimeStamp(0.3566701404598195);
    msg.setSource(24156U);
    msg.setSourceEntity(157U);
    msg.setDestination(51968U);
    msg.setDestinationEntity(90U);
    msg.plan_count = 49054U;
    msg.plan_size = 2936079331U;
    msg.change_time = 0.5256531313378702;
    msg.change_sid = 38251U;
    msg.change_sname.assign("GSKDCPGVUSTFOVHZBAWHIEQANRNDWJAMYCHHXGNMOERPVAXJKLOSWHVPDBGDJYTFDTEMRSGYTDEUOXXIXFNZLFBFKYTIXDAIAURUQLLUZKGPDHLWPHCHJZYVJMMLIJNBBQCTQQCNGJKAUNEOZCYQPLZKISVXZAWXGRKIUWFFFGWQNMGLSPEQRDF");
    const char tmp_msg_0[] = {101, -88, -25, -61, -80, 16, -19, -8, -111, -18, 11, 72, 66, 84, -18, 57, -1, 124, 115, -72, 40, 31, -122, -89, -40, -113, 44, -50, 70, -127, 107, -114, 75, -81, -93, -39, 114, 48, -58, 22, -8, -15, -31, -8, -122, 101, -16, 108, -59, -95, -35, 73, 7, 66, 69, 99, -121, 108, 47, -124, 0, -58, 121, 87, 113, -32, -105, -103, 95, 113, 55, -49, 75, -32, -4, 2, -92, -86, -93, 122, -60, 79, 13, -128, -120, 51, -50, 119, -81, -11, 32, -123, -88, 19, 19, 122, -71, -63, -18, 66, 11, -70, -58, -43, 56, -8, -47, -57, -39, -98, 1, -49, -128, -96, -55, -7, 62, 92, 25, -31, 54, -105, -37, 122, 45, 121, -1, 48, -3, -41, 17, -71, -1, -79, 24, 26, -53, -113, -5, 81, -119, -6, -50, 64, -97, -128, 48, -5, -30, -77, 107, 70, -39, -1, 89, -8, 78, -89, -20, 5, -63, 55, -67, -93, 17, -62, 40, -72, -39, 88, 26, 100, -74, 120, 11, 71, 11, 33, -19, -51, 107, -85, -73, -101, -22, -102, -125, -25, 88, 115, 90, 34, 66, 90, 45, -59, -106, -76, -61, -42, 16};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UOPMCTRKQSPWXVBCEWYZZTIFSIBHGYGNXNRQPEPEXHPSUQVABYSOYQUILUCWNZVBAXDVRXXCDVXTKYSHPLOIGEESWJRELIKCOFDTGPALNXVJBDBOFACZIOADRGRUWMAJGIJIWKYFNSNSYAROKKNWQHDQZFLXZMUKXNHYBRMWFCATKBWALCTZMJFONZGTATMQHZHPDGRUKFRY");
    tmp_msg_1.plan_size = 48074U;
    tmp_msg_1.change_time = 0.7784442801493654;
    tmp_msg_1.change_sid = 23995U;
    tmp_msg_1.change_sname.assign("GTNXKMQNPGKXIVMIQLPAGATMXRIKBPLZSSJGOLJHQCTHGLLFVHCYSAZCXXRSEUJBVDKSTYWRTYUVBREGVAAIGYKHOBMWOHQBCIPXVHEDZPOFEYFNTLMOZBAJIGKVUJOQXDUNTSFCFGEWCKYDTXJPHSIKKQRDWRMGJYDAYWFFTAJPVZXNERBZCBLSAWHFQDWUMDQLZUCVWCZOZFBYUFUMHSELRNRSXIPQUJWNMYUDVNAZLIBNRIMJEOHPOE");
    const char tmp_tmp_msg_1_0[] = {-41, 109, -83, 110, 124, -85, -1, -47, 116, 49, -34, 0, -84, 10, -85, 88, 81, -82, 3, -61, 67, -9, -93, -43, 111, -97, 123, 119, -17, 77, -55, -19, -6, -125, -123, 22, 72, 118, 22, -86, 21, -59, -68, -59, 70, -118, -17, 48, -24, -124, 37, 107, -7, 68, 31, 32, 60, 39, -125, -69, 31, 89, 31, -112, 102, -35, 62, 73, 0, 113, 44, -97, 107, -65, -25, 81, 112, 86, -12, 3, 112, 57, -77, 9, 22, -6, -74, 50, 75, 51, -8, 31, -55, 113, 25, -88, 51, 69, 18, 3, 25, 22, 98, -91, 35};
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
    msg.setTimeStamp(0.6334505465588924);
    msg.setSource(49901U);
    msg.setSourceEntity(227U);
    msg.setDestination(32992U);
    msg.setDestinationEntity(88U);
    msg.plan_count = 25475U;
    msg.plan_size = 3652872879U;
    msg.change_time = 0.5600851264123211;
    msg.change_sid = 46193U;
    msg.change_sname.assign("NBFHVCSSDGOTJZNOTPXORYRULNGUNGVZGDHOQWSCMIIMSIMQCFYEFUHACOTWEAMDLLJVKXBZJJIQYAMCAWJWHJYZBAQCILATQQRMTXBCGVHUNKKRSOJDFVY");
    const char tmp_msg_0[] = {-112, 108, -97, -10, -58, -126, 15, 111, -82, -53, -8, 33, 61, 106, 47};
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
    msg.setTimeStamp(0.5683720774762837);
    msg.setSource(24466U);
    msg.setSourceEntity(100U);
    msg.setDestination(3903U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("CFSYCTEKZFAUNYAKAMMHQPTEDXHDFHHHGIBVETUMQBNMLTRCBJPSKYLCSRZRKMCXTEOYBGWJEPLSKBVDMCVSHFMFDHDCWODKWCZEGKKBUGQZJHRTIBGUUOUMNKZNYHJDTJVOPNXBRIDUTFUXYZF");
    msg.plan_size = 44303U;
    msg.change_time = 0.9195016501064148;
    msg.change_sid = 32902U;
    msg.change_sname.assign("DNCZJAMTDGXEBPPZVYIHGVRPAMCGNOINVHMOPRQCZTFLRHYMLFUSLNIXYDHUGXQV");
    const char tmp_msg_0[] = {28, 82, -33, -46, -4, 80, 72, -125, 15, -66, 116, -62, 21, 32, -11, -35, -77, -114, -95, 16, 96, 112, -15, 38, -11, -49, -50, 78, 15, -102, 83, -82, 64, 30, -1, -119, -3, 45, 2, 6, 51, 45, 91, -87, -20, 124, -84, -117, 40, 95, -31, -109, -42, 40, -89, -60, 69, -37, -87, -12, 68, -63, 25, 100, -33, 47, 116, -66, -78, 107, -28, 90};
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
    msg.setTimeStamp(0.47762708311907887);
    msg.setSource(49005U);
    msg.setSourceEntity(150U);
    msg.setDestination(4485U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("KCYVAERTJVERGZWQFLIOXLPPMUFAJRXFRZPOLJPZZEADQGTVHBKJFYRHDAMVYRTXSUVYBMXHTSNRISOIZUEBRDOWXXPCUNVNQDECDCCSZQPYANWSIISUBQWDUTFGANCHNSMGULHN");
    msg.plan_size = 40142U;
    msg.change_time = 0.09149104282292242;
    msg.change_sid = 1230U;
    msg.change_sname.assign("VVNAFLXZHSSNCGBWLWAQYKPHOSTZOFTGAHYJEPQTNFUQFCSYDKPHXRQCEMAREBSSAIHYDPJT");
    const char tmp_msg_0[] = {-45, -100, -55, 122, -79, 104, -5, 2, 107, -67, 72, -79, -126, -40, 95, 77, -18, -80, -99, -50, 51, -107, 73, -25, 4, 60, -37, 120, 5, 42, 56, -49, -120, -86, 97, 52, 21, 9, -31, -127, 1, 35, 108, -58, 88, -36, -83, -41, 13, -109, -52, -48, 96, 0, -115, 117, -63, 72, -87, 89, -23, 103, 84, 78, 69, 23, -93, 101, 3, 62, -128, 22, -58, 102, 9, 21, 38, 113, 51, -121, 38, 76, -97, -92, -101, 125, 111, -40, -110, -13, -33, 7, -44, 9, 105, -16, -82, -80, 28, -42, 45, -9, 64, 40, 110, 113, -65, 66, 107, -110, -101, 96, -42, -17, -74, -96, 118, -30, -58, 24, 38, 26, -92, 25, 87, 102, 110, 93};
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
    msg.setTimeStamp(0.5568396255962001);
    msg.setSource(45057U);
    msg.setSourceEntity(230U);
    msg.setDestination(28548U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("YNIADWEMVXOMHBGZMFNLXGNCUHXYINQLSFUWAPRFOCVOLCZNQRAREOLKVKYNFVBJLWQLSPIAMHMDIXMLGBKJ");
    msg.plan_size = 7830U;
    msg.change_time = 0.47466255037907945;
    msg.change_sid = 53243U;
    msg.change_sname.assign("JZXVMGEPYLMZJSTRUOQTYAEGAWHFZTUVMDLYZATSCTUOWWKPUIHBKNHCFZYOKNNWYUQGLEVOBMEAWUBUQENQDPKYQRBKIQIQRNNCTJMWKMDSUIOCFKDVXXIXQMTOSDFFNCJPZDPBHJVCPVFEVVSLGWYSHSDCHIIGVRHCBRNHGAZLIJKVPZDEFANOOMSWBXBAIGZQNTRCDBJYDASJLOXHXLLBHIARERUXCLTESMPMOPWY");
    const char tmp_msg_0[] = {102, 120, 21, -104, 13, -80, 56, -15, 84, -36, 1, -25, -108, -55, -123, -90, -122, -27, 45, -96, -78, 28, -104, -112, -98, -98, 53, -20, 115, 42, 17, -113, -112, 16, -65, 65, -124, 107, -22, -115, 105, 26, -123, -11, -13, -127, 21, 122, 117, 1, 32, -103, -59, -94, -1, -9, -28, 83, -88, -119, -111, 118, 31, 46, 75, -89, 67, 101, 116, -11, 59, -60, 75, 35, -31, 39, -61, -56, -65, 93, -38, 95, -29, 73, 80, -35, 27, -79, 90, 38, 5, -104, 87, -48, 34, -69, -45, 81, -1, -67, 101, -21, -61, 12, -89, 23, -119, 114, 43, 120, 84, -42, -34, -85, 9, -52, -64, -17, -52, -9, -39, 112, 75, -100, -29, 29, -58, 1, 103, -12, 56, 22, 101, 125, -57, 60, -118, 108};
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
    msg.setTimeStamp(0.3077060687173474);
    msg.setSource(15764U);
    msg.setSourceEntity(108U);
    msg.setDestination(12205U);
    msg.setDestinationEntity(106U);
    msg.type = 57U;
    msg.op = 164U;
    msg.request_id = 34177U;
    msg.plan_id.assign("JEPWOQMQIOTTFBDEGPBOGBSAGDRORXUDFKCUXDDGMPXFZYYMPCARZGYYVQYFRXJZDPLMBEGJXJQZMIHAEKYVMVOWHXMFOINZOQQHHEVIEONSCMNJVWWMTITXGCQXKTNZRTLKSYNKEEIUNB");
    msg.flags = 31932U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 46823U;
    tmp_msg_0.lat = 0.23530746631708455;
    tmp_msg_0.lon = 0.9500226468212619;
    tmp_msg_0.z = 0.5662797384896817;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.pitch = 0.7070300289298898;
    tmp_msg_0.amplitude = 0.3406373016060752;
    tmp_msg_0.duration = 58747U;
    tmp_msg_0.speed = 0.3595286837628697;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.radius = 0.030854775212662444;
    tmp_msg_0.direction = 80U;
    tmp_msg_0.custom.assign("QDJWTNAWYLZCXVGRTXWNYEDLLFFWQVFUZZANRWYJWIHGNEODRNTUYQXEKAEEBHMPCKIFXTXYQTWHMAOUKIMGSOIVCSOVIBOUX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RNSIGJTODKVQTMMEVQJUYPBRIKKUGYZNFPFGFUCCPAMLNOVSNGQKMHAKDFLFTIQQBEOARCLMTOXDMKRQHCDODPWPEWYHJWWZNZMSQACHUXJOVIASYHVSLFXCBFPIAELHBMWFCEUHEQNZZDWZQJRHYGMBDLFCVUXCMJTWSXCXVYDREOGWIXUJTDJUQKRYRXZRUBYV");

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
    msg.setTimeStamp(0.4142028449598747);
    msg.setSource(55222U);
    msg.setSourceEntity(190U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(124U);
    msg.type = 187U;
    msg.op = 120U;
    msg.request_id = 61520U;
    msg.plan_id.assign("UBULSUNWGTMKGXDJAMVOAYQCXFWXFZPDMCZZRQVEJIWXVOZTDWYPUZHGUZMIFPPGMJYNNKSFWYVMUWKBKFOESEKCSEUVXHPHHAXSSPORNRPAQLVHAYNWYOICTVHEREFSKV");
    msg.flags = 49790U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.10942997354667905;
    tmp_msg_0.start_lon = 0.11916957485109791;
    tmp_msg_0.start_z = 0.5321116233820902;
    tmp_msg_0.start_z_units = 158U;
    tmp_msg_0.end_lat = 0.5576869736671982;
    tmp_msg_0.end_lon = 0.6412498189578494;
    tmp_msg_0.end_z = 0.6670990829122602;
    tmp_msg_0.end_z_units = 65U;
    tmp_msg_0.speed = 0.7537346351556095;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.lradius = 0.5147813513328446;
    tmp_msg_0.flags = 207U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NXETUUCLLRLFSHMEYOHKKZXXXIQJRIDFZRCQMWLFGZQJBDJLNJJSVAUEOIMNGCEOGVTWNKJZWYKREVWPICCPRVACDHIWXHRKPFEXNIWLTBIA");

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
    msg.setTimeStamp(0.5690445696315668);
    msg.setSource(5381U);
    msg.setSourceEntity(233U);
    msg.setDestination(9953U);
    msg.setDestinationEntity(153U);
    msg.type = 128U;
    msg.op = 69U;
    msg.request_id = 56162U;
    msg.plan_id.assign("WOLNRKWMQLJSRCJHLIBCKWCCZMQSWPDYHFQAXYBEUXVEWFEXRAFSPURIIYOQLSWFCXDGTMWGIYYYEYVACBBJBWXENDKMIGNQRXRAOQJAZCHUAMZNBYSVDOFGASDITXPJDYUQGVCKKGOWKKGFPJTVTHDRGXSVENHPDRTRJJXTDZEETVNMNKVOSKWGMEDCNJ");
    msg.flags = 42693U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.28789621251303465;
    tmp_msg_0.type = 130U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LKAVXHMZZWSBQIWHUNTMLTXDBTHYNIFXRUJZGMXQVRDZVJWIKGMLASOCJHQTGUDMRYFOJCRNNDIHVWNZYWXZCBBNUASRUFJRQOHZHEBVETRXWIVXOTWDSLHBCECNPLMSAZPPKNKEGXVUEMAKDVTLWUYTLQSKIXKPMZORPAOGQBFEPSMDOPKJCTEMOPOFQAQEYGILAAWJYDTSEVPNSRFCUSGUCLQFGGKXPEOZUBIKABJDHFYBJCWNIFCYYHJ");

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
    msg.setTimeStamp(0.44470226202699736);
    msg.setSource(44609U);
    msg.setSourceEntity(211U);
    msg.setDestination(60245U);
    msg.setDestinationEntity(111U);
    msg.state = 191U;
    msg.plan_id.assign("XMIRWDFEWPYEPCIJYBUKESMDYRUOAWDRVYOPJMYQBZVYSQFHGLIGVNDGXHSEOACTFLZBYSZWRGQXQRDKZKEKHBMRKVUPNUOJNVFVGMABYIENLAGTVSPWGXDMHSQJNSRDNHTHXQBLMXELHTAHPEVUITIPVNDYIRZNOQBOYHTCZQWAOXU");
    msg.plan_eta = 153315048;
    msg.plan_progress = 0.8089974966232447;
    msg.man_id.assign("PEJTCZTKUGBLWPXMZNWBVBPGAACQVXBPYFXJHJMYEAGMCHXHOOGKCOWTDNVKGHBRFHCGULOLJSJDOZASFPYHRWCYFHHUFYJRKAWDRWMANEJBHDBGEQVWVERNNFOBLTJYVIRQTGWSKZLSLVZJINIITSMUCSNTQWZVSZFJONPIXIQZAUCDLMOKAPBMKTOILQIDXZPLRYLVAXEMESQKANQXSTDRCECNUXPUOBMEWEHQ");
    msg.man_type = 38691U;
    msg.man_eta = -1130827668;
    msg.last_outcome = 234U;

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
    msg.setTimeStamp(0.8664257794844129);
    msg.setSource(23552U);
    msg.setSourceEntity(241U);
    msg.setDestination(36488U);
    msg.setDestinationEntity(242U);
    msg.state = 98U;
    msg.plan_id.assign("LYMCFRKWYFDWRPJICAEGJKLHYVQHSHRQDOHGNFDRJKDVXMBIJGYBOCAXNJHBRPQMCUXZYUEXLELXMTWEQBKGNTNJGINCXCSEINSNZPIUBLJMQBTSTKXZHYJFLEHOTSUPOUTIFZMSOFNVODTGOTAABHSBEZCDIZHRFYVSMVUXIDMUHGAMDAYPJSAPVZQIAWRJWEOYNUYLOILBQPZVKLFBX");
    msg.plan_eta = 666853966;
    msg.plan_progress = 0.05624349702285192;
    msg.man_id.assign("YHBTLVDEDCYSMKHUFKOFVRXRGNWAHUWDBTQCASJIYJSWCGCZOPTEHMCRDGKIWXPMBOLQZQBOKFKRZGBHDMHRNCCBNSDVADRSJGQIVJKEHFGPNTUYZKYOARNSMVQBAADYPXZLJEAEUOPELYQMSXRUPIXJIQXNZLALUOIAGTPIWMZWWLXUWQNNPOJCETHHFFIGOKYSDQRUTMTIMZ");
    msg.man_type = 6537U;
    msg.man_eta = -1899855731;
    msg.last_outcome = 109U;

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
    msg.setTimeStamp(0.5906535638407031);
    msg.setSource(3098U);
    msg.setSourceEntity(85U);
    msg.setDestination(63863U);
    msg.setDestinationEntity(46U);
    msg.state = 171U;
    msg.plan_id.assign("OGWAYAXBUJZZMGWIXOMLZECYXTCHCZHMSRNKRLKNKSHPOWTMVMFLFDKJACNXKCCLBYSFUTEBMMJEBNRSGPDXULDHCDTLVQLXZBBTXAJQANNWYWDWYABHRDOVITHNEYDSJUTQVKSNVWXAAFUJUEOCMHJGEEZVVIVROVMDAQSNRVFECPGQKP");
    msg.plan_eta = -2082838351;
    msg.plan_progress = 0.8814286520627794;
    msg.man_id.assign("XSOUUICJXKBYRJGXNYRHUBIHRQISKTUYYMHVPFCKKTDZ");
    msg.man_type = 32787U;
    msg.man_eta = 229600554;
    msg.last_outcome = 81U;

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
    msg.setTimeStamp(0.0713901875887254);
    msg.setSource(6163U);
    msg.setSourceEntity(114U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(4U);
    msg.name.assign("GPDFJRRXCUMOFLXQXCFYGHAGCOAYIH");
    msg.value.assign("XYABKECNRBZGOYVZTTOHMQBSVZEDPSSJAFYELNUGMEPDWGKVIEXLESXEQLHWDJKPMKJRTVRAFFNUDXQIMMCLCKQILVTOCKXOOJLSMPPIWQVRTKPDHNTFZITLRWYFANCRHGIIGHXQUFHBXLWWUSGFACOMWJHGZUNXVLA");
    msg.type = 210U;
    msg.access = 104U;

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
    msg.setTimeStamp(0.9619596270319667);
    msg.setSource(61190U);
    msg.setSourceEntity(174U);
    msg.setDestination(9091U);
    msg.setDestinationEntity(233U);
    msg.name.assign("GDQHKFKSNT");
    msg.value.assign("PCTHHOXPVEJFPCMFHLMDJXKJXGJKKHZYQFSLPYWMNSDEFHHVLSAJBMUJXORALBQJRDWQOKZGFUIWTENMAUTJHBMZGXUMPCXAPYKJDBSEKBSPMMDLMENOQEVWCGNNZBAYOFRZIFJGWUAOXAGUEGTTSYLXVKOIFTYGWCOPHWGVRYFKVIQLCEZRICZ");
    msg.type = 98U;
    msg.access = 167U;

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
    msg.setTimeStamp(0.2131090623752787);
    msg.setSource(45302U);
    msg.setSourceEntity(80U);
    msg.setDestination(50972U);
    msg.setDestinationEntity(125U);
    msg.name.assign("YQXJPCBAGUMNGCFBDKZCDHRXNWESIQCFSLFPG");
    msg.value.assign("KPFCRPCWTJFTAWZBISTTHVDNJTLAXQKXNWXKBMPEHOXLDSGYIHJVFKQGXCDVWUAQUZXCVERKGGOTPAUOMJELKZVUXSVCCWIPBIPJRBENNHAMEFYFAOLWMDSNBMDGZVCYULMZSEDOJXQHDAMLSUSYYRJQNYTFHDMBYZDGLGRIJSFWQOGPWPGJUCGEELZKNAJIBQPRRNSRBWLYOMZNKHTOLDMUKQINVZEBIUYOTQVVXHIFZPX");
    msg.type = 60U;
    msg.access = 94U;

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
    msg.setTimeStamp(0.6145751215161095);
    msg.setSource(62585U);
    msg.setSourceEntity(248U);
    msg.setDestination(8201U);
    msg.setDestinationEntity(162U);
    msg.cmd = 237U;
    msg.op = 233U;
    msg.plan_id.assign("TXZCCPYCBSIQZTMXNAQVFGDOFWJKORLLWVROYIIXTOPMQJNTGLRHWPAZFMRRDSYUYRLMJUZVOFTNAJMEBKBSHUKFHZVNKAAVFVUKPIALYMGLGWKWZZXJDTDSPJRTQBCNNYDLTFJTEK");
    msg.params.assign("ISAXKXEOKJNEBHJWNHDDGWXSJCXXIAVGGDCIRHHAXMHHBYWOGUSGJOPDNXTKRYCAZUAHYAQVVRUUFZVUWZQBVZWJWLEKFCREGMTMEJYCCDNISNSGKFQTXDZFSQLBDOUMEQTNOCOIJTQYYFSQQDJMFBZMFMLJURNHLBBZUENBOWVIQPPLPYSQIIWVRVMLPLOTKGZNGPAPAEPKMHHJBTTKXSMVSWXYEUKDAZFRUYDPGRTLLPNRBCOOVEZCWTK");

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
    msg.setTimeStamp(0.16830079542963894);
    msg.setSource(54478U);
    msg.setSourceEntity(126U);
    msg.setDestination(44005U);
    msg.setDestinationEntity(1U);
    msg.cmd = 215U;
    msg.op = 179U;
    msg.plan_id.assign("CDCUOEGZSMUIDYHFWYDMHUDDBHILHPPBUTLDNMAEEQKELRTSFYKWYIILZMZRKJC");
    msg.params.assign("BLTDDDWQNUGNXXJKOLJRSEWEESOOCXTKOKBCDGPVHHYIYYBTNPBPRBUFCFMHZDPNMIZXEFQPHUTRDFFMRTXRWJJRJNGZMASUZOJCIATGYXYHRPPRAFLLQCIQBZGTREIIAJEOYDAKXLELNYVMHAVIWSLYLQPNSFGSVODWWCZVAEDUMHIVQSSJKIBICJKZSTQQVUUVXDWTUAHRGZWOGVLHLJBOKWZGFBNMPTFAQBGFECQYKMWUHEPNNMZM");

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
    msg.setTimeStamp(0.6172799712570103);
    msg.setSource(9551U);
    msg.setSourceEntity(239U);
    msg.setDestination(25962U);
    msg.setDestinationEntity(92U);
    msg.cmd = 182U;
    msg.op = 135U;
    msg.plan_id.assign("CYTCJMKUKSZRAKJPEBWWJMWEHDYNWOMGLTKUMPCYKDXACMLOUVTEWRNQOIJRSPBILZRSZPAVABSKOQNMFXSMBVFGALYDSTZXHVFVJMZHXCFOEQYCSZOYBQVI");
    msg.params.assign("BVXQQGCMORTGGDGAUOUVZTOQBYNKJRHZWMBYIPRRKMEMWRVETSDVIXLXJDZPCMCXHFDTAVCZSEKWGPRMTDAICBWMAHKRFKSSGBNAECBUFNSYLEVJFVZGUEJJCFAIPLAJTWKEPPZGDQDJMOLVRIHNLIFMNPZX");

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
    msg.setTimeStamp(0.70971057598847);
    msg.setSource(14337U);
    msg.setSourceEntity(173U);
    msg.setDestination(60936U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("QTVJDMPCPOUTHRBTGCZPFGNZFZFNCJWXLGDKNKSNEODHLRMGZEZYDQTZUEVIYLXYULUNBTKWPIIEPWZOYSJSOBEWMMUATOIIGA");
    msg.op = 43U;
    msg.lat = 0.0003473643547147187;
    msg.lon = 0.09424377474143408;
    msg.height = 0.7495131735640164;
    msg.x = 0.3031081159419078;
    msg.y = 0.2934019814487815;
    msg.z = 0.1852659567210838;
    msg.phi = 0.1369239677870313;
    msg.theta = 0.042512660764911336;
    msg.psi = 0.9242513554188103;
    msg.vx = 0.6401534304475872;
    msg.vy = 0.8898017874130626;
    msg.vz = 0.8851415452646798;
    msg.p = 0.5205632080750064;
    msg.q = 0.7524015624763533;
    msg.r = 0.6987896070791058;
    msg.svx = 0.3183884869478105;
    msg.svy = 0.17085706576870718;
    msg.svz = 0.9087968474614154;

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
    msg.setTimeStamp(0.39446790823201505);
    msg.setSource(60861U);
    msg.setSourceEntity(69U);
    msg.setDestination(50256U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("OHTCTXIFTPNFXKKKEOPTKFYGYJFQWSXIMHRRKPDVYSFRRYHIVUZWIEFBWJEYEJT");
    msg.op = 128U;
    msg.lat = 0.5195074549725789;
    msg.lon = 0.8462383214088305;
    msg.height = 0.5773077700079051;
    msg.x = 0.36544310892397236;
    msg.y = 0.7835252893213791;
    msg.z = 0.8799304463939635;
    msg.phi = 0.6724275247614013;
    msg.theta = 0.6662464384383286;
    msg.psi = 0.045164422464257115;
    msg.vx = 0.8226752243173844;
    msg.vy = 0.7230428658477503;
    msg.vz = 0.44274919066775176;
    msg.p = 0.9048497551118679;
    msg.q = 0.781764468745578;
    msg.r = 0.5476990958714586;
    msg.svx = 0.10341041350359448;
    msg.svy = 0.7530193252418272;
    msg.svz = 0.5049639808692566;

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
    msg.setTimeStamp(0.2640462704987405);
    msg.setSource(16166U);
    msg.setSourceEntity(124U);
    msg.setDestination(4016U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("ESGTOYJNIDDZXCHXDYKFPOAMQSTJVGZYLRZLFJNIDBBMHAVOMXCGEHEDYYHTWULUAZCWVPZLDKKTJCQ");
    msg.op = 59U;
    msg.lat = 0.06337362387127843;
    msg.lon = 0.26419127167543377;
    msg.height = 0.7526706005451137;
    msg.x = 0.5217732004484277;
    msg.y = 0.2274818102127696;
    msg.z = 0.7384638004034444;
    msg.phi = 0.8024494972895387;
    msg.theta = 0.7079380645939058;
    msg.psi = 0.8696544643093408;
    msg.vx = 0.741218963773895;
    msg.vy = 0.3353701474146661;
    msg.vz = 0.06999353351875892;
    msg.p = 0.4820266675417234;
    msg.q = 0.3414530886224061;
    msg.r = 0.13863873105392532;
    msg.svx = 0.3669366114709477;
    msg.svy = 0.9843072772643028;
    msg.svz = 0.5571007044005521;

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
    msg.setTimeStamp(0.9966964927632117);
    msg.setSource(7605U);
    msg.setSourceEntity(147U);
    msg.setDestination(36846U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.3199150952452884;
    msg.lon = 0.42675120010551415;
    msg.depth = 0.016073439555195912;
    msg.roll = 0.8114004508578646;
    msg.pitch = 0.5660949058503527;
    msg.yaw = 0.012048853201000798;
    msg.rcp_time = 0.9762850521103836;
    msg.sid.assign("ALJAXIBPIBPDWWSFFOGKQNDFPEOATNOAJYYWDSVUOMRRWTBODERXDEEIFGXMDYIHYZTRFTGPEAEPQXHDCBWBLAFRKUHJULJQJKBXESZHDILCWTWIVHOZGLPGCRWHQSWAVQMNPZJOUVUNFCNBZJSASKZRFMLAQZQXBKHJNEOZSCVCMI");
    msg.s_type = 113U;

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
    msg.setTimeStamp(0.3506563994470909);
    msg.setSource(54091U);
    msg.setSourceEntity(180U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.6292200588939499;
    msg.lon = 0.09780146563103098;
    msg.depth = 0.9740411129747717;
    msg.roll = 0.36885158048175193;
    msg.pitch = 0.8642578289695245;
    msg.yaw = 0.11993062561833645;
    msg.rcp_time = 0.25625464401059894;
    msg.sid.assign("MZWNPBRTLMNSNZDIXYAKVFYDLULHRMSBGUYVIEUWOWSGNFQUQKOQDRHHLEFCPIGE");
    msg.s_type = 143U;

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
    msg.setTimeStamp(0.39953947427569614);
    msg.setSource(27044U);
    msg.setSourceEntity(97U);
    msg.setDestination(39776U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.8494528798647822;
    msg.lon = 0.3253212042010457;
    msg.depth = 0.20909564018493598;
    msg.roll = 0.3291506113949092;
    msg.pitch = 0.9334432742402433;
    msg.yaw = 0.6020537270749317;
    msg.rcp_time = 0.9608210870049321;
    msg.sid.assign("AITFZBWTZATZPJMFQPPASKZNANCQMAQPGKGTSCSYTODKZCIWIVRJMCZQUOYGOFHTQAROHCIPRHCEVCOKQXWWPWDYKBNCUVHLLBNQVUVDVFNUUYZJQ");
    msg.s_type = 197U;

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
    msg.setTimeStamp(0.5032944744924724);
    msg.setSource(14738U);
    msg.setSourceEntity(134U);
    msg.setDestination(39855U);
    msg.setDestinationEntity(239U);
    msg.id.assign("NSFWHDPZUGUERIACRFVRFIQWBOTYLXUPGJAMXIMIULORLZOJMCDBEAROYSOXHNZEBPBLUFICLESQLDNOIIEKSGDDVPWJXXNJDQKHJPYSQYYKYATJCWUVSRJCCXQRTZJSNVWKKVSABGVHMNCGVYMMMMEODEHATVTVZCPGFSZNUWERUHJOXX");
    msg.sensor_class.assign("RZAQBIKDUZMDATZOTBDJTJMNVMOWCDSRFCPGVLJIBLOOMLXIVWATJXGYTVLIXQJGCKGPMKWZFDYHBDAQNLFJYCAHXUZQDQWYUBJTKYKPUNMRHCFPOKPKEBEWHMNUFCSTCXVEMURZTEGFTOACORIHRXLLCFEUASXWHKENSQBOTEIVGRPXYER");
    msg.lat = 0.585520133846521;
    msg.lon = 0.3042535941227881;
    msg.alt = 0.9739113260205362;
    msg.heading = 0.761580420283507;
    msg.data.assign("PAFKLNUGMUTEDTDPIIXBEHZSSIULRJFIDMQOXLGNRDHBQQXDDNASNZRBVZUXMWONTKYTVRGKGMEUOFCBAVCCPNAXDHCBCVEJZXZZFUYVGSWXYTUJHBLEGARKPUBYDQOINTMLZRVEQHNGVTEJWBFNVFZLMQGOPZSGCLIFSMJWQTEHUSWHOLTCBLIKOFMUDWIHOWJNVOMYABYCVCRJARPQXAPLJFYSYJXKDYXAIKKHWRMEPWOKSQSZKCEPHYFW");

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
    msg.setTimeStamp(0.4031252517366326);
    msg.setSource(15860U);
    msg.setSourceEntity(241U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(134U);
    msg.id.assign("ZLWRJGPEVYNKDSQYD");
    msg.sensor_class.assign("EMYUSJWGGQFLBGEZHVZHZAARYASNMTTPMVDXDPNKKNDOWSCFWEGHBXYLBMUKZTJUAQSYWNEIBLPEVNFRDLXJR");
    msg.lat = 0.11330195734358561;
    msg.lon = 0.43387042846102064;
    msg.alt = 0.9076692988231778;
    msg.heading = 0.362571644644643;
    msg.data.assign("TZKIYLMYQUIKCFNWAFYERTPQBAFVVNUPNJMVTNGMJDTHEAKUNDHLHUWMJTAHBDCGXRGONOTGLSDVEVHHEYZCSRFPXGHEZPIQBLNECOBDYDXYRMMIKLYVIRKJDPJAWSAUUFIFOIWSGEKLPXCEXEEMATHTFGXRBGMWJBDQLQYJUVWVACI");

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
    msg.setTimeStamp(0.210566603480985);
    msg.setSource(4479U);
    msg.setSourceEntity(145U);
    msg.setDestination(39704U);
    msg.setDestinationEntity(232U);
    msg.id.assign("HMHODNAJVMKMWNFJPQYIAMZSBJTAQDTAZOBKLRGNCSIXXUQSKEAKCHBWQGFPSYWBGLOBYJGCZNXFIKWOLETEPPDCNPMTRSAMVNASRWGHJSXXMOTZDKZNMEQDKDYJDFVFYCTUBUCIZKIVXPVEQHMISEGXZQUSJMYKXZYLHEWQRRVPEZJGRYTUJUUCIFFRYNPBTDKWCLHCECJGRWGWIAUTPGVFLLRBXHDBFQUOAAQBIINVNWZSLPV");
    msg.sensor_class.assign("CPVJYMWRRPBKPOFDNXVRZPFWTXESVHHKDSAYEYQLCOELZPKGULZZXZSGJTELOJUBFHEJHWIFLNAGNLYWUAPXBXWQHNVQYQDVDMOUCDKTUWEWA");
    msg.lat = 0.9840584536402218;
    msg.lon = 0.8041611411890598;
    msg.alt = 0.8544405684015002;
    msg.heading = 0.2740117776436014;
    msg.data.assign("CUJVIABGAUFQEOTSQROHATPNFMZUTAJKNBXREFQEKIUGFGPXBWLXFGPTJDHLGZURJWBCRAMVOWDOMTXXOZHSFLDOHNWMTORHWCYWWAUDIKUNBDYVQLVXLPMOYFQLCIZBKQHRCULLKHWKBWDGTMYCYGSVEVJSBQIZPVQYBXEIPJPDASJHNPZXEFZBMMVNHINJF");

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
    msg.setTimeStamp(0.05079919905739949);
    msg.setSource(11133U);
    msg.setSourceEntity(29U);
    msg.setDestination(33043U);
    msg.setDestinationEntity(36U);
    msg.id.assign("UFTZKEXWGUROCKJETZTKKHDYFJSZGRHOLJXBKZJPDOUDCAHWYIRJNNZTQSGKVDFRWNAPXNOVMGRBVWPNJYSZQMNHQWGPDLVELRUOFBPMXSLMYKBKJEAQAARPVDXNLJBUTHYDLCOXGQCEQHMSLZPUNFEBCPRAPGVTFAROMIXGZI");

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
    msg.setTimeStamp(0.8509278241326294);
    msg.setSource(10020U);
    msg.setSourceEntity(112U);
    msg.setDestination(44073U);
    msg.setDestinationEntity(79U);
    msg.id.assign("HSVIYYOAYKRGPQQMGHZFPMKHCAKHXEDYUMKICAZTAHWIWKBDBLUSFVQZCOEQPUGXNFSEFYBMTROLNPMTPFQKDJSURWSJACFGEUTCDGJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IRHRYXDVGTGNEOQMQUVYGWPDOWHSZDTKYVEFWXEUCFQWCNYSBRXUNIUJLJGSGEMCWYOKDQVLFVG");
    tmp_msg_0.feature_type = 211U;
    tmp_msg_0.rgb_red = 65U;
    tmp_msg_0.rgb_green = 194U;
    tmp_msg_0.rgb_blue = 16U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2252735407185369;
    tmp_tmp_msg_0_0.lon = 0.641364738818573;
    tmp_tmp_msg_0_0.alt = 0.3664532135601368;
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
    msg.setTimeStamp(0.6288429468826094);
    msg.setSource(10245U);
    msg.setSourceEntity(101U);
    msg.setDestination(25510U);
    msg.setDestinationEntity(18U);
    msg.id.assign("YZRNICRYMZASZGXCQNQAUJWTDGNJLJPKIRKUJSXVHDFSGGPFJLDJHDSPOGMWXTRAHNBYAZKKEBAFLTFSWQMVACQDGGSBXQNFCWXIVZLJEOSFRKNSODPSLTOHUOPUEZIVNRVCOFOWIYBMWQKAQPXCCOYZZFVTIEKKDMEFQVCLGQUEYEXC");

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
    msg.setTimeStamp(0.8244366656643144);
    msg.setSource(38788U);
    msg.setSourceEntity(70U);
    msg.setDestination(52179U);
    msg.setDestinationEntity(108U);
    msg.id.assign("RJMJGGZDWCSKQCWH");
    msg.feature_type = 4U;
    msg.rgb_red = 11U;
    msg.rgb_green = 142U;
    msg.rgb_blue = 216U;

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
    msg.setTimeStamp(0.4439923909835437);
    msg.setSource(3982U);
    msg.setSourceEntity(237U);
    msg.setDestination(34491U);
    msg.setDestinationEntity(47U);
    msg.id.assign("KLWXPHSLVLXYLQBICZICIFPPTLSCEXAZZOTVRPHXOVBSRVSDNZKTDOUDKHWBYAQTOPMYHYGBKMFXJQSCJIFLUGSJWHKL");
    msg.feature_type = 195U;
    msg.rgb_red = 215U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 125U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5670122213496357;
    tmp_msg_0.lon = 0.7217718230416603;
    tmp_msg_0.alt = 0.8190616951748605;
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
    msg.setTimeStamp(0.43057190098707065);
    msg.setSource(7926U);
    msg.setSourceEntity(199U);
    msg.setDestination(13362U);
    msg.setDestinationEntity(212U);
    msg.id.assign("BGRSEIYBRJVTAUZLKUDHBCFHAUCVQYOMZCNDODSFKSWAHJKLZZIHYCMHOXVBLTHKVKYKERTUTVTJAQNPHEJDPXKEHDLJJV");
    msg.feature_type = 176U;
    msg.rgb_red = 138U;
    msg.rgb_green = 118U;
    msg.rgb_blue = 13U;

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
    msg.setTimeStamp(0.3101013012340188);
    msg.setSource(42805U);
    msg.setSourceEntity(86U);
    msg.setDestination(476U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.12061475766418617;
    msg.lon = 0.6315363777601843;
    msg.alt = 0.6420827930724279;

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
    msg.setTimeStamp(0.3167994496893308);
    msg.setSource(11615U);
    msg.setSourceEntity(43U);
    msg.setDestination(8966U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.5847498234003012;
    msg.lon = 0.01137185274073682;
    msg.alt = 0.7835225376659402;

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
    msg.setTimeStamp(0.15927483828105582);
    msg.setSource(8208U);
    msg.setSourceEntity(200U);
    msg.setDestination(21517U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.041737936763183936;
    msg.lon = 0.014424515854075781;
    msg.alt = 0.47186340703216423;

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
    msg.setTimeStamp(0.5341082651142708);
    msg.setSource(16618U);
    msg.setSourceEntity(97U);
    msg.setDestination(45354U);
    msg.setDestinationEntity(83U);
    msg.type = 102U;
    msg.id.assign("TLUKIJVZYXZEMXZXROLMONPMCCUKYGTFNAXDOXQOHBHFNNFKPSCTEJEYPXFTFXDODOADMQTJEFXMPZZWZAKNAHHZYCAAVIUDXBURKBGSDUAUWCWLBLWICDGEVHZFJHI");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 239U;
    tmp_msg_0.value = 0.7097752365544874;
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
    msg.setTimeStamp(0.9724504149280997);
    msg.setSource(60474U);
    msg.setSourceEntity(172U);
    msg.setDestination(743U);
    msg.setDestinationEntity(105U);
    msg.type = 125U;
    msg.id.assign("PNFPJJIKBHGRPNBPELIZISYGOQCNGYFQGQUQMGEXVMXRAVHWIDVYBEBWBJAXFOKUWNQCPQWOUUKSBZZUDHXCZRHWJTPQHDJDJLEIJTPXCBLODPGMTBMLKRAKAHVVODHTGBUGEEBNXCWAYNISZCZERYKJSXKHFJUXFRFKLXMNOUO");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 122U;
    tmp_msg_0.text.assign("TDFQSVXWLDSBJZKZRLOWLEWVSJEHNXDNCCCYACPAKUAUYOWSNAJZTEZXMQQDZJMGCQQRRTFCBLRHBZDBFPTIIZOXMCUDOGQKBYNGZAGRHPCFYWTHPOHSMITPGASUNFBJGWWKUXKRETRJMFABQVHMDUKTVRIIWEMIVLKJYPNVUELSIKWCZAUVGMBOHVNUPRMYDLRKBFXJVSZCOUAEJXSDJLEFHELVPQOWIINYPXAHGSOTQKTOGIELGFQ");
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
    msg.setTimeStamp(0.37562735710278494);
    msg.setSource(57248U);
    msg.setSourceEntity(217U);
    msg.setDestination(62057U);
    msg.setDestinationEntity(212U);
    msg.type = 137U;
    msg.id.assign("IQBUJSSRKFEJYYFAUHBHNRHZYDARZNTOUXIQUKOOOSJPDMFKKIWGNGTWJQIKRUCXAYFLESASPIQQNPATTZXBEROXEFGOXZPSSLQGBAFHAEYIGJMHVBWNDNTXYYNDRIPWLVSTJMCHVICCGLWZQOEZKCUOQIVRKJJHFFKGTIPLLDTDVPECYJXGLQARCDGWHWMEVMTYLWFTZCSBZPOPXBFS");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("IIEQWSYHXALDOWLJEPINXXDMFMZXMEFZKJFPVOD");
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
    msg.setTimeStamp(0.2677872344324629);
    msg.setSource(31474U);
    msg.setSourceEntity(27U);
    msg.setDestination(24154U);
    msg.setDestinationEntity(236U);
    msg.localname.assign("XZBHBKNZAWGVSNTYFIREAGSCOZYMMABKQIHOABJMSRPOSQTBGJRWAKOGKSMJRQETEVIMVGXPLUFNDHCJDOXWUOPVHDRLHUEXJTBQYKESFLPUQWJTWIHZHHFCFBWQQSYNPZUPQQCJFSDDLVOKNNOFYVZPZGTWFLULRCCEXVDZCLEAUTRKIDNUTGZCRDVBDYAMSAGFIUZHLLEBGGJCPKEKHYNMIMFYWNYBSLAAWXK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MXCLNUUJPSVMTETGPQMBSRCWHCKIQKYABHWAJLHQHIKGZDQCXSWLIAPQKWGWDJZPGUYVPFPEIRWKNQHONOVMUPZBOQSZWMWGREKJSHJZRTRO");
    tmp_msg_0.sys_type = 246U;
    tmp_msg_0.owner = 49193U;
    tmp_msg_0.lat = 0.9508760883272638;
    tmp_msg_0.lon = 0.6272534736921552;
    tmp_msg_0.height = 0.25037428685080765;
    tmp_msg_0.services.assign("MWZCRWRGXBQHWNXCLOJBBLZAZMLNICOVJXJHCIAFXJHUOHUPTAHRNKNLEKQYNBGNVDUWZLMGDDQKWVWAKHDCSUYGFXZFFNDIEETPSKMICLYXAVIXNMBOTMZEDEQOFPPXKFBHZYMQGGYRSAXWSPBUPZDGQQFIVPJYULZTBTUYPOAWEHKTRJAFUOSCTHQDAOPEMIEWCSNDLKRKLHGYSTOIGABPVJICJFGDWMQCYTSMYRNVVBJSZVSFJXERRUE");
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
    msg.setTimeStamp(0.3035391344885493);
    msg.setSource(32096U);
    msg.setSourceEntity(78U);
    msg.setDestination(6977U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("LUYPMIWKJSIWPXSRQJQOFRDFXCOLERTPIYIGVKGAAAPJQTOQMWDLRCGBCCENZNDEKEVUDMHMGNPZYHBYXCNIWEWHQJTKYZXMMEDSASLBGTGFDKRSWRUPPHJQWONHNZVZKTBBGIOLXXUDKYDHUXAEEUNZJDHVGYTWBXFLMLUEYWSFBKFHMAVOYS");

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
    msg.setTimeStamp(0.0931027425648977);
    msg.setSource(31070U);
    msg.setSourceEntity(181U);
    msg.setDestination(37763U);
    msg.setDestinationEntity(229U);
    msg.localname.assign("BAIBCEFKUPRSVKAHKUMSDQJKJZUUXWFFLECOIGSBVQQHVMJCUXHQAMSPZELTJOEIHQW");

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
    msg.setTimeStamp(0.46633014826353225);
    msg.setSource(39863U);
    msg.setSourceEntity(179U);
    msg.setDestination(52826U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("NNCOUQHLRXKMDBRXTHHEGCRWLGNFWXVSZMWTOQAXZFIUVPZYAATOTTQPZWLYFEDGISBHHKJVCXSQECIUGPGZN");
    msg.predicate.assign("NMKCGSPKPCPL");
    msg.attributes.assign("ZRYWXTFMTMBTWZOLWQQLELZBNOGSAIIEHDQHDFGJDHPPVWYORUADLWHZTBOCAPXGFFJYJNJSXUGFRPSNGDWMHULK");

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
    msg.setTimeStamp(0.8088229108584316);
    msg.setSource(21737U);
    msg.setSourceEntity(82U);
    msg.setDestination(17985U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("DEMNBPYKWSUZQKERJACQRNSOZGXDDEIRWLAIIXCNQOPXVDTTTJEULTZXMUIKZTXGBSSCBEQFDYENLCPXNJTKQMGYMPOUPTCQGLEFWWDHZWMNPHXQJKOWJZUGBGRGRUKIPAVOOFBHIEMTZVHOUHAFCKOAJYDVYAUDAMIUACRYPHWYSKQSMYMPVSHFJSGPNFLXICAMBORHCWZVVVRZFJOFYBIHFIYJKBLKHSBTGWLZCXNBL");
    msg.predicate.assign("TTZOAPRYZBWVWSWMEOBQOHGGCKNRYJGUFMONAFIJNAFMDOTZSQYVGCDJPUZHEXKFFIKXCOSBMTFDUPKVISNLRHWOKQOFHUXRJPZJEBGMGLHDNDOAWNTYGLWEMLCJNXYHHQUAFVBSICDVEISRXFUWGNVCTVRRKKQXSBLQLSMDAGLZQOBIMHIEYBJLEZJMTVICXWXULNFUPPAPWYEEHQQCZYQVMZDWBLPIRSYTISJEZADKPBDYPU");
    msg.attributes.assign("PYHIJMVWPFDKIHAKRTVGDYDHRWGHYZLDAIQSEOSFCLHQBKEBNRMBEYATZRSZROXQOSDCMPYLMJUJANNYPFZMVLTVSFQCHUJPI");

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
    msg.setTimeStamp(0.5685804326514595);
    msg.setSource(52001U);
    msg.setSourceEntity(50U);
    msg.setDestination(56858U);
    msg.setDestinationEntity(80U);
    msg.timeline.assign("KBTOXRBICSBJRNZTHJLVPUJRZVILHRLSYNMGQKWBQPBUDOAITOVMJGPEGKEFSKYWJVAWVPTINXDVSIXRDYEJPNMTZVBWEUUIAOLWUYQSCLJUWUSLCGXHOFIPHFPECCRMFPTRVVENZEQZSZOQYFFZF");
    msg.predicate.assign("UCVGLDWCULZGNDHXMCNQURNXPTWMELTYVTJMKIAICQZXRPZYDHRHVDCLGURPFAEIGHBBHVUFOKJUYPREPSSLPLYAXKBEEGSXVKXNEZQXHKOWCFBQWIO");
    msg.attributes.assign("NQDVUEILNBWBXKDEFPZHUKSWMHJWIDIOHBKKCCVXYXOUKRJOPEAMQAIAOHJEQZEFQRFIOZGAGRGIJMPPAWMWQFEULNQUVSOWYGKYCGTPFPTVMINU");

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
    msg.setTimeStamp(0.9895080759557363);
    msg.setSource(25571U);
    msg.setSourceEntity(155U);
    msg.setDestination(11510U);
    msg.setDestinationEntity(105U);
    msg.command = 10U;
    msg.goal_id.assign("QELJVHQAVSTJVAGLMCLNXSZJOMRULCHFNZAVSLPOWHTPYHIHFECTDZLASOJBWAFQLZRUWUGCWGPIO");
    msg.goal_xml.assign("PEDLLFQYJKPZGJPSBUPACQOUEKAYARKNVUHKSEMCVSPXLHFVQSHNUXCGZASRDFKUOWCWVXYEXOICHZCETXOGKHUECTRKWGRJJDDCUHTRXWOBALEGAHONARWTMEMBUJZBMMFLXLYIVIINPKXBIFVGSACUFZRSBQYTDGWOVBPSQOTLHY");

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
    msg.setTimeStamp(0.19683975932010456);
    msg.setSource(16632U);
    msg.setSourceEntity(154U);
    msg.setDestination(41765U);
    msg.setDestinationEntity(53U);
    msg.command = 143U;
    msg.goal_id.assign("HORVCMYZMUXVNIJIHDGQANJULHMXGOAEESUJJJHYNAXTEPCMFQQFFMQJWBYSOFAWTRZKUVFDKSEPSWPIVBKCRYUAWTGLZGGGPCBYIANQYAXAKOUOCDIVENPYYYNCODWZDWGPLLVMXLQFHWBRSBU");
    msg.goal_xml.assign("ZBGBJLUYZJBERAHHUHCRYORMSOGWFMYHSVLEFYTCWZJBTSNZGQPNJDOYQGBJSRITJDLIFOKLWLIWDFCNGMLWLKTZWIVZCXWIZHYELACBRUEYMAXDCUPVBFONJHNXIHPXXFDVKAGNUSKFEKEDUNM");

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
    msg.setTimeStamp(0.07333665017183455);
    msg.setSource(27512U);
    msg.setSourceEntity(191U);
    msg.setDestination(53927U);
    msg.setDestinationEntity(20U);
    msg.command = 158U;
    msg.goal_id.assign("FQRNGVLIEINISLPYGRSFTDUMNKFKFPOBPAVWJCGIHTORZWGESUQDCANZITDJZGWPCGMLOTNNSABXWJUQPOTEMPRHOHMKRILJHUKYGNWKVBQIAVCMVAU");
    msg.goal_xml.assign("NCLPKEHIRAESFCWICJGMMJETXIZTMGFTKSPOHGIWMPYVBJPKURPCVIMLDNYRAFIXVVKPNFQIZYIZYXLXMIWVFNTNZYXQNAMCDOXOOQCTDXGFWBJV");

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
    msg.setTimeStamp(0.5064029144218403);
    msg.setSource(25436U);
    msg.setSourceEntity(50U);
    msg.setDestination(21615U);
    msg.setDestinationEntity(157U);
    msg.op = 13U;
    msg.goal_id.assign("CRQUNTGANYIVGSLJQHWIPMZBNVXTOOUZKOKSRRUTLJRLASDFZCQPXSVZBSUYUJGBPBFDAATEHVWCOCUMDDMJGTKKZEHEYRHZYYJIBETYNOMYKJAVSLQDXMRSRFWXVNQXBGKXIAZKOLRMQEVDWDJLGCWEHZLQDCPAVLVFUGMMXBNIPUBEFWDEPCMSKGRZWHHIFPMFWQGNSCOKFS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OVRERHEATMREAQYTVMRJCJILBLQBYWYVDPNUUQOBAVCY");
    tmp_msg_0.predicate.assign("TISHJUETFXKIZPRMTBLZBUNPYPRWIWDGDTUIDHNKGOCMKESUYYVFMZLSRFQFSDSINRMOJHQOAPEFBKNAJPNKKEXCUYQAFKZGDGLTKHLWXHZDJHMWNWPAVVTNCXQXAXDOGOIMBREZVFNSVHXBPQPWOPJTSGORGGFECDVRVERYAY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FWFJEDVDHKCQOBISARRXJOKEKBTSHRLVYWGUKVDFSVRNKOPIDQJBJUPHHXTGNMNXOINBJHEJKUAZCVETUZLYJMLNXZQSNLMFGOHHFMQOMFLESINDWXFGVUMICTDETZZCHOUTQXCFFYBAAOYRPGGQBXNADNEIZTCJTWGVPLMXSKKYWBWPJOBSVE");
    tmp_tmp_msg_0_0.attr_type = 146U;
    tmp_tmp_msg_0_0.min.assign("NPAMOHNNTIWEO");
    tmp_tmp_msg_0_0.max.assign("FABFHTGVQSSANWNMBKXFGIXHSGEQTZCAIWUQLMGIXMVVGR");
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
    msg.setTimeStamp(0.4443523743053863);
    msg.setSource(58751U);
    msg.setSourceEntity(229U);
    msg.setDestination(21216U);
    msg.setDestinationEntity(69U);
    msg.op = 10U;
    msg.goal_id.assign("RCIWMAUKMRFDNTFPRLVMHBDWZQKOIOUEYSZSDMFGBKTXGQEKKXSZOTJLC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EIXSDQSPRLPGSNA");
    tmp_msg_0.predicate.assign("NEUQXIDSXYTYTRZJPISLBFLUYDWESRNRVDDFOVEZXSOMRYHCUVWROJAFIVVUPSKLVQGFMQWNFKZNYBJBVODGXETHTMDBTPSTXPZKHBFDAORIQNPJWCHYJTYJEIFTKTMSWHBWOOOMVVHQCSOEHCAPGRJNGRKTDJFNCYMBMQCZSWAXZPDEGWUPLJSXBKHPUCLBGAWKXZZXGNAYLQUYA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TIQGQAMPWZHKHUELLQGKTCCLEBJGYCIHXJBRDNXUKBEZYICCCHEXJZYVBUBCQBFOQWDIZATFIYYOPJLAOBTDFFDVKUULVRHGYGVYZLOUSATHSJJLPMJXURTALUHXKIFNCMQZRENJARVEFBRWKSRAEPZFMKEGPSVNGOOZBBQSWPCZTMSDWWHVATOMPOINFYDGLWEHUJFNWNTQQMCIMKW");
    tmp_tmp_msg_0_0.attr_type = 200U;
    tmp_tmp_msg_0_0.min.assign("GNSHEMABZZDAKMAUIWKIXRBOQCXFMKDEKKOTRKUIXBHGUQDPNYPMPHOATWYUXVJQGLVINBUHQ");
    tmp_tmp_msg_0_0.max.assign("NIMZGLBHSPUUMRIZOUZFXJEBCFWHVAVKYLYHUD");
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
    msg.setTimeStamp(0.62420045614712);
    msg.setSource(3704U);
    msg.setSourceEntity(102U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(2U);
    msg.op = 132U;
    msg.goal_id.assign("XYQDBXZMWGCNDQSPYQRJBKGBSBIZINSEKHUJQIQADSBCTRJFFTMEKVWHTKROAMWYQHMCPGCMICOETAWOMASNLEAGLEUPSZRGYPUSUHFTSNQUNHBTZVIYOORIWSRJTIBIDFOVYGCMFVMGKAXVDKAJLEGPUPPBRWEBZNBZDV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TUSHVDGIRFYGTLNBGYCSIWIZSFCRLBXZYJKSIBGKKXOMZERWKZFWXQTNXPWUUKDDAULHYEKPREIYJFUYWXUCHAWWDMYXEONLSBICERJQVLGRAKPQVZTZFPXNFMVBIZYXLMVKTBFSOVCUHPA");
    tmp_msg_0.predicate.assign("SPFWRVDUUBCZW");
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
    msg.setTimeStamp(0.4298254592455476);
    msg.setSource(33127U);
    msg.setSourceEntity(221U);
    msg.setDestination(42114U);
    msg.setDestinationEntity(224U);
    msg.name.assign("HHWDPFQZWDHXVBPYAURLSYNOGICEMMAQCEEAKNHHYDBBKNTMKRKJRNXE");
    msg.attr_type = 253U;
    msg.min.assign("QQCARGXLSPYIMWGRFNIHZYZSOVUYZYGOGDKMQVPSMAIDSRMIJDBRUSYLJWSVNVJZEAAPXZBUEIQLPUFVXHXYNXDSNDTOPRZBSMPWGTTCJCXVKKABSFEUUNXLVALTOGKEOHBIEGHXYQHRPNBJNGFIKFMZLQYDCRKTUMVWCNETQG");
    msg.max.assign("LVEEQSMWLNZMTRLPKYWTKIYIKBKIMPTCINGJMVAXROCJMOUOCSLVAXPEHSEWJEJAXOGQUXYJFCFFKGSWNHLYFNFZVLCJPVXSSAUREDONHPKQJCQZVQZCRTDWYDSBSGRJIUYVNBHAUKEQTNCMGPKZGCCMOLEAUZIXKMBGZYEBTPOBTTBDKNZGVSYXWHDOZF");

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
    msg.setTimeStamp(0.10560777522446552);
    msg.setSource(48528U);
    msg.setSourceEntity(242U);
    msg.setDestination(63809U);
    msg.setDestinationEntity(136U);
    msg.name.assign("ZDFBGJSPITGCSJLRAKUGYIWLYBNAVDGORXNLNKSUGDHZQFAWIBDJQHINZZZF");
    msg.attr_type = 187U;
    msg.min.assign("WSYGRWTQVHBKJDJRGUAYSWNHFZDOMOYXGZFAMJIQRUINMZKRFUUZZZMXOKJZYWYTYWRACFAQFNQMLTEPCVVNUGVEAMQSUXLGBOFDJMWSUKPCDXVTOEXWUSLASDLBJLOCXPDGOIHYLCEJQOHOIRYRTCBREIFLPGZAWKPXUAEPCHAVHIKQWLPCFZCCSFVSJBGJNOYHBRBNSTDELB");
    msg.max.assign("LRXVBIFRMVZOXTHPEXHWBRHNJMXBGKYLSTFMYHFHEECWSTALONYWZWOCIPJPIYOVDPESDLDWYVKAIKLKCOQNRJV");

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
    msg.setTimeStamp(0.1047751985409272);
    msg.setSource(39182U);
    msg.setSourceEntity(192U);
    msg.setDestination(61436U);
    msg.setDestinationEntity(121U);
    msg.name.assign("HBSUWNJURDNPKPFEDAZMJAMAGVSEHCTNWBQVPDJZMGVSTCRXXARBFZWKIALOLZCUWR");
    msg.attr_type = 26U;
    msg.min.assign("TIHOVTNOOUOQRHWNVNVNKCXEALCMWGMYJRRDGOSMSZYKDKGRXZJDBYAIGEPYQBMRPBGZESBYQICJVQTSACIPVYEFFHTWWRBLODCFHSMOYPURGZPNXLUWAFJZIWBWXKJKSTOKKXJZDTWQBHDFAHSLGYZQSLLTVVNXFBOQXNYCZIUSABKAYHUDMQNPZTAPHUXWPEUMIIUZJDEFGC");
    msg.max.assign("YEWTQBAWXOPTLXXPKGDSVKNWRRITKVQXHDXMMFVRPITWLEZUECYFBSGAYXOYUZSPYLJSZBNGLEWXCATIYGKPCEMGEDFO");

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
    msg.setTimeStamp(0.3976864519559161);
    msg.setSource(16187U);
    msg.setSourceEntity(182U);
    msg.setDestination(53078U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("VOYEONREMXVQJPKAOKLSKGLRLVRZPIDTDYEWKPFFYOLVCXHEKDUFKHJSCLWMJIURAVYUJNUFNUDBDJCZATXQBSTZGPRIHGFLMOEWNVBMXDLJGF");
    msg.predicate.assign("YAJQOFXJJIIIFAWSSRNMOVBENCPVKVJIXQTSQDEJYGPUOFNOEHUM");

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
    msg.setTimeStamp(0.08471584176140423);
    msg.setSource(44961U);
    msg.setSourceEntity(230U);
    msg.setDestination(61298U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("EMEQNRHYBQOQVWLWUMIZCHXBNOJFXIVCBMFRUHQGODGFDDIGIXOKVVYTKUNXNFWDIBBMTSCTTRWKEKAWXAFOXUEFAUBBNAQREJZLCPIIVGQDAFHKLAEHJJZDYSLUYSDPSSNWYIMLCLUUJZVWRPYUO");
    msg.predicate.assign("DJBIKDWXJHDWFUDOELWTRYFACFCGXTMZQXDZQJMZAWKUHAVSAKAKJDBRDZOUVJNFWTVQIMAQSEFYNEGVJXEVVUJOGAYPCPONGMLCRACTJYXCEILNLXQGBBFFHFEYHKNBKWYOUPWHOQOWFBSQKRPQHOISRNVUMGUDHMCCTZSSQLPTGIAZBZTVLULDIKSSMTKNGBXYIPJRRQOPMXUWEDUYXHHVAHGEEFXMRPYENNZZPN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TYVZTSKKUDAFIIUOVEEEXOFYPXRVLPVSPJCINYNHUAQFEXDNGTYBEHMUDMBECIKCEHLWAFOWSEWJOBRXWXADYXLQZRSJWFTMFCCQRGXSBPJIOGHPZJSQLKQHAAQCNSHHUKJBYNHKXPHRQZFIODMUTUMDCLIYMQEFRDPGVGDVYWBCL");
    tmp_msg_0.attr_type = 52U;
    tmp_msg_0.min.assign("YCQFMBXMOHXFKDDQUMTPNZXWTEMLQANRUVXCNCWJGUETTPHFIMEPBAJJZQBBWJVLRBXPAMSSXWWSUKCXJQAOYZAIYREKOWOCDGLYFZVVCNGUEOGQVPUWHOZUONDBAMKBRJIRGTFNPHESIROZFUGSINGPHWDPIVYHEBCA");
    tmp_msg_0.max.assign("LXVGPKFROTJAFOVBHDYMZQTKESCPSKXMNFKGXUKUWIALBMDLMTWBMVETPZMLAMDCTXSGGGCOUEBVPEDHWAVYHQMF");
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
    msg.setTimeStamp(0.8279728442395119);
    msg.setSource(62240U);
    msg.setSourceEntity(29U);
    msg.setDestination(60275U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("WSYDJVMQTAMIXVLEBKCVIGANQFTTMCCKPODFGYJTMRU");
    msg.predicate.assign("TFZDCQNFEDRYWZSLLAKBEKUBJOQVSDOMJ");

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
    msg.setTimeStamp(0.4736247242275037);
    msg.setSource(46504U);
    msg.setSourceEntity(22U);
    msg.setDestination(19586U);
    msg.setDestinationEntity(199U);
    msg.reactor.assign("QUVMRZPZJWNJXOFNWASNTBBTCPQKQODIOQAGURWEXDUBVOAQPXDSEJHILBEIVCRZOUIDMADQVFMNKZEKATQNYDGZVMZVGWJSXCACDGZHUCPGSWLUIHBYTHBSKMDNOKPWOENVLJEURXYTYTINIZQBTVYFLJLEWCWMJPYHCOUMQYHZ");

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
    msg.setTimeStamp(0.9247225780744165);
    msg.setSource(9241U);
    msg.setSourceEntity(37U);
    msg.setDestination(53648U);
    msg.setDestinationEntity(238U);
    msg.reactor.assign("DZGFPRLFIWYOGKAXZKIECTNIXRZSJIMMWEOPSOIOLVLWLMXOYOSVRMGRLWCBDVHIJHBRMUEFDNPUFLIDOMPXTVDEMYTKJFZDIWEERPQKNYFCAY");

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
    msg.setTimeStamp(0.0018147566133384085);
    msg.setSource(1208U);
    msg.setSourceEntity(250U);
    msg.setDestination(14103U);
    msg.setDestinationEntity(199U);
    msg.reactor.assign("QQQLGSRVPQKKUJC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JGPYTNQEQISVTOKNNPPMLXWUZZGZSYMWEODGLZBAANFJKSGCFVRFHUIIYJDXJWWGQYZTWLGVQJGATNCUGF");
    tmp_msg_0.predicate.assign("FVMLPLLPHAVTQOXFUKCLBYWRWVCWWBDNYNCJZJPCXYFEDDECMELLQGSOOWKCDAPJOHRJNLISKNDOXHSURHEAASOYDUPRWURUQVKOGHIZMAPYYEVUQMVGNUJSTYXPNRJNLQMYIFFMROZBJECDTMTQNLFQHWVIJZKBTGGZWSBMAUIHQZSTCMEZJFDWEIHQQTYPAVCAWFTRUPVSAIUNGRGOXKBENVKGRBXKHYXXHDOKZBGMTFZ");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.5500291147325775);
    msg.setSource(41422U);
    msg.setSourceEntity(53U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(192U);
    msg.id = 224U;
    msg.width = 54092U;
    msg.height = 31681U;
    msg.widthstep = 22544U;
    msg.channels = 31U;
    msg.depth = 227U;
    msg.finaldata = 225U;
    const char tmp_msg_0[] = {-115, -98, -79, 68, 114, 33, 40, 109, -61, 9, -38, -24, -40, -109, -67, -52, 34, 37, 53, -98, 92, -75, 94, 44, -96, 42, -25, 114, -91, -108, -44, 4, -128, -86, -52, -127, 106, 115, 23, -44, -121, -9, -26, 9, -70, 104, -97, 121, -55, -41, 84, 101, -121, 54, 104};
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
    msg.setTimeStamp(0.7224928082866415);
    msg.setSource(20633U);
    msg.setSourceEntity(131U);
    msg.setDestination(41463U);
    msg.setDestinationEntity(200U);
    msg.id = 131U;
    msg.width = 24681U;
    msg.height = 30717U;
    msg.widthstep = 39735U;
    msg.channels = 211U;
    msg.depth = 112U;
    msg.finaldata = 42U;
    const char tmp_msg_0[] = {86, -94, -82, 39, -18, -35, 21, 32, 78, -26, -100, -118, 72, 91, -118, 99, 56, -83, -23, 12, -90, -104, -41, -118, 19, 6, -99, 118, -4, 48, -69, -98, 64, -65, 119, -29, -16, 89, 94, 86, -22, 66, 35, -13, -76, -108, 78, -84, 66, 113, -21, -117, 58, 116, -111, -27, -17, 20, -48, -95, -42, 68, 106, -127, -100, 108, 26, -71, -24, -38, -112, 42, 59, -73, 4, 6, 52, -4, -62, 37, -85, -41, -3, -29, 120, -100, -57, 59, -116, 97, -38, 75, 60, 22, -113, -82, -71, -53, 13, 64, -23, -55, -112, 87, 96, -18, 103, 85, -99, 61, 41, 102, -84, -91, -123, 16, 82, 12, 35, 24, 107, -41, 16, 52, 103, -93, -33, -11, -89, 88, -71, 126, -5, -68, 43, -102, -36, -116, -13, -27, -42, -21, 109, 126, -94, 43, -85, 51, -41, 117, -96, -32, -104, -90};
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
    msg.setTimeStamp(0.17194637137661717);
    msg.setSource(58511U);
    msg.setSourceEntity(243U);
    msg.setDestination(29126U);
    msg.setDestinationEntity(160U);
    msg.id = 47U;
    msg.width = 45482U;
    msg.height = 12949U;
    msg.widthstep = 46404U;
    msg.channels = 48U;
    msg.depth = 11U;
    msg.finaldata = 133U;
    const char tmp_msg_0[] = {15, 27, -6, 58, -60, -30, -22, 59, -42, -110, 63, -49, -2, 114, -41, -49, -57, 3, 5, -91, 106, -105};
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
    msg.setTimeStamp(0.7169016454707453);
    msg.setSource(51546U);
    msg.setSourceEntity(234U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(208U);
    msg.width = 38840U;
    msg.height = 18097U;
    msg.channels = 165U;
    msg.depth = 119U;
    const char tmp_msg_0[] = {73, 69, 61, 115, -70, -125, -5, 33, 44, 93, -101, -85, -113, 15, 48, 26, 95, -46, 18, 37, 125, 101, -12, 52, 58, -113, -25, -128, 105, -63, -92, -25, 94, -117, -12, -39, 4, 20, 105, -79, 102, 49, -102, -75, -33, -7, 12, -21, 23, 13, 118, 92, -25, -76, 117, -18, 13, 113, -97, 71, 97, 34, 95, 30, -35, 88, -13, 120, -47, -39, -71, 87, -80, 8, -84, 18, -102, 14, -84, 66, -60, 32, 86, -102, -118, 2, -41, 50, -84, -54, 113, 22, -72, 43, 27, -29, 11, 8, -26, -3, -17, 4, -79, 75, 126, -70, -25, -7, -40, -37, -92, -25, -114, -74, 6, 7, -124, -102, 52, 46, 74, 82, -71, -30, 41, 96, 36, 120, 94, -14, 1, 82, 49, -39, -76, -13, 71, 114, 100, 29, 19, 74, 54, -33, -107, -107, -78, -56, -39, -82, -115, 9, -118, -102, 116, 113, 43, 78, -124, -42, -67, 110, 115, -37, -105, -119, 108, 79, -28, 98, 38, -4, 48, 46, -70, -54, 48, -33, 39, -44, 116, 66, -101, 61, -106, 24, -14, 52, -40, 42, 6, -59, -125, -72, 121, -115, 28, 91, 100, -5, -114, 21, 73, 11, -5, -30, 103, 29, 90, 3, -103, -78, 19, -46, -15, 86, -77, -73, -63, 29, 87, -17, 123, 16, -107, -106, 79, 12, 109, -75, -127, 100, 16, -100, 37, -125, -97, -1, -71, 46, -97, -89, 1, -90};
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
    msg.setTimeStamp(0.11846368232706739);
    msg.setSource(13168U);
    msg.setSourceEntity(202U);
    msg.setDestination(35715U);
    msg.setDestinationEntity(213U);
    msg.width = 61618U;
    msg.height = 52464U;
    msg.channels = 140U;
    msg.depth = 232U;
    const char tmp_msg_0[] = {49, -101, 47, -76, -66, 13, 58, 21, -117, -116, 5, 87, 125, 12, -111, 95, -5, 27, -34, 16, 27, -76, 24, -80, 53, -123, -5, -4, 35, 104, -92, 115, -55, 75, 99, 98, -24, -86, -22, 42, 70, -37, -31, -90, 40, -115, 49, 122, -94, -103, 42, -48, 121, 22, -115, -40, 85, -43, -128, 19, -68, 60, -99, -103, -20, 116, -111, 20, -119, -92, 54, -122, 61, 121, 15, -61, 97, -127, 71, 6, 122, 86, -90, 105, -12, 53, 104, 70, -70, -69, 105, -117, 44};
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
    msg.setTimeStamp(0.13919048988045757);
    msg.setSource(42226U);
    msg.setSourceEntity(21U);
    msg.setDestination(57152U);
    msg.setDestinationEntity(118U);
    msg.width = 42366U;
    msg.height = 50671U;
    msg.channels = 205U;
    msg.depth = 44U;
    const char tmp_msg_0[] = {1, -48, -52, -85, 39, 87, 51, 101, -62, -70, 101, 32, 119, 23, -108, -44, 113, -97, 69, 25, -88, -74, -67, 121, 94, 74, -30, -12, 111, 96, -44, -43, 106, 7, -37, 19, -22, -124, 65, -65, -16, 68, -56, -90, 36, -2, 64, 70, -95, -123, -64, 20, 66, 39, -27, -85, -35, -102, -100, -112, -88, 73, -35, 66, 1, 111, 77, -37, 40, -11, 48, 53, -70, 97, -98, -80, 37, 114, -88, 96, 84, -91, 54, -107, -5, -21, 75, -7, -46, -30, 13, -28, -82, -79, -14, -54, 46, 7, -19, 2, -64, 27, -6, -16, -120, 6, 10, -7, 87, -117, 52, -125, 52, -96, 123, -59, 4, 16, 123, 35, -112, -14, 101, -127, 14, 90, 71, 67, 104, -11, -101, -62};
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
    msg.setTimeStamp(0.8772855707805255);
    msg.setSource(36090U);
    msg.setSourceEntity(143U);
    msg.setDestination(43595U);
    msg.setDestinationEntity(172U);
    msg.frameid = 104U;
    const char tmp_msg_0[] = {-84, 91, -51, -23, -78, -70, -83, -88, -6, -15, 90, -24, 108, -93, -52, 4, 32, 85};
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
    msg.setTimeStamp(0.6287258303404594);
    msg.setSource(61397U);
    msg.setSourceEntity(6U);
    msg.setDestination(15492U);
    msg.setDestinationEntity(230U);
    msg.frameid = 82U;
    const char tmp_msg_0[] = {120, -8, 58, 21, -123, -16, 105, 51, -62, -110, -87, -8, -111, -46, -94, -12, 109, -61, 73, -13, 57, 71, -77, 49, 63, 6, -1, -42, 115, 105, 23, -43, -70, 32, -10, 7, -10, 70, -116, 119, 62, 121, 63, 120, -10, 99, -4, -98, 69};
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
    msg.setTimeStamp(0.026062713601043175);
    msg.setSource(62370U);
    msg.setSourceEntity(51U);
    msg.setDestination(36284U);
    msg.setDestinationEntity(35U);
    msg.frameid = 212U;
    const char tmp_msg_0[] = {-15, 40, 20, -43, -93, -99, 89, -35, 65, 82, -50, -44, -110, 11, 65, -81, -10, 41, -10, 27, 25, -1, 24, -102, 22, -121, -96, -59, 38, 6, 112, 71, 114, 0, 4, 120, 82, -92, -42, -26, 26, 15, -71, -93, -117, -26, -121, 109, -101, -86, 74, 44, -17, 82, -125, -104, -4, -31, -54, -24, 112, -104, 52, 29, -46, -73, -119, -97, -32, -82, -75, 55, -126, -127, -55, -36, 111, -60, -83, -23, 82, 27, -13, 23, -20, 109, -37, 123, 27, 5, -41, -105, 36, 51, 31, -88, -120, -45, 2, 4, -41, -90, 62, 69, -119, 106, -100, -110, 59, 40, 49, -42, 61, -15, -23, -107, 114, 39, 121, 71};
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
    msg.setTimeStamp(0.3695441218208415);
    msg.setSource(32327U);
    msg.setSourceEntity(146U);
    msg.setDestination(44794U);
    msg.setDestinationEntity(80U);
    msg.fps = 37U;
    msg.quality = 48U;
    msg.reps = 213U;
    msg.tsize = 163U;

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
    msg.setTimeStamp(0.9693920638890988);
    msg.setSource(3636U);
    msg.setSourceEntity(134U);
    msg.setDestination(65171U);
    msg.setDestinationEntity(142U);
    msg.fps = 197U;
    msg.quality = 192U;
    msg.reps = 227U;
    msg.tsize = 219U;

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
    msg.setTimeStamp(0.9319485844823255);
    msg.setSource(24643U);
    msg.setSourceEntity(63U);
    msg.setDestination(21597U);
    msg.setDestinationEntity(236U);
    msg.fps = 106U;
    msg.quality = 199U;
    msg.reps = 63U;
    msg.tsize = 167U;

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
    msg.setTimeStamp(0.9297715291376139);
    msg.setSource(45102U);
    msg.setSourceEntity(248U);
    msg.setDestination(54784U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.398936448204685;
    msg.lon = 0.37332209873666244;
    msg.depth = 154U;
    msg.speed = 0.5160308192800811;
    msg.psi = 0.9978750928555222;

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
    msg.setTimeStamp(0.8084290037781261);
    msg.setSource(26000U);
    msg.setSourceEntity(21U);
    msg.setDestination(30615U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.14479698658949725;
    msg.lon = 0.7548560776424068;
    msg.depth = 86U;
    msg.speed = 0.614536537853801;
    msg.psi = 0.2352103980617425;

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
    msg.setTimeStamp(0.4200753236874446);
    msg.setSource(17632U);
    msg.setSourceEntity(113U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.5581705162373986;
    msg.lon = 0.2626925604938066;
    msg.depth = 2U;
    msg.speed = 0.2998120603169896;
    msg.psi = 0.6115714712933282;

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
    msg.setTimeStamp(0.6931500286748496);
    msg.setSource(15818U);
    msg.setSourceEntity(157U);
    msg.setDestination(18592U);
    msg.setDestinationEntity(64U);
    msg.label.assign("TUERLZACSJGNYBJZCGMSTITOHTCAHDSUMFRON");
    msg.lat = 0.9727415693829481;
    msg.lon = 0.04077837124440353;
    msg.z = 0.16308222728040556;
    msg.z_units = 27U;
    msg.cog = 0.9112893278108395;
    msg.sog = 0.00737278020510157;

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
    msg.setTimeStamp(0.288012962520492);
    msg.setSource(45530U);
    msg.setSourceEntity(79U);
    msg.setDestination(25886U);
    msg.setDestinationEntity(157U);
    msg.label.assign("OANVRBLSNGUYEODFPXLYBQMKDHCXPHZBYQUGFWTTRESIYCERUFQOD");
    msg.lat = 0.5301879989344878;
    msg.lon = 0.8161225848571454;
    msg.z = 0.6670218982966754;
    msg.z_units = 146U;
    msg.cog = 0.9437570779536498;
    msg.sog = 0.6022892406728819;

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
    msg.setTimeStamp(0.6911018723086342);
    msg.setSource(32116U);
    msg.setSourceEntity(120U);
    msg.setDestination(65530U);
    msg.setDestinationEntity(173U);
    msg.label.assign("KZSDQVMCXIYGAOGBQJDDMBXZFSNCOWPYDEHZILMGPPYWEIJUHVPMRRYEKSATLZLICKOLUVXTWKMWDMBQNZEDH");
    msg.lat = 0.9781234642067481;
    msg.lon = 0.9966567903273273;
    msg.z = 0.6257320799517426;
    msg.z_units = 125U;
    msg.cog = 0.05155249333249634;
    msg.sog = 0.16301661946580603;

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
    msg.setTimeStamp(0.330771640151596);
    msg.setSource(22910U);
    msg.setSourceEntity(46U);
    msg.setDestination(11155U);
    msg.setDestinationEntity(70U);
    msg.name.assign("DAEZKPWTPFVSGMVHYESVBIMZLHIMMZWWADSHDTBNWERLZKAXHIYDJWLQTBXNQQJRRJHTJEGDTCALLMVRPZSUBAJIXFDGGYEWCZZKKOXDBPCDKSGUFSXEZWUNYMHJXUVJPGCKEPUJYTNVOSQLTCONVGUIFPFJFBBFDVKMMANSQCKUHIIRJUOFLMRICSTOINAROBOEXCHWOUELKLQGRXABATMYSWNYFHQXPZPCRTGYQHDQKOPAGCL");
    msg.value.assign("SXAAMGXHGDQQPSABEVFODFONKHORJPZFFEJYEQZRMIRCSOQBBDRUJBTNKLRRCOQSZCPLYMHTQOWKBNVCYFHJTSUZIYMIDYCUYUJWIVEATRTPDSLXGWDIJBJNVWQEUAXVPADACGMXHGLXNMGMRLZPWMIJUHYWROTBPQIKJWBHPXUVEGSXXTCFKUNTEFJLCYWVOPFTZAQZFGFNGMWGCEHNUAKYPDVQLHBLKDKLZVKUSSIMENYNEVDSZIWO");

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
    msg.setTimeStamp(0.12999424490129985);
    msg.setSource(12899U);
    msg.setSourceEntity(210U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(51U);
    msg.name.assign("CDFYAWNTKYYRJBKLFMCSQEFTBMIWKHXHTRVDQKSYPUCIUKDUWOUMOPZZOGAWBNJNEQPVFVDTXCPYGODRRIUNINZDVCVSAUGODBLGCQGXCCABZFTEXQIRFPLIHBZHIJLDUQNHQTGHGPKWXINGLAHNBUYWPROJLPPJJCLLJZYOEBYKTTQOEFISBLSFTVWWDKEXQRXAEATFASXUQVESAUJRMWH");
    msg.value.assign("MANCRGFTIKSNVQDBJDRZHYFANXUCWNFO");

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
    msg.setTimeStamp(0.3334736715258052);
    msg.setSource(39500U);
    msg.setSourceEntity(29U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(170U);
    msg.name.assign("WMDBTYLFOWBORXNZUACQAZAWIHRRBMHLLUSPDTERNYZDBVXQGAYXBFMUMLUJIGRZFWHZPQLLKNCNUGJVOTMJVIQAHVETWYEBOUBVRAKNVEGSPSUFPCGILQBAROVWOJSDGCBEZTECISJYNPHHMXJPKKIJXEHKKYHRPKDEMVSXRTVICZSIVKFEMZBYGATYLDCUWCJFSHUTNRWYIFATOFZYD");
    msg.value.assign("ARLFGQLOCKSURHQKDNIPZJBAFTNGWEY");

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
    msg.setTimeStamp(0.6918277310965936);
    msg.setSource(42562U);
    msg.setSourceEntity(78U);
    msg.setDestination(7980U);
    msg.setDestinationEntity(55U);
    msg.name.assign("PZGWBDOOGSIFUBANIEHPIMXVGGYMUTIYVBCGXASJEHXQWHBSBWGNYHQPXLDNQROWKAUMPOOVSNUMJQKPZTDVDNZRAVLEFZHCIQKNFXQYJGMPKWKTMPDJVIWSUKVEZSCVYARMCQXBYQCRUGWBKAYLPAUTTCRERDTOZMUUBDFWVNLBWJOLXTOTEFETKRQYDOHHRKSJEGJUWFCRMITDHCXCFSAJGOYYINXZLPJZA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BGKVJOPUOAOZX");
    tmp_msg_0.value.assign("XWPYXHCLUVGZAQWBCGPJJHVKNSWEGMQCFZFOSDYUTEPLMJBHRAJMDTLNRHYNXHFZVXNZQULCTNUOBIIKQKDUFMCNKGRQCZGITXZYRAEZAJMSIXOMDCALDPOUGITBWJYDOSRKLQTLFXCLGVIBYBUATCTQIIDIRMGLAOSPGMIMRXAOOYZVUQWDPEXJYUKFTPENWJRCWFVFM");
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
    msg.setTimeStamp(0.18309103180073893);
    msg.setSource(9129U);
    msg.setSourceEntity(59U);
    msg.setDestination(28359U);
    msg.setDestinationEntity(233U);
    msg.name.assign("PPRBEVWYAFRCTBLYPITKOZSLFBBZJKLWBTPTJIOYSQVRRSYAVPAZMJZHVGFCXVIRMCERFPDBZGHNDHWYQTDLMCPFTFDSBPEHUEDHQKSVAOOXGBWMTLMUBSZXIQGNHZZNXYEIWMNFPIPXLWKSHUJUOFDNKOTELGIJHQCKUFWYNZDIJASNGUVQAIXMMVYQRUHLNSEMTLAGGYQELKJCMFIXEAEQJZBNXUDKODQCWOXSRCKY");

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
    msg.setTimeStamp(0.8087320663243046);
    msg.setSource(18678U);
    msg.setSourceEntity(223U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(196U);
    msg.name.assign("LVZVYUWNJXYYJJOXILXUFOBHKYKSWPPEHHIXXRGJWBCNCXHBFMVFTIGNRBALQMNQYJW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BUGEREBQDDQUBBABZKOXCLUVFUIUENTOAZYXJWVLAGXAHWETYAGNMSCKVMEUTEDGZFNQOWMODQPARLGVLCLCVVCHJNXCEEZSDLORPOFIOYGPHPYNZIPFWAXVJGHGRTHJRUQCZENBFKNLJXSDJJWSXEBTPXFQAJZRKDUMPYRAOQWICLNZKPUAHHVIRVTBS");
    tmp_msg_0.value.assign("RWGJVPIGCWGNVPPDIAQMIZLVJVDDZFRHFOTLUXKGPGFHCUSMOEBYFJXBNLGKHPQBKXXFWYPQEOQXFDBMKHKHFRVYZQJFRPKOSZQPGFTRCEICKHEMZUBKNHUPBDMNTAYWSJEGENIENSVDUHQDQ");
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
    msg.setTimeStamp(0.9387397406024715);
    msg.setSource(48791U);
    msg.setSourceEntity(47U);
    msg.setDestination(27881U);
    msg.setDestinationEntity(72U);
    msg.name.assign("WOVFKNVJCPJARZJYPNMLOKFOHWPSSKAKBUGRUQCQWQXTBTEUWKMXYIRLDGVVRBNIIHEUPQGEHDDNPYZSXSKKNXBCUQIJHQEXXIILGPYCUTQFXHSDVFNXLOZZQEEGIBZUAWWGYLRAWCVMCJTGJAFCZODG");
    msg.visibility.assign("CHBXTDDUZYTZRBABQQLUJBNFMESXMPWXLWZXOGKKINXQXVPKDUVSWLSYNUDZCGUFEYSSBCCDJJTMGOGZVFLURAGQJWVTZHRSYFGJBHKVFNSYPTMZXVVFWSAAKQIUCRFLTQELWKCEBYNTPYWRQMUEMMHDARYJTPPVPXGGUDQKBHFVWYHRNIGNHTLFJRDAAIBOIOCEDW");
    msg.scope.assign("KODJTHOSGMIPJEFJVHXUEINALTKVJHLSXXUHVAKUHTNOLNFTGOQBYZOAICQRSGTKMQWERAKBPVQRGIUFFHKXTQJEZOEXDNWCOFEINQYSCNZZJDMCDQICJMMXRCNDUVKGLMGXLWAW");

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
    msg.setTimeStamp(0.06410599468850964);
    msg.setSource(55599U);
    msg.setSourceEntity(6U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(191U);
    msg.name.assign("LUXHNQTSVYXJLEFXPAYWDKLFMQIUJBTNMLDQIBBMAUVHPXWVNRRQVOYGGIJCSXSOODZBEUEMYALPYATWWCEUFOWTTCHSMSDTHNRFXYGTQXKRZACQDIKNQIWPOIAFJULFWYDZWRZVEGLJKZWMBDCKLVCGNTKDCEXVGRZQNHIGMEJQ");
    msg.visibility.assign("QZGTCGSWBVKQIJSBGPNXFIFUQRLRIEWHXUJXCXZNUQBDLDDCTHWEFZNMPJIHYLZYGUPJYOTSDUGQULMCPAWRCYAJESGLALRNNGJEKOT");
    msg.scope.assign("OIKEMHNGEJGQYGZCBXHPKAEFBJNYEDWDKYQTZEIBUHHCNAAUHVIDVLATFPMYOFTPTRHXARPNZBVLBDJPSGATSJWCDIRMDWDXOSSISTJHOAROEFFIXPWBZGXQHQXQENWVZPYUZTVLARSKFQWWYUYNCIXVRXKNVBXNJTWBUVQCDKKLAMPQTUCKSMZGYDJMMFUCFKELUNFGBIVNIAGOEXZYSYCRKWGOV");

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
    msg.setTimeStamp(0.9045282586456109);
    msg.setSource(52942U);
    msg.setSourceEntity(111U);
    msg.setDestination(63080U);
    msg.setDestinationEntity(195U);
    msg.name.assign("GAQDWBPAORUEFQUPITSSXPWIPWJZDJCHDICTYZZCWTRIOCFDJJVRVRFETRVFXSOFYBEQXCYLSHJUHIYSDEABNGDOSSBQNYNCPDHKQMMDFKGCALQKKXUQQPNACMBZLJEICXLHMURGEZKJWBVFAMPRYLOHRBKEXUTRVZXTZYHDTXKWNWSXVLUHRZFXMIOBNSNANBHMLMSKLGHOYFOVYQNQFCOIIZWGKLEVPAEADUGVMVJYPNTTKPGJUAWMZWJIG");
    msg.visibility.assign("QCOCMFOWORPDHBKZQIOPOWLBEFFSEVFZCORGTHZXOTELARLRYRCNBNQMQITXUCZZDGRFYFSXMKLF");
    msg.scope.assign("NPYYYBWGPHHZKZRJAQVZBHMAOICHVJOEMDGLEQLWUOGTQOVFQTNBUEPREFIDZNYBGTIWMFBOSYMPYCIQJNXZCVEHXKADPXAKRRCBNLFHOZMDTWURFKTXYSCFZOJYSAXNILGSPBCULKSHMCUXUWSUFDKEUHRIMWTDLPMEOGNIGNVJVTCWBJWTU");

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
    msg.setTimeStamp(0.7978084566045156);
    msg.setSource(50209U);
    msg.setSourceEntity(111U);
    msg.setDestination(64385U);
    msg.setDestinationEntity(244U);
    msg.name.assign("NPZBVCBUZHNFRIAMACRXYROOVSHDXAQSIGLAWITGOVTPMJIBPAKUVEJNBCKPTQFUEWJVTWFMYRWORDDXEOTLHBOXNZHVFOVWX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LUHDMIUMMZAAUYXSJEMDMAVWEMCVVLFQHWOOPFWSCXYAABFQWLXWKXJCUVXYGKWERAZHKPNO");
    tmp_msg_0.value.assign("MJVAWPYVFRHDPZREIL");
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
    msg.setTimeStamp(0.6180357465010592);
    msg.setSource(34726U);
    msg.setSourceEntity(22U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(5U);
    msg.name.assign("UNQUIKCOZJOJUYDGLABGDCFBG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TGTXBIVYUZUYHRIKBELSIPKQOYJRMTOAKQWYBQCUWVJTAVVZUMVUEVOACBGHIYHOUXNGYNNBZYXHZIKGELDYALLVACDIKGOMIRNZFGBTMWEUGEJWICPRXDEAVTOMSMTHSPQQRFSFRDJCFPNBZKSSPWBQLGDWSZQPXK");
    tmp_msg_0.value.assign("EGDIRSIWZZWAPSOCNMZKGSPLIBTBDOANEMARPPYORCRKBBFQAUIDHZBHUTDJKVQDXDSFFIXXPGEMJZZUGDAGSMEGKZQXQLAHEUPAYFIKSWLOPTCISLYNPXICOENVVEEYMVCJAQRYMRTGSMGFMHWSHMZXTCKLKWJUEXXGKUCYONWBCJQYITOLVNQUEXVWHFVD");
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
    msg.setTimeStamp(0.9322020775225051);
    msg.setSource(36868U);
    msg.setSourceEntity(3U);
    msg.setDestination(26920U);
    msg.setDestinationEntity(144U);
    msg.name.assign("RRLQZINMQARDESZNBTGFLURSQYVGQARXDSMZDBXSZOLBGVGDKPELNNPBLTHBIJZOHMYOMBACYITPJHAVZPETVFKTDKMUJFWGQKPYUWENJUYEMPHSOSIORLRFJBMIPNZCXGFZJEXYYRNHTAVHCBWPCSGXVFKAIKULFTKGXDVKQENUIWWKABZGMIHTZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BSUFEDZNAWYYJYKFFYSGRUMPXWIBBNISRGHXNGQCYQTOXZMRLPDMMIPRKCXGPBCPFGRKPJHWOJXLZHBTDTUUAECOWKKSRDPGMZIQZUTNAVTTUCKLHEBQLGHVFOSLQENNOGZQLDAXFEIBAVDHLEQCYCZSNXWAHMJYDIRXUYMKTQPWFMXIKDIQXFFOOEMKJAASNZWHVHCDYVAIZTJLUBQCJJUROEHWYVPNMDWUNSGEZTVLOJOLE");
    tmp_msg_0.value.assign("GIBTRWGYBEKTKQAYDJXRZGRSOSYYCOWIOGXVMSMBBBTNJSHYUBUKPCYZWLXKWPECXDNAZPEWPOVYIDBJGWMFKEMVJYAAHANLPIOVXUOXJXTEONZCNCSARALUIIJ");
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
    msg.setTimeStamp(0.050829949309198263);
    msg.setSource(55589U);
    msg.setSourceEntity(215U);
    msg.setDestination(56646U);
    msg.setDestinationEntity(229U);
    msg.name.assign("MBMIIWFRLNXCPWJWCCGCVYPPVSTUXWFKDCVUJMBZRMTXAVAUGSKIZQOYEBDPOHDDRGOWYFCLDDAVV");

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
    msg.setTimeStamp(0.1449257731271838);
    msg.setSource(2186U);
    msg.setSourceEntity(248U);
    msg.setDestination(32451U);
    msg.setDestinationEntity(113U);
    msg.name.assign("SBHTMDYKTCCHKJFKLEZSWREGXBYRTAVXFBJQPMYIECGCAVQPQELNMRSQHOKYIUAMGRKZNUNSJIHFKVNVVKCCOGDOSOJETJUMOGYVYZNYWNEWIOANLXZKNQISGZGMLGJTDSFUIMFUQBJNCMZATRUFDXBPAKRRQTYHMVTXROXKEJQUIIPLTWZDVNWWWHCEZPEOWBALODXPZPZYDVFBSAJE");

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
    msg.setTimeStamp(0.13523536175465578);
    msg.setSource(22533U);
    msg.setSourceEntity(156U);
    msg.setDestination(33699U);
    msg.setDestinationEntity(122U);
    msg.name.assign("ZXQCYGWYCEORVLKOWPTSDGIPZBXEZZZLGKLNYFODHEFXOUCXLJQRPWHRTMJPGHNHOQCWUPRYNVGLGHOPHKLFQIEVXNUXXNQKFMDVAFRIFZPNJAOWUAFGHQQJIDOHNZRKPLIYNRNAVXBTRWUVTJBPMXJTUSBUTSWAYJUGEBCCCUEIMQKFTDEFGBPJOMYESSACCMKIKXTZAERKBSBLZMLKMWJSFNMMCDYDBUZDOIVTQYAALRDBHIWSDE");

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
    msg.setTimeStamp(0.4471853027682021);
    msg.setSource(54861U);
    msg.setSourceEntity(3U);
    msg.setDestination(22168U);
    msg.setDestinationEntity(51U);
    msg.timeout = 4287102402U;

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
    msg.setTimeStamp(0.5721140978734757);
    msg.setSource(7654U);
    msg.setSourceEntity(98U);
    msg.setDestination(23239U);
    msg.setDestinationEntity(239U);
    msg.timeout = 270017423U;

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
    msg.setTimeStamp(0.5765380016584595);
    msg.setSource(32172U);
    msg.setSourceEntity(161U);
    msg.setDestination(33624U);
    msg.setDestinationEntity(63U);
    msg.timeout = 666487017U;

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
    msg.setTimeStamp(0.40506577618867556);
    msg.setSource(50412U);
    msg.setSourceEntity(196U);
    msg.setDestination(49754U);
    msg.setDestinationEntity(152U);
    msg.sessid = 2189996180U;

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
    msg.setTimeStamp(0.7939829580402121);
    msg.setSource(10364U);
    msg.setSourceEntity(122U);
    msg.setDestination(30271U);
    msg.setDestinationEntity(64U);
    msg.sessid = 1639190028U;

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
    msg.setTimeStamp(0.5311715012311837);
    msg.setSource(50608U);
    msg.setSourceEntity(31U);
    msg.setDestination(64460U);
    msg.setDestinationEntity(231U);
    msg.sessid = 3271627631U;

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
    msg.setTimeStamp(0.8900005966691501);
    msg.setSource(20958U);
    msg.setSourceEntity(7U);
    msg.setDestination(8050U);
    msg.setDestinationEntity(112U);
    msg.sessid = 1468173616U;
    msg.messages.assign("JSDZEIWCUINZYH");

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
    msg.setTimeStamp(0.12097910047176408);
    msg.setSource(52491U);
    msg.setSourceEntity(19U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(12U);
    msg.sessid = 3974396083U;
    msg.messages.assign("EJYPEXBNGZLWVBKWUWSOUYVFNJIZVZFATRNLXVFDQEJFWHZRBTOEUITYTTJETAGXHWPLRCWLKUIHXUAHQGLIYKPQELXJMLVSQMFOSJGUFFPSSEIBMSJHPDVGNHVZHSCDAXGDPWRCHTEPRIDKIWUGXZTVYRCQ");

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
    msg.setTimeStamp(0.4152282104790289);
    msg.setSource(35733U);
    msg.setSourceEntity(208U);
    msg.setDestination(17942U);
    msg.setDestinationEntity(7U);
    msg.sessid = 2987508781U;
    msg.messages.assign("FXYRERCHXXBMBWUSYPEHJZRMPLGFXWNDIAJJUG");

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
    msg.setTimeStamp(0.6876617291107628);
    msg.setSource(41870U);
    msg.setSourceEntity(152U);
    msg.setDestination(56847U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2290898029U;

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
    msg.setTimeStamp(0.3067288651540572);
    msg.setSource(45046U);
    msg.setSourceEntity(234U);
    msg.setDestination(38593U);
    msg.setDestinationEntity(123U);
    msg.sessid = 3373116434U;

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
    msg.setTimeStamp(0.9829373145577136);
    msg.setSource(7088U);
    msg.setSourceEntity(9U);
    msg.setDestination(60321U);
    msg.setDestinationEntity(141U);
    msg.sessid = 2087000016U;

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
    msg.setTimeStamp(0.7298697292735115);
    msg.setSource(30463U);
    msg.setSourceEntity(72U);
    msg.setDestination(49555U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1474733336U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.3889176290291285);
    msg.setSource(17437U);
    msg.setSourceEntity(153U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(11U);
    msg.sessid = 224651496U;
    msg.status = 76U;

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
    msg.setTimeStamp(0.13392867179063572);
    msg.setSource(57779U);
    msg.setSourceEntity(32U);
    msg.setDestination(40948U);
    msg.setDestinationEntity(11U);
    msg.sessid = 2033966247U;
    msg.status = 31U;

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
    msg.setTimeStamp(0.8860131290017212);
    msg.setSource(38485U);
    msg.setSourceEntity(241U);
    msg.setDestination(3691U);
    msg.setDestinationEntity(102U);
    msg.name.assign("MNRZDESHIEBCPCWNAVKJRNUICZMEPQALLCCNYWOHXSJXYMRFZZZQRWPNRFTWSXQLHTTQOYBEVGJIFUZPULDGBSUYSDYAGASQBDOMXKJPSFUPRKSEOXXVXHEXHCM");

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
    msg.setTimeStamp(0.39957700261528906);
    msg.setSource(35943U);
    msg.setSourceEntity(141U);
    msg.setDestination(38418U);
    msg.setDestinationEntity(80U);
    msg.name.assign("YUDOTCABMMRCJYSFOQVSVIZQVIMTXFUFUUBSJVPBKURDDLSDVDZLVHAYAWROLSRZIWQTJGANKUPIJJKMWGACULOIEOZNCPTMGFOLCNHERUTYCFCQAZXLJAHPYDRSVYGXNTAKBPHLEUGQLXSKWYBIHOFERFGXINPTSIMBOLDNNXIBARWWYBJXKXYCUQVTPRQTFSZHDOBJTGHVEHXIGPNWWYOPEBKQMSKZNXEKKMFGCEDDJQHAFWGEZJ");

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
    msg.setTimeStamp(0.4740343031959604);
    msg.setSource(7596U);
    msg.setSourceEntity(219U);
    msg.setDestination(17660U);
    msg.setDestinationEntity(169U);
    msg.name.assign("SSAERKUPLPNIKXAPOFXZERHJBDSIAMFNIQBTCTGHWYBGESWWSXLUQGDYMVUIOBNRGOSXWCLJDZMBCRVHJJCFQMXSJYHCLTBYQZQQYFUKDBHZMEHBZWWGTTUPMOHUWPLDJKUXKQJVYOVCYTPHMNELQFAAXOXXITNAEWVLHYZOZDEKLJWEFIQDYCKARDLJ");

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
    msg.setTimeStamp(0.6935372636281492);
    msg.setSource(47130U);
    msg.setSourceEntity(40U);
    msg.setDestination(51671U);
    msg.setDestinationEntity(244U);
    msg.name.assign("SCMMEXXQQBXFRYIFXTRELMDGDEQURKTILURQRPCFLYFRNHPRVFUWUPPHDLULTOVIDKKSEYTOPZXOK");

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
    msg.setTimeStamp(0.004564504573994266);
    msg.setSource(52452U);
    msg.setSourceEntity(125U);
    msg.setDestination(4889U);
    msg.setDestinationEntity(254U);
    msg.name.assign("QAVIGNLDZGQFIYRULDTJECWCFAOASPTYCLUDFPDHYQKFZHETJZKOWNJCEAFMPLNVJIOOKDGJBQUHOKYFGVKGMKEWRPHJDPZEDRQFWKMSTLDRAVIISBRHQFZQBEURRXPBTBAUYWGJVLZXMWTBQETGIVRBGOUUXMLAZPCFQSJHPX");

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
    msg.setTimeStamp(0.6743701958899155);
    msg.setSource(9984U);
    msg.setSourceEntity(169U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(96U);
    msg.name.assign("LEGPQZOIVBHPLDXGARJZKHUQBSBOULHTAWQMYKTECGBOZWZINYDVHLXCRWRTRMHWRKMSIVNDJOLKTYHVHDDTUWZBVMZEKSUMXPIMPWEGYPFQZOJMASAIUWKCIXFJJNFCNMBYRCNTNXQPCTUYCFONKESTSQAYICFGVOVLVGCWATJXBSJSOJAMQFGQGDECFXUFWVNZUXEISPLHGUYHKTPRQQPAFRRKXLLDRIBONJIYMFZBNUHKZYPDVEJEABSGDL");

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
    msg.setTimeStamp(0.8279469446050441);
    msg.setSource(58388U);
    msg.setSourceEntity(179U);
    msg.setDestination(48706U);
    msg.setDestinationEntity(163U);
    msg.type = 140U;
    msg.error.assign("DNDCMMTVRMTSLLNRPPCYDJPBGSAUNHDBFHJSHNPZLKCYBUWLIEXTXUZ");

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
    msg.setTimeStamp(0.05130437941032018);
    msg.setSource(9309U);
    msg.setSourceEntity(144U);
    msg.setDestination(15284U);
    msg.setDestinationEntity(132U);
    msg.type = 165U;
    msg.error.assign("KIQCBNLGAZTFOHAXKIHELFGLSXQJPFNDMILRJIWYRFOTBOHBMJFLZUJSRVCNNECBELWXIXKCFDDEGZWKXGKDVKSSZDBMRRQOUOPFJXEIBEJGQKFZCTMUQVPVNZTEAEVBRHUMLFEANTYMASZPZDOWNQDTOYVTXBRAMAIRJAHOVWYPUYTHHHDWCWSOSLCBVCCJZXPDSKNDUMGTEUXIQUWPHYQJIUGA");

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
    msg.setTimeStamp(0.7038438958649899);
    msg.setSource(32112U);
    msg.setSourceEntity(178U);
    msg.setDestination(46179U);
    msg.setDestinationEntity(145U);
    msg.type = 16U;
    msg.error.assign("QGDBKSOYCAFCFRPZGVXIWRTKEIBVZZEXKUYCVJQLNCJ");

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
    msg.setTimeStamp(0.9348254576399795);
    msg.setSource(23999U);
    msg.setSourceEntity(206U);
    msg.setDestination(28492U);
    msg.setDestinationEntity(192U);
    msg.seq = 19653U;
    msg.sys_dst.assign("TYQXORXGPTRPKZEVRSNJWEAAOAQIXKQEYJNDGSEDDMVFQWUQPKWLQYBBOPTU");
    msg.flags = 162U;
    const char tmp_msg_0[] = {59, 123, -53, -112, -25, -82, 122, 99, -97, -7, 97, 3, 72, -88, -39, 80, 3, 35, 77, -56, 30, 53, -79, -71, -123, 66, -104, 66, -79, -44, 69, -58, 115, -84, -124, 94, -117, 29, 6, 6, -11, -123, -7, -2, 70, -94, 77, -109, 84, 105, 93, -59, -113, -34, 17, 83, -122, -13, 19, -19, 67, 66, 43, 126};
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
    msg.setTimeStamp(0.14255874273206182);
    msg.setSource(28220U);
    msg.setSourceEntity(164U);
    msg.setDestination(42444U);
    msg.setDestinationEntity(1U);
    msg.seq = 6405U;
    msg.sys_dst.assign("DZREJFRPKRWQEBXXMNFXEIMNTYZJXCZIKOZNEBVWNYJQPWB");
    msg.flags = 172U;
    const char tmp_msg_0[] = {84, 67, 42, -77, 126, -93, 59, -70, 50, 54, 100, 121, -37, -8, -123, -50, 104, 62, -34, -102, 43, -111, 64, -94, -13, 71, -97, -80, -74, -36, 53, 36, 8, -12, -52, 10, 74};
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
    msg.setTimeStamp(0.05368186317019363);
    msg.setSource(21014U);
    msg.setSourceEntity(94U);
    msg.setDestination(65459U);
    msg.setDestinationEntity(133U);
    msg.seq = 25474U;
    msg.sys_dst.assign("QIYQAVWFALBRMJVVWKTZEZCZJWONWOWDPAVDZEGZUQGNXHUNWDCRLKNFMPCAIRUNEJLNSSGCHKVVDBPCNKTHBOXRPILXDFUALTVJXPMWBYKZCAMSCTXZHYWMRFNPCXEGUETTUWPIZSIOMLNLRQMQTSBBEGIIHPOABJEVKBKDLHJDMWOSXQEOQQQ");
    msg.flags = 213U;
    const char tmp_msg_0[] = {-113, -79, -51, -29, 1, -68, -20, -14, 17, -126, 125, 24, 116, 78, 101, -108, 3, 64, -18, 77, 111, 5, -30, -11, 31, -4, -20, -7, 31, 121, 19, -61, 7, 7, -86, -2, -54, -117, -80, -21, -106, -65, -88, -6, -112, -124, 74, 97, 8, 15, -88, 42, 41, -97, 23, -37, -96, -46, -123, -127, -40, -27, 5, 3, -111, 20, 55, -102, 106, 104, -9, -108, -114, -65, -99, -105, -88, -99, -83, 24, -70, 110, -69, -86, -7, 8, 83, -20, -84, 39, 2, 45, 91, -93, -8, -126, -87, -104, -68, -59, -17, 38, -81, 114, 68, 112, 12, 31, -46, -47, -114, -5, -10, 16, -23, 94, -9, 108, -115, 114, 121, -76, 104, 25, -98, -11, 83, 113, 120, -18, 111, 76, -98, 12, 56, -63, -87, -7, -68, -43, 94, 14, -119, -93, -109, -28, -116, 18, 49, 33, -112, -105, -43, -91, 51, -22, -64, 124, -76, 5, 104, 93, 51, 124, 78, -110, 42, -89, 25, -108, -18, -61, -105, -54, -121, -39, -85, 115, 111, -106, -67, 12, 88, -114, -47, -118, 109, 113, -7, 103, -128, -96, 119, -24, -94, -73, 7, -112, -110, -21};
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
    msg.setTimeStamp(0.5191430565789105);
    msg.setSource(32960U);
    msg.setSourceEntity(238U);
    msg.setDestination(42837U);
    msg.setDestinationEntity(146U);
    msg.sys_src.assign("QOMQSGTMLBOBJJBHRJAMZNYAHTTGIZXDWLXNPJPATHILKVENQACNLELEZNGYQAQXFMAREWPKKGZAOJXCATCQHEQZNVDZRQQXVJWDDROYHCB");
    msg.sys_dst.assign("WOUCUMPEJTOYQQJZOEVZCVPVQHFJBAILNVBRGEIMRQLXAMDWLHYPQCCDFOBFGLVJYCONDHVMSFRPU");
    msg.flags = 30U;
    const char tmp_msg_0[] = {18, -95, -63, -81, -45, 28, -75, 72, 96, -54, -34, 126, 24, 99, -33, 95, 112, -103, -106, 51, 83, 121, 76, 88, -39, -72, -21, 69, 0, 4, -57, -44, -5, 38, -104, 66, 71, 56, 47, 60, -37, 39, 91, -20, 106, 87, 16, -38, -58, 17, -37, 125, -106, 119, -70, 49, -112, -3, 3, -81, -104, 36, -38, 54, -51, -23, 66, -25, 64, 54, 35, -81, -12, 53, -73, 49, 98, -72, 1, -68, -95, 44, -91, 36, 117, -104, -10, 25, -78, 93, -79, 14, -49, -7, 87, -5, -17, 26, -39, -43, -76, 10, 37, 83, 25, -101, -36, 58, 32, -68, 53, -12, 15, -35, -73, -50, 36, -103, -60, 38, -6, 49};
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
    msg.setTimeStamp(0.10154535479225935);
    msg.setSource(57468U);
    msg.setSourceEntity(57U);
    msg.setDestination(13357U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("EBHPXESNOGSIPYKWOATDAHEOUJOOAQZTJRPTVIFWTNFVLOULCIEQTKWHKDMOHQXWIYNZMWFIMFCCJCTIUCZMBLDCKAKBLPLVAAMXYSMJSGBENUZSFRPDLVUKRUSELYGYYVACRNDZWXIHXGPJJGVAAGYNRHTPYNHAEIEDKGBFZDMOVXMSU");
    msg.sys_dst.assign("KNCMCZTNMHVBTFNZSLB");
    msg.flags = 120U;
    const char tmp_msg_0[] = {37, -76, 44, -54, 32, 64, 79, -104, 118, 57, 113, 25, -100, 21, 28, 91, 73, 102, -28, 22, -23, -123, -23, -112, 99, -112, 80, -121, 87, -17, -86, 121, -48, 115, 37, -57, -109, 122, 6, 123, -94, -115, -104, -39, 66, -61, 23, 17, 126, 22, 111, 48, 95, -33, -39, 92, -97, 61, -84, 63, -20, -100, 59, -22, -119, 72, 84, -121, 116, 6, 85, 100, 3, 65, -81, 105, 86, -53, -115, 117, 28, -35, -69, -102, 88, -22, -41, 124, -1, 65};
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
    msg.setTimeStamp(0.46588251970653516);
    msg.setSource(27216U);
    msg.setSourceEntity(126U);
    msg.setDestination(57651U);
    msg.setDestinationEntity(189U);
    msg.sys_src.assign("IEMQSJCDOZPTIOOTUBSGTGJSMNLBXRXSGPLBFXAXAWEOKYLPXLAZRAZUSBWFEUKNHILDPLHFTINMUQAUCBELGWRGKXRHYIRTR");
    msg.sys_dst.assign("UBDXGAQLTJCNTPPLIQOSZWKOWFPQAKFHVKDTCKECDRHXJRSLKQUTVZSORYSEHCGQNLEJZFQGNXYP");
    msg.flags = 40U;
    const char tmp_msg_0[] = {88, -64, -52, -49, -33, -44, 120, -59, 105, 26, -91, -105, -8, 65, -81, 90, -5, -118, 51, -54, -100, 111, 18, -58, -37, -7, 103, 117, 106, -70, 25, -54, 37, -22, -55, -19, 104, -100, -50, 37, 44, -103, 43, 39, -101, 11, -75, 83, 106, -10, -17, 64, 68, 86, 36, 100, 81, -59, 58, -45, 46, -105, 53, 116, -40, -19, 15, 119, -80, 44, -69, -112, -30, 50, -82, 28, -97, -73, -27, -74, 44, 76, -90, -85, -59, 92, -81, 80, -16, 70, -128, -51, -32, -27, -48, -22, -31, 10, -66, -21, 61, -72, -106, 124, 107, 100, 63, 2, -58, 87, 36, 114, -48, -98, 62, 62, -52, -10};
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
    msg.setTimeStamp(0.6036522178370713);
    msg.setSource(29697U);
    msg.setSourceEntity(21U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(219U);
    msg.seq = 45463U;
    msg.value = 143U;
    msg.error.assign("OHZGEJVCHINNQTACQKIUAFRLPZFFYAYMILJXRZCXKCVZFKYSUBPEQVBOYKMEDYZBGFKZWAUTNLTHWACBPBPQLMMCMVSJHSRBSNSBQTNCDFD");

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
    msg.setTimeStamp(0.1776420355218834);
    msg.setSource(12597U);
    msg.setSourceEntity(123U);
    msg.setDestination(4070U);
    msg.setDestinationEntity(199U);
    msg.seq = 40764U;
    msg.value = 94U;
    msg.error.assign("ERDAGFHPZMWEBDQCWVHHYKDIBNAMDHOIRXDNWPLAHI");

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
    msg.setTimeStamp(0.8684993717214821);
    msg.setSource(41069U);
    msg.setSourceEntity(68U);
    msg.setDestination(42634U);
    msg.setDestinationEntity(89U);
    msg.seq = 18034U;
    msg.value = 206U;
    msg.error.assign("SXUEMDYPYMOJJVFVUSFIHAGHYSGYFRLAKWJDSTGDZNQVRILYHDZPTQUHQAWYBHEASAFEJLQALNBIXGYVBGNSPATVHORELTFOVQQBMBMOGKEP");

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
    msg.setTimeStamp(0.22044659535425182);
    msg.setSource(3015U);
    msg.setSourceEntity(156U);
    msg.setDestination(11697U);
    msg.setDestinationEntity(12U);
    msg.seq = 16871U;
    msg.sys.assign("NROPJKHJTSHOWUZTVRNMPPOCBCPSRNIPDTSWBQZCTZQOCIRXYDUGHAXCLALFGBXZFESRIZRMVQXNHJDKNZQHGKGXLXVWTLBHOFSUGQASMGOFYKGIVDWVAXFWQAHWSUABLVFYMQJUL");
    msg.value = 0.39660448217535826;

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
    msg.setTimeStamp(0.6075705722695706);
    msg.setSource(15657U);
    msg.setSourceEntity(213U);
    msg.setDestination(45383U);
    msg.setDestinationEntity(218U);
    msg.seq = 42579U;
    msg.sys.assign("CIIMTSDMOBKEJYYPDGMSTAMISAWLYPVEKWTVCBJRPHEWJFCHBMWTLIMDIDQJBKVBIOLEAKTJYPFNQBQUHKGVALCLRPYUTQJDXDLYPZXBAHKNJURUWZENMQMIZQEDRWQWLVZDTCFRPOFWUBLEEEOMNJVZXBXOSYKIHICHQXKDLPKVHAGCRUFVUCXXNFGSHFHTN");
    msg.value = 0.4965981130719599;

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
    msg.setTimeStamp(0.2196812220956137);
    msg.setSource(65284U);
    msg.setSourceEntity(130U);
    msg.setDestination(17946U);
    msg.setDestinationEntity(9U);
    msg.seq = 63278U;
    msg.sys.assign("VZKFIGWJNRWOSJDQRQHHAAZEMEWKLISIBOFYYPCKHRZMYXKWAHIHGSZXVQHVEUYHUERRYZMATVWUGFBPRJWSTQWZFQUGMPQNLXUTOFXVCMXNFMTNMALMSOWBOBFYAAVERAXSGEZEOADQLNBKPIJJXVKLIVKLLCJICRUNDJBCROLMCGGBKUAIWHTGCLWJHPFLTUGYFIBPBCDHQCUTTNSTV");
    msg.value = 0.4936804745183889;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.09204130807030597);
    msg.setSource(49271U);
    msg.setSourceEntity(172U);
    msg.setDestination(45297U);
    msg.setDestinationEntity(147U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.15481413122572152);
    msg.setSource(55348U);
    msg.setSourceEntity(47U);
    msg.setDestination(61920U);
    msg.setDestinationEntity(32U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.12032060276100309);
    msg.setSource(54370U);
    msg.setSourceEntity(50U);
    msg.setDestination(21786U);
    msg.setDestinationEntity(109U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9057446371993536);
    msg.setSource(16411U);
    msg.setSourceEntity(210U);
    msg.setDestination(9227U);
    msg.setDestinationEntity(247U);
    msg.action = 41U;
    msg.longain = 0.09658418045172412;
    msg.latgain = 0.3978492031377838;
    msg.bondthick = 3432585425U;
    msg.leadgain = 0.6520627257541383;
    msg.deconflgain = 0.3091400148742819;

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
    msg.setTimeStamp(0.3765983290160416);
    msg.setSource(12342U);
    msg.setSourceEntity(16U);
    msg.setDestination(7839U);
    msg.setDestinationEntity(35U);
    msg.action = 171U;
    msg.longain = 0.9754276857766628;
    msg.latgain = 0.3987133013596751;
    msg.bondthick = 2719010283U;
    msg.leadgain = 0.4849337016927928;
    msg.deconflgain = 0.20512217103484387;

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
    msg.setTimeStamp(0.23780801664325513);
    msg.setSource(32814U);
    msg.setSourceEntity(164U);
    msg.setDestination(22850U);
    msg.setDestinationEntity(168U);
    msg.action = 20U;
    msg.longain = 0.27932494217695314;
    msg.latgain = 0.7261068320875794;
    msg.bondthick = 3925455855U;
    msg.leadgain = 0.14357868574201804;
    msg.deconflgain = 0.3785610452499465;

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
    msg.setTimeStamp(0.30916120486739607);
    msg.setSource(31300U);
    msg.setSourceEntity(169U);
    msg.setDestination(56507U);
    msg.setDestinationEntity(186U);
    msg.err_mean = 0.24351892383366525;
    msg.dist_min_abs = 0.6807613493796119;
    msg.dist_min_mean = 0.9147577678333761;

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
    msg.setTimeStamp(0.70408003981077);
    msg.setSource(33489U);
    msg.setSourceEntity(133U);
    msg.setDestination(1723U);
    msg.setDestinationEntity(61U);
    msg.err_mean = 0.3256457251807332;
    msg.dist_min_abs = 0.5612919785216917;
    msg.dist_min_mean = 0.4868784516330863;

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
    msg.setTimeStamp(0.6561622171693076);
    msg.setSource(14114U);
    msg.setSourceEntity(236U);
    msg.setDestination(28951U);
    msg.setDestinationEntity(143U);
    msg.err_mean = 0.3418139131165545;
    msg.dist_min_abs = 0.47101298043848494;
    msg.dist_min_mean = 0.42753453865286717;

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
    msg.setTimeStamp(0.4920213281956376);
    msg.setSource(15557U);
    msg.setSourceEntity(236U);
    msg.setDestination(20984U);
    msg.setDestinationEntity(4U);
    msg.uid = 204U;
    msg.frag_number = 215U;
    msg.num_frags = 54U;
    const char tmp_msg_0[] = {-15, -104, 90, 14, 75, -79, 108, 123, 22, -120, 108, 9, -16, -115, -64, 74, -24, 33, 40, -18, -8, 48, -108, 85, -3, -117, -49, -48, -36, -6, 107, 37, 38, 1, 101, -122, 88, 94, 30, -15, -104, -128, 52, -123, 94, 70, 4, -123, 46, 77, -126, 41, 111, 41, -108, 126, -28, -124, -19, 6, -119, -72, -55, -45, -38, -4, 4, -41, 23, 51, 55, -20, -60, 88, -18, -48, 51, -82, 30, -125, -39, -76, -124, 107, -113, -51, 35, 100, -110, 59, 49, -78, -43, -12, 81, 2, -48, -99, 87, -61, -113, -30, 34, 7, 60, -108, -19};
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
    msg.setTimeStamp(0.8205563465022965);
    msg.setSource(2163U);
    msg.setSourceEntity(48U);
    msg.setDestination(26747U);
    msg.setDestinationEntity(18U);
    msg.uid = 40U;
    msg.frag_number = 198U;
    msg.num_frags = 125U;
    const char tmp_msg_0[] = {-44, 115, 43, 15, -75, 64, 108, -92, 66, 23, 34, 60, 101, -91, 85, 121, 37, -4, -38, 118, -29, -21, 16, 111, 15, 83, 122, -84, 8, -2, -65, 6, 108, 82, 6, 84, -50, 29, 64, -105, -16, -106, -84, -91, -4, 70, 71, -38, -13, 94, -127, 61, 27, -30, -11, 124, -91, 13, 67};
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
    msg.setTimeStamp(0.19006738282915636);
    msg.setSource(36332U);
    msg.setSourceEntity(14U);
    msg.setDestination(38302U);
    msg.setDestinationEntity(196U);
    msg.uid = 36U;
    msg.frag_number = 112U;
    msg.num_frags = 101U;
    const char tmp_msg_0[] = {-104, 68, 87, -54, -95, -71, 45, -95, -74, -94, -49, -57, 34, 71, -49, -123, -125, -70, 125, -128, -69, 74, 13, 76, -2, -100, 47, 31, 94, 23, -21, 16, 12, -79, -64, -123, 80, 14, -109, 96, -85, 119, 100, -65, 9, 88, 36, -83, 74, -123, -97, -13, -23, -115, 98, 124, 21, 58, 93, -126, 110, -43, -47, 95, -5, 51, -87, 119, -103, -41, 79, -2, 31, -32, 25, 85, 57, -29, 39, 20, 21, -69, 126, 71, -22, -88, 50, -75, 125, -84, -97, 41, 80, -8, -33, 23, 98, 18, -86, 76, -32, -30, -59, -64, -19, -103, -47, -67, -79, 89, -94, 68, -81, -89, 38, 24, 32, -117, 123, -107, 73, 84, 77, 27, -53, -36, -109, -14, 107, 15, 113, 112, 18, 68, -107, 26, -8, -70, 81, 5, -57, -74, -58, 37, -122, -32, 54, 99, -41, 1, -18, 47, -57, -89, 69, 97, -16, -82, 73, -5, 102, 91, 35, -71, -2, -30, 78, 27, -39, 14, -82, 86, -37, 101, -120, -5, 111, 99, -62, 66, 19, 14, 0, -27, 32, -125, 79, -34, 78, -84, -119, -82, 91, 81, -90, 102, 63, 72, 28, -44, 66, -82, -26, -30, 99, -112, 79, 76, 67, 23, 27};
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
    msg.setTimeStamp(0.2987434961038231);
    msg.setSource(24978U);
    msg.setSourceEntity(24U);
    msg.setDestination(20231U);
    msg.setDestinationEntity(51U);
    msg.content_type.assign("CMTJDKZDUAEGFTKQMOYBRMXOMOAQQJGCIIQFVQDKBZNBHVEAGYNEWGGYMVSGCAUKVPJWHWLJMBTZYOXFXNBYSPSZVOAXACSTDLHSIJUGPITMFBYGXFXUISDOBEJNNTCWKHLZGHAWLDOHRPLPUSKQVVRRRHRFESTFCHBNIYNEKPDJDAKHXJS");
    const char tmp_msg_0[] = {12, -21, 37, 10, -47, -19, 65, 52, 15, 27, -82, 1, -85, -54, 95, 64, -43, -99, -61, 87, -26, -6, 5, 113, 59, -37, -93, -25, 56, -98, 94, -104, 45, -115, 14, -112, -50, -125, 48, 63, -113, -57, 8, -15, 80, -100, -100, 102, -111, -106, 27, -53, -25, 77, -3, -51, -25, -41, -51, -86, 119, -91, 32, 57, -107, -106, 75, 89, -90, 105, -113, -41, -127, 29, -10, 24, -8, -80, 93, -111, -45, -6, 78, -44, 80, 119, -45, -2, -16, -26, -48, 52, 77, -38, -27, -22, 44, 23, 82, -18, -112, 54, 51, 5, 66, -39, -42, 3, -92, -6, 8, -30, 26, -40, -122, 23, -101, -75, -4, -45, 0, -62, -48, -33, -57, 49, -124, 62, -55, 95, -28};
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
    msg.setTimeStamp(0.3068737007508646);
    msg.setSource(12859U);
    msg.setSourceEntity(69U);
    msg.setDestination(58885U);
    msg.setDestinationEntity(81U);
    msg.content_type.assign("RICCCYVGLFIZILQAMFUNIBPUJSESKVLNUFSFYHJUQYIWTQOZZTEEDMFGPFPBGVOBYORDAKMJOCVBXYDHMCIZNNTQTBQEWZOXCSBRHQTMJXXWQ");
    const char tmp_msg_0[] = {-21, 116, 68, -72, 34, -50, 34, 27, -47, -93, 119, 102, -50, 1, 71, -59, 77, -2, 14, -15, 108, -23, 26, 46, 40, -59, 92, 18, 69, -66, 72, 114, 94, -33, -106, 20, -92, 8, -4, -57, 15, 53, -121, 87, 83, -83, 101, 88, 103, -55, 98, -19, 25, -22, 59, -7, -8, 69, 86, -27, 26, 32, 23, -115};
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
    msg.setTimeStamp(0.00496738643957928);
    msg.setSource(718U);
    msg.setSourceEntity(213U);
    msg.setDestination(9366U);
    msg.setDestinationEntity(49U);
    msg.content_type.assign("SHOVADHRPMPLEKONXMCPPANQHOOFMLHCCSWQYRNUSLVDRVOZVGZZEUJDWZNERPWXSDYHXUBBYUNFBNGZOLMWZPJIQGMABDLCOQZJFAENMAKRFYDKBRCOSJHEWGIZYBRTHTAPJKSFRDQJFUGIVLYVNWLESBPITGZVTCQKPVSBUGCFIYTAWYQZXDTLMUALGKCVXFHFXOWTHMEUEJYJSBXIVXILRYIATDXOHKGJQRCUEKUCM");
    const char tmp_msg_0[] = {7, -118, 24, -120, 64, -57, -91, 71, -20, 77, 100, -124, -27, 26, -89, 51, 110, -51, 50, -96, -63, 15, -37, -68, 77, -37, -83, 40, 116, -106, 18, -57, -45, 7, 60, 6, 94, -108, 90, 85, -52, 20, -26, 70, 99, -61, 75, 93, 69, -75, -53, -38, 79, 55, -10, 51, 121, 102, -99, -21, -122, 105, -60, -88, 15, -113, -79, -28, 25, 19, -60, -112, 17, 59, -30, -105, -69, -55, 98, -14, -30, -4, -7, -62, -91, 94, -25, 4, 105, 18, -36, 54, 117, -56, 12, -47, 20, -46, 89, 79, 104, -101, 41, 33, -119, -61, 42, -115, 75, 56, 54, -29, 82, -60, 72, 62, -25, -46, 8, -58, 94, 61, -12, -42, -100, 121, 32, -1, -63, -48, 46, -75, -81, 47, 13, 110, 24, -121, -75, -48, 91, 84, -83, 61, -113, 19, -109, -13, 45, 126, -23, 103, 56, -111, 68, -103, -12, 21, -62, -46, -118, -26, 61, -96, 120, -61, -39, 74, 114, 102};
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
    msg.setTimeStamp(0.5567094689304871);
    msg.setSource(60905U);
    msg.setSourceEntity(45U);
    msg.setDestination(37454U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.45064865550614974);
    msg.setSource(26498U);
    msg.setSourceEntity(36U);
    msg.setDestination(26956U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.3049367110494796);
    msg.setSource(17834U);
    msg.setSourceEntity(6U);
    msg.setDestination(10775U);
    msg.setDestinationEntity(125U);

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
