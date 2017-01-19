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
// IMC XML MD5: f217a46387d63e1ab4153c4676d40e7a                            *
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
    msg.setTimeStamp(0.377937024968);
    msg.setSource(39675U);
    msg.setSourceEntity(77U);
    msg.setDestination(9301U);
    msg.setDestinationEntity(232U);
    msg.state = 236U;
    msg.flags = 226U;
    msg.description.assign("AHFYDTAKEYPHSDKWDCZYFEENNJJSXZWHHQDSEUFLOVHHRUXIGPIOQFIAJJLTWCEYBOLUYXTWCIABLSBRRKLGCJMFETMPCXKVACXQBEUAWMWUTKYWIMZGDLOAZWPRYVHCGZODOSHEVNVQSDJZGQUXRBPRPHQAKFRPSNZEKTMLNVJZC");

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
    msg.setTimeStamp(0.951967547449);
    msg.setSource(43009U);
    msg.setSourceEntity(56U);
    msg.setDestination(9016U);
    msg.setDestinationEntity(122U);
    msg.state = 239U;
    msg.flags = 57U;
    msg.description.assign("EWOHGTPRESCQVKDYRGIDMESZXXMCABAUWGKZOAFRPFWJPBTNAZYOEDWYSSHJGQZTBZXOFLFYGLLREZFZVHYACLKVJTGGPDTJWSXBOHJXUGHYKZMQYUJKQUHNEDVTSWJRXFJMBRPKXWIDTVCKXMQCODVHMW");

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
    msg.setTimeStamp(0.962042555761);
    msg.setSource(23519U);
    msg.setSourceEntity(43U);
    msg.setDestination(19598U);
    msg.setDestinationEntity(136U);
    msg.state = 105U;
    msg.flags = 46U;
    msg.description.assign("OCYLIIVMTAGKOECTVKAOGBYJRBNWAAAKERSDYETZCGZJYFFWPTLFVMNSJUEIKJQIWBKLNHLEJCPPPSZZTUWYSRPQULNHOQWCDNIRAGMSTEQPMJGBWUXQJMZDQLYYKOFXOWZXZINPLQGIMRZDAHXOQFNSMFYJKOSRUCHACPVZBOETGFEFSUXNSBUVXMRVWUWAGCEUPUHOXCRDBNPSHFRMDDIZDIQCVEQKADLXNBHKBHJTWDGV");

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
    msg.setTimeStamp(0.372774163116);
    msg.setSource(52811U);
    msg.setSourceEntity(51U);
    msg.setDestination(5227U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.864993365431);
    msg.setSource(51686U);
    msg.setSourceEntity(101U);
    msg.setDestination(2655U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.94660922961);
    msg.setSource(48054U);
    msg.setSourceEntity(93U);
    msg.setDestination(56579U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.682450348302);
    msg.setSource(3171U);
    msg.setSourceEntity(153U);
    msg.setDestination(18669U);
    msg.setDestinationEntity(218U);
    msg.id = 24U;
    msg.label.assign("SFZSUPWTBJMGPXSLHRTDNTQFZDEHKUDFYVREVLCTGCIJCUBZJXJDFTIGUOVNEVNJLCEFQTLOQTKMOWYXIJNMHBZHYOUZLXMCMAAIRDAZLPWPVQHUTQWKGBEVZUYMEKJQCWMIR");
    msg.component.assign("NEBUPJHIIQEYYVMYAIIKBQJLTHGSWSUSNFLRVJBUCPBTEKSJBCNRTCDAIFLTZJVPRPUTLBRFMFSNCQMIOUQQWPJLVWDAEYGOOGATYQIAUOIAVIDHYCWNXPDCEAKHSUBDHIGMWJKYTKFJDELFDVAGMKNFWVRRKSHTZZXXFPSVBUBUJPEGOZELXHNPTVQQEQFYTDGCZZNZRBJRROOPXMEXLFOSADVOXNZZMQMYLCXWCHDNKHGRXHZWS");
    msg.act_time = 36264U;
    msg.deact_time = 11751U;

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
    msg.setTimeStamp(0.103687887971);
    msg.setSource(52063U);
    msg.setSourceEntity(33U);
    msg.setDestination(26616U);
    msg.setDestinationEntity(8U);
    msg.id = 62U;
    msg.label.assign("DQZGTAMAZMJUHLRRINQZBNNOKXWEVISXMJVBEVCHEPGUGKNCUZTRMDNFQLKFPPTWVCQUOHGDYWCCVPMFKIINBTLESZYWZWKQXXIYOMVXRDETJMXPLUWBULCRFQZUUIZDBMXJLLDYPBXUGZFTETJUZHBROOWNGPRRGIHPQAFFDXJVSQHHEQDBHYGYYDPAEJLSO");
    msg.component.assign("HCGUGKNAJKESUGKJKDQIPRWULTLQHDNFNLQKJYEGYYTZRQAWYSXFKHBWRAXASZJTUYHNNOFLKYSFRDE");
    msg.act_time = 36693U;
    msg.deact_time = 17914U;

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
    msg.setTimeStamp(0.735798245632);
    msg.setSource(30153U);
    msg.setSourceEntity(151U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(167U);
    msg.id = 155U;
    msg.label.assign("LMYQQXBESECDYPYHSPNIWANLPORTSBRDPBGHOFDMXEUXTOYCS");
    msg.component.assign("QPKZAQTSUASEPKMSOOFGJWGCJDEIFGPNJRUZJYWBGVNTKORVUYIWRJREHQPMDEFVPQOVZYHXUQLOMHHGYFFNNDRKEAYXZKOBODLTHTTAJNVUAMCLZH");
    msg.act_time = 59161U;
    msg.deact_time = 41042U;

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
    msg.setTimeStamp(0.18599292662);
    msg.setSource(4802U);
    msg.setSourceEntity(56U);
    msg.setDestination(11274U);
    msg.setDestinationEntity(85U);
    msg.id = 87U;

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
    msg.setTimeStamp(0.118959458069);
    msg.setSource(15431U);
    msg.setSourceEntity(214U);
    msg.setDestination(22090U);
    msg.setDestinationEntity(99U);
    msg.id = 28U;

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
    msg.setTimeStamp(0.0611261869912);
    msg.setSource(20201U);
    msg.setSourceEntity(102U);
    msg.setDestination(7623U);
    msg.setDestinationEntity(215U);
    msg.id = 16U;

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
    msg.setTimeStamp(0.753454318151);
    msg.setSource(53880U);
    msg.setSourceEntity(250U);
    msg.setDestination(54117U);
    msg.setDestinationEntity(129U);
    msg.op = 210U;
    msg.list.assign("NTZGTFNPZVDTINGNFFHRRPGMFAKIOLAYZGTQOVSNTIDCFQIDHYNWUJJLIVUMJOUCGTPWFZYQSJHKCFXXRSHHENJOIQDAOJJELECPVWBCGXDKVHQGOMVELHSVMQCRCSZPCSMBCKMXRBYBDWNKXZZLULYIASWQZPVAHOMIMJMAYUH");

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
    msg.setTimeStamp(0.454734520904);
    msg.setSource(23670U);
    msg.setSourceEntity(27U);
    msg.setDestination(15934U);
    msg.setDestinationEntity(226U);
    msg.op = 29U;
    msg.list.assign("FKPRTOWCMYLLIYOIHUHGNKZMUJIZYVKGVUCUTJSMMMLSFZMWFPLGEPEIXZIPRKGLQNTVHVQTXWBAISUWUQSJRYRAAYPKWUQDSBJJFFJKTCXNUEVM");

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
    msg.setTimeStamp(0.626124647192);
    msg.setSource(7863U);
    msg.setSourceEntity(229U);
    msg.setDestination(21802U);
    msg.setDestinationEntity(15U);
    msg.op = 87U;
    msg.list.assign("BOBDSLAQKPFIGDPMWPKYXUXVQHKNYMBGQIMRFYOKZJOBUNBXXNIABJIJNWKKDRUSKOEALVQPFRYOJZLVLHBLQVTYXWIMTFBXSETACRSIWC");

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
    msg.setTimeStamp(0.535209115395);
    msg.setSource(27436U);
    msg.setSourceEntity(215U);
    msg.setDestination(5388U);
    msg.setDestinationEntity(199U);
    msg.value = 146U;

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
    msg.setTimeStamp(0.883505530344);
    msg.setSource(36357U);
    msg.setSourceEntity(44U);
    msg.setDestination(19015U);
    msg.setDestinationEntity(45U);
    msg.value = 120U;

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
    msg.setTimeStamp(0.785766591387);
    msg.setSource(32607U);
    msg.setSourceEntity(43U);
    msg.setDestination(29826U);
    msg.setDestinationEntity(35U);
    msg.value = 209U;

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
    msg.setTimeStamp(0.484252681172);
    msg.setSource(30709U);
    msg.setSourceEntity(252U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("QQUNMTQSMRMAIBQWDRQEEMNYJRNIOTHUPGUJEXPHTAFDTLFYENGMQWBDHEJDFCCJLEZWYSZXMGNDOLPZSSBDUHAUSOAVGUHRJFEMCTWRFWXQQWKPDNUWVPBORCVFXWYZTKXDPVMGTZDFCIDYBSLCYWUHKVIPOCOYUKZCFNZJQSAHKOR");
    msg.message_id = 33998U;

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
    msg.setTimeStamp(0.548722524789);
    msg.setSource(44680U);
    msg.setSourceEntity(17U);
    msg.setDestination(57634U);
    msg.setDestinationEntity(24U);
    msg.consumer.assign("CTBJFRVAFRIZYVYWWHVSMAXLVEVPKXIMZINLMESAIXBTPWNNLVRUOZFTFCZAZGJXHNZR");
    msg.message_id = 18697U;

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
    msg.setTimeStamp(0.938250489343);
    msg.setSource(38294U);
    msg.setSourceEntity(148U);
    msg.setDestination(38735U);
    msg.setDestinationEntity(117U);
    msg.consumer.assign("LUJBPMFTPQGYRXEJXRIIGZPIOPVXMDMJVKGFTKXWJHNRVJOWLRYPIBILTPNHVAKQEVCKALAYSGMYQUJGSYDVDZZHBQPLUPCXMOLDARUVDHLEQCHBFLQSABGFNXSHHROOMFUMQDMVKVSUPADZCUZTIMZEKESZXWNLEWUKFSTOWWUYROANXCCXWDFLJEJQWKBAZ");
    msg.message_id = 64066U;

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
    msg.setTimeStamp(0.869438646161);
    msg.setSource(40768U);
    msg.setSourceEntity(66U);
    msg.setDestination(3568U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.184107103238);
    msg.setSource(35038U);
    msg.setSourceEntity(11U);
    msg.setDestination(10749U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.367542844465);
    msg.setSource(12083U);
    msg.setSourceEntity(253U);
    msg.setDestination(43224U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.352946762435);
    msg.setSource(60842U);
    msg.setSourceEntity(135U);
    msg.setDestination(14338U);
    msg.setDestinationEntity(13U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.954410043672);
    msg.setSource(10280U);
    msg.setSourceEntity(184U);
    msg.setDestination(46684U);
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
    msg.setTimeStamp(0.516524547733);
    msg.setSource(18213U);
    msg.setSourceEntity(97U);
    msg.setDestination(47140U);
    msg.setDestinationEntity(24U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.0288245483955);
    msg.setSource(52655U);
    msg.setSourceEntity(157U);
    msg.setDestination(1153U);
    msg.setDestinationEntity(106U);
    msg.total_steps = 164U;
    msg.step_number = 128U;
    msg.step.assign("HYBEUCKWESVCQHBQLACRTEKICJF");
    msg.flags = 126U;

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
    msg.setTimeStamp(0.683183107515);
    msg.setSource(22864U);
    msg.setSourceEntity(69U);
    msg.setDestination(64788U);
    msg.setDestinationEntity(20U);
    msg.total_steps = 243U;
    msg.step_number = 187U;
    msg.step.assign("GVOPPXFDXNQKWNHZL");
    msg.flags = 102U;

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
    msg.setTimeStamp(0.958139451029);
    msg.setSource(51098U);
    msg.setSourceEntity(66U);
    msg.setDestination(22166U);
    msg.setDestinationEntity(205U);
    msg.total_steps = 48U;
    msg.step_number = 232U;
    msg.step.assign("EPBGMHBFAGGGEILXJNNKNEFVMZEMQRIEYAUOPVHXZLOYHAUAILBKHUQKVDVTWGPCEJNUHI");
    msg.flags = 200U;

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
    msg.setTimeStamp(0.540727909224);
    msg.setSource(55677U);
    msg.setSourceEntity(181U);
    msg.setDestination(35611U);
    msg.setDestinationEntity(132U);
    msg.state = 190U;
    msg.error.assign("MHIMKOSSPNAQDRTCEPHPLDPLXGJXBCJNTERRHXQZLBDIVSKRLRONUFZYQKPNHQHGPAZTFEMYLMVXEASIVZQVKN");

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
    msg.setTimeStamp(0.304711273602);
    msg.setSource(37647U);
    msg.setSourceEntity(184U);
    msg.setDestination(3285U);
    msg.setDestinationEntity(173U);
    msg.state = 160U;
    msg.error.assign("GXOYNJHIBQUXSROXXFQSLVUDPABUJCQWKXQBTTCJBGDXHWGCXSONDYUERTWHLTDWGTGAJDEPHJONZTSZSGTPVYQPNFCBCKISIRAZZOUAQSVIBSNOVVUENZMUIDWDKUQDAKRKRFXFWGAMPHMXLBEMLOFYRSMSPPNJVNRQCTNGDJAELFJAMOKKHGLANPAMTKYEMHYPIVYKFUBYWQJCIWVCPUKEVXWRIFOIZHICOLZZEHEZFVYZTFBDQLWGJ");

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
    msg.setTimeStamp(0.00987779515755);
    msg.setSource(5569U);
    msg.setSourceEntity(89U);
    msg.setDestination(24898U);
    msg.setDestinationEntity(139U);
    msg.state = 126U;
    msg.error.assign("XKYXWZLVDTIEEWFDUYAHJJWXUZBXYGJSFNZVHCUAZHTOWKXQETGXCJCQLEBIMDRBYSCWZDGMAANLYPCERLIHXKPMLZEPSURAVFCTJNHNGSYNNFRPJKBQCMOYPXVMFRGTMHCHDALYPJVITFGSWOLPQDBZFPRMNAQOTRSYVMMHCBSBVMBNGDWQQDOVDKRKNUB");

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
    msg.setTimeStamp(0.0496174315423);
    msg.setSource(55840U);
    msg.setSourceEntity(101U);
    msg.setDestination(63420U);
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
    msg.setTimeStamp(0.925615620736);
    msg.setSource(19892U);
    msg.setSourceEntity(134U);
    msg.setDestination(9597U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.491413202805);
    msg.setSource(17682U);
    msg.setSourceEntity(232U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.232851584098);
    msg.setSource(49146U);
    msg.setSourceEntity(152U);
    msg.setDestination(60165U);
    msg.setDestinationEntity(38U);
    msg.op = 166U;
    msg.speed_min = 0.465977376307;
    msg.speed_max = 0.852254595009;
    msg.long_accel = 0.616636911358;
    msg.alt_max_msl = 0.431413522927;
    msg.dive_fraction_max = 0.937725025579;
    msg.climb_fraction_max = 0.654898164;
    msg.bank_max = 0.332250477335;
    msg.p_max = 0.508970638149;
    msg.pitch_min = 0.172405254521;
    msg.pitch_max = 0.826906195038;
    msg.q_max = 0.745133000389;
    msg.g_min = 0.771563421609;
    msg.g_max = 0.739479777398;
    msg.g_lat_max = 0.172486314422;
    msg.rpm_min = 0.483211999028;
    msg.rpm_max = 0.687681811892;
    msg.rpm_rate_max = 0.875631076927;

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
    msg.setTimeStamp(0.935365082938);
    msg.setSource(38532U);
    msg.setSourceEntity(83U);
    msg.setDestination(43876U);
    msg.setDestinationEntity(117U);
    msg.op = 67U;
    msg.speed_min = 0.895519518973;
    msg.speed_max = 0.621193262949;
    msg.long_accel = 0.797887873474;
    msg.alt_max_msl = 0.0128476516629;
    msg.dive_fraction_max = 0.719026868241;
    msg.climb_fraction_max = 0.600656084214;
    msg.bank_max = 0.624815310005;
    msg.p_max = 0.0713506886074;
    msg.pitch_min = 0.648760113433;
    msg.pitch_max = 0.534699477524;
    msg.q_max = 0.563992053708;
    msg.g_min = 0.432860168526;
    msg.g_max = 0.324073385481;
    msg.g_lat_max = 0.0935104543484;
    msg.rpm_min = 0.488750745338;
    msg.rpm_max = 0.74390589731;
    msg.rpm_rate_max = 0.701773024226;

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
    msg.setTimeStamp(0.402959505711);
    msg.setSource(28037U);
    msg.setSourceEntity(56U);
    msg.setDestination(62217U);
    msg.setDestinationEntity(95U);
    msg.op = 241U;
    msg.speed_min = 0.904852757659;
    msg.speed_max = 0.772305208534;
    msg.long_accel = 0.806022926335;
    msg.alt_max_msl = 0.956128676142;
    msg.dive_fraction_max = 0.912909582218;
    msg.climb_fraction_max = 0.629966561672;
    msg.bank_max = 0.780098953338;
    msg.p_max = 0.469545503631;
    msg.pitch_min = 0.33187377822;
    msg.pitch_max = 0.824392141576;
    msg.q_max = 0.910787935825;
    msg.g_min = 0.11640228384;
    msg.g_max = 0.652853905366;
    msg.g_lat_max = 0.0966834809353;
    msg.rpm_min = 0.4941757737;
    msg.rpm_max = 0.540047802821;
    msg.rpm_rate_max = 0.0955985436717;

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
    msg.setTimeStamp(0.567829260859);
    msg.setSource(62599U);
    msg.setSourceEntity(205U);
    msg.setDestination(43075U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.307259944945);
    msg.setSource(42874U);
    msg.setSourceEntity(53U);
    msg.setDestination(22810U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.113210851201);
    msg.setSource(33085U);
    msg.setSourceEntity(24U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.792475728214);
    msg.setSource(21822U);
    msg.setSourceEntity(201U);
    msg.setDestination(25277U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.255715015255;
    msg.lon = 0.219594135242;
    msg.height = 0.692392865655;
    msg.x = 0.851807475113;
    msg.y = 0.918257125431;
    msg.z = 0.368684575852;
    msg.phi = 0.279656354024;
    msg.theta = 0.14072970819;
    msg.psi = 0.198370802561;
    msg.u = 0.181082909402;
    msg.v = 0.222370959051;
    msg.w = 0.95522264716;
    msg.p = 0.675192680498;
    msg.q = 0.710853243302;
    msg.r = 0.601284971461;
    msg.svx = 0.483642532339;
    msg.svy = 0.499275485085;
    msg.svz = 0.734483311385;

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
    msg.setTimeStamp(0.505226809948);
    msg.setSource(50230U);
    msg.setSourceEntity(128U);
    msg.setDestination(19576U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.605112880312;
    msg.lon = 0.824392892857;
    msg.height = 0.594161130554;
    msg.x = 0.842453079597;
    msg.y = 0.296664546278;
    msg.z = 0.895441173018;
    msg.phi = 0.199238689409;
    msg.theta = 0.760738912523;
    msg.psi = 0.831244163491;
    msg.u = 0.358764991865;
    msg.v = 0.816770686092;
    msg.w = 0.0878484923857;
    msg.p = 0.690423966233;
    msg.q = 0.558612070131;
    msg.r = 0.771480008867;
    msg.svx = 0.175468652188;
    msg.svy = 0.994662283104;
    msg.svz = 0.523499925005;

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
    msg.setTimeStamp(0.460042693318);
    msg.setSource(58885U);
    msg.setSourceEntity(205U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.468807200449;
    msg.lon = 0.947939713357;
    msg.height = 0.916077914169;
    msg.x = 0.214517161211;
    msg.y = 0.31079859676;
    msg.z = 0.965140118419;
    msg.phi = 0.752281698698;
    msg.theta = 0.447604456607;
    msg.psi = 0.348182477124;
    msg.u = 0.614920614522;
    msg.v = 0.890324327791;
    msg.w = 0.897051679869;
    msg.p = 0.661758473863;
    msg.q = 0.453091221996;
    msg.r = 0.163280168611;
    msg.svx = 0.996477720922;
    msg.svy = 0.536542389277;
    msg.svz = 0.143539573906;

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
    msg.setTimeStamp(0.336561003976);
    msg.setSource(9897U);
    msg.setSourceEntity(213U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(34U);
    msg.op = 147U;
    msg.entities.assign("XLFXHBTCQOPKCZFBTEOCITNDNHBPISTWTXBZLTMWRCMHYSRFYATYSQHXMEFKRBNGTZGDDUAVOHGHKVGEZAYYQJGHWMRLRGJIFSANVDDUISTABNYJUKEDHWAUJYZNGJCDDMQVEVWJVMRIXFPUNHUGUKPRECKOPMPRBBRCFVUICOLWARBPJFKXMPYOQUZXEWCBULIJSGCFKSKLSYPIAZMOQQOXLSVLVQJNNXEXGLANZW");

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
    msg.setTimeStamp(0.0139713013851);
    msg.setSource(9420U);
    msg.setSourceEntity(233U);
    msg.setDestination(16219U);
    msg.setDestinationEntity(9U);
    msg.op = 244U;
    msg.entities.assign("ELCOLECBJKWYRP");

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
    msg.setTimeStamp(0.956927123091);
    msg.setSource(47302U);
    msg.setSourceEntity(47U);
    msg.setDestination(60404U);
    msg.setDestinationEntity(104U);
    msg.op = 194U;
    msg.entities.assign("GKACHZDRTLGMMNZAYQBTZXKVBONOUEIONFSUUXCMGQJSQPUWTENOABHXEXIFERTCNWAPPXPYKCPNBMQALIDVJJKNRXBPJWGISDWLBRFKLURFSFBOIXZVECHGIOYSFUKFXDBNGOIDPDEDGYIMQJTGZEPMZQCDOBUVJ");

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
    msg.setTimeStamp(0.560488708615);
    msg.setSource(59633U);
    msg.setSourceEntity(99U);
    msg.setDestination(41845U);
    msg.setDestinationEntity(194U);
    msg.type = 110U;
    msg.speed = 60127U;
    const char tmp_msg_0[] = {67, -122, -60, 33, -26, 106, -9, -73, -26, -71, 59, -67, -26, 39, -70, 75, -46, -102, -19, 116, -30, 90, -7, -85, -53, -13, -28, -118, 96, -15, 118, 65, 87, 55, 79, -41, 19, -49, -58, -64, -37, -77, -104, -5, 19, -81, 5, -51, 122, -48, -57, -112, -75, 76, 81, 104, 56, -74, 118, -119, -100, 74, -8, -61, -30, 59, 107, -86, 126, -12, -54, 19, 40, 102, 113, 40, -4, 30, 75, 120, 73, -1, 48, -104, 72, -118, 39, -52, 109, -114, -83, -15, -83, 72, -19, -125, -60, -25, 40, 43, -6, 25, 4, 81, -116, -60, 55, -68, -34, 59, 122, -11, 77, 33, 91, -107, -60, 21, 117, -118, -26, -13, 11, 61, -30, 54, -85, -108, 39, -109, 43, 93, -120, 51, -66, 39, 10, -111, -110, -102, -63, -86, 68, -97, 87, -95, 117, 64, 103, 74, -63, -105, -104, -93, -117, 109, -27, -49, 98, 121, 85, 28, 67, -54, -83, -23, 6, -47, 83, 124, -95, -5, 110, 16, 115, -59, 74, -74, -16, -35, -123, 14, -94, -77, -3, -21, -39, 59, -61, -4, 68, 33, 73, 67, -45, 35, -104, 19, 27, 108};
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
    msg.setTimeStamp(0.175780830398);
    msg.setSource(57758U);
    msg.setSourceEntity(136U);
    msg.setDestination(13753U);
    msg.setDestinationEntity(97U);
    msg.type = 46U;
    msg.speed = 37068U;
    const char tmp_msg_0[] = {-61, 109, -48, -95, 23, -65, -98, -41, 46, 71, -110, 62, 112, 85, 102, 18, 25, 62, 28, -108, 59, -111, -110, 68, 63, -128, -116, -22, -74, 116, -100, 67, 1, -111, 3, -66, -34, -53, 115, -65, 85, -9, -99, -22, 67, 7, -50, 122, -90, 48, 64, 92, -5, 26, -39, -71, -28, 42, 37, -122, -52, -31, 9, 21, 109, -92, 41, -124, -5, 91, 114, -23, -108, -111, -98, 89, -97, 78, 80, 36, 110, -36, -78, 73, 66, -80, -96, 69, -25, -104, -6, 123, 88, -12, -52, 101, -15, -110, 105, -111, 103, 92, 69, -11, 24, 40, 93, 37, 25, -38, -84, -1, 82, -123, 88, 38, -66, -116, 100, 6, 9, 104, -95, -27, -28, -49, 115, -24, -2, 36, -62, 14, -73, 22, 84, 125, 126, 41, 85, -67, -69, -88, 45, -23, 7, -39, 93, -38, -64, -19, -104, -16, 62, 43, 108, 110, 14, 111, 58, -27, -49, -107, 19, 82, -7, 8, -2, -29, 47, 53, 112, -40, 116, 66, 15, 26, 107, 116, 34, 84, 122, 78, -39, -1, -95, -91, -52, -84, 44, -99, -68, 120, -19, 41, -63, -17, 107, 32, -31, -120, -114, -52, -97, -3, 103, -6, -43, 20, -76, 1, -46, -88, 88, -5, 60, 75, 8};
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
    msg.setTimeStamp(0.0645699155004);
    msg.setSource(64181U);
    msg.setSourceEntity(194U);
    msg.setDestination(14384U);
    msg.setDestinationEntity(31U);
    msg.type = 122U;
    msg.speed = 25413U;
    const char tmp_msg_0[] = {120, -82, 1, 111, -81, 21, -110, 55, -27, -117, -43, -80, -77, 90, -77, -88, -106, -117, 80, 37, -64, 82, -49, -71, 74, 57, 88, -11, -97, 62, 69, -16, 106, 17, -37, 86, -48, -75, -82, 110, -38, -36, -128, 120, 115, 82, 71, 121, -37, -78, -42, 82, -64, 125, 98, -75, -35, -44, -77, -49, 93, -34, -128, 106, 84, 29, 124, -23, 62, 50, 1, -118, 4, -69, 125, -38, 65, 28, 96, -20, -17, -21, -49, 89, 72, 16, 27, 57, 74, -42, -15, 35, 50, -84, -28, 94, -126, 124, 91, 0, -116, -17, -82, 81, 28, 106, -52, -89, -105, -4, 48, 98, 114, -41, -91, 39, 8, -92, 88, -34, -47, -2, -23, -20, -13, -29, -124, 47, -123, -54, -22, -26, 61, -18, 27, -16, 44, -36, 103, 20, -74, 101, 107, 108, 75, -118, 21, -115, -99, -91, -46, -12, -101, -124, -35, -102, -105, 32, -32, 82, 108, 111, 50, 13, 5, -121, 103, 62, -27, 76, -97, 104, -58, 11, 3, -7, 66, 126, -107, -43, -112, 71, 105, 121, 50, 2, 0, 55, -87, 81, -110, 96, 34};
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
    msg.setTimeStamp(0.318990134018);
    msg.setSource(34576U);
    msg.setSourceEntity(143U);
    msg.setDestination(59921U);
    msg.setDestinationEntity(26U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.702570534617;
    msg.bank2p_pgain = 0.788973006419;

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
    msg.setTimeStamp(0.5247655183);
    msg.setSource(2417U);
    msg.setSourceEntity(231U);
    msg.setDestination(2663U);
    msg.setDestinationEntity(51U);
    msg.op = 56U;
    msg.tas2acc_pgain = 0.211241733152;
    msg.bank2p_pgain = 0.762813877285;

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
    msg.setTimeStamp(0.771832469632);
    msg.setSource(22447U);
    msg.setSourceEntity(234U);
    msg.setDestination(62675U);
    msg.setDestinationEntity(146U);
    msg.op = 91U;
    msg.tas2acc_pgain = 0.0608724749474;
    msg.bank2p_pgain = 0.145072053818;

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
    msg.setTimeStamp(0.742235435246);
    msg.setSource(19051U);
    msg.setSourceEntity(215U);
    msg.setDestination(47980U);
    msg.setDestinationEntity(158U);
    msg.available = 610479467U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.157357076727);
    msg.setSource(41294U);
    msg.setSourceEntity(90U);
    msg.setDestination(32440U);
    msg.setDestinationEntity(72U);
    msg.available = 114032754U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.0764010684775);
    msg.setSource(30385U);
    msg.setSourceEntity(93U);
    msg.setDestination(4198U);
    msg.setDestinationEntity(35U);
    msg.available = 3939617370U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.300686180919);
    msg.setSource(38355U);
    msg.setSourceEntity(76U);
    msg.setDestination(64251U);
    msg.setDestinationEntity(28U);
    msg.op = 6U;
    msg.snapshot.assign("VRAAPPVZVUCEZLZWMBWOJRDGHILPFYFVCRCKKONUDYPDPCQHPUIHJNHRJUQQKELHSWSOQXSGVYATLANDWBRBHNPIWTBSZZRASTBSQENZEDQGSREDYFGZQYKNLUJVXMHMBCJXIMIGHMTPHIVGXYXFXCZOTMYARJTBOJSNCEUCTTGEVUUWQODHBALWLYJNOOKF");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 148U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("QRNNUJUSCTXVFHAMBLSGTSRIBJMAFYPEIOJOTHCIASFFZOTQJDIVTJNMOVMKWLGRDBIFXPBNMZGMJRNBOZQIRQESPUOOSYKKNGKEZPDPSPNYHTHJZOXVWHFE");
    tmp_tmp_msg_0_0.description.assign("LFWBMAIMSHRULTXUWPBCLCBOZAYZOOAHIOKEBWZCGOGPIOPPFSJVMYSVJRCFKJWCKATBJRIRIQDMSPBBNVTGNJQUZHKZFFQHMENDGDSN");
    tmp_tmp_msg_0_0.vnamespace.assign("PRLTDIOUVFB");
    tmp_tmp_msg_0_0.start_man_id.assign("CBRUUMCGZOYMVWYCMAKQLOZZHUKXMSXALFWOYBAWFLYGEIOOJXMHSZVJPBLQCSHUVYHBJGTSLNUEDWDOXVALCCUNMQJQTMRRTNRKHSAIFIVWRVFXOJDKOJL");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("DLPFOVNWAWSPIJXSEZQTRYMIELMFYPFTMRYKIJSZWRPUDGVRTWJBOYDPRQXZOXAOWJHBMPMHTKTCTUIUSTESYQHNTJDBQRVOZANPOHKSDXOMXPWXXRNVLBYJIWOPYFMBBUBQCGGVSHNEDRRA");
    IMC::CommsRelay tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.703136813471;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.771812078244;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.74370061663;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 153U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.duration = 41772U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sys_a = 48649U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sys_b = 52286U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.move_threshold = 0.540330654279;
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::DevCalibrationState tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.total_steps = 92U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.step_number = 79U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.step.assign("FLGWVYDOSCDWMJBTHYJBGULYFPTBDARWIKEVFHUNPJSYHDDJSKMEXXHEWCMAOSZGWIHWYBICGOSZAABLUPRRHIRBEEAFUILXEVUBIRJTFCCQBKYNZKRWCXKIFUMRHGDHYZTTOIXCDSEBXOPUZQMUOAVVGTJRMHKMNJTPXLEZDSNTPIQJKNXWRVGPSOWQXMUDYTNJMPAWVLNFQEMYZBAGSQCALQCQFZUPHVOFKSJO");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.flags = 32U;
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::LogBookControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.command = 173U;
    tmp_tmp_tmp_msg_0_0_1.htime = 0.199763047382;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.568455873467);
    msg.setSource(41551U);
    msg.setSourceEntity(26U);
    msg.setDestination(5884U);
    msg.setDestinationEntity(211U);
    msg.op = 228U;
    msg.snapshot.assign("WSITDZCXQVEKQLRMIOXUZMNEZXPZBXTUAVWJNSEDFNMYEFMQNHTGEKAJJFUBUOTCRHWNYDQRKJSKNXBPECAFHCFCJSGJOJCFTALGUGIXGARXI");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("FHPEFBDQDXXTEMNPGKCZEXMHOECMRTZBQYCZJMFDRHNKGGYUSZVKCTNSBVJAIPWZRAGUVSSTPOBLIHCGREKNVOMVOHLTWHNTLAQFESLQQIUAX");
    tmp_msg_0.op = 88U;
    tmp_msg_0.lat = 0.314703990667;
    tmp_msg_0.lon = 0.337953248549;
    tmp_msg_0.height = 0.658384829742;
    tmp_msg_0.x = 0.51119264976;
    tmp_msg_0.y = 0.97162060005;
    tmp_msg_0.z = 0.441198170513;
    tmp_msg_0.phi = 0.868698309043;
    tmp_msg_0.theta = 0.68885280693;
    tmp_msg_0.psi = 0.45929689935;
    tmp_msg_0.vx = 0.0539467693175;
    tmp_msg_0.vy = 0.251763264402;
    tmp_msg_0.vz = 0.954417857513;
    tmp_msg_0.p = 0.195773464293;
    tmp_msg_0.q = 0.45804845856;
    tmp_msg_0.r = 0.363995970974;
    tmp_msg_0.svx = 0.113789681294;
    tmp_msg_0.svy = 0.995581691522;
    tmp_msg_0.svz = 0.167394425701;
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
    msg.setTimeStamp(0.663021606316);
    msg.setSource(33192U);
    msg.setSourceEntity(87U);
    msg.setDestination(51803U);
    msg.setDestinationEntity(135U);
    msg.op = 228U;
    msg.snapshot.assign("UWVNQKRHVORLXXAKIHIMSFCKFVQLPCQBSWZZRKXLGTCXOYTHOCYFFBJYMQBEMDNGPWBWDCLMEGLPOK");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("WZLIITFXGEVKJHLNLJANTEJNRQDGDBTXHEWLPSPPFRGVNDYZPHSUUNLGIOTIJJGLHBGQJXZKIXKTVMRCIFBLBMAWPQGOYREQUMFCDKDJAZXRHABGTZFNXHHKJERANQMOECZETBDOVUW");
    const char tmp_tmp_msg_0_0[] = {-46, -76, 12, 1, -47, 46, 53, -58, -116, -91, 118, -48, -100, -37, -50, -17, -43, 35, -74, 14, -28, 28, 1, -23, -42, -72, -116, -108, -18, -103, 8, -121, -76, -18, -19, 56, 5, -111, -128, -105, -95, -74, -37, 66, -112, 113, -112, -70, -92, 59, 2, 112, -110, -124, 23, -98, 112, -32, -73, -82, 26, 36, -78, 87, 101, -73, 50, -5, 17, 85, 71, 126, -19, 69, 62, 51, 60, 98, 114, -111, -75, -29, -42, 67, -102, 28, 41, 71, 82, 8, -115, -35, 65, -125, -120, 123, 71, -88, 98, 28, 91, -23, -101, 67, -33, -62, 3, -72, -99, 37, -118, 8, 113, 73, 114, -33, -21, -94, -94, 115, 52, 49, -112, 52, 33, -47, 41, -85, -103, 84, -99, 32, -80, -82, -9, 90, -74, 64, -96, -7, 10, 50, -2, 124, -43, 3, -60, -30, 12, -28, -79, 107, -46, -55, -9, 86, -99, -79, 121, 120, -106, 81, 88, 0, -47, -57, 7, 93, -82, -125, -61, -113, 35, 62, -126, 1, -63, 38, -42, -77, 102, -76, 63, 30, -24, -94, -93, -97, -72, -104, -83, -118, -78, -71, -9, -18, 78, -50, 15, 65, 35, 58, 50};
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
    msg.setTimeStamp(0.625367316559);
    msg.setSource(26115U);
    msg.setSourceEntity(49U);
    msg.setDestination(6309U);
    msg.setDestinationEntity(246U);
    msg.op = 69U;
    msg.name.assign("VTFPUOLAGKQMGEZKVSUAZQJLLGVEQB");

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
    msg.setTimeStamp(0.876975265786);
    msg.setSource(55120U);
    msg.setSourceEntity(19U);
    msg.setDestination(43850U);
    msg.setDestinationEntity(56U);
    msg.op = 147U;
    msg.name.assign("BTXWSVKGWIFONYCMOXVLPFYHEIBJFUNDPCJJOFPGXOZSUPLXPLA");

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
    msg.setTimeStamp(0.73325604826);
    msg.setSource(29976U);
    msg.setSourceEntity(71U);
    msg.setDestination(63498U);
    msg.setDestinationEntity(83U);
    msg.op = 132U;
    msg.name.assign("CFNUEEALECKZLHDTTSEFPQIOOIOHWHVQMSIYWMVNPVDACSRTYPBRRLIJTYUHCWMNFKNGBJCZZFLSXAILFJKWMVOVDDGRJQHSKHUXHUKUTTTEFAKJEIUKCZMFWEWNAYWMXOZYXLSBSECQYTZHLDGWGFRZUZGOSNYAGCVGNLLQRJDXJRBBPDBKIMDAPOXGJIYCWICGDQBJDBVANIRZQTYGVUXOUPAKPHRSNXPQLMEOQPFPEFAQXHXWBU");

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
    msg.setTimeStamp(0.045804596253);
    msg.setSource(9490U);
    msg.setSourceEntity(56U);
    msg.setDestination(59234U);
    msg.setDestinationEntity(158U);
    msg.type = 118U;
    msg.htime = 0.0395204799126;
    msg.context.assign("PKUTDSVDERJTXKZGXOIBTMQRWKKWSWEQJKCFIDAZYBRKWIIZJENJGVFKYQMRYRBDUKFLEYLTDZAG");
    msg.text.assign("REPYLUXWZZEETOAMAKJBZSKXETMFKXPUOQPTYFFWSLRRYSJNQFDQDDVYWCJTSGZCQCWXNDTBUPEKKHSDEQCIMIMFWBZHBXGCZYBKLNXRVMRGAZAYXZNLKCWFUTIDHMVVSQBBUGVJIHEOIUGAIOASDJVOLYIEJHHNIAVHVDHQBJFJPULGMZBPWGMXDHJFKMUYPQNGUVOO");

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
    msg.setTimeStamp(0.671296570596);
    msg.setSource(6846U);
    msg.setSourceEntity(99U);
    msg.setDestination(1387U);
    msg.setDestinationEntity(238U);
    msg.type = 239U;
    msg.htime = 0.453843524603;
    msg.context.assign("GHFTLPOODNGGTGEFRCNBIXKZJBEXRLVDKRWKFHZIXXJJLNQKWCQORYVKFDHHVMVLCAIYWEYGMBOCFYBVKORBNWUAIEQULEFREMMDIPZSAPCIUMEBMJIOCMBXYANQLMVPNWALAHWHJQVRUQHICXTMCKIAHMRDTPNPLLIURAWVEODNYSXQTSZHDHARZPQUKND");
    msg.text.assign("FBUWUHLTGNKGVMJPVFWYGBTFZJMKTIDRAHSDIPJTMWFMXEXBNBRWEOHXBGKDVOJKUAQRIJBERSSTLLYULFCGKZTDTYOEFLENNUQVSQSAKIJRNWYODXLYBXWVZCHYLS");

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
    msg.setTimeStamp(0.823497589431);
    msg.setSource(62429U);
    msg.setSourceEntity(108U);
    msg.setDestination(33981U);
    msg.setDestinationEntity(252U);
    msg.type = 160U;
    msg.htime = 0.0119846032073;
    msg.context.assign("GOVXSLEWQFJSKICZZAIYLZRVDCMVRLWMYIHMEOWVJTQRHHSBLAIVGZEAPMTFQMBWGDPVMNOTSPUFWEJZADXPPPTSXGXUIGYXQYLXRCRNOOKENNFKVIGBRMCEJMSFVPDBMZBYJNUWBIJVULLGHJWIKOHDDOAQCTRNUZUPEUIHQRLNMRDUJWCXFQKDOIUKKTLJFAYCZHAPAZR");
    msg.text.assign("IPLMUMFTXOENGSOJTYDPYQWDGYNTJDHZFKRYGFMTMKJQWBKHNEBUWTKNOHLJCCPDJKVIFMBABDUSIGERALCOFDEUZRUJTOBNCPXXNJBZEPQVOZFAFVOITZWLULHHHXRQPLDZRNSXQYQJNKLOFZYVECUIQSPJHAWGMZZKXXXBKCKOBCGUERFVEISODAPGILJHMMVFUAWPGSCGQTSXIYZDASYQRXYWQCKAPSD");

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
    msg.setTimeStamp(0.310185011381);
    msg.setSource(15933U);
    msg.setSourceEntity(92U);
    msg.setDestination(6042U);
    msg.setDestinationEntity(224U);
    msg.command = 236U;
    msg.htime = 0.714367873199;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 1U;
    tmp_msg_0.htime = 0.358663443493;
    tmp_msg_0.context.assign("OLVQEXAGZDUYHRDBPRGXTPJRDBIBCUXTMVNARXRRKUQZGDMPOJJXEOXZOFCQKIMCSWJUYQTWMUADHMIGCLVKXVYFNHZHTPMYAQIHFULUFRGAKHKJLFSPIGOCYGVAHMENASEBDSTUPOSELBZBSNHHZRBLFIKWGMFNEVZSWWQWJJNCKDEYLRZPXIWIQYMABNWBNJLPYEEPTVJSZTWOVGOVLNIKSQFQXDLOYACOGUTVWKDNRFZIBACXJ");
    tmp_msg_0.text.assign("HEPLZNXMCJEKXIMRFXQFKUAGRYOONPHXPBGTRJJAFXAITBOUSVCTUVEUMPHYYOUVGEKXPDRSJWMCPGZPDTDDJBNTEIQKSOQVMTQDBVUGQJYVFCYIFELPBNOWILWLFYUWGXAYAKSHOGRBZMAIHMOQZLLXVDNIJDMFAQNUTLYNKALFJEJSNEQOSHXKVZGHUDZRPCQSCGEABNTJBHZSWWHRWIZKMTMEIRNKFZPDCOURYXRFCZIGBTSWLCD");
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
    msg.setTimeStamp(0.412951331746);
    msg.setSource(7522U);
    msg.setSourceEntity(243U);
    msg.setDestination(31012U);
    msg.setDestinationEntity(136U);
    msg.command = 210U;
    msg.htime = 0.300548729494;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.279206886526;
    tmp_msg_0.context.assign("RDOHQOCDVZZYYOBLY");
    tmp_msg_0.text.assign("DKWPCRIWSLVBRPDISTPYFKWPWSUJJIJHEFBQBVFQVWZAQZTUUXIRDMACWOFKCSLHEHNQCOJHYMGGMRSAXVU");
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
    msg.setTimeStamp(0.900530751725);
    msg.setSource(38274U);
    msg.setSourceEntity(225U);
    msg.setDestination(49957U);
    msg.setDestinationEntity(194U);
    msg.command = 229U;
    msg.htime = 0.629976155314;

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
    msg.setTimeStamp(0.211061990835);
    msg.setSource(12008U);
    msg.setSourceEntity(187U);
    msg.setDestination(23924U);
    msg.setDestinationEntity(180U);
    msg.op = 148U;
    msg.file.assign("TCCZZFCPEAEKJGVSTSREXVYOLPBHZXHBUTMLZFSJJVDTNGDLNOHVGURPOCDGVKPGERFBCIQFJNMNPZOWYTULVTJAIWDSPYTLAXLYFRASMWKJBYQRHBQNV");

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
    msg.setTimeStamp(0.574083782926);
    msg.setSource(24213U);
    msg.setSourceEntity(95U);
    msg.setDestination(64599U);
    msg.setDestinationEntity(69U);
    msg.op = 112U;
    msg.file.assign("QJLMCWOYJMNRJQPDVKJLGPLTHBURBVJFFFVZQMYQKKNGBCUSFOGWEJOEECAOETXZDLMNFPPHTVYSOIYFAWWZDFGDTHIIQDWTUZHKRQQCGNVVKCMWIPXMASTVAMEVHEUTROXXBCNHHEKBAYTPXTWYIDGSGRFCUOEGYXWSZYLRPUVLRWXJAERSGUIZRASIXLUHNAHIDCBNOMMNOZBOUJPPN");

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
    msg.setTimeStamp(0.493556135021);
    msg.setSource(60253U);
    msg.setSourceEntity(193U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(235U);
    msg.op = 211U;
    msg.file.assign("XRSSEUHTLIOLSLIMCYVKASHLOZYXKZVDOKORQAEJAEFZHZGDULXNVIOTWKCLSKDODVFUDKALBIMRBOMNXWGEBJGGYLPSNTFRGBSESZGIWPTHQVMAUYCECTPUXLKYXBYYVBADYIAYTBHLGQOB");

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
    msg.setTimeStamp(0.186298756428);
    msg.setSource(14579U);
    msg.setSourceEntity(103U);
    msg.setDestination(8344U);
    msg.setDestinationEntity(195U);
    msg.op = 84U;
    msg.clock = 0.176214610703;
    msg.tz = 72;

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
    msg.setTimeStamp(0.406510198462);
    msg.setSource(45236U);
    msg.setSourceEntity(173U);
    msg.setDestination(5411U);
    msg.setDestinationEntity(29U);
    msg.op = 183U;
    msg.clock = 0.16629002854;
    msg.tz = 84;

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
    msg.setTimeStamp(0.957583618735);
    msg.setSource(48177U);
    msg.setSourceEntity(73U);
    msg.setDestination(5714U);
    msg.setDestinationEntity(7U);
    msg.op = 217U;
    msg.clock = 0.916497191512;
    msg.tz = -93;

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
    msg.setTimeStamp(0.725570952946);
    msg.setSource(5459U);
    msg.setSourceEntity(20U);
    msg.setDestination(3365U);
    msg.setDestinationEntity(20U);
    msg.conductivity = 0.898835961595;
    msg.temperature = 0.469356475987;
    msg.depth = 0.880092844468;

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
    msg.setTimeStamp(0.173196254069);
    msg.setSource(21097U);
    msg.setSourceEntity(98U);
    msg.setDestination(38783U);
    msg.setDestinationEntity(94U);
    msg.conductivity = 0.771253222483;
    msg.temperature = 0.374329388647;
    msg.depth = 0.335483386865;

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
    msg.setTimeStamp(0.226394037377);
    msg.setSource(45882U);
    msg.setSourceEntity(54U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(202U);
    msg.conductivity = 0.551167211182;
    msg.temperature = 0.443314250368;
    msg.depth = 0.663112228903;

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
    msg.setTimeStamp(0.623357744196);
    msg.setSource(43693U);
    msg.setSourceEntity(82U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.609888250093;
    msg.roll = 33171U;
    msg.pitch = 10387U;
    msg.yaw = 10134U;
    msg.speed = -1919;

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
    msg.setTimeStamp(0.835836687341);
    msg.setSource(56758U);
    msg.setSourceEntity(252U);
    msg.setDestination(6U);
    msg.setDestinationEntity(169U);
    msg.altitude = 0.874638350021;
    msg.roll = 55831U;
    msg.pitch = 54372U;
    msg.yaw = 33008U;
    msg.speed = 5033;

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
    msg.setTimeStamp(0.0897239315129);
    msg.setSource(22455U);
    msg.setSourceEntity(159U);
    msg.setDestination(12893U);
    msg.setDestinationEntity(190U);
    msg.altitude = 0.628754729098;
    msg.roll = 48786U;
    msg.pitch = 47592U;
    msg.yaw = 13925U;
    msg.speed = 13947;

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
    msg.setTimeStamp(0.83099049579);
    msg.setSource(12274U);
    msg.setSourceEntity(43U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(58U);
    msg.altitude = 0.103598906422;
    msg.width = 0.433654441549;
    msg.length = 0.641359777792;
    msg.bearing = 0.645442382986;
    msg.pxl = 11823;
    msg.encoding = 4U;
    const char tmp_msg_0[] = {6, -75, -89, -13, -76, 41, 44, 19, -111, 63, -28, 22, 5, 114, -17, -75, 35, -106, -25, 103, 102, -45, -36, 40, -64, 58, 84, 11, -47, 101, -19, 48, -33, -89, -29, 88, -75, -82, 63};
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
    msg.setTimeStamp(0.143379236667);
    msg.setSource(27528U);
    msg.setSourceEntity(66U);
    msg.setDestination(31293U);
    msg.setDestinationEntity(254U);
    msg.altitude = 0.495075367757;
    msg.width = 0.850202722014;
    msg.length = 0.631348737658;
    msg.bearing = 0.640491800591;
    msg.pxl = 8753;
    msg.encoding = 176U;
    const char tmp_msg_0[] = {67, 39, -30, -110, -118, -72, 56, -76, -127, -27, 7, 101, -89, -76, 77, -71, -107, 94, -108, 58, 90, -126, -110, 17, -46, -76, 11, -124, 3, 73, 53, -49, -83, -119, 124, 27, -99, -99, 46, -32, -48, -87, -77, -108, -47, -126, 106, 126, -28, -61, 115, -82, 17, 30, 122, -28, 69, 74, 30, 48, 10, -35, -69, 87, 105, 17, 88, -37, -25, 1, 59, -117, 20, -39, 83, 103, -54, -30, -99, 3, 65, -110, 99, 106, 22, -5, -92, -35, 48, 119, -71, -44, 48, 44, 113, -34, -119, -48, 45, 53, -47, -45, -18, -106, 55, -91, 120, 82, 56, -44, 18, 96, -124, 114, 75, -114, -46, -57, -63, 123, 56, 110, -61, -88, 65, 16, 103, 71, -71, -67, 107, -60, 72, 79, -47, 2, -126, -106, 110, 80, 12, -116, 39, 19, 102, -29, -123, -93, -109, -37, 52, 62, -96, -7, 69, 113, -67, -116, 70, -102, -44, -113, -71, 12, -35, 4, 64, -23, 122, -96, 73, 81, -99, 61, 8, 21, 27, -72, -105, -51, 50, -76, 90, 124, -83, -61, -12, -95, -69, 63, 27};
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
    msg.setTimeStamp(0.202525542728);
    msg.setSource(20495U);
    msg.setSourceEntity(77U);
    msg.setDestination(62415U);
    msg.setDestinationEntity(30U);
    msg.altitude = 0.810378291075;
    msg.width = 0.504699413395;
    msg.length = 0.00620732309183;
    msg.bearing = 0.119311811802;
    msg.pxl = -2541;
    msg.encoding = 243U;
    const char tmp_msg_0[] = {79, 32, 7, 8, 90, -85, 85, -89, -56, -77, 125, 75, 45, 53, 89, 113, -34, 116, 106, -36, -106, 98, 121, -62, -39, -16, 64, 57, 27, -93, -87, -78, 59, 112, -61, -4, 35, 121, 41, 54, 88, -64, 63, 29, 44, -36, -64, 39, -82, -28, 72, 78, -59, -108, 75, 114, 86, -6, -6, -90, -32, 50, -20, -77, -57, 73, -42, 55, -63, 68, 39, -31, -25, 107, -61, -74, -81, -67, 56, 12, -127, 113, -41, 27, -72, 36, 81, 72, 62, -4, -32, 38};
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
    msg.setTimeStamp(0.98832099848);
    msg.setSource(44865U);
    msg.setSourceEntity(88U);
    msg.setDestination(4708U);
    msg.setDestinationEntity(14U);
    msg.text.assign("GRSQPKBIVPUHOHTQECXIFDO");
    msg.type = 158U;

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
    msg.setTimeStamp(0.632851551878);
    msg.setSource(62558U);
    msg.setSourceEntity(20U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(73U);
    msg.text.assign("JALCVHZDQBVOGQWTZQKBNQRFUFDBVOMFBZMKEK");
    msg.type = 234U;

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
    msg.setTimeStamp(0.580984121246);
    msg.setSource(32337U);
    msg.setSourceEntity(103U);
    msg.setDestination(9470U);
    msg.setDestinationEntity(39U);
    msg.text.assign("QDULJEIZLUBKYRHEIGTEDHAVOCZPAMWVJKGZUYUSAPQQRTJRXNONFIAJSLBPGXCIOZMWNFNGNPSUACPWAKHUINFXFHRHJIBWCIOATYFXMMXRLVUPTRSLFCD");
    msg.type = 244U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0645227906053);
    msg.setSource(23647U);
    msg.setSourceEntity(88U);
    msg.setDestination(1261U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.820449823271);
    msg.setSource(6519U);
    msg.setSourceEntity(133U);
    msg.setDestination(50859U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.107136093333);
    msg.setSource(48111U);
    msg.setSourceEntity(73U);
    msg.setDestination(33627U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.394732078463);
    msg.setSource(8193U);
    msg.setSourceEntity(186U);
    msg.setDestination(37205U);
    msg.setDestinationEntity(204U);
    msg.sys_name.assign("SPRAKNXTPVDWXLVCAZIAWVBEOTMKWZVOCCDLSIVKKBYUEGAFNPDAQUINDQAMPHRXBQERNSOQGIVMNJGBJUYFVXNEMHBWVGAZUGDLLLJUTIYIDCFSFEYRQTQTMDTYKDWRRHEBFYKHBZFWMJRJEKZYYREJDKSTJPOSCUZGYEUFXQJSHTFHJSWMVCOQLPQOPYXZZPCAILMXLRVCTNUAKMGGFWTOXLHHGFBQXUSWHPZCINWUSMNLPEB");
    msg.sys_type = 18U;
    msg.owner = 34493U;
    msg.lat = 0.128282160781;
    msg.lon = 0.797498458038;
    msg.height = 0.906256714162;
    msg.services.assign("FEHLYPKBBVCCQLWDZRKSGGESOVPCPFMYXDQBPTWRRFYYWQTNYFWIXRJXKAZQZJBSVEIGIDANUXTLQEEDITLYZPAOUOQVHWUSGKBBFGWWDDCUVOGNMFJSSVMHLIKIHNJFZTXILZIBYJYETMRDQKZKENCOJAPMMOZQUTWGEOAFNULEIJRHCPHLNMVOEHDPVTAAWWTIADXUPVXCCYGMTCBKCRHPNO");

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
    msg.setTimeStamp(0.0550853043609);
    msg.setSource(58961U);
    msg.setSourceEntity(84U);
    msg.setDestination(29853U);
    msg.setDestinationEntity(102U);
    msg.sys_name.assign("HFTQQOFXUHBPRSSHXJYWWANHPZVYIQAZOQLCMGXERKENELZNHATDDIXQTICITEKJGEPLDSGGBCQKYJAWPMKEWDOIJUNZTVPSAIOTGYACGOJAFXOBBDXFYJFWSZVKPLLHRJYUMDSORVCKIZRULNBORHSRKHMVDYPMCKVEUNUQVAPYBFRRZBIUXFMYWBGXWCGEMQFSNUJE");
    msg.sys_type = 130U;
    msg.owner = 8870U;
    msg.lat = 0.117604970269;
    msg.lon = 0.80316313564;
    msg.height = 0.710390934296;
    msg.services.assign("YKWFAISAKFRIPYDVEOHKKJHDEERTUCRJNSMQMQFTYXLYCWMXTXNTORGJZFPJYDSKNXIHYVTHSKPBJLKWIROMQDUTSRUIMNMVGMSKOBJVCWWEQVZFNWLACFTFRBHOIGSHUXAJAZD");

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
    msg.setTimeStamp(0.183805245933);
    msg.setSource(13721U);
    msg.setSourceEntity(23U);
    msg.setDestination(14200U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("OTAAPKFLYZGCQWKWKZXHIBORTYNCCUWMZUHTZYQFISXGLAUHHMOUKBEDVWADKDFM");
    msg.sys_type = 45U;
    msg.owner = 63323U;
    msg.lat = 0.522777552984;
    msg.lon = 0.331310392785;
    msg.height = 0.7186289168;
    msg.services.assign("OLRJWJIRWKLRUOSBGEOCQBDWDPDXECZSQYMQINNAKFDXGTXLEVLWOMMHRUKVCPHUNGBIFFFJDGKQVISXOYXACARMDRHSSSL");

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
    msg.setTimeStamp(0.164425225822);
    msg.setSource(42690U);
    msg.setSourceEntity(126U);
    msg.setDestination(29003U);
    msg.setDestinationEntity(253U);
    msg.service.assign("OYHRNIKGFAHDOIRNZGDPNSREURUBGDUDAGERCYFJHVZIUHZWXIBPAEVOFUPVBTSFGCLCMGKJTWEJPIXCHKEYXRQIEQOECUADBGHMOFYZVBOMLTEAAWMAPTVMNQYKBVMNCYOZKPYIPOZBNXUKLYQSODZYZJQCANXSKJUNUFDNXQRWGVYWXLVFXMTEWLSBJWTMHWPUCHAIJNRSTSABCVLJQWJIDWGRCKKOLGHVBTFFTTIDPQZMXFD");
    msg.service_type = 252U;

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
    msg.setTimeStamp(0.514860150331);
    msg.setSource(63947U);
    msg.setSourceEntity(222U);
    msg.setDestination(44710U);
    msg.setDestinationEntity(49U);
    msg.service.assign("CQHLVVDFEIYCUU");
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
    msg.setTimeStamp(0.706428031787);
    msg.setSource(51833U);
    msg.setSourceEntity(160U);
    msg.setDestination(49369U);
    msg.setDestinationEntity(187U);
    msg.service.assign("FUMQUSXLXDMLGPUPMTHDSPMYGAKNCSCTXXGCPWRBQZCFQOQWZJBEHDDSWXYEKXWKAJLDZGIJGAYHUBOAEWWYJUIBOXNHBLETQKAJFFZBZRWZYKIAGIUUDVCVBBKWNVLQJALUHVVJRTMGNOBGOYCEIAFKZJBUIGHFHOPVVWEDOKREXLTZYFPENVXODHPQSSAIIROQMNJYHJPQXNADUCOKVKRSYTRMF");
    msg.service_type = 27U;

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
    msg.setTimeStamp(0.414347720038);
    msg.setSource(11492U);
    msg.setSourceEntity(119U);
    msg.setDestination(63897U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0989120136014;

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
    msg.setTimeStamp(0.292633861805);
    msg.setSource(4702U);
    msg.setSourceEntity(79U);
    msg.setDestination(28637U);
    msg.setDestinationEntity(209U);
    msg.value = 0.823922263093;

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
    msg.setTimeStamp(0.0234719880045);
    msg.setSource(56162U);
    msg.setSourceEntity(189U);
    msg.setDestination(36147U);
    msg.setDestinationEntity(66U);
    msg.value = 0.432650883382;

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
    msg.setTimeStamp(0.994880507736);
    msg.setSource(49675U);
    msg.setSourceEntity(16U);
    msg.setDestination(2388U);
    msg.setDestinationEntity(114U);
    msg.value = 0.196436449265;

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
    msg.setTimeStamp(0.955024569968);
    msg.setSource(5856U);
    msg.setSourceEntity(74U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(10U);
    msg.value = 0.558674600267;

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
    msg.setTimeStamp(0.840501326484);
    msg.setSource(38549U);
    msg.setSourceEntity(249U);
    msg.setDestination(22827U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0964782255128;

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
    msg.setTimeStamp(0.260401740519);
    msg.setSource(53435U);
    msg.setSourceEntity(127U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(63U);
    msg.value = 0.974284715479;

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
    msg.setTimeStamp(0.268811781787);
    msg.setSource(44140U);
    msg.setSourceEntity(246U);
    msg.setDestination(39224U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0850023369749;

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
    msg.setTimeStamp(0.333621196092);
    msg.setSource(41531U);
    msg.setSourceEntity(17U);
    msg.setDestination(32717U);
    msg.setDestinationEntity(224U);
    msg.value = 0.224049191013;

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
    msg.setTimeStamp(0.201385338793);
    msg.setSource(1740U);
    msg.setSourceEntity(140U);
    msg.setDestination(31043U);
    msg.setDestinationEntity(189U);
    msg.number.assign("JBGPREGLSOCUWLKPEJWUDYVCZMKDSWCHRFDAJADOIPICLAIOIJRNPEYVKZQNOQULGYAMYEJUGHKFJSEJFQGIVPPTMTSVWBECRUVXEKDAHMXQRHPTFYGBU");
    msg.timeout = 31445U;
    msg.contents.assign("RIYCWFJLOBEOTHPCRTHPBREYUKKEQRHLKVAIDHFIOSJNGUKXSZATYLMNMGGVCOMAGBXRURZESTFBWRSZBKNCCQDATOEQDJWHXAYVPLUKNJQSDVHDUDPIVZPETNRLCZWGBKHCDXCFXPGDQXAMOIPWFUPXIYVFTMFLTAAOYJUJMLXZEPSQIENFWMLVGLSMKYXWVRAEOBUXKBOLYQEZNDNMTDGTIQIGZUNSCMZJVJBKNWWRCBQH");

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
    msg.setTimeStamp(0.171108881421);
    msg.setSource(42831U);
    msg.setSourceEntity(96U);
    msg.setDestination(5537U);
    msg.setDestinationEntity(24U);
    msg.number.assign("UUJTWQEDUIIFNQFLVSWXXXVONFBNEGTEXSMBADKBRTMVUPSHOCDPZUNBFEZHTIKGHCSSHJBNGVZZMRHAKILYYVPYQQPAKWLPGJUPELGTWEBRMFPWJTJVZJPFMHDMFMRRLBOPGXNNGMUBPKMWIKHGCZGRWZOZDLFIVSBATVTCICEWCOQBYTOAHQLZYTIDFAEEDOWJVRXCLWKXDNAOYVXYXNRJGQOUHHZYCSCRDLLFIKQ");
    msg.timeout = 4073U;
    msg.contents.assign("CVDVRSHLBUQAPTYJNHCRPJEFVWBYSRXIKRYMFQIJMDKNSCLYPJLZCKNPFNBGMKURHGGELTKCRHETOHVLBYQHGIBLDGBVQDUIMHXEKNNFQFWADMZGZUXPRUWCVWSONFIWZVEALDGSZHAXMMDBCTLNBIUINOJODUFLZSQXEXOOITEGXYYJWCVKRBTHDDNMOZXQSGHACCUMMYTOWE");

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
    msg.setTimeStamp(0.826855575626);
    msg.setSource(47881U);
    msg.setSourceEntity(63U);
    msg.setDestination(41206U);
    msg.setDestinationEntity(208U);
    msg.number.assign("NZQVLKLNWJIVBOJPPVSYBNZJAZQTNPFTBUJOEHDWRRZQFRWOMGMKHATDDDEXHFNFUKTLEKQCIQTGHPWFHKMLBWYCRAPEJCXATPXSHVATZSBHDXXHIGCJSOGLSNUXEUZAXSEKYUSYYZFRELWNAXEVGRPSTZKXMIYCWJPRBFONVDIOZUDPVXNMGHMGI");
    msg.timeout = 15128U;
    msg.contents.assign("FKSQBKIWIACQMYFCPGVUUXCXYNRPSQOZSPDPHBQSBKLFVHBMUNEXHRUOJLHDAMIXWKGHQEKMFCNUNAQHOSMRMAUAQZCEIDSFOHREJIVBEWCEHROUKHTOKZEPMSEGTRDZYVGPMOXUIUNZXNBCVLTFVSTJZOXNDLQAFLCGWMDWEQPCQPLTBWXXNGWTAVJGPIGJRKYUBNVGGYBTLFDYJDZYAXBILAHSEZNR");

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
    msg.setTimeStamp(0.107952166656);
    msg.setSource(7911U);
    msg.setSourceEntity(223U);
    msg.setDestination(38451U);
    msg.setDestinationEntity(188U);
    msg.seq = 1528971742U;
    msg.destination.assign("TQQPQYQVKFDDICRPNBZIIWWPYOQNLRORLHQREEJHSQBHJFVPZVNTPAQVRWTEUBHNKKGLJMBUGKJKRRFHUNTYPOXABUTYATGLDXZJCCVEFCFAMNZSOHIXWZGNXAOWDVOUMFTEMGPSDPCYXFPWKBAHUSGLJOHZGSIYEFRAQFKVKZIYCQHUBNOSXLBDNDTJTPZYGUXRLOKTGMIWCNCMMCYIBMMCIEEWSLLIKG");
    msg.timeout = 44070U;
    const char tmp_msg_0[] = {-23, 16, 100, 40, 35, 65, -104, -53, -117, -7, -123, 95, 38, -128, -44, -43, -94, -33, 20, -80, 65, -96, 85, -109, 73, 67, 5, -6, -113, -127, 76, 83, -26, 122, -40, -6, 108, 61, -97, 76, -111, 66, 107, -1, -80, -44, -5, -101, -12, 55, 50, -44, -55, 21, -97, -124, 71, -11, 65, -32, 116, -20, -104, 25, -45, -122, 49, -79, 4, 92, 94, -3, -51, -87, -96, 95, -47, 89, 28, -56, -55, -27, -118, -78};
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
    msg.setTimeStamp(0.954862962857);
    msg.setSource(23033U);
    msg.setSourceEntity(135U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(233U);
    msg.seq = 1395464625U;
    msg.destination.assign("DIHYIQGUCKNMRQYMJRNLUUEIFYSABHXGOGDCKFLZBYWKNSEYYVCAUKLLTXGODEZRIYOODUKABJWELOAUZTBDVELOIRUFCMFJWICIGNEANJGRZJEVPPNSUFWSKTZXEJBZFMYJQRPZIPONQTVXCVBISDGKDAVSBUWVDETHMHQQPHOWGADPJKBERJZCHPTQKZYWCORPUMMFJNHYFWGLLTAQBTVXHA");
    msg.timeout = 45139U;
    const char tmp_msg_0[] = {91, -73, 109, -55, -59, 52, 100, -10, 32, 116, 110, 123, -19, -126, -36, 23, 9, 52, -94, -41, -12, -108, -44, -48, -66, 7, 15, -91, -25, -33, -71, -52, 98, -92, 17, -81, -65, 106, 108, 112, -62, -23, -112, 58, 126, 110, -81, 95, 108, -27, 42, 9, 106, -34, -107, 75, -34, -94, -11, 108, 59, 21, 114, -67, -119, -60, 31, -87, -13, 105, -28, 99, 41, -52, 124, -31, 40, 59, -1, 18, -108, -17, -17, 122, 10, 9, -50, -67, 16, -75, 78, 35, 93, -64, -57, 102, -62, -31, -13, 126, 102, 43, 80, 5, 3, -71, 30, 31, -35, -76, 19, -57, -31, -124, 71, 40, -101, -26, 35, -107, -80, -88, -70, -41, -81, 29, -95, -2, 40, 111, 83, 37, 39, 29, 58, 49, -29, 16, 9, 100, -3, 60, -110, 124, 95, -42, 126, 22, 14, 48, 77, 52, 59, -34, -66, -96, 83, -99, 33, 25, 47, -99, 115, 115, -10, -11, -52, 119, 120, -108};
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
    msg.setTimeStamp(0.28061555612);
    msg.setSource(5175U);
    msg.setSourceEntity(233U);
    msg.setDestination(9666U);
    msg.setDestinationEntity(155U);
    msg.seq = 4037758949U;
    msg.destination.assign("CAJKLEKQRLHHOMSYIBGGTCUOAOQLYCYKEZCFPPTZTGPQQVNYWTWSBVFUDWTIOBFPGBXRQPKDILCNGVTKAFVLCJKMGHZSXRZGUAJKMVLNBENVUNZJUDHJBXNYMAHXEFXXWYYHURJEJSYZNIIDEAJWOPVFRRSSVVUZXDKHDDTICIFXUOKASSOLTWLTSOMDNRES");
    msg.timeout = 24109U;
    const char tmp_msg_0[] = {86, 23, 21, 100, -27, -51, -79, 55, 83, 96, -26, -77, 65, 13, 92, 103, -127, 60, 77, 74, -44, 37, -123, 26, -113, -89, 103, 87, 89, 90, -38, 10, 124, 105, 28, 4, 68, 41, -84, 85, -90, -94, -7, -11, 75, 103, -34, 46, -77, -20, -25, -46, -37, 44, -109, 41, 66, -103, 110, -82, -43, -14, -108, -118, -65, -128, 23, 121, -120, -116, 34, -64, -55, 119, 89, 75, 95, -63, -50, 19, -92, 63, -100, 96, 66, -4, -110, 36, -65, 60, -76, -96, 0, 81, 52, 63, 27, -13, -89, 112, 40, -83, 114, -103, 86, 64};
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
    msg.setTimeStamp(0.356627455713);
    msg.setSource(32972U);
    msg.setSourceEntity(25U);
    msg.setDestination(8244U);
    msg.setDestinationEntity(227U);
    msg.source.assign("LFKEVKFCQEGOKERULSMXHDNDSHEMMIPGWCQGYLXVSMILMSIJTBJJNWEPRUKIPSZXCTMUJXBXVFNTRN");
    const char tmp_msg_0[] = {-68, -71, 52, 116, 23, -118, -124, 5, -89, 40, 54, 22, 49, -43, -75, 73, -112, 25, -93, -100, 79, -97, -95, 17, 112, -62, 76, -42, -120, -47, -125, 116, 114, -40, -14, 63, 64, -9, 47, -87, -100, -17, 74, 84, -43, 87, -86, 63, 77, -48, 110, -20, 111, -51, 66, 66, 65, 121, 81, 52, 78, -26, -106, -59, -15, 125, -39, -123, -113, -14, 74, -75, -116, -118, 118, 33, -13, 60, 121, 44, -80, -23, 124, -66, 58, 100, -77, -63, -86, 61, 6, -96, 79, 30, 103, -97, 83, -108, -90, 112, 31, -89, -21, -39, 123, -11, 62, -79, -64, -6, 20, -4, 41, 126, 78, -66, 109, -35, -25, 70, -30, -34, 63, -74, 104, -101, 94, 18, -124, -50, 45, 12, 15, 83, -5, -70, 95, 64, -111, -104, -85, 16, 36, 47, 0, -30, 56, -118, 41, -112, 39, 106, 67, 38, 15, -97, 38, 88, -1, 87, 10, 58, 41, -35, -61, -113, 44, 62, 67, -49, 85, 50, -89, -6, -9, 114, 2, 55, 37, -68, 77, -23, 87, -87, 59, 15, -112, -1, -59, -27, 120, -95, -95, 55, -53, 75, 32, -35, -36, 109, -101, 35, 35, 48, -24, 119, -77, 86, 11, -115, -30, -3, -92, -20, 62, 6, 67, 52, -8, -102, 16, -86, -124, -48, 3, -82, 82, -82, -44, 63, 75, -93};
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
    msg.setTimeStamp(0.665407405531);
    msg.setSource(28641U);
    msg.setSourceEntity(137U);
    msg.setDestination(24625U);
    msg.setDestinationEntity(134U);
    msg.source.assign("EGNQUDWEEGSIPLIQMAO");
    const char tmp_msg_0[] = {126, -98, -63, -78, 58, -57, 64, 7, 50, -33, -70, 99, 52, -34, 2, -17, 79, 18, -12, 117, 26, -50, 116, -27, -90, 24, 72, 14, 7, -107, -72, 74, -51, -22, -54, -111, 19, -44, -2, 79, -30, 94, 125, 43, 123, 13, -42, -68, 61, -112, 126, 20, 20, -97, 8, 24, 103, -51, 103, 111, -76, -90, -76, -110, -121, -120, -26, -94, 0, 73, -124, 58, 78, -25, 47, -113, 67, 106, 25, -93, -99, -96, -126, -44, 55, -106, -70};
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
    msg.setTimeStamp(0.338920016533);
    msg.setSource(11998U);
    msg.setSourceEntity(41U);
    msg.setDestination(27168U);
    msg.setDestinationEntity(186U);
    msg.source.assign("XTASIMYPTTFJXISRNCQUVFQJOVQYDAEEXLHZCNGUJHNBYOTKZGTOZLKXNZDIELHIFWZFMJBUKSFHLROYEQIWRPDQMGKDLAMNJFGKJOMYJRUPCBLRBKMIHFCYDQZHEWJUKDTCGVMVZXAIRTANGTYOSPCASEOPKXSDPOZXUWTCXDE");
    const char tmp_msg_0[] = {4, -60, 120, 10, 125, 4, -110, -81, 50, 96, -29, 45, 72, 45, 117, -70, 40, 83, -25, -11, -19, -38, -28, -71, -59, -53, 57, -67, 30, 54, 67, -28, -96, 23, 103, 30, 8, -46, -56, -25, -68, 107, 118, -16, 42, 109, 87, -5, -17, -44, 78, 100, 90, 5, 1, 6, 3, 28, 50, 66, 106, -78, 36, -115, -81, -77, -126, -47, -49, 111, -39, 52, 19, 31, -58, 14, -124, -78, -74, 5, -64, 71, -71, 59, 1, -24, 80, 51, 30, 75, 86, -61, -106, -105, -85, 26, -52, -54, -104, -75, -100, 59, -39, -107, -91, -44, 32, -43, 41, -103, 102, 89, -29, 24, 47, -26, 96, -7, -83, -39, -118, 24, 83};
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
    msg.setTimeStamp(0.294920746835);
    msg.setSource(63195U);
    msg.setSourceEntity(212U);
    msg.setDestination(52533U);
    msg.setDestinationEntity(176U);
    msg.seq = 654730696U;
    msg.state = 53U;
    msg.error.assign("IZGVGNFXYYWHUDJGUMLAPCV");

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
    msg.setTimeStamp(0.225894727823);
    msg.setSource(35032U);
    msg.setSourceEntity(178U);
    msg.setDestination(36264U);
    msg.setDestinationEntity(249U);
    msg.seq = 1181183452U;
    msg.state = 38U;
    msg.error.assign("SORRZDXUTWUGAUAXWWHCSEQGTMSVWBKQLXAFOMEBQVPDPDNMYUBNTLHLRVBJIUHJZLYOFSDOIEYGKFZIEQWMGQNINOKGHECJKJSZIDICPSAOACBYTOKRMIK");

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
    msg.setTimeStamp(0.0567236155389);
    msg.setSource(18467U);
    msg.setSourceEntity(224U);
    msg.setDestination(46442U);
    msg.setDestinationEntity(48U);
    msg.seq = 1890328580U;
    msg.state = 99U;
    msg.error.assign("KDXUWVGTVIPHLTNDJCOKAAKOGOEAMXNZTPRSDBMTORBCXAFYVKQLAVNRHJOBWJWQFEBEOJSBJNCEOMPGUTUBMFGPPHWIMUAYSHNOMFVFCFYRSFFTQQSPAJTRJDVRDKKYZMVQGISZEVADQYXQZUXZGMELIDCKHIBLDUPKQXEUHDJZCLBUIRFCXLGHWPYNNRQEAIYQOXSHKJSE");

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
    msg.setTimeStamp(0.635950624114);
    msg.setSource(12827U);
    msg.setSourceEntity(199U);
    msg.setDestination(63911U);
    msg.setDestinationEntity(92U);
    msg.origin.assign("PHJPGSKPRIJXEEFISHFJUQYELZLXUSBHLQECYTFDYWDTVXCTMIIQSNWLIMIZYPZLIGUBVLPVFTNUHDFOQPCDNGVJCZMDCYMTGROAJQWOHWKRJNRFAJUARMYPHDAVAMDJANVTHESHSEGUBTQSXGRXSUZVKXFSNRKLBIPPYVKYBWEVIQAZCBGKEREOZRBG");
    msg.text.assign("WFWEOUPDZBPZXYBTZH");

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
    msg.setTimeStamp(0.338999198391);
    msg.setSource(4771U);
    msg.setSourceEntity(13U);
    msg.setDestination(22545U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("VFCKLGHGUHAKMG");
    msg.text.assign("RUVAYEKUIHONDCAWJNMEMYGUCFXWRSDGPRTBAATIZSXVBWFHDSGOGPPHQEXSOQZTCVUMQXJEOVWKBEVBFJYHRNSWIYHHAGIVZOJCYYQKCELLUXQZMTNGLFMBGPKXOANLFCIWGYSYTAHTWPTCXDYXUFEDBXZHKZFORUVSPAULVWIRZKXISQPCEIVMTADZQJPBFFFJDCNLOWPGDJJBBRUHKGWNHRNKCDPEKORLJYEIDAZSLULIQQ");

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
    msg.setTimeStamp(0.494566558906);
    msg.setSource(45358U);
    msg.setSourceEntity(13U);
    msg.setDestination(46040U);
    msg.setDestinationEntity(0U);
    msg.origin.assign("ZDSSSFPKRCZDINYTLPFJDRTQXTSJCKBBQEXHCWTOBDYOGJRDUHFGPNXTRCWVIJSXDOHULYZIMVHJGXUAMQETFDLEWGJBATVEAOBKGBBSMUHKNMLFKWVIYWECALUQD");
    msg.text.assign("ZCZFPYQDIR");

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
    msg.setTimeStamp(0.892032889216);
    msg.setSource(50160U);
    msg.setSourceEntity(230U);
    msg.setDestination(53012U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("XJGGIEQIQAOTPKAXYUTQUVMXSNKZPCKOTYQNIJBGQKBMLWRVHUQKPSYIYYJUTLNBAJXDYXDZMHHQWXEINJBZG");
    msg.htime = 0.850149204625;
    msg.lat = 0.425207188345;
    msg.lon = 0.202795060722;
    const char tmp_msg_0[] = {-17, -119, -56, -20, 118, -62, 119, -80, 24, -68, 12, 94, 30, -36, 62, 103, -74, -65, 88, 15, -61, -37, -122, 51, -104, 105, -96, -88, -102, -68, -96, 44, -47, -102, 102, -42, -64, 58, -72, 59, -17, 105, -70, -100, -17, -87, -125, -103, 63, 89, 80, 121, 118, 46, -54, -33, 124, -100, -19, -68, -78, 63, -110, 89, 84, 27, 56, -106, -34, -44, 102, -124, 34, 90, 113, 85, -112, -22, 59, 98, -70, -92, -103, -64, -28, 27, 54, -81, -68, -16, 124, 56, 10, 119, -26, 59, -30, -126, -122, -39, 6, 51, 51, -34, 23, 98, -104, 95, -112, -110, 41, -114, 37, 82, 60, 57, -126, 95, 110, -28, -124, 42, -2, -94, 46, 44, 109, 22, 47, 86, -25, -28, -49, -77, -113, -102, -114, 95, 62, 4, -83, -74, 71, 78, -97, 28, -89, -6, -73, 80, 91, 15, 111, -13, 80, 10, -43, -2, -37, 77, -118, -20, -40, 70, -102, -74, -20, -6, 118, -8, -78, -89, 11, -33, -104, -68, 125, -88, 106, -29, -29, -36, 34, 29, -55, -101, -105, -120, 118, 110, -60, 64, -12, -33, -66, 5, 39, 38, 121, 15, -2, 66};
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
    msg.setTimeStamp(0.0557180828843);
    msg.setSource(23055U);
    msg.setSourceEntity(38U);
    msg.setDestination(46072U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("NKPCJXSMADJIECMLDBRDXRVXSWRHKILZQFKSAIZENKBWPZYVIDCNZGEOHPLSIGOCYROQVTJR");
    msg.htime = 0.420932636405;
    msg.lat = 0.102999279343;
    msg.lon = 0.414824394139;
    const char tmp_msg_0[] = {-86, 15, 21, 99, 99, 12, -61, 47, -42, 80, -99, -110, -41, 31, 33, 99, -71, 16, 120, 108, 110, -106, -93, 83, 50, 16, -121, 59, -30, -28, -40, 26, -115, -114, 100, -57, 55, 115, 96, -50, 17, -38, 114, -89, -67, 41, -47, -38, 1, -40, 55, 57, 90, -60, -111, 74, -109, 19, 34, 18, 125, 57, -62, 49, 21, -82, 68, -42, -65, 15, 82};
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
    msg.setTimeStamp(0.244316529355);
    msg.setSource(25104U);
    msg.setSourceEntity(239U);
    msg.setDestination(62656U);
    msg.setDestinationEntity(32U);
    msg.origin.assign("YFODKFTCYAFDEOIRLRBCGRZOJJMJVITGJSJG");
    msg.htime = 0.48358698866;
    msg.lat = 0.478083227232;
    msg.lon = 0.645820826481;
    const char tmp_msg_0[] = {125, -64, 102, -66, -69, 5, -79, -18, 9, 5, 84, -128, 63, 103, -4, 24, -115, 88, 121, -61, 109, 58, -67, -87, 48, -83, -97, 83, -125, -49, 115, 15, -97, 1, -29, 125, -14, 30, -8, 106, 70, 19, 120, 122, 100, 116, 81, -89, -92, 94, -66, -38, 33, -21, 57, 116, -77, -117, -28, -127, -60, -69, -30, -42, -25, 55, -43, -89, -57, -38, -107, -31, 110, 29, 101, 1, -10, 112, -38, -10, 39, 88, 112, -84, -23, -70, 123, 109, 93, 13, 98, 32, -76, -104, 39, 33, -13, -93, 4, 1, -104, 19, -87, 108, -31, 13, 98, -109, 86, 104, 14, 46, 116, 89, -63, 12, -104, -29, 72, 94, -119, -123, -127, -53, 105, -5, -90, -105, -116, -23, -54, 14, -101, -127, -15, 101, 52, -3, 54, 24, 62, -123, -112, 58, -66, 90, -86, 70, -30, -108, 9, -49, -46, 76, 19, -113, -93, 27, -23, -102, -20, 98, 85, -4, -61, 2, 12, 87, -30, 87, 14, 105, 40, -43, -66, 30, -119, 77, -65, -101, -87, 60, 96, -2, 124, -101, 33, -128, 23, -44, -124, 33, 80, 119, -95, -80, 71, 92, -23, -52, -17, -21, -105, -17, -1};
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
    msg.setTimeStamp(0.021380939695);
    msg.setSource(38342U);
    msg.setSourceEntity(148U);
    msg.setDestination(45116U);
    msg.setDestinationEntity(80U);
    msg.req_id = 56398U;
    msg.ttl = 28882U;
    msg.destination.assign("FEYBOLDKSXUEWNEHDUOXDGVUFXUFRWJWHGUBLMTRORCPKVZNPNHJIKGAVNBRLEWDKRPVAM");
    const char tmp_msg_0[] = {-95, -107, 28, -37, 32, 118, 83, -20, 64, 59, -115, -21, 121, -64, -86, 79, -115, -18, -40, -72, 126, 28, 88, 1, 14, -96, -30, 65, 108, 116, -78, 34, 73, -51, 106, 67, -84, 68, -107, -17, 18, -44, -73, -47, 82, -2, -26, -11, -96, -2, -119, -56, 124, 118, -79, -5, 17, -33, 41, 10, -92, -20};
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
    msg.setTimeStamp(0.547497384701);
    msg.setSource(25746U);
    msg.setSourceEntity(137U);
    msg.setDestination(41755U);
    msg.setDestinationEntity(87U);
    msg.req_id = 35158U;
    msg.ttl = 52006U;
    msg.destination.assign("GZEMYUDJQOCRZRNAVDSYIHYJCUAXFXUCPOHOFAGYGHVICPZBYICHEOCEFSJGNFUTMWVRIUSWBNBCWMDLDKTOVLLKPEHNXSEHZJVFRFYQIERDZMGJPWFDYRQEXRJRMBIEPXDLIKKAABTQEGTBWMKKJTWAOTLUOAVNSLSXIAPTPCBXUKMGZNWPBNUCTSKLL");
    const char tmp_msg_0[] = {-14, 48, -6, -24, 66, 63, -43, 3, 107, -96, 48, -127, 113, -40, 44, 73, -12, -6, 50, 64, -32, 76, -107, -117, 59, 1, 70, 50, 98, 3, 21, -103, 14, 47, 85, -84, -127, -37, -70, -62, -19, 24, 111, 33, 22, -15, -84, -34, 14, 114, -61, 101, 4, 87, 105, -75, 43, -38, -71, -43, 58, 38, 111, 91, 120, 3, -126, -11, 27, -37, -102, 32, -69, -64, 9, -121, 31, -122, -110, 44, -71, -103, -66, 85, -86, 123, -6, 115, -47, -92, -59, 100, 4, -11, 93, 85, -65, -43, 24, 49, 16, -58, -45, -36, -89, -104, 81, 125, -128, -21, 24, 78, -109, 41, -50, -87, 125, 66, -41, 46, -121, 69, -47, -5, 97, -82, 36, 38, -61, 75, 75, 24, 106, 55, 20, 71, -98, -96, 19, 62, -82, 69, 32, -106, -16, 54, -110, -17, 2, 20, 115, 84, 25, -115, 3, -43, -29, 51, 33, -118, 103, 65, -8, -46, 56, 99, 42, 106, -88, -78, -91, -81, -66, 62, -109, -110, -12, 98, -89, 4, -123, -78, 126, 30, 24, -56, 103, -35, -111, 33, 67, -79, -12, 73, -57, -1, 29, 42, 34, 3, 121, -64, -108, -31, -108, 63, -118, 58, 30, 12, 17, 89, 85, 30, -80, 70, 51, -48, -115, 17, -8, -82, -45, -65, 53, 46, 108, -40, -32, 83, 93, -39, -85, -32, 42, 89, -76, 115, 65, 29, 24, 60, 111, 11, 45, -42, -53, 68, -18, 15};
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
    msg.setTimeStamp(0.422032848281);
    msg.setSource(5600U);
    msg.setSourceEntity(169U);
    msg.setDestination(7936U);
    msg.setDestinationEntity(218U);
    msg.req_id = 24706U;
    msg.ttl = 4349U;
    msg.destination.assign("RBXNPIHIIHVUNLGMLHPTGITPCHXTWDJNGRBSHMBRGGLCAIWOTGXNKUKRSZATORSJFTBMEZRLPJBORZHYLDUPQZQIVBWQTKOBXJYUYWAYPXWBDRKWLCSPEMNPQACXYQVDZJRMJOXLFIATOQGLSPBLYTQDYEISFWAFWOZIFNFCVZR");
    const char tmp_msg_0[] = {-50, -28, 23, -37, -22, -110, 4, 30, -71, 93, 9, -42, -77, -55, 54, -117, -66, -85, -108, -9, 54, -107, 54, 109, 8, -106, -36, 59, -97, -101, 94, -110, -32, 103, 63, -27, 19, -80, 4, -62, -78, 106, -70, 41, -118, -39, -26, -124, -53, 62, -15, 125, -41, -88, -122, 121, -106, -37, -46, 19, -122, 93, -84, 82, 62, 92, -108, -49, -72, 98, -66, -12, -105, 93, 27, -71, 7, 101, 112, 73, 55, 47, 109, -53, 71, 22, 12, 26, -9, 125, -62, 50, -28, 72, -63, -11, -124, 30, -31, -113, 50, -70, 79, -72, 117, -67, -55, -59, -118, 94, 73, -27, -49, -29, -120, 82, -63, -105, -61, -67, -54, -23, -39, -42, -122, 31, 0, -102, -78, 66, -97, -125, -73, 6, -124, 45, 60, 21, -102, -72, 95, -20, -117, -122, 57, -44, -59, -79, 122, -68, -116, 33, -88, 125, 43, 120, 41, 63, 45, 11, 4, -37, -28, 112, 17, -125, -68, 28, 32, -2, 21, 48, 96, -58, -97, -94, 8, 54, -126, 94, -116, -16, -37, -73};
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
    msg.setTimeStamp(0.171293636759);
    msg.setSource(44212U);
    msg.setSourceEntity(39U);
    msg.setDestination(19662U);
    msg.setDestinationEntity(134U);
    msg.req_id = 26095U;
    msg.status = 50U;
    msg.text.assign("MGUCLXGMVEMCXCYHBVPEXIPWTJRFYDWRVFTHSBFFAUVORXHQDEQGRYHTPNAZKIHJOCLPVPBAIVZDQMTAISWGAUAJMUYNNCKFNSXHPDW");

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
    msg.setTimeStamp(0.653959923638);
    msg.setSource(23852U);
    msg.setSourceEntity(181U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(86U);
    msg.req_id = 20428U;
    msg.status = 145U;
    msg.text.assign("FSWMHBZXOEDQLPOIXUVXOCMZMJURLRRCXQUXWNRUUPCY");

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
    msg.setTimeStamp(0.337733292344);
    msg.setSource(52142U);
    msg.setSourceEntity(68U);
    msg.setDestination(31057U);
    msg.setDestinationEntity(178U);
    msg.req_id = 39045U;
    msg.status = 137U;
    msg.text.assign("WRPHJAOCXKKPB");

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
    msg.setTimeStamp(0.331700455095);
    msg.setSource(8909U);
    msg.setSourceEntity(202U);
    msg.setDestination(8205U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("XDBCPMTQECGPXSHRNGOAFUMYYRXLTODVGVZAJROLOFTSVMZPYZVUPXWKETKTUZWNHTSCLLDHWYPHSWVLGCJHLMFRBAMDKNPMYABQNUZNTVNAQJAHJRXVOKDSOYTUEGUGEQAWJYBFWSEJCXMOXZIHRZASOBRRLQMEBGAEXEHFCIACEQFWJWBIBOR");
    msg.links = 2533458522U;

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
    msg.setTimeStamp(0.628946274038);
    msg.setSource(21299U);
    msg.setSourceEntity(166U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("WNSGYWLEODQKKIHXEPDZFRSUPEWOHYYRLWMQLNCCRDVVZTJMJNLSECQONFADLZWMCSQJXSNIKWLUAZUHIYCXVYAGDBUAKLRVSTQPUCPQDGPV");
    msg.links = 3637510199U;

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
    msg.setTimeStamp(0.742452874948);
    msg.setSource(10980U);
    msg.setSourceEntity(151U);
    msg.setDestination(6145U);
    msg.setDestinationEntity(180U);
    msg.group_name.assign("ZLPIMRDYTD");
    msg.links = 4036420954U;

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
    msg.setTimeStamp(0.745832199519);
    msg.setSource(37263U);
    msg.setSourceEntity(162U);
    msg.setDestination(64330U);
    msg.setDestinationEntity(74U);
    msg.groupname.assign("GSVITCAXDOZUTYYADMYGSTAMNAXTJUFSLRJLBBGPZMHJRXQCBZHGPBABMBAHFFQOSDHFSHQOFDTWDPDANGIEGLBUEEKKJXHWJANZWOTNDVKMWRKYWUPFLVIQ");
    msg.action = 207U;
    msg.grouplist.assign("GPGNWJCQPTULVTXACQUZBIWCCQKHDSYZUVTREGIKLRGOVJAGIIBYZN");

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
    msg.setTimeStamp(0.952440155983);
    msg.setSource(17022U);
    msg.setSourceEntity(36U);
    msg.setDestination(39268U);
    msg.setDestinationEntity(222U);
    msg.groupname.assign("XGPUCGVYELMTUPYSNKHLFYXVYDTAMYLHSFWACWFIFQGUJIOYUNQKMKWUHWSCCZCUZRFZKTNPNBDOFQRSJGHILMEKQLXRKAXTSBLPXDMDJRGSFDARHMPVFVOBWTUZVIIFLZEAEYEWAR");
    msg.action = 1U;
    msg.grouplist.assign("WRGNEKDFCEMTMIKUPDRVNIQQKTPZZMEMPVNWKXHXSZRGFFGZHBJLBPZVZNGYHXEYCOOBIFR");

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
    msg.setTimeStamp(0.487836985183);
    msg.setSource(7560U);
    msg.setSourceEntity(18U);
    msg.setDestination(62439U);
    msg.setDestinationEntity(45U);
    msg.groupname.assign("BNLQDSCOEXRPTDPJDDHSGCWKEHBVVZAGONMCKRMSOBKWHIWBOQOISJBDZVRBUQEZKTUGXYQQMTUJQLVLMETPL");
    msg.action = 161U;
    msg.grouplist.assign("EYGDVHIWKQJCUJWQYAJGBKWRGHBPEYYQFZHQXOZFYPACRYASNUBRFJQIURKQBXRLXBMCGLGTVDTVSUZYFGWAWBITXUOFMPZJDRROVGMKCDTXC");

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
    msg.setTimeStamp(0.190626427629);
    msg.setSource(9445U);
    msg.setSourceEntity(144U);
    msg.setDestination(58332U);
    msg.setDestinationEntity(226U);
    msg.value = 0.725653203032;
    msg.sys_src = 847U;

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
    msg.setTimeStamp(0.99113197452);
    msg.setSource(63688U);
    msg.setSourceEntity(217U);
    msg.setDestination(59553U);
    msg.setDestinationEntity(165U);
    msg.value = 0.858925868293;
    msg.sys_src = 36652U;

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
    msg.setTimeStamp(0.331832613356);
    msg.setSource(46289U);
    msg.setSourceEntity(149U);
    msg.setDestination(34138U);
    msg.setDestinationEntity(188U);
    msg.value = 0.414458657052;
    msg.sys_src = 19299U;

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
    msg.setTimeStamp(0.763823780348);
    msg.setSource(7425U);
    msg.setSourceEntity(15U);
    msg.setDestination(28915U);
    msg.setDestinationEntity(231U);
    msg.value = 0.700109273785;
    msg.units = 197U;

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
    msg.setTimeStamp(0.696678744616);
    msg.setSource(47655U);
    msg.setSourceEntity(247U);
    msg.setDestination(23710U);
    msg.setDestinationEntity(198U);
    msg.value = 0.30026970563;
    msg.units = 112U;

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
    msg.setTimeStamp(0.891448659239);
    msg.setSource(28527U);
    msg.setSourceEntity(51U);
    msg.setDestination(35650U);
    msg.setDestinationEntity(169U);
    msg.value = 0.361418456983;
    msg.units = 225U;

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
    msg.setTimeStamp(0.163215030696);
    msg.setSource(41269U);
    msg.setSourceEntity(66U);
    msg.setDestination(54381U);
    msg.setDestinationEntity(178U);
    msg.base_lat = 0.898799175553;
    msg.base_lon = 0.163316495077;
    msg.base_time = 0.416472055683;

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
    msg.setTimeStamp(0.176156154986);
    msg.setSource(52006U);
    msg.setSourceEntity(231U);
    msg.setDestination(42400U);
    msg.setDestinationEntity(134U);
    msg.base_lat = 0.883743086679;
    msg.base_lon = 0.707218838444;
    msg.base_time = 0.360317739467;

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
    msg.setTimeStamp(0.121958035107);
    msg.setSource(50170U);
    msg.setSourceEntity(85U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(189U);
    msg.base_lat = 0.131054054919;
    msg.base_lon = 0.772095178229;
    msg.base_time = 0.030941308567;

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
    msg.setTimeStamp(0.721626077231);
    msg.setSource(58757U);
    msg.setSourceEntity(48U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(50U);
    msg.base_lat = 0.581369737377;
    msg.base_lon = 0.187096011376;
    msg.base_time = 0.475689170021;
    const char tmp_msg_0[] = {107, -62, -70, 36, -124, 41, 35, 53, -76, 50, -89, -81, -120, -18, -57, 13, -20, -126, 41, 87, 66, -15, -56, 109, 48, -17, -17, -63, -100, 60, 102, -11, 123, 47, 67, -36, -84, 46, -88, -92, 115, -3, -75, 29, -102, 5, 0, -108, -117, -61, 89, 52};
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
    msg.setTimeStamp(0.410210854494);
    msg.setSource(30006U);
    msg.setSourceEntity(93U);
    msg.setDestination(25224U);
    msg.setDestinationEntity(203U);
    msg.base_lat = 0.396429063284;
    msg.base_lon = 0.822231263145;
    msg.base_time = 0.878093823008;
    const char tmp_msg_0[] = {-82, -68, -89, 1, -100, 67, -106, 44, -22, 89, 85, -17, 21, 46, 63, 4, 2, 108, 24, 61, -39, -11, 8, -121, -94, 94, 61, 115, -55, -59, 4, -99, 89, 20, 85, 74, 102, 2, -7, -36, -86, -119, 34, 73, -126, -47, -12, -93, -4, -105, -52, 31, -81, 126, 71, 68, 83, 12, 124, -92, -115, -87, -2, 79, 44, -128, -121, 64, 105, -32, 112, 80, 125, -46, -52, 75, 92, -42, 87, -34, 89, -82, 102};
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
    msg.setTimeStamp(0.23196056161);
    msg.setSource(33711U);
    msg.setSourceEntity(124U);
    msg.setDestination(57889U);
    msg.setDestinationEntity(91U);
    msg.base_lat = 0.741784704503;
    msg.base_lon = 0.723703245066;
    msg.base_time = 0.426621814308;
    const char tmp_msg_0[] = {10, -102, 40, -96, 87, 68, 62, 52, -43, -49, -102, -2, -65, -105, 14, -71, 17, 117, -72, -42, 107, 81, 89, -36, 43, 33, -122, -88, 100, -41, -49, 104, -28, 38, 52, -62, 43, -25, 122, -31, 73, 51, 48, -59, -77, -125, -97, 21, -64, 37, 73, 4, 1, -92, -37, -112, 65, -75, 83, 101, 41, 52, 29, -94, -82, -80, -81, -52, 64, 13, -81, -29, -26, -102, -115, -60, 29, 91, -123, -126, -110, 38, -128, -112, 32, 69, 5, -118, 33, -10, -16, 87, 90, -69, 119, 22, 6, 71, 72, -39, 99, 2, -1, 33, -27, -64, 13, -77, -75, -17, -7, 37, 38, -85, 102, 26, -83, -84, -3, 84, -75, 75, 44, -110, 119, -38, 62, -60, 35, -19, 34, -72, 89, -44, 21, -24, -3, -43, -64, -18, -119, -76, -73, -32, 26, -81, 37, -41, -29, -48, 0, 16, -111, -106, -9, -29, -80, 96, -62, -122, 103, -59, -15, -59, 16};
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
    msg.setTimeStamp(0.90794434206);
    msg.setSource(969U);
    msg.setSourceEntity(119U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(210U);
    msg.sys_id = 28323U;
    msg.priority = -7;
    msg.x = -28066;
    msg.y = -9351;
    msg.z = 26746;
    msg.t = 19140;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 6557U;
    tmp_msg_0.lat = 0.702907855769;
    tmp_msg_0.lon = 0.450940325677;
    tmp_msg_0.z = 0.777845144336;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.duration = 40109U;
    tmp_msg_0.speed = 0.468226532345;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.type = 245U;
    tmp_msg_0.radius = 0.0271201612522;
    tmp_msg_0.length = 0.00606498944819;
    tmp_msg_0.bearing = 0.82425849486;
    tmp_msg_0.direction = 95U;
    tmp_msg_0.custom.assign("CHAQSXHMINTIQSZRXFJQBLSGAQWWFVNWRWBJVOEKMGZKLG");
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
    msg.setTimeStamp(0.316059322279);
    msg.setSource(2739U);
    msg.setSourceEntity(142U);
    msg.setDestination(11557U);
    msg.setDestinationEntity(229U);
    msg.sys_id = 28310U;
    msg.priority = 27;
    msg.x = -15279;
    msg.y = -1535;
    msg.z = -9884;
    msg.t = -12762;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 56780U;
    tmp_msg_0.duration = 28560U;
    tmp_msg_0.speed = 0.0297192104812;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.x = 0.951139289948;
    tmp_msg_0.y = 0.2267480729;
    tmp_msg_0.z = 0.769913282263;
    tmp_msg_0.z_units = 186U;
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
    msg.setTimeStamp(0.832164112264);
    msg.setSource(1326U);
    msg.setSourceEntity(8U);
    msg.setDestination(45011U);
    msg.setDestinationEntity(57U);
    msg.sys_id = 30132U;
    msg.priority = 81;
    msg.x = 21577;
    msg.y = 28213;
    msg.z = -19115;
    msg.t = -21864;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.725987496058;
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
    msg.setTimeStamp(0.764561473088);
    msg.setSource(57064U);
    msg.setSourceEntity(92U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(190U);
    msg.req_id = 33148U;
    msg.type = 66U;
    msg.max_size = 14672U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.419703319285;
    tmp_msg_0.base_lon = 0.687372663433;
    tmp_msg_0.base_time = 0.627868053054;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 9746U;
    tmp_tmp_msg_0_0.priority = 75;
    tmp_tmp_msg_0_0.x = 62;
    tmp_tmp_msg_0_0.y = -32617;
    tmp_tmp_msg_0_0.z = 26360;
    tmp_tmp_msg_0_0.t = 31582;
    IMC::DeviceState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.0509331747484;
    tmp_tmp_tmp_msg_0_0_0.y = 0.495423293777;
    tmp_tmp_tmp_msg_0_0_0.z = 0.34429262137;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.920423930453;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.799031357348;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.503518181461;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.635310581361);
    msg.setSource(60433U);
    msg.setSourceEntity(15U);
    msg.setDestination(51109U);
    msg.setDestinationEntity(176U);
    msg.req_id = 896U;
    msg.type = 153U;
    msg.max_size = 58570U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.297106502678;
    tmp_msg_0.base_lon = 0.0319716228448;
    tmp_msg_0.base_time = 0.924755343869;
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
    msg.setTimeStamp(0.735295461237);
    msg.setSource(27093U);
    msg.setSourceEntity(206U);
    msg.setDestination(47504U);
    msg.setDestinationEntity(118U);
    msg.req_id = 4345U;
    msg.type = 120U;
    msg.max_size = 37632U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.721154767077;
    tmp_msg_0.base_lon = 0.0666687740137;
    tmp_msg_0.base_time = 0.860282417214;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 17252U;
    tmp_tmp_msg_0_0.destination = 48088U;
    tmp_tmp_msg_0_0.timeout = 0.124690847303;
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.source_man.assign("GVUBMUNZRZRRDSINNURSCKIGJQJEBLVXHIRFAOUBDVOJUDSTBGNAJCPFWNNOLMZOGSGHLPZAPL");
    tmp_tmp_tmp_msg_0_0_0.dest_man.assign("GFNHRRPCMWWSZE");
    tmp_tmp_tmp_msg_0_0_0.conditions.assign("AXHQTIYRSPTYJKDCUCCBZUVJPSLFXQUETFTORCMZNGTBMGNTDHHOBVFSCOHLJFFZZVYSZIXZPKUBGEWWGGMAAMBDMVWORTYSDHXNJWPUDMHHOSGJJAKCWSINZLZWHSJYBIGILGVQSQOQFDFDNLKAERUBGRPYEKWDENTKNRMNKOYLXQCWVPIJFMRBYFJAUOVUOEEDALIBLEXLIRRJICSZUMWONAPKKMXQIZNRDYEXXTCL");
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
    msg.setTimeStamp(0.543403687658);
    msg.setSource(28890U);
    msg.setSourceEntity(2U);
    msg.setDestination(11253U);
    msg.setDestinationEntity(64U);
    msg.original_source = 11217U;
    msg.destination = 44189U;
    msg.timeout = 0.930572699637;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.809492343785;
    tmp_msg_0.i = 0.06747313934;
    tmp_msg_0.d = 0.526858089986;
    tmp_msg_0.a = 0.711693317049;
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
    msg.setTimeStamp(0.119717400823);
    msg.setSource(29257U);
    msg.setSourceEntity(160U);
    msg.setDestination(28536U);
    msg.setDestinationEntity(9U);
    msg.original_source = 36102U;
    msg.destination = 18010U;
    msg.timeout = 0.527310553182;
    IMC::AcousticMessage tmp_msg_0;
    IMC::LblRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 37U;
    tmp_tmp_msg_0_0.range = 0.35237426427;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.51784517615);
    msg.setSource(63974U);
    msg.setSourceEntity(240U);
    msg.setDestination(36325U);
    msg.setDestinationEntity(136U);
    msg.original_source = 45483U;
    msg.destination = 19532U;
    msg.timeout = 0.716802297428;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.0702290064082;
    tmp_msg_0.sys_src = 23907U;
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
    msg.setTimeStamp(0.804289693692);
    msg.setSource(18955U);
    msg.setSourceEntity(204U);
    msg.setDestination(24513U);
    msg.setDestinationEntity(33U);
    msg.id = 67U;
    msg.range = 0.606892398883;

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
    msg.setTimeStamp(0.200344428723);
    msg.setSource(30713U);
    msg.setSourceEntity(234U);
    msg.setDestination(9647U);
    msg.setDestinationEntity(246U);
    msg.id = 63U;
    msg.range = 0.504507632832;

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
    msg.setTimeStamp(0.279231063329);
    msg.setSource(63827U);
    msg.setSourceEntity(61U);
    msg.setDestination(58918U);
    msg.setDestinationEntity(218U);
    msg.id = 228U;
    msg.range = 0.457124652544;

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
    msg.setTimeStamp(0.778423106046);
    msg.setSource(46253U);
    msg.setSourceEntity(118U);
    msg.setDestination(42846U);
    msg.setDestinationEntity(56U);
    msg.beacon.assign("ULBFPVKFEORYKTIUSKFEFWDFFBPIRVEGL");
    msg.lat = 0.704468691542;
    msg.lon = 0.868904333785;
    msg.depth = 0.192578202666;
    msg.query_channel = 182U;
    msg.reply_channel = 212U;
    msg.transponder_delay = 203U;

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
    msg.setTimeStamp(0.410059349686);
    msg.setSource(28339U);
    msg.setSourceEntity(24U);
    msg.setDestination(48929U);
    msg.setDestinationEntity(85U);
    msg.beacon.assign("MDALAFJGQCVHIODYCUWBXSVJKMAUPJEGGLZLCFKYYLYVZWOXPEYUFHSNEATGJMTWTEOGCNSXYVBAXOQXHXIIEVUHVABDKEZIQKUSANZKHGGSTEPZFQRBQLPYAWPDEJKBOOHDZJCAGIOHKIBXIPCKEFWGIBXHUFNTJDZZQRWTBMWKMMRRTNRBSITRNOTYYFSSHUZAVXEMIXWNDRLCVOGN");
    msg.lat = 0.498393286897;
    msg.lon = 0.873323197631;
    msg.depth = 0.322254829636;
    msg.query_channel = 192U;
    msg.reply_channel = 90U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.10233966315);
    msg.setSource(18986U);
    msg.setSourceEntity(221U);
    msg.setDestination(59970U);
    msg.setDestinationEntity(43U);
    msg.beacon.assign("OHVAWQQHRKRMNEXFODDUADWHJBNFNFTKQISWAAWPFHFBKLFNUCIDQWBQEULLOCUCVCZOJFZI");
    msg.lat = 0.505453712901;
    msg.lon = 0.0287108073883;
    msg.depth = 0.527525457838;
    msg.query_channel = 48U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 248U;

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
    msg.setTimeStamp(0.284987532004);
    msg.setSource(46307U);
    msg.setSourceEntity(3U);
    msg.setDestination(8667U);
    msg.setDestinationEntity(125U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.937082283053);
    msg.setSource(49458U);
    msg.setSourceEntity(35U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(243U);
    msg.op = 79U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ONRXDNMELQEHOJLAIZIULDFYRAMCOJTHIZWNCSTOHTTQEQZHTOWXCVWPMLKPAYNARXDUJURGTNJBUSHYFXJCOVWHQMSORBJGJMDGCVFYEHJURIMKVMEHZGSWLGPBTQYKDEOFRLZZZMUGQKMZQAKWNSOZXKVUSPIXAPJYLTGFCXYWWVLPEFQBBOCUM");
    tmp_msg_0.lat = 0.697019963735;
    tmp_msg_0.lon = 0.60194210903;
    tmp_msg_0.depth = 0.360484415396;
    tmp_msg_0.query_channel = 77U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 87U;
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
    msg.setTimeStamp(0.973240533789);
    msg.setSource(35632U);
    msg.setSourceEntity(82U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(35U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.0077849894555);
    msg.setSource(41012U);
    msg.setSourceEntity(197U);
    msg.setDestination(1646U);
    msg.setDestinationEntity(213U);
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 253U;
    tmp_msg_0.text.assign("ABFSFQDVZFEYMVJXCFQBMRADPUIEVUMPNXJKQTNXITWPWRNYSKRKEQILTWUYYWBDCHLPTXQOTREKARRWAFUKNGSPPNHCOZYELEBUGIUCAJXJDVWGWAKBTPSXEBFTSBABFQLOUOIUVGARZMHJMOMHDTDSRNCVPQIFSBYEXDNYFZROZOMLDHJIODKGQBULOATJDG");
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
    msg.setTimeStamp(0.726582364873);
    msg.setSource(51077U);
    msg.setSourceEntity(167U);
    msg.setDestination(57092U);
    msg.setDestinationEntity(28U);
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.353621218831;
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
    msg.setTimeStamp(0.508922723497);
    msg.setSource(62646U);
    msg.setSourceEntity(253U);
    msg.setDestination(63673U);
    msg.setDestinationEntity(236U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.83711637027;
    tmp_msg_0.confidence = 0.852926679235;
    tmp_msg_0.opmodes.assign("MMMNGTEDEHJCFS");
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
    msg.setTimeStamp(0.703464811167);
    msg.setSource(37212U);
    msg.setSourceEntity(185U);
    msg.setDestination(53532U);
    msg.setDestinationEntity(196U);
    msg.op = 135U;
    msg.system.assign("MHWVUGXJDKNTKNCFBOEGGDNHMOUBTNBHRUDPBUYGVFMOQZVVVBECLZHHKXOWQWNXZXUJAQLWPSWQQDSWHAVTCVGJTIURLOOCMBOPCSRMJYQPDHJYSKDNKAUCHSLAPYGNDIFTDAYAJFKGBITLCBZG");
    msg.range = 0.145398997896;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.931884249068;
    tmp_msg_0.y = 0.0986164858739;
    tmp_msg_0.z = 0.999939262449;
    tmp_msg_0.phi = 0.164429773681;
    tmp_msg_0.theta = 0.476787551698;
    tmp_msg_0.psi = 0.340184492286;
    tmp_msg_0.p = 0.70706913444;
    tmp_msg_0.q = 0.521048980594;
    tmp_msg_0.r = 0.0947334548334;
    tmp_msg_0.u = 0.170613790734;
    tmp_msg_0.v = 0.901945585324;
    tmp_msg_0.w = 0.60590119056;
    tmp_msg_0.bias_psi = 0.899621199392;
    tmp_msg_0.bias_r = 0.338362279415;
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
    msg.setTimeStamp(0.893308972234);
    msg.setSource(40154U);
    msg.setSourceEntity(170U);
    msg.setDestination(57708U);
    msg.setDestinationEntity(223U);
    msg.op = 35U;
    msg.system.assign("MKHYKGFSFOWMVPQABXQBAXCQQEEDSAUCPNMWVKPHYNZMXOUOPJUFCXVHYHDKXBIIXNEGSYNTPODGWZFUSRWOKBCKTGDOEZCJSABDAQCJPWZLBAVCYGUGMRUPBUDXRFNYWDOJRMCMOFCQPEIWKTK");
    msg.range = 0.852686280585;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 40637U;
    tmp_msg_0.value = 92U;
    tmp_msg_0.error.assign("CFDHNQFAPUPBSACWCETBWJXJADJRQJOXEHIGWUDUHYFZWQAYYSMINTSYTUOGWYUKNHZHVRABTUPNYMEVUBYKLJAAVRWXZIHWPEJXVMFYUFCJCOINUVAGSMLNRIVSMWTOQLTEUMBEOSFLTHBKOKPOGTCQDHYZVPLRCSFKRHGJRKIEQDZSEDADPQVVWXIZRLXCOGLIX");
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
    msg.setTimeStamp(0.307280950138);
    msg.setSource(62526U);
    msg.setSourceEntity(219U);
    msg.setDestination(25377U);
    msg.setDestinationEntity(225U);
    msg.op = 147U;
    msg.system.assign("LBRITYYCYSOXOBAZRIMGRGWQOUFHRHCBEZQZGKSANXPVFOSLFHCCPVDIGVYIUNJUWKMNDOQOMBSTMASZCLPEKUNRXIHJDEQTKQZOTFPRBICBDWVNJYTHWMPSGXMEHGZMKVBGSJUYANPQIPJZYYCONHPQBLKIKUQXQWAKQRJAFGWRHNNPBLWCGVWWDTOLJZSN");
    msg.range = 0.730640175522;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.450368006085;
    tmp_msg_0.base_lon = 0.345734618506;
    tmp_msg_0.base_time = 0.73463573861;
    const char tmp_tmp_msg_0_0[] = {120, 83, -68, -91, -22, -32, 74, -101, 88, 119, -60, -108, -29, -116, -126, 2, -112, -89, 102, -38, 116, -82, -55, 115, 1, -76, -41, 117, 92};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.430309677256);
    msg.setSource(30780U);
    msg.setSourceEntity(100U);
    msg.setDestination(41113U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.914204625972);
    msg.setSource(27431U);
    msg.setSourceEntity(3U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.651503356461);
    msg.setSource(29891U);
    msg.setSourceEntity(119U);
    msg.setDestination(31102U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.287077207383);
    msg.setSource(25440U);
    msg.setSourceEntity(174U);
    msg.setDestination(56936U);
    msg.setDestinationEntity(138U);
    msg.list.assign("GYMQULHNDQKWSCEYMKKKRLIBFZAIIUXPHHAZSVFAQPHAAODFYJVXISZCBGVJFAIRBHSGPOEDPOXL");

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
    msg.setTimeStamp(0.270968537878);
    msg.setSource(5725U);
    msg.setSourceEntity(99U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(203U);
    msg.list.assign("PHPAHBFRIACJQSNKNPXYTFGJAXRZOBBVCJMDQDURKENOGUMIEKOMNAHPDECLGNYXUTERQSAJEMOYFJAGMAQULUIOWTVPGHCQVVIBPCMZIWXDFSWDHFBSYPDGMR");

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
    msg.setTimeStamp(0.118976160562);
    msg.setSource(4526U);
    msg.setSourceEntity(114U);
    msg.setDestination(37451U);
    msg.setDestinationEntity(154U);
    msg.list.assign("XCIGRARQJFTANHTBFVHNVKODBDAVYWGZGBYJEESHRZHTDUFSUXKTVVDYCLSWOFAHAUFNAYOBEPICLVWZMYNUDHEDTPLJRAUUKUJYQXGMLCAZEOCFPXQYMGWZFUNUSTUJIYEVEPOSOANNFLRHPKTDWLLTBEQQOMGGGEBYHJPCCCSJMBTQWFPVBTQMZZXHKZ");

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
    msg.setTimeStamp(0.127487054592);
    msg.setSource(44546U);
    msg.setSourceEntity(178U);
    msg.setDestination(6813U);
    msg.setDestinationEntity(219U);
    msg.peer.assign("RSPVYDTWZRKDLUFOGKJWWAIDPRXUHZUNCHOWRIYGQNQGLVWVGXCEEJZTSONHMPHMJQNTIDBJXWASQVLDFYYZZUYEVCYTJNRKRVLUTUQECYBNNMBHEXMRAKIXTGCM");
    msg.rssi = 0.260103757098;
    msg.integrity = 14405U;

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
    msg.setTimeStamp(0.730164846428);
    msg.setSource(11713U);
    msg.setSourceEntity(84U);
    msg.setDestination(26300U);
    msg.setDestinationEntity(132U);
    msg.peer.assign("HEKMPIMWVOMYCETVLTNESFQXBJVMIKABJRXZHTHNXDTPCLGGYHYCDWXPVABBKUTLMXFBPRUWSYQHABHOILYDMSSJRSVWPLUWBKPOGQXAQFDCZKZSCUYXFVOEPBESRFWGQLWAFJNMQ");
    msg.rssi = 0.721753065389;
    msg.integrity = 52805U;

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
    msg.setTimeStamp(0.391224773864);
    msg.setSource(31267U);
    msg.setSourceEntity(39U);
    msg.setDestination(41218U);
    msg.setDestinationEntity(199U);
    msg.peer.assign("WZIFZHDJTGVEEYDSGEBLVOULOMIYTYOSRIMYHNJYFPWVSRRYKPNGQEGTSYHTDWPHPLZVQWQHBLMMQKXOICTTNFVWRKT");
    msg.rssi = 0.341451555847;
    msg.integrity = 53350U;

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
    msg.setTimeStamp(0.800731612374);
    msg.setSource(27772U);
    msg.setSourceEntity(150U);
    msg.setDestination(61908U);
    msg.setDestinationEntity(55U);
    msg.value = -11952;

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
    msg.setTimeStamp(0.519442324884);
    msg.setSource(41256U);
    msg.setSourceEntity(63U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(196U);
    msg.value = -6394;

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
    msg.setTimeStamp(0.798690697369);
    msg.setSource(49600U);
    msg.setSourceEntity(229U);
    msg.setDestination(10788U);
    msg.setDestinationEntity(140U);
    msg.value = -32632;

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
    msg.setTimeStamp(0.617316724613);
    msg.setSource(44027U);
    msg.setSourceEntity(220U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(96U);
    msg.value = 0.76377203565;

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
    msg.setTimeStamp(0.658491602829);
    msg.setSource(39493U);
    msg.setSourceEntity(221U);
    msg.setDestination(325U);
    msg.setDestinationEntity(129U);
    msg.value = 0.653647561146;

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
    msg.setTimeStamp(0.675189664038);
    msg.setSource(32454U);
    msg.setSourceEntity(110U);
    msg.setDestination(2838U);
    msg.setDestinationEntity(65U);
    msg.value = 0.213478764387;

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
    msg.setTimeStamp(0.421917296664);
    msg.setSource(3395U);
    msg.setSourceEntity(100U);
    msg.setDestination(42063U);
    msg.setDestinationEntity(75U);
    msg.value = 0.62434566548;

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
    msg.setTimeStamp(0.331507510203);
    msg.setSource(50103U);
    msg.setSourceEntity(243U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(51U);
    msg.value = 0.523587672472;

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
    msg.setTimeStamp(0.5341785738);
    msg.setSource(53508U);
    msg.setSourceEntity(35U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(241U);
    msg.value = 0.048356986568;

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
    msg.setTimeStamp(0.541746992343);
    msg.setSource(61439U);
    msg.setSourceEntity(103U);
    msg.setDestination(31905U);
    msg.setDestinationEntity(1U);
    msg.validity = 55639U;
    msg.type = 79U;
    msg.utc_year = 10934U;
    msg.utc_month = 207U;
    msg.utc_day = 52U;
    msg.utc_time = 0.203690144161;
    msg.lat = 0.238098137517;
    msg.lon = 0.761536325386;
    msg.height = 0.737053427068;
    msg.satellites = 184U;
    msg.cog = 0.0340111760399;
    msg.sog = 0.822300009778;
    msg.hdop = 0.465734440677;
    msg.vdop = 0.670197429004;
    msg.hacc = 0.802877448913;
    msg.vacc = 0.190409557187;

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
    msg.setTimeStamp(0.537360055748);
    msg.setSource(12927U);
    msg.setSourceEntity(32U);
    msg.setDestination(27444U);
    msg.setDestinationEntity(174U);
    msg.validity = 22037U;
    msg.type = 43U;
    msg.utc_year = 21226U;
    msg.utc_month = 150U;
    msg.utc_day = 15U;
    msg.utc_time = 0.876761978097;
    msg.lat = 0.426347769093;
    msg.lon = 0.856088490689;
    msg.height = 0.939643346055;
    msg.satellites = 217U;
    msg.cog = 0.968119535961;
    msg.sog = 0.226427950309;
    msg.hdop = 0.0203768768289;
    msg.vdop = 0.393573931204;
    msg.hacc = 0.258603469;
    msg.vacc = 0.346885866169;

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
    msg.setTimeStamp(0.97997813921);
    msg.setSource(40618U);
    msg.setSourceEntity(225U);
    msg.setDestination(49833U);
    msg.setDestinationEntity(220U);
    msg.validity = 17520U;
    msg.type = 61U;
    msg.utc_year = 26726U;
    msg.utc_month = 219U;
    msg.utc_day = 55U;
    msg.utc_time = 0.902706821562;
    msg.lat = 0.332837993158;
    msg.lon = 0.140773152794;
    msg.height = 0.397548956872;
    msg.satellites = 23U;
    msg.cog = 0.21680312894;
    msg.sog = 0.267474526999;
    msg.hdop = 0.826263051587;
    msg.vdop = 0.252519176362;
    msg.hacc = 0.520772260852;
    msg.vacc = 0.283920465009;

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
    msg.setTimeStamp(0.514596752489);
    msg.setSource(38214U);
    msg.setSourceEntity(145U);
    msg.setDestination(5486U);
    msg.setDestinationEntity(32U);
    msg.time = 0.974186552245;
    msg.phi = 0.701194614798;
    msg.theta = 0.888865624305;
    msg.psi = 0.986388999194;
    msg.psi_magnetic = 0.383220234825;

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
    msg.setTimeStamp(0.975474983112);
    msg.setSource(13603U);
    msg.setSourceEntity(5U);
    msg.setDestination(51381U);
    msg.setDestinationEntity(178U);
    msg.time = 0.885428826531;
    msg.phi = 0.779586631985;
    msg.theta = 0.94565296457;
    msg.psi = 0.0753632466253;
    msg.psi_magnetic = 0.36110517115;

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
    msg.setTimeStamp(0.29036012992);
    msg.setSource(2107U);
    msg.setSourceEntity(62U);
    msg.setDestination(57228U);
    msg.setDestinationEntity(15U);
    msg.time = 0.263293556421;
    msg.phi = 0.646080115619;
    msg.theta = 0.968075768376;
    msg.psi = 0.595988389028;
    msg.psi_magnetic = 0.634981337292;

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
    msg.setTimeStamp(0.581241743328);
    msg.setSource(4909U);
    msg.setSourceEntity(228U);
    msg.setDestination(64301U);
    msg.setDestinationEntity(89U);
    msg.time = 0.0790299744398;
    msg.x = 0.254317583222;
    msg.y = 0.161155229347;
    msg.z = 0.584542249477;
    msg.timestep = 0.861707867587;

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
    msg.setTimeStamp(0.44471632048);
    msg.setSource(64998U);
    msg.setSourceEntity(29U);
    msg.setDestination(26199U);
    msg.setDestinationEntity(68U);
    msg.time = 0.782477155852;
    msg.x = 0.306130404589;
    msg.y = 0.922561007837;
    msg.z = 0.58414263402;
    msg.timestep = 0.543567968316;

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
    msg.setTimeStamp(0.960922832428);
    msg.setSource(5903U);
    msg.setSourceEntity(243U);
    msg.setDestination(8953U);
    msg.setDestinationEntity(115U);
    msg.time = 0.661706082837;
    msg.x = 0.982218002635;
    msg.y = 0.688365509848;
    msg.z = 0.135229887515;
    msg.timestep = 0.751771342999;

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
    msg.setTimeStamp(0.313360015979);
    msg.setSource(34274U);
    msg.setSourceEntity(41U);
    msg.setDestination(57003U);
    msg.setDestinationEntity(29U);
    msg.time = 0.529373223299;
    msg.x = 0.207515951778;
    msg.y = 0.994683997146;
    msg.z = 0.207191796539;

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
    msg.setTimeStamp(0.0750821754952);
    msg.setSource(26585U);
    msg.setSourceEntity(73U);
    msg.setDestination(53355U);
    msg.setDestinationEntity(77U);
    msg.time = 0.790991294376;
    msg.x = 0.664087354844;
    msg.y = 0.192125427832;
    msg.z = 0.344325644048;

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
    msg.setTimeStamp(0.354260617514);
    msg.setSource(64333U);
    msg.setSourceEntity(62U);
    msg.setDestination(42102U);
    msg.setDestinationEntity(93U);
    msg.time = 0.0619624356102;
    msg.x = 0.893280092017;
    msg.y = 0.0947512253073;
    msg.z = 0.30241673864;

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
    msg.setTimeStamp(0.484209700356);
    msg.setSource(25857U);
    msg.setSourceEntity(222U);
    msg.setDestination(15127U);
    msg.setDestinationEntity(198U);
    msg.time = 0.298719085959;
    msg.x = 0.0278311253837;
    msg.y = 0.965680366827;
    msg.z = 0.504642772801;

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
    msg.setTimeStamp(0.671076475488);
    msg.setSource(36568U);
    msg.setSourceEntity(198U);
    msg.setDestination(2847U);
    msg.setDestinationEntity(85U);
    msg.time = 0.439325812232;
    msg.x = 0.631790699812;
    msg.y = 0.742532807241;
    msg.z = 0.320524854696;

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
    msg.setTimeStamp(0.197494396878);
    msg.setSource(59553U);
    msg.setSourceEntity(39U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(112U);
    msg.time = 0.829372944503;
    msg.x = 0.349034236423;
    msg.y = 0.523585363638;
    msg.z = 0.0257976895587;

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
    msg.setTimeStamp(0.627109751514);
    msg.setSource(30519U);
    msg.setSourceEntity(13U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(184U);
    msg.time = 0.527132835735;
    msg.x = 0.431364813265;
    msg.y = 0.338943705876;
    msg.z = 0.91539042971;

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
    msg.setTimeStamp(0.993487681294);
    msg.setSource(45333U);
    msg.setSourceEntity(125U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(39U);
    msg.time = 0.212956340233;
    msg.x = 0.911569701695;
    msg.y = 0.947026410312;
    msg.z = 0.0114316703073;

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
    msg.setTimeStamp(0.308056525313);
    msg.setSource(20837U);
    msg.setSourceEntity(145U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(246U);
    msg.time = 0.678041817221;
    msg.x = 0.852674363907;
    msg.y = 0.480259794737;
    msg.z = 0.673238255113;

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
    msg.setTimeStamp(0.879147717419);
    msg.setSource(38204U);
    msg.setSourceEntity(250U);
    msg.setDestination(65109U);
    msg.setDestinationEntity(196U);
    msg.validity = 18U;
    msg.x = 0.213680225417;
    msg.y = 0.311206560879;
    msg.z = 0.264330334973;

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
    msg.setTimeStamp(0.599283378711);
    msg.setSource(9645U);
    msg.setSourceEntity(224U);
    msg.setDestination(20823U);
    msg.setDestinationEntity(1U);
    msg.validity = 34U;
    msg.x = 0.919089672898;
    msg.y = 0.797809296809;
    msg.z = 0.5231567396;

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
    msg.setTimeStamp(0.36638842885);
    msg.setSource(55316U);
    msg.setSourceEntity(131U);
    msg.setDestination(52639U);
    msg.setDestinationEntity(56U);
    msg.validity = 166U;
    msg.x = 0.423603167142;
    msg.y = 0.550270903046;
    msg.z = 0.0855166551024;

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
    msg.setTimeStamp(0.638149355488);
    msg.setSource(36861U);
    msg.setSourceEntity(68U);
    msg.setDestination(21818U);
    msg.setDestinationEntity(78U);
    msg.validity = 140U;
    msg.x = 0.871313799173;
    msg.y = 0.509137124731;
    msg.z = 0.77497141127;

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
    msg.setTimeStamp(0.237074554517);
    msg.setSource(53751U);
    msg.setSourceEntity(107U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(214U);
    msg.validity = 27U;
    msg.x = 0.38936846759;
    msg.y = 0.157413202647;
    msg.z = 0.211209639558;

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
    msg.setTimeStamp(0.793078595923);
    msg.setSource(48620U);
    msg.setSourceEntity(9U);
    msg.setDestination(801U);
    msg.setDestinationEntity(228U);
    msg.validity = 179U;
    msg.x = 0.442685546482;
    msg.y = 0.899272587243;
    msg.z = 0.753858717665;

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
    msg.setTimeStamp(0.360024589229);
    msg.setSource(1550U);
    msg.setSourceEntity(190U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(240U);
    msg.time = 0.0377043246121;
    msg.x = 0.100499121455;
    msg.y = 0.923636825795;
    msg.z = 0.613329252385;

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
    msg.setTimeStamp(0.510228985187);
    msg.setSource(2700U);
    msg.setSourceEntity(83U);
    msg.setDestination(26895U);
    msg.setDestinationEntity(20U);
    msg.time = 0.277558991705;
    msg.x = 0.530131189978;
    msg.y = 0.475952841904;
    msg.z = 0.043148116063;

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
    msg.setTimeStamp(0.517830584084);
    msg.setSource(59538U);
    msg.setSourceEntity(71U);
    msg.setDestination(26645U);
    msg.setDestinationEntity(186U);
    msg.time = 0.775294399216;
    msg.x = 0.232346272022;
    msg.y = 0.959315358463;
    msg.z = 0.142632887015;

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
    msg.setTimeStamp(0.789373206553);
    msg.setSource(18714U);
    msg.setSourceEntity(115U);
    msg.setDestination(5720U);
    msg.setDestinationEntity(195U);
    msg.validity = 240U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.962547976979;
    tmp_msg_0.beam_height = 0.0892139591047;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.660671544432;

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
    msg.setTimeStamp(0.763676189095);
    msg.setSource(12021U);
    msg.setSourceEntity(148U);
    msg.setDestination(41799U);
    msg.setDestinationEntity(73U);
    msg.validity = 17U;
    msg.value = 0.707068309825;

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
    msg.setTimeStamp(0.288899328745);
    msg.setSource(55840U);
    msg.setSourceEntity(45U);
    msg.setDestination(63329U);
    msg.setDestinationEntity(44U);
    msg.validity = 173U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.323402380515;
    tmp_msg_0.y = 0.338909487773;
    tmp_msg_0.z = 0.922929236294;
    tmp_msg_0.phi = 0.14794991805;
    tmp_msg_0.theta = 0.0380080681077;
    tmp_msg_0.psi = 0.343788387006;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0472411442072;

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
    msg.setTimeStamp(0.586105694238);
    msg.setSource(63967U);
    msg.setSourceEntity(194U);
    msg.setDestination(7860U);
    msg.setDestinationEntity(179U);
    msg.value = 0.72659942218;

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
    msg.setTimeStamp(0.640966988165);
    msg.setSource(19225U);
    msg.setSourceEntity(72U);
    msg.setDestination(14221U);
    msg.setDestinationEntity(234U);
    msg.value = 0.427120262733;

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
    msg.setTimeStamp(0.00175461851064);
    msg.setSource(33289U);
    msg.setSourceEntity(164U);
    msg.setDestination(37388U);
    msg.setDestinationEntity(88U);
    msg.value = 0.850948766133;

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
    msg.setTimeStamp(0.415214328766);
    msg.setSource(13262U);
    msg.setSourceEntity(100U);
    msg.setDestination(3157U);
    msg.setDestinationEntity(203U);
    msg.value = 0.160725729255;

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
    msg.setTimeStamp(0.701886740176);
    msg.setSource(2756U);
    msg.setSourceEntity(195U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(147U);
    msg.value = 0.842081061873;

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
    msg.setTimeStamp(0.804534339208);
    msg.setSource(37805U);
    msg.setSourceEntity(239U);
    msg.setDestination(60363U);
    msg.setDestinationEntity(84U);
    msg.value = 0.573782068063;

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
    msg.setTimeStamp(0.875358837208);
    msg.setSource(46346U);
    msg.setSourceEntity(237U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(23U);
    msg.value = 0.13571074399;

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
    msg.setTimeStamp(0.493507472983);
    msg.setSource(42158U);
    msg.setSourceEntity(251U);
    msg.setDestination(55505U);
    msg.setDestinationEntity(190U);
    msg.value = 0.250732855965;

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
    msg.setTimeStamp(0.635950817264);
    msg.setSource(466U);
    msg.setSourceEntity(15U);
    msg.setDestination(63204U);
    msg.setDestinationEntity(234U);
    msg.value = 0.527796717273;

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
    msg.setTimeStamp(0.678465243797);
    msg.setSource(57326U);
    msg.setSourceEntity(217U);
    msg.setDestination(20870U);
    msg.setDestinationEntity(92U);
    msg.value = 0.848640431154;

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
    msg.setTimeStamp(0.922909225947);
    msg.setSource(8582U);
    msg.setSourceEntity(94U);
    msg.setDestination(9263U);
    msg.setDestinationEntity(132U);
    msg.value = 0.896639352092;

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
    msg.setTimeStamp(0.203102647294);
    msg.setSource(57103U);
    msg.setSourceEntity(192U);
    msg.setDestination(38898U);
    msg.setDestinationEntity(247U);
    msg.value = 0.845081954637;

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
    msg.setTimeStamp(0.534378859689);
    msg.setSource(28786U);
    msg.setSourceEntity(132U);
    msg.setDestination(4475U);
    msg.setDestinationEntity(196U);
    msg.value = 0.274110429366;

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
    msg.setTimeStamp(0.158750203324);
    msg.setSource(63837U);
    msg.setSourceEntity(8U);
    msg.setDestination(57178U);
    msg.setDestinationEntity(181U);
    msg.value = 0.9296094726;

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
    msg.setTimeStamp(0.285083905198);
    msg.setSource(39296U);
    msg.setSourceEntity(17U);
    msg.setDestination(48521U);
    msg.setDestinationEntity(7U);
    msg.value = 0.841952420607;

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
    msg.setTimeStamp(0.0924458072436);
    msg.setSource(44334U);
    msg.setSourceEntity(88U);
    msg.setDestination(45441U);
    msg.setDestinationEntity(140U);
    msg.value = 0.864584378131;

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
    msg.setTimeStamp(0.838888980659);
    msg.setSource(29182U);
    msg.setSourceEntity(194U);
    msg.setDestination(55362U);
    msg.setDestinationEntity(223U);
    msg.value = 0.691038016588;

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
    msg.setTimeStamp(0.767574838421);
    msg.setSource(17725U);
    msg.setSourceEntity(175U);
    msg.setDestination(21709U);
    msg.setDestinationEntity(197U);
    msg.value = 0.327191381307;

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
    msg.setTimeStamp(0.794362415391);
    msg.setSource(24970U);
    msg.setSourceEntity(237U);
    msg.setDestination(3525U);
    msg.setDestinationEntity(183U);
    msg.value = 0.698546071496;

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
    msg.setTimeStamp(0.12273233876);
    msg.setSource(5972U);
    msg.setSourceEntity(160U);
    msg.setDestination(63065U);
    msg.setDestinationEntity(42U);
    msg.value = 0.0887546478637;

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
    msg.setTimeStamp(0.267332149969);
    msg.setSource(46331U);
    msg.setSourceEntity(78U);
    msg.setDestination(26606U);
    msg.setDestinationEntity(35U);
    msg.value = 0.391896052579;

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
    msg.setTimeStamp(0.625865677713);
    msg.setSource(57602U);
    msg.setSourceEntity(71U);
    msg.setDestination(41377U);
    msg.setDestinationEntity(216U);
    msg.value = 0.196616660583;

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
    msg.setTimeStamp(0.554678594813);
    msg.setSource(41173U);
    msg.setSourceEntity(159U);
    msg.setDestination(829U);
    msg.setDestinationEntity(149U);
    msg.value = 0.322636128164;

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
    msg.setTimeStamp(0.904209884017);
    msg.setSource(56721U);
    msg.setSourceEntity(93U);
    msg.setDestination(57502U);
    msg.setDestinationEntity(167U);
    msg.value = 0.697612485706;

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
    msg.setTimeStamp(0.451216662376);
    msg.setSource(45139U);
    msg.setSourceEntity(69U);
    msg.setDestination(57215U);
    msg.setDestinationEntity(53U);
    msg.direction = 0.203757374415;
    msg.speed = 0.951025057874;
    msg.turbulence = 0.371693579352;

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
    msg.setTimeStamp(0.610962489837);
    msg.setSource(16565U);
    msg.setSourceEntity(244U);
    msg.setDestination(41284U);
    msg.setDestinationEntity(187U);
    msg.direction = 0.990920644936;
    msg.speed = 0.937213150268;
    msg.turbulence = 0.473394190996;

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
    msg.setTimeStamp(0.880245812246);
    msg.setSource(22949U);
    msg.setSourceEntity(193U);
    msg.setDestination(17787U);
    msg.setDestinationEntity(39U);
    msg.direction = 0.933098301162;
    msg.speed = 0.725821797196;
    msg.turbulence = 0.0392443231793;

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
    msg.setTimeStamp(0.0505692745584);
    msg.setSource(32531U);
    msg.setSourceEntity(26U);
    msg.setDestination(51813U);
    msg.setDestinationEntity(227U);
    msg.value = 0.722702636492;

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
    msg.setTimeStamp(0.855600019877);
    msg.setSource(57348U);
    msg.setSourceEntity(159U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(205U);
    msg.value = 0.764141582704;

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
    msg.setTimeStamp(0.659547688696);
    msg.setSource(1399U);
    msg.setSourceEntity(59U);
    msg.setDestination(39795U);
    msg.setDestinationEntity(37U);
    msg.value = 0.450311683198;

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
    msg.setTimeStamp(0.803920782084);
    msg.setSource(13886U);
    msg.setSourceEntity(231U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(41U);
    msg.value.assign("LVOARMXQUMROQHFLU");

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
    msg.setTimeStamp(0.84750274221);
    msg.setSource(37990U);
    msg.setSourceEntity(170U);
    msg.setDestination(61265U);
    msg.setDestinationEntity(75U);
    msg.value.assign("ICUMQFJTKNUBRZBFBNTWQGLQVZAVILCWHSEIXWGVAOKNUALAPQMNFSBOVJFIKUWIIRSHWEWQIPTSZXECGKALPJBLJNYXPRPUOBM");

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
    msg.setTimeStamp(0.631740444268);
    msg.setSource(33131U);
    msg.setSourceEntity(145U);
    msg.setDestination(23350U);
    msg.setDestinationEntity(98U);
    msg.value.assign("WHZDQLNUFBFWLHWNJOEDOAEIISUDJWQLZMSXEPDMXKETRMGYWARNPUUQHGKOWGTPBJLH");

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
    msg.setTimeStamp(0.104724630047);
    msg.setSource(23800U);
    msg.setSourceEntity(77U);
    msg.setDestination(54819U);
    msg.setDestinationEntity(225U);
    const char tmp_msg_0[] = {-80, 44, -92, 87, -102, -45, 65, -21, -77, -26, -49, 38, -101, -39, 25, 81, 111, 69, 117, -26, 68, -108, 78, 91, 76, -66, -18, 34, 4, 98, 76, -6, -78};
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
    msg.setTimeStamp(0.263584456905);
    msg.setSource(35696U);
    msg.setSourceEntity(27U);
    msg.setDestination(49554U);
    msg.setDestinationEntity(60U);
    const char tmp_msg_0[] = {-38, -105, 57, -54, 55, -23, -65, 39, -109, -113, 40, 101, 106, -101, -58, 47, 4, 65, -51, -70, -74, 40, 13, 46, -46, 33, 72, 86, -50, -105, -99, -86, 43, -94, -68, 4, -23, 73, 87, -48, 83, -18, 112, 84, -123, -91, 33, -7, -8, -97, 73, 42, 33, 104, -73, -23, 33, -69, 56, 22, 34, 52, -124, 2, 85, -78, -73, -32, -43, -87, 106, -48, -108, 40, -111, -45, -79, 81, 75, -56, 62, -47, 31, -119, -16, 79, 16, 15, 51, 56, -36, 96, 30, -43, -85, 104, 67, -69, -80, 46, 115, 5, -112, -49, -127, -101, 0, -27, 125, -114, -35, 52, -96, -27, 42, 73, -111, -109, -82, 120, -113, 19, 43, 40, -93, 89, -121, -65, -99, 24, -41, 47, 18, 81, 104, -23, -66, -87, -73, 72, -21, -43, 45, 112, -78, 16, 68, -40, -57, -104, -7, -16, -82, 20, -4, 35, -35, 50, 1, -48, -12, 111, 110, 53, -40, -39, -60, 11, 72, 43, 5, -60, -51, 9, -39, 12, -93, -18, -5, 123, -127, -51, -39, 48, -112, 79, 64, 38, 92, 44, 77, 36, 36, 112, 21, 21, 126, 69, -118, 18, 98, 58, -39, 38, -76, -20, 126, -58, 94, -109, 53, 125, 60, -109, -66, 22, -90, 86, -64, 107, 53, -92, -68, 104, 39, -87, -48, -70, -64, -4, -88};
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
    msg.setTimeStamp(0.807837336714);
    msg.setSource(41176U);
    msg.setSourceEntity(139U);
    msg.setDestination(30619U);
    msg.setDestinationEntity(137U);
    const char tmp_msg_0[] = {89, 112, 126, -78, 10, 102, -36, -83, 6, -54, -39, 111, -78, 106, -23, 97, 1, 80, -55, -75, 56, 29, -39, -97, 62, 97, 21, -38, 105, 27, 66, 90, 73, -11, -91, 76, -105, -10, 57, -16, 81, -113, 48, 83, 115, -36, -32, -96, 9, 70, -91, -121, 43, 69, -1, -9, -117, -106, 5, 55, -104, -77, 63, -78, 109, -8, 83, -92, -21, 76, 69, 108, -109, -45, -99, 58, -41, 121, -89, -14, -110, 59, -117, 64, -111, -127, -94, 33, 27, -59, 13, 17, -1, 35, 121, -88, 64, 66, -69, 39, -79, -58, 72, -6, 53, 22, 3, 101, -24, -15, -37, -128, -48, 41, 72, 104, -128, 42, -27, 38, 24, 80, 87, -6, 101, 119, -54, 70, 116, 9, 79, 9, 59, -113, 32, -72, -122, -76, 122, 17, 71, -31, 92, 85, -65, 77, -111, 56, -56, 68, -24};
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
    msg.setTimeStamp(0.0269500180131);
    msg.setSource(38542U);
    msg.setSourceEntity(220U);
    msg.setDestination(11618U);
    msg.setDestinationEntity(143U);
    msg.type = 69U;
    msg.frequency = 3710224502U;
    msg.min_range = 64715U;
    msg.max_range = 23614U;
    msg.bits_per_point = 147U;
    msg.scale_factor = 0.315473668933;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6495474271;
    tmp_msg_0.beam_height = 0.181559574008;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-90, -26, 100, 4, 7, 6, -38, -30, 90, -69, 10, 20, -26, -87, -88, 22, 106, 14, -36, -127, -8, 22, 10, -60, -99, -89, -26, 18, -46, 76, 33, 125, -5, 58, 35, 89, -33, -32, 56, -89, 67, -114, -34, -81, 62, 105, -14, 94, 51, 28, 40, -71, -31, -28, -70, -47, 32, -54, -116, 90, -55, 37, -32, -78, 96, 115, 80, 18, 69, 91, -52, -5, 71, 121, -127, 40, 115, -26, 58, 41, -74, 24, -66, 124, -106, -78, -62, -28, -76, -121, 87, 55, 101, 54, 8, -23, -49, -68, -79, -75, 0, -19, -65, 126, 122, 55, -61, 54, 6, 115, -78, 33, -103, 76, 44, 50, 76, 21, -10, 56, -26, 18, -2, -37, 13, -117, -119, -22, -105, 99, -34, 103, 59, -59, -19, 67, -60, 12};
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
    msg.setTimeStamp(0.906555109504);
    msg.setSource(54252U);
    msg.setSourceEntity(246U);
    msg.setDestination(33440U);
    msg.setDestinationEntity(208U);
    msg.type = 204U;
    msg.frequency = 3271634669U;
    msg.min_range = 49182U;
    msg.max_range = 59688U;
    msg.bits_per_point = 252U;
    msg.scale_factor = 0.112938126031;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.562793128027;
    tmp_msg_0.beam_height = 0.668418256092;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, 93, -118, 22, 114, 46, -105, 26, -3, -37, 38, 44, 0, -113, -3, 100, -80, 86, 72, -117, 39, 45, -16, 74, 6, 52, -41, 45, -83, 11, -100, -40, 9, -20, 126, -22, -119, -106, 26, 123, 22, -60, 0, 8, 107, -29, 40, -98, 93, -13, -81, 105, -10, 32, 69, 126, -122, -52, -19, -29, 118, 53, 31, 44, -86, 15, -34, 99, -44, 27, 93, 38, -23, -14, -75, 96, 48, -17, 1, -102, 124, 53, -69, 126, 94, -78, -119, 99, -81, 10, 78, -42, 77, -50, -19, 18, 123, 59, 108, -14, 17, 101, -60, 39};
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
    msg.setTimeStamp(0.854601019344);
    msg.setSource(55090U);
    msg.setSourceEntity(13U);
    msg.setDestination(33248U);
    msg.setDestinationEntity(146U);
    msg.type = 45U;
    msg.frequency = 4258764546U;
    msg.min_range = 21701U;
    msg.max_range = 58403U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.0848696974684;
    const char tmp_msg_0[] = {47, 42, -55, -46, -98, 29, 74, -28, 23, 37, -68, 27, 92, 76, -36, -5, 80, 14, 33, 0, 95, 44, -102, -20, 96, 33, -61, 59, 14, -46, 22, -75, -76, 0, 99, 76, -63, -95, -95, -107, -118, -109, -74, 79, -123, 122, 98, -18, 104, -124, -12, -2, 62, 67, -79, -99, -67, 91, 80, -87, -97, 7, 20, 41, -3, 9, 122, -34, -29, -100, -74, -56, -31, 29, -9, 68, -14, 59, -95, 48, 17, -59, 44, -25, -99, 21, -76, 7, -54, -42, -88, 20, -1, 7, -68, 97, -48, -124, 67, 11, -76, 122, 10, 44, -7, 68, 32, 42, 67, 80, -58, -103, -123, -105, 43, -52, 9, -56, -95, -93, -67, 58, 74, 56, 24, 81, -111, 99, -95, -54, 33, 40, 42, 75, -98, -13, -111, 25, -36, 37, -67, 65, -90, 15, 104, -46};
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
    msg.setTimeStamp(0.383987209647);
    msg.setSource(14109U);
    msg.setSourceEntity(28U);
    msg.setDestination(65135U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.516103187771);
    msg.setSource(29635U);
    msg.setSourceEntity(23U);
    msg.setDestination(35609U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.0710788039492);
    msg.setSource(21083U);
    msg.setSourceEntity(42U);
    msg.setDestination(25220U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.884593631882);
    msg.setSource(22295U);
    msg.setSourceEntity(75U);
    msg.setDestination(63752U);
    msg.setDestinationEntity(76U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.57718748446);
    msg.setSource(22062U);
    msg.setSourceEntity(157U);
    msg.setDestination(53247U);
    msg.setDestinationEntity(131U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.1433947664);
    msg.setSource(22477U);
    msg.setSourceEntity(48U);
    msg.setDestination(7534U);
    msg.setDestinationEntity(13U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.14135670454);
    msg.setSource(27791U);
    msg.setSourceEntity(87U);
    msg.setDestination(12002U);
    msg.setDestinationEntity(58U);
    msg.value = 0.330135093453;
    msg.confidence = 0.0883621180017;
    msg.opmodes.assign("HZFYRXACPAZASSYGJBNXVYIHFLDHUPJQQMQBVFLWENUWAGWNVEISBKQCCJINUXGPLJBDPNWHVHSMPPJAAEPPOBMDAEZOTODEKVUAFIPFZUWZECINVRCLKZJUMDSKULHIWYXBQSTVWVWBCDOBYJLORZYLHTGRKKSGR");

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
    msg.setTimeStamp(0.787101557895);
    msg.setSource(35038U);
    msg.setSourceEntity(234U);
    msg.setDestination(46969U);
    msg.setDestinationEntity(177U);
    msg.value = 0.916151500816;
    msg.confidence = 0.859709605307;
    msg.opmodes.assign("LRFCNTOZMMSRPKPYXECCWIXDCUFJORMBPBSCEJFXDZKWHVLTEKAHJPFSGQUAEUTDRGQHJQXZSMTSRPIXAUTAKMIPQDJHTJNPHLSIIAYEACLWBHFAZIZBONAZYVUBHLBSVVDYCOZCEJBOWKLLTFGUMFXKQXRGECUGHIBKWQUXYJCVLDVANADGOZQFPOILYGQWNBUWWJTTRIQPENDTWGMRKOLMVGYEYSWJPREHXXUIDHQYVVZRNSKSFMNOVZMYGO");

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
    msg.setTimeStamp(0.262847106504);
    msg.setSource(5902U);
    msg.setSourceEntity(148U);
    msg.setDestination(1304U);
    msg.setDestinationEntity(33U);
    msg.value = 0.722442724267;
    msg.confidence = 0.845418583741;
    msg.opmodes.assign("QJKCBQMMMPTDGXF");

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
    msg.setTimeStamp(0.654460703763);
    msg.setSource(104U);
    msg.setSourceEntity(190U);
    msg.setDestination(33441U);
    msg.setDestinationEntity(234U);
    msg.itow = 1754103749U;
    msg.lat = 0.374211579786;
    msg.lon = 0.780572492499;
    msg.height_ell = 0.195903413588;
    msg.height_sea = 0.732337997491;
    msg.hacc = 0.926423632818;
    msg.vacc = 0.803923993592;
    msg.vel_n = 0.910270869171;
    msg.vel_e = 0.546487673075;
    msg.vel_d = 0.15039355332;
    msg.speed = 0.556168526744;
    msg.gspeed = 0.143900027695;
    msg.heading = 0.876480002063;
    msg.sacc = 0.999256572623;
    msg.cacc = 0.0335502664066;

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
    msg.setTimeStamp(0.543247864891);
    msg.setSource(4486U);
    msg.setSourceEntity(38U);
    msg.setDestination(13557U);
    msg.setDestinationEntity(183U);
    msg.itow = 1845248296U;
    msg.lat = 0.860286076816;
    msg.lon = 0.924880614611;
    msg.height_ell = 0.36563921641;
    msg.height_sea = 0.188483255019;
    msg.hacc = 0.875955592052;
    msg.vacc = 0.237536416281;
    msg.vel_n = 0.0205888795687;
    msg.vel_e = 0.940791539495;
    msg.vel_d = 0.10929250194;
    msg.speed = 0.523138927198;
    msg.gspeed = 0.407758832625;
    msg.heading = 0.888789701915;
    msg.sacc = 0.133087443071;
    msg.cacc = 0.823189577186;

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
    msg.setTimeStamp(0.755596492542);
    msg.setSource(50075U);
    msg.setSourceEntity(246U);
    msg.setDestination(54058U);
    msg.setDestinationEntity(149U);
    msg.itow = 3828162503U;
    msg.lat = 0.938973249737;
    msg.lon = 0.837544258334;
    msg.height_ell = 0.421283828671;
    msg.height_sea = 0.60278527785;
    msg.hacc = 0.718831746994;
    msg.vacc = 0.12621354436;
    msg.vel_n = 0.35195933662;
    msg.vel_e = 0.788299878567;
    msg.vel_d = 0.49141428601;
    msg.speed = 0.698698302011;
    msg.gspeed = 0.322780352444;
    msg.heading = 0.572208884776;
    msg.sacc = 0.0539188566576;
    msg.cacc = 0.233015204224;

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
    msg.setTimeStamp(0.443916043603);
    msg.setSource(1424U);
    msg.setSourceEntity(133U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(203U);
    msg.id = 202U;
    msg.value = 0.900446569228;

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
    msg.setTimeStamp(0.900118417637);
    msg.setSource(10763U);
    msg.setSourceEntity(164U);
    msg.setDestination(39068U);
    msg.setDestinationEntity(108U);
    msg.id = 181U;
    msg.value = 0.834654866692;

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
    msg.setTimeStamp(0.83681881642);
    msg.setSource(61469U);
    msg.setSourceEntity(212U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(182U);
    msg.id = 216U;
    msg.value = 0.665903040506;

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
    msg.setTimeStamp(0.839340443401);
    msg.setSource(2558U);
    msg.setSourceEntity(44U);
    msg.setDestination(65150U);
    msg.setDestinationEntity(196U);
    msg.x = 0.0420671860878;
    msg.y = 0.678057802925;
    msg.z = 0.149130444484;
    msg.phi = 0.268337829328;
    msg.theta = 0.492445059011;
    msg.psi = 0.0235103801523;

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
    msg.setTimeStamp(0.783770873107);
    msg.setSource(26267U);
    msg.setSourceEntity(128U);
    msg.setDestination(34886U);
    msg.setDestinationEntity(101U);
    msg.x = 0.521386759705;
    msg.y = 0.744234920964;
    msg.z = 0.891014219975;
    msg.phi = 0.830567606597;
    msg.theta = 0.407194267339;
    msg.psi = 0.884391318325;

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
    msg.setTimeStamp(0.842521161949);
    msg.setSource(55561U);
    msg.setSourceEntity(16U);
    msg.setDestination(53893U);
    msg.setDestinationEntity(139U);
    msg.x = 0.0992808225024;
    msg.y = 0.945368470002;
    msg.z = 0.0968921647391;
    msg.phi = 0.266702377844;
    msg.theta = 0.0648983193243;
    msg.psi = 0.848829989868;

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
    msg.setTimeStamp(0.646575369016);
    msg.setSource(24286U);
    msg.setSourceEntity(192U);
    msg.setDestination(56633U);
    msg.setDestinationEntity(27U);
    msg.beam_width = 0.985264784801;
    msg.beam_height = 0.938917471876;

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
    msg.setTimeStamp(0.857415092074);
    msg.setSource(49344U);
    msg.setSourceEntity(196U);
    msg.setDestination(28894U);
    msg.setDestinationEntity(121U);
    msg.beam_width = 0.387362537608;
    msg.beam_height = 0.751394204954;

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
    msg.setTimeStamp(0.336307887622);
    msg.setSource(44309U);
    msg.setSourceEntity(227U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.0642602530332;
    msg.beam_height = 0.713926224736;

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
    msg.setTimeStamp(0.202809900397);
    msg.setSource(11116U);
    msg.setSourceEntity(245U);
    msg.setDestination(19875U);
    msg.setDestinationEntity(106U);
    msg.sane = 239U;

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
    msg.setTimeStamp(0.281042498087);
    msg.setSource(22233U);
    msg.setSourceEntity(179U);
    msg.setDestination(61841U);
    msg.setDestinationEntity(223U);
    msg.sane = 51U;

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
    msg.setTimeStamp(0.120381149271);
    msg.setSource(43776U);
    msg.setSourceEntity(242U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(118U);
    msg.sane = 190U;

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
    msg.setTimeStamp(0.0501867580664);
    msg.setSource(45540U);
    msg.setSourceEntity(20U);
    msg.setDestination(21822U);
    msg.setDestinationEntity(2U);
    msg.value = 0.652770085384;

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
    msg.setTimeStamp(0.109653212409);
    msg.setSource(2397U);
    msg.setSourceEntity(209U);
    msg.setDestination(19428U);
    msg.setDestinationEntity(142U);
    msg.value = 0.223074879269;

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
    msg.setTimeStamp(0.718510921167);
    msg.setSource(65209U);
    msg.setSourceEntity(119U);
    msg.setDestination(9203U);
    msg.setDestinationEntity(148U);
    msg.value = 0.641546557115;

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
    msg.setTimeStamp(0.150381659464);
    msg.setSource(11743U);
    msg.setSourceEntity(186U);
    msg.setDestination(65061U);
    msg.setDestinationEntity(146U);
    msg.value = 0.902231386616;

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
    msg.setTimeStamp(0.148806339766);
    msg.setSource(6476U);
    msg.setSourceEntity(1U);
    msg.setDestination(3397U);
    msg.setDestinationEntity(153U);
    msg.value = 0.708762242414;

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
    msg.setTimeStamp(0.615448290669);
    msg.setSource(29644U);
    msg.setSourceEntity(66U);
    msg.setDestination(31377U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0617288889834;

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
    msg.setTimeStamp(0.857356718499);
    msg.setSource(31430U);
    msg.setSourceEntity(160U);
    msg.setDestination(33518U);
    msg.setDestinationEntity(195U);
    msg.value = 0.963233260794;

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
    msg.setTimeStamp(0.307334048781);
    msg.setSource(59774U);
    msg.setSourceEntity(18U);
    msg.setDestination(20406U);
    msg.setDestinationEntity(60U);
    msg.value = 0.4535903197;

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
    msg.setTimeStamp(0.903106557754);
    msg.setSource(18689U);
    msg.setSourceEntity(93U);
    msg.setDestination(29027U);
    msg.setDestinationEntity(198U);
    msg.value = 0.221598798234;

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
    msg.setTimeStamp(0.390563005095);
    msg.setSource(48108U);
    msg.setSourceEntity(50U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(178U);
    msg.value = 0.192251319779;

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
    msg.setTimeStamp(0.0421205821974);
    msg.setSource(56585U);
    msg.setSourceEntity(224U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(21U);
    msg.value = 0.321005520948;

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
    msg.setTimeStamp(0.617754830531);
    msg.setSource(40607U);
    msg.setSourceEntity(97U);
    msg.setDestination(4636U);
    msg.setDestinationEntity(228U);
    msg.value = 0.889422779713;

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
    msg.setTimeStamp(0.768050974458);
    msg.setSource(24953U);
    msg.setSourceEntity(83U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(20U);
    msg.value = 0.153289654041;

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
    msg.setTimeStamp(0.617946028268);
    msg.setSource(28588U);
    msg.setSourceEntity(204U);
    msg.setDestination(30537U);
    msg.setDestinationEntity(214U);
    msg.value = 0.612873095874;

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
    msg.setTimeStamp(0.356436300928);
    msg.setSource(21780U);
    msg.setSourceEntity(49U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(73U);
    msg.value = 0.614087742229;

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
    msg.setTimeStamp(0.085762993932);
    msg.setSource(39703U);
    msg.setSourceEntity(121U);
    msg.setDestination(51630U);
    msg.setDestinationEntity(62U);
    msg.value = 0.544322369705;

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
    msg.setTimeStamp(0.0419758703149);
    msg.setSource(11895U);
    msg.setSourceEntity(19U);
    msg.setDestination(62496U);
    msg.setDestinationEntity(63U);
    msg.value = 0.637923156944;

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
    msg.setTimeStamp(0.712780753097);
    msg.setSource(45563U);
    msg.setSourceEntity(88U);
    msg.setDestination(25612U);
    msg.setDestinationEntity(189U);
    msg.value = 0.541038396166;

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
    msg.setTimeStamp(0.55978834214);
    msg.setSource(37162U);
    msg.setSourceEntity(75U);
    msg.setDestination(27218U);
    msg.setDestinationEntity(199U);
    msg.value = 0.995649592807;

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
    msg.setTimeStamp(0.649309627876);
    msg.setSource(9970U);
    msg.setSourceEntity(247U);
    msg.setDestination(4505U);
    msg.setDestinationEntity(169U);
    msg.value = 0.0388623845687;

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
    msg.setTimeStamp(0.268346082701);
    msg.setSource(37820U);
    msg.setSourceEntity(190U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(161U);
    msg.value = 0.486010216854;

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
    msg.setTimeStamp(0.543639897499);
    msg.setSource(57993U);
    msg.setSourceEntity(159U);
    msg.setDestination(4404U);
    msg.setDestinationEntity(198U);
    msg.value = 0.656844349519;

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
    msg.setTimeStamp(0.779378983682);
    msg.setSource(21947U);
    msg.setSourceEntity(141U);
    msg.setDestination(33718U);
    msg.setDestinationEntity(140U);
    msg.value = 0.0427767557373;

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
    msg.setTimeStamp(0.460338870432);
    msg.setSource(54250U);
    msg.setSourceEntity(24U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(221U);
    msg.value = 0.102171536127;

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
    msg.setTimeStamp(0.352452930142);
    msg.setSource(2133U);
    msg.setSourceEntity(74U);
    msg.setDestination(17847U);
    msg.setDestinationEntity(52U);
    msg.validity = 39777U;
    msg.type = 98U;
    msg.tow = 3502904518U;
    msg.base_lat = 0.733149246047;
    msg.base_lon = 0.107408894763;
    msg.base_height = 0.0329759878836;
    msg.n = 0.793318970957;
    msg.e = 0.0709661700009;
    msg.d = 0.461629464429;
    msg.v_n = 0.819110622866;
    msg.v_e = 0.936412967587;
    msg.v_d = 0.446619370051;
    msg.satellites = 135U;
    msg.iar_hyp = 27186U;
    msg.iar_ratio = 0.750433344711;

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
    msg.setTimeStamp(0.689814843623);
    msg.setSource(37264U);
    msg.setSourceEntity(220U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(13U);
    msg.validity = 41491U;
    msg.type = 88U;
    msg.tow = 284758504U;
    msg.base_lat = 0.140248067626;
    msg.base_lon = 0.573957206164;
    msg.base_height = 0.0641994566883;
    msg.n = 0.495731922966;
    msg.e = 0.440783284633;
    msg.d = 0.805580288069;
    msg.v_n = 0.487075742578;
    msg.v_e = 0.214874943098;
    msg.v_d = 0.655005492479;
    msg.satellites = 22U;
    msg.iar_hyp = 5395U;
    msg.iar_ratio = 0.960270824831;

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
    msg.setTimeStamp(0.424010965872);
    msg.setSource(7996U);
    msg.setSourceEntity(10U);
    msg.setDestination(62600U);
    msg.setDestinationEntity(182U);
    msg.validity = 2798U;
    msg.type = 149U;
    msg.tow = 2813618301U;
    msg.base_lat = 0.444358297956;
    msg.base_lon = 0.74737558883;
    msg.base_height = 0.263774888184;
    msg.n = 0.406323512058;
    msg.e = 0.992698835171;
    msg.d = 0.762523600735;
    msg.v_n = 0.061772683429;
    msg.v_e = 0.248739762734;
    msg.v_d = 0.401414568679;
    msg.satellites = 176U;
    msg.iar_hyp = 36724U;
    msg.iar_ratio = 0.681014752431;

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
    msg.setTimeStamp(0.816057396095);
    msg.setSource(20222U);
    msg.setSourceEntity(72U);
    msg.setDestination(51069U);
    msg.setDestinationEntity(211U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.149768198504;
    tmp_msg_0.lon = 0.191027758229;
    tmp_msg_0.height = 0.501111053599;
    tmp_msg_0.x = 0.853206381045;
    tmp_msg_0.y = 0.921807725766;
    tmp_msg_0.z = 0.538454932232;
    tmp_msg_0.phi = 0.471095315761;
    tmp_msg_0.theta = 0.0188289206529;
    tmp_msg_0.psi = 0.248590718156;
    tmp_msg_0.u = 0.0743364625185;
    tmp_msg_0.v = 0.0132447656264;
    tmp_msg_0.w = 0.489163425333;
    tmp_msg_0.vx = 0.412192834654;
    tmp_msg_0.vy = 0.512492808649;
    tmp_msg_0.vz = 0.317757358868;
    tmp_msg_0.p = 0.984851432869;
    tmp_msg_0.q = 0.240102623217;
    tmp_msg_0.r = 0.498129247256;
    tmp_msg_0.depth = 0.0363598583096;
    tmp_msg_0.alt = 0.093483174459;
    msg.state.set(tmp_msg_0);
    msg.type = 55U;

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
    msg.setTimeStamp(0.308841475371);
    msg.setSource(50223U);
    msg.setSourceEntity(211U);
    msg.setDestination(2972U);
    msg.setDestinationEntity(81U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.205949025606;
    tmp_msg_0.lon = 0.195174234076;
    tmp_msg_0.height = 0.991266930923;
    tmp_msg_0.x = 0.952407603982;
    tmp_msg_0.y = 0.550444077092;
    tmp_msg_0.z = 0.774425300983;
    tmp_msg_0.phi = 0.747591523766;
    tmp_msg_0.theta = 0.862412378326;
    tmp_msg_0.psi = 0.875209711721;
    tmp_msg_0.u = 0.760954949109;
    tmp_msg_0.v = 0.567455679841;
    tmp_msg_0.w = 0.539468977251;
    tmp_msg_0.vx = 0.811343574716;
    tmp_msg_0.vy = 0.71558197364;
    tmp_msg_0.vz = 0.260063613031;
    tmp_msg_0.p = 0.780494875477;
    tmp_msg_0.q = 0.4798310333;
    tmp_msg_0.r = 0.470237951411;
    tmp_msg_0.depth = 0.282397068093;
    tmp_msg_0.alt = 0.408578729614;
    msg.state.set(tmp_msg_0);
    msg.type = 47U;

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
    msg.setTimeStamp(0.29193488163);
    msg.setSource(10079U);
    msg.setSourceEntity(55U);
    msg.setDestination(6526U);
    msg.setDestinationEntity(233U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.832731267102;
    tmp_msg_0.lon = 0.22083225857;
    tmp_msg_0.height = 0.626756008231;
    tmp_msg_0.x = 0.646114926981;
    tmp_msg_0.y = 0.174271042835;
    tmp_msg_0.z = 0.751319697778;
    tmp_msg_0.phi = 0.763176793799;
    tmp_msg_0.theta = 0.196743171324;
    tmp_msg_0.psi = 0.638624751271;
    tmp_msg_0.u = 0.220328296318;
    tmp_msg_0.v = 0.62530521224;
    tmp_msg_0.w = 0.35838116808;
    tmp_msg_0.vx = 0.739787009694;
    tmp_msg_0.vy = 0.297100265032;
    tmp_msg_0.vz = 0.652332170329;
    tmp_msg_0.p = 0.429601088579;
    tmp_msg_0.q = 0.295967128601;
    tmp_msg_0.r = 0.500330248394;
    tmp_msg_0.depth = 0.293151155386;
    tmp_msg_0.alt = 0.392316889773;
    msg.state.set(tmp_msg_0);
    msg.type = 238U;

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
    msg.setTimeStamp(0.034546990543);
    msg.setSource(56227U);
    msg.setSourceEntity(25U);
    msg.setDestination(37877U);
    msg.setDestinationEntity(187U);
    msg.value = 0.918696602604;

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
    msg.setTimeStamp(0.677730349456);
    msg.setSource(5928U);
    msg.setSourceEntity(52U);
    msg.setDestination(41392U);
    msg.setDestinationEntity(254U);
    msg.value = 0.792367650381;

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
    msg.setTimeStamp(0.972783420401);
    msg.setSource(44708U);
    msg.setSourceEntity(149U);
    msg.setDestination(27798U);
    msg.setDestinationEntity(21U);
    msg.value = 0.64331496585;

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
    msg.setTimeStamp(0.331965554067);
    msg.setSource(64995U);
    msg.setSourceEntity(161U);
    msg.setDestination(23342U);
    msg.setDestinationEntity(12U);
    msg.value = 0.104230510411;

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
    msg.setTimeStamp(0.0832313194121);
    msg.setSource(28579U);
    msg.setSourceEntity(162U);
    msg.setDestination(39948U);
    msg.setDestinationEntity(99U);
    msg.value = 0.299482864596;

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
    msg.setTimeStamp(0.975871796081);
    msg.setSource(16290U);
    msg.setSourceEntity(73U);
    msg.setDestination(19111U);
    msg.setDestinationEntity(117U);
    msg.value = 0.791876783587;

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
    msg.setTimeStamp(0.221356480811);
    msg.setSource(62076U);
    msg.setSourceEntity(120U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(51U);
    msg.value = 0.165215083737;

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
    msg.setTimeStamp(0.220233736709);
    msg.setSource(10448U);
    msg.setSourceEntity(33U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(238U);
    msg.value = 0.71980752575;

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
    msg.setTimeStamp(0.714481584189);
    msg.setSource(23873U);
    msg.setSourceEntity(16U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(212U);
    msg.value = 0.742528568979;

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
    msg.setTimeStamp(0.370605402468);
    msg.setSource(62429U);
    msg.setSourceEntity(242U);
    msg.setDestination(14534U);
    msg.setDestinationEntity(186U);
    msg.value = 0.532640063167;

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
    msg.setTimeStamp(0.332886465007);
    msg.setSource(20400U);
    msg.setSourceEntity(174U);
    msg.setDestination(48424U);
    msg.setDestinationEntity(87U);
    msg.value = 0.335475443128;

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
    msg.setTimeStamp(0.87170132762);
    msg.setSource(2571U);
    msg.setSourceEntity(245U);
    msg.setDestination(16123U);
    msg.setDestinationEntity(57U);
    msg.value = 0.0386256580716;

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
    msg.setTimeStamp(0.811523536435);
    msg.setSource(36214U);
    msg.setSourceEntity(57U);
    msg.setDestination(41805U);
    msg.setDestinationEntity(69U);
    msg.value = 0.772258125214;

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
    msg.setTimeStamp(0.148176742901);
    msg.setSource(55867U);
    msg.setSourceEntity(230U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(41U);
    msg.value = 0.45592553757;

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
    msg.setTimeStamp(0.312587003863);
    msg.setSource(59823U);
    msg.setSourceEntity(185U);
    msg.setDestination(987U);
    msg.setDestinationEntity(227U);
    msg.value = 0.742284280772;

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
    msg.setTimeStamp(0.637263833373);
    msg.setSource(28260U);
    msg.setSourceEntity(144U);
    msg.setDestination(26135U);
    msg.setDestinationEntity(145U);
    msg.id = 13U;
    msg.zoom = 21U;
    msg.action = 222U;

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
    msg.setTimeStamp(0.870030383011);
    msg.setSource(42914U);
    msg.setSourceEntity(162U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(215U);
    msg.id = 82U;
    msg.zoom = 171U;
    msg.action = 26U;

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
    msg.setTimeStamp(0.403133106005);
    msg.setSource(9100U);
    msg.setSourceEntity(181U);
    msg.setDestination(54422U);
    msg.setDestinationEntity(241U);
    msg.id = 213U;
    msg.zoom = 142U;
    msg.action = 213U;

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
    msg.setTimeStamp(0.878450628699);
    msg.setSource(45809U);
    msg.setSourceEntity(115U);
    msg.setDestination(48137U);
    msg.setDestinationEntity(170U);
    msg.id = 250U;
    msg.value = 0.245179734038;

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
    msg.setTimeStamp(0.891918483929);
    msg.setSource(29004U);
    msg.setSourceEntity(80U);
    msg.setDestination(19119U);
    msg.setDestinationEntity(145U);
    msg.id = 220U;
    msg.value = 0.773174311683;

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
    msg.setTimeStamp(0.336017559399);
    msg.setSource(19129U);
    msg.setSourceEntity(16U);
    msg.setDestination(39516U);
    msg.setDestinationEntity(61U);
    msg.id = 122U;
    msg.value = 0.744503707374;

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
    msg.setTimeStamp(0.836980377954);
    msg.setSource(4438U);
    msg.setSourceEntity(138U);
    msg.setDestination(27509U);
    msg.setDestinationEntity(76U);
    msg.id = 250U;
    msg.value = 0.0366068615577;

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
    msg.setTimeStamp(0.60379495426);
    msg.setSource(20921U);
    msg.setSourceEntity(118U);
    msg.setDestination(57700U);
    msg.setDestinationEntity(5U);
    msg.id = 187U;
    msg.value = 0.883349099178;

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
    msg.setTimeStamp(0.677226228699);
    msg.setSource(42573U);
    msg.setSourceEntity(199U);
    msg.setDestination(10343U);
    msg.setDestinationEntity(91U);
    msg.id = 60U;
    msg.value = 0.311092180145;

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
    msg.setTimeStamp(0.749085303586);
    msg.setSource(61012U);
    msg.setSourceEntity(34U);
    msg.setDestination(16392U);
    msg.setDestinationEntity(137U);
    msg.id = 96U;
    msg.angle = 0.834514354996;

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
    msg.setTimeStamp(0.461096597355);
    msg.setSource(23679U);
    msg.setSourceEntity(149U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(198U);
    msg.id = 19U;
    msg.angle = 0.561240457368;

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
    msg.setTimeStamp(0.291290039614);
    msg.setSource(4170U);
    msg.setSourceEntity(71U);
    msg.setDestination(36471U);
    msg.setDestinationEntity(185U);
    msg.id = 77U;
    msg.angle = 0.0155077025349;

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
    msg.setTimeStamp(0.904222708273);
    msg.setSource(49465U);
    msg.setSourceEntity(30U);
    msg.setDestination(29626U);
    msg.setDestinationEntity(29U);
    msg.op = 51U;
    msg.actions.assign("EACIZTIHVJSJXWGGNMMUOQGRMTWBRLPGYBOQGZKJHOPHBFXMZCWJHAZPAJHLXALXLFVMRCWROTDGCWEBWKITBZYMQCSTFVQSRXBLJCRVNNSSGRXOSEHPKRFIFNEPUVGKDPENEDRUVVPIVVZQUJOEYXNUPZIMEDULOSLWPKZANXDYAVFADGOB");

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
    msg.setTimeStamp(0.302872329278);
    msg.setSource(57895U);
    msg.setSourceEntity(133U);
    msg.setDestination(22654U);
    msg.setDestinationEntity(198U);
    msg.op = 52U;
    msg.actions.assign("IERHFRVTPLDZNZZCNVSCOMAUFQYGFGJZWWXKQVMHWOKABYYLJGVOCHSQGGUCKCBUWJXJINFVLZTSEIFGOSDOXETNVPDRFDYBRXDXOJHN");

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
    msg.setTimeStamp(0.170835754965);
    msg.setSource(16364U);
    msg.setSourceEntity(185U);
    msg.setDestination(1331U);
    msg.setDestinationEntity(239U);
    msg.op = 93U;
    msg.actions.assign("FGPBZIMBPVHPNKLHSRSRVUFVZGFLDRNMEQDTVBHAWLKFJRT");

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
    msg.setTimeStamp(0.334467825383);
    msg.setSource(15215U);
    msg.setSourceEntity(213U);
    msg.setDestination(36880U);
    msg.setDestinationEntity(163U);
    msg.actions.assign("FJYRMHPWRRBXXSUGVXEJJVXUCQSQGHWAINEOQBNKZR");

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
    msg.setTimeStamp(0.143898245012);
    msg.setSource(59583U);
    msg.setSourceEntity(28U);
    msg.setDestination(15492U);
    msg.setDestinationEntity(250U);
    msg.actions.assign("ODNTXWEISMFYQYASKQSSNRPLPNXCCUNBIGXCQGZDBBFIHBHHUBGSPLMNJEZJYYKRLLTEAMGXFRQZJOQAEZAWTTSPJEVBILVKHNXVWQNYUHSDJWSAJUUYFPKJQYQNCLKWOLZEABPDFZINJCAWPOKGYTDXGKGCIBMPOCRVMHDTIFGHOVXMCDLEWXPIOTVWJTUYWFTVAQSMYOUDEVXEGLRPK");

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
    msg.setTimeStamp(0.391932216238);
    msg.setSource(49270U);
    msg.setSourceEntity(43U);
    msg.setDestination(39621U);
    msg.setDestinationEntity(170U);
    msg.actions.assign("IBZEKNBMSHIFHCYRCNGNPQVRIIEXDTL");

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
    msg.setTimeStamp(0.934824029393);
    msg.setSource(30699U);
    msg.setSourceEntity(95U);
    msg.setDestination(49754U);
    msg.setDestinationEntity(216U);
    msg.button = 241U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.316268553969);
    msg.setSource(624U);
    msg.setSourceEntity(228U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(167U);
    msg.button = 112U;
    msg.value = 69U;

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
    msg.setTimeStamp(0.910813117273);
    msg.setSource(16705U);
    msg.setSourceEntity(42U);
    msg.setDestination(58863U);
    msg.setDestinationEntity(156U);
    msg.button = 79U;
    msg.value = 204U;

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
    msg.setTimeStamp(0.753298999474);
    msg.setSource(64066U);
    msg.setSourceEntity(74U);
    msg.setDestination(13884U);
    msg.setDestinationEntity(111U);
    msg.op = 10U;
    msg.text.assign("FQOTXLHPGFFFIRUMJVWNGOYCEFSRMCHQHTTAHGDDKHIEBWOAAZQHZUKBPBBGGJXXSNRPZMDITQSLKQQGHZCXDBDSNOTSDTKCPGTBEYJWOOKIHYGSXTRNXIIUEDVPUDJWFCQYLOLTEXZWAYIWBMSVWAPLOXWLEEFEMOEAOJCYYPUGVZ");

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
    msg.setTimeStamp(0.524518312348);
    msg.setSource(35942U);
    msg.setSourceEntity(250U);
    msg.setDestination(42574U);
    msg.setDestinationEntity(251U);
    msg.op = 28U;
    msg.text.assign("NWLWMUESNXVALMQTMGCZYMYEIJOJXZOKKPGODXWUOEZNPAFOHRHXULYVBGRXMFNQEEYDFJTVGLNHXBRVHHDPAPWOQXRVUUHYTALWHBBZIPIQGAMFNTJQIFYDPYSERVAARTCOYUESJBTBKZOEVXSZXIPGJFBKSLBMKILKKNHGFUNBYPGTPMCDZDQSCRIMKJTZIQCAWQBUOLEDIWUFSCESAVZTCHNDWSCYGDPHKATZIMLRFXFOGCJUCLW");

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
    msg.setTimeStamp(0.457084958604);
    msg.setSource(24703U);
    msg.setSourceEntity(32U);
    msg.setDestination(38606U);
    msg.setDestinationEntity(55U);
    msg.op = 106U;
    msg.text.assign("ZVZSRWNDIDTXEPYWLVEOTWIOYGWLFUERWPMOSJOXXYGGQDHILCOMKTRZNPJAPQPYGUVSRNMAIUSMUN");

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
    msg.setTimeStamp(0.278591590498);
    msg.setSource(4848U);
    msg.setSourceEntity(159U);
    msg.setDestination(28997U);
    msg.setDestinationEntity(107U);
    msg.op = 143U;
    msg.time_remain = 0.841333544311;
    msg.sched_time = 0.334003635304;

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
    msg.setTimeStamp(0.745704506585);
    msg.setSource(59524U);
    msg.setSourceEntity(206U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(175U);
    msg.op = 137U;
    msg.time_remain = 0.194659316597;
    msg.sched_time = 0.0344479521352;

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
    msg.setTimeStamp(0.232443750655);
    msg.setSource(4785U);
    msg.setSourceEntity(228U);
    msg.setDestination(47034U);
    msg.setDestinationEntity(188U);
    msg.op = 37U;
    msg.time_remain = 0.369243719015;
    msg.sched_time = 0.328301036021;

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
    msg.setTimeStamp(0.630867239538);
    msg.setSource(49931U);
    msg.setSourceEntity(205U);
    msg.setDestination(50742U);
    msg.setDestinationEntity(7U);
    msg.name.assign("GWRFDCVPKOJHQRVCZCCPACQMXEOFUOUEQEBPRSZAVQLAMTHKUZJJLVJXXSVCCYPFBUZYKMRXBYLNBSXIZQYSOLMDRENOASEHAGRJNJSIIYEHGWDANTDHKHKYOUMDXZIHROZYLABUDQLPZBGWGAMGPCNTWQWSXWMFNJHWZSOJJTTOYINPCEZPFLFDIVQKWTBFRDBYRHYAKMSGWQLXVTHIVFJECEKFNTMMUIULGIBEOTTIF");
    msg.op = 61U;
    msg.sched_time = 0.381003694064;

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
    msg.setTimeStamp(0.619332982348);
    msg.setSource(6911U);
    msg.setSourceEntity(4U);
    msg.setDestination(15584U);
    msg.setDestinationEntity(6U);
    msg.name.assign("IKSHDISGMVJHLPSSUEAZCNRRGXSCPUERROAVVZIUJUUDFVABBEGAWYOQSZHFVMECCQOKPBZAPZYTRSCNPWBXOYLLZL");
    msg.op = 42U;
    msg.sched_time = 0.0662127965421;

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
    msg.setTimeStamp(0.60496132797);
    msg.setSource(37703U);
    msg.setSourceEntity(111U);
    msg.setDestination(57949U);
    msg.setDestinationEntity(167U);
    msg.name.assign("CKWYNTSKJUYNVYMTEAAVKQQXVCAIFTLJWRKIPYYONHZGXBICNBLDRGMPKOSZIFLTTBJDLFRHNPPBRVSZVXNRBEVKMXKSKFQQBTICJBTSHDULMFWHMSWSIKRDSFPTIPEPXWUPHGUWCIXAJLDNOMOFELZPSQWREOHFXZBLEZHOOZDRRNFCPHBJCQJCOMABUMHAJEYIRYSUMQULYGWWTGQKDLDFVTG");
    msg.op = 173U;
    msg.sched_time = 0.399612816448;

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
    msg.setTimeStamp(0.0926863929681);
    msg.setSource(8896U);
    msg.setSourceEntity(239U);
    msg.setDestination(2188U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.896804809462);
    msg.setSource(43474U);
    msg.setSourceEntity(84U);
    msg.setDestination(27414U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.556684981654);
    msg.setSource(7168U);
    msg.setSourceEntity(119U);
    msg.setDestination(13407U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.472325964053);
    msg.setSource(22953U);
    msg.setSourceEntity(10U);
    msg.setDestination(49626U);
    msg.setDestinationEntity(130U);
    msg.name.assign("KHBYAASPUJESUTCUFBKURJOQGNJNPZMEBWHXYAOQXWKMOJEMCJLGTEYTGDPGCIBOWSSIFQPUWIZPBXEOWSTVXZXRGKFQFLADMYTRUDCHMBLJSTDZNBCFGJEVQVYKAMRCNWWFIGHEMPNSBODYXPBZKKYOWAYCPJRL");
    msg.state = 18U;

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
    msg.setTimeStamp(0.99371665352);
    msg.setSource(32971U);
    msg.setSourceEntity(225U);
    msg.setDestination(46401U);
    msg.setDestinationEntity(3U);
    msg.name.assign("KGVRUIODGBPATZBUARWYIZYYPZPQTNJWLKUSXHTDXXSNOFMYEHPFIKYXQHTXFQSUIRPDCRAVBRVEFDIBOAEJSTUYGDPLGRBYNVVSQFGSEMEIVBWEBWFFCLVZDQYNUSJXNXUKHSX");
    msg.state = 73U;

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
    msg.setTimeStamp(0.0185455064362);
    msg.setSource(62031U);
    msg.setSourceEntity(229U);
    msg.setDestination(61215U);
    msg.setDestinationEntity(46U);
    msg.name.assign("LTNHUMPFOJRQLTFNCRJCYKIAQLNNCIBXQDJWQXEZHXZJNHBEQXOWQHQEKZVSTPGVXZVEHMMMVEBRJNUGOSIBQYGTRRSKWHOWSUDKDKCMOLEIKOIUPRMZLMWTSYMVFCRIFYEDLHBBFOFGRENYTTHCYLAWNXYWKFUKONXSDIDGWYJTEMPXRFVUMNQAYDWJUAZBGLJGCGPOJUZCVJVUEZYKSI");
    msg.state = 126U;

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
    msg.setTimeStamp(0.991382588446);
    msg.setSource(1211U);
    msg.setSourceEntity(227U);
    msg.setDestination(53147U);
    msg.setDestinationEntity(75U);
    msg.name.assign("SPPAWJZKUCEXYQQENAGULNIFTLVHBKVCCBIIDFNWVPNZRHEGBWRQWYYABVLVBIJDOUSEQZXNCJCTSUCYMWNNHDUIGDNBQVKYCIOEZXZOBJHARFPTOMKYTBEPIXEWGYL");
    msg.value = 28U;

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
    msg.setTimeStamp(0.509769797199);
    msg.setSource(28828U);
    msg.setSourceEntity(254U);
    msg.setDestination(47533U);
    msg.setDestinationEntity(39U);
    msg.name.assign("CYEGLQDHHCKOAODGFSZIZOFY");
    msg.value = 212U;

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
    msg.setTimeStamp(0.459023458601);
    msg.setSource(56446U);
    msg.setSourceEntity(18U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(68U);
    msg.name.assign("TJZEFMRNTJHUKFICGYNZSRORTPQSCBVUGHOZNDEDWPAJUISUFFFCPTXYOETRMXBOXLUGZTWKWGL");
    msg.value = 101U;

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
    msg.setTimeStamp(0.712056072231);
    msg.setSource(4438U);
    msg.setSourceEntity(6U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(252U);
    msg.name.assign("GPGVRQICEJGUOXZTUDJSZRMCMMQLYSHNRHNTVBEOHCBCMKUOCZFOXBQMEPLLHYOJHSYKZJZXWALQOVDAQNJK");

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
    msg.setTimeStamp(0.19433398284);
    msg.setSource(28284U);
    msg.setSourceEntity(131U);
    msg.setDestination(26211U);
    msg.setDestinationEntity(8U);
    msg.name.assign("WKMLELJXRBEKVMKUICFXZUYNHIXYXFNPNZYJMUKHQJLRQVBRMYZGVSLWYRHYCEHFSASORWEANODWQLDNGARZJJOUTEITOISTZSWFCXCDNJHAFFIJPFQTWQXVLZEOBURZUJFVOTYARPVPEAOUISGKXWMQBWHHVVTPHFFNPGBDWHELRGSGXEACUTDUZIMVSLYRYDBJBLXHKPNKCMBEIVLGXBGPIOPNOTAZGSGAC");

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
    msg.setTimeStamp(0.392839094714);
    msg.setSource(29223U);
    msg.setSourceEntity(112U);
    msg.setDestination(58664U);
    msg.setDestinationEntity(168U);
    msg.name.assign("NTOAHMBZJRHIQBRVHYYNCDS");

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
    msg.setTimeStamp(0.271077821305);
    msg.setSource(33583U);
    msg.setSourceEntity(21U);
    msg.setDestination(58867U);
    msg.setDestinationEntity(124U);
    msg.name.assign("DBEGDYBCUMZOYRWNEZIRHWWVXWMLWTRNZVMTVCQDHPHKIHCCIGKRNBGHDCWROVIBHGJHRMLUPFEIZGAXKZDXZFSRXQOOYUVBLPAFGMBGWLHSALNMBSJTPVZDUIKQSOCSAZLUQDEXAVUBKWEESTKSLRDJMCYVSAYOVAAAQYXQNXXMBKNWIISRTKETHGJYQYFJOZPGOUSFFYLPNDPUJHEDPQIENOJWNPCJFCIVTQFX");
    msg.value = 221U;

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
    msg.setTimeStamp(0.781105835886);
    msg.setSource(62461U);
    msg.setSourceEntity(19U);
    msg.setDestination(44207U);
    msg.setDestinationEntity(89U);
    msg.name.assign("NEMOTNINPJNMAFLBUJHBRXKYOMAWVBLHDMDJFVKCDCEQGQEZCITPPZMSKVSTHXFSGQTWSLTNDBOGJPIYYJFXXMTKQXLVXGUNOKXXBCYBOHRMUWWQZYZOKUCVKLNPWNSDZAISEGHMBTJFPDYNYJRDBUUUQLZLJRFGSLWOWRRHDEEZBVKPSFIUXDIACVUEYYYRFTNTQZWS");
    msg.value = 127U;

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
    msg.setTimeStamp(0.244471894826);
    msg.setSource(63410U);
    msg.setSourceEntity(114U);
    msg.setDestination(42245U);
    msg.setDestinationEntity(236U);
    msg.name.assign("OVLENWZMNVNIZLZSQWDNHMWUNYWLASHTISYSUTYALQRIWPHNHBICJDUKQRQYAEDUBBL");
    msg.value = 105U;

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
    msg.setTimeStamp(0.743152944584);
    msg.setSource(5369U);
    msg.setSourceEntity(22U);
    msg.setDestination(26707U);
    msg.setDestinationEntity(188U);
    msg.id = 46U;
    msg.period = 961158309U;
    msg.duty_cycle = 2061342997U;

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
    msg.setTimeStamp(0.00783020734152);
    msg.setSource(32893U);
    msg.setSourceEntity(248U);
    msg.setDestination(10468U);
    msg.setDestinationEntity(250U);
    msg.id = 57U;
    msg.period = 281443965U;
    msg.duty_cycle = 1543971692U;

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
    msg.setTimeStamp(0.344405027773);
    msg.setSource(56486U);
    msg.setSourceEntity(216U);
    msg.setDestination(5867U);
    msg.setDestinationEntity(87U);
    msg.id = 108U;
    msg.period = 2332799456U;
    msg.duty_cycle = 2818941448U;

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
    msg.setTimeStamp(0.673026372826);
    msg.setSource(47011U);
    msg.setSourceEntity(238U);
    msg.setDestination(60980U);
    msg.setDestinationEntity(232U);
    msg.id = 110U;
    msg.period = 2936321290U;
    msg.duty_cycle = 964709984U;

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
    msg.setTimeStamp(0.745072395545);
    msg.setSource(58463U);
    msg.setSourceEntity(35U);
    msg.setDestination(22938U);
    msg.setDestinationEntity(4U);
    msg.id = 180U;
    msg.period = 1184089643U;
    msg.duty_cycle = 2470773542U;

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
    msg.setTimeStamp(0.349128724952);
    msg.setSource(47420U);
    msg.setSourceEntity(230U);
    msg.setDestination(50607U);
    msg.setDestinationEntity(223U);
    msg.id = 61U;
    msg.period = 2749288903U;
    msg.duty_cycle = 3828364552U;

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
    msg.setTimeStamp(0.494447843447);
    msg.setSource(39241U);
    msg.setSourceEntity(136U);
    msg.setDestination(35252U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.109202535298;
    msg.lon = 0.102175938484;
    msg.height = 0.44805304349;
    msg.x = 0.698725920129;
    msg.y = 0.480668619441;
    msg.z = 0.650134040992;
    msg.phi = 0.0705969576283;
    msg.theta = 0.911264845891;
    msg.psi = 0.73793906075;
    msg.u = 0.170677418154;
    msg.v = 0.738789739578;
    msg.w = 0.914523126947;
    msg.vx = 0.945766226954;
    msg.vy = 0.041803592348;
    msg.vz = 0.412038288541;
    msg.p = 0.647815834806;
    msg.q = 0.928896048266;
    msg.r = 0.0461944406628;
    msg.depth = 0.901372036298;
    msg.alt = 0.499144706025;

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
    msg.setTimeStamp(0.129645886251);
    msg.setSource(13232U);
    msg.setSourceEntity(227U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.442980187012;
    msg.lon = 0.733504085688;
    msg.height = 0.856928883075;
    msg.x = 0.624793912919;
    msg.y = 0.523035467981;
    msg.z = 0.928640015315;
    msg.phi = 0.0945357899894;
    msg.theta = 0.908674631755;
    msg.psi = 0.332313952135;
    msg.u = 0.137257215111;
    msg.v = 0.723053727175;
    msg.w = 0.792224777117;
    msg.vx = 0.541216261373;
    msg.vy = 0.35359052732;
    msg.vz = 0.595506178927;
    msg.p = 0.61777312737;
    msg.q = 0.1891032242;
    msg.r = 0.0804526847848;
    msg.depth = 0.0790758963461;
    msg.alt = 0.547225469141;

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
    msg.setTimeStamp(0.610765913129);
    msg.setSource(29293U);
    msg.setSourceEntity(99U);
    msg.setDestination(17744U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.520226104443;
    msg.lon = 0.563022784714;
    msg.height = 0.929886763341;
    msg.x = 0.239150025304;
    msg.y = 0.703210478431;
    msg.z = 0.195403657301;
    msg.phi = 0.288005027232;
    msg.theta = 0.209394507883;
    msg.psi = 0.821808433843;
    msg.u = 0.514753448081;
    msg.v = 0.0454186627506;
    msg.w = 0.123119695441;
    msg.vx = 0.831497654138;
    msg.vy = 0.918448265944;
    msg.vz = 0.295632872554;
    msg.p = 0.411549027595;
    msg.q = 0.297088557149;
    msg.r = 0.864383283615;
    msg.depth = 0.201992409507;
    msg.alt = 0.0219547538212;

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
    msg.setTimeStamp(0.877571480816);
    msg.setSource(3639U);
    msg.setSourceEntity(3U);
    msg.setDestination(45257U);
    msg.setDestinationEntity(36U);
    msg.x = 0.441554152603;
    msg.y = 0.278623627585;
    msg.z = 0.530831224819;

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
    msg.setTimeStamp(0.549092036077);
    msg.setSource(55829U);
    msg.setSourceEntity(220U);
    msg.setDestination(7887U);
    msg.setDestinationEntity(208U);
    msg.x = 0.194638351296;
    msg.y = 0.264801088621;
    msg.z = 0.273642904017;

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
    msg.setTimeStamp(0.482491055882);
    msg.setSource(53181U);
    msg.setSourceEntity(191U);
    msg.setDestination(52830U);
    msg.setDestinationEntity(230U);
    msg.x = 0.634244425802;
    msg.y = 0.18461406236;
    msg.z = 0.126865311284;

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
    msg.setTimeStamp(0.557658946022);
    msg.setSource(26707U);
    msg.setSourceEntity(237U);
    msg.setDestination(27802U);
    msg.setDestinationEntity(161U);
    msg.value = 0.32545959356;

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
    msg.setTimeStamp(0.411623548908);
    msg.setSource(53149U);
    msg.setSourceEntity(111U);
    msg.setDestination(39880U);
    msg.setDestinationEntity(111U);
    msg.value = 0.848869176278;

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
    msg.setTimeStamp(0.602704131841);
    msg.setSource(13197U);
    msg.setSourceEntity(77U);
    msg.setDestination(54575U);
    msg.setDestinationEntity(148U);
    msg.value = 0.681764455507;

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
    msg.setTimeStamp(0.0102433133343);
    msg.setSource(50255U);
    msg.setSourceEntity(48U);
    msg.setDestination(14475U);
    msg.setDestinationEntity(140U);
    msg.value = 0.672973099663;

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
    msg.setTimeStamp(0.745373663739);
    msg.setSource(18883U);
    msg.setSourceEntity(239U);
    msg.setDestination(5815U);
    msg.setDestinationEntity(31U);
    msg.value = 0.464444415431;

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
    msg.setTimeStamp(0.0380610362581);
    msg.setSource(6108U);
    msg.setSourceEntity(192U);
    msg.setDestination(22241U);
    msg.setDestinationEntity(203U);
    msg.value = 0.904473919337;

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
    msg.setTimeStamp(0.478217527489);
    msg.setSource(12115U);
    msg.setSourceEntity(133U);
    msg.setDestination(31390U);
    msg.setDestinationEntity(55U);
    msg.x = 0.425494263555;
    msg.y = 0.623262886202;
    msg.z = 0.18757329689;
    msg.phi = 0.069612930518;
    msg.theta = 0.560161434064;
    msg.psi = 0.638559899818;
    msg.p = 0.856615464926;
    msg.q = 0.274213750433;
    msg.r = 0.163461441618;
    msg.u = 0.960453159791;
    msg.v = 0.592301073718;
    msg.w = 0.0419585227674;
    msg.bias_psi = 0.264066575762;
    msg.bias_r = 0.0111514925813;

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
    msg.setTimeStamp(0.779514243648);
    msg.setSource(42013U);
    msg.setSourceEntity(253U);
    msg.setDestination(23800U);
    msg.setDestinationEntity(236U);
    msg.x = 0.993010607831;
    msg.y = 0.660956554517;
    msg.z = 0.412236374977;
    msg.phi = 0.688788988441;
    msg.theta = 0.124128589149;
    msg.psi = 0.458365000995;
    msg.p = 0.367815612982;
    msg.q = 0.321267632821;
    msg.r = 0.84411834751;
    msg.u = 0.154859351853;
    msg.v = 0.986480718256;
    msg.w = 0.241940188176;
    msg.bias_psi = 0.900918567541;
    msg.bias_r = 0.118519282532;

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
    msg.setTimeStamp(0.379988766282);
    msg.setSource(35552U);
    msg.setSourceEntity(184U);
    msg.setDestination(6219U);
    msg.setDestinationEntity(152U);
    msg.x = 0.736177494229;
    msg.y = 0.420525188674;
    msg.z = 0.0794010219581;
    msg.phi = 0.617052698189;
    msg.theta = 0.519513169779;
    msg.psi = 0.635873333797;
    msg.p = 0.868367120067;
    msg.q = 0.399893653613;
    msg.r = 0.296938556293;
    msg.u = 0.179959170911;
    msg.v = 0.460232212545;
    msg.w = 0.621542870409;
    msg.bias_psi = 0.980592609451;
    msg.bias_r = 0.12435246996;

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
    msg.setTimeStamp(0.100423505324);
    msg.setSource(31579U);
    msg.setSourceEntity(160U);
    msg.setDestination(42084U);
    msg.setDestinationEntity(31U);
    msg.bias_psi = 0.357256702087;
    msg.bias_r = 0.585894045025;
    msg.cog = 0.17706680082;
    msg.cyaw = 0.178374780302;
    msg.lbl_rej_level = 0.290318571272;
    msg.gps_rej_level = 0.963470240392;
    msg.custom_x = 0.0519378721726;
    msg.custom_y = 0.583801631408;
    msg.custom_z = 0.189624316482;

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
    msg.setTimeStamp(0.481938211022);
    msg.setSource(18184U);
    msg.setSourceEntity(158U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(108U);
    msg.bias_psi = 0.206922539951;
    msg.bias_r = 0.157985629756;
    msg.cog = 0.352621094703;
    msg.cyaw = 0.610654565566;
    msg.lbl_rej_level = 0.814409863755;
    msg.gps_rej_level = 0.262132934633;
    msg.custom_x = 0.807606286947;
    msg.custom_y = 0.842814900293;
    msg.custom_z = 0.902583131243;

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
    msg.setTimeStamp(0.624877690425);
    msg.setSource(6145U);
    msg.setSourceEntity(126U);
    msg.setDestination(38174U);
    msg.setDestinationEntity(64U);
    msg.bias_psi = 0.926753132468;
    msg.bias_r = 0.554472352635;
    msg.cog = 0.613756587674;
    msg.cyaw = 0.253803492865;
    msg.lbl_rej_level = 0.449207702128;
    msg.gps_rej_level = 0.167459650508;
    msg.custom_x = 0.797002032227;
    msg.custom_y = 0.266281762225;
    msg.custom_z = 0.218344122292;

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
    msg.setTimeStamp(0.94015753753);
    msg.setSource(1462U);
    msg.setSourceEntity(141U);
    msg.setDestination(38925U);
    msg.setDestinationEntity(46U);
    msg.utc_time = 0.814477249941;
    msg.reason = 89U;

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
    msg.setTimeStamp(0.224996023532);
    msg.setSource(56133U);
    msg.setSourceEntity(24U);
    msg.setDestination(35262U);
    msg.setDestinationEntity(188U);
    msg.utc_time = 0.675102623449;
    msg.reason = 178U;

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
    msg.setTimeStamp(0.83721686816);
    msg.setSource(58004U);
    msg.setSourceEntity(21U);
    msg.setDestination(19243U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.319071352739;
    msg.reason = 28U;

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
    msg.setTimeStamp(0.0553149384189);
    msg.setSource(62271U);
    msg.setSourceEntity(121U);
    msg.setDestination(4705U);
    msg.setDestinationEntity(86U);
    msg.id = 8U;
    msg.range = 0.134644214407;
    msg.acceptance = 134U;

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
    msg.setTimeStamp(0.0435846146377);
    msg.setSource(57785U);
    msg.setSourceEntity(238U);
    msg.setDestination(59999U);
    msg.setDestinationEntity(14U);
    msg.id = 156U;
    msg.range = 0.155070685378;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.874681436071);
    msg.setSource(38233U);
    msg.setSourceEntity(64U);
    msg.setDestination(45142U);
    msg.setDestinationEntity(205U);
    msg.id = 213U;
    msg.range = 0.920258713957;
    msg.acceptance = 225U;

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
    msg.setTimeStamp(0.129948944483);
    msg.setSource(50928U);
    msg.setSourceEntity(47U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(115U);
    msg.type = 107U;
    msg.reason = 217U;
    msg.value = 0.4932485058;
    msg.timestep = 0.208699359718;

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
    msg.setTimeStamp(0.730571709007);
    msg.setSource(31362U);
    msg.setSourceEntity(243U);
    msg.setDestination(56289U);
    msg.setDestinationEntity(32U);
    msg.type = 157U;
    msg.reason = 88U;
    msg.value = 0.52038421134;
    msg.timestep = 0.481106675754;

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
    msg.setTimeStamp(0.546571711783);
    msg.setSource(1309U);
    msg.setSourceEntity(75U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(163U);
    msg.type = 211U;
    msg.reason = 174U;
    msg.value = 0.213986329094;
    msg.timestep = 0.471017246025;

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
    msg.setTimeStamp(0.497833032497);
    msg.setSource(15657U);
    msg.setSourceEntity(103U);
    msg.setDestination(61738U);
    msg.setDestinationEntity(179U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DWDDRHNNFTZCDYKNZERCJTILSFTGOCWTZQLGGUSUQKAODJOKKNPLAYZYQGRXLNIKAERYIZVHAZVFDPDOPGJHSUKYKYONHUHGMZJPKWWWNPFGS");
    tmp_msg_0.lat = 0.541228873903;
    tmp_msg_0.lon = 0.143839893224;
    tmp_msg_0.depth = 0.124298554543;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 46U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.27957126833;
    msg.y = 0.799529879463;
    msg.var_x = 0.421840847214;
    msg.var_y = 0.192922174899;
    msg.distance = 0.292834756246;

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
    msg.setTimeStamp(0.62691900189);
    msg.setSource(41741U);
    msg.setSourceEntity(133U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(58U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PAIFTPMSTESZKOVLPVRIDTGUGVYHJNJDQFEMLKANXHGHLAITQWVEYNUJWGYSUHFXPGHBTUMSJYAXCTKPBYJQBCPUQYJOIOBEPMWXCSFBMEUVGGEZDAPKQZEHNIFBWQGOXJCNBBXXZBSLYGRJLIDDFLCZYUYVHRDKRXCXLLEMIFMHSJHUNSZVQATKQWPCOWMJTKRCICYCQZHSROFALSOIZAEEMINTTWNQPWRZGAFNKLVXZNWDOFORDBD");
    tmp_msg_0.lat = 0.333127140275;
    tmp_msg_0.lon = 0.0927696585808;
    tmp_msg_0.depth = 0.688025197756;
    tmp_msg_0.query_channel = 76U;
    tmp_msg_0.reply_channel = 111U;
    tmp_msg_0.transponder_delay = 9U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.889547197344;
    msg.y = 0.144761498273;
    msg.var_x = 0.82818893327;
    msg.var_y = 0.375227331523;
    msg.distance = 0.170821195212;

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
    msg.setTimeStamp(0.789652678307);
    msg.setSource(7347U);
    msg.setSourceEntity(140U);
    msg.setDestination(62258U);
    msg.setDestinationEntity(4U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CMRXRCRZYJBJMPIPBNELDWIURTDITYNZWCXSTFXUIECNHENDRTSJTPVMJTUJLZRMLYVYRVQF");
    tmp_msg_0.lat = 0.00708376773455;
    tmp_msg_0.lon = 0.25441066784;
    tmp_msg_0.depth = 0.235335752812;
    tmp_msg_0.query_channel = 92U;
    tmp_msg_0.reply_channel = 84U;
    tmp_msg_0.transponder_delay = 63U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.469030220207;
    msg.y = 0.603005087953;
    msg.var_x = 0.648616357638;
    msg.var_y = 0.730910207954;
    msg.distance = 0.423714288327;

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
    msg.setTimeStamp(0.988483166066);
    msg.setSource(58225U);
    msg.setSourceEntity(243U);
    msg.setDestination(7709U);
    msg.setDestinationEntity(127U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.344021389208);
    msg.setSource(30858U);
    msg.setSourceEntity(178U);
    msg.setDestination(2831U);
    msg.setDestinationEntity(216U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.927041992223);
    msg.setSource(29377U);
    msg.setSourceEntity(144U);
    msg.setDestination(24166U);
    msg.setDestinationEntity(213U);
    msg.state = 155U;

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
    msg.setTimeStamp(0.969725370994);
    msg.setSource(1375U);
    msg.setSourceEntity(156U);
    msg.setDestination(36855U);
    msg.setDestinationEntity(197U);
    msg.x = 0.795075198675;
    msg.y = 0.73521763726;
    msg.z = 0.664475093698;

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
    msg.setTimeStamp(0.570564717113);
    msg.setSource(6460U);
    msg.setSourceEntity(30U);
    msg.setDestination(19881U);
    msg.setDestinationEntity(246U);
    msg.x = 0.622802305609;
    msg.y = 0.914032555397;
    msg.z = 0.906545561618;

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
    msg.setTimeStamp(0.63452363354);
    msg.setSource(23008U);
    msg.setSourceEntity(41U);
    msg.setDestination(29435U);
    msg.setDestinationEntity(164U);
    msg.x = 0.801537968642;
    msg.y = 0.915810351693;
    msg.z = 0.111921045758;

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
    msg.setTimeStamp(0.575532403113);
    msg.setSource(42817U);
    msg.setSourceEntity(25U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(253U);
    msg.va = 0.921348248445;
    msg.aoa = 0.190540055982;
    msg.ssa = 0.228751691206;

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
    msg.setTimeStamp(0.194028413866);
    msg.setSource(28614U);
    msg.setSourceEntity(106U);
    msg.setDestination(50939U);
    msg.setDestinationEntity(75U);
    msg.va = 0.756556327967;
    msg.aoa = 0.993544725732;
    msg.ssa = 0.413966534857;

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
    msg.setTimeStamp(0.614327681856);
    msg.setSource(43840U);
    msg.setSourceEntity(198U);
    msg.setDestination(14183U);
    msg.setDestinationEntity(249U);
    msg.va = 0.702348988028;
    msg.aoa = 0.0563934562037;
    msg.ssa = 0.806426970792;

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
    msg.setTimeStamp(0.527211801393);
    msg.setSource(3041U);
    msg.setSourceEntity(141U);
    msg.setDestination(31912U);
    msg.setDestinationEntity(103U);
    msg.value = 0.859219890667;

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
    msg.setTimeStamp(0.385975702949);
    msg.setSource(38692U);
    msg.setSourceEntity(113U);
    msg.setDestination(32055U);
    msg.setDestinationEntity(64U);
    msg.value = 0.255581724873;

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
    msg.setTimeStamp(0.561745264828);
    msg.setSource(37627U);
    msg.setSourceEntity(29U);
    msg.setDestination(26080U);
    msg.setDestinationEntity(170U);
    msg.value = 0.596673902038;

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
    msg.setTimeStamp(0.437080551391);
    msg.setSource(59641U);
    msg.setSourceEntity(103U);
    msg.setDestination(52938U);
    msg.setDestinationEntity(112U);
    msg.value = 0.270188285726;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.911336817457);
    msg.setSource(20603U);
    msg.setSourceEntity(18U);
    msg.setDestination(65414U);
    msg.setDestinationEntity(77U);
    msg.value = 0.258577682314;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.956765215398);
    msg.setSource(27885U);
    msg.setSourceEntity(58U);
    msg.setDestination(21001U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0807184389307;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.698307032538);
    msg.setSource(285U);
    msg.setSourceEntity(169U);
    msg.setDestination(19944U);
    msg.setDestinationEntity(244U);
    msg.value = 0.438922514217;
    msg.speed_units = 227U;

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
    msg.setTimeStamp(0.246052722318);
    msg.setSource(304U);
    msg.setSourceEntity(20U);
    msg.setDestination(32782U);
    msg.setDestinationEntity(131U);
    msg.value = 0.322268152183;
    msg.speed_units = 230U;

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
    msg.setTimeStamp(0.494986557774);
    msg.setSource(39137U);
    msg.setSourceEntity(161U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(50U);
    msg.value = 0.169764200494;
    msg.speed_units = 190U;

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
    msg.setTimeStamp(0.223056453325);
    msg.setSource(54208U);
    msg.setSourceEntity(212U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(118U);
    msg.value = 0.114492269397;

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
    msg.setTimeStamp(0.83972979864);
    msg.setSource(53669U);
    msg.setSourceEntity(135U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(46U);
    msg.value = 0.984907769625;

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
    msg.setTimeStamp(0.130209461875);
    msg.setSource(59172U);
    msg.setSourceEntity(81U);
    msg.setDestination(41755U);
    msg.setDestinationEntity(33U);
    msg.value = 0.417572799332;

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
    msg.setTimeStamp(0.331777365148);
    msg.setSource(26345U);
    msg.setSourceEntity(192U);
    msg.setDestination(54405U);
    msg.setDestinationEntity(29U);
    msg.value = 0.761527968178;

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
    msg.setTimeStamp(0.745966803664);
    msg.setSource(9378U);
    msg.setSourceEntity(228U);
    msg.setDestination(43130U);
    msg.setDestinationEntity(142U);
    msg.value = 0.348112563068;

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
    msg.setTimeStamp(0.845137457113);
    msg.setSource(32536U);
    msg.setSourceEntity(144U);
    msg.setDestination(40459U);
    msg.setDestinationEntity(65U);
    msg.value = 0.924356722702;

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
    msg.setTimeStamp(0.837892770441);
    msg.setSource(51166U);
    msg.setSourceEntity(247U);
    msg.setDestination(13414U);
    msg.setDestinationEntity(175U);
    msg.value = 0.675221659435;

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
    msg.setTimeStamp(0.856033638331);
    msg.setSource(53693U);
    msg.setSourceEntity(71U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(32U);
    msg.value = 0.484484489882;

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
    msg.setTimeStamp(0.735966357722);
    msg.setSource(13562U);
    msg.setSourceEntity(182U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(185U);
    msg.value = 0.216147878275;

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
    msg.setTimeStamp(0.964843279045);
    msg.setSource(25436U);
    msg.setSourceEntity(97U);
    msg.setDestination(53729U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 593695428U;
    msg.start_lat = 0.680790821306;
    msg.start_lon = 0.644472854783;
    msg.start_z = 0.419334162805;
    msg.start_z_units = 172U;
    msg.end_lat = 0.818065301067;
    msg.end_lon = 0.374946718118;
    msg.end_z = 0.983612707499;
    msg.end_z_units = 40U;
    msg.speed = 0.135746410402;
    msg.speed_units = 164U;
    msg.lradius = 0.190382476568;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.010060019175);
    msg.setSource(345U);
    msg.setSourceEntity(7U);
    msg.setDestination(14560U);
    msg.setDestinationEntity(160U);
    msg.path_ref = 1450050408U;
    msg.start_lat = 0.835966537739;
    msg.start_lon = 0.68393377216;
    msg.start_z = 0.618320203989;
    msg.start_z_units = 141U;
    msg.end_lat = 0.0621228203972;
    msg.end_lon = 0.392903110658;
    msg.end_z = 0.383256832219;
    msg.end_z_units = 14U;
    msg.speed = 0.714608518163;
    msg.speed_units = 171U;
    msg.lradius = 0.22734475631;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.416998507005);
    msg.setSource(5174U);
    msg.setSourceEntity(111U);
    msg.setDestination(24329U);
    msg.setDestinationEntity(11U);
    msg.path_ref = 3731618429U;
    msg.start_lat = 0.295792366155;
    msg.start_lon = 0.190579089179;
    msg.start_z = 0.906212626225;
    msg.start_z_units = 30U;
    msg.end_lat = 0.24186079331;
    msg.end_lon = 0.390540495368;
    msg.end_z = 0.618244315557;
    msg.end_z_units = 144U;
    msg.speed = 0.242069047696;
    msg.speed_units = 95U;
    msg.lradius = 0.924174696008;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.0659072618048);
    msg.setSource(61882U);
    msg.setSourceEntity(145U);
    msg.setDestination(28541U);
    msg.setDestinationEntity(159U);
    msg.x = 0.159895092055;
    msg.y = 0.258304725077;
    msg.z = 0.355502249993;
    msg.k = 0.62553288404;
    msg.m = 0.134620453041;
    msg.n = 0.669125471244;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.463691496175);
    msg.setSource(49233U);
    msg.setSourceEntity(82U);
    msg.setDestination(16110U);
    msg.setDestinationEntity(39U);
    msg.x = 0.663464474627;
    msg.y = 0.814585101277;
    msg.z = 0.102696666875;
    msg.k = 0.582304712297;
    msg.m = 0.585088850885;
    msg.n = 0.325594627563;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.252093889974);
    msg.setSource(44784U);
    msg.setSourceEntity(49U);
    msg.setDestination(39950U);
    msg.setDestinationEntity(220U);
    msg.x = 0.370118501434;
    msg.y = 0.624098377509;
    msg.z = 0.9223163976;
    msg.k = 0.131715860941;
    msg.m = 0.326193397377;
    msg.n = 0.197951005189;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.419885455579);
    msg.setSource(7168U);
    msg.setSourceEntity(186U);
    msg.setDestination(46036U);
    msg.setDestinationEntity(170U);
    msg.value = 0.814417438023;

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
    msg.setTimeStamp(0.126937483117);
    msg.setSource(14628U);
    msg.setSourceEntity(65U);
    msg.setDestination(19473U);
    msg.setDestinationEntity(230U);
    msg.value = 0.278147225612;

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
    msg.setTimeStamp(0.00645960438063);
    msg.setSource(11860U);
    msg.setSourceEntity(158U);
    msg.setDestination(17572U);
    msg.setDestinationEntity(52U);
    msg.value = 0.417263950723;

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
    msg.setTimeStamp(0.647085198003);
    msg.setSource(1706U);
    msg.setSourceEntity(108U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(249U);
    msg.u = 0.200771144621;
    msg.v = 0.354702565878;
    msg.w = 0.211792829013;
    msg.p = 0.168861065187;
    msg.q = 0.607757576685;
    msg.r = 0.737646145064;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.541131061996);
    msg.setSource(26133U);
    msg.setSourceEntity(240U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(140U);
    msg.u = 0.684596933908;
    msg.v = 0.480516658402;
    msg.w = 0.219636873846;
    msg.p = 0.992901098511;
    msg.q = 0.254984083859;
    msg.r = 0.580561557367;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.925840004314);
    msg.setSource(15861U);
    msg.setSourceEntity(49U);
    msg.setDestination(41035U);
    msg.setDestinationEntity(44U);
    msg.u = 0.388959726681;
    msg.v = 0.917642452038;
    msg.w = 0.811052248718;
    msg.p = 0.253885718033;
    msg.q = 0.754120303822;
    msg.r = 0.601352151666;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.681925785861);
    msg.setSource(15051U);
    msg.setSourceEntity(55U);
    msg.setDestination(63386U);
    msg.setDestinationEntity(78U);
    msg.path_ref = 905889304U;
    msg.start_lat = 0.308628175815;
    msg.start_lon = 0.733565137432;
    msg.start_z = 0.901221105115;
    msg.start_z_units = 5U;
    msg.end_lat = 0.911123449763;
    msg.end_lon = 0.0436254901252;
    msg.end_z = 0.550994601177;
    msg.end_z_units = 139U;
    msg.lradius = 0.255199634189;
    msg.flags = 0U;
    msg.x = 0.208152244633;
    msg.y = 0.71306049044;
    msg.z = 0.477244758921;
    msg.vx = 0.490497848673;
    msg.vy = 0.440560358699;
    msg.vz = 0.351799968588;
    msg.course_error = 0.517582023046;
    msg.eta = 56004U;

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
    msg.setTimeStamp(0.540891681359);
    msg.setSource(65185U);
    msg.setSourceEntity(152U);
    msg.setDestination(13009U);
    msg.setDestinationEntity(215U);
    msg.path_ref = 258838291U;
    msg.start_lat = 0.585374118362;
    msg.start_lon = 0.510173046524;
    msg.start_z = 0.845953414502;
    msg.start_z_units = 185U;
    msg.end_lat = 0.354980936529;
    msg.end_lon = 0.309495203267;
    msg.end_z = 0.765220437142;
    msg.end_z_units = 224U;
    msg.lradius = 0.25281022131;
    msg.flags = 82U;
    msg.x = 0.0458934636759;
    msg.y = 0.326185287765;
    msg.z = 0.690715421633;
    msg.vx = 0.252533440017;
    msg.vy = 0.581227926099;
    msg.vz = 0.701719768986;
    msg.course_error = 0.0248966133819;
    msg.eta = 35640U;

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
    msg.setTimeStamp(0.0289230481672);
    msg.setSource(52860U);
    msg.setSourceEntity(157U);
    msg.setDestination(49562U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 2677424964U;
    msg.start_lat = 0.711439447583;
    msg.start_lon = 0.508981523462;
    msg.start_z = 0.153682963173;
    msg.start_z_units = 46U;
    msg.end_lat = 0.0510238997897;
    msg.end_lon = 0.00367935010783;
    msg.end_z = 0.691271682453;
    msg.end_z_units = 164U;
    msg.lradius = 0.440892328788;
    msg.flags = 81U;
    msg.x = 0.666606657319;
    msg.y = 0.470349652975;
    msg.z = 0.703047628534;
    msg.vx = 0.21932399929;
    msg.vy = 0.176308012274;
    msg.vz = 0.86556809199;
    msg.course_error = 0.109977886894;
    msg.eta = 11795U;

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
    msg.setTimeStamp(0.417483125702);
    msg.setSource(25493U);
    msg.setSourceEntity(249U);
    msg.setDestination(45822U);
    msg.setDestinationEntity(166U);
    msg.k = 0.42748853368;
    msg.m = 0.450019179754;
    msg.n = 0.241181785074;

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
    msg.setTimeStamp(0.527107299775);
    msg.setSource(41622U);
    msg.setSourceEntity(167U);
    msg.setDestination(13656U);
    msg.setDestinationEntity(105U);
    msg.k = 0.505495969164;
    msg.m = 0.759442601923;
    msg.n = 0.0692089422439;

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
    msg.setTimeStamp(0.784304922826);
    msg.setSource(20422U);
    msg.setSourceEntity(27U);
    msg.setDestination(13205U);
    msg.setDestinationEntity(248U);
    msg.k = 0.745582061835;
    msg.m = 0.874521108697;
    msg.n = 0.49035096198;

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
    msg.setTimeStamp(0.710289097128);
    msg.setSource(57927U);
    msg.setSourceEntity(46U);
    msg.setDestination(15889U);
    msg.setDestinationEntity(160U);
    msg.p = 0.701851354593;
    msg.i = 0.537905843379;
    msg.d = 0.193519613518;
    msg.a = 0.0177727462213;

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
    msg.setTimeStamp(0.546541814836);
    msg.setSource(2318U);
    msg.setSourceEntity(82U);
    msg.setDestination(7869U);
    msg.setDestinationEntity(215U);
    msg.p = 0.192643110341;
    msg.i = 0.717424323046;
    msg.d = 0.419707829802;
    msg.a = 0.0795146471087;

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
    msg.setTimeStamp(0.375519823999);
    msg.setSource(41309U);
    msg.setSourceEntity(51U);
    msg.setDestination(44854U);
    msg.setDestinationEntity(30U);
    msg.p = 0.170324484213;
    msg.i = 0.552976594999;
    msg.d = 0.198828679174;
    msg.a = 0.872142528918;

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
    msg.setTimeStamp(0.369278378275);
    msg.setSource(2807U);
    msg.setSourceEntity(40U);
    msg.setDestination(22524U);
    msg.setDestinationEntity(44U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.555733775463);
    msg.setSource(1677U);
    msg.setSourceEntity(12U);
    msg.setDestination(52880U);
    msg.setDestinationEntity(167U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.00952505127126);
    msg.setSource(27465U);
    msg.setSourceEntity(53U);
    msg.setDestination(63793U);
    msg.setDestinationEntity(70U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.694798785382);
    msg.setSource(25180U);
    msg.setSourceEntity(22U);
    msg.setDestination(62254U);
    msg.setDestinationEntity(58U);
    msg.x = 0.86578952287;
    msg.y = 0.406171902561;
    msg.z = 0.284211824323;
    msg.vx = 0.977304411264;
    msg.vy = 0.344670549901;
    msg.vz = 0.642055841321;
    msg.ax = 0.0503457101576;
    msg.ay = 0.86646078344;
    msg.az = 0.0294983098013;
    msg.flags = 44716U;

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
    msg.setTimeStamp(0.882395954557);
    msg.setSource(52607U);
    msg.setSourceEntity(31U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(2U);
    msg.x = 0.528974297338;
    msg.y = 0.897650551535;
    msg.z = 0.0824927423373;
    msg.vx = 0.675300151259;
    msg.vy = 0.777623976898;
    msg.vz = 0.0215963926212;
    msg.ax = 0.143876524435;
    msg.ay = 0.876748311687;
    msg.az = 0.191229827304;
    msg.flags = 13907U;

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
    msg.setTimeStamp(0.713583327231);
    msg.setSource(38854U);
    msg.setSourceEntity(220U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(216U);
    msg.x = 0.193268151397;
    msg.y = 0.569978615924;
    msg.z = 0.903529647645;
    msg.vx = 0.897093014189;
    msg.vy = 0.204973247953;
    msg.vz = 0.855500300912;
    msg.ax = 0.529915790228;
    msg.ay = 0.492777717182;
    msg.az = 0.853734017859;
    msg.flags = 51335U;

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
    msg.setTimeStamp(0.991313110387);
    msg.setSource(38256U);
    msg.setSourceEntity(96U);
    msg.setDestination(24734U);
    msg.setDestinationEntity(243U);
    msg.value = 0.22826132627;

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
    msg.setTimeStamp(0.546314659314);
    msg.setSource(56191U);
    msg.setSourceEntity(3U);
    msg.setDestination(10029U);
    msg.setDestinationEntity(223U);
    msg.value = 0.160091954424;

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
    msg.setTimeStamp(0.711271117844);
    msg.setSource(55421U);
    msg.setSourceEntity(87U);
    msg.setDestination(12352U);
    msg.setDestinationEntity(129U);
    msg.value = 0.223385595096;

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
    msg.setTimeStamp(0.944546766793);
    msg.setSource(15069U);
    msg.setSourceEntity(187U);
    msg.setDestination(14599U);
    msg.setDestinationEntity(170U);
    msg.timeout = 63063U;
    msg.lat = 0.243161253061;
    msg.lon = 0.850326807076;
    msg.z = 0.0429917018541;
    msg.z_units = 137U;
    msg.speed = 0.0139611462273;
    msg.speed_units = 141U;
    msg.roll = 0.594574598398;
    msg.pitch = 0.232121581017;
    msg.yaw = 0.68596587607;
    msg.custom.assign("GNTYRLLVQZUTLNKPZEVPXDTEUWVYPJLCYHHWULSLBQDQHWLHOOWESMXWWBXGSGVVSHZFIYMOWFRHPFUDFZZLAKKJBBUZZRKWPXTVHXJOGNNYIHSJGWSATLOEDTKGKPWFPECFNMSQNDPVAYOITFUMEKSDSBHNALMBPCTGQIYMYMDYDABAITISRRUECCMCAIXDUGEAQCUPNOYKJOJOXBHRNCJTZVUFQBEKQJIQVZMFCAORQJAXINXMRVEBDGR");

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
    msg.setTimeStamp(0.811497856005);
    msg.setSource(15632U);
    msg.setSourceEntity(170U);
    msg.setDestination(53253U);
    msg.setDestinationEntity(159U);
    msg.timeout = 3125U;
    msg.lat = 0.917914031866;
    msg.lon = 0.263804967239;
    msg.z = 0.902910991514;
    msg.z_units = 52U;
    msg.speed = 0.0402281215152;
    msg.speed_units = 37U;
    msg.roll = 0.859932855198;
    msg.pitch = 0.903265632372;
    msg.yaw = 0.16469601797;
    msg.custom.assign("YTNVKOJKTIBSDEXVOIHLKWMYRWUPCHMAEHER");

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
    msg.setTimeStamp(0.576326233823);
    msg.setSource(36962U);
    msg.setSourceEntity(122U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(213U);
    msg.timeout = 23491U;
    msg.lat = 0.424617815606;
    msg.lon = 0.450661532361;
    msg.z = 0.360099990099;
    msg.z_units = 111U;
    msg.speed = 0.453388768714;
    msg.speed_units = 169U;
    msg.roll = 0.985865005414;
    msg.pitch = 0.0357683416119;
    msg.yaw = 0.161342077284;
    msg.custom.assign("RHFWVZKZFRRYICVCVBODGQOQDBDBOSCBLBSQMSVJN");

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
    msg.setTimeStamp(0.325127435249);
    msg.setSource(50284U);
    msg.setSourceEntity(131U);
    msg.setDestination(15059U);
    msg.setDestinationEntity(158U);
    msg.timeout = 9628U;
    msg.lat = 0.577552025476;
    msg.lon = 0.738599180574;
    msg.z = 0.885528766851;
    msg.z_units = 14U;
    msg.speed = 0.873333034589;
    msg.speed_units = 25U;
    msg.duration = 2760U;
    msg.radius = 0.0167426597794;
    msg.flags = 163U;
    msg.custom.assign("VKCKMDXPRHQIKWDMGPNYQZJVCLILUNDWJXRFYUTQIWQPGCWGFBOSVRYTLSCKLPNXFEQFMZSMVZPOHJAOICMBLQU");

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
    msg.setTimeStamp(0.982041775844);
    msg.setSource(7367U);
    msg.setSourceEntity(13U);
    msg.setDestination(41239U);
    msg.setDestinationEntity(49U);
    msg.timeout = 58760U;
    msg.lat = 0.634148182481;
    msg.lon = 0.906214615406;
    msg.z = 0.668192373327;
    msg.z_units = 144U;
    msg.speed = 0.517878396139;
    msg.speed_units = 212U;
    msg.duration = 2006U;
    msg.radius = 0.248693426302;
    msg.flags = 89U;
    msg.custom.assign("QDUYBVXDUZVPTM");

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
    msg.setTimeStamp(0.532030071411);
    msg.setSource(35146U);
    msg.setSourceEntity(97U);
    msg.setDestination(36656U);
    msg.setDestinationEntity(86U);
    msg.timeout = 38159U;
    msg.lat = 0.117661208808;
    msg.lon = 0.749147463104;
    msg.z = 0.380868203604;
    msg.z_units = 129U;
    msg.speed = 0.236184931065;
    msg.speed_units = 103U;
    msg.duration = 31166U;
    msg.radius = 0.182119065688;
    msg.flags = 37U;
    msg.custom.assign("YNFREVFPFBAWWBDLDRMZGAJJQIEACFMOHSZLFABKNCUWBLUQBETXJPCZHHJXWULVTELKUYSJSTMSDKIHPEORFEUAIYHQLBCWKYVZLUQZURZXLVKKPDEDICNZ");

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
    msg.setTimeStamp(0.805507711019);
    msg.setSource(46876U);
    msg.setSourceEntity(15U);
    msg.setDestination(23704U);
    msg.setDestinationEntity(28U);
    msg.custom.assign("WHRFAXYTVTWFTNGRBUKWXLHJGVLYCZSADXKGBXPOAPEQPFLPJVISLZUUXREJTKUIPNJDMTSAEBPNACVWEXUUFGQVNVQI");

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
    msg.setTimeStamp(0.678626857101);
    msg.setSource(18673U);
    msg.setSourceEntity(68U);
    msg.setDestination(31005U);
    msg.setDestinationEntity(135U);
    msg.custom.assign("EZPCYZWBGTXWBMWUAHLLD");

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
    msg.setTimeStamp(0.426499689796);
    msg.setSource(24087U);
    msg.setSourceEntity(47U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(199U);
    msg.custom.assign("JPIUJKFRAEIEXZTGHRNVQVMKZXIOFBWMEMPXNMQKOAHUGVLVWYQNJABTSHBVPPPWNMHLZPTSCSJCKEYCJHJQOBKOXGQQXEMOVSYBTBSLZMAABHZRDPMWVUFDKNBVOWXYADILPDWYGOCWPXGDQZFNRYRYEDXSIUEOTTOALTFIFLURQFKNIZUIKHRWT");

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
    msg.setTimeStamp(0.265117708241);
    msg.setSource(58311U);
    msg.setSourceEntity(16U);
    msg.setDestination(5231U);
    msg.setDestinationEntity(50U);
    msg.timeout = 53257U;
    msg.lat = 0.539306672522;
    msg.lon = 0.874794542779;
    msg.z = 0.261311180157;
    msg.z_units = 126U;
    msg.duration = 32549U;
    msg.speed = 0.090108134666;
    msg.speed_units = 75U;
    msg.type = 108U;
    msg.radius = 0.907541821383;
    msg.length = 0.411627467037;
    msg.bearing = 0.477115199786;
    msg.direction = 51U;
    msg.custom.assign("RHWDGCAGZOGEGDRSWWKTELZTAHHQTVSSZGUBADYXYPEUKCGXVCFNJZYQBPDCXAROTJPHIHYCCIAONRECRQLJCHMLZLRZILFUB");

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
    msg.setTimeStamp(0.416823518688);
    msg.setSource(59247U);
    msg.setSourceEntity(64U);
    msg.setDestination(53416U);
    msg.setDestinationEntity(8U);
    msg.timeout = 57098U;
    msg.lat = 0.436791745942;
    msg.lon = 0.0844263260942;
    msg.z = 0.00568511168832;
    msg.z_units = 140U;
    msg.duration = 41162U;
    msg.speed = 0.722317841494;
    msg.speed_units = 89U;
    msg.type = 233U;
    msg.radius = 0.958401970951;
    msg.length = 0.233987962377;
    msg.bearing = 0.865155496884;
    msg.direction = 165U;
    msg.custom.assign("GOYRKDLIBWTJLAMRDDXPO");

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
    msg.setTimeStamp(0.245912924877);
    msg.setSource(23317U);
    msg.setSourceEntity(92U);
    msg.setDestination(39021U);
    msg.setDestinationEntity(5U);
    msg.timeout = 14028U;
    msg.lat = 0.686464187686;
    msg.lon = 0.04736530133;
    msg.z = 0.0334858511131;
    msg.z_units = 125U;
    msg.duration = 10006U;
    msg.speed = 0.838502810779;
    msg.speed_units = 94U;
    msg.type = 248U;
    msg.radius = 0.941975088431;
    msg.length = 0.0256891948105;
    msg.bearing = 0.667160363299;
    msg.direction = 104U;
    msg.custom.assign("DPAQTMINCLKULMURHHEKGCWMLDJTOXYHSVFJKVVBZMRBSQGOMZQXKCCSLMWPURBAEUBYQRABAWOJSXGZLOZIYNBFYFCVJOHSCKUSODHXPPECTSRPWFZMLXGZITEPXKAIRNYVEGVUKFKFUCQCLUYIQMUGIYYGTTDRDNJJXNUBMGWK");

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
    msg.setTimeStamp(0.475417366575);
    msg.setSource(50344U);
    msg.setSourceEntity(52U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(107U);
    msg.duration = 51385U;
    msg.custom.assign("XQHRKSAETEFTAJBYZXQIYSIMWABJZWSFTZDFZDJLKXRXRFFERJCZTVSEBBAADPQVNFMHUIKIWVBIHGPLIXKMYJUYNAPEVSGSVUOSRJHHLYCMOOZ");

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
    msg.setTimeStamp(0.47572952774);
    msg.setSource(14638U);
    msg.setSourceEntity(46U);
    msg.setDestination(37320U);
    msg.setDestinationEntity(50U);
    msg.duration = 27109U;
    msg.custom.assign("UGTLYXYMQJMPPTUDWBWZUPSWVXUYOOQQVDTVRWARFRPKHMCZLDYNVVGEQFPEUZHHJZYTUNWGSKXJAFDRFOFLFFOBBOCSSAHHENUSCXIFKAVCSKQNDRLMHZGBNRIKBFDGOXPABUMLJNLGZNNADAQWYBGSWOKIXPULCJWNJXAQGZRJEHTPIPLDOVHCVDIRWEUSRMTQW");

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
    msg.setTimeStamp(0.850232813904);
    msg.setSource(34325U);
    msg.setSourceEntity(82U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(65U);
    msg.duration = 42119U;
    msg.custom.assign("AYWANMWLYNTDEHACWQIXNJQHDWMDVBVLPZORHYRHTYWJSJMXSJPPLPEJV");

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
    msg.setTimeStamp(0.461914545909);
    msg.setSource(12321U);
    msg.setSourceEntity(1U);
    msg.setDestination(6892U);
    msg.setDestinationEntity(21U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.995723694064;
    tmp_msg_0.speed_units = 63U;
    msg.control.set(tmp_msg_0);
    msg.duration = 26120U;
    msg.custom.assign("WBEJGXPWZZYRDMSRGOQEMCIFZJDCOFDLGIILYKDYILCXMNEOJBWPJLKQQYOJFMCUYUKPABSWZICAXHJRKLLXCPOPVBQWXUZPCTBGOHOOTBEHQHEFQARRGEVDMSYAOCMWVXUDPXYJAZRFSIBJVNQFVRVNQRZUSNTXTHDUSQKAIVDFUZIYEAUGFHVSAHDTPKNKVXHSDMNVHTQGBWCBWWTCPENMGTHESUXWLAASTEKYMOIMRLTGFLGFZNRYN");

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
    msg.setTimeStamp(0.975637582432);
    msg.setSource(25881U);
    msg.setSourceEntity(84U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(207U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.331370522881;
    msg.control.set(tmp_msg_0);
    msg.duration = 54299U;
    msg.custom.assign("ITGDHAXODXUSJCLFPRPVRSVJZSVXEYCQMAAWPFFZZLDRLHWTUHFYWCXOPWOOIGKTWCLKJNGOVSYMQKYBATETZEEAYHUKKYBEHZYXJYKHQKWTXTGZEJNQNLLCZQTRTGPZWGISPSMMW");

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
    msg.setTimeStamp(0.0497954636117);
    msg.setSource(17032U);
    msg.setSourceEntity(232U);
    msg.setDestination(49687U);
    msg.setDestinationEntity(235U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.297475452106;
    msg.control.set(tmp_msg_0);
    msg.duration = 760U;
    msg.custom.assign("KHWICDXYKZYFZDPREUDHCAQNQSLNAWJVLPRKBDXASQPOHN");

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
    msg.setTimeStamp(0.997924041779);
    msg.setSource(21024U);
    msg.setSourceEntity(73U);
    msg.setDestination(2564U);
    msg.setDestinationEntity(62U);
    msg.timeout = 45887U;
    msg.lat = 0.296092631525;
    msg.lon = 0.968066653614;
    msg.z = 0.221059899228;
    msg.z_units = 144U;
    msg.speed = 0.280369973534;
    msg.speed_units = 79U;
    msg.bearing = 0.851718974312;
    msg.cross_angle = 0.125486920804;
    msg.width = 0.378562629987;
    msg.length = 0.43101640527;
    msg.hstep = 0.408194047235;
    msg.coff = 87U;
    msg.alternation = 251U;
    msg.flags = 188U;
    msg.custom.assign("AKNKAQJKWNGVJYAAFHHVCBOHUNWVWOHUGTFQNRMEEDBUCLUJAINOQPGACOSDWHIZEMSSLE");

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
    msg.setTimeStamp(0.108815480204);
    msg.setSource(59132U);
    msg.setSourceEntity(115U);
    msg.setDestination(64365U);
    msg.setDestinationEntity(151U);
    msg.timeout = 29474U;
    msg.lat = 0.853548164252;
    msg.lon = 0.8647224305;
    msg.z = 0.867586981022;
    msg.z_units = 245U;
    msg.speed = 0.363571543503;
    msg.speed_units = 104U;
    msg.bearing = 0.817197350035;
    msg.cross_angle = 0.127845401341;
    msg.width = 0.623804722495;
    msg.length = 0.110911470145;
    msg.hstep = 0.27625752425;
    msg.coff = 187U;
    msg.alternation = 147U;
    msg.flags = 242U;
    msg.custom.assign("DVGYIYMTJAHSVCUIVSAYELYFNLBYSXEQVARVHGDWIELQODMZYUFJUCQDKFDLBRNWSYKBWMZXGXMGAWKGDCSXXZPMQSGLPBKJXJSBCQFDGBIECRMWOJRTZGUDDLPZJWTRIINVCZJZQHCERJMHCHTSITO");

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
    msg.setTimeStamp(0.572836132967);
    msg.setSource(40515U);
    msg.setSourceEntity(204U);
    msg.setDestination(34919U);
    msg.setDestinationEntity(204U);
    msg.timeout = 29728U;
    msg.lat = 0.532056269019;
    msg.lon = 0.75176821809;
    msg.z = 0.943693675906;
    msg.z_units = 39U;
    msg.speed = 0.650843820418;
    msg.speed_units = 25U;
    msg.bearing = 0.986722420312;
    msg.cross_angle = 0.46092650705;
    msg.width = 0.231091768577;
    msg.length = 0.569522885051;
    msg.hstep = 0.0874804585531;
    msg.coff = 86U;
    msg.alternation = 119U;
    msg.flags = 39U;
    msg.custom.assign("OJMKVSLRCHAKUQPDOTJSCPZQTXIAFNAHWLVKYICDGWDFHBFBWBVXXUFDZAKXAAEMIDRJNWCWOYGQWGLUGBEMUNGNJYQSVTRBKLEWTREDYIYXKNVIHTIPBZOFMSMTMUXZMIVGETMJYGLLV");

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
    msg.setTimeStamp(0.972717745199);
    msg.setSource(37959U);
    msg.setSourceEntity(225U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(52U);
    msg.timeout = 63152U;
    msg.lat = 0.301866375282;
    msg.lon = 0.490698007899;
    msg.z = 0.725546988982;
    msg.z_units = 102U;
    msg.speed = 0.791132541868;
    msg.speed_units = 137U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.696433401053;
    tmp_msg_0.y = 0.980072577509;
    tmp_msg_0.z = 0.474253665135;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PHWRMDSYCUYUFPUFWWUQISWZKRKEREUJGYCAHXUBOEPODFWUQGJAGLBFXVMAJMLVZMXYTZJWKEUSJSYOMGOTHBVGQLHCSQ");

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
    msg.setTimeStamp(0.903094920968);
    msg.setSource(56980U);
    msg.setSourceEntity(14U);
    msg.setDestination(13603U);
    msg.setDestinationEntity(1U);
    msg.timeout = 3513U;
    msg.lat = 0.00735148187104;
    msg.lon = 0.0976463462828;
    msg.z = 0.567806482148;
    msg.z_units = 57U;
    msg.speed = 0.531824889695;
    msg.speed_units = 52U;
    msg.custom.assign("KBHCOVFTNHEYBAJQYXOZFMOTNPRSDPAIWWJXPGKEQVHCHIQEBMBIKYGVTUSFBBCXUDNJIDGYAUUVFDFNNBYIHCRAGNWNMHCEYURMLSWMQNDTGRJJZKLLSCDQZPVANUSPTWSREWJKIHOLGGQPJEYWRRPOVJEXLZTDPGRJJBAFWFDXUVBOOIKOLZXUDSALKOMGVYKATHYFMQOIUMPQGWKKXZNCFCSPWRXSFLEUTXSIATZQRMLEBCHHZET");

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
    msg.setTimeStamp(0.647021174458);
    msg.setSource(27327U);
    msg.setSourceEntity(98U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(41U);
    msg.timeout = 55743U;
    msg.lat = 0.30952224795;
    msg.lon = 0.265740078549;
    msg.z = 0.549250006989;
    msg.z_units = 36U;
    msg.speed = 0.86073173569;
    msg.speed_units = 141U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.343951404877;
    tmp_msg_0.y = 0.507251042937;
    tmp_msg_0.z = 0.18947443426;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OMATFCRHMKDMQYMEQUPHTCUMGUVODCBSJAMNAULNHKZXNVVTDJTFBKCNKWESTYZOERXPAXOWGVZGEIEGDCDZWZHHSLRXQPIAMKESVGOFTZZIYHURRPLLUTBIKPXXQIDKBLSNYSNJWLUBEDTLJHZJRGUGGRRJJCVSTOMOQSGSJBPBUIWDQDDJQWZYEQUOIKFBFQOFHENBAWCARPHWLXSFFYYNGYFZPWPXJVOQCAM");

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
    msg.setTimeStamp(0.242486090961);
    msg.setSource(19307U);
    msg.setSourceEntity(82U);
    msg.setDestination(16446U);
    msg.setDestinationEntity(119U);
    msg.x = 0.0906834577454;
    msg.y = 0.564081132749;
    msg.z = 0.277400231613;

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
    msg.setTimeStamp(0.208126741782);
    msg.setSource(3641U);
    msg.setSourceEntity(246U);
    msg.setDestination(2230U);
    msg.setDestinationEntity(253U);
    msg.x = 0.0835543885308;
    msg.y = 0.196922724087;
    msg.z = 0.484528603107;

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
    msg.setTimeStamp(0.664549746674);
    msg.setSource(59655U);
    msg.setSourceEntity(81U);
    msg.setDestination(42942U);
    msg.setDestinationEntity(186U);
    msg.x = 0.405986133859;
    msg.y = 0.748246180673;
    msg.z = 0.451904101939;

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
    msg.setTimeStamp(0.556347871957);
    msg.setSource(3213U);
    msg.setSourceEntity(190U);
    msg.setDestination(7185U);
    msg.setDestinationEntity(219U);
    msg.timeout = 59339U;
    msg.lat = 0.257387605892;
    msg.lon = 0.867495642842;
    msg.z = 0.763072825605;
    msg.z_units = 20U;
    msg.amplitude = 0.0373519151116;
    msg.pitch = 0.299684617092;
    msg.speed = 0.824283703391;
    msg.speed_units = 53U;
    msg.custom.assign("HMCZNQUVTIDZCWPMASAPFEYBONNXX");

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
    msg.setTimeStamp(0.619140561007);
    msg.setSource(36691U);
    msg.setSourceEntity(227U);
    msg.setDestination(31519U);
    msg.setDestinationEntity(27U);
    msg.timeout = 6181U;
    msg.lat = 0.209715747933;
    msg.lon = 0.877839123604;
    msg.z = 0.496119625682;
    msg.z_units = 101U;
    msg.amplitude = 0.0638194015443;
    msg.pitch = 0.231992722188;
    msg.speed = 0.234904149706;
    msg.speed_units = 104U;
    msg.custom.assign("HSLHSDRYKYZPANOEZRZLYSSGCPUKBQVIEHJFPKIZJUIGVXRDFRKBNOZNRSAUXOEQXRNCQABCHWXLPSTYKUDCGWKDAZPDBZTPVCNTBWHFGEUCJIGLPWHJVKJTNZADLFYHTGHQFZQJGLXQNBFDYYNLNWCMIIGVQQRQTTAEXOCX");

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
    msg.setTimeStamp(0.249357690206);
    msg.setSource(54144U);
    msg.setSourceEntity(161U);
    msg.setDestination(10374U);
    msg.setDestinationEntity(235U);
    msg.timeout = 41982U;
    msg.lat = 0.075450332817;
    msg.lon = 0.51452724937;
    msg.z = 0.564356247892;
    msg.z_units = 18U;
    msg.amplitude = 0.583079500099;
    msg.pitch = 0.276168215509;
    msg.speed = 0.573819507736;
    msg.speed_units = 236U;
    msg.custom.assign("PMZDATUZIWDJFSJVLVHJTLEUMSLVLGMGPJGTRPTOVDLASXVREMAFTZLQJMONYTUPCXZKEZHWKEQENNIBGHSDCVOVRTKGELUPIQHJVXGQWDKBENCTNL");

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
    msg.setTimeStamp(0.957637837057);
    msg.setSource(5577U);
    msg.setSourceEntity(35U);
    msg.setDestination(16267U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.819095323369);
    msg.setSource(32876U);
    msg.setSourceEntity(44U);
    msg.setDestination(60322U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.167499643487);
    msg.setSource(56907U);
    msg.setSourceEntity(127U);
    msg.setDestination(55845U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.196694684975);
    msg.setSource(48342U);
    msg.setSourceEntity(110U);
    msg.setDestination(45248U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.0434897632602;
    msg.lon = 0.798831016181;
    msg.z = 0.652545149935;
    msg.z_units = 22U;
    msg.radius = 0.619528324872;
    msg.duration = 55323U;
    msg.speed = 0.868816771549;
    msg.speed_units = 230U;
    msg.custom.assign("MXXDFZLKGTCKIRAJAUJYNBDGJNGTTWVCATWFOMWQJRKRGDXGTEGIFCTYCPTLZRLQLJOLYNWNQWIBHDUOYNBSFYSMMDHFZZPJBIMRKUKKJVZZLANHZFGDOFXWQLJMEQSBQSYLEHVVKWSILOBECWIOTP");

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
    msg.setTimeStamp(0.403692668827);
    msg.setSource(16553U);
    msg.setSourceEntity(81U);
    msg.setDestination(28003U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.735393873663;
    msg.lon = 0.262735591822;
    msg.z = 0.0390239470158;
    msg.z_units = 175U;
    msg.radius = 0.763689327853;
    msg.duration = 60223U;
    msg.speed = 0.458729354727;
    msg.speed_units = 205U;
    msg.custom.assign("KWPBNYUFMFTRFOVMZZDWRLYXGDCHONHETBHTUMVKRPKWSPCHEDBOLIZIIHHJXJFPBPCUHJMJAMDSIGHTQTRQNIKUOTYAZYNJERWXOEGBKNIZTXGIZXBHDARLGMWLZQVKDQVQLNMWCANEQNRAWWKUAOPCQKSQBACXHUPSXKCRFNEPAQIFSSSXYDVFCMJRVAANGDLLVSTYBVCZUUELVDZOGYEEUYBMPFXLZLEOFSWGJUWYO");

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
    msg.setTimeStamp(0.122586425677);
    msg.setSource(49181U);
    msg.setSourceEntity(174U);
    msg.setDestination(6831U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.148511428937;
    msg.lon = 0.825170292172;
    msg.z = 0.176193452815;
    msg.z_units = 50U;
    msg.radius = 0.950174569322;
    msg.duration = 32064U;
    msg.speed = 0.809312585887;
    msg.speed_units = 51U;
    msg.custom.assign("ZMDKXSGCGJQULHLVSXUBMIDNUSVRBFSEOCWO");

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
    msg.setTimeStamp(0.929161656259);
    msg.setSource(22476U);
    msg.setSourceEntity(87U);
    msg.setDestination(9341U);
    msg.setDestinationEntity(172U);
    msg.timeout = 9168U;
    msg.flags = 35U;
    msg.lat = 0.0828825915075;
    msg.lon = 0.692391373071;
    msg.start_z = 0.587111469313;
    msg.start_z_units = 200U;
    msg.end_z = 0.275252537734;
    msg.end_z_units = 3U;
    msg.radius = 0.292558713524;
    msg.speed = 0.151219843526;
    msg.speed_units = 1U;
    msg.custom.assign("CGDSEPWQMCOYFAVAWTEFEMHGVHYYKDLVCQPZOBTBKTPYDZRUALRREQFIELMXPMMUWAQZDYSN");

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
    msg.setTimeStamp(0.664606332541);
    msg.setSource(18749U);
    msg.setSourceEntity(217U);
    msg.setDestination(46413U);
    msg.setDestinationEntity(254U);
    msg.timeout = 53261U;
    msg.flags = 147U;
    msg.lat = 0.409694779593;
    msg.lon = 0.0302538106674;
    msg.start_z = 0.726202819545;
    msg.start_z_units = 62U;
    msg.end_z = 0.93658974463;
    msg.end_z_units = 44U;
    msg.radius = 0.220720366925;
    msg.speed = 0.861239683285;
    msg.speed_units = 157U;
    msg.custom.assign("LHLLWYUZAAVDXGDNMWBZNWTGEWJEHFDBHGBJPPCB");

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
    msg.setTimeStamp(0.454978611736);
    msg.setSource(59936U);
    msg.setSourceEntity(98U);
    msg.setDestination(60103U);
    msg.setDestinationEntity(74U);
    msg.timeout = 15217U;
    msg.flags = 125U;
    msg.lat = 0.549692888576;
    msg.lon = 0.572317710575;
    msg.start_z = 0.171725856578;
    msg.start_z_units = 109U;
    msg.end_z = 0.13681685114;
    msg.end_z_units = 238U;
    msg.radius = 0.789614460875;
    msg.speed = 0.49368765089;
    msg.speed_units = 148U;
    msg.custom.assign("RMKJETLXWSHEWRXBFHDUKWTJBKPSQHKINIWCRRZHESKHAKIOXMMKTGENVAGMMGOVGUCZLSUAOJPSAFYBHJWVZDZQLLMPZQ");

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
    msg.setTimeStamp(0.402979569206);
    msg.setSource(17937U);
    msg.setSourceEntity(251U);
    msg.setDestination(33821U);
    msg.setDestinationEntity(209U);
    msg.timeout = 5051U;
    msg.lat = 0.938968749311;
    msg.lon = 0.834630987626;
    msg.z = 0.432537738035;
    msg.z_units = 175U;
    msg.speed = 0.417345689799;
    msg.speed_units = 218U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.444517260174;
    tmp_msg_0.y = 0.143177318432;
    tmp_msg_0.z = 0.993753376551;
    tmp_msg_0.t = 0.5045675323;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OSENYYCDDQAWYXXPOUCGZVBMIFKVEUCWOJLGXKRXVPJHHFJBWJWCLMAXIAOEZKEZCFDIHKUHZPUNTEBLWVYSTLTAGIYYMCTGFRYMCGNAKHFNPBRLYEXMIDSRPQYZQMBHOUWTRZWEJQXNHNW");

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
    msg.setTimeStamp(0.934319337715);
    msg.setSource(15779U);
    msg.setSourceEntity(246U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(185U);
    msg.timeout = 37748U;
    msg.lat = 0.917238339926;
    msg.lon = 0.633257411145;
    msg.z = 0.140053190024;
    msg.z_units = 94U;
    msg.speed = 0.583355645728;
    msg.speed_units = 134U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.765021770321;
    tmp_msg_0.y = 0.0259430258841;
    tmp_msg_0.z = 0.0276053632031;
    tmp_msg_0.t = 0.679441842079;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FIVXLBKDKBILMGAATKYTKDAWSCMTLZFHENNWEICYLHFWFPSRTDDJYTESOJWQWVLOZAIUQQNBYPHECGBRZQWEXXVSHNZFWASXACUIJJNZOYUZVSMUMDIZNJXXWLPVDOWPDCTUVSQPENVVUHJNRLBEPV");

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
    msg.setTimeStamp(0.59205000932);
    msg.setSource(45114U);
    msg.setSourceEntity(4U);
    msg.setDestination(43737U);
    msg.setDestinationEntity(159U);
    msg.timeout = 5444U;
    msg.lat = 0.0445121184693;
    msg.lon = 0.80472934339;
    msg.z = 0.474602411467;
    msg.z_units = 5U;
    msg.speed = 0.609287853746;
    msg.speed_units = 40U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.85492550726;
    tmp_msg_0.y = 0.190809393335;
    tmp_msg_0.z = 0.806706625584;
    tmp_msg_0.t = 0.823695280395;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NYJCYUCUHFXIOATOIKKMYYEFCYUUYVICAVPIKOHZ");

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
    msg.setTimeStamp(0.592713395651);
    msg.setSource(48195U);
    msg.setSourceEntity(7U);
    msg.setDestination(51923U);
    msg.setDestinationEntity(71U);
    msg.x = 0.622612243909;
    msg.y = 0.753932477231;
    msg.z = 0.585413647742;
    msg.t = 0.438943552642;

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
    msg.setTimeStamp(0.861518146323);
    msg.setSource(4474U);
    msg.setSourceEntity(248U);
    msg.setDestination(34692U);
    msg.setDestinationEntity(114U);
    msg.x = 0.0636564666801;
    msg.y = 0.724186498753;
    msg.z = 0.965879115194;
    msg.t = 0.329040870324;

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
    msg.setTimeStamp(0.34142283848);
    msg.setSource(58648U);
    msg.setSourceEntity(108U);
    msg.setDestination(41100U);
    msg.setDestinationEntity(47U);
    msg.x = 0.172745514927;
    msg.y = 0.487738168193;
    msg.z = 0.0118180320385;
    msg.t = 0.976696164844;

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
    msg.setTimeStamp(0.0862313510628);
    msg.setSource(33926U);
    msg.setSourceEntity(147U);
    msg.setDestination(26040U);
    msg.setDestinationEntity(110U);
    msg.timeout = 42995U;
    msg.name.assign("WDFWGIXLVPRAVCBVXGUWDIFEDSUEPTTDSIVHOFBPENGJLNWYHZHMILAOYMWKNOZXQQCJAPXOVZKRAUWVUAWSJKROCETGQDTWYQRZAIMRPBHNJSHLNQUOICZPRYXKDKGMJCYHLKYQQJYSAODALTSKDOYQFGEBPNJUFDVZTHMRXCYPZUTC");
    msg.custom.assign("YBYZVFPETBWMIAXRSIJANBJGQOOYFJBHYWAHNVHUOCLNQVUDWQOPQBFVLJOGCRNLXGIBZEPRZDHHNKXOPFURMAJFIINHFOBFILZSXCAKCTIBXKRHOYSJFUVUMQYWXCLQKELDSDCMXHRSDIKMKUISCVETKUHPYTEZLCYJDCZZNJCTUPMNKVGMTETVSTLAPPLJWZRXRNKDRT");

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
    msg.setTimeStamp(0.878301473338);
    msg.setSource(32951U);
    msg.setSourceEntity(45U);
    msg.setDestination(28631U);
    msg.setDestinationEntity(254U);
    msg.timeout = 38354U;
    msg.name.assign("IZBNGZNUXVYNKLNLTHMKTBEXHKJVWABPCGVRIVEHINCHTMGGMPMOEFVQWNHUOTYWYZZCCYGHJBEF");
    msg.custom.assign("AETDUZNAWGILPMGXPSOFJCEQGSDHPZAREJRCAKWJXILFDYTOUENZJDQNKBLJRQQEDLZCHZUEEBOPPRXYNIWIGNGCVTFRRLVDFXSVTBDISWJLZWTUZIQWOPSMMQKHCNSTHKWEDWSIVJANAUMKKTMXPHFLRIYTDYJWPLYFGMJUTKOAIVEVTRKU");

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
    msg.setTimeStamp(0.101611462845);
    msg.setSource(24665U);
    msg.setSourceEntity(41U);
    msg.setDestination(61544U);
    msg.setDestinationEntity(47U);
    msg.timeout = 7807U;
    msg.name.assign("LHUSRNBWOGEMZLTXAYMPVUWBFJZQTAWINWKKIAIYCGHBQLXGYNHTCMIFUZGDCRDVNGBEFNSWJOEAMEQWKUVXDSOKPESYIKFZTJKBMZRNLQWKCUMLLPIBKTKMXVXIEOH");
    msg.custom.assign("APWCGQVAVZZQMAPYHNXYGTEKGFRF");

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
    msg.setTimeStamp(0.598765932948);
    msg.setSource(4021U);
    msg.setSourceEntity(198U);
    msg.setDestination(51832U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.855087058829;
    msg.lon = 0.360830721069;
    msg.z = 0.723857015835;
    msg.z_units = 43U;
    msg.speed = 0.833486980313;
    msg.speed_units = 183U;
    msg.start_time = 0.863777447527;
    msg.custom.assign("IJQHJECGCZVCKSBXWMPSFZTQACKAHNMTZHEVRZNKRGKTRVGODAWFYJLQWCOLMBUXJYINGGBQBVJPTFTEEUUSFHBELUCXNVKLISDHIWPPPJTIZMHNKTPXYOGMRRQBBKMOKLKILCMOXVKYCBISPCOAYSAWYXQJRESUPYTVGLUGDOWIRZHLEMFDV");

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
    msg.setTimeStamp(0.649964173503);
    msg.setSource(32087U);
    msg.setSourceEntity(14U);
    msg.setDestination(36361U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.38204320201;
    msg.lon = 0.610236390069;
    msg.z = 0.729895595051;
    msg.z_units = 183U;
    msg.speed = 0.496465159305;
    msg.speed_units = 117U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43512U;
    tmp_msg_0.off_x = 0.99322248617;
    tmp_msg_0.off_y = 0.43795634895;
    tmp_msg_0.off_z = 0.829613339294;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.462341288371;
    msg.custom.assign("LSOLOUJQYTIQKUUJZDBNRNBUIRHMJZQPYCWVWMY");

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
    msg.setTimeStamp(0.28527300004);
    msg.setSource(7632U);
    msg.setSourceEntity(213U);
    msg.setDestination(59374U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.0261950818745;
    msg.lon = 0.784012176327;
    msg.z = 0.799249526315;
    msg.z_units = 101U;
    msg.speed = 0.708891732583;
    msg.speed_units = 131U;
    msg.start_time = 0.479117198358;
    msg.custom.assign("ZPTJCGVNEQZNIMPZMLJPBQFNBQGLXECTMBPUGHPUASRQHDWACPWMJKVQUWUHIPHIZZGUMYQHTDXBDIRBEBRSXZOKKIWTLZWEOVZSXASFQCIKGFRYRKTDCYUNNWCUARBNRISENALFLTCXJTLIJXVSUKEFJFSM");

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
    msg.setTimeStamp(0.746781637647);
    msg.setSource(24023U);
    msg.setSourceEntity(246U);
    msg.setDestination(26642U);
    msg.setDestinationEntity(221U);
    msg.vid = 39823U;
    msg.off_x = 0.489781934459;
    msg.off_y = 0.195688511991;
    msg.off_z = 0.42541758029;

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
    msg.setTimeStamp(0.784667129917);
    msg.setSource(20918U);
    msg.setSourceEntity(201U);
    msg.setDestination(5521U);
    msg.setDestinationEntity(99U);
    msg.vid = 59779U;
    msg.off_x = 0.270219715864;
    msg.off_y = 0.232580352065;
    msg.off_z = 0.564508093136;

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
    msg.setTimeStamp(0.256309926171);
    msg.setSource(14200U);
    msg.setSourceEntity(235U);
    msg.setDestination(62838U);
    msg.setDestinationEntity(81U);
    msg.vid = 42704U;
    msg.off_x = 0.758681116136;
    msg.off_y = 0.440236986624;
    msg.off_z = 0.518678357904;

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
    msg.setTimeStamp(0.4712915748);
    msg.setSource(50944U);
    msg.setSourceEntity(190U);
    msg.setDestination(64939U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.04028895141);
    msg.setSource(58093U);
    msg.setSourceEntity(107U);
    msg.setDestination(32409U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.351242468352);
    msg.setSource(63820U);
    msg.setSourceEntity(201U);
    msg.setDestination(40885U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.372554431027);
    msg.setSource(53141U);
    msg.setSourceEntity(68U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(94U);
    msg.mid = 54400U;

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
    msg.setTimeStamp(0.69697742755);
    msg.setSource(30140U);
    msg.setSourceEntity(77U);
    msg.setDestination(17504U);
    msg.setDestinationEntity(144U);
    msg.mid = 56344U;

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
    msg.setTimeStamp(0.264726232629);
    msg.setSource(16350U);
    msg.setSourceEntity(23U);
    msg.setDestination(35403U);
    msg.setDestinationEntity(6U);
    msg.mid = 48662U;

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
    msg.setTimeStamp(0.376996139402);
    msg.setSource(23436U);
    msg.setSourceEntity(42U);
    msg.setDestination(56491U);
    msg.setDestinationEntity(198U);
    msg.state = 3U;
    msg.eta = 31225U;
    msg.info.assign("ZNXVWEFUVRMGUNB");

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
    msg.setTimeStamp(0.91118638735);
    msg.setSource(60824U);
    msg.setSourceEntity(88U);
    msg.setDestination(24604U);
    msg.setDestinationEntity(197U);
    msg.state = 81U;
    msg.eta = 49567U;
    msg.info.assign("CESRMKXNHKCEXISBXRDETDCQLPEAMNWRWQJUIFPNOXABNXAUAHGAAPULNZWRMTFJVWBKLGRGITQJYWIWOURGSTNXKKRRQUOQM");

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
    msg.setTimeStamp(0.370355811939);
    msg.setSource(60618U);
    msg.setSourceEntity(234U);
    msg.setDestination(4037U);
    msg.setDestinationEntity(172U);
    msg.state = 57U;
    msg.eta = 35835U;
    msg.info.assign("NAVEDBPUJQJSEIFWNLOXY");

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
    msg.setTimeStamp(0.396261387107);
    msg.setSource(60162U);
    msg.setSourceEntity(4U);
    msg.setDestination(50501U);
    msg.setDestinationEntity(136U);
    msg.system = 32546U;
    msg.duration = 5209U;
    msg.speed = 0.484631602044;
    msg.speed_units = 243U;
    msg.x = 0.259965172919;
    msg.y = 0.973077173733;
    msg.z = 0.843477895358;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.239030728097);
    msg.setSource(61676U);
    msg.setSourceEntity(201U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(39U);
    msg.system = 51026U;
    msg.duration = 55753U;
    msg.speed = 0.384655864558;
    msg.speed_units = 178U;
    msg.x = 0.939999984585;
    msg.y = 0.888487523056;
    msg.z = 0.0950743460036;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.769855094897);
    msg.setSource(44179U);
    msg.setSourceEntity(180U);
    msg.setDestination(17482U);
    msg.setDestinationEntity(222U);
    msg.system = 28098U;
    msg.duration = 7393U;
    msg.speed = 0.00445419182254;
    msg.speed_units = 79U;
    msg.x = 0.235029943625;
    msg.y = 0.110614497515;
    msg.z = 0.920651179979;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.281047762623);
    msg.setSource(7966U);
    msg.setSourceEntity(230U);
    msg.setDestination(49598U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.903156634879;
    msg.lon = 0.525705400157;
    msg.speed = 0.308278132857;
    msg.speed_units = 184U;
    msg.duration = 48451U;
    msg.sys_a = 35224U;
    msg.sys_b = 2120U;
    msg.move_threshold = 0.233949562731;

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
    msg.setTimeStamp(0.102201050115);
    msg.setSource(19356U);
    msg.setSourceEntity(71U);
    msg.setDestination(53395U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.925772829955;
    msg.lon = 0.184287744419;
    msg.speed = 0.831766889929;
    msg.speed_units = 186U;
    msg.duration = 60073U;
    msg.sys_a = 8598U;
    msg.sys_b = 53446U;
    msg.move_threshold = 0.0706850737955;

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
    msg.setTimeStamp(0.969924067713);
    msg.setSource(15889U);
    msg.setSourceEntity(143U);
    msg.setDestination(62552U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.466146780819;
    msg.lon = 0.679062065789;
    msg.speed = 0.361885007308;
    msg.speed_units = 140U;
    msg.duration = 18941U;
    msg.sys_a = 30860U;
    msg.sys_b = 12757U;
    msg.move_threshold = 0.0359594095231;

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
    msg.setTimeStamp(0.305991257285);
    msg.setSource(37063U);
    msg.setSourceEntity(152U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.771543899518;
    msg.lon = 0.0503393734089;
    msg.z = 0.836039094758;
    msg.z_units = 168U;
    msg.speed = 0.987155744466;
    msg.speed_units = 52U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.983159081056;
    tmp_msg_0.lon = 0.54873017621;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VEPIULAVHMBHOYWSIOSCSFLENMDKCDUTMYDLMSGAPAFMWPUZFJWBGICOAOYBIBRSJTTUYZYAFJDXHDXTZNUWFUJOPUQFDGGTPNJCWFGHDYCBTMXKQZFJKIBENS");

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
    msg.setTimeStamp(0.169894110171);
    msg.setSource(52569U);
    msg.setSourceEntity(253U);
    msg.setDestination(9097U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.0816137265501;
    msg.lon = 0.355386247871;
    msg.z = 0.156791936898;
    msg.z_units = 212U;
    msg.speed = 0.830455145339;
    msg.speed_units = 141U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.889697365262;
    tmp_msg_0.lon = 0.780434095967;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YJCXNMDQITJOWCTBECPFGDHEKEQPAPHDZSTNLUGRGVZUQXHXWPQMMUTJHZAMDVSZLKZIWSTXNOGQSWNOAIJQHXDHLQLQFMOEYAMXYVRRRZXAJLBMVEINVEWIYFJTHHKPFBMFOISCSKIPDDWXOPAYUKATUUKBOOLEUCNAGMGJHKYNERBUKTEJSG");

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
    msg.setTimeStamp(0.138230963794);
    msg.setSource(39962U);
    msg.setSourceEntity(52U);
    msg.setDestination(19871U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.456423056577;
    msg.lon = 0.49611090224;
    msg.z = 0.330720095855;
    msg.z_units = 162U;
    msg.speed = 0.804675131933;
    msg.speed_units = 86U;
    msg.custom.assign("IOYLNSEOLGQSGJELBEAKHJAXZHJKADRBCSEFDYWGVQMSVFKEMJHFDTIPBHVFAXUHRGYDOMFDXNXMQGLWDXLONKQZWARTEQHYGKQHKPTWNZNURAVYFUUDBACIMWJCHPYJKUWWFMWIQCLCZBBCEWXFQLVSRMBVPMKBVZILDAENZZZJSGACENITUKNXOCZVOUIAFMOEYYRTNRJIYQP");

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
    msg.setTimeStamp(0.276950912302);
    msg.setSource(58433U);
    msg.setSourceEntity(238U);
    msg.setDestination(59609U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.269262920489;
    msg.lon = 0.992120196401;

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
    msg.setTimeStamp(0.80553930787);
    msg.setSource(2388U);
    msg.setSourceEntity(50U);
    msg.setDestination(46043U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.417904825228;
    msg.lon = 0.689347301605;

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
    msg.setTimeStamp(0.412018482455);
    msg.setSource(36937U);
    msg.setSourceEntity(7U);
    msg.setDestination(31134U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.109702344425;
    msg.lon = 0.0107855822445;

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
    msg.setTimeStamp(0.0456270782414);
    msg.setSource(55790U);
    msg.setSourceEntity(116U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(3U);
    msg.timeout = 32327U;
    msg.lat = 0.952116218569;
    msg.lon = 0.83598842966;
    msg.z = 0.252469029364;
    msg.z_units = 136U;
    msg.pitch = 0.234330288263;
    msg.amplitude = 0.270094881325;
    msg.duration = 50257U;
    msg.speed = 0.255091454241;
    msg.speed_units = 60U;
    msg.radius = 0.649553406395;
    msg.direction = 177U;
    msg.custom.assign("FIELMEAZDFQJFKDHEEJTGGDNJNQMQTV");

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
    msg.setTimeStamp(0.587125178507);
    msg.setSource(34812U);
    msg.setSourceEntity(50U);
    msg.setDestination(64049U);
    msg.setDestinationEntity(179U);
    msg.timeout = 1262U;
    msg.lat = 0.813702138401;
    msg.lon = 0.269920444904;
    msg.z = 0.0347253316184;
    msg.z_units = 217U;
    msg.pitch = 0.848130682516;
    msg.amplitude = 0.771945568975;
    msg.duration = 40565U;
    msg.speed = 0.791893394952;
    msg.speed_units = 18U;
    msg.radius = 0.30280972518;
    msg.direction = 72U;
    msg.custom.assign("ORZUCMEEDIFWHLJKFZSPIPOEOCQFGDJVEAMNZSEGBXKBSQJUVZRRNBXDONFBJDLYQGYTI");

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
    msg.setTimeStamp(0.854523303802);
    msg.setSource(59846U);
    msg.setSourceEntity(39U);
    msg.setDestination(26317U);
    msg.setDestinationEntity(156U);
    msg.timeout = 38144U;
    msg.lat = 0.657510780985;
    msg.lon = 0.202879029796;
    msg.z = 0.918152077108;
    msg.z_units = 29U;
    msg.pitch = 0.718408328677;
    msg.amplitude = 0.997490177172;
    msg.duration = 4094U;
    msg.speed = 0.00481960346889;
    msg.speed_units = 77U;
    msg.radius = 0.572953525312;
    msg.direction = 47U;
    msg.custom.assign("ATZQBRRPMWLSZXJBNGPTBHMNLIWPFTPJNBWXGCYQSXOKFRVCGLQRIMANHYXJVHTFQOUAOKGFQOJHIMMNABEVUJJBZDWTVMEWMQACCYGELGHSEPZHBVEMUCQJ");

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
    msg.setTimeStamp(0.607449300715);
    msg.setSource(53731U);
    msg.setSourceEntity(75U);
    msg.setDestination(33925U);
    msg.setDestinationEntity(166U);
    msg.formation_name.assign("WOVIXNDARETVRUPYEFSENSZBMJCMJRBGTHYVRQDOQUJFYYHRMWLTKRJDG");
    msg.reference_frame = 209U;
    msg.custom.assign("HBOWXFSRETHAIZWVLXMVHTTQARGCOVZUOCLKZUKAPCHCSPKVTX");

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
    msg.setTimeStamp(0.0644740206502);
    msg.setSource(10250U);
    msg.setSourceEntity(8U);
    msg.setDestination(29424U);
    msg.setDestinationEntity(219U);
    msg.formation_name.assign("EQIZERVHHCMMOXGEHUVLCJTMXVUGNKPYTTRRLBEVWDOBQIXFUDVLHKGPYLSLGRQGAAJJKFRNAMMPGSUSLBGWOIKBIBMZCQSPQKUMTQINIETGHZHMLNGPTIUUHSSWPZCIZCPZQVGN");
    msg.reference_frame = 242U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40141U;
    tmp_msg_0.off_x = 0.145714675608;
    tmp_msg_0.off_y = 0.877284010902;
    tmp_msg_0.off_z = 0.0228371552193;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TRJOFXXFZMNSEVPAANSBWNOIQAOCTVUGKLTLWZXHQZ");

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
    msg.setTimeStamp(0.99247016904);
    msg.setSource(27970U);
    msg.setSourceEntity(225U);
    msg.setDestination(31556U);
    msg.setDestinationEntity(200U);
    msg.formation_name.assign("WPJSCZLHUXDAMGDMANRPNQBWCOXXKNACSONZWNTUJPFPEUONIPWRGJFDXZOESTYLLEOSFALQIGMCXQLKJQTYQBUCFEMUJHYRVKDXVTKANEKOVBCZZTLOKAHBPIMWMXMSDMYWFTHPVHONXVVLUQMYBSHROLUFEGZWDHAQEIQJISVGNTEJCZGTUZAKPJRBRAYY");
    msg.reference_frame = 127U;
    msg.custom.assign("RRWBZALHTKERIXZXQBKFCGQDCDOOIRGGYVSIOTNP");

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
    msg.setTimeStamp(0.741519089758);
    msg.setSource(57843U);
    msg.setSourceEntity(83U);
    msg.setDestination(63640U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("RPGUNXUIYPTEMTRHBNQYZVNZNRNLMKHVHUOBOWEABSDFQTWEVAJDRSGXHEDXIZTSAKJVLXTDRKWDNGLJYWCXXEGCMUOJLIPDFBPSWLANQROXMWCUVCAGJZMGGLUZYWLISMTVQBGXOQHRBLZQWTUOZFPRSCAILUKB");
    msg.formation_name.assign("EEMCUSSVJGCGMNXJEKRFKYUNYILHFLRQQBNWCVEDAHSSESLIWTJHLEHVTLWGAUZHZUQXTJWGRMWYPBVTDYYIRPSQPLWAONFDCKCMRBXOJGTVMKCHCFUSDYBNBANECNGTQGAMQAFOHRPEPMXKXXRACI");
    msg.plan_id.assign("NCZIHVXBRCIKWOUGSEEPGDRUJVGQYLFMWSTFLHYKSDIJCJEMIAXYQJBEDRDEUNRHJAOXLMDHQUVARKJBYGNVNWAMZPZLNTIEOCOUSZFLYWEPUZDCGARYRQBFEDJSXFBEHWPLFLRVORGCFFIKXALWDVJFPKUSGVNKAZQQAHZVPOBTWUKTHBOQNKFGYCNGLDEJMMTYONWIBQPSWHPCSZXNKCIOYTPQZLXUMVKBD");
    msg.description.assign("KWTVKZSZKHJKBVFXXOCPYZQJMVBSHFYKNLKARNGIAGLHQNRPSCBUEDPYIXABALGSFFPHFJOWITBNPJJCVVQZOAHYXVEXDTFBL");
    msg.leader_speed = 0.925357710935;
    msg.leader_bank_lim = 0.985154005102;
    msg.pos_sim_err_lim = 0.49378025366;
    msg.pos_sim_err_wrn = 0.195748211566;
    msg.pos_sim_err_timeout = 4249U;
    msg.converg_max = 0.258948356945;
    msg.converg_timeout = 7199U;
    msg.comms_timeout = 7189U;
    msg.turb_lim = 0.115440143569;
    msg.custom.assign("DIMZXSQCCGCTOUTHUNJWLPLRCVHNNBRSWBICKQWVQJJKGEPEYLXKAAYLGVFRIUHSKQOHBYJIXYHLUYSORAYZVPWWWXEZMFPYQMFQVZEZGMZLTGEFBQOJBDIOLPNCVIMUBSZ");

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
    msg.setTimeStamp(0.188734611181);
    msg.setSource(777U);
    msg.setSourceEntity(50U);
    msg.setDestination(27879U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("JFWCQXAGIJVDUYRIOOYKWCDQYTGXSTORGOVYVMLVRHUAPHLZDEMUNRZNEHRZFZYMAGELPETTBQMBHHFFYFRBQJHTWKIBKWGBUOWUMGHJEKPAJPIGICMZVDDDEKYENOP");
    msg.formation_name.assign("EEPGRWDOQU");
    msg.plan_id.assign("NQHLAWXGGLWEKDVLWAVBTOLRPFHHMGBNRXHFHDKSRCOMTBIBOVJHKTLZNDYF");
    msg.description.assign("HKHXHKRPMVSVPPOSIGCXACHCNLWZMKGJZILTZHMGUFQBFSRTDGBXAEJYAUUPCIEVVKAKJPGKYDEHJNURWWSRYLZJLDFCPQQTPSMDEGZHTOQXDROMEOEJOSALJBRXWVQIYGSMNKRHFGBBRDAHGBNICSBDPCNEIQUDNIOVWVVIZYV");
    msg.leader_speed = 0.261148164076;
    msg.leader_bank_lim = 0.932012657844;
    msg.pos_sim_err_lim = 0.349357534754;
    msg.pos_sim_err_wrn = 0.371797797461;
    msg.pos_sim_err_timeout = 38169U;
    msg.converg_max = 0.592527533273;
    msg.converg_timeout = 31710U;
    msg.comms_timeout = 40042U;
    msg.turb_lim = 0.571892221928;
    msg.custom.assign("NCFATJFGAYWPUWMYZYNBVMGKTRBONLVONIUDZEKXFYWQQSXBDHGQGVVCVSISYPGBBJSETUEEXKRGFAWIDLZIOHXNFLXTSPRMIFONCJKJWJZUCAQ");

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
    msg.setTimeStamp(0.627759295398);
    msg.setSource(60359U);
    msg.setSourceEntity(176U);
    msg.setDestination(30131U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("MXDGXFHKJLWMBEJBBCRXCARUJMCLCPPNTANRZIJOOYHFTDUTWDUFAGKGYCNDZPOUSNMVYBAAUFSQPEQXLZZWINOHIJE");
    msg.formation_name.assign("GYAHQIMPJXDPRAQVVPELFCAHIQSZEBSTQIYJIFBRMHECMODUDUNGFKMZTDZSNPDZWYDYNSIXNWFJLICGLPJFZQUDUJMHINEMXAMBHVBVOULOWTBXMNZZTKRCHPXRAOCSFBBVYSFOVWHPLBFQVWJBATZGSPYRFHDEGOGJRKCAPWCEVUKTRKIKOHRIOVGNEXUJTCXESSKJCPLLXLTRZHKUNEQY");
    msg.plan_id.assign("IDWPSTBCUNUSZSHWXPAOMYOBBATABCARRZDJEFBXQKQIYUCLOCXWRXZOLJYHLHCJR");
    msg.description.assign("BDLOOSOZXWXZFPVEHCBUPNKDROTOMPGGBADWBLREBRFURTDMIENWLWRYNQMATCIGCZHJSYYYASTGMRXSQEIQYS");
    msg.leader_speed = 0.256371196524;
    msg.leader_bank_lim = 0.84714340138;
    msg.pos_sim_err_lim = 0.965079673631;
    msg.pos_sim_err_wrn = 0.661055243335;
    msg.pos_sim_err_timeout = 18305U;
    msg.converg_max = 0.452645622424;
    msg.converg_timeout = 26315U;
    msg.comms_timeout = 9479U;
    msg.turb_lim = 0.794945271315;
    msg.custom.assign("KXSKLHMFAWUROUJSIDUDYOCLGDZSBZWCOPRNEFEWVKWAECLSFEMZRBLFYNAGDAKCHVOOMRNRPILZTAVSXYJSVKIVVIJDKRXHMBCQCXBANYCEWUTRLYDCJRMZGEJYTPXKELWPPIIBVXGJCNTVUYBDLBIIYQADGOWATFLNJQZKFQUSMZHXYMQQATHNUUTSQUBAMGT");

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
    msg.setTimeStamp(0.864415602357);
    msg.setSource(7606U);
    msg.setSourceEntity(62U);
    msg.setDestination(57318U);
    msg.setDestinationEntity(73U);
    msg.control_src = 27535U;
    msg.control_ent = 48U;
    msg.timeout = 0.263311011038;
    msg.loiter_radius = 0.0736635661717;
    msg.altitude_interval = 0.285446984157;

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
    msg.setTimeStamp(0.461555127645);
    msg.setSource(36839U);
    msg.setSourceEntity(34U);
    msg.setDestination(36954U);
    msg.setDestinationEntity(7U);
    msg.control_src = 45763U;
    msg.control_ent = 46U;
    msg.timeout = 0.0851053377183;
    msg.loiter_radius = 0.234142184119;
    msg.altitude_interval = 0.0882004135879;

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
    msg.setTimeStamp(0.909142623045);
    msg.setSource(28750U);
    msg.setSourceEntity(26U);
    msg.setDestination(63676U);
    msg.setDestinationEntity(158U);
    msg.control_src = 51127U;
    msg.control_ent = 213U;
    msg.timeout = 0.77607780052;
    msg.loiter_radius = 0.742828785795;
    msg.altitude_interval = 0.732277172561;

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
    msg.setTimeStamp(0.157901622318);
    msg.setSource(54023U);
    msg.setSourceEntity(228U);
    msg.setDestination(36295U);
    msg.setDestinationEntity(157U);
    msg.flags = 79U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.846302173388;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.373377890943;
    tmp_msg_1.z_units = 28U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.462592919509;
    msg.lon = 0.312324984664;
    msg.radius = 0.460451059575;

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
    msg.setTimeStamp(0.176076936783);
    msg.setSource(42552U);
    msg.setSourceEntity(44U);
    msg.setDestination(44990U);
    msg.setDestinationEntity(76U);
    msg.flags = 249U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.59414347049;
    tmp_msg_0.speed_units = 128U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.800638897875;
    tmp_msg_1.z_units = 139U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.148195261514;
    msg.lon = 0.330313066332;
    msg.radius = 0.366155458563;

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
    msg.setTimeStamp(0.569261391884);
    msg.setSource(37777U);
    msg.setSourceEntity(196U);
    msg.setDestination(39850U);
    msg.setDestinationEntity(79U);
    msg.flags = 51U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.152653871781;
    tmp_msg_0.speed_units = 225U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.839640129514;
    tmp_msg_1.z_units = 202U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.866664177957;
    msg.lon = 0.708588955647;
    msg.radius = 0.241795300844;

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
    msg.setTimeStamp(0.0834757752334);
    msg.setSource(64189U);
    msg.setSourceEntity(98U);
    msg.setDestination(39786U);
    msg.setDestinationEntity(174U);
    msg.control_src = 21597U;
    msg.control_ent = 247U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 91U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.251559114469;
    tmp_tmp_msg_0_0.speed_units = 110U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0795704222574;
    tmp_tmp_msg_0_1.z_units = 43U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.438009483659;
    tmp_msg_0.lon = 0.458393966766;
    tmp_msg_0.radius = 0.81468893725;
    msg.reference.set(tmp_msg_0);
    msg.state = 0U;
    msg.proximity = 219U;

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
    msg.setTimeStamp(0.75660551226);
    msg.setSource(31334U);
    msg.setSourceEntity(52U);
    msg.setDestination(5739U);
    msg.setDestinationEntity(82U);
    msg.control_src = 55034U;
    msg.control_ent = 109U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 60U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.677489196456;
    tmp_tmp_msg_0_0.speed_units = 99U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.826691905266;
    tmp_tmp_msg_0_1.z_units = 74U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.287883604811;
    tmp_msg_0.lon = 0.627728945718;
    tmp_msg_0.radius = 0.483899399484;
    msg.reference.set(tmp_msg_0);
    msg.state = 165U;
    msg.proximity = 170U;

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
    msg.setTimeStamp(0.612937777674);
    msg.setSource(6596U);
    msg.setSourceEntity(12U);
    msg.setDestination(5355U);
    msg.setDestinationEntity(89U);
    msg.control_src = 37912U;
    msg.control_ent = 137U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0373248899096;
    tmp_tmp_msg_0_0.speed_units = 243U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.245793652243;
    tmp_tmp_msg_0_1.z_units = 161U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0822908272161;
    tmp_msg_0.lon = 0.0342798997013;
    tmp_msg_0.radius = 0.626219311886;
    msg.reference.set(tmp_msg_0);
    msg.state = 42U;
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
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.784367480283);
    msg.setSource(59095U);
    msg.setSourceEntity(74U);
    msg.setDestination(1877U);
    msg.setDestinationEntity(60U);
    msg.ax_cmd = 0.159889667038;
    msg.ay_cmd = 0.176288306148;
    msg.az_cmd = 0.671855069847;
    msg.ax_des = 0.728491069804;
    msg.ay_des = 0.900213633223;
    msg.az_des = 0.792206905943;
    msg.virt_err_x = 0.50188301072;
    msg.virt_err_y = 0.408828149821;
    msg.virt_err_z = 0.371819865855;
    msg.surf_fdbk_x = 0.320000507953;
    msg.surf_fdbk_y = 0.891855907945;
    msg.surf_fdbk_z = 0.537971411569;
    msg.surf_unkn_x = 0.116804927849;
    msg.surf_unkn_y = 0.666482864001;
    msg.surf_unkn_z = 0.360332103215;
    msg.ss_x = 0.884360029952;
    msg.ss_y = 0.712006601091;
    msg.ss_z = 0.213144766117;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ASEJGQEXVNPKOQYDUSCYUHJONKXIDHDOLLYUIKNGPTVJDEZVUZUOTFEOZRJPNAIGQLICCNDRSUPREMPRLVAHISTRHQFBCQACKXJCWQTJCKHYEFQWTOWRXBREW");
    tmp_msg_0.dist = 0.370803463294;
    tmp_msg_0.err = 0.641788799227;
    tmp_msg_0.ctrl_imp = 0.514435716271;
    tmp_msg_0.rel_dir_x = 0.641699821119;
    tmp_msg_0.rel_dir_y = 0.179490763739;
    tmp_msg_0.rel_dir_z = 0.573741643994;
    tmp_msg_0.err_x = 0.425831383768;
    tmp_msg_0.err_y = 0.200794108323;
    tmp_msg_0.err_z = 0.509200901777;
    tmp_msg_0.rf_err_x = 0.568015219785;
    tmp_msg_0.rf_err_y = 0.651375347413;
    tmp_msg_0.rf_err_z = 0.264623923966;
    tmp_msg_0.rf_err_vx = 0.157464700928;
    tmp_msg_0.rf_err_vy = 0.435600174775;
    tmp_msg_0.rf_err_vz = 0.169032675988;
    tmp_msg_0.ss_x = 0.0393601873461;
    tmp_msg_0.ss_y = 0.122863160715;
    tmp_msg_0.ss_z = 0.862762954549;
    tmp_msg_0.virt_err_x = 0.919034238922;
    tmp_msg_0.virt_err_y = 0.227952412366;
    tmp_msg_0.virt_err_z = 0.834391383545;
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
    msg.setTimeStamp(0.199417308394);
    msg.setSource(62729U);
    msg.setSourceEntity(12U);
    msg.setDestination(43885U);
    msg.setDestinationEntity(196U);
    msg.ax_cmd = 0.942046927905;
    msg.ay_cmd = 0.0787566668462;
    msg.az_cmd = 0.404754017045;
    msg.ax_des = 0.969005438648;
    msg.ay_des = 0.877879513167;
    msg.az_des = 0.739331221878;
    msg.virt_err_x = 0.759673801191;
    msg.virt_err_y = 0.59334099542;
    msg.virt_err_z = 0.500796020651;
    msg.surf_fdbk_x = 0.84016943744;
    msg.surf_fdbk_y = 0.62030348509;
    msg.surf_fdbk_z = 0.692342126825;
    msg.surf_unkn_x = 0.0370990678894;
    msg.surf_unkn_y = 0.690844041636;
    msg.surf_unkn_z = 0.773142720672;
    msg.ss_x = 0.772580239942;
    msg.ss_y = 0.485608996897;
    msg.ss_z = 0.186713856271;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VRKYXVTNZHWMOKZFKXHLXQHGEDFQLCYLCNORLCRLRCOTJLTZYHGFNIJWQVOHUIQFJMPCZEATMXJDAGIENDWQXBTVGLUUZHQYSNONDKNWQSSOMOAIFOSXIDWLBZRPVDZGMUPAKKYBTUKWGQPRNBVJWGBWZYDPABQVORLU");
    tmp_msg_0.dist = 0.594856347187;
    tmp_msg_0.err = 0.527669811002;
    tmp_msg_0.ctrl_imp = 0.664873764711;
    tmp_msg_0.rel_dir_x = 0.342231193521;
    tmp_msg_0.rel_dir_y = 0.644018105463;
    tmp_msg_0.rel_dir_z = 0.94818611438;
    tmp_msg_0.err_x = 0.117039912527;
    tmp_msg_0.err_y = 0.345517886757;
    tmp_msg_0.err_z = 0.572446846984;
    tmp_msg_0.rf_err_x = 0.793070073431;
    tmp_msg_0.rf_err_y = 0.978542934312;
    tmp_msg_0.rf_err_z = 0.709729974758;
    tmp_msg_0.rf_err_vx = 0.627573567454;
    tmp_msg_0.rf_err_vy = 0.988486975706;
    tmp_msg_0.rf_err_vz = 0.894576700077;
    tmp_msg_0.ss_x = 0.458905027258;
    tmp_msg_0.ss_y = 0.182473897857;
    tmp_msg_0.ss_z = 0.138964269932;
    tmp_msg_0.virt_err_x = 0.159941254391;
    tmp_msg_0.virt_err_y = 0.649011554215;
    tmp_msg_0.virt_err_z = 0.8075930301;
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
    msg.setTimeStamp(0.83705876645);
    msg.setSource(30473U);
    msg.setSourceEntity(169U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(172U);
    msg.ax_cmd = 0.903215464375;
    msg.ay_cmd = 0.641719415393;
    msg.az_cmd = 0.302679324149;
    msg.ax_des = 0.844575291534;
    msg.ay_des = 0.841324832163;
    msg.az_des = 0.59093949784;
    msg.virt_err_x = 0.681521801173;
    msg.virt_err_y = 0.111148194181;
    msg.virt_err_z = 0.24027850264;
    msg.surf_fdbk_x = 0.126340356615;
    msg.surf_fdbk_y = 0.259008150604;
    msg.surf_fdbk_z = 0.857170185994;
    msg.surf_unkn_x = 0.279716656625;
    msg.surf_unkn_y = 0.952528471301;
    msg.surf_unkn_z = 0.124300943636;
    msg.ss_x = 0.399386761037;
    msg.ss_y = 0.365507236611;
    msg.ss_z = 0.384415747223;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OKBTRPXOLTKYXVFLBVZTMZ");
    tmp_msg_0.dist = 0.889306390642;
    tmp_msg_0.err = 0.308010208015;
    tmp_msg_0.ctrl_imp = 0.214795069644;
    tmp_msg_0.rel_dir_x = 0.701101855414;
    tmp_msg_0.rel_dir_y = 0.235705059593;
    tmp_msg_0.rel_dir_z = 0.728737505871;
    tmp_msg_0.err_x = 0.875995584254;
    tmp_msg_0.err_y = 0.898435850939;
    tmp_msg_0.err_z = 0.670017876383;
    tmp_msg_0.rf_err_x = 0.743784996838;
    tmp_msg_0.rf_err_y = 0.123869255957;
    tmp_msg_0.rf_err_z = 0.737017461518;
    tmp_msg_0.rf_err_vx = 0.126944532143;
    tmp_msg_0.rf_err_vy = 0.132662621224;
    tmp_msg_0.rf_err_vz = 0.370278208076;
    tmp_msg_0.ss_x = 0.556921209081;
    tmp_msg_0.ss_y = 0.221854320784;
    tmp_msg_0.ss_z = 0.264720506988;
    tmp_msg_0.virt_err_x = 0.254628833155;
    tmp_msg_0.virt_err_y = 0.513234018562;
    tmp_msg_0.virt_err_z = 0.881981696952;
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
    msg.setTimeStamp(0.587377327945);
    msg.setSource(5552U);
    msg.setSourceEntity(149U);
    msg.setDestination(28203U);
    msg.setDestinationEntity(215U);
    msg.s_id.assign("JYVXEHQLOVMEHGDCTRZTRJSBKRJMQPDAHSQPEJPIPKZJPTCUWERXINTGFEKSWFLGIWSDNCKITLBUXHITDRWIEUOLPBVUNZOBNEAKCRIQYBJVOZULMOUYOZCQZMXJKIEMGVFLZNQHDGVTHSFTOGBFAURNHJKAIRRHBABYAGYQSVBSPWTXLAUQMAZXSMKHCNHOGCDTAXFIYPEUKWVDJMNXPZXASYFFYXGMCPDGSLQOYEYLFZCNQFUWJRVVMWD");
    msg.dist = 0.324171171905;
    msg.err = 0.650855017072;
    msg.ctrl_imp = 0.64456098674;
    msg.rel_dir_x = 0.250753639715;
    msg.rel_dir_y = 0.602820804501;
    msg.rel_dir_z = 0.295871784292;
    msg.err_x = 0.504201827469;
    msg.err_y = 0.834262336513;
    msg.err_z = 0.791752811686;
    msg.rf_err_x = 0.717416205506;
    msg.rf_err_y = 0.57725089581;
    msg.rf_err_z = 0.0367364749741;
    msg.rf_err_vx = 0.297438125493;
    msg.rf_err_vy = 0.780165278796;
    msg.rf_err_vz = 0.054052825546;
    msg.ss_x = 0.892553862168;
    msg.ss_y = 0.524020950835;
    msg.ss_z = 0.227645257148;
    msg.virt_err_x = 0.365664129034;
    msg.virt_err_y = 0.911983893265;
    msg.virt_err_z = 0.580898421152;

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
    msg.setTimeStamp(0.359820220274);
    msg.setSource(558U);
    msg.setSourceEntity(124U);
    msg.setDestination(38823U);
    msg.setDestinationEntity(133U);
    msg.s_id.assign("PZQWPNPFZULLHLCYYXFLVNPVSJDCNKEUTQBQRCJBXOEBGIASNFJTNRYALSZQVUEFSBRTLQEOOIMZQIXBSWJMVRQGFPLYESJDCIEDJRXXSDMBLVARPVAKGKWIOKFQZGNERCATUIGCOXZUYCUFAKWDADGHJYQZXMNTPKOGDXUMAXMWWYWALPYTDAWBIKOHTRHMNU");
    msg.dist = 0.64547391848;
    msg.err = 0.0859351754073;
    msg.ctrl_imp = 0.788651763407;
    msg.rel_dir_x = 0.985709989067;
    msg.rel_dir_y = 0.437777283097;
    msg.rel_dir_z = 0.449880395479;
    msg.err_x = 0.136506561734;
    msg.err_y = 0.184054010384;
    msg.err_z = 0.347030679475;
    msg.rf_err_x = 0.836012503908;
    msg.rf_err_y = 0.037649081557;
    msg.rf_err_z = 0.611177100838;
    msg.rf_err_vx = 0.799555630748;
    msg.rf_err_vy = 0.281628863887;
    msg.rf_err_vz = 0.0589121167638;
    msg.ss_x = 0.0984413748497;
    msg.ss_y = 0.454396327883;
    msg.ss_z = 0.0594909427953;
    msg.virt_err_x = 0.283611209569;
    msg.virt_err_y = 0.326221452228;
    msg.virt_err_z = 0.590584489925;

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
    msg.setTimeStamp(0.957912988);
    msg.setSource(56610U);
    msg.setSourceEntity(76U);
    msg.setDestination(50926U);
    msg.setDestinationEntity(64U);
    msg.s_id.assign("NUJBRFGMBLEFECZKXLDMINKDLNPOVYGTYUZFEDMIFSOTSJJHJDREPAMGAKSCQAQAHXOEHCAHCLSKPHIWLTCFJXHFDSCZNMWBOPQTBVFUIEC");
    msg.dist = 0.584145288115;
    msg.err = 0.628360678848;
    msg.ctrl_imp = 0.344977308317;
    msg.rel_dir_x = 0.33012490081;
    msg.rel_dir_y = 0.229732375296;
    msg.rel_dir_z = 0.172540709884;
    msg.err_x = 0.0751267176766;
    msg.err_y = 0.338335419835;
    msg.err_z = 0.96772637914;
    msg.rf_err_x = 0.353288328775;
    msg.rf_err_y = 0.625791623855;
    msg.rf_err_z = 0.508187079524;
    msg.rf_err_vx = 0.613005081567;
    msg.rf_err_vy = 0.678942448609;
    msg.rf_err_vz = 0.632424617329;
    msg.ss_x = 0.106322821003;
    msg.ss_y = 0.29140703539;
    msg.ss_z = 0.965439622332;
    msg.virt_err_x = 0.793024957797;
    msg.virt_err_y = 0.511373784739;
    msg.virt_err_z = 0.65559395839;

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
    msg.setTimeStamp(0.231720031495);
    msg.setSource(43659U);
    msg.setSourceEntity(189U);
    msg.setDestination(10329U);
    msg.setDestinationEntity(63U);
    msg.timeout = 24536U;
    msg.rpm = 0.227869226234;
    msg.direction = 152U;
    msg.custom.assign("BQYABAGJUVOBWAWNVLQWZRLJPHHBBIGKKEXRWMNKYOEJQTBWHYGYLUWLFOAAOFDSRVNALTPNMDQFLEIOCNFSCRAMUIJCXTQGDQPKLIERLFVHOJVXS");

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
    msg.setTimeStamp(0.84592462311);
    msg.setSource(12928U);
    msg.setSourceEntity(121U);
    msg.setDestination(26145U);
    msg.setDestinationEntity(75U);
    msg.timeout = 16738U;
    msg.rpm = 0.038864145055;
    msg.direction = 46U;
    msg.custom.assign("THQWOUPJZTVH");

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
    msg.setTimeStamp(0.129403693793);
    msg.setSource(37036U);
    msg.setSourceEntity(116U);
    msg.setDestination(40295U);
    msg.setDestinationEntity(69U);
    msg.timeout = 25703U;
    msg.rpm = 0.318880039002;
    msg.direction = 168U;
    msg.custom.assign("DYMAGMXKPRNRDLTXCTMFNCALVJWJEGSQEZHRLJQPULGPSTVFABXDUUQLHKREPQYXBXDI");

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
    msg.setTimeStamp(0.680007575075);
    msg.setSource(22687U);
    msg.setSourceEntity(254U);
    msg.setDestination(48830U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("ZRTAWJNMZSNVETMHEMYUOWPRWYISHNFNDKNYZWFOBIADMGQTCSRVSZBEJZQHLEFPMFLVBUROOXUXXHPXLYKXCTJDBQQAGHGPJKQCZAPAWLBIXUOUEPJYHIGOFGZHCOKVARDBUKJRCRMJXVIDJSQVCHZJYLIKLOENCUMSBSANQTDIXCOWNQTBZDBFCSAYXSBTWLH");
    msg.type = 139U;
    msg.op = 79U;
    msg.group_name.assign("HNKVNLIPTSZTEQQXDXBTYJEKHTNCKHOHNARWMQOPUYODOXZJFRLEQWCHBGSPPBFOUKVXHSLHYYAKZHAPAWCTFGJMBYHXJRYKCSUYGDBDQBBCIUQRFADEOEWSXZRUCMILJFJNAHNLN");
    msg.plan_id.assign("VBUGNZDPWIXMFFIJCEYYYODYJMUCTKQXQBIGDAMUKSVHHMVBGCFJZPYDZKQTATSERCDJFINGHQBYZPLXHVPZAUYRRAKIVGZUQLHANWUEVRXGMPNKZPMMTRVFSJHUHWZRXJGJVMTGQLOPOCSFDQJUJXLHPOCWOXGWOFBTDSCILETUEKVNENIPNCYLSWEGNKB");
    msg.description.assign("WPTXWOQKDORVSAFNKZACUFHTLSBJQNNDPVHXVSCNMOHRYTUBJCIUYEIWIBPOGXXOVREZQSRVDRTYIYXRDRZHFKWNLCIZMAJRBPYQNKQHFEFKKAEXLQHLIEJZIGTOFTLPYCGBZDABKOWPZSIJFDVXTNMSWHM");
    msg.reference_frame = 131U;
    msg.leader_bank_lim = 0.651582724013;
    msg.leader_speed_min = 0.34521658595;
    msg.leader_speed_max = 0.393489335105;
    msg.leader_alt_min = 0.797561209234;
    msg.leader_alt_max = 0.740366781464;
    msg.pos_sim_err_lim = 0.262948520242;
    msg.pos_sim_err_wrn = 0.399932719909;
    msg.pos_sim_err_timeout = 64334U;
    msg.converg_max = 0.0603836165051;
    msg.converg_timeout = 60498U;
    msg.comms_timeout = 62220U;
    msg.turb_lim = 0.480196488051;
    msg.custom.assign("BZXAHAFFOLKETPBOUPWMEDNXYEPNTUZHJEMF");

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
    msg.setTimeStamp(0.821766734299);
    msg.setSource(50116U);
    msg.setSourceEntity(173U);
    msg.setDestination(6488U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("REPWVVLHQKALUXSMWYJWTDENSSYAEHRONRGBNTIXLIKJLUMXYTOXUDONYXYPAOJELSRMTUSNHWZIRIRPCDNBVFWLCCARQJNPUHTGDPVZHZNOCHNJMQASDPHBKLYSMQZCARFDIFMNBAXJFTGFIWIJXBDQEVEETVOZWECGXJGGHXRPYJSBUQOFUTQIWDSFAZHMUWSAYGCJKCLGIYQAZZMMKYLFZKEZWCPBBTDTBOURXVVMEOCIUPKFHFVK");
    msg.type = 4U;
    msg.op = 77U;
    msg.group_name.assign("HKPXIYNPVVRKYUSRBIDZGYEEEGCKBITEIWYGHKXUBHQGXDCIQVLBWGFCIPVMJMVAPPPDHJOK");
    msg.plan_id.assign("XACOUXSPLMXQEUTDLMDSIHZGVARIGCBWPWLFDOJBOHQFFXKBSFBMBMTOGZEUHDMSKZYDIQOXEORYGRRVRENUNLQWNDWESZTHWHHPEXGQLIFPUJAAMVRDVWYEWPMJSDIGXVYVGUCAKZHESZXNCFZTJL");
    msg.description.assign("XYHSXNRVMEKXINRGMGNHCPPMQQQ");
    msg.reference_frame = 76U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22053U;
    tmp_msg_0.off_x = 0.105042187761;
    tmp_msg_0.off_y = 0.909575620266;
    tmp_msg_0.off_z = 0.708994064952;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.818788235912;
    msg.leader_speed_min = 0.595511982451;
    msg.leader_speed_max = 0.522116056519;
    msg.leader_alt_min = 0.914006583339;
    msg.leader_alt_max = 0.955582669974;
    msg.pos_sim_err_lim = 0.677240377995;
    msg.pos_sim_err_wrn = 0.0535919154249;
    msg.pos_sim_err_timeout = 50969U;
    msg.converg_max = 0.515879284007;
    msg.converg_timeout = 32196U;
    msg.comms_timeout = 45938U;
    msg.turb_lim = 0.498293494253;
    msg.custom.assign("PYLCRWUASSJULDCWMSFILEIXMXJKYIDDEIERZVGVFUGYUHPTWWCOBZPYUKVYGACEGGRQBNPCVRTSDZCBDBQICSRSCABJRTTXOMVFJRZIQTMF");

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
    msg.setTimeStamp(0.950186977851);
    msg.setSource(8071U);
    msg.setSourceEntity(215U);
    msg.setDestination(16681U);
    msg.setDestinationEntity(35U);
    msg.formation_name.assign("OBQTSLGBHHNVXADGJCWRWXPKOYXNPIAUOBXSUESRVHKZALTIYLLUWHWFGAAQFRDENUKLKELNTLUHFWOFACNILJTUHGIRCGCPJOYRJPNXVDMOHZXIEEEHDFCDPVQCFVTCKUMMHZYJWSPMTIQYCQIIEWKKAQLZGQZSR");
    msg.type = 45U;
    msg.op = 68U;
    msg.group_name.assign("UWAVJGMGKKMRTQUEJMOWHKVPBHWLHQJKUJZXLXVEISXDXZRRNPSLNFUNKPKDYWITTJUYLCOCHIQBANMZUTBZGVUUJOBYCVSGQPNYAJBSXCDOGTRRDVCYPXWYSKRPFVESHRVBMIWDUDPCOCELDFANGEIDHTTCOYUOFLCMQFRMYFNOHEXZSFIISWQYAKGFQLBTZ");
    msg.plan_id.assign("KCJTTPZVSVTCZLMSPOBXKXKRMYEDQSVYWSFODJYMQICZQEUZVLEFKJXUTDQNYJHGTFKGEHFVNNTUZLWHNSFAONLYJBRSGXVPTROXZFPESTHUYWKGBHFIGGCIAZUKGZRCMMJLHJULAINBCQIYXABAOBRWMLEBIMNFGKNZZGQCDAWRAVYRDLYIPQDQEYDRPOVHQTJPMLENSIWUEHPBXWOJDRSDFIKQPOA");
    msg.description.assign("PBYQCMLZXDUMEHDMIJWDFIYBEKIOSVYBTBCGILBLIEAMKCZRGOQPJWXONBUWXRJEOXYHPCDTFUAMSPFQOZJTJJVAFDZHPZTKQQJLCXGVHAGXSTHMZMSNRLLHSNOXLJPVXYFAEPNWXAUSRDEAKUEVKNRKJOQROQDKITANPREHIMQWPSADVOWCAJSHZTGPBSLZVHWZYYU");
    msg.reference_frame = 252U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2320U;
    tmp_msg_0.off_x = 0.564193538901;
    tmp_msg_0.off_y = 0.679289131467;
    tmp_msg_0.off_z = 0.659702825539;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.381692512685;
    msg.leader_speed_min = 0.886946634927;
    msg.leader_speed_max = 0.426707109481;
    msg.leader_alt_min = 0.505020584061;
    msg.leader_alt_max = 0.429628797689;
    msg.pos_sim_err_lim = 0.775356676595;
    msg.pos_sim_err_wrn = 0.810957926768;
    msg.pos_sim_err_timeout = 9164U;
    msg.converg_max = 0.246663290946;
    msg.converg_timeout = 33905U;
    msg.comms_timeout = 19836U;
    msg.turb_lim = 0.429801846116;
    msg.custom.assign("UXQVKTJFJUDUACZ");

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
    msg.setTimeStamp(0.800147908808);
    msg.setSource(46224U);
    msg.setSourceEntity(2U);
    msg.setDestination(13285U);
    msg.setDestinationEntity(193U);
    msg.timeout = 64767U;
    msg.lat = 0.24508477066;
    msg.lon = 0.20373451862;
    msg.z = 0.310010759586;
    msg.z_units = 190U;
    msg.speed = 0.882879526519;
    msg.speed_units = 63U;
    msg.custom.assign("ABLDPYECHQEJPRAWYBHPYMMBOTOQLIEOVTZYVRZDAFTRPALRPFOSRLYJXNNWGTZSIXILOJOUXDFBGUZXHCHVXBAHRWWUKMKTLSDEKTDSMDSFGMHQZMGCGPHDFZAFXQJZEXHAVIWLUNXEGBITXQBYPMCZUICEFSOWHVONZWQTPPDVCDBMMRUKSWEGKJKJNHKJFRUCUEPDJCNFXSARTIQIUIAQGAGCQNVLZOONKUNSVNCEWBLTMKQGY");

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
    msg.setTimeStamp(0.260878517373);
    msg.setSource(16243U);
    msg.setSourceEntity(35U);
    msg.setDestination(20761U);
    msg.setDestinationEntity(127U);
    msg.timeout = 53261U;
    msg.lat = 0.438011972254;
    msg.lon = 0.341287759907;
    msg.z = 0.560514406023;
    msg.z_units = 154U;
    msg.speed = 0.540734784564;
    msg.speed_units = 16U;
    msg.custom.assign("URBYXWPSUXXTRDWDSBAQYFQVOSLIEBIHUEXXZSHUPYEMTAQ");

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
    msg.setTimeStamp(0.256995802556);
    msg.setSource(23114U);
    msg.setSourceEntity(16U);
    msg.setDestination(64235U);
    msg.setDestinationEntity(60U);
    msg.timeout = 28802U;
    msg.lat = 0.309431007578;
    msg.lon = 0.989412046597;
    msg.z = 0.404151079613;
    msg.z_units = 96U;
    msg.speed = 0.486295695403;
    msg.speed_units = 244U;
    msg.custom.assign("EVCJXGOZBRXKTMWKSHSGPRXCXRFPXJUAKNCRFPFLPROBEGYASPLNZPBZNSZXOGIUVEXKLBBTEOSROGTWJWCOUWIPIVDMVBQFIRDKYDPSHNLEUIPBUJMIABEHIXUTLJIFRYZPQNJHSLVLMKTYZNIHVTFUDXUTCGJQOHGAYAHHIYMEJAZKDNSDTCQZKAQYFACZFGFYWQZWU");

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
    msg.setTimeStamp(0.0964126850786);
    msg.setSource(27654U);
    msg.setSourceEntity(13U);
    msg.setDestination(41311U);
    msg.setDestinationEntity(235U);
    msg.timeout = 43343U;
    msg.lat = 0.112914905863;
    msg.lon = 0.870495256789;
    msg.z = 0.385556622208;
    msg.z_units = 164U;
    msg.speed = 0.795805242231;
    msg.speed_units = 229U;
    msg.custom.assign("RLWESEXQTZDJZWBSPDJXHHBXHMMYAQTJORMFUSXVUABVQFAMKFVYSZYZNXZTOMQDGUCOJEJLGDARONPMPDEODUWMV");

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
    msg.setTimeStamp(0.850565330748);
    msg.setSource(38018U);
    msg.setSourceEntity(57U);
    msg.setDestination(583U);
    msg.setDestinationEntity(137U);
    msg.timeout = 34538U;
    msg.lat = 0.75312491834;
    msg.lon = 0.199426188822;
    msg.z = 0.969048266491;
    msg.z_units = 151U;
    msg.speed = 0.343375726212;
    msg.speed_units = 17U;
    msg.custom.assign("HFMCMNVGFWTOQAZKZKEYURQJWFHVZSLARIXWXIRZIHJHUNSXMXUOKKYXLKOCZRITTDDDLVTCBMVP");

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
    msg.setTimeStamp(0.840711887535);
    msg.setSource(19813U);
    msg.setSourceEntity(83U);
    msg.setDestination(1691U);
    msg.setDestinationEntity(248U);
    msg.timeout = 16281U;
    msg.lat = 0.771531798903;
    msg.lon = 0.302965750388;
    msg.z = 0.088648458991;
    msg.z_units = 146U;
    msg.speed = 0.917882635564;
    msg.speed_units = 39U;
    msg.custom.assign("NAZUWAJCVKBDQBDTILRBGPNZTSOOGHVCXVLRVMNLYTYTMAIEYDXXFPKGFQWYCXTLNCJCZJHWTTSFUWXGJUDMZAFCPQYLWXAEGUDVGNUHMXVTXMISRHPBRXBLDOYMDLQPFLSMINUHGSLZFFNBZKOJAQBAJBPPZKHIRVCKOEIVWKGBRGFWSJEEKARKWHZFOILZSUQSOPFNNPPDQ");

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
    msg.setTimeStamp(0.774258892885);
    msg.setSource(57705U);
    msg.setSourceEntity(98U);
    msg.setDestination(63785U);
    msg.setDestinationEntity(116U);
    msg.arrival_time = 0.363954011041;
    msg.lat = 0.163770482513;
    msg.lon = 0.87612136249;
    msg.z = 0.611735880072;
    msg.z_units = 81U;
    msg.travel_z = 0.226851852842;
    msg.travel_z_units = 226U;
    msg.delayed = 140U;

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
    msg.setTimeStamp(0.902799406402);
    msg.setSource(64333U);
    msg.setSourceEntity(120U);
    msg.setDestination(65391U);
    msg.setDestinationEntity(106U);
    msg.arrival_time = 0.922635736639;
    msg.lat = 0.929931336663;
    msg.lon = 0.843630308546;
    msg.z = 0.106417936118;
    msg.z_units = 188U;
    msg.travel_z = 0.244679889444;
    msg.travel_z_units = 60U;
    msg.delayed = 64U;

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
    msg.setTimeStamp(0.789625249119);
    msg.setSource(2159U);
    msg.setSourceEntity(141U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(208U);
    msg.arrival_time = 0.300542030743;
    msg.lat = 0.471249295593;
    msg.lon = 0.836283551947;
    msg.z = 0.207908081188;
    msg.z_units = 47U;
    msg.travel_z = 0.975188386919;
    msg.travel_z_units = 136U;
    msg.delayed = 158U;

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
    msg.setTimeStamp(0.999689775923);
    msg.setSource(13358U);
    msg.setSourceEntity(89U);
    msg.setDestination(57711U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.462803992509;
    msg.lon = 0.726880400969;
    msg.z = 0.145935500704;
    msg.z_units = 53U;
    msg.speed = 0.0575621949514;
    msg.speed_units = 7U;
    msg.bearing = 0.5862603155;
    msg.cross_angle = 0.389952374471;
    msg.width = 0.0273098010797;
    msg.length = 0.22515169499;
    msg.coff = 253U;
    msg.angaperture = 0.227591119378;
    msg.range = 11719U;
    msg.overlap = 201U;
    msg.flags = 154U;
    msg.custom.assign("DZQHKZTLLQPUBQSTPCOXGLWIAKFLGWCPNVQDJCKUSTYELHCANCVQWGVTKZJUPPXZTNOVQRREYRKXJYZHEMRFIVSORVBVJVERBWAUYSNUCGDMRXYEPROBKESAAXJPLQTEYJUBDSMNCSFBIFLDHOWHAUHIQDFRMEFABSDFEIDEJYOQMGOMZSGTUMIGCWNYH");

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
    msg.setTimeStamp(0.464795808611);
    msg.setSource(39976U);
    msg.setSourceEntity(228U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.595109425913;
    msg.lon = 0.0858957753167;
    msg.z = 0.454983134895;
    msg.z_units = 62U;
    msg.speed = 0.093637458859;
    msg.speed_units = 21U;
    msg.bearing = 0.219554398556;
    msg.cross_angle = 0.448725404284;
    msg.width = 0.98158401442;
    msg.length = 0.211165923265;
    msg.coff = 214U;
    msg.angaperture = 0.734255155347;
    msg.range = 32408U;
    msg.overlap = 224U;
    msg.flags = 8U;
    msg.custom.assign("FYAUNHNMKRSZYMLPKBCVQICSOMRGIGSKWIYNWLYJQRGBEKWLXXNHMJNFLGCGZFSEECDDBMATUIHHKOOQZABQGJRQLTNBLJTIOPWKVYOMIEIGFPJGEURLBFSVOBJTCDXEEZQTEVSBPXZIVVMWIKSITXSZWVUHFFTPBLDDUPZNXQQVSYTRAXPXZQOKJTDDWLUMUNCFQGVJFZAXUTCBRPODOHECYWUOJNWAVLKPASC");

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
    msg.setTimeStamp(0.73761890514);
    msg.setSource(53419U);
    msg.setSourceEntity(169U);
    msg.setDestination(10141U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.800999360191;
    msg.lon = 0.137459095061;
    msg.z = 0.898021037145;
    msg.z_units = 129U;
    msg.speed = 0.91580466356;
    msg.speed_units = 169U;
    msg.bearing = 0.136059238232;
    msg.cross_angle = 0.230646905613;
    msg.width = 0.0596209252296;
    msg.length = 0.00868906300923;
    msg.coff = 175U;
    msg.angaperture = 0.485893224187;
    msg.range = 28422U;
    msg.overlap = 83U;
    msg.flags = 43U;
    msg.custom.assign("AVCKECEEXWWYKDERXIQ");

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
    msg.setTimeStamp(0.982410516885);
    msg.setSource(10159U);
    msg.setSourceEntity(238U);
    msg.setDestination(28141U);
    msg.setDestinationEntity(134U);
    msg.timeout = 9302U;
    msg.lat = 0.312093780733;
    msg.lon = 0.833479290433;
    msg.z = 0.981147750346;
    msg.z_units = 248U;
    msg.speed = 0.383247959088;
    msg.speed_units = 131U;
    msg.syringe0 = 175U;
    msg.syringe1 = 251U;
    msg.syringe2 = 19U;
    msg.custom.assign("JDHVEJUXZSMOELHBFGVUPQUXGRHWDJJAXWCNBBJRCSIHEDPRJFOXRITBZRYRTTNKZCFXMIYIKTHYIDPAUXQLNGPCPIOOOCEHKVMUJCGHDYMVODEPLYCISAEGWMUMUEEOPKNQHFCBIXAB");

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
    msg.setTimeStamp(0.674857919758);
    msg.setSource(4897U);
    msg.setSourceEntity(217U);
    msg.setDestination(60959U);
    msg.setDestinationEntity(121U);
    msg.timeout = 40426U;
    msg.lat = 0.0752904083851;
    msg.lon = 0.183948892376;
    msg.z = 0.982803916723;
    msg.z_units = 125U;
    msg.speed = 0.694792833765;
    msg.speed_units = 119U;
    msg.syringe0 = 248U;
    msg.syringe1 = 166U;
    msg.syringe2 = 126U;
    msg.custom.assign("COHUAGHIXDOYFVUGMZXFGRSRRKGPWGXJJPAWFDBWECKMJKEZTYGGERNLPN");

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
    msg.setTimeStamp(0.618878701324);
    msg.setSource(29309U);
    msg.setSourceEntity(131U);
    msg.setDestination(29682U);
    msg.setDestinationEntity(225U);
    msg.timeout = 18110U;
    msg.lat = 0.276565063132;
    msg.lon = 0.428957725004;
    msg.z = 0.325110588868;
    msg.z_units = 232U;
    msg.speed = 0.500207501307;
    msg.speed_units = 131U;
    msg.syringe0 = 241U;
    msg.syringe1 = 101U;
    msg.syringe2 = 249U;
    msg.custom.assign("WFAERJNCYGCRVWXGXICDXFLCMILZJVTENTZZPBFXQQIHVOXJOZPFHRQSZJVESLBNOFXOTUCCHAGLJDSYKHTIDNUUWJARLGAICJUBBKVSQTEDLXIBTCVUUPMALXEWLOIMHOYUTZIONMYOZGRGKKQBTWSWYPNSFVRTQPQRYSJPEQDXKBK");

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
    msg.setTimeStamp(0.814787061752);
    msg.setSource(42032U);
    msg.setSourceEntity(182U);
    msg.setDestination(42706U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.712299035477);
    msg.setSource(60955U);
    msg.setSourceEntity(12U);
    msg.setDestination(16904U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.14981206739);
    msg.setSource(21104U);
    msg.setSourceEntity(119U);
    msg.setDestination(9875U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.627197989495);
    msg.setSource(20633U);
    msg.setSourceEntity(240U);
    msg.setDestination(50942U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.566304478103;
    msg.lon = 0.352007225079;
    msg.z = 0.596789666416;
    msg.z_units = 226U;
    msg.speed = 0.0385405788607;
    msg.speed_units = 214U;
    msg.takeoff_pitch = 0.401953767565;
    msg.custom.assign("FZQPUSUDRRYFLWCUNVEOKSIVNWCHDLKAMCYLXCOHIMWPTGXFCJIGFRIJTRZIGXVUJJNPZYBPDOBRQLEMBQUAJTFYKJPM");

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
    msg.setTimeStamp(0.236967567779);
    msg.setSource(41347U);
    msg.setSourceEntity(180U);
    msg.setDestination(5587U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.340347878687;
    msg.lon = 0.588805996109;
    msg.z = 0.211276501627;
    msg.z_units = 243U;
    msg.speed = 0.662198712993;
    msg.speed_units = 63U;
    msg.takeoff_pitch = 0.462376178057;
    msg.custom.assign("XGDURFWARFZWICLQETZEIUDGYUHUCETKHYFRESAOTRXJWULEOWQLRCXQNPQAUTGMJGFEBOBJNMPVVVCZFXXQLQMOBGYKHHNRZCRWUCPADKERTETASDZOKJYBIPPGMGSINUDWJHBLGFVIWMZSPSOTDBHMYR");

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
    msg.setTimeStamp(0.508254524755);
    msg.setSource(4847U);
    msg.setSourceEntity(228U);
    msg.setDestination(15981U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.442460639758;
    msg.lon = 0.289164010908;
    msg.z = 0.35663692535;
    msg.z_units = 22U;
    msg.speed = 0.771869036499;
    msg.speed_units = 8U;
    msg.takeoff_pitch = 0.204149948656;
    msg.custom.assign("PFWZPUSAAJPLLVZGIACYBJIQWFANSFHJYPPEEUECHQIRDYEWOUGCLMZKMVREVWHYTPLAGVHGQKHBJNWWVDWKABG");

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
    msg.setTimeStamp(0.0961164396896);
    msg.setSource(45266U);
    msg.setSourceEntity(75U);
    msg.setDestination(11946U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.870489096183;
    msg.lon = 0.126357682149;
    msg.z = 0.169817590195;
    msg.z_units = 227U;
    msg.speed = 0.313751124565;
    msg.speed_units = 164U;
    msg.abort_z = 0.958122321207;
    msg.bearing = 0.572051454778;
    msg.glide_slope = 84U;
    msg.glide_slope_alt = 0.577652593214;
    msg.custom.assign("WYLUNWEZSYALBGEHQTGTEQERBZASKGCKHVHCMFJPULUCXQLNCNWJUXYOCOROFYIZZMEDNKUSBKFBNDXCWOAXKOGFFBJUTEARQFTCAJQLJCFVIWSPRSQQFMDBMUIPEUEQKAEMGCNSTINYQJAWFZHLTAIAKZMYDTRXZ");

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
    msg.setTimeStamp(0.126116080456);
    msg.setSource(13363U);
    msg.setSourceEntity(99U);
    msg.setDestination(7931U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.436801893988;
    msg.lon = 0.142509868993;
    msg.z = 0.5489738385;
    msg.z_units = 55U;
    msg.speed = 0.324399243318;
    msg.speed_units = 89U;
    msg.abort_z = 0.0394458995096;
    msg.bearing = 0.764240746168;
    msg.glide_slope = 184U;
    msg.glide_slope_alt = 0.677198522017;
    msg.custom.assign("WURMVCGJTBAFZOEOFPBCEHHUPFBRFRJUGVQMSTHRTPDQABOZDDTZBWNMGQOYHBANUEYLZNLTSWQSGABKHXCAJQXOMDONRGIKHYZCDSIIWMJECCHAXTIMSFAXBVFEZJPKODXPTUDGOBQIURYS");

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
    msg.setTimeStamp(0.453320043542);
    msg.setSource(24521U);
    msg.setSourceEntity(207U);
    msg.setDestination(62589U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.842608795231;
    msg.lon = 0.280879890014;
    msg.z = 0.188548718485;
    msg.z_units = 207U;
    msg.speed = 0.181930277484;
    msg.speed_units = 23U;
    msg.abort_z = 0.90012525765;
    msg.bearing = 0.753317496584;
    msg.glide_slope = 28U;
    msg.glide_slope_alt = 0.309503770179;
    msg.custom.assign("FKHPLZREBMHICJFDEIBPGVGSBNSZWXXMMZTUWEPWTQGLJAGYGZLIHPYTQKQTQASDFSBWPHXQUOWYXUIPCEVMLSBVYMUOEEXWKWBBHHFIFJDAKARTIDZEQMHGPOQNVXOMXURGLLTDFFWSFOTEIBNHJEOTHQVQSJNVWABC");

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
    msg.setTimeStamp(0.463075084171);
    msg.setSource(36870U);
    msg.setSourceEntity(53U);
    msg.setDestination(42970U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.532316110192;
    msg.lon = 0.980576444586;
    msg.speed = 0.980393169257;
    msg.speed_units = 13U;
    msg.limits = 21U;
    msg.max_depth = 0.836093958119;
    msg.min_alt = 0.137599876763;
    msg.time_limit = 0.642500584552;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.660355559241;
    tmp_msg_0.lon = 0.0122127726663;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OTILNLVVPBWSQQIDRUGHTRXJAOUZCHHQIHVQWDRXUWNGPXWRFIZDBBAAHGYXYSTWZCKRYLBFQPXNWJKYLCCKWFJBHFCKVUMSDIXJAQBLLMOFVXBYVKXKWUASMQEBLWNAEJDGDKXQJVIUHYZSNTTOOGGHRODKPPZWIMYMFIANBGVOOVPMTZYEGHYCFNRPJEFOECMJASAMIPKHGRCMSSZUPSCTUDCFMJGQEE");
    msg.custom.assign("EPXPTQLOJPBEEKQVTJOTHWXYEEMNQCHYTQFSTPTINKNOAUXADFNG");

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
    msg.setTimeStamp(0.885609850413);
    msg.setSource(56937U);
    msg.setSourceEntity(161U);
    msg.setDestination(15584U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.345175715012;
    msg.lon = 0.139149434358;
    msg.speed = 0.926884788965;
    msg.speed_units = 163U;
    msg.limits = 241U;
    msg.max_depth = 0.141795700986;
    msg.min_alt = 0.875582252599;
    msg.time_limit = 0.151598370801;
    msg.controller.assign("CRJWQVIANWOGIDGDRNIGVRKAUEVRIATLFGOMLEJUOHQNDTECGIVOUJKWWLUYPOZDKBMNUTVIBGUODTTN");
    msg.custom.assign("LQWHPEQIKFLPIAODYFGNKKVQULWKFSAPDNQBXNUWNOBCIUVYXQNIIIXTORHABMXPLSYXNSVSESMIXTGGPVTSMBBDCGFGLIXXDGHBAEWJZZUQOX");

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
    msg.setTimeStamp(0.8537385215);
    msg.setSource(21978U);
    msg.setSourceEntity(126U);
    msg.setDestination(25058U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.784125911512;
    msg.lon = 0.277039547913;
    msg.speed = 0.0221844440373;
    msg.speed_units = 50U;
    msg.limits = 160U;
    msg.max_depth = 0.80534681631;
    msg.min_alt = 0.822461696992;
    msg.time_limit = 0.811467160033;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.289048715251;
    tmp_msg_0.lon = 0.629288631856;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("CSNXHVZDVLQYBDMFPCHBHYUXNOZBEHXWAUETER");
    msg.custom.assign("KDHUBQDPHTKKEYVIBBHMWKSJPCGTSSOZDAFPSXKFVMXWLIJJXCHMBQHXPDOFYCKJJXIZTQNFMVYSFZCREVBBOCCRWSWGBSQOHTLMELZRMARUWRRFEOLMIGUNYXQIJUKENRSJFXEDAHPHBRUODLPTUKFZTEDVIQAUGLXFUAHNWCZOJGQLXVOYRYMJIRWMGNATCUZKTYLANQVGFPQNBNYHGYEXJGPPTSOZWAYNTOUCAECDQADBKVZGWPIWLDELM");

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
    msg.setTimeStamp(0.370979055608);
    msg.setSource(53421U);
    msg.setSourceEntity(218U);
    msg.setDestination(40787U);
    msg.setDestinationEntity(161U);
    msg.target.assign("DNHSETXFAWWGVXMTJIQGHCGYTENXZBMFQLZDPLEHORTYDJVOWSNSGLJQGPHMIFUPEEAVIBCWPKRUYVTBBIXJCXXPQKOTPGCSYAKYNFIIOCSNNYXOAHGWIXDAUQHPFKJJTWVHTYSADYWLIRHBZFMLNXZRLLROJUPUEQCQRNPMNYAQZRSDCDZNVVFMCPWECUZQKBYBHLXSE");
    msg.max_speed = 0.428762970058;
    msg.speed_units = 142U;
    msg.lat = 0.0337081620289;
    msg.lon = 0.121572451808;
    msg.z = 0.835038929205;
    msg.z_units = 134U;
    msg.custom.assign("HAWFTNOZJZGFCGBAIRTXOQQBYWXPULESIXQJKRHNSABYBLZVRLCVAMWTWRQJIGPTDFDCBDILOFURDONMNUENJJONZKTMDBUPJ");

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
    msg.setTimeStamp(0.80757911891);
    msg.setSource(24849U);
    msg.setSourceEntity(158U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(103U);
    msg.target.assign("DDNJBERJTBWXBUAWZOFIWGAAYCJYJKLCQSMSLKRVILETIM");
    msg.max_speed = 0.548875061587;
    msg.speed_units = 150U;
    msg.lat = 0.084394313194;
    msg.lon = 0.76683723223;
    msg.z = 0.360416546712;
    msg.z_units = 15U;
    msg.custom.assign("WRJOGMUVNQAJVKCKYOQWWWMVFUPFPYPY");

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
    msg.setTimeStamp(0.385816286323);
    msg.setSource(15393U);
    msg.setSourceEntity(74U);
    msg.setDestination(60401U);
    msg.setDestinationEntity(181U);
    msg.target.assign("SJWMYRSHNIFFQZATYDEQHKCTCQDGIKRQLJFDWRWJMHZNSROAVMMJEHRPCGBILINEKWBOMVDHYBFBZZMLSLUCVFEKKYHYQGCJHGPZWSYACNDYDTGOAWTTSUFWMEXHDJVBIHCMNDLNAFNXTEGPVQAAPXVLLVPMAGUQUXBWQCXUIXUVBGLALDRBHIZONJPKQWXIVLOZCZRPTJXBYFFYKSZPSE");
    msg.max_speed = 0.386197994556;
    msg.speed_units = 129U;
    msg.lat = 0.564807617837;
    msg.lon = 0.28970476018;
    msg.z = 0.0805787113269;
    msg.z_units = 168U;
    msg.custom.assign("XLNNXDCPMTSTIKJDXZGLXYBEEIYHITAXRCQPZVAVEICIXOJTNEPOCEVGFSJUGZRJUAEGPSAWAIPCNHPDREHWRBYBZPTGHDLQVWTRSBTNYFQBJGIOWQUJRKSKDMFTSVUKINPTQCBNCOMDXOVVUWYZGKRJJFRGIACLOVUD");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.216046842754);
    msg.setSource(62671U);
    msg.setSourceEntity(179U);
    msg.setDestination(49090U);
    msg.setDestinationEntity(183U);
    msg.op_mode = 67U;
    msg.error_count = 220U;
    msg.error_ents.assign("XQSJYIESPENKKLSMGYCUHJVJPQOOLXHUWLIRRPSMMGCPDZQNQKKTMCQMVQHVLKHDNNOGTXHKUTAUMHPMPBWSANVXSDCVBRAOYYABKENJTCUABXDIUEUDEQVYXFTTIODW");
    msg.maneuver_type = 5536U;
    msg.maneuver_stime = 0.591850991795;
    msg.maneuver_eta = 41977U;
    msg.control_loops = 65231763U;
    msg.flags = 239U;
    msg.last_error.assign("UXBQDAXONIHBBGKTBWUAHOXIXURNMDIQABXMTRGDDVJMYVUDJQFYSEYIOMJTTANUDYCPWJOCWGJAZZKLEBGER");
    msg.last_error_time = 0.0737418663655;

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
    msg.setTimeStamp(0.575461041478);
    msg.setSource(23745U);
    msg.setSourceEntity(37U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(174U);
    msg.op_mode = 76U;
    msg.error_count = 12U;
    msg.error_ents.assign("UFCZVLFNOHVWRYHQPMQHHYFSMWKYBQSBNQJQMVEFZHRIKEXQGWNCWTSKRZQLDJTBNFSFPUIOZEMAIRDJDLKHVZGCOPUNTSJGGJYDNTTQWANOJCYTSFYXTLKHGCBGZVONRGKERC");
    msg.maneuver_type = 28820U;
    msg.maneuver_stime = 0.594960284497;
    msg.maneuver_eta = 18752U;
    msg.control_loops = 3652591698U;
    msg.flags = 30U;
    msg.last_error.assign("BZTXYMQVKOHBNRCUSWQDLDOJVWQSU");
    msg.last_error_time = 0.756089032244;

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
    msg.setTimeStamp(0.0591968690274);
    msg.setSource(60834U);
    msg.setSourceEntity(212U);
    msg.setDestination(6498U);
    msg.setDestinationEntity(49U);
    msg.op_mode = 56U;
    msg.error_count = 76U;
    msg.error_ents.assign("OYIGEQQMEOLLRQFKFMVUVRPGCJCXPZXSBVJHNSXPRMSM");
    msg.maneuver_type = 40817U;
    msg.maneuver_stime = 0.733974419247;
    msg.maneuver_eta = 37589U;
    msg.control_loops = 3753199150U;
    msg.flags = 128U;
    msg.last_error.assign("EHOKHAXKJUNXMXZKDISQOSBPZQQFODKSQFRRXFORUZJOFTXMLB");
    msg.last_error_time = 0.876871172089;

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
    msg.setTimeStamp(0.533352563892);
    msg.setSource(28135U);
    msg.setSourceEntity(41U);
    msg.setDestination(59819U);
    msg.setDestinationEntity(64U);
    msg.type = 133U;
    msg.request_id = 38795U;
    msg.command = 136U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 22013U;
    tmp_msg_0.lat = 0.124720700001;
    tmp_msg_0.lon = 0.659438913437;
    tmp_msg_0.z = 0.0896006898978;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.speed = 0.692367645631;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.duration = 30700U;
    tmp_msg_0.radius = 0.62308513958;
    tmp_msg_0.flags = 7U;
    tmp_msg_0.custom.assign("NHNBLBRVLEYNVEHDBFOKDCJJOORHVBILNKZF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57420U;
    msg.info.assign("CUWDLLAMRQETKTIFIEHFGVYRSOQYFPNIBRHEAVOANDKORWSKPNNEMHSQSBIYKXNOTFBWASLDXTXGOMGLYSOFKYZTJFLGEHZHKLYYFWMRRSWUPZFMAKJEIIMZWVMTFOPQNAZCPMSGBCDGAWZTXNWICPACZRYVTCCZJLJHQJJVIMQYUAGBUORXPLGLQJNDNMDJXHRNQZAPDPRBC");

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
    msg.setTimeStamp(0.900155936844);
    msg.setSource(23238U);
    msg.setSourceEntity(28U);
    msg.setDestination(32636U);
    msg.setDestinationEntity(125U);
    msg.type = 141U;
    msg.request_id = 25030U;
    msg.command = 120U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 22668U;
    tmp_msg_0.name.assign("AKGJOIFUAIXZEFYZBOSFLDLFRMSUOBMGMGTMSVWAOMZJJVWUDRAQVPSYBUKDFWQADBKZQPTIIGRLSHJHSXZFKIXILHOZNLOYBEVGDZYADYDTMBKJPCUQXFIRRWNMJHNTKIOOSQHCNIBJENKPFANEZPRKEQYBXTDSGEGEXCHVKNGQVBCZWTCUTWXLBUGHQHJTYRPTWLRCODFMNJVYALEEGMPFNCNQKS");
    tmp_msg_0.custom.assign("GRCEWLQSRSSUNJGUGTJFJIVKUXPTWCFMUDFNDKGNZOKUNAEUXPMCHZVFZAYYBVYTXLZDKUBBBJIOIIGMQQNFZVMBYETEEXICGXIPWZGHSXKZNVJTKQZNRSHZADSOLURUAAPNFPTQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42795U;
    msg.info.assign("QAWVVXETCLLYHTEOABYNSCWXOFTHUPXSGXFARLBVBCNDFKDVRDJLRAMMCXHVCEDAEBJUGGIEBAUQXBZHTTFMHYLIZDQIISPQGSMGZNNXNIVFKHEVSKUUFEXWOZAWCOYRILPJJYLEIKUKRBMTGFEMMNDLPGOKYNYSLMTSNUDHULTIWZCZKXFQGPCVKNYJJZRSXIEMPRGJOKYMZWDVVOWZIPSZBWQQHQJOORACPDHPCB");

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
    msg.setTimeStamp(0.78231429012);
    msg.setSource(13477U);
    msg.setSourceEntity(42U);
    msg.setDestination(22842U);
    msg.setDestinationEntity(74U);
    msg.type = 250U;
    msg.request_id = 21346U;
    msg.command = 155U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 14696U;
    tmp_msg_0.lat = 0.317972602325;
    tmp_msg_0.lon = 0.921303518013;
    tmp_msg_0.z = 0.225367935839;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.amplitude = 0.574236251423;
    tmp_msg_0.pitch = 0.51062903394;
    tmp_msg_0.speed = 0.387870416016;
    tmp_msg_0.speed_units = 99U;
    tmp_msg_0.custom.assign("LIMLXTNZXAZIPNWKWYLJOZYVJPAKOQNMTSCFVKCBGNCAQCRMUWJZBQPKEFHGVNUELZXZKKHHVOMPZCSSOEWKRANTNPHJUAFIYOOPLZECOPVEHSPARFBGTHYEYHOKQDPHIVBDOQRSCUAIXXQUUMLJLGOXRVFIEWXWXSIWWYJNREUXDPFRLCHMRSBMCTYTMDLBTGZVJZYRTDFDQJBJNVKQGAGATHM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32946U;
    msg.info.assign("FIJEOYRIIDFBOBNZWIROWDODDMWGUYTPTBAGACTCYTSRSNWMLZCRCNMPMGCNBQESUCHJASSOYHQHKAXTQVQMRPEERLJHAWGUCBUUXVMQBJCLSNOFHUPBHVYDIXKZGJZVOXZVVC");

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
    msg.setTimeStamp(0.296736433509);
    msg.setSource(46194U);
    msg.setSourceEntity(150U);
    msg.setDestination(4122U);
    msg.setDestinationEntity(22U);
    msg.command = 192U;
    msg.entities.assign("QSYUCBICDHBRNQJZHIWCKBVAGHAWDZQOYGMJPRXNFWCSVXFXHWXSQWLWILHTSYTXSLKJNFVQTSMBLVKWBOTVJNUOKGQYRTSEPPFHPQUOMFGBDROMYPARNRGZEJTDFCWLKUTZZLNVEGGYNGAGNODUQOMDQTOHMDKFRXAOLSAZEWHBOSDPXWIYJEBCAUFJIZEXA");

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
    msg.setTimeStamp(0.105974697489);
    msg.setSource(52572U);
    msg.setSourceEntity(242U);
    msg.setDestination(51891U);
    msg.setDestinationEntity(151U);
    msg.command = 25U;
    msg.entities.assign("XPHXGAPVKFUOBKDSKPYUECWSVTSJPRLQZYZXEWTFRTGYNUGKPZTYDCZDWFJWHISROPMBYSMQOULKNQXHKECTNWFJBZLUIOTDDIQEQLTCEOIVVIHOIJZJIHYMKDFAXNLUFNGVAGHRMKMDOXXCICQBJ");

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
    msg.setTimeStamp(0.407925070044);
    msg.setSource(58121U);
    msg.setSourceEntity(63U);
    msg.setDestination(54894U);
    msg.setDestinationEntity(253U);
    msg.command = 252U;
    msg.entities.assign("TIWEXXCMOARGCHEAQDWPGNQRJZCZREIHPWRNJDNBZOPESLZJJJLQLFUJQQVWKDKYCTFBVSERLIFQSXOQHYZIUAIZIRKWXPDOFABRVDNXENGIHEZGBHIYHLCVSVAVOCYYUMSDMWQSMANDPEGCUYLSJZVCVATHFAJTIMOSUOKAFWBOSMJLXKPZDGMXQVBUXVMPNTQUHROTDFRWCNAWZXKCNWLGFKDNYOBGSHJTGUTPKY");

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
    msg.setTimeStamp(0.0807480054644);
    msg.setSource(26503U);
    msg.setSourceEntity(207U);
    msg.setDestination(54353U);
    msg.setDestinationEntity(166U);
    msg.mcount = 229U;
    msg.mnames.assign("OJJYRJCQBEUNCPZENJEKLKSGKLMLRUBOMDYUPLLFJNATNUZSZTWGZHYGXPDYSIGIDFULXHJWSTVRSQZLBODOOSDHUXODZFETWVHJZTHUIZYSKFICMFRBTXKEIDPBAYKPWJJQCGEVYUVZHLKCLFVWICQSANRRGTITPWXVVCMFJUSWGBBMBTOXXGONCVQWBYKE");
    msg.ecount = 5U;
    msg.enames.assign("JRCYAZRQISSCPFNTBEAKWKLNLBRPQHDTXLUCDWQLIFCWZRNXSNZFMZKVHMHGIPLUIQUOVCZCZUJGWTHNBMTOMWQBGOHVRGRGVEXXWDKOQOCNG");
    msg.ccount = 241U;
    msg.cnames.assign("TQGFJHXCZEFFUVTJPWKDAGHAEKQZATWXGQYJYPLGFBYYNGYZLRSSJDZFIVJRMWIEJOYDFIAPCXKGCWFNOPPHAW");
    msg.last_error.assign("ALTELIGRMDHGJEOURMTMBP");
    msg.last_error_time = 0.00463353789559;

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
    msg.setTimeStamp(0.205316832979);
    msg.setSource(46540U);
    msg.setSourceEntity(105U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(142U);
    msg.mcount = 42U;
    msg.mnames.assign("VRDNPNCPEJTVNFMSYKPOVEGHAYOZOWYKHNWSFSUKALGXQRDJALXVGSUPRGMFJEQXIDDEZIMMZBAKMZIJQTZDTRELQYDNPRYGIIZAAWNBUXSLVVNNATZLPHSZOKQGLMIXQKFZSWXUPHSTECBXCXVGXCB");
    msg.ecount = 24U;
    msg.enames.assign("YZIWLKYAVHYWHDUPFHFZVDDRBIHIIKABGLPOGQMXAQBNVYAAPJVFYCTPUSVNMBFETUPDNMRBOZSHMKYWZOEOSCRGVXUWSEOALGCAPYRAUGLGWIJLLZZMRTAPVWQEKDXKUNJNKCTFJJJNEPXIWTXIQEKUHQORTSCOQJCXNVDMJAQSFTWJDSTFHBIXHVSOVCZPKBEGZBZZHNQCBRYXMYUQSKXIIEXLBRNKTLOFHGUGCYEFOMJQCWDPMMNF");
    msg.ccount = 64U;
    msg.cnames.assign("KEHLFIKAIJYJDZOQHYRRYQECEZYNPNBKSTAONVPMDELQFFAZKKXSKUIEKYVPDYPMNETCUWBCQNSLHITNIOBRHTGWAGRXILPENESJKADLQBUGHUDDIOHCBFVEWNLHYOJBRWVCJRWMMOUJWHFXQMPOMYGCTGJFDMTHDZSRKMQWUOWGRBYFB");
    msg.last_error.assign("ZIHOCDPEVNCPQUQMKVYVFIFVIPJJDHATQOEROWEOBLEMDWNUCJCFMBNVXMULXJTZWBAZJSHWADFMISSANHKTOIGST");
    msg.last_error_time = 0.1171882187;

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
    msg.setTimeStamp(0.664754728671);
    msg.setSource(44594U);
    msg.setSourceEntity(221U);
    msg.setDestination(41656U);
    msg.setDestinationEntity(181U);
    msg.mcount = 113U;
    msg.mnames.assign("YSGUBDVUECOANDJQRKHOQWMIUJWBKJVPZBDBRTAUGVLUJPIBTLMHNGJBTEYFFTXJCSPDRYYAUXROPFYCKEYXNZOTHFVMZHEEPIUFVEFQTFNBQFQJNPSTDZOTXSAIVWNMMCZXQFGQLSOXSDGOALNWPLVVYIMBUJKHXSGRRBZNEHJHODPMTRWWDACSNLWERPZIZHZAYVLTXOUGPKMOWZCGHCWKARSXSKAKCUNGYF");
    msg.ecount = 16U;
    msg.enames.assign("GEJMJGBXKBQROOSTYHVAAZUJSCZCPBBEDKTCJKGRFAESNSRGNCRWTSHROEKLXLTPPYYVVKJBLDIUDCSCZTMMYVMIXTNSUPMQLKHEIUQNYVUKFINS");
    msg.ccount = 34U;
    msg.cnames.assign("KFCJSXCGLPICHBGHNURKOXUKOFFUJVPVQIGHFYZFFAMWJZOJQOEGVTZYMTPRJIFACHWWTAPHNTBYYULTAEZIIPEJMCQFUAOKRAILAMUDTCTDWBUQHAUXKQBHAMVSQWFNWNWYRLBKZHZNWGYDEHUDVSEDJSXMKRXEESERMV");
    msg.last_error.assign("QVJXKLBRTQDPQOIDDYZWRDWUSMDIUOXEOSQGBFICHXEPGIJONHGQBEKVEARTOVWPEVOJMHSNFDXYYVWWRVKSTUJUZYOOTPSFXQCVKZBGASAABNDBRFMKKJIQWQPUIHAYCFQKRFUEEBXMFLLJPAUIKZBLFLCLZXNALM");
    msg.last_error_time = 0.58444961633;

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
    msg.setTimeStamp(0.537524984451);
    msg.setSource(29726U);
    msg.setSourceEntity(88U);
    msg.setDestination(2462U);
    msg.setDestinationEntity(253U);
    msg.mask = 228U;
    msg.max_depth = 0.103660688922;
    msg.min_altitude = 0.357694714552;
    msg.max_altitude = 0.501822901935;
    msg.min_speed = 0.520461880209;
    msg.max_speed = 0.55623060167;
    msg.max_vrate = 0.728591765387;
    msg.lat = 0.85555421942;
    msg.lon = 0.940650113109;
    msg.orientation = 0.131515295999;
    msg.width = 0.212799264627;
    msg.length = 0.998811828427;

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
    msg.setTimeStamp(0.978942243992);
    msg.setSource(58615U);
    msg.setSourceEntity(60U);
    msg.setDestination(28254U);
    msg.setDestinationEntity(71U);
    msg.mask = 54U;
    msg.max_depth = 0.467420063537;
    msg.min_altitude = 0.273796735087;
    msg.max_altitude = 0.743044852784;
    msg.min_speed = 0.178970996896;
    msg.max_speed = 0.410637362818;
    msg.max_vrate = 0.749326835241;
    msg.lat = 0.627425173503;
    msg.lon = 0.65023641225;
    msg.orientation = 0.741254451867;
    msg.width = 0.210476631616;
    msg.length = 0.836863884833;

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
    msg.setTimeStamp(0.497665460457);
    msg.setSource(17438U);
    msg.setSourceEntity(57U);
    msg.setDestination(33285U);
    msg.setDestinationEntity(103U);
    msg.mask = 183U;
    msg.max_depth = 0.474149210986;
    msg.min_altitude = 0.0343099085087;
    msg.max_altitude = 0.915263724163;
    msg.min_speed = 0.715346360876;
    msg.max_speed = 0.660323972123;
    msg.max_vrate = 0.315741146685;
    msg.lat = 0.689249644995;
    msg.lon = 0.600306437487;
    msg.orientation = 0.412611280366;
    msg.width = 0.755185715834;
    msg.length = 0.706358370122;

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
    msg.setTimeStamp(0.424314876268);
    msg.setSource(21399U);
    msg.setSourceEntity(226U);
    msg.setDestination(49195U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.00535881665418);
    msg.setSource(9080U);
    msg.setSourceEntity(233U);
    msg.setDestination(55683U);
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
    msg.setTimeStamp(0.0779180639196);
    msg.setSource(57836U);
    msg.setSourceEntity(176U);
    msg.setDestination(42159U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.749851198084);
    msg.setSource(10182U);
    msg.setSourceEntity(180U);
    msg.setDestination(62082U);
    msg.setDestinationEntity(86U);
    msg.duration = 7353U;

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
    msg.setTimeStamp(0.635408841066);
    msg.setSource(18157U);
    msg.setSourceEntity(226U);
    msg.setDestination(41447U);
    msg.setDestinationEntity(211U);
    msg.duration = 64320U;

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
    msg.setTimeStamp(0.488048201409);
    msg.setSource(6419U);
    msg.setSourceEntity(37U);
    msg.setDestination(3076U);
    msg.setDestinationEntity(163U);
    msg.duration = 57736U;

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
    msg.setTimeStamp(0.891889810771);
    msg.setSource(63014U);
    msg.setSourceEntity(4U);
    msg.setDestination(56467U);
    msg.setDestinationEntity(43U);
    msg.enable = 52U;
    msg.mask = 3645246958U;
    msg.scope_ref = 1929453110U;

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
    msg.setTimeStamp(0.483585361085);
    msg.setSource(38500U);
    msg.setSourceEntity(133U);
    msg.setDestination(51756U);
    msg.setDestinationEntity(243U);
    msg.enable = 59U;
    msg.mask = 1067634614U;
    msg.scope_ref = 3969421350U;

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
    msg.setTimeStamp(0.308715349861);
    msg.setSource(4594U);
    msg.setSourceEntity(133U);
    msg.setDestination(56105U);
    msg.setDestinationEntity(200U);
    msg.enable = 197U;
    msg.mask = 1360473531U;
    msg.scope_ref = 2027702938U;

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
    msg.setTimeStamp(0.185206952499);
    msg.setSource(29710U);
    msg.setSourceEntity(109U);
    msg.setDestination(6859U);
    msg.setDestinationEntity(181U);
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
    msg.setTimeStamp(0.721939934049);
    msg.setSource(28024U);
    msg.setSourceEntity(182U);
    msg.setDestination(54194U);
    msg.setDestinationEntity(124U);
    msg.medium = 174U;

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
    msg.setTimeStamp(0.611373096565);
    msg.setSource(49603U);
    msg.setSourceEntity(211U);
    msg.setDestination(33018U);
    msg.setDestinationEntity(115U);
    msg.medium = 215U;

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
    msg.setTimeStamp(0.168506514782);
    msg.setSource(49484U);
    msg.setSourceEntity(115U);
    msg.setDestination(56218U);
    msg.setDestinationEntity(141U);
    msg.value = 0.617423597189;
    msg.type = 125U;

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
    msg.setTimeStamp(0.623321982107);
    msg.setSource(24398U);
    msg.setSourceEntity(119U);
    msg.setDestination(42421U);
    msg.setDestinationEntity(178U);
    msg.value = 0.00779367971709;
    msg.type = 15U;

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
    msg.setTimeStamp(0.416590972989);
    msg.setSource(42663U);
    msg.setSourceEntity(104U);
    msg.setDestination(63021U);
    msg.setDestinationEntity(248U);
    msg.value = 0.856063610154;
    msg.type = 61U;

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
    msg.setTimeStamp(0.8851677368);
    msg.setSource(60983U);
    msg.setSourceEntity(164U);
    msg.setDestination(16876U);
    msg.setDestinationEntity(10U);
    msg.possimerr = 0.393554995851;
    msg.converg = 0.675219565558;
    msg.turbulence = 0.725689983512;
    msg.possimmon = 74U;
    msg.commmon = 111U;
    msg.convergmon = 14U;

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
    msg.setTimeStamp(0.622987325903);
    msg.setSource(48409U);
    msg.setSourceEntity(108U);
    msg.setDestination(13370U);
    msg.setDestinationEntity(87U);
    msg.possimerr = 0.660625600379;
    msg.converg = 0.735510704921;
    msg.turbulence = 0.979877609188;
    msg.possimmon = 195U;
    msg.commmon = 97U;
    msg.convergmon = 217U;

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
    msg.setTimeStamp(0.896962332326);
    msg.setSource(21958U);
    msg.setSourceEntity(118U);
    msg.setDestination(61624U);
    msg.setDestinationEntity(241U);
    msg.possimerr = 0.61450111678;
    msg.converg = 0.549977531003;
    msg.turbulence = 0.813577953659;
    msg.possimmon = 82U;
    msg.commmon = 239U;
    msg.convergmon = 154U;

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
    msg.setTimeStamp(0.323656763517);
    msg.setSource(13922U);
    msg.setSourceEntity(156U);
    msg.setDestination(51520U);
    msg.setDestinationEntity(125U);
    msg.autonomy = 198U;
    msg.mode.assign("YOGXUKLWIMVQTGHLQTRJWEADUEGGBJPHKLUELUHADLYJUNTVMNEVKESZZZRAAVSQUAMCOMWKNPPFJTCLRPNOQKPISBLFRQCVGNOZOOJDCCFNRXAPGHGBXIXDNNMNAFIJDCRJXSRWFT");

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
    msg.setTimeStamp(0.0497932640054);
    msg.setSource(60460U);
    msg.setSourceEntity(36U);
    msg.setDestination(37823U);
    msg.setDestinationEntity(27U);
    msg.autonomy = 4U;
    msg.mode.assign("WFNQSDMAGOQSIDICNXE");

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
    msg.setTimeStamp(0.584608188596);
    msg.setSource(24172U);
    msg.setSourceEntity(22U);
    msg.setDestination(3911U);
    msg.setDestinationEntity(167U);
    msg.autonomy = 206U;
    msg.mode.assign("ANIBNZZVSVUMKDFNLGXFCUSZRQCAGMCVLQXTYWTEUCGRVKWDFRORPHOSSFYLI");

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
    msg.setTimeStamp(0.531759023568);
    msg.setSource(50684U);
    msg.setSourceEntity(211U);
    msg.setDestination(32859U);
    msg.setDestinationEntity(236U);
    msg.type = 195U;
    msg.op = 248U;
    msg.possimerr = 0.740927378253;
    msg.converg = 0.718854987521;
    msg.turbulence = 0.771656101098;
    msg.possimmon = 0U;
    msg.commmon = 80U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.223295173065);
    msg.setSource(6841U);
    msg.setSourceEntity(159U);
    msg.setDestination(25239U);
    msg.setDestinationEntity(152U);
    msg.type = 237U;
    msg.op = 56U;
    msg.possimerr = 0.231881134075;
    msg.converg = 0.813413183564;
    msg.turbulence = 0.999078430372;
    msg.possimmon = 19U;
    msg.commmon = 182U;
    msg.convergmon = 149U;

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
    msg.setTimeStamp(0.362960909283);
    msg.setSource(40419U);
    msg.setSourceEntity(227U);
    msg.setDestination(53144U);
    msg.setDestinationEntity(131U);
    msg.type = 182U;
    msg.op = 136U;
    msg.possimerr = 0.913311206042;
    msg.converg = 0.675793428826;
    msg.turbulence = 0.78738250224;
    msg.possimmon = 163U;
    msg.commmon = 173U;
    msg.convergmon = 253U;

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
    msg.setTimeStamp(0.0473822893743);
    msg.setSource(11471U);
    msg.setSourceEntity(201U);
    msg.setDestination(32667U);
    msg.setDestinationEntity(228U);
    msg.op = 193U;
    msg.comm_interface = 188U;
    msg.period = 16122U;
    msg.sys_dst.assign("VXLXYVUTMYDMUCIKEUNNODHGFBYZQADAUXWVKZRAAHYENHJORSIZGFCJMCYGQNBNQWWVTPPKREIBRRYZYHNUHGJTBROZUCPDOAJWSVMTPCZMULKLTKEVWUQTOKXESLQJWFQANPABQBMMTCBHNXJXPZPGMJDLUOQHHLVDTISEMBDGHRTXWPIFJXARKRKYILDWEXSOTCPEOSGVBZKEGFXSDQGCVLCWHQLFFOM");

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
    msg.setTimeStamp(0.750958259184);
    msg.setSource(30822U);
    msg.setSourceEntity(127U);
    msg.setDestination(43910U);
    msg.setDestinationEntity(31U);
    msg.op = 130U;
    msg.comm_interface = 234U;
    msg.period = 47446U;
    msg.sys_dst.assign("FIRTZPGMSDXWVIUPTIZRIKRCHTABNYCKDJPQAGIOXVLWQESNRNZVEHDNBSOVKNJTALDLFUQPPIMS");

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
    msg.setTimeStamp(0.206983955684);
    msg.setSource(63599U);
    msg.setSourceEntity(95U);
    msg.setDestination(23384U);
    msg.setDestinationEntity(140U);
    msg.op = 229U;
    msg.comm_interface = 153U;
    msg.period = 53226U;
    msg.sys_dst.assign("BOMFSKHLUEPTGPFSZNJSGXZSQATQWZHSUYLVAIVYHKWUIFBASXLRVOWQZLFYNIGKUKURNWTCDONAXOWACPZMVSVYBEJZPWUWHDBQRVGBDHFYONADEPWCIUTGIHGCQERTLEXJKMBCJNPJLRHCQQMOZMMNXHD");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.698968216043);
    msg.setSource(16696U);
    msg.setSourceEntity(68U);
    msg.setDestination(24005U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.307060233974);
    msg.setSource(45722U);
    msg.setSourceEntity(105U);
    msg.setDestination(18892U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.927042589969);
    msg.setSource(38727U);
    msg.setSourceEntity(152U);
    msg.setDestination(4491U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.404208400104);
    msg.setSource(55667U);
    msg.setSourceEntity(154U);
    msg.setDestination(4613U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("PZQJMVQQYINKCOTZWRQCKCGCUGDKLSUGBSWPTJALKWJBJXGOHHPMVRATEDEUHGIYVYMLORIQYPASCRITQJCDEQMOMAXMVKNTNFHLDWHAWTOKMBFIDDLWNFYPBHUYDNNRSSTGDVXPIMXZUHLFKYSAIPZRXTEIUYUCYFNVTGDBZBOZZZVEAFFRGNLQXMHZCWJVHLAWKXTRKQWJJULKBCPJBCGOBNILVEQGPOMOFSOAJEUWXBYSUDXE");
    msg.description.assign("SGWJYMRYPSUPQVWYJPSBOOAVSHXZTVCXCFWWJPOLGZMMUBLIGEFFWTAFUECXUNMDDLSMAHBAIJILODMFLFVAKQYYDNOCOZDCSEQGAVKKDKHEEYJZQNITSUKVFBVGDFMMGCXCQPJBBZZRILJR");
    msg.vnamespace.assign("ITVQPJGPQDMVFQQDBTKZZSMHKAENGAXRUDRLHKHVAGVCWQMIWZAKLRSJBULRGCVLYNNIOWAEXNSZTBTIPFPETUKXJWTTBSCAMPFJHGGCKFOVXJEVYDEVEUXJPDYNRZLHLI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EFULLQPBBEPGBIOIXGTUHRGTXVYYSOZNKVBJTHFKBKSACPZCIZQDEYUYDDZ");
    tmp_msg_0.value.assign("IWZTEAKLEATRYGAQFIZRGTUEOBCKXWKRHCHGPSSXRHLDLAFHNPILRKFFPWYDUPQABYARYWMONFHMSTMEGSYPAQNIIUPHPSLSWWDSYJJXZOLGXFVWYUSHDVUVNVRKBRBVKZTMQMZKGEVPZNJIIIW");
    tmp_msg_0.type = 192U;
    tmp_msg_0.access = 24U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QRKCUVMXUPASBMNZRZIZJJRSNNEVPFOEIPJCGOWSQUPHYGRLIAJAVHFXRRZTRUZWNHDJSSQKXMITFFEYYPEKLJXWCJDARJFOFLETBVBFWCAHNVBIETWVKEQEMCQLMLHHWAKSHRZWSDZIDYXFNUQYYCPVCAOHBODGQWOGX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HIHLXJGMASKADECYZFXMPSXBXQWTPILKBHVSSEQPAAJUTKCQFQQDPNWHAYXSPLNGGHMEMVTPCZGIFKMRVUIHOLUSJBREOKWTNANJXUBHGAUFCTJNIQCBJCDGAEGFSWRFWVSURDDLNKVNPWJIPLOYDF");
    IMC::Land tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0618879451561;
    tmp_tmp_msg_1_0.lon = 0.405630397093;
    tmp_tmp_msg_1_0.z = 0.911561795754;
    tmp_tmp_msg_1_0.z_units = 226U;
    tmp_tmp_msg_1_0.speed = 0.930546013245;
    tmp_tmp_msg_1_0.speed_units = 9U;
    tmp_tmp_msg_1_0.abort_z = 0.78577671764;
    tmp_tmp_msg_1_0.bearing = 0.874991290129;
    tmp_tmp_msg_1_0.glide_slope = 42U;
    tmp_tmp_msg_1_0.glide_slope_alt = 0.290943119626;
    tmp_tmp_msg_1_0.custom.assign("YJYTPGNTOEUHUAUEKSQSBHFSZHWAILGEASCLPZYXVTRZUADXDOCNSNJCUCJCANWFIBINBMKJUEHWMDGPVRTFPYXFMOZPFPQHHEBULVUAXFQFJCNVVGJVDIQMQIKMGGGRKRXNMRIJSMHGYKSWABTYTIOXQWOXAWBLZPDBMXODBPRELUNUPRSAZQNEOJVCYFSQAITFKZDMHRQHBEJLLQT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("AGSKDQTNKCDVPNQVEECMOUPIMSSFVWKZOKNQBAJBLMFFHANMRCJSZRNLQUDBOSOUWDKWYUXZIGUKXSIHOLQAOBZCLRQRAVHVCMWXIDRHSOFVTHYJVUZNFKKXGJUHZIBBGREUDGNLHGYEEGPYCGRINSWXHLDMOXXFLMRFSJMZETJSTECWCGNJLQPODABKLZPJDAYXWPZOCTNXDPCWYQUTRMFMIHPTAIATBQWTWEPLGTJXE");
    tmp_msg_2.dest_man.assign("CGIIIHPJHPKMPYLANRUDQLOUTRVYXUJDHVNILSAHTTRWXDGVVKMJZARPXQQFCRSALHQZOBPQNRKFCKUAMRBDPFJIWCSENUGSGXTVLEHLDWWRQWKVJQBDXQPZJLPTNGCKPDBOOJFYDFBJZGVZHNIOUCEFYWNWMZRECMTGZAXJGIIYSEIHMSNELB");
    tmp_msg_2.conditions.assign("TZDKYWJMLBXRGUHYTNCGSXEOOPIBWAAEXXOVUZELMXIXBSCPVWOCMHQQIFUHVDKVRKKOCFIBYMJTOYSIYIHMSIAWNBRTTFNU");
    IMC::RestartSystem tmp_tmp_msg_2_0;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::PlanControlState tmp_msg_3;
    tmp_msg_3.state = 88U;
    tmp_msg_3.plan_id.assign("WPMWVVMIDQRYXZPWVFIIVGTMRXFABPYOMKNSWJEVLLKNC");
    tmp_msg_3.plan_eta = -501013703;
    tmp_msg_3.plan_progress = 0.442490680252;
    tmp_msg_3.man_id.assign("PFNMIRFHMEQGYBDBKCTLWUVQULJBOYECEETLWMZZGFAJQTVGOUSWEMLY");
    tmp_msg_3.man_type = 56341U;
    tmp_msg_3.man_eta = -405638342;
    tmp_msg_3.last_outcome = 190U;
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
    msg.setTimeStamp(0.108493458479);
    msg.setSource(256U);
    msg.setSourceEntity(34U);
    msg.setDestination(2564U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("QKUAHWDBVXLAKZGCAGOJFZDGMOUJQCUREEYPDMIDSZNRXVVABFAAUEVMSDRCJPRYGYIEVSSTHSGGTOKNWJHTUMAAQRNCEWVHSEIOYIPXXDLBTIQLLPWFYCHDVOZXHHLBBRCQ");
    msg.description.assign("FRRBPCTRRBSJWKZUIEOPNDHOPZPNDFAIARFLNVSBALHIJLSGQLPUDFGOAZJJXRTOTKZVOVBCH");
    msg.vnamespace.assign("HYLMRGKHDNMOBLNXM");
    msg.start_man_id.assign("ELHTVTGRODMLODDZRJZPSYBDGWCYWFUOFXTLZBBHTEPSANFNZEMUDHDLPWFQIWKKKMLJJHCNLOEPUSZEPBIYSBNFPAURSOCKOVQZVNIBBAXUJRZASFHJAWKBWSSHVQYXGPTFWOTTGMWMLRASVAEHUUVQVFGJAXMRHIWKXJJPQMVFNFQNWIZPHAYMYSLMQGYKCNEDJXOHNCTRPXGGTXKQEDCIOLIKCBZGXUURORNUIGCVAEMCXQ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("ECQYIPNOVVGZRBJXWPXGISKRLDFIZGVRESUUWCRJAYLYQYOCBUAZEFBYWEDETVIQKDHLYJQXWBNKAEQKQZPLPJMYBCMTVZMZUFPTWOTYHMSNZRKHDQVOKNUCMGEJVJMXZWOSS");
    tmp_msg_0.dest_man.assign("HIIRBKKMGVXYJYPJWWJTWCFNZOHXLIXEULWXEKNUDNXTQWKLGOACAKJZMIPJNTNPMHOJARRWIIDGHQND");
    tmp_msg_0.conditions.assign("WIYKIVHZKRMBUCJBBDLXUQMGISSCFISELBINTEMHMYJYBHEDUFDQGDDSGTABSZVXNTWZXPCJMOGOLARXZEHXMKROURKPONAYDMAJQOZPQWAFYWKRVSDJWIKNCXFNONBJLGQTHRDHFWYASTGVZVPVUMQ");
    IMC::DvlRejection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 232U;
    tmp_tmp_msg_0_0.reason = 161U;
    tmp_tmp_msg_0_0.value = 0.376255343407;
    tmp_tmp_msg_0_0.timestep = 0.56517636716;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::DissolvedOxygen tmp_msg_1;
    tmp_msg_1.value = 0.22134145994;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.00113245884014);
    msg.setSource(859U);
    msg.setSourceEntity(160U);
    msg.setDestination(57336U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("OAWEZFXRWGGPKJELXYOVRILDSTHBULTONDHNCNEUHYFIKNSTXQRACVTRMLHERENMLDTGU");
    msg.description.assign("EGWAEKPQQDDSMULAXIALFGINJCPQFNCRFXNUMZJLGDRZOSZFXDVEJJOLJZWAHNYDTCRYQXELDODVHKVARXTSBZZOISUGLGWEXLDKMVVPECBWURFVKOFEHSAPNETPBBYTK");
    msg.vnamespace.assign("ZRUVGNEHDUPHVLPJIYSUWA");
    msg.start_man_id.assign("OEZEACTHWDZUAHOKFGVGIAEMJTTBSIKWESHXGCAY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AILGYXCNTYLETPEJAWWMSEUAFNZYWRHULSLCFJBIKPSUUCKMIAKLEVVPKZEKGZIVHEAWQNHRTNZGXOJ");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 32792U;
    tmp_tmp_msg_0_0.lat = 0.442626855909;
    tmp_tmp_msg_0_0.lon = 0.725545343303;
    tmp_tmp_msg_0_0.z = 0.307137781669;
    tmp_tmp_msg_0_0.z_units = 123U;
    tmp_tmp_msg_0_0.speed = 0.935786080252;
    tmp_tmp_msg_0_0.speed_units = 26U;
    tmp_tmp_msg_0_0.custom.assign("LOCYDCIRDNPQXQPXUWBSGAUMKAFNVMBPZIXGGSNNVLZRLEDRINYL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TrexPlan tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.reactor.assign("OOQSSGRQLAJEHFGIDUCLSRCLURZYPTWLFVKWNDPYNBFXXZPCXMGHVXNMZUNNODMGKWHMYQCFGARYRPIDETFYELHZVQQPJBZSWAJJGLJTZZYCWMEABITCAPSISPRSUNMXXHDNOWPKFIILAQXBVLTOJYWPZJKFFTORMOYJD");
    IMC::TrexToken tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeline.assign("WVAIPCMLYQDEDBLZSSFRKEQRRNPZLBTMPCCXFTFVORHFPQANEWUUEAUHDFAUCUGJJAYEDVNUBJPOM");
    tmp_tmp_tmp_msg_0_1_0.predicate.assign("ZETZXJANMICCDKAVKSDZWLQPUELBZXPLRDCLNNHZWQUEXKRSWFFGIIWRSEYMAPKGPRUPKNIRTRNGRQUAKBYKHBQAGIZJCWBVFXFOMUFJLHYSEWXPTCSHYBWISHTENFOGXHBZYCDGOXVDKSXDDMSUNQAMLVGGYJHYKBYPGXNFHFQMJDNSOVQJJUONDAPEJJDMYBOLUWIORTFIO");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.name.assign("ENEFADYGXZZRZEZVEA");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.attr_type = 7U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.min.assign("MFHDMWJKJCVYQNTLUSVJGOIKUGHSXTQBLLJECWEZROPCWKJRPBDQMBEDHNKVBGVMZYSKRDBSHQXQMEMJXXARMFSWHLHFVZKGQHLTRFDYNDZDCTBSIKJDAXTRSEHNXUYMNIYQBPAFISQDMUJRAPIGPONOVYXIYDQBZUCVUAXTHGZORXTSELPIEHSWQFUOWZCGJIEZLCKAWTWKAGMAVLPVRZGLCYOXUATIFBGNRPOOWAYVZPECUC");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.max.assign("YVYZIWFSXBZZEKTQWONHOLZHWOMUCBPIMJMQFXZHDOMKRELGXCEZEWAOCVTHAUXWKQALX");
    tmp_tmp_tmp_msg_0_1_0.attributes.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.tokens.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UsblConfig tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 203U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SetImageCoords tmp_msg_1;
    tmp_msg_1.camid = 107U;
    tmp_msg_1.x = 31002U;
    tmp_msg_1.y = 30307U;
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
    msg.setTimeStamp(0.101223526843);
    msg.setSource(23414U);
    msg.setSourceEntity(240U);
    msg.setDestination(43308U);
    msg.setDestinationEntity(181U);
    msg.maneuver_id.assign("QJKVYSJKPDGO");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 60544U;
    tmp_msg_0.custom.assign("QYXOCITNMINKEHFDUQDSBPECJBGPTUBUXMNLVYNZZCBBJWFGZOFOKMKGYETBJDCHWRREGKEVXZYDOZMFDWEA");
    msg.data.set(tmp_msg_0);
    IMC::Rows tmp_msg_1;
    tmp_msg_1.timeout = 30200U;
    tmp_msg_1.lat = 0.635420332062;
    tmp_msg_1.lon = 0.301159522802;
    tmp_msg_1.z = 0.579912591409;
    tmp_msg_1.z_units = 149U;
    tmp_msg_1.speed = 0.499757505343;
    tmp_msg_1.speed_units = 134U;
    tmp_msg_1.bearing = 0.415235342087;
    tmp_msg_1.cross_angle = 0.850770272057;
    tmp_msg_1.width = 0.330869851185;
    tmp_msg_1.length = 0.703337350086;
    tmp_msg_1.hstep = 0.138572522787;
    tmp_msg_1.coff = 84U;
    tmp_msg_1.alternation = 209U;
    tmp_msg_1.flags = 59U;
    tmp_msg_1.custom.assign("AHYXZFVGGDEIMICYYVILSEMAIAKPNDVYBVEOPRPGCQVXFFNTECKHGJZPDTOKBKFQHDZJNFCNNMLQLUKJRZJORLDKLVYSTUQXVETTENZHQSDUBYXHOLBAXMYIZGCDWSAYKLAPXMLUNJARBSWDXMSPNCQTJKNRWBLEM");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanVariable tmp_msg_2;
    tmp_msg_2.name.assign("PXOXCMPQRWAMYBSXFRCWPIADRQAAP");
    tmp_msg_2.value.assign("GOFTRBGIAULVPBPLRKZSZEMPQQLXBGWNPVQIJWSJKMKSSDAFAIACBUQUXEUQNRJJOHEDAPOKLMIVTUYKQWNHMDNNUTJIMOYXEDYYEWQXCVTPURYTKBXHRSZTYTTZSRGLXJNHBXTNVUHOZFWBKGTICYGFKCDWCRLAYXCAXGZYDQOEQSUJFFAFSHIOYZOVMCZVEJHREDA");
    tmp_msg_2.type = 111U;
    tmp_msg_2.access = 27U;
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
    msg.setTimeStamp(0.189278204425);
    msg.setSource(51284U);
    msg.setSourceEntity(20U);
    msg.setDestination(3034U);
    msg.setDestinationEntity(13U);
    msg.maneuver_id.assign("YJLBQSNASDQAFVVURNUNKOFPWJBZDLAGIACOXLEURCRERUAVLGJSQHSEWMTEWBPWFIZNTYVEZWFLTVUAFNTPXOGXOE");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.204504692158;
    tmp_msg_0.lon = 0.322908870269;
    tmp_msg_0.z = 0.382879007252;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.speed = 0.652795821379;
    tmp_msg_0.speed_units = 122U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.968653565008;
    tmp_tmp_msg_0_0.lon = 0.493408187912;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("IYIWALZKFQZGHEWBKXRQXPENNIDSDJNTPVFZSNDRQJFTEXUOMUOCOYECUODVAZZJSRYKOYUBRRVTJQXDWAHINGCXYJDVGUIXSEIESKYLKOZPVMGIMZRUQZTXXGOAFYENWHABLGTBOMSJPTVKCJCCLMPHNAWQKFOURHBTCRQLDGJGVYFSNBQPDBCFVAPMFHNPJUQFU");
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
    msg.setTimeStamp(0.361942225194);
    msg.setSource(35471U);
    msg.setSourceEntity(133U);
    msg.setDestination(30440U);
    msg.setDestinationEntity(11U);
    msg.maneuver_id.assign("ISAKXWKJXNBITHUBGRVHBADLFFEWYKRSUMUHDZJUGYIXFMIKXNYYVBJTNQPQWQCMVTRAWQNJZLKHBVSEZOTHBHNCPTWSPEEJIRYS");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 46729U;
    tmp_msg_0.lat = 0.117270362389;
    tmp_msg_0.lon = 0.200077134686;
    tmp_msg_0.z = 0.20043245204;
    tmp_msg_0.z_units = 58U;
    tmp_msg_0.pitch = 0.870881268557;
    tmp_msg_0.amplitude = 0.825849394763;
    tmp_msg_0.duration = 4307U;
    tmp_msg_0.speed = 0.369295467048;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.radius = 0.734469842511;
    tmp_msg_0.direction = 199U;
    tmp_msg_0.custom.assign("EVFFDJYHAHXTZIRKTQHMGQSSPSMZUNEGBXZYORODSAUFJM");
    msg.data.set(tmp_msg_0);
    IMC::Calibration tmp_msg_1;
    tmp_msg_1.duration = 6402U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Temperature tmp_msg_2;
    tmp_msg_2.value = 0.880173768523;
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
    msg.setTimeStamp(0.0178186554911);
    msg.setSource(39848U);
    msg.setSourceEntity(9U);
    msg.setDestination(25822U);
    msg.setDestinationEntity(47U);
    msg.source_man.assign("XIXLFIERAEVRGHEJFCYDMAVNXPVIYZTRITOAMQFEFVWXWZLCEWMKYMYSKHRAZFGCOTQVHHPRJGBZUGGLQHJHNQEGSIKOSZLGFYWAFKACKCNDTHVHXUUDPOBSSYTONMGYWPTYCSJWIFMTBOWRACOCJZUUBKZENALXCUQODIPEJCQTSSKOFEXQUBVYTZNJRRPIALMDPVGPMBVBJANQUZRVNIEMDMNDXNHWQBFDPI");
    msg.dest_man.assign("LROKQPPUEBVANDWTIKCFZKJMOQENUZSSGSGTJIUSHDWZXMTCCVTZRDLDCUYQOYEWBROQENENJCMRDXDMZYKYPGWMKKJQUUWBPARUGSSOCHZIFFRBMLCGZVTOEIKJJZDMMVAWBRXLPEYUZKAFHNTWNPHD");
    msg.conditions.assign("PEVDUDCAUXKCFYSBHNEYCAPNUZNZWHVIXEEUBVWLVAFTOMNVSVCXXRCDFZLJYUFLDDXJQYHDZUIQUHUDCMZJQYGLIQBAGUHGGLQHUBRPYERPOIKKQZTWSFEK");

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
    msg.setTimeStamp(0.86636275083);
    msg.setSource(30805U);
    msg.setSourceEntity(152U);
    msg.setDestination(1554U);
    msg.setDestinationEntity(31U);
    msg.source_man.assign("FUPCFOQTXUQACRKUGJGDIWTPLRFLWAHWLJXARUWTKQLZCKQRIMPSVDVZXAVBYVBVTCZIKAJLITNJKTQ");
    msg.dest_man.assign("DLMDCPSIMXFOUYZXFMGPDXBQBQHLLKJVLIXCLEKVJMQOPTQGVJIVOAKZNNSFJ");
    msg.conditions.assign("QSMZPAFMXYPLBALQJKCNKWGALZR");

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
    msg.setTimeStamp(0.939020756623);
    msg.setSource(43065U);
    msg.setSourceEntity(207U);
    msg.setDestination(55587U);
    msg.setDestinationEntity(11U);
    msg.source_man.assign("WRMSYTKNGVQIKUKREVYVKJMZAQXLDYAEIXSBMTGOQBXBRNGBSPIOJGHEWNKKDLTINSRZXOJHZMDMWPHQQAPAIWNYAWVZCOPVLYWFTRGTMOLAALMIBNDWUURGPEXEBNBIFIILHGUAMSZLPDLCGVWJBHKFEAKHVOVFQFETCNZCCJINPOGKPQBLXG");
    msg.dest_man.assign("WZUGKZDLWNSJGCOWCQBOGPZQRKFJCSZJPZZIGHIJLIWHUCPMDVYXPVJNRCPYYGFVEWPAQGTUMKSRLZJEOQTRQHMEHZWRIUNTTVGEIEBTDYAHGRODAOTIYKYVPVDDARSNBBRFKOHUTLSXLCAUWBNEYHJVXQTXVHDAGBWLAKNXRPMXFIBEFUBXC");
    msg.conditions.assign("RZXACMQRWOQRYIKVFOSXLWKZIBHJZPCRVDDCWFFVKSTMMNRDESJLCOJATPJQJAKPJIXOVOXZNJBR");

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
    msg.setTimeStamp(0.196264854357);
    msg.setSource(49761U);
    msg.setSourceEntity(252U);
    msg.setDestination(52937U);
    msg.setDestinationEntity(227U);
    msg.command = 117U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TIXIVCSHMTNXQPEUTZEGUXGEPRXVFWDSYKOBUYRCVDCLENVYFSPJLTHUBOKJFXALTQNAPMYFHQDOKU");
    tmp_msg_0.description.assign("MMHOIISELEAJMTVDOGKZFAIFZBZMQBPROEVXHWNVPCZPWIFRLFGFPNJTVYSAIBJWCGGQQRREXKTOURNYBYUDNQNUYDWQZZTSHJCTICGGUZRPRCYTFOSXGWXYWDAYKDDVAJTQDZSRCUBQLLIVMOLXPSWNOCBENKYMGKLXBSHMHEZBNTBJXJFRZHUWYVOXNFHOUSCKCOUHKDKLJRVIWTMDTHALGFAKFAGMPJXEYBUVEHXPLPUPA");
    tmp_msg_0.vnamespace.assign("WFRGIQBIUORBGCVHCEHSBHAFXIJZKTOOFTKJVQQOCLYKMWXCIJAXENVULVDMINDWXWKYTKHOYTVXYADRDONAXVNGTTSNRAULLAIJERMGWZPBYDYZBBVLWMCFFTWCHXNBPXHCIZHBDG");
    tmp_msg_0.start_man_id.assign("HSKYSHCHKFMTFSDGNJIGJKPGGEAGXDDLBUVSZTQJVTLFZQRPVZOMMIFRXNQBIWKFTUDIVOJNXAEZXLKWKSAQQNMPABKJNUEGSBCYSIWWANMBTDORMHDEYDSQVFSIYUFLCZFCBGANFWMOPGYHHNLGWCZLXIUCBRJQZCWPJVHCBMUKAIVQTWH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KVZPGGPNCSXSWJIDBSEAGPZDQTNKRQVTIBOHJPRWZFJPDAKQALPWAYDKW");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("TJMFKAEFPUVKXGGIY");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("GUMWRXQKRSKOTTHYBLOLVPLCIGHMPFQHDIUHSWAQZPKVZSZPXXJYFCBDKUMLDYNTDZVIRTFXAHUNQCMBLZAKNJMMBRNTWEJLFDMPYEYQEBFQYCPSUYMYRHQFELXDRAXSPAGRTABJTVFONLHOJECBJZAEMODTPCFTUBQWFBCBRNAXWFWKYGKASJRHVUEQUZSAVSUIPEY");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("YQHKOSWTXPIRMGWLTQZNOOKMBDLIJHHMSZEOVXIYRGJEFGHPFYDAXNQRKYVEJAFVFYWQUHZRAPBRKOCPULFRFIXPKNGLTPWYGJEQBNFEXZXFWVFBOT");
    tmp_tmp_tmp_msg_0_0_0.description.assign("PIXGHSVTFQWLKQLNPFSVUQBOEWVAJZTBBYZPHQUOJJRAEBMJDMUDCNUQOFIIGCWNONYOELITMXJLSFFGEGIXJCQBMKOQFAWFEFBAQCTCBGKEUMHLUHTCDFKQZDXZZBXIYZAZHSCRVDVAMIUSR");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.162982302269;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.290758491729;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.077279813688;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.0883266834384;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 26961U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.574906323257;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 57827U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 15144U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.65005901744;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CIIQYGKIWWLRSYSXNJATEEELXQLSROUDWMBKEMMZNOCHWNWDHVCLUOBGAAFYRATUQGUGCMBUUFJXTDVTTEKRSXMODSMKTTLZNQEQXQZGBCYXIKTPIZAZKZLCXIEBFEKICF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.duration = 34211U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("YMIJZEBNPUAQWORAAXJAQFCTCCVTHVOWOHUYVLKXGEXNQIOYYFJZLD");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FAMSGVJWGHYQEKDLOAIKPYSCITWKXKTDHHQABXCDNVFDFGXKZZXEJFYUAETUNZWVFWKBQLJCIBORURTGWFZPNVSTFZFWRZXOMOFQBULXLWRMANHJKJDVCATIODGGPBWMXNIPWRIZLMEHSESTSMHHDABOPPOBTDJCGYNPEODIUSZXQBRYVANZTSLIQEIKHLJLGPUUJZCNYYYFQ");
    tmp_tmp_msg_0_1.dest_man.assign("JGHANLTCEXUTZG");
    tmp_tmp_msg_0_1.conditions.assign("YNDRAOIGPLCMUDZEHQBTLLHQHQDTLSFFKDXEFRPLJHAUOSJVBYZQPUWYHEVYIFSIRYDORUZOQIACWSLMEN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CommsRelay tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.906243535258;
    tmp_tmp_msg_0_2.lon = 0.197073899553;
    tmp_tmp_msg_0_2.speed = 0.14614903084;
    tmp_tmp_msg_0_2.speed_units = 65U;
    tmp_tmp_msg_0_2.duration = 61598U;
    tmp_tmp_msg_0_2.sys_a = 3432U;
    tmp_tmp_msg_0_2.sys_b = 11495U;
    tmp_tmp_msg_0_2.move_threshold = 0.458095909209;
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
    msg.setTimeStamp(0.666614778824);
    msg.setSource(57368U);
    msg.setSourceEntity(58U);
    msg.setDestination(48072U);
    msg.setDestinationEntity(165U);
    msg.command = 162U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TIYSASEXZLICHZVYFVUKQYSJLLRIBLOMONNIMCDVSLCU");
    tmp_msg_0.description.assign("QBUXPZHGHMWPSUAWDOFNTCGIDRPHZJIVCUXAAECTTNIGSBYHLOKAXWGBGUWERDNBJCTBVY");
    tmp_msg_0.vnamespace.assign("QKDDHIBVXTOAPVJUSXTVOLQNYDZUYQUQTEIRRZZXHQWZ");
    tmp_msg_0.start_man_id.assign("AYJFZVQXZDHGWUMKQBAWNDJCURPUJOXNTDJFJMCAEEWYBETUOTLQNGYZELAZUQZSJFMSFODNBGGJUGBPSCBLBIUHXYERWJYIPQVGDSQDSAUMAFXKDXRMAXWYVLAGYNXRZKKBMAFPRCTDJZXILPGOOYQVKQPFPMEKPRHZXUIMRWGHHNOLSCTPOIWLSQRVHBSZMHCTDTOWVUVXFOHGHIEQVLIWNDCCKFNTICKFEVZTBMANIBPRCSELYWORL");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("PUXYMIQYMEOCUMZOKQADSZJLIFAADGROAYKOZGYKNXKIHPPMEZLBQLVVHSTXLIOSXESZDQAPFCQWHPWNCNGDCBATSKZQHEWWTVMTWGYKFUMGJARXRFZLKXTSOMCYLUDHRTHQROPFBIWKJREFJVKCYVUPYYVLBVADVUCFJLJFSDGLNQIOUGNYIBWMOX");
    tmp_tmp_msg_0_0.dest_man.assign("PSTPUNEZJQVYSEBGHCOEAETSKCLARIJFTEEIEALMNJXBVBVXFZADRFCUMELIWGNSRQTMGYXQHYUVHZIQCSFVLPWHHJUXJGXPFIKKDRDBYELVKBNKFZTSBOOAYPFDRFMAWFTUBOXWRCGUNTACQPGHHLSOWAUYQWJORIACZYVNJHEIJUCJTZWZSUDLQLTGSKZVRPKMIFQBBTAGMODMPORXDHNKYWLGMNVIBQVXOWNPZMCGNQUYKWKDXDY");
    tmp_tmp_msg_0_0.conditions.assign("BRMSUMKPMVSNHMZMFTVWEYNWHKZGLCVWZHGCRMVNJVHXEXNTWZUTOGPUBITTDKESFNAOABNLRQAHPJSTRZXGJLXEBKLTIGMUYDQRTIXQWWHAQBYGYPWSVPSGBKOKCXPQFXEDOXUYVDCBBOEGHVQZWEFNIOAKPCFUDNZKEAQSMNVDSTQZNHOEAACEQCJZCDRKMWPQKBBLUUS");
    IMC::DissolvedOxygen tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.819018104817;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::RelativeState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.s_id.assign("LHFJKDSRGXUJGZMRDJXDUBMSVHJOEGSBQPWRBOMBEWMCLKNBVORIGDKDCTIJIAVVQCZAUKCPPAORWQ");
    tmp_tmp_msg_0_1.dist = 0.667830879716;
    tmp_tmp_msg_0_1.err = 0.0597757213563;
    tmp_tmp_msg_0_1.ctrl_imp = 0.923875342974;
    tmp_tmp_msg_0_1.rel_dir_x = 0.0206865842074;
    tmp_tmp_msg_0_1.rel_dir_y = 0.155451021059;
    tmp_tmp_msg_0_1.rel_dir_z = 0.939115355494;
    tmp_tmp_msg_0_1.err_x = 0.537321347812;
    tmp_tmp_msg_0_1.err_y = 0.230569876868;
    tmp_tmp_msg_0_1.err_z = 0.0669250880903;
    tmp_tmp_msg_0_1.rf_err_x = 0.0433621864477;
    tmp_tmp_msg_0_1.rf_err_y = 0.84172079652;
    tmp_tmp_msg_0_1.rf_err_z = 0.275179491846;
    tmp_tmp_msg_0_1.rf_err_vx = 0.388597036024;
    tmp_tmp_msg_0_1.rf_err_vy = 0.533388210596;
    tmp_tmp_msg_0_1.rf_err_vz = 0.478668229286;
    tmp_tmp_msg_0_1.ss_x = 0.587915866742;
    tmp_tmp_msg_0_1.ss_y = 0.937374412396;
    tmp_tmp_msg_0_1.ss_z = 0.443656299429;
    tmp_tmp_msg_0_1.virt_err_x = 0.0561269814005;
    tmp_tmp_msg_0_1.virt_err_y = 0.00370848457019;
    tmp_tmp_msg_0_1.virt_err_z = 0.177288694181;
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
    msg.setTimeStamp(0.563555446541);
    msg.setSource(54996U);
    msg.setSourceEntity(31U);
    msg.setDestination(14290U);
    msg.setDestinationEntity(121U);
    msg.command = 84U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TUWQWVVAKNETLYYDXWTQXMXBJIDLUYQUZCFTEJLRPGHIAFNDKSJPRNZPWIAFVCOIIFEMZSRQTMKMHFWOIQBJICUFMSXCVNDHTBFPKQXNBKTOGSZUMHMQPXZYPLHHCNRMGLTVDHKJFUXQNUXYCZRTKBZIBFAWROGHNWGOSRACWSVYEMEVBOGMPVPIKDJYRYBAQOSZJPRBXLSJFJTPYNYZUIAADJHOEDKGULGOLSDBUEEWZCCOAGXSKVD");
    tmp_msg_0.description.assign("MAQNNXRCANPAQZHLOXGBSPEPLSBCYKPGFIGVPKMTXLWJMXLATSGCWSKWUMCZVCTWNZKQUNJTFFEYORYORHBKI");
    tmp_msg_0.vnamespace.assign("SRRZMGQYZXCMJIDOHTJUUXKFPQSUCTBHCAMPECSUHPGVMRRABCLHVOOKPDIBANXJBFNXKVQYLIPVYATPXZOSCVDOQHXITSKTDONFLXMAXNUKLRSPIUWJFXJFYWORJUVCJOQNUDCWFASCTSYKLEDNGPTGYQOAHNDHCRMJDIEHNZTWYFNJPDMBVMRZEMGOTGRBLGBHZIGZHYSIIQEWGBZVQANISEQJMRULDKAFWBY");
    tmp_msg_0.start_man_id.assign("YMEJSBXAQTEWHIWVUWENZZYPSCFYYDDZNOUJUGHSWDFNCOXHTZNXSJDAKXTZOPRQAQVQYZBBBIIAQMKRKBODEFCNWZOKERRPYBJLKLGRISVRKTDZFDGMJVRESINVRHATUGMXSGFWGQAEPBOCFCEYTAWXKACLJKFTUBXGHOSNJMXGVL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YQDLWJSWECIMEVLFLRWJQGLBLBCPTQPQREYNPTFXGZURRVIHUAGEALFFPHEOOVZJBQMYESINXMAMOTSDYDANXHIVBKZPWCAFCBMMNDXHQRPWAWUNUTJYYWTUVPUHBUDWZKQOSCUODXHKYXZGIGYLRORNNXWKQMDOGTHIAQROAVFAJZNGBUYIZODEHPQDLCXVFHETMPWKICGVYV");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.645299761705;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.322805437074;
    tmp_tmp_tmp_msg_0_0_0.z = 0.984859371563;
    tmp_tmp_tmp_msg_0_0_0.z_units = 182U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.661236643561;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 209U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.322730901446;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.319371121437;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.0541264415776;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.176412974042;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.450530506676;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BNRTBEEYKBHWYZEIWFMRGWOSHJFDDLHHAABWRMIKPSVLFLRHMZUZTOTMUDLVCDDAYRFOTZKQGWGSVWUFSMEVTJHULZMXZPWGLTUNUQFIPWBQIPEFJDGPGDENUQRKIBURVSQAYXPCMHXJKGYSYKAOCPAAIONHZQQJNELCXJFVTVABZGCECJQDBXOAKIJSETKCMNLYFLXZYTMSRZTEYWKWFUSNPCJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VSXJITZBJFWULGGSPLPGQVCNUIZ");
    tmp_tmp_msg_0_1.dest_man.assign("RWJEFUUEBRUGKTCNSNMUXSQXCPMSJESKTNIXLNQLWVYDBFUXGONPVOWQYWEEPRLZXDXVHBBGFOLVTUNOUHUFZAQWIFMCLKN");
    tmp_tmp_msg_0_1.conditions.assign("HGAZNPNWEXUDZVIOULKTHHTKUQKZSIPWGDVTRTEFAVAZCXPZEMXVQMJGACGTCRNL");
    IMC::DesiredVelocity tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.u = 0.671413308184;
    tmp_tmp_tmp_msg_0_1_0.v = 0.39000274149;
    tmp_tmp_tmp_msg_0_1_0.w = 0.620922048745;
    tmp_tmp_tmp_msg_0_1_0.p = 0.653512917777;
    tmp_tmp_tmp_msg_0_1_0.q = 0.658113152638;
    tmp_tmp_tmp_msg_0_1_0.r = 0.475928849427;
    tmp_tmp_tmp_msg_0_1_0.flags = 207U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FollowRefState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.control_src = 37050U;
    tmp_tmp_msg_0_2.control_ent = 37U;
    IMC::Reference tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.flags = 118U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.value = 0.241858207879;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.speed_units = 211U;
    tmp_tmp_tmp_msg_0_2_0.speed.set(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_2_0_1;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.value = 0.464811147417;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.z_units = 246U;
    tmp_tmp_tmp_msg_0_2_0.z.set(tmp_tmp_tmp_tmp_msg_0_2_0_1);
    tmp_tmp_tmp_msg_0_2_0.lat = 0.0556268082967;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.319052914119;
    tmp_tmp_tmp_msg_0_2_0.radius = 0.956061480847;
    tmp_tmp_msg_0_2.reference.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.state = 17U;
    tmp_tmp_msg_0_2.proximity = 168U;
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
    msg.setTimeStamp(0.470935153725);
    msg.setSource(6012U);
    msg.setSourceEntity(59U);
    msg.setDestination(43807U);
    msg.setDestinationEntity(15U);
    msg.state = 37U;
    msg.plan_id.assign("LKTUTUJLAHCYZCKIAONBZEWJKKVWPLEIZSFWTLFOAWLYGYRQGTSFOHFXFSKQDMRZKNJYCVAHSQJZMBJMXIXFXZTYUIWMVQHDINHJZFJRHWAXQCXNOFOFGYEEQYWRCVWKULKETRXVAVZIQDNPQUPUPMNEVJLVZISBITGDHBXWPGWMDODLDXLSEXEA");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.940146270517);
    msg.setSource(63608U);
    msg.setSourceEntity(120U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(248U);
    msg.state = 211U;
    msg.plan_id.assign("VVASKOSLUAJBSGOKLAHQWRDPNJJETTQBFQIXBMFCEFPHHFEWOQDPGLYSUCHPHQXOFVWIUYZTGSKECDYHSBVWAXJEJPHKCBPVXFYFYDNTPNXIMMWEQMNOSKC");
    msg.comm_level = 101U;

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
    msg.setTimeStamp(0.292991616574);
    msg.setSource(25410U);
    msg.setSourceEntity(57U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(94U);
    msg.state = 71U;
    msg.plan_id.assign("CINIVAEINMDQHCSNMBPLDFMOIVPWDJGFGADBQYDVBNUZFF");
    msg.comm_level = 108U;

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
    msg.setTimeStamp(0.0396878190735);
    msg.setSource(28518U);
    msg.setSourceEntity(75U);
    msg.setDestination(18427U);
    msg.setDestinationEntity(130U);
    msg.type = 27U;
    msg.op = 190U;
    msg.request_id = 46305U;
    msg.plan_id.assign("SFBKIFWYQLSVKAWHNYWMBSEKTXIKQRPLPEVUWLXKCEDTFBPEMTCVLHNPQOZDATISRYDNRYIOPAXNZUQNIYJFADGMNIRXDAGABZZORSHCGQXEZMZHWLPYQAMJKKLOOLAYDRUXKBIJBLQFCHXVQQTJBDDTCGTVWOPLZJERWJLUKSGUSOQDZNMRHUXYRIGIYFGNJBZUBSHEUGEKTVBTVAOMVJMFHPJCREHPXXWGJVTVNIPSUFONZDMYO");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("XCRKZCHJEAOAXBOFKLNFCWIDLZFWOVWUPGXDHPFFSTPYFLDKYHMGFYGVWZUIOIPLKKIJMFUXKMJOETTGEEPYLHVLTQXRNUHMAPACYVBQEWQNPGDTHDTWTGQVRUUQTUBQPIANZNJXYYFSAOJNTMSAUYUBWOWZBNCRYRSJNBCSREMVXMKBISXNQZLOTEUDGBQXHLZRMRGESMLNREQJZFHBHDBCXJAKJKVALKPPDDJSSGCDVIARQIOVGOYICVMWES");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZDFSCKPZRNUOMFMAPGEFJWXGCDYVRHBGOIFQVTEWVKRHVBLF");

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
    msg.setTimeStamp(0.916573121875);
    msg.setSource(13790U);
    msg.setSourceEntity(228U);
    msg.setDestination(19203U);
    msg.setDestinationEntity(101U);
    msg.type = 13U;
    msg.op = 6U;
    msg.request_id = 30078U;
    msg.plan_id.assign("AQDBZWRHLYPKJGKJYIRQCXYCJREJDHJTOZMVJGOINPYKJHTXOKYWQSLASFDGUONNSZQOPXPLOCVXEGPRIVGZGTASBCTFWQPIKQKLJHNECLCPQQODAXWHASTBKUCUKSMODWDVTHXVIHTEYXNKATQIWJUG");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 114U;
    tmp_msg_0.value = 252U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DEFJCGNCXWXTEORCSALPBPJQFAIZMGLQHCVEMOLCHVPKTFMBAZSQRZKVUYEZHEGKGNVQKNARLEKTBJVKFFKVSNWMJSWDRHPKGQTDEDYCTYHTZIQIORWUYQSRIOSNDYPSTIEPWWEWX");

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
    msg.setTimeStamp(0.520197026374);
    msg.setSource(26162U);
    msg.setSourceEntity(156U);
    msg.setDestination(34532U);
    msg.setDestinationEntity(80U);
    msg.type = 74U;
    msg.op = 39U;
    msg.request_id = 34618U;
    msg.plan_id.assign("MQCGGBXFBJFXDQQIKTYVYPDQZACNPVZKLJACUQCNEEPRUAOABEYFPTVVHRFYIOTXHSNTMBHKQWTSJJUKNNNKITZBAZEUDFCDKUXAQISMMGWAVKRVWDNXFUV");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("OSEIBCOFLAYNEFTKLPGSRXUMDSTNXMHLQMRCQVEVSQKSKWEPGOKQDIVZTILDVJSVGIWVTWMYRWBYNAWYFPAVDBJHUVUQJTWWZXFUYHRLPK");
    tmp_msg_0.sys_dst.assign("QIDRZNRARQTCOJAXBPSTLAZDYBYBOZIGBMCNMTGUNJDEIOOBNJJPNVZVUHWUVOLNYFBPIWMRYCCQKQGHYATOMUFPVDNBMCMWVJEEU");
    tmp_msg_0.flags = 94U;
    const char tmp_tmp_msg_0_0[] = {-14, -51, -58, 19, -65, -121, 45, -50, 114, 115, 96, 30, 113, 13, 89, -64, 17, 84, 10, 115, -123, -43, 10, 115, -67, -118, -1, -3, -107, -15, 71, -1, -25, 84, 30, -70, -73, 77, 117, 59, 6, -75, 98, -49, 102, 107, -117, -48, 25};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TVGNPBTGMNUZSZKPYMCPAFPLTATIODITARJEFUKDBCCJXLFGWSICOKFOKIMWCXJDNYKHEWRJQUFHLZYVHIXRHUKPLSEVNBPCROSRGMPTYWLIWZXAAQIQOSYUQRZBLLVTLLPFAMECDBHQXRMGEFYXBHHVZMKJOOHQJIJQEIXHJRNDGWY");

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
    msg.setTimeStamp(0.589048064855);
    msg.setSource(28878U);
    msg.setSourceEntity(78U);
    msg.setDestination(14625U);
    msg.setDestinationEntity(197U);
    msg.plan_count = 20945U;
    msg.plan_size = 3592106009U;
    msg.change_time = 0.433717722187;
    msg.change_sid = 30146U;
    msg.change_sname.assign("YSLILVUNBUXRFRJGDICADCXGHAVFMHSRMEVNAGUNBVVHVRKBWYJQRBTECXBCCNZAIFXXPYLITQEQMGTNFWLNHOBNWTIRHZKAJPKMPKMTDANSDQLHBUVN");
    const char tmp_msg_0[] = {24, -117, -91, 115, -110, 55, -48, -113, 34, 71, -63, 111, -114, -38, -70, -99, -52, -120, -31, -62, 102, -91, 92, -24, 84, -72, -63, -18, -80, -14, 56, -115, -112, 30, -8, -32, -56, 45, -46, 91, 23, 58, 91, 47, 47, 62, 72, -96, -61, -10, 28, 94, -96, -3, -39, 9, 20, 80, -23, 6, -98, -125, -103, -88, -104, 7, 15, 91, 115, 46, 61, 7, 90, -87, -45, -75, 43, 115, 72, 29, 93, 76, -30, 40, -1, -39, -67, 111, -12, 63, -66, -79, -63, -128, -13, -92, -126, -111, 118, -20, 99, -95, -100, 90, -80, 124, -56, 107, -116, 105, -69, 93, 119, -112, -121, 116, -48, 86, -32, 61, -47, -123, 37, 74, 44, 40, -8, 95, 98, -38, -27, -57, -61, 59, 112, -100, -28, -69, -117, -48, -10, 118, 54, 19, 90, -88, 55, 48, 108, 104, 1, 92, -72, -27, 16, -98, -62, 66, -124, -61, -62, 21, 38, -63, 82, -101, 17, -98, 0, -111, -121, 108, 70, -53, 2, -94, 82, 43, -113, 94};
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
    msg.setTimeStamp(0.625924608776);
    msg.setSource(4402U);
    msg.setSourceEntity(159U);
    msg.setDestination(55487U);
    msg.setDestinationEntity(208U);
    msg.plan_count = 29711U;
    msg.plan_size = 2991478709U;
    msg.change_time = 0.121439342052;
    msg.change_sid = 40773U;
    msg.change_sname.assign("QFPLBBRBXLNBMGGFRELJFRPKTMHWCZJWFVBSDNELGRCZMEOZCHJSQZDLOOMJRAGJVPLAYWJMEBONGKPVARBSIRWIEWXKYXLEPCDEOHTVYAQOKVVOXNVDHMPFRRWJGCIKJKDUZKBFITCACULDTKAEQXAIXVCRMYZAGYAHPGQGJFQKPOTLHNOKUBXYNPZUVMITFYNLWCXUSSPIHIYWSITSQGQDNDDZTUEMQDXSVZUEXWIUNFOJSN");
    const char tmp_msg_0[] = {-90, 33, 15, 117, 10, 39, 53, -88, -97, 83, 101, 102, -56, -127, -93, 30, -77, 24, 94, -29, -105, -34, 8, -16, -1, 126, 69, -56, -127, -41, 95, 79, -44, 82, 78, 101, 23, -8, -110, 20, 24, 96, 5, 17, 17, 98, 59, -59, -25, 19, -75, -58, 41, 56, -40, 70, -95, -84, 55, 66, 48, -27, -122, -61, 38, 12, -52, -26, 74, 63, 75, 62, -24, 114, -94, 88, 100, -30, -72, -13, -72, -103, 56, -71, -31, -116, 106, -114, -119, -93, -116, 126, -104, -122, 66, -104, -39, -122, 71, 44, 3, -79, -36, 65, 76, -24, -107, 63, -109, -116, -86, 51, -18, 116, 88, -41, -92, 36, 111, -12, 99, 81, -117, -22, -32, -52, 88, -71, -82, 47, -32, -45, 47, 90, 45, -19, 89, 94, -17, -81, -80, 33, -69, 55, 79, -127, -113, 57, 51, -70, 63, -54, 77, 74, -100, 95, 58, -95, -69, 53, 92, 126, 0, -121, -59, 106, 93, -56, -40, -70, -125, -73, -98, 35, -48, -64};
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
    msg.setTimeStamp(0.711028724737);
    msg.setSource(18292U);
    msg.setSourceEntity(103U);
    msg.setDestination(45117U);
    msg.setDestinationEntity(17U);
    msg.plan_count = 11513U;
    msg.plan_size = 1004983704U;
    msg.change_time = 0.652551214956;
    msg.change_sid = 53210U;
    msg.change_sname.assign("NYKEJGHYZYILUTNFLUFCCAEYROAKPNCHTVKTQZWMZAJAWYVIAPPWRXCYOZNRIDKTXWXUIFDBKWNZVCMD");
    const char tmp_msg_0[] = {120, 36, 31, 68, 89, 114, -63, 71, -38, -43, -68, 97, 83, -117, -119, -41, 56, 115, 27, -53, 105, 13, 2, 26, -15, 50, 52, 28, 99, 45, -20, 93, 9, -36, -96, -5, -124, 40, 37, -114, -66, 27, 83, 123, 98, -13, -43, 117, 52, 55, -63, -63, -78, 5, 110, 26, -57, 71, -47, -20, -124, -68, 51, 84, -11, 113, 63, -65, 77, 63, 23, 61, -48, 106, -3, 18, 120, -57, 56, 8, 62, 39, -97, -121, 79, -123, -64, -5, 85, 14, -28, 90, -62, 14, 96, -66, 122, 22, -27, -120, 113, -6, -126, -71, 24, -63, 48, 39, 51, -105, -5, -112, 52, 120, 59, 27, 116, -3, -112, -92, 123, -126, -81, 61, -12, -83, 66, 113, -37, 112, 56, 12, -75, 58, -40, -49, -125, 58, 60, -104, 60, 53, -114, 79, 36, -60, -5, -112, -97, 53, -25, 16, -72, -103, -127, 90, -48, 23, 94, 2, -122, -46, 98, -115, -80, 35, 55, 125, -128, 101, -48, -69, -27, 93, 86, 89, 104, -15, 35, -20, -47, -87, -125, 114, 109, 70, 91, -101, 84, 125, -46, 28, 64, 25, 99, -95, 4, 29, -80, 64, -15, -123, -80, 29, -82, 30, -79, -70, 93, -50, 40, -13, 126, -116, -37, -53, 3, -54, -76, 33, 120, 22, -117, -100, -16, -116, -18, -19, 4, -119, -88, 119, -125, -35, 42, -51, -88, -57, 109, 117, 115, -77, -63, -128, 69, 62};
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
    msg.setTimeStamp(0.59423571734);
    msg.setSource(27969U);
    msg.setSourceEntity(46U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(143U);
    msg.plan_id.assign("RTUZVRUPSFBKQQTOAYWCGZOEPPHJPYSOCGLJHUJBNKXFHDSTCMSVROTTDUBIWXGGDWVOZOZFGYLPMAWWJHVCMYNFCDGUF");
    msg.plan_size = 36399U;
    msg.change_time = 0.00527310750522;
    msg.change_sid = 14092U;
    msg.change_sname.assign("CJNTJMUMPOQXTPNSGXFFAUWTZPBWRTAPQGXCQEHQYUBMOJWYKKZMOWJBZHPSLOWRDFXIKXLUDRKLAKURSUENZHJWJIKYYFJQASLRB");
    const char tmp_msg_0[] = {42, 98, 63, -82, 124, -56, 49, 80, -25, -31, -84, -71, 120, -84, -8, 39, -99, -12, 43, -2, -110, 20, -128, 69, -86, -117, -106, 41, -116, 30, 105, 108, -104, -121, -110, -7, 91, 120, -45, 2, 59, -88, 115, 58, -18, -26, -117, -85, 76, 66, -98, 26, 60, -127, 12, 43, 73, -38, 14, 85, -65, -96, 108, -59, -76, -57, 18, 109, -70, -10, -6, 4, -54, 60, 70, 94, 96, 67, 73, 16, -51, 105, 36, -77, -46, -37, 108, -72, -63, 50, -36, 2, -111, 101, -20, 101, 40, -94, 123, -90, 112, 121, 121, 25, -99, -41, -29, -43, 106, -106, -91, -70, 100, -5, 5, 39, 18, 76, -126, -14, -15, 47, -90, 109, -22, -123, 43, -79, 67, -42, 45, 63, 70, 16, -33, -2, -48, 57, 91, -24, -74, -111, 71, -106, -117, -110, 68, -55, 21, 83, 106, -27, 67, 98, -102, -21, 79, 92, -101, 92, 75, -83, -89, -19, 120, 83, 71, -9, 20, 117, 63, -122, -5, -124, -88, 85, -45, 114, 92, -55, 106, 104, 40, -7, -109, -115, -128, -125, -33, -68, 116, -35, 73, 102, -56, 17, -27, 111, -60, 58, 84, 5, 11, 32, 29, -77, -30, -22, -45, 70, -58, -84, -44, 50, 72, -32, -5, 75, -62, 34, -85, 57, 97, -2, 98, -75, -125, -89, 33, 68, -23, -54, -102, 16, 108, 41, 55, -56};
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
    msg.setTimeStamp(0.958564528681);
    msg.setSource(9922U);
    msg.setSourceEntity(133U);
    msg.setDestination(22922U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("INXEAHQXZTJFMOUZZQCDXNSQPIDSNLTAUFZKDDFIBPBROBLF");
    msg.plan_size = 41969U;
    msg.change_time = 0.0593639831069;
    msg.change_sid = 62089U;
    msg.change_sname.assign("NWBQSIALPPMXRDMTIJTPUWRHQMOAOEBYAEOURXUVAWAJGQZULQYXAECWCVFKAUYMIFIADBPHJZCIKZKNFJYOCGCKVBTMSSQVAFIBTCWEDXWOHWKLRQUJYKCWSCKI");
    const char tmp_msg_0[] = {-115, -95, 24, -41, -66, 93, -39, 9, 3, 74, 58, 31, -19, -24, 70, -107, 73, -26, 119, 111, -42, -49, -91, -91, -126, -112, -83, 24, -7, -104, 92, 4, -128, 91, -80, 61, 121, -106, -65, 18, -82, 119, 54, -86, 99, 84, -72, 123, 34, -61, -103, 63, -122, 43, 6, 58, -33, 94, -95, 0, 114, -124, 81, -17, -117, -107, -45, 101, -87, -98, -70};
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
    msg.setTimeStamp(0.798463714256);
    msg.setSource(34952U);
    msg.setSourceEntity(27U);
    msg.setDestination(7936U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("MLTZZAQXGMKBRXICMHPPZJQNBGLIYNTOURUKDJTTHGJKEWYBMGHKDIZCAYVHRWFEZEPVALNRASKNPVREJOEEVYMGQAIGHLUWBVLNSBQKYTCHMZOOCSHTAAURSLONMLDPZYQCQUFFRXYDBTMOSXTETGDAXQOUIYSOFOBHBFINNKJQJSCSEVPFCWXMIJFBLFLEADNJXPFUGTUIYFASYQZQR");
    msg.plan_size = 41343U;
    msg.change_time = 0.71447600157;
    msg.change_sid = 21322U;
    msg.change_sname.assign("HPRNNVXYMORSCRYIGKFDBVXKCLQIIEGBGWKETOMTPVFIJPRTN");
    const char tmp_msg_0[] = {-11, 10, -11, -98, -118, 2, -48, -100, -12, -79, -32, -107, -124, -118, 84, 39, 18, 120, 52, -17, -28, -73, 18, -111, 37, 52, -9, -115, -114, -52, -51, 40, -44, -60, 3, 67, 48, 82, -44, 1, 121, -19, -58, -21, 57, 125, 102, 97, 116, 115, 16, -124, 85, -106, -13, 5, -127, -74, 7, 65, 42, 93, 25, 52, -86, -123, 101, 48, -51, 61, -104, 120, 69, 99, 121, -58, -17, -75, 108, 105, -115, -38, -31, 39};
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
    msg.setTimeStamp(0.76457094758);
    msg.setSource(56994U);
    msg.setSourceEntity(115U);
    msg.setDestination(158U);
    msg.setDestinationEntity(121U);
    msg.type = 179U;
    msg.op = 59U;
    msg.request_id = 54625U;
    msg.plan_id.assign("BNGKGKLMWSUEZCHTBDTUMLGRTBVVXKOLNJEXUCKQVKERPLCCUAXPZHAUOYWUEZQYNVHBGSSIEUYBGYLWNBJOYRDJFCGLDCAADYYNDYTRPWGWRPTJ");
    msg.flags = 49863U;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 92U;
    tmp_msg_0.x = 0.912066862464;
    tmp_msg_0.y = 0.940942897409;
    tmp_msg_0.z = 0.385996662444;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FIOKOZALTPPFOUGBYARAKVCGKMEZRXPBHWDASCYTZUBZGMYQMQXKAXROLAVXFKOUBLEWFHGVSYJZRPNXEFWNOGMLJHULDBDTTLQAMGIZXRWWUSBNRYZXLEQTKCTUDWMMJOAQCGKBIRISWZEDSQTRVIHIQPWDCBYGYS");

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
    msg.setTimeStamp(0.86733277888);
    msg.setSource(60157U);
    msg.setSourceEntity(152U);
    msg.setDestination(28874U);
    msg.setDestinationEntity(24U);
    msg.type = 47U;
    msg.op = 99U;
    msg.request_id = 13862U;
    msg.plan_id.assign("BHLDUOAWQCYOGYFOVDJUEWXQJATUGLMDXBQTDILHJMNPDZGCZQETAAKQEZMKJVLMHSASYOVYXASKJFIXCRFREKLVZUYIGTXWZUHVVMINEXUMWWGEYRRHVLBDZWLRAHPBXZKFGPMJOQCCTEKGYGQNKDFNNFXEMYBRUJHCFURCPZNLCNTPSMHSSWSSDPZTVTWVNWIBBNPCBNO");
    msg.flags = 3266U;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.520072305432;
    tmp_msg_0.ay_cmd = 0.782201163546;
    tmp_msg_0.az_cmd = 0.550193854672;
    tmp_msg_0.ax_des = 0.861620359299;
    tmp_msg_0.ay_des = 0.532037577427;
    tmp_msg_0.az_des = 0.438831517585;
    tmp_msg_0.virt_err_x = 0.913300166754;
    tmp_msg_0.virt_err_y = 0.499615149305;
    tmp_msg_0.virt_err_z = 0.445809867317;
    tmp_msg_0.surf_fdbk_x = 0.782060367834;
    tmp_msg_0.surf_fdbk_y = 0.71874166853;
    tmp_msg_0.surf_fdbk_z = 0.449699622984;
    tmp_msg_0.surf_unkn_x = 0.113624197685;
    tmp_msg_0.surf_unkn_y = 0.349246499853;
    tmp_msg_0.surf_unkn_z = 0.236239950798;
    tmp_msg_0.ss_x = 0.749079388964;
    tmp_msg_0.ss_y = 0.220069504232;
    tmp_msg_0.ss_z = 0.611299726165;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SSRXCBTFKGKRESGTENCZTOVIOLJFUBYVHKUWRYDWLSDBSMWUTYCWJMXINOFSYNGZBPOBDPURQYKJHQETNSBDGVLDZPMYDECCFQIXDLJAROTGXOVMCZPUOIHZVVMVYJWZQWHAXAGKXYAGEGACAHLB");

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
    msg.setTimeStamp(0.158653331194);
    msg.setSource(56094U);
    msg.setSourceEntity(220U);
    msg.setDestination(16895U);
    msg.setDestinationEntity(230U);
    msg.type = 48U;
    msg.op = 143U;
    msg.request_id = 41551U;
    msg.plan_id.assign("EAIMXKTYTCYXNDLKBRKTDACCNUZHSMPANJTPEXLZJAZRHGYCTIHX");
    msg.flags = 50293U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.612699978079;
    tmp_msg_0.sys_src = 55475U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GSQMURJWVKCUJGHHVPIGARYYAFYIQMXUQCATLVZBHRGMXTZCNENHJVDEIZVEMXNFMPSCDWEGFZMYEVUXBBULAEFZKTKUMNXBYOKWUBLOZCPYQLWQOZMPCTJJXYMDOSQWLHEAAPCWYDVHLJCTBRSUXNEAXZOISLAKRZIGPDTIRNPSNBMIXFYGUQHOKFJZ");

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
    msg.setTimeStamp(0.484116570499);
    msg.setSource(11811U);
    msg.setSourceEntity(66U);
    msg.setDestination(10267U);
    msg.setDestinationEntity(144U);
    msg.state = 17U;
    msg.plan_id.assign("FZHDUGOONLDQLBJVAZUMPYFSKSZREXUUQGKINKOGFPWIFTSQDTVELKNAESXCUMRKBQFBMZQMCHTUACECWWOFNEJOYXVIHTGRJGTZDPSXDRXUOCPBTXXWUGNYQCAMAISSHWKVHAEZVKNYTYQIRSHBWPWKUNHIGYELMAHCVXMHTEJOYALVLGQJSIDIJYNJDWJDYXGLARWIUKWKNMSOLDQZPRFMGBBJPHXBBTAVEPPPVQ");
    msg.plan_eta = -890627752;
    msg.plan_progress = 0.0439877902522;
    msg.man_id.assign("MNJCJLMIUXUPBJZFLHBXRCMIEQNQUOQSJXMUGTOMCUQJRVJNLVGRZKSAHXJIOHDHABGVZVBXODKGHZKOMAUTKNHNPEGDFSBINAWATCTCOMFKDRGCUWWJAOREOTMHDFGGDBFDHFAIVNZJSAAFBZXYQEWPBSBPNTTCMPNWZCHLYIGWLFTALFQVDQIWYXWKVBTDPYZITEKYVQJWSZWQRDOYCYVYLXLXRUYGPIUOQSRISSEMUHKRKLEPCFEYXELZVP");
    msg.man_type = 21017U;
    msg.man_eta = 1419771597;
    msg.last_outcome = 183U;

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
    msg.setTimeStamp(0.843161351398);
    msg.setSource(56802U);
    msg.setSourceEntity(226U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(71U);
    msg.state = 186U;
    msg.plan_id.assign("LSQYATDTHRYWTUORWZJKHJRLKIDEYGAGMRQVMSNCWWEUUVOTASJFPPFCKFOHSBEFZYHZRPYVYNOYCSZEJNJWXQCNHPZOOI");
    msg.plan_eta = 1967658841;
    msg.plan_progress = 0.102494887414;
    msg.man_id.assign("AJNXRVHFIHERFUTPRRCJIFHKYTCAGSWEILJQVOJPGLJNMKRTFSDHXVBSZHLY");
    msg.man_type = 11147U;
    msg.man_eta = 419784862;
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
    msg.setTimeStamp(0.131375301316);
    msg.setSource(20867U);
    msg.setSourceEntity(111U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(238U);
    msg.state = 118U;
    msg.plan_id.assign("FCUKFSSGYRXNKGOOBEZNBXODGVTBYZEITLWZULCFHKVNWTZRTRXMWSXWQFVMAGONADRCEUYKJHQHYCGJIKCFCMJQEWKXHZPKSXIRPPYQADLCEUVCSIGJUGVPTFNQRHQNSVJPLQPUHUPXAFODHHMZJVBTSSBHLVTBVANYIWMKWJTGJQNAYHDSOMPRNTEMXYFWGDFEOAOZWXERULX");
    msg.plan_eta = 1239852729;
    msg.plan_progress = 0.0155547036773;
    msg.man_id.assign("CUNIQIYMNZRCBVULXJLTXWAXLVSFVFGMXPBWNNSBBMJOTQSBOHAGDILPMCBFVHTOZXYCWEDGDMGNKAACOKP");
    msg.man_type = 34053U;
    msg.man_eta = -1148708942;
    msg.last_outcome = 182U;

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
    msg.setTimeStamp(0.994276767594);
    msg.setSource(35737U);
    msg.setSourceEntity(193U);
    msg.setDestination(17594U);
    msg.setDestinationEntity(119U);
    msg.name.assign("DHGFBGQXHCESNMTVSUIXFVMSRPYPQZJBIVHENVVCLLOGPJONHLUDIGKDWTRQJYDIRUPARYAWAEZTBBFXRLTFKBVGWZTGHDNFSKKIAEKZPIGZJHTKRPOMNOSLOAAFNJCJEDCAYQEFZ");
    msg.value.assign("HUPONRIWAFHYBJRNOPKTTVDJKLCWYBLCJJRIHTLMZDZDYQUIUXVQNMSJAIJWBBCATCRPZVATIXXBERQXQSALOLCZRMHXLTSGNWCTXKEDHOGTPZVVYEZAVFFIEEGZS");
    msg.type = 27U;
    msg.access = 29U;

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
    msg.setTimeStamp(0.0762202959742);
    msg.setSource(12407U);
    msg.setSourceEntity(119U);
    msg.setDestination(10636U);
    msg.setDestinationEntity(163U);
    msg.name.assign("ABNHARBLVESQICVIYQARGRXLJRHOKEDDCCQPLJGYKJYNGGXZNTVMAKXKMBDVWCENPRLJDSTFSVTMTNZXRVMGHCRLILQLESHSPOBYEJQIGVEFKZQFTWYPQCAWMNFOUXWTXCFHJSDEABKMVYZGB");
    msg.value.assign("SVPZFKYYCV");
    msg.type = 69U;
    msg.access = 138U;

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
    msg.setTimeStamp(0.365035836321);
    msg.setSource(31486U);
    msg.setSourceEntity(252U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(35U);
    msg.name.assign("NOKCYUGVATSNUOVEWGXPXWQHSAGYEDDVWUAHYGBJXTWKWSLYCWNGEGOKPTXLRTRPQJYQTRCEHYDNXFYMRMQMCAZIERYOZCNITVHUHPNLDBXEKIDVJZMXRESCCPBQSRJNHQCBDGZZRFEBQQISLHRQVNJOIZKAFPBUEWHKKHRWMXTWIPSMFGVMJFJJLADZDISULZTLLZJTHBINLNFFISOAPAPIQDDGUTBKOYFXFGZMCFUUMUOJOACOVELBX");
    msg.value.assign("OXKBNMPRCWUKNXUATVHFIRAHFQZHBPAYDEVSIJNBNWCCEAEQXZOQXCSYFJMVXVFSZLGSTRTWBQXARQCUEWLDOIFMOZVIRDTIUITUYIEBJGSHOKJXHELETQYBRHWBGDKUUWTQQUJNNHBPDVKFEMMLGPYBLAYDEPGWMKHOWHCAOLKKXRLFOJCCYZMQCNIZTUYAGIOPVGGWTFHVXSKBUYJ");
    msg.type = 103U;
    msg.access = 199U;

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
    msg.setTimeStamp(0.839591279975);
    msg.setSource(34778U);
    msg.setSourceEntity(91U);
    msg.setDestination(32703U);
    msg.setDestinationEntity(201U);
    msg.cmd = 185U;
    msg.op = 2U;
    msg.plan_id.assign("YKSANYOPQYDAJITTFZODOGRONXQOEMLPAXASMFOEFGXCJKK");
    msg.params.assign("TLBQZHDPMMCOTGYNKEGEMQPIAOIBTCEDLUFXOTXRLEMGLHFTAVHWAWURSNBCXIDGAQIVFJSZNCOHKGBMZOYNLWXQKTZSYUVJVAJXABKSYHRBZJZMPMOCICNYIGQJCYVDICFXWJHJLNB");

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
    msg.setTimeStamp(0.659265129346);
    msg.setSource(61067U);
    msg.setSourceEntity(26U);
    msg.setDestination(6698U);
    msg.setDestinationEntity(142U);
    msg.cmd = 85U;
    msg.op = 132U;
    msg.plan_id.assign("OMCRJLJDPNTZHNNZWPGWRAIVRHBETQMPHQDOGCXXHZDQROLMFZTRUGMJWEXTSIEMJTMZUARBZKYLHVCFIDDTTHGCFCABQOVGQBYOXNQYFVSRGJYXTNKSQWYLFAABWKQJLXTHSEZEIPANAILDUYAPELZDGINFDMVYFNBICQQPETHYZPHCBFYPYUB");
    msg.params.assign("NKFGSVCPTGZRTOQSPRNRZLTCQNDSJDFYECDCOXTMAXHDIKEJSLCFKJUUMYMSCOHELBAKLJUTWGIXZWRUQJEJQLUEHYRBVWWUDPXEXUNTFGATVYXXVEATINBZIJQEOVWOZLCFFWKRYSHWKWDJLRCUVATLGFMXMHESYIUNQSQQCRAMBDORGBVVJKIZZUNKIECOYRFIIPNKJ");

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
    msg.setTimeStamp(0.561786392296);
    msg.setSource(48910U);
    msg.setSourceEntity(103U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(48U);
    msg.cmd = 139U;
    msg.op = 72U;
    msg.plan_id.assign("PKSFNDPQSTKOCGGLPMIFQBOROPPQSWQFCVITWZEISYJWIWTBLMFEUNVAWBNNDXNKIUYJYJKTBT");
    msg.params.assign("QIHWWNXALFJGEXRLLAAAYVZOOEUUXOECMSXWPHXKEWEGUUKTNKSIQZGZJWOMCMYNSRARDTSOZQKMVNRVFGFCUQQYKLDPKUCJIJMFTLIWGDFFC");

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
    msg.setTimeStamp(0.0428091748);
    msg.setSource(61225U);
    msg.setSourceEntity(28U);
    msg.setDestination(487U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("OANUZATKDYNDQDVSSJLKLABRYHRZNUJYDZSFPWMDXCIPTQEHETGJYLDUEYXFOLJGTYVPPGARPLPBOOJLUQKLTWJXUQIEKGZKBCPIMFQOMSZKPMQYKCTHQAUHVHXVXMVZTXUBWCORYCNUFMRGPSFOASGDVRBCIHHNFESQXHEHIFCIBOGRKOXWWGONWJBEAZXTUEAL");
    msg.op = 93U;
    msg.lat = 0.346974739467;
    msg.lon = 0.940744594478;
    msg.height = 0.668608162482;
    msg.x = 0.623959557025;
    msg.y = 0.466882489788;
    msg.z = 0.352301256121;
    msg.phi = 0.399235152872;
    msg.theta = 0.668831452144;
    msg.psi = 0.231198536587;
    msg.vx = 0.851918155558;
    msg.vy = 0.142467904469;
    msg.vz = 0.939314660331;
    msg.p = 0.345530793503;
    msg.q = 0.853471748031;
    msg.r = 0.653008403465;
    msg.svx = 0.253467028616;
    msg.svy = 0.447532889602;
    msg.svz = 0.99608633815;

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
    msg.setTimeStamp(0.882608201741);
    msg.setSource(63557U);
    msg.setSourceEntity(253U);
    msg.setDestination(64563U);
    msg.setDestinationEntity(180U);
    msg.group_name.assign("ABXZCVLTHUMINRMLAOSTWWPHBIJPQYJKJTHULRFOPSOEVJOXAXPDORGDVAJTZSDFHIDICICERSZVBNLNKYDFRUIGZBEMDZYCWXFNHFUVIEPSBTHTOCZKGQLJWVBSMKZEZBVAUMVLVLWCRGIXOFSAPXDMYLJJQYHKGACHAWTSRQNFMCMPEWBA");
    msg.op = 40U;
    msg.lat = 0.081189481522;
    msg.lon = 0.172100892786;
    msg.height = 0.308959101294;
    msg.x = 0.921822710328;
    msg.y = 0.95898085568;
    msg.z = 0.475553763071;
    msg.phi = 0.314773575511;
    msg.theta = 0.333866492546;
    msg.psi = 0.561590964512;
    msg.vx = 0.597663185726;
    msg.vy = 0.726552019672;
    msg.vz = 0.665272450656;
    msg.p = 0.869015391928;
    msg.q = 0.821876335912;
    msg.r = 0.0336665576923;
    msg.svx = 0.846922529759;
    msg.svy = 0.761388085845;
    msg.svz = 0.0306526451416;

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
    msg.setTimeStamp(0.405972078228);
    msg.setSource(42719U);
    msg.setSourceEntity(240U);
    msg.setDestination(54946U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("HUGQUMVLGSNGUOJGCQATHHWNFOBWPRMRKHDRMSXDLSISHAPHUXEYDHUCRRPKQWBZCNESZYYIUZPCMGILLZVJNSLGETVIBKXMVHJRJQPQSYOMBKQBFBKBCZPDPGTJKBDWOVNVOAGITZKDEYEATMYJZYPFALREUJUAPXRXWWQDJSDATIWUXXCKYWCEJDYFLHSIQDONRZVOLREGCTIFOAMBNIVQXNVEHBQAUFTCXKFVL");
    msg.op = 98U;
    msg.lat = 0.418982731413;
    msg.lon = 0.606389460283;
    msg.height = 0.20190361923;
    msg.x = 0.484965554333;
    msg.y = 0.909210927131;
    msg.z = 0.364662412304;
    msg.phi = 0.475856944094;
    msg.theta = 0.404796576036;
    msg.psi = 0.017607894224;
    msg.vx = 0.873897241335;
    msg.vy = 0.709189376023;
    msg.vz = 0.215315794947;
    msg.p = 0.918194148336;
    msg.q = 0.8682086684;
    msg.r = 0.607170731315;
    msg.svx = 0.699275143178;
    msg.svy = 0.335185436525;
    msg.svz = 0.334410045308;

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
    msg.setTimeStamp(0.537166018112);
    msg.setSource(45602U);
    msg.setSourceEntity(32U);
    msg.setDestination(42089U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("WAEUVWGSAZIKSUQNDDFXBDRBJVTGXWPXTWVLMXHGUZRYITBDGRFPCILHEJVNLVROWWOOAQSLZOEPDBOJKKDVORHETEKSJQ");
    msg.type = 173U;
    msg.properties = 189U;
    msg.durations.assign("HEIVXQIGPFYWMMRPYWIMUEMJOPRQLHAUUUUHATZSGJYLPWWMPBDZVDSNSWCKYKBJKEODCGXWMAYSQRQPPZYBDYYMDEFNXEBLRAKJOZAHOGSAOHQLIEUFNHLXNJVOGINCHPJLZRTCSELAIQN");
    msg.distances.assign("JCTTKFDUNXCTULGEHXZMGBYFKSUNSOWSIRLCJGRSOUMPSCLRVICWDCXOPXVWUQRABESHDYGKFMMLDQDXREOKOZDJXMONHBVMWARQKZEVAJILFZGWIFBFUPJIQVHYZVEEPATGESRTEJQOXFCGYFWNEOTNLYPMIAHUFJVLYWDQCTQWAKBIBJGFWPNZBTGUPARSQZTKZWMYPOHHVKSDXMBXMOZJRCZUK");
    msg.actions.assign("RPZZMOAEXEVAETYWPDHRWNXGLSVUSOGRUUAEUXNJKDAVYMRHCDTEIPCUXGRBBQCGFRWIPHUCJVBBNQROWRGNMXGCLPBJKFTISOFJCLNBQADRXKGFEZKJSWLPPASCOTEZQFTJJNZNCIFEAYDDMHIPXQSLUIOZEHMIHAVFHMQXWSQRVBFKUPWJIMZHFTHQMWQCMDB");
    msg.fuel.assign("PUGMOVVAAZYGHLBHUWEFQQFB");

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
    msg.setTimeStamp(0.0135079003269);
    msg.setSource(45671U);
    msg.setSourceEntity(36U);
    msg.setDestination(18188U);
    msg.setDestinationEntity(176U);
    msg.plan_id.assign("GPUDPZHLJYFHUCLAAZGWPDQIJFNXEWKQRSXUUTHHRJWBBLWGCEIDXPVGYMVFJEHHIWZZVEDSNRRAXIFTHONVNMTCBMBGLRFLFSAWJCPSTSNBVQKFMKSBVAKBKTSAAEOIDQGPKXUYHLQLQQNITNHXDANYJPREUIVFTDBVAVGSLJEYTWEBWXUCMEUJKKXKFUYIIOPRIJ");
    msg.type = 93U;
    msg.properties = 245U;
    msg.durations.assign("WFXNXWQQYOSBARBZKEJNXPJOQBHQESOHUWKNIDTTZYSJAMITWWGDRZLXNHPDWWIKWLONZYFYOYCXEBVGACLGJBZFYSHTPQLSZLBVYVPIGNOQAIJSVFUAIHLHUCOYQFFCVEBZQRRGTPINMBWXATOCSQKUGEINMSTNYKQMKMIHSSJXRDACLGUTJGXLCPGKMFDVLGDACNLUCFPIVBRKROVJVEUHFYRTEFXMEWXHKUKEMBPAVPZ");
    msg.distances.assign("GKVNUFTWPQQNGEJHBNMCSKMACETQPLVPXURPGLWEYEAECYTVANAWSUOKDKZGDQOKMRTLBAGZPWFGRFEYJZJFQMX");
    msg.actions.assign("MOENHUEYLYEJLWNRSNAIACPYOHEXTVDEIJFDLYRBPVONNKHIUOR");
    msg.fuel.assign("GNWOYBWSQYNUMELJKBPIKMFWTXURXPDHYJFEFUXRMCRVVRDJIGPIAKCFVRZCATPEA");

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
    msg.setTimeStamp(0.550279300004);
    msg.setSource(37617U);
    msg.setSourceEntity(32U);
    msg.setDestination(39454U);
    msg.setDestinationEntity(169U);
    msg.plan_id.assign("OOGMYPMGAHFDMALCYIEYBFTPBDKTTLRLYIXUTZNCXFSKZIUZRPKQDTRAHBSLMUUINVRHFBBMYEREWXETFORBLMYSSGMAIUNQZNGZCKUREWOLFAXXCXRKIFHWJUXBKVTZRQZSQANWCGOBZDQPDQXDYDSNEDVKARPCPVSMDFWYZOPLJGFJJQJCCMBJESHVYPIHVAIMLKQCNHVXNCHUQQWWYGWGAJE");
    msg.type = 142U;
    msg.properties = 64U;
    msg.durations.assign("TNTFBEMUZMPKFYNUEHDJNBNPBEHBTSXOVJZQCDFWPOGWQVZRIVQWZCQSYOKXMCSYQUPTWIHVUJCEGOHKDDYJK");
    msg.distances.assign("NMQJSVDJHTCFSPSSPOTJKBMSSYZFVAQTMGMRRNKOKCEHXREIDKYARHLEFUDAVAAYVDOHALTCBFQJNFZIDDCDGYVMIKFPZNGZGLZQWNZCVFIHYNOEGBTRKSUWGQATOFCJEGZLOVBPKLWFSDXIOWHXUXIBPWWPKLMMQIUOPHJLJVEUXKHZRFLBKYCOIBEBRNVMWGRDCQZRXEATYXMBNLTEPTIBIQWC");
    msg.actions.assign("FHFGAZOMLDAXDEXUDE");
    msg.fuel.assign("LMGOWPLPZAMXWCRNEXJVHDRNBTOGDNADZXBYRRGWDUASDKGLEBAJQWBCHABEJDMNFALJTQRYJYHSPLLVJJAS");

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
    msg.setTimeStamp(0.737237329728);
    msg.setSource(59349U);
    msg.setSourceEntity(231U);
    msg.setDestination(56080U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.534943771845;
    msg.lon = 0.271693510447;
    msg.depth = 0.821880852329;
    msg.roll = 0.923072265679;
    msg.pitch = 0.36539045979;
    msg.yaw = 0.942263698492;
    msg.rcp_time = 0.981642090038;
    msg.sid.assign("NRKUPYWCVXKNVHKEQYFYSIDQVOTLOIAWOEVYPCCVXAAUEUKOHFSYLNQIQDFBHFSBJYNZBRZXLDHMPAUHSNEMXFMHPJSJDBKKLWUO");
    msg.s_type = 55U;

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
    msg.setTimeStamp(0.926953148788);
    msg.setSource(34476U);
    msg.setSourceEntity(32U);
    msg.setDestination(23663U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.588849471546;
    msg.lon = 0.958052688815;
    msg.depth = 0.0385087933018;
    msg.roll = 0.344518274589;
    msg.pitch = 0.0961353935056;
    msg.yaw = 0.883783056456;
    msg.rcp_time = 0.881220180935;
    msg.sid.assign("EAIQBTMGVTHTJKNLYDXREUJMVICTXRNANFTODFSJJUKFVMKLPUPOHZGJMBFJJXCRATMPXMWSCNRFOWTZBLXWHEDRIHYSQOVPKGLZLBRMRZYSCLNHZYDRGETDQVVLZZINKYRBAYYKWATOKPSGIUJMZALVNUJVBLOCDEWHFGOPISNSGEUEVSDPAIQAUNTNPXBWCBPYCWLXGHYKDAKCXOZEIBQUGOHSSEQCIGXUEYKQPWQFHZMBA");
    msg.s_type = 202U;

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
    msg.setTimeStamp(0.892858785764);
    msg.setSource(36929U);
    msg.setSourceEntity(199U);
    msg.setDestination(9920U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.538095573159;
    msg.lon = 0.0623658566752;
    msg.depth = 0.820134852393;
    msg.roll = 0.41111414012;
    msg.pitch = 0.587410081208;
    msg.yaw = 0.462928072124;
    msg.rcp_time = 0.825748630346;
    msg.sid.assign("EBJWOKNEHZTWIIPDDQWGGXCBFUGSBJWSYPAYUFGNEAPUVYOKUPRIXQXCJMMMYSOQYTLNRNTGVQALQ");
    msg.s_type = 247U;

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
    msg.setTimeStamp(0.924869169662);
    msg.setSource(29237U);
    msg.setSourceEntity(172U);
    msg.setDestination(38341U);
    msg.setDestinationEntity(89U);
    msg.id.assign("QYBHWXZJWTYOSWKMROFPOHHEGBGKLXQSFZSRWZGAHFAAUIIGBKZPNVPPPDRHYKURLIEBFWTGYGSIXABFVUNBLW");
    msg.sensor_class.assign("TWYCDPHSCDRSWLMOVFIDMXISBSOPTAAMSMNGQAKYJHEXACOYNJFPKRYBRUCTGDTXGAIFLLKIOVPCIMLNIMCJDPJSKZOEFPVFMJTEIKUWCRZPQFDWAFCQOADMXNTZYVTGZALJDIZXJKHYDZVKTNLCGBWHBPXSRWWMPVRVEAPENLQKUUHBNGXTZHVQUQRSNBLJMWKGBRLFEOIUZHUOBNBUYDGQXUHRZBRGVNZQVWJEQIGSLXYHYYXKACEF");
    msg.lat = 0.506506274271;
    msg.lon = 0.42657879436;
    msg.alt = 0.380335791672;
    msg.heading = 0.868215238236;
    msg.data.assign("QQFRETIJSZAFTSLPNJAASOSVXNRFVHIXRXTXWBOPQCPPZNKVZD");

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
    msg.setTimeStamp(0.220985394828);
    msg.setSource(64999U);
    msg.setSourceEntity(241U);
    msg.setDestination(43790U);
    msg.setDestinationEntity(69U);
    msg.id.assign("IIUCQWJHQDPSDDQVGINEBYSXFQCPYLUQGTETDLLZEVBDLJHQORXGKSKEWRWAJFOIKZXJPVYIWDGROAXKNBPSMPRKCKGKPUTLONOYBJCMBEHGUNFGIMNHDORAAHQVPUFUILAXEDZGTPKZVLRXZMNSEAMFJVSFZWBNHYETHVRFSQ");
    msg.sensor_class.assign("IKNAVGCGHJRUSDSYTDDIGLJIDVCCRMDHKLFBIYPDRWPSQPQORQKUNDPDWLXXGGMUOJJHXPRTVAYYWVZFBZDLBNJNMSOKZAXTHECYA");
    msg.lat = 0.929995579997;
    msg.lon = 0.030671548353;
    msg.alt = 0.786902361823;
    msg.heading = 0.232519719062;
    msg.data.assign("QUHRXJPHCAYKTDLVTCKBKRDJBUIYBUWOHSQVJLNNGKGIMBECOVAXHFFM");

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
    msg.setTimeStamp(0.591532451416);
    msg.setSource(32515U);
    msg.setSourceEntity(164U);
    msg.setDestination(54807U);
    msg.setDestinationEntity(95U);
    msg.id.assign("IDKQVKLCOTYHQJUWZMYYIUDWKFNMQLKXOAYEADFOWVNAPCSVEZQHULDQJGUEYRIVBCYPODQWNSIRXRBEPRAZVZIWPJRACBNEKCQFBJHMXFZPJZATEDPSNATMYLIXJCOXKJVQNMWUBBIGTDMHGIGHDZMAOPPHCNVTUXYUNROIGEVWDHEGNAMXTKORELTSDOXXRGJJLGULVWFWBOQBGPSMTSU");
    msg.sensor_class.assign("NYVZWAQHZVIUQADYACLPWVCDFMXMSLJJVCGHTOQRWEHNUJOLCULITBHTZRFKEFGXSXTIDLQKVMMIRHIDW");
    msg.lat = 0.276092860607;
    msg.lon = 0.76299220874;
    msg.alt = 0.225721451249;
    msg.heading = 0.153475651004;
    msg.data.assign("ANADMNTEAYLCRASPCGBXVKHJWVOGMCBLQMDDTHXOMHWUYPPOFDZRDGDUNSFGDTMBIGOEWHEGHEBPZWMUJIWAVUYSHIXSVTTDVDHKOEJQZOPJGOQRKQRYZEKRZFSYLMOWLUCILRKZHYXFBRWRICTEQKBNAVLHYSUFLWVBAEDVFBLFQOUAPICSNGVXQKPLKQMAXLNPTJPGNC");

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
    msg.setTimeStamp(0.0196570826415);
    msg.setSource(37774U);
    msg.setSourceEntity(159U);
    msg.setDestination(19440U);
    msg.setDestinationEntity(235U);
    msg.id.assign("QUPCOXXYKVNWEGSBGSIECTALGZMZUVQMNLUUDFFPSACDGDSCYGPJMFGLLF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AKUGAWAEMTPVQOOCSRFXMRVLVSCVTLFNMXNCUMOTPJETDODIVGLMYGRBUSKMLAAIQRYHWJBKOHFEOGAJIJYUSPVBFFLVETCKIYNKQYMQUWLXXWZOZNZHCZUEYSMSIQZQOTALGINWCRXHBGZZXHYL");
    tmp_msg_0.feature_type = 134U;
    tmp_msg_0.rgb_red = 88U;
    tmp_msg_0.rgb_green = 24U;
    tmp_msg_0.rgb_blue = 181U;
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
    msg.setTimeStamp(0.727007630585);
    msg.setSource(53018U);
    msg.setSourceEntity(115U);
    msg.setDestination(5100U);
    msg.setDestinationEntity(112U);
    msg.id.assign("GRMJDYMRUREPLCXNXAMYJCLQLTJBQVHEOJQACOVGKPHUCSKDONAAZXEMZMFQKLVBFLLZHUZONPFBVITFIZGRHMDPVE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MMEVOMCVUVGLMXNDBQB");
    tmp_msg_0.feature_type = 47U;
    tmp_msg_0.rgb_red = 102U;
    tmp_msg_0.rgb_green = 208U;
    tmp_msg_0.rgb_blue = 192U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.759224310626;
    tmp_tmp_msg_0_0.lon = 0.80699373376;
    tmp_tmp_msg_0_0.alt = 0.34465833033;
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
    msg.setTimeStamp(0.118741966928);
    msg.setSource(46131U);
    msg.setSourceEntity(184U);
    msg.setDestination(5933U);
    msg.setDestinationEntity(128U);
    msg.id.assign("FWITQWDODUKYTOZMNLOVSZGDKEVMUTHRWXVUBGPXPAMDQLPWWJPEGDZTFUPAYVBIJSRKPYYRWTBRXOCUUVDNINORPYBCFOT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TPDAEPNUCRKCJVIXZXLNQPIVWXXNKSOLMJDLKWYCCGXPNWHAQMHRPRYBRHBGFKGTJKVGZMLBTZJHAFVTTTSYLZAITHVVFNKLIBLYRKSMAUHWDDOE");
    tmp_msg_0.feature_type = 212U;
    tmp_msg_0.rgb_red = 16U;
    tmp_msg_0.rgb_green = 251U;
    tmp_msg_0.rgb_blue = 166U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.444729961955;
    tmp_tmp_msg_0_0.lon = 0.018761196602;
    tmp_tmp_msg_0_0.alt = 0.129059864722;
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
    msg.setTimeStamp(0.631724721714);
    msg.setSource(52394U);
    msg.setSourceEntity(239U);
    msg.setDestination(3253U);
    msg.setDestinationEntity(103U);
    msg.id.assign("BBTVCFDGZQFJACDSOGKBXSVFMQZXQLHCDSDNYLUW");
    msg.feature_type = 44U;
    msg.rgb_red = 52U;
    msg.rgb_green = 68U;
    msg.rgb_blue = 50U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0507529048844;
    tmp_msg_0.lon = 0.262533159798;
    tmp_msg_0.alt = 0.204673109206;
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
    msg.setTimeStamp(0.587348156643);
    msg.setSource(23542U);
    msg.setSourceEntity(172U);
    msg.setDestination(8024U);
    msg.setDestinationEntity(173U);
    msg.id.assign("SKAOAMXEVGITAVCXPFTIGYRFFABQGULSIBIWWKMOLYYHQAZRCNAPTENVMRJJCUMWFIRITHCNZWGEUZVZOYABSAOELJGNCAFJYILHDZHQKHQUQDNXEVTBSXDQQTVSBZNPVKYGYEOMCVZEOLLZGXLRIQNWTTWHEWNRXHFOIJCDUYJOZWBXMFGRPKPCPSYWLJBDMBUZLSONFPEJBGCDYOKRMDVPHGKJHUSKTIBMHWUXN");
    msg.feature_type = 67U;
    msg.rgb_red = 8U;
    msg.rgb_green = 26U;
    msg.rgb_blue = 160U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.202717021452;
    tmp_msg_0.lon = 0.335565558078;
    tmp_msg_0.alt = 0.0768453001174;
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
    msg.setTimeStamp(0.756449514242);
    msg.setSource(52578U);
    msg.setSourceEntity(69U);
    msg.setDestination(10716U);
    msg.setDestinationEntity(168U);
    msg.id.assign("VMNPJONUNPZROMNDEVCPXBRZWJSMWGBQSAGGSIEVBERNUPJZAUMJPNHAYDEPILGYOZUHSZXDCCUN");
    msg.feature_type = 133U;
    msg.rgb_red = 144U;
    msg.rgb_green = 247U;
    msg.rgb_blue = 38U;

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
    msg.setTimeStamp(0.971643937199);
    msg.setSource(18125U);
    msg.setSourceEntity(250U);
    msg.setDestination(31537U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.995883333357;
    msg.lon = 0.0682139830447;
    msg.alt = 0.55952270638;

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
    msg.setTimeStamp(0.812957840766);
    msg.setSource(60865U);
    msg.setSourceEntity(227U);
    msg.setDestination(54225U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.134874666537;
    msg.lon = 0.109561365111;
    msg.alt = 0.210887485517;

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
    msg.setTimeStamp(0.460978584364);
    msg.setSource(53186U);
    msg.setSourceEntity(151U);
    msg.setDestination(35286U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.829190344488;
    msg.lon = 0.600491264654;
    msg.alt = 0.177543306535;

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
    msg.setTimeStamp(0.126469296647);
    msg.setSource(56269U);
    msg.setSourceEntity(122U);
    msg.setDestination(13176U);
    msg.setDestinationEntity(90U);
    msg.type = 166U;
    msg.id.assign("FVWYSHLQRLPDOKSNYEXTUHZVMFCDFGJIHLCARNKLROBYONCURYEPQVQMEIIKVOIKOFADVGABPIFMHGLCBGGDGHMHUN");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 641;
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
    msg.setTimeStamp(0.18027793758);
    msg.setSource(32833U);
    msg.setSourceEntity(65U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(151U);
    msg.type = 218U;
    msg.id.assign("XHEPBBVXVZKTVAKSZCMBWSNBWUACGSMTJZHXYYZITDQOIHUSEVVFYEERUAYBAVGWCOIJYSQRMEWHALLISUXLGNDJYINPZGZUHIFOWCMIMFKYANDQMLDWRGXDJYVROSFEJEZCDOMCPPHBACXNWSGBFQQILLTNXBXOPTQLXJQTDZRGWCKPJHEHRFREKQSVOATQZDLGMUENBPNKUFXJINJBPOLJRSUCTMKACFWRDAKPKUGTOLRVVOZHGTQ");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("YLYKVDLOAODKXPNIMALEBPZGEJCCWTIAXPGWJBLKDSOPKXMPYSCKDQXACHRQVEFHTXSJGRZRYNDVJNTQTUMGEFRNSJZSVFRIZQIPLSPABHFUGODWDXHWDBAMUNAVFGMJIPTUEOBRHCFNHJCVCNOF");
    tmp_msg_0.text.assign("VVDZIQFXRUZMEJ");
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
    msg.setTimeStamp(0.317863108892);
    msg.setSource(40280U);
    msg.setSourceEntity(229U);
    msg.setDestination(37924U);
    msg.setDestinationEntity(132U);
    msg.type = 4U;
    msg.id.assign("SQQGEWNTVIGAHKNJTEOFYAJEPGQDRICJSIGFXCHPSO");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("EPMOKBPIYTDGLUKUDYLWHKBSZWKDPWIFNBLJJWJNMWAEJSQUOVLHPQXKTFCQQGFDLAGZYURSJWIKFAZQTFCATMBMPZMXQWBHBZVLGRYSOJYYEXTTHXIKTRDCWIGQNPBXNEOHVQDRBZ");
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
    msg.setTimeStamp(0.627588137167);
    msg.setSource(22377U);
    msg.setSourceEntity(101U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(24U);
    msg.localname.assign("PNAADYCZKIUXUFLXKRCLXLSISSTFDTEZHINPMOMDAVJQGXUWTOCAOXRQERTBKBMPLTJDKGXMVFPXFYZLWQIYNOABKHRKCIEHKJXWPECJEUHJIAZGFSCCKUQBPGPQJEKDGUMMIRJRFLEEYTLPHVMQMCSBJNNCOGWQHTIJSOAYYDWTUNGFBHIUSNGPGVDFQHWORLBVZYNRDARXUOEIABYWDMDVO");

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
    msg.setTimeStamp(0.932789620977);
    msg.setSource(45878U);
    msg.setSourceEntity(253U);
    msg.setDestination(7483U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("ATPIYCEFNCMJKWUSIWWRROEFSEZXQUPMADHLJCSMZJSGPVDZXBUOZTWYXLLVLOOVDCNTMPVTXGJSAITIRIAVXVGQHJXTOROYLOAPOUIMJUWDVCKFKGNVTQDGFUXCDHKLIIMSEYZLSYAXZRHFYWCSFONTHFVEZYFPNZVBRIEAUBBQHCTHYESBHAMUTGKDRCKBUDLNNDZWJNZMJWNYXGGBQXAWAHBQPLKPPRLMQOBMDEFNICEBHQWGQKFJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UKDJMICCCDSHFLFSJYSHZOTMGZSEUMOQHTYNIOAWPNQAHBRTDPBTEWZVKOBVPJWIPTFBQ");
    tmp_msg_0.sys_type = 181U;
    tmp_msg_0.owner = 55681U;
    tmp_msg_0.lat = 0.679328380508;
    tmp_msg_0.lon = 0.348134920411;
    tmp_msg_0.height = 0.443456244535;
    tmp_msg_0.services.assign("MNYYIDRESJRNAHFQHJALCJMOCGVSKBSGXMSZZSIWTYIWRJREDKYPMFKVUCNPYUKOKRROFAQVJZVLHNDSBLHFIOURWPXWYJIVUBTOJWEVPEQBMPQAOVDIIALGTHZFOSQZQWEKLYUNLEASYQCGQCGRNJKMAODNUDTBHOIZFB");
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
    msg.setTimeStamp(0.81673091023);
    msg.setSource(15326U);
    msg.setSourceEntity(24U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(241U);
    msg.localname.assign("FFSQHAPTKBWQASUAWHGLFFYJEFCYEAZJZNEBBMYVXUDCYOYSUXGWJFHIYTQKIETJCHTSVXZTXRSFCLDXRZDLUKNTSHQGKVNXPOJKPWZAKFUIQPDERPLZNMTWDXCVKJQSMPSEDOILKWSNVWGMRQTOMDOBQYPAODCCQVGINCE");

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
    msg.setTimeStamp(0.553088828282);
    msg.setSource(16553U);
    msg.setSourceEntity(254U);
    msg.setDestination(15197U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("BDWIUJRKFWKNQQHLPATMTQOAWYFRMGPICOXPOCFSHXJFBSRKZVLZCRGCUDISMFDGUNGJFTSGJVSRJWRXAPDNWVCZGDKHTTLORMWKQFEKRLHZBBWUWVUPHYIANWSTHPSZHCKVPXJZMEVCYJTHDMBYAEITISJRCQEIHPILGRVGYYOKEBDVMCKAXENSLBFBLQYJVZEYTDQYODGTAOUIZVXNOYZLLQAOMAQPPUAENUXKSUXXDFIEBCJGBHZNN");
    msg.predicate.assign("YWMIOVSUHSFNVOBEGJPADFTRQ");
    msg.attributes.assign("EIIGZLVNDKTQNUTDDTVHNLCZCUXFJKAEJAJVYSKYEXTQGOWHASUMZQHRSAEVIKOWPAIEUPBLILRUZMFUAXOESLJJLJJSTBROBFAKQGQIZSVHGYCAZPCGRYNNDLRZIVYMMZWWJDMXBQKHQGXPPHCVXBCIORGUSHDOHHTXWPMWUFEMRYYRJXBBOCPLRXUVLIUKFDDNVKP");

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
    msg.setTimeStamp(0.642396279953);
    msg.setSource(1156U);
    msg.setSourceEntity(229U);
    msg.setDestination(61002U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("PNKCJUJEHOWBVOPALOVFJLKSREOSIDUVGLGLIMTABURHLMQQEJYISRIIEQKYAZRHGNSCTOBGQEUKHGXDBVHZWJVAENJBATCXTCZPKCHZ");
    msg.predicate.assign("FOXYKEDACNP");
    msg.attributes.assign("OXHOBCAKDWPVEOPZTYSUCVTIYRVBRGHZXFKZLELUXFWNQRYLEVXCNQJMBQXINDJLGZUWNIKDHSHLFTMOMGDYSIUJFI");

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
    msg.setTimeStamp(0.897363160261);
    msg.setSource(3353U);
    msg.setSourceEntity(147U);
    msg.setDestination(22988U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("MJBANZZAZDHHXNWGSGWCBCQIXDFTOYWKDECNNLNKKVUCNVIWFEJGPHAOKPFMWTDXRMCLJRCUIJOQYILZQAJMOYERINZOTBWPSTEWFRBGZOHYEEFCVNCWHXSURTZQJFVMTPYLVFBBBRPPLBAFIGDHLUISBCSYCDYPDPAHZORJJVHDKTJDKM");
    msg.predicate.assign("HYFPOZINMNNLDKGNERACRGOQEIAMPSJZUICBBJCGDCKSVKCWJIQBBHXOAFIMZMGVUNWDLXFEQRYTGWAPOMPLXTAUNRZPLWVLKKVFPJHUNYALXKZRTTZD");
    msg.attributes.assign("RVPOXXQGNDCSUXGLIRLNTDCOFMHYLYOJZWSDVYJEMKXRTWODAUMEHITUKMNKZJAPPWRIVMMCDGVBGJCORXOMYJUBOILHUSPWXARGETZELVKTXJFJTFALPIVCWDHSFBQOOGTIUQWRIKXPYJXBAOWRLCNQZGNJSPJQAZHAHVKEZBYXUEBZZFLSZQFWFHKQIIFFBKPTPTDGLEVAKVNKGRABMCHBFMWQQYLESSDRUICPTZSVUDENUYD");

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
    msg.setTimeStamp(0.78582399988);
    msg.setSource(25912U);
    msg.setSourceEntity(168U);
    msg.setDestination(60086U);
    msg.setDestinationEntity(124U);
    msg.command = 23U;
    msg.goal_id.assign("YEKRGYUQWZLYKFLPLUDBXXYCACEVVOLFIMJEGBSSOVWCTMIJOGICXEMMEGJBKOIUX");
    msg.goal_xml.assign("CJSEXZNVKJIGUWMQBOYHNQCXYWDWTOFSSNNPWLIVKPXZVKAKOYEWGLJTSGENSJGIQEJPXHRTXHOCVSPYXUMZVMDYBTUOBXRMUFCJDHDLEDZTDVYHNBOICWFITYRAJQXWRMZPFIZCLNLPRVWFQIIQHBQLUFQZSYTXMREPGKWENCOSKCMCPGGHLRHRGFXWQJUOAMRLBDHRZHUUKSNBBAUBBVLATODMAZKQFMGJUVJKNPYPASTIAYOFCVILDAEZDK");

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
    msg.setTimeStamp(0.888399642394);
    msg.setSource(43906U);
    msg.setSourceEntity(169U);
    msg.setDestination(54579U);
    msg.setDestinationEntity(233U);
    msg.command = 144U;
    msg.goal_id.assign("EQQWOHXICHVHOFCKRENMOGTMLNYLKQFXGRUBSXWRZXZWBAJFCIZYTMYCJHOHEBIYUTCHTPZXGDEQPAWKJPICZNTHWHGDSGVRELHPYBDPGMNHWNXYKOJMVPOABFGAZDSJMSPKEL");
    msg.goal_xml.assign("EDPMKPGCPXFOIFUSEMYUGQOQUZSRVENZZLXUENENNAXONMLSPAYKXCCSVYHYJPKHWRBTXLVRMPWOQMQJBMWMWSBIWBJMBITCXAB");

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
    msg.setTimeStamp(0.653230250289);
    msg.setSource(27523U);
    msg.setSourceEntity(58U);
    msg.setDestination(42572U);
    msg.setDestinationEntity(99U);
    msg.command = 225U;
    msg.goal_id.assign("UCXUUJYEVOZSPHRLQXUTBOEFAQTREVSNLQIHNXUAAGULDNQHRTLXCMOLIZPWIOKLJMCUXMPIZVSADKJKPXLRAQYMDZZGQKSJGTHWBFFOKTZMZEVCOSXENFWBPSQMNZGKDPIJCJYTWXVSAHJIOQGHYGLMIKNSFVCWDDYJDYHCYRWBDEBABWFIHAQPAOPTBXCUNGVORUYIGBJZRSHSKOBKWLFELW");
    msg.goal_xml.assign("CHLTHXVQEXAXMOVOATKMQAHUNTJDILERGBDMXRLEBVKADFCVYMBTLNBIQYVBJYYKPJWAUZHJXFDPTBAPOGWYGARQSKRYWCSWTXFNXOPNJCOFRHELCEMYJURWUZSOKCINODYFIVKYZSLVZGXQCNKTPDFWMZDIKEMQDFRIIHHUZGLPBZXHALOTTFJCSVQSMSWH");

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
    msg.setTimeStamp(0.501220604532);
    msg.setSource(26699U);
    msg.setSourceEntity(249U);
    msg.setDestination(8310U);
    msg.setDestinationEntity(229U);
    msg.op = 154U;
    msg.goal_id.assign("NOUKQYMGBKJETXTJZRWGKDXQBEPLVGHIJWDMSFZVXMYMSHAWTLNRJXFRAJPZCYOTFEEDLDCCIRCZZPCJDEVITFLGUQNOYPFXJQRMHDVNGAQYRXCI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MSCCGTDGKZJWSOAALUYFEXERXXAQMTYUOJNUATAKJPIXHWFSVLPOYFUWJXRJHTYQQAUIQUBNEOZWHCVPYSBPKCSWCPTDZUR");
    tmp_msg_0.predicate.assign("VZHDQZQANLSGQGELYEUARCKRKGDIVNFMTJSHQZUJLQKJCKWGGRGXMDWZYYDKIOINEXTEHFPGYRUNTCBIOPPLCOBXCFWIILMCCNEWEXMWBMYYJSPMTWVAHKBLUFUJIHPATBUMDQJNTNGOUIZZSAPHRLTTMNZXRIFNVQEPWVFOBXBKJXBPQGEHOAFMVUFSXPTSYTKYXNASSVQOADULAHVRGHRSLZVRJLF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VJRJXHHRUGBZIXPTKSFSWOMLIWTVSAYUXUAMXHXKFYQJBKAOZPNAKWMZUYDNRMBWIWMJQTOXAOVYUDEMZMLRTVVQNKDSTSVNJUTLYGLBSKYXPGIWSBPODYIALVFNXPWTGMNEUYHJOHALRZSDZEHYIIOLZKELLWHZJHXPRECCCFUQFQAGJQTKKWPYCDOSIMCHBB");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("JUZLHOQPRCGDBPFCODDZSDBETVTFRUHVBRONEZVIYKAZLXIKTLERXCKDHGJIMHYWTUVBMJMCYJOEGIJAZBXGINXXPSMFSZI");
    tmp_tmp_msg_0_0.max.assign("ICMUCMKGXNPNWLVRYRWGTOABPEMZWZJTDYJVVOVEEBCPGBFEIFYQPCPIINDBXOZFJDAVMFXO");
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
    msg.setTimeStamp(0.0790207460619);
    msg.setSource(12171U);
    msg.setSourceEntity(123U);
    msg.setDestination(26997U);
    msg.setDestinationEntity(127U);
    msg.op = 237U;
    msg.goal_id.assign("WUIRVPCQTPZQHVNUWMDKCAXEANDEBJQJVSKCNKEUAUSKOEJHPKWSOZANFLFRCHQYARUPQMHGXUAYDMESJBFZAMNPFLETOPODMPMGLNXLWFNDVELQYJIGKMLKXWJCROBCLKHOGBJDTHITZBTYHWIYWSGOQBTBJXSFXOTFLUZIWCI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZUQFILYERWNTEQRZLRHFOB");
    tmp_msg_0.predicate.assign("HAOEMNYGTPAINSVSKUTBPNSHZFDKOJADQPWPOFHSHZXWWGCQTLS");
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
    msg.setTimeStamp(0.142811914778);
    msg.setSource(56074U);
    msg.setSourceEntity(62U);
    msg.setDestination(7174U);
    msg.setDestinationEntity(209U);
    msg.op = 196U;
    msg.goal_id.assign("HPNLBFGGDNIGBIJFMRZSAAUQYZZTQCYIJVHMMSEVYMTEKBJHMUHRKANWRWUTCBCKLXCCOOKGIRYWNKPQIPVJXDECTOHCLBKFJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FFVGKWIRWWXQHZYHZOIZUTVAYVTCPZJKBXILTWPVZEAJAEKNXROMMZDJBIAFNPOHIGHCIVQHNUZAXUGSWDUNYIVYPZLHKWD");
    tmp_msg_0.predicate.assign("ZTPQQBMUKAYYHTOBOGYTHOUMNSCROAXVCSMZSJUGKLVKZEDEGYFWLGULVVRPCXBDTLDXWTIEMHJFNCKFWNNNJHIQPWIDWLMREVQJKKZSTVCGIMBUOWYCZFRYYNAIKHRIADXRZKDEQBAXJBSACWPDNRVSFGPEEQIA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OWLQTYPFOXEVTVMVZDLXYUVFVSTPCCEKCEXENLOROLMINWATFGFRFPISGZHRDQXWKKBIUSTBDJXFEVSMQOKYBOKXHNUQQLOKBEZJKZXMISPHCWIGGCJAWNEAMJTNBZVEJIUSALTFNBLCPRGYXUBNPCGRKAAKOCMQCPRZZTQDTWJLWZPHXCQNVXGHSLMWAGARYADPYHDBYSJFAHIOJRUBZUHDSKZHMIULJRIDHEWVUGMPUYMODGJ");
    tmp_tmp_msg_0_0.attr_type = 13U;
    tmp_tmp_msg_0_0.min.assign("JARSUSYLWMBROPYNVVUDKTTDKPXIULYPMMMXOXHAHTLRUKKSBXFAUGOBAGCZRQLFGDOKCANZFLPVQVWTIDZJMBZVMYBWKFXUGIPQBYIYBLSGMHXNMXDNRDAEFYJVUXTSKJOWWWFPZJHFQVCAMOFJNZUTQDYJRENQBCDKROCGSAELJSSGHTCYYIELXEZVPVTGLAFTHECBEHINPQEMVIKOTCGHRFGSELUBNWIXQRQNJHPISN");
    tmp_tmp_msg_0_0.max.assign("CYLCJTAZZNTOEKUUCD");
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
    msg.setTimeStamp(0.721356634753);
    msg.setSource(2629U);
    msg.setSourceEntity(157U);
    msg.setDestination(5071U);
    msg.setDestinationEntity(61U);
    msg.name.assign("BTRBSWIQCLQCTXBQRWOABTEEFGDGMMPNWXPJKATPSPZROMPLOBUHTHAIVD");
    msg.attr_type = 238U;
    msg.min.assign("JTVKEHMERCCZYQANBYLGKOJWCMKSULGEMFQNLSXYALNXGJMKFGYROPGMRTABIQBZBDHPVOIRDQSIPOFHWDLDFWSJIGIELUCCUNEYMVGBMXTTKDQWNHQTSKPDCVRHNGZUQXABXIDNZVXCBWTRNEWABQKJLEVSRUDQNIJWIHYPFPPVCZZXPZALUKXTFDGSKJYDZ");
    msg.max.assign("ZQXULEDHJVUYSWBYPHLGHKJYSINDVUGLKSXCNCFPNOJTORBCEJQZW");

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
    msg.setTimeStamp(0.748329299588);
    msg.setSource(43971U);
    msg.setSourceEntity(10U);
    msg.setDestination(30573U);
    msg.setDestinationEntity(112U);
    msg.name.assign("UUWPRUXDYWVGGRKUMAHYGPHFCMFNASOKWYKXQRQRQJJNGJSVUEWSHJNGYBHSLUTBBNCJGMZELFWCUBMMNHXVAGQOVFBPSMZZOKIPNFEXLCJQJCONLQOYRTMGWQZAFKF");
    msg.attr_type = 58U;
    msg.min.assign("JQOKHPKETNWRRWFBYIZEFIFWZMGHWOAVGVGTICGARSYPIVCREVPADDPIUPMUUPNBKIMBDTVQLIVUXJFZSUULSTLWOJARJDIHQKFUJYCXCOHXBWBVAXARED");
    msg.max.assign("NPWZURBUHHTNMVZVFRBTFCMXLVWOTVOTAHSYUNKGHIWCJUBAABFZQFLDJKMEUCSFNXIGMWGGFHXEURWGAGVYRTLGXGZMBBYZDQDSGNP");

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
    msg.setTimeStamp(0.220061494536);
    msg.setSource(57621U);
    msg.setSourceEntity(223U);
    msg.setDestination(41590U);
    msg.setDestinationEntity(9U);
    msg.name.assign("ZHURXJNUGDBQEOHPAJLPPLRDWKSHKKRUGBJZDZYQCFIZNCXRGXQICCLZYJNHIBMUKPBSADDIGWKREAMWRFEMOGESKHHJWOAZNSWIFVMPOKNQGCEFQGLWBLBCWCUYVFCRXJSQDLYWSBYLPUTXFSDNZBVJMFAFMHJVPEAQTNBRKEYODUBDPKTLUCANUEIJTMDYSTVYXYGOPVZIXHSALERMKFPQQXASTONGCMTXWTVOZULTRYNH");
    msg.attr_type = 174U;
    msg.min.assign("IJGQXOPAFTMBESPQDDVJYLWUSEHXRHWWIMAZKYKCPSIQBLVMLBFQBMRSBLZIYWSAGNRJWRNKOUMPRAKNJTGNCRHTLXDXHCJYDLOVYPUHUFSVVWNZKXSVHUESABDFUAEZAJGP");
    msg.max.assign("LSWKNDVWHSBUEGKLAVEJJIMJUMXCRDNJFXHMNYQALUHUFKHHZTBEHBOLSRTDYLGYKVDBDFEIMTSTCAATFNMJQIRQJQUZXVWELBQWGGUJNCWJWAOHTVYWTDKBISKEZPHDPDTZNZRRGCKMTVWPJGGOGBLNEZPYYRSMGYXPDRBCIYVRCOFYICOXCNCUFSQKBOWZXIXLHDPOJGIRSVNTAFVQQMKWXONOHSPAAKAZUV");

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
    msg.setTimeStamp(0.280054958396);
    msg.setSource(25010U);
    msg.setSourceEntity(60U);
    msg.setDestination(35781U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("YJQCRZKDFYOGNKKAUIAJPDUVBHGMRUAGEXNXBHZDCZJGQWCYDWIAE");
    msg.predicate.assign("UKFEBOFTSYMXZCVJFCPGWTSF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YQMOFVNTBZZQICMRWQNXGBNDRSHBTHKAQKPPOHNCJYLNPIRCIEXOGWFQAUSDLJHXTSYUXJOFPUDGOWKMDIIGIKDYIEYYKRMMTNMXKUCSHOTCVCPZLTWUZLSZJZQYJBHFTZQHNNLPVFIUGKCDAGMOZXUQWPWVERXMYESWLFOVJBLKWLMAXKQUMJHGRJSNUREXBOVWEEADPIYARBPWVRYARKNASLEHTVSCTXDFTPGADZVFSOLFEHF");
    tmp_msg_0.attr_type = 9U;
    tmp_msg_0.min.assign("IZYJAREMLDPEADZFZBPENLOHEYXDXXVFKWUZMEVYVIOQMEEULHVWCSUGVDNKUAQTKXFDHHFRJGGBGVLPBSMPZRAJGSIPBUINJGMASQKCWRWYCJQCDIRRBJWSSORHTKSQWYXNMLPSQDJADCHFBICTCATJAWMKLGLXQACYGKNMNJCTHMNZYBLYIEWIPTBIGMROXZKTLHVDKTVUUZVOPZOGWFTUFXQQNWRB");
    tmp_msg_0.max.assign("VGWRDMWESVGDYPTIZDUIYJC");
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
    msg.setTimeStamp(0.134429089574);
    msg.setSource(33151U);
    msg.setSourceEntity(53U);
    msg.setDestination(60592U);
    msg.setDestinationEntity(18U);
    msg.timeline.assign("XTPHGJCMPUWGCUSWXKQLDRBMRBLOUGBPGAKNTDREVDNILPEKDQPVOLXWSAACSBZVLJYVDQJMHHXMYOFGWOUSWIKFFJSXABOFPBXQDAYVIGAQULVQFMBVKODWUJRONCEWKMRZTHJPNAYEC");
    msg.predicate.assign("QJKKNJFIDGHAJHVHYBBEWWJFMYRSWFEAOYMIJVDEAVQPFWIANKXDUTWSPLLTJMBPZLCZX");

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
    msg.setTimeStamp(0.778071747379);
    msg.setSource(35387U);
    msg.setSourceEntity(57U);
    msg.setDestination(29347U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("CAJRCPGUTDZVDBLTEBWMXYLJNJZJMUCXJPSAWVTZYIRTZGIHEOHIXFRQMEHNIEKIAIR");
    msg.predicate.assign("QFZVWDFXQTTYLTEVONWFWPXSVBAI");

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
    msg.setTimeStamp(0.773745164835);
    msg.setSource(16588U);
    msg.setSourceEntity(232U);
    msg.setDestination(5189U);
    msg.setDestinationEntity(6U);
    msg.reactor.assign("FQZDSDLSKWUZAASOQJFNNRZCJZFICUXTQXMPCIBZBJVSVDEBKIUNVVGTNNFGHLEGPCOAERJYPJKWQCPVBEREOGBNYJROARUWZEFXYHXRQDGHSTUIKMLNLXWJTGCMXAYYWNELFKIMPAKHIDBNMQTODVSSXLMTRKAJQPHDAZPQSYXVKXCHUHGRBZLESIUYHHMCVAYIPLDRZOQIOYSOXKWUMAWWLUWTPOJVYTGTVM");

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
    msg.setTimeStamp(0.048224580173);
    msg.setSource(27671U);
    msg.setSourceEntity(26U);
    msg.setDestination(10070U);
    msg.setDestinationEntity(203U);
    msg.reactor.assign("GIPSDVYUDPLEWRTFYLSIKOWWNJWJLDJPNJEKYUZZTJOHWWXWMXVZIEUSMXTUSQOJYRQAULTFLYHJBMAOCAGETQUPSQUSHGHGOZORBBPJCFLFTORGBGHZHHYGAYEXXNDBGRMFEMHSTCMLUUIKAENAFAVIXCQCCLLDNRQZOORPRIVVXKRFFQEBECKNCAZBKXLQWSBPCDZOVJYMDQPFTED");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VOADMJUBLM");
    tmp_msg_0.predicate.assign("PLTPUIOMEIZAONMKSONIJYDRPBGNFIPLGSQXBMKGCANSVUROVXJDQRMFHXEWYIFSKKNDHJJBIGZVGUHISKLDZVTYUZURAYKYAMSWVPXUTVSHRENMKJRWZCPAQANUZFSTXHXNVOJNVFWZLTYXLATCTXJILWXBQQGWEYSCFGBDRPFXLKUSKTJHZIYMBWBEZLWLPTMMWAHGCDAVENUCFORCPQKHOUEPOOWTCLJQQVEDHEGCQFBBDAGYRDHYDQRZEO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IKZMBAQTXQJBDRCWQSJLVTKCNOYHRCNJDODDFVIJUZWSCHQKIRF");
    tmp_tmp_msg_0_0.attr_type = 140U;
    tmp_tmp_msg_0_0.min.assign("YDBYYXRDWZSXENCLPGFQYQRVWXOTOTLLISMHVGOLDLFWKDCIITAQTPCFHUJVDXTNJYSKAEPXBCKJUGCM");
    tmp_tmp_msg_0_0.max.assign("TYPFKAHWGLYOLQLFBLMYIVOBVGXFZFCCAGRQDBXAOOHJHSUJITJIULXNXSZMWUEIMZQODBEGXHPKHAKQVFWDPBQBRWDOANGRCLSVZEZKVZMOGLRFXXOSMUXSEDSKPIWECJXUNEOMEUYHBKRQFWLDNNTISDLUGUBDEGJTHYVWYYTTBXNPMIMYCMJPTSWINZAAQRUV");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.850122286534);
    msg.setSource(48348U);
    msg.setSourceEntity(126U);
    msg.setDestination(16559U);
    msg.setDestinationEntity(231U);
    msg.reactor.assign("FDGZDUJKWFPEBBZWJOVIWUNOJKKHVOWSAXPKWJPHMVXCMEYBTTWUVYMNMDUCBSGFRVLBJXGLUCNLNJUMFAPLIRZIIYIGKVLVMLHFZSCEMS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EIOLCOPFZAROVNIXGX");
    tmp_msg_0.predicate.assign("FKOZYYHFBEHFWPMEOBBKDAFKLXGYQUTGJRZVCISSCCBRFRATVSRHBGQROGUVAKQERWYUCCSQFETMIKZBAYLIOTWLXZDXJJNQXPCQNICDMEBPAEVSNXUIPVNXPSDANGVHWNZBQJTYVVIXXEWTDMNQROGPIVOGTDZJOJZUHNGDROZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BIUUYLPHKNZQZGZUSWAVPTTCLWRSESVOFGVOLGAWTVGJIMFSDADQOASOIRAVASUXCEWZOOVHWWNWMWFHUQEZETYBINHOJXORKJYSLYITUKPXBJVOAMXGPABGZHKQHMXLLQFQMJLYNEDIPBCKJSBT");
    tmp_tmp_msg_0_0.attr_type = 14U;
    tmp_tmp_msg_0_0.min.assign("SPAFQXQFANWZCYVVQHMDAWADUSQZGPHBXUUCJFCNCEEGZMSMWUHXBTXREKLQOEADEHDSZKOSEFXGUTHISSKBOPBHKVHAYGZRHEJTGPYYBLQONGURNLBUWLIRTDJQISMJPJLCMFGRIIUIPTOOYOOODJLTYJY");
    tmp_tmp_msg_0_0.max.assign("LLROGFFBSBTXCCWQTYZNRZSAMKQVBEDLQAYIVTYVUABUPTPYKEMGVOALJNRAZXUXGSSBJFDSHOCSENCGORYTHAYEPTKRJSDQRJSKZYKVVRPUVWWPHRJIALZNWCJPC");
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
    msg.setTimeStamp(0.803263901076);
    msg.setSource(18532U);
    msg.setSourceEntity(216U);
    msg.setDestination(20870U);
    msg.setDestinationEntity(82U);
    msg.topic.assign("HWURFLDZXGXMDIQVHJMAYNSBDVDERQNKIJBBQTTFVJNKTXMWQBJPWAAEHASEJZFOL");
    msg.data.assign("ENLWXBXKJBPBNNJCTM");

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
    msg.setTimeStamp(0.853822411608);
    msg.setSource(3918U);
    msg.setSourceEntity(103U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(140U);
    msg.topic.assign("JUPCHTTIKQKILXYDDSHWOFGSBYJMYBEUDFXZTUNARYLIPNHIZTOLBJNWMUZBYQRWHAZVIGXQGZCQGWEAZVLZIDEHRVWQWVYJCRFHVTYH");
    msg.data.assign("FOCAXEBIZWKP");

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
    msg.setTimeStamp(0.957893938448);
    msg.setSource(31227U);
    msg.setSourceEntity(200U);
    msg.setDestination(28708U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("JYKQBEMPQSLSAZIOYSXBYANMGONAXIVOTUZHUKGRJFFCHAKMVXDWRQFYEJAXSYKWLXGDYVEZXUPTWUEQWXPYWCCTAHFZGDPNMRHEAVBDINVPBONUXKJBJ");
    msg.data.assign("XENECHAUMYDNEMNEPSTNBBHLABZDM");

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
    msg.setTimeStamp(0.183706368639);
    msg.setSource(37925U);
    msg.setSourceEntity(67U);
    msg.setDestination(31550U);
    msg.setDestinationEntity(141U);
    msg.frameid = 105U;
    const char tmp_msg_0[] = {-35, 88, -125, 23, 99, 89, 73, -33, 16, -83, 35, 47, -8, -104, -92, 112, 85, -79, -67, -14, 109, -71};
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
    msg.setTimeStamp(0.806620924485);
    msg.setSource(48087U);
    msg.setSourceEntity(58U);
    msg.setDestination(53198U);
    msg.setDestinationEntity(88U);
    msg.frameid = 41U;
    const char tmp_msg_0[] = {10, -12, -52, -91, 111, 103, 56, -28, -113, -19, 38, -17, -8, 122, -92, 75, -119, -48, 0, -43, 87, 68, 46, -120, -58, -54, 28, -40, -57, 84, 28, 90, 59, 5, 81, 75, -4, -108, -109, 81, -7, -121, -8, 31, -44, 43, -116, -116, -121, 72, 68, 5, 118, 71, 47, 82, 112, -108, 1, -90, 53, -20, -13, -126, -52, -82, 28, -86, 0, -69, -119, -15, -96, 84, 93, -69, 101};
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
    msg.setTimeStamp(0.88009676828);
    msg.setSource(32999U);
    msg.setSourceEntity(49U);
    msg.setDestination(42702U);
    msg.setDestinationEntity(219U);
    msg.frameid = 224U;
    const char tmp_msg_0[] = {111, 105, -79, -39, 0, 5, 79, -123, -91, -115, 18, 93, 112, 86, -104, 116, -1, -50, 120, -117, -8, -123, -4, -60, -109, -103, -18, 19, -22, -25, 16, 56, -31, 40, -22, -127, -10, -11, -39, 3, 35, -23, 58, 55, -59, 7, -66, -44, -92, 55, -126, 75, -37, 86, 122};
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
    msg.setTimeStamp(0.218720632288);
    msg.setSource(53047U);
    msg.setSourceEntity(173U);
    msg.setDestination(56689U);
    msg.setDestinationEntity(134U);
    msg.fps = 118U;
    msg.quality = 72U;
    msg.reps = 2U;
    msg.tsize = 19U;

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
    msg.setTimeStamp(0.915178426686);
    msg.setSource(15806U);
    msg.setSourceEntity(34U);
    msg.setDestination(17096U);
    msg.setDestinationEntity(41U);
    msg.fps = 159U;
    msg.quality = 24U;
    msg.reps = 254U;
    msg.tsize = 152U;

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
    msg.setTimeStamp(0.841932889758);
    msg.setSource(822U);
    msg.setSourceEntity(143U);
    msg.setDestination(50973U);
    msg.setDestinationEntity(182U);
    msg.fps = 136U;
    msg.quality = 184U;
    msg.reps = 248U;
    msg.tsize = 178U;

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
    msg.setTimeStamp(0.908927697512);
    msg.setSource(54599U);
    msg.setSourceEntity(230U);
    msg.setDestination(6251U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.20384893851;
    msg.lon = 0.93511576549;
    msg.depth = 146U;
    msg.speed = 0.222784231981;
    msg.psi = 0.107283432156;

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
    msg.setTimeStamp(0.634791094066);
    msg.setSource(40450U);
    msg.setSourceEntity(3U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.38142557782;
    msg.lon = 0.577492061752;
    msg.depth = 87U;
    msg.speed = 0.103169687472;
    msg.psi = 0.175372060179;

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
    msg.setTimeStamp(0.630934327588);
    msg.setSource(20972U);
    msg.setSourceEntity(205U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.0329766990097;
    msg.lon = 0.248641150407;
    msg.depth = 166U;
    msg.speed = 0.350261489474;
    msg.psi = 0.224183878988;

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
    msg.setTimeStamp(0.0245922235801);
    msg.setSource(5697U);
    msg.setSourceEntity(144U);
    msg.setDestination(58678U);
    msg.setDestinationEntity(22U);
    msg.label.assign("YULIJQDNCOISGXKVPGFULVXVLGTADVJKVBKCTNGVBYHKWNPKUYNXDXJECNXZUWUIIBTAWIBBWWMQLBFXQHFHLZOYUSSUPMEGDKMJEHFFJQYQRFQFPPMCFCMGRHKDEDIGMVAZHPKBJETAHKAVHXSGBSWZOOZEYYXDQVSXTL");
    msg.lat = 0.697760473829;
    msg.lon = 0.239810518674;
    msg.z = 0.578000862211;
    msg.z_units = 86U;
    msg.cog = 0.751384329869;
    msg.sog = 0.944012669487;

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
    msg.setTimeStamp(0.456736092794);
    msg.setSource(25120U);
    msg.setSourceEntity(1U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(116U);
    msg.label.assign("LTMUZWSRQWUSPXEPJCGXTBMBWSWIVLXDEEGYWRPYDTGYFPWUPFVMLDVNVQCXIVHQHGBQLP");
    msg.lat = 0.526247814359;
    msg.lon = 0.887450937967;
    msg.z = 0.270599079639;
    msg.z_units = 231U;
    msg.cog = 0.726631100008;
    msg.sog = 0.30623795036;

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
    msg.setTimeStamp(0.8422270363);
    msg.setSource(168U);
    msg.setSourceEntity(88U);
    msg.setDestination(4611U);
    msg.setDestinationEntity(97U);
    msg.label.assign("CTHKUHIDETWGNFJJOYKTEXVPZJIZUXIADDRMCHIYLCYMVQWYXUGFMSFQIMFDORWOLAXHBRKICFAQPJHEKRLSFTGXUJBBPQTNBSRNGIRAKYWBZHUDOTGBUNFVTEEOMNNXAZFVOGEGXEHDMLHVUXKZHOSWISLWCWFPKCAYLDNUTRHBVZMIJWFVPM");
    msg.lat = 0.976944314119;
    msg.lon = 0.570133791903;
    msg.z = 0.421269312691;
    msg.z_units = 58U;
    msg.cog = 0.914707375557;
    msg.sog = 0.642998742164;

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
    msg.setTimeStamp(0.894894350874);
    msg.setSource(57956U);
    msg.setSourceEntity(207U);
    msg.setDestination(38035U);
    msg.setDestinationEntity(42U);
    msg.name.assign("IUUKZCCCSTVJXVIGGMTWHIBNJUCVRARONVPBFDYDEAUEYPKNGSPKWMQQAGPQETODYFAEZNEHDXKVOBNRBGSHBJUOXCSRWBATWQSEMPBNCTEUJQMXWLMZNBVIGFKPCHAHHFAZPFIDEZLKWWLDLGITKJFMXBMVHYYSWGHOFKIQDWUKLUPSNYFLZZGOHXJRRSOZXSMWLIYYEOXZCSPYVKNLFTPIOGDCNRRHADBIOAERQTJCTLJ");
    msg.value.assign("FKPECMHGOJQJEYYFTCINGYRNDOAQTKMZNGCYQOIHQDMEOXXGLEECFRZRAVRJAMASYZBXMFIOWDDWXQPRCFAELWUVTXFBYEWPDABVJMLQXCSQJMGVTJYSBGFJKHAKXWUQJYMXWTODBAWKPHLPVO");

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
    msg.setTimeStamp(0.988517078374);
    msg.setSource(35397U);
    msg.setSourceEntity(247U);
    msg.setDestination(26873U);
    msg.setDestinationEntity(8U);
    msg.name.assign("IXYBEVDAEAYXWH");
    msg.value.assign("ZCFWGXVUODSNDTFQYWQKMESKFSBBDYVBMAQEAEBTMKYUVQYDKHFROCRRGNPHXRKYZ");

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
    msg.setTimeStamp(0.666455861786);
    msg.setSource(14346U);
    msg.setSourceEntity(78U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(99U);
    msg.name.assign("WMOAFYJSSZVFXNJUZGPOZPSDYFRMLMWRUBXDPTXZEGSHN");
    msg.value.assign("UCEMRAXELDLBDCWMCUGVZIEJYWBTGYRSMBDPZVFOCWYYNBKPXAFEUJPAKOPIBVZRMOQVONTQUJRNKFRDQRXJRCEMYHKDZQZXWPNNBZIQAZVCEGHOLKMJSVHXPFXX");

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
    msg.setTimeStamp(0.0314678896437);
    msg.setSource(241U);
    msg.setSourceEntity(162U);
    msg.setDestination(19158U);
    msg.setDestinationEntity(188U);
    msg.name.assign("DDOPPFAOPOTPUCYBKTAQOJRCEGSZSHDJICENYAQKYYXBTMWRDIYNGQHGWVFKNCTNBDCIYFMTHXCSPJGUAALRONWMITILEBDXBHMYIELEZQUXVZVCTNCWBYIXFPZSPRGEKVZDAUQAKFGKQQHPWFBYSVT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KBHNATGWKAMKNIOSPDCQLDLPHQBHBYHQGSWNWHIHUKJBYJHZXDYLNYGQCQRATRIOQLPOBFDCVQDMZTFARMTRZJSEUCYHFLKVOPXUQXHTMCCVJVZNEFQASGSVPCMVZFZMWFYISBXNHRTSGBMJKIZF");
    tmp_msg_0.value.assign("RIPKPIWQZZXHHCESLREEJXYJWOZKBSNSGTRNVPMTJUDRWNNKDLBBVPTQDNUFTQJTUYFLSCFCQAJKFWVOMSNDBCPCXKGAHRLKRODVCDQVWGYQXVGHMPJFDSZNUOFGIHPGHWDNMGQFSMQKVMZUIPXHAIQPHOSGLBWWOEMFVLBEJYSVHJJUOZFATXEOYRAZKLBLDMULTSUQEMTKWLJYICXAIKFZYVHBMPNOGWZBCBXEYYRUEARAERCNT");
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
    msg.setTimeStamp(0.267632482948);
    msg.setSource(60847U);
    msg.setSourceEntity(102U);
    msg.setDestination(49424U);
    msg.setDestinationEntity(230U);
    msg.name.assign("NGKWWTXIAIDCMBJNGFQHMJSRBDFEASQFTSGHTEOT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TFWWYYEWULOKYMHUIDURFOILPXYLQAUDJEMJQGTZSNVBMGHNVWQMOBHWOWFKDYV");
    tmp_msg_0.value.assign("MCNYGQGIVTVRGUKDTZNOKUYEOYHNOLEHPPXVJUWQNNXBKOQCRFJPUWVRNFMSGNBQJHDSCALRLGTAKAZRUJWUPDJYSSKEGTDJYXVWESCAZCYZMHOTPKTAXDOKOQAJZLILRXFAVWFRPRRYSGXIMUBBITGBIZQHSCXYJCHBGUEZQIDMCFTPWCLFFDEOOGDMWWSHKBPANFVIUPZLYFHILKAFQEVUMKDWTD");
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
    msg.setTimeStamp(0.180902944184);
    msg.setSource(16460U);
    msg.setSourceEntity(3U);
    msg.setDestination(52564U);
    msg.setDestinationEntity(77U);
    msg.name.assign("ZUEBJNDFJMZLFXETRTWNSHHDWJIDRCIUCVOGTPMZSQGBXRHUBAXNQLAIDEGADGEPABKYBSDFSSZEJTBBOGOMJPNYYNCFILPOWMWHC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JXWRABXZIKRELPZQGYNKTPZOSFESGXKIHLVDIWMCPKGSJQHVYOTWISNAQXHOAGCPCVFWAJKLUTNGHEVXZJCSRESUSOAKWQTMANIUELLWLHSRBLDRBQFMLMZDUDUFHUFVWGTYCQRCBDYUVBNMEEJYBUETDOPIRGTPCTQHUHKCFDJMNLOWXQNVB");
    tmp_msg_0.value.assign("HQXEYPGIRHBWNLFPSCAQXABBBRTVSKWLJDYWPVIXNBYQYGJCMEHOQVSZOSXRWOCSVU");
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
    msg.setTimeStamp(0.138612626579);
    msg.setSource(15690U);
    msg.setSourceEntity(246U);
    msg.setDestination(29210U);
    msg.setDestinationEntity(53U);
    msg.name.assign("RGFKPVZZLUGDHSTAAIAUKYUNYXIAJHPNMXWZCKGSFXFCABKZHBFPVOHYFLGKVLCAMSXBZMALNZQJNUEOMIYHMQTXGNYJRVTPECQFXMRWZSBEVIQSBTPBWPBXLIETEPZSEXMTSJJJKCNIRBMQEAVKCHEDJFFILIZCLBHAODYLWPJQBDYNRNTWGQEUGRKSOGTUUIHDTUWOQUQTRMROZV");
    msg.visibility.assign("UZLBVMNOBTTLKVSJRUEARVJORZGDPOSAOKLBILDEXTMRMUAULWJAECPYXTHFJBTGQKEQSAPAFMUWMWYHNUEDCNGRW");
    msg.scope.assign("MHPJVZAZCMBNXPPVPDSEYFUSVTRZJUQNJIWOFGLNPKUCAJEUPGOLKSRDTFJBFMLMXRXHVESFTEYPSGATYMYORGLDASMQVAHFYUTIYABSBMRKPRCBXIZXUOXOGSAYDXULNNVGQHWCWOMZVTUIHGQHOZUDQLRNAEJBUYDWCKAXRLKOGTNEWWFDBOJPSNZGXFWZQIJOMQYCLRBVPHTMLCXHQCVJWBFFHCEAQICVWKKRIZBKQDYEIJISNGTLEZNK");

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
    msg.setTimeStamp(0.980488966271);
    msg.setSource(65451U);
    msg.setSourceEntity(60U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(45U);
    msg.name.assign("GVGBXISGFHAWTTHXXFCTHQEXVXIOARYGKPFWVVIIFJXZXPBULQOCOFHQLFJTQJIKRITAWPZSFPDJBNNQLVZSYBVDMLQZWEONBNUMWGERUTPTHLAUIQHKDEDOLXNQK");
    msg.visibility.assign("OGYRQAIJBLDVPSKIENADVPJCQXMPCKOQXEYGSVHLUCPNSGXTGZMNVKQFAUSMUELDIKESYHZUKHWSWYIOFWNWYOZAWJIZLJBHUBMASEQFCWFZGFJGLKZXPVZFDCJGVOWRQBRUYRHEVWMFVVMMFMWYPIIDODMITUFTCABZCJRROXUBXOYNRPCNTXTUIBALAXUCJQONPQLBPRHYTZDGTTAKKLEAGKEXQNOICBSN");
    msg.scope.assign("CEKJICTGDHKGRPWAUQAOXFQEUTVXNSZDDKNNEWRRK");

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
    msg.setTimeStamp(0.523700699037);
    msg.setSource(45485U);
    msg.setSourceEntity(230U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(252U);
    msg.name.assign("LDAAMAJVCEGKTITBGZYIMGQZTQF");
    msg.visibility.assign("HVWRTUNOOAWBPKJCOJUWNCTEQBVTFQZDMCSRTCJZTKTIJOJLZXUUXSXGFVXINGOMHCENNKYGEYGIUZQAZTOALPJFUQSUXKCIRVBWLIYQUHQ");
    msg.scope.assign("OREKPNHLZUFACNGUEXMDJPUGMHJRTVMBVBIOVZLTDSEXVGKBVASHIRYRKHFOOPQFNWIIWWAQWPIWMSEIJDJZPQLFXH");

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
    msg.setTimeStamp(0.474429393752);
    msg.setSource(18009U);
    msg.setSourceEntity(38U);
    msg.setDestination(6350U);
    msg.setDestinationEntity(237U);
    msg.name.assign("WVZKKILYHVWOICBEDWBTFMCQJIHLRZLYBXQEXEFGJDJXGEUWWGUKIIJOYVDUZUQAFMUKVVZZTMMJPIVYEAZRRTNIWMVTCHHGNAPGBHPAXMLADDOSTAPCOPWDKZVORSZEPJCMYSOSNTAKLGOAGSHKMVQLJXDOQBGHBBXIRQNEPQNFNTBFKCYNRXWJOCRPXEJF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GARAQJFURPDYCDTSELTFYXPNLKUZZBIPBQZTGGPKXMMSBRKDEHXQREGWYVUGPQWYURLZXOMJIODKSROSCCXODAHYNCKAUMIRCGNJVWQSZNEMHFKEURNLCAQLBWPFPONXCSMVTJFHNQOYFLBETBAAERXMTIYPHCQNJATLKKDOBCWOFVFYEOLICWXPMGQBKAUZGDDFVWGBDAJQNSTPIVTLUZMH");
    tmp_msg_0.value.assign("OIJEQMZKPSORSHZYWFDGBWLAZXUUVRKPODLOACIJIFPWGTPUESGHDBBTCAKXUAIXKBOVTNVYGBAIGHTGDWOAFPXHBANQJLCNRRVCTNQPMYKKHYTSFPMIKRQNXDRIBVKWHUYLEMXSUSICNMESMVDCNEMPUGYAMVXOWWMSEVULLXDORIQYZZNSNCPQBGFBBDETZQQFA");
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
    msg.setTimeStamp(0.270277992732);
    msg.setSource(32527U);
    msg.setSourceEntity(66U);
    msg.setDestination(39261U);
    msg.setDestinationEntity(33U);
    msg.name.assign("RKKRADBNVQTVWHPNZCADGOZGOLIQCZHCWIXUBOWQQHHINMYWTOIHUXLFXORJCQXHWVLTMVOSOQINJRGEXABAKXNVDPMDNTAJJEQNPIMSIKWVJLW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UXXKGZCVYMZLSXNOJYOHOANVZSTKHKKSJODPCXR");
    tmp_msg_0.value.assign("DHIJRXYINTZYHZVVXLDPQOZYUDKCOGJSYSQWEPWUUFVOLLEBWGVCHBIYNFHBKVQBJUEKJJGKLURLIRWWNAWKYNPQRETVUBFBDMZKYXHRAOTGOIFSTJCOQNYXIVLRRAFCTQDPNSVHSXOBOZJOJQHCSKIDMGPFQTCJHCUPUUZEWZTEPSPPAANMBDAXMQKCNFFTLMSYINMDITTEIBVHBVOXLEQWGMXKGSP");
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
    msg.setTimeStamp(0.338087347575);
    msg.setSource(21819U);
    msg.setSourceEntity(177U);
    msg.setDestination(13879U);
    msg.setDestinationEntity(53U);
    msg.name.assign("OLFDZWGMMJVGFMQRQZYUPHV");

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
    msg.setTimeStamp(0.452505970059);
    msg.setSource(42904U);
    msg.setSourceEntity(98U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(73U);
    msg.name.assign("BFDHQCHDPDIZWN");

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
    msg.setTimeStamp(0.712415039742);
    msg.setSource(29484U);
    msg.setSourceEntity(191U);
    msg.setDestination(13233U);
    msg.setDestinationEntity(229U);
    msg.name.assign("EQILTBOGCGYXVUJJKFMXYFDRPRPSTUFBHWRXZSBTCDZNGDCCYWXZMFQZCNTFBEMIKBJADIWVHRJLQMDIPVTMWRUDSXQEUXOZPAANVHEUOYIZNQQHOPAWGXRMDBNBKOQDSUIWFJWPG");

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
    msg.setTimeStamp(0.379892531622);
    msg.setSource(17627U);
    msg.setSourceEntity(6U);
    msg.setDestination(8678U);
    msg.setDestinationEntity(149U);
    msg.name.assign("HHQWEAJHCXJMZGDFENACWZETNYACSFDYBGKKCKWMSIECVFYXUIHQTQQVLDELMHLQXJOWPXLYPVUTPTIOJYOYSRGTRVBRORSRKTKXLOPXIJZCFBGNEAGDBIVPEMSIJJDSMUDFPLSDJHQFTLIDOOGWHV");

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
    msg.setTimeStamp(0.11257784798);
    msg.setSource(29061U);
    msg.setSourceEntity(84U);
    msg.setDestination(38865U);
    msg.setDestinationEntity(238U);
    msg.timeout = 3334030995U;

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
    msg.setTimeStamp(0.613128569443);
    msg.setSource(19112U);
    msg.setSourceEntity(187U);
    msg.setDestination(63751U);
    msg.setDestinationEntity(62U);
    msg.timeout = 3760584485U;

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
    msg.setTimeStamp(0.997532548742);
    msg.setSource(20833U);
    msg.setSourceEntity(149U);
    msg.setDestination(3847U);
    msg.setDestinationEntity(142U);
    msg.timeout = 1994621591U;

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
    msg.setTimeStamp(0.322470143283);
    msg.setSource(14436U);
    msg.setSourceEntity(188U);
    msg.setDestination(47479U);
    msg.setDestinationEntity(153U);
    msg.sessid = 10286471U;

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
    msg.setTimeStamp(0.775440323378);
    msg.setSource(22982U);
    msg.setSourceEntity(218U);
    msg.setDestination(6991U);
    msg.setDestinationEntity(82U);
    msg.sessid = 3680648812U;

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
    msg.setTimeStamp(0.631329926106);
    msg.setSource(10783U);
    msg.setSourceEntity(53U);
    msg.setDestination(26067U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2597643488U;

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
    msg.setTimeStamp(0.987641316649);
    msg.setSource(65534U);
    msg.setSourceEntity(34U);
    msg.setDestination(19771U);
    msg.setDestinationEntity(104U);
    msg.sessid = 3798661906U;
    msg.messages.assign("RDENNKSLKQEFSDEGDIURAEIVZXYOHZUBDXOWSQLEWALWOZHMLVNAYSRWPBAZVOVWCJUDMPLEJEOPLHVWAJXFOOIKTQOTGIGQCCVFZZQVQHFFRKFDQLKPYNGSZBYNYPJFULHXVNHCAFISTJTYKKGOQUZMPHSYXSRBFKBLMTXXYORKGTTBRCSMPTH");

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
    msg.setTimeStamp(0.551651771656);
    msg.setSource(46339U);
    msg.setSourceEntity(69U);
    msg.setDestination(41716U);
    msg.setDestinationEntity(77U);
    msg.sessid = 1446627619U;
    msg.messages.assign("GFEIXHRSXKFQDDKUDGJBAPOYYUVVZGMVPEOEMYQAZRWEJBLHONDSCVREOQCXCBQJAKINJWUUMH");

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
    msg.setTimeStamp(0.163221051011);
    msg.setSource(51490U);
    msg.setSourceEntity(125U);
    msg.setDestination(3925U);
    msg.setDestinationEntity(14U);
    msg.sessid = 379988622U;
    msg.messages.assign("HIENBXLMPUKJZMPGVISCNGCXQBXLAMYWVSHNGTEZCQYMKXBEGYOYGCYDIBLFZGMMTMTVWSLNNECPOEOUTKZPHRVELOJSOWSEUEAYLDKZRTRUAYDHZDSAQVRTWPAJRBOQFWDJJSDXSCCOHRGFJJFFLUOAIVWCPOWHJKMQAPLFXID");

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
    msg.setTimeStamp(0.0730235286266);
    msg.setSource(16363U);
    msg.setSourceEntity(88U);
    msg.setDestination(25080U);
    msg.setDestinationEntity(247U);
    msg.sessid = 681664593U;

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
    msg.setTimeStamp(0.654707920675);
    msg.setSource(42245U);
    msg.setSourceEntity(3U);
    msg.setDestination(3420U);
    msg.setDestinationEntity(77U);
    msg.sessid = 2413773960U;

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
    msg.setTimeStamp(0.0733586331471);
    msg.setSource(31273U);
    msg.setSourceEntity(116U);
    msg.setDestination(8677U);
    msg.setDestinationEntity(84U);
    msg.sessid = 3437287289U;

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
    msg.setTimeStamp(0.806193757907);
    msg.setSource(31689U);
    msg.setSourceEntity(142U);
    msg.setDestination(4101U);
    msg.setDestinationEntity(159U);
    msg.sessid = 2411841529U;
    msg.status = 84U;

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
    msg.setTimeStamp(0.0823188606642);
    msg.setSource(40507U);
    msg.setSourceEntity(217U);
    msg.setDestination(44343U);
    msg.setDestinationEntity(36U);
    msg.sessid = 790214021U;
    msg.status = 36U;

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
    msg.setTimeStamp(0.0635495816088);
    msg.setSource(10466U);
    msg.setSourceEntity(18U);
    msg.setDestination(47573U);
    msg.setDestinationEntity(244U);
    msg.sessid = 129341427U;
    msg.status = 210U;

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
    msg.setTimeStamp(0.375509982265);
    msg.setSource(12183U);
    msg.setSourceEntity(217U);
    msg.setDestination(1720U);
    msg.setDestinationEntity(24U);
    msg.name.assign("RMHPXFEWAHMFGOBBQUMWRLXLZABFNUHQWGDVQPODNHXTITGDRSKPEUZIOFVKYVZBIDBJWJXCXDLSZHPSZCXHCCEVQTWFANTBLFPGGJRCOMRRUHRTSUEZXIFCQMELVEISJINENZAILTYMPOKCURRSJF");

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
    msg.setTimeStamp(0.179318198794);
    msg.setSource(43967U);
    msg.setSourceEntity(152U);
    msg.setDestination(30362U);
    msg.setDestinationEntity(72U);
    msg.name.assign("YQXTBIICEWQUTBZODXHJAVISJTWTLTEFQFJSNCJXWPFALSWXDYYRFEVDVQZWLVQPAQTNGHOXYEZFHHKXFRELELZPZIJVMBKUURKAUPSPTESRUXBWGCS");

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
    msg.setTimeStamp(0.378236659246);
    msg.setSource(31686U);
    msg.setSourceEntity(83U);
    msg.setDestination(17528U);
    msg.setDestinationEntity(174U);
    msg.name.assign("QXOFGWJOBACBTSRFMBVHDOPHSIRECNQNCVAEKEYLTEBCKIDMKSYMCGUNWPWXYFPKYRXJSEMZMTBMLDLFIODLZTYORYXHFVTFSOFRZQGAXJPURZU");

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
    msg.setTimeStamp(0.941525158498);
    msg.setSource(51940U);
    msg.setSourceEntity(217U);
    msg.setDestination(15104U);
    msg.setDestinationEntity(202U);
    msg.name.assign("EDXIZJJLDRQIAXFGLUWOXFPFMKZHIXUUTDSVJRCNECOWNMROQNSZVGYDWTGNYKNHBVNXAPJDKVRICITTPWCXVQEPOKECLCV");

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
    msg.setTimeStamp(0.772919335162);
    msg.setSource(3498U);
    msg.setSourceEntity(244U);
    msg.setDestination(55786U);
    msg.setDestinationEntity(52U);
    msg.name.assign("AMDXHJFPQGORTSGPOFJR");

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
    msg.setTimeStamp(0.620431058195);
    msg.setSource(51568U);
    msg.setSourceEntity(95U);
    msg.setDestination(25534U);
    msg.setDestinationEntity(118U);
    msg.name.assign("JDIGHUOYDNSRK");

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
    msg.setTimeStamp(0.168967788181);
    msg.setSource(49222U);
    msg.setSourceEntity(75U);
    msg.setDestination(44324U);
    msg.setDestinationEntity(224U);
    msg.type = 108U;
    msg.error.assign("DYMODGRPEJNRCMLBSLKNWCBFHKFSGDPGPASHDQCKPIEMATJAEUEEVKTAFGGLZTUVCSYFMOZODQQUPWXQYQQTDVRRUQCLWXWLBDOOOFNVYVLIJRKKFLUOXVALFAEYTTGGSTIIZAPJZHIRFJEYMYTANJIQBHCXIPREXJWMXPEBAPAKHBNKDBXESSPNRMBVNZKBO");

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
    msg.setTimeStamp(0.183639746843);
    msg.setSource(54051U);
    msg.setSourceEntity(143U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(137U);
    msg.type = 164U;
    msg.error.assign("RCCSGVCANSXQRIPWFDYANSNGPWBTLBNMVFAOQNEACKNMTGHRTJWCJQKSUQZTEIUPUPWPZHUHZDGIOWVDJMITLSFZJMDKOYIADHXTIZUAGEMDDCQNAGFMUXWYTFOQFKYHPLXANREYSEUCMZKEJHSWOPFEEPXYWGDVXZHVLXVWGRJKYVQCVRRPGIWMKIXSBLBKBLJQIOOYKJFJRALYBYBOCMGHBUXBAXHBOU");

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
    msg.setTimeStamp(0.220915757331);
    msg.setSource(36941U);
    msg.setSourceEntity(92U);
    msg.setDestination(51747U);
    msg.setDestinationEntity(48U);
    msg.type = 75U;
    msg.error.assign("OSEKLBGNLDNLLDUSIPGETJJLSZAAWXDOUWYPUTWEGXOUHYJFQHOYVCSEKHFMBNLBTVHHPQLZWVAKSTRPFOKMXCBNFJIZWOHSLRTZVVARQGMLDMAYBYSGWNFWRIXJFXPXBARFVUDJEIKCHFZBIEBCCKOWNMSRQKINCIQMJYRTVDCDAQUJTOOBDQALSBPCZVGNEQHGYUHTIQZTZXCQEYMRYTWAGDZGHFUJVIKMIRKU");

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
    msg.setTimeStamp(0.648680096981);
    msg.setSource(27852U);
    msg.setSourceEntity(81U);
    msg.setDestination(6106U);
    msg.setDestinationEntity(14U);
    msg.seq = 51501U;
    msg.sys_dst.assign("PGHPJDZTFWNFHVUBDNXTEFGAVTLTKFGRGXMXNAKUSLYMSQIJUFHEFSZMWPUPMSKZLREKYMKYTWYDFADLYCYLBINIHRUEZLGYKUVKKYXDJSVMOHQSQOIXPORDDBQQVJZBRGYBELHMUBJOFLMICSPCKSBHPPXCQHO");
    msg.flags = 48U;
    const char tmp_msg_0[] = {88, 48, 15, 26, -31, -47, -7, -41, -109, 73, 44, -88, -9, -113, 43, 14, 49, -119, 58, -111, 8, 33, -34, -11, -124, 31, -128, 90, 50, -93, 51, 45, 125, 42, 69, -52, -58, 80, 98, 1, 89, 10, -46, 91, -16, -39, -86, -76, -79, 54, -99, -80, -60, 53, -62, 65, 82, 37, -13, 0, -101, -92, -76, 24, 23, -103, 46, -71, 116, -43, -108, -104, -21, -44, 23, 96, 30, 21, 13, -70, 10, 99, -76, 82, -72, -67, -89, -44, 111, -127, 109, -128, 121, -57, 5, -114, 107, 98, -80, -87, -11, 81, -59, 92, 52, -56, 122, 58, 83, -36, 109, -108, -114, 64, 81, -58, 60, 3, -77, -90, -85, -11, 125, 31, 95, 47, -49, -17, 28, 20, 85, 58, 7, -121, -18, -28, -38, -47, -76, -42, 91, -57, 79, -113, 9, 116, -44, -76, 2, 66, 23, 104, 114, -54, 86, 5, 7, 22, -73, 33, -84, -39, -83, 87, -124, -93, 40, 75, -26, 2, 100, -33, -15, 72, 97, -106, 121, 63, 105, 8, -103, 35, -61, 52, -74, 84, -56, 101, -69, -53, -11, 33, -16, -98, 38};
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
    msg.setTimeStamp(0.9280279318);
    msg.setSource(42154U);
    msg.setSourceEntity(12U);
    msg.setDestination(61242U);
    msg.setDestinationEntity(76U);
    msg.seq = 25927U;
    msg.sys_dst.assign("DXJBMOTOFLKCIKFIETZQHXBKPSMHPIIQHRATVICALQTSLPJRSYIJVPIKXOXNNJJMLHWBYFNGYGVCQORUNHXCGWMSUGBGECTDVEJZXPWSUDWGQQOSDWPVNZRHZHXSWXTQRUHRMVEUNVNIXEABAERJFZTZXFULKSGICWFYUKPKFUMLKMWAOWUULPFCAGBZZQBGLLBAZYCCPSMROKNPVDYNTQODZDTDGJIEQRAAAMYVFJCYNTYV");
    msg.flags = 48U;
    const char tmp_msg_0[] = {-29, -32, 117, -84, 92, 69, 83, -104, 51, -52, -38, 54, 10, -34, -92, 109, 23, -13, -87, 83, 23, -26, 111, 100, 62, 53, -118, -35, -124, -1, -80, 107, -94, -55, -52, -59, -54, 39, 121, 35, -86, -71, 27, 83, -6, 75, 84, -1, -79, 1, 51, -35, 27, -104, 13, 33, 119, 9, 71, -87, -128, -74, -127, -59, -2, 110, -109, 94, 61, 37, -10, 74, 93, 8, -114, 117, 123, -25, 93, -14, -53, -117, 122, 66, 112, -5, -112, 26, -41, 45, -83, -109, -17, 39, 3, -75, 49, 88, -16, 23, 110, 110, 54, 76, 67, 67, 109, -48, 22, -85, 52, -61, 19, 47, -64, 96, -128, -10, -75, 21, 48, -74, -2, 11, -106, 40, -116, 103, -59, -99, -41, 53, 41, 105, -54, 33, -47, -9, -80, 32, 48, 0, 9, 100, -91, 17, -7, -74, -2, 71, 24, 77, 123, -2, 45, 100, -95, 2, 112, 102, -76, 13, -106, -10, -93, -103, 101, -106, -120, 100, 122, 12, 81, 121, 103, 4, -37, 109, 9, -36, 119, -10, -81, -6, -68, -128, -73, -119, 110, -67, 71, -101, 6, 103, -39, 109, 6, -116};
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
    msg.setTimeStamp(0.0952848423992);
    msg.setSource(13075U);
    msg.setSourceEntity(150U);
    msg.setDestination(62104U);
    msg.setDestinationEntity(234U);
    msg.seq = 47023U;
    msg.sys_dst.assign("LYIZABXIRXWVJJQYZSOQLQIJLEXTTJHSMAKOGBJQKOFXKYRLFGVDOSHIJBRHWFEFUPDLWJNIBCHGZRCYSTPOMCICSUBKLZRATWSORUMS");
    msg.flags = 29U;
    const char tmp_msg_0[] = {68, -75, 32, -60, 29, -22, -95, -64, 85, 91, 15, 9, 34, -32, 66, -91, -82, 89, 119, -48, -73, -113, -20, 113, -88, -21, -108, -118, 116, -69, 107, -67, 92, 35, 110, -13, 82, 8, -3, -86, 29, -15, 60, 53, -28, 101, 110, -121, 114, 92, 61, -11, 37, -102, -72, -62, 101, -99, -73, 82, -10, -88, 52, -103, 100, -36, 74, -29, 16, -36, 26, -3, 44, -20, -36, -3, 60, -4, -107, 63, -31, -72, 92, 33, -112, 88, -42, 14, -43, -73, -114, 94, -92, 90, 28, -72, 12, -36, 25, -92, 120, 19, -32};
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
    msg.setTimeStamp(0.981632334645);
    msg.setSource(63110U);
    msg.setSourceEntity(241U);
    msg.setDestination(9451U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("XITGNENJZYYUFBJNNOSUVTBVQPPJTMKGHVKURLJPAANYWCENOVTKJEMPVRJXMEYXTLYJXRCOHOAFWPQDNG");
    msg.sys_dst.assign("SDJKWOAAPXMMKLTOZIFBLBDLKCKZSHNNLAT");
    msg.flags = 19U;
    const char tmp_msg_0[] = {60, -77, 75, -52, -78, 26, -3, 19, -41, 85, -104, -63, 103, 53, -90, -22, -90, -34, -36, 43, -127, 63, 122, 62, -61, -71, -128, -49, -7, 124, 1, -108, 35, 38, -110, -31, -36, 13, -13, 75, 24, 33, -59, 107, 118, -102, -43, -40, 72, -36, 12, -96, 105, 84, -105, 90, -29, 74, -17, -13, -10, 99, 11, 93, -116, -105, 85, 27, -87, 41, -50, 63, 26, -45, -97, 56, -36, -82, -58, 115, 107, 75, -32, 67, -57, -26, 45, 100, -44, 81, -12, -81, -17, -4, 103, -79, -51, -39, 114, 39, 94, 74, 31, -124, -114, -12, 123, -107, 103, -59, 73, -103, -20, -108, 74, -28, -107, 93, -52, 76, 51, 99, -18, -33, 83, 12, -81, -83, -5, -128, 22, 12, -37, 63, -6, -12, 93, -118, -77, -54, -23, 85, 28, -25, -47, -102, -24, -27, 113, -47, -42, 104, 79, 60, 94, 124, -110, 119, 76, -25, -109, 39, -74, 90, -84, -26, -68, -35, 70, -99, -88, -12, -49, -127, 11, 36, 39, 39, -85, -122, -124, -126, -75, -127, 18, 25, -50, 67, 31, -56, 60, 58, -59, -104, -33, -116, 82, -107, -45};
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
    msg.setTimeStamp(0.552439815214);
    msg.setSource(62162U);
    msg.setSourceEntity(139U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(246U);
    msg.sys_src.assign("VUJVUMETFMZHVSLFGZYXWYIHGPIYREABJDGHWPAVKAEJEJKHRYXMCLWQGHSLFZJLYLNDADTZSVZOZTWQWRGAKPKIBSCDYEPRQAWXQGCWNNZUEANCZHBVITQFEMBQNOKCYQNSBCFMPUUYOGKOLIJAKRTTQUT");
    msg.sys_dst.assign("WLKJXQMTBIDGCBWPTTCXYNJMOTBFDSLYPBDEVQPRYLHEZKZNVOHFGGGNAJSJCTUKOWUKHIPXSRYOGILWWNFPMNUPYYAIOVCWIWNSUMXRJBJDHYYFHIVCEBLGCJCDAGRIDQEEROMUQUZBZHNOXMHPZUCEVFLXGJATQUVQSXBDTKJYPENPLNOKZWQSAF");
    msg.flags = 25U;
    const char tmp_msg_0[] = {124, -79, 27, -103, 115, -42, -70, 108, -118, 56, 67, -8, 102, -71, -127, 95, 99, -126, -74, 8, 12, 41, 27, -80, 35, -27, 114, 36, 69, -88, -120, 42, -50, 76, 26, 28, 29, 54, -119, 76, 75, -54, -115, -3, -87, -29, -108, 94, 86, -7, 21, -51, -26, 4, -101, 72, 114, -10, -97, 77, 61, -3, 104, -53, 69, -64, 28, -41, -107, 57, 17, -112, 51, -77, 100, 91, 42, -112, -88, -47, 23, 6, 97, 114, 111, -68, -52, 32, 117, 100, 100, -5, 73, -68, -93, 35, -84, -68, -48, -101, -7, 114, -90, 90, 109, 31, -88, 33, -52, 115, 85, 6, -96, -78, 88, 30, 43, 41, -42, 41, 73, -63, -65, -72, -90, -24, 11, 112, 19, -26, -35, 126, 126, 103, 72, 47, 19, -37, 123, -1, 10, -28, 41, 43, -110, 60, 117, 64, 24, 84, 36, -122, -91, 90, -103, -44, -14, 65, 117, -102, -18, -23, 26, 9, 84, -29, -78, 86, 70, -46, 68, 28, -5, -16, -17, -99, 26};
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
    msg.setTimeStamp(0.263895282978);
    msg.setSource(17671U);
    msg.setSourceEntity(224U);
    msg.setDestination(36999U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("GRNGETGJNPDKWQZFAHQGHLBSELJWPAQC");
    msg.sys_dst.assign("EKPFYQIBISGVMPIATVAMQMCJBYHFLYEWFBBXJSVEZWVCYXXEDQDSYTDNWUEILNYDLBRZWNYCRLTCZOJIRFAZQWQEAPQVXBJHPEMQTQHKXLUGWPZSHQRFNORSPFUHXLHUENTFALCGBDATRIX");
    msg.flags = 82U;
    const char tmp_msg_0[] = {121, 120, 88, 61, 86, 52, 101, 14, -74, -13, 118, -101, 89, 70, 87, 97, 33, 67, -67, 70, 111, 121, 75, 49, 44, 91, -65, -31, -68, -116, -4, 17, 18, 59, 36, -36, 67, 53, 78, 118, 108, 108, -111, -92, 16, -7, 103, -56, 105, 104, -49, -114, -77, -65, 37, -84, -104, -23, 91, 96, -1, -105, -111, -7, -99, 74, -1, -65, -12, -39, 0, -109, -86, 85, -14, 94, 109, -27, 64, 15, 80, 26, 51, 125};
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
    msg.setTimeStamp(0.343412045794);
    msg.setSource(39324U);
    msg.setSourceEntity(79U);
    msg.setDestination(1870U);
    msg.setDestinationEntity(5U);
    msg.seq = 64151U;
    msg.value = 20U;
    msg.error.assign("WNBDKNJDJLOCAULYDK");

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
    msg.setTimeStamp(0.488097889215);
    msg.setSource(10086U);
    msg.setSourceEntity(68U);
    msg.setDestination(64172U);
    msg.setDestinationEntity(245U);
    msg.seq = 36553U;
    msg.value = 95U;
    msg.error.assign("BYLFONIMEKVINATFRZWOOTIVKXGHULMOHZJWFEWKOXOCWCDIRMGJWRUHCYCBBAQWMGBJPOINKVWDGGCBFNKEBZDNICZOPRFTGAMRY");

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
    msg.setTimeStamp(0.529991939466);
    msg.setSource(21949U);
    msg.setSourceEntity(174U);
    msg.setDestination(22082U);
    msg.setDestinationEntity(247U);
    msg.seq = 3714U;
    msg.value = 118U;
    msg.error.assign("SYFVGOFZLVHTJZRAEDBDCSYHGZMGJEUFKXLWJEJILBOQMPBIFVYPKMWUMAAMVCIMCQRDGULFXXOH");

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
    msg.setTimeStamp(0.644616847303);
    msg.setSource(5889U);
    msg.setSourceEntity(146U);
    msg.setDestination(41683U);
    msg.setDestinationEntity(110U);
    msg.seq = 31294U;
    msg.sys.assign("FNHTIORGKSZYYCBUWDMWRYPOMWPDPNMXIGJRCESVACKRIHHGTVWGXXBCDA");
    msg.value = 0.57147920307;

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
    msg.setTimeStamp(0.137038414441);
    msg.setSource(32877U);
    msg.setSourceEntity(100U);
    msg.setDestination(23845U);
    msg.setDestinationEntity(145U);
    msg.seq = 13541U;
    msg.sys.assign("SHOPZQMIFLVWUHNFWSRJBLUFJWKMMAYOHGOBNFOQEFQCAHCQZSKNMOBEGXYADZUNIISPBHSAEWURAEYBGRAENLCSRTVIXTM");
    msg.value = 0.604855150413;

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
    msg.setTimeStamp(0.957364810895);
    msg.setSource(34013U);
    msg.setSourceEntity(226U);
    msg.setDestination(43618U);
    msg.setDestinationEntity(169U);
    msg.seq = 27230U;
    msg.sys.assign("ARENQVZBZRPIQLMSPJXTWKINA");
    msg.value = 0.847410056008;

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
    msg.setTimeStamp(0.479956939069);
    msg.setSource(45453U);
    msg.setSourceEntity(101U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(203U);
    msg.action = 72U;
    msg.longain = 0.490623685105;
    msg.latgain = 0.676404434792;
    msg.bondthick = 656627790U;
    msg.leadgain = 0.657645921724;
    msg.deconflgain = 0.0646676507741;

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
    msg.setTimeStamp(0.473970935545);
    msg.setSource(31785U);
    msg.setSourceEntity(235U);
    msg.setDestination(55948U);
    msg.setDestinationEntity(34U);
    msg.action = 147U;
    msg.longain = 0.967764170045;
    msg.latgain = 0.124403965142;
    msg.bondthick = 2895440554U;
    msg.leadgain = 0.902999099606;
    msg.deconflgain = 0.460356500014;

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
    msg.setTimeStamp(0.897979316578);
    msg.setSource(36786U);
    msg.setSourceEntity(69U);
    msg.setDestination(26283U);
    msg.setDestinationEntity(66U);
    msg.action = 30U;
    msg.longain = 0.97343749807;
    msg.latgain = 0.474851165475;
    msg.bondthick = 3188250505U;
    msg.leadgain = 0.800467597566;
    msg.deconflgain = 0.543932281063;

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
    msg.setTimeStamp(0.331337299411);
    msg.setSource(63695U);
    msg.setSourceEntity(208U);
    msg.setDestination(11542U);
    msg.setDestinationEntity(157U);
    msg.err_mean = 0.326944553037;
    msg.dist_min_abs = 0.348477948288;
    msg.dist_min_mean = 0.569730268259;

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
    msg.setTimeStamp(0.792880422615);
    msg.setSource(11207U);
    msg.setSourceEntity(116U);
    msg.setDestination(47334U);
    msg.setDestinationEntity(84U);
    msg.err_mean = 0.855886131305;
    msg.dist_min_abs = 0.580661954943;
    msg.dist_min_mean = 0.467085417382;

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
    msg.setTimeStamp(0.240941512783);
    msg.setSource(39651U);
    msg.setSourceEntity(113U);
    msg.setDestination(6975U);
    msg.setDestinationEntity(208U);
    msg.err_mean = 0.613614644085;
    msg.dist_min_abs = 0.477173342447;
    msg.dist_min_mean = 0.967849760998;

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
    msg.setTimeStamp(0.734133689234);
    msg.setSource(27254U);
    msg.setSourceEntity(153U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(51U);
    msg.action = 103U;
    msg.lon_gain = 0.744270722134;
    msg.lat_gain = 0.780940291579;
    msg.bond_thick = 0.349128152312;
    msg.lead_gain = 0.62673856031;
    msg.deconfl_gain = 0.0258761593658;
    msg.accel_switch_gain = 0.760219764656;
    msg.safe_dist = 0.0414619507792;
    msg.deconflict_offset = 0.791252698768;
    msg.accel_safe_margin = 0.483395732943;
    msg.accel_lim_x = 0.146379579317;

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
    msg.setTimeStamp(0.00908257380351);
    msg.setSource(47948U);
    msg.setSourceEntity(126U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(248U);
    msg.action = 241U;
    msg.lon_gain = 0.386073349333;
    msg.lat_gain = 0.356014866271;
    msg.bond_thick = 0.823131817346;
    msg.lead_gain = 0.592560287878;
    msg.deconfl_gain = 0.491143905187;
    msg.accel_switch_gain = 0.683153908685;
    msg.safe_dist = 0.658921016967;
    msg.deconflict_offset = 0.693817209234;
    msg.accel_safe_margin = 0.173815779105;
    msg.accel_lim_x = 0.609046349663;

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
    msg.setTimeStamp(0.560043504125);
    msg.setSource(39326U);
    msg.setSourceEntity(87U);
    msg.setDestination(16354U);
    msg.setDestinationEntity(108U);
    msg.action = 105U;
    msg.lon_gain = 0.102753785567;
    msg.lat_gain = 0.366059348504;
    msg.bond_thick = 0.0332639475049;
    msg.lead_gain = 0.404639367408;
    msg.deconfl_gain = 0.791321892177;
    msg.accel_switch_gain = 0.99705861816;
    msg.safe_dist = 0.292299259811;
    msg.deconflict_offset = 0.941585371081;
    msg.accel_safe_margin = 0.418165907783;
    msg.accel_lim_x = 0.193093877786;

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
    msg.setTimeStamp(0.208664486488);
    msg.setSource(31894U);
    msg.setSourceEntity(63U);
    msg.setDestination(37354U);
    msg.setDestinationEntity(197U);
    msg.type = 196U;
    msg.op = 183U;
    msg.err_mean = 0.060662398128;
    msg.dist_min_abs = 0.47059478643;
    msg.dist_min_mean = 0.777995792557;
    msg.roll_rate_mean = 0.253202409857;
    msg.time = 0.346818137615;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 185U;
    tmp_msg_0.lon_gain = 0.949538838147;
    tmp_msg_0.lat_gain = 0.459653696093;
    tmp_msg_0.bond_thick = 0.481915934428;
    tmp_msg_0.lead_gain = 0.377359934106;
    tmp_msg_0.deconfl_gain = 0.502475148628;
    tmp_msg_0.accel_switch_gain = 0.366700511769;
    tmp_msg_0.safe_dist = 0.669031143614;
    tmp_msg_0.deconflict_offset = 0.184321670673;
    tmp_msg_0.accel_safe_margin = 0.998779018414;
    tmp_msg_0.accel_lim_x = 0.873370717701;
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
    msg.setTimeStamp(0.242820796826);
    msg.setSource(33686U);
    msg.setSourceEntity(218U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(181U);
    msg.type = 71U;
    msg.op = 48U;
    msg.err_mean = 0.854857871291;
    msg.dist_min_abs = 0.832100109717;
    msg.dist_min_mean = 0.326665080381;
    msg.roll_rate_mean = 0.835819259536;
    msg.time = 0.627619789492;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 157U;
    tmp_msg_0.lon_gain = 0.383980062841;
    tmp_msg_0.lat_gain = 0.290544518523;
    tmp_msg_0.bond_thick = 0.211777154241;
    tmp_msg_0.lead_gain = 0.252883958228;
    tmp_msg_0.deconfl_gain = 0.14156539005;
    tmp_msg_0.accel_switch_gain = 0.52266567119;
    tmp_msg_0.safe_dist = 0.384047120371;
    tmp_msg_0.deconflict_offset = 0.680685313019;
    tmp_msg_0.accel_safe_margin = 0.379432749991;
    tmp_msg_0.accel_lim_x = 0.888883964105;
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
    msg.setTimeStamp(0.748017897173);
    msg.setSource(11109U);
    msg.setSourceEntity(30U);
    msg.setDestination(65380U);
    msg.setDestinationEntity(33U);
    msg.type = 39U;
    msg.op = 222U;
    msg.err_mean = 0.274842841273;
    msg.dist_min_abs = 0.909546030381;
    msg.dist_min_mean = 0.89979167359;
    msg.roll_rate_mean = 0.743438387939;
    msg.time = 0.324685583398;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 129U;
    tmp_msg_0.lon_gain = 0.430371187378;
    tmp_msg_0.lat_gain = 0.778945374701;
    tmp_msg_0.bond_thick = 0.565785786479;
    tmp_msg_0.lead_gain = 0.534060912222;
    tmp_msg_0.deconfl_gain = 0.61062850648;
    tmp_msg_0.accel_switch_gain = 0.63748943436;
    tmp_msg_0.safe_dist = 0.144953890158;
    tmp_msg_0.deconflict_offset = 0.265210005802;
    tmp_msg_0.accel_safe_margin = 0.502629149204;
    tmp_msg_0.accel_lim_x = 0.239229329249;
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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.765022613733);
    msg.setSource(3384U);
    msg.setSourceEntity(223U);
    msg.setDestination(11045U);
    msg.setDestinationEntity(184U);
    msg.uid = 54U;
    msg.frag_number = 75U;
    msg.num_frags = 248U;
    const char tmp_msg_0[] = {-12, -105, -79, 29, -30, 102, -81, 46, -13, -15, -12, 108, 29, 117, 48, -63, -11, -73, 1, 126, 51, 44, 74, -26, 106, 66, -68, -59, 55, -97, -112, -124, 23, -93, 67, 37, -124, -2, -5, -14, -103, -54, 12, 31, 74, -100, 19, 58, 38, 66, -104, -44, 0, -24, -73, -123, -104, 25, 39, 14, -84, 33, -50, 91, 32, -105, 62, 45, 57, 104, 42, 45, 120, -94, -110, 61, -108, 69, -86, -107, -4, 35, 123, 78, 114, -13, 109, -74, -22, 36, -57, 72, 115, -32, 95, 68, 6, -124, -110, 68, 86, 32, 72, 64, 35, -88, 59, -101, -91, -1, 95, 75, 14, 38, -44, 92, -62, 15, 25, 120, -34, -113, 86, 99, -84, 97, 33, 86, -40, -78, -28, -77, 74, 20, -98, 65, -119, -38, -15, 12, -112, 105, 108, -105, -34, 7, -56, -120, 108, 86, -60, -55, 105, 2, 109, 33, 109, 2, 116, -47, 56, -15, -116, -68, -23, -47, -86, -97, 126, -78, 67, -72, 116, -1, -13, -117, -107, 105, 55, 61, 91, -94, 22, -16, 120, 90, 107, 16, -64, -55, 103, -99, -90, 12, 72, -96, -39, 79, -57, 45, 3, 115, 122, -107, 47, -115, 47, -23, 70, 55, -58, 84, 42, 5, -127, -7, 97, 78};
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
    msg.setTimeStamp(0.295227088057);
    msg.setSource(1047U);
    msg.setSourceEntity(226U);
    msg.setDestination(20236U);
    msg.setDestinationEntity(127U);
    msg.uid = 77U;
    msg.frag_number = 3U;
    msg.num_frags = 248U;
    const char tmp_msg_0[] = {64, -40, -38, -56, 41, -88, -52, -128, 68, 63, -18, -25, 41, 67, -119, 75, 7, 1, 18, -10, 118, -102, 105, -70, -38, 2, -80, -22, -19, 100, -32, -46, 59, 10, -78, -40, 98, -72, -78, 39, 71, 3, 125, -15, -106, -25, 79, 67, 1, -53, -46, 18, -13, 104, -69, 65, 84, 14, -59, -28, 54, -37, -111, -66, 105, 88, 112, 97, -8, -89, 2, -34, 69, -5, -18, 22, -36, -85, 114, 81, -37, 62, -72, -62, -81, -93, 41, -47, 68, 91, 51, 70, -115, -115, 9, 5, 73, -125, 75, 53, 71, -27, 15, 2, 88, 42, -55, 53, 65, 32, -100, 100, -12, 55, 86, -36, 80, -105, 85, 31, 107, -121, -69, 9, -22, -84, 48, -113, -26, -38, -41, -90, -89, 92, 125, -115, 87, 64, 122, 67, 99, 93, -110, 110, 2, 24, -96, 44, -40, -69, 41, 110, 5, -126, 14, 1, -103, 6, -19, -76, -86, 78, 37, -84, -83, -86, 111, 114, 3, -85, -27, 69, -30, 93, -93, 2, 18, -54, 116, -57, 25, -17, -53, -111, 109, 37, 41, 69, 110, 119, -127, -68, -104, -31, -35, -33, -29, 24, -59, -116, -68, 51, 41, 58, 4, -59, -89, 77, -75, -65, -128, 2, -38, 14, 10, -84, -109, 14, -3, -125, 55, 109, -119, 62, 59, -117, -53, 58, 19, 15};
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
    msg.setTimeStamp(0.204080831102);
    msg.setSource(46762U);
    msg.setSourceEntity(217U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(81U);
    msg.uid = 53U;
    msg.frag_number = 230U;
    msg.num_frags = 69U;
    const char tmp_msg_0[] = {-5, 90, 19, 73, 60, -3, -47, 91, -65, 15, 40, 7, 90, -120, 113, 8, 69, 38, -17, 6, 10, 36, -7, 100, -60, 113, -39, -47, 100, -82, 114, -31, -8, 91, 78, -60, -102, -103, -49, -67, 47, -61, -4, -52, -77, -108, -60, 113, 40, 90, -15};
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
    msg.setTimeStamp(0.192117842057);
    msg.setSource(5531U);
    msg.setSourceEntity(80U);
    msg.setDestination(2493U);
    msg.setDestinationEntity(192U);
    msg.content_type.assign("GZSSYSVAYPVWETNB");
    const char tmp_msg_0[] = {-3, -38, 118, 16, 13, 19, -35, 113, -96, -49, 52, 74, 21, -97, -91, 8, -28, 108, 35, -40, -107, -99, -4, -114, -84, 3, 25, 55, -50, 0, 53, -37, -66, 40, 33, -62, 110, 29, -110, -125, 28, -60, 46, 70, -121, 124, -75, -4, 38, -99, 23, -7, -27, 27, -66, -33, -108};
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
    msg.setTimeStamp(0.655342444079);
    msg.setSource(60736U);
    msg.setSourceEntity(150U);
    msg.setDestination(34393U);
    msg.setDestinationEntity(178U);
    msg.content_type.assign("TQGCZPVWDKPGYDOCBHMCFGDMJVBUUOSKZYQCZMPJMMKQJHQPKNVXYEFKUOTPXPIVANSRICOOAYLWTDEDJGBZFTMNVRQDHSHBNOLSXDJOVXIBGPDRHGQICATIFUXXQMBHJZKYBIASEGACKNUCWXPBNAAPFRNJUXIZELZSLHRMSFPQEGDAJVTAWRYJQNIRETMOMTWWHLCSLIOVXR");
    const char tmp_msg_0[] = {123, -65, 125, 97, -18, -53, -55, -124, 114, 59, -64, -83, 126, -8, -7, 79, -63, 86, -96, 105, 53, -35, 68, -74, 45, 61, 48, -111, 31, -118, -5, -65, -121, -85, 61, -108, -122, -10, 15, -53, -66, -90, -72, 27, 47, 63, 35, 108, 30, 18, 14, -2, 33, -82, -103, -45, -70, 16, 100, -3, 92, -126, -77, -107, 54, 122, -9, -56, -77, -119, -108, 4, 44, 87, 16, 13, 23, -124, -56, -64, -48, 119, 50, -123, -98, -70, -48, -27, 109, -93, 113, 120, -89, 96, 118, -124, -61, -83, 76, -75, 92, 79, -103, 62, -18, -109, -20, -13, 100, -102, 117};
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
    msg.setTimeStamp(0.0255225142117);
    msg.setSource(4067U);
    msg.setSourceEntity(91U);
    msg.setDestination(40055U);
    msg.setDestinationEntity(251U);
    msg.content_type.assign("MUJIMKLSPYC");
    const char tmp_msg_0[] = {81, -98, -51, 83, -50, -111, 118, 41, 97, -53, 97, 112, 119, 72, -94, -5, -125, 0, 124, 107, 109, -128, -20, -88, -10, 26, 123, -49, 63, 58, 25, -90, -124, -114, 50, 67, -125, 40, -126, 57, 105, -122, 32, 24, 114, 125, 52, -76, 25, 64, 15, -117, -119, 101, -59, 19, -66, 80, 46, -8, 46, -82, 77, 12, -63, 36, 83, 61, -110, -108, 3, 38, -68, -96, -124, -40, 81, -85, 123, -123, 80, -8, -16, -93, 23, -107, -30, -79, 100, -92, 25, -66, 45, 100, -111, -33, -112, 7, -19, -55, 55, -55, -107, -66, 90, 112, 47, 27, 86, -68, -2, 121, 47, 98, -109, 23, 60, 89, -72, -51};
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
    msg.setTimeStamp(0.844452580344);
    msg.setSource(18579U);
    msg.setSourceEntity(171U);
    msg.setDestination(39802U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.486042836004);
    msg.setSource(50222U);
    msg.setSourceEntity(176U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.475115223777);
    msg.setSource(59760U);
    msg.setSourceEntity(53U);
    msg.setDestination(12349U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.868907044412);
    msg.setSource(25952U);
    msg.setSourceEntity(37U);
    msg.setDestination(14440U);
    msg.setDestinationEntity(93U);
    msg.target = 38458U;
    msg.bearing = 0.0372201956488;
    msg.elevation = 0.170656790622;

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
    msg.setTimeStamp(0.432631062025);
    msg.setSource(34120U);
    msg.setSourceEntity(129U);
    msg.setDestination(9482U);
    msg.setDestinationEntity(75U);
    msg.target = 17553U;
    msg.bearing = 0.259170755451;
    msg.elevation = 0.480840129959;

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
    msg.setTimeStamp(0.0658689635748);
    msg.setSource(51986U);
    msg.setSourceEntity(48U);
    msg.setDestination(43483U);
    msg.setDestinationEntity(63U);
    msg.target = 7008U;
    msg.bearing = 0.260761575232;
    msg.elevation = 0.55332612145;

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
    msg.setTimeStamp(0.316086838529);
    msg.setSource(6129U);
    msg.setSourceEntity(105U);
    msg.setDestination(42037U);
    msg.setDestinationEntity(96U);
    msg.target = 5703U;
    msg.x = 0.810404253966;
    msg.y = 0.855033214041;
    msg.z = 0.19023677804;

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
    msg.setTimeStamp(0.459983185093);
    msg.setSource(30892U);
    msg.setSourceEntity(200U);
    msg.setDestination(58764U);
    msg.setDestinationEntity(252U);
    msg.target = 58857U;
    msg.x = 0.0641481497942;
    msg.y = 0.658496103805;
    msg.z = 0.707784590505;

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
    msg.setTimeStamp(0.0561671596438);
    msg.setSource(432U);
    msg.setSourceEntity(173U);
    msg.setDestination(51641U);
    msg.setDestinationEntity(143U);
    msg.target = 29129U;
    msg.x = 0.547954819836;
    msg.y = 0.666184080383;
    msg.z = 0.0939967590584;

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
    msg.setTimeStamp(0.449468358291);
    msg.setSource(54783U);
    msg.setSourceEntity(105U);
    msg.setDestination(36760U);
    msg.setDestinationEntity(13U);
    msg.target = 49396U;
    msg.lat = 0.261312794919;
    msg.lon = 0.526016654743;
    msg.z_units = 173U;
    msg.z = 0.608718243153;

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
    msg.setTimeStamp(0.533086691935);
    msg.setSource(17801U);
    msg.setSourceEntity(91U);
    msg.setDestination(23522U);
    msg.setDestinationEntity(200U);
    msg.target = 34144U;
    msg.lat = 0.0693840009975;
    msg.lon = 0.659111146921;
    msg.z_units = 132U;
    msg.z = 0.0055748001557;

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
    msg.setTimeStamp(0.292722370766);
    msg.setSource(60078U);
    msg.setSourceEntity(123U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(21U);
    msg.target = 25964U;
    msg.lat = 0.0386435425112;
    msg.lon = 0.556830491558;
    msg.z_units = 244U;
    msg.z = 0.322176028326;

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
    msg.setTimeStamp(0.072160458257);
    msg.setSource(18195U);
    msg.setSourceEntity(93U);
    msg.setDestination(17310U);
    msg.setDestinationEntity(47U);
    msg.locale.assign("DLJOXQDVISCKPOHDCJRDUUEUBIEGZEJVSVKUXTPRSHSPODLYTSBYULFAMXEZFFSCQ");
    const char tmp_msg_0[] = {68, 97, -38, -117, -37, -96, 19, -14, 126, 45, 14, -11, -60, -5, -114, 39, 6, 76, 89, 11, -15, -46, 58, -39, -114, -68, -37, -27, 111, -81, 25, 81, -78, 71, 101, -52, -105, -108, -100, -10, 82, 117, 74, -40, 104, -34, -112, 37, -50, 102, -98, -8, 19, -122, -128, 24, -115, 71, -69, 113, -55, 69, 67, 57, 21, -12, 11, -99, -47, 79, 115, 1, -31, 15, 48, -66, -109, 86, 107, 117, 122, 23, -101, -114, -22, 47, 41, -110, 35, -25, -3, -33, -115, -7, 74, -31, -58, 105, -6, 57, 84, 51, -26, -41, 71, 30, 0, 38, -115, -90, 82, -41, -97, -62, 101, 126, -20, 24, -56, -32, 123, -25, 92, -56, 79, 16, 88, -37, 64, 33, -111, -93, -124, 111, 4, -25, 53, 106, -125, -5, 84, -74, -40, -40, -23, -17, 70, -45, 103, 7, -28, 36, 93, -51, -81, 9, 111, 96, 61, -75, -95, 107, 104, 7, 99, -127, 104, 120, 75, 31, -75, 49, -33, -12, -104, -83, -114, 36, -64, -20, -89, 29, -53, -115, 12, -79, -54, -62, 61, 4, 107, 4, 85, -24, -62, -75, 20, -95, 85, 81, -15, -68, 119, -115, 81, -119, 20, -74, 11, -55, -108};
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
    msg.setTimeStamp(0.156866544485);
    msg.setSource(52034U);
    msg.setSourceEntity(7U);
    msg.setDestination(33820U);
    msg.setDestinationEntity(100U);
    msg.locale.assign("HAOOJMDYCGJWHKUTLWOPZLAVEPVLYUOICYTFFXNEHNXWSQKZZGXBALRVQOZEYLFGHCAXTMWVNXDTBWZGIVUOYUFPQSHUQNWESTIJXJCIMCKQUZUGYXCDVREBGENBSMNZREOJOMSLKQCQTRRQDBRUORFSVDMPSCGDKRWBDHSYIHIVLFYWMVABBWYITBXAPNDZPPFFPJRM");
    const char tmp_msg_0[] = {121, 71, -92, -11, 76, 114, -50, -77, 63, 106, 53, 111, 122, -41, 15, -116, 5, 7, -73, 40, 87, -9, -90, -54, -19, 7, -82, -4, 19, -77, 44, 95, -47, -109, 124, -76, -17, -113, 77, 126, -84, -34, -103, 96, -3, -46, 96, -16, -111, -73, 117, 70, 114, -50, -103, 125, 20, -95, 4, 65, -112, -49, 98, 36, 114, -48, 19, -55, 56, -44, 107, -34, 57, -29, 18, 72, 62, -127, -115, -49, -97, -124, -61, 85, -103, -26, -104, -5, -127, 64, 26, -72, -39, -50, -88, 80, -121, 21, 95, -109, -52, -76, -19, -8, -68, -72, 98, -29};
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
    msg.setTimeStamp(0.959183060683);
    msg.setSource(13621U);
    msg.setSourceEntity(108U);
    msg.setDestination(58400U);
    msg.setDestinationEntity(111U);
    msg.locale.assign("QPTILTDVTWWLQKYBFCJRNJBKJRDXOKAPOGYVBZYQQSLPRDBJXAIDANJPNNMAUCBGCVJEMENXFXHYMUPLHPDOSMUCBWSQHTEIDSLVKEGCAJDBGWJAFUMGYAEWVXQZWLSXWIXWLNEUTCMHKXGFNPTUFZKXHZUSZFKQNDSVTBBVTCGVHADIWIEIMQAHBYZRUVZRZUOJLIGGEMFKKTHYRECZRSAYL");
    const char tmp_msg_0[] = {52, -55, -37, -8, 12, -31, 58, -24, -77, 9, -18, 90, -33, 97, -26, 75, -59, -122, -105, -13, -82, 35, -124, 73, 20, -22, -26, 34, -54, 101, 43, 104, 5, 8, 64, -109, -123, 85, 81, 7, -16, -1, 17, 44, 120, 54, 45, -5, 120, 76, -104, -97, 62, 80, 37, -71, 99, 54, 99, -11, -54, 8, 14, -4, -26, -95, -41, 8, -23, -68, 100, 17, 97, 30, -127, -44, -106, 99, 81, -94, 21, 102, 1, -27, 36, -52, -107, -2, -117, -27, -22, 112, 49, -67, -124, 20, 120, 7, 68, -79, -30, -115, 110, -8, -79, -41, 90, -26, -28, -86, -57, -113, 13, -4, -29, -86, 39, -114, -67, -62, -22, -60, 1, -57, -42, 115, 16, 16, -17, 121, 17, -90, -127, -119, 66, 122, -117, -29, 64, -113, 81, 107, 98, -51, -44, 90, 7, 71, 116, 91, -75, 60, -82, 11, 58, 16, 4, -48, -24, 63, 87, -54, 89, 116, -118, -103, -14, -51, 36, 77, 11, 25, -93, 85, -32, 76, -93, 22, 94, -96, 104, -105, 106, 0, -101, -55};
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
    msg.setTimeStamp(0.261561772943);
    msg.setSource(6035U);
    msg.setSourceEntity(125U);
    msg.setDestination(26063U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(1.96157034205e-05);
    msg.setSource(32120U);
    msg.setSourceEntity(97U);
    msg.setDestination(55326U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.791849631439);
    msg.setSource(54482U);
    msg.setSourceEntity(231U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.935561894123);
    msg.setSource(35058U);
    msg.setSourceEntity(0U);
    msg.setDestination(57747U);
    msg.setDestinationEntity(97U);
    msg.camid = 75U;
    msg.x = 42586U;
    msg.y = 25546U;

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
    msg.setTimeStamp(0.208261956054);
    msg.setSource(65401U);
    msg.setSourceEntity(150U);
    msg.setDestination(49594U);
    msg.setDestinationEntity(49U);
    msg.camid = 77U;
    msg.x = 31726U;
    msg.y = 13691U;

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
    msg.setTimeStamp(0.152445757706);
    msg.setSource(6659U);
    msg.setSourceEntity(76U);
    msg.setDestination(59730U);
    msg.setDestinationEntity(156U);
    msg.camid = 139U;
    msg.x = 22192U;
    msg.y = 35412U;

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
    msg.setTimeStamp(0.654115992774);
    msg.setSource(64085U);
    msg.setSourceEntity(109U);
    msg.setDestination(20535U);
    msg.setDestinationEntity(13U);
    msg.camid = 23U;
    msg.x = 48315U;
    msg.y = 46584U;

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
    msg.setTimeStamp(0.658814850202);
    msg.setSource(50201U);
    msg.setSourceEntity(222U);
    msg.setDestination(3286U);
    msg.setDestinationEntity(150U);
    msg.camid = 136U;
    msg.x = 53415U;
    msg.y = 42374U;

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
    msg.setTimeStamp(0.784449920489);
    msg.setSource(59756U);
    msg.setSourceEntity(194U);
    msg.setDestination(34611U);
    msg.setDestinationEntity(189U);
    msg.camid = 15U;
    msg.x = 23349U;
    msg.y = 15175U;

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
    msg.setTimeStamp(0.353498137113);
    msg.setSource(10874U);
    msg.setSourceEntity(84U);
    msg.setDestination(47814U);
    msg.setDestinationEntity(184U);
    msg.tracking = 13U;
    msg.lat = 0.914965296889;
    msg.lon = 0.871525467258;
    msg.x = 0.114098821928;
    msg.y = 0.404200344628;
    msg.z = 0.958628880493;

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
    msg.setTimeStamp(0.130833376608);
    msg.setSource(64771U);
    msg.setSourceEntity(36U);
    msg.setDestination(31271U);
    msg.setDestinationEntity(229U);
    msg.tracking = 200U;
    msg.lat = 0.848961464404;
    msg.lon = 0.36179794382;
    msg.x = 0.0475671768097;
    msg.y = 0.756355547944;
    msg.z = 0.995287821712;

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
    msg.setTimeStamp(0.157426290508);
    msg.setSource(45326U);
    msg.setSourceEntity(236U);
    msg.setDestination(11764U);
    msg.setDestinationEntity(79U);
    msg.tracking = 219U;
    msg.lat = 0.184220686555;
    msg.lon = 0.960844368456;
    msg.x = 0.597448980504;
    msg.y = 0.0551335594441;
    msg.z = 0.268819283761;

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
    msg.setTimeStamp(0.0752135915417);
    msg.setSource(58521U);
    msg.setSourceEntity(92U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(36U);
    msg.target.assign("PDKMUIGVWBOXGDYYJVCKSSPDRQRONUFQAEPKVDXXOXGGNR");
    msg.lbearing = 0.81127106338;
    msg.lelevation = 0.0772072795584;
    msg.bearing = 0.177184018804;
    msg.elevation = 0.848936352564;
    msg.phi = 0.345504439518;
    msg.theta = 0.0315571008014;
    msg.psi = 0.887915965403;
    msg.accuracy = 0.0172554565009;

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
    msg.setTimeStamp(0.642176870565);
    msg.setSource(10884U);
    msg.setSourceEntity(245U);
    msg.setDestination(10670U);
    msg.setDestinationEntity(241U);
    msg.target.assign("BJEZMOKHNYDSBPTLFMPCRQOVDTUCFGHTALMVRJUWCXZIYVUQJHURQXEJBYDJCXPETXBIUIAWUZKMARDLJQCNBMTIHLOSVRFSDOKIKRSYMEDDKFLZRVLCVKSTEBMWHOPKVEZQGDFVSLCZINLAPWJFTFWJURGMXNMNKCAUPKTEOCFOGHUA");
    msg.lbearing = 0.631119744883;
    msg.lelevation = 0.265830779107;
    msg.bearing = 0.65110782783;
    msg.elevation = 0.838578374143;
    msg.phi = 0.34398273506;
    msg.theta = 0.820207638109;
    msg.psi = 0.719517400816;
    msg.accuracy = 0.183488006448;

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
    msg.setTimeStamp(0.115447941335);
    msg.setSource(44348U);
    msg.setSourceEntity(129U);
    msg.setDestination(65359U);
    msg.setDestinationEntity(87U);
    msg.target.assign("GXXDAXISNWCOQFFMVYZRARPDJNUAITZBBLRIZPKXRBCASQPEUQFLJVNFMHCJNRZXJVCANPAOQTGKSMPDWGJIUSGTYRVSKWWXPLTDSLSBOGWNKHMFBUXOCMFWGUJAVBDTCTQIFENKUQMMIXJVHXWDJVMHLZYHAYSPHIAIHKGZSPQLEVWLCLURWUYUKBWJMFFOIEKQDEQOEKZACXBHKLDEORJSOBRYIDMTZNN");
    msg.lbearing = 0.706999566149;
    msg.lelevation = 0.952244644539;
    msg.bearing = 0.5066497579;
    msg.elevation = 0.138522653581;
    msg.phi = 0.0285032009435;
    msg.theta = 0.145537360625;
    msg.psi = 0.229825405245;
    msg.accuracy = 0.167971901568;

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
    msg.setTimeStamp(0.0389347533508);
    msg.setSource(28552U);
    msg.setSourceEntity(234U);
    msg.setDestination(28041U);
    msg.setDestinationEntity(85U);
    msg.target.assign("YHFIPNKZNVUDSMRLMYRNFTOULPCLDDUPOXXIUNDEZFLVJUJTJEQRPWMHQZCSWFWWGEXWJLIRNAOLKVZWNOYJAQCSLGGZJTMVIBUMBRZMABLKWGAFZQESETSIBSAUKDQTHNKEPJBYAVDCMBIYYQXPNFVBTJJCGOZVDUEZHOCLIKBYWOOLKQZRWPTXWYKCHNYVDTSGAKENTSACFARPHEVHJH");
    msg.x = 0.2878259516;
    msg.y = 0.815090426983;
    msg.z = 0.166132892276;
    msg.n = 0.528676422671;
    msg.e = 0.847480807013;
    msg.d = 0.801741577536;
    msg.phi = 0.983631439365;
    msg.theta = 0.730531625569;
    msg.psi = 0.411629748346;
    msg.accuracy = 0.75518491059;

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
    msg.setTimeStamp(0.180368745111);
    msg.setSource(54307U);
    msg.setSourceEntity(237U);
    msg.setDestination(11065U);
    msg.setDestinationEntity(65U);
    msg.target.assign("DBEVYWAIKQTLMATERMBFJSPIHHFJHJEZVTAQNTONFSGSLGMPRNEMAINTWPYIRLDSTYGBEFESDTKXZSRLGUZOWNLNDGXUZHYXYUCQ");
    msg.x = 0.030281329529;
    msg.y = 0.397136662511;
    msg.z = 0.600917232566;
    msg.n = 0.534776292225;
    msg.e = 0.47358060184;
    msg.d = 0.904297651316;
    msg.phi = 0.803125663347;
    msg.theta = 0.0107129192014;
    msg.psi = 0.746228732089;
    msg.accuracy = 0.79864443385;

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
    msg.setTimeStamp(0.0163830344135);
    msg.setSource(28424U);
    msg.setSourceEntity(225U);
    msg.setDestination(29398U);
    msg.setDestinationEntity(196U);
    msg.target.assign("MJAWYJRIVMSYZQIEWPBLWABHDWBHTMONKCUBJGUHAPGOMKZCUPFLBYOAUONITSNOEXNXTQPWLAFLBMCMYXICZPDPLCDCNMXTRKIJZTOZYPFEGNSKIQUHSXPVKIMLQLVGMVNYRZSXUCDFHILKSDPREGUXONBNUKJFWKZSEETFFDGDCEOTTQOGJLWCUEEZHPQAVYTXBSGQ");
    msg.x = 0.666672666328;
    msg.y = 0.982904796545;
    msg.z = 0.955280499855;
    msg.n = 0.172001985357;
    msg.e = 0.454337765833;
    msg.d = 0.106221535033;
    msg.phi = 0.251266490858;
    msg.theta = 0.845515583152;
    msg.psi = 0.832057506421;
    msg.accuracy = 0.792187795391;

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
    msg.setTimeStamp(0.915252813894);
    msg.setSource(45768U);
    msg.setSourceEntity(225U);
    msg.setDestination(8132U);
    msg.setDestinationEntity(96U);
    msg.target.assign("KXSJOFQOFTHKBJZMAOCJCBQLWIXZKWDCFZDZGPXRIJZVPPNLSNJBLTETHLDQFROYIQCNQNMVMQBSDNHZDPLUGCGRJMHKEXLWYXGXVKSMVOCNSEQAPUIJFQGHNFRRRBMATRLTWICBSTTYPAHBPYIBJFTYYUDEYQVVXWZUVEHOBWOGVGSZVNEEKPLHGMUGTSCUWBWNAOJEAKV");
    msg.lat = 0.797233187356;
    msg.lon = 0.525581887573;
    msg.z_units = 9U;
    msg.z = 0.181612271247;
    msg.accuracy = 0.536242387931;

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
    msg.setTimeStamp(0.955948708946);
    msg.setSource(54179U);
    msg.setSourceEntity(107U);
    msg.setDestination(28932U);
    msg.setDestinationEntity(166U);
    msg.target.assign("OFDDQNKBCVYJHXJGHTMOZUUDCMPQEKTZMTBUWOTCGHEIKXSPFLZIOSBSSIPBLMYPQNRBJEJDIRJOPSAVFXRXLWDOKGQCRLKPZWFOFARDVQZAOZUGNGMXVANWPSRGOOWBRSNMTNLHVNHJEELKWVIYUVHEIKAGYHXMADGSFJRUBAFYTMN");
    msg.lat = 0.154008572683;
    msg.lon = 0.439311907375;
    msg.z_units = 224U;
    msg.z = 0.446188058246;
    msg.accuracy = 0.464792511614;

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
    msg.setTimeStamp(0.770849895507);
    msg.setSource(3902U);
    msg.setSourceEntity(29U);
    msg.setDestination(37926U);
    msg.setDestinationEntity(84U);
    msg.target.assign("JLPVHZWEJJNMLGXSSWAMOWBKDQKITMGRUXSWEPAYKIYFUIGEJOBUGDICJGUCQFRXBXEMFZDGCTFYFWYTXUOFSFSFTZBUCWRBGIHVGSJYYRAJPNPCPOZLHDRJPYNALYKVHWGSHEJCHOCVVXFRNHAIUBZWOPZONGKQCNVMMMQKASRQTOKZPIEEZFTZXLBIHQQQICLKDAPLJUROKYWRYBXDVSLBDXQCN");
    msg.lat = 0.871082748415;
    msg.lon = 0.840003733585;
    msg.z_units = 252U;
    msg.z = 0.810183656017;
    msg.accuracy = 0.668029547096;

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
    msg.setTimeStamp(0.165710745629);
    msg.setSource(48786U);
    msg.setSourceEntity(194U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(216U);
    msg.name.assign("IQYGHPEJSGQDMVJRNNULATSGMYTWKISDUXECQPBDVVJAD");
    msg.lat = 0.792968515137;
    msg.lon = 0.879801585957;
    msg.z = 0.147676893364;
    msg.z_units = 119U;

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
    msg.setTimeStamp(0.590270982475);
    msg.setSource(52109U);
    msg.setSourceEntity(144U);
    msg.setDestination(43828U);
    msg.setDestinationEntity(98U);
    msg.name.assign("RHHDINQTNIGERKSSAIEOFYWJYOYWLSKIMXJPWCPYFRNZYCMKTAUBFPGDQQATMSKEMMICLWUOQAEEKRLGQCDIBTOIYNXFJHUOMZHUJJSDZKHKRATWGEBXLKQTBZFCBNRTVGODAVKXVPOFWPHUAPNVMRGVHHXWIONYNKHGGZCLXOFEYVIQGUADCLLZJCBRZPQNOXUZCTQZEFWYJSLXPVWCRDTMBUSTJBUVD");
    msg.lat = 0.707354472231;
    msg.lon = 0.37641845089;
    msg.z = 0.652395026783;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.697907025336);
    msg.setSource(41691U);
    msg.setSourceEntity(151U);
    msg.setDestination(47723U);
    msg.setDestinationEntity(251U);
    msg.name.assign("KDGIDVNNYXWSERQYSMOXGLYPIEAELQIRTBASOYMOICUXSWHNRRRKJJGHVBPFWTLSTTXIZPEJVDNAJZJSHIJUOVLHFYWBDCMHXFKCHBUATUNLCAKRABHMIFKCZRWYWDGCZZJIKUVXLPSCRPNEEMFQQFKWOFDNVZOIMCPDJOUFQXBXZMHSYRYNJGNLTGKAABQMOQSGGBJBATHHVEULQMTRDXVTCWLUPDZA");
    msg.lat = 0.787803811076;
    msg.lon = 0.0841698894345;
    msg.z = 0.708257060467;
    msg.z_units = 52U;

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
    msg.setTimeStamp(0.16785872668);
    msg.setSource(57971U);
    msg.setSourceEntity(188U);
    msg.setDestination(24387U);
    msg.setDestinationEntity(5U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.662742564252);
    msg.setSource(20005U);
    msg.setSourceEntity(252U);
    msg.setDestination(44534U);
    msg.setDestinationEntity(200U);
    msg.op = 94U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SXMOXSIHBTEBQFZULLWNZBLALVEQNJAGJTTNGKQXTWCFXTKKYVFFVLRAXQEKUVJPXZVCBQLZBHFJSBYNVTMPMPDMWAKIHTYALHMCBALNDQBSHW");
    tmp_msg_0.lat = 0.0787163308261;
    tmp_msg_0.lon = 0.037600768293;
    tmp_msg_0.z = 0.894337030962;
    tmp_msg_0.z_units = 65U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.87010858802);
    msg.setSource(35694U);
    msg.setSourceEntity(193U);
    msg.setDestination(8038U);
    msg.setDestinationEntity(167U);
    msg.op = 47U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GIKGIYIFPVVMKNWFRQBGQURTOKDNFXWOSIULFXDQSJFTZHEXXYRXZPJGJAKGABDCKBJEBDTCTLXEZQFDFHAULHECTMNDRPWKRUNXPMYHMOWUOSHATLSBOETSJWWIAVQMAZJSVMDIIWGCOXHQNPZBLDMKMJPMTVOYIYQAYOP");
    tmp_msg_0.lat = 0.920275065483;
    tmp_msg_0.lon = 0.813043404481;
    tmp_msg_0.z = 0.581418299353;
    tmp_msg_0.z_units = 76U;
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
    msg.setTimeStamp(0.562120645366);
    msg.setSource(37088U);
    msg.setSourceEntity(155U);
    msg.setDestination(14125U);
    msg.setDestinationEntity(226U);
    msg.value = 0.57937141644;
    msg.type = 10U;

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
    msg.setTimeStamp(0.411767711367);
    msg.setSource(27983U);
    msg.setSourceEntity(137U);
    msg.setDestination(33768U);
    msg.setDestinationEntity(240U);
    msg.value = 0.509997021349;
    msg.type = 48U;

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
    msg.setTimeStamp(0.670624673573);
    msg.setSource(63984U);
    msg.setSourceEntity(59U);
    msg.setDestination(21069U);
    msg.setDestinationEntity(107U);
    msg.value = 0.896412886132;
    msg.type = 41U;

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
    msg.setTimeStamp(0.406829306375);
    msg.setSource(60394U);
    msg.setSourceEntity(223U);
    msg.setDestination(5827U);
    msg.setDestinationEntity(8U);
    msg.value = 0.790908482663;

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
    msg.setTimeStamp(0.29773540052);
    msg.setSource(41516U);
    msg.setSourceEntity(108U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(165U);
    msg.value = 0.424500410667;

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
    msg.setTimeStamp(0.846905153286);
    msg.setSource(24329U);
    msg.setSourceEntity(171U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(125U);
    msg.value = 0.203500289261;

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
    msg.setTimeStamp(0.607656596137);
    msg.setSource(38746U);
    msg.setSourceEntity(184U);
    msg.setDestination(31960U);
    msg.setDestinationEntity(95U);
    msg.timestamp_last_service = 0.32886506784;
    msg.time_next_service = 0.273901539005;
    msg.time_motor_next_service = 0.505262030208;
    msg.time_idle_ground = 0.499154213239;
    msg.time_idle_air = 0.307920654757;
    msg.time_idle_water = 0.892645933585;
    msg.time_idle_underwater = 0.516153312605;
    msg.time_idle_unknown = 0.664459618121;
    msg.time_motor_ground = 0.772001467904;
    msg.time_motor_air = 0.667389028226;
    msg.time_motor_water = 0.985787879289;
    msg.time_motor_underwater = 0.379278622673;
    msg.time_motor_unknown = 0.294360276305;
    msg.rpm_min = -2970;
    msg.rpm_max = -2665;
    msg.depth_max = 0.542280551375;

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
    msg.setTimeStamp(0.118151961426);
    msg.setSource(2406U);
    msg.setSourceEntity(230U);
    msg.setDestination(56461U);
    msg.setDestinationEntity(18U);
    msg.timestamp_last_service = 0.900386359761;
    msg.time_next_service = 0.299515907837;
    msg.time_motor_next_service = 0.135380641213;
    msg.time_idle_ground = 0.0261692637735;
    msg.time_idle_air = 0.153932813209;
    msg.time_idle_water = 0.657879645736;
    msg.time_idle_underwater = 0.602749946017;
    msg.time_idle_unknown = 0.932080070226;
    msg.time_motor_ground = 0.621758437665;
    msg.time_motor_air = 0.718769274773;
    msg.time_motor_water = 0.681017062527;
    msg.time_motor_underwater = 0.34000219911;
    msg.time_motor_unknown = 0.50575377221;
    msg.rpm_min = -2899;
    msg.rpm_max = 20557;
    msg.depth_max = 0.41699585511;

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
    msg.setTimeStamp(0.848643209632);
    msg.setSource(20085U);
    msg.setSourceEntity(209U);
    msg.setDestination(12333U);
    msg.setDestinationEntity(132U);
    msg.timestamp_last_service = 0.0462610688368;
    msg.time_next_service = 0.611364732095;
    msg.time_motor_next_service = 0.785422918029;
    msg.time_idle_ground = 0.714302474722;
    msg.time_idle_air = 0.137991341673;
    msg.time_idle_water = 0.515487055472;
    msg.time_idle_underwater = 0.662948020727;
    msg.time_idle_unknown = 0.657295118203;
    msg.time_motor_ground = 0.148675623146;
    msg.time_motor_air = 0.381173706088;
    msg.time_motor_water = 0.912857242857;
    msg.time_motor_underwater = 0.443972908657;
    msg.time_motor_unknown = 0.537424870255;
    msg.rpm_min = -4345;
    msg.rpm_max = -5895;
    msg.depth_max = 0.903958796886;

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
    msg.setTimeStamp(0.0328441044986);
    msg.setSource(26159U);
    msg.setSourceEntity(40U);
    msg.setDestination(32449U);
    msg.setDestinationEntity(5U);
    msg.severity = 188U;
    msg.text.assign("MLSAOQESQYZZRKILQFPTKUEYJKSRGWNGSRHTYTWBTAQCEIAJCAQDBUNWEHIKCHZGLXXIJXVBFLQIDPFFJMIUPIPRXNYAYUNGSQXVHTHAYLRPGPJWVSTBWCHWIHMDBUIGTGRFSCEJDTOOYAPVMMNDTUDHJCGOKZFCEVSDMSURLUOOQFSNXQXFXVPLEAZPNGRWLYJOFOC");

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
    msg.setTimeStamp(0.595481485554);
    msg.setSource(53514U);
    msg.setSourceEntity(210U);
    msg.setDestination(39501U);
    msg.setDestinationEntity(185U);
    msg.severity = 153U;
    msg.text.assign("HJPWYSPBGQBOVRAWACUAZUUIYJEPRHWNEZRRZDFJISKXORSMLJXOJYCZACIMZILFCGRGMCGOBTLQABTHPNFDEYBKJITCTFFKQHNPGUWSXQENYEPYORKXXVNXHIDNIWZCJFKMBEKLJMXSVTJRDLNHUBFYDMOFMEAVSGXOZPVLTLMFUABBAIZTDYFUO");

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
    msg.setTimeStamp(0.356422948454);
    msg.setSource(24396U);
    msg.setSourceEntity(82U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(199U);
    msg.severity = 188U;
    msg.text.assign("GIIYZXVKDFZSFXCCCGZTIAGJPZCNOVAEVUPUCDCOMTUJHJXTRCUOQTMDEBLOJKNBQEGBFEMPAMLHYXXOSSDKCKSIIBAGOWONFUETOTARWDXSWSXLYULUTLMNYVZHZQYJGWBRVXGKGPNUMWDRBVEGFASRWEHNRSZPIBFHSUAJDLYQKMXKJHIELYUCEJHKKKDNWVFMLZZLTQXVPLHBWGAR");

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

  return test.getReturnValue();
}
