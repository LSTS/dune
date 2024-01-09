//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 300c92f76c47d1d9e32d8421679e98eb                            *
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
    msg.setTimeStamp(0.8988042244959769);
    msg.setSource(10870U);
    msg.setSourceEntity(223U);
    msg.setDestination(9068U);
    msg.setDestinationEntity(219U);
    msg.state = 254U;
    msg.flags = 140U;
    msg.description.assign("XUBXMFCTSYRHIOKULEWIQDVMYRWOFUGKAKPBKWZGRDQ");

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
    msg.setTimeStamp(0.3094173108885434);
    msg.setSource(57993U);
    msg.setSourceEntity(148U);
    msg.setDestination(5431U);
    msg.setDestinationEntity(173U);
    msg.state = 192U;
    msg.flags = 174U;
    msg.description.assign("BLAYIATFKYMAZPWSFGOTKWCMUEWNBLFOJHJBSEXXENVAPTLOGWNGTADPIUSTOYQKADQSXFHFVCATVQVIAUXVHRBQCIHCEMRDRNSVZCIYIJWRURZGSGLUKZEDGPQUJIJNLNTUFQZRKXWXRAIBZHCFSVWECLEIXEAMPMDBDPPORVWGJYOYUTJBBUHQLHCRGNSKFDMDUTYQMBFNYJOJNHM");

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
    msg.setTimeStamp(0.5602274030023777);
    msg.setSource(41740U);
    msg.setSourceEntity(70U);
    msg.setDestination(63677U);
    msg.setDestinationEntity(94U);
    msg.state = 81U;
    msg.flags = 177U;
    msg.description.assign("ZTUHTNXGQWEEOBLTXNJHVRMNQMUODKLPSIPLALSHKOUANHRXCROIVPIUKCJXXYALFZTSPYVZDGAJEVPBMJKBLHCJNNPZCRUZSCZNHFAVYBQECMQCXKRYPMFTQMI");

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
    msg.setTimeStamp(0.8922626253343933);
    msg.setSource(48642U);
    msg.setSourceEntity(98U);
    msg.setDestination(59671U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.15817517876512543);
    msg.setSource(7449U);
    msg.setSourceEntity(102U);
    msg.setDestination(40953U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.8810344350428968);
    msg.setSource(51394U);
    msg.setSourceEntity(71U);
    msg.setDestination(6642U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.7391449523275468);
    msg.setSource(40912U);
    msg.setSourceEntity(222U);
    msg.setDestination(37854U);
    msg.setDestinationEntity(171U);
    msg.id = 235U;
    msg.label.assign("SEBGYCTRYBKIDKYDKWJODVZBIAEQVKHGBRDMKTRFENPQFUHJULWYRDHAMZVWBNKYWXIAJESEVCFPPTCI");
    msg.component.assign("UQYEHPJZFKKJUDSH");
    msg.act_time = 58386U;
    msg.deact_time = 64666U;

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
    msg.setTimeStamp(0.23983097813775878);
    msg.setSource(21584U);
    msg.setSourceEntity(112U);
    msg.setDestination(38233U);
    msg.setDestinationEntity(130U);
    msg.id = 80U;
    msg.label.assign("DZOXWGTFLTBFAURJZDPXVAVPPGAIMMQYYJB");
    msg.component.assign("JAHOUNMWSGJWGVKNDMUCFITPYGGNOHKTRYLFXCINNRSQJCHOKIASEHSUYVCSUUTIYCZENIXJLRIDZHEDJKIQWFXUTRTBTWTNARLSLQYSXLNVAACECZZPAXGWRMUBCEPGLFQEZZEBYGPWUVFLCBKRJLMFFIMMEADXTADQCDKXGNDPPJTGBHSQSMVMFODHQPMOXRLBSVVYLAIJQYHQJGNVDAOZQVIHBORXWMOEWYKFFJBKVUEXPTRZWOBKZYPDK");
    msg.act_time = 10044U;
    msg.deact_time = 64772U;

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
    msg.setTimeStamp(0.39239120284670814);
    msg.setSource(11517U);
    msg.setSourceEntity(102U);
    msg.setDestination(34459U);
    msg.setDestinationEntity(23U);
    msg.id = 150U;
    msg.label.assign("JVJMSSVKBMHXDWKJMFIECWXYTPUTRVNLEZRZTIMBZLCWYQSSIY");
    msg.component.assign("CXBJVFLIDGOIWBBEEPMKSHUMOYNESRTSFXOGSBRBZUEUXYDYIDPRNXNURTATBFLGDWMWHHFZDKYHBIYRLYQPKOCLXAMYDQOTEMIVZGZWJVNBAIURLCUFHCPGVQJGGLTRWQWIFKUYSOCQKPMZANMEGTEESCLGXHXAKVVPARPFOYPQCQANAT");
    msg.act_time = 37027U;
    msg.deact_time = 35061U;

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
    msg.setTimeStamp(0.9640846083491489);
    msg.setSource(21414U);
    msg.setSourceEntity(165U);
    msg.setDestination(44873U);
    msg.setDestinationEntity(190U);
    msg.id = 121U;

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
    msg.setTimeStamp(0.8760608883511098);
    msg.setSource(32135U);
    msg.setSourceEntity(4U);
    msg.setDestination(45967U);
    msg.setDestinationEntity(201U);
    msg.id = 113U;

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
    msg.setTimeStamp(0.18906224304849972);
    msg.setSource(64033U);
    msg.setSourceEntity(100U);
    msg.setDestination(7545U);
    msg.setDestinationEntity(1U);
    msg.id = 7U;

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
    msg.setTimeStamp(0.10269143482512155);
    msg.setSource(5460U);
    msg.setSourceEntity(80U);
    msg.setDestination(22368U);
    msg.setDestinationEntity(27U);
    msg.op = 93U;
    msg.list.assign("UWNTCZQTVPNJZAICXBFCBVUZHOZRLVWUJSVKSYRRTGHIOSIYEDQVKAJIHNIFUZHOCJFFURNASXOMBIMXYDCDZGTGFGHSMWRGDYQMCWQMCIALADJWQGMEHJHMBIKEXVOIIJMLPMPJCFJUDKEPDT");

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
    msg.setTimeStamp(0.8075167094597543);
    msg.setSource(26611U);
    msg.setSourceEntity(182U);
    msg.setDestination(51243U);
    msg.setDestinationEntity(29U);
    msg.op = 160U;
    msg.list.assign("ENQCVQSUARBYMUPKKATQOGINFYJXMGOHZRECJDDPBILNTYWCZCENZSYXXXOUVZZJRFU");

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
    msg.setTimeStamp(0.10871732680337065);
    msg.setSource(25349U);
    msg.setSourceEntity(142U);
    msg.setDestination(54296U);
    msg.setDestinationEntity(129U);
    msg.op = 245U;
    msg.list.assign("QGNODWHPHSYIZTFFZTOBTKXKPGQZISHMIRTJJTKARCLRPNEAHWZUBWRKJYFAAJJBU");

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
    msg.setTimeStamp(0.8379543497303236);
    msg.setSource(19825U);
    msg.setSourceEntity(2U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(118U);
    msg.value = 83U;

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
    msg.setTimeStamp(0.9000708169376315);
    msg.setSource(45327U);
    msg.setSourceEntity(84U);
    msg.setDestination(8217U);
    msg.setDestinationEntity(186U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.05983473586217036);
    msg.setSource(62057U);
    msg.setSourceEntity(109U);
    msg.setDestination(56670U);
    msg.setDestinationEntity(230U);
    msg.value = 157U;

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
    msg.setTimeStamp(0.7355829328204841);
    msg.setSource(41984U);
    msg.setSourceEntity(165U);
    msg.setDestination(16468U);
    msg.setDestinationEntity(222U);
    msg.consumer.assign("MJKRESNWFWDNKWMHKSSYAQPKLIVSCWAQLUZWVJXBHOJEOZAQHCAVDODNOIGRULZVCFCPWSTKONMFTOKJTKBRTYYTPPXAJPFVGCPBCIWUVLBCYPNZLQSEMQVSOKXEIASMAMIWFYGNCNZGXJRJYGRMMQLVCDEDUIGVFAXUOGBVGQDMHWYUYUGKOBZXERTHI");
    msg.message_id = 32744U;

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
    msg.setTimeStamp(0.9691444349074446);
    msg.setSource(42498U);
    msg.setSourceEntity(59U);
    msg.setDestination(51939U);
    msg.setDestinationEntity(9U);
    msg.consumer.assign("TSQOBPECVFQDRJVVVIWVJZLPFVBABSUPONSAEIOBQGWIWIHHKLSTNDYKSTFEXMARDLQZNUKJMUGJUQNICKLUHZHYVBAYNCQIYSYKECLFSUWXPRXGMQPWBJDRMAGZTMJWRBIQHMHRHWOJCXJOORXTCPLFDNLFEYRFMDKSMACFJUCQCKTDPUQZTCIRRITGFOBOAAZZXENXPHTABHYVVZHADLOFKGEGPK");
    msg.message_id = 14907U;

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
    msg.setTimeStamp(0.34322000870460945);
    msg.setSource(38620U);
    msg.setSourceEntity(58U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("LPYKBLHCGIYTENDECLHCIJMEMGUHBIGZWBENNOWMRZRBBEKQZGMVWFGZPUYFLUXSGZTYNSUBTKQHKIJXJFAXQXTKVPVQUYLIFRXAHDAVYWFPLDLSDD");
    msg.message_id = 22725U;

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
    msg.setTimeStamp(0.6744312452346093);
    msg.setSource(36180U);
    msg.setSourceEntity(26U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(102U);
    msg.type = 41U;

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
    msg.setTimeStamp(0.47960276793665846);
    msg.setSource(20593U);
    msg.setSourceEntity(230U);
    msg.setDestination(10810U);
    msg.setDestinationEntity(151U);
    msg.type = 220U;

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
    msg.setTimeStamp(0.39096720419357867);
    msg.setSource(44615U);
    msg.setSourceEntity(46U);
    msg.setDestination(60609U);
    msg.setDestinationEntity(24U);
    msg.type = 34U;

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
    msg.setTimeStamp(0.43039736059869593);
    msg.setSource(27297U);
    msg.setSourceEntity(151U);
    msg.setDestination(48859U);
    msg.setDestinationEntity(158U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.46325135536909834);
    msg.setSource(16440U);
    msg.setSourceEntity(223U);
    msg.setDestination(47359U);
    msg.setDestinationEntity(253U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.650457436187748);
    msg.setSource(24835U);
    msg.setSourceEntity(9U);
    msg.setDestination(1683U);
    msg.setDestinationEntity(155U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.3558958881677474);
    msg.setSource(11195U);
    msg.setSourceEntity(182U);
    msg.setDestination(21520U);
    msg.setDestinationEntity(210U);
    msg.total_steps = 43U;
    msg.step_number = 57U;
    msg.step.assign("VYTZHYQQQZDNELWDCMCXDNRLFXDZJKLBQOBALCYVGRNFXPNBPEHPUGIJJWSOGGFQNASPQTCLYKJBTYTRIHDXBEGQTALJHOTWZRJMFFUEGUBTLPEKUYHCPWCXDMRKIXGMKYAWXHKVAZQPGBNNYXQZIRFZOUHVSSVMHIPMKCESWRJZASLGPAEOLFETMASMZWMJRD");
    msg.flags = 134U;

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
    msg.setTimeStamp(0.0699943518183277);
    msg.setSource(16761U);
    msg.setSourceEntity(129U);
    msg.setDestination(41967U);
    msg.setDestinationEntity(32U);
    msg.total_steps = 43U;
    msg.step_number = 92U;
    msg.step.assign("YXPPTVCKYXQCMEZAZOPVLOSHWAWDOZPTTRKLIYIUUMPGQVGKJNCFREHBMZSEIGRNGZQLOITFIYTIDKEZLFPBDAHGLJYHIVEWSNSOOQWXWZCOJCLNUFOMQPKRIAGQYWHADFUSBLVTJCNSHRNTAAHFNDDKJMVKRWTQIDDAKRHFUMU");
    msg.flags = 150U;

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
    msg.setTimeStamp(0.17939467507602314);
    msg.setSource(27212U);
    msg.setSourceEntity(47U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(13U);
    msg.total_steps = 208U;
    msg.step_number = 138U;
    msg.step.assign("OWFRFLDXIVKDNJCOJKBESOEDFNXRRDFK");
    msg.flags = 236U;

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
    msg.setTimeStamp(0.371272466825603);
    msg.setSource(38515U);
    msg.setSourceEntity(79U);
    msg.setDestination(60621U);
    msg.setDestinationEntity(185U);
    msg.state = 87U;
    msg.error.assign("PLUSIWRXIDKDQCKIHZRGBMEFPTWJAPGYNZFXPLBIAETVPJWIMQYQKAFOMKIUGLADTFBUUTFYFZQWZQLRJJLGXVMAJOUBKNYGROAVSUHEZPSPXGVRNRHLGHTWQZAXLNCZKFJIFESMODFICRRLLOYNYSAGTBOGHKHNLZWMXHEBVPUNVUDVXKEHTYDRZSHNTMJCFAQJECYCXWNEBODYBRCSUCXMGMWVHBDOJCTZKUXSAVQSDPTEW");

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
    msg.setTimeStamp(0.8939928157540996);
    msg.setSource(7049U);
    msg.setSourceEntity(84U);
    msg.setDestination(64547U);
    msg.setDestinationEntity(142U);
    msg.state = 192U;
    msg.error.assign("RPIKIQADEGZEAHRBMTMLNQVYT");

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
    msg.setTimeStamp(0.626632377333733);
    msg.setSource(10690U);
    msg.setSourceEntity(79U);
    msg.setDestination(37429U);
    msg.setDestinationEntity(176U);
    msg.state = 71U;
    msg.error.assign("IRSQZPBYVIVPZXDVOBVSRBFJOXILYBHQICAMNVMDICTPEWCLUMFDUTUOLQXWYYPOGJUSFLGAGMGRVMBXADJMKDHNTFXUQWATILKHXUOFMWAVENJSJQJYLKPYSCPINETHHYYHWKGPFKLSSSUVCTEA");

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
    msg.setTimeStamp(0.6152952495178861);
    msg.setSource(5325U);
    msg.setSourceEntity(102U);
    msg.setDestination(40854U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.11537842970987111);
    msg.setSource(33404U);
    msg.setSourceEntity(46U);
    msg.setDestination(56642U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.3383215781919521);
    msg.setSource(51411U);
    msg.setSourceEntity(154U);
    msg.setDestination(41178U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.03643838963268087);
    msg.setSource(52978U);
    msg.setSourceEntity(192U);
    msg.setDestination(34788U);
    msg.setDestinationEntity(249U);
    msg.op = 236U;
    msg.speed_min = 0.9645259719534868;
    msg.speed_max = 0.8857703732863642;
    msg.long_accel = 0.2441760268740436;
    msg.alt_max_msl = 0.8557248907678502;
    msg.dive_fraction_max = 0.41101845804152026;
    msg.climb_fraction_max = 0.4045767838112748;
    msg.bank_max = 0.35255821042117585;
    msg.p_max = 0.47619545997595714;
    msg.pitch_min = 0.35656275011096583;
    msg.pitch_max = 0.11465567849091995;
    msg.q_max = 0.14759276672385924;
    msg.g_min = 0.8646777726177325;
    msg.g_max = 0.8124329722228248;
    msg.g_lat_max = 0.795590429620491;
    msg.rpm_min = 0.7930412427743423;
    msg.rpm_max = 0.6465055883254404;
    msg.rpm_rate_max = 0.933952840771791;

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
    msg.setTimeStamp(0.3429326612968394);
    msg.setSource(7857U);
    msg.setSourceEntity(186U);
    msg.setDestination(38181U);
    msg.setDestinationEntity(75U);
    msg.op = 107U;
    msg.speed_min = 0.7034144853626139;
    msg.speed_max = 0.828637463174522;
    msg.long_accel = 0.4429044677110634;
    msg.alt_max_msl = 0.6403898333796927;
    msg.dive_fraction_max = 0.7601198681675091;
    msg.climb_fraction_max = 0.49834664690175234;
    msg.bank_max = 0.615091093942734;
    msg.p_max = 0.7263398060917583;
    msg.pitch_min = 0.2982517917154496;
    msg.pitch_max = 0.3100287965991897;
    msg.q_max = 0.5492588756378965;
    msg.g_min = 0.6255162786364155;
    msg.g_max = 0.8581619968071358;
    msg.g_lat_max = 0.9323259285289732;
    msg.rpm_min = 0.3281803430676782;
    msg.rpm_max = 0.11765522649662274;
    msg.rpm_rate_max = 0.6797790499816905;

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
    msg.setTimeStamp(0.8591273298754352);
    msg.setSource(12027U);
    msg.setSourceEntity(229U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(129U);
    msg.op = 138U;
    msg.speed_min = 0.7700972414086532;
    msg.speed_max = 0.9979515740058257;
    msg.long_accel = 0.5333086738748626;
    msg.alt_max_msl = 0.5260104629019583;
    msg.dive_fraction_max = 0.637470184460723;
    msg.climb_fraction_max = 0.08646608192902006;
    msg.bank_max = 0.5645841181082353;
    msg.p_max = 0.7317677190433134;
    msg.pitch_min = 0.19996979973956674;
    msg.pitch_max = 0.080315373674265;
    msg.q_max = 0.3649935954755076;
    msg.g_min = 0.5352683606121341;
    msg.g_max = 0.14123498107044707;
    msg.g_lat_max = 0.5041855245436021;
    msg.rpm_min = 0.4754051230575861;
    msg.rpm_max = 0.26723198634831125;
    msg.rpm_rate_max = 0.1814866828399253;

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
    msg.setTimeStamp(0.762397506689439);
    msg.setSource(1191U);
    msg.setSourceEntity(176U);
    msg.setDestination(57835U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.9158877826726701);
    msg.setSource(25486U);
    msg.setSourceEntity(149U);
    msg.setDestination(58915U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.4355049316681572);
    msg.setSource(41133U);
    msg.setSourceEntity(91U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(228U);
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 135U;
    tmp_msg_0.plan_id.assign("VAJYLUTOAFOLSSUIEJQMYMEQYKIYYQHUHEFHCSVUYXYLBRIODBAKVSAQPGEVZWPCPDDAWTROHPIMSBRETLTKKGOQIMBNLXMAOZGDDOTHCMDRHCMLVUJIWURPNYKVPNLRNXGWNBAWZOPQEATYJBZVDGUBCRFVNOUMRWGSFPHQPC");
    tmp_msg_0.comm_level = 44U;
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
    msg.setTimeStamp(0.9055766221841627);
    msg.setSource(26288U);
    msg.setSourceEntity(19U);
    msg.setDestination(32569U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.563576003778994;
    msg.lon = 0.4330734416003852;
    msg.height = 0.2951040275765674;
    msg.x = 0.8533443528348167;
    msg.y = 0.8081577967885517;
    msg.z = 0.5632020780442519;
    msg.phi = 0.4916498600570415;
    msg.theta = 0.03598485344147051;
    msg.psi = 0.4683484830685436;
    msg.u = 0.346437083314006;
    msg.v = 0.9865349875145432;
    msg.w = 0.42377463262516635;
    msg.p = 0.6708412482668419;
    msg.q = 0.13827860109082224;
    msg.r = 0.5707465140943299;
    msg.svx = 0.5464611800914763;
    msg.svy = 0.07878575380705366;
    msg.svz = 0.6271786039265791;

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
    msg.setTimeStamp(0.510084602933985);
    msg.setSource(8155U);
    msg.setSourceEntity(203U);
    msg.setDestination(5964U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.9634318254019012;
    msg.lon = 0.6207370647457162;
    msg.height = 0.24786783525111666;
    msg.x = 0.5068212605407053;
    msg.y = 0.1162002481730996;
    msg.z = 0.44126964896400467;
    msg.phi = 0.6967263483665794;
    msg.theta = 0.47782333985826164;
    msg.psi = 0.42589048219619785;
    msg.u = 0.8596464779634237;
    msg.v = 0.8740602390403783;
    msg.w = 0.15321356622284632;
    msg.p = 0.3672272238731179;
    msg.q = 0.488263242686912;
    msg.r = 0.8305704613508309;
    msg.svx = 0.4912975364240094;
    msg.svy = 0.7212175315012525;
    msg.svz = 0.696164667493276;

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
    msg.setTimeStamp(0.9760672315025509);
    msg.setSource(27321U);
    msg.setSourceEntity(99U);
    msg.setDestination(1702U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.8733100184933815;
    msg.lon = 0.9631280243599298;
    msg.height = 0.8391649266266621;
    msg.x = 0.1088713832928373;
    msg.y = 0.1256023913805785;
    msg.z = 0.2853360020769945;
    msg.phi = 0.4548498904061856;
    msg.theta = 0.6428668835141786;
    msg.psi = 0.06307518951953173;
    msg.u = 0.5682127012215653;
    msg.v = 0.4727316331799558;
    msg.w = 0.4091302416505067;
    msg.p = 0.07138160449268749;
    msg.q = 0.7173194529333723;
    msg.r = 0.5441898510578749;
    msg.svx = 0.6298561167983664;
    msg.svy = 0.8708354195626186;
    msg.svz = 0.3224614414650103;

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
    msg.setTimeStamp(0.9073189634810704);
    msg.setSource(64241U);
    msg.setSourceEntity(25U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(167U);
    msg.op = 2U;
    msg.entities.assign("QLGJGYABLDDOMHTPJBGMTBMEORAKQVSPSEVGSLYVFLPIYRDHMCPFDRYIMWCESCJKJKEXZTCMBVPSBZVMNKURTZIFQIBFZJYEZFOXTD");

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
    msg.setTimeStamp(0.41392802426704034);
    msg.setSource(23222U);
    msg.setSourceEntity(27U);
    msg.setDestination(31332U);
    msg.setDestinationEntity(161U);
    msg.op = 43U;
    msg.entities.assign("EUDZHGJQOEXUYMUCHRVQJBAMZMCPLVNNFRKFTLGTREUKLYBVJPMENSYHBYPTCOTGINGNDKWDXRKJTJAQVMRTWJCLIJWPKLPWQBMDSIQVXGBHEYSQBMFHUBBLUQSYX");

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
    msg.setTimeStamp(0.28258872017204806);
    msg.setSource(15219U);
    msg.setSourceEntity(47U);
    msg.setDestination(43121U);
    msg.setDestinationEntity(80U);
    msg.op = 240U;
    msg.entities.assign("APNJCMBTQLAXTSLSGZPMANIQFZCYKXERHFRTUXRKWINUBYLSRHSUCPMOOKTPWLJJMWJVCEIYPUWCVHHKNEFFFULMEBGJLVDFCIRTEXTFXHEOZVEIRVPHPFYDQIUZVJWMOAGS");

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
    msg.setTimeStamp(0.09043422428748105);
    msg.setSource(3786U);
    msg.setSourceEntity(169U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(96U);
    msg.type = 228U;
    msg.speed = 9934U;
    const signed char tmp_msg_0[] = {114, 110, 93, 44, -1, 107, 53, 60, -3, 17, -76, 117, 59, -18, 65, 94, 81, -78, 92, 81, -15, -117, -79, 5, 6, 19, -75, -66, -45, 72, 73, 107, 38, -92, -18, 19, -49, -56, 46, 75, 29, -65, -110, -105, 77, -22, 7, -19, -45, -115, -63, 97, -25, 113, 81, -70, -60, 10, 82, -27, 40, 126, 39, 123, 82, 31, 5, -125, 108, 16, 107, 77, 39, 53, -27, -3, 52, 13, -25, -3, -75, -71, 50, -59, 43, -16, 46, -4, -41, 52, -47, 119, -85, 104, 123, 78, 46, 26, 29, 47, -12, 41, 38, -88, -80, -38, 93, 2, -102, -122, -3, -16, 105, 106, 15, -59, -6, 22, 50, -4, -42, 106, 79, 72, -45, 16, 91, -43, -97, -125, -11, -108, -94, -126, 94};
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
    msg.setTimeStamp(0.7158873112649331);
    msg.setSource(62023U);
    msg.setSourceEntity(174U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(5U);
    msg.type = 182U;
    msg.speed = 928U;
    const signed char tmp_msg_0[] = {-17, -16, -118, 34, -120, 11, 106, -111, -109, 60, 4, -52, 113, 2, -81, 82, -103, 100};
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
    msg.setTimeStamp(0.42199113469665583);
    msg.setSource(35564U);
    msg.setSourceEntity(150U);
    msg.setDestination(10559U);
    msg.setDestinationEntity(125U);
    msg.type = 224U;
    msg.speed = 28042U;
    const signed char tmp_msg_0[] = {56, -65, -44, 38, 94, -103, 7, 10, -16, 114, -24, 79, 86, 96, -92, -20, 2, -64, 87, -97, 113, 97, -109, 11, -54, 83, 48, -54, -13, 102, 88, -110, 17, -18, 61, 102, -125, 78, -106, -96, -124, 50, 25, -88, -113, -45, -116, 90, 105, 104, 51, 38, -112, -12, 85, 39, -53, -55, -71, -32, 46, 37, 94, 93, 98, 34, 125, 4, -25, -88, -84, -21, -27, -109, 82, 120, -45, 59, 37, -11, 124, -68, 50, -36, -80, -68, 116, 123, 24, -31, 5, -75, -4, 31, -8, -104, 48, 39, -59, -101, 28, 27, -86, -123, -48, -102, 111, 122, 81, -8, -8, -94, 18, 94, 7, -53, 89, 60, -109, 100, 100, -11, 81, -80, -7};
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
    msg.setTimeStamp(0.6490063191304516);
    msg.setSource(29732U);
    msg.setSourceEntity(64U);
    msg.setDestination(4416U);
    msg.setDestinationEntity(224U);
    msg.op = 105U;
    msg.tas2acc_pgain = 0.17279400967366132;
    msg.bank2p_pgain = 0.8507833693774713;

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
    msg.setTimeStamp(0.24768024667261446);
    msg.setSource(58922U);
    msg.setSourceEntity(243U);
    msg.setDestination(27024U);
    msg.setDestinationEntity(171U);
    msg.op = 231U;
    msg.tas2acc_pgain = 0.23340287971358242;
    msg.bank2p_pgain = 0.8668321321217815;

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
    msg.setTimeStamp(0.32724918901957967);
    msg.setSource(62639U);
    msg.setSourceEntity(51U);
    msg.setDestination(5485U);
    msg.setDestinationEntity(164U);
    msg.op = 36U;
    msg.tas2acc_pgain = 0.9200156194660957;
    msg.bank2p_pgain = 0.04004740151544384;

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
    msg.setTimeStamp(0.31947636335206264);
    msg.setSource(47362U);
    msg.setSourceEntity(225U);
    msg.setDestination(9501U);
    msg.setDestinationEntity(166U);
    msg.available = 2812120568U;
    msg.value = 136U;

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
    msg.setTimeStamp(0.8799812608562719);
    msg.setSource(42966U);
    msg.setSourceEntity(93U);
    msg.setDestination(35556U);
    msg.setDestinationEntity(13U);
    msg.available = 1521417623U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.328266393391749);
    msg.setSource(6503U);
    msg.setSourceEntity(6U);
    msg.setDestination(31084U);
    msg.setDestinationEntity(239U);
    msg.available = 2595595313U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.4714862088141727);
    msg.setSource(5921U);
    msg.setSourceEntity(232U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(96U);
    msg.op = 75U;
    msg.snapshot.assign("NTPPEPHUNM");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 3759729020U;
    tmp_msg_0.lat = 0.5002193577266408;
    tmp_msg_0.lon = 0.3743385029941433;
    tmp_msg_0.height_ell = 0.497857670682082;
    tmp_msg_0.height_sea = 0.5442073858913997;
    tmp_msg_0.hacc = 0.9476728313569871;
    tmp_msg_0.vacc = 0.5255948861297003;
    tmp_msg_0.vel_n = 0.792420661962732;
    tmp_msg_0.vel_e = 0.19237758433219565;
    tmp_msg_0.vel_d = 0.7775453493628475;
    tmp_msg_0.speed = 0.0461439931426223;
    tmp_msg_0.gspeed = 0.05257087499283131;
    tmp_msg_0.heading = 0.721950187371071;
    tmp_msg_0.sacc = 0.5934799517272888;
    tmp_msg_0.cacc = 0.6658998309812163;
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
    msg.setTimeStamp(0.8903466454752939);
    msg.setSource(45290U);
    msg.setSourceEntity(96U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(73U);
    msg.op = 33U;
    msg.snapshot.assign("WIADQGWEGHREQQSPFKGKXIOFPMIJNSHXINRDDATZTCOPSRIHOCSAHFDQHKCVYRAKWXMKALCZRTNWJKOTEYEUBUVNKMXDTBJIVPXPBS");
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.6810958210617704;
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
    msg.setTimeStamp(0.2952899060146179);
    msg.setSource(20896U);
    msg.setSourceEntity(41U);
    msg.setDestination(32813U);
    msg.setDestinationEntity(1U);
    msg.op = 208U;
    msg.snapshot.assign("BYKHTCXLDVSQRBOSRIAKOMBRPLDEVTTYYLYHOESVZGRGNJTHQPDTXSAAEGNQDZJMCDOLHGFIFMWYABXBUOSWQYJXIVCURHIGBJNCTCFNMAKDZQICTJ");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("HEQABCMIKVBAPDILNNWKESUXWNYHZUGRLLOAHDENYJJWIBQEKUQCRHZIQMQTJPJTCEQGXMGOJCRCWPOXNVLSZDSCVKFUZZLNTLTVADEYPYFVTHNTJFK");
    tmp_msg_0.text.assign("TOILCUUHTRKGVWWKHEEMFDKFMCHYBLGAFOWOKQIAKKHTGBPQYBWDJVINURQJRMJATWRYXALDOCSZUDZELLNOVJCZRNKACZCESYJUQNPUDOSHQNRQJQPPOXJKEGRTVZAISSIFIMQHTXYSCZZXMYQIIIXFFVTGPJGVDNPFUMTXMMZTRESBYGTHRPOHBVLLPDAEVIXPAALFWENNFWEDNWBMZJLOBVMNCBBYJV");
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
    msg.setTimeStamp(0.25293455908079676);
    msg.setSource(4035U);
    msg.setSourceEntity(218U);
    msg.setDestination(56666U);
    msg.setDestinationEntity(32U);
    msg.op = 82U;
    msg.name.assign("XFPOQYNIWTKGNTQVWGYQTHAFOLNJWGNZWZJBJYXUSKMKFPVZMERPZIRKDIHAUKAIOLHPCFQYGIDMAVTUVJPYNOREGCXXTPLBMGLHLKNCGPMVITSOBCULAMXOSZDXXOWHDNTHQKFUDASUJMWSBEDYWUEKMDVGJZVQTSEWTECSZBYIXVFAJCDLUYOJRMYRPOEYLTCMZB");

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
    msg.setTimeStamp(0.42050423118854985);
    msg.setSource(41219U);
    msg.setSourceEntity(164U);
    msg.setDestination(52278U);
    msg.setDestinationEntity(68U);
    msg.op = 130U;
    msg.name.assign("MJQGQMGPAXCTLHLLYHONDLAPEBNURFVAWPVQJCAEYUSWAZPXQRW");

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
    msg.setTimeStamp(0.8278664757959379);
    msg.setSource(21434U);
    msg.setSourceEntity(153U);
    msg.setDestination(3639U);
    msg.setDestinationEntity(254U);
    msg.op = 27U;
    msg.name.assign("JTKSAZONMSQZBLYIXHG");

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
    msg.setTimeStamp(0.8033672346544722);
    msg.setSource(35024U);
    msg.setSourceEntity(62U);
    msg.setDestination(20752U);
    msg.setDestinationEntity(145U);
    msg.type = 108U;
    msg.htime = 0.8582271020730939;
    msg.context.assign("FHUHLRYCVJDVZBBXQSWXVKPQRJIBQMHIEBTXNUZQFGEFGCOAKWABRDMWNFBNNKDPWMTMYEOOJSPLAYBIQLCMSKVHAOEHQWMQLNICEDGCFUZEVGZTTTKENTTVXPQVIXJHRVJWYACWFGWOPLAXZJJPLZXQPDLGHOPATUKPSXCDTCNHUAAXKHYMZLYZQYMGESZJWRYSJRTAYFGSGUI");
    msg.text.assign("FXFRJIFEXOMQNIDWQAHOBHBYNCACLGMTTVSFRIJTFRUXKOXUWMLNTIKWTBYSAYYHTYYVLNDTUEMDQGAOLPZNFDLUBCRHLWJHTOTVEKLZUNYMUJRYUIRZWHSWRHZKMCKADBAIMUBVXGQGUSPDPHVFNQSXPTNQUZPXEWKKGXXFBRVINJZBEDCLGMSGFZHPCOMLEOPZ");

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
    msg.setTimeStamp(0.7820483035665635);
    msg.setSource(37271U);
    msg.setSourceEntity(16U);
    msg.setDestination(64099U);
    msg.setDestinationEntity(38U);
    msg.type = 62U;
    msg.htime = 0.606913652524642;
    msg.context.assign("SAXLZPXQEPMXOOKMAJPOBYNETKIDFCSHKVWTJZLVEZKGTVRTUQCULYMXCNKQSOBRQVSVQXFGJXAYRFUINWDDKPGMHXGXNGCFRTOLFELUEOTWPYFMWHDADHHJHCWYYJGMXSPCRKDTHAGNSIFRUKDWBNUCZZNNUIICHQIREJOOEVZFCIWAQNHBMZZBUWRRMMJTLDTBAZQUVKVVRHBPYAGILGPISSYQIDOJJSLFEAFGPDEYNWLJ");
    msg.text.assign("NWHZRUXIWOPKKVYDLPEZA");

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
    msg.setTimeStamp(0.5217356242482697);
    msg.setSource(12234U);
    msg.setSourceEntity(139U);
    msg.setDestination(43938U);
    msg.setDestinationEntity(115U);
    msg.type = 102U;
    msg.htime = 0.49625655741905095;
    msg.context.assign("VBZCGIAAKKGWARKSOVWXWJUPKXNRSXVJ");
    msg.text.assign("MJBTWHRRGBBCJXNFWVMAUHAHRTAGOQGALRKMSRBHLGTFZFCXJGLTZQPPFTQQKSFMHIOIKYFSORQTSFDBOCHYPEADMENZRIYPIAGXKPHADZAJDAVLEIGMOBLNLECWKSJDGLBTAKVCJFYXOTNO");

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
    msg.setTimeStamp(0.15161866033945892);
    msg.setSource(35662U);
    msg.setSourceEntity(153U);
    msg.setDestination(2539U);
    msg.setDestinationEntity(175U);
    msg.command = 59U;
    msg.htime = 0.6436371017989541;

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
    msg.setTimeStamp(0.38320714633398556);
    msg.setSource(13721U);
    msg.setSourceEntity(243U);
    msg.setDestination(25788U);
    msg.setDestinationEntity(159U);
    msg.command = 92U;
    msg.htime = 0.7313079899027484;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 124U;
    tmp_msg_0.htime = 0.5150693542576981;
    tmp_msg_0.context.assign("XXLTOFQGOUSAKYXFYLBYPXWYTQDACELYLBZABFWJXHGJUCVTENTPSZIWHIOUEVQHLHUELONJZFTFNSQDMMJNVAFNMADLPMGGCLTWPXNSVRUVDXJXCPRSNQVKJZVTRCRJIWRPHKAKKFFZZPBBYKMUILMOWEZPFGCDCRKWJMGBEETYEXWQDLAQGMCOAZRRHIVQKV");
    tmp_msg_0.text.assign("EJXNACHQTFSZEESLQGPIBSXLMEOFEJBTGGVBOBXYUJUWXHLKGZXQMZGKWYYZV");
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
    msg.setTimeStamp(0.15600050494420803);
    msg.setSource(38605U);
    msg.setSourceEntity(6U);
    msg.setDestination(4113U);
    msg.setDestinationEntity(166U);
    msg.command = 117U;
    msg.htime = 0.24986376699843005;

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
    msg.setTimeStamp(0.2786148382681717);
    msg.setSource(45704U);
    msg.setSourceEntity(177U);
    msg.setDestination(46911U);
    msg.setDestinationEntity(182U);
    msg.op = 212U;
    msg.file.assign("ILCBVMQPPQMWUARBUBQFUYRHUVFSUFXHYEVV");

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
    msg.setTimeStamp(0.821233261765332);
    msg.setSource(2474U);
    msg.setSourceEntity(165U);
    msg.setDestination(40306U);
    msg.setDestinationEntity(178U);
    msg.op = 229U;
    msg.file.assign("IZFFBABLKJWDRUOILHPDCKPPSGTULRVSSAPPAPMHBSGQMQJPZJMETWYDMXIRQBOBVOJVRIMZVEGLRJTGFHOKKDSHUHCQWUNOCSZAHCGJLGDRYFNAWYXJTXOSFZZYUKWEWBIVQIMKNNFQKNSTANQCEYGBWEJNXKWWOAXREZZVJUTYXDA");

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
    msg.setTimeStamp(0.3811425516435448);
    msg.setSource(54942U);
    msg.setSourceEntity(36U);
    msg.setDestination(48206U);
    msg.setDestinationEntity(125U);
    msg.op = 176U;
    msg.file.assign("BSSCIJMJGFEDRQFLYYDFOWXVGNLKERIPRHUGKOSAYHLQDKWNASTUVPTFRLTXBWXEAHAQADDIRWEKOUYVKYCGEZNXAQJOJMTDJKMCWZKJISHMPBBLMDXHJCAKIDYGQGUBPSDHKNNEWZSSCLTMTSULFWVRLDYFVPIACGAQ");

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
    msg.setTimeStamp(0.8570787804346823);
    msg.setSource(41813U);
    msg.setSourceEntity(106U);
    msg.setDestination(63345U);
    msg.setDestinationEntity(128U);
    msg.op = 77U;
    msg.clock = 0.6652652558424395;
    msg.tz = 87;

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
    msg.setTimeStamp(0.7718004667281615);
    msg.setSource(58705U);
    msg.setSourceEntity(4U);
    msg.setDestination(61355U);
    msg.setDestinationEntity(94U);
    msg.op = 44U;
    msg.clock = 0.742840482359203;
    msg.tz = 99;

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
    msg.setTimeStamp(0.3984532729298177);
    msg.setSource(25009U);
    msg.setSourceEntity(246U);
    msg.setDestination(28901U);
    msg.setDestinationEntity(2U);
    msg.op = 113U;
    msg.clock = 0.7762256911331535;
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
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.38201787718265723);
    msg.setSource(1183U);
    msg.setSourceEntity(182U);
    msg.setDestination(31380U);
    msg.setDestinationEntity(42U);
    msg.conductivity = 0.6485736416342168;
    msg.temperature = 0.5041464319816417;
    msg.depth = 0.8402569766191709;

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
    msg.setTimeStamp(0.8786604139818568);
    msg.setSource(11951U);
    msg.setSourceEntity(102U);
    msg.setDestination(58652U);
    msg.setDestinationEntity(167U);
    msg.conductivity = 0.4416510045690468;
    msg.temperature = 0.33783598357574196;
    msg.depth = 0.22072698859932616;

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
    msg.setTimeStamp(0.8868195912375695);
    msg.setSource(60038U);
    msg.setSourceEntity(236U);
    msg.setDestination(4825U);
    msg.setDestinationEntity(121U);
    msg.conductivity = 0.21603031675445483;
    msg.temperature = 0.5889785842377532;
    msg.depth = 0.6982181039092916;

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
    msg.setTimeStamp(0.6112838292753643);
    msg.setSource(42248U);
    msg.setSourceEntity(42U);
    msg.setDestination(24716U);
    msg.setDestinationEntity(46U);
    msg.altitude = 0.30535799673616004;
    msg.roll = 5705U;
    msg.pitch = 18029U;
    msg.yaw = 63285U;
    msg.speed = -12333;

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
    msg.setTimeStamp(0.22175123104198402);
    msg.setSource(53862U);
    msg.setSourceEntity(198U);
    msg.setDestination(57985U);
    msg.setDestinationEntity(48U);
    msg.altitude = 0.9796170062923611;
    msg.roll = 30304U;
    msg.pitch = 17398U;
    msg.yaw = 51473U;
    msg.speed = 12921;

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
    msg.setTimeStamp(0.09036305903351316);
    msg.setSource(29614U);
    msg.setSourceEntity(238U);
    msg.setDestination(43665U);
    msg.setDestinationEntity(147U);
    msg.altitude = 0.04574509111085756;
    msg.roll = 50782U;
    msg.pitch = 55049U;
    msg.yaw = 32163U;
    msg.speed = -1788;

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
    msg.setTimeStamp(0.7135688229671393);
    msg.setSource(15475U);
    msg.setSourceEntity(195U);
    msg.setDestination(17439U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.312428487654149;
    msg.width = 0.26595208324368047;
    msg.length = 0.4597253946047748;
    msg.bearing = 0.48355524971702424;
    msg.pxl = 3864;
    msg.encoding = 175U;
    const signed char tmp_msg_0[] = {-54, 48, 53, 17, 22, 92, 77, -110, 35, -114, -104, -6, -123, 8, 15, -117, 59, -118, 14, 2, 120, 101, 32, -38, -17, 17, 115, -28, 7, -118, 50, 51, 39, 33, 81, -84, -96, 10, -4, 97, 116, 123, -107, 101, 87, 57, -13, 72, 88, 4, 123, -76, 97, 99, -32, -16, -5, 38, 112, -2, -112, -65, 97, -27, 40, -96, -19, 103, 38, -91, 60, -94, -30, -40, -7, -126, 66, 72, -103, 19, 3, 104, 75, 123, -109, 56, -61, -111, -66, -16, 83, -112, 86, -83, -127, 117, 100, -72, -18, 90, -20, -123, 45, -12, -9, 82, -126, -13, -107, 104, 9, 29, -18, 117, -90, -78, 122, -5, 32, 46, -90, 16, 105, 2, -99, 125, -109, 102, -108, 88};
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
    msg.setTimeStamp(0.09840000243917868);
    msg.setSource(54493U);
    msg.setSourceEntity(174U);
    msg.setDestination(9737U);
    msg.setDestinationEntity(246U);
    msg.altitude = 0.7920548304510678;
    msg.width = 0.08395402162640386;
    msg.length = 0.4173065082237275;
    msg.bearing = 0.9234602154473813;
    msg.pxl = -32569;
    msg.encoding = 141U;
    const signed char tmp_msg_0[] = {-72, 116, 43, -84, -81, -78, -18, -25, 82, 83, -112, -116, 113, 58, -95, -6, -67, -16, -104, -93, -1, 112, -59, 33, -27, 23, -112, -81, 101, -51, 39, -92, -99, 112, -6, 2, -28, 74, -39, -81, 45, 126, -90, 103, 52, 64, -88, 19, 15, -106, -43, -31, 15, 33, 121, -41, 41, -66, 73, 28, -123, 87, -8, 106, -7, -59, 27, -18, 121, 19, -90, 65, -83, -68, 110, -108, 67, 109, -110, 124, 72, 94, 78, -12, 28, -3};
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
    msg.setTimeStamp(0.9158575830506485);
    msg.setSource(44981U);
    msg.setSourceEntity(123U);
    msg.setDestination(34790U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.04264274878780905;
    msg.width = 0.5905006664869329;
    msg.length = 0.018716775279838838;
    msg.bearing = 0.2247028152087137;
    msg.pxl = -20914;
    msg.encoding = 234U;
    const signed char tmp_msg_0[] = {-91, -94, -62, 16, -71, -16, 62, -97, -127, -12, -64, 21, 26, 120, 3, -24, 22, 64, -92, 41, 82, 37, -2, -88, 65, -77, 121, 78, 71, -97, -13, -39, -126, -9, 122, 106, 49, -84, 32, -20, -125, -63, -119, 84, -106, 97, 119, 44, -125, -27, -13, -48, -92, 41, -104, -112, -4, 8, 122, 104, -91, -92, -17, -7, -80, 97, 77, -99, -117, -14, -118, 50, -15, 119, 116, 89, 80, 60, 82, 65, 9, -51, 98, 65, 125, 50, 59, -24, 96, -98, -81, -23, 8, 2, 41, -32, 36, -3, 5, 46, 30, -4, -48, 28, -103, -127, 65, 115, 76, 27, -106, -86, 40, 52, 95, 39, 19, -122, -91, -51, 37, 23, 6, 21, 70, 125, 15, -88, -49, 76, 126, 122, -120, 47, 78, -32, -43, 26, 87, 35, -127, 86, 116, 1, 82, 61, 84, -96, 109, 119, 7, 30, 67, -58, -85, -73, -89, 120, -8, 122, -116, -7, -5, -18, 66, -56, -11, -105, 57, -61, -65, -56, 87, 40, 45, -106, -123, 16, -28, -120, -12, 24, -70, 31, 101, 58, 104, 113, -98, -88, -60, -60, -98, -85, 13, -80, 10, -2, -28, 10, 72, -95, 92, 43, -80, -109, -15, 71, -74, -120, 71, 60, 95, -47, -125, -98, 28, -116, -71, 80, -30, 84, -64, -89, 42, 4, -16, -78, 108, -57, 39, 41, 11};
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
    msg.setTimeStamp(0.8786423064551214);
    msg.setSource(59373U);
    msg.setSourceEntity(113U);
    msg.setDestination(34339U);
    msg.setDestinationEntity(183U);
    msg.text.assign("WBOWXQZUKTSVXEFBUABZWFSRKSASNCFUQNJEQSOLNBXZHMAFWVITQGGIIELGMYEYZPCJKMVWPFPOVVDYCBAXHQKCRONRBCIQHMJJHVGRPPWCFOKOIDBHNGBGXITIYTAUEKSRHBNDNLCANCRMDJLUWYFDCLOMZ");
    msg.type = 164U;

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
    msg.setTimeStamp(0.7937983029040426);
    msg.setSource(26662U);
    msg.setSourceEntity(186U);
    msg.setDestination(21201U);
    msg.setDestinationEntity(196U);
    msg.text.assign("RMIZXXOQQLJMSFGIPXJJQVDHRYOSARWYGWCBSMYIVRZCUFTLWGBXABCPZBVKDRNDJKQZYOUETNGSFZMPEEBVECJWUGTEELKJJTIIPKBWLUBNC");
    msg.type = 69U;

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
    msg.setTimeStamp(0.940980582530157);
    msg.setSource(16556U);
    msg.setSourceEntity(146U);
    msg.setDestination(17953U);
    msg.setDestinationEntity(200U);
    msg.text.assign("GVQHEOJCHSXFABFAMMOYCYOTMQVHENPGIDSFRJYKHZXLBORIUWBHAMRAXUQGAWJNBMFQRQCBNTSKMKJXJSBGSZNRTLINYXBGDTOTFLSPXDYDXKGFOCGVUYZHWQIWLTTYGPFUWRJEEIDPJEJYBECONUKFDGDPSPMUELSCJQKBKCWPOHRVGFVNDRVZHWCAOCESTEMULWCXDT");
    msg.type = 25U;

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
    msg.setTimeStamp(0.416173679827746);
    msg.setSource(19784U);
    msg.setSourceEntity(19U);
    msg.setDestination(47183U);
    msg.setDestinationEntity(254U);
    msg.parameter = 29U;
    msg.numsamples = 71U;
    msg.lat = 0.5840036473365482;
    msg.lon = 0.790563284978739;

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
    msg.setTimeStamp(0.5414331439191549);
    msg.setSource(29399U);
    msg.setSourceEntity(98U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(191U);
    msg.parameter = 53U;
    msg.numsamples = 173U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 15099U;
    tmp_msg_0.avg = 0.14922603451312366;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9860201690701195;
    msg.lon = 0.7938931313177957;

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
    msg.setTimeStamp(0.11685400439760718);
    msg.setSource(59984U);
    msg.setSourceEntity(162U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(10U);
    msg.parameter = 3U;
    msg.numsamples = 155U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 62755U;
    tmp_msg_0.avg = 0.47116006166737523;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6176486682104848;
    msg.lon = 0.17364833423733517;

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
    msg.setTimeStamp(0.6818206661195291);
    msg.setSource(10041U);
    msg.setSourceEntity(16U);
    msg.setDestination(58527U);
    msg.setDestinationEntity(78U);
    msg.depth = 64831U;
    msg.avg = 0.5477846809289758;

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
    msg.setTimeStamp(0.4879247647835203);
    msg.setSource(42974U);
    msg.setSourceEntity(117U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(210U);
    msg.depth = 55060U;
    msg.avg = 0.2528785704037977;

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
    msg.setTimeStamp(0.3751787821657284);
    msg.setSource(55193U);
    msg.setSourceEntity(45U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(250U);
    msg.depth = 28691U;
    msg.avg = 0.6282132255165763;

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
    msg.setTimeStamp(0.8722224801322789);
    msg.setSource(6126U);
    msg.setSourceEntity(150U);
    msg.setDestination(32575U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.7075774151389719);
    msg.setSource(53353U);
    msg.setSourceEntity(190U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.802805367101525);
    msg.setSource(36289U);
    msg.setSourceEntity(246U);
    msg.setDestination(1372U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.46969194346190524);
    msg.setSource(22261U);
    msg.setSourceEntity(227U);
    msg.setDestination(29896U);
    msg.setDestinationEntity(239U);
    msg.sys_name.assign("XJVVKQHRGSNCXEBIWJOUOZNCEDBSVMKUDJPVTPWMFWZAZUMLQAFGGCLSGOTFYENPLHFXRLUBBVJENAHAIRFFXDROULBIDSRWNXPYJEZMDHMMCVVQYCBNKZZAITLGXZQRIAIZMVTRREOFUNBEICFYGYGKSLBZRAKJPOKXHDMTDDIHGYHVJHWQXANHSUPSEQCJDTCKDQILYJHBYUOUYEQTVGSWWSPIQQFFOBYKMKWPWKPWZT");
    msg.sys_type = 243U;
    msg.owner = 7220U;
    msg.lat = 0.8545541464078602;
    msg.lon = 0.3010597851182826;
    msg.height = 0.7866584305298259;
    msg.services.assign("FVGQYTFTUCAIISBORROWSRZSKVWIVAENULVWQPRMVJUZJPZFNVZTLRAXHMQPSKDMWKOTXIWIDZLYLAJTYDUCNRQGWNJBHVHPMXQDLICFYPFPIEDJQLGKNQFUWAHOOEDRXTCESNYHQYFARJUMJWPEEYCUCZOTIFVABSVAHCDXSQEDGNNBEEPBKLKUPGFEAGOSNBNWOCUJLXITFXXGHBMKKTGZSQZYRDUPBOBWGMLYCVDXGIHLHXBMMAMKZT");

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
    msg.setTimeStamp(0.6703020540635221);
    msg.setSource(2573U);
    msg.setSourceEntity(122U);
    msg.setDestination(15735U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("ZKOUWKPPFPRJGRHQSZJSYMGFRUSDNEH");
    msg.sys_type = 176U;
    msg.owner = 39482U;
    msg.lat = 0.8475574608014966;
    msg.lon = 0.7055075665081508;
    msg.height = 0.4074201390922667;
    msg.services.assign("BFDPEGLRNVXIXMHTHBRLGPAYFEZI");

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
    msg.setTimeStamp(0.32112807006278576);
    msg.setSource(40836U);
    msg.setSourceEntity(32U);
    msg.setDestination(6825U);
    msg.setDestinationEntity(217U);
    msg.sys_name.assign("QMURJKBGXSXNNDUENVKFHNDGVPFTOOZRGXLOMRRHPGDIBQANFQVOSDTZJJDUMAUDJSIIVWMUVBOWJUSGFCKJUZLYBAYCYTRXMMITCMWIHWIXNGZQNWNFRBAXLRWSCXZJQ");
    msg.sys_type = 26U;
    msg.owner = 446U;
    msg.lat = 0.3473077384615919;
    msg.lon = 0.969202079309209;
    msg.height = 0.9912588507419918;
    msg.services.assign("MWSDUDSBXXVLUQLEKONTRRSANNOSBQIVEVAEFGTLFMRCVAPWLQKYTWRKIZFYTDQYGSWIWAB");

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
    msg.setTimeStamp(0.23277768379150987);
    msg.setSource(4195U);
    msg.setSourceEntity(221U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(213U);
    msg.service.assign("FTSBMFPVBAZISGRRVFFMYTSXLWEJEJYXWXCJBRZLPWNMMNNCVUSPHIQYKZVPGBDSSAHDFYZYTDLPBVUNYHYXKSTAPOLMZVAKFJIYLQPKKNOLZQHSNGUUZFWDQOLONDMQHUDVSDQRJEJKULNXAXVKHCGXMUTCQUWTEYMXOIZIVTGCEDYJRTRGGATXOCLPFIJRNGPBFTMKIIWU");
    msg.service_type = 158U;

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
    msg.setTimeStamp(0.006938535917514588);
    msg.setSource(58278U);
    msg.setSourceEntity(136U);
    msg.setDestination(465U);
    msg.setDestinationEntity(208U);
    msg.service.assign("POEEDTDOLGDUDCAOCFQY");
    msg.service_type = 56U;

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
    msg.setTimeStamp(0.8538051785928836);
    msg.setSource(4176U);
    msg.setSourceEntity(156U);
    msg.setDestination(25523U);
    msg.setDestinationEntity(218U);
    msg.service.assign("IODSFJUQTGUWYFJLFBMNQFWZHYAJLILBNEDYTXGBSSXPJRYDFKNDLEEJEGHUKPSQQKVG");
    msg.service_type = 97U;

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
    msg.setTimeStamp(0.5577885504768911);
    msg.setSource(37896U);
    msg.setSourceEntity(71U);
    msg.setDestination(40482U);
    msg.setDestinationEntity(114U);
    msg.value = 0.36176711690155416;

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
    msg.setTimeStamp(0.3762639600184444);
    msg.setSource(5538U);
    msg.setSourceEntity(49U);
    msg.setDestination(36044U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8079687475885479;

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
    msg.setTimeStamp(0.6596435612839197);
    msg.setSource(57489U);
    msg.setSourceEntity(120U);
    msg.setDestination(62670U);
    msg.setDestinationEntity(28U);
    msg.value = 0.782088840419084;

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
    msg.setTimeStamp(0.05178905402177536);
    msg.setSource(58027U);
    msg.setSourceEntity(53U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(148U);
    msg.value = 0.2206101171366911;

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
    msg.setTimeStamp(0.2790430096248582);
    msg.setSource(61154U);
    msg.setSourceEntity(137U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(125U);
    msg.value = 0.22559381594293315;

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
    msg.setTimeStamp(0.7134422478165249);
    msg.setSource(43052U);
    msg.setSourceEntity(219U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(90U);
    msg.value = 0.27764873055940487;

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
    msg.setTimeStamp(0.35624489870280585);
    msg.setSource(33385U);
    msg.setSourceEntity(100U);
    msg.setDestination(30282U);
    msg.setDestinationEntity(104U);
    msg.value = 0.228343108806494;

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
    msg.setTimeStamp(0.9991294997966168);
    msg.setSource(70U);
    msg.setSourceEntity(31U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(243U);
    msg.value = 0.313003707745384;

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
    msg.setTimeStamp(0.049584199966338116);
    msg.setSource(40505U);
    msg.setSourceEntity(132U);
    msg.setDestination(42038U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5241591503621709;

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
    msg.setTimeStamp(0.07067162562292872);
    msg.setSource(46837U);
    msg.setSourceEntity(186U);
    msg.setDestination(22593U);
    msg.setDestinationEntity(26U);
    msg.number.assign("JVYLHLSTKDUVUHRJWCMPXRAOSARGDZCNXZGOIPLDJWTAYIZFSIEQIAORQHGXWYKDPDBPKNRUWESADVEEPZFZHINIVCHPFGLCRKBMELAEBTGTZPBMOGBUUGQUBMXRCMMTWRKNBJGCFTSYRUDVITNIAJCIBXNOWWFKVNJNZVFGDKBYFEVYKLAX");
    msg.timeout = 6782U;
    msg.contents.assign("QCSOWEUIQEOHQRVXXLGPMUBUXPGNPBEYVJYUHIJPZZOXJARSTTKYLSBWQCIDWYNIYTPAPUBCXGMKFZHSKTVPMHJGMFENRQFDVRDBIBUFWTYJMQAKFSZJHRXDOWCVFZHRLYDHOKAELVVTZABGQBCWJISDLBFIAOUXTIGZLCLNFQKIEMNYGVTNWGDXHTVAMKMMPSKQCJYTNFEKGZIERLWPQRRUOAWLS");

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
    msg.setTimeStamp(0.0825283005855344);
    msg.setSource(44942U);
    msg.setSourceEntity(247U);
    msg.setDestination(65039U);
    msg.setDestinationEntity(174U);
    msg.number.assign("ZWADXNKAWVEUUGLOHNJXAQOJABGFDSPVWGYSVMGNPQHEXFKAEOHCZVNRHFEQBYDFICMWTIRRCSFUHKPILLBTYSZYCRBOASVWSXC");
    msg.timeout = 2847U;
    msg.contents.assign("TIJXWGNOCYDPPUWWGBAEDBSPOYOHCHXNJGXNAKLRWNMLPDFBJQAHMLTXJADLXBHXAVIPKJHGLZPQNALMFQLTDSHWISLVUFZWRCTCEBISFNXJYOMMSAYQUCQEZAUWRSVZXFXHKOLBIPZETVMCBQTWFEYOGT");

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
    msg.setTimeStamp(0.4772436425393122);
    msg.setSource(9006U);
    msg.setSourceEntity(59U);
    msg.setDestination(23556U);
    msg.setDestinationEntity(241U);
    msg.number.assign("OICGHPQWVLUDAQZVZKQGEYRVZWMWKORWIKBRZFYEZTSTMYPEGCGAZZMOJDYLCMFINQCVYFOKOXKPJIGRKNUSHNXVHBUXCMMZTNVQBAGUTWNPBRSNIJFFQOGEPKXYXLEJJIXRIHQMUXGHLQJBDARACXWUHQWKVUTBGVCTRYIHAUOUSAHLWEVRDFVESXYUEXDNOPDJKLBLPCNGJNLRCJFAOZYBSSTJODFYLACLINZWSDEPWFIK");
    msg.timeout = 52176U;
    msg.contents.assign("RFSMDJBLAXMZQEUUXXBNAXZYDVPBDXWLWZIGZGCYPRXSDNIIFPPCRWWJZKDVGQHMJNJNMPWCTQVILFLCWEIYHGUNIWHWSCUNIDDBBPPHJGQAHHGNNEXHBRLBUSGYSMLHBSEPRDRHAVKTEEXGOWJVFCUWVKGVYZAZMMFYVBSKOLOZCJCTTUEOKOVOAYJOIEUMAOKVRYJQKEXDSINDQTPAUSRAXYQMKHCKQ");

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
    msg.setTimeStamp(0.2914300662565513);
    msg.setSource(6633U);
    msg.setSourceEntity(41U);
    msg.setDestination(7322U);
    msg.setDestinationEntity(246U);
    msg.seq = 3279304420U;
    msg.destination.assign("WCNAWMLTEGLMTNKQTTRUUJJVZVAUEAXNENXOQBHZOSFPBFMSDBLXVTCMMKLWOIRNWSEIVAIDKFMUSLYKCFSPQXNJYOIYQWFLAQEOQCKJHKWQJZRLHBMROGNUFNAREYZIUJASYWWDPLEUWNBOSGXCIHGHDKFZPJGUYHHETKAIBVVAVVRMHZDIEZDYRFCZJDXHPRLGGZQGRQMFTXYJPPOSANPTEDXYJVKHISUTFLOGYBPUCMXIDCRVQPXC");
    msg.timeout = 22541U;
    const signed char tmp_msg_0[] = {112, 10, -100, -100, -122, -25, -36, 97, 87, -83, -20, -68, 19, 60, 42, 90, -82, -73, -90, -44, 81, -15, -119, -35, -28, -124, -83, 49, -106, 120, -104, -82, -76, -97, 41, -29, -121, 39, 114, 95, -31, -59, -6, -121, 37, -85, -89, -28, 67, -70, 48, 2, 5, 8, -87, -47, -33, -55, 85, -8, 8, 17, 28, 11, -118, -85, 45, 69, -7, -66, -52, -66, -35, -113, -62, 122, 106, 25, 53, 105, 75, -8, -34, -89, -86, -40, 76, 91, 61, 54, 50, -27, 48, -29, 111, -75, 57, 125, -25, 115, 35, -15, 68, -67, -101, -96, 12, -22, 94, -90, 91, 8, 10, 76, 58, 117, -108, 88, 22, -62, -66, 72, 99, -99, 18, 84, 39, -63, -107, 52, 17, 82, 3, 6, 53, 86, -80, 39, 115, -45, -6, -89, 77, -32, 65, -41, 114, 44, -32, 61, 32, 86, -7, -54, -26, -89, 109, -100, 30, 58, -75, 21, -28, 70, 39, -22, 69, -78, -61, 30, 81, 103, 34, -19, 11, -38, -61, -89, -93, -117, -113, -88, 32, -64, 67, 18, 111, -22, 52, 39, 119, 114, -57, 75, -127, 58, -8, -19, 116, 23, -78, 116, -56, -28, -42, -93, -94, -32, 1, 70, 122, 73, -37, -119, 18, -32, -74, -123, -59, 6, 125, -16, 100, 50, -83, 71, 69, 69, 91, 98, 11, 125, 61, 33, 46, -20, 119, 4, 102, 44, 1, -112, -116, 17, -43, -5, 34};
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
    msg.setTimeStamp(0.6612994783971401);
    msg.setSource(29840U);
    msg.setSourceEntity(92U);
    msg.setDestination(29883U);
    msg.setDestinationEntity(121U);
    msg.seq = 1733351978U;
    msg.destination.assign("JNWRDPMKQND");
    msg.timeout = 56976U;
    const signed char tmp_msg_0[] = {26, -64, 96, 14, 81, -6, 98, 25, -66, 33, -1, -93, -42, 58, -85, 58, 61, 2, 47, 92, 81, 111, 99, -57, 62, -112, -2, -76, 80, -40, 68, -103, 104, 1, -86, -14, -67, -1, -102, -9, -93, 112, -47, -114, 121, 81, -97, -122, -73, -115, -17, 36, -15, -41, -84, -39, 98, 12, -58, -119, 96, 57, 3, 88, -36, 85, -49, -21, -61, 3, -72, 73, -78, -105, -43, -40, -98, 121, -72, -9, -118, 82, 67, -29, -22, -23, 39, 30, 34, 124, -33, -51, 15, 6, 77, 5, 101, 90, 78, 6, 87, -49, 67, -2, -35, -44, -45, -108, -23, -6, -94, -63, -63, -61, 8, -43, 105, 43, -78, 84, -124, 121, 122, 48, 82, 7, 21, -114, 33, -1, -35};
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
    msg.setTimeStamp(0.2911615708725116);
    msg.setSource(47257U);
    msg.setSourceEntity(186U);
    msg.setDestination(39514U);
    msg.setDestinationEntity(174U);
    msg.seq = 4050604006U;
    msg.destination.assign("MZJUCOVYWFSEPFUTSGLRKJMFMZMRSKXTEGZGOBKQULHDPQWMOCDJXUYEIOVALDJCYEFUXQNXDOKBJUOIDNRUH");
    msg.timeout = 2605U;
    const signed char tmp_msg_0[] = {-81, -21, -42, -44, 39, -60, 19, -21, -84, 28, -10, -44, -11, 48, 122, -74, 81, -18, 24, -110, 75, -21, -28, 12, -39, -118, -21, 58, -107, -1, 66, 47, -19, 37, 70, -111, -82, -82, 57, 65};
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
    msg.setTimeStamp(0.9973668295991408);
    msg.setSource(56540U);
    msg.setSourceEntity(63U);
    msg.setDestination(39U);
    msg.setDestinationEntity(165U);
    msg.source.assign("WUDLHIBVRJRAAZLNGIUYWRHKKGOPTLHGOFDCYCDASYJJORGBZJEEG");
    const signed char tmp_msg_0[] = {-121, -29, 90, -111, 24, 24, 33, -16, -111, 85, 91, -95, 11, 99, -53, 112, -84, -31, 114, 126, 52, 30, -93, -20, 14, -101, 62, 81, 95, -124, -108, -10, -120, -106, -18, -40, -72, -65, 88, 43, 97, -92, 55, 119, 88, -90, 53, -50, 31, 47, -1, 31, 124, 83, -102, 43, 51, 54, 56, -113, -88, 7, 24, 84, -27, 70, -107, -101, -37, -118, 106, -116, -107, 24, 33, 79, -10, 89, -110, -62, -107, 120, -66, 81, 45, -6, 111, -12, 21, 24, -76, 50, 79, 85, 108, -76, -91, -35, -102, 62, -99, 62, 38, 91, -42, 47, -108, 92, 124, -76, -67, -38, 117, 10, -120, 47, 116, 82, -71, 76, -98, 14, -52, -93, 61, -13, -12, 93, 56, 114, -15, -50, -56, 102, 17, -46, 60, 75, 78, 71, 17, -114, 20, 103, -10, 38, -57, -20, -84, -51, -3, -76, -96, -1, 63, 118, -111, -79, 44, 20, 8, 91, -98, 8, -102, 121, 103, -92, 27, 103, 101, 85, 98, 10, 108, 6, -7, -85, -54};
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
    msg.setTimeStamp(0.46563244871969445);
    msg.setSource(57601U);
    msg.setSourceEntity(152U);
    msg.setDestination(49169U);
    msg.setDestinationEntity(209U);
    msg.source.assign("HJZXZCEFUBRMMCITHCEGIEKBNWFVPLKPIAQBTHGCPTRJDOLBSPRULKJRVKRXAMYHPORYBEUSRKGWDHOJTPEKLDYICCDMNFMYBBPZPAUTSWJGVDNWNYVFGATAVSJNWDCMDYTENOWIIOHKXUGTGIXACXYKJJUQJFRZMIOQQIHYVWSYOAOYFGOAMCFSQHZHNLENDWWHUXQP");
    const signed char tmp_msg_0[] = {45, 13, 37, -50, -84, 29, -67, 31, 70, -42, 126, -128, 26, 101, 67, 109, 23, 18, 21, 110, -102, 109, -14, -84, 22, -47, 48, 111, 93, -78, 111, -111, -43, 64, -43, 36, 120, -105, -107, 46, 35, 51, 46, -39, 87, 36, -117, 23, 44, -107, 15, 111, -51, 103, 87, 101, 109, 27, 95, -119, -122, 94, -91, 3, -109, -2, -77, -29, -15, 80, 14, 2, -57, -111, -8, -9, 105, -87, 95, -127, 36, 108, -98, -71, -3, 79, -62, -30, 68, -64, -92, 50, -7, -17, -37, -39, 52, 103, 41, -103, 44, -26, 107, -30, 36, 92, -106, -96, -53, 36, -32, -82, -12, 16, 117, -119, 5, -100, -75, -108, -97, -9, 98, 122, -84, 52, -21, 31, -125, 76, 34, 125, 117, -1, -113, -19, -113, 9, 106, 20, -45, -45, -65, -44, 3, 58, 106, -118, -31, 99, -124, -36, -87, 122, -68, 12, -30, -70, -77, 0, -50, 35, -109, 26, 119, 73, 42, 65, -67, -34, -56, -60, -108, 89, 126, -51, -113, 40, 72, 29, 0, 15, 78, -116, 42, -121, -72, -113, -38, 92, 25, -64, 74, -59, -86, -31, -80, -18, -30, 120, -118, -90, -21, 14, -79, 45, -74, 116, 108, -18, -44, 68, -6, -127, -89, -34, -5, -24, -60, -76, 57, -58, -3, 60, -65, 70, 72, -4, -61, -95, 18, -14, -96, -109};
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
    msg.setTimeStamp(0.8214578481813053);
    msg.setSource(55581U);
    msg.setSourceEntity(215U);
    msg.setDestination(1740U);
    msg.setDestinationEntity(192U);
    msg.source.assign("EIZOVLTFAZCILIBESZFYPZPTEWLJSPGPGZWJWQKSHLBOCLHHNUROYHERYFVRWUDMYAJSMNCHMREDQXDNVUKXZVZRJDBRKHAATQTCRUTUUATNWVENZQFPZNCDBRGKGDMCVXSDAOQZXUYJOHKJBNYWTKSCFKMPUFBBAAIIXCIGDLFWYGHVPMTWMAIRMN");
    const signed char tmp_msg_0[] = {-10, -27, 51, 58, 108, -47, 79, -92, -47, 90, -107, -83, 15, 99, -21, 94, 41, 52, 121, -91, -65, 77, 96, -38, 17, 66, -42, -3, -70};
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
    msg.setTimeStamp(0.9307019015668443);
    msg.setSource(50312U);
    msg.setSourceEntity(245U);
    msg.setDestination(40078U);
    msg.setDestinationEntity(164U);
    msg.seq = 1319255175U;
    msg.state = 230U;
    msg.error.assign("AYPXWKHURDZFIROTSVIKQVGENYMNECQJOTUSLFGECKGPYUZJUPQMGXASNXFJLHZABPMOQHQSHOLJXAWFXAQOLOUDCAFGFWHIPKWQULXJKDD");

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
    msg.setTimeStamp(0.27749438923152914);
    msg.setSource(23721U);
    msg.setSourceEntity(179U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(191U);
    msg.seq = 305871970U;
    msg.state = 50U;
    msg.error.assign("DANXMNWQPJNUDPTRHKMYYPXEKDXXSLXCOWDKZQKRKHACZBYIZVYGTUZKRKMBROOZWEKNHQWDOSCMFMRZHPNLVCDTVHHJQOASFOAYSTGXJZJ");

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
    msg.setTimeStamp(0.6533365591321945);
    msg.setSource(1830U);
    msg.setSourceEntity(42U);
    msg.setDestination(42252U);
    msg.setDestinationEntity(180U);
    msg.seq = 2080901863U;
    msg.state = 130U;
    msg.error.assign("QDNWGOVKIBEWPJCAGWBGZUYUIVEKQMOSXULPHRDEAGGREMFCXSXTWZQYSFRVJAKWTLGCQJPOTGXNUCBKIXYWEBAGVPBVDGDNAICWHUEHPZZILLDLQZLUHMFHVVRAJAFVPJHCJHBMNBNRNZ");

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
    msg.setTimeStamp(0.02674288436494654);
    msg.setSource(50506U);
    msg.setSourceEntity(149U);
    msg.setDestination(10939U);
    msg.setDestinationEntity(139U);
    msg.origin.assign("SMJTCYCVKGCTHUVMXN");
    msg.text.assign("ZVKHKKVPDVTHZONWFFWAOMPKYIGULPRFJBUTJPUAQSPVOSUMFJSFCEOBQLGYRYARPXEDORWXTXKDOAIFPXCFPCCGDGZQDINUZEBYEHUBKIWFNSZSSBQHGCSAQECLQJHDCOEMVLALQGZUAJYSRZYCTZMFWLMVDTHKEIZVFHVTADVGYTUNJENPMJOKRJNRKBGHAQIRIUOZG");

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
    msg.setTimeStamp(0.6648811260826784);
    msg.setSource(12339U);
    msg.setSourceEntity(46U);
    msg.setDestination(1025U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("QWKRMSSQISIYVPZSXYUAWGVLRIBMJAAAJXOSCTNUCZPHWHZWJHZAXSYVXUVBZXOACXGKSLLQDDHBPERCNVGKKWTDHETEZWCYKURAMRFPTDVJNKIKPHW");
    msg.text.assign("IVVCBEBRGTTADGWTEWCYQUAQPDLTXJYSKAXQDBZCPLDTJCDFXEFQTLNBOZOROHAICPVWJALHVGNKKKIIOOJIRXIAKDECEFVSMMBPKCRTJBSHXWYOFDPFHJPIBDEQSRMOSRFEGGAVQPMQNLUDMXMALEKLIZNK");

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
    msg.setTimeStamp(0.051025919132447806);
    msg.setSource(9344U);
    msg.setSourceEntity(23U);
    msg.setDestination(48743U);
    msg.setDestinationEntity(11U);
    msg.origin.assign("KHTZKDXEVOJOABCIMIQHHPLYPBPTYQESMJZLNSSIJRBVYVNIDGHDGMURUJWBBXETEZDCXEKQLFUACINVUTBHSWTKYBJJSQKGPWXEJFFQESEUAOYRNTKSZLCNVSTCVJXXORIULBAPMWMREZHNBLRVDAYCFCKSWDPICOROLWZGHGXNIVZMHOFPKZCDFLFDQQAKRPIXNTZWZVNGUYOAWWPUDAEOT");
    msg.text.assign("PYUGMAZHLAXIMKWZNBQVVZPCXBYVULEQQMKFSPTYVCVZJWXSSLJORGHBROUXMGXPRWMPIOPIPJDUNCIWJXXXNGZMXNVK");

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
    msg.setTimeStamp(0.14119312482591007);
    msg.setSource(4492U);
    msg.setSourceEntity(150U);
    msg.setDestination(63234U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("REXFWSOGWMPHGQQJDZLKYGVJIQKTKHEXNZBMTBUOD");
    msg.htime = 0.022504547947096887;
    msg.lat = 0.5345955112508374;
    msg.lon = 0.23684418659882445;
    const signed char tmp_msg_0[] = {-116, -114, 38, -117, -109, 46, -63, -82, -83, 63, -42, 81, 20, 73, -100, -22, 115, -116, 10, -73, 123, 43, 79, -117, 102, 0, 39, -31, 48, -4, -1, 76, -46, 97, 74, 86, 93, -99, 55, -83, -74, -128, 22, 17, -3, -89, -87, 22, -90, -52, -127, -89, 87, 69, -12, 23, -22, 94, 90, 90, -11, 4, 124, 86, 119, 79, 0, -23, -2, 121, 56, -110, -72, -97, -23, 20, 122, 28, 108, -70, 46, 38, 115, -126, -117, 44, -8};
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
    msg.setTimeStamp(0.5025471327943766);
    msg.setSource(36649U);
    msg.setSourceEntity(158U);
    msg.setDestination(62267U);
    msg.setDestinationEntity(168U);
    msg.origin.assign("OWTHNEOXIDTNLPPOGHFWCOJVWPYREQEBENCZGJUVAQNYDQYLFQEDUAMPJITYKJQVAVGQBIZUYFJJNGCALCRDYKBTKAPSRNWRXXCOGEVTAGCKZCZAUXLVFZDLVJMSRIRUSXMGXOXMMIAIZDLKTLBPKTEKVKWMOZKHTMBEAHCFXHAHCLRPSVWX");
    msg.htime = 0.9348965160307686;
    msg.lat = 0.13776101338385094;
    msg.lon = 0.5216675780002219;
    const signed char tmp_msg_0[] = {4, 60, -97, -60, -13, -58, -57, 116, 13, -121, 96, 123, 5, -112, 114, -44, -5, -61, 81, -46, 42, -44, 27, -104, -102, 6, 104, 104, -62, 4, -17, 12, 29, -51, 65, -18, -127, -27, -100, -58, 78, -63, 121, -82, -107, 69, -80, 35, -100, -73, 124, -43, -117, 32, -81, 112, 120, -110, -4, -103, -102, -43, 119, -78, 43, -83, -67, 21, 117, 73, 99, 58, 124, 51};
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
    msg.setTimeStamp(0.5902825692644612);
    msg.setSource(61605U);
    msg.setSourceEntity(11U);
    msg.setDestination(52033U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("RTNXSCUQJHPALEFVDFHZWIOKIASIDIRLOFUUZSMFUAXWJGSKDIBFHMZEIHWRSTNWOKJKHQNDQDHGYTCXCPIEVCBVWTQHUCDQTSORKOMJYNJPWZOXGHZGSPXNUQBRBGLVYAXAUUAMGDSAPZRTZLFLRBVB");
    msg.htime = 0.8427992018878504;
    msg.lat = 0.24032072245734426;
    msg.lon = 0.9283320186734134;
    const signed char tmp_msg_0[] = {-14, 125, -38, -103, -34, -76, 97, 10, 39, 99, -77, -18, -45, 32, 113, 34, -106, -4, -55, 44, -123, 91, 86, -9, -126, 102, -75, 0, 96, -4, 38, -46, -125, 77, 106, -9, -121, 5, -16, 90, 103, -38, -56, 95, 67, -96, 9, 16, 99, 21, -122, -23, 35, 10, -127, -3, -28, -50, 98, 49, -79, 59, 5, 116, 110, -3, 19, 108, -109, 14, 108, -87, -122, -58, 100, 102, 1, -66, -98, -89};
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
    msg.setTimeStamp(0.696776554126043);
    msg.setSource(30093U);
    msg.setSourceEntity(253U);
    msg.setDestination(24646U);
    msg.setDestinationEntity(213U);
    msg.req_id = 47289U;
    msg.ttl = 17737U;
    msg.destination.assign("LJNIYGCLHNLPR");
    const signed char tmp_msg_0[] = {5, 125, 76, -93, 82, -32, 26, 30, -125, 117, 98, -74, 122, -110, 22, -30, 63, 13, -35};
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
    msg.setTimeStamp(0.145160222966765);
    msg.setSource(11923U);
    msg.setSourceEntity(114U);
    msg.setDestination(49567U);
    msg.setDestinationEntity(95U);
    msg.req_id = 34945U;
    msg.ttl = 28650U;
    msg.destination.assign("UJZEPDPHFVPPLAKVKZMPMISFIUDFRTWBBACYMWEJPTFWPGFKWKTSJLDUXXBLXRDIGDYMJYIHDZRQEBSAJMNMJVHXSUEMGAVRXSBJDMVJCLTEGLYTWBGNWWNCPACTQWVRSWOULVIVZSUKOOWCFHBUIHGEDNNJZXGCMFQTHTGBRPNYOKYZLQYADEEJQOHUASOQXRQEYBCALZQDUVY");
    const signed char tmp_msg_0[] = {-24, 112, -35, 18, 87, 72, -106, -14, -52, -104, 38, -107, 80, -38, -62, 58, 20, 111, -113, 24, 8, 60, -2, -27, 89, 45, -53, 1, -19, -38, -19, 122, 73, -47, -83, -90, 79, -52, 124};
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
    msg.setTimeStamp(0.563744919613933);
    msg.setSource(56350U);
    msg.setSourceEntity(88U);
    msg.setDestination(13329U);
    msg.setDestinationEntity(252U);
    msg.req_id = 64075U;
    msg.ttl = 52350U;
    msg.destination.assign("PMZSPHMXWHBDXEECNYJLITNBDSRUAAHRPVSFYUNRJQHXDLDWJDICSQKIGCMIVLKQRDGVLFJIDSKXCOJMBVHSJMUYEZADZSAYRYERIZFMMMNKNOXFXFEVGYKZBLHWWGNLBQOZZTVTOJAAJUDKETGZUNAVUCLWRFKYMBTPECWIQUSIUBCQRPKCQZLOSJMFYEXBHAOTRV");
    const signed char tmp_msg_0[] = {7, -68, -65, 106, -87, -68, -109, -62, -16, 87, 109, 74, -125, -10, 55, -6, -33, -30, 99, -125, -62, -29, -86, -6, 60, 44, -16, 48, -110, 61, -68, -40, -26, -10, -123, -111, 79, 50, -44, 126, 16, -95, -25, -102, 25, -34, 72, -111, -119, -25, 114, 85, -53, -24, -64, 3, -45, -6, 97, -12, -38, 36, -7, 6, -61, -116, -109, 98, -89, 11, 62, -100, -31, 99, 93, 34, -48, 122, -116, 6, -128, 113, 103, -72, 100, 81, -11, 120, 3, 112, 101, 100, 78, 89, -53, -8, -124, -48, 92, 74, 6, -16, 22, -57, 78, 63, 59, -69, -66, -28, 122, -125, 43, 60, -73, 108, 104, 38, -106, 4, -24, -27, -75, 6, -24, 32, -103, 71, 2, -79, -94, 1, -117, 59, -58, 61, 41, -8, -94, -95, -80, 101, -121, 48, -55, 78, -95, -102, 44, -81, 72, -70, 42, -84, 108, -105, -77, 34, -105, -15, 61, -18, 36, -82, 32, 84, 69, -117, 124, -118, -124, -85, 104, -113, 10, 59, 90, 51, 48, 42, -71, -41, -90, 23, 99, 111, -13, -94, -17, -72};
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
    msg.setTimeStamp(0.6449780062211665);
    msg.setSource(16261U);
    msg.setSourceEntity(141U);
    msg.setDestination(1649U);
    msg.setDestinationEntity(97U);
    msg.req_id = 31166U;
    msg.status = 66U;
    msg.text.assign("TOTHEESJGIZCEQERUQAXLZVXTOACKHDSYCFMABERWHYIPLQULXAQICGFFHJLWASDPTAMKCNOZYXOQLEPVWVGXGMRJPFAKVWWHRG");

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
    msg.setTimeStamp(0.31882842352229357);
    msg.setSource(16944U);
    msg.setSourceEntity(207U);
    msg.setDestination(27987U);
    msg.setDestinationEntity(84U);
    msg.req_id = 63208U;
    msg.status = 92U;
    msg.text.assign("KIZEPXZGEMNQWSJNXGTFEZAUAYUKBSDYTGZOIRQROXNXVZTAGAGTNCETZJOJLMQQOHBLVDQBNCDSNGUEJEHPYVCGIEKMBBSDPVWRSXNPDHFVIRFMWFXSGULVAATVCFLQHLIXYBUJUILOLMOPJHYOILODSKQDCESYIEHCRSTRAWLYKFZBJIONPWXEFUZRTSPUTMQYKWZFUDHBPRIMVUZMHXCJCVCWMDKNCWLPHFQQNOYPHADVYWKXBARKMJ");

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
    msg.setTimeStamp(0.9058993049562134);
    msg.setSource(21710U);
    msg.setSourceEntity(155U);
    msg.setDestination(8055U);
    msg.setDestinationEntity(156U);
    msg.req_id = 37161U;
    msg.status = 0U;
    msg.text.assign("ELEZVJRCIGLMUCKZOLXHPHPAAYOJJEVXCCSDNVKUKROKGWGIKBMZUUKPONUTGNCBRRJSBTQWWHRXWKJFLYZGWYIGWIJTLWCEXSGUZIBPXLRQSJMADOSIFPHYTOLYHVBBZWTKTYRCCAGLDHQINTRRKFHEVUYMEYNHPZQGBPNMAZANSPEMIZRQLVQFQDQODADXUFZMMXVINHPIGMSEDAQPDNFWJS");

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
    msg.setTimeStamp(0.7611267847645317);
    msg.setSource(10784U);
    msg.setSourceEntity(208U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("POLXCWFXNOLQSYBBEWFYPWJBWIADFXAVKTCFPNWOJHIYVXRHKDBLNMUIDDISSGTMPUGGUHOZMRVEZVQJLAIBDIYBGZWQMKMXPFFFJNKQPQHNZFDTHCIFEBYSLPBOMMQGRQIDLJVGLCLIXYTROETODEMQYCKAGJCHQYDNBYHNPQRWNCOXAUITGRTPVMKKATUWBOSRZVKSJUSUWLSYDSHOXECUVNFXEJVJLSTEZHT");
    msg.links = 955498262U;

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
    msg.setTimeStamp(0.17030149325430222);
    msg.setSource(12328U);
    msg.setSourceEntity(166U);
    msg.setDestination(54049U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("JBBQYRFMHRLFHTXFNRZXHHNS");
    msg.links = 1113036348U;

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
    msg.setTimeStamp(0.6187038717218583);
    msg.setSource(32816U);
    msg.setSourceEntity(120U);
    msg.setDestination(17482U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("OUFCEHQIJJHPEENKWVQYNMGHBDMTYGAIZEADJOVNVGLLRAWTKWZCQJSMMPUXLSGNQVTZBTUEYNGOBBKHHTAKVMYOLXKAOCRKDXWSFWLSJMFPKIUSFUORFSXIXESGQLDERHSQVRCBQCLAUPUJACBTPNLYOXEGFYVQLWOBEXXIKFDJYOCONDDCJTPCTTPVHEAQIRYRGNSBDWMTMRGZXFDZRYFJVIFGIPLVK");
    msg.links = 969303265U;

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
    msg.setTimeStamp(0.9561123724473439);
    msg.setSource(5183U);
    msg.setSourceEntity(38U);
    msg.setDestination(36331U);
    msg.setDestinationEntity(254U);
    msg.groupname.assign("IHYVDXTYPNONXQVPGHLSKZEMVYRTVQMKZVOKSFVOAZIOLFXGWTIUCSWUFPYMJHHSGMUWIJUINGLZXQEVEKAKAQUPRABHAGITEZGNLQKHAXDDBLIMFZRYPQCANRVZPZYXMGEGBDMTJSOJRNPONMYKKZVXDXQGXCWWFTYTSRLFHFWHDTEWCURBOIIWINCRMEYSDEFUYHZEJUOOPBTHDBTOVAACQFWJPRBAQMCLCFBPCDLRSJESCUUKGQBD");
    msg.action = 121U;
    msg.grouplist.assign("NSNELZPZYXKXAARDOMRSEARQXZXOHWQCJGORTCXZUFGWIILESLTXQOYSNJQHVWEBZTDULMBPFPHIGHTVAZWJJ");

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
    msg.setTimeStamp(0.15312485494518535);
    msg.setSource(35690U);
    msg.setSourceEntity(88U);
    msg.setDestination(15137U);
    msg.setDestinationEntity(42U);
    msg.groupname.assign("ZERXRLXINCKAXRSOYFPCZJCKAZYXYCGZUZIOZAOOYPWHEHEAEM");
    msg.action = 185U;
    msg.grouplist.assign("OVMSIIQCUOCSUODGWTEKAMVXCHNTUIMKVWIEYJBOIWJQIEKTEPLARGAFWTKRBBAZJNSUFLRCJPAKSVUUXISHBYDKSQMDBFQKLNXHHPWCSQGLCEIRRDLB");

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
    msg.setTimeStamp(0.3291481558687339);
    msg.setSource(15328U);
    msg.setSourceEntity(155U);
    msg.setDestination(58179U);
    msg.setDestinationEntity(29U);
    msg.groupname.assign("BFDQGROZICLJKXGFDLPNVZHTQARSMCDAGVWUPHVMFSPUNXMGMPEMRKVMNSUFISXRAJBHUBCYLTKAGPZYVELRDJCUWOYKHHKJPOELUWEITOJCHONHDQRJEOSZBLAHYUMZWIFIZFBQCSWDYNTLCPENDQECNDFXB");
    msg.action = 49U;
    msg.grouplist.assign("NJSSQHKFLCECOWQPCWLINSQG");

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
    msg.setTimeStamp(0.42037701884022616);
    msg.setSource(20937U);
    msg.setSourceEntity(144U);
    msg.setDestination(38285U);
    msg.setDestinationEntity(53U);
    msg.value = 0.8981452354250746;
    msg.sys_src = 27974U;

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
    msg.setTimeStamp(0.12581980734440668);
    msg.setSource(19008U);
    msg.setSourceEntity(38U);
    msg.setDestination(23603U);
    msg.setDestinationEntity(162U);
    msg.value = 0.9760735649804491;
    msg.sys_src = 5905U;

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
    msg.setTimeStamp(0.7923576297915593);
    msg.setSource(56944U);
    msg.setSourceEntity(2U);
    msg.setDestination(3636U);
    msg.setDestinationEntity(86U);
    msg.value = 0.14728094942992165;
    msg.sys_src = 7886U;

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
    msg.setTimeStamp(0.07392484339279237);
    msg.setSource(35221U);
    msg.setSourceEntity(69U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(178U);
    msg.value = 0.98129529078267;
    msg.units = 38U;

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
    msg.setTimeStamp(0.5162940751438498);
    msg.setSource(9055U);
    msg.setSourceEntity(169U);
    msg.setDestination(49652U);
    msg.setDestinationEntity(141U);
    msg.value = 0.43892085842912865;
    msg.units = 218U;

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
    msg.setTimeStamp(0.05561584777360451);
    msg.setSource(12165U);
    msg.setSourceEntity(244U);
    msg.setDestination(12729U);
    msg.setDestinationEntity(71U);
    msg.value = 0.4569258214419485;
    msg.units = 170U;

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
    msg.setTimeStamp(0.812437447372215);
    msg.setSource(44283U);
    msg.setSourceEntity(94U);
    msg.setDestination(33869U);
    msg.setDestinationEntity(230U);
    msg.base_lat = 0.6131879491161107;
    msg.base_lon = 0.014020799914894133;
    msg.base_time = 0.46694552544065415;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 27609U;
    tmp_msg_0.destination = 50496U;
    tmp_msg_0.timeout = 0.5559042375676326;
    IMC::HistoricTelemetry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.altitude = 0.2481838438268037;
    tmp_tmp_msg_0_0.roll = 38423U;
    tmp_tmp_msg_0_0.pitch = 35540U;
    tmp_tmp_msg_0_0.yaw = 50275U;
    tmp_tmp_msg_0_0.speed = 9004;
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
    msg.setTimeStamp(0.942538792124617);
    msg.setSource(18675U);
    msg.setSourceEntity(155U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(142U);
    msg.base_lat = 0.6228302658086675;
    msg.base_lon = 0.12104330798311214;
    msg.base_time = 0.23803175728795933;

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
    msg.setTimeStamp(0.1524708179453219);
    msg.setSource(2012U);
    msg.setSourceEntity(171U);
    msg.setDestination(21792U);
    msg.setDestinationEntity(202U);
    msg.base_lat = 0.06609149288293314;
    msg.base_lon = 0.7948094292663783;
    msg.base_time = 0.16263851110296923;

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
    msg.setTimeStamp(0.1627425205665124);
    msg.setSource(40269U);
    msg.setSourceEntity(117U);
    msg.setDestination(35423U);
    msg.setDestinationEntity(250U);
    msg.base_lat = 0.09226301948911009;
    msg.base_lon = 0.3517895456751484;
    msg.base_time = 0.20351228523098375;
    const signed char tmp_msg_0[] = {-24, -81, -62, 43, -46, -65, -85, 45, 82, 19, -89, 73, 81, -64, -70, -62, -121, -83, -2, -49, -26, -80, 45, -127, 56, -65, 88, -99, -69, -70};
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
    msg.setTimeStamp(0.5719281568319372);
    msg.setSource(22495U);
    msg.setSourceEntity(104U);
    msg.setDestination(988U);
    msg.setDestinationEntity(42U);
    msg.base_lat = 0.9687340739207936;
    msg.base_lon = 0.3872924092782888;
    msg.base_time = 0.1908513632955774;
    const signed char tmp_msg_0[] = {1, -123, -23, 119, 25, 19, 78, 107, 41, -52, -28, -96, 102, 64, -93, 56, -58, -90, -73, 30, 111, 6, 32, 18, -59, 20, 38, 26, -24, 19, 0, 35, -92, 69, -24, 99, -121, 31, -28, -70, 124, -20, 91, 62, -24, 0, -89, 83, 39, 121, -44, -35, -97, -85, -73, -49, -99, 60, -6, -91, -92, 72, 46};
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
    msg.setTimeStamp(0.5883104035149878);
    msg.setSource(50516U);
    msg.setSourceEntity(250U);
    msg.setDestination(26149U);
    msg.setDestinationEntity(170U);
    msg.base_lat = 0.18363648243858766;
    msg.base_lon = 0.3573617743800921;
    msg.base_time = 0.6573808133559738;
    const signed char tmp_msg_0[] = {-8, 93, 45, -110, -50, -119, -75, -88, 83, 10, 31, 41, -127, 29, 42, -9, 29, 74, 119, -94, 29, 109, 42, 79, -54, 100, -58, -81, -100, -89, 58, -126, -31, -93, -116, -25, -89, 81, 91, 49, 32, 122, 19, -51, -23, 31, -112, 5, 2, -97, 115, -5, 86, 121, 79, -13, -75, -72, -84, 23, -57, 26, 82, -39, 37, -23, -69, -122, 73, 2, -56, -122, -106, 4, 22, 57, 106, -28, -11, 109, 8, 10, 9, -62, -123, 27, -113, -35, -29, 89, 5, -98, 14, -94, -89, 114, -50, -108, -93, 10, -74, -96, -27, -128, -116, -79, -36, -27, -28, 63, 92, -75, -57, -102, -66, -93, 78, 92, 56, -34, -122, -24, -102, -55, 34, -21, -34, 54, -50, -96, 109, 75, -15, 115, -57, -27, 27, -64, 89, 13, -96, 57, -27, 87, -127, 107, 46, -120, -86, 50, 73, -79, -85, -91, 58, 24, 24, 2, 67, 100, -52, 60, -115, -93, 109, -88, -29, 62, -12, -70, -91, 118, -13, 87, 82, 2, -53, 44, 111, -35, -66, 2, 79, 40, 110, -33, 79, 55, -50, -53, 8, -47, 41, 50, 58, 51, -62, 100, 16, -42, 8, -84, -115, -111, 63, -31, 3, -66, -6, 99};
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
    msg.setTimeStamp(0.37158838107114334);
    msg.setSource(57937U);
    msg.setSourceEntity(156U);
    msg.setDestination(25700U);
    msg.setDestinationEntity(100U);
    msg.sys_id = 3621U;
    msg.priority = 79;
    msg.x = -32713;
    msg.y = -21650;
    msg.z = -22473;
    msg.t = 21081;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2967716629U;
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
    msg.setTimeStamp(0.10260282177978375);
    msg.setSource(43270U);
    msg.setSourceEntity(232U);
    msg.setDestination(33545U);
    msg.setDestinationEntity(41U);
    msg.sys_id = 37615U;
    msg.priority = 77;
    msg.x = 19256;
    msg.y = -16877;
    msg.z = 2457;
    msg.t = -29982;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 40821U;
    tmp_msg_0.flags = 215U;
    tmp_msg_0.lat = 0.8565889992830295;
    tmp_msg_0.lon = 0.5138104992137268;
    tmp_msg_0.start_z = 0.5450772897007058;
    tmp_msg_0.start_z_units = 223U;
    tmp_msg_0.end_z = 0.3991851885340687;
    tmp_msg_0.end_z_units = 169U;
    tmp_msg_0.radius = 0.9890215168562823;
    tmp_msg_0.speed = 0.6713393219033879;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.custom.assign("PYYRBFQZHSNHKUTKMCRDEOJDBULBJSLKTCTZKFNZNHONXOPRDYYNBEPGQEWZIKJFVEGIZSLVCJSKYTCPBYHQIQPAULJTZPOUNLQIHRAXJOZWIGPSOIAWLMKLVEYZZMGDSXQBWULNEUCBYKQAMNTLCFXDOEBUOMPXITRAVRCSXCODFHVPWISCDTFYVHUKQOVXQQYCGPAMFWEBFDIWSXRFTVGJWHGFNKGRJZVAAXHH");
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
    msg.setTimeStamp(0.704252866102495);
    msg.setSource(4466U);
    msg.setSourceEntity(201U);
    msg.setDestination(54436U);
    msg.setDestinationEntity(160U);
    msg.sys_id = 51667U;
    msg.priority = 54;
    msg.x = 18695;
    msg.y = -6616;
    msg.z = -28918;
    msg.t = 4944;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("FSRNCAOOSVMCXNEKMXKSQIEIXSSMMELOPSDMGLFKJMVFLDYSZDNSBRRC");
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
    msg.setTimeStamp(0.5073344762192784);
    msg.setSource(25173U);
    msg.setSourceEntity(208U);
    msg.setDestination(29831U);
    msg.setDestinationEntity(140U);
    msg.req_id = 56899U;
    msg.type = 9U;
    msg.max_size = 26942U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8668844809448146;
    tmp_msg_0.base_lon = 0.4634580255717613;
    tmp_msg_0.base_time = 0.7843416193055333;
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
    msg.setTimeStamp(0.36511942918580065);
    msg.setSource(13036U);
    msg.setSourceEntity(40U);
    msg.setDestination(56870U);
    msg.setDestinationEntity(164U);
    msg.req_id = 61359U;
    msg.type = 144U;
    msg.max_size = 42163U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.49060619511548753;
    tmp_msg_0.base_lon = 0.4173932350129117;
    tmp_msg_0.base_time = 0.8231807334943517;
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
    msg.setTimeStamp(0.5472734936703135);
    msg.setSource(33013U);
    msg.setSourceEntity(93U);
    msg.setDestination(61111U);
    msg.setDestinationEntity(202U);
    msg.req_id = 14605U;
    msg.type = 73U;
    msg.max_size = 9870U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9935746604828005;
    tmp_msg_0.base_lon = 0.6985432656615311;
    tmp_msg_0.base_time = 0.7215592659800819;
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
    msg.setTimeStamp(0.21369698005707738);
    msg.setSource(31233U);
    msg.setSourceEntity(199U);
    msg.setDestination(21665U);
    msg.setDestinationEntity(3U);
    msg.original_source = 54834U;
    msg.destination = 37531U;
    msg.timeout = 0.3086589345515567;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.17157918049620813;
    tmp_msg_0.lon = 0.27730321641983036;
    tmp_msg_0.z = 0.8673162335732225;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.speed = 0.7940634749883472;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.takeoff_pitch = 0.8437532331218784;
    tmp_msg_0.custom.assign("JRNCGVBXZUNJSBTRLCICBKPCAADPCTQKSLIGAPHCHNZKQFMLYSNBBUJJVYJYCNHD");
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
    msg.setTimeStamp(0.7325135145581813);
    msg.setSource(39415U);
    msg.setSourceEntity(84U);
    msg.setDestination(27229U);
    msg.setDestinationEntity(117U);
    msg.original_source = 33629U;
    msg.destination = 30150U;
    msg.timeout = 0.2464120443221487;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.9589253079976777;
    tmp_msg_0.confidence = 0.8992765307780792;
    tmp_msg_0.opmodes.assign("FIUEYBPRXCIHWKTBCXDNVMPYNPGXXXGOAWIBFAPFCZPOTVXTIAMQHBVNWXEYVMHEOKHJTLHLNQZWMQYMURYWMLWQUNBJYQDGDHPGCJSETRKDTUERSPUDPHSNDWSNCCRVZDHZRJFEZABSLSYVZFDMSUUAKKCECMISKVTIFHORNVJGIYGEWOEGWAUPTMKQJALQVDUYFIOTZWLMIKBHCPLEVSULLJJ");
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
    msg.setTimeStamp(0.8698212232059958);
    msg.setSource(19792U);
    msg.setSourceEntity(243U);
    msg.setDestination(62160U);
    msg.setDestinationEntity(111U);
    msg.original_source = 24712U;
    msg.destination = 4512U;
    msg.timeout = 0.853220088997411;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 43518U;
    tmp_msg_0.rpm = 0.7732994714738262;
    tmp_msg_0.direction = 93U;
    tmp_msg_0.custom.assign("IMHBLYGCKXEAXNGMLTOSZYTYMPEMVAIYXWNLSUGVLUVDNSDUNVBOVNMFGPNWSNTUCZIPZZQATKKXASINZMCGQWKLE");
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
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.28215735031503075);
    msg.setSource(38135U);
    msg.setSourceEntity(28U);
    msg.setDestination(59316U);
    msg.setDestinationEntity(80U);
    msg.type = 177U;
    msg.comm_interface = 18623U;
    msg.model = 49366U;
    msg.list.assign("TITBZTRFVGNVUVZUYNDFBQLXOXOAQXPJRCAUAFYPMQCPBHNOPZUXTDYFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.7172026271047842);
    msg.setSource(2171U);
    msg.setSourceEntity(133U);
    msg.setDestination(24127U);
    msg.setDestinationEntity(134U);
    msg.type = 130U;
    msg.comm_interface = 31432U;
    msg.model = 61894U;
    msg.list.assign("MZRWKVZYBZLQJCARURPLSXKBOHBTNUDTJQLGDMVWBPYAQCXJUIZRZVSZOIBEFEVVBSPNSHULMEAKFMISSRXFCNNFGTTALMXSRRAOWMMYPJPGFDCHCTNEPLQUEHKSOECWEWTRCMSGXTVIJYDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.865823646923308);
    msg.setSource(60278U);
    msg.setSourceEntity(222U);
    msg.setDestination(40158U);
    msg.setDestinationEntity(112U);
    msg.type = 204U;
    msg.comm_interface = 63624U;
    msg.model = 22896U;
    msg.list.assign("RWYTMAQBMNYOGXMIWCMHTXXWZCIPOKTVQEDERLTJSGECZWKWGDNYZJFIDXBRGKWISVDVYDHJUFFIHNYVCXMPTMNEURGAYBFQNVPAIPNWXRIXMABPFBNLABF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.076516569906106);
    msg.setSource(60131U);
    msg.setSourceEntity(206U);
    msg.setDestination(44279U);
    msg.setDestinationEntity(137U);
    msg.type = 208U;
    msg.req_id = 347613024U;
    msg.ttl = 29224U;
    msg.code = 110U;
    msg.destination.assign("YPFYCWHFJQXFCAPJEBWSDNEOLKULDIFMZGDACPKCHSKTREHVTCFLOXOURFJOBJZJAQVNMVXWQQKSSYTZVLHSDU");
    msg.source.assign("HQGJCRWDPAKAUFMBVOJJIYWEEDZNBLKOGNFWFAEWTVENCHYTZPPXKORISSGKGBSDYNGSEBTNCYPIWQSBLHVTQATZJYYRZVVKCOMYMXPZFDXSAJNZMZLUKOCNYPDHGHWJPCKJBDMNMQULCVQHTOJWVJFLRCXLXUPXHKFI");
    msg.acknowledge = 206U;
    msg.status = 164U;
    const signed char tmp_msg_0[] = {-25, -64, 57, -37, -44, -123, -120, 61, -44, -23, -78, -63, -85, 8, -73, 97, 0, 55, -74, -6, -5, 52, 52, 95, 86, 24, 39, -1, -74, -14, -114, 62, 112, 16, -70, 38, 65, 86, -25, -105, -62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.7294169533142353);
    msg.setSource(54571U);
    msg.setSourceEntity(127U);
    msg.setDestination(28039U);
    msg.setDestinationEntity(63U);
    msg.type = 83U;
    msg.req_id = 2860689424U;
    msg.ttl = 41806U;
    msg.code = 27U;
    msg.destination.assign("OEMMJGKXJOKCOIQDNRTDCERCYZQKFKQMHUHZWZUNAEETEHJHECTPUPZBCINBMYTEMALMYQCQQDNAXFJQFGXBGAYVLRLCIGOKMJWRSXGAJPWSXVTLFOUFOYRUEXHGCSVJLHBINWLPLKIWJYOXBQDHKBPLEAWAVAVTAYWNLZXF");
    msg.source.assign("TMHGTSUVAVBNYZOYCTUYKBMKNXXLUIQVWZGABWRBQZGUA");
    msg.acknowledge = 229U;
    msg.status = 40U;
    const signed char tmp_msg_0[] = {-72, -98, 33, -76, -18, -112, 24, -18, -125, 59, 101, -112, -62, -86, 49, 56, -34, -36, 69, -47, 96, -46, 45, 37, 62, -42, -102, 50, -78, -125, -34, 24, -85, -83, -5, -122, 72, -59, 124, 25, 55, 16, -40, -38, 32, -91, -97, 116, -94, 118, 11, -109, 54, -40, 121, 7, 121, -50, -90, 100, 12, -45, -96, -86, -72, 91, 48, -60, -33, -94, 34, 23, -116, 120, -49, -57, 63, 40, 67, -38, -40, 78, 1, -24, -49, -78, 88, -50, 23, 92, -69, -25, -127, 60, -118, 2, -25, 26, 101, 77, -14, -26, 24, -44, -105, -112, -5, 53, -128, -23, 64, -122, -21, -58, -92, 121, -81, -105, -32, -65, 74, -92, 9, 50, 107, -20, 10, -101, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.8048096091424933);
    msg.setSource(24072U);
    msg.setSourceEntity(249U);
    msg.setDestination(31247U);
    msg.setDestinationEntity(29U);
    msg.type = 168U;
    msg.req_id = 3127593212U;
    msg.ttl = 22691U;
    msg.code = 1U;
    msg.destination.assign("MJURUQQGNNPIODZBGOIDXADIPLKFWYDQLRVKSYWPZFVZXLATCFDBYCUHTKNWBHLPYEWEEEGVXUYMNVXOVJEQWRJOTKCBZ");
    msg.source.assign("DKQNQXHYJVHSIASQKQIEZVUBMVTGXDMIBDXLUPNFRGYMQYFXJTZOYSHAPOTRVSCVFUHBNBULJWSVRZNFKWYATKKNWQXCLZCURJDHZSCHMEGPQLEBMNZUFMDOCALKFCIECRPAVENUJIUJLLDKZIWGFPUKREBHYEWQDPTSCXRTOUIJFIWXPNTLGEIAPOHWNTRGSOQXFVGBWVJEWSRMHTDCXOBQAASC");
    msg.acknowledge = 84U;
    msg.status = 232U;
    const signed char tmp_msg_0[] = {77, 18, -47, -17, -26, 88, 18, 86, 85, 38, -38, 98, 19, 95, -72, 80, 88, 44, 65, 34, 50, 82, 104, -84, 53, -28, 91, 72, -107, -124, 71, -93, -24, 81, 74, -75, -71, 126, 15, -64, -4, 52, 80, 99, 26, 86, 56, -9, 85, -124, -118, -74, -52, 56, -43, -56, 34, -105, -32, -52, -41, 9, -106, 124, -2, -22, 119, 33, -68, -118, 112, -7, 117, -13, 32, -113, 68, -14, 117, 67, 72, -102, 97, -126, -123, 118, -9, -83, 49, 116, 25, 123, -127, 29, -103, -38, 78, 17, 122, 38, -31, 101, -38, 72, -31, 90, -37, -50, 17, 97, -15, 112, 64, -77, -52, 97, -64, -7, 23, 37, 3, -94, 117, -50, 48, 58, -3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
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
    msg.setTimeStamp(0.1988466789545401);
    msg.setSource(31995U);
    msg.setSourceEntity(140U);
    msg.setDestination(13334U);
    msg.setDestinationEntity(186U);
    msg.id = 207U;
    msg.range = 0.6685056268735736;

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
    msg.setTimeStamp(0.829805956769782);
    msg.setSource(34324U);
    msg.setSourceEntity(104U);
    msg.setDestination(36863U);
    msg.setDestinationEntity(113U);
    msg.id = 55U;
    msg.range = 0.19778521516052028;

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
    msg.setTimeStamp(0.36905740254200425);
    msg.setSource(22697U);
    msg.setSourceEntity(164U);
    msg.setDestination(20239U);
    msg.setDestinationEntity(107U);
    msg.id = 169U;
    msg.range = 0.7782873916385776;

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
    msg.setTimeStamp(0.6372956665039184);
    msg.setSource(50952U);
    msg.setSourceEntity(131U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(62U);
    msg.beacon.assign("PVCLBAKXHXEFIECDUBBJOGSRMTQPZTUQVXHBNMTWPDVXJDWADIHMEJMZKUFOEFAVCZWYGIVLKDWBOOZOI");
    msg.lat = 0.8327959235339648;
    msg.lon = 0.8441489834501994;
    msg.depth = 0.13393395046733192;
    msg.query_channel = 163U;
    msg.reply_channel = 12U;
    msg.transponder_delay = 67U;

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
    msg.setTimeStamp(0.49425568682865517);
    msg.setSource(35097U);
    msg.setSourceEntity(202U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(44U);
    msg.beacon.assign("WHWZKTYMSKZFTPIEHEMFTSQOLTXTNFTXUQAOXZDGDVYGGMAXVVXDXVYFNKMIHRPUBZNEGDLRLUPDAITOAUVGKZRAJCASCMUSVSI");
    msg.lat = 0.8993879598060852;
    msg.lon = 0.760882277930424;
    msg.depth = 0.7695791400918115;
    msg.query_channel = 24U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 43U;

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
    msg.setTimeStamp(0.8072195129362205);
    msg.setSource(26068U);
    msg.setSourceEntity(61U);
    msg.setDestination(34501U);
    msg.setDestinationEntity(110U);
    msg.beacon.assign("JBFMZQKQSQIFHKQNAJGYGIUUTNIHCLKFHODEWRJRXIUMEFNYQRAOGNWJQQMVHYCBLTCSHNHHWZXKXQTFSDPDBLMUZABG");
    msg.lat = 0.7036302625695953;
    msg.lon = 0.48353367613035925;
    msg.depth = 0.7933000008879681;
    msg.query_channel = 32U;
    msg.reply_channel = 169U;
    msg.transponder_delay = 57U;

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
    msg.setTimeStamp(0.06825549837661982);
    msg.setSource(6853U);
    msg.setSourceEntity(70U);
    msg.setDestination(47894U);
    msg.setDestinationEntity(63U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.0513768058110069);
    msg.setSource(15141U);
    msg.setSourceEntity(117U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(92U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.9755356061825109);
    msg.setSource(26591U);
    msg.setSourceEntity(36U);
    msg.setDestination(16991U);
    msg.setDestinationEntity(207U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.4042832332592272);
    msg.setSource(37741U);
    msg.setSourceEntity(76U);
    msg.setDestination(13942U);
    msg.setDestinationEntity(26U);
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 41500U;
    tmp_msg_0.avg = 0.5830863807681501;
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
    msg.setTimeStamp(0.6624300738381593);
    msg.setSource(32065U);
    msg.setSourceEntity(123U);
    msg.setDestination(56180U);
    msg.setDestinationEntity(5U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.08205628427053524;
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
    msg.setTimeStamp(0.9456201416360819);
    msg.setSource(36520U);
    msg.setSourceEntity(107U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(148U);
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.3965602139425295;
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.5308773216796573);
    msg.setSource(29628U);
    msg.setSourceEntity(22U);
    msg.setDestination(47591U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.8434544363816637;
    msg.lon = 0.7649545961551526;
    msg.depth = 0.06850345029600358;
    msg.sentence.assign("QPDQMJTHPQDJZNOYDTIEUOQWEBUTSDYAVCCPK");
    msg.txtime = 0.42693866536973724;
    msg.modem_type.assign("BTBXKGXBQFWZEWJKRCNSSLNQMYAGQNILUXQRLXFRKVIMKFAOTMVPUQLKGFWZLJEZINXYAUAPE");
    msg.sys_src.assign("TOJYADWSDAKYJUJRMPGMXOCTVOTQHLYEIKKONBRZIFKGWTILEVHSZANUEXHATBINCVCGTTMCLNIGYWFLRUZSVMNVZQHMFQNRZPPPGJTLJEOQCFBXRKSNLYVBSUUKDDXLYUGKVVHAXMHQFLPCDWPXIOYSARIBXDCRHCTEPHAMQUSEFARFBBBGZCWIDLIFS");
    msg.seq = 20198U;
    msg.sys_dst.assign("WDJLOXICTXVLINAJTLCBEZQHNXIVNRHSOEAYVVXDOGKT");
    msg.flags = 252U;
    const signed char tmp_msg_0[] = {-70, -46, -97, 69, 88, 57, 32, -94, 20, 29, -39, -74, -41, 98, -76, -10, 6, -31, 33, -7, 64, 123, -103, -66, -128, -110, -66, 12, 55, 92, -53, -93, -112, 104, -90, 112, -91, -43, -41, -119, -34, -92, -57, 97, -118, 80, 93, 88, 11, -114, -30, -1, -49, -73, 56, -1, 72, -82, -86, -41, 51, 29, -123, -63, -51, -86, 12, 65, 55, -32, 29, 78, -102, -37, -34, 89, 27, 104, -7, -8, -68, 113, 76, 5, -109, 15, 30, 12, -126, 82, -6, 5, 24, 109, -127, -106, 75, -122, 32, -3, -66, -34, -92, -105, -78, 82, 54, -119, -100, -60, -107, 115, -27, -98, -110, -48, 56, 84, 76, -109, -112, 49, 121, -94, -30, 26, 3, 3, -123, -109, -10, -120, 59, -108, 28, 122, 99, -50, -4, -66, -127, 66, 36, -98, 57, 79, -14, -44, -67, 95, -91, 49, 66, 1, 96, -99, -64, -85, -22, -35, 76, -72, 100, -31, 115, -41, -104, -77, -32, -31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.5815085219944797);
    msg.setSource(16984U);
    msg.setSourceEntity(49U);
    msg.setDestination(63375U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.3671468865403644;
    msg.lon = 0.16607217865845414;
    msg.depth = 0.4682676903000914;
    msg.sentence.assign("GCFJUODOMUCUVPDTNZAMJYYNSGHNFJOTPGYDQADCICSELYA");
    msg.txtime = 0.6354226757245499;
    msg.modem_type.assign("XECOPDNMJCTYILFSFASYCVDMRMULRHVJPFUDPMEITGQHVJRTZEPXNSNRUKWCOQIZQCHGBSYZZKEB");
    msg.sys_src.assign("PAUWEEFNQXXNAAUZPKDPCVYIZBFTZFSOQFEMUBXDCCJOKKGXQGOJTAYMOVHYZNDSBSNLABKNGUIZHMDHAXHRQLBFWSNOZWIODRCCVSKRZBVCLFIAFRYTDPVDHGYLTYEIYPYFYAWEKMTPWJBPXLJRQNSULERBBUOBVESTDGEGLJSEWRZVGXCU");
    msg.seq = 36336U;
    msg.sys_dst.assign("ZYZXOTPQHBXSMFTOVTZBNZQSSMUGFPYBXIWUGLAWMHZQJLIOPRCODSSFQKMBGCVRMXIKAQGPRI");
    msg.flags = 112U;
    const signed char tmp_msg_0[] = {-19, 22, 7, -24, -45, -98, -100, -17, 68, -106, -112, -79, 106, 61, 84, -27, -53, -28, 120, 0, 100, 36, -10, -35, -74, -86, -15, 17, 40, -13, 110, -123, 124, 54, -9, -80, -82, 111, -110, -11, 84, -98, -46, 32, -108, -7, 10, -26, -118, 4, -107, -105, 74, -80, -84, -69, -29, 35, 114, -121, -98, 25, -36, -60, -113, -21, -79, 26, 114, -90, 92, -40, 15, -76, -114, 58, 56, 1, -110, -126, -99, -12, 9, -84, -95, 98, 125, 21, -30, 45, -81, -114, 21, 125, 64, 75, 24, -51, 61, -111, -79, 120, -97, -49, -45, 119, 84, 115, 99, 102, -88, 73, 29, -33, -4, 112, -92, -37, -42, -96, 98, 126, 102, -77, -106, -55, -90, -95, 30, -34, -40, -87, -112, -4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.023810280239010884);
    msg.setSource(785U);
    msg.setSourceEntity(51U);
    msg.setDestination(45121U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.2213862210729236;
    msg.lon = 0.5977720112089078;
    msg.depth = 0.7108933872465201;
    msg.sentence.assign("VFMKONGGBZBKQUY");
    msg.txtime = 0.68898943396615;
    msg.modem_type.assign("GSJRQJOGAWJJUGHCMFLZUATAZOAUVXMYHMAGESWHVIEQJCODIKUNSLYEVFQRFXOKBDDCKPKRZZDWBWCPMBWOHZEYSQPPUVJYCDRDGHYRJMFNQGTXZCHIKSRQXEBIBGNXSLTSBFCLRFMENIACXVIJCKLEFQULATZETKHHHTRBOVBTAONLYTCGWPUDXVIWKSAWVDLOJIKPW");
    msg.sys_src.assign("SZHXMQGZPIBYTGVRZYZCKQHTWATNMKNPJLJOIFFHLALUFAYLXCAVTDDVGOPZOOXMVTGEOZCXWYFCBACTWSNUPNJLJKFFX");
    msg.seq = 18019U;
    msg.sys_dst.assign("OYNKSECAEXMAEMSVTQIAQDFMEHPZWOCJRRLKJKQGVOJARKASEDUYIWXXQSKDIHBBPLWWUJCYDFNBOMHMRTCKTUIYLUBUHMXZGPVJKDIGOXNLSKOZORJKGHUVMGBCDLVLZRVKLRBIESPTFWHHCUWOXGUYEFAYIUFVTCZMNSNQIUHRBJHTZMWWNADQD");
    msg.flags = 153U;
    const signed char tmp_msg_0[] = {-61, -43, 100, 4, 44, -28, 52, 78, 19, -118, -6, -98, -49, 61, -70, -123, -63, -14, 115, -34, 48, 43, -12, 55, -33, -38, -38, 81, 97, 119, -115, 47, -3, -88, -34, -127, -43, -46, 72, 58, 104, -124, 27, -46, 68, 25, 80, 104, 100, 44, 106, 38, 101, 16, -11, -10, -52, -75, 91, -71, 50, 90, -13, -81, -73, -101, -55, 126, -94, 57, -31, -62, 29, -105, -126, -84, -59, 70, 41, 17, 103, 107, 22, -101, 20, 52, 76, -60, 43, -6, 26, 10, -64, -36, 39, -90, 113, -29, 0, -69, -74, -118, 72, 18, 22, 47, 74, -42, -73, 64, -50, -42, -4, -47, 22, 0, -54, -2, -42, 99, -120, -33, -33, -77, -67, -127, 39, -66, -109, -24, -123, 90, -91, -81, -124, -62, 97, 13, 7, -22, -14, -38, -109, 80, -80, 1, 21, 96, 24, 103, -7, 52, -53, 11, -34, -127, 32, 32, -55, -41, -86, 96, -123, 108, -93, -62, -49, -47, -47, -95, -4, -84, 111, 120, 38, -91, -38, 35, -22, 121, 18, 124, -61, 86, 13, -19, -97, 94, -91, -56, 116, -109, -113, 124, 0, -42, -107, -57, -56, 52, 32, -96, 113, 66, 16, 7, 4, -40, -109, -118, -120, 37, 77, -94, -42, 14, -47, 126, -118, -55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5870010323702829);
    msg.setSource(41004U);
    msg.setSourceEntity(193U);
    msg.setDestination(27637U);
    msg.setDestinationEntity(208U);
    msg.op = 156U;
    msg.system.assign("LBURBHIGCERKPPGSBWEHDFKKVAMVLNYVTRRWGNFDNNJJTNJJKANEHZLOCISMPOSCJBOZCSHWLVQAKPONDRASQZEXNXUVVHJLMZFYDLXAAMVKQBTSIIQXCHGDUQGWK");
    msg.range = 0.39221549690104096;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("MABOUJXSNJEAIWYLRGCRHDYWFNAFVTOKEDGBBIHUOMZHNWXHCREZVTLMTHMSCYUNVGQEORYWZTWOAJQCIOQXMNFPYXUCHUOESQKDGITUVCDWQYMOYZLAKQVMDTVBCVEFWWLYRDVKBGFFPTRXDPGNNXHLD");
    tmp_msg_0.sys_dst.assign("YJPKSFIIQEUBOFEBRJPHYXLDONATCZSCRIZXQSPLWICWDYLWEEKFOSZCNKKRUHQZWUUHGNYAKLTYEHIXHDKMNGPIBWMUJEAEWODXSBRVFMHNHATFNAPFKOVYDGGMTOFILMXVEICQGDRDABSABLRTINJROFOMXJSMEJHNVDEWVBWTAGLZPZVBZAWVXNZFYGGXYUMKQPQLTBXPCZXDLSQQIRVKPSKMPZATCLQ");
    tmp_msg_0.flags = 158U;
    const signed char tmp_tmp_msg_0_0[] = {-26, -100, 83, 47, -68, -99, -100, -93, 34, -15, -7, 7, 41, 19, 43, 124, -24, -44, -104, 21, -5, 78, -127, -43, 8, -105, 104, 52, -2, -61, -108, -13, 4, -106, -49, 98, -103, -93, -48, -89, -90, 126, 19, 38, -108, 40, -84, 90, 13, 32, 66, -112, 96, 126, 119, 57, -12, 53, 109, 68, 106, -109, 22, 110, -72, -22, 7, -29, -67, 113, 110, -55, -18, -15, -92, 83, -35, 19, 16, -14, -36, 69, -79, 77, -83, -39, 50, -8, 94, 17, -67, -31, -33, -1, -16, -109, -83, -64, 1, -89, -97, -37, -46, -77, -126, 100, 46, -121, 61, 112, 100, -25, 4, -60, -7, -96, 66, 48, -126, -30, -8, 41, -31, 78, 46, -102, -126, -68, 69, -116, 77, -57, -48, -97, -87, 102, -61, 100, 69, -126, -86, 120, 61, -50, -45, 14, -51, -78, 75, 120, 15, 0, 37, 75, 61, 105, -4, 15, 83, -88, -23, -62, -118, 70, -81, 71, -67, 39, -55, 103, -126, -54, -95, -59, -45, -46, 81, 103, -61, 74, 28, -87, -102, 121, -52, 70, 3, 73, -2, 33, -98, -19, -42, 62, -116, -86, 102, -96, 5, 60, -84, -126, 119, -120, -116};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.05211497507165497);
    msg.setSource(29482U);
    msg.setSourceEntity(82U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(54U);
    msg.op = 50U;
    msg.system.assign("THRBHPYXAOGKPENRFSTNSWUNKFREJGYOIZAYUOZRSTCVXMJKXPMSAYBWOJHEQEGWCKKIQIKSVAEGPULWUIQNPNTHUAXNZGXDPTSXHYSFMPSDLPYLSUZYQRPSOJKLOZFDODEXVIFGLXWOLDQAGMIBWYIGUTCTGFMEMEVVHLCCFZWBBRBOMTJYDQDVPJCCQVATXBFILHCVWJNRGDEMWIKKJEAUNHVBQJCOZN");
    msg.range = 0.5658146465387659;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.04050990863481352;
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
    msg.setTimeStamp(0.9151961165004096);
    msg.setSource(33102U);
    msg.setSourceEntity(27U);
    msg.setDestination(20985U);
    msg.setDestinationEntity(176U);
    msg.op = 213U;
    msg.system.assign("TKHDTBYCSKAHNDCSCYOWYOHZMRADLVREVPZNVP");
    msg.range = 0.6827854352630297;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("VPPFJFQDIVNBCKNSBUFLIDUBPEMCZYDXXOLVYOEIOFWIJWSACWXXNWOBKUKPBJUQJKUUIZDEKSJRGNTGCPGNQGMCBOQYAQBEATBLTKOMDPHHMDHGYEZCXYXFTFKWAJBMIMKK");
    tmp_msg_0.x = 0.7030204503537385;
    tmp_msg_0.y = 0.8094274250746504;
    tmp_msg_0.z = 0.8333670772357865;
    tmp_msg_0.n = 0.9972216253636393;
    tmp_msg_0.e = 0.28331493338673974;
    tmp_msg_0.d = 0.32301182214747737;
    tmp_msg_0.phi = 0.6254334358433111;
    tmp_msg_0.theta = 0.8655839295338382;
    tmp_msg_0.psi = 0.2946518282118551;
    tmp_msg_0.accuracy = 0.18894600322486976;
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
    msg.setTimeStamp(0.10915789899692019);
    msg.setSource(22908U);
    msg.setSourceEntity(207U);
    msg.setDestination(3237U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.1981147261953543);
    msg.setSource(35443U);
    msg.setSourceEntity(124U);
    msg.setDestination(39858U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.037160844677509686);
    msg.setSource(59308U);
    msg.setSourceEntity(119U);
    msg.setDestination(51712U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.9742814118759694);
    msg.setSource(23717U);
    msg.setSourceEntity(52U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(239U);
    msg.list.assign("NLEQLKEACZRQVVELIDRNRYJNFDBAJKKIVHAWFBAKVKWJIPHRLMTIZCWTBJWSVVZBUPICHQJCHXUMDIUMYLPGIWMYQKYKXCKOERJORNHGJSWRQSFQZFDOPNNZWICBLT");

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
    msg.setTimeStamp(0.1767315348238484);
    msg.setSource(50834U);
    msg.setSourceEntity(141U);
    msg.setDestination(38975U);
    msg.setDestinationEntity(5U);
    msg.list.assign("XVZRELDUDAGBGUNMPIWHYUECVUXLWXFAAONLJMUKGJOCLGFVHXWRZOYGZNOITKTKAIANIUJZHKAYEFZKZRBDYBHTMGAMJESVWQUHKROWIESGGBTNRETYWNKCSNDEVJYRIDODINCCXQKHLMPSTVZSSXUBPKVREVMQVADBIYQGPSUPJDORSYFQLBBTLXPWMDJTFQPWNFIFYATQZFOCWTOXBPPGOHMSYPWXECLJQBJNJLQRFSEZH");

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
    msg.setTimeStamp(0.47601952014343785);
    msg.setSource(16612U);
    msg.setSourceEntity(190U);
    msg.setDestination(57769U);
    msg.setDestinationEntity(224U);
    msg.list.assign("YFHTLBKVLVQEQSFJISUMQBDJWNKYQFRXDNKMJWNFPLJMAGQUQMTPVBEQOZCTFOUUMERCINPZSYYLDIRTYFIHIOZPWTCUCSZODATRSOEYPLPMHXIOBWINRKVJZJGZRSAXRPJXZWBENTRGVAUPDOLVMKKGGCEREZDVCKGWHEAMZXAHHAXCNXGDIODIUVRHJYSVVSPLWYKCUQUBHNHODTQTMIYLASFJBXTBBYSJNKOALZDNFFF");

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
    msg.setTimeStamp(0.5629456250143057);
    msg.setSource(62616U);
    msg.setSourceEntity(14U);
    msg.setDestination(42392U);
    msg.setDestinationEntity(60U);
    msg.peer.assign("SAKHIDMJOXVQYEZIGSDJRGEVSCCCPYGXWEXVGKMAPASWZOTDMGORLKFVSZRVCKIEYEUDGKHLEKBYPVQQLZUAJURNYZDNLLDRAPTHPUALSAZBFXAUVN");
    msg.rssi = 0.4672708961607881;
    msg.integrity = 36342U;

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
    msg.setTimeStamp(0.45762762003934143);
    msg.setSource(22478U);
    msg.setSourceEntity(221U);
    msg.setDestination(18068U);
    msg.setDestinationEntity(40U);
    msg.peer.assign("XXFWOUIXKDVEXTBKCZCUQQHQUMMJPRWTEIGIRFSONNFBDQWONBPKDZFGUXIYWTGSIHYCKMNJVTHMXMKFARCYUNRLHKJMEHAXDLJBWPFQHATFVFV");
    msg.rssi = 0.9860529403589819;
    msg.integrity = 59149U;

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
    msg.setTimeStamp(0.9179982307063467);
    msg.setSource(19235U);
    msg.setSourceEntity(55U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(79U);
    msg.peer.assign("LKMSFIWLLCPQNJPQBEKNHHRBLRMNEKOWHFWYZYZXZVGDBKGUJHZZAMZOQLUEAUYFITFAKHQZRTIBOQKTIHXAMKTEGLKPFRXIVMYESNTCAWXDNGXMFBPUYVZLUPJTSSRHHCJRYPESGMJUDSEOTREXNICVWHOMBOXCMPKVVVWVDJPXHNDSQDIWGEPAMYUISQRLLXZDLIB");
    msg.rssi = 0.20917659418770596;
    msg.integrity = 13680U;

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
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.2860991313425244);
    msg.setSource(35747U);
    msg.setSourceEntity(15U);
    msg.setDestination(51101U);
    msg.setDestinationEntity(61U);
    msg.req_id = 23461U;
    msg.destination.assign("SYODXZOBCKAFLMWIDHVAGRJGOMXVSQUEDJVLDUCMUOOPNWUEYRCYAGWECGBZJNAMVAZQTAHJECNODPMXGTRTXAREOOWPKQWMVMHSPDKIQYZCPQFRXBFROYTWKDBJHUHKRLPBNGKFTVWGQZDTFFWEICSXMNESSAZYALUHWQZJUUUSXHOIYYMJVCBSJFZJLHKRYGEMBKHIIWZEKNXPDIXZTUPGNTTIVBLBSEXVYKGLPFLHDCQATQNIBIRRLNVQNC");
    msg.timeout = 0.2503574506594065;
    msg.range = 0.48249879912288074;
    msg.type = 28U;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 125U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.4342844450740896);
    msg.setSource(52317U);
    msg.setSourceEntity(179U);
    msg.setDestination(13605U);
    msg.setDestinationEntity(138U);
    msg.req_id = 9388U;
    msg.destination.assign("YFHNMPGKIUUBRNHXMAQYKZVTTCIAMMMSEKBUFHLXGXLLZFYQJMSUASTVWKGEYXZVEPUVOWTTPIZEDGROUDSPRHCVGSLDOZJSHCQPKLSKIDJH");
    msg.timeout = 0.29666036341859703;
    msg.range = 0.3908556129757397;
    msg.type = 135U;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.21456117146922715;
    tmp_msg_0.y = 0.7307556660392962;
    tmp_msg_0.z = 0.1721272286068991;
    tmp_msg_0.vx = 0.2769448798197732;
    tmp_msg_0.vy = 0.43496489446471576;
    tmp_msg_0.vz = 0.1928867637626469;
    tmp_msg_0.ax = 0.28819208700537924;
    tmp_msg_0.ay = 0.9998748734646575;
    tmp_msg_0.az = 0.1507155345385951;
    tmp_msg_0.flags = 16971U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.46913997669931073);
    msg.setSource(55921U);
    msg.setSourceEntity(167U);
    msg.setDestination(9095U);
    msg.setDestinationEntity(201U);
    msg.req_id = 53941U;
    msg.destination.assign("WRLXQLTMKEBCEWLQSTTUSGDENJGKFYOBQZJNKZPDLWAPGSJXCRJZBLOCATIBUDFFNUVBGDFKHPNBFTXWEZRPZIVMRNSPHXZBHLDUARWSDIVOMEIHUBUTKCPEIVRXQRYCGTMIFUQSVBEGXNHDETJPXYSHKQXTRJNGQJFXLHPYJCWUMSZYOKQYAUEMWHVVBNHVZIOAYSOONKJK");
    msg.timeout = 0.0006819764205919787;
    msg.range = 0.6774401022862555;
    msg.type = 102U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MYAFUVGRFWDXMZHREGFHMUQQOXPFPBPMLRHOXVRHRNECMNYSVNZBEWFPSOLUXPRQINCCTCUJSDBIZTQSSCQMSJZJNIUOWYLUVANQTWEQKOTWITLXPXMHYKJKYIBAYMXULTXTOGIHVPLKJUVCGLNCOEDJDEBBBAWYAQRDGZCKUGYAJFBZGEWGAWKXLAHFVLWNKGPJCCRHDYZBVG");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 44773U;
    tmp_tmp_msg_0_0.control_ent = 43U;
    tmp_tmp_msg_0_0.timeout = 0.557014014512049;
    tmp_tmp_msg_0_0.loiter_radius = 0.845690676029984;
    tmp_tmp_msg_0_0.altitude_interval = 0.5149376941028001;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::GpsFixRejection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.utc_time = 0.2692707143359139;
    tmp_tmp_msg_0_1.reason = 70U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VtolState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 227U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.6363093390004925);
    msg.setSource(55960U);
    msg.setSourceEntity(219U);
    msg.setDestination(10118U);
    msg.setDestinationEntity(60U);
    msg.req_id = 25467U;
    msg.type = 206U;
    msg.status = 192U;
    msg.info.assign("YAIZYKUQUTVQIFVQIGREJDOFGNEPAKTREJYXZWCLGCTYRWEXISNCDBWBLLRZYPTUJWSNMAMYVBZRFFKIGZADLYRKSTMQZICQUHLGIPFOHKWEMOHFCLWBFRTZCXHKSXGJHNOKPUSFXXOBRFQVOXJWUYITEDASGQVDPPOOBQWSCMOQPGLRALENJIYCPTSKZVBCHZUUHUQAPMLJYGSTUHLADMJVEADZOMCBRWKME");
    msg.range = 0.058803209440023596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.6911284542312486);
    msg.setSource(8024U);
    msg.setSourceEntity(28U);
    msg.setDestination(29253U);
    msg.setDestinationEntity(31U);
    msg.req_id = 5342U;
    msg.type = 110U;
    msg.status = 155U;
    msg.info.assign("FTYNDCPFGRGUOYTPSEJIBGVJYIDSRVZKHPBUVDFOTNASAVUBBCNJWMFMEKEPBFXLHSFKZNAXTYHRNQRILLXFXWJCDMEBYORWAMHDJERAUACTGXDGCZSITMUOTIKOSPZUAAGCBNWJAVQY");
    msg.range = 0.7915211903507829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.4568797211658502);
    msg.setSource(20630U);
    msg.setSourceEntity(126U);
    msg.setDestination(12619U);
    msg.setDestinationEntity(89U);
    msg.req_id = 64629U;
    msg.type = 65U;
    msg.status = 163U;
    msg.info.assign("YCPCZMOCSMCYWVYXGFUCRXCKPBTKHYFUOBSXMDBNOREYSGVSVAETNRNSOGXHDFPWKGYXNFELTQIAMUKJUVBZIAAULCFSOINFQDBRDTATQJFEDZHISIMHGWAHTJBRLXQQEVIWSSRMEVJUQORVFGAMQRPWIYUTGFENZJHDWNYOEOLHMPPARBOJWIIKILPBEBNWZJXKXDTLPUGJXYHZEPUCZPLVNOWKRHZFWNLTQDDQBKDZJQKHCKJCLYM");
    msg.range = 0.5829454107364335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.6307860767983161);
    msg.setSource(60469U);
    msg.setSourceEntity(46U);
    msg.setDestination(59323U);
    msg.setDestinationEntity(10U);
    msg.system.assign("WHIGWDZIWUNWSXCBTLIQPKZDYUBNSMTEHVLTORFJHODSOJAQHMIRTNEZUNZETOVUCDXWMXBDALJVJJMUWPVKXWHGXSLAONIQRAQIYN");
    msg.op = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.7370045627514198);
    msg.setSource(18021U);
    msg.setSourceEntity(78U);
    msg.setDestination(36089U);
    msg.setDestinationEntity(205U);
    msg.system.assign("REQRPOMJEFELYGAFOATEGGULHJTHSMOIEKOBKCNUUBHEENFYRICQQNVJYNUJHXWQJKLRWYSYBYXURMGMLIRUFWZKIZNQXHEMLVZYTLASXVCCSSVOQPPHWGPNZWFSVAGHNQDQUZNTXSJOAUXKJXMOKYDBFRPTWFRWZENABIMKOYUHTLVGWIIBSTRCTGDDCQKMDJPDABFZEACVIDMXKLINPCXVGMJIPYRDULFXGDVHKPDZVSOZWBLPABJ");
    msg.op = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.9397068822347336);
    msg.setSource(20586U);
    msg.setSourceEntity(173U);
    msg.setDestination(35305U);
    msg.setDestinationEntity(104U);
    msg.system.assign("XLPJJKMHRAMUKCAGMNQPVMYMDDRTYDHIRIRGIDRTZXCVFQLWYBAKKNVKQLLMHTFNMSBXFGLVUGZITJIZSAYLMSOAFUHCZNXWCJOEICWCJWIBOYVNXMVLXSIXHKDTPIOZHTVCTNJAQFZXSDHUKWBLLYLERVPEXTYVKFNZPNKWAYRZIUSHFAFZCDBGUCQAYPGOYPDHOGOUOOJQ");
    msg.op = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7943650646845244);
    msg.setSource(5365U);
    msg.setSourceEntity(21U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(216U);
    msg.value = -29731;

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
    msg.setTimeStamp(0.6210711150589535);
    msg.setSource(41626U);
    msg.setSourceEntity(161U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(166U);
    msg.value = -16801;

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
    msg.setTimeStamp(0.8717900852578055);
    msg.setSource(61251U);
    msg.setSourceEntity(33U);
    msg.setDestination(58346U);
    msg.setDestinationEntity(162U);
    msg.value = -29862;

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
    msg.setTimeStamp(0.06354782316977459);
    msg.setSource(54479U);
    msg.setSourceEntity(87U);
    msg.setDestination(11358U);
    msg.setDestinationEntity(167U);
    msg.value = 0.6388037708254068;

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
    msg.setTimeStamp(0.9323616664008728);
    msg.setSource(54032U);
    msg.setSourceEntity(245U);
    msg.setDestination(23490U);
    msg.setDestinationEntity(237U);
    msg.value = 0.04459638710701652;

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
    msg.setTimeStamp(0.6701566111107944);
    msg.setSource(39618U);
    msg.setSourceEntity(164U);
    msg.setDestination(53605U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8940765297598753;

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
    msg.setTimeStamp(0.6550471871190281);
    msg.setSource(12495U);
    msg.setSourceEntity(75U);
    msg.setDestination(5191U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8397424750455232;

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
    msg.setTimeStamp(0.729266855100546);
    msg.setSource(11257U);
    msg.setSourceEntity(191U);
    msg.setDestination(46818U);
    msg.setDestinationEntity(184U);
    msg.value = 0.2163174070803533;

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
    msg.setTimeStamp(0.04059297311907151);
    msg.setSource(14125U);
    msg.setSourceEntity(97U);
    msg.setDestination(47679U);
    msg.setDestinationEntity(31U);
    msg.value = 0.8561610971851523;

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
    msg.setTimeStamp(0.4949027759817687);
    msg.setSource(25576U);
    msg.setSourceEntity(141U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(143U);
    msg.validity = 5222U;
    msg.type = 26U;
    msg.utc_year = 17266U;
    msg.utc_month = 186U;
    msg.utc_day = 11U;
    msg.utc_time = 0.8882779221989314;
    msg.lat = 0.23782776437741426;
    msg.lon = 0.5657732678247523;
    msg.height = 0.6978652282215677;
    msg.satellites = 224U;
    msg.cog = 0.5780771363155198;
    msg.sog = 0.46056772817020364;
    msg.hdop = 0.9919306741299441;
    msg.vdop = 0.33994005427701435;
    msg.hacc = 0.630445967093678;
    msg.vacc = 0.3070450221948632;

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
    msg.setTimeStamp(0.8067114525404773);
    msg.setSource(1854U);
    msg.setSourceEntity(239U);
    msg.setDestination(12962U);
    msg.setDestinationEntity(198U);
    msg.validity = 22209U;
    msg.type = 48U;
    msg.utc_year = 5479U;
    msg.utc_month = 145U;
    msg.utc_day = 120U;
    msg.utc_time = 0.1345130399839678;
    msg.lat = 0.9232017849795914;
    msg.lon = 0.5193582818175865;
    msg.height = 0.22359641869267044;
    msg.satellites = 81U;
    msg.cog = 0.041101033294414835;
    msg.sog = 0.07742658941212466;
    msg.hdop = 0.3037982714132045;
    msg.vdop = 0.6132801391087611;
    msg.hacc = 0.479591207907345;
    msg.vacc = 0.0008367847946184614;

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
    msg.setTimeStamp(0.1705554043245595);
    msg.setSource(16280U);
    msg.setSourceEntity(17U);
    msg.setDestination(57719U);
    msg.setDestinationEntity(41U);
    msg.validity = 12619U;
    msg.type = 86U;
    msg.utc_year = 3798U;
    msg.utc_month = 45U;
    msg.utc_day = 42U;
    msg.utc_time = 0.00975974008780689;
    msg.lat = 0.41031727843855625;
    msg.lon = 0.26376816893195676;
    msg.height = 0.7433375865618644;
    msg.satellites = 61U;
    msg.cog = 0.8469926422488504;
    msg.sog = 0.5721189941567204;
    msg.hdop = 0.5257871957401588;
    msg.vdop = 0.3698059644923579;
    msg.hacc = 0.19362889341045497;
    msg.vacc = 0.5836954465329847;

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
    msg.setTimeStamp(0.3374371100617195);
    msg.setSource(23261U);
    msg.setSourceEntity(164U);
    msg.setDestination(15555U);
    msg.setDestinationEntity(20U);
    msg.time = 0.6530110593366417;
    msg.phi = 0.9602845993498141;
    msg.theta = 0.9162954870774243;
    msg.psi = 0.08012531658053568;
    msg.psi_magnetic = 0.4115805241634123;

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
    msg.setTimeStamp(0.5387498053705181);
    msg.setSource(52803U);
    msg.setSourceEntity(133U);
    msg.setDestination(61165U);
    msg.setDestinationEntity(121U);
    msg.time = 0.7478943253800189;
    msg.phi = 0.39904365883274817;
    msg.theta = 0.05319547316954598;
    msg.psi = 0.9375654623900521;
    msg.psi_magnetic = 0.8223050504563345;

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
    msg.setTimeStamp(0.22828690316180889);
    msg.setSource(30634U);
    msg.setSourceEntity(127U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(22U);
    msg.time = 0.24089728542373923;
    msg.phi = 0.07528585885767713;
    msg.theta = 0.10410564317464921;
    msg.psi = 0.03316049785588171;
    msg.psi_magnetic = 0.7215622185102767;

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
    msg.setTimeStamp(0.9550906859867518);
    msg.setSource(51560U);
    msg.setSourceEntity(184U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(217U);
    msg.time = 0.3670185065281656;
    msg.x = 0.3055618329457802;
    msg.y = 0.14124666381772621;
    msg.z = 0.03267191421629556;
    msg.timestep = 0.9563066887122109;

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
    msg.setTimeStamp(0.025145302139878645);
    msg.setSource(25168U);
    msg.setSourceEntity(159U);
    msg.setDestination(46868U);
    msg.setDestinationEntity(31U);
    msg.time = 0.21339777529920456;
    msg.x = 0.6322930343562482;
    msg.y = 0.6701578217957302;
    msg.z = 0.3962488268495411;
    msg.timestep = 0.9399433092842189;

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
    msg.setTimeStamp(0.8294348925796282);
    msg.setSource(59362U);
    msg.setSourceEntity(162U);
    msg.setDestination(63819U);
    msg.setDestinationEntity(22U);
    msg.time = 0.5081808858530446;
    msg.x = 0.33471414144915845;
    msg.y = 0.30488956802403555;
    msg.z = 0.10760948992274755;
    msg.timestep = 0.989960310062448;

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
    msg.setTimeStamp(0.6068018003041054);
    msg.setSource(46786U);
    msg.setSourceEntity(14U);
    msg.setDestination(29813U);
    msg.setDestinationEntity(109U);
    msg.time = 0.16680102564274224;
    msg.x = 0.7115252914177204;
    msg.y = 0.9282422023260424;
    msg.z = 0.586864559334395;

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
    msg.setTimeStamp(0.6891884190196191);
    msg.setSource(53078U);
    msg.setSourceEntity(213U);
    msg.setDestination(25503U);
    msg.setDestinationEntity(165U);
    msg.time = 0.5858061578888762;
    msg.x = 0.2734609982296553;
    msg.y = 0.12823706285213188;
    msg.z = 0.3451115188351612;

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
    msg.setTimeStamp(0.5153542295850143);
    msg.setSource(15989U);
    msg.setSourceEntity(145U);
    msg.setDestination(47666U);
    msg.setDestinationEntity(209U);
    msg.time = 0.5718089385755051;
    msg.x = 0.16068794077109627;
    msg.y = 0.13582841969278203;
    msg.z = 0.03680436731059333;

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
    msg.setTimeStamp(0.6286845240288301);
    msg.setSource(64079U);
    msg.setSourceEntity(134U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(230U);
    msg.time = 0.08938854115986072;
    msg.x = 0.802367519360153;
    msg.y = 0.4500965760620508;
    msg.z = 0.9376933023953687;

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
    msg.setTimeStamp(0.06661511145479582);
    msg.setSource(63073U);
    msg.setSourceEntity(37U);
    msg.setDestination(12075U);
    msg.setDestinationEntity(212U);
    msg.time = 0.12135196839106521;
    msg.x = 0.6409483089220628;
    msg.y = 0.0039973179675734105;
    msg.z = 0.33410439406476666;

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
    msg.setTimeStamp(0.402379369210186);
    msg.setSource(2243U);
    msg.setSourceEntity(94U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(152U);
    msg.time = 0.8790495705674528;
    msg.x = 0.4423481387510595;
    msg.y = 0.04245836546055781;
    msg.z = 0.7023455488490639;

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
    msg.setTimeStamp(0.8196264537314142);
    msg.setSource(46179U);
    msg.setSourceEntity(178U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(83U);
    msg.time = 0.8117356198891867;
    msg.x = 0.6110565182724246;
    msg.y = 0.999590865787636;
    msg.z = 0.11939777735710722;

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
    msg.setTimeStamp(0.782028607640442);
    msg.setSource(18429U);
    msg.setSourceEntity(205U);
    msg.setDestination(12873U);
    msg.setDestinationEntity(42U);
    msg.time = 0.95781747103504;
    msg.x = 0.4980149844380477;
    msg.y = 0.36513343647444163;
    msg.z = 0.2981918789336808;

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
    msg.setTimeStamp(0.22395099702025023);
    msg.setSource(11889U);
    msg.setSourceEntity(206U);
    msg.setDestination(61455U);
    msg.setDestinationEntity(187U);
    msg.time = 0.7049475800566143;
    msg.x = 0.2748266431991381;
    msg.y = 0.9993359698728956;
    msg.z = 0.5566212660307754;

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
    msg.setTimeStamp(0.013727328449780085);
    msg.setSource(5843U);
    msg.setSourceEntity(222U);
    msg.setDestination(57041U);
    msg.setDestinationEntity(23U);
    msg.validity = 107U;
    msg.x = 0.9068902179225212;
    msg.y = 0.6999020877574574;
    msg.z = 0.1541023280936632;

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
    msg.setTimeStamp(0.2799819224385277);
    msg.setSource(16612U);
    msg.setSourceEntity(215U);
    msg.setDestination(43572U);
    msg.setDestinationEntity(187U);
    msg.validity = 6U;
    msg.x = 0.5080205184346679;
    msg.y = 0.2762791484709297;
    msg.z = 0.7312808937212927;

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
    msg.setTimeStamp(0.03557552172943601);
    msg.setSource(50054U);
    msg.setSourceEntity(109U);
    msg.setDestination(56210U);
    msg.setDestinationEntity(232U);
    msg.validity = 48U;
    msg.x = 0.23110603999072543;
    msg.y = 0.2439013090020412;
    msg.z = 0.5363322924885535;

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
    msg.setTimeStamp(0.7834258119169923);
    msg.setSource(50153U);
    msg.setSourceEntity(8U);
    msg.setDestination(32635U);
    msg.setDestinationEntity(222U);
    msg.validity = 214U;
    msg.x = 0.4377513608633128;
    msg.y = 0.0032648916382972404;
    msg.z = 0.06902898671006663;

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
    msg.setTimeStamp(0.10145943987622807);
    msg.setSource(41767U);
    msg.setSourceEntity(39U);
    msg.setDestination(49607U);
    msg.setDestinationEntity(131U);
    msg.validity = 117U;
    msg.x = 0.03725213855362286;
    msg.y = 0.29237574866770977;
    msg.z = 0.9882038096943085;

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
    msg.setTimeStamp(0.5766104370238325);
    msg.setSource(40932U);
    msg.setSourceEntity(12U);
    msg.setDestination(47560U);
    msg.setDestinationEntity(13U);
    msg.validity = 43U;
    msg.x = 0.29896148035432935;
    msg.y = 0.1980457106192176;
    msg.z = 0.46068286888273025;

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
    msg.setTimeStamp(0.9610363691997823);
    msg.setSource(15825U);
    msg.setSourceEntity(5U);
    msg.setDestination(9544U);
    msg.setDestinationEntity(118U);
    msg.time = 0.8765755337158426;
    msg.x = 0.4139188637132657;
    msg.y = 0.8215883330211519;
    msg.z = 0.06389740517655529;

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
    msg.setTimeStamp(0.2611479235466686);
    msg.setSource(12043U);
    msg.setSourceEntity(239U);
    msg.setDestination(17838U);
    msg.setDestinationEntity(11U);
    msg.time = 0.3927113725711421;
    msg.x = 0.8826703582920503;
    msg.y = 0.45299009861280914;
    msg.z = 0.5734701328164337;

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
    msg.setTimeStamp(0.22040090573954696);
    msg.setSource(8232U);
    msg.setSourceEntity(36U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(160U);
    msg.time = 0.575854885492722;
    msg.x = 0.9001151082545932;
    msg.y = 0.2716613877740238;
    msg.z = 0.25792887753694016;

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
    msg.setTimeStamp(0.27802400297815166);
    msg.setSource(21712U);
    msg.setSourceEntity(237U);
    msg.setDestination(8406U);
    msg.setDestinationEntity(27U);
    msg.validity = 171U;
    msg.value = 0.9757925208175499;

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
    msg.setTimeStamp(0.555895436353911);
    msg.setSource(54815U);
    msg.setSourceEntity(70U);
    msg.setDestination(56719U);
    msg.setDestinationEntity(65U);
    msg.validity = 49U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.06435762876269635;
    tmp_msg_0.beam_height = 0.482448388445168;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.20407801926932556;

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
    msg.setTimeStamp(0.1341547010377938);
    msg.setSource(17184U);
    msg.setSourceEntity(50U);
    msg.setDestination(48428U);
    msg.setDestinationEntity(26U);
    msg.validity = 59U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3350521927263067;
    tmp_msg_0.beam_height = 0.6979475329810062;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.7035453360733205;

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
    msg.setTimeStamp(0.914696181365661);
    msg.setSource(34448U);
    msg.setSourceEntity(0U);
    msg.setDestination(47804U);
    msg.setDestinationEntity(77U);
    msg.value = 0.3737327466553514;

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
    msg.setTimeStamp(0.573387798738947);
    msg.setSource(41458U);
    msg.setSourceEntity(141U);
    msg.setDestination(22568U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8325534272020292;

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
    msg.setTimeStamp(0.7180530585535867);
    msg.setSource(13613U);
    msg.setSourceEntity(115U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7291283824366684;

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
    msg.setTimeStamp(0.3814176135384797);
    msg.setSource(34961U);
    msg.setSourceEntity(34U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9041292820326066;

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
    msg.setTimeStamp(0.30564354946341654);
    msg.setSource(574U);
    msg.setSourceEntity(18U);
    msg.setDestination(54894U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9599045875353904;

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
    msg.setTimeStamp(0.8371852720624514);
    msg.setSource(51215U);
    msg.setSourceEntity(183U);
    msg.setDestination(17461U);
    msg.setDestinationEntity(128U);
    msg.value = 0.007121561886189176;

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
    msg.setTimeStamp(0.43120915601821774);
    msg.setSource(44125U);
    msg.setSourceEntity(37U);
    msg.setDestination(10983U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8667945421081726;

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
    msg.setTimeStamp(0.3030876979883351);
    msg.setSource(56427U);
    msg.setSourceEntity(209U);
    msg.setDestination(38024U);
    msg.setDestinationEntity(232U);
    msg.value = 0.04154694684384008;

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
    msg.setTimeStamp(0.09232911022981471);
    msg.setSource(13818U);
    msg.setSourceEntity(166U);
    msg.setDestination(52851U);
    msg.setDestinationEntity(219U);
    msg.value = 0.7330747840758295;

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
    msg.setTimeStamp(0.24310730039480422);
    msg.setSource(33114U);
    msg.setSourceEntity(33U);
    msg.setDestination(51009U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7717796440142869;

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
    msg.setTimeStamp(0.8827146243370374);
    msg.setSource(37238U);
    msg.setSourceEntity(53U);
    msg.setDestination(65429U);
    msg.setDestinationEntity(124U);
    msg.value = 0.46324044465779846;

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
    msg.setTimeStamp(0.6190228902781948);
    msg.setSource(5799U);
    msg.setSourceEntity(73U);
    msg.setDestination(43909U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5306585521911765;

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
    msg.setTimeStamp(0.7003512762689761);
    msg.setSource(4234U);
    msg.setSourceEntity(139U);
    msg.setDestination(51021U);
    msg.setDestinationEntity(136U);
    msg.value = 0.8575069168916237;

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
    msg.setTimeStamp(0.8976055466149877);
    msg.setSource(23973U);
    msg.setSourceEntity(46U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5973503102254168;

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
    msg.setTimeStamp(0.2918992510424985);
    msg.setSource(65288U);
    msg.setSourceEntity(138U);
    msg.setDestination(786U);
    msg.setDestinationEntity(82U);
    msg.value = 0.864515648935446;

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
    msg.setTimeStamp(0.9028480401016813);
    msg.setSource(17512U);
    msg.setSourceEntity(205U);
    msg.setDestination(682U);
    msg.setDestinationEntity(225U);
    msg.value = 0.34209468968549983;

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
    msg.setTimeStamp(0.246382983760003);
    msg.setSource(11339U);
    msg.setSourceEntity(76U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(66U);
    msg.value = 0.17345898646932478;

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
    msg.setTimeStamp(0.45579260214839046);
    msg.setSource(36732U);
    msg.setSourceEntity(40U);
    msg.setDestination(26580U);
    msg.setDestinationEntity(4U);
    msg.value = 0.7273821861129333;

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
    msg.setTimeStamp(0.1840716824665941);
    msg.setSource(26310U);
    msg.setSourceEntity(122U);
    msg.setDestination(53120U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5202551394603996;

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
    msg.setTimeStamp(0.8803052768532904);
    msg.setSource(32852U);
    msg.setSourceEntity(242U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(27U);
    msg.value = 0.7342235676466218;

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
    msg.setTimeStamp(0.5136180272784352);
    msg.setSource(26327U);
    msg.setSourceEntity(121U);
    msg.setDestination(17553U);
    msg.setDestinationEntity(100U);
    msg.value = 0.5454052655272105;

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
    msg.setTimeStamp(0.833238351180697);
    msg.setSource(56811U);
    msg.setSourceEntity(112U);
    msg.setDestination(16036U);
    msg.setDestinationEntity(38U);
    msg.value = 0.26912293063789783;

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
    msg.setTimeStamp(0.7722054842543307);
    msg.setSource(60233U);
    msg.setSourceEntity(14U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(28U);
    msg.value = 0.32793071109484395;

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
    msg.setTimeStamp(0.5270730497318257);
    msg.setSource(3327U);
    msg.setSourceEntity(52U);
    msg.setDestination(29733U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5631505658169693;

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
    msg.setTimeStamp(0.3091006410512498);
    msg.setSource(25408U);
    msg.setSourceEntity(216U);
    msg.setDestination(18616U);
    msg.setDestinationEntity(67U);
    msg.direction = 0.5746270900384804;
    msg.speed = 0.010599674136552495;
    msg.turbulence = 0.9524465834781871;

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
    msg.setTimeStamp(0.3710007394075522);
    msg.setSource(64893U);
    msg.setSourceEntity(163U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(215U);
    msg.direction = 0.6568017520048032;
    msg.speed = 0.9092464687911349;
    msg.turbulence = 0.6641064721663071;

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
    msg.setTimeStamp(0.705836532611777);
    msg.setSource(62353U);
    msg.setSourceEntity(11U);
    msg.setDestination(24047U);
    msg.setDestinationEntity(219U);
    msg.direction = 0.41305226226938585;
    msg.speed = 0.16725713498801464;
    msg.turbulence = 0.8372295453213271;

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
    msg.setTimeStamp(0.19365268622459564);
    msg.setSource(1531U);
    msg.setSourceEntity(250U);
    msg.setDestination(41987U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7672771612752098;

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
    msg.setTimeStamp(0.25348966909562687);
    msg.setSource(5527U);
    msg.setSourceEntity(120U);
    msg.setDestination(16972U);
    msg.setDestinationEntity(1U);
    msg.value = 0.9732055879280841;

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
    msg.setTimeStamp(0.9192668980961936);
    msg.setSource(13097U);
    msg.setSourceEntity(168U);
    msg.setDestination(19393U);
    msg.setDestinationEntity(16U);
    msg.value = 0.08888557638048522;

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
    msg.setTimeStamp(0.40592328209325557);
    msg.setSource(59183U);
    msg.setSourceEntity(21U);
    msg.setDestination(22867U);
    msg.setDestinationEntity(193U);
    msg.value.assign("EQFELDPXPUOEYOIZCZCOBTKIPUPWYQGUMUDVWWJNPAXHRMGTQFYVENWDIANWKRIVQCBRUSWAJJBAZMASTSKDNDDYMQLWGLFQWYBSACLMPJFZCPNZV");

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
    msg.setTimeStamp(0.4271437505169724);
    msg.setSource(11641U);
    msg.setSourceEntity(1U);
    msg.setDestination(59851U);
    msg.setDestinationEntity(117U);
    msg.value.assign("MCCDQOMEJEPNPJRLDGLHGKRFCJFMIFJOAVQHSOUHXMWNVYCMFNOJUPWOYRKTBVEPWMZW");

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
    msg.setTimeStamp(0.4951056269948356);
    msg.setSource(65267U);
    msg.setSourceEntity(4U);
    msg.setDestination(35656U);
    msg.setDestinationEntity(250U);
    msg.value.assign("JISNVXUAYHWPMYLUSATSJRRPWVZAEIHFUKMFWQYCGJDRJJTCABNSIFFAOKZIOCIOBLXDUKLNEJTUQGQYQPPXRXCVHERDPVETNTLZZSWHAVVJCGMIORZPKGCELOAWJWMINCAKWRNZQEGVHTQVXBEHYCGYXDTAIDMCOMPZEIUWQQBSKXYLFFPOPXLUMHBSKMTDASKEEZRSVYXROJQBHOCFYMNHFGJWPMNGGXVUHFLZBDB");

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
    msg.setTimeStamp(0.9736358010440089);
    msg.setSource(37654U);
    msg.setSourceEntity(159U);
    msg.setDestination(35857U);
    msg.setDestinationEntity(18U);
    const signed char tmp_msg_0[] = {-70, -25, -118, 42, -88, 41, -111, -98, -57, 23, -29, 90, 59, -2, 31, -85, 44, 77, 26, 51, 19, -110, 115, -7, 18, 72, 82, -103, 30, 107, 17, 20, 42, -8, 104, 72, -51, -55, -32, 30, 33, 124, -104, 2, -114, 19, -128, -36, -11, 120, 80, 113, -102, -101, 9, -10, -107, -78, -126, 92, 19, -45, -1, -57, 32, -49, -76, -75, -49, 121, -51, 117, -89, -77, 124, -24, -60, -6, 117, -88, -94, 15, -118, -87, -80, 104, 71, -17, 17, 84, 21, 126, 95, -68, 45, 82, -96, -33, -108, 101, 51, -57, -100, -69, -8, -99, -86, -114, -87, 105, -79, 10, -62, 84, 25, -4, -122, 82, 53, 107, 23, 102, -5, 104, 46, 22, -112, 22, -52, -48, -77, 99, -114, -69, -39, -116, -62, 48};
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
    msg.setTimeStamp(0.3645245506678101);
    msg.setSource(37366U);
    msg.setSourceEntity(67U);
    msg.setDestination(20330U);
    msg.setDestinationEntity(144U);
    const signed char tmp_msg_0[] = {-30, 21, 41, 116, -61, 124, 125, 100, -35, 123, 43, 44, 55, 100, -74, 112, 122, -67, 44, -23, -48, -49, 103, 120, 47, 70, -23, -64, -29, 118, 37, 38, -92, -69, -24, -76, 16, -63, 67, -16, -42, 14, -54};
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
    msg.setTimeStamp(0.3183474304936773);
    msg.setSource(41933U);
    msg.setSourceEntity(200U);
    msg.setDestination(11939U);
    msg.setDestinationEntity(120U);
    const signed char tmp_msg_0[] = {77, 102, -18, -20, -81, 4, -11, -15, -13, 96, 37, 45, -106, 121, -124, -34, -27, 62, -21, 102, -74, 115, -121, -45, 125, 0, -22, 124, -104, -30, -32, -10, -76, 95, -34, 10, 94, 61, 104, 22, -57, 83, -10, -71, 70, 36, -10, -117, -29, -11, -53, -100, 61, -104, 124, 8, 48, 60, -122, -111, -2, -20, 85, -109, 73, -79, 68, -32, 64, -79, -43, -87, 32, -121, 101, -23, 85, 70, 20, -102, 1, -41, 89, 46, -59, -28, -35, -44, -27, 38, -97, -85, -79, 101, -8, 125, 95, 52, -87, 96, -106, -71, 20, 70, -82, -79, -29, -69, 97, 97, -43, 73, 10, -109, 101, 77, -102, 5, -41, 119, 28, -8, 42, 72, -52, 68, -51, 70, 71, -71, -11, -6, 113, 10, 6, -22, 5, 9, 88, 9, -10, 70, -52, -98, -20, 52, 60, -104, 53, -98, -38};
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
    msg.setTimeStamp(0.9111763950068288);
    msg.setSource(25720U);
    msg.setSourceEntity(26U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(24U);
    msg.value = 0.4234693827698066;

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
    msg.setTimeStamp(0.02003566860246564);
    msg.setSource(1673U);
    msg.setSourceEntity(237U);
    msg.setDestination(12027U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8389525592738915;

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
    msg.setTimeStamp(0.0794845078508325);
    msg.setSource(41669U);
    msg.setSourceEntity(159U);
    msg.setDestination(61522U);
    msg.setDestinationEntity(207U);
    msg.value = 0.974914519363907;

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
    msg.setTimeStamp(0.4132060234412588);
    msg.setSource(20744U);
    msg.setSourceEntity(223U);
    msg.setDestination(23315U);
    msg.setDestinationEntity(38U);
    msg.type = 64U;
    msg.frequency = 3598586725U;
    msg.min_range = 62106U;
    msg.max_range = 63511U;
    msg.bits_per_point = 28U;
    msg.scale_factor = 0.5530718427213126;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9892412806670864;
    tmp_msg_0.beam_height = 0.20446611199618892;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {60, -71, -31, 55, -105, 50, 79, -128, 56, -95, -43, 66, -1, -83, -14, 122, -25, -1, 23, -44, -45, -33, -59, 61, 35, -98, -113, -1, -126, 2, -107, -18, 77, 109, 85, 27, -103, 114, -21, -36, -10, -89, 85, -31, 63, 90, 44, -91, 34, -61, 117, 102, -56, 4, -104, 11, -59, 21, 35, -67, 86, 116, -86, -16, 98, 43, -105, -10, 41, 115, -94, -76, 13, -5, -29, -53, 34, -67, -28, -23, -91, 54, -81, -55};
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
    msg.setTimeStamp(0.18900151178405655);
    msg.setSource(55658U);
    msg.setSourceEntity(177U);
    msg.setDestination(30888U);
    msg.setDestinationEntity(99U);
    msg.type = 210U;
    msg.frequency = 3064678489U;
    msg.min_range = 57462U;
    msg.max_range = 29704U;
    msg.bits_per_point = 17U;
    msg.scale_factor = 0.27362885726012354;
    const signed char tmp_msg_0[] = {-1, -54, -100, -94, 115, 0, 39, -61, 17, 113, -54, -113, 43, -73, 101, -30, -28, 2, 44, -21, -36, -84, -10, -110, -54, -19, 58, 66, -84, -116, 37, -58, 47, 83, 31, -25, 78, -90, 81, 68, -99, -37, -103, -67, 49, 74, -115, -50, -106, -97, 33, 36, -7, -11, 15, 86, -8, -42, -73, 63, -119, -121, -55, 24, -85, -113, -72, -64, 39, 48, -114, 90, 52, -53, -58, -35, -118, 79, 66, 91, 61, 119, 14, -106, -101, 39, -64, 107, -105, 110, 1, 69, -105, -29, -113, -102, -80, 36, 12, -71, -38, -44, 104, 65, -42, -23, 87, 64, -47, 3, -117, 3, 40, 50, -33, -55, -10, -29, -18, 85, -78, -91, 108, -36, -93, 58, -57, 122, -14, 99, 38, 96, -122, -109, 50, 51, 101, -63, -20, 27, -56, -14, -115, -64, -83, -37, 12, -31, 45, -120, -62, 123, -59, -4, 33, -76, -102, -115, 2, -53, 35, -7, -52, -126, -110, -55, -14, -114, 42, 116, 96, 3, -127, -34, -64, 95, -15, -31, 38, 68, -72, 117, -102, -22, -76, -80, 2};
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
    msg.setTimeStamp(0.1116549585169131);
    msg.setSource(57399U);
    msg.setSourceEntity(250U);
    msg.setDestination(39940U);
    msg.setDestinationEntity(207U);
    msg.type = 155U;
    msg.frequency = 2029463453U;
    msg.min_range = 45558U;
    msg.max_range = 9170U;
    msg.bits_per_point = 66U;
    msg.scale_factor = 0.6045568179395469;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.25961746882067727;
    tmp_msg_0.beam_height = 0.3282779043937156;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-8, -26, 23, -10, -122, -70, -125, 13, 35, 7, -86, 18, 89, -1, 54, -71, 115, -68, -96, 29, 62, -60, 26, 98, -76, 28, -8, 122, -73, 31, -68, -94, -99, -55, -66, -33, 100, 73, -88, 113, -98, 4, -112, 40, -123, -102, -92, 16, -9, 60, -3, -51, 98, 82, -19, -112, 77, -64, 70, -49, 28, -95, -80, 91, -44, 40, 97, -119, 122, 41, -79, -14, 82, 77, 20, -128, -106, -1, 82, 61};
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
    msg.setTimeStamp(0.41295280464184314);
    msg.setSource(40201U);
    msg.setSourceEntity(178U);
    msg.setDestination(3850U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.6674844080038728);
    msg.setSource(18364U);
    msg.setSourceEntity(204U);
    msg.setDestination(28731U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.6993723757750501);
    msg.setSource(54729U);
    msg.setSourceEntity(245U);
    msg.setDestination(16108U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.8978044300147004);
    msg.setSource(692U);
    msg.setSourceEntity(23U);
    msg.setDestination(60297U);
    msg.setDestinationEntity(108U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.26330176037949204);
    msg.setSource(2130U);
    msg.setSourceEntity(217U);
    msg.setDestination(24703U);
    msg.setDestinationEntity(63U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.05904085632808731);
    msg.setSource(7851U);
    msg.setSourceEntity(110U);
    msg.setDestination(48801U);
    msg.setDestinationEntity(134U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.9241043471251806);
    msg.setSource(38452U);
    msg.setSourceEntity(193U);
    msg.setDestination(50776U);
    msg.setDestinationEntity(6U);
    msg.value = 0.8610404325111507;
    msg.confidence = 0.09334234615700232;
    msg.opmodes.assign("JHKHHMWXRQXOOCBKZBVXDHEAPZPGAEDQWRJFBCRMWPFOLGISHDFHDQUPMPDTUBNSUCHNMVOEISJALNWBIQGRLCYYLPIKXZITFSGMGOOXJTEAFXKEJNVUEQXNILQRSWNJVYHKACOBTLTMMGCXZJBVSTYJQUUBZQYIEJDDZKNVMOIYAPHZSPSRCFYUESWKTDHWLCFNVEMORZTYURB");

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
    msg.setTimeStamp(0.5598748753560125);
    msg.setSource(21573U);
    msg.setSourceEntity(208U);
    msg.setDestination(38033U);
    msg.setDestinationEntity(114U);
    msg.value = 0.2554698939551594;
    msg.confidence = 0.5100914301989612;
    msg.opmodes.assign("NTMQHRLBFACHBEDTYVJDHBSCYOTKKLWAYHLDWWTOUDXCUQGFRMRPSJPPGEWWTMUEQYINRTSFVFAEWPOQAQEBCCMMLZIILDKFZNJOVWHKJAZGYLJNVKXVUITAQKSLEYZGNVZQZBOCGMGN");

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
    msg.setTimeStamp(0.8341736242493445);
    msg.setSource(8056U);
    msg.setSourceEntity(63U);
    msg.setDestination(33496U);
    msg.setDestinationEntity(154U);
    msg.value = 0.991894458572892;
    msg.confidence = 0.9867963470981029;
    msg.opmodes.assign("SVPLXGDRJBILPYVWSIKOTBXWPCLEOGFDPNMSPQTNAWJZHIOKCCTLMEBXUEPIAEKLKSBACZOQZZZPRWXGGR");

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
    msg.setTimeStamp(0.694609093349937);
    msg.setSource(57921U);
    msg.setSourceEntity(252U);
    msg.setDestination(39868U);
    msg.setDestinationEntity(163U);
    msg.itow = 1099827739U;
    msg.lat = 0.2770632217615391;
    msg.lon = 0.27909819079749976;
    msg.height_ell = 0.7260083052651418;
    msg.height_sea = 0.42171927517179786;
    msg.hacc = 0.9548453684176682;
    msg.vacc = 0.6736344732795064;
    msg.vel_n = 0.638403221882101;
    msg.vel_e = 0.35025686922568455;
    msg.vel_d = 0.675965614129774;
    msg.speed = 0.2620128759802356;
    msg.gspeed = 0.6497200663878975;
    msg.heading = 0.4927146851595342;
    msg.sacc = 0.35176852522437607;
    msg.cacc = 0.68177617029557;

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
    msg.setTimeStamp(0.7931061961860968);
    msg.setSource(51448U);
    msg.setSourceEntity(147U);
    msg.setDestination(46313U);
    msg.setDestinationEntity(32U);
    msg.itow = 3190700839U;
    msg.lat = 0.10676483215227572;
    msg.lon = 0.001559163194366553;
    msg.height_ell = 0.15109504442347277;
    msg.height_sea = 0.6706900809823194;
    msg.hacc = 0.8281547904281926;
    msg.vacc = 0.8282295250067598;
    msg.vel_n = 0.23793548036020717;
    msg.vel_e = 0.052426318852048626;
    msg.vel_d = 0.9922765800811958;
    msg.speed = 0.668312918228751;
    msg.gspeed = 0.5290274267951566;
    msg.heading = 0.8927354202266704;
    msg.sacc = 0.7387349033722136;
    msg.cacc = 0.6272055300338415;

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
    msg.setTimeStamp(0.5372229869270041);
    msg.setSource(49782U);
    msg.setSourceEntity(97U);
    msg.setDestination(18746U);
    msg.setDestinationEntity(75U);
    msg.itow = 1802541395U;
    msg.lat = 0.01925444170469015;
    msg.lon = 0.3863816722836183;
    msg.height_ell = 0.4739961304336928;
    msg.height_sea = 0.46963666138204896;
    msg.hacc = 0.42114426686859885;
    msg.vacc = 0.8252442037468664;
    msg.vel_n = 0.3580474565306029;
    msg.vel_e = 0.9983136997975515;
    msg.vel_d = 0.7686130701563072;
    msg.speed = 0.3082028773075077;
    msg.gspeed = 0.20453955361031606;
    msg.heading = 0.922731514118921;
    msg.sacc = 0.5709070813612664;
    msg.cacc = 0.22265316855185013;

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
    msg.setTimeStamp(0.4683903649126461);
    msg.setSource(56871U);
    msg.setSourceEntity(64U);
    msg.setDestination(37972U);
    msg.setDestinationEntity(56U);
    msg.id = 98U;
    msg.value = 0.8595589394512497;

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
    msg.setTimeStamp(0.40073892231201225);
    msg.setSource(52864U);
    msg.setSourceEntity(227U);
    msg.setDestination(40010U);
    msg.setDestinationEntity(60U);
    msg.id = 229U;
    msg.value = 0.6448789152865376;

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
    msg.setTimeStamp(0.8306222903039737);
    msg.setSource(38623U);
    msg.setSourceEntity(107U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(142U);
    msg.id = 59U;
    msg.value = 0.5747143788440517;

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
    msg.setTimeStamp(0.8959767395723043);
    msg.setSource(59981U);
    msg.setSourceEntity(67U);
    msg.setDestination(45834U);
    msg.setDestinationEntity(79U);
    msg.x = 0.009067651274499489;
    msg.y = 0.7659094296620594;
    msg.z = 0.828928377066232;
    msg.phi = 0.1505425440034941;
    msg.theta = 0.2989838833046964;
    msg.psi = 0.9801052648114668;

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
    msg.setTimeStamp(0.7421425877136041);
    msg.setSource(9702U);
    msg.setSourceEntity(140U);
    msg.setDestination(22450U);
    msg.setDestinationEntity(235U);
    msg.x = 0.5012283257278888;
    msg.y = 0.8005007609384633;
    msg.z = 0.9976543992862025;
    msg.phi = 0.06814158212226706;
    msg.theta = 0.623107263128906;
    msg.psi = 0.9988052953479178;

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
    msg.setTimeStamp(0.8076415196202302);
    msg.setSource(57471U);
    msg.setSourceEntity(173U);
    msg.setDestination(49413U);
    msg.setDestinationEntity(170U);
    msg.x = 0.776413853578853;
    msg.y = 0.9954849352990661;
    msg.z = 0.01680740108437173;
    msg.phi = 0.7012125501529886;
    msg.theta = 0.49065916993903613;
    msg.psi = 0.17927213556620603;

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
    msg.setTimeStamp(0.823328975936939);
    msg.setSource(18172U);
    msg.setSourceEntity(104U);
    msg.setDestination(2887U);
    msg.setDestinationEntity(74U);
    msg.beam_width = 0.18350661568945625;
    msg.beam_height = 0.6997412167199449;

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
    msg.setTimeStamp(0.20015978852813365);
    msg.setSource(62200U);
    msg.setSourceEntity(247U);
    msg.setDestination(28454U);
    msg.setDestinationEntity(66U);
    msg.beam_width = 0.25612166942999315;
    msg.beam_height = 0.12522106047328785;

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
    msg.setTimeStamp(0.40673791327413766);
    msg.setSource(33394U);
    msg.setSourceEntity(223U);
    msg.setDestination(915U);
    msg.setDestinationEntity(213U);
    msg.beam_width = 0.9004828247902662;
    msg.beam_height = 0.12921761183452607;

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
    msg.setTimeStamp(0.5778223965141386);
    msg.setSource(39977U);
    msg.setSourceEntity(132U);
    msg.setDestination(29457U);
    msg.setDestinationEntity(98U);
    msg.sane = 164U;

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
    msg.setTimeStamp(0.8532608677281487);
    msg.setSource(40411U);
    msg.setSourceEntity(106U);
    msg.setDestination(26878U);
    msg.setDestinationEntity(228U);
    msg.sane = 31U;

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
    msg.setTimeStamp(0.2021237588278133);
    msg.setSource(6448U);
    msg.setSourceEntity(145U);
    msg.setDestination(37838U);
    msg.setDestinationEntity(142U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.16983058421957398);
    msg.setSource(47172U);
    msg.setSourceEntity(228U);
    msg.setDestination(2908U);
    msg.setDestinationEntity(122U);
    msg.value = 0.16315878049706656;

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
    msg.setTimeStamp(0.7577003854281191);
    msg.setSource(48268U);
    msg.setSourceEntity(234U);
    msg.setDestination(25870U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9038515078179664;

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
    msg.setTimeStamp(0.2670792907944892);
    msg.setSource(40588U);
    msg.setSourceEntity(67U);
    msg.setDestination(20048U);
    msg.setDestinationEntity(74U);
    msg.value = 0.15853780593799205;

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
    msg.setTimeStamp(0.2724213929824475);
    msg.setSource(26809U);
    msg.setSourceEntity(132U);
    msg.setDestination(57124U);
    msg.setDestinationEntity(165U);
    msg.value = 0.14944886528997314;

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
    msg.setTimeStamp(0.7245777585749552);
    msg.setSource(33039U);
    msg.setSourceEntity(217U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(182U);
    msg.value = 0.08226585244414919;

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
    msg.setTimeStamp(0.7310317278879743);
    msg.setSource(1094U);
    msg.setSourceEntity(33U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8803161060643313;

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
    msg.setTimeStamp(0.8458170334282009);
    msg.setSource(887U);
    msg.setSourceEntity(27U);
    msg.setDestination(43805U);
    msg.setDestinationEntity(217U);
    msg.value = 0.8198739593054337;

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
    msg.setTimeStamp(0.3789858092890914);
    msg.setSource(64948U);
    msg.setSourceEntity(203U);
    msg.setDestination(44480U);
    msg.setDestinationEntity(80U);
    msg.value = 0.18297643030218036;

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
    msg.setTimeStamp(0.3503057148753723);
    msg.setSource(39986U);
    msg.setSourceEntity(12U);
    msg.setDestination(11953U);
    msg.setDestinationEntity(66U);
    msg.value = 0.07535281615366596;

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
    msg.setTimeStamp(0.1464897711974027);
    msg.setSource(60539U);
    msg.setSourceEntity(144U);
    msg.setDestination(1792U);
    msg.setDestinationEntity(131U);
    msg.value = 0.33864293573700655;

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
    msg.setTimeStamp(0.9525834071480435);
    msg.setSource(18868U);
    msg.setSourceEntity(250U);
    msg.setDestination(59960U);
    msg.setDestinationEntity(233U);
    msg.value = 0.9039280660095288;

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
    msg.setTimeStamp(0.3194722512606284);
    msg.setSource(9020U);
    msg.setSourceEntity(169U);
    msg.setDestination(6455U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9834011655933315;

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
    msg.setTimeStamp(0.37876812626630896);
    msg.setSource(59829U);
    msg.setSourceEntity(228U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(29U);
    msg.value = 0.1925093103453177;

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
    msg.setTimeStamp(0.33056008140240045);
    msg.setSource(14704U);
    msg.setSourceEntity(43U);
    msg.setDestination(57581U);
    msg.setDestinationEntity(68U);
    msg.value = 0.46494937124705293;

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
    msg.setTimeStamp(0.3501411311386192);
    msg.setSource(55348U);
    msg.setSourceEntity(182U);
    msg.setDestination(16869U);
    msg.setDestinationEntity(227U);
    msg.value = 0.3780325980347292;

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
    msg.setTimeStamp(0.8454375828739097);
    msg.setSource(24359U);
    msg.setSourceEntity(180U);
    msg.setDestination(19169U);
    msg.setDestinationEntity(197U);
    msg.value = 0.7258581107240485;

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
    msg.setTimeStamp(0.3793784159203033);
    msg.setSource(924U);
    msg.setSourceEntity(188U);
    msg.setDestination(59613U);
    msg.setDestinationEntity(167U);
    msg.value = 0.5924066098875619;

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
    msg.setTimeStamp(0.7362321471686305);
    msg.setSource(5370U);
    msg.setSourceEntity(36U);
    msg.setDestination(48648U);
    msg.setDestinationEntity(144U);
    msg.value = 0.27197260789151234;

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
    msg.setTimeStamp(0.0007061151401146493);
    msg.setSource(58601U);
    msg.setSourceEntity(21U);
    msg.setDestination(50181U);
    msg.setDestinationEntity(201U);
    msg.value = 0.6609754361355892;

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
    msg.setTimeStamp(0.9747608298363966);
    msg.setSource(46416U);
    msg.setSourceEntity(83U);
    msg.setDestination(63007U);
    msg.setDestinationEntity(70U);
    msg.value = 0.8373878770250741;

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
    msg.setTimeStamp(0.8319304143849928);
    msg.setSource(20263U);
    msg.setSourceEntity(97U);
    msg.setDestination(43717U);
    msg.setDestinationEntity(92U);
    msg.value = 0.020121991272303075;

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
    msg.setTimeStamp(0.309792603030143);
    msg.setSource(17556U);
    msg.setSourceEntity(71U);
    msg.setDestination(43450U);
    msg.setDestinationEntity(2U);
    msg.value = 0.2390140784023831;

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
    msg.setTimeStamp(0.14717827660494964);
    msg.setSource(41042U);
    msg.setSourceEntity(119U);
    msg.setDestination(38321U);
    msg.setDestinationEntity(35U);
    msg.value = 0.2954967307012938;

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
    msg.setTimeStamp(0.20353575986435823);
    msg.setSource(41428U);
    msg.setSourceEntity(125U);
    msg.setDestination(57839U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5509321831894656;

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
    msg.setTimeStamp(0.9365603068651386);
    msg.setSource(292U);
    msg.setSourceEntity(56U);
    msg.setDestination(4676U);
    msg.setDestinationEntity(67U);
    msg.validity = 18523U;
    msg.type = 117U;
    msg.tow = 1387645665U;
    msg.base_lat = 0.5748576824685693;
    msg.base_lon = 0.29885928445605514;
    msg.base_height = 0.31559889736610014;
    msg.n = 0.727947206854451;
    msg.e = 0.9987593739975589;
    msg.d = 0.5666882962557148;
    msg.v_n = 0.42358661658809416;
    msg.v_e = 0.17998418434768426;
    msg.v_d = 0.2816204626870712;
    msg.satellites = 125U;
    msg.iar_hyp = 50907U;
    msg.iar_ratio = 0.25452894412273785;

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
    msg.setTimeStamp(0.8353625085603446);
    msg.setSource(2857U);
    msg.setSourceEntity(114U);
    msg.setDestination(12700U);
    msg.setDestinationEntity(165U);
    msg.validity = 49925U;
    msg.type = 210U;
    msg.tow = 3526348221U;
    msg.base_lat = 0.6751782832328841;
    msg.base_lon = 0.06017911950396482;
    msg.base_height = 0.0849052046112635;
    msg.n = 0.05825273047070978;
    msg.e = 0.46556063802278225;
    msg.d = 0.7586717436043549;
    msg.v_n = 0.7326378706275742;
    msg.v_e = 0.9325389138479138;
    msg.v_d = 0.33757287522475743;
    msg.satellites = 60U;
    msg.iar_hyp = 58399U;
    msg.iar_ratio = 0.17578885110005749;

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
    msg.setTimeStamp(0.28838506584238144);
    msg.setSource(38160U);
    msg.setSourceEntity(208U);
    msg.setDestination(57507U);
    msg.setDestinationEntity(55U);
    msg.validity = 45255U;
    msg.type = 191U;
    msg.tow = 1132081413U;
    msg.base_lat = 0.5997962792157602;
    msg.base_lon = 0.6312295489293521;
    msg.base_height = 0.21290058995110295;
    msg.n = 0.5669793922575114;
    msg.e = 0.5295114635032853;
    msg.d = 0.3435526126187355;
    msg.v_n = 0.6727776219462722;
    msg.v_e = 0.3067585445421366;
    msg.v_d = 0.8342976418095182;
    msg.satellites = 62U;
    msg.iar_hyp = 9326U;
    msg.iar_ratio = 0.8706304267237095;

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
    msg.setTimeStamp(0.3513359170508188);
    msg.setSource(1287U);
    msg.setSourceEntity(101U);
    msg.setDestination(43712U);
    msg.setDestinationEntity(140U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.730803029028211;
    tmp_msg_0.lon = 0.018688380889341216;
    tmp_msg_0.height = 0.16371445824752162;
    tmp_msg_0.x = 0.8198462448417967;
    tmp_msg_0.y = 0.8465568425317159;
    tmp_msg_0.z = 0.7331973113042429;
    tmp_msg_0.phi = 0.7670557018509224;
    tmp_msg_0.theta = 0.6886526298359537;
    tmp_msg_0.psi = 0.23047597842347856;
    tmp_msg_0.u = 0.994362313006934;
    tmp_msg_0.v = 0.7391234389568465;
    tmp_msg_0.w = 0.23863342283818545;
    tmp_msg_0.vx = 0.3938962995349865;
    tmp_msg_0.vy = 0.9457056969174656;
    tmp_msg_0.vz = 0.3005509211046431;
    tmp_msg_0.p = 0.2993961576619695;
    tmp_msg_0.q = 0.45077608591540064;
    tmp_msg_0.r = 0.1868183382962746;
    tmp_msg_0.depth = 0.8833944809110881;
    tmp_msg_0.alt = 0.04866950932694347;
    msg.state.set(tmp_msg_0);
    msg.type = 93U;

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
    msg.setTimeStamp(0.7240032321683907);
    msg.setSource(4698U);
    msg.setSourceEntity(50U);
    msg.setDestination(6023U);
    msg.setDestinationEntity(128U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9429946290942273;
    tmp_msg_0.lon = 0.3143718939992276;
    tmp_msg_0.height = 0.637516967034146;
    tmp_msg_0.x = 0.7241417284457263;
    tmp_msg_0.y = 0.33553261602706086;
    tmp_msg_0.z = 0.07506851003285286;
    tmp_msg_0.phi = 0.32739436602648964;
    tmp_msg_0.theta = 0.916182239244267;
    tmp_msg_0.psi = 0.5713578404316231;
    tmp_msg_0.u = 0.2908324165103935;
    tmp_msg_0.v = 0.22326370621193836;
    tmp_msg_0.w = 0.3054846678995744;
    tmp_msg_0.vx = 0.026042228574909787;
    tmp_msg_0.vy = 0.21187118523703208;
    tmp_msg_0.vz = 0.24815318027386957;
    tmp_msg_0.p = 0.551444313840668;
    tmp_msg_0.q = 0.6918804846423154;
    tmp_msg_0.r = 0.7750337837235934;
    tmp_msg_0.depth = 0.02184396135724931;
    tmp_msg_0.alt = 0.29072606898923503;
    msg.state.set(tmp_msg_0);
    msg.type = 94U;

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
    msg.setTimeStamp(0.7682028863790301);
    msg.setSource(18091U);
    msg.setSourceEntity(143U);
    msg.setDestination(63452U);
    msg.setDestinationEntity(73U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6412109383372431;
    tmp_msg_0.lon = 0.19608245427587412;
    tmp_msg_0.height = 0.9591431587829748;
    tmp_msg_0.x = 0.022533850051952742;
    tmp_msg_0.y = 0.06460619782758537;
    tmp_msg_0.z = 0.8432607659769679;
    tmp_msg_0.phi = 0.7807485409890653;
    tmp_msg_0.theta = 0.23137443058244467;
    tmp_msg_0.psi = 0.79167231653247;
    tmp_msg_0.u = 0.10334127620201072;
    tmp_msg_0.v = 0.2814680549105777;
    tmp_msg_0.w = 0.8482112666112708;
    tmp_msg_0.vx = 0.7425302443806454;
    tmp_msg_0.vy = 0.35401819773213616;
    tmp_msg_0.vz = 0.8691625063674584;
    tmp_msg_0.p = 0.449755650172072;
    tmp_msg_0.q = 0.48961363244413325;
    tmp_msg_0.r = 0.539038410505776;
    tmp_msg_0.depth = 0.6310424926975196;
    tmp_msg_0.alt = 0.6577276950907683;
    msg.state.set(tmp_msg_0);
    msg.type = 242U;

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
    msg.setTimeStamp(0.014566871569575812);
    msg.setSource(40633U);
    msg.setSourceEntity(156U);
    msg.setDestination(59249U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9485965877021529;

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
    msg.setTimeStamp(0.5399155689398495);
    msg.setSource(36795U);
    msg.setSourceEntity(4U);
    msg.setDestination(36720U);
    msg.setDestinationEntity(234U);
    msg.value = 0.2515765270879534;

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
    msg.setTimeStamp(0.3983786665666972);
    msg.setSource(42U);
    msg.setSourceEntity(74U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(25U);
    msg.value = 0.9798740533324374;

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
    msg.setTimeStamp(0.37253930803458013);
    msg.setSource(43001U);
    msg.setSourceEntity(122U);
    msg.setDestination(30436U);
    msg.setDestinationEntity(5U);
    msg.value = 0.10622486505788353;

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
    msg.setTimeStamp(0.2548662125479215);
    msg.setSource(3251U);
    msg.setSourceEntity(237U);
    msg.setDestination(13438U);
    msg.setDestinationEntity(205U);
    msg.value = 0.269249899694622;

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
    msg.setTimeStamp(0.49143903700696);
    msg.setSource(18793U);
    msg.setSourceEntity(114U);
    msg.setDestination(7279U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6623939477726035;

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
    msg.setTimeStamp(0.020765204543515936);
    msg.setSource(29159U);
    msg.setSourceEntity(58U);
    msg.setDestination(3864U);
    msg.setDestinationEntity(244U);
    msg.value = 0.026682549498585728;

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
    msg.setTimeStamp(0.015377051608902459);
    msg.setSource(26927U);
    msg.setSourceEntity(163U);
    msg.setDestination(13685U);
    msg.setDestinationEntity(233U);
    msg.value = 0.7555654727583994;

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
    msg.setTimeStamp(0.46317910220696);
    msg.setSource(1341U);
    msg.setSourceEntity(5U);
    msg.setDestination(60279U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4943787592295893;

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
    msg.setTimeStamp(0.2631351664340723);
    msg.setSource(23178U);
    msg.setSourceEntity(243U);
    msg.setDestination(8426U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5794395341609947;

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
    msg.setTimeStamp(0.026522187137968833);
    msg.setSource(30609U);
    msg.setSourceEntity(135U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(150U);
    msg.value = 0.642030440542617;

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
    msg.setTimeStamp(0.08226417536232011);
    msg.setSource(1983U);
    msg.setSourceEntity(68U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(229U);
    msg.value = 0.6209989235994436;

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
    msg.setTimeStamp(0.7849643365506246);
    msg.setSource(7343U);
    msg.setSourceEntity(124U);
    msg.setDestination(6351U);
    msg.setDestinationEntity(208U);
    msg.value = 0.7301685772309071;

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
    msg.setTimeStamp(0.03010844112432709);
    msg.setSource(2957U);
    msg.setSourceEntity(248U);
    msg.setDestination(39110U);
    msg.setDestinationEntity(193U);
    msg.value = 0.8053264517447554;

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
    msg.setTimeStamp(0.6992786759388766);
    msg.setSource(65007U);
    msg.setSourceEntity(178U);
    msg.setDestination(57195U);
    msg.setDestinationEntity(117U);
    msg.value = 0.47925725232200167;

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
    msg.setTimeStamp(0.03286597718585427);
    msg.setSource(58174U);
    msg.setSourceEntity(131U);
    msg.setDestination(53038U);
    msg.setDestinationEntity(209U);
    msg.id = 125U;
    msg.zoom = 250U;
    msg.action = 38U;

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
    msg.setTimeStamp(0.5256436107347008);
    msg.setSource(10643U);
    msg.setSourceEntity(210U);
    msg.setDestination(46340U);
    msg.setDestinationEntity(94U);
    msg.id = 122U;
    msg.zoom = 116U;
    msg.action = 150U;

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
    msg.setTimeStamp(0.6519378981366528);
    msg.setSource(30980U);
    msg.setSourceEntity(13U);
    msg.setDestination(915U);
    msg.setDestinationEntity(121U);
    msg.id = 42U;
    msg.zoom = 150U;
    msg.action = 50U;

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
    msg.setTimeStamp(0.6876644857452234);
    msg.setSource(56635U);
    msg.setSourceEntity(101U);
    msg.setDestination(15466U);
    msg.setDestinationEntity(32U);
    msg.id = 175U;
    msg.value = 0.327458950614785;

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
    msg.setTimeStamp(0.2660144509784851);
    msg.setSource(22046U);
    msg.setSourceEntity(56U);
    msg.setDestination(58981U);
    msg.setDestinationEntity(31U);
    msg.id = 132U;
    msg.value = 0.49771389026425394;

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
    msg.setTimeStamp(0.03389357717293395);
    msg.setSource(44376U);
    msg.setSourceEntity(55U);
    msg.setDestination(26075U);
    msg.setDestinationEntity(86U);
    msg.id = 165U;
    msg.value = 0.06988509302244683;

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
    msg.setTimeStamp(0.7284920644349536);
    msg.setSource(36687U);
    msg.setSourceEntity(57U);
    msg.setDestination(64831U);
    msg.setDestinationEntity(177U);
    msg.id = 198U;
    msg.value = 0.6305599856216788;

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
    msg.setTimeStamp(0.03339873940212157);
    msg.setSource(55168U);
    msg.setSourceEntity(155U);
    msg.setDestination(18032U);
    msg.setDestinationEntity(126U);
    msg.id = 96U;
    msg.value = 0.11100502098696852;

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
    msg.setTimeStamp(0.8081497905174093);
    msg.setSource(40269U);
    msg.setSourceEntity(33U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(131U);
    msg.id = 179U;
    msg.value = 0.07937399923285715;

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
    msg.setTimeStamp(0.9125169255089739);
    msg.setSource(55523U);
    msg.setSourceEntity(50U);
    msg.setDestination(47099U);
    msg.setDestinationEntity(54U);
    msg.id = 114U;
    msg.angle = 0.9088273719949508;

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
    msg.setTimeStamp(0.865843290177618);
    msg.setSource(48607U);
    msg.setSourceEntity(64U);
    msg.setDestination(10450U);
    msg.setDestinationEntity(91U);
    msg.id = 198U;
    msg.angle = 0.7886092618312601;

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
    msg.setTimeStamp(0.7889362505972866);
    msg.setSource(40629U);
    msg.setSourceEntity(250U);
    msg.setDestination(406U);
    msg.setDestinationEntity(228U);
    msg.id = 101U;
    msg.angle = 0.6627102714124059;

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
    msg.setTimeStamp(0.5932409720365092);
    msg.setSource(46845U);
    msg.setSourceEntity(43U);
    msg.setDestination(24500U);
    msg.setDestinationEntity(183U);
    msg.op = 163U;
    msg.actions.assign("COEXMHIZVUXDOUJDZAZSWCJSWFTSFNGAWREUBODEKAKJDYYBOEEMYAQZBXKVFMTXCWVMKWLKDFWUHGJEYMMKEBTSLRVJPMPGYNYHJWAWXUHQRLLJIIDCKQLWOIQOFXVJFPCZUQUPD");

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
    msg.setTimeStamp(0.2260028666392353);
    msg.setSource(16164U);
    msg.setSourceEntity(0U);
    msg.setDestination(48336U);
    msg.setDestinationEntity(233U);
    msg.op = 129U;
    msg.actions.assign("IZZYCPMRKRTJWTRJSOKZTSDDJQFDRXRSYIFQCEVNIILPGIKDAKZGUXKJBLSSRHAFVQZOEECHYSZUNCCWJDOEUJGFRGAPBHIWAOQ");

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
    msg.setTimeStamp(0.6275962278654319);
    msg.setSource(7161U);
    msg.setSourceEntity(167U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(13U);
    msg.op = 252U;
    msg.actions.assign("OVQOBULQHQTUXUHSLGCSLGAOEGDINJPCHKJUPBIVCWIEFLKOIMCTPRJRGBKGJOBXYRDYSTICSRFZRAXKHMXMSBGYNYTJTPQPWKSWDPIZLMMGFADQTEHCIXSJEASYKMQSPWMCYUADREVLXNINYZTWJZHCMXEQKZBZJDVKSOAABFWTFVOFLEOFQPMRND");

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
    msg.setTimeStamp(0.7342145039178706);
    msg.setSource(31488U);
    msg.setSourceEntity(134U);
    msg.setDestination(64096U);
    msg.setDestinationEntity(27U);
    msg.actions.assign("NXJNDYACTMAIWXDHUJQPHFLCNBSDKULMAWRSJTLSGGPTIDZZTDRNKTREOWYWBKRWDL");

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
    msg.setTimeStamp(0.2916309918368909);
    msg.setSource(13414U);
    msg.setSourceEntity(251U);
    msg.setDestination(54877U);
    msg.setDestinationEntity(150U);
    msg.actions.assign("DBNYRUZTEPXTEUNWBQJFRUIADOGHHHL");

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
    msg.setTimeStamp(0.3128405855945523);
    msg.setSource(43706U);
    msg.setSourceEntity(149U);
    msg.setDestination(32243U);
    msg.setDestinationEntity(39U);
    msg.actions.assign("RLYJEAMGUGEVLZUHODCHOWBQAXOWDSTZDILEZPMZJLRQQECLTLWVYEPIFSSQRFUUZNQDTFVFYNIFKMGNLMTRXASTSZNDPCJFVGMOGCFDYBMKVOHSSIKUVYCIZNAJXIGFJYTEQIPQDMPLGOXUBHBRYOUJHSNTXCKUWJDMMOOAZGGBIJKHWQCJYBPBPWWRUVKCELYZYTLBAHZGVRIRHVPHCARXMXTXVDPKWOJXNQRABXWQKNABFSWEFN");

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
    msg.setTimeStamp(0.0332516327621184);
    msg.setSource(63252U);
    msg.setSourceEntity(27U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(118U);
    msg.button = 34U;
    msg.value = 202U;

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
    msg.setTimeStamp(0.43989696549131374);
    msg.setSource(32343U);
    msg.setSourceEntity(130U);
    msg.setDestination(20772U);
    msg.setDestinationEntity(227U);
    msg.button = 3U;
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
    msg.setTimeStamp(0.672030373996146);
    msg.setSource(16344U);
    msg.setSourceEntity(156U);
    msg.setDestination(5565U);
    msg.setDestinationEntity(185U);
    msg.button = 8U;
    msg.value = 117U;

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
    msg.setTimeStamp(0.8955226265701356);
    msg.setSource(50910U);
    msg.setSourceEntity(148U);
    msg.setDestination(25517U);
    msg.setDestinationEntity(52U);
    msg.op = 224U;
    msg.text.assign("UKBCQTEVKMUYAJJLWQDACGBLFDSMAFOHZTZYXEHJXSYTVOFEEIFAITWRMXNXQBTLIESUHYHNKVLPGAKSVRKZHDVESGNHVPXPTCQNTRJAXUBWGVZY");

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
    msg.setTimeStamp(0.8638663167436684);
    msg.setSource(38801U);
    msg.setSourceEntity(149U);
    msg.setDestination(313U);
    msg.setDestinationEntity(34U);
    msg.op = 116U;
    msg.text.assign("WXBMTVUOSIGJKACCZEJSUHZFYHJWSBPHKDFZVPPCWOABJIALMZRSKISEXFEJUUQATHHLPPXFEMCSCEABZSOZOUGRNVLBYYVTLWTKVIGJNRXEDKQOLXLFOPKWMDAMDBFYBOODSTXVUXWKANAIUTQFCQYDVXLGWDQBJGMNMCNGAGXRFGNFKQEMIUZDDJPVLBZAQRBYK");

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
    msg.setTimeStamp(0.6223116683879014);
    msg.setSource(18775U);
    msg.setSourceEntity(203U);
    msg.setDestination(34396U);
    msg.setDestinationEntity(184U);
    msg.op = 44U;
    msg.text.assign("VZDUVUEBDWGXXEHHCLFQKXJDWXKPAEPNRKZMLBXRUMCAEUEVZNOTELDWEIFPVTMGXYYSBNPSSGHAKQWZDECNLDOIDV");

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
    msg.setTimeStamp(0.010224483238225446);
    msg.setSource(24092U);
    msg.setSourceEntity(253U);
    msg.setDestination(55550U);
    msg.setDestinationEntity(181U);
    msg.op = 31U;
    msg.time_remain = 0.6919405138240862;
    msg.sched_time = 0.7804317177552593;

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
    msg.setTimeStamp(0.3387186929514008);
    msg.setSource(9950U);
    msg.setSourceEntity(0U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(141U);
    msg.op = 153U;
    msg.time_remain = 0.23478684285503726;
    msg.sched_time = 0.7732868316935955;

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
    msg.setTimeStamp(0.41368536268739575);
    msg.setSource(2250U);
    msg.setSourceEntity(31U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(33U);
    msg.op = 25U;
    msg.time_remain = 0.2505465250584703;
    msg.sched_time = 0.4877839418193314;

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
    msg.setTimeStamp(0.9900417744709158);
    msg.setSource(14814U);
    msg.setSourceEntity(94U);
    msg.setDestination(64435U);
    msg.setDestinationEntity(29U);
    msg.name.assign("XFCFITFLBOJBZDNGVAVHLDNABZQUHGYZMCPGYWEFBYIWJRJYKOPHZYWHBFVERHOPPIDYLSFTVCVEWSNPDWZABSCXNKRLUEXEEGSTRFQGEUJJOQKARCQRHPXDVZLUIHGUOMEYZNMVQSQVWDYUNXRCMFONVQTYEOFAAXDJWORCZMSXISJLXLIAJCKPSNSTITAKTMFLQBRGKGIICBWQNLDBZMHMXDVSLPZPKCKGWMPTHUYEWJIUQDUM");
    msg.op = 10U;
    msg.sched_time = 0.1650880964908893;

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
    msg.setTimeStamp(0.9350618883515066);
    msg.setSource(55548U);
    msg.setSourceEntity(14U);
    msg.setDestination(44416U);
    msg.setDestinationEntity(23U);
    msg.name.assign("UGRDTMWPCEKRLHUIULXTPGJKXIQTMYJMNCKECTJUJHBONKRMGEQEWYFBTPIDPBHOBFKWOUNVPLFYXIZHAADYSORDSRPSHEDYGXXCBCNSDWYIWJFN");
    msg.op = 132U;
    msg.sched_time = 0.611425741369632;

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
    msg.setTimeStamp(0.6760320703562175);
    msg.setSource(41578U);
    msg.setSourceEntity(157U);
    msg.setDestination(48902U);
    msg.setDestinationEntity(162U);
    msg.name.assign("GCYDSBAZZICLHYXXQTXQUITEHTMDJYNMHEUKPKVLORIPEMHNSTYAJIKWCUGREGOFFZKAYLZZZAMZGXDUGFBMVHAHIVAFRHSNSBCERFSDMBCNTJTOOVFGYJDGBVTXZELKJGRUMJUNXOIFFSVGSRDUOYDYJPOW");
    msg.op = 235U;
    msg.sched_time = 0.6770662893275562;

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
    msg.setTimeStamp(0.3627690404616084);
    msg.setSource(29096U);
    msg.setSourceEntity(28U);
    msg.setDestination(4940U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.7286479015801384);
    msg.setSource(12479U);
    msg.setSourceEntity(9U);
    msg.setDestination(20538U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.13493739087349177);
    msg.setSource(29990U);
    msg.setSourceEntity(199U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.4280536618611578);
    msg.setSource(49688U);
    msg.setSourceEntity(38U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(208U);
    msg.name.assign("PWBUEQAPFOBEYUTTQCDIHLOJLUDFZQMKYPZGRHXVWOCTHRSMZZZEZYSWVLQKPBQBCOIRZJVAYWIPMRVJZMQGPKWOTXQXFSXDDOBNPASJEPIEKUFMCXVJFYKTZYKGDINTHXKUGJSOMYWMVTVDGSIJERNNFLACYWDLOSMFLUHKPCTUOLCJNLFFDCUQOMSNX");
    msg.state = 78U;

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
    msg.setTimeStamp(0.888033777462543);
    msg.setSource(3737U);
    msg.setSourceEntity(132U);
    msg.setDestination(37878U);
    msg.setDestinationEntity(57U);
    msg.name.assign("MHDFGELWWVVYLNGFTAZAHFAZUKPRJYQNCRBPYQSPXQMXOPSNXVGQFZVSXIYQCNAVWL");
    msg.state = 235U;

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
    msg.setTimeStamp(0.1637711182630438);
    msg.setSource(17552U);
    msg.setSourceEntity(198U);
    msg.setDestination(40223U);
    msg.setDestinationEntity(195U);
    msg.name.assign("TSGZVZXUCLAZNMJSDUGSEMSVQULBMXRVKTXIGJAMFQCITJUSRQQXABXNH");
    msg.state = 205U;

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
    msg.setTimeStamp(0.613329804644311);
    msg.setSource(30758U);
    msg.setSourceEntity(144U);
    msg.setDestination(61256U);
    msg.setDestinationEntity(169U);
    msg.name.assign("EKKLYKJNRZWWFEWYAPUSXLKXIMQMCMGYOPUSDTAUBWOARQRJBSDRRNHJHTEZZXCLBLKCQDHKRUUUONNNGIMTSSWJCZNPDKVMVGAPFHGQOJPHLDTFGMOASYSTBAFTVCZETPVYMRRFYUQSZIWDZVZUESLXDCXFAOOVYEQLFJUZPFIUPWNCIXGEVI");
    msg.value = 133U;

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
    msg.setTimeStamp(0.7693420902703191);
    msg.setSource(20436U);
    msg.setSourceEntity(230U);
    msg.setDestination(26056U);
    msg.setDestinationEntity(204U);
    msg.name.assign("UNUAXJFENNMFOTRVQMKVTIVDMQFSKWMDMEFGHDDYKCWZRUXWJLVNKLYJIZLLVOHKJZMATYCQDCLPEYQRQSPHOSQWLHDPTALUPWADFCGXAKOHGANHCVPZHCEXUZHXXTLBQTTGNQMXGEWMBCYNRZKYBFIFDAGUWYEJGRACTEWIGOFBZLZBRSKKSUIPPQXPRUDXQUVBCHONYISVSINBPFKRPRI");
    msg.value = 137U;

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
    msg.setTimeStamp(0.358008587870984);
    msg.setSource(57273U);
    msg.setSourceEntity(213U);
    msg.setDestination(51481U);
    msg.setDestinationEntity(201U);
    msg.name.assign("DFYOKUYJMFUBJAFYLLXWIAQAXENCUTMIEKBINIUHWOOIBOISVJGYLHWJFCCLVWDSWPXDRGPWGONDGSXDYQUYVSJYRBHYVWGNZBPMLLMJSARAEZBTERZTMVQAXEUFWTPIHKTWDCMHWZBJSKVPQQRBMNKPKVPXN");
    msg.value = 13U;

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
    msg.setTimeStamp(0.5272905130122505);
    msg.setSource(15689U);
    msg.setSourceEntity(230U);
    msg.setDestination(37023U);
    msg.setDestinationEntity(198U);
    msg.name.assign("QTHECELOIQQKNIXYOBMRZBAONIJEB");

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
    msg.setTimeStamp(0.6053174002375412);
    msg.setSource(34638U);
    msg.setSourceEntity(222U);
    msg.setDestination(28214U);
    msg.setDestinationEntity(84U);
    msg.name.assign("NFLEHBKRWXUVUKHRJGDTTPSLZRTSAYQGEPHKFKQVZSHRONTYCVNGQRYZVBTYUMKNSWMEKLVMBPOAXYPPRSUEJJ");

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
    msg.setTimeStamp(0.7221472207014237);
    msg.setSource(2616U);
    msg.setSourceEntity(81U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(157U);
    msg.name.assign("PFCAEEQTMWWKACMGVHTSRLUDIKQNBWZLSFVUEJUMLDWRCQBUGXMHPRKNZZBDJWXPORXVJTMGYKWVWIYTVXASSRQJZLKOOTNGJGTKDBKSDMYAPHCEXEEAXNGKPECHGJCHZZNRTLHVVKSDFJCKXBHITUSUOYMEBPWOAIYXPLPMEOBMDJPFCO");

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
    msg.setTimeStamp(0.8654407687782971);
    msg.setSource(42093U);
    msg.setSourceEntity(203U);
    msg.setDestination(10543U);
    msg.setDestinationEntity(68U);
    msg.name.assign("XPBMEEXLZSJNPCBVBCQPTPHMMYTVOQXDGRIDCWVCQYLFIBDARLOYRPLGRVIBRAAGNTEYJMUQQOATENYYBKFYHFUUXCEEHGBZKKZJHTSDXNFKCOYEMUVXZEBUCYPWIQJORWZYUNAKSSICPZWEISKLNNLLHFXT");
    msg.value = 188U;

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
    msg.setTimeStamp(0.9702937901861394);
    msg.setSource(3740U);
    msg.setSourceEntity(222U);
    msg.setDestination(37320U);
    msg.setDestinationEntity(147U);
    msg.name.assign("YYVNEMJBLJDEXILTIZUWSZQWVKTHBKDOOEAPIXWVKJCSRGPPANLTDOBWUTFPCFWGGUGZSWTKIYYUSRCFWCABPFKAHCHMTJEGAFBXZSHMQAFOQXYVMAXVYOVHRQIGGSFDORPUUKRIEXNMNSBYBKGDGHTDJVRZDZMPVLSMEFLLWKAQHOEZRDWO");
    msg.value = 240U;

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
    msg.setTimeStamp(0.2970156870972408);
    msg.setSource(60403U);
    msg.setSourceEntity(51U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(8U);
    msg.name.assign("VIVEBNQGDPBAHSKQZUUBAAFYYMEGCPHKFKEWZUHXAGSSAWJZMKWXVBSAYXDXASPMVNBXYCESTLZLIKRVCTZTQGZXCPORCMFDIEOLNOCZPJRNOUFEHFFQNISKBAUMGRRLHYQEYWQMGORWTCJYBIZKDOVJWXGMDTLVJXHFDPICIICSUIKFTQRBJHTRGVJSUGTIWVUNTDPFKVRHRBMMOOHPUDYJNCLZLNDSMF");
    msg.value = 182U;

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
    msg.setTimeStamp(0.5535273110564211);
    msg.setSource(47141U);
    msg.setSourceEntity(66U);
    msg.setDestination(57150U);
    msg.setDestinationEntity(197U);
    msg.id = 43U;
    msg.period = 2482000851U;
    msg.duty_cycle = 4131340669U;

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
    msg.setTimeStamp(0.348512291348965);
    msg.setSource(2008U);
    msg.setSourceEntity(116U);
    msg.setDestination(65003U);
    msg.setDestinationEntity(189U);
    msg.id = 117U;
    msg.period = 3761382898U;
    msg.duty_cycle = 2678035153U;

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
    msg.setTimeStamp(0.16458738064287481);
    msg.setSource(42299U);
    msg.setSourceEntity(61U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(137U);
    msg.id = 96U;
    msg.period = 2085301791U;
    msg.duty_cycle = 35219704U;

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
    msg.setTimeStamp(0.46406070407514954);
    msg.setSource(39876U);
    msg.setSourceEntity(85U);
    msg.setDestination(12220U);
    msg.setDestinationEntity(170U);
    msg.id = 127U;
    msg.period = 3299171981U;
    msg.duty_cycle = 1909622198U;

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
    msg.setTimeStamp(0.18779189333446822);
    msg.setSource(64143U);
    msg.setSourceEntity(183U);
    msg.setDestination(18507U);
    msg.setDestinationEntity(0U);
    msg.id = 120U;
    msg.period = 3521703743U;
    msg.duty_cycle = 385549379U;

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
    msg.setTimeStamp(0.24213630983132284);
    msg.setSource(32647U);
    msg.setSourceEntity(47U);
    msg.setDestination(48470U);
    msg.setDestinationEntity(155U);
    msg.id = 112U;
    msg.period = 1363082360U;
    msg.duty_cycle = 3171865695U;

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
    msg.setTimeStamp(0.0957087687938245);
    msg.setSource(6014U);
    msg.setSourceEntity(120U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.0713271737237734;
    msg.lon = 0.34970777760044447;
    msg.height = 0.9559252049240881;
    msg.x = 0.41477688864857043;
    msg.y = 0.03371840418880678;
    msg.z = 0.8178238194409642;
    msg.phi = 0.9826595997372443;
    msg.theta = 0.25612741814407514;
    msg.psi = 0.8828570226857678;
    msg.u = 0.45661794568077496;
    msg.v = 0.3012396543487308;
    msg.w = 0.950055015964603;
    msg.vx = 0.2609596293424322;
    msg.vy = 0.08700891342491324;
    msg.vz = 0.24667634921120962;
    msg.p = 0.16470978360234667;
    msg.q = 0.08126607208298686;
    msg.r = 0.3736345214350001;
    msg.depth = 0.7943323610158323;
    msg.alt = 0.4379811049173995;

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
    msg.setTimeStamp(0.474776424036614);
    msg.setSource(43184U);
    msg.setSourceEntity(166U);
    msg.setDestination(39896U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.5463271886340001;
    msg.lon = 0.1297910465935337;
    msg.height = 0.6175471949919533;
    msg.x = 0.08848181246062803;
    msg.y = 0.48135769677580786;
    msg.z = 0.4091645918206409;
    msg.phi = 0.9998528112798158;
    msg.theta = 0.534718014880327;
    msg.psi = 0.44641547551898675;
    msg.u = 0.8359264128433229;
    msg.v = 0.629727158509931;
    msg.w = 0.043381928935238956;
    msg.vx = 0.5171681354052313;
    msg.vy = 0.9410927754456825;
    msg.vz = 0.3088385536784931;
    msg.p = 0.2782947372211717;
    msg.q = 0.8119064247640623;
    msg.r = 0.472923418048139;
    msg.depth = 0.025586809428731927;
    msg.alt = 0.9090799466401943;

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
    msg.setTimeStamp(0.8619133472926539);
    msg.setSource(23137U);
    msg.setSourceEntity(249U);
    msg.setDestination(4909U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.24113483293060745;
    msg.lon = 0.7326334156728329;
    msg.height = 0.540488662713366;
    msg.x = 0.08388719827387214;
    msg.y = 0.21903099213100352;
    msg.z = 0.34665996922055164;
    msg.phi = 0.8639328354229752;
    msg.theta = 0.9942449159228529;
    msg.psi = 0.9018261059787012;
    msg.u = 0.03298283810758085;
    msg.v = 0.5244622486691721;
    msg.w = 0.049205590197982096;
    msg.vx = 0.6565760386367343;
    msg.vy = 0.05845447142578353;
    msg.vz = 0.04969300722492964;
    msg.p = 0.1856713019219297;
    msg.q = 0.040516198308292894;
    msg.r = 0.7345456884545054;
    msg.depth = 0.7454129215347532;
    msg.alt = 0.3729799683001691;

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
    msg.setTimeStamp(0.9018741097326273);
    msg.setSource(43120U);
    msg.setSourceEntity(44U);
    msg.setDestination(57988U);
    msg.setDestinationEntity(123U);
    msg.x = 0.5395675130723617;
    msg.y = 0.2706208980583027;
    msg.z = 0.18793967639568676;

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
    msg.setTimeStamp(0.1466384096628156);
    msg.setSource(933U);
    msg.setSourceEntity(47U);
    msg.setDestination(1576U);
    msg.setDestinationEntity(40U);
    msg.x = 0.6304946450181625;
    msg.y = 0.8223638826320475;
    msg.z = 0.518469306289205;

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
    msg.setTimeStamp(0.5434881280043256);
    msg.setSource(36042U);
    msg.setSourceEntity(29U);
    msg.setDestination(40723U);
    msg.setDestinationEntity(54U);
    msg.x = 0.5912149027024131;
    msg.y = 0.9978018992156007;
    msg.z = 0.8204775799563072;

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
    msg.setTimeStamp(0.7954263344849192);
    msg.setSource(3609U);
    msg.setSourceEntity(16U);
    msg.setDestination(11399U);
    msg.setDestinationEntity(246U);
    msg.value = 0.08995614847699884;

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
    msg.setTimeStamp(0.2559225397542867);
    msg.setSource(36869U);
    msg.setSourceEntity(119U);
    msg.setDestination(28466U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6727348789067659;

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
    msg.setTimeStamp(0.9397497874923189);
    msg.setSource(38610U);
    msg.setSourceEntity(24U);
    msg.setDestination(4755U);
    msg.setDestinationEntity(13U);
    msg.value = 0.46663383160831784;

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
    msg.setTimeStamp(0.4162665160999529);
    msg.setSource(44027U);
    msg.setSourceEntity(13U);
    msg.setDestination(28305U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7422178145096451;

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
    msg.setTimeStamp(0.06946137381229733);
    msg.setSource(33308U);
    msg.setSourceEntity(76U);
    msg.setDestination(4211U);
    msg.setDestinationEntity(202U);
    msg.value = 0.4826239297300762;

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
    msg.setTimeStamp(0.33995219137710075);
    msg.setSource(52393U);
    msg.setSourceEntity(103U);
    msg.setDestination(23157U);
    msg.setDestinationEntity(49U);
    msg.value = 0.675500903090291;

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
    msg.setTimeStamp(0.28369174979844136);
    msg.setSource(41198U);
    msg.setSourceEntity(106U);
    msg.setDestination(9321U);
    msg.setDestinationEntity(219U);
    msg.x = 0.8354599350282713;
    msg.y = 0.45994410480728587;
    msg.z = 0.9158273589495469;
    msg.phi = 0.964972600441971;
    msg.theta = 0.42378909036997225;
    msg.psi = 0.14163800020557293;
    msg.p = 0.4508861921424291;
    msg.q = 0.3258737326558294;
    msg.r = 0.9060524871477474;
    msg.u = 0.6132782316830626;
    msg.v = 0.46254882026817756;
    msg.w = 0.7232754333852739;
    msg.bias_psi = 0.03928558456906939;
    msg.bias_r = 0.428217648224263;

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
    msg.setTimeStamp(0.5294372289918542);
    msg.setSource(5127U);
    msg.setSourceEntity(39U);
    msg.setDestination(1582U);
    msg.setDestinationEntity(185U);
    msg.x = 0.9518045048925189;
    msg.y = 0.4878167946611608;
    msg.z = 0.839606337655128;
    msg.phi = 0.039617459344075345;
    msg.theta = 0.6104095751217747;
    msg.psi = 0.7486225502849628;
    msg.p = 0.3723782455723966;
    msg.q = 0.3943137215689262;
    msg.r = 0.29014522439725654;
    msg.u = 0.46768306649116675;
    msg.v = 0.375229414929508;
    msg.w = 0.6755310126590321;
    msg.bias_psi = 0.9274825239902236;
    msg.bias_r = 0.7039912473301152;

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
    msg.setTimeStamp(0.6560767287434852);
    msg.setSource(43833U);
    msg.setSourceEntity(78U);
    msg.setDestination(10700U);
    msg.setDestinationEntity(11U);
    msg.x = 0.13938075483331203;
    msg.y = 0.45008565186829486;
    msg.z = 0.07521846615787564;
    msg.phi = 0.04033513085459961;
    msg.theta = 0.3053412724196134;
    msg.psi = 0.9789758009607449;
    msg.p = 0.5079505426196993;
    msg.q = 0.4189798659972378;
    msg.r = 0.06487989826236429;
    msg.u = 0.44416442430765124;
    msg.v = 0.5932386221095708;
    msg.w = 0.8468159202089582;
    msg.bias_psi = 0.3052844792624413;
    msg.bias_r = 0.8776191147748557;

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
    msg.setTimeStamp(0.5871125704518733);
    msg.setSource(59377U);
    msg.setSourceEntity(124U);
    msg.setDestination(3956U);
    msg.setDestinationEntity(155U);
    msg.bias_psi = 0.6525780299862592;
    msg.bias_r = 0.06733016159082361;
    msg.cog = 0.47412172469823455;
    msg.cyaw = 0.7482299658189573;
    msg.lbl_rej_level = 0.15778057418570568;
    msg.gps_rej_level = 0.5732974860816102;
    msg.custom_x = 0.6239214187922063;
    msg.custom_y = 0.6993112513392664;
    msg.custom_z = 0.39854847911242297;

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
    msg.setTimeStamp(0.7574813259531715);
    msg.setSource(21877U);
    msg.setSourceEntity(119U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(207U);
    msg.bias_psi = 0.7588389864157522;
    msg.bias_r = 0.5123629798372923;
    msg.cog = 0.10856973024041161;
    msg.cyaw = 0.1473771418516635;
    msg.lbl_rej_level = 0.7812206446815001;
    msg.gps_rej_level = 0.012644377621922276;
    msg.custom_x = 0.7885191318649295;
    msg.custom_y = 0.26281376894444;
    msg.custom_z = 0.347252231889261;

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
    msg.setTimeStamp(0.35340322402535795);
    msg.setSource(51189U);
    msg.setSourceEntity(141U);
    msg.setDestination(23972U);
    msg.setDestinationEntity(5U);
    msg.bias_psi = 0.36611394550207177;
    msg.bias_r = 0.9168204321013641;
    msg.cog = 0.7808073553034613;
    msg.cyaw = 0.8334770800385701;
    msg.lbl_rej_level = 0.3841993078509046;
    msg.gps_rej_level = 0.9574885139072267;
    msg.custom_x = 0.5617978023182287;
    msg.custom_y = 0.9096515597095982;
    msg.custom_z = 0.8451396379390563;

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
    msg.setTimeStamp(0.59842624423633);
    msg.setSource(63117U);
    msg.setSourceEntity(246U);
    msg.setDestination(48608U);
    msg.setDestinationEntity(133U);
    msg.utc_time = 0.6526628721994198;
    msg.reason = 231U;

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
    msg.setTimeStamp(0.9601552462380791);
    msg.setSource(11728U);
    msg.setSourceEntity(131U);
    msg.setDestination(6741U);
    msg.setDestinationEntity(114U);
    msg.utc_time = 0.6578337921077239;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.9980045642466319);
    msg.setSource(11769U);
    msg.setSourceEntity(191U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(119U);
    msg.utc_time = 0.33701889864440726;
    msg.reason = 207U;

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
    msg.setTimeStamp(0.7718235192004581);
    msg.setSource(61305U);
    msg.setSourceEntity(167U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(60U);
    msg.id = 15U;
    msg.range = 0.9186428121218183;
    msg.acceptance = 69U;

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
    msg.setTimeStamp(0.6361655595201938);
    msg.setSource(10099U);
    msg.setSourceEntity(13U);
    msg.setDestination(48831U);
    msg.setDestinationEntity(92U);
    msg.id = 28U;
    msg.range = 0.06946874570014794;
    msg.acceptance = 206U;

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
    msg.setTimeStamp(0.3916198240839591);
    msg.setSource(21877U);
    msg.setSourceEntity(6U);
    msg.setDestination(59486U);
    msg.setDestinationEntity(179U);
    msg.id = 136U;
    msg.range = 0.8872906476991455;
    msg.acceptance = 242U;

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
    msg.setTimeStamp(0.9834752382648724);
    msg.setSource(14939U);
    msg.setSourceEntity(225U);
    msg.setDestination(57387U);
    msg.setDestinationEntity(109U);
    msg.type = 52U;
    msg.reason = 175U;
    msg.value = 0.731295135233904;
    msg.timestep = 0.8458879163528646;

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
    msg.setTimeStamp(0.1295113020554115);
    msg.setSource(36998U);
    msg.setSourceEntity(238U);
    msg.setDestination(39766U);
    msg.setDestinationEntity(147U);
    msg.type = 136U;
    msg.reason = 40U;
    msg.value = 0.30745233107542447;
    msg.timestep = 0.9097697623437667;

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
    msg.setTimeStamp(0.6787829441033932);
    msg.setSource(34250U);
    msg.setSourceEntity(70U);
    msg.setDestination(38174U);
    msg.setDestinationEntity(98U);
    msg.type = 117U;
    msg.reason = 215U;
    msg.value = 0.002660879925321713;
    msg.timestep = 0.09509374436648499;

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
    msg.setTimeStamp(0.22860223870397034);
    msg.setSource(255U);
    msg.setSourceEntity(5U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(160U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SZKGDHZIXJZJUZGLBBYVYFGWWNRQHQFQJEVQAGVRDCDIVXNMRBLOMDOHHKBBTCSPPEFPLEWZIZMMPSCKMAAYVOGAKNAIBAXDIKNDVLIZHWERINYMKWGWSIULTCIRINJCYRNOGBWXFFCZVGFSBRSWLQVYHER");
    tmp_msg_0.lat = 0.4399107636149143;
    tmp_msg_0.lon = 0.7433251552412713;
    tmp_msg_0.depth = 0.2388756617441744;
    tmp_msg_0.query_channel = 165U;
    tmp_msg_0.reply_channel = 149U;
    tmp_msg_0.transponder_delay = 216U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.03383772885643521;
    msg.y = 0.7573450066160908;
    msg.var_x = 0.21528764309264958;
    msg.var_y = 0.6697163472522947;
    msg.distance = 0.12384451264435858;

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
    msg.setTimeStamp(0.8330548373859712);
    msg.setSource(28554U);
    msg.setSourceEntity(176U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(62U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WOTDPVWSBNFZCXVBYKSIEIZBWQTXZZRBGRLITXJGHGHEEKUDZCQAVZBHCSPLVHUMPIGMWMLGFUSBXAXUMKODVEJOIGVHIYHDCTSLGOCBAOAVAMRZBFQALSEMEQR");
    tmp_msg_0.lat = 0.9754187908665075;
    tmp_msg_0.lon = 0.44894147112366733;
    tmp_msg_0.depth = 0.1305820836296504;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 73U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5373975967551604;
    msg.y = 0.3424624488743516;
    msg.var_x = 0.6190061685811058;
    msg.var_y = 0.9694532299525709;
    msg.distance = 0.7302843212631461;

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
    msg.setTimeStamp(0.9256668850747795);
    msg.setSource(59544U);
    msg.setSourceEntity(83U);
    msg.setDestination(10624U);
    msg.setDestinationEntity(228U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TXNAWPKPSBAWNMFWYVKYQTAIMAUSFOHHHPOTBUEZKYNIAZOHYVGWIRVEBQXCFXUUWRAOGPETKXGDGUMGFRHNKZCSCB");
    tmp_msg_0.lat = 0.4391330104530875;
    tmp_msg_0.lon = 0.2888272391429676;
    tmp_msg_0.depth = 0.41795816209674963;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 25U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.534042418596046;
    msg.y = 0.8103540138793808;
    msg.var_x = 0.18863127801713797;
    msg.var_y = 0.10362217396313977;
    msg.distance = 0.18656671231571154;

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
    msg.setTimeStamp(0.2985157901271217);
    msg.setSource(22053U);
    msg.setSourceEntity(235U);
    msg.setDestination(19277U);
    msg.setDestinationEntity(50U);
    msg.state = 200U;

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
    msg.setTimeStamp(0.2101043289227129);
    msg.setSource(52302U);
    msg.setSourceEntity(131U);
    msg.setDestination(52920U);
    msg.setDestinationEntity(84U);
    msg.state = 20U;

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
    msg.setTimeStamp(0.544133940317639);
    msg.setSource(27722U);
    msg.setSourceEntity(189U);
    msg.setDestination(46250U);
    msg.setDestinationEntity(134U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.08249595531709175);
    msg.setSource(33044U);
    msg.setSourceEntity(119U);
    msg.setDestination(27369U);
    msg.setDestinationEntity(14U);
    msg.x = 0.8788765425208241;
    msg.y = 0.23379518310884884;
    msg.z = 0.7825483178760453;

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
    msg.setTimeStamp(0.7803728167458012);
    msg.setSource(34685U);
    msg.setSourceEntity(41U);
    msg.setDestination(31523U);
    msg.setDestinationEntity(103U);
    msg.x = 0.3003668653106425;
    msg.y = 0.6371216676047192;
    msg.z = 0.2564569900896493;

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
    msg.setTimeStamp(0.6005606199087872);
    msg.setSource(23892U);
    msg.setSourceEntity(97U);
    msg.setDestination(6978U);
    msg.setDestinationEntity(241U);
    msg.x = 0.29255759651378865;
    msg.y = 0.8777505045515342;
    msg.z = 0.5275941462382854;

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
    msg.setTimeStamp(0.5888807219938513);
    msg.setSource(36634U);
    msg.setSourceEntity(168U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(39U);
    msg.va = 0.5516175503981459;
    msg.aoa = 0.7226256457307267;
    msg.ssa = 0.020157441632734918;

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
    msg.setTimeStamp(0.39541319634179306);
    msg.setSource(14984U);
    msg.setSourceEntity(214U);
    msg.setDestination(1571U);
    msg.setDestinationEntity(95U);
    msg.va = 0.7355096256805088;
    msg.aoa = 0.8359985139788156;
    msg.ssa = 0.12904737945794786;

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
    msg.setTimeStamp(0.6545115787496144);
    msg.setSource(25856U);
    msg.setSourceEntity(70U);
    msg.setDestination(42875U);
    msg.setDestinationEntity(55U);
    msg.va = 0.4233996469690706;
    msg.aoa = 0.11504727321985886;
    msg.ssa = 0.25532587214354496;

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
    msg.setTimeStamp(0.4102285485140289);
    msg.setSource(57203U);
    msg.setSourceEntity(54U);
    msg.setDestination(48641U);
    msg.setDestinationEntity(173U);
    msg.value = 0.7703812398233085;

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
    msg.setTimeStamp(0.42323109969269146);
    msg.setSource(64002U);
    msg.setSourceEntity(59U);
    msg.setDestination(32436U);
    msg.setDestinationEntity(240U);
    msg.value = 0.49205174902487314;

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
    msg.setTimeStamp(0.5901809447417135);
    msg.setSource(47427U);
    msg.setSourceEntity(140U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(235U);
    msg.value = 0.911789960255969;

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
    msg.setTimeStamp(0.20222618592776753);
    msg.setSource(2390U);
    msg.setSourceEntity(176U);
    msg.setDestination(12707U);
    msg.setDestinationEntity(152U);
    msg.value = 0.023192567468548586;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.4847818475957322);
    msg.setSource(47482U);
    msg.setSourceEntity(241U);
    msg.setDestination(39948U);
    msg.setDestinationEntity(13U);
    msg.value = 0.01702222521042629;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.8369122475828116);
    msg.setSource(18218U);
    msg.setSourceEntity(94U);
    msg.setDestination(64931U);
    msg.setDestinationEntity(36U);
    msg.value = 0.517468320693331;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.17128760449667157);
    msg.setSource(45093U);
    msg.setSourceEntity(46U);
    msg.setDestination(52667U);
    msg.setDestinationEntity(85U);
    msg.value = 0.06277240429255782;
    msg.speed_units = 168U;

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
    msg.setTimeStamp(0.44675657584336936);
    msg.setSource(63801U);
    msg.setSourceEntity(55U);
    msg.setDestination(25615U);
    msg.setDestinationEntity(213U);
    msg.value = 0.3693568582681237;
    msg.speed_units = 233U;

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
    msg.setTimeStamp(0.8329809850171943);
    msg.setSource(555U);
    msg.setSourceEntity(189U);
    msg.setDestination(52953U);
    msg.setDestinationEntity(11U);
    msg.value = 0.5326732981230863;
    msg.speed_units = 232U;

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
    msg.setTimeStamp(0.552178637022478);
    msg.setSource(442U);
    msg.setSourceEntity(222U);
    msg.setDestination(10007U);
    msg.setDestinationEntity(42U);
    msg.value = 0.4767379589329932;

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
    msg.setTimeStamp(0.10916634075178);
    msg.setSource(41699U);
    msg.setSourceEntity(191U);
    msg.setDestination(54752U);
    msg.setDestinationEntity(236U);
    msg.value = 0.3120422666663629;

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
    msg.setTimeStamp(0.7403192743487187);
    msg.setSource(39697U);
    msg.setSourceEntity(74U);
    msg.setDestination(291U);
    msg.setDestinationEntity(80U);
    msg.value = 0.2948283194535748;

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
    msg.setTimeStamp(0.14667329336654833);
    msg.setSource(46226U);
    msg.setSourceEntity(171U);
    msg.setDestination(33726U);
    msg.setDestinationEntity(134U);
    msg.value = 0.78100852121796;

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
    msg.setTimeStamp(0.3202946102198194);
    msg.setSource(1751U);
    msg.setSourceEntity(33U);
    msg.setDestination(12990U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6029172509283129;

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
    msg.setTimeStamp(0.014769383677208037);
    msg.setSource(30940U);
    msg.setSourceEntity(1U);
    msg.setDestination(40450U);
    msg.setDestinationEntity(66U);
    msg.value = 0.456180047747607;

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
    msg.setTimeStamp(0.22156745605119887);
    msg.setSource(51247U);
    msg.setSourceEntity(53U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(217U);
    msg.value = 0.24075539852281602;

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
    msg.setTimeStamp(0.12549664074409783);
    msg.setSource(38928U);
    msg.setSourceEntity(153U);
    msg.setDestination(58046U);
    msg.setDestinationEntity(53U);
    msg.value = 0.9324584509382426;

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
    msg.setTimeStamp(0.25280915708298757);
    msg.setSource(41614U);
    msg.setSourceEntity(185U);
    msg.setDestination(6105U);
    msg.setDestinationEntity(35U);
    msg.value = 0.27388753674453237;

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
    msg.setTimeStamp(0.9387481592732778);
    msg.setSource(26800U);
    msg.setSourceEntity(88U);
    msg.setDestination(84U);
    msg.setDestinationEntity(182U);
    msg.path_ref = 2135795769U;
    msg.start_lat = 0.730827316493931;
    msg.start_lon = 0.7939308501915083;
    msg.start_z = 0.8446307600372063;
    msg.start_z_units = 55U;
    msg.end_lat = 0.5516831102444397;
    msg.end_lon = 0.13001480039909075;
    msg.end_z = 0.2488929348158042;
    msg.end_z_units = 214U;
    msg.speed = 0.8513869418863141;
    msg.speed_units = 108U;
    msg.lradius = 0.0860261835423689;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.5866522057026061);
    msg.setSource(688U);
    msg.setSourceEntity(214U);
    msg.setDestination(11221U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 3483169796U;
    msg.start_lat = 0.33046590475780446;
    msg.start_lon = 0.5758731064187153;
    msg.start_z = 0.6662241294185228;
    msg.start_z_units = 216U;
    msg.end_lat = 0.12578965442673862;
    msg.end_lon = 0.6222829060982908;
    msg.end_z = 0.9127890448478457;
    msg.end_z_units = 55U;
    msg.speed = 0.44948954583090484;
    msg.speed_units = 9U;
    msg.lradius = 0.7805061268962846;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.3972822874224091);
    msg.setSource(28641U);
    msg.setSourceEntity(0U);
    msg.setDestination(5362U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 2621701733U;
    msg.start_lat = 0.39733034037797554;
    msg.start_lon = 0.9005005070544192;
    msg.start_z = 0.02517293555572886;
    msg.start_z_units = 177U;
    msg.end_lat = 0.016536939828680763;
    msg.end_lon = 0.4097260360796312;
    msg.end_z = 0.656838721306951;
    msg.end_z_units = 227U;
    msg.speed = 0.1882888136816987;
    msg.speed_units = 77U;
    msg.lradius = 0.6015297257879416;
    msg.flags = 43U;

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
    msg.setTimeStamp(0.5486522999776047);
    msg.setSource(15559U);
    msg.setSourceEntity(206U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(246U);
    msg.x = 0.49081871657728504;
    msg.y = 0.43580936693500194;
    msg.z = 0.597942424173041;
    msg.k = 0.11536946525270786;
    msg.m = 0.8104809557218273;
    msg.n = 0.8395077730575448;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.2978584606636492);
    msg.setSource(19619U);
    msg.setSourceEntity(106U);
    msg.setDestination(32367U);
    msg.setDestinationEntity(13U);
    msg.x = 0.8272505465879769;
    msg.y = 0.35051627306126987;
    msg.z = 0.4241435231724249;
    msg.k = 0.0820975274603547;
    msg.m = 0.669936722048119;
    msg.n = 0.13472066934301785;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.5315107660168944);
    msg.setSource(19964U);
    msg.setSourceEntity(142U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(242U);
    msg.x = 0.30241770148586844;
    msg.y = 0.3727793392067815;
    msg.z = 0.12325560889021658;
    msg.k = 0.8077079187649596;
    msg.m = 0.9082672098399852;
    msg.n = 0.4094225151305607;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.8529511009284452);
    msg.setSource(48334U);
    msg.setSourceEntity(135U);
    msg.setDestination(10231U);
    msg.setDestinationEntity(68U);
    msg.value = 0.7018801620129945;

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
    msg.setTimeStamp(0.07927150499942004);
    msg.setSource(43581U);
    msg.setSourceEntity(225U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8117753503489503;

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
    msg.setTimeStamp(0.15751142425975762);
    msg.setSource(21345U);
    msg.setSourceEntity(223U);
    msg.setDestination(35808U);
    msg.setDestinationEntity(48U);
    msg.value = 0.4341995570185758;

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
    msg.setTimeStamp(0.9238645269609054);
    msg.setSource(53747U);
    msg.setSourceEntity(81U);
    msg.setDestination(28249U);
    msg.setDestinationEntity(151U);
    msg.u = 0.5228590436328701;
    msg.v = 0.03493335540133258;
    msg.w = 0.3175718973770847;
    msg.p = 0.6905237335439275;
    msg.q = 0.2220078092966874;
    msg.r = 0.37725751856256073;
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
    msg.setTimeStamp(0.8986889510339859);
    msg.setSource(22714U);
    msg.setSourceEntity(45U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(53U);
    msg.u = 0.7038508410321165;
    msg.v = 0.4534971276433247;
    msg.w = 0.07073472162956906;
    msg.p = 0.7210831465873301;
    msg.q = 0.29932745728440413;
    msg.r = 0.06934686000282142;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.6673426824410694);
    msg.setSource(29349U);
    msg.setSourceEntity(224U);
    msg.setDestination(212U);
    msg.setDestinationEntity(20U);
    msg.u = 0.5831411069117027;
    msg.v = 0.47786539922199234;
    msg.w = 0.8302966354055165;
    msg.p = 0.6673657020730334;
    msg.q = 0.68950361802301;
    msg.r = 0.46730938280259904;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.3333588621246891);
    msg.setSource(1635U);
    msg.setSourceEntity(23U);
    msg.setDestination(23127U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 1270778665U;
    msg.start_lat = 0.5258247562170876;
    msg.start_lon = 0.49449186243827736;
    msg.start_z = 0.20407812826125327;
    msg.start_z_units = 131U;
    msg.end_lat = 0.6112795830272246;
    msg.end_lon = 0.740165128079722;
    msg.end_z = 0.5083844507979011;
    msg.end_z_units = 72U;
    msg.lradius = 0.48585515557312775;
    msg.flags = 168U;
    msg.x = 0.34561649238096637;
    msg.y = 0.8353004225313895;
    msg.z = 0.15359259719794216;
    msg.vx = 0.5591144482578013;
    msg.vy = 0.7933222087967889;
    msg.vz = 0.22506128137722126;
    msg.course_error = 0.0372705209721097;
    msg.eta = 12089U;

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
    msg.setTimeStamp(0.3433923196390236);
    msg.setSource(46492U);
    msg.setSourceEntity(210U);
    msg.setDestination(20758U);
    msg.setDestinationEntity(243U);
    msg.path_ref = 1751826050U;
    msg.start_lat = 0.17573140051852099;
    msg.start_lon = 0.5874087371689206;
    msg.start_z = 0.28933945437265096;
    msg.start_z_units = 25U;
    msg.end_lat = 0.30221942433739657;
    msg.end_lon = 0.36663847406586325;
    msg.end_z = 0.34001729518960855;
    msg.end_z_units = 180U;
    msg.lradius = 0.51649356066269;
    msg.flags = 229U;
    msg.x = 0.23250267280901704;
    msg.y = 0.31353311492853086;
    msg.z = 0.27476130115656583;
    msg.vx = 0.24305984268830616;
    msg.vy = 0.6865606863305477;
    msg.vz = 0.7497618332992493;
    msg.course_error = 0.45434184030627256;
    msg.eta = 32968U;

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
    msg.setTimeStamp(0.8356864791780627);
    msg.setSource(6804U);
    msg.setSourceEntity(6U);
    msg.setDestination(42462U);
    msg.setDestinationEntity(162U);
    msg.path_ref = 2716673929U;
    msg.start_lat = 0.5590872822380231;
    msg.start_lon = 0.2539619344347508;
    msg.start_z = 0.8572365958674804;
    msg.start_z_units = 176U;
    msg.end_lat = 0.09081599422745312;
    msg.end_lon = 0.9844205044260113;
    msg.end_z = 0.13604842087441427;
    msg.end_z_units = 24U;
    msg.lradius = 0.2893523741101244;
    msg.flags = 116U;
    msg.x = 0.423118087111354;
    msg.y = 0.5037847021232158;
    msg.z = 0.9695053074177117;
    msg.vx = 0.5945652517530498;
    msg.vy = 0.16568636117215618;
    msg.vz = 0.6744533668663052;
    msg.course_error = 0.3274361328076356;
    msg.eta = 4252U;

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
    msg.setTimeStamp(0.1455615285312708);
    msg.setSource(53310U);
    msg.setSourceEntity(109U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(22U);
    msg.k = 0.5202669212150058;
    msg.m = 0.2997870105253363;
    msg.n = 0.290743530467932;

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
    msg.setTimeStamp(0.2341438727044277);
    msg.setSource(51407U);
    msg.setSourceEntity(168U);
    msg.setDestination(51829U);
    msg.setDestinationEntity(45U);
    msg.k = 0.7084186795328526;
    msg.m = 0.013484783074459994;
    msg.n = 0.08224006813208073;

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
    msg.setTimeStamp(0.8079743800592772);
    msg.setSource(395U);
    msg.setSourceEntity(219U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(241U);
    msg.k = 0.5915562948427595;
    msg.m = 0.9811511013441077;
    msg.n = 0.4304203961807692;

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
    msg.setTimeStamp(0.8034764932091604);
    msg.setSource(50321U);
    msg.setSourceEntity(238U);
    msg.setDestination(4604U);
    msg.setDestinationEntity(125U);
    msg.p = 0.5170878810633313;
    msg.i = 0.7381435308080481;
    msg.d = 0.2539410045434747;
    msg.a = 0.7407978242809885;

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
    msg.setTimeStamp(0.824901134517858);
    msg.setSource(27668U);
    msg.setSourceEntity(137U);
    msg.setDestination(32177U);
    msg.setDestinationEntity(165U);
    msg.p = 0.8390448347540641;
    msg.i = 0.09124985108508255;
    msg.d = 0.8910544912480934;
    msg.a = 0.9412134552279654;

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
    msg.setTimeStamp(0.03717072135080712);
    msg.setSource(32083U);
    msg.setSourceEntity(21U);
    msg.setDestination(22140U);
    msg.setDestinationEntity(9U);
    msg.p = 0.6982370564342979;
    msg.i = 0.38419410743420634;
    msg.d = 0.25214923497753594;
    msg.a = 0.06192519800075791;

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
    msg.setTimeStamp(0.8433681754769962);
    msg.setSource(44207U);
    msg.setSourceEntity(151U);
    msg.setDestination(5047U);
    msg.setDestinationEntity(158U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.471025200281583);
    msg.setSource(38567U);
    msg.setSourceEntity(179U);
    msg.setDestination(49744U);
    msg.setDestinationEntity(250U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.9584986006499027);
    msg.setSource(9338U);
    msg.setSourceEntity(98U);
    msg.setDestination(49631U);
    msg.setDestinationEntity(134U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.5374007001686848);
    msg.setSource(45412U);
    msg.setSourceEntity(74U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(170U);
    msg.x = 0.7123822218197037;
    msg.y = 0.36707369362190667;
    msg.z = 0.5867264563712279;
    msg.vx = 0.5230357755214224;
    msg.vy = 0.9483797610834905;
    msg.vz = 0.3461334805049613;
    msg.ax = 0.1523873308454602;
    msg.ay = 0.7006716950617673;
    msg.az = 0.5452967543461842;
    msg.flags = 60265U;

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
    msg.setTimeStamp(0.12322633402669281);
    msg.setSource(56021U);
    msg.setSourceEntity(206U);
    msg.setDestination(24002U);
    msg.setDestinationEntity(104U);
    msg.x = 0.25613299416692614;
    msg.y = 0.13485172916018862;
    msg.z = 0.8719675973204419;
    msg.vx = 0.6607215143689236;
    msg.vy = 0.3354013744016635;
    msg.vz = 0.6103733990276388;
    msg.ax = 0.5676616771152497;
    msg.ay = 0.8988994321788605;
    msg.az = 0.5027256157913421;
    msg.flags = 26242U;

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
    msg.setTimeStamp(0.37187387990463405);
    msg.setSource(34677U);
    msg.setSourceEntity(41U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(20U);
    msg.x = 0.9893380854369389;
    msg.y = 0.12479831224434312;
    msg.z = 0.356649137471593;
    msg.vx = 0.45449846213430534;
    msg.vy = 0.6683424994929625;
    msg.vz = 0.6224126433203633;
    msg.ax = 0.8846587677473353;
    msg.ay = 0.6561829627235736;
    msg.az = 0.14535016671512402;
    msg.flags = 2901U;

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
    msg.setTimeStamp(0.5124592138345471);
    msg.setSource(43678U);
    msg.setSourceEntity(195U);
    msg.setDestination(57990U);
    msg.setDestinationEntity(187U);
    msg.value = 0.15903326997397138;

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
    msg.setTimeStamp(0.08627450288447303);
    msg.setSource(43878U);
    msg.setSourceEntity(31U);
    msg.setDestination(47163U);
    msg.setDestinationEntity(252U);
    msg.value = 0.40730588858328265;

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
    msg.setTimeStamp(0.39911022916949823);
    msg.setSource(33728U);
    msg.setSourceEntity(146U);
    msg.setDestination(49026U);
    msg.setDestinationEntity(174U);
    msg.value = 0.22829564841974015;

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
    msg.setTimeStamp(0.26734576207152594);
    msg.setSource(53146U);
    msg.setSourceEntity(201U);
    msg.setDestination(61294U);
    msg.setDestinationEntity(65U);
    msg.timeout = 52010U;
    msg.lat = 0.5650951480924946;
    msg.lon = 0.7593185791513184;
    msg.z = 0.15450306197184027;
    msg.z_units = 181U;
    msg.speed = 0.26489276079016644;
    msg.speed_units = 7U;
    msg.roll = 0.3442152293028795;
    msg.pitch = 0.3233215286630178;
    msg.yaw = 0.7766051395106427;
    msg.custom.assign("ISKPYNWAYAHQWXFOVYWZINLXIOUHXQSKFXGNAEWKSQPRBUHTFNMMBZQPKJOTUGAZSFMMWEIDILFGANJVHKFONRVGCWSCNUYLVJLDHXGVWVOWXZLLRXRSDRRBSDUODBALI");

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
    msg.setTimeStamp(0.03067828872952605);
    msg.setSource(49017U);
    msg.setSourceEntity(128U);
    msg.setDestination(20783U);
    msg.setDestinationEntity(102U);
    msg.timeout = 554U;
    msg.lat = 0.044598430264022326;
    msg.lon = 0.395845620171134;
    msg.z = 0.17280148348221613;
    msg.z_units = 96U;
    msg.speed = 0.2578583705383882;
    msg.speed_units = 254U;
    msg.roll = 0.5667480803077162;
    msg.pitch = 0.04942127436985666;
    msg.yaw = 0.44841675892906263;
    msg.custom.assign("EVYVEDCEDSRFPLFHGLYAMOYXNELNIJUPWPHNYBMLKOGRTNZKTWDRGZFCQCLNLBHQBXVWJZCMVEXXSAOHUGXORPZYAIZKTDKNOWFOSQOVLMIEPDDYFUGGCZNVTPJHZWAVNUBWAMBUPTCBURDDEISQTBVYSTCEHTYIOJHKMMFWBOJCQIFXEHXDIUMPQUZXSGHLKIPQSYRUHXAISZ");

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
    msg.setTimeStamp(0.10235827820116006);
    msg.setSource(30343U);
    msg.setSourceEntity(188U);
    msg.setDestination(24564U);
    msg.setDestinationEntity(45U);
    msg.timeout = 50645U;
    msg.lat = 0.666991710383484;
    msg.lon = 0.8590325057255034;
    msg.z = 0.0816502283020748;
    msg.z_units = 133U;
    msg.speed = 0.8195295679073216;
    msg.speed_units = 47U;
    msg.roll = 0.8680067206481431;
    msg.pitch = 0.6988082652042766;
    msg.yaw = 0.23012159364788687;
    msg.custom.assign("DAEKYXPXVCLDTFSHGNBMJMSRCZLKRRJBVJIGWSZCLWROLDQCXJXT");

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
    msg.setTimeStamp(0.9732037197165216);
    msg.setSource(50349U);
    msg.setSourceEntity(25U);
    msg.setDestination(37487U);
    msg.setDestinationEntity(94U);
    msg.timeout = 11783U;
    msg.lat = 0.3100276287922953;
    msg.lon = 0.21879748952692546;
    msg.z = 0.2911156447101686;
    msg.z_units = 60U;
    msg.speed = 0.2346238953395372;
    msg.speed_units = 57U;
    msg.duration = 39836U;
    msg.radius = 0.4811478744857628;
    msg.flags = 115U;
    msg.custom.assign("YOUEOTYVQXQYJDFQZIEWSPPJQXBGIPNPOFUAAIJMEAFJKGXILOVVLSPMMWNLNNRTKMKJZSBCLTKWOQPUXMZBGCIJPACVFLAUVEQVDDWFSNBAZGZKIBUMOROCJWARICICTSGTAQVODWHPTLESMHWVKEXLA");

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
    msg.setTimeStamp(0.03955868166789034);
    msg.setSource(27525U);
    msg.setSourceEntity(211U);
    msg.setDestination(36571U);
    msg.setDestinationEntity(134U);
    msg.timeout = 60881U;
    msg.lat = 0.005388755779585086;
    msg.lon = 0.28298442354141573;
    msg.z = 0.19353665589139968;
    msg.z_units = 31U;
    msg.speed = 0.9503231838910987;
    msg.speed_units = 57U;
    msg.duration = 50042U;
    msg.radius = 0.9640802923109408;
    msg.flags = 73U;
    msg.custom.assign("DPIGWCEKBKJMMSMTMDMUHFCYIZUEWLAXRPXHIKVZYDAAACAQWZWASJEOKFQUVCHZNMYCAEFDPIPTNDKSMCRQIYQGYNUKFOHIFUPTAOVNWBGXPOGVLNVOBCDEJYWZAPXPETQGDZHFNTMRTYDBOUXJLYMENRNVYTZSZDSBEDHPFVTCKWBORLFGVXJGSQXJGNXMRQFOGNIULSRZHZCKC");

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
    msg.setTimeStamp(0.5130309709308166);
    msg.setSource(17912U);
    msg.setSourceEntity(55U);
    msg.setDestination(3312U);
    msg.setDestinationEntity(89U);
    msg.timeout = 45808U;
    msg.lat = 0.10878725501175956;
    msg.lon = 0.17248408066265386;
    msg.z = 0.032984102371991786;
    msg.z_units = 176U;
    msg.speed = 0.9204793829323709;
    msg.speed_units = 72U;
    msg.duration = 63704U;
    msg.radius = 0.5241858832047326;
    msg.flags = 205U;
    msg.custom.assign("YKFNTVGATQRJKEGLPOASYPJRIMRVGDUDTKPWVIRNHGMXBYFOFFYEQMDSOFAUANFZPMJJSUCZFWAGVZXOCWILEWVORGAVUOKXYYLLTSRAJJVLCWNBUAPPBHWEXBLAHJLTPQQHYGCKSXNLWVCBIZSMXHNRX");

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
    msg.setTimeStamp(0.17979585449405366);
    msg.setSource(59378U);
    msg.setSourceEntity(28U);
    msg.setDestination(44406U);
    msg.setDestinationEntity(84U);
    msg.custom.assign("TYAGAORFYKNHVPD");

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
    msg.setTimeStamp(0.06327548426220198);
    msg.setSource(60674U);
    msg.setSourceEntity(193U);
    msg.setDestination(4009U);
    msg.setDestinationEntity(113U);
    msg.custom.assign("VINIZTOKILKSWDCVRYGVWOYWUYGCYEPDUCSHJAKNIZOO");

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
    msg.setTimeStamp(0.8492288366396193);
    msg.setSource(4355U);
    msg.setSourceEntity(50U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(7U);
    msg.custom.assign("BQIJYBOXISLZQDIXWMWMJECEAXYEGOEIEAXZBNGNFFKKFVIRRZBHFGYTWTSOEFBNWBSFZMYKDPUNXLWBLGJDQCWYIXYHJMVYPRAGOKUURMKAECASPUVIHCHUAQGTUXIJVWZHVFNYCOJDARPJJGQKPILRRRTKWHVDEYQPMPZDETSZZBVXSDVYTXTTDHRAMLMHFDASSHBBVMKHWNRZDQIWUTNCNQLGTJOMKP");

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
    msg.setTimeStamp(0.3018886482244202);
    msg.setSource(16577U);
    msg.setSourceEntity(240U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(103U);
    msg.timeout = 61319U;
    msg.lat = 0.10337604539021872;
    msg.lon = 0.9606279891197228;
    msg.z = 0.7939083626982851;
    msg.z_units = 28U;
    msg.duration = 23441U;
    msg.speed = 0.7759902157579912;
    msg.speed_units = 14U;
    msg.type = 84U;
    msg.radius = 0.4963836889821599;
    msg.length = 0.5962233253867805;
    msg.bearing = 0.20134813688585462;
    msg.direction = 68U;
    msg.custom.assign("BATSFMSGMQHKZGHCFMWOSKCSYZTMTFZQKEXVFYNDVJWXHJPRFBVMZVETGPKXQSWIYUCAOBZHILSBJWPCDLAAOUCPHVIWUXULKLYPOTQYVWNLVRBHVDYENDZDIKBXUDUEANWICGGRCZSIBALMGMDFQEWRNUQMPKBLJAETUDDUYNHYKQURRFFHJXNJSOBRENILGZMGJMCTAGKOHXLPQHNBJOEQTRJOGWPQPF");

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
    msg.setTimeStamp(0.6015664755019093);
    msg.setSource(49822U);
    msg.setSourceEntity(191U);
    msg.setDestination(40019U);
    msg.setDestinationEntity(41U);
    msg.timeout = 63063U;
    msg.lat = 0.24741703832037332;
    msg.lon = 0.017899785047136296;
    msg.z = 0.5260152702304096;
    msg.z_units = 30U;
    msg.duration = 39386U;
    msg.speed = 0.9893015329364614;
    msg.speed_units = 188U;
    msg.type = 214U;
    msg.radius = 0.6633033161804193;
    msg.length = 0.36051443832766705;
    msg.bearing = 0.5289769543374925;
    msg.direction = 182U;
    msg.custom.assign("GMOFSLMFWXIWWCNRKXCROTLQXRHNSYWWABXONZOPVPOCGHEXMHKOPWHVMLDZLREZAJAXIUNDELINYCPMWRTHMJGHDGVGVQVXALOJJQUQRFNHQORMXCPPPZQBYJQYTVSRYTAKBPOZGYBJETBYNTABNFUUOHDRSIDFFVCTBRAVGLKAWLJEZTIFKI");

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
    msg.setTimeStamp(0.7543874070261102);
    msg.setSource(40740U);
    msg.setSourceEntity(3U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(31U);
    msg.timeout = 26817U;
    msg.lat = 0.4265759139491585;
    msg.lon = 0.5546249497718024;
    msg.z = 0.7697031354283767;
    msg.z_units = 105U;
    msg.duration = 51079U;
    msg.speed = 0.3874040957083732;
    msg.speed_units = 22U;
    msg.type = 126U;
    msg.radius = 0.9898341781897;
    msg.length = 0.02550988868143156;
    msg.bearing = 0.07371471884560843;
    msg.direction = 211U;
    msg.custom.assign("TIIWLVHXVDZVCGIUZVQSTJRDWNFSOJGUWMGZFGFIWLTKQLGINWPTACTYQCXSFQPEBRQBFBHGZRMXVJPLCEDHNWKTRUSAEXEGUOQDBEKGGRPEYFDMVKKJJSOILYAZCBZHHLHIUUQYQPSIYSYKLGXESCNEKTLMFMITVLCTNOOMRWBOPZRQFYNMHRMXYVDEAVEDKDJZCJTHNNXAFWYYOBPFZNPRBXHOAKKA");

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
    msg.setTimeStamp(0.2885428921193467);
    msg.setSource(41864U);
    msg.setSourceEntity(28U);
    msg.setDestination(21978U);
    msg.setDestinationEntity(210U);
    msg.duration = 5609U;
    msg.custom.assign("QTJUEPIZIOBZRNHLGMTTEEACTCCSQHMSRKPNDMCUNMJVEEFUXWNIGVNBAMCUDOZJNDFIWCVPQAWXCYPSQPRFKKXAVOTFMYBNXOIQKYEJKUFVYZZXMAGBJVHADRYVBXFGGVBKIWIHJFUGHLADHQGJDCRYLFSLZRLOLKISWWGZNSQCSEPCWOOYHMEDRQWPAJNNRLUEFLBGIRBTWSAMOJTYPOTYPUXQTSLHKTKWHEMYBPXUXDJGZ");

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
    msg.setTimeStamp(0.2926160384866108);
    msg.setSource(19082U);
    msg.setSourceEntity(203U);
    msg.setDestination(8915U);
    msg.setDestinationEntity(244U);
    msg.duration = 59794U;
    msg.custom.assign("KWMMLRNJJPURTEHYCZCYHAOQSFAWZGEOLFIZSVXPPCJEZHAZMYWIVXXIRQMLWJDDEIIULKJHGVTKSLDDYCLOWXYRCBTCGHKTVUGDPMADHJSSQSBPUYEWFDIKNCPBLRXFRJWKENBKZEODMHHAQUCNDZQLNLMMGTGTRFNXUBGFUJBTVMHIXGPOFXTAOPATZPWIFBYSRASJYZWEXKYGQBOSCONQLBCUMF");

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
    msg.setTimeStamp(0.8997411530286398);
    msg.setSource(56134U);
    msg.setSourceEntity(104U);
    msg.setDestination(16728U);
    msg.setDestinationEntity(45U);
    msg.duration = 25236U;
    msg.custom.assign("QNCTRRWJFAUDOOIRSGZNHJITYQZUNSBIWHHZGFMYERTCIPEPLQNZHTRDJXZBSPLGKPEAZPMDQOHMBBNDOUJWKIWVUTLUYAVFNWQWCOLXYVALSFYDSOILQFDTDKQAHOPXIMPGXYXISAEKDMFVXLKRXPKABVAJIBLJNOHTNPZORBVRWUXODWIVUKYBCGSRNVVMHSZG");

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
    msg.setTimeStamp(0.1544118584123213);
    msg.setSource(2327U);
    msg.setSourceEntity(108U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(1U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.14662273875684928;
    msg.control.set(tmp_msg_0);
    msg.duration = 47200U;
    msg.custom.assign("NWXPDPDPWBHXFREMBSFQORXBSYZYZLORKBVAGEXFJRHFHJPZFAYWHIRNDTNNZVFWXSCCBAUBGYFGMTHYOZQEACVNZKISIQBWMZBOEXGPEMGQNUO");

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
    msg.setTimeStamp(0.5276785549238246);
    msg.setSource(7378U);
    msg.setSourceEntity(44U);
    msg.setDestination(64342U);
    msg.setDestinationEntity(6U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7122118772896917;
    msg.control.set(tmp_msg_0);
    msg.duration = 658U;
    msg.custom.assign("EILBQLKDCVXGAMNDELSJNNHSKDKBVFGNABQTJPWHUJPEEZAUIJOFOBKOUUJKLCYNYRPSAKMDVGZFEGLFHUHXNMPSYSPWUOWLWZCMTMYGATXXKXYNMQUCFBOOHYIRCP");

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
    msg.setTimeStamp(0.17442896202368297);
    msg.setSource(10974U);
    msg.setSourceEntity(162U);
    msg.setDestination(53597U);
    msg.setDestinationEntity(119U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7917900503379508;
    msg.control.set(tmp_msg_0);
    msg.duration = 3991U;
    msg.custom.assign("ILAFMDEBEJNGQXKSGUWXCO");

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
    msg.setTimeStamp(0.8788849840804099);
    msg.setSource(39411U);
    msg.setSourceEntity(111U);
    msg.setDestination(49297U);
    msg.setDestinationEntity(89U);
    msg.timeout = 11533U;
    msg.lat = 0.9727945418705082;
    msg.lon = 0.9205618959194698;
    msg.z = 0.06924172423551656;
    msg.z_units = 237U;
    msg.speed = 0.41147635059376786;
    msg.speed_units = 154U;
    msg.bearing = 0.03741925129672141;
    msg.cross_angle = 0.8024735971080099;
    msg.width = 0.6510565044465337;
    msg.length = 0.5630333998642543;
    msg.hstep = 0.8103722494157012;
    msg.coff = 144U;
    msg.alternation = 214U;
    msg.flags = 57U;
    msg.custom.assign("TGMBCDSXHRMZTBUMSOLEJHHHXKCXUHCQMPLF");

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
    msg.setTimeStamp(0.8859443929390883);
    msg.setSource(56971U);
    msg.setSourceEntity(17U);
    msg.setDestination(3577U);
    msg.setDestinationEntity(216U);
    msg.timeout = 13864U;
    msg.lat = 0.3757084516516832;
    msg.lon = 0.07761574765773493;
    msg.z = 0.15643690750360895;
    msg.z_units = 87U;
    msg.speed = 0.5687240478426914;
    msg.speed_units = 124U;
    msg.bearing = 0.8790777552687129;
    msg.cross_angle = 0.9903873425763999;
    msg.width = 0.8913525313512917;
    msg.length = 0.28774987536046237;
    msg.hstep = 0.7944273457204809;
    msg.coff = 3U;
    msg.alternation = 123U;
    msg.flags = 210U;
    msg.custom.assign("AMQWXEXVSUNZTULCBIXFFVALETJWOGVRVNDRIIHELKMOHUVIGCMYZJJOMLBDEUKSXSUATHQDLCSQEFKCDCCXGWMICOUTOTRVGPPGNFBVBTRWWNFNYYJQRAPPHHLPIISOEKKLFDSJJXLRQHMAZZU");

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
    msg.setTimeStamp(0.572509354667131);
    msg.setSource(1023U);
    msg.setSourceEntity(161U);
    msg.setDestination(41966U);
    msg.setDestinationEntity(93U);
    msg.timeout = 52751U;
    msg.lat = 0.1832760270803061;
    msg.lon = 0.1211833026683432;
    msg.z = 0.31155084232866004;
    msg.z_units = 178U;
    msg.speed = 0.730296814493671;
    msg.speed_units = 22U;
    msg.bearing = 0.5923998815206531;
    msg.cross_angle = 0.8433225228254695;
    msg.width = 0.7671672633868313;
    msg.length = 0.22798465417410496;
    msg.hstep = 0.380226356618833;
    msg.coff = 192U;
    msg.alternation = 37U;
    msg.flags = 150U;
    msg.custom.assign("WNNUVUQJACAJNEFXZHADDFREBHUYJBZOQFAPYUIMKZOPRGICKVZSUVEPCDSDYJHGCGDHMAPUEOSGBOXASNIKNQ");

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
    msg.setTimeStamp(0.4116445123160716);
    msg.setSource(14071U);
    msg.setSourceEntity(3U);
    msg.setDestination(28465U);
    msg.setDestinationEntity(15U);
    msg.timeout = 47794U;
    msg.lat = 0.5665548381312628;
    msg.lon = 0.9948441232780406;
    msg.z = 0.28390120142909037;
    msg.z_units = 160U;
    msg.speed = 0.9338949710700465;
    msg.speed_units = 25U;
    msg.custom.assign("MZOJYHVBFOMBLQRFTCCRWIJGRRJYZSDTSXHMACBFLEWHSGBXHLPLZNTJXAEPXAWPTJIZBOCPYCGKRMUTYONUQSKWGOQMYIAJDHNVBBPUARGQSUSGPIXNQFLIVDNKUFOQJBIDNSEJYIQGTAWTEKMOQCVXHDFXICGEPLSUZRNHROJTTMMJDRWZSRKQCWNILFZQUUHUDFXCKDV");

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
    msg.setTimeStamp(0.6805847674055218);
    msg.setSource(40773U);
    msg.setSourceEntity(212U);
    msg.setDestination(57305U);
    msg.setDestinationEntity(72U);
    msg.timeout = 37176U;
    msg.lat = 0.29926024823513475;
    msg.lon = 0.3395103752846832;
    msg.z = 0.2975222256477248;
    msg.z_units = 66U;
    msg.speed = 0.7942074681686121;
    msg.speed_units = 41U;
    msg.custom.assign("USSOVZWMYGMAURHJBQKVAHXDYATJBBDMVWUZTLRWNDYCPGQUFFSIHECOAKKXXGFZYZOPRMMNFYECYAXQMXBKFNRBDFJQVZPHJLVBIUCRBTOESTUCVJUZDTOMIYLZLFFWQEXFBLVZJHD");

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
    msg.setTimeStamp(0.8967999572376165);
    msg.setSource(29897U);
    msg.setSourceEntity(250U);
    msg.setDestination(27502U);
    msg.setDestinationEntity(36U);
    msg.timeout = 56017U;
    msg.lat = 0.5512164172422838;
    msg.lon = 0.28034453484253086;
    msg.z = 0.16786074145568353;
    msg.z_units = 42U;
    msg.speed = 0.13226613125082765;
    msg.speed_units = 81U;
    msg.custom.assign("VELCXJHXZFVTIALZZNHBHMJBRMPHTHYOPJLOQHQNVZBJNYTKEYJOYFXBYAQRQSFDFOFZNBDJIVYPQUUFSFCRQNBQMSSSTGQTXTGWQGVGAUXRXBOYCSAEGHDZZNUGKOVJMOEIRCPOGWDLEHBWLMDAPIKXSORPLCNKUKYQBAIUGWTFARKWEUGO");

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
    msg.setTimeStamp(0.120867256390091);
    msg.setSource(34760U);
    msg.setSourceEntity(145U);
    msg.setDestination(37558U);
    msg.setDestinationEntity(19U);
    msg.x = 0.23444367344259176;
    msg.y = 0.05613007287432492;
    msg.z = 0.10105995221375019;

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
    msg.setTimeStamp(0.7152036150866906);
    msg.setSource(55775U);
    msg.setSourceEntity(73U);
    msg.setDestination(10806U);
    msg.setDestinationEntity(233U);
    msg.x = 0.5096215384139742;
    msg.y = 0.4698096968008927;
    msg.z = 0.735634178795871;

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
    msg.setTimeStamp(0.0645710957921426);
    msg.setSource(40008U);
    msg.setSourceEntity(123U);
    msg.setDestination(32250U);
    msg.setDestinationEntity(19U);
    msg.x = 0.22200928037828926;
    msg.y = 0.9426643414112464;
    msg.z = 0.8299575625876734;

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
    msg.setTimeStamp(0.7450759444804734);
    msg.setSource(55215U);
    msg.setSourceEntity(139U);
    msg.setDestination(3341U);
    msg.setDestinationEntity(47U);
    msg.timeout = 55329U;
    msg.lat = 0.4951100266999847;
    msg.lon = 0.22378471489366158;
    msg.z = 0.2989524162891476;
    msg.z_units = 234U;
    msg.amplitude = 0.06779390051265943;
    msg.pitch = 0.10818768573053716;
    msg.speed = 0.9363645361929724;
    msg.speed_units = 31U;
    msg.custom.assign("JUTNGZUQKDBSCMAYGIMLTAIEOYRAXORUGQQWSNUMYVJEBSWTPPNLBXSGDPFPYGZAZPZMAVRJATVCKWWXIVYSQERSHQTDJZMEOPINJPHCUDSKMXDAFKTBPEWCWWHNBQFKRVVUGHYHAIRHIJMZZOLBLYHLGBJBQHOLNAQIEMFIFORNRCZXLCZXKTECHFGEOMPIGUISEJAHKTNWBDKFQJUYGLPDRFWETXUYKCKDXCFN");

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
    msg.setTimeStamp(0.4261013199900888);
    msg.setSource(18779U);
    msg.setSourceEntity(225U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(146U);
    msg.timeout = 38762U;
    msg.lat = 0.13658500047261035;
    msg.lon = 0.20634717343888465;
    msg.z = 0.3494369204214639;
    msg.z_units = 61U;
    msg.amplitude = 0.31501844185359684;
    msg.pitch = 0.5905476466975671;
    msg.speed = 0.6397615410404333;
    msg.speed_units = 152U;
    msg.custom.assign("KLXIEBBSFSAPEYMDHAXDPPYDSQNRVMQRNQBYZQFHJKHCQIYBRAOFDJDWEXGPKKTQVRUWNFBFTXVQSOLZFIKUSORSVZWGPKYDJPQAXRWAOFYRJGSQMGAXDZZEHOOFIEMVIGCJNZTGBEGKLFWCVUHIMPCICJ");

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
    msg.setTimeStamp(0.3690032534066775);
    msg.setSource(55355U);
    msg.setSourceEntity(94U);
    msg.setDestination(3565U);
    msg.setDestinationEntity(146U);
    msg.timeout = 3591U;
    msg.lat = 0.9216446252480904;
    msg.lon = 0.04494973940776459;
    msg.z = 0.09338175103523982;
    msg.z_units = 196U;
    msg.amplitude = 0.6162192427986724;
    msg.pitch = 0.9857091047989531;
    msg.speed = 0.9329163244324468;
    msg.speed_units = 156U;
    msg.custom.assign("WYNRKKQAGAJUUKJQTPTJBYDHAKMLIHDOZMABLQRSGMJISLBTKTOSVAOFUENQFRPHTMYFMMMNUYUWCXHXGAPBWPLJFDHIJMVEFPCNEUZLACTIXDOPGNNBPXGVNLFYZGBSADDCZKGXEJNOEHSFWRSRLQWBEGYYWHPNLXVBTYGHHIOBQAKNTXOIZLXRMSCWVVJWRPUQWEBZRFFCVQMTCEQOIIVHJZZYZGKYSJDPRVD");

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
    msg.setTimeStamp(0.3199699436959015);
    msg.setSource(27492U);
    msg.setSourceEntity(240U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.4043149064812608);
    msg.setSource(21665U);
    msg.setSourceEntity(13U);
    msg.setDestination(55565U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.2550556278437246);
    msg.setSource(41886U);
    msg.setSourceEntity(45U);
    msg.setDestination(18539U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.2705826265374949);
    msg.setSource(59700U);
    msg.setSourceEntity(47U);
    msg.setDestination(29311U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.6926214982630664;
    msg.lon = 0.838714800367022;
    msg.z = 0.1439143286003759;
    msg.z_units = 69U;
    msg.radius = 0.5843189160609631;
    msg.duration = 9385U;
    msg.speed = 0.7886090190792195;
    msg.speed_units = 187U;
    msg.custom.assign("MFOWDNGWIDFGYUKYTQGCBGEPESQHWKTPWHUZWAJOEKPKCMLVJAJJNREUOQDEEWVPURSXADHZCJCQCOFLHLIVYXEJPKMNFWEIJZGYAFMRZIMIVBRDZBKNSUVNTHUBROLRNDSXPGRCAJXOBLEPY");

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
    msg.setTimeStamp(0.946355803216109);
    msg.setSource(56249U);
    msg.setSourceEntity(151U);
    msg.setDestination(53733U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.11449551252042944;
    msg.lon = 0.5123607264226392;
    msg.z = 0.007407998831084339;
    msg.z_units = 144U;
    msg.radius = 0.8036607847823148;
    msg.duration = 55173U;
    msg.speed = 0.27950623743490743;
    msg.speed_units = 208U;
    msg.custom.assign("JLVGVNMARPBHNZIQUIZUURZYYMQQUGYSOWXXJSYEIGMZOVIDODDUNLEMHBUBGNJRETHDFKGDEZYQKSLEIXQZEVMMEHCIJKQFAZTVKJQCBHUVTV");

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
    msg.setTimeStamp(0.3703341354681269);
    msg.setSource(59544U);
    msg.setSourceEntity(185U);
    msg.setDestination(6573U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.5289212800849802;
    msg.lon = 0.8252812169477521;
    msg.z = 0.08891152799016588;
    msg.z_units = 59U;
    msg.radius = 0.7691822707128344;
    msg.duration = 53348U;
    msg.speed = 0.5160939077105103;
    msg.speed_units = 39U;
    msg.custom.assign("PBQDAIEPOYNYEKOHHFEOVVRBUWIZHAPJFERWSYLVHQTIPRNUMICYVLHZMXTUEJSXKYLDRYWJZUGJBAGVPQCKNPISTTFOSRMKQEYBZJGJJXQNHQNNKGNAWKMCABGRVEFKHOLAOOZLSUKVDZCUGCYFXWCEWOQWADI");

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
    msg.setTimeStamp(0.06464383314777011);
    msg.setSource(57198U);
    msg.setSourceEntity(229U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(177U);
    msg.timeout = 25977U;
    msg.flags = 226U;
    msg.lat = 0.98472745424971;
    msg.lon = 0.36526177533955395;
    msg.start_z = 0.11051717596690003;
    msg.start_z_units = 111U;
    msg.end_z = 0.6615381626019886;
    msg.end_z_units = 128U;
    msg.radius = 0.789441047164345;
    msg.speed = 0.35590094465124134;
    msg.speed_units = 64U;
    msg.custom.assign("OJYIJRTHHBIMOMLDTPAFXBHFPJTGFWZDGAYNEXPXJMWUMNCAHQYPYEOMABEJRDDQNUUVRESDIEKXZEFZACTCFQUSVTWHVOUPUALIVDNORRZIFDPRNTLQOYIGFZSMRHPOEJHXLWIBZCRVFHSQBEAOWIFQEIQYGVWXLQCMKGINWHCXBYCXTQGPWVUGUOOJBUKMNBSVKNJCBKLZGKWDLVASJSZHPFKTUZKYZTMQAGJDCTNLXKSK");

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
    msg.setTimeStamp(0.43295268824263156);
    msg.setSource(23021U);
    msg.setSourceEntity(216U);
    msg.setDestination(18835U);
    msg.setDestinationEntity(62U);
    msg.timeout = 40897U;
    msg.flags = 238U;
    msg.lat = 0.9011287698326834;
    msg.lon = 0.47926298622296115;
    msg.start_z = 0.30203885040534306;
    msg.start_z_units = 198U;
    msg.end_z = 0.8422783315763336;
    msg.end_z_units = 176U;
    msg.radius = 0.3180121402727122;
    msg.speed = 0.6765511150248131;
    msg.speed_units = 166U;
    msg.custom.assign("PGATOIWXGDATFUARNWNTXMYQERJQKPKHKYSXVZSBDCFXZVKWLDFVXGUNIFCEUUJAIOSHQLDWWVJCMLMVBYYCUDPIQYFMIXSKWALYFMWCGQIZLJLUGHYYBVZTFSJBZFNKTSCIPJUNBCQJHTZPXOLKUEPWIFQOQUSZCRRCDAKOZNTEVSLEPIHDTPGCE");

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
    msg.setTimeStamp(0.5874719513677457);
    msg.setSource(11328U);
    msg.setSourceEntity(217U);
    msg.setDestination(45977U);
    msg.setDestinationEntity(200U);
    msg.timeout = 19194U;
    msg.flags = 100U;
    msg.lat = 0.3994352616356541;
    msg.lon = 0.8756975064443886;
    msg.start_z = 0.08443829436029371;
    msg.start_z_units = 202U;
    msg.end_z = 0.6766712476796205;
    msg.end_z_units = 203U;
    msg.radius = 0.056906769102777144;
    msg.speed = 0.21556420042094793;
    msg.speed_units = 29U;
    msg.custom.assign("ZBILIZPHEWSKIUQTQOXTCKWGCKPHOPECVTAURRELXDRDATUWHQAHMFKZGJLFESMQAJLWMJUIVCHHXSUUHKLYMIUNPYCBMUAJTYLJFPGZBEVODZBTHFUFORDFXBVRTZPOLMWDFZQIPSHFWAZRKSCDCYMRNMPN");

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
    msg.setTimeStamp(0.6901892931796371);
    msg.setSource(19038U);
    msg.setSourceEntity(248U);
    msg.setDestination(24015U);
    msg.setDestinationEntity(215U);
    msg.timeout = 6795U;
    msg.lat = 0.06581317143763887;
    msg.lon = 0.1808771880636053;
    msg.z = 0.7918243316056057;
    msg.z_units = 210U;
    msg.speed = 0.09061898523511813;
    msg.speed_units = 33U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.049257677565196833;
    tmp_msg_0.y = 0.8962744416619987;
    tmp_msg_0.z = 0.5799380791856072;
    tmp_msg_0.t = 0.674204033666555;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EXBFUANATWUYDYGWTJYLEWZZHLICHKVJHGOEVWKRKDPMKOMLZGAYHUJABIXFTCHWQPBGCMFQDPWDJKGSYPHLSMXNFQOOCSGBUQSSUQRCLPLINTPXQEAWZABAHDCZIAGRHGQVOVWRGEJIJMVTRVIZDYSUXVYNDMKKYFRXCWLNRTQMVOZLETIFIFBBWBJDUAJPSCCYOUHNNKZNSEBNMAQLXTFEERVSZZOXOFTC");

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
    msg.setTimeStamp(0.07379889025954323);
    msg.setSource(3737U);
    msg.setSourceEntity(21U);
    msg.setDestination(50179U);
    msg.setDestinationEntity(118U);
    msg.timeout = 33136U;
    msg.lat = 0.9259099745245619;
    msg.lon = 0.7786123735178919;
    msg.z = 0.15477250636062334;
    msg.z_units = 163U;
    msg.speed = 0.5853424599167749;
    msg.speed_units = 178U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5189817194117191;
    tmp_msg_0.y = 0.4646306977972299;
    tmp_msg_0.z = 0.7493646918488754;
    tmp_msg_0.t = 0.9637558797266138;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SGFNDKOOEHEMRRMZHCWPESKQFYXOFRAUQZJWTAWJ");

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
    msg.setTimeStamp(0.5506397797010055);
    msg.setSource(43582U);
    msg.setSourceEntity(234U);
    msg.setDestination(31301U);
    msg.setDestinationEntity(212U);
    msg.timeout = 52833U;
    msg.lat = 0.707579127839898;
    msg.lon = 0.30281296471039554;
    msg.z = 0.896729768335569;
    msg.z_units = 177U;
    msg.speed = 0.009418264774526452;
    msg.speed_units = 6U;
    msg.custom.assign("QFHLLXGOESZAWMBYLGIECQZASTNCQXLVUTFVPFPFEURGDPJOFZKHZOVOBYKHQPBZFWEJLOMNWKZVUZBIYGYUMDQTONYJBKCPEXRSJCMXQJWWMCVALAKIHOSHJMLTDVBNSNKRKMIYWNGJZKVCIANDKFRIBIBMBIYULNGSVRQFYSPWBILHCSGWITXT");

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
    msg.setTimeStamp(0.07843408077880798);
    msg.setSource(15476U);
    msg.setSourceEntity(75U);
    msg.setDestination(49531U);
    msg.setDestinationEntity(101U);
    msg.x = 0.2384973043182943;
    msg.y = 0.9409989469013046;
    msg.z = 0.8970125573354678;
    msg.t = 0.15416980824049897;

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
    msg.setTimeStamp(0.3938147901480239);
    msg.setSource(10175U);
    msg.setSourceEntity(22U);
    msg.setDestination(19265U);
    msg.setDestinationEntity(122U);
    msg.x = 0.5722812185107461;
    msg.y = 0.5759046567283477;
    msg.z = 0.13936977872845535;
    msg.t = 0.0874952840499692;

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
    msg.setTimeStamp(0.908998474731237);
    msg.setSource(8828U);
    msg.setSourceEntity(190U);
    msg.setDestination(12976U);
    msg.setDestinationEntity(133U);
    msg.x = 0.24816869778401263;
    msg.y = 0.1843966950431164;
    msg.z = 0.49122932833202204;
    msg.t = 0.06083320901945455;

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
    msg.setTimeStamp(0.7765005747575788);
    msg.setSource(59303U);
    msg.setSourceEntity(112U);
    msg.setDestination(33096U);
    msg.setDestinationEntity(88U);
    msg.timeout = 18009U;
    msg.name.assign("LVBJTBCKOJFXDLKNAHDBTEZNFNEGKCNRCQEHOIQURPVIUPJXDSJWXVHUADQWSJRMCYNHXNHFOEZEMZXMXTGPRGTLYMHJUVGLJYENQOMPNULFFCWTKDYNRRQUBHZTMOWIDFGQQGONWZTFCAGKBPWAKFISTCECEARAMABFUZRRPIDIUPPELBVIWJGSYPJWVWBMXJPHUXGLHHDKOXYASTAZLEYVSGVSLRZYYKDMBZ");
    msg.custom.assign("IHXIRUFYHYDQJYAHWPYUELYOMNWNXPFLTTRBFHBBUUGYAMYIZJQXSPQERVDXUZHNJOOSNCGSCLLVPNKUIXJDRQCHWIGDQCOUTQJTULIAAOBMGEKWGZSMQRVGZHFLCLREJNKHADJBRFBGPC");

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
    msg.setTimeStamp(0.31222567903641096);
    msg.setSource(32703U);
    msg.setSourceEntity(51U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(190U);
    msg.timeout = 33422U;
    msg.name.assign("LNAGOQLNSAEWSNEWRMTSPCDVVJUYWHBAYMOJKZUJAKCXHRGVMDGKHCTWYOCIYFYTBLFFDCTURZFJQUNSGMKCRBWIWDHKFIOKLBDIHXVZDCPFXJWKOZAQEIIUXBEGQMYFVFPNLHTLGOCPPLIXGQGQUBUEEJGOREUHKYPJOGZPDSXQMNRNWEFDLMOTRAYICCMJNUTXBQSRPVEZSDEXVWW");
    msg.custom.assign("YLRETCVAWXBAXLGVRFNFJPYCZPEIGGQIYJMUBXZIBJZKRSVLOPGHPQQLPUGAVNEEDRFQPZYQOASXMCDTLBIAFYRACKMKGCNNVTUVOHAPSJZLTXBVKXDXTXMOLDKBQNZYEJKUZUMFLZSVX");

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
    msg.setTimeStamp(0.49952565604276844);
    msg.setSource(20245U);
    msg.setSourceEntity(151U);
    msg.setDestination(47780U);
    msg.setDestinationEntity(162U);
    msg.timeout = 26670U;
    msg.name.assign("TKMYNQPCUTHSAVPJNPASJJXAWFMEUOIQAV");
    msg.custom.assign("JDRSDLZBJSUURDVAPCFOAVGLQTWUTFQRCTUYIJAZWBMMWSICBHKHVCEOMTKLNSMFNWQIBNDGIFHXFMEFAYLRQPYGVKIZ");

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
    msg.setTimeStamp(0.8614473614361899);
    msg.setSource(1829U);
    msg.setSourceEntity(214U);
    msg.setDestination(46507U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.7786508899389498;
    msg.lon = 0.5538716062372888;
    msg.z = 0.36324334891391485;
    msg.z_units = 11U;
    msg.speed = 0.5448924327006447;
    msg.speed_units = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17726U;
    tmp_msg_0.off_x = 0.3574424037349204;
    tmp_msg_0.off_y = 0.768171810282139;
    tmp_msg_0.off_z = 0.00023995922060560115;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7646407043667803;
    msg.custom.assign("NPMXNUPGSWLJCEMSXROQHJQDTRWTIZJXLYZWQLTSXFJWXHFMHDJXBCFQDVULTSUXYZPAFZNRKKDTVRGQLGMEQVGDLWLCVYZREYLHFBKIJWYZFXAVCQDORIRHYF");

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
    msg.setTimeStamp(0.30571924142397044);
    msg.setSource(65072U);
    msg.setSourceEntity(144U);
    msg.setDestination(22652U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.5727688417115717;
    msg.lon = 0.5704498689587069;
    msg.z = 0.7970620196190538;
    msg.z_units = 187U;
    msg.speed = 0.16646680037764372;
    msg.speed_units = 41U;
    msg.start_time = 0.02086055112978047;
    msg.custom.assign("PHIRCSVJFVKDUIRYGXGEOVDGVHFEFCMNCIAWFHABNVETDXUPOYAIRKYSYJBBWSZMDQWFRKLUJXBDOULIXLKQBUPNAOEXWVGSATNTCZQKBCJIQJEEMYLMAZKMQSRNENYKVQUXXCHQTUWUYCFLTZSZHAKCTBMZSTRRXPJHLPPWDWFBYJZMPGHAZGKVNTSTODMWCXMOVLPRJBFQEGRWUJSADZLOIL");

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
    msg.setTimeStamp(0.8366897220534223);
    msg.setSource(17197U);
    msg.setSourceEntity(13U);
    msg.setDestination(30669U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.8720434238466268;
    msg.lon = 0.7715771511937882;
    msg.z = 0.44099235840017914;
    msg.z_units = 180U;
    msg.speed = 0.7409714416978073;
    msg.speed_units = 1U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8647666478775478;
    tmp_msg_0.y = 0.5542631050930182;
    tmp_msg_0.z = 0.5778020984727354;
    tmp_msg_0.t = 0.5666720992406075;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.39942355707927424;
    msg.custom.assign("NCNRYESKPLMJKIBOAPVFXQXEOSPRIIYUCDJPGJAHSGBSZDKTYXXAWSZRJDCFHWYZZCZQNZPGAPJNVQLSYBJOKHMGYJEEUZGQVTIRDGDTFKAEODJCONXVSUANFILGLKFQEV");

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
    msg.setTimeStamp(0.5511519385804733);
    msg.setSource(46379U);
    msg.setSourceEntity(252U);
    msg.setDestination(64305U);
    msg.setDestinationEntity(57U);
    msg.vid = 46025U;
    msg.off_x = 0.5215179049253158;
    msg.off_y = 0.41193389886224163;
    msg.off_z = 0.6886639055923574;

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
    msg.setTimeStamp(0.2520856794815728);
    msg.setSource(4167U);
    msg.setSourceEntity(229U);
    msg.setDestination(41761U);
    msg.setDestinationEntity(111U);
    msg.vid = 49859U;
    msg.off_x = 0.11303446533887751;
    msg.off_y = 0.518999433010367;
    msg.off_z = 0.6878373471534054;

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
    msg.setTimeStamp(0.492215615814225);
    msg.setSource(6737U);
    msg.setSourceEntity(254U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(137U);
    msg.vid = 45252U;
    msg.off_x = 0.17504253705155348;
    msg.off_y = 0.005406859248303197;
    msg.off_z = 0.42088855410790316;

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
    msg.setTimeStamp(0.13366784389734698);
    msg.setSource(15088U);
    msg.setSourceEntity(79U);
    msg.setDestination(35993U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.26528124968740896);
    msg.setSource(35762U);
    msg.setSourceEntity(148U);
    msg.setDestination(48334U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.14268045728942103);
    msg.setSource(49338U);
    msg.setSourceEntity(211U);
    msg.setDestination(613U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.4312667800720362);
    msg.setSource(9667U);
    msg.setSourceEntity(238U);
    msg.setDestination(31777U);
    msg.setDestinationEntity(182U);
    msg.mid = 1732U;

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
    msg.setTimeStamp(0.41019439135853086);
    msg.setSource(7534U);
    msg.setSourceEntity(58U);
    msg.setDestination(23799U);
    msg.setDestinationEntity(204U);
    msg.mid = 50857U;

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
    msg.setTimeStamp(0.9633471858980726);
    msg.setSource(1088U);
    msg.setSourceEntity(227U);
    msg.setDestination(5350U);
    msg.setDestinationEntity(13U);
    msg.mid = 11174U;

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
    msg.setTimeStamp(0.9488587014428372);
    msg.setSource(30624U);
    msg.setSourceEntity(236U);
    msg.setDestination(54701U);
    msg.setDestinationEntity(130U);
    msg.state = 78U;
    msg.eta = 40423U;
    msg.info.assign("RSAIUOYYYFUBYRDPUZHFGILORTPXDOVHSTTWKCJNCKPVMDRYFXBXXHFXTHJZXKJHHQWUQCAMDFLKSJIAZALLBSOORVWZVZXVEYGBUGSZQTEMVKIPCCYRCJKTJAPXABGLZJIFWOBQOLFRVKEAWNDCGIFGOUPTOXDSGNFWBKPQQUQPGXPASTIYBHTQNCRRQZDMDQMREONSLM");

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
    msg.setTimeStamp(0.6795349490633082);
    msg.setSource(43693U);
    msg.setSourceEntity(254U);
    msg.setDestination(43255U);
    msg.setDestinationEntity(190U);
    msg.state = 249U;
    msg.eta = 33353U;
    msg.info.assign("VRMWBZBGRDBRHBUM");

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
    msg.setTimeStamp(0.3395665789275045);
    msg.setSource(45793U);
    msg.setSourceEntity(218U);
    msg.setDestination(28431U);
    msg.setDestinationEntity(47U);
    msg.state = 48U;
    msg.eta = 41445U;
    msg.info.assign("NTFQKPFZAWLBZUWHHDVIINZXZMFWSGLSCMESVKYSIMJVRJLVPMWBHUXWCCZUUGOTBAWYGGBDZKPTBLNNHOISOVGHYLMAQEHAPFVAPTHTTXBUJQDCRFNQLFKVXFJKRCMSGZBQI");

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
    msg.setTimeStamp(0.9417995145117823);
    msg.setSource(8224U);
    msg.setSourceEntity(169U);
    msg.setDestination(34592U);
    msg.setDestinationEntity(104U);
    msg.system = 36751U;
    msg.duration = 56492U;
    msg.speed = 0.12602920166635045;
    msg.speed_units = 185U;
    msg.x = 0.10100647088005743;
    msg.y = 0.9042651456625939;
    msg.z = 0.05384651011034369;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.667332068840018);
    msg.setSource(3986U);
    msg.setSourceEntity(211U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(22U);
    msg.system = 54594U;
    msg.duration = 49622U;
    msg.speed = 0.6640120441551833;
    msg.speed_units = 155U;
    msg.x = 0.4285772068415582;
    msg.y = 0.7409827571439513;
    msg.z = 0.6118768027937912;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.8301336215702637);
    msg.setSource(23114U);
    msg.setSourceEntity(118U);
    msg.setDestination(6458U);
    msg.setDestinationEntity(49U);
    msg.system = 39415U;
    msg.duration = 59831U;
    msg.speed = 0.5993587242704399;
    msg.speed_units = 102U;
    msg.x = 0.020028986956663997;
    msg.y = 0.6855691180397147;
    msg.z = 0.20353967089967684;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.701569791982576);
    msg.setSource(8175U);
    msg.setSourceEntity(244U);
    msg.setDestination(19516U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.22885437876825887;
    msg.lon = 0.586123925075963;
    msg.speed = 0.474936213479059;
    msg.speed_units = 190U;
    msg.duration = 4207U;
    msg.sys_a = 33810U;
    msg.sys_b = 16860U;
    msg.move_threshold = 0.5224780210059778;

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
    msg.setTimeStamp(0.33241789416610357);
    msg.setSource(53752U);
    msg.setSourceEntity(137U);
    msg.setDestination(30599U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.16498359604959711;
    msg.lon = 0.23331002317115446;
    msg.speed = 0.4628594592487115;
    msg.speed_units = 247U;
    msg.duration = 26987U;
    msg.sys_a = 8959U;
    msg.sys_b = 46111U;
    msg.move_threshold = 0.21103696554759477;

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
    msg.setTimeStamp(0.5961964607338557);
    msg.setSource(15421U);
    msg.setSourceEntity(198U);
    msg.setDestination(7115U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.2828929105544239;
    msg.lon = 0.24415247125663664;
    msg.speed = 0.5187314860398539;
    msg.speed_units = 179U;
    msg.duration = 12381U;
    msg.sys_a = 54556U;
    msg.sys_b = 48969U;
    msg.move_threshold = 0.6229789245243508;

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
    msg.setTimeStamp(0.4155535394623021);
    msg.setSource(55711U);
    msg.setSourceEntity(213U);
    msg.setDestination(32971U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.23924020620296227;
    msg.lon = 0.5279205609579538;
    msg.z = 0.6506195511896155;
    msg.z_units = 162U;
    msg.speed = 0.4024743475961092;
    msg.speed_units = 153U;
    msg.custom.assign("NWVLCUGKYHURPYRNLUBTLRVYKDKUQRNTXGSLDQFBMPEUOUBULZOSBWSVUYTWFTTAMQPKHYNVYQIQTKLM");

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
    msg.setTimeStamp(0.9054289661763901);
    msg.setSource(56645U);
    msg.setSourceEntity(34U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.26282654122422;
    msg.lon = 0.043034663096683246;
    msg.z = 0.3302602673027315;
    msg.z_units = 189U;
    msg.speed = 0.9202888632666778;
    msg.speed_units = 56U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7475642690704741;
    tmp_msg_0.lon = 0.9533009108392616;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BCLVKDNFZVKWLYSUHCIRTETNYBOSGHDKEVAEGWALGRDAOFZTLINXPXFKVZXJBVHYUTCOUQSMLLVFDPIFYUIJCVNODHOQJNKSEAQJSBWLUJCLTTIFSRNSKDQJUNMHZSWJBTY");

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
    msg.setTimeStamp(0.9347936839024358);
    msg.setSource(38595U);
    msg.setSourceEntity(39U);
    msg.setDestination(44989U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.16742237738271748;
    msg.lon = 0.8007030960068291;
    msg.z = 0.659019771409711;
    msg.z_units = 242U;
    msg.speed = 0.49302556142527754;
    msg.speed_units = 102U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5693639609780465;
    tmp_msg_0.lon = 0.2397086126243586;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YSPIXOQNKQIPESAXAUXRCAIVPASQORVUFAAHYORKXYALHGPWQLHSJXXSDGJYTCCWXTPGMHIIRJZBFWDDYSEZZVNTKBCMTKOGERJVFYIULNONCZRLTJWQLMFGPMSCQLTYRJWHFSTVIDXVMKMHBVZZVXNUKAOPWBHFWVPMCZTGJLUCKGIEQUUFEWDKQIVPNUEDZFGHFPBQBWYONGDBOEANBWKMINHX");

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
    msg.setTimeStamp(0.6813067380428514);
    msg.setSource(3333U);
    msg.setSourceEntity(152U);
    msg.setDestination(13362U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.7915122674335018;
    msg.lon = 0.9729941816911386;

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
    msg.setTimeStamp(0.6127333759204568);
    msg.setSource(17798U);
    msg.setSourceEntity(84U);
    msg.setDestination(37554U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.29446674337317114;
    msg.lon = 0.40372905323973907;

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
    msg.setTimeStamp(0.45437162905860573);
    msg.setSource(7912U);
    msg.setSourceEntity(156U);
    msg.setDestination(41373U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.04326616212737888;
    msg.lon = 0.275707051393036;

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
    msg.setTimeStamp(0.8697845786274998);
    msg.setSource(19581U);
    msg.setSourceEntity(84U);
    msg.setDestination(7271U);
    msg.setDestinationEntity(32U);
    msg.timeout = 62776U;
    msg.lat = 0.6744112787740647;
    msg.lon = 0.7325060403039392;
    msg.z = 0.036865247517874344;
    msg.z_units = 205U;
    msg.pitch = 0.7370270230239799;
    msg.amplitude = 0.6259105936884998;
    msg.duration = 45596U;
    msg.speed = 0.4587261773391422;
    msg.speed_units = 165U;
    msg.radius = 0.19602320563618114;
    msg.direction = 65U;
    msg.custom.assign("BFTKNJBXVOFNEHKWOCGYIYKUPBOUKXLLWGRGRFKPIYPRPSMJBGCQMRDNYHCNVLYVVPKDCAQZBRGNWFBDYRXCETTOITXM");

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
    msg.setTimeStamp(0.7978112312340908);
    msg.setSource(56083U);
    msg.setSourceEntity(75U);
    msg.setDestination(35966U);
    msg.setDestinationEntity(239U);
    msg.timeout = 2918U;
    msg.lat = 0.5043484599966228;
    msg.lon = 0.5117762501555954;
    msg.z = 0.8145364620882967;
    msg.z_units = 170U;
    msg.pitch = 0.8115655921932827;
    msg.amplitude = 0.5134052443719107;
    msg.duration = 5805U;
    msg.speed = 0.3586494729669053;
    msg.speed_units = 7U;
    msg.radius = 0.7739198677737845;
    msg.direction = 80U;
    msg.custom.assign("FFQZLPBVOFOBDIZITAJJRUQXCN");

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
    msg.setTimeStamp(0.4394292874494219);
    msg.setSource(12234U);
    msg.setSourceEntity(89U);
    msg.setDestination(3637U);
    msg.setDestinationEntity(132U);
    msg.timeout = 9258U;
    msg.lat = 0.8007720104008773;
    msg.lon = 0.8415717438275789;
    msg.z = 0.25320068939241647;
    msg.z_units = 90U;
    msg.pitch = 0.10089327584116492;
    msg.amplitude = 0.43732575567040277;
    msg.duration = 24557U;
    msg.speed = 0.8329503406349276;
    msg.speed_units = 117U;
    msg.radius = 0.37823542398996934;
    msg.direction = 139U;
    msg.custom.assign("MFCIPETDGGXAKPRABSLHJYOLKOUNDEAEYRGCVWLFRUKPZUTNDXZOKHAHNWBFNXLSEZIYUIAWNDPILWLGYAORMFSBMQQJXTOBCDGMESTVSKYVQYYSXUFHIY");

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
    msg.setTimeStamp(0.3079747104997228);
    msg.setSource(52306U);
    msg.setSourceEntity(175U);
    msg.setDestination(55085U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("DPLBTRMEHTROSTQOZRTYEARWKANKHCEEESEDZPCVOGCGWSDSUBVNXXQCHQMZOXAHWUBBQCNMVNGQGHVRYXQPRZZVLDNQTGBWWJMTPOFFZLNFQCAVKAUEJFHHPSIKITUHPSRBIHATOIJJPXVFAFKINNBJRKNOXJWSOAXCISJJNXKOSFTYDWUMPMFQVKHDCYKZIQLVDYMBILOMLPSLUYGW");
    msg.reference_frame = 28U;
    msg.custom.assign("QVIAHSOINXZBHMJFXFZUYGFYVZDQJBRDEMPZRMSCAJPKBGMKIORUPDBDWACTRGTLTKNGEUOYCSSWCYKXSLGHLZLKZTYEJBJQHLDWMWOSLXIWILWCWRLJZCTYQQDOWKAB");

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
    msg.setTimeStamp(0.6319598886958289);
    msg.setSource(19662U);
    msg.setSourceEntity(127U);
    msg.setDestination(64430U);
    msg.setDestinationEntity(121U);
    msg.formation_name.assign("SXKWJZWOQMQSTMVCDTGSIHKYABZXKRKLSCKDNDQHWPGJMDKTVAILECNZUFNIYIDCYSKBYVMALYTJOWFVFDLJPWBTMUAFXHJFBEGKXPIDSYAZFUZLHBLJRGQWV");
    msg.reference_frame = 168U;
    msg.custom.assign("NPEIEYJNMZRQYMNFTWTQFWBAPIPTNQVRSSXIE");

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
    msg.setTimeStamp(0.06545397354564442);
    msg.setSource(60812U);
    msg.setSourceEntity(206U);
    msg.setDestination(51704U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("EEDJGUKODJIBKUIBWDAKEMBYJXZWDTHHFYHCGUFWIUPVAZBULXRZQGDJRAOYMRHCFRXDNQKSWYJFWTWLGBCXGMEZJFLZHVAQKUDFDEQWXFQQKMNPTVYBPCNZCSCAVHSRPAOTSLOKASNYVZUNENOSVO");
    msg.reference_frame = 181U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32625U;
    tmp_msg_0.off_x = 0.02232286282368512;
    tmp_msg_0.off_y = 0.08495139649300631;
    tmp_msg_0.off_z = 0.2605804216354842;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BPYLNXEITZGLOMXLEFFRRYAYZXWGHRLTCUNRYFAQJURWBQVSLVJSPWKUZMCMMKKAUWCBGBJNXSMTFMOFJRZQLPKUIIVWKLASOASKUOKVMEHALWWRCBSJKDXCHWEYQTEUSZNBFHTURGPVDESXYGGUFZGKMNGUKYJWZYLTQQZEHD");

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
    msg.setTimeStamp(0.9938979180693478);
    msg.setSource(6769U);
    msg.setSourceEntity(135U);
    msg.setDestination(17617U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("GPZUCONQHILYNBBQMNOCLKNDQLGEWXVYTHBJBALWOUNRPVPSFOBMRSFTTKZSKFSTHAWQURRKNQEWWRRBCEGDPICRKNMBANKYZWCLXBNRXOIBTQYZFXAVOHMLXPUREVJAQMXUQSJFDJD");
    msg.formation_name.assign("KEOGAVSEJKLDIMFDTSJLUFXUQPBLAGYDBPVCFILNMOHKXNMFYBHZFBDEMPGTORZEGUPEMZTNVWESMDGRSECBQXPAEOPZOCKGJSBQKCMFMKIWHHRORJGUQHYLZJEGJNTYKUTQYXRZPYVOXXHWQLZOSKVWIYYCMFISAYVADIHJPIAUSWCPADCQKVBQZVJDNBZTIPRDHWRTXIQWA");
    msg.plan_id.assign("SZKPWAWHENVXIVZHUA");
    msg.description.assign("SIUHIAMYMDCPBXLTRJGXPWMDNBQNEGRPCITSVRHBLKAKGBDFZFACFIULNNYJPBJYLRHQWTLWXAEZMORCEQBFOLOXVVRSPOEKEXIVMJZOXNMGQKIGJYYZLEUZFAPSRQCEHQGLQUWAIOGUTHBCPJVDIVUFAWVJWQECKZG");
    msg.leader_speed = 0.3632704868524377;
    msg.leader_bank_lim = 0.29824999141249375;
    msg.pos_sim_err_lim = 0.9480170723851022;
    msg.pos_sim_err_wrn = 0.22825038378798546;
    msg.pos_sim_err_timeout = 12277U;
    msg.converg_max = 0.16053340175045516;
    msg.converg_timeout = 40957U;
    msg.comms_timeout = 31117U;
    msg.turb_lim = 0.32193066524716074;
    msg.custom.assign("SEQUSNKKTOHNGRDSHRIMEWPKYZFRSCBUVQATKRWXBCWLUANIDVPABOAQSCEDYYEQSOZTWUFTVWPCGXLDLAF");

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
    msg.setTimeStamp(0.5444003761422348);
    msg.setSource(39971U);
    msg.setSourceEntity(46U);
    msg.setDestination(54707U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("XQXVXIBJMFPEEZNUVDYNPYZAXRXVPWKZSRUWGFASODFRKRHKQQXKCJAV");
    msg.formation_name.assign("CPMSIBPVDMZHLRRCNYJKWQXWGIMLXUI");
    msg.plan_id.assign("WKNKSOULLCWGTZVGFGZUZCWXKFTKMUXTABOXVJGDSSBYGGZVDYJLWVDAMKHPPZJYOOFYRFIKPSKITRBCCRSMSDVAEYGTTQKOJIUOLEKRUFQOZUFUEPHLFDNEXHHHIMRNLXRMAURCXRGIDSPTBAHYIQWWCYDNHHHXGIJDQQOIZIEVLVYNNMEBEAPWLJABDCNUUTSVQIYPNSJ");
    msg.description.assign("VNEJRDQDGOFXXR");
    msg.leader_speed = 0.7573101140687375;
    msg.leader_bank_lim = 0.6431735467791184;
    msg.pos_sim_err_lim = 0.11321448960349234;
    msg.pos_sim_err_wrn = 0.5919386142585777;
    msg.pos_sim_err_timeout = 18828U;
    msg.converg_max = 0.5864232330130544;
    msg.converg_timeout = 52528U;
    msg.comms_timeout = 41719U;
    msg.turb_lim = 0.756530891179206;
    msg.custom.assign("FLGPFVLRDPVPHWAF");

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
    msg.setTimeStamp(0.47969517419043783);
    msg.setSource(36596U);
    msg.setSourceEntity(188U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("INQOGQREQOXACQDSRIAECTXOASNCDAWYXLGZUTOLYEOBTHFSXBLWBBYJEANESSKRRLSLWXDIVVCQJGGRONJKDZKLHNMHVTQIRMYZOCUAHBJZUMPPMVGMRUKSUSTAHLWZQHKFQVUVXZLPLCRNWFUYGNGCHZNPAXYTPVDFENSZKWHDRBPVHGBTPTMPFGJEJJIIVDVUQKJCCUIKTLJKFZQEYBTIGFZFDMBDWPOHIMDXPUWYOYKXEXNYMOMS");
    msg.formation_name.assign("FKHXBCPZBNGFHAYCSXMDLFZRIGHAJCUSOFUJTIFCGVLIOVECDYBUJDMRFJIBJYINPKFGSLRIVUCLXQTPLAXGZVWVULPIBYDFLNDCNXWKWSGMUQLPRPMZJNMZQTKKQKXVQIZWODIYCHOMUDMOYEGHGJXONRASIBSZRPPEUQERYLVMGLCHRAESGJQWAXTZHPQNKYVETMBJTXOOKWFREDBMXVWHUTYUEQVANAB");
    msg.plan_id.assign("YJYTWBDLVVOCFFRZMNOBEITSXSTMHKPPYGUQIV");
    msg.description.assign("RAUDQXCNWCTVJOHSUWKVZEDBHPZYXZJEIEVMLTXELQLFVAGILOTMCUGCYNYOGZHFNEWERLYHFRAHTFFPTVSXSFYJMYHJHMRARCUJXIZNVPZMPXLB");
    msg.leader_speed = 0.8540991562625524;
    msg.leader_bank_lim = 0.03943623913289629;
    msg.pos_sim_err_lim = 0.1745558411640068;
    msg.pos_sim_err_wrn = 0.04968732625809036;
    msg.pos_sim_err_timeout = 27207U;
    msg.converg_max = 0.8906062281268866;
    msg.converg_timeout = 57197U;
    msg.comms_timeout = 61251U;
    msg.turb_lim = 0.40094317626337383;
    msg.custom.assign("KHSHKEMXTVLFRZYJJWBAKXKPUIEXMQTUQNULQSXCVUHKKSYIIHUUVSHGYIHLCMWLCIGDPIDNBBFSTJFJULBBOSDTAEAEOYCZMNOOQRJRXWAPDENKDWNWHAXTVGJZUFZBPNUCRCNJRNAVXZQAPCEIXHJKFCW");

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
    msg.setTimeStamp(0.8881127501269724);
    msg.setSource(11823U);
    msg.setSourceEntity(226U);
    msg.setDestination(29699U);
    msg.setDestinationEntity(171U);
    msg.control_src = 28408U;
    msg.control_ent = 225U;
    msg.timeout = 0.09732763865362615;
    msg.loiter_radius = 0.03759015340803884;
    msg.altitude_interval = 0.4298162157735813;

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
    msg.setTimeStamp(0.5532401153500965);
    msg.setSource(49486U);
    msg.setSourceEntity(41U);
    msg.setDestination(59960U);
    msg.setDestinationEntity(206U);
    msg.control_src = 52640U;
    msg.control_ent = 7U;
    msg.timeout = 0.6046610630547323;
    msg.loiter_radius = 0.7635072846774508;
    msg.altitude_interval = 0.8475157034149359;

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
    msg.setTimeStamp(0.9170028846797608);
    msg.setSource(59340U);
    msg.setSourceEntity(67U);
    msg.setDestination(13232U);
    msg.setDestinationEntity(197U);
    msg.control_src = 54048U;
    msg.control_ent = 32U;
    msg.timeout = 0.9648254732572236;
    msg.loiter_radius = 0.4384845026838722;
    msg.altitude_interval = 0.8706368083648226;

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
    msg.setTimeStamp(0.7831527544148343);
    msg.setSource(40954U);
    msg.setSourceEntity(132U);
    msg.setDestination(41795U);
    msg.setDestinationEntity(78U);
    msg.flags = 143U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9755720288122589;
    tmp_msg_0.speed_units = 122U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5965576116183489;
    tmp_msg_1.z_units = 191U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.13535274648697382;
    msg.lon = 0.9447886514269108;
    msg.radius = 0.2177460319909461;

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
    msg.setTimeStamp(0.9600049479501991);
    msg.setSource(39043U);
    msg.setSourceEntity(42U);
    msg.setDestination(36883U);
    msg.setDestinationEntity(55U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.18448321911337662;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0024831843461234904;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4050389249983438;
    msg.lon = 0.10844416473154883;
    msg.radius = 0.18723556363101024;

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
    msg.setTimeStamp(0.8322927944828948);
    msg.setSource(28349U);
    msg.setSourceEntity(37U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(138U);
    msg.flags = 134U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9732426872595261;
    tmp_msg_0.speed_units = 128U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.10530830331560415;
    tmp_msg_1.z_units = 204U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2651753513751006;
    msg.lon = 0.2280245198887928;
    msg.radius = 0.32925141033257666;

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
    msg.setTimeStamp(0.12073217805655112);
    msg.setSource(48859U);
    msg.setSourceEntity(193U);
    msg.setDestination(48078U);
    msg.setDestinationEntity(182U);
    msg.control_src = 49849U;
    msg.control_ent = 110U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 247U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4550163212964936;
    tmp_tmp_msg_0_0.speed_units = 84U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6607477307778428;
    tmp_tmp_msg_0_1.z_units = 224U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.45253404294853095;
    tmp_msg_0.lon = 0.6972076999338166;
    tmp_msg_0.radius = 0.7535510394670143;
    msg.reference.set(tmp_msg_0);
    msg.state = 10U;
    msg.proximity = 140U;

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
    msg.setTimeStamp(0.7313705916560373);
    msg.setSource(59821U);
    msg.setSourceEntity(243U);
    msg.setDestination(36181U);
    msg.setDestinationEntity(32U);
    msg.control_src = 24436U;
    msg.control_ent = 146U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 198U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.39802080374313864;
    tmp_tmp_msg_0_0.speed_units = 185U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.48785009289388215;
    tmp_tmp_msg_0_1.z_units = 96U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.870322816914824;
    tmp_msg_0.lon = 0.23603772774822962;
    tmp_msg_0.radius = 0.23000321128169066;
    msg.reference.set(tmp_msg_0);
    msg.state = 248U;
    msg.proximity = 180U;

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
    msg.setTimeStamp(0.9476477686822866);
    msg.setSource(19811U);
    msg.setSourceEntity(252U);
    msg.setDestination(3704U);
    msg.setDestinationEntity(190U);
    msg.control_src = 6880U;
    msg.control_ent = 176U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13172271908938538;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.019199079553017473;
    tmp_tmp_msg_0_1.z_units = 91U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3270861775782802;
    tmp_msg_0.lon = 0.8058023323985731;
    tmp_msg_0.radius = 0.8943181533480371;
    msg.reference.set(tmp_msg_0);
    msg.state = 202U;
    msg.proximity = 2U;

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
    msg.setTimeStamp(0.6895641477625393);
    msg.setSource(59164U);
    msg.setSourceEntity(200U);
    msg.setDestination(36293U);
    msg.setDestinationEntity(148U);
    msg.ax_cmd = 0.025034497656195587;
    msg.ay_cmd = 0.16188201013956793;
    msg.az_cmd = 0.976503118658733;
    msg.ax_des = 0.9523426674197579;
    msg.ay_des = 0.4898852276434241;
    msg.az_des = 0.021130729451539376;
    msg.virt_err_x = 0.028446914698800563;
    msg.virt_err_y = 0.30508242814860287;
    msg.virt_err_z = 0.5789031270309568;
    msg.surf_fdbk_x = 0.6746418071292112;
    msg.surf_fdbk_y = 0.9783264825145834;
    msg.surf_fdbk_z = 0.7030334900333496;
    msg.surf_unkn_x = 0.47994026343102913;
    msg.surf_unkn_y = 0.3917819441069569;
    msg.surf_unkn_z = 0.8586305667924424;
    msg.ss_x = 0.477741504489427;
    msg.ss_y = 0.2451788209075768;
    msg.ss_z = 0.4691970948109674;

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
    msg.setTimeStamp(0.43519766640177415);
    msg.setSource(28077U);
    msg.setSourceEntity(65U);
    msg.setDestination(39194U);
    msg.setDestinationEntity(211U);
    msg.ax_cmd = 0.05644247000716218;
    msg.ay_cmd = 0.815241398865287;
    msg.az_cmd = 0.7140332530662324;
    msg.ax_des = 0.4885736561364068;
    msg.ay_des = 0.8123519532350535;
    msg.az_des = 0.7216767171500755;
    msg.virt_err_x = 0.13721720723343067;
    msg.virt_err_y = 0.0016297058229802763;
    msg.virt_err_z = 0.3264805636376845;
    msg.surf_fdbk_x = 0.18122188514186133;
    msg.surf_fdbk_y = 0.9036107888564123;
    msg.surf_fdbk_z = 0.5184254771409532;
    msg.surf_unkn_x = 0.052436170476989674;
    msg.surf_unkn_y = 0.7367593987068312;
    msg.surf_unkn_z = 0.6272361318415698;
    msg.ss_x = 0.5063098878079091;
    msg.ss_y = 0.6710210253858945;
    msg.ss_z = 0.7275134272480217;

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
    msg.setTimeStamp(0.26450377162138394);
    msg.setSource(63508U);
    msg.setSourceEntity(137U);
    msg.setDestination(43274U);
    msg.setDestinationEntity(91U);
    msg.ax_cmd = 0.6775178317339703;
    msg.ay_cmd = 0.2985859526792487;
    msg.az_cmd = 0.397355005964924;
    msg.ax_des = 0.3935453115225239;
    msg.ay_des = 0.763781675823416;
    msg.az_des = 0.4353862909797154;
    msg.virt_err_x = 0.17323919739013605;
    msg.virt_err_y = 0.9230523636691091;
    msg.virt_err_z = 0.3885751751957275;
    msg.surf_fdbk_x = 0.3024317370183982;
    msg.surf_fdbk_y = 0.5553849563191536;
    msg.surf_fdbk_z = 0.44856350732559136;
    msg.surf_unkn_x = 0.24571550884403548;
    msg.surf_unkn_y = 0.11113619308539335;
    msg.surf_unkn_z = 0.2798027895242534;
    msg.ss_x = 0.8150110120237367;
    msg.ss_y = 0.32291369479869514;
    msg.ss_z = 0.5806583930603173;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZMKLBEPLLVPLRDOYJHRBSUKFPOQLYWDOKKCFIWSOFZQDSIHNMYKDMNIFYJUFKUMCATZAWEGBGUQPVWVXTCOZHSWXRCLXULSBJJTGHZFYHPFVBBHBYIIKEZWUYNNQHCJRZUSLUEXVNSQEPGQIOAEWEUQPRFZLQJPLOVEREOFTHCXVBRMIIWZMWQGBMS");
    tmp_msg_0.dist = 0.13979469552397483;
    tmp_msg_0.err = 0.5878177058999985;
    tmp_msg_0.ctrl_imp = 0.7681846482593515;
    tmp_msg_0.rel_dir_x = 0.6954434287032086;
    tmp_msg_0.rel_dir_y = 0.916116084851153;
    tmp_msg_0.rel_dir_z = 0.46389035375021925;
    tmp_msg_0.err_x = 0.9569566699087804;
    tmp_msg_0.err_y = 0.7013010265025366;
    tmp_msg_0.err_z = 0.6937778563512538;
    tmp_msg_0.rf_err_x = 0.568795866818374;
    tmp_msg_0.rf_err_y = 0.493872931204427;
    tmp_msg_0.rf_err_z = 0.7063390704410947;
    tmp_msg_0.rf_err_vx = 0.29939266720492375;
    tmp_msg_0.rf_err_vy = 0.4234118168089238;
    tmp_msg_0.rf_err_vz = 0.880009673081719;
    tmp_msg_0.ss_x = 0.14480510517503598;
    tmp_msg_0.ss_y = 0.9001697878690783;
    tmp_msg_0.ss_z = 0.9079651168880132;
    tmp_msg_0.virt_err_x = 0.9967992503878438;
    tmp_msg_0.virt_err_y = 0.8669734137206637;
    tmp_msg_0.virt_err_z = 0.48463057313491;
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
    msg.setTimeStamp(0.40004781744233786);
    msg.setSource(52259U);
    msg.setSourceEntity(68U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(125U);
    msg.s_id.assign("FOFYOHCHNVZLJZCGSOVVLVEKRDQWSVRAMEYUEBXXXXULTXPDNNPMNDJPRWMAIESQHBYQOFSISHAUGQYREUIMEBZOJBOTJKUIXFTDTQLCIAQBEFPIEKMKBJUHYBIRHUBCMTKYYLWYIKLYXULIHNFMJPOEAVWVTKUWWFPSGRLXEZMZBGZWYWFTSPBJCDVQXDGCNLVGDPHHR");
    msg.dist = 0.12646630352308252;
    msg.err = 0.0744321386153054;
    msg.ctrl_imp = 0.5232722641203829;
    msg.rel_dir_x = 0.7817463497795535;
    msg.rel_dir_y = 0.6557188585132477;
    msg.rel_dir_z = 0.39497342509670164;
    msg.err_x = 0.4091290422908732;
    msg.err_y = 0.42251902411649567;
    msg.err_z = 0.8762677841325043;
    msg.rf_err_x = 0.9522136687171732;
    msg.rf_err_y = 0.22962081024059644;
    msg.rf_err_z = 0.24003571290649217;
    msg.rf_err_vx = 0.5607419670519217;
    msg.rf_err_vy = 0.38372115271476803;
    msg.rf_err_vz = 0.2467653684164517;
    msg.ss_x = 0.7213274044706988;
    msg.ss_y = 0.3477837683509799;
    msg.ss_z = 0.2940932735819536;
    msg.virt_err_x = 0.797419519361292;
    msg.virt_err_y = 0.27212057461842154;
    msg.virt_err_z = 0.44818606061984656;

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
    msg.setTimeStamp(0.2818194882230137);
    msg.setSource(26115U);
    msg.setSourceEntity(62U);
    msg.setDestination(46533U);
    msg.setDestinationEntity(248U);
    msg.s_id.assign("YKMCWLGYPGJJBQHLKBYVQAWFONCSTRQXTTVNTUXDMVKQGHYFAOUGHTFSSSPFNECEVJNKIZEWZNMOMLOIYGJJFOSCKSXEKIOIMVGBZAALRWTDGPGFBGREXZCWQQBNPBVMWJGPRDWUIYSYHDACFXNHJUWSXOILHXAAKFEETJSCKMHZUATBFEBURTNILJZRDCKUIZDMELUYJRLYDTOCHPHSDLWXCXNQAOZPRVVPXRALBRQIYEOMWZ");
    msg.dist = 0.6222811058642747;
    msg.err = 0.6083746324947962;
    msg.ctrl_imp = 0.3621446025329831;
    msg.rel_dir_x = 0.6970706604154834;
    msg.rel_dir_y = 0.3282107861115303;
    msg.rel_dir_z = 0.11208762183902021;
    msg.err_x = 0.30705733536321655;
    msg.err_y = 0.8827109360926845;
    msg.err_z = 0.42130219010811465;
    msg.rf_err_x = 0.2473591263598084;
    msg.rf_err_y = 0.3624245462323794;
    msg.rf_err_z = 0.023165847586227306;
    msg.rf_err_vx = 0.10417522802762413;
    msg.rf_err_vy = 0.6007003845545095;
    msg.rf_err_vz = 0.0670906109742857;
    msg.ss_x = 0.2814125414795502;
    msg.ss_y = 0.07157365870198595;
    msg.ss_z = 0.06238757081274393;
    msg.virt_err_x = 0.32774347923383784;
    msg.virt_err_y = 0.6311096787744013;
    msg.virt_err_z = 0.46203176163546644;

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
    msg.setTimeStamp(0.9514615472783695);
    msg.setSource(49456U);
    msg.setSourceEntity(180U);
    msg.setDestination(14661U);
    msg.setDestinationEntity(27U);
    msg.s_id.assign("LNLPULMBPLDJCMDHZTJFMYNIJFBSYEXZDOUSDANTLNNPAPOEGRQTSYYWSJRHQSCXCXOZPMSVFTTRZLBTWHDPAOXUBHFRCEODXMYWKGSIQFSCYVJUQXE");
    msg.dist = 0.6705790238382794;
    msg.err = 0.4277066139703414;
    msg.ctrl_imp = 0.6508899118021425;
    msg.rel_dir_x = 0.61863088350703;
    msg.rel_dir_y = 0.30440018030924065;
    msg.rel_dir_z = 0.6587713406492255;
    msg.err_x = 0.12509701984458343;
    msg.err_y = 0.8078286223489164;
    msg.err_z = 0.4433807075407217;
    msg.rf_err_x = 0.9091416144515733;
    msg.rf_err_y = 0.12050734198283997;
    msg.rf_err_z = 0.5739825607419596;
    msg.rf_err_vx = 0.839651287173607;
    msg.rf_err_vy = 0.3805901984943223;
    msg.rf_err_vz = 0.7560066570466183;
    msg.ss_x = 0.25617599712660544;
    msg.ss_y = 0.38004588938640116;
    msg.ss_z = 0.6022405096880316;
    msg.virt_err_x = 0.9469851334282319;
    msg.virt_err_y = 0.4905285558067476;
    msg.virt_err_z = 0.3922777016438823;

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
    msg.setTimeStamp(0.29745021756881973);
    msg.setSource(9954U);
    msg.setSourceEntity(134U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(54U);
    msg.timeout = 32382U;
    msg.rpm = 0.9072528713555902;
    msg.direction = 47U;
    msg.custom.assign("EVFQAVIHOARLGEJBNXRRFPCCXLNSATVNBJJUOXCQXRLWHMAXKNOJOYGKQFMZNOWWPWWIQZPSXQSWLPSVOIEDD");

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
    msg.setTimeStamp(0.35560262406791243);
    msg.setSource(53154U);
    msg.setSourceEntity(59U);
    msg.setDestination(46846U);
    msg.setDestinationEntity(230U);
    msg.timeout = 33594U;
    msg.rpm = 0.19142300419912273;
    msg.direction = 14U;
    msg.custom.assign("HMHAXRKAGWWBQGEYECVOYLKOVQWKSSEKAMUKRFAHQCMGUFTRSUYWIHFVDTMSUUQPNIR");

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
    msg.setTimeStamp(0.6131703178585743);
    msg.setSource(52148U);
    msg.setSourceEntity(119U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(170U);
    msg.timeout = 61183U;
    msg.rpm = 0.724787081436536;
    msg.direction = 193U;
    msg.custom.assign("GYWRQRRKZOQSEBHRUBJAQFMQIULYXFXXBQCOPWUFITCVARCDIZGIEDXFDPTRLROYFAVPGZYDBYNNXPKHULVVQZHOVOEPWRDGKYHMZBKCOBOYWWZMNFH");

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
    msg.setTimeStamp(0.6024282115338346);
    msg.setSource(15655U);
    msg.setSourceEntity(133U);
    msg.setDestination(8447U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("LPBJDWUDURDVTLNYGRQGKAFEOUJDZHPJRPISTVAWUBRZAHWZZTCDBCMRREQKSWMNQWLYUQACVPHKXSJTSLNEOFGPCVDUMLZJSPSHKMBFQRVBYFKFNCQSBLVJFEMRBSNOGOIXIVUFCTARIXHIYYXWIYEOICQQTKTOZC");
    msg.type = 190U;
    msg.op = 111U;
    msg.group_name.assign("VYJIMOTDDZNQRGCMTOPKVSQATDWZFBJMGRWXHDQANJXZYAKMDTIGYGLFHXZBHRISZUJSNRTJCEQPPPWUZWKMXUKISOIJCMMHCVBRQBJKLWOYSALHAEUJODHUXMRZPEVCRFOERWDEWHSUTPBJFOYCNPETNT");
    msg.plan_id.assign("AZKGJRKBNUKCESNLYBYGZVNMPERYWGPNTCQITTRULVCUVGIOPBTBFKUIPXLAWTMHSHPEEGFPJIAQZRSIWEDKQDHXYJCGOVXMPFKCDXWSADUVTSPIIJDBFNAYUSCHQAGISAMNMCBJQWLZDOHLXWKKXYUWLNRGRVTH");
    msg.description.assign("KFQAADPYLFQROWSTEGZWQLJ");
    msg.reference_frame = 213U;
    msg.leader_bank_lim = 0.9813768326173444;
    msg.leader_speed_min = 0.4642990087021096;
    msg.leader_speed_max = 0.4155079991316686;
    msg.leader_alt_min = 0.9633787286200093;
    msg.leader_alt_max = 0.33749558884316755;
    msg.pos_sim_err_lim = 0.3384287896825987;
    msg.pos_sim_err_wrn = 0.538077219009218;
    msg.pos_sim_err_timeout = 4803U;
    msg.converg_max = 0.8415746047968853;
    msg.converg_timeout = 59397U;
    msg.comms_timeout = 57060U;
    msg.turb_lim = 0.5432524321202916;
    msg.custom.assign("WYBQDMCFBALDROKFIHKKPZRORJSHARUECAAPFQOYXPICOZVYJWELRTTQLLZEDRKANQGSUEEOVCSBFDVSQUVBUGFIZMHNTSNIJIGJXDHIXPJWRSLTTVCOYIWPXTFXPOOXYRMEGZUMIBQPWYGVSHZHKRWDTHNXALMNWAHCZSXVJDCFYHYEHOMKNTCPUWKANTCKRDB");

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
    msg.setTimeStamp(0.8904724447928878);
    msg.setSource(34221U);
    msg.setSourceEntity(184U);
    msg.setDestination(62771U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("VOBSWFRCZORMBZMNNJXRCTOCFHXUDOVCUVPFYNAINIZHOHLCEFX");
    msg.type = 244U;
    msg.op = 31U;
    msg.group_name.assign("BWPLEGGJMDTOSTCGDXWITOIJGWZVXMILLWVWBLBEFDWBQYPMGGBXFCSWKXHLSBVFRAFOEXJEEGAJQJYNEMVCWQVNNZKQOYFUTSPHJUYHAHOWPQRQOXTWAVJFOQAUKIGZUYVPZSPHCPRMDKCVFURDRQOTDPRLIUJZLRINAUYNNHNICHASSHYMTUICFRDPZBPZXUZ");
    msg.plan_id.assign("IILKFCANZSPOXXTVDWKACFZLZVOEYDQWXNFWVPIGTPDKNFJYULHHLBCQYAZARKEBZCRJGKJNRITGJSUIPACYVUUWGRUXGQKQVFMLRLSQHIMCERBDGMNKTUBEQIESAAWBWZRORAVPXGOCNYBPHOYOYWTHAHUBYXZJNIMLMEFGULEQMKOAVSTMBFZPOQKUJZXHVCRSBMPCYQNR");
    msg.description.assign("MIMFOEFSEQTFTSXUPMOBDGYJRWJJESHOROYVHNBWFELZPLQRZPFLQHSMXRLPUVKNFNXQTTVFDTGNRJCQYIWIUIXJCZJANMLKTGGIWZKKLDQBNIVZXDSSUPLAWYATSMKAHIGXCDEBCBLCQEBVGTHCDVXATWCNCMDAXAQEYXESYQWROSPPBZHUOBOTUJHFYOKRX");
    msg.reference_frame = 234U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45424U;
    tmp_msg_0.off_x = 0.9280223084124577;
    tmp_msg_0.off_y = 0.6416783237188066;
    tmp_msg_0.off_z = 0.10497291551386634;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6758821264791681;
    msg.leader_speed_min = 0.16477140852232786;
    msg.leader_speed_max = 0.5969069678896448;
    msg.leader_alt_min = 0.856735608122868;
    msg.leader_alt_max = 0.6821089244389852;
    msg.pos_sim_err_lim = 0.8804818767427737;
    msg.pos_sim_err_wrn = 0.44435470602182514;
    msg.pos_sim_err_timeout = 16487U;
    msg.converg_max = 0.10479728294486712;
    msg.converg_timeout = 45633U;
    msg.comms_timeout = 32089U;
    msg.turb_lim = 0.7306881478011432;
    msg.custom.assign("XKWQMJNWPZAHOBKRXPLOQHMWHTLQGMQDZLZFCLPECHVFGNIVBMPNRYORYIVPVRAFVCDFDALCUCXXSZKQXNDNTEGWTIISIRCAXHVFZAYBOZZMOZZHOKSYLEGDTBLYEBJG");

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
    msg.setTimeStamp(0.7657251493103091);
    msg.setSource(37104U);
    msg.setSourceEntity(113U);
    msg.setDestination(38893U);
    msg.setDestinationEntity(210U);
    msg.formation_name.assign("ZUJIWGWVJMKCEXTYZLSYJDEETOUKNEQSFKOKEVNIGNYCIKEHMQIROVTSQCVBZUTNTTDRZGKYVAFWBPDUOPXUTJDIXJCUHNZACXHELPPGAAZCXLCRACMYSOLBKJPKLGYMHVRLLPOPSYRTNVYCJVZPRILRTWKFYDMXHXHHPFGHSOJQSXQIWRWICNBGEFMTUQSRIMMFMEAOBSNNGBQGWUBAWFQBFUHVDFSWFRBWDLQXEVZKGZOJDOYXLJBDHAQA");
    msg.type = 182U;
    msg.op = 142U;
    msg.group_name.assign("YXIBCBWCDSQESVMDQOQAVDGDYIPRCOJWMEJPXSBVZYMPDBTHQHHXZDWQZIXJMDKKITMNUDURTLGLICTKYFWFXUMBJNNBSYIAOJWBNZVNNKLTVPZUCYDQXEFHHNOVREGATSAPYVSRWSAWFJRKIJCWNTCKXNTPQRHPAPEGJLAAYYPLWOGZH");
    msg.plan_id.assign("QMDHYHSEYPFTAJQOGWLAPPFAZUNIGHIKSKZUJXNZYWVLGMHQDSUHZVWDHIDEXDACZNVZCZVZRIBNCOGXYDTPUOIMBUOQWQJXEICJCREBSLTELWQPNBNTZNQSOBGRIIBUAQSSCUMPARTBVAEFDTCEHMWKEGOYBO");
    msg.description.assign("VAZZVZHCIAVTKXHIESRADEQYLEHXFGFBRLRTLLXRVGQXJRKCFZYQCSWFBUJNPHOCTTWKNJZLXOPOUTPPMCCWQWE");
    msg.reference_frame = 0U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33125U;
    tmp_msg_0.off_x = 0.7608650707431753;
    tmp_msg_0.off_y = 0.8561844292672164;
    tmp_msg_0.off_z = 0.041291614433835555;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.65912262919606;
    msg.leader_speed_min = 0.5453018654913444;
    msg.leader_speed_max = 0.78463539759711;
    msg.leader_alt_min = 0.8050548462415777;
    msg.leader_alt_max = 0.7151521594907945;
    msg.pos_sim_err_lim = 0.05508035510009368;
    msg.pos_sim_err_wrn = 0.12961722403488074;
    msg.pos_sim_err_timeout = 14852U;
    msg.converg_max = 0.7450373044236164;
    msg.converg_timeout = 50475U;
    msg.comms_timeout = 63326U;
    msg.turb_lim = 0.3879785492718295;
    msg.custom.assign("PMUDNWGAGIRGSYMRHMGSFBWNOFHIVHLKXEHOQJTRJTPXKYESTQBIOYRTXVJJCJMNSDDCAFVRVQSJUXOQFEYVZIWK");

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
    msg.setTimeStamp(0.10697165827094046);
    msg.setSource(20607U);
    msg.setSourceEntity(148U);
    msg.setDestination(50052U);
    msg.setDestinationEntity(113U);
    msg.timeout = 20678U;
    msg.lat = 0.8819527857938247;
    msg.lon = 0.9401469117297728;
    msg.z = 0.7872190282543859;
    msg.z_units = 84U;
    msg.speed = 0.23632766702718455;
    msg.speed_units = 194U;
    msg.custom.assign("PRRBUBEWLDLASNDUMNPMLIIJHVDHOGBRAHEWFCSKFIXBUHJXHAXLDOIZZJPWKMNIXFYOFTJLGJHADFYNDWFPKQTTABWETACCGNQTDUNWXOPBMIGZQTCBYFIRJDWNXBPQPVW");

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
    msg.setTimeStamp(0.44935143874671335);
    msg.setSource(44380U);
    msg.setSourceEntity(174U);
    msg.setDestination(43731U);
    msg.setDestinationEntity(103U);
    msg.timeout = 40380U;
    msg.lat = 0.27332898067263334;
    msg.lon = 0.4081001073871936;
    msg.z = 0.29473794362905703;
    msg.z_units = 224U;
    msg.speed = 0.18941282404064752;
    msg.speed_units = 42U;
    msg.custom.assign("ZWVBUVDEZOYVNXWZGLJOGRSWFOBBSCCKPRDEIMVKQDIFFFFZMJSXXNTQEWWYNREFRSWZRAQKXBVQNJPNSPHSUWKOJHQTAUEESGZTLCQAKIZYAMFQVDKBTYDBJARNIAJDVPFDIOXDUTAJHOXQHWTVZLECZGAHASOUHIMUSPVMKWMSFTIEBDHTPGCNLAWTKINPCCUOUMITBNXGLGICGL");

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
    msg.setTimeStamp(0.8334951006059164);
    msg.setSource(59987U);
    msg.setSourceEntity(228U);
    msg.setDestination(18524U);
    msg.setDestinationEntity(100U);
    msg.timeout = 15809U;
    msg.lat = 0.8161780054323339;
    msg.lon = 0.14728629598081489;
    msg.z = 0.888905554893393;
    msg.z_units = 225U;
    msg.speed = 0.6521508539131672;
    msg.speed_units = 133U;
    msg.custom.assign("SBGFBBAKTNVJOLGQTXCAEMAVKYAI");

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
    msg.setTimeStamp(0.47723023709223944);
    msg.setSource(38236U);
    msg.setSourceEntity(71U);
    msg.setDestination(36877U);
    msg.setDestinationEntity(67U);
    msg.timeout = 28503U;
    msg.lat = 0.6473549353040225;
    msg.lon = 0.9102192715343651;
    msg.z = 0.6812215722263161;
    msg.z_units = 47U;
    msg.speed = 0.12637078473856955;
    msg.speed_units = 170U;
    msg.custom.assign("UHRCIZDPOFHIBFIL");

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
    msg.setTimeStamp(0.6297956150207392);
    msg.setSource(64772U);
    msg.setSourceEntity(125U);
    msg.setDestination(37554U);
    msg.setDestinationEntity(76U);
    msg.timeout = 389U;
    msg.lat = 0.72249042901807;
    msg.lon = 0.5646682229776313;
    msg.z = 0.32411825405269046;
    msg.z_units = 61U;
    msg.speed = 0.690759367930876;
    msg.speed_units = 97U;
    msg.custom.assign("QDFWNLQKZKHRCZCHFTNOOZGSYTJUVCPYAKOFEQJKYVPUAZLVBLEXDOJVWLYSWHOOXNEMGIQMEPSDIRDDDUTOLXUGQWGSMLWCBSDIE");

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
    msg.setTimeStamp(0.8114389894864942);
    msg.setSource(49620U);
    msg.setSourceEntity(34U);
    msg.setDestination(29354U);
    msg.setDestinationEntity(166U);
    msg.timeout = 9012U;
    msg.lat = 0.061607936514602835;
    msg.lon = 0.970479974406276;
    msg.z = 0.29313292278466396;
    msg.z_units = 70U;
    msg.speed = 0.9398140661301975;
    msg.speed_units = 223U;
    msg.custom.assign("AEHKURGDPOUSPHAKXNBSPWBIKOQRHJHCNBBEMLIFRQALXCQRCCIYFVAPVTVKTQXWSTXVRERJMUSTLLJHENWMADPVQLEWLTYTPW");

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
    msg.setTimeStamp(0.6683340151220288);
    msg.setSource(3192U);
    msg.setSourceEntity(207U);
    msg.setDestination(47837U);
    msg.setDestinationEntity(42U);
    msg.arrival_time = 0.11926867255853846;
    msg.lat = 0.21319723190326367;
    msg.lon = 0.4633531666672147;
    msg.z = 0.7932942573506524;
    msg.z_units = 24U;
    msg.travel_z = 0.039973091235503855;
    msg.travel_z_units = 207U;
    msg.delayed = 146U;

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
    msg.setTimeStamp(0.44399420791853195);
    msg.setSource(10708U);
    msg.setSourceEntity(80U);
    msg.setDestination(3820U);
    msg.setDestinationEntity(81U);
    msg.arrival_time = 0.4360973541059564;
    msg.lat = 0.42197624745020923;
    msg.lon = 0.14833923938549143;
    msg.z = 0.3703049485943303;
    msg.z_units = 243U;
    msg.travel_z = 0.31138660093456083;
    msg.travel_z_units = 201U;
    msg.delayed = 214U;

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
    msg.setTimeStamp(0.246184944673558);
    msg.setSource(47236U);
    msg.setSourceEntity(73U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(24U);
    msg.arrival_time = 0.5682379889101776;
    msg.lat = 0.46220604587197545;
    msg.lon = 0.6643031098379397;
    msg.z = 0.7116590540819334;
    msg.z_units = 194U;
    msg.travel_z = 0.12282314973290476;
    msg.travel_z_units = 205U;
    msg.delayed = 194U;

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
    msg.setTimeStamp(0.4057862034552474);
    msg.setSource(22026U);
    msg.setSourceEntity(53U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.5730177361424947;
    msg.lon = 0.284160208278348;
    msg.z = 0.6562331925953879;
    msg.z_units = 101U;
    msg.speed = 0.014661613550341124;
    msg.speed_units = 69U;
    msg.bearing = 0.47426982984589616;
    msg.cross_angle = 0.5638351623118862;
    msg.width = 0.41929651881948315;
    msg.length = 0.3223544628035391;
    msg.coff = 160U;
    msg.angaperture = 0.13434331125999388;
    msg.range = 31215U;
    msg.overlap = 47U;
    msg.flags = 225U;
    msg.custom.assign("UHBEJVFZMESBRAHWOKTNCBTDSPPISZUVAPGESBCIMODZYESIPBVBCQOHZTGFDHZWAAZPTYLNLCTTMEIGUBDYTEKDOFQKNMGDMYKYWLAJEOWQPKYVRBLCRCJMVORVUQSYWDGUPROAJVANWWVDCGIHEMQSXJNKXPXJFPFEUTAWXRXHSPQLRUROZFBKOYLYKHZQHJINMNGIEW");

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
    msg.setTimeStamp(0.39792056648132357);
    msg.setSource(53236U);
    msg.setSourceEntity(77U);
    msg.setDestination(40316U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.033107344471111744;
    msg.lon = 0.3506458849201688;
    msg.z = 0.8065694129506827;
    msg.z_units = 6U;
    msg.speed = 0.4441142082224039;
    msg.speed_units = 189U;
    msg.bearing = 0.507348259254751;
    msg.cross_angle = 0.7994547149820191;
    msg.width = 0.8509657200285685;
    msg.length = 0.10725413314183907;
    msg.coff = 70U;
    msg.angaperture = 0.5759458261077267;
    msg.range = 59703U;
    msg.overlap = 54U;
    msg.flags = 192U;
    msg.custom.assign("AGCFXETBFSYWSQEQOABKPPWQUONXKHHFXDWPHHSPQMFUHMMDIVJNREYJOOOLNWSBNEYZOPWNBAZVXZYBJALGTUTIYSJRHAPSZVRZLFTOFCLPXLENIPQQNDCLKQRQKSFMCTHSMAOZRDIXLSZGGMGKFWEAKDEDYLCGJNOUAKWGLEJKCUNYVIVIICKVPVUTVZRXILYQJOHBTZRX");

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
    msg.setTimeStamp(0.25298219983578074);
    msg.setSource(18005U);
    msg.setSourceEntity(76U);
    msg.setDestination(63648U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.869556089897279;
    msg.lon = 0.3314589560370206;
    msg.z = 0.9038983935872702;
    msg.z_units = 164U;
    msg.speed = 0.5277887770714741;
    msg.speed_units = 96U;
    msg.bearing = 0.1380495404762705;
    msg.cross_angle = 0.4840723713237701;
    msg.width = 0.8638319949623948;
    msg.length = 0.185151187657281;
    msg.coff = 161U;
    msg.angaperture = 0.7085350295620616;
    msg.range = 22051U;
    msg.overlap = 34U;
    msg.flags = 90U;
    msg.custom.assign("TTOWYWXKTNOVTATOOROCZQXNLAYPERKSC");

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
    msg.setTimeStamp(0.38545729095003);
    msg.setSource(47723U);
    msg.setSourceEntity(76U);
    msg.setDestination(17361U);
    msg.setDestinationEntity(129U);
    msg.timeout = 19332U;
    msg.lat = 0.5175972738851934;
    msg.lon = 0.9201947499336691;
    msg.z = 0.27352292837096337;
    msg.z_units = 222U;
    msg.speed = 0.865750491980078;
    msg.speed_units = 82U;
    msg.syringe0 = 126U;
    msg.syringe1 = 133U;
    msg.syringe2 = 46U;
    msg.custom.assign("EVYYNFIDALFRIDOPJTKPNWRQNAJICHNGMXGMJUBFSZCHYZTUEIAFTGOPUQOYJXDGLAJJJQLJBXAMSIQWWYCHTAVRRYSUGZCLQGA");

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
    msg.setTimeStamp(0.40179242622688494);
    msg.setSource(58933U);
    msg.setSourceEntity(203U);
    msg.setDestination(55409U);
    msg.setDestinationEntity(254U);
    msg.timeout = 38236U;
    msg.lat = 0.5179826952302126;
    msg.lon = 0.9485761537455949;
    msg.z = 0.4438841105179919;
    msg.z_units = 106U;
    msg.speed = 0.2227215756619767;
    msg.speed_units = 1U;
    msg.syringe0 = 201U;
    msg.syringe1 = 215U;
    msg.syringe2 = 45U;
    msg.custom.assign("XDOXPIHTWHPOVYQWNBEFJTMTVBBTURRMQABPIOJYAZJYFRKSXFSBYTHBJHMSISRYXZXAPIERJVRVEMUSLH");

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
    msg.setTimeStamp(0.561828988408415);
    msg.setSource(23084U);
    msg.setSourceEntity(200U);
    msg.setDestination(10633U);
    msg.setDestinationEntity(60U);
    msg.timeout = 14940U;
    msg.lat = 0.6925061843711582;
    msg.lon = 0.9298695412504795;
    msg.z = 0.9382882391174237;
    msg.z_units = 94U;
    msg.speed = 0.16731244066947626;
    msg.speed_units = 8U;
    msg.syringe0 = 231U;
    msg.syringe1 = 98U;
    msg.syringe2 = 74U;
    msg.custom.assign("CXMVFRHEXYVKHCOKFKUUPETGKQTTBIKXCZYZUJDTBJMZYBIXHJSWFRZXAOODEKQYQBDHGKREVKNSEIYLGRPYSLPNBWOJCEHADRCFFSWPMVTLDYAQMGXKJRHRTCLZFXIGXQGEXYNYBAIIHDHNWGDEMSBTZMFUOLWGJABYPNSNCBBQSI");

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
    msg.setTimeStamp(0.287379315686612);
    msg.setSource(28031U);
    msg.setSourceEntity(150U);
    msg.setDestination(39903U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.24514362835055403);
    msg.setSource(21883U);
    msg.setSourceEntity(95U);
    msg.setDestination(34663U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.752133702572934);
    msg.setSource(42466U);
    msg.setSourceEntity(198U);
    msg.setDestination(14760U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.512434042201487);
    msg.setSource(35981U);
    msg.setSourceEntity(203U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.12426838694528464;
    msg.lon = 0.2797080895449183;
    msg.z = 0.13600486139029877;
    msg.z_units = 190U;
    msg.speed = 0.2528877752581248;
    msg.speed_units = 223U;
    msg.takeoff_pitch = 0.2940775107596074;
    msg.custom.assign("ZPSZHVLZBGMBJFKMOHHQEREOPPDJAOCKZXNHIJFSAKETMYHWEELUGQUDCVJYXWTZPBVWIFABGNYRADQJGTUFLXEOCISLSOHKXYVYECQDHXNRIWTTDMUBUYRZNCVODZWFZOXLRYRD");

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
    msg.setTimeStamp(0.5801961097968713);
    msg.setSource(427U);
    msg.setSourceEntity(92U);
    msg.setDestination(36578U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.14342859857113;
    msg.lon = 0.832352366684368;
    msg.z = 0.6724075896853363;
    msg.z_units = 189U;
    msg.speed = 0.2374699510565872;
    msg.speed_units = 102U;
    msg.takeoff_pitch = 0.7543251000351011;
    msg.custom.assign("AFIWLSZYOGHAMIFVFDVOKOFVJENXEELBYZJPOGHCZHIFXHOTSXHCDWNJPQBSCWZKJEFNLDWKWEAZGNVQXGUBRPCWYKHWJAIFCVTURVDIBKQKQRRLVIMDZBNWTKZRPFWBUMQZSFMXTCCEKJGTKZQPHAQYIOPLUJJYJBDBPADQUUHYYHYSRYNEOYA");

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
    msg.setTimeStamp(0.6049514859223372);
    msg.setSource(61151U);
    msg.setSourceEntity(188U);
    msg.setDestination(21663U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.9752648397031806;
    msg.lon = 0.33008162085366066;
    msg.z = 0.5751602729428648;
    msg.z_units = 18U;
    msg.speed = 0.6213924136058425;
    msg.speed_units = 25U;
    msg.takeoff_pitch = 0.520645988586747;
    msg.custom.assign("ZOTNYSKKGEEMNVUFYWGUDOZEKJACQUFDTYXKIRPLUMCIKXPOHATRWADSNESMDTFVCNROLRQELFJGEPMBMJIZGOVPWHJRCMAXOUNBRTB");

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
    msg.setTimeStamp(0.8148154701000807);
    msg.setSource(15295U);
    msg.setSourceEntity(135U);
    msg.setDestination(11369U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.8511491590995549;
    msg.lon = 0.5298192815246685;
    msg.z = 0.3332691624575025;
    msg.z_units = 169U;
    msg.speed = 0.7593580336514975;
    msg.speed_units = 238U;
    msg.abort_z = 0.23233868464904206;
    msg.bearing = 0.4709170484860894;
    msg.glide_slope = 146U;
    msg.glide_slope_alt = 0.7915981983319605;
    msg.custom.assign("PFUMLBEQWLWMXNMAQUZHUQXKRKNISWJDHGJTSOIPXWPWDBNQKMZLBJBILPLPIUOXSYPLZJGYBCTUFBAVDURDKQOCQJESUVJHFKOVCTRZENGVNQEVICXXOVVRTVNOZRCOLBUXFHSYALHJNAZFQSDGIKOUAMCFGKTAREHFYNKJSZICYWCDWAIPONUAGJMYLWDZAYXNJWOILHHFYH");

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
    msg.setTimeStamp(0.40865475683485475);
    msg.setSource(10006U);
    msg.setSourceEntity(29U);
    msg.setDestination(46844U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.17970358736113068;
    msg.lon = 0.4200994820136027;
    msg.z = 0.37392958647221575;
    msg.z_units = 88U;
    msg.speed = 0.6763425568988979;
    msg.speed_units = 200U;
    msg.abort_z = 0.4144973322682307;
    msg.bearing = 0.5648462426842973;
    msg.glide_slope = 186U;
    msg.glide_slope_alt = 0.9007104479714552;
    msg.custom.assign("WWZJOQBQHIOVMGLHIFXYUAILUUMTCUYCYWNDUUWGKYHMEHHTK");

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
    msg.setTimeStamp(0.1387446185532939);
    msg.setSource(57818U);
    msg.setSourceEntity(198U);
    msg.setDestination(29479U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.9933047483945981;
    msg.lon = 0.2406717220309501;
    msg.z = 0.34236614591515857;
    msg.z_units = 156U;
    msg.speed = 0.17383105155901024;
    msg.speed_units = 28U;
    msg.abort_z = 0.1130905330019617;
    msg.bearing = 0.8544163082898318;
    msg.glide_slope = 201U;
    msg.glide_slope_alt = 0.31083924600213586;
    msg.custom.assign("MWQNCKOJIGZLMVVTMCSAOFFCJUFEWWHXVLFJUUEUTQDEYTCZVHTAMBUDGXNAYSTTXTTZRIKEPAQMNJWLWLSZNOGEDTDLGKWVCTKJWBYZPMUQDFSS");

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
    msg.setTimeStamp(0.321118103364606);
    msg.setSource(24765U);
    msg.setSourceEntity(183U);
    msg.setDestination(40849U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.8537680644538311;
    msg.lon = 0.6243499550982492;
    msg.speed = 0.42079509878095445;
    msg.speed_units = 95U;
    msg.limits = 248U;
    msg.max_depth = 0.9220583089987084;
    msg.min_alt = 0.37142007064224747;
    msg.time_limit = 0.1251776237895753;
    msg.controller.assign("IDNKUJOFPOEABJNBSXIGQOLTGFRXCFUPAXNCGRCWSSYVTHKMVBJFWWTITFEYFHBGHALIWSSWRQ");
    msg.custom.assign("EXWDMJTSORNPICNIKDWAPIGDHBKDBIQGRODNDHLNXWYHNPSCABCVVFEBLUKEZUTPXAJFGDATASXLUQJVLHQZZGPAFURZTWYNGVMUWLMCVOXKHVTZX");

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
    msg.setTimeStamp(0.612568282542083);
    msg.setSource(42212U);
    msg.setSourceEntity(203U);
    msg.setDestination(51095U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.7774262979738447;
    msg.lon = 0.5970192058972569;
    msg.speed = 0.8743749907391248;
    msg.speed_units = 119U;
    msg.limits = 55U;
    msg.max_depth = 0.29725732423404927;
    msg.min_alt = 0.5619899039148974;
    msg.time_limit = 0.6943897902234148;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5761166197540696;
    tmp_msg_0.lon = 0.18461526559331887;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MMSMAQLHPRDVJLVZKOTXJIWKMLTCOUIZLAZYUEXHERVMVFPKEDJBTUBSKYKXIGTLJBOTPTNVRCFOVFYFGAXQYXSICWZWKWVXFFNOBPCMRLHNAYDHNIQZUNEZAUD");
    msg.custom.assign("MVUOECNTIZJKZCEWCWBMJFYPTXLKAJRLXRZCCKKTHFCQWLHWERDJEZZARUJYPKAYIYHLLLSQNWOYVHPMRUEZFIOIUFNXDQGGHNXGKBJTSZQ");

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
    msg.setTimeStamp(0.9782811681122215);
    msg.setSource(40837U);
    msg.setSourceEntity(112U);
    msg.setDestination(56612U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.04067439125614114;
    msg.lon = 0.730378617759139;
    msg.speed = 0.3597781259370222;
    msg.speed_units = 234U;
    msg.limits = 51U;
    msg.max_depth = 0.5738479436755697;
    msg.min_alt = 0.34219555565049775;
    msg.time_limit = 0.5751982694162989;
    msg.controller.assign("WNEEZWCCFUZZOTYSOURBHILGIAHYKYGRUOMHRRVAWRJXCTQXQAPSBBPZCGUSKVLAYFFRXNMJQMUXNRPQNILROEPFLXUHLHPEKMLIQDUXTPYAZACQAPMNMTWCUFJKMEBIDBOWF");
    msg.custom.assign("AEORCNHXTYTWPGTPPCTNRCHQHSFVXEGJISYOCEJDUXOUASXTNYFATNDFVFRTEZPHVCXKVZCOLO");

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
    msg.setTimeStamp(0.6400612632363379);
    msg.setSource(51264U);
    msg.setSourceEntity(196U);
    msg.setDestination(3458U);
    msg.setDestinationEntity(186U);
    msg.target.assign("EGGRSUQEJIKXCZUUIDANNJTHVRHKMVNYZQXJXCFHXHIVHQKPICNTJTSKNGJXWDTCWSMWFVIBULZCEJVEDGWTOKIWOXJLLYQVVASOIHOYMRAODNFOHLTBZJMEKXJOKRCDFPLERBCDCELPACKOXZBBQSSSSYYMXYGVAZEQUULFOQPRQTIIMWPRVP");
    msg.max_speed = 0.0008289795728516625;
    msg.speed_units = 112U;
    msg.lat = 0.6942028194765574;
    msg.lon = 0.3354021327035387;
    msg.z = 0.9885878084532322;
    msg.z_units = 225U;
    msg.custom.assign("AQCEFWLPYJIPHSEPANDKDMENPGAAEIXJOWQBBZVFCEHGXTNMLADTOZMSZVQJAYKYMCWKFOTCYHONMNWADDLLZQGGBBPFBTGMATECQLMGGR");

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
    msg.setTimeStamp(0.4250968835499638);
    msg.setSource(7782U);
    msg.setSourceEntity(54U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(177U);
    msg.target.assign("WERUMGGMSFPWKDMZLGXSTVVQNFWRTYUXOXOVQPKVNCYIQQPBZVDCODBAZNEHLJXNWMDAYHSIHDDWMYKGOYJJOHAVQSQHKGTTNZIXBSRMLBULTSXWFZPINKCCWJBSFXIFSQGBFYJBITTNVELQRMRLIHFUDJFVEHIYEC");
    msg.max_speed = 0.4409759707580597;
    msg.speed_units = 141U;
    msg.lat = 0.8503571238641738;
    msg.lon = 0.5880090523290661;
    msg.z = 0.35744575200967466;
    msg.z_units = 249U;
    msg.custom.assign("SCXAJYHJOPSCD");

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
    msg.setTimeStamp(0.7243786542936482);
    msg.setSource(42487U);
    msg.setSourceEntity(86U);
    msg.setDestination(63606U);
    msg.setDestinationEntity(3U);
    msg.target.assign("BFNOKRWZAKWJFGPSQQASJUZTMBWYUZZZVDXDREILUJEBOWFFPXUSKYTMBXPHIYYBQAVTPTDUBVHPFFXYJHXIPTQVPLLOLDTGMQXXDBZTKCURRVTJLZGEBISBZRLINEHTAVACSJGUHJBIIAOCFNDSNIJODHLLIKYXYRANHDWCSMOS");
    msg.max_speed = 0.2381927424607161;
    msg.speed_units = 81U;
    msg.lat = 0.18477652893523766;
    msg.lon = 0.8077897385023927;
    msg.z = 0.3513762349187046;
    msg.z_units = 205U;
    msg.custom.assign("KVAQPWNZJYCWZKMIELKTKRPRMURXFHWMDTOBMUOBXSHCIUAURXTTKYRMZ");

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
    msg.setTimeStamp(0.08967837071761542);
    msg.setSource(45752U);
    msg.setSourceEntity(105U);
    msg.setDestination(21426U);
    msg.setDestinationEntity(98U);
    msg.timeout = 25427U;
    msg.lat = 0.05278278304132333;
    msg.lon = 0.247330666701422;
    msg.speed = 0.898965752740422;
    msg.speed_units = 197U;
    msg.custom.assign("CVJROMQFTLJCEKXXKJFTSIFJFOZEIDDSHXVEYNZYIRHSYSBFCZMHNNXKMUHMEGKATRCBPZGRAGMPFSCKXMLGWZHDUGOVBYIB");

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
    msg.setTimeStamp(0.8424378151422297);
    msg.setSource(10916U);
    msg.setSourceEntity(248U);
    msg.setDestination(16547U);
    msg.setDestinationEntity(205U);
    msg.timeout = 12917U;
    msg.lat = 0.9757288796196192;
    msg.lon = 0.6335653634189765;
    msg.speed = 0.019853830562192476;
    msg.speed_units = 4U;
    msg.custom.assign("VAUKFAZVBDSWKUMXTDLLHKRASUPZVRQFYEDKPYRTXIHTCDHR");

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
    msg.setTimeStamp(0.7467627590466208);
    msg.setSource(59616U);
    msg.setSourceEntity(141U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(36U);
    msg.timeout = 23494U;
    msg.lat = 0.9319119318076281;
    msg.lon = 0.02234995297396447;
    msg.speed = 0.8370413549195461;
    msg.speed_units = 47U;
    msg.custom.assign("AKSGXPHJCQLSXXYCJKXBLLVNITEMFEXNJDINRNMCRBTZTQERFMPYIFJGQWUGDXRZHNAOHQTFKYTHUBBVZUZQCDZTZITEEASQCVPOVVEQHRGLGESVYJJMAPMMMZWGWMDL");

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
    msg.setTimeStamp(0.9420485443550451);
    msg.setSource(11632U);
    msg.setSourceEntity(62U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.395855326711798;
    msg.lon = 0.04530803813427442;
    msg.z = 0.39503957842629434;
    msg.z_units = 248U;
    msg.radius = 0.8340069995505074;
    msg.duration = 54142U;
    msg.speed = 0.8077198760091413;
    msg.speed_units = 106U;
    msg.popup_period = 44987U;
    msg.popup_duration = 60576U;
    msg.flags = 24U;
    msg.custom.assign("IDYJYFUAHATWCVVLVQBSEGVTONMINWQGFZNCDPEMTFYNWCYCSGMTNOKZXJBNUJEGQRXEBZZXUORH");

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
    msg.setTimeStamp(0.2636048233119791);
    msg.setSource(270U);
    msg.setSourceEntity(16U);
    msg.setDestination(47290U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.6357882458784951;
    msg.lon = 0.8255258892522294;
    msg.z = 0.8452891397151785;
    msg.z_units = 73U;
    msg.radius = 0.36639370212348954;
    msg.duration = 8522U;
    msg.speed = 0.8792698495232677;
    msg.speed_units = 19U;
    msg.popup_period = 39078U;
    msg.popup_duration = 33425U;
    msg.flags = 96U;
    msg.custom.assign("FATTBVLRUSZVABDKTJSKXSVMCIBROGMBREHOVDWOMYMFUFZCCDJZCPLSOOSYPQKNFRCDWIIHGVMKRUUJRMCIJXSLEMNHGQXTVZHUAXSXNLFBTWYAIYNHFNDKMANOLDBVACUREQTNJYHXWPGDRPYGXLOROFYNUGVTBFGQJBIGYYHZNHBDHAUCSKFKJJPGEKUWTWQZAOIX");

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
    msg.setTimeStamp(0.44855211201387757);
    msg.setSource(44008U);
    msg.setSourceEntity(211U);
    msg.setDestination(11030U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.18927082121810734;
    msg.lon = 0.8295155376258598;
    msg.z = 0.4780177453662665;
    msg.z_units = 58U;
    msg.radius = 0.42341453790768036;
    msg.duration = 17183U;
    msg.speed = 0.9433303634771553;
    msg.speed_units = 123U;
    msg.popup_period = 64850U;
    msg.popup_duration = 45963U;
    msg.flags = 68U;
    msg.custom.assign("WZUNLFIXTHJSTEAFKLICECIZAOPYEQBHRBTFEFMGMMATZPNONACEFYDUNPCVWQCKXIXUUALKMMCJKUBKJTATLKWHVOFYHVNEHTRLQIYSLPVVPYAPNIZSXDWOTLPCJQBBAQPRGGDGDKOQDYZPOMILWDRNZRESKKBJWURRGXMMIAHVXNSIGXSEHHZFQR");

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.6005858786399519);
    msg.setSource(23459U);
    msg.setSourceEntity(232U);
    msg.setDestination(42311U);
    msg.setDestinationEntity(109U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.331099417247274);
    msg.setSource(19918U);
    msg.setSourceEntity(225U);
    msg.setDestination(26965U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.2874698849029612);
    msg.setSource(9516U);
    msg.setSourceEntity(230U);
    msg.setDestination(29093U);
    msg.setDestinationEntity(235U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.2019050917605818);
    msg.setSource(31368U);
    msg.setSourceEntity(180U);
    msg.setDestination(29304U);
    msg.setDestinationEntity(89U);
    msg.timeout = 30613U;
    msg.lat = 0.3174481769051404;
    msg.lon = 0.5178562219134796;
    msg.z = 0.41973678715179885;
    msg.z_units = 139U;
    msg.speed = 0.6116106041235071;
    msg.speed_units = 47U;
    msg.bearing = 0.22842336858884082;
    msg.width = 0.7984498364586735;
    msg.direction = 20U;
    msg.custom.assign("DMANHVDWSPRJATQUVKYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.39043391992639476);
    msg.setSource(63321U);
    msg.setSourceEntity(225U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(231U);
    msg.timeout = 64315U;
    msg.lat = 0.9009787305910705;
    msg.lon = 0.312091252808697;
    msg.z = 0.11393464678615373;
    msg.z_units = 191U;
    msg.speed = 0.7654194366886057;
    msg.speed_units = 159U;
    msg.bearing = 0.8510383057507634;
    msg.width = 0.7325550805247645;
    msg.direction = 244U;
    msg.custom.assign("OERREWUCCZUKXQNZALUQTCLYKRRJULSFXMQAMMCABVQWMYIWNUQIFDAGDBRLLIYKRPOZVICHMBTYFGAFEWXOINKHOHXSDJGJYSOFQFVQEZGVOBNJMOGNKDAEVYAKXZHZHKSTYDOBPXPVDNCLCWXSEIKUJBNERMHITZPCPJQKHNLCXNYOUHJEVLZTBTSBRGTIPJEGMLFPXQUFPDWFVHUAWBWHSDDZIMVSAPJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.09421871176958652);
    msg.setSource(36570U);
    msg.setSourceEntity(164U);
    msg.setDestination(40525U);
    msg.setDestinationEntity(160U);
    msg.timeout = 58208U;
    msg.lat = 0.29096055440783886;
    msg.lon = 0.9863918820489191;
    msg.z = 0.15968604210721848;
    msg.z_units = 82U;
    msg.speed = 0.10954992051901868;
    msg.speed_units = 206U;
    msg.bearing = 0.5434027106006801;
    msg.width = 0.6458662825331649;
    msg.direction = 17U;
    msg.custom.assign("RQAKLHEGSPAOWPTVLZCJWONDTXRVTPGOMUYSANMXZZINCCKCIZXHENUTMVEPJYRDHCXFZOETROTFUJYZDGYEQJPLKNMWZFBVXBGSMDIKAUWEDVKMRJXJVXLASIRVUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7951028656604902);
    msg.setSource(53174U);
    msg.setSourceEntity(70U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 64U;
    msg.error_count = 243U;
    msg.error_ents.assign("LRWUFRJSNCCSUHPGRBKTTFSKCREZXFSGVZGGEAVVNBZRNVGQKTEKNTTNPYTMQBWFDKESZAHUJWFXAYUCJHWXGVYIIWMFJOPLDIUTDFAKYQBGOQIDELYCMOQIGLOOLLPCPXJMBVSMJJEMXLAZEXDJPEEC");
    msg.maneuver_type = 12792U;
    msg.maneuver_stime = 0.2552691411551872;
    msg.maneuver_eta = 31684U;
    msg.control_loops = 1413691403U;
    msg.flags = 156U;
    msg.last_error.assign("ZLLEBSXIMAJCQBYPONCWKAMWFNECTIERTXRVOQDLYVLQQURBODKOIVSHMDLFZHWTTNRKAPXMGUEHJSAYFPBNQRFBNBGGSHYBWVSBXERRFDJFNEXBYGXAWUQOMZPMSUZNHCIJQHLDFXWOTCUGAPDNOIIIFMJHSLAPXUZKMTEJH");
    msg.last_error_time = 0.3239740534516964;

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
    msg.setTimeStamp(0.9486974225286028);
    msg.setSource(10975U);
    msg.setSourceEntity(237U);
    msg.setDestination(49079U);
    msg.setDestinationEntity(106U);
    msg.op_mode = 55U;
    msg.error_count = 91U;
    msg.error_ents.assign("UAQNVZGEFWMBNNMGZJFGBGLUAVCOTKZIRKWALGNLSCLGWRCSDDYBHBGPCWDJYJSYHKCNWOQKRDCWPFOZUIWZRQEAYRQXCLOXHROPXKVKJUXIFJMVYTIIHSTPICHDEQJKSXIASFLWEQADATUWFDZFNYKQRBZXAHTVBUUISXQEUMBGMPPFPGYMNOTOBVVZRCBATNOLVUFFLWV");
    msg.maneuver_type = 53269U;
    msg.maneuver_stime = 0.6640852408519183;
    msg.maneuver_eta = 40644U;
    msg.control_loops = 2157423098U;
    msg.flags = 0U;
    msg.last_error.assign("KJHVCGVPULONJNEMGQWIJIALVUQCIABUJHIJG");
    msg.last_error_time = 0.1366918105971726;

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
    msg.setTimeStamp(0.8992588188174687);
    msg.setSource(2298U);
    msg.setSourceEntity(2U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(170U);
    msg.op_mode = 73U;
    msg.error_count = 181U;
    msg.error_ents.assign("YLCBRAMEBDCNNGZBTDGYQMVJQWJUATIQLGSWHXZFOQWXPUSRWKPISPEKHYQKNFOIPMXQLEBOHHLFGXSUUAHZXURGODYNMTWBYCKPEFFEBTBKPLQKDNPBGSIHYZRDTJLJUTNWZAVRSPTVVSIIPMBCCMWSDIRLQUODDLOHHTVGCFETFEYVFVDCRFYKHGJ");
    msg.maneuver_type = 43512U;
    msg.maneuver_stime = 0.26000175184200824;
    msg.maneuver_eta = 24434U;
    msg.control_loops = 3869355830U;
    msg.flags = 73U;
    msg.last_error.assign("YKATORPBZZIFTKMSJJTHZVBJQELAEUSLQCOVSBXUZNHBBZWWBELVYUZTXUNSOWVJDEHTYPHIIDRATOILZCVLUMKSGPJBYYASUNCDAMGIIMELFEKTJNFPQNGJNWGQPHHRXFYCJYSXZMUCLXFXWIQWKCDREXGOAKAUR");
    msg.last_error_time = 0.08093177517297456;

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
    msg.setTimeStamp(0.2909879809160779);
    msg.setSource(24541U);
    msg.setSourceEntity(95U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(35U);
    msg.type = 81U;
    msg.request_id = 12985U;
    msg.command = 60U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24606U;
    msg.info.assign("OQVQNMBBOEKEUWVSNVWOAVAAOWHVHGDGEOF");

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
    msg.setTimeStamp(0.014175528501900403);
    msg.setSource(54404U);
    msg.setSourceEntity(147U);
    msg.setDestination(49515U);
    msg.setDestinationEntity(26U);
    msg.type = 60U;
    msg.request_id = 2169U;
    msg.command = 105U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.03285677169965717;
    tmp_msg_0.lon = 0.847577793453056;
    tmp_msg_0.speed = 0.6336440477549903;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.duration = 60932U;
    tmp_msg_0.sys_a = 35017U;
    tmp_msg_0.sys_b = 40803U;
    tmp_msg_0.move_threshold = 0.07156731241289294;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16297U;
    msg.info.assign("GJCHFDFHTCEOWPAQIJDIXCPXELIHCUYDZOJYFROVNASQNF");

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
    msg.setTimeStamp(0.26244966238836276);
    msg.setSource(8332U);
    msg.setSourceEntity(207U);
    msg.setDestination(26695U);
    msg.setDestinationEntity(170U);
    msg.type = 95U;
    msg.request_id = 3344U;
    msg.command = 158U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 20425U;
    tmp_msg_0.lat = 0.03988932210792129;
    tmp_msg_0.lon = 0.5176870311664571;
    tmp_msg_0.z = 0.591481539785654;
    tmp_msg_0.z_units = 27U;
    tmp_msg_0.speed = 0.3465958158787422;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.custom.assign("ZXVWASYCNLRZMTJAPHDPLRKNDHGPLKUNVEKHOOJZJUQNGCURLZWSMYPLPCDRLTXYPRAPUTJYYTCPSUIIJLVSDFASGFZBTDGJZEEQPGFBACQHOOFDOJKYXDHWNFGQLSRXWTMMEMHACMMHQXTDVQGNWIBFXGWKERVCLAB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3340U;
    msg.info.assign("EGMYAVAKUMQOTPEWFUZCOLEFTRNNCPXHOYYKBLXDGIBLDBRCNXFFKUZKAHTBLRNTIPPICHWCDNSLVOQGPKNNLZHPTWQTXSWZJYBUKQUVAQKXOPTVETSVECIFQXPUDJHMJWCHBOLEGCGUUHZXVDVKTMJFSEKBXZYTLBWWOHSYENWQIIPVEFJIDIYGXGNZGFONZYDSRRRDDJLUAQHJSDUCRAAOVVMAQMMIAPJWWBLGZESRYFFRGQXMHRSMKYO");

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
    msg.setTimeStamp(0.8966130162552981);
    msg.setSource(1093U);
    msg.setSourceEntity(254U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(78U);
    msg.command = 124U;
    msg.entities.assign("IAJDLPWGNHYHPQFJCOXNQRFEVRXUZHSXVDKXVEIXUZBPAUQLBWMHSJIMZFJPYJMDYVCKIMTGBGOUBDSINWBBOTLDAKYDYULEJCJKERPEXDIHKUYOLMHPKHBZRU");

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
    msg.setTimeStamp(0.1174272674585316);
    msg.setSource(3132U);
    msg.setSourceEntity(223U);
    msg.setDestination(64546U);
    msg.setDestinationEntity(18U);
    msg.command = 222U;
    msg.entities.assign("PBWKSJJDBNCROVLAUHRIMMUYVEJNFRWRBEVDCBIBNGLFXSIQROMFVCWZVBYOKVMHJLDHYPZFKHIVSOCZXVUIVBTZMEHMBJXLZDFQTEKQJWTGUQQDATLSGYGTSXDALCGFGYCSHDDWOZRXFZQMIYNDAFPJRCAXOJNUWYAQSTJFGSAKIELCKT");

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
    msg.setTimeStamp(0.9778870163418415);
    msg.setSource(59240U);
    msg.setSourceEntity(250U);
    msg.setDestination(1023U);
    msg.setDestinationEntity(200U);
    msg.command = 19U;
    msg.entities.assign("DFEVCHZKYKAGNUMYWGUEDYMSLBVXPCXWXKPDQDTJPPOBJPLMZACDZHTGPYMHDZSLZIIINLLQQRUASFNNQORHOEIDBFVVOQQLTJQCXGYOVKWESQGCTHFOSAWJNMUILXCCYXJCAGUIDEHKOARWOUNUBHWNBDVROVVEYMPWGLRBZAEYFXFBREWUXMTAJAZOSUBXRRIUHBWTBKS");

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
    msg.setTimeStamp(0.5746243141860742);
    msg.setSource(27115U);
    msg.setSourceEntity(89U);
    msg.setDestination(18100U);
    msg.setDestinationEntity(18U);
    msg.mcount = 155U;
    msg.mnames.assign("TBQCXKPDWFUKTUGMOPSCIAVTNVELQWNTIKDSBJOQXGZADXFRHKOLHJLZTXJIYFAYMEEOMWMHWYJA");
    msg.ecount = 237U;
    msg.enames.assign("KVQBLQRCNSJUJSRHPAKJWWEQNKILSFGRGYHABJFVUHIHFZDOTTRLMIEQVOCOKRQUYH");
    msg.ccount = 9U;
    msg.cnames.assign("ISIRMBDKVVFRATBBLCHNMMLPJKKEZMHRKIGZQJUBVXVPCHYPNOBFQESCFNIGPRHTMCMCWTFZCJJUAXAHDDFTMFGBEIJMTYUWQEABFJOIQYGKZOVKHHPPDUEYWGNDXICZNBKNSGFQXXXPWRNCSMJUUISHUQZCLUSOSVKHQTZEWOOTSADTGAZTRBEYAWRXYQHPMJAWBFIQKLOSZJE");
    msg.last_error.assign("RSVYEVIXHDFARICZSRNDDONXRHWOXFEVMIZIOGRCTDOCBZDCNCEPPEUGYYIHGPJHH");
    msg.last_error_time = 0.7854269179199385;

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
    msg.setTimeStamp(0.4060244927380945);
    msg.setSource(14879U);
    msg.setSourceEntity(209U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(71U);
    msg.mcount = 102U;
    msg.mnames.assign("ZWBVHVWRSPGESXIMHDPTFMLMNZGZQDBZHCIOULU");
    msg.ecount = 113U;
    msg.enames.assign("LAJCIJDMXEMVHCVERBJFIUGXYJBGNJWCICUUDMBTATKTSIVODBKREFMHZNCNJECAIPVFMGYRZQADANNAPPCZOUPXDXGVHTPRQRVRHEYBNOAHHXSIFQDJSQCOGVMUEUYZTFKYKSGFFQFEJLBLOLXYNHLIDWTMOVWKSBZBXYZSDPTUWYQWWQALPBMTGUMWWOWZURKNOALFLURZHWJHQZQQEVISRSNZN");
    msg.ccount = 17U;
    msg.cnames.assign("NXKGJBWOPVEGHXJUNWADAKNXYONZUFZPQMHHQTVWBWVOMTOJIKNLILFAKMQWNCCGCUHGSDLTGRZVSXEZYQRABWBWALYLHJDQZOPFSPQCHXZPRUPHYULFXDLFNDWDTBWCEVMPPYIYKGFFQIPGUMTBJRHIUIKRHECQCKEIYMYLMGRPSVVJIRDDBXARHTTOAIJUMSKWXTCYXLBUFJMESNAGNGIKDN");
    msg.last_error.assign("LCBKCRIMGFDHZOPQQMYDBQZXXBGEGFIXFYMNFGSBCT");
    msg.last_error_time = 0.22170814727813826;

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
    msg.setTimeStamp(0.1487989707411329);
    msg.setSource(30487U);
    msg.setSourceEntity(199U);
    msg.setDestination(39208U);
    msg.setDestinationEntity(73U);
    msg.mcount = 246U;
    msg.mnames.assign("CUGBFHQBQJAFRQLCJIAJFAUFYMDDGOVHVNSDELROTPGXWLLMVLUYCKSHTJXCVXFCOPSTPHRNVONZOMTIVDVSGMQXFZFQWRQUXIETMUPNCJSZRUKYUBB");
    msg.ecount = 167U;
    msg.enames.assign("MXSLPBSWRNOXYRKVAGQZWTLVYZZENYKDIGNJHQKUHVTBBISIEZSKCUKIBEIRYJLIPOSPKWNHVGZTBMCOOBJZFMQPUBXGKOYNYDVCIAMHNVNHWEYUQGNLZDOACQECHSETTZVKJLFEXLRQQMVYAFAWPBPXIWZBDJGXPYMKUDUSXWHALJUUIMTDQFT");
    msg.ccount = 63U;
    msg.cnames.assign("MBSFBBVZSMPPOJSCWWYBMQXTMERCNNTWNPJICJKMKZLUUNWBNPIWDAPCYKBULOWIHPFAEXTTGHVLGSUPAJUTFVLDXTFADOHYHNAXVQGGBPJJWCNVEDYEZKFGXHXXJOKAIZDWGYYEKVUAOCBEGNKNDTJKVSZAOVTUCYRREWAHHIIXMUMSDFOQFLTQEGRIOGZECGJWCXLSEZUQIPDXSIRZI");
    msg.last_error.assign("CCMSUYHVAUGDSNUPGFPXBEUIJQNMOZZOHOPRMUD");
    msg.last_error_time = 0.5707555842075525;

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
    msg.setTimeStamp(0.6076884789874074);
    msg.setSource(45864U);
    msg.setSourceEntity(73U);
    msg.setDestination(37769U);
    msg.setDestinationEntity(66U);
    msg.mask = 78U;
    msg.max_depth = 0.36430933804271215;
    msg.min_altitude = 0.7371950955846028;
    msg.max_altitude = 0.5237920096519305;
    msg.min_speed = 0.944145781927985;
    msg.max_speed = 0.4954916212145335;
    msg.max_vrate = 0.1754397564518333;
    msg.lat = 0.15455463995413887;
    msg.lon = 0.9658646490752197;
    msg.orientation = 0.11259547157422989;
    msg.width = 0.36865401473502657;
    msg.length = 0.7002150191223168;

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
    msg.setTimeStamp(0.7521679957599005);
    msg.setSource(11133U);
    msg.setSourceEntity(184U);
    msg.setDestination(14827U);
    msg.setDestinationEntity(202U);
    msg.mask = 26U;
    msg.max_depth = 0.023697684793193674;
    msg.min_altitude = 0.5318849810163321;
    msg.max_altitude = 0.4050742788389283;
    msg.min_speed = 0.3265025898117595;
    msg.max_speed = 0.8348718397973773;
    msg.max_vrate = 0.7005519410906651;
    msg.lat = 0.6821211426033128;
    msg.lon = 0.5428792971835337;
    msg.orientation = 0.13305461753181502;
    msg.width = 0.004267699727009577;
    msg.length = 0.9778112298669355;

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
    msg.setTimeStamp(0.8053324225716662);
    msg.setSource(32146U);
    msg.setSourceEntity(42U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(137U);
    msg.mask = 105U;
    msg.max_depth = 0.2712090130597322;
    msg.min_altitude = 0.6492782463324798;
    msg.max_altitude = 0.883544244382298;
    msg.min_speed = 0.5085807789170066;
    msg.max_speed = 0.06782456852125163;
    msg.max_vrate = 0.7859269210887849;
    msg.lat = 0.4081187305840913;
    msg.lon = 0.515835114221459;
    msg.orientation = 0.6137156283244649;
    msg.width = 0.11647621910351791;
    msg.length = 0.16517603948812853;

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
    msg.setTimeStamp(0.4152831575971353);
    msg.setSource(27304U);
    msg.setSourceEntity(125U);
    msg.setDestination(6992U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.8834996578550168);
    msg.setSource(64967U);
    msg.setSourceEntity(123U);
    msg.setDestination(919U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.5975149429891171);
    msg.setSource(48778U);
    msg.setSourceEntity(232U);
    msg.setDestination(51748U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.781261740471842);
    msg.setSource(21798U);
    msg.setSourceEntity(27U);
    msg.setDestination(21310U);
    msg.setDestinationEntity(157U);
    msg.duration = 39325U;

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
    msg.setTimeStamp(0.6907753910184801);
    msg.setSource(28250U);
    msg.setSourceEntity(57U);
    msg.setDestination(7523U);
    msg.setDestinationEntity(66U);
    msg.duration = 29905U;

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
    msg.setTimeStamp(0.7883751139596512);
    msg.setSource(1994U);
    msg.setSourceEntity(253U);
    msg.setDestination(7096U);
    msg.setDestinationEntity(238U);
    msg.duration = 30319U;

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
    msg.setTimeStamp(0.4867831980661187);
    msg.setSource(50926U);
    msg.setSourceEntity(203U);
    msg.setDestination(58173U);
    msg.setDestinationEntity(158U);
    msg.enable = 62U;
    msg.mask = 2765996904U;
    msg.scope_ref = 1786190636U;

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
    msg.setTimeStamp(0.29838959062257886);
    msg.setSource(47047U);
    msg.setSourceEntity(82U);
    msg.setDestination(33442U);
    msg.setDestinationEntity(7U);
    msg.enable = 151U;
    msg.mask = 1898663683U;
    msg.scope_ref = 926486332U;

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
    msg.setTimeStamp(0.14695646504435367);
    msg.setSource(22126U);
    msg.setSourceEntity(204U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(248U);
    msg.enable = 163U;
    msg.mask = 2890084937U;
    msg.scope_ref = 2855025252U;

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
    msg.setTimeStamp(0.506688034487697);
    msg.setSource(23317U);
    msg.setSourceEntity(191U);
    msg.setDestination(46699U);
    msg.setDestinationEntity(141U);
    msg.medium = 25U;

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
    msg.setTimeStamp(0.7111461286073211);
    msg.setSource(64794U);
    msg.setSourceEntity(200U);
    msg.setDestination(3127U);
    msg.setDestinationEntity(1U);
    msg.medium = 53U;

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
    msg.setTimeStamp(0.03099505667757163);
    msg.setSource(45248U);
    msg.setSourceEntity(191U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(193U);
    msg.medium = 91U;

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
    msg.setTimeStamp(0.6179220649665943);
    msg.setSource(31706U);
    msg.setSourceEntity(130U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(164U);
    msg.value = 0.76308840477506;
    msg.type = 209U;

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
    msg.setTimeStamp(0.6271054335733626);
    msg.setSource(25690U);
    msg.setSourceEntity(21U);
    msg.setDestination(59374U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7613601422588847;
    msg.type = 133U;

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
    msg.setTimeStamp(0.520932879250463);
    msg.setSource(8928U);
    msg.setSourceEntity(183U);
    msg.setDestination(60927U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9579231014814777;
    msg.type = 0U;

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
    msg.setTimeStamp(0.31407608361186024);
    msg.setSource(35176U);
    msg.setSourceEntity(14U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(248U);
    msg.possimerr = 0.5420577155378798;
    msg.converg = 0.8508569698219168;
    msg.turbulence = 0.2588156319799271;
    msg.possimmon = 153U;
    msg.commmon = 235U;
    msg.convergmon = 67U;

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
    msg.setTimeStamp(0.6568923815868996);
    msg.setSource(2637U);
    msg.setSourceEntity(146U);
    msg.setDestination(58384U);
    msg.setDestinationEntity(169U);
    msg.possimerr = 0.24458747719146645;
    msg.converg = 0.9130449177169224;
    msg.turbulence = 0.606793631005406;
    msg.possimmon = 235U;
    msg.commmon = 201U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.035130459455351426);
    msg.setSource(33064U);
    msg.setSourceEntity(23U);
    msg.setDestination(32548U);
    msg.setDestinationEntity(215U);
    msg.possimerr = 0.39779895355772;
    msg.converg = 0.526635604753115;
    msg.turbulence = 0.575011481606849;
    msg.possimmon = 231U;
    msg.commmon = 178U;
    msg.convergmon = 63U;

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
    msg.setTimeStamp(0.38691305098150897);
    msg.setSource(64360U);
    msg.setSourceEntity(230U);
    msg.setDestination(23308U);
    msg.setDestinationEntity(75U);
    msg.autonomy = 60U;
    msg.mode.assign("BCCEMVRHKXPSRIXFZGCOWISOQCZUQEYLYILRODAVRBNHJZMMIHTUVTOLHLXPKOAYUSXXELDOCIYSSEHBJKTUQVVFENSVAWPFSCDJNGYGJQJOORTQWRNXZKLBUAMUFVYGWZGAAUYXXYEPEXFCFDBAMNLNWDURGIGBDQFYXMEPRTKEPJZHQTKPSKKJZPFQFDJUZVSRHOFQILVAWKONDBMEIQMTTBMBDYLTGCLHWVWUNHCA");

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
    msg.setTimeStamp(0.7364460602574862);
    msg.setSource(31496U);
    msg.setSourceEntity(188U);
    msg.setDestination(22062U);
    msg.setDestinationEntity(2U);
    msg.autonomy = 87U;
    msg.mode.assign("FJSPMAJAWZD");

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
    msg.setTimeStamp(0.9394398100763124);
    msg.setSource(8861U);
    msg.setSourceEntity(166U);
    msg.setDestination(17103U);
    msg.setDestinationEntity(206U);
    msg.autonomy = 144U;
    msg.mode.assign("SLGPDTEBYKMUNZXJCXWRBSMXAQQANRIZHXTWRMUMLSZPGMINLLQIKFTFYOXYXWXBDGYEVPQIRKYOISNRYGFPBRJDKIJNMLKJHIAAHHVQCVBWJOJMBUOLCYRETNOBVACURHELPIJZHDAGPVECNHKTJAWWJZWNHRZDSZXTCYUUFVX");

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
    msg.setTimeStamp(0.4441322037011898);
    msg.setSource(45858U);
    msg.setSourceEntity(65U);
    msg.setDestination(42385U);
    msg.setDestinationEntity(93U);
    msg.type = 145U;
    msg.op = 72U;
    msg.possimerr = 0.47988563688556285;
    msg.converg = 0.7933822313235225;
    msg.turbulence = 0.5225210396144965;
    msg.possimmon = 125U;
    msg.commmon = 65U;
    msg.convergmon = 16U;

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
    msg.setTimeStamp(0.4536674447575325);
    msg.setSource(5841U);
    msg.setSourceEntity(174U);
    msg.setDestination(60933U);
    msg.setDestinationEntity(54U);
    msg.type = 55U;
    msg.op = 36U;
    msg.possimerr = 0.5748475863174402;
    msg.converg = 0.5499711596664953;
    msg.turbulence = 0.8410260534600423;
    msg.possimmon = 113U;
    msg.commmon = 241U;
    msg.convergmon = 55U;

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
    msg.setTimeStamp(0.9195461538390786);
    msg.setSource(22277U);
    msg.setSourceEntity(150U);
    msg.setDestination(52291U);
    msg.setDestinationEntity(243U);
    msg.type = 64U;
    msg.op = 62U;
    msg.possimerr = 0.41768710473969484;
    msg.converg = 0.026608104286082068;
    msg.turbulence = 0.9445265515055464;
    msg.possimmon = 23U;
    msg.commmon = 57U;
    msg.convergmon = 149U;

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
    msg.setTimeStamp(0.3704375344883535);
    msg.setSource(1008U);
    msg.setSourceEntity(230U);
    msg.setDestination(43551U);
    msg.setDestinationEntity(31U);
    msg.op = 195U;
    msg.comm_interface = 183U;
    msg.period = 11396U;
    msg.sys_dst.assign("MSTGQRSUNTDBBIVIHSADHZIBYXBFGOADDZMMZGKUQOCFTD");

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
    msg.setTimeStamp(0.7913330046518127);
    msg.setSource(40210U);
    msg.setSourceEntity(72U);
    msg.setDestination(62807U);
    msg.setDestinationEntity(14U);
    msg.op = 125U;
    msg.comm_interface = 153U;
    msg.period = 45073U;
    msg.sys_dst.assign("IUITDJUYOBBLOKLOZP");

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
    msg.setTimeStamp(0.6649497091056588);
    msg.setSource(30706U);
    msg.setSourceEntity(100U);
    msg.setDestination(30846U);
    msg.setDestinationEntity(76U);
    msg.op = 71U;
    msg.comm_interface = 58U;
    msg.period = 29977U;
    msg.sys_dst.assign("LMFNZKDGIWGBJGJDZJWPWILSYPFCYVAKWDXUJZGSVYYTVRULCEGZSBNBPHKMQQXJJETPHYIFPPESHAQDABRPFRLVSFMWEIWXECGRZFCOLNRCUYNOBZOUCGJRTNLIBAHRBCFZGCCVDMWOMXAVR");

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
    msg.setTimeStamp(0.3073326198615022);
    msg.setSource(17761U);
    msg.setSourceEntity(151U);
    msg.setDestination(38236U);
    msg.setDestinationEntity(135U);
    msg.stime = 3006578457U;
    msg.latitude = 0.35298106464532875;
    msg.longitude = 0.8208872264870004;
    msg.altitude = 51658U;
    msg.depth = 49424U;
    msg.heading = 16189U;
    msg.speed = -17810;
    msg.fuel = -74;
    msg.exec_state = 0;
    msg.plan_checksum = 9527U;

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
    msg.setTimeStamp(0.030630374440582697);
    msg.setSource(6140U);
    msg.setSourceEntity(35U);
    msg.setDestination(40780U);
    msg.setDestinationEntity(245U);
    msg.stime = 3927836722U;
    msg.latitude = 0.0618127773970647;
    msg.longitude = 0.8173910652387018;
    msg.altitude = 31637U;
    msg.depth = 25965U;
    msg.heading = 52784U;
    msg.speed = 6600;
    msg.fuel = -109;
    msg.exec_state = 96;
    msg.plan_checksum = 11200U;

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
    msg.setTimeStamp(0.701194817767384);
    msg.setSource(50844U);
    msg.setSourceEntity(88U);
    msg.setDestination(37040U);
    msg.setDestinationEntity(88U);
    msg.stime = 274574916U;
    msg.latitude = 0.04914358985034495;
    msg.longitude = 0.7771922040912647;
    msg.altitude = 57259U;
    msg.depth = 41380U;
    msg.heading = 28275U;
    msg.speed = -23235;
    msg.fuel = 85;
    msg.exec_state = 88;
    msg.plan_checksum = 11750U;

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
    msg.setTimeStamp(0.1652659925258656);
    msg.setSource(1155U);
    msg.setSourceEntity(3U);
    msg.setDestination(15111U);
    msg.setDestinationEntity(76U);
    msg.req_id = 19781U;
    msg.comm_mean = 214U;
    msg.destination.assign("KQZNQAALPXLDOEPNSRDTOXVSOHPUTHXMWFDLSPYVCJJIZFGOFVWBDRFZQILGNRKGCLTTKAJXCTYJAHJMVPHMCAHDMIBRWZYQKWJKUCJBITEWBRKVGLXYVAE");
    msg.deadline = 0.7657155331574774;
    msg.range = 0.8604684408568187;
    msg.data_mode = 136U;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.5624985572081288;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PQJNABDBMRTYKFUXZPBILCPPAQZISWDATCZPNWHUOPHVEMHOCTGWYSILOTQDRDKIKNVGYUXBRSHYRBOFFTUDLJMJAKUMEEJYHAVRGVEUBTLWYDTGI");
    const signed char tmp_msg_1[] = {32, -57, 33, -26, 81, -123, -106, -73, 8, -71, 109, -18, -38, -9, -58, 26, 86, -88, 67, 18, 113, -64, 81, -107, 3, 75, -41, -57, -43, -106, 79, -59, -54, 83, -64, 29, 27, -46, -33, -87, -108, -60, -42, 62, 51, -72, -32, 3, -88, 95, -71, 107, -116, -83, -84, 95, 4, -85, 34, -27, -1, 50, 126, 65, 80, 14, 104, -51, 70, -41, 65, 93, -67, 47, 1, -38, -67, -80, -104, -115, -44, -79, 101, 100, -9, 88, -2, -85, 110, 4};
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
    msg.setTimeStamp(0.34968389116459686);
    msg.setSource(15551U);
    msg.setSourceEntity(1U);
    msg.setDestination(33247U);
    msg.setDestinationEntity(233U);
    msg.req_id = 5471U;
    msg.comm_mean = 161U;
    msg.destination.assign("ZVAMJAGGNCTEASLXXYPHXKVHNBDNWZTSCJQCEMQILEBBCRGDIZTPOQFIZNPN");
    msg.deadline = 0.22261277168991978;
    msg.range = 0.4373948687045389;
    msg.data_mode = 14U;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GVDRLBORTQ");
    tmp_msg_0.value = 20U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YBLIAYEYKOXZLEMHUVDGFKCLWCDBZCAZCRPHUKEJJKWDCFBQSQFHZBOASNVEZUDMJGOITLNAHQBBAKSDLHWYSNSOITJGTSRXQDNZYNKHGVREYQWMCSSEEKZIBNHPITJHEYCVWMDPVDGUHTJNPRFICUJLFIQEFMRTNNZXJGOXJIAC");
    const signed char tmp_msg_1[] = {-123, 33, 56, -1, 20, -52, -59, 47, 40, 48, -2, 95, -82, 50, 47, 0, -48, -27, -26, -105, 22, -40, 7, -99, -79, -54, -4, 66, -85, 86, -38, 93, 25, -8, 62, -13, 32, -121, 70, -82, -19, 111, -47, 61, -18, -103, 8, -103, -62, -79, 67, 10, 115, -58, -42, 108, 95, 75, 34, -24, 84, -100, -117, -122, -89, -76, -22, 2, 32, 52, -78, -79, -66, 104, -37, 25, 122, -18, -87, -127, -91, -114, -71, -120, -86, 23, -112, -115, 40, 120, 93, 117, -12, 125, -24, 118, 43, -11, -96, 71, -110, 60, 4, 65, -39, 91, 11, 118, -96, 13, 13, 1, 65, -63, -21, -104, 30, 76, 107, -106, -16, 31, 126, -81, 95, 44, 104, 44, -50, 116, 64, 4, 114, 9, -99, 108, -47, 53};
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
    msg.setTimeStamp(0.013392379186313419);
    msg.setSource(4922U);
    msg.setSourceEntity(192U);
    msg.setDestination(58360U);
    msg.setDestinationEntity(211U);
    msg.req_id = 11401U;
    msg.comm_mean = 73U;
    msg.destination.assign("DIXAGMPMKKDHEYAEYPGXEIGKMVVSLAONITCQWFJCXHEPTQSDRFTJUTBQLMIMQBVZLYFTEEIAIYANKLOCOQBIZDAFUZSLMMWWNJXUFMLRHZXSDPBQYRVOSKCRWHAPAGBYHSOYXJQOKB");
    msg.deadline = 0.11953378526809455;
    msg.range = 0.15157342406636343;
    msg.data_mode = 189U;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.12035501774198565;
    tmp_msg_0.i = 0.07064734782270155;
    tmp_msg_0.d = 0.7774823491921424;
    tmp_msg_0.a = 0.2529054680101731;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TTMULFDYHQXVCUWTYQYGRDRGNPBDYMXWZLESODMFASAFPUDWCRZEOVHRBQOTVKVLGGCFASHWEICXNBRCKRHKQBXTOWYMACUEFFPQZEA");
    const signed char tmp_msg_1[] = {40, 102, 54, 47, 71, 14, -46, -29, 6, 25, 70, -78, 25, -69, -122, -35, 103, 119, -53, 18, -124, 11, -59, 60, -48, 115, 124, 64, 13, -10, 13, 71, 17, 80, 75, 122, 24, 114, -104, 64, -54, 78, -68, -13, 37, -9, 105, 110, 108, -52, -80, -58, -124, -118, -90, -119, -25, -116, 31, -126, 66, -52, 92, 69, 75, 72, 16};
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
    msg.setTimeStamp(0.9444174053128771);
    msg.setSource(38946U);
    msg.setSourceEntity(188U);
    msg.setDestination(16528U);
    msg.setDestinationEntity(243U);
    msg.req_id = 62547U;
    msg.status = 72U;
    msg.range = 0.8653360919227672;
    msg.info.assign("RMVOYIHNDUNOINCSRQALHKZRQJWDPYSFXZDAIKGTDAJFIIMYPNBZXQZLAXFSFXJREEMBGD");

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
    msg.setTimeStamp(0.7390483220409261);
    msg.setSource(18408U);
    msg.setSourceEntity(134U);
    msg.setDestination(59420U);
    msg.setDestinationEntity(235U);
    msg.req_id = 57358U;
    msg.status = 208U;
    msg.range = 0.38841571812513365;
    msg.info.assign("MRUKIFTPCNEKQDGOZUNQEDJATMZFGOBDYKRBCUJZSOACGRMFXAFBVXZXDBKZPZDBPWKOLIIJBYGJTTAKYQDHWVSARYPKIQNSCMOLUUOFCNVLHOSWBRZYNNUWQANAPEORSGEYTVPKMDMKWEHAZDILFAMAQNIENJSBFVVZJWXHJNHRSGXFHXQBLSPPCLXGXQJVGJULGOMJYHBRCIUPOWWVTMXSHCHFLGLEFRCTDEWLXMIYTUQHCDSP");

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
    msg.setTimeStamp(0.6097556522917094);
    msg.setSource(7480U);
    msg.setSourceEntity(166U);
    msg.setDestination(15448U);
    msg.setDestinationEntity(251U);
    msg.req_id = 57434U;
    msg.status = 64U;
    msg.range = 0.9346327978628802;
    msg.info.assign("HBZDHOLFCFFRIUGOWMRQHNEENHEJCIXVAOZTXWMBSJSQVETZRDHXJKKDZKGDZUISRJASYBMHUVFNYRCSNXPRALCWPWMAVRUGKLOJFVAEGUSZTYKIISDLQFXBTLSBBPBPTOJJFYRSFTLTIBYKGOUVXGAONXCACGIQVGEXXVUYCY");

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
    msg.setTimeStamp(0.15236500941428055);
    msg.setSource(5264U);
    msg.setSourceEntity(81U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(202U);
    msg.req_id = 37149U;
    msg.destination.assign("RUFXMBLYEZUEPPPGMIEYQJNKZLGRXAHNZKWACJUIEQSAIDYHAIYFOWKCOINPLCSAFTTAKVGVVHRHZKYSNCBSOWERQCTMLGFDUNMOLNVUJTRCTEDXKOBDXHSMTZOVRFOTFEBQQXDHKYJEVWPOUKSWKXWIFITWVPYMLDDVGRZTQZCUHWOPWDCCPVFFHLANREMRHUJJPYXRGLGQZUMGNWUBVDXEIMGCISYGSXYXOTJBZAJABLQ");
    msg.timeout = 0.2853152875185093;
    msg.sms_text.assign("QMAYHMJTQSTLWTFHRVRXILCWMOVTIOCBGZMBZLSEBC");

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
    msg.setTimeStamp(0.49011797153415937);
    msg.setSource(44558U);
    msg.setSourceEntity(174U);
    msg.setDestination(14749U);
    msg.setDestinationEntity(59U);
    msg.req_id = 48589U;
    msg.destination.assign("FGDRLWAZUDOQKYRLXTCGELIZNNHFWCLJSBLKVMMPLZFVVHGZGGOKXYHDOCVYBDDYRFTGBABRBHISQOMWDIYWWPSEEUKNULYMERPMVEZKWDQFSQVAPKNXTJQLXPLAKXJCMDTGNHZNWTSFJFQIBRDASTBKTZVUOVBHGKUHAOHOFODEJNCMQRPUTR");
    msg.timeout = 0.9580397549729694;
    msg.sms_text.assign("HYNFEIBDFPMTIODRXKHJRNCEMFXGKMAHQECSODYLLPATNCVXCLYOLXBDDUNJHOJPVUAVJJKSQVZSWGMFCEMNOENBCZYHBPBBVSMTUIUJFDQRSGXXRRPAEWELOJGGGTFRZDPYDQZVCRZWVSRWKFVKPIEMZKWZ");

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
    msg.setTimeStamp(0.21519604952687577);
    msg.setSource(47869U);
    msg.setSourceEntity(162U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(150U);
    msg.req_id = 58082U;
    msg.destination.assign("MHSYAELPPJSEFJUDVKLTQLXBNHZWMHWUFEHFNCYAQSCICDWGOUDZXLCNEQMXXYVWXQOJWKWJNHOEIYNRACTXENTKKSFBLKVRFIPCXHMWRZDZMWSZUNFOXHBGDUQPSDHPVBOUBFRLJOCQHJJTIAYBIGIVGKSYKVZGOWZZDRORGAZSBNCQIPKMQSKLBCMBRVIDALGU");
    msg.timeout = 0.2685994484262375;
    msg.sms_text.assign("JEBXQVJNXFQXMUITQRTIVKWJCJRFPIUWEHDPVKVMAFRTSKXTFKABLZPJDHYGUTZDBQMWCOZCXYAOQJORSTVBPSWFNUOSGXJDMCAJJOAWCIARBINZC");

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
    msg.setTimeStamp(0.7392694410999916);
    msg.setSource(30498U);
    msg.setSourceEntity(43U);
    msg.setDestination(34120U);
    msg.setDestinationEntity(141U);
    msg.req_id = 20066U;
    msg.status = 58U;
    msg.info.assign("GTGSIYVVUDXTTTKQQFDLFJRSCXQXHKUZIXHDHKWBXDOKWUNTECCDFCHHREDYXLBAGHFYOVWIWYTXNZUGFAXGHNYFEJACZLRJUBBXNRMVKQZEBCJMCBNSQSABSJPZPZYVUTUHGRPCZVLTSCIQNKNNIYWUOBMMLKISYNDHOGQAOEYUZAPXPREGFFPRRCAYMILQSAVLJKWVESFBTEADJMJOUFRQMZBVWPRLMNDPTKIPLLZGAMKJVWMOE");

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
    msg.setTimeStamp(0.9480636174666716);
    msg.setSource(12042U);
    msg.setSourceEntity(237U);
    msg.setDestination(26246U);
    msg.setDestinationEntity(22U);
    msg.req_id = 56697U;
    msg.status = 236U;
    msg.info.assign("EUYZFBPCGHUTRXWCXCJPWWZLKADCIAMONDBZNDEGJUSKTCOXDLFFGOLJJLIUSQHAIWSZQEYVMHNBKIFPANEFGBRUMVWGKEB");

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
    msg.setTimeStamp(0.8009268860599219);
    msg.setSource(43300U);
    msg.setSourceEntity(47U);
    msg.setDestination(8760U);
    msg.setDestinationEntity(6U);
    msg.req_id = 30058U;
    msg.status = 124U;
    msg.info.assign("TSBIREJCVAHGDAHMDDUVRPFSONJFRIWNHOUCSPRBBMLEHMUTJWEUXIQKUZJDGWQWDLLOSGTGBXSZQLAURDVANFLYKWODQKQKZTZJOAPCLYGBXAZYIZXWLWCFPUPKHDETOE");

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
    IMC::VtolState msg;
    msg.setTimeStamp(0.9147990251113078);
    msg.setSource(8118U);
    msg.setSourceEntity(248U);
    msg.setDestination(10481U);
    msg.setDestinationEntity(52U);
    msg.state = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.33380120835184346);
    msg.setSource(29308U);
    msg.setSourceEntity(147U);
    msg.setDestination(30453U);
    msg.setDestinationEntity(41U);
    msg.state = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.43281706222967864);
    msg.setSource(30417U);
    msg.setSourceEntity(192U);
    msg.setDestination(9176U);
    msg.setDestinationEntity(61U);
    msg.state = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.1912490218053322);
    msg.setSource(21984U);
    msg.setSourceEntity(176U);
    msg.setDestination(3639U);
    msg.setDestinationEntity(186U);
    msg.state = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.4526735058772611);
    msg.setSource(39358U);
    msg.setSourceEntity(197U);
    msg.setDestination(40252U);
    msg.setDestinationEntity(10U);
    msg.state = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.13445977263768383);
    msg.setSource(39361U);
    msg.setSourceEntity(180U);
    msg.setDestination(48355U);
    msg.setDestinationEntity(247U);
    msg.state = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.5076092481895562);
    msg.setSource(57851U);
    msg.setSourceEntity(28U);
    msg.setDestination(37354U);
    msg.setDestinationEntity(198U);
    msg.req_id = 25407U;
    msg.destination.assign("PNVBLOLYPSWKBHUXLNAICAQSUHAFZXKJWIPSZYVOQEVVUMLORZQEMCCITCTXGNXEVVMOPUEDDKKPKMCFMLMNZOTXGFACIZPTHWGNAREXDGSYERRFBQEIMWSXGYWZDHHJYRFJJGDKCPEWHG");
    msg.timeout = 0.7647003155477782;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 172U;
    tmp_msg_0.mode.assign("STCMCMFOLUIIJSBOLVRQKXAYAYMHFPNUXFYXLKUSZDHBWWRYKDAZGPCJMUKBJKBCPQMAJZONUSEFWPJTHTVWYVLGMOQGRYTRZAXGVWIRALYXQCXPNRNVDCEGAIBHK");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.029077502892946083);
    msg.setSource(47367U);
    msg.setSourceEntity(236U);
    msg.setDestination(60162U);
    msg.setDestinationEntity(29U);
    msg.req_id = 22878U;
    msg.destination.assign("UHVOIONFULPQIMHZRENFYYQNTSFFJBILG");
    msg.timeout = 0.805392365986439;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 38415U;
    tmp_msg_0.rpm = 0.11798495730736269;
    tmp_msg_0.direction = 47U;
    tmp_msg_0.custom.assign("IRDQHKWRPGSFVRKPXBFBFUOTXOVLSYCAYXCZVHVMIWWYKNWOKEQNUZDFUZCMOEIIQXJRAVTVAXTJDYNZZRGUHTNWJURHQPJYIWGNEPUMBHCBPSKIBAAVBEBSTVG");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.7142496153158724);
    msg.setSource(48591U);
    msg.setSourceEntity(5U);
    msg.setDestination(28105U);
    msg.setDestinationEntity(222U);
    msg.req_id = 13367U;
    msg.destination.assign("AJSGUOBVRBKYVIMVHTQZJEQNOZAOVGRDEITYVQAUZWYPFJILALKCSSXAPWT");
    msg.timeout = 0.8979181461179384;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 2394011906U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.41404608185735525);
    msg.setSource(20020U);
    msg.setSourceEntity(157U);
    msg.setDestination(35760U);
    msg.setDestinationEntity(187U);
    msg.req_id = 23778U;
    msg.status = 246U;
    msg.info.assign("SCTZUTCINSDODBYPUTPXIJUAKAVOHEGHUMDYMDQELAGGYBIXKKMQCSFVNOWQBTMGGBKMBFVHJCMIUKIREAGSREJXNPQLOURHKQFJZCPHPSTIWLRCQVTCLYVXRKOSHKIOTEPIJDRGMLVVOBYJZABZFWDXANNYLFKTUPDSGJWETPYNUHDFHZLQXQUEMFWBWRY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.8234011092703252);
    msg.setSource(19663U);
    msg.setSourceEntity(191U);
    msg.setDestination(28353U);
    msg.setDestinationEntity(137U);
    msg.req_id = 18782U;
    msg.status = 166U;
    msg.info.assign("VPLZCQKXLJWHXQEYFDMMKVLBTYPWIYOPSVJRSJVMYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.5050962363806764);
    msg.setSource(48823U);
    msg.setSourceEntity(65U);
    msg.setDestination(39085U);
    msg.setDestinationEntity(218U);
    msg.req_id = 48568U;
    msg.status = 163U;
    msg.info.assign("NQHQMQSPTFNQHPERPHAFFUYMVFAUCMCUVLDIZVRUOGODHTXKSNGRBUTCDDHMHNRZBJXOCXPNGMFZJCWJFYYEBLRUVPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.7225975960732031);
    msg.setSource(14906U);
    msg.setSourceEntity(116U);
    msg.setDestination(32832U);
    msg.setDestinationEntity(129U);
    msg.name.assign("MPZGTZUHRIMSRXOQVBANZAWOMQCLHHVDCOICJWBMYSENJTQVJRTLDJYGYBKJCKVIPHJFJABSOTFBFWRGULGEAOZQEUBU");
    msg.report_time = 0.519916814179685;
    msg.medium = 36U;
    msg.lat = 0.18308120850497922;
    msg.lon = 0.03966618113128828;
    msg.depth = 0.9162057870654781;
    msg.alt = 0.1864918873489685;
    msg.sog = 0.18340292910561307;
    msg.cog = 0.3073648769385179;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.7925269704823851;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.03675123593022678);
    msg.setSource(30313U);
    msg.setSourceEntity(129U);
    msg.setDestination(25138U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ISVBPJNJXQUULDZQIKHJYINXCGRDTHDHCXADTYAVVIPOLHNCQDVXAEJZVJEPCJHPCAKSUSXZNVNABGFKJAMWOUIMGWIUIJTHBKBHZUWYYBGFPWYNRQPUCSPTBAGULGIGTWXLCGPDWFQRWEEMFYVVESERVSOSYQLQQEAZFFYYOTFZCSKHANKRGOJGMPFMZZKMSFXAWBXKDXRMNRMTUOOYLMTFIRRHOLRJZQVWZBWOLDNCKCDLBLEQHK");
    msg.report_time = 0.5634260054342713;
    msg.medium = 164U;
    msg.lat = 0.05468547932888668;
    msg.lon = 0.22684314110420467;
    msg.depth = 0.9383886932962047;
    msg.alt = 0.7194495441240235;
    msg.sog = 0.3629563213949586;
    msg.cog = 0.43856011378139714;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9246687114387855;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.458611885346463);
    msg.setSource(25475U);
    msg.setSourceEntity(53U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(78U);
    msg.name.assign("SZAZCPAVKURSRGFKTBUDCPOJYFXNJTFUYOEJHQKWAANHGQSGTZATWTOTPQMRSZWUIF");
    msg.report_time = 0.4666561544682124;
    msg.medium = 216U;
    msg.lat = 0.11672728190880921;
    msg.lon = 0.2722414874168765;
    msg.depth = 0.33399040865848173;
    msg.alt = 0.06870997471091389;
    msg.sog = 0.6225630562099055;
    msg.cog = 0.8168870665999225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9787507274722926);
    msg.setSource(34570U);
    msg.setSourceEntity(147U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.7967052710468593);
    msg.setSource(5587U);
    msg.setSourceEntity(82U);
    msg.setDestination(49716U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.29493130123582545);
    msg.setSource(63769U);
    msg.setSourceEntity(140U);
    msg.setDestination(46942U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.5282963784414594);
    msg.setSource(26664U);
    msg.setSourceEntity(8U);
    msg.setDestination(38288U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("MCZGWVJRTJPTIKFNHQHXUNFUAODPQDQSOKNIQELHPJGDSPXALUWBXEVDWSUXKGURRTAUL");
    msg.description.assign("CJVAJLIKJXQGHUPXBOJVGQPMHYXDDPAUSRZJRYIQLLDMLETYFYILBKIIUFJIYNLDHDCFDTMPBOQQZQGGMQNEECNXOJSWKIANKBSGLHRZCAFAXTAPFATHLTVRZZAZSDWOBGMOFUJVLCVJJPGNTUSPNQKTBCMPIOWEBHFZ");
    msg.vnamespace.assign("ORTDWKUFCWQFVFBPKSYLQLDRPHPHEBJHEYMPMCYARVFBISOBXCVWEMUKWZPJGWMWZXHXSVKSRFCSH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FCPIEMRXIXBQGGTYCLWYICVQWCAFCQDOOZYMLCCUFQNKEVOMPSUUAIAXDQNNZJDHKKALBTNQEXDKILXRHHYXMWGMEACJHGEFNRPZHPWOEUVGWSLMLSPJVCUZVBFARNDJBKFQSABFQHOKEIWOOWVHHSYKPASMPPHOTNUNNXFRTEASLZQBDFJNBDTGIXSWZURFZXITGJYJBVZBRHRSZMLMZYVIKGPUGST");
    tmp_msg_0.value.assign("DCFPTSUKAXBFOIHYZZMAWKZZEBGBPBHRHTFURBJQPXUUVLYRCVXNJJVENQOQKRLDAJIOICABRHXRJFLBNTFPVTRICVEHPXQITRIOYAMEDHVIZSJWWOY");
    tmp_msg_0.type = 186U;
    tmp_msg_0.access = 135U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LWTJKLHFMISVRBAFJEGEWVXBIOFHSAICPXNKQTDANDHKXQOKOVIVNZYFNHTAHBKLIBWDRPPUXAVKGEIMOIXCMSCLEGHRWMLJKPBFCLTTGETGBUYUJYUNXBZFNJKJOMOFZLZQNZYIGKAURSCGWRNFIE");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("EJUVAKLNIIHQIFEMTIZXKKAWVMAZORVJEBJYWNQRYQUDELODSLPCBLHONZDWPXAOXPDPUZZKIXJHOLAFFJCWCBSCKMTKUOVTGSLSBXRBBK");
    IMC::Dislodge tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 3005U;
    tmp_tmp_msg_1_0.rpm = 0.6319045095870759;
    tmp_tmp_msg_1_0.direction = 201U;
    tmp_tmp_msg_1_0.custom.assign("CSASQLRFTBDFZAZJZTEFLIOQHMOBSRNIGKKEIINJSYYEMMMVQEAUXAKDCJJNQPHRZETUWHGVDGHHL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EulerAngles tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.time = 0.08282264780464321;
    tmp_tmp_msg_1_1.phi = 0.6897945192524838;
    tmp_tmp_msg_1_1.theta = 0.6686622776148515;
    tmp_tmp_msg_1_1.psi = 0.08274295115370534;
    tmp_tmp_msg_1_1.psi_magnetic = 0.341687618603536;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::AcousticSystems tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.list.assign("ADQOXSWZFNLWHSFFLTVJNSGZLEIPLOLPIRXKEBMFBGXEDWABEEUYAPVDEMHFJHFKIXASNOYMNBBIKAYKNLKROGPUKVWOADGHYGWNPTZUYCIQTOTGRTHCCXURLAQVWCDWCCCIRIGKMPDOZEFXESTAYMKBXVJVIHINUZPDUOHUQQFYMYGZUIQBBMNTQSVTJMPX");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QPHHVLWKCOTJVAPEHFPVXDJUUXERMYUQABVKJZSGLHTSLAPBZFGNTQYPHXMPRFDATTGOAGERUTEMDYJRWRRMDFZIKZLCDYWDICHCEMODXSKWAJMFQBQYTS");
    tmp_msg_2.dest_man.assign("EBUVWEQCCIMIVSGARHNHWVBRFFGUXPEZWDVDEIQKTOULDAREMLMENQBJMSBHCIUHVKHBEUJDZGDYQTVTMVWNJYDZPFFHPXWSDORAAJRBWPRQCOMGOZAXFYKYPSKEACOCRGRAGIJYJQNLHKNKDYXYJPLOPTWVLGABFKPXEYXGUSHKLJLGMPUTTAOSNSIUIKRFMFRWVBHMVWLZINTZZPNZLCFOXCJCHSXOSBTQAFCSM");
    tmp_msg_2.conditions.assign("RENRKFWWPZEMBLSKGDBYFWSNCALQEYFEEGELODPJVMXCNMHKUJQJIZNNXZKOSYXVAHJRTTWZBCHSFMGVHOGGVOZMNOTUFDEOZFSLUABEARQCVCWYFGTLHIJAUASPSTUMIIMTPWWURO");
    IMC::AnnounceService tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.service.assign("SFTSFBGQSGDPCZLOJNASWNXYSTTAEUMQAWEUPUHPPYRUZEHTYHMXOCVJOCLPYDIESAPWJUIMIVGNZXKODKCVKQNMQFBCIQLBKBMSEYTCLTRIRYOZULWQDKGUCMVBQDIIIMVUNUEKRWXTLRWCLVBOFBIDUYRZKVFGQGXYELKEPRRDAPZGCDYGFXWHBXATOLJXWOSOZRBFHHOZFNEVNTBSEAWMSKZNGTQJPGFXDJKJID");
    tmp_tmp_msg_2_0.service_type = 38U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.9887078518067652);
    msg.setSource(7273U);
    msg.setSourceEntity(137U);
    msg.setDestination(57185U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("XPRBTIUMPGKCEWYUWESKNLTAIGOYOGWQLACIOYVCTDFQVUZVNKGUODFCQEQBHLJJCRIPATZAXPXXJXXJSBEULSZHYTMGQRMSGTNVFHGD");
    msg.description.assign("OENJRQMULHRNZXMDPSRBGFHFAORXDPZMYJUCIGGQIXBVJYAESFDVYOAXMRAUFQLUPIUPUZNPKQTTYYUCYCPQBQMTXTWVYKFAPRHVJFNSNUYWZNWOKXIQTBFDXVEBQCBTIDFNVEOWLHWKLOIWEGGQVGIELOJWSEMTJWTHYVMGSKU");
    msg.vnamespace.assign("NMZIUJHSPFMQKWZDSAHMKXKEUEUULZMHOSRWVMAXHWFDLPFYVZJTGXSLXWEJAYBZPFICBXYKJQJRGTBAMDINMTUAXCPCUKEQXTHFLSJTTEICCCRITOYBGWWWZVXGEVNNOVWFDKJWEQQOHIMRQJDDNPGCHXLLBBZAAFDVYYHLMENSPYKLSPPOKANZUINKVWVBYJCKPBOUGHIETRDQNCRUSHLJS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GIVMMDXKDNWFVZFJGPCBLKFIHOXKJPDVJONHVBECZWIXBQOEQDRXKTNSEUGQYCLDSMPMMWJKBCIXKXHEACRPDCF");
    tmp_msg_0.value.assign("HVGSHEBLVVQIEURXWHFIOMWCMRGLQDNYLOAHQLNUCXYEYJDRNDNXPVCMXHNFTAKPSXFWTAFNUEYBVUMMVRLOEEDOBGYFVGQJXKUKZVKRCAIPKSWMJWEHMXVRNTGSQIEZLPPWDNSOWGMYRASYGONOICJNIOBUQOHHZJLSECHIPSQKWZJXYBFALJTFMTZUTFCIGMAZIBGCYKSZPDCKKTTQDUUDE");
    tmp_msg_0.type = 84U;
    tmp_msg_0.access = 218U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IKZFGFDOWWYKVASNCAMKVSKYRLDLXHUPLNDXQCZFJZPNOJQPSTZFWZXCVESZBYUZUWMXJXMNADLRBHGGQUECXAIPRURQYFQCXGTJDTQRZERGFIGLHBGYAWNIDHSKIRNZOLFOFTEOELNCE");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PPZBZUUSFFWWRRRMVRLOFNJJUVUELESKFFJXLQIDADOTZWLWSQLVBTCLWQVALWFKNSCSMVVHNXP");
    IMC::RowsCoverage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0467408969778238;
    tmp_tmp_msg_1_0.lon = 0.7663457402189229;
    tmp_tmp_msg_1_0.z = 0.8056046693104701;
    tmp_tmp_msg_1_0.z_units = 131U;
    tmp_tmp_msg_1_0.speed = 0.6858651975208097;
    tmp_tmp_msg_1_0.speed_units = 176U;
    tmp_tmp_msg_1_0.bearing = 0.5148219617648794;
    tmp_tmp_msg_1_0.cross_angle = 0.4297191707318665;
    tmp_tmp_msg_1_0.width = 0.4477971078726888;
    tmp_tmp_msg_1_0.length = 0.7820645844034978;
    tmp_tmp_msg_1_0.coff = 40U;
    tmp_tmp_msg_1_0.angaperture = 0.3786905168925149;
    tmp_tmp_msg_1_0.range = 18791U;
    tmp_tmp_msg_1_0.overlap = 167U;
    tmp_tmp_msg_1_0.flags = 96U;
    tmp_tmp_msg_1_0.custom.assign("UBEDBVMWIMJCPJIGBDJTMXHQRKWYPHGHPGVEVGIRHZLKVOLINPZXKCNDDTOTYFZKWVWGQZUMJSLHYKNNNQKUBVAFJXCFTRSFUOQKCTPVTNLFZFOSOFFLJTLQPZRJREGDNEJALEIZBQOXDSCRWAICLHMLUBOYXAMCUEGIRRDBUGWZHERIECSOXBHVSZSWQHSIBSHUQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SmsRx tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.source.assign("CDJOXJQRRGBJNEDIVHJITKENTGADCUXPMLVQIPKHNNBTDZSXDHVBMURZBKUCPIDRJVXBUFLWCSVPIORWFFRDNTYWKWLYGLGWZFHAUSARTEVECEVMMXPPMDQXIYHLVYJWAWASOPFMXAZCXIZZGMEKVYRBQOMIAYAKFQSXDZCOURTKBEGWJWYTZNPFQLLBETXQYKYJIHBPHTGCZCMRNVM");
    const signed char tmp_tmp_tmp_msg_1_1_0[] = {31, 7, -52, -95, 44, 125, -22, 9, -64, -49, 74, -100, 45, 57, -126, 113, -116, 82, 17, 16, 5, -8, -85, 92, -83, -39, -21, -87, -5, 80, -117, 45, -120, 19, 82, -26, 108, 104, 38, -100, -99, 37, -69, -128, 83, -113, 36, -127, -9, -43, 0, -41, -44, 87, -127, -111, 99, -39, -69, 84, 117, -127, 126, -109, 16, -53, -77, -86, -22, -7, 118, -28, 44, 54, 105, 89, -18, 61, 68, 18, -85, -54, 70, -61, 104, 38, -59, 55, 88, -58, 121, 72, 70, 6, 14, 108, 107, 67, 88, -113, 18, 100, 55, 7, 21, 54, 37, -19, 90, 89, 119, -101, -110, -108, -19, -46, -82, 114, 41, -78, 79, 9, -127, -57, 100, -41, -13, 59, -38, 13, 121, -47, -39, -69, -84, 16, -53, -88, -73, -80, 124, -19, 86, -40, 107, -90, -64, 49, 62, 14, 19, 62, -17, -37, -32, 44, 64, 45, 66, -14, 6, -104, -127, -8, -118, 112, -106, -11, 36, -76, 56, -85, -45, -23, -117, 16, -106, 83, -3, -33, -40, 13, -47, -66, -96, -68, -2, 51, 101, -52, -111, -76, 86, -52, 115, -63, -22, -113, 81, -112, -81, 47, -95, 119, -81, -110, 31, -66, 10, 44, -2, 95, -81, 41, 23, -73, -9, 56, -106, 66, -119, -35, 7, -114, -127, 59, -112, 98, -116, -19, 122, 79, 53, -117, -105, 47, 112, 81, 61, -69, -1, -114, 6, 92, -103, -34, 29, 8, -61, -120, -23};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7164290753719296);
    msg.setSource(17128U);
    msg.setSourceEntity(94U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("RECAMNJTBMEUAYLIPFWTGNCOPEGWEQOBNXNIKYAVLH");
    msg.description.assign("DGJMTXBGNSYUEGWBTOWYCYUFSHWIBIKOBECYDTIYDTWKWSXJPRKPMLXDJOVZTLFPWVUCCEXASOABAWNNVWEDTFLRCAVDEKZCMUDYMYFPQJHKDUMLZNPHQIQAHLSQTYVGRXRFUJLCKRKVIHNUPBNXGORHIHG");
    msg.vnamespace.assign("PVMKXLQAKODUFXZOIYAZFJEMHNEAJOFMQOTZVDGVKDTSAXAQIVODSPFWGZFXCJWETFQNFRGSCLUHRUYKXSFXQBNCGECAMUMMJJUVRHZHCMOQBDLZLWDLKIRTKVYULDVBFPOJMDIOPSZTWWGSPEVYNSSBQEHHKNHIOZPINNXWMERNTBRQBWNVAM");
    msg.start_man_id.assign("CXSNUKNGAEZEFRPIJREMUEBGTNIOPRZSZGOGGQQCHXLZMVWRWVNVPEJGHVDTNHYEJUWFCQQYFSTFLLBSGDJACAUMMZTUCJJPLIKAMXYYJHFSYKSPRXYSQKWLGAVXTAZBNAIPRQFDUWOKDMUBJCJPKTCZYLQ");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.907224170692551;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.19411515958942493);
    msg.setSource(52600U);
    msg.setSourceEntity(134U);
    msg.setDestination(37508U);
    msg.setDestinationEntity(126U);
    msg.maneuver_id.assign("NGDZCYKVANAYOZNRBGADLNYMMTSJSCJMOIORFADBPJNBTHXYDSIZAVWVSWKRXGUFUSDVJXRXEANQEUCMRPXEEYEQCXIPFLSOBCGSGCDBXSZZJLLZQHDYHCBHXOPPNPIBYDBELXTEIRWWWNIK");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.6625220554808837;
    tmp_msg_0.lon = 0.4013365486110083;
    tmp_msg_0.z = 0.9823848957392189;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.radius = 0.9099718575675763;
    tmp_msg_0.duration = 52116U;
    tmp_msg_0.speed = 0.9839091442047435;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.popup_period = 49112U;
    tmp_msg_0.popup_duration = 35488U;
    tmp_msg_0.flags = 209U;
    tmp_msg_0.custom.assign("CVFHIBSGUMPGSYELZNXENYSKIGEUKDLZLQHRUBQCJTOHQSMRFDCZPJMMBHOUREHSCTQNIZDBFRAJFGUWITCIAWPOTJXLTVDDDYHLNMPTYKXGAERVNCJQOTPRHINKUVQYVFQCXAAPJVBLWMDLFQBLSXEBOWNLAOVXROMWUUAEHSBOKSLRZKRMEKYHFOTEXBPIZPFZJYDQAW");
    msg.data.set(tmp_msg_0);
    IMC::UsblPositionExtended tmp_msg_1;
    tmp_msg_1.target.assign("YSHPLJMDCBFRKYZMYPXRQAEOTWFKONRLEJGYXOTLGVXKGSGPEMTSLTEOXNBCIRRIAZMQAKPQYXPEHPSHMBBIPJSWADFUELZTCJXBWNVMAFRCRIIVQNSCBRBJDLMWGFNGXVVHTWCOTHNPHDIKUXITJNMYHUYIBRTCLUXCWDOQBWGFAWSSQVFZOWKGJFOUFXEVDWJUSODJUCZSYUFDZQQVMVAMRPLKNZYLUKDKJOUTQLZGZDEAHHNPEBHI");
    tmp_msg_1.x = 0.8993929476930913;
    tmp_msg_1.y = 0.5707635211907707;
    tmp_msg_1.z = 0.04052453191530214;
    tmp_msg_1.n = 0.34171950280061525;
    tmp_msg_1.e = 0.915221671651204;
    tmp_msg_1.d = 0.32263246075766217;
    tmp_msg_1.phi = 0.5749954846077799;
    tmp_msg_1.theta = 0.29720981442245165;
    tmp_msg_1.psi = 0.37851275506416104;
    tmp_msg_1.accuracy = 0.4276172414703556;
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
    msg.setTimeStamp(0.32974200013649846);
    msg.setSource(2781U);
    msg.setSourceEntity(155U);
    msg.setDestination(51158U);
    msg.setDestinationEntity(50U);
    msg.maneuver_id.assign("TAEVENKPSDOUBHLSHKTEX");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.18117747489866176;
    tmp_msg_0.lon = 0.4536854230517541;
    tmp_msg_0.z = 0.9580984247711727;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.speed = 0.8105442426952506;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.custom.assign("TVXIGMCUMMBNWKHUROVPTARLHPBGEOXRUXPDYCOLYXDNTQACZKBQBCQTBRGFJFQVNKBOMARFFARIRAEQJPEOJYUWHHGRFXYQNFVWVWLSZZIBIEQPKPZFOZUTNLSFUCCWXTPSVMKHTGNIIQLLEQMJCNBMPSPHCOEDZJDMGWWOMSHLICYRHKKFTTDHSDSXNJALHUJISEYGDLIYVVKXGAQDDZJVYOGNEIZYJ");
    msg.data.set(tmp_msg_0);
    IMC::VtolState tmp_msg_1;
    tmp_msg_1.state = 249U;
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
    msg.setTimeStamp(0.14269401176184993);
    msg.setSource(41355U);
    msg.setSourceEntity(164U);
    msg.setDestination(10871U);
    msg.setDestinationEntity(209U);
    msg.maneuver_id.assign("IPPIGUNYEBWVSJSCJCHCMXOYWHDSZOFPXKPFIGXXTUWSKAGIEZDMGYTEXTHRNJKKNMSDTRZEKMQCJOFCQWSNMETHQEOBDLECHYBCKTQJOOTYMNBCUMJUIBKSGJQZVKYXEGVULNLVJZWGHFLVMPOHAWNAALMAJQFDEBWDRUKZLVOZVHUZYFRNXEHGLHFAFRAFOWWLQXBSDUXVNGRVMUILXSYTDPPOTRAPDIAKPTLWFIRQ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3779223081093849;
    tmp_tmp_msg_0_0.speed_units = 152U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 44383U;
    tmp_msg_0.custom.assign("VMTTSADRBYALRZNRFLTWUHFGCJVVVZRWPRKEPOTYYGWVZAIGMAOZUUBRLWYPXKEUMFGMHJHIKCOUVHWNEPSQISHQVKCWXAOTKGMNUTTGAIFSJAZVAYDNWEIFJLEKFIHQXGBJCXNMSZKEPSOPQFXHLGACXDZTFGQLQWVDSSZLJOXAXNHMQONRFIIBRERPBLHVNSLOEOZCDFDUCZPJGJJKXEPDYMHBOIKCDUXPDUNKCBLTBRCQQYYWMWT");
    msg.data.set(tmp_msg_0);
    IMC::RemoteCommand tmp_msg_1;
    tmp_msg_1.original_source = 48705U;
    tmp_msg_1.destination = 15143U;
    tmp_msg_1.timeout = 0.2083104922459702;
    IMC::CcuEvent tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 34U;
    tmp_tmp_msg_1_0.id.assign("ESWBIIOXLYCEAAWEDSGXOBKJIHEVSIKZYREDHGZUOFXZCQARKPARNEOWRYNHAHBJMCVXWCDHTDUUYPMGVDQNLCKUBWCUXSPZAKVQBTPSNAYPQHNBVESRTAMHIVILGPFXXGFYRZ");
    IMC::IdleManeuver tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.duration = 7844U;
    tmp_tmp_tmp_msg_1_0_0.custom.assign("SVICEGPVMGYWSORGNVMTVKLMYGLCOEYMSAOECDUZMBMARKFPLXEKXKWTKXHLNIOFULRTQLEJUUKRJRNATZYFAXQKHAMGAHTEFUIUWVOSPHRSOPLBHOSGVNUWRCVKQUIIHJECWHZQZJBGNTMWIITYFYXUOEFDBISSQJ");
    tmp_tmp_msg_1_0.arg.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.cmd.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleLinks tmp_msg_2;
    tmp_msg_2.localname.assign("AWHIISRTDUEEPTZQWAKSXSCHEAUYFGIVULYTYFTVBTKYLUNEMMCYPJVMVGUWQSSMBXUZKVPZYCNYBTPKMEEKOSEPDFXUFJXODEIHLRTFBYAVGGAHDDZBWXZOAAFJPYHZJNECQFRPLZQJHBWLGGKWNWQWRKTFCMNHXXDBOUASWRICKYMJTONUPQHZSCGISCJQSVDRFPVHLIXRGMIDBBRVRFMGALXWLMINDKODTCQVZNX");
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
    msg.setTimeStamp(0.9925191730753596);
    msg.setSource(1419U);
    msg.setSourceEntity(157U);
    msg.setDestination(33245U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("ACMSISFSYUVAYWJHGGLCRYNBDVXKIXMZWWRERNNZICYUIGKBOHGOXFRJKOSFXQLXUYDVPNNMGKTIITLFPVHUASPDQHOCIYEAFCUTEFGWAJEUPVYFRTMAJAZKMTQVTRWVXEFFVZNLHIZQPQJLBVWOMLDSXDUJZXQIOBPNLOC");
    msg.dest_man.assign("HCBIFIBTSEYBTXQMIGFOLKOKDOUNAJMFXXWCWAEHPOGIIGFQHDOBLRDEHXTNZLOQHCQPJQWDVXEHCIZIGPSJUJZVCTYPAYFFNKXINHWLAAMGJNAGGZBNHDXTATVZMZUMXBKYWKTIVGLUEMBJRRXUSWSVUQNPQZSYPUJAKCHZTBMJWYHFRVBNTFVMFK");
    msg.conditions.assign("JJZHSSECAMKNJVUQGEZPWCLAFNZPODEVFDRPMBHBRTLCXYDUKOXTNGKTQGMLEOJGBVCYNGNIQXBLJWSVPHETNCAWKSUXQEXINLSOWLIDXZCVCKYPRUWMRTQJDBWMUQSSOBNKIXKUAYUHDAYMPDFHBLWMMDPVWVRLUBTFHRRBFTISJVVZGZJYKHRCQONIZ");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.7358303052707165;
    tmp_msg_0.time_next_service = 0.44624015229562797;
    tmp_msg_0.time_motor_next_service = 0.41576167059196656;
    tmp_msg_0.time_idle_ground = 0.9238420559854197;
    tmp_msg_0.time_idle_air = 0.6421236922961484;
    tmp_msg_0.time_idle_water = 0.5572069514217948;
    tmp_msg_0.time_idle_underwater = 0.4356088023440289;
    tmp_msg_0.time_idle_unknown = 0.730068207526654;
    tmp_msg_0.time_motor_ground = 0.0675248682492644;
    tmp_msg_0.time_motor_air = 0.3737942098965874;
    tmp_msg_0.time_motor_water = 0.2398009309136233;
    tmp_msg_0.time_motor_underwater = 0.8950983377413156;
    tmp_msg_0.time_motor_unknown = 0.2183766476738941;
    tmp_msg_0.rpm_min = 18783;
    tmp_msg_0.rpm_max = -22157;
    tmp_msg_0.depth_max = 0.8240115399507149;
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
    msg.setTimeStamp(0.4576331597027521);
    msg.setSource(63493U);
    msg.setSourceEntity(184U);
    msg.setDestination(34895U);
    msg.setDestinationEntity(59U);
    msg.source_man.assign("WDSRVPDGSNYPUPWQKGIAGBIUYOSLFJAXTYNLOYVLHHJACKNOSELUNEWTXTZBSKZUHQXQCZGNTOCXAFWOTKPOYGYLFZWEZSQGMAYGECEWHCXNQKW");
    msg.dest_man.assign("IELIUROASZTPRBJKIZPOTVIORWKWKDDXNTJHMCWTXTYIFFHSRULJDNCLXCYUCPNMFAQVABSFYUSPTJOWJDJXRRRDIQIOWLEDQASYOSGTOZJEEQTQZUWZVGGLGMBZNPAFVNCFPPCADGQUTCWYBKXQMSGOAXBKLLZPHYDIYESOOJSCZXFMHHABEDKVJGMXMLKX");
    msg.conditions.assign("GUFYGLTRKHPCXAEUHUURHDZOFPYSITYZUASYWMDKXENGNEPGGDBALQOCNGECQPUKDLVZDEONRABZMPMPJCPIPVTUVKYQGLRWMJICJRBTSSISG");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.45497005390295986;
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
    msg.setTimeStamp(0.2726473906346586);
    msg.setSource(50063U);
    msg.setSourceEntity(204U);
    msg.setDestination(13993U);
    msg.setDestinationEntity(6U);
    msg.source_man.assign("SCKTWIDICYJGKTKOUKKMVPLJWTU");
    msg.dest_man.assign("XWTICUOIHJOZOTVQREVLNZXEDJMXERUYUVTUBLVECHPBAVFCQRPPQBMOMUBAHXWLVLQIESGUOYDKVTYEYBTWZGFCSFMGOAZPNKUCWGXRSSKNKHVOKAPLNWZ");
    msg.conditions.assign("UTAUHTHUOQPRXOVEAAIHPUZMFYKXIKUZHZSIFH");

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
    msg.setTimeStamp(0.7381759837146399);
    msg.setSource(29188U);
    msg.setSourceEntity(46U);
    msg.setDestination(58646U);
    msg.setDestinationEntity(92U);
    msg.command = 183U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YZPJBGEERSKVEOIVBJHULSWMLJNSMZJXIFNGVPUZJQBFWQQYATBOYMUUDRJGIUKZOYPCIOWPYPIATRWYXZCOSNGNEZFUMNCCPNXQXNAZAUOHNSTGKFKLOCQCDXMUBFYTKHLQKCXAEFZGAMLMAFXBLOWCRMTUHPSTHFBOMLNCHVYVVBDTJFDTNJLBIIWVEPEWXYGDKXGTLHRDWAIVKZQZR");
    tmp_msg_0.description.assign("PVWHNNROCPWVPVDESLVSRLYFGRXQWWJZHTXVPSTDSGNZFEIXHAKAECLRIBIVAIRWECGUKQEWZNUHGWLSXCVMJOAJTIHGCYXUAUXOURQBURBEBMCNSUTQPMQILVGGJKBXZZBWMVPDKXCSNRSFBIUPNLQQEMLFSFMDHDHPAWGNJOOHDZJYCLOMKKFKNTOZTDTQAEJFGAYPW");
    tmp_msg_0.vnamespace.assign("XJHSUGLKRZPVZQBSVCGKLLVFMEQJXKLUPYRXHNVVCOUNEBANFIPLUXAYRQPZJLHZFKTQDGO");
    tmp_msg_0.start_man_id.assign("LPZOYIRWWJNFHSKCXVOEYUETJZTKZNOYNFTQGNDYSMKCKMHVQRUKLUWFDNVLCAMRSNHWXPGTGBOYJPJQOVQOUQAKRACDAFUNIQKWSXCJBRGKGLHLFHWZVMDDMFQLSDCNLROXEFNQQPOZZIXXBMTEIUHOSIVGBGPXUPARBRTXGZBIDJCUEDYDBCGJJSYDBERZVMNHLHVQIYEWWMPMBZUICIWIKGPXYSJABLFRJZTAKAXTSMHYEFETVFCP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CJVWZURMSLERVGVIEGJQ");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 6287U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3305672504397166;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2537490091947546;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6762713298875899;
    tmp_tmp_tmp_msg_0_0_0.z_units = 21U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.43359996129141376;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 184U;
    tmp_tmp_tmp_msg_0_0_0.duration = 2712U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.0304679856257285;
    tmp_tmp_tmp_msg_0_0_0.flags = 18U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ASHULTGLJKGFENTOJLBXSVCXBGVCVMMBJGAKWZWZTFQTCNGCWXIWKPPOIWYUKHSFTVNRNHRCJMBVSQSWIEKZPICYNFYRBYKSODULHOBPMOFAHYCEKBEQTAFSKMRHCRDYHSTEBBOEGPNRYSMDWOGHLXJIDHQIJDCQRUTVLJXUXAVVVAXEJZPOAUOFYWUFDWLOKCAERNYGQZJMDIRIEXQEANTWZJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::GetOperationalLimits tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.562140945094731);
    msg.setSource(26398U);
    msg.setSourceEntity(65U);
    msg.setDestination(53791U);
    msg.setDestinationEntity(227U);
    msg.command = 62U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LFNLVGYJILAADAODCOFYYPQKRHKJEUEDFGGZDHGXKPTVRLTDYXDBHQXAGUKESHXEQOZZZUMIUXWIQPPJWHJTETMLLROGCRSNZQSJZEUDLWBWAPRBZWBWMZONCHKIHCPUGUQWJTFOMXSBDMYGJSMLHMDTARZXIQVOEUYXBARQENSBJNRZNQIDOTCVQSSGKMTRIMGHVKFXVEBVUKNCXVKTLMIPPSNWCAYWAAFIKCPTYUYE");
    tmp_msg_0.description.assign("ASWKOTAARDCSHHNPVGTZLNVNDDSXINOFZZEBTWNDKLCYCVJOHGZWUXKFJTSZJAUCGEXBGRTBSMBMMJXRQPXPLQHTEHLKOEVKIBSNCGUXUITIXWDCASSFNPPVIPODMZBEWPUQOEDCVPUMBYEZLHIGVYZXGOTJXIIUPYJDYKCJVVWYERGJHWRUQLHGOJRBQYFFOKFTQRNKNLHAWFQBFISMLFYYVT");
    tmp_msg_0.vnamespace.assign("FZCCEZTHSUGOLURBHFGHKTYVWZGDESMPPWLWFFSBYOLNQJPQHUAXAUYXVBRHAERUGCNIGUTTJVLAYMHZUUSWEYUNCXRMP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BVHWGWAVFGHIZOVLAKIFCIZYTZXEBIPBCFXUYCUJPDKVRXWLQMKSNOEJRZSQJOHTMORZYCJOHAUABQFEWCGUQXOMSLNDBGGYVSGPEEEFYI");
    tmp_tmp_msg_0_0.value.assign("XNIWYTFYXGHRWOHOSQKGHIGZDGDBKCDQJBTVSPRCKSMKUVSFZJIZICMECSPPJRRGRLMMYNHWLWHCVPEGNUZHKDYYEFVUOPOXRCEMUTJKLGUREECFMMIALVXXTBOGRPVXATOVQJNJSLIHWPGRLH");
    tmp_tmp_msg_0_0.type = 177U;
    tmp_tmp_msg_0_0.access = 105U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RUXZBUWJJHZABWRDMGHPSAMOBVXOPNTOFVXFKTMVMQOLGFBXAJBSCMBYCKCJZDFPQCXWQEEZLLBLZEPYWKEUQPOD");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BNILPQFTJGELWYONDDUTTAHOKVXEPJRZTWGYSDEGHWUQELLFRREN");
    tmp_tmp_msg_0_1.dest_man.assign("XWJSRMCKJKLLPXMAUEGETCUELQRJXPCFMUIWMLVDVCTPGGMJTQZHOREPFTZODAEEIAHYPGZUDZKQJKZUNBSNXBVIOXIPIYDRHRNXWOJTCNQXZVYBKMUMVARJXLTZHGTRCWQDYRWSIOCNBHYGNTSSWLHBEUJQFFYLFDOCFQNVGTWSGZPBLMRDITSJHYAEZAJGIGPDQAFDKOUSODANOK");
    tmp_tmp_msg_0_1.conditions.assign("WOCTFANTMOHAVGHTWXXTZIZMORNUQBQYIWGKWLKHFTQMPQKSNLJMNIPQLIEEYUSKGUYPBYFSDVPFDHDZGIRAUHXTDCJXCXYEFSPBIHYZMDAXEBNBPCLEOVNVIPYBMKJMSGQFAANFSWVVICWOHLBEDGSJBXWJPDJARHOKP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GetImageCoords tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.camid = 70U;
    tmp_tmp_msg_0_2.x = 53535U;
    tmp_tmp_msg_0_2.y = 24757U;
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
    msg.setTimeStamp(0.21525402000976046);
    msg.setSource(63945U);
    msg.setSourceEntity(104U);
    msg.setDestination(14045U);
    msg.setDestinationEntity(172U);
    msg.command = 50U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EBYZDZZVENQSKAFDPYHCJOSNRBDAUWWETWNDPIIJTIYFTLLYKPNSKIDCR");
    tmp_msg_0.description.assign("NGESUUVWUMQSBUKUGSYJNDXUNKQJXCASKUYXHHOMVIELEHIFVJVCRGBKYXYXFSBHARQLDUDIJVTWOMPBTQLGOHYENLFNDDSNZIBZFTDJEFQHMWPPPQURZEWPZXTKHFJJXGAAZQNKVSHRGCXMFIQALCELHZLOCRJPGRVXJLTLQATYOEPCDWSBROQZBSKVWZBKWIZYEIIBGKYOMCIMOVPAOWGGYFY");
    tmp_msg_0.vnamespace.assign("FMABJNLLXVBK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OTJGPCIWANHUSSQIBVJKRSJREYLCTGCTQPWRJCTGGHHEUTMQDXWSDDCSJTYOGHRZMOORPBOZFZKNTWHNYWSJKFFDDOVFXKVICMDGWROQVIGLAXEBSGRPEUXEZCJNAIBZOUFYYKIUYXEMAIFNVBSJMUTMKHLOBPIFK");
    tmp_tmp_msg_0_0.value.assign("MPBRKAWCOGXATIESXEHNNVHNOUKSVBMFLGPTCVGEXWLPRKWSXFSNWADVYIKPKWZYIQSZNPTEOAYALRZFXYYZUU");
    tmp_tmp_msg_0_0.type = 150U;
    tmp_tmp_msg_0_0.access = 128U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JHZUWDAXVUIBILMRLDZLPJDKQGSIQWDGCPPYSCFNBGUYIQKFOTVWC");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZKKSMFPRCYYPEFFTTCXSIVNDUDBZZYRPZPTRCKPRVXEWNQJQFHHBSBXWWPOUUBYIANZGAHYUVOIAKEGUCBJQMLESVGIGOAJ");
    tmp_tmp_msg_0_1.dest_man.assign("VSHOXXDREMMQZYIQKBONLPYUKCQCTOANWBSXVEPMDNWFMKWIXZPCGUBIITVZYOJAUXTXZJXWKLYUIKRFHNVFIORBOFWRSMFZGJKSLEJQDGDRUXARLWYMBHGBXNPTWFHPSLDHJDTZSUIUCGQIQMOSLJWDACAYRDGJAATVZQLFOJKBHHTSYNPDACPOVFDLGWTTFMNBYHCEJKETOCUPGEU");
    tmp_tmp_msg_0_1.conditions.assign("HOGRYYYXLLBWGN");
    IMC::Land tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.37027311515290373;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.40847316360059494;
    tmp_tmp_tmp_msg_0_1_0.z = 0.20591822575608587;
    tmp_tmp_tmp_msg_0_1_0.z_units = 94U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.4508336384493321;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 96U;
    tmp_tmp_tmp_msg_0_1_0.abort_z = 0.08229418655758614;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.16750526166563595;
    tmp_tmp_tmp_msg_0_1_0.glide_slope = 32U;
    tmp_tmp_tmp_msg_0_1_0.glide_slope_alt = 0.6838125287444126;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("EVQHORLLZDJJVDJMCEEGPYYPVUZHOHAVAFBZFBWPDMJDDMNLBOQIGJSFAEDWOXKSEUIBZMQJCURHZYZNRKXWDZBABGSMRHPNQGJHYLQXKIVKYRIVXWIYKLFHIMEAUFNRGQAFWUUCFQMILCSEEDGDSMLCGRVLXPPOPOUBVGFIHNOK");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SonarData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 245U;
    tmp_tmp_msg_0_2.frequency = 2923338965U;
    tmp_tmp_msg_0_2.min_range = 7494U;
    tmp_tmp_msg_0_2.max_range = 41542U;
    tmp_tmp_msg_0_2.bits_per_point = 75U;
    tmp_tmp_msg_0_2.scale_factor = 0.9307417949118999;
    IMC::BeamConfig tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.beam_width = 0.45173114174337037;
    tmp_tmp_tmp_msg_0_2_0.beam_height = 0.637174890004488;
    tmp_tmp_msg_0_2.beam_config.push_back(tmp_tmp_tmp_msg_0_2_0);
    const signed char tmp_tmp_tmp_msg_0_2_1[] = {-91, 126, -96, 72, 66, 27, 101, 104, 27, 124, 111, 93, -91, -65, 106, -90, 1, 48, -25, 62, 104, 97, -95, -64, -77, 7, -36, 80, -30, 118, -100, -1, -39, -61, 116, 89, 24, -16, 32, -128, -99, 33, -50, -36, -37, -34, -125, -14, 41, 91, -116, -113, -67, -47, 57, 11, 95, 1, 65, -120, -55, -80, -76, 65, -81, 17, -22, -91, 56, -24, 60, 89, -120, -14, 7, 40, 71, -57, -127, -30, 7, -128, 114, 86, 16, 45, 115, -46, -39, -7, 15, -30, 18, -57, 56, 25, 86, -112, 64, 59, 98, -17, -124, 4, 96, 85, 19, -76, -1, 9, 20, 110, 64, 77, -17, 41, -124, 2, -113, -114, -122, 119, -102, -56, 83, -99, -55, 65, 72, 43, 43, -40, 111, 68, 89, 86, -115, 115, -113, 91, 116, 42, 118, -11, -33, -71, -114, -80, 82, -8, 61, -57, -45, 78, -127, 33, 33, -96, 68, 90, -45, 40, -111, -46, -11, 86, -73, -73, -103, -50, -98, -114, -13, 27, 40, 63, 116, -27, -87, 74, 83, -13, 17, 36, -88, -82};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_1, tmp_tmp_tmp_msg_0_2_1 + sizeof(tmp_tmp_tmp_msg_0_2_1));
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
    msg.setTimeStamp(0.04002260249339684);
    msg.setSource(62711U);
    msg.setSourceEntity(161U);
    msg.setDestination(27966U);
    msg.setDestinationEntity(109U);
    msg.state = 55U;
    msg.plan_id.assign("FHYFZBCLXKLBOIQSZZUCIIHKWCCOMRAEXHZGKYWADXSZDPHQMSNAEKXJDFBQRFJRERFDNVUNNRXSOJLTBMEYNRTOCRGELEUPKHIBFVXTWFPVVCUHWXNICKHIUZLOMGABAXULTZJPPFYXAPTFGJOLJDAZ");
    msg.comm_level = 118U;

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
    msg.setTimeStamp(0.9785277999818697);
    msg.setSource(14358U);
    msg.setSourceEntity(55U);
    msg.setDestination(50318U);
    msg.setDestinationEntity(38U);
    msg.state = 186U;
    msg.plan_id.assign("GKPIHLBHNOQYPEYMKTGKSCJUTCFAUKZSYGVPUSHIEDODQQUYSBAVMGJTWOFXXPDMFXWBKZRNPEECOXKBLLQDHJJSYXZ");
    msg.comm_level = 117U;

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
    msg.setTimeStamp(0.20358178572488372);
    msg.setSource(55447U);
    msg.setSourceEntity(131U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(133U);
    msg.state = 137U;
    msg.plan_id.assign("XHJAIYULZHHDUMPDFUQHRWRISBIDSADXJFFUKXTEMPNOBQJTYZQQIVMLKEEBYNGJLNRMTVZWOBFJXZVOSWQMURGAPHJHTCJNHVKMHNPDIGRI");
    msg.comm_level = 35U;

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
    msg.setTimeStamp(0.47470216102376195);
    msg.setSource(64880U);
    msg.setSourceEntity(60U);
    msg.setDestination(47058U);
    msg.setDestinationEntity(229U);
    msg.type = 205U;
    msg.op = 168U;
    msg.request_id = 45085U;
    msg.plan_id.assign("ZFBWRAFNGJZIIMKHDVLUFZGFKXLPIKTDKLIQDHOTLSTDBMTBIXODRQXRQIOUTBCLNTFKFWYRZBESECWRHNEJOZBAKOUIQVYXUDXCFNHDNECUWVU");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.4808218186315273;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SJFOPKEGICVHWYGQJ");

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
    msg.setTimeStamp(0.3219257823000249);
    msg.setSource(43905U);
    msg.setSourceEntity(221U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(152U);
    msg.type = 104U;
    msg.op = 222U;
    msg.request_id = 23899U;
    msg.plan_id.assign("WLXNEXGPTYFE");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("YFPVSDFPNMTOWZRCXUAIQPZHMEVRJNBSMPQKIFPHTHYAJLGOANRFUFRILAKEHJEWLMYEXKKQBSETP");
    tmp_msg_0.sys_dst.assign("CPKXHBEVXOIBQDLWJIVJFFEWFIPTVPUGIDEALCMZZMLNHPQZJMREUSQXNCTYNGHJFYTTQGJUWWRMXGFUYNBGDYRQKFFIIBKTHGMPDLWQSNVRSIOVCOYUIJCORKYWX");
    tmp_msg_0.flags = 144U;
    const signed char tmp_tmp_msg_0_0[] = {-89, 92, 12, -63, 16, 7, -43, 18, 112, 19, 14, -47, 42, 62, 37, -59, 40, 72, 22, -14, -75, -125, -5, -77, -19, -84, -79, 32, -112, 59, -120, -5, 29, 67, 64, 48, 95, 52, 104, -122, 15, -58, 30, 100, -76, -19, 18, -55, -16, 34, 94, 93, -80, 92, -17, 55, -63, 9, -39, -50, -33, -115, 84, -8, 104, -108, 29, -90, -43, 75, 68, -80, 95, -70, 45};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MZPTYYFRTMCBOLTFEAYCEOEEKXPNXUKWLPQHVITSGTKNDRSYUMXYNBPHNQKQSIHUYBYMQCSBDMUCCOEQQNZFGIKKEWRWSHJNXABDSNNHRSZOYVVWZWCIOCIYLRLGPGGJGHDBJPIGXRJLBXDUWZODDZRFVEIPBVSVAKRXVYUALUTADHACNTEU");

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
    msg.setTimeStamp(0.49987874550811806);
    msg.setSource(58937U);
    msg.setSourceEntity(246U);
    msg.setDestination(49835U);
    msg.setDestinationEntity(182U);
    msg.type = 34U;
    msg.op = 175U;
    msg.request_id = 42710U;
    msg.plan_id.assign("AICFQNNSRSLDBXWLRXPLQBTJGJGGVOFORPTCEBOZXIGWEDIHQKRPITCEXTIMVQJSSKYJYOBUPGJCSYYQZBDHJESQCDWNWPSCVTQOULMURGDMUAJVXWPLYCEDEBFXPTBPNSBVUKOCIWZ");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 168U;
    tmp_msg_0.list.assign("PTOXRLUBPZDQWJCGUVCFFRSUWSZEHSFCMXEUAUSOPDQTDAXYNODTOONFEAUFRVYROFHKZLAXYUHAZVCERITUBLZMADIXZRVFFBVYCDDHCBGPNENOOBCMZWBGWBFPXYJNJHJLVEESPQNTXIKWBRQYKVCKHCKTKSVG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GCTVZOAPMRCBBETZZQNNDRIZHTTIHTSUPIHQCNIZEXOWFWCEWZVLDEKZSBACRYHSXMKFBPRRAHCRPMEJVPWBDZSUPMOLOTOEHAQAHKESALXALGNOUFSPWGSRKQMYVJDKZAVISVYXGTUSFSFQXWYLCKRQGFMCNUWFGJYNQIVXTDGMXBBLEPONO");

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
    msg.setTimeStamp(0.16948113658637354);
    msg.setSource(62384U);
    msg.setSourceEntity(224U);
    msg.setDestination(34079U);
    msg.setDestinationEntity(61U);
    msg.plan_count = 52007U;
    msg.plan_size = 1528170453U;
    msg.change_time = 0.45547776528020467;
    msg.change_sid = 41323U;
    msg.change_sname.assign("LXNTBGJYXLBZHCKCRESVGUPKIPYFVISNCXOVJLCOKPAQPZQBQPWFUHHHZBKRMFUZGFVENJRXOCDRVRTGOMPYRQEFOWKMRPQWXTKHJVWEYKGGDSTIGCAAFIT");
    const signed char tmp_msg_0[] = {97, -126, 35, -11, 19, 27, -30, -15, -48, -112, 2, 97, -124, 94, 87, -11, -12, -35, 77, 10, 101, -114, -24, -126, -40, -73, -107, -66, -37, 97, 70, -52, -70, -40, -75, -71, -87, -4, -19, -45, -55, 76, 37, -36, -25, 85, 52, -67, 45, -34, -53, 39, 67, -29, -8, -70, 71, 11, 99, -45, -36, 75, 71, 35, -104, 41, 113, -97, 75, -6, -128, 114, 107, -82, -51, -43, 99, 78, -33, -59, 96, -91, 101, 79, 111, 64, 36, 28, -18, -35, -39, 73, -35, 92, -114, 90, 99, -10, -107, -107, -20, 28, 83, 67, 106, -21, -66, 42, -92, 117, 23, 43, -44, 110, 1, 14, 37, 66, 63, -24, -72, -61, 55, 18, 96, 43, -31};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SUOSSOBIPJKINWQJXFTDKXBBNPORTKVRVFDKQLHTDS");
    tmp_msg_1.plan_size = 53216U;
    tmp_msg_1.change_time = 0.05809276514745798;
    tmp_msg_1.change_sid = 58946U;
    tmp_msg_1.change_sname.assign("MABYNMZATNSIVEFTIDCBAYDFBMGXVGLYUPRAEIVEOZYMNQBFBXVUVCAJWGPWWCHTZTYPJGAKCQWHPSDBDRDRERVIZVCUVYDKKJCJMISUUOKTZUFFCEPXARHZNYSZHYSQFNFIRFDEMJZBLLTSRSKIQXZLXUINMOEDSUAORJQXMIYIRAMLTPOYTLFWXOJMQQLSQPHNJNCSCLNGTGHKBEOHGJPHWAUVQPOJLDGBWQLWPXETCFU");
    const signed char tmp_tmp_msg_1_0[] = {-72, 5, 69, 124, 3, 16, -46, -56, -103, -100, 81, 23, -66, 91, 87, 14, -15, 91, 121, 86, -79, 41, 62, -70, 32, 10, 61, -45, 12, -73, -81};
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
    msg.setTimeStamp(0.25315941214189597);
    msg.setSource(63139U);
    msg.setSourceEntity(204U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(198U);
    msg.plan_count = 58870U;
    msg.plan_size = 3117758534U;
    msg.change_time = 0.3871020115516053;
    msg.change_sid = 23985U;
    msg.change_sname.assign("VOASMWAKVZCLBOETGSUJNRTYKZRKIOGHPDICMCBXXJLEOYTSJLWYOQLXGSJSHBTBCFBKRXWQFMDTNKOWMDELZRMDSBJWHJZONFTUDIVHJPQANMXNUNEGJJLTEETLTSULDVKCRWGQPRHAPKAZWGIQFVZVQASBXQBCAWMMRPWLAOQNPXZQIPYZCNZHGYRYUVV");
    const signed char tmp_msg_0[] = {71, -18, -119, 0, -83, 108, 20, -116, -60, -88, 117, 14, -61, 88, -53, 101, 102, 49, -13, 11, 25, -48, 51, 95, 56, -90, -18, -107, 20, -14, -46, -29, -44, -128, -88, 104, -32, -115, 13, 117, -73, 109, -76, 10, 51, -52, 1, 11, 1, -11, -101, -121, -2, -55, -30, 117, -128, 125, 109, 45, -118, 75, 63, 58, -4, -31, 2, 25, 62, -31, 114, 74, 29, -7, -65, -6, 87, 33, -93, -32, -49, 56, -29, -93, -36, -4, 108, -17, 22, -78, 77, 39, 81, 13, 47, -6, -27, 25, 54, -98, -40, 20, 58, -13, 13, -128, 32, -24, -17, 80, 113, -118, 97, 120, -19, -94, 124, 20, 1, 15, -19, -80, -79, -33, -89, 39, 49, -12, -127, 23, -24, 119, 56, -26, 9, -116, -32, -128, 62, -23, 111, -43, 72, -116, 51, -120, 80, 70, -87, 60, 76, 102, 17, -120, -22, -59, 73, -74, -63, -72, 10, 12, -123, 65, -83, -20, 32, -112, -83, -88, -84, -19, 68, 105, -16, -18, -120, 111, -109, 29, -96, 48, -48, 27, -33, 78, 18, 113, -36, -17, -104, 13, -24, 16, -80, 98, -105, 78, -124, 61, -33, -57, 10, 41, -80, -25, 46, -79, -64, 66, -52};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XIKGUDZTDLPLPAZVSAXYMOLZLZMXNAAXTEMHNYOCSDTRIZJBPYDPXQOAWYPJRRZQVDVVYFGJHFXGFCCJLBHPSHUIVIOLZOOJGUTGNPSSEWFULBHCUGSYBRINUWMPQBTSQFEGBYNNWEKIDWFSASLTTOXKWHVZVBAWWKYXDGVZKNTUMREJDXQZKHMJHCKIOKFCQUECYRPOQMMHNEEUCRWBAKQQNKIMHFJRIQGE");
    tmp_msg_1.plan_size = 29648U;
    tmp_msg_1.change_time = 0.20450998982781032;
    tmp_msg_1.change_sid = 36301U;
    tmp_msg_1.change_sname.assign("GPYDBSWPASKTTIRUPRLZRFDVLPNNDMJTNFIIPCJXCELF");
    const signed char tmp_tmp_msg_1_0[] = {63, 98, -123, 109, -5, 114, 11, 51, 27, -42, -63, -21, -37, -36, 18, -86, 45, -114, 76, 33, 118, 119, 10, 27, 51, -94, 17, 117, 124, -126, -41, -21, 79, 11, 125, -84, 51, 108, 32, 20, -88, -81, -39, -98, -20, -37, -19, -74, -61, 53, 68, -75, 117, -90, -85, 34, 94, -56, 41, 34, -60, -78, 50, 58, 74, -76, -10, -34, -51, -53, -71, 60, -45, -50, 118, -50, -19, -118};
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
    msg.setTimeStamp(0.07231706118377434);
    msg.setSource(38503U);
    msg.setSourceEntity(79U);
    msg.setDestination(12406U);
    msg.setDestinationEntity(89U);
    msg.plan_count = 4214U;
    msg.plan_size = 1308621789U;
    msg.change_time = 0.8767202392534902;
    msg.change_sid = 200U;
    msg.change_sname.assign("MAAORRCIJNNJEMDTPNLYBQTVXWGCBXZLOOXGKZFPHQOFIYZGCUIBRTPVSTDTWTZHBZGXSGEJMEBTHLADNWGEWSXRQHKUCKTLJCPKIFNAWVPRAJLBAQZJOOZCSDLONWSRGQFIFMUXRWDFDCEAUXKTD");
    const signed char tmp_msg_0[] = {-35, -57, 3, 78, 52, 75, 96, 28, 90, -114, -69, 46, 86, 89, 87, 19, 72, -39, -65, 52};
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
    msg.setTimeStamp(0.1916457140532024);
    msg.setSource(12074U);
    msg.setSourceEntity(175U);
    msg.setDestination(44736U);
    msg.setDestinationEntity(133U);
    msg.plan_id.assign("SDSFETPVILIRREPBJPHP");
    msg.plan_size = 11582U;
    msg.change_time = 0.43730459395420906;
    msg.change_sid = 63978U;
    msg.change_sname.assign("QEIVJPYHXVZQNFVYHWIXEVDYMBTOIOSKSDBTIAUNLJOEHEXYMRLCJXKSFIOLBXQRYPVALCDCEFRPPVVJQOIGWCLKPOBBUDQOTEKKXHXXRUTWBBLAHPDCFMAKDPNRURISAGXTAZWFAUMEOTJGBZAERKSTQCGHZFNKUEUCITZFIKYMDLNODLFCNSMSHGJWAREJBSKZJMWWWHWCHQGSNTMNUGYP");
    const signed char tmp_msg_0[] = {86, 42, 107, 18, -82, 22, -57, 25, -36, 18, 113, 59, -43, -86, -65, -8, -39, 26, -101, -60, -39, 114, -90, -54, 111, 21, 124, 10, -111, -13, -119, -29, -70, 120, -118, 50, 107, -15, 54, 124, -17, 33, -122, -67, -51, -31, 96, 125, 7, -114, 108, 5, -84, 124, 26, 35, 112, -4, 90, -36, 16, -126, 116, 64, 25, 92, 101, 15, 82, 90, 103, 36, 27, 0, -23, -45, 83, 83, -30, -74, -84, -8, 126, -70, -47, -68, -73, 83, -78, -36, -113, -1};
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
    msg.setTimeStamp(0.11407339719753484);
    msg.setSource(3776U);
    msg.setSourceEntity(218U);
    msg.setDestination(54167U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("YCIUDRMBEOKOUBFKFFRELNBYQQYBQNJCINCIKTVEWUCYTLZDGTJFNPJBDNOAVZYTUEJZYWJILCTKVBLDPUHSWLBAPYBOXJGVCHRPABSOMPLLGEAVHINDSMKWMYRFMLHFDZDSPSEMJUGXWQXEQMOVHBSMQE");
    msg.plan_size = 44161U;
    msg.change_time = 0.5719054342055864;
    msg.change_sid = 56809U;
    msg.change_sname.assign("FTCLOTFDKETLWUEPCOVKSBHNXUFZOSNNMGUBHRJAOSGIZLPGLJDGGJBZVAVXZRGWKLKHUWUQEDCIQGFTFELQOVPDEFWHAYOUXACPEEZYRHMNULJFONHOVPWWYTJHMXQUXVTAMLBIPIDACYZQQBVKETNXNZEMIZWRNITCPYXBJVZLRDOYXRGSAHAHKGENRTBSYVDXMIKJZBOSCIGWDSRJBKYQFQ");
    const signed char tmp_msg_0[] = {15, -60, 49, -3, -90, 9, -117, 9, 94, -76, -73, -55, -51, 55, 68, -59, -22, -35, 35, 35, -117, -41, 44, -69, 78, -3, 123, 89, -7, -36, -101, 100, -6, -10, 106, -13, 107, 122, -113, -121, 57, -60, 5, -28, -106, 51};
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
    msg.setTimeStamp(0.638422565884154);
    msg.setSource(4801U);
    msg.setSourceEntity(60U);
    msg.setDestination(35382U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("UJEVODWAOHEJPNBFXGONBUWCERYMNSOTDBHJNZMMTCMVJDSLOUEFPFUBASPRFEDMLDVLTQRHDUQWZHAMWNXWYBVUXGXJLIFWRZNZBNTEURAUEHKBCADWSGIGVYOEHXZQHESXZFWRKWPLICQGCVMVRS");
    msg.plan_size = 63804U;
    msg.change_time = 0.7884242419866043;
    msg.change_sid = 58115U;
    msg.change_sname.assign("MSYUDKMLLZELUMWEBYWBCPVXIEKZQXYVBODFBNN");
    const signed char tmp_msg_0[] = {81, -118, 73, -122, 48, 21, -16, 10, 84, 44, 30, -123, 18, 90, -18, 30, -29, -22, 15, 92, -20, -24, -81, -90, -17, -43, -43, -68, -38, 78, 70, 33, -59, 44, 86, -122, 23, -75, 96, 93, 75, -76, 30, 126, -72};
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
    msg.setTimeStamp(0.3098850068417456);
    msg.setSource(7072U);
    msg.setSourceEntity(227U);
    msg.setDestination(57698U);
    msg.setDestinationEntity(80U);
    msg.type = 91U;
    msg.op = 207U;
    msg.request_id = 60314U;
    msg.plan_id.assign("FVSAWHUIUMZMCXQFKEKGRSCOWYDOMEEOPXRCOVTDEFHADGWIYEFPEJYVXHAABUDTSGRHYPSTIVJAWXOPUCKMFHKQGUOPPDSZALDXPJIGJRWDZSMCKFXNWYIGMNTXDUEMVHRFV");
    msg.flags = 15030U;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("AMHMVLQWJLOXIYOYFEQNBGSENVQUDWPPOKEUFCRLSYOMOTRJBIMTGBSKDIXTGONMUBSRWJDFADZZXBWYTHYHQHTMOIEFTGWKTY");
    tmp_msg_0.links = 3925381372U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YQHRKNAZVWQSVMZEVNEAZWXONSZPDLQTVUMSELPPAXLALKDSWGXIXTHDFCQFBBHMMVBRNRJRGWKGBUUWBJKUEUQLNAUDIBURWURDNPZLDITFRYMIJFXXASYKLYOLWKYZYAWNFPHOKUXROQTJPGICNXJLMCCKCMNBHIPQTWPOIVUOBFSITDFSTCQHJHVCD");

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
    msg.setTimeStamp(0.35267693942128153);
    msg.setSource(60421U);
    msg.setSourceEntity(225U);
    msg.setDestination(15408U);
    msg.setDestinationEntity(166U);
    msg.type = 216U;
    msg.op = 234U;
    msg.request_id = 40245U;
    msg.plan_id.assign("QTHPCEIGQYILHQCPWOKOQAPBADJNYWQNIOJGSFFHUAUXDZLMYROQFUIBTXRTZZSPBVHYEBLPKAVQXDLGYWVZRMCSHWRRMSXGSKYTGYNAPXPMNFUBGGHQAOVEVRONAWZECEBBLJMOEIUKKJCZHECWQ");
    msg.flags = 15996U;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 1240U;
    tmp_msg_0.destination.assign("QLWMTTAIBZRJQIQPZTDRLNWMDEAFPGWHDNEBMGODPWFSZJYVOQCQDVQNELDEXAPIZXKXOIWDXKOVHSDLINUPCUXZZJKYSZLUGJHSMHRPLVQBBTIVNRTICIOJJGU");
    tmp_msg_0.timeout = 0.6667961997456121;
    tmp_msg_0.range = 0.9005313170846709;
    tmp_msg_0.type = 173U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7996368445750212;
    tmp_tmp_msg_0_0.y = 0.3647394959655482;
    tmp_tmp_msg_0_0.z = 0.29801619787623534;
    tmp_tmp_msg_0_0.t = 0.3234848286048594;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GXQOJREVQTJWUMEOFAOICXIBIDUTZYCRQSCGKPSLJXALLMDKAIGOWDQAPNPPLTAGMKMWJZYBXFEIEWJPGRORRRAKBBQLCZQMVCKVEIEBCVWHEYSVLHPKVHKUNDWWEYXNVCDHMAGYFIBZENXXSZXAYKDOTPMQCDNTLTSXURHDVFNPRNJWUZWGZIQQTSFCAUJLPUBBBOJKJI");

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
    msg.setTimeStamp(0.5136138103570952);
    msg.setSource(44123U);
    msg.setSourceEntity(245U);
    msg.setDestination(39773U);
    msg.setDestinationEntity(247U);
    msg.type = 107U;
    msg.op = 205U;
    msg.request_id = 5847U;
    msg.plan_id.assign("DCQRQEGAVOJVZHSWWCRTRSPWDLOTLAGBOURCXBQVIKBDIXHVHHSXAACBFUPXWGWSGNFCWKSRSLPQKCIEQNDNJHLLVATFFAGYZYQNYQLKHHTUOSBCTMFROTXLVJREUJUYIPPKNYJPZTFEYMSUZZUNEPRFQPVIPKBXNACEJMFOXEKKMDJYJXZOHWDXITTVANTDCBSMMCZZYKWQOMFLRONEUHGIIRNSMOFBUIIJWQAEZXLDPUJLGDYBMMG");
    msg.flags = 41120U;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("LDVLURXUIXOZTJWEAAXNTOQAFVMASRROWKQQCYIVFRUOAPHMHICQENRIGHMJMDGDGKXLWUXBOCZJDZCUADTLQTDSYHFGSDYBYWBLFTGQTNEIZOYYPPMRWKXRFKVAUCPHJNIAPWUOEZDTPKIPUYXEJMPEGQKJSAIQJNRYQCESXMFERLVZJZSGYHLQVCKBZWCHSZSKOXGHCVHSTBWKGFEITNUFOTPM");
    tmp_msg_0.data.assign("LFMUAKIGQBFGQKTMGNXDUYIMSSPKZEYZLBSUGCSHQPJWJAARAYMWPISRIBZXUNRUBOBTOKCZNVZGFTVILATYWDGXMFBNDJAOAKWRMZMHHIVNJILHTBRHUJXIVTFQOQPDKOZBNQBSHFJVPRKCGYGVTRFEMHUDEQCYXLQCDSGSYOP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HYCAMMCNBDJZDREGAOHTTWOPJYZIWYXHOSGXKILPLDNLAOQRXHPRVZAIJKJXMEZBKWHERWZUIWNYXVMWYAFWZGHTBUDEQMNFHCQSVYQNCVTIDIZZBLRLOFTCUCUCLPQAXQAKDLTSWEGJRJAXYTXEDBDPOVVUKJVAGVAOFKDOSBQYVSKBMWTNFTXEH");

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
    msg.setTimeStamp(0.26202393312224426);
    msg.setSource(61846U);
    msg.setSourceEntity(167U);
    msg.setDestination(61269U);
    msg.setDestinationEntity(212U);
    msg.state = 39U;
    msg.plan_id.assign("HVSOHXWSWBJCYATVLLVXCZUPTYMTYKURDSLPQJEJXKUO");
    msg.plan_eta = 645782458;
    msg.plan_progress = 0.12629009791566592;
    msg.man_id.assign("MSLRUMYVTGWMDUNYWKJZPSWHLEXAGB");
    msg.man_type = 35286U;
    msg.man_eta = -1438562742;
    msg.last_outcome = 67U;

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
    msg.setTimeStamp(0.2829474749203643);
    msg.setSource(58603U);
    msg.setSourceEntity(253U);
    msg.setDestination(4231U);
    msg.setDestinationEntity(23U);
    msg.state = 50U;
    msg.plan_id.assign("CLBMLFPIXMZMVLYQXAGJJMLTDKDPSBBVEPOGQJAPWIUHANNKILQXYCWOOVHWKLOSRUSBPNJWSRFEYQCTVUZTDPNIYETPZYLIXBEVL");
    msg.plan_eta = -1364387861;
    msg.plan_progress = 0.44054515101387914;
    msg.man_id.assign("BEPJRPXEVDLAHFUJWQXUCYKEULTODNTVWKQMPTSSRPOHYGXDPGDIMRQKVLUNKZEVWWYBLTFWGSZPOZJXOAFWUYGXEWHXFEBCDVGAJSFIFRDWEQQPVVSAKOSHIZQOPEGMIINDUZDPLAXCERXUCDCOAMA");
    msg.man_type = 25924U;
    msg.man_eta = 1142657901;
    msg.last_outcome = 105U;

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
    msg.setTimeStamp(0.8327668189391944);
    msg.setSource(20650U);
    msg.setSourceEntity(130U);
    msg.setDestination(61703U);
    msg.setDestinationEntity(196U);
    msg.state = 214U;
    msg.plan_id.assign("OEPHBZBNNWMEPVRXSBODVDTPKIEASOQHXLKDXTGFNCTWJDZYCEIEOLQCIWXBRAUGWMQMISNXTNMSFRFNVQHQGKWLHLKBGPKBWFUZZLXHFGTSULIBQBARYUKYOZNJMXMOIIGADMNVLGZHTOPFIUETQWVMYVRCTZMLEYVJEJDIQPXSKAOHSJLJPFVXJPCBLGEUHRGURUNQSTFXOYYADDBASHRJAKUVRZ");
    msg.plan_eta = -1066598206;
    msg.plan_progress = 0.3506021018440372;
    msg.man_id.assign("BLTDQFAHXPCTUTHLUIIOJKHLGDZJIJGMBMHZSTNDOWCBFXLIBPGQHNGOFISFFIENLDVMNPKQVJRVNXYIZFAPDUVAAYVNDRAWPBQJCJNWLXRGSDQKOKSBWBTXOAARBRKMHRCTFLMUMLKTVDXVUOGHDXGEBFXRMV");
    msg.man_type = 44237U;
    msg.man_eta = -1814551720;
    msg.last_outcome = 96U;

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
    msg.setTimeStamp(0.33746389528362963);
    msg.setSource(65186U);
    msg.setSourceEntity(235U);
    msg.setDestination(16498U);
    msg.setDestinationEntity(103U);
    msg.name.assign("MKEIHUJOOIFGBFCYVTBNQGYNXAHTFWOJBEOLEZJZDBSQQMMKARVIKZUYJIDXRLKZTIYUSQAHUARNWTTXPGGMNCC");
    msg.value.assign("NKPEDIRJTCCDIWWMYGRELNPQKBHXIVMLEHOMQCQXLGE");
    msg.type = 57U;
    msg.access = 44U;

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
    msg.setTimeStamp(0.7562042513045847);
    msg.setSource(307U);
    msg.setSourceEntity(154U);
    msg.setDestination(65260U);
    msg.setDestinationEntity(154U);
    msg.name.assign("QKWAOWRYFYHVZWPJHOKEKVJLQYRIJSARCNCVKCKSIAALXAYVJDDPXZGBTZSVUOXXITIPRSBQKLMNXYZQLUMGFEFNYEXAEOADCJEJKZLIFVBENTHUKVWTFVDTMUJRPNCPATOHBPRTCCMSZOSMYSGBFGHGDNYORSOHWGHWYTGPNFFHGBJCSMBWXRZMICHMDXWEDUAQQKFDTLBHXKQQZVUNLGLLIEPIVEG");
    msg.value.assign("HWKMJDXXGTFGCAQIGYCODOVMVPXJGMUEMDTCLJAOENLVPXZXPGTEDRTEJASXXTCHSZBWEPQNIMWDASSWHUNRJOTSWJYWTZAFUULGPYJEQMWYGNBIFZCYQ");
    msg.type = 75U;
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
    msg.setTimeStamp(0.02304249824013105);
    msg.setSource(19972U);
    msg.setSourceEntity(65U);
    msg.setDestination(44493U);
    msg.setDestinationEntity(108U);
    msg.name.assign("NLYICYCIEOERMBYSVRHLXKCKQVTQXGURKHWUJZZRMKZUWXXIJTJNBPAHJHXMABFTLUTGDHOQGYHPLFOEQFCERPNASFZUL");
    msg.value.assign("MGRUXXTMXKOUSCLECZZVBUGUEWMHLRFSCNPQIASRMFHNWMLKRHUDWWRCEPTLVJBLKEJUBSEMAQHOAZDIYDIBPTJZQXTKNIEPESWURZFZVESXGSBJQCOLFGILFYPRCTHCDISANZCBBKOVMCTWANPGRWUOVLQKMKIUQETKMYYGDPVOFRANQYVXJDXQWZHHMAPFXNGZJAHDWOIFXGPRLDXJOYFKQTCKBHUTGNYVVBWIYJLQ");
    msg.type = 154U;
    msg.access = 124U;

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
    msg.setTimeStamp(0.4991680648284259);
    msg.setSource(1004U);
    msg.setSourceEntity(225U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(7U);
    msg.cmd = 189U;
    msg.op = 69U;
    msg.plan_id.assign("MPNPPCBEIJKHDFGQQZSLMWQOAMSGWUVHVIJTHCFEWITIVLYWCFZOUZKLSHZOIWSUETXYUDHNCAARQRNGWXNAQJXNRDKYDASQGTGMTLVTGEBWYCGOFMCGTRVRAKOFEVSFMXLEDLYPRXVGNDSLBKVRBMOARKIUIPUAJSVDFEBCTPYYNUGEUSZLCAQMREKMXYBEZPOAOJIBBNWBLDFUMJRYPONZ");
    msg.params.assign("NIMZQCREOQDKVSBSUEBBAUEQIMHLNJXRVCLYZOMLDGKRMTXVUMNYBXPFCPMSFYVRQWTHGDARPNMZXQCIXGLOKOWRMBAXYGPCSIZWOEWAENNAHGNOYSJOQPAYTYSIJQDPTFCUEVUWBWFUTHAVEVFEWFHHJDDOHZRFQTTGJQDYKPIOCBZUVUABEXGRIPENAJDHRRSNKKPXSSXYDZGWVLIZOLILGBKACVXNTKJYIWSCTKGZDMLUCFL");

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
    msg.setTimeStamp(0.4500897359111792);
    msg.setSource(19356U);
    msg.setSourceEntity(100U);
    msg.setDestination(20950U);
    msg.setDestinationEntity(139U);
    msg.cmd = 143U;
    msg.op = 170U;
    msg.plan_id.assign("ZBFGXJRNCPPSFKFHAWXQNYDSKDENYQITTNMQAZIHLRQBSOJVIMVYGDTMYAPW");
    msg.params.assign("THOCQSCPRQYDOFFPKMXNPNPTYWTXWPYJULPRQDKORWKBUJBD");

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
    msg.setTimeStamp(0.5458138968885442);
    msg.setSource(43206U);
    msg.setSourceEntity(37U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(89U);
    msg.cmd = 185U;
    msg.op = 46U;
    msg.plan_id.assign("KPSCDFNWWIPDXYLNBEWDIGHJLVUVUEYLFVLPBOUFXZMPVIZPSHWOCKFVUDZNECEXOMUQDAIJPFGCTIBEQBJUSJCNGOSAHQAOBMZEOJJVLZAPDPBHPGMRSMIJUNXHYJGYDRIAZWMLYEEMKXYOAYKTMYVTPVKHZCLTXQJOQCZNQWCA");
    msg.params.assign("HGELCYBRNTSGHSKVJAGIWLKKXCJQEKGAYWLUEZADZCTXPROPHUOXKXIFWDNUWCVDFFUBAEWGDUMQJHGBMSTBNJXBTQFRMGPUVVSHPNONOKTNIUTKDBBQPQFIJEUQLCFZYXWEZLWVCACMRELYYBFPRTEAYZMZQPGSRYHSHOIJNRUUGFRDOVBMBARODJSZTRVMLTVNPMXKSIWJTHOIZAMD");

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
    msg.setTimeStamp(0.7767849806351024);
    msg.setSource(64456U);
    msg.setSourceEntity(154U);
    msg.setDestination(33263U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("GSLNOMXGANIOCSLVVIQFXOBYXABXOIVTLWACUARWVRDZEPGOOOGCXDWYFTYJZHRUH");
    msg.op = 193U;
    msg.lat = 0.15465090738571163;
    msg.lon = 0.030859888587162487;
    msg.height = 0.42186716494419096;
    msg.x = 0.04679494817375718;
    msg.y = 0.035437925688702854;
    msg.z = 0.5274446357808501;
    msg.phi = 0.5392356572429011;
    msg.theta = 0.6566732184065639;
    msg.psi = 0.7143737612387325;
    msg.vx = 0.9915443755370144;
    msg.vy = 0.11148410852476431;
    msg.vz = 0.24406378494352798;
    msg.p = 0.3729103414809327;
    msg.q = 0.0835059269564149;
    msg.r = 0.29663715161281334;
    msg.svx = 0.549300838738703;
    msg.svy = 0.9805883174090324;
    msg.svz = 0.24547170630376147;

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
    msg.setTimeStamp(0.9529498401642867);
    msg.setSource(9979U);
    msg.setSourceEntity(88U);
    msg.setDestination(12214U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("YOWTCLNROTNSPTEDQSXPRWWZARZUBUYBPZZGEYRIOKNVXYS");
    msg.op = 175U;
    msg.lat = 0.9137137663606668;
    msg.lon = 0.06495447312985725;
    msg.height = 0.8923791634877916;
    msg.x = 0.2829892463415248;
    msg.y = 0.729415323418176;
    msg.z = 0.8926998238834584;
    msg.phi = 0.746741453985767;
    msg.theta = 0.14504164005699405;
    msg.psi = 0.7611232156766014;
    msg.vx = 0.48614645370861487;
    msg.vy = 0.24821275813505594;
    msg.vz = 0.14529279420512364;
    msg.p = 0.15583793250290756;
    msg.q = 0.14489502793200404;
    msg.r = 0.5051543884454938;
    msg.svx = 0.5760559646784924;
    msg.svy = 0.6928319281505502;
    msg.svz = 0.4899045562256088;

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
    msg.setTimeStamp(0.42129149328069804);
    msg.setSource(60795U);
    msg.setSourceEntity(198U);
    msg.setDestination(13571U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("SVRIWTUXKJUVFKQWFNVFCBEEICXMUBDOEPJPHRWBAPUXBGWSKWQTTIOAFZLPDXGPHLQQGHGPFUOVPAFLRORYNOARYNYQVKABGOETEJXSBRAZBNNONQVLAHKZCVFBSFFUKYEMVQEBZDINALXHLLSUZEHLWUOEGJTRICOMTHQWVKJYJHJMZTDDXBDUYMVZGCDMNCMQINQWHYHYZMWTRIAJICSMYTKSSWZAODDIXYMCCJFRP");
    msg.op = 109U;
    msg.lat = 0.663677731316613;
    msg.lon = 0.4064897292429075;
    msg.height = 0.8731260212622507;
    msg.x = 0.10563596013508814;
    msg.y = 0.5928751881158231;
    msg.z = 0.4967702314803367;
    msg.phi = 0.7775717000929803;
    msg.theta = 0.2932815752855428;
    msg.psi = 0.2965372327699962;
    msg.vx = 0.8732021774856036;
    msg.vy = 0.9987139849025503;
    msg.vz = 0.711138142863793;
    msg.p = 0.724310641978362;
    msg.q = 0.8886432867806479;
    msg.r = 0.6705233428293274;
    msg.svx = 0.7135285376654142;
    msg.svy = 0.8083784398325113;
    msg.svz = 0.7801602618779419;

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
    msg.setTimeStamp(0.7475732485329485);
    msg.setSource(15776U);
    msg.setSourceEntity(171U);
    msg.setDestination(51226U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("MHDKUIZTGYXUERTDHCJBFYWCRICENRGFLMOMBNTXNMXQWXXRDJVJVCAAJINPLPIMTBAVWYWTGQXEHGJSAUIGGHDOBQLYRRKBHZGFWHEHDVENFVQONAFTIYPXFFPSVATUUSKOMQYGHQDWXFSKPNNKIVASXLLYBFIGSPKMBOOEZMMKCNZWWZYELSLSKTYDZCRVOD");
    msg.type = 248U;
    msg.properties = 67U;
    msg.durations.assign("YFDUNXWVOMJBHRCQXLZWEVDMKWBGLCTPSEXLCIRBGBWMFZYKSFJCMTONYPDVGYPOVHHKTUGMFDNJNXXYAYWCGHHPBNDEUAPRRHZNQWDUTZYAJKSXFEZBQARHSATZVBPZX");
    msg.distances.assign("GHBOYVYNZWLLDXABEOJRDPUIUMFMFZOWWICAVMAZZFHDFLGBTXBGNXFNRLHRHLHNYQPQAPIHVXBKETIFAGTLHXSGMUIRWVGDGJJBVI");
    msg.actions.assign("IPSQQPNZICEQDKDMSTYZDCMIARTCFJZTQGJDCOFVMHETBHELXQIWYVVGG");
    msg.fuel.assign("WPLYQVIXZOSJAPGKWCYZITUMPWFEXQNOVTCUIIOMLTDQQIAVJGAKRFGWHSJXXQNYHFRLWLDEEBIUOKXYYBPLHPXSAFCUXJPIDCYXJBXYGNFJVDVZSDRBHNZVZSTHNOJZMTTZVUZASTBMAFKXOFHCMBLIRJOTDQSVGHFERWKVCFNCEERAUEOLKECFIZEKTQWRGLWMKYKHPIHYAQGDJN");

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
    msg.setTimeStamp(0.5473668879351716);
    msg.setSource(26812U);
    msg.setSourceEntity(26U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("POMDUGYAQQWYZOYZIWXVJOXVJGGIQUXVSMNYNQGISJVUUPPHIGBELKFHTIIFLFTFMLQHJCAZLQONCPIPGDTWRXVIVURHKSWHFBXHVRSSLKYUNYPLRUPLBMDTECBLXPTAEWMRG");
    msg.type = 152U;
    msg.properties = 56U;
    msg.durations.assign("WPMCQKOGACDVMLUVFPAVBMMSNTSCYWTANJWXIDMJKTFFIHXQLNVSGDGBQYQGSUTIFVEFQLPWRHRORTPGPANKGM");
    msg.distances.assign("JNMJXGOCPCTGLRMWZIKSUQVOFRAEKQURDTARDVB");
    msg.actions.assign("CSXZEFRQVCZEOHBBPVEIZRJXTOJZSIBKKJDSJIUKYHNSDZCYQFTCVVYZBXEAONAVAAMLRGOWFJPHFRGMMGKEPQXKGLUCKHKGWHVZHHMSCUDQKLQFUAWWMYIRYQMLGCALVIJPFMGSPDEXLUXOWVANYYQAEOWELQANIPCHUEZPSBYBKCXAZWQNLUPGMNTGTUUTOFGNBIXOLHFFYSRCTSTLBTYXDV");
    msg.fuel.assign("NLGWYXLQBRUFDTJKHXEONZXTOBHJAYUVMGDDPWGDRQOVCBANJTFEBCSYHVKKMRRWLAPQNWXJETHHYWEPGSUUAEXNYPPWIORNQOVGSZMLEXKNBFJMFCGOISJZVWLXUEAMUQLPLMPADYCIOQWFMWZOXNPGYSBZNHHPUZSZI");

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
    msg.setTimeStamp(0.027251724297349234);
    msg.setSource(9823U);
    msg.setSourceEntity(177U);
    msg.setDestination(12353U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("AYNEEKFLSXBRSGWOVOCVASZZEXHNCEQTPQFDUMHRKNILPCTTTHOJVCMEVNKALPVFLHUZBKTPWEEXIMVUORMKEKCNDMYRCIYFZWXNDUQLQFIQSPCOYNJEJOLNAFGGWDLMRIJVXVJLCQBDZASPABAWSVVXURFZPPH");
    msg.type = 247U;
    msg.properties = 19U;
    msg.durations.assign("TFYVTJKLDJKHYIXGMUFWUNCKYSMNPAXCAEPQXIATPPVZWVVGGGZPSRGKBIZEYKBYSFMKPEVBFZYMISOIQWGKLGHKJLUXODWCTFDFDRKZRCMNZJLNFRNQLBWOSQRCMLLRGEMPJOYIEONBJIRXAFXTCBMZUZFOSSQPTWWJLYNFAMNBDUUHTOAJKRXRAGHHYHYQVXVXHACIBDWHSJTDQWMHDQUBUB");
    msg.distances.assign("QYILCJRBVODWKEUQKSOLNRFMGGALCQGWZONFBXRAJCYRCIHUEAYVFXEJVVYFLDXZIPQXYWSOSRPXUHEEQWVMVTMOLJFMUGNOIBEJHPJPTZGYJRBKZUDTNWNRBZEHLETDQCFCKQIFPZUIJOTRIHIVMSIASJMYSJHQWPFSEXGKDKRXONAPHVACLKVILGDRABNBTWOAMNZEUHZUYBPHXXOKUTABGYTKDCQMZDMHTG");
    msg.actions.assign("WJZTZFIKMORUIBCXMBFEDRXGICWPXENPOGFXITACQMEGBHGX");
    msg.fuel.assign("RDSNWPILLJCRQBMUJVXLNKBHENHKDCUAIGFDBSKYMUSHEDXPXVXTHYZIJYQFRKOPAWZMGUUVWBXALDUZROSNYXCBJBRDXSKFOUWBKGWSQLCFRKSPJOXMIIVWGIELFPPZECGASEMTLEMJRQQNAJWYNQTVVDUYHGZEOBFMCHJWZIGAQOJKVZIOBAWHZFFODNQIIQLAMPKPZCVCPRATLVHVNKTBUGYGTTEQUTWYDEHASNRFEPOTRGYNJXZ");

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
    msg.setTimeStamp(0.9396934944559554);
    msg.setSource(38879U);
    msg.setSourceEntity(58U);
    msg.setDestination(53826U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.4291843240688653;
    msg.lon = 0.5852156989694413;
    msg.depth = 0.10857592853985976;
    msg.roll = 0.45422936445231077;
    msg.pitch = 0.7413834599924788;
    msg.yaw = 0.08476385709443413;
    msg.rcp_time = 0.5350853564972722;
    msg.sid.assign("KSGGZAWLBCEIQMCXNUGVJXEIIERWAHTEAVHUJRATNZJMRYGGHNQLLJHZRVUGNLWRPYU");
    msg.s_type = 210U;

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
    msg.setTimeStamp(0.6369874507012413);
    msg.setSource(47161U);
    msg.setSourceEntity(184U);
    msg.setDestination(53499U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.7950605728860897;
    msg.lon = 0.18533273241263182;
    msg.depth = 0.9798359237954791;
    msg.roll = 0.2920924990698901;
    msg.pitch = 0.9581549808321542;
    msg.yaw = 0.305739121025851;
    msg.rcp_time = 0.7038827860618914;
    msg.sid.assign("JPWUAHAMEKDDIEXTFDSQBVWYUQALUHYNQIZSTWBDTZARXIHGMAXGGZRVVUPQXMLKLKUECSZLEMPIHZKHPSKAYOGTNDQGJOEVVO");
    msg.s_type = 53U;

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
    msg.setTimeStamp(0.3040082616126206);
    msg.setSource(10484U);
    msg.setSourceEntity(145U);
    msg.setDestination(40208U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.8798078437976499;
    msg.lon = 0.9312911740734827;
    msg.depth = 0.24775457812304202;
    msg.roll = 0.5200666564305603;
    msg.pitch = 0.46983608230119256;
    msg.yaw = 0.30314177366175044;
    msg.rcp_time = 0.13150455982599663;
    msg.sid.assign("EBFGWEYTMQWDAFGTFCEGNEIRNFGEBDPYDYNIDRZCJSKSZTMLWNZVHDVCIJHRUQZNABYWWPHNUEPOOUPAOITAEWMRRRZJGDCPGZRLGFEUHVHAPVCMOCMTSCLSQIBUCFUXILTITTIKYAMKDEFLQPHMWPNSKKYVCKNHLYWMJLEQRQSUUQXYSSBOOTQGXHZZI");
    msg.s_type = 70U;

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
    msg.setTimeStamp(0.7366082062630922);
    msg.setSource(19023U);
    msg.setSourceEntity(93U);
    msg.setDestination(53887U);
    msg.setDestinationEntity(214U);
    msg.id.assign("YVXKWHRJKGGIATBARROCJNCOMASDVOJZGVKNTCZJJOOGFXDWUYKGQAMPVNSAPMQERMQAFJJWUPCZMLZTRCAPKWXGCBIQIDYDSHWLTHFCPTXJUUHAVQLPGJUPHZWD");
    msg.sensor_class.assign("LESQSHPLNUEDCBFGTKAFPWHROKVAEFUUVGVDVBPXBHBDDGQKGANAECBJCGBJRYJSZTHUYVUUPDYXOAPCRDXYQWPWFFYYDZBHZTKAENIKYQRXYQONQLNLLGYSTIINOMIZJNLTRJBTPFKKQSKZSZWRXSTFIOLULRWFESVYOVXMCTJAPWBSNUOLVQEJRPNHXXCJCZWMMPZATZWCOKIDMMHQGECBANVIEWAQSGMUXVTIRGIM");
    msg.lat = 0.27285851060497046;
    msg.lon = 0.24741088854219428;
    msg.alt = 0.4863396996053929;
    msg.heading = 0.5336156806725315;
    msg.data.assign("ALQXDGFTYM");

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
    msg.setTimeStamp(0.22162357115138942);
    msg.setSource(33820U);
    msg.setSourceEntity(235U);
    msg.setDestination(62446U);
    msg.setDestinationEntity(4U);
    msg.id.assign("INPEQILHHBURAEHGQSXLKFCOJOSHXKCZNSBKPYWJXIMRZYBTYZVKEXDBIZVIVURTJRTAZUDUFHIDKKJOADUTCUNAHGPTFRAAEXNPLGJDOVDLMYUXUYGKFSUOEFRBQWCZTCPHWQCIFQFIBJYQSJNPOXNXDKJVGAZMOBMXLNLSYMTCEVDQIMLERHZMYEWIDFVMGBWLCJECFLSGMTWSPWMRAPGJLQOVOGAPZAVHBNXNBWCQWNSVYOKQZGYSHRUPDF");
    msg.sensor_class.assign("JTXGCXALUKGOORCNWLGTYDOCRYLCNBYUJGLISEAADLFFYYYRZQMUJZJCQTZZEKBVDXQYOMJOIQQKPKTNRNWLBAPAMSBIVAWAP");
    msg.lat = 0.3889080710816425;
    msg.lon = 0.8813418179275371;
    msg.alt = 0.35223343989758493;
    msg.heading = 0.07465226666564495;
    msg.data.assign("NFHMCXMPANSLGQUROHHYAHRVLEAZYPMKQVSEOJHNFXMKSCHYESJCBGIVBRIBLTDBBWFAGLFLOZQQZPRCPJIAGDUXKWPNZHZUDGXWVVLQJQQRWLLBCKDXWTTWGTOXJKNUQSEKBRAYWJRWQLJMONDUAYPRYPMOEOZUSUIAMTTBJBYIFNPEEKRSFESCCCODJKDOHNZSFHTXQUIYPU");

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
    msg.setTimeStamp(0.030678725314406297);
    msg.setSource(60163U);
    msg.setSourceEntity(228U);
    msg.setDestination(55667U);
    msg.setDestinationEntity(178U);
    msg.id.assign("YGUQGIQFTSJIBSDRHVKWLAICIOPLIHBDMOYZDEEOVSNDNUXXGKCUHYKJSMRNZPGWXNPACHKCAGLWWZLJIBXBIZLEVOIAGUMLURHTTFDPCMJEFPTULONNXOXYNZ");
    msg.sensor_class.assign("RUIMCJZCVOKPAKHNJMKITPBOMNOSKBFOYNHUVBUPLQPOWFMJESZWHBWOGUGGIOGFEKUURINRXIPDZFXDXISOPZAAQRXZRDRLZUKSNHTPOGEPNDLWPWZKEOEJMJAYXUDVTSLSJVLXTFSTLSCXIMYVICFRLUHAJC");
    msg.lat = 0.30965078527736545;
    msg.lon = 0.38151117441203886;
    msg.alt = 0.6668067564409015;
    msg.heading = 0.62585042282577;
    msg.data.assign("GDORRPJZZNAHPFTPQHTGUQ");

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
    msg.setTimeStamp(0.6188732032955847);
    msg.setSource(19213U);
    msg.setSourceEntity(13U);
    msg.setDestination(45366U);
    msg.setDestinationEntity(203U);
    msg.id.assign("CZYPZFUTFTGZMANEARAXOSPLLVIGYPPDWLXADAQGBFHZCDBSJWTIFHSPNBQZOONQZXWFCZMXLKPUULCZTAHILUAHHFYENBRMXCPQKLYVINXKYXCJBCDCYGOZYFEWUYRDBEKOJOGXETSMMLEJKTFTVRASKHVJNIBVMOGFRNMWWORQHJEGQHPQXEDKGMYUWMSUERFXVCHYINVPJQJLTRSPKDKZUIUDOQNNRVSVDIBEQCJISATOUA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TJWPTUCIDRGLQNVHYATCLCBBPNTPRAFWKEEVSOPLPQGMIDUGFSRRYEPHRHGNIZOZFXMPWYUAVONNEOHKBIBWFPLGCKXMDMJLZYGETSHQZVUCRIJUHETFSYKAGBVJSXVHXVNFOXZSIBCLDBKNQQXEOTJWEIIDHRROWMGYVPBHWUQOEOHXJDSRLAQPCTJVXSEONK");
    tmp_msg_0.feature_type = 21U;
    tmp_msg_0.rgb_red = 118U;
    tmp_msg_0.rgb_green = 163U;
    tmp_msg_0.rgb_blue = 5U;
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
    msg.setTimeStamp(0.1761035486399688);
    msg.setSource(30042U);
    msg.setSourceEntity(174U);
    msg.setDestination(41365U);
    msg.setDestinationEntity(211U);
    msg.id.assign("SBKFDPVJQZWYPVWTZVIZYFKCXHIIJEYJILZCAAJVFLLHONVTXKQFJICRLONXOHLKGHRSMFMUWKRQDMOBQQPAGLNGLMPLMCVZXYWYSEPKSRBAWLEJEEDHGBNDOSBWUZOFFYZPGNBUTWXRJFCQANNCQHCZCVUFZDATSNUHRUARYJ");

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
    msg.setTimeStamp(0.9165759531454261);
    msg.setSource(1579U);
    msg.setSourceEntity(107U);
    msg.setDestination(16834U);
    msg.setDestinationEntity(142U);
    msg.id.assign("EEIDBBCYHTKXJHXSBVPQKCBLDOZCLFZKZDVUPMLRGVHKGUKMKBC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AYFYDQAXKBFEPCQGEMEOFPTCVZRWGFMEFGRGYQSOYHVDWJHKIXBXETPPXXVJZTZCLRVWGQLHGNFNSIBKUQHKKOIVPOJLURZLIBIWRSPGXBELMMRMVAWXURKBTEGIMKRZYZUJAQMUHADDWDKPVCWFFIEZXLEWTIYYUAWSCNQSAOGJOJIBKNWBUHMJVESDUHCOLNTTVPPJKLHZOSVANNOIXTXFDCYCBNCGFSZ");
    tmp_msg_0.feature_type = 71U;
    tmp_msg_0.rgb_red = 143U;
    tmp_msg_0.rgb_green = 136U;
    tmp_msg_0.rgb_blue = 12U;
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
    msg.setTimeStamp(0.9527067278827972);
    msg.setSource(18272U);
    msg.setSourceEntity(228U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(186U);
    msg.id.assign("IJMUHGFHDZGEIPVXUGWLKECOSOYQTEALYHBGKJCZPEAHVCTHMKRQUFWYSHPSCCVVJXUFBESZQXONVFOPUKBWCRZYAEMOAYYEWNHPDMASKVXHCRIXPZMQYLZFTCPTBBXWGSARWDVGUPJDOFIINGKBFYWQZCPNEDQLFTIGNEVZWF");
    msg.feature_type = 95U;
    msg.rgb_red = 201U;
    msg.rgb_green = 134U;
    msg.rgb_blue = 203U;

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
    msg.setTimeStamp(0.6050486368064486);
    msg.setSource(47755U);
    msg.setSourceEntity(13U);
    msg.setDestination(15662U);
    msg.setDestinationEntity(244U);
    msg.id.assign("MUSPPTJUHMZWJVKGVAGRLQHRCQGVZYDQTNAGKIXDVPTBEFMBZDTVOFLYLPKKULXPOTCDJFNAQNVCDXGTEZGKMVGFEWXHCJDZFAYTIZLEFRSKTAJZJISRDEUCICBLSNVBJZFNUXRBXWUWSHHSCUNEAEPOASNUOAZIHGHVEQYXGWRABXWFQ");
    msg.feature_type = 57U;
    msg.rgb_red = 125U;
    msg.rgb_green = 89U;
    msg.rgb_blue = 189U;

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
    msg.setTimeStamp(0.6441341348537731);
    msg.setSource(25731U);
    msg.setSourceEntity(77U);
    msg.setDestination(41316U);
    msg.setDestinationEntity(65U);
    msg.id.assign("PUYHWOEVQINZJIVDXQVJKSAPHTRIQFOBBDZSCAYUKHRBVDNMRPXHRKJGCZLZVMHWAJTVIABOAPDBOJVPJGSLMEDTSXAGBSEHLKQGSKXNYEOWCFHTZBKLOPEGQRQPHTYUAPNDLDSZKDFPFO");
    msg.feature_type = 156U;
    msg.rgb_red = 85U;
    msg.rgb_green = 17U;
    msg.rgb_blue = 113U;

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
    msg.setTimeStamp(0.64457616045146);
    msg.setSource(27548U);
    msg.setSourceEntity(50U);
    msg.setDestination(32287U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.6431819027659581;
    msg.lon = 0.4486582468121507;
    msg.alt = 0.9116054189875894;

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
    msg.setTimeStamp(0.3353741815007376);
    msg.setSource(45934U);
    msg.setSourceEntity(22U);
    msg.setDestination(45221U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.6444231684141922;
    msg.lon = 0.36076789491877426;
    msg.alt = 0.18486099912548215;

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
    msg.setTimeStamp(0.39344733295163337);
    msg.setSource(21645U);
    msg.setSourceEntity(186U);
    msg.setDestination(20915U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.5688729435905242;
    msg.lon = 0.5039305680306493;
    msg.alt = 0.9554167188169906;

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
    msg.setTimeStamp(0.783185756345492);
    msg.setSource(58789U);
    msg.setSourceEntity(99U);
    msg.setDestination(4843U);
    msg.setDestinationEntity(2U);
    msg.type = 132U;
    msg.id.assign("LZBMKYRDGREVYJRCGVDPZJNEYAPDFKOYSSJNEXWAXCEKOESTVIGSZHFDPKHAATXJYMHFFAUANFKDLAMHZCCIKMHAFCVGPEHLB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64849U;
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
    msg.setTimeStamp(0.8156679972526024);
    msg.setSource(54141U);
    msg.setSourceEntity(129U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(88U);
    msg.type = 128U;
    msg.id.assign("HHOKFVICMRRNEOSTJCXHBBCWAMJKFGRCOQKWPRGVOFQYQTDAPSLJMYRZZ");
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 117U;
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
    msg.setTimeStamp(0.6406238888182654);
    msg.setSource(23460U);
    msg.setSourceEntity(52U);
    msg.setDestination(41712U);
    msg.setDestinationEntity(153U);
    msg.type = 153U;
    msg.id.assign("HOEKBNLPLYNZSUOWFGOORHMHIQKYCQXNBOWZOBCNDWMHPTPNCNRSDQHSEEXXCHJDIMIBRLTYRBZDUMTPWTFDXGJFVXBCQWTLUDFUTQJGRIFDVEVSJPIAWZIKYCYIQMVJ");
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.2860675957511424;
    tmp_msg_0.speed = 0.11352830893592869;
    tmp_msg_0.turbulence = 0.6577117208180437;
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
    msg.setTimeStamp(0.3771842251188231);
    msg.setSource(7345U);
    msg.setSourceEntity(229U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(171U);
    msg.localname.assign("FCQSLKSTFUMYGENGMBAYIGKRLATMPSZEHEEILACZUHKJGFJVTZTWPCACLYOORFXVVCVETTQQJUFOOYRUISQNVKIYVNGSCALQENJLXHXAPKATVJWJOPIFRUABNMDRKBPZGKXFYNHQWBOB");

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
    msg.setTimeStamp(0.6679106221820852);
    msg.setSource(42435U);
    msg.setSourceEntity(11U);
    msg.setDestination(36692U);
    msg.setDestinationEntity(22U);
    msg.localname.assign("FEWSVCNPPUKOGCWGOSOITWSPHHVVIDLBRTGFERHMUIAXMDJBYWZKWNKCSVNOTLRTJVDVRMZLTDJZJNQLIJQXJIYKROZTOZVXCEVFNPGWQSPCHEIUTTNZSGBSBHMEKXAZLRQBIANPNFBJEYXGEFPZCMWRKYJDRSLTAFMCAFBMUXUEQYOCUVQLIXTLIWYUEULBZYUAGMY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UKTYMFHWPWEMMIXVFNDLWBBNRJSWYQXYEZSULSEDUNDFDWILIVSFMGYVGBZHRORFWJDISLJNLABGLTCAHFOHZNDKQJBHKECGXIUHZHUBDC");
    tmp_msg_0.sys_type = 26U;
    tmp_msg_0.owner = 18023U;
    tmp_msg_0.lat = 0.8027061123980087;
    tmp_msg_0.lon = 0.0511930814828202;
    tmp_msg_0.height = 0.3473632055157603;
    tmp_msg_0.services.assign("HCIWHEGRCZXAISNQMLOFXHKAOVAPKOWXBJKFDXHPKTGQSUCBFKTXPMNYIVQTOVNCJEUVS");
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
    msg.setTimeStamp(0.9743397245621865);
    msg.setSource(22571U);
    msg.setSourceEntity(137U);
    msg.setDestination(56663U);
    msg.setDestinationEntity(179U);
    msg.localname.assign("XRQRDFMDFOZGERNZPUTGXPEHNLRJVMMRSFNNPWEMBPAJFBAOVUSQIESVOJXGKNAQFOSQVIGWUDWHYHPTDHZZSSSEWBYGLDFOKCXGQGIZLOFMUKJZIJAIBRLSVNTIHXLKCIYWCAWKUDCTDELTCMIPDGKNBP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EPACQRLYOQNBKHJMBZMGGBJJTBENOUNBROOQVWCOWBDEJVADXGSKZEUZRYHITYQFGXGYTCHWHPCEVVPVSLWACAXPJECHYEGHOQCPXOZRTVDZWTKXHTIWFRQSCVYBXJZGOIRYNETMSAKLOSVWWQXAROPMS");
    tmp_msg_0.sys_type = 181U;
    tmp_msg_0.owner = 59543U;
    tmp_msg_0.lat = 0.40055141477021594;
    tmp_msg_0.lon = 0.5150287199084201;
    tmp_msg_0.height = 0.14271451785304157;
    tmp_msg_0.services.assign("FEWIDZKLICZRAGWJTFCSVWHHPGXFDPOKMDRPGONBQBNBSJFVCUOUCZYBOSMCNSJMSRYAJWJBFQTPZYQUZTPXDYUISNLMAEKIYLTVGAYVIKSGLILZHAXNHXFQNGWXEVDHUW");
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
    msg.setTimeStamp(0.28361766081677486);
    msg.setSource(3050U);
    msg.setSourceEntity(179U);
    msg.setDestination(21206U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("TCLCOFGTORVFHAO");
    msg.predicate.assign("ZAQFWKBNUXCGNMD");
    msg.attributes.assign("XIFHGREUZWZITWCOVGQNSSBILCZZEKXMFVMLCRUUHLMYKPQPBYMAFGKNRICJYVJAQQLIHMEHMMGCZGSYTBLHPQWDJIUVSCAEOUDMQBPFOFURWWQHQIDVXOJNPPHCEDVGBTUOXUFTTRYTYWOLJAWYYDJBKBRBKAFSDOYHOIWKKNTIPMEXKPPFJJQZRTQSAKXRZA");

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
    msg.setTimeStamp(0.5211538776426093);
    msg.setSource(9680U);
    msg.setSourceEntity(111U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("QZCNHLLZATVGBSCXUTRDQYJKFQRJWPXZL");
    msg.predicate.assign("AOPUXLJLIFECCIPZRPFSSQDJHTPFOJA");
    msg.attributes.assign("PPABDEDYRAKEWPEYEOTDZFMHYYSDTZXLGVVBDYKFYXOWHJCHFOWWJFNBXZHGKEKMKLQBRFQVDAFHAITJLDTKEASZLCELUHGSITBMRPXCXIVTROJBJZUUCNMOPJUIOLPHDPNMWONGFTBLUXUFXADUJEWOZVQAYKVSXBSCYRQAVTPPGCKGXKDZMO");

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
    msg.setTimeStamp(0.2789887383937185);
    msg.setSource(19410U);
    msg.setSourceEntity(200U);
    msg.setDestination(51347U);
    msg.setDestinationEntity(43U);
    msg.timeline.assign("NZIFPOYCCUPXPLOTZKCHYXEHAAGFSLOKHWNRQKUSQCRRJVEXJSUGWOPYHQVWDZLPHALBTAXAFLQJCYRBPWOTWJDTOWRCUIFTVCOVTAISGYTU");
    msg.predicate.assign("MSFXUZTTDUCBJUVWHYCIDPDSQAINFTQTAMMPECLAQGQDNMSZVZCNMNXKKZLDRWGJIQWBVDRH");
    msg.attributes.assign("FBQSJJHPUAPMBQGWDRKYXBPXFVIUZTYLZNJ");

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
    msg.setTimeStamp(0.3020269617320329);
    msg.setSource(13752U);
    msg.setSourceEntity(234U);
    msg.setDestination(29383U);
    msg.setDestinationEntity(71U);
    msg.command = 158U;
    msg.goal_id.assign("BABCSOYTZPHMKSF");
    msg.goal_xml.assign("KIIWBWIDPNLUN");

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
    msg.setTimeStamp(0.001531659687022513);
    msg.setSource(28954U);
    msg.setSourceEntity(238U);
    msg.setDestination(33796U);
    msg.setDestinationEntity(104U);
    msg.command = 226U;
    msg.goal_id.assign("ERBKPQEVDFSOSBLTIXTCDWHENKLCKQBRCUUUEVJMAMDIGPNHRESUGAQVRJTPOLCFYLYVRNHMNG");
    msg.goal_xml.assign("ZBCDRJAMOANLJLMPQDPGGVIDAVCQZDYXZUYUKCJLTY");

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
    msg.setTimeStamp(0.6801315874197253);
    msg.setSource(45668U);
    msg.setSourceEntity(74U);
    msg.setDestination(54953U);
    msg.setDestinationEntity(70U);
    msg.command = 233U;
    msg.goal_id.assign("BYFGWPUPFZNZOHAJOUYBYQHODNUDBPXEASPCJCVHIFECNVLWRKYMNURDRHHNJ");
    msg.goal_xml.assign("EMMRKHYKSCTCYXSDBBNUDLJDDXJSFMONLNYZDRQFTWQQXKETHCULZXROIICFDMDYBW");

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
    msg.setTimeStamp(0.016795597651579897);
    msg.setSource(60124U);
    msg.setSourceEntity(130U);
    msg.setDestination(18350U);
    msg.setDestinationEntity(146U);
    msg.op = 240U;
    msg.goal_id.assign("ZJAYJMDWLYGHZPHBGXPRXBDWZMWLYDSCEGCJZHJOEEOEYMDEEKMHOWVWNQIIIFKTDQPPKXXSULOIVSBDFXVQETUCPYCETRDGFCZACVOZFGMARRYDLJJTOVAKVACLFHAOYICCZAGNRTSQUBOHFPOBZWPHNMUVUSGDQVRLUIQQBKUCSTIWNUXFTWJBBWYYLVSKXVBSPKQGXQFMJAEJRHSJXNNOTUWKLFTYMSFAZNTRUA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XQHPBUPOIDVOMVWDAVZANNVYITFTFYVPBULRJKSLTLQSZUQRFUREKJHHQCT");
    tmp_msg_0.predicate.assign("JANNAJBULQBASCVEFWPODWDZZBAHYHFLMCVJTKHWUIAZXDNUGZQXWJMNEKNGAGFHMGLMDLQSLUKKIBRGVEAPOLRKSNVZYKPBWIZUSYSOZQREWCGYNIYERLCVKJDFCWQVABIQRTSTADKBFFZOWYXMICCDTHSBDCPEEQUBOHMWIOXTKTIPTWMFEXGOZCEJBXTETJDAPJNILPMGCVLJSPIHYUYQRSTSPQHNOXMGQPFRXGXVNHOMR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WKPVOTLKALXFLIJPUBYURXIQREJFLSOKWSZNOZAECGVEMEDMYNJZDMYOMNQJSTHDBCZGJQSNKPNM");
    tmp_tmp_msg_0_0.attr_type = 132U;
    tmp_tmp_msg_0_0.min.assign("LOWWDAAQCSBMJAKYXZSNJGLXXKCTOGCEMQPKSPPZHTAADSNNNDTYRAESGFOWUDNJSLFVT");
    tmp_tmp_msg_0_0.max.assign("DUUQQDSGMJEXMMPKGFPRXOAMOAUAYWZOCHOECMBBYPZVKJPJXFAGEEACHMVUJFSCHKXBNQUIOLXWAGE");
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
    msg.setTimeStamp(0.562943939227088);
    msg.setSource(60757U);
    msg.setSourceEntity(106U);
    msg.setDestination(57656U);
    msg.setDestinationEntity(131U);
    msg.op = 52U;
    msg.goal_id.assign("TTVSBCDFKCXAEUGOYSYPYPXDBTGSODBOCFXLZWBYYUGVJUYHEGXJQIFXLOJFNUIACWHXULHZCINENSDRZLETUHWINDSRFYDEIWIFOMFTKQVKWBIVLPCPOTVKTQSGEHZQFAPSDCVOLVJWZNKDJOZTGPATHAQBNEDMQVNDARCRUABQCIKMHWRFMLECZSNMOUHRTAGGFERBJXYMNLBSLMYORUNABHKJPWPXJRS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TNCGLYNLMLZYKMZIXERXCCOHIREGUQKVQSOZNAWGGVUOWTPZAUDTNDDBYZYFKZESDUYRLOHUEYBZSXJQVTQKCJVTIRAYCVTGCFUUBFCNFKDJVOGRWGOIJKAQAHMTLVNZLBSWYRPWPPIOBAKOJOHAGMYXDDGGKBLERHSESXSFQRDBDVVYXDBLEJXNHWUEWXEMPTINH");
    tmp_msg_0.predicate.assign("QSSLLICIQCNAISISULHXWYTZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DUDGKOAWPIZ");
    tmp_tmp_msg_0_0.attr_type = 88U;
    tmp_tmp_msg_0_0.min.assign("PMKJMBZCFDQIEXYSHEMVDRPURTXGNFRLWAZCJXRNIFVLWUKCOFYQTPKXCTRUOOGEYNGVQLXAOQUYADTUHLRGSZNLRTFELLNAVNMHQKACHRXEZKIOCVUVXHFGBWSKJKMMGAEOPSTJVUYGDFWMVQPBGIDVFKYOOEZXNBTDSUVRFJLDYCJQCSAPDEUZTGZESFNYCIMHOHWQWUPDYJJIWBWMOKBABIWBDWPPARETQLQKHPJJIGSNH");
    tmp_tmp_msg_0_0.max.assign("YQVVUUMYOLWGUQUPORKGUTRIIBXOYEHBNRNBHPANZDSZGJJGCGXBXRKVQYWACKBMDCOGMJRXNJTCSKCHMMTOOGNFTVLLFRHQYKQKQMXUVGJSNRKBMYPBCEXMNRSOAISREPTFPNDVOBZIPZAUQEDDOZIYLCGPPLELJAUYDISPTIFQWSMLNFHTZFQCYVHGLHLTUKJAEWJTWXAOXDZVJHAAZJFDEQCWLEKSWB");
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
    msg.setTimeStamp(0.6581494744320892);
    msg.setSource(24347U);
    msg.setSourceEntity(213U);
    msg.setDestination(54030U);
    msg.setDestinationEntity(95U);
    msg.op = 103U;
    msg.goal_id.assign("TBFAQDKQVYDLIPLINZTYHBISYCXCEGXBOSGBSEIDVHZSDGXYPK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EJTMMXBYKYYDMLUJLNIHUNVZHHWZQFSOCGJZHNXVQRBDFQBYYDSFUWYPZBJGZTHTULCCPPDWTSXQQFUQRHPGDWWCEGGDXWAXKUOVHSRPHCGXEBIFNIOGLNGPKHBAZLZFLKIDMQAIVOVMSQNGVFWTTCLEUDUDCREBTMEPOAXWZIBJAKMKYSOJVVBNYSLKNQQCKMPWENFAMAJCKOZS");
    tmp_msg_0.predicate.assign("FWODXVRFRSECXMOMZGLBZKANWRSAMLYMDPTTTBEAAQLBU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BVPESSLDHQKXEOJTGSKBRCSWLTYXFBNQVOEAPAPQLIOQPWHELVZIMZMEWYSRLOZJFMMTNWGICCSNTNKMYKHIUJCWWEZPZIGQFSRVNENGYGXOSFAVIBLGGYPUJPKNAZCMRTDYWJCXDCLZQDUVYREFFFNLPTDHFVTODOMZACAKPDULIOZGUEXUFQHKWCQJTRYADJBKTXRRVKGXMZELAOPBYBQVBVKDXWXSHXNUNHBHFCGIUHDAQ");
    tmp_tmp_msg_0_0.attr_type = 107U;
    tmp_tmp_msg_0_0.min.assign("AKGDLOKNBXFRKFXSVRGNLIWZFCPXQBOHRCPFUVHKGLCQAMBLHHFNJWIEKZUCECKJMHZDUSUDBDHLUASJEZXKRLICWLMZMIMYUQTOQOPOQLAAOBQMRJMPDNAYSJYFGINETWFWCAZXJANPIJRGNXGVAWHEXJPPEMBFZFBQGSBUTQOHSYDZZEFWSON");
    tmp_tmp_msg_0_0.max.assign("PITQMEUYTKCJSNYDUFVGZKQFYYXAZPRCMBMEMPBSOWDGALLSWVNLARFSQRCQTGXEQJVBXEQUNBZIHRBOUDDZBOHIASYYXEVZLIHVDIOVSDPNYGFMBQQHVEPXSORYOKEQWURWZARKLNZTVRTIACXNZMPAXLLKJTYIYLGOWGNCNWWNLITHETGKIZNJXMAJVJLRWJFHZQMDGMXBUGDXMOCSTEUPOCRDVPHBWUFCHSAUP");
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
    msg.setTimeStamp(0.9763901832788863);
    msg.setSource(34497U);
    msg.setSourceEntity(174U);
    msg.setDestination(13259U);
    msg.setDestinationEntity(24U);
    msg.name.assign("KGBFCPDHMMNYHLOEIJH");
    msg.attr_type = 158U;
    msg.min.assign("CFSDZRLONMXZOPKOILYGMIHJRTXCET");
    msg.max.assign("JOPUCJBCGNCNJVFQXDJGQWQLDYHTRKUEOCHPIECBJBGPWOPXVMZWAVLQUNLIEHALSJUAPFOIYWKHWSBXABJPFQJCZMNWMEKGILSZYXKRMSNKEFFEFLYBDQVRUZLMZHGFWSUIPIHRTCPDRMOERXSBMYAOGWVMFILRIZVOXAJEKOBPYZYJGVYNTMQINBDNRWHROSYSKSTTZFUTTGKHIOTGXRZKCQVXTZBGAHVCUAWHENTKVDDSUMPX");

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
    msg.setTimeStamp(0.4047134561237564);
    msg.setSource(59507U);
    msg.setSourceEntity(151U);
    msg.setDestination(26484U);
    msg.setDestinationEntity(125U);
    msg.name.assign("LNODBJKLGLMDMVPCHKTMKMIIYHJSWFFNNFDSLJIUAYVPBFCZADZYQCBOEVQQLHERQSOJARHHRDEQXUPJYANDIXIABVRUWVNQWFVYJTYZRRPGCRUCAZKZIOFMJNOTUKEFARWSGIGNSAHFYLKFISXDSDZNGBMEGOJVRGKPHMYQWEUEGOXFSZCTGPTNJZMZEWPOUCEEHXIXTHXDMJPQNBCXOULKUVUTMAQLKPLYGVRBBWBBCYILCVOHTAW");
    msg.attr_type = 140U;
    msg.min.assign("RMVIOWWIDBBXTYAGCDHQMVQRKYIMBGDPPIAYAUORBSSHMMKPHKAFRWJQAHZXPUJKZIEEFFFXTCOKSJDUZZYDQCFSJMHYFHDUCVGQBKIIPWJKYZDSWGRDBFWXAWRNHUYLFELLXJRDHHKEGCNCMIBLPORRTEUPSTEVXISTVNZOWVGLVUPEFYWQNNCGLNZEXBKJHCZINU");
    msg.max.assign("UMCCDCXLWNBHVEXVAWDHCKFYSKSOBGMQTFQGJZUOORBMHZMUJHQZJKEOKJJLMUDHKVBBIUAVSUBYFWELMJPWUXJPNNPTFOZRQEFXSZHNKLKNDZEFNNLASOHBWTIOYWFRKRWDDYCLZJPOWLQRISFEDEGYRDBNLIYBVCAQIVGPKGAVXVJHLWVOSSXTEHRTXQUIPTTXGVFGYWTE");

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
    msg.setTimeStamp(0.47428123436001646);
    msg.setSource(31347U);
    msg.setSourceEntity(12U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(106U);
    msg.name.assign("DTDBBHDJVGWQBJUOZOLNHESSMCHMAHTHFPGNOQZOPMGIXRIZGSTMAFLZDLAFMKEFQYULPSFBGOKCDXBSTFOVOCEVYEXLNQAWFJKDPTCQNRAWJTBVWWLNEYZEUPJBRIQXXIUHMCJNSLYZYVDRG");
    msg.attr_type = 217U;
    msg.min.assign("NIXAEXZWGTTBVMQICSQJAJDIRCVICGAOUQYUYJKPBORANUDLIDWKNMOPDLXEZRICCTSPXBZTWSDELYPLYOHVC");
    msg.max.assign("JVQNKXPFNPCVANYQBYGYVOIXUBEWFWERZOBQKGSMVJDGFONZDDPJSKFSDMWIAFMXEKNXGYOTHLLIWLKFUEDLWVGAVZSURLTGMFOAIRPSUWHTIQNHVAEXCHHDAKEAZJVHICUBYXXVOGHQEIFUTGJZWUQRBXZTOWLTUIUYCLNTHCHK");

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
    msg.setTimeStamp(0.9104615431491359);
    msg.setSource(26176U);
    msg.setSourceEntity(146U);
    msg.setDestination(5744U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("OTXSHJMLGXGLBBWEAEDSQUUXNFZZBLPJNZDLRHCTLOTGQDCTZUWREAPXOKBLJWEFHVIUKTABEHDERDVTQAFKIFXAYVPMGMFRINOMZWJSCWLNRXRFKNCSHQQZJJIQUXTKNITDWKVGBFYLZUYUGRWXDUBVVYYAJPCEEGMUJVNKAM");
    msg.predicate.assign("XWYWQGUTFWPKPBOHQWHUXTAESXFGDRIPHTCLVMOINLCBPYIDTRBITLDBQZIHBTKEZSWNDKLTPZEKZEBXESREIALAUSCELTNAGHHGDCFYDMWFVXRUNFWMUXFDJFXMZQPGWNDDJRNVCQSQQLBKZEOCRVZVZGOIVGYKNFSJXSCVMAHGUYTNV");

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
    msg.setTimeStamp(0.6303488208697922);
    msg.setSource(22587U);
    msg.setSourceEntity(96U);
    msg.setDestination(8603U);
    msg.setDestinationEntity(38U);
    msg.timeline.assign("NAUQLQNLUZORLJPNAFIHOPFCEJUDRQXFJRBYTCHTDIVTBLCATDMQUHOHXSFKVBLVONZDSTMTFVJXSXBOJRMMWZKXRDDBDBFGKOECQUYHMIJHEUZCNZRUPEPNIPLMCGFHAPKVVUNTWWCTEYJSJWYYBGDEFMELOQESSXVPGKRDSQKDBIGACPZFQX");
    msg.predicate.assign("IDIQBWSZXADLESGRHNJLQKCMJWYSEFDMUJNPGZVLVVBXIJKNTFTFYLKUHPLGUVQDQLUJPBV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EXSREDOLCDVGCPACPFBRYMFOMTPHOQRVXSNYDOYOQLIYTOSSVXKAE");
    tmp_msg_0.attr_type = 167U;
    tmp_msg_0.min.assign("LEFGTHCXAANWAGREIETMEFVZLJBQOVLURSJDJHCSYBWZSAWJGNRQTTYLBLJMBSABSXFFYPITWMLWONTZLUKMPMDVLELPAOPPTVDQZLTYQVXUQKAFKSJBHZVRCPVBUINIPHOEDIWOSKGHCPKDJGNNHXGZCK");
    tmp_msg_0.max.assign("DWLVKUIAHVTPMBQDHXDLKQLQXLLQKAHNWCKZJPIZ");
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
    msg.setTimeStamp(0.5797911211938135);
    msg.setSource(17021U);
    msg.setSourceEntity(99U);
    msg.setDestination(63958U);
    msg.setDestinationEntity(115U);
    msg.timeline.assign("XGBOUZPSMTPRIPGQBMMKUUCONBIUOHTJGCWLOLXPWPSEAXRIDIHGFVVSQCRVWVXFWXQIJTKHSRDPCHDGYNJXYESKTODLZNWPBZTDGODVEFIAQNEMLTVFRHOHODAYBBLIXEYKKBSXRRGUZDNMUAFQKZHHYA");
    msg.predicate.assign("RTVDOBWARDXGVIAPTURXKIPLOGTPFEANWULFYDIWHEIAYNYQQYZBKLGBLUQOKUSOQTIKPFCGLHRSWLCMCUXZVCPQFJKTALJIIHINVNHOAJZCPEOPGAYSVOQWCQMNNRJHXVCJHZTZOBSBUTFYVXNKMEED");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SBZDZDTYZFCKCQIQDYWXRQENUOCXISUGOGHOSLMAWPUAYRAWLIJGJOFAMDQPDUHNPRYUBXCSNXNHQZIVIRGMSFELNPUXIKQLKKGBMAJSCVCKMTAWTDUEVZOGOFXB");
    tmp_msg_0.attr_type = 72U;
    tmp_msg_0.min.assign("NMHBWAHWALGKLHIEQSALZXTUCOYKSRLOQCVJMUDJZFGIFKWJJRHYHXOYUYNCVXEQZSDOJITFUBRAPFPWDKPCXSEXIRXHQGTNEXVZPNXAGDNMPWVICJAQOFPNURBMKBSYKWNSETFGWLGQIRSVQOKULTYQNEWOMEFIWBTBNRGZQBCLSDMIUCTYFZDDOEBJWTYZHVKLAGVZHPFCRJRLG");
    tmp_msg_0.max.assign("YRLHCIZXSOQJYHUMZLXAETWDAMP");
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
    msg.setTimeStamp(0.029794097914761064);
    msg.setSource(39211U);
    msg.setSourceEntity(84U);
    msg.setDestination(31227U);
    msg.setDestinationEntity(93U);
    msg.reactor.assign("BRUZJKNPIJPIEAEKQWWVDIEVNMTHDPJTWVQLFTGPMLSNXHSZLDNYUECVQPEMMWBIFFBIGGSCOGMUAZKGTLFZXDTKEDBOAGEADYBHUCZHPAILXNAIPCWCKHKHSIKXCCYPCYXNWBMYONFQALJFVVVYHZFRZBZOMMQDDCTUPSLSKFVXEZOYRJYNSIWRVRGEUGOTAOAJGLUARPFQRBJSWROLIHUKHZJJQJNKOQ");

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
    msg.setTimeStamp(0.16785316357109503);
    msg.setSource(58594U);
    msg.setSourceEntity(133U);
    msg.setDestination(8464U);
    msg.setDestinationEntity(193U);
    msg.reactor.assign("OOLXNQIILUOHHNDQRCHPFVDSRLAGHPRCYZNKJKMSLLZCKHNZBCWVDNJNEIDYGEHBCTADZCTLMZAMXZSNBGWDQSUYSJIGETHTMKHQEFLJHFEP");

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
    msg.setTimeStamp(0.12073408542624964);
    msg.setSource(23627U);
    msg.setSourceEntity(14U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(224U);
    msg.reactor.assign("MXBJFJSLAVHCXXDBWWUPFDQBJSPUKDZZGQSMQNHWGXLRFKYGYKHSAYICRXUNZCXDKQDFYAPPGMOXXKIPSQGGHJTBWKEQMULBPTHEYM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JDKPPRBHTDURYFSHSMNARJZSHNRWUDLHNTZVEOGESXWAUCXDGJMAGCVALIINKRMZCRXAFYNVBZFKSHQGVYXXDIVMFYYRKPTZEVKWYPAWZCACMQXLXILBJBTIJFGQWOUABIJYRTJBNKTWGJYCEDMVSFOVNZGBQMZORLDGNOWQUOWQZQAVEQCBOFEPHNOFXPYUSDSQJIIECRPHETTWCLHKTDXVQLPMZUTLXKOGEMUHUM");
    tmp_msg_0.predicate.assign("LVWZRXKZZGYVXVSPFWIRKMNPORWLKPHAWNFYCQEYDACKDQXYOECRDEDZHXFWMAMRZGGOOXETFABRWJCHMIYBWUFDPPIENTHFUCNFJBFPBIBJLQDHJQFSSDSNCLXKHVVKZLOMTLSOWMGCVRKOJTY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PTQDOJVJWWVICZSLJDHCLVATXKTZZYELORYHKQCNLIEBTYLFACYNJZBZPMWJXJFKSLVMQRPRYSDRFUPVBUYKRCSOHLQORPHZMXOUXNNGQAITDXPXIGQNEACNXIKSXTFQAHQBVDZTGFKUVVMXMBIBUJDFALIMEGLSEWBBBTHHQGIYGFEQGPFSHWAYOWNCTWEYSUKHOJGIAOEMEPDUNNDLOKCG");
    tmp_tmp_msg_0_0.attr_type = 189U;
    tmp_tmp_msg_0_0.min.assign("LDXUKIBIGOCDPIGOFLQJPPRBQCYPDRXMVLIOQSLNHXVYELVVKRLGNWRZKPAADLHOEDSLXKOFTXBTVXMOUAEHQMDNAZHBNSADIQBPZVVBAORTTCFCYHFZIZNKMQXYCRIPCYFWNUPOAHRKGMUZWEMJCBJEYCFNJSPFMLGRCIGUEETMWTNGDIRENESBZQYASYTXATKTKUMVWHHISWFYZTJUYRUGEQMSFXSL");
    tmp_tmp_msg_0_0.max.assign("RBPKYWVXHQONMMFHIPLUPZSVONZBVJTETZTQSUJGYRIWJDBQRDAZFA");
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
    msg.setTimeStamp(0.028027132756230255);
    msg.setSource(54165U);
    msg.setSourceEntity(183U);
    msg.setDestination(48274U);
    msg.setDestinationEntity(183U);
    msg.topic.assign("OMEMJAXREISLLDXUDGYJSBJRTUDFLOXYXSDRDSEZYKPHQAWJYBEEPHGCIXUGPKJBRCFYHLLYLZMAPZVQZGIIYLMIDOXLJFCECPBVIKOO");
    msg.data.assign("IPQATVCOKNAAMXQQBWAVYGHHYULZHCEQQFGVPDUMVEUKNXXDYNOZPBJXHRYKUQNKZRENBCFGDFTFNUDAYESJSUKJTZIGKOHDDBUMPBMSDGPIZBKUWIXXWVNDLVWHIBZRJDXONMJJLQKKWVTYLRAFOHYVSXSRZATFNTECLGLVAPSRBEIMCKFWSWPSERURGQYHGMABZFITPETZJJEIYPSMLT");

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
    msg.setTimeStamp(0.4225299886192203);
    msg.setSource(43707U);
    msg.setSourceEntity(87U);
    msg.setDestination(3207U);
    msg.setDestinationEntity(254U);
    msg.topic.assign("KXVVEKWCJRLGKNHXWWAFQPPSSPCOFAHZTAPTELKFL");
    msg.data.assign("EAUZXKYYOSBYGCWQQRURJLYKGPWNZUADPZXEDYYNOFKTVRLOJYEJWVQWIQEAOTZBQUUSFKZRRQGVLLAAZKDMLSSPIAMLHFCFCCCDANSNWFHSCVJGGDIDTMXJPSWRMRQUXEQACAOQHKUBTRBMKDWJHVLZMRFRGDWONDOFPMGIONWSBPIJKBZBFTVBITLNAWEPKPTPTFBVTXZMXVGHGXMUDEJ");

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
    msg.setTimeStamp(0.1710451608482153);
    msg.setSource(34864U);
    msg.setSourceEntity(225U);
    msg.setDestination(7539U);
    msg.setDestinationEntity(145U);
    msg.topic.assign("MTEYVSWUEBUKUJGZGNVEFDIDAHNMYBLPVBVMTTAUNUGWHXPGCZHDHPRRWZAEIQLPQENPKZVQIJEVMTDTSMXLKCHNRYYNFIGLDSRUXSRCFYKFHZOXOGINGRKMUOWYAO");
    msg.data.assign("ZFYNBFYBWIXNXGAGXCIPEOSRWBHVVRHYEKCLNBNVMIVHDQILCFLYLSYZENKZWMANXHZUPRZQCRYLMDTRVNPSCOEFWBEBATFOAONJGQTHVZXKSTHVK");

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
    msg.setTimeStamp(0.8303111652918697);
    msg.setSource(2922U);
    msg.setSourceEntity(202U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(188U);
    msg.frameid = 4U;
    const signed char tmp_msg_0[] = {-34, -40, 78, 91, -94, 122, 48, 91, 82, -104, -63, 73, -37, -100, -120, 83, 111, -78, -35, 75, 45, 73, -45, 3, -75, -6, 93, 111, 68, -2, 115, 13, 49, 109, -20, 67, -79, -23, -110, 61, -104, -107, 71, -81, -13, -78, -7, 105, -124, 101, -111, -87, 5, -58, 64, -118, 46, 12, -125, 106, 18, 20, -95, -86, -96, 10, -111, 89, -29, -52, -124, 100, -114, 124, 122};
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
    msg.setTimeStamp(0.6235028100402806);
    msg.setSource(41240U);
    msg.setSourceEntity(111U);
    msg.setDestination(42302U);
    msg.setDestinationEntity(154U);
    msg.frameid = 215U;
    const signed char tmp_msg_0[] = {-47, 40, -116, -55, -73, -127, 119, -80, 104, 66, 81, -8, 110, 98, 16, 91, -15, -124, 27, -98, 116, -42, -75, -71, 101, 84, -93, 119, 70, -93, -76, 31, -67, 29, -36, 73, -109, 81, 11, -47, 24, -74, 24, -99, -67, 35, -13, -39, 26, 0, -89, 118, -108, -49, 63, 117, -128, -83, 46, 79, -64, 42, 102, -14, 90, 69, -68, -80, -101, 26, 126, -106, -88, -48, -105, 59, -122, -93, -84, 18, 5, -58, 111, -44, 75, 94, 27, 99, -92, -32, 96, -122, 83, 55, -19, 11, 53, -84, 54, 122, 115, -80, 72, -42, -89, 117, 3, 36, 39, 50, -44, 101, -93, 68, 98, 44, 100, -45, -88, 60, -102, -30, -7, -116, 61, -10, 38, -69, -122, 115, 123, -99, 34, 120, -116, 8, 124, -24, 9, -56, 62, -38, -119, -73, -113, -101, 89, 30, -2, 43, -117, -80, 94, 79, -94, 3, -46, -87, -118, 106, 93, 87, -38, 4, -11, 107, 24, 76, -61, -121, 93, 86, 95, 86, 111, 33, 66, -101, 100, -110, 27, -11, 92, 111, -86, -123, -16, -69, -95, -106, 106, 31, -35, 117, -88, 42, 55, -48, -18, -48, 9, 28, 61, 0, -114, -1, -33, -15, -53, -110, -28, -28, 74, -74, 53, -19, -18, -13, -50, -123, 93, -45, 120, -40, -86, 52, -91, 20, 72, 101, -37, 4, -67, -119, -41, -63, 63, -60, 125, -38, 99, 23, -92, 103, -24, 99, 104, -48, -114, -83, 75, -52, 13};
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
    msg.setTimeStamp(0.5095183051578496);
    msg.setSource(5087U);
    msg.setSourceEntity(110U);
    msg.setDestination(6196U);
    msg.setDestinationEntity(129U);
    msg.frameid = 184U;
    const signed char tmp_msg_0[] = {93, 14, -2, 96, 120, -105, 1, -53, 103, 21, 40, 94, -115, 125, 1, 45, 77, 16, -36, 69, 65, -100, -7, 89, 31, 20, 13, 61, 35, -127, -93, -121, -30, -11, -46, 10, 33, 40, 94, -57, -112, 45, -117, 96, -80, 61, -81, -105, 61, 122, 18, 43, 88, -95, -112, 85, 112, -128, -87, -60, 57, 24, 105, 107, 88, -22, -78, -123, -98, 104, 40, 51, -48, -15, 20, 28, -62, 82, -109, -40, -46, -88, -27, 11, 47, 28, -93, 17, 47, -18, -39, 121, -118, 93, -124, -92, 101, -116};
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
    msg.setTimeStamp(0.09328690156574071);
    msg.setSource(47408U);
    msg.setSourceEntity(41U);
    msg.setDestination(29322U);
    msg.setDestinationEntity(43U);
    msg.fps = 56U;
    msg.quality = 220U;
    msg.reps = 14U;
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
    msg.setTimeStamp(0.23520026994845433);
    msg.setSource(53564U);
    msg.setSourceEntity(18U);
    msg.setDestination(15520U);
    msg.setDestinationEntity(83U);
    msg.fps = 208U;
    msg.quality = 227U;
    msg.reps = 199U;
    msg.tsize = 239U;

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
    msg.setTimeStamp(0.8926129317059025);
    msg.setSource(61369U);
    msg.setSourceEntity(33U);
    msg.setDestination(59587U);
    msg.setDestinationEntity(64U);
    msg.fps = 242U;
    msg.quality = 238U;
    msg.reps = 48U;
    msg.tsize = 72U;

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
    msg.setTimeStamp(0.7025738845694207);
    msg.setSource(50077U);
    msg.setSourceEntity(112U);
    msg.setDestination(39960U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.4850610226220685;
    msg.lon = 0.602890217657783;
    msg.depth = 42U;
    msg.speed = 0.4026155656815452;
    msg.psi = 0.11521817252909416;

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
    msg.setTimeStamp(0.6537966984135721);
    msg.setSource(23314U);
    msg.setSourceEntity(159U);
    msg.setDestination(11064U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.2849007158740192;
    msg.lon = 0.2991302829702104;
    msg.depth = 77U;
    msg.speed = 0.16404824933843332;
    msg.psi = 0.9745587570430264;

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
    msg.setTimeStamp(0.9024771033304503);
    msg.setSource(52434U);
    msg.setSourceEntity(100U);
    msg.setDestination(57658U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.30437514930467646;
    msg.lon = 0.7453630552127554;
    msg.depth = 59U;
    msg.speed = 0.78716699859966;
    msg.psi = 0.38168620473612513;

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
    msg.setTimeStamp(0.6666071133252885);
    msg.setSource(54307U);
    msg.setSourceEntity(53U);
    msg.setDestination(41108U);
    msg.setDestinationEntity(165U);
    msg.label.assign("MQOUQLFZGHPSYSYYMWSBIEFOVRNNLPAJHMAMIWSNQZZCODXOABFOCCDMEBUETWCIWVEDLHZSBHHLNCBYROMDERFQRDOUUJEYMQYTQSDJXUVWOJFCTDAXKUCGSYQIHPKWYXPLJJMFGLVTFWEXRAUAIWJEUTSBVNLNKANRILIIIOVXRTMQLUVGZPWXZTHMCARXBGBPPTZBBEHYADVIGHPOGWLXFFCNENAPSTKKPJH");
    msg.lat = 0.9671303077965061;
    msg.lon = 0.6438294755378092;
    msg.z = 0.9470519643989621;
    msg.z_units = 32U;
    msg.cog = 0.07694874094702886;
    msg.sog = 0.1853172632601291;

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
    msg.setTimeStamp(0.6013635591621732);
    msg.setSource(43306U);
    msg.setSourceEntity(123U);
    msg.setDestination(42583U);
    msg.setDestinationEntity(187U);
    msg.label.assign("RONHYYWUQTRLKJXVZDUEZDLEHNFYTGXTILUP");
    msg.lat = 0.892793112287393;
    msg.lon = 0.2618958865913539;
    msg.z = 0.9816270064663855;
    msg.z_units = 90U;
    msg.cog = 0.3077226165456196;
    msg.sog = 0.419877325358775;

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
    msg.setTimeStamp(0.7045327471414191);
    msg.setSource(32942U);
    msg.setSourceEntity(85U);
    msg.setDestination(48366U);
    msg.setDestinationEntity(114U);
    msg.label.assign("CMVHVTVGOHSORSGQLPIXJLUYHNIDSQBPPHELIYABOFRROAQMOAFFDBAPBUQNEVBIUCQDJLPIZZZOCCLOXYWNJLSDYFZKNGASTAAHTGSUHLSVLYJCAKFXDVTTQYXEGJBKWDZFCUIPNWMTUNXFRFKFNNKM");
    msg.lat = 0.0259919033063859;
    msg.lon = 0.38490323266963544;
    msg.z = 0.09065444937061773;
    msg.z_units = 243U;
    msg.cog = 0.5924938366873985;
    msg.sog = 0.6678526570518025;

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
    msg.setTimeStamp(0.37122776069200636);
    msg.setSource(39309U);
    msg.setSourceEntity(33U);
    msg.setDestination(23310U);
    msg.setDestinationEntity(229U);
    msg.name.assign("JDWILNVRADOPAHFHXIUHBROMSKDKCJWHYPCXJWXNIBCCTAUGLTRZXWNTKUMVMXGVYPMEDPEDBCTHQLYYMFDAEJNBSHTFUVJUHPVZPLQAIRWFSOVZQRNLJGT");
    msg.value.assign("UHERDBTGMYVIPKPJQQBZX");

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
    msg.setTimeStamp(0.16850209633501245);
    msg.setSource(33357U);
    msg.setSourceEntity(6U);
    msg.setDestination(22957U);
    msg.setDestinationEntity(117U);
    msg.name.assign("CHJZUZKJYNOMHROGMMCTMMLNNVZLRPBIVYADLZIDHABYNYFG");
    msg.value.assign("ODBTFGAHDNVYGQDLLIVNKEKAKFMCDOYYQBOUNVTLNFAGQTRBSZCKHURHMCXCGJXYX");

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
    msg.setTimeStamp(0.7420927863508013);
    msg.setSource(39371U);
    msg.setSourceEntity(250U);
    msg.setDestination(63819U);
    msg.setDestinationEntity(108U);
    msg.name.assign("WHQDRXBGTTBTKDGCQPWZSPIGZSTMMOSISVIDKXSZVNORZJXVDLLKYMLYYVSXOBGMESNJMQUIHAERDLYVAPUEZCTOQSWNZUIJCYTNBWWMPQZBTHNAAYHVOJRVJMEBNFBFGCEKKWHBGCUEKDMTAOFNUWOHUZPPRAVVXPN");
    msg.value.assign("TAYJVXVXUQHKSQRCIESFZEAJCSMPBTALYMVJWFLNFANDEBPMQDWEZMGBLURGCZTCYAQRISONCWEZYCKWLQSKNXWRLADXPOLGZXBIHNYGWQSUORHDHRFKELQFEUOIKZMJYYBADKUBNPHCRQWRZFVGUHJDRMXOSXPIZXHCWVZ");

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
    msg.setTimeStamp(0.865587415873764);
    msg.setSource(52454U);
    msg.setSourceEntity(50U);
    msg.setDestination(1399U);
    msg.setDestinationEntity(179U);
    msg.name.assign("ZFGPOKGDTJOGXLIYUYOSWHMTBHPINWNBPSGCLDDZJEXZNACHIMDQSKWQIIOIRGHXRABZWBRUOCKOCNFKOQTAWV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NYIOVMEOCEBAXHKDQPCMRLXLRFRXVSFDPNNGZTLYWPBNDZWSCAXDCYYJQYUWCZSIHNBVMBDKHSVQFVEPZR");
    tmp_msg_0.value.assign("YAKSETBCFEDDDXSZAOGXHIGRYYLAGFMSYNHKQGWULJAAOIQWEOOPCZWDSMJSBTNKRSTRXTJBRRFOQBSBJZVDDQALK");
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
    msg.setTimeStamp(0.8672742245177552);
    msg.setSource(19644U);
    msg.setSourceEntity(145U);
    msg.setDestination(33004U);
    msg.setDestinationEntity(246U);
    msg.name.assign("NXQCGLWCRLMJWZVYJXQUBFEBTNRIHOXLVYMXKYDGXAFBXP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CGLPGUFQXMNRLHAGCELWOMNEEYEYHSPBUJQPRSYFBVKGBDMNWYQEAYJAEWQIZFXUYMIOCFIJQOKLSVCDHBLLKCHNYBZIRJBOBKTUXGPAISWZQVVUPOFSMPWQOTALBLKGOPNDDAXXHCIUYNCNVKFKRABIQTUDY");
    tmp_msg_0.value.assign("BUNQHHOFMVPWUADEFNMPVAXYOZIEFGWGJBTADRVDAVINRJSXMRQOPKKONZCYFEAPOKLSLIOSKTUJLXGJNIETBUGVCT");
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
    msg.setTimeStamp(0.990783587735824);
    msg.setSource(47930U);
    msg.setSourceEntity(194U);
    msg.setDestination(62388U);
    msg.setDestinationEntity(252U);
    msg.name.assign("PAUXRYWWQTCURWOSTMDDKSCUTBAOMCWFZALCWUDPXBELKPZOBTPJAZAKKFNQSNINHVDKOQFLFDYGSMVIYVCHFQYGVWUFYBNZGQRNGGMDEYMBRZEABZGSGIJDBGRGNBUEQOEIOWUPZRUMRHBLEJPVWMIHXHXQKTFCHRVJQVUXDTQCHPXYKPESBGLLIJOJSMFKVIJIPLAJCSKLHENXZVXWXZNIRRDSSTCZOIWTEH");

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
    msg.setTimeStamp(0.9303444435096825);
    msg.setSource(54596U);
    msg.setSourceEntity(197U);
    msg.setDestination(54465U);
    msg.setDestinationEntity(249U);
    msg.name.assign("QLEMDPLZJVIHVKNGNYMETVPRJHUTLWGPRYBLESBURIWAENVQBEVSFOAWDJWDRYTYIRLJXISVOWRQTPKDPTGKDJOKFDTIHQYNQBHQPYXRFEQZUHKFLSLCMNTCZVCZGJUQNXWPOMKXCUNZUXKOYUHASGKGCFHRRMYKYGHEFIWBCRPNYPFTGIKVDQULTM");
    msg.visibility.assign("QCSMMTUNPSPRRAJHSVLZBHUDSBKVTUKHLYTHEVHJQMQLQKITAA");
    msg.scope.assign("NVENHBXXLIJADEUAPVEJVBKNTGDKKNBJXVHCIZYOQKLXBTQUPMYGYMKRMTQSIMNZWHTNCQUUPQCHAGVBOUZPSOFWDHPWFDXBBTUGKCWFSFRUPJSOLOIJFLIHAZMGOYBSSRLTWVAIZDAJPBLQEXAPIHSYUKEJGGOFQOEBFZSPNGZWUYJYVDTERZWMISQOMTTLMXNZUSIRAD");

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
    msg.setTimeStamp(0.22240440063932343);
    msg.setSource(5215U);
    msg.setSourceEntity(81U);
    msg.setDestination(55985U);
    msg.setDestinationEntity(14U);
    msg.name.assign("AAOVVRYQLMYELFMHQQWXXATVJOOODBIAKFYHMGZZTGOJXQTVOWUVNKWYSRGVTCVIXDSZHSAVRCSXAJLAYARKCGJSSBEZMJKFXCLWOFTLTEUYURWBNGKVYDPMWHQZTMMSZFULBULQEBPPIRFDQXNIFDNBPTIHKUALCJRSKYWZMHPRNIDCNEEIRDHWCUNJPB");
    msg.visibility.assign("CMNHUGBSHWZSQYINAZBUTBTAIGVSODCAICTKCNFKVLMCKGULLYVWQQXKWLFDJZYYMXMVKWRBLMSPGBYCOMPULZGKJNONDKXVZAJTAXSWEFNSLNXXOPVCCJTUD");
    msg.scope.assign("PPHNKSUQWCLMMBGUVNIKFV");

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
    msg.setTimeStamp(0.017709680078912604);
    msg.setSource(25327U);
    msg.setSourceEntity(205U);
    msg.setDestination(56518U);
    msg.setDestinationEntity(144U);
    msg.name.assign("BSLOGYGSFLGCPZNNXEKDSTRVLIKKZDDRFUMRSRQOIBHINUMQVULBSDJOIWAHRYWHLKCKQFVWYUPXELXOVFWHYXFZNBGJGRIVUCAZGJJOUKKGEZWTZAWEWTQQTZEGVQTNMRHOSNDWQPXELPOITPANCAKBEXLXWVVTQPJYGIPMLMSEZQUVPAYCQABIDECODUJFCUYBTJPMHXUHBHRJFANEDSR");
    msg.visibility.assign("PTIPBVFUNLTXETGQIVGTGPAQ");
    msg.scope.assign("EXUHMXUNSAYQCXDDALBTXQBMRUCEZDBUMLMOPTKCSBQANHVHIKRHPKGVWUYSIZTTGKJKHRPZPBZXLHKYCSYAQLPTVWGFWAMSPTCPKWVEDCMNZCVLJXENDHBGEXGDQFTWYOOCFZJKOHYZEGPROEJYEHLIJIDWBNHXQDOFL");

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
    msg.setTimeStamp(0.42380440350501947);
    msg.setSource(31899U);
    msg.setSourceEntity(22U);
    msg.setDestination(24056U);
    msg.setDestinationEntity(167U);
    msg.name.assign("ZNLGTJBOWGPFSCPPEITAOMHFDZWGUKSHTDTKCYZAAJZBLHHJMZOYENXALKWLRGESFXLDUYPNLDLGHBNPDECWRGQIBK");

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
    msg.setTimeStamp(0.16417739140452015);
    msg.setSource(52698U);
    msg.setSourceEntity(70U);
    msg.setDestination(50739U);
    msg.setDestinationEntity(28U);
    msg.name.assign("LQGPKLAQJHEXNEAWAUKMDLYXOVFLFHFXFOOYCFYTKBVOPGICFZZELSAIHLCHUAYWNGIBXEHBMJYJEOFIJPUYROVWHOGHNSAPGQQCYRHZCJDQDIIZUAVUTDATXPBRJCJSUDCWLQUKPKHRYCVOKRZXXN");

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
    msg.setTimeStamp(0.7504836537497414);
    msg.setSource(22790U);
    msg.setSourceEntity(135U);
    msg.setDestination(17681U);
    msg.setDestinationEntity(188U);
    msg.name.assign("SOLYYENFSFKQCRPENOPNDQRXVOUAIRTJVSQBBBQMDSGWHUWKQENMDJKAHBOFAKNAZRHHRYETLHF");

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
    msg.setTimeStamp(0.37729087401717554);
    msg.setSource(24258U);
    msg.setSourceEntity(147U);
    msg.setDestination(47183U);
    msg.setDestinationEntity(54U);
    msg.name.assign("NBXXZHVJOFAROSBEXAFDVYEQGMUDISEJODWGELAPELSUZCCTTNGUUJDYT");

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
    msg.setTimeStamp(0.05020027512864711);
    msg.setSource(41606U);
    msg.setSourceEntity(162U);
    msg.setDestination(59843U);
    msg.setDestinationEntity(136U);
    msg.name.assign("GFYMBPDGZQHPRVOMJLSXODZAFAEUKSJNGAFWPXWKWZEFBQLHMTHDAGNOETXMVXFXDOZZQKZNEPGAVDTTKBCIENCIYCBTM");

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
    msg.setTimeStamp(0.9037808123882115);
    msg.setSource(54794U);
    msg.setSourceEntity(225U);
    msg.setDestination(16038U);
    msg.setDestinationEntity(26U);
    msg.name.assign("FWYLIGFHWWVAVKIVHLVRQCCQDGRBOWUBIPXNVXDNJDZRLLIEYVALUIUSMWAMLOZSDJUUOMPAJHKHCXARRSVTXNEPTKNDEMAZQEMFSGMKCPSPFIIRMLHQZGUCKDPFHFYTQOETRPYRKYWWULCNJBTESXVKCDNTHBGOTSLGAQGAMHJOKYKFTXWBNXUBZIYQD");

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
    msg.setTimeStamp(0.09105048510063873);
    msg.setSource(29500U);
    msg.setSourceEntity(191U);
    msg.setDestination(64590U);
    msg.setDestinationEntity(119U);
    msg.timeout = 3357342611U;

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
    msg.setTimeStamp(0.7810372364064327);
    msg.setSource(37852U);
    msg.setSourceEntity(116U);
    msg.setDestination(9477U);
    msg.setDestinationEntity(204U);
    msg.timeout = 903563199U;

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
    msg.setTimeStamp(0.4536959585843158);
    msg.setSource(19581U);
    msg.setSourceEntity(21U);
    msg.setDestination(33462U);
    msg.setDestinationEntity(177U);
    msg.timeout = 2186358587U;

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
    msg.setTimeStamp(0.21402332483467645);
    msg.setSource(34813U);
    msg.setSourceEntity(173U);
    msg.setDestination(1809U);
    msg.setDestinationEntity(90U);
    msg.sessid = 2885623706U;

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
    msg.setTimeStamp(0.5705650048108516);
    msg.setSource(53297U);
    msg.setSourceEntity(250U);
    msg.setDestination(6446U);
    msg.setDestinationEntity(84U);
    msg.sessid = 3842759236U;

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
    msg.setTimeStamp(0.8440584651955895);
    msg.setSource(22024U);
    msg.setSourceEntity(124U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(174U);
    msg.sessid = 79454651U;

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
    msg.setTimeStamp(0.417827336835785);
    msg.setSource(37288U);
    msg.setSourceEntity(59U);
    msg.setDestination(38525U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2643186338U;
    msg.messages.assign("MKOASPOXVEJTYHYYKSJUVKVCLYTDWRVJKJAQRZUXMNVHTCQEIWKGVLFEDKBGUWPNXCOLGBCBCYAMBLGZBNIAIZSDPRVPNWLGZESRQXFAHEPRFOMISOAWTFJILTTYETPMQWDHHVASFXQBPXNJIMLNLBRFFEIRVAGYATEZHPFOXRSSDJPKZFUGDJRUCLQZEIIUAYLCQOBOWWBJYOE");

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
    msg.setTimeStamp(0.399898579817751);
    msg.setSource(56214U);
    msg.setSourceEntity(114U);
    msg.setDestination(40012U);
    msg.setDestinationEntity(160U);
    msg.sessid = 3606690217U;
    msg.messages.assign("RYKMBVPMRXRUGSQDXJMPHHKHQVOCRWYEVYWOSVQMOGIDALAIKAQDUPYWCNDLPRYEZAFRAWUQVSHHZXTVJTDBFUUALYJKLTOEAOSJBIXDWYBEQJZJSFGTXJUGLMTTCNKNCCBCZEOBLWCDNFOMXBVLCDNBUPSMNMFHPGGJSVUDTPEZINCWDQHZRVTKRRXFIQTLGIZQKXZEZYEYNILIPEAXYOWBVHWPFKKSPF");

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
    msg.setTimeStamp(0.3308988949468925);
    msg.setSource(3000U);
    msg.setSourceEntity(24U);
    msg.setDestination(42326U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1083786738U;
    msg.messages.assign("EUIVOHEEKMHRIXEALTAVKPFDZNDCSZOKWDIUYKNXFRQICAHPSGBSHQXWZJLQKMOTHYYVJVYWSQXHXBLMZCSWXCINNSURQETJFKPDANTCUOLZVHNWPDFXFGTWIHRQTCKBAJTUVGBPUPWYRMVDVJRFMOLCGCYMAVGDGLAIEQXZJJSPULEDMTHV");

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
    msg.setTimeStamp(0.1290457616456887);
    msg.setSource(60082U);
    msg.setSourceEntity(229U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(113U);
    msg.sessid = 4121912196U;

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
    msg.setTimeStamp(0.2647282757389696);
    msg.setSource(58108U);
    msg.setSourceEntity(213U);
    msg.setDestination(38636U);
    msg.setDestinationEntity(51U);
    msg.sessid = 1394473742U;

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
    msg.setTimeStamp(0.07036166349539497);
    msg.setSource(29464U);
    msg.setSourceEntity(185U);
    msg.setDestination(3454U);
    msg.setDestinationEntity(175U);
    msg.sessid = 3969955217U;

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
    msg.setTimeStamp(0.7272651123481875);
    msg.setSource(28305U);
    msg.setSourceEntity(63U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(19U);
    msg.sessid = 2203462733U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.7452650235542024);
    msg.setSource(31321U);
    msg.setSourceEntity(194U);
    msg.setDestination(53435U);
    msg.setDestinationEntity(236U);
    msg.sessid = 4211285822U;
    msg.status = 176U;

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
    msg.setTimeStamp(0.7225488696198356);
    msg.setSource(1021U);
    msg.setSourceEntity(168U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(155U);
    msg.sessid = 3670437886U;
    msg.status = 32U;

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
    msg.setTimeStamp(0.6977145161830354);
    msg.setSource(22403U);
    msg.setSourceEntity(209U);
    msg.setDestination(34269U);
    msg.setDestinationEntity(52U);
    msg.name.assign("VLXMZGKCTNLDRVDZZQUWGNEGYGSUJCIRKCQEOWRPWFDZDDOUUOHXRBKBSZJPMFMRTTULVMHRFLBBWZLXLYEPSHBQSOXNRMBUIOZYPGCJCNSUXUUVWNIYSPXYW");

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
    msg.setTimeStamp(0.5426374148397594);
    msg.setSource(20435U);
    msg.setSourceEntity(110U);
    msg.setDestination(35702U);
    msg.setDestinationEntity(39U);
    msg.name.assign("SRWOBVFTSHUCDIYZTDZ");

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
    msg.setTimeStamp(0.12293863223373391);
    msg.setSource(62634U);
    msg.setSourceEntity(130U);
    msg.setDestination(2889U);
    msg.setDestinationEntity(207U);
    msg.name.assign("SWCHMWKCIRCDVDLBGEMBPWQZYSOECLMCMCAFOJPN");

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
    msg.setTimeStamp(0.028238941582067856);
    msg.setSource(24375U);
    msg.setSourceEntity(119U);
    msg.setDestination(14480U);
    msg.setDestinationEntity(182U);
    msg.name.assign("KDGIZWUJWQGSZFURITFZBKESCWAZJXKCMGZSDKTPTYPQEPUQTYJBMSNWXXFIKHTZGZHEORVOYSPOHZJVCUFIJR");

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
    msg.setTimeStamp(0.18166797365626608);
    msg.setSource(28400U);
    msg.setSourceEntity(59U);
    msg.setDestination(59498U);
    msg.setDestinationEntity(35U);
    msg.name.assign("NLCFBIOHTYNBFELYKPVWJGXSVACRFRJSZHBHULUTTEJGELRUSZBASDJJOHGYALHPVUNMEGWIDMIMINNTRJSDSXBXFTXGCTTOQKFXPEQWROKSZKZINJFPPMVCQNGWWNQMOZMZZUIOQKILECCYNFXBMUVXPBEUTGDMDIAFZRDWLGDIYXAFGEWAWCHOQXKYXNPVRPAFLVUMUGUHVQAERSAVYJVBPETOH");

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
    msg.setTimeStamp(0.9671079892117784);
    msg.setSource(11477U);
    msg.setSourceEntity(37U);
    msg.setDestination(23007U);
    msg.setDestinationEntity(207U);
    msg.name.assign("JVODEFHCMOVQYLELYZARPWHFYICXPEHGTCVILCJJHJWQGFZKAHRYTUEKDTLLDQXAPMPWEUDRXUBIWAUBOGGDWZHQBOIRUZUGHABIOSLRDMYKSFRBXNXWNRUFSRFPLKSXXTVPNQQODFRZISNEDRAC");

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
    msg.setTimeStamp(0.8235049247886739);
    msg.setSource(27561U);
    msg.setSourceEntity(103U);
    msg.setDestination(29973U);
    msg.setDestinationEntity(29U);
    msg.type = 74U;
    msg.error.assign("ZNVSTVEMFRZYXQEUJZWHXLJUWNTHHEKSGKCFUKQIHNOXEFOMDNVXYIDTS");

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
    msg.setTimeStamp(0.6570814868835354);
    msg.setSource(13390U);
    msg.setSourceEntity(134U);
    msg.setDestination(8790U);
    msg.setDestinationEntity(14U);
    msg.type = 246U;
    msg.error.assign("FZMCJVKQZVSDSCETHJMGHIHQQWFMGHBXPCNTVKPWWDTLKPLAOGRRPHALYYFYDEQVQBRBLMUVOIZMWXLCYAYUXMDFFKWKEOHQMTNBRGJUCSNIGVUQMJTNGKBKEZHIBZJNLEJQYNEPXARGJEDUDORLIEZUTOPSLAZEYLCIAIKDZSOEWIYLDACTRMNDASZJJIURUPWOTXJUASKPXZHXYGFOFVBCASXIUBBXWPGFCWTCQXRVSODHT");

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
    msg.setTimeStamp(0.7627366498043332);
    msg.setSource(49721U);
    msg.setSourceEntity(88U);
    msg.setDestination(44059U);
    msg.setDestinationEntity(60U);
    msg.type = 181U;
    msg.error.assign("ZNYWHOCTFIAGVETMWIJJZDFMSITDITWCABUUGZYQQCXCVKNGUOBFDOKGYXGOEXNQLAJYVDXPOINYNXACFMXHBINFZBPHFYOJHUJMRVASJULWUCZILAR");

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
    msg.setTimeStamp(0.782954415246044);
    msg.setSource(12810U);
    msg.setSourceEntity(23U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(200U);
    msg.seq = 8316U;
    msg.sys_dst.assign("VTJURBMHKSRBHVCSOYUQZINGVZRLMIVADLDFMKNDPEBQBDPVCYJWAQWHJGYLSFOCTU");
    msg.flags = 63U;
    const signed char tmp_msg_0[] = {-92, -121, -15, 100, 111, -33, 4, -126, 100, -16, 0, 102, 4, 106, -48, 55, 42, -106, 12, -17, 116};
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
    msg.setTimeStamp(0.8347096091213403);
    msg.setSource(63298U);
    msg.setSourceEntity(1U);
    msg.setDestination(53342U);
    msg.setDestinationEntity(217U);
    msg.seq = 22373U;
    msg.sys_dst.assign("JGAHZCWKLIOPMZVIPCNTNESEWIKPGOBOMSGK");
    msg.flags = 199U;
    const signed char tmp_msg_0[] = {13, 17, 115, 77, -54, 80, -112, 75, -112, -48, 60, -127, -67, -112, -36, -87, -26, 61, -63, -35, 40, -19, -114, -3, -41, 108, 78, -56, -48, -33, -111, -35, -61, -65, -79, -17, -125, -36, -121, -101, 100, -52, 80, -23, -30, 110, -125, 92, 117, 72, -45, -91, 94, 43, 16, -94, -9, 52, -97, -83, 122, -62, -98, 98, -1, -53, 82, -117, -4, -9, -51, -54, -90, -27, -75, -14, 126, -53, 25, -126, -21, -113, 100, 87, 91, 1, -5, -39, 84, -108, -13, 93, 45, 35, -101, 12, -90, -126, 57, 61, 35, 17, 119, 87, -52, -112, -53, -111, -106, -103, 39, -16, -67, -16, -125, -127, -48, -52, -51, 20, 29, 51, 58, 82, -92, -97, 29, 92, 70, 21, -96, 92, -14, -50, -65, -81, -76, -28, -108, -11, -100, -89, 77, 80, 64, 102, 72, 63, 92, -111, -101, 53, -7, -48, 25, -58, -7, -3, -60, 3, 42, -62, 26, -12, -37, 94, -122, -32, -41, -82, 58, 51, -116, -79, -116, 57, -36, -79, -48, 116, 80, -108, 96, -118, -50, -77, -60, -111, -50, -89, 92, -57, 94, -41, -25, -83, 17};
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
    msg.setTimeStamp(0.6191905682053528);
    msg.setSource(9518U);
    msg.setSourceEntity(104U);
    msg.setDestination(22031U);
    msg.setDestinationEntity(243U);
    msg.seq = 29218U;
    msg.sys_dst.assign("UIGKEMIWLYDXMXBMOWUTGWQTWXIEUBHRRHQONPTQVIZGSKIHELVTJEMSFFJSVEQUZJQWEODGKXMUSUYCNJDCANVOKCMFYZYTUIHNKGCHTCIXORDAMVBBKCFAXPFGTEZPOIWADBZBAAVWOQLGXVVAWKRSKCP");
    msg.flags = 165U;
    const signed char tmp_msg_0[] = {37, 100, -59, 120, -9, -8, 68, -32, -121, -31, 97, 82, -66, -114, 23, -118, 73, -94, 48, -115, -52, -15, 85, 25, -63, -69, -52, 26, 29, 95, -48, 5, 81, 16, -54, -103, -12, 54, 90, -18, -84, 114, 46, 16, 111, -63, 45, 87, 84, -105, 80, -16, 97, -38, -103, -112, -3, -1, 27, 90, -77, 47, 48, 2, -35, 59, 79, 68, -83, 24, -14, -123, 104, 49, 42, -126, 120, 46, -99, 94, -60, 14, 58, -90, 32, -65, 126, 82, -126, 80, 68, -99, 85, 17, 81, -106, -83, 106, 73, 34, -1, 82, 35, 33, -95, -76, -62, -51, 5, 2, 8, -22, 114, -93, 41, 43, 55, -91, -71, 117, 56, 95, 5, -47, -98, -78, -14, -5, -11, -73, -87, 10, -112, 45, -98, 74, 63, -58, 94, -15, -23, -58, 54, -115, 71, 95, 88, 98, 33, 86, -115, -97, 27, -14, 4, -13, 44, -38, 11};
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
    msg.setTimeStamp(0.6763063417878458);
    msg.setSource(55544U);
    msg.setSourceEntity(100U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(85U);
    msg.sys_src.assign("XVDGHUZHWODCTENDBIOWFJSMYNETYLYXXDUZHZVAMYXPJRC");
    msg.sys_dst.assign("VACGCVDKPRKHCHJCZLYZSLTQQPATNCIPSMJGNVURHAQIEEMMIDRWSWRUNOOTWJTOMWPQKTDRUFTEGJRMVATIVSGUFPBXGKTIAUOPHXHPXSRKWBFKAKNWOGEOKNBHIFPJLYZZHUWXTHBZBISRYSWFPFLBIIJOBDPNMRVLNWBGOCMUYMLKFGMQLXNQXUNQC");
    msg.flags = 185U;
    const signed char tmp_msg_0[] = {23, 8, 90, -109, 112, -37, 63, -12, -13, -119, -31, -115, -128, -23, 89, -5, -24, 107, -60, 32, 73, 94, 53, 17, 98, 84, 95, -25, 117, 66, -75, 114, 99};
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
    msg.setTimeStamp(0.8533625239998395);
    msg.setSource(28539U);
    msg.setSourceEntity(81U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(143U);
    msg.sys_src.assign("EYKIWHUSLDZFLMCRIPZWFWSJLBBXWMPINYMFUFXPIETUQBPXKLVHTHHEPPPCDDA");
    msg.sys_dst.assign("DIDDRCKEYMJFQOVFPUMINJMXUQSDZNSRMKCYOPOZZLMOTXVRDYFTDVUCIWKZSWPRWAYQJRGVZUAPKHAJVDFHTZWXCOTPSRLKBRBXOEXQBBWGIMGNMNLWZHCOMXNFFCIEQYXEGZFNLIOTY");
    msg.flags = 228U;
    const signed char tmp_msg_0[] = {-18, -5, -27, -11, -28, 75, 80, 49, -82, -122, -74, 102, 73, 47, -81, 29, -94, -108, -23, -86, 109, 54, 99, -75, -18, 35, -55, 67, 116, -87, -82, 85, 45, -66, -119, -58, -42, -28, -20, -127, 69, 70, -74, -97, 99, -14, -108, -110, -21, -89, 31, -17, -4, -5, 121, 126, -70, 3, 121, 123, 29, -77, -79, 55, -51, -122, 99, -17, -68, 66, 62, -118, 29, 19, 45, -80, 70, 39, -87, 5, 46, 110, -107, 42, -47, 108, -13, -98, -100, 4, -75, -28, -51, -11, 67, 95, 69, -48, 108, 43, 36, 10, 95, 101, -25, -5, 48, 29, -95, -51, -38, -28, -109, -8, 78, -123, -127, 69, 10, 19, 1, 115, -13, -27, -51, -2, 91, 8, 32, 48, 92, 95, 19, -5, -115, -98, -123, 25, -92, -82, -95, -113, -7, -13, 120, 43};
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
    msg.setTimeStamp(0.9660187101453706);
    msg.setSource(40526U);
    msg.setSourceEntity(243U);
    msg.setDestination(23342U);
    msg.setDestinationEntity(123U);
    msg.sys_src.assign("EJDSQUPGSIKBMGNRAEKUUZZMGJESWQOVCHZHMKCJPYYGSVNMPRDOWYJPEBUQXWFZDXERRNWWVFXEVDEVYLIK");
    msg.sys_dst.assign("ZICTIXASLYNDVQQOIHGFZUTMFAYFFVCRISLUYCAXQQQVR");
    msg.flags = 14U;
    const signed char tmp_msg_0[] = {-124, 15, 81, -84, 107, 2, 50, 106, -36, 17, -80, 56, -89, -42, 10, 78, -9, 101, -82, -114, 115, 95, 80, 117, -113, -121, -122, 59, 114, -95, 63, 18, -34, 73, -30, -60, 71, 74, 50, 98, -92, -76, 7, 24, 97, 23, 29, 55, 91, 124, -31, 102, 43, 105, -63, 39, 48, -89};
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
    msg.setTimeStamp(0.17894367600969496);
    msg.setSource(47502U);
    msg.setSourceEntity(179U);
    msg.setDestination(7107U);
    msg.setDestinationEntity(30U);
    msg.seq = 28872U;
    msg.value = 42U;
    msg.error.assign("WGLTDDWPYRGLLIFMNJUHFDNPBDLRSWEH");

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
    msg.setTimeStamp(0.20042809390030158);
    msg.setSource(9954U);
    msg.setSourceEntity(79U);
    msg.setDestination(41420U);
    msg.setDestinationEntity(237U);
    msg.seq = 39628U;
    msg.value = 239U;
    msg.error.assign("SPXKBRNATMGKOTYUAKNELGWMSDFMXWNJUQTGZZTIDVPDMMAOKYWHOUEJIQIYE");

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
    msg.setTimeStamp(0.3698445665987954);
    msg.setSource(54854U);
    msg.setSourceEntity(244U);
    msg.setDestination(61333U);
    msg.setDestinationEntity(106U);
    msg.seq = 43729U;
    msg.value = 56U;
    msg.error.assign("RCLKQGLJEIPOWPNODSTUKZYQXQWHXIMSCMNCSBJKMKALGTMVZGWDPNWAHZTDGGKYADTQLDFFJFYNGCUWKBYSSUODXEFTYAJJIWVOFXVOAHNHWEXEXNXCHHQOORFUKZIJBBJYOPGZELOXXRUQEWMKKPGYSIMEBXVSCUCRZI");

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
    msg.setTimeStamp(0.2510143256216517);
    msg.setSource(3939U);
    msg.setSourceEntity(196U);
    msg.setDestination(33263U);
    msg.setDestinationEntity(84U);
    msg.seq = 39691U;
    msg.sys.assign("IFNBQOFUYFMKCRI");
    msg.value = 0.7326732850231381;

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
    msg.setTimeStamp(0.36941103624661387);
    msg.setSource(5305U);
    msg.setSourceEntity(223U);
    msg.setDestination(40429U);
    msg.setDestinationEntity(121U);
    msg.seq = 48306U;
    msg.sys.assign("PLGHOFQIFBBZCOMFEKQSDLIDYVLRKCPSMEWSRIFDVWPRUDHJSMRMFUFTFGATU");
    msg.value = 0.6066483669232753;

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
    msg.setTimeStamp(0.7401294653793913);
    msg.setSource(11536U);
    msg.setSourceEntity(250U);
    msg.setDestination(47237U);
    msg.setDestinationEntity(45U);
    msg.seq = 52243U;
    msg.sys.assign("BEBXNJURXAOGQWGRRVBXQOLIMHPMVFTACDYYWQCTVUXNTUWYVOTSMTRIBFRIEERGDDFHFLSGHWMORWMHAQYMLIJSAFFQHCDIJPNOQCPLNJIZPRTVEHDPJUEAOZDEUQWHXOPCBKMLKL");
    msg.value = 0.2543811571433864;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.9165689733638138);
    msg.setSource(11254U);
    msg.setSourceEntity(71U);
    msg.setDestination(38809U);
    msg.setDestinationEntity(126U);
    msg.seq = 64291U;
    msg.sys_dst.assign("NQRQKUNCGMUZFEMHBHYZNDVUFNWDMJGBLKBRYOPHVYPAAMVGHWXFUQEMJZZFUDMMNKSVXQKZOCCSVGLBFIPIWPTOPQOLBEGXPCFQBDLBWRM");
    msg.timeout = 0.8805894029481011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.8460408143631081);
    msg.setSource(48330U);
    msg.setSourceEntity(177U);
    msg.setDestination(38886U);
    msg.setDestinationEntity(73U);
    msg.seq = 36286U;
    msg.sys_dst.assign("YMPSVRGAEXSJEGPBYZJQBTOLJIYMUCOAVQHEUDKXTDINZPSBBDWIHGFXHTKODWPMDFVBYBETERDFIOIEFEOOWGQRFQIZZSVXWXNVHPNHCFLOSVAJESJLRJBNYYCKRKCZAYGDWUKBULGIXMIQDJACDKVNCLFWCTKVGWRUCROHRYUOPCLLZFXGSNYGZKYLKZPNWPAPOJZHWQLHZFAMUGNQASMBTHNHLTTCNISQVFSMUJTMRDXIWKJPXBUVM");
    msg.timeout = 0.8776941400459137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.06763851308373758);
    msg.setSource(3369U);
    msg.setSourceEntity(54U);
    msg.setDestination(35435U);
    msg.setDestinationEntity(60U);
    msg.seq = 35551U;
    msg.sys_dst.assign("HXYDQJWIIQAFUSECDPOQSWJZPHTIPYKNGRPPOHLLNPFAJHFYNRGVETKWCHQFYABWBUZVMCKDQZAVMMQIRUGAIGPCNGDSSMMPFGYRSZYUFZUYCBXXWRODDETVSEQJBBFBGAWIHIVNUNARNCWOEZDTIKBKCTMTHNGLBGJDWLVXCPEMOYLUFTWRTVGUAQKTCNFY");
    msg.timeout = 0.5051499503205296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.17873215124850284);
    msg.setSource(34789U);
    msg.setSourceEntity(237U);
    msg.setDestination(16097U);
    msg.setDestinationEntity(22U);
    msg.action = 251U;
    msg.longain = 0.2096354196256196;
    msg.latgain = 0.7319494176618009;
    msg.bondthick = 337062596U;
    msg.leadgain = 0.9611343495336316;
    msg.deconflgain = 0.9128345016006674;

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
    msg.setTimeStamp(0.3274907950135366);
    msg.setSource(22679U);
    msg.setSourceEntity(173U);
    msg.setDestination(56534U);
    msg.setDestinationEntity(251U);
    msg.action = 20U;
    msg.longain = 0.0022526545876873083;
    msg.latgain = 0.9016728775413074;
    msg.bondthick = 2054962103U;
    msg.leadgain = 0.4806348629627616;
    msg.deconflgain = 0.11456515083965202;

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
    msg.setTimeStamp(0.6698562450637016);
    msg.setSource(22569U);
    msg.setSourceEntity(39U);
    msg.setDestination(26899U);
    msg.setDestinationEntity(12U);
    msg.action = 119U;
    msg.longain = 0.8350553404968343;
    msg.latgain = 0.7848717376333809;
    msg.bondthick = 35753836U;
    msg.leadgain = 0.8845301899451222;
    msg.deconflgain = 0.16897372571508007;

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
    msg.setTimeStamp(0.49383215272688863);
    msg.setSource(39373U);
    msg.setSourceEntity(240U);
    msg.setDestination(60701U);
    msg.setDestinationEntity(116U);
    msg.err_mean = 0.1804010961678536;
    msg.dist_min_abs = 0.1541348564371109;
    msg.dist_min_mean = 0.6379287271964065;

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
    msg.setTimeStamp(0.01854841033424326);
    msg.setSource(25749U);
    msg.setSourceEntity(48U);
    msg.setDestination(5642U);
    msg.setDestinationEntity(67U);
    msg.err_mean = 0.6871595367825015;
    msg.dist_min_abs = 0.3484764302774277;
    msg.dist_min_mean = 0.6435846964039087;

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
    msg.setTimeStamp(0.4959409048956017);
    msg.setSource(826U);
    msg.setSourceEntity(219U);
    msg.setDestination(2963U);
    msg.setDestinationEntity(251U);
    msg.err_mean = 0.8462410568960591;
    msg.dist_min_abs = 0.3206740251126118;
    msg.dist_min_mean = 0.5232502460362076;

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
    msg.setTimeStamp(0.3064347717258239);
    msg.setSource(9914U);
    msg.setSourceEntity(224U);
    msg.setDestination(45783U);
    msg.setDestinationEntity(213U);
    msg.action = 127U;
    msg.lon_gain = 0.7929393207527079;
    msg.lat_gain = 0.7004967845533425;
    msg.bond_thick = 0.4619760515996373;
    msg.lead_gain = 0.3510193531786129;
    msg.deconfl_gain = 0.17242900900288238;
    msg.accel_switch_gain = 0.3401673811744691;
    msg.safe_dist = 0.7745438194061585;
    msg.deconflict_offset = 0.5634907627157161;
    msg.accel_safe_margin = 0.6245174918956392;
    msg.accel_lim_x = 0.6510797620080165;

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
    msg.setTimeStamp(0.6400655000187464);
    msg.setSource(50948U);
    msg.setSourceEntity(190U);
    msg.setDestination(46710U);
    msg.setDestinationEntity(241U);
    msg.action = 82U;
    msg.lon_gain = 0.27790964967779597;
    msg.lat_gain = 0.2561239914777973;
    msg.bond_thick = 0.16686953642086377;
    msg.lead_gain = 0.8703073247362932;
    msg.deconfl_gain = 0.9518208161943809;
    msg.accel_switch_gain = 0.1733849846545179;
    msg.safe_dist = 0.11893254829169442;
    msg.deconflict_offset = 0.34488897624828985;
    msg.accel_safe_margin = 0.39133240778199185;
    msg.accel_lim_x = 0.15875337400473322;

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
    msg.setTimeStamp(0.49040340655439507);
    msg.setSource(4721U);
    msg.setSourceEntity(143U);
    msg.setDestination(1939U);
    msg.setDestinationEntity(158U);
    msg.action = 251U;
    msg.lon_gain = 0.5601517004741543;
    msg.lat_gain = 0.40871403630163705;
    msg.bond_thick = 0.5956438046943556;
    msg.lead_gain = 0.7211848615451941;
    msg.deconfl_gain = 0.13880417135059286;
    msg.accel_switch_gain = 0.45482780923403965;
    msg.safe_dist = 0.7677048993999797;
    msg.deconflict_offset = 0.6167934239137822;
    msg.accel_safe_margin = 0.4817088498502514;
    msg.accel_lim_x = 0.36849968796181154;

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
    msg.setTimeStamp(0.8587012690026982);
    msg.setSource(37145U);
    msg.setSourceEntity(18U);
    msg.setDestination(32852U);
    msg.setDestinationEntity(148U);
    msg.type = 31U;
    msg.op = 15U;
    msg.err_mean = 0.652082952665368;
    msg.dist_min_abs = 0.11342663084154658;
    msg.dist_min_mean = 0.6700252188458657;
    msg.roll_rate_mean = 0.9845393713132086;
    msg.time = 0.5119362850172774;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 210U;
    tmp_msg_0.lon_gain = 0.16241201778010927;
    tmp_msg_0.lat_gain = 0.49308724986948804;
    tmp_msg_0.bond_thick = 0.846016287526889;
    tmp_msg_0.lead_gain = 0.43841288915563525;
    tmp_msg_0.deconfl_gain = 0.7753630015360902;
    tmp_msg_0.accel_switch_gain = 0.7462386053866156;
    tmp_msg_0.safe_dist = 0.41194853240522267;
    tmp_msg_0.deconflict_offset = 0.010837453534055519;
    tmp_msg_0.accel_safe_margin = 0.0695896820376034;
    tmp_msg_0.accel_lim_x = 0.1697569560697586;
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
    msg.setTimeStamp(0.9675450206444557);
    msg.setSource(41014U);
    msg.setSourceEntity(4U);
    msg.setDestination(48164U);
    msg.setDestinationEntity(90U);
    msg.type = 110U;
    msg.op = 61U;
    msg.err_mean = 0.18122208941607088;
    msg.dist_min_abs = 0.5606119100944809;
    msg.dist_min_mean = 0.8067551208537518;
    msg.roll_rate_mean = 0.9256937178859669;
    msg.time = 0.4304038859266687;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 38U;
    tmp_msg_0.lon_gain = 0.6150626510812482;
    tmp_msg_0.lat_gain = 0.6699753718772877;
    tmp_msg_0.bond_thick = 0.3631050690162716;
    tmp_msg_0.lead_gain = 0.3620529082156807;
    tmp_msg_0.deconfl_gain = 0.8179120243993323;
    tmp_msg_0.accel_switch_gain = 0.516232247532504;
    tmp_msg_0.safe_dist = 0.3422707687015455;
    tmp_msg_0.deconflict_offset = 0.9708589931221028;
    tmp_msg_0.accel_safe_margin = 0.32063408656584846;
    tmp_msg_0.accel_lim_x = 0.22888592408283026;
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
    msg.setTimeStamp(0.5215936176141169);
    msg.setSource(9732U);
    msg.setSourceEntity(197U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(209U);
    msg.type = 239U;
    msg.op = 210U;
    msg.err_mean = 0.6996868820915217;
    msg.dist_min_abs = 0.3157317283995261;
    msg.dist_min_mean = 0.2285999366890601;
    msg.roll_rate_mean = 0.2758980653728339;
    msg.time = 0.0886416925279846;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 76U;
    tmp_msg_0.lon_gain = 0.5086225774374904;
    tmp_msg_0.lat_gain = 0.814387701411809;
    tmp_msg_0.bond_thick = 0.9076758586187095;
    tmp_msg_0.lead_gain = 0.389740164191107;
    tmp_msg_0.deconfl_gain = 0.37822716340194507;
    tmp_msg_0.accel_switch_gain = 0.5369551387693869;
    tmp_msg_0.safe_dist = 0.11839566119936684;
    tmp_msg_0.deconflict_offset = 0.6270834661026167;
    tmp_msg_0.accel_safe_margin = 0.5618212016922909;
    tmp_msg_0.accel_lim_x = 0.4315414082818392;
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
    msg.setTimeStamp(0.8479714011474958);
    msg.setSource(61752U);
    msg.setSourceEntity(193U);
    msg.setDestination(33111U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.43801909422578955;
    msg.lon = 0.9984665550434754;
    msg.eta = 2508511129U;
    msg.duration = 36943U;

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
    msg.setTimeStamp(0.9325229000181039);
    msg.setSource(1093U);
    msg.setSourceEntity(136U);
    msg.setDestination(32709U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.07800000908788318;
    msg.lon = 0.2628968370081243;
    msg.eta = 2492903039U;
    msg.duration = 24834U;

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
    msg.setTimeStamp(0.442247305898111);
    msg.setSource(65234U);
    msg.setSourceEntity(232U);
    msg.setDestination(46625U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.11826135930801074;
    msg.lon = 0.2655425935787842;
    msg.eta = 2020765231U;
    msg.duration = 16813U;

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
    msg.setTimeStamp(0.34089255434918253);
    msg.setSource(20186U);
    msg.setSourceEntity(143U);
    msg.setDestination(44018U);
    msg.setDestinationEntity(103U);
    msg.plan_id = 50186U;

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
    msg.setTimeStamp(0.883234904523129);
    msg.setSource(22956U);
    msg.setSourceEntity(154U);
    msg.setDestination(58220U);
    msg.setDestinationEntity(251U);
    msg.plan_id = 7569U;

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
    msg.setTimeStamp(0.2437731080108494);
    msg.setSource(55027U);
    msg.setSourceEntity(251U);
    msg.setDestination(2572U);
    msg.setDestinationEntity(39U);
    msg.plan_id = 10746U;

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
    msg.setTimeStamp(0.12247718106269767);
    msg.setSource(62142U);
    msg.setSourceEntity(2U);
    msg.setDestination(4890U);
    msg.setDestinationEntity(217U);
    msg.type = 169U;
    msg.command = 78U;
    msg.settings.assign("KHMPYRDYHNTBRBAJGJQBFFFUTXSOESZVHPSAPAUCZKBFGZUTITJLURNADWVQADLKMXBXOIHWCNNEFJSNGMQOEBGLPTLMJYWICJDTMWFOVIAQKCWFEVVZMVIQGPBTSWWJVDHWHCVLHROXXPNGQZDCSKIKYLYZRNGRMEGELYHYKTBICPXXIACEQNKAGRUUTRYFKNQFULPJHZCUOKQEXSMZSADLDZQRTDIMUPLIPNRMSFOVGXEJUOJOYWZYVDCSE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30827U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.42107319660246045;
    tmp_tmp_msg_0_0.lon = 0.23962563914398582;
    tmp_tmp_msg_0_0.eta = 3400473583U;
    tmp_tmp_msg_0_0.duration = 39725U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XBLXOEERGSWBJPQOHXBUORYBSOSEJZDQAUHYNGTMKHNUNBSLCNMLXHJGVCRXFJMDKXQQJYIPLEDIKOKEHURVQGFALFINAMUYJUWGSIPKVLOAPKJPRVKWWQVCMMABFWMSDTNZFEGZCFQEZHDQKFKHXUTYWLLHWSPVNEEGMRLCOTFDVZI");

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
    msg.setTimeStamp(0.4389838502590371);
    msg.setSource(11538U);
    msg.setSourceEntity(153U);
    msg.setDestination(10574U);
    msg.setDestinationEntity(193U);
    msg.type = 184U;
    msg.command = 7U;
    msg.settings.assign("EIZRTATCEVGDYNIMWPZHHVZHWJUXJFUCKSXIMVVJSNKBRGZPXZYWGJORTIYEVDCCKMR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12037U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IOOTPBTWPJHQWUKBNMTPXOJDQIHHTEIUEZFRVDCPNCDHGYVIGTEDRJJYKUBKWXUCPQLRJJSWSUNKIYEYHQFFHPLVDLDHMNOXMOVAEZPQKQQKMVTPQAAYTEXMFZGAFAXBFWKCYNCLCVZUANUJVFPKDQBASSSNBEGMXJWRFVFH");

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
    msg.setTimeStamp(0.7975300635120105);
    msg.setSource(22621U);
    msg.setSourceEntity(152U);
    msg.setDestination(4204U);
    msg.setDestinationEntity(235U);
    msg.type = 125U;
    msg.command = 124U;
    msg.settings.assign("YBPLXZQJADOAKVMQRAYZBVVSDHQVSIEZHRPJMCBSFYQYTTFUVLOFSQDJGUWTEYULSMLTERKDPWJMCIBWTYHALWUHSXWOZNIYMHACRFHNCXJVCKFFGDAZHNPLIFEAODZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3203U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KQYGCGPHHLMEBDIXFRTCJAQDTWQBPETMDNWNBDFLNSEWKBFHIOGCTOZLPJALGFMADZCMFVHQNQYPVFVTDLPJNUUSXUMYHZIQPNTWIEZRJNUCYVOLZANAYWRJXCQSJVRULGTIGVOBXSAHFCKGYRWOKBIRLDXWVPPGDQBFIUOJZUXTCCSSMNYPUYEUSKFIKZQHEVBMBAKNXFHG");

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
    msg.setTimeStamp(0.5655444020416269);
    msg.setSource(25941U);
    msg.setSourceEntity(60U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(65U);
    msg.state = 9U;
    msg.plan_id = 27889U;
    msg.wpt_id = 172U;
    msg.settings_chk = 4062U;

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
    msg.setTimeStamp(0.839884570858523);
    msg.setSource(63561U);
    msg.setSourceEntity(34U);
    msg.setDestination(44595U);
    msg.setDestinationEntity(82U);
    msg.state = 16U;
    msg.plan_id = 17904U;
    msg.wpt_id = 239U;
    msg.settings_chk = 32514U;

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
    msg.setTimeStamp(0.6060208299829132);
    msg.setSource(17844U);
    msg.setSourceEntity(189U);
    msg.setDestination(25988U);
    msg.setDestinationEntity(213U);
    msg.state = 109U;
    msg.plan_id = 28697U;
    msg.wpt_id = 230U;
    msg.settings_chk = 63102U;

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
    msg.setTimeStamp(0.3497501718856816);
    msg.setSource(57048U);
    msg.setSourceEntity(152U);
    msg.setDestination(35984U);
    msg.setDestinationEntity(171U);
    msg.uid = 224U;
    msg.frag_number = 44U;
    msg.num_frags = 100U;
    const signed char tmp_msg_0[] = {79, 56, -111, 47, 96, -114, 118, -27, -112, 63, 82, -115, 81, 67, -54, -4, -108, 65, -111, -56, 125, 8, 34, 11, 2, -89, 20, -40, 2, -52, -38, -48, 75, -7, 101, -121, -65, 60, -125, -123, 99, 5, 82, 3, -110, -92, 43, -50, 72, -57, 17, 114, -115, 68, 8, -19, -20, -93, -43, 63, -25, 107, -68, -126, -112, -47, -25, -108, -72, 122, -22, 50, -125, 51, 70, -104, -116, 31, -38, 12, -15, -67, -31, -1, 104, -113, 121, 24, -114, 73, 84, -77, -110, 91, 4, -113, -23, -51, -55, -112, -84, -89, -113, 51, -8, 124, -30, 46, -33, -122, 112, 99, 77, -110, 87, -94, -61, -61};
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
    msg.setTimeStamp(0.6448878310006284);
    msg.setSource(57541U);
    msg.setSourceEntity(157U);
    msg.setDestination(56028U);
    msg.setDestinationEntity(127U);
    msg.uid = 232U;
    msg.frag_number = 89U;
    msg.num_frags = 96U;
    const signed char tmp_msg_0[] = {-105, 90, -128, -101, 65, -90, -103, -124, 67, -92, 54, 122, 64, -95, -91, -121, 89, -66, 19, 113, 14, -114, -31, 0, -102, -91, 16, -121, 72, -108, -61, 55, -5, -51, 28, 29, -93, -111, 69, -66, -120, -39, 89, -29, -67, 95, 68, -6, -8, -14, 30, -61, -53, -77, -86, -22, -89, 60, -89, 111, -93, -46, 45, 77, 34, 40, 118, 108, -109, -1, -71, -126, -75, -67, -31, -117, -20, 19, 38, -71, -86, -7, 87, 27, 73, -86, 3, 70, -117, -127, -111, -101, 80, 8, 18, -116, 86, -50, 52, 88, -66, 40, -64, -9, -31, 112, 103, 59, 15, -41, 12, 109, -113, 112, -61, -2, 27, 104, 78, 4, -128, -49, 105, -84, -65, -121, 111, -15, -24, 119, -59, -85, -113, 22, -110, 56, -25, -48, 31, -8, 97, 37, 102, 51, 112, 34, -118, -112, 117, 48, 87, -23, 86, -126, 72, -60, 44, 92, -45, 43, 22, -72, -10, -103, -42, -40, -52, -100, 119, 12, 98, 31, -119, 93, 70};
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
    msg.setTimeStamp(0.9088677406768461);
    msg.setSource(54182U);
    msg.setSourceEntity(109U);
    msg.setDestination(42613U);
    msg.setDestinationEntity(135U);
    msg.uid = 90U;
    msg.frag_number = 127U;
    msg.num_frags = 143U;
    const signed char tmp_msg_0[] = {61, 94, -83, 72, -33, -121, -44, -62, -11, 99, 111, 36, 1, -109, -6, -40, 95, -77, -1, -72, 109, -50, -121, 20, -113, 119, -100, -63, 123, -126, 35, 102, -34, -117, -77, 63, -22, 109, 114, 92, -101, 26, -127, -74, -28, 16, -30, -66, -23, -47, 47, -46, 31, -70, -34, 106, -45, -92, -48, -46, -66, 79, -77, -3, -38, -38, -123, 58, -91, 6, 42, 106, -59, 67, 119, 119, -10, -121, -89, -68, 88, 18, -62, 18};
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
    msg.setTimeStamp(0.5660681871433457);
    msg.setSource(49446U);
    msg.setSourceEntity(34U);
    msg.setDestination(59301U);
    msg.setDestinationEntity(106U);
    msg.content_type.assign("XUXVKZRCEMZGDONKEMGPUESWIVSDPLUNHHUIHDYNLBIDCSLVYJLLKWTBHQJTFLIYHCVLWKAFGCOSGPAUUMMYIKFOJLQFWFDNRMKTGRGNBNPZPJTEEIJWZAUKRYRAZPAIVC");
    const signed char tmp_msg_0[] = {-89, -125, -10, 99, -69, -17, -74, 91, -112, 37, -96, 108, -101, -86, 47, 50, -116, -82, -27, -26, 47, -28, -103, -122, 56, -28, 39, -11, -111, 123, 110, 97, 44, 19, 109, 41, 21, -119, -37, 74, 90, -19, -95, -100, 84, 101, -33, 32, 61, 4, -11, -84, -51, -100, 46, 58, 80, -86, -95, -86, -107, -46, -93, -20, -30, -40, 42, 93, -31, 92, 108, -95, -113, 73, 79, 33, -112, -61, -34, 57, -50, 48, 84, 60, -83, 67, 62, 37, 44, -9, -102, 82, 80, 55, 67, -16, -63, -70, -65, 92, -2, 3, -28, 113, -107, 123, -5, -32, 28, -109, -57, 64, 64, 39, 54, 104, -113, -58, -65, 36, 12, 126, -84, -23, -102, 87, -77, 112, 70, -36, 109, -44, -118, -33, 30, 28, 100, -27, -68, 98, 10, -58, 54, -105, 89, -18, 29, -3, 9, 20, 35, -9, -36, -35, -123, -9, 98, -31, 47, -59, -72};
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
    msg.setTimeStamp(0.5436609067903831);
    msg.setSource(38724U);
    msg.setSourceEntity(115U);
    msg.setDestination(18025U);
    msg.setDestinationEntity(168U);
    msg.content_type.assign("KRXXOBUTWLRQJMSBEMCTHBJHXABYZDXSVJMQGUOEGWHVPFQEJHFQHUCOUIBFNZTCATEJYVIAYALPRHNZIHOYSBZCCEGHQKGWGIPDSXZUSCBBYPRESOUNDNYXMRZMEYPTOKJROLTAMWQVEHBPGVKWCNVWDMRUIZQBCYIAZLVAYQDXKSXPGLUFKLKNNFVLFTMGJULTFDQWSZMPKCXSRFLTIOLDHVDOUNAJXJVEFDQNPTRK");
    const signed char tmp_msg_0[] = {-119, 86, -83, -92, -34, 125, -88, -56, -93, -35, -113, -47, -21, -49, 32, -13, 11, 101, -93, 58, 89, 10, -89, 107, -115, 25, 6, -110, 13, -72, 20, 0, -128, -37, -20, -66, -69, -110, -30, -96, 40, 100, -72, -47, -91, -104, -65, 115, -13, -50, 42, -66, -38, 50, -70, -117, 36, -53, 48, -105, -81, 111, 71, -33, 97, 34, -79, -100, -69, -8, -49, -77, 116, -26, 79, 41, -91, 84, -73, 100};
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
    msg.setTimeStamp(0.4898853621970348);
    msg.setSource(26019U);
    msg.setSourceEntity(81U);
    msg.setDestination(55998U);
    msg.setDestinationEntity(130U);
    msg.content_type.assign("OJSTDHUJUZHBTAHVHGWPFTBSGRDCYUONIL");
    const signed char tmp_msg_0[] = {122, -48, -19, 36, -32, 45, 56, -46, -26, -119, 115, 15, -62, -114, -63, 111, 118, 8, -17, -17, -76, 106, 124, -35, -97, 59, -117, 97, -5, -75, -40, -17, -52, 60, -50, -102, -32, 31, -1, -49, -125, -29, -1, -126, 4, -50, -53, 91, -74, 22, 5, 85, 46, 60, 55, 8, -54, 57, -53, -122, 125, 94, 43, 2, 118, -22, -70, 110, 25, 9, -19, 106, 93, -12, -69, -23, 39, 8, -89, -25, -127, -113, -54, 2, 77, -80, 58, -91, -42, -21, -99, -116, -44, 68, -15, 83, -126, 44, -53, -34, 16, -110, -42, 71, -18, 4, 89, -47, -57, 80, -64, 94, -4, 77, 73, 116, 33, -68, -13, -53, -95, 33, -30, -69, 71, 23, -33, 109, 73, -91, -28, -87, -34, 21, 68, -55, -53, -99, 40, -109, -13, 87, 1, -45, 20, -102, 119, -114, 50, 77, -73, 117, 22, -35, -86, -70, 108, -74, -60, 126, -64};
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
    msg.setTimeStamp(0.5848892623880908);
    msg.setSource(29989U);
    msg.setSourceEntity(212U);
    msg.setDestination(18116U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.7417939630562432);
    msg.setSource(59716U);
    msg.setSourceEntity(113U);
    msg.setDestination(11664U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.22897658984466152);
    msg.setSource(38870U);
    msg.setSourceEntity(99U);
    msg.setDestination(22579U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.4405155239483016);
    msg.setSource(47752U);
    msg.setSourceEntity(214U);
    msg.setDestination(6837U);
    msg.setDestinationEntity(31U);
    msg.target = 48965U;
    msg.bearing = 0.21729929672339754;
    msg.elevation = 0.1075787171327437;

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
    msg.setTimeStamp(0.5143974596238217);
    msg.setSource(63215U);
    msg.setSourceEntity(88U);
    msg.setDestination(37088U);
    msg.setDestinationEntity(183U);
    msg.target = 48980U;
    msg.bearing = 0.04797325882265413;
    msg.elevation = 0.7205230177780203;

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
    msg.setTimeStamp(0.44259939777659063);
    msg.setSource(24946U);
    msg.setSourceEntity(82U);
    msg.setDestination(31973U);
    msg.setDestinationEntity(209U);
    msg.target = 21296U;
    msg.bearing = 0.6998421602973312;
    msg.elevation = 0.7835626865173596;

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
    msg.setTimeStamp(0.9506373897219483);
    msg.setSource(52457U);
    msg.setSourceEntity(4U);
    msg.setDestination(35521U);
    msg.setDestinationEntity(142U);
    msg.target = 59466U;
    msg.x = 0.6227690602114246;
    msg.y = 0.5832513752639513;
    msg.z = 0.8101288159013131;

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
    msg.setTimeStamp(0.1278900867365258);
    msg.setSource(33005U);
    msg.setSourceEntity(130U);
    msg.setDestination(17405U);
    msg.setDestinationEntity(195U);
    msg.target = 5996U;
    msg.x = 0.5287126313125312;
    msg.y = 0.16067525145675365;
    msg.z = 0.8702741073322257;

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
    msg.setTimeStamp(0.35393972475291646);
    msg.setSource(22394U);
    msg.setSourceEntity(68U);
    msg.setDestination(46640U);
    msg.setDestinationEntity(102U);
    msg.target = 3211U;
    msg.x = 0.4312413677097553;
    msg.y = 0.7644299256725272;
    msg.z = 0.9279824300447972;

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
    msg.setTimeStamp(0.988093363803854);
    msg.setSource(16703U);
    msg.setSourceEntity(19U);
    msg.setDestination(52031U);
    msg.setDestinationEntity(16U);
    msg.target = 43543U;
    msg.lat = 0.9537474226431932;
    msg.lon = 0.6391319359966077;
    msg.z_units = 28U;
    msg.z = 0.6800923777400489;

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
    msg.setTimeStamp(0.632556402665542);
    msg.setSource(59413U);
    msg.setSourceEntity(116U);
    msg.setDestination(58939U);
    msg.setDestinationEntity(161U);
    msg.target = 64630U;
    msg.lat = 0.9780120473068714;
    msg.lon = 0.3984148381995627;
    msg.z_units = 99U;
    msg.z = 0.7280536193887172;

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
    msg.setTimeStamp(0.39776733819419297);
    msg.setSource(51326U);
    msg.setSourceEntity(162U);
    msg.setDestination(40425U);
    msg.setDestinationEntity(50U);
    msg.target = 54401U;
    msg.lat = 0.43076880369406134;
    msg.lon = 0.5983448452670805;
    msg.z_units = 32U;
    msg.z = 0.2885618791117688;

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
    msg.setTimeStamp(0.8078645674754648);
    msg.setSource(30724U);
    msg.setSourceEntity(153U);
    msg.setDestination(15700U);
    msg.setDestinationEntity(23U);
    msg.locale.assign("RGZASOCPFTGYWHMYTOZABTYOLVWRBLZRNJTTUEZPSHBCAEBNESYPFNXUFEXAMRKQIVDKPXMYUUHEKQRYJLCPBAVEKIBKBMYJWMTEGLXYHDSUDSAFLIAINRJGJHCVWNBOZKSIDQUVXIHYAHIKMFGJXARDVOLMVQLTQQQCDWCJEEWZIZHUBWFJWSQOOLMZQDOYCREFVXGTPGSPUNSKMT");
    const signed char tmp_msg_0[] = {100, 45, 2, 80, 23, 83, -49, -91, -64, -17, -100, -36, -47, -44, -46, 11, 28, 57, -111, 45, 2, 8, -99, 73, 112, -81, -31, -11, 86, -117, -74, 75, -77, 27, 98, -113, -126, -33, -45, 4, 122, -115, -105, -102, 82, -39, -106, -100, -39, 75, -32, -85, -57, -79, 73, -74, -86, -117, -35, 46, -91, -85, 22, 102, 50, 19, 75, 4, 12, -128, -88, -6, 68, 71, -101, -65, -40, 13, 16, 21, 40, -37, -105, -99, 9, 74, -56, -72, 17, -35, 29, 109, -2, -24, -120, -39, 3, -81, -25, 70, -20, 105, 80, 6, 17, 100, -108, -8, 116, -45, 56, -50, -1, -127, -80, 116, -83, 79, -98, -43, -115, -30, -7, 38, 14, 0, 118, -2, -55, 28, -34, 1, -18, -100, -10, -96, -20, 44, -125, -40, 79, 16, -81, 30, 70, -1, 28, 97, 7, -68, 46, 71, -128, -97, -34, 64, -79, -48, 16, 56, -61};
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
    msg.setTimeStamp(0.1662124739263936);
    msg.setSource(58848U);
    msg.setSourceEntity(96U);
    msg.setDestination(18522U);
    msg.setDestinationEntity(120U);
    msg.locale.assign("HXEIWHQGPGLMFSZXKWFLUOLCVOPZQBOQVBQRRARAEWCKDLRBXFTEDTMIJHFRHBICCBTKFZXUDPUOPUCVNSSKGBWZYXDZKPZYPYYJGWOQNCZJHGMMJCQJTPZUOINANOYSAYKVFTDOATKTFNGFRDBKKGMJAUNUMTRSOWZQYFYTIH");
    const signed char tmp_msg_0[] = {-21, 11, -5, 41, -123, 28, 119, -114, -9, 91, 49, -110, 38, 52, -91, 98, 111, 22, 75, -46, -3, -33, 79, -61, 102, 84, -95, -93, -63, 81, -93, -52, -53, 33, 61, -70, -88, -10, 40, -79, -17, 26, 126, -84, 43, -75, -44, 104, 16, -14, -122, -79, 33, -92, -82, 22, -87, -52, -45, 126, -80, -70, -124, -114, -14, 87, 2, 64, 41, -102, -11, -45, -91, -70, 101, 11, 114, -12, 105, 111, 66, 110, 14, -114, -7, -84, -124, 0, 32, 107, 77, -28, 84, -95, 77, 54, 100, -9, -51, 113, 59, -116, -74, -19, 7, -52, -68, 93, -113, 36, -117, 34, -45, -112};
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
    msg.setTimeStamp(0.8158252140639638);
    msg.setSource(35427U);
    msg.setSourceEntity(54U);
    msg.setDestination(110U);
    msg.setDestinationEntity(140U);
    msg.locale.assign("DRLVOBGYRQLAZAMFIBKJPUWV");
    const signed char tmp_msg_0[] = {3, 46, -8, 100, -61, -124, -2, -33, 98, 97, -105, -126, 53, 56, -19, 10, -14, -16, -13, 24, 52, 107, -70, 123, -107, -110, 126, 40, 107, -26, -113, 33, -86, -21, -30, -52, 45, 71, -92, -86, 96, 113, 28, 46, -106, -56, -108, -14, -45, 54, 59, -18, 9, -67, 59, -13, -60, -110, -38, -86, -125, -99, -105, -99, 118, 48, -5, -18};
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
    msg.setTimeStamp(0.7340056414712485);
    msg.setSource(16212U);
    msg.setSourceEntity(44U);
    msg.setDestination(32122U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.12994493232396964);
    msg.setSource(45346U);
    msg.setSourceEntity(43U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.37590051602389263);
    msg.setSource(22921U);
    msg.setSourceEntity(116U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.08100943520789583);
    msg.setSource(61030U);
    msg.setSourceEntity(97U);
    msg.setDestination(54381U);
    msg.setDestinationEntity(191U);
    msg.camid = 84U;
    msg.x = 23385U;
    msg.y = 28216U;

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
    msg.setTimeStamp(0.5225504081684803);
    msg.setSource(2630U);
    msg.setSourceEntity(19U);
    msg.setDestination(44713U);
    msg.setDestinationEntity(77U);
    msg.camid = 224U;
    msg.x = 33U;
    msg.y = 36770U;

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
    msg.setTimeStamp(0.5131408780166823);
    msg.setSource(49954U);
    msg.setSourceEntity(23U);
    msg.setDestination(15739U);
    msg.setDestinationEntity(189U);
    msg.camid = 177U;
    msg.x = 23195U;
    msg.y = 20271U;

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
    msg.setTimeStamp(0.005619910423536045);
    msg.setSource(25501U);
    msg.setSourceEntity(249U);
    msg.setDestination(31992U);
    msg.setDestinationEntity(41U);
    msg.camid = 191U;
    msg.x = 21941U;
    msg.y = 20884U;

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
    msg.setTimeStamp(0.754673543396157);
    msg.setSource(54632U);
    msg.setSourceEntity(171U);
    msg.setDestination(21935U);
    msg.setDestinationEntity(78U);
    msg.camid = 38U;
    msg.x = 52633U;
    msg.y = 39612U;

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
    msg.setTimeStamp(0.4366273415094565);
    msg.setSource(20628U);
    msg.setSourceEntity(132U);
    msg.setDestination(23225U);
    msg.setDestinationEntity(21U);
    msg.camid = 89U;
    msg.x = 1423U;
    msg.y = 25361U;

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
    msg.setTimeStamp(0.6537863685760443);
    msg.setSource(63039U);
    msg.setSourceEntity(122U);
    msg.setDestination(18674U);
    msg.setDestinationEntity(25U);
    msg.tracking = 70U;
    msg.lat = 0.9755791915349515;
    msg.lon = 0.05515375024587099;
    msg.x = 0.6709147887552462;
    msg.y = 0.02135178685360406;
    msg.z = 0.5493630589941012;

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
    msg.setTimeStamp(0.8720536319400913);
    msg.setSource(4765U);
    msg.setSourceEntity(249U);
    msg.setDestination(13078U);
    msg.setDestinationEntity(195U);
    msg.tracking = 70U;
    msg.lat = 0.5416258720077959;
    msg.lon = 0.0054835939992731175;
    msg.x = 0.5466860907142709;
    msg.y = 0.759484668476123;
    msg.z = 0.7286998600241941;

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
    msg.setTimeStamp(0.8995995026564173);
    msg.setSource(30205U);
    msg.setSourceEntity(55U);
    msg.setDestination(4401U);
    msg.setDestinationEntity(79U);
    msg.tracking = 252U;
    msg.lat = 0.9326867861797423;
    msg.lon = 0.7273878988596862;
    msg.x = 0.003381485486018021;
    msg.y = 0.3141617319923926;
    msg.z = 0.03952205550705612;

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
    msg.setTimeStamp(0.2259548368152695);
    msg.setSource(59319U);
    msg.setSourceEntity(210U);
    msg.setDestination(2222U);
    msg.setDestinationEntity(125U);
    msg.target.assign("WXXYWKOLMOPQHANCOCBWGWWKZYHAJTBIIYDUJTIBINDNLRWGGCWGXYBKAPJVCHMDQUQPPJCWSHUSZERQAGLNNOXIFZTCXIDJBLNQAQHLUYVR");
    msg.lbearing = 0.6118431881144949;
    msg.lelevation = 0.6283482682576481;
    msg.bearing = 0.16164530278864486;
    msg.elevation = 0.3547892266870888;
    msg.phi = 0.8420455968298692;
    msg.theta = 0.9889438569493195;
    msg.psi = 0.4853122703188928;
    msg.accuracy = 0.04415684424728039;

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
    msg.setTimeStamp(0.6057409447738765);
    msg.setSource(21959U);
    msg.setSourceEntity(91U);
    msg.setDestination(64917U);
    msg.setDestinationEntity(199U);
    msg.target.assign("HVTULSHUGGAOOJBRTNLKGMOHDUVIFAFJXKVRREXNCRCNAKBLYYXBDKENFWZABWJEHWLUSVDWYKIEXHXGVHWQDRZQSTROWNBRLPMUXYMGOSPPDULCJAEPIILBZCNGTZSYBRAMQQYNNPKVJVFEZFZEGCYHMOAGYQVNBUTKSZIOJTFECOEP");
    msg.lbearing = 0.33862605905798426;
    msg.lelevation = 0.698517954516598;
    msg.bearing = 0.2747737158061143;
    msg.elevation = 0.8185426047324899;
    msg.phi = 0.5345790834901294;
    msg.theta = 0.15252912267293506;
    msg.psi = 0.7770199632362566;
    msg.accuracy = 0.7974334306992871;

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
    msg.setTimeStamp(0.2680167322696567);
    msg.setSource(49332U);
    msg.setSourceEntity(198U);
    msg.setDestination(40885U);
    msg.setDestinationEntity(93U);
    msg.target.assign("ZWGFLGDJJAGYFRUNRGHZSLIQBHXGCPMVERIRFZLUVEOITZMKRNANQDLDABNYQCBPKCACM");
    msg.lbearing = 0.6656769053605904;
    msg.lelevation = 0.8770189697261142;
    msg.bearing = 0.9856183809512845;
    msg.elevation = 0.7460093265463956;
    msg.phi = 0.03990219162295938;
    msg.theta = 0.1405116013600245;
    msg.psi = 0.1061153107836258;
    msg.accuracy = 0.37933643807209105;

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
    msg.setTimeStamp(0.5048614700861682);
    msg.setSource(44728U);
    msg.setSourceEntity(120U);
    msg.setDestination(25562U);
    msg.setDestinationEntity(242U);
    msg.target.assign("DFTPFHRQXBDIQWIHGFSLJIROUNKNJOWBZERYZUGJMKICJVGQAPANPRNTAFTGHWSKVLXAXLPFMIQCUDEESFICSVHMZMHNUHBWPTJJOZEBPAZTBLMNNGVRVDYEFLZTDWUENRZICSKQMEXCFGYXKXVJRLZQUTNRYZAFYD");
    msg.x = 0.6961619482350763;
    msg.y = 0.20197448675913365;
    msg.z = 0.8788536054233816;
    msg.n = 0.6340046007806618;
    msg.e = 0.5909073861977919;
    msg.d = 0.5370744179447307;
    msg.phi = 0.12409286476071013;
    msg.theta = 0.3159906019012758;
    msg.psi = 0.33372874520769;
    msg.accuracy = 0.5042507690579779;

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
    msg.setTimeStamp(0.5548498208116199);
    msg.setSource(27367U);
    msg.setSourceEntity(204U);
    msg.setDestination(7896U);
    msg.setDestinationEntity(104U);
    msg.target.assign("PVDQFLKULHAVVYYUHFSUBRQKFNSFDEXIUGMATQRSHAATYZQHGGEFVA");
    msg.x = 0.6243291703159165;
    msg.y = 0.7422907460062447;
    msg.z = 0.9026320955401095;
    msg.n = 0.931416169507411;
    msg.e = 0.4146829719350351;
    msg.d = 0.29118347132645395;
    msg.phi = 0.7062619947261688;
    msg.theta = 0.13713991890901123;
    msg.psi = 0.5470628148832254;
    msg.accuracy = 0.8982332526434619;

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
    msg.setTimeStamp(0.41319345313515476);
    msg.setSource(61748U);
    msg.setSourceEntity(209U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(190U);
    msg.target.assign("JFWJAVBZYZVEZRGNLVTZSBGZXQYVSCQMKHOZJYBUOQDOJPBOLMFOVXBZDTUMKJVUEEATENMSFUBNNFPCAPMFMANGYRSQSGEUFLMXNCO");
    msg.x = 0.22576771310250532;
    msg.y = 0.01804007986239098;
    msg.z = 0.25289866659027416;
    msg.n = 0.7475600225429501;
    msg.e = 0.9444882834763685;
    msg.d = 0.04628837736497304;
    msg.phi = 0.17482812640161882;
    msg.theta = 0.1883664939736729;
    msg.psi = 0.05106379341395639;
    msg.accuracy = 0.8513703621169414;

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
    msg.setTimeStamp(0.8720122045209495);
    msg.setSource(2892U);
    msg.setSourceEntity(32U);
    msg.setDestination(5585U);
    msg.setDestinationEntity(66U);
    msg.target.assign("STGRTRRKOZWITHFJPKPHKIQXQRNLBHOUBWQUEQCDNIDNLCOQDISGSCDDLFDOAIMOVQCBBPXGRKBLVGSEWFMEJAECSMVKCZWKXUYHAHTXZPABRDFTJKSTMBGFUALTSFWYVMUYEGJHWQNGAXWZYKPHFBNTQCYDRTAVPZRENEJUJLLMAOVYBINDQJZKIVQJPUHZEEOXMKYUXWVTFUNXGWY");
    msg.lat = 0.03902992012377959;
    msg.lon = 0.12427733493418036;
    msg.z_units = 225U;
    msg.z = 0.049515232025664546;
    msg.accuracy = 0.1958866541303811;

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
    msg.setTimeStamp(0.5532224159074243);
    msg.setSource(10248U);
    msg.setSourceEntity(62U);
    msg.setDestination(56301U);
    msg.setDestinationEntity(10U);
    msg.target.assign("LKUWPOBZMHOVDZDOREQKGJTJXGMNITFGVFIPKIWZQCRQHXCOUQDEBHLGWIDNSZCOWBXXMFVZCUGLXNXNBIAQVVQZJGVGTYIBPQUDKCNDRPCCKAJGXFGEYZLURYOTV");
    msg.lat = 0.9778707260276519;
    msg.lon = 0.2717642489251467;
    msg.z_units = 83U;
    msg.z = 0.09999323797174042;
    msg.accuracy = 0.6426357811405665;

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
    msg.setTimeStamp(0.7573981900111072);
    msg.setSource(24003U);
    msg.setSourceEntity(40U);
    msg.setDestination(62932U);
    msg.setDestinationEntity(120U);
    msg.target.assign("IZPTPJHIAJKZQPTDHSEJVFMUOTGROZIBERZKMCIQFQFRAOEVTQYUDGMVBMKURBWPNHLDOXUQOYRYLJHYWXTUWBCFCSIXRILRKPYBHRGUCNCCBVHTKOVDIICIKFSWEMZPSWBNLOMSQQAJETPNUDOJEUYAUXSGZLCGTTCIMAPFQMLVHKNBWDVVXHWXGSGJGHNEQWBSXFSTDKJZYCVLALWJLNERZKFYNPGDEKGNJXHXF");
    msg.lat = 0.14969407447461847;
    msg.lon = 0.5185734813002008;
    msg.z_units = 42U;
    msg.z = 0.41569663143452185;
    msg.accuracy = 0.8708334349601377;

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
    msg.setTimeStamp(0.2426154470375943);
    msg.setSource(48347U);
    msg.setSourceEntity(47U);
    msg.setDestination(51125U);
    msg.setDestinationEntity(212U);
    msg.name.assign("VAXBEMFPFOLCOYWSRFVMAPWOJUZYGYJJUJBVXXBSCHJSSUQXYEWDFTILBYLAEHUHMIQZJYFONCCLMPRMIGTGQVWEGVSNKQDPLZBDAFCDZWGUDVPPFIHIPKKQKSWQOYXBLUJFRTBEDTHFKAXXTNKZCKPRNCUTXGNBMZIEQAPGZRHZDIOENOSVMNJMIATHCHOPSYGRUJLLCWTREKDAZZMEDXH");
    msg.lat = 0.0014441331181407335;
    msg.lon = 0.24582501586397676;
    msg.z = 0.813578081239973;
    msg.z_units = 145U;

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
    msg.setTimeStamp(0.4296009054024015);
    msg.setSource(54556U);
    msg.setSourceEntity(175U);
    msg.setDestination(10361U);
    msg.setDestinationEntity(139U);
    msg.name.assign("YQYFUTUBDYKXAO");
    msg.lat = 0.9983514904829048;
    msg.lon = 0.06211263468682704;
    msg.z = 0.4695647394321828;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.228233827530539);
    msg.setSource(19465U);
    msg.setSourceEntity(75U);
    msg.setDestination(62892U);
    msg.setDestinationEntity(158U);
    msg.name.assign("JPZSYOTWCQSODUEFCAGJQAWHNYBSUIPBWACEDBOZVTYSKGKDIZNVXKUKSBRHKCMUNAWFPECQVVXDXVYUWNITFGJXNAECSETHTEMXRCBSMIKQHDGOJQBUHSATOHFPZQTPFXBFK");
    msg.lat = 0.9588843351783285;
    msg.lon = 0.9579377780791557;
    msg.z = 0.1806742879776556;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.020172237830776707);
    msg.setSource(51197U);
    msg.setSourceEntity(210U);
    msg.setDestination(3588U);
    msg.setDestinationEntity(23U);
    msg.op = 118U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TQSKGRQROXAHEIEJEXIN");
    tmp_msg_0.lat = 0.7408554146652401;
    tmp_msg_0.lon = 0.4549461661540122;
    tmp_msg_0.z = 0.05946758966198551;
    tmp_msg_0.z_units = 110U;
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
    msg.setTimeStamp(0.8622903520607412);
    msg.setSource(33020U);
    msg.setSourceEntity(23U);
    msg.setDestination(53650U);
    msg.setDestinationEntity(217U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.005245457598022307);
    msg.setSource(30379U);
    msg.setSourceEntity(82U);
    msg.setDestination(19786U);
    msg.setDestinationEntity(161U);
    msg.op = 133U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CUVFIMAHMYFIACRSXOYSJPZCHFEVKNLXPLOGIXGOELMEPZNTDSUGLWFWWLQHSLBWHKFZBMWSVPVPJTMDNEHQJIABYOBCFCIETRDMBNBAFZVMDDIZOIFWNLRIOUNANDTEOIKAJQTZKGSQXBLKGAUUSGPQSQYWHKQEKBVZYQNJXBZUBD");
    tmp_msg_0.lat = 0.07396188940965343;
    tmp_msg_0.lon = 0.21003003108183227;
    tmp_msg_0.z = 0.8089004086375661;
    tmp_msg_0.z_units = 3U;
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
    msg.setTimeStamp(0.21993891932036602);
    msg.setSource(29465U);
    msg.setSourceEntity(84U);
    msg.setDestination(46511U);
    msg.setDestinationEntity(52U);
    msg.value = 0.3676891943744667;
    msg.type = 180U;

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
    msg.setTimeStamp(0.11337229267842819);
    msg.setSource(63103U);
    msg.setSourceEntity(252U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(110U);
    msg.value = 0.5348970942900573;
    msg.type = 199U;

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
    msg.setTimeStamp(0.5069560253253965);
    msg.setSource(33078U);
    msg.setSourceEntity(86U);
    msg.setDestination(59637U);
    msg.setDestinationEntity(205U);
    msg.value = 0.06600548594806233;
    msg.type = 37U;

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
    msg.setTimeStamp(0.9656322300960082);
    msg.setSource(21684U);
    msg.setSourceEntity(62U);
    msg.setDestination(53065U);
    msg.setDestinationEntity(86U);
    msg.value = 0.1105350103298639;

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
    msg.setTimeStamp(0.2505809184899841);
    msg.setSource(57352U);
    msg.setSourceEntity(213U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0772711217140768;

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
    msg.setTimeStamp(0.7069883853903042);
    msg.setSource(64256U);
    msg.setSourceEntity(91U);
    msg.setDestination(25633U);
    msg.setDestinationEntity(193U);
    msg.value = 0.5263761454627313;

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
    msg.setTimeStamp(0.8326438983379423);
    msg.setSource(8969U);
    msg.setSourceEntity(126U);
    msg.setDestination(5507U);
    msg.setDestinationEntity(46U);
    msg.timestamp_last_service = 0.2712863580002637;
    msg.time_next_service = 0.07959976820484371;
    msg.time_motor_next_service = 0.15729565602063056;
    msg.time_idle_ground = 0.35751854717153575;
    msg.time_idle_air = 0.8672986615311825;
    msg.time_idle_water = 0.668644033442295;
    msg.time_idle_underwater = 0.5231708387940933;
    msg.time_idle_unknown = 0.002222482624280042;
    msg.time_motor_ground = 0.286210238032501;
    msg.time_motor_air = 0.8689629297635155;
    msg.time_motor_water = 0.5605474004563057;
    msg.time_motor_underwater = 0.9330045786199253;
    msg.time_motor_unknown = 0.0682171767343932;
    msg.rpm_min = -19678;
    msg.rpm_max = -22289;
    msg.depth_max = 0.31268329979529874;

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
    msg.setTimeStamp(0.12443333692943626);
    msg.setSource(18303U);
    msg.setSourceEntity(26U);
    msg.setDestination(27276U);
    msg.setDestinationEntity(56U);
    msg.timestamp_last_service = 0.9445692192502392;
    msg.time_next_service = 0.937362886697698;
    msg.time_motor_next_service = 0.8724068650954867;
    msg.time_idle_ground = 0.13559461822011154;
    msg.time_idle_air = 0.8234183947573804;
    msg.time_idle_water = 0.9391646610849679;
    msg.time_idle_underwater = 0.19580218148680162;
    msg.time_idle_unknown = 0.9738733793107652;
    msg.time_motor_ground = 0.7366418991370274;
    msg.time_motor_air = 0.09936043894215285;
    msg.time_motor_water = 0.564890501909955;
    msg.time_motor_underwater = 0.993361893078852;
    msg.time_motor_unknown = 0.6956886276529056;
    msg.rpm_min = -12455;
    msg.rpm_max = 19277;
    msg.depth_max = 0.10881805814067635;

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
    msg.setTimeStamp(0.1177440902090422);
    msg.setSource(29776U);
    msg.setSourceEntity(209U);
    msg.setDestination(59495U);
    msg.setDestinationEntity(198U);
    msg.timestamp_last_service = 0.9647954198929151;
    msg.time_next_service = 0.8566613043264119;
    msg.time_motor_next_service = 0.3733665871317815;
    msg.time_idle_ground = 0.0903584534040841;
    msg.time_idle_air = 0.8949234550430029;
    msg.time_idle_water = 0.4914881619986624;
    msg.time_idle_underwater = 0.6155013620937168;
    msg.time_idle_unknown = 0.4078985994038927;
    msg.time_motor_ground = 0.9737866920820817;
    msg.time_motor_air = 0.1926073979454389;
    msg.time_motor_water = 0.3462745764857428;
    msg.time_motor_underwater = 0.8775437289802572;
    msg.time_motor_unknown = 0.3977351607659042;
    msg.rpm_min = 11231;
    msg.rpm_max = 21024;
    msg.depth_max = 0.4149449350299814;

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
    msg.setTimeStamp(0.758850685854107);
    msg.setSource(1643U);
    msg.setSourceEntity(118U);
    msg.setDestination(34787U);
    msg.setDestinationEntity(142U);
    msg.severity = 50U;
    msg.text.assign("XNFQYNKXDJHBWIGSRIXFLWIECLUOVCLDAKUGSSAPOUGQKQXNBYLOSPPWHVCIYVVBKANJDZZDFXSSJOYKPHNMDLSMQQUAGBUCCJYMDYDVQQRNRLAWFKBAWZMXR");

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
    msg.setTimeStamp(0.388516353914216);
    msg.setSource(47775U);
    msg.setSourceEntity(162U);
    msg.setDestination(9632U);
    msg.setDestinationEntity(140U);
    msg.severity = 42U;
    msg.text.assign("WOGBRHVUBDISAUKOYWQVCUMKBQFOMYISLTXOJIJWUGRDTDWPGAKAYKNIZXHTKEQBDLLLNFLNAMKFHXIECEJHNZAGOYCDQCUFSTXFGWBPMLUZATIXVJUTVF");

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
    msg.setTimeStamp(0.7036477074671607);
    msg.setSource(52129U);
    msg.setSourceEntity(52U);
    msg.setDestination(63623U);
    msg.setDestinationEntity(237U);
    msg.severity = 193U;
    msg.text.assign("UANJQGHAXJSNPMXAQBOPBMMKZTUMOCMBFBEFFBOXKQIHZBRSFLEFSYOAEMPHUILAPYNLAIQAVKWTTJFPRGHXEFBBIICJFUGSCXDKIZNDRC");

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
    msg.setTimeStamp(0.22639606388953104);
    msg.setSource(28540U);
    msg.setSourceEntity(83U);
    msg.setDestination(30599U);
    msg.setDestinationEntity(62U);
    msg.channel = -98;
    msg.value = -501248023;
    msg.gain = 36U;

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
    msg.setTimeStamp(0.09968157222693319);
    msg.setSource(60418U);
    msg.setSourceEntity(143U);
    msg.setDestination(43975U);
    msg.setDestinationEntity(175U);
    msg.channel = 115;
    msg.value = 587189738;
    msg.gain = 49U;

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
    msg.setTimeStamp(0.6459610340234742);
    msg.setSource(264U);
    msg.setSourceEntity(30U);
    msg.setDestination(11534U);
    msg.setDestinationEntity(151U);
    msg.channel = -31;
    msg.value = -1650620733;
    msg.gain = 231U;

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
    msg.setTimeStamp(0.6905051076141951);
    msg.setSource(47628U);
    msg.setSourceEntity(164U);
    msg.setDestination(33504U);
    msg.setDestinationEntity(1U);
    msg.ch01 = 0.2899817346762791;
    msg.ch02 = 0.547905530266031;
    msg.ch03 = 0.5472855525449302;
    msg.ch04 = 0.35813190679730533;
    msg.ch05 = 0.9704713580577338;
    msg.ch06 = 0.9549016925544612;
    msg.ch07 = 0.5043629561898973;
    msg.ch08 = 0.9798293201164041;
    msg.ch09 = 0.06279051877786024;
    msg.ch10 = 0.456569767082626;
    msg.ch11 = 0.6060359857251735;
    msg.ch12 = 0.903699654007156;
    msg.ch13 = 0.5876413720891366;
    msg.ch14 = 0.7237562400112075;
    msg.ch15 = 0.6071179209080579;
    msg.ch16 = 0.3236350944359315;

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
    msg.setTimeStamp(0.022685908404899813);
    msg.setSource(13026U);
    msg.setSourceEntity(8U);
    msg.setDestination(52884U);
    msg.setDestinationEntity(223U);
    msg.ch01 = 0.6070574536730933;
    msg.ch02 = 0.8478262869424539;
    msg.ch03 = 0.7585780970843742;
    msg.ch04 = 0.7644628203175481;
    msg.ch05 = 0.4933905629214509;
    msg.ch06 = 0.4413410213220629;
    msg.ch07 = 0.3669322283808928;
    msg.ch08 = 0.6531423438075736;
    msg.ch09 = 0.8833574739642388;
    msg.ch10 = 0.07343946782112121;
    msg.ch11 = 0.2577986041900836;
    msg.ch12 = 0.8570841587028757;
    msg.ch13 = 0.018231325701578704;
    msg.ch14 = 0.31430977272854055;
    msg.ch15 = 0.3101452037898187;
    msg.ch16 = 0.5564115184391725;

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
    msg.setTimeStamp(0.17403006051768055);
    msg.setSource(41016U);
    msg.setSourceEntity(40U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(95U);
    msg.ch01 = 0.7837289709952846;
    msg.ch02 = 0.7247412987005051;
    msg.ch03 = 0.7047771409486081;
    msg.ch04 = 0.3042885353143876;
    msg.ch05 = 0.7826271684048779;
    msg.ch06 = 0.42163198319900197;
    msg.ch07 = 0.5275401825514912;
    msg.ch08 = 0.0249927623774987;
    msg.ch09 = 0.7173457003839337;
    msg.ch10 = 0.9945861521511393;
    msg.ch11 = 0.7221887238593792;
    msg.ch12 = 0.8086225370905841;
    msg.ch13 = 0.06722710848302793;
    msg.ch14 = 0.8644503918673381;
    msg.ch15 = 0.11470732077469181;
    msg.ch16 = 0.5309439595567678;

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

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.22947463481482533);
    msg.setSource(45849U);
    msg.setSourceEntity(133U);
    msg.setDestination(38726U);
    msg.setDestinationEntity(74U);
    msg.op = 146U;
    msg.lat = 0.05233756821309876;
    msg.lon = 0.7071218384929501;
    msg.height = 0.39567982466679685;
    msg.depth = 0.5907442553261595;
    msg.alt = 0.2684539198775415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.2520016013488978);
    msg.setSource(8011U);
    msg.setSourceEntity(213U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(16U);
    msg.op = 65U;
    msg.lat = 0.8266441071678652;
    msg.lon = 0.08863379912598646;
    msg.height = 0.40682072287868254;
    msg.depth = 0.6124197850588515;
    msg.alt = 0.3248507996688621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.6022845177144501);
    msg.setSource(49272U);
    msg.setSourceEntity(51U);
    msg.setDestination(14520U);
    msg.setDestinationEntity(31U);
    msg.op = 110U;
    msg.lat = 0.9799104135123057;
    msg.lon = 0.30731183073300117;
    msg.height = 0.16160746141171956;
    msg.depth = 0.7632087593512836;
    msg.alt = 0.13422511336431397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.2615713343608872);
    msg.setSource(51113U);
    msg.setSourceEntity(181U);
    msg.setDestination(8464U);
    msg.setDestinationEntity(131U);
    msg.direction = 0.013771853176339444;
    msg.speed = 0.8841586460748194;
    msg.turbulence = 0.3481985065813621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.44069246786869765);
    msg.setSource(23226U);
    msg.setSourceEntity(203U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(155U);
    msg.direction = 0.6290381735352008;
    msg.speed = 0.5873997078123442;
    msg.turbulence = 0.49675435734354934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.7530036306023666);
    msg.setSource(1307U);
    msg.setSourceEntity(253U);
    msg.setDestination(54050U);
    msg.setDestinationEntity(126U);
    msg.direction = 0.2907984278952831;
    msg.speed = 0.988103946259011;
    msg.turbulence = 0.8296871449804781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.10245949401591514);
    msg.setSource(60753U);
    msg.setSourceEntity(170U);
    msg.setDestination(49426U);
    msg.setDestinationEntity(119U);
    msg.msg_type.assign("PGPGMKPWBAPGQXZYIMFBWCOHLYFXKNVZSSRVCALIJKIFCWPRLECREGQKIPVHIRNZJFVBEUVBQDTTMDISXFYTSTDAOAEWJUJAHVSMLYUDRHIMUZZSLCFVPWGVANCDXGPJEVOZJOJATLAQUFYSTKALUGCHEDLETNYQWXRFOIWDRDMJMHBYKU");
    msg.sensor_class.assign("HHHEUOQSUHCOOGIJQLJWDKJOARBMSFUVWPQCCZXUSPPXLXGFRWDDPKJKRGAAEGZCUNHUOMBKITIKKDJWLBAGOZFJLUJHQHZPMVZQPDDEPDXRSITNPL");
    msg.mmsi.assign("ATEYGNNPKZIAPCBCXOLXJQ");
    msg.callsign.assign("GUTEGGQYKUTJXSXYOUFPNKYVEDZPCKGVITBHXSLWLXVOELIROMIRZDYXDJDSIQTHMAXQWJUUENBKMXWIAZXWWRSHREOKBPRQXTSECUGFEAAFOHODOWNVFHFIZNAKHKCYPNDRUMWCJZDRHCSCBQJNGKMNBFJYBIJDVBLNJMGCKMZYEEJMWFATOUFZZNSPSXPGHMRCLPAWTPRIGBCIPAYOBCHPVLNZZQQLW");
    msg.name.assign("HRGOCBQMNNILM");
    msg.nav_status = 124U;
    msg.type_and_cargo = 141U;
    msg.lat = 0.5530954105662617;
    msg.lon = 0.05674391480616725;
    msg.course = 0.5560416887402784;
    msg.speed = 0.6242155628546296;
    msg.dist = 0.888684825611984;
    msg.a = 0.243427475768915;
    msg.b = 0.307603651117613;
    msg.c = 0.07434083394626256;
    msg.d = 0.7732474071121103;
    msg.draught = 0.41974325825022996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.6662573079509523);
    msg.setSource(51496U);
    msg.setSourceEntity(195U);
    msg.setDestination(29196U);
    msg.setDestinationEntity(196U);
    msg.msg_type.assign("VHYBQMUYLZNEYBHQHEXOATDKCKOQEMJFATBRDGPALCTIJAGWWOSEDGXXJUMGPRSMVZSVXFXIHCCPFYSRIGQWGJMOWUXIUNEWJKNABUUXFYVMCCBJBZVHYQHVMTIRBANLPPHWHLYIBCPDDCNJECVFNRFZUQESDUJCWYBLPIXFSWORNAFUTLTKPETZIMXHKWZSIOTDFDIGKSJKEHVQNTSKKZPORRMMDSOYZXUAZGTEWFGDLLRL");
    msg.sensor_class.assign("TOJOJLWODAHYZVBVCMJVBILECNVEFLQHKXDVIPEAWALGTNPYRVYFUKYVPVECRMSLOCGJZUWPQNCZTCMDHLBAFMMJUSAWNIQSWBXEUQGTWNPFKZUMBVZEEAKUOVNLFXKGQIEFZGPSYNSGJLRRRSSIBTLFAOTWRGNYQPHGHSODHFEYTCINOOZYUSMXXRYCWHRAIJUIDQXAZXBRTJKUM");
    msg.mmsi.assign("EBIGETEOUFQUFVIUJWHCRMZAFCTXFRHNAUQKSRYVYNVYPLTVULDSAEBGGISTKIFWFRPZATQLDXUUJQNTAYPRFJHWFWLYGPBPCRCBZQVRMEMYYCZONQOPWRSHGXKUNHJPDVWIMGYDCSDZCDMVLMPOZSKHPHAJDLJFQSAQXQTGWC");
    msg.callsign.assign("MOVXRXUFXAUIZLKPZNUFAHNGDIGOBXBEBTVWQDTRAYRFQGTLQITNGMGMQTRMMCSLEPLYPLOBKVMQCSBZIJERFZECWHYPLFSIOYJDENZCGLZTSXPDKPJHWPTFTDJDQVNUNFDSRRLZMAOXJMHDANFSWQYUIB");
    msg.name.assign("EWSDGOSGYCUJZLICRMNRZXYYHJFZMADOHEOIQKFMOSJNUTTJAXZAHLLQYTALHNWZKAZSWVDPPRUBBXOTDJUNBZGQPAIWRZCXNLYGCBPYXBZSBVCXGEMABONIKOTRLPTVEKBQQUGEQNKPPFYRCAEUEDRGFPFCVVMAQOWDGLWBJYHAZQSXKCKKUKWHXIWF");
    msg.nav_status = 243U;
    msg.type_and_cargo = 108U;
    msg.lat = 0.23500853638427832;
    msg.lon = 0.7576286536080639;
    msg.course = 0.9235615661446769;
    msg.speed = 0.23831329824308511;
    msg.dist = 0.8162008765498934;
    msg.a = 0.587062451944117;
    msg.b = 0.654026844839775;
    msg.c = 0.202776761976604;
    msg.d = 0.9822464620264022;
    msg.draught = 0.284711413995019;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.35313176157010484);
    msg.setSource(15595U);
    msg.setSourceEntity(76U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(191U);
    msg.msg_type.assign("OLHGRUWSXTBAKFPGBUTRELPWCAJITKBGTMSBRVPDXLRNVACLMKQVKHVHZHAXODJGYNEWYGKHGRYPICDBLVNCTPEPEVFYIUTBDOSMU");
    msg.sensor_class.assign("PYGVSABIBLDOZ");
    msg.mmsi.assign("VDQVMSTRAYRFBBFVBSJQUICLIYPSBQZLXHLRIVXROSEVHDOGQCFKZLPWPOGWYBJWLOUQWAOXWTKCMLCXFHISYGSMTRN");
    msg.callsign.assign("AFAPKPZUFHLENKXQPUEHOUHKILNOHLLBEUONGOLIWSOZMZWSNZTSAXVIKGXFSRTJXONSOCDWQVBSPVVSAGCRGLDLWOPYMRHKCLWUWDJTJXLAUXERJYETPUZFWHYJSRVKRRVEXICUCATJDQKERIJICJGXCQ");
    msg.name.assign("KRHDENOHNJZMPCXKSRBGKUOXMIAOKVNOFBXVXAAOQWETWESCKZODPTJISGXCMLYSUNWPLGUTGZYUZCMNSERXXNUAHDKVAFCYHVYFAJDJVUQYFTVYQLMFCKBOZLDIZDRTESGPIYUQWHIWWODHQQXLBOXQLEUSPRVHOEFZKFAPJNBYVCNLLRZQLTRBRIYQKFTJGTUIURPMIERG");
    msg.nav_status = 59U;
    msg.type_and_cargo = 3U;
    msg.lat = 0.4011411985747072;
    msg.lon = 0.07047221157763262;
    msg.course = 0.05777926637936426;
    msg.speed = 0.3525903832835783;
    msg.dist = 0.16877032737356557;
    msg.a = 0.5715728512779098;
    msg.b = 0.6039372074324324;
    msg.c = 0.8416518835861594;
    msg.d = 0.3776582613181243;
    msg.draught = 0.4601810605538189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.6239053576538798);
    msg.setSource(25892U);
    msg.setSourceEntity(64U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(188U);
    msg.depth_at_loc.assign("ERGUJPNPMKSXSHGQWAIPUZEWUFFUHONHFJHPZINWLFGOFHDVKTDDOUMZZEQCMWRNTBQBVHLWKEJHVQHMGKYDDJVPAOPSUOOMGFLABSJIZVBGTUBEOUPVMVBBJXTLRTTKDEIFXYTJIWEFQQV");
    msg.danger.assign("UOMLLCVGAQBBCZUWOFKWWQADRFFLVIHKEWJFLHZRYZRKAXEARYWBDEKIXATMMGHZDAMXVKSHBOQPCCHRKJYEUXLSIZMEQOHOLDVJIUIUPTIYKTRRPKXYBUPYVDFLGIPADPQXQBUTDVEOEJXZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.3238374955875323);
    msg.setSource(22776U);
    msg.setSourceEntity(203U);
    msg.setDestination(48916U);
    msg.setDestinationEntity(247U);
    msg.depth_at_loc.assign("TQINHBZGDSVAQEQMWFKQOUOBYDJTJJNOIAXERFGWCEUXSIOYQUPSCEVGWOAOEMSDWKBOTIBEZFKHUPNQXBJRCEPDVDHXMMOZTPVGYUILLXLZBULGFBKDSGDFQCCRCXCDPLNTLKRRRFZBNQYXBQWMKSLYCTIVLM");
    msg.danger.assign("UOYABRYDZBJHKDHTNSLXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.11052385945777154);
    msg.setSource(1642U);
    msg.setSourceEntity(110U);
    msg.setDestination(37254U);
    msg.setDestinationEntity(177U);
    msg.depth_at_loc.assign("VYUGSXVHLPPTQAUWZCGVGLCKJQSAMEXPEKWBDGSMMTABPATUNSEUIWMZKQQBYXNDLVIGERBGXZIUNRTVHYUMAHSLOJPMZQOJIIFWFIICTWXHUNYQPUHGZTECTDNWACPNDEDDLDRKSOYRIGFAGKKEADFBPPYBKJLJGCHSCHQZSHDIE");
    msg.danger.assign("PYLLNSTJHFQTANFJWNYBWHOAPAFOGEBUUVKESZXXNARQFTLAANHWQQMLHNKUZRAPQTEGDGXDEBCADHOXIWRMMPMHJITLZXZKZDYGKIRZJXMUZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.036141897369204035);
    msg.setSource(55650U);
    msg.setSourceEntity(143U);
    msg.setDestination(25960U);
    msg.setDestinationEntity(160U);
    msg.time = 0.4746159709197304;
    msg.x = 0.878719269536083;
    msg.y = 0.7442447825291303;
    msg.z = 0.05485706346312802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.28538540473142915);
    msg.setSource(21909U);
    msg.setSourceEntity(36U);
    msg.setDestination(3363U);
    msg.setDestinationEntity(120U);
    msg.time = 0.6246729762337018;
    msg.x = 0.459396529714713;
    msg.y = 0.7402941088240784;
    msg.z = 0.8545694086625232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.13633432622992891);
    msg.setSource(42020U);
    msg.setSourceEntity(106U);
    msg.setDestination(7677U);
    msg.setDestinationEntity(194U);
    msg.time = 0.9376955478756999;
    msg.x = 0.4989688914446524;
    msg.y = 0.13744681972981343;
    msg.z = 0.8392319621837421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.19071683673284656);
    msg.setSource(132U);
    msg.setSourceEntity(65U);
    msg.setDestination(29429U);
    msg.setDestinationEntity(148U);
    msg.nbeams = 143U;
    msg.ncells = 105U;
    msg.coord_sys = 169U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.05980395060510668;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.49338887939787857);
    msg.setSource(13870U);
    msg.setSourceEntity(237U);
    msg.setDestination(23518U);
    msg.setDestinationEntity(105U);
    msg.nbeams = 5U;
    msg.ncells = 63U;
    msg.coord_sys = 59U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8588621174063403;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.6742795849937513);
    msg.setSource(35579U);
    msg.setSourceEntity(47U);
    msg.setDestination(63189U);
    msg.setDestinationEntity(131U);
    msg.nbeams = 207U;
    msg.ncells = 186U;
    msg.coord_sys = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.06457229426863098);
    msg.setSource(49951U);
    msg.setSourceEntity(211U);
    msg.setDestination(11419U);
    msg.setDestinationEntity(118U);
    msg.cell_position = 0.49776400841781854;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.02616823046806671;
    tmp_msg_0.amp = 0.8123610550445167;
    tmp_msg_0.cor = 3;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.8741536807206759);
    msg.setSource(52823U);
    msg.setSourceEntity(62U);
    msg.setDestination(35468U);
    msg.setDestinationEntity(102U);
    msg.cell_position = 0.021931130807821053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.33443140392997317);
    msg.setSource(5191U);
    msg.setSourceEntity(241U);
    msg.setDestination(11268U);
    msg.setDestinationEntity(156U);
    msg.cell_position = 0.652676729306442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.5521491675090643);
    msg.setSource(51446U);
    msg.setSourceEntity(129U);
    msg.setDestination(804U);
    msg.setDestinationEntity(126U);
    msg.vel = 0.8832360039606393;
    msg.amp = 0.7421965127305638;
    msg.cor = -91;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.8393359623352868);
    msg.setSource(223U);
    msg.setSourceEntity(87U);
    msg.setDestination(998U);
    msg.setDestinationEntity(198U);
    msg.vel = 0.2501758978943134;
    msg.amp = 0.5316413530329279;
    msg.cor = 104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.8717949600150486);
    msg.setSource(60794U);
    msg.setSourceEntity(150U);
    msg.setDestination(47203U);
    msg.setDestinationEntity(94U);
    msg.vel = 0.36287606502570036;
    msg.amp = 0.0207294675536982;
    msg.cor = -7;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.6954944001693003);
    msg.setSource(63096U);
    msg.setSourceEntity(86U);
    msg.setDestination(20883U);
    msg.setDestinationEntity(11U);
    msg.value = 0.42792957279012844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.501730892704892);
    msg.setSource(2122U);
    msg.setSourceEntity(190U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(1U);
    msg.value = 0.4514866964126183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.40978527383066243);
    msg.setSource(49359U);
    msg.setSourceEntity(29U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(38U);
    msg.value = 0.7628248084852718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.6004283725900166);
    msg.setSource(49358U);
    msg.setSourceEntity(105U);
    msg.setDestination(52371U);
    msg.setDestinationEntity(143U);
    msg.name.assign("EPWGOGBWEJYVIYVDNRARCSGPEFEZSPDZGUSSGMPQGBKZKTRZJLLDHHTCGMITMWCHTGMAIFBHECUTZGKWINUNNMLTJAAGAJDYWZPKJRRONZEIVOWVLQHXLYOENDRNUEAWHJASLUYKIASBORYBZIVVCIUQBXKQCDVJXNWKH");
    msg.value = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.7317378184177189);
    msg.setSource(36070U);
    msg.setSourceEntity(61U);
    msg.setDestination(30449U);
    msg.setDestinationEntity(178U);
    msg.name.assign("QTFUDRJHXUGWMNFKBANVIZLNPBWFRFBDMYNXIVUYYKXSRICYQMHYRNMHRNDZELBNSKGVWTRFLOIUJZCDNVTALZJDPMCRXMQQKILJECKXBNZBEMUTPOWFPZXTLBGZLEOSKGFTCRTCJPGYAAVKSUKEJLZHESESPPAOQIXHOGCCRFSPZGVHVQI");
    msg.value = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.6781145730154475);
    msg.setSource(48802U);
    msg.setSourceEntity(163U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(38U);
    msg.name.assign("ZLXPSYHPQNOWVKXIBTRHFHIWWLVUEVRKLBIVQRZJNQTFTWBJTVLGOHMMUHKJQTZMSBINEHBTOGBPAYDNXLIJRDGUMTRWHOCDURZIEYYBBECSXRSZEKUFGVTPMIQASOWAYJYZNOOVMNSMNACBSTFGLLSCCWVXBTJQEXDCU");
    msg.value = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.17795012995606907);
    msg.setSource(56251U);
    msg.setSourceEntity(83U);
    msg.setDestination(1826U);
    msg.setDestinationEntity(204U);
    msg.name.assign("QGBKOTGFEYPSITAZHLMSKNTDFWCNWVXBOGNUNBDODHMZNYLWLVPSWPOIRLSXFRGUEJAHRMTUJNDRCLFKKMDLPGIAOLMXTHJBKYHRUVIQQLDVCIQFWWCMSBZQUUJNCJEAPAYKMSUACEIQAXCVPHAVPQHSJTKBEXHTSRNVDETAOBZOBMIFWYRGQZIYXTBYGPVFFJJUMIXEHBJXVFZXSQROMWEYAWOPNDKECTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.36801601353191227);
    msg.setSource(59417U);
    msg.setSourceEntity(182U);
    msg.setDestination(62614U);
    msg.setDestinationEntity(150U);
    msg.name.assign("UFCTBRGBSXWGGIKMHNBQGEXDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.3258775846844768);
    msg.setSource(6674U);
    msg.setSourceEntity(106U);
    msg.setDestination(11877U);
    msg.setDestinationEntity(250U);
    msg.name.assign("IFYEANLAMOYTZPQKAKQCQMGZRQXOHWGITTFLLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.5748415723905456);
    msg.setSource(37723U);
    msg.setSourceEntity(189U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(193U);
    msg.name.assign("RDEHKSEZNMQZGQKLMLDYFGTXMBHDAOBCMPFCNRUNCRUZVOTSUTOITQSXSJIGBLOGDXGWIJWEMWBEWKHPNKBRFRJPMJBTOZAQIWAEPHFSSWRHMKVFJUTQRSMDLFALZJNHYXXQIUXBCKEZVHUOZMXZRFAXYYPLROCTXBPQWAZVFYSKJYEGOIDTVGAVRVWAHHVSLQBOCNKKYN");
    msg.value = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.04294045113251843);
    msg.setSource(12227U);
    msg.setSourceEntity(219U);
    msg.setDestination(34528U);
    msg.setDestinationEntity(199U);
    msg.name.assign("ZDCRMSSWHEEVHGHSLISCPIXYUWHPGKSIPWMROTHUOTSUJZRPDINFHJVXCCQSPQDISBGKXBOXFEVAIQAZIZYFYETKUGPMXOGPJRQBJHKIDMBNXLWBRVFMROLAMXQBFZUCYTOJNBNJVXAFDOAUALDLTUQHWLUKWZGDUWENDAAKCJOTWAEYRQMGBVNNZRJLYFFEPMUSNCXVBTVC");
    msg.value = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.21482332041256114);
    msg.setSource(55907U);
    msg.setSourceEntity(7U);
    msg.setDestination(43921U);
    msg.setDestinationEntity(15U);
    msg.name.assign("BDFIZTKUGHSXVCGAQXJERKNQXBEGBCTWOQSXWIKM");
    msg.value = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.5558499969031894);
    msg.setSource(52624U);
    msg.setSourceEntity(21U);
    msg.setDestination(11880U);
    msg.setDestinationEntity(90U);
    msg.value = 0.7850406060623913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.8184996919419673);
    msg.setSource(33413U);
    msg.setSourceEntity(108U);
    msg.setDestination(26270U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6025610372981476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.34211507972646993);
    msg.setSource(34315U);
    msg.setSourceEntity(200U);
    msg.setDestination(24797U);
    msg.setDestinationEntity(236U);
    msg.value = 0.537575071450179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.09090857075578007);
    msg.setSource(6622U);
    msg.setSourceEntity(253U);
    msg.setDestination(61753U);
    msg.setDestinationEntity(232U);
    msg.value = 0.6167026770552159;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.605156736380534);
    msg.setSource(39756U);
    msg.setSourceEntity(16U);
    msg.setDestination(37104U);
    msg.setDestinationEntity(122U);
    msg.value = 0.012212890259202358;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.8165998894417111);
    msg.setSource(51651U);
    msg.setSourceEntity(13U);
    msg.setDestination(14811U);
    msg.setDestinationEntity(101U);
    msg.value = 0.44113456906292725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.6161218685674477);
    msg.setSource(49311U);
    msg.setSourceEntity(196U);
    msg.setDestination(61975U);
    msg.setDestinationEntity(29U);
    msg.value = 0.1060396933999842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8064748539037523);
    msg.setSource(22156U);
    msg.setSourceEntity(34U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9163813846244129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.7254156191897156);
    msg.setSource(38344U);
    msg.setSourceEntity(190U);
    msg.setDestination(35726U);
    msg.setDestinationEntity(201U);
    msg.value = 0.8029423133957636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.06958751360318483);
    msg.setSource(18483U);
    msg.setSourceEntity(10U);
    msg.setDestination(13781U);
    msg.setDestinationEntity(138U);
    msg.restriction = 231U;
    msg.reason.assign("UPKPYOUNWTQROQLMPHQUCDXBFFONGZMOEDFDOZEWHCWGKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.592736047572925);
    msg.setSource(16447U);
    msg.setSourceEntity(92U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(161U);
    msg.restriction = 249U;
    msg.reason.assign("UNJWGRJVYSXVEPNNWDQHNEAHYUHJQJAPSHIMNKEYITGHJVURPDHDCLQBXREZCTXOYSYCEDFLIENQRIMLDKBNRKLOVCASFMBWHPBYYERZJZKKJFCQBBVGPRLXTKPDXFGQZLIIXFTYAKCUMMXOHRYSSMZZPFZWTDTTSAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.2554907096327623);
    msg.setSource(2196U);
    msg.setSourceEntity(92U);
    msg.setDestination(22367U);
    msg.setDestinationEntity(185U);
    msg.restriction = 70U;
    msg.reason.assign("SNFGYIZBAD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
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
