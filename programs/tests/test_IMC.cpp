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
// IMC XML MD5: a4c7cc723d498a36fc776187f8fa5ae7                            *
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
    msg.setTimeStamp(0.258191529295);
    msg.setSource(61095U);
    msg.setSourceEntity(247U);
    msg.setDestination(56736U);
    msg.setDestinationEntity(207U);
    msg.state = 240U;
    msg.flags = 219U;
    msg.description.assign("DULZQHOHPMKSDASENQRNVGFLXERTAMGXIFHMWGQP");

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
    msg.setTimeStamp(0.242957879104);
    msg.setSource(30130U);
    msg.setSourceEntity(213U);
    msg.setDestination(18862U);
    msg.setDestinationEntity(66U);
    msg.state = 127U;
    msg.flags = 47U;
    msg.description.assign("CLXXSAKVTAUFZZDHJNDJZKELWKNXNJBKRZRGETAMMKWVVUDXVYFBYBONXOSDVJDKBDJXTGQSOXERDNMHLWIKAPQYOIMJIRZJOUNPIBESCUGGOJQLTQQQWYYOLZD");

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
    msg.setTimeStamp(0.296355280642);
    msg.setSource(42444U);
    msg.setSourceEntity(158U);
    msg.setDestination(31487U);
    msg.setDestinationEntity(84U);
    msg.state = 236U;
    msg.flags = 152U;
    msg.description.assign("WGLRUMBCMXPLKPFMHGRBZXSPUVXYMUDRNPSQIMQKLWWYPEIWLFJKNZORZFGTURNDTEBFKLVJQVCYXNUCBNBFFKQJIGWYVMDTKHADATLPFBJHISPAPAGEOZVTNYHDXZROWCMIEEDYYJYPMBEEF");

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
    msg.setTimeStamp(0.5036530845);
    msg.setSource(34725U);
    msg.setSourceEntity(121U);
    msg.setDestination(32019U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.439209777784);
    msg.setSource(39544U);
    msg.setSourceEntity(248U);
    msg.setDestination(19413U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.108318371222);
    msg.setSource(6693U);
    msg.setSourceEntity(85U);
    msg.setDestination(61348U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.292191817518);
    msg.setSource(55770U);
    msg.setSourceEntity(204U);
    msg.setDestination(14382U);
    msg.setDestinationEntity(128U);
    msg.id = 57U;
    msg.label.assign("LOXYDQLYIXYAYKRQTQWWSTKEPPAHHMAUSLDCBRUXAHBSCOFZGBWCAPSJUXQWMLIWKRAJUTRTBSXMTRVMGHENOIDZJMVHBRNXONJCZKUWLNPIBSMBOESUJEZO");
    msg.component.assign("SUZFHOVNOPBLGTPQCKEXAQYOAEBUHFMCWZLKILSUVKITBARLZIHKHNTCKPCXMJBCPZKQNWNATDGNXCGKIVWZNGNYCXWIOZRVKPBMVYHZHLBAJDYOQFPTDSVNRDMXZHMQODAJPJBGYWFXITQFHAGIGJRFYAMQELTXBRHUJCBMPYUMVUSRXJJLICAXCQTOQUADGBNEEF");
    msg.act_time = 42941U;
    msg.deact_time = 8053U;

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
    msg.setTimeStamp(0.85730476449);
    msg.setSource(31522U);
    msg.setSourceEntity(4U);
    msg.setDestination(7325U);
    msg.setDestinationEntity(242U);
    msg.id = 76U;
    msg.label.assign("DVFVYWUYEFIRODJMSFPPUFTXHYPPEMWAIYOXOPSIVVJUCRKUHHSLGYQBAWZMUTDQXLMXTHVLCEFDHGEKDGQAFGKJGJTPFONGGQINKEISEEVHCXYCNQOLLBRCMEHDESVHLDBPLAPDICRACJBMGHNSUZQSILRQCPYZIQSJKUVXXNRTATSDZCDWBITLYBXBOTFSWTNYWTMFOZGONFVZBWARRWUEUWXYABWGJKPJOO");
    msg.component.assign("HDDHZWLXFNBPJGBTJQZYKIAKHLPETGFKHOYUQFZXIMPNKTNRTDAMGXGSOSRQGYRVASLAGVOCQMSRUBEOVGXYAJIPOIJOTDBXYJNEIWWENXJDCCFKRCVVLVPMKTXRZLXKDIIRQEBHAAFWDFZESNVMJETUWIPXTKDQQBWUGCOZJVUABSZNICFWLQSKSUCYZGYNNU");
    msg.act_time = 48675U;
    msg.deact_time = 1387U;

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
    msg.setTimeStamp(0.895982571837);
    msg.setSource(16617U);
    msg.setSourceEntity(105U);
    msg.setDestination(58631U);
    msg.setDestinationEntity(33U);
    msg.id = 140U;
    msg.label.assign("LWWIVWCNHYYDQYVYGKLBQEXUOVAIWZFOMFMJJBUOIQJKNNNMPHHAZPGKUPOYKGDNBUSDWBFQXTTPGXAFSBIOQTZJTBORQGAWYHCHUTXRXEXVLHVWOKDNOLELCJSKNPEIUYFPBXTSGCESEVAMRSBYCIIYIHQ");
    msg.component.assign("UAPLVPDXIRTBUMHHOIGAFDUTPZRMVEPJJEKLHJNJLZYWLBWWCVRMTCMXRSYDIZXFWGJFAOMWXCKLVRVTBAUKZNZDFDNEUQPLTNLCXKGGTWDAFDCIVASJLBPQOWHHBKAQVMTHOYDJKOSMTOKQKYSFAUQNSNIEMJBFOCKWMGHESJ");
    msg.act_time = 396U;
    msg.deact_time = 38511U;

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
    msg.setTimeStamp(0.97208304053);
    msg.setSource(51381U);
    msg.setSourceEntity(32U);
    msg.setDestination(40285U);
    msg.setDestinationEntity(112U);
    msg.id = 177U;

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
    msg.setTimeStamp(0.275228374277);
    msg.setSource(52148U);
    msg.setSourceEntity(250U);
    msg.setDestination(16242U);
    msg.setDestinationEntity(238U);
    msg.id = 86U;

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
    msg.setTimeStamp(0.392082291204);
    msg.setSource(30568U);
    msg.setSourceEntity(65U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(221U);
    msg.id = 13U;

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
    msg.setTimeStamp(0.928579341451);
    msg.setSource(5824U);
    msg.setSourceEntity(207U);
    msg.setDestination(45476U);
    msg.setDestinationEntity(15U);
    msg.op = 15U;
    msg.list.assign("BKXUWPUBLCLUZWRPNMHRJQXMEACQMGNKVHQISKEZOMGLHAHNXDFEITFGHXLKJXQVDSDLZTTDACXDRKMLYGYHLQQFAKXQOJSYWLFNMJDOLPJSCZWYITVEVCEPICOBMVSOKHZFUTSYFTYAWUAVRHFAYSBBPSRUIOMPPHGQORJEYWEUMWNDOVKIXCJBCUEWVBFTBDGZBJNIPCEGZZGEKHUVODSRLTJNFUPXQNDGTTSMJVRIYAIWRNYAAOWNI");

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
    msg.setTimeStamp(0.723318823292);
    msg.setSource(36869U);
    msg.setSourceEntity(245U);
    msg.setDestination(50852U);
    msg.setDestinationEntity(58U);
    msg.op = 45U;
    msg.list.assign("FZVBRWFJSNCTVZXKQAUWWMRUAAYNYCGOSYCAWEQYZFGUQOODVLSTHJDRKZEAYKEGKPIDCDVYLEBMVSJDHINMGBHZPCBVRPXROBJWHYEGICCKPEQWQGJXJUGWIHLBNYTAVPNEAVMRSTADUISMPIQRZOIGHSQYBOKBFXORIJFMBGJUNHZZDOCRPPEUUETNXAFHUEQXTYLLPNJCDLTWLXFSKTMIQIQ");

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
    msg.setTimeStamp(0.799369121153);
    msg.setSource(12170U);
    msg.setSourceEntity(42U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(100U);
    msg.op = 46U;
    msg.list.assign("VBOBZQYJQAGDOMJRMDLHOPXRYNYETNOYFFTGPRQMHOOXEBVTKNYINGWVUZGFWPIATSHTQWLPZNIXEICARSLVURKFCTHSDYFLZMZGRXJOVOCPAUDFHSHWPCHBSANWFPYNZHTVQNVGPYDKIAXCUFJBKQILMIZIW");

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
    msg.setTimeStamp(0.60908910034);
    msg.setSource(1481U);
    msg.setSourceEntity(121U);
    msg.setDestination(49842U);
    msg.setDestinationEntity(69U);
    msg.value = 86U;

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
    msg.setTimeStamp(0.918547522297);
    msg.setSource(30519U);
    msg.setSourceEntity(224U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(87U);
    msg.value = 138U;

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
    msg.setTimeStamp(0.811099452597);
    msg.setSource(5560U);
    msg.setSourceEntity(117U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(127U);
    msg.value = 42U;

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
    msg.setTimeStamp(0.404449750525);
    msg.setSource(557U);
    msg.setSourceEntity(252U);
    msg.setDestination(6077U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("ZPMLKCHUTQRHLJOVEWUDRDKALXBIORIRKMOLVAPHXMYBQTF");
    msg.message_id = 7033U;

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
    msg.setTimeStamp(0.886470416858);
    msg.setSource(30545U);
    msg.setSourceEntity(85U);
    msg.setDestination(39179U);
    msg.setDestinationEntity(66U);
    msg.consumer.assign("ZIFBFWNINFKYRVOJSKFMJLIXDMMGAGLXYVLECYHKPKIBMGKBC");
    msg.message_id = 33834U;

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
    msg.setTimeStamp(0.186052474798);
    msg.setSource(49855U);
    msg.setSourceEntity(102U);
    msg.setDestination(25157U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("XJGXAJKZOGXTUCWUBWRFBDJXOFKTQYCARHDGBEZGNKDQGIKJFKFNCSTSMNSZSFPYPYPBUKNIQGMRVPAPLXJNQMHIZLEUKVYFTCKRMCCDSYUZIAQMHDPPDXTQJACQMZWHLPEQXZDHRVWMLTRLCDZGMBJZVIEUOSYMLXNKYWTBHAAXIVUXETHLQUHVIGLGVRFJABOBPWWFSNCASBCVFTVAOOHPDFLOOJRNNDUEWTIEIWGEEYQR");
    msg.message_id = 65352U;

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
    msg.setTimeStamp(0.898317126874);
    msg.setSource(62169U);
    msg.setSourceEntity(194U);
    msg.setDestination(30657U);
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
    msg.setTimeStamp(0.523416686667);
    msg.setSource(10961U);
    msg.setSourceEntity(214U);
    msg.setDestination(14557U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.21457473808);
    msg.setSource(64744U);
    msg.setSourceEntity(207U);
    msg.setDestination(50187U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.866475703647);
    msg.setSource(41699U);
    msg.setSourceEntity(74U);
    msg.setDestination(7721U);
    msg.setDestinationEntity(0U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.790880061429);
    msg.setSource(64768U);
    msg.setSourceEntity(15U);
    msg.setDestination(45755U);
    msg.setDestinationEntity(47U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.234543409575);
    msg.setSource(40838U);
    msg.setSourceEntity(227U);
    msg.setDestination(57186U);
    msg.setDestinationEntity(235U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.612974053659);
    msg.setSource(32790U);
    msg.setSourceEntity(205U);
    msg.setDestination(33538U);
    msg.setDestinationEntity(209U);
    msg.total_steps = 214U;
    msg.step_number = 213U;
    msg.step.assign("HVJNRHJVCOWMBMHHKOAPKROOZWFTGLEGBSIWPBVZJLLHYFSSNQGBCRX");
    msg.flags = 226U;

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
    msg.setTimeStamp(0.159399678169);
    msg.setSource(21734U);
    msg.setSourceEntity(223U);
    msg.setDestination(31932U);
    msg.setDestinationEntity(244U);
    msg.total_steps = 168U;
    msg.step_number = 241U;
    msg.step.assign("OSIZMRWJUDDIJYZYOXTBJLGHXGRFQEZPCSOECESBFZUCJPQDTHRXXMGKDSPZYQVMEAXXRISWGSONKJOBMMNTZBGRZVKWJDTSCKCVAQYPXWCYIQVFNXLPSWWXHHKVKVFPTG");
    msg.flags = 222U;

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
    msg.setTimeStamp(0.00583109248459);
    msg.setSource(41902U);
    msg.setSourceEntity(61U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 236U;
    msg.step_number = 210U;
    msg.step.assign("ZEVISVHWQBOYQFBATETAGFZQQNNMACRHFDMLSLFRDAYTGVYDDMWGUTUHKYXVRTKMJXIWDLWXNJXKJGECOGOOFRINNKQQ");
    msg.flags = 218U;

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
    msg.setTimeStamp(0.205638036564);
    msg.setSource(51545U);
    msg.setSourceEntity(73U);
    msg.setDestination(33935U);
    msg.setDestinationEntity(214U);
    msg.state = 154U;
    msg.error.assign("IXXUPHNMLJASNZKYBERXCQNDK");

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
    msg.setTimeStamp(0.170529633245);
    msg.setSource(7955U);
    msg.setSourceEntity(25U);
    msg.setDestination(23099U);
    msg.setDestinationEntity(149U);
    msg.state = 49U;
    msg.error.assign("CUCMCOLKSSMBQFOHLWQYAFXJSWWVVYCEMSSJTXRRQYIHDEZAGALGFH");

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
    msg.setTimeStamp(0.375229801747);
    msg.setSource(3205U);
    msg.setSourceEntity(17U);
    msg.setDestination(2188U);
    msg.setDestinationEntity(47U);
    msg.state = 163U;
    msg.error.assign("OCRJKRJVEQXFCGAQARXWQLOCLMNBQKTVBUVMRZWVFBIETKOMJUWPATKGUOSFCUSVI");

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
    msg.setTimeStamp(0.0178604871144);
    msg.setSource(35401U);
    msg.setSourceEntity(196U);
    msg.setDestination(43500U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.58876672486);
    msg.setSource(743U);
    msg.setSourceEntity(205U);
    msg.setDestination(8842U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.464860061281);
    msg.setSource(49300U);
    msg.setSourceEntity(54U);
    msg.setDestination(28705U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.0241950718703);
    msg.setSource(50439U);
    msg.setSourceEntity(109U);
    msg.setDestination(24265U);
    msg.setDestinationEntity(204U);
    msg.op = 141U;
    msg.speed_min = 0.111368525;
    msg.speed_max = 0.115646981871;
    msg.long_accel = 0.662390893129;
    msg.alt_max_msl = 0.513017970281;
    msg.dive_fraction_max = 0.87448479397;
    msg.climb_fraction_max = 0.105010011501;
    msg.bank_max = 0.476350324145;
    msg.p_max = 0.291965925071;
    msg.pitch_min = 0.664316685553;
    msg.pitch_max = 0.677939771785;
    msg.q_max = 0.0345207105381;
    msg.g_min = 0.68635535236;
    msg.g_max = 0.67133563652;
    msg.g_lat_max = 0.725892535262;
    msg.rpm_min = 0.0503573250896;
    msg.rpm_max = 0.54088247888;
    msg.rpm_rate_max = 0.891719899505;

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
    msg.setTimeStamp(0.559223490806);
    msg.setSource(46905U);
    msg.setSourceEntity(88U);
    msg.setDestination(13776U);
    msg.setDestinationEntity(251U);
    msg.op = 103U;
    msg.speed_min = 0.797155785157;
    msg.speed_max = 0.1346462497;
    msg.long_accel = 0.643438965752;
    msg.alt_max_msl = 0.309272963198;
    msg.dive_fraction_max = 0.00237753427045;
    msg.climb_fraction_max = 0.884701722716;
    msg.bank_max = 0.302170940423;
    msg.p_max = 0.802605289294;
    msg.pitch_min = 0.675608128408;
    msg.pitch_max = 0.838884014165;
    msg.q_max = 0.363479414871;
    msg.g_min = 0.860022266741;
    msg.g_max = 0.193143305228;
    msg.g_lat_max = 0.903038499524;
    msg.rpm_min = 0.00695101059648;
    msg.rpm_max = 0.328530297656;
    msg.rpm_rate_max = 0.0653527436173;

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
    msg.setTimeStamp(0.963634204524);
    msg.setSource(49121U);
    msg.setSourceEntity(183U);
    msg.setDestination(34947U);
    msg.setDestinationEntity(171U);
    msg.op = 151U;
    msg.speed_min = 0.625129023194;
    msg.speed_max = 0.0119427526026;
    msg.long_accel = 0.826408735003;
    msg.alt_max_msl = 0.407307299533;
    msg.dive_fraction_max = 0.39639989246;
    msg.climb_fraction_max = 0.178618001253;
    msg.bank_max = 0.678113424056;
    msg.p_max = 0.547907171065;
    msg.pitch_min = 0.0970752532046;
    msg.pitch_max = 0.277587216757;
    msg.q_max = 0.885083345381;
    msg.g_min = 0.53858905978;
    msg.g_max = 0.934952037915;
    msg.g_lat_max = 0.362817861827;
    msg.rpm_min = 0.567262297472;
    msg.rpm_max = 0.993606514603;
    msg.rpm_rate_max = 0.863911396185;

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
    msg.setTimeStamp(0.327644987237);
    msg.setSource(33249U);
    msg.setSourceEntity(24U);
    msg.setDestination(60674U);
    msg.setDestinationEntity(6U);
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("PLKEZQBBTHCFICSPLGNRANAMOORWGDBYOZOUNRFPYGXECSEHCYFFJZDVKZMRWDAYXRQLOUJEDMJETFEWRHIH");
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
    msg.setTimeStamp(0.750171809598);
    msg.setSource(56372U);
    msg.setSourceEntity(219U);
    msg.setDestination(44396U);
    msg.setDestinationEntity(180U);
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.911666856675;
    tmp_msg_0.ch02 = 0.54052789605;
    tmp_msg_0.ch03 = 0.48160018045;
    tmp_msg_0.ch04 = 0.476670502178;
    tmp_msg_0.ch05 = 0.247607659018;
    tmp_msg_0.ch06 = 0.129430931802;
    tmp_msg_0.ch07 = 0.361513572575;
    tmp_msg_0.ch08 = 0.90024807712;
    tmp_msg_0.ch09 = 0.390193413117;
    tmp_msg_0.ch10 = 0.451120541358;
    tmp_msg_0.ch11 = 0.0674482173133;
    tmp_msg_0.ch12 = 0.26196627267;
    tmp_msg_0.ch13 = 0.396904107387;
    tmp_msg_0.ch14 = 0.92505617703;
    tmp_msg_0.ch15 = 0.485491147319;
    tmp_msg_0.ch16 = 0.0621987997049;
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
    msg.setTimeStamp(0.171352120431);
    msg.setSource(40251U);
    msg.setSourceEntity(84U);
    msg.setDestination(54301U);
    msg.setDestinationEntity(153U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 33029U;
    tmp_msg_0.value = 204U;
    tmp_msg_0.error.assign("WOQZIELGANDPZRNTUDOIZTVWIILGXPFWGHALMQDHAFLBWLXTLMUWXHWPECKJBFMEQYSZRHVSAURRPQWDFESIOQKQLNRCNFJCMUJJTKXXCNRJNUHSYNXVAYMSURMGMIPJXOZPHKBASZDOJZUVYWYLCWEAJ");
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
    msg.setTimeStamp(0.0900217913302);
    msg.setSource(32354U);
    msg.setSourceEntity(102U);
    msg.setDestination(22410U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.296351974249;
    msg.lon = 0.258842030707;
    msg.height = 0.86527640848;
    msg.x = 0.333285569071;
    msg.y = 0.768911300356;
    msg.z = 0.827184615249;
    msg.phi = 0.947059313518;
    msg.theta = 0.85716922053;
    msg.psi = 0.951804483533;
    msg.u = 0.994683953718;
    msg.v = 0.324720299517;
    msg.w = 0.336618511747;
    msg.p = 0.195827507288;
    msg.q = 0.608693832941;
    msg.r = 0.0874733464155;
    msg.svx = 0.928213707688;
    msg.svy = 0.547349455068;
    msg.svz = 0.476620317251;

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
    msg.setTimeStamp(0.933095605803);
    msg.setSource(47608U);
    msg.setSourceEntity(161U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.79978165595;
    msg.lon = 0.382028920902;
    msg.height = 0.90833603623;
    msg.x = 0.587522040906;
    msg.y = 0.232852201321;
    msg.z = 0.969256676633;
    msg.phi = 0.92554849771;
    msg.theta = 0.682558678372;
    msg.psi = 0.0167324759396;
    msg.u = 0.900674996666;
    msg.v = 0.00560939129679;
    msg.w = 0.764703133947;
    msg.p = 0.371662094017;
    msg.q = 0.932823305086;
    msg.r = 0.0509044397182;
    msg.svx = 0.120890809167;
    msg.svy = 0.818121655464;
    msg.svz = 0.0667799438731;

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
    msg.setTimeStamp(0.0215216434426);
    msg.setSource(46970U);
    msg.setSourceEntity(22U);
    msg.setDestination(48684U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.42253087168;
    msg.lon = 0.783788732321;
    msg.height = 0.976184846204;
    msg.x = 0.156129022474;
    msg.y = 0.247438600455;
    msg.z = 0.204187176937;
    msg.phi = 0.0986998594087;
    msg.theta = 0.0617683000987;
    msg.psi = 0.0710882033912;
    msg.u = 0.209319815595;
    msg.v = 0.372211176811;
    msg.w = 0.954855314413;
    msg.p = 0.308887121501;
    msg.q = 0.449870022547;
    msg.r = 0.827286756891;
    msg.svx = 0.124154458146;
    msg.svy = 0.183196481836;
    msg.svz = 0.178587970014;

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
    msg.setTimeStamp(0.569457743274);
    msg.setSource(47167U);
    msg.setSourceEntity(104U);
    msg.setDestination(3504U);
    msg.setDestinationEntity(252U);
    msg.op = 88U;
    msg.entities.assign("OXKWJNESKMLRJABJXIGNVGMYVIDWVTYJEKSCKYXAWXGGQVEBXTTUVYYQCUZWALLAZAGWBCPUGOKITWBLVSCLFELVAPXFJFUIREEWVGRHQHOBDMDQKOMJRJYQVUUCDQETZCCCSOMMSXNHSXPINOTZMPJBSZNRKQUPOHRRIQYHHHCLZGQKZUNZNHTGOFDBFMOYIWLULDGLPSFNEEFNDSFFPQOWZXEBUPRACMDDIVFYTYPHISR");

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
    msg.setTimeStamp(0.625997995632);
    msg.setSource(11891U);
    msg.setSourceEntity(194U);
    msg.setDestination(58606U);
    msg.setDestinationEntity(234U);
    msg.op = 44U;
    msg.entities.assign("TZOFKRTAKUZEWTBTXWWBAXXEHFSFJMGZKYGEYRKDRPRSPLMFLKQSEABHIUHWTXKCOMLSZCKYXYCRDAOWQXEWZESORIWCNQBAAGCMPVCHVSCDZUOZYGJGTBJNJMHWPRGQBIOWFREACLJYMMNFNPZPAFVK");

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
    msg.setTimeStamp(0.131998715272);
    msg.setSource(61784U);
    msg.setSourceEntity(214U);
    msg.setDestination(7783U);
    msg.setDestinationEntity(30U);
    msg.op = 30U;
    msg.entities.assign("MSSIBFPLUWWBDZJKLADZIVMNFZENXRQUPVAIUGECBCRCSFWCKA");

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
    msg.setTimeStamp(0.645468361577);
    msg.setSource(8894U);
    msg.setSourceEntity(176U);
    msg.setDestination(34819U);
    msg.setDestinationEntity(132U);
    msg.type = 23U;
    msg.speed = 4065U;
    const char tmp_msg_0[] = {13, -44, -125, 115, -116, -73, 94, 34, 119, 94, 96, -123, -11, 49, -46, -17, 26, 110, 76, -22, -101, -58, 104, 116, 66, 62, 57, 114, -10, 68, 56, 120, -102, 51, -77, 50, -89, 104, 62, 23, 75, 99, 33, -35, 47, 115, -50, 70, 53, 80, -55, -18, -18, -119, 66, -58, 63, -29, -34, 84, 83, -97, -13, 54, 30, -5, -100, -50, 80, -14, 82, 92, 16, 119, -15, 14, -116, -69, 118, -69, 58, -84, -102, -51, -11, 125, -60, 67, -36, 105, -35, 99, -114, 12, -9, 67, 97, -26, -38, -65, 6, -121, -39, -77, 62, -39, 117, 2, 73, -76, -69, 124, -100, -122, -116, 18, -112, 71, 53, 57, 111, 112, -102, -7, 84, 2, 31, 77, -52, 39, 126, 100, 3, -50, -83, -40, 125, 119, -118, 19, -51, 68, 121, -31, -73, 71, -56, 55, 28, -63, -17, 15, 33, -96, -104, -3, -43, -99, 83};
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
    msg.setTimeStamp(0.239233249214);
    msg.setSource(31589U);
    msg.setSourceEntity(29U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(95U);
    msg.type = 248U;
    msg.speed = 26052U;
    const char tmp_msg_0[] = {-76, -18, 62, -45, 63, -41, 20, 28, -106, 96, 68, -5, -93, -45, -52, 26, 7, -25, 116, 37, -41, -124, 44, 40, -117, -55, 58, 100, 66, -101, 120, -61, -23, 4, -66, 64, 103, -80, -127, -3, 109, -108, 98, -56, 76, -19, 115, -35, -50, -127, 78, -108, -121, 59, -47, 125, -35, 72, -108, 45};
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
    msg.setTimeStamp(0.590056224145);
    msg.setSource(32513U);
    msg.setSourceEntity(91U);
    msg.setDestination(38798U);
    msg.setDestinationEntity(27U);
    msg.type = 94U;
    msg.speed = 8663U;
    const char tmp_msg_0[] = {70, -84, -55, 107, 30, -10, 20, -6, -121, 74, -20, 108, 25, -120, 101, -88, 114, -33, 66, 1, -30, -89, -67, 51, 107, -4, 64, 84, 26, 1, -63, -5, -54, 15, 45, -93, -89, 77, 63, 69, 43, 56, -25, 116, -78, 37, -12, 65, 36, -107, 76, -69, 77, 47, -50, -94, -103, -73, -92, -50, 84, -92, -50, -117, 73, -52, 61, 81, -84, 25, -85, -94, 54, 23, -44, -120, -50, -3, 96, -38, 93, -33, -50, -103, -77, -17, -88, -42, -64, 91, -19, -53, 53, -38, -89, 81, -66, 62, 60, -50, -29, -62, -98, -6, 25, -109, 56, -18, -26, 123, -18, -72, 46, -125, 25, 23, 19, 22, 116, -85, -79, -91, -5, 51, 35, -128, 33, -73, -60, -101};
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
    msg.setTimeStamp(0.869056409729);
    msg.setSource(4541U);
    msg.setSourceEntity(122U);
    msg.setDestination(2073U);
    msg.setDestinationEntity(39U);
    msg.op = 19U;
    msg.tas2acc_pgain = 0.0366922542813;
    msg.bank2p_pgain = 0.689397985859;

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
    msg.setTimeStamp(0.993356998077);
    msg.setSource(23945U);
    msg.setSourceEntity(204U);
    msg.setDestination(32608U);
    msg.setDestinationEntity(140U);
    msg.op = 81U;
    msg.tas2acc_pgain = 0.908940026524;
    msg.bank2p_pgain = 0.201257069934;

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
    msg.setTimeStamp(0.908279285576);
    msg.setSource(16073U);
    msg.setSourceEntity(211U);
    msg.setDestination(37062U);
    msg.setDestinationEntity(91U);
    msg.op = 169U;
    msg.tas2acc_pgain = 0.358079312561;
    msg.bank2p_pgain = 0.303750524464;

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
    msg.setTimeStamp(0.310878470317);
    msg.setSource(40931U);
    msg.setSourceEntity(175U);
    msg.setDestination(5704U);
    msg.setDestinationEntity(4U);
    msg.available = 3353703573U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.955219958275);
    msg.setSource(6829U);
    msg.setSourceEntity(189U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(174U);
    msg.available = 2251357592U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.446372764967);
    msg.setSource(57545U);
    msg.setSourceEntity(35U);
    msg.setDestination(15990U);
    msg.setDestinationEntity(100U);
    msg.available = 69461646U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.966758145144);
    msg.setSource(50712U);
    msg.setSourceEntity(62U);
    msg.setDestination(20664U);
    msg.setDestinationEntity(19U);
    msg.op = 208U;
    msg.snapshot.assign("LOECSBXVAFHFQZGEBFRJIZLRWOKUSSPLIDENNXMNJGAMQKITUKESNZBUSFCCRUXXVKSOYVRGSKMTQGXPJPLAGHBZRMMUYEDDPWFTCIAQJLFOKWGXOBWZXQBGLHPOHAJNDDCIJQNTHONLCGXCUYJEEJKMYUCVWVOIHRVKTNJYRBEVTGPZBZUPYWHDIUSYALAQCJTDQOXOBCMQNYVITIKVDEWTFLKWGBYVIRZHFHFRHMSPANRZYMWPPXEATUALMQ");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 19388U;
    tmp_msg_0.duration = 28334U;
    tmp_msg_0.speed = 0.116491898221;
    tmp_msg_0.speed_units = 225U;
    tmp_msg_0.x = 0.117141821248;
    tmp_msg_0.y = 0.688531550458;
    tmp_msg_0.z = 0.385672461152;
    tmp_msg_0.z_units = 82U;
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
    msg.setTimeStamp(0.360782309964);
    msg.setSource(57028U);
    msg.setSourceEntity(242U);
    msg.setDestination(5401U);
    msg.setDestinationEntity(158U);
    msg.op = 174U;
    msg.snapshot.assign("KIPGYMJSXVHWKHBWOSVBEETFQZBTNJZRLWAMPYWCTDXIXOUJXDHVZNQMLJNNERTDUOVAFLOERNZNSKFOYTYQCCHITAMLUTIJGETNKGXHYSBTVBGUJTLVZRSUDPIKADCRCNRQQFCPGUFLFWUKYJYIDLEIYKAMFXQIERKQBGFVPQCGHZHBOUZYXZGOROHDEJSCOOSXFEWPRPVPCNGMBHMKEFADDBVPQPSVXIZMIUAWLGWWYJQMAKAL");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.929987702758);
    msg.setSource(16784U);
    msg.setSourceEntity(171U);
    msg.setDestination(60704U);
    msg.setDestinationEntity(187U);
    msg.op = 234U;
    msg.snapshot.assign("RRUSSGDGMAMJQDCUFICGRCONATNEQWAGJWZSBYWOPAXZEAWQNAQRTAIPMEROOPNYFCDBOUSHOFTULCEWNPPYIMEMLBVDSNCQQIKXNQJLLKFXPYZEIXPGJSXESSIGIMZUVOKWFYRTBDJKEIJPNGYTGXTKNTJDZYHLEUIFLZKXWHHVEQVXDLKLBUWSVCOBOPKHMTFUXSTAWZAHROZGZQQJZUYABBVHCHCVFCUKIJVH");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39123669193;
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
    msg.setTimeStamp(0.398360293578);
    msg.setSource(47336U);
    msg.setSourceEntity(239U);
    msg.setDestination(54563U);
    msg.setDestinationEntity(23U);
    msg.op = 131U;
    msg.name.assign("AHNLTVJOEUGFEVCDGDIDSTFIZCLWXWJTWEMLISDWEFNBTAXQVYKQJAOQRUVDWTNHKZXETYIGUXYHAZJYPRMAHUKIEZBXQYYKZPGEWHROBFZENSNIYPVAZJ");

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
    msg.setTimeStamp(0.723471162485);
    msg.setSource(5604U);
    msg.setSourceEntity(126U);
    msg.setDestination(55141U);
    msg.setDestinationEntity(20U);
    msg.op = 2U;
    msg.name.assign("EQHWZHKLZHTQVZRKVXAPAYNARDWFUMRTNOMCIFZWXTVRSIRIXCDJOMETYUNUVHUOBJXDKUDKIGNZWELBYENAZKLKIVMBKFVICDYPFCXHGIOFYLUETCZKGMOAPPRILQKRQSSMPUJSSCTYVDVBBM");

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
    msg.setTimeStamp(0.758638440062);
    msg.setSource(5454U);
    msg.setSourceEntity(226U);
    msg.setDestination(35090U);
    msg.setDestinationEntity(94U);
    msg.op = 35U;
    msg.name.assign("DONHKNBRFYXFBSNEJZGFECJMHUASIQPNDRVDPJIQMPGGTTKUHIWKDCDBITQSEOEVCQKHJUSLFWUOLVAEFGIFDESPOSKAIHBWZGKXOPMHRHGNYPZBWWLCLDWUMDVUEJMWKBRXKLAJ");

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
    msg.setTimeStamp(0.236867852168);
    msg.setSource(44314U);
    msg.setSourceEntity(204U);
    msg.setDestination(15314U);
    msg.setDestinationEntity(214U);
    msg.type = 130U;
    msg.htime = 0.443221832602;
    msg.context.assign("NSPGTPEEEBQNXXXFQHRLOKKKIUFOMUZJICGBQHDWJTJUJQDPYSZDWSNLNQVBGRULXGKTBPFTBWCAUNZYEFWVROCMDLAWWSHBVFFXQSXWGDKNGAWQRHTHKKPALQRZNOMTFSDHFZOGXNYAMEKYPLJZAOOITLC");
    msg.text.assign("ERFTBONSCKCCXCDEOHXWMWYUZGYMUAEYQJNWKTBVXCAFIVXNPSKALSGRQORIBYLYHUJMFTJPOMHVIWPOUDBPQOTPLCKTLDUJHVGLQFFEJAGAKXMECRSVDXDPBAZIZVWRMLZAKHNNKQAQPMTJQLZTHMMO");

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
    msg.setTimeStamp(0.367900304686);
    msg.setSource(2778U);
    msg.setSourceEntity(231U);
    msg.setDestination(56271U);
    msg.setDestinationEntity(196U);
    msg.type = 92U;
    msg.htime = 0.965281443676;
    msg.context.assign("QGPCPYQCVAYONSLMTTTJAKYNJMWARNDFZOLDRHUIUBWTXQRWKXJMEDEZRFGETRS");
    msg.text.assign("AWOFKPHBZOZYGPGVUJTWXOLPHUXEOWVPDXCQTJYFCVQQPRYIVAEYMFUAJTUSDZCFSCISWGPBMZARDBNZKAWSSDMKWUNMCT");

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
    msg.setTimeStamp(0.134016229533);
    msg.setSource(60292U);
    msg.setSourceEntity(146U);
    msg.setDestination(19775U);
    msg.setDestinationEntity(97U);
    msg.type = 163U;
    msg.htime = 0.600027352348;
    msg.context.assign("KDYWHXPRHAGCNSKITRFQDWJBJLFVTOIZUAPVJXYRQQQEHBBWVNCGKUZVXLLRVJIHTRQOZ");
    msg.text.assign("GTETVIPXQIHYXVXAEVHOJNZISQQJUSOBGMRNLGFTVFCPSXNQADJVAQANIGNEWQPYAZLOCNAVYUYKKQFFCGYTQKVUKGZMLYFSDWASOWTJEFBWJSAXZWLPBFBQGRTTHEPJHK");

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
    msg.setTimeStamp(0.255830830701);
    msg.setSource(51138U);
    msg.setSourceEntity(185U);
    msg.setDestination(8929U);
    msg.setDestinationEntity(40U);
    msg.command = 126U;
    msg.htime = 0.760635624803;

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
    msg.setTimeStamp(0.0644791943071);
    msg.setSource(14487U);
    msg.setSourceEntity(89U);
    msg.setDestination(33300U);
    msg.setDestinationEntity(108U);
    msg.command = 47U;
    msg.htime = 0.447206704416;

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
    msg.setTimeStamp(0.111593528431);
    msg.setSource(39319U);
    msg.setSourceEntity(249U);
    msg.setDestination(52350U);
    msg.setDestinationEntity(151U);
    msg.command = 155U;
    msg.htime = 0.977384048586;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 138U;
    tmp_msg_0.htime = 0.0221467975074;
    tmp_msg_0.context.assign("JQOOBKZSFLMQGBRXYCFZQJBKKAGGRPTPSLWYMIJNGJONLFZEEOGFKLVGAKWZRNTSMOPJSZB");
    tmp_msg_0.text.assign("NBBNBBCIGDNUHAIUEXLIQXVZSZKUIYQNJEMCGXDWONOVKSQTDULGWEAQIYUTHFOCARCIDBJXNYFZKTRMTVFXXNEFJYMJQOBLPYVENSVMRLZOSVFCMSPBTPWHYRGQZSGARUHIAPWFZXWLYMHXSVXJMKEHECTDORPCGIUEQQLONCJRLHFTCSYEZKAYBTJAJPKRLVYBOLDTSHDKGDRGQCWWVJFGOPDLWRDEKQOZFJIAZTPGHAPK");
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
    msg.setTimeStamp(0.935920563362);
    msg.setSource(32447U);
    msg.setSourceEntity(241U);
    msg.setDestination(26267U);
    msg.setDestinationEntity(165U);
    msg.op = 157U;
    msg.file.assign("ESKCBQQKMYNHGZOFIRDLEPXPEHGOTZLZYC");

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
    msg.setTimeStamp(0.758687629877);
    msg.setSource(25047U);
    msg.setSourceEntity(84U);
    msg.setDestination(10778U);
    msg.setDestinationEntity(141U);
    msg.op = 235U;
    msg.file.assign("QWZFMOAWRSDIALXUBSRTHKCQBNOJUKNUZPJSUSBPVEOOSFBNHSRWFXHAPSVJJYFBXYXLOVORDTOXGUKHPRYKQQRDGJIHTSGKVQWDCXFCMDFPTUPGCC");

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
    msg.setTimeStamp(0.140675356566);
    msg.setSource(32656U);
    msg.setSourceEntity(49U);
    msg.setDestination(1077U);
    msg.setDestinationEntity(172U);
    msg.op = 135U;
    msg.file.assign("YMXMJFPIYBVDXZEPEAHHBJFYVBTOTUCXCSKNYUEIMLWJGKRZKJONEIRGXNCKEIJENDXRCAILFBEVZLTWPBHDNDQDRZYPRGUZR");

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
    msg.setTimeStamp(0.222834889741);
    msg.setSource(36621U);
    msg.setSourceEntity(0U);
    msg.setDestination(2811U);
    msg.setDestinationEntity(41U);
    msg.op = 87U;
    msg.clock = 0.712546466715;
    msg.tz = 96;

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
    msg.setTimeStamp(0.0354279139185);
    msg.setSource(59198U);
    msg.setSourceEntity(254U);
    msg.setDestination(24576U);
    msg.setDestinationEntity(164U);
    msg.op = 185U;
    msg.clock = 0.14663220319;
    msg.tz = 64;

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
    msg.setTimeStamp(0.038202629611);
    msg.setSource(47561U);
    msg.setSourceEntity(57U);
    msg.setDestination(43962U);
    msg.setDestinationEntity(222U);
    msg.op = 1U;
    msg.clock = 0.754851988705;
    msg.tz = -19;

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
    msg.setTimeStamp(0.413287909056);
    msg.setSource(52886U);
    msg.setSourceEntity(2U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(6U);
    msg.conductivity = 0.519244240086;
    msg.temperature = 0.00863827208124;
    msg.depth = 0.566731733523;

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
    msg.setTimeStamp(0.889562916742);
    msg.setSource(53320U);
    msg.setSourceEntity(168U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(221U);
    msg.conductivity = 0.200329523982;
    msg.temperature = 0.548146816528;
    msg.depth = 0.736113056553;

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
    msg.setTimeStamp(0.793491737522);
    msg.setSource(30925U);
    msg.setSourceEntity(224U);
    msg.setDestination(40102U);
    msg.setDestinationEntity(147U);
    msg.conductivity = 0.295574513847;
    msg.temperature = 0.0892514560522;
    msg.depth = 0.924687932298;

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
    msg.setTimeStamp(0.720491416569);
    msg.setSource(44565U);
    msg.setSourceEntity(59U);
    msg.setDestination(42570U);
    msg.setDestinationEntity(80U);
    msg.altitude = 0.421017679014;
    msg.roll = 40285U;
    msg.pitch = 14653U;
    msg.yaw = 5944U;
    msg.speed = 31238;

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
    msg.setTimeStamp(0.754402923315);
    msg.setSource(11551U);
    msg.setSourceEntity(105U);
    msg.setDestination(44082U);
    msg.setDestinationEntity(117U);
    msg.altitude = 0.365947743238;
    msg.roll = 50228U;
    msg.pitch = 65470U;
    msg.yaw = 7631U;
    msg.speed = -7880;

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
    msg.setTimeStamp(0.0357191773262);
    msg.setSource(38449U);
    msg.setSourceEntity(225U);
    msg.setDestination(33378U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.492350353152;
    msg.roll = 6547U;
    msg.pitch = 65139U;
    msg.yaw = 24454U;
    msg.speed = 6606;

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
    msg.setTimeStamp(0.368967469224);
    msg.setSource(12100U);
    msg.setSourceEntity(222U);
    msg.setDestination(52883U);
    msg.setDestinationEntity(225U);
    msg.altitude = 0.255478283378;
    msg.width = 0.39148418485;
    msg.length = 0.684665246209;
    msg.bearing = 0.211993847182;
    msg.pxl = 27237;
    msg.encoding = 199U;
    const char tmp_msg_0[] = {-103, -92, 126, -18, 3, 27, 74, -95, 21, -116, -111, 58, -47, -69, -57, -6, 86, -28, 56, -112, 47, -121, 60, -122, 87, -13, -61, 68, 4, -46, -81, 9, -20, 97, 102, -103, -122, 24, 55, -16, 89, 103, -85, 9, 106, 21, 36, 21, -56, -118, 126, 126, 18, -115, -8, -92, -5, -7, 33, -99, -75, -25, 82, -75, 108, 99, 104, -56, -53, 12, 47, -55, 86, -76, -128, -84, -108, -53, -11, 118, 50, 114, 59, -79, 89, 120, 49, 15, -45, -62, 34, -35, 41, -84, 92, -50, -69, -105, -29, -28, 96, 102, 83, 71, 8, 56, -90, 33, -27, 37, -113, -97, 12, 64, 30, 7, -16, -6, 108, -108, -56, 68, -38, -13, 30, 41, 50, 95, 50, -68, -20, -81, 27, -112, 115, -20, 103, -40, 0, 23, -25, 49, 97, -122, 34, -82, 119, -108, -6, -12, -73, 91, -22, -1, 9, -97, -90, 31, -76, -4, -59, 86, 11, 24, 41, 91, 26, 114, -124, 39, -56, 12, -88, 16, 55, 116, 21, 112, 108, 10, 116, -97, -103, -66, 53, -11, -36, -107, -18, -112, 5, 117, 12, -100, 35, 27, -81, 24, -47, 102, 2, -120, -123, -61, 91, -88, 74, 27, -61, -27, -32, -57, -23, 49, -91, -9, 45, -112, 33, -19, 0};
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
    msg.setTimeStamp(0.457849170298);
    msg.setSource(25784U);
    msg.setSourceEntity(189U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(50U);
    msg.altitude = 0.480916793768;
    msg.width = 0.394449111491;
    msg.length = 0.955592580039;
    msg.bearing = 0.410281941879;
    msg.pxl = -15110;
    msg.encoding = 19U;
    const char tmp_msg_0[] = {-23, 114, -23, 93, -27, 5, 79, 110, 43, 45, -40, 7, 47, 122, -128, 125, 17, -45, 85, -17, 92, -56, -64, 105, 4, -70, -60, -26, 84, -78, -66, -128, -78, 10, -32, -97, -67, 69, -126, 47, -43, 70, 13, 1, 105, 100, -13, -125, 98, 121, -49, -13, 27, -100, -53, 125, 53, 102, -27, 105, 31, -101, -102, -86, 38, 54, 43, -64, 94, -101, 126, 121, -124, 53, -67, 40, 114, 73, -106};
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
    msg.setTimeStamp(0.145744856361);
    msg.setSource(26921U);
    msg.setSourceEntity(54U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(93U);
    msg.altitude = 0.560688405434;
    msg.width = 0.470456170014;
    msg.length = 0.376843283269;
    msg.bearing = 0.617384663074;
    msg.pxl = -25832;
    msg.encoding = 134U;
    const char tmp_msg_0[] = {-9, 100, -51, 97, 32, -62, -70, -109, -125, -25, -94, -35, 116, -93, -20, 43, -46, -94, 40, 9, 113, 57, 61, -18, 51, -37, -22, 68, 59, 76, 45, 46, 39, -119, -18, 103, -27, 10, 5, 0, 109, 115, 6};
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
    msg.setTimeStamp(0.630997773524);
    msg.setSource(60414U);
    msg.setSourceEntity(158U);
    msg.setDestination(35884U);
    msg.setDestinationEntity(130U);
    msg.text.assign("JXYSGTQQTMXKZKBQVTRDJXLVGHSYAPVWZMUZOVZSFZMJTNLDLCIPAPYINOCUDMPBVTVWGLFUNJKLGBPXCIHHLBFEITSAVNEEUIJPSMNZBQZOUQILYMCSXQKFEJVXBDWJJYHVMMUBOTWYRCKHCGYDLBOCWAWNHDHPZYRYWGRSCOPEGHRRUUGQAMZGDIFDNLOGQAKOD");
    msg.type = 240U;

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
    msg.setTimeStamp(0.908458051639);
    msg.setSource(57858U);
    msg.setSourceEntity(98U);
    msg.setDestination(22428U);
    msg.setDestinationEntity(133U);
    msg.text.assign("TVGKFLMJWRCAWPFZJNLLXUDWUYYDOCDKWKFEGIVCNDDVVHWZIKEYCLECQXCADJMMFIHXURDOPUZSKTAXOFLTFTRSUYMXJLMIFIAMXEVNJZPWUHLHDKMTGGQZG");
    msg.type = 230U;

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
    msg.setTimeStamp(0.610929186235);
    msg.setSource(40312U);
    msg.setSourceEntity(86U);
    msg.setDestination(56881U);
    msg.setDestinationEntity(102U);
    msg.text.assign("QWYPKYZCXTVFIOGOJGTLBEFJCVIOBWJGCEBXNWHAPXTWDHEKOULZMMULNJXLCYIULFMVKRPHBLWFZQXFIQZKSPQDTOQSCNZELNDZXLGREYTUZRDJRKHEDJFHSHOAUYPOMDINGBLTYIYTVZKANRJWDIGJMGPGDCUVATQWMCUAQLEYQFPMESACZNAWXXHOSTRBYKAWDGVDYNOAETNSRVPWHBSFJMKNRCCSGMZHUSQERIVBRHXIVBKPSBMJQUU");
    msg.type = 182U;

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
    msg.setTimeStamp(0.891990807915);
    msg.setSource(39815U);
    msg.setSourceEntity(175U);
    msg.setDestination(34747U);
    msg.setDestinationEntity(235U);
    msg.parameter = 157U;
    msg.numsamples = 87U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 65516U;
    tmp_msg_0.avg = 0.864158451941;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.809624985602;
    msg.lon = 0.601964766514;

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
    msg.setTimeStamp(0.39989580066);
    msg.setSource(13843U);
    msg.setSourceEntity(28U);
    msg.setDestination(27508U);
    msg.setDestinationEntity(19U);
    msg.parameter = 44U;
    msg.numsamples = 221U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 18783U;
    tmp_msg_0.avg = 0.637795344103;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.721159545997;
    msg.lon = 0.953044000243;

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
    msg.setTimeStamp(0.962190548843);
    msg.setSource(58690U);
    msg.setSourceEntity(44U);
    msg.setDestination(41651U);
    msg.setDestinationEntity(252U);
    msg.parameter = 235U;
    msg.numsamples = 195U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 36877U;
    tmp_msg_0.avg = 0.156176608335;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.668114035418;
    msg.lon = 0.569476829328;

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
    msg.setTimeStamp(0.36335739931);
    msg.setSource(55356U);
    msg.setSourceEntity(150U);
    msg.setDestination(15785U);
    msg.setDestinationEntity(180U);
    msg.depth = 29971U;
    msg.avg = 0.829142472529;

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
    msg.setTimeStamp(0.17933513483);
    msg.setSource(23822U);
    msg.setSourceEntity(247U);
    msg.setDestination(1076U);
    msg.setDestinationEntity(244U);
    msg.depth = 474U;
    msg.avg = 0.970512867116;

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
    msg.setTimeStamp(0.389322899969);
    msg.setSource(36496U);
    msg.setSourceEntity(68U);
    msg.setDestination(48447U);
    msg.setDestinationEntity(19U);
    msg.depth = 25733U;
    msg.avg = 0.246682460247;

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
    msg.setTimeStamp(0.613677151138);
    msg.setSource(16447U);
    msg.setSourceEntity(80U);
    msg.setDestination(28194U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.799238007107);
    msg.setSource(18187U);
    msg.setSourceEntity(147U);
    msg.setDestination(43739U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.273656263494);
    msg.setSource(13013U);
    msg.setSourceEntity(8U);
    msg.setDestination(21138U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.0557299313255);
    msg.setSource(42347U);
    msg.setSourceEntity(154U);
    msg.setDestination(3915U);
    msg.setDestinationEntity(202U);
    msg.sys_name.assign("QDJIHOGHTZVISEAGQTUQPSKRTYAUBJNOQBIYDMMPPAACGAEBNDJSGTBDPSTWFKDBZUORABZOZJINGKULIXAHMURMNRFHXSSEBLMKILARCYZRTMUNGSOTGDMENJBLXLHVQZZXJFKFHFVOVZCXOZCHVQFGCYYQGRSWUPIKDNENLMOVEHPCLLYVWSVDXSBYXXTPRXIQWCEFTMCRCPNUDLAHWLVMOEQEKWWYEBWPJXUIYJCWWPUHKQANFZ");
    msg.sys_type = 128U;
    msg.owner = 16260U;
    msg.lat = 0.168901104176;
    msg.lon = 0.895861146674;
    msg.height = 0.942544154203;
    msg.services.assign("ILHTANWMNZPBCEUAHKSMBLHUXNDDWOMKUJJXUDWXLXBHCZOZCWVDSZCLITQJEDBOCLLPUGSTQEARXGBXEPQTIPPTRZVYTKVVIQFCDHZII");

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
    msg.setTimeStamp(0.320575048053);
    msg.setSource(38933U);
    msg.setSourceEntity(2U);
    msg.setDestination(53444U);
    msg.setDestinationEntity(195U);
    msg.sys_name.assign("KETLBCDRGCNEEVBMTPXRAGPVZAQJUEIH");
    msg.sys_type = 80U;
    msg.owner = 25132U;
    msg.lat = 0.702043516891;
    msg.lon = 0.0283876994717;
    msg.height = 0.832453460958;
    msg.services.assign("NBLOFJGSLUVWMQHHLYFJVSJLRFGEGKKRTUVOAUHQMTNMUKBKRRBATDIFSYGGJXPSJQAZWTKLXHXMDVWL");

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
    msg.setTimeStamp(0.029828192251);
    msg.setSource(48108U);
    msg.setSourceEntity(17U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(153U);
    msg.sys_name.assign("MBJXEKKPRFRJZSALAILYQAEAAVMLOCIZENDATZFUOBKXNPYBMRPRIOEQYGGZCETHYXJVUWSTTIDXQRLYVSMOSOPEWQXPGHHMHYRINPBKBBMSVELMPQPRJVOTWMEJRJNUAHCUGQIORIDGCXDSU");
    msg.sys_type = 139U;
    msg.owner = 10022U;
    msg.lat = 0.241637232348;
    msg.lon = 0.410388889302;
    msg.height = 0.0360199369358;
    msg.services.assign("WESYDQOEYCVLAUQKZDJKZZFYHOQRIXKOZNHKFVCPHAPDDXPEPCETFCJIXHXDNKUNWBGOXKZSUJBENXWMONLNJGRQHAPIZFDROMHLUFGQXQOATSVUPIKQXBUDYRFFBYNHGZGTAQKWSBLJVMMISERABNJNPSVTFHMFEYG");

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
    msg.setTimeStamp(0.509307199522);
    msg.setSource(32972U);
    msg.setSourceEntity(110U);
    msg.setDestination(7016U);
    msg.setDestinationEntity(127U);
    msg.service.assign("SRVWMZAZCOPGYMRIQSKJCLSBHSMPNZBGSEDMZMANFIXONHPSKRKXRUVBRVDOLTNSWLWUQCPFHWWCAPSBNDCJEABEGKKTGOX");
    msg.service_type = 237U;

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
    msg.setTimeStamp(0.866181196077);
    msg.setSource(49956U);
    msg.setSourceEntity(49U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(81U);
    msg.service.assign("UICZHXZUPPUHTTCIAQAYDVFJEWVBXXOONAAOGAHDICLMRYURTFBIRCADECUXYQFSQIWNNXTWDOIHFGGJEEFWFRMBQLBULMVTZOKSSQNVUEGKPSYZOVGFHJKMXNKSYIEJLBPXCVULMBYYDRLAZRQDKJDLLSPZHFORHVWMOKDRSSTKSVPB");
    msg.service_type = 110U;

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
    msg.setTimeStamp(0.261427499803);
    msg.setSource(57593U);
    msg.setSourceEntity(150U);
    msg.setDestination(26695U);
    msg.setDestinationEntity(103U);
    msg.service.assign("YCXQSZPDJKQKIHHSSSHABUMKLIAXBTWIESGNOJLZVOZPXZMGPJTQDEGUMEDEFBWBCPIMUXZAMFGHANYETTPMUBBVNHCLHFXGUPKFMACYRBVAOLEDQFZLUYEHPOQJVDSSEWYFEXVQOLCIVCWLNCWZPVOQCRNGSNUFOZVSJJAMSHQTKRJTUOYFDCXYRRLTGDTRBZKJRGWUBKJIEHAWXDRIKFQWN");
    msg.service_type = 204U;

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
    msg.setTimeStamp(0.235573332896);
    msg.setSource(33194U);
    msg.setSourceEntity(237U);
    msg.setDestination(16599U);
    msg.setDestinationEntity(146U);
    msg.value = 0.346950594999;

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
    msg.setTimeStamp(0.513696006598);
    msg.setSource(41621U);
    msg.setSourceEntity(3U);
    msg.setDestination(5371U);
    msg.setDestinationEntity(56U);
    msg.value = 0.28783434932;

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
    msg.setTimeStamp(0.313519537029);
    msg.setSource(50443U);
    msg.setSourceEntity(221U);
    msg.setDestination(65091U);
    msg.setDestinationEntity(191U);
    msg.value = 0.542502044316;

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
    msg.setTimeStamp(0.716626440935);
    msg.setSource(55442U);
    msg.setSourceEntity(251U);
    msg.setDestination(47964U);
    msg.setDestinationEntity(86U);
    msg.value = 0.656177361525;

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
    msg.setTimeStamp(0.21106794876);
    msg.setSource(55854U);
    msg.setSourceEntity(191U);
    msg.setDestination(41744U);
    msg.setDestinationEntity(156U);
    msg.value = 0.298800007466;

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
    msg.setTimeStamp(0.176023564264);
    msg.setSource(53580U);
    msg.setSourceEntity(90U);
    msg.setDestination(7741U);
    msg.setDestinationEntity(254U);
    msg.value = 0.196960672435;

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
    msg.setTimeStamp(0.518903717077);
    msg.setSource(44248U);
    msg.setSourceEntity(242U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(68U);
    msg.value = 0.864471388891;

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
    msg.setTimeStamp(0.314839253187);
    msg.setSource(18588U);
    msg.setSourceEntity(47U);
    msg.setDestination(1165U);
    msg.setDestinationEntity(61U);
    msg.value = 0.417591096479;

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
    msg.setTimeStamp(0.248653875182);
    msg.setSource(61896U);
    msg.setSourceEntity(137U);
    msg.setDestination(59039U);
    msg.setDestinationEntity(97U);
    msg.value = 0.886977815276;

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
    msg.setTimeStamp(0.923204109013);
    msg.setSource(9266U);
    msg.setSourceEntity(181U);
    msg.setDestination(8015U);
    msg.setDestinationEntity(48U);
    msg.number.assign("CXITILOESXTSYVTQXFSVERCOLFIPJRWVHQJFMDRDDUGDYOUVAABEBQRWVHEULJSEMKPNGUKRVHGZKOHJDXZEWMCITSBKHFZZYSUALMY");
    msg.timeout = 24103U;
    msg.contents.assign("IAUONJHHPMHPYJCUXCMILUTXYNKOBDJOYZILOZHQUFHBCVZMWGXMUZWWYWSXLJRWFJKZTLJBRLWWMCFQSAZGXYEEVTATVASGSKMBMQGDQEHZNILFDPEATHUCYPSMQSCFKRGSONNRHUACUPHYWR");

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
    msg.setTimeStamp(0.403024261178);
    msg.setSource(22157U);
    msg.setSourceEntity(135U);
    msg.setDestination(34980U);
    msg.setDestinationEntity(77U);
    msg.number.assign("CIUDMXLPYOGRWDTQSDLNQCXTZFNHKYRCSCMJGTMYBKQVJWUFMSUFFNIQBWXXQDEDFMOPZLATXYSQTODUOSNRRLJJREPGYRWXMLGZYKXAJGIMICZDFPBGZORIAFTVKZNNHFACZPZLKUVGEOQLWNPYBHUETEIHAIVOZRVCAAIUBFEPJKMHBNHWJBDQWMRSJNCSCMYVKSGVALSTBYJGNUVHEHDKPXWRSWTUV");
    msg.timeout = 31021U;
    msg.contents.assign("EEZNGYARKJAOBVOLHPSPWCUPAFPDXLDROSTSGCVWRDHQZVLLBXEHTZCTFANPWUQERLVBKGQAKHOBFDOAXJPGGYGOFYZQXITXKRVUINDRBLLJHCZYCFRWQIFVOKYUNPPPWUECEBYVDEYWHINXHNMHMSRKCDEMGFMKNMTUUETKTXINXQWXVWJCQBMQXZGBMVOJZIRJFGSAMBYNUPYHCZMSWVSNUJSIELICI");

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
    msg.setTimeStamp(0.423139684317);
    msg.setSource(52887U);
    msg.setSourceEntity(52U);
    msg.setDestination(14181U);
    msg.setDestinationEntity(170U);
    msg.number.assign("HYYZSJFYIWIBBANYIJBLMWVMNXDXMEJQZZVRJWXSGMZIRWGTMQGRQDYQSEOCEKBJDXPBCBIAKBTGXINZHEDOKPWYFRVULSLFQDFTEUWLUHATSOJVMPUPZOACDSORKWMUTAVMFURTSVQQFCTKHKJSYQHKDEYNTENPPVDZPPFZNCUIHMYEXGZCAILVGXBFO");
    msg.timeout = 5660U;
    msg.contents.assign("LHOGUMYBZIMENSOITUTYCVSIUVOBJTBLIAFDWCOHCJLCNXUOKXSHXFCMMSVUEZJBRKPUGPJIFDEHNYLCKYAWQMSRZTKNGYDHSENZXUMCIQETFXYHSPVGFZZVPKJNGPXWQTWXLFMBYTRGVUDDHSNXEZLDJMIFRYDUFJTAOIQETAAWLEKTABIZPDKWNHOWLQQEZVNKRDYGCABBURVQOPSJDKRWGBMOZYQRJBIFHGRFGSKNPWLWPOV");

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
    msg.setTimeStamp(0.127824030686);
    msg.setSource(33947U);
    msg.setSourceEntity(30U);
    msg.setDestination(55430U);
    msg.setDestinationEntity(55U);
    msg.seq = 2836622325U;
    msg.destination.assign("PKECUCKZFOOAEQHQYZUVKVLLBKEM");
    msg.timeout = 40839U;
    const char tmp_msg_0[] = {-16, 36, -35, -120, 91, -82, -127, 80, 113, 46, 94, -105};
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
    msg.setTimeStamp(0.663801478491);
    msg.setSource(4468U);
    msg.setSourceEntity(65U);
    msg.setDestination(26332U);
    msg.setDestinationEntity(105U);
    msg.seq = 3209962760U;
    msg.destination.assign("FFWIUHSOROHTKJJESPQWZYPYIUNPUGHTXOXXRZWZNDIQMWAMQARCBMOIYNHN");
    msg.timeout = 26322U;
    const char tmp_msg_0[] = {-34, -51, 89, -70, 51, 54, 52, 43, -103, -62, -14, 102, -13, -72, 26, 18, 30, 60, -41, -117, 16, -104, 0, 60, 82, 32, -68, -115, -124, 124, 30, 20, -53, 11, -113, 75, -103, -93, 65, 31, -32, 104, -82, 39, -79, 53, 83, 53, 126, 19, -73, -84, 59, 72, 9, 95, 4, 68, 123, 42, -78, 82, -52, -56, 126, -43, -119, -44, 75, -52, -67, 24, -16, -1, -59, 117, 1, 61, -87, -17, 112, -22, 57, -31, 30, 48, 1, 115, -37, -61, -118, 104, 69, -122, -26, -93, 37, 105, 64, 121, 80, 117, -128, 44, 125, -103, -128, 60, 53, 34, -80, -119, 42, -96, -114, 14, 76, -101, -54, -17, 60, 93, -56, 1, -74, 117, -60, 21, 11, -52, 35, 43, -91, -87, -86, -98, -55, 58, 19, 25, 105, -120, -125, 116, -22, 111};
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
    msg.setTimeStamp(0.303835335442);
    msg.setSource(51833U);
    msg.setSourceEntity(199U);
    msg.setDestination(9887U);
    msg.setDestinationEntity(131U);
    msg.seq = 2598761373U;
    msg.destination.assign("JEGSHRIPKHGUYATBQALPPYWFYHTWFZLLCHKCKWNXYPBUZFCIYVYOBVTFNHRDCTUEBMEDQBHCJQMKTOXJGSARZI");
    msg.timeout = 7224U;
    const char tmp_msg_0[] = {-83, -49, 94, -55, -29, -8, 100, -115, -32, 102, -128, -31, 114, 113, 96, -115, -54, -5, -91, 91, -33, 99, -101, 106, 85, 41, -13, -109, 62, -127, 48, 108, 28, -62, 121, 96, 95, -57, 71, 126, 115, -123, -92, 81, -34, -96, -126, -7, 100, -96, -41, 116, 125, -50, 18, 105, 89, 120, 103, 43, 34, -26, -29, 27, 76, 29, 23, -122, -115, 19, -13, -29, -29, -11, 64, 116, 58, 104, 111, -24, 34, 91, -20, -71, -113, 32, 32, -40, 68, 120, 77, -25, 22, -14, -58, 32, -4, -6, -29, 46, 24, -68, 75, -25, -58, 83, -127, 4, -105, -40, 30, 70, -24, -6, -51, -71, 112, 39, -102, -17, -95, -35, -65, 109, 52, 119, 80, -29, -3, -38, 102, -45, -93, -70, 90, -55, -61, -47, 100, 67, -123, -50, 14, -1, 54, -22, -87, -62, 51, 85, 73, -91, 8, 92, 35, -40, -51, -125, -102, 46, 32, 116, 115, -89, 126, 70, 47, -115, 80, 41, -1, -107, -50, -57, 51, -96, -85, -102, -38, -3, 37, -45, 98, -11, 50, -70, -82, 51, -88, 92, -22, 66, -71, -46, 37, 40, -88, 115, 85, -20, -98, -33, -67, 46, -70, 78, 46, -113, 25, 111, 12, -49, 18, 18, 90, 94, 25, -51, -10, -127, 32, 100, -57, 25, -17, -121, -63, -122, 51, -97, 95, 73, -85, -7, 111, -27, 44, -96, -91, -107, -53, -40, 61, -76, 6};
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
    msg.setTimeStamp(0.168835322168);
    msg.setSource(55916U);
    msg.setSourceEntity(218U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(173U);
    msg.source.assign("ZFNYJRQCDECRAPIXMLNIASMZKPEYVUZADCEUDRMJRXTFBKJLKFYOEUKHRCQVLXDAHYXZEANAINLMBUHDCQWVSVNASSRWOYBXDWMFYLWNBFAIRZSPGQPPITMYVPPDXEOSCYIUKYGLTIVWSBWBXNCUEPWVTTBLG");
    const char tmp_msg_0[] = {-96, -45, 36, 29, -71, 123, -100, 125, -110, 43, -7, -7, 1, 67, -36, -29, 5, -122, -115, 93, 101, 37, 116, -32, -43, -46, -82, 8, 78, 55, 63, 103, -50, 71, -25, 44, -96, -68, 103, 0, 23, -105, -53, -90, 43, -52, 78, 121, 57, -44, 21, 8, 17, -94, 4, 30, -96, 42, -22, 44, -83, -121, -114, 88, 121, 52, 33, 12, -79, -12, 72, -43, -105, -35, -80, -57, -94, -116, 59, -15, -73, -74, -92, 105, 1, 11, -123, -53, 103, -50, 44, 51, 72, -101, 2, 26, 79, -67, 57, 23, -53, 8, -20, -34, -40, 10, 9, 100, 51, -32, -70, -94, 34, -78, -99, 31, 102, -93, -98, 11, -112, 60, -9, 70, -125, -15, 21, -39, 67, -99, -48, -96, -1, -22, -76, -71, 126, 71, 42, 115, 46, 28, 97, 40, -88, -40, -118, 27, -27, 116, 89, 9, -27, -93, -32, -26, 70, -69, 7, -77, -19, -60, 60, 109, 90, 61, -96, 60, 26, 50, -117, -122, 109, 42, 55, 34, -41, -121, 36, -10, -9, 18, 23, 104, -2, -79, -78, -21, -123, -122, -73, 75, 66, -58, 78, -16, -17, 27, 120, -101, -119, -55, 16, 98, 38, 4, 79, -37, 11, -53, 6, -128, 99, 82, -127, 59, 125, 2, 14, -25, -85, -22, -71, -67, 114, 91, -13, 114, 85, -17, 61, -22, 36, -24};
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
    msg.setTimeStamp(0.873239192522);
    msg.setSource(26369U);
    msg.setSourceEntity(232U);
    msg.setDestination(52308U);
    msg.setDestinationEntity(175U);
    msg.source.assign("FFVDKYYFEGGOAUMWPPZSVLODFPIBRTXGZNXWQEKVWLSISRIRTCUJXTSSYYCBHMDSQZGYFKAWHNOBVXGBCUAQUTZUCMDJMWMOZKEXYHUJQKNFWGPYLIDTIRDSEPADZNCDTIJRLWAOSDAXHGSIQIJPMFZCJTWTZWYMQPPXTLAFOOZGNLCBVKKRB");
    const char tmp_msg_0[] = {66, 24, 34, 54, -85, -128, -87, 76, 72, 115, 36, -118, 69, -86, -126, -56, 38, 98, 120, -2, -65, 94, 85, 9, 69, -81, -4, 66, 29, 70, -114, -96, -115, 123, -4, -127, -16, 124, 50, 64, 80, 102, -69, 114, -60, 104, -52, -68, 32, -42, -83, -73, -106, 1, 91, 42, -102, 52, -56, -92, 73, 78, 102, 24, -102, -109, 100, 2, 72, -30, -25, 54, -100, 112, -37, 90, 45, 60, -35, -41, -98, 73};
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
    msg.setTimeStamp(0.473954526553);
    msg.setSource(6640U);
    msg.setSourceEntity(148U);
    msg.setDestination(29780U);
    msg.setDestinationEntity(174U);
    msg.source.assign("UWCAGINPZEDSAERBYXDJCDRUZBWVYLMJPIKCJFRESDKXKIOUHOTGSGSXNRRFPGIOWZHJNEKQCTHYCYKRXOTVJVIFMNCAEPQTVXJHOZDCPYXGUVXUOGHDWORWGTLTIKEKFSBEVPYMAWVUBGQFLSDZEWXLRAMJJAEDUHNILPWLFGHDJANTTQZYCURZZBPNFKBMKOAMIWIUBULVRTZGQ");
    const char tmp_msg_0[] = {27, -116, -119, 62, 119, 5, 123, 28, 13, -101, -71, -11, -28, 11, 73, 38, 66, -26, 62, -41, 50, -114, 17, -87, -37, 30, -13, -46, 66, 55, 61, -92, 24, -11, 91, -120, -6, 96, 88, -36, 110, 50, -82, 121, -87, -116, 3, -74, 75, -58, 109, -98, -121, 120, 95, 14, 52, 10, 102, 32, 98, 69, 11, 72, 29, 9, -126, -45, 45, 78, -73, 30, 64, -118, 112, -52, -24, 11, -71, -25, 83, 18, 123, 114, 47, -8, -11, -62, -127, -79, 29, -84, -14, -36, 112, 27, -106, -73, 6, 48, 92, 94, -93, -13, 100, -98, 116, -37, -79, 48, 54, -15, -6, -31, 121, -99, 99, -38, -111, -106, -104, -34, -12, 72, 11, -76, 113, -54, -74, -35, 93, -116, 119, -106, 81, 88, -70, 52, -66, 33, -104, 74, -17, 34, -88, 67, -68, -30, 121, -72, -25, 17, 106, -65, -103, -85, 40, 91, 121, 72, -24, 14, 95, 73, -92, 100, -47, -90, 20, 29, -39, 8, -32, -1, 100, 55, 14, -21, 6, -109, -36, -73, -47, -94, 46, 119, 20, 94, -74, 24, 93, -71, 11};
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
    msg.setTimeStamp(0.165011087848);
    msg.setSource(2866U);
    msg.setSourceEntity(106U);
    msg.setDestination(23894U);
    msg.setDestinationEntity(3U);
    msg.seq = 2761288991U;
    msg.state = 160U;
    msg.error.assign("QBDSBNCZWUSFVSHOQWTNSGILMOGGCISEONWVQLFXFXEWBILXUSIVTVUULVDCFDJJVPZRGPNCKXZRLKAWMGJQAUENHDHEQDFKWWQIMTQIKHUTJDWLFNOICRXGRTEEPDHHQLYERABRZNGLJUORYOSXRVVZCPKEPYJYBJ");

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
    msg.setTimeStamp(0.866293965874);
    msg.setSource(29093U);
    msg.setSourceEntity(183U);
    msg.setDestination(47841U);
    msg.setDestinationEntity(19U);
    msg.seq = 3499122200U;
    msg.state = 210U;
    msg.error.assign("CYJLBFXYAS");

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
    msg.setTimeStamp(0.61367640797);
    msg.setSource(39711U);
    msg.setSourceEntity(92U);
    msg.setDestination(34051U);
    msg.setDestinationEntity(189U);
    msg.seq = 740374267U;
    msg.state = 24U;
    msg.error.assign("LFBRWJBIPOVODWZCSMBDGHRTIFDYIPUGCCCNTGHJQISSVGXQAVWJMEPTXJGZUUIPXROVGIHJMXQRHNDMMEPBPLKDMLRPAHHYQKGYOAZQEJELQKAKMZVIXZRAVRDFOLMOEWLQZTMTNUYUZWZXYFDYYSCKVKNMWNFKAXBFCBWQBTGQWREUHEUA");

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
    msg.setTimeStamp(0.90195616608);
    msg.setSource(48545U);
    msg.setSourceEntity(162U);
    msg.setDestination(47951U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("MEDDHSOSPJBFNEOZVXGHVZMLSTZTPTDLXXOBCLYIZIAGWZIERRROYNFYLEGKEHZCJCJERSYFKULWZJXSUEPFHJGKGSVMIZGRDRSNABVONWJFTWHRUVSKUEXYUKTIAQHCZCBHKTWUYDSAFYOPJVHCNOVGCNHPUNFUPNSQ");
    msg.text.assign("JTWIYQYZDWWLFKKPMYCKWJTVSNBFOIAVZHJVEDOIHDTSFMBIEQFGZCWSGSDBIDKGGQVTENVPDAGBVLHONCVHEQUMZFCBDXMIGMLSWURIQHAHCSEBJORRLBLW");

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
    msg.setTimeStamp(0.832678507701);
    msg.setSource(10280U);
    msg.setSourceEntity(29U);
    msg.setDestination(3502U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("AIZDCQKEJJSWKYEGATQFXAXUISJWPOOVJTKRDGKUMBOAUIHVVSWSXKDJQMBAYWDYIFUBASAWGMV");
    msg.text.assign("IMCDPZBASVMJHCPIDYKROGELNRWGYTEKHWBADDDKQHWELJSPQOQNVKNKYKUVCNZYRGBZANEPJNFHDRUIBGESZXYAEHYEQRUKGDBLTVFOXQTGXJFPSRQGOMPMQIZONAMTWBIAVWKECAJCPSNZYNDNLQBSXLCSZUUQCMIWATPGUAATXHTYVIHRFGXFPFJDMJRWXLWT");

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
    msg.setTimeStamp(0.237761875953);
    msg.setSource(59090U);
    msg.setSourceEntity(240U);
    msg.setDestination(51727U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("DJUINCTHZNBUMRRBQRYIGPGNHUGEHKWVLWYKRXLPBUEDVVJNJINGMSMEFDCWQSCDTCLYMMFHLXTYSQQTOBPBFIPAYFRGWOMVKALCKEOTKEXOBUJNGKOALNWKPSZADAPBW");
    msg.text.assign("JRKCGTWSSKIHZVDIFOPFNEEKDMYTBJXAKQNKRZHLVDGDNZAUVEPBSITCXRCMYXWZATPHAXSXZKQBOITPOBMFALFVNEMOZOCREQHKOLHWFWBPFWPDDIQWNJVDDREQX");

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
    msg.setTimeStamp(0.0206627631511);
    msg.setSource(29106U);
    msg.setSourceEntity(141U);
    msg.setDestination(29846U);
    msg.setDestinationEntity(109U);
    msg.origin.assign("EXDWKQNPCHQWDJXJMALGBVEOYOJBGYRUYFVJDTKEILIJLXZNCHDWKLOFIQZBXKGYVQFSGBDMNUUCNAXGZWIMTGCRMBZJBIBERWDWZMJSZQPWRBHNXTLHFGSDUAHMQHWSZHDISKDVYEIQJMFSPNOAUZUSYYJOOVEMOGEAVTFLVOKVYTZQHARFAPKCTRRXQCVWMLAKNNBLSWXCNCLZKTERCJEP");
    msg.htime = 0.200427992354;
    msg.lat = 0.470501371882;
    msg.lon = 0.645022352809;
    const char tmp_msg_0[] = {113, -27, 67, -7, 31, 44, 68, 96, -64, 126, -15, -5, -31, -42, 69, 41, 3, 2, 120, 103, 102, 55, 6, 35, -113, -87, -39, -113, 10, 112, 8, -111, 46, 83, 96, -6, 83, 106, -77, 71, -102, 123, 109, 73, -58, 15, 59, 113, 25, 101, 93, -23, -116, -6, 50, -95, -30, 0, -67, 71, 70, 53, -44, -75, 50, -62, 19, -102, 63, 53, 90, -72, -70, -4, 14, -113, 94, -93, 53, 11, -32, 75, 108, 95, -15, 84, 35, -27, 86, -106, -127, -32, -88, -50, -75, -119, 52, -45, -22, 14, 110, -36, -82, -113, 16, -16, 47, -59, -118, -11, 99, 67, -108, -67, 95, 46, 42, 26, -4, -95, -80, -26};
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
    msg.setTimeStamp(0.432317032602);
    msg.setSource(27756U);
    msg.setSourceEntity(218U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("VCZTCQPFWQAMMWYQPPXWBOVXHZRTKSXGTZKUVBLNWNMRODXVWYGYMOCNEGLFIFLACEJLGARHECQBIUFPRIVBKUIQMPUADFYUIJQIKDLBXANPDUCFYYHBCNSRTQJGXENFEYSXKBKHLMECVJUDNOPZSUJIRGASTKHIHRTWFXFTJSEELZWRBOHJOCDVZOECB");
    msg.htime = 0.918706844987;
    msg.lat = 0.881323083332;
    msg.lon = 0.325231083573;
    const char tmp_msg_0[] = {-57, -63, -32, -109, -8, 31, -124, 28, -32, 53, 33, 75, -122, 103, 86, -35, 68, 51, -46, 117, 83, 123, -18, -106, 66, 102, -46, 48, 85, 38, -11, 116, -61, -59, 16, 17, 89, -18, -92, -62, -119, 80, 20, 25, 117, 93, -24, 71, -118, -82, 38, -98, 93, 40, -10, 85, -43, 101, 79, 118, -42, -28, -85, 29, -128, -16, 20, 39, 101, -95, 81, 104, 58, 114, -39, 41, -101, -77, -30, 2, 55, 119, 51, -42, -107, 13, -51, 103, 43, -70, 39, 11, -68, 18, -22, 123, 122, -10, -29, 29, -59, -62, 12, 27, -82, -15, -9, -61, 124, 116, 31, -4, -52, 41, 73, 71, 33, 100, 88, -83, -1, 18, 65, -39, -121, 51, 97, -100, -60, 8, 50, 40, 45, 59, 101, 99, -55, -35, 114, 0, -39, -120, 92, 44, 57, 100, -10, -67, 21, 4, -85, 122, -34, 125, -57, 8, -51, 39, 18, -115, 21, 88, 125, -49, 31, 7, 75, 5, -41, 47, -77, 50, -51, 27, 26, -66, 115, 32, -23, -86, 43, 65, 29, -70, -8, -89, 79, 108, -64, 5, -9, 91, 20, 9, -100, -73, 34, 121, -114, -111, 75, -101, -97, 40, -42, 94, -42, -69, 41, -92, -11, -10, -81, 113, -66, 126, 58, 85, 82, 123, 6, -17, -29, -53, -97, 32, 51, -97, -105, -18, -5, -40, 72, 43};
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
    msg.setTimeStamp(0.0764490253453);
    msg.setSource(60401U);
    msg.setSourceEntity(203U);
    msg.setDestination(51744U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("XLKFEWPEPSJGJHAERDRHXOQNIJZFYOBIFMXKMGJWWXGIRXLDSVYRCHBHYPZITGNKVFCQRRKYGVYNC");
    msg.htime = 0.316504756349;
    msg.lat = 0.0404111336624;
    msg.lon = 0.571308770436;
    const char tmp_msg_0[] = {-121, 13, -70, -80, 26, 16, -39, -25, 79, 120, 1, 111, 98, -100, 52, 48, 46, 119, -110, -1, 32, 35, -112, -17, -18, -21, 34, -80, -60, -108, -63, 24, -45, 57, 107, 50, 11, 41, -110, 57, 123, 76, 32, 79, 30, 88, -2, -48, -41, -80, 70, 14, -13, -51, -35, 110, -30, 119, -101, 34, -24, -53, -2, 99, 33, 98, 25, -120, 79, -126, -6, 125, 40, -84, 46, -69, -121, 49, -62, -56, -39, -38, -50, 32, -40, -56, -81, 12, 34, 28, -3, -19, -84, -72, 16, 87, -63, -62, -45, -95, 76, 41, 113, -88, -10, 76, 32, 94, -51, -65, -5, -68, -16, -57, -73, -113, -23, 108, -27, -71, -29, -72, -107, -91, -34, -10, -93, -72, -97, -68, -89, 58, 41, 75, 33, 97, -127, -121, -6, -43, -51};
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
    msg.setTimeStamp(0.506648382008);
    msg.setSource(13867U);
    msg.setSourceEntity(138U);
    msg.setDestination(31457U);
    msg.setDestinationEntity(37U);
    msg.req_id = 8633U;
    msg.ttl = 28801U;
    msg.destination.assign("OFYKEUGJIOPHSBATQOBULOHWEAVRSTHNGYXFZESQXZOSESKWMWKRFUJTA");
    const char tmp_msg_0[] = {-41, -73, -78, 36, -35, -31, -10, 40, 77, 61, 79, 26, -47, 76, 3, -88, 48, 64, -39, 57, 83, -42, -115, -120, 102, 75, 92, -123, -8, 124, -82, -56, -22, -62, -72, 113, 8, -122, 121, 58, -109, 4, -103, -39, -18, 103};
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
    msg.setTimeStamp(0.167420784639);
    msg.setSource(64863U);
    msg.setSourceEntity(16U);
    msg.setDestination(34387U);
    msg.setDestinationEntity(109U);
    msg.req_id = 45645U;
    msg.ttl = 42379U;
    msg.destination.assign("RGNXODGHFZYLCVVKHMHASQLTFGMSZZGMQLHNFSNOCQRUSDNJEMGWXAOZZHYMIPHBWIELTVTNRYZHPKQJIIJCGEEABYTETZCPEXTJUZBUXPBWYUCFAKQOAHRQAADSVIPKEMNLKQUTUBSFCDPVNZJAINNFKEDPOMVIJBZFWOFRXWWMVCRALDQIADDWHYISLLXJYKPRIPJGCBGNYXLQEKOOKBUEJRDCTXSY");
    const char tmp_msg_0[] = {-58, 69, -69, 93, -25, -32, 10, 110, 37, 85, 78, 87, 111, 8, 91, 117, -84, 114, 125, -106, 89, 11, -30, -77, -23, -119, -93, -94, -116, -95, 19, -126, 120, -12, -94, 88, -107, -42, 80, -62, -117, 50, 122, -116};
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
    msg.setTimeStamp(0.687220348443);
    msg.setSource(62587U);
    msg.setSourceEntity(176U);
    msg.setDestination(44135U);
    msg.setDestinationEntity(184U);
    msg.req_id = 33754U;
    msg.ttl = 39051U;
    msg.destination.assign("JFAXFGMUQWEEDODAOKACGSGH");
    const char tmp_msg_0[] = {31, 83, 31, -56, 37, 39, -32, -61, 126, 58, 7, -114, 101, -35, 43, -127, 101, 4, 27, 103, -109, -87, -116, -120, 88, 41, 61, 31, 44, -56, 66, 52, 115, 10, -45, 14, 35, -75, 58, -24, 96, 105, 73, 67, -117, -120, 52, 105, 26, -100, -15, 33, -15, -63, -77, -3, 86, -86, 125, -102, 69, 55, -66, -10, -23, -67, -112, 111, 85, -41, -64, 29, -82, -51, 54, -72, -26, -32, -45, 111, 70, -110, 36, 38, -28, 92, 65, 9, -40, 11, -119, -64, -73, 1, 98, -41, 12, -123, 56, -33, -101, -51, 97, -64, -59, 2, -23, -117, -76, 67, -92, -110, -65, -30, 23, -33, 40, 42, -45, -28, 31, -68, 26, -122, 49, 50, -62, -84, -16, -63, -76, 38, 48, 54, -114, 107, -115, 107, -93, 115, 114, -27, -102, -127, -26, 3, -122, 5, -127, 30, 109, -61, -118, 22, 48, 95, -8, 99, 1, -59, -103, 120, -30, 31, -127, -80, 98, -36, -7, 87, -70, 3, 43, 2, -16, -122, -27, -112, 62, 24, 59, 69, 104, 49, -43, -99, -28, -103, 96, 28, 15, -73, 58, 42, -22, -31, 57, -99, 92, -66, -82, 101, 48, -57, 30, -105, -117, -108, 88, -90, -124, -32, 125, -38, 47, 113, 33, 77, -24};
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
    msg.setTimeStamp(0.148881681347);
    msg.setSource(8224U);
    msg.setSourceEntity(149U);
    msg.setDestination(42844U);
    msg.setDestinationEntity(8U);
    msg.req_id = 22397U;
    msg.status = 153U;
    msg.text.assign("TAHCEHNZNMLLW");

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
    msg.setTimeStamp(0.698927735397);
    msg.setSource(47741U);
    msg.setSourceEntity(57U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(219U);
    msg.req_id = 53660U;
    msg.status = 138U;
    msg.text.assign("QMVQFTHLBOIFHCERSYVVGJYYMCIBBXDVGVAXABSJJSVLGDNNLKMLGKVKPKBQYEKFOHDXSIJRRDHBINTPTWXCTBNWEIUSRYAZDJECHZIUQREUXXFEUUMQRYTCNXQWYNOCTCWPGGVZMHDZHKNAEZYTPCCMOJTQUNIIZJEFGGNUIPXCMZBALQYQEHRDRRXHTUOPZSFNEWRUGKGOSJJLBKAZAFYPDKOWQFMDFMSXPSWLLVPLVK");

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
    msg.setTimeStamp(0.947444537181);
    msg.setSource(59759U);
    msg.setSourceEntity(198U);
    msg.setDestination(22769U);
    msg.setDestinationEntity(10U);
    msg.req_id = 64297U;
    msg.status = 215U;
    msg.text.assign("LDBRFBMCGJKWZNYDDJKEWNJEMIQROCGFLHZYFPITCSZACVMSLVHPPCQHVOYXBQPABXHIVWOYJMDGZAJKREIIEOTRITAUGDEUVDTGPKYFWDUXJNSPZSRZHAFFWHUO");

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
    msg.setTimeStamp(0.600856231804);
    msg.setSource(63655U);
    msg.setSourceEntity(56U);
    msg.setDestination(63453U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("DYSRMVSRMWRDAWNEHZZFVHYXYKLGUVHIUQMACFFZFCQXKQQZUPJXKBQIQLXGEOGBFCUTGFTOXYOJKIQBROLHVPZKTPYOLHAGYLAFLNGEPCSDXJIBYDNPPDOPTSELYKUNVZEFZZCGKJMMASSTG");
    msg.links = 2845321436U;

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
    msg.setTimeStamp(0.426228362151);
    msg.setSource(521U);
    msg.setSourceEntity(251U);
    msg.setDestination(13446U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("WIJULIOJOJHEEYGWZCGCKVDJMTHDUYBOERKXBJFNPZDQHWCQMTVFVDVNNEHAUKNZYMIXNZBKTNLRJGQGBSKRGVLZRPZLABPBCCUQDMVPVYVUAQASXPBPPTCNLWLOFWFYIXTHSOC");
    msg.links = 1129515884U;

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
    msg.setTimeStamp(0.608087779537);
    msg.setSource(53356U);
    msg.setSourceEntity(12U);
    msg.setDestination(7629U);
    msg.setDestinationEntity(247U);
    msg.group_name.assign("RMMAFHEYRNSKODDGQRPXGBKMPYFJZYVKNZXIHDHEZFLSNPTQOIWEWMVXPMXUBFKXCQSORMCXDYFOPPENWJPUFAGNDSBFLUYLTKNNHTLTGSMITGTCTIXRJYBDTWHJZUICDBPNMNGDPYHEJFNXAWD");
    msg.links = 1731373276U;

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
    msg.setTimeStamp(0.119225130585);
    msg.setSource(7503U);
    msg.setSourceEntity(114U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(43U);
    msg.groupname.assign("EJRVNXVAUIOBBMVFRLZQQZNSEEZIQMUCNIKOMPQCTNDQPSKGBVYRAAPKXYKNBXRAOBXBWZKITIHZXDXHMHSGKWHZJPCURJLCVOAFHWIZAAEF");
    msg.action = 242U;
    msg.grouplist.assign("GQFPTQMJATCHSNFCFLIZLBWVRZWHQUVGDWYNJQWBSADYJSGVCUFWCVQFLPXRLZMUCGWNTRZGKTGJOBVOIXDMUMPRYKGAWAQHEWCIQPLVEEVVLXRXKCYSIYTKITWZOOQGXDPOULGBSRCDHZKRSNHBTEQTSLNIMRQJFJLVOMMCSJAAICKEFOXXZDDSZYFOHADMHXRXNYFOKPEYJADZNYANNPMEUBLNSEZTAKTKYXHWIJIFORIDV");

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
    msg.setTimeStamp(0.625142013299);
    msg.setSource(57253U);
    msg.setSourceEntity(123U);
    msg.setDestination(64498U);
    msg.setDestinationEntity(186U);
    msg.groupname.assign("FETZTOFQOOMTCS");
    msg.action = 105U;
    msg.grouplist.assign("JSHFRQGRICFQFPSQCENGDAPGMUFJLKEOPAEMLEGDJIASFINBQWWOZPOPOTAEKCJCCHTUTZRGTYALGPSMDVPKXVZYAWBOTNDLDCJXHKUMJOKXFMUWVYYLWUGEGHYGHTVVYBOLYIESQTAISLNLJDZXQABFVJMHRBYWVSZMGKNCQAHRBFIXHWWTLRKQITUDZXYOVIFKBQBOEXDLJCSD");

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
    msg.setTimeStamp(0.00437698914141);
    msg.setSource(4263U);
    msg.setSourceEntity(10U);
    msg.setDestination(21040U);
    msg.setDestinationEntity(228U);
    msg.groupname.assign("OOQEOTNZOBYNYEYGRNVFJDGZSNIHUA");
    msg.action = 215U;
    msg.grouplist.assign("KSXBCOMVOWZHWHAUQVBEOKYFWUFC");

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
    msg.setTimeStamp(0.217878215043);
    msg.setSource(64782U);
    msg.setSourceEntity(254U);
    msg.setDestination(34111U);
    msg.setDestinationEntity(51U);
    msg.value = 0.88287648058;
    msg.sys_src = 22110U;

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
    msg.setTimeStamp(0.891512716192);
    msg.setSource(61656U);
    msg.setSourceEntity(180U);
    msg.setDestination(55563U);
    msg.setDestinationEntity(58U);
    msg.value = 0.213884240469;
    msg.sys_src = 10417U;

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
    msg.setTimeStamp(0.279608885421);
    msg.setSource(40834U);
    msg.setSourceEntity(3U);
    msg.setDestination(40541U);
    msg.setDestinationEntity(23U);
    msg.value = 0.269946913375;
    msg.sys_src = 23189U;

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
    msg.setTimeStamp(0.567540260243);
    msg.setSource(52880U);
    msg.setSourceEntity(230U);
    msg.setDestination(8823U);
    msg.setDestinationEntity(48U);
    msg.value = 0.063917213145;
    msg.units = 70U;

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
    msg.setTimeStamp(0.312330195373);
    msg.setSource(42434U);
    msg.setSourceEntity(202U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(93U);
    msg.value = 0.684317266057;
    msg.units = 224U;

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
    msg.setTimeStamp(0.253057363415);
    msg.setSource(7048U);
    msg.setSourceEntity(72U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(144U);
    msg.value = 0.514723330604;
    msg.units = 68U;

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
    msg.setTimeStamp(0.191888779666);
    msg.setSource(46486U);
    msg.setSourceEntity(215U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.502829015572;
    msg.base_lon = 0.513848364074;
    msg.base_time = 0.0707342791304;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 35521U;
    tmp_msg_0.destination = 5341U;
    tmp_msg_0.timeout = 0.668210678571;
    IMC::VSWR tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.498331683134;
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
    msg.setTimeStamp(0.204299583919);
    msg.setSource(39892U);
    msg.setSourceEntity(215U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(182U);
    msg.base_lat = 0.680273856254;
    msg.base_lon = 0.60956378559;
    msg.base_time = 0.216968145573;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 7636U;
    tmp_msg_0.destination = 31290U;
    tmp_msg_0.timeout = 0.133783445145;
    IMC::FormationState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 208U;
    tmp_tmp_msg_0_0.op = 151U;
    tmp_tmp_msg_0_0.possimerr = 0.636700443309;
    tmp_tmp_msg_0_0.converg = 0.430934901636;
    tmp_tmp_msg_0_0.turbulence = 0.926969378848;
    tmp_tmp_msg_0_0.possimmon = 183U;
    tmp_tmp_msg_0_0.commmon = 108U;
    tmp_tmp_msg_0_0.convergmon = 87U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.242610635365);
    msg.setSource(9898U);
    msg.setSourceEntity(51U);
    msg.setDestination(53357U);
    msg.setDestinationEntity(115U);
    msg.base_lat = 0.702647152653;
    msg.base_lon = 0.54688191264;
    msg.base_time = 0.359188616244;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 15505U;
    tmp_msg_0.destination = 2721U;
    tmp_msg_0.timeout = 0.930461922393;
    IMC::EntityList tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 107U;
    tmp_tmp_msg_0_0.list.assign("OCRXMGKAQRAHCJISSEOHFDXWBDUXZYPXOUEDLFVMGGBISQAUPBGKDMJHZNEAMRBMHNLSHLEVKVECXKZJYJYUCMMVXEQPQOOGCIDFBBGVZWTAUZYDXZOPVQQGPOEULILBGRFDBSNOACFUIFYNQRKTADQSRCWGWHTYRJBJHSZKENLNVIDYTSJJLBWSTCCVKDRLWMOQNQJP");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.328838983728);
    msg.setSource(2730U);
    msg.setSourceEntity(56U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(121U);
    msg.base_lat = 0.0938847849188;
    msg.base_lon = 0.709665421573;
    msg.base_time = 0.413585276911;
    const char tmp_msg_0[] = {-75, -1, -75, 114, -57, -99, 121, -14, 9, -110, 20};
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
    msg.setTimeStamp(0.160760811929);
    msg.setSource(24557U);
    msg.setSourceEntity(186U);
    msg.setDestination(27432U);
    msg.setDestinationEntity(114U);
    msg.base_lat = 0.776849537641;
    msg.base_lon = 0.520872385825;
    msg.base_time = 0.345658460231;
    const char tmp_msg_0[] = {-104, 47, -125, 111, 80, -93, 125, 67, 89, -106, -1, 126, 25, -5, -55, -127, 110, 101, -30, -76, -123, 117, -70, 38, 44, -113, 119, -72, -37, -51, 22, 86, 44, -124, -128, 81, -102, -72, 62, 97, -124, 123, -112, -106, 55, -64, -61, -90, 92, 94, 96, -71, -60, 65, -63, -38, 55, -47, -8, -26, -14, -75, -45, -67, -90, -48, -124, -1, -109, -38, -127, 52, -41, 29, -1, 113, -24, 84, 32, -91, -39, 92, 55, -68, 20, 113, -116, 67, -74, 99, 17};
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
    msg.setTimeStamp(0.286922422641);
    msg.setSource(52801U);
    msg.setSourceEntity(27U);
    msg.setDestination(60977U);
    msg.setDestinationEntity(62U);
    msg.base_lat = 0.63012326413;
    msg.base_lon = 0.156611584232;
    msg.base_time = 0.184092328223;
    const char tmp_msg_0[] = {-77, -2, 85, 103, 93, 109, 39, -98, 33, 23, 89, 9, 114, -73, -93, 8, -111, 121, 119, 13, 26, 112, -70, -7, -96, -103, -86, 20, 75, 54, -67, 123, -35, 19, -107, -97, 90, -93, -110, -14, -78, 11, 65, -78, 80, -123, -54, -120, 108, 13, 35, -127, -11, -75, 20, 42, 35, -68, 107, 10, 71, -77, 118, 86, -95, 10, 27, 19, -26, -17, -117, -94, 58, 40, 98, -14, -88, 54, -119, 24, 76, -126, -70, 2, 24, -8, -55, 106, 91, -37, -128, -48, 5, 99, -64, 25, 78, -53, 73, -55, 108, 59, 119, -74, -95, 52, -116, -53, 124, 106, -38, 88, 65, 11, -38, -66, -30, -122, 9, -16, -68, -12, 20, 85, -87, 40, -80, 28, -80, -38, -5, 97, -20, -77, 44, 16, 107, 119, 115, 76, 14, 94, 64, 42, 36, 17, 54, 65, 58, -89, 47, -93, 102, 28, 28, -93, 7, 87, 83, -90, 75, -27, -12, 85, 118, 28, -106, -104, -38, -17, 67, -79, 35, 94, 17, 62, -74, 14, 117, -3, -3, -15, -102, -37, 70, 68, -69, 9, 3, 16, 117, -90, -122, 115, 68, 102, 44, 99, 49, 103, -77, -97, 73, -23, 46, -11, 63, 89, -30, -104, -102, -36, 30, 57, 55, -67, 19, 13, 86, -61, -86, -106, 118, -66, 51, -93, -83, 119, -15, 15, 14, -101};
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
    msg.setTimeStamp(0.583880367711);
    msg.setSource(9716U);
    msg.setSourceEntity(182U);
    msg.setDestination(63621U);
    msg.setDestinationEntity(183U);
    msg.sys_id = 62424U;
    msg.priority = 17;
    msg.x = -18736;
    msg.y = -28254;
    msg.z = -9352;
    msg.t = -20704;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.801673375957;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 60906U;
    tmp_msg_0.custom.assign("PKOSCIAXYQDOJJBIHZNVLMLEKLWCXIMXPFXCPBTYFCUGYRNEYUCGNDGHFIFWRDLBEQGEWBYQOQAMRALVTKAUGZTFVFJYNXRPDYEUIMUJPSKZULGWMCZXYVEQZDYRUTOQLSMQSHVWGNEHZHFQXLTOQPKWOKIADMWOSAZWCDRSAXTRMQGKNJBZLRVJIHLPHHSUGNAGNVNBFUDITJFRKHKUWAXNCWPFPECIJXTDRESCSBJTOOVBSKMAOBEDZIZMPJ");
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
    msg.setTimeStamp(0.926684515964);
    msg.setSource(1939U);
    msg.setSourceEntity(116U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(85U);
    msg.sys_id = 13329U;
    msg.priority = -24;
    msg.x = 31937;
    msg.y = -4868;
    msg.z = -16050;
    msg.t = -28407;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 129U;
    tmp_msg_0.zoom = 72U;
    tmp_msg_0.action = 243U;
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
    msg.setTimeStamp(0.107794026294);
    msg.setSource(37341U);
    msg.setSourceEntity(203U);
    msg.setDestination(28316U);
    msg.setDestinationEntity(95U);
    msg.sys_id = 40171U;
    msg.priority = -70;
    msg.x = -28398;
    msg.y = 28317;
    msg.z = -7250;
    msg.t = 1063;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 248U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.346157445287;
    tmp_tmp_msg_0_0.y = 0.821805251242;
    tmp_tmp_msg_0_0.z = 0.575899030621;
    tmp_tmp_msg_0_0.phi = 0.596974256058;
    tmp_tmp_msg_0_0.theta = 0.537110711314;
    tmp_tmp_msg_0_0.psi = 0.711584192297;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.35751381414;
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
    msg.setTimeStamp(0.718387798051);
    msg.setSource(5462U);
    msg.setSourceEntity(65U);
    msg.setDestination(46070U);
    msg.setDestinationEntity(218U);
    msg.req_id = 14U;
    msg.type = 203U;
    msg.max_size = 34441U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.21992939173;
    tmp_msg_0.base_lon = 0.718544959462;
    tmp_msg_0.base_time = 0.645503716357;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 50378U;
    tmp_tmp_msg_0_0.destination = 34453U;
    tmp_tmp_msg_0_0.timeout = 0.364514418404;
    IMC::Target tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.label.assign("OYYTRMSLBQCLJSAZOMYDDTINTYJGTKIWGJZDTCEUVGCQVPEWMXMONWVDXMJFFOKJQRUMMWDRHUIJIALNPIOEKCPTQDEPBCXRODSXHFZXEZBNHRWFZEBAFAQLUHUQANIGMSEJHWPIUCBVYJWKKBNFCSDHCGZNEUERYVZTGXLWRBGIVUYPKKKOPABSAAZLQKDANKVGZQCOQUHFNYEUWTVOLCSBNTLFJPBYAXDR");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.383913924709;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.113786809065;
    tmp_tmp_tmp_msg_0_0_0.z = 0.3870242905;
    tmp_tmp_tmp_msg_0_0_0.z_units = 1U;
    tmp_tmp_tmp_msg_0_0_0.cog = 0.634856458624;
    tmp_tmp_tmp_msg_0_0_0.sog = 0.418717514847;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.796937546254);
    msg.setSource(34557U);
    msg.setSourceEntity(169U);
    msg.setDestination(11605U);
    msg.setDestinationEntity(194U);
    msg.req_id = 27397U;
    msg.type = 78U;
    msg.max_size = 24090U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.863822709675;
    tmp_msg_0.base_lon = 0.290616739812;
    tmp_msg_0.base_time = 0.373303375234;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 50970U;
    tmp_tmp_msg_0_0.destination = 3429U;
    tmp_tmp_msg_0_0.timeout = 0.280195984338;
    IMC::EmergencyControlState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.state = 253U;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("KKOBCLZUGTUOUNTIYSVUGOIHRTOGYRMVKDWREWEMNFIQFLLHJZDYGNKTPVWIYYUJHYNNJLBFQJIXUBGDQLJXMKYTNXXESOMWPOKAVFVSESMUVHTNEOIXPBZJZCAYGZGPCWMDQRVDZIPYWVREAQAGRNVPLLCCJUJFIHNLXQMRKBOABWZTAZVPHMDRRDCOZEFTDMEHQNDOKLJBKQQSTYWAFPWBQWPFCSTXXGCICSPSXAMBIKEXHFBFZRUH");
    tmp_tmp_tmp_msg_0_0_0.comm_level = 145U;
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
    msg.setTimeStamp(0.86141123796);
    msg.setSource(58948U);
    msg.setSourceEntity(4U);
    msg.setDestination(20092U);
    msg.setDestinationEntity(111U);
    msg.req_id = 60994U;
    msg.type = 125U;
    msg.max_size = 6081U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.150533887569;
    tmp_msg_0.base_lon = 0.557018237714;
    tmp_msg_0.base_time = 0.946665588567;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 50940U;
    tmp_tmp_msg_0_0.destination = 20664U;
    tmp_tmp_msg_0_0.timeout = 0.535459833808;
    IMC::HistoricEvent tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.text.assign("OAJNHCSABWQUJVRRZFLXILIAPNMVBWVVVTPAPHIRFTYQATQXEYQHEOTNBENFYIWPDLBETJSMZFFKEYYYWMNBJONEHNHWXUALSPVGGROELIDJMFJC");
    tmp_tmp_tmp_msg_0_0_0.type = 113U;
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
    msg.setTimeStamp(0.227120874491);
    msg.setSource(6069U);
    msg.setSourceEntity(186U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(175U);
    msg.original_source = 42919U;
    msg.destination = 52933U;
    msg.timeout = 0.565895247573;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 239U;
    tmp_msg_0.x = 53807U;
    tmp_msg_0.y = 2840U;
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
    msg.setTimeStamp(0.757499838831);
    msg.setSource(29667U);
    msg.setSourceEntity(240U);
    msg.setDestination(6588U);
    msg.setDestinationEntity(82U);
    msg.original_source = 19254U;
    msg.destination = 22461U;
    msg.timeout = 0.443112836212;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("JPCRCZBUKKDPANVZCWOMREFJDTZDXEFVMOEVRSWAHYWHCWBQJQUQEPLXGTTZHIBPCROHUIJWGJQNNNESZHMASEYGOYZANLJXVPVUYHASLFCWOXIUJFCQGFMXBYASLIIMV");
    tmp_msg_0.reference_frame = 153U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 37726U;
    tmp_tmp_msg_0_0.off_x = 0.747215573472;
    tmp_tmp_msg_0_0.off_y = 0.100053828277;
    tmp_tmp_msg_0_0.off_z = 0.224281279675;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("GLAMQNSIHXIBQGQFPQNNUVRCEAXUMOSYCELYLUCPGCFTCKQSNKIUQOCOYRJAUTBCDXXZXZDIVRIPSITBUBDFYAKZXDEFEJGXSQKIOZGOVTJYUJDRIROENIKFQKVLTYYWNHBUCZHMNSEMGNZWMLRZEYVVVPWHZNDTOPYYWQOKMZLKTAQELHPWHBWHCDFLSTGBLSFDWFCLDAWMFGPGJSKHJVTPKBRVAZRRAO");
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
    msg.setTimeStamp(0.144518411685);
    msg.setSource(2675U);
    msg.setSourceEntity(253U);
    msg.setDestination(34535U);
    msg.setDestinationEntity(141U);
    msg.original_source = 42269U;
    msg.destination = 58799U;
    msg.timeout = 0.459116455166;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 34815U;
    tmp_msg_0.duration = 22411U;
    tmp_msg_0.speed = 0.463165964591;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.x = 0.803130580643;
    tmp_msg_0.y = 0.888632638607;
    tmp_msg_0.z = 0.194331875587;
    tmp_msg_0.z_units = 38U;
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
    msg.setTimeStamp(0.240171848588);
    msg.setSource(55944U);
    msg.setSourceEntity(105U);
    msg.setDestination(24536U);
    msg.setDestinationEntity(130U);
    msg.id = 57U;
    msg.range = 0.355471476055;

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
    msg.setTimeStamp(0.405772178522);
    msg.setSource(44136U);
    msg.setSourceEntity(214U);
    msg.setDestination(61011U);
    msg.setDestinationEntity(141U);
    msg.id = 117U;
    msg.range = 0.910259814822;

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
    msg.setTimeStamp(0.234726592755);
    msg.setSource(47545U);
    msg.setSourceEntity(226U);
    msg.setDestination(46423U);
    msg.setDestinationEntity(25U);
    msg.id = 166U;
    msg.range = 0.478615543935;

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
    msg.setTimeStamp(0.785165611791);
    msg.setSource(5577U);
    msg.setSourceEntity(84U);
    msg.setDestination(29195U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("XCSXADPTUXIGNQGWFTFEEUVAWNVNDIORPWLBEHTMSZODFQDQLZCZFKZEIPYBKVAGNBRALHLUIAENFXUKJBJUZROHUYRPMEUBDTYRKOWAVCKGFKHBHCYIQJMVWMLFZAGDCOORIGSJJIEXYQGIQDSKRCTIHCSZOUWTPCJPTUYKEAQDN");
    msg.lat = 0.433396798677;
    msg.lon = 0.0805722186738;
    msg.depth = 0.153452459149;
    msg.query_channel = 202U;
    msg.reply_channel = 49U;
    msg.transponder_delay = 50U;

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
    msg.setTimeStamp(0.0871908380447);
    msg.setSource(44760U);
    msg.setSourceEntity(179U);
    msg.setDestination(27003U);
    msg.setDestinationEntity(84U);
    msg.beacon.assign("ZTNDXUDTLZQDHRMOYUCKSDVYTZBEKPNQQABXGWLVVZMPPUBDNJYTWXFMFNSZHEQJHMFKVGCDANMWIODTJLVMQBOFPYESUYCHJUWUJOAVXGVGHOKLUGZPMSBLILRIU");
    msg.lat = 0.553230181301;
    msg.lon = 0.352912575495;
    msg.depth = 0.599093906381;
    msg.query_channel = 169U;
    msg.reply_channel = 122U;
    msg.transponder_delay = 111U;

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
    msg.setTimeStamp(0.22335347872);
    msg.setSource(58639U);
    msg.setSourceEntity(232U);
    msg.setDestination(28412U);
    msg.setDestinationEntity(87U);
    msg.beacon.assign("NSVLAWZNDDIISYQOSZURFBULTVFSLCBRCHRVJDIQAQHORDSJTKSJKPYYFMERPULFIOOOJUAUZGTWXORGNWZDTGZXMIZBPIWLSHVHDRNXKAM");
    msg.lat = 0.973750794583;
    msg.lon = 0.710186640193;
    msg.depth = 0.367957230602;
    msg.query_channel = 225U;
    msg.reply_channel = 179U;
    msg.transponder_delay = 202U;

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
    msg.setTimeStamp(0.345249927209);
    msg.setSource(46085U);
    msg.setSourceEntity(211U);
    msg.setDestination(60286U);
    msg.setDestinationEntity(204U);
    msg.op = 17U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LGZORFXVXUPQFEPDBYXVBQARNJEAPFDTAGFEPNCWUMQNJXTRBXJXWMZCAQKDEBVCEMZSVTEMSMPBPAU");
    tmp_msg_0.lat = 0.745975187755;
    tmp_msg_0.lon = 0.146119311216;
    tmp_msg_0.depth = 0.527314732626;
    tmp_msg_0.query_channel = 25U;
    tmp_msg_0.reply_channel = 67U;
    tmp_msg_0.transponder_delay = 210U;
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
    msg.setTimeStamp(0.385616391794);
    msg.setSource(28282U);
    msg.setSourceEntity(123U);
    msg.setDestination(60664U);
    msg.setDestinationEntity(240U);
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
    msg.setTimeStamp(0.556182212297);
    msg.setSource(45518U);
    msg.setSourceEntity(27U);
    msg.setDestination(32222U);
    msg.setDestinationEntity(179U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.825120870036);
    msg.setSource(11046U);
    msg.setSourceEntity(217U);
    msg.setDestination(56458U);
    msg.setDestinationEntity(214U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 204U;
    tmp_msg_0.list.assign("AFQUPXHLNIPFTZDYXJOGAFMPBZSZCTLJPYCSLILRINHIYJNNCVBGLDHFABURCSMXZCTWCRIJGSNVZXWLRGJMNPBHTGHDXMRUAEUWCWSKKXWSGPTNBSQPRDWSOKKNQUOOO");
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
    msg.setTimeStamp(0.869097077734);
    msg.setSource(57102U);
    msg.setSourceEntity(109U);
    msg.setDestination(26250U);
    msg.setDestinationEntity(74U);
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 39U;
    tmp_msg_0.op = 13U;
    tmp_msg_0.plan_id.assign("AYBLZQVNWPVIWWCROXQMIKXXQDHYRVMCHQECLJWKVPQAPJBHZAEUYSPQAIZDGMKEEMHAKSHBEZIITFUIXIJTKVJCCVSIDZKZNYUPXUXUCNCGCNFGMYEDBZGNFDXTWWPVRRSKYGRLYIBJLJOSGEFAGDHWNJOBSSDHOJMNPRLAKGFUVULDQTFHIHMWYBOOFLXOWLPQEUYQMFTTZTENTVDAZPHMKPKTZYNDLRTOJXNGS");
    tmp_msg_0.params.assign("OALAJBGGKBUOMMJVKTQSOOAZXZKDKWXGLCIHHLDSRNUHJWUHNCMVSENQFQYMTNCUCTZOMZRDFBEMWUPHTPXNBWBSBNSKGUOIARJAGEIVECLVQCDEXAGXDTVOZIEKLYKVUREXDXSZKFSPXDWYLQPGDEZIRBHDZJYYTKMEIQRRCWIIXGWCFYAYPJPTOVYTEWASMBHJCHFWFFBYNARUMNURJIY");
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
    msg.setTimeStamp(0.633764342867);
    msg.setSource(25477U);
    msg.setSourceEntity(128U);
    msg.setDestination(63823U);
    msg.setDestinationEntity(198U);
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4789462686;
    tmp_msg_0.y = 0.51024360629;
    tmp_msg_0.z = 0.576283202722;
    tmp_msg_0.t = 0.844200914915;
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
    msg.setTimeStamp(0.589198731669);
    msg.setSource(52207U);
    msg.setSourceEntity(62U);
    msg.setDestination(5572U);
    msg.setDestinationEntity(142U);
    msg.op = 192U;
    msg.system.assign("NBJFCEGLCEWTVUIFTPOVCXZPAIGREEDEDBQNTMYSUUQMTQAHKTHWUQZDISJEOWYWAQMHQTSJFFUXOLNVSOAJGVNPYBOCKBTANAAZSIULOVAFJGQEIXETGROSXXSQJZPZDSXLAYRPKHHKSXPTIFVEHBRGBUGLBHJLIYRWVFCZVKOUFCKRNHLPLLBQMIVRZNDVNPZLHFKQPCKMGGWXISDBICRDCZWJYBMXUMDYWKWEYCMHOXGKJZYYJFPMW");
    msg.range = 0.325536657507;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("RFAKJFKEDBAJUJBOADGPPBZUJSZMKTILMUEZYWWYORDKZSQVMGOVKOFTWQY");
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
    msg.setTimeStamp(0.356533400058);
    msg.setSource(44320U);
    msg.setSourceEntity(208U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(216U);
    msg.op = 205U;
    msg.system.assign("OKONNYXHAZHACLNDFDRTQYDTQRSZDVMABOYJTLIPXBIUSWLPXLZURIYWMVIBFZHEIDXVLVWQUVGZEYOLAWFXSMPMMRBCYBOEPJCSOQRVGHGJCNWKX");
    msg.range = 0.511483911584;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.510665585945;
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
    msg.setTimeStamp(0.329472621188);
    msg.setSource(46012U);
    msg.setSourceEntity(200U);
    msg.setDestination(29220U);
    msg.setDestinationEntity(12U);
    msg.op = 45U;
    msg.system.assign("MMZHRZQXXQPXTVBHKAHHGNDWSWRLTPWTNPESJSJBUVOALNYQDVCYJIDLMRIKEAXQLEEOPZQANOLLASTYHNJIZCXGGGAFIBVUTDGQJCBWAMNFJOLZSSETHLQMRZFCJBCBEMYLIMVWVKBBDYOOIFRUDXONFWNOWURZSOUJPXEQUVXUYIOTSJZBKMHPRZCYGY");
    msg.range = 0.829733870922;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("KGHJUKDAEFJTNWQQIKUGYBOSJTRXUCROPOWZHBMLOWPZIOW");
    tmp_msg_0.value = 179U;
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
    msg.setTimeStamp(0.138952300362);
    msg.setSource(35864U);
    msg.setSourceEntity(129U);
    msg.setDestination(38709U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.325336542419);
    msg.setSource(39634U);
    msg.setSourceEntity(162U);
    msg.setDestination(8456U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.190328908479);
    msg.setSource(59047U);
    msg.setSourceEntity(194U);
    msg.setDestination(40624U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.618141449163);
    msg.setSource(59678U);
    msg.setSourceEntity(237U);
    msg.setDestination(58846U);
    msg.setDestinationEntity(191U);
    msg.list.assign("NQPWRMXWGPCONGHJYIZPEOBQXFDAMWYVWCDNQHJBWKWOEBPFLNRNNIFANUMKAWQWUCXZIPSVHURQJZOPGXUFSBGKAQQGVMYIOUOVKBLBPYCXXJVGYKCYGJOWDTSRSGVLKDONZHWAVEEYJBETAIEMLRSOUYRAIIEMAJACETTLNTHRGQUJETHSDMKOLLCPHDHUXYHVRQVTKBUBQUZRXXDDTMZZFSKSKFMDNJHTCZLLSRSAZJIXFECIVCBYPIFZL");

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
    msg.setTimeStamp(0.0142410469272);
    msg.setSource(48131U);
    msg.setSourceEntity(176U);
    msg.setDestination(14536U);
    msg.setDestinationEntity(156U);
    msg.list.assign("LGLJHNNWNHIVTWFYBZEZBWQEHMWSXCCTVGMZUBKGJXKJZFPBVXMPJOIIVGQAXLSTZJNFRJNMUWGHDSZUOHZHIMKLFIAKYRYPMSKKEHQGUSITKSHJQVWWSYVESVYCWXTYXUVBAMYEATQLNPPQZSPDJDCMFCZ");

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
    msg.setTimeStamp(0.714926293733);
    msg.setSource(16852U);
    msg.setSourceEntity(226U);
    msg.setDestination(65268U);
    msg.setDestinationEntity(200U);
    msg.list.assign("TGWGEHLPGFFHJDPSXHZGASCVOPYJTQOPFWJOKYRWKQOLRGRBFJVEYROBLZYVSFJHQGWVIODVC");

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
    msg.setTimeStamp(0.335624907087);
    msg.setSource(54788U);
    msg.setSourceEntity(164U);
    msg.setDestination(41315U);
    msg.setDestinationEntity(48U);
    msg.peer.assign("OFRHOYHPRILZZNKJNXZJYEICXABPCRBKDWWUNMAAXTXAJUSMMLFWENYGRHBQHAGGTDTWBGYOXTGQCKAIRCVOZFSRFDXZBUOMCPSHGKTMXRBZSIIQVREVZAILOGPN");
    msg.rssi = 0.337924659571;
    msg.integrity = 51077U;

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
    msg.setTimeStamp(0.567876963356);
    msg.setSource(22829U);
    msg.setSourceEntity(250U);
    msg.setDestination(65444U);
    msg.setDestinationEntity(176U);
    msg.peer.assign("UVACJEPNGRATICYVWZTXTRZYSHVCKWXLBSEUJMMPUDMHYBFKDFLRHKIYEOBJJTJEHIQYVXOZWFFBMLQNHHSAGRICQRQFUICOILTUSTHKTVECHGBGVAGYJZXGNRSQZTPUOUAZLWPFWDWMMEQBWIBMTULPUMWRZKBOWLQQDNSXNEIJQOOXXSAQLXLRAEMOBRVDOOKZLKGNGA");
    msg.rssi = 0.0561322712931;
    msg.integrity = 34539U;

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
    msg.setTimeStamp(0.978068970953);
    msg.setSource(46639U);
    msg.setSourceEntity(162U);
    msg.setDestination(46585U);
    msg.setDestinationEntity(198U);
    msg.peer.assign("UZUPZCDMXKJHIQFZXGTROIXLZUBFHRSIBVJAWAWFCYQBMXOTXSVCXZXJDVKUZRVLCDYBPSYEGECHQGJRYVWNAIWQBPGHBDNAWJFGKCJDJUUAZPMCZTEJILVBQKMONMMFHF");
    msg.rssi = 0.952710134407;
    msg.integrity = 63619U;

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
    msg.setTimeStamp(0.722512539982);
    msg.setSource(7209U);
    msg.setSourceEntity(148U);
    msg.setDestination(19473U);
    msg.setDestinationEntity(65U);
    msg.value = 8199;

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
    msg.setTimeStamp(0.80301680285);
    msg.setSource(57941U);
    msg.setSourceEntity(111U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(239U);
    msg.value = -16384;

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
    msg.setTimeStamp(0.502990832211);
    msg.setSource(56837U);
    msg.setSourceEntity(13U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(37U);
    msg.value = -13738;

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
    msg.setTimeStamp(0.0801184577656);
    msg.setSource(60054U);
    msg.setSourceEntity(84U);
    msg.setDestination(2275U);
    msg.setDestinationEntity(52U);
    msg.value = 0.547001349191;

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
    msg.setTimeStamp(0.0381717426449);
    msg.setSource(22439U);
    msg.setSourceEntity(80U);
    msg.setDestination(9940U);
    msg.setDestinationEntity(97U);
    msg.value = 0.0299678833826;

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
    msg.setTimeStamp(0.179036713069);
    msg.setSource(24888U);
    msg.setSourceEntity(107U);
    msg.setDestination(22509U);
    msg.setDestinationEntity(34U);
    msg.value = 0.790969530404;

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
    msg.setTimeStamp(0.92264138606);
    msg.setSource(49860U);
    msg.setSourceEntity(61U);
    msg.setDestination(32590U);
    msg.setDestinationEntity(82U);
    msg.value = 0.209427265339;

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
    msg.setTimeStamp(0.536127767016);
    msg.setSource(9878U);
    msg.setSourceEntity(180U);
    msg.setDestination(39380U);
    msg.setDestinationEntity(148U);
    msg.value = 0.843061781043;

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
    msg.setTimeStamp(0.503190415227);
    msg.setSource(29354U);
    msg.setSourceEntity(168U);
    msg.setDestination(46619U);
    msg.setDestinationEntity(47U);
    msg.value = 0.828728613091;

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
    msg.setTimeStamp(0.0103325015983);
    msg.setSource(16210U);
    msg.setSourceEntity(213U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(119U);
    msg.validity = 1365U;
    msg.type = 196U;
    msg.utc_year = 25240U;
    msg.utc_month = 26U;
    msg.utc_day = 118U;
    msg.utc_time = 0.974469551328;
    msg.lat = 0.351318822723;
    msg.lon = 0.917688691199;
    msg.height = 0.566090472427;
    msg.satellites = 175U;
    msg.cog = 0.490105954147;
    msg.sog = 0.630665481638;
    msg.hdop = 0.217013618854;
    msg.vdop = 0.506612698579;
    msg.hacc = 0.465507639307;
    msg.vacc = 0.0410330197374;

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
    msg.setTimeStamp(0.172695243372);
    msg.setSource(19755U);
    msg.setSourceEntity(118U);
    msg.setDestination(9161U);
    msg.setDestinationEntity(178U);
    msg.validity = 39629U;
    msg.type = 124U;
    msg.utc_year = 53028U;
    msg.utc_month = 98U;
    msg.utc_day = 56U;
    msg.utc_time = 0.767777236331;
    msg.lat = 0.397267807112;
    msg.lon = 0.395428043257;
    msg.height = 0.669130297969;
    msg.satellites = 185U;
    msg.cog = 0.953661044574;
    msg.sog = 0.765195860721;
    msg.hdop = 0.197505684007;
    msg.vdop = 0.326395307404;
    msg.hacc = 0.108869111169;
    msg.vacc = 0.880139193968;

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
    msg.setTimeStamp(0.414883487071);
    msg.setSource(51764U);
    msg.setSourceEntity(76U);
    msg.setDestination(64379U);
    msg.setDestinationEntity(114U);
    msg.validity = 46837U;
    msg.type = 132U;
    msg.utc_year = 20936U;
    msg.utc_month = 18U;
    msg.utc_day = 36U;
    msg.utc_time = 0.423898964778;
    msg.lat = 0.368230176697;
    msg.lon = 0.597295598416;
    msg.height = 0.36214461756;
    msg.satellites = 103U;
    msg.cog = 0.554242673555;
    msg.sog = 0.467097633495;
    msg.hdop = 0.330256682511;
    msg.vdop = 0.955664656397;
    msg.hacc = 0.690921459006;
    msg.vacc = 0.527607930842;

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
    msg.setTimeStamp(0.998723683832);
    msg.setSource(44739U);
    msg.setSourceEntity(133U);
    msg.setDestination(37724U);
    msg.setDestinationEntity(189U);
    msg.time = 0.101338170656;
    msg.phi = 0.301896410391;
    msg.theta = 0.210833865222;
    msg.psi = 0.52518118;
    msg.psi_magnetic = 0.169517667004;

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
    msg.setTimeStamp(0.196139442699);
    msg.setSource(47388U);
    msg.setSourceEntity(32U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(107U);
    msg.time = 0.380055101393;
    msg.phi = 0.711034733473;
    msg.theta = 0.0965296085175;
    msg.psi = 0.0809169969955;
    msg.psi_magnetic = 0.921882744678;

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
    msg.setTimeStamp(0.260213789713);
    msg.setSource(49514U);
    msg.setSourceEntity(62U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(109U);
    msg.time = 0.48288665193;
    msg.phi = 0.43932088006;
    msg.theta = 0.345322745487;
    msg.psi = 0.381122069274;
    msg.psi_magnetic = 0.47330137491;

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
    msg.setTimeStamp(0.445617545778);
    msg.setSource(6862U);
    msg.setSourceEntity(165U);
    msg.setDestination(62712U);
    msg.setDestinationEntity(205U);
    msg.time = 0.953539790254;
    msg.x = 0.287300975824;
    msg.y = 0.29362579807;
    msg.z = 0.90700379744;
    msg.timestep = 0.307022396686;

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
    msg.setTimeStamp(0.922432082029);
    msg.setSource(13236U);
    msg.setSourceEntity(116U);
    msg.setDestination(44185U);
    msg.setDestinationEntity(59U);
    msg.time = 0.59734674076;
    msg.x = 0.824416642498;
    msg.y = 0.694073929017;
    msg.z = 0.638377281098;
    msg.timestep = 0.927172897054;

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
    msg.setTimeStamp(0.566624221157);
    msg.setSource(35840U);
    msg.setSourceEntity(210U);
    msg.setDestination(23780U);
    msg.setDestinationEntity(129U);
    msg.time = 0.90309498576;
    msg.x = 0.371873199484;
    msg.y = 0.653203901872;
    msg.z = 0.149726770742;
    msg.timestep = 0.16034741863;

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
    msg.setTimeStamp(0.195962535109);
    msg.setSource(5840U);
    msg.setSourceEntity(36U);
    msg.setDestination(9387U);
    msg.setDestinationEntity(229U);
    msg.time = 0.0269556289128;
    msg.x = 0.462829555139;
    msg.y = 0.180263724783;
    msg.z = 0.565003057908;

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
    msg.setTimeStamp(0.471955688844);
    msg.setSource(23685U);
    msg.setSourceEntity(160U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(124U);
    msg.time = 0.0611636626986;
    msg.x = 0.138283158327;
    msg.y = 0.331897843077;
    msg.z = 0.728658620684;

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
    msg.setTimeStamp(0.481799134641);
    msg.setSource(41977U);
    msg.setSourceEntity(25U);
    msg.setDestination(15524U);
    msg.setDestinationEntity(160U);
    msg.time = 0.876888441619;
    msg.x = 0.567275632277;
    msg.y = 0.52457284099;
    msg.z = 0.892222769951;

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
    msg.setTimeStamp(0.410064936886);
    msg.setSource(10990U);
    msg.setSourceEntity(110U);
    msg.setDestination(15256U);
    msg.setDestinationEntity(6U);
    msg.time = 0.00122621309962;
    msg.x = 0.474248725913;
    msg.y = 0.754957720318;
    msg.z = 0.112073394215;

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
    msg.setTimeStamp(0.642222200247);
    msg.setSource(23623U);
    msg.setSourceEntity(40U);
    msg.setDestination(33223U);
    msg.setDestinationEntity(201U);
    msg.time = 0.598323692708;
    msg.x = 0.137015819918;
    msg.y = 0.282606949918;
    msg.z = 0.328255554916;

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
    msg.setTimeStamp(0.131113199366);
    msg.setSource(21438U);
    msg.setSourceEntity(171U);
    msg.setDestination(44639U);
    msg.setDestinationEntity(234U);
    msg.time = 0.916907927196;
    msg.x = 0.565821429655;
    msg.y = 0.871925701868;
    msg.z = 0.664530212139;

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
    msg.setTimeStamp(0.19967929948);
    msg.setSource(56257U);
    msg.setSourceEntity(247U);
    msg.setDestination(9027U);
    msg.setDestinationEntity(13U);
    msg.time = 0.0759559965108;
    msg.x = 0.606760715384;
    msg.y = 0.125812786836;
    msg.z = 0.320436988459;

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
    msg.setTimeStamp(0.572042035079);
    msg.setSource(48991U);
    msg.setSourceEntity(204U);
    msg.setDestination(3645U);
    msg.setDestinationEntity(234U);
    msg.time = 0.344328433401;
    msg.x = 0.400156548601;
    msg.y = 0.616679154603;
    msg.z = 0.626109299275;

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
    msg.setTimeStamp(0.6436744342);
    msg.setSource(41078U);
    msg.setSourceEntity(138U);
    msg.setDestination(33921U);
    msg.setDestinationEntity(40U);
    msg.time = 0.11267231767;
    msg.x = 0.579168407539;
    msg.y = 0.862032674849;
    msg.z = 0.248739166521;

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
    msg.setTimeStamp(0.94129466222);
    msg.setSource(60288U);
    msg.setSourceEntity(89U);
    msg.setDestination(51000U);
    msg.setDestinationEntity(210U);
    msg.validity = 81U;
    msg.x = 0.348495408248;
    msg.y = 0.794675610952;
    msg.z = 0.402997934067;

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
    msg.setTimeStamp(0.925529095541);
    msg.setSource(63171U);
    msg.setSourceEntity(103U);
    msg.setDestination(30374U);
    msg.setDestinationEntity(127U);
    msg.validity = 153U;
    msg.x = 0.240533367027;
    msg.y = 0.598856871782;
    msg.z = 0.910161888343;

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
    msg.setTimeStamp(0.487620793373);
    msg.setSource(59880U);
    msg.setSourceEntity(9U);
    msg.setDestination(35824U);
    msg.setDestinationEntity(55U);
    msg.validity = 103U;
    msg.x = 0.863014796614;
    msg.y = 0.204466771921;
    msg.z = 0.769180753376;

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
    msg.setTimeStamp(0.0219342764861);
    msg.setSource(44276U);
    msg.setSourceEntity(28U);
    msg.setDestination(21073U);
    msg.setDestinationEntity(140U);
    msg.validity = 188U;
    msg.x = 0.850956575315;
    msg.y = 0.577259394998;
    msg.z = 0.393441806015;

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
    msg.setTimeStamp(0.162603658123);
    msg.setSource(35718U);
    msg.setSourceEntity(139U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(247U);
    msg.validity = 151U;
    msg.x = 0.0948166117928;
    msg.y = 0.882578595308;
    msg.z = 0.620359454666;

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
    msg.setTimeStamp(0.735808764239);
    msg.setSource(64452U);
    msg.setSourceEntity(25U);
    msg.setDestination(41709U);
    msg.setDestinationEntity(185U);
    msg.validity = 20U;
    msg.x = 0.470046198044;
    msg.y = 0.377637976513;
    msg.z = 0.291332540288;

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
    msg.setTimeStamp(0.374948806207);
    msg.setSource(5179U);
    msg.setSourceEntity(38U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(5U);
    msg.time = 0.162313905439;
    msg.x = 0.530474745092;
    msg.y = 0.134141766295;
    msg.z = 0.274549889906;

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
    msg.setTimeStamp(0.943315885209);
    msg.setSource(40370U);
    msg.setSourceEntity(194U);
    msg.setDestination(36005U);
    msg.setDestinationEntity(235U);
    msg.time = 0.871483459861;
    msg.x = 0.889827182015;
    msg.y = 0.129604978158;
    msg.z = 0.0336134715706;

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
    msg.setTimeStamp(0.272339754146);
    msg.setSource(63590U);
    msg.setSourceEntity(131U);
    msg.setDestination(14955U);
    msg.setDestinationEntity(141U);
    msg.time = 0.46990484774;
    msg.x = 0.72004639321;
    msg.y = 0.846259620008;
    msg.z = 0.704332771779;

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
    msg.setTimeStamp(0.641283198686);
    msg.setSource(55857U);
    msg.setSourceEntity(76U);
    msg.setDestination(39075U);
    msg.setDestinationEntity(134U);
    msg.validity = 118U;
    msg.value = 0.955153228997;

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
    msg.setTimeStamp(0.760171724303);
    msg.setSource(44494U);
    msg.setSourceEntity(6U);
    msg.setDestination(50611U);
    msg.setDestinationEntity(144U);
    msg.validity = 231U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.952023264666;
    tmp_msg_0.y = 0.284553051207;
    tmp_msg_0.z = 0.616956040239;
    tmp_msg_0.phi = 0.010421870735;
    tmp_msg_0.theta = 0.253902839691;
    tmp_msg_0.psi = 0.864418544721;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.576688415804;
    tmp_msg_1.beam_height = 0.777341429518;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.662157338528;

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
    msg.setTimeStamp(0.328829931457);
    msg.setSource(17729U);
    msg.setSourceEntity(99U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(176U);
    msg.validity = 27U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.986152101832;
    tmp_msg_0.y = 0.448882629094;
    tmp_msg_0.z = 0.408540856246;
    tmp_msg_0.phi = 0.0532401236718;
    tmp_msg_0.theta = 0.588924028086;
    tmp_msg_0.psi = 0.46926225745;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.595374806314;
    tmp_msg_1.beam_height = 0.881072509848;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.798498252226;

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
    msg.setTimeStamp(0.857746960207);
    msg.setSource(43344U);
    msg.setSourceEntity(98U);
    msg.setDestination(60433U);
    msg.setDestinationEntity(42U);
    msg.value = 0.520843410744;

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
    msg.setTimeStamp(0.697382102752);
    msg.setSource(45051U);
    msg.setSourceEntity(244U);
    msg.setDestination(38110U);
    msg.setDestinationEntity(239U);
    msg.value = 0.577973878283;

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
    msg.setTimeStamp(0.00247867215683);
    msg.setSource(33082U);
    msg.setSourceEntity(185U);
    msg.setDestination(61616U);
    msg.setDestinationEntity(90U);
    msg.value = 0.086168065922;

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
    msg.setTimeStamp(0.468966065242);
    msg.setSource(31115U);
    msg.setSourceEntity(232U);
    msg.setDestination(10308U);
    msg.setDestinationEntity(187U);
    msg.value = 0.928645601928;

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
    msg.setTimeStamp(0.808853061638);
    msg.setSource(62197U);
    msg.setSourceEntity(33U);
    msg.setDestination(31978U);
    msg.setDestinationEntity(0U);
    msg.value = 0.551127254545;

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
    msg.setTimeStamp(0.312113583019);
    msg.setSource(55770U);
    msg.setSourceEntity(147U);
    msg.setDestination(7327U);
    msg.setDestinationEntity(49U);
    msg.value = 0.779075121509;

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
    msg.setTimeStamp(0.763674080564);
    msg.setSource(2268U);
    msg.setSourceEntity(196U);
    msg.setDestination(24299U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0307726095637;

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
    msg.setTimeStamp(0.237940448579);
    msg.setSource(3684U);
    msg.setSourceEntity(158U);
    msg.setDestination(18020U);
    msg.setDestinationEntity(177U);
    msg.value = 0.466418980059;

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
    msg.setTimeStamp(0.515368836191);
    msg.setSource(25156U);
    msg.setSourceEntity(22U);
    msg.setDestination(50502U);
    msg.setDestinationEntity(26U);
    msg.value = 0.766678507916;

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
    msg.setTimeStamp(0.778003480588);
    msg.setSource(19100U);
    msg.setSourceEntity(188U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(92U);
    msg.value = 0.142507897688;

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
    msg.setTimeStamp(0.393153461147);
    msg.setSource(2864U);
    msg.setSourceEntity(196U);
    msg.setDestination(1034U);
    msg.setDestinationEntity(84U);
    msg.value = 0.136492804322;

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
    msg.setTimeStamp(0.482302535574);
    msg.setSource(864U);
    msg.setSourceEntity(80U);
    msg.setDestination(57294U);
    msg.setDestinationEntity(156U);
    msg.value = 0.474327705795;

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
    msg.setTimeStamp(0.978462678294);
    msg.setSource(55079U);
    msg.setSourceEntity(140U);
    msg.setDestination(22796U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0424900746048;

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
    msg.setTimeStamp(0.884657567226);
    msg.setSource(51906U);
    msg.setSourceEntity(252U);
    msg.setDestination(25596U);
    msg.setDestinationEntity(179U);
    msg.value = 0.227384943174;

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
    msg.setTimeStamp(0.889413811652);
    msg.setSource(55551U);
    msg.setSourceEntity(54U);
    msg.setDestination(32900U);
    msg.setDestinationEntity(75U);
    msg.value = 0.513129567546;

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
    msg.setTimeStamp(0.517432712556);
    msg.setSource(58763U);
    msg.setSourceEntity(62U);
    msg.setDestination(25265U);
    msg.setDestinationEntity(184U);
    msg.value = 0.881122345345;

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
    msg.setTimeStamp(0.370661528035);
    msg.setSource(21143U);
    msg.setSourceEntity(132U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(117U);
    msg.value = 0.94294814919;

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
    msg.setTimeStamp(0.295772285703);
    msg.setSource(41840U);
    msg.setSourceEntity(57U);
    msg.setDestination(36553U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0631064926495;

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
    msg.setTimeStamp(0.656577887961);
    msg.setSource(18727U);
    msg.setSourceEntity(11U);
    msg.setDestination(33719U);
    msg.setDestinationEntity(70U);
    msg.value = 0.344386802302;

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
    msg.setTimeStamp(0.877097326683);
    msg.setSource(24540U);
    msg.setSourceEntity(166U);
    msg.setDestination(62451U);
    msg.setDestinationEntity(231U);
    msg.value = 0.335488000965;

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
    msg.setTimeStamp(0.2062142255);
    msg.setSource(5771U);
    msg.setSourceEntity(163U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(159U);
    msg.value = 0.48719577391;

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
    msg.setTimeStamp(0.0400343066913);
    msg.setSource(26412U);
    msg.setSourceEntity(161U);
    msg.setDestination(11899U);
    msg.setDestinationEntity(249U);
    msg.value = 0.904506903735;

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
    msg.setTimeStamp(0.141239834873);
    msg.setSource(9459U);
    msg.setSourceEntity(24U);
    msg.setDestination(12304U);
    msg.setDestinationEntity(42U);
    msg.value = 0.564070375516;

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
    msg.setTimeStamp(0.153743351078);
    msg.setSource(25839U);
    msg.setSourceEntity(91U);
    msg.setDestination(19931U);
    msg.setDestinationEntity(13U);
    msg.value = 0.184962300319;

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
    msg.setTimeStamp(0.105022110298);
    msg.setSource(21595U);
    msg.setSourceEntity(93U);
    msg.setDestination(50051U);
    msg.setDestinationEntity(143U);
    msg.direction = 0.790175240636;
    msg.speed = 0.721251001981;
    msg.turbulence = 0.788967438402;

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
    msg.setTimeStamp(0.491982962158);
    msg.setSource(64002U);
    msg.setSourceEntity(162U);
    msg.setDestination(26526U);
    msg.setDestinationEntity(160U);
    msg.direction = 0.11548379436;
    msg.speed = 0.60263175181;
    msg.turbulence = 0.399160266684;

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
    msg.setTimeStamp(0.587881518714);
    msg.setSource(5956U);
    msg.setSourceEntity(63U);
    msg.setDestination(31608U);
    msg.setDestinationEntity(86U);
    msg.direction = 0.710026971355;
    msg.speed = 0.105810314241;
    msg.turbulence = 0.717691751338;

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
    msg.setTimeStamp(0.925647026837);
    msg.setSource(46770U);
    msg.setSourceEntity(73U);
    msg.setDestination(6510U);
    msg.setDestinationEntity(195U);
    msg.value = 0.396521555413;

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
    msg.setTimeStamp(0.197106602936);
    msg.setSource(22050U);
    msg.setSourceEntity(19U);
    msg.setDestination(65213U);
    msg.setDestinationEntity(165U);
    msg.value = 0.465740019598;

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
    msg.setTimeStamp(0.880093405112);
    msg.setSource(14801U);
    msg.setSourceEntity(244U);
    msg.setDestination(1822U);
    msg.setDestinationEntity(151U);
    msg.value = 0.44947879351;

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
    msg.setTimeStamp(0.502916735615);
    msg.setSource(7677U);
    msg.setSourceEntity(86U);
    msg.setDestination(1910U);
    msg.setDestinationEntity(140U);
    msg.value.assign("OXSYHVYNCHVBTBDPLIFIXVTGIRQQUJPCPVSCWAEMUJMRNXJSXANUDFLPTCVGSFJNEFDZBKXAGVJRZPUNQKPFMLRUVOOXRVAHLBWJVZGCQCWGFNHBQSMPCRLTQFRYBPXDHOAWTGPJSDZQLANCUGEFTRMZMQTZJSEDEYYDVKG");

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
    msg.setTimeStamp(0.262410534205);
    msg.setSource(24722U);
    msg.setSourceEntity(238U);
    msg.setDestination(64703U);
    msg.setDestinationEntity(189U);
    msg.value.assign("GNZRRFROPKWEWVIQDBTKMUSRQEWLLTLIBVEEAXXTRBGKTDKZUMNODOFBEHPVGHPKYKIJFLSHONSBYSUFHTXYN");

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
    msg.setTimeStamp(0.706774949618);
    msg.setSource(55898U);
    msg.setSourceEntity(149U);
    msg.setDestination(41945U);
    msg.setDestinationEntity(118U);
    msg.value.assign("RUWEZZJOTFGWAVUOYAPCQNWNXJEAPLEIFHGVLSCMYCXKHRHDHPCJCFVMJOLCMOWBETKBNVNQTIJMZAWTGTPZFDVKGPXIXN");

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
    msg.setTimeStamp(0.44647498278);
    msg.setSource(54710U);
    msg.setSourceEntity(33U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(34U);
    const char tmp_msg_0[] = {104, -49, 69, -65, -13, -33, -7, -99, 120, 6, -11, -84, -82, 101, -78, -47, -11, 87, 64, 123, 107, -73, -74, 48, -84, 44, -13, -30, 121, -56, -46, 124, 82, 84, 0, 125, -91, -85, -77, 81, -43, 99, 56, -83, 24, 45, -67, -4, -86, 22, 60, 16, -104, -108, 21, -89, -119, 73, 30, 19, -116, -113, -120, 67, 37, -120, -18, 1, -101, 105, 14, -113, 13, -88, -96, 89, -42, -69, -37, 73, 69, -31, -44, -65, -14, 57, -115, 100, 8, -40, -90, 116, -11, 0, -82, -14, 23, -128, -3, -101, 7, 22, -120, -106, 59, -125, -52, -64, -48, -82, -6, -16, -77, 85, 103, -125, -111, -117, 117, -65, -55, 70, 119, 66, -52, -120, -26, -57, -23, -2, -46, -69, 19, 8, 91, 35, -102, -19, 126, 26, -115, 115, 120, 112, -107, -35, -89, 115, 70, -109, -57, 26, -121, -66, -94, -118, 21, 86, 56, 80, -21, 1, -1, 23, 72, 95, 0, -119, -63, 102, 68, -108, -44, 114, 37, 124, -82, -41};
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
    msg.setTimeStamp(0.310924665669);
    msg.setSource(21986U);
    msg.setSourceEntity(43U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(126U);
    const char tmp_msg_0[] = {-115, -83, 102, 59, -75, -51, 91, -37, -9, -25, -75, 25, -48, 96, 35, -57, -98, -87, -15, 51, -10, 4, -111, -127, -15, -45, 43, 104, -57, -27, 74, -67, 39, -38, -47, 19, -58, -110, 98, 31, -103, -45, -108, -17, -111, -47, -79, -87, 87, 11, 50, -47, -18, -80, -108, -34, 101, -105, -103, -24, -49, 6, 91, -97, -48, -52, -16, 16, 21, 114, 28, 71, -97, 71, -127, 121, -28, -18, -3, -119, 56, -3, -57, -50, 110, -10, 110, 90, 102, 50, 69, -122, -34, -47, -11, -62, 121, 62, -73, -90, 35, -9, -30, -42, -77, -2, 72, 41, -100, -116, -116, 100, 71, -28, -58, 2, 42, 120, 18, -54, 43, 16, -112, -66, -32, -6, 81, -22, -69, -30, 74, -75, -83, -65, 107, -102, 67, -54, 40, -12, 82, -77, -42, 43, -127, 16, -23, -37, -11, -83, -94, -67, -70, -73, 29, -38, -125, -13, 88, -47, 39, 36, -114, -67, -111, 13, -92, -37, 53, 101, -45, -83, 102, -13, -58, 36, -56, 51, 19, -33, -18, 35, -97, -102, -44};
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
    msg.setTimeStamp(0.784532027182);
    msg.setSource(24338U);
    msg.setSourceEntity(22U);
    msg.setDestination(27812U);
    msg.setDestinationEntity(214U);
    const char tmp_msg_0[] = {107, 112, -104, 0, -2, -69, -15, -12, 72, 73, 85, 68, 84, -55, 42, 123, -20, 16, 33, 86, -63, 77, -93, -49, -3, -6, 86, 16, 21, 48, 116, 104, 15, 74, -24, -82, -126, -58, 80, -97, -70, 104, 71, -56, -101, -12, -89, -95, 57, -103, 1, -87, 77, 110, -52, 124, -12, 44, -109, 56, 102, 13, -113, -98, 12, -77, -3, 109, -23, 7, 55, -53, 102, -20, 117, 24, -114, -28, -72};
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
    msg.setTimeStamp(0.372510848682);
    msg.setSource(22219U);
    msg.setSourceEntity(31U);
    msg.setDestination(18962U);
    msg.setDestinationEntity(16U);
    msg.value = 0.801062723906;

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
    msg.setTimeStamp(0.950824388762);
    msg.setSource(26851U);
    msg.setSourceEntity(116U);
    msg.setDestination(29064U);
    msg.setDestinationEntity(21U);
    msg.value = 0.219523817152;

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
    msg.setTimeStamp(0.936967653004);
    msg.setSource(3243U);
    msg.setSourceEntity(70U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(147U);
    msg.value = 0.755041416046;

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
    msg.setTimeStamp(0.137836711937);
    msg.setSource(30519U);
    msg.setSourceEntity(148U);
    msg.setDestination(8948U);
    msg.setDestinationEntity(2U);
    msg.type = 187U;
    msg.frequency = 4216152059U;
    msg.min_range = 30987U;
    msg.max_range = 1030U;
    msg.bits_per_point = 53U;
    msg.scale_factor = 0.457804055674;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.659563487355;
    tmp_msg_0.beam_height = 0.459460574932;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-73, -81, -4, 5, 54, 124, 17, 113, -96, -76, 62, -127, -23, -97, -4, -20, -103, 85, 29, -110, 85, 97, -121, 72, 94, 40, 3, 71, -120, 106, 83, 60, -93, -70, 50, 46, -91, 18, -70, -51, 79, -1, -47, -26, 5, -4, -81, 28, 17, -53, 111, 120, 102, -128, 77, 30, -92, 20, 55, -100, 58, 82, -6, 50, 22, -73, 106, 121, -54, -103, -95, -104, 57, 95, 111, 78, 6, -9, -112, -73, 68, 86, -34, 64, -21, -102, -124, -41, 36, -15, 4, 63, 32, 11, -90, -15, -115, -13, -31, 45, -87, -112, -44, -123, -105, -32, -112, 103, 104, 99, -84, -72, -75, -117, -40, 59, -116, -30, -22, -63, -112, 76, 23, 51, -65, 19, 98, 10, -63, 112, -3, -91, -96, 42, -41, 118, -68, -69, 51, -120, 74, -84, -96, 32, -79, -76, -13, 80, -64, 117, -3, 113, 112, 60, -71, -35, 10, 13, 34, 48, -121, 31, -75, 33, -69, 74, -46, 95, 42, -100, 60, -87, 32, 124, -81, -85, 29, 62, 105, -96, -36, -30, 52, 13, 116, 73, 45, 120, -17, -127, -112, 17, 113, -121, 26, -85, -110, -96, 117, 83, -26, 56, 51, 58, 13, 37, -116, 88, -116, 28, 0, 112, 13, -51, -53, 99, 40, -12, -55, -17, -108, -63, 42, 48, 17, -110, -11, -15, 50, 23, 75, -81, 0, -23, -114, 107, 27, -106, -11, -93, 123};
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
    msg.setTimeStamp(0.85171206508);
    msg.setSource(55698U);
    msg.setSourceEntity(243U);
    msg.setDestination(30441U);
    msg.setDestinationEntity(208U);
    msg.type = 118U;
    msg.frequency = 693110741U;
    msg.min_range = 57057U;
    msg.max_range = 58268U;
    msg.bits_per_point = 41U;
    msg.scale_factor = 0.334068908505;
    const char tmp_msg_0[] = {-124, 116, -18, 104, -29, 2, 116, 39, -17, -42, 70, 104, 39, -118, 21, 70, -67, 90, -97, 80, -82, -76, -113, 16, -107, 52, 42, 117, -1, 92, -62, 72, -78, -107, 111, 32, 125, -108, 57, -36, -62, 20, 70, -102, 88, -26, -11, 21, -10, -39, 25, -13, 100, 55, 18, -102, 54, 16, -102, 108, 19, -66, 68, 81, 11, 21, 40, -13, -66, 32, 40, -36, -10, -4, -78, 66, -113, 22, -38, 126, 33, 30, -112, -98, 99, -9, 49, 90, 65, 116, 119, -39, -108, 114, -22, 17, 25, -80, 23, -96, 111, 66, 45, 72, 99, -12, 72, 120, -114, 10, -5, -91, -123, 53, -52, 61, -13, -64, -5, -17, -20, -100, -4, 34, -47, -31, -32, 96, -111, 15, 47, 70, -10};
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
    msg.setTimeStamp(0.684915444609);
    msg.setSource(62052U);
    msg.setSourceEntity(245U);
    msg.setDestination(49561U);
    msg.setDestinationEntity(85U);
    msg.type = 42U;
    msg.frequency = 2987189392U;
    msg.min_range = 33222U;
    msg.max_range = 25073U;
    msg.bits_per_point = 16U;
    msg.scale_factor = 0.675731796317;
    const char tmp_msg_0[] = {-8, -76, -125, 8, 35, 59, -84, 111, -52, 98, -50, -49, -41, -120, -110, 72, 101, -75, 119, 123, -104, -123, 59, -39, 72, -47, 84, -31, -22, 105, -119, 67, -89, -4, 115, -119, 0, 112, -17, -109, 77, 62, -44, 81, 46, 119, 74, -115, 8, 48, 123, -85, 73, 69, 106, 23, 44, 92, -94, -113, 101, 2, -105, -115, 55, -76, -128, -85, -62, -73, 64, 113, -90, -70, 84, -82, -32, 11, 14, 2, -82, -76, -44, -5, -63, 50, -107, -112, -32, 85, 81, -121, -80, -110, 123, -41, 74, 64, -5, 119, 62, 18, -67, -27, 117, 71, -11, -27, -45, 77, 123, -120, -47, -20, 74, -66, -82, -52, -35, 62, 4, 100, -113, 24, 31, 109, -9, 58, 0, -34, 55, 13, 0, 62, 110, 77, -41, 103, -39, 58, -74, -125, 33, 40, 109, -23, -128, -31, -48, -71, 55, 71, -34, -99, -34, 42, -102, 84, -99, 55, -83, -69, 21, 48, -40, 124, 126, 115, 51, 12, -115, 122, 21, -109, 121, 87, 113, 122, -14, -5};
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
    msg.setTimeStamp(0.089960333193);
    msg.setSource(50001U);
    msg.setSourceEntity(78U);
    msg.setDestination(32969U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.690798509903);
    msg.setSource(10223U);
    msg.setSourceEntity(58U);
    msg.setDestination(49377U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.694933278216);
    msg.setSource(41102U);
    msg.setSourceEntity(205U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.460062371852);
    msg.setSource(17034U);
    msg.setSourceEntity(49U);
    msg.setDestination(56673U);
    msg.setDestinationEntity(157U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.851023021618);
    msg.setSource(20317U);
    msg.setSourceEntity(47U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(247U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.465795648233);
    msg.setSource(62123U);
    msg.setSourceEntity(204U);
    msg.setDestination(18366U);
    msg.setDestinationEntity(243U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.833019455509);
    msg.setSource(64493U);
    msg.setSourceEntity(11U);
    msg.setDestination(6885U);
    msg.setDestinationEntity(135U);
    msg.value = 0.274890274712;
    msg.confidence = 0.372488499153;
    msg.opmodes.assign("HAYMWUQOBSMVGHTSVZSTWNKXJBJJZVAJVDUKCAGYCZXTOCLPKKXPVQTMZHSRSDHLCMODQBYPVVMPBPSDLCAXQKRLBNBENIZNEPECKGCIRAFWQOJ");

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
    msg.setTimeStamp(0.305832168737);
    msg.setSource(41036U);
    msg.setSourceEntity(233U);
    msg.setDestination(31152U);
    msg.setDestinationEntity(46U);
    msg.value = 0.747993981608;
    msg.confidence = 0.713606951094;
    msg.opmodes.assign("UXGNUKFIVYIVBWYETLKJBNZNSPEKZTENVSJAKWRAXCHZGMIVSWQHVBMIWLPOAYEAZRMSPAJZMPOLUOJRMQFTAIOLRHSOFMHMQNBVJCBIOWHOAJDYHXTDEUCMYSBTIWSFDDZICJTGKYQU");

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
    msg.setTimeStamp(0.936705282171);
    msg.setSource(54330U);
    msg.setSourceEntity(212U);
    msg.setDestination(22348U);
    msg.setDestinationEntity(7U);
    msg.value = 0.448573063042;
    msg.confidence = 0.99100215405;
    msg.opmodes.assign("FJEDZJWVROMEBFVBJLATLMMFCQGIFNTUEPNGGWUXYVVGCBIRKTUZILNZMIQPZLPURYTVJLROPQCUHEAPLZEOTASWMCYZSXCWSIQRNYCJFZY");

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
    msg.setTimeStamp(0.775702181623);
    msg.setSource(56577U);
    msg.setSourceEntity(247U);
    msg.setDestination(25659U);
    msg.setDestinationEntity(246U);
    msg.itow = 1978792843U;
    msg.lat = 0.316931462104;
    msg.lon = 0.128284884967;
    msg.height_ell = 0.811020040745;
    msg.height_sea = 0.588582847815;
    msg.hacc = 0.646931285978;
    msg.vacc = 0.0888670315559;
    msg.vel_n = 0.364988753886;
    msg.vel_e = 0.187238899891;
    msg.vel_d = 0.636093404868;
    msg.speed = 0.0709591054293;
    msg.gspeed = 0.574422461348;
    msg.heading = 0.394320303837;
    msg.sacc = 0.417110678098;
    msg.cacc = 0.820925866514;

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
    msg.setTimeStamp(0.150981618198);
    msg.setSource(57954U);
    msg.setSourceEntity(203U);
    msg.setDestination(45819U);
    msg.setDestinationEntity(223U);
    msg.itow = 1355512653U;
    msg.lat = 0.470129116319;
    msg.lon = 0.221223522057;
    msg.height_ell = 0.984304366064;
    msg.height_sea = 0.790007533952;
    msg.hacc = 0.720802340653;
    msg.vacc = 0.55757961082;
    msg.vel_n = 0.514773678417;
    msg.vel_e = 0.0299877493927;
    msg.vel_d = 0.124487438588;
    msg.speed = 0.339614227814;
    msg.gspeed = 0.887346121944;
    msg.heading = 0.860795456044;
    msg.sacc = 0.448192933242;
    msg.cacc = 0.119317089958;

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
    msg.setTimeStamp(0.473330231477);
    msg.setSource(29562U);
    msg.setSourceEntity(139U);
    msg.setDestination(6300U);
    msg.setDestinationEntity(103U);
    msg.itow = 1520985551U;
    msg.lat = 0.711540850112;
    msg.lon = 0.291496883898;
    msg.height_ell = 0.833767641173;
    msg.height_sea = 0.0403722112559;
    msg.hacc = 0.584526424786;
    msg.vacc = 0.396402881912;
    msg.vel_n = 0.553312981374;
    msg.vel_e = 0.715753453633;
    msg.vel_d = 0.777580271794;
    msg.speed = 0.543861453881;
    msg.gspeed = 0.284279446544;
    msg.heading = 0.492390874348;
    msg.sacc = 0.428547968291;
    msg.cacc = 0.951506369996;

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
    msg.setTimeStamp(0.766314226319);
    msg.setSource(28202U);
    msg.setSourceEntity(74U);
    msg.setDestination(55190U);
    msg.setDestinationEntity(51U);
    msg.id = 180U;
    msg.value = 0.814380327658;

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
    msg.setTimeStamp(0.577229623955);
    msg.setSource(51540U);
    msg.setSourceEntity(55U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(87U);
    msg.id = 217U;
    msg.value = 0.986183403969;

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
    msg.setTimeStamp(0.343773039907);
    msg.setSource(55060U);
    msg.setSourceEntity(103U);
    msg.setDestination(12860U);
    msg.setDestinationEntity(156U);
    msg.id = 118U;
    msg.value = 0.658766197937;

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
    msg.setTimeStamp(0.256715793766);
    msg.setSource(48529U);
    msg.setSourceEntity(182U);
    msg.setDestination(50512U);
    msg.setDestinationEntity(1U);
    msg.x = 0.946830542343;
    msg.y = 0.66167516029;
    msg.z = 0.932329368342;
    msg.phi = 0.0445513732693;
    msg.theta = 0.764513224598;
    msg.psi = 0.464429102335;

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
    msg.setTimeStamp(0.243382213558);
    msg.setSource(41238U);
    msg.setSourceEntity(53U);
    msg.setDestination(10487U);
    msg.setDestinationEntity(97U);
    msg.x = 0.383057887833;
    msg.y = 0.321459638758;
    msg.z = 0.784931778221;
    msg.phi = 0.970222867863;
    msg.theta = 0.0812596192135;
    msg.psi = 0.794205384322;

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
    msg.setTimeStamp(0.706675405775);
    msg.setSource(34463U);
    msg.setSourceEntity(176U);
    msg.setDestination(23168U);
    msg.setDestinationEntity(70U);
    msg.x = 0.260445855044;
    msg.y = 0.944422617611;
    msg.z = 0.991719648568;
    msg.phi = 0.203089824556;
    msg.theta = 0.318245754131;
    msg.psi = 0.941009005387;

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
    msg.setTimeStamp(0.701997357345);
    msg.setSource(30286U);
    msg.setSourceEntity(80U);
    msg.setDestination(24693U);
    msg.setDestinationEntity(215U);
    msg.beam_width = 0.38940502938;
    msg.beam_height = 0.836741205213;

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
    msg.setTimeStamp(0.27657794543);
    msg.setSource(14979U);
    msg.setSourceEntity(204U);
    msg.setDestination(41226U);
    msg.setDestinationEntity(187U);
    msg.beam_width = 0.534742441817;
    msg.beam_height = 0.588665706149;

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
    msg.setTimeStamp(0.936166924134);
    msg.setSource(19897U);
    msg.setSourceEntity(53U);
    msg.setDestination(60252U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.924461154833;
    msg.beam_height = 0.586376159997;

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
    msg.setTimeStamp(0.786785655547);
    msg.setSource(61775U);
    msg.setSourceEntity(167U);
    msg.setDestination(62938U);
    msg.setDestinationEntity(217U);
    msg.sane = 69U;

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
    msg.setTimeStamp(0.108565820433);
    msg.setSource(51172U);
    msg.setSourceEntity(230U);
    msg.setDestination(46893U);
    msg.setDestinationEntity(231U);
    msg.sane = 34U;

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
    msg.setTimeStamp(0.0259761595833);
    msg.setSource(22136U);
    msg.setSourceEntity(221U);
    msg.setDestination(28505U);
    msg.setDestinationEntity(233U);
    msg.sane = 232U;

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
    msg.setTimeStamp(0.118759507519);
    msg.setSource(33720U);
    msg.setSourceEntity(191U);
    msg.setDestination(33479U);
    msg.setDestinationEntity(78U);
    msg.value = 0.187944302193;

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
    msg.setTimeStamp(0.400225956047);
    msg.setSource(24655U);
    msg.setSourceEntity(178U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(137U);
    msg.value = 0.452219471074;

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
    msg.setTimeStamp(0.647065182608);
    msg.setSource(56011U);
    msg.setSourceEntity(122U);
    msg.setDestination(8321U);
    msg.setDestinationEntity(177U);
    msg.value = 0.354729242436;

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
    msg.setTimeStamp(0.516645590832);
    msg.setSource(39760U);
    msg.setSourceEntity(87U);
    msg.setDestination(43652U);
    msg.setDestinationEntity(26U);
    msg.value = 0.546435395987;

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
    msg.setTimeStamp(0.711560473748);
    msg.setSource(16360U);
    msg.setSourceEntity(24U);
    msg.setDestination(21375U);
    msg.setDestinationEntity(46U);
    msg.value = 0.670076916041;

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
    msg.setTimeStamp(0.0175790573516);
    msg.setSource(31793U);
    msg.setSourceEntity(83U);
    msg.setDestination(12328U);
    msg.setDestinationEntity(88U);
    msg.value = 0.123602776042;

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
    msg.setTimeStamp(0.486830522002);
    msg.setSource(53109U);
    msg.setSourceEntity(251U);
    msg.setDestination(52527U);
    msg.setDestinationEntity(215U);
    msg.value = 0.423222568057;

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
    msg.setTimeStamp(0.685938856141);
    msg.setSource(46778U);
    msg.setSourceEntity(112U);
    msg.setDestination(22224U);
    msg.setDestinationEntity(62U);
    msg.value = 0.180908723039;

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
    msg.setTimeStamp(0.645137362222);
    msg.setSource(48203U);
    msg.setSourceEntity(52U);
    msg.setDestination(7484U);
    msg.setDestinationEntity(135U);
    msg.value = 0.322315476232;

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
    msg.setTimeStamp(0.664084885139);
    msg.setSource(5265U);
    msg.setSourceEntity(210U);
    msg.setDestination(32708U);
    msg.setDestinationEntity(217U);
    msg.value = 0.696282665287;

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
    msg.setTimeStamp(0.549822746789);
    msg.setSource(6306U);
    msg.setSourceEntity(237U);
    msg.setDestination(1804U);
    msg.setDestinationEntity(179U);
    msg.value = 0.727300054193;

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
    msg.setTimeStamp(0.634426215198);
    msg.setSource(21798U);
    msg.setSourceEntity(3U);
    msg.setDestination(19557U);
    msg.setDestinationEntity(45U);
    msg.value = 0.853289973145;

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
    msg.setTimeStamp(0.2875088814);
    msg.setSource(4749U);
    msg.setSourceEntity(221U);
    msg.setDestination(61365U);
    msg.setDestinationEntity(116U);
    msg.value = 0.22029202902;

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
    msg.setTimeStamp(0.329738115382);
    msg.setSource(50116U);
    msg.setSourceEntity(148U);
    msg.setDestination(559U);
    msg.setDestinationEntity(179U);
    msg.value = 0.458878864441;

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
    msg.setTimeStamp(0.748737043508);
    msg.setSource(11009U);
    msg.setSourceEntity(16U);
    msg.setDestination(5664U);
    msg.setDestinationEntity(116U);
    msg.value = 0.404740706017;

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
    msg.setTimeStamp(0.794257755048);
    msg.setSource(32327U);
    msg.setSourceEntity(245U);
    msg.setDestination(54821U);
    msg.setDestinationEntity(155U);
    msg.value = 0.937220267441;

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
    msg.setTimeStamp(0.16027342416);
    msg.setSource(7838U);
    msg.setSourceEntity(115U);
    msg.setDestination(33505U);
    msg.setDestinationEntity(132U);
    msg.value = 0.00842464445797;

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
    msg.setTimeStamp(0.273509309957);
    msg.setSource(61166U);
    msg.setSourceEntity(92U);
    msg.setDestination(36623U);
    msg.setDestinationEntity(82U);
    msg.value = 0.301221999858;

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
    msg.setTimeStamp(0.235569648816);
    msg.setSource(59371U);
    msg.setSourceEntity(175U);
    msg.setDestination(11963U);
    msg.setDestinationEntity(71U);
    msg.value = 0.225163643177;

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
    msg.setTimeStamp(0.114186241208);
    msg.setSource(57432U);
    msg.setSourceEntity(250U);
    msg.setDestination(61439U);
    msg.setDestinationEntity(47U);
    msg.value = 0.349850019905;

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
    msg.setTimeStamp(0.00715546433192);
    msg.setSource(53730U);
    msg.setSourceEntity(75U);
    msg.setDestination(49929U);
    msg.setDestinationEntity(157U);
    msg.value = 0.357579301268;

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
    msg.setTimeStamp(0.169066030054);
    msg.setSource(10869U);
    msg.setSourceEntity(190U);
    msg.setDestination(22779U);
    msg.setDestinationEntity(106U);
    msg.value = 0.198325330414;

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
    msg.setTimeStamp(0.843244532448);
    msg.setSource(63657U);
    msg.setSourceEntity(208U);
    msg.setDestination(38658U);
    msg.setDestinationEntity(173U);
    msg.value = 0.366901091992;

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
    msg.setTimeStamp(0.763713881128);
    msg.setSource(22476U);
    msg.setSourceEntity(138U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(89U);
    msg.value = 0.304612388836;

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
    msg.setTimeStamp(0.43032325727);
    msg.setSource(15935U);
    msg.setSourceEntity(151U);
    msg.setDestination(25719U);
    msg.setDestinationEntity(107U);
    msg.validity = 28620U;
    msg.type = 143U;
    msg.tow = 2130768082U;
    msg.base_lat = 0.375228299396;
    msg.base_lon = 0.447607452323;
    msg.base_height = 0.906779175315;
    msg.n = 0.31528614329;
    msg.e = 0.0420806581697;
    msg.d = 0.940793699854;
    msg.v_n = 0.299296017473;
    msg.v_e = 0.0741690938814;
    msg.v_d = 0.371774633929;
    msg.satellites = 34U;
    msg.iar_hyp = 61293U;
    msg.iar_ratio = 0.365874274644;

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
    msg.setTimeStamp(0.423735282785);
    msg.setSource(34724U);
    msg.setSourceEntity(115U);
    msg.setDestination(31867U);
    msg.setDestinationEntity(145U);
    msg.validity = 50279U;
    msg.type = 228U;
    msg.tow = 134263338U;
    msg.base_lat = 0.280430748025;
    msg.base_lon = 0.367299748938;
    msg.base_height = 0.508461448354;
    msg.n = 0.170867283012;
    msg.e = 0.491701551621;
    msg.d = 0.972853861002;
    msg.v_n = 0.55180537293;
    msg.v_e = 0.650897124521;
    msg.v_d = 0.141181152505;
    msg.satellites = 185U;
    msg.iar_hyp = 9064U;
    msg.iar_ratio = 0.0875420599804;

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
    msg.setTimeStamp(0.929428662142);
    msg.setSource(36473U);
    msg.setSourceEntity(238U);
    msg.setDestination(19754U);
    msg.setDestinationEntity(158U);
    msg.validity = 22354U;
    msg.type = 10U;
    msg.tow = 2686155139U;
    msg.base_lat = 0.116461078352;
    msg.base_lon = 0.634993380536;
    msg.base_height = 0.802795256255;
    msg.n = 0.810573147946;
    msg.e = 0.489205773746;
    msg.d = 0.514394130049;
    msg.v_n = 0.202859180898;
    msg.v_e = 0.454509240531;
    msg.v_d = 0.99718980738;
    msg.satellites = 74U;
    msg.iar_hyp = 6078U;
    msg.iar_ratio = 0.388710840972;

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
    msg.setTimeStamp(0.642820225722);
    msg.setSource(64062U);
    msg.setSourceEntity(17U);
    msg.setDestination(53753U);
    msg.setDestinationEntity(223U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0840040776207;
    tmp_msg_0.lon = 0.237791540689;
    tmp_msg_0.height = 0.932552053867;
    tmp_msg_0.x = 0.677428428481;
    tmp_msg_0.y = 0.759046809975;
    tmp_msg_0.z = 0.160841916881;
    tmp_msg_0.phi = 0.340657413954;
    tmp_msg_0.theta = 0.850478676559;
    tmp_msg_0.psi = 0.434415704637;
    tmp_msg_0.u = 0.318185212956;
    tmp_msg_0.v = 0.588842948005;
    tmp_msg_0.w = 0.941063727935;
    tmp_msg_0.vx = 0.696386699014;
    tmp_msg_0.vy = 0.809904535039;
    tmp_msg_0.vz = 0.155631965242;
    tmp_msg_0.p = 0.730261496544;
    tmp_msg_0.q = 0.524581256256;
    tmp_msg_0.r = 0.931361155272;
    tmp_msg_0.depth = 0.538486682993;
    tmp_msg_0.alt = 0.255799797063;
    msg.state.set(tmp_msg_0);
    msg.type = 5U;

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
    msg.setTimeStamp(0.10759226469);
    msg.setSource(411U);
    msg.setSourceEntity(128U);
    msg.setDestination(2518U);
    msg.setDestinationEntity(128U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0621069366584;
    tmp_msg_0.lon = 0.133728999597;
    tmp_msg_0.height = 0.245385617131;
    tmp_msg_0.x = 0.065359164019;
    tmp_msg_0.y = 0.0907994621451;
    tmp_msg_0.z = 0.73970967254;
    tmp_msg_0.phi = 0.343811795793;
    tmp_msg_0.theta = 0.579101590744;
    tmp_msg_0.psi = 0.413635082901;
    tmp_msg_0.u = 0.976254372764;
    tmp_msg_0.v = 0.919360893481;
    tmp_msg_0.w = 0.666758406205;
    tmp_msg_0.vx = 0.787093960078;
    tmp_msg_0.vy = 0.320596843718;
    tmp_msg_0.vz = 0.46609858192;
    tmp_msg_0.p = 0.12582185899;
    tmp_msg_0.q = 0.748893835712;
    tmp_msg_0.r = 0.92104537355;
    tmp_msg_0.depth = 0.812000547746;
    tmp_msg_0.alt = 0.402635487265;
    msg.state.set(tmp_msg_0);
    msg.type = 39U;

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
    msg.setTimeStamp(0.738364022516);
    msg.setSource(15741U);
    msg.setSourceEntity(138U);
    msg.setDestination(1429U);
    msg.setDestinationEntity(106U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.537788504506;
    tmp_msg_0.lon = 0.713359008941;
    tmp_msg_0.height = 0.0731550377186;
    tmp_msg_0.x = 0.996968871069;
    tmp_msg_0.y = 0.541109348275;
    tmp_msg_0.z = 0.833250662948;
    tmp_msg_0.phi = 0.330137377377;
    tmp_msg_0.theta = 0.593902110161;
    tmp_msg_0.psi = 0.0581718194738;
    tmp_msg_0.u = 0.913556656711;
    tmp_msg_0.v = 0.413458919772;
    tmp_msg_0.w = 0.68503205136;
    tmp_msg_0.vx = 0.901375056104;
    tmp_msg_0.vy = 0.414949579507;
    tmp_msg_0.vz = 0.817104079986;
    tmp_msg_0.p = 0.0258024044438;
    tmp_msg_0.q = 0.643084508756;
    tmp_msg_0.r = 0.583645834068;
    tmp_msg_0.depth = 0.355766243641;
    tmp_msg_0.alt = 0.328786113162;
    msg.state.set(tmp_msg_0);
    msg.type = 162U;

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
    msg.setTimeStamp(0.0171228299505);
    msg.setSource(14500U);
    msg.setSourceEntity(250U);
    msg.setDestination(50812U);
    msg.setDestinationEntity(211U);
    msg.value = 0.792154598103;

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
    msg.setTimeStamp(0.867634190059);
    msg.setSource(43895U);
    msg.setSourceEntity(140U);
    msg.setDestination(12365U);
    msg.setDestinationEntity(209U);
    msg.value = 0.339682614025;

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
    msg.setTimeStamp(0.314249822246);
    msg.setSource(45417U);
    msg.setSourceEntity(19U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(49U);
    msg.value = 0.377859188318;

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
    msg.setTimeStamp(0.906808725018);
    msg.setSource(27915U);
    msg.setSourceEntity(158U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(18U);
    msg.value = 0.829056692203;

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
    msg.setTimeStamp(0.904014530184);
    msg.setSource(62496U);
    msg.setSourceEntity(166U);
    msg.setDestination(16490U);
    msg.setDestinationEntity(48U);
    msg.value = 0.382217463439;

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
    msg.setTimeStamp(0.91288976361);
    msg.setSource(13124U);
    msg.setSourceEntity(72U);
    msg.setDestination(13332U);
    msg.setDestinationEntity(54U);
    msg.value = 0.338558748056;

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
    msg.setTimeStamp(0.664310194749);
    msg.setSource(27748U);
    msg.setSourceEntity(174U);
    msg.setDestination(4681U);
    msg.setDestinationEntity(239U);
    msg.value = 0.592446755758;

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
    msg.setTimeStamp(0.570152383054);
    msg.setSource(55246U);
    msg.setSourceEntity(170U);
    msg.setDestination(65036U);
    msg.setDestinationEntity(239U);
    msg.value = 0.445065914245;

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
    msg.setTimeStamp(0.807868116551);
    msg.setSource(14223U);
    msg.setSourceEntity(143U);
    msg.setDestination(12069U);
    msg.setDestinationEntity(78U);
    msg.value = 0.156662000901;

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
    msg.setTimeStamp(0.252550241817);
    msg.setSource(46385U);
    msg.setSourceEntity(225U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(65U);
    msg.value = 0.264728622932;

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
    msg.setTimeStamp(0.0239745876286);
    msg.setSource(50269U);
    msg.setSourceEntity(41U);
    msg.setDestination(24031U);
    msg.setDestinationEntity(47U);
    msg.value = 0.179758548909;

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
    msg.setTimeStamp(0.512357575931);
    msg.setSource(13175U);
    msg.setSourceEntity(233U);
    msg.setDestination(17524U);
    msg.setDestinationEntity(25U);
    msg.value = 0.753590077575;

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
    msg.setTimeStamp(0.971148346353);
    msg.setSource(57503U);
    msg.setSourceEntity(55U);
    msg.setDestination(61992U);
    msg.setDestinationEntity(88U);
    msg.value = 0.825995799779;

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
    msg.setTimeStamp(0.353822512575);
    msg.setSource(43354U);
    msg.setSourceEntity(174U);
    msg.setDestination(15736U);
    msg.setDestinationEntity(14U);
    msg.value = 0.576085400004;

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
    msg.setTimeStamp(0.537311293497);
    msg.setSource(20840U);
    msg.setSourceEntity(15U);
    msg.setDestination(6066U);
    msg.setDestinationEntity(145U);
    msg.value = 0.960996108066;

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
    msg.setTimeStamp(0.986119150862);
    msg.setSource(40495U);
    msg.setSourceEntity(0U);
    msg.setDestination(47789U);
    msg.setDestinationEntity(63U);
    msg.id = 34U;
    msg.zoom = 195U;
    msg.action = 9U;

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
    msg.setTimeStamp(0.375894208299);
    msg.setSource(14461U);
    msg.setSourceEntity(81U);
    msg.setDestination(5749U);
    msg.setDestinationEntity(30U);
    msg.id = 141U;
    msg.zoom = 203U;
    msg.action = 125U;

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
    msg.setTimeStamp(0.746650689431);
    msg.setSource(50888U);
    msg.setSourceEntity(82U);
    msg.setDestination(20733U);
    msg.setDestinationEntity(51U);
    msg.id = 174U;
    msg.zoom = 101U;
    msg.action = 52U;

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
    msg.setTimeStamp(0.834621497895);
    msg.setSource(25287U);
    msg.setSourceEntity(136U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(127U);
    msg.id = 152U;
    msg.value = 0.0660561071723;

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
    msg.setTimeStamp(0.0624290894463);
    msg.setSource(21289U);
    msg.setSourceEntity(106U);
    msg.setDestination(17319U);
    msg.setDestinationEntity(39U);
    msg.id = 237U;
    msg.value = 0.496373837884;

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
    msg.setTimeStamp(0.0474293930838);
    msg.setSource(17870U);
    msg.setSourceEntity(236U);
    msg.setDestination(4304U);
    msg.setDestinationEntity(99U);
    msg.id = 101U;
    msg.value = 0.300972422208;

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
    msg.setTimeStamp(0.537527525183);
    msg.setSource(7795U);
    msg.setSourceEntity(7U);
    msg.setDestination(12148U);
    msg.setDestinationEntity(140U);
    msg.id = 86U;
    msg.value = 0.630283005384;

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
    msg.setTimeStamp(0.599265621307);
    msg.setSource(28631U);
    msg.setSourceEntity(236U);
    msg.setDestination(12490U);
    msg.setDestinationEntity(17U);
    msg.id = 117U;
    msg.value = 0.821122060815;

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
    msg.setTimeStamp(0.727030270648);
    msg.setSource(37572U);
    msg.setSourceEntity(114U);
    msg.setDestination(12456U);
    msg.setDestinationEntity(226U);
    msg.id = 2U;
    msg.value = 0.319589227632;

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
    msg.setTimeStamp(0.165235957077);
    msg.setSource(53534U);
    msg.setSourceEntity(35U);
    msg.setDestination(41529U);
    msg.setDestinationEntity(149U);
    msg.id = 25U;
    msg.angle = 0.0539451020071;

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
    msg.setTimeStamp(0.766875111744);
    msg.setSource(60727U);
    msg.setSourceEntity(56U);
    msg.setDestination(35529U);
    msg.setDestinationEntity(66U);
    msg.id = 34U;
    msg.angle = 0.470520265538;

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
    msg.setTimeStamp(0.809192266971);
    msg.setSource(55138U);
    msg.setSourceEntity(0U);
    msg.setDestination(4606U);
    msg.setDestinationEntity(225U);
    msg.id = 54U;
    msg.angle = 0.104217815237;

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
    msg.setTimeStamp(0.586661093241);
    msg.setSource(6168U);
    msg.setSourceEntity(176U);
    msg.setDestination(33798U);
    msg.setDestinationEntity(252U);
    msg.op = 137U;
    msg.actions.assign("MIFZVHMJCXBGTKZHDIOTSJXNJOXPRZTRAOFOJTKJQMNESULCPWSY");

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
    msg.setTimeStamp(0.08094452669);
    msg.setSource(13682U);
    msg.setSourceEntity(112U);
    msg.setDestination(44226U);
    msg.setDestinationEntity(229U);
    msg.op = 13U;
    msg.actions.assign("WXIWCGUTYJWHKASCGYFDRMULMEHGIRZGBZYRXZEOWVKYBDQKUHBXQORDPTJCAIDLUOYSBZSNMVYCIJTXZGOHJMKWFFNTKGQHIPNLRHVPMTNEWQAANPWTIYHWXEFIRIOUMXEOQAPDLKDDFCJVAJDBDUETXBRONFXBJGMEQU");

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
    msg.setTimeStamp(0.253132228452);
    msg.setSource(39487U);
    msg.setSourceEntity(207U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(43U);
    msg.op = 244U;
    msg.actions.assign("NSRTUNNCYSEQIZOMEDDFACVPTGWXPUJFMQOZYFKZKXAUJGMZXVDYNOZDLTEQQJAVINASDMSROBAIHTXNUKTWFYIXUCRPFPRKOIPFHXOBPAKSZEQBOLACGPMHZDKSRYIHZRBVXQUGXJJTNWVVFTVZICCKSCWEBWHDSH");

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
    msg.setTimeStamp(0.249484735633);
    msg.setSource(45223U);
    msg.setSourceEntity(13U);
    msg.setDestination(9943U);
    msg.setDestinationEntity(77U);
    msg.actions.assign("EYPBLZHPKFEBPVPIXZDXILNOZOTBBAZTAUVALVKHMDLUGGNYEVWLIXQNAYGYXVAUVJUNIZWTCGCRGB");

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
    msg.setTimeStamp(0.0636388941337);
    msg.setSource(13174U);
    msg.setSourceEntity(82U);
    msg.setDestination(45003U);
    msg.setDestinationEntity(38U);
    msg.actions.assign("UOOGBOUAXRBFUHGENVXZOUOLBXLASRRHAWLMHKVNTNZTVGTZFXLTOPLASYSLBYQSVXYJKAPFQLPNEZQNKTCPWFIDGMDXGKCYYFHIVQ");

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
    msg.setTimeStamp(0.436542857931);
    msg.setSource(25598U);
    msg.setSourceEntity(63U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(23U);
    msg.actions.assign("TYYMVUNDMTPLZEAAWMLQUDIKVGSCFRXAKAWSXWHCUHXTCDWXJPFFLGDQRUZRGVYNKZSHPEHKGBRHETEYNXIEBIJYXJPAFEAISHBLOJNFOZBSMQQQMWKETVCONWZMHMBCKAYLVFNNBUSJHROOYHYLRIKETUXXQTOZTUCZDWRMNOZYGPCGVJHFPIWXTIYSUIGBOUQGCFWLZMIQRDQLLDDRQXDBGSVCTENZKKVADKJEPPBWLRVSMPIUGFOSJ");

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
    msg.setTimeStamp(0.565570539639);
    msg.setSource(28269U);
    msg.setSourceEntity(122U);
    msg.setDestination(24850U);
    msg.setDestinationEntity(193U);
    msg.button = 238U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.0625816714982);
    msg.setSource(52716U);
    msg.setSourceEntity(74U);
    msg.setDestination(4313U);
    msg.setDestinationEntity(227U);
    msg.button = 248U;
    msg.value = 114U;

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
    msg.setTimeStamp(0.520288143712);
    msg.setSource(4488U);
    msg.setSourceEntity(16U);
    msg.setDestination(16996U);
    msg.setDestinationEntity(214U);
    msg.button = 116U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.892133179195);
    msg.setSource(63453U);
    msg.setSourceEntity(191U);
    msg.setDestination(52183U);
    msg.setDestinationEntity(57U);
    msg.op = 166U;
    msg.text.assign("DKBKAZEQRFQWFMNGRJCTUASANSKWAXVLVTMFUGNIISSLJMKYRSMEEEZHX");

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
    msg.setTimeStamp(0.239176790266);
    msg.setSource(22688U);
    msg.setSourceEntity(68U);
    msg.setDestination(2097U);
    msg.setDestinationEntity(206U);
    msg.op = 19U;
    msg.text.assign("OLQTCRPUYFSGYOVOCZGBIQLUJVWNRLQNQEMSKVSZHEOAXPZRBLGNRFHKBXOINRUVMKIUWMBEJPIKTAHJPDNRQDZOWZZOHWKDKZXKVUZFJGTSUOEJJKCKXSYGVTBJEIZDENBQAEOHIUFHHMAAEXEHGTCADHCVCJMYBPLPLBVCYBMRMLMYNTLMHDJXIFAFFBATPTQJRKSCNIZUXURFPRGGXDMEIDFNNVQYXYDQQVGPSOADCSFLS");

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
    msg.setTimeStamp(0.4678843617);
    msg.setSource(26140U);
    msg.setSourceEntity(45U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(62U);
    msg.op = 171U;
    msg.text.assign("CVDLREKHDNNWJFSZDZNASGAIXOAPURUCJRO");

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
    msg.setTimeStamp(0.045569585514);
    msg.setSource(35985U);
    msg.setSourceEntity(25U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(169U);
    msg.op = 17U;
    msg.time_remain = 0.245214105144;
    msg.sched_time = 0.287413655697;

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
    msg.setTimeStamp(0.719618784958);
    msg.setSource(10079U);
    msg.setSourceEntity(43U);
    msg.setDestination(49766U);
    msg.setDestinationEntity(37U);
    msg.op = 79U;
    msg.time_remain = 0.0168945684892;
    msg.sched_time = 0.769721115931;

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
    msg.setTimeStamp(0.915443882501);
    msg.setSource(38256U);
    msg.setSourceEntity(91U);
    msg.setDestination(58630U);
    msg.setDestinationEntity(176U);
    msg.op = 158U;
    msg.time_remain = 0.429604053513;
    msg.sched_time = 0.0959575756773;

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
    msg.setTimeStamp(0.238700376949);
    msg.setSource(54175U);
    msg.setSourceEntity(219U);
    msg.setDestination(53422U);
    msg.setDestinationEntity(254U);
    msg.name.assign("JVBSRBFABIKQADZNLLKKUCXLLPVPYNULUWWGGZOBPAXOHOAKUBSXDGXDVWBZ");
    msg.op = 202U;
    msg.sched_time = 0.720963667961;

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
    msg.setTimeStamp(0.26305619925);
    msg.setSource(4535U);
    msg.setSourceEntity(109U);
    msg.setDestination(31833U);
    msg.setDestinationEntity(7U);
    msg.name.assign("HZTSEZBOZHFXR");
    msg.op = 52U;
    msg.sched_time = 0.970450594572;

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
    msg.setTimeStamp(0.259750434518);
    msg.setSource(58690U);
    msg.setSourceEntity(24U);
    msg.setDestination(28880U);
    msg.setDestinationEntity(200U);
    msg.name.assign("OPAJRZUNCMCVBYQCGITKDYSUIBMAGEJYRKOBYBHVFOJQAQ");
    msg.op = 12U;
    msg.sched_time = 0.368909642136;

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
    msg.setTimeStamp(0.745689978725);
    msg.setSource(29420U);
    msg.setSourceEntity(189U);
    msg.setDestination(42237U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.859657533921);
    msg.setSource(10121U);
    msg.setSourceEntity(250U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.753539284036);
    msg.setSource(52810U);
    msg.setSourceEntity(80U);
    msg.setDestination(44243U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.856054229033);
    msg.setSource(27216U);
    msg.setSourceEntity(183U);
    msg.setDestination(5259U);
    msg.setDestinationEntity(248U);
    msg.name.assign("BNQLXGJVXKMQMBQEDUYAWMUVDBPQAEBVHRKCJPOXCJGGUWFLUJAEPOTDLPWGIAMDOZNEZHFFATCBOHPEDXYHAOMHU");
    msg.state = 42U;

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
    msg.setTimeStamp(0.593416080114);
    msg.setSource(61813U);
    msg.setSourceEntity(16U);
    msg.setDestination(39631U);
    msg.setDestinationEntity(181U);
    msg.name.assign("ITIPKKJKDDENFFFYMHZYBPMYEWWOKLQZXBZSAPXSHDLOQEDVPCTDSMRCJLHGVLUDBWVSAPANNKO");
    msg.state = 224U;

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
    msg.setTimeStamp(0.706553236659);
    msg.setSource(15448U);
    msg.setSourceEntity(210U);
    msg.setDestination(29612U);
    msg.setDestinationEntity(225U);
    msg.name.assign("XIDFYUNGCPBGWNMLCYGNAKZJMFXMDMAPUUDJFGUNTYKKPLXEYSOYJDQQUVKQDOPCKHMULBYLJTSIGQAVLFECGRWYHBDFDTXCRLIRIRHPWYZINOQLQIHPSTPMZTDFEBYFBZQVKRA");
    msg.state = 96U;

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
    msg.setTimeStamp(0.105912980093);
    msg.setSource(57305U);
    msg.setSourceEntity(110U);
    msg.setDestination(28759U);
    msg.setDestinationEntity(246U);
    msg.name.assign("CXYUSBSOBPKFPNGOHVKTLVMVINQQHONQEQJVVJYDHCWMIGARRKNDRTNIFWAOSKUFSKXQBFXAHXSACBMYDSEZYLFXZRSNRXAAAZUOJYILJMXBWAWUVHFYDBJEKMSUOUHB");
    msg.value = 126U;

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
    msg.setTimeStamp(0.478601524636);
    msg.setSource(41165U);
    msg.setSourceEntity(23U);
    msg.setDestination(26764U);
    msg.setDestinationEntity(193U);
    msg.name.assign("RTKVFBAXIUMZBRQVIGMQNJXDLTGPLXXMDPWGZELGUHRNKFHYSKYWQMPKXIPFWRYNMEBUOK");
    msg.value = 46U;

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
    msg.setTimeStamp(0.583243623522);
    msg.setSource(23409U);
    msg.setSourceEntity(86U);
    msg.setDestination(32543U);
    msg.setDestinationEntity(152U);
    msg.name.assign("KGNPYNBLKJACKQVYCRACRUWWFFWXEDMEZPNODFGOIVXDQRYZBLGZYJLIKNDNTZGXOKUSIZDHTOFHCKQQNTUDVWVTQCGQPNYJWFPLI");
    msg.value = 78U;

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
    msg.setTimeStamp(0.752975407335);
    msg.setSource(13462U);
    msg.setSourceEntity(190U);
    msg.setDestination(45656U);
    msg.setDestinationEntity(221U);
    msg.name.assign("ISVGQWVQOHTSEBUFYLAAOSPSHSVQTSIJFZDBTLQKTFTRLECOBZUFKBXZMHIFPLXZQPKORAJWVOLFHE");

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
    msg.setTimeStamp(0.16831099443);
    msg.setSource(46356U);
    msg.setSourceEntity(184U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(190U);
    msg.name.assign("ODPNOBYYMZCHJPXLELTQWWDSCNSRQMQGSCHYADJDLDMDUDOCGFQUEEJZUYBSGAVRXBVAZJIUVQJDOZUMXFLAYWBWXPBCLGRSUYFIKPEWZAJJGSRLYVMNPTABPECGPDLFQYKEFSFERKVKOZJCKUGPLLHVCFPMDTWXKIQWISZZOUNRWCNTN");

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
    msg.setTimeStamp(0.93915783658);
    msg.setSource(34963U);
    msg.setSourceEntity(248U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(105U);
    msg.name.assign("AGEELAZNQYFITOYTKEPSWAZZVVCSYFFKCXJMYDNDLVVIMIKLJUIZVWCNMDHGMBUBJKXNABUQXGJKQCKPUAHJ");

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
    msg.setTimeStamp(0.424857068035);
    msg.setSource(47461U);
    msg.setSourceEntity(183U);
    msg.setDestination(5180U);
    msg.setDestinationEntity(45U);
    msg.name.assign("DWTABWPWZQBINXXWVSLH");
    msg.value = 24U;

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
    msg.setTimeStamp(0.887107791893);
    msg.setSource(5345U);
    msg.setSourceEntity(30U);
    msg.setDestination(36277U);
    msg.setDestinationEntity(159U);
    msg.name.assign("WACZGKEDXZVLIGTMXOJOVBXKAANPQYGUYMGUKQHTTIHZEPJGHRQDEGUBRUUNTYTBWOOFWIFDXLNBDZPYQVWRMRUOYDNJWXGFJHJSCWFLRSLZFGJZMQORKOBCBZRXVQQFVDGJSLBVNWLWPGSDPXQVMWIWTHDALLCDEHIBFEIKCVTASAYYJAKXKUMHSVEPFCUNIQXPNPBHYLVMHTPQFYRECFECJ");
    msg.value = 21U;

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
    msg.setTimeStamp(0.584050911523);
    msg.setSource(55904U);
    msg.setSourceEntity(198U);
    msg.setDestination(40450U);
    msg.setDestinationEntity(236U);
    msg.name.assign("OTDJKCUSIMGDEYVHZVGRLLAKPWFKSSPBEMTMBAKYYIXZSGVFVBUPBYQUMVFNQONYJXFMXLRHLPYAAZIOXRDLZHDWEGDZOHYZDUZJNRPUUAPBAHQIGGNUXCDWAYQDNJBJKFRLBTVHVPMWNUBSHUXGEMZSMEEVSKXBELUNQYPCICJNPGIV");
    msg.value = 219U;

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
    msg.setTimeStamp(0.695033136875);
    msg.setSource(12621U);
    msg.setSourceEntity(187U);
    msg.setDestination(22388U);
    msg.setDestinationEntity(19U);
    msg.id = 97U;
    msg.period = 1580738504U;
    msg.duty_cycle = 1792467888U;

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
    msg.setTimeStamp(0.177622994605);
    msg.setSource(39417U);
    msg.setSourceEntity(19U);
    msg.setDestination(28374U);
    msg.setDestinationEntity(177U);
    msg.id = 8U;
    msg.period = 4205219034U;
    msg.duty_cycle = 2185491228U;

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
    msg.setTimeStamp(0.957120462547);
    msg.setSource(37978U);
    msg.setSourceEntity(35U);
    msg.setDestination(13587U);
    msg.setDestinationEntity(202U);
    msg.id = 7U;
    msg.period = 2769733103U;
    msg.duty_cycle = 1272397550U;

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
    msg.setTimeStamp(0.673715875926);
    msg.setSource(6135U);
    msg.setSourceEntity(78U);
    msg.setDestination(13686U);
    msg.setDestinationEntity(250U);
    msg.id = 111U;
    msg.period = 1798960751U;
    msg.duty_cycle = 3350069212U;

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
    msg.setTimeStamp(0.0535437627213);
    msg.setSource(65425U);
    msg.setSourceEntity(99U);
    msg.setDestination(13689U);
    msg.setDestinationEntity(153U);
    msg.id = 117U;
    msg.period = 2012622479U;
    msg.duty_cycle = 1552440391U;

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
    msg.setTimeStamp(0.885308432306);
    msg.setSource(37989U);
    msg.setSourceEntity(39U);
    msg.setDestination(8453U);
    msg.setDestinationEntity(85U);
    msg.id = 149U;
    msg.period = 3902084582U;
    msg.duty_cycle = 588632585U;

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
    msg.setTimeStamp(0.419222088396);
    msg.setSource(37199U);
    msg.setSourceEntity(47U);
    msg.setDestination(52587U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.888845559561;
    msg.lon = 0.495810573577;
    msg.height = 0.112155291404;
    msg.x = 0.874893850805;
    msg.y = 0.876980118752;
    msg.z = 0.808721011013;
    msg.phi = 0.499506851846;
    msg.theta = 0.373225729952;
    msg.psi = 0.589092485275;
    msg.u = 0.0601510158906;
    msg.v = 0.484996774721;
    msg.w = 0.780935551851;
    msg.vx = 0.17905848744;
    msg.vy = 0.340604866946;
    msg.vz = 0.963670649803;
    msg.p = 0.746768514331;
    msg.q = 0.739344069462;
    msg.r = 0.630080618077;
    msg.depth = 0.294019500825;
    msg.alt = 0.131097281462;

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
    msg.setTimeStamp(0.452198802344);
    msg.setSource(65011U);
    msg.setSourceEntity(54U);
    msg.setDestination(7406U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.148251304024;
    msg.lon = 0.974254724345;
    msg.height = 0.528928407875;
    msg.x = 0.731492858991;
    msg.y = 0.547331592493;
    msg.z = 0.360918100778;
    msg.phi = 0.927594328789;
    msg.theta = 0.939483565086;
    msg.psi = 0.689933761148;
    msg.u = 0.289486171158;
    msg.v = 0.453111094976;
    msg.w = 0.199824159573;
    msg.vx = 0.518598656187;
    msg.vy = 0.714639134495;
    msg.vz = 0.00777114479985;
    msg.p = 0.971567315966;
    msg.q = 0.119389907248;
    msg.r = 0.957251377371;
    msg.depth = 0.048689460998;
    msg.alt = 0.717017895707;

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
    msg.setTimeStamp(0.0640121689651);
    msg.setSource(24626U);
    msg.setSourceEntity(172U);
    msg.setDestination(44992U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.295180057989;
    msg.lon = 0.601790352447;
    msg.height = 0.528353027601;
    msg.x = 0.991919393423;
    msg.y = 0.726384927451;
    msg.z = 0.0362664012515;
    msg.phi = 0.604470907316;
    msg.theta = 0.137811140128;
    msg.psi = 0.805791253451;
    msg.u = 0.81392535031;
    msg.v = 0.4581165476;
    msg.w = 0.750298685028;
    msg.vx = 0.59974006972;
    msg.vy = 0.468732921519;
    msg.vz = 0.759754613098;
    msg.p = 0.432407080966;
    msg.q = 0.821769399816;
    msg.r = 0.66158790417;
    msg.depth = 0.0789514288038;
    msg.alt = 0.836940238775;

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
    msg.setTimeStamp(0.59361527024);
    msg.setSource(60829U);
    msg.setSourceEntity(196U);
    msg.setDestination(15649U);
    msg.setDestinationEntity(217U);
    msg.x = 0.440410423778;
    msg.y = 0.283199595308;
    msg.z = 0.315481506521;

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
    msg.setTimeStamp(0.64122033992);
    msg.setSource(10068U);
    msg.setSourceEntity(47U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(87U);
    msg.x = 0.709669702408;
    msg.y = 0.13980045401;
    msg.z = 0.305409758855;

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
    msg.setTimeStamp(0.434570696441);
    msg.setSource(50891U);
    msg.setSourceEntity(115U);
    msg.setDestination(60411U);
    msg.setDestinationEntity(198U);
    msg.x = 0.674617109495;
    msg.y = 0.252431711395;
    msg.z = 0.417012607407;

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
    msg.setTimeStamp(0.524031956827);
    msg.setSource(58448U);
    msg.setSourceEntity(184U);
    msg.setDestination(58004U);
    msg.setDestinationEntity(3U);
    msg.value = 0.122203120649;

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
    msg.setTimeStamp(0.319431877359);
    msg.setSource(24818U);
    msg.setSourceEntity(177U);
    msg.setDestination(47920U);
    msg.setDestinationEntity(87U);
    msg.value = 0.906060274274;

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
    msg.setTimeStamp(0.911705602957);
    msg.setSource(3970U);
    msg.setSourceEntity(56U);
    msg.setDestination(32228U);
    msg.setDestinationEntity(69U);
    msg.value = 0.694690036528;

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
    msg.setTimeStamp(0.724534160832);
    msg.setSource(12455U);
    msg.setSourceEntity(179U);
    msg.setDestination(22922U);
    msg.setDestinationEntity(41U);
    msg.value = 0.0912515337077;

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
    msg.setTimeStamp(0.124850779676);
    msg.setSource(54323U);
    msg.setSourceEntity(73U);
    msg.setDestination(50040U);
    msg.setDestinationEntity(0U);
    msg.value = 0.433036623567;

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
    msg.setTimeStamp(0.410413848556);
    msg.setSource(55655U);
    msg.setSourceEntity(1U);
    msg.setDestination(26083U);
    msg.setDestinationEntity(253U);
    msg.value = 0.680070020784;

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
    msg.setTimeStamp(0.334591740027);
    msg.setSource(35493U);
    msg.setSourceEntity(209U);
    msg.setDestination(29059U);
    msg.setDestinationEntity(52U);
    msg.x = 0.224841150542;
    msg.y = 0.360048964645;
    msg.z = 0.0253628295655;
    msg.phi = 0.2023008621;
    msg.theta = 0.928630292174;
    msg.psi = 0.158076034498;
    msg.p = 0.035867303117;
    msg.q = 0.881652139657;
    msg.r = 0.657928070813;
    msg.u = 0.393773075594;
    msg.v = 0.823773350996;
    msg.w = 0.388387132956;
    msg.bias_psi = 0.606048929833;
    msg.bias_r = 0.709611794856;

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
    msg.setTimeStamp(0.215263616536);
    msg.setSource(30192U);
    msg.setSourceEntity(104U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(191U);
    msg.x = 0.810512090599;
    msg.y = 0.157948151898;
    msg.z = 0.342157090258;
    msg.phi = 0.653823989845;
    msg.theta = 0.850865226356;
    msg.psi = 0.748036178617;
    msg.p = 0.984097355954;
    msg.q = 0.26532539201;
    msg.r = 0.997360727889;
    msg.u = 0.568859016987;
    msg.v = 0.235370403783;
    msg.w = 0.323525792255;
    msg.bias_psi = 0.31536432506;
    msg.bias_r = 0.387271157514;

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
    msg.setTimeStamp(0.447536488832);
    msg.setSource(22157U);
    msg.setSourceEntity(197U);
    msg.setDestination(5021U);
    msg.setDestinationEntity(149U);
    msg.x = 0.837990794823;
    msg.y = 0.866464525031;
    msg.z = 0.777405500711;
    msg.phi = 0.515678482933;
    msg.theta = 0.788959407201;
    msg.psi = 0.971416290828;
    msg.p = 0.210952459484;
    msg.q = 0.706972800697;
    msg.r = 0.998854464981;
    msg.u = 0.720212095475;
    msg.v = 0.760446378903;
    msg.w = 0.981220947332;
    msg.bias_psi = 0.23292219165;
    msg.bias_r = 0.502896587067;

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
    msg.setTimeStamp(0.197763665578);
    msg.setSource(62226U);
    msg.setSourceEntity(152U);
    msg.setDestination(59021U);
    msg.setDestinationEntity(182U);
    msg.bias_psi = 0.71256667696;
    msg.bias_r = 0.744858608648;
    msg.cog = 0.300394590552;
    msg.cyaw = 0.893577900901;
    msg.lbl_rej_level = 0.247942746221;
    msg.gps_rej_level = 0.565602301358;
    msg.custom_x = 0.087422820678;
    msg.custom_y = 0.453159776811;
    msg.custom_z = 0.340687813148;

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
    msg.setTimeStamp(0.216615060523);
    msg.setSource(45946U);
    msg.setSourceEntity(35U);
    msg.setDestination(19601U);
    msg.setDestinationEntity(18U);
    msg.bias_psi = 0.981725388829;
    msg.bias_r = 0.503473879095;
    msg.cog = 0.313808865972;
    msg.cyaw = 0.612308624263;
    msg.lbl_rej_level = 0.190345779548;
    msg.gps_rej_level = 0.14399949624;
    msg.custom_x = 0.0847049769654;
    msg.custom_y = 0.727496859168;
    msg.custom_z = 0.64164417071;

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
    msg.setTimeStamp(0.979741612408);
    msg.setSource(11474U);
    msg.setSourceEntity(132U);
    msg.setDestination(11880U);
    msg.setDestinationEntity(165U);
    msg.bias_psi = 0.864170708506;
    msg.bias_r = 0.55849809688;
    msg.cog = 0.924867348462;
    msg.cyaw = 0.726121887634;
    msg.lbl_rej_level = 0.65291350695;
    msg.gps_rej_level = 0.353165499582;
    msg.custom_x = 0.747735239807;
    msg.custom_y = 0.793845664693;
    msg.custom_z = 0.861436504402;

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
    msg.setTimeStamp(0.529740354963);
    msg.setSource(22835U);
    msg.setSourceEntity(197U);
    msg.setDestination(34494U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.10075752319;
    msg.reason = 108U;

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
    msg.setTimeStamp(0.356670825673);
    msg.setSource(61865U);
    msg.setSourceEntity(96U);
    msg.setDestination(7423U);
    msg.setDestinationEntity(55U);
    msg.utc_time = 0.852992720697;
    msg.reason = 239U;

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
    msg.setTimeStamp(0.678142620308);
    msg.setSource(14945U);
    msg.setSourceEntity(0U);
    msg.setDestination(61742U);
    msg.setDestinationEntity(167U);
    msg.utc_time = 0.726668697257;
    msg.reason = 58U;

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
    msg.setTimeStamp(0.98567199478);
    msg.setSource(23936U);
    msg.setSourceEntity(93U);
    msg.setDestination(6994U);
    msg.setDestinationEntity(233U);
    msg.id = 214U;
    msg.range = 0.0400071926168;
    msg.acceptance = 9U;

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
    msg.setTimeStamp(0.151763743225);
    msg.setSource(33503U);
    msg.setSourceEntity(176U);
    msg.setDestination(47300U);
    msg.setDestinationEntity(98U);
    msg.id = 238U;
    msg.range = 0.0790125710743;
    msg.acceptance = 179U;

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
    msg.setTimeStamp(0.741480860436);
    msg.setSource(54024U);
    msg.setSourceEntity(137U);
    msg.setDestination(46706U);
    msg.setDestinationEntity(58U);
    msg.id = 241U;
    msg.range = 0.23374491546;
    msg.acceptance = 228U;

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
    msg.setTimeStamp(0.497436267193);
    msg.setSource(33642U);
    msg.setSourceEntity(207U);
    msg.setDestination(35726U);
    msg.setDestinationEntity(46U);
    msg.type = 29U;
    msg.reason = 193U;
    msg.value = 0.0574378038505;
    msg.timestep = 0.495972830307;

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
    msg.setTimeStamp(0.338316613407);
    msg.setSource(30915U);
    msg.setSourceEntity(87U);
    msg.setDestination(3710U);
    msg.setDestinationEntity(60U);
    msg.type = 181U;
    msg.reason = 134U;
    msg.value = 0.597508831393;
    msg.timestep = 0.0835466872979;

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
    msg.setTimeStamp(0.188943756765);
    msg.setSource(184U);
    msg.setSourceEntity(228U);
    msg.setDestination(18988U);
    msg.setDestinationEntity(135U);
    msg.type = 201U;
    msg.reason = 196U;
    msg.value = 0.374642991657;
    msg.timestep = 0.00940124514036;

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
    msg.setTimeStamp(0.857711282253);
    msg.setSource(35044U);
    msg.setSourceEntity(254U);
    msg.setDestination(1771U);
    msg.setDestinationEntity(121U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VMNYENPPYDSJFHUDIFWPJJTMRWDWFNHUWHQTZMJFBQSTLFXPSQQXDGCWSFHCYLZKJIFYWAYBVEJWTVDMJRFADGVTBUGER");
    tmp_msg_0.lat = 0.635905117439;
    tmp_msg_0.lon = 0.699444725513;
    tmp_msg_0.depth = 0.271972879556;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 145U;
    tmp_msg_0.transponder_delay = 176U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.436271643398;
    msg.y = 0.764217746539;
    msg.var_x = 0.189799172278;
    msg.var_y = 0.39524083858;
    msg.distance = 0.897041013954;

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
    msg.setTimeStamp(0.139299630678);
    msg.setSource(49205U);
    msg.setSourceEntity(194U);
    msg.setDestination(64646U);
    msg.setDestinationEntity(84U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QKFOZNPBVHQUWGPQLJMFEJMQHLGPKFIDBTNZPNSOXUCTSBBKVDFNXZVZQMIPTWLKFWHNREEAVLNOJVNGGXNRQOYWFBDMYXGYJRWUUAZUBZKUWDTYICOJVTSTSS");
    tmp_msg_0.lat = 0.140005739847;
    tmp_msg_0.lon = 0.236423367105;
    tmp_msg_0.depth = 0.831422055495;
    tmp_msg_0.query_channel = 162U;
    tmp_msg_0.reply_channel = 82U;
    tmp_msg_0.transponder_delay = 33U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.87612507647;
    msg.y = 0.626588205212;
    msg.var_x = 0.991297053638;
    msg.var_y = 0.686252267509;
    msg.distance = 0.339987648266;

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
    msg.setTimeStamp(0.374460720578);
    msg.setSource(15493U);
    msg.setSourceEntity(116U);
    msg.setDestination(39793U);
    msg.setDestinationEntity(200U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WBATAIWOYKJLXOHNNTDWRMXFNGSCTFGNFDCKJWMBROZZQXOQMDWFDBSZASENMGQBCGGHMWISHCAROTKEOPQOVQCNIBPFGWEYYLAMADXYQHBKXUYHTILRXCAJFACDJGDEPUXMBILXKWNLHKAPEUFRV");
    tmp_msg_0.lat = 0.701033789257;
    tmp_msg_0.lon = 0.272684289284;
    tmp_msg_0.depth = 0.806852346846;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 199U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.682186186117;
    msg.y = 0.510095509334;
    msg.var_x = 0.317023301961;
    msg.var_y = 0.127086185567;
    msg.distance = 0.875987344959;

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
    msg.setTimeStamp(0.623958219297);
    msg.setSource(3949U);
    msg.setSourceEntity(140U);
    msg.setDestination(18349U);
    msg.setDestinationEntity(227U);
    msg.state = 79U;

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
    msg.setTimeStamp(0.603224430542);
    msg.setSource(41754U);
    msg.setSourceEntity(156U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(225U);
    msg.state = 123U;

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
    msg.setTimeStamp(0.759822169491);
    msg.setSource(31372U);
    msg.setSourceEntity(202U);
    msg.setDestination(5427U);
    msg.setDestinationEntity(57U);
    msg.state = 178U;

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
    msg.setTimeStamp(0.205504273484);
    msg.setSource(22791U);
    msg.setSourceEntity(57U);
    msg.setDestination(48413U);
    msg.setDestinationEntity(99U);
    msg.x = 0.132882821754;
    msg.y = 0.564972819817;
    msg.z = 0.407918507769;

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
    msg.setTimeStamp(0.266236222891);
    msg.setSource(9530U);
    msg.setSourceEntity(129U);
    msg.setDestination(11116U);
    msg.setDestinationEntity(214U);
    msg.x = 0.900644247353;
    msg.y = 0.144595923624;
    msg.z = 0.135421653138;

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
    msg.setTimeStamp(0.0956193352105);
    msg.setSource(56389U);
    msg.setSourceEntity(158U);
    msg.setDestination(25235U);
    msg.setDestinationEntity(226U);
    msg.x = 0.634195921252;
    msg.y = 0.930195003151;
    msg.z = 0.629443918281;

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
    msg.setTimeStamp(0.139321043113);
    msg.setSource(27821U);
    msg.setSourceEntity(235U);
    msg.setDestination(381U);
    msg.setDestinationEntity(29U);
    msg.va = 0.464776528334;
    msg.aoa = 0.580742822781;
    msg.ssa = 0.864973449477;

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
    msg.setTimeStamp(0.0908915434832);
    msg.setSource(30822U);
    msg.setSourceEntity(211U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(62U);
    msg.va = 0.13083816711;
    msg.aoa = 0.854314179177;
    msg.ssa = 0.291148857653;

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
    msg.setTimeStamp(0.646466057787);
    msg.setSource(53500U);
    msg.setSourceEntity(186U);
    msg.setDestination(41320U);
    msg.setDestinationEntity(158U);
    msg.va = 0.0456052875518;
    msg.aoa = 0.419362399467;
    msg.ssa = 0.843429505065;

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
    msg.setTimeStamp(0.221095360985);
    msg.setSource(1991U);
    msg.setSourceEntity(78U);
    msg.setDestination(14272U);
    msg.setDestinationEntity(138U);
    msg.value = 0.137198245546;

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
    msg.setTimeStamp(0.79246838743);
    msg.setSource(63119U);
    msg.setSourceEntity(199U);
    msg.setDestination(65287U);
    msg.setDestinationEntity(140U);
    msg.value = 0.124130859053;

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
    msg.setTimeStamp(0.663205930182);
    msg.setSource(54745U);
    msg.setSourceEntity(72U);
    msg.setDestination(44381U);
    msg.setDestinationEntity(100U);
    msg.value = 0.946549071082;

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
    msg.setTimeStamp(0.295996841944);
    msg.setSource(950U);
    msg.setSourceEntity(106U);
    msg.setDestination(28662U);
    msg.setDestinationEntity(56U);
    msg.value = 0.98303650052;
    msg.z_units = 54U;

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
    msg.setTimeStamp(0.376542581977);
    msg.setSource(24493U);
    msg.setSourceEntity(223U);
    msg.setDestination(21435U);
    msg.setDestinationEntity(127U);
    msg.value = 0.319626835695;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.399356950274);
    msg.setSource(49562U);
    msg.setSourceEntity(3U);
    msg.setDestination(14536U);
    msg.setDestinationEntity(235U);
    msg.value = 0.088286094036;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.027986546702);
    msg.setSource(8326U);
    msg.setSourceEntity(210U);
    msg.setDestination(17206U);
    msg.setDestinationEntity(207U);
    msg.value = 0.495330653121;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.211619178768);
    msg.setSource(32284U);
    msg.setSourceEntity(230U);
    msg.setDestination(56612U);
    msg.setDestinationEntity(60U);
    msg.value = 0.223160159775;
    msg.speed_units = 142U;

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
    msg.setTimeStamp(0.896407719437);
    msg.setSource(58947U);
    msg.setSourceEntity(110U);
    msg.setDestination(9550U);
    msg.setDestinationEntity(113U);
    msg.value = 0.731654229219;
    msg.speed_units = 168U;

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
    msg.setTimeStamp(0.217032543507);
    msg.setSource(49595U);
    msg.setSourceEntity(114U);
    msg.setDestination(34992U);
    msg.setDestinationEntity(195U);
    msg.value = 0.486169424028;

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
    msg.setTimeStamp(0.639487833332);
    msg.setSource(47342U);
    msg.setSourceEntity(185U);
    msg.setDestination(12668U);
    msg.setDestinationEntity(70U);
    msg.value = 0.62990328553;

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
    msg.setTimeStamp(0.309001128783);
    msg.setSource(11328U);
    msg.setSourceEntity(198U);
    msg.setDestination(14351U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0823622896715;

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
    msg.setTimeStamp(0.0583863026168);
    msg.setSource(44555U);
    msg.setSourceEntity(200U);
    msg.setDestination(6207U);
    msg.setDestinationEntity(101U);
    msg.value = 0.859503099214;

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
    msg.setTimeStamp(0.148366995799);
    msg.setSource(61555U);
    msg.setSourceEntity(17U);
    msg.setDestination(31251U);
    msg.setDestinationEntity(116U);
    msg.value = 0.252126120997;

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
    msg.setTimeStamp(0.280373392587);
    msg.setSource(51088U);
    msg.setSourceEntity(233U);
    msg.setDestination(11862U);
    msg.setDestinationEntity(134U);
    msg.value = 0.985653589993;

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
    msg.setTimeStamp(0.381036694518);
    msg.setSource(4350U);
    msg.setSourceEntity(30U);
    msg.setDestination(55216U);
    msg.setDestinationEntity(92U);
    msg.value = 0.951791418095;

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
    msg.setTimeStamp(0.0936341111371);
    msg.setSource(64981U);
    msg.setSourceEntity(131U);
    msg.setDestination(6691U);
    msg.setDestinationEntity(118U);
    msg.value = 0.31946471373;

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
    msg.setTimeStamp(0.129696998607);
    msg.setSource(6935U);
    msg.setSourceEntity(88U);
    msg.setDestination(53971U);
    msg.setDestinationEntity(44U);
    msg.value = 0.270800845852;

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
    msg.setTimeStamp(0.971123515956);
    msg.setSource(1495U);
    msg.setSourceEntity(209U);
    msg.setDestination(27316U);
    msg.setDestinationEntity(129U);
    msg.path_ref = 3137590418U;
    msg.start_lat = 0.829317639703;
    msg.start_lon = 0.818339232444;
    msg.start_z = 0.978334525301;
    msg.start_z_units = 87U;
    msg.end_lat = 0.451587998181;
    msg.end_lon = 0.224664376213;
    msg.end_z = 0.252375654101;
    msg.end_z_units = 210U;
    msg.speed = 0.0650320911365;
    msg.speed_units = 39U;
    msg.lradius = 0.490844755614;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.655577365972);
    msg.setSource(29261U);
    msg.setSourceEntity(75U);
    msg.setDestination(47347U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 3103829042U;
    msg.start_lat = 0.680130328462;
    msg.start_lon = 0.495656849088;
    msg.start_z = 0.704574942335;
    msg.start_z_units = 215U;
    msg.end_lat = 0.202184593401;
    msg.end_lon = 0.798357701414;
    msg.end_z = 0.0867407179635;
    msg.end_z_units = 206U;
    msg.speed = 0.982408101638;
    msg.speed_units = 42U;
    msg.lradius = 0.957054813619;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.570656991421);
    msg.setSource(11475U);
    msg.setSourceEntity(35U);
    msg.setDestination(19338U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 3379272262U;
    msg.start_lat = 0.0346637465795;
    msg.start_lon = 0.0495355409588;
    msg.start_z = 0.872554129538;
    msg.start_z_units = 4U;
    msg.end_lat = 0.631218660755;
    msg.end_lon = 0.402904854002;
    msg.end_z = 0.785996129417;
    msg.end_z_units = 220U;
    msg.speed = 0.387642758292;
    msg.speed_units = 70U;
    msg.lradius = 0.546091995708;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.0489474994889);
    msg.setSource(26606U);
    msg.setSourceEntity(120U);
    msg.setDestination(11367U);
    msg.setDestinationEntity(22U);
    msg.x = 0.477151154627;
    msg.y = 0.0264786308338;
    msg.z = 0.788744576301;
    msg.k = 0.208276265072;
    msg.m = 0.0520316686403;
    msg.n = 0.242238285464;
    msg.flags = 79U;

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
    msg.setTimeStamp(0.58910793358);
    msg.setSource(10098U);
    msg.setSourceEntity(140U);
    msg.setDestination(51360U);
    msg.setDestinationEntity(147U);
    msg.x = 0.227246626205;
    msg.y = 0.949377763002;
    msg.z = 0.631103923563;
    msg.k = 0.94233952459;
    msg.m = 0.228004708831;
    msg.n = 0.0792133724219;
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
    msg.setTimeStamp(0.284074393617);
    msg.setSource(46572U);
    msg.setSourceEntity(35U);
    msg.setDestination(64175U);
    msg.setDestinationEntity(191U);
    msg.x = 0.0800849219993;
    msg.y = 0.690596276792;
    msg.z = 0.631089112115;
    msg.k = 0.226645975481;
    msg.m = 0.708090486319;
    msg.n = 0.13744975598;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.474908234272);
    msg.setSource(53984U);
    msg.setSourceEntity(203U);
    msg.setDestination(24287U);
    msg.setDestinationEntity(202U);
    msg.value = 0.312800856893;

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
    msg.setTimeStamp(0.517983295776);
    msg.setSource(13966U);
    msg.setSourceEntity(100U);
    msg.setDestination(32170U);
    msg.setDestinationEntity(230U);
    msg.value = 0.423142960138;

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
    msg.setTimeStamp(0.965071262432);
    msg.setSource(17048U);
    msg.setSourceEntity(64U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(41U);
    msg.value = 0.430980480643;

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
    msg.setTimeStamp(0.784745350759);
    msg.setSource(49547U);
    msg.setSourceEntity(236U);
    msg.setDestination(42643U);
    msg.setDestinationEntity(73U);
    msg.u = 0.718452084525;
    msg.v = 0.838942787718;
    msg.w = 0.148901198696;
    msg.p = 0.916430004578;
    msg.q = 0.198597620337;
    msg.r = 0.740195391719;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.373108832212);
    msg.setSource(18074U);
    msg.setSourceEntity(65U);
    msg.setDestination(29956U);
    msg.setDestinationEntity(117U);
    msg.u = 0.648493408455;
    msg.v = 0.332260915607;
    msg.w = 0.231950922827;
    msg.p = 0.697431543351;
    msg.q = 0.13208066352;
    msg.r = 0.144190883602;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.00240018513102);
    msg.setSource(40311U);
    msg.setSourceEntity(32U);
    msg.setDestination(19769U);
    msg.setDestinationEntity(22U);
    msg.u = 0.441902271402;
    msg.v = 0.221986474128;
    msg.w = 0.770158591431;
    msg.p = 0.929983987449;
    msg.q = 0.728903344768;
    msg.r = 0.212362929501;
    msg.flags = 163U;

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
    msg.setTimeStamp(0.583607315883);
    msg.setSource(53502U);
    msg.setSourceEntity(89U);
    msg.setDestination(17220U);
    msg.setDestinationEntity(222U);
    msg.path_ref = 2352477375U;
    msg.start_lat = 0.100423104059;
    msg.start_lon = 0.44015254412;
    msg.start_z = 0.15021399175;
    msg.start_z_units = 64U;
    msg.end_lat = 0.396449688481;
    msg.end_lon = 0.775455414676;
    msg.end_z = 0.943128662977;
    msg.end_z_units = 50U;
    msg.lradius = 0.0407064126439;
    msg.flags = 195U;
    msg.x = 0.442170645622;
    msg.y = 0.734853439927;
    msg.z = 0.547162545555;
    msg.vx = 0.0863620803497;
    msg.vy = 0.865243279727;
    msg.vz = 0.390799868235;
    msg.course_error = 0.214126727759;
    msg.eta = 44278U;

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
    msg.setTimeStamp(0.661948332418);
    msg.setSource(16923U);
    msg.setSourceEntity(7U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 3357931829U;
    msg.start_lat = 0.258108162308;
    msg.start_lon = 0.025688383073;
    msg.start_z = 0.548833629714;
    msg.start_z_units = 249U;
    msg.end_lat = 0.081344667183;
    msg.end_lon = 0.757245566398;
    msg.end_z = 0.424708883552;
    msg.end_z_units = 131U;
    msg.lradius = 0.320529815093;
    msg.flags = 99U;
    msg.x = 0.779460272808;
    msg.y = 0.176291266979;
    msg.z = 0.759519086557;
    msg.vx = 0.929249730892;
    msg.vy = 0.333455425418;
    msg.vz = 0.812237692602;
    msg.course_error = 0.673270848053;
    msg.eta = 53911U;

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
    msg.setTimeStamp(0.199389063646);
    msg.setSource(23630U);
    msg.setSourceEntity(20U);
    msg.setDestination(36873U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 1176494041U;
    msg.start_lat = 0.90912309026;
    msg.start_lon = 0.543414405875;
    msg.start_z = 0.247729988418;
    msg.start_z_units = 180U;
    msg.end_lat = 0.118187936772;
    msg.end_lon = 0.161665333748;
    msg.end_z = 0.00849590422597;
    msg.end_z_units = 216U;
    msg.lradius = 0.0544722133231;
    msg.flags = 110U;
    msg.x = 0.00566219690785;
    msg.y = 0.458596571978;
    msg.z = 0.0925799684336;
    msg.vx = 0.717545523917;
    msg.vy = 0.321402933329;
    msg.vz = 0.639118126811;
    msg.course_error = 0.560464228722;
    msg.eta = 54436U;

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
    msg.setTimeStamp(0.390058477949);
    msg.setSource(28927U);
    msg.setSourceEntity(146U);
    msg.setDestination(1459U);
    msg.setDestinationEntity(56U);
    msg.k = 0.219389200582;
    msg.m = 0.426974068283;
    msg.n = 0.330570807119;

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
    msg.setTimeStamp(0.77484863615);
    msg.setSource(28819U);
    msg.setSourceEntity(42U);
    msg.setDestination(36305U);
    msg.setDestinationEntity(71U);
    msg.k = 0.573951776962;
    msg.m = 0.855725358211;
    msg.n = 0.457983569608;

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
    msg.setTimeStamp(0.613515091348);
    msg.setSource(48481U);
    msg.setSourceEntity(95U);
    msg.setDestination(23490U);
    msg.setDestinationEntity(136U);
    msg.k = 0.41995748494;
    msg.m = 0.888471893946;
    msg.n = 0.918927730244;

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
    msg.setTimeStamp(0.276284047377);
    msg.setSource(46320U);
    msg.setSourceEntity(97U);
    msg.setDestination(30914U);
    msg.setDestinationEntity(136U);
    msg.p = 0.888322240938;
    msg.i = 0.610872427453;
    msg.d = 0.882898355868;
    msg.a = 0.740464986316;

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
    msg.setTimeStamp(0.185383015204);
    msg.setSource(25711U);
    msg.setSourceEntity(246U);
    msg.setDestination(5098U);
    msg.setDestinationEntity(174U);
    msg.p = 0.975476817011;
    msg.i = 0.0917982219235;
    msg.d = 0.0625822404351;
    msg.a = 0.636866925843;

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
    msg.setTimeStamp(0.572276750987);
    msg.setSource(48028U);
    msg.setSourceEntity(137U);
    msg.setDestination(6087U);
    msg.setDestinationEntity(68U);
    msg.p = 0.136051977365;
    msg.i = 0.87595622776;
    msg.d = 0.429981064377;
    msg.a = 0.40012934823;

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
    msg.setTimeStamp(0.907695962801);
    msg.setSource(47326U);
    msg.setSourceEntity(46U);
    msg.setDestination(28435U);
    msg.setDestinationEntity(57U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.921779484782);
    msg.setSource(43461U);
    msg.setSourceEntity(224U);
    msg.setDestination(14606U);
    msg.setDestinationEntity(254U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.434664847349);
    msg.setSource(12545U);
    msg.setSourceEntity(97U);
    msg.setDestination(38624U);
    msg.setDestinationEntity(40U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.911582390917);
    msg.setSource(62451U);
    msg.setSourceEntity(138U);
    msg.setDestination(17577U);
    msg.setDestinationEntity(185U);
    msg.x = 0.75376673989;
    msg.y = 0.883541805215;
    msg.z = 0.270529245676;
    msg.vx = 0.635719546589;
    msg.vy = 0.949430944929;
    msg.vz = 0.628675560554;
    msg.ax = 0.976833052525;
    msg.ay = 0.390431951847;
    msg.az = 0.385218741291;
    msg.flags = 42795U;

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
    msg.setTimeStamp(0.456643692136);
    msg.setSource(55729U);
    msg.setSourceEntity(179U);
    msg.setDestination(35445U);
    msg.setDestinationEntity(179U);
    msg.x = 0.544253572191;
    msg.y = 0.339808790332;
    msg.z = 0.372486513525;
    msg.vx = 0.199658764039;
    msg.vy = 0.059285672132;
    msg.vz = 0.571854888262;
    msg.ax = 0.165241247261;
    msg.ay = 0.467677377657;
    msg.az = 0.690420617587;
    msg.flags = 14706U;

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
    msg.setTimeStamp(0.527168365163);
    msg.setSource(60170U);
    msg.setSourceEntity(180U);
    msg.setDestination(5388U);
    msg.setDestinationEntity(185U);
    msg.x = 0.340544465912;
    msg.y = 0.0548213692845;
    msg.z = 0.794926015854;
    msg.vx = 0.799555004485;
    msg.vy = 0.150445056639;
    msg.vz = 0.41418612626;
    msg.ax = 0.240604217465;
    msg.ay = 0.510137104815;
    msg.az = 0.575779641626;
    msg.flags = 62544U;

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
    msg.setTimeStamp(0.0567576531102);
    msg.setSource(36525U);
    msg.setSourceEntity(238U);
    msg.setDestination(22868U);
    msg.setDestinationEntity(132U);
    msg.value = 0.401034316708;

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
    msg.setTimeStamp(0.311498145376);
    msg.setSource(24155U);
    msg.setSourceEntity(49U);
    msg.setDestination(13707U);
    msg.setDestinationEntity(123U);
    msg.value = 0.701876217819;

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
    msg.setTimeStamp(0.156813364123);
    msg.setSource(50788U);
    msg.setSourceEntity(161U);
    msg.setDestination(579U);
    msg.setDestinationEntity(251U);
    msg.value = 0.519111119354;

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
    msg.setTimeStamp(0.292256161444);
    msg.setSource(207U);
    msg.setSourceEntity(185U);
    msg.setDestination(39501U);
    msg.setDestinationEntity(31U);
    msg.timeout = 19091U;
    msg.lat = 0.931763494029;
    msg.lon = 0.451331386322;
    msg.z = 0.557450032116;
    msg.z_units = 216U;
    msg.speed = 0.819157132743;
    msg.speed_units = 218U;
    msg.roll = 0.194259128091;
    msg.pitch = 0.699300606628;
    msg.yaw = 0.783912513838;
    msg.custom.assign("AIHRNGNMNLISERCELJNIIDJPUWLKEFVTGDCSIBCCFV");

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
    msg.setTimeStamp(0.455970956478);
    msg.setSource(40211U);
    msg.setSourceEntity(66U);
    msg.setDestination(19745U);
    msg.setDestinationEntity(88U);
    msg.timeout = 17305U;
    msg.lat = 0.548126256006;
    msg.lon = 0.220616426492;
    msg.z = 0.0368319878921;
    msg.z_units = 170U;
    msg.speed = 0.642011864351;
    msg.speed_units = 91U;
    msg.roll = 0.320823846284;
    msg.pitch = 0.388650859731;
    msg.yaw = 0.0629065645988;
    msg.custom.assign("UMWLCCWMYXMJEBOWJYIATRHAEUZPQTINIKHPALKIDCEUDGXVXBCJQMNWDTXNJZDXXPHNYVBCHPOXVTCUPOFPXQQNYGDOYBNUMDJZWMBWBFGLZXDVYWSVCZVRQLKGCJYPLQCRRQRFCBFEFWUFGPRIAYLLOEHHZSWORTNEHOEAETBNESLTFAIUIGWPOKARRTZOSQDSMSNUADLJHSYHBNAMSYFBTUVKKEZARVFQKSISHFMIJGZUJKPM");

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
    msg.setTimeStamp(0.44587498443);
    msg.setSource(21308U);
    msg.setSourceEntity(153U);
    msg.setDestination(30080U);
    msg.setDestinationEntity(111U);
    msg.timeout = 55215U;
    msg.lat = 0.964807640273;
    msg.lon = 0.95428374828;
    msg.z = 0.448139612848;
    msg.z_units = 111U;
    msg.speed = 0.646707190963;
    msg.speed_units = 97U;
    msg.roll = 0.886401813694;
    msg.pitch = 0.923656524225;
    msg.yaw = 0.651182148548;
    msg.custom.assign("HTBJTAFPRLIQXKKWWFDFRPQQNWZNGJNEMJZPRUQVAPSTYILPX");

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
    msg.setTimeStamp(0.235474646635);
    msg.setSource(13479U);
    msg.setSourceEntity(113U);
    msg.setDestination(35894U);
    msg.setDestinationEntity(241U);
    msg.timeout = 15451U;
    msg.lat = 0.244871697007;
    msg.lon = 0.196999055031;
    msg.z = 0.74928844547;
    msg.z_units = 43U;
    msg.speed = 0.672511596121;
    msg.speed_units = 87U;
    msg.duration = 35705U;
    msg.radius = 0.0814888104304;
    msg.flags = 20U;
    msg.custom.assign("QVBOGLAPISAVCBLMADTLAAXBSVDTWUXIKWGUSVERFOLNPXCQWYCGMPSQPSQTDGTCZQNJQKIYQWWSIAIDCYDLFRZDUFFGEWPOHRTVEHUDMKRYOPUUZMRJNRJ");

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
    msg.setTimeStamp(0.0941788094393);
    msg.setSource(31158U);
    msg.setSourceEntity(254U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(124U);
    msg.timeout = 63089U;
    msg.lat = 0.253741720427;
    msg.lon = 0.81861617801;
    msg.z = 0.514111250443;
    msg.z_units = 146U;
    msg.speed = 0.82931321011;
    msg.speed_units = 64U;
    msg.duration = 8019U;
    msg.radius = 0.568228324096;
    msg.flags = 149U;
    msg.custom.assign("BLWNGNKWBUICUWYPOFBTTOSSPAOVSAPRJSLQCMDCTVJDPDYHJUNOXQKOBAVQTQHGMYWJITQGUTLEOCRZITPKZMURXEVZUUDJYXNH");

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
    msg.setTimeStamp(0.714902831888);
    msg.setSource(36082U);
    msg.setSourceEntity(213U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(84U);
    msg.timeout = 42275U;
    msg.lat = 0.690875262576;
    msg.lon = 0.37471692306;
    msg.z = 0.870721496808;
    msg.z_units = 186U;
    msg.speed = 0.0955032438027;
    msg.speed_units = 200U;
    msg.duration = 19361U;
    msg.radius = 0.800648972952;
    msg.flags = 240U;
    msg.custom.assign("UPFGGRSKRREDODWYTLVYWBAMIJGFMYGGEHPYYCUSUYCTFWTNWIWYKTVRCQDXJOCSLRPWUOJSXSJZDZIAXRPXCBNLPMCAFBFQIXFZKQOICVNRGGASOMXJHOSMAFWGDQLZDFUENNMNCDXJIZZHNUVSQMSVBOWXAILBPLEOEQVXZAJELPEACNXWFRYHQGJISCVJHLHTPBBKDQDZRRFQJUEUVTOZZHUYOAGEKKPIMNQKTDHVLN");

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
    msg.setTimeStamp(0.184683008838);
    msg.setSource(50336U);
    msg.setSourceEntity(47U);
    msg.setDestination(11794U);
    msg.setDestinationEntity(114U);
    msg.custom.assign("BTSNNNAZIH");

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
    msg.setTimeStamp(0.473348772969);
    msg.setSource(14072U);
    msg.setSourceEntity(86U);
    msg.setDestination(64730U);
    msg.setDestinationEntity(112U);
    msg.custom.assign("BYKCLWGJVXDICOCZRVCZSKOQQPBYUGGGPCYNTVQABCBQQGLUHAQNBZKUTWDLEVJZEZYIWNEFXIKVPPJGOPULBKFDLAOXURIFSOMKJKUJTUNPFDGHFHNFVYTAKMGBNYCXMEYSRNXQDRDIRPZWMHJRRVWZIUBEHQXBOMSWTIHOLBVCEHNGRIYHJPDFWHMQKMJELTXAMSA");

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
    msg.setTimeStamp(0.928011645759);
    msg.setSource(50595U);
    msg.setSourceEntity(146U);
    msg.setDestination(17535U);
    msg.setDestinationEntity(22U);
    msg.custom.assign("DYJWSQMYPAQNJCPFIGPCCLFUUSRAKVFUAAOOZRHWCUQAAMSCROFLFULOZHBR");

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
    msg.setTimeStamp(0.04652531382);
    msg.setSource(60944U);
    msg.setSourceEntity(46U);
    msg.setDestination(51182U);
    msg.setDestinationEntity(115U);
    msg.timeout = 41339U;
    msg.lat = 0.204476065044;
    msg.lon = 0.943258109393;
    msg.z = 0.431110065314;
    msg.z_units = 226U;
    msg.duration = 52605U;
    msg.speed = 0.665602912769;
    msg.speed_units = 191U;
    msg.type = 26U;
    msg.radius = 0.919072049523;
    msg.length = 0.75907960463;
    msg.bearing = 0.15785711923;
    msg.direction = 119U;
    msg.custom.assign("GNVQTFFFIBTVLCOWOWWUVNTFMUSYXOXOQVGMIDQHAXEEIUOSMFIXHMUSCCONDCSKZNRJMOBBHXYAWKBVCAVYERLYLLMHZAGWDVDZPWDTSDQTH");

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
    msg.setTimeStamp(0.0857332092992);
    msg.setSource(13637U);
    msg.setSourceEntity(18U);
    msg.setDestination(22791U);
    msg.setDestinationEntity(233U);
    msg.timeout = 793U;
    msg.lat = 0.963304143614;
    msg.lon = 0.0260045573116;
    msg.z = 0.146442540715;
    msg.z_units = 170U;
    msg.duration = 32444U;
    msg.speed = 0.83081324971;
    msg.speed_units = 213U;
    msg.type = 3U;
    msg.radius = 0.235314662422;
    msg.length = 0.207783745189;
    msg.bearing = 0.0233845762685;
    msg.direction = 139U;
    msg.custom.assign("LIHODJTIZNWZXQBFTMCRCDULQSILXEXYYFSWSQJSRLZNYBXEGTAMVYQKUUXOWPWBITVJAGGSZCNTESJGACDYKDMDUXZHWOKKDMOOHFPFYCBNRBJLAYOHTEXAPTHIJYQKFZGAGEFACICIXLNAJUKMMLPKUZQEEYIRMDSGVVGGVCOSRZQHUEPFFHPENMRUPURHTYGOLRBVRLIKURVVWVKWPFNOPDOLTWCQJSDFQMIBZBMJEPKHD");

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
    msg.setTimeStamp(0.785483070898);
    msg.setSource(17964U);
    msg.setSourceEntity(4U);
    msg.setDestination(36472U);
    msg.setDestinationEntity(75U);
    msg.timeout = 24094U;
    msg.lat = 0.271973599559;
    msg.lon = 0.717617454455;
    msg.z = 0.104472843001;
    msg.z_units = 211U;
    msg.duration = 45026U;
    msg.speed = 0.308865636136;
    msg.speed_units = 164U;
    msg.type = 20U;
    msg.radius = 0.446465204419;
    msg.length = 0.184440087582;
    msg.bearing = 0.100312412888;
    msg.direction = 225U;
    msg.custom.assign("JMNYHJVXCNIIXTSYREADQGYMSWIJUDDQCGFMKNZWSTCJZIZVBAUAOAHBRTFEFYNPXLFEGVPJRZHPLXXQWPLRYSTCFEMODBKZNIBIZKUCALQZNAUWCRTJLVLSVDKXUGQUHVHMLPPGLFVESHCMBRJOYKUWWRGMOARHHTW");

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
    msg.setTimeStamp(0.778944235126);
    msg.setSource(48187U);
    msg.setSourceEntity(132U);
    msg.setDestination(39800U);
    msg.setDestinationEntity(58U);
    msg.duration = 15862U;
    msg.custom.assign("QSETTSIYLFMCSNFJZGHWVQSXWDUJNCBAGVGFVZPLMJSMTLDJRZOJBRWLBOYCAXHCBOBKMDRKNVGOVRYGEZJDHFTCNSXFEONCIUMEPNHJFQJPKPRBABAPXLGTHDGHPJGDYLMQYEXRLABTIYPTZVQUPHWQXWQZVLKZTSMUPMANKYIWULQMSBODVIDEWECKGR");

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
    msg.setTimeStamp(0.0912156897241);
    msg.setSource(38048U);
    msg.setSourceEntity(170U);
    msg.setDestination(46180U);
    msg.setDestinationEntity(231U);
    msg.duration = 59622U;
    msg.custom.assign("RAHWOQGIUCBOEGPZHLBLYVVCXQHVNCCUKPQPNCPXMOKPCOCCMAGSJOKMKPJFIZWHQNJKYQSDASKVEYRFQXEIDUSMZRUVDFSVYAUHNNXTRENBNXDZHTTDJAWBFMZBITEPMOWWLGDHTLFYGGMVZLXZCJBZSFNZDKBRYDAUCKPYQQWZFXAJIJ");

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
    msg.setTimeStamp(0.0428656051498);
    msg.setSource(37330U);
    msg.setSourceEntity(29U);
    msg.setDestination(3872U);
    msg.setDestinationEntity(221U);
    msg.duration = 41581U;
    msg.custom.assign("FBZGUXJVNAXEDXPGGFULIKLTEMHMUXJKAWNBCSNBZOKFKWLVSUPMUZWJIINUYJPLQMHODGAEDAVTQDJKHRJBKEGYWDSJHGMNLSIOQBCAOWWFRVKPVLICOIESJYYETNCHAJIXVPSQYCRACFBTSZTVWYRMIFTLGEUAVXWRJIOTZQOMBHFQKZDQFDRRUDRSXPWNQABHLUYPKXANMQOLWZCHTFTHXYZMGSBNVD");

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
    msg.setTimeStamp(0.0316221222498);
    msg.setSource(31429U);
    msg.setSourceEntity(157U);
    msg.setDestination(586U);
    msg.setDestinationEntity(219U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.576762425139;
    msg.control.set(tmp_msg_0);
    msg.duration = 57562U;
    msg.custom.assign("BZBDRVKASGXTSAGPFZDMHGQYWNWNNYSWMKLXWUYQKRYAXHCTQGVAOTDJJFEHVEHAEPNEKLZCJZQXPHVOCYUZKWEPYQECLQIILHGBRPCBYLAUOUOFDQEAWETFFBIOZOJMWWWPZBMSMLNMAGSPNXQARUPLDRJCCBOXRDJBNXJOFFJXKFVQLHSYYMUG");

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
    msg.setTimeStamp(0.764546977878);
    msg.setSource(27942U);
    msg.setSourceEntity(29U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(125U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.827593936542;
    msg.control.set(tmp_msg_0);
    msg.duration = 13123U;
    msg.custom.assign("WBKKHXCETVCEOOMTTGKGFBQSWJIVAAAYIXSLTNDLIXKCVVDUBZGYNOJYRAHKRLEJRDSWQLGSFMGYZGNTUDALHVERIZQPYRZTDELCHPJKLVQJVRWFTSHUEFPXQNEICUVDTYWACXMQOGKIZXLMBFQAHBJJBHDUEZULWBIMZPDFLYHNOGKKSIQSURPNJFFMPUJNHOCDMHQSIBRPMXI");

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
    msg.setTimeStamp(0.586284303028);
    msg.setSource(24318U);
    msg.setSourceEntity(250U);
    msg.setDestination(586U);
    msg.setDestinationEntity(233U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.952469215338;
    tmp_msg_0.speed_units = 254U;
    msg.control.set(tmp_msg_0);
    msg.duration = 6693U;
    msg.custom.assign("ENBWBJBLSEDKRDHKRLQLGFWPCBPCDPPCNRVVOQNYTZIOUDAJGGUUSBWOBHROXCIOUWAODVXZCHMLHFZIEAJQMWYWASMGBRPWZENNVTMOMSGTUISVXLQJIAJBSSLZNYUUKKFKYVELQJZTYQFUZXLTKJESQM");

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
    msg.setTimeStamp(0.774682848427);
    msg.setSource(34124U);
    msg.setSourceEntity(242U);
    msg.setDestination(22135U);
    msg.setDestinationEntity(117U);
    msg.timeout = 757U;
    msg.lat = 0.177406830962;
    msg.lon = 0.906987586921;
    msg.z = 0.409122420167;
    msg.z_units = 141U;
    msg.speed = 0.134308538991;
    msg.speed_units = 148U;
    msg.bearing = 0.23970459215;
    msg.cross_angle = 0.472255994461;
    msg.width = 0.806463134722;
    msg.length = 0.0660703787985;
    msg.hstep = 0.891197137674;
    msg.coff = 252U;
    msg.alternation = 87U;
    msg.flags = 8U;
    msg.custom.assign("ZXCTGRCSBXRZZGVPFRZFEFPRXXQNBOLENPAQFDYJLIINURMDINDSEQGTSYOMIWQNATBJTAOAIECVKKQTTASMLPWZQDAYSTATNWPJIHZBBDJOBZKWLYWPJRILFXLMNOPDMMVHYFOLJVWCJCXOCZODCKJYUVEOFLIUUAAMNULKIMQYSYXGDGEEZQVJSNPHESEWGMKGHPUMHRQBACZHNYOTCPUKUFIVKCSVHYLRK");

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
    msg.setTimeStamp(0.243287376903);
    msg.setSource(5810U);
    msg.setSourceEntity(67U);
    msg.setDestination(30684U);
    msg.setDestinationEntity(165U);
    msg.timeout = 23217U;
    msg.lat = 0.865382953895;
    msg.lon = 0.0301166850488;
    msg.z = 0.33266976681;
    msg.z_units = 177U;
    msg.speed = 0.802537197988;
    msg.speed_units = 1U;
    msg.bearing = 0.666623845754;
    msg.cross_angle = 0.338681753397;
    msg.width = 0.8213167274;
    msg.length = 0.693555163504;
    msg.hstep = 0.587579264965;
    msg.coff = 82U;
    msg.alternation = 89U;
    msg.flags = 232U;
    msg.custom.assign("PEFPZYGXAXXUAWXVINPCSPZQMRLBNO");

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
    msg.setTimeStamp(0.407301849358);
    msg.setSource(11071U);
    msg.setSourceEntity(26U);
    msg.setDestination(60251U);
    msg.setDestinationEntity(150U);
    msg.timeout = 1693U;
    msg.lat = 0.490097364144;
    msg.lon = 0.146861195988;
    msg.z = 0.615536743242;
    msg.z_units = 235U;
    msg.speed = 0.375910924513;
    msg.speed_units = 36U;
    msg.bearing = 0.558866401885;
    msg.cross_angle = 0.326237810604;
    msg.width = 0.321427911881;
    msg.length = 0.319145581706;
    msg.hstep = 0.593492086724;
    msg.coff = 82U;
    msg.alternation = 113U;
    msg.flags = 162U;
    msg.custom.assign("NLVQFTRBAFYHXHRRIZUFGLILIAQUOJVWAPSPWMSBASJYGEDOPLMQYBLPOTIXHO");

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
    msg.setTimeStamp(0.0612316247985);
    msg.setSource(16206U);
    msg.setSourceEntity(230U);
    msg.setDestination(16805U);
    msg.setDestinationEntity(118U);
    msg.timeout = 35909U;
    msg.lat = 0.504388609173;
    msg.lon = 0.870211252398;
    msg.z = 0.748548314568;
    msg.z_units = 190U;
    msg.speed = 0.753923540996;
    msg.speed_units = 134U;
    msg.custom.assign("XEMQMXMPOLXJDIHFPEDDUTKYHLIREJCVYPXEMHFAUBAUQCSPIRKEKJRAVUFKCBGNWXBAHMZQXLGYOJBAHEUQDNQWZWYYVTUEVHZTJOGSOAYSGK");

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
    msg.setTimeStamp(0.737395659227);
    msg.setSource(31002U);
    msg.setSourceEntity(33U);
    msg.setDestination(49389U);
    msg.setDestinationEntity(120U);
    msg.timeout = 14671U;
    msg.lat = 0.274635738405;
    msg.lon = 0.696501386149;
    msg.z = 0.587905903343;
    msg.z_units = 33U;
    msg.speed = 0.925762229342;
    msg.speed_units = 100U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.904347432153;
    tmp_msg_0.y = 0.496321831967;
    tmp_msg_0.z = 0.622697210584;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UNOKACYVJOGTLDUZKHRAGZWEMGNFMJYGHMPQJHGDFDLDQCWEBCTCTLOBBVRIGOKNWEVUEAZYHHSYPYWIVFQFNLJWXMUSJDAZVSQKWAKGXXBMVFEXEQNRQBSCVZXOMMJQHWYSWNVPXCDWAZHBLDUPXUIRTRFSDUDNAIFPHKLOXIQT");

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
    msg.setTimeStamp(0.129451722532);
    msg.setSource(59303U);
    msg.setSourceEntity(8U);
    msg.setDestination(19129U);
    msg.setDestinationEntity(8U);
    msg.timeout = 18865U;
    msg.lat = 0.614317919397;
    msg.lon = 0.842682044772;
    msg.z = 0.383024669523;
    msg.z_units = 58U;
    msg.speed = 0.0847111483981;
    msg.speed_units = 208U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.232352399691;
    tmp_msg_0.y = 0.408934710127;
    tmp_msg_0.z = 0.725520724517;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BKLKAWFLBMCTQJJHRBGMYJQTLAZOOWUQGAYJCOUY");

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
    msg.setTimeStamp(0.940738829016);
    msg.setSource(56101U);
    msg.setSourceEntity(41U);
    msg.setDestination(4383U);
    msg.setDestinationEntity(166U);
    msg.x = 0.159108765241;
    msg.y = 0.0598769294173;
    msg.z = 0.674019746162;

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
    msg.setTimeStamp(0.685688916181);
    msg.setSource(39699U);
    msg.setSourceEntity(194U);
    msg.setDestination(63639U);
    msg.setDestinationEntity(22U);
    msg.x = 0.31020401584;
    msg.y = 0.100331729162;
    msg.z = 0.2625543025;

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
    msg.setTimeStamp(0.219450823888);
    msg.setSource(35909U);
    msg.setSourceEntity(29U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(129U);
    msg.x = 0.459780416942;
    msg.y = 0.512726806025;
    msg.z = 0.300029351848;

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
    msg.setTimeStamp(0.75205350353);
    msg.setSource(56958U);
    msg.setSourceEntity(8U);
    msg.setDestination(36701U);
    msg.setDestinationEntity(218U);
    msg.timeout = 20596U;
    msg.lat = 0.628467357825;
    msg.lon = 0.612872452301;
    msg.z = 0.0386957778493;
    msg.z_units = 84U;
    msg.amplitude = 0.132296085903;
    msg.pitch = 0.295592680186;
    msg.speed = 0.117391661501;
    msg.speed_units = 100U;
    msg.custom.assign("ZGBZRFWHJHEZEUYMQLBQXIOCBIYGMTTOSTBFAHJZBTZPAPTRBEBUIUVXX");

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
    msg.setTimeStamp(0.612142864468);
    msg.setSource(38370U);
    msg.setSourceEntity(141U);
    msg.setDestination(16106U);
    msg.setDestinationEntity(223U);
    msg.timeout = 63468U;
    msg.lat = 0.321312992787;
    msg.lon = 0.131468387597;
    msg.z = 0.140986526118;
    msg.z_units = 122U;
    msg.amplitude = 0.928035086776;
    msg.pitch = 0.600735581429;
    msg.speed = 0.985112827916;
    msg.speed_units = 160U;
    msg.custom.assign("ZQUHLYDTRJAWAHGKAFIPVMDCJCSCSERBBBLHXUWAYLFJVPEWOJLPNPUBUVNWDONAVDFDVKLQXOCCQZXHODZYLCTFMSRUFEZTYWEZTQAKMMEKDVRH");

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
    msg.setTimeStamp(0.635013012034);
    msg.setSource(55689U);
    msg.setSourceEntity(101U);
    msg.setDestination(19740U);
    msg.setDestinationEntity(106U);
    msg.timeout = 32104U;
    msg.lat = 0.0898671489799;
    msg.lon = 0.388021029859;
    msg.z = 0.0265394222404;
    msg.z_units = 22U;
    msg.amplitude = 0.548105004753;
    msg.pitch = 0.0287704918483;
    msg.speed = 0.263760941195;
    msg.speed_units = 242U;
    msg.custom.assign("WWDJNIHTDRLHINYYSJLQRFJRJHXQGZVEZPELBCHFSRCVEMNGQTWCKGGERYABHDYTCHRURDLWZPQYACVIAPTZNRGZYBQOWUCIXJSNQWXXSTDTMPZMEMVIDKNOFWACBAKBVUEYXKASHWLDIFMPKQVLCOEJMQKFMYCPHBLDACPONSJLNOHOUUXZXMSFRBEEKUQGBWFIVPZLTMURHWYPUIZGLVT");

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
    msg.setTimeStamp(0.300624326451);
    msg.setSource(21497U);
    msg.setSourceEntity(151U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.48168721343);
    msg.setSource(444U);
    msg.setSourceEntity(6U);
    msg.setDestination(40860U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.329761233991);
    msg.setSource(6578U);
    msg.setSourceEntity(47U);
    msg.setDestination(60602U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.513325992639);
    msg.setSource(38636U);
    msg.setSourceEntity(95U);
    msg.setDestination(28527U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.357604096438;
    msg.lon = 0.360641466109;
    msg.z = 0.572278990397;
    msg.z_units = 141U;
    msg.radius = 0.200716151673;
    msg.duration = 40786U;
    msg.speed = 0.401844494016;
    msg.speed_units = 11U;
    msg.custom.assign("QHDYNMNGPATCJOEVXDKQANSBZCYHHISZMUFTESWTEQMRSYPHANQHAKOIZECIKXOUZBJVMXCGZSLRJDFPOWSRZJFFZPPYQRUBLLTEGJNCDJXGVOXQRWCMEQKTBIGXYAFTGRLETRPBMJEYUDWCVI");

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
    msg.setTimeStamp(0.264041937332);
    msg.setSource(28478U);
    msg.setSourceEntity(231U);
    msg.setDestination(63994U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.41058052936;
    msg.lon = 0.00580608327461;
    msg.z = 0.984555061391;
    msg.z_units = 234U;
    msg.radius = 0.772306627269;
    msg.duration = 48517U;
    msg.speed = 0.661187479196;
    msg.speed_units = 8U;
    msg.custom.assign("VPLTOUVFONXDMG");

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
    msg.setTimeStamp(0.532059741865);
    msg.setSource(15857U);
    msg.setSourceEntity(169U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.998509402294;
    msg.lon = 0.766315017696;
    msg.z = 0.205385336455;
    msg.z_units = 8U;
    msg.radius = 0.0306237492372;
    msg.duration = 61277U;
    msg.speed = 0.257300772069;
    msg.speed_units = 167U;
    msg.custom.assign("YYCWHYLHMNLPPXEKRNOLYVRDNGKXWFVBLHTAFFYGBEWUAHZJSMMZSWOCGIYUOVXIJTTPJNIHODBXQXSGPBWTXFP");

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
    msg.setTimeStamp(0.442599249528);
    msg.setSource(51875U);
    msg.setSourceEntity(233U);
    msg.setDestination(17842U);
    msg.setDestinationEntity(108U);
    msg.timeout = 15329U;
    msg.flags = 38U;
    msg.lat = 0.0453400038113;
    msg.lon = 0.614579230096;
    msg.start_z = 0.565472747441;
    msg.start_z_units = 203U;
    msg.end_z = 0.0866888063132;
    msg.end_z_units = 206U;
    msg.radius = 0.772029155092;
    msg.speed = 0.172361237918;
    msg.speed_units = 105U;
    msg.custom.assign("WBKKUPNIZFTYPAZUOIPXD");

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
    msg.setTimeStamp(0.641199049587);
    msg.setSource(18898U);
    msg.setSourceEntity(132U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(252U);
    msg.timeout = 51348U;
    msg.flags = 36U;
    msg.lat = 0.118914105611;
    msg.lon = 0.0180333678744;
    msg.start_z = 0.578660951114;
    msg.start_z_units = 142U;
    msg.end_z = 0.949074261871;
    msg.end_z_units = 59U;
    msg.radius = 0.660092111218;
    msg.speed = 0.607062538306;
    msg.speed_units = 34U;
    msg.custom.assign("PSIGASJOTXBCQTKEOSQIHMGUXCQQPTHYQLHQEVWKIXFFZH");

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
    msg.setTimeStamp(0.415568884394);
    msg.setSource(7768U);
    msg.setSourceEntity(110U);
    msg.setDestination(35739U);
    msg.setDestinationEntity(50U);
    msg.timeout = 57419U;
    msg.flags = 72U;
    msg.lat = 0.201773214503;
    msg.lon = 0.396688103111;
    msg.start_z = 0.090952209789;
    msg.start_z_units = 15U;
    msg.end_z = 0.0451554385673;
    msg.end_z_units = 222U;
    msg.radius = 0.870619425347;
    msg.speed = 0.912468096922;
    msg.speed_units = 38U;
    msg.custom.assign("PCTLBNIIKFZGFXEOOTUCPBZPUUWSBHIETMCOB");

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
    msg.setTimeStamp(0.79450366753);
    msg.setSource(36365U);
    msg.setSourceEntity(248U);
    msg.setDestination(33692U);
    msg.setDestinationEntity(43U);
    msg.timeout = 53566U;
    msg.lat = 0.12648158655;
    msg.lon = 0.0669913406432;
    msg.z = 0.559613815094;
    msg.z_units = 55U;
    msg.speed = 0.676537341779;
    msg.speed_units = 71U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.589515911667;
    tmp_msg_0.y = 0.185880403316;
    tmp_msg_0.z = 0.582009486222;
    tmp_msg_0.t = 0.213881934082;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QIBVLSXFJPDAXUNMASPXXPWDNOGRPLLTNMTDMHYFLJJFKMPDWORHF");

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
    msg.setTimeStamp(0.388653511284);
    msg.setSource(8080U);
    msg.setSourceEntity(245U);
    msg.setDestination(36240U);
    msg.setDestinationEntity(2U);
    msg.timeout = 45669U;
    msg.lat = 0.298557983786;
    msg.lon = 0.944299544756;
    msg.z = 0.883694512478;
    msg.z_units = 228U;
    msg.speed = 0.853101439724;
    msg.speed_units = 110U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.456062619428;
    tmp_msg_0.y = 0.606679094808;
    tmp_msg_0.z = 0.526189816111;
    tmp_msg_0.t = 0.550144278444;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IXMIYZDIPFFVBKXVQWTLBCXGHACXFBVGEGSDABVYVGPTWUJJHFNJFRIOKGXRBMMHCOYZXGQFDBYJEJINNMNNNDTJKHULLBUSPURUZSYUEASQSHDAOCCMSPLYLWZGKJAEZLCWTMAUNJGOAXELRHANMWWYQPHDZUEOQTVWBBHFGINQVVKDYKNVKXZCABAPPRJDTXRSOQQQIEIZSKOJFOZMFRZOTCUKURITDCY");

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
    msg.setTimeStamp(0.788984711521);
    msg.setSource(39414U);
    msg.setSourceEntity(137U);
    msg.setDestination(63614U);
    msg.setDestinationEntity(192U);
    msg.timeout = 33229U;
    msg.lat = 0.184023215124;
    msg.lon = 0.280413060044;
    msg.z = 0.41184132839;
    msg.z_units = 184U;
    msg.speed = 0.0545504327912;
    msg.speed_units = 129U;
    msg.custom.assign("PLFJGFNVIGMGTQUITFQGKICNYKIYOSVUWMMQSAPCYBZPZHRUOPZXVNAWTLIODODEHXQSNMHKLKTWLKJWYYFALBEYEETRWVGDDOQAOWAXPVTA");

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
    msg.setTimeStamp(0.8021076726);
    msg.setSource(7132U);
    msg.setSourceEntity(115U);
    msg.setDestination(34954U);
    msg.setDestinationEntity(252U);
    msg.x = 0.248010241893;
    msg.y = 0.933169829474;
    msg.z = 0.535507379948;
    msg.t = 0.809165688993;

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
    msg.setTimeStamp(0.634490953651);
    msg.setSource(13524U);
    msg.setSourceEntity(209U);
    msg.setDestination(39865U);
    msg.setDestinationEntity(135U);
    msg.x = 0.686658319572;
    msg.y = 0.337377970766;
    msg.z = 0.933837702125;
    msg.t = 0.0497686053035;

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
    msg.setTimeStamp(0.768248555773);
    msg.setSource(44687U);
    msg.setSourceEntity(45U);
    msg.setDestination(44299U);
    msg.setDestinationEntity(156U);
    msg.x = 0.831189058648;
    msg.y = 0.662548652452;
    msg.z = 0.574459515397;
    msg.t = 0.524336206635;

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
    msg.setTimeStamp(0.871483044447);
    msg.setSource(11892U);
    msg.setSourceEntity(139U);
    msg.setDestination(42040U);
    msg.setDestinationEntity(86U);
    msg.timeout = 18240U;
    msg.name.assign("ESPYCEIXBSAAAGLEVHZHZEGRWLHFPTTTDOPNRVBRJBCYMJAIOJMSUVDXHNQRNCLSRPWQTRGFOEMDCGHCTAQFCDTWWBQODXAYGKJZXNUNLRP");
    msg.custom.assign("IEOUMPXZPTUNGNQMDSSPIZBVWUVOLULAYBXOPDWJIARKHTZIBWTBEOOBYNTLJUVYKKTQBZZRHHXQXQHMROBNCWADUMTLQLJRBYLNAWXVFEHJVUHQYPZEIJAQEWFJLYMMCUICTEDWNIEOKRGDQVMOGZCDLZWGKADCWVTFFEKIMLYNJBKDQCXSSTZDFFQNENCZSSFCJMGPGPYGAVPFVNXBRKGUCOASL");

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
    msg.setTimeStamp(0.652043399159);
    msg.setSource(55119U);
    msg.setSourceEntity(30U);
    msg.setDestination(22562U);
    msg.setDestinationEntity(34U);
    msg.timeout = 43330U;
    msg.name.assign("MQRILPCUFREPOND");
    msg.custom.assign("RUKWVPSNFLFZZOGLPAZJXSAOTIEGWNBZEDPJRROCITOJYYOXWBYHEQAJYOKHEDFFQNMWPNKSMTRWSQRVZ");

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
    msg.setTimeStamp(0.0204901827156);
    msg.setSource(61989U);
    msg.setSourceEntity(141U);
    msg.setDestination(49459U);
    msg.setDestinationEntity(235U);
    msg.timeout = 61943U;
    msg.name.assign("YCIFRJPZAKNIIWOXQKJBXCRKYUSDOTRTNMFTUDPLWHIYJDKAYZBQCUJEDOREBSHFMUEWQGVPQOECQPPQESDZFSEASNHLYVBFLDHAEGPFOWHIKVAVMGUZUUL");
    msg.custom.assign("URKVNIKDOKCUXBMWEORUYUYHBWYJICXTMZZJKGPHVJSWDNEORIQNXVNEZRFWNSXICLAXKWZGCIPUKPSNADLIOMVJGWOPBOWRGMWAMHLYCLTJNKTNPLOXKKMJVUAFCAAFUESDVLICVTMFTHTSNLMYZDGJYQKFZSHTQWCGZEDBHSHJQFDZ");

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
    msg.setTimeStamp(0.779893653736);
    msg.setSource(5009U);
    msg.setSourceEntity(26U);
    msg.setDestination(30903U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.463656209401;
    msg.lon = 0.952319601917;
    msg.z = 0.527807893658;
    msg.z_units = 10U;
    msg.speed = 0.486680345217;
    msg.speed_units = 236U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.59557958418;
    tmp_msg_0.y = 0.443955280521;
    tmp_msg_0.z = 0.43775904537;
    tmp_msg_0.t = 0.830854215566;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 62067U;
    tmp_msg_1.off_x = 0.206371553465;
    tmp_msg_1.off_y = 0.113142168422;
    tmp_msg_1.off_z = 0.693103145139;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.349552514561;
    msg.custom.assign("UYOFHYYBCQSTKQUKCVRRPPLJSGDNDWVNMTWMSMLFESARGHUFCSLIARPEVOZMLLSJJXJUOTQXEOHUUPOVQPVGURZWDPDVWVTIKXKYOEOCDGRFYPBGEIGNUIHDHWEKPTJCASRQFBVKMASOFFHPEIKAGGOMDAXALQLSWNTCYEDNHLXEZGFQBWYABNHBMLFKBTLZIUWAMKDJCFCNQMXCJCBWWYUNZXXONZJNETSTKQMBXYQZZBIATIJHYJRPIDVRV");

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
    msg.setTimeStamp(0.164713236976);
    msg.setSource(20425U);
    msg.setSourceEntity(230U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.933255338851;
    msg.lon = 0.64807542665;
    msg.z = 0.04851435982;
    msg.z_units = 89U;
    msg.speed = 0.634302826374;
    msg.speed_units = 96U;
    msg.start_time = 0.873767502196;
    msg.custom.assign("PHDBSQDXGNTEATWPTVEXTMSVSJLCCGCGWLYJWHYJ");

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
    msg.setTimeStamp(0.9231266575);
    msg.setSource(5053U);
    msg.setSourceEntity(213U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.935021307333;
    msg.lon = 0.549475631566;
    msg.z = 0.387409518366;
    msg.z_units = 135U;
    msg.speed = 0.977649546845;
    msg.speed_units = 62U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.852422917206;
    tmp_msg_0.y = 0.915593226942;
    tmp_msg_0.z = 0.440611481422;
    tmp_msg_0.t = 0.816126004173;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 20767U;
    tmp_msg_1.off_x = 0.463257634237;
    tmp_msg_1.off_y = 0.797051468181;
    tmp_msg_1.off_z = 0.0379442918836;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.600477904306;
    msg.custom.assign("KFESIRNVXAIMAOVUVSUWQYRVBQJHQQLYAYWJJDGOOMWGCNNHTZNHXSQKMWGPFMMCNCZXBRDQZETMTYVCVUKUDZSJLWFDBOJDZYBBFUGRDDLEEHOHTHGHHIIOXLUYXUQXGGTVWFFDPBYTT");

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
    msg.setTimeStamp(0.646177316104);
    msg.setSource(57578U);
    msg.setSourceEntity(94U);
    msg.setDestination(32021U);
    msg.setDestinationEntity(17U);
    msg.vid = 27286U;
    msg.off_x = 0.280111007844;
    msg.off_y = 0.206558459946;
    msg.off_z = 0.467786012232;

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
    msg.setTimeStamp(0.701714724836);
    msg.setSource(44163U);
    msg.setSourceEntity(35U);
    msg.setDestination(59865U);
    msg.setDestinationEntity(25U);
    msg.vid = 54898U;
    msg.off_x = 0.684125714769;
    msg.off_y = 0.745404695315;
    msg.off_z = 0.404353709544;

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
    msg.setTimeStamp(0.681921847636);
    msg.setSource(53939U);
    msg.setSourceEntity(71U);
    msg.setDestination(60924U);
    msg.setDestinationEntity(51U);
    msg.vid = 26341U;
    msg.off_x = 0.761323549378;
    msg.off_y = 0.140476069257;
    msg.off_z = 0.355639426695;

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
    msg.setTimeStamp(0.7254120813);
    msg.setSource(1810U);
    msg.setSourceEntity(17U);
    msg.setDestination(21436U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.806157324628);
    msg.setSource(33421U);
    msg.setSourceEntity(37U);
    msg.setDestination(15387U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.261699830061);
    msg.setSource(31581U);
    msg.setSourceEntity(192U);
    msg.setDestination(45049U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.748568684352);
    msg.setSource(24241U);
    msg.setSourceEntity(173U);
    msg.setDestination(57930U);
    msg.setDestinationEntity(241U);
    msg.mid = 58909U;

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
    msg.setTimeStamp(0.221225607179);
    msg.setSource(31030U);
    msg.setSourceEntity(43U);
    msg.setDestination(19426U);
    msg.setDestinationEntity(233U);
    msg.mid = 2830U;

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
    msg.setTimeStamp(0.0319056070018);
    msg.setSource(14854U);
    msg.setSourceEntity(184U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(34U);
    msg.mid = 2844U;

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
    msg.setTimeStamp(0.470585349826);
    msg.setSource(45806U);
    msg.setSourceEntity(113U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(52U);
    msg.state = 133U;
    msg.eta = 618U;
    msg.info.assign("USAXNMKSJXTTVAGNVIFLXUBCQTNIIODADYDPBFZPCERYMJ");

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
    msg.setTimeStamp(0.253236387254);
    msg.setSource(10014U);
    msg.setSourceEntity(158U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(30U);
    msg.state = 252U;
    msg.eta = 36186U;
    msg.info.assign("RSCFXKUWWEPLFALWRPYDOHRUSRGATXEXLRYWRVBNIPIDQKAFMWHCOWKZBOSVUKSSJLIEKFQGIKPSBJXRVWJSBELGDZCVIXFGELCKAAOXJYXNCYTHDLTTCJDMVJTOUBXBNQPRRIJCQRQBYUAZTUPOFQPVJDZXGMSODNZNMPAHMAGVHEMWEFLGADYOYBFEZGEYKBGMEZVCKWULZODNOQIHNIPVTTMTTZQPINGNFCJJWHSBHFHMYMUV");

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
    msg.setTimeStamp(0.837528240743);
    msg.setSource(26036U);
    msg.setSourceEntity(36U);
    msg.setDestination(48462U);
    msg.setDestinationEntity(26U);
    msg.state = 69U;
    msg.eta = 5110U;
    msg.info.assign("OZXHEQMOIVVEUOUSSWUGZDOXTRIRJHOTZTWUAHXFLHNRUXSJDDEURGQLNLLUFWCAVNFEZ");

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
    msg.setTimeStamp(0.151087130318);
    msg.setSource(12810U);
    msg.setSourceEntity(235U);
    msg.setDestination(22120U);
    msg.setDestinationEntity(162U);
    msg.system = 43208U;
    msg.duration = 21667U;
    msg.speed = 0.86773393983;
    msg.speed_units = 208U;
    msg.x = 0.607789606203;
    msg.y = 0.242028141526;
    msg.z = 0.192758671105;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.771127147836);
    msg.setSource(51519U);
    msg.setSourceEntity(91U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(87U);
    msg.system = 26918U;
    msg.duration = 20641U;
    msg.speed = 0.654289783393;
    msg.speed_units = 223U;
    msg.x = 0.659745742533;
    msg.y = 0.801821104864;
    msg.z = 0.47567857613;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.0256984621938);
    msg.setSource(51092U);
    msg.setSourceEntity(95U);
    msg.setDestination(54887U);
    msg.setDestinationEntity(153U);
    msg.system = 14599U;
    msg.duration = 30479U;
    msg.speed = 0.404485139401;
    msg.speed_units = 114U;
    msg.x = 0.535517081704;
    msg.y = 0.368853977276;
    msg.z = 0.266013486109;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.730585339602);
    msg.setSource(25888U);
    msg.setSourceEntity(230U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.356999066414;
    msg.lon = 0.0243722822133;
    msg.speed = 0.88200123296;
    msg.speed_units = 154U;
    msg.duration = 20132U;
    msg.sys_a = 5235U;
    msg.sys_b = 171U;
    msg.move_threshold = 0.544692869261;

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
    msg.setTimeStamp(0.877375108033);
    msg.setSource(5710U);
    msg.setSourceEntity(147U);
    msg.setDestination(9014U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.398686413518;
    msg.lon = 0.596386560047;
    msg.speed = 0.344249993829;
    msg.speed_units = 44U;
    msg.duration = 7934U;
    msg.sys_a = 19295U;
    msg.sys_b = 25318U;
    msg.move_threshold = 0.496095696616;

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
    msg.setTimeStamp(0.897699502732);
    msg.setSource(33211U);
    msg.setSourceEntity(116U);
    msg.setDestination(19124U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.765592104283;
    msg.lon = 0.0835789662623;
    msg.speed = 0.112232471524;
    msg.speed_units = 216U;
    msg.duration = 52956U;
    msg.sys_a = 56703U;
    msg.sys_b = 48579U;
    msg.move_threshold = 0.040367705789;

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
    msg.setTimeStamp(0.0782852361342);
    msg.setSource(59219U);
    msg.setSourceEntity(38U);
    msg.setDestination(22702U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.58816574974;
    msg.lon = 0.0869312862912;
    msg.z = 0.438831901969;
    msg.z_units = 13U;
    msg.speed = 0.891352112789;
    msg.speed_units = 208U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.975055835439;
    tmp_msg_0.lon = 0.340640077422;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SYSXOMTUWOSTDHRZEKOWWYSDYSJPRAVFMHKQGKOTOENJAIMJKFWUVXBCZYBFSUQHXKGUWOOTROGAECMXCRHYMPPBIFHCLFWXQBRQLIZGCBNNALAPTJSWUZRGNETGHWLDACFLAGQLRZQLRIPEKJDDCVVRXBLHYDBNDIIKSDEAXSBRBPODHKVNYKYYHNTNMFLGIZJ");

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
    msg.setTimeStamp(0.936685917639);
    msg.setSource(4795U);
    msg.setSourceEntity(132U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.0972218506253;
    msg.lon = 0.694156604825;
    msg.z = 0.832259593808;
    msg.z_units = 158U;
    msg.speed = 0.0463439980235;
    msg.speed_units = 135U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.466184259558;
    tmp_msg_0.lon = 0.324737308501;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WHWMQLHRYPXKFVXLYERFWMFIRLFGTCSCVFDJEAUWFCLBXMZDGQKTUAYQBASAOIKZALQPYAIUHVPEFCIKHDJJDQKWWSKJQVAUTJNTNXMBGFVPXYVYCJHONXIIAMNJBISBZEZZOSYDURSHMRVGVXALYUKSBJROCHHZGPGFBDAQPCQWGTMMGJKKXYOJODPSTUEYSZNDVCTGQLPXRFRINDWHMECUZDCRLTE");

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
    msg.setTimeStamp(0.280862962348);
    msg.setSource(41918U);
    msg.setSourceEntity(170U);
    msg.setDestination(38U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.0695427825227;
    msg.lon = 0.596881785285;
    msg.z = 0.829757085285;
    msg.z_units = 74U;
    msg.speed = 0.0790530888699;
    msg.speed_units = 15U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.358034034689;
    tmp_msg_0.lon = 0.21839606595;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZMBPDCOKESNJIYVQXVKBSWGTWAMQAROYBDFHFQKXTLIWJWRGHUGJZZNKSMUBPNIXNVTWXPXKLZTFUPMBDHIIFMLPIBONWRTZZMXHPFLHCLUGCWVGCYGHRCJCROTCSOYEVXNDEXJVPMLVKAHUFPMVQFOOIPGYJVTDBNVSLOQ");

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
    msg.setTimeStamp(0.470064663683);
    msg.setSource(6211U);
    msg.setSourceEntity(32U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.206383764841;
    msg.lon = 0.446700886686;

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
    msg.setTimeStamp(0.537667110964);
    msg.setSource(46022U);
    msg.setSourceEntity(194U);
    msg.setDestination(41073U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.881982915263;
    msg.lon = 0.688942596742;

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
    msg.setTimeStamp(0.273528653521);
    msg.setSource(19700U);
    msg.setSourceEntity(181U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.754993901757;
    msg.lon = 0.350726706971;

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
    msg.setTimeStamp(0.430595702083);
    msg.setSource(39707U);
    msg.setSourceEntity(176U);
    msg.setDestination(62271U);
    msg.setDestinationEntity(17U);
    msg.timeout = 31218U;
    msg.lat = 0.980689946765;
    msg.lon = 0.801663778869;
    msg.z = 0.311942907285;
    msg.z_units = 193U;
    msg.pitch = 0.820963003637;
    msg.amplitude = 0.0654304740268;
    msg.duration = 55187U;
    msg.speed = 0.439888530897;
    msg.speed_units = 75U;
    msg.radius = 0.428991850372;
    msg.direction = 160U;
    msg.custom.assign("WXWMKIDUGXRSMHOTRBRUAJDSTSVIQSNADVCUUJRTQCJRVUKMLNGBIYTXEYPMYPCSZUAHUSDLODKJVDFWCIMTTBIVAHWQHHBZLHIPRNVKBZJHFLRQUCSKHCLSFMZXADGNZPGUKSNIGXYCBBIJMQLEEKJDGKWVNFTOOXGJROPFQEZOPIGNOEEZQAECWWDYAGVFPTAKHWBLHXUWOEYVYSQBPKLBXFONTEJMXORZP");

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
    msg.setTimeStamp(0.0026580674226);
    msg.setSource(55153U);
    msg.setSourceEntity(244U);
    msg.setDestination(6018U);
    msg.setDestinationEntity(252U);
    msg.timeout = 23689U;
    msg.lat = 0.727040483372;
    msg.lon = 0.48925914928;
    msg.z = 0.998727994922;
    msg.z_units = 232U;
    msg.pitch = 0.0955956597771;
    msg.amplitude = 0.164540662427;
    msg.duration = 39991U;
    msg.speed = 0.963336555454;
    msg.speed_units = 149U;
    msg.radius = 0.789590677632;
    msg.direction = 0U;
    msg.custom.assign("NXAOAUCDGAWOBKMIIAWSSBCNPFTKFUJIUNTHHRNGZCJXTJVLPNZCESFHFTEKKXFVQQUDQJJLFXBTWYLXBMABYLNJVOURCEFTIE");

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
    msg.setTimeStamp(0.627156505702);
    msg.setSource(63285U);
    msg.setSourceEntity(48U);
    msg.setDestination(55794U);
    msg.setDestinationEntity(254U);
    msg.timeout = 5171U;
    msg.lat = 0.440121271128;
    msg.lon = 0.399592452239;
    msg.z = 0.240142715398;
    msg.z_units = 172U;
    msg.pitch = 0.791242974781;
    msg.amplitude = 0.46036294084;
    msg.duration = 54887U;
    msg.speed = 0.382607996618;
    msg.speed_units = 16U;
    msg.radius = 0.75928778905;
    msg.direction = 137U;
    msg.custom.assign("SEEEYQAEXLLUIPERLNKJHRKSCYVGTCGMMGJOZABTNJYNWDDBWFMPTBHNUXZAPBTQVBCBVZESVQACLXFFDHSTQRLLTNOPRDMSUKMVAOVTOAJWMFFHMUZYXZGVRIJIEOGEOWBYILJZXGC");

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
    msg.setTimeStamp(0.221243179748);
    msg.setSource(1108U);
    msg.setSourceEntity(198U);
    msg.setDestination(53655U);
    msg.setDestinationEntity(213U);
    msg.formation_name.assign("AYGVSOMWESRRLDQUNUMIQIFYAPUEFLFBHYRREPKVPGLQQLEUBZTXADPXAOZXMLEOGTOZNWUJEXAMJTZJNMVKFWCFKYHJRUVUZRVNAKCCVUMSRBHIKKWADYZNNGWXQZPCDTECZXXFDTLQLSGTILCGBDVRPHMYNMHUJRBYWBYTOPIIHDFSGCHBZDEWYPNGKKJAYKVEOSHLPHQCSGVFIWGJTXTTQIWBJLKONOSWCQASNRQMABHFVSEJ");
    msg.reference_frame = 234U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54104U;
    tmp_msg_0.off_x = 0.723787290455;
    tmp_msg_0.off_y = 0.956636669603;
    tmp_msg_0.off_z = 0.326790177899;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GSPNEWWCARUAAGMUNRXWROLAJYIUSQEQPORBOPNBXBLYT");

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
    msg.setTimeStamp(0.703342097432);
    msg.setSource(41920U);
    msg.setSourceEntity(184U);
    msg.setDestination(8150U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("HAFXJYJRLNLYHERZEOBCMFDVXUYSXPXDVFZBUPWYQCDMKUNXBALIENYXTTMBNISLGGOPDCHUAOIFSKQPHWMKGVAPFGWDLJYLRTRWXZTFDHJFBUQIMYPVXUVNNCOIVEUANWIJLNPAMSLYGTHIKZOQFOEMEDKRGTROHEDIRGZWJDUPNBVMCGEEHQKFSBTZSILKQACJ");
    msg.reference_frame = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5723U;
    tmp_msg_0.off_x = 0.394106006546;
    tmp_msg_0.off_y = 0.195354698064;
    tmp_msg_0.off_z = 0.938277585208;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EFUGUJQYURXNQRCXTJSLDBQGXGCYAWBDHKQKTZMOHVIPNENOPQOYJISAVNQWVKYRIFGKGJYBIZAXXSLMZUEEXNSTCAGQOXANXNFRUOLDFWBUZRNZBQLBIORJRFCVLDXHAEYJYAQEEHMTHWIFYCIHGFOUVOSLSWAPJMJGELLMOLRJBPCEHTDLPDVINCVMZAPUTTDIKZWMGVMXPVNZATIDWKPHKWJCWOCBFZSYFVWPRFSTUHRGPKHDSYBKDQMEK");

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
    msg.setTimeStamp(0.960096144919);
    msg.setSource(53853U);
    msg.setSourceEntity(216U);
    msg.setDestination(16670U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("CMYESVWSLVRLOSZZSJQIRKPUAOSGJLRKMCQXVDIXJQRVETAMGPQCEPYJJKHHWJMBEAFPHYWAPLFBUBIGMBFUQXNWCWRTWHSKBTKGUHZTLNSEYOEPOIOIDNQSHXQVYTXGOBZKXANVLNJAMTRHQKD");
    msg.reference_frame = 119U;
    msg.custom.assign("XCMFCGBRZTLDHKETLVRMOSPSBIPSTJWFSOFCICXZPFFWKPLYQEUYZMSJHYVJYNJHRNBYLYABUV");

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
    msg.setTimeStamp(0.589351023697);
    msg.setSource(58474U);
    msg.setSourceEntity(3U);
    msg.setDestination(3467U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("NVSFOEWDEUFGXGRQXFMKFJRNVUQGLKJAKTBFZJBLSUMZRTXRIDAWCRCCNMBXAJZATUTTMEDWYOKFUA");
    msg.formation_name.assign("EYLOJBKBEIWANECHDNZYPHMDBPNVBMXBCJULHSFGVWLAARTDVGNKJAINKYEEHMKYAZQLXHGWVULWGSMCRDARGUTVFUSRIAPMMKNKDJRSTPR");
    msg.plan_id.assign("ZAHQOWXCSFSUEINTDPPRSSRMYSBQGTCPQESIQYTDTUZHSD");
    msg.description.assign("AXJOIYBQMZGWEYLOVCUFJFGDHCFONHFSPQIMENOTHEQYCKGWRJMILVVTJATGDLWEWSDCLTLBJNKRYIYFGWZHDAZSNZXPQBV");
    msg.leader_speed = 0.155229673176;
    msg.leader_bank_lim = 0.853976439589;
    msg.pos_sim_err_lim = 0.588347734501;
    msg.pos_sim_err_wrn = 0.00327218710401;
    msg.pos_sim_err_timeout = 62855U;
    msg.converg_max = 0.195944451677;
    msg.converg_timeout = 44682U;
    msg.comms_timeout = 23042U;
    msg.turb_lim = 0.626829580692;
    msg.custom.assign("SYFQWOBEOIESRECDNKBQINKOZIJPGXOQKRMFLGCVQXEBHQYTSINJMBMLLMVIHXPUBHVBFHLZDUKQPACEVAKOVRGRLAIPXAWZNVEJAHCNYA");

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
    msg.setTimeStamp(0.144751538616);
    msg.setSource(9475U);
    msg.setSourceEntity(83U);
    msg.setDestination(62386U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("FXSKTXNLCLCBVHNBFSOGCPXCOQYRINQOHJPWQJUDELWJOUHWNDZEXVAKKIARHGMIRFXGYLNBKPMZVURREUJFZDLQYZBEOSSRZTPJAXBSBTMRIDPSUQTBCDPVZALTWVHHKKVPMHARWTLGDDFLUUTYGGFGWIXXJNYC");
    msg.formation_name.assign("EYJPTTHWKALHPOSVDFNTQQRZOWRVASXEIAMRSOWVQDPRKBWDNHCKCOIUBRUTBICPYGDNFFAQCXKYPGZGANPXYUFZEYSERCECHDDLRXQWIBEPHJJVIXALVJTAAXLHNMOUEKZXOMTCUDIODVUKISFXTOFKVAZYWQVJMBXBPFULQRNFGNFZLZPMUNTZEEBQWCUWCSGZLNHTVUSMGBWIONDSSG");
    msg.plan_id.assign("NQDGBTFFSMLZNKNABBRMTEPVJQZGPHSLVXLRPLDYHXDOT");
    msg.description.assign("FCXZZUAWLOGXDVUW");
    msg.leader_speed = 0.918230041011;
    msg.leader_bank_lim = 0.0827496976769;
    msg.pos_sim_err_lim = 0.522865595912;
    msg.pos_sim_err_wrn = 0.496544040807;
    msg.pos_sim_err_timeout = 17285U;
    msg.converg_max = 0.388072759794;
    msg.converg_timeout = 52383U;
    msg.comms_timeout = 10660U;
    msg.turb_lim = 0.389104583718;
    msg.custom.assign("RGUESTFLPJWAPQVXULEOMHIPOCNVKXPMHSBENVDNYCDCZYRJXLPRCUYQUTOAEBTLVDVIUSTESACBGTCOGGRYWFHKLMORHXZUQTLHRIADQJLQCNCXTRQBYTNVIIXNJZHZBOOAARYDAYBLPFINKUSPIQEBKAGUFXVQVSXFVWCDQGYPFWORJJYXWZDFWJGS");

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
    msg.setTimeStamp(0.210685401949);
    msg.setSource(47059U);
    msg.setSourceEntity(39U);
    msg.setDestination(17600U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("DTDFFMDVQAGKCWUETWZKAPSXVOURDIBNIWYKMDPJYEOHRHLQEAZPZOGDETVYSMTMQWCHKIICPDZUQUABWWIVGWDQMAGLEIRRRLMMGNMZONUUNDTLNYINLJEBQLBYXECRPGIYQVAHSATHGTHQSMKOLFNKKSCNJPPLZXXLOYGIOCYOVJGGTFEXHQBBASFXROUCFELAOCQX");
    msg.formation_name.assign("KTHYWTDDAEMUETXEJANQVFTXTENZCSDPJCWMLRTJNEKIJXZGJYEQVAUNHNEKMDCOCZPKVCFJBIOSCKZGGSLWWXFWYOJBLSOQDBRASZMNIHVGBBQADLYRBPQULSHIYDPGUHNYWXRPQKWDTVKWDGXUALAPNKGQQSXECKAWPBXMPMXLUZTFOVRODZZJRJQFOIATGNFPFGIQMUHYHBHFMYLIIHRNFYROCSKBCLCJIVVORPRUWYFL");
    msg.plan_id.assign("HKXHISXPLNHPMYUWNSIKQVPODTZZRNFUAMBKWWVYWALCQOBFFIKLQISUUMBGZQKNNKJJVOEREXSBGNIL");
    msg.description.assign("NOACVXPJSXFYAOKBXXNTAGQUVTRGJYAMYKSIQAWQBW");
    msg.leader_speed = 0.0543793652969;
    msg.leader_bank_lim = 0.126601337839;
    msg.pos_sim_err_lim = 0.408907272225;
    msg.pos_sim_err_wrn = 0.0154449102437;
    msg.pos_sim_err_timeout = 17662U;
    msg.converg_max = 0.924308034819;
    msg.converg_timeout = 18546U;
    msg.comms_timeout = 20930U;
    msg.turb_lim = 0.351685673306;
    msg.custom.assign("FZMBSJBFGMMDWDGNWUBTDXIXAUPOBNAOKFSQFANYAXMWCQZGCRHMFSWJPCBJZZFOLQPNGRHDGKSLXCINETMRPVKEDLVYLEWFKAXCWGBD");

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
    msg.setTimeStamp(0.846278134738);
    msg.setSource(57455U);
    msg.setSourceEntity(25U);
    msg.setDestination(15308U);
    msg.setDestinationEntity(56U);
    msg.control_src = 20330U;
    msg.control_ent = 174U;
    msg.timeout = 0.142102005518;
    msg.loiter_radius = 0.84993718962;
    msg.altitude_interval = 0.89882585397;

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
    msg.setTimeStamp(0.0472340709261);
    msg.setSource(33300U);
    msg.setSourceEntity(79U);
    msg.setDestination(938U);
    msg.setDestinationEntity(103U);
    msg.control_src = 45360U;
    msg.control_ent = 78U;
    msg.timeout = 0.812192657886;
    msg.loiter_radius = 0.0997511740331;
    msg.altitude_interval = 0.892265626981;

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
    msg.setTimeStamp(0.504364056374);
    msg.setSource(15851U);
    msg.setSourceEntity(54U);
    msg.setDestination(43530U);
    msg.setDestinationEntity(97U);
    msg.control_src = 11277U;
    msg.control_ent = 163U;
    msg.timeout = 0.845541349947;
    msg.loiter_radius = 0.680711150999;
    msg.altitude_interval = 0.922462079316;

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
    msg.setTimeStamp(0.137666144284);
    msg.setSource(26442U);
    msg.setSourceEntity(219U);
    msg.setDestination(30012U);
    msg.setDestinationEntity(230U);
    msg.flags = 237U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.731406494109;
    tmp_msg_0.speed_units = 148U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.335279567411;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.392394994098;
    msg.lon = 0.0835322272019;
    msg.radius = 0.354798855098;

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
    msg.setTimeStamp(0.0298151838084);
    msg.setSource(59135U);
    msg.setSourceEntity(242U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(175U);
    msg.flags = 131U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.877402243302;
    tmp_msg_0.speed_units = 86U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0803429065199;
    tmp_msg_1.z_units = 146U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.964214388646;
    msg.lon = 0.905906714644;
    msg.radius = 0.0775039677584;

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
    msg.setTimeStamp(0.448566287608);
    msg.setSource(54839U);
    msg.setSourceEntity(146U);
    msg.setDestination(40634U);
    msg.setDestinationEntity(217U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.00547247066666;
    tmp_msg_0.speed_units = 139U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.956867413583;
    tmp_msg_1.z_units = 2U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.166356267055;
    msg.lon = 0.373639642087;
    msg.radius = 0.231333020725;

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
    msg.setTimeStamp(0.581374447068);
    msg.setSource(64063U);
    msg.setSourceEntity(106U);
    msg.setDestination(34566U);
    msg.setDestinationEntity(15U);
    msg.control_src = 10531U;
    msg.control_ent = 111U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 70U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.632633632735;
    tmp_tmp_msg_0_0.speed_units = 95U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.665521530157;
    tmp_tmp_msg_0_1.z_units = 105U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.78371669646;
    tmp_msg_0.lon = 0.963588650524;
    tmp_msg_0.radius = 0.486781752697;
    msg.reference.set(tmp_msg_0);
    msg.state = 118U;
    msg.proximity = 134U;

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
    msg.setTimeStamp(0.736095561724);
    msg.setSource(5821U);
    msg.setSourceEntity(200U);
    msg.setDestination(52989U);
    msg.setDestinationEntity(160U);
    msg.control_src = 23622U;
    msg.control_ent = 116U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 72U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.210871285092;
    tmp_tmp_msg_0_0.speed_units = 219U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.64952203118;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.701875384542;
    tmp_msg_0.lon = 0.0116295614181;
    tmp_msg_0.radius = 0.019395435699;
    msg.reference.set(tmp_msg_0);
    msg.state = 231U;
    msg.proximity = 206U;

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
    msg.setTimeStamp(0.528398582563);
    msg.setSource(5595U);
    msg.setSourceEntity(39U);
    msg.setDestination(12404U);
    msg.setDestinationEntity(178U);
    msg.control_src = 48412U;
    msg.control_ent = 28U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 52U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.700803976387;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.113129041777;
    tmp_tmp_msg_0_1.z_units = 186U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.790934444015;
    tmp_msg_0.lon = 0.935420561257;
    tmp_msg_0.radius = 0.0700449830263;
    msg.reference.set(tmp_msg_0);
    msg.state = 106U;
    msg.proximity = 186U;

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
    msg.setTimeStamp(0.262115537448);
    msg.setSource(22939U);
    msg.setSourceEntity(213U);
    msg.setDestination(12721U);
    msg.setDestinationEntity(87U);
    msg.ax_cmd = 0.831638262991;
    msg.ay_cmd = 0.748514406053;
    msg.az_cmd = 0.239600904758;
    msg.ax_des = 0.617182597477;
    msg.ay_des = 0.78907530752;
    msg.az_des = 0.899576016512;
    msg.virt_err_x = 0.364388748094;
    msg.virt_err_y = 0.39307411679;
    msg.virt_err_z = 0.705141232605;
    msg.surf_fdbk_x = 0.930663345875;
    msg.surf_fdbk_y = 0.484504260897;
    msg.surf_fdbk_z = 0.626002586995;
    msg.surf_unkn_x = 0.625265591769;
    msg.surf_unkn_y = 0.651593702867;
    msg.surf_unkn_z = 0.628689301273;
    msg.ss_x = 0.745465796347;
    msg.ss_y = 0.884314837087;
    msg.ss_z = 0.756135983092;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MKAHUKZRBXEXRMVNHCFETNCGGYMBXOHMKYMUIOVGSGBDOKYLFXREQGXJTYFOESWADIYZWSWZFFEEMOLXVRQRVHOFAWGCPZXTQSXYJAFMHICDHULQVJWJDJLLDBSMTZBVQKXYAVOJCCVEKIOALABQBGHIUDLCGYASNNJDNPZUMU");
    tmp_msg_0.dist = 0.853551273712;
    tmp_msg_0.err = 0.786329860198;
    tmp_msg_0.ctrl_imp = 0.308491298773;
    tmp_msg_0.rel_dir_x = 0.167293015171;
    tmp_msg_0.rel_dir_y = 0.540525805817;
    tmp_msg_0.rel_dir_z = 0.232447064221;
    tmp_msg_0.err_x = 0.889162994423;
    tmp_msg_0.err_y = 0.649991858935;
    tmp_msg_0.err_z = 0.116813851232;
    tmp_msg_0.rf_err_x = 0.492075742175;
    tmp_msg_0.rf_err_y = 0.517771804141;
    tmp_msg_0.rf_err_z = 0.969454909542;
    tmp_msg_0.rf_err_vx = 0.228962146265;
    tmp_msg_0.rf_err_vy = 0.822094226918;
    tmp_msg_0.rf_err_vz = 0.980330658261;
    tmp_msg_0.ss_x = 0.753550348149;
    tmp_msg_0.ss_y = 0.158500813674;
    tmp_msg_0.ss_z = 0.537425986352;
    tmp_msg_0.virt_err_x = 0.686564140743;
    tmp_msg_0.virt_err_y = 0.00267828177857;
    tmp_msg_0.virt_err_z = 0.700076323754;
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
    msg.setTimeStamp(0.638435631393);
    msg.setSource(28274U);
    msg.setSourceEntity(42U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(80U);
    msg.ax_cmd = 0.55168827424;
    msg.ay_cmd = 0.580733405353;
    msg.az_cmd = 0.43490940509;
    msg.ax_des = 0.756540841965;
    msg.ay_des = 0.518341448623;
    msg.az_des = 0.0690532955018;
    msg.virt_err_x = 0.783552297629;
    msg.virt_err_y = 0.936938997432;
    msg.virt_err_z = 0.0613567059743;
    msg.surf_fdbk_x = 0.0836267835981;
    msg.surf_fdbk_y = 0.726174847611;
    msg.surf_fdbk_z = 0.474458038557;
    msg.surf_unkn_x = 0.513545585565;
    msg.surf_unkn_y = 0.854805718641;
    msg.surf_unkn_z = 0.6812400695;
    msg.ss_x = 0.776778079123;
    msg.ss_y = 0.13265751286;
    msg.ss_z = 0.100591390563;

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
    msg.setTimeStamp(0.343549161342);
    msg.setSource(59745U);
    msg.setSourceEntity(210U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(173U);
    msg.ax_cmd = 0.487037108864;
    msg.ay_cmd = 0.365035550167;
    msg.az_cmd = 0.75095106417;
    msg.ax_des = 0.841348736728;
    msg.ay_des = 0.89207956401;
    msg.az_des = 0.526989077701;
    msg.virt_err_x = 0.83726155298;
    msg.virt_err_y = 0.259996071977;
    msg.virt_err_z = 0.742970722713;
    msg.surf_fdbk_x = 0.0146311748034;
    msg.surf_fdbk_y = 0.196639138329;
    msg.surf_fdbk_z = 0.251326065581;
    msg.surf_unkn_x = 0.234385393641;
    msg.surf_unkn_y = 0.959158255873;
    msg.surf_unkn_z = 0.597515475864;
    msg.ss_x = 0.849384463066;
    msg.ss_y = 0.872390514341;
    msg.ss_z = 0.893037966824;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YYNAWCHDCVUFTJQCRIAWPEMHGZMZIVPYVXJYPBEPPLKKKUZWAMWUJYLMGTGIYKSWLYTHSQUNVBDTJFHSNBKXZXRSURBFQHOEROMDWYVAFXOQWQRZLEIVPDABIWUFVQOJSDHFMLMEYZDE");
    tmp_msg_0.dist = 0.698206134045;
    tmp_msg_0.err = 0.0205243993493;
    tmp_msg_0.ctrl_imp = 0.339984505515;
    tmp_msg_0.rel_dir_x = 0.200977266587;
    tmp_msg_0.rel_dir_y = 0.525445756404;
    tmp_msg_0.rel_dir_z = 0.279636199207;
    tmp_msg_0.err_x = 0.490490920703;
    tmp_msg_0.err_y = 0.0418463455303;
    tmp_msg_0.err_z = 0.512605873769;
    tmp_msg_0.rf_err_x = 0.471321961335;
    tmp_msg_0.rf_err_y = 0.650834845376;
    tmp_msg_0.rf_err_z = 0.194224464608;
    tmp_msg_0.rf_err_vx = 0.858162614922;
    tmp_msg_0.rf_err_vy = 0.85377324672;
    tmp_msg_0.rf_err_vz = 0.523241598974;
    tmp_msg_0.ss_x = 0.250837431163;
    tmp_msg_0.ss_y = 0.151559477239;
    tmp_msg_0.ss_z = 0.573689066389;
    tmp_msg_0.virt_err_x = 0.6236678603;
    tmp_msg_0.virt_err_y = 0.408210308778;
    tmp_msg_0.virt_err_z = 0.973740730862;
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
    msg.setTimeStamp(0.362714757613);
    msg.setSource(57828U);
    msg.setSourceEntity(99U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(238U);
    msg.s_id.assign("BEKMOHGWUEWPAUQALYXYQWHWLUYCIMOIKOZEYEIPORUZHJEXJDDNVUUFCBRAJMHPLCNSLFBCFNOJQDCXOEEUMBQFNJSGYJVICLSTHADUVZVDOPRGLFJCKUBJYBTFLKWFTNVPYHQVPXBGD");
    msg.dist = 0.0794092423829;
    msg.err = 0.908547058228;
    msg.ctrl_imp = 0.973891241598;
    msg.rel_dir_x = 0.0519503097186;
    msg.rel_dir_y = 0.333308601458;
    msg.rel_dir_z = 0.258575812374;
    msg.err_x = 0.626669417141;
    msg.err_y = 0.680458388802;
    msg.err_z = 0.90313282966;
    msg.rf_err_x = 0.979580408969;
    msg.rf_err_y = 0.720806693076;
    msg.rf_err_z = 0.576158485936;
    msg.rf_err_vx = 0.608714881128;
    msg.rf_err_vy = 0.924372130479;
    msg.rf_err_vz = 0.927484006792;
    msg.ss_x = 0.783432397053;
    msg.ss_y = 0.29725988803;
    msg.ss_z = 0.530313599136;
    msg.virt_err_x = 0.0354552001204;
    msg.virt_err_y = 0.0913944220069;
    msg.virt_err_z = 0.389515194045;

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
    msg.setTimeStamp(0.445683231002);
    msg.setSource(41364U);
    msg.setSourceEntity(0U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(124U);
    msg.s_id.assign("ENXHXZUCUYMXPC");
    msg.dist = 0.76634970322;
    msg.err = 0.624587678865;
    msg.ctrl_imp = 0.507679574793;
    msg.rel_dir_x = 0.064469915489;
    msg.rel_dir_y = 0.32370315501;
    msg.rel_dir_z = 0.940350209672;
    msg.err_x = 0.990870065277;
    msg.err_y = 0.210037931797;
    msg.err_z = 0.516968437416;
    msg.rf_err_x = 0.820547086159;
    msg.rf_err_y = 0.690707411556;
    msg.rf_err_z = 0.484946276702;
    msg.rf_err_vx = 0.504190936567;
    msg.rf_err_vy = 0.956460450198;
    msg.rf_err_vz = 0.959967451646;
    msg.ss_x = 0.0482359908679;
    msg.ss_y = 0.625710890279;
    msg.ss_z = 0.629705420457;
    msg.virt_err_x = 0.888069534041;
    msg.virt_err_y = 0.339643608876;
    msg.virt_err_z = 0.771221056344;

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
    msg.setTimeStamp(0.479113365576);
    msg.setSource(8016U);
    msg.setSourceEntity(181U);
    msg.setDestination(13272U);
    msg.setDestinationEntity(189U);
    msg.s_id.assign("SUSURTXEIJELUVMSWBGTEVARQRZJRBZYNTDEZQTOYCMZKBJXE");
    msg.dist = 0.575435841615;
    msg.err = 0.448349144238;
    msg.ctrl_imp = 0.690218143051;
    msg.rel_dir_x = 0.264573873128;
    msg.rel_dir_y = 0.798872281848;
    msg.rel_dir_z = 0.875452324825;
    msg.err_x = 0.607222263678;
    msg.err_y = 0.725490890664;
    msg.err_z = 0.327192483555;
    msg.rf_err_x = 0.704350749092;
    msg.rf_err_y = 0.200791056987;
    msg.rf_err_z = 0.333517705161;
    msg.rf_err_vx = 0.875492187062;
    msg.rf_err_vy = 0.522639291412;
    msg.rf_err_vz = 0.498025297174;
    msg.ss_x = 0.423834017607;
    msg.ss_y = 0.0698950771538;
    msg.ss_z = 0.376265491853;
    msg.virt_err_x = 0.337515966679;
    msg.virt_err_y = 0.498728830638;
    msg.virt_err_z = 0.108530246292;

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
    msg.setTimeStamp(0.350504404372);
    msg.setSource(64222U);
    msg.setSourceEntity(209U);
    msg.setDestination(25967U);
    msg.setDestinationEntity(210U);
    msg.timeout = 8285U;
    msg.rpm = 0.771617952605;
    msg.direction = 147U;
    msg.custom.assign("JUAKFPPAJZGDZLENWSAWMNXANYDZSWBVLLJXFBKJIIKNLSECSHHUFKUWJTCFGYHYEOBVYXLPJHIRGNMIGLEZDXQFDPXDTISJPEMJPGPCAIQOFPYRQMAMTTPQZMVXVGPQOKLYATVBCRZVMLOCXUWGVVHRIOTDZRHHMVUNRCHBDCTKCBASVSRGUEBRWKSKEMXXNHIABTYWJGQLJFZEOIKOUEHKONRECQU");

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
    msg.setTimeStamp(0.47854761408);
    msg.setSource(10351U);
    msg.setSourceEntity(143U);
    msg.setDestination(29360U);
    msg.setDestinationEntity(70U);
    msg.timeout = 41960U;
    msg.rpm = 0.0604075508056;
    msg.direction = 186U;
    msg.custom.assign("RAOOTXCOMYLENXMHKWEQFYQNKOJGKGTQMWYEXVMNUWMAQHGGYOXDUKHFPIEIRJHVQCKEBYZEAHRPNWEQYGTBRSZWPFCSXVRSAHULBFYRODDPRSIJSLTNCWTXMLFULMVWNPEDJKHATJPXDKLBNBGUCVZFZRFD");

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
    msg.setTimeStamp(0.724487353979);
    msg.setSource(23034U);
    msg.setSourceEntity(225U);
    msg.setDestination(3452U);
    msg.setDestinationEntity(63U);
    msg.timeout = 28412U;
    msg.rpm = 0.563983055682;
    msg.direction = 8U;
    msg.custom.assign("JECMFLGVYRMYAGRYJHYMKXXNXWNUQNOJAZZPTOITDTLNSTEIMHQBJEJORTJWRYDLRFRRQBHEJECDSXFAIBMJIBBALAWGDNYBPKPEOODFCGULQAFMIUGOBMWGRKAHTATNXP");

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
    msg.setTimeStamp(0.905706177435);
    msg.setSource(17581U);
    msg.setSourceEntity(83U);
    msg.setDestination(11611U);
    msg.setDestinationEntity(243U);
    msg.formation_name.assign("YCVQTIOEBTUDZGGVHPKNVEZCFCMFAYPKBHUQBLUCHMFSBRPYJLYQFBBWJDPFSDRCVSRZLIRGUXUVIBTNHCMEOZJDKGHJFZEAXLOCLWBSPJKHNYNYMDJCAOTLRLKWPNTHHRGLXSPWIQIRZUFYXYPRQEYQSIUZEKVXCZLEYDZQTRAWXODDGMLJHGDWIGMHRIBZTWIQOKOCXABNNQEONWVWDOMWETFAXUSASGPATV");
    msg.type = 69U;
    msg.op = 125U;
    msg.group_name.assign("GAMXYVFQHHGWHBWDZIUONJJCXSSUNUAGFOLFWRPYJULLHECHXQCKEPYBSYVBYTLKZMLZPJGBMJNOOXIEKBXOYDFMXJWUZOAASDLPFNKAVEPAFUEPTKSYGDZSTWBYDGHYRRDAVPRBVUJIHOQDTRXGZNZG");
    msg.plan_id.assign("RCFTXRZHZAVZLWOHASHGEFCXNBCHAICEKBLQYI");
    msg.description.assign("KDGXFXGGQWJZZYRMRLGPUSIKIQSODEQQHEMJCUOQHNUNUWKECJRAYVILGMLITOBDBROAW");
    msg.reference_frame = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14708U;
    tmp_msg_0.off_x = 0.559885497998;
    tmp_msg_0.off_y = 0.999424371311;
    tmp_msg_0.off_z = 0.0234995296792;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.704669770578;
    msg.leader_speed_min = 0.0998823458784;
    msg.leader_speed_max = 0.737873804401;
    msg.leader_alt_min = 0.311886735453;
    msg.leader_alt_max = 0.389196091656;
    msg.pos_sim_err_lim = 0.513046791754;
    msg.pos_sim_err_wrn = 0.326330055041;
    msg.pos_sim_err_timeout = 63833U;
    msg.converg_max = 0.369068856906;
    msg.converg_timeout = 40618U;
    msg.comms_timeout = 32730U;
    msg.turb_lim = 0.306515443361;
    msg.custom.assign("PALLPLRKLEEXQFAAUFSWBCXTQWKDXYBREERVBQJNODDJBTAGCWHBBOOTMECBXRDSTZADFADQSVGOIDTFINAHPXOQMJVNBLWHOANURFHVKRMOTJLMKMNFXTSGKQFJZXWZDENUZPZIEDNOKZCRXUWMQTVIUPPRUGOEYZNBMHUZJYYZSYYPSSSNQUHXGTRCEFWKIIISDJLYVJVLKCIQG");

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
    msg.setTimeStamp(0.0108910758459);
    msg.setSource(27804U);
    msg.setSourceEntity(149U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(7U);
    msg.formation_name.assign("CCJXUOOECMDBVBAJBBR");
    msg.type = 173U;
    msg.op = 172U;
    msg.group_name.assign("TLNWDKTOXAGIKCVCFPMIUXRGKUMBSWRCCRZLWHDFRRDMIO");
    msg.plan_id.assign("FVNECRFZEADCXQJTMLGFQTHRGUEAIJWKDXNFPYRBYMLLJUOGWSTLHVLQZRSLBXNBNMVZHCYQFNAZIPGWTQSNUJEIBUTMEIAXJEHVERNYHYMGXADQJVDGLRUOYQKDTVFHLREBBAPDAMKYVGDPSZSQUSBKCFFTPUWIBKNCASUMFKNSJVWZZWPODOXCHACYXXGCJLZMI");
    msg.description.assign("BUAALLKCNAPQIUOXASDRKLDHHVUNQWADCIKSPEHMYUPSCQEZVYYOJKMRHTXMVFSXYNIJACJTIOTNCMGLGRCPRISNLPKYKFMGVXFZHEVITURGNDBSEAUWGDGWVHMXWCDSYBEWXDFKDCAWJXZBQNBFUOLBVINPJVWYEQBZRQZQHWOBGDUZFGQOWITLKFUKTPZLYOQJTIEJHCMQZEPZRYTUJYSGMXHFFVLPBRIXOLSWTCFAVZBKSEGXNJ");
    msg.reference_frame = 105U;
    msg.leader_bank_lim = 0.735217527522;
    msg.leader_speed_min = 0.791615887598;
    msg.leader_speed_max = 0.0232637258816;
    msg.leader_alt_min = 0.308926125934;
    msg.leader_alt_max = 0.178541997347;
    msg.pos_sim_err_lim = 0.00905617890662;
    msg.pos_sim_err_wrn = 0.211220053269;
    msg.pos_sim_err_timeout = 14490U;
    msg.converg_max = 0.290175405201;
    msg.converg_timeout = 7369U;
    msg.comms_timeout = 12326U;
    msg.turb_lim = 0.900446080904;
    msg.custom.assign("UJWKIJQQPATWMKLRJBGKICONEKIYMQUWLCYIGLRLLAEQBWAVYMVBQGXSQCBFHURRXJDOFWOAEIXFNPJRECBMYSEJWLPASHROKITJJJOVRNDHYTMZDEVDZGWXVMUULPMXUBPNFPCETUBISTQCGNKUDOFOVTNXIGFWTLPCVAS");

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
    msg.setTimeStamp(0.915997426632);
    msg.setSource(52931U);
    msg.setSourceEntity(186U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(42U);
    msg.formation_name.assign("DFLASAPUUXGTYIEINOEARXNBXWNEOQEHRRQAPAJKVHFCSBAFIWTDGGSKXCXOJHOQVWLKMKPVBPNVKEYPFQSYJMRZHSDUCYMFNSEZSVDQFRWMNWPYQNIBGRUTTBJLGQFOGCTKXBNBRTMLIHLWGXCVOTXVZYGIUETCLABSAPLKDZKFAGBYVVQFOMIQMLCUUHEMZCMDOFPIIIEDY");
    msg.type = 237U;
    msg.op = 199U;
    msg.group_name.assign("BKTDRXCXCLCCMPPFQHYWIDRQLNO");
    msg.plan_id.assign("OGJHRQUQDYLXHMZFPQALFOEUTXKCVQRSBKOJOLMCPRKIPJMWQSRUAIHVBEJZXTWAIOHRVMNGZOKLEZVEDSTSVZUGWNFGUGNIBIASNWKZNQODHJCRHWYMGPMNUOAVQWKLGBYFXYWUBWIDNHAEBCMNTRYHSRIAIF");
    msg.description.assign("RAGLTXWBYSGFWJBOXBKDPPBEIULXEBYTDBGXNNI");
    msg.reference_frame = 111U;
    msg.leader_bank_lim = 0.157907370518;
    msg.leader_speed_min = 0.0916456539028;
    msg.leader_speed_max = 0.228087660735;
    msg.leader_alt_min = 0.342300337209;
    msg.leader_alt_max = 0.599463511185;
    msg.pos_sim_err_lim = 0.32223684885;
    msg.pos_sim_err_wrn = 0.792671601656;
    msg.pos_sim_err_timeout = 1633U;
    msg.converg_max = 0.00188916228523;
    msg.converg_timeout = 50614U;
    msg.comms_timeout = 46952U;
    msg.turb_lim = 0.639796952415;
    msg.custom.assign("JDHDVTMKRJZCVRCGHNBFTYRPIYWOMKOGKFMCVUAQRDLOIWNNFHAGKTE");

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
    msg.setTimeStamp(0.00953922518762);
    msg.setSource(20996U);
    msg.setSourceEntity(209U);
    msg.setDestination(32578U);
    msg.setDestinationEntity(61U);
    msg.timeout = 16208U;
    msg.lat = 0.474903278233;
    msg.lon = 0.842649972506;
    msg.z = 0.746998314143;
    msg.z_units = 7U;
    msg.speed = 0.602342370498;
    msg.speed_units = 206U;
    msg.custom.assign("CQTPJKDKJULC");

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
    msg.setTimeStamp(0.831543233513);
    msg.setSource(10125U);
    msg.setSourceEntity(210U);
    msg.setDestination(6333U);
    msg.setDestinationEntity(177U);
    msg.timeout = 60285U;
    msg.lat = 0.71128329423;
    msg.lon = 0.772314920235;
    msg.z = 0.693332304086;
    msg.z_units = 9U;
    msg.speed = 0.39012010337;
    msg.speed_units = 159U;
    msg.custom.assign("TAUKYBMQXEERQGUJPSEMQFBMFIDXGLSWCLUDIWRQVHAOPKWUIVCDHERCSDJLIJOIFKCJWLSZPYNTIEXKPPUHTVENAGMRUREIXHKHFTYNKHBOV");

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
    msg.setTimeStamp(0.36565411106);
    msg.setSource(43227U);
    msg.setSourceEntity(129U);
    msg.setDestination(25506U);
    msg.setDestinationEntity(88U);
    msg.timeout = 1245U;
    msg.lat = 0.129157683681;
    msg.lon = 0.124928997777;
    msg.z = 0.300089096325;
    msg.z_units = 246U;
    msg.speed = 0.605002921422;
    msg.speed_units = 248U;
    msg.custom.assign("BAHYFQMWPFFQTYARPYBJCAJHNBWIAXUGZDZWULHSCSNRBTKCXMTPCFNAKQSKHREQBDUHKOBZJQJYYDHFNPOLTXQDGEODMNNYKEIKQCUQQGPLCVRPZOIXRZGEIEZXKGPOOAXSUYURNJHYMRCDXJDSVTVPIUGRBAJIXFVIESAVBMFWOOTFGSLPVMRMEETQXCCTZNWJWPVSXUVAYZAKMGLHDLEWBHOFNZVLMUWSJJGKURWELOBNITFZWITVYH");

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
    msg.setTimeStamp(0.495285368473);
    msg.setSource(38299U);
    msg.setSourceEntity(62U);
    msg.setDestination(13305U);
    msg.setDestinationEntity(237U);
    msg.timeout = 22901U;
    msg.lat = 0.242942262268;
    msg.lon = 0.601937163416;
    msg.z = 0.224628147553;
    msg.z_units = 223U;
    msg.speed = 0.046443126149;
    msg.speed_units = 71U;
    msg.custom.assign("KLGWTZLPWXMZUZCNZOXSFAHWOKGZBNFCNVZDIRVHRTUECRBVIDMTGQAJBMKWUCAAXUADVNTSNZHTOHWZHRTPAJPDQKTGHYCFBLRISOFXYTOJJFYZSLRFUEQICLOJXRUKNLJMGYFYQXYSQXNPJDUJRQELPJSWVKSPQGWADPJMPQAHXQYQCYEVVEKXEBPBKVXLIGWOHHDVWNECSVBIOSIKKE");

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
    msg.setTimeStamp(0.419582481324);
    msg.setSource(61906U);
    msg.setSourceEntity(99U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(194U);
    msg.timeout = 54975U;
    msg.lat = 0.619168732712;
    msg.lon = 0.0504965087513;
    msg.z = 0.670375410747;
    msg.z_units = 127U;
    msg.speed = 0.350259090095;
    msg.speed_units = 195U;
    msg.custom.assign("MMYJFSPFKSCJMFXDKJHEGTHRFAUQJNHMCRFFSBWDCTVBGKWOUPVOAGZRXHJTRPZNIKUTQOXGXKOCDGKDWLOYUVHGANCXRNSCQIZSOPHKRMRBLGGQQPUGWNRLZYW");

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
    msg.setTimeStamp(0.0846766834052);
    msg.setSource(56478U);
    msg.setSourceEntity(156U);
    msg.setDestination(3203U);
    msg.setDestinationEntity(102U);
    msg.timeout = 13448U;
    msg.lat = 0.236398306641;
    msg.lon = 0.629929226985;
    msg.z = 0.155087046762;
    msg.z_units = 83U;
    msg.speed = 0.066556275953;
    msg.speed_units = 179U;
    msg.custom.assign("USTOLOJGOLUBVOLOKGWJPOGJJMTVHLFQT");

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
    msg.setTimeStamp(0.043152163481);
    msg.setSource(217U);
    msg.setSourceEntity(91U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(53U);
    msg.arrival_time = 0.346331145552;
    msg.lat = 0.314037993096;
    msg.lon = 0.90776328773;
    msg.z = 0.512909593949;
    msg.z_units = 53U;
    msg.travel_z = 0.0777136873884;
    msg.travel_z_units = 122U;
    msg.delayed = 100U;

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
    msg.setTimeStamp(0.880468252529);
    msg.setSource(53487U);
    msg.setSourceEntity(41U);
    msg.setDestination(58498U);
    msg.setDestinationEntity(200U);
    msg.arrival_time = 0.218960403998;
    msg.lat = 0.797888254465;
    msg.lon = 0.77911190735;
    msg.z = 0.319510439065;
    msg.z_units = 66U;
    msg.travel_z = 0.346615146382;
    msg.travel_z_units = 166U;
    msg.delayed = 125U;

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
    msg.setTimeStamp(0.954246410364);
    msg.setSource(7553U);
    msg.setSourceEntity(110U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(168U);
    msg.arrival_time = 0.115051484476;
    msg.lat = 0.272268338831;
    msg.lon = 0.00138829412856;
    msg.z = 0.18169975972;
    msg.z_units = 218U;
    msg.travel_z = 0.0413415290009;
    msg.travel_z_units = 178U;
    msg.delayed = 44U;

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
    msg.setTimeStamp(0.751800791287);
    msg.setSource(2564U);
    msg.setSourceEntity(40U);
    msg.setDestination(32126U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.453843914354;
    msg.lon = 0.939526222141;
    msg.z = 0.905806064421;
    msg.z_units = 155U;
    msg.speed = 0.633316270389;
    msg.speed_units = 164U;
    msg.bearing = 0.519141790056;
    msg.cross_angle = 0.327804016122;
    msg.width = 0.155787035791;
    msg.length = 0.831309965163;
    msg.coff = 49U;
    msg.angaperture = 0.026036974442;
    msg.range = 45312U;
    msg.overlap = 2U;
    msg.flags = 90U;
    msg.custom.assign("YOYGGUVVNVJSQMWYFRCXPTQFV");

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
    msg.setTimeStamp(0.893230628374);
    msg.setSource(36263U);
    msg.setSourceEntity(190U);
    msg.setDestination(49954U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.82299620845;
    msg.lon = 0.860070746034;
    msg.z = 0.245639602812;
    msg.z_units = 145U;
    msg.speed = 0.226497708967;
    msg.speed_units = 246U;
    msg.bearing = 0.0593673906371;
    msg.cross_angle = 0.000608049900753;
    msg.width = 0.847096809087;
    msg.length = 0.706713047719;
    msg.coff = 138U;
    msg.angaperture = 0.826930458104;
    msg.range = 8748U;
    msg.overlap = 230U;
    msg.flags = 81U;
    msg.custom.assign("MKWJLUWUHVVTCNBJANOBWJOTYWGWZZRXIMCUGZQCDJOBLHQYRETGLZAS");

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
    msg.setTimeStamp(0.954196361239);
    msg.setSource(42137U);
    msg.setSourceEntity(81U);
    msg.setDestination(54668U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.122195842594;
    msg.lon = 0.290693155789;
    msg.z = 0.801321556562;
    msg.z_units = 12U;
    msg.speed = 0.759069895123;
    msg.speed_units = 181U;
    msg.bearing = 0.549435324424;
    msg.cross_angle = 0.601426766075;
    msg.width = 0.746708410534;
    msg.length = 0.116210543341;
    msg.coff = 233U;
    msg.angaperture = 0.461437828532;
    msg.range = 61141U;
    msg.overlap = 190U;
    msg.flags = 30U;
    msg.custom.assign("FVODBAWSINOUQWGHOZTXCJAOWEHDBYPFGRBSXKCKMESHIRNZEVISQNXBFYLMVSEGFLAZNEDLOKJMDBKCYHYWFTTBJAHAJGWWWZOZLIEZVESQOPGZRRTXMGGHULRPQBXKCQYCWDVPZUJIDKJAULIFUSPCDGLOUGNKKKIDATXASSTHQVHGALVQPMBBRFZDPQMR");

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
    msg.setTimeStamp(0.196191855156);
    msg.setSource(28658U);
    msg.setSourceEntity(17U);
    msg.setDestination(23563U);
    msg.setDestinationEntity(129U);
    msg.timeout = 62512U;
    msg.lat = 0.332167618816;
    msg.lon = 0.0836809014114;
    msg.z = 0.320821381074;
    msg.z_units = 49U;
    msg.speed = 0.471020651493;
    msg.speed_units = 237U;
    msg.syringe0 = 196U;
    msg.syringe1 = 77U;
    msg.syringe2 = 125U;
    msg.custom.assign("KPUOEAOJTUNODRYYIEHFDQDDMFTVKOECPHOGOHVMTHSILGJZALXLPJENDWHBKKKQVFFLZYVWYSUPLRTPZJUEYSJYHPWOMWCNSECGWDMBCYXBKCUFPGSNRQXWKNEAHWXFYIPFHYPSNBEILZIQVABQNVBKGBCDBOFWBMRNSGTPXJASJZTKVGLLADUMQRXEBRISJZQTIDF");

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
    msg.setTimeStamp(0.565099105773);
    msg.setSource(39066U);
    msg.setSourceEntity(247U);
    msg.setDestination(230U);
    msg.setDestinationEntity(61U);
    msg.timeout = 24204U;
    msg.lat = 0.105289306171;
    msg.lon = 0.511795346365;
    msg.z = 0.140272980518;
    msg.z_units = 106U;
    msg.speed = 0.202800235047;
    msg.speed_units = 54U;
    msg.syringe0 = 50U;
    msg.syringe1 = 154U;
    msg.syringe2 = 59U;
    msg.custom.assign("HNXQTOOJJAFSQAQIGLOWBYEUBMKRVWKSCTFXVKVBFWUWCXLERWLZDHYHEIRZIKSXBBNNUJYQESIKWTKGMRJDDDDYLTMGJPNPSQUPGVO");

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
    msg.setTimeStamp(0.221912752802);
    msg.setSource(56108U);
    msg.setSourceEntity(63U);
    msg.setDestination(63299U);
    msg.setDestinationEntity(246U);
    msg.timeout = 53791U;
    msg.lat = 0.179992516659;
    msg.lon = 0.849309096855;
    msg.z = 0.925985701481;
    msg.z_units = 16U;
    msg.speed = 0.429257211713;
    msg.speed_units = 236U;
    msg.syringe0 = 223U;
    msg.syringe1 = 26U;
    msg.syringe2 = 55U;
    msg.custom.assign("ALQERZXHSAFPHGERYZLMBEMNYCYTBBZNJUAGRHQWZPZGTTYRCXYGOLYSWKOHFRNWCBOFEZIGMZBFPXBVCJYUGQLPJGFHDVKMJDBZMLJFJQTIALNPJQIVAKCGQVOGAIUWAXSMSLKRSRVVSRVXZEWCNZAYDMJHENUQXDDTTVSAABOIUPDPMOPQSDWKWNDHKWCLRBXIYVBKSUM");

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
    msg.setTimeStamp(0.936102055018);
    msg.setSource(23535U);
    msg.setSourceEntity(75U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.0592071085294);
    msg.setSource(43235U);
    msg.setSourceEntity(47U);
    msg.setDestination(63932U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.14246420784);
    msg.setSource(42906U);
    msg.setSourceEntity(130U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.321620028986);
    msg.setSource(2211U);
    msg.setSourceEntity(82U);
    msg.setDestination(3556U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.956338290295;
    msg.lon = 0.598108691894;
    msg.z = 0.509325954667;
    msg.z_units = 246U;
    msg.speed = 0.00713936635311;
    msg.speed_units = 55U;
    msg.takeoff_pitch = 0.0592311313078;
    msg.custom.assign("ZUSKLHFEFZRGYFMBUZQAFRTAPDKPXDAMMNSBFTMDBYZOCATSXQWVZEHSDVFLCOGLTZEKQASQVNAYAIWRCDJNTSLPONFOXJULKJNJGOQHLRUCMVKLJOQVXBLCP");

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
    msg.setTimeStamp(0.706491850491);
    msg.setSource(55893U);
    msg.setSourceEntity(38U);
    msg.setDestination(8705U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.563124031792;
    msg.lon = 0.867025534333;
    msg.z = 0.830438525288;
    msg.z_units = 115U;
    msg.speed = 0.683199340631;
    msg.speed_units = 51U;
    msg.takeoff_pitch = 0.953247906603;
    msg.custom.assign("UWMVJOPMXOAMGXWYSUMWYQSHZTQWYYMCNLBJFJTFCJGLNEXJRLEPBAEPRRTORAZZOFOUVAETZNURNMYLQKRJIUUISDYDOUFDFBLSKDJYKCCHJTBHFAAYPDGCDVKSWCTKRI");

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
    msg.setTimeStamp(0.312813402959);
    msg.setSource(16375U);
    msg.setSourceEntity(120U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.250370082885;
    msg.lon = 0.26565669682;
    msg.z = 0.499922936128;
    msg.z_units = 170U;
    msg.speed = 0.265838088873;
    msg.speed_units = 211U;
    msg.takeoff_pitch = 0.401943986166;
    msg.custom.assign("PCNAUTOJOXGTKIOSIDOHKTSPBJVPTLGPDHQQYCDEXFKIWBSMWOKAZZRMULMEGTAPDXERFYKKQTIACOVDCQJALYIRQFDXGZDCKWDJWBHHIYFXLUSJUOZVSGNYDFIFERBSNKZFGCCGVURWZMMSOOXHCAXTSIJQLWRLVWBPLNVZAMQQJFCAYGTWEFNZYEW");

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
    msg.setTimeStamp(0.795502559994);
    msg.setSource(9636U);
    msg.setSourceEntity(67U);
    msg.setDestination(8754U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.150711116871;
    msg.lon = 0.0855620123011;
    msg.z = 0.44257541306;
    msg.z_units = 97U;
    msg.speed = 0.826896379513;
    msg.speed_units = 239U;
    msg.abort_z = 0.441265000842;
    msg.bearing = 0.666326294489;
    msg.glide_slope = 135U;
    msg.glide_slope_alt = 0.383237161815;
    msg.custom.assign("QOUHDQCHZTUQWQKVMPRRMIKGLZKRYIKXGFSDGWJFQSWHUYCEEUYJHDYUCXBXVNOBVPFXVPLTNBDBHTCKWVATAOUPKGRLXVZPJYNBKXIXTIURAPOQNTAFDMQDHAHWORVJJCINMWJBGQOENLVPCIFZFKWJSGUMNIBJZHLSZQCYNATAKSHMSSRNIGDYCRFLTSXFDOISEVAPEZXUPFFGODWC");

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
    msg.setTimeStamp(0.518156627859);
    msg.setSource(62503U);
    msg.setSourceEntity(120U);
    msg.setDestination(47666U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.464330345078;
    msg.lon = 0.838107584339;
    msg.z = 0.148593057384;
    msg.z_units = 74U;
    msg.speed = 0.882797680931;
    msg.speed_units = 160U;
    msg.abort_z = 0.75950730474;
    msg.bearing = 0.0427312444366;
    msg.glide_slope = 116U;
    msg.glide_slope_alt = 0.0821502602307;
    msg.custom.assign("HSZGKJLEASORGGHABQLVIKLXRAMYYLYIRXUECCCPYXKCTHRJMPKIUSIGNROLDBXAAEOZCZQVFLTPRQCQLQRFNNQJIDBQTJMPDNTDBGWCATMOHQRYPYYVFOTOCMJCFZWIAEVEFPRDHOBIUQVUQSRTCHYYLDBIMWG");

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
    msg.setTimeStamp(0.339637866469);
    msg.setSource(51021U);
    msg.setSourceEntity(104U);
    msg.setDestination(65152U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.103452710208;
    msg.lon = 0.193720677162;
    msg.z = 0.542273121141;
    msg.z_units = 177U;
    msg.speed = 0.588990476422;
    msg.speed_units = 190U;
    msg.abort_z = 0.585219719373;
    msg.bearing = 0.977925439389;
    msg.glide_slope = 115U;
    msg.glide_slope_alt = 0.493270852048;
    msg.custom.assign("ZCAKYZMLWTQXWOVRCARGRVJLUIEDPMEPMEUUAXZWXYNXTGTRMWYCSITJASOHYERLTLZGIGPHTSFBPOHSDGMIHQYVKQUZFCJYDLRCODENBOMUGVMBVJOJVHNEJRBEBQSPXIZTXRSKXAHBLFLUJYFNOGDNFTWZJSTNNLCGPHCJQKYOIUMQKWUHZEWLBSBXIFVOFDESDDAMAKQKFCPYHTQACXKDXDFWPPUSQHQBZBNVEIKRGUAVPOINFWCMLJKIAW");

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
    msg.setTimeStamp(0.796367669358);
    msg.setSource(16401U);
    msg.setSourceEntity(122U);
    msg.setDestination(42330U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.662005960465;
    msg.lon = 0.675598069348;
    msg.speed = 0.128434143625;
    msg.speed_units = 238U;
    msg.limits = 44U;
    msg.max_depth = 0.544804897438;
    msg.min_alt = 0.678868591583;
    msg.time_limit = 0.851651595109;
    msg.controller.assign("GWRISQTPIAKCFYYNSNUDGKDEUJVZWKGLTXOYNVPDNGZSDVTCPFKXQISMEBHKAJVCVB");
    msg.custom.assign("PYTLUVZTHJDFAIRZHASQXLXXAASMLIVZJEGUCNBQZRNYCGFDMLEKMKHVSTXGCXCSXXLAKWFGFYFJYDROUABBBCOQBVVVNKSGCTOTMGZFZRYDJMOHIRVIBMNEEMVQBNOPHOOZCUZMAITUAYGWSFPXPRNUIQPHWWFVPMJBUTGGE");

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
    msg.setTimeStamp(0.968646496618);
    msg.setSource(10188U);
    msg.setSourceEntity(68U);
    msg.setDestination(7391U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.278564803805;
    msg.lon = 0.429984323275;
    msg.speed = 0.804490376932;
    msg.speed_units = 24U;
    msg.limits = 151U;
    msg.max_depth = 0.381682125501;
    msg.min_alt = 0.981411697448;
    msg.time_limit = 0.703006944072;
    msg.controller.assign("VADDZYKZZWGGGVN");
    msg.custom.assign("TRSGSXXLUVDRKJMOTDIBQBNQFEKD");

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
    msg.setTimeStamp(0.713657588405);
    msg.setSource(46367U);
    msg.setSourceEntity(23U);
    msg.setDestination(11778U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.185911844567;
    msg.lon = 0.216197591935;
    msg.speed = 0.859298829582;
    msg.speed_units = 202U;
    msg.limits = 209U;
    msg.max_depth = 0.233338142972;
    msg.min_alt = 0.45608436693;
    msg.time_limit = 0.968865957958;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.608234342435;
    tmp_msg_0.lon = 0.57985073365;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RJWMVJCCNAROVHFGPPZJYBKNCWDXAREWDHIMDGBYKHYMUQEVUZBMJXRVWIPNXKOBXXTNPKTKLQYZDGKAZUSCGELDADFGQ");
    msg.custom.assign("WOWDARSFTBVDYTQDLMIZPSIJGAVQHLPMOIXBQZGFYBZLKSIIHJDZWYGVYEPOAELRTDUHYRNNUMSPXOYWGUKRPNQKQNQEGTXNFKEKDFNXHOLQOECPECBIYAMPGCWTSXWAXXYJRMEJFGFBANUVEIOHHUFMFKSHLXDVSUPRJIXZANYIVZUJGRUWEBEWCOMTCTSQCMDLTJNHZNJKZRDLKQOMBCZGIKJVOVGDWFHUCLBQ");

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
    msg.setTimeStamp(0.649867244011);
    msg.setSource(2762U);
    msg.setSourceEntity(145U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(105U);
    msg.target.assign("LCDELHESOCKZKVCTMUUYLPATZEJRVOXMMCRNWUSKQLZOLVAXJHBGD");
    msg.max_speed = 0.903021590491;
    msg.speed_units = 228U;
    msg.lat = 0.324108672138;
    msg.lon = 0.0711449343013;
    msg.z = 0.702283742146;
    msg.z_units = 119U;
    msg.custom.assign("VKTZBQKYJJWEJZNCHJSWMEDKNHBRVSCEDYUKNEOBIIAXQVSYGZFQYYBLUMFEDSYWMGGTKUMNJULKMUAXIQGQRHOFZXIRRDLDJBOMLENEZEGAFZZASOVLPYKPDCAZKACGJYJICVCXWGRQFOLHCNNTXMISVWFOMBNTHGWJPCKDCXBWHQTPFNLMVYTHRRDGXIWXAU");

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
    msg.setTimeStamp(0.958941319937);
    msg.setSource(58894U);
    msg.setSourceEntity(169U);
    msg.setDestination(59259U);
    msg.setDestinationEntity(85U);
    msg.target.assign("JEBHCBPGMHGBDNXLKCBTNPAMSRXHITYCNPTYHMIWOHWYRSQTXJWRKJCUIFFHTFIQPFYQNUAJGJAZJMWSUBAVAKESNADISRZOBQFDLBVISXROWAERGRTUNUCDDZYMCNBTELJQTVZGWEODWUFKFLRFMUXVLZIXLGPPSMSZFHUTVVZPVQJIKBXMCRHIVEOK");
    msg.max_speed = 0.284321017381;
    msg.speed_units = 80U;
    msg.lat = 0.013719271092;
    msg.lon = 0.743851205219;
    msg.z = 0.627088717942;
    msg.z_units = 239U;
    msg.custom.assign("FVQTFGZUCVFBNPRSMDZZZAUVSBGLAXAIVXEDQHNSJGLXQOPSHIKBOUGAXGZQFKMNRMESMJLXJISIRWAMDUAXCMUYAWVHBODZVKDZJEYDBNQTHYDNNCBSCHGITBCFUMCJDOKLEQCPVXKMWYTKPGWJSUAVQEKDVFNESIHKIPAYEZWFJJTOGRKPLFPPBAJOLRFLOCGHXXJZBE");

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
    msg.setTimeStamp(0.733293393802);
    msg.setSource(32873U);
    msg.setSourceEntity(25U);
    msg.setDestination(33202U);
    msg.setDestinationEntity(223U);
    msg.target.assign("UVHMQFTJXMGAAKLGFTRBIQCIDQBOGAVPUWREBAGRTHURTHAKMVJDQSLLYCDKXQPVPKEOIHFEZYSEYFEIKJRNWDLNQFZFIOEAUCXJLZMWJCNNVUWMJUOEBQPNEREMVAGHPPPWULROHHWTVBWSXNXAIWMYYGO");
    msg.max_speed = 0.902786270644;
    msg.speed_units = 82U;
    msg.lat = 0.669296451566;
    msg.lon = 0.0399849537858;
    msg.z = 0.538413133319;
    msg.z_units = 234U;
    msg.custom.assign("LSTCEUGUEUIVRMQGAMRXLQYRALVVLECXECQSTOJSKQNFCRNDZJJEFMSJRGKHYALCELUTCIHQWBDNYRNMTXIPSNSOOGIITZZAMBQDPVGHJQZOOLDP");

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
    msg.setTimeStamp(0.786324546051);
    msg.setSource(16929U);
    msg.setSourceEntity(203U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(83U);
    msg.timeout = 46338U;
    msg.lat = 0.943013843014;
    msg.lon = 0.959053698584;
    msg.speed = 0.419065452618;
    msg.speed_units = 87U;
    msg.custom.assign("CUJPJUKOTPMFG");

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
    msg.setTimeStamp(0.904354059737);
    msg.setSource(36933U);
    msg.setSourceEntity(192U);
    msg.setDestination(33375U);
    msg.setDestinationEntity(225U);
    msg.timeout = 16783U;
    msg.lat = 0.628748193426;
    msg.lon = 0.8366112209;
    msg.speed = 0.711022718531;
    msg.speed_units = 97U;
    msg.custom.assign("JCQSOEBFDT");

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
    msg.setTimeStamp(0.0103819400331);
    msg.setSource(46504U);
    msg.setSourceEntity(48U);
    msg.setDestination(55876U);
    msg.setDestinationEntity(190U);
    msg.timeout = 37532U;
    msg.lat = 0.27100666103;
    msg.lon = 0.221022921189;
    msg.speed = 0.0567971546173;
    msg.speed_units = 74U;
    msg.custom.assign("AGHXRRWLBHTBEYGDKZIHVBWDCIGTYCXPSVNFHJUSCXYAXNQAMTDDILWNBQRNOMIZUSIFYEWJJEMQMRQNYFLIDBBJEYHAKIMPWKZSUMEZTSONPVCQTOUUDKRQFJACOZRCWPUPSKLQCSXAJSRPKFLADWWVAPRIPDHMWMETGBUQNYHHFKJWLNLTEX");

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
    msg.setTimeStamp(0.200001433941);
    msg.setSource(43065U);
    msg.setSourceEntity(220U);
    msg.setDestination(3523U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.856249131752;
    msg.lon = 0.258466609093;
    msg.z = 0.113994582174;
    msg.z_units = 56U;
    msg.radius = 0.71177313619;
    msg.duration = 14777U;
    msg.speed = 0.289016785003;
    msg.speed_units = 95U;
    msg.popup_period = 36894U;
    msg.popup_duration = 40272U;
    msg.flags = 21U;
    msg.custom.assign("QQOXTQVMULIPDVDEZMHKPTACWAROLTNVLCBRAEDAZGIUSNXOMFXOZVUKZMMSFWKUFBPJJVAEHNGZTLFNGHZBITY");

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
    msg.setTimeStamp(0.232982092395);
    msg.setSource(9571U);
    msg.setSourceEntity(140U);
    msg.setDestination(64944U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.182294708552;
    msg.lon = 0.490539052951;
    msg.z = 0.023381381329;
    msg.z_units = 43U;
    msg.radius = 0.798704281004;
    msg.duration = 1454U;
    msg.speed = 0.245644660558;
    msg.speed_units = 81U;
    msg.popup_period = 39546U;
    msg.popup_duration = 4311U;
    msg.flags = 234U;
    msg.custom.assign("XYSYDNLCIZUKPXPWEUJNBMXFBYVOENQCTWGTIRHKMKUFKSJZIBAURZKAXZMKUJNOFRBSVQSXQWNQHJXAUYBUHANDQSGAOPQVOIL");

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
    msg.setTimeStamp(0.864165254927);
    msg.setSource(40962U);
    msg.setSourceEntity(43U);
    msg.setDestination(18524U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.359070947233;
    msg.lon = 0.282562996549;
    msg.z = 0.704026788791;
    msg.z_units = 173U;
    msg.radius = 0.716405001661;
    msg.duration = 34536U;
    msg.speed = 0.156844415067;
    msg.speed_units = 48U;
    msg.popup_period = 44622U;
    msg.popup_duration = 37100U;
    msg.flags = 6U;
    msg.custom.assign("KKDCCRWWQOXVWPYGFTYWVXCQSLRNCEZWUJIQYNWMIZSUQIYJEBJIENSR");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0168054684848);
    msg.setSource(62542U);
    msg.setSourceEntity(118U);
    msg.setDestination(59849U);
    msg.setDestinationEntity(29U);
    msg.op_mode = 101U;
    msg.error_count = 127U;
    msg.error_ents.assign("TEDCPIKGDOLUUXFWKEJHBPQTWXDMVVDTOZLKUGBBCIUJMORWZWGLHPXSYITSDLWRIJQGJMGHMAOVBPPUZNFVXBCMATUJKGRSTQIHHTDBBOEFSOZHXRVFXZEQBSHVNSYAKRUN");
    msg.maneuver_type = 45255U;
    msg.maneuver_stime = 0.53508929668;
    msg.maneuver_eta = 2968U;
    msg.control_loops = 1158908611U;
    msg.flags = 223U;
    msg.last_error.assign("SWYVXKRQVUNMLRIULPGGPYFPASPTSBTFNWRVLJEMYHXAZKZIYLSBWEIEDTGCGFTEOCRHAMVTFWOYVTHVDZWEQZTKHAUPQDIXOJBNVLWTHWNUFAYEOBVHIUYKLMMLWNNBUDJQ");
    msg.last_error_time = 0.0279840101424;

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
    msg.setTimeStamp(0.951006572785);
    msg.setSource(6845U);
    msg.setSourceEntity(59U);
    msg.setDestination(42702U);
    msg.setDestinationEntity(0U);
    msg.op_mode = 149U;
    msg.error_count = 184U;
    msg.error_ents.assign("MYQPHEVLQFPKUHTABGNASSQQJYLKBTUPLTYSSDCNMMRMFAEKNPUHKYEIYXJVRG");
    msg.maneuver_type = 11243U;
    msg.maneuver_stime = 0.508871252692;
    msg.maneuver_eta = 22147U;
    msg.control_loops = 3151562100U;
    msg.flags = 94U;
    msg.last_error.assign("IPJTCLLPEETYILOAHDBMVZVMYKPSXYOVXIOADOIKENPBWMZOXJGCXBSHFSTXQHQMZWQEPCDKRBU");
    msg.last_error_time = 0.567338385737;

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
    msg.setTimeStamp(0.782688447204);
    msg.setSource(21793U);
    msg.setSourceEntity(170U);
    msg.setDestination(53184U);
    msg.setDestinationEntity(42U);
    msg.op_mode = 232U;
    msg.error_count = 206U;
    msg.error_ents.assign("VXDVACZQIYOYWHDHDSUJIOLQCOWXIEITTF");
    msg.maneuver_type = 33015U;
    msg.maneuver_stime = 0.871675213948;
    msg.maneuver_eta = 47979U;
    msg.control_loops = 2655183635U;
    msg.flags = 82U;
    msg.last_error.assign("XHEOKICUXNOPSJLWQJIKCRHAISLYWJOWNSVHCUULQVRYVUNIFKESNNLBWOGDVBBMONZMOQRDAPZEYCQVTGXPKAPUGKEIQFDFWUSPBOAQKQNZGRSYBRDVVQCWKYAHWASMIDRDITJVXRUTLPKXVMZEFXEJJFMHEPTMYQPTHTLDERUJOUCGXEPIDWJJFSNRFHNKLMGADXIGHGYTPSHCYMCTKVCOYAFABZZZTGCLAXOGRLNDMTZELBBWZBHU");
    msg.last_error_time = 0.0687621705935;

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
    msg.setTimeStamp(0.297114910407);
    msg.setSource(35544U);
    msg.setSourceEntity(141U);
    msg.setDestination(20466U);
    msg.setDestinationEntity(230U);
    msg.type = 100U;
    msg.request_id = 52528U;
    msg.command = 186U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.864317130894;
    tmp_msg_0.lon = 0.801396860847;
    tmp_msg_0.speed = 0.967453640312;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.limits = 164U;
    tmp_msg_0.max_depth = 0.730265730573;
    tmp_msg_0.min_alt = 0.209462261989;
    tmp_msg_0.time_limit = 0.320255258535;
    tmp_msg_0.controller.assign("VEFFIFCTQYPFUDWOOMKSIHRPBOJZIWXFMUELYPYRWZYCUIFUVTUWWNNBNKETLNLGUKLCMXWTCDZHOHSQMJUHKPQREPVWNPTBEQVJLSDBOTHHPPEJJIZGXGDQEKHIUCVPYAXNTGSEGSOBGUIDRRBJABGXKXUHS");
    tmp_msg_0.custom.assign("BVNJIOCAQEKANYPQJYMFKFJYALTZIPHAPEDXMWIVLKISBLMMATDKRCPKLTNOXCGDTICZHEIQEWHWXHWWLLC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39828U;
    msg.info.assign("MWXKYXMZKWDREYQANBSZRGTOCHMPHKNIXI");

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
    msg.setTimeStamp(0.107564974741);
    msg.setSource(51304U);
    msg.setSourceEntity(16U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(210U);
    msg.type = 235U;
    msg.request_id = 46494U;
    msg.command = 175U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.391649235895;
    tmp_msg_0.lon = 0.402378291901;
    tmp_msg_0.speed = 0.647122762889;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.duration = 9956U;
    tmp_msg_0.sys_a = 17490U;
    tmp_msg_0.sys_b = 1181U;
    tmp_msg_0.move_threshold = 0.529381642033;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44908U;
    msg.info.assign("VEEQPIJHUKNCIUVNTRPRRNAWDHVCGOFRXZKEPUWXCLBSTYXNPEVSRYTRIMADZAMAMWHWJADCKLJYFOAEWHQ");

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
    msg.setTimeStamp(0.76071062954);
    msg.setSource(18U);
    msg.setSourceEntity(59U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(54U);
    msg.type = 114U;
    msg.request_id = 23671U;
    msg.command = 134U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 55394U;
    tmp_msg_0.flags = 36U;
    tmp_msg_0.lat = 0.85577569895;
    tmp_msg_0.lon = 0.676598606893;
    tmp_msg_0.start_z = 0.487138841039;
    tmp_msg_0.start_z_units = 113U;
    tmp_msg_0.end_z = 0.622841357516;
    tmp_msg_0.end_z_units = 189U;
    tmp_msg_0.radius = 0.513420101834;
    tmp_msg_0.speed = 0.621691744552;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.custom.assign("DFXPBEYVXJRDSWYAYNCORNOTFIAXDKWKGEPDHZRJPMVOWJLALXWFSTZVABSDFZTNKYCCZTKKEAIYUNZHHLOQFMUDMTIYJSWPMCFOECVDPHLFSIQPJTJSXHOEMBVG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34236U;
    msg.info.assign("KPPQYRDWUTDVGJSHFBYKHXZNTDPXXQJAKZZSUTVZXMAKNFB");

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
    msg.setTimeStamp(0.376507677775);
    msg.setSource(28374U);
    msg.setSourceEntity(57U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(104U);
    msg.command = 71U;
    msg.entities.assign("QWSLERJVSUIGTDHPHUFFACQLDXLBNZXPTSECJUAVIKHGRUQEYRD");

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
    msg.setTimeStamp(0.159312392171);
    msg.setSource(33545U);
    msg.setSourceEntity(192U);
    msg.setDestination(46294U);
    msg.setDestinationEntity(23U);
    msg.command = 66U;
    msg.entities.assign("JWPRSVBDFLRTNWJMFSBDLBVABQRTMQZOGYXDXYPLPGRNSERXPSCYMUBIHNTSTQBCDIUKUIDEJKZZBGTPGJWAWHOASSKQVHNJNZFMBACMNIUYIGWXXDEWPOGOLOQWYYDCUCJYIRCASOQTVTJPFHYCEPMLKYQXMNUZOAZLFUKDIEWVTKLOHWK");

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
    msg.setTimeStamp(0.941027756996);
    msg.setSource(55477U);
    msg.setSourceEntity(143U);
    msg.setDestination(19597U);
    msg.setDestinationEntity(35U);
    msg.command = 64U;
    msg.entities.assign("RTZMKNOPYLLHRTQJKFDLKOJIAYYTQCIKBLOAKNEKPSSFXZIUQGFXNSVVCCGXUTWZJUOEXQEWLCVIUHNMBJBJEYDMAGMLTLAQZYODWZDZLUCHAFYRPGGSIOGDVJKIIOEVZWBKAWBPCXMRRDRZWYHBCYSEXZVRVAKNPVEGFNQXQGCMLSMSFODUQUUYAZSPOAEKPBFFUTRXTVRQXH");

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
    msg.setTimeStamp(0.777218646497);
    msg.setSource(40632U);
    msg.setSourceEntity(201U);
    msg.setDestination(49473U);
    msg.setDestinationEntity(193U);
    msg.mcount = 76U;
    msg.mnames.assign("PBQQUGZTQZRKMHPRJZWEFROOADNQLYGZENIYLKFMVKJWAHZUNIWAOJGLWTGMKDSLBBVEDTCWDXPQBMAYUARQSLCAOBJCHHHXEQWSVDYLYIFRONVRGPTINEJUSFSTZEJKNMLXAUOKNHMJJFK");
    msg.ecount = 89U;
    msg.enames.assign("NRNDTIRKJLZRBQMVUVTXSAUYQQJCAIKJCWHSHYEHUUHAJPUQXWAOFEYJFBFIADMVINZHAS");
    msg.ccount = 83U;
    msg.cnames.assign("MPCVRAIGNSLMISWSIACXZTDQRQGTXVQHAFAPWXRYIKDUSQLWVYJJFJXATMXKOFHIUNPGKRQUORGBOEMIXUDUATTDYZDGOSJEBQNEZSAIFRMPTTYKKBMHGJDEEHKZQUFHCBBBI");
    msg.last_error.assign("KJPWCZNYLZKMGFMTEBOVKVQWPHAGWVOJBGLJFMKWYHWYKRGCGOTEDVOZTCQXTOKPCDBZCIVHJEQNYIIALOEPSXGBHYRETBXMCMVKLEPQRZWTCUHLZTRVWZHSQUFASMMUGXFRSYWPSPJPXXCAJIINURKNTSYTOIJFQNAUODDFERQGBUEEBPFDCXATBLKBZEGMZGOINFXNVDBQPMXUZAJNDLRHAJRNYAUC");
    msg.last_error_time = 0.188459953348;

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
    msg.setTimeStamp(0.677899438432);
    msg.setSource(2327U);
    msg.setSourceEntity(248U);
    msg.setDestination(36032U);
    msg.setDestinationEntity(144U);
    msg.mcount = 82U;
    msg.mnames.assign("ZLUUWGXMVJKDAUPMXJELEVGZLNSMRBJYICOSURYQWMWABUOYLACJFWRSDPUVFUQLLLTZHZTXNSDKAKGCNQVIDHOMVPHCTSKIYPEBIPFHVAIDTWYXKVDJQRQNSNPGOVOGHTBZQAUYNSJAFRVCKGTEFJPUMJBXJEEWWQYXDFAIYTRGBOPNMSXOXJMDO");
    msg.ecount = 54U;
    msg.enames.assign("CUEFPZIGRMLFFDQJBVJUCXFYKMLSZDLAEHKRCSUDSJGNSCHDPQFIWIZHQLLTZEUMMNKKSTHDARHLHIFISABUTLUNXYXZCYPOPYQTRXQFTRETKOXJGBDQPCVWUUIICGDTZKGGODJYNLUWCTAOROHJFAWNEPVJXQCYABFIREFGOOANLGBYTVWBMJMSZRMSWD");
    msg.ccount = 232U;
    msg.cnames.assign("RERFTKZSUMRVIAJVIWKIZWFLRHYTJEWREYWWBYFXLTVGSLVNOYDXPMSBAKAWONOMTIZRUXXHYHHAPESMKXAZFRWJEZNJMTNNKLIAILTLDPESUQBGLQNTNFVDDJKQGTGQPFOZUHGVIUAVIACUQYXEJDYZBCMWKFBAELCRHACLCBQGYPCVPKLPRJQRHBYTNXS");
    msg.last_error.assign("NVICEKCZATFBQGKVOJWGXNCQMUZHWMOUNMMHGUDSLPWYTTOROXPQNERLRDDJAZFSFICFKRMOZAUFTKVVPQSL");
    msg.last_error_time = 0.451961510001;

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
    msg.setTimeStamp(0.0309831877494);
    msg.setSource(50485U);
    msg.setSourceEntity(223U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(111U);
    msg.mcount = 42U;
    msg.mnames.assign("TBYBDTBFSGJRTSDZULFXLJDKLVFEJLREGYOOYGHJZQIUNWMMPMEOOXNNTQTIBHZHSEMBBXQZAHEUYKATACZRNLNMVDBRMPTBXJXZOHXPIECHJAPBYVYRKWOFCIEYAVWQPLUPQFPYISURDCJKGBNXESPKVKIUZDMGIPAWGLWVXDYGRAOWTAEIWJFQNLPGZMDRXKWGFZTQMFSCOVQMOUSJVHHCHNDNCKLWJYQN");
    msg.ecount = 174U;
    msg.enames.assign("GMZHOMPDQJAUKGBRFHLBLCTNGNHVTVMVPGSFZLIXRFACDUTXMFZRRGMPVHOGIVWBCFSZWIAJKXHLRBIKWSTCNCATXMNXBTBOLGOOTRCFQXKCPYZQPUPBIDMQCYOGLKIHRZLSVIGAJDDEUBLWQXXEQPHEFNEEHRKULPNIDZKABMGAEHMPVQSUQNEJNESDWCFDIROT");
    msg.ccount = 224U;
    msg.cnames.assign("QJKPXAOBHRTAKXNLTXIBLEIHAYSEZVYKTWVNYYYSCVCLOSBFGNAQMZBJQZGTPCPGXFREWEFPAXYCNDPBILUJNFCHPHGMWSVWWKFS");
    msg.last_error.assign("ZYLCZJZMTXRWOZLELRSGSWGQAQIWHRDAETBYEALSWYHLGZKFFPBKXMFMVCBWLKDJVXBPRJJGHSDFSCNUGCPYJPJMESBHJMVKUVVODILHVFGBEPIFEGNUTDTKIYUJTZNQWTLIXKMRDEGCUCQKHQFVTXNENYROYQAFKDSIACWHQUCSRRDOQACEOPXWBZRJUTAFJODTVQINVHYYWUIXUWHIAOPLZZKHMLNVOCSIQMUNMBXBAEB");
    msg.last_error_time = 0.057189706488;

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
    msg.setTimeStamp(0.645393869367);
    msg.setSource(56226U);
    msg.setSourceEntity(137U);
    msg.setDestination(38293U);
    msg.setDestinationEntity(83U);
    msg.mask = 72U;
    msg.max_depth = 0.533956818379;
    msg.min_altitude = 0.75359950206;
    msg.max_altitude = 0.424059241904;
    msg.min_speed = 0.646631132224;
    msg.max_speed = 0.878945301641;
    msg.max_vrate = 0.0222185579989;
    msg.lat = 0.162907506499;
    msg.lon = 0.979914101127;
    msg.orientation = 0.75002079543;
    msg.width = 0.63180897385;
    msg.length = 0.0563269111367;

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
    msg.setTimeStamp(0.882559757564);
    msg.setSource(39685U);
    msg.setSourceEntity(20U);
    msg.setDestination(52165U);
    msg.setDestinationEntity(17U);
    msg.mask = 30U;
    msg.max_depth = 0.473198484364;
    msg.min_altitude = 0.939826144123;
    msg.max_altitude = 0.36673679322;
    msg.min_speed = 0.532048712069;
    msg.max_speed = 0.597422698724;
    msg.max_vrate = 0.285878958653;
    msg.lat = 0.109551469872;
    msg.lon = 0.326536230902;
    msg.orientation = 0.874354537183;
    msg.width = 0.887730097027;
    msg.length = 0.199122735886;

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
    msg.setTimeStamp(0.125628052447);
    msg.setSource(44589U);
    msg.setSourceEntity(72U);
    msg.setDestination(14777U);
    msg.setDestinationEntity(160U);
    msg.mask = 92U;
    msg.max_depth = 0.0302784000453;
    msg.min_altitude = 0.85974049333;
    msg.max_altitude = 0.303065802082;
    msg.min_speed = 0.938895051276;
    msg.max_speed = 0.794052827662;
    msg.max_vrate = 0.123027552688;
    msg.lat = 0.164522897056;
    msg.lon = 0.442662922188;
    msg.orientation = 0.23819829812;
    msg.width = 0.185847586566;
    msg.length = 0.728616071881;

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
    msg.setTimeStamp(0.811534422675);
    msg.setSource(57475U);
    msg.setSourceEntity(116U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.40744815646);
    msg.setSource(14808U);
    msg.setSourceEntity(29U);
    msg.setDestination(4272U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.509534034709);
    msg.setSource(53431U);
    msg.setSourceEntity(147U);
    msg.setDestination(29255U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.689371432086);
    msg.setSource(36900U);
    msg.setSourceEntity(142U);
    msg.setDestination(31714U);
    msg.setDestinationEntity(86U);
    msg.duration = 13502U;

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
    msg.setTimeStamp(0.459164387219);
    msg.setSource(27684U);
    msg.setSourceEntity(140U);
    msg.setDestination(39039U);
    msg.setDestinationEntity(208U);
    msg.duration = 49005U;

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
    msg.setTimeStamp(0.832746729472);
    msg.setSource(46464U);
    msg.setSourceEntity(153U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(101U);
    msg.duration = 42825U;

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
    msg.setTimeStamp(0.156713919886);
    msg.setSource(10084U);
    msg.setSourceEntity(223U);
    msg.setDestination(606U);
    msg.setDestinationEntity(176U);
    msg.enable = 159U;
    msg.mask = 3625091677U;
    msg.scope_ref = 470610756U;

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
    msg.setTimeStamp(0.387925131045);
    msg.setSource(41672U);
    msg.setSourceEntity(141U);
    msg.setDestination(32596U);
    msg.setDestinationEntity(137U);
    msg.enable = 196U;
    msg.mask = 4188831889U;
    msg.scope_ref = 1451804114U;

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
    msg.setTimeStamp(0.47294216198);
    msg.setSource(5781U);
    msg.setSourceEntity(118U);
    msg.setDestination(33235U);
    msg.setDestinationEntity(136U);
    msg.enable = 168U;
    msg.mask = 2256110873U;
    msg.scope_ref = 3771694520U;

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
    msg.setTimeStamp(0.974090214454);
    msg.setSource(19984U);
    msg.setSourceEntity(238U);
    msg.setDestination(39042U);
    msg.setDestinationEntity(181U);
    msg.medium = 222U;

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
    msg.setTimeStamp(0.157262611652);
    msg.setSource(38172U);
    msg.setSourceEntity(60U);
    msg.setDestination(64533U);
    msg.setDestinationEntity(87U);
    msg.medium = 47U;

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
    msg.setTimeStamp(0.132882407971);
    msg.setSource(59185U);
    msg.setSourceEntity(84U);
    msg.setDestination(6271U);
    msg.setDestinationEntity(161U);
    msg.medium = 202U;

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
    msg.setTimeStamp(0.534024029175);
    msg.setSource(28019U);
    msg.setSourceEntity(176U);
    msg.setDestination(22541U);
    msg.setDestinationEntity(144U);
    msg.value = 0.853027326317;
    msg.type = 33U;

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
    msg.setTimeStamp(0.81469000506);
    msg.setSource(56153U);
    msg.setSourceEntity(59U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(208U);
    msg.value = 0.855532270491;
    msg.type = 160U;

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
    msg.setTimeStamp(0.334076570544);
    msg.setSource(22022U);
    msg.setSourceEntity(16U);
    msg.setDestination(26453U);
    msg.setDestinationEntity(112U);
    msg.value = 0.769584541376;
    msg.type = 218U;

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
    msg.setTimeStamp(0.463786207487);
    msg.setSource(3051U);
    msg.setSourceEntity(61U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(239U);
    msg.possimerr = 0.0459604787535;
    msg.converg = 0.293680996014;
    msg.turbulence = 0.107597924222;
    msg.possimmon = 83U;
    msg.commmon = 33U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.559909367051);
    msg.setSource(12811U);
    msg.setSourceEntity(189U);
    msg.setDestination(13136U);
    msg.setDestinationEntity(94U);
    msg.possimerr = 0.017436248961;
    msg.converg = 0.610480106748;
    msg.turbulence = 0.795247213474;
    msg.possimmon = 196U;
    msg.commmon = 87U;
    msg.convergmon = 32U;

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
    msg.setTimeStamp(0.0586420606768);
    msg.setSource(46838U);
    msg.setSourceEntity(151U);
    msg.setDestination(5253U);
    msg.setDestinationEntity(61U);
    msg.possimerr = 0.97544395273;
    msg.converg = 0.295056018081;
    msg.turbulence = 0.945604004992;
    msg.possimmon = 235U;
    msg.commmon = 33U;
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
    msg.setTimeStamp(0.617811224443);
    msg.setSource(40011U);
    msg.setSourceEntity(233U);
    msg.setDestination(32357U);
    msg.setDestinationEntity(201U);
    msg.autonomy = 231U;
    msg.mode.assign("TBLUPYGMJVKHXBSREUYFSLOLLJPETRDRSZMJXGNICNLNOTYUTZNGVWCFMEFCLAHTBNUDQJJWDGGVCSTXCDQVXKPIAKNKRIIZXPBOZQOQKHYIDPAAIAMBQVUFOWWNIVPRYYWXTGPMRNDVLEJAKSQARBGAOPRXTUPOBQNFWAESKBGIMZIMFUGYTFKZBQDMCOWDSHQHYNPYXTVJE");

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
    msg.setTimeStamp(0.0174719038375);
    msg.setSource(39722U);
    msg.setSourceEntity(216U);
    msg.setDestination(41463U);
    msg.setDestinationEntity(65U);
    msg.autonomy = 134U;
    msg.mode.assign("ZFLESAVQKOGCPZERYSFTDJHPFRRWGOKNCZONQVBYBDTROECHBBSZNXMFJOXLPHPZBMVPRFHDU");

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
    msg.setTimeStamp(0.846327826866);
    msg.setSource(852U);
    msg.setSourceEntity(13U);
    msg.setDestination(21686U);
    msg.setDestinationEntity(108U);
    msg.autonomy = 236U;
    msg.mode.assign("KWCENJIZGKVEVLSFGOSOBYVNXGQWFBFOL");

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
    msg.setTimeStamp(0.585468878201);
    msg.setSource(65423U);
    msg.setSourceEntity(173U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(161U);
    msg.type = 231U;
    msg.op = 209U;
    msg.possimerr = 0.311528291154;
    msg.converg = 0.266174495559;
    msg.turbulence = 0.966186560747;
    msg.possimmon = 116U;
    msg.commmon = 138U;
    msg.convergmon = 73U;

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
    msg.setTimeStamp(0.655419972108);
    msg.setSource(23174U);
    msg.setSourceEntity(252U);
    msg.setDestination(38667U);
    msg.setDestinationEntity(147U);
    msg.type = 114U;
    msg.op = 250U;
    msg.possimerr = 0.325293688966;
    msg.converg = 0.87203821139;
    msg.turbulence = 0.713146659835;
    msg.possimmon = 10U;
    msg.commmon = 160U;
    msg.convergmon = 237U;

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
    msg.setTimeStamp(0.296364716796);
    msg.setSource(38176U);
    msg.setSourceEntity(243U);
    msg.setDestination(60566U);
    msg.setDestinationEntity(176U);
    msg.type = 36U;
    msg.op = 224U;
    msg.possimerr = 0.277368465803;
    msg.converg = 0.142078269476;
    msg.turbulence = 0.840037168369;
    msg.possimmon = 6U;
    msg.commmon = 5U;
    msg.convergmon = 8U;

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
    msg.setTimeStamp(0.577496675021);
    msg.setSource(22404U);
    msg.setSourceEntity(244U);
    msg.setDestination(4160U);
    msg.setDestinationEntity(222U);
    msg.op = 252U;
    msg.comm_interface = 123U;
    msg.period = 7911U;
    msg.sys_dst.assign("PSBGAWPWSKXEPVQTVLGUKSWNCGMHVNDAMOLKHBIJCVDQXOHEPLMLPD");

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
    msg.setTimeStamp(0.208461745181);
    msg.setSource(65014U);
    msg.setSourceEntity(7U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(215U);
    msg.op = 238U;
    msg.comm_interface = 147U;
    msg.period = 8680U;
    msg.sys_dst.assign("BTDMIGZVFURDVHIRNZTLBPPWFJSPQRAUKLGQCJOLIRXWYORNNBNVYMZQIEJBEKACQS");

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
    msg.setTimeStamp(0.377575131933);
    msg.setSource(49063U);
    msg.setSourceEntity(21U);
    msg.setDestination(21592U);
    msg.setDestinationEntity(237U);
    msg.op = 216U;
    msg.comm_interface = 210U;
    msg.period = 50372U;
    msg.sys_dst.assign("QOJVHMEPFKBDCJXWNZMYYUWZGHWFQISCELGVPAXYHSVLSIQGXMTOVCFVANQASMDIBRANPBRANLUOOIDVZCHPZWEIOHBJDGXNJMBPJZKWH");

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
    msg.setTimeStamp(0.27354082584);
    msg.setSource(36828U);
    msg.setSourceEntity(214U);
    msg.setDestination(14298U);
    msg.setDestinationEntity(6U);
    msg.stime = 2365798881U;
    msg.latitude = 0.701841533806;
    msg.longitude = 0.914854159821;
    msg.altitude = 8672U;
    msg.depth = 1435U;
    msg.heading = 26194U;
    msg.speed = 22367;
    msg.fuel = -34;
    msg.exec_state = -42;
    msg.plan_checksum = 21622U;

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
    msg.setTimeStamp(0.131666838929);
    msg.setSource(10870U);
    msg.setSourceEntity(71U);
    msg.setDestination(65213U);
    msg.setDestinationEntity(42U);
    msg.stime = 2269421175U;
    msg.latitude = 0.515252548111;
    msg.longitude = 0.297321397377;
    msg.altitude = 10167U;
    msg.depth = 33258U;
    msg.heading = 47656U;
    msg.speed = -31332;
    msg.fuel = 52;
    msg.exec_state = -75;
    msg.plan_checksum = 59407U;

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
    msg.setTimeStamp(0.23771563482);
    msg.setSource(63381U);
    msg.setSourceEntity(224U);
    msg.setDestination(19810U);
    msg.setDestinationEntity(55U);
    msg.stime = 114849905U;
    msg.latitude = 0.988463024844;
    msg.longitude = 0.181280349572;
    msg.altitude = 32481U;
    msg.depth = 3053U;
    msg.heading = 61121U;
    msg.speed = -24584;
    msg.fuel = 119;
    msg.exec_state = -3;
    msg.plan_checksum = 65522U;

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
    msg.setTimeStamp(0.896374378466);
    msg.setSource(50176U);
    msg.setSourceEntity(104U);
    msg.setDestination(38149U);
    msg.setDestinationEntity(166U);
    msg.req_id = 44375U;
    msg.comm_mean = 50U;
    msg.destination.assign("TEULLWBXVYIIOUTKPDSVZCACBZARFZFQTDWMLNXHYEPKWIGTJHICXMICOTUKPEJOCPDSSCSUVTRMSLYCWXGNDJJQPZDHCOIXKDOTBPVZSWFPEJENGKLBHM");
    msg.deadline = 0.539079512457;
    msg.data_mode = 236U;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 233U;
    tmp_msg_0.time_remain = 0.342615291058;
    tmp_msg_0.sched_time = 0.550526168979;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WIHQBLSPDVNUBXKEWSDFAZJADTBZFVJMDBBNRMFKEZ");
    const char tmp_msg_1[] = {92, -43, -17, 48, -58, -119, -89, -73, -66, -91, 123, 103, 33, 60, -104, 125, -64, -91, -49, -45, 105, 4, 25, 32, -121, -26, 70, -19, 14, 35, 91, 37, 13, 79, 87, -96, 77, 20, 120, 114, 76, -97, -121, -45, 111, -75, -14, 22, -89, 40, 0, 116, -60, -84, -91, -19, 90, 22, -13, 17, -23, -18, -76, 67, 124, -31, -33, 4, 104};
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
    msg.setTimeStamp(0.559185978269);
    msg.setSource(8704U);
    msg.setSourceEntity(75U);
    msg.setDestination(43593U);
    msg.setDestinationEntity(125U);
    msg.req_id = 12341U;
    msg.comm_mean = 129U;
    msg.destination.assign("OHPSQCOILCWVMQMLKMRBFWUYVKRURYZFRDBWGIHVTXNVERLCZKALSDWHPPIFWHTNWJUZYUSQAVULLVKOGNFTJKIDPZUVQGPJLHXGSRKDPPOAXNPSSWJDMYKNN");
    msg.deadline = 0.284089866281;
    msg.data_mode = 54U;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 7894U;
    tmp_msg_0.sys.assign("RSYXLPHALAEFTLNQTFCBNPALXHIPMWLEYDGACIVGZSBMOMUBPJJWKHWIQODYWVTOJTTBEMRNFYKPCKVMEGUXEIUIPFHJRGRDLQDRYMRNONZHWACFYZZOVSQHSBPWMROSGBFSGIBSLZURGSYJJGKJQBFU");
    tmp_msg_0.value = 0.47165717227;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PAJUEMIZEGAQRKQVTRLBEJYPAUMCGQFIXPLPAGNVIDGFLRZSUVKJSHCHKTYZTBCGUJNNXSRSOMJDAXVYEVUKLIWQBTDYWFQFWNAPXQOUTJRJNPYYOIZAKSXVDGKSZYOAWECJDIXEJRTKMIWDNFPIHMTUZHBLTLVXMUPQMNGHNNHXYKLSBCQTGABUSZOWTBWILHHHKKQGNQMOFBRORXSUVCOFOZECAWDWHCRSPEFDPYBIWGLFMJV");
    const char tmp_msg_1[] = {24, -31, 84, -110, -33, 1, 52, -58, 45, -6, 126, 24, -82, 123, 23, -98};
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
    msg.setTimeStamp(0.661514143576);
    msg.setSource(50144U);
    msg.setSourceEntity(252U);
    msg.setDestination(48715U);
    msg.setDestinationEntity(135U);
    msg.req_id = 40678U;
    msg.comm_mean = 120U;
    msg.destination.assign("VDGZNABDEADLSTQCMWSYZTZTYRMDNINPJUM");
    msg.deadline = 0.371817070743;
    msg.data_mode = 154U;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("CVOLXAIFWJJNKFUXBFIBLGBNYNBHBCSAFCQKDWZKEKRATZNANSITLKPOVWNXHBCFZMHSYCYXVLYAFUSUOMXQTLIJUCQMRSSTCJNGFVHDVZPLZPHQTOGVRGKAKEZMDENGWEDJTALEXOJGIRMBUQJHNMDPBCODLQUEAYDPRYWYRXWIMGIRJLAOZFYRCHGHREMWPWVRQVXEKGLTBTPWUFQSJZPAFXQKWQXUMPDSUOEOVEJDVIBSYOTNKHYDH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XRGPKDIFZEBVXKWKKLTYLFWWGTOSPQIORGUIZQSPTGRRBTLFDBHDYDMTPAOJHSSHGVYTHWVSZCNCPQRUGAXSMEVLZJEHGEKMBYHNFLPIIAFTXWLYLCARKWQVCNQPBBPPTNUQUCQWKFUYMNAZYSGBFUEA");
    const char tmp_msg_1[] = {41, 36, 51, -52, 126, 116, -113, 1, -76, 81, 53, -1, -43, -91, 60, 13, 118, 115, -83, -2, -15, -57, 73, 39, -49, -28, -69, -3, -41, -25, -91, 1, -42, 110, -90, 42, 22, -15, 17, -35, -30, -108, 101, -77, -65, 80, -97, 85, -44, 101, -29, 55, 17, -85, -83, -73, 15, -82, -120, 1, -60, 43, -10, -72, -65, 116, 91, -18, 40, 89, -104, 103, 74, -51, 87, 71, -92, -38, -50, -73, 7, 69};
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
    msg.setTimeStamp(0.528282936155);
    msg.setSource(41280U);
    msg.setSourceEntity(80U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(216U);
    msg.req_id = 56008U;
    msg.status = 213U;
    msg.info.assign("EBVPIDYHFKXWMPAMIENMCJVQLHSVBWHUKZBBUWJZCMTKEDPTUECMTOMQJUHRPUJDKSOFPYCHWFGNRDASVLVJLJZ");

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
    msg.setTimeStamp(0.0490451136232);
    msg.setSource(7261U);
    msg.setSourceEntity(126U);
    msg.setDestination(15964U);
    msg.setDestinationEntity(14U);
    msg.req_id = 18801U;
    msg.status = 52U;
    msg.info.assign("LLDJOSHUCKFWAYAKZNLGCQNSDWTXCUPJRZPKBTYYPYRSBFIOHXWVPIOUJQJVJVSAJ");

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
    msg.setTimeStamp(0.776601170336);
    msg.setSource(44934U);
    msg.setSourceEntity(235U);
    msg.setDestination(5721U);
    msg.setDestinationEntity(128U);
    msg.req_id = 34760U;
    msg.status = 150U;
    msg.info.assign("PVECALLWRFWKICENFEAYJEADWQHWOOOXYQRDMLFXZSUOWXBLGVDKXCPZUSTGUPORJCRJUSGLPGKQIOFPTJTQVYQDNUZDXMCSYVAUANSIWXUYUWKHIMDBPRSFWRRCNTHZIPKAVSLIETDBJQTYTRMZ");

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
    msg.setTimeStamp(0.0842376225558);
    msg.setSource(26673U);
    msg.setSourceEntity(58U);
    msg.setDestination(50776U);
    msg.setDestinationEntity(155U);
    msg.req_id = 14089U;
    msg.destination.assign("KLRTOMWMMFYMOYJVUDUFVUZWCHYJLGBKIRYLRPPGAITMIIFCPLTFIHYVGNBRHMCQGJRWITVQMSDNYQEGJZGFMVJOKVZSYFNWJPHYGDZONPOANGXRDJDHZXLSPVFWTQDYSNNQXOTMBIUUCLAEWEXOKEEMSXNUHXDAOHUDHBSKKWXODEUICJZDXSIKECBQJAPTBLQIVAHBZSAV");
    msg.timeout = 0.369150324365;
    msg.sms_text.assign("IUQOPBNBCPVZEBBUKRVAHQCDTAIKZQCSMEGLAKAYVOORZUHLMDVUSWNFNDNGCRRWZGWXVATXMFALAXORRJBUSWTFPAAFBSHJJQCMWBYLPHJURPFBODEMIUFTMHVJCKEFSLJEIYNGBWIHFVLUBZMKEHXNOGCDOQJQKTWCLCPZEYTLYYGTZILNYUYMJGYQDOIXKFSDSYNCKNXPPKVLWEOWTTUS");

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
    msg.setTimeStamp(0.401267415601);
    msg.setSource(24638U);
    msg.setSourceEntity(94U);
    msg.setDestination(6698U);
    msg.setDestinationEntity(170U);
    msg.req_id = 50125U;
    msg.destination.assign("FCOKUMWPESBVKGDKYZCZISOCXLNVULJABUPYJECLBCGEZKLGLTXNYUWOPBYPVZOYTNMCVOIAXWJNVQEMSTKHANRVIHRODRPQMKJVTEEBIZZWPJJXKQFSITFDMKAWDBVZIHDSAUSUVOGQSFCQOWYUHLAYHQWLEUZIHYXYACANLFDGYGRETIQDATXFDNXRMMFJVURRZBXIPGPCGOUJ");
    msg.timeout = 0.686625804053;
    msg.sms_text.assign("BNZOINCHEMZLXECXXHZLHWITIRVOJOUP");

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
    msg.setTimeStamp(0.904726725246);
    msg.setSource(40078U);
    msg.setSourceEntity(33U);
    msg.setDestination(1112U);
    msg.setDestinationEntity(174U);
    msg.req_id = 47751U;
    msg.destination.assign("YECRHJVCAFXODGKMDOJMHLSTQQWYXOVOCGGBDPYSMULBAGAAJQUDBJMWOFHIADQUFPXIPGRYUVIYMHDZWNATOCOEPFJERWNPMJLEQZKZYIRDIKSNRBKNIAMWVXTOSKMXXLFPLVYKUICVIYUCTCHVGPGRMGNATVKFBULZNZVHLCQQMCAOHZATGQKBEWUPLBZSPT");
    msg.timeout = 0.7866895238;
    msg.sms_text.assign("TVCCIUOMDNHFDYDTUVQMERKIUHUZIUMHBEVVQMAVKGOEXWRHDDNCOFNXOBLCKSPKOSYJEADMQOCFEYVKYAQTWNN");

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
    msg.setTimeStamp(0.275181572167);
    msg.setSource(56231U);
    msg.setSourceEntity(188U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(32U);
    msg.req_id = 22294U;
    msg.status = 19U;
    msg.info.assign("GUQGSGTQNLYXMPZSPRPYVBAEDXXAZGKSGJSSBTEQJQLLDXDAVIOVXZTRXABUZYDDNDFMDBHVGCFXLRADWOOIPISZIWYLGNUCKRKZHCNMOKIOUELQ");

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
    msg.setTimeStamp(0.216164227587);
    msg.setSource(64792U);
    msg.setSourceEntity(141U);
    msg.setDestination(6549U);
    msg.setDestinationEntity(134U);
    msg.req_id = 42271U;
    msg.status = 222U;
    msg.info.assign("ITQTPKQLFLLYBOQAZMBGLWEDNWVGJ");

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
    msg.setTimeStamp(0.0850318975634);
    msg.setSource(26956U);
    msg.setSourceEntity(70U);
    msg.setDestination(36337U);
    msg.setDestinationEntity(5U);
    msg.req_id = 6604U;
    msg.status = 57U;
    msg.info.assign("CNMCDEHIPSGRXXAIBIGKBBXMVBLQJPDGTRBWMFZNKYVPSOKTLUOXOIRUTSHFFMWZAWIEOVEUAQJUOIYEESTSZDHLLPBBFNJGQKJZRTUWYEHJOGWLAKLGGMECYFMYNWNJPBQPXHKLOXDTWCNRHAMVRCUQFYRLHGSZIPDKOIFIPSZEDCDHRAFUTJJDCV");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.519662765927);
    msg.setSource(58863U);
    msg.setSourceEntity(252U);
    msg.setDestination(32744U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.722900127979);
    msg.setSource(38685U);
    msg.setSourceEntity(230U);
    msg.setDestination(62831U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.255763045793);
    msg.setSource(6667U);
    msg.setSourceEntity(185U);
    msg.setDestination(35746U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.951641335533);
    msg.setSource(35920U);
    msg.setSourceEntity(54U);
    msg.setDestination(51281U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("UHZPGZTBPGJAPEDIVDNWTZHZJKXMRHXSVCZZKUYJOOFWWHPFUNJMBWODSKRJEULOFOZQDCABDPEJQBFSQAVYVGFBCVIPTLRMJWKPLVYCBGJPNYCXDVQWRWGSCNOVACNKGXDFETSFQEKMIDHNKUQIUQOBPH");
    msg.description.assign("IAACHDOQUBFKYWYXCWLRYWRDMHBWIVABXINEHKYAXITDZMXHCSPMTNOBFADVVQBCELVMZGDVGHQBRLZIJSYVPMOSHTJSVLOUVPSWUIEKCXFJDHNPASKJXGMXDQRUGNXHUYIKMKNOEJTJEUTUBJMNTPEENSBASUVULOQQFPAQROLAWGEOLCZWFERIRXFEZZLKXLNPQDKJ");
    msg.vnamespace.assign("WCHCAIGMKPGRWSJDFWKGCJOFLREOFJPOGUQQREBTHESKJPZQWSTERAOGUZLVTWDZUPXYVXRMQFSNYBSLAXGNBQOVHYZTHLCZFRQQIMVMAHFXYMBTLHPHUCVJXOQCSJEWBKFKHMJWCZXUMDXIYLNOORWPFFNMKHVNGIENLKUPDAIUITWDCBEDILGBLGSXHXNYKTTDTDBBNYLMDDOZISAZECJOSZJKQKRWPVZFRPATUCQYGEJBURIPSUNVVYAVX");
    msg.start_man_id.assign("JLQYGMROBVKZFJRDOCNQWGXFNPVXHCLRPDRZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AOTXSFMPINLBGVSABUUDFJZWQCXVBGENFFAJHEMZKAWNRVXJJXAIBSELPJUSHWRVDVCSDRPUVZEIYDIKKFSKACWZNPVHTDYTKRWSMOKZRHEJTSIYYTESOWEQQOJYHGHUCZHGYYRCLMLTVEQEQNRJCJIYBFZRPBMQVYDWNUWDZXLUDALJPPQAXFILXFKUOMOXOLZ");
    IMC::Takeoff tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.19452358773;
    tmp_tmp_msg_0_0.lon = 0.240590945734;
    tmp_tmp_msg_0_0.z = 0.1086207082;
    tmp_tmp_msg_0_0.z_units = 57U;
    tmp_tmp_msg_0_0.speed = 0.980176165857;
    tmp_tmp_msg_0_0.speed_units = 3U;
    tmp_tmp_msg_0_0.takeoff_pitch = 0.688171294563;
    tmp_tmp_msg_0_0.custom.assign("YVAWIBDKWEKYDLWZYITCFBORLPATDQNDTFBNTGNZXTSSCIXZUAKHRFXGCVPEIEQRVSDRBBAJSFEGKPYYGVQPMUFVQQHVZNBHJNBBULNMIMQZRCQJODYRLPGWTZG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SystemGroup tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.groupname.assign("QXHGFUKQRLZDIBYDBEJTRTJERGUMHULYFJKZHNIVAIYSEHFMYPXKIZDXITNJJSWGREDQODWHTYLTCVSKDVPCMAPDAIQVTFAWJMAHVLCURT");
    tmp_tmp_msg_0_1.action = 69U;
    tmp_tmp_msg_0_1.grouplist.assign("XEOTWZXRUBPCADZKRKANDSSNUIXWLQYFCKYVGYHMKCKXIEFVMFMBSIAOELRRAZXCBRTAUFODLFNYTSQIBJUPJNOUZQQTZJHNSDOMEBHJFCLAIRQXMDNKMJSWXMOLTEHMYBIHHKHJBZGCZSRGDCXBOWVTXJEMASGVEKLPOIDPA");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("IGODZALKVSOHCNWRRPRZH");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("SJWWHVBUFCEMOIMTJGASZOLXQAORBQZGFTQINKYSNILURMVYTNHPVKPCTTWLMFEJPLIKFZPTZSCZGSVHXCEMLEICFKSOTHPHDTNIDDNBYNVXUVGHDX");
    tmp_tmp_tmp_msg_0_2_0.value.assign("HHVECFQDKYSLSKEFAFETUMCCDZLGVVKUTMFPMIVDVIENBTZGNOIMOCUJXYXFXTPIUGAHCASFKQMWXHOTEAJRNTMZBOOX");
    tmp_tmp_msg_0_2.params.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::UamTxFrame tmp_msg_1;
    tmp_msg_1.seq = 18949U;
    tmp_msg_1.sys_dst.assign("NUICPCKNKIQXYISPVNQKJDFTVUKIGHQYBVEMIVQULJDAZHPUVPHHMPSVJOXXWNLVGTZLAEFCXSIHGARBW");
    tmp_msg_1.flags = 252U;
    const char tmp_tmp_msg_1_0[] = {66, 46, -63, -126, 29, -99, 1, -25, -128, -70, 106, 87, 48, -76, 22, -55, -25, 23, 13, -4, -10, -40, -118, -110, -41, 19, 74, -31, 100, -55, -107, -102, 29, -128, 66, 99, 31, -116, 103, 72, -66, -62, -80, 101, -1, -58, -63, 22, -104, -57, -107, -35, 47, -3, 23, 86, -82, 122, -127, 74, -122, -125, 23, -100, 71, -87, 31, 8, -96, 71, 33, -5, 10, -6, 52, -10, 54, 125, 101, -46, -74, -79, 70, -25, 62, 112, -75, -65, -125, 40, 86, -38, -80, 116, 15, -76, -123, -126, -72, 75, 104, -27, -98, -56, -109, 102, -97, -109, -78, 84, 50, -112, -3, -111, 70, 85, 104, 34, 19, -30, 84, 39, -68, 56, 19, 123, 103};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.741799962749);
    msg.setSource(38586U);
    msg.setSourceEntity(47U);
    msg.setDestination(48876U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("GTEJVVLFXOZZSQEZNWBFHKJBKONYLSOIKYBRFXEVZSIDOCTJBBFMAHAQNZIBZAJRXMVNHGRMQWVPLAPVCVPUILDJDCXENFIUZSTYWSPOGCLDNCLOMWTWEFENQJQHSDHKQGTYBCCOAKCHAKMNPKCRUAZTXZXAQOYTLFPRXOMRRUCSUQDVXYKITIDNPHGWJXTDGYPJLFLHERIRRFMIMBVGAFMSVYKWBSYPXHGWUDEGUW");
    msg.description.assign("IFDADBUICDJVFSHOTWFQXFALSPUHZVUNKCXRKVJWUSVIMMKSTHUBRGEVTDTDXYQDOBTHEHLTDYJOZLHG");
    msg.vnamespace.assign("NLNHDSECYVEKXGLFMLZIPUUOXMRZKTXBHLARKHSIVAOWSCJTPSFDQUJHDCSAGBXORPWUWDQKRUYVTYGYXRRNXVSZIDCFGZZZUMPRWSKJEMYEIBIQLMCOYNMJVORXGODATFPSYKLEZQ");
    msg.start_man_id.assign("EZAFYHKXXQDVVQFWHXSZSKWJMCFHUVIZKQANCVBEIHWELPELRGSJCAM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KXNYDSQHEQYXDQWDSERWWVBCFBDFRUXPWZBAIXVGCNVHIWECACPJYKGGKWNSVZVTSFTHRADRNRMBWWRFPXQHFPSKVNMJFNEDKZFZOUZHXMPYSTKRYEOIUJJOCVQZDRFBUBIVXGQKIJCKSCLFEMAZOPIJKSJACYIETYGXQFUKEPDHABQTHZLLTMTGDMLUUENLZTNYTGOPMOGONMNLJQVWUIEJROPSLDAYXAPMJHYRIHBT");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.458966015744;
    tmp_tmp_msg_0_0.lon = 0.622549341668;
    tmp_tmp_msg_0_0.speed = 0.588564217289;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_tmp_msg_0_0.limits = 63U;
    tmp_tmp_msg_0_0.max_depth = 0.957704507014;
    tmp_tmp_msg_0_0.min_alt = 0.820638281477;
    tmp_tmp_msg_0_0.time_limit = 0.134205624148;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.926557563837;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.169013083275;
    tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.controller.assign("PGEQCVUVRSJKKTAYUXOOKOVQHWOLNWDMPSKZAMFVGFNISGULJESMTGIBDJIPNENHWLICTJPZJROCUEFAJZPXUSCABHICCLEAQGYZMLNHNTRBYITBTEFPUIQNRXRGLWKDPJZXRZDTMXDNEFAVHVHHOVFDHWYYY");
    tmp_tmp_msg_0_0.custom.assign("WBJQIKPKFODJIQDRAXCUBCMTJEVAYLBWMSUEGLQBQSYSFQGOTMESCMUYHONMGIBXERUCSRPRUGWJRKWDWAJCEOQPTNNDVCROZGKNNEDMJSLARQUONGBAROXEKKSHITJYLJEZXLHOYYFVASAMKDIYZPBTLPZUKQTDPVPSHXVKYCHWPOZLZNITASARVWQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.912789059936);
    msg.setSource(2480U);
    msg.setSourceEntity(163U);
    msg.setDestination(39567U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("CHBFTIXDGKNISVOPHQIABUUFJQDZSYTKPEFUTOEZNBQNXTQGVFEDPOQVZCWQNJMIMLDORGWVJZMLRFXBAVLSHCYKEGYIVSHQJZNCWSZTMROXBEKLXMSKZZDUWFCNGNZKYSXHUWNKMABGUOPLJQSWIULFPFYAIXGYVMJTDJAFBRYELWLROBAANCXHQVHJRGCSZOJRWRAPIP");
    msg.description.assign("ZYNXMBADKSFKSQYZIEVKREOYTUIFUSRLLLMVKJPEZXHGJDGDEZBCAWTWXOVCUFGGBBXZYLTGGFPWEIPXMBDNMKXKKCBCCQCRLPLAOVJSMQTNKVXNNAZIBRSHDPILZ");
    msg.vnamespace.assign("GBZBNPKKDAVYLIWFABFFXMHROBNIQSWVGPNAYZGLLHGHEFIORJCAEPIWMTBINQGXJFKSREODSKRYNCUJZYUBKUYWXYMJOOUQNHAMFICCPTIPFOJZLEKJLETXDWRURVXCVQSHAYUSAZFQTQXHULVBXFPWDCHRGVYMSEECJVUUERQNVPIWPJRJDIAOTMCDHZWHZIWGNZYNLXMBSDRZTYCTGTQGEAWTNDQEKCOULV");
    msg.start_man_id.assign("EKWWOBOZZOAMIKXNAUTQECRUZDDGIGVNWAXRLOFGZFMLLSEYUDDNMDCNTPVVFHITFRTPCJGASYTZPSBIPPVNHWXXJYWUDQLZBAOCTNWJFCZKYDXRJIQSFRSW");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YNVMVVGDNSCGMJIOHWQDXPFZTEJQAWYDQSQRHIPJLNAVXDSOLNSNRYMIVEGPRPOLJREKONACDBPRUCMJJKUUTEJFHBWAXKKQKAZIXBBAQAULYWYVFOXQODVYLWSLTDXKFFTZFTGOBHWNNKUYCGRMBXUIXBXRVSBZFJIIIETGEDSWPZQYPZCZSVENLLGAOKTGMKDWHCTZARNYOTPUWBMLCAIHFJHMZUSICCEBZHFQFVQHJUXROGEEHG");
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.794440583986;
    tmp_tmp_msg_0_0.lon = 0.0730986627611;
    tmp_tmp_msg_0_0.z = 0.611132283587;
    tmp_tmp_msg_0_0.z_units = 149U;
    tmp_tmp_msg_0_0.radius = 0.128930135224;
    tmp_tmp_msg_0_0.duration = 39835U;
    tmp_tmp_msg_0_0.speed = 0.627662114899;
    tmp_tmp_msg_0_0.speed_units = 92U;
    tmp_tmp_msg_0_0.popup_period = 3034U;
    tmp_tmp_msg_0_0.popup_duration = 43502U;
    tmp_tmp_msg_0_0.flags = 27U;
    tmp_tmp_msg_0_0.custom.assign("GGWYCEPCYWMMDTZBHANTFYFCLDGZF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::OperationalLimits tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.mask = 247U;
    tmp_tmp_msg_0_1.max_depth = 0.794728194769;
    tmp_tmp_msg_0_1.min_altitude = 0.251587991191;
    tmp_tmp_msg_0_1.max_altitude = 0.444930077089;
    tmp_tmp_msg_0_1.min_speed = 0.456449001226;
    tmp_tmp_msg_0_1.max_speed = 0.56761680545;
    tmp_tmp_msg_0_1.max_vrate = 0.305712916986;
    tmp_tmp_msg_0_1.lat = 0.515025809777;
    tmp_tmp_msg_0_1.lon = 0.690419664162;
    tmp_tmp_msg_0_1.orientation = 0.771223935802;
    tmp_tmp_msg_0_1.width = 0.268372584289;
    tmp_tmp_msg_0_1.length = 0.941003278625;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YCFYMEVWZBFBSQNHYSNQBLCWUHGIYWTFGBXNVELDQPVAABDKUXTCUNRMUJTIEYMIMWNOR");
    tmp_msg_1.dest_man.assign("THKHRXFGZOPMUCSBISKBRRIMAGOZEVGYATQAGQDLJHRXVXCQIETNRIQMSZYSVJYTDWJWLZHYYUNALIKUKNBDDDYXDBQFVYLDLDBDEHPLVACBEHVQMNSJTOWSTFPPNTHAJK");
    tmp_msg_1.conditions.assign("IZOXXKKUSDGJPZXWCYDMCSPSHQDVAIFQSYXVVKNMZAUGRYPCINLVRCOFEADCOUOHQHBYQPWOBDAEULBMUZYOMAYXVLWHPEDZGAEIEBVKIRXJEBUOBZETVSJNAGMWAVNIFMIKYZARCPHZNJFBHEYTMVURDFENUCAKLMLGFTTBMNMSBRPKRGZPLITJGHDYTWOFXRBOTLJFVUNQDJQKWUOQHWWIRZXYFQWPTSXK");
    IMC::Sms tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.number.assign("TUARQREYYMBHANZZWQBCINQLLPYVGOYBGDJSLKPJDCCEHJIZDGTKEAOXZFSPUBAHUHKOYFSBTUVSFERGGOYGJVQOMA");
    tmp_tmp_msg_1_0.timeout = 34288U;
    tmp_tmp_msg_1_0.contents.assign("HPFSMZORSXNAGOAVIINERCNTXFUUDMXFYYFTLJLTWFGHUYAAGXBUMRAPNIDCIDNDHWZAYPCEXTHVCLKXWLZPEEBPLTPSTIQSZEQEXAVSWLORLSMDJCFVZKRKJMUCQKCOMDRIHTFQVJWNZUIJYOAR");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DesiredPitch tmp_msg_2;
    tmp_msg_2.value = 0.98275830915;
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
    msg.setTimeStamp(0.940548295388);
    msg.setSource(20241U);
    msg.setSourceEntity(173U);
    msg.setDestination(35408U);
    msg.setDestinationEntity(200U);
    msg.maneuver_id.assign("RGDFATOSMEVSTIKCBKOCMZSGEUAFBIFIQHVPCUNNKESRQWZZKDOEJYVMPFMWWLTYXVCIKZNPQPBUKUHSXOTDGRPNIBYKQYCLZLDAHUZQESUXHAEGEMLNRYECNMPCPCQBGXLDTTFEGYLJINGAKIUDCJGVQCQRMRVFUWWTLGQBHLKDOJNJUZOUOSOZAOHXWJXLXJNDONIDWMRAHPJRFWMIJEAYLVHVZSSVG");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 61075U;
    tmp_msg_0.lat = 0.482391172699;
    tmp_msg_0.lon = 0.357738879844;
    tmp_msg_0.z = 0.398885376762;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.0146859789126;
    tmp_msg_0.speed_units = 231U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.877821599374;
    tmp_tmp_msg_0_0.y = 0.645796745334;
    tmp_tmp_msg_0_0.z = 0.951118014755;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UNJGNBYUNZIPCWZBYFUVGWVKRJXCXXIEVLMVESOEFWWTNBHJQXAHOTOFROLSOXOOGAFEEAPCTRLLQEEEKQABVPVIIQJTJUPASQFIJPDXFBLXIPGYCRQMLOUVDLGCNNMVYMZHQEWMGCRUXTZICQGJZHWJKDZZNRMWSLUIORWMTPPBLBHYQDYIBETIMGKYKYSFRCWUKRAUTDFFGYHJAHSPHDVMZZKTXKAWPSTGLXAJDRMBONNBFUSHCZKYDSK");
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
    msg.setTimeStamp(0.696283019078);
    msg.setSource(47193U);
    msg.setSourceEntity(164U);
    msg.setDestination(46035U);
    msg.setDestinationEntity(67U);
    msg.maneuver_id.assign("MRVRUVNTBJISTEQNLNF");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.671821707056;
    tmp_msg_0.lon = 0.925100052916;
    tmp_msg_0.z = 0.593619591364;
    tmp_msg_0.z_units = 24U;
    tmp_msg_0.speed = 0.352180849505;
    tmp_msg_0.speed_units = 184U;
    tmp_msg_0.custom.assign("DEMYFBRLRABYAAZXEQWVADPSIYOVSQBAHIUXDWFPLOFQGELZDIOSKCVOVMUIYUAKKYUCJMMJPYLGNUPEGDWTITUCNPHWMHBPVHOONKDQCKZZZCSTUUBFTMEXGBICZLZHETXSKNBQNVHSHDFAYWRCJYWCYTRNXJFGTWKXXHEVHGLWEOQUOMPMFNWDMFBVJNXRSVRCKSZWIQRPZOQGJUFYDAQJLPIMCNKXEPTARHJRLXTSKGQBVSNGOJ");
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
    msg.setTimeStamp(0.30148801275);
    msg.setSource(7742U);
    msg.setSourceEntity(138U);
    msg.setDestination(21639U);
    msg.setDestinationEntity(1U);
    msg.maneuver_id.assign("NDLTKYFHZOIJNRSKOXFXJIKDLFTILIQGMCCQUGKPEOCAZLARPYPHZBVQSDGVRSTOSXVFMTBRNDRPPBUNIGLLPUPYFCMQGMYMTUJOJBANAGSQXKYMVMPJFRBGBUAISHWDZEAEEOW");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 52847U;
    tmp_msg_0.lat = 0.107017427317;
    tmp_msg_0.lon = 0.282217940422;
    tmp_msg_0.z = 0.777367860873;
    tmp_msg_0.z_units = 170U;
    tmp_msg_0.speed = 0.0878895613962;
    tmp_msg_0.speed_units = 20U;
    tmp_msg_0.bearing = 0.857673957396;
    tmp_msg_0.cross_angle = 0.421466361903;
    tmp_msg_0.width = 0.0348676644907;
    tmp_msg_0.length = 0.722790746234;
    tmp_msg_0.hstep = 0.0176280196279;
    tmp_msg_0.coff = 90U;
    tmp_msg_0.alternation = 41U;
    tmp_msg_0.flags = 142U;
    tmp_msg_0.custom.assign("WFELIYYCWVHFUQDAQZNWFDYKAWJCHAEOSMUMNNBEHADROKBUIDJIZDBOPCGXVGJDLXQUAXAJOKQERLQSHMEEUVTRPFTKFWVTJRCOLZFUSGIHOCKVOQZECBQZIKLSWZYBTXK");
    msg.data.set(tmp_msg_0);
    IMC::WaterVelocity tmp_msg_1;
    tmp_msg_1.validity = 78U;
    tmp_msg_1.x = 0.126760535879;
    tmp_msg_1.y = 0.814133014651;
    tmp_msg_1.z = 0.836569069272;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityInfo tmp_msg_2;
    tmp_msg_2.id = 62U;
    tmp_msg_2.label.assign("LYPAWSWNEFTQAIQ");
    tmp_msg_2.component.assign("VKEPUPSBJQQUXXCPGNGJEYJBTDLSPVCFWLXPDKSQXHGYHRZPAKTIOBOEBTAWGBXUGEMIMUHNCTTBWCZEQYZVAOWKNSVCQCOSZLFQFQUJFRUECINOOZ");
    tmp_msg_2.act_time = 51973U;
    tmp_msg_2.deact_time = 24518U;
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
    msg.setTimeStamp(0.452190891347);
    msg.setSource(60800U);
    msg.setSourceEntity(56U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(250U);
    msg.source_man.assign("UVIDESCXKKIPOBLSDAOOSUPYRQDWXOSWSTXFABXUGQURMIXIYQRFLAPVTFUNKLGCMMKHYHBTAMWAWTSLDCNMNFWPVTLPAPDEZJYUTKERVOEHGZEEKROLJBFI");
    msg.dest_man.assign("OXBCJVXSXWGWIQKSPFXUCMVP");
    msg.conditions.assign("NCLAAMDCVEH");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 56U;
    const char tmp_tmp_msg_0_0[] = {16, -35, -54, -73, -21, -115, 46, 59, 20, 70, -113, -80, -74, -96, -111, -121, 85, -10, 22, 125, -63, 20, -82, 101, 48, -89, 51, -15, 30, 18, -127, 0, -79, 34, -19, -60, -61, 117, -54, -34, -89, 110, 114, 119, 80, -9, 69, -10, 21};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.591515715124);
    msg.setSource(61970U);
    msg.setSourceEntity(84U);
    msg.setDestination(43710U);
    msg.setDestinationEntity(117U);
    msg.source_man.assign("IXFKWGHJTONDNAMRINGYOUNOCSZQRQZIULLZJX");
    msg.dest_man.assign("RBTPALWGRMUNVTDSEBWQSSJRZUQXORCAMUJYVBRIHNWYGDRCKKQHNGAJSCXBYTWZJNLVSWNHAOXPNIRAYERNKYYLKLEIHKMMHPDBAZSLKFGQVGNDSDFWYBXLJEYIFTTJAYUFZXKTUPZVPFUYOFHVEVQQQXCSZKONXGEOGIXZELNDDXCMKMWPZPAUBEKMGJMJXFMPIZSQFDRBCP");
    msg.conditions.assign("ORVLWEFNWKTHQJCIVNPOEMXLOCPPQBEABMNATFUSTGINJDTIKZDHVHGNGUZBPLWJJEYHRTQYKXRTSVLXRHCGUOUPAUUQIXL");

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
    msg.setTimeStamp(0.853057769401);
    msg.setSource(13878U);
    msg.setSourceEntity(196U);
    msg.setDestination(7594U);
    msg.setDestinationEntity(160U);
    msg.source_man.assign("TPUAUWSOLYICUANQIOFVURLDOPHGXZUCISUESRVUIKVTZVAYOXEFCVQZMDGJMIDOEKWXEENEDJTATRUFKRCD");
    msg.dest_man.assign("GZXBVBIDPZDCSIECKXNPQQRPMNJSLCXAGCTEWGUODNATEYMHYAZEILYSJYIYEKAEJILZMUAYKRKKDCJYOPPQUBDSHQETBUJIEGUYWRTJGFVFKVOUQZGHTPWQRNFVMFRKIHZHOXDJWWOBJDQMKUZDZKQMSXLTHDLTVPEWBQGJQPFZGRNHIFWNMNYLYLKJUBT");
    msg.conditions.assign("ZPBBJXYSGEYPAPKJJPZCWRGGCHKZHQWYESPCCNNCNKDNOVBVFBMZSFEPMRNWJVRFYNFLTHDXBFKOVXBIHZAXZSSAYEDRNHSLKKICEORQBMSPIDACQFUGWKROOTIOELONCQAGUYISLWVHULINKJBTXGLIOYTMXWUMYXKOTLD");

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
    msg.setTimeStamp(0.454430154445);
    msg.setSource(45839U);
    msg.setSourceEntity(164U);
    msg.setDestination(54067U);
    msg.setDestinationEntity(151U);
    msg.command = 232U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XGOFXWTQDZDTNEAIJLVUGZVRYDPCEQCLGGYROVKQWSNYURIEMRKPEPSCGXIUAFOQISNWPUHLDOPVXQWXHVFOJSJLNNYEQWSJCIBFTFWUKEBDAIXBHRRIRBXVUVLMYABOPTTLZQSZIVYTSTJCMGSKDNYCBLQKBPNLZOMDTCMMPDABBUGIF");
    tmp_msg_0.description.assign("XFBUOSNTPWZOJGFFRAFBOTHNUSJMWCSARRNJTKCYYWGIBIYAMIIGKCGKOOLVPOWHHZPAFVZRKASBGDNGCSFQXTHRLPVEZJZBHDKWBIMXROKNXMS");
    tmp_msg_0.vnamespace.assign("LOXSAGPZFVAQQWRHDDEYQRZJVUEVNXKQUOVCIZTRPYSEOOKJFMHS");
    tmp_msg_0.start_man_id.assign("NMDPSKCEFETKIMDHQEIZSQUDPCXAFWMKVJNFAXXNEPFHSGOYCBLNJQXSJ");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 57806U;
    tmp_tmp_msg_0_0.lat = 0.629368190296;
    tmp_tmp_msg_0_0.lon = 0.335445887597;
    tmp_tmp_msg_0_0.z = 0.182575677179;
    tmp_tmp_msg_0_0.z_units = 128U;
    tmp_tmp_msg_0_0.speed = 0.840285287801;
    tmp_tmp_msg_0_0.speed_units = 134U;
    tmp_tmp_msg_0_0.roll = 0.176688021658;
    tmp_tmp_msg_0_0.pitch = 0.0678696913306;
    tmp_tmp_msg_0_0.yaw = 0.061538163594;
    tmp_tmp_msg_0_0.custom.assign("IOHJVMJRLBUIGBOQYCRPQGNOCEHYNGLXEVVDORCEIGIJDVLVCPIKUEMFXJSCGZBFVQUADXNGUFAVTDAUNBQZCGEMCJKULFAPSWCXMRHRLXHXSKWSDETVPPZHABFQBABYIHTUOZERSGGHERLNSYNUYEKZLUDPHRMEOTAYCTBKFMXLXQ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::ReportControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 109U;
    tmp_tmp_msg_0_1.comm_interface = 50U;
    tmp_tmp_msg_0_1.period = 22295U;
    tmp_tmp_msg_0_1.sys_dst.assign("GPJLZZZSKXFNGTHHXOFALOPIVH");
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
    msg.setTimeStamp(0.400786282551);
    msg.setSource(51316U);
    msg.setSourceEntity(191U);
    msg.setDestination(32091U);
    msg.setDestinationEntity(112U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SJAGJKBJFQSZWEBPEFURWAVPDXQXQOMQIOQUUNROPIFSWVCFTXBMTZQRKUUEZJJHBDBOKAHYGPHZVTJQAUGCTGILSCLNKZXIKMIXCEWWMEEWSEMALMKWBLMDYPLGTONQHZUOPGZYNEYROWITJNUHIFDDHHZMAGZXZIBCLJVAYWDRTAPJXQFYCJBCNSHDDDTPLFVVUSFTEYNRMKYKR");
    tmp_msg_0.description.assign("QHRTSGTSTVAPUMLNPDQVWQRG");
    tmp_msg_0.vnamespace.assign("PTBTTLBSYDAHUUHRSQFKGMDAWBESVLRFLVFFKWQCUAXDBZPPWGZEOGXHPQDKRUESVHLFOJINPIJZJDDIGPVZKNEMNACJNJJZVQRLLXYINVIYEDVXPETOWLVNOVUTSSFEKLKSXYCFQRWMAOUYCXYABOHCTCHWDHKCBBFCMYTPGHWNMOGAMGQCIJXQOVLPHUFMKOWXEMDIWS");
    tmp_msg_0.start_man_id.assign("BZLIYTOHYARVWMUOBYKFVZIUGSXGEZYDGEORBBOAQTNHOURRFAETQNDSBIMWRUKHXQVEGNMULPDSBICKADTAFQCDYWPLFCRVPFPLJMIOXMFYUPARGUBKCFTIVDMLSANQKMDCXZJZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MUILYFJKZNOGOPVXAZCJRRXOBIVBRDLIRNIJQWLDWIARUNHGSUKVUYZTDEOQLACTFPFWYDZTHWXZETYQEQMCQSDGSBZMGCKZIQFRMBYEALAENZJHSCGGMVAPVXCOKOEHMGLIOSUMHYKKDTGFPNTPFPCWLEXYIHCXBAZNKAQRWRJUSPBUDMNDMRXQUWSFHJNNWRDSTYPLUILJKOSTCTWP");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("SMRKSBWBRRMYPJPDQTRDHOZKDGSUQPVEBOOGNXCUKRIFAJSXGEMRKYQQTVCJOWYDZSOCXZDRFMODBXJHOYEXFGBEFFYUJLIEUHBZANFHHQTITEPUTJFCXMSIHXWTAUUDCBKANSTWKUQPZHXNGYPQQYGNBGPLKPLVINIATAOIHWKQZMSYHENJINNYJCQXZCBYLWSAOAWHNL");
    tmp_tmp_tmp_msg_0_0_0.max_speed = 0.680188958141;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 160U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0988809150404;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.267684080742;
    tmp_tmp_tmp_msg_0_0_0.z = 0.570582581845;
    tmp_tmp_tmp_msg_0_0_0.z_units = 70U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("QPOQDZHTJSUGFSYRBEJNVTQSDSCQJSNDONYQJULDWXBAIUSWMIOQKRVZKSMKXIYAGVAXXUVWOITNFZCRFGCKLAZWDDJAEGSQWOAXUZWPFAHIRIRGHAOVPGPKLEXZYDRNTOOKRGCFCBQCPCWSWDINYLFEFCVBBMPKPKTYMXATGVEP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DevDataText tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value.assign("PMZRHVVSADHXBLKBTQNAVVJQPDEFTZTGZRQOYQABJRHRDVWNBCHSUYVLMTADWIEKBEFYYECKXUGDSIFRBKFNNAJPKQGEQWZGRIMVXDLCXZXWWHXDWLXKSNOIWKTBKLNREURUFCIMCMRDBBXSANYBTZUUHYZGOHSSTOLUVJMKASPANYXNHIPLTJKJEWUQPXGWOEEQVFGQDOFCPOAFFYZLGRPLYLCJWZ");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::EntityActivationState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.state = 59U;
    tmp_tmp_tmp_msg_0_0_2.error.assign("FZTCVNJLPLLBBYDRCMMYOZJXPDKGATANKKXVDWYXBAZMOVOPAQBQTFCPUVZCHGGGGGRTIEXWSILWFEOHEWVFDQTJICYSECMVHWEMUTIPDILJIIFYYJQZKNZSZRUYBYVHTKFOATROUNECHNGPZJHXKSZQX");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::EmergencyControlState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 56U;
    tmp_tmp_msg_0_1.plan_id.assign("ZYFAIGYOGZLVIZCLGLMLUIQMADTUGBBKDOBQSLGWTRIBWJUKFTXWFDIOKBHPBNMFYJNWCHIQSUJXWEHVVRIAWTZXCFDIQVEUOEJCTVYQPNWQPRAZSYRFOPCWUDMJQCRKTYPHFKODJQPNNSSWEBVCXKIOVOAYGMIBOGZMGHNSGTUYHLKYRDZCXNLPHEELAJUMSJDJQWXZRSXVRNOPXCTTEKQHNKAUMSDXPHJUELHFSCYVAAABKFVTZRFLM");
    tmp_tmp_msg_0_1.comm_level = 69U;
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
    msg.setTimeStamp(0.338468030375);
    msg.setSource(56208U);
    msg.setSourceEntity(220U);
    msg.setDestination(21419U);
    msg.setDestinationEntity(175U);
    msg.command = 145U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FGDMFWEOSQIQVZXKFRENVNLTZPIPMHIOUBSTNAGDWFHCTSYEHURNODNVVDSARUHRPBZVAOYOQCNIRUMUBBSKAGTJDPTNJPRTEZDMRZUBXKEQDMHDJEVXWXDEWYCXZWKPUPLIPLYJQCWFYMOSKOSGYBRWYVOLSLCWUXSACTEKJNJOUILYFKUCFTMQMBCDLJGLVIIYYSKHLFQIBARWNNZQABGPEHHHXJIJQAXCTHAMWGXXJOFQRCBZFZG");
    tmp_msg_0.description.assign("QOZFMRLYKTEDUFEEVYCIVWRRECWQOOYGXDZPTPUMUFKWSMTXCISNLZMKXCJVNMWHCUBQSBQNAEDSSRZVXRKDUPNGGJWAHRBKVUDSNANMOFJTAELJTSLPOOIPJEBUQIDVMSNHKQZVUCHTYOQITRM");
    tmp_msg_0.vnamespace.assign("AWISSPUYAIZXWBZRGTKVHPZZXJLLMLFD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PCAVLRLWIOCHCXYKVTBJCQCJEUZBVGANUXKYGUSCXKXDLQZYENPQHDODNWVYJOZEMPCAKOBDRJNTNKLGQFUAISSIDBEJTULXQXXJAIFKKIJYRMRGLEGEDTMZCLUQSZHMERLWWPPYXIFZYQOHEVAADFTFIFPQRFFWZKISNVOBFG");
    tmp_tmp_msg_0_0.value.assign("IPWYSWUAJJDWKGZBKNESGQRLFUBPTCOVWKEBMNJVSWSOIIMHGNNFLGKJAUDTFRACDHHXUSS");
    tmp_tmp_msg_0_0.type = 105U;
    tmp_tmp_msg_0_0.access = 188U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YHHHIKBYSXWVZPCLDJGSJMSQYNGSVNRCGQAIATLSIXZRGEJRPZOLCF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HVQIDDJVXOGFYMXHHWUBAYMBCUEISZFKFVNMJDMYEQOKZXUSFZOCYABFUFSAQOFHDCJULEYAVQBNBH");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.arrival_time = 0.965569266164;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.89233628433;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.386338906272;
    tmp_tmp_tmp_msg_0_1_0.z = 0.273041725807;
    tmp_tmp_tmp_msg_0_1_0.z_units = 206U;
    tmp_tmp_tmp_msg_0_1_0.travel_z = 0.659050033762;
    tmp_tmp_tmp_msg_0_1_0.travel_z_units = 254U;
    tmp_tmp_tmp_msg_0_1_0.delayed = 48U;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SmsTx tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.seq = 2471070057U;
    tmp_tmp_tmp_msg_0_1_1.destination.assign("ROVUCEDANDDPTLTAXYMLNEXHCFJITMXPMDBDOMXCJHCYCJLHVJVKSPIFBOQLQNDJBKJFTGLMQZHWETKHUIPQKGCSAIUUFDSBYPJQZWCNJMHRYGOIPMLBLM");
    tmp_tmp_tmp_msg_0_1_1.timeout = 35797U;
    const char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {-66, 36, 94, -55, 0, 96, -25, 70, -94, 105, -31, -67, -124, -35};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Land tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.644573574824;
    tmp_tmp_msg_0_2.lon = 0.983163634107;
    tmp_tmp_msg_0_2.z = 0.928606007021;
    tmp_tmp_msg_0_2.z_units = 21U;
    tmp_tmp_msg_0_2.speed = 0.848017086653;
    tmp_tmp_msg_0_2.speed_units = 172U;
    tmp_tmp_msg_0_2.abort_z = 0.399076224488;
    tmp_tmp_msg_0_2.bearing = 0.498793632131;
    tmp_tmp_msg_0_2.glide_slope = 106U;
    tmp_tmp_msg_0_2.glide_slope_alt = 0.346299765827;
    tmp_tmp_msg_0_2.custom.assign("JNIFMAGWZIYWAPSOVOUEKUPZCIYMVNCETRGKFTGRFIQOXQTAXHBRWBVSYPTVTMDXJXVTSFCFYEBMHBDUDOTUKQPTZEFKWZPIDOEHMWYQOASVXFVHAXWQXRLEZXDACUABLUECHJINDPCGEIPBISIXLZTOQKRSHOCRRNQCNWMJYBUSDRRKJGESQYJHPGFJJLLWCPMEAGUGYGNMFPNRVLXUSKOMZQTKAJVCQYYILMWADGHBFNBDJHZKUOH");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.73566635533);
    msg.setSource(20911U);
    msg.setSourceEntity(9U);
    msg.setDestination(22451U);
    msg.setDestinationEntity(213U);
    msg.state = 163U;
    msg.plan_id.assign("PIKQWZQCMBXNSOOUGBILUOJOMQKRJPIKFOFTEAVNBCJCUBLHPKJVQAGEIVLQRZWMLBTLKYKXXILGOIDGZFZIXWTVKXLYNEABGQPRNCRDSTTOEQQDUCXHFYBXUZUXKMAYNWIQHCFTEHNJVGWZVPOBMITFAMWASBSYQPHGKFPMZHGSYHDVZUVXNLMRFEPRBMCAYESRANHAPACWGIJODEE");
    msg.comm_level = 223U;

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
    msg.setTimeStamp(0.235156489256);
    msg.setSource(228U);
    msg.setSourceEntity(152U);
    msg.setDestination(2050U);
    msg.setDestinationEntity(218U);
    msg.state = 194U;
    msg.plan_id.assign("LWFSGECEDMGNPBPFKFUBCRNKXNQAAUQKGXPPHIGKHTJKEUVKISLVGWUUYBXJWBHYHUBNDVMIAJQGQXRRSVIHVXTTJVIPVISZZXTHMLXMKUTBMEISZCWNGYZAFOVZAQENGGKTRDATWFMJYLZPUPYFPBMBXSCCBQNDKSDEDUFLSOOYEZRWEHQ");
    msg.comm_level = 216U;

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
    msg.setTimeStamp(0.950598410597);
    msg.setSource(59308U);
    msg.setSourceEntity(247U);
    msg.setDestination(11556U);
    msg.setDestinationEntity(111U);
    msg.state = 252U;
    msg.plan_id.assign("BIJDGWCWIHXQBPZKOTBKPXUSIIHHAFNLVQLALVEOQFIOPJSMHRCPNSCBDXYSXXXW");
    msg.comm_level = 188U;

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
    msg.setTimeStamp(0.35375024379);
    msg.setSource(30045U);
    msg.setSourceEntity(140U);
    msg.setDestination(57009U);
    msg.setDestinationEntity(175U);
    msg.type = 161U;
    msg.op = 233U;
    msg.request_id = 32565U;
    msg.plan_id.assign("HXICIGXYWVSDMZHLXCFDGLZTPTUKQBYNKMKBSMQWQZCXAEAMOYSSNXRWWHTKEKJGBTRSFQXZBWELUTOHVLZFXFPAPWRBHTGJDLSAUJEWKRRL");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 4184119799U;
    tmp_msg_0.lat = 0.920111284395;
    tmp_msg_0.lon = 0.389635296233;
    tmp_msg_0.height_ell = 0.960327415433;
    tmp_msg_0.height_sea = 0.342307855511;
    tmp_msg_0.hacc = 0.160431731268;
    tmp_msg_0.vacc = 0.495031544562;
    tmp_msg_0.vel_n = 0.553734843508;
    tmp_msg_0.vel_e = 0.896944418955;
    tmp_msg_0.vel_d = 0.200025675862;
    tmp_msg_0.speed = 0.983232017609;
    tmp_msg_0.gspeed = 0.508433896561;
    tmp_msg_0.heading = 0.0065401458867;
    tmp_msg_0.sacc = 0.668398364567;
    tmp_msg_0.cacc = 0.29728006663;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MIDCVRCCKEDUOAILHJMUWSOCYAYFIDTDPKOIVKVFYUYQFMKJRPMSSXOWTLWNYDUZEMVSZCTVGGJQKRSPFQBWLPYVULUJDQGEUABLORYBHOAXLZSVTSZNGWTZYEHAJJGGNPEBFRDEZCNEGCAKHGSOQXWQMHZAQXRVTRRKCTYHTXIVMFCDLXFRJIXRNBBHLTKSBDJASFEINMJCBTNUPBMZLPIOIPWX");

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
    msg.setTimeStamp(0.532283322581);
    msg.setSource(41981U);
    msg.setSourceEntity(102U);
    msg.setDestination(5115U);
    msg.setDestinationEntity(238U);
    msg.type = 227U;
    msg.op = 148U;
    msg.request_id = 19383U;
    msg.plan_id.assign("OABFWVKJAYTSZIUQCHIILBVMCTJMUINOVYCINCBPFYFYAHLXRFIAPJOCLQGLADJRFTXKOKJFZHDNVHQUKUDIDTHXPZSLMPSOMXROSJBYCRMZSBGQFBZGUIDGNHWHBRLOCWMNCBNSPUJIDQHCOZOYTMUSAAYKOJSYNJKFWXSUWTPGZGVVQQFWQRKGXEALERUZMINLGEHBMYGPHNEA");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.209148952191;
    tmp_msg_0.lon = 0.00512294397136;
    tmp_msg_0.depth = 0.346986821299;
    tmp_msg_0.roll = 0.502863220591;
    tmp_msg_0.pitch = 0.236318000339;
    tmp_msg_0.yaw = 0.336258441858;
    tmp_msg_0.rcp_time = 0.281448373124;
    tmp_msg_0.sid.assign("VYOBBVTIUARHQKXQVJQLNGSMSIHMZZYBNRHZXEXHXSNLWGECQYVIHOTULOUMRFWSWXGVOKTZMRCZKDXZUUSDRWYWFJJIYSUHZNEOVCLEZKPGHLVEQRJOKDCQDIDFAFIGNXBZTTYSYNKWFJMTCTIHMBKAEOJPLCPDCRAFJUGTFTVAJHW");
    tmp_msg_0.s_type = 109U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AGYDXJLGKCIPJMOEHVFFSPEQXMPVJWXOPIHVPDXUIMDSLRRSWPYCABMCONLGKZLIHXQMPDVVCKQTRNQWNBXUXDABJBBIMHYMONAHKLYJWTZSFQRBWKUBVOKEHT");

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
    msg.setTimeStamp(0.845270510721);
    msg.setSource(25360U);
    msg.setSourceEntity(120U);
    msg.setDestination(23833U);
    msg.setDestinationEntity(102U);
    msg.type = 145U;
    msg.op = 162U;
    msg.request_id = 27842U;
    msg.plan_id.assign("ZRRTJSGOBCLMQQKLTTTHXDWAHFAOWWDYEHSVUGZMSFBKRUCGUKYXXJDDRSLMDRMSYMKQHOVWBVYXCPDEZDRYPSRZGYUTAZIAMQJLGPZWHXBEVJRGPLKZOSJLTNTVCTFPXUELKOIJOJIVNXLYIO");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.150366671914;
    tmp_msg_0.lon = 0.941047199276;
    tmp_msg_0.z = 0.853363082999;
    tmp_msg_0.z_units = 53U;
    tmp_msg_0.speed = 0.883235847362;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.takeoff_pitch = 0.754044596735;
    tmp_msg_0.custom.assign("FDGSRGIFDGQDPEPKSJGMZNWTMNQROYUMIEBQGWSYGMXEZOLNPTOYPJAQMKLZVZZCPADHHRMBWKOJIS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TXRSIQZPFQSBMXTVPCUACHOIISZHRWQMJKVZYTSWHRDFDAUNDYTWAYGULHGDLVJKUTQRMAJZPBTECDKJIVGMPOFHDFXVGBEIWPZUCWYSTUBYFRTFNPWLSMZHKNCHQZEJQSXCXKVFHUQUAVORLONVDSEDJLCAOOFXJQEKBOSAKAXGOVGYGEJVWBLXNICCIEKWZLNTMGQYBLPPWMNYYUEGMLDYLTBWIE");

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
    msg.setTimeStamp(0.884391735187);
    msg.setSource(37223U);
    msg.setSourceEntity(193U);
    msg.setDestination(28883U);
    msg.setDestinationEntity(0U);
    msg.plan_count = 18642U;
    msg.plan_size = 3662620202U;
    msg.change_time = 0.751566207588;
    msg.change_sid = 30131U;
    msg.change_sname.assign("LUOARDKEBURAZNAOYKNHPFOQGGUMVYHXIXUBGEWXBHYGYQGLVJBERJSLCEQJEXMZATGVVNAVDFKTCAGDFWWHRIRZVKZVUNDBFCZBWMOMQPCZY");
    const char tmp_msg_0[] = {27, 70, -60, 34, 13, 74, -128, -127, -73, -57, -22, -119, -66, 19, -44, 108, 67, -119, 0, 2, -61, 45, -114, -16, 85, -2, -80, -124, 8, -14, -81, -119, -110, 109, -103, -87, -67, -25, 10, -40, 113, -47, -62, -13, -14, 82, -100, -5, -60, 18, -111, -16, 89, 2, -37, -109, 45, -79, -70, 63, -42, -84, -72, 111, -120, 47, 122, -108, -14, 16, 32, 8, 80, -16, -121, 63, -29, -122, 88, 34, -3, -22, 90, 22, 114, 84, -73, 7, 60, 59, -23, -94, -123, 19, -30, 38, 10, 56, 69, -117, -14, -123, 35, 37, 60, 49, -6, -59, -31, 10, -45, -64, 91, 54, 102, -76, -103, 30, 58, 79, 12, 85, 123, -4, -4, 20, 38, -43, 38, -24, 92, -75, -90, -40, -18, 51, 29, 58, 25, -7, -102, -22, 86, -20, 63, 64, -109, -112, 16, -37, 124, -35, 118, 43, 80, -62, -108, 101, -46, -6, -51, 57, 21, 94, -19, -41, -88, 11, 29, 61, -80, 111, -53, -113, -24, -84, -85, -44, -54, -89, -69, 33, 23, -91, 7, 3, 23, -56, 58, 16, 104, -124, -9, 31, -37, -96, -19, -118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HNPBFITJUYDCJEUTFNRZOMUOJTVIXWBGILZWBWYJGDUCEWKXAWVQOQSGNLILRRKAQIPYLPUCNPKXCPQZOFYEAOJVLALNTEWPYSUUVFZKQAEGFVWSMRVKBEBGZNVICVTBPQYFSMQXTKBAGSDDRPTRGPPOTHZDEAENZIOEAMCMZAYMNYFHGNHQCIZKCIHVMWXCWXHIHKDOWXSJXDFKDLJHJGBYROGJOSQRJRLMZSKNFSBDL");
    tmp_msg_1.plan_size = 24270U;
    tmp_msg_1.change_time = 0.361723825002;
    tmp_msg_1.change_sid = 17715U;
    tmp_msg_1.change_sname.assign("FOKTHKLVVHTIHVGOKYYZBVJCWOTVRWRJLDPJROESRHTLUNJXNALFZVCTQNIEBDJZPAJYYPHNYHHZXBCFDKAGLXSLUQOWOXKMMBIMS");
    const char tmp_tmp_msg_1_0[] = {7, -66, 85, 64, -44, -9, -13, -109, 75, 60, 114, -52, -87, -62, -92, 70, -41, -18, 12, -63, 72, -14, 116, 56, 38, 61, -56, -19, 72, 94, -105, 34, 109, 122, 46, -117, -81, -75, -94, 86, 6, -26, -6, -26, 103, 114, -55, 102, 120, -28, -44, 110, 8, 2, 95, -19, -34, 6, -96, 10, -67, -70, 35, -18, -123, 126, -15, -101, 5, 68, 48, -70, 103, -89, 19, 77, -36, -1, 90, 123, 87, -83, 6, -68, -73, 55, 79, -77, -57, 45, 33, 15, 16, -90, 106, -124, -18, 124, -26, 13, 24, -31, -55, 15, -88, -113, 18, 123, 50, 47, -88, 118, 51, -60, -11, -42, 50, 8, -113, 6, -87, -62, 8, 47, -116, 28, -56, -9, -115, -100, -98, 43, 50, -9, 100, -75, -92, -15, -112, -9, -58, 67, 5, -98, 7, 41, -114, 34, -97, -51, 28, 105, 31, 26, -63, -19, 118, 91, -82, -30, -48, 56, 9, -86, 100, -83, 30, -61, 115, -114, -98, -125, 91, -106, -122, -84, -8, 107, -92, 10, 92, -86, 22, -69, -76, 7, -26, -86, 109, 66, 46, -101, 86, -12, -35, 3, -112, 38, -54, -25, -83, 26, -115, -69, 21, 56, 39, -88, 45, -60, -107, -72, 13, 108, 16, 116, -34, 50, -51};
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
    msg.setTimeStamp(0.742812295538);
    msg.setSource(36707U);
    msg.setSourceEntity(181U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(189U);
    msg.plan_count = 11326U;
    msg.plan_size = 3543536090U;
    msg.change_time = 0.527942293502;
    msg.change_sid = 12269U;
    msg.change_sname.assign("WVFRCJYNDJYFHNWOWNXDIUBBQAPKPSWMMOJWGABOYLADKZPDGEKZBIHHXSAMDTFEACWJJKIBJOCTKXAEZONQVLGTMKYDUBUMHLKDOZXQWEZNDGRLNWSWDLPSKFHOFGURPPYXFWCJHEVBFMSXTDANEPEMCSCIRMVQHPRMOVIYPLHVYBSQUAQLAQCQCSGUEBVJNRZKTJZHFUAXIYCOTLNKNGZRTYGZGIEMTTEQTZGJFPSHVX");
    const char tmp_msg_0[] = {113, -2, -3, 121, -93, 76, -104, -8, 75, 108, 123, -70, -28, 32, -99, 2, 8, 29, -113, 0, 87, 58, -33, -62, -55, 85, -54, 78, 38, 121, -42, 88, -5, -113, 62, -61, 44, 13, -125, 106, -42, 122, 124, 96, 78, -17, 115, 77, 83, -17, -103, 75, -47, 4, 52, 13, 11, -100, -29, 94, -113, -61, 59, 62, -27, -30, -120, -29, -128, 105, -87, 80, 107, -41, 95, 110, -119};
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
    msg.setTimeStamp(0.0921665438408);
    msg.setSource(40709U);
    msg.setSourceEntity(183U);
    msg.setDestination(3339U);
    msg.setDestinationEntity(106U);
    msg.plan_count = 28320U;
    msg.plan_size = 561523631U;
    msg.change_time = 0.437806436865;
    msg.change_sid = 51849U;
    msg.change_sname.assign("RSQWROMRJQGOBFYSTWZXGABRDQAZOVPJNDTTDYPDEKFSDUNMAZCPGKBJRPVBHUYYZHAIMMCVKMSEDDZGQPCXXUXKJCZTAYUWFFMVHQEOTEZWFIXTEQNGFHQNWBZMNVQHOOTYHNXHJJMHOBPMXNKLLULABNKZRWOWXIXLIYLSPUP");
    const char tmp_msg_0[] = {-16, 39, -71, 117, -73, -21, 60, 70, -72, -122, -88, 58, -77, -102, -101, -123, 124, 54, -100, -50, -37, -62, -39, 107, -92, -18, 99, -73, -108, 92, -45, 93, -35, -26, -59, -101, 66, 91, 16, 45, 91, -96, 19, 47, -7, -8, -9, -58, -120, -121, 101, -30, -55, 113, 11, -58, 71, -48, 126, 46, 82, -101, -105, -87, 70, -1, 125, -67, -78, -128, 17, -93, -68, -7, -79, 116, -94, 8, -93, 50, 113, 66, -77, 28, 103, -19, 80, 66, 60, 13, -66, 100, 59, 49, -21, 41, -81, -93, -68, -61, 117, 21, -107, -10, 13, 8, 91, 55, -32, -101, -31, 40, -103, -32, -109, 4, 32, -32, 89, 54, 41, -114, -7, -98, 97, -44, -78, -105, 19, -40, 98, -32, -14, -99, -109, -23, -89, -85, 85, 45, -6, -22, 117, -117, 101, -51, -61, -38, 65, -3, -78, -105, 36, 62, 41, 18, 39, 72, 20, 35, -43, -53, -74, -62, -95, -121, -93, -45, -14, 77, 24, -114, 68, 82, 63, -44, -31, -124, -90, -31, 113, 121, -2, -65, 111, -111, -30, -103, -41, 113, -8, 78, 3, -31, -81, 104, 55, 39, -24, 91, -57, 87, 75, 23, 40, -7, 74, 105, 6, 29, 113, 95, 56, -79, 79, -11, 36, -74, 107, -68, -96, -32, -26, 88, 73, -104, -86, 14, -103, -110, 47, -44, 3, -93, -39, -124, -115, -96, -128, 64, 17, 55, -33, -47, -13, -17, -20, 4};
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
    msg.setTimeStamp(0.480799659904);
    msg.setSource(60628U);
    msg.setSourceEntity(93U);
    msg.setDestination(9780U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("CYOCPAPFKYNAVRVWKLJYAJQRDOFVWZNUUSECEYHCTMSYQLLHM");
    msg.plan_size = 37419U;
    msg.change_time = 0.0262662211429;
    msg.change_sid = 48088U;
    msg.change_sname.assign("FNROALBOUJJUVVVRPAFUHMDQGXOQLYZAYIVTFYGTIDDCXTCYFRGCTIWZCOUJYLHFFNKXLIBKLESI");
    const char tmp_msg_0[] = {-10, -98, -115, -26, 48, 111, -47, 52, 115, -83, 115, -54, -17, 123, -101, 73, -128, 38, 119, 23, 0, -60, 7, 96, -66, -2, -93, -99, -110, -83, -128, -36, 70, -122, -81, -119, 107, 41, -94, 76, -81, 74, 57, 11, -122, -21, 32, 45, 20};
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
    msg.setTimeStamp(0.0668140154622);
    msg.setSource(58549U);
    msg.setSourceEntity(135U);
    msg.setDestination(63450U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("XGMTAYLMUAIXEHNWMZSXZPEZJXEVLVPDCVDMCOQAPATRHRAQQWUPJJUTAGEKQVIZIPVHJUXMSGHSDBEBWNWVHYFLGZYGYOUIBSWEPRODYSFTJCMNVLQJREFBGDJSBFDNUQFCKWYHDVERWOCMR");
    msg.plan_size = 5586U;
    msg.change_time = 0.892082437771;
    msg.change_sid = 18894U;
    msg.change_sname.assign("DUHONTRLTACUVHPEBGSEJZYYKHUIDKLVTKMGGNWIXLOBPTVCPXALDEDDDBYVHYNNZMMFFVZOYIJZSTFMMQHUQCQCPSORBGFTPQSANVXVUWDCFWHOZVQNGYARIIWEBIRQCJUSWFBJDKROUPFLLBRACXWW");
    const char tmp_msg_0[] = {-21, -23, 59, 53, -3, 43, -57, -66, 30, -87, -98, 121, -51, -30, 43, 52, 45, 106, 47, 125, 103, 126, 7, -53, 9, 79, 73, 101, -111, 16, 124, -120, -10, -73, -98, -115, -72, -15, -104, -27, 2, 31, -20, 63, -42, 4, -50, 16, -24, 91, 73, 61, 11, -88, -20, 80, -112, -45, -82, 78, -108, 126, 29, -74, -11, 26, -15, -14, 61, -100, 34, 33, -86, 97, -126, 9, 86, 11, 25, -90, 88, -23, 4, 121, 66, -24, -111, -75, 106, 36, 95, -58, -126, 106, -58, -33, 34, 18, 121, 36, -73, 56, -46, 113, -27, 69, 93, 50, -57};
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
    msg.setTimeStamp(0.291947788334);
    msg.setSource(20224U);
    msg.setSourceEntity(121U);
    msg.setDestination(10397U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("UPXTDUQDIOMEZESKJIHMVACKYLJSBMNJIBCZAWEVDCUYRJAKCLKXFKTCTVJZECHPTYG");
    msg.plan_size = 2345U;
    msg.change_time = 0.687314204951;
    msg.change_sid = 37021U;
    msg.change_sname.assign("WGHXVCFZCKUNLEMYRZVDPMMANRZ");
    const char tmp_msg_0[] = {-124, 2, 0, 34, 10, 49, -74, 117, -105, 19, 73};
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
    msg.setTimeStamp(0.993134883329);
    msg.setSource(38300U);
    msg.setSourceEntity(161U);
    msg.setDestination(7191U);
    msg.setDestinationEntity(122U);
    msg.type = 98U;
    msg.op = 15U;
    msg.request_id = 25814U;
    msg.plan_id.assign("SBMXXNYYGRYJBMZGUBZYWVQRSKDQEKLSXIALKKOEIPWYNVZNAMIJIXUGTXSFMTDTUCGZVYJIWHNC");
    msg.flags = 34050U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.op = 173U;
    tmp_msg_0.request_id = 3771U;
    tmp_msg_0.plan_id.assign("JDKTQNWADQDVJSPTWFHDXLCGHUZUWRZEFMIGPVRBDEMUVMVKANCQNJBANMBZNBSUBENKWNIMTUZXIOBBEKWRLNSKMHFYVXZXFKGYYXPULRTYNH");
    IMC::Salinity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7009224609;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VKSSAEJWBGUOPFHMGJPGHYDWLRJYVGEWOYPGULAADBXMBMLCGDNRSMMDUQACDWXQUMFOEVSAYYUFDD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZYWEEMAOOASKHOYKECZDJVWEGMHFUBQVOIDMDMHZCLNBDHXTNKLCYQSBXOXAGHNVOQTBVJLZCLNBSEYOHUJZGTFRSFGUWIQYEOEWSOIARHSDJKNPXRLLLRJZ");

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
    msg.setTimeStamp(0.0941749513777);
    msg.setSource(3394U);
    msg.setSourceEntity(36U);
    msg.setDestination(30995U);
    msg.setDestinationEntity(199U);
    msg.type = 211U;
    msg.op = 233U;
    msg.request_id = 33794U;
    msg.plan_id.assign("MXJMGVDNSDPIJAIYWQBLAZLIYPSZRRDRXKBOOBQN");
    msg.flags = 26931U;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.495041333336;
    tmp_msg_0.v = 0.510844792153;
    tmp_msg_0.w = 0.854781786475;
    tmp_msg_0.p = 0.215690676955;
    tmp_msg_0.q = 0.193179862998;
    tmp_msg_0.r = 0.0768183387807;
    tmp_msg_0.flags = 117U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BPAFFPOSBCZRAPHLYNLOVAAQCKMXUXSUIUXIRNBJVIEPDSUVXZIKWDRQLMUWHRNIZSCRLIFKPHZOOBVMEDRQTIJGDJTNDGEHYUHCVSDMXPDHVHNTEQQNZOWJPOYOELLEMYMZIVXSRNWFNYVLGBDCWSJQMGTAUQMZJBGMUGFDETYAGWRNWUBJZEYXGZKFRHXIAKCXKPGFVQISAJWKJCHLUOMCX");

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
    msg.setTimeStamp(0.0191173884713);
    msg.setSource(48405U);
    msg.setSourceEntity(169U);
    msg.setDestination(64423U);
    msg.setDestinationEntity(248U);
    msg.type = 192U;
    msg.op = 7U;
    msg.request_id = 49916U;
    msg.plan_id.assign("MTCXOBGJIHRSQRHPWOCEZNMFQLKFEQQHVXDNXFFI");
    msg.flags = 50253U;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.674431508623;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SQGYNUFMIMTNDSBVUNIPBEHFO");

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
    msg.setTimeStamp(0.572453936453);
    msg.setSource(2653U);
    msg.setSourceEntity(138U);
    msg.setDestination(10975U);
    msg.setDestinationEntity(131U);
    msg.state = 57U;
    msg.plan_id.assign("GLKLTIHPFFYSNJBJJWNCIHMOOEKTCWUUBUKMYIDXPNKYFUSNFFONE");
    msg.plan_eta = 1385507738;
    msg.plan_progress = 0.634150768138;
    msg.man_id.assign("FWFQSRFNVZYQHMXBNWMYRVTTDUSWRLHYZLLFQEHIREGFTGDQDWKLYWZLSCMHJCOXDLIJZITNBMGTCNZASEPKBVXDUGGVCQJEYDUHMCTYDAEJWYJNMZDSZXOLXOJRCWIAGVOPSAXOBEUTUHIPVPLICFKTNYSSLVXPPKOAKO");
    msg.man_type = 28838U;
    msg.man_eta = -2098281224;
    msg.last_outcome = 52U;

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
    msg.setTimeStamp(0.102226562902);
    msg.setSource(48751U);
    msg.setSourceEntity(248U);
    msg.setDestination(19566U);
    msg.setDestinationEntity(187U);
    msg.state = 57U;
    msg.plan_id.assign("DRBFPHVRSTMQTYAKXVEKUCZVPAFFERCQGZQQOHWGBSSDBORIAJTXLUIBXQRBEMPRJWCSDMAFNPIHGGYVPARKEMJMQKQOFFXZVZEXUGMKZIJDNIHXWJCTMSPTJTWSODPOQSQBPKNWTHKIIVENYXLNDUNYZYCAXYHFGZOWAFYDBLZKNJMKMWLUELVGIHDS");
    msg.plan_eta = -1468614149;
    msg.plan_progress = 0.993162362224;
    msg.man_id.assign("CJNSNZDITVHKSKLQIDIBLCUDJLNJIWPQRUUQVWMUGXYTILBOCNWSPVJVWCZYENJWHXZOEVJYHGLGAWAIEVMXQANLXKWESXHPEOSWSLOKOYUVJBMYDPQBEYCMIQZYGPBAYAGANOMMZRFJYTGRBOPRFMFKNKJSEFGRZLCRPAMQDDFPVHVMHPZDVIUIRXCB");
    msg.man_type = 31530U;
    msg.man_eta = 958054160;
    msg.last_outcome = 78U;

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
    msg.setTimeStamp(0.589740056846);
    msg.setSource(7413U);
    msg.setSourceEntity(28U);
    msg.setDestination(36027U);
    msg.setDestinationEntity(242U);
    msg.state = 135U;
    msg.plan_id.assign("HWZDCSFNAOKCAUGCYCSBDWULGVRWRVEPWQYWVCSJDECNDEAJMKDHBKMNEEIYIBDPILRGJZEBJGYSFFAJRBDLGJSUMORGNRMWEZCXHKKKAYXIVJQLWNFTPSZSSLUJFNQYULKBRZBDBGZCEUQGOLTQUFKNLRNZYKZPNOPWACPULKZPGMZHXEWHFQRJFBVTDOLHXMXAAXRQDPYJTGPXIIHMETFATIXXWVTFOTIIMVO");
    msg.plan_eta = -716180869;
    msg.plan_progress = 0.237562379569;
    msg.man_id.assign("VBIOPKMYBHDWHAUDYFWTITCXORCLXUAGVIMIOGI");
    msg.man_type = 13522U;
    msg.man_eta = -668444004;
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
    msg.setTimeStamp(0.163437207486);
    msg.setSource(11677U);
    msg.setSourceEntity(86U);
    msg.setDestination(55514U);
    msg.setDestinationEntity(108U);
    msg.name.assign("IZHTAFDWGXECUSCRJJQVGDGUWKJPFJYIEEAITRPOEXWJCZUTWTWHCWTUNLXLMDXRMTQVMURZSMKWRCMLQVWFXDKPBMIDVENFOIJADOHHNNGTZJDWNFDHSYZZYQILUQPVANADSSQPSENZJFGATSSPRFMTBYOXCJYIJYYYOXHOULXVLMBUCYKQSOXRKVLVRPNKSBZUVCEHBKRQAEMKITUGZNHXDQOOFFAGFBGCBOLBPVLYIBHG");
    msg.value.assign("SQNYMODMYLGWUJJUVBGYNUADUPABBYIWFVBEZEQJKMCXRIUVLLEGSPW");
    msg.type = 237U;
    msg.access = 74U;

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
    msg.setTimeStamp(0.160060666063);
    msg.setSource(25340U);
    msg.setSourceEntity(100U);
    msg.setDestination(57833U);
    msg.setDestinationEntity(78U);
    msg.name.assign("QJFOVNOQZYHONWUCGLKVZSIBAFMDEMIWIYZLTZLAKTBYBZCMGCIPSKWFMYRIUHPEUCQZBBVLIKYVOJGXTRQNKPMIJERYEDL");
    msg.value.assign("YFTMWQIVWOINKKFHJKCIELFFRBFLBSOZGRHKFIXSTQKE");
    msg.type = 18U;
    msg.access = 201U;

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
    msg.setTimeStamp(0.25365823802);
    msg.setSource(28910U);
    msg.setSourceEntity(16U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(69U);
    msg.name.assign("XYRLWCXIJAVSPUHFXRHGFJOZPOUBTZOTJMEUUDECDMIHPGGMQBGEEUDGHCEQQKTYXPGSTSXXARKUJDQZGQJWMSFZJZWNTFNJKAXMDLQNWTRZMUCPOVIXVYTMEVMYOYFDKRFYERINBLNBCBMDLYYLH");
    msg.value.assign("DSWOXLZDSERMREXNKAOKJBFOTJKUCXLHBTCCIZZSRAHHZUICNVBWNPEVCKQNTOICAOPLLOANJPIYYGKTZXPZRJFWEYCPRVUVHOMBTFMQAXKYEEPQCUOUYMNFABIDTNGHAUQMZZJJWRBVBHDKQULSDKLMBR");
    msg.type = 88U;
    msg.access = 81U;

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
    msg.setTimeStamp(0.37481884814);
    msg.setSource(47330U);
    msg.setSourceEntity(54U);
    msg.setDestination(11134U);
    msg.setDestinationEntity(15U);
    msg.cmd = 180U;
    msg.op = 208U;
    msg.plan_id.assign("OBPSAKVGSLYAWPFFONRHJIUYULAGXHLGJSDSIFGKTPMMOWNCUUYLBPGIJLSJKUTYFQBIZENJPRTXGEEVCEZUNQQDHK");
    msg.params.assign("LTYMNRWBCIPUPZUDIGSZRVTEDGMFEYWAJEDXJINDAXXRLZQSKQZVRAJXTXPYTNRCADXOUCFXLECVIOUSHJACGMYPBYKXOCAQJOLGUMASKBELFGEDYLUDHZUEJNKWWYWLVUYKOKGATSMOISTJBWSKIFZTNMUPHPIHWCXVCMZKNQKRWRPOLHBUQ");

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
    msg.setTimeStamp(0.0603894961096);
    msg.setSource(36959U);
    msg.setSourceEntity(253U);
    msg.setDestination(2047U);
    msg.setDestinationEntity(204U);
    msg.cmd = 72U;
    msg.op = 85U;
    msg.plan_id.assign("EXQTOKHWHHDGQGENZRVIBXJQODA");
    msg.params.assign("IZBVKABLHFOICDNZQBESNCTUDDUAIWXTHJJPINOSNENRKFJHVERZLVYBYSKVTEXLBKKUWSMCGZMBAQFYMHRLWRMHQDGZCRMJNKQQEKVSMOPWUXVDXTIOPXLQQYKHEWFPFPBFPSJIMJCYXPQRTDLLJGBRTLHLEACFTHXOCHOAYGCWGLIZVMTDPWCHVSOKVSQSOUDUUZQNZFBWRIBIFMO");

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
    msg.setTimeStamp(0.0579067106541);
    msg.setSource(29087U);
    msg.setSourceEntity(161U);
    msg.setDestination(22803U);
    msg.setDestinationEntity(1U);
    msg.cmd = 10U;
    msg.op = 240U;
    msg.plan_id.assign("QWMWSMVAHVCBHHDKZWPZDTZDOEAIHLJJISNBZEYNWTRFAISNCGTKIYFDCWGVZTXCIMSABCRFGKUXMBJJHKBRJINAYWXWLEYBHXEQQLZMBZZEPESUIAVIFXOGUIXOVNMQATWCNJDUHLRYFDOSFRKDXPRLWCEGMGUZ");
    msg.params.assign("OZVEXLXPGGBQEMJYZDESJ");

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
    msg.setTimeStamp(0.965173224621);
    msg.setSource(5231U);
    msg.setSourceEntity(122U);
    msg.setDestination(49405U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("QPZFKDDBAQVSITMZSPTEHXWFGWZMNXBHKXTMHDPXRNNEXKCDGEOJROAQHCOVTUEOUWOITOVNFWZYIEALBRUZUBQDMSKOIVIEJHQLLBNIBMIVRFZCRWKALJGGMKPHSZERWCJGFH");
    msg.op = 143U;
    msg.lat = 0.454289669976;
    msg.lon = 0.76914751983;
    msg.height = 0.337704949095;
    msg.x = 0.485979539342;
    msg.y = 0.858284335041;
    msg.z = 0.31863049725;
    msg.phi = 0.609207579952;
    msg.theta = 0.920588970874;
    msg.psi = 0.710915831206;
    msg.vx = 0.212884191961;
    msg.vy = 0.248357063664;
    msg.vz = 0.830703533196;
    msg.p = 0.194661495047;
    msg.q = 0.425057404702;
    msg.r = 0.214114601308;
    msg.svx = 0.688547658551;
    msg.svy = 0.39852409206;
    msg.svz = 0.795618539744;

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
    msg.setTimeStamp(0.763488944025);
    msg.setSource(20088U);
    msg.setSourceEntity(195U);
    msg.setDestination(13202U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("VBNPGOOVCPMZBUGEVMOZETPETUICGVTIOCRYIGVJXGQRREUFIWWDNDNRYATCWSZJLLWHRWDVKOBOMYRAIFNLZTKQIGOZYPKKAFGFWNCSACPSNUPQTKUZVOJQXXHNCQWJFNMDKXFE");
    msg.op = 80U;
    msg.lat = 0.0731882721934;
    msg.lon = 0.646804716094;
    msg.height = 0.318844950355;
    msg.x = 0.760761026384;
    msg.y = 0.0373656229119;
    msg.z = 0.124771431496;
    msg.phi = 0.187494160099;
    msg.theta = 0.765843743922;
    msg.psi = 0.401641108382;
    msg.vx = 0.151343950001;
    msg.vy = 0.682702116807;
    msg.vz = 0.645834128477;
    msg.p = 0.499739134599;
    msg.q = 0.998127484021;
    msg.r = 0.725034747967;
    msg.svx = 0.50660440644;
    msg.svy = 0.529999365379;
    msg.svz = 0.746049709912;

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
    msg.setTimeStamp(0.326060721739);
    msg.setSource(63542U);
    msg.setSourceEntity(98U);
    msg.setDestination(29429U);
    msg.setDestinationEntity(60U);
    msg.group_name.assign("UUGXXWOIENRBAFTJXLOQHGSPPVOXFWPUZKOSVAOIWBQJBISGUJXMUGVWRQNYFUWGYZHTWCYVOIYQPMUXANVLAMXEO");
    msg.op = 221U;
    msg.lat = 0.125702453751;
    msg.lon = 0.0531759265793;
    msg.height = 0.75334619849;
    msg.x = 0.111510650716;
    msg.y = 0.382112954992;
    msg.z = 0.0500255597268;
    msg.phi = 0.966599484377;
    msg.theta = 0.081275891915;
    msg.psi = 0.49575527621;
    msg.vx = 0.804876901157;
    msg.vy = 0.239773488113;
    msg.vz = 0.43350946622;
    msg.p = 0.712624780481;
    msg.q = 0.540288325414;
    msg.r = 0.340592757506;
    msg.svx = 0.79384485754;
    msg.svy = 0.393855210604;
    msg.svz = 0.407269786681;

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
    msg.setTimeStamp(0.153814021961);
    msg.setSource(5935U);
    msg.setSourceEntity(177U);
    msg.setDestination(47047U);
    msg.setDestinationEntity(43U);
    msg.plan_id.assign("UZEARBNJSJCNEQFQKGHHHVEMOHGCPAKYHZTLHGO");
    msg.type = 150U;
    msg.properties = 90U;
    msg.durations.assign("UUGCUZYDKUBTGXCHJCRQXNIYHHNYEICWHHDKTUTCOPMKISJYVOKYGCUVACZJHWIMMWJVNPQBILNJTGBZQGXEBALOHAKSXZDVHMFCTBEOTEPVEPSNQMVBJWVXCEZYQNCGWAQ");
    msg.distances.assign("RKSGZQAKJCPIRUFJFEIZGKKQQDEPWUACQEELHJVHBZWFMCGMTWQMORMRSYYEGXAXJCEKANJK");
    msg.actions.assign("VANCQJZTUSFYTFJMWSVCKLJUOLWPCMVPTFMFNZPHVKDPAYDJQYRFHHCMJRBQTUWEBSESYNIXZMKVARPSDKPVTFIMCWFONXRURKVGFMRLLDWKRUZZGDIBQXYBTKHBQDKEELZOYDFJJCGHSTBUOXTEZIWRAIPQASKIIUELLUIREXOYHZBXGEBLGOJCOCZECAGDSCAQOOSHWDVVBNFXBQGHNLRYNWEPHWXJGAGYA");
    msg.fuel.assign("ZIEDKDPFPDSHBIDDQGTBOIAILHKGZGKSYQXCTJNDECZFQEOPUHNUSZKBUXRSRCNCLHXQWAYKBJMAGRYLLRVBPKA");

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
    msg.setTimeStamp(0.68522237765);
    msg.setSource(29961U);
    msg.setSourceEntity(47U);
    msg.setDestination(55158U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("LSBPTSAEWPRGGPNFMWMEURHQCKAOJHBXYVKFBTUURGUSIERCJFZLBTESQMBFNKYRFNHFFAYYXRISIDAVFWYVYQVXKAUZCKRRWGHXCOXPMPIZPXEFQOLXLEINNBDLWASHWIICVEJMUZQDUAYYYLQEWZJWJDMPOPJNUZMGFIXWBDCRJHYTZOODUGTZGNNHIZCQLLLMNCVAMPONTHOKTZJIWVEPTKEOSQSKQTRKMVC");
    msg.type = 149U;
    msg.properties = 91U;
    msg.durations.assign("KYFMTVHOQKJGBUAGTEMHIBRSYJXMAWAIZYLWUJEYEKGIXUPZXOZITGCLGXNFUFOIVRTMLMBYIRVDKREWFHSWZBDZRHZUISYZAXRNJBKLKTVCZAYFRQNNOBMJZPYMKRLNMWAWDQTPOIBGCYNDLYNDWJWVWZAITTFQPFROCSDBOCELQGDXJV");
    msg.distances.assign("QQKEBLIXJQJUAUSLGGTSGNYWBRMJVSDQGAVEZOLNOYIXEDJWNOHDTEAKYPVNBCAHNKSYHVADBKSXMCWQXUOGIWZHDMFLICZUDYNATSXPZMZNR");
    msg.actions.assign("TIUHIFFEWRYOEWNMXAEUQSNJRVWTEVMFGSZCKHKQRXGNLSIZUVUQDBNALDGUIGUJTECJFYMWPXSSHSDNGZLHMFWBPTYHJQKZUPRLCLRDOCDT");
    msg.fuel.assign("WFQYMEKLURBOMVWUZHSFXCJFAZUHDKFPVAIKORNLVCHXVLLUBLJQEKWWQVFYFPPEQYBEOHEBVSATUBRXNQYGUXPMRJZAVVOHBMTTSJWNFNRLOZNWYMWIQDFIINYDEZCXPLOCVKTXDEKNDGKQBULMGUZJEJZFPBRBGRSCXKCHGIMMXGOHEGKJMCJAIHSSWRKHTIYYAPZNWSLHTBSRNGDXDIOPWYJTQATIATOFYQDDN");

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
    msg.setTimeStamp(0.51006580304);
    msg.setSource(59484U);
    msg.setSourceEntity(69U);
    msg.setDestination(34228U);
    msg.setDestinationEntity(128U);
    msg.plan_id.assign("PSUPJUIIPGCGZZYZUOGXLBADNQWLLWETDQAYWFDPFEITEFLAZWYOKZUVSYYKAXNAVCPOAHTBPHTIVGECRESUXUBJRRAMFFBXCGNEHMTMVHRFBHIWNLQK");
    msg.type = 128U;
    msg.properties = 229U;
    msg.durations.assign("MBERNOTXXYGRHSHNWXJAHCVJZJHVQULABPEPRTBUHFAIKFMYZZVKOPKIGDLHSBFHXOKEKWBLHJOBBQFKVATSRHPKZMCOWLAXQVUIBNTYYFDLCXTEXFIRQKFMFXGEJSCOPUNQQESQKCJGMS");
    msg.distances.assign("GLFLJJIEUTCBTCAVZEYRWEEKSHNZXPSMDNABGXQMMGLUFKZFUROMGZXJWXTTDSGJHJDTXJOFKQFUNUMQAMEPYDNFANCLMMWRRRFYYSPULXCQBWSZIGLHWEPNBYTFIBRNTQBA");
    msg.actions.assign("XONCFKMGCQRLIKMKFMJROEHDXXSWPBQBVDQMELRAXVNQEWWUHEKERAIXJGHZLLJIMEPKNRDNZRIUWPWZTNPKZQJGTAFZPJVCZQTZNFESHAULVJCULWABNBTUECHAHXAIFSVFDOYTOK");
    msg.fuel.assign("HHLEBFKFRHXQDKLNGKDSALUKSBWKNWMEWARSWSTGQCTUDXLOGZWQTPVAXVCODAXWHPJEUYMXIZZUTNVJAAIXQWMUJAPNDXEGSCFCECSTPQRTCKDMGAOJTMTFMHRXZJNOZGWEIUGYJBIMAFPKHGYOPZVZYXOUE");

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
    msg.setTimeStamp(0.964296248203);
    msg.setSource(50032U);
    msg.setSourceEntity(228U);
    msg.setDestination(7558U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.674975485158;
    msg.lon = 0.366570843312;
    msg.depth = 0.621308533663;
    msg.roll = 0.42179093859;
    msg.pitch = 0.869007204618;
    msg.yaw = 0.988837786888;
    msg.rcp_time = 0.942871222606;
    msg.sid.assign("OPIOHAACVFRBRYLHKQARUJGZRHWZLOQOHTCWDSZVTCUPFPBJFXKWHSBXRADZRZASNGYAGESVJIZLBSNFBCZMAKNBJWHUOQMQQGCODBUPVIDEDKPMCYEQGLEVMOCLPZYMXRKMLLMSVHKDXGOILGAPNHUTXFTZUJPUYQCJYJKNQUHWDNDISWOHETQFBXWMUTTDXKYQCJJWSPMLKSIAGMBIWVDUFOEGPETBNNEFFVTNXXRNEXZAYILEJCYIIRS");
    msg.s_type = 246U;

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
    msg.setTimeStamp(0.54243545395);
    msg.setSource(62584U);
    msg.setSourceEntity(131U);
    msg.setDestination(55139U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.547796578557;
    msg.lon = 0.281851886254;
    msg.depth = 0.0243179345279;
    msg.roll = 0.457590183923;
    msg.pitch = 0.128683910554;
    msg.yaw = 0.345433400991;
    msg.rcp_time = 0.0478319526383;
    msg.sid.assign("KJIFSPRVXCGZQGTMNULYLFZMCTRQYTCDQNDSDKBCHLMARBBFICDWFFRYPQDZWUVAJBPCAHZUNTENTPJNEAAJOWXWYIQBSHPTLMBIPWEHEVKZHUPQFRTGOOIQRDME");
    msg.s_type = 3U;

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
    msg.setTimeStamp(0.434480475186);
    msg.setSource(32142U);
    msg.setSourceEntity(163U);
    msg.setDestination(10209U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.488186222583;
    msg.lon = 0.163027015557;
    msg.depth = 0.960621289849;
    msg.roll = 0.855334142431;
    msg.pitch = 0.922915537575;
    msg.yaw = 0.71878922555;
    msg.rcp_time = 0.491146073258;
    msg.sid.assign("TWBZKBFQYAYXJEEQRWEWFUIGVACAXYKKZGAXPZHXTWZOPUODVGIMBDMFZILSDESLZROGPLZQVRNHCHT");
    msg.s_type = 198U;

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
    msg.setTimeStamp(0.969540753993);
    msg.setSource(15507U);
    msg.setSourceEntity(213U);
    msg.setDestination(43533U);
    msg.setDestinationEntity(145U);
    msg.id.assign("JWSQQLHCWNIBCCRFEFFWHOTSXUECIJQQZXBWPUEXNRECVHLDHZUMMHEXTRGZUKYVIBOKONQPSFBTDTGFZGOBHOKJZUAPZVNRJKCACLYYWEGAOPPDDYHKRTKLRUYVANIXBURUSVQNSBDPOTYQXCKBIGFXJYRPDRQVVUJDCYPTAMFQXJFWKFLADGMUMGIVMSDNILMWHCTOOGSZHZMEJRYMJTALNAFPLSBLXNEXMWWNIGKZV");
    msg.sensor_class.assign("IQMCAGZHYPFCHUWLXNQMZMZSVENCWGMIYHGRBVYTFDFUJBMOTEMOWXYLTAFDTUMVJZDDWPCEZISQERWITCVWMCXDYJLXPAYLECLJBUQJBLAUOSIXNOSZFXDUUKUKGELVZGMAKJTPZORMITHKSCIPPNENEFDJOBNPBROAGLQYVBPWKUYRBTJCAKNIZIBQHTQG");
    msg.lat = 0.0519037750598;
    msg.lon = 0.426383437832;
    msg.alt = 0.293596406005;
    msg.heading = 0.596195871293;
    msg.data.assign("RERPEMQHNCSMGDBQXADSYQJHIIBKRDRUFMAOUDIITXDZESCTDLWFTHUOPUOVMJNMJVPZZQBZGKTFYWSOMPHMGNZYTR");

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
    msg.setTimeStamp(0.931220030856);
    msg.setSource(45964U);
    msg.setSourceEntity(198U);
    msg.setDestination(44171U);
    msg.setDestinationEntity(136U);
    msg.id.assign("LXSZEUAEEANGVCQZFAORYDBYJDDNUJVWSGXEYBMUZMJNUOYHHCMHLLEIQOPGBGFXEBPZGKUXQJGCLPXPUINGPHFSTWDKYWOCAGBDCNMHJDLTZQXLFFXIVIQFJIIVTVEQKACAQITMKSOTMXWQMNKKWKNNMCJJNJTLOZKFOECMVTFTQLYAUBOHZWHYVRYRRPULHBRQXTZBZRSPIGPYDATKHVVJCGWYSDKPESSNVXFMEPFCIAWRDHOUURRLB");
    msg.sensor_class.assign("RFEEHONJNBWUYPMLRVDKBXBUDUSEQVCLMUESNZIPLTQQRJQVHPNJRWIQLDZAMTMVDUUACAWYPOJGFRWOVVXLKIMZIXKJKFOVNNRTXYWBSIPTSCUGKHDZEJRPAIEMNOMLAURQXMGZCNHEAHSXAPRFGLFGQIWAYCXHTQDJGDGGDYNP");
    msg.lat = 0.349937023044;
    msg.lon = 0.575610372021;
    msg.alt = 0.309755281247;
    msg.heading = 0.299460152143;
    msg.data.assign("ZFSKFUXEONWHWKOESJNBZBLMXGJTOZISFVJCMEPWJXYEMUOPYKGNMTZCQIYDJZBEOGCRQOPZYDHWDNGKDZXGAZIRDVAQXSUBPEQNPDGKBHDSVPDZPAVVCJAITULEGPYQLIJKFEOPCWLVLAFBMTYHWLBJLALRXSINQRPSERRWNUKJTSTFEURHLOTTYFIMQBUVQDGTACOYVGSISCRCMQUAHNZAYAX");

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
    msg.setTimeStamp(0.82229778108);
    msg.setSource(8974U);
    msg.setSourceEntity(150U);
    msg.setDestination(40650U);
    msg.setDestinationEntity(221U);
    msg.id.assign("ECCTXACZBWBGFUULRMNZIVUNORXYABJBGKLOEJCHURTGVNQTMBDNLFCEULJJMKAQNWUJRKSDNAXDNTKPKPMTTYSWII");
    msg.sensor_class.assign("SNVWMUVHSQAMUDQXITKELNFGVUN");
    msg.lat = 0.225452687328;
    msg.lon = 0.217631010151;
    msg.alt = 0.61892663226;
    msg.heading = 0.118523348451;
    msg.data.assign("GSTZLBVZAFCVPDIOQAVTPPIXHZCENQKTOFQGHGWNEWYNGVTRKSZASMYUCSHIJIEWQPZTQSQMBNMNHFXFTXTBLWELGGLAHDILARFUQLKYWHDTLNJZCMIUPJDHSUCKYGNHMVEABTWMBBKLDHSJPWKOBOKFSDVOYUBILQRFNVEUJAOJDSYEM");

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
    msg.setTimeStamp(0.934195453753);
    msg.setSource(18819U);
    msg.setSourceEntity(33U);
    msg.setDestination(47965U);
    msg.setDestinationEntity(138U);
    msg.id.assign("MSKTNORIVJVOKNSARTRUSQCCPNBYHFDRCHBITRUNLVMUNLQHWSFGBMHBZDRPXCGCIVOPUQGPZXFLFGFHDXJKROPWYBYELGDZETIYXAXKVSFMTGIKVQZQSQZDITBWJGWRLISDYKAJEKVZCWNZFCHJKOWDMPJWXJXQOVUFOZASHIVDMIAYBPQZELGOFEDPNH");

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
    msg.setTimeStamp(0.251162502405);
    msg.setSource(24158U);
    msg.setSourceEntity(47U);
    msg.setDestination(38161U);
    msg.setDestinationEntity(119U);
    msg.id.assign("ZXOMOCLQZMOYHDAEFVGWCXCXSFPLENLKZBYWUXTAEZDUUKUGBFRDZQDFMPBHYQLLANIVYVKJEBIMMGPCEVFJTNZDYWGSKNVRBJOTXPSRGXRXNW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MSVNEZQZARMVQESZHLGYVXYJWJMZGQBRENRWROHYAHPZVSOQUOFTLCTIWKWLRPQUYRGVIYKPAZWWXDUCIWHJVRAAEICWXCGUCKTXBDSBDNAFGHBNKOBMFJBSCKNMOXLFQLDDBBSJXVQADSAUVSJTBDPFILFJAFJXPYUNQCKKUDYTRYZPADYIUKSXWNNGOTEZHJQHCDMIMEKEMLOMFTTVGPNIRXWGHEMHTI");
    tmp_msg_0.feature_type = 5U;
    tmp_msg_0.rgb_red = 115U;
    tmp_msg_0.rgb_green = 26U;
    tmp_msg_0.rgb_blue = 96U;
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
    msg.setTimeStamp(0.594456008616);
    msg.setSource(57070U);
    msg.setSourceEntity(28U);
    msg.setDestination(16646U);
    msg.setDestinationEntity(168U);
    msg.id.assign("HQOTIAWSFRSLKHNSFUDWKYIWZCTHOMPMBAGDTPAVTZOIWUQOLYAVUSZSIBLHSJJCBYWIAXFLZYOPLNRRTXNYXUQIVMVLZMCSNTTKMNBBHWKXWPABWNCHJYSENOAFNATZHPEPFMVITFNCJBDCFLUVESRCLRKFGPAXDZWMRDXJUQBMKHQVZTYOCQGDLQRDEIZJJFCHVUKK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YEDNOFAAOCUDBLKBUEXCTXTVMMMPPSUQCSCEDBRQSVNRWDJYIIIFUNQUPLSFVRETCEJJWNZIVAANTQZOWGPZAXMRKIJCMTAOULWBOSQWPONJZXCHLTAAHUSHBXGIFQEKNDQAZLFUVSRHPXEPZMKNEGXCYKMXGIIJOKELTRJRXGYOXAJCWEFRTGSZYSKYPHSDZGPYTQIOGGYZJVVMBLYNDWWQCDFLJPHVUKHMDWBYDTKFRNRUQBLB");
    tmp_msg_0.feature_type = 109U;
    tmp_msg_0.rgb_red = 182U;
    tmp_msg_0.rgb_green = 9U;
    tmp_msg_0.rgb_blue = 105U;
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
    msg.setTimeStamp(0.678217413682);
    msg.setSource(43696U);
    msg.setSourceEntity(186U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(95U);
    msg.id.assign("LLRHKBSTZBLYJDXUMSVIULNMMGAEMFAXFHJSXKJQQZJCYPRBSVTHWLZXZAIRGYKRJAWFMXMEFANKVDCXFXNQVPKXJDOKGZSUANPROGQTZQNBMITAYGMYWLCBOHFCKNKYSZQDPNYDCPTLCIBEWQIVKWTQCQOPYAZILVVGOMOPDWFOJHUUGFHSSVYEHRJIMDTUGIBENUIPEWVWDBUSONCQH");
    msg.feature_type = 11U;
    msg.rgb_red = 216U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 92U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.500673874641;
    tmp_msg_0.lon = 0.0407839557765;
    tmp_msg_0.alt = 0.392146251838;
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
    msg.setTimeStamp(0.132838989862);
    msg.setSource(23163U);
    msg.setSourceEntity(40U);
    msg.setDestination(8189U);
    msg.setDestinationEntity(213U);
    msg.id.assign("PLITSYLAJGWDWHGLZUBIJMNPIZXQDMUGNODZHZSTLWRUARLJXTBYV");
    msg.feature_type = 79U;
    msg.rgb_red = 17U;
    msg.rgb_green = 156U;
    msg.rgb_blue = 79U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.591753266207;
    tmp_msg_0.lon = 0.751175721685;
    tmp_msg_0.alt = 0.432632873397;
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
    msg.setTimeStamp(0.0269053108057);
    msg.setSource(58581U);
    msg.setSourceEntity(130U);
    msg.setDestination(15910U);
    msg.setDestinationEntity(130U);
    msg.id.assign("TYWTNWSZCMMJCWNTAPOJFMHYTEVVOVFKWOPXOXKKYFIKAOORQHXTPMCSKESWGSEKURORELHMBUECZVREGLFOPIPGBPYMEUGN");
    msg.feature_type = 141U;
    msg.rgb_red = 79U;
    msg.rgb_green = 154U;
    msg.rgb_blue = 33U;

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
    msg.setTimeStamp(0.254965255448);
    msg.setSource(40777U);
    msg.setSourceEntity(118U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.532696599812;
    msg.lon = 0.0484835992844;
    msg.alt = 0.735196094971;

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
    msg.setTimeStamp(0.518748139198);
    msg.setSource(4330U);
    msg.setSourceEntity(134U);
    msg.setDestination(37183U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.607606217284;
    msg.lon = 0.424439567462;
    msg.alt = 0.870317869039;

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
    msg.setTimeStamp(0.719949043877);
    msg.setSource(874U);
    msg.setSourceEntity(174U);
    msg.setDestination(13377U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.665325445371;
    msg.lon = 0.153572608602;
    msg.alt = 0.874254937366;

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
    msg.setTimeStamp(0.857268221461);
    msg.setSource(63451U);
    msg.setSourceEntity(44U);
    msg.setDestination(62735U);
    msg.setDestinationEntity(73U);
    msg.type = 168U;
    msg.id.assign("WEECAGCRGYQUNVXCZNAZVDVVLFEGCGASWZBUQQYWHXNZGOPPOIOYENEIKQDVKFYMFCJHIYJFFOSDBBDJPSANPRXIGSMXVZK");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.146005374757;
    tmp_msg_0.z_units = 5U;
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
    msg.setTimeStamp(0.242294857418);
    msg.setSource(36954U);
    msg.setSourceEntity(63U);
    msg.setDestination(61664U);
    msg.setDestinationEntity(230U);
    msg.type = 204U;
    msg.id.assign("BMHGJKKPZYGHTNFMXAEYWACOBDIEJNZPQAPGQWWASLMLIWJDQVSDUENNDZGITFOXIMOVCHYPFRHZUYMUHQFHQBCYXRTQMBRTHXADWEEOEGLMJVUNRDPHQSESTSKCOSFLSUNXFHGYKOSPWXNKTKPDXZVVBLDREJFQAFIIDHLJ");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.153980519423;
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
    msg.setTimeStamp(0.314298032535);
    msg.setSource(6961U);
    msg.setSourceEntity(234U);
    msg.setDestination(4776U);
    msg.setDestinationEntity(175U);
    msg.type = 11U;
    msg.id.assign("AVTHZVPWQOZECRLMKGCTJZFQQMWQNMYDZRQFHEIBIXBLA");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 209U;
    tmp_msg_0.zoom = 105U;
    tmp_msg_0.action = 105U;
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
    msg.setTimeStamp(0.606162473199);
    msg.setSource(48403U);
    msg.setSourceEntity(244U);
    msg.setDestination(15377U);
    msg.setDestinationEntity(75U);
    msg.localname.assign("YZZHARCEHCLSWGCPFALTPGDIIELNRWIBUEZFWSILRAKHPKIBYGUCOTRLCSQYMTSEMUBAHNFMDXKYKFEDJNQSVMHYXZVCKROYTWDPEHVQZNXBXRMBNUDBVWPIGZZDGIBDPAYVAMHKMTJLUJOQJXXOGWJKWLSVNAVCPJOTFQVNDWEPCJZFSKJGVQJGAPLRZAEFCTTYJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MTFSHRAQCQCOTUWXDVGLALAHOVYINFEEMNLLYTRDGKFVIQAMIWYWZHMZLDXJUCJKRFUXMBJVDPQGAZTMYYYNUKJWKVBGVQWKKKYCKRAEZATHNRSGSKJNRQVSLCGPMXGOHQUBKHJTJFJOONTUGLEVIQHZDFONWFYRLHANOBQLXMFIXWYJPESDTZOGIIIMPXXUZXCADCDEEWRDPEHCFGXECVYQNOZBPSCSBVPAPROLUNFWHIBEPPIZTRSBB");
    tmp_msg_0.sys_type = 129U;
    tmp_msg_0.owner = 39028U;
    tmp_msg_0.lat = 0.500908657385;
    tmp_msg_0.lon = 0.349304799448;
    tmp_msg_0.height = 0.671974063642;
    tmp_msg_0.services.assign("MVWTUQPDVMMGNWZVYFZQJZIYWKOJVJFEOSRCOABOILOEZKFSSNYUXALMD");
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
    msg.setTimeStamp(0.634920097776);
    msg.setSource(58567U);
    msg.setSourceEntity(206U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(218U);
    msg.localname.assign("LUMTCPUJHXCSKRGNYIKMPYWQVPQGBBMGCTOXRSSXNZSWPSIGDKHVVFQHFMOYRADPMWAYKADILRWVXJDKLDZTKBYVUAPZWEGQCLK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZWYEQACYOROSVQDVPOHMRNKTZKHSJJIHEUPBSZYSIBZRVLHGXSPGWTNRYFKHVPMJUHZAUGTOXWZPXMHWANQGGIOSUNWWFEPTGGVDC");
    tmp_msg_0.sys_type = 32U;
    tmp_msg_0.owner = 59178U;
    tmp_msg_0.lat = 0.0661184451348;
    tmp_msg_0.lon = 0.516312538907;
    tmp_msg_0.height = 0.666355267717;
    tmp_msg_0.services.assign("LFOFLCMODLCRDWDPYCKJMOEFJKYGWFISJBNTOMNHMGFWVKUZRARWSBWIFUXRJHABPCKKXVKCSRDYNZDQHNZXGUARNCHTGATVKUFHULJUXMLHNSVRXTVKCOXDGQSGEPNSUMQEBPU");
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
    msg.setTimeStamp(0.848706867279);
    msg.setSource(51561U);
    msg.setSourceEntity(48U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(51U);
    msg.localname.assign("LPACQOKSRLZIGFDVHEDKGAWSRXIBG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CFJGYRCXNJTNSYTMPFUWVEAZDCXMNSCAJSDBUHPEUKWMLLLKAXPNMCUUUEOIGYMWKJHTIRGAXJFKKJODFLBJNSDMHSVXYLBVMXEOYPRLJEFWWVVGWAEUYVLFSZAXHIFLBFUOAY");
    tmp_msg_0.sys_type = 174U;
    tmp_msg_0.owner = 15270U;
    tmp_msg_0.lat = 0.685163391427;
    tmp_msg_0.lon = 0.195742922516;
    tmp_msg_0.height = 0.802491513736;
    tmp_msg_0.services.assign("DMOHQISDHCRLLGKFISCURNNXOVHHGYBURQFALJYPZNETUSZNMCFSVDQNTALVMVTVXIYQKIJZIGZYXPEEMPARCTLFLNPJOWQZVHVWTACMGTNYCAJQFXVUTWEEWZGXHCDGHCZRELKBMOOUEUBJPIQZKTXYHOYTSQJCZFDWOTNXJYWWOWKOZQQOSKPLHNBKIGAGGBAJYKRCWVPFYLBMFSREIFURMDSMWSFSJPUVEDRBIM");
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
    msg.setTimeStamp(0.116271089392);
    msg.setSource(35042U);
    msg.setSourceEntity(106U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("GNKNQCGFWEGSDCEVOIMQJEDSTEFAPHOFCXXOYMDPHEMZRHPHFKDUFPAWRZD");
    msg.predicate.assign("XTKVXNVKJAJSZPQSMGPUFCCECHGTVPGHRTJOOVAZEZDDMAWHIRHSBWDULQFWFNXPLUJFHRXTNOOICCTKRZLIRAYNGTNHYGWTEUOOGLYMULUYSKRDXMPCOIFRPRZGTELXMCNNIAILD");
    msg.attributes.assign("LGGKNPHCEQEMTNRDHLVCRUQKDUWWSZHCRFBGSXXOTSUPFUAALNLUCWQPLSHJEIIIQFWTZVYXQEWOLEIFZFROVZRMNHMHFTWWODCGADQVJOAMHIYZJMSQXABOPYEVJMJIAYXNRUOASODDNRXXDBACYTZBCEURZYGPBDWZAJLAGKSFRVTMXCKBUUDHTNWQPXDLBKCBSGJNIEJZVKFPO");

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
    msg.setTimeStamp(0.690181619322);
    msg.setSource(33339U);
    msg.setSourceEntity(188U);
    msg.setDestination(53140U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("DOXEEWUXTEJHMXTQMAZEMCZPCGNVHOTTMZHVXQOWAYPZATWYGNKK");
    msg.predicate.assign("IBMFSHLEQCGIOXSVYDLVPWBYKKLUDRWWHCSSUOHAIHEMDYVAGDNQMDHKWQUTETZFLPUUNZETSWQOFJHZGMCSTRFCQXTJQIDVEJCCRXDHHUSHRFPREPJBWZVIKPGQXMVXKZNAGJYOVAAOCYBRVEBUABFVOWPCLRFITIJYKWFIALGPUOPUNP");
    msg.attributes.assign("EVBMUAGWVOZMYUUJQNBYGYYZTYMOXBPPNSIYSADNWWOZCDAHRIAXEZJVCWRDWQHSJSIVUXTDQMNBSPMXNICVIURSIOSRTSLXPALEYFHJKJMPQFPQZTMRVGRULWXJAF");

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
    msg.setTimeStamp(0.181307189814);
    msg.setSource(30850U);
    msg.setSourceEntity(194U);
    msg.setDestination(6357U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("QJUPLSWKCJOIXJKKFDABBYZJRWULQVDNRQVUABHJMLDHRGGFTOUKVHYHBSYQHEWPIZTAYWPLRVMUFAIJDARIYNONCEAQSEEETISSYEXWXIEYFXNKVRYPKMWAPFOJLWYKSTTNRIBMHZGQNVGUTPIESCVMCHSHGOTNZOMOFBAODDXKSPPVNXHNXJRFLUXDILE");
    msg.predicate.assign("HPWXJRVGNJLSYZHZTTROHBKVWE");
    msg.attributes.assign("CEKLLDQXEJTBZAAOVNGVOJGXIGPIPPTMRBMFEUOMIJYAXGGHUZBRYDLIEFOZIDVFNBLYNYCWRZRDCJBMQYQHJLVXZVWSRSRFUFSXWVSTSXVQMQTKDWPGNQEULKOCRDYHMWCKGUZBQOAPTMHBBMAHUEHLYPWXFSLFKADAXMGQCXKFORWSKMHUORFPHWJITLWOSLUNUHZVEPGKC");

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
    msg.setTimeStamp(0.543220872484);
    msg.setSource(64897U);
    msg.setSourceEntity(59U);
    msg.setDestination(6388U);
    msg.setDestinationEntity(54U);
    msg.command = 73U;
    msg.goal_id.assign("NDGCURQUAUIGFFHONVOVPDTBPBSXXWWEZFSUMGDVITNSCYZ");
    msg.goal_xml.assign("NQIJNAVDREC");

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
    msg.setTimeStamp(0.879245446242);
    msg.setSource(34934U);
    msg.setSourceEntity(61U);
    msg.setDestination(18552U);
    msg.setDestinationEntity(211U);
    msg.command = 174U;
    msg.goal_id.assign("YMDQYCYUSHVDKDZPEYVAJNNQTVUCMWCRXJABKBHSMIMTJAKBCIINJORCJZPWRKOTLLFDUGNONFIDKFDRAOUYFTWVDCFLRGHKPFEHOWSKEVFIJMMAXWEDUORGMJFYTEGLRDHZKVQSSKGBJZEMIFPRBNQEXCUXPUVSOKXXZTEGVEWEPBJQBQAHQBRYQJPLLDPYNSXHRWCN");
    msg.goal_xml.assign("OXKRAQWGWSGVVQLXNMKMYZJTGYJWADVBSTTYUJOMBUJOFNEPZQPECLHIS");

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
    msg.setTimeStamp(0.01270266457);
    msg.setSource(7992U);
    msg.setSourceEntity(216U);
    msg.setDestination(5228U);
    msg.setDestinationEntity(227U);
    msg.command = 15U;
    msg.goal_id.assign("YRAFLLOPJEFGXZHSMVGTMIVXFXJNYSOWLRPAOQKFFVHSPMPRBOHJEACBCTLYRJNFDIDUUOEQNMXQQYUQBXUEHRVOCZHYSOUBEZEGCLTNTWMHFIPKTDYWAEKPRRDYYTIZGRSKCBYXNOTKIGDJUQJCLBPGRQFOUDSHZVCKMEBBWHACPIZAJZ");
    msg.goal_xml.assign("QJZREGHVNSUTPXKRWBRYHKBHDTBERWQFYFBWLYRPPLFJUACWBZZLG");

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
    msg.setTimeStamp(0.196356639951);
    msg.setSource(61057U);
    msg.setSourceEntity(202U);
    msg.setDestination(15533U);
    msg.setDestinationEntity(0U);
    msg.op = 116U;
    msg.goal_id.assign("SVQFHVNHDZIQXIQDVXJMXAOHPBTAOAZSPBUFAMPJYDNCWFLKOGIEYHHPUNTKTDNEEFVGGXBTWPZHSWZMSHCWVMYPROCQGRZMGNJFZDBLVHLLCACSCJEUTHGRZLOGQUUIWSLZIKBXSHMWLWDVQNZPJXAYWTDRIIUIAVAEYJCQSKJEXPEKKZYRBYXEKRDNNKYSFMOOFXOGCWRGLUTMGTIIYDUNBRFUBDSEK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YAFSDISGUGWYDCKRCDMJBEFUEWHMZZATRKLXQOTNMRSZDXDUURYGBFDQPXQKPLXUYTIFYGCAVHCNNVWXCJBDHNTGNLJG");
    tmp_msg_0.predicate.assign("BNDLVPLJVUGFAYAKDSFLEKKMGXPNADEOFODJRVIJHQSFCOMAALDGWPWYVBMP");
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
    msg.setTimeStamp(0.91596091711);
    msg.setSource(51309U);
    msg.setSourceEntity(134U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(82U);
    msg.op = 80U;
    msg.goal_id.assign("ZOJISSMCKQFHVJXOAPFRYIXMRAUJGTJHKANZIISLLVQFFVFATHPCKOAASZWWMGOXSKENOCOGPTEPDJUEOHILMBVKRQWLZWADNPRSOQKHNCYJFNHPRVDLXRRQSWNKDYJDGYQTFISEXBXEXUEQHGPPWBAYCKTROYAFQGXVZZTDLJUPUDAUIRKTUQDGNMOWCGMNEBQITV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GUPDNRYCXCYQDORJAHESFCUIQZZRIPXICSCFIPHLBEXGHVCZEAYFTIOAWHUBKOOHCWOKUAOBXBUUFAUQNFSMBPLWRKSYMHXMJRDYVIYUHBOQGYYTODNTZDBNBXHLNFMGGIZHEVRXZOLNRUZVEWYWJEVQCLDZXSMPMVVEKBSJKBRVDTWWEZT");
    tmp_msg_0.predicate.assign("HKZUFEKHWMHIUVXUAVIJJDGOLOKOGNHXKZYAPJEVMNGLVJDTTSRONISZRJONWPKHRPWGHVFSDNPDMPISNDYLFCIFAYSBYLQEEHEKJSOLZDMXMJZTGYGCBAVEQJPLYUQNZRGCUOZWBQAXKNUEFJFRBFXHRLBPZULTUACXMPXAIIWQEGHCJFKHIOQQWUCWWIXVZQDGTWSRTI");
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
    msg.setTimeStamp(0.979497159393);
    msg.setSource(36364U);
    msg.setSourceEntity(200U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(179U);
    msg.op = 89U;
    msg.goal_id.assign("NPAEJZHLIZKWCRGUUKVBRRPPVGZNAX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YIBVUQJAAQZVINLBWVIPQMKAOIZCXLREUBOVJZNXBSQDVMMYPDNNHQGUCPXGZWXNXEOLRTSOGVUFLJXZZWYBIRABMVKNRFNGYGLPULFBSXALWZVEIYNRKJEDEXMUKNGCADTPSYCBTLJDLDCWYPDCKKYINUSEFFRJUVU");
    tmp_msg_0.predicate.assign("QRYDUJYLHRULEMFAVAGJGOKMGTMPZJWHBTOJCWSXADFOLPIRCVDOSDNDROBOTBAVRFDVQAWRNPZVKCUESPTYTZIAJWBYQDEZCPSCEFAWVLSFYCCPJPDBTTJPZFXZMGTHGRRWWKXJXJU");
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
    msg.setTimeStamp(0.992713239336);
    msg.setSource(30396U);
    msg.setSourceEntity(63U);
    msg.setDestination(31341U);
    msg.setDestinationEntity(196U);
    msg.name.assign("WPZFTGVXBTZKUJOOOCSPPWTHTNNJJUDZMDWUCSCJJZYUGACPTGRWOHOBEWWFULSXAMSAKDQSCRNEGEDYUEIFARMVFIAWZHNHREWLASAIVYMYSRFS");
    msg.attr_type = 58U;
    msg.min.assign("WMVEYCVECZZLEYPAJHNRYLOHCBYBMMQPDTYNOVBOIYBNNUHRILENRQKSLUTUAZXTXFGSOVQPLCFSCUDXIVVHWSEYNNXUVDNDTTAUILQKPXXRYJSGHDUKNRHLZADISXMGEBAPAXFSQXFGUWFPWDHHJEVAPIMVCKKOTREFJYOOQJAOHAZNAQWQZVEWKCOGBRGIWTCJDFTPWYFLGWBFBJMDGMZTPGZ");
    msg.max.assign("HCCGQYAEMDDPFRBERYZUUYTZFVGUHSIYNPILEYEHPFMSVUVGIQPRGWGCKVKNDODOUTFYIWHRONJKBDXTLGABVJXRZRMGEBGTIBSEQYMIOGJEIXPWSWOUUFWONNU");

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
    msg.setTimeStamp(0.216469169187);
    msg.setSource(27995U);
    msg.setSourceEntity(90U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(44U);
    msg.name.assign("QWIUGRUADDEKBZSNGIGZXNXPEAYAUEHYTXEWODXMSVSQIJPTQFDPVCFN");
    msg.attr_type = 203U;
    msg.min.assign("JPRZNOYKSVTTGTYUFHJMRGKPNHBFBEZBWDGKRDXANZVTFSRWMACEMUEKXTHIPFGLCNPXDLXIJTIQXHHVWSFZEHMLVYOSJSPXOZKLMAYMTFRTVGDQGOBOJEBWNYQCUZMCJLJVMUYDKZYNDGLLHRCWKJVPNGYRSPTUGQOIEQBFNVDIWDW");
    msg.max.assign("EUFCDKEYPBHZNSUCQHGGAYBFSQLQHHTYRDAQEDMZDJJUIZNVORHIPWKHIVJLOXEXHFNUWLLHXTAPGSVHBFURXPLWLFZB");

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
    msg.setTimeStamp(0.494464305126);
    msg.setSource(38300U);
    msg.setSourceEntity(234U);
    msg.setDestination(40075U);
    msg.setDestinationEntity(170U);
    msg.name.assign("JTGETLPALYEHYEXYZVEUHFWERGFIHTMSTOUTBBDSJKGZEYJLWSQDXIHCOJWPRSKDDDMOKIPNNUZAKBVXGHAYZVGJMCTEJAHGVUYNNFPYOQNCXCXNQMAKQCDHFCBBXKSHJQZJRVRUWAQCEMWDKWODVTFIDMFSOUZLAITLVMSFGRBUBBLARAJYPSOAGZJOLCLPPURXKTIIPWSSQY");
    msg.attr_type = 29U;
    msg.min.assign("LJWHQDAIZCVSOXDPMXTKVFDQLEIRXAUSEJXDWEJXAHKFBIGAHYIOGGFHTGCMYYMQBULLSFXPOKPLRJCIVHEFXKICGDTZTARCZKUBNFCWMUNLSMGIHYMUCWURNWZJQBNBVBTOEVSZQDVHWHBYEXSFNMEYROWPTQTRBYAVSGUGOUNCJ");
    msg.max.assign("SZTBNMECDCRLOCRZASLDJRYJKBIHULRBQUNTKAWHYZOGITZCQVNQTADMXVXQHXQZHUCLAFVNMNTAXJUVOSJYUIYUMLUYFQXDAJXDKMGOQFRBKNOWVATHDCZFWPWBEMYJMFQHNAEPG");

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
    msg.setTimeStamp(0.0370982196469);
    msg.setSource(26889U);
    msg.setSourceEntity(226U);
    msg.setDestination(4953U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("TSBWPOIDNNXWGIUWMQKJDDCZTVEBLYZJJNVJLIRAIKEMSOAHITHETFUINPAKYFCPDVXBVQZPDFZXZPYBZJURPCJYRSKB");
    msg.predicate.assign("VLGIHGFJTQSZVAWZGHYGYRTUDERJKCWPAKUKXNWSEGNOTYMNJFXQKAQJZ");

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
    msg.setTimeStamp(0.00161913357066);
    msg.setSource(40221U);
    msg.setSourceEntity(134U);
    msg.setDestination(49713U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("CRLAPFLDJZVTNBOJFRTXPKVKDLUYIGUA");
    msg.predicate.assign("XRJDZROVIHOJFEDYTMDBWYOOADNLSCBABVLAQRTKDYUIZMRBYUBTHPTHTQNRSHCLGIGZVJFSPXUTUPSWNPBVKMACJUSGNEWKITOJFJWQUZTKHCDXGFHGXPPFULWAAIZDMKHWAWKNQTUQCFSBLOXJNWQIEBJVMBXLEBIOHZRPRWYKALFKKVOFDELRQSMKGTNJXHHNYPOYRVSYCIFUASCZPQYEGXQGNIGGLVNZ");

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
    msg.setTimeStamp(0.282918387349);
    msg.setSource(6822U);
    msg.setSourceEntity(62U);
    msg.setDestination(1540U);
    msg.setDestinationEntity(108U);
    msg.timeline.assign("EDCAIKMJFIGOHJNMRSXLSEEEPOMAYUUQXPFXSOOSNAFAQXBKLDIKXWBFWDQVUAKFHIIWRZEGTTLJCSVTVAOKXGKHHETNCLEDBUNVGQUIBMRRGDVRLZHRJLFZQULPMXWHYITCZFKRRKSTUBAFGGYPOGZVNXQEBYQMBLYXSEUW");
    msg.predicate.assign("ZGNLFYHZHVWZCXZMEMBGNIWLLYBYDGQUKEJCDNZOXRBRRKLMGNRWSJBBGGBXOUWVYJDIQSLHPPZHRUQUCMUERJOUJCWBFFPAXOVXNHJEYFACTDCEIAUAIKYFSHKMVTEJFWRACMTOVUUFGXKKBQFLSDJLYEP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YLXGPQZVSTZMNLXEGXATWPNSFQSBXMGBDYKVWGYITQWEAHLJHWOAUVFIXKUHRZXMSGEKIBDRKYGRWKOIBVJKXHXOUFMEVVJSCYEUFOKKNFICDCDTUIULLYTTPMIAABOHCQWGUSANJANFCFBWYBLFQQADGLTZCPZBZEQJUWVCGRRROSNOC");
    tmp_msg_0.attr_type = 226U;
    tmp_msg_0.min.assign("NUQZCZXOKFTMPFSJDNBKYZPHGWWTCKWOVMQCHJKFCDMBPYVGQVMJRWYNBQETSNFSTRRAZJVMDRGULALQLNUXDTEABDJPFQSWITQCZELLMKXABARDYKEUKPYUGCGTLTEDKXOAFFQTLSIKFIJISLSBVWZLOBRNCXUPHBTXIPPZ");
    tmp_msg_0.max.assign("PESJVMUYZNTTFVNUBBSLLYYDIFXNPIWTIMKQNCCZIJKEKGLZWMNGHRIOXCQWGBHUOSOFOFDNYDRVJRFXGQQUKTMPMELLAOCXHQNSYDKGUZODQZWTTPMMEAQXNHSBMAOWAXHEYJMGKQDCBPCIERZRPURZRGNLTEGKWPDMQWWUWFHJXTOHUIVQLTDJCEAAVCBSAPZUGXFVXIKPEF");
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
    msg.setTimeStamp(0.214952003872);
    msg.setSource(34876U);
    msg.setSourceEntity(27U);
    msg.setDestination(20240U);
    msg.setDestinationEntity(66U);
    msg.reactor.assign("NKAITBFXUKYBZTIIFFRBJOFRGNPKZVXGEHPZZWQCJHXNTGVMEFFEVXMWDXKWTCRUBLCQRJVUDEXHTPVRXULADCZAERMNSYRIGOFLGMIBYSNEINJBMVDPYITOQYECRQMOPAFEJLGZEIACSPYQMLPJSVGABJHQSWBLZUIYPZHASOVDXCYWYKASMDNZBNQLQOFTWQVRJKJKSMDLZKLJDHCGHKLHUARQTVKSDSEWUAHBUXY");

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
    msg.setTimeStamp(0.0227292882819);
    msg.setSource(20617U);
    msg.setSourceEntity(101U);
    msg.setDestination(21859U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("UMIDGXVTUYUCNCQAZWCNMM");

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
    msg.setTimeStamp(0.656146996817);
    msg.setSource(51714U);
    msg.setSourceEntity(200U);
    msg.setDestination(16940U);
    msg.setDestinationEntity(175U);
    msg.reactor.assign("VYOQTNMWACMBJLVURTONIOZFXINYAXELMAUEGWGTMBNJPVJWHSDKRGTOLNRBJYRYFOBNHJSIXEQYZFR");

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
    msg.setTimeStamp(0.878112017732);
    msg.setSource(5126U);
    msg.setSourceEntity(65U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(15U);
    msg.topic.assign("OLCVUGASKXHBUCMLXTMCFQRHVEORNPPBNQPSJJYWVBRZDJCTCIYYKMQUCELUYXAXYVFLKQKJIQIVMXLGFNFZOALRVVIWMDOJNFGJKLZDESPVRHSBWIGLDNMKUWEDRBMUPOAXMKBYUN");
    msg.data.assign("TFATNLNTZLFFKHRCLDMWVVPULJLQOUXVRTKZDFWGBYRLQMUYJZKINYGOQWTNHXZXFGUUYBDWXQQIDEPDJLZPEIEXXVHOPGTYJAKOSJCALTWPVPNIGKARLRQWCKEMUESISHAAYCCIFNOXWJFQNTYRXQKZNNRLYSGDGRMVHOAFQBEUDUBYROZWCIKMGEHJMVBEMESGEBZBB");

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
    msg.setTimeStamp(0.110983304851);
    msg.setSource(36730U);
    msg.setSourceEntity(214U);
    msg.setDestination(46317U);
    msg.setDestinationEntity(180U);
    msg.topic.assign("BWLESVORXVPROVMAKBWALVBAECWARQAYZYENPPDWVWQHDKLAFZBIXOSMHGAZWLMVRIRNFGXXGTNDLYGKWKPOFJBUGFTXKDBMJINRDGWCMQAKKQGEAZQLSMCTGRWTIEIFLYRXUMTZUIJCNQIPVXHOSZXLSCHKMNEGSCTZYFOWGRHYPEMNHEDJNHVCUYLOUTPMQ");
    msg.data.assign("NNFGNLSVDHXAJPCOTOIBVQRZTGBXGYWSAWADDNXDKGDCZPKHTBNEAPAREGUOZQYYZOPTOVQPZFFKWBZFVOSGYULGBRMLBJRNFLDZHDLHMECEUPTOCTRLIGHSTGMMNVWPDXFQYLTQEUPCVSNSTJCDKQIPLBJHYVIFOIIBCMVWGXRQMYJXUKFRMJYNDKWJCWYZHMQQAHQPFSLXUMYOAEWZEKERXKRATCJVNZLMEU");

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
    msg.setTimeStamp(0.422276643357);
    msg.setSource(19988U);
    msg.setSourceEntity(253U);
    msg.setDestination(7456U);
    msg.setDestinationEntity(118U);
    msg.topic.assign("BRZLYPMEAYBOLGVAPIOPTBRVBZARLWCTSFHUYHYPFGKRJGMXCKXHWNANVETTKUOMIVXMFJFBQRICJKHWWENYGFEPZXVEMMLPIQOQHVYEDFPAPDAGRWNKBAUCLSGYEHMTYGOSIQURXMCZNSCNSWQSPBXCJBUBLDOWSCGZIKIFENQKIDUWLMEKQDTGSDCZ");
    msg.data.assign("TKFDRVPUDBPCGMIRIDZXOCGZJAPBCRIYHZWAQPQZEIOBCHQJRQXORXVWKULNFIYDUCJDQSNSKAWZMXZVCHEYFMSRWATDEIBYLAUNUHBGUKJIXRUMKUITTCQNTDWVVOQHMFLXHTVCZKWTPUCEHNMZEAOVWLGDMSXSHFKSVDGBPSQZVHFXLLYTCGVIKLMASOFEATPMMKWIDOEYBYPXOYHWWRJLYFNJFXGTLOEJAYZFBR");

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
    msg.setTimeStamp(0.699259097861);
    msg.setSource(39630U);
    msg.setSourceEntity(236U);
    msg.setDestination(52867U);
    msg.setDestinationEntity(2U);
    msg.frameid = 208U;
    const char tmp_msg_0[] = {58, -75, 125, -108, -79, -95, -55, 63, -57, 67, 104, 49, -116, 124, 109, 76, 61, 82, -74, -88, 44, 78, 14, -100, -20, -27, 116, -16, 103, 42, -96, -37, -124, 26, -86, 81, 21, 12, -113, 68, -97, 102, -90, 72, -128, -121, 23, -90, -90};
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
    msg.setTimeStamp(0.657053120432);
    msg.setSource(27815U);
    msg.setSourceEntity(30U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(23U);
    msg.frameid = 109U;
    const char tmp_msg_0[] = {-114, 92, 2, -10, 106, -53, 82, -3, 3, -88, 27, -33, -9, -59, -117, 70, -62, -90, -43, 123, -42};
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
    msg.setTimeStamp(0.0941362448553);
    msg.setSource(64077U);
    msg.setSourceEntity(208U);
    msg.setDestination(14176U);
    msg.setDestinationEntity(193U);
    msg.frameid = 71U;
    const char tmp_msg_0[] = {16, -113, 34, 21, 19, 119, -67, -1, -42, -112, -19, -34, -32, 4, 69, 118, 2, -43, 124, 83, -26, 116, 114, 124, 49, -119, 9, -81, -56, -76, -110, -40, 70, -9, -112, 21, 62, -74, 57, -97, -73, 57, 109, 7, -16, 92, -69, 60, -112, 59, 40, 41, 121, -125, -17, 108, -50, -7, 59, 84, -2, -61, -82, -123, 42, 23, -17, 106, 7, -111, -46};
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
    msg.setTimeStamp(0.28762239335);
    msg.setSource(49794U);
    msg.setSourceEntity(142U);
    msg.setDestination(24279U);
    msg.setDestinationEntity(51U);
    msg.fps = 202U;
    msg.quality = 40U;
    msg.reps = 151U;
    msg.tsize = 34U;

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
    msg.setTimeStamp(0.7763192648);
    msg.setSource(40085U);
    msg.setSourceEntity(47U);
    msg.setDestination(42512U);
    msg.setDestinationEntity(15U);
    msg.fps = 33U;
    msg.quality = 107U;
    msg.reps = 139U;
    msg.tsize = 51U;

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
    msg.setTimeStamp(0.376243955031);
    msg.setSource(2598U);
    msg.setSourceEntity(184U);
    msg.setDestination(17426U);
    msg.setDestinationEntity(65U);
    msg.fps = 34U;
    msg.quality = 113U;
    msg.reps = 139U;
    msg.tsize = 82U;

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
    msg.setTimeStamp(0.651127194591);
    msg.setSource(42301U);
    msg.setSourceEntity(217U);
    msg.setDestination(22194U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.298041502851;
    msg.lon = 0.769584494974;
    msg.depth = 160U;
    msg.speed = 0.83100436616;
    msg.psi = 0.252735853917;

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
    msg.setTimeStamp(0.823205130834);
    msg.setSource(32837U);
    msg.setSourceEntity(101U);
    msg.setDestination(16546U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.158866228115;
    msg.lon = 0.647912344118;
    msg.depth = 38U;
    msg.speed = 0.618270016945;
    msg.psi = 0.00876472567972;

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
    msg.setTimeStamp(0.376248278217);
    msg.setSource(35816U);
    msg.setSourceEntity(27U);
    msg.setDestination(11630U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.187571498897;
    msg.lon = 0.0941035211554;
    msg.depth = 154U;
    msg.speed = 0.422339386984;
    msg.psi = 0.283884182369;

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
    msg.setTimeStamp(0.750588774679);
    msg.setSource(57499U);
    msg.setSourceEntity(65U);
    msg.setDestination(41232U);
    msg.setDestinationEntity(213U);
    msg.label.assign("JIIGXYYUQMZTAEXLJRETGHYPYMGXIABVICRLAXZLEPNIKCWKOPYDXVFROQEZZUITSFKQCTJJBRZWL");
    msg.lat = 0.155653760819;
    msg.lon = 0.8011947033;
    msg.z = 0.744770937257;
    msg.z_units = 234U;
    msg.cog = 0.318800256257;
    msg.sog = 0.711151862576;

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
    msg.setTimeStamp(0.422300465389);
    msg.setSource(53350U);
    msg.setSourceEntity(111U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(143U);
    msg.label.assign("DZQZWUFBSQFSWXKGWLXZYQXUYXNXKJBHAADHKIJXYUUZELCUQYQAODCFHCFOZCGGDFNGDMBJIPKSPKPSMTAXBBWNAPDDOMFYQRPMQJDKIOBIZORTKPQEQCLLGSJRYJFYMCETOUVPLCMVNUYJ");
    msg.lat = 0.519195959056;
    msg.lon = 0.855593034646;
    msg.z = 0.552252310495;
    msg.z_units = 161U;
    msg.cog = 0.643427031482;
    msg.sog = 0.858831790354;

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
    msg.setTimeStamp(0.5616103905);
    msg.setSource(1U);
    msg.setSourceEntity(130U);
    msg.setDestination(43060U);
    msg.setDestinationEntity(161U);
    msg.label.assign("VAIGBHSUEYYJJ");
    msg.lat = 0.323330442902;
    msg.lon = 0.479196230233;
    msg.z = 0.859543609569;
    msg.z_units = 67U;
    msg.cog = 0.791509030362;
    msg.sog = 0.215166852289;

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
    msg.setTimeStamp(0.57856047842);
    msg.setSource(40210U);
    msg.setSourceEntity(219U);
    msg.setDestination(5889U);
    msg.setDestinationEntity(42U);
    msg.name.assign("NWRJYHKXKEEBCXIVIKULHKWXYPFLFMRVMDBHBJNUEZKJSADMDOQTRMPVZLMJORTPVPCUNGGQEAPNBXIXKCLZWFWVZZJZVCXUQMCDEMMGUFIHLSVRSEHSYSANWDDRDQLVUGAAYWSYTQYWDZUUFJANOYTZCPSIORJFBIQCBH");
    msg.value.assign("DHJGCZAFTCMQZTWLOQAYJCUMPOBTPRUFANTXEEDKQSTWDBVUVUXLYVASBHLYEHNALIIYYVJGXXAXMCIBVUEFBBDWWJEKPXLQWZOCBRTATNZQEGFJWCPXMAEJSKQHRJGMVUMQRGPZCNAH");

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
    msg.setTimeStamp(0.396841234797);
    msg.setSource(32568U);
    msg.setSourceEntity(41U);
    msg.setDestination(7589U);
    msg.setDestinationEntity(24U);
    msg.name.assign("IJPVQGWXWQYGVTLAHIFRFCTHZDIBHSKCCXDWHZPFQGHUGZNUYOBWNBKPRBWJGLHYNAAJNFDPLPSXZOVPRKOQCSSAS");
    msg.value.assign("ZAXQEKVQNZAYDOCDQFYESPKKCHGLXBUHUUOBLURFMPOXVFPINGZXDATXWBWJRJTUGJJAMOVNZPGDVYNADOLYFRKSWIEQTCHYSWMVCBWEZETTGFOPWOKQOPBAICRLNPSXZGCTTAUZWUWNSDPHWRHYOEBNCIXLVKVRTHMNGJBREMDKFFCRDHJYTJBEFSHPIQZLKQTSKAUMKVGCHLQMGVUXIIXYDRAZYINECWFYVM");

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
    msg.setTimeStamp(0.426789975539);
    msg.setSource(18724U);
    msg.setSourceEntity(209U);
    msg.setDestination(44008U);
    msg.setDestinationEntity(155U);
    msg.name.assign("LUZQTUHYPSYPNEVYUQWX");
    msg.value.assign("GMKTPMOQTWQQTCBAVMKQSDBHIJFERFWZXANKWXWWLCOKNBEKUYHTJVUEJECRGEQSMTPBBRHZOIVLUHNNCMJDDJOUOAABJNWYLXGYTOASVDCFEBRGAICYOFPWRFJGVHQNDRPPX");

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
    msg.setTimeStamp(0.0723494564087);
    msg.setSource(33726U);
    msg.setSourceEntity(30U);
    msg.setDestination(21899U);
    msg.setDestinationEntity(186U);
    msg.name.assign("QPFNDKAKUUDMIMSOWIFCVMSEGGPINZYUCIRNYKYTVPOUZJRMSQVNQLTRPIECIHCQQHUTVGKVHTIXQECRPDLEFKEWJOVBZRDXUBMOKBRODAQVHEWESJZHLUDTWLPUFNVONXWJZABXRKHMWRPRFDRWSHGSQJYYICPHBKGAOFNBICWFNAAVSXBEHXTMUBSNGDGSQYEFTLBEXOZCLGSFPYXYHYPZZAJUOKOGGKJMXVJDXWZAWMTBTJZAQTNLJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DIQJJODATNRVHMAEWHSVYTECLLEUGMDQSAYAVYPWWGTRZFWPUILMCYJBYGDBOAUMS");
    tmp_msg_0.value.assign("MWIZCYZYRQYUKBVHLDAOJPPOBNXRTTRELTMKZHBJDDDQUMDKYHNZFMOST");
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
    msg.setTimeStamp(0.94180350049);
    msg.setSource(58545U);
    msg.setSourceEntity(82U);
    msg.setDestination(49640U);
    msg.setDestinationEntity(114U);
    msg.name.assign("PUGSMBXVVOXJKHVREJLANMICZWDNIFLGLKANYZTORPOAZGKNQGQVXRRVSQWJCFIBPJRMPOXXLIBYHDNIKUHGMPGFHJOWZHJDIXFLZYTBFLLEZNAQLGLOQMWVEHZCOEQDJEUAZ");

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
    msg.setTimeStamp(0.213993147132);
    msg.setSource(52633U);
    msg.setSourceEntity(105U);
    msg.setDestination(19007U);
    msg.setDestinationEntity(117U);
    msg.name.assign("YSFHIDELTLUKZTQIKWSFPBKHOLSTCVYKJKJBKUZHBXTGDMOSUELJZZTFNYTPEKAQGPGFWFUMRFEGTRIKJZDPNAXNSDNCAVCQXOLPFGPMBRSKECJMCWVYEBIXMVCNHTSWFXMRZQDOPXSBQEWVWUWLBBQBNGLALKNCDIEOCJVMHYJAAXSRDAMRUYRNRZOUQTEGYRVPUDZRLTYJIBQFHNHIOYXHWCIUWMANXQOAVHIGLPYMV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GLTWFDEASECWIKZVPYINUHJIGVVGYHNNPPNAJRJOONCXTECHNSWJUNQMXNKTGUCQTMUUDIMGGZT");
    tmp_msg_0.value.assign("SQVHGPEPRVZLRIBFCABFOWDODARRTIIJQOKIIGPWCKMUL");
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
    msg.setTimeStamp(0.197864433282);
    msg.setSource(48211U);
    msg.setSourceEntity(169U);
    msg.setDestination(41753U);
    msg.setDestinationEntity(34U);
    msg.name.assign("GYSIJBGXEJTQOZDNYXTKTXTTADUMXARGSNZFDBBADRRDQMQAZPHFIBVQUVCTMINWSDLKPJJXBZKOOKCNQPLFNXQMOXTYJNTSITRPKQGWIMJACVSLOKDRIPYCJZEFUZAUMOPRYSGCJZUACHZLFHLXLMWNSVWODGFVQAUSMEEYFSKRXZGRDFPUKWPVDYEFZHHPWYSVWH");
    msg.visibility.assign("XYHDXMZBXHJAGWSFNELHNIFPWLOSLIMCLDBRYE");
    msg.scope.assign("VHPXZGFVXKDOKVXWDCOLKJMQOGHHDQWDFHYSUIKXVEJAWPECMTCNHWRDSSIXNFNTWLCDDLZFSMTGSVIBJBGKWOEUUTPG");

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
    msg.setTimeStamp(0.971481054311);
    msg.setSource(51075U);
    msg.setSourceEntity(58U);
    msg.setDestination(18668U);
    msg.setDestinationEntity(200U);
    msg.name.assign("MCGOVZCGFFVBJXBPIMYOWJNBJDRMWKGESIQYFRLTLJTAXEHZUKBTQXIUEVBNPCBELAFALXUPZHWKMAFSKWIWTFWQDHJZGVTPZVLEKQ");
    msg.visibility.assign("KOHJPOSUDRHVMIRVXMWGXEJKEEDMBOYLSVAWBWTZNRSLYMBFQINCXUFNHLHOXQIIZJXXENSCVLGNVQAUFOCZICUQLPGJKFQMUVRTFQESAYLHCKEGDJQREPYWHDZACWGRMABUZIDFAOHGPGAUKYNLFJQVATCGEDNTVSTBYLXPBIPWXBNOMYJAPZJSPDLSJWUXMTASFTSLQRNBBZDPZOBXYZFGFZOGIDTVRMWW");
    msg.scope.assign("WFAJTKAYZQORFBUTHLUXRBVNNJUWUHDPHKPIFQCXJORMZFFCMIZXZEVUVVDQQJYAAYCKUGHCTPZHXACKEMEROOXNQDELBDBDGIJWAUFKYCOPNHTWENHIRIPIRLZWSYUFJKXNHETNLLCWGILXDVPTJVSOMIRGNPEMXYSDBVRIYKYKABQSBZGJOPYWAAKLJRDZSTCCTDALSWEBGMQGMZBBZFKGOSURWQXENP");

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
    msg.setTimeStamp(0.0986044541199);
    msg.setSource(33485U);
    msg.setSourceEntity(213U);
    msg.setDestination(61438U);
    msg.setDestinationEntity(249U);
    msg.name.assign("GKYGTLILAYMDZENAPVDDSUZJHSWBLQBYCZPXHHSKPBGDMXJYXMZRDEJENATHEZNJQJHHOHBFRLVPKAGXBWMYGBJAOSSSLVKIXGT");
    msg.visibility.assign("YULGXIEVKGVYEXWSTPNLFQFVIWPPQVYUHZKRKDXBWLRXVFJPSLAHCZBGIEFSNWHZWEDNQXCYBNKIHJXZFCGASQEFLMASTQAJZFDTZBIROAJDEMOROVCHMXDTWUEBRPWTJRYTZOERICQQKJOTVOPJBOKMKBASLRTVGAURMUIDQTYLGPVXDFNMFUJSYO");
    msg.scope.assign("OTLYEYISZWZ");

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
    msg.setTimeStamp(0.584645127198);
    msg.setSource(54896U);
    msg.setSourceEntity(229U);
    msg.setDestination(11298U);
    msg.setDestinationEntity(5U);
    msg.name.assign("BRLGQXSAUAJIWVDRUSTBWJPCYPCTYCGKEBYISSFTEZLRLETHEMIOOPUJDVXMFMEHJDDXTVOFNFWYRKZNSDEEBTKPRLVKDGIAMGDQMDPWBAMNQCTAYJVNNRNTSCGKMCZQORUVBHPHPVKXXLQBJEWYFHODGIWPWZOVCKRALIIVUIXCFWNHOIURKWNJ");

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
    msg.setTimeStamp(0.392065290844);
    msg.setSource(1660U);
    msg.setSourceEntity(210U);
    msg.setDestination(24791U);
    msg.setDestinationEntity(246U);
    msg.name.assign("PAJQOVJHGPVAQLVTYDJBQHQTXVQCHBQHDWXKYTVCCWMJHJZEESNNHFUOLJOSTGDIWNAGUFAXIHGVWRHUFNCMVBNDISGXKCRLEFCQESWAMYCAKKPPDZVHCEBRWVKCKKDJPTXEMMLFZDUOYABYEPFQGXDITRRWYYOADUUIKURPZLOQONGMTBZNIHJXAVYPLXMZLEWNSDZSMUNCLXSNLYBZIBIUS");

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
    msg.setTimeStamp(0.787250911655);
    msg.setSource(56784U);
    msg.setSourceEntity(167U);
    msg.setDestination(53035U);
    msg.setDestinationEntity(132U);
    msg.name.assign("GARLHRFKJNGOMAWUMTMWSSYXJMMSTNVQIEGKWRHLTIFPAHIGOVDUFPVEOBDYUJVNTPYMTUMQSIIALETDFNCNPCEZMXSKBBDEIMGFHIZYXKEECEOYSTZQLGLAOQLNBRYPIROSHXIPPVYACUFOHZWBCJBDXZLJWWTOKRPBQOXWTXFHZTUNXEVCZKKAYCLJGVJKQXDJKUXAQDUBHLARRAGL");

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
    msg.setTimeStamp(0.688759611866);
    msg.setSource(57089U);
    msg.setSourceEntity(211U);
    msg.setDestination(48002U);
    msg.setDestinationEntity(184U);
    msg.name.assign("HPRKULCGYJFIPWEDQQXGRYEFEICJKSENGOFZBBKCPSJDOAOFYXSMZBVSFEDUHOSNDAHNWOZBPFDNBKDWQJLOGTLVXTQLQOSTBMNUMZHCHYNELXLNFVPGXNVHGIJXMJUUGVVZJJMAWLHQA");

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
    msg.setTimeStamp(0.240502788385);
    msg.setSource(2548U);
    msg.setSourceEntity(137U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(237U);
    msg.name.assign("AAHDNEIHBTFXTFYGEMOMRSWHHEFUEJISSSNFQEIBQXPLPARCZJOLZBMCWLTVDLMCMKSMHEEYUXYBFWVVUNXSRONGVMPWUTAWATKJVBODVGXCJSOCKSWDEYEBKBNGQIR");

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
    msg.setTimeStamp(0.434375899791);
    msg.setSource(2219U);
    msg.setSourceEntity(242U);
    msg.setDestination(31659U);
    msg.setDestinationEntity(78U);
    msg.name.assign("KWQWKEQXLUDAAMVLNJIIKGKGBZSBTXDTWOXGDDBFUQHQYQAUOWEXBEOTVTAYUPUHFYCBKFLFEUVJLEZVFMYPZOWWYVPI");

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
    msg.setTimeStamp(0.0682536566415);
    msg.setSource(52007U);
    msg.setSourceEntity(77U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(64U);
    msg.timeout = 1514991271U;

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
    msg.setTimeStamp(0.499673290163);
    msg.setSource(11827U);
    msg.setSourceEntity(221U);
    msg.setDestination(59050U);
    msg.setDestinationEntity(236U);
    msg.timeout = 798801341U;

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
    msg.setTimeStamp(0.942760375366);
    msg.setSource(55036U);
    msg.setSourceEntity(154U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(145U);
    msg.timeout = 211007347U;

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
    msg.setTimeStamp(0.911505105178);
    msg.setSource(24965U);
    msg.setSourceEntity(132U);
    msg.setDestination(10561U);
    msg.setDestinationEntity(37U);
    msg.sessid = 1574229299U;

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
    msg.setTimeStamp(0.598795188633);
    msg.setSource(59761U);
    msg.setSourceEntity(91U);
    msg.setDestination(18706U);
    msg.setDestinationEntity(30U);
    msg.sessid = 3919079272U;

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
    msg.setTimeStamp(0.684266923384);
    msg.setSource(63463U);
    msg.setSourceEntity(140U);
    msg.setDestination(18395U);
    msg.setDestinationEntity(183U);
    msg.sessid = 234652122U;

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
    msg.setTimeStamp(0.708794343642);
    msg.setSource(46015U);
    msg.setSourceEntity(118U);
    msg.setDestination(48352U);
    msg.setDestinationEntity(195U);
    msg.sessid = 871736046U;
    msg.messages.assign("DCIDIHCEZEAHLXAGQMSGQIBJRTLZTPXWCHFUIQVHRKJZQWDZEZFRKLIAFALFOEJGJNPSDGVVVEZNAUGKLRVIPWYQXKQLXSMJNXRRDNOAWDLBCRQBOTQXUOLKMVRZHFSGHCVKPXVDTYFUTJUXYPLMEWKDZPNQYJFEMJIFNCWYOACSGORMLSKBNTOURCFHUPXNMTS");

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
    msg.setTimeStamp(0.269251361274);
    msg.setSource(12380U);
    msg.setSourceEntity(123U);
    msg.setDestination(23215U);
    msg.setDestinationEntity(132U);
    msg.sessid = 2778358839U;
    msg.messages.assign("ORWYILNREUXCVYLFIJZTSOYMJQCUVVGZPWSTUHCGGBQRBTSHONXPOKFODYHGVCAJ");

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
    msg.setTimeStamp(0.00843742886594);
    msg.setSource(18051U);
    msg.setSourceEntity(145U);
    msg.setDestination(55877U);
    msg.setDestinationEntity(47U);
    msg.sessid = 1082141253U;
    msg.messages.assign("AECSHLCUGGBDTGRVLYTKHHKFQLSYRJLIPSNGWWIRNPJZJOQCQVAGXYEDFCOCIVZPDHJANFVFJWPDIAWENQXLEYJKEQFPVTMVQIYBTZMHCMORAOXBCZXLGCQIDTHPXVXZPULUNODVGMKUK");

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
    msg.setTimeStamp(0.970096301611);
    msg.setSource(46774U);
    msg.setSourceEntity(77U);
    msg.setDestination(62999U);
    msg.setDestinationEntity(36U);
    msg.sessid = 3292243659U;

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
    msg.setTimeStamp(0.598218132994);
    msg.setSource(53460U);
    msg.setSourceEntity(180U);
    msg.setDestination(17686U);
    msg.setDestinationEntity(202U);
    msg.sessid = 2130147636U;

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
    msg.setTimeStamp(0.850915444475);
    msg.setSource(37643U);
    msg.setSourceEntity(230U);
    msg.setDestination(21870U);
    msg.setDestinationEntity(209U);
    msg.sessid = 1423122788U;

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
    msg.setTimeStamp(0.0549862783301);
    msg.setSource(14439U);
    msg.setSourceEntity(235U);
    msg.setDestination(12598U);
    msg.setDestinationEntity(236U);
    msg.sessid = 3087366093U;
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
    msg.setTimeStamp(0.547330312452);
    msg.setSource(33495U);
    msg.setSourceEntity(144U);
    msg.setDestination(60737U);
    msg.setDestinationEntity(231U);
    msg.sessid = 489720736U;
    msg.status = 137U;

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
    msg.setTimeStamp(0.13046401455);
    msg.setSource(15204U);
    msg.setSourceEntity(56U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(7U);
    msg.sessid = 4267069382U;
    msg.status = 190U;

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
    msg.setTimeStamp(0.00439737060382);
    msg.setSource(12142U);
    msg.setSourceEntity(102U);
    msg.setDestination(35992U);
    msg.setDestinationEntity(179U);
    msg.name.assign("ASJMLEQYIACJDQGTYFIKHRSIKBEPRQWBJVGEJVHJEDREZFXOCDZJWDYKYWGMYZMXLFFUQNBTERFKUSUAHPRQMCLMVYBGIJMTKU");

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
    msg.setTimeStamp(0.545531646344);
    msg.setSource(48733U);
    msg.setSourceEntity(248U);
    msg.setDestination(36124U);
    msg.setDestinationEntity(138U);
    msg.name.assign("VAFWEQKURHXRBSYPHXGOZJENDPXHGHPQRDVEIDFZYAPOFXXRNEMNMONSYCJGKIALLUIVWVPTMQMTCCDVINJGHFCYNGFEYIOJCUJPOWGFXRWWTATQJSSCQRP");

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
    msg.setTimeStamp(0.375591839815);
    msg.setSource(54902U);
    msg.setSourceEntity(54U);
    msg.setDestination(45522U);
    msg.setDestinationEntity(73U);
    msg.name.assign("WZBGHFLTQOIYFWOCIKMLUBIWCJZQMYAGHNTJOTUTSYOCYHNBBWUFLLRXKKDEICXHWERSGESMVAEOREXWGJQZAOZSWTWJTTRXHURQIYZRCDDVAVCLSUVOKDIFLTOIGNAB");

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
    msg.setTimeStamp(0.406600984903);
    msg.setSource(42306U);
    msg.setSourceEntity(20U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(155U);
    msg.name.assign("ZWCROSAUHGCWENRYADTWHMFXCLTBATCWGRWYQKGXLKXZPTGXMEQZSWFCCHVZESALRHAKJNUTBTYPJVQEDCQAQFXIIGEOAHKZHXGVMMEFNSUONJJJIBNBVXZBPEYNOVGFXLEIPBDHYWZMKPSMFKJCURDTUAIOCJGTQEINRVFRWXROECPYJKNDMVQUOZOHQJ");

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
    msg.setTimeStamp(0.300645101371);
    msg.setSource(50000U);
    msg.setSourceEntity(208U);
    msg.setDestination(42989U);
    msg.setDestinationEntity(76U);
    msg.name.assign("QGWRXUVPYEZBTLXVNHSDDVVG");

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
    msg.setTimeStamp(0.221478855345);
    msg.setSource(37549U);
    msg.setSourceEntity(203U);
    msg.setDestination(30127U);
    msg.setDestinationEntity(141U);
    msg.name.assign("YYNMHVMFCOHNFUAGZJQCXSJWCZDXJTDEJCLKUFWYZOCVNDBKEJEQTOTBAGQVKCURUXKRZSKILMDDRVSFQHZOLSKBCBHYNYPKUXDTKVCNXXPWZAWMQYORVQBRSVAHRFWOGPSRUMOXV");

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
    msg.setTimeStamp(0.73416269393);
    msg.setSource(10032U);
    msg.setSourceEntity(82U);
    msg.setDestination(1906U);
    msg.setDestinationEntity(215U);
    msg.type = 84U;
    msg.error.assign("MLDKTPPODUMQVLOXIFRMETS");

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
    msg.setTimeStamp(0.260839101205);
    msg.setSource(36488U);
    msg.setSourceEntity(209U);
    msg.setDestination(26741U);
    msg.setDestinationEntity(75U);
    msg.type = 12U;
    msg.error.assign("FJYZVZJWYVUFFRTDINRGDPSIMMTHGZOKBSGVJDSVMHWMORIZIJOCCJQEERLYAWGPTVJOFESCHQPSFCMWXAACCOAGJBCXTDPAWLKQEPRUKNKGNTREBTNESMIFTTGHVVLEILXGKDAJKZCZERKDWPUXLDCDOXYBBVULUQNILKWYQ");

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
    msg.setTimeStamp(0.917664268875);
    msg.setSource(12243U);
    msg.setSourceEntity(87U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(40U);
    msg.type = 79U;
    msg.error.assign("JVFVGXCNEPBADCLYGSYHAVAVKCYRCTTIJDORCBIQZXMSXORSIITFZXHHLOBOJZFBPOGJRVFNRNQUZHFBZRMGUYSNDIKHWNAMOUEJQWM");

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
    msg.setTimeStamp(0.374585955945);
    msg.setSource(21964U);
    msg.setSourceEntity(144U);
    msg.setDestination(204U);
    msg.setDestinationEntity(162U);
    msg.seq = 23754U;
    msg.sys_dst.assign("XTODCLBQTOFFWNQPODEKLAHKNVLMZHLUUGSUYAVDRCLLPWNGFPPJGSYNWFZSZGBOXVRCCANKLRKJCEBXCTXTOSXSIQTJLSFJFFO");
    msg.flags = 66U;
    const char tmp_msg_0[] = {86, -119, 70, -87, -25, -125, -83, 54, -63, -18, 111, 74, 12, -62, 29, -11, -16, -44, -32, 76, 88, 16, 79, -24, 60, 56, 64, 31, 7, -28, -40, 19, -65, -33, 19, -121, -48, -101, 126, 53, 53, -88, 41, 48, 39, -34, 97, -23, 112, 67, -48, 76, 45, -126, 71, 54, 19, 78, -48, 82, 69, 124, 112, 4, 66};
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
    msg.setTimeStamp(0.161832136838);
    msg.setSource(58617U);
    msg.setSourceEntity(162U);
    msg.setDestination(48207U);
    msg.setDestinationEntity(138U);
    msg.seq = 65063U;
    msg.sys_dst.assign("NFEFBQPJJZVGKBBDMQVPSBTGMQXKGKAFKJFXRRISWAGAMRRDDOWSMXZYKUVNJYKJFULINUBBXTTWSPAJJMWBUTIFRMPUIPILGZYBZDLEHHMPYWWUSHJGQEVIHKTCLGIFLINSGBLACTXTEODSVKATQQYQXZMOZOADVHONEMDLMFURHYKUPVTEANWQHJXHG");
    msg.flags = 235U;
    const char tmp_msg_0[] = {-10, 21, 49, -109, 42, -111, -97, -14, 70, 80, 119, 3, -65, -32, 8, -107, 44, -24, 125, -120, -120, 52, -37, -49, -60, -11, -102, 120, 0, 117, 107, -106, -15, 108, -48, 79, -19, -106, 82, -51, 113, 93, -17, 33, -71, 84, 98, -78, -65, -77, 107, 2, -113, -75, -99, -47, -47, 98, 14, 42, 12, -122, -20, -91, -52, 68, -124, 110, 74, -59, 34, 42, 64, 114, -36, -26, -115, -96, -93, -85, 88, 20, -128, -39, 71, 84, -100, -76, -51, -124, -30, 79, -73, -47, -59, 119, 72, 52, -41, 90, 74, 11, 118, -41, -99, -86, 78, 116, -128, 59, -22, -101, -15, 101, -83, -8, 114, -122, 79, 60, 19, 32, -65, 47, -62, -11, -9, -6, -124, -15, 47, -117, 75, 10, 56, -102, 98, 10, -118, -95, 42, -16, 120, -86, -60, 106, -12, -22, 81, -17, 0, -127, 25, 35, -29, 63, 90, -84, 65, -25, 63, 103, 91, -14, -33, 63, 7, -88, -4, 60, -16, -23, 32, -118, -123, -69, -38};
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
    msg.setTimeStamp(0.0551683401558);
    msg.setSource(27978U);
    msg.setSourceEntity(36U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(103U);
    msg.seq = 5503U;
    msg.sys_dst.assign("OUNZBYKMJEQLRITSFKIKFNWVSKJJZLOCEFKRVMDWYANPIVQZASLSYMXWMTGFPKRJXWEPOHINYEGIHWMRDTBMWFGNJHQIZOCASYZTAEZWLRWPMFOGCMAZQVEJLPLKGFVHHCVVOQDCUXMPXFRHXTNVKUCDNDYVESBVSEUCJTYYYMTPNUYEAKPWDBLAJXBCHUGGECBSRWJSZFSJBXZLGHRGDIAPQBAXOKUOBLNTRQTBIDZP");
    msg.flags = 108U;
    const char tmp_msg_0[] = {21, 3, 38, 94, -50, -51, 2, 119, 74, 86, 89, -79, -88, 120, -112, 105, -63, 1, 96, 98, 11, -119, -54, 46, 38, -122, -53, 34, -69, 28, -82, -17, -117, 92, 6, -116, 123, 69, -6, -119, -65, -78, -104, -126, -77, 107, 23, -12, 71, -118, 6, -60, -48, -91, -81, 71, 49, 70, -77, 21, -40, -9, 97, 97, -26, 39, -61, 48, 14, -59, -102, 41, -69, 63, -33, -113, 110, -61, 62, -25, -19, 111, 111, 52, -115, -28, 39, 43, 101, -29, -85, -121, -87, -31, 76, -31, -48, -18, 15, 41, 8, -6, 3, -94, -64, 63, -48, -65, 77, -36, 113, -7, 14, -102, -13, 24, 89, 92, -82, 121, 113, -33, -102, -66, -62, 110, -122, 32, -22, 80, 115, 82, 120, 10, 11, -125, -110, -44, 10, -113, -52, 105, 12, 102, -82, 75, -14, -91, -1, -1, -94, 70, 71, -47, 81, 120, -113, 82, 19, -75, -9, -66, -78, -107, -53, -125, 15, 104, -14, -57};
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
    msg.setTimeStamp(0.52221043279);
    msg.setSource(35636U);
    msg.setSourceEntity(205U);
    msg.setDestination(5806U);
    msg.setDestinationEntity(236U);
    msg.sys_src.assign("MGJANCGCNJIGCBPOBKYQFQPEDAWBWQAJPLPWRMYWXDUWJYCQNRHXUTP");
    msg.sys_dst.assign("RDFDHSWMSYZXJKDRONJYIOQFKICYSRUUIKLTZJMNYXQTMVKARFGAUGRDHQVHUMJUKIBMLANDRKWEPEVXPBWXYIHGQTGYWYMLSECLTZAKMXHBWQPKHQTSLUKZZGVNYBPENVFJWLXXMSJLNSDOUOQCRBQZZOEGQFCDCVHDAPAVXFGVH");
    msg.flags = 103U;
    const char tmp_msg_0[] = {87, 109, -55, -116, 47, -30, -75, -82, 105, 70, 11, -78, 49, 98, -125, 104, -98, -36, -122, -48, -22, -26, 12, -85, -64, 52, -118, 104, 35, 18, 10, 85, 74, -53, -104, 63, -49, 80, 47, -82, 82, -76, 23, 23, 67, -23, -66, -96, 16, 40, -104, -70, 49, -36, 42, -128, -58, -3, -25, -73, 18, -9, -92, -12, -19, 22, 34, 103, -76, 52, -90, -73, -108, 84, -76, -91, -70, -120, -84, -109, -92, 11, -99, -116, -94, -25, -63, 15, 80, 69, 60, 39, 59, -118, -93, -75, -47, -29, 23, 21, -111, -123, 50, -120, -76, 100, 111, 96, 25, -74, 6, -113, -114, -33, 40, -84, -109, -74, 84, 124, 58, -103, -55, 76, -12, 107, 123, 39, 49, 85, 29, 51, -119, 37, -10, 10, 28, -118, 55, 11, 27, -95, -50, -127, -74, 17, 108, -22, -94, 119, 43, 37, -126, -31, 86, -66, -55, 116, 6, -19, 120, 118, -22, -109, 93};
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
    msg.setTimeStamp(0.795411342149);
    msg.setSource(6715U);
    msg.setSourceEntity(192U);
    msg.setDestination(10U);
    msg.setDestinationEntity(104U);
    msg.sys_src.assign("ZTLFRGTONICAXOHJBCHBGKVTSITBBJNSLSLPVLRRKJMZPISZPJGNWXHSSCVRVSDDOWERIHCGIFDSGXEDGWHOZGMAMJHEDRFTJEDYZQGIFENMMAXAXRKNUQVAQRPQYVLNIFOZKNTNOUZUVW");
    msg.sys_dst.assign("KLEAGQVRAYMTXGOMSNOLBMSDANZGTOWYHWNCWUOICXNWSCMQCAUUMUZYJXKHILRREELQEBQPXGHTHJARCSSRYWJCWVOKGJXKYMCDMRRZXFMNDOPHVFVJGZZABBZUWPKTNFVPXAPFEXEMKNOJAHGUFBVDSDKHPNKYBLLBZBUNTKCQLQWEXVYDZJBDOYYICESJGXQUDKTBAERUIEFT");
    msg.flags = 125U;
    const char tmp_msg_0[] = {72, -68, 42, -123, -26, 3, -123, -28, 45, 66, 83, 44, 89, -125, 57, -79, -45, 50, 21, -51, 41, -92, 112, -84, 61, 9, 102, -58, 33, -42, 91, -22, -73, 76, 38, 35, -63, 99, 91, -26, -46, -81, 113, -44, -3, -32, 61, -17, -91, -58, -35, -24, -33, 30, 77, 115, -75, -82, -65, -103, 51, 40, 57, 125, 122, 87, 15, -83, 27, 115, 100, -31, 95, 32, -118, -76, 11, -26, -29, 68, 117, -109, 3, -37, 13, 22, -50, -91, 88, -79, -60, 41, -23, -25, 95, -75, 58, 61, -108, -67, -108, 121, 38, -109, 29, 5, 75, 111, 9, 31, 103, 75, 90, -13, -94, 51, -4, -40, 7, -92, 49, 20, 21, -92, -57, -98, -110, -4, -106, -102, 20, 54, 100, -71, -91, -104, 15, -11, 121, 105, -117, -127, 57, 50, 66, 8, -128, -92, -55, -118, 5, -76, -119, -19, -13, -4, 45, -44, -8, -97, -66, -31, -31, -93, 124, -125, -4, -42};
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
    msg.setTimeStamp(0.419970123928);
    msg.setSource(28799U);
    msg.setSourceEntity(47U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(247U);
    msg.sys_src.assign("TGGCXLNLTQWMYZYCNHMLBTFOKOEUYRLMPDJTBZLFHPWQFPWHNGYRWKSBAQO");
    msg.sys_dst.assign("JMXFOSIBQSQFYOHQXYKAZVHFVXBPZARKRLBKLLGEPNRKTHECNUJZDIALZYZNJXIYJDDQITSBWRSBLWGLFGOZWOWYXOCLMRTQRSNDIDVHDFZPRZ");
    msg.flags = 228U;
    const char tmp_msg_0[] = {-53, 8, 18, 12, -73, 52, 101, 99, 117, 111, -86, 103, -62, -37, 103, -59, -109, 31, 51, 121, -1, 110, -126, -103, 2, 79, 82, 45, -114, 47, -74, 49, 6, 9, 6, -27, -57, 118, 5, -115, 53, -33, 34, -50, -24, 16, -91, -37, -80, 30, -75, -126, -104, 118, 40, -102, 66, -96, 53, -101, 72, -82, 82, 119, -73, -88, 105, 118, -98, 61, -41, -16, 31, 51, -114, -52, 75, -100, 65, -1, 56, -62, 48, -56, 49, -87, -103, 24, -118, -90, 120, 87, 27, -22, 19, 55, 39, -83, 62, -68, -88, 43, -96, -89, 89, -12, 29, 24, -28, 47, 54, 111, 55, 109, -96, -7, -97, 23, -101, -45, -17, 105, -12, -96, 69, -3, 121, -62, 115, -70, -33, 120, -56, 126, 76, 56, -81, 78, 91, -50, -58, 6, -22, 4, -63, -46, -114, -22, 47, -99, -20, -75, 88, -16, -67, -50, -44, 101, -59, -111, 78, -49, 68, 117, -16, 78, 106, 53, 107, -44, -128, 12, 71};
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
    msg.setTimeStamp(0.942833507797);
    msg.setSource(42372U);
    msg.setSourceEntity(207U);
    msg.setDestination(21143U);
    msg.setDestinationEntity(250U);
    msg.seq = 35648U;
    msg.value = 224U;
    msg.error.assign("CJJDTHJDPMKVOVUVVBJMRWVCMTKGFQWOWJMAERSSBDCEQJKNNDXCTNOFXWIQKTZYIAQEYBAAFHOZLIBPUAQBAUYVRDMIRCQBFODGIWXQGLNLPGGXPVHR");

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
    msg.setTimeStamp(0.713165121338);
    msg.setSource(44664U);
    msg.setSourceEntity(33U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(39U);
    msg.seq = 816U;
    msg.value = 24U;
    msg.error.assign("LMQSNTEVEUAOZRNG");

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
    msg.setTimeStamp(0.130982285021);
    msg.setSource(10297U);
    msg.setSourceEntity(142U);
    msg.setDestination(16474U);
    msg.setDestinationEntity(202U);
    msg.seq = 52169U;
    msg.value = 75U;
    msg.error.assign("FZGGSKAMUPGZSQDEPPODOKAXUWPWHLOPCRBEHKCYDPEXWJUNMABATMLIUGWUQQZDJFGTLADLJTVCNTWYMZVOSTIKHRHEOXGLBRNUHYPFDQRBLVASAQRTKMRCQRXY");

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
    msg.setTimeStamp(0.708473456533);
    msg.setSource(10183U);
    msg.setSourceEntity(72U);
    msg.setDestination(47752U);
    msg.setDestinationEntity(221U);
    msg.seq = 41743U;
    msg.sys.assign("UYYTZXAGEGJXMBMSRADDSFZWRWMYLNKZDJTSYFOVMETWUDHRHWFDQHGBFZALOKBKVOTULBAYSROBNNZCOQXYISSIXFSDWCZDAUOIAEYJEGKGJCAIBQRUNTYPQDNPWVZJTVSLPQHGTEHPBPJWFVHLCRUWAHIZHURWECNX");
    msg.value = 0.955987013459;

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
    msg.setTimeStamp(0.221768369186);
    msg.setSource(34294U);
    msg.setSourceEntity(91U);
    msg.setDestination(15263U);
    msg.setDestinationEntity(36U);
    msg.seq = 20809U;
    msg.sys.assign("MWEBSNDTNFVPKAUEBWMLKZHSTSINGGWNRQTSJZOFPUKVGVUGPRMOWGXRRUXUTHQMBCKCODJIXSHSPRYWACNBXHIDUZKZCZLTFDMJAGLYILABKOWZLRPELHGURKFXTKBBWCJLVVLAQPZJEEMTCFKASIIJFJGQLFCFDWVRGPEATYOICPRYMDRFEVFXQYIZPSGP");
    msg.value = 0.0126934290814;

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
    msg.setTimeStamp(0.0730953372228);
    msg.setSource(59507U);
    msg.setSourceEntity(132U);
    msg.setDestination(24520U);
    msg.setDestinationEntity(20U);
    msg.seq = 42792U;
    msg.sys.assign("BSKPBCTRIVODBUGZVNRHMWANSIREPGDLVBPDKRQDPEGKHTTUMNJKPOCOSFLGEBWREQMTBIVDWTMCIQRSYZCHNDQBAYIAKISNWSMJFWTJNAJKYYWEMAZAIRLEQCTFAYNGEXUAMOEXAKJLCHUSVFCXONZRFVHXUYYBIIJOLXYXJNMBQZMGDNKZAOTRQYVWPQZJOVUJVTSXHLEHFGUQQGWDYMXOUFDCRHZFKFPPSHZSLW");
    msg.value = 0.963625590298;

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
    msg.setTimeStamp(0.68640671106);
    msg.setSource(64288U);
    msg.setSourceEntity(24U);
    msg.setDestination(56558U);
    msg.setDestinationEntity(249U);
    msg.action = 137U;
    msg.longain = 0.771600774958;
    msg.latgain = 0.736028695119;
    msg.bondthick = 4071749217U;
    msg.leadgain = 0.432279407923;
    msg.deconflgain = 0.479359538412;

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
    msg.setTimeStamp(0.536348400367);
    msg.setSource(27095U);
    msg.setSourceEntity(105U);
    msg.setDestination(15746U);
    msg.setDestinationEntity(60U);
    msg.action = 219U;
    msg.longain = 0.846134215559;
    msg.latgain = 0.986411725079;
    msg.bondthick = 207134073U;
    msg.leadgain = 0.988967495667;
    msg.deconflgain = 0.83739058409;

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
    msg.setTimeStamp(0.929611595448);
    msg.setSource(22806U);
    msg.setSourceEntity(234U);
    msg.setDestination(22115U);
    msg.setDestinationEntity(250U);
    msg.action = 181U;
    msg.longain = 0.39742462614;
    msg.latgain = 0.154473896322;
    msg.bondthick = 3195162321U;
    msg.leadgain = 0.7287872017;
    msg.deconflgain = 0.0196494769496;

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
    msg.setTimeStamp(0.660235677517);
    msg.setSource(8861U);
    msg.setSourceEntity(8U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(167U);
    msg.err_mean = 0.211271972953;
    msg.dist_min_abs = 0.229334675988;
    msg.dist_min_mean = 0.860617512289;

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
    msg.setTimeStamp(0.891621509579);
    msg.setSource(12060U);
    msg.setSourceEntity(100U);
    msg.setDestination(29889U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.473480915955;
    msg.dist_min_abs = 0.184879998894;
    msg.dist_min_mean = 0.400186677236;

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
    msg.setTimeStamp(0.433726605634);
    msg.setSource(26916U);
    msg.setSourceEntity(83U);
    msg.setDestination(8833U);
    msg.setDestinationEntity(24U);
    msg.err_mean = 0.0671504084738;
    msg.dist_min_abs = 0.82424424464;
    msg.dist_min_mean = 0.717545794679;

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
    msg.setTimeStamp(0.46770530472);
    msg.setSource(416U);
    msg.setSourceEntity(182U);
    msg.setDestination(15296U);
    msg.setDestinationEntity(35U);
    msg.action = 235U;
    msg.lon_gain = 0.773890338807;
    msg.lat_gain = 0.19939137602;
    msg.bond_thick = 0.531314382213;
    msg.lead_gain = 0.876041567725;
    msg.deconfl_gain = 0.981658084343;
    msg.accel_switch_gain = 0.703753286571;
    msg.safe_dist = 0.680794546263;
    msg.deconflict_offset = 0.956400665568;
    msg.accel_safe_margin = 0.45029417016;
    msg.accel_lim_x = 0.129363014727;

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
    msg.setTimeStamp(0.606280456225);
    msg.setSource(48247U);
    msg.setSourceEntity(248U);
    msg.setDestination(24439U);
    msg.setDestinationEntity(70U);
    msg.action = 75U;
    msg.lon_gain = 0.130270764967;
    msg.lat_gain = 0.344748371578;
    msg.bond_thick = 0.686231632093;
    msg.lead_gain = 0.738120895159;
    msg.deconfl_gain = 0.784425173841;
    msg.accel_switch_gain = 0.875232204129;
    msg.safe_dist = 0.249180161558;
    msg.deconflict_offset = 0.965081196076;
    msg.accel_safe_margin = 0.224855086496;
    msg.accel_lim_x = 0.678345834517;

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
    msg.setTimeStamp(0.844502426622);
    msg.setSource(10983U);
    msg.setSourceEntity(33U);
    msg.setDestination(42232U);
    msg.setDestinationEntity(148U);
    msg.action = 180U;
    msg.lon_gain = 0.572272726518;
    msg.lat_gain = 0.00185506398743;
    msg.bond_thick = 0.888687394063;
    msg.lead_gain = 0.184891056416;
    msg.deconfl_gain = 0.354124705614;
    msg.accel_switch_gain = 0.76216771585;
    msg.safe_dist = 0.618288577372;
    msg.deconflict_offset = 0.64026385533;
    msg.accel_safe_margin = 0.665497399031;
    msg.accel_lim_x = 0.195618582084;

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
    msg.setTimeStamp(0.518233022979);
    msg.setSource(457U);
    msg.setSourceEntity(27U);
    msg.setDestination(7368U);
    msg.setDestinationEntity(56U);
    msg.type = 31U;
    msg.op = 128U;
    msg.err_mean = 0.55377820301;
    msg.dist_min_abs = 0.0392510604583;
    msg.dist_min_mean = 0.0233089137945;
    msg.roll_rate_mean = 0.271222889757;
    msg.time = 0.817740738015;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 116U;
    tmp_msg_0.lon_gain = 0.843240837078;
    tmp_msg_0.lat_gain = 0.301360797295;
    tmp_msg_0.bond_thick = 0.351359537487;
    tmp_msg_0.lead_gain = 0.396359302742;
    tmp_msg_0.deconfl_gain = 0.187008488534;
    tmp_msg_0.accel_switch_gain = 0.329075150488;
    tmp_msg_0.safe_dist = 0.39803575735;
    tmp_msg_0.deconflict_offset = 0.259317266458;
    tmp_msg_0.accel_safe_margin = 0.691031875575;
    tmp_msg_0.accel_lim_x = 0.883745050323;
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
    msg.setTimeStamp(0.527954733984);
    msg.setSource(21061U);
    msg.setSourceEntity(205U);
    msg.setDestination(5428U);
    msg.setDestinationEntity(239U);
    msg.type = 17U;
    msg.op = 90U;
    msg.err_mean = 0.571790899942;
    msg.dist_min_abs = 0.00125818595488;
    msg.dist_min_mean = 0.418914760384;
    msg.roll_rate_mean = 0.548605508509;
    msg.time = 0.453160510224;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 48U;
    tmp_msg_0.lon_gain = 0.932001011211;
    tmp_msg_0.lat_gain = 0.609994934266;
    tmp_msg_0.bond_thick = 0.836936309195;
    tmp_msg_0.lead_gain = 0.756091081181;
    tmp_msg_0.deconfl_gain = 0.092689622743;
    tmp_msg_0.accel_switch_gain = 0.287203679027;
    tmp_msg_0.safe_dist = 0.86742982807;
    tmp_msg_0.deconflict_offset = 0.0601847258391;
    tmp_msg_0.accel_safe_margin = 0.0272850288897;
    tmp_msg_0.accel_lim_x = 0.960484753189;
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
    msg.setTimeStamp(0.705084318146);
    msg.setSource(44746U);
    msg.setSourceEntity(120U);
    msg.setDestination(49206U);
    msg.setDestinationEntity(190U);
    msg.type = 38U;
    msg.op = 51U;
    msg.err_mean = 0.299843165286;
    msg.dist_min_abs = 0.509100717077;
    msg.dist_min_mean = 0.346817642931;
    msg.roll_rate_mean = 0.228242859714;
    msg.time = 0.40065640543;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 71U;
    tmp_msg_0.lon_gain = 0.954835104219;
    tmp_msg_0.lat_gain = 0.978174402831;
    tmp_msg_0.bond_thick = 0.329544631764;
    tmp_msg_0.lead_gain = 0.372305940245;
    tmp_msg_0.deconfl_gain = 0.23463253261;
    tmp_msg_0.accel_switch_gain = 0.861145096731;
    tmp_msg_0.safe_dist = 0.84558890726;
    tmp_msg_0.deconflict_offset = 0.116404478059;
    tmp_msg_0.accel_safe_margin = 0.587272816951;
    tmp_msg_0.accel_lim_x = 0.756296674478;
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
    msg.setTimeStamp(0.762258040857);
    msg.setSource(33769U);
    msg.setSourceEntity(242U);
    msg.setDestination(33965U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.929166555104;
    msg.lon = 0.868899732308;
    msg.eta = 3895288567U;
    msg.duration = 35254U;

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
    msg.setTimeStamp(0.79577596704);
    msg.setSource(31888U);
    msg.setSourceEntity(135U);
    msg.setDestination(1380U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.921899658074;
    msg.lon = 0.391063453526;
    msg.eta = 1599353503U;
    msg.duration = 59925U;

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
    msg.setTimeStamp(0.867477580526);
    msg.setSource(50807U);
    msg.setSourceEntity(236U);
    msg.setDestination(50816U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.0251136523624;
    msg.lon = 0.315851381242;
    msg.eta = 3245343550U;
    msg.duration = 62561U;

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
    msg.setTimeStamp(0.850344406275);
    msg.setSource(37601U);
    msg.setSourceEntity(182U);
    msg.setDestination(65113U);
    msg.setDestinationEntity(198U);
    msg.plan_id = 26879U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.763490519695;
    tmp_msg_0.lon = 0.555707215431;
    tmp_msg_0.eta = 3564613561U;
    tmp_msg_0.duration = 41404U;
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
    msg.setTimeStamp(0.285638338065);
    msg.setSource(51092U);
    msg.setSourceEntity(225U);
    msg.setDestination(33449U);
    msg.setDestinationEntity(30U);
    msg.plan_id = 23093U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.334696960392;
    tmp_msg_0.lon = 0.915608617493;
    tmp_msg_0.eta = 2417966697U;
    tmp_msg_0.duration = 17980U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.130303013301);
    msg.setSource(22072U);
    msg.setSourceEntity(83U);
    msg.setDestination(52909U);
    msg.setDestinationEntity(99U);
    msg.plan_id = 63537U;

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
    msg.setTimeStamp(0.274223949762);
    msg.setSource(57301U);
    msg.setSourceEntity(0U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(67U);
    msg.type = 124U;
    msg.command = 200U;
    msg.settings.assign("VCLCDUMKYNJBZQADXGWORTUFNCFZOFJQKRDYZSGCY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42025U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.967784085603;
    tmp_tmp_msg_0_0.lon = 0.886398028461;
    tmp_tmp_msg_0_0.eta = 3566760499U;
    tmp_tmp_msg_0_0.duration = 56799U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GMWRMAQRXCSHSNBYXGBYHPVOJTIXYHVGDJTRIPHHAKJXEKJWWKERQJTFKBDDPKRGAQMURVVXVPATZUOFWOEYBCIALWTQPHONSFBYZLKOVZLYYIMMCTHAPZCLFXEJALCUQHJCROCGBZHDSPHXFWZUUNGTTQFVKBARDMGSENGBMMNSXZDJBWWOGDKELSN");

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
    msg.setTimeStamp(0.830599127372);
    msg.setSource(51315U);
    msg.setSourceEntity(42U);
    msg.setDestination(30784U);
    msg.setDestinationEntity(234U);
    msg.type = 181U;
    msg.command = 246U;
    msg.settings.assign("XKVOIUAJHSNKHTXNMYVCSBGKBDQERIFWYEECXSRMUGSNYAPULFFLJSGNOAILFOKVZUWEEHSQHDVAHKDX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64883U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.316244847977;
    tmp_tmp_msg_0_0.lon = 0.577010141938;
    tmp_tmp_msg_0_0.eta = 1202982091U;
    tmp_tmp_msg_0_0.duration = 56401U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UBXAOYAKRSJLPQGQSYHTADDQNTFGQUAJSITSIDBENJPGPDSJGZWM");

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
    msg.setTimeStamp(0.300931104651);
    msg.setSource(13344U);
    msg.setSourceEntity(38U);
    msg.setDestination(44476U);
    msg.setDestinationEntity(196U);
    msg.type = 142U;
    msg.command = 240U;
    msg.settings.assign("RVCRWLPDDMTIRSNMYOOPLMCXLLGUDBAAFCOZFQPNJMYDOKFDVVXZUKAEKXVQNUYMBRJGNUQYXELFTZIGHIZGWKRGXWAQICJAHSSNGOIJYRSYKBIUTDQQXCGJCIILZJLTWWIEAUZKCOZEWTGRVNUKQEXLNBIKNRTUZCRYDCDONQWMKTBSFOJSSFYJYVVOBHGDPJTAAXESAF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41962U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.818368467794;
    tmp_tmp_msg_0_0.lon = 0.817862500546;
    tmp_tmp_msg_0_0.eta = 509025709U;
    tmp_tmp_msg_0_0.duration = 30153U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VIIWKOONUAXUWPWNGKODRRZXIMXPZREBBIHRCDCPZKYTMNPQVRBTDHJ");

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
    msg.setTimeStamp(0.847286657712);
    msg.setSource(24243U);
    msg.setSourceEntity(250U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(210U);
    msg.state = 84U;
    msg.plan_id = 9101U;
    msg.wpt_id = 80U;
    msg.settings_chk = 65051U;

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
    msg.setTimeStamp(0.628389095168);
    msg.setSource(34847U);
    msg.setSourceEntity(176U);
    msg.setDestination(51603U);
    msg.setDestinationEntity(11U);
    msg.state = 194U;
    msg.plan_id = 26100U;
    msg.wpt_id = 11U;
    msg.settings_chk = 49531U;

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
    msg.setTimeStamp(0.624646952242);
    msg.setSource(25570U);
    msg.setSourceEntity(89U);
    msg.setDestination(30865U);
    msg.setDestinationEntity(222U);
    msg.state = 111U;
    msg.plan_id = 52721U;
    msg.wpt_id = 101U;
    msg.settings_chk = 62925U;

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
    msg.setTimeStamp(0.931576974027);
    msg.setSource(28885U);
    msg.setSourceEntity(162U);
    msg.setDestination(7440U);
    msg.setDestinationEntity(104U);
    msg.uid = 162U;
    msg.frag_number = 45U;
    msg.num_frags = 76U;
    const char tmp_msg_0[] = {18, -78, -78, -69, -26, -45, -5, -51, 54, -2, 124, 81, 17, 52, 0, 17, -102, -122, -29, 33, -96, 12, 23, 2, 70, 68, 96, -41, -106, 84, -91, -60, -23, -118, 59, 98, 114, -9, 105, 76, -75, 29, -109, 14, -55};
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
    msg.setTimeStamp(0.166789646906);
    msg.setSource(33578U);
    msg.setSourceEntity(160U);
    msg.setDestination(38668U);
    msg.setDestinationEntity(11U);
    msg.uid = 71U;
    msg.frag_number = 69U;
    msg.num_frags = 132U;
    const char tmp_msg_0[] = {92, 44, -97, 24, -35, 70, -110, -41, 100, 99, -120, 29, 126, 11, 99, 28, -96, 65, -84, 120, -76, 124, -28, 96, 110, 32, 21, 73, -67, 78, -74, 66, -59, 28, -34, 64, -120, -78, -89, -104, -103, 4, -57, 8, 36, -6, 5, -31, 82, 16, -4, -12, -13, -109, 27, -55, -85, 0, 119, 53, 91, -13, 80, 47, 122, 110, -62, 65, 64, 120, 82, 71, -19, -109, -54, 95, 100, 23, 61, -79, 24, 97, -17, 9, 4, -43, -8, 61, 16, 33, -80, 15, -63, 74, 117, 102, 50, 14, 15, -72, 70, -45, 33, 58, -95, 14, -43, 75, -7, 61, 118, 71, 90, 107, -95, 74, -8, -2, -22, 50, -45, 87, 118, 32, 91, -23, -91, 119, -70, 112, 15, 91, 16, -33, -58, -79, -5, 87, -101, -123, 50, -106, -20, -81, -69, -36, 76, 11, 72, 7, -117, 114, 49, -111, -25, -93, -6, 74, -123, -81, 88, -76, 99, 122, -61, 62, 42, -112, -84, 55, -13, 7, 62, -22, 93, 99, 64, -94, -69, 123, 40, -49, 67, 14, 115, 81, 109, -7, -36, -50, 23, 98, 17, 56, -68, -113, -32, 84, -99, 81, 47, -94, 33, 82, -77, 1, -23, -50, -87, 65, 50, -88, -93, -100, -79, 126, 9};
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
    msg.setTimeStamp(0.623901699047);
    msg.setSource(38820U);
    msg.setSourceEntity(249U);
    msg.setDestination(54903U);
    msg.setDestinationEntity(8U);
    msg.uid = 245U;
    msg.frag_number = 181U;
    msg.num_frags = 115U;
    const char tmp_msg_0[] = {68, 120, 31, -85, 94, 87, -17, 43, 98, -22, -39, -17, 84, -108, 39, 114, 86, -108, 107, -45, 75, 1, -23, 16, 122, -68, 44, 86, 42, -3, -79, -61, 4, 50, -2, 111, 122, -38, 54, 17, -14, -111, -2, 52, 38, -92, -118, -83, -77, 100, -7, 20, 81, -48, -107, 69, -19, 22, -72, 103, 26, 107, 29, 68, -39, 68, 120, 67, 41, -68, -106, 90, -1, 37, -106, 50, 66, -99, 96, 28, -74, 74, -29, -57, -37, 93, 122, 99, 4, -80, 8, 17, -124, 119, 37, 44, 18, -59, -79, 59, 72, -56, -81, 85, -2, 111, 68, -20, 24, 76, -24, 110, 47, 16, -99, 16, -82, 95, 6, -128, 17, -124, 118, 123, 6, -19, -102, 123, -75, 27, -22, 13, 34, -23, 53, -34, 4, 119, -82, -76, 117, 79, -72, -120, -128, 52, 92, 75, 102, 27, -25, 94, 35, -118, 0, 120, 105, -27, -120, 63, -24, -54, 120, -15, -72, 77, 4, 57, 84, -47, -17, 68, -108, 103, -7, -46, -13, 67, -58, 84, 50, 31, -74, 85, 14, 8, -62, 126, 92, -93, 68, -44, 30, -76, 108, -67, 88, -98, -113, 76};
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
    msg.setTimeStamp(0.419550743566);
    msg.setSource(56586U);
    msg.setSourceEntity(142U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(181U);
    msg.content_type.assign("ZAZDIFXBMYAUOXJPOEQHJHVFRCMGEKIEQULOSSKWDNFDSXRNPUWPQIWVUUYKYLYSKDMYKLSHNDBTUZEYWMDXRGBWYVMWSSEFTHLANASBDPAWBGEKOHLLZJXVBPLITCHBRIWZZAQFCUPORRVDOKLMTKDTJUQNIMXXSCGTSCBRKVPHNDITZAVGHIMEWNQEZHWEGCBZOPQTMNBQXFRJLFOFOZNRICCGVJGAPCQEIAUXTRFLVQGJFM");
    const char tmp_msg_0[] = {-18, 79, 105, -103, 113, -99, -79, -70, 51, -101, 28, -31, 60, -18, 48, 22, 102, 77, 121, -11, 30, 56, -65, -106, 54, -20, -128, -14, -2, 74, -22, -58, -79, 50, 3, 0, 97, -82, -112, 98, 91, -79, 47, 2, 42, -30, -54, 37, -25, -79, 70, 94, 31, -101, -94, 13, -113, -34, -97, -28, -95, 8, -16, 93, -105, -57, 115, 118, 83, 26, 12, 109, -54, -81, 43, -4, 27, 59, -104, -4, 13, 104, -96, 96, -21, -30, -90, 79, -128, 43, -90, 85, -113, 62};
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
    msg.setTimeStamp(0.533233054313);
    msg.setSource(25998U);
    msg.setSourceEntity(33U);
    msg.setDestination(34935U);
    msg.setDestinationEntity(181U);
    msg.content_type.assign("ZMCQOVXMDFCHTEHCUXAZKOMLSYIUVINOYGCEGVZKMSJQYVBRRXBTTTGDKJVXUGCNRNLHPTNBEZLVUQDSZQWXZKCJDYFARVYNBJYFJLNEEWFFPHXVUXMISPALEPDFKGDEUAMPMKQXODOEVIOSWDAJ");
    const char tmp_msg_0[] = {-73, -94, 86, -103, 73, 120, -78, -67, -50, -41, 111, -73, -52, 41, 83, -114, 66, -41, 45, -97, -49, -92, -33, 43, -47, 56, 16, 66, 113, -108, 4, -86, 107, 4, -111, 2, -31, 57, -111, -30, 125, -105, 118, 81, -57, 77, -117, 44, 50, 97, -67, 31, 78, -79, 101, -89, -93, 7, 120, -52, -59, 115, 83, 40, 86, -34, 45, -58, 124, 60, -103, -108, -105, 120, -68, -63, -92, -120, -6, -12, -99, -49, 48, 83, -44, 98, 49, 20, -71, 118, -75, -71, -13, 86, 58, -50, -23, 103, 58, -42, 110, -80, 25, 16, -93, -59, -50, -77, 80, 10, -117, 90, 54, 85, 12, -91, 6, -108, 38, 20, 23, 39, 38, 27, -75, -44, -1, -63, -91, 70, -45, 51, 95, -22, -18, 126, 42, -18, -84, -39, 35, -49, -63, -68, -85, -65, 83, -116, 51, -19, 79, -20, -6, -72, 74, -65, -39, -62, 77, 46, 76, 90, -127, -52, -53, -100, 103, -62, -41, 94, -92, -79, -4, 40, -39, -76, -90, 93, 102, 38, -91, -84, 18, 22, -23, -110, 16, -115, 67, 67, -58, 20, 6, -81, 82, -113, -20, 5, -97, -1, 59, -5, 91, -74};
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
    msg.setTimeStamp(0.853649967667);
    msg.setSource(36516U);
    msg.setSourceEntity(81U);
    msg.setDestination(57182U);
    msg.setDestinationEntity(89U);
    msg.content_type.assign("FYUXCRKNRJOSUZXLSYFRHVXYMTGKVPSQYLWCHMIJNZMAPTCRIWIYHGHILWIFVAVFXTALAXQAHGTXHJVJQYBANDENSYKDFQZMSPLSCDUMZHZTTPXARWENDVDVQWQTPYVCFFRWNBEOCOFHLCRLKBIAYMKRZSEOWKPFHRLBTKTGJUXBBDWOJEZDEZDEMMEJALSHYQQPCZICXSGJUTGBOOSLCZWVBDQOBDGUVQXWEIUAPNKBIUUGNI");
    const char tmp_msg_0[] = {-70, -119, -44, 34, 27, -30, -12, 57, -42, -26, 97, 44, -66, -31, -112, -43, -111, 92, 17, 120, -24, 87, 17, 39, -20, 69, -25, -16, 4, -19, -105, -58, 5, 30, -2, -79, 1, -121, -29, 72, 113, 108, 32, -4, 36, -75, -74, 19, 48, 45, 117, -37, 12, 116, -17, 42, 108, 15, 57, 58, -43, -90, -52, -47, -54, 1, -12, 118, -92, -72, -48, 16, 63, -23, -79, -101, 105};
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
    msg.setTimeStamp(0.569346105652);
    msg.setSource(7664U);
    msg.setSourceEntity(140U);
    msg.setDestination(41153U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.385065332035);
    msg.setSource(38352U);
    msg.setSourceEntity(148U);
    msg.setDestination(61416U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.503208606195);
    msg.setSource(16174U);
    msg.setSourceEntity(204U);
    msg.setDestination(64713U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.34728968239);
    msg.setSource(5692U);
    msg.setSourceEntity(215U);
    msg.setDestination(20012U);
    msg.setDestinationEntity(93U);
    msg.target = 45648U;
    msg.bearing = 0.0907468071016;
    msg.elevation = 0.273904474224;

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
    msg.setTimeStamp(0.792077019092);
    msg.setSource(65001U);
    msg.setSourceEntity(188U);
    msg.setDestination(31084U);
    msg.setDestinationEntity(3U);
    msg.target = 29645U;
    msg.bearing = 0.219972726731;
    msg.elevation = 0.648296126264;

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
    msg.setTimeStamp(0.504154915591);
    msg.setSource(19431U);
    msg.setSourceEntity(87U);
    msg.setDestination(20477U);
    msg.setDestinationEntity(198U);
    msg.target = 36453U;
    msg.bearing = 0.140424753669;
    msg.elevation = 0.386244149813;

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
    msg.setTimeStamp(0.857693129141);
    msg.setSource(4115U);
    msg.setSourceEntity(139U);
    msg.setDestination(29035U);
    msg.setDestinationEntity(94U);
    msg.target = 22544U;
    msg.x = 0.780373833265;
    msg.y = 0.119469689972;
    msg.z = 0.286804657286;

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
    msg.setTimeStamp(0.86075013194);
    msg.setSource(58512U);
    msg.setSourceEntity(47U);
    msg.setDestination(29936U);
    msg.setDestinationEntity(20U);
    msg.target = 12354U;
    msg.x = 0.571658374212;
    msg.y = 0.103710406904;
    msg.z = 0.067322105446;

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
    msg.setTimeStamp(0.0216350777491);
    msg.setSource(63570U);
    msg.setSourceEntity(205U);
    msg.setDestination(20729U);
    msg.setDestinationEntity(122U);
    msg.target = 40144U;
    msg.x = 0.090984176945;
    msg.y = 0.406917810817;
    msg.z = 0.866852321159;

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
    msg.setTimeStamp(0.757919576599);
    msg.setSource(11755U);
    msg.setSourceEntity(252U);
    msg.setDestination(48439U);
    msg.setDestinationEntity(146U);
    msg.target = 16272U;
    msg.lat = 0.209282707642;
    msg.lon = 0.400476155351;
    msg.z_units = 37U;
    msg.z = 0.313134778317;

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
    msg.setTimeStamp(0.887060288955);
    msg.setSource(9687U);
    msg.setSourceEntity(124U);
    msg.setDestination(58040U);
    msg.setDestinationEntity(17U);
    msg.target = 55543U;
    msg.lat = 0.485648770401;
    msg.lon = 0.873957044348;
    msg.z_units = 213U;
    msg.z = 0.910463988354;

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
    msg.setTimeStamp(0.767228959987);
    msg.setSource(46054U);
    msg.setSourceEntity(78U);
    msg.setDestination(25679U);
    msg.setDestinationEntity(137U);
    msg.target = 41439U;
    msg.lat = 0.832981953031;
    msg.lon = 0.676886949058;
    msg.z_units = 75U;
    msg.z = 0.707141304516;

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
    msg.setTimeStamp(0.373428187173);
    msg.setSource(34124U);
    msg.setSourceEntity(230U);
    msg.setDestination(25374U);
    msg.setDestinationEntity(60U);
    msg.locale.assign("SAYEIHAMRZSXLCIUGZALIMZVRQEAXBAORGADBPKWPGXDERHJPVUGTYWVFAJTRXVHBFNSSJMQEANINZQCZXRDOOEDDKPQUHOOIOWAUYZHRNYRNOJLMBWYEH");
    const char tmp_msg_0[] = {-20, 83, 89, -81, 17, -78, -60, -75, 99, -83, 7, -60, -52, 14, -69, 1, -67, 66, -22, 53, 47, -46, -128, -37, 120, -101, 27, 59, 115, 9, 86, 63, -25, -69, -58, 23, -64, -20, 56, -19, -120, 123, 14, -1, 90, 64, -122, 103, 20, 34, -18, 107, -107, 9, 72, -4, 32, -33, -127, -5, -13, 2, 10, -58, -113, 115, -105, -103, 60, 21, 18, 6, -31, -51, -119, 80, -112, -61, 100, 62, -64, 82, 44, 87, -127, -36, -41, -19, 7, 0, -41, 28, -104, -51, -43, -42, 10, -104, 124, 33, 126, 78, -51, 99, 6, 4, -1, 60, -9, 36, -65, -120, -92, 111, 65, 101, 115, -112, -80, -61, 83, 121, 72, -78, -115, -2, -40, -56, 53, 124, 23, 80, -32, 47, 3, -87, -7, 31, -75, 125, 69, -92, -70, 88, -120, -50, -128, 82, 118, -14, 70, 18, -7, -100, -3, -120, 124, -81, 106, 5, 67, 59, 30, -10, 28, -88, -34, -112, -67, 80, -86, 65, -5, 31, -128, -103, -117, -9, 112, 75, 44, -99, 100, -33, 4, -94, 85, -18, 85, -64, -94, 99, -34, 72, -74, 80, 12, -85, -95, 107, 10, 41, -87, -99, -46, -96, -35, 102, 92, 76, -70, -19, -98, -89, -5, -110, 112, -92, -54, -56, 99, -63, 86};
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
    msg.setTimeStamp(0.0539189728566);
    msg.setSource(447U);
    msg.setSourceEntity(213U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(30U);
    msg.locale.assign("WEBNUPEQSJXZJUAMVZOMEQBPJKBNWZODNTGGXZOTTQNDWLOEKXZYUEULYVOHYNJLCRIROYI");
    const char tmp_msg_0[] = {-107, -20, -44, 6, 112, -42, 82, 125, 90, -43, -87, 37, 42, -82, 115, 116, -2, -15, 110, -75, -17, 76, 110, -17, 77, 26, 69, 82, -52, 27, -56, -103, -73, -92, 48, -78, -62, 53, -120, 42, 77, -117, 10, 29, 29, -68, 24, -67, -69, -33, -37, 81, 56, 34, -71, -72, -46, -71, 110, -63, 21, 28, 109, -116, 87, -113, -89, -47, 83, 125, 125, -74, -45, -100, -115, -125, -7, 110, -73, 87, 122, 29, 110, 10, -22, 42, 43, 30, -2, 62, 8, -51, 112, -77, -16, -1, -11, 34, 31, -64, 65, 101, 55, -37, 36, -96, -91, 99, -109, -26, 55, -105, 115, 38, -1, -116, 55, -21, -95, -5, 102, 124, 32, 70, 101, 75, 63, 112, -41, 8, -22, -52, 94, 75, 6, 17, -48, 106, -112, 17, 73, -88, 56, 49, 20, -75, -38, -47, -22, 86, -47, 50, -31, -21, 89, 122, 24, -11, 31, 12, -3, 41, 69, -96, 86, -74, 43, -93, -48, 39, 104, 42, 86, 85, 58, 56, -42, 68, -55, 70, -80, 104, 72, 47, -71, 58, -94, -16, -107, -106, 47, 67, 91, -13, -111, 50, 113, -8, 26};
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
    msg.setTimeStamp(0.88556522943);
    msg.setSource(53875U);
    msg.setSourceEntity(232U);
    msg.setDestination(27227U);
    msg.setDestinationEntity(8U);
    msg.locale.assign("TNTDLKOGNBTKXEZHVAPLHYXAPAIEASNHMBRFGWYIUMCJMLYDYPZPKFUGIJMFT");
    const char tmp_msg_0[] = {79, -84, -86, -8, -68, 40, -114, -59, 123, -120, 81, -13, -66, 96, 110, -118, 123, -99, -52, -25, -57, -120, 42, -65, 53, 62, 61, 106, -24, -88, -126, -83, -10, -115, -81, 48, 68, 18, -34, 42, -99, -88, 120, -112, 32, -3, 22, 23, -73, -17, -124, 33, 46, 110, 108, -80, -125, -100, -81, -83, 115, 87, -125, -61, 126, 1, 13, 61, -3, 3, 12, 42, -53, 50, -88, 26, 107, 30, -57, 54, 7, 93, -2, 90, 82, -40, -104, -59, -65, 113, 27, -34, -38, -30, 92, -21, -21, -10, -40, -6, -122, 93, 5, 114, -64, 51, 96, 124, 72, -94, 35, -64, -37, -104, 120, 98, -89, -115, 86, 117, 108, -126, -39, 10, 24, 64, -4, -6, -40, 26, 62, -57, 116, 0, 123, 9, 33, 2, -18, 56, -76, -57, 55, 25, -111, 81, -27, -85, 28, 24, 102, -121, 120, 26, 108};
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
    msg.setTimeStamp(0.133509095481);
    msg.setSource(8441U);
    msg.setSourceEntity(80U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.0582007281933);
    msg.setSource(37583U);
    msg.setSourceEntity(122U);
    msg.setDestination(61180U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.655808275863);
    msg.setSource(47645U);
    msg.setSourceEntity(228U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.318691042636);
    msg.setSource(7452U);
    msg.setSourceEntity(38U);
    msg.setDestination(382U);
    msg.setDestinationEntity(34U);
    msg.camid = 9U;
    msg.x = 14800U;
    msg.y = 37247U;

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
    msg.setTimeStamp(0.627610672282);
    msg.setSource(16930U);
    msg.setSourceEntity(10U);
    msg.setDestination(28037U);
    msg.setDestinationEntity(64U);
    msg.camid = 45U;
    msg.x = 7691U;
    msg.y = 32876U;

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
    msg.setTimeStamp(0.553328570595);
    msg.setSource(41911U);
    msg.setSourceEntity(35U);
    msg.setDestination(12010U);
    msg.setDestinationEntity(75U);
    msg.camid = 128U;
    msg.x = 31768U;
    msg.y = 23066U;

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
    msg.setTimeStamp(0.859211768567);
    msg.setSource(50641U);
    msg.setSourceEntity(163U);
    msg.setDestination(23076U);
    msg.setDestinationEntity(76U);
    msg.camid = 60U;
    msg.x = 7398U;
    msg.y = 41911U;

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
    msg.setTimeStamp(0.368248931711);
    msg.setSource(50197U);
    msg.setSourceEntity(154U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(121U);
    msg.camid = 47U;
    msg.x = 64226U;
    msg.y = 61714U;

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
    msg.setTimeStamp(0.391960562081);
    msg.setSource(32991U);
    msg.setSourceEntity(220U);
    msg.setDestination(33421U);
    msg.setDestinationEntity(73U);
    msg.camid = 186U;
    msg.x = 36166U;
    msg.y = 44362U;

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
    msg.setTimeStamp(0.644688749063);
    msg.setSource(37280U);
    msg.setSourceEntity(188U);
    msg.setDestination(47261U);
    msg.setDestinationEntity(237U);
    msg.tracking = 203U;
    msg.lat = 0.417453272864;
    msg.lon = 0.249393073694;
    msg.x = 0.597573324527;
    msg.y = 0.410452297615;
    msg.z = 0.470009132021;

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
    msg.setTimeStamp(0.915403376101);
    msg.setSource(14816U);
    msg.setSourceEntity(26U);
    msg.setDestination(44206U);
    msg.setDestinationEntity(116U);
    msg.tracking = 39U;
    msg.lat = 0.916111891315;
    msg.lon = 0.530238273221;
    msg.x = 0.439348757256;
    msg.y = 0.0221326670997;
    msg.z = 0.498852131236;

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
    msg.setTimeStamp(0.294471520917);
    msg.setSource(44842U);
    msg.setSourceEntity(141U);
    msg.setDestination(64857U);
    msg.setDestinationEntity(17U);
    msg.tracking = 237U;
    msg.lat = 0.944108256104;
    msg.lon = 0.655502564929;
    msg.x = 0.26759876719;
    msg.y = 0.202658984284;
    msg.z = 0.327344385773;

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
    msg.setTimeStamp(0.968260974068);
    msg.setSource(64873U);
    msg.setSourceEntity(125U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(237U);
    msg.target.assign("GRELRXOQUXFENANZRAQCNSXXKWCHBWPQDMJVJEMVHGQDCSKYLTX");
    msg.lbearing = 0.699285093241;
    msg.lelevation = 0.0464964645693;
    msg.bearing = 0.803915971882;
    msg.elevation = 0.940366331885;
    msg.phi = 0.657825995017;
    msg.theta = 0.0686133550127;
    msg.psi = 0.868697804374;
    msg.accuracy = 0.903879519453;

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
    msg.setTimeStamp(0.820105129239);
    msg.setSource(39112U);
    msg.setSourceEntity(61U);
    msg.setDestination(20427U);
    msg.setDestinationEntity(9U);
    msg.target.assign("URTSENHMGZHUFYQCRKTBYAPNSIAWDBKESRAGCOPOVYCBUSMLQNCZRODTLJGQSPWWUDCXFGFZZWFQILIFLPJUAEODFJO");
    msg.lbearing = 0.967017145766;
    msg.lelevation = 0.592494160414;
    msg.bearing = 0.6733796901;
    msg.elevation = 0.598176170666;
    msg.phi = 0.732688400636;
    msg.theta = 0.870022320609;
    msg.psi = 0.664939986028;
    msg.accuracy = 0.644128113251;

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
    msg.setTimeStamp(0.416370614188);
    msg.setSource(10425U);
    msg.setSourceEntity(50U);
    msg.setDestination(14433U);
    msg.setDestinationEntity(211U);
    msg.target.assign("LRVGKTLIPSMRJNYXKPRGZGNCDDHYFUHQRWWRV");
    msg.lbearing = 0.30919039221;
    msg.lelevation = 0.40417435543;
    msg.bearing = 0.948618107924;
    msg.elevation = 0.746615187257;
    msg.phi = 0.189185862045;
    msg.theta = 0.174309503373;
    msg.psi = 0.341521166783;
    msg.accuracy = 0.346122530428;

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
    msg.setTimeStamp(0.649372360126);
    msg.setSource(15645U);
    msg.setSourceEntity(122U);
    msg.setDestination(18795U);
    msg.setDestinationEntity(172U);
    msg.target.assign("OJPZIUABDTTJPKVTWSPRKMMSPJ");
    msg.x = 0.133591111266;
    msg.y = 0.0986283005524;
    msg.z = 0.374626816437;
    msg.n = 0.639563900649;
    msg.e = 0.541669777897;
    msg.d = 0.488175010522;
    msg.phi = 0.174764536701;
    msg.theta = 0.525739082253;
    msg.psi = 0.8173073488;
    msg.accuracy = 0.809359796341;

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
    msg.setTimeStamp(0.312064482403);
    msg.setSource(19317U);
    msg.setSourceEntity(167U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(114U);
    msg.target.assign("NKCGODGUOSYIHXYBQAVLTBOZHOWLWXRUOPVQICOFVQLIUBTSAQWVRZNRXHOPVMCILLVKDZHGTLDPBXUUGBVGNSSAADAXPTUZEJEDWYMJOHEDKUDU");
    msg.x = 0.839926802273;
    msg.y = 0.822990288847;
    msg.z = 0.212290496867;
    msg.n = 0.64050826648;
    msg.e = 0.735372990959;
    msg.d = 0.74540993189;
    msg.phi = 0.758800893271;
    msg.theta = 0.816351182767;
    msg.psi = 0.341383799558;
    msg.accuracy = 0.428219076646;

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
    msg.setTimeStamp(0.929149057987);
    msg.setSource(50327U);
    msg.setSourceEntity(137U);
    msg.setDestination(34814U);
    msg.setDestinationEntity(4U);
    msg.target.assign("HOHKFYCKDRTIUPHAKRPSELMIMLGUCTODMIVRLOKKMQWJVLLFETPEVANHWDFYLHFZECIBFNZHWDPGASBFBPUHNRCILTBZXXHYXLIZWDJURFVMEUASCYSYAOSMTXNAOWDGJESYUNBZCQGVAVEIQYMINESXQRGCSJJFQTWPBKRZAGCJMGFQKRXKQZQLBXEUXEXNURVPPZPDGAWPYNKNJAOSOCFI");
    msg.x = 0.897309869474;
    msg.y = 0.868930311598;
    msg.z = 0.897566382492;
    msg.n = 0.194002211301;
    msg.e = 0.24231548717;
    msg.d = 0.990465882445;
    msg.phi = 0.836620198982;
    msg.theta = 0.134520227047;
    msg.psi = 0.865137156303;
    msg.accuracy = 0.370699445234;

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
    msg.setTimeStamp(0.992432299017);
    msg.setSource(60122U);
    msg.setSourceEntity(39U);
    msg.setDestination(19707U);
    msg.setDestinationEntity(12U);
    msg.target.assign("HYCJRCYNNJSEYTZBHQYLTMMPMFQBWXVUXYHTQYEWXGYCVNBFWGERJLKDFGWOKIZEDKVPPVOSQKJSXCCLDOLMISVFOPLUNKCOZZLSNBTUWAIMAJRXXTVEXJGFMYRXS");
    msg.lat = 0.986210368751;
    msg.lon = 0.220469981901;
    msg.z_units = 3U;
    msg.z = 0.044197646933;
    msg.accuracy = 0.228221283216;

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
    msg.setTimeStamp(0.983571408179);
    msg.setSource(31044U);
    msg.setSourceEntity(175U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(120U);
    msg.target.assign("YNAQLAOGGTZTCFVVIUYJJEWJAZSHDTQGIALPCOSKOTUKOHUQOEBJAWDTGRZPVVYSKKBWQWKUDGCFYPRFCXGRHMCFZULNTGSXCJIDSXVNHFESTPZLIMRPTACMDFBBFJAOEPIJLHCHBFWXOKUZIHZEDEEVNVKXLFYNONPXZRMQDDPQWIPEESHTLXRKHRCDFYXNVYOXSIUENMQMLILMTJVRNGQYRZURIQJQK");
    msg.lat = 0.80080859533;
    msg.lon = 0.873425974216;
    msg.z_units = 167U;
    msg.z = 0.0385557450627;
    msg.accuracy = 0.852059710479;

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
    msg.setTimeStamp(0.900778577492);
    msg.setSource(20875U);
    msg.setSourceEntity(146U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(219U);
    msg.target.assign("YSIAEYTPVXQRTIAMOFBYBETWQGOLQICAGRHTHQKBJXKJWGIKGUWCQWGUWZMJNPNWYPVAKRAOWHCLHNKJDRCNPYIACQULWLCPLAQQEXNZPBBZGXNMDZUOCVOIHRMEJYMWEBHJECIBHGOD");
    msg.lat = 0.147786343718;
    msg.lon = 0.340490898393;
    msg.z_units = 152U;
    msg.z = 0.424497957624;
    msg.accuracy = 0.186346911791;

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
    msg.setTimeStamp(0.426392339641);
    msg.setSource(38458U);
    msg.setSourceEntity(133U);
    msg.setDestination(12256U);
    msg.setDestinationEntity(94U);
    msg.name.assign("YCGMALNDLUUEAVGBOVIDMJTFWXLYGQREDYIHNDDOCEHCKUIYZMREMOANEHPMTAUVOOFEDWGISBSXBFOXVAPTZZVDKSLIYLPSRBUJXFLHPRPVSYMEMLGFSWLNSFUCJTCUOYKOJRRIVKZKQQKJCBPGFBWOPFTKGWAIQQCXZCNXVGCFDQGUYVLJUPZMKDIZAXIBSPQXCJKJNHYRXYSAJ");
    msg.lat = 0.178343210658;
    msg.lon = 0.403228377244;
    msg.z = 0.613230645456;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.509060465395);
    msg.setSource(18058U);
    msg.setSourceEntity(210U);
    msg.setDestination(10183U);
    msg.setDestinationEntity(51U);
    msg.name.assign("ETPTCWIEMJIHXJANQDXMZGFOFYFJOWNSNLZQCNTDODGSMBVAIOYHMUQEGVRTURVUXDLMFWHFTNSSCLZJKNPAOGODWDHVCBHXYQETQPFVVEAUIJZKCSXUKUMNZ");
    msg.lat = 0.455413461909;
    msg.lon = 0.741736184877;
    msg.z = 0.0956468147228;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.186446336958);
    msg.setSource(28797U);
    msg.setSourceEntity(162U);
    msg.setDestination(55018U);
    msg.setDestinationEntity(94U);
    msg.name.assign("YYGKJBQMTEIHUHJORMQFZXEBKAZWVOIQPHVJWIRNMGUJXBLKVSBFOBOYAVHGRFPHGRLQIYBHXGWJIXWSRLYQPFZPEDPXUKBNIADVEBWAIAUHVCOLZTDOTJSVWFYYEUJMNXQDCLFUKMIOMHULMFYSTILXRXYGZNUKHKDKFKDXSRDRWZRRWGWCOTUCDCPYHLNTZSTTANJZ");
    msg.lat = 0.292482487951;
    msg.lon = 0.882074631183;
    msg.z = 0.746642300514;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.402489242261);
    msg.setSource(54622U);
    msg.setSourceEntity(87U);
    msg.setDestination(59293U);
    msg.setDestinationEntity(41U);
    msg.op = 72U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BHMJXGIDVTSCYGWCMBQEEYDIWHHQZQREHIIBXJCFBGNVLCTZRFRBWRVGMIBQKVEVHAOORGWUMIHJAKFPVJKPF");
    tmp_msg_0.lat = 0.0471736773653;
    tmp_msg_0.lon = 0.373864547064;
    tmp_msg_0.z = 0.100920715305;
    tmp_msg_0.z_units = 81U;
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
    msg.setTimeStamp(0.217534117824);
    msg.setSource(14065U);
    msg.setSourceEntity(41U);
    msg.setDestination(60882U);
    msg.setDestinationEntity(86U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.866686185569);
    msg.setSource(14895U);
    msg.setSourceEntity(99U);
    msg.setDestination(20829U);
    msg.setDestinationEntity(228U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.813241627828);
    msg.setSource(55060U);
    msg.setSourceEntity(212U);
    msg.setDestination(50839U);
    msg.setDestinationEntity(58U);
    msg.value = 0.738283161842;
    msg.type = 143U;

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
    msg.setTimeStamp(0.444074077447);
    msg.setSource(21631U);
    msg.setSourceEntity(83U);
    msg.setDestination(34989U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0509688398517;
    msg.type = 178U;

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
    msg.setTimeStamp(0.628184185566);
    msg.setSource(32977U);
    msg.setSourceEntity(127U);
    msg.setDestination(17625U);
    msg.setDestinationEntity(71U);
    msg.value = 0.400747786884;
    msg.type = 67U;

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
    msg.setTimeStamp(0.11995142568);
    msg.setSource(65149U);
    msg.setSourceEntity(43U);
    msg.setDestination(57169U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0580557961202;

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
    msg.setTimeStamp(0.559908290969);
    msg.setSource(25039U);
    msg.setSourceEntity(8U);
    msg.setDestination(64110U);
    msg.setDestinationEntity(220U);
    msg.value = 0.433263950246;

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
    msg.setTimeStamp(0.477747754935);
    msg.setSource(31293U);
    msg.setSourceEntity(6U);
    msg.setDestination(46182U);
    msg.setDestinationEntity(64U);
    msg.value = 0.209154564284;

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
    msg.setTimeStamp(0.71032350001);
    msg.setSource(30652U);
    msg.setSourceEntity(167U);
    msg.setDestination(18771U);
    msg.setDestinationEntity(215U);
    msg.timestamp_last_service = 0.580760344061;
    msg.time_next_service = 0.965723053571;
    msg.time_motor_next_service = 0.73254824908;
    msg.time_idle_ground = 0.401941008296;
    msg.time_idle_air = 0.475820607207;
    msg.time_idle_water = 0.489043665429;
    msg.time_idle_underwater = 0.898343164727;
    msg.time_idle_unknown = 0.077694271489;
    msg.time_motor_ground = 0.175668414591;
    msg.time_motor_air = 0.427313340634;
    msg.time_motor_water = 0.512190606358;
    msg.time_motor_underwater = 0.0495696928651;
    msg.time_motor_unknown = 0.294385965233;
    msg.rpm_min = 25886;
    msg.rpm_max = -24909;
    msg.depth_max = 0.309029337224;

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
    msg.setTimeStamp(0.440615552141);
    msg.setSource(41102U);
    msg.setSourceEntity(25U);
    msg.setDestination(62329U);
    msg.setDestinationEntity(221U);
    msg.timestamp_last_service = 0.492070897024;
    msg.time_next_service = 0.908663128154;
    msg.time_motor_next_service = 0.141150312449;
    msg.time_idle_ground = 0.414668330858;
    msg.time_idle_air = 0.0458990251915;
    msg.time_idle_water = 0.830533782826;
    msg.time_idle_underwater = 0.625284132869;
    msg.time_idle_unknown = 0.453327829367;
    msg.time_motor_ground = 0.411067552729;
    msg.time_motor_air = 0.0532739887018;
    msg.time_motor_water = 0.881873941203;
    msg.time_motor_underwater = 0.840588506788;
    msg.time_motor_unknown = 0.99510351662;
    msg.rpm_min = -17572;
    msg.rpm_max = -8851;
    msg.depth_max = 0.953366913922;

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
    msg.setTimeStamp(0.541182457317);
    msg.setSource(3791U);
    msg.setSourceEntity(232U);
    msg.setDestination(28741U);
    msg.setDestinationEntity(52U);
    msg.timestamp_last_service = 0.67514713216;
    msg.time_next_service = 0.598722523621;
    msg.time_motor_next_service = 0.301850010036;
    msg.time_idle_ground = 0.181506549644;
    msg.time_idle_air = 0.660837338838;
    msg.time_idle_water = 0.552818368822;
    msg.time_idle_underwater = 0.886962135824;
    msg.time_idle_unknown = 0.313333100229;
    msg.time_motor_ground = 0.936702979588;
    msg.time_motor_air = 0.311856464582;
    msg.time_motor_water = 0.782000495382;
    msg.time_motor_underwater = 0.672723769636;
    msg.time_motor_unknown = 0.530737185142;
    msg.rpm_min = -30167;
    msg.rpm_max = -6171;
    msg.depth_max = 0.298284374735;

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
    msg.setTimeStamp(0.532596615577);
    msg.setSource(37635U);
    msg.setSourceEntity(65U);
    msg.setDestination(16330U);
    msg.setDestinationEntity(15U);
    msg.severity = 48U;
    msg.text.assign("YEHUIKEQAWYDJVZNRYDBIXSRCJADNFQEPCJQOBPGUWPHKJGOUSQLFCANOCQHRMZHKMPCLGNBEMIFDEDJDHRGSIQRHQCARIUVTYZVF");

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
    msg.setTimeStamp(0.0303286220681);
    msg.setSource(42839U);
    msg.setSourceEntity(50U);
    msg.setDestination(58845U);
    msg.setDestinationEntity(149U);
    msg.severity = 10U;
    msg.text.assign("SZZGZTVOOLICBRBBLOMLBKWYKQTFAYQIZQPGNSUHDTFUQZWVWAYSTIPNAWLDXGFJNHIJKXBEHAOFXMXPAKMRYDZTKSGIQITBLYMJQXRRDABVDEVPMYSVYTJJWOSPZCKWLMUALPNONZCSPWJLJHRKFHEVMVDNLQDIHFPNPUQENEGGCAFVGWAEDXOAMUNMRVIHEOUCXFCGPBHJXRHGCTOKNYEWTBFZD");

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
    msg.setTimeStamp(0.932543044289);
    msg.setSource(48483U);
    msg.setSourceEntity(49U);
    msg.setDestination(51867U);
    msg.setDestinationEntity(53U);
    msg.severity = 192U;
    msg.text.assign("TYTUZLSLFYCWBEQMUYSSGXGWGFVWULSDGJJENPEPNRLXHRRDXEDYCVLNAXCLMAITPIBOQOOVRQKOBDSQMIGNZJKRCEINUHNVJHNUUGWCCKHBZQIRVPYRZIHFONECEZMFQVXDYARROWYHPXLJDTGKNWTDKXZABGJSFIJHBPIMFWWXTYOUMKCLE");

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
    msg.setTimeStamp(0.133840238981);
    msg.setSource(38587U);
    msg.setSourceEntity(124U);
    msg.setDestination(34528U);
    msg.setDestinationEntity(192U);
    msg.channel = -16;
    msg.value = 1186717790;
    msg.gain = 170U;

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
    msg.setTimeStamp(0.440363095373);
    msg.setSource(41842U);
    msg.setSourceEntity(195U);
    msg.setDestination(20136U);
    msg.setDestinationEntity(178U);
    msg.channel = 7;
    msg.value = 1281119209;
    msg.gain = 104U;

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
    msg.setTimeStamp(0.290581131063);
    msg.setSource(58537U);
    msg.setSourceEntity(179U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(243U);
    msg.channel = -54;
    msg.value = -1514960894;
    msg.gain = 20U;

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
    msg.setTimeStamp(0.961929370368);
    msg.setSource(25391U);
    msg.setSourceEntity(38U);
    msg.setDestination(10232U);
    msg.setDestinationEntity(153U);
    msg.ch01 = 0.152168405833;
    msg.ch02 = 0.295766855081;
    msg.ch03 = 0.131830083875;
    msg.ch04 = 0.588544976223;
    msg.ch05 = 0.770813098602;
    msg.ch06 = 0.639138470697;
    msg.ch07 = 0.0614322948698;
    msg.ch08 = 0.303293692764;
    msg.ch09 = 0.460027492988;
    msg.ch10 = 0.292818847211;
    msg.ch11 = 0.452368007757;
    msg.ch12 = 0.302740632034;
    msg.ch13 = 0.15140680534;
    msg.ch14 = 0.383588784663;
    msg.ch15 = 0.620189799919;
    msg.ch16 = 0.224389911458;

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
    msg.setTimeStamp(0.119861918132);
    msg.setSource(25952U);
    msg.setSourceEntity(45U);
    msg.setDestination(58192U);
    msg.setDestinationEntity(245U);
    msg.ch01 = 0.321572026023;
    msg.ch02 = 0.0451685747936;
    msg.ch03 = 0.450116753965;
    msg.ch04 = 0.238395853994;
    msg.ch05 = 0.147608358762;
    msg.ch06 = 0.957762453855;
    msg.ch07 = 0.75789160112;
    msg.ch08 = 0.0126245001254;
    msg.ch09 = 0.402317373516;
    msg.ch10 = 0.366599767625;
    msg.ch11 = 0.0609840593318;
    msg.ch12 = 0.8820661153;
    msg.ch13 = 0.844517989763;
    msg.ch14 = 0.678528162704;
    msg.ch15 = 0.139589955242;
    msg.ch16 = 0.767067045859;

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
    msg.setTimeStamp(0.789731221153);
    msg.setSource(5693U);
    msg.setSourceEntity(215U);
    msg.setDestination(36012U);
    msg.setDestinationEntity(210U);
    msg.ch01 = 0.262351924473;
    msg.ch02 = 0.872786120522;
    msg.ch03 = 0.282278347388;
    msg.ch04 = 0.563528002709;
    msg.ch05 = 0.401433334613;
    msg.ch06 = 0.125694482884;
    msg.ch07 = 0.540593197145;
    msg.ch08 = 0.413134501649;
    msg.ch09 = 0.280614361204;
    msg.ch10 = 0.22559588326;
    msg.ch11 = 0.236821394418;
    msg.ch12 = 0.170491172953;
    msg.ch13 = 0.720338534328;
    msg.ch14 = 0.939540385906;
    msg.ch15 = 0.984244277396;
    msg.ch16 = 0.366960617676;

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

  return test.getReturnValue();
}
