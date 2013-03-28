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
    msg.setTimeStamp(0.6717044965755972);
    msg.setSource(10412U);
    msg.setSourceEntity(89U);
    msg.setDestination(63688U);
    msg.setDestinationEntity(68U);
    msg.state = 109U;
    msg.flags = 15U;
    msg.description.assign("WUWNSCGCQPCEVJWQULPJHVJNOYGIRPEWJLRJVZKVIRELBBVKGRSLVPRRCKMKSNLIPWLNFYFEMNYJPATNRQOOAEIYSXTCKWHASIXXEHYTJZQGQSDLFFDOWJDGTLMSUPUGNKNXVZGTLBJOKUVAKIMCLWZVZYTCBCGXHBYIZXWHQSHFXUCDUYOFBZQMJOBODFZFXAFXTGVSMXPHSRNBQPUUUZAQDMDBDCMNRETPKOEIHFIBAKERYZIEQD");

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
    msg.setTimeStamp(0.7303121087478682);
    msg.setSource(60800U);
    msg.setSourceEntity(189U);
    msg.setDestination(54295U);
    msg.setDestinationEntity(120U);
    msg.state = 72U;
    msg.flags = 236U;
    msg.description.assign("TWTERMXAEOOOBBTWPNPDVIRFAJBMMLHFKEMYXEFDURYRNDQRZNEDGZXVCXGCTKMUICKTSJWWEZELTIGQIWMQOGUGY");

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
    msg.setTimeStamp(0.08630397716102067);
    msg.setSource(20897U);
    msg.setSourceEntity(105U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(58U);
    msg.state = 40U;
    msg.flags = 21U;
    msg.description.assign("AHUPOEDMTQILLZLNZFCUNYHPWSKZZFJQQYLDNKWCCAMZORWJMFITARGNKMQDGWUFAKTGLOWGONJEZPTGRHJIPSUDHTSHK");

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
    msg.setTimeStamp(0.4470254770363776);
    msg.setSource(48274U);
    msg.setSourceEntity(143U);
    msg.setDestination(14160U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.46309076800168314);
    msg.setSource(12870U);
    msg.setSourceEntity(195U);
    msg.setDestination(3902U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.7179878071493362);
    msg.setSource(63922U);
    msg.setSourceEntity(77U);
    msg.setDestination(25231U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.017386128421993163);
    msg.setSource(11816U);
    msg.setSourceEntity(177U);
    msg.setDestination(36004U);
    msg.setDestinationEntity(55U);
    msg.id = 72U;
    msg.label.assign("PNCIQMVPGRBSVDIGPILPWHPAFUSAAZRDOMITULAQRXTALNDCPXNLLIRDGWPBLXVAYZDDEVTEYMGOAHDFBKJEFKDFXETBMU");
    msg.component.assign("RDKOJYRGTHPCZSOGPCRBISPJFEFQPYXTAXQAEJBFJWSMEWEQDUKYSNTJQCROFMKQRYXBBXTIFJAHFWMOWQBWSVLDBZFUVQAZVXRGMCLMHNPSCCEXNOXDNNLIJSBULTTUZFBIAGGADGGKLTQMUEZPPWZQOKXSCYXXRLJWVAHDTCZVIIWMOWKAIRFSKTEVHHEQRSRVU");
    msg.act_time = 9718U;
    msg.deact_time = 17160U;

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
    msg.setTimeStamp(0.09723741043611145);
    msg.setSource(48987U);
    msg.setSourceEntity(24U);
    msg.setDestination(64103U);
    msg.setDestinationEntity(129U);
    msg.id = 229U;
    msg.label.assign("CHIHEPRIZYGCDBVWJXLZKWUMMOSGJZMTOUXWRNJFVOTDGEJFAFYDGWGANHZOSIIBAQVSNEBKVMCDWYIGGFVDPYHFPQHOPMACDPALKIWBBYOLWX");
    msg.component.assign("OOWJNKDWMWDDMGQAAQHLINFEILGTRPHLSZTCLBUTTAVBRFLTIESNKEIXJBASIZPYUXUUDYYJEGTHSWIFSFCQZXRRNKBKOZTWUXKUZJBHMLAJWCVEZMCJHSMSZGQUOOBTQPPWRRGXFFPUVCMOXTNVEMCJXAPMLEJJNHPYABROOLPOXRSIXQNWHZGQKKEBCYIRLCFEDGUZCYGIQBJDGTANMWRDYAFVDQFKSMVIVVBA");
    msg.act_time = 65153U;
    msg.deact_time = 39337U;

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
    msg.setTimeStamp(0.1348079894045966);
    msg.setSource(64173U);
    msg.setSourceEntity(126U);
    msg.setDestination(17859U);
    msg.setDestinationEntity(242U);
    msg.id = 171U;
    msg.label.assign("ABGSGLDDIEDFIGMYBOYMNAXVBVYHFRHICESVKYELDUPBLCETHJAPNYIXHPPMIXXJDZZGVPGFINJBYQKOZJHSTWSAZRTUQGZNRDNJFPVIHIGDDKKRCJFWZNAK");
    msg.component.assign("NBOMYMGKFNVXDHEVEUOTCCGWQHWPRNQHBEXEJQUDYCECSVRWYBSHKRHODGOGALHLGRJYYTXYJUHPVSKNJBLTZMUBABLQQSFIMKFYSBIONZXSUNDSXJNPKMPYDARGUIWRAMRCEBFAPD");
    msg.act_time = 630U;
    msg.deact_time = 13026U;

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
    msg.setTimeStamp(0.9284951729599648);
    msg.setSource(61078U);
    msg.setSourceEntity(245U);
    msg.setDestination(61548U);
    msg.setDestinationEntity(9U);
    msg.id = 129U;

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
    msg.setTimeStamp(0.16501148373353214);
    msg.setSource(11669U);
    msg.setSourceEntity(79U);
    msg.setDestination(53752U);
    msg.setDestinationEntity(163U);
    msg.id = 151U;

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
    msg.setTimeStamp(0.8455229255795975);
    msg.setSource(40175U);
    msg.setSourceEntity(11U);
    msg.setDestination(59225U);
    msg.setDestinationEntity(174U);
    msg.id = 165U;

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
    msg.setTimeStamp(0.304237792953844);
    msg.setSource(53031U);
    msg.setSourceEntity(230U);
    msg.setDestination(22882U);
    msg.setDestinationEntity(5U);
    msg.op = 238U;
    msg.list.assign("XLJRNPXDVFSQBRJHMLBHFGTSZJBVAAPAESHOSBZDYKWZAGEUMJQWDRDZNSMTQFTXXBVWHPZFSUULOUPNKYRYGEYFHGCIWSEFXEPWDUEUVWKKCBKRXQJGQLBEVVOCTIKUZIYNMKFLATTMKQWWMJCCOVIZLNTGCFPJKURORVXQOTQYJXBMECTPIYFDRCSQFDXLAUUSJGOSIOOIIEIZDPHMWAXLOMALHZQDRHBKMDYGYNB");

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
    msg.setTimeStamp(0.6644656835094035);
    msg.setSource(48699U);
    msg.setSourceEntity(94U);
    msg.setDestination(49643U);
    msg.setDestinationEntity(3U);
    msg.op = 2U;
    msg.list.assign("YXGKYPZZMGTTTTJAEUXBUDVJKEHANIBFRFQKXCVJVLQRQTQZWJPQQSSVYLPJGQPRJPSFEOZEBKZXZOEDKYIIUFXDSIRUOFCAFFIXNV");

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
    msg.setTimeStamp(0.19980406903005787);
    msg.setSource(19601U);
    msg.setSourceEntity(95U);
    msg.setDestination(23533U);
    msg.setDestinationEntity(138U);
    msg.op = 141U;
    msg.list.assign("VLQWWNMFQUYHDMNXWGXUDDWXITJHCRFCMZJLNNESAQAEYVSBKQLVFIQTALH");

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
    msg.setTimeStamp(0.8222536124166389);
    msg.setSource(42626U);
    msg.setSourceEntity(101U);
    msg.setDestination(49099U);
    msg.setDestinationEntity(150U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.025840332072899153);
    msg.setSource(10233U);
    msg.setSourceEntity(210U);
    msg.setDestination(32157U);
    msg.setDestinationEntity(132U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.38329407294349904);
    msg.setSource(36856U);
    msg.setSourceEntity(186U);
    msg.setDestination(12135U);
    msg.setDestinationEntity(156U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.951229172172115);
    msg.setSource(49764U);
    msg.setSourceEntity(215U);
    msg.setDestination(794U);
    msg.setDestinationEntity(11U);
    msg.value = 1U;

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
    msg.setTimeStamp(0.37592055826983906);
    msg.setSource(53847U);
    msg.setSourceEntity(124U);
    msg.setDestination(59320U);
    msg.setDestinationEntity(11U);
    msg.value = 190U;

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
    msg.setTimeStamp(0.8329280275447265);
    msg.setSource(52854U);
    msg.setSourceEntity(72U);
    msg.setDestination(6601U);
    msg.setDestinationEntity(253U);
    msg.value = 0U;

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
    msg.setTimeStamp(0.4456704615480994);
    msg.setSource(17010U);
    msg.setSourceEntity(2U);
    msg.setDestination(152U);
    msg.setDestinationEntity(139U);
    msg.consumer.assign("JKTBRREVFXZTSQOKULAVNETYZABSJTRXPORFFWADNWNVXHTYQQKAMSGGTDKHWYYDMMUWYZOQKIKQECSPPOUAQDMWLUHJERHIEHJROQIMTCOXZOGFUUFWBCGCMBYLETVDWCFQAPIQSCEYGOVPGKBLDSEDJBDKMAPSBBMHAKCNISUGJYLIJLZCPUIJTYGDNIZNWNYLLAOLNVSXHTPEDWCVPUOLZFKSVHRWXGRXZJRGVBF");
    msg.message_id = 35651U;

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
    msg.setTimeStamp(0.25705628495044286);
    msg.setSource(8161U);
    msg.setSourceEntity(7U);
    msg.setDestination(39976U);
    msg.setDestinationEntity(8U);
    msg.consumer.assign("NCPIEBOUVUZVWZVRLAALQJDMCKZXEQCUOITVPBQGATMPFRJDZPGLTAYOEGRXTLPKEWUINJSRSRBZDHNSXYEHFOJVOMUAHRHEYKHXFBENULSQLKSWZZPRIL");
    msg.message_id = 29587U;

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
    msg.setTimeStamp(0.9804768721460922);
    msg.setSource(64318U);
    msg.setSourceEntity(25U);
    msg.setDestination(6860U);
    msg.setDestinationEntity(29U);
    msg.consumer.assign("NNFSIZIAXPZPUCNMKEQRIZXQOWZRMHGQTHJTCYWXRBKOCPFQMSCMYSPKBHHGSCVKCNPDTSKFPINJORFKDGUCXPCBBANZOKDWMZJMUAXCYVDEWAGRLUPOHIOBFEMFLHJWLIRUWQTHLMUPXCAYYAMGFXKGSDWBAKVOLDLJJNYQTDQYUWAEGOYKNXBVTIISWTRVTOUQEVDSLYONZRBVJEVJTBSDSADZEMLXHGVHGQXIJEFVWFUGTABNEFEZIRU");
    msg.message_id = 23335U;

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
    msg.setTimeStamp(0.11247109873732786);
    msg.setSource(55598U);
    msg.setSourceEntity(170U);
    msg.setDestination(25211U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.5170863451552983);
    msg.setSource(35637U);
    msg.setSourceEntity(230U);
    msg.setDestination(61662U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.5221527341529841);
    msg.setSource(54481U);
    msg.setSourceEntity(145U);
    msg.setDestination(37108U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.42505776838875864);
    msg.setSource(39840U);
    msg.setSourceEntity(123U);
    msg.setDestination(56713U);
    msg.setDestinationEntity(250U);
    msg.section.assign("GXJADMSQLMOAQVLRDYDQU");
    msg.param.assign("PRLLUAZVLLWOGUGEAYAYELEZMVLGJQIZIXFHWGIGDYVVRAQJWQYZURMOPPZBMBXDB");
    msg.value.assign("THJVBMMUXWDAJLTKXFGTLYFUBCKSCRJLWSIXTCDWDNDBFOYHYSJWBUCJ");

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
    msg.setTimeStamp(0.6847532627598075);
    msg.setSource(35860U);
    msg.setSourceEntity(232U);
    msg.setDestination(13443U);
    msg.setDestinationEntity(22U);
    msg.section.assign("YPYJJBIAINHGBWRHBDUOUSRAVGOOQBWZHXQYEPXUMELHWDLQWGOZBCKTCTDPVCYLSDWRYFRLSRVHWMNQJFTKUFONHUBFDBFUWRXGXGZAUSPFLCPMHEJQXNMKKBXNIZKRKMNVIRTLHEKCSTHCEWOUIDKXOFIFVATOFJZMPOXYUTHALEQZVISKZPQGPSNTMKDTQZDCJOEBPZCVMNWNTEWRSAQYAXZV");
    msg.param.assign("XQWGPKPQHAKBBCMTMECKFJMFAUGTOG");
    msg.value.assign("OXRGHJFEJHPVIALIAPYYRBECUPIVKYIKCZBYJEALUKRBWWAIRWHHZGLBIXIWSNVHMSTPSXVHJOJQKSBMDQWKBSLCXVNTDNQHRVDNGITFCFWFLGZPMYZJTVTYBZVCQZOMGHCFXFGDSEXYEUZROQZQHFJMTWPARQJBJREQDWLBTRKMDKSXRXYEOGUUAYMKLPCQNAUUOSOVMIGNXTUZNPCGOHLLSAIQDDZWDFEAPAOJSMWBXGKYTEDVM");

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
    msg.setTimeStamp(0.11793690555948455);
    msg.setSource(53522U);
    msg.setSourceEntity(49U);
    msg.setDestination(52447U);
    msg.setDestinationEntity(23U);
    msg.section.assign("LPBWWDOAYKJKSNIPMHWPEPIQELCAPMJKVSHTWJGAANKQYWEYGCQUBRLPZMTJIHZUMNFRRYOVZRYZWFIHXCMQREVVNNKZIQELVAFDCSITACVBRJOFMOQHATQKKWWDCLBZIMNFMOTBBTCIGYSJDTGCQGUBJRXFWAKYIRNFVNPZOKJZMHXPYPGFUEAGOWSLZSRXLSVZELELDURQOYHOVDXUUGUBDQPIBYEHSUXSDEXGMNXHTNXXD");
    msg.param.assign("UYURNSDFQMPNNIWSZTBLOGHGUUYCHXMWJJYLBNP");
    msg.value.assign("PGUBLYYJHMCDEJTLSPNFTXYFLADXIJBGWXQHWRYNKMVCBRFOECPHEQSDDQWZPRETEWCHSAQTNTULAUXSWRAYGRK");

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
    msg.setTimeStamp(0.20596304398795096);
    msg.setSource(18483U);
    msg.setSourceEntity(152U);
    msg.setDestination(20520U);
    msg.setDestinationEntity(135U);
    msg.op = 230U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TZPPJEETOJHEFNZHUJNDDOFEMGKRBAGOVWLNZDBMQKKXKRVAIKKIJEIDWIEPJAHYWLAQTYRWTXQSGISNNTWTCBWNTSUAMVTCLTBNZXDDFSHAHZGQEEKAVMULGQMDSGKANCLHMBLHYOCOMCXUROMHJPSVXWTYZFRXIOEWLVIWKBYBNJXSRFDUUIPPHPFGIZOPQ");
    tmp_msg_0.param.assign("XZVOWZZXJVMQTHCIGRQCWCMMQQHXKKWDNEDAFOEQLLKLQRBDARUDMODARADQHRSCLTAFJSEVS");
    tmp_msg_0.value.assign("GLWSWAQNPCILIOP");
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
    msg.setTimeStamp(0.8559344650356423);
    msg.setSource(27201U);
    msg.setSourceEntity(117U);
    msg.setDestination(2760U);
    msg.setDestinationEntity(73U);
    msg.op = 253U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("VCLDCZWXUVPDHHCCOKWOYWMNVUNOUJPBBBGHJERFIDKFSZTTPFRDNGVLGDGQXIAVZESMWBNJEBOBDQBRJUQSAUVEILRLIHFLMPKOQBOXKZMPAT");
    tmp_msg_0.param.assign("JFFLHPYPJIXYCCLKAZMBDOJQSOAHUMKHRKQRBTNZYJBKQLUEGED");
    tmp_msg_0.value.assign("TOXLPLPGGVDSXTIRATHLVGVUVPSLDKBMPHMOZBQDCFWZBZLLSTJDQBHDGQUNUEFCZFBJRMNUHMCTCYYSVGNRORNL");
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
    msg.setTimeStamp(0.00020524165127899785);
    msg.setSource(18255U);
    msg.setSourceEntity(222U);
    msg.setDestination(9219U);
    msg.setDestinationEntity(55U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.3352910651000859);
    msg.setSource(45764U);
    msg.setSourceEntity(168U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(161U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.3680839617171099);
    msg.setSource(608U);
    msg.setSourceEntity(245U);
    msg.setDestination(55989U);
    msg.setDestinationEntity(143U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.5869434406009968);
    msg.setSource(59101U);
    msg.setSourceEntity(99U);
    msg.setDestination(32723U);
    msg.setDestinationEntity(103U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.8675506833128591);
    msg.setSource(38588U);
    msg.setSourceEntity(224U);
    msg.setDestination(1154U);
    msg.setDestinationEntity(216U);
    msg.total_steps = 45U;
    msg.step_number = 76U;
    msg.step.assign("XEAJGWPGOTTGYEOKUBQJDOZBIXJPPBDJ");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.9851083179082221);
    msg.setSource(11031U);
    msg.setSourceEntity(50U);
    msg.setDestination(15679U);
    msg.setDestinationEntity(200U);
    msg.total_steps = 114U;
    msg.step_number = 206U;
    msg.step.assign("ZMCRYKNQTIVRLTNQFEZSVAHUUHYKDQGTVLFGRDILMYHFPSZ");
    msg.flags = 58U;

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
    msg.setTimeStamp(0.2478783627241966);
    msg.setSource(42970U);
    msg.setSourceEntity(38U);
    msg.setDestination(12249U);
    msg.setDestinationEntity(70U);
    msg.total_steps = 233U;
    msg.step_number = 87U;
    msg.step.assign("UKDOHDGTGRMMOQQJFQOTGIIJWPEYMUALYJVJJHPPHLKZICNKUEABNWOEAWVBYDZSYOEFIYKKHCPFUOQDPWWMLVCNHJXYYRASYBFKGRBYFXIEWXVLKHGCBWUMOHZSSTVXYKRFTTJIRDKCZJCPUPXMXLRFTOFLBRLIKPUEEQWACLWAEMLVZBSZSCFHMMOSTGSI");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.567132237780393);
    msg.setSource(8151U);
    msg.setSourceEntity(253U);
    msg.setDestination(56379U);
    msg.setDestinationEntity(105U);
    msg.state = 198U;
    msg.error.assign("CRJXNQJJMGEFCQCBXTLJMWGRTRKTFJOKSJIOPBPYCDEVSGALYRQKIVIGAVHNYTBXTLPHUPBKXBLIHVEFZSHOLSGUEHNEQVFTBPFUDAWVWQWBDQHZMWIAUGMEEMBYNXDCSRIPPMAFDQPXDIBFYZOCZISZRRFKYODOKEGLTRZEVDKNSUAAUGMETXZUHCWLAJVOIMOLLSONA");

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
    msg.setTimeStamp(0.8344631681128286);
    msg.setSource(43196U);
    msg.setSourceEntity(135U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(99U);
    msg.state = 48U;
    msg.error.assign("DVSPDJUASISPKHQOUITXBYVAZMZMIGHWELRQHJEFAKVVNGGDVAJKOZESGMNMUXTFODWSXPFHRVJXWGAYYRQCCQXASYIFREU");

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
    msg.setTimeStamp(0.7620788715713303);
    msg.setSource(15352U);
    msg.setSourceEntity(29U);
    msg.setDestination(4024U);
    msg.setDestinationEntity(133U);
    msg.state = 68U;
    msg.error.assign("JGKAWKKFMBVUTDCUXPEXVSNWAFSKWVLSPDKRVXVTGZOTVMIBMHBHDOGYCJBHEQMSQIXZMZIPYTIBFFGFZLUFRPYUSDBNUXYYONZOHMWZNWQTBFDHKMATBLAYUCLDSWOGWYHCNSIACELOESQRXEUFLOCJEERZNQJWZGPTBCULJZGICEVHOLQXVLBPXARQKEYKWDQRAMIYPHDTXSWHCTNIZAQALEGSVMGPNJIUAFHQMKPORD");

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
    msg.setTimeStamp(0.272845222010879);
    msg.setSource(49187U);
    msg.setSourceEntity(218U);
    msg.setDestination(27873U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.8644045408981065;
    msg.lon = 0.24678913969050353;
    msg.height = 0.7751751454973989;
    msg.x = 0.820886120372298;
    msg.y = 0.9471462207447137;
    msg.z = 0.259931261860333;
    msg.phi = 0.8169623216814313;
    msg.theta = 0.38109640524395005;
    msg.psi = 0.38666870182683355;
    msg.u = 0.10638116883804838;
    msg.v = 0.6864692254398307;
    msg.w = 0.7831635118219651;
    msg.p = 0.8371907013864128;
    msg.q = 0.3936129786772934;
    msg.r = 0.7241385084340699;
    msg.svx = 0.22104121198591076;
    msg.svy = 0.5745531034101219;
    msg.svz = 0.3001861528726757;

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
    msg.setTimeStamp(0.002662800126052689);
    msg.setSource(32024U);
    msg.setSourceEntity(121U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.01978956161526435;
    msg.lon = 0.47798656116602445;
    msg.height = 0.17666873254998328;
    msg.x = 0.6088744507169817;
    msg.y = 0.9210847125633121;
    msg.z = 0.6444778004433996;
    msg.phi = 0.5060988616460886;
    msg.theta = 0.6116999124620522;
    msg.psi = 0.6598286924507977;
    msg.u = 0.8778624352268609;
    msg.v = 0.19574640348782701;
    msg.w = 0.446732541346181;
    msg.p = 0.17190725461595013;
    msg.q = 0.43816732979906425;
    msg.r = 0.7499092362953232;
    msg.svx = 0.5952322046135258;
    msg.svy = 0.48731095892223086;
    msg.svz = 0.2580350853483593;

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
    msg.setTimeStamp(0.0265099666396007);
    msg.setSource(48747U);
    msg.setSourceEntity(61U);
    msg.setDestination(16040U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.6612921047034568;
    msg.lon = 0.2759568304349491;
    msg.height = 0.5422676203392023;
    msg.x = 0.6204334903014831;
    msg.y = 0.6765299822077847;
    msg.z = 0.5512083520386156;
    msg.phi = 0.9909426901855484;
    msg.theta = 0.8128700395909716;
    msg.psi = 0.125604031023264;
    msg.u = 0.47081641675014063;
    msg.v = 0.27082366383485434;
    msg.w = 0.955403613173586;
    msg.p = 0.435102057189123;
    msg.q = 0.17497710759093166;
    msg.r = 0.907372616188183;
    msg.svx = 0.14988305864082319;
    msg.svy = 0.5850238083062083;
    msg.svz = 0.5339941103764059;

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
    msg.setTimeStamp(0.12994508277598782);
    msg.setSource(60342U);
    msg.setSourceEntity(161U);
    msg.setDestination(8993U);
    msg.setDestinationEntity(28U);
    msg.op = 116U;
    msg.entities.assign("PCAMVRCSIMKSBODKMTUETROGXJQZOGZRMWHBAWGLZKMFUDIWBWFAWDVXJKVSPCIHMQBYESDNUBOSVRGXRTZFMJITGLEVILLHQUSQCQNSAABD");

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
    msg.setTimeStamp(0.8015673296403311);
    msg.setSource(61655U);
    msg.setSourceEntity(138U);
    msg.setDestination(29906U);
    msg.setDestinationEntity(81U);
    msg.op = 55U;
    msg.entities.assign("DCZLWTOVVFAPOQUJIGSNTANMFTSXYVCEIORQYNZVSHWCZIPOJVRLAGHMSINFD");

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
    msg.setTimeStamp(0.12251516145325014);
    msg.setSource(44791U);
    msg.setSourceEntity(5U);
    msg.setDestination(16616U);
    msg.setDestinationEntity(73U);
    msg.op = 233U;
    msg.entities.assign("GTHSBFYDCQJYGOTURUWYFPMPLUYHIXZQGGLCFOVPQJBCFKDBLGAVMPHDGCYEIPVXBDQVJYSVZANRUQWKLOOLSTJRKNWSRGRXMAUWVJGLTSSZCFAEEKENR");

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
    msg.setTimeStamp(0.14301627128693095);
    msg.setSource(32522U);
    msg.setSourceEntity(111U);
    msg.setDestination(19726U);
    msg.setDestinationEntity(241U);
    msg.type = 248U;
    msg.speed = 7574U;
    const char tmp_msg_0[] = {-99, -125, -62, -78, -113, 92, -18, -95, 5, -8, -105, -99, -75, 119, 122, -41, -64, 87, 13, -123, -92, 86, 54, -38, -10, -57, -48, -88, -60, 104, -103, -114, -114, 27, -26, -23, 90, 82, -79, 56, -100, -54, -89, 70, 101, -109, -88, 93, -4, 79, -113, -117, -88, 41, -120, 42, 83, -40, -93, 106, -4, 86, 118, -72, 116, 108, 77, -121, 52, 84, -101, 88, -119, -116, -62, -84, 92, 31, -87, -24, 51, -96, -96, 118, -22, -10, -47, -31, 73, 6, -100, 65, -20, -66, -87, -35, 83, -27, -26, -26, 6, -35, -118, -96, 72, 122, 52, -35, -102, 119, -18, -109, 117, -49, 64, -102, 34, -68, 47, 6, 52, 47, 64, 8, -25, -100, 24, -30, -70, -30, 67, 118, 66, 56, -40, -108, -11, -104, 8, -91, 73};
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
    msg.setTimeStamp(0.59650264472062);
    msg.setSource(16274U);
    msg.setSourceEntity(218U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(251U);
    msg.type = 81U;
    msg.speed = 1161U;
    const char tmp_msg_0[] = {-34, 9, 42, 40, -104, -24, -39, -46, 87, 2, -84, 95, -97, -33, 45, 15, 111, -111, 15, -39, 93, 59, 19, -128, 45, 25, 122, 22, -125, -10, 120, 78, -53, 96, -65, 96, -17, -88, 16, 17, -104, -70, -39, -35, -15, 57, -109, 64, 122, 113, -60, 85, 11, 79, 122};
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
    msg.setTimeStamp(0.15012195730888123);
    msg.setSource(26006U);
    msg.setSourceEntity(209U);
    msg.setDestination(22695U);
    msg.setDestinationEntity(173U);
    msg.type = 228U;
    msg.speed = 16464U;
    const char tmp_msg_0[] = {-110, -7, 56, -80, 124, -47, 34, 26, -46, -125, 57, 125, -79, -2, -28, -1, 72, 121, 35, -13, 107, 80, -106, -93, -27, 45, -85, -46, 113, 108, 121, -85, -88, 36, -19, 102, 86, -57, 30, -102, 36, 26, -73, -33, 17, -43, 115, -55, -28, -124, 91, 47, -94, -78, 27, -36, -40, 5, -80, 62, 124, 71, 16, -69, 20, 7, -46, -11, -53, -34, -87, 4, -113, 125, -3, 111, -127, 8, 0, 48, -41, 117, 40, -19, -28, -21, 35, 85, 84, -10, 73, -102, 43, -9, -63, 79, 78, -12, 103, 22, 31, -127, -12, 47, -115, -100, -53, 38, 30, 40, -63, -29, -54, -47, -46, -58, -12, 7, 67, -4, 122, 66, 6, 25, 113, 40, 54, -50, -55, -21, 6, 68, 0, -49, 78, -26, 106, -57, -121, 62, -42, -117, 105, -77, -54, 86, -47, 58, 56, -86, -91, -77, -12, 35, 28, -113, 118, -12, 71, -67, -59, -97, 97, -77, 29, -80, 107, 16, 105, 3, 55, -120, -23, 111, 16};
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
    msg.setTimeStamp(0.3666503199126081);
    msg.setSource(44779U);
    msg.setSourceEntity(210U);
    msg.setDestination(28905U);
    msg.setDestinationEntity(163U);
    msg.available = 731330028U;
    msg.value = 82U;

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
    msg.setTimeStamp(0.7015700367792458);
    msg.setSource(25241U);
    msg.setSourceEntity(89U);
    msg.setDestination(60255U);
    msg.setDestinationEntity(2U);
    msg.available = 234006234U;
    msg.value = 5U;

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
    msg.setTimeStamp(0.3527934483971594);
    msg.setSource(8932U);
    msg.setSourceEntity(131U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(40U);
    msg.available = 2470402657U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.5151546880630211);
    msg.setSource(27163U);
    msg.setSourceEntity(136U);
    msg.setDestination(53718U);
    msg.setDestinationEntity(226U);
    msg.op = 41U;
    msg.snapshot.assign("LODVXFIGMUZXSCZMKDAEYCVHRDPGPRBWQHZODE");
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 136U;
    tmp_msg_0.flags = 214U;
    tmp_msg_0.description.assign("SZLLIRJCPQFDDYKRKUDWCHIRUSHTIRKMFWZNFXAWXRQWQJQEZMOIQOSWRBAFKBNKLGIJTIZSQWWLUBMDNHOVEBHJVACHPLZWSDBEEFSEVGWFUGLXCXCWZP");
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
    msg.setTimeStamp(0.2058364888581823);
    msg.setSource(22681U);
    msg.setSourceEntity(46U);
    msg.setDestination(35518U);
    msg.setDestinationEntity(150U);
    msg.op = 149U;
    msg.snapshot.assign("RZEXWLQIBUYHFVNOFYUKKJLJQZNOABZXAOLBATFVRBYNTMLNCHYHJOCGFPQDVWXDWXOTTEPDYQZRVGFSHVEITJLUAUNAOPUSKNPEPRBNNWNLSCBIQADOMKUKGAMIBEXVSE");
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 19U;
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
    msg.setTimeStamp(0.5102279562026686);
    msg.setSource(28902U);
    msg.setSourceEntity(187U);
    msg.setDestination(16960U);
    msg.setDestinationEntity(9U);
    msg.op = 37U;
    msg.snapshot.assign("RCPDZJBNIGKVMCOOQAC");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.928144254820622;
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
    msg.setTimeStamp(0.17225749216783315);
    msg.setSource(65197U);
    msg.setSourceEntity(90U);
    msg.setDestination(54647U);
    msg.setDestinationEntity(18U);
    msg.op = 95U;
    msg.name.assign("JBFPLEHEQVAQTMBPDPFQCHAOICYYTZXGDDZZTMT");

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
    msg.setTimeStamp(0.9583459907773285);
    msg.setSource(61844U);
    msg.setSourceEntity(191U);
    msg.setDestination(30901U);
    msg.setDestinationEntity(198U);
    msg.op = 19U;
    msg.name.assign("AJFYGHKNGDOCTVGIQMDFTRYGYUMQPOAROLYJNBDMRIYNSIUWKUBNOFRRZUGNSFXWWNBVTADOLSXZTSYZYWLRIGCHPZBAJZATWCGMHLNEYWJPHKERXJTCVACVVMEKUQQOVFSJABEFQKKCBGOMHUZLKZKTMVDUJLXWTXEGEBLUHIMAPCEVAPIOZFPKISSLOXWCKWIVRPDDBXSDC");

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
    msg.setTimeStamp(0.6209638919683101);
    msg.setSource(11266U);
    msg.setSourceEntity(77U);
    msg.setDestination(45727U);
    msg.setDestinationEntity(50U);
    msg.op = 80U;
    msg.name.assign("MGSLDLUNCQFUKZNFXSWNRXMPXLLHJSKUJHAPKEDPIIUFKTGKIYIAJTDCBOMWKZUNJHTCILQGVJ");

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
    msg.setTimeStamp(0.12254787880832763);
    msg.setSource(24589U);
    msg.setSourceEntity(189U);
    msg.setDestination(3257U);
    msg.setDestinationEntity(35U);
    msg.type = 25U;
    msg.htime = 0.5182876537152339;
    msg.context.assign("NVFHGRJRRSTDWVLFXWGJEN");
    msg.text.assign("CHHOKMYHVBFCDLVHVCTEZVZHBLMULGGAMAYRABELRWNJQTJIYTQSRNXXENPIJEMGGACISQFVFERWXUBDYNCITUBKRNNNISUESLQPQYHBEOQEBIBAVPQFVJGYDFZVLWHDSOGKMOWEPFOPCJKWOOWXYJSXHLLZOFPKLKHUZSRXOWTKFDRZDUWQBRCVWMDPGZUNZKBCSXXGRF");

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
    msg.setTimeStamp(0.015111753004218409);
    msg.setSource(37257U);
    msg.setSourceEntity(155U);
    msg.setDestination(830U);
    msg.setDestinationEntity(65U);
    msg.type = 80U;
    msg.htime = 0.2247533522719124;
    msg.context.assign("JMTDSZLAFEOGGDUMOVWMMXLNKPCCYYKTFXERFYWOTUZAHMIGMBWFQOQPVUPRJCUGZVUNVWPEZOISWMNAZSQDOKKHMJJBGGKHZBIFXWVARXYPOSOYFPQJDFSBTRHLGOXYVNXEUMCULNHRQEKTBIDJCYTQAYJSNFIQIJADRBAHZGWFGQRCNCCILWSHPBSQVRPYKHWPYCZRD");
    msg.text.assign("FBGBYSZLMZAENHXPFNKRXUDUVDOOHJDWQGEMRLMUAXDCKYHJAEQWDXBIZRUYFIOKYQWBHZLDONNFGNWLCPJVPULPOAWPGVVOTQEXAGN");

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
    msg.setTimeStamp(0.16172149160815907);
    msg.setSource(30767U);
    msg.setSourceEntity(210U);
    msg.setDestination(21630U);
    msg.setDestinationEntity(48U);
    msg.type = 145U;
    msg.htime = 0.25611142534632103;
    msg.context.assign("JNVMUAQHPWSPYVLNUWQZACOAIOPKDNBYVVDTJLORL");
    msg.text.assign("LSVMEBJNZBAIESTFWUMVXWSMFMZNLKEPKGCMZIFCNGGEOIORUJEAXJJZBMYWKCGFNUJEYYORVLHC");

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
    msg.setTimeStamp(0.6364563768389235);
    msg.setSource(4019U);
    msg.setSourceEntity(49U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(178U);
    msg.command = 145U;
    msg.htime = 0.16584644001082205;

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
    msg.setTimeStamp(0.06952868341134488);
    msg.setSource(42331U);
    msg.setSourceEntity(77U);
    msg.setDestination(17859U);
    msg.setDestinationEntity(32U);
    msg.command = 108U;
    msg.htime = 0.3682029733414951;

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
    msg.setTimeStamp(0.38347390957463123);
    msg.setSource(47261U);
    msg.setSourceEntity(140U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(88U);
    msg.command = 122U;
    msg.htime = 0.2974767451688032;

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
    msg.setTimeStamp(0.09777682373590424);
    msg.setSource(20092U);
    msg.setSourceEntity(15U);
    msg.setDestination(6285U);
    msg.setDestinationEntity(243U);
    msg.op = 146U;
    msg.file.assign("KWGJRNJIDISPGMPNVEVQKRPHFELGEUSXYMYQDXXOJGAWZRKYBXNYZLDITQKNAAXMHWLJBMPIWGIPTGBLSYAHQCDEWLTEERUEZKCQIJYRLRHSDMTPRJSRIWEJOQURUKGNAYZIVCWTVVQF");

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
    msg.setTimeStamp(0.6570513307913967);
    msg.setSource(27312U);
    msg.setSourceEntity(236U);
    msg.setDestination(42771U);
    msg.setDestinationEntity(172U);
    msg.op = 220U;
    msg.file.assign("FXTKDAQGPSQCNZXYZTLLGZKBRWECIOAMTPCDQRWZSWEYMANIHBOQNIKENGLHTDUZCPVSUDGIBVWVTNRJHPJDSZLMWSFTICXZYNXYIIJWDFHPOUCLDEVEKMLMOTRIOSVJVUKDCQJADQKRRVGAUPLMOWWEBORENQV");

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
    msg.setTimeStamp(0.6036650496752262);
    msg.setSource(44674U);
    msg.setSourceEntity(234U);
    msg.setDestination(22819U);
    msg.setDestinationEntity(194U);
    msg.op = 75U;
    msg.file.assign("KQOYOMLMLDZSTNEZFZEPMHZUOKMTJUUFMDHIBFYDFIKGJMJLVWVNPNYYQVCMHTRIHWIYWG");

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
    msg.setTimeStamp(0.41399780626816185);
    msg.setSource(1117U);
    msg.setSourceEntity(157U);
    msg.setDestination(1482U);
    msg.setDestinationEntity(59U);
    msg.op = 92U;
    msg.clock = 0.40006788957795136;
    msg.tz = -120;

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
    msg.setTimeStamp(0.656745687739763);
    msg.setSource(10654U);
    msg.setSourceEntity(51U);
    msg.setDestination(3185U);
    msg.setDestinationEntity(238U);
    msg.op = 47U;
    msg.clock = 0.3741344702382696;
    msg.tz = 0;

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
    msg.setTimeStamp(0.708036731912376);
    msg.setSource(11933U);
    msg.setSourceEntity(33U);
    msg.setDestination(26502U);
    msg.setDestinationEntity(233U);
    msg.op = 16U;
    msg.clock = 0.24972856436942437;
    msg.tz = 125;

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
    msg.setTimeStamp(0.8037434007560992);
    msg.setSource(4324U);
    msg.setSourceEntity(78U);
    msg.setDestination(57813U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.29583312774689563);
    msg.setSource(11933U);
    msg.setSourceEntity(27U);
    msg.setDestination(11937U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.19276252145808803);
    msg.setSource(23011U);
    msg.setSourceEntity(76U);
    msg.setDestination(57221U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.21428148744486342);
    msg.setSource(22419U);
    msg.setSourceEntity(242U);
    msg.setDestination(34107U);
    msg.setDestinationEntity(7U);
    msg.sys_name.assign("SFKOEXANRDBWCBUXPJLHSJEXERASHEQGTOQEPRSJUVFUIIWPMJWXVCYAHLUCVAKCJZAEIRONGLCKVTFRJBZQPTFDZPCNAHWZVEFWMHORACBQYKYUYRZ");
    msg.sys_type = 217U;
    msg.owner = 63272U;
    msg.lat = 0.45564749780083946;
    msg.lon = 0.7283231372090669;
    msg.height = 0.4576486738111437;
    msg.services.assign("IZOJIVXRCWXXKWSHRVYYKMAPQWKFDWTZHNHFEIZSVYDCQMIAKBADJPSXFZZYLEZONLXIJSOUHARCJMZPBOOFGRKBWDNKSFCPCE");

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
    msg.setTimeStamp(0.4976468083233504);
    msg.setSource(51437U);
    msg.setSourceEntity(186U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(223U);
    msg.sys_name.assign("TCHMGSKSBZFOSDFHOVKYRYBKCXUPTYBGJMTBDOOAVHUIONZQZRSTRYOXNWFREFJJ");
    msg.sys_type = 172U;
    msg.owner = 38133U;
    msg.lat = 0.9197886334588052;
    msg.lon = 0.47589775530269574;
    msg.height = 0.4384820701131549;
    msg.services.assign("RAYGIHWGFHTAOSFDGNGDMJWSTGQXXUMKOOEBMWUPVFGDIHIAMQPSFCYLQKZRIPJLHXKYPNPLWDKGKRWWBDEPLEZOFARTNXAYCBBK");

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
    msg.setTimeStamp(0.5265287331223775);
    msg.setSource(35649U);
    msg.setSourceEntity(154U);
    msg.setDestination(35521U);
    msg.setDestinationEntity(196U);
    msg.sys_name.assign("DCOKBVTXYLBSKNOOWECZDIHECRIWQLDJVYEIZHFJJQILJUFSNTMZMOOAAM");
    msg.sys_type = 34U;
    msg.owner = 8332U;
    msg.lat = 0.7603242688800261;
    msg.lon = 0.5652832935065677;
    msg.height = 0.3505460947028519;
    msg.services.assign("NUNJNWGAFEJFNWJZWRZEMFVPVJXQYESKHOVRQDKATUILDGJQMOENDCXBXHHDJLPIDCKXBICWADNIASFQBBDYRSPHADSLPPMVVJVTXMMFPRWMZZBQMIYLRGYNGEWJOJPXNYSOHTUVAMAU");

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
    msg.setTimeStamp(0.09620000043406207);
    msg.setSource(36938U);
    msg.setSourceEntity(20U);
    msg.setDestination(57695U);
    msg.setDestinationEntity(157U);
    msg.service.assign("FHRMABKFVQZJOETLHQVRFLVSIZMNFIW");
    msg.service_type = 74U;

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
    msg.setTimeStamp(0.09222451438294177);
    msg.setSource(37728U);
    msg.setSourceEntity(36U);
    msg.setDestination(542U);
    msg.setDestinationEntity(200U);
    msg.service.assign("PXIGLVDFCEGQXXRPDHY");
    msg.service_type = 47U;

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
    msg.setTimeStamp(0.04143529226166964);
    msg.setSource(31326U);
    msg.setSourceEntity(6U);
    msg.setDestination(21480U);
    msg.setDestinationEntity(134U);
    msg.service.assign("XOYDFMPTWXBLDEPLXOIBDAPHVBBYNQLE");
    msg.service_type = 69U;

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
    msg.setTimeStamp(0.9698665676263272);
    msg.setSource(60640U);
    msg.setSourceEntity(220U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(5U);
    msg.value = 0.33611629454457914;

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
    msg.setTimeStamp(0.03345898218490406);
    msg.setSource(30606U);
    msg.setSourceEntity(71U);
    msg.setDestination(20770U);
    msg.setDestinationEntity(35U);
    msg.value = 0.19441958964021022;

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
    msg.setTimeStamp(0.295989810949706);
    msg.setSource(25467U);
    msg.setSourceEntity(8U);
    msg.setDestination(58010U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0836862113618001;

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
    msg.setTimeStamp(0.8778567041373571);
    msg.setSource(50038U);
    msg.setSourceEntity(223U);
    msg.setDestination(59049U);
    msg.setDestinationEntity(249U);
    msg.value = 0.04389606088964826;

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
    msg.setTimeStamp(0.5329641366778326);
    msg.setSource(30795U);
    msg.setSourceEntity(216U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(77U);
    msg.value = 0.26037143703261745;

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
    msg.setTimeStamp(0.7255389189110057);
    msg.setSource(5279U);
    msg.setSourceEntity(100U);
    msg.setDestination(49936U);
    msg.setDestinationEntity(25U);
    msg.value = 0.35308771393599014;

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
    msg.setTimeStamp(0.09733890219932495);
    msg.setSource(11700U);
    msg.setSourceEntity(229U);
    msg.setDestination(36583U);
    msg.setDestinationEntity(53U);
    msg.value = 0.1518327171633319;

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
    msg.setTimeStamp(0.12983125125495254);
    msg.setSource(16590U);
    msg.setSourceEntity(145U);
    msg.setDestination(59066U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7356639405447893;

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
    msg.setTimeStamp(0.675589882629832);
    msg.setSource(58763U);
    msg.setSourceEntity(25U);
    msg.setDestination(45153U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5259908925930672;

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
    msg.setTimeStamp(0.7829411417613676);
    msg.setSource(9074U);
    msg.setSourceEntity(54U);
    msg.setDestination(56134U);
    msg.setDestinationEntity(59U);
    msg.number.assign("VFJMIDRPKUYUZDEDGVDRWUQHNUNDQGILEAKHTOKIXPYJDBJUALOBTODWQVBUQAESNXYRYQTWXIGVAUBAPIYESTFSGWECGYTOSUMRJLXPJTPNHXWSUOKKQCMZLR");
    msg.timeout = 24812U;
    msg.contents.assign("MEJQVASXPBLNBEQLVXTSRCVTALOCOWLAEKRMSBYDGOARUXZIRGV");

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
    msg.setTimeStamp(0.710893762326682);
    msg.setSource(32189U);
    msg.setSourceEntity(160U);
    msg.setDestination(1940U);
    msg.setDestinationEntity(247U);
    msg.number.assign("VOFATFZOYBZGRNWUXNQBAKHOKUQEILTJVRCROMHYILIYXXYZXTCJZMEQKLHMONDDVXNOYGMPTXAJOPFLSPKBSEULYVQBQGQMELXBEVCNZFJJRKJCFHGQRZUIVETPWRWCSANTHSYKSLEJYDDNRHUEMGHGSIFQIFCRMMWPABWITPZRDFCEJKNQFZMPMGZLWSWVRUWYAVDHLSOIQIWUSBDGXSTAFVPZXEIC");
    msg.timeout = 61944U;
    msg.contents.assign("EXJRNYYREAGTBSOAZUNPCPLKIJDQHVVNVTNZGQDLIIZFJEBVMASQGUJCLFU");

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
    msg.setTimeStamp(0.3384113843657556);
    msg.setSource(35162U);
    msg.setSourceEntity(12U);
    msg.setDestination(4966U);
    msg.setDestinationEntity(137U);
    msg.number.assign("SCZKGNAFREFLFJUSKIBOLSVUJJATORXNHQNMZXWCQCOJAWABQYLTUKWZHUCMHBOTYPGOPBUAYLUHEL");
    msg.timeout = 20919U;
    msg.contents.assign("BNMLGQCYDACSHLLDKKCJDNGKITMQAWAVPRBOHQPSHDNTOGYAVHQPBALZVTUHCUTOBIWFRNSHALOIRNVRGUTMOVMNMIMQUJZCBMRVUDBYXSEJRFEJSEBDTHTBIJFQLLWXXWEYGAZCUPJKEVFOFYE");

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
    msg.setTimeStamp(0.7691601114535134);
    msg.setSource(55869U);
    msg.setSourceEntity(125U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(179U);
    msg.seq = 1760702431U;
    msg.destination.assign("DMUYZMLVTNOIWIAQGNRBGTAUMFZWEEWRFFWRMMZCERHANUNAKTPYSHYDSEGIKXYQIOAFBHYQBVRCLXJBQHDOPMXTPWVLSJTNIQZECSXQFLMEJDCVSHPSSXXTECUVYLJBAXWJEAHPVHKBRFUDYZIKKXCLLGIUKMJZLFGPDYUQLBPKJFISSJVCONYUYATWCWXMGFNPOE");
    msg.timeout = 15357U;
    const char tmp_msg_0[] = {74, 46, -2, -38, -114, 45, -116, -119, 47, 31, 15, 49, -3, 27, -9, 22, -21, 9, -83, -98, -7, -37, 101, 91, -31, 21, -103, -61, 26, 51, -62, -58, 0, -71, -63, 79, -44, 8, 19, -18, 50, 101, 42, -44, 107, -69, -52, 104, 4, -35, 9, -12, 46, 66, -59, -119, 2, -73, 78, -94, 39, 103, 122, -100, -105, -39, -65, 113, 21, 57, 76, 21, -46, -5, 17, 50, -58, 85, -12, 20, -94, -21, -119, -111, 24, 104, -49, -76, -97, 64, -96, 98, -124, 25, 52, 41, 61};
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
    msg.setTimeStamp(0.506292127774312);
    msg.setSource(57240U);
    msg.setSourceEntity(199U);
    msg.setDestination(53665U);
    msg.setDestinationEntity(118U);
    msg.seq = 3339243815U;
    msg.destination.assign("ZRGGHQNYAWVPCUMIOPACSQKDRVNKBIVQKLSJXLFXGDNNBBZOPUKZNDEQTAJBVLAZAYBGEOXEUPWGUAUJRLCJMUJQHOCTHINYLNOCGHHMAHGTLUBUXCUXMWOBBRQDDNSOXSIQBDPFWNMPGRPGFWFVSEVVQWRDTDMIRZCZYIXBFESFMMTTRLYIFSXCMKESWKHJEKYTYEITQARXKUFHVLJXWZVDCPLHIPZSANWFESZLQVRJGOJHFOWKKYEPCDI");
    msg.timeout = 23610U;
    const char tmp_msg_0[] = {86, 72, 112, -34, -50, 1, -54, -66, -9, -8, 79, -67, 84, 52, 1, 24, 69, -74, 64, -40, -5, 8, 51, 25, -63, -124, 80, 13};
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
    msg.setTimeStamp(0.6491804418720131);
    msg.setSource(36818U);
    msg.setSourceEntity(149U);
    msg.setDestination(50536U);
    msg.setDestinationEntity(215U);
    msg.seq = 667796133U;
    msg.destination.assign("YCWSUJLYBQGFYAWSUOJSDBNZNOIAWLLACPYQKTGJFVTXTGRCGTUFLDZEAQFVFWSOEHCOGAIGKXJYTI");
    msg.timeout = 53406U;
    const char tmp_msg_0[] = {-128, 3, -23, 99, 2, 19, 91, -8, -26, -95, 33, -74, 25, 98, 25, -53, -111, 109, 116, -34, 95, 3, -29, -7, -10, 93, -5, -24, -123, -105, -110, -38, 89, 81, -59, -9, -75, 22, -5, 78, 34, -120, -22, -69, -42, 96, -4, -57, 93, 120, 102, -7, 25, -41, 73, 37, -54, 53, 102, -94, 3, -85, -89, 71, 27, 33};
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
    msg.setTimeStamp(0.14627106931301626);
    msg.setSource(14957U);
    msg.setSourceEntity(66U);
    msg.setDestination(10785U);
    msg.setDestinationEntity(225U);
    msg.source.assign("GRLJLARIQFYARUCYPUOUWHOQCENLRDPLDCMOBJZHHNGVUCUEQFVWYDETWGSAJVXZUUOVRNBXELKBAIGZSGRXFNPSKHRWEMUGLPBTGKYUNAMKGHDKCWSFOSQQDZNMDYYHVXRVTZOASBNQAKTWHKVDPYNTQEPFJCTHGODJZFZZMJTXHQXSAWIMWLCBITUPTBXFIWEPLXMCBKEQRLJYDAEOICISZNBNO");
    const char tmp_msg_0[] = {57, -17, -79, -126, -41, 116, -70, -107, 18, -42, 29, 16, 12, 89, -19, 121, -102, -20, -51, 100, -93, -53, -64, -78, 90, -91, 101, 106, 80, 43, 0, -98, -1, -9, 107, 9, -38, -28, -109, -73, 102, 67, 4, -109, -62, -124, 89, -86, -109, 17, 100, -53, 30};
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
    msg.setTimeStamp(0.57782571704814);
    msg.setSource(12899U);
    msg.setSourceEntity(210U);
    msg.setDestination(54421U);
    msg.setDestinationEntity(148U);
    msg.source.assign("OZXABOFHSVOYQIYZZNNTMAPHFVGHSHAPHDLUWYXQLVZ");
    const char tmp_msg_0[] = {-98, -39, 29, 89, 117, -15, 61, 93, 2, 99, 106, 90, 68, 18, -122, -65, 81, 3, -68, -114, -125, 37, 61, -55, 79, -111, -108, -67, 66, -103, 1, 116, -122, 97, 49, 121, -108, -65, 73, 112, -79, -26, 80, 70, -29, 35, -12, -26, 45, -8, -108, -40, 22, 114, 98, -123, 116, 64, 47, 46, 107, -65, -72, -63, -73, -74, -43, -63, -30, 0, -61, -25, 55, 55, 85, 97, -122, -127, 89, 75, -12, 16, -40, -39, 36, -121};
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
    msg.setTimeStamp(0.3223351197342911);
    msg.setSource(1081U);
    msg.setSourceEntity(224U);
    msg.setDestination(9092U);
    msg.setDestinationEntity(178U);
    msg.source.assign("MVEKLKGFVGNORF");
    const char tmp_msg_0[] = {-16, 99, 78, -3, 9, 26, 50, 50, -122, 59, 111, -86, -120, -24, 108, -55, 9, -103, -50, 44, 74, 114, 18, 96, -49, -24, 64, -87, 126, 107, -68, 57, 33, -99, -125, 17, -59, -98, -99, 111, 4, 72, 68, 57, -17, 112, 23, -25, -8, 26, -43, -94, -14, 30, 43, 94, 57, -100, 59, 13, 23, -82, -124, -90, 0, -7, 5, 46, -65, 40, -28, -73, -91, 12, 9, -115, -42, -109, 56, 38, 124, -53, -17, 116, 71, -85, -100, -100, -53, -29, 101, -35, 0, -61, -48, 33, 73, 76, 102, 114, -66, -85, 29, 28, 2, 39, 107, 63, 30, -53, 89, -34, -122, 5, 48, 94, 61, 44, 97, 120, 41, -114, 8, 24, 21, 35, 99, -16, -100, 113, -52, -7, -24, 23, 26, 76, 82, 0, -97, -97, -39, -107, 72, 112, -118, 66, -75, -48, 30, -83, -64, -38, 77, 112, 95, -28, 104, -71, -49, -85, 40, 108, 31, -70, 123, 24, -119, 73, -47, -104, -110, 26, 85, -27, -72, -36, 88, -31, 81, -107, 71, -77, 69, -78, -71, -28, -109, -126, 22, -118, -12, -82, 50, 106, -104, 107, 106, -57, -29, -53, -69, 7, -50, 79, 58, 14, -103, 36, -107, -5, 106, -35, -110, -11, 73, 15, 43, 105, -5, 71, -108, 2, 61, 8, -96, 78, 42, -30, -85, -44, -64, -110, -38, -93, 29};
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
    msg.setTimeStamp(0.23462716366182745);
    msg.setSource(18085U);
    msg.setSourceEntity(72U);
    msg.setDestination(14100U);
    msg.setDestinationEntity(140U);
    msg.seq = 3407451623U;
    msg.state = 104U;
    msg.error.assign("DBUGPIMUKTESZRMJKQXDIEFSYAJDVTHTNDWVNGELLQNHVNZNSIABMCZYAEJGGPOFEWEAUXQUFPJUBUZTXOJFNGWVOZJWAKHZMSGVIKDSEGJPCMXBLRIWXCDOSIBEFCTQHDERMBPKUDSIYLJOVLNUVWLVWHZQCTTHXWPBHCJIRHPPAXXSZZCG");

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
    msg.setTimeStamp(0.6484862154518879);
    msg.setSource(45802U);
    msg.setSourceEntity(59U);
    msg.setDestination(23578U);
    msg.setDestinationEntity(54U);
    msg.seq = 10910273U;
    msg.state = 222U;
    msg.error.assign("FVRXFRQVKYCQKNOWHSGYAZXUVVRLAXCZWLVBGPCDQAXDASAYYPMYNPSKKAXOFBPEGSYYWETNNXHRLENDZTHJPNJDB");

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
    msg.setTimeStamp(0.21604141942216581);
    msg.setSource(60147U);
    msg.setSourceEntity(149U);
    msg.setDestination(18822U);
    msg.setDestinationEntity(238U);
    msg.seq = 716061242U;
    msg.state = 155U;
    msg.error.assign("QXPEMOPVMAAZENDCRQUQKJYBBWGRSBQIPCXJLVWMWYHYSFJXZRKGKFSLTZDASGWILTOSQVTFRNWMPHJBYADTV");

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
    msg.setTimeStamp(0.5105770174956406);
    msg.setSource(54962U);
    msg.setSourceEntity(38U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(31U);
    msg.id = 192U;
    msg.range = 0.9333015097590656;

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
    msg.setTimeStamp(0.5265867239927281);
    msg.setSource(10497U);
    msg.setSourceEntity(58U);
    msg.setDestination(44887U);
    msg.setDestinationEntity(122U);
    msg.id = 224U;
    msg.range = 0.07677543357076777;

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
    msg.setTimeStamp(0.9437445211722817);
    msg.setSource(44833U);
    msg.setSourceEntity(44U);
    msg.setDestination(16512U);
    msg.setDestinationEntity(160U);
    msg.id = 215U;
    msg.range = 0.5978158794816054;

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
    msg.setTimeStamp(0.5080005507631382);
    msg.setSource(4433U);
    msg.setSourceEntity(171U);
    msg.setDestination(7013U);
    msg.setDestinationEntity(17U);
    msg.tx = 229U;
    msg.channel = 65U;
    msg.timer = 14599U;

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
    msg.setTimeStamp(0.856589527112949);
    msg.setSource(25338U);
    msg.setSourceEntity(24U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(6U);
    msg.tx = 80U;
    msg.channel = 202U;
    msg.timer = 29739U;

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
    msg.setTimeStamp(0.7371599316813245);
    msg.setSource(2768U);
    msg.setSourceEntity(4U);
    msg.setDestination(62242U);
    msg.setDestinationEntity(246U);
    msg.tx = 214U;
    msg.channel = 174U;
    msg.timer = 15439U;

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
    msg.setTimeStamp(0.09448864767250953);
    msg.setSource(14331U);
    msg.setSourceEntity(174U);
    msg.setDestination(22861U);
    msg.setDestinationEntity(138U);
    msg.beacon.assign("WYUUZOFKTRTDDHKTJGSOYIBKTRMFIDBGETDDLQLGKZKUHSPDLWGLPLEQEYXROCOHFSZOPPSXKKVBXADWZJVMMYHVXYNERHGKCBXQIHIXFVJJJKVCPODYJCCUGNWHGIVQUDRIXCQMXUULQOUIBVXYCNACNFQMTJBEWAFRQA");
    msg.lat = 0.38874605376159654;
    msg.lon = 0.9447862532057318;
    msg.depth = 0.8325861132112496;
    msg.query_channel = 253U;
    msg.reply_channel = 56U;
    msg.transponder_delay = 34U;

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
    msg.setTimeStamp(0.016153280883843157);
    msg.setSource(63356U);
    msg.setSourceEntity(73U);
    msg.setDestination(31041U);
    msg.setDestinationEntity(144U);
    msg.beacon.assign("JAIXHTTTGGTSVMWVYMKUGQBZOZAORGJXNFAQSLZNIPZKZKIRKNGBWBRCIJUFHOMVRHDNIHQEYKDIMRUTBEQGXMIQVOFFUSLHSRLXDPYBQAWOWPDYXZCDXWNIEKGCXBVCHKMALPRGVSBNGAJX");
    msg.lat = 0.37686924259107757;
    msg.lon = 0.7910680867542256;
    msg.depth = 0.493783558325266;
    msg.query_channel = 221U;
    msg.reply_channel = 191U;
    msg.transponder_delay = 194U;

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
    msg.setTimeStamp(0.026377388063514307);
    msg.setSource(12847U);
    msg.setSourceEntity(56U);
    msg.setDestination(421U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("VFCBODEUTZNXZGOMNDLQHPSQBQFPNMYCWWWYSWXNKFVXNYJFMIJAUAAEUTGPBZBLYPJCQLJQGRIMNOOIUJLGLLWIKBXFZRBTCXCCJZAGQVWEKHANBYYXMTFIUURDWGOTJJXZYWSSZQUVRO");
    msg.lat = 0.4761283395389144;
    msg.lon = 0.0920437550644101;
    msg.depth = 0.670015889786574;
    msg.query_channel = 220U;
    msg.reply_channel = 182U;
    msg.transponder_delay = 79U;

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
    msg.setTimeStamp(0.2815823363658836);
    msg.setSource(58534U);
    msg.setSourceEntity(251U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(55U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.498130092900944);
    msg.setSource(28769U);
    msg.setSourceEntity(44U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(217U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.39768432625813854);
    msg.setSource(139U);
    msg.setSourceEntity(32U);
    msg.setDestination(27778U);
    msg.setDestinationEntity(108U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.925952495478725);
    msg.setSource(27354U);
    msg.setSourceEntity(104U);
    msg.setDestination(57814U);
    msg.setDestinationEntity(105U);
    msg.address = 21U;

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
    msg.setTimeStamp(0.3779682424523432);
    msg.setSource(54805U);
    msg.setSourceEntity(254U);
    msg.setDestination(51U);
    msg.setDestinationEntity(152U);
    msg.address = 88U;

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
    msg.setTimeStamp(0.8825261399957148);
    msg.setSource(49417U);
    msg.setSourceEntity(202U);
    msg.setDestination(59891U);
    msg.setDestinationEntity(60U);
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
    msg.setTimeStamp(0.2514619674292421);
    msg.setSource(53826U);
    msg.setSourceEntity(246U);
    msg.setDestination(61318U);
    msg.setDestinationEntity(63U);
    msg.address = 159U;
    msg.status = 116U;
    msg.range = 0.6061056339670807;

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
    msg.setTimeStamp(0.9400115043476033);
    msg.setSource(41362U);
    msg.setSourceEntity(252U);
    msg.setDestination(38512U);
    msg.setDestinationEntity(124U);
    msg.address = 216U;
    msg.status = 176U;
    msg.range = 0.1372599779134771;

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
    msg.setTimeStamp(0.30257082768667964);
    msg.setSource(42991U);
    msg.setSourceEntity(95U);
    msg.setDestination(42967U);
    msg.setDestinationEntity(58U);
    msg.address = 0U;
    msg.status = 31U;
    msg.range = 0.7849041846579977;

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
    msg.setTimeStamp(0.4341431051884663);
    msg.setSource(55753U);
    msg.setSourceEntity(73U);
    msg.setDestination(1129U);
    msg.setDestinationEntity(116U);
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 53907U;
    tmp_msg_0.lat = 0.20473789251469943;
    tmp_msg_0.lon = 0.9886092292628451;
    tmp_msg_0.z = 0.4556363342450622;
    tmp_msg_0.z_units = 146U;
    tmp_msg_0.speed = 0.806728456354921;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.duration = 24355U;
    tmp_msg_0.radius = 0.784164070744536;
    tmp_msg_0.flags = 182U;
    tmp_msg_0.custom.assign("YRSPBWXBNAMZCJUYVX");
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
    msg.setTimeStamp(0.7508867392213178);
    msg.setSource(51694U);
    msg.setSourceEntity(30U);
    msg.setDestination(29060U);
    msg.setDestinationEntity(67U);
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 52U;
    tmp_msg_0.value = 0.12873713983713442;
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
    msg.setTimeStamp(0.6453064267817813);
    msg.setSource(32774U);
    msg.setSourceEntity(219U);
    msg.setDestination(1224U);
    msg.setDestinationEntity(48U);
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.3662805382308211;
    tmp_msg_0.x = 0.7930796898887184;
    tmp_msg_0.y = 0.5391439024937087;
    tmp_msg_0.z = 0.4647612026185127;
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
    msg.setTimeStamp(0.5575043782580019);
    msg.setSource(4482U);
    msg.setSourceEntity(86U);
    msg.setDestination(18167U);
    msg.setDestinationEntity(33U);
    msg.enable = 63U;

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
    msg.setTimeStamp(0.798689613044178);
    msg.setSource(59960U);
    msg.setSourceEntity(137U);
    msg.setDestination(29493U);
    msg.setDestinationEntity(163U);
    msg.enable = 172U;

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
    msg.setTimeStamp(0.2602641116264729);
    msg.setSource(19745U);
    msg.setSourceEntity(134U);
    msg.setDestination(17748U);
    msg.setDestinationEntity(79U);
    msg.enable = 59U;

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
    msg.setTimeStamp(0.43620452247536123);
    msg.setSource(8157U);
    msg.setSourceEntity(148U);
    msg.setDestination(4577U);
    msg.setDestinationEntity(134U);
    msg.summary = 155U;
    msg.level = 164U;

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
    msg.setTimeStamp(0.16283767794819815);
    msg.setSource(23926U);
    msg.setSourceEntity(70U);
    msg.setDestination(25366U);
    msg.setDestinationEntity(48U);
    msg.summary = 165U;
    msg.level = 215U;

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
    msg.setTimeStamp(0.27546279410707164);
    msg.setSource(49645U);
    msg.setSourceEntity(55U);
    msg.setDestination(27378U);
    msg.setDestinationEntity(22U);
    msg.summary = 216U;
    msg.level = 14U;

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
    msg.setTimeStamp(0.2775270569465126);
    msg.setSource(41563U);
    msg.setSourceEntity(156U);
    msg.setDestination(18995U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.07352813916757805);
    msg.setSource(58U);
    msg.setSourceEntity(14U);
    msg.setDestination(3650U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.5846972233669755);
    msg.setSource(23443U);
    msg.setSourceEntity(30U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.6144760803466315);
    msg.setSource(34514U);
    msg.setSourceEntity(131U);
    msg.setDestination(46242U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.9852540685554845);
    msg.setSource(10022U);
    msg.setSourceEntity(1U);
    msg.setDestination(42223U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.8538593640165951);
    msg.setSource(27307U);
    msg.setSourceEntity(62U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.20716359100762916);
    msg.setSource(47452U);
    msg.setSourceEntity(241U);
    msg.setDestination(41255U);
    msg.setDestinationEntity(207U);
    msg.op = 230U;
    msg.system.assign("KZBEBRZPYHMDRYOXAVGIFMFIEUUTHKJNEYMGXQEGOLRTCMQOORTRZNIMDAGNQYQSFGLSHJQQAFXKPBWLSC");
    msg.range = 0.2823980442855183;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 77U;
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
    msg.setTimeStamp(0.5327166806627907);
    msg.setSource(30063U);
    msg.setSourceEntity(189U);
    msg.setDestination(18497U);
    msg.setDestinationEntity(225U);
    msg.op = 35U;
    msg.system.assign("WYIBRVCMMOJIKHESIZWUMSNJVMVQUIJJXHGG");
    msg.range = 0.11505991018490236;
    IMC::AcousticPingReply tmp_msg_0;
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
    msg.setTimeStamp(0.9654019319851708);
    msg.setSource(33577U);
    msg.setSourceEntity(250U);
    msg.setDestination(37035U);
    msg.setDestinationEntity(101U);
    msg.op = 79U;
    msg.system.assign("PGRFSCKTCZICNYZWMODFVJSRJTQBHVRDMXVOQFIPWREUFBMPKZCVJJSYRVYBKVSOXQFOMHNTXIBCOZPLWKHGNTSIOXEDUZELYLQAJJJRIAYQNEWCVHVTLFNBYGJKOSZWRETYQQUMCGJPBKLCFHEVNUKXGEEXAYTATUDJGHHPBXRDMSEZZIMSRHNKUTLXHOBLN");
    msg.range = 0.9299785050882492;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 187U;
    tmp_msg_0.name.assign("MQWFHLECITZJBVJDMHDZXRDFPFNXVWQSTEOVWK");
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
    msg.setTimeStamp(0.7194214192571969);
    msg.setSource(6833U);
    msg.setSourceEntity(100U);
    msg.setDestination(11687U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.7144809435830368);
    msg.setSource(55128U);
    msg.setSourceEntity(231U);
    msg.setDestination(48664U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.008637945154365445);
    msg.setSource(59545U);
    msg.setSourceEntity(213U);
    msg.setDestination(40393U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.42922535725359856);
    msg.setSource(34338U);
    msg.setSourceEntity(215U);
    msg.setDestination(52772U);
    msg.setDestinationEntity(133U);
    msg.list.assign("MOKMVWIHHHFTENWKGEEPVGYOWNBAWOQMSLJBIVSXWJRUNCSLDQOIQCALRJUDGYJBCDBKUJNKLTVBSLEJNEFPQXXZEQTBOTPMZYLNRKISGXTJHSASITAKZXQYESPGLKBGDDYZEPJRWMMCYHIVLUKYRTCNFRBOEFIU");

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
    msg.setTimeStamp(0.282521195423847);
    msg.setSource(40235U);
    msg.setSourceEntity(70U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(234U);
    msg.list.assign("YGBFMDLTUEFZMMGKREOUAGMEPQJBUVAHACDZZNZKCLRCXSVHMPXGMCUQARKJFLGNBWJXWPVIVNDIQXSVACSWSEXKNEPVJCEFBYIJLPBMO");

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
    msg.setTimeStamp(0.4211236090975782);
    msg.setSource(2673U);
    msg.setSourceEntity(134U);
    msg.setDestination(36924U);
    msg.setDestinationEntity(252U);
    msg.list.assign("NLXJIZBXZITRCOTKUNXRCHPOEVAPMSCYUBOARKDDRMIKZPRLXBSZCUXZQDURPEJAEQVAXYQLO");

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
    msg.setTimeStamp(0.6714961525045501);
    msg.setSource(2554U);
    msg.setSourceEntity(136U);
    msg.setDestination(33640U);
    msg.setDestinationEntity(180U);
    msg.value = 10553;

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
    msg.setTimeStamp(0.24296419277533565);
    msg.setSource(39235U);
    msg.setSourceEntity(86U);
    msg.setDestination(1955U);
    msg.setDestinationEntity(29U);
    msg.value = 24421;

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
    msg.setTimeStamp(0.4306518310988381);
    msg.setSource(39704U);
    msg.setSourceEntity(168U);
    msg.setDestination(4164U);
    msg.setDestinationEntity(243U);
    msg.value = -17090;

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
    msg.setTimeStamp(0.4511207681106775);
    msg.setSource(63280U);
    msg.setSourceEntity(66U);
    msg.setDestination(7076U);
    msg.setDestinationEntity(235U);
    msg.value = 0.11395590330395655;

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
    msg.setTimeStamp(0.5775400542731988);
    msg.setSource(44732U);
    msg.setSourceEntity(28U);
    msg.setDestination(2906U);
    msg.setDestinationEntity(45U);
    msg.value = 0.0854419782292577;

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
    msg.setTimeStamp(0.3043570828976615);
    msg.setSource(63723U);
    msg.setSourceEntity(10U);
    msg.setDestination(22244U);
    msg.setDestinationEntity(144U);
    msg.value = 0.987200029376223;

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
    msg.setTimeStamp(0.0008014631316842769);
    msg.setSource(39577U);
    msg.setSourceEntity(14U);
    msg.setDestination(15665U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8272232228743491;

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
    msg.setTimeStamp(0.32452470901404284);
    msg.setSource(5131U);
    msg.setSourceEntity(13U);
    msg.setDestination(62794U);
    msg.setDestinationEntity(214U);
    msg.value = 0.9884646802119824;

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
    msg.setTimeStamp(0.0521678680798896);
    msg.setSource(26581U);
    msg.setSourceEntity(40U);
    msg.setDestination(13786U);
    msg.setDestinationEntity(215U);
    msg.value = 0.06247508767463883;

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
    msg.setTimeStamp(0.4660988255573436);
    msg.setSource(20127U);
    msg.setSourceEntity(215U);
    msg.setDestination(41194U);
    msg.setDestinationEntity(7U);
    msg.validity = 22660U;
    msg.type = 189U;
    msg.utc_year = 59217U;
    msg.utc_month = 202U;
    msg.utc_day = 64U;
    msg.utc_time = 0.9103799937535328;
    msg.lat = 0.35481888282208496;
    msg.lon = 0.9238519670844617;
    msg.height = 0.05374638328136794;
    msg.satellites = 35U;
    msg.cog = 0.28118319870387465;
    msg.sog = 0.5135010233097199;
    msg.hdop = 0.33177406630663553;
    msg.vdop = 0.8212299477999015;
    msg.hacc = 0.1456729287853371;
    msg.vacc = 0.7935055396386258;

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
    msg.setTimeStamp(0.22263625288480915);
    msg.setSource(18326U);
    msg.setSourceEntity(208U);
    msg.setDestination(41033U);
    msg.setDestinationEntity(14U);
    msg.validity = 63168U;
    msg.type = 59U;
    msg.utc_year = 64778U;
    msg.utc_month = 210U;
    msg.utc_day = 158U;
    msg.utc_time = 0.09744526805546849;
    msg.lat = 0.10017890896415771;
    msg.lon = 0.9409031826822801;
    msg.height = 0.638299038480268;
    msg.satellites = 57U;
    msg.cog = 0.6843481366873472;
    msg.sog = 0.5771043838598392;
    msg.hdop = 0.9830576454421367;
    msg.vdop = 0.21624364819219977;
    msg.hacc = 0.8470251810120885;
    msg.vacc = 0.0394123300869782;

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
    msg.setTimeStamp(0.5174825131390685);
    msg.setSource(11274U);
    msg.setSourceEntity(204U);
    msg.setDestination(10085U);
    msg.setDestinationEntity(181U);
    msg.validity = 65413U;
    msg.type = 1U;
    msg.utc_year = 8197U;
    msg.utc_month = 147U;
    msg.utc_day = 252U;
    msg.utc_time = 0.5695701109116121;
    msg.lat = 0.06626337207263888;
    msg.lon = 0.5373607518477747;
    msg.height = 0.9858714626772704;
    msg.satellites = 204U;
    msg.cog = 0.3958259039872085;
    msg.sog = 0.6909039421924522;
    msg.hdop = 0.7680947782602062;
    msg.vdop = 0.3603883891611791;
    msg.hacc = 0.3765209038277212;
    msg.vacc = 0.44656813006433504;

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
    msg.setTimeStamp(0.7106837513298062);
    msg.setSource(20198U);
    msg.setSourceEntity(47U);
    msg.setDestination(28796U);
    msg.setDestinationEntity(244U);
    msg.time = 0.776305947139753;
    msg.phi = 0.39746996501431364;
    msg.theta = 0.39029605619352725;
    msg.psi = 0.6797198791889326;
    msg.psi_magnetic = 0.5723556908256079;

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
    msg.setTimeStamp(0.9233198315376394);
    msg.setSource(44683U);
    msg.setSourceEntity(93U);
    msg.setDestination(18659U);
    msg.setDestinationEntity(168U);
    msg.time = 0.6421563487068969;
    msg.phi = 0.4282062445894729;
    msg.theta = 0.06791148289215099;
    msg.psi = 0.8197596470614684;
    msg.psi_magnetic = 0.8394996864157387;

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
    msg.setTimeStamp(0.5171671508379668);
    msg.setSource(22567U);
    msg.setSourceEntity(144U);
    msg.setDestination(31269U);
    msg.setDestinationEntity(43U);
    msg.time = 0.6693090127506609;
    msg.phi = 0.29021086424940523;
    msg.theta = 0.03573696450177455;
    msg.psi = 0.5050871737022232;
    msg.psi_magnetic = 0.01184339668740464;

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
    msg.setTimeStamp(0.5074257353748237);
    msg.setSource(51413U);
    msg.setSourceEntity(102U);
    msg.setDestination(59068U);
    msg.setDestinationEntity(41U);
    msg.time = 0.13692732265242047;
    msg.x = 0.8344298311483808;
    msg.y = 0.19511014558882256;
    msg.z = 0.9323769888303031;
    msg.timestep = 0.9203748353187875;

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
    msg.setTimeStamp(0.168788691837077);
    msg.setSource(1068U);
    msg.setSourceEntity(39U);
    msg.setDestination(25939U);
    msg.setDestinationEntity(199U);
    msg.time = 0.5695390215572063;
    msg.x = 0.42251338308957265;
    msg.y = 0.7253537059144993;
    msg.z = 0.6143276170136159;
    msg.timestep = 0.15996703563765258;

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
    msg.setTimeStamp(0.3965531057361955);
    msg.setSource(5855U);
    msg.setSourceEntity(158U);
    msg.setDestination(44905U);
    msg.setDestinationEntity(167U);
    msg.time = 0.9230849855389596;
    msg.x = 0.6073644672002939;
    msg.y = 0.6228452392770314;
    msg.z = 0.9966091193817334;
    msg.timestep = 0.8432835031498053;

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
    msg.setTimeStamp(0.5423276537616902);
    msg.setSource(22429U);
    msg.setSourceEntity(222U);
    msg.setDestination(42101U);
    msg.setDestinationEntity(222U);
    msg.time = 0.23195024641452433;
    msg.x = 0.8047233737286993;
    msg.y = 0.23472552328974838;
    msg.z = 0.4121553403024798;

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
    msg.setTimeStamp(0.6048786135034196);
    msg.setSource(12521U);
    msg.setSourceEntity(243U);
    msg.setDestination(13409U);
    msg.setDestinationEntity(37U);
    msg.time = 0.8025542141765665;
    msg.x = 0.24033182242879425;
    msg.y = 0.9511110371481873;
    msg.z = 0.1924142118368526;

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
    msg.setTimeStamp(0.6219503630294521);
    msg.setSource(49928U);
    msg.setSourceEntity(129U);
    msg.setDestination(2616U);
    msg.setDestinationEntity(228U);
    msg.time = 0.959608610256087;
    msg.x = 0.16731257431696867;
    msg.y = 0.47430187659221823;
    msg.z = 0.7112679138026056;

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
    msg.setTimeStamp(0.13270627000617474);
    msg.setSource(41494U);
    msg.setSourceEntity(50U);
    msg.setDestination(60874U);
    msg.setDestinationEntity(161U);
    msg.time = 0.6252856904909101;
    msg.x = 0.35924294962725334;
    msg.y = 0.9360341949286148;
    msg.z = 0.8303826662154353;

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
    msg.setTimeStamp(0.8462965743717021);
    msg.setSource(20781U);
    msg.setSourceEntity(54U);
    msg.setDestination(9904U);
    msg.setDestinationEntity(176U);
    msg.time = 0.48000667256209206;
    msg.x = 0.32380436465799867;
    msg.y = 0.9022094918016929;
    msg.z = 0.4470009114270348;

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
    msg.setTimeStamp(0.2241549991013453);
    msg.setSource(35153U);
    msg.setSourceEntity(58U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(3U);
    msg.time = 0.466654247599272;
    msg.x = 0.5298527982345234;
    msg.y = 0.29361516651384256;
    msg.z = 0.7546284333409137;

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
    msg.setTimeStamp(0.3626339433765088);
    msg.setSource(40189U);
    msg.setSourceEntity(145U);
    msg.setDestination(45849U);
    msg.setDestinationEntity(174U);
    msg.time = 0.9462145600652243;
    msg.x = 0.30033627031889654;
    msg.y = 0.640371020648706;
    msg.z = 0.14572245895318836;

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
    msg.setTimeStamp(0.8635147355393177);
    msg.setSource(28025U);
    msg.setSourceEntity(155U);
    msg.setDestination(43994U);
    msg.setDestinationEntity(223U);
    msg.time = 0.8858105964380896;
    msg.x = 0.7753988693585687;
    msg.y = 0.43367392577704245;
    msg.z = 0.9685605204192578;

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
    msg.setTimeStamp(0.623438217039473);
    msg.setSource(1251U);
    msg.setSourceEntity(179U);
    msg.setDestination(3525U);
    msg.setDestinationEntity(211U);
    msg.time = 0.11268987795279639;
    msg.x = 0.42683898517845176;
    msg.y = 0.7183009896108465;
    msg.z = 0.46652318654007974;

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
    msg.setTimeStamp(0.9181107758145429);
    msg.setSource(3474U);
    msg.setSourceEntity(39U);
    msg.setDestination(55544U);
    msg.setDestinationEntity(123U);
    msg.validity = 177U;
    msg.x = 0.22762359047662029;
    msg.y = 0.03188557381220514;
    msg.z = 0.7749143191391483;

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
    msg.setTimeStamp(0.40942918206651535);
    msg.setSource(22004U);
    msg.setSourceEntity(210U);
    msg.setDestination(10377U);
    msg.setDestinationEntity(76U);
    msg.validity = 71U;
    msg.x = 0.4756319247492541;
    msg.y = 0.3688051002322653;
    msg.z = 0.7161372744896931;

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
    msg.setTimeStamp(0.3829721223977107);
    msg.setSource(53917U);
    msg.setSourceEntity(213U);
    msg.setDestination(14158U);
    msg.setDestinationEntity(78U);
    msg.validity = 171U;
    msg.x = 0.3840981791944176;
    msg.y = 0.14598289780967533;
    msg.z = 0.975639392554265;

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
    msg.setTimeStamp(0.7441744784606953);
    msg.setSource(37407U);
    msg.setSourceEntity(238U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(132U);
    msg.validity = 211U;
    msg.x = 0.4230977686578047;
    msg.y = 0.014817742276942547;
    msg.z = 0.7452334651612167;

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
    msg.setTimeStamp(0.027663812989298542);
    msg.setSource(46033U);
    msg.setSourceEntity(139U);
    msg.setDestination(40002U);
    msg.setDestinationEntity(92U);
    msg.validity = 160U;
    msg.x = 0.2090707701888056;
    msg.y = 0.12872078991102942;
    msg.z = 0.9764153356622297;

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
    msg.setTimeStamp(0.06880044761717674);
    msg.setSource(62686U);
    msg.setSourceEntity(252U);
    msg.setDestination(49724U);
    msg.setDestinationEntity(201U);
    msg.validity = 1U;
    msg.x = 0.19382813146326272;
    msg.y = 0.4667797588939533;
    msg.z = 0.2682727564137106;

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
    msg.setTimeStamp(0.34077594281653734);
    msg.setSource(53628U);
    msg.setSourceEntity(204U);
    msg.setDestination(13196U);
    msg.setDestinationEntity(65U);
    msg.time = 0.6598051648996385;
    msg.x = 0.8713574773922134;
    msg.y = 0.7085737684541016;
    msg.z = 0.13365202048610259;

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
    msg.setTimeStamp(0.1379072538959234);
    msg.setSource(23242U);
    msg.setSourceEntity(158U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(57U);
    msg.time = 0.35350913137190343;
    msg.x = 0.15393447560988704;
    msg.y = 0.8250717819119507;
    msg.z = 0.23091180566375302;

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
    msg.setTimeStamp(0.9701523416998504);
    msg.setSource(29040U);
    msg.setSourceEntity(167U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(164U);
    msg.time = 0.4773087575426357;
    msg.x = 0.42294796037738847;
    msg.y = 0.7767578660375003;
    msg.z = 0.31951391128870377;

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
    msg.setTimeStamp(0.3767902065554717);
    msg.setSource(2227U);
    msg.setSourceEntity(207U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(239U);
    msg.validity = 32U;
    msg.value = 0.2361495015580899;

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
    msg.setTimeStamp(0.18787722325853873);
    msg.setSource(6985U);
    msg.setSourceEntity(48U);
    msg.setDestination(46545U);
    msg.setDestinationEntity(3U);
    msg.validity = 9U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5417339547606829;
    tmp_msg_0.y = 0.2077983716626396;
    tmp_msg_0.z = 0.16614727743243785;
    tmp_msg_0.phi = 0.9480322747012646;
    tmp_msg_0.theta = 0.7324796875378662;
    tmp_msg_0.psi = 0.7278556510913178;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7598951700270241;
    tmp_msg_1.beam_height = 0.02604440833882704;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.29057996322943336;

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
    msg.setTimeStamp(0.2572602253779077);
    msg.setSource(13982U);
    msg.setSourceEntity(235U);
    msg.setDestination(58559U);
    msg.setDestinationEntity(9U);
    msg.validity = 13U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.30759387173388175;
    tmp_msg_0.y = 0.438819461078769;
    tmp_msg_0.z = 0.7416488142077884;
    tmp_msg_0.phi = 0.1966748781977008;
    tmp_msg_0.theta = 0.7338540366506116;
    tmp_msg_0.psi = 0.9669759356122062;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0173527526466144;
    tmp_msg_1.beam_height = 0.3632276169284585;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9626958509948934;

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
    msg.setTimeStamp(0.7031526171782585);
    msg.setSource(52824U);
    msg.setSourceEntity(239U);
    msg.setDestination(16819U);
    msg.setDestinationEntity(246U);
    msg.value = 0.7684672089829083;

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
    msg.setTimeStamp(0.21433170956407566);
    msg.setSource(52079U);
    msg.setSourceEntity(41U);
    msg.setDestination(63012U);
    msg.setDestinationEntity(16U);
    msg.value = 0.695842339388833;

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
    msg.setTimeStamp(0.7760866660366114);
    msg.setSource(33106U);
    msg.setSourceEntity(243U);
    msg.setDestination(18122U);
    msg.setDestinationEntity(224U);
    msg.value = 0.6377446775716045;

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
    msg.setTimeStamp(0.9627954645080274);
    msg.setSource(41016U);
    msg.setSourceEntity(191U);
    msg.setDestination(38216U);
    msg.setDestinationEntity(167U);
    msg.value = 0.2571929141821867;

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
    msg.setTimeStamp(0.6674169653709612);
    msg.setSource(65344U);
    msg.setSourceEntity(3U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(32U);
    msg.value = 0.20043710824374483;

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
    msg.setTimeStamp(0.7870187876480303);
    msg.setSource(50737U);
    msg.setSourceEntity(77U);
    msg.setDestination(12181U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8901161479043709;

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
    msg.setTimeStamp(0.4163052257181932);
    msg.setSource(13575U);
    msg.setSourceEntity(199U);
    msg.setDestination(51790U);
    msg.setDestinationEntity(207U);
    msg.value = 0.21167375649210896;

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
    msg.setTimeStamp(0.8623606963116353);
    msg.setSource(29527U);
    msg.setSourceEntity(126U);
    msg.setDestination(21888U);
    msg.setDestinationEntity(193U);
    msg.value = 0.888545873809345;

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
    msg.setTimeStamp(0.5772248011501471);
    msg.setSource(33075U);
    msg.setSourceEntity(232U);
    msg.setDestination(7943U);
    msg.setDestinationEntity(250U);
    msg.value = 0.37481646346654096;

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
    msg.setTimeStamp(0.045406354331977705);
    msg.setSource(58216U);
    msg.setSourceEntity(31U);
    msg.setDestination(50951U);
    msg.setDestinationEntity(63U);
    msg.value = 0.28057449787113264;

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
    msg.setTimeStamp(0.591283304440152);
    msg.setSource(16869U);
    msg.setSourceEntity(54U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9502060608166251;

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
    msg.setTimeStamp(0.6894282019389886);
    msg.setSource(4323U);
    msg.setSourceEntity(58U);
    msg.setDestination(8918U);
    msg.setDestinationEntity(62U);
    msg.value = 0.5175307277444778;

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
    msg.setTimeStamp(0.7855526869029311);
    msg.setSource(50057U);
    msg.setSourceEntity(112U);
    msg.setDestination(58011U);
    msg.setDestinationEntity(40U);
    msg.value = 0.15270886350680735;

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
    msg.setTimeStamp(0.6639779773424015);
    msg.setSource(59963U);
    msg.setSourceEntity(182U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(147U);
    msg.value = 0.06718331073083039;

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
    msg.setTimeStamp(0.06315024617572607);
    msg.setSource(19112U);
    msg.setSourceEntity(237U);
    msg.setDestination(61475U);
    msg.setDestinationEntity(106U);
    msg.value = 0.21557561241173484;

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
    msg.setTimeStamp(0.5116658148888107);
    msg.setSource(55565U);
    msg.setSourceEntity(234U);
    msg.setDestination(2810U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8320653804376863;

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
    msg.setTimeStamp(0.47599207528807796);
    msg.setSource(20164U);
    msg.setSourceEntity(189U);
    msg.setDestination(2047U);
    msg.setDestinationEntity(239U);
    msg.value = 0.6035263713831901;

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
    msg.setTimeStamp(0.6163542424249095);
    msg.setSource(45404U);
    msg.setSourceEntity(158U);
    msg.setDestination(26190U);
    msg.setDestinationEntity(212U);
    msg.value = 0.04772792502544432;

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
    msg.setTimeStamp(0.19555953634705037);
    msg.setSource(40508U);
    msg.setSourceEntity(202U);
    msg.setDestination(50240U);
    msg.setDestinationEntity(22U);
    msg.value = 0.2801892295908184;

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
    msg.setTimeStamp(0.027671335543244524);
    msg.setSource(21616U);
    msg.setSourceEntity(224U);
    msg.setDestination(6927U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6705954111514416;

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
    msg.setTimeStamp(0.5900129631339242);
    msg.setSource(45029U);
    msg.setSourceEntity(20U);
    msg.setDestination(38132U);
    msg.setDestinationEntity(58U);
    msg.value = 0.6825871644360434;

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
    msg.setTimeStamp(0.6651153502338476);
    msg.setSource(8016U);
    msg.setSourceEntity(176U);
    msg.setDestination(56537U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5108570683121186;

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
    msg.setTimeStamp(0.9270315524460766);
    msg.setSource(19534U);
    msg.setSourceEntity(120U);
    msg.setDestination(7283U);
    msg.setDestinationEntity(181U);
    msg.value = 0.739296858700183;

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
    msg.setTimeStamp(0.6083517094965418);
    msg.setSource(20900U);
    msg.setSourceEntity(82U);
    msg.setDestination(52457U);
    msg.setDestinationEntity(53U);
    msg.value = 0.1283235649805553;

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
    msg.setTimeStamp(0.9095385471624617);
    msg.setSource(57047U);
    msg.setSourceEntity(196U);
    msg.setDestination(48156U);
    msg.setDestinationEntity(140U);
    msg.direction = 0.6546168870873126;
    msg.speed = 0.23063780799752276;

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
    msg.setTimeStamp(0.3068721434425439);
    msg.setSource(38065U);
    msg.setSourceEntity(15U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(143U);
    msg.direction = 0.13499222918308929;
    msg.speed = 0.5955440432768775;

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
    msg.setTimeStamp(0.08691832979931646);
    msg.setSource(31272U);
    msg.setSourceEntity(212U);
    msg.setDestination(27711U);
    msg.setDestinationEntity(172U);
    msg.direction = 0.7109423764407306;
    msg.speed = 0.215045076584097;

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
    msg.setTimeStamp(0.5300530951186153);
    msg.setSource(1186U);
    msg.setSourceEntity(95U);
    msg.setDestination(11768U);
    msg.setDestinationEntity(152U);
    msg.value = 0.1010508614925889;

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
    msg.setTimeStamp(0.22308163856439334);
    msg.setSource(43985U);
    msg.setSourceEntity(37U);
    msg.setDestination(39772U);
    msg.setDestinationEntity(123U);
    msg.value = 0.5696487048914122;

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
    msg.setTimeStamp(0.4782908059771638);
    msg.setSource(26117U);
    msg.setSourceEntity(75U);
    msg.setDestination(3545U);
    msg.setDestinationEntity(46U);
    msg.value = 0.3285146999150934;

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
    msg.setTimeStamp(0.2825494462008583);
    msg.setSource(29318U);
    msg.setSourceEntity(100U);
    msg.setDestination(29757U);
    msg.setDestinationEntity(210U);
    msg.value.assign("VSRPNKBTNEFKYLXLQQCQXZKQNSUIOJUALLAYGSCLMGVCJOXVMYFIZDTKQAJRGKWEIPFJIAJDUZDFJYHAHHBWGUVIGBUQDWAXNUKIFNKTHSZJSPGZKFDWGMNPHCMOVOPWREVEYIBPCWCDFHRKAOMVXPSENUXZTG");

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
    msg.setTimeStamp(0.6656197970705031);
    msg.setSource(45016U);
    msg.setSourceEntity(218U);
    msg.setDestination(18683U);
    msg.setDestinationEntity(118U);
    msg.value.assign("OXUKKCYJDQQMXEUUYONKKAVSWSMZJIGDERZFZDBLBRVWYSGWJHNKCCMZLBTFWHLTMXQATLGTDBUGMKSZGAQBAIRTQCODCPBGVQEJOWZEWWPHEIHXIFGCLAHYUQLXFJVPNMSLPHINRPQHJRCCXYVSYNNWTINXDFNDACELJPHIKTGZKSMKTASVDLRUPVXJQAOAIHEOHUOPRTMNYQXUIPDEVGAZUSBLOTCSYBZXWNRRPBZEVOFDMKO");

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
    msg.setTimeStamp(0.05427934022724734);
    msg.setSource(23992U);
    msg.setSourceEntity(244U);
    msg.setDestination(20083U);
    msg.setDestinationEntity(14U);
    msg.value.assign("RZDJETPRQZUIUAITEAOPOJVPQMZTULGNASHSBYJKLYZJOMAXZMQCTCLFDPHDMNQWXHFTZNOUSVGNRKWJQKEYYRWBGOJAVZJZCONBYWECBOBIIWINJVXVQMFSZTVLASQANGHBMBAPFSYGNWITXKEDSXPRKHRHECTECUOLVCBMXPKEVGVGIQRYPKUCFXUALZBXIFOOFFREIEHKKTKDQMNMCFHDUWQPGLSUD");

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
    msg.setTimeStamp(0.5871922644615765);
    msg.setSource(56501U);
    msg.setSourceEntity(19U);
    msg.setDestination(54623U);
    msg.setDestinationEntity(0U);
    const char tmp_msg_0[] = {-15, -54, -74, -63, 15, -99, -36, -96, 37, -82, -44, 8, 50, -41, 68, -6, 67, -23, -36, 126, -115, -84, -48, 54, -80, 53, -27, -81, -59, -43, -28, -75, -98, -128, -91, 101, 126, -124, 28, -92, 94, 77};
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
    msg.setTimeStamp(0.6716877660749463);
    msg.setSource(1796U);
    msg.setSourceEntity(60U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(115U);
    const char tmp_msg_0[] = {-61, 53, -70, -11, -51, 96, -23, 3, 69, 24, -20, -59, -88, -108, -95, -51, 75, -97, -119, 48, -93, 122, -54, 116, -70, -97, 73, 10, -112, -88, 85, 5, 116, 74, 24, 51, 116, 27, -117, -23, -99, 4, -127, -122, 110, 73, -40, -50, -31, 99, -59, 57, -113, 27, 65, -49, -97, -36, 32, -123, 61, 124, 121, 62, -83, 64, -22, 100, -90, -76, -29, 0, 124, 91, 117, -53, -50, -101, 28, 94, 112, -17, 96, -66, -5, -40, 73, 26, 99, -11, -112, -27, -87, -55, -2, -50, -110, -106, 34, -33, 102, 89, 61, -45, 117, -74, 47, 57, 118, 94, -17, 56, 65, 74, 103, -75, -2, -113, -105, 31, -126, -44, -17, -11, 71, -97, 88, 90, -4, 117};
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
    msg.setTimeStamp(0.5851372963001339);
    msg.setSource(15945U);
    msg.setSourceEntity(81U);
    msg.setDestination(12688U);
    msg.setDestinationEntity(96U);
    const char tmp_msg_0[] = {12, -57, 57, 57, -109, -124, 70, -87, 83, -87, 14, -2, 36, -83, 20, 116, 12, 116, 27, -51, -71, -116, 75, 124, 57, -122, 14, -86, 77, -21, 124, -78, -103, -87, 77, 71, 15, -4, -30, 90, 32, 120, 23, -60, 30, 47, -20, 115, -115, -4, 4, 62, -15, 25, -20, 62, -64, -18, -25, -57, -17, 92, 89, 76, -10, 2, -3, 112, 34, -42, -70, -43, 64, -75, -48, -8, -26, -76, 0, -87, -45, 126, -93, -40, -84, 14, -105, -127, 126, 64, -73, 66, -25, 106, 69, -93, -112, -75, 47, 78, -81, -80, 90, -3, -24, -80, 107, -5, 14, -27, 83, 23, -103, 71, -85, 36, 18, 79, 104, 52, 60, 4, -78, -87, -121, 3, -21, -93, -66, -34, 113, 123, 14, 0, 8, 53, -49, -118, 31, 35, 92, 81, 55, -81, -18, 14, 88, 12, 126, 54, -128, 42, -26, 54, 22, 93, 19, -116, -109, 80, 114, 54, 19, -76, -47, 70, -46, -53, -49, -100, 6, -50, 33, -122, 44, 5, 62, -63, 14, -52, 78, 85, 54, 21, -61, -101, 23, -103, -101, -110, -65, 80, 53, 72, 69, 10, -49, -24, -72, -77, -55, -49, 25, -54, 92, 114, 120, -11, -68, -20, -106, 71, 44, 78, -87, -122, -43, 38, -34, 50, -102, 44, 31, -34, 81, -43, -58};
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
    msg.setTimeStamp(0.8698308629965016);
    msg.setSource(46513U);
    msg.setSourceEntity(31U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(240U);
    msg.frequency = 3336247336U;
    msg.min_range = 34233U;
    msg.max_range = 49216U;

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
    msg.setTimeStamp(0.2654062697189963);
    msg.setSource(50687U);
    msg.setSourceEntity(74U);
    msg.setDestination(52553U);
    msg.setDestinationEntity(91U);
    msg.frequency = 2928471875U;
    msg.min_range = 59591U;
    msg.max_range = 42316U;

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
    msg.setTimeStamp(0.8121793744789226);
    msg.setSource(22067U);
    msg.setSourceEntity(45U);
    msg.setDestination(61530U);
    msg.setDestinationEntity(4U);
    msg.frequency = 1756076864U;
    msg.min_range = 37850U;
    msg.max_range = 49305U;

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
    msg.setTimeStamp(0.16188052501185324);
    msg.setSource(47916U);
    msg.setSourceEntity(131U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(218U);
    msg.type = 54U;
    msg.frequency = 909830406U;
    msg.min_range = 56078U;
    msg.max_range = 22848U;
    msg.bits_per_point = 51U;
    msg.scale_factor = 0.8077164189478859;
    const char tmp_msg_0[] = {59, 47, -49, -87, -128, 11, -124, 80, -83, -4, -90, 40, -104, -23, -21, 55, 2, -121, -66, 13, 61, -87, -30, 116, 53, 96, 125, 38, -36, 95, -93, 78, 99, -29, -31, 50, -17, 30, 38, 99, 90, -58, 80, 74, 12, 15, 105, -127, 76, 30, -56, -103, 32, -80, -50, -82, -82, -79, -63, -33, -50, 62, -17, 45, 48, 87, -48, 56, 51, 96, 39, 80, -108, -123, 25, -29, -31, -96, 46, 67, 36, -21, 68, 99, -95, 110, -122, -17, 22, 103, 28, -36, -20, -91, -99, -90, -16, -125, 38, 99, -100, 100, -26, -31, 23, -73, -46, 2, 76, -44, 26, 120, 116, 88, -25, -96, -108, -49, 47, 105, -73, -51, 31, 28, -108, -44, -11, 73, -103, 84, -99, 39, 70, -73, 45, -121, -91, 81, 72, -20, -10, 111, -95, 86, 39, -53, -53, -57, -62, -47, -44, -121, 86, -114, 105, 122, 66, 104, 78, -7, -70, -85, -21, 3, 93, -65, -44, -22, -60, 26};
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
    msg.setTimeStamp(0.7449527702227483);
    msg.setSource(54373U);
    msg.setSourceEntity(124U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(223U);
    msg.type = 12U;
    msg.frequency = 3178752342U;
    msg.min_range = 22286U;
    msg.max_range = 39180U;
    msg.bits_per_point = 60U;
    msg.scale_factor = 0.9626099080229731;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4730799719039558;
    tmp_msg_0.beam_height = 0.5906877313908696;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-71, 59, 37, -76, 111, -40, 16, 52, 90, 1, -83, 71, -9, 91, 99, -71, -100, 36, -100, 109, -74, -60, 4, 69, 18, 90, -79, -91, -123, 75, -33, 76, -91, -106, 11, 64, -36, -78, 22, 38, -3, 1, -122, -105, 106, -65, -32, -70, 21, 33, -113, 30, -8, -54, -22, 93, -84, 12, 69, -112, 32, -123, -7, 60, 25, -79, -64, 77, -44, -74, 114, 65, 109, -60, 6, -39, -32, -21, -3, -3, -19, 107, 91, 59, 124, -28, 122, 27, 3, 58, 11, -91, 92, 100, 33, -60, 101, 24, 106, -92, 88, 56, 38, -29, 23, 72, -24, 31, 1, -39, -9, -37, 91, 103, -119, 63, -18, 32, 76, -113, 87, -72, 1, -69, -13, 81, -94, -98, -108, 26, 93, 51, -114, -65, -5, -128, 106, -98, -113, -65, -12, -17, 66, -114, 5, -40, 117, -31, -46, -76, 119, 83, -64, 89, -18, 33, 126, -2, -119, 78};
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
    msg.setTimeStamp(0.27800764505783127);
    msg.setSource(51324U);
    msg.setSourceEntity(47U);
    msg.setDestination(28027U);
    msg.setDestinationEntity(173U);
    msg.type = 83U;
    msg.frequency = 3696050660U;
    msg.min_range = 50683U;
    msg.max_range = 54940U;
    msg.bits_per_point = 39U;
    msg.scale_factor = 0.785221523169205;
    const char tmp_msg_0[] = {-113, 83, -77, -84, 92, 76, 104, -40, -17, 39, 96, -94, 44, -54, -96, 123, 50, -112, 64, 34, 46, 99, 44, -87, 39, -49, 47, -21, 99, -35, -117, 37, 54, 94, -47, 20, -77, 86, 96, -19, -18, 39, 27, 54, -79, 35, 8, 74, -48, 79, -60, -13, -41, -109, -64, -68, 126, -26, -85, -28, 124, 31, -8, 28, 85, -111, -93, 61, 63, 16, 63, -48, -50, -10, 110, -120, 25, -22, -93, 120, -30, -59, -17, -128, -31, 64, 114, -113, 4, 111, -54, 37, -25, 32, 84, 82, -97, -77, 49, 120, 104, -34, 53, -21, 102, 55, 123, -12, -27, -48, 68, -95, -79, -23, -10, -92, 37, -41, -22, -101, -88, 112, 15, 86, 10, -40, 36, 40, 34, 94, 109, -106, -10, 22, 123, 122, -72, 31, 120, -128, -27, 114, -68, -128, -120, -50, 32, 46, -85, -50, -111, -43, 109, 95, -85, 52, 35, 76, -49, -73, -42, 107, 8, -98, 4, 39, -25, 104, -8, -91, -18, -77, -82, 52, -14, -25, -24, -14, 89, 34, -127, 27, 61, 4, 108, -114, 34, 118, -54, -65, 1, -39, -27, -107, 115, 26, 83, 51, 85, -10, 41, 87, -5, 17, 23, 53};
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
    msg.setTimeStamp(0.8111785149535291);
    msg.setSource(8275U);
    msg.setSourceEntity(67U);
    msg.setDestination(64961U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.7102748956074487);
    msg.setSource(22654U);
    msg.setSourceEntity(14U);
    msg.setDestination(19797U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.5822511977768006);
    msg.setSource(11203U);
    msg.setSourceEntity(99U);
    msg.setDestination(30890U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.23759377199437648);
    msg.setSource(34531U);
    msg.setSourceEntity(71U);
    msg.setDestination(53223U);
    msg.setDestinationEntity(36U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.8164930888826243);
    msg.setSource(49895U);
    msg.setSourceEntity(60U);
    msg.setDestination(2636U);
    msg.setDestinationEntity(6U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.5627147899540138);
    msg.setSource(16046U);
    msg.setSourceEntity(64U);
    msg.setDestination(54551U);
    msg.setDestinationEntity(42U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.36927338291132616);
    msg.setSource(22721U);
    msg.setSourceEntity(17U);
    msg.setDestination(40039U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6545413607423312;
    msg.confidence = 0.7071176186755881;
    msg.opmodes.assign("MUGDJEIUQEEWFWVEWNWOHTAUQBZKFQSDDXHLMCPXUUDNAGZGTIWMVWBBNEGJGRMVUONEPECUGNWOKFQULZRDNOAHDXAXIBVZKMBQPKSJKZVPZEYGBNGJJITZQRKKJPKABVMALCQY");

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
    msg.setTimeStamp(0.49353482415946426);
    msg.setSource(65324U);
    msg.setSourceEntity(50U);
    msg.setDestination(30658U);
    msg.setDestinationEntity(182U);
    msg.value = 0.0779468355860754;
    msg.confidence = 0.17032406211156748;
    msg.opmodes.assign("DYEFSFRZOJWQAONVFALTCEPBYNWFNEMPOLMOHXCLTDBHMDNSKJIIVROEJBKLTLWALYFPPDCGOMEXJZKHOEKRICWXJEYZWNUOJXPPGIGUXQTMVRAHBDMIQQBSDKMIQIDBMUWGR");

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
    msg.setTimeStamp(0.6769746283222341);
    msg.setSource(24919U);
    msg.setSourceEntity(184U);
    msg.setDestination(4516U);
    msg.setDestinationEntity(130U);
    msg.value = 0.12653089902796189;
    msg.confidence = 0.68379575253065;
    msg.opmodes.assign("VUUVTKGUKIYDLKMATYROIQJHAPWOQQFBEXMKXUYNYNPRZILGOWXCDVWJZECWAHLXEPJEWQCEMYYSYJDWVAGTBFXKOAIRRYJHLTVPMBVYUPHKZCGOWOFIQENQSNVIBZZSEDHB");

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
    msg.setTimeStamp(0.11376863236054602);
    msg.setSource(22404U);
    msg.setSourceEntity(225U);
    msg.setDestination(50859U);
    msg.setDestinationEntity(126U);
    msg.itow = 50800105U;
    msg.lat = 0.732063963046659;
    msg.lon = 0.2039637497611888;
    msg.height_ell = 0.939729905408267;
    msg.height_sea = 0.23284311860124285;
    msg.hacc = 0.15991580207765765;
    msg.vacc = 0.26995530690306857;
    msg.vel_n = 0.03454552907461661;
    msg.vel_e = 0.0012463779535371033;
    msg.vel_d = 0.964586127130762;
    msg.speed = 0.15763710533929476;
    msg.gspeed = 0.3000010747151196;
    msg.heading = 0.8858880501717806;
    msg.sacc = 0.13525165865269262;
    msg.cacc = 0.07591133166406205;

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
    msg.setTimeStamp(0.7595381023593364);
    msg.setSource(23246U);
    msg.setSourceEntity(136U);
    msg.setDestination(14357U);
    msg.setDestinationEntity(225U);
    msg.itow = 2849231767U;
    msg.lat = 0.1591437196941936;
    msg.lon = 0.08223761183818046;
    msg.height_ell = 0.528989177568336;
    msg.height_sea = 0.15520543319216074;
    msg.hacc = 0.7202169381218655;
    msg.vacc = 0.9246352004018445;
    msg.vel_n = 0.8931747560554927;
    msg.vel_e = 0.29947349047250127;
    msg.vel_d = 0.0034345803911701722;
    msg.speed = 0.18880627279283324;
    msg.gspeed = 0.22705617261924915;
    msg.heading = 0.03455465036693284;
    msg.sacc = 0.33945616503866294;
    msg.cacc = 0.7231707140109849;

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
    msg.setTimeStamp(0.412415814817631);
    msg.setSource(38378U);
    msg.setSourceEntity(55U);
    msg.setDestination(35367U);
    msg.setDestinationEntity(222U);
    msg.itow = 3840778861U;
    msg.lat = 0.16404728336378116;
    msg.lon = 0.11604117902858557;
    msg.height_ell = 0.05414346571214623;
    msg.height_sea = 0.19891456950713515;
    msg.hacc = 0.5047329702996711;
    msg.vacc = 0.5340866405554378;
    msg.vel_n = 0.014482878814851219;
    msg.vel_e = 0.9869471862865652;
    msg.vel_d = 0.6364991755883309;
    msg.speed = 0.03462888677826348;
    msg.gspeed = 0.39765860623963667;
    msg.heading = 0.636827743665272;
    msg.sacc = 0.5796131606717704;
    msg.cacc = 0.7123223383960727;

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
    msg.setTimeStamp(0.7613542491613942);
    msg.setSource(65485U);
    msg.setSourceEntity(199U);
    msg.setDestination(26629U);
    msg.setDestinationEntity(15U);
    msg.id = 106U;
    msg.value = 0.8415070162408006;

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
    msg.setTimeStamp(0.9836110103165011);
    msg.setSource(36610U);
    msg.setSourceEntity(188U);
    msg.setDestination(7711U);
    msg.setDestinationEntity(27U);
    msg.id = 192U;
    msg.value = 0.43139457686770577;

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
    msg.setTimeStamp(0.6653615704170682);
    msg.setSource(49782U);
    msg.setSourceEntity(25U);
    msg.setDestination(35742U);
    msg.setDestinationEntity(54U);
    msg.id = 63U;
    msg.value = 0.7288871634769447;

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
    msg.setTimeStamp(0.2989332234617291);
    msg.setSource(31395U);
    msg.setSourceEntity(77U);
    msg.setDestination(906U);
    msg.setDestinationEntity(146U);
    msg.x = 0.00875553306262744;
    msg.y = 0.9032328468837361;
    msg.z = 0.02214897952542516;
    msg.phi = 0.548376596893491;
    msg.theta = 0.6776065954061012;
    msg.psi = 0.8034478049205139;

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
    msg.setTimeStamp(0.9133816583467566);
    msg.setSource(57473U);
    msg.setSourceEntity(43U);
    msg.setDestination(22668U);
    msg.setDestinationEntity(141U);
    msg.x = 0.879401307671513;
    msg.y = 0.5562939793580197;
    msg.z = 0.6559348304176481;
    msg.phi = 0.14070518842432356;
    msg.theta = 0.05152660845550294;
    msg.psi = 0.9512006112354414;

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
    msg.setTimeStamp(0.6335973334441353);
    msg.setSource(51541U);
    msg.setSourceEntity(124U);
    msg.setDestination(17948U);
    msg.setDestinationEntity(169U);
    msg.x = 0.5542459582660867;
    msg.y = 0.48411676823004335;
    msg.z = 0.8125940868712972;
    msg.phi = 0.993945284585854;
    msg.theta = 0.09070928930120103;
    msg.psi = 0.39726097118114967;

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
    msg.setTimeStamp(0.19519198293144757);
    msg.setSource(27134U);
    msg.setSourceEntity(167U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(133U);
    msg.beam_width = 0.9579418265244289;
    msg.beam_height = 0.5457963102955056;

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
    msg.setTimeStamp(0.057039636012813255);
    msg.setSource(50226U);
    msg.setSourceEntity(41U);
    msg.setDestination(1214U);
    msg.setDestinationEntity(99U);
    msg.beam_width = 0.8449268369526846;
    msg.beam_height = 0.1792072328272276;

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
    msg.setTimeStamp(0.8363127437958096);
    msg.setSource(30145U);
    msg.setSourceEntity(236U);
    msg.setDestination(63427U);
    msg.setDestinationEntity(117U);
    msg.beam_width = 0.17391707385428778;
    msg.beam_height = 0.44990377932765546;

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
    msg.setTimeStamp(0.833218819192818);
    msg.setSource(22739U);
    msg.setSourceEntity(40U);
    msg.setDestination(53167U);
    msg.setDestinationEntity(93U);
    msg.id = 1U;
    msg.zoom = 164U;
    msg.action = 73U;

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
    msg.setTimeStamp(0.22082650336579213);
    msg.setSource(30057U);
    msg.setSourceEntity(126U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(198U);
    msg.id = 139U;
    msg.zoom = 46U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.18285015248154768);
    msg.setSource(32218U);
    msg.setSourceEntity(226U);
    msg.setDestination(54340U);
    msg.setDestinationEntity(110U);
    msg.id = 60U;
    msg.zoom = 197U;
    msg.action = 236U;

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
    msg.setTimeStamp(0.7748829752416517);
    msg.setSource(32343U);
    msg.setSourceEntity(182U);
    msg.setDestination(58405U);
    msg.setDestinationEntity(127U);
    msg.id = 124U;
    msg.value = 0.36607502372313705;

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
    msg.setTimeStamp(0.15779896572993657);
    msg.setSource(49268U);
    msg.setSourceEntity(249U);
    msg.setDestination(61940U);
    msg.setDestinationEntity(200U);
    msg.id = 153U;
    msg.value = 0.8650628360968177;

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
    msg.setTimeStamp(0.3398767746974417);
    msg.setSource(35917U);
    msg.setSourceEntity(199U);
    msg.setDestination(17054U);
    msg.setDestinationEntity(6U);
    msg.id = 178U;
    msg.value = 0.0699965290016894;

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
    msg.setTimeStamp(0.4200513263228415);
    msg.setSource(44752U);
    msg.setSourceEntity(2U);
    msg.setDestination(12778U);
    msg.setDestinationEntity(200U);
    msg.id = 125U;
    msg.value = 0.032341710878370455;

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
    msg.setTimeStamp(0.2340052673920625);
    msg.setSource(3987U);
    msg.setSourceEntity(252U);
    msg.setDestination(17477U);
    msg.setDestinationEntity(38U);
    msg.id = 47U;
    msg.value = 0.43161710835525946;

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
    msg.setTimeStamp(0.6523885047617514);
    msg.setSource(62249U);
    msg.setSourceEntity(195U);
    msg.setDestination(46378U);
    msg.setDestinationEntity(5U);
    msg.id = 219U;
    msg.value = 0.3415239850440277;

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
    msg.setTimeStamp(0.941442578929689);
    msg.setSource(63873U);
    msg.setSourceEntity(72U);
    msg.setDestination(43753U);
    msg.setDestinationEntity(149U);
    msg.id = 122U;
    msg.angle = 0.37514239770041824;

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
    msg.setTimeStamp(0.4671572967821618);
    msg.setSource(13718U);
    msg.setSourceEntity(245U);
    msg.setDestination(665U);
    msg.setDestinationEntity(73U);
    msg.id = 168U;
    msg.angle = 0.6229547161961226;

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
    msg.setTimeStamp(0.3591614624351954);
    msg.setSource(62939U);
    msg.setSourceEntity(171U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(100U);
    msg.id = 77U;
    msg.angle = 0.05104892606773681;

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
    msg.setTimeStamp(0.6064471629951796);
    msg.setSource(49283U);
    msg.setSourceEntity(167U);
    msg.setDestination(53304U);
    msg.setDestinationEntity(223U);
    msg.op = 238U;
    msg.actions.assign("NEKVIBHMLGXLZAOBWRXSCJIQJQMXJVIPRIDCRRSBZNQWYKWGTBTVMYIJXQQKXDXLFJDBYVGSQBTGKPEJUEWTGGXMLPUANCZQHTYEVDAIHORAHIN");

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
    msg.setTimeStamp(0.2923737282880211);
    msg.setSource(6137U);
    msg.setSourceEntity(27U);
    msg.setDestination(11199U);
    msg.setDestinationEntity(227U);
    msg.op = 26U;
    msg.actions.assign("MGEHUVCQTHZGIQFUMOSYKJWHAJWOXMVAACWLUDVOFWYWKAYSLOQFVXHHTXUPURMSERGWGEMOOXXLHTPBGH");

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
    msg.setTimeStamp(0.5894909378712568);
    msg.setSource(53548U);
    msg.setSourceEntity(170U);
    msg.setDestination(48358U);
    msg.setDestinationEntity(9U);
    msg.op = 112U;
    msg.actions.assign("YBMOREHXMWMBQOMMUOHVIUNCVKGHAUYNNJXCSQXPHTTKZSTYUAXEIRDVFIAZBEWWOIZKIKIEBLVSJLCLYOVWSGRXELFSAUFOFWJGCNQXQJOCTQKBQDG");

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
    msg.setTimeStamp(0.8368321616909115);
    msg.setSource(58906U);
    msg.setSourceEntity(155U);
    msg.setDestination(62907U);
    msg.setDestinationEntity(72U);
    msg.actions.assign("NRFVQSNCPKVVNRMKQTIBFEDCFWDHJLHSOSDQUGJXMGTEHESTDXTFQCZRMGCLFWMBWKOIAGPVLGSPKJLGWAEYBEJHPMRYVYPCICXINUAKUEPNMBAYTHVUBQKRWWZLLYLUTXOUOOIOXCZECFQHSOIWTG");

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
    msg.setTimeStamp(0.8472689475324464);
    msg.setSource(24857U);
    msg.setSourceEntity(167U);
    msg.setDestination(46540U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("RRJFRKWGGBYWFRGTLXYKEMEKFSCCNECPBTZTYAFLQYWEWSTAJFTVQAMOVMJLKSYEFIDNXUPFXJHPXPACTWBDITHXMHHGQNHHYHNVYQNSIRIDDFIMBICJDHHOLZGOMVUTJVN");

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
    msg.setTimeStamp(0.38631313958014724);
    msg.setSource(3293U);
    msg.setSourceEntity(121U);
    msg.setDestination(42466U);
    msg.setDestinationEntity(81U);
    msg.actions.assign("FYCCUWZWMDVJWHJPONODRQCQSZZOJUOUHIAZTYWISTMAVL");

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
    msg.setTimeStamp(0.7914239290646395);
    msg.setSource(21516U);
    msg.setSourceEntity(173U);
    msg.setDestination(54279U);
    msg.setDestinationEntity(204U);
    msg.button = 148U;
    msg.value = 67U;

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
    msg.setTimeStamp(0.21888972081637736);
    msg.setSource(47950U);
    msg.setSourceEntity(69U);
    msg.setDestination(47033U);
    msg.setDestinationEntity(6U);
    msg.button = 86U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.8992890207080969);
    msg.setSource(54160U);
    msg.setSourceEntity(144U);
    msg.setDestination(7372U);
    msg.setDestinationEntity(62U);
    msg.button = 222U;
    msg.value = 234U;

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
    msg.setTimeStamp(0.15023930483749715);
    msg.setSource(35596U);
    msg.setSourceEntity(175U);
    msg.setDestination(3891U);
    msg.setDestinationEntity(174U);
    msg.op = 240U;
    msg.text.assign("IIQLOJKWRTFLCTFYGWAJWAVLUHWWSQQPJSAIHCUOMQKZEDYRZBAYKZYFTVKMJUJSCIMTHTHYXGGHEECBBWMRBIPPTDODGPLL");

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
    msg.setTimeStamp(0.6409692797439633);
    msg.setSource(29872U);
    msg.setSourceEntity(142U);
    msg.setDestination(56872U);
    msg.setDestinationEntity(100U);
    msg.op = 243U;
    msg.text.assign("LIUQAAAEAOBENROEXNWTSROSCOPLMYDUIWGITJHRFDCAMHONXXYSXPKMTQKYPKTMNEDNDKPZFERNUUUDHJQBSZABYQWZDPQFTLHESVQCLRDSRYBI");

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
    msg.setTimeStamp(0.6936381714513307);
    msg.setSource(527U);
    msg.setSourceEntity(250U);
    msg.setDestination(61429U);
    msg.setDestinationEntity(25U);
    msg.op = 69U;
    msg.text.assign("TBNUGWECWYLVDBQIOQLDFCKLGEFAUGKYACKOWJOLISDESDJPVQRHEZXKUTJIVAVRAGYCPHSWANABHBVJCLRJKPDUFGHJLNFTSJPDQMBIVHKVANZUTGFZAOSTYRLHBBKEZYQVYXQYXRWMQMUQTOVXXSZLPETORCFCMGNIHSXNCQPMXRWXPLSHFPUGTMIDPCUWKHFFO");

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
    msg.setTimeStamp(0.6513580211469266);
    msg.setSource(12758U);
    msg.setSourceEntity(64U);
    msg.setDestination(21534U);
    msg.setDestinationEntity(163U);
    msg.op = 199U;
    msg.time_remain = 0.2546139856417775;
    msg.sched_time = 0.3686688826937041;

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
    msg.setTimeStamp(0.9191035582622589);
    msg.setSource(6783U);
    msg.setSourceEntity(31U);
    msg.setDestination(17595U);
    msg.setDestinationEntity(185U);
    msg.op = 104U;
    msg.time_remain = 0.8577271871736106;
    msg.sched_time = 0.11068218428910648;

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
    msg.setTimeStamp(0.5235292413449198);
    msg.setSource(32115U);
    msg.setSourceEntity(168U);
    msg.setDestination(60205U);
    msg.setDestinationEntity(11U);
    msg.op = 116U;
    msg.time_remain = 0.43220812478123394;
    msg.sched_time = 0.986539325598909;

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
    msg.setTimeStamp(0.70397805847747);
    msg.setSource(37004U);
    msg.setSourceEntity(184U);
    msg.setDestination(33916U);
    msg.setDestinationEntity(121U);
    msg.name.assign("ICFOMATEJWUGAOGJRMKLFIUSOIDQDVVXSEROWKXFPEBWOLQLSGYEFNOUUHBQIEUZIFYHPGTHUDRCIYTDZQZALIRHZKJRMBTGNZGUMSXFUNRUWBYMTAPKDVNCQVQWNVDHNJBVSLLTFWIKPHMJFSEDYAETVXTFCOQWLGJURKYZ");
    msg.op = 231U;
    msg.sched_time = 0.4959357966900789;

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
    msg.setTimeStamp(0.5583593781529099);
    msg.setSource(38165U);
    msg.setSourceEntity(58U);
    msg.setDestination(41060U);
    msg.setDestinationEntity(52U);
    msg.name.assign("OLVBRXCSRIUOVIHJSQVZOEQXWSCXTZYSEXVBQITYBVJDENBZLUBTGONSMTYTKNEKFHKHYZABDSNBNNJFIFLDUFKTKPAMZXLCFQRQAMSYNQBDVESEYJWVROCCUTOSHALWIGFPTFGXGHLEHCQKZPAKWUZBQJWIQWDCDHH");
    msg.op = 205U;
    msg.sched_time = 0.4552973541626253;

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
    msg.setTimeStamp(0.24954550829638644);
    msg.setSource(60816U);
    msg.setSourceEntity(166U);
    msg.setDestination(46852U);
    msg.setDestinationEntity(189U);
    msg.name.assign("OQEXZSNXNRQUYBKJJRSJJGKAVPCAWIRAPHFNGTZPVMGTUWXLOJW");
    msg.op = 230U;
    msg.sched_time = 0.9988245514558451;

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
    msg.setTimeStamp(0.18613338799501233);
    msg.setSource(27248U);
    msg.setSourceEntity(30U);
    msg.setDestination(54873U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.23633742625104281);
    msg.setSource(14398U);
    msg.setSourceEntity(218U);
    msg.setDestination(50943U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.9454494793479834);
    msg.setSource(20809U);
    msg.setSourceEntity(24U);
    msg.setDestination(50124U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.1179244992733759);
    msg.setSource(8802U);
    msg.setSourceEntity(144U);
    msg.setDestination(5798U);
    msg.setDestinationEntity(75U);
    msg.name.assign("AVUXURGDQHUGXOIIY");
    msg.state = 155U;

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
    msg.setTimeStamp(0.5576486403534786);
    msg.setSource(12863U);
    msg.setSourceEntity(161U);
    msg.setDestination(64628U);
    msg.setDestinationEntity(124U);
    msg.name.assign("SERGQUYIDHCFQYOHZXGNSHOFHJ");
    msg.state = 86U;

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
    msg.setTimeStamp(0.7199067375976778);
    msg.setSource(35553U);
    msg.setSourceEntity(198U);
    msg.setDestination(11818U);
    msg.setDestinationEntity(110U);
    msg.name.assign("DTALYPERCUVYOWGJSHCLNXVPMYGFZWMCHUHTUIKBDAHYTATJUECZWLAQIKAVHRVOALSMRTQEMVXNIDGURDQNJZRWNIDKOOUPGGANXWJJBVXEOZKMBFEOVSHSBIWSXMGFGIJSWPZSKPZVUNDOLPRHMFBBEQEELCJ");
    msg.state = 82U;

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
    msg.setTimeStamp(0.2627762983935198);
    msg.setSource(29430U);
    msg.setSourceEntity(24U);
    msg.setDestination(31217U);
    msg.setDestinationEntity(55U);
    msg.name.assign("IQLIBGQHVYNWGTJEXIPHAVINJTXUUHIWOZDKMAKKWFZDDEPNLJUHZBRIPKUCCLYDHFPNYGAZSCQSXVQCLTUNOWHVVFJPLJPWNQBPEETCUCDLAXFQWTXIHMRWZTVRGYMGSRTPBFEDGAOEKBMCQAANJOYYALNMJXUAVXMHZMXWIPBASDBNXXYRULQMWYONYWTOSEZJIKCLC");
    msg.value = 235U;

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
    msg.setTimeStamp(0.6092768329368525);
    msg.setSource(12500U);
    msg.setSourceEntity(196U);
    msg.setDestination(3504U);
    msg.setDestinationEntity(12U);
    msg.name.assign("JKKDCZYNYGPSJITLMEPUIMPAZTLRDHKMQRFPFNNRQOPBPMXFZYZSKMUPHBOIOSJFXEYHVGYCQHVLES");
    msg.value = 69U;

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
    msg.setTimeStamp(0.08337864411565155);
    msg.setSource(4793U);
    msg.setSourceEntity(44U);
    msg.setDestination(63160U);
    msg.setDestinationEntity(252U);
    msg.name.assign("HJPALEERYMGBOJZTCCREZVIWUQZORIKBNCWVUYTSEAVUINFMJQGIYZPQLAWFMKSGDK");
    msg.value = 202U;

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
    msg.setTimeStamp(0.08238404018784418);
    msg.setSource(4107U);
    msg.setSourceEntity(225U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(20U);
    msg.name.assign("EPQKAKYILIPUSBIMJOSBDKJOXWHFIKMMNIIQGWHOPFRXSVYROBWHJGTUYJMLXDZNNKMHECCZCVJVFRRUGDQQXVLOCDXQTCSCKPBTTLRNGFQYRDSTZVUVXTMNENAOWCEXHFRMHNSBWI");

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
    msg.setTimeStamp(0.5930723358186266);
    msg.setSource(64146U);
    msg.setSourceEntity(212U);
    msg.setDestination(33335U);
    msg.setDestinationEntity(70U);
    msg.name.assign("JPUXYKWLIUHRMVLSENFNSYHMWBUHASGAZLEUAQBDRDMCBPAPTELRQIZRQZLITQEECVPYISPVNYPFOFSDRRXHIXDGXBNRQOUJWRDBXGERQDIHBNCZYNGWUZOSGIMSZLQPJDEAPKMFPJTWUHQIWFJCATYUQFUHIVTDZMOXALKAGAGQXGWCWTBWVXSOFMAKCHVJCXYVILVVCKSHT");

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
    msg.setTimeStamp(0.33183067604517236);
    msg.setSource(29811U);
    msg.setSourceEntity(56U);
    msg.setDestination(15704U);
    msg.setDestinationEntity(248U);
    msg.name.assign("AFOMPQZHPPYHNNUTOHGTJFCYCDHKVRLRQKQRUSMDKHUNSZXLUEKNTRCKDZXBMITQLILGTLEUVYGAGBAEBOGOZOMDOXVOYETHBDUWQSGJDQWQDWHJICTAKCXLYPDGYHFLQVAPYYILESRFBM");

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
    msg.setTimeStamp(0.7811598965057839);
    msg.setSource(58566U);
    msg.setSourceEntity(78U);
    msg.setDestination(38979U);
    msg.setDestinationEntity(179U);
    msg.name.assign("BOCEYUMBIOWFXPLQANQYJZFOLXPVTBVVYJUVDINOLTTHSHFFBEINQSMWATVCSJZOPKEGOZFPDKAXIVSHJUONBBCGATHSXTYBHAZPUJLUMDCGAGRKCEIWIXYZQJNFQGUEKXCWUTIFGDQHQVMFJZM");
    msg.value = 208U;

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
    msg.setTimeStamp(0.14896709436163258);
    msg.setSource(56490U);
    msg.setSourceEntity(168U);
    msg.setDestination(8404U);
    msg.setDestinationEntity(165U);
    msg.name.assign("KCJSMYDMHPQZGBQZYVOPKMMHZIMFFPLJDWALQQCSKZJGRIKBYGKFXAOICEERNZSNWQCSUCLFRZPOEEETLRCSVOWGYDBXUZLKVMMEAZXERSSPVWGOQQTUGYWWMNPGYXUGBAVJFDNOTHTIDVARXHYQJLHUYINHJUNOPANFDPRZUAKWFAJSQFYD");
    msg.value = 132U;

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
    msg.setTimeStamp(0.18268030579412686);
    msg.setSource(63559U);
    msg.setSourceEntity(113U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(67U);
    msg.name.assign("EFEGYAVRLLOVNTRMPPSQBZHWNVHTJSCUBLRVNORVWUHWPJIDPXSOKTLSGNTIRNRVBBWLWBQZA");
    msg.value = 171U;

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
    msg.setTimeStamp(0.04201451084746377);
    msg.setSource(49708U);
    msg.setSourceEntity(52U);
    msg.setDestination(27369U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.10063513531086388;
    msg.lon = 0.08266555163383371;
    msg.height = 0.08117322309518771;
    msg.x = 0.5569862322901926;
    msg.y = 0.21918036638179528;
    msg.z = 0.06026864433008383;
    msg.phi = 0.03320491382876012;
    msg.theta = 0.5992148834127417;
    msg.psi = 0.5251578986122662;
    msg.u = 0.44450330174955643;
    msg.v = 0.025343211727593906;
    msg.w = 0.5637527592893709;
    msg.vx = 0.897962022873372;
    msg.vy = 0.6020503489991886;
    msg.vz = 0.0771229099887697;
    msg.p = 0.5402458010555022;
    msg.q = 0.5001024276620767;
    msg.r = 0.5915876786433932;
    msg.depth = 0.21748997324917763;
    msg.alt = 0.88637285846562;

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
    msg.setTimeStamp(0.18573890373965996);
    msg.setSource(59013U);
    msg.setSourceEntity(108U);
    msg.setDestination(49230U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.1210654232951307;
    msg.lon = 0.00846526362575939;
    msg.height = 0.33061501445110386;
    msg.x = 0.41149334827406814;
    msg.y = 0.3808085910463226;
    msg.z = 0.6998376490778108;
    msg.phi = 0.5266883516034371;
    msg.theta = 0.05425037230079588;
    msg.psi = 0.07786637831266607;
    msg.u = 0.39589049406424226;
    msg.v = 0.49599238817672575;
    msg.w = 0.5157943936346904;
    msg.vx = 0.17095123184494077;
    msg.vy = 0.29863773773790714;
    msg.vz = 0.9441189612310679;
    msg.p = 0.09748233986525912;
    msg.q = 0.34228234162948057;
    msg.r = 0.07704926349290542;
    msg.depth = 0.3562237651950144;
    msg.alt = 0.4691909372971086;

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
    msg.setTimeStamp(0.5944962155819341);
    msg.setSource(4102U);
    msg.setSourceEntity(178U);
    msg.setDestination(36265U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.31872765956318916;
    msg.lon = 0.1900105087299191;
    msg.height = 0.40689493941849075;
    msg.x = 0.8859356218305199;
    msg.y = 0.4436965796595651;
    msg.z = 0.9967910090669326;
    msg.phi = 0.4456145002345403;
    msg.theta = 0.37954126746288697;
    msg.psi = 0.5565448372025521;
    msg.u = 0.13874151381640676;
    msg.v = 0.46299853481505404;
    msg.w = 0.6826768416238859;
    msg.vx = 0.4663262325840851;
    msg.vy = 0.1934187786788859;
    msg.vz = 0.7352560233761823;
    msg.p = 0.7289459208751556;
    msg.q = 0.09692548392422473;
    msg.r = 0.46884185932290456;
    msg.depth = 0.9507712011531724;
    msg.alt = 0.5402148392016316;

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
    msg.setTimeStamp(0.18683819320099582);
    msg.setSource(2695U);
    msg.setSourceEntity(245U);
    msg.setDestination(15788U);
    msg.setDestinationEntity(220U);
    msg.x = 0.19181151737824387;
    msg.y = 0.5560727337205574;
    msg.z = 0.355137051192675;

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
    msg.setTimeStamp(0.6587466667448857);
    msg.setSource(14793U);
    msg.setSourceEntity(126U);
    msg.setDestination(51412U);
    msg.setDestinationEntity(136U);
    msg.x = 0.446374342020737;
    msg.y = 0.8385320937527575;
    msg.z = 0.014518401727946939;

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
    msg.setTimeStamp(0.6925926039347857);
    msg.setSource(58220U);
    msg.setSourceEntity(196U);
    msg.setDestination(47950U);
    msg.setDestinationEntity(121U);
    msg.x = 0.826586924402625;
    msg.y = 0.4285990621377317;
    msg.z = 0.46829502861710126;

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
    msg.setTimeStamp(0.4966502596195005);
    msg.setSource(5091U);
    msg.setSourceEntity(11U);
    msg.setDestination(25267U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5927930756961312;

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
    msg.setTimeStamp(0.43393575672408013);
    msg.setSource(6461U);
    msg.setSourceEntity(9U);
    msg.setDestination(55484U);
    msg.setDestinationEntity(77U);
    msg.value = 0.20330467485519577;

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
    msg.setTimeStamp(0.27134629881745576);
    msg.setSource(43846U);
    msg.setSourceEntity(77U);
    msg.setDestination(44556U);
    msg.setDestinationEntity(93U);
    msg.value = 0.338259009099558;

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
    msg.setTimeStamp(0.33728444244134215);
    msg.setSource(49260U);
    msg.setSourceEntity(68U);
    msg.setDestination(63799U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8247982036939602;

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
    msg.setTimeStamp(0.11913254457541);
    msg.setSource(6301U);
    msg.setSourceEntity(57U);
    msg.setDestination(54649U);
    msg.setDestinationEntity(149U);
    msg.value = 0.01157686980866901;

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
    msg.setTimeStamp(0.7764849512918939);
    msg.setSource(26597U);
    msg.setSourceEntity(234U);
    msg.setDestination(17184U);
    msg.setDestinationEntity(135U);
    msg.value = 0.9941580476831808;

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
    msg.setTimeStamp(0.13830441568830254);
    msg.setSource(63781U);
    msg.setSourceEntity(170U);
    msg.setDestination(28915U);
    msg.setDestinationEntity(250U);
    msg.x = 0.9594591656402431;
    msg.y = 0.2912169200210255;
    msg.z = 0.9086931793743327;
    msg.phi = 0.7440729668602561;
    msg.theta = 0.7472734971344509;
    msg.psi = 0.11678002578753832;
    msg.p = 0.3723211447528886;
    msg.q = 0.706311936159717;
    msg.r = 0.8202025360356987;
    msg.u = 0.5052256187469075;
    msg.v = 0.5272458788030498;
    msg.w = 0.02536912416818382;
    msg.bias_psi = 0.4920930048260289;
    msg.bias_r = 0.35422114372197755;

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
    msg.setTimeStamp(0.4156398245269627);
    msg.setSource(11037U);
    msg.setSourceEntity(179U);
    msg.setDestination(49061U);
    msg.setDestinationEntity(69U);
    msg.x = 0.6375492633245975;
    msg.y = 0.10660827412868856;
    msg.z = 0.6052033516718893;
    msg.phi = 0.31352605032569125;
    msg.theta = 0.18125930235617227;
    msg.psi = 0.5313748615239774;
    msg.p = 0.5120711298835776;
    msg.q = 0.2727615470225787;
    msg.r = 0.5049607793777745;
    msg.u = 0.8931305674727403;
    msg.v = 0.7895777270778781;
    msg.w = 0.8890445613688829;
    msg.bias_psi = 0.9521187600159153;
    msg.bias_r = 0.8865711319109181;

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
    msg.setTimeStamp(0.6264205783793865);
    msg.setSource(61806U);
    msg.setSourceEntity(174U);
    msg.setDestination(24514U);
    msg.setDestinationEntity(214U);
    msg.x = 0.4813187337819681;
    msg.y = 0.8516358864946169;
    msg.z = 0.9193203663816927;
    msg.phi = 0.15646030389531618;
    msg.theta = 0.4072840723464938;
    msg.psi = 0.5656924159879864;
    msg.p = 0.18496351743592843;
    msg.q = 0.6090204818542003;
    msg.r = 0.9994413298459478;
    msg.u = 0.45189819794372543;
    msg.v = 0.2353139518954095;
    msg.w = 0.9610664750355604;
    msg.bias_psi = 0.7753884386841626;
    msg.bias_r = 0.9840538503835473;

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
    msg.setTimeStamp(0.21710706610630004);
    msg.setSource(20637U);
    msg.setSourceEntity(101U);
    msg.setDestination(35972U);
    msg.setDestinationEntity(129U);
    msg.bias_psi = 0.8579430844153093;
    msg.bias_r = 0.22463527634663583;
    msg.cog = 0.7699115175864123;
    msg.cyaw = 0.7666359355110307;
    msg.lbl_rej_level = 0.31726176751016777;
    msg.gps_rej_level = 0.30184355471931046;
    msg.custom_x = 0.02608844790696674;
    msg.custom_y = 0.4616171188691839;
    msg.custom_z = 0.005843421738649823;

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
    msg.setTimeStamp(0.015569963097499806);
    msg.setSource(21314U);
    msg.setSourceEntity(124U);
    msg.setDestination(2855U);
    msg.setDestinationEntity(200U);
    msg.bias_psi = 0.8568595111924983;
    msg.bias_r = 0.3430211095059461;
    msg.cog = 0.8937481017299694;
    msg.cyaw = 0.8947866953990353;
    msg.lbl_rej_level = 0.9729822033934988;
    msg.gps_rej_level = 0.9795795279791032;
    msg.custom_x = 0.207440723359671;
    msg.custom_y = 0.0787438427241266;
    msg.custom_z = 0.3569701113753927;

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
    msg.setTimeStamp(0.472029967857865);
    msg.setSource(3134U);
    msg.setSourceEntity(14U);
    msg.setDestination(6358U);
    msg.setDestinationEntity(243U);
    msg.bias_psi = 0.298632400489666;
    msg.bias_r = 0.586720801751209;
    msg.cog = 0.913737878606603;
    msg.cyaw = 0.06307608223101924;
    msg.lbl_rej_level = 0.7273867157253393;
    msg.gps_rej_level = 0.8238121196860737;
    msg.custom_x = 0.9438811160574799;
    msg.custom_y = 0.587875063201064;
    msg.custom_z = 0.44101699530508953;

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
    msg.setTimeStamp(0.5386097770664124);
    msg.setSource(12964U);
    msg.setSourceEntity(179U);
    msg.setDestination(30715U);
    msg.setDestinationEntity(95U);
    msg.utc_time = 0.3759542649055976;
    msg.reason = 79U;

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
    msg.setTimeStamp(0.166211607607337);
    msg.setSource(41486U);
    msg.setSourceEntity(164U);
    msg.setDestination(64376U);
    msg.setDestinationEntity(173U);
    msg.utc_time = 0.16390833208895994;
    msg.reason = 73U;

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
    msg.setTimeStamp(0.03207165581563465);
    msg.setSource(140U);
    msg.setSourceEntity(242U);
    msg.setDestination(30752U);
    msg.setDestinationEntity(83U);
    msg.utc_time = 0.9223333200615651;
    msg.reason = 105U;

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
    msg.setTimeStamp(0.9595857775686307);
    msg.setSource(1787U);
    msg.setSourceEntity(229U);
    msg.setDestination(30731U);
    msg.setDestinationEntity(102U);
    msg.id = 53U;
    msg.range = 0.04562441226167713;
    msg.acceptance = 102U;

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
    msg.setTimeStamp(0.4313242953889176);
    msg.setSource(59757U);
    msg.setSourceEntity(21U);
    msg.setDestination(59867U);
    msg.setDestinationEntity(216U);
    msg.id = 100U;
    msg.range = 0.5456520448658557;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.5963064536436244);
    msg.setSource(41020U);
    msg.setSourceEntity(19U);
    msg.setDestination(1992U);
    msg.setDestinationEntity(183U);
    msg.id = 206U;
    msg.range = 0.14437072972622467;
    msg.acceptance = 220U;

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
    msg.setTimeStamp(0.6923256161506287);
    msg.setSource(20788U);
    msg.setSourceEntity(162U);
    msg.setDestination(24210U);
    msg.setDestinationEntity(207U);
    msg.type = 205U;
    msg.reason = 134U;
    msg.value = 0.8389047737479853;
    msg.timestep = 0.5104313286324339;

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
    msg.setTimeStamp(0.8142025620760784);
    msg.setSource(29541U);
    msg.setSourceEntity(154U);
    msg.setDestination(30344U);
    msg.setDestinationEntity(169U);
    msg.type = 131U;
    msg.reason = 145U;
    msg.value = 0.6970036903411158;
    msg.timestep = 0.2955475590092619;

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
    msg.setTimeStamp(0.1221466308335315);
    msg.setSource(16196U);
    msg.setSourceEntity(48U);
    msg.setDestination(41176U);
    msg.setDestinationEntity(99U);
    msg.type = 147U;
    msg.reason = 93U;
    msg.value = 0.5754972108935668;
    msg.timestep = 0.1901471339863371;

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
    msg.setTimeStamp(0.6547698894098481);
    msg.setSource(60501U);
    msg.setSourceEntity(163U);
    msg.setDestination(12202U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.12402722990081338);
    msg.setSource(7956U);
    msg.setSourceEntity(27U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.7850771309794387);
    msg.setSource(27102U);
    msg.setSourceEntity(94U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.4274817812828189);
    msg.setSource(41183U);
    msg.setSourceEntity(195U);
    msg.setDestination(40573U);
    msg.setDestinationEntity(76U);
    msg.beacon.assign("EOYMGSXHPOUMXMJYMGWDJFDNINMCEAQCIGBDOXRGVVZTNWLXNQYQNEBAXTLLURCQXNYFIADHIRUVOGPUVZTDFSQHUBENHSSRIPNUPIDFHGOOFDASTCJEYGVDKCEHPGIPTOQZFTPFLCVVWMORFTKLAZEIVOUVTMJZWWEWRIZIMEPTUQGDHBBXKYBLREBXYSWAKBYCFCNHKXXJWLGZHRKJZUQLBAJLFJKRMOCKRSLZKJSPBPCZ");
    msg.x = 0.49153443491963766;
    msg.y = 0.34968740294829215;
    msg.depth = 0.5250757359495928;
    msg.var_x = 0.3764702979607579;
    msg.var_y = 0.5025838049286517;

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
    msg.setTimeStamp(0.08716528627988451);
    msg.setSource(31606U);
    msg.setSourceEntity(184U);
    msg.setDestination(64054U);
    msg.setDestinationEntity(59U);
    msg.beacon.assign("QQOKDGHHZUEVTZEOYGEDFMTFGZVJORAAOXAVPRAPZXXMWKRNBJTFXSNHDWOZRCDK");
    msg.x = 0.5714028359493658;
    msg.y = 0.2634866814409027;
    msg.depth = 0.8442977525263764;
    msg.var_x = 0.9748574450235207;
    msg.var_y = 0.7580966194803591;

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
    msg.setTimeStamp(0.29027300433729186);
    msg.setSource(38561U);
    msg.setSourceEntity(112U);
    msg.setDestination(31729U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("KIJSRPYMZLRAKWQCJTBUEDBGDAMJEHVVKXZYBCHEFAZILYOCPJTCHOWSGDFWNQTNUCGGSDYIQYEQPIXZFUAFIBJUTTFGAOC");
    msg.x = 0.6800575194552553;
    msg.y = 0.1207214533543699;
    msg.depth = 0.42880169034650917;
    msg.var_x = 0.5140215266962802;
    msg.var_y = 0.3693152770282363;

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
    msg.setTimeStamp(0.30107354494676086);
    msg.setSource(31749U);
    msg.setSourceEntity(192U);
    msg.setDestination(32936U);
    msg.setDestinationEntity(89U);
    msg.value = 0.05578308488692407;

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
    msg.setTimeStamp(0.98132015150317);
    msg.setSource(56425U);
    msg.setSourceEntity(45U);
    msg.setDestination(46600U);
    msg.setDestinationEntity(94U);
    msg.value = 0.37577169879671735;

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
    msg.setTimeStamp(0.2286140774986476);
    msg.setSource(28242U);
    msg.setSourceEntity(247U);
    msg.setDestination(16814U);
    msg.setDestinationEntity(55U);
    msg.value = 0.07938985657885322;

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
    msg.setTimeStamp(0.9868504612792981);
    msg.setSource(49699U);
    msg.setSourceEntity(40U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(190U);
    msg.value = 0.01370344544188229;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.4016858977651373);
    msg.setSource(48551U);
    msg.setSourceEntity(182U);
    msg.setDestination(47935U);
    msg.setDestinationEntity(41U);
    msg.value = 0.47844810342680366;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.7118773300972933);
    msg.setSource(45486U);
    msg.setSourceEntity(196U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(222U);
    msg.value = 0.559848455814696;
    msg.z_units = 149U;

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
    msg.setTimeStamp(0.6918913971462298);
    msg.setSource(62935U);
    msg.setSourceEntity(184U);
    msg.setDestination(46803U);
    msg.setDestinationEntity(176U);
    msg.value = 0.30592833854637125;
    msg.speed_units = 140U;

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
    msg.setTimeStamp(0.43491411389939194);
    msg.setSource(23135U);
    msg.setSourceEntity(217U);
    msg.setDestination(47808U);
    msg.setDestinationEntity(186U);
    msg.value = 0.49276450735358257;
    msg.speed_units = 152U;

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
    msg.setTimeStamp(0.9840417637149634);
    msg.setSource(30459U);
    msg.setSourceEntity(23U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8942083526763732;
    msg.speed_units = 96U;

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
    msg.setTimeStamp(0.3143752477091414);
    msg.setSource(35404U);
    msg.setSourceEntity(13U);
    msg.setDestination(33866U);
    msg.setDestinationEntity(226U);
    msg.value = 0.24655472221846142;

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
    msg.setTimeStamp(0.943434462612592);
    msg.setSource(39305U);
    msg.setSourceEntity(230U);
    msg.setDestination(6951U);
    msg.setDestinationEntity(120U);
    msg.value = 0.06378266121174048;

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
    msg.setTimeStamp(0.4603559189473557);
    msg.setSource(40450U);
    msg.setSourceEntity(169U);
    msg.setDestination(61040U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7282546170981525;

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
    msg.setTimeStamp(0.33240438247926163);
    msg.setSource(16758U);
    msg.setSourceEntity(223U);
    msg.setDestination(57232U);
    msg.setDestinationEntity(128U);
    msg.value = 0.18477988517820232;

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
    msg.setTimeStamp(0.06851404774610359);
    msg.setSource(10796U);
    msg.setSourceEntity(158U);
    msg.setDestination(52293U);
    msg.setDestinationEntity(59U);
    msg.value = 0.8945162020742004;

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
    msg.setTimeStamp(0.09779323541657448);
    msg.setSource(12218U);
    msg.setSourceEntity(87U);
    msg.setDestination(13345U);
    msg.setDestinationEntity(67U);
    msg.value = 0.49923619281645204;

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
    msg.setTimeStamp(0.23903164826354617);
    msg.setSource(7219U);
    msg.setSourceEntity(62U);
    msg.setDestination(20124U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7129511519265169;

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
    msg.setTimeStamp(0.21981455032515063);
    msg.setSource(48628U);
    msg.setSourceEntity(217U);
    msg.setDestination(27153U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8218809474978465;

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
    msg.setTimeStamp(0.5444788801561594);
    msg.setSource(49848U);
    msg.setSourceEntity(221U);
    msg.setDestination(56762U);
    msg.setDestinationEntity(50U);
    msg.value = 0.3889085459207917;

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
    msg.setTimeStamp(0.23503477056904343);
    msg.setSource(7922U);
    msg.setSourceEntity(126U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(183U);
    msg.start_lat = 0.06760741721557195;
    msg.start_lon = 0.8301255185559183;
    msg.start_z = 0.03238410847705919;
    msg.start_z_units = 137U;
    msg.end_lat = 0.7998232400374133;
    msg.end_lon = 0.6647130002586236;
    msg.end_z = 0.5422489826033817;
    msg.end_z_units = 117U;
    msg.speed = 0.8540038908950065;
    msg.speed_units = 110U;
    msg.lradius = 0.36790595519166325;
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
    msg.setTimeStamp(0.18765378080351125);
    msg.setSource(18936U);
    msg.setSourceEntity(86U);
    msg.setDestination(2971U);
    msg.setDestinationEntity(116U);
    msg.start_lat = 0.14317477884432028;
    msg.start_lon = 0.21379494313824288;
    msg.start_z = 0.7482217064524698;
    msg.start_z_units = 35U;
    msg.end_lat = 0.42087948745237347;
    msg.end_lon = 0.7935779678214818;
    msg.end_z = 0.4331088914061145;
    msg.end_z_units = 167U;
    msg.speed = 0.7757980263039734;
    msg.speed_units = 31U;
    msg.lradius = 0.015513215484094456;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.9425610250573563);
    msg.setSource(24150U);
    msg.setSourceEntity(53U);
    msg.setDestination(31926U);
    msg.setDestinationEntity(149U);
    msg.start_lat = 0.5752353291375506;
    msg.start_lon = 0.644248330581433;
    msg.start_z = 0.9553644116728678;
    msg.start_z_units = 160U;
    msg.end_lat = 0.8042368645904392;
    msg.end_lon = 0.16933817606231338;
    msg.end_z = 0.5786821818082568;
    msg.end_z_units = 198U;
    msg.speed = 0.9026421494429686;
    msg.speed_units = 19U;
    msg.lradius = 0.4880437755120469;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.20586734343931612);
    msg.setSource(40917U);
    msg.setSourceEntity(185U);
    msg.setDestination(3929U);
    msg.setDestinationEntity(36U);
    msg.x = 0.5932959090183255;
    msg.y = 0.9365161611465159;
    msg.z = 0.800869097076916;
    msg.k = 0.9349291611786644;
    msg.m = 0.35474729379830394;
    msg.n = 0.5662382691671684;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.6744793831380592);
    msg.setSource(58063U);
    msg.setSourceEntity(117U);
    msg.setDestination(34951U);
    msg.setDestinationEntity(239U);
    msg.x = 0.8913489773048394;
    msg.y = 0.8121021723122799;
    msg.z = 0.9958066793012476;
    msg.k = 0.8159889222675408;
    msg.m = 0.10619630978650019;
    msg.n = 0.7338560327043467;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.5627152212597465);
    msg.setSource(54156U);
    msg.setSourceEntity(93U);
    msg.setDestination(61344U);
    msg.setDestinationEntity(111U);
    msg.x = 0.5968817566717912;
    msg.y = 0.6600154383545631;
    msg.z = 0.34353607979490375;
    msg.k = 0.5940077707554358;
    msg.m = 0.10843336692710426;
    msg.n = 0.4803401187853451;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.2269619718711764);
    msg.setSource(4955U);
    msg.setSourceEntity(143U);
    msg.setDestination(7504U);
    msg.setDestinationEntity(21U);
    msg.value = 0.6499353377016662;

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
    msg.setTimeStamp(0.37442756107084096);
    msg.setSource(22796U);
    msg.setSourceEntity(166U);
    msg.setDestination(17637U);
    msg.setDestinationEntity(125U);
    msg.value = 0.2957542129872881;

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
    msg.setTimeStamp(0.15676207803246323);
    msg.setSource(61664U);
    msg.setSourceEntity(74U);
    msg.setDestination(40114U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6465845152322584;

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
    msg.setTimeStamp(0.777397180394759);
    msg.setSource(61975U);
    msg.setSourceEntity(7U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(239U);
    msg.u = 0.4719404240705384;
    msg.v = 0.877085739980825;
    msg.w = 0.7797185642883268;
    msg.p = 0.2556697428081278;
    msg.q = 0.6003576099267122;
    msg.r = 0.17984926437000903;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.36231136670124353);
    msg.setSource(34354U);
    msg.setSourceEntity(189U);
    msg.setDestination(47150U);
    msg.setDestinationEntity(239U);
    msg.u = 0.40510183253253385;
    msg.v = 0.808374950272674;
    msg.w = 0.5478470009895712;
    msg.p = 0.8236462793850984;
    msg.q = 0.7449839068365868;
    msg.r = 0.74676801071584;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.5810157321536834);
    msg.setSource(62973U);
    msg.setSourceEntity(62U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(192U);
    msg.u = 0.021486691694233784;
    msg.v = 0.10106908855189867;
    msg.w = 0.44415180775003416;
    msg.p = 0.3816479871031453;
    msg.q = 0.8530061341648311;
    msg.r = 0.7629062484525996;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.3776615920881249);
    msg.setSource(25360U);
    msg.setSourceEntity(192U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(26U);
    msg.start_lat = 0.13490187695120226;
    msg.start_lon = 0.21273347879291338;
    msg.start_z = 0.31905523690496707;
    msg.start_z_units = 59U;
    msg.end_lat = 0.8623845847029167;
    msg.end_lon = 0.48594361995939894;
    msg.end_z = 0.352230222425055;
    msg.end_z_units = 12U;
    msg.lradius = 0.8409551795329745;
    msg.flags = 138U;
    msg.x = 0.47236090652738527;
    msg.y = 0.43529561399795624;
    msg.z = 0.04834145646919963;
    msg.vx = 0.5645016554040426;
    msg.vy = 0.586003575885368;
    msg.vz = 0.620656552623064;
    msg.course_error = 0.37701798961672583;
    msg.eta = 19011U;

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
    msg.setTimeStamp(0.726485700180393);
    msg.setSource(45905U);
    msg.setSourceEntity(142U);
    msg.setDestination(60468U);
    msg.setDestinationEntity(130U);
    msg.start_lat = 0.5742105496427053;
    msg.start_lon = 0.9012028859662635;
    msg.start_z = 0.5799007568064883;
    msg.start_z_units = 82U;
    msg.end_lat = 0.18306876141772077;
    msg.end_lon = 0.7857615997767293;
    msg.end_z = 0.37813466773428706;
    msg.end_z_units = 98U;
    msg.lradius = 0.11257312487321336;
    msg.flags = 139U;
    msg.x = 0.21213737062291782;
    msg.y = 0.6391848357941212;
    msg.z = 0.6208024893782347;
    msg.vx = 0.28342000844831394;
    msg.vy = 0.6282359420619721;
    msg.vz = 0.6573019329608658;
    msg.course_error = 0.9931368842756922;
    msg.eta = 46893U;

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
    msg.setTimeStamp(0.501922810192949);
    msg.setSource(23157U);
    msg.setSourceEntity(218U);
    msg.setDestination(22104U);
    msg.setDestinationEntity(40U);
    msg.start_lat = 0.9461099552315915;
    msg.start_lon = 0.8711447519071741;
    msg.start_z = 0.5406997087678926;
    msg.start_z_units = 173U;
    msg.end_lat = 0.08293609344820752;
    msg.end_lon = 0.6084967627037695;
    msg.end_z = 0.7648775780291918;
    msg.end_z_units = 66U;
    msg.lradius = 0.6768438279461175;
    msg.flags = 170U;
    msg.x = 0.008577181620961993;
    msg.y = 0.5972639624062216;
    msg.z = 0.7888449569474315;
    msg.vx = 0.1931331708569527;
    msg.vy = 0.11844638986911993;
    msg.vz = 0.10489402470118037;
    msg.course_error = 0.553857012241923;
    msg.eta = 37890U;

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
    msg.setTimeStamp(0.27672326162479655);
    msg.setSource(47876U);
    msg.setSourceEntity(65U);
    msg.setDestination(57106U);
    msg.setDestinationEntity(86U);
    msg.k = 0.8046358028576529;
    msg.m = 0.16091684052709077;
    msg.n = 0.22663429597613383;

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
    msg.setTimeStamp(0.5465400086339353);
    msg.setSource(9964U);
    msg.setSourceEntity(207U);
    msg.setDestination(34575U);
    msg.setDestinationEntity(188U);
    msg.k = 0.6779355144206706;
    msg.m = 0.3206399842965483;
    msg.n = 0.19136728913218692;

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
    msg.setTimeStamp(0.5133718561016318);
    msg.setSource(46848U);
    msg.setSourceEntity(143U);
    msg.setDestination(7879U);
    msg.setDestinationEntity(232U);
    msg.k = 0.14366281634631506;
    msg.m = 0.4073909627138331;
    msg.n = 0.7135115349570609;

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
    msg.setTimeStamp(0.4487981964395369);
    msg.setSource(26153U);
    msg.setSourceEntity(146U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(132U);
    msg.p = 0.9596234668835419;
    msg.i = 0.4827213232461388;
    msg.d = 0.47034086516444473;
    msg.a = 0.4140983157153204;

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
    msg.setTimeStamp(0.09331119340232485);
    msg.setSource(27911U);
    msg.setSourceEntity(127U);
    msg.setDestination(28236U);
    msg.setDestinationEntity(12U);
    msg.p = 0.06035545416738686;
    msg.i = 0.04063767595760881;
    msg.d = 0.21738079220488882;
    msg.a = 0.5463707756898813;

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
    msg.setTimeStamp(0.20450499394070132);
    msg.setSource(57041U);
    msg.setSourceEntity(132U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(30U);
    msg.p = 0.6400385486432504;
    msg.i = 0.2209260924249995;
    msg.d = 0.6857811189994107;
    msg.a = 0.4614173903018055;

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
    msg.setTimeStamp(0.9132816960188594);
    msg.setSource(16887U);
    msg.setSourceEntity(33U);
    msg.setDestination(2279U);
    msg.setDestinationEntity(137U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.04699232267354503);
    msg.setSource(45276U);
    msg.setSourceEntity(83U);
    msg.setDestination(52626U);
    msg.setDestinationEntity(161U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.28853685244637106);
    msg.setSource(25187U);
    msg.setSourceEntity(19U);
    msg.setDestination(62882U);
    msg.setDestinationEntity(66U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.7313560358597307);
    msg.setSource(17395U);
    msg.setSourceEntity(194U);
    msg.setDestination(18960U);
    msg.setDestinationEntity(175U);
    msg.timeout = 42375U;
    msg.lat = 0.027423524314175274;
    msg.lon = 0.6703949375618354;
    msg.z = 0.3983816554348619;
    msg.z_units = 139U;
    msg.speed = 0.1317219534205265;
    msg.speed_units = 175U;
    msg.roll = 0.6858526485838946;
    msg.pitch = 0.7182949213888865;
    msg.yaw = 0.7236517789958519;
    msg.custom.assign("LAVSITLKPFZTGZCXMIMXQPFGRLGPTBHKOEQOITTMZUEVEACUOHDJSGLSIZLILHSUNGPDBHJOOSDLUUMMYEJTHYUZSGXVOMAAJKGJHNMBHNFKYAHENYYQXENRBRPPSWWKQXWWYVVJBKBIEXNQCQPNWNRCSUIJPFDAJQCUHIABYELRXJQNXFPYOYCFKZWVDNTWRVDRBLZDXZESTBCAFVLCIQFKZVJUSXIYROWZGWKRAM");

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
    msg.setTimeStamp(0.9810555761522618);
    msg.setSource(44355U);
    msg.setSourceEntity(34U);
    msg.setDestination(30253U);
    msg.setDestinationEntity(143U);
    msg.timeout = 42231U;
    msg.lat = 0.5591419773652272;
    msg.lon = 0.4745719117696363;
    msg.z = 0.8095520655098505;
    msg.z_units = 201U;
    msg.speed = 0.7663920104715303;
    msg.speed_units = 106U;
    msg.roll = 0.6062799506832972;
    msg.pitch = 0.23909039449348457;
    msg.yaw = 0.16723278447632228;
    msg.custom.assign("UGPHCEHPJSQFCXMOJKFBVKUGKLXKJUJBQIIGHDAZRSFYVNLQOEZUJUZTMCTQUDKJHVJLXWOHNKXGDPSGOCXILNSDZWVZKFISGNGGSNXBASSPRFRPZKUIXEVIMYKPRQQUWTHCRVLDJYRBHTQQALTBYGELLOCAEYOLPIBCFFWNSFQWAGTFDDAIVFRASRBHEMWUTZIDLDVCAZTXWCQZHHEMKBPXVPBOYPW");

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
    msg.setTimeStamp(0.7267241357008668);
    msg.setSource(1196U);
    msg.setSourceEntity(100U);
    msg.setDestination(59961U);
    msg.setDestinationEntity(23U);
    msg.timeout = 11760U;
    msg.lat = 0.4680797936480702;
    msg.lon = 0.36916167285334234;
    msg.z = 0.3751589916903003;
    msg.z_units = 156U;
    msg.speed = 0.9064445661933337;
    msg.speed_units = 224U;
    msg.roll = 0.6553459788150318;
    msg.pitch = 0.6510805255481253;
    msg.yaw = 0.26042754562789905;
    msg.custom.assign("GAFOCBQKRDDJETWEHXMFJOIRRPASLEKCEUSZPVNGJNQWKHNAIFHSPTFZDGUBLNJKNPJVPIKMVEPUXTOOGDWVYFDWUGLKAFBYURZIMIBMZIRSZSBRHAUKXAPEGWXYOGXHRUQEOKMWCUEYVTVYRNCFQTQJIDVVSEOPJETNUZNJQBGYPHLLALLYWYFSRCJGSTBJYXHVCMWIZQHGFDMSOHTXVLTKZD");

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
    msg.setTimeStamp(0.5865013509626177);
    msg.setSource(57022U);
    msg.setSourceEntity(40U);
    msg.setDestination(53411U);
    msg.setDestinationEntity(68U);
    msg.timeout = 9484U;
    msg.lat = 0.7226023743322206;
    msg.lon = 0.2500858393661529;
    msg.z = 0.5270617098133412;
    msg.z_units = 193U;
    msg.speed = 0.756855881223254;
    msg.speed_units = 96U;
    msg.duration = 19277U;
    msg.radius = 0.05527613366188311;
    msg.flags = 207U;
    msg.custom.assign("AXYCCPMGJGMRREMVGCNQFZVJLPOEBYOYNWEBDCTXSKCPOOJW");

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
    msg.setTimeStamp(0.7681045539878444);
    msg.setSource(12659U);
    msg.setSourceEntity(140U);
    msg.setDestination(50515U);
    msg.setDestinationEntity(45U);
    msg.timeout = 32934U;
    msg.lat = 0.03562591978384122;
    msg.lon = 0.5098033858560428;
    msg.z = 0.23915014678101698;
    msg.z_units = 22U;
    msg.speed = 0.042017878469358894;
    msg.speed_units = 96U;
    msg.duration = 13180U;
    msg.radius = 0.24237527050946972;
    msg.flags = 142U;
    msg.custom.assign("VANWBEODHFIDEPSTPFHIYRDMITKSZHTXQQECZJOWZAGOGVNUHNMBTEMEOUNRACNCSWXCSWJFGVBXKYPJVZRFDSCFQVJABMJPYWEYQBBTJIPNYWHQJRZSKWMDLGTILAUGURKQHKHXMQIMVXRZPFNTWPDZWQDIFGRVNGARPZPDVLETIRKRIWVNCNBEJKDLGFKKODSMLOZFSKS");

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
    msg.setTimeStamp(0.23134706668407867);
    msg.setSource(8980U);
    msg.setSourceEntity(167U);
    msg.setDestination(65068U);
    msg.setDestinationEntity(76U);
    msg.timeout = 14443U;
    msg.lat = 0.9600794450911686;
    msg.lon = 0.2064454385616914;
    msg.z = 0.7751897716355629;
    msg.z_units = 220U;
    msg.speed = 0.7609614346984547;
    msg.speed_units = 30U;
    msg.duration = 44871U;
    msg.radius = 0.848676992032378;
    msg.flags = 108U;
    msg.custom.assign("PEMBNBGWAMABKCJPEHYPSGBLVEXJJEKZWCMQYQWIUQFJMMCDOSIRLHFAVJYUDKDSZKAAQCTLSGNNSVUZYZPONUYCWDLRQVTBLHISTUTPKATWMQDOXHCFEIRJMRBXWUKXUCFCGNXLPEFXRNRNOHMDYIEDIMZYCNLBOVOJHFHTOHGDIJWRXSFA");

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
    msg.setTimeStamp(0.5023603040919288);
    msg.setSource(28297U);
    msg.setSourceEntity(105U);
    msg.setDestination(65473U);
    msg.setDestinationEntity(236U);
    msg.custom.assign("ZEZVLOCMNSQBAHIJIZQGGRIXDKKBXLRACDITZDOOJOAMFITRSXYJSAEENQGEPIGOEKWGJEXSIDPPYMOILVHZYTWCTPCNFFZLYXAHWKUITDXAUBRCKEYEDVFUGAMFQUYHKUDXXVJNHNUWLRNQBFPICKAGMPPLSWTVMQBUSHLZRERJFJTBHSFBLZGBSQOYYQKYLRE");

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
    msg.setTimeStamp(0.7081169963751479);
    msg.setSource(61388U);
    msg.setSourceEntity(160U);
    msg.setDestination(64083U);
    msg.setDestinationEntity(96U);
    msg.custom.assign("KGGJQCIFHBURYYLNRMKTBLCNPNLGIQGNODQVZSYYVKZSQQRUHRLWJWIBJCFDSZCJYAXOZEVPXEQVEOAJOOMMQDIDKMJTXNQVUZAIEWXSRSYGKBUJRFSGTFXMPYESHXBTPFFIGHXOTYKQZJWANKZOHDKNLFEHAZCDNHNAYPLIHWOLAXPLTNYSVUHJZPBDAWRRJRURMWUCO");

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
    msg.setTimeStamp(0.5438744859658706);
    msg.setSource(52221U);
    msg.setSourceEntity(195U);
    msg.setDestination(44714U);
    msg.setDestinationEntity(84U);
    msg.custom.assign("JDGMWYHYNXIKIKSTUWUZCTNYOEHAWUFBVXOFDRALZIOIZUPTSVYDPHCBFEVFSRHEUZVAODPPLXSLFVZBLEZRGFGYAHSQJNBEGT");

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
    msg.setTimeStamp(0.5220517295648076);
    msg.setSource(50244U);
    msg.setSourceEntity(102U);
    msg.setDestination(54583U);
    msg.setDestinationEntity(231U);
    msg.timeout = 25513U;
    msg.lat = 0.5846073047554458;
    msg.lon = 0.48107541503319295;
    msg.z = 0.43775235791856526;
    msg.z_units = 47U;
    msg.duration = 44991U;
    msg.speed = 0.9269642318499326;
    msg.speed_units = 20U;
    msg.type = 1U;
    msg.radius = 0.7033747737003627;
    msg.length = 0.7549050012458403;
    msg.bearing = 0.5467896765195372;
    msg.direction = 12U;
    msg.custom.assign("BAXGMZUAWKDZITXVNAHTAXUWSXJOADAHEIVJZBNTUPEMWUCBTFMKSYLGUNYSKJMEBIBSSQOQFEPSMCIPFCWFDGGVRYWUXNWQYTCQXYDLLZVFCDQKFBQMNYAEXIUZFRVAOCKQWZHSRGLJZIOTSEAYLKPZGYXUZEEWKODIPOYPCNNDYWGFXBTHTRFHDOQLRVILER");

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
    msg.setTimeStamp(0.8986750880953294);
    msg.setSource(10084U);
    msg.setSourceEntity(18U);
    msg.setDestination(57410U);
    msg.setDestinationEntity(72U);
    msg.timeout = 47047U;
    msg.lat = 0.22790172410459775;
    msg.lon = 0.33972824722111394;
    msg.z = 0.053880525612673535;
    msg.z_units = 127U;
    msg.duration = 19364U;
    msg.speed = 0.9913891709367197;
    msg.speed_units = 131U;
    msg.type = 110U;
    msg.radius = 0.1928787960464099;
    msg.length = 0.7840064678315234;
    msg.bearing = 0.9103267680829764;
    msg.direction = 198U;
    msg.custom.assign("EMCZYTVSKRODLEPQWHMEPCWSWLYOULVWKVIOESQWZKLFUNDRTDYFCBFABFTXRNOSDGUOUOECBPOBYVHKRNQHADNFYLPISJXONEXVSURDHCTJIIUJOATJPGIERGKRUAGKG");

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
    msg.setTimeStamp(0.44279832357257765);
    msg.setSource(25632U);
    msg.setSourceEntity(137U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(39U);
    msg.timeout = 21117U;
    msg.lat = 0.48794951274629017;
    msg.lon = 0.9301654272298658;
    msg.z = 0.4574131841109539;
    msg.z_units = 215U;
    msg.duration = 5859U;
    msg.speed = 0.5513944359213582;
    msg.speed_units = 197U;
    msg.type = 50U;
    msg.radius = 0.7194619403417832;
    msg.length = 0.3362768168062852;
    msg.bearing = 0.7824421585746499;
    msg.direction = 237U;
    msg.custom.assign("PHZUNRQRDAEXDIMQKIHBMTUEOKQFXNIGUJEAEEXTDWHIMYSBHIXIQHYUNJECSLNTHOAWGCHFOBCLPHVMWVGOJLDHJPMQNUPSYEKHAMKDGKBLEXB");

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
    msg.setTimeStamp(0.6435532568480175);
    msg.setSource(18090U);
    msg.setSourceEntity(143U);
    msg.setDestination(19709U);
    msg.setDestinationEntity(153U);
    msg.duration = 26767U;
    msg.custom.assign("EXMPJKTPVRTKGQSEVYICVXRTQOHFDAQIHEXCDOMBPHLPO");

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
    msg.setTimeStamp(0.3232524922783795);
    msg.setSource(42233U);
    msg.setSourceEntity(62U);
    msg.setDestination(31790U);
    msg.setDestinationEntity(223U);
    msg.duration = 12164U;
    msg.custom.assign("DNPCBKNLVMCXUBRFMBONAZHEZGZBBAIUPRITGXMLLIOFHVXXAADJYGKYHWQWQMQLWLUTMWUHXDPPUTWZBCNLEJPLZQJYXSTITEJAFTMMPSBQAAFGCLZUKYHKGXNEWHVUXVDGRFDHPXTNJ");

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
    msg.setTimeStamp(0.050318145351339605);
    msg.setSource(60395U);
    msg.setSourceEntity(70U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(105U);
    msg.duration = 4790U;
    msg.custom.assign("HDGNUHIFSEQILLPRCCGYWWGKATQRPDWPYVLTUVEPGZCWINIXYPIPUTRVEDAMFIUFOMKNIVCDKJVXXWMECRAALBOEZHAT");

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
    msg.setTimeStamp(0.6578493930298268);
    msg.setSource(21486U);
    msg.setSourceEntity(110U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(170U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.17470710382075294;
    tmp_msg_0.speed_units = 251U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11924U;
    msg.custom.assign("XNBFRXBNPRSOBOVJDKKZMUIIEQWJZZXGTRYSHNZVVFZMWLTMNKYOMLMUMFYBARACFIDHPPYIDOEKOISPJPMRHFTLGJGFZGRNMVXYCEICKTHAVTOESWJUHDIOHPWWOJSZCLMBQESXJJHOZINWAYAKCCCWPCSMAVTDDDELFQGPCIEULWCGQNVETHUQLZHNHEXAILTQXZUNSBRKFTUF");

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
    msg.setTimeStamp(0.734553243647682);
    msg.setSource(37807U);
    msg.setSourceEntity(247U);
    msg.setDestination(5948U);
    msg.setDestinationEntity(79U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.9625537149886582;
    tmp_msg_0.start_lon = 0.7287845965226807;
    tmp_msg_0.start_z = 0.29749742644972343;
    tmp_msg_0.start_z_units = 221U;
    tmp_msg_0.end_lat = 0.6019642177030975;
    tmp_msg_0.end_lon = 0.6528924523095071;
    tmp_msg_0.end_z = 0.5666178040486919;
    tmp_msg_0.end_z_units = 77U;
    tmp_msg_0.speed = 0.8990001090074768;
    tmp_msg_0.speed_units = 211U;
    tmp_msg_0.lradius = 0.6550755852369385;
    tmp_msg_0.flags = 201U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38426U;
    msg.custom.assign("INGDTQOWXRWIUUUKEGUNFNHGAQQRKLPOVZOXQTQHMGCQPWXNXAZGLSWRNMFJHECIABMJDAGYCZCSSGBUTCKTIXXWBERPFAMUEIDRPLIDFKHHZWXSOLJMCJFZKHBETGLRIYHMBHFEELJYKSXBBPCYIPWVYSAVMKFWXCDKXATTJREWODJMBSNR");

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
    msg.setTimeStamp(0.5338517986621628);
    msg.setSource(56024U);
    msg.setSourceEntity(120U);
    msg.setDestination(55065U);
    msg.setDestinationEntity(16U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.08530991409121647;
    msg.control.set(tmp_msg_0);
    msg.duration = 50393U;
    msg.custom.assign("CASBMIDFSIHHRFGTCVFJUDKRRPPXPABIPJWZNCEEAHVVKVZFSXCXZQKMJOFBJGIAOTOJYZMRMNHEYWRNRQYFQWTMDDZKBGAZWLIOFKMSHDJGYNGRVHQCDCNNLYOQIXTYSBOJLHEGCFQMVTXWRQACRXEXBHDTHQDKUVLCYZXFLOWAUOPIDNGMX");

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
    msg.setTimeStamp(0.27653380663626637);
    msg.setSource(54429U);
    msg.setSourceEntity(206U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(158U);
    msg.timeout = 24249U;
    msg.lat = 0.4720227317286424;
    msg.lon = 0.3797197981782593;
    msg.z = 0.9946174672710665;
    msg.z_units = 140U;
    msg.speed = 0.8160470677028395;
    msg.speed_units = 224U;
    msg.bearing = 0.6408419660997687;
    msg.cross_angle = 0.309231518195325;
    msg.width = 0.2661403730306232;
    msg.length = 0.06567267760381379;
    msg.hstep = 0.9726634535368884;
    msg.coff = 248U;
    msg.alternation = 19U;
    msg.flags = 21U;
    msg.custom.assign("OIEXQOSVGDVCXZBYCJPGOKBEBVWDREIMQWQJBHYFUZZBIOPKCVCWBIKIAFVSJRRAHKIZLWMMVUATKGSMOEPIUSTFPSEAGIMWVNEJZEWUZWQAJDUJU");

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
    msg.setTimeStamp(0.3161718517175891);
    msg.setSource(61717U);
    msg.setSourceEntity(29U);
    msg.setDestination(26363U);
    msg.setDestinationEntity(128U);
    msg.timeout = 34202U;
    msg.lat = 0.4596482612032208;
    msg.lon = 0.20197843737992682;
    msg.z = 0.3500719595311911;
    msg.z_units = 240U;
    msg.speed = 0.2904829079195027;
    msg.speed_units = 92U;
    msg.bearing = 0.41439301189835487;
    msg.cross_angle = 0.12624417914997377;
    msg.width = 0.8567548416737846;
    msg.length = 0.11714950127340218;
    msg.hstep = 0.5142685092781301;
    msg.coff = 140U;
    msg.alternation = 19U;
    msg.flags = 109U;
    msg.custom.assign("JFITLWTTKTLJUGWTZANEXMXCKWSQCLGLDKQAVYTVADMNPBNYBQODEHFGBCOXPREPUGVQWCFQNSUJLLYYCECSTPQWOSUIYKDGEBJXBNFPLJJAPSDRONQZOHQSLFFDEZRUOEPYIJCPNLADIBHMOSDJMYIIXGHXYVXWVMGUBJOPKZULAGEFCCMKIOFZTWH");

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
    msg.setTimeStamp(0.8122611395267375);
    msg.setSource(778U);
    msg.setSourceEntity(230U);
    msg.setDestination(29451U);
    msg.setDestinationEntity(26U);
    msg.timeout = 27855U;
    msg.lat = 0.4652300410261613;
    msg.lon = 0.02738586416858113;
    msg.z = 0.7762571689770721;
    msg.z_units = 211U;
    msg.speed = 0.6609934556368023;
    msg.speed_units = 126U;
    msg.bearing = 0.6078429817590861;
    msg.cross_angle = 0.2864252748153481;
    msg.width = 0.8178648667614069;
    msg.length = 0.6828140504029979;
    msg.hstep = 0.14050987875535348;
    msg.coff = 191U;
    msg.alternation = 105U;
    msg.flags = 244U;
    msg.custom.assign("UECKCIIJHPIDMPZHMTLZZKFTEPNOXVGFMWASSZZJXBDAQCIZPNZXWSRCGYMVJIPTRYKNYWOTQKHVDIDCTLOOSODXIGTKWKBHBNXVRNELPCXVSWYEEZOATLRQDFUJQWMGXGLDUJLYVG");

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
    msg.setTimeStamp(0.2359555513523629);
    msg.setSource(14421U);
    msg.setSourceEntity(199U);
    msg.setDestination(54895U);
    msg.setDestinationEntity(173U);
    msg.timeout = 4389U;
    msg.lat = 0.27481971419650386;
    msg.lon = 0.6271125720425879;
    msg.z = 0.6376346022681338;
    msg.z_units = 46U;
    msg.speed = 0.606029424408082;
    msg.speed_units = 122U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6864608150278196;
    tmp_msg_0.y = 0.5476106359729178;
    tmp_msg_0.z = 0.4573199241291094;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QMSZVNFLVNIBSIEEXJLETCSDHBQGUBDZKKHZWWKNQXCDQNHYYJZCDANHVYJMMZOXGRXCSIWBJQFXRGUNKMXYPAVIKENAAFDDGJPEMKFUOVCBIEPYTIT");

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
    msg.setTimeStamp(0.8036549091766156);
    msg.setSource(52078U);
    msg.setSourceEntity(18U);
    msg.setDestination(36361U);
    msg.setDestinationEntity(245U);
    msg.timeout = 34864U;
    msg.lat = 0.3114321564729513;
    msg.lon = 0.6012378551380164;
    msg.z = 0.01968577728958454;
    msg.z_units = 64U;
    msg.speed = 0.8929289417837921;
    msg.speed_units = 158U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6914774192185689;
    tmp_msg_0.y = 0.45013553561155006;
    tmp_msg_0.z = 0.7670637249314246;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WZNZHWJXLIWBIILTVCGKYELCGQGDHJXYMZATERHUNVHMPTAHECJVESDIQMOJRYPXTHCXYLSQVBTUKHILQMZYJAGNKCGOOUTOZSOADSQXMVQSXYDUFTFLSLZOFFCQBQIJMPNZCSQPAWFXWAWBXLKEBRMOPISNYJTUBSBPWREARUXYOHOUHFKMKDZSLNPRIPBAGXNDIDFWEAGNEWRVGKJZDRUEQPDMKFKH");

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
    msg.setTimeStamp(0.3364246097326289);
    msg.setSource(49654U);
    msg.setSourceEntity(138U);
    msg.setDestination(49609U);
    msg.setDestinationEntity(170U);
    msg.timeout = 28942U;
    msg.lat = 0.6612656693289458;
    msg.lon = 0.4203952143437095;
    msg.z = 0.6349627986294166;
    msg.z_units = 160U;
    msg.speed = 0.015041940636091766;
    msg.speed_units = 107U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9119817959796582;
    tmp_msg_0.y = 0.049139531096422884;
    tmp_msg_0.z = 0.1599600390557111;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AEKFDFMFTVQRKBBJEOEAQQHAWZOSDHDMGLSSPTXGJMVAUSPQILRXUPNUYHNDZTNOFFLIMCYWJBTDWPGKWYTRTRAXNXIUJERKKITKLVUXZQXVOWMOEZIGVXPZVSVRLBPOHLAMYKQGDHNBYNHGBGLVGQWQEHCBCFMMZOGJJPBCBXUUDMHDWIZDFKEQHWTWTGCOLFCTCOYUZYZAVOYIJJKNDENAHSKPBRWUZSPACIJMYFRXRSAENSYSJ");

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
    msg.setTimeStamp(0.21218007856769006);
    msg.setSource(7323U);
    msg.setSourceEntity(2U);
    msg.setDestination(22808U);
    msg.setDestinationEntity(165U);
    msg.x = 0.14641039195429606;
    msg.y = 0.16501966594971906;
    msg.z = 0.3618566912075173;

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
    msg.setTimeStamp(0.04006507420530636);
    msg.setSource(22898U);
    msg.setSourceEntity(199U);
    msg.setDestination(10634U);
    msg.setDestinationEntity(126U);
    msg.x = 0.4056408227783532;
    msg.y = 0.24256810396048933;
    msg.z = 0.3043938475953103;

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
    msg.setTimeStamp(0.3962734311363014);
    msg.setSource(47165U);
    msg.setSourceEntity(244U);
    msg.setDestination(36926U);
    msg.setDestinationEntity(238U);
    msg.x = 0.28540243431659484;
    msg.y = 0.6279139406594099;
    msg.z = 0.19168236490577062;

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
    msg.setTimeStamp(0.851148404538732);
    msg.setSource(22062U);
    msg.setSourceEntity(53U);
    msg.setDestination(4786U);
    msg.setDestinationEntity(160U);
    msg.timeout = 21954U;
    msg.lat = 0.41030320652261865;
    msg.lon = 0.10907072137466023;
    msg.z = 0.7163616454927058;
    msg.z_units = 221U;
    msg.amplitude = 0.9234530048707735;
    msg.pitch = 0.2519015660665197;
    msg.speed = 0.10504964227874736;
    msg.speed_units = 148U;
    msg.custom.assign("RHXHHIEOPBJIYACYZPDMTDIUVVDWCVGWLGMPZECAXAGJJRLGSGVLLEWNIVPCDYLZTSHMCDLYSFTSEBSDIBGEFDYBWMHTQPHTCSSTEWRCGFUJYBVFJROYWLKI");

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
    msg.setTimeStamp(0.6642249326856694);
    msg.setSource(28470U);
    msg.setSourceEntity(104U);
    msg.setDestination(26139U);
    msg.setDestinationEntity(49U);
    msg.timeout = 13612U;
    msg.lat = 0.5694514171034862;
    msg.lon = 0.7177786014940106;
    msg.z = 0.6088141052663015;
    msg.z_units = 203U;
    msg.amplitude = 0.9905389901219476;
    msg.pitch = 0.1784677241231587;
    msg.speed = 0.6532066712526513;
    msg.speed_units = 33U;
    msg.custom.assign("XQDNHZWCOXEQBGDIHEXRIKCOXULAUABMFHUJOPZLVDVYDYQUROTUZHPWNOLIOHWNXPYYQIMJPJEEFXQGMDFWVWRERLWVTPQJVNUVMCUYKJSSESIZMKS");

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
    msg.setTimeStamp(0.4414286056843568);
    msg.setSource(3647U);
    msg.setSourceEntity(20U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(196U);
    msg.timeout = 506U;
    msg.lat = 0.24870298043395678;
    msg.lon = 0.0030644186195232237;
    msg.z = 0.41749195456616484;
    msg.z_units = 177U;
    msg.amplitude = 0.2387167467712532;
    msg.pitch = 0.7807747384017958;
    msg.speed = 0.35600833488934547;
    msg.speed_units = 171U;
    msg.custom.assign("ASEQYCLFFGYKBBYGLKUYOXDSTLVXCSVORLMHMXNJBNNZXAZGVHWMUCYJJZQCCZMHSRMVWXTLJJTDKWKNICXUHRBOPUEDWETEEFJNUIPSIVOCLIDGMRGYXXTMICBTRSDYTKZPUOHTEJCHQVEQZYQWUWDPPIWFGVUTKHDAEQGNFOCBWIQRJFKNXFMABHGIABHNWPWIRFDD");

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
    msg.setTimeStamp(0.4836877440261542);
    msg.setSource(27675U);
    msg.setSourceEntity(249U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.7175703795249787);
    msg.setSource(21358U);
    msg.setSourceEntity(106U);
    msg.setDestination(35832U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.3103243583833438);
    msg.setSource(55882U);
    msg.setSourceEntity(211U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.5594959934498273);
    msg.setSource(45062U);
    msg.setSourceEntity(27U);
    msg.setDestination(55485U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.2183927408382833;
    msg.lon = 0.5691367215954835;
    msg.z = 0.34637730530143407;
    msg.z_units = 74U;
    msg.radius = 0.5370031305798791;
    msg.duration = 27969U;
    msg.speed = 0.20802500972219007;
    msg.speed_units = 131U;
    msg.custom.assign("DTSGAOGBJFFPACNMOCMCQWPDLUUXBONKKTRFMWTASJCIRKFDOKLHYTZUGPWSEFIKIUKSVYLQEIAZLSRX");

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
    msg.setTimeStamp(0.7153987338894543);
    msg.setSource(37729U);
    msg.setSourceEntity(252U);
    msg.setDestination(18928U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.033722802618687986;
    msg.lon = 0.04973513724993839;
    msg.z = 0.5700620228964374;
    msg.z_units = 216U;
    msg.radius = 0.7269109792091678;
    msg.duration = 19630U;
    msg.speed = 0.2927335127127021;
    msg.speed_units = 96U;
    msg.custom.assign("VMODKSBWGIWLFXQFTFESAUSCAICKVTMYIHSIVANEMLCPIQSOLXJXLWSMHCPJUNYLZWLGDZGDBZKHZPNDFOVPQZZSOPKBYLARCWUQKUQAFHTOXICEMSJXGNHGJTTODWJPNTRVFOQYWOQZXESZ");

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
    msg.setTimeStamp(0.03197386074131492);
    msg.setSource(27194U);
    msg.setSourceEntity(132U);
    msg.setDestination(23736U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.6094757119680092;
    msg.lon = 0.11946736839720562;
    msg.z = 0.9507427324862285;
    msg.z_units = 233U;
    msg.radius = 0.3384602783440347;
    msg.duration = 32140U;
    msg.speed = 0.5950129176504827;
    msg.speed_units = 17U;
    msg.custom.assign("FKRHUQZCKOMUJYQRJBBSEWZQETLQEZRBZLKDKHFXGVVVCBFSZVSGPRLTJAIJMPEYEXRN");

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
    msg.setTimeStamp(0.30442669974597847);
    msg.setSource(61219U);
    msg.setSourceEntity(174U);
    msg.setDestination(38538U);
    msg.setDestinationEntity(230U);
    msg.timeout = 26045U;
    msg.flags = 226U;
    msg.lat = 0.23540243337803024;
    msg.lon = 0.39794063466719554;
    msg.start_z = 0.8730404569018414;
    msg.start_z_units = 20U;
    msg.end_z = 0.856013331710329;
    msg.end_z_units = 204U;
    msg.radius = 0.6655045539286546;
    msg.speed = 0.9309572241523596;
    msg.speed_units = 160U;
    msg.custom.assign("XYAYSXAXUBOCBQXEVZKWSXMNRFROEOZJJANFFNLDTMPGLWST");

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
    msg.setTimeStamp(0.949951479975275);
    msg.setSource(15331U);
    msg.setSourceEntity(21U);
    msg.setDestination(32187U);
    msg.setDestinationEntity(167U);
    msg.timeout = 30585U;
    msg.flags = 185U;
    msg.lat = 0.731350245584831;
    msg.lon = 0.9458307832716433;
    msg.start_z = 0.28678141857423656;
    msg.start_z_units = 87U;
    msg.end_z = 0.8416613624665003;
    msg.end_z_units = 36U;
    msg.radius = 0.41774204607910936;
    msg.speed = 0.6278183464375716;
    msg.speed_units = 137U;
    msg.custom.assign("OIOETZKDNHUAHZSHRWDDFFIYOWZSHMMGDJHGVARFBNNJGKKQEDAJBOZUSBXPNOXJJGWFGVCAHRQQZTENCKESPRUTPTLZOKDYZCWLPXLUGFUOSEXFCSVUVMNJMDTDGAXMBZLEPYTSKBGCJAKPQARIPQU");

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
    msg.setTimeStamp(0.2783470377693653);
    msg.setSource(31417U);
    msg.setSourceEntity(184U);
    msg.setDestination(52059U);
    msg.setDestinationEntity(135U);
    msg.timeout = 43612U;
    msg.flags = 108U;
    msg.lat = 0.055554478334946866;
    msg.lon = 0.9476154026833993;
    msg.start_z = 0.32083899199271737;
    msg.start_z_units = 213U;
    msg.end_z = 0.5912328829794594;
    msg.end_z_units = 50U;
    msg.radius = 0.6208502446681516;
    msg.speed = 0.026172691275445747;
    msg.speed_units = 108U;
    msg.custom.assign("SDLTZKFCEAVMUTVRYXZYIQCBRMUNSBCCAYYFWVIABJQKFDFVISGI");

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
    msg.setTimeStamp(0.8508716585471696);
    msg.setSource(4348U);
    msg.setSourceEntity(34U);
    msg.setDestination(10950U);
    msg.setDestinationEntity(118U);
    msg.timeout = 24675U;
    msg.lat = 0.9124818764626935;
    msg.lon = 0.7079420553873939;
    msg.z = 0.6354915462718499;
    msg.z_units = 190U;
    msg.speed = 0.3686581787109162;
    msg.speed_units = 144U;
    msg.custom.assign("CSFJYITMNGXHFKTEQWHABZOFQJOALITEWNTDZVPNDARQEGKAJBKKZEQXPVMUPDMUVSCLXLFCBAOLYBOWRJSVHAGXKFQHBZGUIGRSPJCFRSDQWVWZDZRVWIHWXIKIWLTPDUGAXEYPYOJNWVVRJFZACHGZJWQORTBUCCMBUOTSKSVSQTEHHPYUYZXMCEKLEJJLSXMBMXTNFYQDGOOBDYFUMBILNIHYEPXZVNASHLKK");

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
    msg.setTimeStamp(0.6776573522767804);
    msg.setSource(28475U);
    msg.setSourceEntity(180U);
    msg.setDestination(10699U);
    msg.setDestinationEntity(38U);
    msg.timeout = 64083U;
    msg.lat = 0.7763026606071858;
    msg.lon = 0.6814485368342715;
    msg.z = 0.3861292930322925;
    msg.z_units = 103U;
    msg.speed = 0.7087384911762684;
    msg.speed_units = 134U;
    msg.custom.assign("QCHTUGZMPXSLGCJPJGOKYTINADYQBCXRYZTYRCWWDVMWTNIICIDYU");

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
    msg.setTimeStamp(0.22405502855973847);
    msg.setSource(14529U);
    msg.setSourceEntity(148U);
    msg.setDestination(52382U);
    msg.setDestinationEntity(41U);
    msg.timeout = 28186U;
    msg.lat = 0.6124476992246651;
    msg.lon = 0.47233741396184514;
    msg.z = 0.6875810738463543;
    msg.z_units = 114U;
    msg.speed = 0.19489689772814944;
    msg.speed_units = 159U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8442745835625934;
    tmp_msg_0.y = 0.2657649846354263;
    tmp_msg_0.z = 0.7846774484781897;
    tmp_msg_0.t = 0.11049573195412743;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GDNSCOEMVRMYYCKSTCHWFFTMDLEXNGKUHKVBYHFEQRDMBNZFRDXKUZPWDJXMLIUOFQXZWEYOJIAFXMCMRCDZAQIHHNDNEVBNLLRMASWGAWVFVPNVRUDTXQZLPBHVSCGZYSHTGRLKFOQSCUUEGJJQYPTPHLCSBPCOXGKBLBJRNLXQGR");

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
    msg.setTimeStamp(0.3249496977528411);
    msg.setSource(61949U);
    msg.setSourceEntity(57U);
    msg.setDestination(42033U);
    msg.setDestinationEntity(206U);
    msg.x = 0.009114542250652558;
    msg.y = 0.9464698765973509;
    msg.z = 0.36378325990547744;
    msg.t = 0.5735975717036287;

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
    msg.setTimeStamp(0.22617420736881833);
    msg.setSource(60238U);
    msg.setSourceEntity(247U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(40U);
    msg.x = 0.7581476844571317;
    msg.y = 0.43053496327956;
    msg.z = 0.43219684088923194;
    msg.t = 0.07681993380965346;

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
    msg.setTimeStamp(0.5838398668289562);
    msg.setSource(11839U);
    msg.setSourceEntity(68U);
    msg.setDestination(55928U);
    msg.setDestinationEntity(188U);
    msg.x = 0.19987557124171518;
    msg.y = 0.8333788624023792;
    msg.z = 0.9907970367011882;
    msg.t = 0.058636820845116455;

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
    msg.setTimeStamp(0.8868493435552011);
    msg.setSource(2150U);
    msg.setSourceEntity(80U);
    msg.setDestination(33287U);
    msg.setDestinationEntity(106U);
    msg.timeout = 38261U;
    msg.name.assign("TKDSPEQEKFQCNEUKAIPCZOQGBCBHFMQSXVQHBOYZMELYTSBKWXZOZPVGOWXIUIWUYUULPURRVCCOGYWOGTYKHWLMEHHCSMUXMGQXCTWZZAYMSJWNLNHHGRIQAGLEVAFPAIVNTDLSTVGRSPUQZMRXPLKT");
    msg.custom.assign("IVGDERJSGLNKZNEVUXKQQDMHGFRPZRYBOMNSASYGOXVYOOLCAIDBWHKLTXXDEUZWYASIGMNAALBPVUTDTZWKHEYSXQNBJPTCCTJCQPBTCNEMPHNFPREUOMQYZSXFDRQITSBIWDUJOYIGYBK");

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
    msg.setTimeStamp(0.09754815644519854);
    msg.setSource(18127U);
    msg.setSourceEntity(134U);
    msg.setDestination(41682U);
    msg.setDestinationEntity(179U);
    msg.timeout = 59272U;
    msg.name.assign("ERJAGBRIZPLNSJEUKCCMTKVVUGTPLLKGZEOUWNJUMDXRFFOHOHJMMXJLDRTPIYQSSMAVRMNLCAUWPAFVBQYHIDOFBCCTISRFXSMLFDQBFKTNOYLUZEMVXAHQBCHXMVLSWZZXTKVUDSUPDFXIIKGQJTCYBWPZOAGYQVWILGBGYWRQKWBOTKSRKIQOLCOSTTWRQEICOWBBYGUXQNAJPFEJEIYVYDZWE");
    msg.custom.assign("KNVCCEZJRQPMIJLUMAMMBVSYNWNQFPFPIJOZMUCIELIEWFYFUZBZORNJILRVXYHCRHOWTXPKQXKXSNPBVYSQARGDJNLPOBSXWIUKCTHIADWEGVPRXAVASLQUMBRGKDQTPBTLRPGUBZMMZBGWUTGHLJETOJWDDRKIECHHXHTHCVXYZTDOVBSMALFCNBOGYOTSEVQCKXKYUIFSYWUNYFPNJGDYADLDSQRGEKOAGLQZTIJEKHZMHNQFFAWZEOXD");

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
    msg.setTimeStamp(0.25861992231080777);
    msg.setSource(50162U);
    msg.setSourceEntity(135U);
    msg.setDestination(14518U);
    msg.setDestinationEntity(185U);
    msg.timeout = 5138U;
    msg.name.assign("DFCOUZQJPMZLUPKJHLXIMBSTCBUJFGZMRSKBVTHFTUISDWHPPLAJNZJAEIXRDPARLWAQIWAMNUWEOEMONIVPVXOESTAORBEOYJGFKTGPWYMVXLENYCGYXMTTLSDTERVZTCNAOVOLUWHI");
    msg.custom.assign("PWAHSEUSSZJMALIUKKCRYGRNDBL");

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
    msg.setTimeStamp(0.3200409742135033);
    msg.setSource(2952U);
    msg.setSourceEntity(15U);
    msg.setDestination(19064U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.46895075567833944;
    msg.lon = 0.5937108559902906;
    msg.z = 0.46714874590352684;
    msg.z_units = 158U;
    msg.speed = 0.8488789148560839;
    msg.speed_units = 235U;
    msg.start_time = 0.08353969063153854;
    msg.custom.assign("IUCPZWQKYUGEJPHJTLSZXXCHKOBWWYCHSMDDSAXIFGXTWHVLFFVJTRVIOBMUAZDMLZOAANUKOBWIUULLNGZOYWRPOLPLSRYEDHFWCMQYPXTPFVWVDZKEUFSICMBKXRAKNXQKDGXPZNVSFBRNFEDAVHXJKBPYQTDBNTESMJYTBMEODQUNPSHMIOEHARCIYTQQBELJSTUYMAHCAIHRQZFJDRUGQGJNJJYLEVXN");

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
    msg.setTimeStamp(0.6045908496062026);
    msg.setSource(20643U);
    msg.setSourceEntity(235U);
    msg.setDestination(12265U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.13310800946525025;
    msg.lon = 0.35441868875083726;
    msg.z = 0.006846903198494236;
    msg.z_units = 220U;
    msg.speed = 0.7946477510732525;
    msg.speed_units = 44U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8753662004888425;
    tmp_msg_0.y = 0.06147214896452913;
    tmp_msg_0.z = 0.9372738443697534;
    tmp_msg_0.t = 0.14663044186670138;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 4063U;
    tmp_msg_1.off_x = 0.11824554452991676;
    tmp_msg_1.off_y = 0.43207758820045694;
    tmp_msg_1.off_z = 0.14567719729507078;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6559255117938784;
    msg.custom.assign("NFHSWTXBKQMZSWKXRBXAECPQJDWQNUENYDBVDBKXFVYTNVICMUQGUALWHNSLWAMLZXMHTGLYDQZFJKHGREHEBKGXMCOFLKDPGITPPMBSBTLKOFVULDRSRVPHSECWKTQEAQIYFNJWYMFCC");

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
    msg.setTimeStamp(0.4792418727702611);
    msg.setSource(5612U);
    msg.setSourceEntity(204U);
    msg.setDestination(17475U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.07348838790364687;
    msg.lon = 0.6586413315802703;
    msg.z = 0.4333178377500495;
    msg.z_units = 223U;
    msg.speed = 0.4376310294920952;
    msg.speed_units = 239U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6368947405798281;
    tmp_msg_0.y = 0.6598621195912773;
    tmp_msg_0.z = 0.28170532494359335;
    tmp_msg_0.t = 0.9112628527890959;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.934533344892266;
    msg.custom.assign("JHNUQXPLHIRTNTPUCVZUORMYTICDVWAQNIHPFNDJXFRSPFXQINCADYTFKHAMFRFGHPYIUHWBQZGUGE");

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
    msg.setTimeStamp(0.26973275023204835);
    msg.setSource(26712U);
    msg.setSourceEntity(86U);
    msg.setDestination(28967U);
    msg.setDestinationEntity(244U);
    msg.vid = 3678U;
    msg.off_x = 0.6504993378214221;
    msg.off_y = 0.7349315385241565;
    msg.off_z = 0.13544333195688218;

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
    msg.setTimeStamp(0.559244720936302);
    msg.setSource(34627U);
    msg.setSourceEntity(252U);
    msg.setDestination(12203U);
    msg.setDestinationEntity(247U);
    msg.vid = 16144U;
    msg.off_x = 0.9273977217001869;
    msg.off_y = 0.639435003111094;
    msg.off_z = 0.3896438590716249;

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
    msg.setTimeStamp(0.3568630933101784);
    msg.setSource(11888U);
    msg.setSourceEntity(152U);
    msg.setDestination(32010U);
    msg.setDestinationEntity(232U);
    msg.vid = 47448U;
    msg.off_x = 0.408530910502902;
    msg.off_y = 0.9940465015382107;
    msg.off_z = 0.7678321702106841;

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
    msg.setTimeStamp(0.4774820057924116);
    msg.setSource(17953U);
    msg.setSourceEntity(172U);
    msg.setDestination(24117U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.00246624480042823);
    msg.setSource(5009U);
    msg.setSourceEntity(58U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.8338150284706559);
    msg.setSource(12232U);
    msg.setSourceEntity(43U);
    msg.setDestination(63080U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.18677157690177115);
    msg.setSource(5154U);
    msg.setSourceEntity(109U);
    msg.setDestination(22012U);
    msg.setDestinationEntity(94U);
    msg.mid = 3357U;

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
    msg.setTimeStamp(0.42842110551446666);
    msg.setSource(49506U);
    msg.setSourceEntity(44U);
    msg.setDestination(42135U);
    msg.setDestinationEntity(228U);
    msg.mid = 25868U;

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
    msg.setTimeStamp(0.36272499549504666);
    msg.setSource(49366U);
    msg.setSourceEntity(195U);
    msg.setDestination(11228U);
    msg.setDestinationEntity(87U);
    msg.mid = 40705U;

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
    msg.setTimeStamp(0.8912273559544674);
    msg.setSource(52705U);
    msg.setSourceEntity(179U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(102U);
    msg.state = 17U;
    msg.eta = 33624U;
    msg.info.assign("DSJVTSZJPNHWZIDJRMSJELIRGXWCWCFAJUKYKSFOAQSKRVZNEFYXAPYDYGJEAIZUCPZFXMCNKTYAPNQURYCILFEMOWRPLCJZREDZPFUBEYUNSFQIDOMEHNDYWZBNOTCBRMYLLJLHATDETKGMUVJEKMVXCUGIPDTILPUAHBWAWSOWBQQHTKWKMJXFNQSLNTFUCVAOMZBHHVQBLKTHOBGVVRQSWIH");

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
    msg.setTimeStamp(0.3894788368816414);
    msg.setSource(63801U);
    msg.setSourceEntity(59U);
    msg.setDestination(26155U);
    msg.setDestinationEntity(39U);
    msg.state = 47U;
    msg.eta = 29006U;
    msg.info.assign("BLYGGOEMXLBCMYQEBQJGIXUSBUEXMJMLDTJKVVORTJPNBIKCQJIUETCUKT");

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
    msg.setTimeStamp(0.8387379277563449);
    msg.setSource(45087U);
    msg.setSourceEntity(70U);
    msg.setDestination(48313U);
    msg.setDestinationEntity(28U);
    msg.state = 246U;
    msg.eta = 15023U;
    msg.info.assign("GODIJMNYXOXXXKZTNYIFBCXUPSFOWAWATTNJMCJGWFSTBWEHRGJEZEMQDSRUAYQMYBZFLGWUYJEVUFQPPIRDUHPJLAPJKCNVJLXVLARMSNLCRCUWFEVDPZSIBVQAFFEDEDHGGQHPIXTFYKMQIOMBKHLDFRETIZKHYMNLVSQBHTNKILNGJRZBPUBEXCSCBLDEAQICONZPVZYONWOWWWZKAGSAVLYKAPJODIZUKCUTKOTYMVBRRDGQ");

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
    msg.setTimeStamp(0.7255561479856684);
    msg.setSource(21647U);
    msg.setSourceEntity(249U);
    msg.setDestination(2767U);
    msg.setDestinationEntity(232U);
    msg.system = 34540U;
    msg.duration = 36095U;
    msg.speed = 0.9633999296825303;
    msg.speed_units = 189U;
    msg.x = 0.7555980974660766;
    msg.y = 0.33526215379056556;
    msg.z = 0.13246584007964524;
    msg.z_units = 140U;

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
    msg.setTimeStamp(0.09651631475340006);
    msg.setSource(7624U);
    msg.setSourceEntity(192U);
    msg.setDestination(22050U);
    msg.setDestinationEntity(161U);
    msg.system = 38443U;
    msg.duration = 18292U;
    msg.speed = 0.8338460069177076;
    msg.speed_units = 139U;
    msg.x = 0.38644351438554747;
    msg.y = 0.5489480302746569;
    msg.z = 0.07692529909301538;
    msg.z_units = 183U;

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
    msg.setTimeStamp(0.5404297417276448);
    msg.setSource(40391U);
    msg.setSourceEntity(37U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(12U);
    msg.system = 55904U;
    msg.duration = 52818U;
    msg.speed = 0.7035595342537074;
    msg.speed_units = 177U;
    msg.x = 0.1101714169115392;
    msg.y = 0.18494162179114015;
    msg.z = 0.6120883566878924;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.3864624504286175);
    msg.setSource(46530U);
    msg.setSourceEntity(28U);
    msg.setDestination(12790U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.8654458970920524;
    msg.lon = 0.6596396982883974;
    msg.speed = 0.6201517527613158;
    msg.speed_units = 143U;
    msg.duration = 31093U;
    msg.sys_a = 28726U;
    msg.sys_b = 41738U;
    msg.move_threshold = 0.48083528631254613;

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
    msg.setTimeStamp(0.33605364715731645);
    msg.setSource(3238U);
    msg.setSourceEntity(188U);
    msg.setDestination(10337U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.5826999022155884;
    msg.lon = 0.981172007313652;
    msg.speed = 0.5447338735292575;
    msg.speed_units = 242U;
    msg.duration = 19856U;
    msg.sys_a = 11889U;
    msg.sys_b = 4059U;
    msg.move_threshold = 0.14403869629542465;

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
    msg.setTimeStamp(0.13526068513726952);
    msg.setSource(28995U);
    msg.setSourceEntity(232U);
    msg.setDestination(50016U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.8389319971618342;
    msg.lon = 0.9622939108765038;
    msg.speed = 0.4498151050592053;
    msg.speed_units = 252U;
    msg.duration = 9873U;
    msg.sys_a = 54971U;
    msg.sys_b = 49711U;
    msg.move_threshold = 0.7385914506516169;

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
    msg.setTimeStamp(0.0825788576961014);
    msg.setSource(54667U);
    msg.setSourceEntity(78U);
    msg.setDestination(59402U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.5519893413867851;
    msg.lon = 0.41825745372643075;
    msg.z = 0.5951325976523492;
    msg.z_units = 73U;
    msg.speed = 0.8001679792439332;
    msg.speed_units = 175U;
    msg.custom.assign("WUTOAVJCYNOUPYGXGTBYDMWIJOSNNLBFNPKLZXJRXSCIGKEBFVQAFXJNICWQRALTWVLMVHPUXJZVDWFMQFIBKHAOCHYRUJZAQYCGDWPFXQSRWPMYZBOSQTRKKHUZFNSPFJTEJRDLIZNKAXTOUIZTWZTGQCNKUCHDAOAYDMFMENFWMER");

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
    msg.setTimeStamp(0.22922143053067923);
    msg.setSource(5190U);
    msg.setSourceEntity(48U);
    msg.setDestination(26579U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.016591436748229715;
    msg.lon = 0.8895691174395637;
    msg.z = 0.22846760308740544;
    msg.z_units = 194U;
    msg.speed = 0.6069066471438491;
    msg.speed_units = 44U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5047492170252554;
    tmp_msg_0.lon = 0.8857214402398018;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CLICVYKWNAIARAVQNEQTXVMWIXFCGUSQGPMRWRDDCINWRFFPJFTKNZHBUZJMNNPAUGTGVUWEBEJMRYMVLRUTLACKXUQLDPZMBAKOHDHREYSRUYIWJOHISSFOOJWHSHLWTZEQEOADJLTQVMZZMCMPQKBQUHFXNCKVYDGLVICPADZSFJZGDLEUBXXGPBSGSYJKFUDGSBZBYQBCDZKIOKAPYMHOTW");

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
    msg.setTimeStamp(0.7428137588093686);
    msg.setSource(16753U);
    msg.setSourceEntity(248U);
    msg.setDestination(57974U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.18686425066307322;
    msg.lon = 0.6501272664807939;
    msg.z = 0.3531824968857662;
    msg.z_units = 60U;
    msg.speed = 0.22482826517054744;
    msg.speed_units = 26U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.46146620901146584;
    tmp_msg_0.lon = 0.47805389498089856;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ERYAGDFPJFRVGYDDFASCAQBBZLLVZFPUQUCIOTUWLBL");

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
    msg.setTimeStamp(0.6253949524904443);
    msg.setSource(10899U);
    msg.setSourceEntity(144U);
    msg.setDestination(21298U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.6504366102389427;
    msg.lon = 0.3641397221621857;

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
    msg.setTimeStamp(0.39138464427877484);
    msg.setSource(42135U);
    msg.setSourceEntity(151U);
    msg.setDestination(4433U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.18151358710914478;
    msg.lon = 0.08193313507348554;

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
    msg.setTimeStamp(0.21907870692266185);
    msg.setSource(56873U);
    msg.setSourceEntity(21U);
    msg.setDestination(57491U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.4767208915418707;
    msg.lon = 0.4697102733088131;

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
    msg.setTimeStamp(0.8548662612902769);
    msg.setSource(9586U);
    msg.setSourceEntity(246U);
    msg.setDestination(62517U);
    msg.setDestinationEntity(219U);
    msg.timeout = 17708U;
    msg.lat = 0.02285969529383791;
    msg.lon = 0.11297894557460653;
    msg.z = 0.3050603133875982;
    msg.z_units = 176U;
    msg.pitch = 0.9913300887220929;
    msg.amplitude = 0.8965355929955106;
    msg.duration = 27441U;
    msg.speed = 0.6590352033516222;
    msg.speed_units = 101U;
    msg.radius = 0.09479718645657409;
    msg.direction = 105U;
    msg.custom.assign("YNFSAWZRKDHEFJTRYPQJFTZKPEOXPIBMHPGQFXCMCVLQMDXDBVMAGWRYXFDVFWODZHEILKEMQTTIAETSGWTKEOHWXEHSFOBTNDVOJWAFOUGKNHKTKPEJTWKPBVRLYHUQXVKYRZAIZGBLHBYYYLIRDUAZKXMNCXWVLLQFNNVZJCVAPHUCHIYUGMMGQIZXFOSABGQQIXQWWNOJZZPLUNSBTRBYJCEUDLUCUVSAJSEPCG");

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
    msg.setTimeStamp(0.7985508087726709);
    msg.setSource(19243U);
    msg.setSourceEntity(6U);
    msg.setDestination(7925U);
    msg.setDestinationEntity(143U);
    msg.timeout = 32837U;
    msg.lat = 0.237670397214363;
    msg.lon = 0.424042489201809;
    msg.z = 0.28184196972888664;
    msg.z_units = 53U;
    msg.pitch = 0.1637284539703967;
    msg.amplitude = 0.5551222068609689;
    msg.duration = 64034U;
    msg.speed = 0.39041395288522607;
    msg.speed_units = 120U;
    msg.radius = 0.7355972368778667;
    msg.direction = 240U;
    msg.custom.assign("PNIHFXCLTMQIXBEACOVWECGWARPFJCZULHFITUP");

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
    msg.setTimeStamp(0.06551117032206255);
    msg.setSource(35898U);
    msg.setSourceEntity(54U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(127U);
    msg.timeout = 38120U;
    msg.lat = 0.27610221497058296;
    msg.lon = 0.6082457219766962;
    msg.z = 0.692721231090829;
    msg.z_units = 188U;
    msg.pitch = 0.15808547851862742;
    msg.amplitude = 0.6933479446422045;
    msg.duration = 58978U;
    msg.speed = 0.02084400769142658;
    msg.speed_units = 246U;
    msg.radius = 0.19514125429757223;
    msg.direction = 141U;
    msg.custom.assign("QVZFGZDIKNUVHYRTRKAFNVJXAHWRLOJXNSVELJLTWGRWDDWXTGPYLWPRXHJGUXPOAXENBJTGIUZOSISKPTAZQVXMQCKWNBTFAOKTPKXEDYYDZMARXCMNUWHCEDOQQMUFBCYVQMVYFFVHTYGOJZEOZFUIJBKVSLRMACCPPHZFDWLNGDGAYGHEBHZISJULEWUFINRDKPHSVQQMAIBZEMOQBISDJJAWCPNEEOBUBSBTCCLNHPQCGUR");

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
    msg.setTimeStamp(0.7831769782032609);
    msg.setSource(4802U);
    msg.setSourceEntity(2U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(132U);
    msg.control_src = 2228U;
    msg.control_ent = 133U;
    msg.timeout = 0.620975128329473;
    msg.loiter_radius = 0.3397944050606454;
    msg.altitude_interval = 0.7335143146890851;

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
    msg.setTimeStamp(0.776863916457583);
    msg.setSource(61600U);
    msg.setSourceEntity(226U);
    msg.setDestination(7695U);
    msg.setDestinationEntity(16U);
    msg.control_src = 43373U;
    msg.control_ent = 10U;
    msg.timeout = 0.39843034863813076;
    msg.loiter_radius = 0.6228891942032585;
    msg.altitude_interval = 0.7161544935015005;

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
    msg.setTimeStamp(0.1973037994208059);
    msg.setSource(21991U);
    msg.setSourceEntity(74U);
    msg.setDestination(59516U);
    msg.setDestinationEntity(209U);
    msg.control_src = 64306U;
    msg.control_ent = 95U;
    msg.timeout = 0.23383243216034155;
    msg.loiter_radius = 0.31894597197630736;
    msg.altitude_interval = 0.2922253395570421;

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
    msg.setTimeStamp(0.48974753106410585);
    msg.setSource(37737U);
    msg.setSourceEntity(219U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(9U);
    msg.flags = 7U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9586019715035368;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6068051259290667;
    tmp_msg_1.z_units = 23U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.23267868546062742;
    msg.lon = 0.8137265255967888;

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
    msg.setTimeStamp(0.6308427230097997);
    msg.setSource(25362U);
    msg.setSourceEntity(60U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(238U);
    msg.flags = 111U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1154777371452308;
    tmp_msg_0.speed_units = 11U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5799832771994;
    tmp_msg_1.z_units = 45U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6404951456027753;
    msg.lon = 0.08611026470149241;

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
    msg.setTimeStamp(0.5239886312724255);
    msg.setSource(43685U);
    msg.setSourceEntity(171U);
    msg.setDestination(7561U);
    msg.setDestinationEntity(160U);
    msg.flags = 169U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.377635425067254;
    tmp_msg_0.speed_units = 163U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7004517252188536;
    tmp_msg_1.z_units = 17U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3599494743391647;
    msg.lon = 0.5514584499200418;

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
    msg.setTimeStamp(0.31873716580520894);
    msg.setSource(22054U);
    msg.setSourceEntity(22U);
    msg.setDestination(45211U);
    msg.setDestinationEntity(123U);
    msg.control_src = 45862U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 197U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8025848578881656;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7204443871781857;
    tmp_tmp_msg_0_1.z_units = 48U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.007224069541045819;
    tmp_msg_0.lon = 0.5748892334516148;
    msg.reference.set(tmp_msg_0);
    msg.state = 70U;
    msg.proximity = 33U;

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
    msg.setTimeStamp(0.8290532600663217);
    msg.setSource(49381U);
    msg.setSourceEntity(114U);
    msg.setDestination(40699U);
    msg.setDestinationEntity(206U);
    msg.control_src = 17579U;
    msg.control_ent = 145U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 168U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10690072503941972;
    tmp_tmp_msg_0_0.speed_units = 122U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.15081131503836964;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2475933128683877;
    tmp_msg_0.lon = 0.6077575606879649;
    msg.reference.set(tmp_msg_0);
    msg.state = 194U;
    msg.proximity = 15U;

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
    msg.setTimeStamp(0.15454086376599108);
    msg.setSource(38199U);
    msg.setSourceEntity(82U);
    msg.setDestination(44388U);
    msg.setDestinationEntity(187U);
    msg.control_src = 39666U;
    msg.control_ent = 85U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.47050481375143993;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8956315359954524;
    tmp_tmp_msg_0_1.z_units = 13U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6250001329945445;
    tmp_msg_0.lon = 0.7046484832643906;
    msg.reference.set(tmp_msg_0);
    msg.state = 129U;
    msg.proximity = 112U;

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
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.7293497981961385);
    msg.setSource(28131U);
    msg.setSourceEntity(95U);
    msg.setDestination(28258U);
    msg.setDestinationEntity(189U);
    msg.control_src = 61551U;
    msg.control_ent = 47U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 28U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.36809613171729805;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2922670637836289;
    tmp_tmp_msg_0_1.z_units = 29U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.28909252866219204;
    tmp_msg_0.lon = 0.2451552504179476;
    msg.reference.set(tmp_msg_0);
    msg.state = 118U;
    msg.proximity = 20U;

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
    msg.setTimeStamp(0.09440345614130852);
    msg.setSource(10631U);
    msg.setSourceEntity(55U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(212U);
    msg.control_src = 51197U;
    msg.control_ent = 162U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 125U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8285821476510764;
    tmp_tmp_msg_0_0.speed_units = 178U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6216279021799749;
    tmp_tmp_msg_0_1.z_units = 95U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7017837217383629;
    tmp_msg_0.lon = 0.5014452918178802;
    msg.reference.set(tmp_msg_0);
    msg.state = 238U;
    msg.proximity = 54U;

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
    msg.setTimeStamp(0.904168809473422);
    msg.setSource(46069U);
    msg.setSourceEntity(43U);
    msg.setDestination(9037U);
    msg.setDestinationEntity(150U);
    msg.control_src = 3763U;
    msg.control_ent = 26U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7434937148103676;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0693280846725921;
    tmp_tmp_msg_0_1.z_units = 183U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8749594885125891;
    tmp_msg_0.lon = 0.8969533978642851;
    msg.reference.set(tmp_msg_0);
    msg.state = 234U;
    msg.proximity = 171U;

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
    msg.setTimeStamp(0.8724461334514646);
    msg.setSource(18529U);
    msg.setSourceEntity(79U);
    msg.setDestination(50696U);
    msg.setDestinationEntity(3U);
    msg.op_mode = 73U;
    msg.error_count = 109U;
    msg.error_ents.assign("WTIGZZMLQJTRPJBGP");
    msg.maneuver_type = 24903U;
    msg.maneuver_stime = 0.5864666416156227;
    msg.maneuver_eta = 47163U;
    msg.control_loops = 2216218437U;
    msg.flags = 93U;
    msg.last_error.assign("QRTABVXOJMYUZMGPBAIJZALRMGMMRDULSJDYUXUYKLNBVVCCSZSBWROAQGRBWENNRVUFZRGJNLSTUIDNGDSFZGKVTFDJUFLHCSGZEINHPHXPFLTPXXDQJKXISKRHQDVEAMIIU");
    msg.last_error_time = 0.6544779997481881;

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
    msg.setTimeStamp(0.6972725750070078);
    msg.setSource(37601U);
    msg.setSourceEntity(44U);
    msg.setDestination(60237U);
    msg.setDestinationEntity(144U);
    msg.op_mode = 11U;
    msg.error_count = 69U;
    msg.error_ents.assign("LTBKKDDUSWHNCVCXHUXPANTJFFBCAIMAHLFMTWRNZJPXDYWGPOUYJNEMXOCTRPSHCAVGMUMBZSWCCJGIYNBSMPOOKSGWDIBVDLJZTBVSTZFQSPIWZQFCVWEEUEWQASAUCXAUPRIYGFALQQLDGIZLNYKKBZKJOIODRVUVJZYMFFDLQEKOUSOXNRGRB");
    msg.maneuver_type = 28472U;
    msg.maneuver_stime = 0.918383143870006;
    msg.maneuver_eta = 47651U;
    msg.control_loops = 3998223747U;
    msg.flags = 149U;
    msg.last_error.assign("FWIPNAGJNKJPZSWXGTRFDHCTSOTECBEBHOLFFXBFKRVFIWRZZTHBZPJPJGCMFZEQIESLNXNOKXBDCHQGKYCLDDPRSEMZCWXYCPYLVHRTNXGJDQOUGJJNRYMIYQMNNSTBSALUTDXQPAPWGYOKMKVUEPYJYRFNZJHLKLUHVOSAUGIQRAOFXSDOBIHGLCBCSDIEHMLWKVBXUDVKBWAVMTPZYJTYMUVMHLCQUOAEMUWEQQVWRZUA");
    msg.last_error_time = 0.37867203602296884;

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
    msg.setTimeStamp(0.20124472822331885);
    msg.setSource(22657U);
    msg.setSourceEntity(47U);
    msg.setDestination(37785U);
    msg.setDestinationEntity(241U);
    msg.op_mode = 133U;
    msg.error_count = 170U;
    msg.error_ents.assign("EFGJOQFCLIYCLWUYCIMRQFQNPRIUZJMRLTIWWUMDIWMMDAKPFULTBNLKADEVLKEOWUDGIOBJDPFHLYGFZTWHZNAIVHQYMUXOFSQZJTOLHHTERCGZKPLCASHATMJYMNCBQMPBCKDUZKASXEVQBWYXZXPPQVQURFOBZPTDOEBQXNRKVALUCERG");
    msg.maneuver_type = 25798U;
    msg.maneuver_stime = 0.47556163545406194;
    msg.maneuver_eta = 30966U;
    msg.control_loops = 2893072662U;
    msg.flags = 12U;
    msg.last_error.assign("IWFYFKUKSRVOXQJWPUOZSYKUEQDQWIYRNOFRJBNRXOGLEYTFCCXJBNZACSLSQDOXFJNNZUNPZOHBRIEHPWTPCXGTHKXBAEGAZZSSLIJTZMWCCYPDYPXVGHWCJMCKQUAYMBVEGUDRDLYWPAFGMTJWOIHGDCNXMXLHDYWSBHARUTLMCQUJEDTAH");
    msg.last_error_time = 0.55346233863288;

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
    msg.setTimeStamp(0.9843369457043745);
    msg.setSource(30988U);
    msg.setSourceEntity(215U);
    msg.setDestination(31191U);
    msg.setDestinationEntity(143U);
    msg.type = 83U;
    msg.request_id = 36813U;
    msg.command = 78U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7213332641669185;
    tmp_msg_0.lon = 0.9450710516884778;
    tmp_msg_0.z = 0.8268648663781203;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.9886880658808803;
    tmp_msg_0.speed_units = 51U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.48069250121648277;
    tmp_tmp_msg_0_0.lon = 0.21572826901324804;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SIKBVDJNEYOPJKLWJZQYAAHEOFXNLRYZKUAYTHWBPKGRTWVDCGXTWOXNXAJKJNVFPPHELCYMAFIEMMMXGRAHFZEIBQSQBOPLDLQCRBKTFNBENWICRMTVL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30512U;
    msg.info.assign("OEWRVYJCXAHZPXEGMSZIOLTAFIHVJZWPSYCTFCVREYCDQJLMSGDREKKPRWXFZZBSPKPLUXOPURHRGLQSBOBLDIATIOGTAPFWHXJLLIDYVYFBMGQFNMDOFTZJYHACWAINACJQSNHPEUAJIKMIMUIPHYZXCH");

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
    msg.setTimeStamp(0.14950401527083457);
    msg.setSource(34743U);
    msg.setSourceEntity(226U);
    msg.setDestination(54065U);
    msg.setDestinationEntity(101U);
    msg.type = 233U;
    msg.request_id = 57613U;
    msg.command = 99U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 8774U;
    tmp_msg_0.lat = 0.3889164618421771;
    tmp_msg_0.lon = 0.38309529246688656;
    tmp_msg_0.z = 0.5799463978421577;
    tmp_msg_0.z_units = 244U;
    tmp_msg_0.speed = 0.5581990343622831;
    tmp_msg_0.speed_units = 71U;
    tmp_msg_0.roll = 0.5771292628223502;
    tmp_msg_0.pitch = 0.6196672626646006;
    tmp_msg_0.yaw = 0.5712737684675281;
    tmp_msg_0.custom.assign("MYMNVMACLLVSUXOBFLVDFSFYJYEKTLBEDRBNVBNIJLDQSLUNBXAJMCNCSKXGJGTKKWZAYURHBBRXYMIRUKRPHYIQTIPFGFUDVYTCBIOXZAMHVBPNUCIGTGWSREIEACCZQIJZYKPZUXJNDWQHDEKTLQWK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49357U;
    msg.info.assign("ABHMUDEHSHWWJQHGSEEIJRFUIBXOHPZGIVWPBDZHGQ");

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
    msg.setTimeStamp(0.18439798215887127);
    msg.setSource(15322U);
    msg.setSourceEntity(246U);
    msg.setDestination(43875U);
    msg.setDestinationEntity(139U);
    msg.type = 119U;
    msg.request_id = 30962U;
    msg.command = 229U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 35666U;
    tmp_msg_0.lat = 0.25125779864213904;
    tmp_msg_0.lon = 0.43299005662204904;
    tmp_msg_0.z = 0.19970751323769653;
    tmp_msg_0.z_units = 119U;
    tmp_msg_0.speed = 0.464945909767575;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.bearing = 0.9443056023271608;
    tmp_msg_0.cross_angle = 0.2751847138110626;
    tmp_msg_0.width = 0.8157035948296815;
    tmp_msg_0.length = 0.00981138171439977;
    tmp_msg_0.hstep = 0.09828934364231101;
    tmp_msg_0.coff = 110U;
    tmp_msg_0.alternation = 56U;
    tmp_msg_0.flags = 197U;
    tmp_msg_0.custom.assign("ARIBTNOYSGQCXSULEXJEAYWKQEZYEDRRKHSIGLEMOIWVRVXOYNLSBLPSJCCOIUVHWVKPTQAOUMHWNNGRZDECTOJKDDYBCLXPHZEUXVQWBBWDTANFQDSGFIRTUUANVZJOKYFLMHWWJURSEIH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49689U;
    msg.info.assign("QTVWMDRTPHCGYIOFRHLQTKSHYLEQTKJEPLLJQTYNLOJWUKJKMPPNQAZBJWGVKEGGMFXDCHGNZOCRAXIVMOCJGNRYUMBHIDEIMYBGYSTDZSUKPQFZRNQJISFERDZN");

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
    msg.setTimeStamp(0.9113614154614191);
    msg.setSource(57386U);
    msg.setSourceEntity(58U);
    msg.setDestination(45460U);
    msg.setDestinationEntity(227U);
    msg.command = 218U;
    msg.entities.assign("LHFTQLDFOVRSGSNJMWAQIQCEJPCWRKXSHRFIBJKRATWVLBYBPPDTAAIRNLGXEQZNKTYIVLJOIUFMUNJCNWDPUKASGYMQC");

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
    msg.setTimeStamp(0.07815281531287743);
    msg.setSource(2840U);
    msg.setSourceEntity(204U);
    msg.setDestination(2781U);
    msg.setDestinationEntity(81U);
    msg.command = 49U;
    msg.entities.assign("NPCQWHGYVYHAAUABWSUEJXHJCCATJGEMAORPMCCQOMDXRPRH");

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
    msg.setTimeStamp(0.3324202646140969);
    msg.setSource(57054U);
    msg.setSourceEntity(103U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(17U);
    msg.command = 186U;
    msg.entities.assign("DHXZOUSKWIQQADGGDCWUDQCYFKVBXTGMLXFCBTTPOXGNRJWSPM");

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
    msg.setTimeStamp(0.9881086407614129);
    msg.setSource(24837U);
    msg.setSourceEntity(125U);
    msg.setDestination(10344U);
    msg.setDestinationEntity(237U);
    msg.mcount = 94U;
    msg.mnames.assign("ORAVVYDBQRLYMJVJIGQJLMUFZMSHSMKBAWZSUKW");
    msg.ecount = 168U;
    msg.enames.assign("RWEFQIXYBPXZGPMSVFXPUSAEIGGTWWSQURITNAZQMQNLVHYEW");
    msg.ccount = 126U;
    msg.cnames.assign("NETBIITCHLKDZALXTLYFQIYSXMNEJUJOPGMPOGGREZKNYWVLBAILUQEADMTWDHWGZPFRZJZKVMNNNWVVVUAIHXFZQQIKVWEKCSYEECKLVFGFTMPQJHCHAOXSDSCPTGJQCVUK");
    msg.last_error.assign("IBIFPUXVPICQYEDCVASYRROFKNRPWMLENLSNTMGBKGDQBATQUFMREGYVATHJHVJOSLWNAQCKPUJHRXLECOOEPCSYXZEPCVLDPBNNOEYOJNWFLTZYWEUDXRUIKLBHXDKYRAD");
    msg.last_error_time = 0.4781178561253091;

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
    msg.setTimeStamp(0.13469455611016723);
    msg.setSource(19767U);
    msg.setSourceEntity(54U);
    msg.setDestination(30433U);
    msg.setDestinationEntity(88U);
    msg.mcount = 169U;
    msg.mnames.assign("OLOZZKZSCXL");
    msg.ecount = 156U;
    msg.enames.assign("STHQHLMTDHFFWASOXVONDMXSCIZYLNKGBSRQJOGIWEUCPLWTDFGIEMTKMAFDZLUIYQUYZTZANMVSLEVFJBBMSISNKENAUHROCSOEGTPEYMDNGZUBOXXWFGCPHQLWYFSRWCPGYWWHPWCKGAIZFMCXPXLERGRWRYCOLZJLDKYXPSBVQYRXKVITHTJHJDROPBMRCQKUEIMVBITKYNHNZUXANUIVKDQJPJZQGJKOVDTBNXBHACAD");
    msg.ccount = 124U;
    msg.cnames.assign("NEQZXJREWCBSQCWOFSYXHZPUFUAGFBAQVDMMSGURWVXQBJKESLPQLWKACPBIXURXJBMUJHIMWONCBIVAQGLPYISHCDZTMEYOPOARMIHVRUBWERN");
    msg.last_error.assign("IRBGBJTDXPVTKDUHNDPASNHJUELGENIEZIPHXSKTMJARXSTUZBXOBDYLPATKEFTNKHDHJYNILYGBMLAILOPZIZMTRUCLSZHRZMDZHVYMQCQEOJNNKDBXWEJIAF");
    msg.last_error_time = 0.5607955525010846;

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
    msg.setTimeStamp(0.1742728959935872);
    msg.setSource(24917U);
    msg.setSourceEntity(200U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(212U);
    msg.mcount = 198U;
    msg.mnames.assign("DNIOMXIJEMERCROMKBAUCNTITWVCSBEFPXSFHOUBROZPRITVKADLDLVKW");
    msg.ecount = 230U;
    msg.enames.assign("DSQIBUQRIJSLNJNVTRFEAMXPZDIBTQGQCBVCELAPPMEPXRPIFWUQZUAKNKZHXUDAMOMWEKSFECRYEXZTYKHDPEAYURPWTGELTSHVDZVRBDNCXWSCAJXOHKRXJWGHYLQHVKLHCDYPJHDXOMGOOFJMHIDOAFZBVNONARFCPD");
    msg.ccount = 4U;
    msg.cnames.assign("HVFWUASZXEHULIWJZBNZJJHOENOEAMDJUICUEGYOTLFMWCHKRJHZCUYPSULEAXQEAXFNNQKSZKJAFLZPAIWGAHCGCIYEGFGKSFYBVPRAKPQKXDKNYMCRHMFVGXRTAFBGONUDTTOCCDYKDOBSMGPQJMFWBYDZONBCRXMIJJSMRFSLETCIMHLDZRJTADZIHPLBGQVUGVEU");
    msg.last_error.assign("WMLKJNEJYLZJZTXQVFDZULBVNUPFNCRSOIDITUCBQWDMPAARYVRGPPJTWKQXQF");
    msg.last_error_time = 0.07846385348469997;

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
    msg.setTimeStamp(0.315212636294658);
    msg.setSource(37716U);
    msg.setSourceEntity(200U);
    msg.setDestination(10607U);
    msg.setDestinationEntity(236U);
    msg.mask = 172U;
    msg.max_depth = 0.5858918638856603;
    msg.min_altitude = 0.8016605888810177;
    msg.max_altitude = 0.7155569273455304;
    msg.min_speed = 0.5224933127951716;
    msg.max_speed = 0.16079273621343027;
    msg.max_vrate = 0.0001405765815742921;
    msg.lat = 0.4013346195325367;
    msg.lon = 0.9837653145442733;
    msg.orientation = 0.6149960750898049;
    msg.width = 0.29344716587013897;
    msg.length = 0.6035381928958631;

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
    msg.setTimeStamp(0.030761997364651572);
    msg.setSource(45242U);
    msg.setSourceEntity(244U);
    msg.setDestination(41089U);
    msg.setDestinationEntity(115U);
    msg.mask = 178U;
    msg.max_depth = 0.4519814041056376;
    msg.min_altitude = 0.5798182444029136;
    msg.max_altitude = 0.431659698222172;
    msg.min_speed = 0.200029836772861;
    msg.max_speed = 0.6259389273588438;
    msg.max_vrate = 0.18049825570194733;
    msg.lat = 0.8753670777379098;
    msg.lon = 0.0232346904947639;
    msg.orientation = 0.7739965005246775;
    msg.width = 0.44340136595831925;
    msg.length = 0.08486209784023901;

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
    msg.setTimeStamp(0.8522293612146821);
    msg.setSource(878U);
    msg.setSourceEntity(117U);
    msg.setDestination(6206U);
    msg.setDestinationEntity(138U);
    msg.mask = 118U;
    msg.max_depth = 0.6656289022461912;
    msg.min_altitude = 0.79737117063965;
    msg.max_altitude = 0.7115642900439896;
    msg.min_speed = 0.50598231426694;
    msg.max_speed = 0.08828265847069727;
    msg.max_vrate = 0.17516354100054643;
    msg.lat = 0.7562163554215272;
    msg.lon = 0.31968076377929755;
    msg.orientation = 0.6544306733912766;
    msg.width = 0.41117467028913235;
    msg.length = 0.01997386058729833;

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
    msg.setTimeStamp(0.7073844473264194);
    msg.setSource(63430U);
    msg.setSourceEntity(201U);
    msg.setDestination(21441U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.3413957732109185);
    msg.setSource(45546U);
    msg.setSourceEntity(104U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.8442802815780084);
    msg.setSource(31027U);
    msg.setSourceEntity(125U);
    msg.setDestination(50778U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.6603607556848511);
    msg.setSource(56594U);
    msg.setSourceEntity(159U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(50U);
    msg.duration = 17703U;

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
    msg.setTimeStamp(0.12657622117602496);
    msg.setSource(64240U);
    msg.setSourceEntity(254U);
    msg.setDestination(35795U);
    msg.setDestinationEntity(157U);
    msg.duration = 62465U;

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
    msg.setTimeStamp(0.5161916056727025);
    msg.setSource(19089U);
    msg.setSourceEntity(203U);
    msg.setDestination(37939U);
    msg.setDestinationEntity(203U);
    msg.duration = 25149U;

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
    msg.setTimeStamp(0.6268968796837657);
    msg.setSource(21489U);
    msg.setSourceEntity(70U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(210U);
    msg.enable = 39U;
    msg.mask = 1711497144U;
    msg.scope_ref = 0.511344786770146;

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
    msg.setTimeStamp(0.9325100753374866);
    msg.setSource(61420U);
    msg.setSourceEntity(39U);
    msg.setDestination(46586U);
    msg.setDestinationEntity(163U);
    msg.enable = 88U;
    msg.mask = 1097345516U;
    msg.scope_ref = 0.9198905370420738;

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
    msg.setTimeStamp(0.42952726006263287);
    msg.setSource(63663U);
    msg.setSourceEntity(45U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(33U);
    msg.enable = 85U;
    msg.mask = 1187267477U;
    msg.scope_ref = 0.8525942204535523;

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
    msg.setTimeStamp(0.8962923737630626);
    msg.setSource(16647U);
    msg.setSourceEntity(162U);
    msg.setDestination(39948U);
    msg.setDestinationEntity(100U);
    msg.medium = 43U;

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
    msg.setTimeStamp(0.7985038225529335);
    msg.setSource(2400U);
    msg.setSourceEntity(14U);
    msg.setDestination(7746U);
    msg.setDestinationEntity(126U);
    msg.medium = 173U;

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
    msg.setTimeStamp(0.6895980395142624);
    msg.setSource(44138U);
    msg.setSourceEntity(96U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(233U);
    msg.medium = 182U;

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
    msg.setTimeStamp(0.13040917329191004);
    msg.setSource(62409U);
    msg.setSourceEntity(161U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(44U);
    msg.value = 0.495545601277684;
    msg.type = 87U;

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
    msg.setTimeStamp(0.7050873587473049);
    msg.setSource(18342U);
    msg.setSourceEntity(22U);
    msg.setDestination(38766U);
    msg.setDestinationEntity(208U);
    msg.value = 0.20636157611613015;
    msg.type = 42U;

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
    msg.setTimeStamp(0.6499890642528308);
    msg.setSource(28673U);
    msg.setSourceEntity(248U);
    msg.setDestination(1259U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6403165416942302;
    msg.type = 99U;

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
    msg.setTimeStamp(0.7424080916203653);
    msg.setSource(5082U);
    msg.setSourceEntity(145U);
    msg.setDestination(65407U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.5710448548124795);
    msg.setSource(36166U);
    msg.setSourceEntity(12U);
    msg.setDestination(9914U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.9548063933129816);
    msg.setSource(32375U);
    msg.setSourceEntity(57U);
    msg.setDestination(14923U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.8580797066921116);
    msg.setSource(23871U);
    msg.setSourceEntity(39U);
    msg.setDestination(61875U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("SQEREFHUCBCGACSYJOHGEIRWCDLQZAXYJWSDDAPISLJGSLPVLLUVDOOCNKEYGXMAMUWXWCWRZBRTBABDVQYMWQMJGKWKMMSFLJCXOQHATTGPYFJQUNVJCCRNBVPOYGDHVSLJRH");
    msg.description.assign("VCXMAJHWZGKJTPYNQFZVPTHZRZQLJBNUGTFGVLGDBXBYILAPYGONWWKHFJSXE");
    msg.vnamespace.assign("KYDUXKBZWAQYPLLLSQNDK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SVOTCMPYRUCTYARBNNIEFUUWLSYQKBPQEARYWDFCHQNNCHFPDEHKBJXIJSEJGMVDJJRGPAHQFUBGBNTOK");
    tmp_msg_0.value.assign("EEFUXZSOZQCGZWUXUVLSTMKHPTXPIPPXWYJITDWGLXZFCDXZTRYULDUSDJGRWDFPWXIPFNVCQHSCRRI");
    tmp_msg_0.type = 56U;
    tmp_msg_0.access = 98U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KBPTCIFUMZJOBGULKHXPOBBVLJRXFPLHBRBQWKOSTCUODZRWHLXFHOJGALTQEQRRTLDAMHMGEIEBCZNYAENVJYXIDLPEQZPPXOCFJRSCCEKCUHWGMASVKGKJZINGMXAWQFBCYQGMPQVZETAPRTTEOHAVNMWEFRUFJCNYCJYDDVJMHYDABZFSUYWQVNYLINRDZFTIUOZLJQSIURSAXUYVMDUTIO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("VAKRIQTHROXLIVA");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 58938U;
    tmp_tmp_msg_1_0.lat = 0.7483273432036437;
    tmp_tmp_msg_1_0.lon = 0.44251600595161833;
    tmp_tmp_msg_1_0.z = 0.2695930622527525;
    tmp_tmp_msg_1_0.z_units = 136U;
    tmp_tmp_msg_1_0.speed = 0.9635510552221713;
    tmp_tmp_msg_1_0.speed_units = 114U;
    tmp_tmp_msg_1_0.roll = 0.9247571764567002;
    tmp_tmp_msg_1_0.pitch = 0.17744906832724827;
    tmp_tmp_msg_1_0.yaw = 0.5773854315753039;
    tmp_tmp_msg_1_0.custom.assign("IODBRGDZTBZGUVEBMCDGNBDAXVHHPBCVCFFWAIARRJMGNWELYHMTJXKNFIQDDBYCAWOWTRZLXTQOMBLZLSJETKAAIPAEPIFAJBZSXILDVTPYWOPMRCVPRYDEPOCAMUOGZXEPCCOQUYFJUH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EntityMonitoringState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.mcount = 24U;
    tmp_tmp_msg_1_1.mnames.assign("XOXRQGJTMTSMEVDIRGNJDLUOHNNYOAPVZCKBZCEJCQYIVWILWU");
    tmp_tmp_msg_1_1.ecount = 3U;
    tmp_tmp_msg_1_1.enames.assign("BYHVESXAMYAKLXHSUVKSYGENTHEKLGLIXMCQENOYZPIBGRROZNZKOTTLYLNMCDCJKEBLDSWMVQZRPJRFDEEPLWJNQXDBHAIWXFBKSFUFJZAELHLZFPKGHGOPXCSUIJUFYTUWUCJSQTNNOCJBWHIOHVYBLIQGWWRYODRIADRAOIVTJPCXQTQMMQHAMXRZWAFHVYUEWQXJZVBBTGFSDTDZKDOYCFSZUPVWAVINAMIBUMOQKNR");
    tmp_tmp_msg_1_1.ccount = 165U;
    tmp_tmp_msg_1_1.cnames.assign("OXRNTSPUMHGBGWNWDTUFMFGEKLPZAOPJPUVGDTDRMEZAAIDKGJIZAYXHAESKJRSCARQXEDUNDHEBQPGTONSBMPLDWRLFJWKUYBPVBAHYKLMWCHTPOPDUMLDUSWXCVRVFDQYJMCSAQNRLSYGZIJGMLZZRKAFEQWFUCYOHBH");
    tmp_tmp_msg_1_1.last_error.assign("SFQFISEYALAXDVWBSNWNEPUXRCAEYGKHZQVKKLQRTLEZELBKCHCGMTDYZKPVUAJAQCCSJDUIHMKTLXGXMZNYWUPDFEEUBXFFRRBJGORAIUYMSWHHVMKWXJNOXDNPLQVMYWPIDAUQGQLDFOVNXMEHGLDVAORJKBDGEDQZIBOPRVOJTPGYUKALRJTNFXILSJTZBJTYMWTSEIVRMHAOGUHSQSFBNKNFJOUHISZCMZCOG");
    tmp_tmp_msg_1_1.last_error_time = 0.01633298748412737;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DARKOXWQRQZJOSEUYYSMFMVSVLJDQHVPDQCVKWHXAOHARBTZITANHNXIXAKMLDBBZZGEDWDCQPDFNOLSSLCGGESOKATQROWPTVEYKSGYRZQHREAZNKYCIZFCBIPWCELIJOKIYDUJJRCXVVWCUISPZNZCXFUHPBOSHYOMBJDXPXPVMUUHGMUENXWGFRERSFGWEQZWHTLNXGYNJQBRFCPGVTGWIPIFU");
    tmp_msg_2.dest_man.assign("DBFJVKOMIVWFCLYHGMCCQPMULDUJZZDGSHFKGEYQVIRYYOXEUHBKSETHOQWTVPNXWVRDRIJNIEYWPTMUBMDXOMRGBTKKAJ");
    tmp_msg_2.conditions.assign("QSIYMVQBHVPCLWMJOJXMTJMKQANLXAFDQZFWNHJQXZHQDQXRWLPSADWCBBKQYLFOYKGEFPWGPQJJSOXISS");
    IMC::VSWR tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.3918174797985242;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::PathControlState tmp_msg_3;
    tmp_msg_3.start_lat = 0.07354021262314736;
    tmp_msg_3.start_lon = 0.4753979998204334;
    tmp_msg_3.start_z = 0.29330383908732993;
    tmp_msg_3.start_z_units = 79U;
    tmp_msg_3.end_lat = 0.9277616680140854;
    tmp_msg_3.end_lon = 0.08906194073271878;
    tmp_msg_3.end_z = 0.49046026219935845;
    tmp_msg_3.end_z_units = 229U;
    tmp_msg_3.lradius = 0.6940463120871775;
    tmp_msg_3.flags = 148U;
    tmp_msg_3.x = 0.4472326530454458;
    tmp_msg_3.y = 0.3521853001858334;
    tmp_msg_3.z = 0.2393553457148483;
    tmp_msg_3.vx = 0.2913947080063446;
    tmp_msg_3.vy = 0.10414799544276121;
    tmp_msg_3.vz = 0.4125997027250743;
    tmp_msg_3.course_error = 0.5891054676909979;
    tmp_msg_3.eta = 12476U;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::VelocityDelta tmp_msg_4;
    tmp_msg_4.time = 0.4428608435426804;
    tmp_msg_4.x = 0.8537497010486851;
    tmp_msg_4.y = 0.4820339343914344;
    tmp_msg_4.z = 0.5124775215991663;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.73837587443173);
    msg.setSource(39090U);
    msg.setSourceEntity(182U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("WATACSKZTKCJQUNMGHELNGQZYGEOGOHFOFLKLRUHGBJMATQXDLCZUMHPEOFCHNYXVJZBZKEERZMFDNWVTDZXIWGCTKKPNHGSYDRPBRBPJUUODJOOUYELQLHQSQTNDJASATFUNYPCVHAXJPYRPSFIBQGNDXWYTWFAXSWMREBUPEMLZKSSCJRZHTVLBIQLCHAPTISXSYWYOJRIKMWVICLVDUFUMNIYOAGPVMKWRRXVFVXVMDQOIQ");
    msg.description.assign("DKGSCYIVCAGTBWJX");
    msg.vnamespace.assign("HLXQTPNGXVHUGFANBURFBXNTIJALZXPKGZIVTNMWFZKCYAOCCTULSPNZBFMHRGQEGSBKOHMJBWZHASOCMTIWVXXP");
    msg.start_man_id.assign("GVGCEAWQCTMWVRHYSWRIANXZIALFRPUZFKCHMXKOYTLNUBRDDLZOZLMUPVMXJAITUBBTGAEAFPOWHVYCPLIOUMYGOTCKSBKYRGVTFAEVFJTPNADYC");
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 124U;
    tmp_msg_0.x = 0.6296275236032276;
    tmp_msg_0.y = 0.3046197076626387;
    tmp_msg_0.z = 0.1339176450378764;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::WaterVelocity tmp_msg_1;
    tmp_msg_1.validity = 42U;
    tmp_msg_1.x = 0.4756164069520602;
    tmp_msg_1.y = 0.17254026398028732;
    tmp_msg_1.z = 0.5529544211161663;
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
    msg.setTimeStamp(0.5140258389240436);
    msg.setSource(19606U);
    msg.setSourceEntity(188U);
    msg.setDestination(54926U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("RTZMHTVISMETIDCKLORJXCNMQWFFBYNFBGZBLJAQPPOMVTTWXEPGHIDZGELTBOTFRVZXZXCJLWUAEZPRKATEVNNGMKVEAMGLXCLLWASLOSDADCEKQJSFGMOCSUFKNQYFIVGWRIIBHMYAUZRBTYQAVEHVZDQLJJPDKRDUBNUDFCKUOHPJBLJOGHVSPWPUO");
    msg.description.assign("QCLXSVBESTSREIDFIZESCRDJVLHMHRYJZIEXJQITVWWDMFYGRBTBLWFYHKJEKRKQQVDCOOORSUIGLPMOZHAIVOV");
    msg.vnamespace.assign("IWKBJXFIYGPZPFGVVKWEVQWBMOXORGPXJYVBPKVQANLLLHYXPHEWOZWRIAMBGPYRTJZZWPKHUGKATZQPFRNVYAFY");
    msg.start_man_id.assign("DNAKGITJZXZTMBMUORWZARQHASRTZCVZKCNHMSMRCYBGGQJXHMICWLIJJKUBPEUUY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BCWIWSDNOFEFCQUHCSYXLGGEMNKSNGDDRXEPNWJJDYWUQTDJXIVKIWAKEJMHVOAIRQBKFSLCHOGXEEGZYELAOFVFPONIKCSKGEPWUUQBYMWYDNRDJQYXQYVKDEFZTRVPMNLHJAVPZMBOTPGCJCUPZPVZMTQCILVMBBOTGPFIRMIWDADTZVMCXQRUWSTSTFSOTAHOLCXSZJLHNLXOLZFLXZKQBXTWUZJJGIBNAY");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("CRFVDFLTFHGYMCERUZSXOEZSZJCWNUXDAHBIFMWTIABKODSCBJENEQOAQRXGUXXPYKYTMOBVPWAIVREGMETTFARUPAGBRQDQELNIYZLOPLCDZJBUEEQHHBVUNYBJXSXUVQFMTEMGPAWNAILKGFZNYDWNJKSPCOCKQWPSFTTNHASFGQKPVYIPIZOLQBPZITNJI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CcuEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 23U;
    tmp_tmp_msg_0_1.id.assign("ZSAZLRYKHXKBIPRHKMWGTAOQZGQUJCUCVNIRHVNHVHYFAGICERDOPMIREJUSVMUHBNTDKEYAFISTYJXDOAWQPNXYYDFQZSCGDGXUVVAVCZMYYGMSTBKWWSONXWTJJEXNKIUDVWEFTFLZMLORHHGDGPJDNACFYJDMSRZPBLJRKLTQONSBTTKFAPPWQFBXELGQOZAMCZILFNQHRBPOCAVZ");
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Salinity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.7121686326754317;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3305449811530845;
    tmp_msg_1.beam_height = 0.09675509979548269;
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
    msg.setTimeStamp(0.8097627458193304);
    msg.setSource(12998U);
    msg.setSourceEntity(172U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(32U);
    msg.maneuver_id.assign("AMSGHDSPRUCXPPEFXXYDXDFJVTNOEIIOHUVXWVZCTRCMCHYAAQBOYQEOUUZPZLIKTLYSFFJZNWGSYZWLNXWYNQRCNJIRMLBT");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 58090U;
    tmp_msg_0.lat = 0.7140977337103183;
    tmp_msg_0.lon = 0.5017532036338136;
    tmp_msg_0.z = 0.7098608414583989;
    tmp_msg_0.z_units = 114U;
    tmp_msg_0.duration = 23432U;
    tmp_msg_0.speed = 0.5553715700551356;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.type = 46U;
    tmp_msg_0.radius = 0.8122106800946453;
    tmp_msg_0.length = 0.39504360249324577;
    tmp_msg_0.bearing = 0.057364275358419925;
    tmp_msg_0.direction = 115U;
    tmp_msg_0.custom.assign("ZDLNPLTKJHYWFXGGMRUEVGJSCSHLGUUWTYERCGQZBYJJPJLPAUYGBRQFXUPNFJQJVZGVBIQPZFBLXTXOYMVEBFDLJKGWROEHVZDOTOQQWOMMDWHQOKHKHPDFBULARGIZRVQEIKGXROATKSSWPBNYR");
    msg.data.set(tmp_msg_0);
    IMC::PushEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("LXLDCKRXSUEGFSKPFBIPEGJLBOIAXTPWUANCJSNYCOHUBTILBMBDRMVNJVNZZXBCMDJRPWBLNECOYGUQOYRCPYGQBUXMWZEAVIGTWDHVWOQYTOQAIXICMKGAVLFBAQOMDMHZTAWQOUDRLCZSKSFWJQTOFVFYHZWSODKZEQVXNNXFVSMHIUCIJTAWSWRPVIGUCPFGHDTKHLERVRPGP");
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
    msg.setTimeStamp(0.09334402906989414);
    msg.setSource(1794U);
    msg.setSourceEntity(225U);
    msg.setDestination(19481U);
    msg.setDestinationEntity(123U);
    msg.maneuver_id.assign("QLMZURHHBWPSQFYFWVHEOUGWORVQLLICCABDYHNJFPQMJXGSWJUTQRNJTHIQUSKIPQZYTIKLILCXAXBIAYTSECBZOGJKFWFZEUHVXAEOENFRTGFMLHRXCFPWSKDUKSMMAZKCENPJHP");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 15855U;
    tmp_msg_0.lat = 0.9969937353404416;
    tmp_msg_0.lon = 0.6202088340845889;
    tmp_msg_0.z = 0.8099913729751574;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.39140974811269413;
    tmp_msg_0.speed_units = 27U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.22937536915094214;
    tmp_tmp_msg_0_0.y = 0.12668221089713516;
    tmp_tmp_msg_0_0.z = 0.06771054252773667;
    tmp_tmp_msg_0_0.t = 0.11781485571787564;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YYWBNGSLBKJGPUMQTQSKPPGSBTQUNWZGUBFKETFDUTPMLEUJFMUPTDHUCECSNVMNXNMYIKTKZFSIWIXOIHARXXGEIQXYATAVSXQHDWVYRGJPSOKHNHVFDDPOPIEXYBZAUIMGWOZILTKDYFVALQEYJKBSREHZVXGKCBAMRJLQDVGYWAMFSMCCP");
    msg.data.set(tmp_msg_0);
    IMC::ControlParcel tmp_msg_1;
    tmp_msg_1.p = 0.03809850007939286;
    tmp_msg_1.i = 0.9608419489718616;
    tmp_msg_1.d = 0.06339708485928464;
    tmp_msg_1.a = 0.36704821134556653;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanVariable tmp_msg_2;
    tmp_msg_2.name.assign("VXZMYWSUVMEYWBTIBJWBUZCPAPTAWGLMCZNCFRVCTVDPLLWMFVUKMJVSAAUIPIUPOPHDSXYRKLKTEMJMKQJHLDBXFOHPRBLCFLRGJQTHQRHWKLWUDGUEWQGSFSCNDACYIIGIKDHGSGBSRVAXJSJRDERXUAZCQEEHZVJPXZOTNYBTWHBNP");
    tmp_msg_2.value.assign("EVIHFZPOCPEXGQDSVGZSMBDFCMOBLJKNYVHSQKCOMXOXSOOLULKPUQBTVJIWSRGJUITAQBLLNYAQQXCAAREVKNGFUWZUYDVRHOFUGVNJYWGRTEELRXRFGHDJZYBCKDJLBEODWMWXCVMNVHRWNHNRKHMTJMWJPIKYEZFWFYPFIUPDCINETMMUGGSAVZYRLQSAASDSAEZCY");
    tmp_msg_2.type = 3U;
    tmp_msg_2.access = 250U;
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
    msg.setTimeStamp(0.3277852551312934);
    msg.setSource(42767U);
    msg.setSourceEntity(202U);
    msg.setDestination(15777U);
    msg.setDestinationEntity(79U);
    msg.maneuver_id.assign("NKWQVXWFMCBOUGUMTRSVXDKSNSXDDWZGOHFSLENUIUZMUPXYZXOTVGJKJNGOQWLVNWIZUJOUCRSBAJRCANBVTTAMBGPYLZKKJQZRFHIYFW");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("PIJLAFNGDT");
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
    msg.setTimeStamp(0.45478924602674453);
    msg.setSource(38261U);
    msg.setSourceEntity(106U);
    msg.setDestination(4163U);
    msg.setDestinationEntity(33U);
    msg.source_man.assign("WIROJZVLXCYBWEZGEEJISIATOOP");
    msg.dest_man.assign("OAQVRSDTDENEPMMTYMPGQPUZVILMHNATMMHSXJPZTTQLEJCHADLBQGJSAL");
    msg.conditions.assign("JDXGRBWRMRHTWCKQGQHKBYDOYQJRKFHIDYHCAZDAMSO");

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
    msg.setTimeStamp(0.3167677846342054);
    msg.setSource(39654U);
    msg.setSourceEntity(88U);
    msg.setDestination(60473U);
    msg.setDestinationEntity(132U);
    msg.source_man.assign("STMNMJVZOLEHGPGGETMHDPLZPWCJWTROMHARKZVKYLKNQRXEJWML");
    msg.dest_man.assign("IGSNRAZWVPBDJPBUKXFJLAKTSYJTENFJEBJIVZOIRRFWPPJCVRACBOWGLDYXCOGENLLLKWTEARVAVUQUGYHFMLOPCTJPBBRXMHZONBVJNPSVWTALFTBRYWIKYJFNAIEORRLYGTOEHQSIGZHCUXUQNEIWQMMQCHCMHCVUJQYSAAZYDTSSMYTLXZD");
    msg.conditions.assign("MIOSRKRQXUVJXFFEJRUHUJJSLDQMYEHN");

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
    msg.setTimeStamp(0.7966905077477632);
    msg.setSource(6061U);
    msg.setSourceEntity(139U);
    msg.setDestination(31590U);
    msg.setDestinationEntity(172U);
    msg.source_man.assign("NBOGIGYCIITVNEMKRNFTEGAJKMTUQKFQUCDJJOVBGPVJOQOIUWARVTVRHLESDQDMNYXZPOXVSIGHVQBHFKCBUYSUBQXTUDQRADMJYQMARKZLWMSCEYERQKOFOALCKYLWOQUSYJBZALAJANS");
    msg.dest_man.assign("YXEZTVGKTSUELYUFNPMLYCURAZXVEFWRDVNEGTC");
    msg.conditions.assign("XWFWNLOVYHLDAQGMZCZHKKOWJVHHBRFELPJILUYKRDPUMJGOSURXXUJWBCEOTZKGCMYEHZVMZYICULJHLASCAVAOBDXQABBYNTKIKAZBFGEAKXKWRIXZAGRTVMGLJYSCCNQEPGEDSNXXNQ");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ANQXMSVSVVEXTJPNBHTCRWUHXQJIAFZHWWCQFZSNTYSZY");
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
    msg.setTimeStamp(0.7676860901199833);
    msg.setSource(39785U);
    msg.setSourceEntity(101U);
    msg.setDestination(44956U);
    msg.setDestinationEntity(169U);
    msg.command = 225U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GRKPULYMXKTKCDAYQQSSEOZTRAJBZTTTHXQVEMQHZZLMKYBEFVNZFOUKAHOWURVPELUMOJVJWCDBSYSEFARXPPGBVREBTEAXJLHHXPRDKJJRYXFRMYDSQBRZLBIBXJLVNHKPVVTPRFFOETKKYGCWAHUUCVGPTEPZNLHEOJZDCOFOMVQNIQAGSXUTCBNCIGNCNDIHMGIWDWFIZFWQJOIWYDYMLXCUGKIZGQUN");
    tmp_msg_0.description.assign("XJYAAWZXBMDTROIUCLIKPUKALTYEPNZFFTEEUDLXQUZMGWJVPNTJSHHWNWRQEIQYZKBUFEPRYSXDAMWKCCOPWUMODJBOFWRRBCYGRSLZGHIEBGMZYMFLYBVQXLNDPWPDKNTQHGFVVHYZQEPDDJABIJLTXVZSSGXOAOQFVVCCFZNQSZAKEJBAXMGPICTVMUAVUJRNWRTSELKVYDSWEJHSMUXFUOFHCJGOKOTYRKHLDNXGKQICIP");
    tmp_msg_0.vnamespace.assign("ZNINUOMSABXGPPSPBRPCWEGFAPFVQHJEQZTEPGKCUDWYQHIQIOUWRZJKAZOYRUGJWYTKOJMGNNOCDDKWCCDTVCWOXPRKVNABSBRTFLQXMLGMIRZNMBVFHEVBQYUNFUIWKAQWYMCPXOXHHCSWSHUDRQHBYPTTTAAAJGURJBIZSKIWTLBMLQMCLASSLSXRYGNDDENB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZDBWGWSILHVEAFFLVG");
    tmp_tmp_msg_0_0.value.assign("VPQLHYAUVACBWUMQRQSQIZATRICAHYPMFTMWLTXROVLKZLZEPPKBAVNYXSVQWRZJZSXGTICFFPIXYANRRXBUKEUXBWLSOOUOGPDOKHOCPZEI");
    tmp_tmp_msg_0_0.type = 241U;
    tmp_tmp_msg_0_0.access = 36U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AOSQULPFPOABZLIEKWVDEYBFIFRYGIOTYCYXPHVDGPFZNNZSVMJAUSQWWYAGWDBDYULUDRXHVUOSGXVFQZTVDJJOYR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NVMHXJHPKFKTNAIBYOFWWACFLHYYXSQDBAWBVRMFARXUDPITNCGUVZKVOBYPVSJPGWOEQAEJNNITCJ");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredHeading tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.951707391441025;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 62415U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IFZHDBWZCHOOFWSKWQQTEGMCWBSOAYFZCDWYIDUGPJTLGXKGZPIIRJKWZURDRVEBVSYTUMPKKOTAGSLOLLAJSRBNFXJRIFQZDYJHAHYQDBNXSGOEAXHES");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LblEstimate tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.beacon.assign("DTUBBLWDDOSQBPTBCIQAVOSAATUKPORBOZIT");
    tmp_tmp_tmp_msg_0_1_1.x = 0.28886895983899397;
    tmp_tmp_tmp_msg_0_1_1.y = 0.2267507275866113;
    tmp_tmp_tmp_msg_0_1_1.depth = 0.7228834450794077;
    tmp_tmp_tmp_msg_0_1_1.var_x = 0.44430416760020686;
    tmp_tmp_tmp_msg_0_1_1.var_y = 0.059407273296910645;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::SetServoPosition tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.id = 154U;
    tmp_tmp_tmp_msg_0_1_2.value = 0.33114629057932465;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::YoYo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 52993U;
    tmp_tmp_msg_0_2.lat = 0.8253806615212109;
    tmp_tmp_msg_0_2.lon = 0.5582739098870161;
    tmp_tmp_msg_0_2.z = 0.7711012932979795;
    tmp_tmp_msg_0_2.z_units = 227U;
    tmp_tmp_msg_0_2.amplitude = 0.7807180961339907;
    tmp_tmp_msg_0_2.pitch = 0.8465514318899752;
    tmp_tmp_msg_0_2.speed = 0.7142924214164441;
    tmp_tmp_msg_0_2.speed_units = 246U;
    tmp_tmp_msg_0_2.custom.assign("GRXUJWYQDTFALSYPGOUSNQEVQFWANTNRKYSMEJHLZAQREDRVS");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SessionKeepAlive tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sessid = 431425173U;
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
    msg.setTimeStamp(0.05376437792518818);
    msg.setSource(36455U);
    msg.setSourceEntity(197U);
    msg.setDestination(45759U);
    msg.setDestinationEntity(72U);
    msg.command = 54U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SVKLVHDBJKRCUIVWFPNRTXMZSDGZNWWLIJDIFOWPTJZREXQJGALNZDUZVCXLXSXFINETBFHVXOTAYQKYGBOCFNASZLLBLCJKQZZKOVCOMKUSDNAYRKJPMKMYAQCCLPOTBHBWUIWWZMFVXMGDDZUASIPMHPGGHJBHQEYKIBERGDVNHPVDUEYYQCBHIOHOIEDPUJOWTRHIRW");
    tmp_msg_0.description.assign("BZPXCPUFBXTVJMEQES");
    tmp_msg_0.vnamespace.assign("QHDFGCJFGETAWVFMUMJTZHOSDGYVNZEIEAYBUSSBXJVCJRHYZVMCXRVXKVTCQYVVBSXSTCOBQULGGDLHKWEPRCIXIHPPTKUZHNZMUBKKRDWDWOMRRWADRQSAZNEOJFOIEZBIQDKHQLYIONXUSRXOYFGZFDNJMEUXOFAYLZPPPSWVKJRTBA");
    tmp_msg_0.start_man_id.assign("MIRMGHZBGRXSIOULBYSVKUINRHHBISYPNDEFMAUPOBNWKWVCFVLSJDYNPQGUQMGJGYZALLAUHRIOHDFREUBDRRSTAVJYFEOAHXMCVWMOIWGXCYKZYPOY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JWVBSNCZJNHLQHJUGZRCWYXBUVLPZESJWDZIXTKBSUNOOAQSGCPTFOZIOPBIONJUFWNPXNM");
    tmp_tmp_msg_0_0.dest_man.assign("PXVCSYGDYLADYSUIRCJEWYKRAOSWQIPUKNJJDZQXTQYJJDTOUULMRGECBSVPFCAFUKNEBNJGHXOQUEKMCHYASVGTKOZFQAGJBCWSCNOKZNQMNNPVFOKGIZAJWVBLBUCAZMHMWKPBZTMDEOKRDVHSZJFVITROWLJKFBTUREMEGATPDPHVIHUWPAEALLTXMUSHVIXHORFGRTXPSDFBQZSEZHYTQZILWRNPIIDL");
    tmp_tmp_msg_0_0.conditions.assign("KNZIWCYLQGTQWUQEABEJBPNHQDMEQLRGFAOLDIFNLOZCOAKZWOPRDSHUSTHJVYOLLREVPFVXUGHPZMCMCBYNMOEIJMBPJJSIFWUBWFNLGQBOBALIIUAYMRYXDBVNIKXVTSYNKVSYJMXMTKQAEAPHGHJDOYGRWFVCSDIWKTWFJUPGTCCJQZWXVWCVXSQZXRXQPHHLECAMPFZUGNBLUUXKUOJGDBKOSKDAIIZRTEHZSETFMFEDAZ");
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
    msg.setTimeStamp(0.25480696949783777);
    msg.setSource(51508U);
    msg.setSourceEntity(240U);
    msg.setDestination(51234U);
    msg.setDestinationEntity(137U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FGHJKPEATIBEOPWRASLAVYKCTVMDSIYSHBDRUVBPIAQDYP");
    tmp_msg_0.description.assign("WMWECSSHGHMKLVXTAKPBOHCJYSQSDZUNVIHTJKHJOPPHFNXBIDWICZHGYKENOOPWCIDINJAPOBUFSXCSEHYYFUNWZQZTKBEODFCLMAICQBGWRNRZGNUIWVQVRGGQCPITQMDVOWTXEJBXWLLUUTUIREQLALXKOZSRCDFJYA");
    tmp_msg_0.vnamespace.assign("JWLBQXOOWKXHTCAMHZDVRRHKLYXSIWATHKNMAYMLHVBADWUGBPRXOITDNTIUBJLODEXAHEUHEPYVIIB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TWXXVAISOMYYKGJYCMQEJLEVRUKQZQGWCFMUIYWZNTPCBQKJQESRRWYSOIGVAILUQTCHPQPPBGLLZVOFAJBVKRCFFRNJHWXBPHKJZARIOCTMXURAH");
    tmp_tmp_msg_0_0.value.assign("IFXXCRXEYQMWJKJMWXXNBWJPPSCCDZKVLRQTQKGEJAAUYOLSRUHCNBYGKNSVQDBBUDCHUXRFHTPLT");
    tmp_tmp_msg_0_0.type = 194U;
    tmp_tmp_msg_0_0.access = 98U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OYSRZTNZOOMXCZGCQVCVVAAPWVJEUFLDQGSQFSTUYUEHRPLGZPLSHFGGYWJABAPHGBYGRYKFIPLKZMSQSXTCMMECDUTILHRNFFXETTMMFNRQJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OMVUFTMEJFWSFDKDZHWARBYCQUPUQBIAVISJQHISXGMDFPACEPMCEHJMCGOZLYFNBLDOKFWHKBSAZYTSNXVCUAYNIVLPCVNBJEWLHCBRSWXQZUJDLBRSQVJ");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 32260U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 0U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.216799933458247;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.1748992962152779;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.43526862405131084;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::NavigationReset tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.1896724299229594);
    msg.setSource(61508U);
    msg.setSourceEntity(152U);
    msg.setDestination(42423U);
    msg.setDestinationEntity(246U);
    msg.state = 205U;
    msg.plan_id.assign("YDRDYCOOBSLDKTJYLZUGGQDFIXOGQQHSQFNXEUVGEJCHEPJWCBAVBQTNAZLCMHVYQQPSKNAYRBLKGLOJAFNWJXBFVLDAYHSKSISKUGSRADRUBFFRMZSNKUPHRAUNSFAXMZLAMFTMAOERKZJJZCPEHCWUYQZPHGMRZCDGUIMETUQTVELZGIBGRJMTUZWDWOHEXTIKPONVVYPNHJ");
    msg.comm_level = 66U;

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
    msg.setTimeStamp(0.8736176627095441);
    msg.setSource(51683U);
    msg.setSourceEntity(42U);
    msg.setDestination(50504U);
    msg.setDestinationEntity(85U);
    msg.state = 187U;
    msg.plan_id.assign("QMHHJFAMITNUBPFYMMAQRCTRNONIOYFPIWLGTHKHZDHVZPWSHLQOIWXBBSKJUXLVKAKEEPJRTXGXGWTINOZCYBDGBNRLOUXWIDJDFPWKJIOERKTSBENYMQMJVUNXATGPCPDYBWSPBMLARZAKUXGJEFLJECSDMAQGZAQLTVTUVRZQDF");
    msg.comm_level = 19U;

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
    msg.setTimeStamp(0.05241250480767723);
    msg.setSource(53124U);
    msg.setSourceEntity(35U);
    msg.setDestination(50640U);
    msg.setDestinationEntity(206U);
    msg.state = 35U;
    msg.plan_id.assign("LQEBIONYJSWKGXIIDORZTHHCEHCKFMHRNPXAYRVWTJPEYZADKITFWGKGTDDXDGSZAZPBKQVRAWJHHXCGDHLAROLKXYQGHPXSFTMNNBNHLCPVRBFXWSUYAPKUMRLCEXQBEQNNMINFOS");
    msg.comm_level = 90U;

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
    msg.setTimeStamp(0.9736867083869759);
    msg.setSource(14454U);
    msg.setSourceEntity(23U);
    msg.setDestination(44392U);
    msg.setDestinationEntity(11U);
    msg.type = 80U;
    msg.op = 169U;
    msg.request_id = 42284U;
    msg.plan_id.assign("UJVXMLLMDNVJKYSJVFUZJDGPXJOLCSXBTKDLIAHICHGBOZCPMJWNGOBDYUEKWEUUHXHLSBRNQTMNIEIORRPUUXKFUZLCOXNVYSQXHMNGFNRJNBROTYRDMKKTWKYCHIVGOQJPJWDSKSQBEWFZTXTCYROZIIBPSERHGAQGSIUEKHQUZYASDCOHCGAQAWSWGLTAVWVPLVT");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("IEVTUHTBQFCEAMKVAFKZTMZZGBJBRHIHUZXFUKYWLUSSJVUCIHYQUABNPOAKNMEPRUVQDNMPSRDZQYENQQFCSDIXWWRRELWXANSNLDPZXMQFEGLLCXINDVIATCSICYVMZYTBLDEWXORUTRRKJJWDGOAOJHKVOHDBZUZWMWLWJLXJEGXFAMOGKPLTEDVPTVAVZYFPBQBSQFJTXTMKGLHSQ");
    tmp_msg_0.plan_size = 15017U;
    tmp_msg_0.change_time = 0.31757563315156856;
    tmp_msg_0.change_sid = 43165U;
    tmp_msg_0.change_sname.assign("AGPOXMEHOXWMSMMVSHAYBNBFHKLUWYDPYVVCSUUCBRBNTQACGDVCITOLAIZXQSNJJWBBJMQEGSLUPIGL");
    const char tmp_tmp_msg_0_0[] = {117, 107, 103, -97, -50, -18, -122, -21, -95, 70, -64, 84, -54, -51, -16, 56, 15, -76, -55, -55, 42, 7, -95, -75, -22, 88, 87, -68, -55, -123, 45, 29, 20, -110, -51, -99, 111, 5, 90, -119, -64, -30, 10, 22, 16, 80, 97, -91, -75, 33, 89, -113, 74, 86, -127, 58, 113, -1, 51, 46, -116, 110, 39, 17, 51, -47, -59, -32, -40, -35, 74, -97, -57, 32, -108, 20, -125, 116, 64, 52, 36, -69, 90, 28, 87, -103, -55, 41, -4, -33, 67, -81, -65, 5, 73, 73, -93, 9, -15, -35, -83, 73, 30, -44, 74, -78, 118, -91, 38, -25, -55, -32, 15, 119, -125, 100, 46, -5};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QKWRHDBKTFCNZSOVEPYIXFUXBYRWIYIDNMZAQRJXZAMTIRPUOHQBLGYQYYYJOZMLROIWLIWDBAJFEFPCVKBZNCNJYSHURQKLZCGGQXOHTZOAOKPJGFSEPALKAOHUSCBHXZNABTPFHLVMTAOEDWCSBDHFDEGECTGVBSJPVLGWKSVMXAJCUMXLHWIAQUNZBWSD");

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
    msg.setTimeStamp(0.8730126165822791);
    msg.setSource(33493U);
    msg.setSourceEntity(118U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(205U);
    msg.type = 117U;
    msg.op = 173U;
    msg.request_id = 55208U;
    msg.plan_id.assign("IYIJOFRZUJRZNOHCNWMVXXYORJGVQBKGZXDRYXUNTYTLGIXBTYWHFNBVIVBFZZXNGNAMGUSMDEGLDFTCKNEKIMKSBPEHAWLVZPSRKVWCQAFEWCIJJEFSPAMYKBJQMOOXSOGDMQRKPRSHDUUCLHIBLGUMQPLWYSIO");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.38508383207233576;
    tmp_msg_0.beam_height = 0.7499919560829071;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GWYMWZNHUZUDBESBOUVSRFOSAYAIWODVWMTOGNCCZCCZMOWQZTRRGOZWXHVNQJNUHXPPEBRGNXCYVYEIHSSGBRHWVVUQUEPVJLZIIJKMTNCJFWKMSFHQELKXCMQPWTGPCHLQZQZFAYULVDBYINVUN");

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
    msg.setTimeStamp(0.26396998426361085);
    msg.setSource(29973U);
    msg.setSourceEntity(210U);
    msg.setDestination(49391U);
    msg.setDestinationEntity(96U);
    msg.type = 49U;
    msg.op = 92U;
    msg.request_id = 22723U;
    msg.plan_id.assign("VLOZJCBRYEBDUGWKBMNLDZROQHPZVAUVAVOAMIBTAWMNBRNODFRCKKOLJASGRXINYMJQHOYXAKHZQNMEZAFFTTIPWCFUONTXMJDLCRBXIXHJTBDSOLHKJHBUEDERCUEMGFOVZZIPQRJEQTJXCQKPIHRVKUGLTMFZIFCWHWDSFKGISKPSRBZEWWPDXVTSYYXVUYNY");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 65U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SBDNCSATRYDXSLGPSQPRRVPMRWGZHJTPOXVOGMODDIDQUAVNGZLKAUZBGNQNEVHRGCMKFTIRGWUSBBFUCQDFXUXHYAWLKOXRLDNHVUWBDHLRHFVNTWYLHHOPITTLOLWOJSEIMKVZTIMZPIDQBCEJERPJNKQXYZOJACYWPSCELAXFKAKNKJFYWPCSIJJKZVTFWZNMXUGXKXWLC");

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
    msg.setTimeStamp(0.8764568356718161);
    msg.setSource(6214U);
    msg.setSourceEntity(201U);
    msg.setDestination(63779U);
    msg.setDestinationEntity(234U);
    msg.plan_count = 26287U;
    msg.plan_size = 2151313197U;
    msg.change_time = 0.9608905469933695;
    msg.change_sid = 59654U;
    msg.change_sname.assign("EGOTRAYRWDKMOIVUYUHCUVODWASZPMOGSZABGHDEDKCCTDVO");
    const char tmp_msg_0[] = {-36, -33, -15, -1, -5, -22, -75, 122, -121, -66, -90, 105, -41, 27, 64, -8, 40, 115, -119, -60, -55, -21, 23, -44, 20, -30, 119, -9, -32, -110, 71, 97, 120, -39, 43, -40, 20, -109, -107, -78, -110, 58, 31, 8, 25, 60, -85, -120, 99, 103, -9, 33, 26, -1, -9, 30, 37, 79, -25, 73, -26, -7, -107, -34, -123, 26, -33, -41, -60, -24, 118, 12, -33, -60, -27, 82, 83, 20, -8, 101, 29, -109, -88, -33, -1, 15, -13, 42, -108, -117, -107, 84, 58, 125, 85, 119, 102, -102, -15, 108, -90, 72, 42, -58, -114, 14, 117, 44, -69, -14, 29, -55, 82, 74, 21, 93, 48, 8, 118, 30, -45, 11, -50, 123, 15, 106, -108, 78, -108, 21, -101, 28, 70, -106, -83, -92};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WYRIOZPRQPCGKAAZJGRSKAHPPQMSFRBXJTTTPFOVSCOWOOSNZZFKJVKUKBCJBYIZYIDGZHCFJAQKETFGEXEZDQZFXXARUUUYDILSMTPJEVBDGWLGHHYVLJQJHAKWKQKHWETWHOBNUDNLXYNPTMMNMVXWRMGUSCOXHIEKLANIIBCXVMSUQQCZAPUESGI");
    tmp_msg_1.plan_size = 59530U;
    tmp_msg_1.change_time = 0.8465842035580574;
    tmp_msg_1.change_sid = 4867U;
    tmp_msg_1.change_sname.assign("QYWFURAWUMSSXLTJWBQLMIEIYEEGG");
    const char tmp_tmp_msg_1_0[] = {-69, 16, -19, 96, 25, -51, 95, 22, 28, -104, 56, 16, -27, 2, 88, 29, 29, -48, -35, -41, -32, -62, -45, 64, 34, -93, -5, 77, 25, 17, -119, -110, -116, 121, -106, 104, 80, 90, 46, 35, 52, 107, -114, -11, 0, -35, 5, 48, 37, 124, 22, -47, 23, -73, -115, 50, 85, 59, 69, -113, -89, 58, 36, -120, -79, -6, -122, -94, -33, -89, 36, -39, 104, -50, 1, 8, 26, -19, -58, -121, 23, 123, 69, 31, -102, 54, -37, 29, 54, 14, -103, 21, -43, -99, -8, -10, -92, -50, -117, -25, 52, -59, 62, 122, -121, -60, 72, 42, 49, -100, 120, 63, 110, 46, -66, 50, -62, 48, -95, 77, -106, -123, 68, 61, -91, -128, 25, 103, -7, -43, 110, -104, -115, -77, 98, 57, 86, 88, 70, 1, -92, 58, -50, -73, 125, -15, 60, -32, -86, 105, -91, 113, -60, 51, 55, 31, -26, -55, -65, 44, -126, 89, -112, 42, -105, -21, -82, -13, 54, 17, -25, -118, 25, -24, 77, -99, -25, -12, 120, -35, 121, 32, -3, 31, -46, -69, -1, -7, 87, -57, 48, 99, -44, 45, -89, -56, -101, -121, -6, -51, 43, 88, -77, 70, 73, -58, 74, -77, -81, 109, 35, -77, 100, 99, -91, -38, 102, -108, 42, 5, -25, 27, 107, -56, -10, 21, 90, -51, 30, -92, -117, -10, -8, -95, 83};
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
    msg.setTimeStamp(0.6580008037645787);
    msg.setSource(35799U);
    msg.setSourceEntity(173U);
    msg.setDestination(51893U);
    msg.setDestinationEntity(5U);
    msg.plan_count = 5828U;
    msg.plan_size = 3848806779U;
    msg.change_time = 0.5591070557695289;
    msg.change_sid = 40236U;
    msg.change_sname.assign("XYUOARGRMZUUNZDKHCASIZDFXCNPZJUPKLBBIGLYFXWFOQDBHFKPBPEMZLEOIPHKRMWWFYNZGRBSQKPUVJZMUKLJCDHSAWDBHOOGTCATHCZVXVQRWIERCUOGAEJYMRISSXEHXVWVINKEPOJFQJCTVZXSAHNLXLOMNAUYOSTEGNDMMLBFAHRWWLWLTSPJTQIEPYPAYANFCQSLQRRVYTQEIGBZJKKSMUXONEGJUV");
    const char tmp_msg_0[] = {-29, -8, -2, -56, 83, -102, -121, 21, -74, -52, -63, 22, 52, 122};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MTZZMEDADUSEAVCLH");
    tmp_msg_1.plan_size = 61286U;
    tmp_msg_1.change_time = 0.9150639890440816;
    tmp_msg_1.change_sid = 1163U;
    tmp_msg_1.change_sname.assign("JNMTJNYQDDXFQHLUHFONMZLLSPTQYZMWDEXFTTAJUYCIEGYLUMAAYIOWKYXTNMXBCHSGGPUEZRCAHNGVXGLSZAEAQFOLCLDECPOHBUWODHPBZWTBUYCYIKHDNGAVCMDGSFFXBQZQCDVYBAIRUBMEEIP");
    const char tmp_tmp_msg_1_0[] = {-79, 89, 110, -16, -118, 53, 45, 122, -109, -45, 43, 88, -46, -11, -28, 31, -9, -44, 24, 120, -93, -3, 112, -122, 125, 36, 70, 36, 102, -42, -47, -69, 76, -44, 125, -84, -119, 70, -68, 122, -87, 95, -88, 71, -26, 45, 97, 10, -54, 52, -25, 124, -9, 70, -124, 30, -85, 40, -45, 25, 93, -38, -41, 119, -110, -11, -81, -91, -37, -77, -85, -31, 23, -100, -15, -86, 67, 14, 69, 118, 111, 4, 63, 53, 2, 56, 44, -126, 90, -121, -70, 9, 104, 29, 68, 122, -40, -88, -86, -57, -105, 104, 14, 84, -86, -112, 58, 67, -28, 70, 11, 108, -106, -119, -60, -3, -116, 73, 38, 80, -41, 82, 77, -127, 43, -6, -82, 35, -45, 43, -69, -100, 21, -56, 28, -17, 86, 37, 124, 36, 120, -33, 114, 110};
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
    msg.setTimeStamp(0.5496670829149211);
    msg.setSource(61970U);
    msg.setSourceEntity(243U);
    msg.setDestination(12945U);
    msg.setDestinationEntity(194U);
    msg.plan_count = 16707U;
    msg.plan_size = 958884679U;
    msg.change_time = 0.3459574415767145;
    msg.change_sid = 54612U;
    msg.change_sname.assign("NIJARDURHWQJJSUCHBECIMHWYXUIATPIJLMTRZQMJYSZIBLNPLNERPDEEKZJWSDMXFDXOXYKNFDKRECPITJFQFHMNUQUYKCXNOZFMFZLZEVRXFVMYPOWTRCZWVRGGUAOPBIBGMSBKRUBNAVXWQBAENTAHDHSOOWCEUQLVLGFCXZHVJQKDCYVSAIKLPLOWEQMGPHXLATAPFTHOVKUMJWQGFDKBITSYTNVPTZXHJILYUSWASYNEGGGDC");
    const char tmp_msg_0[] = {-76, -39, 27, 74, -30, 120, -15, -127, -55, 34, 6, -41, -120, 69, -12, 47, 101, -14, 48, -56, 31, 43, -84, -114, 37, 105, 1, -60, -127, 38, -104, 9, 23, 46, -28, 40, 33, 67, 52, 2, -34, -119, 19, 24, 107, 7, -62, -51, -100, -76, -62, 85, -109, -94, 103, -31, -19, -123, -81, -74, 95, 50, 8, -3, 43, -81, -46, -32, -59, 17, 97, -12, -91, -121, 28, 76, 64, -80, -93, 37, -107, 64, -66, -88, -81, -27, 103, -123, -110, -109, 21, -29, -50, -7, -68, -68, 107, 65, 69, -122, -63, -90, 58, -18, -15, -98, -63, 21, -3, -61, -3, 105, 111, -35, 30};
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
    msg.setTimeStamp(0.9523200619623068);
    msg.setSource(50152U);
    msg.setSourceEntity(143U);
    msg.setDestination(44113U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("PGXZKLXSSXEOPQUSQGRMRCAEAQXYDMIWPJREJUYEOTSOOAIFMVUKFUXBGVPDNNALCOYTKDJFSQEZCGLCMEBGFVXTAHEYLPTVZLACMHRJUIYBNCXQWBIGTRMAPZHVEZIWZVGGLCYRJFBKXUI");
    msg.plan_size = 10828U;
    msg.change_time = 0.49856164688111804;
    msg.change_sid = 47196U;
    msg.change_sname.assign("JCENLEEPQWBMTTPCKYMMYKXCBTIGTLNJGWODZQWSAOLJXKGXNSAVCTXNCQIHHKHBWRBFM");
    const char tmp_msg_0[] = {96, -38, -50, -22, -34, 7, 59, 35, -29, 96, -120, -104, -117, -123, 98, -71, -31, -121, -121, 88, 76, -88, -61, 97, 93, 94, -14, -72, -37, -8, -81, 20, -37, -88, 71, 96, -13, -89, -42, 125, 33, 89, -7, 54, 56, -45, -127, -78, -73, 78, -22, -106, -83, -123, -16, -101, -12, 61, -105, 124, 34, 68, -122, -79, 67, 39, 59, 56, 57, 101, 4, 121, -45, 68, 47, -47, -61, -31, 109, 58, 112, -42, -2, -28, -125};
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
    msg.setTimeStamp(0.2890635059480011);
    msg.setSource(11560U);
    msg.setSourceEntity(146U);
    msg.setDestination(44563U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("LIBLVWLXTNTLQTUWQDEIAJOSMEFGTGNXKQJACDFUPWQYVSXRJATMOADBJMMXFPQAWFOWMTXCLVAXCOLPSHLYLZHDCYZRBGLJKFVJRTGZQCDRTSHZIVJPWRSKTZYGOOHCIBKS");
    msg.plan_size = 39253U;
    msg.change_time = 0.30882725982739634;
    msg.change_sid = 49098U;
    msg.change_sname.assign("UMFEHBGXSPDVWHVRBAYAZ");
    const char tmp_msg_0[] = {61, 46, -125, 120, -108, 23, -8, -104, 20, 25, 96, 84, -88, 44, 5, -81, 37, -24, 115, -97, -107, -116, 45, -46, -21, 82, 94, 24, -121, 65, 115, -20, -19, -24, 53, 109, -124, -33, 62, -2, -122, 64, 7, 119, 49, 75, -65, -56, 36, 7, -61, 75, 8, 70, 64, 119, 55, -52, -93, 49, -66, -55, -110, -116, 4, 34, 7, -106, 2, 87, -11, 60, 57, 124, -81, 51, 77, -53, 84, 41, -120, 69, 25, -104, 71, 97, 106, -69, -78, 19, -74, -23, 61, -35, -123, 54, 118, -37, -3, 36, -12, 4, 36, -74, 117, 20, 60, 50, -126, 91, 81, 95, -76, -3, 68, 69, 28, -49, 49, 79, -95, 55, 29, -105, -12, 61, -30, 51, 26, 74, -3, -127, 83, 120, 43, 40, 50, 60, -34, -115, -115, -84, -1, -108, -3, -10, -88, -111, -99, -97, 31, 46};
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
    msg.setTimeStamp(0.8080756476351517);
    msg.setSource(35876U);
    msg.setSourceEntity(206U);
    msg.setDestination(24323U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("QZVLEMAIKFOZOEVFXYXCRQJPHJZCIPKDUVAOTHAQMYQAQHZPTXCSDTXDGQYLXHVZGKWHMTUBENBPHYRWOISXFIPBIUOQFSLRUAHVYXNMEFSPSMLYBACSSODTNCOJNHEJNVIBLSFWYRLMFKGG");
    msg.plan_size = 36559U;
    msg.change_time = 0.4975412687465878;
    msg.change_sid = 51456U;
    msg.change_sname.assign("OEXLDCIYPNUGMCLGDIFNEEFNBYQCLWIDMHAIMHPLISHTBLNVCXCPYTFOFUKVHNKZGAYBWXZZBJHZADJMUOJQRTVUECAWVHVBUHFKET");
    const char tmp_msg_0[] = {25, -44, 57, -11, 12, -25, 99, 121, 114, 35, -61, 15, 57, -116, 67, 85, 85, -16, -78, -9, -97, 40, 79, -57, 15, 109, 80, -91, -18, 78, 114, 31, 86, 57, -36, -40, -98, 22, 66, 3, -14, 97, 89, -30, 79, -115, -57, 62, -71, 89, -6, 51, -21, -50, 35, -57, 105, 89, 61, -47, 28, 54, -17, 51, -124, -7, -8, 30, -67, -4, 22, 47, -8, -24, 99, 23, -25, -98, -84, -62, 61, 13, 33, -9, -48, 13, 33, 43, 125, -27, 62, 35, -118, 99, -124, 109, -4, 31, -121, 103, 28, -102, 75, 98, 6, -47, 78, 124, 58, -89, -49, -110, 38, 115, -126, 78, 117, 77, -50, 118, -105, 56, 31, -31, 97, 44, 124, 81, -30, 110, -45, -63, -93, 49, 38, -19, -100, -77, -45, -79, 125, -57, -23, 81, 95, 93, -68, 37, 40, -105, -67, 94, -124, 27, 65, -85, -21, -1, -5, 6, 70, -13, 32, -23, 17, 52, -118, -93, -78, 95, -109};
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
    msg.setTimeStamp(0.4092818999417396);
    msg.setSource(37508U);
    msg.setSourceEntity(185U);
    msg.setDestination(7384U);
    msg.setDestinationEntity(205U);
    msg.type = 206U;
    msg.op = 148U;
    msg.request_id = 50592U;
    msg.plan_id.assign("DXQVFLJCJZWACCKODEWPWMUHHVNCURZZYWMKIWBUNDNXGKWGMLXOOKRITQRFESLMZKLQCOSXEPPITYNPQRHESFVLLTFUIUXFANLCFBGXSVAGDLZSSUQYTQEYDBEHKLVGWLPXQIZVRMDMABBMTCWE");
    msg.flags = 45598U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 39U;
    tmp_msg_0.zoom = 95U;
    tmp_msg_0.action = 35U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWHDJPVIOADDKQTUBAVMSFLXCEMYINULWGRXAYROUSBITWUHNQQCWRUTFTQUPQDWHSXFFQZMYEGHHRSVAZMBUSPOAZSVEGMYP");

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
    msg.setTimeStamp(0.013803177011020518);
    msg.setSource(33468U);
    msg.setSourceEntity(4U);
    msg.setDestination(54126U);
    msg.setDestinationEntity(69U);
    msg.type = 134U;
    msg.op = 22U;
    msg.request_id = 18145U;
    msg.plan_id.assign("FMLCMGMQIYBEFDGZPBJJHAWSHUFFPQZCVJBJTKLMOIAXDUXKQXRTYHGOUZLQDJQLYEOXYSTZLPPREUAEASMWFJQOXCJZYNBVLXSM");
    msg.flags = 25796U;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 130U;
    tmp_msg_0.step_number = 222U;
    tmp_msg_0.step.assign("ZVZDJIDFGYZKSXKBPEWAIHNAQVQVHSBXCPUWAHNOTAZCEEGMGXJTDFAHSVWVPC");
    tmp_msg_0.flags = 174U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GWIFUROPUWDYMICPGSCAALGKOBDURYVQOPUDEMYOKZOKBFKBISQCZGJABVNKBLOCTFHZWPCMEXRHGJIG");

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
    msg.setTimeStamp(0.796738176701428);
    msg.setSource(22266U);
    msg.setSourceEntity(47U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(105U);
    msg.type = 242U;
    msg.op = 186U;
    msg.request_id = 35673U;
    msg.plan_id.assign("PGETXDEQNPBJTKODPYFNJHNRGYZNDBHOLUDXFVFVSDNWFWMGQOVFFMWLCOEYCKOXZUXBMMYQNKSDMMFYFPUWECHPEVHPXBCAEGAVFEPLYJWTMFBSHAJCSQXRCXTZKHRGPWAYVHAOXBLDIBLJWJHWIZVORYCNRUACRLADKIZSGOSCSKUTUNMIQZJRKQEOEZDSILIJZGKATPVWMAINCLNJRU");
    msg.flags = 56279U;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7116431780148345;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RBBISPBLQNLXJIAHNRHZZBNFJSGVFXKWTKSWTEBMRCCQKXNBWTUFDOAUFBQKXUTMGUQWHORPXCSRIZOEXZCXOWWGLQJZDUJPSRCJHDLMGRZHEPDUNDVAMVMYZBOKIKFTADIMEOCHFJVPUGYLPSGRKXAZYNADIYWJETKVRGFPIOCONHPXCNOIFVNTPZWZAPYSQKWLGQKCTEJASLVIHDEYVVMYT");

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
    msg.setTimeStamp(0.6996939375551486);
    msg.setSource(49408U);
    msg.setSourceEntity(110U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(70U);
    msg.state = 27U;
    msg.plan_id.assign("DJFULWZZZQQWKBLWZVXSCCDQUUYRJVJFTFKAK");
    msg.plan_eta = -490505720;
    msg.plan_progress = 0.8789077417934136;
    msg.man_id.assign("LFYMBTIMEDLLIJULPHKLJAPMTRWNVYTYWBWDHOMJCJKJXAFLEVWAZJCKUOKCWPFIYICUGZYVYGESBTRHXUFONDDPQOKOPXFNNINVDFMQEKHHZCZKXAWZLIBMVSAZHQFGNQCMGHAYOXWQGRUZWEVXIKTINYNVCAEVCSHZGEETSPBRQET");
    msg.man_type = 60580U;
    msg.man_eta = 24619262;
    msg.last_outcome = 250U;

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
    msg.setTimeStamp(0.5585808510121214);
    msg.setSource(22647U);
    msg.setSourceEntity(204U);
    msg.setDestination(18889U);
    msg.setDestinationEntity(22U);
    msg.state = 141U;
    msg.plan_id.assign("PYZZNMBGNNEEKCVVQLZHLRCTNYGKMPWEURXVPHKMZVARVQOHLADSKTCIIWXGFXNVWOSSBBLPAOLFBEJEQDSIXUOXFJSNIFQFECJKIPBZJSDMDABGWVTXJPNRHHZBUDZKFTZZYBEWLMIOIVWECYSDOCPUUADMFHSAQAPOLSJLKJHGGREXTGTTMNRYYJWICRKMFXHHQCXCTQRUPUYJOIKDAMXNGLDBQIQDAGSFVFTWKVTNQ");
    msg.plan_eta = 1147994001;
    msg.plan_progress = 0.1405838050251642;
    msg.man_id.assign("AJYCVKROOWVAMSFMMGFHTPPZQETSGQBTDUKETGA");
    msg.man_type = 7185U;
    msg.man_eta = -1024968074;
    msg.last_outcome = 7U;

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
    msg.setTimeStamp(0.010363868695103307);
    msg.setSource(377U);
    msg.setSourceEntity(96U);
    msg.setDestination(39636U);
    msg.setDestinationEntity(149U);
    msg.state = 130U;
    msg.plan_id.assign("HALSGIWLUOWVZJHWAVYTBXEWCTYZCTBGJIMGMQUJHSUUBGQONAXKXJDPQKHQAJRRDHDLBFFSWZJPDNJZFKHXSOKKOMVDESKTTTEHCOZZAZDLFLRRFEZVQOIVG");
    msg.plan_eta = 1063791241;
    msg.plan_progress = 0.33620646078664185;
    msg.man_id.assign("FUBZOMPDRZSOMQAYQQDZNJKQPLYFZ");
    msg.man_type = 57076U;
    msg.man_eta = 229763584;
    msg.last_outcome = 51U;

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
    msg.setTimeStamp(0.2072176705032105);
    msg.setSource(5916U);
    msg.setSourceEntity(123U);
    msg.setDestination(34166U);
    msg.setDestinationEntity(248U);
    msg.name.assign("UFKACRYWBZQLZYPFOEFSDKGLVEOINKDRGFAMDRYRHADOSWKEXBFJXFWNEBJWBENOYAUYPYXNQQMXITTTGLHJASCFEJUQXLCNBKKGGVHNMOS");
    msg.value.assign("HAPYLIORKOBDGDMVBCGCVJZVWOLCCAHUSXEFGQKWOXZKJBYBCJFLKINXCABKZDFRFEGWZMKVQKVQXGVQTXTMJXUFAIUIGHMGRTNOHJFLHSDEAUQVYHMZNTMTHRJDVFZ");
    msg.type = 180U;
    msg.access = 128U;

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
    msg.setTimeStamp(0.06692166159432689);
    msg.setSource(27917U);
    msg.setSourceEntity(242U);
    msg.setDestination(4551U);
    msg.setDestinationEntity(129U);
    msg.name.assign("EXPSGFTYDGHMZCGSTMUNVRFUDVSDHWNZKXFEQGBTDLJEAOCIKBBNOHPTXRUEPCEXRUNSMVCQXJIJQULRVADLGHBCZNMOIQBZDKVHRWJPIJNSTXEQFZZQWKNELBJVBLNFRHAQUMOAEFBCYLHAYMRTGBSMOLTMLJXIKYNGYPGFNFITVRODZRMTWDOAPWLODFRKYWKQZFCALETVUOCJWJUKOKUCIPEXA");
    msg.value.assign("UNDOBLJANMRDBLKWDSWZWLBVEJKZXAFOKSBVFDFRTXJJHUSYMYOGQSURROGTDO");
    msg.type = 54U;
    msg.access = 159U;

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
    msg.setTimeStamp(0.13216356833911358);
    msg.setSource(43667U);
    msg.setSourceEntity(150U);
    msg.setDestination(25331U);
    msg.setDestinationEntity(94U);
    msg.name.assign("BJESTDTVWUJDCYOULEVM");
    msg.value.assign("UVMBFUZPZSFEROTIWXEJXICBMYKDWDCRBCICTJPRFWNQBDIBQEHAJHHNCUFRWFUHURAGZVFQAILVVDLTZTMYXOWMYGUBRIKABUZJLASTXFTRDGQJGRGWJYRLVPTKPAJKZSGKSJLWUKYQPDJXFAOMLNNEXHQZDSWVPGDEVFVLVOYEF");
    msg.type = 197U;
    msg.access = 152U;

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
    msg.setTimeStamp(0.709953750452795);
    msg.setSource(24836U);
    msg.setSourceEntity(76U);
    msg.setDestination(2724U);
    msg.setDestinationEntity(144U);
    msg.cmd = 105U;
    msg.op = 225U;
    msg.plan_id.assign("WHUFQNQXEYXSVCOBHFJIPBMSSMYFMQSLRGGXCAOTWRFOAWJTNUDFAPTPBZWVCSVNDXMFFYIUHJLBHELHIQFJNZZPILQHAVNBGG");
    msg.params.assign("PEHQLPFFCSVBOVIDKGURNNBRYAQPSQISMWHPDIJESXLOMMKTVOVJOLLXUXWBZGUMKFZMYIFTKYGAIADJFOHDWZAKNJAVFOXSBERZVCBAJZJULDCENGCPIWKLDWMXYKTYRBAOGGDSABWTNWNZWHBNHRESMUCMPFZDQPVLUENPKGJIFOLBUNZRLZURPEDQEXIYXXEYCCIOJGQRQTQKIHKTQHMJYVXYRTJTFCTPSDCECGUMHYHSVSVAWOUT");

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
    msg.setTimeStamp(0.8733981599841611);
    msg.setSource(38986U);
    msg.setSourceEntity(218U);
    msg.setDestination(16012U);
    msg.setDestinationEntity(204U);
    msg.cmd = 111U;
    msg.op = 190U;
    msg.plan_id.assign("NSLKGDCBTHCYMBFXSTVORDTZJTURUWYYGIWNTTMLUQHMJIKEMHPDUEUQAQJSQEUUCKOZUYC");
    msg.params.assign("HUTYYKNMNVVCWLIQDWBJGXEEICXNKTWRICDHFPIFBSUKKFLZXLAOYFAZZOLXGOGNTKIJBGOTXYOPWJQJHJIMRBNBYHEHACVJKTQLJSZSIQESDTDKJDJRRMRVFYJOOCVHPNMDGLMKLAQEWDSRMXCGGSMARPPWTSOAYKVEZDHPYQO");

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
    msg.setTimeStamp(0.03806400624238837);
    msg.setSource(62897U);
    msg.setSourceEntity(121U);
    msg.setDestination(56102U);
    msg.setDestinationEntity(61U);
    msg.cmd = 209U;
    msg.op = 219U;
    msg.plan_id.assign("STQOFBEBJSEOXDFUONXUYCOMSZTMANGBYZZPAX");
    msg.params.assign("LGEAYRIOCTMGRAYPUVCONGEREAMWKDJKSRZLMKOOSUSPJEESVPBWHUZUNZXOUYVBWWZABFIXXBMZPFQYVXFVGPCTXFBGHPZKKWRJWXCADMONDQDFQIBYBAVNEROXF");

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
    msg.setTimeStamp(0.8307326950157295);
    msg.setSource(17581U);
    msg.setSourceEntity(162U);
    msg.setDestination(16277U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.1199053996240601;
    msg.lon = 0.2585412858576698;
    msg.depth = 0.003331203115790715;
    msg.roll = 0.6846885685446318;
    msg.pitch = 0.4648547096590576;
    msg.yaw = 0.31063701267210786;
    msg.rcp_time = 0.4223488339265088;
    msg.sid.assign("ELCVXZTRBRGINYVJGHAOCEXCGBOHKXEIRVMDMYJDMNKFOCJDWVGLKQFROHNJGXHYIKLDPUVVBSYPPAIADNKNRWMEZWQPMLFVDODXWBSNAZIBFALJZJKXJEBHYEJLNHJBVREGNMEOSTUSUGLAURTUFIXOPJEBWTCGMTTFYQYLCIXRVCNNYBWZFUXUHKZQSPAIVFQZ");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.29108402712379866);
    msg.setSource(39333U);
    msg.setSourceEntity(230U);
    msg.setDestination(55499U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.872503076423707;
    msg.lon = 0.7988879182465422;
    msg.depth = 0.8670233193762088;
    msg.roll = 0.3593770549615499;
    msg.pitch = 0.20249658654901725;
    msg.yaw = 0.9879416755366326;
    msg.rcp_time = 0.5637550598490986;
    msg.sid.assign("JKHXZLMVDFETYDGXNQALH");
    msg.s_type = 38U;

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
    msg.setTimeStamp(0.5531441607641859);
    msg.setSource(23352U);
    msg.setSourceEntity(115U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.8680717070113964;
    msg.lon = 0.012323821708995042;
    msg.depth = 0.1459767318353805;
    msg.roll = 0.1495973848126405;
    msg.pitch = 0.01854999872115337;
    msg.yaw = 0.105234254379865;
    msg.rcp_time = 0.1207342794704287;
    msg.sid.assign("BYWGXJKFTMOQYVTQGVHSVHYZGXASKTJUILSPAKEUOGOEHTSAKZZAKLAFPWLHTQXEHAMLIHGIVUNZWTLQLSRFJKJCCRYRIMJRFBGXABDBUXYOYIDZGYNSZGBYCLNMINOWOXEKWVKHOVXWFPOQVUBUQCCPJSUFWTANRTKQDGJDPMHSVFWDNDCLVEPENFVCXMNMMSZPWUTADYXZRACOUICFSZBFHEBRNYBDDPXJLEQTGI");
    msg.s_type = 141U;

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
    msg.setTimeStamp(0.3962325956547855);
    msg.setSource(63890U);
    msg.setSourceEntity(157U);
    msg.setDestination(35454U);
    msg.setDestinationEntity(92U);
    msg.id.assign("ESJJOOSENZNKMFHWLCKCBYARGGBECFACSVLXEOOHODLEUSVJXNFIDIJSUBNLWDDMPQHPQCYZRYDINXANNJTKOE");
    msg.sensor_class.assign("PGCQJIKTHCRDLKNCXGIMRAUSTMYZZFHIXUNQXOWGMUKZDTGLTEYHTEEAGNARSAPQUEYKVZGDUVUFSHSPBG");
    msg.lat = 0.1293623540537292;
    msg.lon = 0.507605425892176;
    msg.alt = 0.8277098691771084;
    msg.heading = 0.7162049387818153;
    msg.data.assign("CUQGXUSQSJFOSAGTCMVXROVHPEAAPWJABMBYQYBIVZOIOYHPLOCCHAIBFGKJVTNLIDENZXXUWZBAWTNKFYQVZCDFKUWUZQMKHPCTPVBZHKATABYPFFODJHEHIYUXZYPARWVKDUHJNCDDPILGQRFQOOBDDKREPXLREXRENJSNECCLWRUFIDJNGZTJIM");

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
    msg.setTimeStamp(0.13173677603791978);
    msg.setSource(55413U);
    msg.setSourceEntity(53U);
    msg.setDestination(45337U);
    msg.setDestinationEntity(49U);
    msg.id.assign("XYKNBRDEYKTOANVBJKBSAWIIEBXFGVVVYCUTEBOXPHWBJDHYNOERAFZTLPOFRUPRCVQPECRLTNLIQZASKPDSCDIUANUSQHCHPOLJBXXDRTKJDFZUEFSQF");
    msg.sensor_class.assign("MATCUGHGXUBKMFONQIKEJJQSBRSYFDNHRNHRPPUVKEDULJJIBQLREZEFBDQIGSTWQSRZVUZIPE");
    msg.lat = 0.39065457885016064;
    msg.lon = 0.7461568690453791;
    msg.alt = 0.2717759620329744;
    msg.heading = 0.34766343579845627;
    msg.data.assign("CESADXQMDJTPXEELLKBNSMSQAJPQPSUTJGYHVVMPVOSAUMETBEHSUHZWQOSFMODXHNMRJOIRBWQKAVEMOLRRRCZPRAKNZABBVBTHJYPSWLIWFYNQKGIBXFAVYENXGYQTDRYXOCFHZMWYTENJZGNWADCLXHDNFLWUJKUZZTIFSYEIBBQPPLIDYOZCOPVUIKOLFAOHKDFTQDIEUVXJT");

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
    msg.setTimeStamp(0.10091117811817452);
    msg.setSource(1055U);
    msg.setSourceEntity(153U);
    msg.setDestination(32355U);
    msg.setDestinationEntity(92U);
    msg.id.assign("CWXBPQBRNNHGONWRFIWQSDAQWNODBKJFCTTOKLUYIDJPQRCGUCNMTZYJKDDLVCHHPELVERJXAVUTLEYIWDVVPEXNOFRMCJMIZEMMIRYIAODTNORFGKSHCFGFGXFBMLAZPUXCJOZUULSEWVASWXMBUQRIEASKOPNHEJICINXBAQLTMQSGKZXWBLFQZAJTSZDPOYHTVTYZHPRBSUKQYHVXISVGGBHAZWQYKMRUFAXDTFMVKEHULJYZSLWOE");
    msg.sensor_class.assign("MKEKVIUVFHDNJMLJZKUHWTQTNL");
    msg.lat = 0.12661157883384833;
    msg.lon = 0.8769933656583115;
    msg.alt = 0.11174878308800884;
    msg.heading = 0.9786737150635286;
    msg.data.assign("JGDAVVVSOOZDHWVXFCFJWRGARYYPMTAEIIBGUPJKQGVNAFRJHYPWXUNTRZCEFEWUDBPZFSWLGEPNQZDXCWCQTSLSTNLOMWVBCEAHKELKNOUBMBQGYGDWIQNUHGRNURQTBCXYMKQCQJEGVXZOKYVMUUYSKRKPFMASRZOJYNIZZSWEALILHLWGYOXPTUOICELHOKVNDTJCRXASNYXCTBTMQZJIZJHPXDHBJBXUOFMKHFTDIL");

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
    msg.setTimeStamp(0.5870616779547363);
    msg.setSource(46720U);
    msg.setSourceEntity(122U);
    msg.setDestination(40627U);
    msg.setDestinationEntity(97U);
    msg.id.assign("UNIHREVGLRTEHCZFPZBTWJODMZUZZEYQSKZFONNTGOLYSGVRJPBYYGCZEWWUVXQMYORAWAEOHFKSZWDNKEAPVVEFQLYNIXPXWTARJIVJHYRKGDDSIDGWRTSHHEAXYINBJFKFKOMXCOBRY");

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
    msg.setTimeStamp(0.9250668528897017);
    msg.setSource(35140U);
    msg.setSourceEntity(72U);
    msg.setDestination(41114U);
    msg.setDestinationEntity(49U);
    msg.id.assign("IHYHKCLXXNFHLSEGWYHMSLAEYAAOFQOMKKJZQZPGZYYPQXWOTAGBZNMRJMMTYBKFXFGIRQZXQLANDJDOTXIMTCKEBNVXYVDYETEZHLMTSPVCCUKCXIBJVZDBFRIBFAMUJORSWSHAUPBALOBCENLSSQJDBKOTWXRVCDSUAOGNCRCTDUGDVWTFGEISHHPWFZWJRZQEMJPCRJHQIVWG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EEKFXDHRKDSQNDBOKBMWLZHIQZOZOCPYWVMAKTD");
    tmp_msg_0.feature_type = 70U;
    tmp_msg_0.rgb_red = 136U;
    tmp_msg_0.rgb_green = 73U;
    tmp_msg_0.rgb_blue = 235U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3629936247378126;
    tmp_tmp_msg_0_0.lon = 0.4179172179207954;
    tmp_tmp_msg_0_0.alt = 0.18726358926402276;
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
    msg.setTimeStamp(0.5872263671976224);
    msg.setSource(24278U);
    msg.setSourceEntity(24U);
    msg.setDestination(59750U);
    msg.setDestinationEntity(169U);
    msg.id.assign("RESAREQXNTJKNRBXPQNBXXOXWTDLANPHFXMOE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CZIQNFACNGRJMFEWDKKZJLTZZWHMTUYAVQFVSXXVEMKJFGMAQIRFSJANMOPSDKTIYDBBJBUSEYGWCOJXOVMTOVEICNXBYGQPXWUXPAKDWCHCPLRYOJDEIYMBYOTSSQHPDWFOWUSETHFVVKPIQSFJEOELTHHBISLANMBNCQOUENHGVJDOKDLULNAIUEHQTZRWKQKLVJPLDULWYGACCZ");
    tmp_msg_0.feature_type = 100U;
    tmp_msg_0.rgb_red = 10U;
    tmp_msg_0.rgb_green = 189U;
    tmp_msg_0.rgb_blue = 231U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.013015100399356938;
    tmp_tmp_msg_0_0.lon = 0.33743519321271964;
    tmp_tmp_msg_0_0.alt = 0.538750367927889;
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
    msg.setTimeStamp(0.6365835773416463);
    msg.setSource(5393U);
    msg.setSourceEntity(3U);
    msg.setDestination(42224U);
    msg.setDestinationEntity(76U);
    msg.id.assign("UXGXYJWYGBYMGEUJHDSTVYICMNECVNCHFAQSPACWLVITLWPDQHZELMBIJHHBWDJOQTGNPVNNFCSDPNMDMXBWLPIKHKTKSGRLMETOGZRJJUJQZFXSESZGFHSROKVOYEACQCFEUWHKKTALWXOYBMFBAXZDEZCRKFEUKTBNOXKFUBXWIXDCBFPALMZVBZORJVCIZP");
    msg.feature_type = 88U;
    msg.rgb_red = 2U;
    msg.rgb_green = 44U;
    msg.rgb_blue = 58U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4157937054539239;
    tmp_msg_0.lon = 0.19773897479738245;
    tmp_msg_0.alt = 0.13571300218302773;
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
    msg.setTimeStamp(0.7461578563369461);
    msg.setSource(23574U);
    msg.setSourceEntity(110U);
    msg.setDestination(27685U);
    msg.setDestinationEntity(194U);
    msg.id.assign("THUFTYXGVTILGPWRBUJXQZGUIWVOCITMZRJPJHPNWEXKLSKXWPRUWAKEVNYWREBPHGBMOBMHDPZYZUSTKVFSINYAJQDKAOZKHVAZJUSITMESSMGDQUZKXNZRYWWERZFTCGINWLLDKHCVL");
    msg.feature_type = 14U;
    msg.rgb_red = 48U;
    msg.rgb_green = 204U;
    msg.rgb_blue = 160U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8074859685274788;
    tmp_msg_0.lon = 0.8150802812769491;
    tmp_msg_0.alt = 0.19622214716522457;
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
    msg.setTimeStamp(0.9028941304911132);
    msg.setSource(14446U);
    msg.setSourceEntity(188U);
    msg.setDestination(8200U);
    msg.setDestinationEntity(131U);
    msg.id.assign("KMWCUOLLSOYZWUCDZSOADARJUQUMYFQQODRLOKTARKENZARFVMVCZOWHBYNTTQTEUPVTXPXWYDTXKCWSQEVRQHSBGGXLFJJXRVSMLZSBVUWBKYZLJNVJJCAINODFVDPTSBQXIELWPPCCVYFIHWQGYSFHHGMZAMPRZFJZNCGUXJGX");
    msg.feature_type = 188U;
    msg.rgb_red = 198U;
    msg.rgb_green = 192U;
    msg.rgb_blue = 73U;

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
    msg.setTimeStamp(0.8084852735266277);
    msg.setSource(2322U);
    msg.setSourceEntity(108U);
    msg.setDestination(53553U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.3786617601269945;
    msg.lon = 0.19713198523182218;
    msg.alt = 0.9640664667831026;

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
    msg.setTimeStamp(0.8729070372112363);
    msg.setSource(38902U);
    msg.setSourceEntity(14U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.633279163704702;
    msg.lon = 0.8645107932247731;
    msg.alt = 0.7691279755160315;

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
    msg.setTimeStamp(0.5130818522249183);
    msg.setSource(1746U);
    msg.setSourceEntity(146U);
    msg.setDestination(24438U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.05550480646679501;
    msg.lon = 0.8558136027314738;
    msg.alt = 0.42315533366804037;

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
    msg.setTimeStamp(0.3900004879695327);
    msg.setSource(30008U);
    msg.setSourceEntity(247U);
    msg.setDestination(55754U);
    msg.setDestinationEntity(179U);
    msg.type = 108U;
    msg.id.assign("MJSJQWRMBFHGV");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.16215325735813357);
    msg.setSource(46023U);
    msg.setSourceEntity(133U);
    msg.setDestination(65318U);
    msg.setDestinationEntity(99U);
    msg.type = 88U;
    msg.id.assign("VHQTQENWYEDXYOBPEMFJPXUVMYWKKVCEMELDBBBQEKPRQCCIZGVXTRIKTPLCWGRXHJRWOXETZDDCIUWLEBRPGIGYAJJVVZISNTNFMNFZKQWLXSVCBZMFDMJCBXAQDZAHMIOJHTYOSSCCAUUKZMRAFSYOMOPPINJJUUZLOAPOXTYIRWSDTQFSCTKVU");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.9475075036694454);
    msg.setSource(24762U);
    msg.setSourceEntity(68U);
    msg.setDestination(33451U);
    msg.setDestinationEntity(64U);
    msg.type = 195U;
    msg.id.assign("LWMTKUFOMSIESPQCIYZDOYZVKZRFMTGCJNIEBJULJNFFABFZXXJRUVNRPTDJEMGLSZWGLMXSNUOTUIXZWJSEFBDENRVRQGVPQOHTKDXFYOOSHLDFEKIRHTUJMAZCTWYIYCGQPZQSAQABVWSEJVPKIMLYXHDMNIHKNYVXEWHQGAAHZPPJYHENANVEGORTRNFUMWKXAGBCAXIQDCLAOUUOHBTLDKBGSCKBBYHCTWPUGBCQVRWMVPDKLYSRFLIC");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6437948180828543;
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
    msg.setTimeStamp(0.7754990018742719);
    msg.setSource(28915U);
    msg.setSourceEntity(165U);
    msg.setDestination(33208U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("GICKGYGCFLQSUZVFNHJMSHPNLPIXCTRHKNYHVWZIVSUMHHQDQMZJMFBGTWPWTQRTUKSHUBDOYFESWCPYGWKXCQFVWOLANQYTYGDISAJJAXIJHVUPISWOSENLBDOHQVEFWTEBDCZLRNPTXICEYJJNIBDBDYSPMPVXIKKYRRFLSBZBJCLAQFJXQEZWQDOPXLAGAUZMULZUXGABTOFBVWTRXMRROZIMKEVGZMDKLNDORN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UOKPFZYBCAJDKPGLWFSDBCDTVRTPAXBFLLQDMESYBUHYFZQJJMMQVMAUYSBENVRDHLPNLMNCILWPOSNTRLVXVBXOJRRXTTPZI");
    tmp_msg_0.sys_type = 83U;
    tmp_msg_0.owner = 38534U;
    tmp_msg_0.lat = 0.8313567647101204;
    tmp_msg_0.lon = 0.9704544987863429;
    tmp_msg_0.height = 0.3479215399995499;
    tmp_msg_0.services.assign("FWYDXJTMRSNOZJQVKHWARYUZCSJPWWEAHMOFOGVQFYZSWKVCXMYEVXTGRTLUWPLXAKDVXKTKSBEVTB");
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
    msg.setTimeStamp(0.39898189567463105);
    msg.setSource(8425U);
    msg.setSourceEntity(56U);
    msg.setDestination(39255U);
    msg.setDestinationEntity(52U);
    msg.localname.assign("MJDXYQHMOGOFBEFFUASOBNGWOFBRIUPMSRXRDPDASUSKYEZBCXXIHZYNUQHHDVLADNCWYRLHLBAZMCFUFYEWHANHGQVIXOGEKLZIKICANM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PPEBQANDIBRAGGIPPRZEFQNFPBLGRHEECZBEBMYNEKRTVZDAMOFOKNJZSVVYPNNAQIZJXRQFDSYGJOXXCDODWAZMOOCUJSUXLGFZNIWZTMDOWLJDPAKDXHSHAWRRVIWUCIYQICTSOFXNIWNILLYBKEPPVRFLYQHYLGHEUKBHWJLXGNCMKRHAFUAQCMQTGJ");
    tmp_msg_0.sys_type = 55U;
    tmp_msg_0.owner = 50632U;
    tmp_msg_0.lat = 0.9166433526314356;
    tmp_msg_0.lon = 0.8468267593600447;
    tmp_msg_0.height = 0.6239258137360446;
    tmp_msg_0.services.assign("RAXNUDNRXEUBEHMLSDNFVDBOWCLZSMJUNANPBVMKFXHCPENNCOGPAPBRRQVEZKJJKQQCTILGVFWHDKGGLIKOQXHAGCZUYPLJUYPIOZVYYZYZFVVISSMHJGWQREKFMISMXASDBSAQWCCTJGNYXPTRIWFDMYCBTUVTYXWUWYQDKESATONJOXHWFBTTSXETO");
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
    msg.setTimeStamp(0.8505972729775567);
    msg.setSource(15067U);
    msg.setSourceEntity(76U);
    msg.setDestination(41892U);
    msg.setDestinationEntity(50U);
    msg.localname.assign("QPMVCNBTHEJGAXIINFCAPNGWSYTNYCZJDUEZAHKFZNUCMRZRMGEJAMCAXCHEBVFMFQZXTUOUXERRPKIQBTNOYWPMDQCHIJBFJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WTBIOIQYXQSOTFPYFUMRPGCSABDCAOZPWYGBFMPKOXIWWQSLPRAIMBXKBCGVYLKYNCHTPJLAGNMLCACJDTFJJRHVUDRZXQYTKFMFCVNXXQEU");
    tmp_msg_0.sys_type = 64U;
    tmp_msg_0.owner = 720U;
    tmp_msg_0.lat = 0.5533091566135759;
    tmp_msg_0.lon = 0.6780083365931991;
    tmp_msg_0.height = 0.9720027749675759;
    tmp_msg_0.services.assign("OTRULYFWASRCJQHSOZCQUZBCZSOFFXYHPCRFVNCMTXWZMXGCQPWHWLPRIKHJ");
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
    msg.setTimeStamp(0.9202345858487523);
    msg.setSource(65482U);
    msg.setSourceEntity(29U);
    msg.setDestination(16896U);
    msg.setDestinationEntity(172U);
    msg.timeline.assign("NBHTIVGJHDMWSBBUOBRTTQMNZFVAISVIVJWAEPRPKKCZNVQSYUJQLGXVGQLR");
    msg.predicate.assign("SQIKFQOHCZJNZEVWWTINROMJOWADLHKKQTFKLYREKDLOMFNCSRWJHYZXGQYPOTJWNASZBQYADLJDVJUQVOPGLPSFITQTIYCERSA");
    msg.attributes.assign("GYELBZWXVRIBWYBLFDKSEGGQZDNJWLJTTDVQYUZEHPWUUHVKXJLEGTTNCTYGVHJVRWXLGRIYKQSIPOVPSXFAKDQPBACDAUZN");

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
    msg.setTimeStamp(0.8185968245990547);
    msg.setSource(46249U);
    msg.setSourceEntity(205U);
    msg.setDestination(16867U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("HOLBYCFDPXVKZQKWMZCFAETEGLPXPJZAPYJHDQAVPBXMHIFEOTSKKTZSEGWAOXUKFQJSUMBGHD");
    msg.predicate.assign("UNECLFUQRUMPQFPHTGHXJWSNBXDIJYPCCFDARDOKDVGASVFEHLFJUGLZAFQICOHERCTNROGGIAWVMBSARARMYLJQZVZJBHNAFQBMHZVIOSTSGKQLPZWEUCHWTJBSHQWGDIDUYMTDVCWCZNQOPVNQAKLEHEAKBFFUBLPYNOTGDVZLEIBRYTMIOPMLCBHNLQKYAPBYXRJSWKCXRWESDPXSGNZIOMXWWYMOY");
    msg.attributes.assign("KJPBBAFWFKSXIFYZATVITLRNRSGLRDVCTLXIVQYGYNFVZUVZPZKFVJHSTNFDECZEIHNHWCRQUHEHJOONFMGDJQRCECXWEJWUIEUQFDZKPFBXYDAZGXAHORDGMIGKLSKBKQRZSPOMQSCYXWCEALGTOOVPEHDRMPMVJGEYFDUAAUMMCHTXSDBLRQLIADQWKMLBCKONMXVUUAPNQIHLJTXBYLOIUSAWSTVPNHGRMYUYJOYBCJPSX");

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
    msg.setTimeStamp(0.587241496844949);
    msg.setSource(27220U);
    msg.setSourceEntity(59U);
    msg.setDestination(25084U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("PNVJYGANEBJIKYVLOFFFCNTIVQMPCDQSLBEWVJHXYRDZQNMJDZLHRFTXYGLIHZYHEAAZPOIYLDQPMXJYKHYRLGNGZIKFFTKCSSKCBXLACMRINPZXUCQSUSOJSRILQHCTYOIBUCMMXRMEPVNNEFBKWPRKDLDWUBSWXFOXOGAU");
    msg.predicate.assign("ENNZUZBCXF");
    msg.attributes.assign("LNWXVOBMRXKFXUQVHAIRWWQFCKBMHDZJWIQYNRINYHVIXURWYZCXOFKLSVISOMQSPEEPQUJPKLIWTQPADKUGIHEDNOPRCKKBRJUUMYYSRHAJZXLGAAVVOZJPBEEOOTQE");

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
    msg.setTimeStamp(0.46590667044000256);
    msg.setSource(55207U);
    msg.setSourceEntity(11U);
    msg.setDestination(36729U);
    msg.setDestinationEntity(78U);
    msg.command = 161U;
    msg.goal_id.assign("IYHSFWWWXVRBQANOGUOLKEAPBCOSFGJZOEALTIGUDJMCQKCWDVPFWFVYQJNCAWVWAHDZNNAJELMQPOBPOTGXUXSLWUMBPUXY");
    msg.goal_xml.assign("EJZQXOKWEVRZGGJRIXPAFIHSENLOXSHSVWFDBWLOWEACGQXOHVXKPETSCSVVTELQWKYCTDLDHFOFNPMGZS");

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
    msg.setTimeStamp(0.6917429165713693);
    msg.setSource(32600U);
    msg.setSourceEntity(222U);
    msg.setDestination(48358U);
    msg.setDestinationEntity(228U);
    msg.command = 248U;
    msg.goal_id.assign("SNTDWIWPFEOOQXBWOUDRAFFMSRQLUDCBTQGZSMBMJVBIQELSWAVXJEMXVIJFRFGBAYNYGDYPDCKUJPBKQYVLVUTHJHTDXZMYNUSODGK");
    msg.goal_xml.assign("DIWOKWAIYTFOZGEGGZLBPSSMJWXNYOVQPUMQQAVCOMKNEFLHGBFOCENGJUMKZXNJVHOKMJFWQYKITEFBXVRBYQXVNBDXTRWTDTTY");

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
    msg.setTimeStamp(0.6703347478144628);
    msg.setSource(19228U);
    msg.setSourceEntity(43U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(144U);
    msg.command = 52U;
    msg.goal_id.assign("JIJOYWPULFFKNTSRHDPPALRYPNHLWDJEFAVJQAESKBQXQLGPUIDAOUSWVAUQOQFLRWIJKAJPXXESACUZZSXPDVNGHTSIDLVEKVMOKBYUKKDNNHPYZANOBXRYCFYJBJOD");
    msg.goal_xml.assign("HNUSLODPVJHWFODLWDHLDGXZBSLHAWPCXNNXRAOXTCMMGDDYGCLTGEYBFQEHZVRUIKYRMHBZJTNLMAPCFZALDUTXWQMKOUUSQSVFBUKJQXEMYPIJCYZXV");

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
    msg.setTimeStamp(0.34978135343941463);
    msg.setSource(7623U);
    msg.setSourceEntity(38U);
    msg.setDestination(17538U);
    msg.setDestinationEntity(38U);
    msg.id = 91U;
    msg.width = 47111U;
    msg.height = 60261U;
    msg.widthstep = 52030U;
    msg.channels = 254U;
    msg.depth = 18U;
    msg.finaldata = 120U;
    const char tmp_msg_0[] = {121, -19, 96, -49, -2, 84, 63, -72, 45, 3, -28, 83, -107, -98};
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
    msg.setTimeStamp(0.4084681519088683);
    msg.setSource(25662U);
    msg.setSourceEntity(127U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(22U);
    msg.id = 117U;
    msg.width = 49670U;
    msg.height = 47694U;
    msg.widthstep = 8568U;
    msg.channels = 113U;
    msg.depth = 114U;
    msg.finaldata = 0U;
    const char tmp_msg_0[] = {27, 31, -124, -128, -114, 30, -30, 14, 75, 4, 83, -14, -97, 7, 30, 66, 125, 100, -60, 69, 50, -87, 117, 124, -24, -26, -81, -40, -60, 119, -74, 110, -33, 38, 85, -7, 69, 52, -29, -46, 49, -84, -60, -48, -34, 72, 1, 114, -13, -102, 76, -102, -82, 110, 113, -96, -113, -14};
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
    msg.setTimeStamp(0.3945806898429345);
    msg.setSource(1852U);
    msg.setSourceEntity(71U);
    msg.setDestination(22876U);
    msg.setDestinationEntity(189U);
    msg.id = 203U;
    msg.width = 16796U;
    msg.height = 15173U;
    msg.widthstep = 40411U;
    msg.channels = 250U;
    msg.depth = 47U;
    msg.finaldata = 41U;
    const char tmp_msg_0[] = {75, -119, 68, -21, -39, -80, -115, -123, 31, 119, 69, -103, -60, 95, -91, -97, -76, 112, -64, 44, -126, 93, -75, -45, 28, -99, -125, 97, -95, 109, 47, 52, 100, -49, -16, -18, 71, -28, -124, -58, -52, 75, 46, 104, -96, 79, -121, -53, -77, -104, -76, -88, -91, -80, 123, -95, 88, -66, 51, 75, -48, -123, -93, -44, 19, 66, 101, -121, 105, 43, 54, 54, 60, -110, -49, -15, -50, 105, -94, -92, 98, 125, -26, 13, -61, 38, -116, -34, -69, 4, -124, -98, 19};
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
    msg.setTimeStamp(0.5246984163867462);
    msg.setSource(309U);
    msg.setSourceEntity(238U);
    msg.setDestination(6999U);
    msg.setDestinationEntity(248U);
    msg.width = 55384U;
    msg.height = 5233U;
    msg.channels = 126U;
    msg.depth = 80U;
    const char tmp_msg_0[] = {68, 68, 58, -74, -115, -124, 90, 1, 1, -27, 65, 115, 48, -21, 120, -16, 81, -128, 20, -68, -62, 97, -2, 125, 76, -84, 126, -39, -51, -46, 120, 124, -78, 10, 38, -40, -58, -58, -128, 78, 103, -94, 59, 67, 9, 4, -61, -64, -65, -88, 56, 117, 58, 28, 115, 109, -28, 63, -56, 23, 76, 47, 85, -43, -31, -73, 96, -111, 15, -19, -50, -86, 25, -62, 5, 51, -42, -111, 92, 102, 22, -113, -42, -34, 115, -66, -89, -23, 79, 24, 124, 88, -123, 4, -81, -24, 73, 17, 40, -20, -124, -107, -121, -90};
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
    msg.setTimeStamp(0.8001297110313735);
    msg.setSource(44031U);
    msg.setSourceEntity(114U);
    msg.setDestination(6488U);
    msg.setDestinationEntity(135U);
    msg.width = 45699U;
    msg.height = 5198U;
    msg.channels = 103U;
    msg.depth = 241U;
    const char tmp_msg_0[] = {-24, 11, -126, 20, 66, -72, 59, 69, -11, 6, -106, -59, 112, -19, 62, 19, -9, 125, 74, -14, 74, -88, 10, 61, -30, 47, -95, 118, 62, -63, -107, -116, 63, 8, 101, 41, -18, -51, 24, -77, 72, 61, 102, 23, -105, 56, 2, -116, 114, 115, -5, 95, 45, -40, 61, -126, 33, 1, -91, 92, 104, 45, -89, 44, 89, -14, 5, 98, -126, -55, -10, 67, -123, -55, 57, 100, -2, 103, 17, 62, 126, -66, -98, 85, -125, -58, 1, 116, -116, -44, -79, 89, 55, 79, -57, 19, -102, 32, -95};
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
    msg.setTimeStamp(0.16929049805652197);
    msg.setSource(19365U);
    msg.setSourceEntity(34U);
    msg.setDestination(20092U);
    msg.setDestinationEntity(49U);
    msg.width = 29875U;
    msg.height = 50114U;
    msg.channels = 194U;
    msg.depth = 63U;
    const char tmp_msg_0[] = {70, -95, -15, -64, 49, 22, 29, 70, -80, 28, -57, 88, -109, -126, -97, 109, 35, 101, 18, 72, -31, -125, 108, -26, -4, -91, -113, 31, -20, 37, -114, -123, -49, -53, 6, 61, 124, -8, 1, -80, 31, -73, -84, 55, -17, 53, 35, 34, 71, -59, 43, -49, 101, 72, -77, -38, 104, 118, -13, 13, 25, -90, -14, -26, -9, -52, -31, -127, 87, 61, 110, -78, 36, 81, 78, -120, -33, 117, -21, -34, -119, -118, -10, 85, -113, -69, 6, 43, -81, 54, 95, -19, 124, -35, 123, -109, -36, 124, -41, -63, 53, -20};
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
    msg.setTimeStamp(0.7413665335466876);
    msg.setSource(54650U);
    msg.setSourceEntity(43U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(25U);
    msg.frameid = 220U;
    const char tmp_msg_0[] = {-33, -42, 81, 106, -48, -40, -41, 97, 90, -108, -128, 51, -10, -98, 81, -62, -49, -4, 19, -52, 13, -15, 96, -93, -37, 74, 76, -86, -24, 31, 112, 76, -32, 73, -90, -43, 46, -124, -73, -2, 89, 125, -30, -14, 4, 22, -90, -34, -106, 86, 125, -41, -2, 68, 6, -97, -77, -111, -17, -38, 9, 54, 71, -86, -47, 122, 39, -79, 69, -30, 125, -81, -16, 53, 5, 14, -25, -97, -60, 93, 45, 32, 36, -25, -80, 99, 21, -103, -117, 41, 18, -69, -39, 95, 66, 61, 111, 20, -53, -118, 65, 92, 46, -89, -123, 86, -34, 121, -14, 33, 78, -113, -69, -128, 27, -110, 68, -81, -28, 121, 76, -57, -68, -73, 36, 103, 35, -40, 85, 48, 95, -110, -21, -6, 99, 39, -26, 19, 73, 102};
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
    msg.setTimeStamp(0.9974049727768268);
    msg.setSource(34303U);
    msg.setSourceEntity(62U);
    msg.setDestination(56280U);
    msg.setDestinationEntity(47U);
    msg.frameid = 18U;
    const char tmp_msg_0[] = {-20, -22, -127, -36, 26, 28, -90, 91, 28, 13, 72, -68, -78, -63, 78, -52, -19, -5, 35, 18, -104, 12, 76, -10, -95, 123, -76, -87, 60, 70, -8, 70, -112, -34, 9, 98, -113, 39, 28, 123, 93, 62, -77, -22, -24, -65, -19, 113, 3, -25, -48, 100, -13, 23, 13, -33, -17, -121, 119, 117, -48, -49, -65, -97, -28, 125, -40, 87, -108, -25, 88, 71, 88, -106, 97, 6, 20, -36, 47, -11, 27, -78, -77, 39, 71, 61, 104, 87, 41, -1, 50, -120, -100};
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
    msg.setTimeStamp(0.33386805431656597);
    msg.setSource(16493U);
    msg.setSourceEntity(64U);
    msg.setDestination(23113U);
    msg.setDestinationEntity(215U);
    msg.frameid = 192U;
    const char tmp_msg_0[] = {-21, 116, 55, 54, 78, 77, -14, -65, 43, -55, -46, 99, -20, 72, 61, -58, 15, -93, -29, 38, 86, -73, -13, 13, 115, 126, 79, 17, -27, -16, -100, -72, -71, -59, 29, 42, -107, -51, -85, 13, -78, 77, 124, 88, -110, -127, -40, 114, -60, -102, -64, 98, 3, 4, -4, 95, -12, -93, 68, -36, 57, 33, 45, -7, -114, -81, 100, -47, -84, 121, 2, -78, 97, 56, -30, 61, -106, 91, -44, -53, -105, 41, 9, 113, -63, 60, -56, 72, -85, 15, 16, 74, -119, 88, -73, -43, 33, 43, -63, -50, -99, -103, -5, 121, -122, -11, 74, 12, 28, -93, -32, -53, 69, -37, 82, 44, -112, -17, -126, 2, 126, -59, 84, -77, -123, 101, 7, -99, 46, -62, 15, 16, 48, -7, 78, 43, -76, 120, -2, -11, -86, 61, 5, 29, -69, 50, 38, 72, 44, -113, -56, 119, -78, 116, 34, 57, -34, -101, 13, 121, 37, -116, -87, -101, 118, -100, -121, -95, 117, 64, -48, 46, 39, -76, -12, 38, 42, -3, -101, -11, 64, -12, -92, -18, -42, 24, 67, -47, 41, -36, 72, 27, -5, -91, 35, -46, 68, -62, 66, 113, 73, 44, -30, 124, -38, 15, 25, 109, 72, -42, 66, -38, 25, -99};
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
    msg.setTimeStamp(0.3524595673293016);
    msg.setSource(1753U);
    msg.setSourceEntity(69U);
    msg.setDestination(7325U);
    msg.setDestinationEntity(171U);
    msg.fps = 250U;
    msg.quality = 170U;
    msg.reps = 83U;
    msg.tsize = 207U;

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
    msg.setTimeStamp(0.5328217986475091);
    msg.setSource(1790U);
    msg.setSourceEntity(252U);
    msg.setDestination(58214U);
    msg.setDestinationEntity(37U);
    msg.fps = 91U;
    msg.quality = 243U;
    msg.reps = 70U;
    msg.tsize = 176U;

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
    msg.setTimeStamp(0.2962269439754712);
    msg.setSource(2883U);
    msg.setSourceEntity(58U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(60U);
    msg.fps = 245U;
    msg.quality = 53U;
    msg.reps = 12U;
    msg.tsize = 0U;

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
    msg.setTimeStamp(0.8543668376601601);
    msg.setSource(21447U);
    msg.setSourceEntity(238U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.9789228086951921;
    msg.lon = 0.37267537431640263;
    msg.depth = 6U;
    msg.speed = 0.15713785229713217;
    msg.psi = 0.06978236570932206;

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
    msg.setTimeStamp(0.8485269070612776);
    msg.setSource(45345U);
    msg.setSourceEntity(31U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.8093326104235058;
    msg.lon = 0.06452201066113006;
    msg.depth = 178U;
    msg.speed = 0.8435344271373566;
    msg.psi = 0.6938310356800601;

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
    msg.setTimeStamp(0.13124067248467808);
    msg.setSource(43483U);
    msg.setSourceEntity(119U);
    msg.setDestination(23422U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.21154961111764758;
    msg.lon = 0.7524132820704965;
    msg.depth = 112U;
    msg.speed = 0.7856854797663397;
    msg.psi = 0.6503790953125027;

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
    msg.setTimeStamp(0.7966825450873719);
    msg.setSource(36111U);
    msg.setSourceEntity(15U);
    msg.setDestination(53513U);
    msg.setDestinationEntity(30U);
    msg.label.assign("TXGRCJHGCHSAADVVKFIXZRXJWRZSWXFFYEXMDZCYIEVQVRXXZBZLQUSIDENWIVGEKARPHNUDNJSJSWOQDMF");
    msg.lat = 0.530302566303715;
    msg.lon = 0.024180212451059724;
    msg.z = 0.6282868588180106;
    msg.z_units = 190U;
    msg.cog = 0.43329200262611633;
    msg.sog = 0.7322099191210498;

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
    msg.setTimeStamp(0.6514728497683269);
    msg.setSource(20967U);
    msg.setSourceEntity(237U);
    msg.setDestination(37116U);
    msg.setDestinationEntity(54U);
    msg.label.assign("KEARREAJYCLQMONNRASTEKJDWBRSHOUIYEYHPDRDAHVDYJHZWVFKBCOTKBBFBWOXYIXFJDWUYEMGSGVRLVDSNAGTAXKORIBABMUOVEVDLIMPYGNGBJSWVTDPXFLQZPWPJHFLIJWHXCKOGODUNLQXRLZCKZSIFZXXENGGCSMPTJVETNQYRTTW");
    msg.lat = 0.6415309229457767;
    msg.lon = 0.23788310136261148;
    msg.z = 0.7665505193467743;
    msg.z_units = 154U;
    msg.cog = 0.6970467016447549;
    msg.sog = 0.06510856758142203;

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
    msg.setTimeStamp(0.6827286356018808);
    msg.setSource(34917U);
    msg.setSourceEntity(71U);
    msg.setDestination(98U);
    msg.setDestinationEntity(164U);
    msg.label.assign("MBZOVSFTJARFHUJTACBTHEUONCADMLIIINEAFTNKPIZMKHWYSWPRMKGIVNZHTZKFRLGNOQYRGVWZJVHHOQKXSXPVXTJQUYVHBCPTKGFPNXNEYDXISWWLAEFCVFQBLMQMAEOFQXZYJDLILZEASJEUFVGXOPBURGQGZPCAYZBRSUDOLTMKLAPCJARBCYDWTGUJUDCSLBHGMCQXMIOVDE");
    msg.lat = 0.4171109986951258;
    msg.lon = 0.5868572869106476;
    msg.z = 0.45480797620709357;
    msg.z_units = 158U;
    msg.cog = 0.8764761383848734;
    msg.sog = 0.5237368826203636;

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
    msg.setTimeStamp(0.14728056026538827);
    msg.setSource(27628U);
    msg.setSourceEntity(29U);
    msg.setDestination(47523U);
    msg.setDestinationEntity(24U);
    msg.name.assign("YPKDOGIJWGMZYTIYNWZXUAEPPJHWPVVMGAMMBDSFW");
    msg.value.assign("MYKPTXMUHHZCSINRJPTOC");

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
    msg.setTimeStamp(0.7864004788827897);
    msg.setSource(30353U);
    msg.setSourceEntity(207U);
    msg.setDestination(12221U);
    msg.setDestinationEntity(24U);
    msg.name.assign("CEIUPXETWVCDKUQYTRYVKSPRDVZNKHOOWRAKSBNRJGXTEPQCHSGGXBOBDKGFJKCAKSUSUDVIYEHRQGAOBFAJAVTPLJQLZMCRRLAIFXFCMIMGZZEOXZLGKEZNM");
    msg.value.assign("EHFANUPVIVEDXALMPLECXYVPMQHTWUSDKXZKMQHIRGJAPGQSTQNJRLCURNLAWPRTXBEDTXHWMCXURZYMJVFQZLUNIHFKOWTFFMWWKYMBBQQBRGKFXEKORZJOGGLCGVTDBPBLCJMXVYDUJAVGEVHRLBZZQUGMINHZYIOGKAANOWPJXZCTBRDIYCLFBHWKOIJSI");

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
    msg.setTimeStamp(0.9630040106991375);
    msg.setSource(47805U);
    msg.setSourceEntity(107U);
    msg.setDestination(27710U);
    msg.setDestinationEntity(36U);
    msg.name.assign("VATQFVOQESSFZNAAHIIRUOHWFDDAMMYNUBRBXKUBYMDMHSJSGLKLHUPXTOJNQTAJNOBU");
    msg.value.assign("FWGWXMNDRLOAQTHEVUKPMPXALVEAYCDTLOIUKMGISAJUDYOXGHTBQXNHVMCLPRVCSFHJZ");

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
    msg.setTimeStamp(0.005613185059736847);
    msg.setSource(51201U);
    msg.setSourceEntity(176U);
    msg.setDestination(39478U);
    msg.setDestinationEntity(203U);
    msg.name.assign("HUTPLSBFQUJXMGCVRGOWTLNWYHGRNMITPHZAUMFCRGKOUWQDGLPQKFYNBKBKVRCBAVAXFNBESXYXAGCVUWIFYOXJSDQANWKTNLTXPHRMVETFLGVFCLUEWPUTOGZBCOONARZQKHVOADIMFKMKDJSIPIDEDBJLHMEMNDQQEDSRQGJLOSZWYIRILEIJBSSBWNBAYPFZDZQUAEYSQJJRCDJJRWTEXGZIXUPCWKXLCOP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KOBOTHMEQVEIRDRYLUPCIURJNPMMK");
    tmp_msg_0.value.assign("DGGZIJPNSVLOMVTWEFLNATEOFSCZKGQRERSIVXOOEQKDFDJWQQCIIJNXMABABUWKIPKYXJCOXXTYRUFROUWGMMZNTJLQJHOMGTRYFPPQHBKMUTVHJAHWSXIFSLWGVPSLKUYNHOVDZXEEHWRXNCHHIUMIMFZLSPLJCLZPZT");
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
    msg.setTimeStamp(0.09200445847662286);
    msg.setSource(14361U);
    msg.setSourceEntity(184U);
    msg.setDestination(25361U);
    msg.setDestinationEntity(70U);
    msg.name.assign("TXRKCHFKTIGDQZPRUINQWRAZMVLRGOEACWSNVGEJLZEDIDYEGDYHJQCWAFFWWHXMGSB");

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
    msg.setTimeStamp(0.8208597522267619);
    msg.setSource(54053U);
    msg.setSourceEntity(150U);
    msg.setDestination(31551U);
    msg.setDestinationEntity(86U);
    msg.name.assign("OMIUZIZCYZXMKZUNWCCWALVBAVNLEFQYBNHHFGKYVWOQKEFRMTUTGBYNLFDULSISDZWXIZOVLKPCBCQTKJEEIXXENZIFSSNDOMA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WHCNMACZUYOMNHXJCCBIYYDKMICQRRKMBUGDNVUKNQRTLAQFZAJGVOQERUYOUKZERERISCVLPVSAWDUKJOTSSVJLTGEFWLVLFOWGPNTFOCSHTTSQWMTXD");
    tmp_msg_0.value.assign("GRKXRELTWHKKXRBBCKZQXZVNWLYVHSTJBQHJGZBBSIQANCOFWFEDTYFLJPIIZYXFFSKIPEZINRTJSUYCOAKKPYSMPAXVERLSRCDTDLS");
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
    msg.setTimeStamp(0.5545709972565392);
    msg.setSource(39763U);
    msg.setSourceEntity(240U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(113U);
    msg.name.assign("ABDNIEVDTNFEGOMKLCPPHSJYKSGYQLYFKDCOIAQGBMQUVTTWWSYDZZYVUWHAKJKZQBYHAPPAJFVHOICLNZNUPFZARNGPJIXGDTLPZOEEVJTBSESAMIXRELEMPHBAYVQBOGOWNCDFUSTOMIMFOIXXGGTCSHZUFPARQXWDLQABGXUYYHRVKKRMBWVJTKFZZRJNKYVHEXWQCMWRZPRDIXHQJBLNQJCITGWWHIOEULERNUMU");
    msg.visibility.assign("RMSKBNMCZOPGKJJQLOWLRMIQWZYIYZUNJNUASPKRKIQCQFBPSFXKSGMXJFXPVMBONHDOYZYJVYDBXAUPEPRRGFNTXTQROSXYEGAYTSWAVGVCKKDDBLLLHUEQMCVLJANFHEICRPZFBLDJGHTPSXRMSYMBOWICMAOUCEOWNHTJHYLVZDDKHZTWPPEAQNKQLVVUICHRWWGYEWSD");
    msg.scope.assign("DJCYTMWFGGTKFNVSHFOAERLWFBYTIVTXLSWXRJTXMSGOEXNGTQDYKNKKGZSCABYMYLYLZXOIJFRHWCJQVMESCKMOUBYAJDTBAZ");

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
    msg.setTimeStamp(0.3399310645767297);
    msg.setSource(39047U);
    msg.setSourceEntity(198U);
    msg.setDestination(7653U);
    msg.setDestinationEntity(122U);
    msg.name.assign("UYFUNOMHWWXWDSZVRSKMEUBXXQNTRVEYYRAKXIKLHBNAEQGZZLHBQZLPVABKNPQRTIJDGFMAWJZSGFTADMSGPSEVRPUGZVDXIHUYCFTEZILNVDCPTLZNO");
    msg.visibility.assign("MWTQPJKNVKNTCKOYCXVJRRRHWXFRHWJVHEEMWIMZVCBZRREAJSPTLXMQJCIVOVAKDWQHRHYQYQUZSERGLAGESFNFLXPTTZLNXEYHUNKODEXWJHSTZOOSPNYVUSEANPKDUWFAUPZQQGLCUIFLVGAMYOIBXLGTNQBIRSCM");
    msg.scope.assign("QBDIBBIFNESDTXMJXPEIRPIPDNXGTEEVAUBGPVGWVBIKISLDNKXSTWUEMVWA");

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
    msg.setTimeStamp(0.9617729834098379);
    msg.setSource(61883U);
    msg.setSourceEntity(186U);
    msg.setDestination(43578U);
    msg.setDestinationEntity(85U);
    msg.name.assign("FJPTZAEOKIUKWJJVYCGTQPGOPQZZTSYDONJRAWMBHAPXCJJFHASFVIHARBJZWKKCMJKZYNHFEUDTQQBVWNMPYGCFBVLIOUVTVDOCGTLCZXDSXGUF");
    msg.visibility.assign("KSZUGPXNIOUXHVBESTFBFUOPQVKXWEMXFUVTMNRANNIKBOXYYPYEBHBAWYGJJABJTXZQRSGUTJESXQDBQAWKTMGQBHCPCYIIEAYOHVMFVCNEIXIZWLU");
    msg.scope.assign("IMSFSLSPXGSHOLAOEVDBWLIJGAOHGFCNJNBABBGPWCDOVLMZPFHYLQTQCFFOUNIXWABBMIMSWZNDQZMQRHGRLFSWUJXRLKDXVOMZQ");

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
    msg.setTimeStamp(0.11927797300427556);
    msg.setSource(37426U);
    msg.setSourceEntity(246U);
    msg.setDestination(1104U);
    msg.setDestinationEntity(133U);
    msg.name.assign("HHYVLUZPJJEFBYBFRTXPMQSAFCVRBNCBHGHYEIATDPQSQJMWVZLWQGZPGOIAYGCOCHJPIMECYBQUCDUJHHUGHQWRAZBIWGYWFDFOUVSCFREEJILHQLZTIMHKRK");

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
    msg.setTimeStamp(0.39734063227559646);
    msg.setSource(44797U);
    msg.setSourceEntity(166U);
    msg.setDestination(15919U);
    msg.setDestinationEntity(68U);
    msg.name.assign("NTCMTXFFWYUPXUBKIPTESIBROOMGFZNQIUCQLJTEXHONDCHDZCKLVUGGCMBQATRCEWWMNNZAQEHHJXNYEKZZXGXDYLZYTUGUKETAPOLXOOVSWLBJIOTSFLVRQANKTWXOCCJZYEBFFOPVQAIRBNSGKRDWBDVHUKBHOVHBZDUJQICHPPGBNAHNPAFLJIVWSUMLMURLWQMHRXESXIFZPDR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NVVKVFPIDFINZIPXQWKQXPHASRTEHVUNHLQKZLAGAFJUIMMSASBGOCJJBEBVUUQCFLTTSIJPWDOXRZXXNBZBFMHLACWAEWZNRRMGPOYZFOKNUUQTHXWBHEMNDJUTCDBGIEMSDUIKXQLDLCOMXJV");
    tmp_msg_0.value.assign("FUXWZDTWMXDUTGKBDJOIKRUZQIBUZBZJCBSQQWOCUXCVRPGTPQCGKHNMRRDYVURDYIIMXCHFA");
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
    msg.setTimeStamp(0.15570212034508457);
    msg.setSource(51045U);
    msg.setSourceEntity(63U);
    msg.setDestination(36421U);
    msg.setDestinationEntity(148U);
    msg.name.assign("MKOMBWAYKSPPHYXCHXIDACBUNVFDLQWFROJFCRHDEIBMRQKCMSVEKFVPGCNURPGZDHBARPUQTKMNGFJOGWIJNFEIGSUW");

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
    msg.setTimeStamp(0.6408395871656118);
    msg.setSource(52508U);
    msg.setSourceEntity(214U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ZPIZBRKINBCRVEVUVZIXAHQHPGLEHPKSXQOUEEFJXSRVCYBELROPAJKRANGBFPPSVOOIYHZRMUEYSPISNHTHNFUGGYSSMFKUEWOQZVJHARKFGMMPASXFNHSTDRWBITLBDUNFPTMAYGBUTGIDBZCYVXWDQFLZPDLMWWXXWJDCHETQCOMYNFQFYUGZLVJXXQLHTEMJYIOJKXDNODNAOTJWVKWINAOLMW");

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
    msg.setTimeStamp(0.22114471815847847);
    msg.setSource(33754U);
    msg.setSourceEntity(112U);
    msg.setDestination(61061U);
    msg.setDestinationEntity(77U);
    msg.name.assign("QZWFFTXLEJEKBOOQCYEARRQUUOEBGHJGMLEWUSBZSDQCDUNJOXTWFJWGADVMLPHOTOIEZJRVZFUVGSPZTUGCDOBMFQGSKKAOIILCLNQSNWPKGNVXDXRAIISGYKMNYBVRULCJZEAXCORBQEMMHFMRWMXSRBUQHBBWXDJYFFCKGVVJZMSXMNLEIWICZHPLPEAKDDXLVNYSPRPDZFQWKCJIAVHUFUTPAKRTCH");

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
    msg.setTimeStamp(0.06415389573271257);
    msg.setSource(9460U);
    msg.setSourceEntity(73U);
    msg.setDestination(6953U);
    msg.setDestinationEntity(88U);
    msg.name.assign("JEGZLNPWGHJQYHEAKJSDSVMUNIVXCBYGLBNDCTRBGVPYJMPNEIOCVSUMTEHLGXHAVTMAJXVHQVALXNPKLSHDNYQJIFOMMBZCSRWWGTWRAKRCSQZKOCHEFAFOWMKURFWZRXRSZPZGXIDHWYUKOFXTEAVVNPGDPKWIEIXMRUYMNJCFJTCPOQTSLKLIAQLGYXHYNPDEIBUQUDQURBEVCUL");

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
    msg.setTimeStamp(0.16600380681058746);
    msg.setSource(61297U);
    msg.setSourceEntity(100U);
    msg.setDestination(40134U);
    msg.setDestinationEntity(228U);
    msg.timeout = 3345321712U;

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
    msg.setTimeStamp(0.7223434749346876);
    msg.setSource(33941U);
    msg.setSourceEntity(149U);
    msg.setDestination(5255U);
    msg.setDestinationEntity(240U);
    msg.timeout = 1798278543U;

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
    msg.setTimeStamp(0.843081328511877);
    msg.setSource(17149U);
    msg.setSourceEntity(219U);
    msg.setDestination(48866U);
    msg.setDestinationEntity(165U);
    msg.timeout = 2228040862U;

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
    msg.setTimeStamp(0.03111193151209546);
    msg.setSource(56100U);
    msg.setSourceEntity(76U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(85U);
    msg.sessid = 1460280619U;

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
    msg.setTimeStamp(0.14467736345958748);
    msg.setSource(6611U);
    msg.setSourceEntity(70U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(103U);
    msg.sessid = 3445415368U;

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
    msg.setTimeStamp(0.22439202886915632);
    msg.setSource(56511U);
    msg.setSourceEntity(248U);
    msg.setDestination(28515U);
    msg.setDestinationEntity(249U);
    msg.sessid = 4278820077U;

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
    msg.setTimeStamp(0.002195030555289912);
    msg.setSource(17258U);
    msg.setSourceEntity(176U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(19U);
    msg.sessid = 876726613U;
    msg.messages.assign("KYFLVIJVGBHTBJHESMXPAYWUSVABBIVGKDSVHCUGLQXGLEMNXCSZDUIDZHVAIUFPRWMMPPWYUCMHHKNHRPZGTTLJMTEXTKMPXMQQDXSIJJGYUK");

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
    msg.setTimeStamp(0.5127231038447879);
    msg.setSource(29466U);
    msg.setSourceEntity(164U);
    msg.setDestination(7223U);
    msg.setDestinationEntity(253U);
    msg.sessid = 1785371287U;
    msg.messages.assign("OKDCECNSLRDMVSAIGTXTOXHBCABYFGODWXCLABODDZAUPSWPMYYHRPSEWUGUHSFLLAHBZFKKTNARMGHJPNYIZQEYECEPQEBTKBDHIDIFUBVEWQJQUTYGGVTRXJXNJZOLVQZTODFAKCAMSXADZJMJUINQQGFFQIMZCBRNLYRREXSFYMT");

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
    msg.setTimeStamp(0.7792259465937406);
    msg.setSource(27741U);
    msg.setSourceEntity(185U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(106U);
    msg.sessid = 3623164066U;
    msg.messages.assign("GPESEBWLUMWPRUGUQIEFTTCMFKAFFIAKFNAUGLNFMLIUXDSZEOHKDCVTAO");

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
    msg.setTimeStamp(0.8538069916699352);
    msg.setSource(9208U);
    msg.setSourceEntity(68U);
    msg.setDestination(49204U);
    msg.setDestinationEntity(186U);
    msg.sessid = 1910989280U;

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
    msg.setTimeStamp(0.3575676596100166);
    msg.setSource(15651U);
    msg.setSourceEntity(31U);
    msg.setDestination(8989U);
    msg.setDestinationEntity(211U);
    msg.sessid = 2283884314U;

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
    msg.setTimeStamp(0.1034435888953642);
    msg.setSource(13301U);
    msg.setSourceEntity(198U);
    msg.setDestination(45115U);
    msg.setDestinationEntity(238U);
    msg.sessid = 4238795403U;

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
    msg.setTimeStamp(0.13943764681419013);
    msg.setSource(18933U);
    msg.setSourceEntity(211U);
    msg.setDestination(3189U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1686556666U;
    msg.status = 210U;

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
    msg.setTimeStamp(0.2729463129551052);
    msg.setSource(47075U);
    msg.setSourceEntity(194U);
    msg.setDestination(61980U);
    msg.setDestinationEntity(226U);
    msg.sessid = 2587487954U;
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
    msg.setTimeStamp(0.856514523362451);
    msg.setSource(32243U);
    msg.setSourceEntity(88U);
    msg.setDestination(5385U);
    msg.setDestinationEntity(108U);
    msg.sessid = 1080420781U;
    msg.status = 197U;

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
    msg.setTimeStamp(0.3665228684500762);
    msg.setSource(19222U);
    msg.setSourceEntity(30U);
    msg.setDestination(47782U);
    msg.setDestinationEntity(92U);
    msg.name.assign("OVPVPLCDZYWUKPDYNRXGSWAAOSUITBDDTKNLAJYPUEQFFXNQMIMXIVRSRXTDCHEEZMLKZFZQZHBHJTQKVYQPTMWJ");

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
    msg.setTimeStamp(0.7550848736691027);
    msg.setSource(41057U);
    msg.setSourceEntity(242U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(197U);
    msg.name.assign("ZUZQSVSPBLKLWMIQQXLTQSQBJNHTWBLUAOYKOYPOJG");

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
    msg.setTimeStamp(0.015238766102091184);
    msg.setSource(8239U);
    msg.setSourceEntity(232U);
    msg.setDestination(45307U);
    msg.setDestinationEntity(104U);
    msg.name.assign("GKBYPWYDZACKRCPDFVVRLAACZSYBSJLPLBKUBTJNRZFCFUWTQEOCSUGWXHSEAQIGKEHJBUOIIKFTXKDMFWBVXDNNDWMUCHDECTZQURQGWMXQHKGUIIOLEMLWAIRYZ");

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
    msg.setTimeStamp(0.34989811182903685);
    msg.setSource(3901U);
    msg.setSourceEntity(242U);
    msg.setDestination(37603U);
    msg.setDestinationEntity(103U);
    msg.name.assign("BSKGCDOAPJXMUBUJSHQNFFVAYEBNNVUGTFBET");

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
    msg.setTimeStamp(0.8387806936920679);
    msg.setSource(60738U);
    msg.setSourceEntity(247U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(44U);
    msg.name.assign("IDARKHUZACCUHPDSNSZVBLAQQSTALADZEZKPOQCLXFSUFFHMOBETGATLXXTNTVIRREPVJHKDXPWIUVHWPLRAFQWCSDPOWTCJZRVRIGVKQYDGNKIQKBWQLQHYZMGSGMMIAPBCNSJVWRZDHMBWTBHQMLRSLJHNEJULPFONGNFERYKFWCECTEZOOJFUIUEBDGIASWMH");

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
    msg.setTimeStamp(0.809248618726978);
    msg.setSource(62129U);
    msg.setSourceEntity(111U);
    msg.setDestination(25520U);
    msg.setDestinationEntity(21U);
    msg.name.assign("VSRRNORUZMATHDPWGWPZMBVGHDELVFUDLBMRGNBSYEREGWITJCLYZLGDARAXAGUMXFKVMYNBHXONQYXUXPUWLEDLJWOCKTAOQEIQJKSETNROEYPSSKRCUQHTJQBMZFQLYDDO");

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
