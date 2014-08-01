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
    msg.setTimeStamp(0.335014656949);
    msg.setSource(2211U);
    msg.setSourceEntity(215U);
    msg.setDestination(20088U);
    msg.setDestinationEntity(46U);
    msg.state = 196U;
    msg.flags = 178U;
    msg.description.assign("USKSDSGVETQFQHPEGHYVVTCAJRFNCUGTXCYPPOT");

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
    msg.setTimeStamp(0.0469667569592);
    msg.setSource(11518U);
    msg.setSourceEntity(66U);
    msg.setDestination(62476U);
    msg.setDestinationEntity(138U);
    msg.state = 50U;
    msg.flags = 232U;
    msg.description.assign("EDMAQQRQPFYWBJMUJSTVEVCEXGJKKGBDWTXDOUIOHYDWORTMKHSTNPIDPFTGNEBPAVLMKANRNSJRJUWPLDVEOAQPXHIOVHNSXOVGMJYUWMPULNVXALBETAKOYMLRWTCTFSGIJQFUBSDVYGHWAKMHNCZZZBUKXBBR");

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
    msg.setTimeStamp(0.401524000238);
    msg.setSource(43254U);
    msg.setSourceEntity(128U);
    msg.setDestination(56694U);
    msg.setDestinationEntity(211U);
    msg.state = 223U;
    msg.flags = 3U;
    msg.description.assign("JLUIWPEWFKREBSTXYIZRUEKBEACAMVQJORCMPXUBRVWKIIKNZQBUAZKLIYUQVRPBOYDZGBBABXRAQLPXCTEJFTTRUKIJVGOSSFJGHHTSVONVDDMGDEHJMULOYBACMNHLJIEFRXKKETQHGOGSWYCPUZZUORSNXMDDWNYSZG");

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
    msg.setTimeStamp(0.124598734311);
    msg.setSource(8492U);
    msg.setSourceEntity(230U);
    msg.setDestination(64486U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.738950499259);
    msg.setSource(56601U);
    msg.setSourceEntity(229U);
    msg.setDestination(51928U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.441742956211);
    msg.setSource(14624U);
    msg.setSourceEntity(121U);
    msg.setDestination(47383U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.663699908811);
    msg.setSource(18047U);
    msg.setSourceEntity(197U);
    msg.setDestination(42040U);
    msg.setDestinationEntity(121U);
    msg.id = 85U;
    msg.label.assign("TAGXQQXAOPDWIDHFQNZKGBLNSVEJNYNGRCYGSSMHWENGVDAXTDCAWVZPROBIUSFERPYTZMAIKLKECJBAZFMYSYOLCRRB");
    msg.component.assign("WVMSSBPJUXXIRHLCHOWCUHNFKSARWFVRNTDAUPDNAICSOESCNLVNLCDFVSHXIYNBZVEOPBZBREJEFUQBWYWOWGIGLCYCJLIMVZQA");
    msg.act_time = 62393U;
    msg.deact_time = 21262U;

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
    msg.setTimeStamp(0.726207385603);
    msg.setSource(44255U);
    msg.setSourceEntity(247U);
    msg.setDestination(45013U);
    msg.setDestinationEntity(213U);
    msg.id = 102U;
    msg.label.assign("VZTYCLPSKBRYPBNBFIPTUZAEILNIHFCXBVTMPHWUEHPCVYFRD");
    msg.component.assign("FEWGMYIOVMKPFADDCUWXMRRROWDVBRKBVJUHYSBUNBIBZHMRSTKZUMNAVHNMIUZNTQKMLXFGLFEHQMCZILXYIIJRFQOJVLSHYITQVHFUDAYRWKPTEPIMJGNKWWBNAAOHUPAUFSQDGWZHQQXEVDDEDQGPTEPPDGJXYRRTZUBOKPFNINMECHYFBDGQL");
    msg.act_time = 30209U;
    msg.deact_time = 44268U;

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
    msg.setTimeStamp(0.22157193926);
    msg.setSource(30182U);
    msg.setSourceEntity(66U);
    msg.setDestination(30436U);
    msg.setDestinationEntity(183U);
    msg.id = 92U;
    msg.label.assign("HACMLXMGACULKMJLFDRFUQSHEKAIKLYTXPRAVHXSPEEENXMPRMYIQDERRGGFLNCMATZZMNFCYDOISXIPMNTMXAJJADVJUZCXBQTHIBWDWUIKFEWYWGQODDSVSKBZUKQMKSJYEBHPUCVHJBYIVCRHGLZZKTOIHWCYBVQNNQUXVRVBXGADZOHKVTEGQAQNJEFWGLOPPYWTWTIBCFSOCFRWUJWPNFOVGRDXONLLTPTNZUDBHYSPOOBKYJJLGZ");
    msg.component.assign("NMQBGXGPRXRNMLMWJFUHHNWNFKYVJWHZHMHMFIETBKGEIPGKWODQIEWBHOWACIAFVRSTYMFCYWKMPUARACMVEQTKZQYOQPUYTBLVSWAQDD");
    msg.act_time = 37937U;
    msg.deact_time = 40227U;

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
    msg.setTimeStamp(0.64403557233);
    msg.setSource(28544U);
    msg.setSourceEntity(174U);
    msg.setDestination(694U);
    msg.setDestinationEntity(204U);
    msg.id = 95U;

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
    msg.setTimeStamp(0.345217438385);
    msg.setSource(19576U);
    msg.setSourceEntity(43U);
    msg.setDestination(41361U);
    msg.setDestinationEntity(235U);
    msg.id = 182U;

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
    msg.setTimeStamp(0.982360275382);
    msg.setSource(60946U);
    msg.setSourceEntity(134U);
    msg.setDestination(6986U);
    msg.setDestinationEntity(64U);
    msg.id = 191U;

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
    msg.setTimeStamp(0.197270199758);
    msg.setSource(36173U);
    msg.setSourceEntity(70U);
    msg.setDestination(59886U);
    msg.setDestinationEntity(206U);
    msg.op = 92U;
    msg.list.assign("YHMNKFNSCQKAAJMVPTLRSFWXNABXZDLZRIUINKNQTKPEFYKHVQYBASIBVKMYSYZRACUGFLQAWYSNXFUHWXVLCYQWRUMW");

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
    msg.setTimeStamp(0.840578342084);
    msg.setSource(32425U);
    msg.setSourceEntity(150U);
    msg.setDestination(13538U);
    msg.setDestinationEntity(70U);
    msg.op = 87U;
    msg.list.assign("KFWJWGTUNHWTVCSDNHPUTGZDZVCQDKVRXDGCLNZIMJYQOEXFWIMSPWRLRXIFPARPPHJLOTQMMTCIWDREEQHOTJILSJTTVSYCLTGOVYBZFMYFFEAQYYCQURDVALAZ");

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
    msg.setTimeStamp(0.210479636686);
    msg.setSource(2816U);
    msg.setSourceEntity(236U);
    msg.setDestination(40754U);
    msg.setDestinationEntity(135U);
    msg.op = 74U;
    msg.list.assign("OVRENZUQWYVYIGBATJMSLPLHHJCUHOHNZPBVQEHVROZNGRHZKXWCTIAQXIJBITLAODOMJPZJUMBCXSIQKUVOGARVEJGZRDGIBAAGEGXETESLUAQRTMSSCYZXXMIJSFWTWFWUTYWFFYUHXNHPUKOXALOTQLKEMDFBCNKICBFGHQCPX");

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
    msg.setTimeStamp(0.957777856393);
    msg.setSource(64910U);
    msg.setSourceEntity(99U);
    msg.setDestination(62715U);
    msg.setDestinationEntity(104U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.562345013176);
    msg.setSource(64972U);
    msg.setSourceEntity(214U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(16U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.206805826561);
    msg.setSource(65111U);
    msg.setSourceEntity(164U);
    msg.setDestination(56106U);
    msg.setDestinationEntity(205U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.963726535147);
    msg.setSource(29982U);
    msg.setSourceEntity(50U);
    msg.setDestination(34335U);
    msg.setDestinationEntity(184U);
    msg.value = 154U;

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
    msg.setTimeStamp(0.666026979185);
    msg.setSource(19738U);
    msg.setSourceEntity(218U);
    msg.setDestination(437U);
    msg.setDestinationEntity(66U);
    msg.value = 103U;

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
    msg.setTimeStamp(0.709034495945);
    msg.setSource(4039U);
    msg.setSourceEntity(210U);
    msg.setDestination(30921U);
    msg.setDestinationEntity(25U);
    msg.value = 216U;

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
    msg.setTimeStamp(0.00667130982156);
    msg.setSource(41399U);
    msg.setSourceEntity(131U);
    msg.setDestination(18414U);
    msg.setDestinationEntity(173U);
    msg.consumer.assign("ABJOJMFMPYMHAODKGDQQUMLPOQBWNTIXPLUOEVDSKBVFJNEKYIRNLZVVYBCKRHLWWMEIGJUYIVCLEYCEHXFNLMWSCAHJCTUPZXSQHIGDBNDBTSYCSTZGMQHVUDRUKSKHZLLGKXAVPAIWWFIAECFYRGHNMPCFTQ");
    msg.message_id = 9627U;

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
    msg.setTimeStamp(0.463017427963);
    msg.setSource(25508U);
    msg.setSourceEntity(214U);
    msg.setDestination(64991U);
    msg.setDestinationEntity(171U);
    msg.consumer.assign("UXSLNVRVFRCZOBPTLSFUOCIWIWAXGMXQLOGIHPGQFWMKXKHXTJUOKLCKQQVZRSSRHAETSLQKYUJLIYKNLVRRFHGQVKESQEZUFTBAIBDCDPEDHFHVATUGPNYVCBFYVRKXAPTIXJYBHDYLYDUAESXAZJPQWFOWOOQNHYTCAMPWABEIWDNSZBTNJLRPCGWEITZJWOMGMBECMZLJOU");
    msg.message_id = 50902U;

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
    msg.setTimeStamp(0.268596530535);
    msg.setSource(51342U);
    msg.setSourceEntity(45U);
    msg.setDestination(61708U);
    msg.setDestinationEntity(194U);
    msg.consumer.assign("FLRMSWRXQEXUNNKJTTWMMOUNRWPLFHUSNWIMGXMGTHCFUZICVBRLXYIMICHPDHUAZBSSXFOSMLFGNQQZEDLCWDTAEYSIANNGLXAUBFVTXYVBWNPYEIYOEKDPXZRQBNQUTLRHBJVJZPEQGKVZRCPLOYPGKAEUZAMBOYPDIDQGUXRHJGKDSAISHNCCYTKFJKHTACB");
    msg.message_id = 46035U;

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
    msg.setTimeStamp(0.314348063474);
    msg.setSource(28263U);
    msg.setSourceEntity(197U);
    msg.setDestination(6424U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.740635904541);
    msg.setSource(37230U);
    msg.setSourceEntity(94U);
    msg.setDestination(37663U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.728670353782);
    msg.setSource(57357U);
    msg.setSourceEntity(185U);
    msg.setDestination(39097U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.0479155483814);
    msg.setSource(30500U);
    msg.setSourceEntity(45U);
    msg.setDestination(53087U);
    msg.setDestinationEntity(160U);
    msg.section.assign("LEWOMGBFBKYOYHZCNXDJFVQCTEONHXCQVRGVZUYELXFAJCCDVPAXIHYQPUTTWSOWMDWWHJHBVSPQJDLRIMLLANGQSOCSYYGTRPIIUYKCGZQTKFJKVHDROOXZPBVZMMYBEHBXSPJBDTAZEHOWKGMLADJQRNIYEKIKUFUTHFIBOAVUSNDDPRZXUIFIEKUWRELQCSRTMGXAPMJSKEGYFNRPNMZUXKABQRGSCATENDIUSNLXHMTWAPZBOWFWCVZNQ");
    msg.param.assign("CRNYTBZABTIZXYDMLAVYUJFZXNIRWMUUOQIKXEHCIBDEFREEUKPLHSQPSUDPQBRNLWSYWYNLPJOLANJIUKCZCKDULGGEWFWCVUWZZBLPTWPEUPFXZTXGARTTEMXOOIYFNZGHKQOLGEHYYYVMHBHWCZKQXBTHASFHOLHCOGGQSMADTCCVATWAFXKMNGOGCKRQZPAXGRWJQJPSVJBNSVAIO");
    msg.value.assign("QAFIWREJQDOIALZKRZPQYXYISVQEXWRHJOWKBVBSMDHZBQTFKPFVBZLFPDPSMTYPTAITKHJOSERUVOFTIONPBUZXIUFXNNOHDNMPBGQWVSKHKMYSGEZZZHWNBTHRCFCFUXWKXZCKWJTVSEAVYVMURFOUGJYRTCVEIXLO");

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
    msg.setTimeStamp(0.739475340505);
    msg.setSource(27266U);
    msg.setSourceEntity(17U);
    msg.setDestination(15011U);
    msg.setDestinationEntity(62U);
    msg.section.assign("XGRUHBKZYHNIFUEWGZXPKPHYNBSCFPDDVVQRTYFMHTAJIODZFWAJZSHVEDLCGPSSXWILQQUEKECBTKVHGCMJRHLQLSNVCTIFWKLQEZQRMXPOLYPNMNWNZUBWSQRUGIKRVQBVOATXWBGMTXTNHVTBPLFSYVFXUMGZFINRYJDDAOEEPNKURYOBWTSSWLMXP");
    msg.param.assign("UHZOUGXLNAUJKJZXJFENKGJDAXPYMAQDXSXYDSLPYDEYRZIVFQIWOIXRBTQHWJGOTDXQHIMNIFQNYNNUQYRXCWMADKPCNRMPWVCLTVMSWNPWBSPSPIMKOBYSPGGEZHYA");
    msg.value.assign("YYAUECKUZRLWUJKBBQCEDIZQWSNQT");

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
    msg.setTimeStamp(0.12368952109);
    msg.setSource(61855U);
    msg.setSourceEntity(77U);
    msg.setDestination(55707U);
    msg.setDestinationEntity(93U);
    msg.section.assign("GUJIWDFFDINQEFFZBMGTGSMDBKJWQRYDIYIAZCGUECZYDCLPLIVIAXTACXOUSABRTPWQRMUOOPDWWPAPTBHVHCQRUHKEHRBXRNZTTLMLMSYBWSBGOJUHPWUUYBMXNYQVSSEAVIRHQNFXQFZNFHVAOKGXYOOUTJNVLLKNYQKAXMKCHNDMSTKBKGFZFXOZCSEQKFXPABXPOJYPEJWIV");
    msg.param.assign("NMQWOGEOLBXVXHLSBJPNKAEYXZVHI");
    msg.value.assign("WBKDPUCLGVTGYCFGICXZEYEVMKFRAHCRLHPHNCLJPGULNJGHAYKZXBJMAXYFBSHJJBIMOSSEIBHQRZCUTSLDKRZAPUNAXSWMSJDEQTTOWPDVTDWZLCSIKGPRHVYZKWEBDSDVZUGUNROKLKLNXAMTHORXSQWWZFYIKEXRTGWZQPOEQCTVBPUPY");

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
    msg.setTimeStamp(0.282832968924);
    msg.setSource(22383U);
    msg.setSourceEntity(4U);
    msg.setDestination(23134U);
    msg.setDestinationEntity(74U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.718442256979);
    msg.setSource(26700U);
    msg.setSourceEntity(142U);
    msg.setDestination(58719U);
    msg.setDestinationEntity(51U);
    msg.op = 191U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("XAXEOZZANHDGSGLPZGURWOQANJDHBKEQAWCTDXMEBINIIDFEQJCOFMCMWCYRXXDFOYZVUHVYVRJTYAWRLSMSIAZBDMQANRXXTUPHPWKULLOMLHFPLFZVJSWQGTWRICJOYKUHVPIKDWPTRVYFHKB");
    tmp_msg_0.param.assign("YUVCMTJGQMMWCRAREQ");
    tmp_msg_0.value.assign("JQYSNRMZSJTOPURSEOFXRFMSNECWCAGCBRRIVVHPETXGVNPWPHVQOKOVWJDGMFOMUPQHIYUDKFXZLTIQITJLYYIWLETVBKSZLMTKHBIYUAFFNYUEIJXMAGKKRWXEARAKQRYQVQXWACNCAHPKBTLCZSJKTFZCLHHBHGQWYFEMUNGIROEVMNGBUNOSMPHEWDGALZDNNCUSLXFSJOZAYSIBOLDZXJMVJKDXJVPUOWBCZRATLDHUD");
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
    msg.setTimeStamp(0.833574479032);
    msg.setSource(25473U);
    msg.setSourceEntity(21U);
    msg.setDestination(767U);
    msg.setDestinationEntity(119U);
    msg.op = 132U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("PWLDHKDMUZMKAYNNRHGWTZPFEBESOBLDYNCOSZCRDBVQDDVFAXNKJRMZSRDFSWSQUQPTPSMLSAVGOKIIBYPWQVWAPNEGVBNPBJLDYUJOMYZOGKMLKZOTVQNJAXWZFKXSZCRXQVTXEKHYUFCCRJCTUOLQGGIAYFILUGTZAAYYEURAHRHLTVMVGXCEFZIIMI");
    tmp_msg_0.param.assign("COAYDLXGEZKNVHPXRSSELUCHHLELITFJIZLNESNWCUFSYSHYJORBJGZJKBGKVEDRZJQOGAOQKZXNYQMRKTETWVUXJRWYCODVMMBNFQMVPJPBDPAQKCPBRPNFRWQYOFKAGFXIZBTHGYXSRGAQZOCWGIMIDMCNPSFXOVVAURFSIJCDTEFOCRUUMBYNTUSUCKABHXHHMIOYWKGNXLIXJBHNEQDH");
    tmp_msg_0.value.assign("FJITRACTGWRIHLVGTDIJVPDDLWOIBUNGDQVTOQMZBIMKMQJZOLZPNOMJLOKOQKWFUYNHDLAXXZEXSIIAUWPYZWBDKOZABEONGHVLCVNEHASLDTFAOSHPTXWRJLQVSADIESCLYKGWBPHYFQTJZYMNOZCEMFUUMGYCZTUFFGGMCVDTCVKNABKSBEHIRRXNCQFXBJPMZUUHRSWNEKASJFREYXUM");
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
    msg.setTimeStamp(0.251560740346);
    msg.setSource(7099U);
    msg.setSourceEntity(178U);
    msg.setDestination(35664U);
    msg.setDestinationEntity(56U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.987317790847);
    msg.setSource(19300U);
    msg.setSourceEntity(174U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(46U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.733010484047);
    msg.setSource(65152U);
    msg.setSourceEntity(112U);
    msg.setDestination(21006U);
    msg.setDestinationEntity(233U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.274256254229);
    msg.setSource(11831U);
    msg.setSourceEntity(158U);
    msg.setDestination(21384U);
    msg.setDestinationEntity(165U);
    msg.total_steps = 12U;
    msg.step_number = 119U;
    msg.step.assign("QSRGONSRPVNVSBMJMSGSWHJIOMOV");
    msg.flags = 122U;

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
    msg.setTimeStamp(0.191950259494);
    msg.setSource(31089U);
    msg.setSourceEntity(192U);
    msg.setDestination(46077U);
    msg.setDestinationEntity(251U);
    msg.total_steps = 76U;
    msg.step_number = 160U;
    msg.step.assign("FTJXUFYGOUOPVZSYSRDUDQTIPRNDEBGANPRPVAFUTKYAOXCHUNWWZUWCEBDYTXJFUWIZICZHQMZNZFLAIGPLBHMGIQVGVFJYLUOVEOPSVKEIXDCDDECUYSEJASKCMVNTWXZGTLYQYVXGMSBSRFJLIETRCTQQHSNJNGKHGRHQFCDRRJRUBMHJBDDWORMMHPVWECLAQPII");
    msg.flags = 170U;

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
    msg.setTimeStamp(0.129999666418);
    msg.setSource(1837U);
    msg.setSourceEntity(200U);
    msg.setDestination(48794U);
    msg.setDestinationEntity(134U);
    msg.total_steps = 70U;
    msg.step_number = 185U;
    msg.step.assign("PIRQTILUBQBBOUSHNSJXZCCOMNRZEVJLVHAOFEZKIIXLEJDKMPHQCEMPIGMXJBEWNJQKZYMFJQHSVVATLLWHUYBCRCXYASYKRFZAIDWTAGHYODDSOEXKRGGWRIQNPZUXWKFOXRIJDMFHULLXVOTNYNOGKWNGSIGPINTKWQTSLKVBMTVNSQDCBOUUMHYYULR");
    msg.flags = 94U;

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
    msg.setTimeStamp(0.622922603705);
    msg.setSource(35680U);
    msg.setSourceEntity(174U);
    msg.setDestination(6154U);
    msg.setDestinationEntity(110U);
    msg.state = 107U;
    msg.error.assign("HAJSEEJSDNRIBPQJVRHIAFRFUUTUPBWDPWKLCKAEQZEMTOGOFZNZJHYZNXEUWACQWRRVFHPDFGEJHUECYLBNGQJWTXFQIFOXDKIPDVIALSNOXLQBYVJXTEGAFTMEHOHSRQYLKCHBVRPTIBSSRGZJFWKSDFOJCPBOHDSNVICVGKVXD");

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
    msg.setTimeStamp(0.948359819959);
    msg.setSource(8124U);
    msg.setSourceEntity(253U);
    msg.setDestination(9281U);
    msg.setDestinationEntity(251U);
    msg.state = 111U;
    msg.error.assign("FZVYTHBZSCIWJIZGXOSPNQFNLEPPSJERERFTIGABRTJMAYFRINBMBDJQNBJD");

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
    msg.setTimeStamp(0.738748582724);
    msg.setSource(36214U);
    msg.setSourceEntity(206U);
    msg.setDestination(64972U);
    msg.setDestinationEntity(107U);
    msg.state = 129U;
    msg.error.assign("XCAHLRTIZPINWSMGNIXFSLAFWCOTLJJBVBVOUTRNWOWXXHXFVCJSOOPZFDJYMAKSRLEHWRCTGNGUIUGBKRYRTPWPEHHTKDNBIBEAVYWKCYQKAKZMBZVAROLFHFZPSSDQPTUFGALRXVNMISKQHUJUPMRPJNXIFYIKDIUDPHQGXWOPCDELUCGQLNCYJDKUYEQFYGEJUTGMQQOCXQWBESTVYZZEYBEWJLMSZZVCNOOQALZ");

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
    msg.setTimeStamp(0.76955825228);
    msg.setSource(4828U);
    msg.setSourceEntity(3U);
    msg.setDestination(52830U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.927486801295);
    msg.setSource(29933U);
    msg.setSourceEntity(7U);
    msg.setDestination(50654U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.128102595054);
    msg.setSource(29804U);
    msg.setSourceEntity(159U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.219207950287);
    msg.setSource(38431U);
    msg.setSourceEntity(67U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(77U);
    msg.op = 78U;
    msg.speed_min = 0.46685625272;
    msg.speed_max = 0.910166974726;
    msg.long_accel = 0.531841669231;
    msg.alt_max_msl = 0.673244134624;
    msg.dive_fraction_max = 0.81954265918;
    msg.climb_fraction_max = 0.0927519296974;
    msg.bank_max = 0.401568708248;
    msg.p_max = 0.653393934692;
    msg.pitch_min = 0.664853157606;
    msg.pitch_max = 0.492612870621;
    msg.q_max = 0.925682506843;
    msg.g_min = 0.413256468784;
    msg.g_max = 0.267813282593;
    msg.g_lat_max = 0.375165871593;
    msg.rpm_min = 0.153822735252;
    msg.rpm_max = 0.171225862484;
    msg.rpm_rate_max = 0.253561930342;

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
    msg.setTimeStamp(0.0939440541484);
    msg.setSource(7045U);
    msg.setSourceEntity(58U);
    msg.setDestination(21213U);
    msg.setDestinationEntity(223U);
    msg.op = 168U;
    msg.speed_min = 0.989849700253;
    msg.speed_max = 0.343137760878;
    msg.long_accel = 0.437127479563;
    msg.alt_max_msl = 0.316798302171;
    msg.dive_fraction_max = 0.275839964709;
    msg.climb_fraction_max = 0.0267768061898;
    msg.bank_max = 0.759761944094;
    msg.p_max = 0.942902075071;
    msg.pitch_min = 0.140436355357;
    msg.pitch_max = 0.59148600579;
    msg.q_max = 0.0142050261719;
    msg.g_min = 0.784614404268;
    msg.g_max = 0.315737384947;
    msg.g_lat_max = 0.861699176552;
    msg.rpm_min = 0.376957239087;
    msg.rpm_max = 0.977569889801;
    msg.rpm_rate_max = 0.817939814509;

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
    msg.setTimeStamp(0.637741477136);
    msg.setSource(10783U);
    msg.setSourceEntity(102U);
    msg.setDestination(46658U);
    msg.setDestinationEntity(244U);
    msg.op = 12U;
    msg.speed_min = 0.238851027984;
    msg.speed_max = 0.952848431424;
    msg.long_accel = 0.797125092274;
    msg.alt_max_msl = 0.0752957382033;
    msg.dive_fraction_max = 0.279655169396;
    msg.climb_fraction_max = 0.549473134446;
    msg.bank_max = 0.271824067067;
    msg.p_max = 0.816405876567;
    msg.pitch_min = 0.709238959727;
    msg.pitch_max = 0.0481556132296;
    msg.q_max = 0.326791593366;
    msg.g_min = 0.499257864917;
    msg.g_max = 0.701204627076;
    msg.g_lat_max = 0.796036825661;
    msg.rpm_min = 0.694315413866;
    msg.rpm_max = 0.319536911247;
    msg.rpm_rate_max = 0.929269907179;

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
    msg.setTimeStamp(0.205896862847);
    msg.setSource(28395U);
    msg.setSourceEntity(248U);
    msg.setDestination(26940U);
    msg.setDestinationEntity(73U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.286658104165;
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
    msg.setTimeStamp(0.163318526801);
    msg.setSource(21328U);
    msg.setSourceEntity(173U);
    msg.setDestination(23679U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.357152154893);
    msg.setSource(31670U);
    msg.setSourceEntity(220U);
    msg.setDestination(33995U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.55840708703);
    msg.setSource(42493U);
    msg.setSourceEntity(175U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.612704850614;
    msg.lon = 0.202673378344;
    msg.height = 0.228141477167;
    msg.x = 0.66427420117;
    msg.y = 0.277888286816;
    msg.z = 0.531239642355;
    msg.phi = 0.58067621413;
    msg.theta = 0.556166155587;
    msg.psi = 0.440785562;
    msg.u = 0.345402275989;
    msg.v = 0.912055669343;
    msg.w = 0.987211315547;
    msg.p = 0.521790191738;
    msg.q = 0.948763534587;
    msg.r = 0.313402846006;
    msg.svx = 0.845499579648;
    msg.svy = 0.21599206922;
    msg.svz = 0.85157810292;

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
    msg.setTimeStamp(0.34395437365);
    msg.setSource(55791U);
    msg.setSourceEntity(136U);
    msg.setDestination(50051U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.618560569082;
    msg.lon = 0.250389111358;
    msg.height = 0.572783882569;
    msg.x = 0.535166482795;
    msg.y = 0.793020438188;
    msg.z = 0.850263073502;
    msg.phi = 0.655851007856;
    msg.theta = 0.857321850148;
    msg.psi = 0.977064347361;
    msg.u = 0.605448539611;
    msg.v = 0.419236494347;
    msg.w = 0.322878581103;
    msg.p = 0.60129922114;
    msg.q = 0.152566938121;
    msg.r = 0.886799516564;
    msg.svx = 0.155287406363;
    msg.svy = 0.902354007743;
    msg.svz = 0.850157982788;

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
    msg.setTimeStamp(0.73884711087);
    msg.setSource(43636U);
    msg.setSourceEntity(35U);
    msg.setDestination(36571U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.929534990721;
    msg.lon = 0.313860581955;
    msg.height = 0.184713402045;
    msg.x = 0.306156833228;
    msg.y = 0.69768067066;
    msg.z = 0.135813428616;
    msg.phi = 0.333248417139;
    msg.theta = 0.772320947415;
    msg.psi = 0.664729660889;
    msg.u = 0.637259132596;
    msg.v = 0.869698538952;
    msg.w = 0.187283443805;
    msg.p = 0.0073882938542;
    msg.q = 0.915632934213;
    msg.r = 0.46296679452;
    msg.svx = 0.433680886007;
    msg.svy = 0.497108597578;
    msg.svz = 0.943984180222;

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
    msg.setTimeStamp(0.926192436452);
    msg.setSource(13038U);
    msg.setSourceEntity(91U);
    msg.setDestination(41096U);
    msg.setDestinationEntity(236U);
    msg.op = 225U;
    msg.entities.assign("MNGGDATDIUNUBNEJVCXWZEXLMZCFPQXDMCXQWDRZBUYICLAYFQGABPSHTJZWAFRQKJNJAMXTQDMHFCIGVNZCWKRVHOZUOETRSIRPKSCATLKRUEKOKJSLVSPEJLKVQMSOIVZPVBFHYXPUHYHQBOGESDSXDNXEEWUGUJKROBQPVAGSCCOBEFWVNJDGMWYKNPFEIZYFIHWBLNTLTILGCAIJRXDMIOFABMVTPLUYKTRWTOPQDSXLOFYZUWAYHBJMRY");

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
    msg.setTimeStamp(0.63652502607);
    msg.setSource(13636U);
    msg.setSourceEntity(130U);
    msg.setDestination(3904U);
    msg.setDestinationEntity(217U);
    msg.op = 199U;
    msg.entities.assign("FXSRPXWEARTNYUYPFLCNEZPWWKOFTLOOTLWITDQMXGUGERGWVJLAOIXEYHACUOBCDEOHPZUWFJUCTBQFZNGCQYFYOXYHWZDADQHKDNOEVCHZPCRQTJNAEILBLHNHTPBIPVJBFRRQXKWKKAJTMAJSVQZWXBNZQVZSARMXRHGDHODSVSKVYFSJWZXSMQNXNIGGBPRYGTVLKQUIGJVPFIMFHJBDMESBIVTCIKICLMMKP");

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
    msg.setTimeStamp(0.947857252712);
    msg.setSource(737U);
    msg.setSourceEntity(122U);
    msg.setDestination(54657U);
    msg.setDestinationEntity(121U);
    msg.op = 156U;
    msg.entities.assign("CJWDCOOWUYLOZBGERXTHOFGPF");

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
    msg.setTimeStamp(0.534147443692);
    msg.setSource(45253U);
    msg.setSourceEntity(73U);
    msg.setDestination(6068U);
    msg.setDestinationEntity(167U);
    msg.type = 227U;
    msg.speed = 38907U;
    const char tmp_msg_0[] = {-51, 125, -9, 111, -23, -27, -7, -114, -88, 38, 3, 116, 63, -55, -23, 74, 62, -49, -111, -39, 10, 77, -116, 90, 96, -11, -31, -16, 43, 118, -96, 15, 62, -41, -84, 103, -15, 17, 121, 92, 16, -120, -69, -51, 16, 92, 102, 83, -84, -20, 87, -43, 32, -85, -18, 118, -111, 90, 85, -26, 86, -109, -47, -1, -16, -120, -119, 20, -86, -53, -65, 77, 71, 46, -52, 114, -11, 110, -49, -114, 25, -31, 74, 102, 40, -59, -63, 111, 43, 15, -102, -125, -118, -16, -57, -106, -83, 58, 67, 48, 22, 120, -117, -24, 87, -86, -125, -97, 5, 43, -19, 5, 24, -115, 10, -36, 114, 72, -89, -119, -119, -74, 3, -105, -25, -73, 69};
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
    msg.setTimeStamp(0.812916482613);
    msg.setSource(47471U);
    msg.setSourceEntity(208U);
    msg.setDestination(50147U);
    msg.setDestinationEntity(3U);
    msg.type = 87U;
    msg.speed = 51558U;
    const char tmp_msg_0[] = {-5, 12, -111, 25, -58, 34, -118, -38, -127, -48, -64, -6, 90, -3, -106, 11, 68, 36, 23, 43, -47, 7, -98, 6, -104, 119, -22, 112, -21, 69, -120, -75, 52, -20, -113, 78, -94, -52, -85, -96, -16, 41, -24, -99, -75, -22, 118, -83, -55, -82, -65, -116, -117, 93, -123, -100, -7, -72, -124, -103, 98, 83, -114, 2, -96, 66, -7, 27, -14, -12, -76, 52, -77, -54, -118, 100, 77, -67, -41, -2, -92, 59, -25, -27, -23, -89, 19, -32, 34, -80, -46, 119, 98, 73, 47, -65, 101, 64, 114, -70, 104, 8, -99, 53, 84, 39, -100, 102, 57, -56, -23, -14, -93, -25, 104, 33, -85, -22, 102, -77, 78, -64, -42, 21, -43, -110, -48, -93, -122, -7, 37, -101, 10, -117, -16, 115, -27, 80, -88, -2, -81, -39, -17, -122, 23, 123, -61, -66, -117, 18, -51, 63, -57, -55, -99, 72, 38, 45, 40, -81, 40, 103, -128, 50, 94, 81, 51, 20, 95, -25, -50, -105, 14, 16, 118, 88, -96, 110, 37, -119, 82, 108};
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
    msg.setTimeStamp(0.146913725399);
    msg.setSource(56026U);
    msg.setSourceEntity(61U);
    msg.setDestination(53184U);
    msg.setDestinationEntity(241U);
    msg.type = 177U;
    msg.speed = 4148U;
    const char tmp_msg_0[] = {-87, 125, 57, 12, 115, 91, 26, 82, -104, 90, 45, -72, -101, 4, -23, -109, -64, -33, -81, -29, -74, 73, 115, 39, 11, -76, 103, 22, -37, -95, -102, -57, 50, 13, 29, 80, 62, -124, -69, -109, 7, -60, 46, -110, 118, 49, -64, -121, 40, -116, -92, 71, -83, -61, -39, -34, 96, -42, 63, 96, 44, 0, -61, -116, 35, -93};
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
    msg.setTimeStamp(0.958527777742);
    msg.setSource(3368U);
    msg.setSourceEntity(196U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(229U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.608637588143;
    msg.bank2p_pgain = 0.178206031768;

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
    msg.setTimeStamp(0.920164394707);
    msg.setSource(11680U);
    msg.setSourceEntity(161U);
    msg.setDestination(34714U);
    msg.setDestinationEntity(207U);
    msg.op = 165U;
    msg.tas2acc_pgain = 0.00041679832714;
    msg.bank2p_pgain = 0.297970167015;

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
    msg.setTimeStamp(0.711167503393);
    msg.setSource(32796U);
    msg.setSourceEntity(142U);
    msg.setDestination(58664U);
    msg.setDestinationEntity(20U);
    msg.op = 34U;
    msg.tas2acc_pgain = 0.895826542135;
    msg.bank2p_pgain = 0.0667157790406;

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
    msg.setTimeStamp(0.625248888999);
    msg.setSource(52970U);
    msg.setSourceEntity(97U);
    msg.setDestination(39533U);
    msg.setDestinationEntity(226U);
    msg.available = 1859831191U;
    msg.value = 241U;

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
    msg.setTimeStamp(0.953632234639);
    msg.setSource(962U);
    msg.setSourceEntity(161U);
    msg.setDestination(62253U);
    msg.setDestinationEntity(67U);
    msg.available = 4107622494U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.347344946992);
    msg.setSource(11198U);
    msg.setSourceEntity(144U);
    msg.setDestination(48129U);
    msg.setDestinationEntity(135U);
    msg.available = 1072832263U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.925643786945);
    msg.setSource(35537U);
    msg.setSourceEntity(129U);
    msg.setDestination(53733U);
    msg.setDestinationEntity(37U);
    msg.op = 208U;
    msg.snapshot.assign("NTQOORZEIINMOJWJYCROBHVBZLPPMAFYOTKEMBEQWOCULPCZVDUIATDPYVTNRIZDUZOHQFGSSFGKGSETLXKFNCYANFLQESBHEWVBNIZXPFDHSCWYNEJIWDUMSVUWPVDDTMXIWHUTUMDFYFLAPCCYDXXGAKKWGIRHIJAPMCBFJBNGYGJQLGSKPLKDMSCNKHGRXQUXASUKMTWZXSKTBVWHYRLXXOJZEQRZHERJVCTBYHNQA");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 99U;
    tmp_msg_0.value = 0.443669822575;
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
    msg.setTimeStamp(0.21013012709);
    msg.setSource(59040U);
    msg.setSourceEntity(62U);
    msg.setDestination(41636U);
    msg.setDestinationEntity(83U);
    msg.op = 222U;
    msg.snapshot.assign("OATAUPSYZGGBOYBXEJQQYGHKLBKPDFGZEXLTCCFNYUFZVCPCTCVJAEDRHLZEHIXDJOMNRGUQRHWVRDKVLBPUKCJIVQNGCBQEPLGJYVYHVSMZKRWJFXUKBWMWSFVGTOOSEHYTIQPSVBUJTIEWURPNZMUYFLFHLHSCKEMRKNOZHMQRSWFAPTLAXAEDRBWUYJYXSDLJMMZUAMNCZWJGIBWCGPTHXDKOZXISSQN");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 45U;
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
    msg.setTimeStamp(0.494534439433);
    msg.setSource(22891U);
    msg.setSourceEntity(167U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(186U);
    msg.op = 215U;
    msg.snapshot.assign("VLILELMGKVHKYSZJKPDVBZHPFDYXGYMIVUTQUNYMYFCGRCMNVKQWFTQTEZIOVMIIRVRSFCRAXGLNKKOIHMZYTJVSDZZGQWWWNYQLEIAPDMLFPBKBXCMUHWAGHAAMZOIBKCTWTFYXJLPSNYXRPDJEGMEDPSCOLNESJNGTEUFKXHRKBGBIYZAXIODCXPFXQJZAQURBUTQBQECHWAUURVHFOPEUUSNNJFJJVRCDWS");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 18867U;
    tmp_msg_0.lat = 0.537206031146;
    tmp_msg_0.lon = 0.791036754209;
    tmp_msg_0.z = 0.343155139214;
    tmp_msg_0.z_units = 83U;
    tmp_msg_0.speed = 0.535357568749;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.bearing = 0.364925762614;
    tmp_msg_0.cross_angle = 0.785641915477;
    tmp_msg_0.width = 0.757676234768;
    tmp_msg_0.length = 0.347967179279;
    tmp_msg_0.hstep = 0.225477566983;
    tmp_msg_0.coff = 232U;
    tmp_msg_0.alternation = 7U;
    tmp_msg_0.flags = 138U;
    tmp_msg_0.custom.assign("MMZSHIVAOTUQ");
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
    msg.setTimeStamp(0.420383892483);
    msg.setSource(3673U);
    msg.setSourceEntity(26U);
    msg.setDestination(9963U);
    msg.setDestinationEntity(243U);
    msg.op = 49U;
    msg.name.assign("PCKIGTLPXXHQUZORBGZLMJRLXJEJKJCOSHTYAJYOXZRQHDTWUSDIUBVMFAXUVNIONXAMDEXPCURJSTHLSHEYIXJCFSCNDGRKXOQVLCZUHBYYSKQRQTQGVWDVEAWFGNHCMKVVEFYUCFAIDMVKUDBGLCITBBWFZEWYZWEZOTPQNRINWUBHSSZCMEAIDLNZRLIOGAAJLDPKMJPTANRL");

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
    msg.setTimeStamp(0.285990475982);
    msg.setSource(63837U);
    msg.setSourceEntity(57U);
    msg.setDestination(50429U);
    msg.setDestinationEntity(226U);
    msg.op = 139U;
    msg.name.assign("VDLOIXAMSABNFKHMWZCSLPUTAKQFRHTHOSEGLYIOHNPGFJLTNAGSNQXHJNXNZYOYJVUIVMZEIGEXTWOOMAFZXVKCTVGVRWYBYYOKAKHCRZGIKNDWDSSESJYERAXNBIQMGFCHXDMHRVTKUCPWPBBCJFMWFVAUEARLFLZZPJIRGCDJAVDGXRJQHQPQMOKTBD");

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
    msg.setTimeStamp(0.764412802441);
    msg.setSource(23082U);
    msg.setSourceEntity(24U);
    msg.setDestination(50197U);
    msg.setDestinationEntity(70U);
    msg.op = 151U;
    msg.name.assign("BETIQVKGPEIYMMADFBOHUOUGLFNNLNKMCHQAJTZIPEKZATUGMBFNVVZPVRXRZISEOYCJFBZKQFZWHTJL");

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
    msg.setTimeStamp(0.921012142363);
    msg.setSource(48757U);
    msg.setSourceEntity(97U);
    msg.setDestination(28706U);
    msg.setDestinationEntity(99U);
    msg.type = 128U;
    msg.htime = 0.195580736192;
    msg.context.assign("LTTINYGJIGRBILYEYPWMDRDKNCVQXQCEJXZOHWFLORBCEAJGNDVFYEFEKMNSMBQLPZQYATQRDTROIJYKPFVFMDGAHHGFRHLXNBUXQPEIJOTBDLORDFXEVBMXUADTBBZCIGNZKOHCSJZSMJLTAPZHACPUAUNQUKCKYDWSXQENQOPRHTWFPUYGPMAN");
    msg.text.assign("LIZZHTNQPNRKQXYMNRXJXPTSAPXVUQKURGYJZYWCDJHRQLEWVXOBCPTZHKBAOICCWNCAMSLGXUUQTGZAERSDWKTWGTPEWVIIAKQJEULYDTIZDTDWISLISXVGDMDTFUAFYHJLUSGERJJHTHYOPABNFXXOFOFVKBVWSPKBGN");

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
    msg.setTimeStamp(0.467004724385);
    msg.setSource(18043U);
    msg.setSourceEntity(221U);
    msg.setDestination(36864U);
    msg.setDestinationEntity(179U);
    msg.type = 85U;
    msg.htime = 0.35695026199;
    msg.context.assign("YGESFEMHOYIYWNJNTTFVTXJFJZBKLCJXDFYGUUEHEZZBNRGKJSZUZHBOKBYKWKLBYTQAXQCVMUSSIOROJAANZTSMDPAXRSUGXMGNSWLANKMPPICQYUYQMALHHDPEDXPGTHUTCMEBWNEYFLFZBBZDMKCSJGVURZOOUFKIFNBLFPDMOLVDJVTVNZQEQCQFWWHLDCOAAHMKXDRHCWIAVITCWPQBRGPJRIEWYGRALVPIRVKQUXWDH");
    msg.text.assign("AUYXENPNYAFCXDKGXAOYIHXESUFJQROFYPPWMZMDBQZKPVCZHBEQACCHBAHYEGGWACJTGISGHFZSUFKNNVFMRSAJMNKBHHOGXJYGVOUTVNISVSCMKNXRNDZRSREQXEWDEIRZVUWGQLPYKUWQLVQJGOLDWFOBDXMEKJHUCZBYUWPIIVOOKKBBLBYEPSJBAVDTOWUMRSLCELQMINPHSGOHTATCPRMA");

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
    msg.setTimeStamp(0.538343714953);
    msg.setSource(51467U);
    msg.setSourceEntity(221U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(222U);
    msg.type = 77U;
    msg.htime = 0.331595844739;
    msg.context.assign("QEITSVETKKWFKQJRJQGWVMBNNWHVUHCLHYZXDSODOHWSAAIDEDYUZXQFAFUGJLGRJOYFLFPJKLHRUSTYSLGTEIFKKXIPOOCZNKUBIUNPUOYXMPYIICBDYCWCBHPOJMZQKZVOQZ");
    msg.text.assign("GSUWCUCDZCTXREQGNOPNILIDZKTGSOWYWRBPUGATHPVZXVMAJHYEZYLFSDUKETCRZZSRQKYTBQYHWTIBEOSGRFNNNZWFQECLFSILBHQYMPHTEVLBMIHWKDHPORJKNDXVBRSXASFCBJUFYRQNWPOA");

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
    msg.setTimeStamp(0.165431149926);
    msg.setSource(31374U);
    msg.setSourceEntity(135U);
    msg.setDestination(13282U);
    msg.setDestinationEntity(127U);
    msg.command = 117U;
    msg.htime = 0.67450521847;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 251U;
    tmp_msg_0.htime = 0.623023602401;
    tmp_msg_0.context.assign("GOZEGLTFPTSOBRLMRZLCSVSHSXXPJVGEUZLNMDJPIQMAYSEEHOINFSOGIVCLIVVYPBDCMXOMRTONRCDMJSHIJOWUQIEQDTPLUFI");
    tmp_msg_0.text.assign("ZHTSFQDPJLVXVRQDYRUKQOVRNG");
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
    msg.setTimeStamp(0.258021376792);
    msg.setSource(2193U);
    msg.setSourceEntity(13U);
    msg.setDestination(48922U);
    msg.setDestinationEntity(199U);
    msg.command = 206U;
    msg.htime = 0.449951650604;

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
    msg.setTimeStamp(0.071909462299);
    msg.setSource(65172U);
    msg.setSourceEntity(189U);
    msg.setDestination(43528U);
    msg.setDestinationEntity(119U);
    msg.command = 135U;
    msg.htime = 0.596954058342;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 175U;
    tmp_msg_0.htime = 0.551182350643;
    tmp_msg_0.context.assign("QNYAHWOCFIOSSHXMQXFLVJBVWMXJUOTHEVLLCDHAFEZWYJCPUAIZEGJOALZYHOLXKSWKGPURSD");
    tmp_msg_0.text.assign("RBVNEHFLUHKXQAGLYZNFOOATMGSMMBOAAZHVBUMHTHOYWLWVPCOFVJHEGUBDHLDRRMDQLLNXCKKVICYWWDKCSQZTGZKYBDXOELSFUGWCGUPZYBXAFFJPFRQUGQI");
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
    msg.setTimeStamp(0.381560644554);
    msg.setSource(35253U);
    msg.setSourceEntity(167U);
    msg.setDestination(24121U);
    msg.setDestinationEntity(8U);
    msg.op = 156U;
    msg.file.assign("MKFEERQUAFQXOFKBPWVYQRNZVDZZNFNDJBEFVWMZBWKJLNRHKUGXIKXGAOTAZLQTWLDUGWCZMADJIJYWTGNIVYBWCWBFGVCGIWBDMJYGVQOKPDZPHEUYPARONUIMPLIPRDVMOPSEXLHXGJETSHSJALXQFZCKAARULDLJHMMJNDHVKZQBSPFQERNRONOTSETIMBFIYKHUWACVIUVGSASQLJHYPHXQUCUIOYCCTZLNGFMBXTXCCESSYXSYPT");

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
    msg.setTimeStamp(0.450247244717);
    msg.setSource(60089U);
    msg.setSourceEntity(238U);
    msg.setDestination(15776U);
    msg.setDestinationEntity(126U);
    msg.op = 62U;
    msg.file.assign("OBOPCILRAANMIIVUNZAILSRVIOZKVEJFVGZQMCWBFLRCWWHCSRRMOPGULWULTSSZEJYJAWJBTAAM");

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
    msg.setTimeStamp(0.990307916156);
    msg.setSource(19897U);
    msg.setSourceEntity(154U);
    msg.setDestination(50566U);
    msg.setDestinationEntity(175U);
    msg.op = 138U;
    msg.file.assign("RCMARBOOFHSXTKDJLUDCPFQYFGLRSLZYKYXARROHHRQFGJYDWEIMWAJGTYUQEHNPICOBMTKSWDQXSPWXPLBAGZZQZWUIJHWNRTVULXEOESGARSYHLIEXSBYHOLTUGZJQKKPPKIBJROTGWVWNMPUJNEQCFNLUTNVQFRPLGEDCTIZTGBFMBWPMUSXZ");

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
    msg.setTimeStamp(0.214489884836);
    msg.setSource(64305U);
    msg.setSourceEntity(125U);
    msg.setDestination(63632U);
    msg.setDestinationEntity(117U);
    msg.op = 95U;
    msg.clock = 0.871553076801;
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
    msg.setTimeStamp(0.265464213677);
    msg.setSource(6811U);
    msg.setSourceEntity(245U);
    msg.setDestination(26920U);
    msg.setDestinationEntity(100U);
    msg.op = 54U;
    msg.clock = 0.932134662366;
    msg.tz = 23;

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
    msg.setTimeStamp(0.114665182776);
    msg.setSource(7443U);
    msg.setSourceEntity(74U);
    msg.setDestination(52513U);
    msg.setDestinationEntity(15U);
    msg.op = 64U;
    msg.clock = 0.276805324584;
    msg.tz = 124;

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
    msg.setTimeStamp(0.526581237339);
    msg.setSource(32065U);
    msg.setSourceEntity(52U);
    msg.setDestination(63005U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.651294421);
    msg.setSource(51358U);
    msg.setSourceEntity(30U);
    msg.setDestination(15980U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.729436260735);
    msg.setSource(26492U);
    msg.setSourceEntity(9U);
    msg.setDestination(27450U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.348045540856);
    msg.setSource(16045U);
    msg.setSourceEntity(40U);
    msg.setDestination(13942U);
    msg.setDestinationEntity(45U);
    msg.sys_name.assign("OTWBRLZCXDCOAMOLWUAXIUDTLYNBBGWQJXTOGEPTORNBJRNPVYJCCKMZGZDENSCGFMMUFYLGVJSNRTGTTQUHGVKXBTGAOHMUEKJVUXZQRETVZZZCCQCSOJPMWHSUKJJFQKNCAORIFRHZSHTOAHYIIBVASSLLYWWMYHXRQHSDKYELDDOFILKWYAXDHNMWKEMQNJDEBSEUYZXNIIIAVAQGQGUMPYKF");
    msg.sys_type = 143U;
    msg.owner = 25480U;
    msg.lat = 0.0718249809215;
    msg.lon = 0.991971476845;
    msg.height = 0.584602569119;
    msg.services.assign("EFVRFCGPPMAPSNLYMOZVIZRCKORAYHOZVCCJENKXMILWHKBSYXJHGIAKGXJWBATEYMJXRPJQNJOHLZVVEKFIBIQKPWAZDFHGSEOYPRIUZNUQYMQHQOYNCGYXUZBQIDDKGZTLELXLTCPKVQLD");

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
    msg.setTimeStamp(0.42909627075);
    msg.setSource(21745U);
    msg.setSourceEntity(46U);
    msg.setDestination(4512U);
    msg.setDestinationEntity(55U);
    msg.sys_name.assign("OXBFGNLBWVQXBBVYQIBKHRDUVDPYTSNZSWEHPWVNJIIFTOUNAWIBHHSPCICNQJWYCZRGGZXOHSAROLQTCLHDLJUIQMSEXAETDDXSMVZZOFOOKPRARYPTUHLBUYHCJIGPVRQCDRGYUJMAUULMLWJJNELWQFEZXSPGBHVVGEWTKDAQMLKWLPBFYIIZMPDCVFJKHCSJTRGFTAKMKYATDCGMP");
    msg.sys_type = 217U;
    msg.owner = 25594U;
    msg.lat = 0.206216883572;
    msg.lon = 0.968009565847;
    msg.height = 0.252041891705;
    msg.services.assign("OMVDHWJCBDQBBCKKJHHVJQTJXAAYUIBWBJYKFTMVEYLXLKWWFWRUWUANDJAIHWGNENRKXAOCEPLTFGMLRXHRGLEPSIRFCETIIRYZDMSUUNQFDJYKPKBIFEOTPPGBGYKOLPZFGMSETSIBWXNDSNMFSHDYYBHSQLQREHQSZUGXIUDSGNVOTZLYQVMBVTOCUOVARCKVXCQLEHIAPGKZEOFZTVAMQGDJJCNXNQADOCINZAXRTCZYUM");

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
    msg.setTimeStamp(0.315652581647);
    msg.setSource(12380U);
    msg.setSourceEntity(16U);
    msg.setDestination(15823U);
    msg.setDestinationEntity(82U);
    msg.sys_name.assign("FWTEHNYACMHPPRMWVFVVODRCBDIYXANJXQTXACOJUPMDBLPHYPNQYTBYKOTCWBEJGCVWPHVOEARXFSSSDXKUXYSRAOJOJTAVUGYOZTULUSBIZQHGEFQDJLVFZCTLSYLQVWFXZNIDLMLZCLYPIERRSHGESFUPMXUQUTJIWVFEJASDWWTIMJKO");
    msg.sys_type = 29U;
    msg.owner = 42996U;
    msg.lat = 0.0117755655106;
    msg.lon = 0.649787366111;
    msg.height = 0.835421013624;
    msg.services.assign("LWMLUZXHMFNRECWLOIIEOVZBSEOXHNFEQJKDTDBDVIOAQMQICVOCLWZFQXPWHOOELSYJLURMFHFAPUTVROPTSQQIMJSCZSYMHRDUAXNMGWARGVKKGXPKYTYVCWZKETGEKPIQBGYLHPFAXUTPGWYQLMBDTFXZBWCRBQTZNSDUBUDNLHXGRNGKPZVPSPCENIRJTIUAWJJJVSBKUXMFBGHZCDDVMVFHAYNNO");

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
    msg.setTimeStamp(0.179533278435);
    msg.setSource(41353U);
    msg.setSourceEntity(141U);
    msg.setDestination(60019U);
    msg.setDestinationEntity(83U);
    msg.service.assign("FWKNFUHPGFHLNIPOEMUSVGUZRHDXNQQVVFTUFVFRLYGSNXMRLGAZTDAELCKJIYOGMAVYUAHQSJYIT");
    msg.service_type = 209U;

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
    msg.setTimeStamp(0.786287585021);
    msg.setSource(62926U);
    msg.setSourceEntity(167U);
    msg.setDestination(39454U);
    msg.setDestinationEntity(194U);
    msg.service.assign("CINVOUYPRWKCSTDXIDRAHRNSFBVREFHHFMBCGHILXOGLLMFCGVIHITJAECETSXQBYKNVFYEGXYSTJVPIUFUJPKUYNOXZOPSLWWKRUMECPDETROQGMAACXMDJKKPIDKUGOBFKIGHQDJNZMXOYTXGMBIBMYXWCUEJPNCSXIASQEYQADBZTZZPUZLLANDJWZTQHFORZLQVQMGBFRHSLAWABHOTDJAVZQVYFPMSCSJNWEKZROHUVKLWYBQTNEVWW");
    msg.service_type = 168U;

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
    msg.setTimeStamp(0.473170204042);
    msg.setSource(21310U);
    msg.setSourceEntity(53U);
    msg.setDestination(59709U);
    msg.setDestinationEntity(32U);
    msg.service.assign("NASESKRAFZTGIJWPEMKPZVQELPRWEFICRKJXKMTGNPWNGVCJXDANQBZAHRJTOMYWKSPIHLTSODKEUOKLNFRKYXRGHTDIVQVMLYXFQVLAJNHTSNUCLYUDARKUBBTNHYQRQFFTHGUIZBYDYFSEXZQCEHABWZBZDPZIUHRMPDEWMCWVTOYIDCCGMOXZVDDBJUGPXIQCXSVSEBOT");
    msg.service_type = 126U;

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
    msg.setTimeStamp(0.0755767858037);
    msg.setSource(620U);
    msg.setSourceEntity(139U);
    msg.setDestination(28529U);
    msg.setDestinationEntity(80U);
    msg.value = 0.862609694173;

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
    msg.setTimeStamp(0.186929804927);
    msg.setSource(59541U);
    msg.setSourceEntity(194U);
    msg.setDestination(46558U);
    msg.setDestinationEntity(87U);
    msg.value = 0.281473722386;

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
    msg.setTimeStamp(0.169956134005);
    msg.setSource(61066U);
    msg.setSourceEntity(236U);
    msg.setDestination(14284U);
    msg.setDestinationEntity(233U);
    msg.value = 0.0181517390044;

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
    msg.setTimeStamp(0.783170036925);
    msg.setSource(29345U);
    msg.setSourceEntity(31U);
    msg.setDestination(5094U);
    msg.setDestinationEntity(26U);
    msg.value = 0.414515547529;

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
    msg.setTimeStamp(0.623137785492);
    msg.setSource(13984U);
    msg.setSourceEntity(109U);
    msg.setDestination(29677U);
    msg.setDestinationEntity(248U);
    msg.value = 0.235336713619;

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
    msg.setTimeStamp(0.0158491272109);
    msg.setSource(46298U);
    msg.setSourceEntity(222U);
    msg.setDestination(35431U);
    msg.setDestinationEntity(230U);
    msg.value = 0.787762981972;

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
    msg.setTimeStamp(0.551974230407);
    msg.setSource(31136U);
    msg.setSourceEntity(188U);
    msg.setDestination(42765U);
    msg.setDestinationEntity(215U);
    msg.value = 0.747327971035;

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
    msg.setTimeStamp(0.400908014338);
    msg.setSource(39615U);
    msg.setSourceEntity(238U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(243U);
    msg.value = 0.175172911615;

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
    msg.setTimeStamp(0.628898700546);
    msg.setSource(26467U);
    msg.setSourceEntity(176U);
    msg.setDestination(11746U);
    msg.setDestinationEntity(42U);
    msg.value = 0.431662265964;

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
    msg.setTimeStamp(0.095785106628);
    msg.setSource(59448U);
    msg.setSourceEntity(254U);
    msg.setDestination(61299U);
    msg.setDestinationEntity(228U);
    msg.number.assign("LPONYVKGCUN");
    msg.timeout = 11520U;
    msg.contents.assign("TIEAHVKNWYNIAZGYDZJNBOEYSQPWNHJQGYMLNSVLXSCUUYPLBMPJDAGLLWVMAYXQNQANQGYZTGROWKJAAUK");

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
    msg.setTimeStamp(0.844329228278);
    msg.setSource(13164U);
    msg.setSourceEntity(71U);
    msg.setDestination(11055U);
    msg.setDestinationEntity(89U);
    msg.number.assign("DSQREHTWDRFGCWW");
    msg.timeout = 46643U;
    msg.contents.assign("DISGIFBGXTSMUPUILQTAUTHIAMQETZRBOKKGOWSRBYHKREFCGEPWNOUIWTBVYZCWJBGQQDVRVJCNMPBZDTLAUPEKLXFYOEPNBXVBCBUSSMXAIYSQMVALTNEEJRHYGZJFNLHLJXZSXYFCZOGHR");

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
    msg.setTimeStamp(0.455521689847);
    msg.setSource(21071U);
    msg.setSourceEntity(69U);
    msg.setDestination(27015U);
    msg.setDestinationEntity(252U);
    msg.number.assign("JTAWFAEHJWCFABYXZDBOELOLBWXLSRMROFOPBJHQZJSBONRRXXUWKCQGCJKKCDFMQIPFZRVTYDLEQNSZTFMUMENKYDQFHARDDJHGOSGGAISCUGUTMOKPYZHBATUUHIKGXYGWM");
    msg.timeout = 35795U;
    msg.contents.assign("YVMOPKTXLBZWAGQODCJXIXRROPARVUOSDKEOYMHYINWPBTPZIUHBHXZBCNLMXWFDCBDUFLKLZXYQGUCJIKXKSVRQEYSFHWA");

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
    msg.setTimeStamp(0.552152375042);
    msg.setSource(45103U);
    msg.setSourceEntity(136U);
    msg.setDestination(59376U);
    msg.setDestinationEntity(186U);
    msg.seq = 357430163U;
    msg.destination.assign("XVHADLARQOQHBEPASJJUOUNIRBMFQSZAVIZVIKZFTRHMLBSPXQEZNCADERQMEFDWNWQRJINGCSDDXHCGHGEWLZSPFEKKMNDGONAOYVULCVPOTKARAVUSSXSLELMPJJBPJNMRHYMTFDHYNCFJKDCKYWWCBIPXRWTEWRBFJLDXMWTZKYYTNULPQUMYBPALZKTVHOEYHUJTUFQNCGVQYBLZOORWTCUGKIJMVPFYKDZBGIGCIGVGAUHXBTISOSX");
    msg.timeout = 38631U;
    const char tmp_msg_0[] = {41, -49, 11, -34, 11, 30, 86, -46, 78, 0, -109, -84, -93, 89, -17, -127, 87, -18, -86, -5, -28, 55, -46, 89, -37, 75, -109, 80, -99, 41, 8, 45, 0, -114, 45, 38, 84, 51, -77, -43, 98, 34, -87, 76, -64, 89, 115, -20, -61, -101, -3, -4, 52, 78, 118};
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
    msg.setTimeStamp(0.132837055237);
    msg.setSource(41276U);
    msg.setSourceEntity(1U);
    msg.setDestination(42822U);
    msg.setDestinationEntity(28U);
    msg.seq = 3904828288U;
    msg.destination.assign("TXHKXYZMTKWAAKLKJHYIDBTGYVUGMYQZHHDJJBSUXOIIYCOGLZAVFBEKUJUAVBFSGCNVDKSWFTCFHQRZZQRSTWAYXVCWPQHPBDACJVKPZNJMRRMHPGKEWVGWFULTVRQMPGEESUZCLMZRAGNMOPJWSIIXOFLGPRBDKRCNXWCDYMGUBLOYADIXBJYSVFAZZMTNQSDXLCBQSQDRONN");
    msg.timeout = 41795U;
    const char tmp_msg_0[] = {-94, 6, 75, 2, 17, -5, 61, -108, -119, -23, 93, 110, 97, -116, 111, -46, 56, -27, -122, -59, 113, 13, -26, -26, 109, 61, -78, 67, -102, 36, -18, 37, -13, 67, 23, 2, -41, 53, 39, 61, 95, -113, 108, 43, 3, -17, -39, 19, -97, -13, -19, 59, -82, 86, 20, 82, -113, 106, -107, 104, 106, 33, 110, -122, 27, -79, -34, 24, 29, 16, -5, -72, -9, 0, 43, -79, -128, 31, 14, -85, 115, -114, 69, -51, 78, -47, 53, 115, 1, 72, -93, 55, 71, 66, -18, -125, -56, -82, -24, 123, 36, 50, -87, 36, -103, -115, 41, -122, 46, 91, -108, -7, -62, -1, -1, 98, 42, 93, -123, 90, 70, 90, 50, -26, -105, -93, -10, -42, -118, 37, -118, -12, 37, -121, 104, 73, -4, 82, 36, -95, -36, -56, -111, -59, 81, 111, -66, 3, 88, -75, -65, 89, 42, 55, -84, 94, 45, 39, -80, 86, -103, -18, 52, 90, 37, -1, -93, -72, -34, -50, -126, 14, -110, -125, -95, -95, -118, -38, 86, 91, 28, -83, -17, -44, 71, -37, -16};
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
    msg.setTimeStamp(0.0684906723385);
    msg.setSource(30802U);
    msg.setSourceEntity(218U);
    msg.setDestination(17292U);
    msg.setDestinationEntity(52U);
    msg.seq = 1124893812U;
    msg.destination.assign("CKUMHYMOTTZJXRWSPAUTBW");
    msg.timeout = 51162U;
    const char tmp_msg_0[] = {-118, 47, -16, 72, 3, -73, 80, 79, -47, 109, -61, 11, -120, -57, 8, -48, -46, 115, -58, -67, -29, 34, 66, -127, 122, 53, 64, -48, -33, 28, 85, 108, -119, 34, -121, -100, 2, 56, -52, -41, 24, 95, -70, 118, -62, -53, -110, 67, -105, -110, 69, -8, -6, -126, -108, 9, 93, -83, -15, 27, -70, -122, -86, 64, 112, 60, 74, 20, 15, 69, -62, 98, 41, -47, -117, -12, -63, 58, 103, 45, -23, -119, 72, 2, -128, -88, 34, 101, 71, -114, 110, 42, -31, -20, -72, -69, -9, -44, -30, 24, -19, -86, 77, -98, -99, 40, -86, 107, -105, 52, -82, -36, -58, -60, -100, 28, -72, 114, -49, -100, -80, 25, 86, 2, 64, 75, 108, 107, -55, 4, 63, -81, -83, -17, 79, 31, -123, -94, 3, 54, 32, 46, 109, 32, -61, -119, -117, -52, 45, 62, -46, 52, -73, -56, 36, 93, 58, 55, 60, 124, 103, -70, 109, -88, -62, -111, -17, -27, 63, -67, 74, 61, 126, -88, 112, -76, 74, -59, 79, -101, 20, -35, 67, -100, 44, 118, -12, 16, -30, -51, -42, -89, 1, 51, 30, 68, -27, -75, 123, 48, 110, 38, 55, 78, -99, -53, 17, -126, 75, -39, 77, 70, 14, -70, -67, 18, 56, 78, -120, -127, 116, -59, -57, 47};
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
    msg.setTimeStamp(0.177240793225);
    msg.setSource(30726U);
    msg.setSourceEntity(228U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(11U);
    msg.source.assign("HREXKDLSIQUVWWFIZJQABGBIARLANKHDJXSOQGHMVHLAZYIONFKTLIEVZEYDQNKOVLQJPHGEJFVCUHOEOVSSRYAAHAISHBBPUQJVRZTPABLOVZTCIXUTUCNQPLRCPINFCXOFXPYMKMCO");
    const char tmp_msg_0[] = {68, 18, -92, 70, -31, 116, 120, 102, 72, -76, 25, 43, 99, 124, 82, -68, 121, -95, -121, 78, 22, 67, 49, -81, -63, 76, -7, -48, -51, 1, 26};
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
    msg.setTimeStamp(0.599978065188);
    msg.setSource(27560U);
    msg.setSourceEntity(134U);
    msg.setDestination(12606U);
    msg.setDestinationEntity(89U);
    msg.source.assign("OPJBCNEVXOQDIFBHPIKWKOPXKBDRUHUQTOASJLFILOCFZETWWLSFVGWARKCSFRETCQDPVLVJGBZQIEGKN");
    const char tmp_msg_0[] = {12, -27, -37, 110, -7, -25, 36, 32, 108, 53, -41, -72, -24, -28, 8, -76, -1, -20, -115, 89, 113, 71, 68, -124, 63, 68, 33, 116, 48, -55, 108, -6, 43, -125, 79, -113, -34, -106, 115, 124, -60, -109, -6, -88, 26, 80, -65, -127, -62, 22, -128, 48, -17, 98, 15, 119, -119, -113, 9, 89, -99, -65, -119, 19, -67, -37, -103, 5, 119, -125, -101, -91, 114, 109, 14, -40, -23, -127, -72, 113, 93, 63, -103, -92, -48, 44, -109, 18, -5, 20, 101, -88, -98, -36, 57, -26, -62, -65, -24, -11, 65, -54, 97, -86, 75, -79, 96, -7, 59, -125, -99, 2, -76, -101, -34, 69, -89, -66, 100, 123, 18, 70, -56, -109, 6, -12, -7, -21, -26, 88, 85, 120, 119, 115, 88, -84, -23, -54, 42, -15, -73, -85, 38, -23, -81, 59, -72, -57, 43, 66, -17};
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
    msg.setTimeStamp(0.47321474956);
    msg.setSource(36930U);
    msg.setSourceEntity(126U);
    msg.setDestination(31130U);
    msg.setDestinationEntity(52U);
    msg.source.assign("TKGWZAFATGUVVBIDPAKPKMSMDGNWURKXRFFULPVKMNCQSDMKUDHOYIYTBUDBHTVSUESGDRMSQVHCWZXZCBYBFQCFHMJREEOX");
    const char tmp_msg_0[] = {-90, 100, 61, -4, -113, -102, 119, 109, -92, -39, 77, 62, 62, -30, -43, -17, 66, -33, -92, -106, 54, 73, 54, -54, -100, -19, -4, 123, 53, 19, 28, -66, -33, -43, -103, -117, -24, -88, -44, -52, -70, 66, 85, 89, -63, -22, -48, -56, 64, 55, 101, 79, 16, -5, -105, 56, 45, 27, -95, 41, -93, 92, -48, -118, 87, 29, -29, 40, 2, 124, 39, -20, -43, 36, -41, 92, 53, -60, -89, -28, 43, 78, 121, 78, -126, 89, 4, -6, 123, -76, 125, 39, 7, -93, -101, 34, -3, 79, -104, -124, 50, -108, -29, 87, 111, 85, 63, -112, 72, 100, -69, -103, 17, -74, 88, 42, 90, 54, -37, -25, 53, 49, -120, -10, -97, 70, -30, -92, 91, 21, -52, 40, -84, 55, 63, 30, 75, -69, 23, 83, 7, -36, 15, -117, 72, -125, -10, -124, 19, -40, -12, 55, -42, -50, 41, -54, -22, 65, -24, -7, -114, 20, 38, -48, 126, 43, -27, 44, -7, 49, 80, -72, 14, 44, -22, -18, -126, -91, 117, 23, -45, 18, 110, 73, -100, 110, -15, 115, -35, -86, 104, 47, -95, -90, 78, -125, 27, -125, -115};
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
    msg.setTimeStamp(0.461609507744);
    msg.setSource(64780U);
    msg.setSourceEntity(8U);
    msg.setDestination(62250U);
    msg.setDestinationEntity(29U);
    msg.seq = 311007281U;
    msg.state = 68U;
    msg.error.assign("WONJCUDNQFUEOSTPCIBXKREVFBUKTIVLMGYBACYSLRJQRZTYZHZUKAIYVRAKZQCN");

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
    msg.setTimeStamp(0.621340262305);
    msg.setSource(18569U);
    msg.setSourceEntity(64U);
    msg.setDestination(29544U);
    msg.setDestinationEntity(48U);
    msg.seq = 718610412U;
    msg.state = 43U;
    msg.error.assign("SOSJTTZGOHEINUMVHKUZAYVQEHIMHTGNMVOKSEOLTQAZUOHIPCZOSPQRLSWJIGFDRWCJKWCCBBMVYDHJJAWQTYBFSKCWVMGLFWINGRZJCMGXILDQUMRSLGU");

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
    msg.setTimeStamp(0.664860002181);
    msg.setSource(1738U);
    msg.setSourceEntity(10U);
    msg.setDestination(65372U);
    msg.setDestinationEntity(103U);
    msg.seq = 3235365113U;
    msg.state = 72U;
    msg.error.assign("PZZBJVWKJAVVCCNW");

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
    msg.setTimeStamp(0.862522853976);
    msg.setSource(26884U);
    msg.setSourceEntity(53U);
    msg.setDestination(14741U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("SKKLJVEYUZOOWPWHNNNFFOETQPQCXAWQYKTFHXDXXSKDXLWGHCBUFNETIRMUWITQBJUPHAJSOARTVQNSCLBCBUMFJBGRQRDEUCKKLOYYMWEIDJEH");
    msg.text.assign("JMYDJWYGBMZHXCAJYLN");

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
    msg.setTimeStamp(0.590827212418);
    msg.setSource(15515U);
    msg.setSourceEntity(155U);
    msg.setDestination(30799U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("LSYMBNJQSIALDYUFOIFEUQOTTIAITGMWYXJXLYXBPHLRYURJBJKIIGHXLVOEWYVJMIXBB");
    msg.text.assign("ACFNOMOKFVCJRGAMBG");

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
    msg.setTimeStamp(0.0661775074763);
    msg.setSource(18614U);
    msg.setSourceEntity(103U);
    msg.setDestination(64911U);
    msg.setDestinationEntity(74U);
    msg.origin.assign("DWYIUQDJSVMNDFOIMFZEZSKPUGMGHSIPRBITODNKYNQYYEVPGAACSRJFZROSWDSIIPSTHXNTXQHBMLIBVRQHUQGYPZWADMSBFXLVQSVNTBWGTZTWQELEKYDKOJVDASYBHGBJTJXNHGRKYQICKLFNGJZXRUBTZCKFQAWHOEEDWYAUGOBUGUXZBLRAWCZLPOQXFCLXRNHKC");
    msg.text.assign("ZXLWWRWNPZBHHCVJSROOATZRBTGWMMDOXFIUSEQPDJYUIZVBPMYOJKVDSLAKGZYNZWVPGHCCWZIIRQOTQUJTBIGXEGCKOZDLXFRJJNYUKYZEXCFJFGNEWUEVHAASXSFCQBYPKCBMTRMNTDDJFJTEGSEAMGUDOWBPBAOUFRIJVHTQMXSTFLVYUAWPPHQDKX");

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
    msg.setTimeStamp(0.597179686752);
    msg.setSource(55674U);
    msg.setSourceEntity(101U);
    msg.setDestination(14627U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("CWPSZINYOPUULDVRCLMALAIJDLUBSHWSZYKLKFRLEOCSQNPQQFNVFKQFZPQODTCUVJJMEQGJUBGHXIBXCNZRHIWHJVAPRVYISNHFPDWIYPGATB");
    msg.htime = 0.818033036873;
    msg.lat = 0.139288147466;
    msg.lon = 0.969576168056;
    const char tmp_msg_0[] = {16, 82, -55, -121, -92, 68, -27, -47, -82, 6, -112, 86, -95, 51, -7, 88, -87, -60, -25, -48, -55, 28, -109, 6, 100, 69, 111, -108, -42, -42, 108, 95, -90, -85, 29, 73, 89, -92, -38, 14, -93, 87, 39, 122, -100, 22, 53, -15, 53, -27, -1, 44, 116, -42, -74, -66, 16, -86, 122, -77, 120, -63, -124, -123, -9, -37, -93, -16, 122, 78, -112, 72, 108, -5, -65, 96, 26, -113, -44, -53, -10, -44, -37, 19, 46, -84, 51, 118, 55, -40, 118, 10, 68, -122, 32, 118, 33, 53, 17, 120, -59, -72, -125, -126, 124, 79, -90, 18, -95, -6, 108, 32, 12, 89, -1, -13, -86, 81, 29, -3, -2, 75, -73, 94, 71, -51, 2, 20, -67, 82, 38, -99, 66, -120, -46, 89, -45, -19, 41, 99, 36, -7, 74, 29, 118, -76, 15, 93, 109, -36, -63, -3, 37, -13, -70, -87, 90, -126, 85, -77, -4, -57, -2, 10, -16, -30, -98, 35, -56, -15, -63, -16, 25, -2, -115, -69, 104, -74, 52, -104, -87, 79, 119, -69, -13, 45, 97, -89, -58, 83, 18, -36, -51, -56, -5, 9, -47, 33, 62, -8, -44, -44, -13, -69, -22, 122, 12, 104, -27, 73, -20, 94, -107, 2, 1, 65, 64, -8, -120, 6, 46, 84, -69, 71, 115, -56, 80, 2, -28, -31, -44, 62, 33, 52, 105, -89};
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
    msg.setTimeStamp(0.617600784404);
    msg.setSource(804U);
    msg.setSourceEntity(65U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("RISQTBFZMNWLRQOTCHAKAZKCLNNXXFVWUGTSYDKUXBJEDQEQHOUPJFSHCRRVGFIMOFUKBWNDLMHVZXUPRCIGJEDZLKEMTGGWXMQRPJLNYEHOMWIFEKGK");
    msg.htime = 0.819646896864;
    msg.lat = 0.962725424499;
    msg.lon = 0.146903619021;
    const char tmp_msg_0[] = {42, -73, 19, -91, 126, -76, -93, -53, 77, -120, 102, 94, -58, 111, 119, -127, 62, -3, -101, -106, 71, -4, 98, -35, 54, -67, 92, -92, -56, -82, -118, -109, -100, -86, 115, -85, -85, 70, 71, 20, 28, -128, 85, 67, -59, 42, 70, -99, 40, 82, 49, 107, -83, 73, -49, -110, -66, -28, -123, 126, -9, -17, 72, -67, 68, -86, 46, -35, 55, -50, 28, -56, -118, 60, 21, -22, -45, -70, 22, -96, 121, -61, -90, 122, 77, 23, -69, -51, 55, 11, 30, 46, -61, 32, -23, 111, -58, -117, 13, -61, -35, -127, -101, 123, -31, -100, 91, 99, 96};
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
    msg.setTimeStamp(0.681736860575);
    msg.setSource(29539U);
    msg.setSourceEntity(140U);
    msg.setDestination(11668U);
    msg.setDestinationEntity(72U);
    msg.origin.assign("HYRJIGXZXMGXIIKPOSYRBEABETIJFJBFFOVTQCCP");
    msg.htime = 0.67464955379;
    msg.lat = 0.53069973418;
    msg.lon = 0.6709078529;
    const char tmp_msg_0[] = {34, -62, 46, -97, -5, -113, -74, 37, 51, 57, -65, 114, 5, -74, 27, 20, -68, 97, -97, 7, 23, -92, 48, 20, -6, -10, -47, 68, -27, -111, -10, -120, -23, 69, 4, -9, 102, -62, -28, 59, 72, -108, -114, -29, -100, -39, -103, 44, 25, 105, -62, 116, -49, -49, -44, 9, 19, 13, 23, 82, 70, -102, -53, 121, 117, 55, -7, 62, -76, -42, -39, 105, 48, 118, 53, -3, -126, -10, -119, -104, -17, 90, 102, 86, 32, -100, 80, -88, 112, 29, -9, -48, -18, -74, 15, -54, -60, 57, 51, -14, -42, -71, -86, 35, 0, 71, 107, -68, 94, 64, -62, -13, 97, -6, 125, 50, -40, 74, 25, -111, 13, -46, -2, -119, 74, 17, 93, -3, -48, 122, 75, -97, 36, -28, -117, -62, -106, 69, -60, -119, -28, 99, -4, 22, 12, 105, -38, -71, -113, 45, -128, -25, -36, -44, 110, -53, -91, -126, 31, -12, -89, 10, -66, -103, -76, 82, -32, -92, 90, 36, -49, 50, 65, -88};
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
    msg.setTimeStamp(0.709713469386);
    msg.setSource(27518U);
    msg.setSourceEntity(253U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(66U);
    msg.req_id = 14449U;
    msg.ttl = 42188U;
    msg.destination.assign("DXRRBPMEMJXH");
    const char tmp_msg_0[] = {-70, -23, 79, 71, 3, 97, -48, 58, -73, 123, 113, 38, -40, -47, 117, -95, -8, -108, 78, 104, 60, -96, -17, 18, -74, -47, -57, 55, 34, -59, -9, -76, 22, -47, -104, -101, -31, 35, -125, -108, 121, 35, 110, 108, -42, -18, -94, -15, -45, 98, -31, -97, -14, -100, 106, -61, 58, -31, -56, -105, 43, -69, 4, 5, 0, 50, 83, 56, 120, 45, 38, 115, 69, 112, -91, 106, 115, -13, -46, 96, -90, -85, -127, -73, 4, -128, -49, -113, -10, 102, -43, -111, -13, 117, -57, -57, 88, 120, -6, -117, -80, -117, 112, -76, -80, -107, 20, -6, -128, 52, 0, -66, -110, 90, -25, 46, -11, 69, -84, 80};
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
    msg.setTimeStamp(0.409514472971);
    msg.setSource(31792U);
    msg.setSourceEntity(11U);
    msg.setDestination(7212U);
    msg.setDestinationEntity(250U);
    msg.req_id = 37459U;
    msg.ttl = 10534U;
    msg.destination.assign("VFYRKDTPJSQMLKHJQJKLQDEKLFVKFWTRPODPIERYSPRAVLZVISFDG");
    const char tmp_msg_0[] = {95, -14, 102, 35, 93, -28, -43, -98, -71, -126, -128, -116, 123, 112, -82, 121, -53, 78, 46, 106, -92, 54, 121, -96, -90, -77, 37, 88, 86, 49, 56, 70, -78, 18, -101, 75, -81, 42, -121, -105, 123, -88, -49, 95, 114, 64, 8, 110, -18, -122, -63, -123, -44, -90, -115, -64, 66, -18, 111, 37, 52, -96, -85, -29, 111, -5, -84, -42, 29, -66, 93, -102, 125, -67, -46, 57, 11, 37, -27, -96, 49, -116, 15, -68, 5, 54, -2, 72, -29, 91, -57, 55, -106, -55, 69, -125, 117, -41, 76, 115, -78, -33, 32, -80, 99, 20, -109, 123, -76, 22, 53, -23, 86, -63, 54, -100, 111, -26, -87, -85, 83, 101, -6, -61, -115, 90, 83, -60, 68, -39, 90, -54, -100, -53, -13, -46, -93, 98, -14, -57, -63, 105, -120, -51, -83, 80, -63, -67, 23, -8, -103, -37, -3, 21, -67, 39, -95, 82, -57, 104, 20, 0, 115, 0, 46, -110, -96, 1, 122, 119, -63, -118, -13, -104, -17, 40, -96, 52, -4, -113, 122, 63, 33, -18, 67, 116, 27, -66, -42, -123, 34, -85, -41};
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
    msg.setTimeStamp(0.0739311831055);
    msg.setSource(8160U);
    msg.setSourceEntity(47U);
    msg.setDestination(16268U);
    msg.setDestinationEntity(101U);
    msg.req_id = 59927U;
    msg.ttl = 19014U;
    msg.destination.assign("IUKNTEDUWQUXLDXBLZLGFTGPKGDEMZMFMKJAFHFBXMZJQVLZTKYMWOAPNGPPCQKWPWSCPUNDZWJZWTBWQZGFVABAKYZOEQYXBHSLRTVODCVWBPSIGCOUNASMCGVJADXJIATHOTGNFNCUMCWHLWDYNRLXRJ");
    const char tmp_msg_0[] = {25, 45, -104, -61, -18, 8, 120, -37, 48, -73, -114, 27, 81, -57, 109, 25, 34, 59, 24, 119, 117, -85, -110, -50, -6, 23, 45, 13, -27, 53, 125, -6, 81, -17, -115, -101, 19, -67, -55, 89, 40, -119, 90, -122, -20, -95, -110, -82, 86, 31, -61, 48, 110, -9, -22, 118, -78, -72, 45, 61, 25, -113, -24, -82, 81, 39, -49, -28, 46, 12, -30, 72, -115, 100, 124, -54, -104, 6, -52, 34, 59, 78, 27, 72, 92, 46, -60, -20, 4, -96, -110, 17, -46, 24, 100, 118, 113, 44, -67, 23, 105, 31, 61, -107};
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
    msg.setTimeStamp(0.404522502581);
    msg.setSource(49921U);
    msg.setSourceEntity(63U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(71U);
    msg.req_id = 1305U;
    msg.status = 27U;
    msg.text.assign("OXOMUNAPSHXBBDYLVCZHJYVOEIQLCFNMBCWGUNPQGMSLDGAEOJGACIPQQKXGBPTYHXHTWIDWYABDZKTRTRSWDYLLUEFTDZZPCVOWFUICLPMEQLVHLACWFJZMJHOQPXMRSAYIXZUCNEJMXNWTGSQISYBNDWSJGHVKRKVVLJMRWSIIDBEVMEMDFBKAGONRAKYHJKTZGTZQYVOTREINASUTXUSZLYUEBFCFIKNJUF");

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
    msg.setTimeStamp(0.286347307902);
    msg.setSource(49752U);
    msg.setSourceEntity(134U);
    msg.setDestination(26608U);
    msg.setDestinationEntity(129U);
    msg.req_id = 4776U;
    msg.status = 65U;
    msg.text.assign("NAUJPCKBBSWVIVIWPYESQEQQNOAVLTLYUJHDGHOHLHTTXRXQFBMYZNCNFMFFPSESEUFFVTLIV");

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
    msg.setTimeStamp(0.318276711581);
    msg.setSource(60823U);
    msg.setSourceEntity(76U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(17U);
    msg.req_id = 24697U;
    msg.status = 87U;
    msg.text.assign("BYQXBVSSLAEJROMCQSRBCUDGYWWYOQFTGMVEXZJBIGLUCRJAQTGILTRBFDTOIOXOAQAGXNXUSNKUE");

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
    msg.setTimeStamp(0.383061413935);
    msg.setSource(48278U);
    msg.setSourceEntity(26U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("BWQMXSNOSPPMHUMAGYYWABTSKTAXVQDOBUMGIUJLXCOPQBISHPJVCLRJGCBVCXACXFWGSBGRKXETWTWYWFAEEVDQOYZJKNADETCPZYFFLYSYYVJZHJELHPLNZGFJNWTSRMKBKVRUZSVLDCYWZEWZPBVISIPJRHGNZPNKC");
    msg.links = 1646977010U;

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
    msg.setTimeStamp(0.750681820123);
    msg.setSource(63421U);
    msg.setSourceEntity(121U);
    msg.setDestination(65164U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("WHVASFNWVZXQOUOPTRIBYMRXNX");
    msg.links = 3934137606U;

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
    msg.setTimeStamp(0.0835180584569);
    msg.setSource(59561U);
    msg.setSourceEntity(171U);
    msg.setDestination(43113U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("MAQMETLVGZHRSBJYVWUQFNBVFJGECZUGQOXCPSHWXWPRMUBUSIHHLEORANWIANZADSDOHUXEQXCNUCNUGMNPTYRWPAMHMRIIDKTVTBVHQDVJRVSMYMSNGHGTUPLIDKBBVYICSZGTFLAQDWXUIWXKMFJIPEYLOMZFWFTBQPNCKYDARXLPCHYEVWJZYJUXCTDOBXJQGCJLSBAVSKRDOQETJFGQRLKYSYBAKKONKGDCJEZXAPTLFPKFZZZINEIO");
    msg.links = 835641847U;

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
    msg.setTimeStamp(0.85410410339);
    msg.setSource(14324U);
    msg.setSourceEntity(225U);
    msg.setDestination(33741U);
    msg.setDestinationEntity(192U);
    msg.groupname.assign("KOLZNRIVJQLPMKEWQOHZFPGBJHKMZONDTADNGFLCIKPPNVPTIXVCMNBYKYMRUJADNPZJGNZTUJQGLMYHQSGGAYXNKMUIZIPDLSCTRHLUBZEVEFMZZSCZAIYWGEMBBRHTXHMJPODATOXEAHFUSYOXXWKOHYMNRHFFIYRCTVXVRXSUKBFTURSRPDEVGCWXAQGKBISWUXACQLFQTVVUOEFIELRWSBQB");
    msg.action = 31U;
    msg.grouplist.assign("KIKRKPSCTGJWHLCBAJIKPDGOLQORXUVOKVAGPCNVLVMAYXJIJNUPBZMUXWEFIEBCGYBHMHBQEUAKHILODHWOWCCTUDTELSALQWFOLQSJQNZTVRRQWVJZRTOMCRXTIYSBNYVPXXJNLXTFGBQKDSMHEIWSAEHZXUQJNVZVCYYMSLPAYGPCYPTFENKSQMDRWWCDFVZFQGLHGXNMFEJPFRBWAHXRTDAYPHZMZFOOSIRKBDNSUGEYMUN");

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
    msg.setTimeStamp(0.227066278156);
    msg.setSource(17738U);
    msg.setSourceEntity(183U);
    msg.setDestination(64239U);
    msg.setDestinationEntity(64U);
    msg.groupname.assign("NLAQZHWNXDQIZBBPPJBQOUSGIVUERATIFPFHWMSSTKUAQQZYXDAAVMBCMRALZMORNMPFUADYBUFGBBVUIESOYQDJHTWUTCOTKEBBOPZKANFCZGUVLDFHHOZILDQLUPCJNEXAAJNSEWHGYRTXMWEKXKMIFFRYKJHWSKYYRPCJLGNGXDCTQEGSIHIJFSZFJWCYRSWPHLCZNLOVKQCVHJVILXNOPNGMMTCSLWRXBDXKQOGTVDRDWXMZRVGVTK");
    msg.action = 190U;
    msg.grouplist.assign("EHOHJXTMWUBDEBRELPTCYOZEAGFAJZEFGISIXJCRPTXSJLSKVR");

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
    msg.setTimeStamp(0.282527859953);
    msg.setSource(60623U);
    msg.setSourceEntity(67U);
    msg.setDestination(15981U);
    msg.setDestinationEntity(245U);
    msg.groupname.assign("XEGCVPPGPBMGFMREHTYGPYFOTCVQGIINKSSGEIIDSXVLYWVLAATIKPCENDHJZESLNPCXLBYGWHWZVHNDUCYIEOWVSXOWTJBDUBQQWMKMYNXJMMARSZFLGDVPOKUOAXJYRPNEHVZLUXTLFCCVFRXAPQUYWNZFQHTEMDKJRQLTKBTCTJVMBALKKCRFABUSDNSOUQZOFSBW");
    msg.action = 38U;
    msg.grouplist.assign("PSYORTJREXLTHLRPWDPIVVTUZYSMLUBJFQQFRKTKCNNABYTMZYHMFTWRPUDAMOIAWXDUKJGMELLNMFNCKWFZGRSALQKHPELEXSWVDIBRINVLWEIIVUBGVTFNGJHEHXACCQCZUZFPKJQQBPSHJZYCRSMDCQGBZNOKXDVNEYHUWSGGBAFUULBKAMVYXIWNYVRY");

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
    msg.setTimeStamp(0.203411685494);
    msg.setSource(65209U);
    msg.setSourceEntity(104U);
    msg.setDestination(34315U);
    msg.setDestinationEntity(224U);
    msg.id = 56U;
    msg.range = 0.863722444176;

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
    msg.setTimeStamp(0.594783043549);
    msg.setSource(30059U);
    msg.setSourceEntity(46U);
    msg.setDestination(44382U);
    msg.setDestinationEntity(238U);
    msg.id = 158U;
    msg.range = 0.371023954872;

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
    msg.setTimeStamp(0.606079380396);
    msg.setSource(50878U);
    msg.setSourceEntity(235U);
    msg.setDestination(9457U);
    msg.setDestinationEntity(211U);
    msg.id = 80U;
    msg.range = 0.671092724654;

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
    msg.setTimeStamp(0.195112820612);
    msg.setSource(18525U);
    msg.setSourceEntity(66U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(161U);
    msg.tx = 250U;
    msg.channel = 45U;
    msg.timer = 21075U;

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
    msg.setTimeStamp(0.0637891754062);
    msg.setSource(61824U);
    msg.setSourceEntity(203U);
    msg.setDestination(2785U);
    msg.setDestinationEntity(158U);
    msg.tx = 157U;
    msg.channel = 230U;
    msg.timer = 64950U;

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
    msg.setTimeStamp(0.0581517009627);
    msg.setSource(17115U);
    msg.setSourceEntity(183U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(135U);
    msg.tx = 221U;
    msg.channel = 31U;
    msg.timer = 5897U;

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
    msg.setTimeStamp(0.0300933171222);
    msg.setSource(33765U);
    msg.setSourceEntity(46U);
    msg.setDestination(46843U);
    msg.setDestinationEntity(232U);
    msg.beacon.assign("QJPTAYIVXACXNHSDRMHBMQGGNAKSJXPXTEXCWBFDKVX");
    msg.lat = 0.298015334143;
    msg.lon = 0.94804661033;
    msg.depth = 0.794176183632;
    msg.query_channel = 237U;
    msg.reply_channel = 192U;
    msg.transponder_delay = 48U;

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
    msg.setTimeStamp(0.101253063968);
    msg.setSource(11124U);
    msg.setSourceEntity(154U);
    msg.setDestination(4906U);
    msg.setDestinationEntity(0U);
    msg.beacon.assign("OYONCOPKGDZCBOZGHVXQJXGFWSECCATNMYHSHNIMZHYYRHLNMKTBASISDZCNWTLWGQCAPENWWBMIKHAUEJDJNQIFLERFOKTEXJRKXBFTVYUTKMSEGSQJGIRQZUUOXRAJULWMXVFDIHTBBPIOQCQWCQHDHMLFLDZSCBPHUPXIYYYBYZRCFVRJNBLKARVXWZ");
    msg.lat = 0.265748470285;
    msg.lon = 0.260783477204;
    msg.depth = 0.73887355359;
    msg.query_channel = 204U;
    msg.reply_channel = 36U;
    msg.transponder_delay = 244U;

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
    msg.setTimeStamp(0.719159616503);
    msg.setSource(1240U);
    msg.setSourceEntity(46U);
    msg.setDestination(14769U);
    msg.setDestinationEntity(58U);
    msg.beacon.assign("NHREPUVDQSPAFGPXTAGTBJCNVXRYJBWDCEJLFHGIBPGBCNUECTWLMZMLCKYIDFHGVXZGCLHVGY");
    msg.lat = 0.663484929071;
    msg.lon = 0.385378726996;
    msg.depth = 0.242912319205;
    msg.query_channel = 189U;
    msg.reply_channel = 122U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.731758143448);
    msg.setSource(14720U);
    msg.setSourceEntity(169U);
    msg.setDestination(23377U);
    msg.setDestinationEntity(133U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.72368124965);
    msg.setSource(22472U);
    msg.setSourceEntity(10U);
    msg.setDestination(45865U);
    msg.setDestinationEntity(40U);
    msg.op = 75U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PKKYLDIANEQUCHZMLIWHAMTSOTLJDYYNZGEAEUWSRBHVKDIVRWLCMEFVCXLXECHTMSIUTBEPWTJXGNUTAHJFDNJWZZSWFVWYQHOYMLNGENQWEMPQHBPSBCALVDSP");
    tmp_msg_0.lat = 0.30802384309;
    tmp_msg_0.lon = 0.993435686659;
    tmp_msg_0.depth = 0.425429129099;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 241U;
    tmp_msg_0.transponder_delay = 212U;
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
    msg.setTimeStamp(0.125308961135);
    msg.setSource(11694U);
    msg.setSourceEntity(229U);
    msg.setDestination(48704U);
    msg.setDestinationEntity(210U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.29227544875);
    msg.setSource(25032U);
    msg.setSourceEntity(37U);
    msg.setDestination(39997U);
    msg.setDestinationEntity(195U);
    msg.address = 11U;

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
    msg.setTimeStamp(0.0840005768647);
    msg.setSource(22615U);
    msg.setSourceEntity(43U);
    msg.setDestination(63888U);
    msg.setDestinationEntity(107U);
    msg.address = 61U;

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
    msg.setTimeStamp(0.380566860352);
    msg.setSource(59555U);
    msg.setSourceEntity(91U);
    msg.setDestination(34856U);
    msg.setDestinationEntity(73U);
    msg.address = 191U;

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
    msg.setTimeStamp(0.806243800917);
    msg.setSource(49170U);
    msg.setSourceEntity(88U);
    msg.setDestination(19531U);
    msg.setDestinationEntity(193U);
    msg.address = 120U;
    msg.status = 213U;
    msg.range = 0.0363631820795;

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
    msg.setTimeStamp(0.237768705715);
    msg.setSource(26220U);
    msg.setSourceEntity(248U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(34U);
    msg.address = 211U;
    msg.status = 46U;
    msg.range = 0.398063944219;

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
    msg.setTimeStamp(0.897392205955);
    msg.setSource(60466U);
    msg.setSourceEntity(117U);
    msg.setDestination(40852U);
    msg.setDestinationEntity(123U);
    msg.address = 83U;
    msg.status = 86U;
    msg.range = 0.303243264604;

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
    msg.setTimeStamp(0.214977559073);
    msg.setSource(63048U);
    msg.setSourceEntity(134U);
    msg.setDestination(51683U);
    msg.setDestinationEntity(54U);
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 227U;
    tmp_msg_0.actions.assign("WHKPXPYFXIYKENJLIYSYNYUELGRTLVMWHXJQFLFRNASDCWKHXOUGJYKOQLWUJRVOZXYXAJEIDQUDBBFFPGZXZHGDRBQVOIPHMCXCBLOJCBIILCKQDVHPCQPKVZNTVVTDQPGSJMEFREZAKPGBSULAWKBWELRTZGIINTWAR");
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
    msg.setTimeStamp(0.798708944342);
    msg.setSource(48333U);
    msg.setSourceEntity(168U);
    msg.setDestination(43758U);
    msg.setDestinationEntity(98U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 73U;
    tmp_msg_0.mask = 33802472U;
    tmp_msg_0.scope_ref = 823697004U;
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
    msg.setTimeStamp(0.962507700595);
    msg.setSource(57575U);
    msg.setSourceEntity(13U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(159U);
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.27139102187;
    tmp_msg_0.m = 0.872432657336;
    tmp_msg_0.n = 0.315638699733;
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
    msg.setTimeStamp(0.852290663426);
    msg.setSource(65449U);
    msg.setSourceEntity(148U);
    msg.setDestination(60930U);
    msg.setDestinationEntity(157U);
    msg.enable = 141U;

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
    msg.setTimeStamp(0.329254981864);
    msg.setSource(37168U);
    msg.setSourceEntity(96U);
    msg.setDestination(30905U);
    msg.setDestinationEntity(67U);
    msg.enable = 117U;

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
    msg.setTimeStamp(0.292813690999);
    msg.setSource(26344U);
    msg.setSourceEntity(13U);
    msg.setDestination(37194U);
    msg.setDestinationEntity(111U);
    msg.enable = 158U;

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
    msg.setTimeStamp(0.609487675919);
    msg.setSource(6031U);
    msg.setSourceEntity(239U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(128U);
    msg.summary = 185U;
    msg.level = 73U;

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
    msg.setTimeStamp(0.525665280123);
    msg.setSource(8099U);
    msg.setSourceEntity(227U);
    msg.setDestination(40627U);
    msg.setDestinationEntity(140U);
    msg.summary = 212U;
    msg.level = 226U;

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
    msg.setTimeStamp(0.49832382495);
    msg.setSource(33025U);
    msg.setSourceEntity(97U);
    msg.setDestination(12989U);
    msg.setDestinationEntity(179U);
    msg.summary = 58U;
    msg.level = 176U;

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
    msg.setTimeStamp(0.854020807641);
    msg.setSource(40693U);
    msg.setSourceEntity(31U);
    msg.setDestination(22398U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.538345309225);
    msg.setSource(40388U);
    msg.setSourceEntity(194U);
    msg.setDestination(12464U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.0243138670384);
    msg.setSource(43765U);
    msg.setSourceEntity(83U);
    msg.setDestination(23408U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.292203770905);
    msg.setSource(45561U);
    msg.setSourceEntity(45U);
    msg.setDestination(1343U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.648294158009);
    msg.setSource(14897U);
    msg.setSourceEntity(230U);
    msg.setDestination(27435U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.232190944368);
    msg.setSource(29836U);
    msg.setSourceEntity(102U);
    msg.setDestination(23023U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.798454474613);
    msg.setSource(10396U);
    msg.setSourceEntity(41U);
    msg.setDestination(44139U);
    msg.setDestinationEntity(58U);
    msg.op = 129U;
    msg.system.assign("GQMZOGDFASESCPINUXTFJULIYOWEHCHBXEMRYLLDOHOZYUDOALLYFITNOYWBMICRZMHXBCQPXQOUGUNKYBVUWSVAEFAHBHBNJHFJDIKKKCGJGTSUCAMEGINVQBJTXPVTXIEKZVDLWDNAURFZSSJDVPBPKOEMTCZSDWIJQOXGQSTWGRZHNNLKADHQZJXWVR");
    msg.range = 0.138205382732;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 248U;
    tmp_msg_0.error.assign("NFVCPXUIPGEZGBHZNYKUZRCXVDFHGTLXNGDAKNYOSICPRODUAATHSGAOMGHTQVQMVOLQITHQEUIHZCGSKFNXIFDIMWXVGWVQJDOOAIMURRJQBOWUSWPFQPKZJVBZIKPDLEFWMJXTJXYRNFJYOLWVMUBRGSESRSAFPMIJOYVEWJTUUEYRAPBJKLLWCNLDLQQKNDTLCEBKTWBANHZYDXMPOWXSRTLHRDJ");
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
    msg.setTimeStamp(0.508969231052);
    msg.setSource(3933U);
    msg.setSourceEntity(17U);
    msg.setDestination(55465U);
    msg.setDestinationEntity(92U);
    msg.op = 139U;
    msg.system.assign("PTIJWHWRJHZRWLJ");
    msg.range = 0.172001878452;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 243U;
    tmp_msg_0.period = 723707140U;
    tmp_msg_0.duty_cycle = 1462903441U;
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
    msg.setTimeStamp(0.63004740066);
    msg.setSource(9142U);
    msg.setSourceEntity(40U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(42U);
    msg.op = 125U;
    msg.system.assign("DHKIXNAHVNNHMPTZLBHTDZAZDOMVQZRQUJHCQXABVYBXKGUJEAMCCEOIMPOSFPRYKFSIXPYKUAJIASZWVEGWYZECOBDBMBOKROTNCNJKRJQSAVYUBVKTWDSATDTJMGRJNZFNNPO");
    msg.range = 0.40115611568;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.747394104513;
    tmp_msg_0.y = 0.748829494658;
    tmp_msg_0.z = 0.954955401846;
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
    msg.setTimeStamp(0.302887519794);
    msg.setSource(13685U);
    msg.setSourceEntity(210U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.595665967598);
    msg.setSource(37704U);
    msg.setSourceEntity(0U);
    msg.setDestination(30148U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.291514345415);
    msg.setSource(13921U);
    msg.setSourceEntity(159U);
    msg.setDestination(59729U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.865405451267);
    msg.setSource(39302U);
    msg.setSourceEntity(68U);
    msg.setDestination(31759U);
    msg.setDestinationEntity(43U);
    msg.list.assign("JWAPSYYHESONYPDNBQSXXIOSWVASARULRCLWPHEKIZEJAAQXCNDSVEIMTJHFXMPKTNXWOSDFZKWTQUCRTBDIDVSKZIHMRTMDZNRBEOGCB");

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
    msg.setTimeStamp(0.367508929221);
    msg.setSource(14304U);
    msg.setSourceEntity(32U);
    msg.setDestination(41795U);
    msg.setDestinationEntity(94U);
    msg.list.assign("ABXNYWXHZIBFPZMVNDOWLKYHFMJPMANMQWUF");

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
    msg.setTimeStamp(0.471169703482);
    msg.setSource(41763U);
    msg.setSourceEntity(190U);
    msg.setDestination(15463U);
    msg.setDestinationEntity(84U);
    msg.list.assign("YETPVARQVSLESZOOKRGUINTRYTTELYALOKEMBCJKXQKVJQHGUYGQZNSLFRNFOYMQFBQBN");

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
    msg.setTimeStamp(0.390877479228);
    msg.setSource(37486U);
    msg.setSourceEntity(251U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(141U);
    msg.value = 15475;

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
    msg.setTimeStamp(0.497439762536);
    msg.setSource(46009U);
    msg.setSourceEntity(98U);
    msg.setDestination(21467U);
    msg.setDestinationEntity(201U);
    msg.value = -3608;

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
    msg.setTimeStamp(0.681084911113);
    msg.setSource(1150U);
    msg.setSourceEntity(224U);
    msg.setDestination(44263U);
    msg.setDestinationEntity(109U);
    msg.value = 3782;

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
    msg.setTimeStamp(0.0426937768224);
    msg.setSource(16403U);
    msg.setSourceEntity(230U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(206U);
    msg.value = 0.641822703137;

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
    msg.setTimeStamp(0.240364647713);
    msg.setSource(44303U);
    msg.setSourceEntity(183U);
    msg.setDestination(27759U);
    msg.setDestinationEntity(59U);
    msg.value = 0.708261758644;

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
    msg.setTimeStamp(0.772323343103);
    msg.setSource(36616U);
    msg.setSourceEntity(56U);
    msg.setDestination(44462U);
    msg.setDestinationEntity(210U);
    msg.value = 0.129422682165;

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
    msg.setTimeStamp(0.222244660523);
    msg.setSource(56930U);
    msg.setSourceEntity(147U);
    msg.setDestination(29174U);
    msg.setDestinationEntity(170U);
    msg.value = 0.412065119202;

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
    msg.setTimeStamp(0.989264797063);
    msg.setSource(31469U);
    msg.setSourceEntity(97U);
    msg.setDestination(37888U);
    msg.setDestinationEntity(36U);
    msg.value = 0.672227418363;

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
    msg.setTimeStamp(0.277627839845);
    msg.setSource(5053U);
    msg.setSourceEntity(91U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(198U);
    msg.value = 0.552023821502;

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
    msg.setTimeStamp(0.647201015232);
    msg.setSource(40525U);
    msg.setSourceEntity(4U);
    msg.setDestination(26699U);
    msg.setDestinationEntity(6U);
    msg.validity = 2865U;
    msg.type = 106U;
    msg.utc_year = 9806U;
    msg.utc_month = 182U;
    msg.utc_day = 41U;
    msg.utc_time = 0.626527328775;
    msg.lat = 0.662855991821;
    msg.lon = 0.746236935255;
    msg.height = 0.356629069581;
    msg.satellites = 203U;
    msg.cog = 0.970051766179;
    msg.sog = 0.50821723803;
    msg.hdop = 0.758119570074;
    msg.vdop = 0.717767920257;
    msg.hacc = 0.223460747189;
    msg.vacc = 0.892559336694;

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
    msg.setTimeStamp(0.912109162625);
    msg.setSource(51807U);
    msg.setSourceEntity(17U);
    msg.setDestination(26493U);
    msg.setDestinationEntity(232U);
    msg.validity = 64125U;
    msg.type = 196U;
    msg.utc_year = 14864U;
    msg.utc_month = 34U;
    msg.utc_day = 108U;
    msg.utc_time = 0.50199513203;
    msg.lat = 0.439966022866;
    msg.lon = 0.67712100796;
    msg.height = 0.982773643724;
    msg.satellites = 177U;
    msg.cog = 0.346673772737;
    msg.sog = 0.772513456495;
    msg.hdop = 0.276886085213;
    msg.vdop = 0.296178385458;
    msg.hacc = 0.855570439966;
    msg.vacc = 0.673895908345;

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
    msg.setTimeStamp(0.498049190962);
    msg.setSource(61914U);
    msg.setSourceEntity(13U);
    msg.setDestination(8383U);
    msg.setDestinationEntity(236U);
    msg.validity = 62964U;
    msg.type = 151U;
    msg.utc_year = 6398U;
    msg.utc_month = 200U;
    msg.utc_day = 98U;
    msg.utc_time = 0.646842837382;
    msg.lat = 0.88842858042;
    msg.lon = 0.973530325244;
    msg.height = 0.240829129144;
    msg.satellites = 66U;
    msg.cog = 0.633272728511;
    msg.sog = 0.00739988933823;
    msg.hdop = 0.0220039616932;
    msg.vdop = 0.746245600104;
    msg.hacc = 0.27759039972;
    msg.vacc = 0.318842675869;

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
    msg.setTimeStamp(0.628728217144);
    msg.setSource(39633U);
    msg.setSourceEntity(69U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(189U);
    msg.time = 0.426192046232;
    msg.phi = 0.420851327203;
    msg.theta = 0.738562511225;
    msg.psi = 0.395902570941;
    msg.psi_magnetic = 0.589184159495;

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
    msg.setTimeStamp(0.498554359659);
    msg.setSource(56468U);
    msg.setSourceEntity(141U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(75U);
    msg.time = 0.499252500353;
    msg.phi = 0.552104635822;
    msg.theta = 0.0906202567128;
    msg.psi = 0.487522533762;
    msg.psi_magnetic = 0.46779502465;

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
    msg.setTimeStamp(0.789432624333);
    msg.setSource(55816U);
    msg.setSourceEntity(184U);
    msg.setDestination(19558U);
    msg.setDestinationEntity(167U);
    msg.time = 0.170329681963;
    msg.phi = 0.251387031759;
    msg.theta = 0.824016129242;
    msg.psi = 0.468964555305;
    msg.psi_magnetic = 0.741113898425;

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
    msg.setTimeStamp(0.827098449707);
    msg.setSource(37208U);
    msg.setSourceEntity(51U);
    msg.setDestination(27197U);
    msg.setDestinationEntity(103U);
    msg.time = 0.71280874227;
    msg.x = 0.754153141553;
    msg.y = 0.348483965692;
    msg.z = 0.637771693822;
    msg.timestep = 0.683707216891;

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
    msg.setTimeStamp(0.952518191864);
    msg.setSource(47000U);
    msg.setSourceEntity(124U);
    msg.setDestination(26308U);
    msg.setDestinationEntity(89U);
    msg.time = 0.911021143197;
    msg.x = 0.203866528495;
    msg.y = 0.44611325857;
    msg.z = 0.418671732273;
    msg.timestep = 0.654703943192;

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
    msg.setTimeStamp(0.639756880688);
    msg.setSource(21541U);
    msg.setSourceEntity(105U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(175U);
    msg.time = 0.345265211631;
    msg.x = 0.483957552602;
    msg.y = 0.604228827992;
    msg.z = 0.0470397490628;
    msg.timestep = 0.659092886259;

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
    msg.setTimeStamp(0.430490018395);
    msg.setSource(39761U);
    msg.setSourceEntity(24U);
    msg.setDestination(20947U);
    msg.setDestinationEntity(162U);
    msg.time = 0.659425888197;
    msg.x = 0.737208443898;
    msg.y = 0.265002723261;
    msg.z = 0.760177346627;

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
    msg.setTimeStamp(0.497841688611);
    msg.setSource(3635U);
    msg.setSourceEntity(234U);
    msg.setDestination(3957U);
    msg.setDestinationEntity(127U);
    msg.time = 0.989599149451;
    msg.x = 0.0457384240844;
    msg.y = 0.284984516353;
    msg.z = 0.53576399223;

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
    msg.setTimeStamp(0.434229222131);
    msg.setSource(44973U);
    msg.setSourceEntity(112U);
    msg.setDestination(49025U);
    msg.setDestinationEntity(133U);
    msg.time = 0.090697434577;
    msg.x = 0.641254700361;
    msg.y = 0.891753037483;
    msg.z = 0.474012374374;

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
    msg.setTimeStamp(0.633531643844);
    msg.setSource(64322U);
    msg.setSourceEntity(85U);
    msg.setDestination(64127U);
    msg.setDestinationEntity(208U);
    msg.time = 0.0787863167976;
    msg.x = 0.722731619299;
    msg.y = 0.594490720223;
    msg.z = 0.419478453941;

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
    msg.setTimeStamp(0.942410921784);
    msg.setSource(9546U);
    msg.setSourceEntity(73U);
    msg.setDestination(20134U);
    msg.setDestinationEntity(167U);
    msg.time = 0.813011108704;
    msg.x = 0.560323405993;
    msg.y = 0.656094985506;
    msg.z = 0.162827198509;

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
    msg.setTimeStamp(0.0167035752534);
    msg.setSource(12672U);
    msg.setSourceEntity(136U);
    msg.setDestination(34178U);
    msg.setDestinationEntity(183U);
    msg.time = 0.310106092881;
    msg.x = 0.501869054281;
    msg.y = 0.458525525338;
    msg.z = 0.267425528333;

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
    msg.setTimeStamp(0.216144909689);
    msg.setSource(34176U);
    msg.setSourceEntity(63U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(14U);
    msg.time = 0.576131374987;
    msg.x = 0.511464175364;
    msg.y = 0.474840501035;
    msg.z = 0.210508629706;

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
    msg.setTimeStamp(0.0114882115388);
    msg.setSource(44886U);
    msg.setSourceEntity(211U);
    msg.setDestination(26391U);
    msg.setDestinationEntity(124U);
    msg.time = 0.150499737168;
    msg.x = 0.825094683852;
    msg.y = 0.241448815711;
    msg.z = 0.0889606599959;

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
    msg.setTimeStamp(0.673584109574);
    msg.setSource(33301U);
    msg.setSourceEntity(177U);
    msg.setDestination(47596U);
    msg.setDestinationEntity(133U);
    msg.time = 0.496513105565;
    msg.x = 0.575194889463;
    msg.y = 0.937486660212;
    msg.z = 0.0879770234778;

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
    msg.setTimeStamp(0.888183685313);
    msg.setSource(4935U);
    msg.setSourceEntity(180U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(104U);
    msg.validity = 232U;
    msg.x = 0.0583695042158;
    msg.y = 0.450606637494;
    msg.z = 0.0329757942589;

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
    msg.setTimeStamp(0.10749172523);
    msg.setSource(25639U);
    msg.setSourceEntity(149U);
    msg.setDestination(820U);
    msg.setDestinationEntity(184U);
    msg.validity = 179U;
    msg.x = 0.562861573935;
    msg.y = 0.190473603509;
    msg.z = 0.948466053454;

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
    msg.setTimeStamp(0.383949188407);
    msg.setSource(48589U);
    msg.setSourceEntity(244U);
    msg.setDestination(54825U);
    msg.setDestinationEntity(178U);
    msg.validity = 65U;
    msg.x = 0.818524056429;
    msg.y = 0.824400240601;
    msg.z = 0.125575857051;

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
    msg.setTimeStamp(0.454611821547);
    msg.setSource(53926U);
    msg.setSourceEntity(157U);
    msg.setDestination(38575U);
    msg.setDestinationEntity(100U);
    msg.validity = 85U;
    msg.x = 0.696991644694;
    msg.y = 0.429914286292;
    msg.z = 0.885739322529;

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
    msg.setTimeStamp(0.703032720375);
    msg.setSource(7489U);
    msg.setSourceEntity(185U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(225U);
    msg.validity = 161U;
    msg.x = 0.510913339458;
    msg.y = 0.269398458101;
    msg.z = 0.533639367515;

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
    msg.setTimeStamp(0.680386820094);
    msg.setSource(52168U);
    msg.setSourceEntity(181U);
    msg.setDestination(51889U);
    msg.setDestinationEntity(81U);
    msg.validity = 0U;
    msg.x = 0.138155654252;
    msg.y = 0.47031166342;
    msg.z = 0.317667699857;

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
    msg.setTimeStamp(0.719483659564);
    msg.setSource(27598U);
    msg.setSourceEntity(146U);
    msg.setDestination(51062U);
    msg.setDestinationEntity(37U);
    msg.time = 0.959110196415;
    msg.x = 0.86839432697;
    msg.y = 0.77471833207;
    msg.z = 0.999780505028;

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
    msg.setTimeStamp(0.240755628495);
    msg.setSource(37506U);
    msg.setSourceEntity(79U);
    msg.setDestination(34973U);
    msg.setDestinationEntity(86U);
    msg.time = 0.896417899201;
    msg.x = 0.136840991937;
    msg.y = 0.19280239766;
    msg.z = 0.11902182196;

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
    msg.setTimeStamp(0.815886627416);
    msg.setSource(38472U);
    msg.setSourceEntity(75U);
    msg.setDestination(51938U);
    msg.setDestinationEntity(246U);
    msg.time = 0.439111575537;
    msg.x = 0.43730921852;
    msg.y = 0.597856984609;
    msg.z = 0.277669850763;

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
    msg.setTimeStamp(0.297934894851);
    msg.setSource(6215U);
    msg.setSourceEntity(62U);
    msg.setDestination(4023U);
    msg.setDestinationEntity(93U);
    msg.validity = 24U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.762100788779;
    tmp_msg_0.beam_height = 0.586113041265;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.429751537323;

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
    msg.setTimeStamp(0.921148061471);
    msg.setSource(56200U);
    msg.setSourceEntity(29U);
    msg.setDestination(4515U);
    msg.setDestinationEntity(222U);
    msg.validity = 16U;
    msg.value = 0.403872597662;

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
    msg.setTimeStamp(0.203394555834);
    msg.setSource(9029U);
    msg.setSourceEntity(246U);
    msg.setDestination(4104U);
    msg.setDestinationEntity(121U);
    msg.validity = 180U;
    msg.value = 0.918710327959;

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
    msg.setTimeStamp(0.642373261139);
    msg.setSource(26450U);
    msg.setSourceEntity(202U);
    msg.setDestination(39515U);
    msg.setDestinationEntity(146U);
    msg.value = 0.922018766152;

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
    msg.setTimeStamp(0.306891365594);
    msg.setSource(5275U);
    msg.setSourceEntity(215U);
    msg.setDestination(6353U);
    msg.setDestinationEntity(113U);
    msg.value = 0.525378779828;

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
    msg.setTimeStamp(0.869240880279);
    msg.setSource(20583U);
    msg.setSourceEntity(65U);
    msg.setDestination(47536U);
    msg.setDestinationEntity(134U);
    msg.value = 0.90691731764;

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
    msg.setTimeStamp(0.250523916947);
    msg.setSource(16787U);
    msg.setSourceEntity(54U);
    msg.setDestination(34041U);
    msg.setDestinationEntity(162U);
    msg.value = 0.59236398695;

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
    msg.setTimeStamp(0.920397602426);
    msg.setSource(60073U);
    msg.setSourceEntity(156U);
    msg.setDestination(26530U);
    msg.setDestinationEntity(242U);
    msg.value = 0.740733455383;

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
    msg.setTimeStamp(0.51418224316);
    msg.setSource(56151U);
    msg.setSourceEntity(191U);
    msg.setDestination(30920U);
    msg.setDestinationEntity(37U);
    msg.value = 0.530853399121;

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
    msg.setTimeStamp(0.545025399961);
    msg.setSource(42279U);
    msg.setSourceEntity(165U);
    msg.setDestination(47825U);
    msg.setDestinationEntity(131U);
    msg.value = 0.0508891666185;

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
    msg.setTimeStamp(0.696771916996);
    msg.setSource(24389U);
    msg.setSourceEntity(18U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(147U);
    msg.value = 0.688705023733;

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
    msg.setTimeStamp(0.345629022262);
    msg.setSource(14348U);
    msg.setSourceEntity(222U);
    msg.setDestination(59610U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0759958323746;

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
    msg.setTimeStamp(0.220218867371);
    msg.setSource(29327U);
    msg.setSourceEntity(74U);
    msg.setDestination(55554U);
    msg.setDestinationEntity(118U);
    msg.value = 0.0488762278576;

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
    msg.setTimeStamp(0.846235439541);
    msg.setSource(54674U);
    msg.setSourceEntity(151U);
    msg.setDestination(10773U);
    msg.setDestinationEntity(229U);
    msg.value = 0.393375964603;

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
    msg.setTimeStamp(0.334718496195);
    msg.setSource(15940U);
    msg.setSourceEntity(128U);
    msg.setDestination(1855U);
    msg.setDestinationEntity(85U);
    msg.value = 0.607828839811;

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
    msg.setTimeStamp(0.586400130223);
    msg.setSource(7304U);
    msg.setSourceEntity(117U);
    msg.setDestination(40003U);
    msg.setDestinationEntity(35U);
    msg.value = 0.493061085755;

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
    msg.setTimeStamp(0.248575153044);
    msg.setSource(34832U);
    msg.setSourceEntity(228U);
    msg.setDestination(20735U);
    msg.setDestinationEntity(83U);
    msg.value = 0.534730963431;

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
    msg.setTimeStamp(0.104984081559);
    msg.setSource(20424U);
    msg.setSourceEntity(95U);
    msg.setDestination(28613U);
    msg.setDestinationEntity(119U);
    msg.value = 0.143409996328;

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
    msg.setTimeStamp(0.610598620883);
    msg.setSource(65022U);
    msg.setSourceEntity(181U);
    msg.setDestination(24248U);
    msg.setDestinationEntity(28U);
    msg.value = 0.483632029843;

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
    msg.setTimeStamp(0.0776973950673);
    msg.setSource(53680U);
    msg.setSourceEntity(223U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(0U);
    msg.value = 0.365069932354;

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
    msg.setTimeStamp(0.00228386089871);
    msg.setSource(53243U);
    msg.setSourceEntity(1U);
    msg.setDestination(37321U);
    msg.setDestinationEntity(162U);
    msg.value = 0.514200406379;

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
    msg.setTimeStamp(0.480726011211);
    msg.setSource(27372U);
    msg.setSourceEntity(24U);
    msg.setDestination(44380U);
    msg.setDestinationEntity(140U);
    msg.value = 0.243624498987;

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
    msg.setTimeStamp(0.875104598118);
    msg.setSource(22332U);
    msg.setSourceEntity(244U);
    msg.setDestination(51267U);
    msg.setDestinationEntity(187U);
    msg.value = 0.166635933915;

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
    msg.setTimeStamp(0.763176900957);
    msg.setSource(59679U);
    msg.setSourceEntity(120U);
    msg.setDestination(28964U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0167924969543;

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
    msg.setTimeStamp(0.409077391417);
    msg.setSource(7659U);
    msg.setSourceEntity(46U);
    msg.setDestination(22181U);
    msg.setDestinationEntity(47U);
    msg.value = 0.417757455412;

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
    msg.setTimeStamp(0.656284702145);
    msg.setSource(30818U);
    msg.setSourceEntity(129U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0536460113096;

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
    msg.setTimeStamp(0.786795640208);
    msg.setSource(8107U);
    msg.setSourceEntity(161U);
    msg.setDestination(64917U);
    msg.setDestinationEntity(184U);
    msg.value = 0.508500397302;

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
    msg.setTimeStamp(0.574772042094);
    msg.setSource(12518U);
    msg.setSourceEntity(226U);
    msg.setDestination(28688U);
    msg.setDestinationEntity(62U);
    msg.direction = 0.744616669517;
    msg.speed = 0.773877607061;
    msg.turbulence = 0.607702737458;

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
    msg.setTimeStamp(0.103525370614);
    msg.setSource(5519U);
    msg.setSourceEntity(77U);
    msg.setDestination(57828U);
    msg.setDestinationEntity(115U);
    msg.direction = 0.617042749607;
    msg.speed = 0.758313680902;
    msg.turbulence = 0.293719920682;

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
    msg.setTimeStamp(0.880676199376);
    msg.setSource(2622U);
    msg.setSourceEntity(153U);
    msg.setDestination(49829U);
    msg.setDestinationEntity(189U);
    msg.direction = 0.446811595497;
    msg.speed = 0.300971936639;
    msg.turbulence = 0.95876259656;

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
    msg.setTimeStamp(0.949622101596);
    msg.setSource(5626U);
    msg.setSourceEntity(250U);
    msg.setDestination(20339U);
    msg.setDestinationEntity(231U);
    msg.value = 0.537418337658;

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
    msg.setTimeStamp(0.539411921709);
    msg.setSource(56801U);
    msg.setSourceEntity(165U);
    msg.setDestination(65362U);
    msg.setDestinationEntity(218U);
    msg.value = 0.386357055468;

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
    msg.setTimeStamp(0.00573541757893);
    msg.setSource(22608U);
    msg.setSourceEntity(219U);
    msg.setDestination(38357U);
    msg.setDestinationEntity(97U);
    msg.value = 0.836925641145;

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
    msg.setTimeStamp(0.306576859649);
    msg.setSource(25016U);
    msg.setSourceEntity(179U);
    msg.setDestination(47093U);
    msg.setDestinationEntity(12U);
    msg.value.assign("MHYSUAHZBPEISMHZZYUWRKJOMQQTNOWCQKXURVEDDDLOKLNZBPTCEWNSRKCLLIQIQMYQOAHOBMVVMHSABAAOEGCZHQTYWMULPEZHRHTSYBWDJUZIDJXJAPXGQXFAGXPYQNDCDYADICFPCSCKPIBJQXLMGGFFPZZEOVJERWUKIKIPDFVLEEVRBKKMCTGRYJFMT");

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
    msg.setTimeStamp(0.977042133328);
    msg.setSource(17494U);
    msg.setSourceEntity(185U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(4U);
    msg.value.assign("ANGNKMHPHTTPXMBFSEAYCPRUGILUBWKBPBFLXVVNHQUZRGWXVXSRBINPJEYHUOQOTMCZTRKTUTVUYXYWZHOMDJSNNHXJJLOEAAYERIDSITT");

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
    msg.setTimeStamp(0.504371187429);
    msg.setSource(37003U);
    msg.setSourceEntity(225U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(116U);
    msg.value.assign("EREIAXQQJUNJGWRV");

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
    msg.setTimeStamp(0.412846664351);
    msg.setSource(62926U);
    msg.setSourceEntity(104U);
    msg.setDestination(27967U);
    msg.setDestinationEntity(218U);
    const char tmp_msg_0[] = {-124, -74, 82, -57, -119, 100, 76, -98, -98, 42, 22, -66, -76, 97, 21, 67, -35, 84, 61, 58, 97, -125, -44};
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
    msg.setTimeStamp(0.193165943448);
    msg.setSource(8225U);
    msg.setSourceEntity(195U);
    msg.setDestination(3298U);
    msg.setDestinationEntity(231U);
    const char tmp_msg_0[] = {-4, -19, -102, 29, 8, -17, -82, -31, 40, -123, 84, -98, -62, 11, -61, -65, 90, -4, -99, 72, -125, -47, -74, -28, -86, -21, 48, 85, 58, -32, 51, 20, 49, 88, 60, -124, -29, -95, -63, 48, 77, -126, -19, 6, -91, -19, -74, -68, 90, 21, -29, -10, -99, 46, 11, 119, 91, -81, -86, 112, 76, 101, 122, -8, -74, 2, 92, -68, -71, 3, -120, -113, 56, -45, 109, -4, -118, -100, -17, -43, 74, 10, -30, -40, -64, 82, -41, -113, -120, 53, 26, -96, 12, -109, -38, 91, 5, -88, 16, -94, -31, -102, -68, -94, -87, 119, 63, -80, -45, 17, -98, 40, -124, -4, 20, -40, -93, 15, -126, -59, -34, 92, 19, 77, -51, 84, -47, 83, -15, -111, 10, 29, -59, -71, -69, 28, 39, -24, 121, -55, -83, 61, -124, -49, -123, -123, -112, 84, 12, -62, 86, -105, -100, 4, 123, 14, -98, -35, 51, 63, -105, 96, -110, 11, -98, -30, -119, 115, -2, 80, -43, -118, 107, -57, -83, -6, -55, -74, 91, -120, -117, 107, -31, -128, 11, -42, 23, 115, -96, 51, -124, -82, -53, -52, -39, 39, -24, -125, 120, -13, 69, -74};
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
    msg.setTimeStamp(0.995544741913);
    msg.setSource(50842U);
    msg.setSourceEntity(14U);
    msg.setDestination(47343U);
    msg.setDestinationEntity(123U);
    const char tmp_msg_0[] = {58, 34, 53, 93, -25, -26, 114, -128, -60, -87, -35, 126, 88, -94, 4, 91, -74, -29};
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
    msg.setTimeStamp(0.51967727688);
    msg.setSource(43264U);
    msg.setSourceEntity(215U);
    msg.setDestination(17235U);
    msg.setDestinationEntity(33U);
    msg.frequency = 1849029747U;
    msg.min_range = 28896U;
    msg.max_range = 33987U;

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
    msg.setTimeStamp(0.831545180477);
    msg.setSource(58475U);
    msg.setSourceEntity(198U);
    msg.setDestination(64072U);
    msg.setDestinationEntity(240U);
    msg.frequency = 2010036138U;
    msg.min_range = 63178U;
    msg.max_range = 21805U;

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
    msg.setTimeStamp(0.155115103263);
    msg.setSource(27378U);
    msg.setSourceEntity(138U);
    msg.setDestination(20589U);
    msg.setDestinationEntity(47U);
    msg.frequency = 753268013U;
    msg.min_range = 59676U;
    msg.max_range = 37397U;

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
    msg.setTimeStamp(0.62211602268);
    msg.setSource(54182U);
    msg.setSourceEntity(119U);
    msg.setDestination(55911U);
    msg.setDestinationEntity(56U);
    msg.type = 235U;
    msg.frequency = 1553004571U;
    msg.min_range = 34105U;
    msg.max_range = 28342U;
    msg.bits_per_point = 221U;
    msg.scale_factor = 0.912809133519;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.883335372813;
    tmp_msg_0.beam_height = 0.405192913727;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {91, 121, -100, 62, 88, 22, 22, 10, -47, -89, 112, 83, 30, 103, 25, 94, 107, 19, -108, 88, 107, -53, 0, 57, -51, 115, 3, 29, 44, 93, -51, 78, -61, 88, 14, 40, -94, 11, 30, 26, 104, -29, 47, 50, -121, 45, 51, 12, 34, -126, 107, 113, 68, 103, -14, 23, -105, -108, 124, -72, 55, -46, 59, -59, 116, 5, -24, -10, 88, -19, -122, 25, 2, -30, 86, 45, 35, -30, 45, -63, 95, -93, -67, 112, 3, -118, 96, 91, 43, -106, -11, -100, -98, 41, 59, -43, -50, 45, 111, 47, 66, 73, -107, 93, 77, 22, -83, -80, 23, -123, 37, 40, 36, 100, 96, -121, -74};
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
    msg.setTimeStamp(0.150119695347);
    msg.setSource(57935U);
    msg.setSourceEntity(93U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(103U);
    msg.type = 145U;
    msg.frequency = 3036439683U;
    msg.min_range = 23984U;
    msg.max_range = 22398U;
    msg.bits_per_point = 35U;
    msg.scale_factor = 0.843367416092;
    const char tmp_msg_0[] = {89, -25, -58, 64, 122, -97, 24, 107, 115, 72, 86, 121, -91, -87, 114, -114, 69, 93, -86, -109, 90, 63, 50, -44, -51, 16, 25, -50, -11, -60, 23, 10, -50, 84, 69, 43, -29, 47, 27, 35, 37, -26, -75, 0, 24, 28, 115, 76, 10, 21, -71, -68, -58, -2, -101, -45, 107, 38, -112, 121, -121, 63, -84, 106, -13, 97, -63, -71, -48, -118, -54, 36, -67, 55, 49, -44, 99, -48, 99, 117, -117, -123, 59, 66, -72, 121, 80, 121, -28, -21, -21, 48, 119, 59, 24, -124, -118, 46, -74, -86, 24, 100, 70, -49, -120, -127, 15, -43, -28, -11, -9, 111, -5, 17, -111, -19, 117, 22, -4, -126, -7, 69, -105, 119, 121, -16, -74, 50, -122, -68, 87, -89, 31, -65, -25, 74, -84, -67, 15, -66, 57, -121, -41, 111, 14, 102, 87, -18, 53, 116, -35, -11, 110, -38, -95, 17, 17, 59, -92, 51, 52, 87, 29, -38, -5, -23, -105, 92, 39, 30, -1, 51, -95, 102, -42, -61, -99, -29, 31, -1, 121, -29, 26, 38, 106, -24, 58, 36, 27, -4, 119, -48, 91, -41, -25, 53, 55, -34, -2, -75, -51, 41, 9, 32, -106, 63, -100, -71, -99, -27, -124, -29, 118, 7, 118, -25, 68, 26, 96, 8, 106, 103, -76, 112, -119, -78, 54, -49, 89, 23, -41, -68, 103, -13, 86, 60, 30, 53, 17, -88, 18, 73, -59, -66};
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
    msg.setTimeStamp(0.364633084928);
    msg.setSource(18571U);
    msg.setSourceEntity(37U);
    msg.setDestination(6814U);
    msg.setDestinationEntity(243U);
    msg.type = 91U;
    msg.frequency = 2732250951U;
    msg.min_range = 31223U;
    msg.max_range = 21709U;
    msg.bits_per_point = 111U;
    msg.scale_factor = 0.437648634076;
    const char tmp_msg_0[] = {0, -109, 106, 125, -42, -83, -105, 39, 55, -48, -110, 47, -4, -96, 69, -121, -42, 55, 109, -80, -121, 107, -114, -2, -75, -5, -51, -92, -125, -21, -105, -49, 26, -99, -46, -46, 104, 119, -36, 58, -26, 94, -21, 31, -62, -24, 70, -16, 78, 36, -99, -91, 38, -92, 52, 22, -72, 96, -7, 121, -95, 62, 12, -91, 39, 85, -70, -78, 80, -57, 57, -34, -51, -34, 121, -33, -59, 124, 35, 14, 24, -3, 20, -68, -98, -111, 16, -61, 91, -79, -72, 64, 113, 43, 20, -65, -105, -59, -41, 12, 62, -65, -4, -103, 45, 18, 62, 2, -67, 101, 14, 58, 126, -43, -38, -22, 123};
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
    msg.setTimeStamp(0.670482863942);
    msg.setSource(50239U);
    msg.setSourceEntity(120U);
    msg.setDestination(33557U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.836999097928);
    msg.setSource(632U);
    msg.setSourceEntity(55U);
    msg.setDestination(38323U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.23598928907);
    msg.setSource(45441U);
    msg.setSourceEntity(159U);
    msg.setDestination(57227U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.72300604337);
    msg.setSource(34719U);
    msg.setSourceEntity(135U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(238U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.372650295635);
    msg.setSource(44506U);
    msg.setSourceEntity(53U);
    msg.setDestination(13803U);
    msg.setDestinationEntity(203U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.700871010827);
    msg.setSource(673U);
    msg.setSourceEntity(228U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(2U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.520255098639);
    msg.setSource(55716U);
    msg.setSourceEntity(127U);
    msg.setDestination(56719U);
    msg.setDestinationEntity(154U);
    msg.value = 0.110875557966;
    msg.confidence = 0.0256626363592;
    msg.opmodes.assign("ACRJYHKQCDPXCDRVQNUICNKDMYQJZMFLGMUXLNZWKLBXLKJNOGTVQXMSITBURONXILVQTBHE");

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
    msg.setTimeStamp(0.974669097953);
    msg.setSource(41833U);
    msg.setSourceEntity(27U);
    msg.setDestination(48614U);
    msg.setDestinationEntity(46U);
    msg.value = 0.180193572261;
    msg.confidence = 0.255780486006;
    msg.opmodes.assign("KDJOBBJLUK");

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
    msg.setTimeStamp(0.787277202364);
    msg.setSource(44842U);
    msg.setSourceEntity(188U);
    msg.setDestination(65439U);
    msg.setDestinationEntity(190U);
    msg.value = 0.883696062381;
    msg.confidence = 0.293847482212;
    msg.opmodes.assign("OPQQXDSWHCVCGBDENPULSLHWNTUIGEUOFZVZOPXTORPWWWGIBUHXIXUFDUBQEDVWBNMHPDEWDXRQCBFTFKJCGYPJQBAGSJYNHVTMSQTZCNZGTAYGJNVQHIXOOFJLDDGGGTRSJLIFSTDALUDVAINRWWMHAJUFJJHMKOZYZBVPYASPYVLXUKPWRMIMNRZLOZIRHKVAMKTEC");

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
    msg.setTimeStamp(0.846626307437);
    msg.setSource(5303U);
    msg.setSourceEntity(136U);
    msg.setDestination(36653U);
    msg.setDestinationEntity(144U);
    msg.itow = 1848457106U;
    msg.lat = 0.89079193712;
    msg.lon = 0.48050387383;
    msg.height_ell = 0.834342734491;
    msg.height_sea = 0.526497891823;
    msg.hacc = 0.747638953772;
    msg.vacc = 0.3590862118;
    msg.vel_n = 0.603257775595;
    msg.vel_e = 0.172887184975;
    msg.vel_d = 0.889649456071;
    msg.speed = 0.207522891984;
    msg.gspeed = 0.548324742659;
    msg.heading = 0.0941910196434;
    msg.sacc = 0.748036328413;
    msg.cacc = 0.211994799649;

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
    msg.setTimeStamp(0.874967514931);
    msg.setSource(41486U);
    msg.setSourceEntity(128U);
    msg.setDestination(43882U);
    msg.setDestinationEntity(221U);
    msg.itow = 1858455316U;
    msg.lat = 0.124815452121;
    msg.lon = 0.755531316041;
    msg.height_ell = 0.333854187553;
    msg.height_sea = 0.703630416704;
    msg.hacc = 0.633389294742;
    msg.vacc = 0.569574733693;
    msg.vel_n = 0.31601706265;
    msg.vel_e = 0.396280917244;
    msg.vel_d = 0.223298908278;
    msg.speed = 0.929647733306;
    msg.gspeed = 0.377284093145;
    msg.heading = 0.601401820086;
    msg.sacc = 0.828164951712;
    msg.cacc = 0.782610903943;

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
    msg.setTimeStamp(0.306157056024);
    msg.setSource(56944U);
    msg.setSourceEntity(149U);
    msg.setDestination(9986U);
    msg.setDestinationEntity(227U);
    msg.itow = 697549592U;
    msg.lat = 0.740887879315;
    msg.lon = 0.507274164694;
    msg.height_ell = 0.155454830637;
    msg.height_sea = 0.614419446724;
    msg.hacc = 0.518637107893;
    msg.vacc = 0.512982637799;
    msg.vel_n = 0.36232989152;
    msg.vel_e = 0.717485670021;
    msg.vel_d = 0.777404439587;
    msg.speed = 0.81679077261;
    msg.gspeed = 0.252955203498;
    msg.heading = 0.447394775966;
    msg.sacc = 0.55940924361;
    msg.cacc = 0.584410420508;

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
    msg.setTimeStamp(0.418739052784);
    msg.setSource(48715U);
    msg.setSourceEntity(50U);
    msg.setDestination(12013U);
    msg.setDestinationEntity(230U);
    msg.id = 83U;
    msg.value = 0.757935911355;

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
    msg.setTimeStamp(0.849865879506);
    msg.setSource(45878U);
    msg.setSourceEntity(26U);
    msg.setDestination(41760U);
    msg.setDestinationEntity(205U);
    msg.id = 113U;
    msg.value = 0.538711150684;

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
    msg.setTimeStamp(0.842877463674);
    msg.setSource(12090U);
    msg.setSourceEntity(3U);
    msg.setDestination(5240U);
    msg.setDestinationEntity(75U);
    msg.id = 61U;
    msg.value = 0.0435004308111;

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
    msg.setTimeStamp(0.954030508428);
    msg.setSource(35420U);
    msg.setSourceEntity(238U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(230U);
    msg.x = 0.456280446764;
    msg.y = 0.215127381402;
    msg.z = 0.98418929075;
    msg.phi = 0.98801343672;
    msg.theta = 0.563413130824;
    msg.psi = 0.500103534661;

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
    msg.setTimeStamp(0.810373740439);
    msg.setSource(20069U);
    msg.setSourceEntity(161U);
    msg.setDestination(29487U);
    msg.setDestinationEntity(215U);
    msg.x = 0.951030974413;
    msg.y = 0.184050511118;
    msg.z = 0.212277774746;
    msg.phi = 0.338602294988;
    msg.theta = 0.132633072253;
    msg.psi = 0.787072142937;

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
    msg.setTimeStamp(0.231363606734);
    msg.setSource(50724U);
    msg.setSourceEntity(199U);
    msg.setDestination(13688U);
    msg.setDestinationEntity(129U);
    msg.x = 0.623596086785;
    msg.y = 0.81432515495;
    msg.z = 0.723898175906;
    msg.phi = 0.907512692005;
    msg.theta = 0.886749984692;
    msg.psi = 0.623002598911;

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
    msg.setTimeStamp(0.049028400741);
    msg.setSource(46986U);
    msg.setSourceEntity(153U);
    msg.setDestination(57382U);
    msg.setDestinationEntity(249U);
    msg.beam_width = 0.923051127466;
    msg.beam_height = 0.562854071941;

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
    msg.setTimeStamp(0.840849482726);
    msg.setSource(20803U);
    msg.setSourceEntity(111U);
    msg.setDestination(55121U);
    msg.setDestinationEntity(75U);
    msg.beam_width = 2.18086009355e-05;
    msg.beam_height = 0.544159795429;

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
    msg.setTimeStamp(0.470634084899);
    msg.setSource(27453U);
    msg.setSourceEntity(203U);
    msg.setDestination(14296U);
    msg.setDestinationEntity(253U);
    msg.beam_width = 0.909073702994;
    msg.beam_height = 0.509384159734;

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
    msg.setTimeStamp(0.221902442619);
    msg.setSource(11000U);
    msg.setSourceEntity(205U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(230U);
    msg.sane = 241U;

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
    msg.setTimeStamp(0.893120578435);
    msg.setSource(15459U);
    msg.setSourceEntity(20U);
    msg.setDestination(44277U);
    msg.setDestinationEntity(188U);
    msg.sane = 197U;

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
    msg.setTimeStamp(0.676416895791);
    msg.setSource(43746U);
    msg.setSourceEntity(138U);
    msg.setDestination(30229U);
    msg.setDestinationEntity(39U);
    msg.sane = 15U;

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
    msg.setTimeStamp(0.7207489471);
    msg.setSource(599U);
    msg.setSourceEntity(73U);
    msg.setDestination(14679U);
    msg.setDestinationEntity(55U);
    msg.id = 221U;
    msg.zoom = 26U;
    msg.action = 218U;

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
    msg.setTimeStamp(0.515932562991);
    msg.setSource(19004U);
    msg.setSourceEntity(251U);
    msg.setDestination(61018U);
    msg.setDestinationEntity(87U);
    msg.id = 34U;
    msg.zoom = 163U;
    msg.action = 136U;

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
    msg.setTimeStamp(0.306541956398);
    msg.setSource(54152U);
    msg.setSourceEntity(224U);
    msg.setDestination(26851U);
    msg.setDestinationEntity(173U);
    msg.id = 73U;
    msg.zoom = 131U;
    msg.action = 197U;

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
    msg.setTimeStamp(0.789974704401);
    msg.setSource(52220U);
    msg.setSourceEntity(51U);
    msg.setDestination(17426U);
    msg.setDestinationEntity(223U);
    msg.id = 144U;
    msg.value = 0.546011934767;

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
    msg.setTimeStamp(0.935992577309);
    msg.setSource(9163U);
    msg.setSourceEntity(220U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(19U);
    msg.id = 59U;
    msg.value = 0.828360623676;

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
    msg.setTimeStamp(0.445929196017);
    msg.setSource(33421U);
    msg.setSourceEntity(201U);
    msg.setDestination(26545U);
    msg.setDestinationEntity(50U);
    msg.id = 129U;
    msg.value = 0.0147774454976;

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
    msg.setTimeStamp(0.57077869596);
    msg.setSource(3055U);
    msg.setSourceEntity(103U);
    msg.setDestination(56633U);
    msg.setDestinationEntity(106U);
    msg.id = 244U;
    msg.value = 0.648728262827;

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
    msg.setTimeStamp(0.981175288455);
    msg.setSource(54656U);
    msg.setSourceEntity(40U);
    msg.setDestination(65032U);
    msg.setDestinationEntity(146U);
    msg.id = 253U;
    msg.value = 0.98846965064;

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
    msg.setTimeStamp(0.452685282129);
    msg.setSource(21837U);
    msg.setSourceEntity(173U);
    msg.setDestination(52202U);
    msg.setDestinationEntity(229U);
    msg.id = 231U;
    msg.value = 0.707528179294;

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
    msg.setTimeStamp(0.214927419068);
    msg.setSource(3973U);
    msg.setSourceEntity(6U);
    msg.setDestination(56765U);
    msg.setDestinationEntity(241U);
    msg.id = 13U;
    msg.angle = 0.52405551336;

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
    msg.setTimeStamp(0.911885745233);
    msg.setSource(32653U);
    msg.setSourceEntity(241U);
    msg.setDestination(34171U);
    msg.setDestinationEntity(167U);
    msg.id = 186U;
    msg.angle = 0.101459057566;

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
    msg.setTimeStamp(0.15774177958);
    msg.setSource(55492U);
    msg.setSourceEntity(146U);
    msg.setDestination(35686U);
    msg.setDestinationEntity(179U);
    msg.id = 136U;
    msg.angle = 0.811201160398;

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
    msg.setTimeStamp(0.534533073848);
    msg.setSource(29155U);
    msg.setSourceEntity(201U);
    msg.setDestination(47532U);
    msg.setDestinationEntity(2U);
    msg.op = 9U;
    msg.actions.assign("USXGGHMNAEVUQDHUQRGRHXZKGUJBXYNAUFCBHPETMWIXSYKBOFIYMUCRZEZEEQDMXXQGOQFYZTWEAZIKLCQKDBJHKLTNMNSAGMVXNNCLWNV");

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
    msg.setTimeStamp(0.868164868921);
    msg.setSource(49995U);
    msg.setSourceEntity(6U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(76U);
    msg.op = 110U;
    msg.actions.assign("FUGOFJQKLQKCVVQJLSPIWMDMHCNPRSRTIYZLASXKWLUAGBUXGNIUMBUCPKTKPNIVSJVLEAHZZDDAOEJHIMHAJOYWOBYFYTZWLECECBYENUBZJMTQSAUYWXMYJOEXMHKZDPBFNXIKHPZGTUDOKWJZWPOFDALRQTKRGDFWPIRXEAQXEJNYLSPUHMVPLSRNBWIGVBVRSHMNQFSOGNHCRBBCVQDGDQMF");

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
    msg.setTimeStamp(0.122423592265);
    msg.setSource(41966U);
    msg.setSourceEntity(35U);
    msg.setDestination(50113U);
    msg.setDestinationEntity(248U);
    msg.op = 58U;
    msg.actions.assign("LMUOXIETXZOBHLRJQZUDTDAKQFMYRUNLCVWTEQPHIMWZKBXNORRCNLSFTGQRJJRFXGYPPEHXEONYQGONXKLIIKLTJJMHUCHOUAYXJESWSHXPDZMGSCBAIPGOHDBVEIILAYFTCQZTBAIQHJNTBKLNGJFKOCLADSAQVTHPJUURGSVWMWVFYBSDNUYMCDBDWDSWFCKWYEDECS");

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
    msg.setTimeStamp(0.101248914279);
    msg.setSource(13406U);
    msg.setSourceEntity(2U);
    msg.setDestination(44850U);
    msg.setDestinationEntity(140U);
    msg.actions.assign("CJNUDPZJXIIVLXJDLYPPAIPSQMZZUWRFGOFEOWJTROJTERSDIKAXYYQMEFYOYRNUBTFPZYMGCBOOZWTAWGTQQPVGCFJBEWKZVNMNXXVMJLHKGFSCDEEDUOQHPODADSZCGMDNUQBHXHYHTJRIKVBQLOGFHHKL");

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
    msg.setTimeStamp(0.253643878106);
    msg.setSource(12881U);
    msg.setSourceEntity(157U);
    msg.setDestination(956U);
    msg.setDestinationEntity(180U);
    msg.actions.assign("RUWHZGDFVCGJFGFINQTBUMYGJVLHXWZQHEIDIHTSVNEQRSTNRKMPIAOCQONWPUUSBTNQGJ");

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
    msg.setTimeStamp(0.336536176733);
    msg.setSource(28736U);
    msg.setSourceEntity(30U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(210U);
    msg.actions.assign("PFNENEFNFTWIPDHZKKDNMTXIWCPOZXZXLRBSBIAAFDWRSVAXFDRIBJOZXIISWFOGEHEZWFMOFVRLCZJEUWNGLSNBFOKRNQATCGEHJAWMVYXGAHUBZSYMHKQHPYBVDAIPRYMXTJJVKYCRMHTDGOQBUBKYHUGSKELXJJOYOTSTYGVMQYWNL");

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
    msg.setTimeStamp(0.821761403466);
    msg.setSource(16101U);
    msg.setSourceEntity(37U);
    msg.setDestination(43727U);
    msg.setDestinationEntity(48U);
    msg.button = 49U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.857998350643);
    msg.setSource(21619U);
    msg.setSourceEntity(239U);
    msg.setDestination(28847U);
    msg.setDestinationEntity(144U);
    msg.button = 135U;
    msg.value = 75U;

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
    msg.setTimeStamp(0.619523398397);
    msg.setSource(24842U);
    msg.setSourceEntity(114U);
    msg.setDestination(6039U);
    msg.setDestinationEntity(53U);
    msg.button = 25U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.0214360772615);
    msg.setSource(5523U);
    msg.setSourceEntity(218U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(241U);
    msg.op = 113U;
    msg.text.assign("CUKAELFQZDDZRRAVECGNHSJQFUDCBAJTLOWCCIQDYWATOOHGPZGTOFDUXHZXSMRYUXCHJIZBJRRSQJJYBXGIOKLIHVXMRNSMSWUQFMOIHCGYLQFKLLBUTSYZASGYGYWSEUPZPBPRDQHSOWKEPCWIBALNKJUDMUKOMWLK");

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
    msg.setTimeStamp(0.317445410616);
    msg.setSource(52095U);
    msg.setSourceEntity(169U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(188U);
    msg.op = 221U;
    msg.text.assign("JAKFUGQKQGWKCXTFBCRFLJLSIZLZCMDWYQFKWLLWVCBUAAUEAUVWI");

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
    msg.setTimeStamp(0.142744234807);
    msg.setSource(29423U);
    msg.setSourceEntity(118U);
    msg.setDestination(5885U);
    msg.setDestinationEntity(222U);
    msg.op = 194U;
    msg.text.assign("PSFFOPOYIQOWBSPTNUZBLAVOVVXJWDCKWYUQVCRUKXQDDCDCYHUSUJFKKJIBNNAUKNFQXCWZMRNLGSTDEI");

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
    msg.setTimeStamp(0.979460486747);
    msg.setSource(52140U);
    msg.setSourceEntity(242U);
    msg.setDestination(54433U);
    msg.setDestinationEntity(232U);
    msg.op = 213U;
    msg.time_remain = 0.228252476319;
    msg.sched_time = 0.444582080522;

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
    msg.setTimeStamp(0.390051639005);
    msg.setSource(62433U);
    msg.setSourceEntity(151U);
    msg.setDestination(35651U);
    msg.setDestinationEntity(29U);
    msg.op = 161U;
    msg.time_remain = 0.156924064823;
    msg.sched_time = 0.305086952729;

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
    msg.setTimeStamp(0.568387543223);
    msg.setSource(28975U);
    msg.setSourceEntity(243U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(175U);
    msg.op = 115U;
    msg.time_remain = 0.532360236173;
    msg.sched_time = 0.448038844997;

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
    msg.setTimeStamp(0.595342949456);
    msg.setSource(63675U);
    msg.setSourceEntity(104U);
    msg.setDestination(47812U);
    msg.setDestinationEntity(87U);
    msg.name.assign("LURUKIGFMOMEFWCVFJLIMIMHCFXYVLNEPIEKCUJUSTYDPHXKCBBZGABODKABQNPBQYVW");
    msg.op = 95U;
    msg.sched_time = 0.308135239083;

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
    msg.setTimeStamp(0.569681112929);
    msg.setSource(11046U);
    msg.setSourceEntity(42U);
    msg.setDestination(7636U);
    msg.setDestinationEntity(214U);
    msg.name.assign("YIJNNUJTUXMACTOZDIVFLZSXTNFWWAMUJRIFPUDPKPLEQHEQAXQOZBGVGYIWVPQETWRBKJZSSCLWLQLLLDANSDIGVCUEMDAHQRNAOKEJOWSTJYEOFHSVVQIDORQVGXLQSVFIIUOZRPFOQRKURBHCDHNNXRUTMWPSKELIBDJXBPNZZAMDMJZXKYXWMGNGAPBYBCRWSYGXTMBHGMR");
    msg.op = 230U;
    msg.sched_time = 0.613245251107;

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
    msg.setTimeStamp(0.60127754772);
    msg.setSource(51374U);
    msg.setSourceEntity(45U);
    msg.setDestination(8434U);
    msg.setDestinationEntity(60U);
    msg.name.assign("HLCUCLHIBSGNBKFYJSWULYONPLZRPFBAEBPJBKDPMFOAFWOOYIEEMMGXMDZUBZANTVAXEOFHWLRGTHRRZNUSPINKTSQYOSTIPBDCTAIJDRZSUCFSRHOKQIFVPGLFZIVCMEQPHXAMNGYGZNMDBCWASDQQCEXBREPJOWYYTVVRWAWINJVAMMTLQJ");
    msg.op = 34U;
    msg.sched_time = 0.229207990297;

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
    msg.setTimeStamp(0.339350621262);
    msg.setSource(6713U);
    msg.setSourceEntity(60U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.462520695596);
    msg.setSource(24226U);
    msg.setSourceEntity(227U);
    msg.setDestination(10939U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.519229128545);
    msg.setSource(40794U);
    msg.setSourceEntity(206U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.716059437828);
    msg.setSource(45385U);
    msg.setSourceEntity(81U);
    msg.setDestination(44424U);
    msg.setDestinationEntity(228U);
    msg.name.assign("TMRVXMNITIJPEOFBELZAJEJNHWTZBQDSKKYLEBNUOJMFHWQZLDTKEACLGUO");
    msg.state = 7U;

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
    msg.setTimeStamp(0.980373765873);
    msg.setSource(60923U);
    msg.setSourceEntity(1U);
    msg.setDestination(36338U);
    msg.setDestinationEntity(252U);
    msg.name.assign("TVTFOHXDCVBEPPANXVTXJWGPUDNQDHPWXZOMGALCGDMQEJQXYEIEWKYBFHTTMVOYEIPZEVSBJDFOYUJLRCJZSKQBSLCKJQUBYSOGWUAVHIUMISTRWO");
    msg.state = 79U;

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
    msg.setTimeStamp(0.439034301789);
    msg.setSource(63957U);
    msg.setSourceEntity(129U);
    msg.setDestination(34759U);
    msg.setDestinationEntity(164U);
    msg.name.assign("NNFSZAHDKYYMG");
    msg.state = 18U;

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
    msg.setTimeStamp(0.42950287054);
    msg.setSource(39021U);
    msg.setSourceEntity(188U);
    msg.setDestination(42753U);
    msg.setDestinationEntity(54U);
    msg.name.assign("YZAUYNADVDMXGYKZCKFSIMOKWDVIRJPVCTK");
    msg.value = 159U;

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
    msg.setTimeStamp(0.232431582384);
    msg.setSource(58846U);
    msg.setSourceEntity(18U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(19U);
    msg.name.assign("BWYCDBRNUDNHAONOCLBZQAAOJWLFTXIDGCSAGYRRKYXXSDCVMWTYPFGTXVWMUIFIPNYTUGJZAIUZZRGVYDEZWKDMTSZHELHTPKGEYFYFPTKJLKCNADWSBKAVUNMNLJGICXFQTWNF");
    msg.value = 166U;

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
    msg.setTimeStamp(0.321779670258);
    msg.setSource(30519U);
    msg.setSourceEntity(188U);
    msg.setDestination(18267U);
    msg.setDestinationEntity(175U);
    msg.name.assign("UMXZBUWIBXZFXQOYJAYUWGKUYERNFRURGMCMLSELVORQKHMQXDXOIGCJJILUXEZOQPMJHNEO");
    msg.value = 143U;

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
    msg.setTimeStamp(0.719999902401);
    msg.setSource(20375U);
    msg.setSourceEntity(75U);
    msg.setDestination(16360U);
    msg.setDestinationEntity(240U);
    msg.name.assign("HLMSAJYDDYHUXCAEGNPPTNTGXZVIGSGTWFUPVFOAILRVRVMKLPJLPFBVOFPRYQIQGJHEEYUBANMMZXXUWAINNRISJZKWXIFBEXQCVKWLWXUOUKDOEUDZRYMNZJKTQNBWBYOWMBJQVTHDEQWTLSGODSZCXAMYCATBDSVOFGNSORWCGUOKAQCKVNSQUCJXBFPKGILJZZHDBRLNCQMERYYZHIHSAITTFQCPFPJXBYHALOJD");

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
    msg.setTimeStamp(0.20326683123);
    msg.setSource(96U);
    msg.setSourceEntity(230U);
    msg.setDestination(12527U);
    msg.setDestinationEntity(227U);
    msg.name.assign("TMPIEIRNDVTCQKMUJWOJWVMHNBTBWHZTMOCWLINLBYVVQXDFXKKQGVVYAEWEWWGWZDFHXNLZEFIJKZTZOIGLQYPKIOPCSRJYEFJOQTZMSSAIYZBUID");

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
    msg.setTimeStamp(0.983510767699);
    msg.setSource(4101U);
    msg.setSourceEntity(203U);
    msg.setDestination(1074U);
    msg.setDestinationEntity(189U);
    msg.name.assign("TZHSKXGCHGEJGFZURBTEHGAFIICMLCBJUSXQEMPWFCSBYMTNOTQNDRDPXBSXLVYDXKXXRRDVOOPTKTYOUKZWQOAEZQKSDLUOHDMMCOQBUOEIEWAPEVFGWLHUAZIGETHXWWZIM");

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
    msg.setTimeStamp(0.620278120664);
    msg.setSource(35189U);
    msg.setSourceEntity(236U);
    msg.setDestination(18673U);
    msg.setDestinationEntity(74U);
    msg.name.assign("DHYJNPTEKOXCPKBUWVXQMQDMHTAHFAHZZUARFHQOEWWMJJOZVRFZMEC");
    msg.value = 124U;

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
    msg.setTimeStamp(0.815320323633);
    msg.setSource(8742U);
    msg.setSourceEntity(222U);
    msg.setDestination(16959U);
    msg.setDestinationEntity(60U);
    msg.name.assign("MRVGVFIDJRZNVQJEREKDOAMYYQHAWCRUUMNOEITSSNXURAMHPGZZIVGUDQIWFJLDWQGXHYSZPZLYSVHYZQXATTWSJCCAFRREOVMTDQYWVAPPQKBPKQPGFCKNJS");
    msg.value = 195U;

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
    msg.setTimeStamp(0.509693866916);
    msg.setSource(50512U);
    msg.setSourceEntity(14U);
    msg.setDestination(49209U);
    msg.setDestinationEntity(74U);
    msg.name.assign("UYABEUXOAQSQGUUPHISALQRQXIZEOMRQYOMZGPIYMJYCDONCPYFINDRTPBKBRVYCHJLCDQONFECNSFRQZIVYJMXWCBBNMAUJFPYZFNXEWVDARKXEFNMQLKADMCKFIXLYGKWVEBVMJHWSWZJKOGJSOTXNIWNALDIVMGUHUZXZPSQULEFEHPWG");
    msg.value = 20U;

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
    msg.setTimeStamp(0.461388869055);
    msg.setSource(10298U);
    msg.setSourceEntity(30U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(222U);
    msg.id = 193U;
    msg.period = 3499445909U;
    msg.duty_cycle = 2445712451U;

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
    msg.setTimeStamp(0.971828230939);
    msg.setSource(21020U);
    msg.setSourceEntity(109U);
    msg.setDestination(17243U);
    msg.setDestinationEntity(239U);
    msg.id = 179U;
    msg.period = 308340719U;
    msg.duty_cycle = 904822638U;

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
    msg.setTimeStamp(0.506580416159);
    msg.setSource(36445U);
    msg.setSourceEntity(181U);
    msg.setDestination(14843U);
    msg.setDestinationEntity(230U);
    msg.id = 159U;
    msg.period = 3356047346U;
    msg.duty_cycle = 1300970192U;

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
    msg.setTimeStamp(0.0977814297301);
    msg.setSource(5946U);
    msg.setSourceEntity(56U);
    msg.setDestination(29428U);
    msg.setDestinationEntity(120U);
    msg.id = 3U;
    msg.period = 2235557129U;
    msg.duty_cycle = 175390226U;

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
    msg.setTimeStamp(0.151937264784);
    msg.setSource(40371U);
    msg.setSourceEntity(33U);
    msg.setDestination(61170U);
    msg.setDestinationEntity(108U);
    msg.id = 63U;
    msg.period = 4274897822U;
    msg.duty_cycle = 1156269877U;

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
    msg.setTimeStamp(0.0333636800165);
    msg.setSource(4691U);
    msg.setSourceEntity(250U);
    msg.setDestination(39028U);
    msg.setDestinationEntity(157U);
    msg.id = 241U;
    msg.period = 3677073063U;
    msg.duty_cycle = 2350632800U;

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
    msg.setTimeStamp(0.897251734096);
    msg.setSource(320U);
    msg.setSourceEntity(244U);
    msg.setDestination(3659U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.633985925321;
    msg.lon = 0.632355055471;
    msg.height = 0.781735690284;
    msg.x = 0.0946624369355;
    msg.y = 0.562542846206;
    msg.z = 0.532448606067;
    msg.phi = 0.102299524338;
    msg.theta = 0.184695688024;
    msg.psi = 0.705900459225;
    msg.u = 0.0200599876596;
    msg.v = 0.850547210651;
    msg.w = 0.696445259849;
    msg.vx = 0.888876577657;
    msg.vy = 0.989803875888;
    msg.vz = 0.485904702546;
    msg.p = 0.973946835953;
    msg.q = 0.576582856027;
    msg.r = 0.00262409987627;
    msg.depth = 0.991077398416;
    msg.alt = 0.00997765087678;

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
    msg.setTimeStamp(0.207562295723);
    msg.setSource(32382U);
    msg.setSourceEntity(200U);
    msg.setDestination(18685U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.811164908631;
    msg.lon = 0.29581896769;
    msg.height = 0.520305143874;
    msg.x = 0.937011382147;
    msg.y = 0.0649089755175;
    msg.z = 0.454782262018;
    msg.phi = 0.754300619285;
    msg.theta = 0.644150605461;
    msg.psi = 0.645509910318;
    msg.u = 0.9907476257;
    msg.v = 0.342639612104;
    msg.w = 0.557509066267;
    msg.vx = 0.481840692564;
    msg.vy = 0.712455024863;
    msg.vz = 0.509722975634;
    msg.p = 0.191901957707;
    msg.q = 0.73180536126;
    msg.r = 0.100598891497;
    msg.depth = 0.443050992079;
    msg.alt = 0.698830520098;

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
    msg.setTimeStamp(0.198293741619);
    msg.setSource(480U);
    msg.setSourceEntity(239U);
    msg.setDestination(13175U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.2355862551;
    msg.lon = 0.963203963722;
    msg.height = 0.778119152637;
    msg.x = 0.459718345943;
    msg.y = 0.69665458131;
    msg.z = 0.862906369513;
    msg.phi = 0.813155440814;
    msg.theta = 0.686591960658;
    msg.psi = 0.180549898859;
    msg.u = 0.194739400838;
    msg.v = 0.255641910833;
    msg.w = 0.86753377696;
    msg.vx = 0.293938043651;
    msg.vy = 0.966079318185;
    msg.vz = 0.490924513824;
    msg.p = 0.273069297309;
    msg.q = 0.945687527896;
    msg.r = 0.506362543122;
    msg.depth = 0.125140656783;
    msg.alt = 0.42162843736;

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
    msg.setTimeStamp(0.166416644374);
    msg.setSource(60788U);
    msg.setSourceEntity(182U);
    msg.setDestination(30648U);
    msg.setDestinationEntity(155U);
    msg.x = 0.817849978217;
    msg.y = 0.887864703527;
    msg.z = 0.767978739044;

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
    msg.setTimeStamp(0.146851215895);
    msg.setSource(16822U);
    msg.setSourceEntity(118U);
    msg.setDestination(21735U);
    msg.setDestinationEntity(49U);
    msg.x = 0.585411249394;
    msg.y = 0.799922461532;
    msg.z = 0.995596222852;

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
    msg.setTimeStamp(0.583179067015);
    msg.setSource(44494U);
    msg.setSourceEntity(53U);
    msg.setDestination(4876U);
    msg.setDestinationEntity(113U);
    msg.x = 0.441935970836;
    msg.y = 0.590943206366;
    msg.z = 0.563843415156;

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
    msg.setTimeStamp(0.81729029492);
    msg.setSource(23736U);
    msg.setSourceEntity(172U);
    msg.setDestination(26093U);
    msg.setDestinationEntity(153U);
    msg.value = 0.766203633442;

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
    msg.setTimeStamp(0.918875100691);
    msg.setSource(33541U);
    msg.setSourceEntity(146U);
    msg.setDestination(44790U);
    msg.setDestinationEntity(246U);
    msg.value = 0.591215968874;

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
    msg.setTimeStamp(0.582129898363);
    msg.setSource(31698U);
    msg.setSourceEntity(119U);
    msg.setDestination(39359U);
    msg.setDestinationEntity(116U);
    msg.value = 0.96489991279;

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
    msg.setTimeStamp(0.195488701917);
    msg.setSource(36996U);
    msg.setSourceEntity(13U);
    msg.setDestination(40480U);
    msg.setDestinationEntity(131U);
    msg.value = 0.939077774492;

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
    msg.setTimeStamp(0.582057046861);
    msg.setSource(42650U);
    msg.setSourceEntity(158U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(70U);
    msg.value = 0.958014450664;

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
    msg.setTimeStamp(0.782925607509);
    msg.setSource(35478U);
    msg.setSourceEntity(131U);
    msg.setDestination(31603U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0796846237874;

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
    msg.setTimeStamp(0.330620811391);
    msg.setSource(2761U);
    msg.setSourceEntity(230U);
    msg.setDestination(46007U);
    msg.setDestinationEntity(116U);
    msg.x = 0.828977384669;
    msg.y = 0.383012993508;
    msg.z = 0.283636321994;
    msg.phi = 0.89717584035;
    msg.theta = 0.703164407877;
    msg.psi = 0.907981341883;
    msg.p = 0.456928935507;
    msg.q = 0.567003320431;
    msg.r = 0.940295681343;
    msg.u = 0.635751928891;
    msg.v = 0.281756831695;
    msg.w = 0.66405057884;
    msg.bias_psi = 0.607718825576;
    msg.bias_r = 0.655267911884;

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
    msg.setTimeStamp(0.383570102144);
    msg.setSource(54805U);
    msg.setSourceEntity(92U);
    msg.setDestination(45984U);
    msg.setDestinationEntity(29U);
    msg.x = 0.766337222932;
    msg.y = 0.555067516012;
    msg.z = 0.888540170686;
    msg.phi = 0.604315757514;
    msg.theta = 0.562553926348;
    msg.psi = 0.766805399311;
    msg.p = 0.250465107855;
    msg.q = 0.836227175046;
    msg.r = 0.649161032936;
    msg.u = 0.99220786551;
    msg.v = 0.787292481959;
    msg.w = 0.0616669543756;
    msg.bias_psi = 0.34438544981;
    msg.bias_r = 0.604398454555;

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
    msg.setTimeStamp(0.424632848535);
    msg.setSource(15787U);
    msg.setSourceEntity(63U);
    msg.setDestination(46456U);
    msg.setDestinationEntity(68U);
    msg.x = 0.384806533927;
    msg.y = 0.692785924373;
    msg.z = 0.465445389461;
    msg.phi = 0.906250476306;
    msg.theta = 0.327758905268;
    msg.psi = 0.326477553066;
    msg.p = 0.431850750652;
    msg.q = 0.0359856853086;
    msg.r = 0.15794671584;
    msg.u = 0.34866391732;
    msg.v = 0.973538198389;
    msg.w = 0.286307236722;
    msg.bias_psi = 0.651530244127;
    msg.bias_r = 0.529255384855;

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
    msg.setTimeStamp(0.810051509034);
    msg.setSource(62167U);
    msg.setSourceEntity(88U);
    msg.setDestination(2292U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.890283770315;
    msg.bias_r = 0.123440712222;
    msg.cog = 0.498831824705;
    msg.cyaw = 0.623229618186;
    msg.lbl_rej_level = 0.0547767984349;
    msg.gps_rej_level = 0.0152538610099;
    msg.custom_x = 0.496212429741;
    msg.custom_y = 0.599809133955;
    msg.custom_z = 0.103439777357;

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
    msg.setTimeStamp(0.68092156142);
    msg.setSource(16111U);
    msg.setSourceEntity(90U);
    msg.setDestination(7949U);
    msg.setDestinationEntity(146U);
    msg.bias_psi = 0.894199560696;
    msg.bias_r = 0.76959519256;
    msg.cog = 0.817002998194;
    msg.cyaw = 0.268250697114;
    msg.lbl_rej_level = 0.306056401899;
    msg.gps_rej_level = 0.00840803960721;
    msg.custom_x = 0.29760973659;
    msg.custom_y = 0.214273410006;
    msg.custom_z = 0.478376109243;

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
    msg.setTimeStamp(0.567549333632);
    msg.setSource(41724U);
    msg.setSourceEntity(138U);
    msg.setDestination(46504U);
    msg.setDestinationEntity(143U);
    msg.bias_psi = 0.861112825389;
    msg.bias_r = 0.409057996295;
    msg.cog = 0.524205925853;
    msg.cyaw = 0.290061421665;
    msg.lbl_rej_level = 0.641892090188;
    msg.gps_rej_level = 0.961520309587;
    msg.custom_x = 0.0444033083772;
    msg.custom_y = 0.0116428905016;
    msg.custom_z = 0.667821535765;

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
    msg.setTimeStamp(0.114609332978);
    msg.setSource(18687U);
    msg.setSourceEntity(28U);
    msg.setDestination(61728U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.994878336065;
    msg.reason = 225U;

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
    msg.setTimeStamp(0.855135354285);
    msg.setSource(265U);
    msg.setSourceEntity(241U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(32U);
    msg.utc_time = 0.373951552611;
    msg.reason = 29U;

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
    msg.setTimeStamp(0.748419793724);
    msg.setSource(34540U);
    msg.setSourceEntity(208U);
    msg.setDestination(22283U);
    msg.setDestinationEntity(48U);
    msg.utc_time = 0.474093776557;
    msg.reason = 137U;

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
    msg.setTimeStamp(0.547501299313);
    msg.setSource(45427U);
    msg.setSourceEntity(53U);
    msg.setDestination(25332U);
    msg.setDestinationEntity(184U);
    msg.id = 73U;
    msg.range = 0.976636431296;
    msg.acceptance = 200U;

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
    msg.setTimeStamp(0.145024790767);
    msg.setSource(61975U);
    msg.setSourceEntity(121U);
    msg.setDestination(35400U);
    msg.setDestinationEntity(66U);
    msg.id = 154U;
    msg.range = 0.896955087829;
    msg.acceptance = 224U;

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
    msg.setTimeStamp(0.892010790885);
    msg.setSource(25350U);
    msg.setSourceEntity(229U);
    msg.setDestination(9953U);
    msg.setDestinationEntity(115U);
    msg.id = 25U;
    msg.range = 0.977422314307;
    msg.acceptance = 195U;

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
    msg.setTimeStamp(0.442892222727);
    msg.setSource(38304U);
    msg.setSourceEntity(77U);
    msg.setDestination(43166U);
    msg.setDestinationEntity(100U);
    msg.type = 99U;
    msg.reason = 120U;
    msg.value = 0.838383994729;
    msg.timestep = 0.914920948704;

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
    msg.setTimeStamp(0.0463446682552);
    msg.setSource(15869U);
    msg.setSourceEntity(189U);
    msg.setDestination(17340U);
    msg.setDestinationEntity(22U);
    msg.type = 131U;
    msg.reason = 100U;
    msg.value = 0.156371073862;
    msg.timestep = 0.734220339005;

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
    msg.setTimeStamp(0.0920388051645);
    msg.setSource(30788U);
    msg.setSourceEntity(229U);
    msg.setDestination(7957U);
    msg.setDestinationEntity(192U);
    msg.type = 191U;
    msg.reason = 76U;
    msg.value = 0.319494215333;
    msg.timestep = 0.333885845701;

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
    msg.setTimeStamp(0.0295974187185);
    msg.setSource(32178U);
    msg.setSourceEntity(226U);
    msg.setDestination(28505U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.0951347230329);
    msg.setSource(28773U);
    msg.setSourceEntity(246U);
    msg.setDestination(33297U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.0542176708278);
    msg.setSource(23078U);
    msg.setSourceEntity(132U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.566148607611);
    msg.setSource(8812U);
    msg.setSourceEntity(110U);
    msg.setDestination(38902U);
    msg.setDestinationEntity(242U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FYJOAFIHVTSUPIJJTZIMCKJNEHKOVQDUASMQDUVFVHLNEYMGJLKOTYLWXYQLVAMBPGBKWRIS");
    tmp_msg_0.lat = 0.327408924867;
    tmp_msg_0.lon = 0.369923473508;
    tmp_msg_0.depth = 0.351752241393;
    tmp_msg_0.query_channel = 24U;
    tmp_msg_0.reply_channel = 12U;
    tmp_msg_0.transponder_delay = 142U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.408452817138;
    msg.y = 0.382292946891;
    msg.var_x = 0.467955740137;
    msg.var_y = 0.609455586897;
    msg.distance = 0.758331091336;

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
    msg.setTimeStamp(0.893851347286);
    msg.setSource(16858U);
    msg.setSourceEntity(221U);
    msg.setDestination(58749U);
    msg.setDestinationEntity(27U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OSXOYATOQNHLUM");
    tmp_msg_0.lat = 0.364307802365;
    tmp_msg_0.lon = 0.280605856506;
    tmp_msg_0.depth = 0.528541616431;
    tmp_msg_0.query_channel = 156U;
    tmp_msg_0.reply_channel = 163U;
    tmp_msg_0.transponder_delay = 105U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.255717058586;
    msg.y = 0.17165118603;
    msg.var_x = 0.245630163162;
    msg.var_y = 0.934631555283;
    msg.distance = 0.957645736553;

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
    msg.setTimeStamp(0.00822545903348);
    msg.setSource(59395U);
    msg.setSourceEntity(137U);
    msg.setDestination(9908U);
    msg.setDestinationEntity(95U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LRQDSFYUQCCKTOXAEPZZFLTVFMRJKIVOLWLBMVXDZSUVBQHXHLWWAWKAMERGFEYIXEZJIRCZPQVLXZOUZEJNTJBIHNSLCMXGRSJRYDUEEPQDAEBODAQEZLYTYUEGKMOWTTFBPCMJNYNQMRINICJCDWBOHASIPYMWNWDUVHSODUKRNNQCAXZOYHGIBHVPJROPFTVHRKHSXGTNFVVXUTLPLKWQIMAABSQAGBXKN");
    tmp_msg_0.lat = 0.670225245654;
    tmp_msg_0.lon = 0.666680958366;
    tmp_msg_0.depth = 0.406163456022;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 215U;
    tmp_msg_0.transponder_delay = 179U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.275330978061;
    msg.y = 0.577412496114;
    msg.var_x = 0.40157086118;
    msg.var_y = 0.968143383273;
    msg.distance = 0.195011917448;

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
    msg.setTimeStamp(0.113406790648);
    msg.setSource(22606U);
    msg.setSourceEntity(37U);
    msg.setDestination(58738U);
    msg.setDestinationEntity(67U);
    msg.state = 180U;

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
    msg.setTimeStamp(0.906732589679);
    msg.setSource(61021U);
    msg.setSourceEntity(196U);
    msg.setDestination(27572U);
    msg.setDestinationEntity(176U);
    msg.state = 131U;

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
    msg.setTimeStamp(0.284925838361);
    msg.setSource(59513U);
    msg.setSourceEntity(102U);
    msg.setDestination(45277U);
    msg.setDestinationEntity(26U);
    msg.state = 12U;

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
    msg.setTimeStamp(0.855771608732);
    msg.setSource(12173U);
    msg.setSourceEntity(27U);
    msg.setDestination(64871U);
    msg.setDestinationEntity(181U);
    msg.x = 0.88856607794;
    msg.y = 0.228336547053;
    msg.z = 0.237850285535;

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
    msg.setTimeStamp(0.0152763081764);
    msg.setSource(7451U);
    msg.setSourceEntity(194U);
    msg.setDestination(51393U);
    msg.setDestinationEntity(132U);
    msg.x = 0.600821440036;
    msg.y = 0.337776579727;
    msg.z = 0.183455246557;

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
    msg.setTimeStamp(0.0202422603297);
    msg.setSource(33958U);
    msg.setSourceEntity(125U);
    msg.setDestination(14004U);
    msg.setDestinationEntity(202U);
    msg.x = 0.924294073786;
    msg.y = 0.667331965547;
    msg.z = 0.2816505154;

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
    msg.setTimeStamp(0.301154288685);
    msg.setSource(31440U);
    msg.setSourceEntity(20U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(164U);
    msg.value = 0.710292921077;

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
    msg.setTimeStamp(0.0415556881338);
    msg.setSource(60879U);
    msg.setSourceEntity(137U);
    msg.setDestination(12393U);
    msg.setDestinationEntity(254U);
    msg.value = 0.451645086714;

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
    msg.setTimeStamp(0.950359370529);
    msg.setSource(38286U);
    msg.setSourceEntity(212U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(105U);
    msg.value = 0.713783155934;

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
    msg.setTimeStamp(0.859700461778);
    msg.setSource(33977U);
    msg.setSourceEntity(233U);
    msg.setDestination(35804U);
    msg.setDestinationEntity(30U);
    msg.value = 0.120539270412;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.418159881559);
    msg.setSource(1848U);
    msg.setSourceEntity(57U);
    msg.setDestination(41378U);
    msg.setDestinationEntity(30U);
    msg.value = 0.702627381517;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.285891794398);
    msg.setSource(4191U);
    msg.setSourceEntity(168U);
    msg.setDestination(52512U);
    msg.setDestinationEntity(52U);
    msg.value = 0.824741214281;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.607073549738);
    msg.setSource(16072U);
    msg.setSourceEntity(123U);
    msg.setDestination(24713U);
    msg.setDestinationEntity(77U);
    msg.value = 0.844447074466;
    msg.speed_units = 74U;

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
    msg.setTimeStamp(0.543001300354);
    msg.setSource(25602U);
    msg.setSourceEntity(61U);
    msg.setDestination(11069U);
    msg.setDestinationEntity(161U);
    msg.value = 0.601077931129;
    msg.speed_units = 168U;

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
    msg.setTimeStamp(0.236028322859);
    msg.setSource(16735U);
    msg.setSourceEntity(88U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(100U);
    msg.value = 0.386129831899;
    msg.speed_units = 202U;

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
    msg.setTimeStamp(0.934794529405);
    msg.setSource(49554U);
    msg.setSourceEntity(76U);
    msg.setDestination(58484U);
    msg.setDestinationEntity(156U);
    msg.value = 0.505298747867;

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
    msg.setTimeStamp(0.0686130682602);
    msg.setSource(48759U);
    msg.setSourceEntity(6U);
    msg.setDestination(56806U);
    msg.setDestinationEntity(59U);
    msg.value = 0.300192732442;

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
    msg.setTimeStamp(0.0854650841914);
    msg.setSource(34246U);
    msg.setSourceEntity(119U);
    msg.setDestination(47538U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0608756175007;

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
    msg.setTimeStamp(0.543523282225);
    msg.setSource(12163U);
    msg.setSourceEntity(214U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(175U);
    msg.value = 0.593780010263;

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
    msg.setTimeStamp(0.0728356248746);
    msg.setSource(30723U);
    msg.setSourceEntity(27U);
    msg.setDestination(27983U);
    msg.setDestinationEntity(122U);
    msg.value = 0.553019683602;

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
    msg.setTimeStamp(0.541562795309);
    msg.setSource(60507U);
    msg.setSourceEntity(197U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(191U);
    msg.value = 0.880225515444;

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
    msg.setTimeStamp(0.362210699811);
    msg.setSource(15064U);
    msg.setSourceEntity(94U);
    msg.setDestination(15100U);
    msg.setDestinationEntity(51U);
    msg.value = 0.506854038646;

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
    msg.setTimeStamp(0.112848573382);
    msg.setSource(50502U);
    msg.setSourceEntity(191U);
    msg.setDestination(9772U);
    msg.setDestinationEntity(232U);
    msg.value = 0.563753214786;

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
    msg.setTimeStamp(0.294933566648);
    msg.setSource(30524U);
    msg.setSourceEntity(67U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(139U);
    msg.value = 0.234671154885;

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
    msg.setTimeStamp(0.802003976117);
    msg.setSource(61154U);
    msg.setSourceEntity(16U);
    msg.setDestination(32925U);
    msg.setDestinationEntity(249U);
    msg.start_lat = 0.122369567589;
    msg.start_lon = 0.157509441334;
    msg.start_z = 0.927721255829;
    msg.start_z_units = 223U;
    msg.end_lat = 0.324145495545;
    msg.end_lon = 0.975660279606;
    msg.end_z = 0.709177402131;
    msg.end_z_units = 238U;
    msg.speed = 0.182080312831;
    msg.speed_units = 9U;
    msg.lradius = 0.839510955788;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.805812481326);
    msg.setSource(17550U);
    msg.setSourceEntity(124U);
    msg.setDestination(59872U);
    msg.setDestinationEntity(204U);
    msg.start_lat = 0.571215422804;
    msg.start_lon = 0.240056261498;
    msg.start_z = 0.101013661003;
    msg.start_z_units = 151U;
    msg.end_lat = 0.694628975085;
    msg.end_lon = 0.510426176165;
    msg.end_z = 0.0495151048346;
    msg.end_z_units = 122U;
    msg.speed = 0.886589365308;
    msg.speed_units = 88U;
    msg.lradius = 0.176521936643;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.130587901511);
    msg.setSource(57799U);
    msg.setSourceEntity(215U);
    msg.setDestination(26951U);
    msg.setDestinationEntity(80U);
    msg.start_lat = 0.254094669792;
    msg.start_lon = 0.863740838963;
    msg.start_z = 0.483491320594;
    msg.start_z_units = 246U;
    msg.end_lat = 0.0899756802148;
    msg.end_lon = 0.865493382693;
    msg.end_z = 0.879908127105;
    msg.end_z_units = 221U;
    msg.speed = 0.662983262478;
    msg.speed_units = 13U;
    msg.lradius = 0.165104696056;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.236794686);
    msg.setSource(54802U);
    msg.setSourceEntity(23U);
    msg.setDestination(13168U);
    msg.setDestinationEntity(186U);
    msg.x = 0.998051320639;
    msg.y = 0.410562485958;
    msg.z = 0.289290659947;
    msg.k = 0.205153750311;
    msg.m = 0.141485853282;
    msg.n = 0.000663179466837;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.177472624157);
    msg.setSource(38705U);
    msg.setSourceEntity(171U);
    msg.setDestination(16864U);
    msg.setDestinationEntity(77U);
    msg.x = 0.385850998355;
    msg.y = 0.266470220429;
    msg.z = 0.988713807569;
    msg.k = 0.939542809961;
    msg.m = 0.547696852983;
    msg.n = 0.974407945504;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.91410743076);
    msg.setSource(64815U);
    msg.setSourceEntity(98U);
    msg.setDestination(20443U);
    msg.setDestinationEntity(234U);
    msg.x = 0.225523966511;
    msg.y = 0.423205550003;
    msg.z = 0.457315403999;
    msg.k = 0.323475779478;
    msg.m = 0.304854943869;
    msg.n = 0.258985623555;
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
    msg.setTimeStamp(0.653431585781);
    msg.setSource(63389U);
    msg.setSourceEntity(102U);
    msg.setDestination(56413U);
    msg.setDestinationEntity(165U);
    msg.value = 0.82239487811;

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
    msg.setTimeStamp(0.619519059084);
    msg.setSource(41470U);
    msg.setSourceEntity(56U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(245U);
    msg.value = 0.793290632775;

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
    msg.setTimeStamp(0.534006171483);
    msg.setSource(25858U);
    msg.setSourceEntity(58U);
    msg.setDestination(33120U);
    msg.setDestinationEntity(185U);
    msg.value = 0.760951505908;

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
    msg.setTimeStamp(0.455245976695);
    msg.setSource(29688U);
    msg.setSourceEntity(150U);
    msg.setDestination(1388U);
    msg.setDestinationEntity(94U);
    msg.u = 0.153114056191;
    msg.v = 0.523622023211;
    msg.w = 0.724013823482;
    msg.p = 0.799603496925;
    msg.q = 0.542440386527;
    msg.r = 0.208534426115;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.451038648409);
    msg.setSource(3825U);
    msg.setSourceEntity(174U);
    msg.setDestination(51309U);
    msg.setDestinationEntity(180U);
    msg.u = 0.268570555459;
    msg.v = 0.543657825642;
    msg.w = 0.116455678438;
    msg.p = 0.741981038783;
    msg.q = 0.371625709115;
    msg.r = 0.2275958;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.659740793801);
    msg.setSource(27798U);
    msg.setSourceEntity(97U);
    msg.setDestination(4957U);
    msg.setDestinationEntity(199U);
    msg.u = 0.72007959096;
    msg.v = 0.750833802903;
    msg.w = 0.680367492711;
    msg.p = 0.467816905338;
    msg.q = 0.608615543107;
    msg.r = 0.0155971733745;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.444514312189);
    msg.setSource(53397U);
    msg.setSourceEntity(135U);
    msg.setDestination(25666U);
    msg.setDestinationEntity(167U);
    msg.start_lat = 0.0772777429991;
    msg.start_lon = 0.666447886823;
    msg.start_z = 0.369480515935;
    msg.start_z_units = 99U;
    msg.end_lat = 0.448935033906;
    msg.end_lon = 0.985268817817;
    msg.end_z = 0.667765771047;
    msg.end_z_units = 100U;
    msg.lradius = 0.643890768681;
    msg.flags = 4U;
    msg.x = 0.855408336034;
    msg.y = 0.050000734031;
    msg.z = 0.1581727035;
    msg.vx = 0.858215508873;
    msg.vy = 0.715545884452;
    msg.vz = 0.41341274549;
    msg.course_error = 0.691272547557;
    msg.eta = 14384U;

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
    msg.setTimeStamp(0.423957142432);
    msg.setSource(42574U);
    msg.setSourceEntity(70U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(191U);
    msg.start_lat = 0.373442001093;
    msg.start_lon = 0.868670989668;
    msg.start_z = 0.483164750849;
    msg.start_z_units = 46U;
    msg.end_lat = 0.773377203687;
    msg.end_lon = 0.883190249133;
    msg.end_z = 0.50066752201;
    msg.end_z_units = 193U;
    msg.lradius = 0.897418557492;
    msg.flags = 7U;
    msg.x = 0.229060646112;
    msg.y = 0.39850963446;
    msg.z = 0.535394285788;
    msg.vx = 0.140047412913;
    msg.vy = 0.844172844911;
    msg.vz = 0.570090622679;
    msg.course_error = 0.295439297393;
    msg.eta = 43152U;

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
    msg.setTimeStamp(0.411730244204);
    msg.setSource(65292U);
    msg.setSourceEntity(12U);
    msg.setDestination(7386U);
    msg.setDestinationEntity(242U);
    msg.start_lat = 0.213643546116;
    msg.start_lon = 0.214680797607;
    msg.start_z = 0.115512235846;
    msg.start_z_units = 50U;
    msg.end_lat = 0.0371764976362;
    msg.end_lon = 0.425547885213;
    msg.end_z = 0.17371087151;
    msg.end_z_units = 29U;
    msg.lradius = 0.561959456348;
    msg.flags = 158U;
    msg.x = 0.208701024971;
    msg.y = 0.51295403975;
    msg.z = 0.845258564094;
    msg.vx = 0.0401234718785;
    msg.vy = 0.0285860251342;
    msg.vz = 0.596440529722;
    msg.course_error = 0.26671687148;
    msg.eta = 16452U;

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
    msg.setTimeStamp(0.589018575981);
    msg.setSource(43014U);
    msg.setSourceEntity(170U);
    msg.setDestination(28495U);
    msg.setDestinationEntity(72U);
    msg.k = 0.463711825307;
    msg.m = 0.0750743207627;
    msg.n = 0.484213490621;

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
    msg.setTimeStamp(0.613784006811);
    msg.setSource(5616U);
    msg.setSourceEntity(229U);
    msg.setDestination(33892U);
    msg.setDestinationEntity(226U);
    msg.k = 0.187892002605;
    msg.m = 0.579491181338;
    msg.n = 0.624892324128;

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
    msg.setTimeStamp(0.9441358712);
    msg.setSource(16803U);
    msg.setSourceEntity(190U);
    msg.setDestination(54245U);
    msg.setDestinationEntity(54U);
    msg.k = 0.71875457836;
    msg.m = 0.518222323132;
    msg.n = 0.910787710195;

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
    msg.setTimeStamp(0.411628136977);
    msg.setSource(33523U);
    msg.setSourceEntity(242U);
    msg.setDestination(8694U);
    msg.setDestinationEntity(31U);
    msg.p = 0.489958628525;
    msg.i = 0.954885833819;
    msg.d = 0.657564151595;
    msg.a = 0.893491249741;

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
    msg.setTimeStamp(0.531101697705);
    msg.setSource(53574U);
    msg.setSourceEntity(65U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(75U);
    msg.p = 0.161848978016;
    msg.i = 0.735058562131;
    msg.d = 0.760977558339;
    msg.a = 0.295081296458;

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
    msg.setTimeStamp(0.59060804726);
    msg.setSource(29091U);
    msg.setSourceEntity(70U);
    msg.setDestination(17001U);
    msg.setDestinationEntity(58U);
    msg.p = 0.896926685863;
    msg.i = 0.977526402894;
    msg.d = 0.584497994107;
    msg.a = 0.203812764165;

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
    msg.setTimeStamp(0.982043424505);
    msg.setSource(4489U);
    msg.setSourceEntity(108U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(152U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.143649196107);
    msg.setSource(12223U);
    msg.setSourceEntity(194U);
    msg.setDestination(49734U);
    msg.setDestinationEntity(69U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.184516671957);
    msg.setSource(27256U);
    msg.setSourceEntity(92U);
    msg.setDestination(10002U);
    msg.setDestinationEntity(199U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.536256478465);
    msg.setSource(23392U);
    msg.setSourceEntity(144U);
    msg.setDestination(698U);
    msg.setDestinationEntity(13U);
    msg.timeout = 44433U;
    msg.lat = 0.263501016985;
    msg.lon = 0.594057004906;
    msg.z = 0.535773578512;
    msg.z_units = 166U;
    msg.speed = 0.0806335381119;
    msg.speed_units = 221U;
    msg.roll = 0.0542549132797;
    msg.pitch = 0.677859646821;
    msg.yaw = 0.0798615094509;
    msg.custom.assign("UHNPFVZAHAHQFWLQZEOJNEVT");

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
    msg.setTimeStamp(0.814336592113);
    msg.setSource(6600U);
    msg.setSourceEntity(19U);
    msg.setDestination(44829U);
    msg.setDestinationEntity(225U);
    msg.timeout = 28503U;
    msg.lat = 0.929784810147;
    msg.lon = 0.488614194362;
    msg.z = 0.337073180024;
    msg.z_units = 48U;
    msg.speed = 0.372745297643;
    msg.speed_units = 93U;
    msg.roll = 0.5519134937;
    msg.pitch = 0.616505695682;
    msg.yaw = 0.739398625409;
    msg.custom.assign("UFGQMTLWYEZOODODGMUBQJSNWNYYFUILHYWQTGWUIVVYXFSBZZHQHVMGDXEAMKJPYHFZAPRICCSMHTRICNAWCAUW");

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
    msg.setTimeStamp(0.347847998996);
    msg.setSource(51292U);
    msg.setSourceEntity(70U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(244U);
    msg.timeout = 53135U;
    msg.lat = 0.251383434833;
    msg.lon = 0.0280726730598;
    msg.z = 0.990019708788;
    msg.z_units = 246U;
    msg.speed = 0.808932984566;
    msg.speed_units = 59U;
    msg.roll = 0.177615701038;
    msg.pitch = 0.698041569932;
    msg.yaw = 0.515317652125;
    msg.custom.assign("EPEASAAILCODTVKJKKUBGBUTOHGCSSOUHNPNZCNWNSPLXGAOWYRFJYBVEEJEWHLPCMSJQIITFZXLTRNHUJZCEVDMGPELWXTGBRQKSQQRYVJYUKIXWWQVWRDZQWWZZFYBOACMKCDEIBRBAFVGMXUCYASRSDPPQOHLGNXOVXRDZQKDQMZPIPEYDGANYFJIYCUFKUDGXVPXMHTCBFRNXJOLTFIHIMVMASFTYMNHFZLVATRNUQHWOKTELJGBKH");

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
    msg.setTimeStamp(0.283359265853);
    msg.setSource(809U);
    msg.setSourceEntity(189U);
    msg.setDestination(11207U);
    msg.setDestinationEntity(128U);
    msg.timeout = 11411U;
    msg.lat = 0.250521582281;
    msg.lon = 0.0174046725828;
    msg.z = 0.0893970995987;
    msg.z_units = 232U;
    msg.speed = 0.428784790255;
    msg.speed_units = 203U;
    msg.duration = 3397U;
    msg.radius = 0.0793261460208;
    msg.flags = 215U;
    msg.custom.assign("SFJQOPUYPAPOTQYOHPEHOREXZYDZHESGYFPEUIBXGDWVYTRTFCFULTQNVVKEGOIIBLWDTUCUSFSPVJHYSZTZISBAIBALICKVXIXLNVWDEMUZNBNWRSWALOCK");

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
    msg.setTimeStamp(0.304303166859);
    msg.setSource(61873U);
    msg.setSourceEntity(208U);
    msg.setDestination(57281U);
    msg.setDestinationEntity(200U);
    msg.timeout = 33787U;
    msg.lat = 0.657473243217;
    msg.lon = 0.734874643491;
    msg.z = 0.148219485633;
    msg.z_units = 238U;
    msg.speed = 0.0241906441434;
    msg.speed_units = 106U;
    msg.duration = 6453U;
    msg.radius = 0.729633550315;
    msg.flags = 148U;
    msg.custom.assign("OLBDNZALKEXPRUBJTDOSILSLKIBNTDJETNWJARYPHWTIYZPVXIROQTCQPBSSDVJFGHBGUHIPGWEKUIOZNBMANGQREENRRCFKKEBJIHDSNVAXIMHTZMTOSFYA");

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
    msg.setTimeStamp(0.635563498101);
    msg.setSource(30237U);
    msg.setSourceEntity(230U);
    msg.setDestination(42650U);
    msg.setDestinationEntity(143U);
    msg.timeout = 62406U;
    msg.lat = 0.786680915101;
    msg.lon = 0.528982632886;
    msg.z = 0.776714169941;
    msg.z_units = 224U;
    msg.speed = 0.767850936464;
    msg.speed_units = 67U;
    msg.duration = 37650U;
    msg.radius = 0.950867713097;
    msg.flags = 10U;
    msg.custom.assign("PHCEKIFMARGQRYWJGVICCBHUGDSSEAASLTPHFJAMLBEISRHNNIGEATZVCDKZHYWFBKEQNFXZQDYWYLPOEUDDLKCMAQMXJZOQKPJWRXODLBUJOSGLNMIMYQLFFRWXUMLQGZRYXZOJZRDYSHXRWUIXKGUQFTHEPPNTJTTUDCNRTCHKRTBBBVKZVKVFMMPBUVQASGPXAEUDYNEOPBXXNNNS");

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
    msg.setTimeStamp(0.132393755108);
    msg.setSource(42410U);
    msg.setSourceEntity(13U);
    msg.setDestination(25890U);
    msg.setDestinationEntity(85U);
    msg.custom.assign("BQRFRJOQJBENANVHZEMEDWCKWCSMGLNHUCSCCOVFHXJYRTKWRJEFSHPIFYQHKGCXWXIQYPKURIQJAPOFFOMVPDMWPAWDYDLLYPLTDIBUHYDONJBEKCIOMNYUBLLXEISRKTVUZFRXRGZTBUHZNNNSNZPJGOBDUYUKVKBMFZTAGCZJQFROAEXQALVADWTGWJIP");

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
    msg.setTimeStamp(0.0210543646162);
    msg.setSource(56223U);
    msg.setSourceEntity(216U);
    msg.setDestination(3754U);
    msg.setDestinationEntity(140U);
    msg.custom.assign("SAMSGIYCZJUYDNGYLBJHHVTRWRLVDTFQBPBMZXWFLXNNNVVITVCSRXAHWCEDMXUJCZDFIZQLPOBGMYXNBPJHMZUGJKQYKKGESCRQRUUAOJCRDHALFQDGFBVSUBSNPCSM");

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
    msg.setTimeStamp(0.232916247024);
    msg.setSource(13491U);
    msg.setSourceEntity(141U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(159U);
    msg.custom.assign("XJQEBBIHCNGGOEEAOXLAHHDBSPVTQFSIZXHRGFJXZEFBTKXYEYMPMYPDPULJNLKVVLUFCIYAMGKOK");

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
    msg.setTimeStamp(0.0257456850516);
    msg.setSource(49028U);
    msg.setSourceEntity(80U);
    msg.setDestination(52149U);
    msg.setDestinationEntity(249U);
    msg.timeout = 33108U;
    msg.lat = 0.523833094598;
    msg.lon = 0.361397221714;
    msg.z = 0.393500537224;
    msg.z_units = 112U;
    msg.duration = 23575U;
    msg.speed = 0.15176865779;
    msg.speed_units = 70U;
    msg.type = 89U;
    msg.radius = 0.8156049009;
    msg.length = 0.40351321506;
    msg.bearing = 0.878781963142;
    msg.direction = 241U;
    msg.custom.assign("QZLJBJTAIACYOCGNQOZYDNNGDSPXCZWBIVBNDTOINELMFVGSMLTMEWIZUYEVAKKCCMITTPLVUROPYGOMPYRN");

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
    msg.setTimeStamp(0.0564591064732);
    msg.setSource(55718U);
    msg.setSourceEntity(185U);
    msg.setDestination(58971U);
    msg.setDestinationEntity(137U);
    msg.timeout = 45080U;
    msg.lat = 0.972130378889;
    msg.lon = 0.531772523551;
    msg.z = 0.601113555182;
    msg.z_units = 88U;
    msg.duration = 40869U;
    msg.speed = 0.474745886877;
    msg.speed_units = 200U;
    msg.type = 200U;
    msg.radius = 0.683412260351;
    msg.length = 0.806192235051;
    msg.bearing = 0.581241827018;
    msg.direction = 126U;
    msg.custom.assign("GODKBZZKCGOHYPIQJOYDYUWSCIPKLKOLCSROTQFULDFUDNFWTZDHAFZNUJUQVOFRDMSVKFEMPRTVBDCNVQMZOSVYLSNIIMWLTPJEZPZNHRVGBROZMYEVXURXEJHXXLFMXTYRNQQJAUKITCBXHRYBEWQPENPARGFUWLXCTCUJWQZKLJGCISKBHDHZDVJBFTLVXTYNASPIAJJIXBPHUOSEGEASQMBARM");

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
    msg.setTimeStamp(0.182061963824);
    msg.setSource(29848U);
    msg.setSourceEntity(204U);
    msg.setDestination(54612U);
    msg.setDestinationEntity(196U);
    msg.timeout = 49102U;
    msg.lat = 0.86995210731;
    msg.lon = 0.107262130771;
    msg.z = 0.358060231286;
    msg.z_units = 193U;
    msg.duration = 64055U;
    msg.speed = 0.896854960879;
    msg.speed_units = 243U;
    msg.type = 251U;
    msg.radius = 0.839834703813;
    msg.length = 0.134067159759;
    msg.bearing = 0.984267497981;
    msg.direction = 11U;
    msg.custom.assign("RCIPTBDUWGSFZHJUVXVBWISJUGVYPJNZJZRKPPYHSDCALNKUATMXUFEURQSKKSCYWKADJMTBQAICPHRMMHQPWQLSXYWCUWMLZNYXEVOXHFJGIDHDOGHOEWHLMJOONPCJMWNFXNTAZB");

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
    msg.setTimeStamp(0.447145687209);
    msg.setSource(44857U);
    msg.setSourceEntity(215U);
    msg.setDestination(35380U);
    msg.setDestinationEntity(176U);
    msg.duration = 22126U;
    msg.custom.assign("KFWQARIQYLEDVSROWKURZURASPYZBKBULCUGOOKSNMSDMKEYEHYPIDOBCZJSHBVXXFUFHYUXMTVBMPPVUTPLOHENQQIYLZTLNGGJBFACHRVNFSPHFETJFWDYNKIWDAGLXGVWCSQQEIWFMRJRURMYJIXMDMDIKTYKZTHZNDAXAUECXCAFOXZBGNPMTQVWEJLLXHOVQINFPBJXBTPOCVMSLRTWJLZDBOKCUYRIWSGKQJIGONHVAAPS");

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
    msg.setTimeStamp(0.537200615808);
    msg.setSource(30086U);
    msg.setSourceEntity(54U);
    msg.setDestination(40157U);
    msg.setDestinationEntity(251U);
    msg.duration = 59774U;
    msg.custom.assign("CIDGSIWVVJVXEJXJSNVOZRRTXBHUXFIOHTTXMUGGDLAJDPSMCAZQQC");

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
    msg.setTimeStamp(0.0115018915116);
    msg.setSource(47639U);
    msg.setSourceEntity(133U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(43U);
    msg.duration = 8759U;
    msg.custom.assign("BNPVTCPROKXFEDVOARDEROMCRNQCLSJRDRZSZHIQZLVLKEKSYXBLBJFOUXSMOKSSXXRLXHWCEPZQGAJKPGZDIRJGZMAPVFPKITCUVSVNFTJDYEIAOKNBVUDTMDANIWWBMYCUZBFMLHUBAMUDDDMYFAPVHXLZYKJITGXYGQZJYSYNHWTMTBWWCEWWOGIAQXTILJENQIPKFU");

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
    msg.setTimeStamp(0.501077310974);
    msg.setSource(57505U);
    msg.setSourceEntity(158U);
    msg.setDestination(49349U);
    msg.setDestinationEntity(182U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.918011881534;
    msg.control.set(tmp_msg_0);
    msg.duration = 3314U;
    msg.custom.assign("CPHQCIKMZBMVLLBTGZNBBNZDNQSUOKTWXKIQIZEIBPPAKVVVCMPXXZHUERZSXSNGJCFAWDWBLGSWKFPUCJKRKAYVUOPEHEJWJDJXADRBHBJGSIYEFIHXXRALOOGACHPIQDODFDGEIUXSAZVDFTEKQFTLIVJINQHUESLZMOGYWSUBMWMLZNAPYEYKTUMWZJLYLFCUNRMAFSOVTOQMRFGYHGJTPHMXOVQRNWVRHPRTLRCUBJTDSEWAYCOGFQ");

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
    msg.setTimeStamp(0.785018989608);
    msg.setSource(1002U);
    msg.setSourceEntity(225U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(245U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.688690150842;
    tmp_msg_0.speed_units = 77U;
    msg.control.set(tmp_msg_0);
    msg.duration = 63808U;
    msg.custom.assign("QHIKYBCWELAVLWZXBGZFBIWXRTARFLCQCQEZVPULJKOABICCUMTEJBAUORNNWZPNXOVIYWKYZSDHMGNQKNRCSYUGMKDVODCHUFOCPPCRDCDLQPTGHFXQGEAODJIZIPERXPLKUYVLLZTYQJMHASNKMMVDHNFARMOUOAZPOJBGJVHTGDRBJTLYVBF");

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
    msg.setTimeStamp(0.413127118326);
    msg.setSource(8398U);
    msg.setSourceEntity(178U);
    msg.setDestination(4079U);
    msg.setDestinationEntity(51U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.324118351444;
    tmp_msg_0.start_lon = 0.897441773025;
    tmp_msg_0.start_z = 0.989031513126;
    tmp_msg_0.start_z_units = 23U;
    tmp_msg_0.end_lat = 0.0353148598563;
    tmp_msg_0.end_lon = 0.0377971073716;
    tmp_msg_0.end_z = 0.690719494387;
    tmp_msg_0.end_z_units = 146U;
    tmp_msg_0.speed = 0.419233916237;
    tmp_msg_0.speed_units = 50U;
    tmp_msg_0.lradius = 0.907987625806;
    tmp_msg_0.flags = 43U;
    msg.control.set(tmp_msg_0);
    msg.duration = 2091U;
    msg.custom.assign("XHVRHNLNHU");

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
    msg.setTimeStamp(0.856305734658);
    msg.setSource(1754U);
    msg.setSourceEntity(0U);
    msg.setDestination(30228U);
    msg.setDestinationEntity(113U);
    msg.timeout = 46068U;
    msg.lat = 0.384185032654;
    msg.lon = 0.561812999421;
    msg.z = 0.135579000542;
    msg.z_units = 187U;
    msg.speed = 0.160515165385;
    msg.speed_units = 109U;
    msg.bearing = 0.375412781691;
    msg.cross_angle = 0.778711173596;
    msg.width = 0.125736778476;
    msg.length = 0.0854543626963;
    msg.hstep = 0.246451180084;
    msg.coff = 88U;
    msg.alternation = 115U;
    msg.flags = 68U;
    msg.custom.assign("BHYUUCEYLWPOXFRQGAEALYXTPRVDFQJERQFVOFOZBIRXRIDYLNJGISWSPTCHPWAOXZZZOTEMZJLFNCDTAFKIGCMBDYAWIDTMEHHIQGALMKBUUQCYTPXCPEEHTVBUVPAAFRGDKJHMPWLPQJULUXWQBFKUYKVBPMJAMVTDARTEMBOMI");

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
    msg.setTimeStamp(0.778434253985);
    msg.setSource(8478U);
    msg.setSourceEntity(209U);
    msg.setDestination(18228U);
    msg.setDestinationEntity(57U);
    msg.timeout = 37492U;
    msg.lat = 0.77212386103;
    msg.lon = 0.839030040682;
    msg.z = 0.252859262383;
    msg.z_units = 229U;
    msg.speed = 0.0301960506194;
    msg.speed_units = 119U;
    msg.bearing = 0.892901351762;
    msg.cross_angle = 0.925107922424;
    msg.width = 0.341835849553;
    msg.length = 0.486976283879;
    msg.hstep = 0.405944007784;
    msg.coff = 90U;
    msg.alternation = 21U;
    msg.flags = 130U;
    msg.custom.assign("OTUKMMUPSNPOCXCIQOPQYURGZFIXXXSQRLZQVBHYFTBLLQWOIDCLWINBYTTGSBUYNDEEBEHUXMIKLEEAXAQXCBLSACVGHMLUIZFZFGNVLDRICRAYOHYPYNSCNKCHFEZHQTDLWNHJHTEKZTAJVCJWEGDURFM");

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
    msg.setTimeStamp(0.421346705513);
    msg.setSource(1316U);
    msg.setSourceEntity(158U);
    msg.setDestination(26809U);
    msg.setDestinationEntity(85U);
    msg.timeout = 6443U;
    msg.lat = 0.26910736375;
    msg.lon = 0.741100023349;
    msg.z = 0.154915771875;
    msg.z_units = 14U;
    msg.speed = 0.85632322825;
    msg.speed_units = 233U;
    msg.bearing = 0.0691844924853;
    msg.cross_angle = 0.432964452711;
    msg.width = 0.274287356487;
    msg.length = 0.0456881432694;
    msg.hstep = 0.393798466869;
    msg.coff = 42U;
    msg.alternation = 95U;
    msg.flags = 100U;
    msg.custom.assign("VXUFBLEIJKTTQJOIXFKLBQMXSLUZDVSDNRQHEOZKGTQGMKBVEUNYGVZILARWYAWUCHTZRYFZXABOZNOHULQKFTIOMCGCSSTYFACKHLWWYLSBNDRXIJTHQWKUIYXODOJRSJNOIYJMKMVDKJALVLGQWCSHVGZEEPIUEPBBBVPLMNPAEWHDWASZTYCMCIZSDMDAZUHJEPDKCTBFJGNBEFSTRQRAPJFWYGQMQRXRPXRPHMWDHUFVUIFYNGGVNENX");

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
    msg.setTimeStamp(0.778531530919);
    msg.setSource(56986U);
    msg.setSourceEntity(181U);
    msg.setDestination(25519U);
    msg.setDestinationEntity(242U);
    msg.timeout = 6272U;
    msg.lat = 0.601891478969;
    msg.lon = 0.179950225424;
    msg.z = 0.726046434615;
    msg.z_units = 185U;
    msg.speed = 0.243252905327;
    msg.speed_units = 48U;
    msg.custom.assign("DJLXLJVGREMETONGFGZCHBILQWZQPDWKENTBSZVTGIWWPVJDABVGGNQATWUNVVFCDZUECSOOHVIHTSKZRNUNKCAXKOMINYEYFXPARHRFUQGRTGOMOLOJYMWIROCHJHQAIPNKZBRPYBBWKHDRXSALXKVUPGXEQXJFBLFCFNMEYTSTYY");

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
    msg.setTimeStamp(0.247987892211);
    msg.setSource(8188U);
    msg.setSourceEntity(152U);
    msg.setDestination(27011U);
    msg.setDestinationEntity(122U);
    msg.timeout = 52825U;
    msg.lat = 0.82742262273;
    msg.lon = 0.188066003932;
    msg.z = 0.793176667841;
    msg.z_units = 79U;
    msg.speed = 0.129524167924;
    msg.speed_units = 243U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.484447066775;
    tmp_msg_0.y = 0.476515806888;
    tmp_msg_0.z = 0.890975507834;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UOLPHXNAJKDNXEFQUHYDVURGAWAQUOSJVLTPEZDYFAHUOIIJYIKAZJKSMBNPGNYVOSOLUVKODC");

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
    msg.setTimeStamp(0.165440526852);
    msg.setSource(26333U);
    msg.setSourceEntity(48U);
    msg.setDestination(15117U);
    msg.setDestinationEntity(210U);
    msg.timeout = 2751U;
    msg.lat = 0.186018301394;
    msg.lon = 0.499524662813;
    msg.z = 0.48538920516;
    msg.z_units = 66U;
    msg.speed = 0.664257297234;
    msg.speed_units = 208U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.54758220435;
    tmp_msg_0.y = 0.239799084334;
    tmp_msg_0.z = 0.318691283512;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JZWSHAMMPESRYSJVJGNWQKBIHBIEFRFYGDANHPNUCLUXSGQCVZUCNTABUUDEWSPQAOLGXOIQK");

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
    msg.setTimeStamp(0.944658161371);
    msg.setSource(34529U);
    msg.setSourceEntity(172U);
    msg.setDestination(34968U);
    msg.setDestinationEntity(221U);
    msg.x = 0.380120250155;
    msg.y = 0.996599258995;
    msg.z = 0.0342878699186;

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
    msg.setTimeStamp(0.384976566809);
    msg.setSource(29527U);
    msg.setSourceEntity(230U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(51U);
    msg.x = 0.265872025461;
    msg.y = 0.992362527905;
    msg.z = 0.382360099463;

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
    msg.setTimeStamp(0.131628143546);
    msg.setSource(58389U);
    msg.setSourceEntity(69U);
    msg.setDestination(44036U);
    msg.setDestinationEntity(123U);
    msg.x = 0.560378621516;
    msg.y = 0.058775567951;
    msg.z = 0.156474897833;

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
    msg.setTimeStamp(0.444960793354);
    msg.setSource(22140U);
    msg.setSourceEntity(22U);
    msg.setDestination(6292U);
    msg.setDestinationEntity(65U);
    msg.timeout = 4159U;
    msg.lat = 0.939722692148;
    msg.lon = 0.736725509124;
    msg.z = 0.342720598786;
    msg.z_units = 26U;
    msg.amplitude = 0.406366308897;
    msg.pitch = 0.987017678764;
    msg.speed = 0.936024177962;
    msg.speed_units = 234U;
    msg.custom.assign("DZDPHCGMKYHLASLZQYWQXGRHWJQXTITKJFUCFUXFZWS");

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
    msg.setTimeStamp(0.406407392228);
    msg.setSource(16677U);
    msg.setSourceEntity(223U);
    msg.setDestination(58263U);
    msg.setDestinationEntity(219U);
    msg.timeout = 14740U;
    msg.lat = 0.883753444399;
    msg.lon = 0.173198095858;
    msg.z = 0.345680814682;
    msg.z_units = 14U;
    msg.amplitude = 0.586588814837;
    msg.pitch = 0.585784634687;
    msg.speed = 0.401249184262;
    msg.speed_units = 251U;
    msg.custom.assign("RGORTQTMSUNNPUWPCRTUHMJJGNQVNLXBYZKKHBUWWBAPHNVOWMBPFHZNIBGXSCYIZOIMPFCWEZTJKOKKDOGPKCMHKJJFFGDMGSSIEJXPTXGSXGZROGPRIYZFMDCNUEOLXZISF");

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
    msg.setTimeStamp(0.254440845251);
    msg.setSource(49799U);
    msg.setSourceEntity(205U);
    msg.setDestination(52179U);
    msg.setDestinationEntity(104U);
    msg.timeout = 21349U;
    msg.lat = 0.152717182803;
    msg.lon = 0.049642186186;
    msg.z = 0.395834481796;
    msg.z_units = 116U;
    msg.amplitude = 0.506073563312;
    msg.pitch = 0.346475922304;
    msg.speed = 0.228261534429;
    msg.speed_units = 207U;
    msg.custom.assign("NGSRRHDFJWLJOXXEIIHASUSTJBMNAJYTMISXNIPCGYZQCGICCUBPKGLLDNUTOKUWPPFNVPYGRRDRXCETVWYHOGWUGZFS");

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
    msg.setTimeStamp(0.727081760407);
    msg.setSource(6289U);
    msg.setSourceEntity(46U);
    msg.setDestination(14427U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.549423928393);
    msg.setSource(48110U);
    msg.setSourceEntity(86U);
    msg.setDestination(56574U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.69522583316);
    msg.setSource(9221U);
    msg.setSourceEntity(67U);
    msg.setDestination(22395U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.299960022238);
    msg.setSource(58226U);
    msg.setSourceEntity(161U);
    msg.setDestination(1274U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.28699262865;
    msg.lon = 0.807424017693;
    msg.z = 0.989018204215;
    msg.z_units = 66U;
    msg.radius = 0.433848631617;
    msg.duration = 18814U;
    msg.speed = 0.751051298083;
    msg.speed_units = 223U;
    msg.custom.assign("WTYRJCCVDQHIKVFQUZYGDSVATJLUDORXCDWOEEVTTMBKHGUFHOAEWFWAYSISLBDQWRN");

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
    msg.setTimeStamp(0.339737009414);
    msg.setSource(48989U);
    msg.setSourceEntity(166U);
    msg.setDestination(22359U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.151217179117;
    msg.lon = 0.720722763704;
    msg.z = 0.67329786282;
    msg.z_units = 50U;
    msg.radius = 0.495521380982;
    msg.duration = 33968U;
    msg.speed = 0.860758946439;
    msg.speed_units = 130U;
    msg.custom.assign("FNBIMUHTMTKEIDLVNYLQLZGZUBOOFOHMRBSEHSYGICLFBKQNRFKJYCXCDTYSXAXWDLIAEC");

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
    msg.setTimeStamp(0.999185452745);
    msg.setSource(20525U);
    msg.setSourceEntity(171U);
    msg.setDestination(5393U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.804289832519;
    msg.lon = 0.934633174159;
    msg.z = 0.0901031582555;
    msg.z_units = 44U;
    msg.radius = 0.0956025868424;
    msg.duration = 13410U;
    msg.speed = 0.205792500444;
    msg.speed_units = 50U;
    msg.custom.assign("NGONNETKSWLZQUWFMDVYARESWKTJPFIDIOGBMLIGFDMBUJLYXITENRKZBVRURYUKCHCWZEXVCTCCATSCXDMBCDSJNHXGWXNDRALUYJAFFVEZOHOO");

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
    msg.setTimeStamp(0.766726081903);
    msg.setSource(3694U);
    msg.setSourceEntity(186U);
    msg.setDestination(35167U);
    msg.setDestinationEntity(198U);
    msg.timeout = 12477U;
    msg.flags = 145U;
    msg.lat = 0.564079131084;
    msg.lon = 0.386731947642;
    msg.start_z = 0.175187079358;
    msg.start_z_units = 130U;
    msg.end_z = 0.64819641295;
    msg.end_z_units = 17U;
    msg.radius = 0.241976612382;
    msg.speed = 0.0929411756418;
    msg.speed_units = 224U;
    msg.custom.assign("DAJMJEFYKEDOWWUXRYHISBVHURMFMZEFSRYRMLJXCSNIIPQNTGEXDXGXDOUJVUGSJEJETKIHAAFBFPYBNGBWEUWTPGWILODZQVNNYHSSPCUUVLCCQTKMQNBUOSYHVRHGBLMIKWPYLLROXENPYIOWARETCKNOQZ");

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
    msg.setTimeStamp(0.0852104205872);
    msg.setSource(59385U);
    msg.setSourceEntity(198U);
    msg.setDestination(9573U);
    msg.setDestinationEntity(93U);
    msg.timeout = 24460U;
    msg.flags = 15U;
    msg.lat = 0.437442772282;
    msg.lon = 0.336741090594;
    msg.start_z = 0.987857902996;
    msg.start_z_units = 112U;
    msg.end_z = 0.0337197672469;
    msg.end_z_units = 201U;
    msg.radius = 0.102315027111;
    msg.speed = 0.640907196017;
    msg.speed_units = 16U;
    msg.custom.assign("CVDTGEWHETJYIXXSTHHCVVORUXDVCPQAPAYXPNFRBUXZTLGDFMRGQGTEIGZOQCPKMYSOUXIZOXHWKMKKBWQUNIDNGVJCYFPYHRZVVQORRSDMDMNCULQYUZPZSMFYBFEDUEYJIYOJRTDQAUNEJBFSXECHHGQ");

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
    msg.setTimeStamp(0.43374377252);
    msg.setSource(63746U);
    msg.setSourceEntity(175U);
    msg.setDestination(48413U);
    msg.setDestinationEntity(72U);
    msg.timeout = 20091U;
    msg.flags = 13U;
    msg.lat = 0.431120436617;
    msg.lon = 0.531091839316;
    msg.start_z = 0.771641244978;
    msg.start_z_units = 230U;
    msg.end_z = 0.0288078084444;
    msg.end_z_units = 45U;
    msg.radius = 0.722384203923;
    msg.speed = 0.67707140473;
    msg.speed_units = 197U;
    msg.custom.assign("ELHXQHDNTWEMUIJERYTQJIXMULITED");

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
    msg.setTimeStamp(0.435787043891);
    msg.setSource(2571U);
    msg.setSourceEntity(152U);
    msg.setDestination(50569U);
    msg.setDestinationEntity(27U);
    msg.timeout = 26321U;
    msg.lat = 0.117389696034;
    msg.lon = 0.65059096717;
    msg.z = 0.872210893262;
    msg.z_units = 213U;
    msg.speed = 0.0739851429366;
    msg.speed_units = 254U;
    msg.custom.assign("YIYSYPCMMSVZFNUMIHHXNZEZQUFWSOBCRHEWUHDGFQFAODZSXIKIEKCQJSJZGAXBWTTJSDBBWTDJZYLAOMAWGPDAIYKQKFVF");

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
    msg.setTimeStamp(0.941883960878);
    msg.setSource(41080U);
    msg.setSourceEntity(142U);
    msg.setDestination(36901U);
    msg.setDestinationEntity(177U);
    msg.timeout = 24856U;
    msg.lat = 0.77701611682;
    msg.lon = 0.951103496925;
    msg.z = 0.0703756408882;
    msg.z_units = 125U;
    msg.speed = 0.580876587093;
    msg.speed_units = 227U;
    msg.custom.assign("QPWSOTTILGXCIVNHYHNLNDVCITMSOQZUJOT");

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
    msg.setTimeStamp(0.0136856619108);
    msg.setSource(43654U);
    msg.setSourceEntity(7U);
    msg.setDestination(28082U);
    msg.setDestinationEntity(32U);
    msg.timeout = 42815U;
    msg.lat = 0.453151905632;
    msg.lon = 0.437870370415;
    msg.z = 0.607197881611;
    msg.z_units = 201U;
    msg.speed = 0.561036997143;
    msg.speed_units = 151U;
    msg.custom.assign("OBARDWQXKHVIYFNIGTWDZIEPBMHVM");

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
    msg.setTimeStamp(0.706122199407);
    msg.setSource(42291U);
    msg.setSourceEntity(116U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(103U);
    msg.x = 0.541573865035;
    msg.y = 0.54153891901;
    msg.z = 0.0298651537157;
    msg.t = 0.565064722285;

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
    msg.setTimeStamp(0.812698306782);
    msg.setSource(50584U);
    msg.setSourceEntity(70U);
    msg.setDestination(11070U);
    msg.setDestinationEntity(90U);
    msg.x = 0.872284805852;
    msg.y = 0.252323960273;
    msg.z = 0.056733022545;
    msg.t = 0.606411930588;

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
    msg.setTimeStamp(0.875467951978);
    msg.setSource(38333U);
    msg.setSourceEntity(151U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(214U);
    msg.x = 0.529332562332;
    msg.y = 0.295716019491;
    msg.z = 0.859785492962;
    msg.t = 0.733104580851;

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
    msg.setTimeStamp(0.146092457805);
    msg.setSource(5452U);
    msg.setSourceEntity(122U);
    msg.setDestination(35271U);
    msg.setDestinationEntity(214U);
    msg.timeout = 42812U;
    msg.name.assign("WQJXQYMZHUTXFVKYHGQCUGWSJBIRSTXQTPBJPCDYSRCRXRWXKDAQAZEGRAGSVLNEOHQGNMIXKTEVEPCEOOJWJXEFTMLWKSJHYYZPFLFHEDOOMIVODYISSQPNXNWSBQLZLCUQBAMAREYTZZRGFHMRUJPLTNUAFLVJNCWSJEZVDGCADKHPTBXBKPBODQVSHUWKMTIIKYAVZRA");
    msg.custom.assign("OMUPLVGCDPBUWVBEJUEQZIHYMRPHLSHGYQQMFJGBVCLXEKBFMPEZGYTMWWOXFBRDAIVJRRBQL");

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
    msg.setTimeStamp(0.348595131989);
    msg.setSource(1415U);
    msg.setSourceEntity(208U);
    msg.setDestination(40667U);
    msg.setDestinationEntity(33U);
    msg.timeout = 16316U;
    msg.name.assign("NVNHMUWPCRJTEWYPWMKVKVHABUFZIZKQRVJDRIOCSVGJQKPLKTCDPYCSUTMHLTNMUTLIQBUAFIHOSJYUNNXCPEPARZSKWIMNGNXJLJDFMGZYWDHZIEKGTUSUWHBEPXLZSMPFZHTCCOLIDJBSPEOFTODVFABEOPTKQZFAWERE");
    msg.custom.assign("UHCAIFVZNGDYGTLQAQTSAGOMEKKGLAXMZJOYKHOMBVFTVCWQKJOSXNDNEDANPPDXETMFZPRUGERMNOIVVSRATOBJKQFOZDIKTLFGJFDGPQGRTPBIXYLSZQBHUWXUJWBGPDNRUNCSPWLAZBMJKNJSJ");

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
    msg.setTimeStamp(0.404879900956);
    msg.setSource(12690U);
    msg.setSourceEntity(57U);
    msg.setDestination(58626U);
    msg.setDestinationEntity(49U);
    msg.timeout = 1359U;
    msg.name.assign("ZLHTBQHTRMNDEDSLEGYBDWEOIUZH");
    msg.custom.assign("HDMCCTOMSCKPZLFDKHBHXEW");

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
    msg.setTimeStamp(0.170222883938);
    msg.setSource(14700U);
    msg.setSourceEntity(38U);
    msg.setDestination(7185U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.151043008337;
    msg.lon = 0.972260920125;
    msg.z = 0.526018384197;
    msg.z_units = 60U;
    msg.speed = 0.751664117579;
    msg.speed_units = 187U;
    msg.start_time = 0.431608309414;
    msg.custom.assign("GVRIUZBMFDQQAHZNBGVJYGJWEQIDUZJMOLHCBJYVFPRTLINBSHIIFTZPXAOEARPWQBUYKQRLNUUQLHTVLXNFYRESKYIXXARMUBOUSJMYFZTKXCNKMVJTFWH");

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
    msg.setTimeStamp(0.733203241059);
    msg.setSource(1686U);
    msg.setSourceEntity(10U);
    msg.setDestination(35144U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.880362862657;
    msg.lon = 0.791642823103;
    msg.z = 0.22808831125;
    msg.z_units = 96U;
    msg.speed = 0.122061604962;
    msg.speed_units = 5U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.626280267353;
    tmp_msg_0.y = 0.666437855814;
    tmp_msg_0.z = 0.493799127512;
    tmp_msg_0.t = 0.940865937009;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.160977034296;
    msg.custom.assign("SSUCTDRJEWOWBSPNGBVAXIGHYBXGHOAZQASCIYZCYBLMGNRMFFXZFQUTMWDDQAACOEYAQJFKEHWOTTG");

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
    msg.setTimeStamp(0.0742230695243);
    msg.setSource(29334U);
    msg.setSourceEntity(3U);
    msg.setDestination(49301U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.0999374825137;
    msg.lon = 0.0484041139787;
    msg.z = 0.492091470943;
    msg.z_units = 8U;
    msg.speed = 0.944620111774;
    msg.speed_units = 147U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.610813772811;
    tmp_msg_0.y = 0.237472352411;
    tmp_msg_0.z = 0.222833957797;
    tmp_msg_0.t = 0.68364493053;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.246967901702;
    msg.custom.assign("YCCXNRPPAXAARJTKTPURWIQHMIMPCKPRDZJATVBSMAXQUPIALUQWTLFDZFMPXSTNVUIIBIYQGSVGHPWJUEUQKUW");

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
    msg.setTimeStamp(0.522855621908);
    msg.setSource(36264U);
    msg.setSourceEntity(218U);
    msg.setDestination(13288U);
    msg.setDestinationEntity(171U);
    msg.vid = 42277U;
    msg.off_x = 0.951355607757;
    msg.off_y = 0.250343055072;
    msg.off_z = 0.49482512575;

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
    msg.setTimeStamp(0.417614053998);
    msg.setSource(47951U);
    msg.setSourceEntity(104U);
    msg.setDestination(50147U);
    msg.setDestinationEntity(129U);
    msg.vid = 7482U;
    msg.off_x = 0.339199108056;
    msg.off_y = 0.0221079423394;
    msg.off_z = 0.780550759017;

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
    msg.setTimeStamp(0.732097106345);
    msg.setSource(26201U);
    msg.setSourceEntity(203U);
    msg.setDestination(51584U);
    msg.setDestinationEntity(176U);
    msg.vid = 30066U;
    msg.off_x = 0.193037466281;
    msg.off_y = 0.678452695731;
    msg.off_z = 0.420869622022;

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
    msg.setTimeStamp(0.20531593116);
    msg.setSource(17418U);
    msg.setSourceEntity(248U);
    msg.setDestination(28403U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.112315704164);
    msg.setSource(52679U);
    msg.setSourceEntity(226U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.594380847927);
    msg.setSource(22564U);
    msg.setSourceEntity(216U);
    msg.setDestination(17952U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.409759226199);
    msg.setSource(13457U);
    msg.setSourceEntity(208U);
    msg.setDestination(26502U);
    msg.setDestinationEntity(210U);
    msg.mid = 55102U;

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
    msg.setTimeStamp(0.121949342287);
    msg.setSource(16629U);
    msg.setSourceEntity(58U);
    msg.setDestination(34779U);
    msg.setDestinationEntity(189U);
    msg.mid = 48427U;

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
    msg.setTimeStamp(0.898470125885);
    msg.setSource(58823U);
    msg.setSourceEntity(120U);
    msg.setDestination(54638U);
    msg.setDestinationEntity(221U);
    msg.mid = 26271U;

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
    msg.setTimeStamp(0.973274393226);
    msg.setSource(54449U);
    msg.setSourceEntity(53U);
    msg.setDestination(12093U);
    msg.setDestinationEntity(151U);
    msg.state = 177U;
    msg.eta = 16855U;
    msg.info.assign("AMMHYHBRLKPPOFGREZEJTHBWMVPXLMNTDKFBY");

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
    msg.setTimeStamp(0.713170279099);
    msg.setSource(9690U);
    msg.setSourceEntity(236U);
    msg.setDestination(38722U);
    msg.setDestinationEntity(149U);
    msg.state = 56U;
    msg.eta = 35970U;
    msg.info.assign("YUMUKWIBALCITQMQLWNGLWXKFHFXXLGSFKLVCBHMZIQHDTIOWHGGWDZQCHZZIEIMUOXMFGEJMRHWKMJAANRBGACXRPRIYJPAUDRBMEENFOEUOPYXQZNOESUJMBPROVDCSOEZGYWQUKLBKBQCT");

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
    msg.setTimeStamp(0.387711944041);
    msg.setSource(6506U);
    msg.setSourceEntity(215U);
    msg.setDestination(20367U);
    msg.setDestinationEntity(136U);
    msg.state = 205U;
    msg.eta = 43938U;
    msg.info.assign("SPQCYQGHVPKQKXDJEICZVKVNKMGRYEOQOIEGJMAUFGXLFSHOZDSHIAWZOCQHEFJNWZBVSVMLFYGHXSJEMZKDEOSDJXUTUN");

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
    msg.setTimeStamp(0.679874976984);
    msg.setSource(49663U);
    msg.setSourceEntity(243U);
    msg.setDestination(61620U);
    msg.setDestinationEntity(144U);
    msg.system = 48439U;
    msg.duration = 21285U;
    msg.speed = 0.068105953935;
    msg.speed_units = 137U;
    msg.x = 0.507721235012;
    msg.y = 0.206353650525;
    msg.z = 0.570716306874;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.564283454107);
    msg.setSource(37480U);
    msg.setSourceEntity(231U);
    msg.setDestination(59704U);
    msg.setDestinationEntity(243U);
    msg.system = 13001U;
    msg.duration = 11876U;
    msg.speed = 0.776060822029;
    msg.speed_units = 247U;
    msg.x = 0.382765797037;
    msg.y = 0.805565016956;
    msg.z = 0.90981460721;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.579571701157);
    msg.setSource(65201U);
    msg.setSourceEntity(96U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(138U);
    msg.system = 41466U;
    msg.duration = 17318U;
    msg.speed = 0.283765822515;
    msg.speed_units = 75U;
    msg.x = 0.675354229353;
    msg.y = 0.94293530539;
    msg.z = 0.276122147715;
    msg.z_units = 253U;

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
    msg.setTimeStamp(0.394569190231);
    msg.setSource(3599U);
    msg.setSourceEntity(242U);
    msg.setDestination(5340U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.986852819781;
    msg.lon = 0.706929860793;
    msg.speed = 0.92573819155;
    msg.speed_units = 66U;
    msg.duration = 38349U;
    msg.sys_a = 10644U;
    msg.sys_b = 1484U;
    msg.move_threshold = 0.695865571467;

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
    msg.setTimeStamp(0.756095681319);
    msg.setSource(56110U);
    msg.setSourceEntity(128U);
    msg.setDestination(52786U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.833744166771;
    msg.lon = 0.0664212249752;
    msg.speed = 0.682030389367;
    msg.speed_units = 208U;
    msg.duration = 38158U;
    msg.sys_a = 7336U;
    msg.sys_b = 24224U;
    msg.move_threshold = 0.368650495971;

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
    msg.setTimeStamp(0.821562942824);
    msg.setSource(1583U);
    msg.setSourceEntity(6U);
    msg.setDestination(46862U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.0491765088315;
    msg.lon = 0.601975303858;
    msg.speed = 0.607802681458;
    msg.speed_units = 69U;
    msg.duration = 55040U;
    msg.sys_a = 589U;
    msg.sys_b = 28376U;
    msg.move_threshold = 0.942968351569;

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
    msg.setTimeStamp(0.439313518328);
    msg.setSource(471U);
    msg.setSourceEntity(37U);
    msg.setDestination(8814U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.371220290273;
    msg.lon = 0.187676201023;
    msg.z = 0.979595526387;
    msg.z_units = 143U;
    msg.speed = 0.442490258805;
    msg.speed_units = 39U;
    msg.custom.assign("MHDYYPSSJQKOKBTKEOXSTYLOIOOBVVXGFLHYVNXWHSSRIDHIDDAEXGARCYXGRPMPOBEIIRFVQEGHNWXEHBDJRSDWGMLTWNJSUSFMPUQOCK");

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
    msg.setTimeStamp(0.0264701374368);
    msg.setSource(60458U);
    msg.setSourceEntity(145U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.329976087509;
    msg.lon = 0.921360786066;
    msg.z = 0.807296816296;
    msg.z_units = 169U;
    msg.speed = 0.909157961046;
    msg.speed_units = 20U;
    msg.custom.assign("NWQWRQXWFUHTWYDKCCTEPLBXNFRMQBYWPXMGUXFEVGGORAISBORXPPVDJYWFJSWPMPWISIKJBOHCPIRGELYSMCBQFGCLEFSTEAXYZZZVRVTJJHOTODUUUQZFEYHDOKC");

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
    msg.setTimeStamp(0.803046053742);
    msg.setSource(55841U);
    msg.setSourceEntity(87U);
    msg.setDestination(65175U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.737730603347;
    msg.lon = 0.0717871087548;
    msg.z = 0.246758505916;
    msg.z_units = 64U;
    msg.speed = 0.850637130033;
    msg.speed_units = 119U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.229715261604;
    tmp_msg_0.lon = 0.284601208129;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DORBDGUWYPIZUMXYJFMCFKTAIJCCCNWJROGRMJDFCMTMNREEPAZCLEVDEHGGECXSWJHJBAOAYIJQETKSRNYPOKLAJXQAQPMKBXWKACHXLUKFDEAQNRIYGZNRZDBWVS");

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
    msg.setTimeStamp(0.102958495224);
    msg.setSource(15772U);
    msg.setSourceEntity(140U);
    msg.setDestination(64623U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.619216771027;
    msg.lon = 0.932148288013;

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
    msg.setTimeStamp(0.189841957258);
    msg.setSource(31013U);
    msg.setSourceEntity(125U);
    msg.setDestination(60856U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.624150236531;
    msg.lon = 0.755184411787;

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
    msg.setTimeStamp(0.0303236411332);
    msg.setSource(53556U);
    msg.setSourceEntity(181U);
    msg.setDestination(9362U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.709163782125;
    msg.lon = 0.0933665631182;

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
    msg.setTimeStamp(0.437841567883);
    msg.setSource(24585U);
    msg.setSourceEntity(224U);
    msg.setDestination(837U);
    msg.setDestinationEntity(215U);
    msg.timeout = 6216U;
    msg.lat = 0.242504796632;
    msg.lon = 0.228080051867;
    msg.z = 0.961902762819;
    msg.z_units = 157U;
    msg.pitch = 0.479991648734;
    msg.amplitude = 0.749921273905;
    msg.duration = 45119U;
    msg.speed = 0.430639626109;
    msg.speed_units = 133U;
    msg.radius = 0.734286113668;
    msg.direction = 144U;
    msg.custom.assign("VPYNFFEKMNPFMJXIFGGLAJTQTYDLHVNWAWVQGUXUUISDSJGDRMRQKEPCVPNUIAMTCJWLCXHQWWUBFGIDRXPPGMRYQTKQZPYRUEJHTXGNEIYWEBNSZVOZZGJOLOQODFBXNKKWFSKSFAPUWRKXLEPYGOHDXNCYJTMPVFXIELDOLIWCKVDABNYQHMIVVLO");

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
    msg.setTimeStamp(0.87125786126);
    msg.setSource(9166U);
    msg.setSourceEntity(91U);
    msg.setDestination(60066U);
    msg.setDestinationEntity(60U);
    msg.timeout = 53383U;
    msg.lat = 0.527517362348;
    msg.lon = 0.538796473464;
    msg.z = 0.292283327385;
    msg.z_units = 235U;
    msg.pitch = 0.559605795864;
    msg.amplitude = 0.310882650421;
    msg.duration = 2182U;
    msg.speed = 0.208778340139;
    msg.speed_units = 5U;
    msg.radius = 0.947501343109;
    msg.direction = 97U;
    msg.custom.assign("QXPXWLJKTGESCVMWUVEUYYZYMOOBPKODHSTYUMICFOPBIFGIFKDBSYNLXTYVIXNQPMSPNAHWQAXQXSAWGOLMJRLCCIQCSDFGEIQXRNBABJUIVTSDNJRLTHDGGHNOAWBHAVCEJHUOZLKRLVXCTWTSVZZMWNJZZFBJSRIMZKCXUNYJWJONDFUDZDRAEFPRD");

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
    msg.setTimeStamp(0.237088278537);
    msg.setSource(36967U);
    msg.setSourceEntity(151U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(242U);
    msg.timeout = 62377U;
    msg.lat = 0.228136335262;
    msg.lon = 0.550704301158;
    msg.z = 0.21531108951;
    msg.z_units = 21U;
    msg.pitch = 0.549160036407;
    msg.amplitude = 0.336014648833;
    msg.duration = 25716U;
    msg.speed = 0.732013894721;
    msg.speed_units = 135U;
    msg.radius = 0.331522123506;
    msg.direction = 191U;
    msg.custom.assign("BJAQFGXEMCHYVCRNRBXQZGVQRNDSXGGZFQISPYHOFSVVEFWCDDAOMUHBFZAPPKWOWVKOHQGELGTEUPMRGHXYFVYWUAWBNLCRNNFACDDIVAEZHJDMJLMSHKKIIRM");

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
    msg.setTimeStamp(0.24740741844);
    msg.setSource(24106U);
    msg.setSourceEntity(58U);
    msg.setDestination(59390U);
    msg.setDestinationEntity(160U);
    msg.control_src = 30238U;
    msg.control_ent = 245U;
    msg.timeout = 0.694565447044;
    msg.loiter_radius = 0.210643893401;
    msg.altitude_interval = 0.360283282521;

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
    msg.setTimeStamp(0.396353233121);
    msg.setSource(1445U);
    msg.setSourceEntity(82U);
    msg.setDestination(27829U);
    msg.setDestinationEntity(104U);
    msg.control_src = 44927U;
    msg.control_ent = 225U;
    msg.timeout = 0.953245662573;
    msg.loiter_radius = 0.352751808623;
    msg.altitude_interval = 0.0627153707836;

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
    msg.setTimeStamp(0.924330921827);
    msg.setSource(11229U);
    msg.setSourceEntity(198U);
    msg.setDestination(53618U);
    msg.setDestinationEntity(133U);
    msg.control_src = 1646U;
    msg.control_ent = 207U;
    msg.timeout = 0.939419130493;
    msg.loiter_radius = 0.847330379403;
    msg.altitude_interval = 0.66373784672;

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
    msg.setTimeStamp(0.816863102546);
    msg.setSource(1374U);
    msg.setSourceEntity(253U);
    msg.setDestination(63064U);
    msg.setDestinationEntity(222U);
    msg.flags = 158U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.648222942044;
    tmp_msg_0.speed_units = 229U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.36813416843;
    tmp_msg_1.z_units = 110U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.458979895989;
    msg.lon = 0.614385450015;
    msg.radius = 0.201880948683;

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
    msg.setTimeStamp(0.0299348131583);
    msg.setSource(6902U);
    msg.setSourceEntity(57U);
    msg.setDestination(50592U);
    msg.setDestinationEntity(159U);
    msg.flags = 215U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.258056570631;
    tmp_msg_0.speed_units = 170U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.870225572476;
    tmp_msg_1.z_units = 123U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.263439954471;
    msg.lon = 0.478415990367;
    msg.radius = 0.183454688506;

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
    msg.setTimeStamp(0.739613741204);
    msg.setSource(64705U);
    msg.setSourceEntity(145U);
    msg.setDestination(65185U);
    msg.setDestinationEntity(77U);
    msg.flags = 146U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.675076697222;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.846269065499;
    tmp_msg_1.z_units = 90U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.505512010855;
    msg.lon = 0.925664010772;
    msg.radius = 0.854536057304;

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
    msg.setTimeStamp(0.12093284435);
    msg.setSource(29815U);
    msg.setSourceEntity(27U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(224U);
    msg.control_src = 47851U;
    msg.control_ent = 239U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 249U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.595136335777;
    tmp_tmp_msg_0_0.speed_units = 121U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.243216438082;
    tmp_tmp_msg_0_1.z_units = 15U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.971092459914;
    tmp_msg_0.lon = 0.0480904570824;
    tmp_msg_0.radius = 0.709547693204;
    msg.reference.set(tmp_msg_0);
    msg.state = 46U;
    msg.proximity = 245U;

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
    msg.setTimeStamp(0.866681859758);
    msg.setSource(28550U);
    msg.setSourceEntity(106U);
    msg.setDestination(60391U);
    msg.setDestinationEntity(230U);
    msg.control_src = 41531U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 88U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.984483401265;
    tmp_tmp_msg_0_0.speed_units = 237U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.345934146433;
    tmp_tmp_msg_0_1.z_units = 226U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.262721513727;
    tmp_msg_0.lon = 0.105144218243;
    tmp_msg_0.radius = 0.070151751992;
    msg.reference.set(tmp_msg_0);
    msg.state = 179U;
    msg.proximity = 71U;

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
    msg.setTimeStamp(0.600123907965);
    msg.setSource(59807U);
    msg.setSourceEntity(40U);
    msg.setDestination(63921U);
    msg.setDestinationEntity(68U);
    msg.control_src = 52170U;
    msg.control_ent = 107U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 2U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.186961361337;
    tmp_tmp_msg_0_0.speed_units = 78U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.462559995725;
    tmp_tmp_msg_0_1.z_units = 9U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.412474462617;
    tmp_msg_0.lon = 0.0840002245143;
    tmp_msg_0.radius = 0.791868295515;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
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
    IMC::Formation msg;
    msg.setTimeStamp(0.552422418802);
    msg.setSource(35472U);
    msg.setSourceEntity(136U);
    msg.setDestination(18743U);
    msg.setDestinationEntity(197U);
    msg.formation_name.assign("VVOHDFTCJIWSFXDDHLRCXKLSRGVNATYZTHMSOGMORIXGVOUIAHUQFDNQZEMYCWAEFQWJWEBZSJLPJSRXISYDBPTQRLMWMFOVONVRAAJMXYINSKYBLUJVLKYYGQFHJQWNNWTPXQUEWLEAZDHDUOFDBVGVUSEP");
    msg.type = 40U;
    msg.op = 171U;
    msg.group_name.assign("VOIMJUBQRFKBCVKFWPIUATAUTNIPMBEJFTSNBZSYUWMBUCKFCXQRVWOTYHPLJNTPSYNAMZFRIDVOARKVZRLXZOUJOPCAHEBJSVXMRDIGBSIYMHEFTCOSLQQVVXKRWZPXIZONXWWLUGLSSPUEDNHNITX");
    msg.plan_id.assign("UUPLGHCDQDHCHZBJGSNXWCAXFDLXONIPZKFTWLEYMTAAJRHUFJEUNOJHLZBKASGIUNSMRZIYTBLPHMHEZ");
    msg.description.assign("YRXHOHZBEDEJDZCQENXMIWENVIOTXYUGQYSXGYCPNQWDIVHTJDJEPCRKMSREUDKGSHKHLTSXAWGNCUOBNQKTOMDSLLLIVPWAXUQUWVJCOOWKCZADABEXBTYFPCZURKQIFISWLQJVGTAQQVFYRLNJTYGOMZKWPECHIXRVFOPFUSJCGDMNBZZIA");
    msg.reference_frame = 187U;
    msg.leader_speed_min = 0.511414997855;
    msg.leader_speed_max = 0.0374515985723;
    msg.leader_bank_lim = 0.0736011002658;
    msg.pos_sim_err_lim = 0.985807492458;
    msg.pos_sim_err_wrn = 0.137378510696;
    msg.pos_sim_err_timeout = 2409U;
    msg.converg_max = 0.852875061828;
    msg.converg_timeout = 8094U;
    msg.comms_timeout = 65266U;
    msg.turb_lim = 0.718286549387;
    msg.custom.assign("IGABWWKAJRECAJTSWRPLQYAWLCDXDPZITIKMZBCWYADVYDANJIUFWTHSLHHVZAGPNESYTLNOREKSOTUDEXFSBOBMYDQVMXJRGHVEXQKQSGQXJLUGTBZCHUWGPKGFCYLXGINW");

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
    msg.setTimeStamp(0.435812375395);
    msg.setSource(21512U);
    msg.setSourceEntity(106U);
    msg.setDestination(32667U);
    msg.setDestinationEntity(63U);
    msg.formation_name.assign("YRNXJTPTYNIUBZHGFRKXWOWZVCORKABQSLAKHJFOZUTUSBCYBLSLJDCXAKDVOIBUGLGKDIAFRJHXWUOOFLFRQHMJVOKGCCBXWPMVCNYLDZSZUBDGEVXWNINIFXBSAWONZLHCEYWQQPQPPAXEFHVCPNGMTYEHIMTDHMQK");
    msg.type = 48U;
    msg.op = 156U;
    msg.group_name.assign("RDCMMEZJCEYSUVQGZNQCSFALGIEEDYFGIIDXYUEOIFSTMSCZRZJNPRZAXWBWGUFSDIJMOMEMHGTLFUTCKFKGKVOXTZLESWOQBVWGAWHANJSVYWLOCCWBCLODNRUUYKTKRPZBLYPGPWNGOTGMDBVBFHTAOZNHABIIXNXCUPRXYJZBVMRVUTNMHVQAIBJPJAJTDKHLQKQUYX");
    msg.plan_id.assign("QKWXVCBDNMNHJPBDQDNJXXQLVNUJOPKLEKINETTXPXLHWRDCIGCGAKRCLZPFETZRJTJOIVPKDQSYYMEGIQMTRVCHNAYWCDKJZWQTNUGSJWAZJIRYHAOQZLPCCPAMHFUREYGBJEHUZBZWVSLYXOWOTSNYYLVIPMYPAKJOOWGMNLFMGAMRXUBLIGRHSFFUZZWOUMDQBTSQGFKDAOEFIBSXSDFHXHUBLOUYEGMQK");
    msg.description.assign("FKZVLILLXQCTNPZTLUITEIPXMIVSWWJTNTMVYNLJDGCFKSIUCYKJNQOOOPPKXYGAJ");
    msg.reference_frame = 194U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54012U;
    tmp_msg_0.off_x = 0.56247354024;
    tmp_msg_0.off_y = 0.986884494551;
    tmp_msg_0.off_z = 0.849971728806;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.0462964445531;
    msg.leader_speed_max = 0.308730915805;
    msg.leader_bank_lim = 0.362611902219;
    msg.pos_sim_err_lim = 0.230574063729;
    msg.pos_sim_err_wrn = 0.767619894666;
    msg.pos_sim_err_timeout = 29590U;
    msg.converg_max = 0.723111617801;
    msg.converg_timeout = 40441U;
    msg.comms_timeout = 35294U;
    msg.turb_lim = 0.773139009857;
    msg.custom.assign("DSGBJHJWMZLGZFHNLIOPFGTVJYZRXUEVHJNWTFXYXOVSMTPMUZMBIDHTLTXOFKCRCDSLAHMRTRTLEQXFNGYAEHBEIRCQEDJMIWAGDEBRCBWYYOZQJJOQXPQMVM");

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
    msg.setTimeStamp(0.0329944252087);
    msg.setSource(5372U);
    msg.setSourceEntity(113U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(241U);
    msg.formation_name.assign("WZBARQVBCSJGXKSCQKLDUMWNCIOGLYRVFOSTILIOSWRMDGWQNINEWYJTZYIUDHNTIWDTOOFKVNPTJSMWPFZVGTSDNQEOMPHIPAKIYAABOLZCBLGCVWANTBZJRVDPSAXXVKUHRQCMUYVXUGHDFBKMJGNFLAXJLPQUEKPMCKVWZYCMNJFKXJHEXMBDZJRSPFTLUPSZEEGOQRQUHPIUTOFQZHCABAQYYXDCDHAETYBZMXLSIBHWR");
    msg.type = 208U;
    msg.op = 191U;
    msg.group_name.assign("CORUFNCLAHDXLLQXRDHRWPDDFBQRMFKEVSGXYHJHCBBZAOFBPKFIUMIFMGXHNKXAFBSKQNROYSGHCVHLTKTWGWLPOJ");
    msg.plan_id.assign("UTWSIZMOQTEIDYGQRMMMUVOZCUMKRYADCHAJVLNXZXKJBMTBSVRQLKKVHVKOUSEAYTSRKXQD");
    msg.description.assign("RHXXJOCCUTITNNKHDTUVFPINJXSOBRDUUCZSWJJXHHMNEQMLJVEJQLVJDYWXSJRSKICHJOAESEZHXQPUKVYLIGCBYGEJFGNAQPYUTNXIAAFUZYWLRVTRTIFOYYRBOLWKVAPQAMEFDSGZWKEBDGYANZFENTGLTUCXWSNQIGDVRWOOZMHPTXTVQZUKPRBGYABGDIERBLKMALPOWCWCQNPSMQQGPFHFUMBLIYBDVCBKDDOHZHVZ");
    msg.reference_frame = 45U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55862U;
    tmp_msg_0.off_x = 0.115745761671;
    tmp_msg_0.off_y = 0.196933711974;
    tmp_msg_0.off_z = 0.11284400744;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.393106344809;
    msg.leader_speed_max = 0.743908818264;
    msg.leader_bank_lim = 0.68067010506;
    msg.pos_sim_err_lim = 0.587016147727;
    msg.pos_sim_err_wrn = 0.184685075628;
    msg.pos_sim_err_timeout = 52278U;
    msg.converg_max = 0.114943250773;
    msg.converg_timeout = 32730U;
    msg.comms_timeout = 32775U;
    msg.turb_lim = 0.93512500388;
    msg.custom.assign("MRCROQJOHLVADGHSVSYWISGSTDTQCYNJDTYPDOOOXVLAABHVWZZRYZOYRLEAQCGEBFSJYXFAAZLNZCKKEIGGIHEWNTZMXWMVXEVUEFOJXAPPKILFOWZBQLSRZUTFMBXGUPCIPFNWDVXQZNMJLPBUJFCMUKWBGYTEOM");

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
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.122290371873);
    msg.setSource(197U);
    msg.setSourceEntity(239U);
    msg.setDestination(51909U);
    msg.setDestinationEntity(149U);
    msg.dist_min = 0.339860334861;
    msg.ax_cmd = 0.920731468874;
    msg.ay_cmd = 0.761742521734;
    msg.az_cmd = 0.699774725436;
    msg.ax_des = 0.526586763466;
    msg.ay_des = 0.391208622183;
    msg.az_des = 0.829752670501;
    msg.virt_err_x = 0.636829033306;
    msg.virt_err_y = 0.168837954357;
    msg.virt_err_z = 0.980790639248;
    msg.surf_fdbk_x = 0.0308545599857;
    msg.surf_fdbk_y = 0.996487267105;
    msg.surf_fdbk_z = 0.204159548832;
    msg.surf_unkn_x = 0.445658966463;
    msg.surf_unkn_y = 0.230963301845;
    msg.surf_unkn_z = 0.5747835392;
    msg.ss_x = 0.522078346182;
    msg.ss_y = 0.848835281867;
    msg.ss_z = 0.644353975032;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZHLXLTQPMGCJPRQKAEEVQMDCALZBMKUIXTBLGSMYXFNJLPABJRPNKZAQUWACPXNSNAFLDEWDIWYUGBZKMRXRRYJVCHLGZOEGWOKWKVCYCVXTQATXIGFIIIWMLBZOTUWFBVODAFREYHOAYMJJNSUWUSOBPYRHLDUYCKDJAVTSTETKS");
    tmp_msg_0.dist = 0.975929486449;
    tmp_msg_0.err = 0.83300727319;
    tmp_msg_0.ctrl_imp = 0.563090134459;
    tmp_msg_0.rel_dir_x = 0.287038590633;
    tmp_msg_0.rel_dir_y = 0.090147768097;
    tmp_msg_0.rel_dir_z = 0.478498649461;
    tmp_msg_0.err_x = 0.441428163425;
    tmp_msg_0.err_y = 0.097380265291;
    tmp_msg_0.err_z = 0.205076519942;
    tmp_msg_0.rf_err_x = 0.157605240202;
    tmp_msg_0.rf_err_y = 0.546737800441;
    tmp_msg_0.rf_err_z = 0.416942907124;
    tmp_msg_0.rf_err_vx = 0.236747554786;
    tmp_msg_0.rf_err_vy = 0.448995264014;
    tmp_msg_0.rf_err_vz = 0.712685316456;
    tmp_msg_0.ss_x = 0.732891399238;
    tmp_msg_0.ss_y = 0.843788051776;
    tmp_msg_0.ss_z = 0.888645772741;
    tmp_msg_0.virt_err_x = 0.459764166677;
    tmp_msg_0.virt_err_y = 0.0598036680846;
    tmp_msg_0.virt_err_z = 0.139319712223;
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
    msg.setTimeStamp(0.6535514874);
    msg.setSource(36562U);
    msg.setSourceEntity(118U);
    msg.setDestination(53160U);
    msg.setDestinationEntity(241U);
    msg.dist_min = 0.548124167259;
    msg.ax_cmd = 0.94014572629;
    msg.ay_cmd = 0.368072835639;
    msg.az_cmd = 0.447851725817;
    msg.ax_des = 0.502262376058;
    msg.ay_des = 0.862381954188;
    msg.az_des = 0.742670125186;
    msg.virt_err_x = 0.528670722697;
    msg.virt_err_y = 0.42979377923;
    msg.virt_err_z = 0.592048391242;
    msg.surf_fdbk_x = 0.677597752826;
    msg.surf_fdbk_y = 0.421258611713;
    msg.surf_fdbk_z = 0.386656509539;
    msg.surf_unkn_x = 0.179853725914;
    msg.surf_unkn_y = 0.66147261497;
    msg.surf_unkn_z = 0.499682670096;
    msg.ss_x = 0.545724494999;
    msg.ss_y = 0.0775379148381;
    msg.ss_z = 0.480762537135;

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
    msg.setTimeStamp(0.841430613386);
    msg.setSource(27484U);
    msg.setSourceEntity(20U);
    msg.setDestination(7697U);
    msg.setDestinationEntity(208U);
    msg.dist_min = 0.166380318865;
    msg.ax_cmd = 0.18298437565;
    msg.ay_cmd = 0.452034229589;
    msg.az_cmd = 0.623168467306;
    msg.ax_des = 0.315019485601;
    msg.ay_des = 0.996641311375;
    msg.az_des = 0.864195006916;
    msg.virt_err_x = 0.857628044033;
    msg.virt_err_y = 0.256086695561;
    msg.virt_err_z = 0.531328004907;
    msg.surf_fdbk_x = 0.849019253976;
    msg.surf_fdbk_y = 0.822546008961;
    msg.surf_fdbk_z = 0.211803865009;
    msg.surf_unkn_x = 0.0225071345682;
    msg.surf_unkn_y = 0.497837274326;
    msg.surf_unkn_z = 0.86957520871;
    msg.ss_x = 0.0624117622731;
    msg.ss_y = 0.172097028385;
    msg.ss_z = 0.497252635591;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FNJIUQHWMOUYKVWTPUEKLISCPHYOHPCJGSDIZLBHBRWMIRQFER");
    tmp_msg_0.dist = 0.0921457817698;
    tmp_msg_0.err = 0.0386997508185;
    tmp_msg_0.ctrl_imp = 0.103512656991;
    tmp_msg_0.rel_dir_x = 0.114414703752;
    tmp_msg_0.rel_dir_y = 0.0502737046594;
    tmp_msg_0.rel_dir_z = 0.445855944503;
    tmp_msg_0.err_x = 0.683146917013;
    tmp_msg_0.err_y = 0.440713622763;
    tmp_msg_0.err_z = 0.929795284614;
    tmp_msg_0.rf_err_x = 0.849310511169;
    tmp_msg_0.rf_err_y = 0.387083367049;
    tmp_msg_0.rf_err_z = 0.447446564694;
    tmp_msg_0.rf_err_vx = 0.399309776496;
    tmp_msg_0.rf_err_vy = 0.589426454173;
    tmp_msg_0.rf_err_vz = 0.47045216966;
    tmp_msg_0.ss_x = 0.954984569758;
    tmp_msg_0.ss_y = 0.000344884216219;
    tmp_msg_0.ss_z = 0.932931992454;
    tmp_msg_0.virt_err_x = 0.107576070472;
    tmp_msg_0.virt_err_y = 0.821887671445;
    tmp_msg_0.virt_err_z = 0.905212993988;
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
    msg.setTimeStamp(0.939882152538);
    msg.setSource(26016U);
    msg.setSourceEntity(124U);
    msg.setDestination(48486U);
    msg.setDestinationEntity(201U);
    msg.s_id.assign("GXADCEQJFXSLKKGUSVNRGHBOCAAXEKNVDZYNZEAUDBRUEOLXFT");
    msg.dist = 0.515092838593;
    msg.err = 0.769892929141;
    msg.ctrl_imp = 0.428219339313;
    msg.rel_dir_x = 0.782219812427;
    msg.rel_dir_y = 0.578586537895;
    msg.rel_dir_z = 0.852473611127;
    msg.err_x = 0.22361662511;
    msg.err_y = 0.76162313208;
    msg.err_z = 0.595264685388;
    msg.rf_err_x = 0.410358714716;
    msg.rf_err_y = 0.675023537513;
    msg.rf_err_z = 0.770254624842;
    msg.rf_err_vx = 0.308916432791;
    msg.rf_err_vy = 0.293312052088;
    msg.rf_err_vz = 0.813871279306;
    msg.ss_x = 0.467612885321;
    msg.ss_y = 0.90059921698;
    msg.ss_z = 0.0147019630669;
    msg.virt_err_x = 0.39303164634;
    msg.virt_err_y = 0.0647044541568;
    msg.virt_err_z = 0.632816721194;

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
    msg.setTimeStamp(0.154349766553);
    msg.setSource(2103U);
    msg.setSourceEntity(197U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(83U);
    msg.s_id.assign("AETVFLJYIUGXMOKAECIOTKEUPQMTSLSYBWVEZCCHHFZBBKYYGPCVMDRZCUEPKXWIPYSOILQPCLWDTPVVRZAJHVISTXOBIOSJABNGUUXGWLCMJVMLFRPHIXFGNLABEQQYOXHROQKZAESOYNPTQRSQUROWYWSOVXYGQNYFZPXK");
    msg.dist = 0.875057492084;
    msg.err = 0.523613979824;
    msg.ctrl_imp = 0.504878607074;
    msg.rel_dir_x = 0.676144103882;
    msg.rel_dir_y = 0.165544206548;
    msg.rel_dir_z = 0.959551249591;
    msg.err_x = 0.412144067817;
    msg.err_y = 0.971084311609;
    msg.err_z = 0.888854755039;
    msg.rf_err_x = 0.906328068187;
    msg.rf_err_y = 0.531527349957;
    msg.rf_err_z = 0.21662658756;
    msg.rf_err_vx = 0.556013333079;
    msg.rf_err_vy = 0.648731431088;
    msg.rf_err_vz = 0.722556730719;
    msg.ss_x = 0.877049975841;
    msg.ss_y = 0.635532883952;
    msg.ss_z = 0.774054947865;
    msg.virt_err_x = 0.176679541584;
    msg.virt_err_y = 0.450580807514;
    msg.virt_err_z = 0.00827155566117;

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
    msg.setTimeStamp(0.643716278781);
    msg.setSource(21127U);
    msg.setSourceEntity(11U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(122U);
    msg.s_id.assign("SVXECJGVDORWFRTPZDORLGTRWBBIYMEBMNZTECOKFFEXYXVHQHZYTIRHXIJLPAQCKNFPWAUDACETGIDHTLNRUPHHEWAIFFWSDJPEMMQ");
    msg.dist = 0.206008792949;
    msg.err = 0.767366344265;
    msg.ctrl_imp = 0.955166928353;
    msg.rel_dir_x = 0.142307460632;
    msg.rel_dir_y = 0.365566657144;
    msg.rel_dir_z = 0.421418380484;
    msg.err_x = 0.462409416597;
    msg.err_y = 0.0698891554976;
    msg.err_z = 0.0855869145898;
    msg.rf_err_x = 0.623784351365;
    msg.rf_err_y = 0.781390242579;
    msg.rf_err_z = 0.142840636576;
    msg.rf_err_vx = 0.576706484258;
    msg.rf_err_vy = 0.879210784131;
    msg.rf_err_vz = 0.712852033491;
    msg.ss_x = 0.537089093236;
    msg.ss_y = 0.438021121108;
    msg.ss_z = 0.0776851331243;
    msg.virt_err_x = 0.471462199042;
    msg.virt_err_y = 0.741362635168;
    msg.virt_err_z = 0.458718669664;

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
    msg.setTimeStamp(0.0838724766665);
    msg.setSource(20651U);
    msg.setSourceEntity(17U);
    msg.setDestination(502U);
    msg.setDestinationEntity(80U);
    msg.op_mode = 26U;
    msg.error_count = 84U;
    msg.error_ents.assign("RCUAFFRUNZSQRLEDBNGCGFXIIQAESIMMVPHDQLJKIZZAQWZFYOXCZXMIWQSVCXNFEPZRSUIBWQRLFQWYXKKSPJKYOAZBJOOPLVYDJTUDHZSYDIYHNGJDUJPBMNEQAPQUCSWFHBRBIMANUMKAOFDDTVGABGKIMEYMHOQLTVKHWVBCRTOTMVIBUJEUVFZTYWEWLSDNYLCXDSEOWBKXNRNZREPJVF");
    msg.maneuver_type = 62801U;
    msg.maneuver_stime = 0.389037769033;
    msg.maneuver_eta = 20229U;
    msg.control_loops = 673175839U;
    msg.flags = 179U;
    msg.last_error.assign("SMEKZDRFZXYYVYAHXTZOTNTPTQQWOMXXCKBCHSJFFVWLAFYWXHJXARTUNFEMWGFPANPIRPOKJJCSFDSMEUNGIBVLGEMZJNPEBZKHHBBUIGZTRWD");
    msg.last_error_time = 0.159192253513;

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
    msg.setTimeStamp(0.149662540035);
    msg.setSource(40028U);
    msg.setSourceEntity(225U);
    msg.setDestination(41524U);
    msg.setDestinationEntity(228U);
    msg.op_mode = 76U;
    msg.error_count = 77U;
    msg.error_ents.assign("IBJHQRTVXLLTZAQXDBYHOIDIKMGHGZBXPXVGDSRTCMGEVNZIMZLAPYJHFVRAWYGMWHSEQQSBJUGCPDBYCZGIIQSNOOULSKDWCRLAVJIPJWYREKECNDPJOVTNAGVCUBPHMQRULUWYMFFHDUTFFTQRIAFEAJXVNPSNROESRTUPIMFSSILTEHUFFZTABMBJAKLCBKCQMVZXBNPNXZQOJKDXKRTWYXVNOWHCWKKSLOPDGNLKJWXYEZU");
    msg.maneuver_type = 5631U;
    msg.maneuver_stime = 0.690512766588;
    msg.maneuver_eta = 42292U;
    msg.control_loops = 2585309566U;
    msg.flags = 49U;
    msg.last_error.assign("WEUYQXRCEGDONWKVYUYONNZQTTDDTBMAOMEWAEGYAFIUILORAJTUXICHEMEEPMALQVODWGXHHUCJWITXXYCQZKRJKASEBOKOYHWLLDLBVYCPEPQZLFOQBWMOJKKZGLJCYWSHXBJZNCSXFTUIIZJRHOMLRDBFNUZPGUVBQQRLTJDWHFBJZPAYGLCKHHX");
    msg.last_error_time = 0.704947590687;

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
    msg.setTimeStamp(0.541605913407);
    msg.setSource(59035U);
    msg.setSourceEntity(135U);
    msg.setDestination(26145U);
    msg.setDestinationEntity(27U);
    msg.op_mode = 190U;
    msg.error_count = 120U;
    msg.error_ents.assign("FRDCXBRLWXEFAODGSYGRTCAXXXLTHNUNMJEVTHBSIFDJUUQQEUJFPOHIBZRMJBNPCKN");
    msg.maneuver_type = 57835U;
    msg.maneuver_stime = 0.207394268604;
    msg.maneuver_eta = 37349U;
    msg.control_loops = 621252891U;
    msg.flags = 120U;
    msg.last_error.assign("HNEFKPMYHHLXFUJXQTMZIFCZRBCSMDZWGQOYZMKKBAORYOVUTOGSYEXTXTMQNGZNFKVSLVYIPREIHWGTYEAJBCYTDNUKXVURQBSMIPGTDDHNABJNGJTINRUWRSDZUMWKUJLSELLYCKBKQA");
    msg.last_error_time = 0.956547713513;

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
    msg.setTimeStamp(0.908485204941);
    msg.setSource(28871U);
    msg.setSourceEntity(37U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(108U);
    msg.type = 201U;
    msg.request_id = 26740U;
    msg.command = 207U;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("MXXKAIVPHSMOBRIDAGHISPFZEOMQDDIHRWQTBZXGQICHDTKJAKPNTUEGFQLQNCMYCLXOXZYIZSVHNPLCMSMHJJDEUSQSBWYBKBPKLJFPNXRKOF");
    tmp_msg_0.type = 114U;
    tmp_msg_0.op = 245U;
    tmp_msg_0.group_name.assign("XQNBEOFPGCHGICHIIDMHXAZGYZVQTCDKFXPOHZKPUCYLKRSFDAJDMVQLKXJWKZTLJWUUHXEZBJMJOZUSOADCNEGNFHEAQRIJDKYWCGXXSLMLN");
    tmp_msg_0.plan_id.assign("QUJXHIVBQFIAIVRQLVBCQUKSLLYBXEEPLZPYZWNZIHNZDGNDYLJJHBBYMDZYXKJPGMEKNCOFNLVSVIQMZCLRQFMPXBRQKXKTMTIHYTHBADQZWLVDPFBUAOGOWHVOQWZKYJJCDLRPUHHGCNUOVMRNGSSTBEKRMGWAXDMJVRUKXFDSCGATNCOQNUAMYWSYIFOPNIJOFKCDCJTFWPEGUHSTFKAZAAELCBSI");
    tmp_msg_0.description.assign("DPSFCRIBQWHUBFMTQNTGSWWPZKRIOOHCJXERLZIZBKZVYSBEWQIPULVMJEERDKOAHRFVNAXTARHGENFQVWFXSZOQUXLYXJRCNCUFDGKJMMAYCPYNWZJDRAUJWJLATQXSFPQQMDKYHSSLDZFNKIFDT");
    tmp_msg_0.reference_frame = 184U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 57314U;
    tmp_tmp_msg_0_0.off_x = 0.0355618780948;
    tmp_tmp_msg_0_0.off_y = 0.522404779594;
    tmp_tmp_msg_0_0.off_z = 0.760486273048;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_speed_min = 0.792993435335;
    tmp_msg_0.leader_speed_max = 0.456410667685;
    tmp_msg_0.leader_bank_lim = 0.495488427375;
    tmp_msg_0.pos_sim_err_lim = 0.968434797335;
    tmp_msg_0.pos_sim_err_wrn = 0.169776213312;
    tmp_msg_0.pos_sim_err_timeout = 58627U;
    tmp_msg_0.converg_max = 0.68350473841;
    tmp_msg_0.converg_timeout = 31153U;
    tmp_msg_0.comms_timeout = 49597U;
    tmp_msg_0.turb_lim = 0.561006472317;
    tmp_msg_0.custom.assign("TBXNVFTHZCVYKNZPOVHZTEUDNOKFBRESWIFBOROMJSIPLMVF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34538U;
    msg.info.assign("BGQXPQUKXQBPVLYABMJTEVTQOKNNZVVGJXMFPLSAHOJVFAFLHULYGGXSSAISZPWAZEJNMFRISRTCGDPCNYFELDDWBOZZXRSATBRIEPLAWRCHTQPIYCHFDODHIBHLICYDNA");

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
    msg.setTimeStamp(0.233737371774);
    msg.setSource(21084U);
    msg.setSourceEntity(51U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(104U);
    msg.type = 17U;
    msg.request_id = 38600U;
    msg.command = 74U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 891U;
    tmp_msg_0.lat = 0.905066221869;
    tmp_msg_0.lon = 0.470570334282;
    tmp_msg_0.z = 0.209580510486;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.speed = 0.0760911757152;
    tmp_msg_0.speed_units = 26U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.508438484248;
    tmp_tmp_msg_0_0.y = 0.865213600021;
    tmp_tmp_msg_0_0.z = 0.00608070071112;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("IAPPOEJYHEDWCOWYQKSSZXYSQEHZUUYFYUBJBGMNGQADILCNOVHSQQAQEVMMQIPCJDVRWWXFDVPYGIUZQEFACFGNGILTTHBIHCTVYFENBPGRJCXXNUZKGVQJPYTWRAVOFIHTBKLARLCZHOJRBJOKXPPCLRMWXLIIVMFGKBNOOZTDDSZJXKWZAUXWTKDLDG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16754U;
    msg.info.assign("AIVUIYGHNDDABXRNDJEHALPUIFJKPNHZKKRCQASFORPDAXQZPSOUZGFLDQIYUIBAXZLLETYUMDJGIGHTCPBWOGQWOTEZVSJVZTCDJLAMXV");

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
    msg.setTimeStamp(0.107075180652);
    msg.setSource(38586U);
    msg.setSourceEntity(218U);
    msg.setDestination(53411U);
    msg.setDestinationEntity(189U);
    msg.type = 254U;
    msg.request_id = 5856U;
    msg.command = 79U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.635939151765;
    tmp_msg_0.lon = 0.180910745384;
    tmp_msg_0.z = 0.0804112935699;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.925710456554;
    tmp_msg_0.speed_units = 59U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.643351967627;
    tmp_tmp_msg_0_0.lon = 0.334479524642;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LDZMGTPBUHFBCFKZEKQCIPZSAWBXCRXR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26139U;
    msg.info.assign("ZLMOUBKANACPGPVVAILYFVDBJSUZ");

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
    msg.setTimeStamp(0.484895030824);
    msg.setSource(46194U);
    msg.setSourceEntity(127U);
    msg.setDestination(59830U);
    msg.setDestinationEntity(204U);
    msg.command = 17U;
    msg.entities.assign("AIQCIKSTENJPEUJMUTFTQOOUOTVBXEEDTGNOCYEIHDVWCOAFWIGVUAFMYXMWRESIMMSDRVWAZYZRFRXJFXNOSUNVHSIXBVOYABSVWXRGKGIBNIHQSSZKXUMRCMLNGOAMRHWGAFXYYHSYJFXORQLKXEPQKAYAQOD");

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
    msg.setTimeStamp(0.679449741996);
    msg.setSource(40078U);
    msg.setSourceEntity(221U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(144U);
    msg.command = 75U;
    msg.entities.assign("MWHYKAGCIZSEWXZPPZRXKKOJIRILNBKZZEAUNZCEJDMCQKSAAVTJOREWJYFEVDLBENBRAOFUWUM");

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
    msg.setTimeStamp(0.830818237855);
    msg.setSource(23342U);
    msg.setSourceEntity(236U);
    msg.setDestination(43915U);
    msg.setDestinationEntity(184U);
    msg.command = 235U;
    msg.entities.assign("SEDVJZHECKXWPGHPWLETLXJZJPZVQNAMHCEJXVDWLNNBGNYOFKOGKTIYIYWLXRGDNPHFKQMGEYRBTZARHZCEXYIPEYPBFGFAVJFBQGTFGMWSLMSAXSKVLLYLXMMUOTPOOKRDDMZQXVQVIMUTNDRSLWTN");

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
    msg.setTimeStamp(0.420317000977);
    msg.setSource(62004U);
    msg.setSourceEntity(144U);
    msg.setDestination(61810U);
    msg.setDestinationEntity(182U);
    msg.mcount = 153U;
    msg.mnames.assign("BDERYTVQBIBEJIHXFWOQPLCZDZKTLYJRPPUGAWKVQXLTHKOQZRCWIIVOESKNFLYSLZDYGCHILJHBKD");
    msg.ecount = 212U;
    msg.enames.assign("VISTUZPFMSFEDTFCVSREBEJTTHANQBDERLHOXFTRZKIYIDCYHBLOXCCJJUUGISQNKAKUXYEXFQYUWLBBWCCXRNAUPGKQKGPTKNDRMLJXYNCVMZYXLIWYNBQGBHWALDJRQPPSMZEEOVMQIFRPLEKVDWDPQXYPBDQOONAZLWUGBCATWVUERMRYTGAYPWZFGHRHN");
    msg.ccount = 126U;
    msg.cnames.assign("AJCDTKUKQHLBWCSZMGVIYSGPESYEPRLRXQSBBEZEYWJWGKBWUDDGTUTHPUKPLYWROOLUNOSBDDENFCYAAOCEMAKILAGNZMIXRXFXYLWKLZJZNCYZOITXDRHGVRAXRSRMFLSWXWYIQBUHFZNPJNMVE");
    msg.last_error.assign("WFUXUTYRVCTHAEITUFCGMXGYTFKGZZCNDLZTPWEZQLENRMUCFZNJOIJONKLDTHMREPIVRVJNAOLLPHSNMVPVARNTPKXCBSEJCTOOIKDMDHWYSWIASXWBDSAIJWQBZOGJIXPULUYBDAOQHNKG");
    msg.last_error_time = 0.438065241151;

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
    msg.setTimeStamp(0.0261091333128);
    msg.setSource(63460U);
    msg.setSourceEntity(158U);
    msg.setDestination(54086U);
    msg.setDestinationEntity(223U);
    msg.mcount = 226U;
    msg.mnames.assign("FMMSEWFAPBQOCAQLJPYJIREKESWL");
    msg.ecount = 129U;
    msg.enames.assign("DFKJNYELLGJWOTKZYRDZMMJBLRLAQOWUVQHUJA");
    msg.ccount = 190U;
    msg.cnames.assign("ROSLIQLHWTBBFEZULEDOOGFLMWMXENIEYKIUECCUDRTNKLDQTJNHGEDXDLXPZSMHYDVSYXRQOPIGGIBFCJQIYFZFIMXXWUKNOJARBCKVCVJQGWPJALFAZZAAEKRVWMZ");
    msg.last_error.assign("BNVMJQOOUNNJGPHPMDUJYXAFDJATQZYHBNVJIVTKTSVWCGTEUQFDQVWSRAZAGOOMSZSDLIBPEYKTGBQEMVXDTKKEZLAIBIKWLYZFOFXYYNJFPZSPCCCQXBTMRJGRGGWPFOJGTFDLRLXPLQNCLKEEAORPKZRMOXIWMUCUCERGAHJDCYJUXQKURKYZREOMBIHIKVVDPXEHNQSPNBFFBZISTCRLHWUUWHHHDDYASXTGEAUCMN");
    msg.last_error_time = 0.106003546333;

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
    msg.setTimeStamp(0.302235097652);
    msg.setSource(55418U);
    msg.setSourceEntity(221U);
    msg.setDestination(58917U);
    msg.setDestinationEntity(113U);
    msg.mcount = 245U;
    msg.mnames.assign("TRPBPQAQULAKQKCHOSDMHCTBVUQOWUCMJIFEEMWFRGENRKZXOBFJGTZGVIMCAWWZJPDKMGAAYIXNRDCSWHHPMXVTQOWXDVUOSUFCDFYWBOQQMQNNGAESYNOIWREIOETAELDUDEZRJDYVVZELOTJLWUBS");
    msg.ecount = 128U;
    msg.enames.assign("PINQAYWQLPPOXBLUHEVWEDEOIYCTVANTJJSDDTXAKGEUZOLTIMCYOFXITAWIPSCUGJNVVKCAHORKDCYOZUMAWGRWNVDRKG");
    msg.ccount = 110U;
    msg.cnames.assign("OCSNRCNEGJGGUKMAJMWKZVHBCOXTDYIXSUIEMPJOOWHLAKOGDVPVQVILZKCSVOLFHXXNDYEYGNCGBXTUBGHUGMZBNEWOSFZHNTXBPYLCFMYBOENDFZXBYYSSXJAV");
    msg.last_error.assign("DOPBZPEGOUCBQGCCQXIBYQWZKJBZZJFAUPVAVWFKRPDBBERTHJTAKLQHCZISGVRMGJXMLALXQWYAFVLISHLFTDWDIUNKCSORBNYEDQKVKLNSXDRRLNZJAKHEENYSZEJLJUZFUGRDDOHTGIVKKTOJPYPOPIBPWNTSVGXMGACFFHJAQFRPFZBXUYMUSXTIHIVWM");
    msg.last_error_time = 0.301066496859;

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
    msg.setTimeStamp(0.154849058696);
    msg.setSource(7398U);
    msg.setSourceEntity(232U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(102U);
    msg.mask = 111U;
    msg.max_depth = 0.188221025675;
    msg.min_altitude = 0.995386978265;
    msg.max_altitude = 0.332310653984;
    msg.min_speed = 0.133591287179;
    msg.max_speed = 0.699071137377;
    msg.max_vrate = 0.0653757589179;
    msg.lat = 0.233214393415;
    msg.lon = 0.255018467352;
    msg.orientation = 0.813394563266;
    msg.width = 0.910874033583;
    msg.length = 0.0591876660406;

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
    msg.setTimeStamp(0.555928316192);
    msg.setSource(43835U);
    msg.setSourceEntity(247U);
    msg.setDestination(51735U);
    msg.setDestinationEntity(15U);
    msg.mask = 113U;
    msg.max_depth = 0.689809395499;
    msg.min_altitude = 0.0051395885199;
    msg.max_altitude = 0.420917627493;
    msg.min_speed = 0.675058876719;
    msg.max_speed = 0.329543482652;
    msg.max_vrate = 0.218917172513;
    msg.lat = 0.677835483205;
    msg.lon = 0.469392440666;
    msg.orientation = 0.301319037418;
    msg.width = 0.69952645024;
    msg.length = 0.658379023714;

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
    msg.setTimeStamp(0.307472185341);
    msg.setSource(33356U);
    msg.setSourceEntity(89U);
    msg.setDestination(13653U);
    msg.setDestinationEntity(2U);
    msg.mask = 73U;
    msg.max_depth = 0.844525343521;
    msg.min_altitude = 0.663513295269;
    msg.max_altitude = 0.11256139496;
    msg.min_speed = 0.980588774043;
    msg.max_speed = 0.292105398372;
    msg.max_vrate = 0.792504598155;
    msg.lat = 0.0952462373769;
    msg.lon = 0.66759646852;
    msg.orientation = 0.391412704725;
    msg.width = 0.967615388735;
    msg.length = 0.259994615896;

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
    msg.setTimeStamp(0.661259409374);
    msg.setSource(55707U);
    msg.setSourceEntity(169U);
    msg.setDestination(48572U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.513271395029);
    msg.setSource(1273U);
    msg.setSourceEntity(53U);
    msg.setDestination(34053U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.702051008362);
    msg.setSource(14371U);
    msg.setSourceEntity(189U);
    msg.setDestination(60894U);
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
    msg.setTimeStamp(0.0741773132461);
    msg.setSource(54321U);
    msg.setSourceEntity(147U);
    msg.setDestination(3704U);
    msg.setDestinationEntity(230U);
    msg.duration = 46631U;

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
    msg.setTimeStamp(0.193480897399);
    msg.setSource(34351U);
    msg.setSourceEntity(106U);
    msg.setDestination(51578U);
    msg.setDestinationEntity(136U);
    msg.duration = 8675U;

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
    msg.setTimeStamp(0.539082098315);
    msg.setSource(23749U);
    msg.setSourceEntity(31U);
    msg.setDestination(35571U);
    msg.setDestinationEntity(185U);
    msg.duration = 46337U;

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
    msg.setTimeStamp(0.58900048862);
    msg.setSource(10444U);
    msg.setSourceEntity(24U);
    msg.setDestination(51779U);
    msg.setDestinationEntity(98U);
    msg.enable = 65U;
    msg.mask = 3192722099U;
    msg.scope_ref = 1387837420U;

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
    msg.setTimeStamp(0.17946091052);
    msg.setSource(1976U);
    msg.setSourceEntity(58U);
    msg.setDestination(36212U);
    msg.setDestinationEntity(83U);
    msg.enable = 202U;
    msg.mask = 3419852340U;
    msg.scope_ref = 1100279507U;

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
    msg.setTimeStamp(0.432764703414);
    msg.setSource(46896U);
    msg.setSourceEntity(133U);
    msg.setDestination(41601U);
    msg.setDestinationEntity(253U);
    msg.enable = 60U;
    msg.mask = 2695273407U;
    msg.scope_ref = 4024918385U;

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
    msg.setTimeStamp(0.437882086976);
    msg.setSource(42818U);
    msg.setSourceEntity(212U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(159U);
    msg.medium = 210U;

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
    msg.setTimeStamp(0.980770573595);
    msg.setSource(63720U);
    msg.setSourceEntity(185U);
    msg.setDestination(35315U);
    msg.setDestinationEntity(101U);
    msg.medium = 42U;

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
    msg.setTimeStamp(0.181749524298);
    msg.setSource(63984U);
    msg.setSourceEntity(162U);
    msg.setDestination(34968U);
    msg.setDestinationEntity(19U);
    msg.medium = 132U;

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
    msg.setTimeStamp(0.0922833855614);
    msg.setSource(38531U);
    msg.setSourceEntity(109U);
    msg.setDestination(61698U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0798000313965;
    msg.type = 71U;

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
    msg.setTimeStamp(0.457654613406);
    msg.setSource(5372U);
    msg.setSourceEntity(74U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(125U);
    msg.value = 0.941266946562;
    msg.type = 59U;

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
    msg.setTimeStamp(0.712167588113);
    msg.setSource(1524U);
    msg.setSourceEntity(214U);
    msg.setDestination(3993U);
    msg.setDestinationEntity(186U);
    msg.value = 0.367840654133;
    msg.type = 228U;

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
    msg.setTimeStamp(0.508468427507);
    msg.setSource(30925U);
    msg.setSourceEntity(63U);
    msg.setDestination(55192U);
    msg.setDestinationEntity(200U);
    msg.possimerr = 0.267435061723;
    msg.converg = 0.370464281129;
    msg.turbulence = 0.834771004755;
    msg.possimmon = 20U;
    msg.commmon = 248U;
    msg.convergmon = 58U;

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
    msg.setTimeStamp(0.217711311507);
    msg.setSource(20234U);
    msg.setSourceEntity(111U);
    msg.setDestination(36037U);
    msg.setDestinationEntity(8U);
    msg.possimerr = 0.382795632777;
    msg.converg = 0.63982109709;
    msg.turbulence = 0.49737992947;
    msg.possimmon = 16U;
    msg.commmon = 172U;
    msg.convergmon = 18U;

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
    msg.setTimeStamp(0.928832404537);
    msg.setSource(35797U);
    msg.setSourceEntity(244U);
    msg.setDestination(3037U);
    msg.setDestinationEntity(203U);
    msg.possimerr = 0.979424852054;
    msg.converg = 0.638531683481;
    msg.turbulence = 0.00776368637919;
    msg.possimmon = 50U;
    msg.commmon = 165U;
    msg.convergmon = 112U;

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
    msg.setTimeStamp(0.87859232494);
    msg.setSource(58351U);
    msg.setSourceEntity(8U);
    msg.setDestination(31188U);
    msg.setDestinationEntity(15U);
    msg.autonomy = 114U;
    msg.mode.assign("LXSRUQIBVBPXAOEJRSACGSWFTTWJGXEFOWZAMRNVKMFEVOZYASCLPHSOSNYNGRBLLDXPTENXVZPUDWDYKLJXLW");

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
    msg.setTimeStamp(0.803972373804);
    msg.setSource(34724U);
    msg.setSourceEntity(175U);
    msg.setDestination(48012U);
    msg.setDestinationEntity(121U);
    msg.autonomy = 67U;
    msg.mode.assign("HEYHJCZXMJIWLUVPSCFHYVQQHGVRAJJTAVOLJXTXTLEYLMAVWRXNBIQIJBUCIQQXZDDMKMWPCSGYZPCUIRWGRLUDANPOJR");

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
    msg.setTimeStamp(0.952920803451);
    msg.setSource(37663U);
    msg.setSourceEntity(96U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(252U);
    msg.autonomy = 56U;
    msg.mode.assign("DRBZPEKZMBRRFYWIXSMVOIKTMMIPOHMMJHCAVINFGSQUZXVEKGFHDEKIVGPLTWSNWJVUHBGPNAAUPCRDYZHTPMSUOKZBDYGEWWYCYXWQJPYGCUKNNHCWIEJHSQVQITQAUCYLOALTDRLOYKPOLFXEQEWMXZNFJZSUBRXGKMBUONLSDHXAEHNQXFRLQQCAVYVERTZUJTBTXNTVWPDOGPKCHDDNICLSCGQTGFRBSJOIKLFARYDBEAAOM");

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
    msg.setTimeStamp(0.871042949936);
    msg.setSource(3301U);
    msg.setSourceEntity(191U);
    msg.setDestination(59666U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.294558952763);
    msg.setSource(60729U);
    msg.setSourceEntity(241U);
    msg.setDestination(33712U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.29269516889);
    msg.setSource(3142U);
    msg.setSourceEntity(90U);
    msg.setDestination(64307U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.846071793653);
    msg.setSource(53628U);
    msg.setSourceEntity(192U);
    msg.setDestination(16094U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("WEFTHTVDJMFRAQRKMWVZYLIDTWUCMFTXGANUGVJZDHEBNRSJGDXARJUNUXTIMZOXSIXWPOPQCIYPJXLTPDWDVFCXAOSPFOLSIBTVYGPBZGREFNOWKYVPHSQIMIUJMNMCEESUTESGACFCWCQYPRZCJVODBMHVYKJEZAKDVQBFKTEDUISQNKKNYPHEHLCBYXU");
    msg.description.assign("MEWIFAYYWDUBZNJDAWFDTQDSNKWGVJGGBQSGHFBRCNTQLTVECRPOKWLNXYUXAERJSCJKSLRRKUXAZPQACKGJYHILFHYSZOIHQUBONBFXDNZTFVBNQUMXOUBPHLAPOKLTPUUWECGADJJIOJXJQMVPVAPONVVIZMHPSEILEJVZFIYCELTTFDDUBWOGRGEGXOXRFWD");
    msg.vnamespace.assign("KVCJXFKCEHLHCLQXNYUIWYFRSQZVDWKLMSDBJKWVDPFUZNKSRXVIHSJFARNBOHFMNYVIQUNEYBQOVNEBRYOWOQRKSIUMAIXAEFHIBBBTWQJKPDVSZEHZXCGOZLELJZVLTDUFLXNORAAUTEMJSDODHJLYCUFCNGXMWOUQGSAYDGTPUSDI");
    msg.start_man_id.assign("NAFZTPAAGXNZFAUSASYSGSLLMCLQPMBQNVTSDKYVHZURXBPIWPUFUHJGAZGVRYBPCDXNHEUCHVBEVMWGXIGORTICPHFYZBWEZPYJLXLWCBCUFQBKYXEDEIOYBIRRLKJQOJETNNQLZRATOLLSSWY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TZFOVRLXLCJSBDIAABQGWATPNIYKARRFEXVVVVFRVVDUZEUTXIKLJGCYAPFNOWNKJCCWWBPYKSRXFUWWDLZBQYGBCIYUGSGAEWZDETOLUPVCQBSWDUQGVJBOXEYEHUAPNPPONOT");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.742918524766;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 64994U;
    tmp_tmp_msg_0_0.custom.assign("GKUZPOQGCAPUVPQVAGGYBMYWIXUSEBLGNTPAZWJHSLHHJLICCPITRKXKCIDIHYASWGGLQMYGDFIGQMAHONTVNRIMKSXEAEORDNCJWZP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Heartbeat tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::AllocatedControlTorques tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.k = 0.372950387172;
    tmp_tmp_msg_0_2.m = 0.106876605103;
    tmp_tmp_msg_0_2.n = 0.354722010402;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Pulse tmp_msg_1;
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
    msg.setTimeStamp(0.671200943421);
    msg.setSource(51220U);
    msg.setSourceEntity(202U);
    msg.setDestination(38048U);
    msg.setDestinationEntity(169U);
    msg.plan_id.assign("DABCFDMEXWEOOWALXDCGINYEWCSLUTHTRPFUZQPCLRJOBXAMPCZZFQGSVAVXULAGSJFASDUMHNRZXITCWUZFFFKODRRFAUSEIRUQXYYBNNHLOKESXTSWKCZJOVIXVVEQTGOIPLYQZENLQWHXGHAQVYDWTQKUYIPYQF");
    msg.description.assign("ICDRXTCVFUXHUILMICSGGTOROTLJTXSPNZBHGPSFJPKXKLRZIQPXAWOMQUVTSUQLVUSHUBAMQDPCZJCTJIAUUXEHVBIKLKCDKRJRFFPJBIGYMLLXMIOBRSXEOGZHVHYLZRXWYPEZQWYWTDPVWFFTBOYCVAZLCGHHANXGRAIKJHKNNRDAMGJUONNKHBZQSPVVTZSCQYDBODRNCBJFMPLMNMYOWEUYZWQGNJYANEQWQGEBEDDYEIOSWAEMFK");
    msg.vnamespace.assign("PCCJDJOIICOEUTMRUWZSUVQBHJFUMMSKTHUVZRAFOWGLIARALFTLBIYNVKAEPXTYNWDJDXCOTFKOUHXYQZFVXMDMQJUCTSDESWPQYOPAYXKZTDACGZZDLMPXACLOBBLKHHXFIVFBEQHXNNPOKAR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FWDGXCDHTQDNLSPVEC");
    tmp_msg_0.value.assign("FQWWZGCMUXTDOPUSJTPIZYDRTKWHDAAAKNFBIRGSWQPXSPRFBWUGPZQMENOTFCIIEECOLUITDUAZVRHQCKRRZZOOUFBOYYKGMMSJHYTEBIAUJXZKDLLJDGUBCOGCSSJJPIBVNWXO");
    tmp_msg_0.type = 55U;
    tmp_msg_0.access = 55U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MGSOOFWIEQXSJIJRKZVNBMCLYZKYZGOJRESOLXMDCDNOSXERSEHCULRAVQJKBPEWAVCYTBTLZGQAKCVPBZYMX");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("HPRPTHOOUWEGDAFHQLCIAGRAFCQKSFZXILNPTCSAPDIIKQRJENEJAHEGIABVPUUTGOKJMLYBPXURONJBZSULJMDDNZMOPTHVPRWPKRBVOOLEDDIXXWGVKDXLFWRSYGWWFTCQKXMAUSV");
    tmp_msg_1.dest_man.assign("MQGOWCGIWWXXGWXXBQUHRZKHMMOPRUCLBXVYVYBUPXVTIKCYYAECLEVTZZHUILQDTQ");
    tmp_msg_1.conditions.assign("PZYBOZAUTVRWEHOZFRJZJOXPCJDQVMGCBDPYMEQGDRLXJFUGGOXGQWFUOPIGPJYZITECWLXWFVYHHVRYSECNYBMAYAFUADETVDNFLQMKNUUIDBKWPRHIKEQUAVGNXRJBHTSBUILORRKBMZTASZAQHOZUSXBOLMJKIYVNSVJSENWMOXADWXCQSVSNSHDNNGCEFJEIJGMZQWWWXGDQYRKCMLOFKPCTHKIBQZKLTXFCFAYBATNPHVLDKEPP");
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
    msg.setTimeStamp(0.945577408059);
    msg.setSource(19397U);
    msg.setSourceEntity(141U);
    msg.setDestination(60607U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("IVLWZZRCPNWBQNDWKNAWBIYZFMKIDASHNVAOCZFEIOPISUQCNEGZMDJISKJSRGMYEBXQYXEQGMFWKDTUXBZXZPJCGKXRRGFYSFNLUXCKUDQIGPWEKLVJETQURUDHJMWOANVZJONPRMAETFYCPKZHGA");
    msg.description.assign("SAMKVSHOHMDNDBTFHECWBNNBMSIUSFUJNGZXZJPQCHISCJKELZWQINPGRDRKUNIHLRDMDUQKAF");
    msg.vnamespace.assign("KIBOFKHJIYPMGDLMBTBMNSOKYAPXBTVMUDJJKLONRNLJSGDHTWQPFADYCPOFVQNWZPOOJCMGWQZRXWLZLQAGELBANDOWHRXHWNIHSQEVMUCNDCISIGUYOFFSFZKOZDLEAZQCBTTFXTUQKXWSEXFAUENHMVYGELZKTTAICBNYLBZDUQMDRVANPCUXFCRPWVSKRA");
    msg.start_man_id.assign("HLONONQJPKSZTHLARHLQGMMSLOBJFAFDVEHHJAPKFEVZTYVSQBQEOEYTDPIRPPTSNIGEXDWAUGKRXUXCWHBGYLZLTFKKONPZBJFLIMXMWRZPSCIOEEBQHGRBWURMXBOQXNKPVKMEIGVJECDWYYQDGUZUSWWSHTMLBWNJLKAPSXOCUA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YAINVWWCWHRRBKLDJEVLSUCBYLCXFDDGQUFKJPEXAWCJALBEHBGADVJZSSMERKAQMCWDXIWVFVPGOUWMTXHYDJDOVBKEEXRZUBHNHOGDBUXNRFQKLPNVHABBHSGVQOZMOMUNPPCXIPUJSOF");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 19073U;
    tmp_tmp_msg_0_0.name.assign("BUUHIIRNPFJHMQEUVGGURRSEJJHTGNFASEXDDXXKRLSMCCMSCUOBAQFXZWJZRMEXSFLAWBMFTVKRLCKWIRINIUTZMBIPOEGJNMABNKKWEFYGPPAIGJPXQVAHQUXLFGTKBYSHNPWMNLYHLBISCSVHW");
    tmp_tmp_msg_0_0.custom.assign("OEGEZLNHATZWRASRHZPMVMRMZDFZPFUMGDCROIWYKUKMYBVCYIDUAIHQIOXEXZAQBSFJJJSYODNSXHVTWQUAKOSCBKAPJIEFCWEGOQKBMZPLSEXVHJBMBW");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Abort tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrueSpeed tmp_msg_2;
    tmp_msg_2.value = 0.189840748753;
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
    msg.setTimeStamp(0.898029519379);
    msg.setSource(11U);
    msg.setSourceEntity(187U);
    msg.setDestination(63303U);
    msg.setDestinationEntity(233U);
    msg.maneuver_id.assign("FGZDPDFHPUOLQRYALSTJYKDEIHCKUPKCIEYBJYWPRPPPJZOXUXHNTIQRMMJXCIYZHVEGUHENPKSXAKCHBWGVEQIMZEFHOSXTVXVFVJXQXCEBILAWMWUOOVPEYTBDHTJQAVIVBXURWYMZMOSBAFMIKJADIQNLQDGCY");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 65531U;
    tmp_msg_0.flags = 231U;
    tmp_msg_0.lat = 0.725949169552;
    tmp_msg_0.lon = 0.592876360231;
    tmp_msg_0.start_z = 0.180703388887;
    tmp_msg_0.start_z_units = 70U;
    tmp_msg_0.end_z = 0.398321142928;
    tmp_msg_0.end_z_units = 191U;
    tmp_msg_0.radius = 0.722505272683;
    tmp_msg_0.speed = 0.19183204461;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.custom.assign("KFFEUUWERDZISABDPCORSECMDAVAOXYIZSQVHOBSDPGOUIVJMSZLITUWVOXBLKZLXTKEDE");
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
    msg.setTimeStamp(0.948135532469);
    msg.setSource(44156U);
    msg.setSourceEntity(179U);
    msg.setDestination(2957U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("MRKMDCEROYQIKPKTNCEIXCBPYWKWUKMFLSSOLXPXTHVCCGLQYQQDGJOXRTIZBOZGWATS");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 41794U;
    tmp_msg_0.control_ent = 167U;
    tmp_msg_0.timeout = 0.754545422041;
    tmp_msg_0.loiter_radius = 0.155558110623;
    tmp_msg_0.altitude_interval = 0.315695793137;
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
    msg.setTimeStamp(0.169903372949);
    msg.setSource(50308U);
    msg.setSourceEntity(10U);
    msg.setDestination(39992U);
    msg.setDestinationEntity(3U);
    msg.maneuver_id.assign("MWOVVCQNQWGJJUAVWZEKSTZFYNFZKPUPQSBYIKKOONXQUIROEFXCDJUPSXARTIQABAJAYWSTUFDSDNCRFQPIHVNGIUHYYHMHEODTGTHWETCMYRFEXOCTVRURODOHXNLWVZBGCXZBMJUMDNGCBVTHGSDOBEKKMMXLTZRRWPUACHLYNB");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 24992U;
    tmp_msg_0.name.assign("SYNOELTWCHRBFZJGHVXZOTEICOYWCHVBOFWSOJPQNLXRUJHKOKIKCQWMKODFRWQHEXASYGDDZGTQTBPZQVSSKMRXOGPMCRTAVKUHVAXQVNCHPYKBLDMGMPVVTLFYULSSIFREAUYBNQADTUMOMDAXLVSKFQEBACZEBJWDPIGLLNBZXQIMJWGUUQTTPXWTFRBZHXIJPUAK");
    tmp_msg_0.custom.assign("XMCYURGBPXAXIEWFJQTQCVYRXHOXXTVIPDYRMYWJCMUREJSIIVVWHLTPDIAKUDJZIT");
    msg.data.set(tmp_msg_0);
    IMC::EmergencyControlState tmp_msg_1;
    tmp_msg_1.state = 47U;
    tmp_msg_1.plan_id.assign("UBEVBQXTZKVNXJINDAPRAVRGSTDGFRMZKCVPIQGTESOJPUDHBWSHJHFYUYIQJQEUATLXETWVOFNJPMZSODWFHVWBGHHPBQVCYEEMZLTJXVZCBLOTFAWCQWLLMOURNXKEAYZIQCSYEVMZNFSQERFUHKXMDLGIVCHBARZOXJRLPGGDHQOEIXWFGPRBWGBNHXANIJT");
    tmp_msg_1.comm_level = 95U;
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
    msg.setTimeStamp(0.203697172439);
    msg.setSource(45594U);
    msg.setSourceEntity(50U);
    msg.setDestination(23514U);
    msg.setDestinationEntity(178U);
    msg.source_man.assign("QSSMBSJABBILFQTEXWUUOJQCUFMCQFGZMOPRRGJISKUAWAIJZSLVLYPPVFHVOSUWGKNSCHBTXQCJAVGIYNENLZSDOYBPVLAEJUXBPWQLGNZCWFJHIRJOLFSGHWMCLVCMYOHIWMNKWTFCEIWTNHDFBTDPVDQGGYAZUDMGBTDUJMHYZIAEBREXKHHYRXODQTCYMFERKVLNLUVAHPEKQTFQKRNDKORPDZXNZNWJUTPMCKZPKABYOXIERVXDYIX");
    msg.dest_man.assign("SLFYWLXTJRNZYQPZRNXEUJENXUYKHTMDIHSCYVBRDJEAVXSDXHTVPBOFOQLNMEMOTSYNOLJVQPEIJTOUZODASGGX");
    msg.conditions.assign("KBXLAFGYDAWEVXLHBESBYTERJMCEGDDGMRYWOARYXLVFWQIFUREQLISGCRZXFFYYSZDUKHTIARWXPKBWWKBTDXEHVVTJJBOXEIEDUOJNKIHTUBKNTVCSDOIUMBAYVYPYPNUJQCPNURKGCUAQWOFXQIJUVHPCVOZTHTNGLRMNDHOQPPFZKEWZHLNRMLJDMIMKYZGQZCFHGCZLBVGHSNTJRJPSTBSOLWEIQS");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 37321U;
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
    msg.setTimeStamp(0.536380789867);
    msg.setSource(47766U);
    msg.setSourceEntity(33U);
    msg.setDestination(64737U);
    msg.setDestinationEntity(116U);
    msg.source_man.assign("YJPTMJZBNSZYOCKZMRCECMLIODHYPVYWVQGENF");
    msg.dest_man.assign("KCDWEIDHCLOAXNUONUXUACTYUPOSJHGPOWCGZXYVVGFSPVGNBKGLGAOVMJRYDOIKOHPGNXTIE");
    msg.conditions.assign("QBUSTAWNPDSKPIJWXBRNAVTVMJOEGARPEYTRAOTDXGPVH");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 68U;
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
    msg.setTimeStamp(0.713045364087);
    msg.setSource(61960U);
    msg.setSourceEntity(43U);
    msg.setDestination(59439U);
    msg.setDestinationEntity(185U);
    msg.source_man.assign("TZMRJRYLVWHSVZIZPOIKVWJQQKEKPFQJVJWOWFJPFCILXMOKHRSTMGUOYMGGHCHNBVJPHVUWLZIQ");
    msg.dest_man.assign("CHOYBRUMGUKTOYMOTXMVSDNSFSPTGZZEWQRSIWYEXJYFPGWLZMAKQZHTKIVBVXTUREMBAVBGPSNRIBQBQTELAOLGDHIJCZFCNEYZQDMBGPERWZRURMYMVAHUPQAEAGPTTHQCFXDZPBCUDNZGDOSAJKXVJVVMBAGOJIZSFOAKINCPNWUVQOHRQUDUHLPWJNJNHEJDKKIXJLAFWILUNHIROWSFYFBKCDWDTNWGLITVKFLCJLYMECHQXKXFRPXY");
    msg.conditions.assign("NQLIPPRXBZHPPLCYOACELBTPFSXAOKIYQOYJRDWCVKKIZKUNFGXYLDXJINRSJLAYCKWWS");
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 243U;
    tmp_msg_0.status = 138U;
    tmp_msg_0.range = 0.483629405377;
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
    msg.setTimeStamp(0.536422527139);
    msg.setSource(18534U);
    msg.setSourceEntity(17U);
    msg.setDestination(41375U);
    msg.setDestinationEntity(32U);
    msg.command = 214U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DJESAFGEZZXPSMIFRQBSQKZIZLJWDVNGWMYTTCUMXXGKCPCWXGEQQHAVLYYPESHNQNIDYUFQKLEKWGASRFCGNJOJWORULFHCWJLLNPFOROBWPTUPBREZBQQFOYGNCKTIVSYMIJFRGYBDPFAALECMAYKOOZAKIBHWELTODMMQLHKRUIKXLKZZMVFUYHHGOQPPXTAEMTIDCHMRBYNNHDUXRVXHSDZJ");
    tmp_msg_0.description.assign("AXXUFJFJHBFJBWMDTRYVRGXHQBYEKTBJMLXNDAYILOITDYFMKTFOSCPRQMCHTHCGFEXMTIUZIVZASNFLCWWPCKFMEAYKDLSRWVJGWQPGBTODLZAHUKCZKRDREUWNQCTNAGIXKLEIDOKYXJHJERSAMNKXVMFRZDQVALSBODQGVYNPHHUYTPGSGHQWNVZOXAMHXBP");
    tmp_msg_0.vnamespace.assign("REDXOSBAPQNYEGDWIWYQCLFDPYLAPLNUWQTSPOMEXHRPHHBXCNFXWKQGQZYZJAMDCXDGCSKMEHLBKMRKDMJPRSZIHNDULFFESIGXTLDEYVFBEPFPCWKTRHLUZBGQGZPXRHOAZCTJMJIJTYAVDNHNQOATRRSVIZY");
    tmp_msg_0.start_man_id.assign("QFQXYCAKKPALFSQGDEHVAKXRZBIXBEGKRRPDRDICRLFGXJPTEIAQASYGCTYRACBHIXFCUTSVHVUSQMOYLZVJAPVQEKDZZWGZYHNHLORUJCRWIFXBNXAMPLTJBMPLTGIZISYGZKOWGRYVRNMCZCXVVODOSMHUTY");
    IMC::RemoteActions tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.actions.assign("VAZRHNCVZLUXFPTOCBRFEUZFGYXOHRGBLFCNIDSBWKLVHYCUACJLKDYFUFQWPKRXJXPUPBVPNISOHDRIYAOEUTRQRSMBV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::SmsRx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source.assign("JBUPAEUBPZCDUFVDLYLJIHMROUOTJNNEEVESAHIALMMLTGMOXFNYEZRKIWXZKCFOYVIQSHSPCAAOLHGUYDAWXYBDWQTSTCJIXFJIBIGMNTDDUXLABWWPWVPVWDHSJYYQZRPT");
    const char tmp_tmp_tmp_msg_0_1_0[] = {106, 100, -78, -76, 33, -55, -84, 87, -27, -32, -118, -126, 124, -87, -40, -111, 119, 56, 91, 25, -69, -79, 40, 83, 61, 64, -98, 110, -86, -89, 50, 0, 50, -74, -19, 7, -66, 28, -63, -46, 47, 33, -126, 80, -95, -103, 112, 17, 65, 101, 87, 67, 118, -100, -62, -59, -27, -84, 85, -51, -124, -104, -104, 92, 61, 63, 100, -51, 0, -2, -49, -88, 63, 111, -125, 72, 15, -57, -108};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
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
    msg.setTimeStamp(0.970347940438);
    msg.setSource(41169U);
    msg.setSourceEntity(231U);
    msg.setDestination(1906U);
    msg.setDestinationEntity(25U);
    msg.command = 229U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ATPLWZMLKPIRHKGGYFVOOFOIMOZKSBFHUJEUWPWGEQBJRXGLTNWKDVQFZBPDMJVBZMEPIJZVTDYGMOKCXVAQCAJSDXFTTYMHSVETYOQWUXDQHVJTNCKAJNSAOGSIEUPAHUDZUFXHQFERLLXHLFGLRKELGLARNLRSBEQDYOSXXRWUFCXNMKTUIPKYDIZPGSRMQZIJYWEBOINGIWRKMCEIAQTBYDUPCJCNZVBVHPNANWABFWJSSCDTCN");
    tmp_msg_0.description.assign("YVMJKZGOAIZYTQFPVNCJZHDVOIAPRENDFSXIMKCKPLEGRCNAXLDYCJFIIHNAQGVZMKBCEJWQXSNISQQYMVTQVJCVYGEVGVALBRYYSTRROIBBIHWGAZUBRJSUDDGVUIBLTCGXJHLBAFKKDKBPCRLFYFIPUFUNAWTRUTNJQNPO");
    tmp_msg_0.vnamespace.assign("DRYWUYNOJAADDPOHILUCONIUINSYLXQKCUTBCWKKGFCUQOVNZTHBJTSNXTJFKVELNSYRBZPELJIGYEXIPHKQTPDVGKNYQSZOBNFYJRHQMYVWXPMHUSAWFZSACKMFIQZFEMBRXLDCMJJMIPTMT");
    tmp_msg_0.start_man_id.assign("STOXGTDFNITDJQBZVURCLUPDYTOUBACITUZMFNEVXRUYCDJKUMGODEFGSWWZYKGESSKDJMWSHATXQPMMIDLXFGBAPSJSMIEHRMAYKQXCZKBVHXNPIZAZRAKWXFYIMTNJPJHBNJSIFOUGGRETWPBFXBAAFCDTOYWJLXRNLUOHRQWZBICLDWVNOAQNYYVLGZHHCNIELWLCXBPMWKV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GSUOMLFXCRYWVXJMGTYCDZPNQCHDYAMKXGZHNFCHSJZYCGEMMGXFAWIQLIGDINSWLAHATBNCQYJEAVTSEIHRRPPGSZXQYZJELWBPFBBFUKCKVOVOFWKSBRROWQIWELTVTSNXKIIIEVDJZBVTSVATLPOOZUSRUNZHJMONZL");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 57767U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.516928792057;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.21868939675;
    tmp_tmp_tmp_msg_0_0_0.z = 0.409092001853;
    tmp_tmp_tmp_msg_0_0_0.z_units = 13U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.381802836362;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 223U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OUIOLKSOBUKCPJQUQWWPOGAEZNVDVFBOLFUEQXPKDFVZDHIPLSKQHXFSBLJMTWXHLGHEHJBNXVMWESXKUACQWYPMZJGZYSLTRXAZVBJTSQWGHLYVCRIHMNTLARXKBZUQFPHAIHRYWGEKRLMQBCGDQJIENYZAIGXNMPYHUCTODSDONZUZFEJYQRYMLKJNTK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 43566U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.554314980733;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.247576852567;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.0706917461763;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NJKGXGGZTPQTVMAFFNTZWPAYVICCZHUCWBTGQJMNIJAIM");
    tmp_tmp_msg_0_1.dest_man.assign("YETCBFHSPWDRJMQKVLEHNBVIHOIGMOBBWLMBORODUDANJNHAHPRVWYRRATJSAKLIDTZKSGKLXUCFMUDSGRAFFUOMQDVKJSETCFIBGDEPGR");
    tmp_tmp_msg_0_1.conditions.assign("MHPOFDNDTBSPZEWUHFLAYPKHQCLJMKYIARDXITRUAFDWYOJQGQKKNSGDEFYOKPJDQTQLTYUANJIGFAJEWLBAXQUWLRCKFHVZXYONITCPGREZSMEPWYZOTQUZZGVPYYAFZSHEBXJSFWLBXMIDXBDURMRWQXFOCGGVGIXMOCOYGDRCQCUSJPFSAKRJOTWLIVKN");
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.574278511754;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CoverArea tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.66171325153;
    tmp_tmp_msg_0_2.lon = 0.901860632385;
    tmp_tmp_msg_0_2.z = 0.261623084193;
    tmp_tmp_msg_0_2.z_units = 166U;
    tmp_tmp_msg_0_2.speed = 0.111457191931;
    tmp_tmp_msg_0_2.speed_units = 101U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.873931712698;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.630382480652;
    tmp_tmp_msg_0_2.polygon.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.custom.assign("ADUFZYSJHCOAOCZACQJUKDSUMERWWMDFIXLESBUHSGPCTNMEDVFBUKWMYACMAUBHGHFTITZRTYBJSOTLZEINMRTXFFPXNLKNVPNKVDYJLBXTUVCUJUQGPEWSATDXYHHVWQXLQZFRUNGPZVIQRFVFPZLHKVYMTRGXTLVYBBGQWLEPHWVONDSBHNQX");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DevCalibrationControl tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 155U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.156215323006);
    msg.setSource(25478U);
    msg.setSourceEntity(203U);
    msg.setDestination(7203U);
    msg.setDestinationEntity(24U);
    msg.command = 160U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MSPRUHHYBEVKAVUHCUMXIZMSLOTPYSKOAMADYLYLSOCFYUQWZDYLFXAKGTMRJDRZABXDJBAQJVHRETWNMGERCZTNUVVQPGZCOVWIEBRODGLH");
    tmp_msg_0.description.assign("WIGDDYYVGRCELNFJQGIMJZVSHYONTSHZEBEZJWCAHYSKONSFBUKFYCOELNYXVPPLESCSVNQRTNWAKATRJJRKAQQNVGPLBHFLSQTJSMVADDTBIHZQFBOOQDVXZQTUOVERNWTYKFAXLKYLMMSUUCXDH");
    tmp_msg_0.vnamespace.assign("IFJVZSIWKYKXJVOMDHOVUGENCMIZLSCDOVQTYBXVEPROZKGCYDPDYWBBFXBPMPAMCAWWJDYVPAVNCERUOXYGFJNLUSUABHUSYEQXIIDGJXJBJTNVKMECWSVEQTEIWNRLBXZSRVKQCCSGGIAFANOQQKXFRQLNFAOTLXMZDIQWOYTLFIOBTMHUHRWFPKZTEHTQJLUMDA");
    tmp_msg_0.start_man_id.assign("IAAAXEVCTPQQIJVMSRDNHPFPITRMZFPUMLNMIOAFDQBGECEBUGMCLPGEUBZQGLTSHDWQEGEEPZRTJKXNZXMORFVKBUSNHJKCKWBQYWVCZGSSFJYJIALRWJGFHGCJSFBAVYUILQTRNUNWZMTODBPEPEHGDZDUOUSHXMDKJSRXKAGPPMOLNTFKCWOYUBKROZWEXRWHKOQXNLYD");
    IMC::AngularVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.0737152867734;
    tmp_tmp_msg_0_0.x = 0.245307751512;
    tmp_tmp_msg_0_0.y = 0.457881554023;
    tmp_tmp_msg_0_0.z = 0.736986033807;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0221508766726);
    msg.setSource(54252U);
    msg.setSourceEntity(180U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(223U);
    msg.state = 52U;
    msg.plan_id.assign("TALDYVDZAMSDHPIBXUQYCGVYHSNEKBDSSZZKVRXCMWBBIEHZOMGQVLGHLIEWOFBPKPOXMDXPWTNRHTQASXJAINOXWNDBMOCSUWRPQRUBWWHGLMNRZFHKPCTZMKUJPFTFADIQFIJFCTHFUOLPYASJZNENDSERROLMFRVXCYGIYEKQUUCBKGUZQRTXPNMAGJEKTVILYSXTJBZCUVWUDIWCEODLKOXMSKWCZJLQVJAGBVFQJEGYAHPQ");
    msg.comm_level = 195U;

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
    msg.setTimeStamp(0.524267622974);
    msg.setSource(42750U);
    msg.setSourceEntity(227U);
    msg.setDestination(31539U);
    msg.setDestinationEntity(203U);
    msg.state = 81U;
    msg.plan_id.assign("SLLNWXFHIQEUQHOAPKLRRNMSEGMLBCZVYKHEDGCKGSZWUQFONIWBZTMFMKIWHAUYMOPIJVONZQZBACEYCZORWNALORYDBCFCWRUTVZXPBBQITGPDJUKFTTJHRGAXAXPERFHZLQHFMSQEMXBUSUSKWLMNKPKWHUDDOPOTNPGXYXPIBCZAWRYDIXIBLYAEADGILJNXJJSNUHWGEVCAJVMQVNYKJEJDGCIUPSRFVDEOYGMZOQLXTRTQ");
    msg.comm_level = 241U;

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
    msg.setTimeStamp(0.892222117142);
    msg.setSource(10883U);
    msg.setSourceEntity(229U);
    msg.setDestination(19115U);
    msg.setDestinationEntity(118U);
    msg.state = 107U;
    msg.plan_id.assign("BLOAKLZYAPSFGPLSCWKPVQQTQAAORVIOAJGYJHCRDCEC");
    msg.comm_level = 251U;

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
    msg.setTimeStamp(0.992633923501);
    msg.setSource(45984U);
    msg.setSourceEntity(54U);
    msg.setDestination(42031U);
    msg.setDestinationEntity(82U);
    msg.type = 116U;
    msg.op = 98U;
    msg.request_id = 61593U;
    msg.plan_id.assign("OUBDAOJJNIIQOKTAMFTERRILUBRJMBBIVZUPGXMUPYEATUCBPGJYESLRLECQQEGVMSNOAASKIPOBPLAZRPDAZTFAUOXHXNAPWDJJUMMKKIBZVEFVNYYGLCWCUDZPJWUHINORQNHECQPCWMXHQBZGDBDRMHYWNSJQGWVLVZBFVYHXXWYHCJLFOIHVKUSWAHOIGZSVNJEQIWKMKFZYXEVOQZRDCLKRSYCRTEFTCTTSSMQDDGGDFHSW");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 4018855144U;
    tmp_msg_0.messages.assign("PPSQFYYHIWGOSOPTSNONBRDYHEIKGXTLNZHDHOKYWSQOUAZJRILBTUNPJSMVURDHNNJQQPVYQGKAGXFFYIYCFFSKTDZCVVMZCNQXCABKRRWKMKPLYMLKPBTQWMOWKVPOEWOTXAB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WIAUMHDYKEFGJSQFCRMCJWLHYDQIBWXXCVPVCJTXBMNDLBSPGRNOMFEFEAJSXYBYPPGXLETQPJTQUAEQAEWQCSRXCYVVCNKLTNKHCNJYLSYEOORAFVQWLZDJCXRAWUSKOOKDPIRBMOOWTDNWZHYUTUFQZBBSILGFQLGKLADPXNDHD");

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
    msg.setTimeStamp(0.893899051922);
    msg.setSource(20524U);
    msg.setSourceEntity(215U);
    msg.setDestination(38190U);
    msg.setDestinationEntity(236U);
    msg.type = 53U;
    msg.op = 251U;
    msg.request_id = 25086U;
    msg.plan_id.assign("WVMZZKUVPUMFEEKJNMULMOMSRITSYLYJBPYXKGDRVXAGVXFYWNWKGZUQTALDTORGAGUBXHWEVKDSXJCTCRCZMBUJWPFBEAYQXEYQUMCCJKGFOLQFFSBVDDVMIXDCSKYLEBIUMHZSQWWRQRKFTJWIQNAAGFZXRNNJONYOYASUONDFOWIHHXQMXNASBZNUIKKHTLQSHGRHIPTHDZJCPJ");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 42U;
    tmp_msg_0.step_number = 227U;
    tmp_msg_0.step.assign("FMIUNXZAZWOOJDADOSNILXYULIELYEQLLILTQWDPSCAMKXMEINBXWSJHDVMRIVCHZOJTZFFQDRLTJXJKHPOFCBVWEYKAUHPSPFOAAJQJGHVDHIZRVBWZMKSTYNTEURSQNASRORRBRTHRNBEDBMLCIPZATYCGAGKFGCBNHUKCELNVIZWKEBWNEVTSMOUQXJZYQSOZXUXGJSM");
    tmp_msg_0.flags = 56U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GQQHYVZXCBBXJUDQWQCBRGHKZULPNDQIEMVDTJPIMZTMCDINQGJIFJBYJOOHEYBXSPTUHAGBXDCWLOMNVHIHKOUIJTDYRFFXSXVGGEKOCGZAQHURXLRUNFHZXWSRZJYTPPTCOKJSZQGFFPCLZVFUVINXATDEAMRLEASMIKZPYMPYOYOHSYPIKNRLMNAKWWJSVEFEXWDFQHJRLOSAGBWLMAUMFSAUENWRQKOELYE");

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
    msg.setTimeStamp(0.2889755919);
    msg.setSource(46263U);
    msg.setSourceEntity(155U);
    msg.setDestination(11222U);
    msg.setDestinationEntity(245U);
    msg.type = 146U;
    msg.op = 177U;
    msg.request_id = 2093U;
    msg.plan_id.assign("MBAXSFDSOGZLCGQWMSXHHYNUKGVIFIPO");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.169432821262;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AKHWGCNLIFMLPCCBVYKTUKBSPEBNNSWWYRTJMZGJVEPOQLCRUZZTZEIOFHRLJDHZXPAWTQWHBFZRCMAIXIJTGYOTCUADAYYSDODVNQDZUAKZKICEWJWRBPFKMNXRRSPGIQOSHBWGCOJJXTJMALORHGGKBXCRVHYTTXDANPFCUUQPJVVLXXQUDDXOTQANUKZGFUVBLIEBNIFVDYMFKMEHISIFGLWQSYMLELSOMQSEAVE");

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
    msg.setTimeStamp(0.169343744538);
    msg.setSource(38123U);
    msg.setSourceEntity(59U);
    msg.setDestination(61952U);
    msg.setDestinationEntity(50U);
    msg.plan_count = 37048U;
    msg.plan_size = 880783989U;
    msg.change_time = 0.223559214551;
    msg.change_sid = 54942U;
    msg.change_sname.assign("DZIPSUTWJBBENJBMSDHAKNVSTWYVNLKCMNADCCPOAVHSACCRRNROIGUUJHZJRUQOMPVSTKOBOBBTYMEQFHNJXVPZMOFDZMLSLQVECWDNRSTXXYPTQK");
    const char tmp_msg_0[] = {43, -5, 112, -101, -123, 16, 73, -4, 25, -97, -93, 5, 12, 19, -67, 73, -89, -72, -44, -7, 35, -123, -53, -20, -83, 98, 88, 87, -128, -27, -2, -45, -56, 100, -46, -89, 88, -81, 96, 91, -24, 84, -51, -124, -77, 43, -22, -115, 35, 68, -23, 56, 78, 47, 119, -42, -67, -114, -68, -33, 96, -8, -82, -48, 76, 48, -68, 117, -38, 43, -64, 41, 33, -39, 74, 39, 100, 83, 46, 11, -59, 64, -23, -110, -111, 115, -61, 48, -103, -100, 80, -27, 98, 31, -86, 6, -41, 2, -122, -60, 53, -75, 74, 64, 64, 96, -53, 83, 75, -115, 76, -72, 121, -14, 67, 116, 30, -8, 11, 87, 5, -5, -112, 54, 109, -121, 117, 117, 19, 42, 60, -85, 49, -11, 109, -104, -97, 11, -82, 70, 55, -30, -46, -25, -83, -82, -39, 100, -83, -110, -18, 3, 14, 64, -67, 80, -5, -89, 21, -35, -42, 88, 84, -112, 62, 54, 19, 66, -116, -79, 77, -68, 22, -123, 120, -119, -45, 63, -82, -75, -65, 24, 3, -105, -58, 34, -46, 93, -6, -110, 20, -114, -97, -92, 5, -96, -26, -72, 119, 71, -114, -26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RDSSGKPIKLRAUDJEAGKAPLYSZM");
    tmp_msg_1.plan_size = 43609U;
    tmp_msg_1.change_time = 0.248211830844;
    tmp_msg_1.change_sid = 29905U;
    tmp_msg_1.change_sname.assign("RRQTOGSENTWGEHQEPNAJRSOXKCULNDYUWABQVFLUGCHETTZVQKFKUJRGIXCZSXFRSTNVWDLKLSJHHMFAYNHJPUWWFITNMOAIFXRRWDHFPBYDIJSYKYGFALYZGAFQKBCEEQBBOYXILMBVRNUQJYETJACRVWOWIZMDBTEWXYGZUVCPIEJPORPNPATVLMCXBVZHSMKDOQWHNEXHKXLQCIMMXKDDYOHTS");
    const char tmp_tmp_msg_1_0[] = {-58, -25, -68, 62, -1, -29, 40, 124, -92, 14, -68, 91, -40, -109, -83, 109, 104, -76, -102, -63, 51, 92, -109, 84, -38, 3, -90, 126, -102, -95, -55, 64, 18, 16, -6, 44, -68, 110, 116, 72, 36, -109, -52, -104, -24, -22, 5, -122, 99, 12, 17, 13, 51, 58, 29, -101, 99, -119, 92, -28, -114, -35, 50, -56, 19, 23, -82, -64, 20, 89, -122, -75, -103, -83, -5, -78, 72, -37, 41, 76, -47, 19, -18, 95, -25, 23, 35, 49, -54, 81, 0, 17, 10, -39, 10, 126, -116, 43, -90, -21, 49, 61, 97, -5, -108, -128, -39, -33, 79, -64, 39, -27, 18, -64, -63, 30, -31, -108, -38, 22, -76, 110, -55, 6, -110, 45};
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
    msg.setTimeStamp(0.204637772257);
    msg.setSource(6469U);
    msg.setSourceEntity(243U);
    msg.setDestination(5155U);
    msg.setDestinationEntity(206U);
    msg.plan_count = 3689U;
    msg.plan_size = 701318535U;
    msg.change_time = 0.455087754858;
    msg.change_sid = 50889U;
    msg.change_sname.assign("AAYHOLZLURCMXDPHUJFWVQNYTYUAFVRVZYGSVFFCGZRUTPMIMWEFGMTHTYXJSOFJNAEIBIQBLQBOBLDBGZKNMFSLFGXYGL");
    const char tmp_msg_0[] = {-38, 12, -100, 124, -96, 94, -25, 47, 80, -54, 14, -122, 110, 95, 32, -9, -70, -13, 3, -2, -87, -27, -58, -62, 96, 45, -79, -16, 48, -109, -51, 40, 26, 121, -52, 107, 83, 4, 109, -1, -9, 66, 104, -53, -35, -96, -31, -43, -78, -87, 92, 101, 113, -118, -63, -54, 76, 78, 39, -119, -114, 106, -106, 63, -115, -23, 111, -106, 123, 7, -65, 36, 109, -114, -92, 34, 15, 109, -31, -45, 63, -120, -55};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ESVIWVKUOMOFQPWLVJAYRALJKKTMYTOYDIKNJZDIVWTKUCWMJJFXGZRKZNGQXLNNVSFIJCEFAPQTAGQCJXQELTRYRUMYEXZPCXJPSZAMMWQCMBQQHTKDNBKTFCTOBFPBDDAESNTULOLMSSCJILVLAFJWUVIPBVEMUQBUURIXDRYWYHDTGHIAFLCHBDVQWHNXXKEFNRVGWGSHBPCIMPCHASYSHOPEOOEZDWAKYUZENR");
    tmp_msg_1.plan_size = 5427U;
    tmp_msg_1.change_time = 0.0226545861719;
    tmp_msg_1.change_sid = 21456U;
    tmp_msg_1.change_sname.assign("TBMUJRYXAELMFMNJWPFCBDNVSJIYLDHKHKKJYQINRWCKEAAELNOOU");
    const char tmp_tmp_msg_1_0[] = {35, 68, -85, -119, 85, 63, -28, 83, -27, 78, 124, 107, -54, 58, 82, -28, -118, -112, -44, -22, 39, 83, 118, 24, 16, 91, 64, 61, -64, -119, -93, 105, 77, -103, -84, 17, -60, -127, -2, 19, -108, 16, -61, 53, -65, -53, -78, -27, 0, -120, 46, -56, 69, -57, 91, 118, -31, 124, 107, 108, -39, -34, -58, -70, 44, -87, 86, 27, 98, -56, -84, -27, -96, 60, 96, 21, 19, -10, 97, 106, -24, -27, -78, -125, -103, -74, -92, -41, 94, 15, 48, -101, -44, -90, -36, -111, 101, -31, 83, 121, 98, -69, -39, 100, -72, 93, -69, -115, -67, 61, 105, 112, -37, -64, 11, 56, -99, -23, 101, -69, 39, 4, -62, -30, -48, -9, 111, 12, 120, -113, 64, -88, -73, 102, -15, -58, -9, 111, -104, 10, -54, -77, 104, 75, -104, 46, -33, -2, -124, -21, 67, 33, -36, -107, -110, 26, -55, -62, -105, 0, -120};
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
    msg.setTimeStamp(0.308012135486);
    msg.setSource(60628U);
    msg.setSourceEntity(51U);
    msg.setDestination(37902U);
    msg.setDestinationEntity(14U);
    msg.plan_count = 38187U;
    msg.plan_size = 958750759U;
    msg.change_time = 0.954475062333;
    msg.change_sid = 57439U;
    msg.change_sname.assign("GQXOKHMZCKYDIAJDKHXIBFZYHXSWQOPPUDOJGEMQDSBNVIXGMFYORJRCTKNBUAALDVCBOZOPVTHRY");
    const char tmp_msg_0[] = {-55, 14, 64, 68, -87, -17, -127, 88, -87, -20, 125, -29, -41, -99, -106, 104, -80, -3, -76, -20, 38, 18, -48, 67, -80, 87, 124, 93, -39, 81, -125, 72, 25, 43, 19, 60, 65, -111, -6, 99, 82, 35, 91, 97, 28, 32, 16, 55, 15, -64, 66, 8, -115, 23, 1, -58, 36, 81, 94, 46, -107, 81, 122, -26, -25, 116, -55, 72, -106, 115, 1, 13, -74, -16, 6, -30, -101, 1, 52, -118, -5, -62, 86, -40, 58, 51, -82, 52, -7, 61, -22, 69, -126, 62, -108, -9, -19, -19, -4, 89, 123, -2, 85, 38, -68, 33, 44, 75, -45, -123, -112, -92, 46, 25, -46, -116, -69, 22, -107, 103, 107, -97, 42, 48, -120, -99, 57, 10, 34, -70, 74, -120};
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
    msg.setTimeStamp(0.325639258789);
    msg.setSource(22124U);
    msg.setSourceEntity(77U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("RYSRLYBNUEOD");
    msg.plan_size = 6403U;
    msg.change_time = 0.54961508316;
    msg.change_sid = 15217U;
    msg.change_sname.assign("KBZELBJTTIOVJNTZGJMQMSECIUVHGZTNUHOQXHKOPLCRRYQTCUDQBIKLQXOYKAWRRSIGITZDGDEKRZDDPJMSXWLIXZPPFOUNDCIJPIHBFPYUDHAFNXQAJQIFGWNWRNLBSRCUXGESATAOWBXQOOLTFMZEAIDUSARMVNKVVMCLVFFEGTGWSELMQPVWYEJNSYPYDLWAMXHPJFKUYVYZYUOVWFXHGBHLBJUCCKVMXO");
    const char tmp_msg_0[] = {83, -27, -98, 35, 85, -49, 16, 58, 12, -112, -94, 0, -54, 94, -109, -48, -126, 4, 59, 49, -91, -23, -49, -69, -124, 58, 122, -29, -17, -9, 36, 113, -122, -41, 1, 53, 75, -94, 20, -27, 86, 82, 32, -92, -102, -85, 81, 73, -69, -100, 0, 90, -1, 48, 10, 12, 120, -56, 102, 120, -101, -53, 16, 17, 78, -9, -102, 93, 92, -37, -50, -34, 87, -12, -44, 71, 44, 123, 115, 31, -109, -72, -33, -86, 117, -124, -21, -24, 87, 14, 66, -33, -50, 73, -51, 37, -20, -74, 54, 54, -119, -13, -101, -18, 66, -103, -84, -17, 89, 9, 104, -24, 5, -59, 63, -43, 49, -10, 5, -80, -81, 101, 62, -17, 33, -7, 92, 24, -101, -9, 89, -126, -86, 69, -111, 80, -45, -115, -19, -17, -45, -37, -92, -25, -94, 51, -101, 23, 2, -22, -96, -47, 35, 39, 29, 111, -41, 95, -122, -7, 97, 20, 106, 125, -116, -68, -38, 4, -105, 89, 94, -17, 5, -71, 42, 7, 57, 81, 25, -84, 93, -90, -107, -28, -94, -50, -111, -119, 121, 3, 88, 8, 118, 113, -113, 12, 112, -36, -12, -25, -80, 122, 43, 48, -96, -79, 22, -12, -20, 54, -57};
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
    msg.setTimeStamp(0.65241860755);
    msg.setSource(61129U);
    msg.setSourceEntity(102U);
    msg.setDestination(30947U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("VMFRUXBOVNLIGVBFYCVZXTMQHNABTALYSQIOEOWIEJJAOCGLLUSHPSWMRMSVQEUVGYMRJFWCLFPQMTJPIVHNYTBHRUOLWWOXYIGEKBIKAKFKTCNBDUZZMZHZSWJQGGXXLWABXWPTPHPEKYJMYSYNWRAEGQQENXBKLDDRDGTTANJGSARLMNDIULOTDPGFCCPZJZVNFJHB");
    msg.plan_size = 15943U;
    msg.change_time = 0.807367204259;
    msg.change_sid = 4679U;
    msg.change_sname.assign("LVSJPDMJOZGIAYIBQSWUIGKARLFDNQWFDTGNMEPAUYSPQDXCIBXIJHBYTKVWKTTGPYTHWTFRGHPUVBGCNELOA");
    const char tmp_msg_0[] = {-110, 64, -112, -27, 9, -38, 75, -40, -34, -100, 44, -1, -121, 1, 121, -39, -75, 97, 94, 87, 124, -60, 100, -26, -37, 123, -97, -101, -54, 24, -42, -14, 93};
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
    msg.setTimeStamp(0.987796705943);
    msg.setSource(26966U);
    msg.setSourceEntity(100U);
    msg.setDestination(25147U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("GEMHRWPSCKMYQWHCUSJSJFAATLMENNOJPXPFIEBFRZZZPQSBXXXHZLSK");
    msg.plan_size = 9237U;
    msg.change_time = 0.06488882731;
    msg.change_sid = 48874U;
    msg.change_sname.assign("VJXJDOMUMVOGKNDZGRKNIKPGFJAYZMMBWUXHHAJXGNCLMCRXJIWNGKLBTYZHRQQJMTR");
    const char tmp_msg_0[] = {-71, -87, 79, 12, 113, -99, -112, 28, -57, 49, -22, 113, 126, 36, 97, 67, 119, 3, -82, 120, 60, 61, -7, -37, -51, -70, -83, -92, -41, 23, 94, 55, 97, 117, -101, -10, 23, 41, -15, -27, 60, -33, -86, -1, -118, 96, -28, -22, 12, -118, 19, 3, 119, -18, -86, 78, 11, 126, 41, -45, -75, -102, -71, -33, 101, -125, 12, 105, 118, -96, 36, 15, 102, 38, -54, -60, 24, 56, -95, 7, -13, -21, 71, 49, -66, -92, 111, 2, 107, 101, -34, 126, 42, 37, 84, -72, 22, -24, -28, -48, 0, -61, -56, 64, 120, -21, 3, -21, -105, -26, 37, -33, -30, -30, -86, -110, 63, 4, 119, 60, -22, 102, 51, 69, -40, -88, 55, 75, -56, -119, 76, 109, -74, 51, 124, 54, 65, -27, 116, -108, 62, 30, 43, -118, -71, 35, 61, 5, 90, 98, 24, -65, -89, -16, -99, -96, 28, 102, -69, -17, 47, -38, -57, 84, 112, -125, -77, -122, -14, 109, 35, -21, -113, 14, 64, 99, 89, 18, -43, -84, 105, -128, 83, -73, -43, 24, -125, -115, -74, 124, 91, 46, -10, 11, -1, 80, 101, -127, 79, 24, -80, -88, -13, -22, 6, 28, -109, -92, -4, 27, 29, -80, -15, 91, 118, -13, -15, 13, -61, 122, -96, -75, 33, -102, -115, 52, -89, -24, 108, -73, 75, 99, -60, -39, -105, 12, 34, 116, -54, -41, -5, -72, -21, 89};
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
    msg.setTimeStamp(0.472512787627);
    msg.setSource(26722U);
    msg.setSourceEntity(194U);
    msg.setDestination(30600U);
    msg.setDestinationEntity(171U);
    msg.type = 122U;
    msg.op = 177U;
    msg.request_id = 57207U;
    msg.plan_id.assign("ONVTTJMLUGQMLEGFTGKOMATOYTOGHSTYPTZHLMNYEQMHIUBGPKSIJUOWYELVMRBGDAPXJCVPXOFVHRZTMLGFPWLUSSHHCCWYLUTNWYCANRQAFBVQZIFCKGGJKRRDKXOZKADFHBEPRCZIYXWPEUDQURDZWENMUEOPXAVHYJEXJFDSFBVDMAJFIIKB");
    msg.flags = 4295U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.754519829604;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UZMBMGBIQVZHULPSJJIMMTCTQRVEODXKEKWXFRFUUDMQDKZFXWMRFBVSCZNRBHCDVCSWRXIJZSGTEULCSZAVA");

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
    msg.setTimeStamp(0.894520986403);
    msg.setSource(50786U);
    msg.setSourceEntity(181U);
    msg.setDestination(57551U);
    msg.setDestinationEntity(237U);
    msg.type = 133U;
    msg.op = 39U;
    msg.request_id = 24994U;
    msg.plan_id.assign("QNNLIYEWVKFXRCMIDPLBTVPRICNWKZZWWZYADNBVYHOEJCGPCFGLUIJZDCFNJLUIEOAROXQRFTSMPMCKRGIXKSMWUAVNKMZJFF");
    msg.flags = 63844U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.741182958618;
    tmp_msg_0.x = 0.392310813846;
    tmp_msg_0.y = 0.638078034804;
    tmp_msg_0.z = 0.992665882815;
    tmp_msg_0.timestep = 0.609758645134;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FZITHBPLKFQGCONNQANODBPGYXZSXAQXFJLYRZEMIFUYZCVAURECLBGWILJVTJYYJSPVEGFYBPQLUPKOMHTMKXVBXOQSCPWTLFEKCMWGUEAUJYDDAWZIIREIZVZQMWFNCDDHZHHYRDWOPTQBCVJJTZONAKGXCTOSDSSGEISVZRJUKQBDVJUL");

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
    msg.setTimeStamp(0.305326017642);
    msg.setSource(60637U);
    msg.setSourceEntity(186U);
    msg.setDestination(12653U);
    msg.setDestinationEntity(119U);
    msg.type = 122U;
    msg.op = 136U;
    msg.request_id = 41945U;
    msg.plan_id.assign("DINPLYWCKCOFFRCBKTFQDNHWNXTUYKBYPUVOMJDSLEMZCUGGYJJXIVRUZVXQSEPIKOIPALXBUGLRZUSAYRFBXTLBATJBVHZNMXWKEAFIGQUDVAWJUOGWZ");
    msg.flags = 50473U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.930732121481;
    tmp_msg_0.speed = 0.688292509262;
    tmp_msg_0.turbulence = 0.297896776278;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PIFBJNMSYEEBXADSOUXGQVTFIRBOCOWAXTWGVFHCBASUCYJ");

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
    msg.setTimeStamp(0.371163704701);
    msg.setSource(15095U);
    msg.setSourceEntity(185U);
    msg.setDestination(44103U);
    msg.setDestinationEntity(30U);
    msg.state = 50U;
    msg.plan_id.assign("MDNEFZSVAKMPFIMNJXNEETZWUQWHKSTTGVOJSXYNLVKKRBLTVFDUYWYDUQPJJZXNVXTKDC");
    msg.plan_eta = 1031455620;
    msg.plan_progress = 0.376282177809;
    msg.man_id.assign("CPYEIRQKPCO");
    msg.man_type = 64909U;
    msg.man_eta = 1415579096;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.214993354696);
    msg.setSource(29996U);
    msg.setSourceEntity(246U);
    msg.setDestination(43156U);
    msg.setDestinationEntity(212U);
    msg.state = 184U;
    msg.plan_id.assign("LXUMRYKPVZOSSFBHIZKHKEPMJLIFPRFPBJQXQAQWLGAUNYXXKFLJYZRVTCDEFREUAWIEZLRPCUZDUHILJZAGBWBHTGHMIJNOCG");
    msg.plan_eta = -1101868343;
    msg.plan_progress = 0.395258642926;
    msg.man_id.assign("TBMGVJPERJMDRSQFIKIAIQTYYQ");
    msg.man_type = 62721U;
    msg.man_eta = -1490994930;
    msg.last_outcome = 21U;

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
    msg.setTimeStamp(0.863490799232);
    msg.setSource(44077U);
    msg.setSourceEntity(25U);
    msg.setDestination(46807U);
    msg.setDestinationEntity(37U);
    msg.state = 201U;
    msg.plan_id.assign("YVZZFFQSTGVXUMXDDNYJMMVREJGHUXHPCIARAUWBCRKEWUSSLBAXTBKJAPLWSODHLDSWBDCEAGJOSHLQNTMNFWEHQZHMBRUFTVKRJEUXBRFSMXOIRZOMVKQOUOVAHIGDNFBVTNXVIHNLBKKJCZDXGFFKJPPCTIJYQAZKQEOZIMUTLYOFCEVDYIWRLQXGYPAPPRC");
    msg.plan_eta = -482927183;
    msg.plan_progress = 0.553592765606;
    msg.man_id.assign("JFLHHHNPBRJWLEMVTNAGXMQWPPYDPZTHLUXKXTZWEGICNGGLDBTDRXTNALHMFHUDHMGYGNUOHBMGCMVTSDPKLGOYKDQIXAVIKEAGCAEYOMCXYJOIJZZVRYSHERFBCCRQKICCKRFNTZQQQMZJWLCKVOFTBJHABIRZJSQO");
    msg.man_type = 48862U;
    msg.man_eta = -1663309945;
    msg.last_outcome = 179U;

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
    msg.setTimeStamp(0.205499694859);
    msg.setSource(20924U);
    msg.setSourceEntity(209U);
    msg.setDestination(60752U);
    msg.setDestinationEntity(189U);
    msg.name.assign("QVIPJAHUGRBCITNDEYDZDPJSKCNNVAKYAUTMWHJMEOEVKYPWSQPRS");
    msg.value.assign("QLZRUSUMDSLSCYXBDZUGMDUJRTPMTNNALSQHPPAGLNUDBNUQVGHVEXZPHQZYD");
    msg.type = 107U;
    msg.access = 245U;

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
    msg.setTimeStamp(0.0982881203471);
    msg.setSource(26828U);
    msg.setSourceEntity(167U);
    msg.setDestination(33835U);
    msg.setDestinationEntity(229U);
    msg.name.assign("BLWBGCYTFUIMGMKEGFGAAMJVKSQXTHECDONOZTIORCGSRYIJDGOUJLHBHPWYVZOPOPXAOXRDBBPMBWSVPJJTKREZWCSQXURTILIKQTUVUFNS");
    msg.value.assign("ZHZLAWEYISHPWYSUOTCHDACTQRRVKFPVMQMWRNBSJAHIKVEGIYPEKIHMTQUYPLCCMENRXBNZUDFDEOHLPHBDWHXBAGDSFLOSFUARAODHZEIKMDGIVGPXICIG");
    msg.type = 42U;
    msg.access = 211U;

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
    msg.setTimeStamp(0.414279516086);
    msg.setSource(32346U);
    msg.setSourceEntity(91U);
    msg.setDestination(46836U);
    msg.setDestinationEntity(233U);
    msg.name.assign("NXPJICVMSAMLFMHEQKTSXUPQYZCOXEWVNLIDZCPRQSLNNFITZWPCYYUXZMGOFRCHCMFJSAEUGZKIMHUPYJBQBROXWPXVUDWKQKDVWMRJOHJNTUPTALSOSYFKQWGJBVCOJRWWNVAGAQBSBXENQNBYHGHIVDTMTKLFVLSCRNIMXZCPHIHZDOCZZSLLJXGF");
    msg.value.assign("TOICWQKVEJUJUHECHYSKCVAGFSPYIXWFPKVPBXWBNUTBVZLLDOPPQQTKIZOEGXEKXLWJYJBHZZACVPQXSOQGOKKLRNVEOPJMDIRDHZGIKWRAYBBMQNVNHOXXPSNILWODNNZSOWYQSTYTLCUUTAFZWRJEYDRRMZWGDCOZGJUM");
    msg.type = 42U;
    msg.access = 253U;

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
    msg.setTimeStamp(0.322193638609);
    msg.setSource(20869U);
    msg.setSourceEntity(172U);
    msg.setDestination(34021U);
    msg.setDestinationEntity(114U);
    msg.cmd = 13U;
    msg.op = 55U;
    msg.plan_id.assign("YQUYTSBFIGXDDBNRMDEQATEQHNYSEOLSSAYQRIXDFMRTGTAJUQLGZJBFPDNDDKPCCVLKVPRZWHCEUXWPAMYDHLWKZCXIAILNZCLOQXHEYEMQ");
    msg.params.assign("OEOQDVJKAHULCFJWBNCWEJATUDPXYSDHHGBPZAWBPUCRDVXFBKIRVFHVGINUAECONEDNMSYSOJYMVZWQRDLVVIYKXAFWITBVUQGBHGMQMPOGNLOLWPUEJCFJYNSRYFRQGZMTSNKLRGIRTSIZWPCYSBPXDHQBXQXKREUDTFAQDMZFCHWBRATJFJUYKZZNAXIYTWXULFZYCGTMHZPENHSLEOCDOISGARXILIJTMMXEKMNOBWJQKPSLGOUHKPTEKV");

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
    msg.setTimeStamp(0.433363727841);
    msg.setSource(11815U);
    msg.setSourceEntity(62U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(116U);
    msg.cmd = 241U;
    msg.op = 50U;
    msg.plan_id.assign("TOBGKLHZLNGELJOGRKSPXPIACZGLOEIKZDGCTXQHRMOWVMZGCTYS");
    msg.params.assign("INGNQYYPRYCLXMAPQYIUYQIOMKPMBYEUFGNJBHAKWVRNOQGAZKKQZLRJQOPMZHYFVIGLEXSWOCPECJIFEPVRUOTTLXSARXDWELVXSOJIXFQVRZTHCNREMGDZVXSHLMLPSCXZKBOVPTEUDLJFUCHAT");

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
    msg.setTimeStamp(0.749032266106);
    msg.setSource(32399U);
    msg.setSourceEntity(10U);
    msg.setDestination(16821U);
    msg.setDestinationEntity(76U);
    msg.cmd = 45U;
    msg.op = 131U;
    msg.plan_id.assign("RBCMWQUPIEFQMVJRPIRPWMPUAUFWOSNXGUQCDDSRIYCYOMMJHHICLZKMPSPMGOTVLQZPFGZEOCDEIEMXPDQDVZORINAXNDIYICGXVWNQTSYRBTJQRFUTWKSYLJIGWGKTYMEWJRXLBKHDTSSDFKTQZUZKXXKDGJOKAVUQETLIEAQGZAP");
    msg.params.assign("HGNDQFLZLZPTXWJJGHAWWYKJTIVAERNODUOFEVCXXIIYGLPXYBUYAFBZNLKYSTPDWJVEARAETJTSAPEFUS");

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
    msg.setTimeStamp(0.16021117667);
    msg.setSource(15978U);
    msg.setSourceEntity(61U);
    msg.setDestination(36290U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("NAXSZEOIQPVHQTZZDWSPPXLRFAQJWEQREXEEDGEPJHZLTOHRVYZSFFKSNQ");
    msg.op = 243U;
    msg.lat = 0.2749673442;
    msg.lon = 0.468841574503;
    msg.height = 0.499624913684;
    msg.x = 0.501391784756;
    msg.y = 0.0248312025233;
    msg.z = 0.617702843603;
    msg.phi = 0.399430152913;
    msg.theta = 0.590653777434;
    msg.psi = 0.406918720788;
    msg.vx = 0.818788948591;
    msg.vy = 0.344574386977;
    msg.vz = 0.809824007858;
    msg.p = 0.990848104871;
    msg.q = 0.181573121238;
    msg.r = 0.233559496216;
    msg.svx = 0.253288634077;
    msg.svy = 0.769911271658;
    msg.svz = 0.0956386169916;

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
    msg.setTimeStamp(0.472738300928);
    msg.setSource(60587U);
    msg.setSourceEntity(1U);
    msg.setDestination(63065U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("ISGTFCKRYBOVLBEUPKHDIBKNFKMWTQTDWDMTUPWNQURVVQLXAHTQQTPYZHIJWIVMXSJKHZYAGXNLJQDCPBZIH");
    msg.op = 64U;
    msg.lat = 0.348031984482;
    msg.lon = 0.61957026757;
    msg.height = 0.133294528159;
    msg.x = 0.931619663848;
    msg.y = 0.536895416793;
    msg.z = 0.00426741358019;
    msg.phi = 0.807636087559;
    msg.theta = 0.992138450538;
    msg.psi = 0.0367044262332;
    msg.vx = 0.381255327195;
    msg.vy = 0.0327781306019;
    msg.vz = 0.585990758609;
    msg.p = 0.627895232446;
    msg.q = 0.139785009515;
    msg.r = 0.289162662944;
    msg.svx = 0.560520493679;
    msg.svy = 0.302355087651;
    msg.svz = 0.180124098605;

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
    msg.setTimeStamp(0.313863811314);
    msg.setSource(26230U);
    msg.setSourceEntity(157U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(143U);
    msg.group_name.assign("IPNVEMHZFWVKXISPSQHRZADPVPCAOIIHZMSOAZJAXROLWXCYJOGGYZCBLQPBRXKAPNBWBOWFUUJGEARJZLSDWNGAXUNFTVKOUXQQINPXCHYTUUOBMVHYCEPMAAMESUMHTJNSEVFDDVYFLFOWDCTSEFCJCBNZGKIKNBYKWWTYGRDVIQOUMSWQILTSQXBYIDYJEGUBJLVRKGQJUTQRD");
    msg.op = 54U;
    msg.lat = 0.133025395573;
    msg.lon = 0.380774801217;
    msg.height = 0.653614249593;
    msg.x = 0.168241918104;
    msg.y = 0.288297840497;
    msg.z = 0.853786638338;
    msg.phi = 0.55417729383;
    msg.theta = 0.188130896788;
    msg.psi = 0.591152634216;
    msg.vx = 0.878719947246;
    msg.vy = 0.23185606644;
    msg.vz = 0.0928591442943;
    msg.p = 0.180551156194;
    msg.q = 0.203848380691;
    msg.r = 0.792218043247;
    msg.svx = 0.771918178566;
    msg.svy = 0.619429979821;
    msg.svz = 0.657498007109;

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
    msg.setTimeStamp(0.689939899236);
    msg.setSource(21488U);
    msg.setSourceEntity(128U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.82985698565;
    msg.lon = 0.637397759415;
    msg.depth = 0.76386428063;
    msg.roll = 0.828473783824;
    msg.pitch = 0.13552461907;
    msg.yaw = 0.80230986712;
    msg.rcp_time = 0.149523726867;
    msg.sid.assign("XVCZAXSYZXOZWANVCIZJSFMICNGGPRRUYWFXWNTJDKMBMWBSYKMGTVDYPETDONIMLR");
    msg.s_type = 47U;

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
    msg.setTimeStamp(0.0470104438919);
    msg.setSource(33117U);
    msg.setSourceEntity(57U);
    msg.setDestination(19864U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.708983007557;
    msg.lon = 0.138114530198;
    msg.depth = 0.154798392521;
    msg.roll = 0.867889259369;
    msg.pitch = 0.66595191118;
    msg.yaw = 0.0362142881044;
    msg.rcp_time = 0.262872207609;
    msg.sid.assign("FJVWUWRVMZBJXSBCKWCALOHVGUXZPATJNWLXSTDJQNZXHHKEJEOGTYMTRIIFDWEUUOFLBXDPSTONWFCBGRLLKNSQVNCMQDLLDUGNVEDBDIOYVRRROIEZCZMKQFKWHJENQCBCDAPUQIMNKOSUPYZFIOZBSJJSPVRWZWAHGURBVDSPYXGEMGITALQPVAXLNHIYNMY");
    msg.s_type = 194U;

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
    msg.setTimeStamp(0.85148538265);
    msg.setSource(23938U);
    msg.setSourceEntity(115U);
    msg.setDestination(44913U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.158101830248;
    msg.lon = 0.277360595694;
    msg.depth = 0.426744010912;
    msg.roll = 0.766214612711;
    msg.pitch = 0.412727310467;
    msg.yaw = 0.702326794025;
    msg.rcp_time = 0.250433951606;
    msg.sid.assign("MBBJNKIAVJHJPPULPPQOFHNSEOIHXSLCAXCFZHRSJEOFCIFGSFXETVBGKAFSCDTGKNYCLCQYWQTVOLWQDSGPGFANOMRMYVWRUPVSTMRXAUFNDMAEOXBSWTWECVHEKZSNTZEUIURGXDCWCAPREKDZPL");
    msg.s_type = 222U;

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
    msg.setTimeStamp(0.0952455820298);
    msg.setSource(59292U);
    msg.setSourceEntity(36U);
    msg.setDestination(10428U);
    msg.setDestinationEntity(153U);
    msg.id.assign("PSOJBQFAKQAUTJICNORKIGIJUUHBJISGARZJRBPGHWRZTYYKUVUYKCZRQWEUXZQQXRVXGXFNDFFQNWZKPMONEOHWFJRLPBVRAWUMZYQXCYHCMEEWXZFSERATPMSBJLDDABKLPIABSYKDQXBKIJCVMSSMOGPNPQPHWDAOOGTZEDWIYOBC");
    msg.sensor_class.assign("YDXCYSFMYIYZZREXFUVDFTI");
    msg.lat = 0.57641174562;
    msg.lon = 0.469939967567;
    msg.alt = 0.604811974008;
    msg.heading = 0.114838708641;
    msg.data.assign("MSQHAKDKASRRUMHPBOSCUGGQXAQKFELWUSGXFNMPGVAGWKWUHBRGRJODOMPIF");

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
    msg.setTimeStamp(0.921886185494);
    msg.setSource(21552U);
    msg.setSourceEntity(159U);
    msg.setDestination(28814U);
    msg.setDestinationEntity(136U);
    msg.id.assign("BUQCAAAKYJHGMXRDQVMITJOEQSHRLJZEYKFRGEILMTKBADSWWHRNPLLZZQRKOQPOJTBRIKCYWJPXSVXHLFUCEHYQFOPBPJWMJEIMHQCUISYSAIXRCGUODUABXSZNTNWVNJCKLBQJZTGFCUPAHPVYGMFLLPHYGDZWOTXSUDDGPSNTCKEXCVYEIWOKEIXKWY");
    msg.sensor_class.assign("IBVMECIQCDBWPFWRFEZCARUWZATULTKW");
    msg.lat = 0.879207600889;
    msg.lon = 0.877087442339;
    msg.alt = 0.200085123828;
    msg.heading = 0.94812696172;
    msg.data.assign("EGXQMJBLPVHTJMTTOSCFUERWMWTZCKORRFHNKDOALDSPFDFBWFOKUWGJYLSVLBNQAQKXETVUKIPGZRXEHULZHIYXZLBVENXFGWQSCJIZXTGJZHCWYODZYNMKSAVSGOQSXWRCYADCMVCKLVWTGUNHVJTAXNNG");

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
    msg.setTimeStamp(0.0366627758734);
    msg.setSource(45058U);
    msg.setSourceEntity(98U);
    msg.setDestination(18698U);
    msg.setDestinationEntity(110U);
    msg.id.assign("NSBNEPVXNMITNJNPYRLPHVWZFNBPVHFIHYVZLDPBXJKTXWXOEOLXBVJAIMTIFRCWHQRUJFSESHEELRGUZFSKQMBQWXZILJPOOAWUTZMIPMZFYNKZWYHRUZD");
    msg.sensor_class.assign("DTTJFKSHYGYDHOKOCYORGOXNFIARIHDBSIWWECDGAMBONJXSDBYAUFSVHFPUSEEXLRPFZTQWLPBZWVNCOWUIZVWLDACWPOKQQCGGXSQJMDELQRKFPOFHSYYATJLYZQZMQVPVLSXGMNKEABLFJSWNELJHRDRAIUIMGYRRCJAHEYQXKZLME");
    msg.lat = 0.109694185866;
    msg.lon = 0.898964717029;
    msg.alt = 0.82855024333;
    msg.heading = 0.181286875475;
    msg.data.assign("NZEYRHUNEAURHXEBUDLSPPTGTEGFRPBVUCWEBAPAYZWJTAQRVLCNJHYLCTDLKWLYCNMQZCMWZWCUFGQIFSXMJUNRQXXWXZOZBGRPYQFOVMVDDMIEGEOGVRTGSDKHSPEEXSQLOAXJYIYSDLSSDBXNWBMFIJCCKTHVTPBHIRLPHAYOSADNHXRJKHTJBGZODKEFZMWGFKQYINDHFKVIJIMKPUOFQLOUIGJXAQFWLMTVBIYBO");

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
    msg.setTimeStamp(0.333841462333);
    msg.setSource(22022U);
    msg.setSourceEntity(71U);
    msg.setDestination(55978U);
    msg.setDestinationEntity(75U);
    msg.id.assign("CUITWEHDAZVPTWBNKHEHMDGUETBLKTJQGYGSB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EJMMGKYPUVGT");
    tmp_msg_0.feature_type = 177U;
    tmp_msg_0.rgb_red = 221U;
    tmp_msg_0.rgb_green = 96U;
    tmp_msg_0.rgb_blue = 42U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.547671083542;
    tmp_tmp_msg_0_0.lon = 0.490733969802;
    tmp_tmp_msg_0_0.alt = 0.228956162154;
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
    msg.setTimeStamp(0.383646928346);
    msg.setSource(42145U);
    msg.setSourceEntity(128U);
    msg.setDestination(4984U);
    msg.setDestinationEntity(27U);
    msg.id.assign("DPRKZAXYSLAXGTDDAQMWJQQXVTXADUEMPPKGASNNZAUNWGFGVVZHFLCDMCNTDTHFLLBUKGAJHKZFSJEXHMOSZWODHQYQOSPPNZGFFVYYRZCSKUJWIYYWXTRLSMXIEFCMTTCDPHIGRSNJBXBAPVHIWLHRUWYKJMBOAWSHGOEFBMTEREPZEGGCZCZKBJBQPQRNCYIOUHMUYDTLLUBSQKVBEYEWOCJXTIFNRVIADII");

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
    msg.setTimeStamp(0.329653802962);
    msg.setSource(13844U);
    msg.setSourceEntity(142U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(81U);
    msg.id.assign("VKXCZRDLFRAJVCHVUWCSJFNEFKSZQATLGHXCPEHYZWLHIXKQWIFLQQSILBHDOYMRBRZIRETCBONEZFEENDYZGCNSYCDNBPUGDWRAGWRUFWVCJBTTJNNOTDTBCNHPJOPTIXIDSFSATOIGMJBKCSSKEYOMZUJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FOSOHAJLQYZNBFVMSFQCLRFYISOLNCQKFWGETRKLPDMDBZHGSIIXPKVXBZVZFGUKDEIPIRDQTZCGOLQ");
    tmp_msg_0.feature_type = 207U;
    tmp_msg_0.rgb_red = 214U;
    tmp_msg_0.rgb_green = 0U;
    tmp_msg_0.rgb_blue = 98U;
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
    msg.setTimeStamp(0.98918021925);
    msg.setSource(56564U);
    msg.setSourceEntity(152U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(119U);
    msg.id.assign("MPHQASYCLFMATPQKBDTIMVSEULDZJYJIILHNHCPBXWWWNAUYDAIVKOKBEHUTVOVQZCKNKPFNVDBSZRYNZTLYZUILLHTVFWUGEOHCPEQZEFJWOTZDSLUDTHFPYBALWTXNBXFSSGGKJVHKRGUISGKGRXJXNSBXCXPLMDWKCVIRQKUELTVAYUBFRFAANRCQIWJDMPOEAZ");
    msg.feature_type = 62U;
    msg.rgb_red = 106U;
    msg.rgb_green = 24U;
    msg.rgb_blue = 183U;

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
    msg.setTimeStamp(0.8509682261);
    msg.setSource(22344U);
    msg.setSourceEntity(208U);
    msg.setDestination(30397U);
    msg.setDestinationEntity(147U);
    msg.id.assign("MMIKUJHFVIRTSPQLOHVBBWCYLPZNNKRMGWJJENEYVBTETFSVDTV");
    msg.feature_type = 247U;
    msg.rgb_red = 52U;
    msg.rgb_green = 118U;
    msg.rgb_blue = 45U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.843102558755;
    tmp_msg_0.lon = 0.229036462555;
    tmp_msg_0.alt = 0.985176809787;
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
    msg.setTimeStamp(0.462682173618);
    msg.setSource(32525U);
    msg.setSourceEntity(120U);
    msg.setDestination(640U);
    msg.setDestinationEntity(14U);
    msg.id.assign("CTLFJTPJSXHJFSNJHQSDITEHXCBGWHDCFRIGXEMBBNCOLXGLAOZPXCMAXSPMGKPBANTQSMGDSNZJUUWASEFMEWNEQKOJCTZYYLAQRHHPZFUFXEYWVQVLQGWPGLBVZZCWYZMMAKONDZVBLXYEDTKOCPWJOQMHDRJAKGRYTUDNBDZKRURAVOVYBKIIKKNJRVRZEWUYNLFSEON");
    msg.feature_type = 227U;
    msg.rgb_red = 33U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 174U;

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
    msg.setTimeStamp(0.618864714572);
    msg.setSource(16742U);
    msg.setSourceEntity(31U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.585937651817;
    msg.lon = 0.191769342947;
    msg.alt = 0.549687815999;

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
    msg.setTimeStamp(0.493033101127);
    msg.setSource(7473U);
    msg.setSourceEntity(18U);
    msg.setDestination(54243U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.269929224471;
    msg.lon = 0.18409960909;
    msg.alt = 0.591280092166;

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
    msg.setTimeStamp(0.952553583708);
    msg.setSource(26516U);
    msg.setSourceEntity(110U);
    msg.setDestination(41226U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.134063415907;
    msg.lon = 0.505656542095;
    msg.alt = 0.439701211756;

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
    msg.setTimeStamp(0.893017859654);
    msg.setSource(47793U);
    msg.setSourceEntity(124U);
    msg.setDestination(62372U);
    msg.setDestinationEntity(55U);
    msg.type = 144U;
    msg.id.assign("EAATKUKJHJICRZYXSGOKZ");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ROYZXJPREFEAEIKLTPAKRTEQZHFGMTBONQZWJPBLOIMNAJNHIIWVXU");
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
    msg.setTimeStamp(0.0758225222);
    msg.setSource(10807U);
    msg.setSourceEntity(21U);
    msg.setDestination(14422U);
    msg.setDestinationEntity(99U);
    msg.type = 7U;
    msg.id.assign("GLWGSMIWVWBVNLUDHSMEQCGFYHWIXFHDEBNDVLNUXIRPOZWEAUQTFZCVMRITMMKRLUICFZRUXPKNDPQZUDXIITFLBYVBANEQVHSJLDGIEAKHJGBAMMCDPBKMPDATYBQYOHJKXZKKZHYYZPGXOBOQVGCJENAYFFKVRJZYWQJZOITTAMMHFTXAOKREWHDTWLBJCCGPOEUFGPRILFTCTBS");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.051079498122;
    tmp_msg_0.beam_height = 0.804673656979;
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
    msg.setTimeStamp(0.323824799591);
    msg.setSource(37937U);
    msg.setSourceEntity(206U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(246U);
    msg.type = 228U;
    msg.id.assign("KDCSPVSNHAGKIYUZNLHWESBPSWBW");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.202534354693;
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
    msg.setTimeStamp(0.30104079071);
    msg.setSource(7414U);
    msg.setSourceEntity(147U);
    msg.setDestination(13007U);
    msg.setDestinationEntity(46U);
    msg.localname.assign("KXJKGAMCPLKKVKGJRIOLXEZRYJCDQWDSYUVPNONRQQJGQPBKNCOABCXVMDDAHGFXTULCRSSVGEXXBHBHEGZQKCIOLHTBVIHLCEUYTTUZUEPPDFXMGZSIDKBFMOIRWQHFIUYNYMTFPLULLUAOBAPWSXLVRGESTSCBEFWDVZRMJTVPOTNRIKJJCOZPHXTQMXMDGFZWBIRNEWFBZUAKYHVQYYYMIDITSVANWQUCEZWHAEAJJSONJYNPWWRFZH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AYCAUKFKNTCCWSZNXEUODMWFZTGDJVAUCOYITZSKMBMRRHLGCUIJZJSQCLPJSHESTABINFVVNBWQFLBQFWPTALZJHPVAPJJNFKFNQYNRICGGWKRFXMXMDEHAKTIIXJXZXMRVVYQKKLAKGDSULZGPVRBEOHVMMWDSMILHIHUYZHTAPHTLDADJGTYYHQVPSUEOGZOXEDCBTBPNEZPWNFBWQUUBXYLBGOEURGX");
    tmp_msg_0.sys_type = 197U;
    tmp_msg_0.owner = 18381U;
    tmp_msg_0.lat = 0.586998532993;
    tmp_msg_0.lon = 0.938296436266;
    tmp_msg_0.height = 0.529268092401;
    tmp_msg_0.services.assign("BYZWXESBSVLRLZWBWOFOAPWTAOYHKDLFKJDPVMPNNVPZKOWBVQVSIPHTRZCOKQZSDNTHUHFATSXYGNPDUOKLKBMCTJRYFDPEHMASQHMI");
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
    msg.setTimeStamp(0.142885897836);
    msg.setSource(14707U);
    msg.setSourceEntity(84U);
    msg.setDestination(10065U);
    msg.setDestinationEntity(145U);
    msg.localname.assign("JOYXXGNBSGWRMHQRLOOBUWELPDAYXJFJYOHRCEVGHXFESYJMUGBNRF");

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
    msg.setTimeStamp(0.971622421303);
    msg.setSource(24940U);
    msg.setSourceEntity(133U);
    msg.setDestination(36969U);
    msg.setDestinationEntity(131U);
    msg.localname.assign("SENIYJJUGCXNHEOUZXAGIRHTMWRBFOBUZTVUDLCMBAPASTWKWLZTQSLPSOKZDJMCHWRQDJLHPVNERFOZVUFILNJWBZQKKVKGXMWOZGSVYMBQEJRVFKPQDQAIBKXXENMUHY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NLWXZVZJEAVMIMMPNTVXVVXN");
    tmp_msg_0.sys_type = 137U;
    tmp_msg_0.owner = 49359U;
    tmp_msg_0.lat = 0.634265249969;
    tmp_msg_0.lon = 0.486327065912;
    tmp_msg_0.height = 0.924337278426;
    tmp_msg_0.services.assign("WNYMMIJJFELNWFSEXWGGDTYMVQXEKIZWJSYYRTHOECPJOPIKXSWDUWVHYAAOUCQPBLOBSDNPJOTVVPHQCN");
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
    msg.setTimeStamp(0.924680239031);
    msg.setSource(61274U);
    msg.setSourceEntity(203U);
    msg.setDestination(28435U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("LWEDZMXJPXVVKJAGHTRCZAKOFDHCSWFYZNCDWVEDIOEYKPVTICHMTERSGYQPOZKLXEBDXXGIEUDHISGJAYTGASTVSQRWULGCAICPHWNZLKESMFUMRBNFXRKKNNWPOETULGTYRQJTIPQCXWZUNHASOJJYTQUOBXMQJVGKMBZXHDMPFCBQWPYBQZRXHINOMCBAOFYGUDELJ");
    msg.predicate.assign("RNQDPDEUGRGPMMSPJKNEEODQRSICJPBHOUGPYCACATVOV");
    msg.attributes.assign("HXLKORYYRDLCEDACUKPGDLTVGLRPSDRCIXIPZHUDAXQQGKYWNJPMHQ");

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
    msg.setTimeStamp(0.492166569834);
    msg.setSource(52915U);
    msg.setSourceEntity(112U);
    msg.setDestination(9891U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("JXTSGGNHFWSETBVKOQYYKKNFLBNAGOBOMQTFRALEOYZGXLCHQKIGIMJJOTHXMIDTVRRVQUZRAUPFNCHYKWEKWDSUKSOBNRMHCGLPLEJFJZRYLAMSLVGUDLZCYDCXXGOSPUTNUNNKSENBHZBJQEXCLDGBRIQXPZFZWTVAPYJNFDZJMQGJQWVWICDHFAPUFDS");
    msg.predicate.assign("NIUHEBOBKHVFMVXDPRDLYVFRPICYQSRVNBEZRFVVHZJLBN");
    msg.attributes.assign("RLFKJSBDKUBIEESKALDPBDOAHEEURFBJPKIGZWJJSEJPYYQHCPQYGUPQOBULNNCCFZYIMPSMQYOEWNSVZLHGDWAOKMUEXVGGFQIKPWTHHXMLZTFKGEZL");

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
    msg.setTimeStamp(0.608515425307);
    msg.setSource(53380U);
    msg.setSourceEntity(122U);
    msg.setDestination(41122U);
    msg.setDestinationEntity(180U);
    msg.timeline.assign("AMIDOJKGFEMZEKRSIQXPLCBCHAWIKCOTMGTORJILNXV");
    msg.predicate.assign("CGQZPLBLNOBMXIDYISXREFTHWBGKQXNWSUFSACBCCJKNGEUCWNFCMQARILTRSRZ");
    msg.attributes.assign("PWNQNFLJUCIUGTLMOUYDNGUJGTUZXMWCMJCYEZEMDYPOKYLDXXFFZAMHGPJDNHVHNVFNROCHBYGNUBXXHCPRFJDSVMVOBPPUPERPJHABLRCIJFODITKJRMQFSVSOXYISQAXNPTGCLZYWKTCOQQWERWOKAYYRHUKUZTRIALVBRUPS");

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
    msg.setTimeStamp(0.0364597101752);
    msg.setSource(59813U);
    msg.setSourceEntity(153U);
    msg.setDestination(16100U);
    msg.setDestinationEntity(138U);
    msg.command = 119U;
    msg.goal_id.assign("YDZSHPOUXDYQKAEFSKJTSRSTSCMBTAGTELILWIRNLHGLMVQFNZUQMDQWCFXLXEKYZCGVTCFSJRMDJYEXGDOHOBKBPJISXCWEMUDAUAIHBPTRYIORLKIWZUFAMWTRNZEULWHUNBFVYXSAUCDOGKDOQPHNLQZFJFBVCQZUVALFVRSYXRIPDOVOVQXJWATAKTDCWCMBHNCOJVEGEEZPPQIYUYFGPVNYHQZXGH");
    msg.goal_xml.assign("EQSIXVOQBUFAPRCRRQSUCRTLDCRGWXJWIFGMPLDHXLEJEXGDYEQJHYBUTIGVPEDCLJZONAHMAQTNQEYKGURVAEIBOEUKTKPSGZCDILPKLVLWFGOMSLNKRHDQIWMUWGSWPBFQDIEXUYKUTPBQDRHFBHZJZZMMYDPFSBKZUFTHFHFVOVSXNVNCQOTOWNPONWLAKZOVCYJZCBAMHMPLHSYD");

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
    msg.setTimeStamp(0.730353972866);
    msg.setSource(5080U);
    msg.setSourceEntity(70U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(68U);
    msg.command = 164U;
    msg.goal_id.assign("DRLQQYUPNOEFIXRBLFTQFXNZALYVKNG");
    msg.goal_xml.assign("HARGYSYCNPXMARVCDARTVNSHQDFDMBZZGWLGMUEJZOAFWJAPLODEEIKTNOEIIKOFTKQYNZNDRZGISMDHGPIRUFROILHZPCUDXCRSUHMCIAUWLKOHMLZBNIHWZSOUPBRBWTVKBPDMCTBVYAQHJWAXVKMDXAIQXUHEDYCNFKBMWPQLUYZXLGVSVPKCYLBSQPVTQWOTAFXVFOQJHVJOQUSEXFTSNETBTFYEQXGFJBWXMWCEKJNYCYJNZRU");

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
    msg.setTimeStamp(0.324604645537);
    msg.setSource(39484U);
    msg.setSourceEntity(193U);
    msg.setDestination(64479U);
    msg.setDestinationEntity(109U);
    msg.command = 205U;
    msg.goal_id.assign("FGIOQTXWBAMWUOZRJNZVPPNCSDCIKTVXWHVHGQIQVTDGEDOHTVHCSSVCSKEQUIDADRKWCFVMEYLDRCNSOJZWJSQZLAYXPFANGUMMHDJSKYMUVEXIOEARRDGBTQJSDZHLZLCURRM");
    msg.goal_xml.assign("TKXKWNYJQCGVSFZZBZUMOIIPUCEFDDWQVUACMQLPFREGRJSNUYVWVDXWNBBOAPYRGXSAUMNDWLBOWUEUXFIMKFKXTQECCFOITDEJTIJYZJCJGAKAHPYBHVNTGOCGZFYQTETAL");

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
    msg.setTimeStamp(0.39845285603);
    msg.setSource(10751U);
    msg.setSourceEntity(141U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(93U);
    msg.op = 149U;
    msg.goal_id.assign("HOTRNCPIWYJHYATSOQLTAQSLOMGXIKVSVOCLBQNTRPCJEUNGFLHLHVMQZFGZBRBRADIAWQVJZPRBWAUSVJQCNJDBEEPVGPBILIFAXY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DIXXVGPBDCLTUNIQTIQSKNJOLOEP");
    tmp_msg_0.predicate.assign("FFQZHNYCFFRS");
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
    msg.setTimeStamp(0.227609943699);
    msg.setSource(10598U);
    msg.setSourceEntity(211U);
    msg.setDestination(36627U);
    msg.setDestinationEntity(136U);
    msg.op = 205U;
    msg.goal_id.assign("NNURUZEOHXZTYENATNSBPESZWHXWEOLLCNAYLJDIWTHRNPVWHSIPMTYDJQVYNBYCDQMMQPZHJROGKFRLMQHBXLYSSZJJCUJWQDPXMTUBAVZSDPVFLMEKLKGAEAUCXNGUCQOKATGAJGSWMFENZPUPJRFCHBCYAXGIBYTROVHAZZCPQOOIPHFLEJVMS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZWGOBUILTJCQTKSCQZKRLVHNVCXOZWTNFSASLBDMFYEEEFSUQIDQDMMNLJPGVYQNPICUZAYNRFLXHVUKKJTQWMZAXFPDIDKKPWCHFWBDYERCXANYEEFKIAKRMVVEIBSJRUAYLWWJIFUQPQGXOBRDBGEHPHNEIOUXVHKLDMSTTWRSGDCEJSYVQZOPOBFLHDOCHGXCIRTYPMF");
    tmp_msg_0.predicate.assign("MCQRJLOAPIOOQTRVFYUXRGNXMRNSIESSGZETPCTVZOBVKGXFVCEZPJOZHUVYOCYWDMMBGGJEMAQJALDBGSTCILPAQSANOIFLDTBXDCHEUXZBPLUPYOBRWGJWELDFBNYOYJKYFFIKQVJQVCEZDUKXSFSBRKIFOTZVIHHMERKPGQDEGXUTNLETCINLNWCRAKWRAIVKRMNHPZJSANWS");
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
    msg.setTimeStamp(0.505680837179);
    msg.setSource(20770U);
    msg.setSourceEntity(216U);
    msg.setDestination(5614U);
    msg.setDestinationEntity(205U);
    msg.op = 71U;
    msg.goal_id.assign("TPONJGZNYSMNLKNEYVPKEYVJDHXNLQZAPQTIFMYOOWCXBJPUBRLCMGPIEBAHOXFOSGSYEVVGLGDKFZOUKBXODTLJOXSEMKQYVMOGBGWIUJRIDCEYWSBIE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZRGUVCTZFRERAEQLFIAMMIKYQISJPEPQTZHOGEABXQQLWUJR");
    tmp_msg_0.predicate.assign("VTQQDOLRPBLYIFFDMSUWYBMSJXJWNGEOEBAJKIOMYGXXQNPGAEASEZTUYMFKNWIHADMVKZSKXELICFHJZNZNCGGYGRAHVKTANTTDYKHPJFSRFZTWXQKPYFWZLHSBPCCUZSPSCXROQWKAOMVJDWKSQWPGVINLXSNXIVFBDGBCZRNYXEAHWRBOJJLFGEOLBHDCOILKTMVBCOXPMRBIQIGFVRAHPQOMZQETEURJYVZNDARUCTQWHDCEUU");
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
    msg.setTimeStamp(0.31873970787);
    msg.setSource(31024U);
    msg.setSourceEntity(98U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(81U);
    msg.name.assign("NOPQZHJAQLTMFPSFPAZMADCYUYTGYUUJDXYYANKPROSJVHMOKFCGRAXAXBFOKCZDSRBUBVJTDLMKPJKOCLMHTHUGHIUZGCEXIGFMLUILXQFPEZJGQWETHAQJIXIOOHXBTGTYKKQZWWNCHDHESIMPJIRECYFMBXYFWSKLLLCINRLVWCMSVGWCPNITKENHRSSBVUEDOBLEWGVNNWMWYRVAVVYVQQZBOPZSRNKJUNQSRUEFXQBOTGXADTZBJAF");
    msg.attr_type = 232U;
    msg.min.assign("RXXMREJPIBISIBFMLVLFZLZGVOAKLLUTJVPBGEZFIVWVUHQRQJFHGCCIAGNDGINKOOTYYAMOVFUKSXZFHSHHTBWQEDPPGQNDTGMHWPUWTFTHGKPKRXMHSQRBQYUMNZAYCVNVRCMWQCJUQTLDZCDDUGJCLIQPZRABKBMXOHNYSMEWDNNEUBASOPJJATJDWVFAXHIWOAZTFPSTNXREYLUBVUDOZCJXWIGLFW");
    msg.max.assign("UGJLQDAOLAWLHYBCZLVXMOEDGKJVVMKMYUHXACPSDVPTVJNLPVTGAMTHHJSHUWJYZWMXZPFGJURDKBHAJKLMAORNDPSEWGQMOHDTYJQCAQBNIVWXIAPRBVUSXLAOEHFPRQTDZFKWGEJILSFWZOQFXNTOXUITSESRSNBDSCORDEBIERNEFPZATCVTZ");

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
    msg.setTimeStamp(0.868089553933);
    msg.setSource(34773U);
    msg.setSourceEntity(114U);
    msg.setDestination(32228U);
    msg.setDestinationEntity(26U);
    msg.name.assign("YBBBZNDSCKBPHBGPNTSEGVSKBCGNAQQQUAGJHYCEEHMHXPYCNQJTLGILGMCWWORGXQCUHFFZDZNQJZBCRNWVDKOMCFKQICCQGANRLDMNOODKMGJPANUSDUFDXWIY");
    msg.attr_type = 241U;
    msg.min.assign("FSRUSDSCLVAROFWZNPFTXLUVIIASSUDVJPMUSPQINFNULICXOHOQYYQTCGQOCKMRFIVGMKNTDBM");
    msg.max.assign("ZXLYJVHXIJOPHFGWWPSNXRKXRSELABDPJHDQXHYJZZTDVHYEWRNNYGRUCTNZGGMPVDOFHRXMGHPJPDQVOJCYDJWI");

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
    msg.setTimeStamp(0.740536169045);
    msg.setSource(7870U);
    msg.setSourceEntity(97U);
    msg.setDestination(14794U);
    msg.setDestinationEntity(185U);
    msg.name.assign("NBLXUOHAEZWBHJAYQJEPXELMGWRDGOXCBUCFALYWNLBYWMNQHBZMUFIKMXKPGLDUOENKRHNZYTUOZZJERKSIQLWRDAMWSDBNNSFEKFBQCZOTPSJWHXQGYZCYKTVAVFIYCRQOCUHGERLTJYGKJDKWPQBVOPA");
    msg.attr_type = 113U;
    msg.min.assign("CSZWXQGMXURPENLGMIRTUSVCSJIAUTJQHOHYZBQPODTRYMDDYAOBBQRLUUHZWGYKRJKUMXRGAWYNGACWWRKIPHWJNSPVFCEOEILTDGOGIBJLQEVFQWOTJBPAINMKMSPIQMG");
    msg.max.assign("SGHBYCMNHXKMPEDKOTKZUWHUTTCRDWZIDBRMMUSLBUNBUHHTPYETDJGIAKXQOVUGOMJBUXLYMJRPETOVACLVZVMSICCBVYEZWMBWFWGKAIHPDLDSFPQLGOONEAIWQLPYDHOJGOFFQPVZKXKZBUTRSZXZH");

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
    msg.setTimeStamp(0.801798365459);
    msg.setSource(33326U);
    msg.setSourceEntity(50U);
    msg.setDestination(51962U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("VAHUQICHIPQAVMRFPAJGCSDHRTLHFIYGKJRNXMRXYDATGZEFBEJYPELFWYNZKLLVEUARGQCUJMJJBDGVESHCBDQUISRVTCNIZXMMZKICACMTWWMKYOLNEWOGPJPWROBXZJHNEQDXWNATHUVZCNFOQLDFXRHP");
    msg.predicate.assign("GZUZDCPHUTHJIXAOMOLENODBRFWJXVFMYJKHLDQTAPWMXXPEVQOCETBOVAEAJHSBYUJZKIRISAUJUXMEKEKZGIXDSAZOKRBPHMONOPATALKTJLEGBWUWSVMHHFGWWWVACKLICQRATSNGQSFCZBNPSSO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WRNETAQLLEYJEXFCYPSGMZIRKNWPPPRAAEFM");
    tmp_msg_0.attr_type = 78U;
    tmp_msg_0.min.assign("BMTGMEEMYTEHPPRGQRBOXTRXYJSOIKRXFWDHANUVBTUEWCFOZMQAWYABKLCUVWRICBCEDTQNGGIADNLCYEZJBQFKFWLARUKZAMKJKMCJJXUWCNNVLYNXDIUHECVMLHGWYPZURQSHLAOTIEGZNTDVOGILPFBOESZBIFAWXBOXHJWRHZJPDKHVCAVQKPFVYUWXHPUGDSIILDZOZTUHKSIJQTZNNSYQQSO");
    tmp_msg_0.max.assign("PSPNVRYKOTOVOAKULXDZHVNQQEQAAHMVBPMOFDENILU");
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
    msg.setTimeStamp(0.093185413691);
    msg.setSource(12892U);
    msg.setSourceEntity(121U);
    msg.setDestination(33317U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("CSAMDKRQEAUMVRVLPBCAVSXJXIPNZOQRBGUIXFHCTNJAVEOWWNPXGFNYJZECYCILEHRNCEDLGHQZTVAZFXSRKLISHVCTNRDZSKXNUMMKUJPGUHRCEKHHQIMIYFWONMYAZUWSYVOQWZKDFMFMPHESRVOEY");
    msg.predicate.assign("BPHCGYXHSUJLRKCPCFWWGXATSWPYVNWDMWAKHHHCJHBJENPGLWAAFNDZFLQQGQLBFYMOVJBWKKIFCWEUCQTKFWYTREEFAGFORXZBZEPJFZDVAMKHUAASUDEVVVYMBXSERHTNURQCIPQRJXCNNKRTQSMDTJUIKGTUULOEITBGVYLDOIPKFMXNCIWXGQEZZZKGTAMMIXYIOYPMQIDRLBD");

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
    msg.setTimeStamp(0.548841800259);
    msg.setSource(36668U);
    msg.setSourceEntity(213U);
    msg.setDestination(53732U);
    msg.setDestinationEntity(35U);
    msg.timeline.assign("FIBXTRRRXNXLSHABAYERACIWFSTETUVJDNSDHSMPPRFUNKICOZVFFRYWHKKJOVYOWDHEVZIOWZPWGCWEBCSPTAFXEVDMLJAXDNFDUGFNMDTUQHEQHIUUV");
    msg.predicate.assign("QYVYBLOVIMNRFKYLOJBWFMEDKMNZTWVDOOPJTQLUGSNQXCPDTTGLXNURJMFJFXEZFPAABYDVARWNRGHTXEIZKHOVGLTBCUOEPEVLAWLTIKXKGGSGDQNAXFJVACFCQHBAYEJKBRPMSMIYRXWNSIXSOEUSSCCTDQCRYXFGWVAGCJZMRLZWMMCDOARHEVQB");

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
    msg.setTimeStamp(0.324926787064);
    msg.setSource(17149U);
    msg.setSourceEntity(24U);
    msg.setDestination(39756U);
    msg.setDestinationEntity(239U);
    msg.reactor.assign("YYIHKITDRMFWWICYJBBTWMKSFHLTBRGSPTADNCRPKRXDKBKWOVYLPXCRAQPYQCLGJEUNLRWDPBOZYGQFTMXIDYWVNJEDRAHZJPOONVNFFTQJKTGHQU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DMWGDZUGKAEEAUNMGQXRFJPSNLMEYAGTIROTRJXNWABYLUMACFCFSPTCQTQHYNSKKPSPGGJDDTSHDSXBMTLNONKPZSGXLIOZXCMMCWRVHCIJRJTVUZTMGDPIYXKUKIEOZULZXVEVADSNFPWRFRVQKYFCIBQHVDJNQTXAVCFEWNBEEOUAHZUBWOXQQMSYBJHWDBCHLVKZXYGBSQPLGYNMROUB");
    tmp_msg_0.predicate.assign("BQWGNKSOSKEJLNLRQBUYXOMOWYZQEGURPHBZEMYYUGKDNXPFJZUPUKXYSBSMOHDTKZVGNAOHFIZSMTCOVRLVWLIPHDWDFSSTVRHQVIULDYTITKZWLFMFNYNFVOGDTAXKEJRCJXCTSNVNCEJXECMYTPTQGUAUYDIOIJNFGHCCKWPKXEZXLAOUWFVJQMZMJGMFPGFRPLAWILDRRYTCUDAQJHAEQEGZVBIMBBAAAJNIIBPBBXEVQQPXWHDSCZ");
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
    msg.setTimeStamp(0.780468850007);
    msg.setSource(40341U);
    msg.setSourceEntity(219U);
    msg.setDestination(62315U);
    msg.setDestinationEntity(32U);
    msg.reactor.assign("VINZMDLUHNNUSUDHTUWZAQCBNJCYNSIOYETEKXDPRI");

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
    msg.setTimeStamp(0.195452079308);
    msg.setSource(60371U);
    msg.setSourceEntity(40U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(151U);
    msg.reactor.assign("OKGXKVGVDHFLNFQZFILUAQDKOIHKYRLGRXKZORGYQFFYBLZNXJYCUBUGFRCWSHSENQDSTWPOPQRIBHZXSRVMVCPJEPDCFSAFQBEMNJPRBEWKBOXCREYAJTYZYHTRGODWUCCPGCYWKGQAJSENDOSAMJMDSBTHFKHNPOWSWBVEQZVIXJLUVHXPKJAMUSEWUUIVKYXFBYBNUIJNIDEAAADZXVOPTLOZTCTUILATHRLLNMLZICGGTHVMMXPNZWMIW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZZMNSCKTFIDOYUSRIHIMGOBGSHXAYOJASUNVIWQTFPQWJZWMVNYVRBGBVSMNYWXQNXHMLLBYCYFJJOXPKYTPGXGTZXUVJEBSRROBKFPLCDKXUZLEUPOOEHGXBTCYJRRACWIDEYTDEEAFQKNSPNSVATNIPEGMUWAOGLLZOIRKBWLWQYDPGWMKSFRZMHQLXRAQZUNDGSBHIEUARCFBJVVQEKXQPCWCOCUVPJAIKKLHDNA");
    tmp_msg_0.predicate.assign("ANUJKEJSAKNKLXGQNEAWPSCTMPXPCFNBUOJVBIHBDIWTJNSJFWTLLYRAGCXEBHMYYWBOGRFZHQSIQXZJLPGOQVFRHHGHCKCCRRZKLBMDWASSGPSFNHHAXGVQYSEITAEVPQMUWZBDKIEMYTMILCYDMURYOHGSKDTVWOCARUXELBTZQVDJXBPZBDVHFJJGYJQIMIAGDXTPUYO");
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
    msg.setTimeStamp(0.638304369546);
    msg.setSource(8275U);
    msg.setSourceEntity(89U);
    msg.setDestination(5856U);
    msg.setDestinationEntity(11U);
    msg.id = 120U;
    msg.width = 44921U;
    msg.height = 68U;
    msg.widthstep = 62534U;
    msg.channels = 182U;
    msg.depth = 68U;
    msg.finaldata = 143U;
    const char tmp_msg_0[] = {18, 54, 76, 37, 34, 39, -79, 12, -73, -55, -82, 108, -63, 69, 106, -65, -56, 49, 74, 73, -53, 68, 96, 114, -116, -62, 88, 17, -31, 123, -97, 82, 4, 56, 86, -124, -44, 2, 29, -1, 85, 56, -86, -10, -50, -43, 114, -33, 106, 79, 55, 60, -86, -106, 36, 4, 53, -76, 29, -44, 9, 31, -25, -79, 9, -55, -80, -103, -97, 100, -113, -43, -93, -114, -103, 16, 2, -63, -70, -14, 117, 10, -95, -35, 84, -2, 53, -56, 32, 49, 48, 111, 31, -105, -98, 64, 23, -51, -66, 126, -121, -50, 19, 92, 11, 120, -42, -26, 84, 54, -116, 34, 101};
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
    msg.setTimeStamp(0.352232782161);
    msg.setSource(20381U);
    msg.setSourceEntity(250U);
    msg.setDestination(1680U);
    msg.setDestinationEntity(112U);
    msg.id = 111U;
    msg.width = 59761U;
    msg.height = 45801U;
    msg.widthstep = 44893U;
    msg.channels = 139U;
    msg.depth = 198U;
    msg.finaldata = 214U;
    const char tmp_msg_0[] = {-57, 105, 109, -13, -83, -76, -49, 121, 31, -56, -99, -119, -78, -61, -73, 11, -3, 111, -39, 90, -104, 54, -45, -57, -15, -32, 119, 34, -76, -68, -82, -55, 21, 83, -114, -128, 12, 107, 62, -56, -88, 8, 80, -102, -98, -125, -64, -101, -57, 42, -80, 33, -83, -52, -80, 55, -94, -4, 113, 94, -64, 44, 12, -34, 118, 20, 22, -72, 47, -101, -10, 119, 25, -114, 65, 54, 113, -67, -6, 53, 14, 103, -46, 100, 103, 63, -80, 108, -93, 103, -68, -24, 40, 89, -2, 117, -106, -51, -91, 15, 6, 92, 126, 98, -78, 74, -100, -77, 9, 121, 113, -29, -38, 83, -94, 59, -101, 85, -69, 94, 40, -84, -108, 41, -88, -118, 81, 45, -20, -15, -124, 80, -97, 18, -107, -10, 83, 6, -124, 59, -118, 38, 28, -21, -25, -17, -94, -20, 73, -59, -86, 70, 66, 35, -19, -94, 60, -40, 57, -116, -88, 14, -125, -88, -69, -13, -67, -76, -45, -104, -96, -124, 119, 46, 9, -110, -16, 77, -98, -103, 116, -36, 60, -18, -7, 17, -127, -83, 81, 30, -79, 3, 68, -39, -48, 103, 43, -115, 17, -34, -75, -9, 69, 9, 103, -82, 17, 24, 91, -37, 117, -47, 80, 36, 91};
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
    msg.setTimeStamp(0.31258836088);
    msg.setSource(48737U);
    msg.setSourceEntity(137U);
    msg.setDestination(38031U);
    msg.setDestinationEntity(42U);
    msg.id = 59U;
    msg.width = 58453U;
    msg.height = 46290U;
    msg.widthstep = 44676U;
    msg.channels = 173U;
    msg.depth = 16U;
    msg.finaldata = 153U;
    const char tmp_msg_0[] = {107, 85, -13, -36, 69, 57, -81, -94, -63, -94, -104, -111, -7, 80, -109, 96, -15, -121, -61, -50, -44, -46, 3, 14, 121, -96, -17, -123, 38, 115, -78, -104, 30, 76, 21, -52, -11, -63, -78, -75, 50, -10, -71, -94, 120, 101, -43, 121, -127, 61, -25, -14, -20, -57, -23, -95, 48, -88, -59, -32, -3, -34, -99, 26, 54, -96, -100, -8, -52, -24, -102, -9, -27, 14, 97, 40, 103, -121, 55, -119, 109, -68, -118, 67, -44, -107, -119, 96, -111, 27, 119, 101, 71, -68, -53, -40, -104, -29, -50, 49, 73, 99, 49, -54, -11, 5, -87, 47, 74, -30, -24, -36, -58, 95, 33, -127, 41, -100, -32, -127, -113, 45, -13, 11, -45, -109, 100, 50, 77, 30, 91, -73, 96, -54, 91};
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
    msg.setTimeStamp(0.230824162625);
    msg.setSource(7324U);
    msg.setSourceEntity(22U);
    msg.setDestination(25730U);
    msg.setDestinationEntity(181U);
    msg.width = 23801U;
    msg.height = 63716U;
    msg.channels = 73U;
    msg.depth = 85U;
    const char tmp_msg_0[] = {-120, 117, -20, 89, -90, 52, -123, 11, -95, 60, 119, -14, 68, -63, -38, -41, -117, -20, -42, 37, -126, 120};
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
    msg.setTimeStamp(0.437453787222);
    msg.setSource(14201U);
    msg.setSourceEntity(168U);
    msg.setDestination(1135U);
    msg.setDestinationEntity(8U);
    msg.width = 56174U;
    msg.height = 19249U;
    msg.channels = 90U;
    msg.depth = 224U;
    const char tmp_msg_0[] = {-95, 94, 112, -34, -6, -9, 15, -39, -29, -126, 96, -68, -106, 87, 37, 92, 98, -115, 41, 106, -6, 28, -116, 5, 99, -48, -68, 35, 58, -103, -20, 84, 45, 57, 48, 21, 27, -27, -22, 53, -74, 13, 41, -7, -92, 47, 72, 24, -59, -76, 8, -10, 11, 120, 54, 13, 63, 79, -89, 28, 6, 49, 36, -120, 116, -29, 60, -60, -60, -51, 97, -68, 105, 34, 123, -26, -24, -85, 39, 104, -101, -109, 110, -80, 33, 51, 62, -41, 30, 52, 54, 84, -40, 2, -103, 90, -86, -86, 107, -48, -23, -62, -26, 48, 122, -61, 91, -81, 68, -36, -65, -124, 30, 75, -60, -83, -77, 29, -61, 95, 110, -79, 109, -30, 8, 27, -115, -34, -2, -105, -31, -123, 20, -122, 121, 71, 119, -111, -42, -88, 30, -107, -24, -68, -81, -66, -47, 91, 105, -31, 12, -121, -19, -112, 82, 59, -91, -1, -127, -24, 56, -88, -86, -27, 33, -115, 37, 44, -67, 120, -126, 118, 5, -51, 95, -81, -87, -23, 52, -34, -97, 104, -43, -115, 100, -106, 45, -125, -77, -59, -89, 76, 116, -62, -57, -57, 7, -18, 120, 72, -90, -123, 61, -69, -34, -30, -49, -122, 76, 68, 36, -13, -121, -76};
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
    msg.setTimeStamp(0.242679382063);
    msg.setSource(56511U);
    msg.setSourceEntity(64U);
    msg.setDestination(15956U);
    msg.setDestinationEntity(247U);
    msg.width = 14836U;
    msg.height = 42354U;
    msg.channels = 4U;
    msg.depth = 67U;
    const char tmp_msg_0[] = {50, 103, -118, 106, -87, -9, -82, -25, 52, 74, 30, -115, 90, 7, 35, -113, -48, -118, -13, -6, 11, 114, -53};
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
    msg.setTimeStamp(0.817897303718);
    msg.setSource(60236U);
    msg.setSourceEntity(143U);
    msg.setDestination(63023U);
    msg.setDestinationEntity(231U);
    msg.frameid = 17U;
    const char tmp_msg_0[] = {46, 83, -104, -19, 115, -74, -108, -47, 125, 74, 114, 103, 40, 85, 61, -116, -117, -58, -95, -75, 122, -26, 16, 14, 123, 35, 90, 117, 27, 115, -6, 126, -128, 68, 27, -58, -52, -115, -110, -22, 90, 2, -16, -123, -86, -8, -78, 50, 72, 104, -90, 109, -121, -34, 55, 57, 31, -96, -90, -67, -66, 32, -93, -53, -46, -38, 87, -96, 26, 118, -16, 119, -116, 58, -92, 3, -8, -85, -105, -109, -74, -88, 42, -60, -11, -93, -28, 19, 123, 98, -18, -18, -57, 27, 108, -2, 66, 70, 121, -47, -15, -79, -32, 73, 5, -51, -92, -106, 46, -18, 27, 10, 17, -58, -2, -107, 75, 43, -30, -32, -41, -65, 99, -124, 38, 92, -109, -20, -70, -83, 81, 118, 22, -48, 113, -10, -47, -1, -76, -89, 54, -24, 65, -128, 105, 36, 52, -57, 88, -29, 89, -78, -97, -55, -28, -65, 30, -30, 65, 22, 55, -40, 93, -119, -128, 52, -4, -82, -5, 73, 35, 84, -127, 33, -54, -40, 37, -3, 17, 74, -94, 67, 86, -54, 44, 123, -114, -124, -62, -97};
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
    msg.setTimeStamp(0.300672890863);
    msg.setSource(63258U);
    msg.setSourceEntity(56U);
    msg.setDestination(63586U);
    msg.setDestinationEntity(109U);
    msg.frameid = 174U;
    const char tmp_msg_0[] = {-97, 5, -27, 36, -35, -9, -99, -3, -114, -101, -72, -44, 100, -109, -45, 74, -14, 62, -71, 41, 97, 73, -33, -77, 86, 46, -43, 38, 41, 47, -25, 89, 3, 56, -89, -103, -117, -78, -120, 59, -30, 42, -98, -27, 33, -21, 74, 87, -125, 70, 75, 12, 30, 88, -104, -122, -37, -121, -5, 44, -80, -53, -104, 43, 59, 49, 112, -98, -39, 77, 11, -4, 103, 0, -102, 33, 78, 24, -19, -7, 108, -121, 65, -86, -36, -107, -93, -100, 78, 59, 93, 74, -60, -54, -99, 28, 95, -31, 97, 13, -92, 111, 85, 3, 91, 12, -84, -39, 0, 54, 76, 111, -39, -122, 123, 67, -52, -64, 82, -114, -128, -126, -78, 30, -53, -39, 73, 95, 125, 25, -125, -38, 81, 8, 6, 45, -3, -74, -54, -44, -32, -79, 49, -91, -89, 15, 109, -95, 26, -89, 74, 124, -116, 4, 17, -24, -4, 21, 8, -20, -29, 0, -24, 22, -106, -107, 64, -78, -98, 126, -16, -56, 69, -118, -47, -20, 73, 30, 46, 3, 120, -58, -41, -36, -117, -48, 11, 116, -97, -13, 122, 41, -41, -74, -10, 25, 63, 119, -53, -66, 15, -23, 68, -36, 70, 24, -69, 10, -123, -98, -87, 15, -105, -71, -109, -61, 118, 14, 65, -37, 111, -94, -122, -91, -32, -74, 58, 26};
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
    msg.setTimeStamp(0.612480035532);
    msg.setSource(3326U);
    msg.setSourceEntity(166U);
    msg.setDestination(41472U);
    msg.setDestinationEntity(96U);
    msg.frameid = 254U;
    const char tmp_msg_0[] = {19, 23, -64, 84, -94, -9, 121, 32, -85, 115, 46, 119, 14, 65, -119, 98, 126, -79, -103, 69, -20, -127, -53, 56, 72, -16, 40, -54, -26, 82, -103, -121, -126, -123, 16, 84, 124, -12, -89, -22, -56, 123, -31, -58, -56, -52, 120, 81, 80, -54, 110, -66, 9, -112, 60, -68, -81, -78, -27, -84, -117, -119, 1, -118, 71, -35, -108, -100, -60, -24, 9, -121, -6, 21, -24, -72, 34, 64, -54, 77, -86, 65, -91, 96, 111, -20, 86, -31, 21, 121, 106, -59, -8, -82, 48, 91, -99, 87, -57, -45, -122, 48, -10, 73, 1, -1, -33, 17, 57};
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
    msg.setTimeStamp(0.525178532458);
    msg.setSource(1994U);
    msg.setSourceEntity(198U);
    msg.setDestination(60748U);
    msg.setDestinationEntity(142U);
    msg.fps = 78U;
    msg.quality = 45U;
    msg.reps = 53U;
    msg.tsize = 81U;

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
    msg.setTimeStamp(0.393709921465);
    msg.setSource(30667U);
    msg.setSourceEntity(177U);
    msg.setDestination(4679U);
    msg.setDestinationEntity(84U);
    msg.fps = 245U;
    msg.quality = 244U;
    msg.reps = 189U;
    msg.tsize = 85U;

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
    msg.setTimeStamp(0.912285233348);
    msg.setSource(5037U);
    msg.setSourceEntity(101U);
    msg.setDestination(39642U);
    msg.setDestinationEntity(250U);
    msg.fps = 5U;
    msg.quality = 112U;
    msg.reps = 31U;
    msg.tsize = 47U;

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
    msg.setTimeStamp(0.215058931828);
    msg.setSource(30125U);
    msg.setSourceEntity(229U);
    msg.setDestination(28447U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.241113326766;
    msg.lon = 0.323949824557;
    msg.depth = 19U;
    msg.speed = 0.297606895493;
    msg.psi = 0.550079358941;

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
    msg.setTimeStamp(0.231990926343);
    msg.setSource(29907U);
    msg.setSourceEntity(116U);
    msg.setDestination(45737U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.873549309344;
    msg.lon = 0.329125282839;
    msg.depth = 109U;
    msg.speed = 0.0612656822024;
    msg.psi = 0.376406366018;

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
    msg.setTimeStamp(0.971586139425);
    msg.setSource(11466U);
    msg.setSourceEntity(157U);
    msg.setDestination(47213U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.118251827191;
    msg.lon = 0.875994108451;
    msg.depth = 253U;
    msg.speed = 0.352978230013;
    msg.psi = 0.288348549211;

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
    msg.setTimeStamp(0.909110402262);
    msg.setSource(38940U);
    msg.setSourceEntity(8U);
    msg.setDestination(55677U);
    msg.setDestinationEntity(152U);
    msg.label.assign("HSNDDNKUNZJMVHWYIQBWWYJHQGLTTDSHYULVSOXWYDKABJXMEVCKQJOVNTMCTGYPRIGUKKAZUMAZNDXVRQQZQHFWTBWOSSPYJVGOXXZKCUPBGLJTLOUHVBZYEGVHZPKDVZTFA");
    msg.lat = 0.951205976507;
    msg.lon = 0.815971817921;
    msg.z = 0.183228193083;
    msg.z_units = 211U;
    msg.cog = 0.45746198907;
    msg.sog = 0.0153459775083;

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
    msg.setTimeStamp(0.734258054648);
    msg.setSource(54386U);
    msg.setSourceEntity(251U);
    msg.setDestination(40746U);
    msg.setDestinationEntity(119U);
    msg.label.assign("MTAGQRSMSUINFIDVYRHPFCXEJWQEZBANBHKIISISXAOYTNUUZCP");
    msg.lat = 0.412670540679;
    msg.lon = 0.669854978836;
    msg.z = 0.765727469795;
    msg.z_units = 202U;
    msg.cog = 0.612610594661;
    msg.sog = 0.62924831895;

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
    msg.setTimeStamp(0.104007362421);
    msg.setSource(14673U);
    msg.setSourceEntity(65U);
    msg.setDestination(59026U);
    msg.setDestinationEntity(5U);
    msg.label.assign("YZDVCXJPVWYFKGYPFTWKJKCMERQDSUYMMDXQRJOCMSNFQXBZADNETAQZYPYWEDLZGGVASZUSVKLNIUAELENKGWPLQBNLBLRZXPUJVECOMBGNGBJUEWJDCQFADEETUM");
    msg.lat = 0.868453097224;
    msg.lon = 0.805417609048;
    msg.z = 0.65958579861;
    msg.z_units = 37U;
    msg.cog = 0.626093166218;
    msg.sog = 0.0308286614263;

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
    msg.setTimeStamp(0.400821840837);
    msg.setSource(60985U);
    msg.setSourceEntity(248U);
    msg.setDestination(1894U);
    msg.setDestinationEntity(139U);
    msg.name.assign("RIOALDXVERKHXYTAEBBPYRIZGWCXQNHLGDNUPCDWFOTWJZAHSYBOUQQJSZSMJCKUKMJMWHMBSUMDTLTRTMEEZPBRFLXTPFQXQGHRGVKLHMWKAONVJONXRABOCVQWUWGMKLTOGQZIZYRTKRAQZTYFWQKHXFACTIXEHULDJSJCNSESGVUZEIKPJXXYV");
    msg.value.assign("DMVZTIQLPGOBXJDMWBJJPKTKRZKBLSXPZXPGLPDTBBRQSWUQKJZYEYACGHSGGTLRIYDWVEYHVJNGOENRLJEUXFSIFNRUAEIRNRAZHVFRYTZYFIMUKSJQZ");

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
    msg.setTimeStamp(0.600572948922);
    msg.setSource(11225U);
    msg.setSourceEntity(199U);
    msg.setDestination(29219U);
    msg.setDestinationEntity(232U);
    msg.name.assign("AGELKFSOIVIZHHBZSSRVGAFPHAJQTWKDKOMJSDXFPAYATVWAYTJLVEIKLRSMASURPJMXCGCFTCZCBVMIQJXKDKJFTHPYBFEYLNUMDHVNNTLEKVWXTZQNUIFWKQHYLDJZKTCOTBUBJGHYMCZRWIPXWMGLOQESDAYSDBNZXXBSINQPGZHNGQRUO");
    msg.value.assign("XAAUJIKMUQMKPGTHQZGE");

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
    msg.setTimeStamp(0.707524336568);
    msg.setSource(8596U);
    msg.setSourceEntity(82U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(127U);
    msg.name.assign("CRFWURNOSTYBCFBVFNDUTYJZSAXIDRVLPHDSYAYOFHCZFKRAMYQDZSWQMJKODMAUPJYTMXZQZXUHTLHJACPZHBMBDTIDELMLGZLKPRQFBNCSXFCNTBEDFNEPERAXOCKCWMQDWLYDQBEJIRHIOAKSHKMULXNMPLTFWBGVIRWPCEBGZVMIXVJQALZSQYFXXQRGEBVYWNPHCGOKJTGUAKIOOEKJWUUVTGNVWRJSJWSZVAHGPITIOGPUYSNNXU");
    msg.value.assign("BPNBYWYCAOTASVKYXWKJGBFQKXVZNHLJAYKQRVDDPNFWJQUXEEQNSHRWOUTLVWHUMNUMQKYEGSFMDPTCQCGRZBAXYZCNABVMREAUAKUW");

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
    msg.setTimeStamp(0.0842712219055);
    msg.setSource(29940U);
    msg.setSourceEntity(164U);
    msg.setDestination(27234U);
    msg.setDestinationEntity(64U);
    msg.name.assign("SNBJFHYIOCRDYNGVXXWHXMDQRBZJPLBJVMOCZVSGNWELYALSHOZTEAQVSCINSRUWNBCJRKNUESWQNXVSFURQSGNODWTPAIJQMIHEDINPSTKUMQGEDQXAWTGEFIKYTCUKBSQGYQHPGO");

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
    msg.setTimeStamp(0.611370457542);
    msg.setSource(59936U);
    msg.setSourceEntity(36U);
    msg.setDestination(5289U);
    msg.setDestinationEntity(145U);
    msg.name.assign("PZWWUADSCJAYMURQLHKIMUPAZVVMD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YADXIUXQZELJSGATVIURVPNSOHWVJUSOXCHPSCHAZJORINVRRUXCQELWOFMTXZKDJBLASMCKZQFIBNLWKYLCYAFMDNBIBUWKHMFOPSHOFPNH");
    tmp_msg_0.value.assign("MWQPWCWAKNDQRBCTKXDYWSOWOYEDAYFJNGHVZDERUKPSMTPQBBCGXSU");
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
    msg.setTimeStamp(0.54810602509);
    msg.setSource(56769U);
    msg.setSourceEntity(43U);
    msg.setDestination(51895U);
    msg.setDestinationEntity(207U);
    msg.name.assign("SJXDUEFNFHXVPZXXCYGBOPGBKOWPYZSVZASQEFHLRFBKIEQBXPMKOJVBIUOAIVQXVXSHMPACJELIELRTWUCGIJUPSLBKHVCTAKDSIQWNYOIZPBTQKPZDVYTWLEJYFSQYZMNLTWKEDDCHWOKLHMLSXMATOVYJNIQGRWUJGNMEHLJYFMDUDDANNGRTGCMJGPFNRLRWOFREUASQONBTBYKYRAUZAJAQTCVCVZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QOCRQPJFOPCAYDQVVLCFDDUXPOEEQIQGIQWNOXHNAYGELEAZKZHABWRUWRHHXUJMBMDZCDZMKYSWISEYJUOTFRGBWNLVZHTAPGTAFSCXPTFMSVLLWXGIGWFBVULPSNDYWJPHKXXOBBAFALWU");
    tmp_msg_0.value.assign("ZANVCNFUCWQKHKIRTOWEZDPGHDVEPTRFKEHRPKLJGYNSQWIZDWJJTSXBTPOMCNHLODS");
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
    msg.setTimeStamp(0.125460160732);
    msg.setSource(58412U);
    msg.setSourceEntity(58U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(3U);
    msg.name.assign("NOEBOJTGTYBZCTWJYEUTBNHZUWDZQVPGQKRRHXHAKSTKLYQNEFIAOAPQAZZXYGMAVSMXBAVVAVCZUNEEBIBOVOOBRJUGHWXHRQJOOOLYGYJUMWEHFUPQVFISGILZFPVECIPKNWXMDLMRBCLQUKZHFDMILCNEIQHMYFKKOYQGWRZFKXJFXUDSDRTPWWNLHCAPXBPCTISSJXSFSFDTBRJTMCDLSXNYVUMP");
    msg.visibility.assign("WENQDTPXWWXZLMVRINTBFCSAFUCTCQETXXDWUON");
    msg.scope.assign("XHXLEVUUZRNWTKVQXBQMFSBLKOPPFSEGKARHTNDFEYSXOPNNQCWWVTNAWKVUVQCCMYPDNTVTBDEOIRKKOIJWUGBXTIMNZOEYWETYAYZONZXRMMBNWNYLTEAUHIIQCJACAPXDGFMSDCGSCCELRHRJUWGSCMVFAFSJHGFYZFUMZMDFKFLSPIWQBHHHZJJPXTGEAXLALYSQRBRHBJGUVVWLQBPZCMILGDROVDJDAODXBYPIKISUZJORGKIZUQKT");

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
    msg.setTimeStamp(0.799879896125);
    msg.setSource(33157U);
    msg.setSourceEntity(127U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(193U);
    msg.name.assign("AZVVMNVCLTTOQPASIXCRBFDGPNEHGGYCORGVBKYNHGUPMLCUXWHMEIYGXIDHPPBPKZFRCPESEOTPKANKNLIUUOJDVJZQXMFQUQFNOSJGCMLWIYSZLSFHEGDLABEBJHXBVEG");
    msg.visibility.assign("TZOXAGTXKQBJXBF");
    msg.scope.assign("IGXSKQVAPXLFCUTWERRQNIKFOBFXJOKDVKQEMPAQBWUBINODKFDEPAPLJFOVTDZYGAHLGHVGRCUZDYWVTQVBEYGINUJQCDSXVPHBFQAGWACTJYYUNSWABCZRTHBUYAOZAPHYRYBJVKXJPKUTMXIIOTOHFCHQDZLLBHIZGSRTRIMKWMXNWOPTOACFWNRNUSJEMLMIIENPRGDMXJB");

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
    msg.setTimeStamp(0.982760527556);
    msg.setSource(31995U);
    msg.setSourceEntity(74U);
    msg.setDestination(56372U);
    msg.setDestinationEntity(121U);
    msg.name.assign("DSXNZUDOXOUTLTHTHQFXNPSGWJLCVQBPPZHHFAMUFMUAKXOBKQGFUENCFXJGAVHDIORQXEFRIKGDQETWRSRMWZGYRCCSKAGQOVQQIFXHLUVCYAZISHGUHWYJOXIBMPEPCOHZVTWNEJALTONKBVLZEYNEJDMPSRJYQSGMMLZLFYWFEDSLORBLJEKIKMWVIHNPTNRDMEBWUWAZGRYTYWJVGB");
    msg.visibility.assign("ELXHSWKNVSSAMNBUFNHHKBQCCTJPXREYCHYOUSEUWTIMMIYDCUNWKXVYAJFXXRPSYMITFWMAOGJ");
    msg.scope.assign("JTKNFXLJGRFJAFWWHQWXOEZHVZGPUWZWMXVOMBLZNXJYDVUAJZNARWTRBISNGUZCFLPNKQRKXEDKAETSZHFQZHDRC");

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
    msg.setTimeStamp(0.642664695356);
    msg.setSource(5407U);
    msg.setSourceEntity(197U);
    msg.setDestination(53109U);
    msg.setDestinationEntity(161U);
    msg.name.assign("IQTVLCRQTUQTMYKSVRBPRJHZGSIFDUJUISXHNIELZNBTTRPODKJEXFAPAHKZEBSRIZEPNFAHRHZIAHTMNGYSRJMOUNCBBPODQGDEAKCXAYXVRBSWSYDFEOBFOFWEUHPEMGNDOGCWTGWKVBJGCLZEYWQUJBVXMCLIHVQHTVFZDZYNJCWPZAFMMMR");

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
    msg.setTimeStamp(0.922879085119);
    msg.setSource(7023U);
    msg.setSourceEntity(76U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(41U);
    msg.name.assign("BZPLSSDJASGCASYNXNPYYRTLGJAKOWXIUHMXQVETPZYBBNQOHJDKTSHUOYJRMZAFBJIBIGQYMORZIQPTWRQLWFJNMSDKXCHAWENV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RPKECNRRNOHDQHUMIBJZCEEBEVRXX");
    tmp_msg_0.value.assign("RNFYJKEVGJXOQCOKKGYAJDWCBEKPPIHWVFVKLXGAKDEMMPQXEPHHMPMIACCVODGGJSIFMWGXNQAONSBZTTSKZMDLWGMSDZATOYZMJVYLWNCLILBAPXSHOB");
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
    msg.setTimeStamp(0.90196956526);
    msg.setSource(37000U);
    msg.setSourceEntity(130U);
    msg.setDestination(6186U);
    msg.setDestinationEntity(180U);
    msg.name.assign("VGETJAHZDDHCTFZKZUPSOFHTDXCSJRYZDLWBRA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NSVZTZIAPRJZE");
    tmp_msg_0.value.assign("UGEJMYCAMQVNYLHZLIMDDRTBTMOACTHBZWIHRTJQVWYRLCWDAXBF");
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
    msg.setTimeStamp(0.059101363655);
    msg.setSource(29972U);
    msg.setSourceEntity(239U);
    msg.setDestination(57756U);
    msg.setDestinationEntity(20U);
    msg.name.assign("HXMSZWHGXDIIQBJJTTCSAOHEJBXZEKRFUQSLRMITTJFLCVICTWRGHRSLHPIIYNYPWCLGZSDDSAXLJDKQCXEYBIDMEPLGYVRKOEBGENOUVGAZZZNPYDXNPDCKPQQUPONRQFIJIZGEOMOUFAXBAFFKQMBQKWOGMYEVBEYVFAWFLCTTKUGCJJIYNRDTAUAYNZKSRPXMDWVSXLYBQNKJOCBFTASGROV");

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
    msg.setTimeStamp(0.849233388912);
    msg.setSource(61016U);
    msg.setSourceEntity(153U);
    msg.setDestination(47220U);
    msg.setDestinationEntity(111U);
    msg.name.assign("NVSWCBVMWHYOBRNDPVFEOBHMQEJFRHJQNTPZBBRZEGIPREXPFFQSIVHGKRWAKLNTJLZQBSVPKJAMJJXCTNFTSMZLDUMSQZHXLMMTTCCUCGGTDHQLZMIUBWFGGJFVLZXZLHEOLXAHPNK");

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
    msg.setTimeStamp(0.963491763905);
    msg.setSource(14644U);
    msg.setSourceEntity(242U);
    msg.setDestination(24870U);
    msg.setDestinationEntity(101U);
    msg.name.assign("XTBESXFSKD");

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
    msg.setTimeStamp(0.792898547948);
    msg.setSource(63036U);
    msg.setSourceEntity(228U);
    msg.setDestination(24935U);
    msg.setDestinationEntity(142U);
    msg.timeout = 1783368740U;

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
    msg.setTimeStamp(0.923772555953);
    msg.setSource(60340U);
    msg.setSourceEntity(92U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(254U);
    msg.timeout = 2986753837U;

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
    msg.setTimeStamp(0.919734585127);
    msg.setSource(33735U);
    msg.setSourceEntity(152U);
    msg.setDestination(52324U);
    msg.setDestinationEntity(192U);
    msg.timeout = 1954627661U;

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
    msg.setTimeStamp(0.938435195442);
    msg.setSource(16998U);
    msg.setSourceEntity(182U);
    msg.setDestination(19041U);
    msg.setDestinationEntity(55U);
    msg.sessid = 3550106896U;

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
    msg.setTimeStamp(0.0805038609425);
    msg.setSource(35771U);
    msg.setSourceEntity(138U);
    msg.setDestination(15705U);
    msg.setDestinationEntity(183U);
    msg.sessid = 3808555709U;

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
    msg.setTimeStamp(0.923366253487);
    msg.setSource(46966U);
    msg.setSourceEntity(131U);
    msg.setDestination(14002U);
    msg.setDestinationEntity(153U);
    msg.sessid = 80979445U;

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
    msg.setTimeStamp(0.60547446773);
    msg.setSource(13047U);
    msg.setSourceEntity(79U);
    msg.setDestination(48032U);
    msg.setDestinationEntity(61U);
    msg.sessid = 2172098912U;
    msg.messages.assign("AYXNMVABLVDTLCNODCCEUFYHPICXYTFHWSDCQLJBQOZJERYJVODD");

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
    msg.setTimeStamp(0.65033325993);
    msg.setSource(1372U);
    msg.setSourceEntity(41U);
    msg.setDestination(34309U);
    msg.setDestinationEntity(148U);
    msg.sessid = 3127604876U;
    msg.messages.assign("FAPDJFBRGYSWELZJOAIJTLDLCEZLTPSZDDGWBFQTYINZZWTHLNLRAYJ");

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
    msg.setTimeStamp(0.614118557816);
    msg.setSource(25975U);
    msg.setSourceEntity(49U);
    msg.setDestination(3312U);
    msg.setDestinationEntity(49U);
    msg.sessid = 3767093132U;
    msg.messages.assign("PSGDGBZKCRPFRNMTDGWAYXPHKQOEWDRSVVGGNZHWYJORKLJVPGFFWCZCJVCXLZXPQXNIQQYIHGENNORGKCWJPSBVRZLXABMBJUIAAHDULTETRUEJRANMTYBEXHMLFSSUOLSFARJBDQSZXZGELYIEKXLPKQIMIHUWYIZMFQOUBDFAMCHHEIYDWQTHVEUCBWVKDQTPEDGJRNCZUQZNUBSMSKXOYWTTUXJSLLHNOCAVPIJYPKTFKVM");

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
    msg.setTimeStamp(0.707751976584);
    msg.setSource(9699U);
    msg.setSourceEntity(30U);
    msg.setDestination(44369U);
    msg.setDestinationEntity(18U);
    msg.sessid = 4121175673U;

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
    msg.setTimeStamp(0.688696630947);
    msg.setSource(29764U);
    msg.setSourceEntity(218U);
    msg.setDestination(6987U);
    msg.setDestinationEntity(202U);
    msg.sessid = 737936941U;

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
    msg.setTimeStamp(0.508297393445);
    msg.setSource(48206U);
    msg.setSourceEntity(6U);
    msg.setDestination(13904U);
    msg.setDestinationEntity(222U);
    msg.sessid = 3734231136U;

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
    msg.setTimeStamp(0.588798674182);
    msg.setSource(4713U);
    msg.setSourceEntity(201U);
    msg.setDestination(4865U);
    msg.setDestinationEntity(242U);
    msg.sessid = 3210879782U;
    msg.status = 147U;

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
    msg.setTimeStamp(0.0179635114431);
    msg.setSource(7840U);
    msg.setSourceEntity(179U);
    msg.setDestination(13626U);
    msg.setDestinationEntity(131U);
    msg.sessid = 1444872748U;
    msg.status = 204U;

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
    msg.setTimeStamp(0.940213709788);
    msg.setSource(5417U);
    msg.setSourceEntity(175U);
    msg.setDestination(61580U);
    msg.setDestinationEntity(158U);
    msg.sessid = 2811456597U;
    msg.status = 124U;

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
    msg.setTimeStamp(0.599785816846);
    msg.setSource(49109U);
    msg.setSourceEntity(124U);
    msg.setDestination(47620U);
    msg.setDestinationEntity(90U);
    msg.name.assign("SNJAQJDTXKVCZCENOQGUMFVFAZURBYIFAHESQPRDVKYXNWWJHGYVACPCDQZOVVUMOEDKSJKTTUWTRTKZZMBSOGLHWSLPNKNHCRQCMRXVMZKNRPFIJY");

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
    msg.setTimeStamp(0.655729202654);
    msg.setSource(36898U);
    msg.setSourceEntity(119U);
    msg.setDestination(12377U);
    msg.setDestinationEntity(242U);
    msg.name.assign("PFNTHVNRNPETKBYOXRQCRFAJEYASSKXZQOQEEMDFEPZLNXWBOQRTBSVQFLXWP");

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
    msg.setTimeStamp(0.634852429434);
    msg.setSource(34135U);
    msg.setSourceEntity(52U);
    msg.setDestination(65444U);
    msg.setDestinationEntity(50U);
    msg.name.assign("JIJVASMYOYHFCNVMMOREWTPDTNBZRAWQEBUMQNIIDWQDKNQJNSLUVXRPHUTXNJLNEBWXIZGLAQDOUSLTFIXFHZNCOGEABSYKYFLXMOOOLFSPLDGJYKQJUIPPMZAJDECKOIMDTZCNHIZAIRVXUZHZVSBHSVRGDACTUTWFFIPQJ");

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
    msg.setTimeStamp(0.48889873219);
    msg.setSource(20217U);
    msg.setSourceEntity(171U);
    msg.setDestination(24799U);
    msg.setDestinationEntity(88U);
    msg.name.assign("IVGDMNMBGPBXZVSCHDIVEYMOTGGFWWBSYBYHFFAGEOYWJQSLBQVRQQXKJZLDYEXUXITWYQDXG");

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
    msg.setTimeStamp(0.153447858859);
    msg.setSource(64140U);
    msg.setSourceEntity(49U);
    msg.setDestination(19217U);
    msg.setDestinationEntity(241U);
    msg.name.assign("FDYWZZHBOMVXKULQUQIWSIHXPREM");

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
    msg.setTimeStamp(0.968020757342);
    msg.setSource(57722U);
    msg.setSourceEntity(108U);
    msg.setDestination(10148U);
    msg.setDestinationEntity(24U);
    msg.name.assign("OQKUGHBTEFWVFAXBWSZMVLMQZHUMNOHTOZGAZNOJSYLKRYEHLQRRCAXSEOUCLQMYJPMRTHCFJCMTSJLIDFKKRAYCNFGSRNIKGNSNKHPRBLNAVFHWUWUFQGQLYCZADSXEGKI");

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
    msg.setTimeStamp(0.648872809456);
    msg.setSource(57444U);
    msg.setSourceEntity(162U);
    msg.setDestination(52806U);
    msg.setDestinationEntity(70U);
    msg.type = 228U;
    msg.error.assign("QPTLJOYYIEMCIHJIQOSVGEOULNZVEQRIGIWHVGXKCQKXYZPUHYBTAALNSUNHFRBPOYUDQBHFHKVCIDFAYSKXWSKSMCRLEDCNCFJDWTFYDDOKP");

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
    msg.setTimeStamp(0.399448136571);
    msg.setSource(27686U);
    msg.setSourceEntity(185U);
    msg.setDestination(42752U);
    msg.setDestinationEntity(142U);
    msg.type = 171U;
    msg.error.assign("GFGRJDSZBFJBAQZWHJMHPPZAOWTRYVHGNVUELUBRUVJQZTSTYIDXYWDRFIZUWDAEYNQJCHEKUSKEALDOMNJIVHRVXJENFEBIYHKKURHDTWPNXLTWIYITKGFARCNQEPLXRORB");

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
    msg.setTimeStamp(0.238054508018);
    msg.setSource(64103U);
    msg.setSourceEntity(197U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(96U);
    msg.type = 43U;
    msg.error.assign("FATWCRPFCEHALZHDSGBSWQXOAZLJGOGRCCHVZUGFOWYDLPIDVAZEHXFGZJKKJSTYZWSNRJQTHNFECUBTVXLAOZYGTQCBGXPGKKAH");

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
    msg.setTimeStamp(0.11055497169);
    msg.setSource(7332U);
    msg.setSourceEntity(32U);
    msg.setDestination(12671U);
    msg.setDestinationEntity(121U);
    msg.seq = 51893U;
    msg.sys_dst.assign("UAYMIUIDVJACXSYPQZUCZRKNQPAPSATMNUZKIUFEHTWQDPRKKMJFNYNLBAUDBAQPFHRROHBYTZDTKHOMEGQFLGJQXSXFTVELMWLSYFOHCONSXJECBELDTCPZLYGLGEXEIVSORMBKFNDETPRFVBACQQIFSBPNJJNYHJRKQSBGTGDWATEKVYRRGYOMWJYHUCHDCLOZIZVWSXVCLBG");
    msg.flags = 160U;
    const char tmp_msg_0[] = {109, 88, 114, -115, -101, -5, 113, 75, -32, 0, 21, 95, -32, 70, -116, 88, -2, 22, -16, -107, 11, -17, 66, -80, 59, -12, 96, -33, 1, -69, 80, -45, 23, 63, -102, -58, 122, 55, 46, -54, -25, 19, -113, 34, -86, -48, 68, 55, 72, -37, 19, -17, 61, 80, 88, -44, -3, -115, -16, -75, -8, 68, -92, 17, 88, 69, 97, -1, 27, 71, 19, -60, -10, 48, -82, -4, 119, -58, 36, -39, 35, 6, 79, 45, -107, 118, 94, 3, 62, 125, 65, -17, 106, 45, 2, -52, -25, 94, -15, -66, -60, -127, -108, 47, -116, 97, 111, 83, -74, -19, 46, -122, -4, -105, 64, 60, -62, 119, -58, -111, -15, -3, 126, 14, -79, 37, 82, -3, 79, -32, 79, 8, 16, 34, -16, 41, -79, 123, -35, 51, 37, -56, -115, 54, -57, -91, -100, 62, -96, -95, 53, 103, 101, -88, -98, -47, 43, -63, 53, -34, -92, 72, 52, -8, -62, 100, 41, 74, 112, -4, -68, -116, -59, 87, 96, 33, 67, 112, 13, 124, 96, -97, -80, -92, -91, -125, 117, 24};
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
    msg.setTimeStamp(0.191705828057);
    msg.setSource(64247U);
    msg.setSourceEntity(233U);
    msg.setDestination(31734U);
    msg.setDestinationEntity(238U);
    msg.seq = 46148U;
    msg.sys_dst.assign("TFQEOIXKVVNZEFTIRLTLNDMQWHSAGZCOXRURWLGTXIYCYPDDCAHJVBFBCZZZDNOCQXWMYXXFWJUMYCOLQXAQJHBDHETQBMGIUNNMJYKON");
    msg.flags = 139U;
    const char tmp_msg_0[] = {57, -38, 54, -75, 64, 38, -77, 70, -100, 57, -6, -63, 95, 12, -59, 89, 100, 35, 103, -123, -106, 63, -58, -35, -26, -40, 38, -76, -27, 69, 119, -92, 111, -6, 87, -1, 125, 22, 54, -108, 50, 103, -31, -79, 86, -7, 41, -79, -5, -124, 6, -90, -32, 19, -50, -53, -50, 89, -9, -75, 105, -39, 19, 4, -115, 55, 18, 48, -36, -96, 40, 7, 3, 6, -35, 53, 87, -70, -1, 57, -67, 28, 80, 115, 46, 94, 61, 95, -96, -54, -120, 59, -25, -33, -29, 15, 69, 103, -78, -107, -44, -108, 123, 123, -117, -119, -102, -1, -6, 58, 47, 72, -26, -12, 75, 101, -125, -18, -47, 7, -37, -107, -35, 8, -125, -20, 20, -4, 71, 66, -4, 123, -66, 112, -125, 67, -64, 49, 6, -82, -34, 124, -17, -65, -121, 64, -105, -47, -84, 60, -34, 1, -101, 32, -55, -12, -124, 33, -15, -101, -53, -100, -19, -61, 9, -66, -31, -128, -25, -9, -122, 7, -73, -40, 82, -36, 55, -59, -77, 18, -10, 51, 124};
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
    msg.setTimeStamp(0.67755207946);
    msg.setSource(55531U);
    msg.setSourceEntity(78U);
    msg.setDestination(6332U);
    msg.setDestinationEntity(45U);
    msg.seq = 46404U;
    msg.sys_dst.assign("YQDUJVSZLYMTGVMVPINCFTLZDLTXIJAQXEQSDWJPSPQOCVULGBBSMNXQKHPMREFTRZHUXUZWRKLJKBEVGXVGPZQRXPUJRNBNEEJCCKRQEEACOGODYESCWYRZBWXKTGCBGNCVSKKTGFHYPKQDLFQZALPSHROOIYSCXDLYWIMSZJWDOAIMBFIKYLAYNGMDORZHIBPFTWTYVNJVJWBHLFMDOVMFZQBDKUJHNWTAXGTOF");
    msg.flags = 18U;
    const char tmp_msg_0[] = {18, -114, 111, 70, 123, -122, -73, -81, 101, 43, -29, -2, 123, -61, -24, 19, 9, 91, -78, -103, -93, 40, 74, 27, -6, -41, 31, 37, -36, 56, -71, 67, 90, 23, -113, -43, -6, 64, 123, -7, 19, 79, 9, 105, 80, -64, 99, -102, 39, 94, -125, -115, -22, -25, 63, -53};
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
    msg.setTimeStamp(0.244513974845);
    msg.setSource(10876U);
    msg.setSourceEntity(103U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(70U);
    msg.sys_src.assign("MFLGGPPPMVERTAISKMBHXRZSOSBYWRUXONFODVUD");
    msg.sys_dst.assign("DTFFYKPVWSUWXOLWADIDYMKHWUCJGLLSNDBEZGSMUXEIFAPVKPSTYIMEFKZGUTNFAOQENLDGCLCCRTLISNBHJPVWFRABMSWNRMOVEGYKEJQTWJMPCETXQJOBWXUPTJUHQQQKGWHPDOXIRQARCLLOYRMJIVSYJAXABOBVDZVGNHGESRQYMZSIZIRT");
    msg.flags = 225U;
    const char tmp_msg_0[] = {-72, 43, 97, 24, 49, -30, -33, -88, 62, 42, -38, 125, 88, -41, 68, 13, 100, -91, 124, 35, -1, 58, 0, -39, 99, 23, -80, 57, 109, -54, 112, 22, 34, 5, 82, -116, -33, -61, -73, -67, 31, 67, 39, 11, 39, -110, -121, -13, 28, 74, 66, 3, -3, -90, -67, -91, 104, 21, 0, -60, -34, 24, 9, -108, 39, -95, -71, 13, 99, -20, -11, 106, 43, -75, -60, -99, -80, 42, 27, 55, -105, -28, 70, -59, 7, -93, -35, 29, -40, -31, 70, -69, -32, -107, -2, -86, 77, -40, -17, -105, 113, 32, -98, -57, 24, -27, 21, 93, 4, 85, -72, 76, 91, -78, 7, -13, -95, 36, -32, 126, 121, -6, -98, 113, 62, 82, -76, -24, -72, 76, 48, 101, -28, 2, -81, -61, 79, -21, 30, 44, 77, -15, 48, -80, 78, 64, -18, 120, 44, -65, -45, -95, -25, 121, 35, 10, 55, -83, 71, 95, -18, 40, 57, 87, 62, -41, -34, 95, -19, -126, 12, -82, 27, 79, 44, -48, 24, -112, 102, -73, 6, 89, -88, 67, 6, 79, 115, -71, 81, -68, -112, 86, -82, 104, -82, -35, -9, 76, -29, -83, 22, -67, 49, 116, -13, 101, 100, 82, 6, -87, -109, -2};
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
    msg.setTimeStamp(0.681241610506);
    msg.setSource(45821U);
    msg.setSourceEntity(34U);
    msg.setDestination(62276U);
    msg.setDestinationEntity(241U);
    msg.sys_src.assign("IZVZUMNAKGBMFCQYTPKRHBLORZIVOGYAAVJHJOJDSNVKYMBTPDYOADEHQBNHYIJMZIXJOGWTBFTWPDQYJKHCTQCDGPHWOKLYWQWBONXFYKVLMZZWJREHCCWLUJFASLTNMCDRRFTIUIGBPXTUEKQBXSWXEBKILDCXSOYSTLZLSVDENO");
    msg.sys_dst.assign("XJXCLUVIQFNQEUFDVQLZSRVCHDOKHBIEHYABWFPTKDOVEPBGGAPDTLTFRFBRBSWEVTWGZRMPWGAYSTRLQTYDGECSSWUHFGDKKUKWHOJMZISOZALMDA");
    msg.flags = 164U;
    const char tmp_msg_0[] = {101, -108, -42, -62, 64, 48, 119, -8, -10, -111, 89, 67, 124, 52, 94, 111, -30, 7, -118, 74, 87, 15, -84, 105, -90, -100, 93, -69, -61, 21, -126, 58, 6, -32, 47, -80, 17, 102, 59, 77, 22, 100, -96, 122, 86, 88, 96, -10, 107, -113, 21, 103, 15, -35, 54, 46, 47, -94, 90, -29, 112, -56, -19, -67, -80, -74, 69, -128, -37, -12, 0, -8, -63, 42, 114, -118, 125, 112, -109, 71, -97, 3, 14, 66, -34, 46, 112};
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
    msg.setTimeStamp(0.219022493958);
    msg.setSource(42696U);
    msg.setSourceEntity(145U);
    msg.setDestination(52635U);
    msg.setDestinationEntity(189U);
    msg.sys_src.assign("PIBFYDWVOTTYHJBZCEVXGBNMYTEFVBSVLWUQNQMLWXYFAZULILJMBCASQSDHEYPHGKJWIVXPNZJWEVRE");
    msg.sys_dst.assign("HTAYGTLZZGIXWTKWQRNPWYCOXCCVDPKPONJPVBCWXCMOTL");
    msg.flags = 224U;
    const char tmp_msg_0[] = {11, 73, 7, 6, -78, -110, -113, 44, -3, 56, -100, -105, 50, 19};
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
    msg.setTimeStamp(0.416360275768);
    msg.setSource(26430U);
    msg.setSourceEntity(249U);
    msg.setDestination(21266U);
    msg.setDestinationEntity(166U);
    msg.seq = 47398U;
    msg.value = 97U;
    msg.error.assign("ROJKIOUJIWQYSXUUTDGEWRZREFIPGGEBLHKOAKPYZSHRLADCDGENDLNQERSWPIBNCHIIAWFBPFRAYNVCDKQQKVSLXQOJSMOAUEFFPKXLZNFWMNIQLWPXADYVTLVZJZPYGASOTIWPGNTDQMICKMQMXNGPZZHC");

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
    msg.setTimeStamp(0.940385200438);
    msg.setSource(35794U);
    msg.setSourceEntity(202U);
    msg.setDestination(2114U);
    msg.setDestinationEntity(63U);
    msg.seq = 38850U;
    msg.value = 71U;
    msg.error.assign("TEKKAIPUVGWTVOHKQTGDTOENKKAQSWRZVXSVXNSNWKOBJF");

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
    msg.setTimeStamp(0.085835634019);
    msg.setSource(8655U);
    msg.setSourceEntity(181U);
    msg.setDestination(5699U);
    msg.setDestinationEntity(93U);
    msg.seq = 19422U;
    msg.value = 251U;
    msg.error.assign("XQBFNYGAFAQFWEJYTBOCRFLHPQRJLXCVODXSLAQIUMQKUSIIDCICXXGRVEKIBLYJCJWECLRNIKKLVWTOEPPOVWRSRNGYEKRHBTBJSWFMUNQ");

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
    msg.setTimeStamp(0.699655867051);
    msg.setSource(51080U);
    msg.setSourceEntity(85U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(164U);
    msg.seq = 43808U;
    msg.sys.assign("JWZRESWAVHUZIZOPIIIZJONSXHEZYBJYJFGYQZWOLPHDGRSNEO");
    msg.value = 0.876781169238;

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
    msg.setTimeStamp(0.730135861385);
    msg.setSource(14001U);
    msg.setSourceEntity(209U);
    msg.setDestination(64827U);
    msg.setDestinationEntity(62U);
    msg.seq = 387U;
    msg.sys.assign("YNQUZZHXNIGEYGLKHMGJARNRVBVJTCRSAPPEAVSQCUDORFARQECMPT");
    msg.value = 0.0821592953714;

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
    msg.setTimeStamp(0.200155360725);
    msg.setSource(27538U);
    msg.setSourceEntity(109U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(84U);
    msg.seq = 43431U;
    msg.sys.assign("OPCIAFRECMILZLHOFTWPHPMJJLNYRYIQNIQLPJHZNYELHILCURFGSLIZDGBGMKTCBRBNYHFAUIRHYMSOVKDSELDRSJQCMZNLWKAUJYNTBZMEUQOBQHYUVAKQKSWWYYE");
    msg.value = 0.291769855153;

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
    msg.setTimeStamp(0.906895095311);
    msg.setSource(49575U);
    msg.setSourceEntity(56U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.0622067929568);
    msg.setSource(58287U);
    msg.setSourceEntity(206U);
    msg.setDestination(25246U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.0089615504734);
    msg.setSource(14242U);
    msg.setSourceEntity(72U);
    msg.setDestination(40378U);
    msg.setDestinationEntity(234U);

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
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.694610848477);
    msg.setSource(3326U);
    msg.setSourceEntity(160U);
    msg.setDestination(34733U);
    msg.setDestinationEntity(50U);
    msg.action = 145U;
    msg.lon_gain = 0.0710323473709;
    msg.lat_gain = 0.419264913849;
    msg.bond_thick = 0.413374712061;
    msg.lead_gain = 0.982639020568;
    msg.deconfl_gain = 0.490574554577;
    msg.accel_switch_gain = 0.810472529608;
    msg.safe_dist = 0.715246695318;
    msg.deconflict_offset = 0.00507320663443;
    msg.accel_safe_margin = 0.0995353581627;
    msg.accel_lim_x = 0.673767212161;

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
    msg.setTimeStamp(0.495205564385);
    msg.setSource(31814U);
    msg.setSourceEntity(55U);
    msg.setDestination(8360U);
    msg.setDestinationEntity(109U);
    msg.action = 94U;
    msg.lon_gain = 0.317807385999;
    msg.lat_gain = 0.165822268678;
    msg.bond_thick = 0.701926141407;
    msg.lead_gain = 0.486534208623;
    msg.deconfl_gain = 0.378615878003;
    msg.accel_switch_gain = 0.0764235511983;
    msg.safe_dist = 0.16933753932;
    msg.deconflict_offset = 0.279165262958;
    msg.accel_safe_margin = 0.48412962139;
    msg.accel_lim_x = 0.720034592981;

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
    msg.setTimeStamp(0.306979653195);
    msg.setSource(59747U);
    msg.setSourceEntity(170U);
    msg.setDestination(65270U);
    msg.setDestinationEntity(8U);
    msg.action = 23U;
    msg.lon_gain = 0.783122357118;
    msg.lat_gain = 0.639231952389;
    msg.bond_thick = 0.092772126205;
    msg.lead_gain = 0.800912871852;
    msg.deconfl_gain = 0.38011712144;
    msg.accel_switch_gain = 0.945391675193;
    msg.safe_dist = 0.206544157609;
    msg.deconflict_offset = 0.164430971161;
    msg.accel_safe_margin = 0.309301096129;
    msg.accel_lim_x = 0.702876488765;

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
    msg.setTimeStamp(0.225621350422);
    msg.setSource(16967U);
    msg.setSourceEntity(117U);
    msg.setDestination(63075U);
    msg.setDestinationEntity(10U);
    msg.err_mean = 0.894212820673;
    msg.dist_min_abs = 0.688593123401;
    msg.dist_min_mean = 0.805011759278;
    msg.time = 0.324015075026;

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
    msg.setTimeStamp(0.334020738107);
    msg.setSource(31568U);
    msg.setSourceEntity(205U);
    msg.setDestination(18778U);
    msg.setDestinationEntity(162U);
    msg.err_mean = 0.939725650012;
    msg.dist_min_abs = 0.59305823894;
    msg.dist_min_mean = 0.227607328537;
    msg.time = 0.535079859291;

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
    msg.setTimeStamp(0.423597475314);
    msg.setSource(45566U);
    msg.setSourceEntity(35U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.920226682883;
    msg.dist_min_abs = 0.152178030281;
    msg.dist_min_mean = 0.79875177165;
    msg.time = 0.416281603048;

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
    msg.setTimeStamp(0.811431531945);
    msg.setSource(55424U);
    msg.setSourceEntity(36U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(229U);
    msg.uid = 235U;
    msg.frag_number = 156U;
    msg.num_frags = 130U;
    const char tmp_msg_0[] = {67, 39, -17, 56, 41, -98, 64, -33, -92, -19, 39, 42, -20, 48, -128, 4, -117, -59, 68, -45, 102, 52, 26, -54, -16, 124, -91, -20, 94, 52, -88, 81, 26, -8, 90, 54, -105, -40, -119, 86, -75, -80, -79, 99, 1, 106, -53, 109, 50, -111, -47, -21, -61, -51, -60, -109, 114, 23, 126, -6, 110, -4, -18, -110, -82, 10, -22, 2, -55, 120, 19, 6, 99, 54, -27, 50, -68, 33, 96, -42, -108, -78, -128, -85, 4, 120, 11, -100, 48, -52, 86, -114, -22, 42, 121, -62, -126, -24, 94, 97, 74, 53, 69, 10, 100, -41, 24, -35, -95, 63, 34, 52, -87, -42, 6, -89, 41, 15, -19, -90, 121, 0, -71, 75, 56, 36, -56, -76, 92, 126, 112, 18, 9, 85, 65, 11, 96, -22, 45, -89, 74, 54, 64, 65, 73, -98, -76, 104, -80, 91, 86, -51, -13, 0, 18, -118, -65, -98, 87, 116, -42, 42, 58, -100, 71, -55, -127, -50, -108, -65, 100, -50, -10};
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
    msg.setTimeStamp(0.652977393303);
    msg.setSource(2524U);
    msg.setSourceEntity(246U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(35U);
    msg.uid = 46U;
    msg.frag_number = 191U;
    msg.num_frags = 254U;
    const char tmp_msg_0[] = {-35, 90, 18, 48, -35, -9, 100, 115, -128, 30, 125, 106, 118, -13, 117, 120, -17, 118, 55, -47, -25, -4, 74, -112, 43, 33, -66, -102, 11, -3, -39, -95, -34, 38, -75, 103};
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
    msg.setTimeStamp(0.898533082004);
    msg.setSource(16440U);
    msg.setSourceEntity(161U);
    msg.setDestination(24764U);
    msg.setDestinationEntity(146U);
    msg.uid = 13U;
    msg.frag_number = 124U;
    msg.num_frags = 219U;
    const char tmp_msg_0[] = {65, -46, 18, 108, -9, 94, 54, 80, 45, -16, -81, 14, -113, -16, 110, 110, 104, -39, 75, 92, 41, -103, -52, -38, -25, -74, 8, 49, 4, 30, -92, -36, -21, 120, 1, 21, 126, 14, 37, -120, 26, -21, -95, -73, -100, -50, 25, 79, 126, -88, 82, 37, 38, 10, -112, 21, -70, -79, -62, -79, 1, 68, 39, -112};
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
    msg.setTimeStamp(0.58577931483);
    msg.setSource(16716U);
    msg.setSourceEntity(65U);
    msg.setDestination(42231U);
    msg.setDestinationEntity(241U);
    msg.content_type.assign("ZEWIGFEQBUGNTXDYWHEJUZEUNDBPOXKZJCAJVPNAHPGBEVWOZCODIFZGPCEHNLMATOXZINWYELKAWQBSFORTKCMARKGSURHPLBHVSCNUISERWFTPKMBWXWJHRLZCVJEJXONCZTMQFQKOEQFFBRPXULCOFKPTYVKYMGYIRLIQJVZOGXYGSFSKNJGILCBTAYDKPDIVHYSVGL");
    const char tmp_msg_0[] = {16, -64, -65, 81, 42, -97, -90, -80, -28, 0, 2, -33, 116, -3, 43, 103, -107, 15, 91, 1, 119, -102, 117, -36, 68, -63, 25, 107, 115, 32, -19, 111, 7, -12, -12, -48, -30, -34, 26, 2, 104, -35, 6, -34, 76, -44, 126, 92, 49, 111, 62, -107, -108, -104, -44, 47, -107, -111, 39, -53, 79, -37, -43, -84, -2, -98, -92, -69, -101, 75, -55, 75, 47, 123, -30, -13, 94, 87, -52, 54, 71, 54, -23, 117, 125, -121, 74, 41, -111, -43, -51, -21, 55, 0, -5, 64, 75, 19, -51, 119, -90, 73, -42, 64, 66, 20, 51, -17, -21, -96, 108, 40, 99, -98, 40, 83, 77, 88, -33, -25, -110, 77, 12, 72, 13, -34, 86, -103, -14, -40, -39, -84, 106, -33, -46, 40, 81, -18, 54, -127, -86, -30, -95, -68, 21, -113, 35, 118, 4, 126, -39, -111, -91, 112, 43, -118, 71, -30, 67, 49, 60, 94, 2, -19, 51, 2, 23, -11, 46, -48, -96, 113, 39, 117, 125, -105, 85, -40, -73, -27, -78, 62, 9, -66, -128, -120, -125, 4, 0, -82, -13, -37, 64, -119, 78, 42, 7, -33, 90, -84, 17, 80, 1, -42, -19, 59, -124, -44, 123, 94, -8, -48, -65, -118, 98, 103, -25, -35, -95, -101, -17, -61, -76, 91, 85, 17, 18, 11};
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
    msg.setTimeStamp(0.989675320878);
    msg.setSource(48409U);
    msg.setSourceEntity(202U);
    msg.setDestination(6125U);
    msg.setDestinationEntity(236U);
    msg.content_type.assign("UDYCLCXDRNBHWEVLGBHSFCSHNJMLOSRUSYEUHDTYLAVPNPXDTLBGFPJQWNHDKUQCLXTQQKFSWXHOOCOULMJDBHTKZJGWLXMBEMEZOQCLQUYJBOSMINRXIPGGGDXUPNWZYPQFMSNJRIYWWUSSKZBIAWNSKVTO");
    const char tmp_msg_0[] = {18, -55, 119, 22, -78, -25, -128, -65, -120, -37, -2, -91, 114, -12, 49, 94, 75, -120, -60, -127, 15, -51, -109, 96, -118, -119, -4, -76, -67};
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
    msg.setTimeStamp(0.680424379142);
    msg.setSource(52243U);
    msg.setSourceEntity(190U);
    msg.setDestination(13325U);
    msg.setDestinationEntity(68U);
    msg.content_type.assign("YDIPJZANMTZAJQSPCKXNWEYZKFHQCLUPROWZPOPVUXHEKWFYFHLFSSEQJADEMQYFAFYDOJZUIGCTLLRJWXRMDLSRHAUCWVVIDSISRCSQMGENQYMBCJHTSBHMQIBMBCDKQNBKVGGLZUMFTUYGXYZVREWCREVGKGIJPHVNIRIINJTIUPDQXOFOROFGDZKPMLTYJXWBBRFCAAAXTWUTSAVZYGOLCWNXMEHOUHBJVXDOZGTKAPBDNVQWNXKHL");
    const char tmp_msg_0[] = {-4, 60, 44, 75, -126, 9, -47, -107, -107, 32, -93, 71, 85, -17, -95, 110, 17, -51, -35, 65, -123, -24, 30, -15, 95, -3, 108, 35, 97, -41, 119, -22, 22, 27, 113, 7, -118, 44, 11, 110, 85, 89, 29, 17, 9, 11, 119, -88, 13, -29, 38, 24, 35, -5, -104, -74, 88, -44, 103, -80, -26, 0, 4, 64, 30, -3, -124, 117, 17, 18, 3, -112, -92, 57, 5, -87, -124, -31, 61, -29, -86, -33, 22, 99, 74, -69, 97, 87, 34, -79, -68, -95};
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
    msg.setTimeStamp(0.904611361863);
    msg.setSource(31034U);
    msg.setSourceEntity(65U);
    msg.setDestination(46247U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.0915061797378);
    msg.setSource(24970U);
    msg.setSourceEntity(207U);
    msg.setDestination(25192U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.475987603464);
    msg.setSource(58317U);
    msg.setSourceEntity(188U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(206U);

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
