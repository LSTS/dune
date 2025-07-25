//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 562e76a9ab04a28d47230f2549654a53                            *
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
    msg.setTimeStamp(0.20565983807948796);
    msg.setSource(33954U);
    msg.setSourceEntity(26U);
    msg.setDestination(31194U);
    msg.setDestinationEntity(106U);
    msg.state = 19U;
    msg.flags = 221U;
    msg.description.assign("DDLLSMIJJZIIWHQNXIGINZPCEFIPABSXEMFHBOOGXOCADBFVGUXIUDEJUCUAHWKJGVKPMVNFFJOP");

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
    msg.setTimeStamp(0.1124520897936383);
    msg.setSource(36319U);
    msg.setSourceEntity(223U);
    msg.setDestination(9443U);
    msg.setDestinationEntity(17U);
    msg.state = 214U;
    msg.flags = 138U;
    msg.description.assign("FPARGLIQONRGJNKDNDLJDAVXRXZISKMATOPLXWVGQHPBCFMZIOVBWTRZZNUYSZTREROVJUIIJUNSMX");

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
    msg.setTimeStamp(0.7084071932202785);
    msg.setSource(58231U);
    msg.setSourceEntity(250U);
    msg.setDestination(12833U);
    msg.setDestinationEntity(114U);
    msg.state = 150U;
    msg.flags = 40U;
    msg.description.assign("YTGTKGZHUMVLILOINUAESGUYZUBMEOHQALFRXNMIZLMLYCACMUQBWJQEMKFVJFYKCLDWKCIOYQTGTTVPNDNWFZICWFRHBDXAVREXHOTEZGJYFJNPRLYOUBANVHKVKDYVOLSOCKLMYRMOZGZBFKRDLBBWPVEHTWGQTECXRJAMUHWSQEQIIGVXPTDEJDHWKXZOQRPDSXJQPHXDBSXPYPFMPABSUCZKCNTRASAJXH");

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
    msg.setTimeStamp(0.5039336627072186);
    msg.setSource(33825U);
    msg.setSourceEntity(232U);
    msg.setDestination(40208U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.3502668459615653);
    msg.setSource(33841U);
    msg.setSourceEntity(165U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.06739850309887518);
    msg.setSource(30701U);
    msg.setSourceEntity(54U);
    msg.setDestination(22056U);
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
    msg.setTimeStamp(0.047908825713092074);
    msg.setSource(2639U);
    msg.setSourceEntity(10U);
    msg.setDestination(20118U);
    msg.setDestinationEntity(36U);
    msg.id = 73U;
    msg.label.assign("RWXKPNPFLNZEURUTPDLIBOCWQILHDBLNPKSNOCOFXCETHELZCXQTFGNLFWOOIWSZEKINFWTMDLXDVANAXDSAVOVASOMAICPBQCZMTHPERMJPGIIQCYVYHRTWGTXHMIBKXUFKTJIVWRGHYTLXYVENUCUERHAYJNSXMSDBBOKKBBWATGUMGBHZDHVVOIRBRYFNAOZGRZJQQZELPDEQMFHJFGYYPMSYUJJZLGDSGS");
    msg.component.assign("EAEYUAAXQJJYSCSREMDNKBYCWQAPWEAIPELKALKUKNHVSLLWDOVKUUHXKLVOFGZGCMMRAWMCZGFRIMPFCVWOZCBLRCLSRGOQSRNXIQWOTTOLPNTPMDXXDTFONNVTNPMHKHHV");
    msg.act_time = 14916U;
    msg.deact_time = 50219U;

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
    msg.setTimeStamp(0.22220683507439332);
    msg.setSource(55237U);
    msg.setSourceEntity(238U);
    msg.setDestination(33113U);
    msg.setDestinationEntity(25U);
    msg.id = 249U;
    msg.label.assign("TGEZBQCWLWTBZLMSFGBABEZWCWMLFLCICUMNXAVJAXISKHFOETOLDHVFRGZJIOQDVEVFUQOJGQHPDGCIUBWCCQJRPSYWFYPVOMRADNUVRREJJCOAALRAXQWMRXECBYWHYQJPKFSVQOGDN");
    msg.component.assign("BUPYOWBWZHSNPTEPNWBQKRSKVVYHBIPCMDOVOIXAJULXTAIYGXLAIKRWLMFRAORFDSYWEQCZNZIWBXGXSCHAVBTIUPSNYASMOKHGUNARTFDXQJCKJQORSNOOXLCJRXDTDRMHQVIBBHZVMVEWCQKDXZVPJEIEKJFGMIMINTEXGPJJPDQCGZLVLYSYFAWZDMUYEBBYOZUUHLUQEVLFQKHLWKMNCZRFPDZGTJTUEFTANWSOPAHQGGG");
    msg.act_time = 37852U;
    msg.deact_time = 20593U;

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
    msg.setTimeStamp(0.15207399932082954);
    msg.setSource(39686U);
    msg.setSourceEntity(128U);
    msg.setDestination(17916U);
    msg.setDestinationEntity(243U);
    msg.id = 24U;
    msg.label.assign("HLOXQOIAHCHCFTBVVABIDMQKCBUTGYFMKKGJABNWKRSYYGIDUJRDBPCITOESJOKLVDVHQTMLXGMZBRPMQDDTJJCNECSELFUXSFWIAIRETERAESMGGVNYQJCVQULPUMKQFUCIFPSEJOJSRJGHXFERSRZPXAVRUEAWWDLBAWASCWMUYGGZZPPWKWXMKXVYWQDHNRUQPLGZYHM");
    msg.component.assign("QXVKIGTYSWYDCSLIGPJIWJBYPYFHMZTGSRUODOENZYQUJZCKQEMWXVHBMQXCIBRFKKSVZFDXWEUMACXHDBHNORUGDJRZQIWXNOUDOAJTLXADLPOTNCRUWMCKRAMELRKGAGIGAXTEQZHYFLPMHFTJLHEWSPHLVHPWNAMBBYGEZBTJWPBCXVILQDIZJNRTPWAKOSZVKROMXMNTPKUIYOLFFFBSDUCCNKQFGYVBVCSSVRAQZUEVLTQEJYFEAU");
    msg.act_time = 50392U;
    msg.deact_time = 1896U;

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
    msg.setTimeStamp(0.9027373994471268);
    msg.setSource(56921U);
    msg.setSourceEntity(243U);
    msg.setDestination(58508U);
    msg.setDestinationEntity(72U);
    msg.id = 98U;

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
    msg.setTimeStamp(0.7703907121980577);
    msg.setSource(40444U);
    msg.setSourceEntity(17U);
    msg.setDestination(22104U);
    msg.setDestinationEntity(193U);
    msg.id = 241U;

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
    msg.setTimeStamp(0.5523194764106879);
    msg.setSource(46646U);
    msg.setSourceEntity(36U);
    msg.setDestination(9562U);
    msg.setDestinationEntity(190U);
    msg.id = 21U;

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
    msg.setTimeStamp(0.3990755145540198);
    msg.setSource(9236U);
    msg.setSourceEntity(129U);
    msg.setDestination(56500U);
    msg.setDestinationEntity(2U);
    msg.op = 64U;
    msg.list.assign("JRFXOSTDFVWFSBZDHGHFWMYEJYCEIDSEVUEPYLPTNTGANVQKEYGAZCQJUMGRATRXZSROIKTSGBLGBSXOB");

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
    msg.setTimeStamp(0.8568807104118956);
    msg.setSource(19226U);
    msg.setSourceEntity(207U);
    msg.setDestination(26634U);
    msg.setDestinationEntity(23U);
    msg.op = 52U;
    msg.list.assign("GRVHIVCXNJNEUJXZGFDYRMKQOPKPTNBZEMGHMCZWHNCJSXSETVNCTLLLWZFHYICMBDYPAVVULGV");

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
    msg.setTimeStamp(0.29525346641844175);
    msg.setSource(1581U);
    msg.setSourceEntity(242U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(203U);
    msg.op = 15U;
    msg.list.assign("FVGOTHFKUSSAEJQPAMBFFRCOINTRWOJMOKSBDGQQPYMIJBVRFVIYJXTLACRBEXXUYHRKHFMVWWRAJVBWWLUQDLADSIRPSXXLMRLQLWJDLTCVAUBLSBEYBRHWWNDGCCJIMWPQFDVNKYINU");

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
    msg.setTimeStamp(0.3250966410978623);
    msg.setSource(45429U);
    msg.setSourceEntity(246U);
    msg.setDestination(30441U);
    msg.setDestinationEntity(100U);
    msg.value = 101U;

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
    msg.setTimeStamp(0.3969595302975988);
    msg.setSource(2910U);
    msg.setSourceEntity(116U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(108U);
    msg.value = 41U;

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
    msg.setTimeStamp(0.6036136963704468);
    msg.setSource(31975U);
    msg.setSourceEntity(40U);
    msg.setDestination(21944U);
    msg.setDestinationEntity(158U);
    msg.value = 39U;

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
    msg.setTimeStamp(0.03702331789261992);
    msg.setSource(42709U);
    msg.setSourceEntity(12U);
    msg.setDestination(26024U);
    msg.setDestinationEntity(38U);
    msg.consumer.assign("QLVYIUDOUYTWBEMSBVOPZXRPFCAXDIDBJENSKQQUXPNYAVSMAQPSHMREMRRZTGWWNYVFIUBYQVADMLFKSANESFLEPQBCLYEGEYMCKPNHIITIHMBMOJJPODAFIDG");
    msg.message_id = 23795U;

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
    msg.setTimeStamp(0.34927134632581813);
    msg.setSource(59001U);
    msg.setSourceEntity(165U);
    msg.setDestination(22398U);
    msg.setDestinationEntity(199U);
    msg.consumer.assign("ZOBQBSSKMSRNKVPHZLXGFATGDCUROBXVPKKRAULSZXLWNDIZWZIEQJMUDAGISCFAQIVHRMBMQELXYTGOEAWRFWXUINAOJCUJIRFWDKIYAOJHOFWMGXTQYENVJSGZPFGCRWJRCYUBVEVDYKQEAHSUDYQEKSQSDTJTFIQJDLKPOMNKEAHCVPBQICJXCYTYIEXHUMLMBNZMPW");
    msg.message_id = 18974U;

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
    msg.setTimeStamp(0.638791289761452);
    msg.setSource(13359U);
    msg.setSourceEntity(145U);
    msg.setDestination(7643U);
    msg.setDestinationEntity(254U);
    msg.consumer.assign("KLWXOPFPHKEMCRDZGTTCEXUHTKAPUKXUPSZSOFZIQTHIGBYLNGNGMXHSVSBBQZHRSKVFLRJBVTRHMNCVLLWIUCPIKFSFBMKVYYDNBGZFSKACA");
    msg.message_id = 51131U;

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
    msg.setTimeStamp(0.8559323361603179);
    msg.setSource(54941U);
    msg.setSourceEntity(237U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(19U);
    msg.type = 151U;

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
    msg.setTimeStamp(0.18525587562076862);
    msg.setSource(15336U);
    msg.setSourceEntity(205U);
    msg.setDestination(65200U);
    msg.setDestinationEntity(184U);
    msg.type = 159U;

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
    msg.setTimeStamp(0.5652574437349553);
    msg.setSource(36220U);
    msg.setSourceEntity(32U);
    msg.setDestination(18009U);
    msg.setDestinationEntity(184U);
    msg.type = 167U;

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
    msg.setTimeStamp(0.21163593663607017);
    msg.setSource(48872U);
    msg.setSourceEntity(18U);
    msg.setDestination(58027U);
    msg.setDestinationEntity(67U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.7101735658821196);
    msg.setSource(52632U);
    msg.setSourceEntity(154U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(210U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.2551895967214146);
    msg.setSource(31337U);
    msg.setSourceEntity(203U);
    msg.setDestination(61204U);
    msg.setDestinationEntity(52U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.02751466216762133);
    msg.setSource(18136U);
    msg.setSourceEntity(63U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(99U);
    msg.total_steps = 235U;
    msg.step_number = 160U;
    msg.step.assign("ZNBLXIZJYU");
    msg.flags = 28U;

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
    msg.setTimeStamp(0.0924192969128278);
    msg.setSource(10640U);
    msg.setSourceEntity(87U);
    msg.setDestination(49616U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 183U;
    msg.step_number = 26U;
    msg.step.assign("ZYKZSQGYITPZTFYPCVWORWXRPEA");
    msg.flags = 133U;

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
    msg.setTimeStamp(0.28434616361444554);
    msg.setSource(15593U);
    msg.setSourceEntity(158U);
    msg.setDestination(31416U);
    msg.setDestinationEntity(236U);
    msg.total_steps = 9U;
    msg.step_number = 204U;
    msg.step.assign("TSNPZSTBQSWPMOQWGEFRLHSJHXHBEJUTCCLCDXSJXFWQGKVWMNLMYSOHNSPUBZSBBOKJRTQQIVXNLMFIVXIBABEUOUDWRQWYIDQFWDEAAKTVEYLXZTDKJZTYCPERBWACDMAOUFIDANMQZMYHPONUYXFBSKONGXHUHFDMGUKGQALPMVVDCUZKNFYCWG");
    msg.flags = 80U;

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
    msg.setTimeStamp(0.6088347702379457);
    msg.setSource(43855U);
    msg.setSourceEntity(148U);
    msg.setDestination(2772U);
    msg.setDestinationEntity(39U);
    msg.state = 91U;
    msg.error.assign("XTOXRCCWLHTYLHIRUFCOZOOQUCMOEWXSPYEHKSHSLYNJVMIDTVASLNUCPSNRUIPZQIARBPZJJVDKXTAFPEFDCDYEDJQGKFRNAEZGMEQTMFLEGMYEHBJDSPUQRIYXNZGQNWHTGXKBROBJPANKGHTLYLNZOCOIBWQFKAHAZNZGWYMNRPJAQDBYODVMUJFLVKBWZVQOVPSQXXAGKSIHSVUFJCTWPFIRBZEIEBULMAHWWYVK");

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
    msg.setTimeStamp(0.4811771204361328);
    msg.setSource(19190U);
    msg.setSourceEntity(178U);
    msg.setDestination(4110U);
    msg.setDestinationEntity(68U);
    msg.state = 188U;
    msg.error.assign("EXGCWACXCEBHFHZODFOXSHCLVNBUBYSLEDXKLWKRTYWZRQKHMNWSAGXIRWEBAVJTLTTCWDZLKYIVQUFAVNKCYDOQRUUBIXJJPZIYAMGMSRDTUGQHGYLIEWBUXSFEPMZJRQAOKBMUPFMAIDWFJFYETNKQYRQNMFZZJKQDOGCFITTXROPMCHEJHGARVVNQOPNNATVKWUSGZPSZHTBPVQHOELSDLMSLJPIKVDASDOHFMBU");

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
    msg.setTimeStamp(0.0032867657514173976);
    msg.setSource(34874U);
    msg.setSourceEntity(245U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(61U);
    msg.state = 65U;
    msg.error.assign("BMBSNFELJUSCOJJRPHQYKBQOCEECZWQCHCUKIWLMKZMSLWPHMMMDYMDQRPYAUQELBHDMJVRYIQJHNTZAOUOPLORGWFJGCDVRYXXPEGLGTRVSWUDUXGVNPTENWXAZFSRGKIYUONBUIDGZKXSTEFSFHCSIZDZVANFMFAJBLOJKBPPL");

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
    msg.setTimeStamp(0.1992159093363085);
    msg.setSource(65174U);
    msg.setSourceEntity(253U);
    msg.setDestination(13391U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.9862741823954299);
    msg.setSource(25577U);
    msg.setSourceEntity(153U);
    msg.setDestination(28175U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.09328076766084514);
    msg.setSource(1155U);
    msg.setSourceEntity(177U);
    msg.setDestination(31098U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.5642284024361495);
    msg.setSource(42822U);
    msg.setSourceEntity(69U);
    msg.setDestination(43949U);
    msg.setDestinationEntity(148U);
    msg.op = 215U;
    msg.speed_min = 0.12239539072662065;
    msg.speed_max = 0.04334200701407731;
    msg.long_accel = 0.766552192041123;
    msg.alt_max_msl = 0.22633730590902645;
    msg.dive_fraction_max = 0.6653037075250954;
    msg.climb_fraction_max = 0.26435163056252586;
    msg.bank_max = 0.991879914147146;
    msg.p_max = 0.20163843362894485;
    msg.pitch_min = 0.9978503869928077;
    msg.pitch_max = 0.46313621973342134;
    msg.q_max = 0.7554665703803088;
    msg.g_min = 0.2917713136883401;
    msg.g_max = 0.6088965756489418;
    msg.g_lat_max = 0.21771151084839702;
    msg.rpm_min = 0.46862843504092866;
    msg.rpm_max = 0.9148051387652842;
    msg.rpm_rate_max = 0.2402733429502446;

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
    msg.setTimeStamp(0.11255223371422185);
    msg.setSource(25520U);
    msg.setSourceEntity(163U);
    msg.setDestination(55821U);
    msg.setDestinationEntity(43U);
    msg.op = 236U;
    msg.speed_min = 0.2240349966222861;
    msg.speed_max = 0.965710219411637;
    msg.long_accel = 0.48791875573883836;
    msg.alt_max_msl = 0.1419812604780527;
    msg.dive_fraction_max = 0.752913743804178;
    msg.climb_fraction_max = 0.13917824771477438;
    msg.bank_max = 0.18706602359899038;
    msg.p_max = 0.7393788034983619;
    msg.pitch_min = 0.27999557551727006;
    msg.pitch_max = 0.3542538213327642;
    msg.q_max = 0.9692578577558527;
    msg.g_min = 0.8032106338937242;
    msg.g_max = 0.7549652513413768;
    msg.g_lat_max = 0.47100215989421446;
    msg.rpm_min = 0.2928970669113924;
    msg.rpm_max = 0.3818010251956746;
    msg.rpm_rate_max = 0.8388843284619936;

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
    msg.setTimeStamp(0.4867034960263015);
    msg.setSource(2806U);
    msg.setSourceEntity(57U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(227U);
    msg.op = 137U;
    msg.speed_min = 0.2416773730456917;
    msg.speed_max = 0.997167002020637;
    msg.long_accel = 0.0727426301821692;
    msg.alt_max_msl = 0.05146411550829744;
    msg.dive_fraction_max = 0.3333895994227897;
    msg.climb_fraction_max = 0.42672374644391997;
    msg.bank_max = 0.041396921068652004;
    msg.p_max = 0.2938713121324482;
    msg.pitch_min = 0.24998706976157137;
    msg.pitch_max = 0.17633969149199324;
    msg.q_max = 0.788937188171675;
    msg.g_min = 0.30493486854999097;
    msg.g_max = 0.37423209154487946;
    msg.g_lat_max = 0.998288761845074;
    msg.rpm_min = 0.8387897878456833;
    msg.rpm_max = 0.5513647409894826;
    msg.rpm_rate_max = 0.3417657645273027;

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
    msg.setTimeStamp(0.41832375287681633);
    msg.setSource(37701U);
    msg.setSourceEntity(213U);
    msg.setDestination(22824U);
    msg.setDestinationEntity(15U);
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 16U;
    tmp_msg_0.name.assign("SMZGJVHOQRZDUGFFMPJHGTCGIJQNSQP");
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
    msg.setTimeStamp(0.8537132054286931);
    msg.setSource(15569U);
    msg.setSourceEntity(6U);
    msg.setDestination(42310U);
    msg.setDestinationEntity(110U);
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.2240030120411307;
    tmp_msg_0.width = 0.11756478841151163;
    tmp_msg_0.length = 0.2636064935178757;
    tmp_msg_0.bearing = 0.6857315333260062;
    tmp_msg_0.pxl = -9232;
    tmp_msg_0.encoding = 175U;
    const signed char tmp_tmp_msg_0_0[] = {-12, -104, 103, -17, -28, -34, 25, 5, 123, 28, 11, 92, -109, -79, -2, -100, -115, -11, 53, 89, 52, -15, -49, 11, -32, -47, 33, -67, 86, -6, -72, -4, 11, -29, 85, 23, 37, -36, -43, 107, 76, -63, -120, 103, -90, -99, -44, -14, -29, 104, -2, -78, -81, -24, 54, 22, 41, -91, 21, -3, -54, 39, -112, -128, -77, -90, 44, -61, 58, -26, -55, -62, -126, -126, 107, 22, -48, 38, 52, 90, 10, -85, -118, 13, 42, -82, 53, -51, -28, -106, -97, 82, 107, -80, -71};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8980394522310642);
    msg.setSource(45465U);
    msg.setSourceEntity(151U);
    msg.setDestination(3817U);
    msg.setDestinationEntity(65U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 45673U;
    tmp_msg_0.lat = 0.584485136421322;
    tmp_msg_0.lon = 0.4823852379723984;
    tmp_msg_0.z = 0.9842595027400272;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.duration = 26900U;
    tmp_msg_0.speed = 0.769856101308133;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.type = 215U;
    tmp_msg_0.radius = 0.4553302433508174;
    tmp_msg_0.length = 0.8264742688433891;
    tmp_msg_0.bearing = 0.9867079903228396;
    tmp_msg_0.direction = 164U;
    tmp_msg_0.custom.assign("CNXGGFDPJRGUIOQYBWWLNXAPOFYBMLLDYYSWCHSFIIFDNRXTSZMAHNYDPNPHUMXGLKVQVLKVELKAESOQTCQHHZAPFCUJTDBURSSGROGTNXZEQUUIAAMBJURYRCHBHWNMEVPCWUZGZKZMBKHQCPEXKERUKSSXIMQJRQJIFRYDTKLOVBCWKKDITVZAJTVXZCFEHOZIIQMQBYTJMTFSDGJWJADXNEWUXEOOOPLLMPOYA");
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.10018185822756853);
    msg.setSource(46151U);
    msg.setSourceEntity(96U);
    msg.setDestination(2066U);
    msg.setDestinationEntity(244U);
    msg.value = 0.3637469017574416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.5416266289595962);
    msg.setSource(7716U);
    msg.setSourceEntity(196U);
    msg.setDestination(44757U);
    msg.setDestinationEntity(156U);
    msg.value = 0.20793319788506126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.8486486113922649);
    msg.setSource(25225U);
    msg.setSourceEntity(252U);
    msg.setDestination(498U);
    msg.setDestinationEntity(137U);
    msg.value = 0.16330745760714027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8167505359543489);
    msg.setSource(54027U);
    msg.setSourceEntity(106U);
    msg.setDestination(29160U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.45864764570925354;
    msg.lon = 0.7900662338640561;
    msg.height = 0.49367837407296766;
    msg.x = 0.1298104557324129;
    msg.y = 0.1513157830729952;
    msg.z = 0.5454659075437683;
    msg.phi = 0.4841055225217069;
    msg.theta = 0.37346420604433705;
    msg.psi = 0.43509642558558914;
    msg.u = 0.0011016556723809634;
    msg.v = 0.7430568408234716;
    msg.w = 0.09264517509452896;
    msg.p = 0.3546389611204416;
    msg.q = 0.11402267240152453;
    msg.r = 0.7101553017665634;
    msg.svx = 0.23657391512993664;
    msg.svy = 0.9616587025937585;
    msg.svz = 0.08303180455817494;

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
    msg.setTimeStamp(0.745070486482042);
    msg.setSource(52424U);
    msg.setSourceEntity(213U);
    msg.setDestination(38262U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.9958570308898358;
    msg.lon = 0.3257814096894416;
    msg.height = 0.04175847731183291;
    msg.x = 0.19769441722715375;
    msg.y = 0.6446491278117834;
    msg.z = 0.3317732961156644;
    msg.phi = 0.3384041232997417;
    msg.theta = 0.12212359765366021;
    msg.psi = 0.15513238369426752;
    msg.u = 0.28879110352265136;
    msg.v = 0.7967236426468256;
    msg.w = 0.8048421540231623;
    msg.p = 0.06692005442734372;
    msg.q = 0.22697712639466316;
    msg.r = 0.27305047268718563;
    msg.svx = 0.02851707390540481;
    msg.svy = 0.4930206888659072;
    msg.svz = 0.6456962538551678;

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
    msg.setTimeStamp(0.9585495555160347);
    msg.setSource(33636U);
    msg.setSourceEntity(242U);
    msg.setDestination(40115U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.9838246425264354;
    msg.lon = 0.5680433751251692;
    msg.height = 0.23372890571223393;
    msg.x = 0.5990627071300267;
    msg.y = 0.43086683770307643;
    msg.z = 0.7945828811625237;
    msg.phi = 0.6326059445468634;
    msg.theta = 0.2800972754388926;
    msg.psi = 0.9816809126791499;
    msg.u = 0.7121136004398675;
    msg.v = 0.6526385082269875;
    msg.w = 0.5631915342047236;
    msg.p = 0.41527811810313786;
    msg.q = 0.5592076316533356;
    msg.r = 0.6481738237775339;
    msg.svx = 0.40883779025176303;
    msg.svy = 0.7912557779264499;
    msg.svz = 0.20607634038864253;

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
    msg.setTimeStamp(0.21195563117648286);
    msg.setSource(61691U);
    msg.setSourceEntity(84U);
    msg.setDestination(48433U);
    msg.setDestinationEntity(223U);
    msg.op = 54U;
    msg.entities.assign("CXPWZTXRIILCTNGZSKXIXUNPZJGWCBRHHFUTXRLXKRDJJVBGPLMIOKESZKLHKQURBPQYPNZVLGRIEMYSGJDXJIRTSMAKEWCEOLFNIOADGYGCAMTTDTLLACZAHYUFABCJFWZFDJDDSHKKHHMKAENBWMQMVIZMFQJWUOVVJYJVFWUYRWCONLAHYECQTDGQS");

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
    msg.setTimeStamp(0.7593239853571222);
    msg.setSource(12244U);
    msg.setSourceEntity(179U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(17U);
    msg.op = 134U;
    msg.entities.assign("OUAGFGQEOVPRBODHFOBXGDKYBMPZNTRYBQOQPDIMFUQVAJSWUHXHTRKC");

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
    msg.setTimeStamp(0.27724459080377173);
    msg.setSource(28081U);
    msg.setSourceEntity(6U);
    msg.setDestination(5019U);
    msg.setDestinationEntity(137U);
    msg.op = 112U;
    msg.entities.assign("EZDVLIXMTTXHOXTMCQURIDIGGKGUAXDKIOSLRKGNMRMAFVXNAESAQYLNYCBEHQVOTOUOIGBIGMXN");

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
    msg.setTimeStamp(0.05695864390307559);
    msg.setSource(8427U);
    msg.setSourceEntity(164U);
    msg.setDestination(52779U);
    msg.setDestinationEntity(83U);
    msg.type = 18U;
    msg.speed = 54439U;
    const signed char tmp_msg_0[] = {-110, -68, 97, -7, -79, -102, -17, -98, -7, -115, -45, 82, 111, 17, 35, -27, 57, -60, 84, 59, -91, 32, 5, 32, -91, 68, 78, 80, 124, -44, 44, -52, -113, -128, -64, 2, -60, -113, 58, -96, 70, -49, 2, -81, -88, 52, 30, -54, -37, -26, 122, -13, -95, -99, 115, 106, 103, 25, 7, 69, 96, -75, -46, 17, 45, 39, 100, 0, 103, -82, -14, -102, -28, -10, 123, 26, 13, -16, -26, -87, 117, 4, 53, -119, 29, -61, 59, 55, -71, 82, -29, 65, -61, -37, -16, -96, 33, 64, 19, -43, 66, 54, -78, -45, 59, -111, 40, -105, -118, 67, -120, 119, 15, -23, 15, -41, -53, -65, 62, -108, -21, 104, -49, -91, -73, 84, -92, 98, -29, 82, -62, 65, 37, 1, -90, 102, 61, 80, 55, 118, 77, 98, -29, 63, -68, -2, -75, 14, -119, -71, -82, 59, 11, 11, 91, 20, -80, -33, 74, -100, 43, -52, 118, -67, 103, -39, 11, -18, 23, -105, 34, -50, -115, 111, -20, -28, 26, -82, 124, 74, -7, 47, 84, 14, 24, 59, 71, -124, 109, -65, -46};
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
    msg.setTimeStamp(0.6056645243663396);
    msg.setSource(55945U);
    msg.setSourceEntity(187U);
    msg.setDestination(2677U);
    msg.setDestinationEntity(44U);
    msg.type = 149U;
    msg.speed = 54966U;
    const signed char tmp_msg_0[] = {-68, 43, -10, 108, -80, 43, -26, 102, 119, -17, -100, 22, -62, -1, 105, -128, -18, 9, 52, 18, -9, -100, -65, 66, -52, -8, -102, -54, 72, 84, -74, -116, 51, 46, -37, -26, -7, 99, 116, 5, 92, 1, 80, -3, 38, 55, -50, -86, 2, 115, 35, -87, 36, 100, -68, -64, 91, 61, 48, -96, 93, 110, -19, -64, 111, -39, -59, 25, -34, -119, -49, -74, 94, -109, 23, 107, -74, -117, -23, 110, -72, 110, -27, -71, 77, -47, -15, 13, 68, 125, 82, -39, -28, -47, -24, 109, -43, -35, -33, 4, 86, -73, 58, -51, 122, -41, -121, 76, 101, -36, -72, 77, -13, -86, 9, -56, -87, 96, -54, -115, -39, 106, -54, -65, 5, 11, 7, 81, 118, 52, -46, 77, 21, -61, -9, -75, 90, -108, -44, -122, 125, -79, -87, -45, -124, 45, 98, 54, 87, 26, 78, -29, 63, 85, -94, -58, 111, 64, -11, -93, 71, 110, 108, -72, -118, 83, -83, 47, -66, -23, -9, -95, 43, 54, -105, -66, -72, -93, 113, -43, -93, 118, 56, -109, -54, 74, 115, 6, -69, -2, 97, -90, 74, 13, -69, -17, 68, -34, 27, -95, 123, -99, 9, 82, 68, -107, -10};
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
    msg.setTimeStamp(0.5532656543593505);
    msg.setSource(52405U);
    msg.setSourceEntity(40U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(248U);
    msg.type = 151U;
    msg.speed = 28126U;
    const signed char tmp_msg_0[] = {-111, -90, -100, -73, -60, -28, 93, 54, -91, 104, -124, -50, -3, -40, 59, -35, -47, -82, -128, -90, 82, 112, -64, -100, 50, 19, -41, 70, -110, -2, -91, -100, 22, -45, 98, -12, -32, 112, -97, -102, -112, -113, -116, -41, -88, -45, -7, 38, -84, -20, 66, 59, 98, -5, -115, 39, -88, 48, -33, -111, 81, -111, -24, -11, 94, -86, -98, 30, 124, 34, 33, 110, 12, -109, -79, 31, -95, 78, -104, 49, 94, -79, -25, -84, 51, -8, 126, 19, 52, -79, 48, -124, 100, -22, 30, 97, -110, 74, -51, 101, -60, -92, -121, 114, -83, 105, 51, -80, 39, -56, 65, -70, 59, 55, -123, 94, -111, 40, 115, -83, 51, -60, 31, 50, -19, 28, 66, -67, -77, -25, 3, 101, 14, -106, 35, -10, 67, 118, -117, 80, 81, -43, 1, 88, -56, -45, -54, 24, -113, -69, -58, 95, 23, 97, 102, -85, -39, 69, 54, -18, 29, 123, -104, 83, -64, 51, 51, 95, 91, -33, -64, 118, -7, 51, 84, -2, -80, 88, -84, -4, 18, -69, 59, 96, 86, -8, -16, 113, -92, 17, 74, -25, -85, 52, -66, -111, 75, 71, 4, 110, -73, -77, -118, 99, 79, -2, -6, -93, 34, -68, 8, -31, -56, 15};
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
    msg.setTimeStamp(0.06798022171550411);
    msg.setSource(15050U);
    msg.setSourceEntity(177U);
    msg.setDestination(4632U);
    msg.setDestinationEntity(79U);
    msg.op = 30U;
    msg.tas2acc_pgain = 0.6163554907778672;
    msg.bank2p_pgain = 0.5824886792157813;

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
    msg.setTimeStamp(0.8298652503464683);
    msg.setSource(52395U);
    msg.setSourceEntity(12U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(205U);
    msg.op = 98U;
    msg.tas2acc_pgain = 0.4335370088303425;
    msg.bank2p_pgain = 0.036434660353692805;

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
    msg.setTimeStamp(0.7429411589569443);
    msg.setSource(10180U);
    msg.setSourceEntity(82U);
    msg.setDestination(53329U);
    msg.setDestinationEntity(18U);
    msg.op = 223U;
    msg.tas2acc_pgain = 0.29394265806200104;
    msg.bank2p_pgain = 0.8817370588380926;

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
    msg.setTimeStamp(0.3860118250195902);
    msg.setSource(40400U);
    msg.setSourceEntity(66U);
    msg.setDestination(19518U);
    msg.setDestinationEntity(11U);
    msg.available = 2630083851U;
    msg.value = 248U;

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
    msg.setTimeStamp(0.35822743062000695);
    msg.setSource(44384U);
    msg.setSourceEntity(103U);
    msg.setDestination(9841U);
    msg.setDestinationEntity(227U);
    msg.available = 3763664484U;
    msg.value = 248U;

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
    msg.setTimeStamp(0.47673993612647403);
    msg.setSource(45544U);
    msg.setSourceEntity(226U);
    msg.setDestination(40359U);
    msg.setDestinationEntity(101U);
    msg.available = 3711929293U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.2927072595020038);
    msg.setSource(61944U);
    msg.setSourceEntity(84U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(194U);
    msg.op = 147U;
    msg.snapshot.assign("KQYDNAEZMCFGMGLFTKBSWBAAZTXDBBJDUNJQWUPDWAZEPWTERMAQKWGYFAGEYSCVQOFYMFRPDMJVEIPVILAOWZAMNHVHWFCQUWXKDUNRBELGNUHOSSJRJMKBWIKTZGGZHPHIGZODVTVYXHBRLEEUMDSSICQORZVHUPOXXNRCTSCCFPHPQAFMVKDOLNIZTWTEVOHLVCSSIYDYJJPACU");
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.6634438127276565;
    tmp_msg_0.base_lon = 0.5260929594988574;
    tmp_msg_0.base_time = 0.17052718007092815;
    const signed char tmp_tmp_msg_0_0[] = {57, -64, 71, 122, -117, -1, -35, -126, 72, 13, -125, -23, -82, -114, 83, -1, 16, -69, -86, 69, -27, -43, 59, -128, 102, -34, 71, 109, -1, 15, -19, -67, -4, -6, 15, -27, -97, 49, 116, -100, 106, 18, 39, -93, -81, 114, -106, -105, -54, -9, 65, -80, 7, -73, 97, -2, 2, 121, -97, -96, 119, 45, 61, -38, 117, -25, 119, 90, 108, 104, 13, 117, -64, -109, 99, -91, 4, 53, 110, 110, -87, -115, -72, 0, 95, -24, -12, -41, -30, 18, -5, -80, -119, 11, -62, 104, 105, -41, 55, -22, 101, -41, 15, -125, 88, 31, -100, 80, -38, -16, 5, -12, 119, 126, 33, -3, 44, 95, 2, -18, -93, -70, -103, 88, 0, 97, 115, -118, -6, 0, -50, -12, 62, -78, -95, -81, -125, -102, 115, -74, 27, -70, 8, -121, 40, -29, -79, 120, 111, -76, -100, -83, 105, -12, 5, 25, 83, -117, -32, 99, -51, -116, 112, 58, -94, -7, -36, 50, -29, 78, 54, 77, -2, 48, -58, -72, 73, -119, 116, -60, -101, -35, 22, -100, 71, -128, 100, -26, 94, 43, 108, 77, 98, -86, -51, 5, 116, -101, -91, 109, 12, -125, 45, 72, 78, 100, 86, -85, 16, 51, -11, 114, -60, -54, -61, 103, -28, 30, -15, 31, 120, 42, -42, 123, 126, 64, -28, -5, 93, 78, -79, -36, 10, -51, 10, 54, -92, -61, -72, -75, -42, 99, -25, 34, 64, -119, -13, -57, 13, -103, 112};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5500892605598309);
    msg.setSource(36570U);
    msg.setSourceEntity(204U);
    msg.setDestination(65322U);
    msg.setDestinationEntity(115U);
    msg.op = 72U;
    msg.snapshot.assign("EULCENFFLLSIKKGIVBHNIGLWYTGRLHHGREFCRNWQQPLSMDEEQKUSGLPXKBYKYXOVRHPOJOADSIAHXPBZCXGDGUAWXNJAUOEWZPYPWBCMGMQRUWMTKNDSIFVMVHSPBTSKZSXPUDBZOTVLZYVNQQJTHESW");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("VRBPHQIDHQQNBPJZKXWXCFGZRDNBAIRUYOFHTNMOGIBMELETAYYNGPRIOTWCVMD");
    tmp_msg_0.links = 523821240U;
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
    msg.setTimeStamp(0.7391300735350141);
    msg.setSource(2184U);
    msg.setSourceEntity(213U);
    msg.setDestination(21796U);
    msg.setDestinationEntity(232U);
    msg.op = 77U;
    msg.snapshot.assign("ASDSUUHMBMBFRDEUVPEXRPXVBIAMRDIPRQVOTAJKSYGLQZCPMLWTTVKMTLYIHRBJPBTAOZAEKLYUWVVUPLQUHVRKBLTWOKIHMQWODORKBKNQNDJJFCVJDPGFJQBHEZCNLCKYFKAISOXXXSZGHUXGSREEQFYFQTVZOWASICMLNFWZEC");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 112U;
    tmp_msg_0.plan_id.assign("NTBKREKCSZCRMPDMVJLHXFBNVHHFPUFCZQISRSZBLMDLWIPEQXOGSICDXKXBRSOPEIQWVJTDIUXQMPWMGBINOHBXZKFEQZOUOEJAAMUJGGXTUFRAKWNZRNLOPQGVUGTVYBLZYALLMKPJMBLUSJTVHACARSNXQDIJNFNFIXUOVATJDZMVSKWOTYREPQFC");
    tmp_msg_0.comm_level = 95U;
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
    msg.setTimeStamp(0.23631702374352936);
    msg.setSource(62157U);
    msg.setSourceEntity(17U);
    msg.setDestination(38236U);
    msg.setDestinationEntity(219U);
    msg.op = 228U;
    msg.name.assign("IRATXDZYGDWETJJDNZXHZFHXNXZRVZQVUNWOQUOCLXYALLOPWBIDDHLXDHTTEGKBUMRWOKUAQPUJXDACWICMKTDBAV");

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
    msg.setTimeStamp(0.40690584887456094);
    msg.setSource(38201U);
    msg.setSourceEntity(254U);
    msg.setDestination(52857U);
    msg.setDestinationEntity(243U);
    msg.op = 12U;
    msg.name.assign("WASHFBCNXTYCZVDDHSGEBPERYXMIKBPRKWOBPYECUOSPNLKHJXTWGATDLFCFAMV");

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
    msg.setTimeStamp(0.6802052868986349);
    msg.setSource(16411U);
    msg.setSourceEntity(20U);
    msg.setDestination(3559U);
    msg.setDestinationEntity(140U);
    msg.op = 145U;
    msg.name.assign("YODOPTYPDFITCAJEXYIBMDTEMSWUPICTHQHBJIHRGFYTEAPJKKAXEJIVVSWZQDNYR");

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
    msg.setTimeStamp(0.3117941394140571);
    msg.setSource(60099U);
    msg.setSourceEntity(118U);
    msg.setDestination(30706U);
    msg.setDestinationEntity(159U);
    msg.type = 65U;
    msg.htime = 0.6822537134797918;
    msg.context.assign("GKCQYHTRQUCEKOKRLOOCJPJETXUAGCBROQCNBEYTTPUSYKOFAZJSMZIYZKQWTTXIYLSXAFPDQSGUVXMJRPXFVVHXPMHZWNDIFIOZFCFNAHLMWNOMLMAEUFDZLTBAXJHITEVHRYLUFRXNQQVCPSHKBFDNASBGEJLZKEUJGYWLOVSELUJW");
    msg.text.assign("OUDMQOJGYCYHEEKXBHFJMJOWTUHVWRDQKLZADKUCRZPQWVEMSFHTPDCRHCJNBDMQNLQLSCZXCPDIAARGMNQIBLYFIEFUYQEUUISJTGMIHZNKYEGKMBKWTKIBPPVRTYHSVGWADZHNRVMETXXHRULDNJOZUWOFDZWNGXVVGRPEEE");

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
    msg.setTimeStamp(0.5928750143043034);
    msg.setSource(63983U);
    msg.setSourceEntity(93U);
    msg.setDestination(14927U);
    msg.setDestinationEntity(133U);
    msg.type = 208U;
    msg.htime = 0.03373399631835172;
    msg.context.assign("FOTRTRMDWGW");
    msg.text.assign("ACJRERIUJEPSTFDFZAWVLRSQFDDGGQOMYASXPWMEKCZKOBFFLNPOSYOMNYMBZSUDCHC");

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
    msg.setTimeStamp(0.7951011426248892);
    msg.setSource(61347U);
    msg.setSourceEntity(217U);
    msg.setDestination(49642U);
    msg.setDestinationEntity(52U);
    msg.type = 163U;
    msg.htime = 0.053378608534316974;
    msg.context.assign("ECIEAJERZXBTPFQZWPHCAUUYPQXSSGZVDCEGNIFORVFVRFCNNAOAYMKXSCOUIDRBLEOOZTTMXZBSVDOHAPIAVXDRFYQVVEEQWSKAUWWDLBFNNLEPQWWBAPNCWIUPRUHQTLOQHMTNZWLYDGMJMWUBSTJZLKFCYDXMVJCHPUUIKGTSBJKTVRDHRRNVOINFFKECMQHEJHGTYHYLGKYGQGTIJZLOKIYMXUB");
    msg.text.assign("XRZKNSSPADIOUSCVAWTDUQFITKOBFLJOJTAXXEFYDDXSFWJJQSCQFFWIVHSLHJRXCVEYIXYOMRKMAFWOVNHRVU");

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
    msg.setTimeStamp(0.371258000718791);
    msg.setSource(27326U);
    msg.setSourceEntity(101U);
    msg.setDestination(25026U);
    msg.setDestinationEntity(203U);
    msg.command = 84U;
    msg.htime = 0.6913791836750067;

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
    msg.setTimeStamp(0.7876543393710728);
    msg.setSource(24308U);
    msg.setSourceEntity(191U);
    msg.setDestination(55224U);
    msg.setDestinationEntity(44U);
    msg.command = 59U;
    msg.htime = 0.48812836458934283;

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
    msg.setTimeStamp(0.8398838969266502);
    msg.setSource(7402U);
    msg.setSourceEntity(11U);
    msg.setDestination(25830U);
    msg.setDestinationEntity(41U);
    msg.command = 163U;
    msg.htime = 0.9242370352220612;

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
    msg.setTimeStamp(0.43481163901854514);
    msg.setSource(39022U);
    msg.setSourceEntity(224U);
    msg.setDestination(21938U);
    msg.setDestinationEntity(141U);
    msg.op = 1U;
    msg.file.assign("BGOXIMWQRWEWQJWILSJBTWPLYTPBSZFHFBUISKEYZMOLSGZQCBEAPIJOUZNZSIJKZXGBSXCXMCLRHXEVKCTTERGCRBQPYNNXWDFPBDVPHFKKMNNNWESGETDICGGZLOENDVQMKMPNGWETIDYAFXCAQRAPHLLVUQHDQWAJVADHTOTLLVRHDQHAMSYURGUCMJRKSXHFINKXOJTDLJZIVSOXAJPAYWOO");

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
    msg.setTimeStamp(0.857006275835947);
    msg.setSource(6178U);
    msg.setSourceEntity(179U);
    msg.setDestination(12287U);
    msg.setDestinationEntity(156U);
    msg.op = 84U;
    msg.file.assign("YIHZXTTPUYBRJVHPAHTOCYAUCRQLFBOXSFWSTBPQMQPLNKQXMNIXFVAXEUSAWQWRSNMYYLJXSVHIHDIYALIVNJGIQFDPIAOPHJYNKSZVHGHDUQBKORPM");

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
    msg.setTimeStamp(0.7229114784449447);
    msg.setSource(43835U);
    msg.setSourceEntity(198U);
    msg.setDestination(46783U);
    msg.setDestinationEntity(174U);
    msg.op = 224U;
    msg.file.assign("GXDSAIFTNZMQVRLWFLNLJITMFAKASIIQBIXWOXYOBSULWDMNRMEFFPKNWJEUGVTBIVLNUVWJZFYQHFSTVDTBGMSACGJNWUVXLHGMTQKCZBRSPYXYXHHYQQAZJKRIPLUROCFJXJHZYBSBDVPDXAGHHTRCVONCLWTYICTZGMGREDCBUCARMDGYDSAYSFEPZWEBORJLNXEPEGJODUZEBHU");

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
    msg.setTimeStamp(0.7185853839419654);
    msg.setSource(61162U);
    msg.setSourceEntity(238U);
    msg.setDestination(10306U);
    msg.setDestinationEntity(158U);
    msg.op = 8U;
    msg.clock = 0.0703108295934648;
    msg.tz = -92;

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
    msg.setTimeStamp(0.3538764098964089);
    msg.setSource(36183U);
    msg.setSourceEntity(12U);
    msg.setDestination(52260U);
    msg.setDestinationEntity(242U);
    msg.op = 27U;
    msg.clock = 0.8881442209266752;
    msg.tz = 26;

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
    msg.setTimeStamp(0.894875322129668);
    msg.setSource(17264U);
    msg.setSourceEntity(88U);
    msg.setDestination(6380U);
    msg.setDestinationEntity(93U);
    msg.op = 118U;
    msg.clock = 0.5754107511123304;
    msg.tz = 74;

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
    msg.setTimeStamp(0.44305522081925586);
    msg.setSource(28336U);
    msg.setSourceEntity(26U);
    msg.setDestination(54521U);
    msg.setDestinationEntity(113U);
    msg.conductivity = 0.26937413563096024;
    msg.temperature = 0.19146155724314284;
    msg.depth = 0.32769808668844447;

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
    msg.setTimeStamp(0.2151757678693873);
    msg.setSource(49476U);
    msg.setSourceEntity(98U);
    msg.setDestination(50168U);
    msg.setDestinationEntity(88U);
    msg.conductivity = 0.9785821404041256;
    msg.temperature = 0.616152098245082;
    msg.depth = 0.5519579091018204;

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
    msg.setTimeStamp(0.9718348532734468);
    msg.setSource(10537U);
    msg.setSourceEntity(132U);
    msg.setDestination(48026U);
    msg.setDestinationEntity(177U);
    msg.conductivity = 0.8771917102638572;
    msg.temperature = 0.2854119193909255;
    msg.depth = 0.16808456707082187;

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
    msg.setTimeStamp(0.5350493666190727);
    msg.setSource(25992U);
    msg.setSourceEntity(29U);
    msg.setDestination(38626U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.4143097723576795;
    msg.roll = 25162U;
    msg.pitch = 698U;
    msg.yaw = 41058U;
    msg.speed = 26117;

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
    msg.setTimeStamp(0.04387827890488716);
    msg.setSource(63070U);
    msg.setSourceEntity(138U);
    msg.setDestination(30476U);
    msg.setDestinationEntity(142U);
    msg.altitude = 0.17078083230610652;
    msg.roll = 42680U;
    msg.pitch = 8766U;
    msg.yaw = 25118U;
    msg.speed = 31537;

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
    msg.setTimeStamp(0.2816502460303223);
    msg.setSource(35484U);
    msg.setSourceEntity(228U);
    msg.setDestination(41177U);
    msg.setDestinationEntity(67U);
    msg.altitude = 0.8049595101534394;
    msg.roll = 19446U;
    msg.pitch = 43156U;
    msg.yaw = 11970U;
    msg.speed = -19771;

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
    msg.setTimeStamp(0.603381042638111);
    msg.setSource(41353U);
    msg.setSourceEntity(201U);
    msg.setDestination(37484U);
    msg.setDestinationEntity(197U);
    msg.altitude = 0.49245265932239746;
    msg.width = 0.3269618150852467;
    msg.length = 0.7763493780323573;
    msg.bearing = 0.8672930132506781;
    msg.pxl = -18014;
    msg.encoding = 59U;
    const signed char tmp_msg_0[] = {-12, 62, 67, 78, -2, 92, 84, -49, -106, -120, -84, -102, -125, 34, -41, -125, 73, -28, 36, 29, -73, -11, 108, -122, 8, -37, -106, 16, -29, -10, -94, 68, -37, -60, 36, 65, -62, -84, 31, 81, 124, -53, -5, 17, -38, 112, -20, -77, 45, 82, -48, -127};
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
    msg.setTimeStamp(0.7703162418502922);
    msg.setSource(15867U);
    msg.setSourceEntity(242U);
    msg.setDestination(581U);
    msg.setDestinationEntity(99U);
    msg.altitude = 0.7169182574344545;
    msg.width = 0.32831575453983486;
    msg.length = 0.46589342946781287;
    msg.bearing = 0.04806740573424151;
    msg.pxl = -12174;
    msg.encoding = 233U;
    const signed char tmp_msg_0[] = {-56, 38, -116, -33, -7, 6, 71, 0, -79, 2, 110, 114, 59, 3, -122, -26, 108, 98, 100, 38, 15, -89, 43, -10, -108, -7, -20, -49, -10, -10, -43, -64, -120, 92, -121, 49, 103, -96, 98, 96, 111, 59, -7, 52, 78, -66, 88, 7, -120, -82, 31, -63, -104, -87, 82, -111, -12, -88, -62, -58, 115, -33, -39, -128, -76, 27, -12, 31, 14, -77, 108, -25, -79, -55, 74, 7, 32, 44, -90, 57, 36, 70, -60, 39, 29, 38, -18, 112, -38, -93, 110, 125, 62, 93, -90};
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
    msg.setTimeStamp(0.046095946266586196);
    msg.setSource(60866U);
    msg.setSourceEntity(122U);
    msg.setDestination(41551U);
    msg.setDestinationEntity(165U);
    msg.altitude = 0.6043413179292283;
    msg.width = 0.5207725581286932;
    msg.length = 0.32988662258247137;
    msg.bearing = 0.3912919779277353;
    msg.pxl = -9838;
    msg.encoding = 107U;
    const signed char tmp_msg_0[] = {73, -17, 22, -93, -61, 105, -39, -85, 109, -108, 46, -44, 123, -63, -4, -128, 41, 8, -60, 78, -13, 40, 6, -57, -91, 12, -59, 64, 36, 8, -34, -16, -117, -37, 88, 4, -57, 53, -8, -46, 67, 111, -58, -56, -112, 1, 10, 33, 54, -118, 36, 35, 85, 64, -50, -34, 86, 89, 74, -22, -85, 46, 25, 118, -73, -103, 19, 54, -36, -69, 115, 36, -98, 104, -126, 110, 89, -81, 117, -64, 53, 97, -95, 106, 89, -25, -68, 99, -86, 50, -2, -62, 83, -48, -115, -95, 102, 42, -12, 68, -25, 105, 112, -11, -108, 2, 126, 2, -86, -80, 9, 82, -100, -57, -49, -56, 28, -71, -126, -13, -70, 0, -66, -53, -81, 80, 85, 116, -18, 69, -8, 27, -18, -51, 23, 25, -40, -96, -89, 100, -50, -97, -69, -64, 88, -80, 98, 39, -41, -51, -90, 5, -38, 118, -85, 108, -79, 110, -43, -45, 32, 95, 15, -53, -23, 71, -69, 20, -89, 34, 122, 67};
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
    msg.setTimeStamp(0.37658576395519494);
    msg.setSource(32936U);
    msg.setSourceEntity(134U);
    msg.setDestination(50827U);
    msg.setDestinationEntity(215U);
    msg.text.assign("XFBGYRNDVBLDPQKUZWHLTBWKPGKTCOQXLVFZCMHVQHMFIMLJRNTFTSNSGEZCHAMOSPKFJDWANSTLFTVBRMVOABLDAGSJUOAQVUVUZNMKWOXYYJNSPLQKIXSAPGMECBAVAEWQXZEHGNUFFEKISRPJDGJVINZORRXHMZMTHIBVCUWJTLRTUDKQSYGGRPKWJIEDFCRBJIYYOADQKPWSRXCIOOBNYLQXUCEGEIZWTXEMXNUDZPEODCH");
    msg.type = 168U;

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
    msg.setTimeStamp(0.24230787044024638);
    msg.setSource(55136U);
    msg.setSourceEntity(209U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(46U);
    msg.text.assign("ENGXTFWVNDQZXSTYIHCWGSBXOXMMUMAPFPVAYXRQTRYLJRDAHLOEXBCBSYMLUPBLONYMITLWYPNSBTDNXFAHYQDDBLSLPGFREKSHDFECGXURMITERDFFURKGIMB");
    msg.type = 48U;

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
    msg.setTimeStamp(0.16233018915374298);
    msg.setSource(21522U);
    msg.setSourceEntity(100U);
    msg.setDestination(55420U);
    msg.setDestinationEntity(18U);
    msg.text.assign("QFPBMNXZEHACBUNKDLUGETSRJWOZDKBOBRZOYXUOLXBAJEPSUWCWTIZNGQKMAKWLVWPXZJFMOYPNYCSSIQAHMRJQYZOEVNNQVIJWYJSXUMWLZISIDRFBXPYVXTCJEJTHGESVSOJOFOCUQL");
    msg.type = 156U;

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
    msg.setTimeStamp(0.8969557383763793);
    msg.setSource(55011U);
    msg.setSourceEntity(48U);
    msg.setDestination(42909U);
    msg.setDestinationEntity(185U);
    msg.parameter = 214U;
    msg.numsamples = 188U;
    msg.lat = 0.21559942027326684;
    msg.lon = 0.5932843694360275;

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
    msg.setTimeStamp(0.9413820977193339);
    msg.setSource(1752U);
    msg.setSourceEntity(238U);
    msg.setDestination(31981U);
    msg.setDestinationEntity(76U);
    msg.parameter = 67U;
    msg.numsamples = 10U;
    msg.lat = 0.9424450273575697;
    msg.lon = 0.5914918164306678;

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
    msg.setTimeStamp(0.6465658712570427);
    msg.setSource(61115U);
    msg.setSourceEntity(3U);
    msg.setDestination(23550U);
    msg.setDestinationEntity(241U);
    msg.parameter = 233U;
    msg.numsamples = 56U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 64788U;
    tmp_msg_0.avg = 0.9999141152591356;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6625685599890428;
    msg.lon = 0.8212187405685459;

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
    msg.setTimeStamp(0.8083493021932298);
    msg.setSource(60602U);
    msg.setSourceEntity(69U);
    msg.setDestination(15524U);
    msg.setDestinationEntity(144U);
    msg.depth = 12U;
    msg.avg = 0.3225868405837441;

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
    msg.setTimeStamp(0.5865426182116839);
    msg.setSource(38833U);
    msg.setSourceEntity(114U);
    msg.setDestination(44534U);
    msg.setDestinationEntity(98U);
    msg.depth = 11317U;
    msg.avg = 0.7402906761941982;

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
    msg.setTimeStamp(0.6799840479427608);
    msg.setSource(45551U);
    msg.setSourceEntity(14U);
    msg.setDestination(18626U);
    msg.setDestinationEntity(214U);
    msg.depth = 24851U;
    msg.avg = 0.7902634793212597;

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
    msg.setTimeStamp(0.5954735395795104);
    msg.setSource(48548U);
    msg.setSourceEntity(223U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.3448432758944675);
    msg.setSource(12527U);
    msg.setSourceEntity(157U);
    msg.setDestination(36858U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.3587122118092507);
    msg.setSource(3130U);
    msg.setSourceEntity(46U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.6485233043020348);
    msg.setSource(23184U);
    msg.setSourceEntity(98U);
    msg.setDestination(42466U);
    msg.setDestinationEntity(72U);
    msg.sys_name.assign("IQCKCAGPVLYBYMHVQEDLGIBVKXENTZBIMYKDOFVRLGSRPZGZUNEWOWCPAYSQENFRWBVRPVSFUNKXPYYKIGEDJJNPQHDVOUWEDFGACKJDLNKJUZYNZXNPOSDXJTEAHRPGGZNOIURSXWLBBRFHWRSFDLIXALLSHKNRAPXTGOOVBBHEUYMEOFSCIMOMVUSDTAGWQJZWTHQRHJDAEZHJFMTUMCFTAPQIWIMUCABXMWLTCXKBCYYZUZFQXJ");
    msg.sys_type = 38U;
    msg.owner = 47902U;
    msg.lat = 0.6136931184682103;
    msg.lon = 0.5382909565044447;
    msg.height = 0.4040420910079945;
    msg.services.assign("SGPQETXIXOYZYZRWQMDGPCHUVENF");

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
    msg.setTimeStamp(0.4603096072254371);
    msg.setSource(53873U);
    msg.setSourceEntity(151U);
    msg.setDestination(33926U);
    msg.setDestinationEntity(132U);
    msg.sys_name.assign("JLAAFHYGKEDKYFRIGLHTIQLUMQSLBBPFP");
    msg.sys_type = 9U;
    msg.owner = 52081U;
    msg.lat = 0.5800623295908774;
    msg.lon = 0.2672610238021481;
    msg.height = 0.14531290586464618;
    msg.services.assign("RHHKMJUSUAPDATPYNDQCXWSHJZIKBYAKCOHRMYAVQGIZRUBPXWLDSMXRLNJKBOJRPVUIVRTUEZONRIJGTNLIJOUAEVMIGN");

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
    msg.setTimeStamp(0.8377358201815883);
    msg.setSource(2025U);
    msg.setSourceEntity(160U);
    msg.setDestination(21363U);
    msg.setDestinationEntity(149U);
    msg.sys_name.assign("ZUCAFMYTWGZXAAGQIRSDPMHTSNEXUDWIUEWCJHBVJPMQFLSRBFGVUGHIFCLHUCQNCFWEYWRMMPQEDZODRHBKQXVTJZBOUAKVLZLKJLYQIYSJYIVVBLSKADLNNEXSOFDUXSXEDAOMKIHHDXORMPQKJNIXMHGENDKVNRHFAYOZCYUPGCPLUWCBBCFZZKGQOMWAIFBXDTTVA");
    msg.sys_type = 249U;
    msg.owner = 7659U;
    msg.lat = 0.08544869699647384;
    msg.lon = 0.389614178244963;
    msg.height = 0.5037674586790925;
    msg.services.assign("VBBPCVJRZTCNWWLNFWHGYCUJLAAZAEVOAGIJZHBZSNMEWQDDFCBHTPTJXXOUQNVKLEHNMLYPOXSZDLZIJKBSDFVURPKFMFHUWZUYFSZEZPABUB");

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
    msg.setTimeStamp(0.8927613681072376);
    msg.setSource(48599U);
    msg.setSourceEntity(238U);
    msg.setDestination(3323U);
    msg.setDestinationEntity(184U);
    msg.service.assign("NGTJVFKLCXCQXNXIQZSHFNXGRMVCPTUVGOMDZFVBUTLUZMDYMERIBVPGJJEYLJWHJCLPYILG");
    msg.service_type = 249U;

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
    msg.setTimeStamp(0.8591782265082927);
    msg.setSource(40643U);
    msg.setSourceEntity(40U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(158U);
    msg.service.assign("AQNHNWLVTGVTMIPPEYFWCVARCHUIMHZEUJWQDAYLXTTIJVGDOZNVRFZBBOPDZOGDBFSVJSIWLTYEQPZPSQPWFHUAILCFXEDOBR");
    msg.service_type = 35U;

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
    msg.setTimeStamp(0.3407403472201824);
    msg.setSource(62403U);
    msg.setSourceEntity(69U);
    msg.setDestination(13818U);
    msg.setDestinationEntity(35U);
    msg.service.assign("GUKBQPHUZAKFLEEQVUGBXURNPUNJZNRWKIXLAYFMMOPAWBXOSXRCOXWQFDAAFHJVOGGHEJYHGOHDGPSSDICMRPBCLSDNISVINTTHRBZSYZD");
    msg.service_type = 142U;

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
    msg.setTimeStamp(0.8041484840808086);
    msg.setSource(49844U);
    msg.setSourceEntity(64U);
    msg.setDestination(27233U);
    msg.setDestinationEntity(75U);
    msg.value = 0.43669430996991065;

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
    msg.setTimeStamp(0.3950891673977104);
    msg.setSource(64832U);
    msg.setSourceEntity(203U);
    msg.setDestination(53120U);
    msg.setDestinationEntity(91U);
    msg.value = 0.4963232867827009;

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
    msg.setTimeStamp(0.5789619313711769);
    msg.setSource(61180U);
    msg.setSourceEntity(213U);
    msg.setDestination(13169U);
    msg.setDestinationEntity(105U);
    msg.value = 0.38234609788517804;

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
    msg.setTimeStamp(0.7496226417604565);
    msg.setSource(48379U);
    msg.setSourceEntity(187U);
    msg.setDestination(26691U);
    msg.setDestinationEntity(249U);
    msg.value = 0.3644822386138937;

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
    msg.setTimeStamp(0.30022867013282706);
    msg.setSource(1093U);
    msg.setSourceEntity(188U);
    msg.setDestination(53345U);
    msg.setDestinationEntity(251U);
    msg.value = 0.7188162616044232;

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
    msg.setTimeStamp(0.2780442980128581);
    msg.setSource(17312U);
    msg.setSourceEntity(21U);
    msg.setDestination(38172U);
    msg.setDestinationEntity(246U);
    msg.value = 0.30331388017851;

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
    msg.setTimeStamp(0.7309910104463122);
    msg.setSource(31632U);
    msg.setSourceEntity(67U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5742873286518949;

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
    msg.setTimeStamp(0.8123274422828376);
    msg.setSource(8653U);
    msg.setSourceEntity(178U);
    msg.setDestination(25131U);
    msg.setDestinationEntity(150U);
    msg.value = 0.12457288381369747;

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
    msg.setTimeStamp(0.36941220503827876);
    msg.setSource(14136U);
    msg.setSourceEntity(74U);
    msg.setDestination(52451U);
    msg.setDestinationEntity(57U);
    msg.value = 0.07934339705595839;

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
    msg.setTimeStamp(0.9259305580555173);
    msg.setSource(32769U);
    msg.setSourceEntity(230U);
    msg.setDestination(63397U);
    msg.setDestinationEntity(151U);
    msg.number.assign("UZCDIDARYWDZWNMPHPEGGUYOTJONPJIQZFJIYHEXVPKESSGJJNXXOSFCMLBCQLWGOEKXFDTBHFTHWMRZUYPCBXALNOLTHRVYWXJRMEWAHWHOXRWVTBORMFKALMKYXNUQQQVEVFPLANKN");
    msg.timeout = 3712U;
    msg.contents.assign("AOMIFXJQEMWHHDTBDXYWVPKJCNHFWPWPKSWGKWAZCZDCRGRUTUGUKVZDEEMBQYSTDHCRCQIELLAGXOOZDSBYPDIOAHJDPCTKJMNRXCYUVLGAQQLMPUBXATKKIVZISNZFMXSJYQ");

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
    msg.setTimeStamp(0.4298094966216429);
    msg.setSource(14769U);
    msg.setSourceEntity(81U);
    msg.setDestination(28906U);
    msg.setDestinationEntity(25U);
    msg.number.assign("VFLCWDOVYJTSBYLONBJXTFFOJN");
    msg.timeout = 58107U;
    msg.contents.assign("RQPIHALHINZQYVDZPIWJBBQWY");

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
    msg.setTimeStamp(0.6774028047369761);
    msg.setSource(17177U);
    msg.setSourceEntity(76U);
    msg.setDestination(60951U);
    msg.setDestinationEntity(15U);
    msg.number.assign("QZPQNTHTDTFWIYKXZQSEGSEGFBPYTZTAOIYYMKKKLIHBBPJEYOIBWHEWCVUAMFFUVCLUBJNSJFXNJQRZYHIRMAARDDAFZFDXZQPQOQONBJNUFDALMFYCHVCSPLABWIWKLUPZEXEDLLACWOFDMPQZGGRWUNJLUBGEKYWHYHORCKHRRTOOXKUPOXEWCRCRAJRSGGVTHIQMJHZTBVMGSCUNVQDVZMIALPNIXNGSLKXDXBDSJETVNVSJTVWC");
    msg.timeout = 3572U;
    msg.contents.assign("MLJQKKGQIHGTDSEKTNBZZXCMREHMJORCFEBIGBMNSVMGVCRYEQVJEZBIMEGLXJNZDBAKWVECIJYWX");

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
    msg.setTimeStamp(0.8452103991876594);
    msg.setSource(55509U);
    msg.setSourceEntity(6U);
    msg.setDestination(56895U);
    msg.setDestinationEntity(12U);
    msg.seq = 1911036785U;
    msg.destination.assign("YMGFDXYLXWRVETQQEAHQASRWZXZDMRMEVFZAWXXHZTKWHDTFHVPUVARNDMLTIMIPWGECXKCYJEJBLUBHDNKXUAOECNHOKQLEQJTBMIBYFQUDTEKNJZCOVLSPSAGAGDNUUSBQFGCGUXOYYWMYHOSIQLWAJCLXRRPSFIVNFPTQFYKJZSCWMGNWIUOJBEZCVQCOVHSORTJVGAMKGGNBENPCLPIMYZUXLVRPDB");
    msg.timeout = 11122U;
    const signed char tmp_msg_0[] = {-97, -29, -117, -16, 19, -65, -97, -117, -72, 22, 39, 91, -88, 125, -43, -84, 27, -84, -103, 25, -37, -97, 58, 112, 40, 21, -19, 26, -13, -85, -107, -8, 111, 116, 60, 56, 21, 59, -93, -38, 53, 75, -114, -122, 68, -53, 48, 79, -102, -26, 72, -88, -27, 96, -60, 1, -45, -92, 116, 26, -108, -90, -43, 43, 104, -13, -74, -55, 7, 67, -72, 121, 94, 87, -94, 124, 95, -126, -78, 86, 16, 83, 108, -85, -113, -4, -52, 21, 14, -43, 113, -63, 31, -105, -32, -52, -94, 33, 33, -40, 25, -74, -113, -74, 17, 112, -33, -65, -100, -88, -58, 28, -33, 99, -114, 99, 64, -90, -26, 90, 86, -27, 60, 112, 34, -108, 1, 90, 104, -128, -99, -123, 74, -120, -79, 19, -121, -17, 108, 6, -34, -22, 108, -48, 121, 8, -118, 111, 71, 25, -37, -2, -111, 57, -5, -5, 92, -31, 91, 67, -4, 97, -113, 30, 80, -47, -74, 34, -7, 37, 52, -53, 30, 91, 52, 91, 73, 3, -10, -9, -52, -97, 2, 112, 6, -39, 12, 51, 113, 35, -70, -99, 107, 11, 124, -58, -69, 43, 115, 21, 18, -60, 70};
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
    msg.setTimeStamp(0.9437561910464584);
    msg.setSource(2205U);
    msg.setSourceEntity(200U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(51U);
    msg.seq = 2499283694U;
    msg.destination.assign("WRNDLWIRCVZOPIZYAYYQTOVSJHZMKBCFZRHTMKFGLAEWQWXNVEPWPFZAKLZMQCMGSNOYUXPNEJSUWXUOQVWIXENOGDYNYPHMVTFTEPOGRNYCRXTJZDLBSZPOBHMBELYSXKACLXLAIHXNWIQFLIQAGXG");
    msg.timeout = 37096U;
    const signed char tmp_msg_0[] = {-71, -91, -78, -48, -63, 83, -91, -56, -98, 68, 45, -84, -80, -96, -35, -123, 45, 0, -21, 120, -84, -24, -111, -69, 68, 13, 39, -62, 44, -53, -30, 118, -72, 113, 42, 97, -67, 64, 36, -91, 5, 19, 6, 120, -104, 96, -3, 13, -5, -123, 126, 79, 101, -37, 18, -41, 118, -75, 50, -5, 26, -125, -88, -13, 111, -126, 41, -128, 82, 111, -100, -37, 72, -58, -103, 126, -10, -102, -124, 22, -87, -27, 98, -113, 26, -96, -95, -36, 35, -59, -89, 49, 43, -109, -96, 113, -70, -80, 37, -72, -52, -28, 81, 109, 104, 99, -96, -108, 5, -77, 30, -71, -128, -40, 109, 66, 119, 116, 27, 100};
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
    msg.setTimeStamp(0.5918969025536026);
    msg.setSource(24369U);
    msg.setSourceEntity(237U);
    msg.setDestination(4831U);
    msg.setDestinationEntity(7U);
    msg.seq = 1455542612U;
    msg.destination.assign("LIQKZJJZTHDCXGUKERRQAARPVOMDPSEZKXGYGSVCJNQVCBNIBDXMYXBYSKTMGNPOYZTCPCRVUU");
    msg.timeout = 38840U;
    const signed char tmp_msg_0[] = {14, 51, 69, -27, 116, -24, -93, 6, 10, 93, 113, 120, -58, 110, -9, -102, -33, 111, -102, -53};
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
    msg.setTimeStamp(0.2079677549687987);
    msg.setSource(40185U);
    msg.setSourceEntity(79U);
    msg.setDestination(28791U);
    msg.setDestinationEntity(50U);
    msg.source.assign("NUGIRPLLNAUPWSKTKORGRSTFTXMRRBEENFBXIEXCFLIOYVNRIKIYYWEPEMOPYABFHGVZBIZMCDQUDGMDCLHNWSKEPVAUQTNJVKGFQJQOEFWPCYPYAUKJCXJBITCHOLJNRLKUAJCVZUBFMHJIXLHZBGATSSRQQVWKUHFCVFEDDEYMDWNJSXYPQDSTAZRFAVHMXUHMWANWOQBPWWYLSECNQCGGAJHSILIKBUODGXD");
    const signed char tmp_msg_0[] = {25, -55, 75, 96, -111, 7, 88, 55, -112, -62, 101, 85, 85, -45, -26, -57, -48, -33, -2, -114, -10, -8, -62, -20, 89, -20, -7, 63, -29, -21, -42, -126, -58, 63, -128, -97, 5, 120, -90, 105, -74, 32, 78, 13, -46, 30, 46, -19, -11, 78, 18, 125, -26, 112, 49, 13, -55, -88, -25, -49, -6, 114, -9, -48, 45, 10, -28, -85, -25, 69, -77, -67, 47, -85, 84, 49, -3, 75, 71, -71, 104, 37, -111, 7, -78, 10, -76, 82, -52, 115, 10, 84, -48, -77, -98, 23, 99, 126, -111, -113, 69, -18, 81, 125, -62, 95, 5, 39, -80, 18, -16, 44, -101, -24, -54, 15, 12, 23, -75, -17, 68, 111, 83, 53, 74, 122, 6, -27, 126, 115, -92, 76, -11, 17, -9, -49, -125, 110, 86, -107, 15, -34, -94, -50, -93, -64, 42, -96, 28, -10, 22, 17, 119, -49, 85, 89, 28, 29, 106, -93, 57, -64, -87, -127, 103, -117, -119, -71, 0, -73, -108, 42, -102, 115, 118, -12, 33, 18, 76, 34, -120, -78, -8, 67, 49, 31, 63, 16, -112, 36, 86};
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
    msg.setTimeStamp(0.9955677472606641);
    msg.setSource(26150U);
    msg.setSourceEntity(72U);
    msg.setDestination(51362U);
    msg.setDestinationEntity(20U);
    msg.source.assign("IIQDEJYPAUVBMTYSDFWMMLGLLWEJZNFLGDPJGVRMFWFDPZJF");
    const signed char tmp_msg_0[] = {62, -81, -23, 43, 57, -9, 61, -121, 4, -105, 6, -119, -88, -21, 45, -121, -106, 65, 88, -75, -86, -26, -101, 2, 76, 64, 44, 26, -89, -75, -37, -14, 123, -33, -76, -60, 6, -33, -5, -73, 51, 33, -36, 23, -56, 94, 41, -36, 88, 77, -105, 6, -107, -29, 111, 72, 44, 81, -111, -43, 124, 44, 124, -85, -85, -3, 87, 13, 7, 65, -128, -7, -97, 2, -56, 87, -33, -91, 71, 120, -21, 59, -24, 123, 84, -67, -69, -85, -59, 36, 36, 126, 53, -109, -56, 0, -30, 33, 103, 48, -127, 81, 47, 37, -110, 120, 17, -65, 95, 55, -91, -88, 47, 65, 33, -16, 5, -44, 7, -78, -73, 85, -76, -114, -69, -66, 20, -85, 111, -122, -1, 115, -124, -30, -126, -105, -81, 92, 67, 52, 32, 47, -13, 41, 72, -118, 105, 17, 81, 13, -72, -36, -73, 113, 60, -32, 123, 6, 71, 68, 89, -45, 77};
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
    msg.setTimeStamp(0.7703920986606195);
    msg.setSource(44078U);
    msg.setSourceEntity(164U);
    msg.setDestination(2082U);
    msg.setDestinationEntity(167U);
    msg.source.assign("KPTGWUTDNBBIDSJKLTYSLDSALYGUTB");
    const signed char tmp_msg_0[] = {-101, -105, -116, 99, 94, 11, -128, 38, 80, -47, 39, -37, 51, -125, -123};
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
    msg.setTimeStamp(0.6588472397039808);
    msg.setSource(29923U);
    msg.setSourceEntity(218U);
    msg.setDestination(31764U);
    msg.setDestinationEntity(3U);
    msg.seq = 984112132U;
    msg.state = 206U;
    msg.error.assign("QLPZKXWSLADSMYCDVRNUWYBVUJHIEBNDAPZOOCECKHVIFSQEIABKZXHUZMOVEOFRENXNMPISVOVSYNRULUXJJWXS");

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
    msg.setTimeStamp(0.1391017723874859);
    msg.setSource(52977U);
    msg.setSourceEntity(112U);
    msg.setDestination(47755U);
    msg.setDestinationEntity(33U);
    msg.seq = 3989815895U;
    msg.state = 25U;
    msg.error.assign("GXIELMPCOQXNPMXZUIWPNZDFNWYGTOLRPVYDKJKKYVXMYWVDJBWCXOYGDBHHOVQGFRDMTSIGFSHIBTJZEFDBDAVAXMKJUWRUTSUKJH");

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
    msg.setTimeStamp(0.9233510409907754);
    msg.setSource(41173U);
    msg.setSourceEntity(244U);
    msg.setDestination(46421U);
    msg.setDestinationEntity(127U);
    msg.seq = 3994378588U;
    msg.state = 35U;
    msg.error.assign("XIBXMPHOGUJCGVBCHXVXCMQWANIPANJEUWJCPLBOWEZCYLTKZXYYIIFMHMSQSCGRDMZHLTRITHNQTTAJZLGWFUHWKOZRLAMRYAOHNZQO");

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
    msg.setTimeStamp(0.46545609499267804);
    msg.setSource(19146U);
    msg.setSourceEntity(253U);
    msg.setDestination(3008U);
    msg.setDestinationEntity(236U);
    msg.origin.assign("RJSZWFCBUYWMYYLJNGEHSHPPQVMQIKSKBTKQMGKZOXOVOPEWTNSBLFUMGTKETRZCWNRAXFFYXHSDBUBGWXTKPLHJLDVYVRGCMNVQJFRVZDZXUODETAAZPCEMBMEFXHEWWBMYII");
    msg.text.assign("GSBTLLTNQHQESURTIDKZAARQMLIPDIEONKLJWMUWHINDLPFECLZATIYUHCOJLRXHOCZPKQONWGVCTDAKIWMXQEQWWRFGBGKKHTXAEWOGDZKUZESSUOSAYXTUVVJIVVYXBCDVGFPCOZHYXIBVNRKQEJXWZBMGASKONRLUFEXUTMMMOPFSHUFBBXYJQQSNCEKHDAEVBYFHYNRFABZGPMMTJYLCYVFPSO");

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
    msg.setTimeStamp(0.249407707730272);
    msg.setSource(6698U);
    msg.setSourceEntity(202U);
    msg.setDestination(47670U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("SGTWXDRSRPENEHTQAQSSMYHKSVIRSO");
    msg.text.assign("EWLYUWHNSZSMRSSNIRMCLJXHUXPJPORJHZXRSSCSVMPRNAIBQDFBVLBGLDOCQJZCXXPVATIDEBAUCIYACUQEPXAGVHKUWEDLJHMENFPOYLKTJOYFNYNBDTRIRIVUWQNTXIRFFKGMAMXBUVCEQLVLCMTKUDB");

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
    msg.setTimeStamp(0.1617576877333552);
    msg.setSource(35653U);
    msg.setSourceEntity(209U);
    msg.setDestination(10572U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("FWDZUIVTZTGYWQSJTABXAYVGLOYJHXEOSWQGPJRPSIOEWIPZILISKUKFVQJZTBCNCYKSSANXBLDRNXELBLCBNRJPIMAPHSEOKGVXTDHKUQZRPYGCMSQXRSFJFIEFWMIZMMTZBBVMTYMPUYQKGCJHHAPUDIGJXMUEKRPZDLXNDBYWCWEUNCUWKNGAJHHBXNXELMZAORTLITCFOBVDUMYWJHHVRDQTZ");
    msg.text.assign("ELRJNCZSHWBQLKHUEDZFXZPJPWIYLYIYZMNXTMXYZKMCLJSYDZIWHCWPTAXKOCKMGAIVFSETPEWQDZKEZAUBPOFKHXICQL");

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
    msg.setTimeStamp(0.04813658532431697);
    msg.setSource(57297U);
    msg.setSourceEntity(146U);
    msg.setDestination(1594U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("ACMXSLCEIUSWVXQOKGPTTFDSABTOZOOQFTYJQQBLXHSKLWJVBEYOZZEVJEQYVIDPRWZJFIGMANLFGOSIKADHSHOHRVRERKNOCTUMKXVTEICV");
    msg.htime = 0.8437130817110526;
    msg.lat = 0.5915721458351162;
    msg.lon = 0.911097234055658;
    const signed char tmp_msg_0[] = {-91, 101, -61, 41, -32, 69, -20, -62, 34, -14, -32, 105, -33, 67, -21, -40, -102, 92, -67, 52, -51, 82, 75, 84, 0, 63, 109, 84, 120, 65, 112, -25, -99, -11, -117, -36, -118, 15, 66, 69, 43, 56, 26, -92, -72, 106, 102, -3, -99, -92, -25, -28, -117, 55, 61, 114, -65, -53, -95, -79, 23, 68, -32, 41, -16, 71, -127, -65, 27, -66, 72, 79, -34, -41, -75, -113, 86, -77, 69, 99, 70, 4, 29, -2, 75, 2, 5, 69, -27, -76, 86, 10, 13, -16, 12, -33, 114, 15, 73, -105, 42, 34, 89, 65, -78, 62, -122, -37, -4, -41, 43, 42, -41, -102, 116, -5, -110, 33, -6, -86, -75, -115, 43, 14, 115, -25, 28, 22, 114, -4, 31, -69, 54, -117, 110, 86, 100, -75, 31, -93, 59, 50, 23, 32, 13, 1, -83, 81, 2, -71, 103, 22, -29, -14, 89, 109, -124, 100, -1, -18, -17, -93, 3, 126, -125, 76, 118, 102, 63, -91, -99, 60, 74, -26, -100, 100, 124, 122, -42, 59, 42, -21, 84, 58, -54, -116, 51, -72, 37, 81, -77, 102, -93, 88, 0, -105, 87, -69, 98, -116, -120, 117, -94, 23, -98, -42, 37, 81, 97, -107, 14, 107, -52, 50, 51, -51, 68, 56, -74, -20, -47, 101, -36, 60, 4, 37, -60, 53, 94, 75, 51, -65, -53, 76, -120, -24};
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
    msg.setTimeStamp(0.07275433020519662);
    msg.setSource(3334U);
    msg.setSourceEntity(63U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("SKSKWQHLTTUPIJIAIFMYQCRTXPXNDODCJGRCTRKBXKXETCTVINARNFGTWSBZVLHYOYPAGGUCQIWRMJIPIMENZKZVFECVLQOEMZFTXELBYLLLSQQHJSQUNVMWEBZVYORZUDBLQNUXHHZFYZOSUHYHDRFBXZGPTJEQAIHHYWKFVPSHDAVAORE");
    msg.htime = 0.6850272030926111;
    msg.lat = 0.6561018419291653;
    msg.lon = 0.47240514200533557;
    const signed char tmp_msg_0[] = {-125, -94, -117, 24, 63, -32, -127, -28, 46, 47, -55, -59};
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
    msg.setTimeStamp(0.3980196389206543);
    msg.setSource(25032U);
    msg.setSourceEntity(233U);
    msg.setDestination(35835U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("UURIMFYEFBPGGIRFTBAXXGLJBWSZVPCXWCTVOMRDDZUOBSIXGYJCWBVDREMDNVTMAOHIWYXRGWXJADFIMXENVAUWMJTNYLNUZWSNQUQJEPZSIEKMSHMORLNKJPOJQFROQZTCHARGZHYLSKXAFFAHTLICJHWIAEOLBLDIRHGMSNEKTPQQQFGBOSNFYJKKEMLUWQTWXQNOCKBVCHFEYGULVYPBKYDRGBC");
    msg.htime = 0.99298731589496;
    msg.lat = 0.54972654846527;
    msg.lon = 0.28434079513021726;
    const signed char tmp_msg_0[] = {4, -11, 76, 29, 66, -46, 48, -65, -123, -122, -40, -77, -88, -87, 98, -2, 101, 120, -79, -22, 119, -20, 12, 14, -99, 126, 72, -59, -24, 74, 34, -24, -67, -44, -20, -125, -127, -47, -38, -44, 23, -29, -110, -54, 44, 18, -59, -6, 122, -62, 110, -28, 7, 59, -73, 100, -44, 58, -94, -32, -88, 59, -59, -22, -46, 14, 59, 116, 62, 106, 78, -5, 82, 99, 2, -53, 112, -24, 49, 34, -37, 91, -61, -105, 110, 20, 75, -35, 51, 84, -85, -72, 122, -18, 0, -78, -120, 67, -48, -4, 20, -55, -119, 18, -76, -9, 117, 27, -54, -81, 62, -66, -66, 10, 61, 102, -72, 52, 74, -35, 35, -115, -81, -64, 38, 56, -80, 33, 69, 38, 23, -106, 126, 104, -126, -38, 61, -12, -74, 31, 12, 69, 20, -85, -92, 114, 33, -39, 28, -70, 11, 62, -4, -100, -10, 84, 31, -112, -118, -74, -120, -55, 6, 41, -44, 84, -111, -120, 44, 1, -112, -101, 88, 95, -37, 24, -99, 12, -86, 114, -62, -115, -94, -59, -95, 72, -61, -87, -124, -18, -67, -124, 1, -81, 40, 69, -36, -91, 17, 79, 47, -54, -113, 97, -46, -61, -48, 3, 56, 16, 31};
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
    msg.setTimeStamp(0.37591377259212366);
    msg.setSource(47350U);
    msg.setSourceEntity(5U);
    msg.setDestination(39092U);
    msg.setDestinationEntity(220U);
    msg.req_id = 20479U;
    msg.ttl = 40057U;
    msg.destination.assign("KMEIKGQUQZPHQAYQZLNEULVELZCXFUSIHGQBCFGBGOABKTWPXKOVFZTGZYJXOLKGWBHVDQYZYEMDCDQHDYRGSNNSSNLWAITALBQUOTDGEVIYFPQNFUOPOXTACELRBFHWWTRRWYKQKBOJNJALMNRJSOYITMIDBZ");
    const signed char tmp_msg_0[] = {13, 1, 106, -117, -69, -76, -93, 15, -7, 113, -7, 76, -37, 26, -12, 49, 9, 36, 42, -61, -71, -125, -40, -60, -69, 95, -101, -53, 112, 77, 112, -43, 115, 118, -3, 75, 4, 37, -68, -68, -105, -19, -96, -70, -4, -31, 39, 63, -85, 100, -127, -35, -10, 113, 102, 60, -66, 0, -40, 72, 1, 33, -122, -102, -6, 120, -109, -33, 99, -114, 2, -13, -43, 106, 103, -51, -70, -49, 99, -117, 82, -127, -92, -1, 82, -103, -91, 64, 11, 89, -92, 57, -112, 54, 100, 39, -68, -99, 39, -97, -106, -19, -77, -104, -118, -84};
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
    msg.setTimeStamp(0.11154961777204064);
    msg.setSource(60962U);
    msg.setSourceEntity(241U);
    msg.setDestination(31772U);
    msg.setDestinationEntity(172U);
    msg.req_id = 40444U;
    msg.ttl = 61808U;
    msg.destination.assign("SNIWHMHPBDGJCRFGVKSPCWAVEESKOSBBZGJDAKBPLQSYDPEMXQIVNDTQMCMTFDLUNZOETNEZGWKITALZGXVMPUCWWXGMAFRPUIGCUXWFQVOYKHXKCCRUWFFDHPOZUMRTFMDEZAAYLGJLFROJXTHMJIIZYHORDQMJZJPLOHYBKKALTRIBSRWLVVXYUNFQVTHAWEGYOPGALQJTRVPNOBKBC");
    const signed char tmp_msg_0[] = {39, 105, -83, 47, 10, 9, -12, -44, 92, 83, 83, 53, 95, -69, 105, -93, -28, -116, 29, -20, 26, 18, -38, 64, 40, -128, 70, -78, 16, -125, 10, -27, 18, -4, 88, 40, -27, 112, 119, -73, -36, 23, 54, -103, -45, -42, 62, -118, -35, 13, -36, 100, 29, 31, -37, -43, -110, -27, 13, 44, -100, -109, 17, -54, -36, -26, -63, 29, 78, -119, 22, 30, -36, 51, -2, -94, 15, -85, 40, -37, 34, 50, -90, 123, -47, 5, -110, 95, 124, -8, -33, 19, 94, 117, -2, -76, 106, 37, 11, 33, 50, -61, -120, 50, -102, 124, 91, 3, -95, -65, -115, -47, 43, 122, 42, 18, 119, 4, 108, -86, 116, 23, 93, 5, -80, 100, 6, -52, -11, -7, 68, 107, -34, -85, -38, -7, -35, 20, -127, 32, -74, 84, 88, -91, -72, -112, -99, -17, 80, 60, 126, -121, -80, 37, 122, -37};
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
    msg.setTimeStamp(0.3687758751857496);
    msg.setSource(49917U);
    msg.setSourceEntity(96U);
    msg.setDestination(24946U);
    msg.setDestinationEntity(146U);
    msg.req_id = 61988U;
    msg.ttl = 34976U;
    msg.destination.assign("CKSPLZUXVMJQKSKOWGDSIRERAQNZASHPSLECZMMIKYBGXYGESNSIMWOLZGELBHSJRNROCUVILNDJXCYMCXDPDIOSYIBTBHZZHTWHPFCNIHFBQKRULJUOVTVXIVUGQAKYYFEHTKVLNQZNGWQACOAHCHMEGKWJZXWVYPYUUEODYHALEEPWUVTJJDJSACUVRQKFMPDIAZLQUTOZNWFJBMGFREQPLPRXXOFMTM");
    const signed char tmp_msg_0[] = {107, 122, 20, -14, 85, 95, 86, 72, -54, -18, 124, -20, 14, -120, -99, -10, -13, 50, -93, 11, -23, 114, 92, -37, -126, 113, -122, -104, -116, 85, 87, 56, -40, -4, 37, 63, 39, 51, -76, 116, 72, -71, -124, -35, 28, -118, -89, 88, -46, 39, 117, 56, 10, -80, -62, -87, 90, 112, -112, 20, -8, -55, -64, 60, 113, -103, 6, 107, 93, -118, -128, -98, 78, 76, -54, -107, -8, -120, -114, -77, -91, 30, 111, 112, -28, 12, -47, 122, -11, 27, -40, -53, -23, -17, -55, 14, 15, -85, 117, -11, -75, -23, 98, 10, -103, -86, 25, 32, 93};
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
    msg.setTimeStamp(0.4372928243509441);
    msg.setSource(51823U);
    msg.setSourceEntity(112U);
    msg.setDestination(55930U);
    msg.setDestinationEntity(76U);
    msg.req_id = 62503U;
    msg.status = 195U;
    msg.text.assign("ZZGJMUYCMACZVUFNRXEAXWKPNWBPKBXMTNKSFFHTQWEBWHVJCFYYJSRAUDDWEROKGQAQVHHVNPFKJXTGCPDAPOOJDCLGDPMZHJEDVL");

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
    msg.setTimeStamp(0.4384706622977561);
    msg.setSource(36203U);
    msg.setSourceEntity(67U);
    msg.setDestination(29284U);
    msg.setDestinationEntity(56U);
    msg.req_id = 27465U;
    msg.status = 200U;
    msg.text.assign("FXPKIXJWQGEUESTWOJOMNSUALSLAVGLITSCLPHXNFEHUKYQNOASTBJNBWHYDBDTXGKIOIPMTGCYBYSTJNSAVKKDWJHCKPBLVNZGVYKQEAPBAVNUDNWFMORAWZNGXHPEDVINQXPSMGZDP");

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
    msg.setTimeStamp(0.42905288324294755);
    msg.setSource(37292U);
    msg.setSourceEntity(203U);
    msg.setDestination(24076U);
    msg.setDestinationEntity(242U);
    msg.req_id = 6834U;
    msg.status = 218U;
    msg.text.assign("KNEXRKCPFOFZKSLDPCRWRJENVZEDICSWHAIVBGDCMZZFDHOTHNOZATZRMKEZUJJLPTSAHVCYGKRCVTDVXSMFQWLTHCIRMGPVUJRGUAQROGKXXAILQYPIYZADEZOQXVNBTTBUVVSLQYSUJJOUBXMYCJGEDSENUMNHZJHURXFUFNCSSXIIMPQAPOQLWBKQACHTGGWMPBISQTJYWNKHWYWGMFI");

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
    msg.setTimeStamp(0.6270845640442975);
    msg.setSource(3516U);
    msg.setSourceEntity(107U);
    msg.setDestination(44670U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("NBIIRTDJLTHPYZKNFUTUEIVWTXGDOOGHJYPOLVISFVSJHCCWKMZDDOKTRGNFTREXAHMMLLMPDBZCESRIFKWWGVQSNCRYSCXITYWASBZAVJRRTVGQQUBIWJKPVAREGKJLQSMYAQKZQTPHZ");
    msg.links = 1231241829U;

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
    msg.setTimeStamp(0.17778651829293934);
    msg.setSource(4562U);
    msg.setSourceEntity(23U);
    msg.setDestination(60997U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("BJECAZJMIVBZPQLFGUHUPFRXGBAZFRPJLDQYFXTTEBSSAQQSMCNXCBXTSEZHPMGUVXZKWCVFECBUJVNIAUITYKWSGWOPZLGDRIKLUJBQIVFHTAUJDLYMPOSZDGJCTLNKSQOAMZHCBWNETNIHHMXEFRHUGWJXOUOEVRPNCYKIWFAPY");
    msg.links = 84783669U;

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
    msg.setTimeStamp(0.5966962792810352);
    msg.setSource(40165U);
    msg.setSourceEntity(202U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("NYZLKAAXUSZRYDWELRKWTOJQ");
    msg.links = 2567386421U;

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
    msg.setTimeStamp(0.22928968165497987);
    msg.setSource(65019U);
    msg.setSourceEntity(156U);
    msg.setDestination(23977U);
    msg.setDestinationEntity(95U);
    msg.groupname.assign("CRJYPTQMQWWVYRDSO");
    msg.action = 74U;
    msg.grouplist.assign("ZOJWYWXCIHUOMHWTJPVGQKLDOLNUFAPDKPWBJVGIFKFNGRUAXRDNZHP");

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
    msg.setTimeStamp(0.2243585575705056);
    msg.setSource(55318U);
    msg.setSourceEntity(114U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(235U);
    msg.groupname.assign("KIZDQWDIEWIFCFXJOVMTFKRAEEGZPLKOORZUNKGHVYTIMQFJPJXEERECNBSYEIXGFQKVSZIFSRBPDBVLXABZQXONIJLMOKJEPMDHGRUMBYKASSYCWPU");
    msg.action = 210U;
    msg.grouplist.assign("HUJDDARCWIYOHHJYZETCYACQFZULCXZBJCCWYPTTOLBRMQYNOJFXERPDWWJMKEDZUIKRKNEMKKFIGMLHAPFGY");

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
    msg.setTimeStamp(0.09076595713524738);
    msg.setSource(11890U);
    msg.setSourceEntity(59U);
    msg.setDestination(57342U);
    msg.setDestinationEntity(249U);
    msg.groupname.assign("FQDDOLGYOXADRZECSZFIKVDYDIVMAELSBPZEPNKPCQJPQTYHEHXBDIJIKTGTNMFUEURWOUQTEPNMZLOYURFRYPNQCCXPGGHXIMVLPMTGTOGDMMQNAFTNJYLOGBASWYCJBHVWDFJCWCKRQKKQJBFHPSWFCRFZEHINXXXSKKDZBGJGSXIVLUTAMBUZVSKBSKMTNAOHBFEVLXZV");
    msg.action = 192U;
    msg.grouplist.assign("TFHAVVHFGCAHOCAZVHLXYZCLZMWPOCTTNEOMRVOFIWXYXGWCQTVXPSSPBOH");

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
    msg.setTimeStamp(0.01688009470612617);
    msg.setSource(55458U);
    msg.setSourceEntity(16U);
    msg.setDestination(5283U);
    msg.setDestinationEntity(65U);
    msg.value = 0.9561314419877748;
    msg.sys_src = 50415U;

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
    msg.setTimeStamp(0.4495271459577206);
    msg.setSource(26401U);
    msg.setSourceEntity(16U);
    msg.setDestination(1930U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6364510923576299;
    msg.sys_src = 5929U;

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
    msg.setTimeStamp(0.21423270041824438);
    msg.setSource(59024U);
    msg.setSourceEntity(42U);
    msg.setDestination(34985U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9404257371454872;
    msg.sys_src = 26059U;

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
    msg.setTimeStamp(0.005798143841346803);
    msg.setSource(3266U);
    msg.setSourceEntity(128U);
    msg.setDestination(45511U);
    msg.setDestinationEntity(200U);
    msg.value = 0.06378897819368357;
    msg.units = 122U;

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
    msg.setTimeStamp(0.5869655127969571);
    msg.setSource(56875U);
    msg.setSourceEntity(151U);
    msg.setDestination(1387U);
    msg.setDestinationEntity(15U);
    msg.value = 0.5058509099420601;
    msg.units = 153U;

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
    msg.setTimeStamp(0.8855516861686216);
    msg.setSource(32990U);
    msg.setSourceEntity(21U);
    msg.setDestination(52704U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6633614787909683;
    msg.units = 78U;

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
    msg.setTimeStamp(0.6152109948465149);
    msg.setSource(61516U);
    msg.setSourceEntity(127U);
    msg.setDestination(32052U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.8868010614469849;
    msg.base_lon = 0.0956007560305202;
    msg.base_time = 0.8794529116631445;

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
    msg.setTimeStamp(0.6675256816522128);
    msg.setSource(32321U);
    msg.setSourceEntity(145U);
    msg.setDestination(52121U);
    msg.setDestinationEntity(159U);
    msg.base_lat = 0.8526938172069576;
    msg.base_lon = 0.22908444400290906;
    msg.base_time = 0.29482905418060723;

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
    msg.setTimeStamp(0.018957907291258347);
    msg.setSource(50594U);
    msg.setSourceEntity(144U);
    msg.setDestination(42338U);
    msg.setDestinationEntity(140U);
    msg.base_lat = 0.30452997875919585;
    msg.base_lon = 0.8176184743142016;
    msg.base_time = 0.8179255799676571;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 3742U;
    tmp_msg_0.priority = 19;
    tmp_msg_0.x = -9294;
    tmp_msg_0.y = -3063;
    tmp_msg_0.z = -31911;
    tmp_msg_0.t = 26180;
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 527853108U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7314964684102149);
    msg.setSource(40259U);
    msg.setSourceEntity(165U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(173U);
    msg.base_lat = 0.532886553532137;
    msg.base_lon = 0.3083440570541711;
    msg.base_time = 0.41344349310893813;
    const signed char tmp_msg_0[] = {38, -5, 42, -37, -96, 22, -18, 17, -82, -37, -16, -19, 14, 85, 7, -93, -3, 15, -19, 24, -120, -98, -66, -72, 76, -69, 34, 64, -124, 44, -105, 40, 38, -95, -94, 95, 72, -107, -51, -88};
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
    msg.setTimeStamp(0.10488164228586982);
    msg.setSource(40131U);
    msg.setSourceEntity(186U);
    msg.setDestination(11155U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.07350438294954265;
    msg.base_lon = 0.6935625999031453;
    msg.base_time = 0.6762791056046927;
    const signed char tmp_msg_0[] = {-54, -28, 82, -110, -24, 53, 55, 100, -13, 59, -125, -70, 100, 66, 123, -119, 51, 107, -14, -53, 121, -20, -128, -16, -56, -80, -12, -16, 97, -94, 56, 95, 85, 0, -82, -21, -29, -13, 83, 70, -57, 121, -43, -48, 102, -71, -102, 116, -73, -37, -101, 114, -8, 28, -123, -64, -128, -57, -106, -118, -59, -88, -118, -28, 47, -76, 59, -83, 96, -30, 18, 60, 33, 13, -96, -29, -34, 71, 104, -49, -51, -62, 122, -13, 5, 95, 83, 83, 49, -44, 16, 23, -125, -67, 97, -102, 123, -101, -78, -119, 17, -59, 24, -35, 89, 56, 36, -24, -91, -43, -98, -44, 90, 48, -36, -84, -56, -82, 54, -68, -43, -57, -18, -36, 111, 64, -87, 4, -101, 72, 2, -124, -79, -106, 3, -72, 102, -20, 108, -21, -111, -52, 121, -110, -68, 77, -78, -120, -122, -80, 9};
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
    msg.setTimeStamp(0.1587913886277068);
    msg.setSource(57779U);
    msg.setSourceEntity(78U);
    msg.setDestination(49995U);
    msg.setDestinationEntity(237U);
    msg.base_lat = 0.5719754446435174;
    msg.base_lon = 0.6094835538234847;
    msg.base_time = 0.08301320329524942;
    const signed char tmp_msg_0[] = {-75, -36, 47, 10, -115, -41, -55, -108, 53, -105, -41, -88, -104, 6, 116, 122, 94, 70, 3, -120, 111, -3, 24, -110, 89, -13, -83, -5, -44, 96, 90, 51, -54, 112, -102, 1, -118, 16, 94, 35, 48, -78, 5, -34, 92, 75, 11, -57, 54, 55, 74, 91, 62, -78, -96, -73, 43, 60, 43, -87, 25, 110, -105, 32, 16, 54, 61, -116, 120, 93, -28, 57, -111, 19, 38, -88, 41, 34, 1, -52, -32, 73, 63, -110, 69, -85, -80, 4, -117, -114, -41, -18, -112, 91, 78, -14, -40, -76, -27, 64, -23, 44, 59, 97, -118, -15, 2, 83, 92, 22, -85, 13, 2, 112, 91, -122, 0, -34, 89, 78, -72, 0, -82, -25, 33, -26, -24, -106, 56, 114, 86, -13, 40, -21, -68, -48, -40, 73, -84, 41, 6, -28, 87, 64, -29, 116, -123, 108, 90, -127, 113, 69, 62, -22, 36, -50, -18, -105, 52, -112, -25, -31, -56, 53, 118, 111, -69, -43, -41, 97, 8, 110, 110, -122, -76, 0, 4, -115, -111, -9, -68, -76, 43, -66, 110, -114, 56, -82, 1, 106, -47, 91, 5, -4, -127, -48, 104};
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
    msg.setTimeStamp(0.4610612041510642);
    msg.setSource(40054U);
    msg.setSourceEntity(49U);
    msg.setDestination(42855U);
    msg.setDestinationEntity(41U);
    msg.sys_id = 45204U;
    msg.priority = 92;
    msg.x = -5153;
    msg.y = -15973;
    msg.z = 6650;
    msg.t = -31072;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 14241U;
    tmp_msg_0.lat = 0.31265110451674416;
    tmp_msg_0.lon = 0.2118064978650468;
    tmp_msg_0.z = 0.02174499405189656;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.speed = 0.2122009422323159;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.custom.assign("SNVHDMFJWBGADSMRQOTBDZIHOLOXPQEXWQBKCMZXRPAAFHUYZKLBTWOPPIAWILRICKMCWQLTTGFDQBLEHZAIMVWBMPRQUJJUDUNQSODDOEWMYSNMTQUUKXGJYEXNMTGIYFICZYGWGFLJO");
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
    msg.setTimeStamp(0.455592008791477);
    msg.setSource(35112U);
    msg.setSourceEntity(155U);
    msg.setDestination(12528U);
    msg.setDestinationEntity(96U);
    msg.sys_id = 289U;
    msg.priority = -128;
    msg.x = -31488;
    msg.y = -23253;
    msg.z = -13726;
    msg.t = 19083;
    IMC::QueryTypedEntityParameters tmp_msg_0;
    tmp_msg_0.op = 96U;
    tmp_msg_0.request_id = 3098483778U;
    tmp_msg_0.entity_name.assign("FATNZITYWLKPAZANUQJRGRETHRODLARCUEOSEGUKHYIDJXFKTHGPSRIUAJCMBDIKZXMGRQPZIQDLMXSGEMBWYXOHTMIVIVLSZGECXMJIAXLHSFOJDUSFMBLWQFLKNWNPGCZQZAAJIYXNLRC");
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
    msg.setTimeStamp(0.7852049247042744);
    msg.setSource(29087U);
    msg.setSourceEntity(198U);
    msg.setDestination(10588U);
    msg.setDestinationEntity(78U);
    msg.sys_id = 22514U;
    msg.priority = -33;
    msg.x = 22593;
    msg.y = -19136;
    msg.z = 25869;
    msg.t = 19989;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 197U;
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
    msg.setTimeStamp(0.7385515423586668);
    msg.setSource(474U);
    msg.setSourceEntity(218U);
    msg.setDestination(64940U);
    msg.setDestinationEntity(81U);
    msg.req_id = 15004U;
    msg.type = 17U;
    msg.max_size = 52417U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3906796688888723;
    tmp_msg_0.base_lon = 0.9890554811497964;
    tmp_msg_0.base_time = 0.35339093740311645;
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
    msg.setTimeStamp(0.3749799864979654);
    msg.setSource(46566U);
    msg.setSourceEntity(0U);
    msg.setDestination(23279U);
    msg.setDestinationEntity(28U);
    msg.req_id = 30818U;
    msg.type = 110U;
    msg.max_size = 10378U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3830930433783235;
    tmp_msg_0.base_lon = 0.40149205977405145;
    tmp_msg_0.base_time = 0.943933000298707;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 63690U;
    tmp_tmp_msg_0_0.priority = -96;
    tmp_tmp_msg_0_0.x = 17512;
    tmp_tmp_msg_0_0.y = 18399;
    tmp_tmp_msg_0_0.z = 217;
    tmp_tmp_msg_0_0.t = 7379;
    IMC::EntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("CMQPOHXMLTHSSLPGJZFDBMCWVFZXZNAAITGJOUIRBNOVGAOCKDFVWHHNMULLMCPXJYZIQSEDEGBODTYRVXOKUHRKTYUXMASWFNRSETBEINJTHKFPXFBHLCAJXSQLHXBPKBVCZEHJWUFZTDQQZWWVTUAFJXMYSTOPDFEERORYUPBNEUCSLRNWUGIZNKQYFUA");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.33472242381837614);
    msg.setSource(47153U);
    msg.setSourceEntity(213U);
    msg.setDestination(12749U);
    msg.setDestinationEntity(10U);
    msg.req_id = 16287U;
    msg.type = 218U;
    msg.max_size = 17855U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9306346594257288;
    tmp_msg_0.base_lon = 0.2506918039309115;
    tmp_msg_0.base_time = 0.3484636588852784;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 47860U;
    tmp_tmp_msg_0_0.destination = 56624U;
    tmp_tmp_msg_0_0.timeout = 0.758847919329068;
    IMC::NeptusBlob tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.content_type.assign("MPWKVFZYNDRZEMWSHJLRJUSKZNMZCPBZNRXMGGWUTBGBPFEATVLBWUYGXSATUGIAPGULJQLCPDVALUSXGDTPRRFVUMTCFHDWZFDCQEKXVZXOOMJFXWOOCGBJIGVVQJINWBUBKYACMFIMSSBPEZKRQIRHTDKMVBTLKYDNJASSRHPPXMXEJSECVXOALQLNANHBDIDJNQCHTZOOFLEIOFUEWRA");
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {51, 64, -74, -14, -66, 119, -19, -47, -71, 36, 52, -43, -18, 33, 62, -106, -11, 37, 68, 126, -36, 9, -34, -127, -5, -12, 14, -115, 93, 43, -71, -90, -83, -59, 88, 95, -94, -67, 9, 117, 42, -40, -98, -96, 7, -86, 55, 75, -16, 77, -94, 27, 21, -59, 31, 1, -112, 119, -55};
    tmp_tmp_tmp_msg_0_0_0.content.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.7554346216905418);
    msg.setSource(22518U);
    msg.setSourceEntity(223U);
    msg.setDestination(52559U);
    msg.setDestinationEntity(73U);
    msg.original_source = 40249U;
    msg.destination = 53146U;
    msg.timeout = 0.1763513021349541;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.3894010071872621;
    tmp_msg_0.phi = 0.45064929965292666;
    tmp_msg_0.theta = 0.8298765350520363;
    tmp_msg_0.psi = 0.6081082191425864;
    tmp_msg_0.psi_magnetic = 0.4254416355537396;
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
    msg.setTimeStamp(0.7772079966769244);
    msg.setSource(17714U);
    msg.setSourceEntity(116U);
    msg.setDestination(31695U);
    msg.setDestinationEntity(33U);
    msg.original_source = 53396U;
    msg.destination = 3504U;
    msg.timeout = 0.08327243036578547;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 8322U;
    tmp_msg_0.priority = 29;
    tmp_msg_0.x = 9136;
    tmp_msg_0.y = -25105;
    tmp_msg_0.z = -24565;
    tmp_msg_0.t = 12321;
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 83U;
    tmp_tmp_msg_0_0.angle = 0.7438050544051775;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4190222586090744);
    msg.setSource(29780U);
    msg.setSourceEntity(147U);
    msg.setDestination(53018U);
    msg.setDestinationEntity(204U);
    msg.original_source = 39119U;
    msg.destination = 22192U;
    msg.timeout = 0.5393455429418968;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BXKLKNXDBUPYKQNKJGJZJNMFAGESMTEZZZUGIQCCJUVIPOCNWXCVRLIDBYMTZYFABWYIICOOOPARYKUHRUQHXJHXSLWAOVTEFWESYHAYXZPVONMWAYHSUSLFSMLEWREADGUPRPXDBFHZENIIODHHFMLNWVTGMJKPESRCKGVIFMBBULYKJDZQNHJODVWIXSAGOTQCTCQEDOWQVXXRFRQKQDZSEPAPVJPUVTJUFMGCZLFMNGDIARKWBTNY");
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 3125U;
    tmp_tmp_msg_0_0.lat = 0.4367678089294059;
    tmp_tmp_msg_0_0.lon = 0.1216310437097966;
    tmp_tmp_msg_0_0.speed = 0.08142406344584396;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_tmp_msg_0_0.custom.assign("GPBPMBZHUMVMCRZCAJBKIBT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetLedBrightness tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("VJUCJQGULTMKDZOGWNDKJVFIYZXHUVNWGBFTSEQABVZIIPDUGKKCSKWPUDIFQTZNZMIKFTYYNMOTEEROALNACAWLYBRBGLDKJJEEPWROQIJFKZVGGHRLFSDROPRLQC");
    tmp_tmp_msg_0_1.value = 226U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0580522591885384);
    msg.setSource(65067U);
    msg.setSourceEntity(125U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(24U);
    msg.type = 106U;
    msg.comm_interface = 58192U;
    msg.model = 35263U;
    msg.list.assign("BDLQTELEFFOWZXOVDZMLNTWHDTPIJSSXCIMGKEBUYV");

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
    msg.setTimeStamp(0.11970052210147009);
    msg.setSource(56722U);
    msg.setSourceEntity(78U);
    msg.setDestination(61455U);
    msg.setDestinationEntity(108U);
    msg.type = 203U;
    msg.comm_interface = 31432U;
    msg.model = 41090U;
    msg.list.assign("TDIJDXSUCAGZECJSAUFKFLTNJWRXVDNGCISHCJHBGKXKXILSQVQYWAZUGNMXZAADMAOPOGOKNRRUAFNVWYDEHDZTGIHTYVHOVDDDCRTEFETBIFJHYMMPKQNUKLEERKZAGJVPZHTB");

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
    msg.setTimeStamp(0.7070191648841617);
    msg.setSource(19206U);
    msg.setSourceEntity(211U);
    msg.setDestination(8761U);
    msg.setDestinationEntity(78U);
    msg.type = 217U;
    msg.comm_interface = 22544U;
    msg.model = 25937U;
    msg.list.assign("YGBQULLSWAABRNBZDDBFQEZFFMZVCZAOGGEHDXMXTHJYLHAUFGSHFENIICHCUDGTMZDZOPQEFWXKNNLQOGHOATPBNOORZHYSTPBIISDURBOPVKIYIRTJ");

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
    msg.setTimeStamp(0.9479263277415991);
    msg.setSource(36650U);
    msg.setSourceEntity(117U);
    msg.setDestination(28928U);
    msg.setDestinationEntity(195U);
    msg.type = 229U;
    msg.req_id = 1817740779U;
    msg.ttl = 32267U;
    msg.code = 48U;
    msg.destination.assign("JGERIHCCAGCTIAGHWEBWTTXSGERPKMVMFTKFDVSIFWHVZBTNRCAQBXRJNIXRZOMDGPHATWUCHYYFCHOOQMRGLNLHDBEYZOEIAUNZXVRPMVDSQCLNOIBQPELJJYEYTEWFWUXABFUYTFKMJULFDW");
    msg.source.assign("GZZQYASABPTLUSBISFKDTBHZUKHSGJOIJKHDNJGRKTUQCNAEJTBAMVTBHYDAMQTCUGJYLVURNJXELENXWIPWXRYS");
    msg.acknowledge = 248U;
    msg.status = 169U;
    const signed char tmp_msg_0[] = {-98, -117, -92, 61, 40, -4, 4, -15, -113, 104, -55, -89, 117, 64, 42, -29, 113, 120, -10, -111, -73, -106};
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
    msg.setTimeStamp(0.4190673917415678);
    msg.setSource(35865U);
    msg.setSourceEntity(58U);
    msg.setDestination(65474U);
    msg.setDestinationEntity(135U);
    msg.type = 243U;
    msg.req_id = 54363017U;
    msg.ttl = 54303U;
    msg.code = 38U;
    msg.destination.assign("HXPEHUNPCDHGZGKZTTPOTISSOSDJMYTNGXUEXHGWAGLBGYJOFSOZPMBOQWPQZMZUWYVAYJFAVYTSNAETMKMDLXFSJLVWEFALRRBPEQDRKEUTECRSI");
    msg.source.assign("WRDFTMNLGRVNNXHEQZJSIXZHMZXDAMQXJRQCYKBWIHTPEREUWSOSFUUIPUNFAINMBIYXVRIWGFLVYDZQZAKDGQKNTUYDYOGPTPFMMEOLKMABZLJPJJDUZFGRCOLTPSPRDVCKVWRBVJXOLGESASZWNZEQHLJSSCGCGCKWOBTRTERFCTLVTHANQBADAOICHPHLI");
    msg.acknowledge = 216U;
    msg.status = 210U;
    const signed char tmp_msg_0[] = {-87, -70, 24, 49, -2, 104, -87, 102, 82, 72, 59, 38, -104, 50, 68, 44, -120, 79, -16, 25, -36, 27, 79, 100, 16, 60, 84, -23, 97, -103, -122, 52, -19, 93, -92, -24, 1, 31, 11, 115, -23, -127, 103, -128, -125, 16, 44, 78, -26, 35, 33, -18, 60, 48, 5, -87, 45, -54, 115, 10, 125, -6, -42, 91, 126, -63, 75, -112, -60, 100, 81, 12, 101, 51, -11, -96, 103, -92, 46, 24, -57, 8, -8, 24, 39, 24, -45, -8, -46, -19, 32, 115, 110, 48, 66, -49, 13, 22, -56, -82, -67, 92, -100, 76, -109, -65, 32, 61, 118, 104, -75, 9, 54, 38, -90, 40, -28, 74, 116, -118, 25, -106, 124, -41, -73, -32, 30, 34, -102, 52, -15, 57, 121, 9, -96, 32, -61, 117, -113, -124, -49, -19, -51, 69, -37, 121, 0, -91, -65, -14, -19, -27, -98, -117, 9, 27, -89, 44, 53, 39, -73, -47, -14, 109, -61};
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
    msg.setTimeStamp(0.8662341945604356);
    msg.setSource(30500U);
    msg.setSourceEntity(123U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(166U);
    msg.type = 226U;
    msg.req_id = 2839964146U;
    msg.ttl = 9041U;
    msg.code = 105U;
    msg.destination.assign("JLQESQBVDIYCKHKFBETPITKOKDCPMPYFECGGKISHMINNUZSSXKWVFSSZEBBIOJUQHBDETNRBCVXNMRRAQTWOQWAHHMKGFAHBCJTCLFXDYPTDGYLBJNAMZGAJAXAYXHQXZRQNQJ");
    msg.source.assign("PDCVEDMCNBTHTQAEUSVHDPLIKIONQUJTLWHRYDGARWNZHLKOBBKLAAOKXQRDJWKSBYSVZMKPJSHHVCYZVFLFPRUQRXXYIJZMYORFXVJMMNAKUZXPWFPZYTZUTOFNEVTWNXZWVDITNAXCUNBJFJKRMYOGMBEPOIFTEGIVYEQGCCHEGIDTQJAFONOACWSHGSUPKLLMBSZEJXGWSKUJMIFBQCXUDRWLZASD");
    msg.acknowledge = 143U;
    msg.status = 162U;
    const signed char tmp_msg_0[] = {107, 6, 124, -1, -74, 16, -69, -57, 40, 74, -43, 119, -14, -11, 36, 10, -65, -15, -2, 0, 51, 64, 37, 14, -53, -93, 112, -22, 51, -31, 72, 84, 107, 80};
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
    msg.setTimeStamp(0.5479730762885493);
    msg.setSource(6729U);
    msg.setSourceEntity(44U);
    msg.setDestination(37427U);
    msg.setDestinationEntity(184U);
    msg.id = 118U;
    msg.range = 0.7329297447225555;

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
    msg.setTimeStamp(0.17426377079708022);
    msg.setSource(12558U);
    msg.setSourceEntity(36U);
    msg.setDestination(21937U);
    msg.setDestinationEntity(119U);
    msg.id = 102U;
    msg.range = 0.9800180122463278;

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
    msg.setTimeStamp(0.6135964812885609);
    msg.setSource(34971U);
    msg.setSourceEntity(110U);
    msg.setDestination(11478U);
    msg.setDestinationEntity(72U);
    msg.id = 40U;
    msg.range = 0.0013064426227232806;

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
    msg.setTimeStamp(0.6521653829681957);
    msg.setSource(3123U);
    msg.setSourceEntity(12U);
    msg.setDestination(56058U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("WYBGVJTUWXDHAYMIWFRCBUINETCYRGRNUXKKHATOJYCFSXKLIEKMFHGA");
    msg.lat = 0.01798488922731989;
    msg.lon = 0.4377137476633841;
    msg.depth = 0.9984851705394916;
    msg.query_channel = 65U;
    msg.reply_channel = 41U;
    msg.transponder_delay = 23U;

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
    msg.setTimeStamp(0.0015884648718572647);
    msg.setSource(54604U);
    msg.setSourceEntity(250U);
    msg.setDestination(36036U);
    msg.setDestinationEntity(205U);
    msg.beacon.assign("PYZPGCYPLAIVTEGJVXSFYQHBWCJEQGFTOPITBLRAXOAGUEFCGNACTIMMWPGSSYWPISVVHWCAKXAEZWFRUQANRQISDDIWBEANOIHBZAFZKJOCTVDLUVLOBOVMZGKYDHBKYNJFIHHXPEQZHRKMYJHZZEDUEEORLNVLNGYMMNBMOBQKUZRBCKPGNWLLTXZSQKSMQPJKF");
    msg.lat = 0.8483947066510997;
    msg.lon = 0.9742883750169402;
    msg.depth = 0.23266386570259112;
    msg.query_channel = 93U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 226U;

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
    msg.setTimeStamp(0.2983810118626007);
    msg.setSource(52754U);
    msg.setSourceEntity(138U);
    msg.setDestination(22219U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("VVSIGEXDZYVQHJMMZWBLEEICZEFNVAKXBCDDPMYWURNLITYSQPOQTBKPJGPGDYTOJNWLHFQJZRFSIBZRNWPWQGIRLUYYUZKKNSVMPBEJDJECTVVNSBHWPIENFJDRBUAXSEKUAMCGSCMHDFGSUOI");
    msg.lat = 0.3601881931203861;
    msg.lon = 0.025869175826962798;
    msg.depth = 0.670713323391443;
    msg.query_channel = 160U;
    msg.reply_channel = 116U;
    msg.transponder_delay = 136U;

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
    msg.setTimeStamp(0.7029141904368468);
    msg.setSource(23265U);
    msg.setSourceEntity(230U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(158U);
    msg.op = 19U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WRNDWXYOUGIKYQWNCYWPNBBCGVZTBOKWQIZJPHLNKOJJSIUWISOMQCMAVJDUSSZZTXKJGOGFDJZF");
    tmp_msg_0.lat = 0.8304168059048063;
    tmp_msg_0.lon = 0.31511792726608134;
    tmp_msg_0.depth = 0.5172824235289529;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 129U;
    tmp_msg_0.transponder_delay = 93U;
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
    msg.setTimeStamp(0.046742991775164056);
    msg.setSource(49685U);
    msg.setSourceEntity(93U);
    msg.setDestination(48786U);
    msg.setDestinationEntity(245U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.49315876486875987);
    msg.setSource(9133U);
    msg.setSourceEntity(145U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(81U);
    msg.op = 87U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MRRIRBWNTNNFXBHTIUDTXNLZJMPYJGERAHSUGWXKLCYMCGVLDSQXELPPBJDJYRXYUSZGPDMVKBGLUXJITAWEUHNMZLWFFJDNVMOUTYDCZASUSNZFEVQFBQNORHBRMWIOOLFTTGZJQYAEHVHNKAZVZKHXCVPOZURDSKWWBQCBCWCTZGKFULBFPIJMRQQAWIREOSEKPXXUPVMJFVDPECVOSIOCCYIEKYQNKBSMGO");
    tmp_msg_0.lat = 0.7296581474529824;
    tmp_msg_0.lon = 0.07464541998621188;
    tmp_msg_0.depth = 0.9831957603652047;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 102U;
    tmp_msg_0.transponder_delay = 232U;
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
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.9846007813595138);
    msg.setSource(24261U);
    msg.setSourceEntity(98U);
    msg.setDestination(18214U);
    msg.setDestinationEntity(58U);
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MUEDLGEGREBJXIWMOCZLDCXHYMKXGVBFZIJFPPHUBODUICHPSUNBJWAJNVNUXKXPFKIZODTNWACQQ");
    tmp_msg_0.feature_type = 132U;
    tmp_msg_0.rgb_red = 9U;
    tmp_msg_0.rgb_green = 42U;
    tmp_msg_0.rgb_blue = 5U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9036006460244126;
    tmp_tmp_msg_0_0.lon = 0.13615049251561173;
    tmp_tmp_msg_0_0.alt = 0.7641364695608862;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.37487702558714464);
    msg.setSource(51613U);
    msg.setSourceEntity(219U);
    msg.setDestination(9059U);
    msg.setDestinationEntity(250U);
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 116U;
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
    msg.setTimeStamp(0.7831754014413826);
    msg.setSource(57927U);
    msg.setSourceEntity(101U);
    msg.setDestination(40931U);
    msg.setDestinationEntity(92U);
    IMC::MsgList tmp_msg_0;
    IMC::AcousticSystems tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.list.assign("NINONIWBGLHXLNVXCEBRCJJGVMSZHNWMPIKKBHTPQHPQEZHYCGVCZXMJSOWQVYRTJCMXLAYJPCUXDNIOZFCKSHUBFAQVUEWVDFLR");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7957062662640855);
    msg.setSource(46016U);
    msg.setSourceEntity(228U);
    msg.setDestination(18051U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.9885918972754097;
    msg.lon = 0.4068831228246894;
    msg.depth = 0.8452155287937371;
    msg.sentence.assign("ZOBNCFLAQFYSDTZIMXJWWQVDXWCXRZTRSLFMKBYRJBJMSNFXCZDDVLMCNOYQFSOBIIHUASKMRQTLGDDRVPAEJK");
    msg.txtime = 0.3193971613320147;
    msg.modem_type.assign("OKIREIZTQGVVAZDPCSRXMYYABEYEWKHQZCFTFHWWAWHVWDJZZUKFQNRQBQEPXCSJUESFICMLXQMJLGSXOCVOPCRI");
    msg.sys_src.assign("RDFIWQANTJICNOYYKOUEHHZQEPSWXZCWYNBSSXEDNBGRPPUDOOZOSUMHGWGCOYGHZAKQLVJCBTLXTVDLPSSZXJHZAOBJNYVBPDFRVTAGXFZJQFJLHYAMTIVKQMJLLPIEBHWRDKGXFECCMUPKFTSMXBMUPKIEBLRKSYZQVUPBSUCFJVPOECTIWUZWHIWJQQMJRGRNKMOGLAVDUNYTWBRHAIVIZ");
    msg.seq = 31567U;
    msg.sys_dst.assign("QFSZRXIGMAIMFGSUSOUCRAOQPYCAARWEGKEZLJWLTYNQLDDOPWWOSXTQLOUCSOVPZONPFLIVDQPFSKJAMGPYOILMUAHCFLFTFNMNJTSXUQHTYQRHRNDVWBKYXJDTDWZNTKGVOKMALEHXZWEELNXHBECRSKE");
    msg.flags = 248U;
    const signed char tmp_msg_0[] = {70, -120, 12, 91, 96, 16, 34, -13, -56, 54, 44, -73, 28, 30, -42, -128, -79, 35, -88, 39, -21, 69, -101, 17, 6, -25, -58, 64, -117, -12, -34, -97, 75, -84, 54, -14, -1, -119, 75, -7, 101, 28, 76, -81, -14, -97, -14, -75, -57, 28, -9, 28, 125, -77, 5, 73, -111, 115, 80, 101, 43, 89, 23, -42, 111, -25, 31, -33, -31, -43, -51, 116, 88, 94, -18, 100, -61, -64, -121, -39, 17, -117, -95, 123, 101, -8, -69, -106, 104, -117, 107, -28, -32, 92, -10, -18, 21, 6, -43, -20, 46, 12, 52, 122, -112, 94, 45, 91, -122, -58, 38, -44, 125, -109, 100, -17, -82, -103, 17, -63, 100, 2, 122, -53, 35, 59, -110, 40, 108, -106, 107, 66, -111, 20};
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
    msg.setTimeStamp(0.9995830126246488);
    msg.setSource(5241U);
    msg.setSourceEntity(98U);
    msg.setDestination(26064U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.9681551840089668;
    msg.lon = 0.3298235076661946;
    msg.depth = 0.5531575728774942;
    msg.sentence.assign("IXHACPLEUBZDPASVFFPQYU");
    msg.txtime = 0.7857683661933782;
    msg.modem_type.assign("MTZWVCKFLKYCIUNATLCXVWOYEDOKQFDHJTFZDWCWHRRIBKHCMNALMBEFRGMIQZPEQRAXNDXUPRXUSHVZJZHJEYPLKFTBLXWZYXVUIIGDHSNENGVOTYPCZS");
    msg.sys_src.assign("GWDRWVUNRXVZDWOSOQMKFFYCKEINFBEEFHCKEVAAWOJBMBBTXFAZBDFIDPCALWINSSEPQBKRSUQFQCASUHLCHLGGYINGDYEOQWYNUVBXIZTIKEONYJLVKUMYJKVKDJWTJYURGQRHPVGTZOREAOELCXHMOWTXLRXVM");
    msg.seq = 21438U;
    msg.sys_dst.assign("LVOBJDZSJYVDPIVTRSWPAGGOANCARIKQULKEGJYTKVOERXACYVORZBNTFTQMBHYKBAJENYKCHUKILXTRDGCXZMOWBXLDHLFLCUDDBRWIZZHAPOXCHDOWDMFKYU");
    msg.flags = 233U;
    const signed char tmp_msg_0[] = {-28, 91, 82, -81, -95, 47, -68, 39, -103, 87, -49, -121, 46, 8, -35, -76, -65, 96, 101, 48, 113, -63, 113, 38, -34, -117, -98, -44, 1, -45, 94, 109, -123, 122, -51, -96, 46, 86, -41, -98, 80, -15, 12, -127, -120, 31, -83, 111, 52, -69, 109, -20, 76, -80, 87, 44, -89, -91, 85, 16, 117, 124, 93, 122, -46, 8, 20, -99, 69, -70, 98, 93, -98, -35, -122, -55, 26, 37, 65, 100, -118, 100, -125, 73, 97, -95, -75, 95, -33, 86, 6, -102, -93, 117, 102, 97, 64, -120, -92, -97, -114, 8, -127, 16, -90, -83, 20, -87, 2, 34, 106, 66, -122, -85};
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
    msg.setTimeStamp(0.4812951703697639);
    msg.setSource(2526U);
    msg.setSourceEntity(248U);
    msg.setDestination(23235U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.7805235453405284;
    msg.lon = 0.36920137528732033;
    msg.depth = 0.5860893313858687;
    msg.sentence.assign("EQUACGAWVFRLWWSTNEOOKUDIGALQMYJUXSKBVDYEYLHRNXQAYMNRQGAODJTJXUGMLDOZVMIVBMAHYKYZPPIGCISQDQQWCZQOTCJXMBXMMMCIVPE");
    msg.txtime = 0.8471960797062037;
    msg.modem_type.assign("MVVJJXFDATINUDDXEMBUJVQJTNXGPPZEXPCGQBFXFNMNFOHSFTHDGKNMHCSHXBFUOOUZJQMQKCKDNQTROBXLIHRIZTVSRMHGBILERDOIACYWKZLLGRZYBSSDGCGFQGTHNZAAWOZASEMKTSLLPZHPXWIKFSMCGDF");
    msg.sys_src.assign("CNWYEVPWGSIYHIXNPEYPFDMYJMCLJUWCZXHLBFSWQUVKCBCXMDDANMOAWCSZOTHUOZRFUKRTKDLVUUUZOYHGJLSVXQPQHTYFTGDVQFLCNWQCDMGEJWBWNLRBIFKHYVHQRAOETEZQGFTOXPNOMIBCGPVNOGRXURLSYKZJMBNQDKRWZGJEPFXRCDYNTQAPLNKAPJHSZSJIBF");
    msg.seq = 1748U;
    msg.sys_dst.assign("ILCWRISAOAZDNLSKAJMSKLMYLZETRDJLCHHNQEKJMPDUHDWWZFURGKVNAIGXGGITBYNGCCYGTQCDCFHYKQXOFZAZIRBSVBTMPBOVQKYXVEARFAKPNUYPWBZLWYTCFABDCEDKQHKTZRUUHTBOXHHFTMJFEGBWIRPBYDJ");
    msg.flags = 126U;
    const signed char tmp_msg_0[] = {91, -67, 2, -44, -35, -37, 12, 71, 68, -26, 34, -86, 18, 102, 2, -67, 85, -82, -124, -110, -111, -44, -117, 32, 120, -105, 119, -27, 38, -64, -97, 14, 1, 30, 101, 3, -86, 124, 104, 123, -7, 40, -94, -94, 110, -22, 0, -90, -46, 103, 124, -29, 60, -73, 116, 116, -77, -36, 56, -122, -103, -114, -14, -15, 66, 47, 93, 75, 29, -12, 5, -108, 85, -55, 107, 15, 54, 73, 92, -33, -42, -8, 1, 14, -89, 62, -97, 39, -64, -37, -4, 121, -14, -4, 26};
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
    msg.setTimeStamp(0.6080125962364731);
    msg.setSource(61143U);
    msg.setSourceEntity(34U);
    msg.setDestination(14746U);
    msg.setDestinationEntity(105U);
    msg.op = 83U;
    msg.system.assign("KXSEWUCWRYVSUYUDYZSTNATJLVJLBMJKMVIRSNABKPZUSQQXIBHMXTUGGDDNGFPWRYMAGCFVCRMRFOTQCSXZIPDFYAAXMROXHCUDPJFYAZNVULOPQGXTJCEZRHPVNKEOATKDELMCGBPAYMXNDNBLSBOVCHFXSIHLWJLIHZDEWKAU");
    msg.range = 0.05102538876303109;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.9129130635441441;
    tmp_msg_0.base_lon = 0.9690765188491772;
    tmp_msg_0.base_time = 0.44699080622847887;
    const signed char tmp_tmp_msg_0_0[] = {-62, 7, -23, 118, 78, 85, -72, -23, 35, -44, 11, -59, 60, 61, 28, -108, -52, 77, -60, 107, -127, -21, 106, -40, 23, 111, 57, -56, 100, -118, -99, 13, 60, -57, 72, 75, -91, -14, -37, 2, 49, 10, -91, -4, 86, -105, 3, -65, -4, 67, -11, -28, 24, -91, 7, 49, 32, -60, 107, -110, 37, 3, -65, -120, 48, -72, 32, 12, 16, 36, 77, 97, -19, -44, 29, -16, -64, 19, 126, 59, -93, 73, 38, 4, 32, -8, 51, -91, 117, 6, 11, 84, 126, 97, 73};
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
    msg.setTimeStamp(0.02901865074811627);
    msg.setSource(47417U);
    msg.setSourceEntity(178U);
    msg.setDestination(8625U);
    msg.setDestinationEntity(216U);
    msg.op = 1U;
    msg.system.assign("FXRJDUGNZIRYIQARWGTBLVLUIOUGGKHHYCVZVYISOFKBZMARXMVPMLXNTUFBSAFOJLOYQNHBEBK");
    msg.range = 0.5569125428302786;
    IMC::MsgList tmp_msg_0;
    IMC::LedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IZCNHDPALMRGVUCCHMJJGXNLNYWRWQWWPFMEQPKNOVBRGIASZBWIDEYVYYSZYPJERDNSQXLOHTBFBCJKTXZDUBOLNYRHFWFLZEAMDNPXKMYOACOLADAGFSITXAZ");
    tmp_tmp_msg_0_0.value = 227U;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5592542669412107);
    msg.setSource(23028U);
    msg.setSourceEntity(194U);
    msg.setDestination(34289U);
    msg.setDestinationEntity(136U);
    msg.op = 186U;
    msg.system.assign("RFQDUYMPBDXBNWCNOHKQCTRDRQAWORWKBYCRBWXETZRABHVESPDNFDIBMGSXFISVCICNZQAAGZCHXNOLMWDQFUFZLIMLJJTTDEYSLTBXAPEXGLVIIHQFIPKVNJTUVGXMEXKQAHUQFJZKPNVMYSLIHOPBUGMAAXMARGHSGRWVFLJJYGWQYVAZUCEYUPOTOEJJEOYLKJCEPCZXDHIWSFHSEBDSZOZLDKIMTOTMKPNTG");
    msg.range = 0.4367127727035892;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3261200676U;
    tmp_msg_0.value = 188U;
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
    msg.setTimeStamp(0.8299792784004805);
    msg.setSource(14200U);
    msg.setSourceEntity(136U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.41809157398050834);
    msg.setSource(43243U);
    msg.setSourceEntity(200U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.9789412926802501);
    msg.setSource(64739U);
    msg.setSourceEntity(137U);
    msg.setDestination(38545U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.878017269261296);
    msg.setSource(11286U);
    msg.setSourceEntity(179U);
    msg.setDestination(50804U);
    msg.setDestinationEntity(77U);
    msg.list.assign("OBCXUVTEISEYHCSIVSHMOHYFEMLIALFZOQHCGZRHGYEFKRIBRIKUNBCYLCXHJQIGJSPGBPWREVRXDWLUKNRGZLAVDBSQKACQFWBFVMFNSOCSQTWWBGWOQPLPYAXJXLXJRIDXKZQMPBNWMNYBOUVKUPSAAUFZVADLAZVEDOIKNLENTNFIFUGJUCPDPVJBUASKQCZ");

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
    msg.setTimeStamp(0.2190557603243024);
    msg.setSource(539U);
    msg.setSourceEntity(225U);
    msg.setDestination(890U);
    msg.setDestinationEntity(26U);
    msg.list.assign("WFDKQOXHCUMZFUNJLGKAAHWEUHAWMLVTQATPNLBAQQZVEZOEGOILRDCZEPWYSWKNPNADNDVLSIQXSBMVZLCIFUMJABEFKRLXWQZVGUYSROXGVCIQYTVFXJZOENBRJMCIFKIYHJOJPITBTMNXS");

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
    msg.setTimeStamp(0.31572149285226403);
    msg.setSource(2447U);
    msg.setSourceEntity(120U);
    msg.setDestination(55517U);
    msg.setDestinationEntity(39U);
    msg.list.assign("ECESFLZEXHNIOMPDSJBNQCISBXABBWYTPGCVRXPKWJCHTDTAAMKZBYAWUCOCLGSXGOTYGBGRIHFIKJLQEUQPNELGWRVTFSXVWZKAVZFFANDUVXZEFVZSIMGY");

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
    msg.setTimeStamp(0.9420150291516892);
    msg.setSource(38279U);
    msg.setSourceEntity(18U);
    msg.setDestination(13135U);
    msg.setDestinationEntity(102U);
    msg.peer.assign("IOINYXLIHJMZKUSBRBGBFPTDDZEUDZCMZDYAILGKBKVJMWCKXKSGKEZCANYTTGSOIAXBIWEWPOQPKLEVLYTCPBERVHDJZPOR");
    msg.rssi = 0.6397833853211008;
    msg.integrity = 20753U;

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
    msg.setTimeStamp(0.42635764529012743);
    msg.setSource(29307U);
    msg.setSourceEntity(21U);
    msg.setDestination(15786U);
    msg.setDestinationEntity(221U);
    msg.peer.assign("AUIRXWSZSPVBBLCCJRTXIXVRYQSTQIMKJVFDZOAPIPMGWTPDGNNUWVYMUKCNPKGSHIUNUEQSNDPRJDVVZLCAMWFFDEYYWGHSHOINGUTMDFXROXFYZTKQDHALOTFAJDIHHSXFREVQABWZDOOLVCAYRYCBUNJK");
    msg.rssi = 0.6524649037557168;
    msg.integrity = 9646U;

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
    msg.setTimeStamp(0.48332531108728183);
    msg.setSource(63720U);
    msg.setSourceEntity(208U);
    msg.setDestination(17309U);
    msg.setDestinationEntity(194U);
    msg.peer.assign("UZTYEYGAHLZIEBWVJLXLQAKPFHZJHYGAUADEDHRNJZUCMRXWEEDOOGTRAFTYOMQSGAZMWGJOMCVKWPLDARHTFNELRBMXNBDCHWRYLUCGPYREAZ");
    msg.rssi = 0.12365513994977528;
    msg.integrity = 6434U;

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
    msg.setTimeStamp(0.7125888742111633);
    msg.setSource(51920U);
    msg.setSourceEntity(241U);
    msg.setDestination(52615U);
    msg.setDestinationEntity(101U);
    msg.req_id = 30641U;
    msg.destination.assign("VMFIDSVPPZSAHLHGDTHKBQQWZMJKUDEZCERTBXIWVTWSTCWLRYKTUKGCDOSMTNLCHXUTISZNCEXDFDAPOZFXEMCOHMBHJLAYTKEORBXKNWQFCIVSFFIMFECKCHMHIGMBWUGBQSZCZLA");
    msg.timeout = 0.9016231183405906;
    msg.range = 0.7647088662866095;
    msg.type = 246U;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("VFYMVYVENQHAPWIHUYWSNBILWQOZTWEBRQXTKPZCPKTDTRWDRUMJSPTGGXAIIU");
    const signed char tmp_tmp_msg_0_0[] = {-95, -105, -1, 53, 61, 68, -13, -79, -12, -30, -1, 96};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8543895787437746);
    msg.setSource(47884U);
    msg.setSourceEntity(143U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(251U);
    msg.req_id = 1085U;
    msg.destination.assign("JBSMDDQHZSYLEXFVSHOWFTFLAQNRAPEQOJEJRPJB");
    msg.timeout = 0.21711694415857408;
    msg.range = 0.29925248258585035;
    msg.type = 69U;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 43U;
    tmp_msg_0.numsamples = 53U;
    tmp_msg_0.lat = 0.8604103023390065;
    tmp_msg_0.lon = 0.9998889349829324;
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
    msg.setTimeStamp(0.2149362278572855);
    msg.setSource(63200U);
    msg.setSourceEntity(36U);
    msg.setDestination(6936U);
    msg.setDestinationEntity(125U);
    msg.req_id = 3046U;
    msg.destination.assign("CYFQWTTPBZIKIIYAAFHVFQVKBXQMEBOLWKAFRGZZMOWSQRXEYUNYXGAWCZVIFHDAIQRJBFGXD");
    msg.timeout = 0.175434813779909;
    msg.range = 0.9496209618310256;
    msg.type = 149U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 49U;
    tmp_msg_0.plan_id.assign("MSZHFQWSSPEJFJZUQOBCOOPTMWNZFHHL");
    tmp_msg_0.comm_level = 18U;
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
    msg.setTimeStamp(0.7427553409722477);
    msg.setSource(11731U);
    msg.setSourceEntity(119U);
    msg.setDestination(36438U);
    msg.setDestinationEntity(53U);
    msg.req_id = 23996U;
    msg.type = 76U;
    msg.status = 31U;
    msg.info.assign("BZZDESECUOWYKBJHXRMANQBJHLNQGAAIWCLOEIOVZSPYKXCMSQJAIYMAETWUYYWHRDKWXQDXMKJPWMATDPEGUCIQGEMOITXVFHYSBLXGKLIQCFCARDUSZPVOEQFMRZVVYGOPBTFHHIROSOPNLJTJDVZJBJVGQIWCGMSUCDXBPAFPZ");
    msg.range = 0.8132581811220457;

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
    msg.setTimeStamp(0.9618704506490807);
    msg.setSource(40862U);
    msg.setSourceEntity(200U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(198U);
    msg.req_id = 13054U;
    msg.type = 2U;
    msg.status = 121U;
    msg.info.assign("OMXHFPATXLKCXFNCNFEDTYPTKFMQCMQWGQCVQROGYMRWTJHOBCZTDOWSIVHIFUAPBBJAGNSGBZHRPLFYWWCBDHVGKQJXETXAUJCVDSYYOPGOHZUQYTALFFEUDLIVTOG");
    msg.range = 0.3726698879545767;

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
    msg.setTimeStamp(0.7179352629521192);
    msg.setSource(1372U);
    msg.setSourceEntity(152U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(147U);
    msg.req_id = 53946U;
    msg.type = 134U;
    msg.status = 192U;
    msg.info.assign("COAZBPYQCSRXBJRKTSLAZNZTSADLYDFZKAQKUZWEHAYEWHGOSPVTRADLPDOJBBDGENCXUYQBQEZGUJBSUSTPSCVJVJGABNIXXVGMHAWZKDZPNSJLJFNVGIKUOMDMHFXQWUPKEIIAEZKPMMUVTLOLUHCIMYLSRYMRGBLMOIMXGJCWLCYFDNHNNPIXKPVJFSKRWNAIQTDFWGGXQBYQHFTBMQETWFCJFOKLWCPREFDZIHONERXORVTRYV");
    msg.range = 0.3285996916264985;

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
    msg.setTimeStamp(0.5433136405615987);
    msg.setSource(51020U);
    msg.setSourceEntity(88U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(97U);
    msg.system.assign("JFVYPACMQYQZCBSLDIVRTEANEFMTIMMHFAIIZOOKEQNRXGCDMEZKLGUHBDYBQZXUPTQCKPUYHDPTRDBYGHJANERITUBVPFBPVFJF");
    msg.op = 247U;

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
    msg.setTimeStamp(0.17787664055977537);
    msg.setSource(30981U);
    msg.setSourceEntity(191U);
    msg.setDestination(10808U);
    msg.setDestinationEntity(101U);
    msg.system.assign("MKTCYXSKLMXWGREZPFSIGOS");
    msg.op = 16U;

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
    msg.setTimeStamp(0.2213206462479952);
    msg.setSource(32706U);
    msg.setSourceEntity(131U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(44U);
    msg.system.assign("TWUXKBIDTMKCCRCLCANSTVWQGOWICFXOUTTEHHPMZFOKXZIQJDNFEPRSYKJZBOUGOSXQKTWQYNVN");
    msg.op = 94U;

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
    msg.setTimeStamp(0.1551801757407626);
    msg.setSource(18213U);
    msg.setSourceEntity(191U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(221U);
    msg.value = -26792;

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
    msg.setTimeStamp(0.1938669608790906);
    msg.setSource(49259U);
    msg.setSourceEntity(193U);
    msg.setDestination(37456U);
    msg.setDestinationEntity(52U);
    msg.value = -32586;

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
    msg.setTimeStamp(0.3961733255336881);
    msg.setSource(58678U);
    msg.setSourceEntity(70U);
    msg.setDestination(35353U);
    msg.setDestinationEntity(87U);
    msg.value = -25441;

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
    msg.setTimeStamp(0.2860061456403161);
    msg.setSource(43391U);
    msg.setSourceEntity(242U);
    msg.setDestination(37856U);
    msg.setDestinationEntity(146U);
    msg.value = 0.7936648130897015;

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
    msg.setTimeStamp(0.17317056242522832);
    msg.setSource(52117U);
    msg.setSourceEntity(66U);
    msg.setDestination(41041U);
    msg.setDestinationEntity(245U);
    msg.value = 0.9932310301791798;

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
    msg.setTimeStamp(0.6644246143664622);
    msg.setSource(52800U);
    msg.setSourceEntity(120U);
    msg.setDestination(57932U);
    msg.setDestinationEntity(91U);
    msg.value = 0.1680349335320982;

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
    msg.setTimeStamp(0.4976258237887672);
    msg.setSource(1250U);
    msg.setSourceEntity(100U);
    msg.setDestination(26575U);
    msg.setDestinationEntity(250U);
    msg.value = 0.4750015409773758;

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
    msg.setTimeStamp(0.8656095482135716);
    msg.setSource(33494U);
    msg.setSourceEntity(164U);
    msg.setDestination(26313U);
    msg.setDestinationEntity(208U);
    msg.value = 0.04598228041983432;

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
    msg.setTimeStamp(0.3340330541374996);
    msg.setSource(60816U);
    msg.setSourceEntity(228U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(74U);
    msg.value = 0.27853990431116893;

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
    msg.setTimeStamp(0.4040957519372269);
    msg.setSource(35506U);
    msg.setSourceEntity(62U);
    msg.setDestination(6285U);
    msg.setDestinationEntity(105U);
    msg.validity = 3837U;
    msg.type = 148U;
    msg.utc_year = 10818U;
    msg.utc_month = 1U;
    msg.utc_day = 210U;
    msg.utc_time = 0.5310203610079015;
    msg.lat = 0.3747113335252128;
    msg.lon = 0.6827101852979142;
    msg.height = 0.9711984816581329;
    msg.satellites = 175U;
    msg.cog = 0.9706723539737234;
    msg.sog = 0.5940047452057922;
    msg.hdop = 0.5409868773477192;
    msg.vdop = 0.6516736747192502;
    msg.hacc = 0.7470531540062532;
    msg.vacc = 0.5453264347628974;

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
    msg.setTimeStamp(0.3796523313084037);
    msg.setSource(34788U);
    msg.setSourceEntity(132U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(37U);
    msg.validity = 57450U;
    msg.type = 214U;
    msg.utc_year = 40457U;
    msg.utc_month = 104U;
    msg.utc_day = 154U;
    msg.utc_time = 0.15083499172692227;
    msg.lat = 0.05730199110773759;
    msg.lon = 0.9005150335853641;
    msg.height = 0.014524507521940011;
    msg.satellites = 70U;
    msg.cog = 0.6817914458637163;
    msg.sog = 0.7750616548583588;
    msg.hdop = 0.7800328637966564;
    msg.vdop = 0.7297191306132065;
    msg.hacc = 0.5168147904377524;
    msg.vacc = 0.05409191127418955;

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
    msg.setTimeStamp(0.8747990728149748);
    msg.setSource(14298U);
    msg.setSourceEntity(42U);
    msg.setDestination(56357U);
    msg.setDestinationEntity(218U);
    msg.validity = 46630U;
    msg.type = 229U;
    msg.utc_year = 56070U;
    msg.utc_month = 207U;
    msg.utc_day = 44U;
    msg.utc_time = 0.38665851098259507;
    msg.lat = 0.2842636303600774;
    msg.lon = 0.840997018614405;
    msg.height = 0.07899389082031183;
    msg.satellites = 40U;
    msg.cog = 0.624317942091888;
    msg.sog = 0.2682419534402345;
    msg.hdop = 0.33126907161951336;
    msg.vdop = 0.2372744622806574;
    msg.hacc = 0.95246735637554;
    msg.vacc = 0.20275936905722647;

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
    msg.setTimeStamp(0.9203271631052994);
    msg.setSource(33507U);
    msg.setSourceEntity(180U);
    msg.setDestination(56551U);
    msg.setDestinationEntity(14U);
    msg.time = 0.27181635478744115;
    msg.phi = 0.47523480990814604;
    msg.theta = 0.41298217754462363;
    msg.psi = 0.2747714317587473;
    msg.psi_magnetic = 0.20044461025140514;

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
    msg.setTimeStamp(0.9869520023983851);
    msg.setSource(32311U);
    msg.setSourceEntity(91U);
    msg.setDestination(42038U);
    msg.setDestinationEntity(83U);
    msg.time = 0.7363392214200897;
    msg.phi = 0.6170887522534952;
    msg.theta = 0.8636939134593719;
    msg.psi = 0.6163699323434229;
    msg.psi_magnetic = 0.377748146482917;

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
    msg.setTimeStamp(0.7651666358527895);
    msg.setSource(37401U);
    msg.setSourceEntity(60U);
    msg.setDestination(2915U);
    msg.setDestinationEntity(54U);
    msg.time = 0.166626139591055;
    msg.phi = 0.708612297082448;
    msg.theta = 0.48346218949914477;
    msg.psi = 0.7862763880225228;
    msg.psi_magnetic = 0.1887165381771485;

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
    msg.setTimeStamp(0.45216098603379273);
    msg.setSource(12168U);
    msg.setSourceEntity(114U);
    msg.setDestination(47162U);
    msg.setDestinationEntity(77U);
    msg.time = 0.48733121445420624;
    msg.x = 0.6871360687322973;
    msg.y = 0.8366858437114065;
    msg.z = 0.262517826552221;
    msg.timestep = 0.32063480160236035;

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
    msg.setTimeStamp(0.4433079456570038);
    msg.setSource(63959U);
    msg.setSourceEntity(35U);
    msg.setDestination(42265U);
    msg.setDestinationEntity(187U);
    msg.time = 0.4903461783700188;
    msg.x = 0.48000893257997634;
    msg.y = 0.5358001367299654;
    msg.z = 0.7104227714317317;
    msg.timestep = 0.8690796422517967;

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
    msg.setTimeStamp(0.6160928816605191);
    msg.setSource(32787U);
    msg.setSourceEntity(95U);
    msg.setDestination(45953U);
    msg.setDestinationEntity(196U);
    msg.time = 0.9407498499248143;
    msg.x = 0.4327717847569077;
    msg.y = 0.25931744458159567;
    msg.z = 0.4864256742323638;
    msg.timestep = 0.567877810477359;

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
    msg.setTimeStamp(0.3339314569155819);
    msg.setSource(41296U);
    msg.setSourceEntity(139U);
    msg.setDestination(33151U);
    msg.setDestinationEntity(194U);
    msg.time = 0.6734530640392417;
    msg.x = 0.6710339252828583;
    msg.y = 0.7807306398728647;
    msg.z = 0.18169561300008463;

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
    msg.setTimeStamp(0.585729335234512);
    msg.setSource(6091U);
    msg.setSourceEntity(134U);
    msg.setDestination(45483U);
    msg.setDestinationEntity(242U);
    msg.time = 0.8413384522964209;
    msg.x = 0.36967343206060865;
    msg.y = 0.26260425729905124;
    msg.z = 0.99526714717021;

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
    msg.setTimeStamp(0.8154810721765627);
    msg.setSource(22346U);
    msg.setSourceEntity(154U);
    msg.setDestination(29804U);
    msg.setDestinationEntity(186U);
    msg.time = 0.9453977656539112;
    msg.x = 0.13864067203283248;
    msg.y = 0.0529528402410383;
    msg.z = 0.9439265711639296;

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
    msg.setTimeStamp(0.3647429911179626);
    msg.setSource(30774U);
    msg.setSourceEntity(197U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(52U);
    msg.time = 0.1113400883618133;
    msg.x = 0.10449765862728122;
    msg.y = 0.10138028676731359;
    msg.z = 0.8816442708457279;

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
    msg.setTimeStamp(0.2666880579421218);
    msg.setSource(1949U);
    msg.setSourceEntity(34U);
    msg.setDestination(27708U);
    msg.setDestinationEntity(117U);
    msg.time = 0.8040875884134701;
    msg.x = 0.10397295541589668;
    msg.y = 0.2859811604175212;
    msg.z = 0.2859190856403925;

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
    msg.setTimeStamp(0.27047748878655553);
    msg.setSource(6359U);
    msg.setSourceEntity(94U);
    msg.setDestination(24941U);
    msg.setDestinationEntity(106U);
    msg.time = 0.8818583466045585;
    msg.x = 0.33307048361449454;
    msg.y = 0.21939224837738813;
    msg.z = 0.012393165554050678;

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
    msg.setTimeStamp(0.029501253664137694);
    msg.setSource(6098U);
    msg.setSourceEntity(170U);
    msg.setDestination(18886U);
    msg.setDestinationEntity(202U);
    msg.time = 0.8130084650891901;
    msg.x = 0.5838636818524736;
    msg.y = 0.269316157601602;
    msg.z = 0.10286749353842195;

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
    msg.setTimeStamp(0.6198782885672461);
    msg.setSource(5751U);
    msg.setSourceEntity(174U);
    msg.setDestination(55847U);
    msg.setDestinationEntity(248U);
    msg.time = 0.07174763192116052;
    msg.x = 0.27753480356750293;
    msg.y = 0.8019972310390572;
    msg.z = 0.6338447097491826;

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
    msg.setTimeStamp(0.4444733820365504);
    msg.setSource(65191U);
    msg.setSourceEntity(68U);
    msg.setDestination(33971U);
    msg.setDestinationEntity(161U);
    msg.time = 0.4975479429572922;
    msg.x = 0.2519358790827666;
    msg.y = 0.5505909560750212;
    msg.z = 0.07005467570383539;

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
    msg.setTimeStamp(0.4241771675884348);
    msg.setSource(58392U);
    msg.setSourceEntity(234U);
    msg.setDestination(6805U);
    msg.setDestinationEntity(221U);
    msg.validity = 147U;
    msg.x = 0.531745378142429;
    msg.y = 0.11294044477619358;
    msg.z = 0.9440876161431475;

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
    msg.setTimeStamp(0.13452710840366255);
    msg.setSource(21588U);
    msg.setSourceEntity(232U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(213U);
    msg.validity = 162U;
    msg.x = 0.5252881045254455;
    msg.y = 0.6503237871109807;
    msg.z = 0.7267389748247003;

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
    msg.setTimeStamp(0.6259778177187196);
    msg.setSource(31727U);
    msg.setSourceEntity(246U);
    msg.setDestination(40474U);
    msg.setDestinationEntity(173U);
    msg.validity = 203U;
    msg.x = 0.4504438847982212;
    msg.y = 0.07985287938438179;
    msg.z = 0.32837496507397346;

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
    msg.setTimeStamp(0.9059702451646019);
    msg.setSource(17772U);
    msg.setSourceEntity(154U);
    msg.setDestination(27983U);
    msg.setDestinationEntity(103U);
    msg.validity = 122U;
    msg.x = 0.6452614288143235;
    msg.y = 0.5043757722039348;
    msg.z = 0.20938131018608408;

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
    msg.setTimeStamp(0.5090993812719294);
    msg.setSource(58136U);
    msg.setSourceEntity(221U);
    msg.setDestination(19430U);
    msg.setDestinationEntity(155U);
    msg.validity = 162U;
    msg.x = 0.05798402412187298;
    msg.y = 0.812400496369944;
    msg.z = 0.5208057453537676;

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
    msg.setTimeStamp(0.25589395459704567);
    msg.setSource(47276U);
    msg.setSourceEntity(61U);
    msg.setDestination(32266U);
    msg.setDestinationEntity(242U);
    msg.validity = 9U;
    msg.x = 0.450528380735679;
    msg.y = 0.8151157474264431;
    msg.z = 0.5126825991191256;

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
    msg.setTimeStamp(0.41078125399660315);
    msg.setSource(57707U);
    msg.setSourceEntity(220U);
    msg.setDestination(61083U);
    msg.setDestinationEntity(212U);
    msg.time = 0.059099487294367425;
    msg.x = 0.39260049042354683;
    msg.y = 0.2553148846557225;
    msg.z = 0.07599262509569404;

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
    msg.setTimeStamp(0.678443796098111);
    msg.setSource(64613U);
    msg.setSourceEntity(150U);
    msg.setDestination(61572U);
    msg.setDestinationEntity(78U);
    msg.time = 0.20604684759715253;
    msg.x = 0.4479688241791767;
    msg.y = 0.47448766844745005;
    msg.z = 0.11922157338986872;

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
    msg.setTimeStamp(0.5671706311066725);
    msg.setSource(17984U);
    msg.setSourceEntity(83U);
    msg.setDestination(31795U);
    msg.setDestinationEntity(175U);
    msg.time = 0.13141402664584223;
    msg.x = 0.4543289190592342;
    msg.y = 0.36773846760696205;
    msg.z = 0.40817330843828004;

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
    msg.setTimeStamp(0.9664576671433586);
    msg.setSource(7610U);
    msg.setSourceEntity(59U);
    msg.setDestination(33473U);
    msg.setDestinationEntity(21U);
    msg.validity = 163U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.99657692608341;
    tmp_msg_0.beam_height = 0.33148602944136796;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6367103541083132;

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
    msg.setTimeStamp(0.9835120373620051);
    msg.setSource(42011U);
    msg.setSourceEntity(178U);
    msg.setDestination(61005U);
    msg.setDestinationEntity(159U);
    msg.validity = 235U;
    msg.value = 0.935784782156621;

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
    msg.setTimeStamp(0.722527529719487);
    msg.setSource(8044U);
    msg.setSourceEntity(222U);
    msg.setDestination(19726U);
    msg.setDestinationEntity(27U);
    msg.validity = 35U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5782169609252935;
    tmp_msg_0.beam_height = 0.6639958425638294;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4740358327230223;

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
    msg.setTimeStamp(0.6226471775995873);
    msg.setSource(54790U);
    msg.setSourceEntity(205U);
    msg.setDestination(61048U);
    msg.setDestinationEntity(123U);
    msg.value = 0.44788698941749794;

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
    msg.setTimeStamp(0.9720945086674283);
    msg.setSource(17231U);
    msg.setSourceEntity(39U);
    msg.setDestination(65419U);
    msg.setDestinationEntity(147U);
    msg.value = 0.43175925508949764;

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
    msg.setTimeStamp(0.8017877698335417);
    msg.setSource(15166U);
    msg.setSourceEntity(61U);
    msg.setDestination(28695U);
    msg.setDestinationEntity(79U);
    msg.value = 0.7879684358584084;

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
    msg.setTimeStamp(0.3054399965875363);
    msg.setSource(16613U);
    msg.setSourceEntity(216U);
    msg.setDestination(52609U);
    msg.setDestinationEntity(11U);
    msg.value = 0.35018128976437435;

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
    msg.setTimeStamp(0.4400799432519277);
    msg.setSource(47296U);
    msg.setSourceEntity(207U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(33U);
    msg.value = 0.9482754940868046;

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
    msg.setTimeStamp(0.8269907130422461);
    msg.setSource(13812U);
    msg.setSourceEntity(142U);
    msg.setDestination(46366U);
    msg.setDestinationEntity(69U);
    msg.value = 0.837274605100611;

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
    msg.setTimeStamp(0.894276741551136);
    msg.setSource(7704U);
    msg.setSourceEntity(234U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9146306645286452;

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
    msg.setTimeStamp(0.9479735235648146);
    msg.setSource(36909U);
    msg.setSourceEntity(31U);
    msg.setDestination(16597U);
    msg.setDestinationEntity(185U);
    msg.value = 0.8491826473195953;

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
    msg.setTimeStamp(0.4567508834722205);
    msg.setSource(33989U);
    msg.setSourceEntity(201U);
    msg.setDestination(17278U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6888608723270856;

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
    msg.setTimeStamp(0.9209289630007428);
    msg.setSource(2053U);
    msg.setSourceEntity(40U);
    msg.setDestination(28215U);
    msg.setDestinationEntity(33U);
    msg.value = 0.14550151691689373;

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
    msg.setTimeStamp(0.9801383294360093);
    msg.setSource(12313U);
    msg.setSourceEntity(167U);
    msg.setDestination(11209U);
    msg.setDestinationEntity(152U);
    msg.value = 0.4471882584155359;

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
    msg.setTimeStamp(0.58302511739826);
    msg.setSource(22727U);
    msg.setSourceEntity(114U);
    msg.setDestination(15144U);
    msg.setDestinationEntity(37U);
    msg.value = 0.24200369419420698;

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
    msg.setTimeStamp(0.07742285545799521);
    msg.setSource(16097U);
    msg.setSourceEntity(155U);
    msg.setDestination(427U);
    msg.setDestinationEntity(215U);
    msg.value = 0.3352148336485691;

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
    msg.setTimeStamp(0.2849034912330206);
    msg.setSource(38867U);
    msg.setSourceEntity(251U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(32U);
    msg.value = 0.3453233105960358;

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
    msg.setTimeStamp(0.7340451473196337);
    msg.setSource(3777U);
    msg.setSourceEntity(58U);
    msg.setDestination(22590U);
    msg.setDestinationEntity(202U);
    msg.value = 0.5213039437924486;

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
    msg.setTimeStamp(0.8463583447711269);
    msg.setSource(45292U);
    msg.setSourceEntity(149U);
    msg.setDestination(58486U);
    msg.setDestinationEntity(247U);
    msg.value = 0.8163057324529505;

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
    msg.setTimeStamp(0.5629566373765804);
    msg.setSource(14702U);
    msg.setSourceEntity(203U);
    msg.setDestination(45013U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5663210742922646;

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
    msg.setTimeStamp(0.9860497558739042);
    msg.setSource(44359U);
    msg.setSourceEntity(78U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(182U);
    msg.value = 0.33857325226447155;

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
    msg.setTimeStamp(0.9984180518061752);
    msg.setSource(37358U);
    msg.setSourceEntity(22U);
    msg.setDestination(60619U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8770946590363058;

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
    msg.setTimeStamp(0.10352519002981497);
    msg.setSource(10940U);
    msg.setSourceEntity(136U);
    msg.setDestination(1768U);
    msg.setDestinationEntity(3U);
    msg.value = 0.22915812589498108;

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
    msg.setTimeStamp(0.465540863711828);
    msg.setSource(35394U);
    msg.setSourceEntity(89U);
    msg.setDestination(12641U);
    msg.setDestinationEntity(101U);
    msg.value = 0.42458894266808533;

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
    msg.setTimeStamp(0.8500564545991998);
    msg.setSource(53400U);
    msg.setSourceEntity(106U);
    msg.setDestination(13857U);
    msg.setDestinationEntity(57U);
    msg.value = 0.28185929178398794;

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
    msg.setTimeStamp(0.01946697621807003);
    msg.setSource(19775U);
    msg.setSourceEntity(33U);
    msg.setDestination(2469U);
    msg.setDestinationEntity(128U);
    msg.value = 0.3636638498084561;

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
    msg.setTimeStamp(0.5609002906912639);
    msg.setSource(12396U);
    msg.setSourceEntity(250U);
    msg.setDestination(62400U);
    msg.setDestinationEntity(106U);
    msg.value = 0.4058081640446304;

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
    msg.setTimeStamp(0.7144704309496626);
    msg.setSource(27065U);
    msg.setSourceEntity(202U);
    msg.setDestination(40564U);
    msg.setDestinationEntity(115U);
    msg.direction = 0.39013285902026285;
    msg.speed = 0.4492268425819671;
    msg.turbulence = 0.2913591522228246;

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
    msg.setTimeStamp(0.9635706724236115);
    msg.setSource(9362U);
    msg.setSourceEntity(224U);
    msg.setDestination(24172U);
    msg.setDestinationEntity(184U);
    msg.direction = 0.16862659214361952;
    msg.speed = 0.9986235206487747;
    msg.turbulence = 0.9545589921613455;

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
    msg.setTimeStamp(0.5006355891617974);
    msg.setSource(62220U);
    msg.setSourceEntity(12U);
    msg.setDestination(61394U);
    msg.setDestinationEntity(112U);
    msg.direction = 0.17216151249229517;
    msg.speed = 0.09295728631217148;
    msg.turbulence = 0.1253429408104365;

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
    msg.setTimeStamp(0.10821057023297298);
    msg.setSource(53787U);
    msg.setSourceEntity(247U);
    msg.setDestination(43623U);
    msg.setDestinationEntity(95U);
    msg.value = 0.8726103110706572;

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
    msg.setTimeStamp(0.7410622324669918);
    msg.setSource(12562U);
    msg.setSourceEntity(87U);
    msg.setDestination(48036U);
    msg.setDestinationEntity(33U);
    msg.value = 0.6168768749201979;

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
    msg.setTimeStamp(0.4054356062052681);
    msg.setSource(1625U);
    msg.setSourceEntity(90U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5429392565354436;

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
    msg.setTimeStamp(0.20417955790087794);
    msg.setSource(20339U);
    msg.setSourceEntity(206U);
    msg.setDestination(59397U);
    msg.setDestinationEntity(117U);
    msg.value.assign("LUVVRLQJBWASDWCTZTVJSRQDMHRTOFNAOEXXNZUIYDMEIKEUKBUIPCMRGWSAVHLLVGBDTVGGYPQEZEDRFHEMHHYWFKMSUDUTJBNQYLKARIYZOOKFZJJOQQWPYLVYYHUNDLBSCZFTJIELGBBTFXFGGJXPYMJDIDHNCOUP");

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
    msg.setTimeStamp(0.9587256864652186);
    msg.setSource(11053U);
    msg.setSourceEntity(163U);
    msg.setDestination(17131U);
    msg.setDestinationEntity(0U);
    msg.value.assign("WBJOSBFVHNJIINIDTBFKUYMJMWMQFSPAFJOAEIG");

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
    msg.setTimeStamp(0.07381461256818356);
    msg.setSource(4652U);
    msg.setSourceEntity(94U);
    msg.setDestination(41731U);
    msg.setDestinationEntity(197U);
    msg.value.assign("GEZPRNBIGRYHXUTFOJAHVWISISLJKIBOEGXCTRZCKLPXSNBXARICTMPTVDWWSTLIQKDCZQAYKMVTNHDSDUXXZQMAQWEAERAAIHRHQBKEBZOFVZMFBFMVPNGGUVOVWBIP");

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
    msg.setTimeStamp(0.5852872810897667);
    msg.setSource(20277U);
    msg.setSourceEntity(181U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(35U);
    const signed char tmp_msg_0[] = {33, -103, 81, 66, 54, 42, 4, 46, -103, -90, 64, -93, -8, 111, -14, -52, 13, 95, 54, -63, 107, 110, -127, 1, -79, 55, -39, 59, -18, 98, -54, 61, 0, -52, -85, -125, 124, 13, 64, -13, -80, 12, 14, -29, 84, -107, 49, 20, 23, -20, 93, 89, 79, 37, 100, 4, -108, -72, -1, 21, -30, 75, -26, 81, 104, 3, -109, 32, -91, -104};
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
    msg.setTimeStamp(0.9226429284920352);
    msg.setSource(61571U);
    msg.setSourceEntity(217U);
    msg.setDestination(24285U);
    msg.setDestinationEntity(130U);
    const signed char tmp_msg_0[] = {45, 42, -51, -62, -42, 59, -121, 126, -14, 16, -100, -106, -48, 21, 124, 29, 3, 90, -72, 71, -103, -2, 60, -71, 107, -77, -87, 123, -25, -102, 51, -113, 51, -26, -70, 69, 8, 98, 115, -58, 60, 104, 53, -4, -41, -128, 119, 120, -64, -24, -17, 16, -120, -115, 5, 20, 94, -8, -104, -17, 75, -97, 92, 19, -79, 115, -35, 15, 67, 62, -124, -88, 74, -15, 111, 83, -109, -38, -94, 31, 6, -43, 121, 13, -127, 54, 17, 94, 22, -10, -30, 56, 91, -34, 124, -62, -23, 16, -123, -6, 9, 94, -127, -123, -106, 5, 2, 72, -76, -51, 78, 91, -5, 111, 67, 125, -95, -128, 62, 104, -20, 83, -87, 5, -9, 47, -91, -37, -5, -12, 4, 115, 14, 72, -70, -43, -9, 51, 98, -3, -18, 94, -65, 105, -29, -22, 58, 26, 66, 62, -84, 70, -20, -102, 56, 121, 67, 36, -92, 57, 68, 112, -54, -17, -60, -123, 93, 85, 40, -12, -72, 61, 104, -91, -23, -49, 76, 19, -35, -1, -125, 92, -68, 98, -9, -51, 54, -112, -72, 44, 6, -100, -8, 59, 23, 105, 43, 15, 102, 55, -51, -116, -93, -9, 107, 103, 109, -108, -101, -68, 55, 100, -28, 100, -115, 12, 41, 62, 19, -32, -84, 64, 19, -84, 45, 29, -85, 97, -110, 19, -45, -54, -29, -100, -14, 80, 37, 96, -108, 10, 108, 81};
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
    msg.setTimeStamp(0.1859512392670587);
    msg.setSource(64162U);
    msg.setSourceEntity(96U);
    msg.setDestination(37037U);
    msg.setDestinationEntity(65U);
    const signed char tmp_msg_0[] = {-109, -47, 13, -4, -29, -99, 96, 3, 122, -120, 64, 126, 81, -87, -25, -112, 105, -49, 36, 19, 39, -70, 8, -92, -73, -53, 31, -44, -103, -56, -51, -41, -100, 12, -72, -19, 21, -52, 118, 5, 56, 45, -3, 85, -40, -60, -86, -29, -83, 24, 3, 29, 121, -17, -84, -12, 5, -105, -92, -119, -13, -13, 112, 117, -57, 87, -51, 85, -75, 65, 120, -43, -69, 118, 19, 59, 113, -44, 100, -2, 124, -88, -60, -16, -86, 43, -11, 93, 68, -40, -16, -13, -128, 31, -63, 107, -90, -1, -88, -79, -28, -53, -96, -125, -60, -119, 11, -75, 72, -33, 86, 70, -90, 32, 60, 98, 36, 43, -127, -108, -18, 58, 116, -82, -83, 115, 22, -24, -108, 55, -86, -19, 124, -7, -59, 111, 34, 81, 34, -73, 41, 26, 30, -26, 52, -72, 109, -3, -70, 90, 108, 101, 37, -1, -112, 21, -16, 7, -66, -10, -27, -3, 14, 7, 97, -29, 76, -23, 97, -13, 14, 48, 8, -124, 44, 112, -111, -32, 116, -44, -4, -23, 64, -4, -47, 45, -83, 111, -88, 24};
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
    msg.setTimeStamp(0.1824427475986139);
    msg.setSource(58022U);
    msg.setSourceEntity(152U);
    msg.setDestination(14489U);
    msg.setDestinationEntity(7U);
    msg.value = 0.06028174547071652;

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
    msg.setTimeStamp(0.029221514145543304);
    msg.setSource(58022U);
    msg.setSourceEntity(83U);
    msg.setDestination(35610U);
    msg.setDestinationEntity(71U);
    msg.value = 0.2980313196221692;

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
    msg.setTimeStamp(0.13036907659736574);
    msg.setSource(24353U);
    msg.setSourceEntity(140U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(141U);
    msg.value = 0.2720769767780751;

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
    msg.setTimeStamp(0.3774541775445779);
    msg.setSource(52812U);
    msg.setSourceEntity(13U);
    msg.setDestination(34378U);
    msg.setDestinationEntity(84U);
    msg.type = 96U;
    msg.frequency = 498879867U;
    msg.min_range = 2535U;
    msg.max_range = 63841U;
    msg.bits_per_point = 134U;
    msg.scale_factor = 0.465566959293079;
    const signed char tmp_msg_0[] = {-108, 6, 88, -79, -6, -40, 33, 82, -17, 76, 33, -42, -37, -104, 71, 57, 70, -22, -54, 24, 13, -69, -114, 5, 2, 22, -25, -57, 47, -110, 16, -115, 59, -75, -72, 23, 109, -39, 41, -121, -85, -62, 79, 3, -50, 85, 107, 5, -104, 57, 69, -75, -86, 5, -121, 37, -27, 110, -75, -120, 115, 55, -12, 12, -50, -123, -39, -97, -81, 15, 86, -97, -119, 123, -116, 83, -41, -103, 79, 15, -89, 48, -17, 99, 70, -2, 112, -42, 75, 77, 113, 78, -5, -111, -14, -95, 39, -32, 63, 125, -98, -54, -16, 93, -119, 91, -3, -124, -8, -30, 95, 35, -74, 77, 73, 101, 44, -77, 116, -33, -56, -60, -58, -116, 75, 57, 42, 21, -116, 67, 88, 95, 115, 17, -67, 70, -49, -89, -69, -29, 85, -119, -7, 125, -71, -125, -87, 83, 6, 26, 113, -100, -113, 103, 104, -23, -34, -89, 87, 5, -57, 52, 115, 10, -85, 21, 70, 21, 71, 27, -81, 88, 125, 72, -119, -96, 47, -106, -26, 46, -60, 80, -85, 122, -74, 84, 38, -46, -66, 7, 18, -82, 30, 2, 72, -54, 37, -86, -47, 118, -81, -112, -49, 44, 104, -51, -24, -115, 15, 124, -67, -113, 105, 29, -91, 23, -124, 98, -105, -79, -65, 125, 46, 59, -119, 29, -102, 117, -75, 98, 77, 53, 69, 19, 10, 89, -23, -7, -26, -62, 32, -3, 30, -76, -47};
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
    msg.setTimeStamp(0.19364410145914757);
    msg.setSource(4073U);
    msg.setSourceEntity(36U);
    msg.setDestination(45122U);
    msg.setDestinationEntity(27U);
    msg.type = 96U;
    msg.frequency = 3304965927U;
    msg.min_range = 37877U;
    msg.max_range = 51239U;
    msg.bits_per_point = 23U;
    msg.scale_factor = 0.1336592693976788;
    const signed char tmp_msg_0[] = {26, -70, -120, -127, -50, 113, -19, 110, -94, -47, -63, 105, 10, -78, 27, -27, -104, -19, -35, -94, 13, -93, -57, -54, -9, -92, 41, 118, -110, -107, 101, 12, -111, 19, -36, -20, -36, 90, 37, 2, -94, 9, 66, 28, -120, 37, 7, -45, 74, -24, -93, -26, -126, -47, 11, -63, -36, 120, 100, 23, 54, -3, 89, 5, -54, -47, -42, -69, -125, 49, -16, 124, -75, -60, -48, -102, 30, -28, 44, -77, -6, 82, -76, -92, 102, 103, 20, 119, 24, 76, -115, -26, -97, -32, 27, 5, -45, 14, -21, -52, -83, 60, 59, 19, 62, -124, 93, 78, -48, 19, 101, -61, -121, -4, -69, 120, 54, 106, 105, 34, -62, 13, -116, -103, 1, 70, 103, 79, -125, -95, -120, 26, -68, -1, 97, 7, -63, 120, 9, 20, -36};
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
    msg.setTimeStamp(0.597442129165195);
    msg.setSource(64367U);
    msg.setSourceEntity(209U);
    msg.setDestination(59383U);
    msg.setDestinationEntity(170U);
    msg.type = 86U;
    msg.frequency = 675962472U;
    msg.min_range = 48114U;
    msg.max_range = 7961U;
    msg.bits_per_point = 103U;
    msg.scale_factor = 0.8244519509374102;
    const signed char tmp_msg_0[] = {-1, -100, -10, 15, -45, 77, 11, 8, -19, -35, -64, -85, -47, -80, 52, 27, -128, 16, 7, -40, -28, 111, 54, 49, 106, -6, -65, 13, -27, 39, 121, 47, -77, 69, 100, 16, -74, -100, -46, -5, 48, 113, 1, 89, 102, 122, 39, -117, 88, -72, 55, 107, -57, -86, 70, 13, -46, -52, 66, 9, 73, -60, 2, -45, -69, -31, 11, -84, -107, -21, -18, -125, 32, -124, 25, -103, 96, -23, -12, 111, 36, 70, 25, -56, 29, -4, 92, -112, 47, -20, -44, 14, -27, 94, 123, 94, -74, 60, 22, 25, -4, 25, -123, -22, 120, -4, 17, 57, 30, -113, 14, -100, -16, 28, 19, 45, -7, 17, 41, -40, -97, 69, 5, 76, 96, -20, 22, -122, -63, 90, 3, -20, 77, 102, -109, 7, -108, -8, -29, -81, 81, -84, 103, -59, -122, -30, -104, 24, -3, -74, 31, 84, 50, 67, -49, 16};
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
    msg.setTimeStamp(0.3272126040491209);
    msg.setSource(19768U);
    msg.setSourceEntity(205U);
    msg.setDestination(59502U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.7702439017381051);
    msg.setSource(61084U);
    msg.setSourceEntity(138U);
    msg.setDestination(1240U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.2737874479527088);
    msg.setSource(54314U);
    msg.setSourceEntity(233U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.38724877603576646);
    msg.setSource(25041U);
    msg.setSourceEntity(126U);
    msg.setDestination(12151U);
    msg.setDestinationEntity(87U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.6452999854115711);
    msg.setSource(929U);
    msg.setSourceEntity(151U);
    msg.setDestination(18897U);
    msg.setDestinationEntity(160U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.0025452297865409257);
    msg.setSource(2904U);
    msg.setSourceEntity(251U);
    msg.setDestination(62120U);
    msg.setDestinationEntity(146U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.7073819303041164);
    msg.setSource(12631U);
    msg.setSourceEntity(212U);
    msg.setDestination(34488U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7449847868301382;
    msg.confidence = 0.38818938111098644;
    msg.opmodes.assign("JPEFJMVLJHEZICJRDGNYMJOIHBKMPIVQVDKEXVNCXHIOASZUBWYLRQWZHKLAFPNDXRRWRHBSGTEXUUFVAQESKPKRUJFBBNYTAEXPXAOBTIVBDZIUNHFUY");

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
    msg.setTimeStamp(0.6148144547705775);
    msg.setSource(64248U);
    msg.setSourceEntity(189U);
    msg.setDestination(38400U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8026028010679285;
    msg.confidence = 0.6965447156002875;
    msg.opmodes.assign("XJINTFUGRELXDRHSVZTDQPCQQNHZPQUYCPVMGRENZXGTNNACDDTJUHHHCY");

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
    msg.setTimeStamp(0.12510373172404354);
    msg.setSource(50031U);
    msg.setSourceEntity(223U);
    msg.setDestination(4447U);
    msg.setDestinationEntity(188U);
    msg.value = 0.6495305099362063;
    msg.confidence = 0.7687829643998859;
    msg.opmodes.assign("HXUOYSZAHBUZAZQIPYDMMZNOPDGOVCQVXFJBUBUBECIFWYDMUYRBWJSGOGVTLWRUNCRHLALLL");

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
    msg.setTimeStamp(0.3436626068919526);
    msg.setSource(40203U);
    msg.setSourceEntity(12U);
    msg.setDestination(18567U);
    msg.setDestinationEntity(167U);
    msg.itow = 1183150929U;
    msg.lat = 0.38320348502031176;
    msg.lon = 0.12995406615048322;
    msg.height_ell = 0.8052622766240887;
    msg.height_sea = 0.7307616844058945;
    msg.hacc = 0.880690402085826;
    msg.vacc = 0.12068602764386982;
    msg.vel_n = 0.0339203274294817;
    msg.vel_e = 0.6934386820223025;
    msg.vel_d = 0.5076322020280367;
    msg.speed = 0.28836511754342964;
    msg.gspeed = 0.8701522932911873;
    msg.heading = 0.4568567552028454;
    msg.sacc = 0.0016226215911636643;
    msg.cacc = 0.5710146567907308;

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
    msg.setTimeStamp(0.46745257161005804);
    msg.setSource(36298U);
    msg.setSourceEntity(240U);
    msg.setDestination(46136U);
    msg.setDestinationEntity(117U);
    msg.itow = 736211604U;
    msg.lat = 0.857413482487547;
    msg.lon = 0.8893924683011856;
    msg.height_ell = 0.30505890299739646;
    msg.height_sea = 0.19202611075010534;
    msg.hacc = 0.5627431235827194;
    msg.vacc = 0.06403275754542037;
    msg.vel_n = 0.7513531545131005;
    msg.vel_e = 0.5330929882335016;
    msg.vel_d = 0.4104715485017606;
    msg.speed = 0.06769140397028828;
    msg.gspeed = 0.4077005444320275;
    msg.heading = 0.7305498029243214;
    msg.sacc = 0.04959502285116291;
    msg.cacc = 0.009221028841636336;

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
    msg.setTimeStamp(0.8898227674338046);
    msg.setSource(46611U);
    msg.setSourceEntity(43U);
    msg.setDestination(17453U);
    msg.setDestinationEntity(4U);
    msg.itow = 419535939U;
    msg.lat = 0.26894997434355705;
    msg.lon = 0.09578553957207292;
    msg.height_ell = 0.05410571696676858;
    msg.height_sea = 0.7696273192691319;
    msg.hacc = 0.02282843861313666;
    msg.vacc = 0.18430045403772977;
    msg.vel_n = 0.6632842864502035;
    msg.vel_e = 0.5250700093563416;
    msg.vel_d = 0.20776218816723668;
    msg.speed = 0.2656594219851922;
    msg.gspeed = 0.3026237416549279;
    msg.heading = 0.19629221292571442;
    msg.sacc = 0.6932742659007176;
    msg.cacc = 0.48376806858686094;

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
    msg.setTimeStamp(0.22836199366343557);
    msg.setSource(19894U);
    msg.setSourceEntity(65U);
    msg.setDestination(8993U);
    msg.setDestinationEntity(205U);
    msg.id = 20U;
    msg.value = 0.29791194442318125;

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
    msg.setTimeStamp(0.3074669683202418);
    msg.setSource(17806U);
    msg.setSourceEntity(17U);
    msg.setDestination(27810U);
    msg.setDestinationEntity(29U);
    msg.id = 201U;
    msg.value = 0.5333558445272744;

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
    msg.setTimeStamp(0.5374089194028574);
    msg.setSource(45544U);
    msg.setSourceEntity(16U);
    msg.setDestination(64992U);
    msg.setDestinationEntity(133U);
    msg.id = 229U;
    msg.value = 0.01955911799067278;

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
    msg.setTimeStamp(0.749460126996438);
    msg.setSource(34657U);
    msg.setSourceEntity(240U);
    msg.setDestination(6731U);
    msg.setDestinationEntity(138U);
    msg.x = 0.36555117062272546;
    msg.y = 0.33058101956043506;
    msg.z = 0.325700214115202;
    msg.phi = 0.03362498041869322;
    msg.theta = 0.8785205463325412;
    msg.psi = 0.8072763095459579;

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
    msg.setTimeStamp(0.05361302576414306);
    msg.setSource(48728U);
    msg.setSourceEntity(69U);
    msg.setDestination(21827U);
    msg.setDestinationEntity(136U);
    msg.x = 0.8200526732202432;
    msg.y = 0.7347970182644701;
    msg.z = 0.7677855604310622;
    msg.phi = 0.3639161829251133;
    msg.theta = 0.6907521228383199;
    msg.psi = 0.09070593820576878;

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
    msg.setTimeStamp(0.3105672038020335);
    msg.setSource(38747U);
    msg.setSourceEntity(244U);
    msg.setDestination(40837U);
    msg.setDestinationEntity(64U);
    msg.x = 0.7482172117739202;
    msg.y = 0.19717925894105082;
    msg.z = 0.5680818392366727;
    msg.phi = 0.15105194054038984;
    msg.theta = 0.25881683056095506;
    msg.psi = 0.42832775904152753;

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
    msg.setTimeStamp(0.9876695905057928);
    msg.setSource(64759U);
    msg.setSourceEntity(126U);
    msg.setDestination(32744U);
    msg.setDestinationEntity(214U);
    msg.beam_width = 0.6388229923189658;
    msg.beam_height = 0.039702282018476365;

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
    msg.setTimeStamp(0.548115473031945);
    msg.setSource(56964U);
    msg.setSourceEntity(69U);
    msg.setDestination(18323U);
    msg.setDestinationEntity(90U);
    msg.beam_width = 0.22278044013877618;
    msg.beam_height = 0.3742624431820647;

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
    msg.setTimeStamp(0.8463385730027226);
    msg.setSource(42705U);
    msg.setSourceEntity(169U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(26U);
    msg.beam_width = 0.1134007493825605;
    msg.beam_height = 0.3757110921175485;

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
    msg.setTimeStamp(0.4754540073517437);
    msg.setSource(20481U);
    msg.setSourceEntity(238U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(119U);
    msg.sane = 161U;

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
    msg.setTimeStamp(0.9352013359385619);
    msg.setSource(31341U);
    msg.setSourceEntity(79U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(157U);
    msg.sane = 138U;

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
    msg.setTimeStamp(0.8164199317437526);
    msg.setSource(45345U);
    msg.setSourceEntity(67U);
    msg.setDestination(10167U);
    msg.setDestinationEntity(109U);
    msg.sane = 66U;

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
    msg.setTimeStamp(0.7862588209093785);
    msg.setSource(63397U);
    msg.setSourceEntity(104U);
    msg.setDestination(60101U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7896590461510773;

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
    msg.setTimeStamp(0.7958204848938629);
    msg.setSource(58982U);
    msg.setSourceEntity(136U);
    msg.setDestination(45776U);
    msg.setDestinationEntity(88U);
    msg.value = 0.008783329799279427;

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
    msg.setTimeStamp(0.8349734408286289);
    msg.setSource(53159U);
    msg.setSourceEntity(177U);
    msg.setDestination(51191U);
    msg.setDestinationEntity(249U);
    msg.value = 0.3131338533765521;

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
    msg.setTimeStamp(0.28430750707494323);
    msg.setSource(13740U);
    msg.setSourceEntity(154U);
    msg.setDestination(58442U);
    msg.setDestinationEntity(25U);
    msg.value = 0.5632339028908977;

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
    msg.setTimeStamp(0.3419524578916233);
    msg.setSource(3322U);
    msg.setSourceEntity(18U);
    msg.setDestination(63392U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6114333198719819;

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
    msg.setTimeStamp(0.9793937967014537);
    msg.setSource(56053U);
    msg.setSourceEntity(133U);
    msg.setDestination(13165U);
    msg.setDestinationEntity(45U);
    msg.value = 0.16699666378725675;

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
    msg.setTimeStamp(0.26388150789197806);
    msg.setSource(4592U);
    msg.setSourceEntity(173U);
    msg.setDestination(15906U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9135450066301363;

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
    msg.setTimeStamp(0.7177214646866037);
    msg.setSource(38753U);
    msg.setSourceEntity(200U);
    msg.setDestination(58342U);
    msg.setDestinationEntity(244U);
    msg.value = 0.4194653245121055;

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
    msg.setTimeStamp(0.18014612130740948);
    msg.setSource(10956U);
    msg.setSourceEntity(66U);
    msg.setDestination(63909U);
    msg.setDestinationEntity(158U);
    msg.value = 0.4582946103115084;

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
    msg.setTimeStamp(0.37018694111947914);
    msg.setSource(49115U);
    msg.setSourceEntity(121U);
    msg.setDestination(30987U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8436378055366022;

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
    msg.setTimeStamp(0.18465595426047032);
    msg.setSource(13146U);
    msg.setSourceEntity(13U);
    msg.setDestination(59785U);
    msg.setDestinationEntity(189U);
    msg.value = 0.07573087465890638;

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
    msg.setTimeStamp(0.7759756003768801);
    msg.setSource(13460U);
    msg.setSourceEntity(249U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(56U);
    msg.value = 0.04860269331634437;

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
    msg.setTimeStamp(0.36444075858729175);
    msg.setSource(17316U);
    msg.setSourceEntity(19U);
    msg.setDestination(39216U);
    msg.setDestinationEntity(217U);
    msg.value = 0.6905715547001028;

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
    msg.setTimeStamp(0.4449416167379522);
    msg.setSource(49061U);
    msg.setSourceEntity(222U);
    msg.setDestination(13697U);
    msg.setDestinationEntity(191U);
    msg.value = 0.020156295387022127;

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
    msg.setTimeStamp(0.5047792477496978);
    msg.setSource(39839U);
    msg.setSourceEntity(201U);
    msg.setDestination(33948U);
    msg.setDestinationEntity(184U);
    msg.value = 0.9869389724105502;

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
    msg.setTimeStamp(0.7477595429881324);
    msg.setSource(52718U);
    msg.setSourceEntity(81U);
    msg.setDestination(35517U);
    msg.setDestinationEntity(227U);
    msg.value = 0.5614516932060908;

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
    msg.setTimeStamp(0.7482576175202584);
    msg.setSource(47103U);
    msg.setSourceEntity(16U);
    msg.setDestination(61852U);
    msg.setDestinationEntity(24U);
    msg.value = 0.72119789463291;

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
    msg.setTimeStamp(0.29322026836828197);
    msg.setSource(52642U);
    msg.setSourceEntity(203U);
    msg.setDestination(45277U);
    msg.setDestinationEntity(181U);
    msg.value = 0.04036814633773922;

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
    msg.setTimeStamp(0.8339346070809368);
    msg.setSource(64501U);
    msg.setSourceEntity(250U);
    msg.setDestination(40194U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9619752954521907;

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
    msg.setTimeStamp(0.4525564173408019);
    msg.setSource(25587U);
    msg.setSourceEntity(71U);
    msg.setDestination(18850U);
    msg.setDestinationEntity(200U);
    msg.value = 0.8916060272891948;

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
    msg.setTimeStamp(0.5902698121856135);
    msg.setSource(54425U);
    msg.setSourceEntity(129U);
    msg.setDestination(2694U);
    msg.setDestinationEntity(165U);
    msg.value = 0.34380342960505283;

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
    msg.setTimeStamp(0.6927709977927559);
    msg.setSource(34884U);
    msg.setSourceEntity(40U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(161U);
    msg.value = 0.4607289425760942;

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
    msg.setTimeStamp(0.718226357828997);
    msg.setSource(8096U);
    msg.setSourceEntity(194U);
    msg.setDestination(30552U);
    msg.setDestinationEntity(115U);
    msg.value = 0.2972267707237064;

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
    msg.setTimeStamp(0.07059999659861538);
    msg.setSource(63061U);
    msg.setSourceEntity(102U);
    msg.setDestination(54760U);
    msg.setDestinationEntity(152U);
    msg.value = 0.22030691179193684;

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
    msg.setTimeStamp(0.8408899090351274);
    msg.setSource(51004U);
    msg.setSourceEntity(29U);
    msg.setDestination(62803U);
    msg.setDestinationEntity(163U);
    msg.validity = 40739U;
    msg.type = 118U;
    msg.tow = 2980757286U;
    msg.base_lat = 0.3910525844277919;
    msg.base_lon = 0.1700195536778384;
    msg.base_height = 0.8759906264263109;
    msg.n = 0.7898627052019237;
    msg.e = 0.18971617650355888;
    msg.d = 0.8152712207592573;
    msg.v_n = 0.8957873258787143;
    msg.v_e = 0.2505755809512573;
    msg.v_d = 0.18757184718534603;
    msg.satellites = 170U;
    msg.iar_hyp = 19205U;
    msg.iar_ratio = 0.7211081565237721;

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
    msg.setTimeStamp(0.5464049945045153);
    msg.setSource(33200U);
    msg.setSourceEntity(242U);
    msg.setDestination(43148U);
    msg.setDestinationEntity(186U);
    msg.validity = 20877U;
    msg.type = 49U;
    msg.tow = 2719912301U;
    msg.base_lat = 0.1280664734958068;
    msg.base_lon = 0.9734561452357009;
    msg.base_height = 0.9789525737619247;
    msg.n = 0.6913628619658617;
    msg.e = 0.6881405346306904;
    msg.d = 0.6335758824005263;
    msg.v_n = 0.8607678512148401;
    msg.v_e = 0.07371151992704539;
    msg.v_d = 0.1224058498519277;
    msg.satellites = 52U;
    msg.iar_hyp = 12938U;
    msg.iar_ratio = 0.5194458116158773;

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
    msg.setTimeStamp(0.4832027574786196);
    msg.setSource(26824U);
    msg.setSourceEntity(84U);
    msg.setDestination(61330U);
    msg.setDestinationEntity(137U);
    msg.validity = 10227U;
    msg.type = 194U;
    msg.tow = 2377356451U;
    msg.base_lat = 0.7363375339488951;
    msg.base_lon = 0.5551544411473605;
    msg.base_height = 0.23595989692976937;
    msg.n = 0.5951397574250549;
    msg.e = 0.41295757563313185;
    msg.d = 0.04251165846540317;
    msg.v_n = 0.5841885397739791;
    msg.v_e = 0.03757827857772633;
    msg.v_d = 0.8499359822575425;
    msg.satellites = 159U;
    msg.iar_hyp = 63607U;
    msg.iar_ratio = 0.6347963186932455;

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
    msg.setTimeStamp(0.6384984604942012);
    msg.setSource(10910U);
    msg.setSourceEntity(77U);
    msg.setDestination(44000U);
    msg.setDestinationEntity(172U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.023530488188590937;
    tmp_msg_0.lon = 0.1880120685776543;
    tmp_msg_0.height = 0.8364124621075938;
    tmp_msg_0.x = 0.6793359539099211;
    tmp_msg_0.y = 0.054083279881398605;
    tmp_msg_0.z = 0.8801400553751771;
    tmp_msg_0.phi = 0.10838196348786167;
    tmp_msg_0.theta = 0.1810967307076139;
    tmp_msg_0.psi = 0.15230203923126184;
    tmp_msg_0.u = 0.9294517775910698;
    tmp_msg_0.v = 0.9005513575304624;
    tmp_msg_0.w = 0.06790963246278714;
    tmp_msg_0.vx = 0.07098225198205;
    tmp_msg_0.vy = 0.6357640360847562;
    tmp_msg_0.vz = 0.04818264574873732;
    tmp_msg_0.p = 0.9165064187043296;
    tmp_msg_0.q = 0.1663977632101944;
    tmp_msg_0.r = 0.06496155461599529;
    tmp_msg_0.depth = 0.24869746530475167;
    tmp_msg_0.alt = 0.9918492002017;
    msg.state.set(tmp_msg_0);
    msg.type = 56U;

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
    msg.setTimeStamp(0.5801688013106274);
    msg.setSource(39724U);
    msg.setSourceEntity(216U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(65U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.05024886229898984;
    tmp_msg_0.lon = 0.6998924863090145;
    tmp_msg_0.height = 0.3461544830379768;
    tmp_msg_0.x = 0.07653399151101836;
    tmp_msg_0.y = 0.5549964182153516;
    tmp_msg_0.z = 0.8371757854598626;
    tmp_msg_0.phi = 0.13301651120608493;
    tmp_msg_0.theta = 0.13825110169793542;
    tmp_msg_0.psi = 0.5146643821041529;
    tmp_msg_0.u = 0.8725149870908359;
    tmp_msg_0.v = 0.9127887316615317;
    tmp_msg_0.w = 0.990116772058641;
    tmp_msg_0.vx = 0.9243279778538911;
    tmp_msg_0.vy = 0.8015346489787601;
    tmp_msg_0.vz = 0.595073435018291;
    tmp_msg_0.p = 0.19753643715464897;
    tmp_msg_0.q = 0.9208536987091236;
    tmp_msg_0.r = 0.8958700358248758;
    tmp_msg_0.depth = 0.5272573260779866;
    tmp_msg_0.alt = 0.9790547486182554;
    msg.state.set(tmp_msg_0);
    msg.type = 184U;

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
    msg.setTimeStamp(0.6155824391443316);
    msg.setSource(25437U);
    msg.setSourceEntity(89U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(141U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.830475571521364;
    tmp_msg_0.lon = 0.8841698920150164;
    tmp_msg_0.height = 0.46791886944888517;
    tmp_msg_0.x = 0.875394095367405;
    tmp_msg_0.y = 0.8157785897263137;
    tmp_msg_0.z = 0.5176808484209351;
    tmp_msg_0.phi = 0.7728625708512219;
    tmp_msg_0.theta = 0.915120379144213;
    tmp_msg_0.psi = 0.40219338819073613;
    tmp_msg_0.u = 0.2626198006817063;
    tmp_msg_0.v = 0.9617618754230348;
    tmp_msg_0.w = 0.29820931852836396;
    tmp_msg_0.vx = 0.8305106278265926;
    tmp_msg_0.vy = 0.851578379604156;
    tmp_msg_0.vz = 0.7331806659823742;
    tmp_msg_0.p = 0.5229796164066599;
    tmp_msg_0.q = 0.8314215633528275;
    tmp_msg_0.r = 0.25326775309456684;
    tmp_msg_0.depth = 0.11585355816595244;
    tmp_msg_0.alt = 0.4666898426721312;
    msg.state.set(tmp_msg_0);
    msg.type = 124U;

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
    msg.setTimeStamp(0.4493779042835264);
    msg.setSource(4268U);
    msg.setSourceEntity(97U);
    msg.setDestination(32647U);
    msg.setDestinationEntity(77U);
    msg.value = 0.2593373332258476;

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
    msg.setTimeStamp(0.7319715999173174);
    msg.setSource(32247U);
    msg.setSourceEntity(63U);
    msg.setDestination(11231U);
    msg.setDestinationEntity(49U);
    msg.value = 0.376695218919194;

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
    msg.setTimeStamp(0.1410844642402912);
    msg.setSource(38758U);
    msg.setSourceEntity(12U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(81U);
    msg.value = 0.18523313139920405;

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
    msg.setTimeStamp(0.24857955514101826);
    msg.setSource(62474U);
    msg.setSourceEntity(10U);
    msg.setDestination(13868U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5791716867783494;

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
    msg.setTimeStamp(0.9639664986368759);
    msg.setSource(38020U);
    msg.setSourceEntity(198U);
    msg.setDestination(49070U);
    msg.setDestinationEntity(76U);
    msg.value = 0.6824328374776045;

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
    msg.setTimeStamp(0.07922480257108899);
    msg.setSource(29321U);
    msg.setSourceEntity(70U);
    msg.setDestination(26049U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9678650395324117;

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
    msg.setTimeStamp(0.6857266483772315);
    msg.setSource(31145U);
    msg.setSourceEntity(3U);
    msg.setDestination(32104U);
    msg.setDestinationEntity(108U);
    msg.value = 0.013292222312279778;

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
    msg.setTimeStamp(0.9611507587929856);
    msg.setSource(41550U);
    msg.setSourceEntity(111U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7209253585503455;

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
    msg.setTimeStamp(0.9182325454841029);
    msg.setSource(57027U);
    msg.setSourceEntity(246U);
    msg.setDestination(51151U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8497693844147769;

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
    msg.setTimeStamp(0.10352487639992658);
    msg.setSource(9324U);
    msg.setSourceEntity(38U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(208U);
    msg.value = 0.13753119030118655;

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
    msg.setTimeStamp(0.34230063667871613);
    msg.setSource(38776U);
    msg.setSourceEntity(128U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(138U);
    msg.value = 0.9872684833661663;

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
    msg.setTimeStamp(0.3702762116455719);
    msg.setSource(61727U);
    msg.setSourceEntity(160U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(166U);
    msg.value = 0.3663509418978679;

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
    msg.setTimeStamp(0.8918209600495988);
    msg.setSource(61552U);
    msg.setSourceEntity(61U);
    msg.setDestination(24670U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6117448051658284;

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
    msg.setTimeStamp(0.3783775332026007);
    msg.setSource(23170U);
    msg.setSourceEntity(132U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5201212155838844;

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
    msg.setTimeStamp(0.32716444937668576);
    msg.setSource(39749U);
    msg.setSourceEntity(119U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(90U);
    msg.value = 0.26554945293596477;

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
    msg.setTimeStamp(0.9078839451793873);
    msg.setSource(31237U);
    msg.setSourceEntity(134U);
    msg.setDestination(1171U);
    msg.setDestinationEntity(202U);
    msg.id = 189U;
    msg.zoom = 96U;
    msg.action = 224U;

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
    msg.setTimeStamp(0.05377288433083083);
    msg.setSource(15730U);
    msg.setSourceEntity(240U);
    msg.setDestination(62287U);
    msg.setDestinationEntity(152U);
    msg.id = 67U;
    msg.zoom = 42U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.47409633229502857);
    msg.setSource(23581U);
    msg.setSourceEntity(81U);
    msg.setDestination(48337U);
    msg.setDestinationEntity(56U);
    msg.id = 35U;
    msg.zoom = 223U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.5682571856110007);
    msg.setSource(49756U);
    msg.setSourceEntity(44U);
    msg.setDestination(4584U);
    msg.setDestinationEntity(252U);
    msg.id = 252U;
    msg.value = 0.3121222068841504;

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
    msg.setTimeStamp(0.9472344936000722);
    msg.setSource(1810U);
    msg.setSourceEntity(166U);
    msg.setDestination(47034U);
    msg.setDestinationEntity(94U);
    msg.id = 217U;
    msg.value = 0.5484325851114452;

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
    msg.setTimeStamp(0.543101645609585);
    msg.setSource(21655U);
    msg.setSourceEntity(167U);
    msg.setDestination(39910U);
    msg.setDestinationEntity(162U);
    msg.id = 125U;
    msg.value = 0.3142270977983699;

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
    msg.setTimeStamp(0.14888400349013053);
    msg.setSource(55261U);
    msg.setSourceEntity(46U);
    msg.setDestination(50863U);
    msg.setDestinationEntity(252U);
    msg.id = 78U;
    msg.value = 0.44264630785709624;

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
    msg.setTimeStamp(0.3744171114815058);
    msg.setSource(19400U);
    msg.setSourceEntity(234U);
    msg.setDestination(54675U);
    msg.setDestinationEntity(58U);
    msg.id = 197U;
    msg.value = 0.6366156586491241;

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
    msg.setTimeStamp(0.06394038679290759);
    msg.setSource(34773U);
    msg.setSourceEntity(121U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(36U);
    msg.id = 126U;
    msg.value = 0.13756718409605007;

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
    msg.setTimeStamp(0.7875903327229156);
    msg.setSource(56974U);
    msg.setSourceEntity(246U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(40U);
    msg.id = 27U;
    msg.angle = 0.3158945683293366;

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
    msg.setTimeStamp(0.1925630080187003);
    msg.setSource(12044U);
    msg.setSourceEntity(200U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(237U);
    msg.id = 112U;
    msg.angle = 0.4928053545379555;

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
    msg.setTimeStamp(0.8696816100543723);
    msg.setSource(64481U);
    msg.setSourceEntity(81U);
    msg.setDestination(1278U);
    msg.setDestinationEntity(163U);
    msg.id = 184U;
    msg.angle = 0.118856787277414;

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
    msg.setTimeStamp(0.5986058175073563);
    msg.setSource(21078U);
    msg.setSourceEntity(222U);
    msg.setDestination(54927U);
    msg.setDestinationEntity(112U);
    msg.op = 58U;
    msg.actions.assign("HZVYFLIWZYTSDIIVPDTOBZUGKIVQEGSUNTOQRJUZEQRURXKTNLAZOYOEVYOBWCMEBUPQFHYSLDACJUCLJMQSNJT");

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
    msg.setTimeStamp(0.16624731282440441);
    msg.setSource(56269U);
    msg.setSourceEntity(92U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(161U);
    msg.op = 0U;
    msg.actions.assign("KDMJEECXFBFGXGEVYWARGYBJGSDVHZLMCGXPQPQFFGLRBFTSFWIGRVENSFRFXUHLHEVKWRNPIBBVSATTBZZNHCQBZYTDNLLIEDMDVXWWVZVPEOIJGSDRKFBRGDH");

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
    msg.setTimeStamp(0.2714570807224884);
    msg.setSource(61781U);
    msg.setSourceEntity(190U);
    msg.setDestination(18411U);
    msg.setDestinationEntity(217U);
    msg.op = 219U;
    msg.actions.assign("VMVDRBAWNJBZOVPHKKZ");

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
    msg.setTimeStamp(0.13381352909880495);
    msg.setSource(46834U);
    msg.setSourceEntity(91U);
    msg.setDestination(51871U);
    msg.setDestinationEntity(79U);
    msg.actions.assign("OFRQAILBWSGARDBBFDTWNKIGSYROPOKFMEUXCXWTVDVIMTGMVPDETYLBXDOSKYSHRLOYWWCVPFZLGMXVEXZZKEOUTJZEAQJPLKXQMCNHC");

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
    msg.setTimeStamp(0.20378776234003304);
    msg.setSource(21025U);
    msg.setSourceEntity(185U);
    msg.setDestination(65069U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("PRGJAFRKLICENXYLNQLMBHTGVFCTPMSZJXOEQZWLZGVDUIRHMFKJPPIPXWVBAAKIYFBVHNNDCXWBERWMRVOVFUBARGXZSYZEUZQMYCQEBYSSPDGLTJMYTUNJBVJDGMGFQOJHATATHKWLONRQHHMYYTOSUSQGCCIMUQVNXALBPKEWUGSHWLAJRDEOWITSXUJKZDKKIDKZRPACNO");

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
    msg.setTimeStamp(0.3923603322328153);
    msg.setSource(48583U);
    msg.setSourceEntity(121U);
    msg.setDestination(10027U);
    msg.setDestinationEntity(78U);
    msg.actions.assign("RZTGDIEQLBEBQFYTSUWZKLKKNYPLJR");

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
    msg.setTimeStamp(0.9197999351939964);
    msg.setSource(6028U);
    msg.setSourceEntity(52U);
    msg.setDestination(278U);
    msg.setDestinationEntity(239U);
    msg.button = 159U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.4004282849888935);
    msg.setSource(61797U);
    msg.setSourceEntity(141U);
    msg.setDestination(17764U);
    msg.setDestinationEntity(207U);
    msg.button = 188U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.26308522008813484);
    msg.setSource(12813U);
    msg.setSourceEntity(98U);
    msg.setDestination(14978U);
    msg.setDestinationEntity(54U);
    msg.button = 39U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.5932898911793878);
    msg.setSource(10812U);
    msg.setSourceEntity(225U);
    msg.setDestination(62504U);
    msg.setDestinationEntity(82U);
    msg.op = 246U;
    msg.text.assign("MFNKKHLGMQYWUESKQZJWIZECOBRABMYFBWNEZUGCPROLFCCNYJNRMXLZFSOUWNAJPXIVTQPELAXPKDMRTESJTJIHQAKFVQSICFYUJKTCODZGDKAXZTEXVRCRKDYTNCGAMJUVMPPNBMYFGRVDDLZSLDAZWHS");

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
    msg.setTimeStamp(0.6718066757610143);
    msg.setSource(41947U);
    msg.setSourceEntity(177U);
    msg.setDestination(58813U);
    msg.setDestinationEntity(215U);
    msg.op = 183U;
    msg.text.assign("BTYYPRZEGEFHQGSNUVOUVZMBFZSGNXZLXXXUWXQVLCQJQEPFDNJNBKCMTAOERYPSIIOGLACFJIGKGPMYIESJRAAVIYRRXLLFWRCNOMXMEKVRSBCUPVKTGUQHUQHVBLALIWPKKPHTRJMLATFTVHKCWSEFUKUOKBHV");

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
    msg.setTimeStamp(0.05587012723521989);
    msg.setSource(48849U);
    msg.setSourceEntity(188U);
    msg.setDestination(58158U);
    msg.setDestinationEntity(163U);
    msg.op = 189U;
    msg.text.assign("CJPKXWZCUMCNAJXFRRPCQXNEPVTGPMOAIPKWCTOYALVQUIVOKGNTXBPNYDVFXGNLYAMSUWVBOVRYNORIJTIGAJLUQKODAZDOAZRMVFTBUEDOFPHMKFLNIVJKZTIBBTIKFUSPAMXWBGHXH");

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
    msg.setTimeStamp(0.23664741375315945);
    msg.setSource(57603U);
    msg.setSourceEntity(189U);
    msg.setDestination(10817U);
    msg.setDestinationEntity(55U);
    msg.op = 19U;
    msg.time_remain = 0.36609759025645683;
    msg.sched_time = 0.5948342311158763;

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
    msg.setTimeStamp(0.31721776771620147);
    msg.setSource(19072U);
    msg.setSourceEntity(47U);
    msg.setDestination(11853U);
    msg.setDestinationEntity(178U);
    msg.op = 55U;
    msg.time_remain = 0.5154598136315846;
    msg.sched_time = 0.3211189196593943;

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
    msg.setTimeStamp(0.07405069571091849);
    msg.setSource(55388U);
    msg.setSourceEntity(174U);
    msg.setDestination(12352U);
    msg.setDestinationEntity(60U);
    msg.op = 168U;
    msg.time_remain = 0.895594332553335;
    msg.sched_time = 0.01323525148230631;

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
    msg.setTimeStamp(0.9625100405863333);
    msg.setSource(241U);
    msg.setSourceEntity(11U);
    msg.setDestination(42801U);
    msg.setDestinationEntity(36U);
    msg.name.assign("JCKQMFPNRFQKTWWOVXMHUKUTKYFRVCWQOWVVTOOHLKNGHGEZKRUMEDDAQZASIZUUPSYLLIVQMBLMYHUOLRPWGWHPPTPENDLHQSIHASFBOUIBNXUFKENDMQOMTOYAIMYNNDGSJRLITHYVSWMCZCEBHIKZEIBXFZXBJIBARLARUTGCOHDWPJZTYAEQLCYXJIYXXGVMZDWNT");
    msg.op = 116U;
    msg.sched_time = 0.3046150662550563;

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
    msg.setTimeStamp(0.22155909109969663);
    msg.setSource(61887U);
    msg.setSourceEntity(208U);
    msg.setDestination(3492U);
    msg.setDestinationEntity(195U);
    msg.name.assign("GKHXQTTNPCJUUAZTIGPATHZBVUSXHELCCYNCOVBWCDGQQXGRNOMSHLJIVBALVKJZOENFCWWFOMJWSAPYQYOUSFLVPPIUSBUGGQKAUEHACBPLMWXPFAFQJILNJEYKDXTKRIHCNDEGIIRJDLZOTMYRBSTOFTFNYQLREUFNKWYOHZCSOSDDTVZV");
    msg.op = 8U;
    msg.sched_time = 0.722446229942243;

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
    msg.setTimeStamp(0.9915541587863862);
    msg.setSource(15835U);
    msg.setSourceEntity(164U);
    msg.setDestination(33665U);
    msg.setDestinationEntity(237U);
    msg.name.assign("DFDUTVPPMVFEKPKSXIZSUSVEZMOLHXJUWJMIKDLAMRXHZQOCFIXJLHWZRRFLNNRYBPRMDMTQJSSHFKFVWTTHMZYGSGQWDCOWOPRLHSOCDSVZCIPCUGUNYVBMZHLEUGAJUAJDFTOENRIXTQENBIFWQAEHYOVIGZMZVQRQIJREPCKZUOQGXEKEBCPWPJJAYPGXOYHYGXCBWNBNKOTSLIADKWALNBAIEQVYWGFAXABDHQU");
    msg.op = 64U;
    msg.sched_time = 0.45526218400176677;

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
    msg.setTimeStamp(0.7747966471171812);
    msg.setSource(47540U);
    msg.setSourceEntity(4U);
    msg.setDestination(43063U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.9399374104066113);
    msg.setSource(46062U);
    msg.setSourceEntity(144U);
    msg.setDestination(37788U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.4458416829276627);
    msg.setSource(33164U);
    msg.setSourceEntity(45U);
    msg.setDestination(54047U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.09760260855338077);
    msg.setSource(18231U);
    msg.setSourceEntity(140U);
    msg.setDestination(5847U);
    msg.setDestinationEntity(138U);
    msg.name.assign("TATXFOPMSLLCAUMJWWEYNEVSQSLRGCPVZCONLDPSFQZKMHOVYKAWKPFXYULAIBKMPHWNJEVKFSLMPSHBQXXDXQZTOUJACMASTIZCTKOHNPJMOT");
    msg.state = 227U;

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
    msg.setTimeStamp(0.9034018175459724);
    msg.setSource(28307U);
    msg.setSourceEntity(204U);
    msg.setDestination(22898U);
    msg.setDestinationEntity(159U);
    msg.name.assign("BGSBJDUTMWLHNEYCAQKNJHNPDMPFNIENIWKGLFYXTJRONOGLGGPFBESZRCUAZSVMQLKJYJMCHFWOTNROREFZNVWXEJBRXSWMQGKPZLCQBTYGIPUIDRMDYRIIWDNAUZCMIVKLUQJZOWYDYKVXALOABULHKFKHSERCRUSQBDTCVMTTDZHOFQUHCA");
    msg.state = 112U;

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
    msg.setTimeStamp(0.20073826525269922);
    msg.setSource(20772U);
    msg.setSourceEntity(40U);
    msg.setDestination(3786U);
    msg.setDestinationEntity(211U);
    msg.name.assign("SWJPKNHQLIPQMWQTEKXTTAOUUWIAVIVLQYHXIPXSYXUHUNNIRLBEFDTLMPLMWKSMSLQNRYDVMQRRHKFCWCDMLAPBTEGALEVKXUBJYPPDDEJBYACVZNVMZCWFSWQAFFXZKWQWNIOGIVGRCRJDJQOCZJMGERDIOXOHYFANNVLYBMTZCHGI");
    msg.state = 145U;

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
    msg.setTimeStamp(0.794188261711585);
    msg.setSource(25592U);
    msg.setSourceEntity(204U);
    msg.setDestination(11720U);
    msg.setDestinationEntity(22U);
    msg.name.assign("KSNXTIWDJGUZAIUOABXGNEOCUYGHSQQTGPHLNPBWFRXOCYHSDXDBMDOEMGYHBTVFILLUCNUSNZAKWMSUUWEZNCSTZJJWVEIHGGRIFLHBQK");
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
    msg.setTimeStamp(0.6038552175875848);
    msg.setSource(54678U);
    msg.setSourceEntity(196U);
    msg.setDestination(10467U);
    msg.setDestinationEntity(198U);
    msg.name.assign("IZRIEJJXUTLKOPFNDCTCFFQSQKGNGEFZFVDNADJGUDBJRDYGAXLCWRNZNDWXQMBHWPGSBRHAMXNYOGLYBLZMUHZAUWMXVERVOCQBITFGECYKB");
    msg.value = 186U;

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
    msg.setTimeStamp(0.5474741993896104);
    msg.setSource(6675U);
    msg.setSourceEntity(54U);
    msg.setDestination(28227U);
    msg.setDestinationEntity(59U);
    msg.name.assign("RPKEWIIAGMAQTJLRFDIJXSYNHQHCXFXIE");
    msg.value = 127U;

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
    msg.setTimeStamp(0.6677206216817044);
    msg.setSource(25088U);
    msg.setSourceEntity(47U);
    msg.setDestination(9070U);
    msg.setDestinationEntity(103U);
    msg.name.assign("SGFIPZMGIBCOWPDXJPJWPVWUXYQTGAJKBTCAMHHDCTOTHTYNVOATRAQPBILQSRULHZWMZAXTYUDNJQIWOWIKRGXWYIDBEYLMZAEUDSXUBJERSENFLLGIKRNUYOVBOYXHUJGMVGOHIALVPJYVKGBMNNCFTVWEEHTMBEZCFXKNSRMEQKXEFILZCSWRPXFKJFVDQLOIRSOKLTAVPUBPNZZUWJDCOYQAHCHHDQGFUB");

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
    msg.setTimeStamp(0.10363882562266069);
    msg.setSource(19936U);
    msg.setSourceEntity(98U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(76U);
    msg.name.assign("PVVXKDAQCMSWMRFDSCVTGRSMXCFFKLEZLWGDAOQGNFAGZSQTUTJRJYWYPXQPZJBSGSYRQLJBGBTBMVXISNAGBMHEYZQIJBPAUOFDIOOSTEGLRMWKMWJUOTUOAZPVWHDZXEDTVIOHIHNEZEGYVIHNTNYZNXYIHKEHJNCCXORZJIDAKUEBFLPDWQILSMPPKBCKVZAUIQAWLO");

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
    msg.setTimeStamp(0.9498568237796425);
    msg.setSource(17986U);
    msg.setSourceEntity(154U);
    msg.setDestination(47893U);
    msg.setDestinationEntity(208U);
    msg.name.assign("QEWIXJVFWJWDZEKJTBKFVZSZHPSDMNUZSXDEEITTQHTHPYMMBELOYVSDVTEOFMNCZKZSQHCDPHBCAFLVTBHXVGCZLQHOYKHLOXGLYRBNXRUWITMQU");

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
    msg.setTimeStamp(0.25002086889694675);
    msg.setSource(9500U);
    msg.setSourceEntity(38U);
    msg.setDestination(18171U);
    msg.setDestinationEntity(204U);
    msg.name.assign("NJCXKZYNKKTAPPUZPDMDLZSLEOUYAXICJGMQ");
    msg.value = 129U;

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
    msg.setTimeStamp(0.019620370474458415);
    msg.setSource(2221U);
    msg.setSourceEntity(19U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(253U);
    msg.name.assign("FNZPRRCMHTDQWDCNLBRKVEQMMKPQIKBQQVVEHZOTJTBGSXRKXRQF");
    msg.value = 175U;

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
    msg.setTimeStamp(0.908180584284176);
    msg.setSource(8628U);
    msg.setSourceEntity(161U);
    msg.setDestination(53956U);
    msg.setDestinationEntity(183U);
    msg.name.assign("LCLECBEREMIOVOHQJUMBYFNGKRFEKMRBVWGCQFSZENPSHIXPGDBTYVABTQPQATVJDVGLFKOWQPIPUFYLEWMRWRUEAWKOUJBSQWVHLLRRZVAMCJWAXIAROBIUVDEHVOYZCOBI");
    msg.value = 37U;

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
    msg.setTimeStamp(0.939817571573681);
    msg.setSource(54993U);
    msg.setSourceEntity(221U);
    msg.setDestination(34321U);
    msg.setDestinationEntity(249U);
    msg.id = 105U;
    msg.period = 2408884361U;
    msg.duty_cycle = 3335790007U;

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
    msg.setTimeStamp(0.8674589366732287);
    msg.setSource(16467U);
    msg.setSourceEntity(125U);
    msg.setDestination(36779U);
    msg.setDestinationEntity(205U);
    msg.id = 238U;
    msg.period = 1709984498U;
    msg.duty_cycle = 1450545293U;

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
    msg.setTimeStamp(0.32049072222758224);
    msg.setSource(11069U);
    msg.setSourceEntity(161U);
    msg.setDestination(17111U);
    msg.setDestinationEntity(83U);
    msg.id = 59U;
    msg.period = 3797042264U;
    msg.duty_cycle = 2289672484U;

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
    msg.setTimeStamp(0.24339771112373265);
    msg.setSource(6141U);
    msg.setSourceEntity(112U);
    msg.setDestination(170U);
    msg.setDestinationEntity(167U);
    msg.id = 104U;
    msg.period = 1145394599U;
    msg.duty_cycle = 3059820318U;

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
    msg.setTimeStamp(0.32995999801206544);
    msg.setSource(41980U);
    msg.setSourceEntity(153U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(100U);
    msg.id = 245U;
    msg.period = 1399049762U;
    msg.duty_cycle = 1468925415U;

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
    msg.setTimeStamp(0.19845811181090411);
    msg.setSource(31169U);
    msg.setSourceEntity(216U);
    msg.setDestination(49266U);
    msg.setDestinationEntity(65U);
    msg.id = 139U;
    msg.period = 1529536927U;
    msg.duty_cycle = 2677011591U;

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
    msg.setTimeStamp(0.38646900507566506);
    msg.setSource(20685U);
    msg.setSourceEntity(130U);
    msg.setDestination(38697U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.13156563886612116;
    msg.lon = 0.5540982687655343;
    msg.height = 0.5500657956745034;
    msg.x = 0.8208147020757549;
    msg.y = 0.9705458751657046;
    msg.z = 0.748396268197795;
    msg.phi = 0.6435449175516568;
    msg.theta = 0.8518676790740304;
    msg.psi = 0.2824143159779775;
    msg.u = 0.10947717289897718;
    msg.v = 0.48242493013328325;
    msg.w = 0.9665347622710572;
    msg.vx = 0.0015565999581255152;
    msg.vy = 0.940790498881256;
    msg.vz = 0.9127085557125596;
    msg.p = 0.051648043694030976;
    msg.q = 0.8555900292221187;
    msg.r = 0.8087817670423493;
    msg.depth = 0.9172381846208267;
    msg.alt = 0.2984228714272966;

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
    msg.setTimeStamp(0.06903399644936781);
    msg.setSource(7860U);
    msg.setSourceEntity(156U);
    msg.setDestination(44511U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.9073884721066227;
    msg.lon = 0.8289834290912653;
    msg.height = 0.25198579167373925;
    msg.x = 0.6188366824794655;
    msg.y = 0.1758748934725869;
    msg.z = 0.26110455123984977;
    msg.phi = 0.5366894804587174;
    msg.theta = 0.39399098117881526;
    msg.psi = 0.21718265570400197;
    msg.u = 0.48729896783504834;
    msg.v = 0.5693451465377657;
    msg.w = 0.9907192787030664;
    msg.vx = 0.3554394049697779;
    msg.vy = 0.14292367883179613;
    msg.vz = 0.5087993320784331;
    msg.p = 0.9203420752083341;
    msg.q = 0.689396991612571;
    msg.r = 0.17648888207711333;
    msg.depth = 0.12060715463504956;
    msg.alt = 0.8128109122267225;

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
    msg.setTimeStamp(0.728655804140308);
    msg.setSource(55546U);
    msg.setSourceEntity(65U);
    msg.setDestination(22662U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.9622161263345483;
    msg.lon = 0.19699028336098812;
    msg.height = 0.09131536733106904;
    msg.x = 0.7313124805409679;
    msg.y = 0.3990682706398907;
    msg.z = 0.692571443076257;
    msg.phi = 0.952742339511652;
    msg.theta = 0.9702135807231468;
    msg.psi = 0.9267465265912941;
    msg.u = 0.7435699890877391;
    msg.v = 0.8179803694537444;
    msg.w = 0.6241581132486606;
    msg.vx = 0.17930580907401317;
    msg.vy = 0.7051979123293698;
    msg.vz = 0.7938573856428379;
    msg.p = 0.20549841633912913;
    msg.q = 0.299862711862232;
    msg.r = 0.12359064887645033;
    msg.depth = 0.021136606645015488;
    msg.alt = 0.6086328822275447;

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
    msg.setTimeStamp(0.8593134090229828);
    msg.setSource(29808U);
    msg.setSourceEntity(145U);
    msg.setDestination(33054U);
    msg.setDestinationEntity(201U);
    msg.x = 0.24100857853724145;
    msg.y = 0.3186826254806169;
    msg.z = 0.7981596654687735;

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
    msg.setTimeStamp(0.6829501450551384);
    msg.setSource(54764U);
    msg.setSourceEntity(122U);
    msg.setDestination(63690U);
    msg.setDestinationEntity(98U);
    msg.x = 0.9153055252481563;
    msg.y = 0.8934660683910132;
    msg.z = 0.8777811229217657;

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
    msg.setTimeStamp(0.9408014615583393);
    msg.setSource(54338U);
    msg.setSourceEntity(181U);
    msg.setDestination(23882U);
    msg.setDestinationEntity(241U);
    msg.x = 0.9474857198630491;
    msg.y = 0.9992373697166574;
    msg.z = 0.9880934981788659;

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
    msg.setTimeStamp(0.8266008232426915);
    msg.setSource(46261U);
    msg.setSourceEntity(69U);
    msg.setDestination(58331U);
    msg.setDestinationEntity(72U);
    msg.value = 0.881437671400899;

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
    msg.setTimeStamp(0.4136602213003139);
    msg.setSource(34126U);
    msg.setSourceEntity(71U);
    msg.setDestination(52977U);
    msg.setDestinationEntity(220U);
    msg.value = 0.7925043148575184;

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
    msg.setTimeStamp(0.3443504891708634);
    msg.setSource(57936U);
    msg.setSourceEntity(58U);
    msg.setDestination(35163U);
    msg.setDestinationEntity(66U);
    msg.value = 0.019104036085955012;

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
    msg.setTimeStamp(0.1450871889121541);
    msg.setSource(14066U);
    msg.setSourceEntity(193U);
    msg.setDestination(21085U);
    msg.setDestinationEntity(72U);
    msg.value = 0.9471053197177646;

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
    msg.setTimeStamp(0.4562935941808487);
    msg.setSource(17141U);
    msg.setSourceEntity(190U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(134U);
    msg.value = 0.43908565367974584;

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
    msg.setTimeStamp(0.10041305872673323);
    msg.setSource(20274U);
    msg.setSourceEntity(231U);
    msg.setDestination(32146U);
    msg.setDestinationEntity(96U);
    msg.value = 0.7027718348046766;

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
    msg.setTimeStamp(0.06510792927865805);
    msg.setSource(54978U);
    msg.setSourceEntity(243U);
    msg.setDestination(37508U);
    msg.setDestinationEntity(41U);
    msg.x = 0.483164204565255;
    msg.y = 0.696823381478659;
    msg.z = 0.4810678238232785;
    msg.phi = 0.8905676991129611;
    msg.theta = 0.5565837297298062;
    msg.psi = 0.460583222175313;
    msg.p = 0.35889917262455273;
    msg.q = 0.6662841580878361;
    msg.r = 0.20082635364360923;
    msg.u = 0.5927824202220388;
    msg.v = 0.9125405114832327;
    msg.w = 0.40251955664206507;
    msg.bias_psi = 0.18095652195643497;
    msg.bias_r = 0.8642463183166178;

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
    msg.setTimeStamp(0.6018459402098421);
    msg.setSource(34902U);
    msg.setSourceEntity(171U);
    msg.setDestination(3814U);
    msg.setDestinationEntity(180U);
    msg.x = 0.8189791175727753;
    msg.y = 0.7772483879927388;
    msg.z = 0.8418745810492068;
    msg.phi = 0.06675926230877605;
    msg.theta = 0.7361653597059856;
    msg.psi = 0.893828839883988;
    msg.p = 0.11541925667688158;
    msg.q = 0.980739810000847;
    msg.r = 0.18106810513690585;
    msg.u = 0.06012690373081453;
    msg.v = 0.4421329805123504;
    msg.w = 0.08370169155224672;
    msg.bias_psi = 0.6002697679444071;
    msg.bias_r = 0.6161279380339428;

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
    msg.setTimeStamp(0.9303390052785024);
    msg.setSource(32887U);
    msg.setSourceEntity(217U);
    msg.setDestination(9059U);
    msg.setDestinationEntity(6U);
    msg.x = 0.1746767838836114;
    msg.y = 0.3448070860015927;
    msg.z = 0.28282866502559456;
    msg.phi = 0.8371808266312284;
    msg.theta = 0.13697883160200053;
    msg.psi = 0.5867037726201488;
    msg.p = 0.4468466532099751;
    msg.q = 0.10794573753721093;
    msg.r = 0.06951096425753889;
    msg.u = 0.8123185941474773;
    msg.v = 0.743515647783304;
    msg.w = 0.7809332194085764;
    msg.bias_psi = 0.633136882525641;
    msg.bias_r = 0.1991580765217792;

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
    msg.setTimeStamp(0.07285840314082004);
    msg.setSource(22894U);
    msg.setSourceEntity(72U);
    msg.setDestination(58121U);
    msg.setDestinationEntity(12U);
    msg.bias_psi = 0.10411769093739054;
    msg.bias_r = 0.695103166505669;
    msg.cog = 0.6394024270836384;
    msg.cyaw = 0.4731821660376827;
    msg.lbl_rej_level = 0.766826329888492;
    msg.gps_rej_level = 0.6582060233472973;
    msg.custom_x = 0.45309806200686886;
    msg.custom_y = 0.8784680960496459;
    msg.custom_z = 0.8395189953935032;

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
    msg.setTimeStamp(0.7362243060589755);
    msg.setSource(47915U);
    msg.setSourceEntity(149U);
    msg.setDestination(32026U);
    msg.setDestinationEntity(26U);
    msg.bias_psi = 0.5128990930164772;
    msg.bias_r = 0.5038976950407978;
    msg.cog = 0.1526967120665641;
    msg.cyaw = 0.4725612749423518;
    msg.lbl_rej_level = 0.31855144484214504;
    msg.gps_rej_level = 0.00795144417710214;
    msg.custom_x = 0.5717036796384904;
    msg.custom_y = 0.522372151031524;
    msg.custom_z = 0.9590879296434278;

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
    msg.setTimeStamp(0.8709432520750703);
    msg.setSource(6264U);
    msg.setSourceEntity(11U);
    msg.setDestination(27022U);
    msg.setDestinationEntity(161U);
    msg.bias_psi = 0.8795398107184675;
    msg.bias_r = 0.5450903703037815;
    msg.cog = 0.4340416415266749;
    msg.cyaw = 0.905023603910773;
    msg.lbl_rej_level = 0.34952353960031535;
    msg.gps_rej_level = 0.9141610218681401;
    msg.custom_x = 0.590803695834398;
    msg.custom_y = 0.8135799954956331;
    msg.custom_z = 0.1993447311753107;

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
    msg.setTimeStamp(0.5254057367309537);
    msg.setSource(29370U);
    msg.setSourceEntity(106U);
    msg.setDestination(19744U);
    msg.setDestinationEntity(165U);
    msg.utc_time = 0.059867771844372863;
    msg.reason = 244U;

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
    msg.setTimeStamp(0.17455287944525355);
    msg.setSource(8974U);
    msg.setSourceEntity(32U);
    msg.setDestination(13861U);
    msg.setDestinationEntity(86U);
    msg.utc_time = 0.15306904648291875;
    msg.reason = 170U;

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
    msg.setTimeStamp(0.8680537704346363);
    msg.setSource(30122U);
    msg.setSourceEntity(161U);
    msg.setDestination(13088U);
    msg.setDestinationEntity(251U);
    msg.utc_time = 0.48827455788102114;
    msg.reason = 62U;

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
    msg.setTimeStamp(0.3512282490766634);
    msg.setSource(25311U);
    msg.setSourceEntity(228U);
    msg.setDestination(36967U);
    msg.setDestinationEntity(14U);
    msg.id = 52U;
    msg.range = 0.04136109778873287;
    msg.acceptance = 72U;

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
    msg.setTimeStamp(0.3474135929106217);
    msg.setSource(53688U);
    msg.setSourceEntity(25U);
    msg.setDestination(39957U);
    msg.setDestinationEntity(38U);
    msg.id = 65U;
    msg.range = 0.11083522693486947;
    msg.acceptance = 1U;

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
    msg.setTimeStamp(0.9631704737476653);
    msg.setSource(11338U);
    msg.setSourceEntity(234U);
    msg.setDestination(25770U);
    msg.setDestinationEntity(79U);
    msg.id = 118U;
    msg.range = 0.005120816846739706;
    msg.acceptance = 89U;

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
    msg.setTimeStamp(0.19661274781445404);
    msg.setSource(15172U);
    msg.setSourceEntity(146U);
    msg.setDestination(43259U);
    msg.setDestinationEntity(193U);
    msg.type = 188U;
    msg.reason = 112U;
    msg.value = 0.5486570593037341;
    msg.timestep = 0.7303389830926333;

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
    msg.setTimeStamp(0.1543160020251081);
    msg.setSource(24045U);
    msg.setSourceEntity(202U);
    msg.setDestination(37980U);
    msg.setDestinationEntity(229U);
    msg.type = 62U;
    msg.reason = 79U;
    msg.value = 0.032736527797227355;
    msg.timestep = 0.5670720778632347;

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
    msg.setTimeStamp(0.9963537122535432);
    msg.setSource(35564U);
    msg.setSourceEntity(249U);
    msg.setDestination(34738U);
    msg.setDestinationEntity(79U);
    msg.type = 9U;
    msg.reason = 1U;
    msg.value = 0.603056574313803;
    msg.timestep = 0.9924810263851133;

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
    msg.setTimeStamp(0.8740627824108205);
    msg.setSource(44296U);
    msg.setSourceEntity(252U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(70U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BMSVMKSOEHMRVVAPAHZXBHYCTAMKCWQKONUGIEPDFLTLDPEQBVLFYUFZZYVQCHSODIDWABXLMXUPBHOLMFVFWKXQDJGIWYCKTZNX");
    tmp_msg_0.lat = 0.16505385946740458;
    tmp_msg_0.lon = 0.20243332388810964;
    tmp_msg_0.depth = 0.9852205156778768;
    tmp_msg_0.query_channel = 61U;
    tmp_msg_0.reply_channel = 205U;
    tmp_msg_0.transponder_delay = 214U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7960578859344607;
    msg.y = 0.19009050349385115;
    msg.var_x = 0.609038735295965;
    msg.var_y = 0.6298664592996492;
    msg.distance = 0.4342054592701061;

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
    msg.setTimeStamp(0.7044382830669907);
    msg.setSource(47564U);
    msg.setSourceEntity(167U);
    msg.setDestination(43342U);
    msg.setDestinationEntity(113U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GYDGICFCZHHORS");
    tmp_msg_0.lat = 0.3432137388400278;
    tmp_msg_0.lon = 0.16362801368394164;
    tmp_msg_0.depth = 0.0919588821703583;
    tmp_msg_0.query_channel = 110U;
    tmp_msg_0.reply_channel = 237U;
    tmp_msg_0.transponder_delay = 152U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2941709163213273;
    msg.y = 0.7527998472917361;
    msg.var_x = 0.5301891873880172;
    msg.var_y = 0.7348833175199181;
    msg.distance = 0.769037002919876;

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
    msg.setTimeStamp(0.9110640370954736);
    msg.setSource(18699U);
    msg.setSourceEntity(75U);
    msg.setDestination(54657U);
    msg.setDestinationEntity(178U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SANAQKFERXELUJEQNDRBQFGTQMDUYPDGJBZXPJNYMUWMN");
    tmp_msg_0.lat = 0.8436484760989014;
    tmp_msg_0.lon = 0.36620203711701704;
    tmp_msg_0.depth = 0.22797101907358153;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 43U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.19228759168371878;
    msg.y = 0.9330848390546388;
    msg.var_x = 0.0001831781768247831;
    msg.var_y = 0.8114977384497352;
    msg.distance = 0.6053287232975629;

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
    msg.setTimeStamp(0.20327339497938157);
    msg.setSource(25008U);
    msg.setSourceEntity(229U);
    msg.setDestination(62615U);
    msg.setDestinationEntity(66U);
    msg.state = 155U;

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
    msg.setTimeStamp(0.9836021977187207);
    msg.setSource(48021U);
    msg.setSourceEntity(130U);
    msg.setDestination(61727U);
    msg.setDestinationEntity(123U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.17621698748380465);
    msg.setSource(43243U);
    msg.setSourceEntity(103U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(239U);
    msg.state = 82U;

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
    msg.setTimeStamp(0.9530447956747625);
    msg.setSource(35100U);
    msg.setSourceEntity(247U);
    msg.setDestination(44875U);
    msg.setDestinationEntity(183U);
    msg.x = 0.8255617960376742;
    msg.y = 0.47420603233709024;
    msg.z = 0.0012960404919613033;

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
    msg.setTimeStamp(0.20106845419181085);
    msg.setSource(54268U);
    msg.setSourceEntity(59U);
    msg.setDestination(7615U);
    msg.setDestinationEntity(55U);
    msg.x = 0.34988755415718675;
    msg.y = 0.28764518969270836;
    msg.z = 0.7465593490751821;

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
    msg.setTimeStamp(0.6966628309130035);
    msg.setSource(40624U);
    msg.setSourceEntity(143U);
    msg.setDestination(15098U);
    msg.setDestinationEntity(213U);
    msg.x = 0.7508675644459283;
    msg.y = 0.9064319821504686;
    msg.z = 0.12193462551723466;

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
    msg.setTimeStamp(0.4437899318558063);
    msg.setSource(64655U);
    msg.setSourceEntity(223U);
    msg.setDestination(19889U);
    msg.setDestinationEntity(34U);
    msg.va = 0.7767169753508685;
    msg.aoa = 0.18750722254108354;
    msg.ssa = 0.5036691918713696;

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
    msg.setTimeStamp(0.2703808347491343);
    msg.setSource(34249U);
    msg.setSourceEntity(35U);
    msg.setDestination(18131U);
    msg.setDestinationEntity(34U);
    msg.va = 0.8426847763211892;
    msg.aoa = 0.40922274944235937;
    msg.ssa = 0.0876392887064521;

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
    msg.setTimeStamp(0.5447610901366841);
    msg.setSource(19507U);
    msg.setSourceEntity(94U);
    msg.setDestination(6753U);
    msg.setDestinationEntity(128U);
    msg.va = 0.6505571375546755;
    msg.aoa = 0.2298474741702231;
    msg.ssa = 0.1693831508717506;

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
    msg.setTimeStamp(0.41583514562313373);
    msg.setSource(64142U);
    msg.setSourceEntity(232U);
    msg.setDestination(43777U);
    msg.setDestinationEntity(87U);
    msg.value = 0.4908321137783014;

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
    msg.setTimeStamp(0.5922630066552634);
    msg.setSource(37534U);
    msg.setSourceEntity(43U);
    msg.setDestination(5858U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8034952219734199;

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
    msg.setTimeStamp(0.18221933714769067);
    msg.setSource(22176U);
    msg.setSourceEntity(209U);
    msg.setDestination(7272U);
    msg.setDestinationEntity(172U);
    msg.value = 0.1884098482100025;

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
    msg.setTimeStamp(0.8394953147572172);
    msg.setSource(18590U);
    msg.setSourceEntity(121U);
    msg.setDestination(50618U);
    msg.setDestinationEntity(49U);
    msg.value = 0.21935003694910904;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.7617236494727608);
    msg.setSource(19387U);
    msg.setSourceEntity(209U);
    msg.setDestination(54940U);
    msg.setDestinationEntity(57U);
    msg.value = 0.8367686059083819;
    msg.z_units = 216U;

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
    msg.setTimeStamp(0.18844177067865786);
    msg.setSource(7360U);
    msg.setSourceEntity(192U);
    msg.setDestination(21191U);
    msg.setDestinationEntity(50U);
    msg.value = 0.8240526957839257;
    msg.z_units = 129U;

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
    msg.setTimeStamp(0.77889371342869);
    msg.setSource(53271U);
    msg.setSourceEntity(129U);
    msg.setDestination(59894U);
    msg.setDestinationEntity(12U);
    msg.value = 0.5699152102870126;
    msg.speed_units = 41U;

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
    msg.setTimeStamp(0.3784585487425862);
    msg.setSource(33974U);
    msg.setSourceEntity(33U);
    msg.setDestination(29104U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6778476314243335;
    msg.speed_units = 9U;

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
    msg.setTimeStamp(0.16588324015378653);
    msg.setSource(64000U);
    msg.setSourceEntity(101U);
    msg.setDestination(46313U);
    msg.setDestinationEntity(24U);
    msg.value = 0.7687387541023754;
    msg.speed_units = 80U;

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
    msg.setTimeStamp(0.5387827565524883);
    msg.setSource(51887U);
    msg.setSourceEntity(229U);
    msg.setDestination(6569U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7093622090191541;

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
    msg.setTimeStamp(0.9699028238956254);
    msg.setSource(4307U);
    msg.setSourceEntity(31U);
    msg.setDestination(47564U);
    msg.setDestinationEntity(91U);
    msg.value = 0.9653745935934431;

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
    msg.setTimeStamp(0.7679718925924599);
    msg.setSource(40959U);
    msg.setSourceEntity(91U);
    msg.setDestination(6803U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8443350454626204;

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
    msg.setTimeStamp(0.3656329494739954);
    msg.setSource(25819U);
    msg.setSourceEntity(201U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6310487283289203;

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
    msg.setTimeStamp(0.5327582542504782);
    msg.setSource(4516U);
    msg.setSourceEntity(71U);
    msg.setDestination(13744U);
    msg.setDestinationEntity(38U);
    msg.value = 0.6797000837046043;

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
    msg.setTimeStamp(0.3493814501661733);
    msg.setSource(28793U);
    msg.setSourceEntity(212U);
    msg.setDestination(576U);
    msg.setDestinationEntity(57U);
    msg.value = 0.07489239315926155;

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
    msg.setTimeStamp(0.5257742413886755);
    msg.setSource(28663U);
    msg.setSourceEntity(22U);
    msg.setDestination(16516U);
    msg.setDestinationEntity(47U);
    msg.value = 0.15498319695647322;

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
    msg.setTimeStamp(0.6393916218319506);
    msg.setSource(13567U);
    msg.setSourceEntity(130U);
    msg.setDestination(63215U);
    msg.setDestinationEntity(131U);
    msg.value = 0.8482894726965118;

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
    msg.setTimeStamp(0.8746316416504027);
    msg.setSource(14778U);
    msg.setSourceEntity(67U);
    msg.setDestination(33713U);
    msg.setDestinationEntity(134U);
    msg.value = 0.48572246098129856;

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
    msg.setTimeStamp(0.3936805769302508);
    msg.setSource(46132U);
    msg.setSourceEntity(107U);
    msg.setDestination(15636U);
    msg.setDestinationEntity(208U);
    msg.path_ref = 3819311943U;
    msg.start_lat = 0.27903193647318736;
    msg.start_lon = 0.8376241191276496;
    msg.start_z = 0.4424362348884867;
    msg.start_z_units = 142U;
    msg.end_lat = 0.38781408200744005;
    msg.end_lon = 0.16169782764795826;
    msg.end_z = 0.31704568135564204;
    msg.end_z_units = 135U;
    msg.speed = 0.794807541846671;
    msg.speed_units = 74U;
    msg.lradius = 0.7195580874870454;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.12779444110684424);
    msg.setSource(46013U);
    msg.setSourceEntity(199U);
    msg.setDestination(28414U);
    msg.setDestinationEntity(187U);
    msg.path_ref = 3631023633U;
    msg.start_lat = 0.6447647119089156;
    msg.start_lon = 0.37313655071514473;
    msg.start_z = 0.5593295707024184;
    msg.start_z_units = 143U;
    msg.end_lat = 0.18956616680456617;
    msg.end_lon = 0.889749251092563;
    msg.end_z = 0.24011750701674528;
    msg.end_z_units = 237U;
    msg.speed = 0.9740292941706186;
    msg.speed_units = 246U;
    msg.lradius = 0.1917011707840941;
    msg.flags = 192U;

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
    msg.setTimeStamp(0.7568514624613633);
    msg.setSource(51592U);
    msg.setSourceEntity(70U);
    msg.setDestination(37054U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 3375034521U;
    msg.start_lat = 0.5762682028072241;
    msg.start_lon = 0.014601796671063427;
    msg.start_z = 0.983376777970027;
    msg.start_z_units = 122U;
    msg.end_lat = 0.1628014197173574;
    msg.end_lon = 0.3783210023880039;
    msg.end_z = 0.6593287258063222;
    msg.end_z_units = 80U;
    msg.speed = 0.5089509503659976;
    msg.speed_units = 213U;
    msg.lradius = 0.2447995665950058;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.8858672517367848);
    msg.setSource(18119U);
    msg.setSourceEntity(77U);
    msg.setDestination(9783U);
    msg.setDestinationEntity(231U);
    msg.x = 0.6687464613549429;
    msg.y = 0.2043006686576393;
    msg.z = 0.42197400169691945;
    msg.k = 0.09723689046194672;
    msg.m = 0.20588523412868942;
    msg.n = 0.11825641141273213;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.003271575682591399);
    msg.setSource(53646U);
    msg.setSourceEntity(102U);
    msg.setDestination(44137U);
    msg.setDestinationEntity(221U);
    msg.x = 0.34227244492187947;
    msg.y = 0.4576662455208098;
    msg.z = 0.27054769478853613;
    msg.k = 0.5978907036990713;
    msg.m = 0.3666387230630114;
    msg.n = 0.9303217985952498;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.2812617736004528);
    msg.setSource(56989U);
    msg.setSourceEntity(131U);
    msg.setDestination(18322U);
    msg.setDestinationEntity(217U);
    msg.x = 0.46258437888552173;
    msg.y = 0.9870355302007171;
    msg.z = 0.2154610141474118;
    msg.k = 0.9407336030425757;
    msg.m = 0.6229542479980336;
    msg.n = 0.49904073453356745;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.6281177646555487);
    msg.setSource(1015U);
    msg.setSourceEntity(218U);
    msg.setDestination(29470U);
    msg.setDestinationEntity(132U);
    msg.value = 0.9984360170608062;

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
    msg.setTimeStamp(0.8303280757356292);
    msg.setSource(4704U);
    msg.setSourceEntity(251U);
    msg.setDestination(18784U);
    msg.setDestinationEntity(86U);
    msg.value = 0.23795230349750518;

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
    msg.setTimeStamp(0.7383751729623675);
    msg.setSource(27951U);
    msg.setSourceEntity(167U);
    msg.setDestination(52476U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9259614794990934;

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
    msg.setTimeStamp(0.42352786359118577);
    msg.setSource(1953U);
    msg.setSourceEntity(122U);
    msg.setDestination(52864U);
    msg.setDestinationEntity(12U);
    msg.u = 0.5775143619404551;
    msg.v = 0.30401249523268703;
    msg.w = 0.0340852670009536;
    msg.p = 0.09692309752845862;
    msg.q = 0.5959518420013968;
    msg.r = 0.40607204667047414;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.6640993405867923);
    msg.setSource(19227U);
    msg.setSourceEntity(248U);
    msg.setDestination(44791U);
    msg.setDestinationEntity(194U);
    msg.u = 0.6669845784044935;
    msg.v = 0.6221357354501655;
    msg.w = 0.2918373220112157;
    msg.p = 0.6791804751011385;
    msg.q = 0.4301491037158116;
    msg.r = 0.7625248971726141;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.667817438310996);
    msg.setSource(36383U);
    msg.setSourceEntity(64U);
    msg.setDestination(53754U);
    msg.setDestinationEntity(55U);
    msg.u = 0.8928301924770863;
    msg.v = 0.851925742634406;
    msg.w = 0.698389897711508;
    msg.p = 0.5717713013286292;
    msg.q = 0.3250875598176356;
    msg.r = 0.29702107705366276;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.9646638057872344);
    msg.setSource(17945U);
    msg.setSourceEntity(89U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 1679626001U;
    msg.start_lat = 0.32374845894602233;
    msg.start_lon = 0.8368882008296771;
    msg.start_z = 0.1988368520445588;
    msg.start_z_units = 51U;
    msg.end_lat = 0.3094499362581956;
    msg.end_lon = 0.8009204338133866;
    msg.end_z = 0.5435396163027105;
    msg.end_z_units = 20U;
    msg.lradius = 0.05447185207559102;
    msg.flags = 114U;
    msg.x = 0.8122463214712768;
    msg.y = 0.8356067123646134;
    msg.z = 0.7523792175111157;
    msg.vx = 0.2235233350776551;
    msg.vy = 0.815204901167786;
    msg.vz = 0.4143812059747082;
    msg.course_error = 0.8301159296456981;
    msg.eta = 31893U;

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
    msg.setTimeStamp(0.9314099339123117);
    msg.setSource(30731U);
    msg.setSourceEntity(45U);
    msg.setDestination(35640U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 2205136911U;
    msg.start_lat = 0.2592684563228099;
    msg.start_lon = 0.8269997100477379;
    msg.start_z = 0.9017486639995795;
    msg.start_z_units = 242U;
    msg.end_lat = 0.6123707626947826;
    msg.end_lon = 0.11932120499310717;
    msg.end_z = 0.7593981997773721;
    msg.end_z_units = 26U;
    msg.lradius = 0.7717014168568884;
    msg.flags = 2U;
    msg.x = 0.059603864773638104;
    msg.y = 0.32276749646213754;
    msg.z = 0.7996349489856067;
    msg.vx = 0.4233618021392558;
    msg.vy = 0.9173301847957294;
    msg.vz = 0.33818245235423405;
    msg.course_error = 0.5267489093461725;
    msg.eta = 23599U;

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
    msg.setTimeStamp(0.7295325577736113);
    msg.setSource(25944U);
    msg.setSourceEntity(44U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 496418361U;
    msg.start_lat = 0.40397058024402055;
    msg.start_lon = 0.8428855463653517;
    msg.start_z = 0.6628018220692138;
    msg.start_z_units = 54U;
    msg.end_lat = 0.9314420193494727;
    msg.end_lon = 0.22360819624651262;
    msg.end_z = 0.6072704015288739;
    msg.end_z_units = 230U;
    msg.lradius = 0.45991675005674726;
    msg.flags = 103U;
    msg.x = 0.47924551426164863;
    msg.y = 0.8972118924958918;
    msg.z = 0.6524413882756745;
    msg.vx = 0.16328847691488202;
    msg.vy = 0.9976807972762565;
    msg.vz = 0.9092227805198793;
    msg.course_error = 0.521809873145615;
    msg.eta = 8059U;

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
    msg.setTimeStamp(0.38011831771025206);
    msg.setSource(25030U);
    msg.setSourceEntity(223U);
    msg.setDestination(27857U);
    msg.setDestinationEntity(115U);
    msg.k = 0.9762608865130549;
    msg.m = 0.5934100618452868;
    msg.n = 0.3255317934219103;

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
    msg.setTimeStamp(0.5638868245338315);
    msg.setSource(12310U);
    msg.setSourceEntity(239U);
    msg.setDestination(39643U);
    msg.setDestinationEntity(83U);
    msg.k = 0.948477175261913;
    msg.m = 0.8009394328358728;
    msg.n = 0.6907401075741982;

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
    msg.setTimeStamp(0.9270307624102472);
    msg.setSource(35959U);
    msg.setSourceEntity(144U);
    msg.setDestination(18218U);
    msg.setDestinationEntity(114U);
    msg.k = 0.3955455545677178;
    msg.m = 0.4045281485636625;
    msg.n = 0.2704946150728629;

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
    msg.setTimeStamp(0.20550030999199764);
    msg.setSource(8368U);
    msg.setSourceEntity(55U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(206U);
    msg.p = 0.1589898505595202;
    msg.i = 0.41916221555125477;
    msg.d = 0.17851005469819092;
    msg.a = 0.7278567339754146;

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
    msg.setTimeStamp(0.730435073343921);
    msg.setSource(16877U);
    msg.setSourceEntity(115U);
    msg.setDestination(59559U);
    msg.setDestinationEntity(116U);
    msg.p = 0.9604219273797636;
    msg.i = 0.20656503071099497;
    msg.d = 0.2861101832186984;
    msg.a = 0.5926607580894976;

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
    msg.setTimeStamp(0.8659903086374406);
    msg.setSource(46629U);
    msg.setSourceEntity(112U);
    msg.setDestination(38106U);
    msg.setDestinationEntity(254U);
    msg.p = 0.7698391406093409;
    msg.i = 0.8215495426028269;
    msg.d = 0.510464655895313;
    msg.a = 0.9075175872187239;

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
    msg.setTimeStamp(0.4987376684733703);
    msg.setSource(26778U);
    msg.setSourceEntity(139U);
    msg.setDestination(32935U);
    msg.setDestinationEntity(57U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.6452541606643362);
    msg.setSource(60155U);
    msg.setSourceEntity(215U);
    msg.setDestination(40157U);
    msg.setDestinationEntity(26U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.3863794793645201);
    msg.setSource(37326U);
    msg.setSourceEntity(210U);
    msg.setDestination(19052U);
    msg.setDestinationEntity(45U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.7990857376383269);
    msg.setSource(24388U);
    msg.setSourceEntity(190U);
    msg.setDestination(52720U);
    msg.setDestinationEntity(110U);
    msg.x = 0.4610474598071338;
    msg.y = 0.04541372117136788;
    msg.z = 0.20064804836511918;
    msg.vx = 0.8824576360445071;
    msg.vy = 0.00911017206441167;
    msg.vz = 0.636964079845616;
    msg.ax = 0.402521262860871;
    msg.ay = 0.7223104469396083;
    msg.az = 0.03215681010714522;
    msg.flags = 30217U;

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
    msg.setTimeStamp(0.365823662684744);
    msg.setSource(61455U);
    msg.setSourceEntity(65U);
    msg.setDestination(9513U);
    msg.setDestinationEntity(155U);
    msg.x = 0.1770746847357315;
    msg.y = 0.11664778036596768;
    msg.z = 0.3239370026333277;
    msg.vx = 0.6637641213689223;
    msg.vy = 0.07716757542401842;
    msg.vz = 0.29152531389505054;
    msg.ax = 0.7476417893112745;
    msg.ay = 0.9043276825294413;
    msg.az = 0.6806073185919462;
    msg.flags = 59865U;

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
    msg.setTimeStamp(0.31212558491837117);
    msg.setSource(42744U);
    msg.setSourceEntity(140U);
    msg.setDestination(42646U);
    msg.setDestinationEntity(126U);
    msg.x = 0.8833215519706142;
    msg.y = 0.2755990834695857;
    msg.z = 0.5843194215207141;
    msg.vx = 0.1805414102335806;
    msg.vy = 0.285932512366847;
    msg.vz = 0.9934575139816599;
    msg.ax = 0.8023130281211168;
    msg.ay = 0.002739485734882363;
    msg.az = 0.07594768473123326;
    msg.flags = 7083U;

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
    msg.setTimeStamp(0.5242820854079152);
    msg.setSource(20403U);
    msg.setSourceEntity(142U);
    msg.setDestination(13552U);
    msg.setDestinationEntity(211U);
    msg.value = 0.10471370767803334;

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
    msg.setTimeStamp(0.697909550836237);
    msg.setSource(31509U);
    msg.setSourceEntity(228U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(24U);
    msg.value = 0.4270311479945512;

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
    msg.setTimeStamp(0.13965382092689826);
    msg.setSource(110U);
    msg.setSourceEntity(41U);
    msg.setDestination(18468U);
    msg.setDestinationEntity(17U);
    msg.value = 0.8611950155064886;

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
    msg.setTimeStamp(0.8604163323530323);
    msg.setSource(32335U);
    msg.setSourceEntity(68U);
    msg.setDestination(32171U);
    msg.setDestinationEntity(240U);
    msg.timeout = 40828U;
    msg.lat = 0.801008563257758;
    msg.lon = 0.49118119603987964;
    msg.z = 0.7409990317450835;
    msg.z_units = 43U;
    msg.speed = 0.13601227663432092;
    msg.speed_units = 218U;
    msg.roll = 0.5620581465218141;
    msg.pitch = 0.15895686567824607;
    msg.yaw = 0.374196810058925;
    msg.custom.assign("LARTWJYXEZNAXHSQOQTKCUBDLGJPYMFPPPBGEOXPVWIXCWIDDFORNCLJIVFIOGZFSKRZJJENUBOQMGMTAJSPTCXQYDIZZDGWXRRYODLPCWTEGAKXBTALMNDFLVMTDHIZMUCKINWYSMFBLGFXCOZSYRTBHGYHZQJHKKAQTYUQVIYBGRAJOSHAJPVQJFCERAMWDSTWUQEENDHONPWFUVURCBHEEZ");

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
    msg.setTimeStamp(0.05465468589861222);
    msg.setSource(24626U);
    msg.setSourceEntity(248U);
    msg.setDestination(6722U);
    msg.setDestinationEntity(148U);
    msg.timeout = 11021U;
    msg.lat = 0.8315007239428832;
    msg.lon = 0.9196329036714805;
    msg.z = 0.7507148118616715;
    msg.z_units = 25U;
    msg.speed = 0.27527125218873516;
    msg.speed_units = 6U;
    msg.roll = 0.28597359343880435;
    msg.pitch = 0.8754976157618342;
    msg.yaw = 0.7502709238080906;
    msg.custom.assign("IGRPVUVEBPKFJHKEDBJCDUSLOLYNSXPZADGXJWUFLUIQQBUKAQKQHJAHXACUEKFROWPXTRDDGTQBNZ");

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
    msg.setTimeStamp(0.9452805049546135);
    msg.setSource(30319U);
    msg.setSourceEntity(153U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(90U);
    msg.timeout = 2017U;
    msg.lat = 0.6600352393142069;
    msg.lon = 0.0636241755670941;
    msg.z = 0.04312314450614074;
    msg.z_units = 189U;
    msg.speed = 0.6723882613169533;
    msg.speed_units = 228U;
    msg.roll = 0.9020968555836867;
    msg.pitch = 0.8158010032742253;
    msg.yaw = 0.8774876206498594;
    msg.custom.assign("HMCDIWDQUKQXFJZTLLLZPJPLRGXBLBQBMFYKYEDOZWWECTYTSTHEVHHKFIJQAXMQUBAOQFLIVGUVXBJJVCYEIXUSFXMNWMLNQWQSTIOPURNZAQVHERDZGMAEGHKSRUTCMENVCMXADWTOWLWAZESOIFYGOSAQJTIXNZSUFSODUAFREPWYPGBZURDOXABFINOGNICL");

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
    msg.setTimeStamp(0.4456484628768529);
    msg.setSource(20020U);
    msg.setSourceEntity(199U);
    msg.setDestination(59130U);
    msg.setDestinationEntity(218U);
    msg.timeout = 51881U;
    msg.lat = 0.6863526539033245;
    msg.lon = 0.5826422727480646;
    msg.z = 0.07973682728579679;
    msg.z_units = 239U;
    msg.speed = 0.545583902244269;
    msg.speed_units = 232U;
    msg.duration = 9337U;
    msg.radius = 0.45307301426706603;
    msg.flags = 213U;
    msg.custom.assign("LDJPWWEDFWRPRXMVFNWSNMDOXKKZCIHLHXAWVJUQHMPBAYGFBJQCMRQRLGNVILAIYBTADFLVSJOQPMLYZPHBVHTDZXRTNSQNZSYMUCBVGUENIOKYFWQFBRZXCMHWPTQGBYZWKILTEUD");

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
    msg.setTimeStamp(0.5503585945141215);
    msg.setSource(58521U);
    msg.setSourceEntity(87U);
    msg.setDestination(50962U);
    msg.setDestinationEntity(250U);
    msg.timeout = 30307U;
    msg.lat = 0.004174052584994925;
    msg.lon = 0.043808864061532726;
    msg.z = 0.42117630716622134;
    msg.z_units = 166U;
    msg.speed = 0.10003693657511004;
    msg.speed_units = 48U;
    msg.duration = 18099U;
    msg.radius = 0.7199607446356555;
    msg.flags = 22U;
    msg.custom.assign("UKJPPMBIELEXRPXLHFMJIVUCLUBNOOMXNEDQJYMOGDCKQKKPTZCKFH");

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
    msg.setTimeStamp(0.2538937507983149);
    msg.setSource(29236U);
    msg.setSourceEntity(196U);
    msg.setDestination(36109U);
    msg.setDestinationEntity(62U);
    msg.timeout = 62900U;
    msg.lat = 0.5865439578221778;
    msg.lon = 0.4279324951160012;
    msg.z = 0.320296329676778;
    msg.z_units = 230U;
    msg.speed = 0.5550088521021884;
    msg.speed_units = 93U;
    msg.duration = 49449U;
    msg.radius = 0.5573559037754957;
    msg.flags = 197U;
    msg.custom.assign("YDJKRCWQSWUCYZLSUOTVKGMCHDVQRQNBOBNISGJKRNGJYVQRNGLYEFWTSLEPFBLUCQXZLZTLOVMXAUQMMDKYDRIZTMGSIIOMLDNRITFIMCFBWXRRCXFPJJPUNBQALXBESPUPHPUIQTAJZZ");

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
    msg.setTimeStamp(0.8695205793743302);
    msg.setSource(31563U);
    msg.setSourceEntity(114U);
    msg.setDestination(564U);
    msg.setDestinationEntity(19U);
    msg.custom.assign("FGWZYYEBYTLTMDIJZLYQDDGXEUZSDDMEWWAPQTXIEIASAGEBGFVNBHGYVOITKPXMRLWELGMDAZITNBMIIZHNNLUCVFYFASXQIOJQSSPPMULRLCROEWPUNLUGXXDJOSHCJYAGDPBXHUMEUB");

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
    msg.setTimeStamp(0.11528745630974457);
    msg.setSource(59503U);
    msg.setSourceEntity(11U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("JDTKOQTSSPJDAUZRBMLYNAVVXBMYGVJGSHYURMQHMONNPKOHPQOJPXP");

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
    msg.setTimeStamp(0.9821635790213072);
    msg.setSource(32243U);
    msg.setSourceEntity(164U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(73U);
    msg.custom.assign("ADFKHWQTTLPNKOJZAXZHIMWBCNMCZOHOCZLRVIQBOHGKBAPWPHGEIUNQNZTFCEJRSGORNUQZHEAVJFUFZXWGFUAEIIEKIBMUSFD");

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
    msg.setTimeStamp(0.8646618315463452);
    msg.setSource(30450U);
    msg.setSourceEntity(58U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(121U);
    msg.timeout = 29411U;
    msg.lat = 0.4808109514038519;
    msg.lon = 0.43692689557568376;
    msg.z = 0.6813128417625983;
    msg.z_units = 56U;
    msg.duration = 34998U;
    msg.speed = 0.9147267331796021;
    msg.speed_units = 126U;
    msg.type = 170U;
    msg.radius = 0.21980297936944193;
    msg.length = 0.28549707641888833;
    msg.bearing = 0.006824327347953685;
    msg.direction = 94U;
    msg.custom.assign("LPRGIKXJHODZJJQLUSINIJTPDCZNFZCNBXZAYPYWWQBWLYTBDVNYAQHKOHEPJIRTESWMCUKJKGYXCRVNCWNWPINFTWMEOWBOVKESJT");

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
    msg.setTimeStamp(0.5871356987255343);
    msg.setSource(45320U);
    msg.setSourceEntity(14U);
    msg.setDestination(7076U);
    msg.setDestinationEntity(188U);
    msg.timeout = 37937U;
    msg.lat = 0.5268422330921423;
    msg.lon = 0.43881854165590584;
    msg.z = 0.6838288382669914;
    msg.z_units = 82U;
    msg.duration = 61904U;
    msg.speed = 0.1541052504603081;
    msg.speed_units = 186U;
    msg.type = 100U;
    msg.radius = 0.17337711971055692;
    msg.length = 0.8567686620011538;
    msg.bearing = 0.35910872293912066;
    msg.direction = 8U;
    msg.custom.assign("BSHIBPWWJPJQDXBYMEGUUJTXSQEXRQKEFZFTOAPNGEZRIKIDMCDKFVVBYKXBCWLFGDICZPCNTLJXDJSGOQVHNOYULWDLCEABXJONAINDILSVWGYMGQVSLMXKRUEOTSRKNKZNMYI");

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
    msg.setTimeStamp(0.5457609495486947);
    msg.setSource(2669U);
    msg.setSourceEntity(154U);
    msg.setDestination(48271U);
    msg.setDestinationEntity(217U);
    msg.timeout = 65385U;
    msg.lat = 0.4370032628357604;
    msg.lon = 0.9627998046503633;
    msg.z = 0.34140109184754996;
    msg.z_units = 87U;
    msg.duration = 18867U;
    msg.speed = 0.6533873867222328;
    msg.speed_units = 240U;
    msg.type = 167U;
    msg.radius = 0.8916970572566787;
    msg.length = 0.6376699612031282;
    msg.bearing = 0.2638886517309169;
    msg.direction = 103U;
    msg.custom.assign("TDTJOJIQBNIMWLLEQUEPNGKGFGTKZACHXHWBQKVUQVSMBVXZCARLZGPCDADWXOZXAWVAJZWYUIHBVYWZDEKXNOFBRNFAUJILEOMBLEMPLUCTFLJKUUKYOQWXAEXXQVPMBIVFQPXQNOQNJYMSUSYLYTLCEENFBOIHVDSPFHIRHKNHYPDKJTDRTDXRLRINGFCBAIRWFSGCVSGFOMUJYRSYNDZSSMWCJTHMJOUQGG");

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
    msg.setTimeStamp(0.39833919324021116);
    msg.setSource(1216U);
    msg.setSourceEntity(178U);
    msg.setDestination(30912U);
    msg.setDestinationEntity(22U);
    msg.duration = 29359U;
    msg.custom.assign("GNMITFDAVXQRDPVOEJVNBCBZRKLEMFJCACPRDJBXUXGHQTIOJJVNYGUGWYBEQCXSTBTOJYLLWTDBHAEQVRPHYVTKSEARSIVPEOMFAPSJQCXBYNFIMMJNDFNYLYRHBONNZQVXZPRKPCMBUXLYZKLQORZMQAHXUUHLCZMIOFPWGDSKXDSPWW");

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
    msg.setTimeStamp(0.175913488775022);
    msg.setSource(20712U);
    msg.setSourceEntity(75U);
    msg.setDestination(61090U);
    msg.setDestinationEntity(65U);
    msg.duration = 9866U;
    msg.custom.assign("KROZRYYZDERSVSMWNNYFCNWALCJDIJHKOITPXMUDAXPBYEDANJZHVCTZSGDEHKOCZAVLIZCOWJKJPXBFEVFECPLWXDSAQXTEZPJQDXRPM");

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
    msg.setTimeStamp(0.42050298070860237);
    msg.setSource(41047U);
    msg.setSourceEntity(5U);
    msg.setDestination(5182U);
    msg.setDestinationEntity(172U);
    msg.duration = 27770U;
    msg.custom.assign("SQCPWKLWJTJKPLMVROBBOGYPCRZNGCVRCYHUPZLBPFWUAMLBRYEFWYFAQKHMGVHTEXQMDJOQSGUVXDQZREMKTOBAYFNWVOCAMRYPNNKYIFLQSGSETNOVUHTSZIHTHAIQLPTKWVVEDACOLHGIUFENSCMBZGJQERFMXAIYUACCFJLVXDJIHBBWUEKSFOLCRSXNJGYGHIINXDGAZBWZOXRJTDPKDQTPKUOWXPJDDBIEF");

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
    msg.setTimeStamp(0.5985586591042292);
    msg.setSource(34947U);
    msg.setSourceEntity(192U);
    msg.setDestination(14955U);
    msg.setDestinationEntity(69U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 789695599U;
    tmp_msg_0.start_lat = 0.5980908044258199;
    tmp_msg_0.start_lon = 0.9622587700767453;
    tmp_msg_0.start_z = 0.6309110167645211;
    tmp_msg_0.start_z_units = 27U;
    tmp_msg_0.end_lat = 0.7983492928552987;
    tmp_msg_0.end_lon = 0.14284188867480185;
    tmp_msg_0.end_z = 0.663653987312852;
    tmp_msg_0.end_z_units = 108U;
    tmp_msg_0.speed = 0.6486320528465094;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.lradius = 0.7926387677585485;
    tmp_msg_0.flags = 208U;
    msg.control.set(tmp_msg_0);
    msg.duration = 43311U;
    msg.custom.assign("CCMKSQOXUGSOQXDADKQVIIBNVWNEFXJRVURGHSXHFFFLWRKCUFPWQHVOPOLKDBKNZFQONFAXZEIPJDXIBVYLTVAGTLRKJMGJT");

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
    msg.setTimeStamp(0.8605564125731777);
    msg.setSource(40943U);
    msg.setSourceEntity(15U);
    msg.setDestination(42576U);
    msg.setDestinationEntity(232U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2953892589U;
    tmp_msg_0.start_lat = 0.13985446820219039;
    tmp_msg_0.start_lon = 0.12890970816303238;
    tmp_msg_0.start_z = 0.5878473231996345;
    tmp_msg_0.start_z_units = 32U;
    tmp_msg_0.end_lat = 0.8426237185604448;
    tmp_msg_0.end_lon = 0.16182717779130562;
    tmp_msg_0.end_z = 0.23836864029674154;
    tmp_msg_0.end_z_units = 90U;
    tmp_msg_0.speed = 0.45465757250223915;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.lradius = 0.9039219824995608;
    tmp_msg_0.flags = 111U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45061U;
    msg.custom.assign("JFNCGZJLXEZJTCRYQAYSWMNOECUEYZOERIXWVPASMSCZYHKDOVDIJLSAOFOEHMHJDJTDZGKUUPIHEGZIERBZRQKWFPQMSCUQTTALIKQXPUGWUFMKPFWLTBBKOGHPAIOSAIDEUCXPUZRQAIEWL");

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
    msg.setTimeStamp(0.5707384745350228);
    msg.setSource(58264U);
    msg.setSourceEntity(72U);
    msg.setDestination(55457U);
    msg.setDestinationEntity(85U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5397682168849601;
    tmp_msg_0.speed_units = 178U;
    msg.control.set(tmp_msg_0);
    msg.duration = 16157U;
    msg.custom.assign("REJIUERHWXMTAKNLZLEONUNYRXKCGOETRHBOQBLH");

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
    msg.setTimeStamp(0.7144732028374244);
    msg.setSource(6405U);
    msg.setSourceEntity(153U);
    msg.setDestination(16744U);
    msg.setDestinationEntity(21U);
    msg.timeout = 44358U;
    msg.lat = 0.5405425499606311;
    msg.lon = 0.06111641595896933;
    msg.z = 0.857865854884668;
    msg.z_units = 176U;
    msg.speed = 0.3618753604307695;
    msg.speed_units = 27U;
    msg.bearing = 0.7819987408253893;
    msg.cross_angle = 0.37413938567400173;
    msg.width = 0.6235049406097927;
    msg.length = 0.6788488923557112;
    msg.hstep = 0.33665885938214746;
    msg.coff = 59U;
    msg.alternation = 176U;
    msg.flags = 229U;
    msg.custom.assign("CVQSPMEXPSYBT");

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
    msg.setTimeStamp(0.7620855428605967);
    msg.setSource(41021U);
    msg.setSourceEntity(18U);
    msg.setDestination(8140U);
    msg.setDestinationEntity(90U);
    msg.timeout = 42375U;
    msg.lat = 0.7168301467400818;
    msg.lon = 0.4443356741818455;
    msg.z = 0.460670954489532;
    msg.z_units = 32U;
    msg.speed = 0.03585603217161437;
    msg.speed_units = 111U;
    msg.bearing = 0.1759646709031052;
    msg.cross_angle = 0.5240150817429409;
    msg.width = 0.781773552569955;
    msg.length = 0.16061471544293004;
    msg.hstep = 0.24824724046801405;
    msg.coff = 63U;
    msg.alternation = 206U;
    msg.flags = 52U;
    msg.custom.assign("DQAYBVJIFULGVSYRWBWIZSQJQACYKZZFDGSJNHXKQJTPVCTFTVCMXEMRHXPVGWLWNSNONFDAWADRRPDBMTAEXXKILNXOBETPWOQFDPZELTZFYDMGOJEKXHOLPGORTBBDIGNMSVWKVXCIKLUUONYUBWKJVPHGNVBTJZYMOLPVKAFEJIZYEDZCTOAEKHGMOQCBRDSHASXHUKCNRUGGAUBSINJFFQQUZUMSSHHMYCRYLCLHEICIAEJTRR");

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
    msg.setTimeStamp(0.1119681030910219);
    msg.setSource(23897U);
    msg.setSourceEntity(242U);
    msg.setDestination(19376U);
    msg.setDestinationEntity(244U);
    msg.timeout = 16256U;
    msg.lat = 0.06312538147766356;
    msg.lon = 0.12758784830571424;
    msg.z = 0.4380316364499913;
    msg.z_units = 219U;
    msg.speed = 0.09008709434996698;
    msg.speed_units = 152U;
    msg.bearing = 0.6378069921541832;
    msg.cross_angle = 0.43992246581852945;
    msg.width = 0.2499397502109335;
    msg.length = 0.9080482787594876;
    msg.hstep = 0.05197084372317429;
    msg.coff = 121U;
    msg.alternation = 181U;
    msg.flags = 180U;
    msg.custom.assign("DZARDNXAMDKVGEIHIUPWLJRHOLIWCPLBWEGKYQPDHEVBIBDKMCXQGVBNSMWFAGEUUHAGMXXCMHRZDNNSHWTVBDQYYFSHUUIOICKKHYCNRDOGALOPRZNSHUMIJTQOGECACBWQLAFQKGIATFRZEKBVZXMILZSZWNYQRYFCLKUKFICLTNPWVPD");

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
    msg.setTimeStamp(0.23660319176200129);
    msg.setSource(27426U);
    msg.setSourceEntity(101U);
    msg.setDestination(60847U);
    msg.setDestinationEntity(109U);
    msg.timeout = 20045U;
    msg.lat = 0.8363668950520106;
    msg.lon = 0.20409896745795952;
    msg.z = 0.7864259612004277;
    msg.z_units = 147U;
    msg.speed = 0.7988963553160785;
    msg.speed_units = 18U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.41606510113308814;
    tmp_msg_0.y = 0.023698003514972088;
    tmp_msg_0.z = 0.14491483398138605;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TIJXPKGNISLEJOPZIUNZSAVATUCLPBGMKMHXZDEW");

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
    msg.setTimeStamp(0.7787808790268945);
    msg.setSource(25582U);
    msg.setSourceEntity(176U);
    msg.setDestination(60372U);
    msg.setDestinationEntity(243U);
    msg.timeout = 57604U;
    msg.lat = 0.01591814525215618;
    msg.lon = 0.2995554391659293;
    msg.z = 0.11604200125394648;
    msg.z_units = 116U;
    msg.speed = 0.1445842641810967;
    msg.speed_units = 107U;
    msg.custom.assign("NJGJUIKFADOBEGMOCQAGLUXZWGCJJYWKVPZWANBBHHJYFPMFUGUMFFHPTWYWHDPYJPORUPOVCZMEZCCHOTWMGPMXAOGJYRKZJZEXFDITLARPNWYTLZSVBSCRAFEEEWRSKNBBNRDSIAWUPBKFSVNCVQDHUYILIEKCQTRQTIACIGGUOLNTRYSOSYMHHPRXNBWCLQAOZODUXLVEJGEHTVXZLF");

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
    msg.setTimeStamp(0.27970456087997975);
    msg.setSource(30993U);
    msg.setSourceEntity(216U);
    msg.setDestination(33760U);
    msg.setDestinationEntity(70U);
    msg.timeout = 39248U;
    msg.lat = 0.336961392446102;
    msg.lon = 0.07107561569259091;
    msg.z = 0.6191972441778212;
    msg.z_units = 41U;
    msg.speed = 0.5036672268799776;
    msg.speed_units = 250U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6164497753886751;
    tmp_msg_0.y = 0.2141307155381219;
    tmp_msg_0.z = 0.009750803515906181;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PNTFVOFXPBONZEROFCCGTNAMMNMRIQJCUDRRRQYZDQFKRDGHQJZGCYZNMRBVMHJWBYXJYDGQLEKSAGIYKYNDOAPYWSNZYVZUTMFXQHCODXLOZLTPILPTEVYLKSDEEJRCIADCHX");

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
    msg.setTimeStamp(0.4008548978423808);
    msg.setSource(58446U);
    msg.setSourceEntity(3U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(183U);
    msg.x = 0.5377198460835438;
    msg.y = 0.7178035098865052;
    msg.z = 0.37929572749904017;

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
    msg.setTimeStamp(0.2700895182644951);
    msg.setSource(18743U);
    msg.setSourceEntity(8U);
    msg.setDestination(12716U);
    msg.setDestinationEntity(124U);
    msg.x = 0.5531342320741885;
    msg.y = 0.041034815122831136;
    msg.z = 0.8788374489332352;

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
    msg.setTimeStamp(0.5443281451258698);
    msg.setSource(17845U);
    msg.setSourceEntity(52U);
    msg.setDestination(25298U);
    msg.setDestinationEntity(84U);
    msg.x = 0.3579266576943999;
    msg.y = 0.4719340725720256;
    msg.z = 0.44185662538635595;

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
    msg.setTimeStamp(0.8624655343018286);
    msg.setSource(64534U);
    msg.setSourceEntity(179U);
    msg.setDestination(54229U);
    msg.setDestinationEntity(170U);
    msg.timeout = 31995U;
    msg.lat = 0.8578908431469378;
    msg.lon = 0.8718535235184475;
    msg.z = 0.9304250893922931;
    msg.z_units = 108U;
    msg.amplitude = 0.6749182897583026;
    msg.pitch = 0.4553059903563367;
    msg.speed = 0.816408780965661;
    msg.speed_units = 44U;
    msg.custom.assign("MFSICNKTMJJJRKIEABGSEGHKLIJCKMEYTGCYCTFXDBLJZFTWOIXEKAJSQUFFACIMBGEWHZPDMSQWDVXMGZZOOUNWVAYCFVYLQKACNADGOFEBKTHNSYOLWZBNWRTGVJDHIAZPHQARQBLRPSQXTQFPQRUYLBFXVOVHGUDBQEXKRKYCRNVVJDUBXMOSEBGOZFCPMXDIVDOVLIPLZAOUUPYRHYUKAEWWPUTWPENRLYZMJ");

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
    msg.setTimeStamp(0.5197468362284);
    msg.setSource(42691U);
    msg.setSourceEntity(94U);
    msg.setDestination(44240U);
    msg.setDestinationEntity(248U);
    msg.timeout = 26974U;
    msg.lat = 0.5934255409237624;
    msg.lon = 0.540083295184306;
    msg.z = 0.8558878615838008;
    msg.z_units = 86U;
    msg.amplitude = 0.1943842900355105;
    msg.pitch = 0.19444465613718598;
    msg.speed = 0.006755207399030128;
    msg.speed_units = 246U;
    msg.custom.assign("RYIDZEMXMIANPQEEHUGWHLQAWHNZTLPDKCETGVURQPMITIDRKDUVALSYQESECVTNTQPZBKFUSRRYFLXDYYLONGDOSBPXPKOEIBCILUGBLVMFZHGCGGBBKPC");

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
    msg.setTimeStamp(0.5828056380874177);
    msg.setSource(34455U);
    msg.setSourceEntity(16U);
    msg.setDestination(51421U);
    msg.setDestinationEntity(15U);
    msg.timeout = 42271U;
    msg.lat = 0.6975105287481828;
    msg.lon = 0.3894370646001716;
    msg.z = 0.608819275783022;
    msg.z_units = 66U;
    msg.amplitude = 0.8611094465391689;
    msg.pitch = 0.078661185217346;
    msg.speed = 0.756848262182311;
    msg.speed_units = 58U;
    msg.custom.assign("HZFFVLHPUEYGFZSROBIAKOTFPUKBLCIARWYYAPTDFCVJAMHPEIVWDIVFBAZELPXLXORKYTWSO");

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
    msg.setTimeStamp(0.33210859149197114);
    msg.setSource(1308U);
    msg.setSourceEntity(128U);
    msg.setDestination(29009U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.4178048696881137);
    msg.setSource(36183U);
    msg.setSourceEntity(161U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.7965484533955747);
    msg.setSource(54649U);
    msg.setSourceEntity(7U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.9159380527662436);
    msg.setSource(47609U);
    msg.setSourceEntity(75U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.5378397434855287;
    msg.lon = 0.89198732675334;
    msg.z = 0.6277393971071374;
    msg.z_units = 200U;
    msg.radius = 0.05927060796475625;
    msg.duration = 61179U;
    msg.speed = 0.36542520887001895;
    msg.speed_units = 12U;
    msg.custom.assign("TSHUIPZAAFJXUDNXOZQMBMWWNDWLRWCBTWCSNBAHCOPMHXKRBEBZIMQBLFFJNCXNXLGFKFVSGEEIVAJQJCCYSBKLLJGMEDPUTFFRQMNGYVZEOTPKSYCRJPIUKOSZNDTRGYHLHGJXXGRFCKWEICAPDEXUVPFRGUOOIPUHSGBILQMLTOULJJYTUYNRKEQAQZDZRBNYWXVVQDFTVGMTZQROXVVABUHD");

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
    msg.setTimeStamp(0.8235070287766443);
    msg.setSource(20274U);
    msg.setSourceEntity(52U);
    msg.setDestination(47774U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.7281289365591519;
    msg.lon = 0.06412662306705075;
    msg.z = 0.0842422147322548;
    msg.z_units = 92U;
    msg.radius = 0.9619828080429205;
    msg.duration = 881U;
    msg.speed = 0.680777302089765;
    msg.speed_units = 122U;
    msg.custom.assign("QENFRWSPMKPUKJZWZGWCPVNICDMUFOTJMQSJRBHFBMVKWCARYWEAYPODOKTAEEVYUGHOGULSHLRXIYFZCXTXZTQIHPALNYMQHDJRGVEKLNZXFBWUPLSZBIQTDXJQZXZFAJAYLURSHLJSUTOYFGILDNWFXKDNQHLBYOHAHCWRIFVCNDTMVYCSCPDEQTTNEGZUOJEVKKWRBY");

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
    msg.setTimeStamp(0.19031952502801763);
    msg.setSource(46305U);
    msg.setSourceEntity(143U);
    msg.setDestination(630U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.5661791005204867;
    msg.lon = 0.5964814806709255;
    msg.z = 0.8428013193794268;
    msg.z_units = 22U;
    msg.radius = 0.7496266771543583;
    msg.duration = 32008U;
    msg.speed = 0.09129870774260895;
    msg.speed_units = 123U;
    msg.custom.assign("UWQRIVYHIWSVIJUABVTADWRTVPOXYFWVGYFOMPRRWATOBPEHLTWYBMXOENSAORLRVHGMSKJAQHIMGGBWNJYGKOSHCDGJUPKTXNBUEFWDKZDBKBEBT");

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
    msg.setTimeStamp(0.9575764656550656);
    msg.setSource(58240U);
    msg.setSourceEntity(29U);
    msg.setDestination(29497U);
    msg.setDestinationEntity(125U);
    msg.timeout = 13212U;
    msg.flags = 71U;
    msg.lat = 0.13532986438068995;
    msg.lon = 0.20332602021424895;
    msg.start_z = 0.2347446173637211;
    msg.start_z_units = 122U;
    msg.end_z = 0.6114422240691634;
    msg.end_z_units = 95U;
    msg.radius = 0.9987491524276367;
    msg.speed = 0.40728047120562116;
    msg.speed_units = 149U;
    msg.custom.assign("YXEQXJVAMIKLQFMMLTACXJLTIZOSUISNSUYZGOVGLXPRYDCRRWBABCCDHFGBKOXUQERDZCMHASOXWKWYRQYQWTIFNHSKGWEGUPHQTQHEVOGSTYTARAVTYVTGIBBZGHLYUDUSPZJKEDZCTSUXMLXNDEJKBWVEVYNTJIKPEKCMHMHQXMPIPFDWOOCNFVBEXSJCFV");

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
    msg.setTimeStamp(0.8496772830623115);
    msg.setSource(36447U);
    msg.setSourceEntity(73U);
    msg.setDestination(38037U);
    msg.setDestinationEntity(194U);
    msg.timeout = 8418U;
    msg.flags = 118U;
    msg.lat = 0.9776075931246797;
    msg.lon = 0.31452572056991757;
    msg.start_z = 0.25569069638452036;
    msg.start_z_units = 143U;
    msg.end_z = 0.1730989405835177;
    msg.end_z_units = 92U;
    msg.radius = 0.38692821056999915;
    msg.speed = 0.7724184371768357;
    msg.speed_units = 16U;
    msg.custom.assign("FNSABYIYOHGFVQRXAHOOZATJNIRDIANYGBAJ");

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
    msg.setTimeStamp(0.27915740907183395);
    msg.setSource(55005U);
    msg.setSourceEntity(51U);
    msg.setDestination(33890U);
    msg.setDestinationEntity(92U);
    msg.timeout = 56082U;
    msg.flags = 111U;
    msg.lat = 0.25527751361792284;
    msg.lon = 0.253710892948809;
    msg.start_z = 0.30927121575816197;
    msg.start_z_units = 50U;
    msg.end_z = 0.28660137707198186;
    msg.end_z_units = 219U;
    msg.radius = 0.30688136677642497;
    msg.speed = 0.37352127594678564;
    msg.speed_units = 2U;
    msg.custom.assign("QMZVJFAQIIHNQGPSBYGLBSGWONBXDCZZOMPQJTLGLQPAZKQHQNDGSKEZWBDXEVX");

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
    msg.setTimeStamp(0.04183894158271695);
    msg.setSource(3342U);
    msg.setSourceEntity(252U);
    msg.setDestination(40739U);
    msg.setDestinationEntity(84U);
    msg.timeout = 22100U;
    msg.lat = 0.4220256322542729;
    msg.lon = 0.4310800512990738;
    msg.z = 0.9787819629163372;
    msg.z_units = 37U;
    msg.speed = 0.3264806752471492;
    msg.speed_units = 102U;
    msg.custom.assign("YNXGTANYBRABJCPOHCZKSWRWZPMJMZZEFEAXDFRXANXCYPCHITCESCUEB");

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
    msg.setTimeStamp(0.6468389681687241);
    msg.setSource(57035U);
    msg.setSourceEntity(138U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(196U);
    msg.timeout = 25391U;
    msg.lat = 0.16668984470513903;
    msg.lon = 0.9234113255461474;
    msg.z = 0.31890969876743713;
    msg.z_units = 203U;
    msg.speed = 0.504948689849982;
    msg.speed_units = 66U;
    msg.custom.assign("EQNYGSPWXZRLVZJBMCSMWWUHTLTSX");

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
    msg.setTimeStamp(0.9651202031169661);
    msg.setSource(62098U);
    msg.setSourceEntity(63U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(171U);
    msg.timeout = 61482U;
    msg.lat = 0.5935793386448076;
    msg.lon = 0.7493458638868539;
    msg.z = 0.6980474168833728;
    msg.z_units = 106U;
    msg.speed = 0.7718740158347881;
    msg.speed_units = 118U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.01507814005797925;
    tmp_msg_0.y = 0.27429849968030184;
    tmp_msg_0.z = 0.9682571112232085;
    tmp_msg_0.t = 0.41791491257733204;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IHWAGRWDKOZ");

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
    msg.setTimeStamp(0.12693417902574766);
    msg.setSource(52654U);
    msg.setSourceEntity(238U);
    msg.setDestination(45882U);
    msg.setDestinationEntity(252U);
    msg.x = 0.49975198874732285;
    msg.y = 0.6872866384114379;
    msg.z = 0.004330182471925514;
    msg.t = 0.6250249583670007;

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
    msg.setTimeStamp(0.44633674096272713);
    msg.setSource(51899U);
    msg.setSourceEntity(189U);
    msg.setDestination(33317U);
    msg.setDestinationEntity(69U);
    msg.x = 0.7920054813256155;
    msg.y = 0.8338393860092802;
    msg.z = 0.7468432030764925;
    msg.t = 0.001686594196914526;

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
    msg.setTimeStamp(0.21226120774726998);
    msg.setSource(47466U);
    msg.setSourceEntity(134U);
    msg.setDestination(14802U);
    msg.setDestinationEntity(176U);
    msg.x = 0.35572607951420776;
    msg.y = 0.6749865112215755;
    msg.z = 0.24113188058570034;
    msg.t = 0.10729807933611035;

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
    msg.setTimeStamp(0.6754747958288553);
    msg.setSource(54337U);
    msg.setSourceEntity(59U);
    msg.setDestination(24424U);
    msg.setDestinationEntity(187U);
    msg.timeout = 3800U;
    msg.name.assign("GIRXYOJLEAAONXXQSZGLHSHIQQWRJBPMKKUBLCCBTLRUQVMNYGAEHWHTWWVYUKCGMOLOACHECIDOGEOQJBCBKLQDYXGIVVDWZFNXVNXVPHSBDPVZNIPEJQIRTFRNUUNZCLTYAURJOOEMBHAFERTPSFZDZIVZTEHXYWXWPBAZKTTXGEQSDMRFUSGSJPYZLWHJXJSYFZBKKKIQQMNHLTUMVDJFEWUTWKFDIMYAKSPNPGVMJRCLDYSADMPOFC");
    msg.custom.assign("IVUGFGBIADMBCTBJOBPZWNLPRQRKIPYAMTPULKULUSZBLICFMBXGICILVGBS");

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
    msg.setTimeStamp(0.8699278124097061);
    msg.setSource(1584U);
    msg.setSourceEntity(234U);
    msg.setDestination(41097U);
    msg.setDestinationEntity(13U);
    msg.timeout = 11439U;
    msg.name.assign("HZNQAOITSLOUKZRNPVDHRBLINPQRQSWJFOKLXMQCIAIJOZTKSCGMBEYVKJLDTEJCOIHBLHRUIP");
    msg.custom.assign("PEVVZBVUPBDECAYYGXTRXSOSEUYHWUFAKKMCTURASXQDJYNQPM");

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
    msg.setTimeStamp(0.7329355148868846);
    msg.setSource(14706U);
    msg.setSourceEntity(14U);
    msg.setDestination(9912U);
    msg.setDestinationEntity(7U);
    msg.timeout = 34131U;
    msg.name.assign("DKVQSLIHGEIRCQHHSLZLMQJKSTMXCGOSCZSZU");
    msg.custom.assign("GQQNSFKEAXQMIBRGBPWIRJGVBZJPHMXKOWYRZFABDMWQDPVGAIYXNKPQKSTMNJYRLFZBUDYWZLPXCXFNELFLNANGLHUYRXKSJGOAKOGMNRDYWAJUWTLWDIFWHC");

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
    msg.setTimeStamp(0.328160058792362);
    msg.setSource(47797U);
    msg.setSourceEntity(161U);
    msg.setDestination(57313U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.841779844706643;
    msg.lon = 0.7948408597373128;
    msg.z = 0.5798492900427153;
    msg.z_units = 30U;
    msg.speed = 0.6880750303869152;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.599233849544076;
    tmp_msg_0.y = 0.7572787041130936;
    tmp_msg_0.z = 0.09476358536426832;
    tmp_msg_0.t = 0.7415269742293514;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 12926U;
    tmp_msg_1.off_x = 0.7762448515507937;
    tmp_msg_1.off_y = 0.33067233167117405;
    tmp_msg_1.off_z = 0.10176749136173113;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.4128067701560123;
    msg.custom.assign("PKLWGJOUWLSRWCDPPT");

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
    msg.setTimeStamp(0.7023011793608684);
    msg.setSource(43457U);
    msg.setSourceEntity(25U);
    msg.setDestination(46788U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.4216733671848939;
    msg.lon = 0.9181978239885863;
    msg.z = 0.41094984298034176;
    msg.z_units = 32U;
    msg.speed = 0.13813208399397592;
    msg.speed_units = 194U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7369949696960215;
    tmp_msg_0.y = 0.6883839319773448;
    tmp_msg_0.z = 0.010700504482783257;
    tmp_msg_0.t = 0.9521091205356009;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5177737512034246;
    msg.custom.assign("SZYBRGFXTGYUDWTEYFYCPFDWXUMEYKPNXRNHFTXVMBOJORVWVFJKQBKMRZAWPMVHHAGISUCUCXDQTUKMVBCLE");

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
    msg.setTimeStamp(0.42573798083968284);
    msg.setSource(45964U);
    msg.setSourceEntity(229U);
    msg.setDestination(46448U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.08529151640059163;
    msg.lon = 0.7743085161837523;
    msg.z = 0.7890120846711847;
    msg.z_units = 132U;
    msg.speed = 0.6478543970548469;
    msg.speed_units = 202U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7707835147014255;
    tmp_msg_0.y = 0.327644192305391;
    tmp_msg_0.z = 0.9861878933983128;
    tmp_msg_0.t = 0.5205036442354848;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 49273U;
    tmp_msg_1.off_x = 0.9868829479068705;
    tmp_msg_1.off_y = 0.10847876731916406;
    tmp_msg_1.off_z = 0.5976109943717139;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.052635931631581645;
    msg.custom.assign("EFTEXXNECPQZUQYXCLAHOFGEKDTTPZBDBLNKTJAJKHVTUZGAOETOIBPYJSERSPJFTMOGOCRBHJGEHASFQVWRHAQTZHSLBQAUYNSOGNLBDRCWIERPKXCMUWFSSVZVMQWLRAUXIG");

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
    msg.setTimeStamp(0.7233025222945065);
    msg.setSource(34682U);
    msg.setSourceEntity(232U);
    msg.setDestination(15306U);
    msg.setDestinationEntity(1U);
    msg.vid = 40606U;
    msg.off_x = 0.16865167076950527;
    msg.off_y = 0.6763274876566744;
    msg.off_z = 0.3402609783454694;

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
    msg.setTimeStamp(0.4788483580561932);
    msg.setSource(16415U);
    msg.setSourceEntity(111U);
    msg.setDestination(929U);
    msg.setDestinationEntity(18U);
    msg.vid = 40129U;
    msg.off_x = 0.945050001390801;
    msg.off_y = 0.3151256941990317;
    msg.off_z = 0.15388459075609184;

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
    msg.setTimeStamp(0.939494931304826);
    msg.setSource(16888U);
    msg.setSourceEntity(42U);
    msg.setDestination(59100U);
    msg.setDestinationEntity(170U);
    msg.vid = 62605U;
    msg.off_x = 0.3977073496094774;
    msg.off_y = 0.5278778861255479;
    msg.off_z = 0.6044349616216178;

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
    msg.setTimeStamp(0.3801359743858246);
    msg.setSource(43613U);
    msg.setSourceEntity(130U);
    msg.setDestination(26907U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.560797340793044);
    msg.setSource(22293U);
    msg.setSourceEntity(143U);
    msg.setDestination(43405U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.8188069612577084);
    msg.setSource(41473U);
    msg.setSourceEntity(197U);
    msg.setDestination(59690U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.7354776721710264);
    msg.setSource(63506U);
    msg.setSourceEntity(234U);
    msg.setDestination(7692U);
    msg.setDestinationEntity(180U);
    msg.mid = 22139U;

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
    msg.setTimeStamp(0.7670723589316893);
    msg.setSource(50463U);
    msg.setSourceEntity(189U);
    msg.setDestination(31759U);
    msg.setDestinationEntity(179U);
    msg.mid = 49496U;

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
    msg.setTimeStamp(0.6006560931782752);
    msg.setSource(40122U);
    msg.setSourceEntity(12U);
    msg.setDestination(49552U);
    msg.setDestinationEntity(55U);
    msg.mid = 1656U;

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
    msg.setTimeStamp(0.611267245041608);
    msg.setSource(3030U);
    msg.setSourceEntity(44U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(203U);
    msg.state = 202U;
    msg.eta = 7422U;
    msg.info.assign("VWOBIMJFPUGTGWDBUUDQYRHIXXWNZVRMSQWYPETZXQLVXQMELCITZSSBQKPHHPNNCPOJAYLVKKSAHCYVJECPMTQDIRNRMYMSKJBGQSHJKLXMVPHDFIOVUOVKQGTWWFZONAXJLIXTQYEEVS");

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
    msg.setTimeStamp(0.660169808384072);
    msg.setSource(45659U);
    msg.setSourceEntity(107U);
    msg.setDestination(16915U);
    msg.setDestinationEntity(234U);
    msg.state = 52U;
    msg.eta = 6402U;
    msg.info.assign("IFCFGVGSYCHNRKWMJRNJTEMHTVYJTEQTGLTEMOUEYIVWWQRSUHXXQCLYBQPRHWNMVFXIWFUQJJLPSPMFYBJTVUYDDCGJNUMVEGIALOLAXBIEMZKHDCRTPEOQJRIHVNUDWYTZMEUZGHOFXLMDNIPQBHXAOROQDBWKBLIAP");

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
    msg.setTimeStamp(0.8019908565756406);
    msg.setSource(15229U);
    msg.setSourceEntity(137U);
    msg.setDestination(48368U);
    msg.setDestinationEntity(42U);
    msg.state = 139U;
    msg.eta = 10518U;
    msg.info.assign("XRHINNAPQOXTETQDIFATOCHIVUJEBANMEKFJPLDELWOBRIUBUTTHVSNDRZSKVMGCMQNXQUSUWXSZHPMGEXDYIPJKBTOSDCYCLWTIYVQMZMYBRSWLQFWLGMBWVYUIGKPBAOYUQJSUZUXSDRIXROEGHAFTNPJXHHYQYCLPZJCZCFVNKSMERZCQYHDWSWOPGUPCZEONRH");

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
    msg.setTimeStamp(0.5673168155502599);
    msg.setSource(11587U);
    msg.setSourceEntity(156U);
    msg.setDestination(9284U);
    msg.setDestinationEntity(53U);
    msg.system = 24000U;
    msg.duration = 22893U;
    msg.speed = 0.4092384301143762;
    msg.speed_units = 51U;
    msg.x = 0.27185105615555893;
    msg.y = 0.3228582577385847;
    msg.z = 0.9583712487084557;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.5930231218231542);
    msg.setSource(3933U);
    msg.setSourceEntity(123U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(146U);
    msg.system = 27574U;
    msg.duration = 64874U;
    msg.speed = 0.05073758590259647;
    msg.speed_units = 171U;
    msg.x = 0.12557633358325482;
    msg.y = 0.7861618629908937;
    msg.z = 0.12430210698007893;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.09463704340155454);
    msg.setSource(61225U);
    msg.setSourceEntity(60U);
    msg.setDestination(61063U);
    msg.setDestinationEntity(131U);
    msg.system = 3056U;
    msg.duration = 12174U;
    msg.speed = 0.8547912402123791;
    msg.speed_units = 127U;
    msg.x = 0.1653775404762;
    msg.y = 0.4965504473177551;
    msg.z = 0.8897439423432555;
    msg.z_units = 176U;

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
    msg.setTimeStamp(0.5471559859612537);
    msg.setSource(18433U);
    msg.setSourceEntity(102U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.689640031078072;
    msg.lon = 0.5163721102682032;
    msg.speed = 0.34079767081485535;
    msg.speed_units = 225U;
    msg.duration = 33400U;
    msg.sys_a = 45140U;
    msg.sys_b = 39097U;
    msg.move_threshold = 0.518312662713819;

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
    msg.setTimeStamp(0.40757743138435454);
    msg.setSource(7707U);
    msg.setSourceEntity(244U);
    msg.setDestination(16641U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.7921546841347984;
    msg.lon = 0.025654319914233836;
    msg.speed = 0.16047286614012013;
    msg.speed_units = 65U;
    msg.duration = 53190U;
    msg.sys_a = 20998U;
    msg.sys_b = 51048U;
    msg.move_threshold = 0.8326263082270658;

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
    msg.setTimeStamp(0.045358004330677604);
    msg.setSource(32623U);
    msg.setSourceEntity(69U);
    msg.setDestination(38543U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.48968750838629893;
    msg.lon = 0.6595073584885303;
    msg.speed = 0.03713611200327249;
    msg.speed_units = 38U;
    msg.duration = 34842U;
    msg.sys_a = 46092U;
    msg.sys_b = 27413U;
    msg.move_threshold = 0.03983184794953332;

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
    msg.setTimeStamp(0.06823028750541182);
    msg.setSource(741U);
    msg.setSourceEntity(109U);
    msg.setDestination(32085U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.9932516281531313;
    msg.lon = 0.7837231427499595;
    msg.z = 0.231146909723829;
    msg.z_units = 26U;
    msg.speed = 0.7411964851082649;
    msg.speed_units = 84U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5450871642057975;
    tmp_msg_0.lon = 0.5183106097202316;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DRKWFKWKKHIOSNCHDFPDVYOVIFBTINKSXFYPURAEAQOBCEGSDJWGQFNEPUHXKWSWFYNXZXPNTTDHVBMQMJFTOGOIYBGZBGPVGSSGKASYZKXJLILNTVEHEHAEMDIVIUHXQLCLSYPRMOFGJPVLGEFWALWCBLMMRUJXDAMNQZVVQRQUDKGRTHMUNZEUEIRICYLOUPRKUOMXACCJMSJAVRZTFHWPDDJTPAWIZCBJQOYNTBQ");

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
    msg.setTimeStamp(0.1842007165628755);
    msg.setSource(36412U);
    msg.setSourceEntity(116U);
    msg.setDestination(19433U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.21875346854665423;
    msg.lon = 0.5352767717963048;
    msg.z = 0.5817098003607867;
    msg.z_units = 76U;
    msg.speed = 0.9225593525610924;
    msg.speed_units = 83U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6137084634574906;
    tmp_msg_0.lon = 0.1661938563257147;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("COUARVJGIKFBWHHDLGBBPVQADOUECOPOPUCKRHYHBPMSZWBEIWXHNMDSWQRPQAOAQEYWGSQXPONUYLLLFTNQOIRJVAUBFZZZDVAOPMDHTKIYZKKUVYSLWZRMWYMFSFTDRGLWWVENJNQFTTI");

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
    msg.setTimeStamp(0.5105718292365509);
    msg.setSource(61036U);
    msg.setSourceEntity(27U);
    msg.setDestination(39022U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.524891667210122;
    msg.lon = 0.6832351162637135;
    msg.z = 0.8733167462945706;
    msg.z_units = 243U;
    msg.speed = 0.4089597895433761;
    msg.speed_units = 130U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8936224703125575;
    tmp_msg_0.lon = 0.6646726263549507;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CLLODKPOUNVWJVLRNLLEGUDQFTTGMIRNYCARVFFHDCAIYYKMFOVREBWWCIHVYUSHONZRHJCHBXYPXDWNWFSTDKGNSMHOTTBBYBPTQSA");

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
    msg.setTimeStamp(0.493798405077602);
    msg.setSource(26531U);
    msg.setSourceEntity(161U);
    msg.setDestination(4240U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.7635427596682789;
    msg.lon = 0.30946811016142484;

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
    msg.setTimeStamp(0.6946399555565533);
    msg.setSource(34724U);
    msg.setSourceEntity(11U);
    msg.setDestination(23299U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.42298232002377156;
    msg.lon = 0.8366839076320859;

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
    msg.setTimeStamp(0.09318323650523053);
    msg.setSource(32569U);
    msg.setSourceEntity(123U);
    msg.setDestination(35948U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.7557614200900998;
    msg.lon = 0.2343740294657456;

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
    msg.setTimeStamp(0.6892157835825327);
    msg.setSource(64254U);
    msg.setSourceEntity(156U);
    msg.setDestination(64398U);
    msg.setDestinationEntity(188U);
    msg.timeout = 52191U;
    msg.lat = 0.03413919155653333;
    msg.lon = 0.3980127735437501;
    msg.z = 0.9374286504186169;
    msg.z_units = 199U;
    msg.pitch = 0.4252001092928658;
    msg.amplitude = 0.3047779906135436;
    msg.duration = 58902U;
    msg.speed = 0.8103499614129951;
    msg.speed_units = 43U;
    msg.radius = 0.6845381104155129;
    msg.direction = 155U;
    msg.custom.assign("NGQIDCLQPDXNEAQPYBOUTEBEFGMVQBKPYTEDQAFRWKFVFXYRBRZEAJHLISLIXTARNYMHAZRHIWMLJIHNMSZ");

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
    msg.setTimeStamp(0.0425354483537046);
    msg.setSource(10855U);
    msg.setSourceEntity(196U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(224U);
    msg.timeout = 53116U;
    msg.lat = 0.5043064834696442;
    msg.lon = 0.08312897178033862;
    msg.z = 0.11039163744227143;
    msg.z_units = 72U;
    msg.pitch = 0.30674860397643466;
    msg.amplitude = 0.2495820780978667;
    msg.duration = 29220U;
    msg.speed = 0.486353092780215;
    msg.speed_units = 229U;
    msg.radius = 0.7460099596850522;
    msg.direction = 194U;
    msg.custom.assign("FAXKAHECVHJWVYIYASJZYKEYZAWRTFJIVDSJCQZUWEQITNDOFEBPBLVJTOYGTUAQNDXYGOLUIDVMSROUZOSHGDKCIRQVFTGLHKCLMQIQFHHSHXRDKKJUSZNIZALKTVHCHEAUPWZTOPQGBQFYVOPCIJGWMWZXMTPWFMPROMXSUUJGVXCERSLLUPAIBBUSDDTQGWWNYDOJNMXIPETLHDBMLNARECYVKXSONZY");

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
    msg.setTimeStamp(0.156095589043458);
    msg.setSource(47838U);
    msg.setSourceEntity(147U);
    msg.setDestination(11777U);
    msg.setDestinationEntity(5U);
    msg.timeout = 19537U;
    msg.lat = 0.6242484822071588;
    msg.lon = 0.40418266760266297;
    msg.z = 0.3151569343869164;
    msg.z_units = 199U;
    msg.pitch = 0.07958904989638815;
    msg.amplitude = 0.47508256588619624;
    msg.duration = 18620U;
    msg.speed = 0.9352701819894621;
    msg.speed_units = 123U;
    msg.radius = 0.4486773035465227;
    msg.direction = 253U;
    msg.custom.assign("PLOSXVSGXHMRMPTXFLMMVFKYHUZELNARMUDDBOOCBXWPBCWEKIRBPKXFYEUYNYJETRGQPJMSGAELYOKGVSVATJLULNXCHPCMAUDMICRGZIGMAFZQXJNPCZQPXRANRZUSSTTHNQFOZLODNJMFDEDHVZWZUXDZXLHJWFJRQIBNGGHVHZDRWBGCYCWQT");

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
    msg.setTimeStamp(0.9475485295724001);
    msg.setSource(54879U);
    msg.setSourceEntity(163U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("FANLOSWFBHVLJSXRQAWWBSGBGNTJITMFNJIMSTRRIPHWDGKWWEDDZWAVCYJQYRIYTLYFYHYZURGMVHZKUHOEP");
    msg.reference_frame = 127U;
    msg.custom.assign("DSTWPIYZUYANODBGQAEVOSKRRRQIEYUJUHVPMNEJVYPSSIACSGF");

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
    msg.setTimeStamp(0.420226586238881);
    msg.setSource(53643U);
    msg.setSourceEntity(40U);
    msg.setDestination(9251U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("WXUMKMEFQFCGDAQLSVGYLIJJVOKSUINZQZSRRPVDEWMPBJBZGXIYHXPDAHYQEMTXYYVVBAHHCPCNSBFOHDHXWZJANCCNQFPEOQUMRNHBMVRFOSGYCDNFFRNWQBLYCTYTDMMLFSYVWJJBAWALNJKFPNMEQGOLHUWGSKUUXCBAKUVHYLTIORRHQWWKPTOCENIIAIGXKZO");
    msg.reference_frame = 7U;
    msg.custom.assign("YFSYITBEDFCIPWHAKJVKXJOWRUSAEOAILBXSPZEKVTVYTPNWCAFDUBDTKYOWKUSTZEZNNHNZAJQIXCHRAHLEXRURDQQKSHBJGXYVZGRILOEGMZQONTVDOYMYUJZQXCL");

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
    msg.setTimeStamp(0.625281046600107);
    msg.setSource(16111U);
    msg.setSourceEntity(156U);
    msg.setDestination(65456U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("JDGZNWHIRNADOJMEZSHATMKKEZSJRLSKICOXFDALHAUOFLOJJFREHTGTCGISBMXPFH");
    msg.reference_frame = 105U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3418U;
    tmp_msg_0.off_x = 0.43670548526943476;
    tmp_msg_0.off_y = 0.6456164187533895;
    tmp_msg_0.off_z = 0.7248562472465538;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VDSKZWQEOBTXPYECRLMIYAEQGTLEYLCZOEPNXZCMRZIVAGKFRQKWLBRHQBOODONWSRWULMUGODNFPDMRXSAOZXZJXWWMPJJNJRAAXJYGEWYNHWRMZGPJUHFBDERDIHINBFWPZPEBVHGTRIQUYMMLSCEKJYQMFFVXTJNOCCUHUZKSCPALLEKHYMGHNSUNVUTSVKSDTFVAHTQBVXILGJIVHZTIDFOSKDXAQLSW");

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
    msg.setTimeStamp(0.5392651208224449);
    msg.setSource(25709U);
    msg.setSourceEntity(216U);
    msg.setDestination(739U);
    msg.setDestinationEntity(78U);
    msg.group_name.assign("DHGQKQWUJBRZKMENNBLNPWQ");
    msg.formation_name.assign("IZXKQSNGHQNXDIUPMPAKHOECLZHTRDQMTNOTZQLGGVDNKSRAVDBKBMJGPAFPFGQPLVVFERQLWEHAWXJLDXEJLJNIHGLDVFWIRGJRKASBGLLJLKZQBEWATOCCEJIJDSCRAOMVHVUMZIHSPYYZUNWEPMGGBEMUUBPZMKBQREWYSSWDNNFFAVOSBBUXOCCDYHV");
    msg.plan_id.assign("AVUGBOMXWTVRLUZRERNFTLIPMLTXTHUHFPCDYHVMMKVKURFRNJGTXZVTJIMGVIVGBANFOLJVLLCSTPLKXTPNBCWXKKXYYQZNDZAZIFFIDNGZZLEJWBKOJUGZYSAQQ");
    msg.description.assign("QJEOAWDTWDICHKUWBREEOZMBAVNZFUKROSQNYSQGRCS");
    msg.leader_speed = 0.9285090308076378;
    msg.leader_bank_lim = 0.10814719781738746;
    msg.pos_sim_err_lim = 0.10535524390706408;
    msg.pos_sim_err_wrn = 0.3615586960035658;
    msg.pos_sim_err_timeout = 7665U;
    msg.converg_max = 0.9991836748149419;
    msg.converg_timeout = 27848U;
    msg.comms_timeout = 41746U;
    msg.turb_lim = 0.57856055087791;
    msg.custom.assign("DBJCWRHWHIPIDMDXLRILIATMIQOUJDYUUXGIVCEJGWVANSYHASDQZVVUKAQEVDXROZRXPRMTASALECBMZYCBGVCMMBFFFUEBYHLQTSFXHHMWLKENXPWWFTOROBUUSGRQPRJINYGKMHEKBVVYXWNCZEVPTENKA");

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
    msg.setTimeStamp(0.6319572372580082);
    msg.setSource(10283U);
    msg.setSourceEntity(65U);
    msg.setDestination(15292U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("SKVEUTBSOSYBRYIUXFEQBOSHGZRNEYRASDNPXXTJPLEDMMQOBADIDPYEYJWTHFPVIXTHOMUWIDPXTWEMGMQKZCHIXUIILRJ");
    msg.formation_name.assign("UTRPGNKDSRWLDWLKZJDDFWBYEROSIIHXEHJAHMFNYMPJUJVKSYBGTGXDCAYXWMIKNZNPWBHJSGVOKNTQIQSPQBRWZSKOAMJIZCGKXLAUSUTKARAWVAVDEELMICTZUFJKTYFLIBORCNVMZEZNYUCZXDIHBCCDMV");
    msg.plan_id.assign("KTPAAFXKLRRPEUBDDTGNXDEZIZRORZYTPYLBHNWXNKMSXWCIMYCEUMYRJMXNIXXJKWGTNLZVYFJIQPHRIMLRJMVIPYVGXVPAUZGEDCCZWBZYKAATPODBGFOYLHIJOZANXWQCGGKJHEVMBPFOLTADOFHIIHQGSVKJQMOJLBSVGRUEUBREQSGTFWDAUOTMUQQFA");
    msg.description.assign("QBMYKQGFZNPLUDVAFRWKGCPIIQTFG");
    msg.leader_speed = 0.493135902960957;
    msg.leader_bank_lim = 0.7616670390957114;
    msg.pos_sim_err_lim = 0.20308595441046629;
    msg.pos_sim_err_wrn = 0.5454879732021874;
    msg.pos_sim_err_timeout = 31104U;
    msg.converg_max = 0.6061198782567623;
    msg.converg_timeout = 45601U;
    msg.comms_timeout = 14220U;
    msg.turb_lim = 0.8901580493819172;
    msg.custom.assign("LLTCNJOMSVKWOSVBTRMBRCQKGZWLHDJYQGQAPCJOTBZMVWXEBTPSWBTANLANHFGSGFMGPELNTXHMMOZJHSUKGGQWRSKURAVMWIFNPLVSKADXDLPXKHWRQPFMUTYTYOZVZIYYJFWHDRXYNXEECEIPCCIOIARICQIVVJAUHQDUSDJVIYKWAWBZRXPCDBZQZNZUKLQFUKYURNJEOJCPQYEDDXEHEFETCLIBNUXBGFHGOJM");

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
    msg.setTimeStamp(0.48463055480616035);
    msg.setSource(35067U);
    msg.setSourceEntity(247U);
    msg.setDestination(27825U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("YTHTNPNMBIZVTVZZQLISIHDMMZWQAEXBBWJBBQJHADHRCKSPHRKJXWDAUVJAURYTKJVRHOEYGBGOYIKCEQSRRFVLZSICXGLXMCWQCHPDNGWSITUNNJNWWHRCGMFBSRPHPSJXNZOPUIPKJVMULVGAGJFVZLKZPWFSOPCTTBRDKLDMSKGI");
    msg.formation_name.assign("NXTDFCZRWOXZCBDCKDNSBEVMGUOAUEYEQTGFKOIJCMMQWFKMMLWJPOQHPHRPCPJSWZEYZHABRFFUFNWYEMAFMLVDAZNJGXNSNMALBMHLXPUZVINBJEUHICOFR");
    msg.plan_id.assign("UKMUFCAEVYJXUSGJFNIQQG");
    msg.description.assign("SDDZZLJPURKNAJAJSSEQUKLVPMBGSHTIODDBJMDEVSOQPOFTIYTMQPZXXVRWMXZYMWEAUZXGKPNVBFQTOCVXOUNIASDICVXKDEFEONLGXCYHBFHIBIKQGNZTEUXPYRPIEQCCMAKJFCIBGUCACWVNLPNGJTKHGSXMBKWVCUWLFDJLARNWBYYDWEGGNBZORBFRHEAHJJSDYZRFOHQUW");
    msg.leader_speed = 0.6036593662302198;
    msg.leader_bank_lim = 0.44595258278464334;
    msg.pos_sim_err_lim = 0.9062519035337833;
    msg.pos_sim_err_wrn = 0.2115433964693254;
    msg.pos_sim_err_timeout = 58654U;
    msg.converg_max = 0.9491363276345476;
    msg.converg_timeout = 35400U;
    msg.comms_timeout = 59306U;
    msg.turb_lim = 0.740706344007505;
    msg.custom.assign("WUONKLMZYNSXCNNIQKWTDNFCWITRFCPVHAZSLBKMQFPFGMUPUPD");

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
    msg.setTimeStamp(0.22864734506772966);
    msg.setSource(1210U);
    msg.setSourceEntity(181U);
    msg.setDestination(63084U);
    msg.setDestinationEntity(223U);
    msg.control_src = 36506U;
    msg.control_ent = 161U;
    msg.timeout = 0.3146435951750238;
    msg.loiter_radius = 0.9106394872793374;
    msg.altitude_interval = 0.1949095246553545;

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
    msg.setTimeStamp(0.5945209786034114);
    msg.setSource(4049U);
    msg.setSourceEntity(181U);
    msg.setDestination(37819U);
    msg.setDestinationEntity(21U);
    msg.control_src = 55379U;
    msg.control_ent = 181U;
    msg.timeout = 0.7302475987863282;
    msg.loiter_radius = 0.1449609492603634;
    msg.altitude_interval = 0.35036316118261346;

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
    msg.setTimeStamp(0.6377402798680823);
    msg.setSource(57730U);
    msg.setSourceEntity(238U);
    msg.setDestination(10215U);
    msg.setDestinationEntity(211U);
    msg.control_src = 42153U;
    msg.control_ent = 214U;
    msg.timeout = 0.5815253137810746;
    msg.loiter_radius = 0.49737838404015944;
    msg.altitude_interval = 0.13344549388909321;

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
    msg.setTimeStamp(0.23950862257308503);
    msg.setSource(14025U);
    msg.setSourceEntity(149U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(100U);
    msg.flags = 22U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2686935023340933;
    tmp_msg_0.speed_units = 5U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.11896227013938787;
    tmp_msg_1.z_units = 24U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1934589631639433;
    msg.lon = 0.22977188878645716;
    msg.radius = 0.09740923353414865;

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
    msg.setTimeStamp(0.4071657048561572);
    msg.setSource(64931U);
    msg.setSourceEntity(34U);
    msg.setDestination(11004U);
    msg.setDestinationEntity(225U);
    msg.flags = 118U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7473488269408982;
    tmp_msg_0.speed_units = 5U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.29193102066466525;
    tmp_msg_1.z_units = 214U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.41735488608909;
    msg.lon = 0.3309641077928107;
    msg.radius = 0.7370090356831075;

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
    msg.setTimeStamp(0.12329566930201707);
    msg.setSource(51715U);
    msg.setSourceEntity(187U);
    msg.setDestination(51396U);
    msg.setDestinationEntity(220U);
    msg.flags = 111U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8782644876132459;
    tmp_msg_0.speed_units = 217U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5575914561762;
    tmp_msg_1.z_units = 128U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7582353803659247;
    msg.lon = 0.5207610211543612;
    msg.radius = 0.6577448269956412;

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
    msg.setTimeStamp(0.8517433977030918);
    msg.setSource(8584U);
    msg.setSourceEntity(78U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(47U);
    msg.control_src = 56394U;
    msg.control_ent = 218U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 99U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5622948073862725;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6899668571171106;
    tmp_tmp_msg_0_1.z_units = 83U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8879817234041726;
    tmp_msg_0.lon = 0.1958130509534386;
    tmp_msg_0.radius = 0.6546139754809106;
    msg.reference.set(tmp_msg_0);
    msg.state = 252U;
    msg.proximity = 238U;

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
    msg.setTimeStamp(0.7795776732667398);
    msg.setSource(11154U);
    msg.setSourceEntity(181U);
    msg.setDestination(51593U);
    msg.setDestinationEntity(63U);
    msg.control_src = 16902U;
    msg.control_ent = 204U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 202U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.876817394624409;
    tmp_tmp_msg_0_0.speed_units = 12U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.29795506159644336;
    tmp_tmp_msg_0_1.z_units = 181U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6388760181559128;
    tmp_msg_0.lon = 0.7852717895771444;
    tmp_msg_0.radius = 0.20221259398481717;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 219U;

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
    msg.setTimeStamp(0.9640390153776075);
    msg.setSource(1431U);
    msg.setSourceEntity(225U);
    msg.setDestination(6119U);
    msg.setDestinationEntity(86U);
    msg.control_src = 36813U;
    msg.control_ent = 160U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5325257378271475;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6779228267229354;
    tmp_tmp_msg_0_1.z_units = 216U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8029881968492142;
    tmp_msg_0.lon = 0.30354066081523834;
    tmp_msg_0.radius = 0.7922749586026273;
    msg.reference.set(tmp_msg_0);
    msg.state = 254U;
    msg.proximity = 209U;

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
    msg.setTimeStamp(0.4093685910142364);
    msg.setSource(26713U);
    msg.setSourceEntity(98U);
    msg.setDestination(60331U);
    msg.setDestinationEntity(106U);
    msg.ax_cmd = 0.812122966830583;
    msg.ay_cmd = 0.7884840398328679;
    msg.az_cmd = 0.7418838635648591;
    msg.ax_des = 0.6063750489338539;
    msg.ay_des = 0.7597108646869825;
    msg.az_des = 0.17432151998834267;
    msg.virt_err_x = 0.8399634151826819;
    msg.virt_err_y = 0.2471760500523671;
    msg.virt_err_z = 0.5403722603647424;
    msg.surf_fdbk_x = 0.8864084696629558;
    msg.surf_fdbk_y = 0.34415446251438775;
    msg.surf_fdbk_z = 0.523044432663342;
    msg.surf_unkn_x = 0.32358320166415744;
    msg.surf_unkn_y = 0.08856521242556381;
    msg.surf_unkn_z = 0.9749716795054784;
    msg.ss_x = 0.9360792224342999;
    msg.ss_y = 0.9342452420870621;
    msg.ss_z = 0.20050948139358127;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XEXVLCGBIEAFJYAEDXAHSRYYDANJAFIUSDQQFXCOUPPTUCCGZTNGLXXEKNRXHYRRUBFSIICJQMANFBTKTBMYDKHLCNPOJHWKJMZVVNTEVTKWBHXNCOJRSKMVMSFVJDTVKSQDISHPVDBBWRMFKYVOALONPWIQHLVBXRLUZCMPDIQKOWJPHWWAREEXHIDMYGOGZOLEEOLUZCLCQZFGSSUDNTGTYUKMOATIBJ");
    tmp_msg_0.dist = 0.29708223014340296;
    tmp_msg_0.err = 0.3292126216504969;
    tmp_msg_0.ctrl_imp = 0.4585462245598122;
    tmp_msg_0.rel_dir_x = 0.5931841309383636;
    tmp_msg_0.rel_dir_y = 0.4259146435418263;
    tmp_msg_0.rel_dir_z = 0.1009731757978638;
    tmp_msg_0.err_x = 0.9985665361475375;
    tmp_msg_0.err_y = 0.39060916726033623;
    tmp_msg_0.err_z = 0.29933407092335085;
    tmp_msg_0.rf_err_x = 0.8139705600154071;
    tmp_msg_0.rf_err_y = 0.5078759380970108;
    tmp_msg_0.rf_err_z = 0.651213526087192;
    tmp_msg_0.rf_err_vx = 0.11964125073372778;
    tmp_msg_0.rf_err_vy = 0.43865794084322884;
    tmp_msg_0.rf_err_vz = 0.9824112467179307;
    tmp_msg_0.ss_x = 0.27880774822117727;
    tmp_msg_0.ss_y = 0.7302472126898042;
    tmp_msg_0.ss_z = 0.0335318849850581;
    tmp_msg_0.virt_err_x = 0.9367181780445204;
    tmp_msg_0.virt_err_y = 0.37113092298162675;
    tmp_msg_0.virt_err_z = 0.23846942297195162;
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
    msg.setTimeStamp(0.18030488886235618);
    msg.setSource(38741U);
    msg.setSourceEntity(234U);
    msg.setDestination(52951U);
    msg.setDestinationEntity(88U);
    msg.ax_cmd = 0.5292784954587171;
    msg.ay_cmd = 0.26372022184365695;
    msg.az_cmd = 0.6340224796672287;
    msg.ax_des = 0.06477124713809101;
    msg.ay_des = 0.19702078283060676;
    msg.az_des = 0.9648732765716952;
    msg.virt_err_x = 0.9044168226752176;
    msg.virt_err_y = 0.05821205478773073;
    msg.virt_err_z = 0.1014240349825104;
    msg.surf_fdbk_x = 0.6733434705618925;
    msg.surf_fdbk_y = 0.8100468931923587;
    msg.surf_fdbk_z = 0.5927812310724203;
    msg.surf_unkn_x = 0.469566823528885;
    msg.surf_unkn_y = 0.5580493084029592;
    msg.surf_unkn_z = 0.9366373035401433;
    msg.ss_x = 0.677637113707957;
    msg.ss_y = 0.9623236576923683;
    msg.ss_z = 0.06439986833958744;

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
    msg.setTimeStamp(0.36915743730197237);
    msg.setSource(26252U);
    msg.setSourceEntity(74U);
    msg.setDestination(9037U);
    msg.setDestinationEntity(59U);
    msg.ax_cmd = 0.7103764573642148;
    msg.ay_cmd = 0.3466481849300277;
    msg.az_cmd = 0.276572882304591;
    msg.ax_des = 0.2827171167340595;
    msg.ay_des = 0.6809700264108678;
    msg.az_des = 0.37210270148639124;
    msg.virt_err_x = 0.5840091970175055;
    msg.virt_err_y = 0.21306993866998947;
    msg.virt_err_z = 0.3566410727190198;
    msg.surf_fdbk_x = 0.47417445233510425;
    msg.surf_fdbk_y = 0.45129448116641857;
    msg.surf_fdbk_z = 0.37948007675799045;
    msg.surf_unkn_x = 0.5278706888649662;
    msg.surf_unkn_y = 0.6114746420899906;
    msg.surf_unkn_z = 0.2382808915747091;
    msg.ss_x = 0.23870027335330002;
    msg.ss_y = 0.7856782902952302;
    msg.ss_z = 0.10282224208051516;

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
    msg.setTimeStamp(0.03722642774214158);
    msg.setSource(4870U);
    msg.setSourceEntity(216U);
    msg.setDestination(34848U);
    msg.setDestinationEntity(95U);
    msg.s_id.assign("CHBQCFFNLZCKYUBPPDUCJMDNUOLTHCBMQLPEGVLICFFSYIHPHBCAVMJQDRNSIAKFJZTGXLFQOZVWCHLYGAXUKVFGAWRDNVIVMNQMZUUOVUDSVGTEIJJSXMPVEPXGLA");
    msg.dist = 0.9983108317680148;
    msg.err = 0.03527989934497311;
    msg.ctrl_imp = 0.2956376801937559;
    msg.rel_dir_x = 0.823651022491661;
    msg.rel_dir_y = 0.5770100807798683;
    msg.rel_dir_z = 0.28759057095806595;
    msg.err_x = 0.3684261825950581;
    msg.err_y = 0.7987399294633791;
    msg.err_z = 0.6909710790466019;
    msg.rf_err_x = 0.38049358670419686;
    msg.rf_err_y = 0.5594223077321678;
    msg.rf_err_z = 0.07190059864116172;
    msg.rf_err_vx = 0.45107282346319544;
    msg.rf_err_vy = 0.8942181257420807;
    msg.rf_err_vz = 0.5689132239225813;
    msg.ss_x = 0.1349384716342713;
    msg.ss_y = 0.6623723970491807;
    msg.ss_z = 0.6112090858829267;
    msg.virt_err_x = 0.04109450583437113;
    msg.virt_err_y = 0.36554163878621804;
    msg.virt_err_z = 0.6434683724862551;

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
    msg.setTimeStamp(0.015410832436934419);
    msg.setSource(44673U);
    msg.setSourceEntity(66U);
    msg.setDestination(20004U);
    msg.setDestinationEntity(21U);
    msg.s_id.assign("ULLDPJZUVNQMDGYRAMETQSUJHAAXTZLE");
    msg.dist = 0.5130523469993629;
    msg.err = 0.5881765331036962;
    msg.ctrl_imp = 0.8078277163926656;
    msg.rel_dir_x = 0.32851773113914373;
    msg.rel_dir_y = 0.22019655521417747;
    msg.rel_dir_z = 0.4417640564889419;
    msg.err_x = 0.06705915144865837;
    msg.err_y = 0.38621523834624316;
    msg.err_z = 0.7439468476660411;
    msg.rf_err_x = 0.18897422974773115;
    msg.rf_err_y = 0.9017015667310505;
    msg.rf_err_z = 0.7620029834784119;
    msg.rf_err_vx = 0.46486501461965013;
    msg.rf_err_vy = 0.25193807489994247;
    msg.rf_err_vz = 0.08861579403398434;
    msg.ss_x = 0.9025439911709525;
    msg.ss_y = 0.07757915642752067;
    msg.ss_z = 0.5125744638979625;
    msg.virt_err_x = 0.8273458782536961;
    msg.virt_err_y = 0.7660513194766295;
    msg.virt_err_z = 0.4559036300264848;

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
    msg.setTimeStamp(0.09422798982638236);
    msg.setSource(53176U);
    msg.setSourceEntity(247U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(183U);
    msg.s_id.assign("VSCFOYGGEONFIXFAERDFJHAALIQORIIKDMENIGZTDUKMAJXFSXSIJQDCOHQLYLDKJPYJAOFKJZTBMFSROXEWENUUQCVYMOMQHNHCSPWRWUMJIUPRLYBVCQWELRBLVZOARCPUVAXBZLWBYBKRWFQFPPKXWVHGWUHNIYJLUHZGCWZGTXVDEVSBGTEIRGHAVMZNNQLDMMPXGACSKVTTQTTTJFUDZNSTHIPKMZEJ");
    msg.dist = 0.8517027749564214;
    msg.err = 0.8082316467176175;
    msg.ctrl_imp = 0.575799242152886;
    msg.rel_dir_x = 0.8414680040706599;
    msg.rel_dir_y = 0.7972487455241817;
    msg.rel_dir_z = 0.9500320926358847;
    msg.err_x = 0.3637476926725971;
    msg.err_y = 0.42516254496575445;
    msg.err_z = 0.025664058177434668;
    msg.rf_err_x = 0.8536639804116127;
    msg.rf_err_y = 0.7991322037645467;
    msg.rf_err_z = 0.5546011004190565;
    msg.rf_err_vx = 0.31619610254442143;
    msg.rf_err_vy = 0.6315503728786375;
    msg.rf_err_vz = 0.2502000310014286;
    msg.ss_x = 0.9203151769155196;
    msg.ss_y = 0.7699663751601162;
    msg.ss_z = 0.9852107839055638;
    msg.virt_err_x = 0.7107529773441424;
    msg.virt_err_y = 0.37686483884773325;
    msg.virt_err_z = 0.38468486022955073;

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
    msg.setTimeStamp(0.5181170236625383);
    msg.setSource(43849U);
    msg.setSourceEntity(227U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(119U);
    msg.timeout = 35612U;
    msg.rpm = 0.23387186959305628;
    msg.direction = 150U;
    msg.custom.assign("JJNQMPHYPUXJOKBKBOSQTDRLFVWFECQLWRZTEGLZNAURJMVCOGYBIICONOLQDKTYGXVMDKBEPHHNGJECRQYDKIAFXWVTOYPYZQMCMSJEZYUBFBHWAADNKCSJALBDLERGKQGSHSEIKJLDUJITAKPIXQPPHABOKRYEMTTFVRAZZHFZUCHLOIVNVXQVTTYWUMVHE");

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
    msg.setTimeStamp(0.2736204723364867);
    msg.setSource(52091U);
    msg.setSourceEntity(79U);
    msg.setDestination(18260U);
    msg.setDestinationEntity(95U);
    msg.timeout = 46024U;
    msg.rpm = 0.5962282282401014;
    msg.direction = 58U;
    msg.custom.assign("TILNEKSRPPVOQRMOJDUBNOGWMGURZLINMNDXNEBKIGOJATAUSPCYGUHCKTQLWQDBVYCEJYDQLWYYCGFLKEIVKSIEFVAWZPUGCNYTDGZJLIECDTEAHHHVFDVXOXTQXHJKQWZJODBTSXZKRLQOGBWZAPCHMCMXZ");

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
    msg.setTimeStamp(0.5098716392803309);
    msg.setSource(17409U);
    msg.setSourceEntity(146U);
    msg.setDestination(47747U);
    msg.setDestinationEntity(97U);
    msg.timeout = 61120U;
    msg.rpm = 0.26255456304184477;
    msg.direction = 86U;
    msg.custom.assign("SIZQWBEZHKJIXWBMQVHJZUXDLOXIVKECSMNEPFTUAGBFWNGJVZSRCUOOCSRTSODFNYYBNJCNGPCSWUYNDCGMOYJOWHJKAAUBTRDKMLZAXTZSQVTYYFZFFOEPMCHSOAMLTFUZDAKFBWISNTKDBNPHKMTLALIYOIWYRNXRRGPVXQAJVPJCQVCIXKWQFXAGARLLMPMLKHEYCINIJGXDFPYKESEGWLVBBUDQRPDUOUZLM");

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
    msg.setTimeStamp(0.6637865741202367);
    msg.setSource(34583U);
    msg.setSourceEntity(79U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("ICOWFGAMKISNZMOIATYONIEMBHXVXGCEVDNSXNJQQVBWYQRKYAWGILYKQUISETBUBVPHY");
    msg.type = 250U;
    msg.op = 44U;
    msg.group_name.assign("SATXATQFGRKBDGCIXQ");
    msg.plan_id.assign("WPJWZXDBPCVYUPVBPUBJSQQDHYNXRSSAWYSLBMQGISRLFRIIIJFSVQKQNZPMIGNJELDNCWYMOHBZZBNLGEVZXOPNGYHGDGEKFCCYGSCYTNGTLJIBKXUUAIPEAOTVFQHKOZ");
    msg.description.assign("LUKIZGHHPXTHQIIPEZEWRIHGEHLTCRMYQGEWMSNYGUTAEOEVMFVB");
    msg.reference_frame = 119U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55572U;
    tmp_msg_0.off_x = 0.6906479082913216;
    tmp_msg_0.off_y = 0.12094422707177588;
    tmp_msg_0.off_z = 0.5310689930522415;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.37856488391377197;
    msg.leader_speed_min = 0.1710389911280633;
    msg.leader_speed_max = 0.3820265697336428;
    msg.leader_alt_min = 0.34734916908437874;
    msg.leader_alt_max = 0.6564713504798432;
    msg.pos_sim_err_lim = 0.5180261449645039;
    msg.pos_sim_err_wrn = 0.7857594488593902;
    msg.pos_sim_err_timeout = 14238U;
    msg.converg_max = 0.6227050906953965;
    msg.converg_timeout = 47499U;
    msg.comms_timeout = 2252U;
    msg.turb_lim = 0.19074528112304068;
    msg.custom.assign("AFHPAVUXEFNLWZRJIKKWTGJFRLIBILQHYRMGGKVOLGUFANBJUFRPBTRYWLYXOAOGXAOQJSQJDRVVXZOHIQIDMPHPSDQDIYVUPZTXSOKISQOEECHCZTVLGWNQJNXFSVHWXM");

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
    msg.setTimeStamp(0.7146984366237569);
    msg.setSource(44294U);
    msg.setSourceEntity(207U);
    msg.setDestination(53396U);
    msg.setDestinationEntity(54U);
    msg.formation_name.assign("QHPRXETTIDRJJPUIRJAUMFMCWXEFRQFSKPEHZWUHQPVXYOOGMDHQZZNEMHQIJKJNVLDSXPKABOASOBMZIPNLWEJUYNBRFFSTGKLCUGWIBWMOFCEUVTLVTI");
    msg.type = 77U;
    msg.op = 105U;
    msg.group_name.assign("HGTFIDYCSZTDDLKNEHSWVUTLTQTJCFGXEBWLBQUOMHEPUXVLHKGRJXEJVPYAOFVFXFJUIXKBGJSUONFDYAHQPIMRCEGE");
    msg.plan_id.assign("MWGVPFQWQFVRJPIIZUJRMNZWRNCOCQGYYKDMVXNXEWENQGMLFBITCXHDMCZCULICTENLGPCFHUCSHNFYJAQGNSTM");
    msg.description.assign("SOAJWMTTJRFKQHKINPBANCAIVTWLWZGDHWDPOEOBLVDS");
    msg.reference_frame = 32U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45437U;
    tmp_msg_0.off_x = 0.5997505045106316;
    tmp_msg_0.off_y = 0.20283508438573383;
    tmp_msg_0.off_z = 0.3876637946995698;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.46027889880415107;
    msg.leader_speed_min = 0.04821420469467974;
    msg.leader_speed_max = 0.08728771581992179;
    msg.leader_alt_min = 0.24895618686142196;
    msg.leader_alt_max = 0.2982883232625605;
    msg.pos_sim_err_lim = 0.08867048034203828;
    msg.pos_sim_err_wrn = 0.7050996506728677;
    msg.pos_sim_err_timeout = 45610U;
    msg.converg_max = 0.1343778964877831;
    msg.converg_timeout = 53779U;
    msg.comms_timeout = 25621U;
    msg.turb_lim = 0.47514229082885706;
    msg.custom.assign("YKUOIKKWYNNNNZMOUAOBNDOCZAFMRQSWIZHRIGW");

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
    msg.setTimeStamp(0.4150750531281826);
    msg.setSource(4134U);
    msg.setSourceEntity(33U);
    msg.setDestination(49272U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("LWXKDIREVIBHOFYAZRECZGVTEUIQWUGAKEQSDHKEHCECCDPRVODABPLSYBMVBZZZWSFANIPKLLZUPGSUVOFFMTLPJJLOHYFLXNQYNMNJINWOTPCNAIPLYRUKHIDWAKBIHFRLISNGFQQUXGJJXVVIVHGSADNMZFDBESTXJUJCSMOQQK");
    msg.type = 89U;
    msg.op = 3U;
    msg.group_name.assign("DPCPVWRYRXTZNGVZYJFEGHBGXXIQJERQTVGGHMSOEZHABLZRBNFNLIDVXQHCIFBCBATLRTLJPBYZVTMSFKLUYHJDQCGDEGWEPNDONMCIOSWQDMCAONZJIPQVSWDGJAJA");
    msg.plan_id.assign("OKRQSOEEUSUVDEGGPPNVARHJCAFDWKIHOTAIJCCKZUKXIZZBWHGWONTWYGXUSVIPLXDTHALQTJJLGGPARHJZBHRDUVHYBBFQSMUCEKEFSNLPFVPYUXYJVSZOTWXTNSRUAPYIGEMJRPBRFMYZJQXLHHDIIQBKRBEWLXNADKSSDWZCVPBSWXCOJCCCIILGVNFFQWMNNMODMATRFYYAHEQUMDPVXGOLIDZKUMBNCQBF");
    msg.description.assign("HFFIUINYFCBVZLSXHMQOKDTURNQXHWODEWWTTDBPLEILCUEQNZYDAIFBAMOWNFGXEMSTJMXZWFLVYIOPHZMMATQMORZRMCTLKSIWOJYBHLSHTKTEIBDSZOVYBLHQCFGRNUJVPRJGVCFRQDOWJOYJBVAKGUGYFRUPGXPT");
    msg.reference_frame = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62300U;
    tmp_msg_0.off_x = 0.22256209202529542;
    tmp_msg_0.off_y = 0.9604435559424453;
    tmp_msg_0.off_z = 0.34426053233941944;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8888954834105794;
    msg.leader_speed_min = 0.7553911827596471;
    msg.leader_speed_max = 0.1051655297081695;
    msg.leader_alt_min = 0.3287637621907217;
    msg.leader_alt_max = 0.273148263889887;
    msg.pos_sim_err_lim = 0.6098743285259033;
    msg.pos_sim_err_wrn = 0.991325789473387;
    msg.pos_sim_err_timeout = 34942U;
    msg.converg_max = 0.47802577280675973;
    msg.converg_timeout = 43030U;
    msg.comms_timeout = 16225U;
    msg.turb_lim = 0.4128493061075925;
    msg.custom.assign("TMNGUGIRRCZFZGKFOUJLIUIOHYXZHVAZDMAEPAUWVQXMXWTGNDENLNGEKTKLLNGVYWCSFQMUQHNRBJJFJZYWQKLPXCXICTRROPMBSOCUCLDPZOFCPIUIHADQLBHEBBPFMVKCDRFMDXZGWLFTYEPYEJYTBWFXTOWOITJIBAMDNABCWAJDEXZMNKWETIOZVSVMSOUSAGDABRAVPQKSHKQYQCSQLERPHUVTXSNVGHIEPX");

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
    msg.setTimeStamp(0.23414527948741037);
    msg.setSource(53594U);
    msg.setSourceEntity(241U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(137U);
    msg.timeout = 14319U;
    msg.lat = 0.5552129105721298;
    msg.lon = 0.8528932861980869;
    msg.z = 0.021580296791242626;
    msg.z_units = 25U;
    msg.speed = 0.5820675654239982;
    msg.speed_units = 181U;
    msg.custom.assign("QGNCDAUTLCWKBBPPCPXLQYNOHJRBUFBCIXRVUVFKMBYDSOMVMNCMUQAZTOLEXYVDNWDQFERVXTVDKQWFZAONUJNCUKUMVLMJIJRFIUFYHKABALYODABYILEJPIXDSQHYSICHHELYETGTIHGSTZTJSCGMKVOTRSPAWHJILOQFGBOMQOVWN");

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
    msg.setTimeStamp(0.014625257022686133);
    msg.setSource(16157U);
    msg.setSourceEntity(210U);
    msg.setDestination(55987U);
    msg.setDestinationEntity(116U);
    msg.timeout = 22331U;
    msg.lat = 0.7436340473478221;
    msg.lon = 0.8572502573577087;
    msg.z = 0.21055601490170783;
    msg.z_units = 2U;
    msg.speed = 0.7498320309635563;
    msg.speed_units = 219U;
    msg.custom.assign("OYZXBDREABIEJRNITDLRNQVOIHJSYGLKJSEWVEYZACVFOFNNQEQAFBDXQPMUJVSXNYUMJNLIJALEGEVSGXURCROSXOPUFIHJDZUWVWBYMQKJYLRPSFAIIWCCKWKKSKNAZXOUBHCCPLMYEHPKJHQXKBGLJUEHUKRFLAVYDZQPDCMHBEITTMNZVXGFRPMPAQUYPDLGOWSTKHBQDSCFRIARINHO");

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
    msg.setTimeStamp(0.29163399233810516);
    msg.setSource(50688U);
    msg.setSourceEntity(144U);
    msg.setDestination(33319U);
    msg.setDestinationEntity(58U);
    msg.timeout = 61563U;
    msg.lat = 0.14949514146802456;
    msg.lon = 0.24809990771212131;
    msg.z = 0.31901197454683006;
    msg.z_units = 136U;
    msg.speed = 0.8521892317219371;
    msg.speed_units = 68U;
    msg.custom.assign("LEUGGTNOXQCNUGMNWJWSEEGQ");

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
    msg.setTimeStamp(0.5236788284424865);
    msg.setSource(60673U);
    msg.setSourceEntity(199U);
    msg.setDestination(10632U);
    msg.setDestinationEntity(79U);
    msg.timeout = 24433U;
    msg.lat = 0.46986984980811397;
    msg.lon = 0.9750467963067174;
    msg.z = 0.41975879208711353;
    msg.z_units = 152U;
    msg.speed = 0.696379766005081;
    msg.speed_units = 38U;
    msg.custom.assign("UROGOCFCECSARVRYDSBYLOMLKLQXHQYQAEXGDBTZIFYNXZWTZERQJLBGRBGTCKOIBQPA");

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
    msg.setTimeStamp(0.05332884657482939);
    msg.setSource(16642U);
    msg.setSourceEntity(43U);
    msg.setDestination(5919U);
    msg.setDestinationEntity(54U);
    msg.timeout = 6749U;
    msg.lat = 0.10846041585447341;
    msg.lon = 0.8304109447073251;
    msg.z = 0.671520532084456;
    msg.z_units = 184U;
    msg.speed = 0.33125382653149893;
    msg.speed_units = 179U;
    msg.custom.assign("PMNUMYJMNDZQKZCQFQQUPKCCXFASAIREPSIUTXBMHENPICSRLBBJJLKOHRGXGGKBILTYOBOVIKIPPHJKSRUGZWQACLDVUBZMGDFHTFAZJMUZNBZMUFKEOLXAONWXTWULGYVAURDPVDDLVOIHRSEHEEHIAIDUSLMTWYYGTBFTXTGDCSBRLZKDFNWNWMYLCMSJCPHNYXNGEFW");

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
    msg.setTimeStamp(0.61087948724221);
    msg.setSource(62816U);
    msg.setSourceEntity(35U);
    msg.setDestination(13470U);
    msg.setDestinationEntity(245U);
    msg.timeout = 59530U;
    msg.lat = 0.6444679903842071;
    msg.lon = 0.683402894876485;
    msg.z = 0.7273208220879366;
    msg.z_units = 246U;
    msg.speed = 0.09435368022066448;
    msg.speed_units = 90U;
    msg.custom.assign("LGRAUGTSYRPWVWPJHOHVAZRLCKGGDEMUELIDQZDGSFQTZFFHZOJWGVEXLKSJTZKFVMYQVVMBNNYMNITTXNUIIIWHSCDPOADTPNCKEFJHSJUDSXXFWBRQKEAVUHDAGHQWMPVWBQJSKYEA");

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
    msg.setTimeStamp(0.13921932638756662);
    msg.setSource(27287U);
    msg.setSourceEntity(237U);
    msg.setDestination(57233U);
    msg.setDestinationEntity(56U);
    msg.arrival_time = 0.34206815782006206;
    msg.lat = 0.4721953952644101;
    msg.lon = 0.9026418152608492;
    msg.z = 0.475687692469245;
    msg.z_units = 227U;
    msg.travel_z = 0.3035724979154959;
    msg.travel_z_units = 237U;
    msg.delayed = 51U;

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
    msg.setTimeStamp(0.9780809009803253);
    msg.setSource(14036U);
    msg.setSourceEntity(79U);
    msg.setDestination(58886U);
    msg.setDestinationEntity(41U);
    msg.arrival_time = 0.1612874574297668;
    msg.lat = 0.06631231691154094;
    msg.lon = 0.8800216693389069;
    msg.z = 0.8207152168183143;
    msg.z_units = 169U;
    msg.travel_z = 0.7029473892242202;
    msg.travel_z_units = 185U;
    msg.delayed = 130U;

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
    msg.setTimeStamp(0.4423173632718337);
    msg.setSource(6013U);
    msg.setSourceEntity(99U);
    msg.setDestination(59463U);
    msg.setDestinationEntity(144U);
    msg.arrival_time = 0.6804731056293237;
    msg.lat = 0.6142753766017102;
    msg.lon = 0.14893202871700717;
    msg.z = 0.6183781524530018;
    msg.z_units = 188U;
    msg.travel_z = 0.2166275616943415;
    msg.travel_z_units = 246U;
    msg.delayed = 48U;

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
    msg.setTimeStamp(0.41396554889857407);
    msg.setSource(55991U);
    msg.setSourceEntity(156U);
    msg.setDestination(64166U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.4066406063200999;
    msg.lon = 0.7712880621705213;
    msg.z = 0.787832389028409;
    msg.z_units = 34U;
    msg.speed = 0.9454976948169543;
    msg.speed_units = 118U;
    msg.bearing = 0.12086364275440464;
    msg.cross_angle = 0.6172562610438972;
    msg.width = 0.6865428404880884;
    msg.length = 0.6037453162927398;
    msg.coff = 3U;
    msg.angaperture = 0.46660067701987085;
    msg.range = 13186U;
    msg.overlap = 152U;
    msg.flags = 43U;
    msg.custom.assign("QNKNWMTSAKVWFQYFJBTCYIBCXPAMJVKIDTGBCIEQHDRZPEFGYRNQRYPFUMLRAQSHRFSCTPIYAKJEMOYACGJXCINVJGNLUCROUILEMXZDEBLGVGOIABFNWPVWLQHKQBMABHFIZAYCDXWXRVORDUTVXDMND");

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
    msg.setTimeStamp(0.3173205314124483);
    msg.setSource(3674U);
    msg.setSourceEntity(236U);
    msg.setDestination(16745U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.8871848008578582;
    msg.lon = 0.07900645452149657;
    msg.z = 0.5168996543382672;
    msg.z_units = 28U;
    msg.speed = 0.1823591496507222;
    msg.speed_units = 146U;
    msg.bearing = 0.7954357672594432;
    msg.cross_angle = 0.6092574533258863;
    msg.width = 0.13266130668101805;
    msg.length = 0.22461999161677837;
    msg.coff = 179U;
    msg.angaperture = 0.7700374065897346;
    msg.range = 10068U;
    msg.overlap = 19U;
    msg.flags = 132U;
    msg.custom.assign("HPCIEYVLMFEQAGZGTVFWOSGIABNBGSQVVXSNXLDYKMHXETKSQRUCHYJNPNOZSORZDRUNUTUNTYDHKPKDCQZAEBRNJYWHTIUPCWRPLWRRCXDLGSOSIXVGNYRDDICLDGJHADNONSXTJZA");

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
    msg.setTimeStamp(0.9275768663437854);
    msg.setSource(1594U);
    msg.setSourceEntity(89U);
    msg.setDestination(57713U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.17007298692019124;
    msg.lon = 0.19851200880841935;
    msg.z = 0.836180676798766;
    msg.z_units = 48U;
    msg.speed = 0.9394470522168449;
    msg.speed_units = 193U;
    msg.bearing = 0.014723892865546206;
    msg.cross_angle = 0.1728356000889918;
    msg.width = 0.5537988794876645;
    msg.length = 0.17627910008003844;
    msg.coff = 147U;
    msg.angaperture = 0.7641656938389627;
    msg.range = 584U;
    msg.overlap = 38U;
    msg.flags = 64U;
    msg.custom.assign("QBBYGUCZAYVTGYWOODLBQTFANCNHPDZJWLRJSPBICCQVUMTAFYZEFOYCMPGGMAXILDVGGEWMJJDKUSJWKSZOWTJDMMRNKUNZBXHRPKTJOUPHPBNVRNRWJMIPHLYPQAOCELDIIDAEXFYRTQUTXWHSFW");

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
    msg.setTimeStamp(0.5279104803794095);
    msg.setSource(11395U);
    msg.setSourceEntity(108U);
    msg.setDestination(58326U);
    msg.setDestinationEntity(101U);
    msg.timeout = 12787U;
    msg.lat = 0.4398420054861175;
    msg.lon = 0.5692854034780294;
    msg.z = 0.96108240192775;
    msg.z_units = 153U;
    msg.speed = 0.5547009784960613;
    msg.speed_units = 18U;
    msg.syringe0 = 44U;
    msg.syringe1 = 17U;
    msg.syringe2 = 177U;
    msg.custom.assign("RDYOGTITFGPGQDPCYGFIYKNRIQWMUBHROUQUBYXRPMSFLSRCBSCUJSWRHXVRBCGFNLDLBTETS");

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
    msg.setTimeStamp(0.7669008733205853);
    msg.setSource(33340U);
    msg.setSourceEntity(127U);
    msg.setDestination(45853U);
    msg.setDestinationEntity(173U);
    msg.timeout = 31528U;
    msg.lat = 0.5056564705533604;
    msg.lon = 0.25707465896960713;
    msg.z = 0.0029971744618386698;
    msg.z_units = 132U;
    msg.speed = 0.6131839430843312;
    msg.speed_units = 213U;
    msg.syringe0 = 234U;
    msg.syringe1 = 92U;
    msg.syringe2 = 36U;
    msg.custom.assign("TFKVVGMGMLJKFXWCKXDWSMSPRHLAMEQOCNBZSESXHIEOIBAYQJDEKMWYMSJLVCIXDFBXYOBGZVPTEWVBAKPLZKZITRAIGRJNQSPVQRPYVMVMHJGQXQAPUHTFYGDTOSDGZBNYMYZLFPYBBJCNNINGOURLXCWMUBIRTHSULCYKTEOANRFTFSDWQRNEWROI");

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
    msg.setTimeStamp(0.19494441580522548);
    msg.setSource(50286U);
    msg.setSourceEntity(35U);
    msg.setDestination(37104U);
    msg.setDestinationEntity(66U);
    msg.timeout = 23746U;
    msg.lat = 0.819794227895424;
    msg.lon = 0.08934990283800737;
    msg.z = 0.8428640076093831;
    msg.z_units = 14U;
    msg.speed = 0.4166975853678785;
    msg.speed_units = 33U;
    msg.syringe0 = 52U;
    msg.syringe1 = 85U;
    msg.syringe2 = 172U;
    msg.custom.assign("YLOEDAIKKJSOXERPTXWTZILQODNGXAKQILHBSUEXBSKWAORAQSQSRZBNXTZMJUHTNYYFHPELNBQVTKSWUAYMETDFFTKBPQBQDRFJQVKYWXZVKVBEFUJMZUSBGRVPJUHODGTLJTPYHLPPUDPRXYENOWMBKDYWAOGCCFQDINNLLF");

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
    msg.setTimeStamp(0.658715892216104);
    msg.setSource(45814U);
    msg.setSourceEntity(244U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.6602452577617859);
    msg.setSource(32087U);
    msg.setSourceEntity(250U);
    msg.setDestination(50588U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.7385571306177755);
    msg.setSource(1701U);
    msg.setSourceEntity(83U);
    msg.setDestination(50745U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.7355686009767832);
    msg.setSource(62572U);
    msg.setSourceEntity(171U);
    msg.setDestination(50775U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.7199313618295663;
    msg.lon = 0.6113303787182767;
    msg.z = 0.057230546142676864;
    msg.z_units = 140U;
    msg.speed = 0.4410803030959811;
    msg.speed_units = 118U;
    msg.takeoff_pitch = 0.12999131219943016;
    msg.custom.assign("HIESPCUMEFBTVUXJGPSQSBMXIODQDGODCBMJLZUAZZELHFKBMYKONLOPACKIEWYFJNSRQWFPENSAYAHUGTZVUMMWEFFGMBGOBWCCWNLPADTSGIBXONDMLLYGTVEZNFCKHJUIDEANQANLMJRKPQQTXPURXCVDJXPLJOVLIEBRYZUOOCBCOWRDXURJTRPWVVSADRZNHWQWHVTYJFRPEAIQHXKIHUFLVTXYSIYRSHGCHDQKKKAYZXTZVKW");

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
    msg.setTimeStamp(0.33527989106922784);
    msg.setSource(5579U);
    msg.setSourceEntity(83U);
    msg.setDestination(63991U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.44082128895675;
    msg.lon = 0.7143638685747518;
    msg.z = 0.9622432475406825;
    msg.z_units = 99U;
    msg.speed = 0.06950932926306408;
    msg.speed_units = 205U;
    msg.takeoff_pitch = 0.0006274315762924143;
    msg.custom.assign("FFBRPAUHIVCBVPSXPVQDDBAQAJOTIMKUVZNCEXGYHSRPPCQDZWHYXWASCDQJLDGFGIHPENTESJYBSUV");

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
    msg.setTimeStamp(0.25330673453280794);
    msg.setSource(55947U);
    msg.setSourceEntity(2U);
    msg.setDestination(4903U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.9725567667122524;
    msg.lon = 0.3469826660988746;
    msg.z = 0.8608961623320546;
    msg.z_units = 192U;
    msg.speed = 0.19737439002439583;
    msg.speed_units = 85U;
    msg.takeoff_pitch = 0.9372158132792789;
    msg.custom.assign("DMRJICXJQSSNYDZBEVQKLMDTXM");

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
    msg.setTimeStamp(0.9453426436152385);
    msg.setSource(10738U);
    msg.setSourceEntity(67U);
    msg.setDestination(60565U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.1873090689385083;
    msg.lon = 0.5575119992577361;
    msg.z = 0.37888694327186134;
    msg.z_units = 245U;
    msg.speed = 0.42539423521671904;
    msg.speed_units = 160U;
    msg.abort_z = 0.5776110993194175;
    msg.bearing = 0.3596713469999899;
    msg.glide_slope = 29U;
    msg.glide_slope_alt = 0.8218969795417465;
    msg.custom.assign("LUYRFMHTPVUBWYHJYQGXXIHAKENZOLUFUETYQNBNSDPMNJSDFFBI");

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
    msg.setTimeStamp(0.09346919142417143);
    msg.setSource(15827U);
    msg.setSourceEntity(198U);
    msg.setDestination(46833U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.45847309311006856;
    msg.lon = 0.41874854759969815;
    msg.z = 0.6263704619000172;
    msg.z_units = 13U;
    msg.speed = 0.39234125595503433;
    msg.speed_units = 101U;
    msg.abort_z = 0.6043127886161199;
    msg.bearing = 0.31666149211275574;
    msg.glide_slope = 34U;
    msg.glide_slope_alt = 0.6817423413450644;
    msg.custom.assign("RMSZEWDAPTHBTFNPSGKHIIWHEXQVBQODNONXGQKETPRCYRIAVXAZFYCJJRDDNOLLNRSBEMALLLOESHIBQETHUGBEPYTVXTMVVKYRSCRNWZPEHWFLATYVTJWSFCIKVMQBDKJNGIMXOHXYWOGZBPIFJFSVSTBAIFIBGSQDBRNTCUPYGCMOCNVRAQMCZFPNJOJL");

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
    msg.setTimeStamp(0.01638303533450214);
    msg.setSource(13195U);
    msg.setSourceEntity(112U);
    msg.setDestination(22894U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.4887209193862828;
    msg.lon = 0.46937496724117067;
    msg.z = 0.48508608865770864;
    msg.z_units = 225U;
    msg.speed = 0.42761451046599175;
    msg.speed_units = 102U;
    msg.abort_z = 0.10650738473410837;
    msg.bearing = 0.5074087607664493;
    msg.glide_slope = 104U;
    msg.glide_slope_alt = 0.8096624012947009;
    msg.custom.assign("IAUAIOKSSJSJHHMRNAHBLERXGKTAPWLRTLRMPQNXQXODWHIOYYIQDBXBNTOPTNKQHEVBAQFVTWUPGHYWDSWMEPCVAKCGQIFHMTUWZAIYMWCJRUFNOBD");

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
    msg.setTimeStamp(0.6733557043056231);
    msg.setSource(14602U);
    msg.setSourceEntity(148U);
    msg.setDestination(55567U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.8156496797780826;
    msg.lon = 0.2080235477755077;
    msg.speed = 0.4394146862853875;
    msg.speed_units = 218U;
    msg.limits = 75U;
    msg.max_depth = 0.68960400712636;
    msg.min_alt = 0.7418888854863972;
    msg.time_limit = 0.8591428993890051;
    msg.controller.assign("JLMERUPPBAWLPKRQYNKEJBHZAGMUMOEVVXAJWWMSBFXDSWFRKOXBTZKNZYPQLYVGMOFLUWCHQBXTVDZYOEPLXWMPUAAXPXDHARRJZSDGJTTIDGSJMVAEJACTLZNGIVPMERNXYDTUCQANKYMSWVEBCCBITIIHOOCQEFDYNUUEKSDFRSHXDXZRWFRBPQGNWLIIOVJKIIFULJHCWYFMALCTZTOEQ");
    msg.custom.assign("ODDQFQVESDGAEXIPHMPCTRYQQYLVBZRJPTCULKMWDUFCLUVTIWXBSMLFHRJVMIONQEHHWWIDSGDHEYLSFUGSGP");

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
    msg.setTimeStamp(0.5521930324823588);
    msg.setSource(48785U);
    msg.setSourceEntity(163U);
    msg.setDestination(23546U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.924960484284688;
    msg.lon = 0.7391935617470414;
    msg.speed = 0.41445145058886346;
    msg.speed_units = 225U;
    msg.limits = 30U;
    msg.max_depth = 0.521950630342864;
    msg.min_alt = 0.557172560584993;
    msg.time_limit = 0.0800405982823783;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.89563438354879;
    tmp_msg_0.lon = 0.383880721172673;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TPFXUNJTYYRLLPZVNOWKGATZKMFSCAPGKVUQCLVTMGHPNWQUWNMLYWGXCCSPBRQRLBWGNXNPAMIPRQOVAUZYJUBDODEIUSYZWPORHKTAYACKQRVZHALM");
    msg.custom.assign("XGOUUJHMQRAIFPGHJPQDWJOXXBXNJVCACMKIXZDNUVCIFZNBFFNBYEERYOYTHKOLGOSAHRABDEWAAUW");

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
    msg.setTimeStamp(0.37572561216406397);
    msg.setSource(63413U);
    msg.setSourceEntity(151U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.8095045904289848;
    msg.lon = 0.4223451664926472;
    msg.speed = 0.9555834666872879;
    msg.speed_units = 121U;
    msg.limits = 163U;
    msg.max_depth = 0.954604862044772;
    msg.min_alt = 0.36381090325136833;
    msg.time_limit = 0.7966697777609488;
    msg.controller.assign("GYGLCFKVNEZZDBPHJOFVASCEYEKCMTAPBNFTVRSACUKROSTAIXQQOGSXNVMXCSBGMMEKTNLDRSULRFO");
    msg.custom.assign("FXZRQVUBMGSADCIABHQROPOXWWXCHETFDXWWXEJSPKOHTYGZXMQGNSELXUN");

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
    msg.setTimeStamp(0.6356706888637118);
    msg.setSource(50396U);
    msg.setSourceEntity(220U);
    msg.setDestination(57233U);
    msg.setDestinationEntity(174U);
    msg.target.assign("KLPNFSQZPKCMBPCUBTRTBMQAVGWOKRIOBYXWFQOQQKSUZLQCXZHVSMBULYVVEJWTHGGGTNZXGPUAOORUDGLXTLCWUSPIHZVEFRKORURQIUMHBOCOWTXHNDACCDHCIJQBKHXVJJYKMZYTCZMYPSWMNCWBWMVKFJAPRPMOEYFQLGHQFIDGVZFJFHUXVWEHPSSJILYANSBNNXTTMDLEIYVXNNIRDZSIPEBWODKJNGR");
    msg.max_speed = 0.5388910345946346;
    msg.speed_units = 1U;
    msg.lat = 0.1301250000189228;
    msg.lon = 0.816423884888833;
    msg.z = 0.4414823130192215;
    msg.z_units = 179U;
    msg.custom.assign("PPCCAWZRTUSFUWDQFOEMMBLKKVEKPYHGYUKRHJRMTFJXLKJMMVOBVJTXLUXTUGOGVSLSOMYSBVXYJSEZBXMIAIDOZC");

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
    msg.setTimeStamp(0.07026828865154633);
    msg.setSource(12616U);
    msg.setSourceEntity(70U);
    msg.setDestination(19239U);
    msg.setDestinationEntity(46U);
    msg.target.assign("QVRFJSUDYQIOFTZUTJIGKKUKMRZSRNYJPXXEUPZHLFCIBFIIJNYLVMCKOXWQJJFMMNEDVHYHHSABBKCZHTUJAJGDPXSLFDOVNAOYFWWZVEHBZLLGZPEBQK");
    msg.max_speed = 0.38707688072317026;
    msg.speed_units = 3U;
    msg.lat = 0.19085491223713713;
    msg.lon = 0.7716505539116456;
    msg.z = 0.5468775704560116;
    msg.z_units = 117U;
    msg.custom.assign("KACCUOFAJXFJFQTNWWOPGLXJLJXNSMURSAVBVTWGQRLQFGGNALBMPVCFCDLPISIIRBHSGWVCRBUBDJKGELREKNEOPWYZVNOXMERUPDJH");

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
    msg.setTimeStamp(0.39914296152392414);
    msg.setSource(51983U);
    msg.setSourceEntity(80U);
    msg.setDestination(36844U);
    msg.setDestinationEntity(105U);
    msg.target.assign("QFSFDHWZMHWCLULWQPAFRUMEGLQCXUCYTUTVKGUPUTVCCNZOMLKNNMKHEUDXWRJNOFZKVGJDRLBGKFYWHOIOYSYCOAAZSBAGIYRDYDPIJPXKJQZFHCGLWDXTOTTNSJPBVMEYIGIITWMECVOFWTLABUFDNGBLQJZPEXMEZHMWJHKARAFKMHQTNXOSSPJRYSVX");
    msg.max_speed = 0.6623652693617593;
    msg.speed_units = 159U;
    msg.lat = 0.995573787123326;
    msg.lon = 0.07833227680772581;
    msg.z = 0.6581974471003348;
    msg.z_units = 34U;
    msg.custom.assign("HIGKHLLDDFKRYSFOZJOLLSHMUKXRCJENBEHFORIOEVKBAZCWNSWZEORDMJQCJVZVGTGSBJYBJPQAPXVAWLOWXLDLDYMSCWAMUJYZMSXJUAZHFAEZGTZXFYTDFN");

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
    msg.setTimeStamp(0.9071572481998723);
    msg.setSource(19155U);
    msg.setSourceEntity(15U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(100U);
    msg.timeout = 35124U;
    msg.lat = 0.0671077585780685;
    msg.lon = 0.28098279742983623;
    msg.speed = 0.23895421176363496;
    msg.speed_units = 56U;
    msg.custom.assign("EDKIXBTCZEBIGGUSNBMWFGLNZQESLQGPIUJKBRQLCOLUOKBZDMOCJYHFGRKHZSDETKFEBFHTVGTWAVDVJHKPMMVPJFJNBYVYKXNWYSPATAWQQSPRJZWECPJUHDFSRSM");

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
    msg.setTimeStamp(0.11541588957836413);
    msg.setSource(16000U);
    msg.setSourceEntity(179U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(106U);
    msg.timeout = 13349U;
    msg.lat = 0.996618829790894;
    msg.lon = 0.9351764131534214;
    msg.speed = 0.14296123783878556;
    msg.speed_units = 74U;
    msg.custom.assign("TTUDYTJVBKZOFFUMNDDWOPBLIACRHAHHGNCEKYBXGWLOFGVXDFKVDZZWTIRWJFQUNMRQWYJOXXHEYLFILNMBTQZLECLVPIWPGNLATESBILIEVCZANNXRCGIPFKQAUEBEJKRLUKSPUVDWJSEQISVMFZJUEHACTNBYYZAUBJFGXRBMVOJXMPOWZCUSHATHUSASFZLHQQPDCYMPKNGTKMXOTJNVYDKSPAPOMHSXROMRBZQDVRIOJCGYXQESCG");

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
    msg.setTimeStamp(0.12982650263954976);
    msg.setSource(20996U);
    msg.setSourceEntity(145U);
    msg.setDestination(53202U);
    msg.setDestinationEntity(87U);
    msg.timeout = 35338U;
    msg.lat = 0.19790780546610742;
    msg.lon = 0.34397530475366445;
    msg.speed = 0.023468410504334347;
    msg.speed_units = 95U;
    msg.custom.assign("FEFRSLJTOIZIUYIVDOBNLORDRAYGHHOYPDXKHOZWTWACJUNUUQBKUBDEAWEGCMLSTDZGDXHSXHMAWGLAYIMHJJGUZZVXPHRRNTNAUSSBGYWIQNMEUBQPMENTDTIPEIBSCINTEKODFZBQYLQMKRJPRZVMGFZCCELNVIIJKCRHGYENUJZBCPOMTYDYVFTLXJXFSXAFWVYCJKWAQXPVRSWWMVSJKZKBMGHTGLCVUX");

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
    msg.setTimeStamp(0.07053907518561686);
    msg.setSource(57324U);
    msg.setSourceEntity(54U);
    msg.setDestination(7607U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.8422376140973181;
    msg.lon = 0.7986574030616032;
    msg.z = 0.1894250794677136;
    msg.z_units = 75U;
    msg.radius = 0.48989786548958725;
    msg.duration = 55243U;
    msg.speed = 0.8420772924523611;
    msg.speed_units = 104U;
    msg.popup_period = 46089U;
    msg.popup_duration = 9620U;
    msg.flags = 37U;
    msg.custom.assign("XCZUECIPZSBSEZQPRPJOMORNPCZOHRGLNEJHCSGYAUKIMCALDLVIUFCLWGUQMAMFCLAUSLHQGDDDVMENMIWYXRXTBZNPJGTCFMPWGGWEISRNXBJZFHLKWKMKJUONWFEAFBMW");

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
    msg.setTimeStamp(0.2528334631094532);
    msg.setSource(20478U);
    msg.setSourceEntity(241U);
    msg.setDestination(39815U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.5742825893805793;
    msg.lon = 0.7715841525406069;
    msg.z = 0.6119957535874436;
    msg.z_units = 130U;
    msg.radius = 0.7648541880560715;
    msg.duration = 20207U;
    msg.speed = 0.6451154502676889;
    msg.speed_units = 92U;
    msg.popup_period = 25249U;
    msg.popup_duration = 6800U;
    msg.flags = 245U;
    msg.custom.assign("CRBZFHEKETRPAOVOLHXHTYTKZNPQAXILPISKRNDPXRGJDEUJXOXNVYSRAQGMYMYTISNSXGIFDTLNGPBZNMSTOZLURQBWDZBVKXUCTBUOVLVGXLHJXZUHJYJIBWMDKCHQOUJWKJMRMBSK");

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
    msg.setTimeStamp(0.17997431755381776);
    msg.setSource(35725U);
    msg.setSourceEntity(144U);
    msg.setDestination(46418U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.9444314387157089;
    msg.lon = 0.09692190303938142;
    msg.z = 0.8471350662168914;
    msg.z_units = 123U;
    msg.radius = 0.6367644798516796;
    msg.duration = 5919U;
    msg.speed = 0.6039430182481317;
    msg.speed_units = 139U;
    msg.popup_period = 19075U;
    msg.popup_duration = 21769U;
    msg.flags = 232U;
    msg.custom.assign("MIRAAZUWSHXSTBBTQCILDDKSVPKZVEJIEFNOPNDSPJNTOOSJRCGPNUVKURFWJKRHYGFZZRFEPSGIAMBEDABLIXRFXUPMGLGQTYDTCMYUCECOKCNVLCYMVMGNLTMZBTAADUPSYPJHVPOMLGXQFWZZXRMQULXRJOVBTIQXOOVQADLYN");

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
    msg.setTimeStamp(0.4132767167381083);
    msg.setSource(49286U);
    msg.setSourceEntity(131U);
    msg.setDestination(38173U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.029079510053821034);
    msg.setSource(34209U);
    msg.setSourceEntity(40U);
    msg.setDestination(55529U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.6140434440002812);
    msg.setSource(22635U);
    msg.setSourceEntity(130U);
    msg.setDestination(62319U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.2966650475363811);
    msg.setSource(3056U);
    msg.setSourceEntity(72U);
    msg.setDestination(14442U);
    msg.setDestinationEntity(53U);
    msg.timeout = 62172U;
    msg.lat = 0.39591606124525835;
    msg.lon = 0.9544011151909778;
    msg.z = 0.36920590700896216;
    msg.z_units = 238U;
    msg.speed = 0.19073545380519663;
    msg.speed_units = 141U;
    msg.bearing = 0.765460932508099;
    msg.width = 0.23733779860223514;
    msg.direction = 58U;
    msg.custom.assign("DDABTJRRICQIJCLMOSSFGIOCAEGCVHOFCWUZJOTZTLAKSFECKZEBJIOUKIDRGYDZZLBNOQEJRXKGABXPDEQFHNOHVWHTEMLHSTNRZYKMYGLBZCUBMIPPWNDIAWLKPFZDLUHVLMJMJATVBWJNQFOHQXCVUFENPYREWVYZVZARKIGXDTSQIVVYNPYVUFBQBYGCMSFLAXDEQRXWSISUUMSPTHUBAQOXSTQKHRTXKXMGMGJUWWXPC");

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
    msg.setTimeStamp(0.29661325098212876);
    msg.setSource(28865U);
    msg.setSourceEntity(77U);
    msg.setDestination(26316U);
    msg.setDestinationEntity(152U);
    msg.timeout = 17511U;
    msg.lat = 0.021054384974048435;
    msg.lon = 0.032216922249557634;
    msg.z = 0.6776922241888713;
    msg.z_units = 226U;
    msg.speed = 0.30898939354342825;
    msg.speed_units = 9U;
    msg.bearing = 0.4575462446546156;
    msg.width = 0.6974692396718939;
    msg.direction = 44U;
    msg.custom.assign("OQOVCSSDWDKASGCTZBIIPTONUFBZVTZRGAKLLKTRKXCSPXIDMPUGWLWXPIFAEVZMBCNCOFVHBYPJXIQWMUPVZJKXWAWZGIBTBLQMBKMMNEUUUECIMH");

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
    msg.setTimeStamp(0.036822618317560396);
    msg.setSource(4515U);
    msg.setSourceEntity(64U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(136U);
    msg.timeout = 55584U;
    msg.lat = 0.7177125374598653;
    msg.lon = 0.17484345023425307;
    msg.z = 0.7875663909532739;
    msg.z_units = 219U;
    msg.speed = 0.5363063120677144;
    msg.speed_units = 31U;
    msg.bearing = 0.9500425167648581;
    msg.width = 0.9296731664581814;
    msg.direction = 27U;
    msg.custom.assign("GHKYHELYRKRIAH");

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
    msg.setTimeStamp(0.7889958966180929);
    msg.setSource(23595U);
    msg.setSourceEntity(2U);
    msg.setDestination(26693U);
    msg.setDestinationEntity(99U);
    msg.op_mode = 74U;
    msg.error_count = 64U;
    msg.error_ents.assign("PWNXEYMZHDRYIEZHTIWHLYGOBTAOHEXSSU");
    msg.maneuver_type = 40097U;
    msg.maneuver_stime = 0.40272841100995715;
    msg.maneuver_eta = 62341U;
    msg.control_loops = 3862943023U;
    msg.flags = 240U;
    msg.last_error.assign("HCPDUSJCMEQZQKNMHHCOFXOHASEUEQFNNDAJFSFXLUVNBHLLNVTATJKGUFCBRJBPOYKOCXZTUWAUOOKMTZUCDJRGQMVOTRYCRBMLMGDJSQGBUMQPASRRWBMIGHWKYQJDNIRIYJEHSZQBTDPYGLYLVPEFTLYIUNLFXHHPNRDTAKLZPXZZISEYHVVW");
    msg.last_error_time = 0.8712619657307801;

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
    msg.setTimeStamp(0.7004229697258243);
    msg.setSource(7551U);
    msg.setSourceEntity(182U);
    msg.setDestination(33811U);
    msg.setDestinationEntity(152U);
    msg.op_mode = 179U;
    msg.error_count = 33U;
    msg.error_ents.assign("VHDTKVYBWVSBMJJYAYCLUGRUWGHTQREOFAOXCBMYPIPZUWFZRMAINPLQZSXLMEUCDELBEGBVPRFPGFSEBFVKXFUXIULTXCKCDCSZBRLWABZAZFTGQNWIUMZIJOHKXBQEVLKUDPLOHIOSNQAPJYGXIMQNDYDDHMPPTSTMSEJRMV");
    msg.maneuver_type = 40100U;
    msg.maneuver_stime = 0.13355515975722942;
    msg.maneuver_eta = 40711U;
    msg.control_loops = 292021992U;
    msg.flags = 211U;
    msg.last_error.assign("VRWBMZZWZYVKJZHTSLEYOFVCMSEZKWBQRUYOSUETDAYQKVXCOIQFJRASICMNLAJVSTYDCRSBIBUBAV");
    msg.last_error_time = 0.583060539054094;

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
    msg.setTimeStamp(0.1322835206449947);
    msg.setSource(33648U);
    msg.setSourceEntity(138U);
    msg.setDestination(12297U);
    msg.setDestinationEntity(159U);
    msg.op_mode = 67U;
    msg.error_count = 181U;
    msg.error_ents.assign("TDYYXTYMRDJSPBTUCGMBWQDDQVSEB");
    msg.maneuver_type = 65416U;
    msg.maneuver_stime = 0.6897921135695183;
    msg.maneuver_eta = 12346U;
    msg.control_loops = 4180940364U;
    msg.flags = 101U;
    msg.last_error.assign("OBILPTQTZMKMGYVGWCHAMYJPDCEQBFAONZKKWOHMURNFZYUYKVBKQPWCISUJXQJZNWJJRSRLNHHNOMIRXQWGRVCEDAOXATFQHASTVHTLBUNHSKFSNIHCUWFAEZMXLLPRYEYDSPSJIWDJDKITKXKXGBQDLFBCXRTOPE");
    msg.last_error_time = 0.8992863894031599;

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
    msg.setTimeStamp(0.6979286755743926);
    msg.setSource(39299U);
    msg.setSourceEntity(118U);
    msg.setDestination(50704U);
    msg.setDestinationEntity(194U);
    msg.type = 164U;
    msg.request_id = 10505U;
    msg.command = 149U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 42374U;
    tmp_msg_0.lat = 0.05441084798699303;
    tmp_msg_0.lon = 0.6030618707108866;
    tmp_msg_0.z = 0.20735886400423242;
    tmp_msg_0.z_units = 90U;
    tmp_msg_0.speed = 0.16206695980746866;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.custom.assign("TGWPGOHLRDUWAXQSPVUGDWXPPLACPKIAWUOHBSYXBXKKTNJBNMTUEVHBRIVDXHPJOMQJTTTLDOBGNWEGPEWXGZQZZOKMOZIVSILQHWHGLBQONHLVTRYZDUZCCMRCBDRZFWWRAESQVZAUOKXGEJYTKXYEMUCDHXWADQUYQHJUFSMZLSNKICEJFVCQNJYEIJRVTFLXOBKAKCSMESJOMCYFFFQJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10676U;
    msg.info.assign("SSQWBCIZOYQRNXWKHVRYMYOSRHRFPNWLHKQNSNKQZMLREWQGSRMXOTEODGDQULHXKJWVDZGJBXMZCCBMERLU");

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
    msg.setTimeStamp(0.491165205531673);
    msg.setSource(13093U);
    msg.setSourceEntity(50U);
    msg.setDestination(866U);
    msg.setDestinationEntity(149U);
    msg.type = 143U;
    msg.request_id = 59834U;
    msg.command = 59U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 40400U;
    tmp_msg_0.lat = 0.5790156916446829;
    tmp_msg_0.lon = 0.5831427265053737;
    tmp_msg_0.z = 0.06274890838071723;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.41790125075484785;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.bearing = 0.5885725019154028;
    tmp_msg_0.cross_angle = 0.5301262059487536;
    tmp_msg_0.width = 0.17181264386428352;
    tmp_msg_0.length = 0.6375526686809833;
    tmp_msg_0.hstep = 0.5393038093915618;
    tmp_msg_0.coff = 245U;
    tmp_msg_0.alternation = 55U;
    tmp_msg_0.flags = 1U;
    tmp_msg_0.custom.assign("YAFCCAKZSQCSQXHTYYDBVMOACUXYCXVTHWTPQQBDLZWQDEJOZEMHAPWRWXBIMQNQIYRFN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60560U;
    msg.info.assign("HDVCCWULAVVFPYWVKDQHCCQNOCLFFJMTBUQNYOSBXSTYUOHBQZKYLJUBOLUMGVXDZJBRKCGEOERJUEASPPNUGJAONNMGHEZXMZNTWBOJIXAZBMYMHXIQFIIKRTFTORVDINLGBZAXYRWPDPMRHQECDMKNZFVDPPPNQWUHTEXLYSIBTLJHTWXMFNYAWGRIIEAVJIRAZKIBLUQXDMDSHAFCRHKZJOOEWPJGAPWKSYLZEFVYQGGSUQTGLKES");

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
    msg.setTimeStamp(0.1052528960336565);
    msg.setSource(11378U);
    msg.setSourceEntity(88U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(240U);
    msg.type = 34U;
    msg.request_id = 62540U;
    msg.command = 222U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.07967659020619411;
    tmp_msg_0.lon = 0.8431311989469427;
    tmp_msg_0.z = 0.5446714984464022;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.speed = 0.445111777202688;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.takeoff_pitch = 0.6603845946451952;
    tmp_msg_0.custom.assign("FTBZUSIAGRTYHALCQCGBGEHCRGOKJSWZMXAHUIQEFVADJPIWPGJUVLBIYZERCDWWSKDRNFDFNXVTDBXAX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53377U;
    msg.info.assign("KSUMBHEUFJMBHTYBJVPRXRNZCSAXSPBSHNNYAYMYVIKRXBINVORUDXJRKQPUHEGWCZOOSZWMJGJMGKRLTPHIQLSVCNNXTTCKTLDZLPAEWEUDIKZBWDSHMZQWOIEPBHRWDOVKGXXBQAMSTVTFXLFEMNFAILUABLWNCQEUCVYPERWNIFFOQFZQIIGHJTKJPDYRCYLLPWDGDPBSOJHGQCVFUVRYKWAAFIGTASVKQZOGQDTX");

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
    msg.setTimeStamp(0.6334826566796979);
    msg.setSource(46327U);
    msg.setSourceEntity(174U);
    msg.setDestination(49192U);
    msg.setDestinationEntity(118U);
    msg.command = 237U;
    msg.entities.assign("VDSZWUUXHLAYPYCNOGUNT");

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
    msg.setTimeStamp(0.05366733008211544);
    msg.setSource(39137U);
    msg.setSourceEntity(78U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(247U);
    msg.command = 198U;
    msg.entities.assign("LKCXNBNCQOWHYMRSGFTMVZCUBGDRLGLCBYLPTDWKATYUUDQPYEONDAIABJDKKAUXDIMFRUVKHFVEPOEU");

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
    msg.setTimeStamp(0.6579708210763207);
    msg.setSource(29677U);
    msg.setSourceEntity(141U);
    msg.setDestination(26593U);
    msg.setDestinationEntity(121U);
    msg.command = 7U;
    msg.entities.assign("LWPDKCICKOAMDIMONWODHJQPZVWCUKYLOARNPQWGFTOUGUJTRALIAQUBGYYLSRSHCIGXSPHZLSCWEXXBUKHNEXRGRKHNGSELJPPTMXBHQVVCNSVZZHQKDZZSEFYGTJGRUVOVDTCBKTXPHTNWNSUYYUDTRJMLHUYQYITQDFMDIZWHCJAQFQROISWPIVOWAKEEPKXAFD");

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
    msg.setTimeStamp(0.10432843955802984);
    msg.setSource(24474U);
    msg.setSourceEntity(194U);
    msg.setDestination(3960U);
    msg.setDestinationEntity(188U);
    msg.mcount = 200U;
    msg.mnames.assign("WWECMFUTJIEYOAONAVZISGJJBKCKKCMFVNJEESLSSBRDWDYXQXGPVPQTHQWNOXTYNPWUXNRDYBMLRZQJRNOFIUVQVAECMRAOOPXQCANBGUX");
    msg.ecount = 43U;
    msg.enames.assign("MJSAUIISVVYJEPCTYOAKRLNIZNDGFAEFLTSNYQCHBMFMFCOHBRQXWEPDYRCPSWWTLVDGEMXUFEHNKJGBSFSYOERCIOOPTLETJGUZRCUV");
    msg.ccount = 194U;
    msg.cnames.assign("LKBJGFWUMDFBLAQKJQODSEAITUKFHMJCMCFYKSGYAIYMIRJXHLEHEXIOZLNNLDPUGTQFSHYVVBXVIQSKLIYAFLVNWMHLSAJVRWFZZTYJSHUTOVDPBZXQCCEDYNIRTXVOGCARWECWNHPEOGMQKPHDSIBLUNNAFRDDGRZVCROOAOFPEYZKDWBAWJGCQKGYWMZTMUURXPZMUPGUXBSW");
    msg.last_error.assign("CPLKMMLAIBIKFDCKEOLCSWTNPTHPAGHKEOMBXNVUJOJTRCDYVZWCXWPUOSUBVDNCIZSNGQFGAMRAISPBRWQJIWKEMSKNWNRQVHZUPUIJJRQWYBPEVJ");
    msg.last_error_time = 0.7024920011744434;

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
    msg.setTimeStamp(0.1405065309267296);
    msg.setSource(25443U);
    msg.setSourceEntity(56U);
    msg.setDestination(14862U);
    msg.setDestinationEntity(48U);
    msg.mcount = 158U;
    msg.mnames.assign("IIUOZARTRHWIMJGBXWTGOEFGIJLMSZGNBQCRNWQHFECADKFEOBADXRGHQH");
    msg.ecount = 185U;
    msg.enames.assign("RKEBZJQTSETAOOCWGZYHZSARRVPUAMCJHJXNSTLXVWNHRYDKGNXIXNBMUEGPBRCCHQEH");
    msg.ccount = 104U;
    msg.cnames.assign("ZKXOGEBJRFAZJFOQZGELUYJQDJSYVYQWWGOWLBACFDNORIGAONDNSTPKDAVWATLRGEZWYIZHEBNLVHQZNRHHHPVCADMJMRQVVGFBQNQPAXQIETUWQZLTKEWCHTFGDCIUSKXFRSJCIYCJZISBNUEHNDCBZFVUWFFDYOHSPNRCHOMMPXKTJEJPMDIXXMKYPVPPIBBHUXLXSGUIYWVFRCMGG");
    msg.last_error.assign("OZMXNDSBAPAYFEEOPTIKYCTTHRQZGYYDXUQUHCIMWFLRQMRBDJMDCIGTALUQYYWNDCKSZBJGWUNRWLYEOSERSURDPPPLUPQDEOZNPMVQCYXKXRDMUJIJVKJXSO");
    msg.last_error_time = 0.24792255178038192;

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
    msg.setTimeStamp(0.5484488453003649);
    msg.setSource(63807U);
    msg.setSourceEntity(201U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(250U);
    msg.mcount = 117U;
    msg.mnames.assign("BKJNTCJZUJOVVXKTFGNCPTXJOFIUBSGZ");
    msg.ecount = 52U;
    msg.enames.assign("PBMKRYHBNFEOOWTIZXUECHEIHJFDAPRTMWZFAX");
    msg.ccount = 231U;
    msg.cnames.assign("XVPNBITUIWDRZXDCZMFUMJXVUMBETYFVJHOMTE");
    msg.last_error.assign("ILEBORSZPASMZZXWYGGZVFVWHOYUVMDBLSKQCRTNTIGWLSEAAHBQPJYYCNJZDLQJACYUXPABBRPRUTZBKKJVQWFBTHILEWBOQNKMKFMBKWMMXLHTDXSLUINCFZNCCREIOFODWUEXJCHENAQXUDGQIKEPHLDNJSPVGUITOIVDBCWFSCTZOCHFPYGSYGQ");
    msg.last_error_time = 0.6255410322914895;

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
    msg.setTimeStamp(0.010082536690336208);
    msg.setSource(15908U);
    msg.setSourceEntity(138U);
    msg.setDestination(14221U);
    msg.setDestinationEntity(192U);
    msg.mask = 151U;
    msg.max_depth = 0.7544172725083071;
    msg.min_altitude = 0.04668003015651401;
    msg.max_altitude = 0.8774115986447528;
    msg.min_speed = 0.38430950531141206;
    msg.max_speed = 0.36024734544688186;
    msg.max_vrate = 0.658810196312079;
    msg.lat = 0.8565974907175123;
    msg.lon = 0.5085359892929285;
    msg.orientation = 0.44510111381421624;
    msg.width = 0.6900983731675873;
    msg.length = 0.19683275787568044;

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
    msg.setTimeStamp(0.6021193983466684);
    msg.setSource(35505U);
    msg.setSourceEntity(162U);
    msg.setDestination(32151U);
    msg.setDestinationEntity(228U);
    msg.mask = 218U;
    msg.max_depth = 0.6961537819091619;
    msg.min_altitude = 0.32576165820226055;
    msg.max_altitude = 0.19452473277491822;
    msg.min_speed = 0.915321763849739;
    msg.max_speed = 0.2473986028288988;
    msg.max_vrate = 0.6979485094603732;
    msg.lat = 0.414982556899293;
    msg.lon = 0.9612635826066314;
    msg.orientation = 0.31216429029305515;
    msg.width = 0.405136745594329;
    msg.length = 0.03425738313681492;

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
    msg.setTimeStamp(0.11138633654470098);
    msg.setSource(13591U);
    msg.setSourceEntity(95U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(49U);
    msg.mask = 132U;
    msg.max_depth = 0.6120740895928227;
    msg.min_altitude = 0.13873022574648552;
    msg.max_altitude = 0.8684728369387802;
    msg.min_speed = 0.4524994294512674;
    msg.max_speed = 0.5635452201149194;
    msg.max_vrate = 0.6152963215775965;
    msg.lat = 0.4339036043964243;
    msg.lon = 0.5902149105377175;
    msg.orientation = 0.6384417233254621;
    msg.width = 0.4019139072750103;
    msg.length = 0.1577593898512798;

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
    msg.setTimeStamp(0.7511441157769249);
    msg.setSource(13287U);
    msg.setSourceEntity(159U);
    msg.setDestination(57975U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.3178796145375278);
    msg.setSource(12286U);
    msg.setSourceEntity(49U);
    msg.setDestination(43491U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.479237921313869);
    msg.setSource(13146U);
    msg.setSourceEntity(189U);
    msg.setDestination(32111U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.9294757345640043);
    msg.setSource(18923U);
    msg.setSourceEntity(244U);
    msg.setDestination(63615U);
    msg.setDestinationEntity(121U);
    msg.duration = 54700U;

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
    msg.setTimeStamp(0.9519826178019097);
    msg.setSource(16866U);
    msg.setSourceEntity(145U);
    msg.setDestination(5103U);
    msg.setDestinationEntity(58U);
    msg.duration = 65082U;

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
    msg.setTimeStamp(0.13683190557275327);
    msg.setSource(51292U);
    msg.setSourceEntity(78U);
    msg.setDestination(60520U);
    msg.setDestinationEntity(96U);
    msg.duration = 40928U;

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
    msg.setTimeStamp(0.43659078648554905);
    msg.setSource(57118U);
    msg.setSourceEntity(106U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(82U);
    msg.enable = 114U;
    msg.mask = 1913671870U;
    msg.scope_ref = 1624121256U;

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
    msg.setTimeStamp(0.1357979375580105);
    msg.setSource(33518U);
    msg.setSourceEntity(55U);
    msg.setDestination(51394U);
    msg.setDestinationEntity(151U);
    msg.enable = 96U;
    msg.mask = 1810602779U;
    msg.scope_ref = 1601717310U;

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
    msg.setTimeStamp(0.2800518792154624);
    msg.setSource(39995U);
    msg.setSourceEntity(83U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(77U);
    msg.enable = 197U;
    msg.mask = 3172975953U;
    msg.scope_ref = 2911274860U;

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
    msg.setTimeStamp(0.7235275487634876);
    msg.setSource(55286U);
    msg.setSourceEntity(93U);
    msg.setDestination(60529U);
    msg.setDestinationEntity(246U);
    msg.medium = 227U;

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
    msg.setTimeStamp(0.9885858662018412);
    msg.setSource(29316U);
    msg.setSourceEntity(8U);
    msg.setDestination(31701U);
    msg.setDestinationEntity(86U);
    msg.medium = 153U;

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
    msg.setTimeStamp(0.14820375332993652);
    msg.setSource(56483U);
    msg.setSourceEntity(8U);
    msg.setDestination(10042U);
    msg.setDestinationEntity(173U);
    msg.medium = 155U;

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
    msg.setTimeStamp(0.7866703678381969);
    msg.setSource(40493U);
    msg.setSourceEntity(21U);
    msg.setDestination(60459U);
    msg.setDestinationEntity(133U);
    msg.value = 0.20797420668516675;
    msg.type = 109U;

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
    msg.setTimeStamp(0.6640787237225263);
    msg.setSource(31901U);
    msg.setSourceEntity(80U);
    msg.setDestination(58090U);
    msg.setDestinationEntity(125U);
    msg.value = 0.12587551726787527;
    msg.type = 172U;

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
    msg.setTimeStamp(0.0524042696586986);
    msg.setSource(239U);
    msg.setSourceEntity(200U);
    msg.setDestination(64006U);
    msg.setDestinationEntity(205U);
    msg.value = 0.9261444158320109;
    msg.type = 33U;

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
    msg.setTimeStamp(0.10794857349276399);
    msg.setSource(26815U);
    msg.setSourceEntity(105U);
    msg.setDestination(17491U);
    msg.setDestinationEntity(1U);
    msg.possimerr = 0.9582036865576359;
    msg.converg = 0.10695927651386816;
    msg.turbulence = 0.36047517672009344;
    msg.possimmon = 243U;
    msg.commmon = 123U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.6175418975610805);
    msg.setSource(9083U);
    msg.setSourceEntity(103U);
    msg.setDestination(41596U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.41104865811979907;
    msg.converg = 0.05879592444320103;
    msg.turbulence = 0.8332390381261807;
    msg.possimmon = 84U;
    msg.commmon = 195U;
    msg.convergmon = 166U;

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
    msg.setTimeStamp(0.5267349102942465);
    msg.setSource(47004U);
    msg.setSourceEntity(121U);
    msg.setDestination(27524U);
    msg.setDestinationEntity(138U);
    msg.possimerr = 0.39441895553869577;
    msg.converg = 0.8367105270043107;
    msg.turbulence = 0.2398187044102884;
    msg.possimmon = 49U;
    msg.commmon = 14U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.02620241804489898);
    msg.setSource(35429U);
    msg.setSourceEntity(254U);
    msg.setDestination(17138U);
    msg.setDestinationEntity(48U);
    msg.autonomy = 130U;
    msg.mode.assign("ZYWHRFUPBWAHWQLHAABMZUFSOPMGRXYZJWSAOSEKJHGDQIQIWWGQDRELGEZEGKJBFNXJQOCDBXYDYHEHVJKTOMCUXVQPIOJJVVM");

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
    msg.setTimeStamp(0.6489353336581513);
    msg.setSource(59895U);
    msg.setSourceEntity(147U);
    msg.setDestination(3451U);
    msg.setDestinationEntity(79U);
    msg.autonomy = 125U;
    msg.mode.assign("UUGCHFAVYGLTUFMWJBRGDWCGUKCXHZRJHDIBRYXMPUKSDLNJUZTWMUFLSASOYJNUWZZVVSLIPMEQKPKPLZLYZCVJEIOANZZGTKFGWAIQHED");

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
    msg.setTimeStamp(0.12504115506779345);
    msg.setSource(60671U);
    msg.setSourceEntity(107U);
    msg.setDestination(55153U);
    msg.setDestinationEntity(77U);
    msg.autonomy = 81U;
    msg.mode.assign("GEWRXYWSTNDKOHZXRVZJFYFAOENMHHVBDBNFIVVXVECBTZAOMWALOWGYEQSMIHBOCFZCQJJNPDQZRXBHNAXKGIOPUPZYCYWHJOTGQXMUEWUDDIXRPKBIPKAMLPTFQLLFZPNMRNARCBTFBZRCIJXOWKV");

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
    msg.setTimeStamp(0.6941463101981734);
    msg.setSource(24798U);
    msg.setSourceEntity(71U);
    msg.setDestination(42403U);
    msg.setDestinationEntity(232U);
    msg.type = 64U;
    msg.op = 237U;
    msg.possimerr = 0.17924540941217693;
    msg.converg = 0.7651493921698423;
    msg.turbulence = 0.7040678118063953;
    msg.possimmon = 177U;
    msg.commmon = 51U;
    msg.convergmon = 54U;

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
    msg.setTimeStamp(0.7403590707716625);
    msg.setSource(40683U);
    msg.setSourceEntity(117U);
    msg.setDestination(64495U);
    msg.setDestinationEntity(235U);
    msg.type = 111U;
    msg.op = 30U;
    msg.possimerr = 0.24432649076301827;
    msg.converg = 0.3170623183811565;
    msg.turbulence = 0.575772465492727;
    msg.possimmon = 235U;
    msg.commmon = 198U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.6215099902481329);
    msg.setSource(42073U);
    msg.setSourceEntity(212U);
    msg.setDestination(24558U);
    msg.setDestinationEntity(192U);
    msg.type = 106U;
    msg.op = 123U;
    msg.possimerr = 0.2901294357791676;
    msg.converg = 0.2731744541916986;
    msg.turbulence = 0.6288374270641032;
    msg.possimmon = 38U;
    msg.commmon = 180U;
    msg.convergmon = 83U;

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
    msg.setTimeStamp(0.9779025576249287);
    msg.setSource(3060U);
    msg.setSourceEntity(213U);
    msg.setDestination(32565U);
    msg.setDestinationEntity(204U);
    msg.op = 173U;
    msg.comm_interface = 147U;
    msg.period = 47183U;
    msg.sys_dst.assign("VNYSYXJIVWWQSOJEZAVBCJEUPPXMTWCSMSVOGGTRIGFTIMMDGLSESSOUGQFKRJHKQATWYYXWGKQBBUXHQEKHZKODDEVUFYHRAIRZLRRDERUCNNVANAKQCIYJOBFLMAEZIONKTCHZFLXAVCDXJLXPTDFQPBSXTMYNKBTCBELLOFPFDLILMHAPKULIKZUMDOXGAHGYNNFIQUWNV");

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
    msg.setTimeStamp(0.8311101893690707);
    msg.setSource(30552U);
    msg.setSourceEntity(167U);
    msg.setDestination(61909U);
    msg.setDestinationEntity(202U);
    msg.op = 68U;
    msg.comm_interface = 40U;
    msg.period = 17057U;
    msg.sys_dst.assign("HNVVCEJZOLKTXXTYOFLOKDVITPWBPAYSPZKXGJQWVCEUTUCPNIMIGGWDBRQZGTAKYTCEVSAQEKHJRMQAZOKMBLJEJMYWEFMEBOHDMNWMRDYYSUVGIVGLPIBITXSXRLICDNJDJRUQGODALTBFQNMVL");

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
    msg.setTimeStamp(0.4445947543156039);
    msg.setSource(64970U);
    msg.setSourceEntity(40U);
    msg.setDestination(50121U);
    msg.setDestinationEntity(254U);
    msg.op = 190U;
    msg.comm_interface = 231U;
    msg.period = 19334U;
    msg.sys_dst.assign("WCYZBZSSUZDBKRAXVSFHQCLXTXEMAHLBYNCOXECKPXNNYOZDBSENPGGIAUSTHJHDZGDWRKSNWPNMYKKACTUOV");

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
    msg.setTimeStamp(0.6186373316075591);
    msg.setSource(34740U);
    msg.setSourceEntity(39U);
    msg.setDestination(8847U);
    msg.setDestinationEntity(16U);
    msg.stime = 359589259U;
    msg.latitude = 0.5332128087576832;
    msg.longitude = 0.11888053228938511;
    msg.altitude = 27845U;
    msg.depth = 22609U;
    msg.heading = 5726U;
    msg.speed = -7132;
    msg.fuel = 22;
    msg.exec_state = -31;
    msg.plan_checksum = 38487U;

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
    msg.setTimeStamp(0.5468254602264635);
    msg.setSource(671U);
    msg.setSourceEntity(251U);
    msg.setDestination(39278U);
    msg.setDestinationEntity(16U);
    msg.stime = 169685524U;
    msg.latitude = 0.14914403415976818;
    msg.longitude = 0.463825072145319;
    msg.altitude = 52943U;
    msg.depth = 7224U;
    msg.heading = 59669U;
    msg.speed = 29441;
    msg.fuel = -99;
    msg.exec_state = -95;
    msg.plan_checksum = 20811U;

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
    msg.setTimeStamp(0.28929982632708695);
    msg.setSource(19472U);
    msg.setSourceEntity(102U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(30U);
    msg.stime = 255589359U;
    msg.latitude = 0.04511597364168041;
    msg.longitude = 0.6589432655547629;
    msg.altitude = 19219U;
    msg.depth = 65047U;
    msg.heading = 8081U;
    msg.speed = -26640;
    msg.fuel = -42;
    msg.exec_state = 20;
    msg.plan_checksum = 35071U;

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
    msg.setTimeStamp(0.42723309949210697);
    msg.setSource(42541U);
    msg.setSourceEntity(145U);
    msg.setDestination(14996U);
    msg.setDestinationEntity(229U);
    msg.req_id = 9842U;
    msg.comm_mean = 93U;
    msg.destination.assign("STFIMEFZGFK");
    msg.deadline = 0.8255399082794431;
    msg.range = 0.8839658458402094;
    msg.data_mode = 140U;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODFXMBPGFVZMFGIQDSKOJEXQLXJTFCZNFANOUCZSBDEQVHMKRCWRHYYBUHUAUNLQNRUOCIWJLBNPGSJRMGASVSBATFATDPOIERGJTYHKWUMODLKDJWZXBNWHDYXBOHKXYXEPRAXZSQWLKEILVCDDRPAYTFLXMSWAHZOYISGQTHUMFSBUMITANKRMEBPGNZQUPJTCSWVJLI");
    tmp_msg_0.predicate.assign("KTAVEOOMVGRCYECIXBGMEQXPETZMSBRYCBGVLJRULQLWEJJFGKLBSYJXAZLULZQXREVOHLCPCVNBSPDGYMTFIPZYUJEUEYZTZVHNZMBSAQCCVHAKKYFLITWATDSLXITTRUEWFDWBMTKQAKBDMDGLSUSWAXZCNSWNMI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MANYCSQUGZQOECJJLPGRWFPBDCQICQHDCAIJLSLINSMSBAAMKDZMBTOUBAYIKIUUXGIFOHGJJRKFHFBIYHDZOCEYS");
    const signed char tmp_msg_1[] = {6, -105, 27, -10, 33, 56, -12, -105, -111, -71, -102, -14, 121, 0, 93, 36, 1, -77, -105, 18, 124, 106, 30, 100, -109, 74, -113, 55, -119, 18, -124, -54, -29, 66, 118, 47, -108, 56, 54, 86, 56, 6, -95, 26, -77, -42, -13, 11, -54, -108, 12, -64, -19, 61, 54, 111, 116, 67, -76, -79, 79, 119, -20, -119, -21, 59, -93, -76, 50, -75, -40, 102, -108, 17, 121, -52, -22, -2, -38, 45, 47, -56, 8, 20, -85, -124, 37, -41, -119, -116, 39, -16, -7, 32, -102, 55, 35, -45, -10, 54, -127, -96, 55, 89, 1, -55, 9, -123, -114, 36, 88, 113, -95, -11, -15, 45, -98, 14, 1, 91, -14, 66, -83, 108, -84, -61, -22, -3, -107, 81, -6, -60, 53, 113, -23, 102, -16, 21, -90, -36, 4, -69, 43, -30, -52, -3, 75, -66, 42, 12, -120, -109, -27, -37, -1, -72, 10, 71, -114, -82, 18, -114, 119, -68, -1, -8, -24, 16, -60, 41, 98, 41, 113, -90, -103, 42, 16, -41, -81, -122, 113, 47, 25, 118, 34, -65, -119, 92, -47, -52, -30, -27, 79, 33, -78, -42, 121, -78, 99, -83, -50, 117, -25, 58, 92, -103, 26, 94, 96, -13, 96, -36, 102, -45, 58, -52, 123, 25, -69, -28, 56, -36, -33, -57, -40, -101, -41, 123, -8, -27, 69, 69, 93, -73, -38, -76, -35, -24, 117, -105, -86, 89};
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
    msg.setTimeStamp(0.21363738712392477);
    msg.setSource(60769U);
    msg.setSourceEntity(195U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(112U);
    msg.req_id = 52087U;
    msg.comm_mean = 128U;
    msg.destination.assign("BIFHDMLIGQEVIEMCEPJQDNAYBWHNTWSAJOOEFRHLRIYXFQSICRBPSVXMLSOCUYPIZAUZPIIZFJCPWEUTQYCWDOZTCJRPVNBNQTUTDGLLYGJFWVEAAKOCDSSFGJDG");
    msg.deadline = 0.3890499732175714;
    msg.range = 0.0307781048349568;
    msg.data_mode = 209U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.4064523964553657;
    tmp_msg_0.lon = 0.957581439847159;
    tmp_msg_0.speed = 0.4415690350418854;
    tmp_msg_0.speed_units = 29U;
    tmp_msg_0.duration = 46194U;
    tmp_msg_0.sys_a = 31535U;
    tmp_msg_0.sys_b = 42385U;
    tmp_msg_0.move_threshold = 0.24359678502516013;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LHHQGLIRDSVQIRZNMHTWJAFTNYQBCPTOYZSKKXEYSATNENPDIWPZWPCIZSFBHZLIRCCHMGCQCVAJCS");
    const signed char tmp_msg_1[] = {-122, -89, 112, 56, -45, 46, 110, -118, -45, -23, 32, -83, -35, 6, 57, 4, -39, -30, 94, -38, 64, -127, 92, -70, 87, -42, 51, -105, 25, -36, -5, -101, -63, 17, 71, -73, -105, -110, 106, 4, 96, -1, 76, 101, -35, 10, -50, 3, 103, -95, 92, -6, -16, -123, 64, -12, 29, -63, -52, -70, 39, -7, 26, -88, -62, 24, -103, 28, -11, 105, -80, -78, 99, 4, -8, 41, 110, 100, -95, 74, -36, 32, -108, 108, 62, -106, 84, -18, -45, 66, -107, -96, 123, -78, -105, -46, 57, -108, 126, 114, -79, -69, 15, -68, 121, 71, 122, -14, 121, -76, -122, 114, 88, 9, 88, -61, 44, 39, 51, 84, -28, 5, 47, 116, -108, 61, 126, -48, -46, 68, -97, -89, -100, 79, -47, 3, 12, 51, 25, -91, -6, -33, -41, -17, 68, -92, -5, 105, 105, -103, -74, -17, 92, -93, -77, -33, -91, -80, -83, 33, 56, 78, 23, -120, -88, -73, -126, 114, 95, 11, 112, 52, -88, 20, 56, 70, 119, 20, 89, 30, -108, -15, -34, 23, -63, -125, -121, 17, -96, 102, -2, 26, -43, -78, 121, 65, -122, -3, 53, 41, -50, -123, 58, 35, -126, -119, -54, -56, -72, -9, 4, 41, -46, 102, -24, 117, -38, 85, -19, 60, -76, -7};
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
    msg.setTimeStamp(0.6793655448694852);
    msg.setSource(16780U);
    msg.setSourceEntity(38U);
    msg.setDestination(31417U);
    msg.setDestinationEntity(151U);
    msg.req_id = 798U;
    msg.comm_mean = 113U;
    msg.destination.assign("QUNKATXNLVEYCMATCTZDDLAHJXRABZUOOWBIBHVYTIYPCOUMJKFXNEKIRXEWKSYUCJLUGDXCLXRZKZEQZGVHZYKGALLMVCFMNTRISGTWAODLHAINURPTZPVIWYSBFZTWJDG");
    msg.deadline = 0.7248875817134476;
    msg.range = 0.6069641958867652;
    msg.data_mode = 198U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 17206U;
    tmp_msg_0.lat = 0.8111707376952901;
    tmp_msg_0.lon = 0.48327618928366545;
    tmp_msg_0.z = 0.2776030541856267;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.speed = 0.18220716240463897;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.syringe0 = 17U;
    tmp_msg_0.syringe1 = 168U;
    tmp_msg_0.syringe2 = 216U;
    tmp_msg_0.custom.assign("URQEINSXZLECPLUNLFTLYPQADNALHZIEWJUQBGBDNDIZKEHHFHBJCIMVKTOZGWOOHYFRDSRNVOUCKBFYATQPFYIXLYQDWNXOSEUJAFPJKSBQKSHEBCPMWKIUGOINRFPTRCIXGDGQUXMWMYFUSHDXCRAJMJDXAWLPMZGGO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JGGXNZKJILGIAMGUOGYTPFIBRHUWIBAIFSCTCCYXTSSEJKSZVVLREBNJMNDVHNBQGPSESMEQVUMHVNNSHALTDLXGDGVJRUWRWJZHSPCUKMAAFACKYZTXVMDTACJHTPDLZRHQBSQUFEKVNZIRDEJTYQVKJKSOFPMALEXNHRKWUDXYRPTQOOUCBEWKGYNJBLYZQFECPFOQMBLWZOKWHWYXNFZCIDIAFR");
    const signed char tmp_msg_1[] = {74, -12, 9, -100, -111, -98, -12, -97, -72, 37, -57, -70, -101, 60, -20, -19, 40, 82, 80, 72, -42, -111, 117, 107, -92, -101, -101, -42, -16, 59, -109, -54, 57, -21, 21, 126, 6, -13, -111, 27, 38, -35, -53, 94, 54, 121, 51, -40, -68, -31, -61, 90, 77, -16, -118, 16, 56, 20, -128, -97, 94, -111, -72, -9, 45, -11, 84, -14, -104, 37, -78, 120, -91, -79, -17, 70, 77, 31, 27, 33, -46, -18, 89, -119, 68, -57, 103, 83, -52, 48, -32, 87, -58, -118, 8, -71, 123, 59, -92, -1, -102, -89, 88, 101, -119, -22, -72, 2, -107, -44, 67, -30, 126, 96, -122, 119, 77, -123, 97, 82, -68, -83, -63, -110, -13, 81, 126, -119, -104, 93, 28, 17, -46};
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
    msg.setTimeStamp(0.05985722254895243);
    msg.setSource(27944U);
    msg.setSourceEntity(131U);
    msg.setDestination(55624U);
    msg.setDestinationEntity(110U);
    msg.req_id = 853U;
    msg.status = 105U;
    msg.range = 0.5884963027218143;
    msg.info.assign("CWMMCYYITXEUVYAUKGIKFFOSYPADKLOIPCNJOOEZJEOSZSDVWEFXBQVXZLPVVPIWYEZXMWY");

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
    msg.setTimeStamp(0.990499136614744);
    msg.setSource(63558U);
    msg.setSourceEntity(195U);
    msg.setDestination(45222U);
    msg.setDestinationEntity(230U);
    msg.req_id = 56173U;
    msg.status = 39U;
    msg.range = 0.8870855521815137;
    msg.info.assign("GTIERGSJUARJDOCDFTWUSGJSAEMFFLMNEPWZNAKYAEXSYYKCCUWHPL");

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
    msg.setTimeStamp(0.38897414454062484);
    msg.setSource(62910U);
    msg.setSourceEntity(87U);
    msg.setDestination(57457U);
    msg.setDestinationEntity(25U);
    msg.req_id = 37613U;
    msg.status = 177U;
    msg.range = 0.6480429732700642;
    msg.info.assign("FYQXDGGDTCZKXUOVIZIECANFVPWNBKVLEAWZZWWTAIUZQXWUUONHDJFUTPFPELNOPWBYSPHAIRXMRKFDXIGNYDLRPRSESUUFEMFXHQKJUKJCQAJIEODGLRCCIBKJIVAXVVTVERBMZROKYTYDGUKMZHFONSVWSBYOYCMAOGHDZKAQNNQQJKXHTEGRZBLRPNMHCPECPGJH");

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
    msg.setTimeStamp(0.5489771830640526);
    msg.setSource(34175U);
    msg.setSourceEntity(14U);
    msg.setDestination(64107U);
    msg.setDestinationEntity(125U);
    msg.req_id = 7937U;
    msg.destination.assign("AHQOWOHLZSUUPF");
    msg.timeout = 0.5344512057176897;
    msg.sms_text.assign("ZJBMIRAZXWDMBPVLZCJVDQTCHDNQAKXZUXYWSCKIWUFMGSCOAUTVHTVXUFQXQTYVSFYOZYTKBODZANXDDJHEOEPYMOJUVLRAQGCGMMFOSSBZHPBNQIPKGILTQDEXPGWBWJORCZZBGRIIXVQWFLQYWAUNCMSKFJKRCCNTRTNYVOPEOZUSKNLXLHRUEPSUGEWLNHIPMBLSJDRBMKMWRFNHGRKXP");

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
    msg.setTimeStamp(0.019296858221313773);
    msg.setSource(62074U);
    msg.setSourceEntity(253U);
    msg.setDestination(4470U);
    msg.setDestinationEntity(119U);
    msg.req_id = 49693U;
    msg.destination.assign("OORGLJFUKIQAUOBNGOBWUMVMQIDIZ");
    msg.timeout = 0.8439991465793669;
    msg.sms_text.assign("SLBNMJAUMNHUQLYYIZCZPNDACCBZDRMCYSRVGJHTPFQUWVBRUXDAXJEIRKUZCVPBJEVGFBNKPMVCZPZGPXBHHEDRFLVJNOHOTSAJDQXXBJLTGHQSRTICYWYHURGFTSFKW");

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
    msg.setTimeStamp(0.09376432579424099);
    msg.setSource(47767U);
    msg.setSourceEntity(71U);
    msg.setDestination(997U);
    msg.setDestinationEntity(134U);
    msg.req_id = 61003U;
    msg.destination.assign("SNGSEDVRFPMUSHTUNFJYFQVTEXPSALAIJAKSBTAWGKERFVLPHMYABBRETTUVEYRIBVLQRCWPINUG");
    msg.timeout = 0.2601566967701958;
    msg.sms_text.assign("BOAFXGAFXBMDIKOZEBRDPTVNAVLQEZAAAKYHQNLFZVNYXYLCCNXD");

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
    msg.setTimeStamp(0.84726673025475);
    msg.setSource(648U);
    msg.setSourceEntity(223U);
    msg.setDestination(40289U);
    msg.setDestinationEntity(221U);
    msg.req_id = 52674U;
    msg.status = 42U;
    msg.info.assign("OMXPFAQQCKNSVKNNLKLKZUIAMDUEOQXDAFGGUELIUXVRTKPXCDZOGCCPFARQJLDSASMFMNKWUZESWSBRJEZOBVCDPOYDONMQPZTJNAKRDJCVOLHTWDTYRCPVXHNIMSRZAIRYEFUKLLGMTRXUGQQBBUVLPYVRSIGENWAPKGTUHSCDUVMHIHLOWMEBWJWHF");

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
    msg.setTimeStamp(0.00014760942337910254);
    msg.setSource(64573U);
    msg.setSourceEntity(91U);
    msg.setDestination(64259U);
    msg.setDestinationEntity(23U);
    msg.req_id = 57559U;
    msg.status = 121U;
    msg.info.assign("MTLNOYKPIBNWRZGEMHPCFXZSKQZHMJWTAPPSSDFODBYSKIHXFAOTIYPZXUJAQJDTRWGBUJKEPDIBYVDJUYRKBKUJKSEGDEMVEBFHLWTAZUNVXANOLIPDNHQAVNLQRNHBRAVQRQDYKAVYQUZFCZWTUSMHMICYKMJNMCMGHIQEITOIBHRDLLMUQGFAQOEXCPFRWRTCCJSSCWVLTWNGTHUGXOXDOGNSUPYXLWJ");

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
    msg.setTimeStamp(0.7023258009215199);
    msg.setSource(50012U);
    msg.setSourceEntity(47U);
    msg.setDestination(14548U);
    msg.setDestinationEntity(219U);
    msg.req_id = 38350U;
    msg.status = 193U;
    msg.info.assign("ARKVEFVWAVXJZLK");

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
    msg.setTimeStamp(0.2011923467692489);
    msg.setSource(34623U);
    msg.setSourceEntity(189U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(75U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.9829962625631152);
    msg.setSource(38692U);
    msg.setSourceEntity(63U);
    msg.setDestination(37369U);
    msg.setDestinationEntity(96U);
    msg.state = 10U;

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
    msg.setTimeStamp(0.22835647720581942);
    msg.setSource(14607U);
    msg.setSourceEntity(124U);
    msg.setDestination(27574U);
    msg.setDestinationEntity(164U);
    msg.state = 207U;

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
    msg.setTimeStamp(0.6308145460406853);
    msg.setSource(15043U);
    msg.setSourceEntity(209U);
    msg.setDestination(54895U);
    msg.setDestinationEntity(27U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.8529214532755104);
    msg.setSource(37338U);
    msg.setSourceEntity(5U);
    msg.setDestination(18917U);
    msg.setDestinationEntity(30U);
    msg.state = 70U;

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
    msg.setTimeStamp(0.7723895244986257);
    msg.setSource(53434U);
    msg.setSourceEntity(46U);
    msg.setDestination(16743U);
    msg.setDestinationEntity(241U);
    msg.state = 41U;

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
    msg.setTimeStamp(0.9640700085991073);
    msg.setSource(54590U);
    msg.setSourceEntity(106U);
    msg.setDestination(50010U);
    msg.setDestinationEntity(124U);
    msg.req_id = 26488U;
    msg.destination.assign("PCHEBEIKKEXFCPHWZRLZBEPJDTWJVDKVDVEKOUXSPNRONJEMYCQQLGAKOYLORANEVGGWSRRVJYLWNXZANDHIAJASMISLMQJDRPXGUNBXHJYHNTHDU");
    msg.timeout = 0.652362842369407;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("JFQQPMSLBLJJOTVSORUXBTTZMPGWQQKIVBDIHDCFMEXAGHBWNRFFCAKYCHJPTMSMTRZQWYGPCZUIRBVHOCDQAYTAYNDBMNKVYURZZSTXUHRZZAOQIUWELVHHNWCGIJYYLSXLSILJ");
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
    msg.setTimeStamp(0.25040766675240944);
    msg.setSource(51520U);
    msg.setSourceEntity(83U);
    msg.setDestination(20512U);
    msg.setDestinationEntity(171U);
    msg.req_id = 38006U;
    msg.destination.assign("SOJVTGNKLRYMLDZMKQXDCLYLUAWEEAVTODJTYQBGNFXVKDOJZSGJUWWVWBGCZFGQWIGTXXJAULHRIMEQPPKBIBUHPESCYRPPHAGJYRUEQHCHNZRDUQOFFAZRHGVTMJGESYCFFIJSIOREOVDEPYAXZFLKQSJHPBOOJUWMZEWNMYTPECKQVCDH");
    msg.timeout = 0.3894608729736555;
    IMC::RamUsage tmp_msg_0;
    tmp_msg_0.value = 0.19388330467938486;
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
    msg.setTimeStamp(0.15441725576251097);
    msg.setSource(61391U);
    msg.setSourceEntity(155U);
    msg.setDestination(40579U);
    msg.setDestinationEntity(62U);
    msg.req_id = 58380U;
    msg.destination.assign("TMUODXKEQSKXRBCFZRCIKOQIAIAEJWKDYQIKTNZMCWONIZEMPFVZGFHPTXOURRYDTGF");
    msg.timeout = 0.596207934666599;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GBBYUWMQSZQDOZUIVSCKOFJMXASCSRRUOHXRWEGAVCHAFEFLDVTMHTCBNBHGXEPJHRSUMAVFFALRHBYCLPJTQPNWPQTXZWLNVXALNESUBPNWKWJGYLZNKYYVKKCFHYBKMPCIDCEXWTRAFVTNLZVQJHIPNMI");
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
    msg.setTimeStamp(0.27922760022630433);
    msg.setSource(45045U);
    msg.setSourceEntity(136U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(67U);
    msg.req_id = 47646U;
    msg.status = 79U;
    msg.info.assign("LOLYNQVUSJRPBADGZMGUWFRZTPEXYHPEXILFSUORCYZRIIMAIJLVAZWCZXJLFRHFOLCFKMYNS");

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
    msg.setTimeStamp(0.14493417399576558);
    msg.setSource(9649U);
    msg.setSourceEntity(69U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(212U);
    msg.req_id = 52774U;
    msg.status = 214U;
    msg.info.assign("OZVFAAMJOPLKDUAISSVHOZLUSFUUGHVXECTFWKGRIINQBGBPYYLBHDKDOVGYNAKUYZGCZWMRTCNINIVTMHCPSBNRQBZRXJBQVEQJEMOTQNGRATQQAMYJPXMICJJMFPJXSZRYEADQEFJUKTYLEZHADVCDXFBRWZWBGUNKYMCFDKVHNGWSIRXKTOCGRFTMULRAWQEMXYTBCZDDQXEHOHKZEIWUOLUPOPSWELIHLBSGL");

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
    msg.setTimeStamp(0.00787172871175712);
    msg.setSource(14078U);
    msg.setSourceEntity(72U);
    msg.setDestination(39047U);
    msg.setDestinationEntity(211U);
    msg.req_id = 17189U;
    msg.status = 11U;
    msg.info.assign("MBFCRXUFRGKNGVREBELQMGMQGHTDCMRLTUQVVBKVQSDRSXBYOJKKSUCHRYCYFSGHKWKQLASPWTUNZDCYEOWKUZPPHLHZIAHGYMSFTMGLZQJFSBX");

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
    msg.setTimeStamp(0.9245914395562466);
    msg.setSource(51003U);
    msg.setSourceEntity(178U);
    msg.setDestination(1385U);
    msg.setDestinationEntity(77U);
    msg.name.assign("HCJHZGKVSRKLAWHNTKRZNHGPJWNHKBDYXVBMWVEUVDXSJLYDBQZADRYTZPLABCMZPDWVBULQPVWEIFMXSYOGJQOOQGYMODTMMIRGOBITSSFZTFTGHEDKWRAIQXDMIIFGBAQWLPRJKHHXB");
    msg.report_time = 0.18873669759854173;
    msg.medium = 0U;
    msg.lat = 0.7844545038166231;
    msg.lon = 0.998319802994783;
    msg.depth = 0.422965135925645;
    msg.alt = 0.7297479636719902;
    msg.sog = 0.3311018880497536;
    msg.cog = 0.0016783607930719313;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 60U;
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
    msg.setTimeStamp(0.23826552969445292);
    msg.setSource(26041U);
    msg.setSourceEntity(14U);
    msg.setDestination(36504U);
    msg.setDestinationEntity(25U);
    msg.name.assign("KQQWPWWJYMXNIFEIQSJZNICCLDLFWMVEMEKPGRJMVFROVAFGGXBRIMNVMTLCQESVXKGFGJXHILYOUREZAGVBNKBBUBSNPDOMQDAYWSERDQLASKFSKAPPJRJVZXOHCOHTADMHPBAKMFUEPPJXRWYNGTZQLJUGUNGHGECBLYCYXHNNOTASP");
    msg.report_time = 0.9812204462434374;
    msg.medium = 24U;
    msg.lat = 0.5493224800959698;
    msg.lon = 0.8184629020321834;
    msg.depth = 0.4847482933081664;
    msg.alt = 0.3139504278349917;
    msg.sog = 0.8546370007613157;
    msg.cog = 0.3709546520465764;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.6441471154906026);
    msg.setSource(46780U);
    msg.setSourceEntity(244U);
    msg.setDestination(65345U);
    msg.setDestinationEntity(41U);
    msg.name.assign("MDJLQCPXVOUATHKRYKMYJQXCIFWMUZVRZTHQVNKSVAZPKWAQWHOFUQCVSOWWYCYULTWZUABPDYFCGTYMFQTTXORDLUJSBHVGIKNND");
    msg.report_time = 0.41500384663843726;
    msg.medium = 246U;
    msg.lat = 0.05314591257416823;
    msg.lon = 0.8630536145357645;
    msg.depth = 0.7027003128275982;
    msg.alt = 0.06485641244815443;
    msg.sog = 0.5056224632265552;
    msg.cog = 0.2508421977545111;

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
    msg.setTimeStamp(0.5273102335123311);
    msg.setSource(60039U);
    msg.setSourceEntity(228U);
    msg.setDestination(45936U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.42267361770968515);
    msg.setSource(19755U);
    msg.setSourceEntity(60U);
    msg.setDestination(21801U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.5835930616334254);
    msg.setSource(57906U);
    msg.setSourceEntity(114U);
    msg.setDestination(8052U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.8561231289376436);
    msg.setSource(25047U);
    msg.setSourceEntity(107U);
    msg.setDestination(7839U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("USJJWMGUAQFXWETBQXPXVRIZLTGNFVOHOGVACMPTZUJRJELONNGIYFZHSMXIOHXZTIYBKUAFDXKSBRPUPSWVHUMUPXYMQZTFLGNPOFSWSQWVJLIRPDTWDLEQJBKEYCAAHCNKASLVLFITNINOXHUYUBKZQKQTMBYDPWBYOMJIF");
    msg.description.assign("GVTEWXVGWEEDGNOZCYCSXCUKAJDFSASRBVDRHYPLBRPYKHABGHMVZTFBOHMKBHOXIDUXTFQSJVSNRJLLIUJDOFSJYCPIHWBENIOKAEQFMQMVWJODZCGZAWKDNNIFWNWUHMAANASAZIEPYXQTHUNRLMYZPRMRUNOKTLEEBWUPYCVXBXGGNSSFGRGTZFCTPVZYZFRQIHEELBDDVMX");
    msg.vnamespace.assign("HETCEKQUHJMNBZYTEBPYTVMQPDFWFEDFPLVPGYNMBIZNBEAURBXLMITJLZVVLIRIOSGRGQAUANXKTEXPAOHNPUCJJEOVXBTZGXVAYACGFHHKRNBNWKVHVVASOKQOLZYIEFRXDWYYAJWFSNQDDIUSWAKFRCSRRUWHHDPJQLUWLCZLUWSUEMJZWXLCZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BVXFDDXBJPRRNJMMYTI");
    tmp_msg_0.value.assign("CSTTLQPWVAVOUGDYEJQZGWBVSZMOUCICRNYVLZDBVWPQXIGRERMVYHREGXLPRAEBOSLYFOTBUCYGHHSOZNNJCIFCHQHUQPXBLXJJCFEVKFRONYTOXNBPSXQFTBQTBMNZRMEGPBVMDATVXYJJHEVHAMHGKUKPDIZJEGGRCYFZYBWPWICWMUFJHISFDSPRDWAAUKZHKDILQKIJAWDKAM");
    tmp_msg_0.type = 209U;
    tmp_msg_0.access = 81U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LWSDWTJIKQLEXXBPGQHFORXACWFLDFMPSRDPRUCRCARKLCIGESTBTJKKZQOKAQJRWZBBSGVNEXLOTPONTEAAEQHUHIZXAAZVUWKBTEYOIGJUPLGAFPQGNFWSIDWPSLRJCTXMMOTMMHINOVLYWGCCBDNJZICMFNIVBNHHKYH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BALWZZDROGZUECJLZHRSEBSIXJUWDPPEGJGDMHRBZUZKPEKCDBHFPNFYRFPPETGUYHDNFXQCVYXEYUWDGFOKZWAWENABXVSEHSQORRZMPYOGWHNXGXWOQJDMVPFROZGVQOULALBCLIFLPIRTNNWVOXDAHNSHFLIRVFQQVCMUGKYKAMIYFYITGSYOVWJLXJQRJBUTNTZINAJQ");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 3929U;
    tmp_tmp_msg_1_0.custom.assign("STGGJBCZJJOVCWDRLACSWBXSLHMQSBUIZIBHVYRLDTUHYJWJYDKDSYPGPHDMPQOCOTFMKKTPYSBJUSECKINWKCDFR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Map tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id.assign("RHUKYVMXVDALTIYNFZGPATJHXEKQZCWTJPUFNRKLUZAYRJVKZFLGLAJKWBBPMICLBATGPSVEWAFFQNWWWIBOPMILNYRKRQOMUIRJUBZFGDCEFAGSCCTYQNK");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanDBState tmp_msg_2;
    tmp_msg_2.plan_count = 40413U;
    tmp_msg_2.plan_size = 4166610087U;
    tmp_msg_2.change_time = 0.26882927023866077;
    tmp_msg_2.change_sid = 21492U;
    tmp_msg_2.change_sname.assign("DLKHJXEIPAPBIOLLHKIGCTXRIWMINYBRQERJVFQZEWFCVKUNNCEZVPCMZXIQUQYOGGEDPOQTKKNOJELBFWAOHVBYAKMTDMVUBCARVYHHEDIURNZXXUOGWDESQSBFXCBYGQWSMNDYWRASRHGSCTFCPSBJWUTWFMKPZXF");
    const signed char tmp_tmp_msg_2_0[] = {-115, 76, -72, -96, -92, 24, -66, 60, -89, -112, 62, -34, -46, 83, -94, -80, -17, -79, 8, -30, 52, 31, -73, 5, -113, -52, 85, -31, -77, -49, -86, -124, -107, -125, -14, 108, 64, -47, 66, -38, -116, -1, 99, -1, 0, 78, -61, -92, -3, -65, -65, -1, -86, 44, -70, 24, -74, -40, -32, -10, 33, -122, -84, -64, -65, -27, 5, 1, 11, -107, 60, -4, -38, 19, 27, -113, 73, -95, -38, -63, -82, -94, 99, 116, -124, 113, 106, 12, 3, 84, -38, 28, 88, 7, 53, -18, -95, -67, 116, -71, -3, 122, 117, 45, -35, -1, 12, 95, -125, -66, -100, -106, -71, -56, 68, 117, -123, 12, 35, -51, -4, -81, -20, -115, 22, -58, -86, -9, -28, -29, 11, 93, -92, 82, 82, -23, -119, 42, -35, 75, -15, 86, 107, 102, 90, 9, 69, -10, -70, -67, 99, -120, -123, -101, 117, 108, 93, 51, -95, 64, 56, -32, 25, 11, 8, -97, -77, -115, -110, 37, -78, 6, 107, -117, -56, -55, 14, -51, 23, 53, -27, 26, -113, -29, -7, 16, 83, -102, 22, -72, 40, 1, 119, -1, -116, 101, 95, 11, 11, 38, -98, -124, 114, 36, 89, -23, 74, 75, 10, 50, 59, -74, 3, -107, 34, 96, -6, -85, -1, 12, -34, 98, 2, -69, -75, -127, 80, 7, 105, 44, -112};
    tmp_msg_2.md5.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.15631913233175498);
    msg.setSource(45164U);
    msg.setSourceEntity(34U);
    msg.setDestination(63329U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("QDDYYOJGNAGHYRTFJCRTKDXOUNNQRUZLWQSMBNIKGVMXPRGOHPEXGSRWHOKGR");
    msg.description.assign("JWBEZPUAYRSXZCJXEMXTSSUCOWANVKSBPUKDUNBFWEIZIBLCFOJKJZJMETNLDJYEMXGYDCSGBDHLTAZMGFUCFOMRSRHQBTKPUFPCPIQDHBTNFKRKFNEBLDZLTZVQYVIHRHQMOIXGJKVVNDOJCSHKITLVWHTJULWDQUWCGKOYTAASWVOLYLOHXSADLHWPUJQ");
    msg.vnamespace.assign("ECSBWPZMWWYNAMFBJDQACGOLMDGUXEF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MEHRSPRPWIXFXJDKBREPSQTPXDKGQGMDAANRETBZVABWQMEHGTAUODRYETKMNZSISIEQGAVQAVQCBGWWYCJZZDCZTOOSFVLPLMNBNFVDGGLTSRUKSJGEVKOKALYXIWXSWNMCZPDWXOXQOBDPCUJOXRZLXJQYJBTFUHNUNQIIFCGBKLCYLTHHOYWRQPSKMAHWCJFLZKLRVNPHVYIXENOZYJM");
    tmp_msg_0.value.assign("OMVGTJWVQUKONTYWYLKVHBNSGUCMQTVARFBXQMESVCOYSHTJPQFECLPJTFYPWIPXOCBXROYQNKXYLDPSQZSWJXLJPMWFZAYLRSTBGJFEQOSUYV");
    tmp_msg_0.type = 58U;
    tmp_msg_0.access = 206U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SZBLPAXYWKIXGOFMLENKOJVVKODKWYWYEURCIFXUQTEDPKQBTHLQTYYRCQAGWGPNJCRCTVNNGXRUFWSCBLDIEMIVNHAZIOVYZUPTZWNXOG");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AQNFPXSNEFPLECMZNSXCXMRNCYWTVUSHPKBKAGYCGSSYJOFAGANSVRG");
    tmp_msg_1.dest_man.assign("SMAIQKGMMASTYLIUUCROOFXNEJNVLMAFPCTXYFVCXDYQRBVHELNCWTQBZFUJTRVVQBKYDJVJYNSDHVWRPYSZRBHUQPIMSRZEPTTUITQMIEACKBSINX");
    tmp_msg_1.conditions.assign("HUTHILKHUEWCYFXXBIEPWRJBPWRVACQDOFBOSBJXAJSFELACZYVGKWNSGMZTDKGNWIOUN");
    IMC::PowerChannelState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("CBFPTJSRRFMVPOPFPKZDVEDZXTJSCEQJNDBMCLJIZIAWLNGHOOLUYRPCFURDXCSMWEFAAIXNQHOXWTRNMSIQGLDBTBGHJIOKSHUQWHVDXMKMPTNDYUWFBKNVYSRJYVIEYMTQFRLTCBGEZQLRAEMZZBVGQOPOEAKBWHZADVTQIFCXLWKLGYXUVIJC");
    tmp_tmp_msg_1_0.state = 220U;
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
    msg.setTimeStamp(0.6917107569382654);
    msg.setSource(64614U);
    msg.setSourceEntity(224U);
    msg.setDestination(25141U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("GGKPZBHEBDBAFIZVFDHJWSYPYWGQYCQEUBNNTPFZOKMNTFHDYBZHFBXPIYGMGXFVAJXXMLCBBPMGMHYEKXQSSJWQRVPVEISYXJTFLTWHUSWPBETLYAIFNKCXRPVCDNUMEQAGVUKCLTYVOMURUUKVAWAZICKCLGQWSZRJTEXJDZVTDAQPDCLTUTJRSRAJOSOI");
    msg.description.assign("IUVEYJFXRRWCXTZORXACEJLRLYIHMNHXPAYKMHIZONLAQDRGAHSZXZFVIXQACVMUKEWDSDPJNFXCVHQCBUWYHFDEKYMEGBSDQCGLTQQVLOKYCVMYJGWDGANYLDJQFUAHAPFTOMBSHWJDBZWPNMZKLWIBFSISYRGHZGOPVKQGFTTYDOOKTNAOSKN");
    msg.vnamespace.assign("MRLDJWPVTOKFCTJMEQN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BXWAIJICZRIPCEZLXONGQSPRRKBQZAFZLMVCFZZECMBDVWUFIQZZKKMMDSGXVQNQ");
    tmp_msg_0.value.assign("XJDNZIEKBFBAPSRKWSDGORTMCTQQVLDLWGZVSLUVCWHRDVBCKYFCEGYDEYJYKAHAPQQZHB");
    tmp_msg_0.type = 231U;
    tmp_msg_0.access = 113U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ETJBNUDYMWGNOVZUMUWIRKLLXJBRQEHTFQPZNWICBNDFMGVVIWSNRAGLHIFZVHPEPBOTETZGWBRRLHKMQKBRYDUGGPAULG");
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.459379994407635;
    tmp_msg_1.z_units = 14U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ValuesIf tmp_msg_2;
    tmp_msg_2.param.assign("KLKOBIKWRVRBWKMPPYOTOZ");
    tmp_msg_2.value.assign("KTXUXINJDXXNNVRVMOACTKCGJYCUNKOITASJJCJWNJOWYAZIRPKPHOOGRHEYLCAFEEYSNBIKAIGQHR");
    tmp_msg_2.values_list.assign("VPZVTYUGZOIDSNFAVSNREBXARAFRXWWFTSRATQLKIOSDGMHQPHTLKBISJUDPAYIOFBABGIOBXQEMXWWJHJGTZUKMLNDBMIQ");
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
    msg.setTimeStamp(0.773716481146071);
    msg.setSource(45432U);
    msg.setSourceEntity(75U);
    msg.setDestination(44047U);
    msg.setDestinationEntity(54U);
    msg.maneuver_id.assign("KGGQENABRSGEOBTPVRDBHSECZLMUWNVFNPMVFTBEVJMMYZQKQWKNZSCJTFYOBXZYYRPQMSGWTUOVFBODJXNVAXDMTWGSPJKZVSMTFUFQRAELLYYPNOELDNJICWFDZBSUDAUJCSLXPWWDXYRLCQSCHANCMOLZEBVHINJYOYHUZUPTGCUWGELFI");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.9015983759370096;
    tmp_msg_0.lat = 0.3786912471303281;
    tmp_msg_0.lon = 0.1798394831967285;
    tmp_msg_0.z = 0.30929817666728265;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.travel_z = 0.5702757743449122;
    tmp_msg_0.travel_z_units = 171U;
    tmp_msg_0.delayed = 36U;
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
    msg.setTimeStamp(0.9132305823377447);
    msg.setSource(6786U);
    msg.setSourceEntity(10U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(89U);
    msg.maneuver_id.assign("GMXHOLZPUVNXTUIMWNPCSVYNMXJCQIKHAITBDRDKYYVXJHKSVLHRKUMBHWJFZGEEXIISJWCBAFTBVEZAKWGMAMSXNGQXCUCRPYQFTNRWLPGKSYCTSZBMJGTODRN");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.20897454574506213;
    tmp_msg_0.lon = 0.5696715706396905;
    tmp_msg_0.z = 0.2447058021688947;
    tmp_msg_0.z_units = 11U;
    tmp_msg_0.radius = 0.130611186917858;
    tmp_msg_0.duration = 54287U;
    tmp_msg_0.speed = 0.873950194559474;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.popup_period = 36171U;
    tmp_msg_0.popup_duration = 130U;
    tmp_msg_0.flags = 96U;
    tmp_msg_0.custom.assign("SJGHOVQXWQRXPXBYHSRUPQBHAEPYEZFVGUYGFBWEOQPUIAWYHJTT");
    msg.data.set(tmp_msg_0);
    IMC::FollowRefState tmp_msg_1;
    tmp_msg_1.control_src = 44106U;
    tmp_msg_1.control_ent = 61U;
    IMC::Reference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.flags = 68U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.029410428611035155;
    tmp_tmp_tmp_msg_1_0_0.speed_units = 183U;
    tmp_tmp_msg_1_0.speed.set(tmp_tmp_tmp_msg_1_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.value = 0.6559669447615663;
    tmp_tmp_tmp_msg_1_0_1.z_units = 120U;
    tmp_tmp_msg_1_0.z.set(tmp_tmp_tmp_msg_1_0_1);
    tmp_tmp_msg_1_0.lat = 0.5491058881139077;
    tmp_tmp_msg_1_0.lon = 0.11887698757552023;
    tmp_tmp_msg_1_0.radius = 0.5153398787838579;
    tmp_msg_1.reference.set(tmp_tmp_msg_1_0);
    tmp_msg_1.state = 79U;
    tmp_msg_1.proximity = 63U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GroupMembershipState tmp_msg_2;
    tmp_msg_2.group_name.assign("AUUVULRLIRXPPHKKYDBWHBPDHOZITSTOYJBWRAHSYCTLBBXCEJVSCESVZOGJRCZPNUJCKVDFLQHGEOWMRCWGYRUOGZUQPSUQABDKCGHWTCUVNJETCKGLJIIYOTWFMFNMWGXXFNAXXVYSLVLYYWWTQMQGRLEKPPMDYXEAEWJPFTDOMUEHDRGK");
    tmp_msg_2.links = 1150913967U;
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
    msg.setTimeStamp(0.7254335290849875);
    msg.setSource(25381U);
    msg.setSourceEntity(0U);
    msg.setDestination(27727U);
    msg.setDestinationEntity(211U);
    msg.maneuver_id.assign("BTOCIAAHKIPJQXFMYCJLUYMJLXJMDYGKEAULVDKOGIPGCEUCNKZEBHECYXMQFMXBSEWAHTCARGWNOPOPHFWISPIVOTBSYPATRCZTJAKBCOFYWNHWWRJKYESFDBFXVZSMLFUDMGQKZXVUDOW");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.8315534149702117;
    tmp_msg_0.lon = 0.061904745484908985;
    tmp_msg_0.z = 0.13827958563112508;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.speed = 0.8346997506734866;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.abort_z = 0.9949979309761027;
    tmp_msg_0.bearing = 0.2909602502227169;
    tmp_msg_0.glide_slope = 109U;
    tmp_msg_0.glide_slope_alt = 0.8899185348694382;
    tmp_msg_0.custom.assign("AWCJURYWSPMUHRAEWHVQLIVYZZGVHCFHLPJOFOYBBDVVXKYYINRMLPSKMTADZQCWAUVMDSAZHHXQWLJRQWZKSGINEBFCBCCOZJRHZFCXFLYETBIGILPAVRXSEZBNVJGAWE");
    msg.data.set(tmp_msg_0);
    IMC::FormationEvaluation tmp_msg_1;
    tmp_msg_1.type = 151U;
    tmp_msg_1.op = 67U;
    tmp_msg_1.err_mean = 0.6395551593599096;
    tmp_msg_1.dist_min_abs = 0.013292431988360609;
    tmp_msg_1.dist_min_mean = 0.1275373867755485;
    tmp_msg_1.roll_rate_mean = 0.816215100225946;
    tmp_msg_1.time = 0.6568736643816444;
    IMC::FormationControlParams tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.action = 113U;
    tmp_tmp_msg_1_0.lon_gain = 0.6827395784592144;
    tmp_tmp_msg_1_0.lat_gain = 0.22205345100680285;
    tmp_tmp_msg_1_0.bond_thick = 0.756785866472841;
    tmp_tmp_msg_1_0.lead_gain = 0.17963359556166758;
    tmp_tmp_msg_1_0.deconfl_gain = 0.15199557451558454;
    tmp_tmp_msg_1_0.accel_switch_gain = 0.6228339350100817;
    tmp_tmp_msg_1_0.safe_dist = 0.3698659721219044;
    tmp_tmp_msg_1_0.deconflict_offset = 0.526695840056561;
    tmp_tmp_msg_1_0.accel_safe_margin = 0.543726272305375;
    tmp_tmp_msg_1_0.accel_lim_x = 0.837772608490333;
    tmp_msg_1.controlparams.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.21785259248189892);
    msg.setSource(42369U);
    msg.setSourceEntity(40U);
    msg.setDestination(11173U);
    msg.setDestinationEntity(95U);
    msg.source_man.assign("SEEWGZKJSIIHZHBNERETBLWIIPVDXVJAYPOVQQGSPXLARFRLFHNSDHS");
    msg.dest_man.assign("VSEVVAXTMDTKLKLMRJUQAWVNCDLNTDSEAUBKELDSMTYLJHVNPZUWYIUUMEGKZQWWUBROOZZQWPOPVALTPAVJNPRWC");
    msg.conditions.assign("VHJRBGLQLFJSIXVGJDCGWMOPVTWMRNTRQMIANCXFQBFFQ");

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
    msg.setTimeStamp(0.21415316982875532);
    msg.setSource(23096U);
    msg.setSourceEntity(134U);
    msg.setDestination(9412U);
    msg.setDestinationEntity(154U);
    msg.source_man.assign("NXNDHHSPDOWKTCRZIVBIVOABLACPDDMOLOAKBFHMGOQBFHKRGVFIXGFWJKNXHFJNFBRPZJYXGUKDMSTUNRFVCXGPPLOWRZVZMVUVQWGYNDHMUKZFBVZCOGPIRPIUGBYLTDYTHJMSXTUZBCRHFWMYHWPUSLIYATGYLJEOXJTEMZORNCWIKNSEEAQSJILCDEAKIUQDEVNBIFYTYEAWOZPSQAESJANCMQ");
    msg.dest_man.assign("AQRHICPWLWYNQFBWTOCJIMEXPCIWGRKJTPPZANGIIOOYFINMEFUTMVLSZDEKMOLLEXLIFLMPWHCAOHKBURNLNUBSWPEQPRQVNEGIHAGOYHFJZRJTCDKZMDAHQVNXOEZHVFQRDLZHDWGTRKQ");
    msg.conditions.assign("BSUIONDJPLMZEWDESSVAPMYNDKAPHQTGXWREEUHFXDNVCRZNBPOXQWAOYLULOYDJKNQGVJLUZEJHXDYVVYKKHKIIRXYH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZOYKMZFMHYRQFCKFCSOMEMNRQGEKPGMUPIBWYGSAHFRACJXPPHARALQTXZUBOEJYZVRDZUGNLQNIBSTXDMYCLPLBNUHLPERTOBFUHBBMPXGHOPUWWXFMVVZAAWGVVTNKQIBDLJHSCTKGVHJNDYOWDOKVXZNJNQINEPKIWBEZJBOLIYQWTYUEYQDTELVCSTAHDSSJJJSGQYCPARVWSAITWTKOQEIKEVZKXCCSXMWUJXRMGLDC");
    tmp_msg_0.sys_type = 167U;
    tmp_msg_0.owner = 59938U;
    tmp_msg_0.lat = 0.7136772943816202;
    tmp_msg_0.lon = 0.7293618390568573;
    tmp_msg_0.height = 0.39627283636208555;
    tmp_msg_0.services.assign("BXREYPEHTJVLKKTUEGNPETBIWDGSFPIBXUHHHSXYWELLNORXSECBEXSFQLQLW");
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
    msg.setTimeStamp(0.6173557879365312);
    msg.setSource(11280U);
    msg.setSourceEntity(246U);
    msg.setDestination(37649U);
    msg.setDestinationEntity(254U);
    msg.source_man.assign("TZBRYMTKSHYNXPQUVSXVQBPSDXJRDITRMRMSCUFBYVWSLVDFQBBTYMHLAMCDOEWBQIDSUIUZAYRBPJEOMLGJSNWNAJUGLJTHZLQIMD");
    msg.dest_man.assign("NIMGVJJPUZLSTQMCNHNMXWSCZNAEYJLIQUKPXXAWSEXDRTXHVCGHMIHURSBJQRQYOREDJPPPSEV");
    msg.conditions.assign("JZUQZWLRWPMFCG");

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
    msg.setTimeStamp(0.004195166096213843);
    msg.setSource(26945U);
    msg.setSourceEntity(161U);
    msg.setDestination(19289U);
    msg.setDestinationEntity(79U);
    msg.command = 101U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DIFACVUCRKBGMDYP");
    tmp_msg_0.description.assign("HKIFOLPNYQPLNKDCIRAMGSZBVILBELFMCJNJGXSEASEIXUFDWDLDTTMJXCFHFYAXHISGHHRZVYHYWOFEDPBTLGCNDQLNVLYGIRKQAHZMTTLWXMBSYKVAVKXVOWCAUBQWBRITJRPOI");
    tmp_msg_0.vnamespace.assign("IPIAZMFLFWSOXYRUUEVWDPGOPXWTNSQHRLNTYALKQPZEUBHTHIVWRUPCKWCSFZ");
    tmp_msg_0.start_man_id.assign("RMGNDYHZPQHSSMXPBLSOVZWHCUIFBNKAEJEJUKINOHMLCCEOBMVQJNGICRAEPFWROWXH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QEODPPYWJBRVZQSVXXTENFISDEIJBROCFPTYAMFOZLMMWRWXQHVLIODLNBASNCMNUKCYYBUUHJKRFGVAJPAHJH");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 47023U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6616292061203278;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5428178945462552;
    tmp_tmp_tmp_msg_0_0_0.z = 0.004641573975001312;
    tmp_tmp_tmp_msg_0_0_0.z_units = 146U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.45670814365619516;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 176U;
    tmp_tmp_tmp_msg_0_0_0.duration = 21102U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.5771150060570645;
    tmp_tmp_tmp_msg_0_0_0.flags = 30U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UYIRLOSEESFKWGLQDICUTTHWQHFVMKZVXOCWXJTRULPHBHJNNDIMVVZIGOUCOIKUDGJFRAVSERQPQAAUXPLDZZMNOTYBISXC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AcousticRelease tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.system.assign("QYXKEOGIZXOIXOIWGGNXNOZHRRRVBZYVVXHAFLZZNELVBFKRNUKTWGIYFSTIHTJXDKSGLPSHYJWWXVFAPECLREMRUIJNDHULVCRFTKUWDUNLJMTHHKAWBUMTBMAVJPJGNAQGLBAVETZHXSEGCCYPUCNCONPIYZFTXMKVWDCMUHEL");
    tmp_tmp_tmp_msg_0_0_1.op = 46U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::MagneticField tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.12327594659399743;
    tmp_tmp_msg_0_1.x = 0.3084596252983334;
    tmp_tmp_msg_0_1.y = 0.8931172710497747;
    tmp_tmp_msg_0_1.z = 0.9927781124871663;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.4179941839484309);
    msg.setSource(52664U);
    msg.setSourceEntity(103U);
    msg.setDestination(44929U);
    msg.setDestinationEntity(137U);
    msg.command = 127U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JNHSUZLDIXMGIFORQMPHJYPNSLNYCGBUXIIKBWOKQLBUDJXIDORBOUGYFKBVAAITEF");
    tmp_msg_0.description.assign("YGTPRXHNMTMLOJSNMIRWEGILWIZADQEZUBYW");
    tmp_msg_0.vnamespace.assign("QKVIHEMEGVYTWNUHCRDFGZJUXEPLDOACWYHERFOHHHJIZOGLAQWIMKYBFGJWTUAUZTYICLEEXPKGDMRDQFXVBZPKSVT");
    tmp_msg_0.start_man_id.assign("EUXSNDSJRDHPHYEIGGBFRCPFNZSKMCWMJZAXPHRJUREPCJGATDWUTHIRXSXORFNOWXSOILBXQYVNMTVKLYCIOKDLQHVYYTZCVEXAKWJKQGUMLDZXJKNBGRFSGQPSTOHQHPINUYAVWIJYFTHIXMQOKAZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ROCBVBBLEKGOZRLSDWPXIHMEAQFBEOSMEJDTDJMVS");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 63725U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 56U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.9298395055894615;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.24323825413232736;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.6026798273685693;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::MessagePartControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.uid = 42U;
    tmp_tmp_tmp_msg_0_0_1.op = 144U;
    tmp_tmp_tmp_msg_0_0_1.frag_ids.assign("PJSPXKRDWGMJNXZHABVINIJRFUTWYOZZXBALIQXVMFZJBMZZXBLHGKWIKWOYPMVSBDYTECWCLVTFXOTNQQFPUBDXRNWUYCRXYSITGJHCFSREAEYCGRTRQEVSIJOP");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BFHCYAYGGGMQRIXSK");
    tmp_tmp_msg_0_1.dest_man.assign("MZTSAQQLOTAVUYUGLAOEJREPBSPJGDTSDYGMRXTHNSXXJOFPUCOWS");
    tmp_tmp_msg_0_1.conditions.assign("IPMITVAKFZQCUOANQUXEGHDBKOIHWZYZQFXVPZMBTTEBSUGOHCSESKSBYVPYNLAMHEB");
    IMC::VtolState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.state = 192U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.402875339813598);
    msg.setSource(4471U);
    msg.setSourceEntity(63U);
    msg.setDestination(25572U);
    msg.setDestinationEntity(121U);
    msg.command = 156U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EXPJILMLAQMHOSFWSEPLJHMNCDZEWRRSORHKXXOFCJNVYYHA");
    tmp_msg_0.description.assign("UZRAOTCWJHLDIKZPKGWKX");
    tmp_msg_0.vnamespace.assign("IZUZFCOIYZAZBFSINOSCSFYPKEVBUQTNWQDJWGHNMJJQKMJVJRCXWJWCHHLUASEAYVHCVZFOGRIXBDZMKWGKLGRIEHZCTMKJPZBHSSFOGUXNLIVNBAIPXTXAYUWGGGRLYELNFIEKSRCQAYAUTHMDCPYG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BPVAQDZAMLPEGSYCYGSVUGIPDZGDCIGSXEOFJIIJTVUSUKRVOCODEQNHSYTQRFQRFGMYPWVXJEOAWBJVYOTSNLXQDKJFKRHFOOQMXCNLFAZXEHHOLRWCCRZZIVHMKPCWGAVKYFNTYTARUIIAPJLHIKZZBTMCSMWQLPOWNHPEBRBALIWHXFDBNKEQRYNEYCDZWNXZMUXKQJZFDEBSUMBQUOTXTJJWTRDFUASWPVHTEUNCLPXLBBL");
    tmp_tmp_msg_0_0.value.assign("PBSHQZJWAAFSFORDVCORLZJWICBERPNESLYFBQTEHEVEQDWJEXJKGTVNHUZWVICXURXXBGFQKOBIGRPIAQFZIUUAHUEIUWMTKMB");
    tmp_tmp_msg_0_0.type = 187U;
    tmp_tmp_msg_0_0.access = 135U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HIZERBNDBLJKPWKOHGTGJBYONBPMUZWYMAWHZSTPLFDOWREGWDNKFJCACLMQQSAPNBYYGURHMLHMQYTOXESQPFOJIZPZYMYSJKUJWBGCIVFOQVQBVNKPRRVCOEGGMSAA");
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
    msg.setTimeStamp(0.47271069531405085);
    msg.setSource(2676U);
    msg.setSourceEntity(102U);
    msg.setDestination(2026U);
    msg.setDestinationEntity(17U);
    msg.state = 79U;
    msg.plan_id.assign("XZMJPPDFYABEQPSUKXSZSIMCLKEQRLIQXHLDDJNFXZAAJAKORHLVWDPVTMSTJSMLNTXKWISUQBFEBCYHWIYHUOOGOAKGWIOPLYXYLMXELSDDYJPUUIYJMLRHFFJRKXQARMCDCPGBCZRZNMGBWSCOVMKWOFVQEWAVVRUUTIQMEIBISROVCCWGRHKIALVZSRZJTQGNQEFHTEOYXFUCPGOJNFUDGKNPZYVNGFETNDBQGB");
    msg.comm_level = 77U;

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
    msg.setTimeStamp(0.005475654058846535);
    msg.setSource(3969U);
    msg.setSourceEntity(250U);
    msg.setDestination(62797U);
    msg.setDestinationEntity(36U);
    msg.state = 43U;
    msg.plan_id.assign("PVADCKWVGTZXJINOSRZWKOISNGYHIFOEYMG");
    msg.comm_level = 235U;

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
    msg.setTimeStamp(0.8465699714342775);
    msg.setSource(5670U);
    msg.setSourceEntity(171U);
    msg.setDestination(1956U);
    msg.setDestinationEntity(231U);
    msg.state = 149U;
    msg.plan_id.assign("SJOZNFCOYCFIJORCDXCTDLBXCWAFVDECWJGQHMVTINZGIAGLMWOXCRIENRPFDPPPQKADADSRSOUQBTWLKNMNYNYHQZOGPSQSHBFHLAFPXCPZZUIVMTQKEHHKRXIQKYXBLKEJJMFIHLBJQLEKILMHMHPSOXEREIBZAZLMUZYAJVSNRZWCGGAMEURKVPNGTJTVLVVQUXPOWAANKYXDSSBTMTJVDYUBZUGYB");
    msg.comm_level = 171U;

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
    msg.setTimeStamp(0.607532646200507);
    msg.setSource(27045U);
    msg.setSourceEntity(125U);
    msg.setDestination(9335U);
    msg.setDestinationEntity(2U);
    msg.type = 21U;
    msg.op = 250U;
    msg.request_id = 19027U;
    msg.plan_id.assign("GEMGIJRKXNDYLUEJSAJUBFXAAMWHVJDFXLMPKDCGYBYAUTMDRXZVCYRCDMRZTKBHRHJFKAYGOZWOLSVKIWBQVDRMVZKQKFZHZFGUEDTEASPWNCBGOLOUXVFWNWJTUETTDYFACFJQZRBHMUBHBPSBPFHELNNPLMHVPWGPQTIDEZTESX");
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 49218U;
    tmp_msg_0.status = 187U;
    tmp_msg_0.range = 0.9222971739286261;
    tmp_msg_0.info.assign("YMCNEJZRVSSYLYNFUCIWVXFEJYNWUPYGQLXDJGCOXGXWZTIBTYFZCWIBHTQDJFBFFBIZIBLMWXPGEUUOACZAHTMUTDTNOZRCHYERPKNLAREQULOBGPTLDRXSFCXRARVVMRPGQWPVPGKIPAVBUNSKUVLMOHFHDCVTCDHOSYQNQRBENFKQJKNIKAYRX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZURQPEUXJIKHKMLQIANADUIVXHIDWUIGUCBBQTAONDZUVDVHNGGISKGZELOWYKCRPQKWREMGJBJTRJEGPFQXFNRHDFCCSERMULJOJLAFZIKZWBTVOYUJGVQVQSGOLWFZOCETYKXYCLKQNEZDAIOMPVPXRKEZCNPWYPFWXETAJJFZTHAQYOBNNRRXGYWZHDOVTKSMSYSSAIAMYXTNFMEVHGOFB");

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
    msg.setTimeStamp(0.5460404498870424);
    msg.setSource(1353U);
    msg.setSourceEntity(231U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(105U);
    msg.type = 85U;
    msg.op = 92U;
    msg.request_id = 40928U;
    msg.plan_id.assign("MVFFPQHVUIPYFQJFXYACUCPGLYCGICRKOWJTWHTIOZNVGLFNVQGVT");
    IMC::QueryTypedEntityParameters tmp_msg_0;
    tmp_msg_0.op = 199U;
    tmp_msg_0.request_id = 2313644889U;
    tmp_msg_0.entity_name.assign("JJOUVPDYCVHRRJHEKTHFLYAFNNJUDICVNBXEJSMPOMEYUIWSXCLZPOPZWECBARLJAGKITUADDZUTNCHGKWFLOIPMSEQKPFCBRORK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QSRMGWDBXNETPUMYEVDTZRIOEKEAUOLANWBAQFJWPWBQSGAXKCCVFAZDBFMRDJLYHCHEKHFRPNPDJMDXCMXBIJFSCCTOCINZQMSQWNSAPMICYWOTGOGZJBLLMPXUQOGUHDDHFZEIVKHTWNQ");

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
    msg.setTimeStamp(0.6845993844726138);
    msg.setSource(55968U);
    msg.setSourceEntity(64U);
    msg.setDestination(4866U);
    msg.setDestinationEntity(65U);
    msg.type = 212U;
    msg.op = 170U;
    msg.request_id = 62246U;
    msg.plan_id.assign("OVXNMRADAWJHLIETYMDKQOCSXQEBAWQASJOVIHOPWAPWFJJBIQKXWYVRLBCRPFECEIVECSPNECIRRCFMXGRNRTXVPPIKJZUVWUVQQQDSWZNHJURHXNDYFNXEFZGCZTGBYKMAXTMY");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5156531338476431;
    tmp_msg_0.y = 0.928057082118178;
    tmp_msg_0.z = 0.6174144257548021;
    tmp_msg_0.phi = 0.0011327587742434586;
    tmp_msg_0.theta = 0.0511198522850832;
    tmp_msg_0.psi = 0.08541616518837547;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QOQGWWJMEBMTVEIVEZWWGXZIMPYVYIAFPHWYPFCFNOIWNEZHSLGOCTBZJRXQPSRHZEQVCITMKPOIVXRBYFXBVWRHUWXMSHZCTORXNVDGTRLQCMTQKNLNCHMGCLMLTEPHTMTLODBRHXJSNDRJSUTOZJZSBJDKCXDZYDODEULWRFUQAXCCAVXQPAYAABFJDYKIFUKAGVJRFNVUMNQIIBAWYGLUSPUZLQKSKIHDGBE");

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
    msg.setTimeStamp(0.1468908400434562);
    msg.setSource(36360U);
    msg.setSourceEntity(86U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(138U);
    msg.plan_count = 21823U;
    msg.plan_size = 1127377708U;
    msg.change_time = 0.5231253842543298;
    msg.change_sid = 21134U;
    msg.change_sname.assign("YTIOQXGSZZONZJHKEUTCVYEVWZBWJMEHDXXNFRPKRBXRDHUQTIJTKSULOTQKRRBNNQPDXNCMMURRBPDOVSZTUQFZYHMCOCMFZSIHFLTPLFQVCDWHIPAVYHVSMCRBGFFHQUEDGJFNSTQFXEOHYAANYGAWGGACOGNIZLYUZSKKCYSNQLJOLTPK");
    const signed char tmp_msg_0[] = {81, 63, -60, -57, -54, -76, -20, -96, -31, 7, 3, -29, -42, -65, 63, -106, 29, -16, 103, -27, -82, -105, -7, 44, -79, -50, -4, -104, -28, -41, -67, 58, 35, -44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IGBKEFCMPKJJPSUAONZAFXUHKKDGLNDZNJLDYOBPQKPIQTHSCKVDGYROTPUKLDYLANVHZNYTCQXEWIBGIFXEHIOQXWSHJXRUMUMZZIRWBDERYBGXT");
    tmp_msg_1.plan_size = 37642U;
    tmp_msg_1.change_time = 0.5150724624167922;
    tmp_msg_1.change_sid = 13862U;
    tmp_msg_1.change_sname.assign("YLJDPCJGPCYBVURPHXUHAZNGKHLLQGFKJRLDZRQOREEPOAXJYAUZSOOMIJBRWZNJGNKMINEPEVJCFDUCWHODYWBCKBWSXKMBIJFHCMTYTIWMIIIXLUAYOQLLKDKXATGEDGUMQKNRGHBEYEUNSLEAQFSPSWVCMJHXPCVPGGQMIUWBTFCLIVRDZSFVDQPOFSTVANOFIKZXUSAQVNZRAZYRYMELOTNYCWSVBDTBNHTFKQTHQX");
    const signed char tmp_tmp_msg_1_0[] = {70, -35, -108, 6, 72, 0, 99, -7, 59, -28, 36, -48, 46, -20, -3, 4, 126, 61, 7, -7, -25, 111, 20, 47, -94, -85, 123, 58, -125, -109, -120, 14, 40, 77, -122, -77, 8, -111, -94, -93, -22, -42, 79, -109, -25, -104, 14, 94, 78, 103, 97, 30, 102, 78, -111, -25, -47, 22, -23, -51, 65, 26, 91, -83, 56, -122, -49, 14, 108, -103, -43, -124, 102, -26, -65, -124, -50, 54, -85, 38, 80, -74, -69, 93, -69, -63, -13, 13, -73, 54, 126, -102, -51, 114, -109, -95, 75, 118, -81, -103, -92, 92, -18, -80, 24, 11, 46, 123, -78, 98, -29, -89, 114, 89, -87, -115, 96, 67, -42, -123, -91, 99, 15, 84, 63, -44, -39, -116, 34, -60, -31, 48, 71, 67, -106, 41, -59, -79, -44, -55, 48, 112, 52, -104, -73, 39, 66, 64, 116, -17, -70, -73, -83, -44, -19, 114, 96, 45, 77, -105, -87, 77, -35, -22, 16, -38, -9, -89, 49, 17, -42, 86, -54, 60, -7, -29, -2, 54, 63, 82, 112, -23, 64, -71, -75, 70, -60, 15, -51, -96, 121, 48, 81, 27, -6, -34, -57, 78, -115, -16, 31, 59, 33, 125, 45, -10, 111, -11, -40, -31, 43, -6, -10, -33, -107, -13, -81, 122, -86, -72, -47, -59, 10, 56, -23, -90, -17, -77, -5, -6, 72, -64, 27};
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
    msg.setTimeStamp(0.15397615365764483);
    msg.setSource(26661U);
    msg.setSourceEntity(123U);
    msg.setDestination(187U);
    msg.setDestinationEntity(208U);
    msg.plan_count = 59U;
    msg.plan_size = 2751415382U;
    msg.change_time = 0.191636614457815;
    msg.change_sid = 23282U;
    msg.change_sname.assign("ZNQPPGTLRRGMYPTGXAZZQXYIOETCFFUUZHQALYTGPSFBMHMBNUHHJBKLYFBUGNOVY");
    const signed char tmp_msg_0[] = {81, 48, -82, 36, -51, 93, 105, 14, -21, 92, 40, -110, -41, -126, 118, 50, -113, -122, 56, -52, 6, -83, 32, -85, -54, 120, 6, -62, -121, 122, -67, -83, 75, -16, 27, 62, 42, 55, -52, 90, 63, 75, 32, -75, -93, 88, 49, -65, -43, -85, 117, 34, -81, 48, -21, 18, -95, -114, -45, -58, -124, -126, 28, -56, -27, 34, 30, -34, 29, 91, 32, -105, 24, -24, 34, 70, -84, 20, 1, -52, 18, 22, -108, -32, -32, -48, -100, 83, -35, 119, -58, 47, 83, -48, -4, -36, -128, 84, 77, 66, 54, 30, -53, 1, -5, -83, 93, 48, 118, 92, -16, 112, 21, 0, 116, -34, -12, 3, 66, 92, 94, -8, -30, 99, 98, 88, -56, 112, -89, 21, -52, -31, 30, -74, -96, 122, -79, -72, -22, -60, 74, -83, -109, 22, 88, -42, 61, -81, -59, 3, -112, 32, 107, -9, 62, -38, 92, 112, 99, 84, 95, 74, -10, -30, -42, 1, 101, -72, 118, 105, -121, 25, -9, -54, 104, 29, -75, 49, -99, 23, -44, -38, 107, -57, 63, -1, -78, -57, -55, 54, -4, -94, -24, -68, 6, 37, -71, 110, -18, -4, 44, -2, 39, -128, 37, 122, 113, 40, 23, 20, -37, -52, 77, -26, 97, -123, 88, 60, 32, 2, -16};
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
    msg.setTimeStamp(0.2876846756275513);
    msg.setSource(13649U);
    msg.setSourceEntity(53U);
    msg.setDestination(42945U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 3878U;
    msg.plan_size = 2401499147U;
    msg.change_time = 0.6612544400479685;
    msg.change_sid = 35233U;
    msg.change_sname.assign("KTNIIDXQTTQJHONYETNZSFKQEXATUFLJGEZYEBNWYITOCIMPERQXBFYQQOYGULEZPQPGXGCZQCVREAXQPSWZHABYPAHIBXRUPRMWICDCPZJIBRHFSLOYPXTCJWAXFCRJALZYFLNDGLUO");
    const signed char tmp_msg_0[] = {12, -112, 98, 96, 99, -32, 105, -73, -16, -87, -124, 8, -124, 79, -32, -110, -109, -54, 74, 110, -53, 63, -90, -39, 23, -46, -87, 87, -46, -32, 60, 68, 60, 50, -98, -121, -122, -105, 69, -2, -9, 108, -66, -85, 21, 28, 9, -38, -72, -7, -128, 123, -90, 56, -1, -76, -112, -18, -19, -45, 84, 36, 24, -7, -90, -77, 70, 30, 75, -60, 30, -22, 124, 109, -21, -54, 1, -39, -7, 19, -26, 93, 93};
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
    msg.setTimeStamp(0.42011864512782904);
    msg.setSource(16297U);
    msg.setSourceEntity(105U);
    msg.setDestination(26057U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("VDLTAFOIJQLNPFQGJMNWSDKCSPEPGIIHXTRBSCLZBANRVWWLXVIZBZURNAYPTXFEBAPBCFLFVOXEGVWVDCIWIFMNZBIHZYAKTCUQALGJUXE");
    msg.plan_size = 63956U;
    msg.change_time = 0.004744090285034641;
    msg.change_sid = 14263U;
    msg.change_sname.assign("RDQEJCWRZWJVKGDGWNOSFMWJIKCDQHMKODLIUIYAGNOUVEAZYTZVXSRVQGIUATRRDTTTKHPRXA");
    const signed char tmp_msg_0[] = {-62, -22, 56, -44, -31, -11, 45, -59, 0, -20, -52, -1, -120, -49, 97, 98, 41, -2, 74, -54, -88, -7, -35, 108, -68, 50, -47, -28, -75, 69, 118, -37, 26, -48, -111, -53, -122, -114, 35, -56, 64, 118, -101, 64, -3, 2, 44, 89, -96, -30, 25, -57, 50, -45, 21, 118, -76, -104, -5, -115, -79, 94, 118, 24, 102, 67, 94, -71, -78, 21, -89, -48, 86, -1, -53, -34, 66, -23, 76, -120, 0, 27, -113, 26, -23, 9, 116, -53, 29, -48, 126, -80, 21, -52, -81, -84, 96, 116, 119, 98, 41, -53, 25, 35, 126, 2, -17, 114, 110, -23, 49, 123, -85, -30, -4, -40, -62, 39, 5, -43, -54, 124, 86, -101, -4, -89, -64, 9, -26, 68, -43, 100, 95, 19, -45, 15, 58, -16, -93, 25, -63, 72, -103, 75, -74, 64, -80, 75, 50, -106, -49, 111, -15, 15, -31, -71, -90, -74, 3, -68, -88, 34, -47, 95, 55, 39, 14, -17, 72, -73, -59, -40, -71, -110, 40, -13, 94};
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
    msg.setTimeStamp(0.48313443556203817);
    msg.setSource(53490U);
    msg.setSourceEntity(16U);
    msg.setDestination(56799U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("YZVVCBEYIKWBAABVCLGIMAPYGGLONRTLLKDYRZINBRBNWAFGUDELALQWHFMIVBKAROQNYIHERDUCDHCAMDUWOZIOCGPFCJGXPTPCCNYDCXAXOBOPYNOYCEUFRIEQTXMVPPHKSXQAVSGZGUSSKWWJFSMXPRFSNRZTEPHBBSXIUUJAXWQIREKTLGMLJVDUJDEIQZHNJFEQWJKMUUJKMQQHNEOYWTWMJHXTHHJZRVVY");
    msg.plan_size = 42605U;
    msg.change_time = 0.06798182919482076;
    msg.change_sid = 27852U;
    msg.change_sname.assign("GSNZZMWEHYJRRVFSYGKNQPCQRGDMHKLBWFGAPLOPUWYIYXJOVCLKABDLNYJDVFAKGPENAERYJEAESJOHHBTWPOFLHGDDRAWQUDDDVBHIVQZKIKFAYINNYFUZBFHEMWZUQIFXOOOFCSMIEUVAQCKBRIGIOPJLBXCJCZRSVCAUNXSNNKZHZUUBKBJWWTSMWOUMAGXEXDT");
    const signed char tmp_msg_0[] = {-107, 30, 18, 107, -91, 32, -27, -107, -86, 66, 104, -18, 106, 97, 18, -73, 61, -116, 54, -38, -114, 79, -87, 71, -103, 72, -3, -116, 25, -109, -14, 81, 79, 55, 42, -57, 28, 15, 36, -75, -105, -92, 119, 86, 3, 63, -122, 89, 39, 113, -104, -31, -118, -118, -29, 47, -70, -33, 43, 22, -79, 37, -78, -88, 72, 123, -117, 99, 52, 105, -66, -106, -73, 121, 57, -31, -83, -2, -109, 20, 73, 112, 36, -33, 6, -1, 120, 105, -23, -1, 4, -55, 91, 118, 82, 37, -90, 9, -87, 111, -108, 67, 10, -72, -47, 59, 26, 106, 47, 61, 92, 21, -117, -14, 19, -62, -112, -46, 73, -104, 89, -39, 23, -59, 85, -32, -119, -85, -20, 21, 19, 70, -88, 65, -86, -77, -97, 22, -3, 15, -31, 53, 28, 13, 59, 37, -41, 0, -32, 114, -61, 26, -112, 98, 47, 60, 90, -116, 45, -41, 86, -37, -16, -55, -68, 126, -51, 19, -119, -4, -65, 9, -14, -84, -10, -1, 31, 67, -70, 24, 119, -3, 6, -49, -63, -64, 84, 16, -54, 5, -74, 121, 9, 112, -127, -22, 6, -12, -57, 9, 58, -79, -61, -95};
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
    msg.setTimeStamp(0.03973334788636995);
    msg.setSource(20176U);
    msg.setSourceEntity(49U);
    msg.setDestination(24469U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("RXBAZQWNNZVXDAOZJWERCDDMTZXPTLP");
    msg.plan_size = 25471U;
    msg.change_time = 0.3760961681194117;
    msg.change_sid = 12313U;
    msg.change_sname.assign("CIBOVKMLPZMKVIPMHRJOTTBYMFCGZBBIWKXGUVQQWXXSFYPFROKDDXGCFYLBLPLBLSIMNTBGIRSZVTKHESRZUEDNRAJBWEQCYFOLIIXMBISAZWWMHEJXQAEJMTDVZYQHJJYUFFYUEALVFEQNAVTIRBYUSSKJDVHPZUYUXQWMSPHXCFTWC");
    const signed char tmp_msg_0[] = {-102, 92, 97, 109, 79, 69, -29, -22, 54, -101, -39, 73, -67, -109, -22, -51, -121, 76, -37, -47, -62, 24, -19, 53, -53, -14, -32, -68, -110, 114, -99, -83, -103, -2, -75, -66, -22, 70, -78, -72, -125, 12, -67, -56, 92, -6, 114, -27, 88, 113, -98, -21, 122, -59, 80, -9, 1, 119, -82, -81, 72, -109, -58};
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
    msg.setTimeStamp(0.10772515988292797);
    msg.setSource(49994U);
    msg.setSourceEntity(88U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(116U);
    msg.type = 223U;
    msg.op = 222U;
    msg.request_id = 15647U;
    msg.plan_id.assign("YAHRTWYWNWLDSAOQHILVQSXBLFCLREGASZQIKBOEMQUZKDDLUTFSUEUWDFTCXSBUFSJXNXNWXPYRYINRVJQOSPJKTIVKKOULLQKXPD");
    msg.flags = 51541U;
    IMC::QueryEntityState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DJIOPYPQQTSNYSFWPTMUHRLYLKHINVJGWMWCELDBIZEHDLEPUCFQGRRMIOUPIFSVDCVQGGYJNOMTEOGEXYGYIKKWDDJTYTLNYDAOPCBKSWSFTNUAPSLMOXCEHDPUCICAAHQJIZXQEMOBVIJRFYWXANRSEJFUUDOQZNZWNRZRZXBPQYOHFSWZSLWUFWMB");

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
    msg.setTimeStamp(0.6426503085898567);
    msg.setSource(22119U);
    msg.setSourceEntity(91U);
    msg.setDestination(54192U);
    msg.setDestinationEntity(47U);
    msg.type = 210U;
    msg.op = 122U;
    msg.request_id = 3478U;
    msg.plan_id.assign("HFKJXLSFOJGLDRBDBWSHSAPRCQQSVWEVQNOOAIQHLKLBFUWMTPIGWRHHQIMFFBCDMOTDRKWCJXYTMYCL");
    msg.flags = 55514U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1186927641U;
    tmp_msg_0.start_lat = 0.2922899374554707;
    tmp_msg_0.start_lon = 0.3248591765033255;
    tmp_msg_0.start_z = 0.002986474702618147;
    tmp_msg_0.start_z_units = 74U;
    tmp_msg_0.end_lat = 0.1642310398659892;
    tmp_msg_0.end_lon = 0.3475050422125293;
    tmp_msg_0.end_z = 0.5393337630092514;
    tmp_msg_0.end_z_units = 58U;
    tmp_msg_0.speed = 0.30869868772187936;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.lradius = 0.5684390024126331;
    tmp_msg_0.flags = 49U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LLBNSZAKPYFJMEEOQCZKTOORLBKHMIHIXETPCGWPHHSTURAPMKTEOKCENUMHUYHVAERFAFVCBFGYBOZFERDOAITFFJBSONWAZEERDPKWXVFHQLFBWKQGYXPULRAGNAWSNTMJPMXLWPJCMDYVUBZXGHVQNJQXUIBVLMWFCLLTZPGCORDVXIVXUNRQLT");

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
    msg.setTimeStamp(0.08741344780402904);
    msg.setSource(38226U);
    msg.setSourceEntity(62U);
    msg.setDestination(64433U);
    msg.setDestinationEntity(59U);
    msg.type = 131U;
    msg.op = 10U;
    msg.request_id = 62836U;
    msg.plan_id.assign("OWLGZHSLOVJMWTISSIZWXCVVNAYTHWKMMOVZUKERQPTRQYTVHFGQAFXLFNBXDYANIJDYURDYPKEUPZKFCCQUZMUJMXBJKIPDEFVQUGWZREFDKECNODLRYMDAZINHFIMLABROAHHUZVNWYPSWGORKRBIPJFFDGZCBSPFTOBVJEYXLVXYCMGQZKXYBAJEHBXRTVGKQPO");
    msg.flags = 8823U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 432252626U;
    tmp_msg_0.destination.assign("ZKAIUMDJOMHLRFENLBFKFAZJFW");
    tmp_msg_0.timeout = 60360U;
    const signed char tmp_tmp_msg_0_0[] = {-71, 56, -41, 3, -111, 52, -49, -99, 44, 51, -93, 4, -40, 117, 104, 111, 98, 112, 82, -8, 91, 52, 65, 66, 86, -39, -72, -33, 69, 72, -117, -96, -8, 122, 2, -101, 118, -88, -83, 103, -78, -72, -74, -28, 15, -38, 111, 65, 42, 25, 112, -64, 24, 12, 74, -30, -52, -11, -9, -55, 49, 34, -48, 15, -29, 18, 37, -30, 10, 83, -25, -35, -45, 85, 82, 118, -10, -12, -10, 99, 91, 34, -26, 57, -13, -93, -65, 81, 63, 120, -27, 34, 104, -29, 122, -74, -85, 120, 63, -78, 65, 11, 118, 41, -46, 76, 40, -102, -72, -29, 70, 38, -51, 82, -116, 26, 115, -8, 44, -11, 18, -17, -63, 67, 64, 78, -79, -104, -19, 11, -41, 17, -95, 74, -72, -28, -50, -40, -39, 14, -64, -6, -38, 112, -51, -11, -126, 72, 85, 122, -127, -79, 39, 79, -21, -6, 103, 89, -11, -127, -3, -36, -121, -74, -97, -2, 1, 103, -49, -115, 7, 53, -88, 20, -85, 115, -88, 28, -120, 79, -20, -105, 97, 27, 5, 86, 124, 61, -112, 60, -11, 29, -20, 54, 26, 93, 111, -41, -36, 55, -59, 98, -43, 71, -88, 8, 67, -42, 94, 110, -20, 60, -114, -107, 24, -51, 30, 23, -124, -77, 103};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YSIBCROSDSSGNNSKDDHQHTVMBEMSUDVLXLAFWUZJAGBKGKAVZSSOYFXLBQLIVCAIBNDCUTKJZNYPWWYFKCUURMFZYDQDPJKONINPZPROYKQZKXGUTIJXMHKVLLMPZRGWDLHXOXBAFBGIFUNYKRMUGXYWULVJHSPEOOZODHBQGCQJJBOWYZOHEWGTTFFACWALSECXEEJIVDCXRHMAVEWPZQEHGTABRICVLCJMNPYNJTUVTWFR");

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
    msg.setTimeStamp(0.21873393159641696);
    msg.setSource(58807U);
    msg.setSourceEntity(221U);
    msg.setDestination(8989U);
    msg.setDestinationEntity(146U);
    msg.state = 37U;
    msg.plan_id.assign("GDEJJUDFHGUELILCZUKNLIDWZWSXPJOLSBHXOOCZSMKRAGHTBKJYYGDDPVAWYBDBBNESZQIWFYHOMRJRSXCTSDHTHZTECKWRAWNZFYNLAQMJXCHTN");
    msg.plan_eta = 826429431;
    msg.plan_progress = 0.609762830852222;
    msg.man_id.assign("QEYHBMBTSKZFVMZCPEZJKPHFTQBZKGKYZQFVCBJFIWPUYYKRIYLHXDOJRXANWPLCBIFIUPIVUAHSJMJGAHPDBKXAPHZGENBBOCOBWPTBRNWHSMGJEMMITUOKTETNSDOQKWXDRFUGNOVKRLOTVNYRIOROJRWYUXSSQJHJQGIYSVNFTJVUOQLRPDVFNXFZWG");
    msg.man_type = 9993U;
    msg.man_eta = 255040576;
    msg.last_outcome = 253U;

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
    msg.setTimeStamp(0.3565013277185882);
    msg.setSource(41203U);
    msg.setSourceEntity(170U);
    msg.setDestination(25028U);
    msg.setDestinationEntity(41U);
    msg.state = 193U;
    msg.plan_id.assign("GBQRNOWCKEKTUZKETFOINUXWYXCGQBYSPDCVIPTGACAQXYSVDMLMPWKQUBZNEFIS");
    msg.plan_eta = 880223107;
    msg.plan_progress = 0.5817904401016181;
    msg.man_id.assign("QLNTIQRHZFVXNGOGWOTSXNXNKGYFNDTSYEQJNXEIZRMPZQ");
    msg.man_type = 13766U;
    msg.man_eta = 2087233244;
    msg.last_outcome = 186U;

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
    msg.setTimeStamp(0.30629253148462354);
    msg.setSource(34578U);
    msg.setSourceEntity(138U);
    msg.setDestination(50566U);
    msg.setDestinationEntity(19U);
    msg.state = 84U;
    msg.plan_id.assign("AZVXAMNJHXJKTXERSKJPDYAIAFNHNLZEJBBTFVCHOGGUWXFNFSNPBQQMCYYZEYBDBPOXMNJYEUSGITKZYGCYWEWJSWZBZEHAOPGLORYHARQUELGRBKCIWXLPIPTRDWIUQMGVQNRZIVKTMOAYLHLTEHEHWRMQLWUKOUWPTQJCVMXAZUEIFKPXWCZLDADOHCNLKSCKXMVGMFBGQVMUNRYTZOUDIRFJCDSDRC");
    msg.plan_eta = 1918219900;
    msg.plan_progress = 0.846036210494268;
    msg.man_id.assign("NQDVHFUKBTMDWLXAPZKULJUHIZBDXOZVBREVSZPTTHUMOPSOANVIXEKXAERCVZBEXYSLQVVTHJERNZYFFONITJUCKGPFLNREKIZZRSCPWEGJURNIRBLO");
    msg.man_type = 58245U;
    msg.man_eta = 1369568432;
    msg.last_outcome = 10U;

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
    msg.setTimeStamp(0.6796067528228196);
    msg.setSource(33988U);
    msg.setSourceEntity(18U);
    msg.setDestination(59585U);
    msg.setDestinationEntity(44U);
    msg.name.assign("KPAEXHMHYUGCKGZIWPDQBSDFRVJVFTLAKLDKJQKHYMPTXRTPAVNRJBZNJASHQSHIMEUWSNZROZFNEKMQMCGHOIVGUKEQUWBTJLCDWRJYNHN");
    msg.value.assign("VVZSWOIKUXOMHQJBZQPWNICLKPAINBMGRHJENKQZGVCYBFBUGTPRDTFNOIYFMZFVDRJUMYBHVTWCHISUEKRTAVXSCYDXANUEIFSDIZEPJMEWKOCMTOCNQTWAFPPMILJHLAASDXOEGUKRGUZRTLJMSVHGXTQHWPWYFGLIQSNAMLNZGVBWRLCLWGASUBNJFRQQOCVFZKZQRDEHTIXJQLGDKFYVXKAJUYZE");
    msg.type = 221U;
    msg.access = 95U;

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
    msg.setTimeStamp(0.7995435261019299);
    msg.setSource(14863U);
    msg.setSourceEntity(97U);
    msg.setDestination(32903U);
    msg.setDestinationEntity(203U);
    msg.name.assign("PYTNTUIELMERMIUMBWRREYRZONXJNFYQYSMGVACCMRKSGHNXQZLZSDXPOUMBWOVUWYWRWFCQYXDBOJECFCWNNWHWSLHPLOSAPIAQLKFRZQCPWMHGMLBCNDOUBZPDPVMSEJKKHOKYAJZUTTTDIQVNXBPUDLZZDGGHYSKERASOFBLNVESTDJKTHVJRATMIV");
    msg.value.assign("MERETUXUFILNWOVDHULWASSQJIGNNWRJANXBCOCLTESCBLSKOYHHOCCYSVSVALPTUMCJHPVFYXDFRXZQQKIMYBJMOMUBTNPMRWEBYPPXAAJVWSDXZZXNKGZIFEEWDWBIVGBDQLTUGVJEJYDACVDWZYTVSJYVBOKAQSNKWEKYSPAPGKYURDKIGOLUHIQUKROMXXBR");
    msg.type = 163U;
    msg.access = 254U;

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
    msg.setTimeStamp(0.3234168627273962);
    msg.setSource(59904U);
    msg.setSourceEntity(136U);
    msg.setDestination(36571U);
    msg.setDestinationEntity(10U);
    msg.name.assign("FIWSITCNXFSRTRPBPZVVMSLLUXOQSQTKVOYZKQZUFOZHHCGELIHEVMMPLQIOOOKSPBDHEUGYTQZKIWTGJAJQESPEHEJIXPRRQPLZMUESWG");
    msg.value.assign("RUGETMMFTW");
    msg.type = 240U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.6855400500985462);
    msg.setSource(24719U);
    msg.setSourceEntity(188U);
    msg.setDestination(6415U);
    msg.setDestinationEntity(81U);
    msg.cmd = 176U;
    msg.op = 103U;
    msg.plan_id.assign("KSJWJVRSZGFJNCZGCSLPJHDDQLMJDJZQWEOITUCQZYZYRPRYIYPCAEBUFWHMFLJXXANWAOEUFSTTRGGYYOLJKZWMOTDAMOVKXNVFGCSLKHFJENOUQTIKHXLLQVQRQAFYUNMVZYEUDDSLBHKIRMXXARSSNTITYXGWTNMEFBEYHHBKMPOPPGSDUCSXBGRMZXCBNPHBGAVPEAQTEIVBNOAJQORITKILGUAMZVCIKZCBKHLVCW");
    msg.params.assign("MLTGBMAXWKHBEEOGPXQQBDUJEXSRPKAIYMBHXCHAHDZRGJDQUFSVHYVOUGIXUOHSNIPT");

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
    msg.setTimeStamp(0.12915805664501423);
    msg.setSource(1846U);
    msg.setSourceEntity(175U);
    msg.setDestination(49774U);
    msg.setDestinationEntity(53U);
    msg.cmd = 39U;
    msg.op = 214U;
    msg.plan_id.assign("TFESFQFDKAQKFHVFNUEWTKADBHTBXQUDLSQIKVMBXMXOVPNTBHYEVOLPERBBTKZSIECJQXPRNXACZTWNNKLSDOZXJICAYJZJIWUPJYRGQZJGHVAQDDXCMLGLPMZOEQERXIKHCLBDRVUKEOSFRVPHBJTSUJYVGYHWWGGPBNRMOLODXAZSYCKIRFXOTQGZPACMOMNVEKTBVHYQWUFMWHCLNDSGAWRCWSIGFNMGCPAUNTDJ");
    msg.params.assign("OIEELEMFZYSLBFFGATXHWPTXVOUSPSEJYUUSWDBZYXLUZRNN");

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
    msg.setTimeStamp(0.8786268826078928);
    msg.setSource(51668U);
    msg.setSourceEntity(185U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(31U);
    msg.cmd = 110U;
    msg.op = 100U;
    msg.plan_id.assign("XGESGGNIZHRQBVUFSLTOYEJHGIANKZZKHYAQMMUGKMRVLXZIPURPAWZXIGOPDPRAHBBSMQEAZADXIBALXIZWRLSTVDZWNVENLMOUBQBEPNDEYBMZKHOUWEQORCQLQFAYNXTTFWFFLSVJVJLRSHKTNEDCDMPCDWATLKTKXCACO");
    msg.params.assign("DAIXRPOEPXZMNAXQTKDIPOZYXXBMODCTRBPVQLHSWLQIGNWIOSKGOWQCGREEQVTEUOZGJGIUEUZYPFFNVFFKRDVCGVNJUMEAMRTWTSEDRJFOHOZGHYKYCLCIXTZKONPAQFIBXDAZLMVIBALBABSFHQQDPQMJYTLUHTMWSUCMFYNOVSLNSBHXSKIGDRJLSKXMAJJYHHTYVDBZPSUCXBFERCCNYQWHVJPVAUPLNCFLTWZKKWRDB");

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
    msg.setTimeStamp(0.8740073148555938);
    msg.setSource(29642U);
    msg.setSourceEntity(106U);
    msg.setDestination(52309U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("JZMYJKIVFXYZFKXPUCTEINOKEHNLDDGVHHDLRMERJOQOGJYEVSPTBVXLARMJRCLJATLWCGZUWGHNSTLQUWHPOCQCZWINLITYFEEFNZRMSQZSICQPANIWTYZNYSARUEFHUSJWFGMDESAG");
    msg.op = 205U;
    msg.lat = 0.5288062827330683;
    msg.lon = 0.7731150922734665;
    msg.height = 0.15515120641786717;
    msg.x = 0.8952228544164306;
    msg.y = 0.6915862989075783;
    msg.z = 0.3219849221261062;
    msg.phi = 0.5000065059986227;
    msg.theta = 0.4241586876585911;
    msg.psi = 0.8773371841446451;
    msg.vx = 0.5224243892522238;
    msg.vy = 0.020309868290003252;
    msg.vz = 0.8247488735127922;
    msg.p = 0.7357707935490363;
    msg.q = 0.161137422624552;
    msg.r = 0.6017771123063572;
    msg.svx = 0.651631698928743;
    msg.svy = 0.6557075811315012;
    msg.svz = 0.30942320967843207;

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
    msg.setTimeStamp(0.8960024927257165);
    msg.setSource(37635U);
    msg.setSourceEntity(33U);
    msg.setDestination(19119U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("HJYBAIEKJFJODXAPYHVREYOVBUMCHZDBLYGSHCNCDGNXGMXFKLKZKQGMGAORDCIHULFTBWZCNWUNZPHKQDOPTPEVBQQEKEDLZXDOENRAILZIBMVPPMKVTGVYESIJXCSRMTKPQIYXCSTSCYJSYUFTOKZUYWPMYLQNEJFONQTDZUALIXSBGUHXOALHQCNILTMWAWTFJOFZDUNSAGRBMAGIMJLZSXRNJPQAIERVKVWRWXFWWVWDUFRSO");
    msg.op = 88U;
    msg.lat = 0.9430772183250359;
    msg.lon = 0.1695963992680264;
    msg.height = 0.24701887447151227;
    msg.x = 0.2923930052311595;
    msg.y = 0.35137446379762494;
    msg.z = 0.23413165908404965;
    msg.phi = 0.24877168807887018;
    msg.theta = 0.7461854726994633;
    msg.psi = 0.2803223325867428;
    msg.vx = 0.5413450278841955;
    msg.vy = 0.14541123846147364;
    msg.vz = 0.04644622064831894;
    msg.p = 0.99911023543131;
    msg.q = 0.6112144110849456;
    msg.r = 0.9143475075868951;
    msg.svx = 0.8007738293667765;
    msg.svy = 0.942876485201832;
    msg.svz = 0.24395973610018473;

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
    msg.setTimeStamp(0.879931719941904);
    msg.setSource(572U);
    msg.setSourceEntity(97U);
    msg.setDestination(30167U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("UQYNBDBXVPZJRLBOGYEUVPXQAFEYLPSYQUOWAPWZQZHJJQFKCKNXLDYVQQRFAQOJPIMXVTNITDUHTBLTGTGETTRVRAVVVEUSCGGFRIMWSH");
    msg.op = 199U;
    msg.lat = 0.32480414049258255;
    msg.lon = 0.9018944737760742;
    msg.height = 0.05696764142800692;
    msg.x = 0.48471526059181025;
    msg.y = 0.7590370397640107;
    msg.z = 0.7571531230393072;
    msg.phi = 0.08660015737253868;
    msg.theta = 0.37991647543713414;
    msg.psi = 0.17620659223897217;
    msg.vx = 0.2288222302596341;
    msg.vy = 0.9233387931022596;
    msg.vz = 0.8777113248136564;
    msg.p = 0.7506995628938122;
    msg.q = 0.2924227376400311;
    msg.r = 0.5584162052260887;
    msg.svx = 0.8891793637369733;
    msg.svy = 0.9534091259938294;
    msg.svz = 0.2414233835922478;

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
    msg.setTimeStamp(0.35650189889467565);
    msg.setSource(1031U);
    msg.setSourceEntity(228U);
    msg.setDestination(18423U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("ZUHOFYVIFNVTTCPPVKEVEYULJIYUHQOXIYDEHQVWRNCMULTAACNGNSHFUZCBGKJHFFDGESIMQTSJDMXZOGZSLGJVYONCQAPWWRMXOKUJUTWPOALSDGAPJSRELMIANELAWNKCKQEHDVJHSYXXZKIUMORFTLCGNGJDANRTDPWESPBQSDTWSGBQIOVBELRCUKBYZNRJMBYAPYXQFWIGXXYZFDQHRCFBMEMULBLX");
    msg.type = 0U;
    msg.properties = 242U;
    msg.durations.assign("FTZFGJWTYYSKRMPWITKXIMNSDUKCABBNYCHGSCVMWBEGKONFGSVRDMIPCPIHDRWEMOOILJJAMUDZDPAEQPAMCCRNWFPUHGBISOEXLFZJSLPUIUSBEUXGDVYQCZWWMOUQHNVTVBZCCLQUYLXVNTGILXXUKZZFGYGFLKQEDUNZSHJHJASFBCDIEYMKQLBVDNBRQEAJVFGKRXROYLENXLJAVYQYOTQRVZMBTRWWRIOQJHJKNFXKDSTWHE");
    msg.distances.assign("YMFSHTIMATEJTRWCWNXKNTACRCWNYDDBCJEOPCOURPRLGYJOJLXIHDALEWOJBTTMMLGDMIMNWOSWEHJNLLVHEYARFVSLFPVELIYYOJGAAKQGDUSIDZWZQDUCVPXRVHXQQXKMAPSNGEKXAZYZSZUODQOHAFFKQDPZKVFWYZTLTZMCGPRKJBUKSCDJRNUBBKCSQQQTT");
    msg.actions.assign("VQISLKMYGFXGBWMMUPLJEXJMWFNAWHGKILPDWOEHHSQVAUHVBUYBUAWDFHPIGIBXBFCNATKBYWDMKSJHEOKKYRZPHQGEEPVDPRTXCTBZSWLRKEPJYIN");
    msg.fuel.assign("KTIQXGGILBHXGOAOFEAQ");

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
    msg.setTimeStamp(0.8739730275851166);
    msg.setSource(40030U);
    msg.setSourceEntity(217U);
    msg.setDestination(40415U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("VBZYVJGWVRRQZWBKSOTMYOMYVUKZPETVHHLWPXCLDXPCSLXRQQZAIQNMIBDURAHKFFYRXMOPCAIXOUVCQTAPXCSPIZJIUAHEBHFPUCPJRBSFNYHTYOAOXQDSMJWSMKGLYVUBGLELJQOECSANJAQPMUOXJJOBWTHIFFLZRFAXAMGURTDGTNWELNFWNEXLLODDGYPSJUTFVKEYGNTDKNEVZNRDWWCYQBGHBZRHE");
    msg.type = 45U;
    msg.properties = 250U;
    msg.durations.assign("UBIQSBIFTDTPUYOABBUFHJMLVZHGRPEQFTZXCMFHCENMAKECDMVQQYBWFHEOLRJJYYTXGIWEESJRTWXPGBYUHKRQZVSKDKXZFVLSQMJHXUMLOGMIQLNRMDQOICGVZRUNJOPXAAALNANDCDKPWJXCKVCJPFRMEIODWRTBHSKHKWZLDAVKWRUSCCEYSUOUGPDWTSXOONNVFQYYFKPVHULGVXYHBSNGZTZID");
    msg.distances.assign("SOBGQVHAQPAIKTNYOKDAAZCLSEZGXCHRAJXKFFWPPSEJXZJTHKNVCCVBRPKNOQDQLYCTUFQDBKHBWLPYASXYWPDEGHWSDUAEATGTHVFBMVWNJZUUBZUMJLMXRMFNFZOMIEXCROKHIVXWGRKNWRXGQMPMRYIHCFAMOFDZSYUEIYMEVDSLZVQIDLQBINJCUPUIGGTY");
    msg.actions.assign("BNKWUBZUUTCBCQVYGQGMVQDRFSMTCODLMCFVZPKDTWLEPPLFHTNWKERGHFJGIHAZFAQEUMZBXIHEEVPNYDDYBNEELZMCHMXSWUINVYNARAIETUGR");
    msg.fuel.assign("UUAVJCYCPIEHOFAOVLWQLQAFXCPJMWBBMZCCUMKQVNSUMYTRUITYAGDQDTVXBXEJSH");

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
    msg.setTimeStamp(0.1138094745659014);
    msg.setSource(57662U);
    msg.setSourceEntity(181U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("MFUKZXPOBOJYYEPZQQPVLAVFOZAXJZNTLCMRRGRMGHKIZRNCCCAUWLBIUPWEYUIYQRQEOMEBXVVLRDKOUHNGBNWNYTBBZGGFDDOZHFDCVTYTEHFXKAEWDWNRJMIHVCUHAIDFJQASNXQRHHPPVDGETDANEMUJYAPILWIMTCRGCKSFEQPJKFYWPBZLSLXKJQWKJGDXBXSKZLSXOUJVBBHKITEFUSLOIFT");
    msg.type = 208U;
    msg.properties = 32U;
    msg.durations.assign("UJRFYJLUPQUQIEDELHWZLTSREVMBQWHOYDGOMLAFNZJXMJBGKXPBPIHAAHTXTNSZCISCTUAMAOPKVWQDSZYHJRSWYUVO");
    msg.distances.assign("TUOIGXYVPKNZNTDFBRMYBAZKINAAVHFULPCZXKJZDHYMRPGYVWGPNQZWMHFBGJXYQJDLWOAKSYEZIZXQHVOJRLCCTWTVCSWVGAXQBOEWJRDRWWRFBXQMJOMYLSSFTVLHRLKCNDWOOVLGQOJKZBDESEPXCASMIBXYUNEJIBRCHTKSDUWBE");
    msg.actions.assign("SYVOFRVJNZWTXZXKKEPDNMFVUSJSFGJJEGOOYDNAPIUSCMGUIAOLBCFFMVLTKBZSIWNCVDNLVOBRSUXQGTMCVCCYZWVVAELB");
    msg.fuel.assign("EDOXLLCOJVBXYBGKTOMTJSCCEKQBQNCJDDVXCGAWJTEEUYDHQPWEUAMQPJQLDZWRQIGJWONMTBRYSRXKKGHIDIIHFMUMVRPWFAMRVIHXSVGHDUGU");

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
    msg.setTimeStamp(0.933798287100442);
    msg.setSource(64531U);
    msg.setSourceEntity(195U);
    msg.setDestination(40024U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.44644174032261974;
    msg.lon = 0.5826963863399153;
    msg.depth = 0.5491584843579853;
    msg.roll = 0.7029328222200948;
    msg.pitch = 0.42779463776906457;
    msg.yaw = 0.7086588201851947;
    msg.rcp_time = 0.6515545903237949;
    msg.sid.assign("BTUXFRXEJXFUOIFVUTRCNHHYYFPWLNEQRPVVTSZNKTYOOHOZNMYQO");
    msg.s_type = 25U;

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
    msg.setTimeStamp(0.8548855913197959);
    msg.setSource(33283U);
    msg.setSourceEntity(214U);
    msg.setDestination(62497U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.12001200030441106;
    msg.lon = 0.9619517597243533;
    msg.depth = 0.8041880247360877;
    msg.roll = 0.7982153468597879;
    msg.pitch = 0.237550924466001;
    msg.yaw = 0.2176146887942163;
    msg.rcp_time = 0.1404027065441258;
    msg.sid.assign("EBARYMBJSYJSANGNUNVCXLQBQTVOHOOABPVNRMPBCTLZLNEOKIBYYVCPDOYFGKRLMJVVXZFWDKTWKDAWSYWZGDNNZDDXHBRRHGATDQRWILCSSQJTLIXMSNBQQSAUB");
    msg.s_type = 0U;

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
    msg.setTimeStamp(0.7329808030238052);
    msg.setSource(8207U);
    msg.setSourceEntity(218U);
    msg.setDestination(33217U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.44458755945852824;
    msg.lon = 0.3867420481396431;
    msg.depth = 0.6649624217741785;
    msg.roll = 0.5669344095179065;
    msg.pitch = 0.3635830360746082;
    msg.yaw = 0.2488148481438558;
    msg.rcp_time = 0.752074677183763;
    msg.sid.assign("ARCIKEHXWLZ");
    msg.s_type = 104U;

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
    msg.setTimeStamp(0.5042698297259623);
    msg.setSource(33992U);
    msg.setSourceEntity(128U);
    msg.setDestination(49024U);
    msg.setDestinationEntity(218U);
    msg.id.assign("FHWNVDJPYKDPZDVKATFLCUNEITTMFCENSUTUQGCYPJYTPFHGMEYBOQWQJSQWPABVSONHZBZLSIUEQJEMRBGEFJAGLHLXWCKSWRCMOYAB");
    msg.sensor_class.assign("FKCXXEMBGCUVURXWPTGOMVDMKLPIYNROHRQCPZTWAUSNGMACKJQPFSLUGBTVOSHSRYPXAVNQZKODTBIKTOBYEXHYNEDBPWNQFCQIEAGONBGTOYMFJVZFTDQOLPXJWYCRHIEZWNWAKTFKPIKMXHSWVNFYJHWCAZATYEIUXIVPSXYJIUDFBDDUCJSMLCONVZZQGDXDBFMLGYGLZEUGUPSNDKOQIHAUMREBRZLQHWRQJJ");
    msg.lat = 0.0548032056813208;
    msg.lon = 0.14766254471048024;
    msg.alt = 0.09996413957139305;
    msg.heading = 0.9432545255632343;
    msg.data.assign("IOFPJLTOJTZKPVLKWQTIDBYEEJQSTXYUHHKIBKHYNZOXQFXTHOJGSKGDFSLLSFMSZPWIUUMGFTUINOPCJGNVFKRUXRLEEYWYFNBETNDZECSQDOMVCRRPHBZOTHMQDIXKAXJIFOAJJSYRUNBXLMMWNIRMNAAEEGWPXPHTTDBZVQGLGKZZYFSFPNOVHABAUYPHMDMVBLACIJSKIXWOLQZDVYWCQLYQRJHWZSUWGRUCGVNADADMPR");

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
    msg.setTimeStamp(0.36296836100647256);
    msg.setSource(31868U);
    msg.setSourceEntity(30U);
    msg.setDestination(63841U);
    msg.setDestinationEntity(68U);
    msg.id.assign("UALQXSMYBZIGVYSQOTGOFWGSBELHFLWUUIJUELDXJFEFQCYKQABMREZCMTEWRPXODHMRTSEPORYFKTWDOAJIVPPCGUNQNWZCATJYHKMCQXHMKOVXMDKOATHIPCCNTWHBQYIEXOFKDMHGZUXYDGOLTKMBAAJXGOUSNQVJBWLVSURGCDEHNFMJDH");
    msg.sensor_class.assign("NWHLGIRHDAFOWYLGMRYPXHYYXJAFLTTVBHSCLGZXYSSRMVATOCDTDAPJSLCMOXKEEDZXPLSGREAGWYINFPJLJZPBNQVIQQXVIEOCOPCKPFSNHKLWEXDPQQIURSQEUNMVOZEWBZALIVZRKNJSCBYFVSBUBXHBGJIYZUOTOMIDCARFLAYFUQFDGJIKZIOCTHJCQMXMNWDYDRWVWQKHURAPAZWBMOZEBBTMKHKTUNFUGTJWUFVGMJKQDKSETEVNUC");
    msg.lat = 0.016638288744905694;
    msg.lon = 0.23197937247091271;
    msg.alt = 0.9799326946809349;
    msg.heading = 0.8976257476284432;
    msg.data.assign("JVUABRLHMCXAKZDPTFBXSFXGFLOMZNORMYAALLSQFSXSCRZEFQRTQGUMRAGYAYINCTPAXDMHKEXJDHUEVDYHZZYOLC");

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
    msg.setTimeStamp(0.05649705291671814);
    msg.setSource(53493U);
    msg.setSourceEntity(0U);
    msg.setDestination(32233U);
    msg.setDestinationEntity(89U);
    msg.id.assign("PSMYFOUKRQTRZXHNFWKIJTBSLTKAHGGDORHOIAYBPUCNDFWJRVVXBUVTDOOMDMNBAYVZINERWCEPWBOZWPYXJUQJHKBQAZXHBYSTABFSHHZUIJZMSLOWZNCQSTQGVVDTYAMKJDPKFPIGSZEXYRHQEDLV");
    msg.sensor_class.assign("GWFKIUPMSLBVDITMNBDFQJOJDCUGDYEHSHCJNHGOZOJIDHDXKAMHHEXNREDJFKNYVKBQNMQSJUDLBCELASKHXJRPQKYFBCQYRRMYTPBUUULEMPXAYLWUAOVHGLPNRRIOSGHCAEFKLZPFTBWWZWJSQSDVPTTOFNOTKZWVOVMCGCXRXWWPILZQQEUILCACTXKNAGPRJXNVYMZMZIFVZIUUMRDFOEGQAPHSOIXYQVKBGEYFABI");
    msg.lat = 0.6389636470916981;
    msg.lon = 0.48735700151124417;
    msg.alt = 0.8837918795282618;
    msg.heading = 0.1593098129257977;
    msg.data.assign("GPMAPCAQWBCOHHHIDTFXHWITYCGHDMLUMICRZKBGTBWOVNSZHZUFZLKSHKCBFHAGXGUYVGSJYZNDBO");

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
    msg.setTimeStamp(0.8026202801021254);
    msg.setSource(26972U);
    msg.setSourceEntity(169U);
    msg.setDestination(39476U);
    msg.setDestinationEntity(92U);
    msg.id.assign("JIGNVYPRXRYHZNBKAFJLOFEBZWKQWHTFPWFURBUTQHMVBAXNOAPTWEXSCCYMTRQRDNCRKHKIOUJYNMIBSRZNATYOBDXHDCANJQWSDXLKIMJJVSANEWY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YBFPVSRQVWBTKRCIEBXKAMINZJXEW");
    tmp_msg_0.feature_type = 84U;
    tmp_msg_0.rgb_red = 228U;
    tmp_msg_0.rgb_green = 206U;
    tmp_msg_0.rgb_blue = 214U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5549192712881779;
    tmp_tmp_msg_0_0.lon = 0.9645369102510121;
    tmp_tmp_msg_0_0.alt = 0.6178570773273387;
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
    msg.setTimeStamp(0.7415193362260506);
    msg.setSource(45206U);
    msg.setSourceEntity(240U);
    msg.setDestination(36821U);
    msg.setDestinationEntity(117U);
    msg.id.assign("AUDCYBKUTGSRJHAGKYXDCFPSXFIRFNPMEGVQMZXI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CZJXKNEEQIKIGAPLCMFIMKJEXOWVYSJCVPZJLYLCRNRSVLBMQDSSTKATCNWBKEDVYFCXBGTVXYWGXVIVFNDBSQWMZH");
    tmp_msg_0.feature_type = 204U;
    tmp_msg_0.rgb_red = 111U;
    tmp_msg_0.rgb_green = 151U;
    tmp_msg_0.rgb_blue = 201U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9522739191450769;
    tmp_tmp_msg_0_0.lon = 0.12543443694183543;
    tmp_tmp_msg_0_0.alt = 0.7003418001532578;
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
    msg.setTimeStamp(0.5156433342598823);
    msg.setSource(15513U);
    msg.setSourceEntity(214U);
    msg.setDestination(64409U);
    msg.setDestinationEntity(36U);
    msg.id.assign("KSENYBNLCXQWHMTKPQVTVE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AEMWKOBDOQKPGKTMQCMHLXMLVGZWSBTTMDNDZCYNFKEKHMDSNPAGBVEXFLXZAHLVUSQRBMRZUVQEFFJIPGWJRUHLTICZWJRNJEXTULXXSCXWZJRYKBJWWPCGGCVIZFGPWGMHKELCAUEZUTNHSIBNDRTZVXORUYAIOBPLNOVIIDXQSVEQFPOSUQFCFRYLAOJCDPF");
    tmp_msg_0.feature_type = 41U;
    tmp_msg_0.rgb_red = 244U;
    tmp_msg_0.rgb_green = 250U;
    tmp_msg_0.rgb_blue = 205U;
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
    msg.setTimeStamp(0.43909102418471924);
    msg.setSource(47878U);
    msg.setSourceEntity(158U);
    msg.setDestination(45863U);
    msg.setDestinationEntity(39U);
    msg.id.assign("ZFQZRHWIDKJYSGLAAVZVXACDLUCZ");
    msg.feature_type = 80U;
    msg.rgb_red = 187U;
    msg.rgb_green = 65U;
    msg.rgb_blue = 111U;

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
    msg.setTimeStamp(0.41845875547239186);
    msg.setSource(14291U);
    msg.setSourceEntity(0U);
    msg.setDestination(50554U);
    msg.setDestinationEntity(119U);
    msg.id.assign("ABKRHDJEFLCXHOZDASFKKCWGTGEJERIBSHFYGLOZADEHJZKJCNEPFBLHLQSLOSXUOHVMFAXARFLSDQSQVQJIKVACUZKBQVJXKWDMMIEIGAXQGEPTLMCTNMPQPCSVHMOWHXQGZFTOUNHOGBOSJGZJYTRROLDDWBNN");
    msg.feature_type = 103U;
    msg.rgb_red = 246U;
    msg.rgb_green = 47U;
    msg.rgb_blue = 245U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9209266165052719;
    tmp_msg_0.lon = 0.4224922613953561;
    tmp_msg_0.alt = 0.022589711060883477;
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
    msg.setTimeStamp(0.5607747147904317);
    msg.setSource(59669U);
    msg.setSourceEntity(126U);
    msg.setDestination(64225U);
    msg.setDestinationEntity(11U);
    msg.id.assign("RSGPMMHFYOVDWFHTTWAQNEPQYSDUCSRTDAJEMMGWLZNXGTYYVYRNERIHLVGFVTMBVWNCPXJNJBJPBHQLBOZLVAEIALSGMZPJHTRKKKOPOETDOLUOWXPASCXWTCDHTSXRUFUSYAIOQEMEDFODMZLZDIHISWRZSCKGCKZAYUOYVYGJHWJXRFWKETFCBQU");
    msg.feature_type = 135U;
    msg.rgb_red = 229U;
    msg.rgb_green = 174U;
    msg.rgb_blue = 247U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.29064303268890823;
    tmp_msg_0.lon = 0.025463520337181134;
    tmp_msg_0.alt = 0.6966384779658498;
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
    msg.setTimeStamp(0.2095447018662373);
    msg.setSource(42452U);
    msg.setSourceEntity(145U);
    msg.setDestination(62627U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.06889252063497275;
    msg.lon = 0.8328663804918206;
    msg.alt = 0.23930899443275633;

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
    msg.setTimeStamp(0.9387036881338539);
    msg.setSource(57196U);
    msg.setSourceEntity(23U);
    msg.setDestination(53508U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.6017255918021888;
    msg.lon = 0.5536034514153819;
    msg.alt = 0.52323936623809;

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
    msg.setTimeStamp(0.7337084520383798);
    msg.setSource(32265U);
    msg.setSourceEntity(196U);
    msg.setDestination(2097U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.30503407880195177;
    msg.lon = 0.3442503104668917;
    msg.alt = 0.7705803397704957;

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
    msg.setTimeStamp(0.7694514485163867);
    msg.setSource(47291U);
    msg.setSourceEntity(220U);
    msg.setDestination(61880U);
    msg.setDestinationEntity(140U);
    msg.type = 23U;
    msg.id.assign("PYZIOUSJSFVVOEPUFHGNERSIQQBREZZKXSWDJNVWFPANXINUQBXYMRAPTVBWDANATMVDGAJIUUQLWEIBCMYOQEPMHKPCRRBCHRPDVBHVHSJKFJZGKLDLTCEXDQOGDKOQLYAYCZLVZTYZ");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LZYLABUZJVCLCJNWOCNMYBGGCXFUOYRQRETTRHKBHQWPOXCQKAMEMJCKWBYGOUOSKFJZIKQYVZSVGCFUFJDRVYHWTGTKZIXWRIJDIDHXRNEDTEZQCWLLPDHTMATGFNNFPQNANQRGBSALALWOPWMSBISZUOOQVBDATDOHPFMIKGRKBVFYEXUUHOFWYSIWJPHKBGUPIANZIEZVTLFYSPERDJQRDX");
    tmp_msg_0.visibility.assign("SUZVWXVVYSHMQTYABFJFHGYQGQVICMORVZEWCOQZBFEAXCIGPURYKXQEIKMAJFYENSKFENBTMFDRBSDWWEDPOXDSVGKBRLTOLUNPADPIUGPWOLAYCGIYDPGZNXALBAWVDMPPZFSUKRICBQTJFJUXIJWRVRYVJDGHUCULZSZKFBQTGHHRPXTLRLZMMUNWOKNKDSFCOTHCWNA");
    tmp_msg_0.scope.assign("LDBPRDZKHEOJKBDNUXVNTMNEKMNMOFEOXMPGYPSKAPOWSSFWYHILQCXZIGJVCXDZARUMTGWAWTCHYGSEQJZEIJPYUCKWYDA");
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
    msg.setTimeStamp(0.7443605045729701);
    msg.setSource(15102U);
    msg.setSourceEntity(54U);
    msg.setDestination(7454U);
    msg.setDestinationEntity(195U);
    msg.type = 214U;
    msg.id.assign("DIBLMKJFAQ");
    IMC::AcousticMessage tmp_msg_0;
    IMC::TransportBindings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.consumer.assign("MADTIBKOJYZDJKINLIBHXMRDGFLYJCECQIIFKZEFIRSHYEQHYEICLHHVNXPUNCVZWNLGZXMXHFVMVXXPS");
    tmp_tmp_msg_0_0.message_id = 40U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.11754909279401526);
    msg.setSource(2572U);
    msg.setSourceEntity(128U);
    msg.setDestination(7885U);
    msg.setDestinationEntity(17U);
    msg.type = 31U;
    msg.id.assign("GXMZKGOZBLMFSNHDGRVYSJRTUBFYHVDVWBTCTDEAWPEIBJUBHBDLSQFLAODNVSKEOMQKZXREXUATIFCEPUOECXB");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 148U;
    tmp_msg_0.htime = 0.13321314199556344;
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
    msg.setTimeStamp(0.26381591949232797);
    msg.setSource(30612U);
    msg.setSourceEntity(178U);
    msg.setDestination(21590U);
    msg.setDestinationEntity(216U);
    msg.localname.assign("IDFKXFVUSESEWPBDNSZYAHWQSQEZDNWRYNIJNTULYAXHNSHHZDOYOMRNJTUWLUFTISQKRMYDDUBWGZCXOWDELPHLXYBWJQGFFUCMJXOPTUKAHWLMGMRISIQHMASEYYAJECOXWPKFSPTKLVFPBPXLUIBLCVVCVFJTTIBKRHXZIPCYGCTJCLBBZENGOVGZBHWZAVFOOCMFRMRJRAQAKKDZOGJHETGCR");

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
    msg.setTimeStamp(0.23914451153332694);
    msg.setSource(1307U);
    msg.setSourceEntity(126U);
    msg.setDestination(35576U);
    msg.setDestinationEntity(169U);
    msg.localname.assign("IVVUSIVIOUBCQWQAXBUFUHRCPADKXNXUYXCLIQBSBDWFSAOOEMFZSPAHMZGIWZZHSPEVBXNVWKJECUFVEHLAGVQTAHGBIFUJDAOWXSTNTFOISOJIDLNTFKNZYHDWFMYEURPRRKJYBRMSKMNYSVBPHIMNLYDHQDAYTALLKMZYNPKVDQXLQXMPEGQRZWWRMJVPLHYGRCTUQ");

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
    msg.setTimeStamp(0.06234369434475928);
    msg.setSource(44831U);
    msg.setSourceEntity(90U);
    msg.setDestination(19164U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("VLUKUXTILDLWNMJFAQNHUJMZAFNCBAYZUPSRBQPEDOJGIVBZGQYLPUKXGCDRNYDJNZXWWTXVCTVFVRROOKYDIMZRUTIFPJVRNCPKDYOHXPEKLHFENDGIYDZHSQPNSLXVOCBZZHGSAWRWGGEEQSYPJQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BCITQIGFDYVIEUCZGBVCRMQZBYJSZWZWJEONXZRKNTLFHGPIOWLXHHUXYEAVXJMWMUKUJCLRVBVEPREHSPMNPFVSDJIFKFDOHTNUFAEELVOYITCZFFCDVBKJEXGNAEXVWGXTHXOBCAAKMEGSUTTXKWKNZSIPBGSGCSNQPOLKZLLGYQDDJRQOZDUNQJBPZMWKGDVAMYHWDTPNYPYRWOTIHUMSDABR");
    tmp_msg_0.sys_type = 67U;
    tmp_msg_0.owner = 11739U;
    tmp_msg_0.lat = 0.639572355958177;
    tmp_msg_0.lon = 0.6071448501785922;
    tmp_msg_0.height = 0.3996503361764989;
    tmp_msg_0.services.assign("IDWJZDJZTIMFMMWVPTYYKNGCZPDNRGATNQMHFOIQLYUUYCIEUYCWJONTAQEEDFLPONXXXOHRBMYCVPZMFPXPSBNCZWORLNRRHERKSNBUYSJZSDLUCJHATRKVYSTWLYWGBNHHFLXREKXCEJAMHOEBLAFUJWUZMBBHCRMZVSHIWAVTJDCBPATQTHJQDURGVAAOFKQIZKWIXSQBKXLLNKPFCJKTYDIOGIIDXGZOEPWLGGGQSAFBKMPQUQOESVSVUV");
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
    msg.setTimeStamp(0.962558815637988);
    msg.setSource(46621U);
    msg.setSourceEntity(102U);
    msg.setDestination(48541U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("JBONWDYVLDHUHTMIGTODURGHHBODKSYLFRHPSKXUXYXURSFSMZLPVKXOPNRICMGAQSFQSFXRNNBUOTXBQLVTLLHBTCJBPACERDZFCXATIQBQYJFMIWQRGVFUDYGJ");
    msg.predicate.assign("MQCZVQQUQOXHGDYTCHZPRCWVJXIAF");
    msg.attributes.assign("KXTBMBVBUWXVMJZNTYJUCLSSPZLKQZHGHUSLOXFTHEA");

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
    msg.setTimeStamp(0.5138611126487558);
    msg.setSource(18652U);
    msg.setSourceEntity(214U);
    msg.setDestination(58686U);
    msg.setDestinationEntity(61U);
    msg.timeline.assign("DFBXGLNAOPAFMZDTVUCAHSJGEZRKRVGIHJQEBHOPWGKBOLVKHLISUVQVCSLUKVXIEMGHRVNRWTWUHUGMXIFEFAXYMTOPIDMQPZODMOCFJENPGRJPEWXTNSDKTIJQJKPVZCEXAJCBFYJNNUMYGBERLXLUKWHAIXLJGTCZSFYCOPE");
    msg.predicate.assign("TUWTQFTUZHQYACOCVVNKYIGJMVVIISLS");
    msg.attributes.assign("CTWUPJZKYPPQTGWUNLJRKDBEZRUAODTFRQSAJZUCIIDFZVLNYVVFCUWPELGSRSHTHCKAAOGSVOKIEJHTNTWMNHLMKKKGXBYIOOPUGWQSLDAGXOHMWWWCUXIQPTIQKVKBFLFGHACJ");

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
    msg.setTimeStamp(0.4994144493952861);
    msg.setSource(9204U);
    msg.setSourceEntity(155U);
    msg.setDestination(43682U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("VQRUSQYNKWYJRPKWGHMLWHJNNFRCBRAGVIFCKRQAQQOISLTGWWBAOIDYXEPELSLZTTIMAHDVFOMPCDYSRFCTHTUGQADPNSJJIGCMWELSLYCVXKJAODPYUEBHTMGFUXMJBPIWFYHOGPSJEKRKVUOGSQUXBZKZTQLDFZCYUFUXLXCXZVCMAIYKDNRTMXBSKAUBLRHNDMVWZJXJ");
    msg.predicate.assign("SNTQRNZEILGCHSOMPCLSUKHCGOPVLAEAXUULPZXUQBDPOTHDWPZCZNNTCVVFPEIXIHJDIROYYCWLRMZBNUOYEKPVDMVKRODAQGZFROBWQIIEOTDZZMNNJUVOWXWHUVYPSBARMFJGMVGRNBIKEATSLPTSJCYKYIQQQUHTHARXSXUKFCMTFKHDXIYGMKHOXQXDAKJAGBFCBTSDJSVDYWEGYFNRMZZWSMLLKWTCEEYBPFJG");
    msg.attributes.assign("KGQJWSAPHTXDREEMLSWOQXVRIYAMWFSAQIKWUJMIYPCDHYDOCQCETSOCKKWRPIDIMRCUZZQGJELDGVEDYFBVAXHFXNTMUOGLBRQGOVCXWSHMLNDHQGZFPGGZKYXJIGYWFJURMWTHSTTFFKSNYKMNEFXTANCQMHHZZLVSBUJUANVCLEXJEJCNBUOJTQFPRVWPVHXARQPFKIMDOYSOWIXTOSLBZYD");

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
    msg.setTimeStamp(0.5396974324548119);
    msg.setSource(41949U);
    msg.setSourceEntity(246U);
    msg.setDestination(44549U);
    msg.setDestinationEntity(212U);
    msg.command = 224U;
    msg.goal_id.assign("PAFHFUDSNGTPQICFBVCLOHIIWIYCJDSYVZDQKYI");
    msg.goal_xml.assign("CMDEGUESSIVZQBNTQHMAUTMVUQTZTIVYOCNBKCCEXCLQWXOTOYYDRUNJIQMKNKYZDMNABEDHXPPLFGPPZGLKPTZVWZNLGRYNHXZKWDALDHWVOVXDYEODIATZJYBJRPU");

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
    msg.setTimeStamp(0.29071706971409583);
    msg.setSource(14247U);
    msg.setSourceEntity(241U);
    msg.setDestination(32845U);
    msg.setDestinationEntity(98U);
    msg.command = 106U;
    msg.goal_id.assign("UAVLVGYPEPDEPCBLDQXYZXHIAFNURBJTGXQCOTJTDAFRXWZIHQOGQPEZTTUDSSKHHSXDGIJTLUJGMHIREBAVTCTZEUADIYUFBLXMXNNIQEILRFRKECBNDHRPKQSGDWGCULMZARPYNYODXOHJJMCZMYPQISAZLVSLFSJKDFJWAMUSUKHFBRQWQIOGZBBCOFPVKNBKNBOZVMXRUOCNFASPTZWYMNPVWGWIYVLNKJOWESEMT");
    msg.goal_xml.assign("IAJNQXUJMOKKIHHUNAGORXWTAOHJUALAMKKFIAWGTUEJIOSKOFPGBRBCTNFCSECZMQXOYSFEUOXXPTEZIAMNWZ");

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
    msg.setTimeStamp(0.5010875266054408);
    msg.setSource(4952U);
    msg.setSourceEntity(28U);
    msg.setDestination(43015U);
    msg.setDestinationEntity(126U);
    msg.command = 18U;
    msg.goal_id.assign("JBCAHXNJMMAQTHBVEKORCQXSWTZRXSL");
    msg.goal_xml.assign("VARRJPSTODGJWYSAGAGWZENSDAQPWDXVJCEKHTQOENCJLOLKDZHZYSCBMNPCRBBFMMDIBMSOFERYTJGPDCLYSQNGBQEZHTXNZLXXXDMTWPIDLKZUFFNJAZJIKBIVWGUILWMSQXHNPGUSJCVXOAWHUAETRUYUZPOLKM");

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
    msg.setTimeStamp(0.024611020278284212);
    msg.setSource(37339U);
    msg.setSourceEntity(240U);
    msg.setDestination(45250U);
    msg.setDestinationEntity(188U);
    msg.op = 23U;
    msg.goal_id.assign("QDVTZQBLGTQHIZAWTXVCCHPUCZKTNFFGVFUGJRQSPQYIBOBPEDCHRIOKNPROAWOKAPHAANGGHJXNWWJHRKXAWMCKQTMTBJDLTDUUUDOTNIJFPOQLSASBNUZLIEVEYFNOSIQNFAHCSCCFYWJXGEUFKCGLUWDEVLYPZVSZRWRKMEPDJMXBVSCY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SYXCLWNXKEGKMAMQXAQQJYLHPGSIXRSVFATJLDKZGKBYMYORMQTCJGGDRZNUVRAAFPLSNTLRICBTOOIHFTXCKPHHCMXKYUJEDDQGSSUNISJVBHZ");
    tmp_msg_0.predicate.assign("EBPSHTHGRXQNUAAVARQAOCBWTPUJFTSJESDZQICEOBJBGXEFHWEFJWKIWSTVQWFFODDKEGRZRLMIMREDBSMXQOOQDNKCYIBLNVHBVHJNSQRAQZBFLCPAUQRLDXMQOZCHHUVNKYAUFEZZGTMXUZIVYBIPSDKURGYCVKJATMTDZNSBMDVXPTVGTUHXMNNMSGKXLHIZOXAIWWYOURC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EXZZNNCKSQIQQFJXCTRLLKEYYQSJYUCUUSUNKAZGOVIPETXSQSOAOWGDTBHIWABBNDNPAITNKQOAMEUVDOIMBQPJZHYEQVUINVSZDGEZBMMFPYGDNELCB");
    tmp_tmp_msg_0_0.attr_type = 187U;
    tmp_tmp_msg_0_0.min.assign("SJRAJBUKEHTHLEBIRZVAXODCQYMZPRMPHVIPFMYWSGBIOUPNVAPSGVRTXTCMTOYWAXLZIFPCSTVLEMCFUIRYBAJCEFUDWBZPIKRLRZSDUWKJBLWUWIKHUQCCCGSDQFFAVUEOQKTQRUGIQCTVVGJKQGXFERRNCHPWQLQGTWZZKODHVNXZMGDAXPJLOBBNKLKXMODSHKSSMNJJXXWITUZYMJZYEXMIEVN");
    tmp_tmp_msg_0_0.max.assign("NRXMHGIDLNETCBTDUPENFTNNFXIFATVWNLFVWGEJDUDGHYWKMKN");
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
    msg.setTimeStamp(0.4596170693281474);
    msg.setSource(58378U);
    msg.setSourceEntity(102U);
    msg.setDestination(61130U);
    msg.setDestinationEntity(23U);
    msg.op = 66U;
    msg.goal_id.assign("KTVWNNTVTMSCWGEUDXKTVPBSVWWBIEXJSPEFORXGIFRYCXXUBJIOZSJSNXPACBPSBHDOEZLBMFLCNKWPHRJPZLAOGECJJUWVZFNLJIWGDMLOIEGHAXTQMAOQHTVACZFAEYBAODMPMUDTUMEBYLBGNFQJZQTKXIDUQOPKRXYEHWBMODTGHVPIJZRYO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KGQVPOEGQCBFXHNUDFKRPFVYPANLDIYJJIOTQEJSAKBVELAKUWLLUEJUDZN");
    tmp_msg_0.predicate.assign("WYHFZDLLBVRTONQCDSUHJMQDLB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MQEYWZJFXDEQTWIWUFAHKTMXRYJGAXUOQDFYSTKVIWNOGZAVVZFOVGMBLNOKDNVIBUULICKVLIAKYPEJKGUCSIGYFFGAKHOWWINXTJHADMCHZXPTHLIQFJMRRLRVKFZRPNWQFLRHCRTZBDYVMZESOWCYVPULUJRZIQRPJKWRPBOUCSETSABPZHDDVFPHBDCNB");
    tmp_tmp_msg_0_0.attr_type = 78U;
    tmp_tmp_msg_0_0.min.assign("YTLCZMWCVAEOARGZQFCXTHEGEWUPDLMZDQKAFIZKAUJILBSJYFJTOPXGFPRUOJUOKQHUVJJSOMTAMFOKEHYWKYZNACZDNDHHHNCMDTJQSTPIPYRRLNSBCBVSQGZSHMSBHCAJOVIWXYEXXJSLLYRFPYWWFDDDWUOLNYUWVSPDFGGMXOXCFQUVIKJXFETKUCQKMBDENLMPOSIGIEQRQYBMEVBVGAVPNE");
    tmp_tmp_msg_0_0.max.assign("KBNUWJGJCOUCNCPYRWXPNEPNMXUKIJCIFQUKVBVBZSDGABAZ");
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
    msg.setTimeStamp(0.6740568402291774);
    msg.setSource(27419U);
    msg.setSourceEntity(180U);
    msg.setDestination(33342U);
    msg.setDestinationEntity(63U);
    msg.op = 106U;
    msg.goal_id.assign("LLFZPBIAQOLAWHEUULISCSGHROTARLHUKNCXOUMIMOKYILKGVAPQDABGKGBEZWDXJHMJGQPJMWCUCDTSEFOGUWYDBSQRMLWYMSKICQWUHJCZMHZRFFNPIXFGHBHMRSPXCSDVUPYQN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZFJCGXMGTGIBLYWMZPNRWWBQRFBKEJOFHKPXUTBMLFDBHMPCTVDYKUILSZRUVNICBJVYDQELJGIHZEDBBQZYXEQLXAITTRSPYCKKTQWPSQLVSPJRSLJCSWOXNEAHAQTCEBFQKDIDPMGDAKAOKK");
    tmp_msg_0.predicate.assign("NKPHKKRCPDMCBCQKQIAYFKHIFXAZIEOTSTDASHMD");
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
    msg.setTimeStamp(0.1612275294780795);
    msg.setSource(50325U);
    msg.setSourceEntity(249U);
    msg.setDestination(8533U);
    msg.setDestinationEntity(205U);
    msg.name.assign("WFSCWRBGATEPXYBZHXGPSA");
    msg.attr_type = 60U;
    msg.min.assign("JMOMDTUGDKSWJNNTXKDYATDXTCZGIMVKUYFMZGBXZSGZMWTPWHIXB");
    msg.max.assign("JPDTHZXVXZEWTJAK");

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
    msg.setTimeStamp(0.06784616537409627);
    msg.setSource(27186U);
    msg.setSourceEntity(64U);
    msg.setDestination(16616U);
    msg.setDestinationEntity(225U);
    msg.name.assign("SERVCXUDSZXZNUFDLVDOJORFCDTUPMFHIXCFHHGAMBMNKFVHQDSDCNTUSABUHXYHKULVUQLBYEOAVBZARKMJMDJCZJGOETEIXKACJRGAPKSIWKIQIARIYVTZRYHIUCLSNTEKTMOGWJBFQFXBQNBZORWKWKNRXLUPQMYHQAPDVVVGJEHQHZWICXLGTJUJZWI");
    msg.attr_type = 204U;
    msg.min.assign("BRTHBSYHZGEBMDKIZXXEATYPGDBMRGAIQTJHNJNFIIXLUKBOHTDITX");
    msg.max.assign("UEVSPVVNTSWSONGWJFWHCHIQRGZYIUYWXIOLMUOKRPHRTTLHQDOICMBUFKKVKJSJYVJTRAQYATRLKVULAQWAQBAGTIQJYDCCNRIZHSEFGGKBOHOPGESJQCUXDXYZFIIEMLWZSCTQMXXBFKAJCNEJERAZHWXPNKKSZGSWMUNNGGBTLLFPCIMDOBVZRLQHAVDZPUMKREAZNDBJSEFFOCMJFYDB");

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
    msg.setTimeStamp(0.5302701072993267);
    msg.setSource(52042U);
    msg.setSourceEntity(221U);
    msg.setDestination(57544U);
    msg.setDestinationEntity(236U);
    msg.name.assign("LRMXVZAEYBTPOYVTKPEDFAHQPMUWWFWBKGYQLZTMVNNLJSWIFKZCKWQTNYLNIUGVGKIUKEOJYEHXNCJFACRNAWBDPRQOACI");
    msg.attr_type = 178U;
    msg.min.assign("EKZTIXYSGRPNUZVSNDZMWWSPMIFTVCM");
    msg.max.assign("MRNYACFOFAIDITSXVBGNMQGGRWSZLYNQQBPIHUMYMUWKRSIKYJXCHNX");

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
    msg.setTimeStamp(0.4302492829554513);
    msg.setSource(42381U);
    msg.setSourceEntity(108U);
    msg.setDestination(3495U);
    msg.setDestinationEntity(41U);
    msg.timeline.assign("FVYGAZEUFYTIIVRHPNPISYYPDSDBGMZCVQNDRUIAKDJTRXLOACSBKATTNAULPZZWQMDBXBTKGONGPIORHENKVUYOATRHSPFCXPYOJJWNCFYCRESMXVPQIXEVWOSFICKSFMOCMRNZHGHGVMMZBJEQNDWJJATKBUQBEXTNZRJKTRJCMVLMUUQEVLPYWJWRBZHVINAFTMEDEJCZKXFPIHQZYWLOESYALSXUQBFGWXUHLLH");
    msg.predicate.assign("YJTEHPDWBDHZJVDRKQEFT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZHRCBOVUPBWIUWBFUYHKXTYJOWLOYEJVBROXTTMUQMGPKRFLJTQBOOWUSXZVVXZQSNIHINYKLGZMXDPNHNENUTQTYHXNCEGHMIKJKIACXKWAGDCDNSXDYWSPAJRHMRYNVEUVHTDWGLCEB");
    tmp_msg_0.attr_type = 204U;
    tmp_msg_0.min.assign("CNWZZUWKTXVLSHLCXPNDASBKBTFHNTLLMQJQMFQEKJRPJHWVOHBMKNIZJFXYBRMSMDVHIDPEMAOJYXGBYUADVOVGUQRFPOTRNGELYEPZAGFZIQGWDMYAEWGOPLXLUPZMPIMEQDIWFTMZJNCBGCSRTSJWDSSDYXGIDNXOVRAHBUATEJAJHKHJBVGFHUCFQQQQONELBRINIKBVWSCURXCTHVIXUPSFYRFZLEANPCVWKKRCZOGAOYTCZSYUE");
    tmp_msg_0.max.assign("LGGPXIRQMSYWDRFNWYWVBYHXEIXTHSQOPNMIRYNYPXCFNOBYCVDNLKKHAQVSSPKMHEPMZOLQICCLKOXBNKDKCHMUFUVITEVRDOZBSTJXBPWDTJGGTZBAYGZNSFALOVJQJLOWJNTLDZAGRKRWBOZIYIBE");
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
    msg.setTimeStamp(0.8066833376161053);
    msg.setSource(35916U);
    msg.setSourceEntity(233U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("YGUOWVGUTSQCLKUIYMZUTKQMQWEQOGDQYJWAASXWFARJXG");
    msg.predicate.assign("FITKGFIXRJPXEJFQDNXCGJPDDKYZHIXEEG");

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
    msg.setTimeStamp(0.9747740177198413);
    msg.setSource(11492U);
    msg.setSourceEntity(253U);
    msg.setDestination(33440U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("LTSMNDVPAYKVSJWQDWLNUIDCDQXQTWOMVFLAPYFYRXEVNQVYYYUHBWYCOGKPRKWBNSCQEIPNHIGZAHJFROOGGLRVSUZOQUTCEHXQLOZHCCUVIPZTBLKPMYBUKSHZARJUFQMNEDEJCHUMBIG");
    msg.predicate.assign("MQEXMRBQVNXRXBXPQWIKNUMFOUEHJWZVHSBDNVIPFQMGJMHPIMQNYHJRCMRHLUGXNMKHKZALAQVKPBPOUXSEFRPDLSCFESZKLKLLGIHGVFKYDILZYJLVYMJJIFNP");

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
    msg.setTimeStamp(0.7408220350738038);
    msg.setSource(60142U);
    msg.setSourceEntity(92U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("SRVSAFVNOYMRQFABPMUZOLEQJZBJSJXUVYMUWYUAHXQSPTLK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TGBMPBLZBFMXRSXSYAIUZKXWRHRREUSYECPYFSVMVDUGEVTERJOHBVVFDPHLPWGFQHQMJCIKXVOVWNGSVUYZTYHWFCQCRMUYTOYEAWAJMMBSDWLCZAQKVNBOZHPKCAMJKFMRDUNIDRLFOTNGWTBUSKLLNWXI");
    tmp_msg_0.predicate.assign("DDJPKWCGEEEXJSUTZJWYGSAUWDMPTZBWVS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MACZWRHEBHCRGTMSQNFKQTAWZNJMAZMVUOKFOENXWGELOADSROSEBBUBPDSLDRYTTFBHYFFMJXSVHPGNXJILDREIZKPCOOGGGXZJKSDLCSSKIBQXURIHKPNNDWZ");
    tmp_tmp_msg_0_0.attr_type = 48U;
    tmp_tmp_msg_0_0.min.assign("AUTZPAMRMPLTHQVKHYGPRZOJQVCWJ");
    tmp_tmp_msg_0_0.max.assign("YADAXJGKFTOCSZJUSUPTGYUERHMVEJBSNRQWGZHOTNCJTWKYCWZDLPLREHIMTRIUJHJEFDXIELRGIFREOAPAUXZNLHHUBNAMUSLS");
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
    msg.setTimeStamp(0.3571479994742264);
    msg.setSource(35921U);
    msg.setSourceEntity(181U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(168U);
    msg.reactor.assign("UPMWMQZNAWVOSQPDEISEVVQNMFDNGZCMWROPEMZBTWFKPGIIHJZWRHAWCOIGJSTRCFFQJOZGPJGMNYBTORAAPOEEKQBNSBYLSQFKBCHNVLFIUYTCEAXZYUSWXFYNMDJKXFOUJORHTJKDLXWXCREOFXQIKVCLUQWTGSNHFVWYSAPIEIBEUXYLZMGIBBLDLKDYOZNBCCATMRU");

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
    msg.setTimeStamp(0.40002791153269723);
    msg.setSource(49388U);
    msg.setSourceEntity(137U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("MVDFRVQVNGYYYEZTKUNAYZEBUUSIPWUFLTKVVXCBJPPWRRBNCUSJGALQTOFYPLHPVGFBWFODDTIPRVQLKBJACMSLGI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BJMVXDLLWLAOFGHMDERJUXIGBEQQM");
    tmp_msg_0.predicate.assign("KXYDJFXTFNCPUNZHSWQDGAEGJXEFJFBMNMQJMLSGGIOHZBTOFUQDJIMZIIKTENQZKCMLRRNQTUYXANUOVMNIMYLRXMWXREVHEKWBNAOYFVBEVKTEIRXZCUJTIHHFPCPSLYOJEVKHPGYTDSDBIILUSCWODUZKGXQSZQWJKABMZAOFECPVSHDRXQQCZTMYGGAWVOTJRSVSYOCTRUXPPRGBAPCBDLNUABLAILQNHDWZLYFBRCUHPFSW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OJAROMBKNBUGLOPXBHCCRCXFXJSROKDIVVGGWAXTZJZVGRSZTPAMVQVNLEWDSVYVHHPLWKXEZKTHHVEGAHTMJBLJSGTLNONUISKYAQPBCCKOZTOCQOPIDQXVREIWUNGNFNAZMQKJCDIXMIDYEQYJRJBICUEYYAWZXMEGARFLSUUZGNSKVRX");
    tmp_tmp_msg_0_0.attr_type = 214U;
    tmp_tmp_msg_0_0.min.assign("WUNBLDVSWUPTKYIUQVQHVYBALJDRXXEIKNJIVLSJYXLRU");
    tmp_tmp_msg_0_0.max.assign("PQYVUDXKKUOMGAQSKQJGTC");
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
    msg.setTimeStamp(0.808534127337695);
    msg.setSource(32351U);
    msg.setSourceEntity(239U);
    msg.setDestination(19447U);
    msg.setDestinationEntity(67U);
    msg.topic.assign("WTEJRXBOWYOWXIYSYSZPYZJGIKOJUAJRZCGSSRGRMJBJTZIFHKHGTKFDUZNCATTISFSXLQPPKEXVYUGSSDGOVWZADLMJTEHWRQVZDRTEUBYRQDHSOKGUNDLIAKOVWFNVVIZNXXKXYLAZCMNPTMRAKBCJCYPFWQQMUJOLLAVFYQ");
    msg.data.assign("UVGGLLDQGDANMTWWFZOZWNZOKWCBZEYHXKDWKELGKUN");

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
    msg.setTimeStamp(0.9865375269346205);
    msg.setSource(37297U);
    msg.setSourceEntity(172U);
    msg.setDestination(33396U);
    msg.setDestinationEntity(216U);
    msg.topic.assign("IJFOILWLDQFGQIANSXRTGUSCYHYAQBUYUIVAPARMKVCDGVXGMUWPZLUJZRVKLHMNRWBJTHXSBFWBRMCPWISFIISGDPXOKONROYOXNQMNFECUHYKODJJGCKCSNLOOEQYGGETJHAJLMZKUVZUGQDPFTZPACJZWBDGAERJSXXNZAIIQTEXHSWZBQQTYVLWKMRA");
    msg.data.assign("MOKHKUZATBRFMPXNPPRCKMEZUGSVKEHEXEWUEYSCDQWCHIKLNUOEZZLATIGZQGARRLPEVGAF");

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
    msg.setTimeStamp(0.24990990185692774);
    msg.setSource(2364U);
    msg.setSourceEntity(139U);
    msg.setDestination(5673U);
    msg.setDestinationEntity(68U);
    msg.topic.assign("PCZVJQHYZKTFGZXOKSCQEGTWJLRPBZETDLCXLNWEUDSAQNSHMPILZGLTGHYKGIUOMNUEBTPJNMSOBXFVGJYIQYHQPEVPPGNVLLKAXFYVRCJOWUIJRELARGHHMUEABXZOJKMUABKCSREDUWIWVG");
    msg.data.assign("BIAWNCUIQWQWDVSMIWWSJBAIPZLOYLKMZUPRQSNJFOSXASMJXXMXFTCCNMHYCWKYCWVEBFWVCNETATYSQJHCXXRKSLSRRYOYBIIRNKTLQALPRBFJDHFGWUBBMHPDOKJDPGTGYRRAHFVIZFNDTKITBJR");

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
    msg.setTimeStamp(0.3400430435583466);
    msg.setSource(23248U);
    msg.setSourceEntity(253U);
    msg.setDestination(58435U);
    msg.setDestinationEntity(197U);
    msg.frameid = 69U;
    const signed char tmp_msg_0[] = {-31, -94, -16, -113, 38, -119, -15, 103, -9, -63, -117, 84, 63, -59, -105, 125, -96, 75, 126, -35, 89, -98, 86, 89, -11, 47, 65, -36, 38, 117, -37, -98, 47, -86, -9, 88, 120, -17, 121, 126, 92, 75, -33, 45, 68, -2, -14, -99, 65, -125, -49, 12, 73, 95, 17, 18, 31, -38, 29, -34, -37, 101, -112, 4, -100, -28, -98, 29, 89, 44, -103, -7, -61, 4, 34, -98, 84, 5, 1, -46, -95, -29, -102, -120, -86, 123, 100, 16, 72, 54, 38, -36, 71, -16, -70, -126, 125, -89, -39, 122, 90, -19, -25, -103, -120, 23, 20, 2, -58, 93, 104, -19, -52, -5, 79, 90, -102, -76, 19, 115, -69, -111, -71, -94, -104, -97, -20, -53, 76, -108, -93, 59, 76, 104, 55, -79, 27, 108, -100, -2, 126, -128, -55, -102, -80, 105, 13, 54, 102, -9, -1, -123, -67, 46, -68, 113, -16, 96, 66, -97, 122, 116, 81, 47, 71, -29, 15, -87, 51, 46, -102, -11, -99, 115, 126, 109};
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
    msg.setTimeStamp(0.5700172959561305);
    msg.setSource(24596U);
    msg.setSourceEntity(167U);
    msg.setDestination(23116U);
    msg.setDestinationEntity(167U);
    msg.frameid = 23U;
    const signed char tmp_msg_0[] = {50, -65, -27, -49, -44, -55, 3, -123, -48, -81, 87, -88, 91, -7, -61, 17, -87, 9, 111, -52, -13, -29, -106, -50, 120, 37, -82, -32, -82, -28, -45, -16, -2, 87, 14, 100, -116, -22, -40, 104, -6, 85, -114, 70, 73, 78, -53, 96, 102, -62, 18, 122, -42, 20, 0, -89, 92, 107, 43, -80, 53, 45, 125, -46, -49, 42, -91, -17, -35, 58, -101, 63, -90, 10, -85, -28, -118, 14, 100, 11, 15, 28, -27, -43, 117, 101, 6, 53, 95, 77, -72, -65, -107, -23, -14, 45, -57, -71, 68, 26, -48, -64, -114, -65, -75, 71, -1, -73, 95, 116, -39, -113, 116, 34, -59, 65, -50, -49, 53, 55, 51, -19, 84, 52, 112, -35, 62, 29, 58, 12, 44, -90, -66, 48, 12, -5, -47, -43, -4, -115, 91, 100, 8, 54, -116, 11, 0, 40, -5, 53, -124, -81, 8, 125, -25, 85, -40, 82, 49, 28, 23, 94, 86, -47, -52, -121, 90, 62, -99, -25, 88, 11, 0, 124, 125, -43, -45, -90, -123, 39, -94, -37, -16, -94, -52, -60, -93, -67, -54, 86, 30, 26, -33, 108, -125, 30, 110, -57, -88, -14, -34, -94, -55, -16, 104, 109, 41, -18, -116, -44, 97, 0, 3, 107, -47, 49, -16, -85, 50, 40, 35, 16, -79, -20};
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
    msg.setTimeStamp(0.2076517031656976);
    msg.setSource(22222U);
    msg.setSourceEntity(45U);
    msg.setDestination(40435U);
    msg.setDestinationEntity(152U);
    msg.frameid = 241U;
    const signed char tmp_msg_0[] = {66, -48, -103, 1, -89, 53, 40, -20, -36, -100, -81, -47, 58, 118, -119, 27, -119, -96, 80, -25, -50, 48, 51, -7, 99, 45, 68, -35, -33, -30, -96, 110, 39, -56, -39, 49, 41, -81, -63, 119, 73, 70, 83, -82, 9, 88, -45, -23, 125, 47, -39, 96, -121, 118, 7, -59, 23, 2, 20, -22, 84, -116, -75, 6, -128};
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
    msg.setTimeStamp(0.2354047706033089);
    msg.setSource(52725U);
    msg.setSourceEntity(0U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(177U);
    msg.fps = 99U;
    msg.quality = 139U;
    msg.reps = 236U;
    msg.tsize = 52U;

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
    msg.setTimeStamp(0.17753228643556718);
    msg.setSource(49266U);
    msg.setSourceEntity(4U);
    msg.setDestination(49171U);
    msg.setDestinationEntity(76U);
    msg.fps = 157U;
    msg.quality = 49U;
    msg.reps = 42U;
    msg.tsize = 105U;

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
    msg.setTimeStamp(0.34862388820004087);
    msg.setSource(5581U);
    msg.setSourceEntity(104U);
    msg.setDestination(14769U);
    msg.setDestinationEntity(232U);
    msg.fps = 113U;
    msg.quality = 188U;
    msg.reps = 209U;
    msg.tsize = 194U;

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
    msg.setTimeStamp(0.9689513272735205);
    msg.setSource(52960U);
    msg.setSourceEntity(196U);
    msg.setDestination(51205U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.6930978658045795;
    msg.lon = 0.4439016015547599;
    msg.depth = 80U;
    msg.speed = 0.24481427297196334;
    msg.psi = 0.6075287577503218;

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
    msg.setTimeStamp(0.966349607892269);
    msg.setSource(29991U);
    msg.setSourceEntity(175U);
    msg.setDestination(30748U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.674493363256339;
    msg.lon = 0.7062030777167617;
    msg.depth = 37U;
    msg.speed = 0.4986592814492914;
    msg.psi = 0.019784657942015893;

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
    msg.setTimeStamp(0.6991484332987151);
    msg.setSource(33948U);
    msg.setSourceEntity(16U);
    msg.setDestination(18847U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.5793365665612664;
    msg.lon = 0.3321350833923553;
    msg.depth = 38U;
    msg.speed = 0.1873114523584949;
    msg.psi = 0.9428418276118821;

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
    msg.setTimeStamp(0.8068200366579226);
    msg.setSource(15783U);
    msg.setSourceEntity(109U);
    msg.setDestination(4114U);
    msg.setDestinationEntity(132U);
    msg.label.assign("VSESKLWRKJMFUMCSZJZMGCTQJNYRW");
    msg.lat = 0.7045687083574718;
    msg.lon = 0.205752297954645;
    msg.z = 0.16332916432264943;
    msg.z_units = 92U;
    msg.cog = 0.9640930044158962;
    msg.sog = 0.9024887510389004;

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
    msg.setTimeStamp(0.7646187042444602);
    msg.setSource(33297U);
    msg.setSourceEntity(60U);
    msg.setDestination(51516U);
    msg.setDestinationEntity(241U);
    msg.label.assign("LCYZDXOUTOQYTEAJCWAJMGLAGVRDISKMIAKJBCWKRYVIZSHHROBYGCWAJOAJX");
    msg.lat = 0.7994443257710504;
    msg.lon = 0.7265571998777219;
    msg.z = 0.25161879528220854;
    msg.z_units = 91U;
    msg.cog = 0.5033275148073637;
    msg.sog = 0.5840976603958976;

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
    msg.setTimeStamp(0.09188645598893408);
    msg.setSource(10402U);
    msg.setSourceEntity(113U);
    msg.setDestination(64485U);
    msg.setDestinationEntity(4U);
    msg.label.assign("ANJQTSJNFLMMGSYAPWHDBFJCKFHWIJZRZGAIQOXTBGZSSZADZPOCMRQMWLUJKRQMDACCLDEHCUMZATPKLOSPHMXPYXWWBSLUNQCVRPXTBOCQIBDKKRYEXFLFHBTEVEGVJIGWJJXYTTVJNPENASDYYBFPBUKMXFHHCPUAYCEFKKLWHTVD");
    msg.lat = 0.8225585148907154;
    msg.lon = 0.8283329519306086;
    msg.z = 0.4034170687479388;
    msg.z_units = 226U;
    msg.cog = 0.5587501096921536;
    msg.sog = 0.021270075111482267;

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
    msg.setTimeStamp(0.8833990233857703);
    msg.setSource(43478U);
    msg.setSourceEntity(245U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(69U);
    msg.name.assign("DRTEXFBDTJXUZWLQZUMFYDKJCLIHJEHOQYONZRZMFRBPHLCVPXBIXNEVEFAUNQDEIQMSWGJKCACYTHXWQWKHRAACRDWGEVMHNRNPNXBMXQVTOLETSSFTDOPPJQRVCMCKTFTYKGLHUDYBIAHUYSEZABSGNBDSLWYJWGPZBGZILAIGZHVVHBTLPOAAMXIXFJFNNROCUWTUQLGBWOVEISGOMXEKOFFWORVSVKUKQMPY");
    msg.value.assign("CYSOATPGYLTKBUJEHFRIMITSXWRMJFCNENTKHNSPPFDDOBTIJLKTABSLUPGQFCLDYWTXQKWTIIDVSQSMCIIFJGIVTYZASXNDYVWEDVVVXXPSRBJRMEENMCOENHLSWMUVBHUETAQKZKZGDGPOBWWCLYSXEFGXQMVAUHBZKBCCNZFZDQICQUQJUUPPXEHFJZHFGJPLMOHRVCZUYKUKGABXORDHWNJ");

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
    msg.setTimeStamp(0.29152094403909046);
    msg.setSource(14548U);
    msg.setSourceEntity(133U);
    msg.setDestination(14272U);
    msg.setDestinationEntity(50U);
    msg.name.assign("EMLWSVCZJDYLNYEOLWUUVPDFIHPUFJKNGHTWPOGJMTEOGKHNYEFJVTMYEZ");
    msg.value.assign("KHYCIZAHQYMMVWXLHTWDHOSEXCGWDUMNRFYUIRKLSDZQHVZCOOURZYGJTEGWKVRBZPEBVBGKMADJNQGYZJNDCMRIOFTOUZNACTHSNNFPKDHXPUIEUCXWTIVEQGMOCIBHOSVYIJCAQFYRSUEQUWZDBALDBQDPLXYRKTSZLZLTEPEILFGYVJFJPRVOJFFLQCWKAPJEHGVEUTMQKBPJGYXABNMAIOLVXGRSAUMCSAF");

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
    msg.setTimeStamp(0.486652390962396);
    msg.setSource(57151U);
    msg.setSourceEntity(198U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(164U);
    msg.name.assign("EFWQVDGKLJJEVAFINVFJQPTKKSAVWBFI");
    msg.value.assign("MWJNGLYPJOUDORKQHMZVCBCDUDUJLQELEREMGBVYMBEBBHCILNSHSUAVPBZMEDSYAUVTCGINYAWIIHQKWYPMJUFDLXWHASYEKTTEPLJZENWXGMWSKJBQMKUAFDQGXTCTNXFTRAAPOSKNJXZKXUZZMIYOQFGFEFNLWJ");

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
    msg.setTimeStamp(0.9081361565336142);
    msg.setSource(7229U);
    msg.setSourceEntity(217U);
    msg.setDestination(53103U);
    msg.setDestinationEntity(210U);
    msg.name.assign("PYTQPHRVOBOXRXXBRVWYGNJFYJDIEMKXINOMDLLSCUHFGKBLDIZVLLQTXEZXQATPZDZMLAUVQHEOGBLQARDZWWBXRSUKDAAUUBYSPDSLSWFHBLBJIDECOGXBNFNXGJJRFGNMEHOSTEWQOVHYVIIUWQOGNESRIBSKVUWQZHKNVTAKAFOLVCZRTJPRMHHKNAMFFCEJYPFKKWZQPPJHCATICKGCPZQDJAFIEUYXPGDJZNTVSEYTSYIT");

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
    msg.setTimeStamp(0.8389799597028168);
    msg.setSource(47431U);
    msg.setSourceEntity(112U);
    msg.setDestination(57609U);
    msg.setDestinationEntity(202U);
    msg.name.assign("GSUCGLAYISLDLHJEEBATJZFBCPIQTLPLKIRGNONQHIOLUEWOFTMSDVNUWERWJAXDFFNAKZSLDIDPSKYTSGRPXQBRKVWYV");

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
    msg.setTimeStamp(0.4678036497498719);
    msg.setSource(33939U);
    msg.setSourceEntity(213U);
    msg.setDestination(44753U);
    msg.setDestinationEntity(56U);
    msg.name.assign("HAJLYTNDVAKKDIHONRSNIXQAAYXALZLABBYOTUWPRZLPGZMPBZULQUFRJIKXCPWWMYDQMDDSXJCEHKKIEZOLNXBCGIGCDWZNGYHIKQWCYDRUWTUEUPCTAFDEOGUFGKSMTSJXROVXDENWLOUVQRMAGQNYMEKIFTHFIHGBINRUZNSHKYZVVJUWOLNVLEBSRJSGMOCIMXVASHVVPKRWFSJVLCBHJFQQ");

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
    msg.setTimeStamp(0.9865181916751755);
    msg.setSource(41038U);
    msg.setSourceEntity(217U);
    msg.setDestination(10133U);
    msg.setDestinationEntity(231U);
    msg.name.assign("KFURZDXDWDJPXVRWREAJUTZEDQDOXMYCBTLUBCYZS");
    msg.visibility.assign("MAEJHEVNWNAFCOBNHOWLPJTBTAEQFOCXOXVPJJSOWFRWQOWKXFUTUGRPRGBKECXILLFQKPPKVAFZGYWRWYSISLFAPRJTIPHSSUKUDNUMCUVGNEBVYMUINBYQZCJWZCBUVHPTDLU");
    msg.scope.assign("HCROYSQOZUZTBKLDVUEXGNFGFMXYLWBUWTHOMMWEYQITBJZPZNQQSBXNKKCLATDKMEWXNUTEHVCTSHOOHVNPIKWFSPKUGWBDPRYAVWCBDMIMUGWLGQJSICRWJJESTSURGZBEAYDUVOEL");

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
    msg.setTimeStamp(0.7924640914100357);
    msg.setSource(11276U);
    msg.setSourceEntity(83U);
    msg.setDestination(46535U);
    msg.setDestinationEntity(244U);
    msg.name.assign("WOFGNOFFVRVLVBTTVVHTDEAXGZQSDSQBWLXWKHOUMMFRRDSZAZITBZCGKKUMUFIVIILHFIPWEVRDQXQHNDLPSCJGACENYXMPZTIBQRCKNTUESLXJELEPXMNNBQUOYTRESVBGYLINBMNQPGSKFRIKWDHOSUVPWDXHAHLJJGISSKUXOWJEOJEEDCKCAYNHAPDPVATWCJMUAZJBRFXQ");
    msg.visibility.assign("FSKGYKZGWOTRTKLVLESCJFBVSJZRLLFAHNDVHWPNZVTQXNQILHANAREVWHEYXSSULSEFQUUDOTLDNGBJMZCAXLDYYJUAJCAOSVJJENHAZQGDWFXZXGCJCMBMTWGLWOUFDPIAZHEHUVRIMMXMIYKRRRJPQCAYRKDXTUOMVHKCJOTBQTQKVMHCVYGQB");
    msg.scope.assign("XQOCTFLRQFYUWEEOGLTKSVM");

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
    msg.setTimeStamp(0.7790835814124003);
    msg.setSource(44966U);
    msg.setSourceEntity(27U);
    msg.setDestination(16905U);
    msg.setDestinationEntity(83U);
    msg.name.assign("RNPQXTRIWMRJBQINESOQNHFPOHSFVKYWXEDQWEZSICBVOXOCWZTKHQPKVDCTTDTAGPNCFYJWUUFYBQDMUWRGMMAVLRFUBCMXMHUMLISSGULLJSIGKADWECKUIODEBEKDCQEQNYNVZTJZACYJLLFGOPTALLAAERHWFLZHZHZGSQZRERTPIPUDYXYUPKVJCFKSXIGONXMNSFAOIDPQKKXPRIAHNTBFHVHJCWOYX");
    msg.visibility.assign("CBYHDDSIIRVQQVXFLOMDZSPURENIYRMKICADYZAUVGUMCYHXFYJSPTVIZQWBKLLBLIUVUCZTCWELYEXNDMVETBWHOSRGKEHFKSZSEYZSJWAETRDBNPVXJHZZCGGGLKPWFGAZQAVPWBPLEXSUHKQPAYTLCFBRRHTTYOGKOUEQUCRMLTOVVSHCFMGMRA");
    msg.scope.assign("AHDFLEZRKEKVTLNXPWXHYBWOQSYUAHGINUYVMBBOPSPIOQSGKYLPLCTBZPOEEXPNAQYQMDARZOKFCFKVJEWBZFWNBXVCRWVXERDWYMMAMCMALKEDIUUTAASCIUCJALRCKRYJCNEYVSPHOUUXDVZFMXWFZWQAOGQRJIHIYNMHNNFNYKXITOLTFCBLTXNHPPSTPBKHEZQQSGRBZVVJVUFQRTSSHGIKJZGRDFZTJOBTSHWGEIIMGJLUUGMD");

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
    msg.setTimeStamp(0.4958432486151776);
    msg.setSource(39718U);
    msg.setSourceEntity(181U);
    msg.setDestination(55575U);
    msg.setDestinationEntity(43U);
    msg.name.assign("UCLCWLONORBHDGHIZDULBYPZFTYVJSEHMWSYULBRAKBJJQLDLSJZMCNRKTYFFAXVSGUVBKKKFGHKZUOPVBIUTVSEJADTMZSQEWYLVQSTTDFJWJHQQZEXBICMGBQRDMWTNZGOIRQXBKQYRGZXQNEJXGNFPXNOHDCNIESMCEORY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CYSBEIASSMZNRKEYKJPROSJAFSARECIAJBFEUSVMHGFCQRBOQYKKEQZLQCSGPBAKOJZMTKBVZUEJQMLSTGEXFVIYLDCUMFOJIPPLPSUDNRGLXVANVKPUQXPRGDHQGYTZYXVUNOQD");
    tmp_msg_0.value.assign("LOGPUIZUFUVPPLSHHRHNSEKAHDJMFGWAJCSSJBWZDIHUKIEYANMBSBPMYAYSBZGGXUEOMRPIJBZEDWEWOGIAOLKYCGKDEJDQXIRNSYPOTOPMJZQEUONPNMKZIJQZEIVRVWZPXQILVKTOTRLCLNHHKNCFZDKUXAGFRUCAPATWLFVXLTWOFNRUDAWQFTVYADZTXHBOFFRUXCY");
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
    msg.setTimeStamp(0.24041730482895696);
    msg.setSource(17774U);
    msg.setSourceEntity(170U);
    msg.setDestination(24651U);
    msg.setDestinationEntity(178U);
    msg.name.assign("ONSIYFFZJVZFXCPPALTZIXFWAENEDQLGYHHQKIYEPFCHLMMTXBXNZMPJKVKXEVEYMGGZDIKXIWKCTTWJNCCYDCDJRIOAQAIWWKXIMWRPZFDOEDUCBUATSJOWSSDBNMTVOFEIUNTABCCLXIEWDBZMESPSARJYUHYBMQVYEWAUUAGNZRRWLVVLYAJJFSLGCSBPTJOMQRNBPUDZNTYBHP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QUIJRKXQXZIRTEBSBVSEHATDUSZMBVCAMNSXTGFQXBEWLPCDFHNJWWTGITVJLGPQHHANECYLIDAMNLUVILVPZPKFDDRLRUTVJCNEGGOUMIJQUNVJYPPOMSNBSQTGSNWAXEFCPXRTIIMZCOAWEUZAOHBAKYQZFCMBM");
    tmp_msg_0.value.assign("NRDXXNXMCVUKADMOVRDLHDTUYPOIETPXZUHSWAGXOZVJJNCTNHCXYIYIYWTZNEKOEWPQJMEGA");
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
    msg.setTimeStamp(0.3541406782758416);
    msg.setSource(20858U);
    msg.setSourceEntity(247U);
    msg.setDestination(19827U);
    msg.setDestinationEntity(66U);
    msg.name.assign("PEOUHEFCHBYOWCRNPMWSFLSPRWTSGZZFDIWDXZZVCTEQIKUEKNDBJUDMDDWVNAHWZIKCCRPUEMPRCNALTPIEAKGQRPIEXIKRHOYBFLWTVLYQXQIAYFOOZHTTZYBFGXYUAHQCJMJHNOFSRMBJAXXQVBXSFBKVCT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZGYTKRZEJMGIORMKMOBSUCQUVOVSSIXLPOUIVEBPNNQXXOCWQHCDGWZQLUEIJVYGFHWLZTBZLTLFSSIBNSEIQNRFMWBNXDTWUDSYHHKUCQTVATPYBSMJAGJVFEGMNCATKWASEDLHKDKQMLWANCMTHOQNXKBKXAGPKCGRIEZYDJINPIVPOALXHVGJSYIFUUHWPWRPJBRCJYRFZULYQAWDOEFZMN");
    tmp_msg_0.value.assign("NUBRFZOJXBLLBFNKMKVZWCLESDMABEKLQDCISSOLKRLFAREDPAVUYDMGMBVZIZZCRPRW");
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
    msg.setTimeStamp(0.7212882696675815);
    msg.setSource(60769U);
    msg.setSourceEntity(13U);
    msg.setDestination(52162U);
    msg.setDestinationEntity(178U);
    msg.name.assign("OFVLSQLBKPZJXFQEGSMUZRXRNFFSAVOOIHTPEZZMPGOVGNQAGOHXMECDHTTCOUPYUZLANOBCILPRGPCDRTQXYRSUVXFKIMDYQDOFJNRMLOHYEXTE");

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
    msg.setTimeStamp(0.8002955272424761);
    msg.setSource(30943U);
    msg.setSourceEntity(105U);
    msg.setDestination(262U);
    msg.setDestinationEntity(153U);
    msg.name.assign("TYDKUZHJMSMIHIJWGDTFYCMRGGVPQNWYOQBYPBTMLAKUMYKNQQUSMRTPUICHFYZYVCFLXSKZQVFLLQBZNUOLGJFPBKDTEQQHGMJAZNXRCDAOQGZDLXSDROCPSNXZPPZWHGIWWAUYEDYRTIHADROULWVOOBXZOUJTXOCCEPEINZNATIVEJHABKXRLFILSFSH");

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
    msg.setTimeStamp(0.8839182665532572);
    msg.setSource(55089U);
    msg.setSourceEntity(6U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(196U);
    msg.name.assign("QPBMQSHFQVRPYNHBRNBAQZONAPTMFGEUIMLYFTWTMMZVULCAJNAEWKZGKOQAQABTQKKRPIJLOFGDROGULEGSEIMFKVZOVPEEXJSDSCNYMHVTSFXHYSTNVJZTHNUQWZUNRHEBBXLDYDCHHPYURWARWIETCIQKIIPZWDZBS");

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
    msg.setTimeStamp(0.6661720404224508);
    msg.setSource(38662U);
    msg.setSourceEntity(159U);
    msg.setDestination(43231U);
    msg.setDestinationEntity(76U);
    msg.timeout = 1536374317U;

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
    msg.setTimeStamp(0.29901629100542537);
    msg.setSource(55190U);
    msg.setSourceEntity(72U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(121U);
    msg.timeout = 1922611142U;

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
    msg.setTimeStamp(0.1853822872332117);
    msg.setSource(59796U);
    msg.setSourceEntity(101U);
    msg.setDestination(52704U);
    msg.setDestinationEntity(45U);
    msg.timeout = 1778878799U;

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
    msg.setTimeStamp(0.8157440903861213);
    msg.setSource(63307U);
    msg.setSourceEntity(173U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(12U);
    msg.sessid = 510212641U;

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
    msg.setTimeStamp(0.9109189713626842);
    msg.setSource(41404U);
    msg.setSourceEntity(21U);
    msg.setDestination(2485U);
    msg.setDestinationEntity(9U);
    msg.sessid = 1751950574U;

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
    msg.setTimeStamp(0.6175893220570213);
    msg.setSource(11408U);
    msg.setSourceEntity(182U);
    msg.setDestination(29689U);
    msg.setDestinationEntity(44U);
    msg.sessid = 4000753831U;

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
    msg.setTimeStamp(0.8573732725536047);
    msg.setSource(7138U);
    msg.setSourceEntity(164U);
    msg.setDestination(50621U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1540136582U;
    msg.messages.assign("NUZXWVSMSZTSERMTIHYKUISNATWLUMYFBTROWEXEVSVLBHPVHPQCJDAGQCMXRQYHLMPNUFBZNXBBCGQHIVFAPEWJEYUWFJGUIJIZDQIQIMKOAANHZKUGJELRYXQJEOMDNXHCZWBFTEGXYVQEWXJJRSNPRXZRGFYCHINUBRXPTREFZUOCVOKNKTLKPSZWFKBA");

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
    msg.setTimeStamp(0.5235129958511101);
    msg.setSource(42165U);
    msg.setSourceEntity(222U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(240U);
    msg.sessid = 2090660920U;
    msg.messages.assign("FLOTAHDMGPCBOP");

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
    msg.setTimeStamp(0.5475104329817976);
    msg.setSource(25504U);
    msg.setSourceEntity(253U);
    msg.setDestination(15902U);
    msg.setDestinationEntity(28U);
    msg.sessid = 1582338410U;
    msg.messages.assign("OTAWHUQVXGIWPNDYQBZJFEKDDTYDCSZGQQPDNIGAHPNHMOGKQXRFTUIFLGFKXZPYZWEXDWSUIEANLJBPODOIEHRCMMCIKLAMNUOVNGHBEVWACBYIXVSLQMTZBYAYRZGRMKSKFLQMLUNZIHUJATTSRRPAJSOJKWVBYFBCJCFTXBLJVEHHXUMSQPBBXDQFSWAENKCZUZRMPDCL");

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
    msg.setTimeStamp(0.48261194287254683);
    msg.setSource(16900U);
    msg.setSourceEntity(137U);
    msg.setDestination(52616U);
    msg.setDestinationEntity(113U);
    msg.sessid = 1605899910U;

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
    msg.setTimeStamp(0.45897254591626346);
    msg.setSource(38471U);
    msg.setSourceEntity(30U);
    msg.setDestination(39843U);
    msg.setDestinationEntity(198U);
    msg.sessid = 3854908135U;

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
    msg.setTimeStamp(0.0757742221873926);
    msg.setSource(24079U);
    msg.setSourceEntity(234U);
    msg.setDestination(45184U);
    msg.setDestinationEntity(149U);
    msg.sessid = 1864691039U;

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
    msg.setTimeStamp(0.19550887505853287);
    msg.setSource(48752U);
    msg.setSourceEntity(60U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(24U);
    msg.sessid = 2887196475U;
    msg.status = 61U;

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
    msg.setTimeStamp(0.7461483173880981);
    msg.setSource(41518U);
    msg.setSourceEntity(14U);
    msg.setDestination(49228U);
    msg.setDestinationEntity(224U);
    msg.sessid = 1385873983U;
    msg.status = 153U;

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
    msg.setTimeStamp(0.8639818166437038);
    msg.setSource(24482U);
    msg.setSourceEntity(242U);
    msg.setDestination(62905U);
    msg.setDestinationEntity(146U);
    msg.sessid = 1966904430U;
    msg.status = 79U;

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
    msg.setTimeStamp(0.5900580443812857);
    msg.setSource(16899U);
    msg.setSourceEntity(85U);
    msg.setDestination(34460U);
    msg.setDestinationEntity(100U);
    msg.name.assign("JLQFPRQWVWHDAWWCYYYAKHQTSEFKFMCROHCMKXRDNNXZMHLVFUWLQGBCLGUZ");

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
    msg.setTimeStamp(0.38789824941021034);
    msg.setSource(19235U);
    msg.setSourceEntity(207U);
    msg.setDestination(62251U);
    msg.setDestinationEntity(210U);
    msg.name.assign("OWJWLERJBZWBHTZLFUPNTRQVMWGUOAFZQVI");

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
    msg.setTimeStamp(0.5443073404863761);
    msg.setSource(48327U);
    msg.setSourceEntity(182U);
    msg.setDestination(9231U);
    msg.setDestinationEntity(84U);
    msg.name.assign("YXGTMZZHAPIJCDGOQQXKOJWZOIS");

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
    msg.setTimeStamp(0.7570624167940098);
    msg.setSource(30328U);
    msg.setSourceEntity(163U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(76U);
    msg.name.assign("DXGYLBMYJTWJTNQDMIMNCEKDHGXWJFBCQMPPPVRWITANJXAZOJURSJSMASQNUJQFMRIOHDARORSMBFSMHCS");

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
    msg.setTimeStamp(0.3502198958102396);
    msg.setSource(57924U);
    msg.setSourceEntity(118U);
    msg.setDestination(56655U);
    msg.setDestinationEntity(124U);
    msg.name.assign("MPVXOTKPRGVMZVYEWAMLQRXPWSJRURTUEOACEEQMNGYWTZURYRHIGUOASINBVJDJAELBEVOQHSKBBPUBXGYAYDTPQTUZHFLUZIJTNBFINSIRITAEZLZWBMMFXNHKWNH");

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
    msg.setTimeStamp(0.03219884177273402);
    msg.setSource(14324U);
    msg.setSourceEntity(212U);
    msg.setDestination(18015U);
    msg.setDestinationEntity(254U);
    msg.name.assign("CKTEDJKURTVKNIRALQLXXMBBYWZDKSZOBQCGGEDARYBVQQFGVSYWJIFVHOJOPTXDEYIINKUEJDFDIULQCBPUQULSZHMOWCZNFDTVSAPYXOZOZI");

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
    msg.setTimeStamp(0.06821296502851792);
    msg.setSource(36909U);
    msg.setSourceEntity(72U);
    msg.setDestination(25505U);
    msg.setDestinationEntity(129U);
    msg.type = 181U;
    msg.error.assign("CDINSHKVHXMDMKLFPAOJWILRILTHHZVTAIFLUEIMJTBTZBEQBGOSJJCTIVWRGEVRRWBBZVSDCXHDTADFBZZCAQEWYKNYCFOSFOLSMXQMOEZUWZCYKONNCGKFQXSCHAMMDPUSWSFUJPGWDXLQXRUEKZQLAQJAOFRJQOGYVPBHDRPIULMUGAINHTKBHWOFBJELUXW");

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
    msg.setTimeStamp(0.18513769231280308);
    msg.setSource(63905U);
    msg.setSourceEntity(23U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(7U);
    msg.type = 38U;
    msg.error.assign("EYIFSSKSOHNSRTCBKMYAXALWRLBIDDJBDXLRMIVUQDTXCYBCXMQPIKFEKZELIMVRMJDVTOKRULYOFMHLOGVXHZVNJDUVJVHGOGHMJIOAHFAGZUCUJWHEPPSGASOKQOLPAWCNVNJXMSOEBAZWKLAIYKXLDQVPWCUTNTRRSRBUSUWJYEYCMUZDFDLQHRXIFNFBZQZZINCPYTQWWFUYPTIEXWOBQQPJTBKGH");

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
    msg.setTimeStamp(0.5584622713911641);
    msg.setSource(49052U);
    msg.setSourceEntity(14U);
    msg.setDestination(16317U);
    msg.setDestinationEntity(64U);
    msg.type = 90U;
    msg.error.assign("NIUNYXWUOKRTZKAHIPURVQPTKNKUGKDQUCIQRAPWJMJVYTKFAQFDMYXSEXPYRGLRQXTWPQUONZBGHZFDBJE");

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
    msg.setTimeStamp(0.09812586227321107);
    msg.setSource(14226U);
    msg.setSourceEntity(3U);
    msg.setDestination(6419U);
    msg.setDestinationEntity(220U);
    msg.seq = 51658U;
    msg.sys_dst.assign("ZIFWNSRCLCRKWWZFPCL");
    msg.flags = 202U;
    const signed char tmp_msg_0[] = {77, 48, 47, -45, 56, -124, -27, 110, 85, 32, 42, 119, -11, 54, 108, -118, 32, 125, -11, 110, -60, -35, 104, -35, 34, -125, 42, -73, 4, -54, 26, 109, 8, 6, 20, -120, 47, -68, -4, -79, 36, -33, 101, -30, -10, 84, 98, 57, -121, 120, 56, -89, -63, 66, -47, 113, -88, -71, 16, 25, -22, -123, -63, 101, -61, -125, 64, -42, 63, -3, 20, -14, -3, -18, 122, -113, 109, 97, -2, 28, -63, -15, 104, -69, 81, -2, -114, -30, -31, -88, 59, -98, 123, 108, 111, -45, 76, -85, -37, -54, 15, -103, 39, -31, -100, -4, -3, -45, 98, 119, 78, 97, -80, 67, -97, 95, -5, -6, 52, -29, 94, 116, -60, -128, -84, -9, -15, 27, -114, 112, -88, -57, -20, 45, 9, -53, 102, 115, 43, 103, -6, 7, 126, 78, 18, 80, 34, 42, -88, -83, -8, -40, 34, -128, 122, 109, 75, -43, 79, -23, 28, 117, 101, -39, 35, -17, -11, 36, 114, 119, -78, 90, -27, -45, -57, 75, -6, 30, -13, 74, -89, 68, -84, 85, -21, 52, -126, 63, -5, -10, 64, 20, -108, 124, 111, 43, -37};
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
    msg.setTimeStamp(0.680689829665368);
    msg.setSource(1262U);
    msg.setSourceEntity(254U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(122U);
    msg.seq = 43711U;
    msg.sys_dst.assign("BCITPCXEEDTQGSXNSNJBWRRAHSUKHLPBQAZLFKVSCNIXIKYNEZOROSJLUAGHXNCIWZMTZRYFRCFOFEQXFLFFSKPJKHVJJTWRATQZLJTYSUFHEUPDBAXTIMIUJDUCGWZVXGYSMYPZMJGXMUVHAXGJIE");
    msg.flags = 98U;
    const signed char tmp_msg_0[] = {-48, -70, -127, -86, 36, -121, 13, -116, -62, -67, 51, 79, -118, -127, -111, 53, 53, 80, -15, -111, -128, -57, -95, 61, -39, 57, 9, -57, 79, -82, -89, -60, 102, -88, -15, -22, -45, 16, -75, -68, 2, -62, -17, -125, 38, 91, -93, 62, 88, 111, 48, 89, -85, 116, -32, -12, -58, 54, 83, 47, -125, -82, 65, 122, 75, 103, 122, 117, -29, 65, -15, 89, 70, -94, -81, -24, 80, -97, -73, 53, -94, 1, 66, 42, 105, 117, -38, 8, -31, 9, 111, -11, -64, 48, 27, -87, -32, -28, -58, -36, -104, -1, -58, -28, -103, 120, -36, -28, -15, 120, 96, 90, 93, -70, 3, -104, -61, 10, 63, -68, -84, 82, -89, 126, -97, -91, -77, 118};
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
    msg.setTimeStamp(0.33600066945403195);
    msg.setSource(62006U);
    msg.setSourceEntity(197U);
    msg.setDestination(33376U);
    msg.setDestinationEntity(22U);
    msg.seq = 17U;
    msg.sys_dst.assign("EMWTHZXHRXBONCIZONVKMXERNPQBLMPHNBQNOBMHYIPGMFJCPOCGXVQTFFGYSLFPKVLQJXUJKZRPBRJKEFCDKAKBKOLBBXSDWNSGDDTCFAZUOTGXYZWHWMZXIKHAVVNRFHOPUAEMNUOUYUQQWLRZCTATTLSDBBVACFQDTQYWTUSXAMPPWRGVKDWRDYNLVEISUVONGIYKEAYYIGJHAXHLSGIZLUWAWQIESDMMJJEZJUFCJHRYEESITPO");
    msg.flags = 168U;
    const signed char tmp_msg_0[] = {-103, -84, 27, 92, 68, 81, -36, -40, -12, 120, 90, 34, 126, 77, 72, -5, 9, 38, -36, 102, -42, -30, 100, -81, -56, 51, 25, 108, 80, -47, -16, -18, -7, 23, 53, 106, -109, -30, 123, -31, -35, -108, -119, 80, -1, 115, 4, 23, -13, 117, 20, -35, -53, 58, -80, -92, -48, -5, 58, 94, -101, 4, -75, 79, 53, 15, -121, -27, -123, 89, 103, 93};
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
    msg.setTimeStamp(0.8516144795720649);
    msg.setSource(3107U);
    msg.setSourceEntity(121U);
    msg.setDestination(54764U);
    msg.setDestinationEntity(229U);
    msg.sys_src.assign("GYSTCTTXMFIJOKNDPFKDCEQCFWKMROCZZBWXVJPEAULKIBQXDQWIHOJVXAKPKIBHTGNZARKGWLMVKOWCHHSXLVQSOWWQUAVFYAIQEGGRLLTNDUKCEUJ");
    msg.sys_dst.assign("BMUGBEJYFTTDBULJZNIALAVEKWHUXYPOJDB");
    msg.flags = 150U;
    const signed char tmp_msg_0[] = {82, -16, 62, 36, -67, 1, -113, 105, 7, 90, 38, -87, 21, -124, 15, -31, -112, 88, 8, 83, 92, 108, -6, 11, 76, 111, -9, -121, -85, -14, -50, -76, -16, -21, -80, 88, 72, -86, 119, -122, 30, 73, 12};
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
    msg.setTimeStamp(0.6330215904978288);
    msg.setSource(47756U);
    msg.setSourceEntity(48U);
    msg.setDestination(6429U);
    msg.setDestinationEntity(113U);
    msg.sys_src.assign("TEQMYAWKYAKEGTEFFVNIZXRPCUBIUJBCUAHTRGXUBXLWZFJHWJTZVWJUBDYUZOLDUTKMNZYCIKPWJEFKVIHRJLGSJPCMNWRXDLQGQGSSTANAZGIGBMRJPNVBSSZLVSTSNMJVMFCUYWUYAOPNDROZMBEPBDOWLCTKXYMPEYRNEII");
    msg.sys_dst.assign("KEZQTOYUUEQDNHXTENSYMXSXEWTOXCFATODGIAJRZVOUBRAEMIBCQZJJJKVSILATEFVMZCGVTOHZACIPDFUCNBTRVJSLHSWGGVWHHHRZLGZFXUSWLCYUYJQ");
    msg.flags = 37U;
    const signed char tmp_msg_0[] = {12, -33, 47, -58, 87, 41, -15, -124, -54, 90, -50, 48, -70, -54, 61, 69, -64, -11, -72, 78, -1, -122, -63, -60, 118, -35, -68, 16, -43, -82, 57, 36, 38, -98, -116, 89, 105, -48, 50, 50, 8, -118, -59, -35, 108, 115, -41, -108, -39, -128, 22, 53, -10, 113, -91, 57, 29, -51, 122, -76, -11, 94, 17, -14, -109, 64, 107, -79, 103, -32, 0, -50, 98, -55, -127, 92, -45, -12, -69, -42, 117, -35, -6, -104, 66, -3, 17, -123, -35, 62, -22, -56, -124, 44, -32, -47, -8, -68, 122, -85, -94, -26, 52, 42, 110, 117, 26, -47, 26, 87};
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
    msg.setTimeStamp(0.2827672956757369);
    msg.setSource(60442U);
    msg.setSourceEntity(149U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(58U);
    msg.sys_src.assign("PPRJOXKBAHVCPJSTOTKOTAMESLEXLCHVYGTKAWDZQDJLOAZCSSAPOFNMWVCVUQMJNKVNFXBUKIBEQIJDDVZKYBQSDRNWIETBQCXBQJWPMMDVKRIQGCOZHTFHNYTXHSEFEDTDYZUIXCMGZNJCNVPIXPILHGZASFLWYPVYUKEZGHSFKRRRRKUWXFDLORGMUWJPBQBWDCLARIEEOCHFHFOANMBVGGJHNWTYFURYJUXGZB");
    msg.sys_dst.assign("PIMGYXXSFDPHWKQQGPJHGTMSDTBWCZKWDZENUVJDKBLVCVAIOZPQERPXOCPOKUCUENOJSCHITKCBBVKWZTMJBXZQJNSPBVLYFZQXUGUMYTLFUTSZQBEMFWOXRHELNSGUMRERKIYAMFTRVROWCAAGJWKCHHOLZLIFJODYSOR");
    msg.flags = 175U;
    const signed char tmp_msg_0[] = {-41, 73, 6, -22, -117, 49, 21, -3, 124, 84, -50, 48, -4, 33, 122, 40, -123, 91, -96, 21, 111, 58, 98, -118, 105, 15, -122, -49, -118, 24, 78, 16, -105, 111, 70, -96, -79, -108, -84, 123, -128, 101, -7, 47, -19, 30, -63, 125, 14, 43, -113, 86, -71, 1, -107, 80, -64, 98, 83, 0, 82, 36, 118, 62, 50, -72, 34, -86, -60, -6, -62, -101, 23, 35, 97, 123, 56, -13, 4, -56, -8, 2, 22, 34, -121, -68, -93, -125, -85, -57, -96, 76, -34, 55, -45, -2, 84, -2, 89, -98, -114, -50, -86, 78, 104, -90, -37, 57, 70, 20, -15, 121, 44, 58, 103, 30, -43, -13, -91, -24, 72, -32, 74, -15, -21, 9, -13, 35, -116, -30, -44, 59, 109, -80, 126, -110, 61, -44, 95, -124, -38, -27, 106, -72, -62, 23, 68, -62, 39, -42, 120, -88, 70, -25, -123, -4, -32, 41, -56, 104, -82, 56, -20, 108, 80, -86, 55, 54, -111, 103, -75, 7, 34, -74, 69, 1, 67, -122, 90, 4, -81, 88, 7, -95, -52, 42, 118, -62, -120, 52, -51, -17, 111, -69, 122, -3, 79, 75, -100, -34, -102, 94, 111, 105, 40, 20, 93, -11, -103, -89, -33, 46, 82, 19, -84, -115, 112, -39, 68, 6, 0, -123, 22, -120, 57, 24, -1, 49, 61, 73, -20, -110, -116, 118, 33, 36, -106, 45, -11, -97, -119, 21, 123, 48, -126, -44, 57, 119, -61, -105, 46, -71, 20};
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
    msg.setTimeStamp(0.589846988553241);
    msg.setSource(34814U);
    msg.setSourceEntity(116U);
    msg.setDestination(63141U);
    msg.setDestinationEntity(158U);
    msg.seq = 6754U;
    msg.value = 158U;
    msg.error.assign("FGHVOVPROFVTRYEYKJHPDLNQNKKWPGJJXFTBXSHWEXYUZHDMTZIZOCHUAVQERSJWDMQZIDPLXZITRKOKKAAOGYIOFQWMXF");

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
    msg.setTimeStamp(0.44781714688971175);
    msg.setSource(28565U);
    msg.setSourceEntity(22U);
    msg.setDestination(8026U);
    msg.setDestinationEntity(150U);
    msg.seq = 62109U;
    msg.value = 58U;
    msg.error.assign("OXIIDQZGFQYPFCYQADZYEXETVJWAYMDTPJDCCLBXCDDQSHGNYROIUSERKXASBERZKOOHBMSWNEVGO");

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
    msg.setTimeStamp(0.01285115925044189);
    msg.setSource(37118U);
    msg.setSourceEntity(233U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(119U);
    msg.seq = 4642U;
    msg.value = 56U;
    msg.error.assign("VOBXZRGXDYSPHNAJDLJAREOQOMLYSBQIVAESXHFZKRYIFXQJFUEKRFWMEUOOMDFJHCBPAMWDVITQTUUTBRSTIJUATIRZVCJFPJBDITDITPKLMC");

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
    msg.setTimeStamp(0.38684597115584807);
    msg.setSource(33942U);
    msg.setSourceEntity(68U);
    msg.setDestination(49771U);
    msg.setDestinationEntity(210U);
    msg.seq = 44605U;
    msg.sys.assign("SKPSXEYKLANOGTJFCPUVMRFPKPQYPW");
    msg.value = 0.3316619931732556;

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
    msg.setTimeStamp(0.8099089703427168);
    msg.setSource(47420U);
    msg.setSourceEntity(153U);
    msg.setDestination(24870U);
    msg.setDestinationEntity(105U);
    msg.seq = 34765U;
    msg.sys.assign("URZYZWSCPPRTWQTOORKK");
    msg.value = 0.8822878308862244;

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
    msg.setTimeStamp(0.02907393703563521);
    msg.setSource(18852U);
    msg.setSourceEntity(223U);
    msg.setDestination(15420U);
    msg.setDestinationEntity(163U);
    msg.seq = 23455U;
    msg.sys.assign("TWXYIMAHKWQQHPYXFVQRSKOORGXSCD");
    msg.value = 0.052218443854102126;

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
    msg.setTimeStamp(0.1807574592271176);
    msg.setSource(34734U);
    msg.setSourceEntity(93U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(144U);
    msg.seq = 59332U;
    msg.sys_dst.assign("LFMVOWGFISSGUQKOXVKAUKNRRBWAHJKOCCPJHGVJYVLCEONLZEBQLDVTBFKCBUWMPEUDJSSPYCXHKUCRGAGKMNQTFHKMTPCTEWSIBNLYDWEDVFMHQMCYYTMXURDGJGBUPEMZAZOEJYNVLZVUIXLHATRNWXNGADOTHFYXSCZTOKLJNFPIARMDSRXXFWABOVUYTFPWYSZVPQSIXE");
    msg.timeout = 0.7806770663657853;

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
    msg.setTimeStamp(0.25471791240378305);
    msg.setSource(39563U);
    msg.setSourceEntity(140U);
    msg.setDestination(48264U);
    msg.setDestinationEntity(146U);
    msg.seq = 369U;
    msg.sys_dst.assign("SXIRNZQRNQTWFVPMUSQMADQCMIKCYDFQHVUUOMJTRRDVGXCLDUKLBNHJWMSOMAPCPALKKISKDDSNGTFQWQRPXXCAPLBROHKEVGOFNXJJUOHIUDIYVITDAFXESLQYOBWJZPDXGHVFBSJCUJRHIXEYZHMRARBLJBTFGYALAKFYLEZKIQTWPVCKMWHSSCUGXBWSEPPYOVIJGGGONYETZUIJTEXPLCBHDZNHWMYZVENWOBGEQT");
    msg.timeout = 0.9929202015154248;

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
    msg.setTimeStamp(0.9928280780923804);
    msg.setSource(44302U);
    msg.setSourceEntity(109U);
    msg.setDestination(45693U);
    msg.setDestinationEntity(32U);
    msg.seq = 63791U;
    msg.sys_dst.assign("IYWRYHONGCVIPBVEWFVSIUJCLFZZNKIXBXDGHMPWLQDUBFEOTBTJRAYPUMGKQQBJXFPWSLHDOSZYBLEVLKGXSWCFGVJB");
    msg.timeout = 0.44876904901379544;

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
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.6179486903026516);
    msg.setSource(37980U);
    msg.setSourceEntity(121U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(130U);
    msg.seq = 60706U;
    msg.op = 61U;
    msg.baseline_flags = 251U;
    msg.time = 0.2539570782847509;
    msg.class_user_id = 25U;
    msg.application_type = 3U;
    const signed char tmp_msg_0[] = {84, 59, 33, -116, 86, 81, 54, -119, -18, -48, 106, 12, 104, -20, -62, -124, -25, -27, -82, 29, 45, 25, 2, 118, 19, -102, 121, 68, -104, -98, 112, -100, 114, -102, -97, 118, -6, -64, -36, -49, -114, -120, -100, 67, 70, 18, 103, 77, -119, -40, -99, 11, 122, 64, -89, 36, 35, -38, -96, -48, 36, -58, -32, -56, 54, -105, 73, 109, -106, -2, 126, 24, -127, 30, 87, -8, -107, -100, 125, -15, -60, 110, -5, -5, 58, -28, -56, 1, -10, -113, -91, -78, 88, 84, -40, 111, 17, 6, 69, -122, 68, 73, -50, -73, 91, 119, -59, -119, 47, 70, -86, 103, -45, 100, -117, 85, -13, 49, 31, 93, -88, -35, 8, 45, 41, -49, -73, 93, 92, -98, -24, -112, 32, 21, 23, -109, -61, 2, -123, -69, -123, -88, 23, -75, -108, -90, -51, -87, -53, -47, -123, -127, -9, -65, 107, 124, 8, 24, 19, 34, 109, 79, 101, 27, -75, -12, 59, -29, 125, -100, 101, -51, -114, 114, -104, -74, -119, -8, 29, -122, 40, -125, -28, 4, 63, 120, 43, 84, 64, 100, 90, 125, 14, -49, -117, -118, 3, 47, 95, -80, -55, 9, -29, 32, 11, 113, -13, -63, -10, 103, -51, -118, -51, 88, 34, -68, 85, -30, 55, 45, -114, -124, -127, -8, -58, -65, -95, -4, -44, 64, -80, -21, -100, -105, -98, -73, 77, -17, -34, 42, -2, 101, -8, -43, -47};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("EOMFGNVYYJKEILWAMTAGFLEJDKPVUKKNMCUXOZHXQDLAXUCPDEMKJCFWCYQUNJUOTSITIQQCPGIGHWBYXNSYQIJGXDNBADGVJPCIAOPNMSNBZGRVEZHOBEZHSSBARAHFJKSWXYHBCWUUKZHERFQK");
    msg.length = 38U;
    const signed char tmp_msg_1[] = {-55, -105, 72, -10, 4, 126, 116, -2, -46, -55, -35, -93, -7, 19, 62, 123, -15, -101, -93, -86, 29, -66, 7, 24, -3, -76, 47, 13, -14, 63, 29, -82, 10, -62, 97, 97, 91, 19, 15, -7, 60, 40, -45, -65, -30, -109, 97, -72, -1, -95, 19, -55, 1, 96, 15, 34, -23, 52, -53, -72, -88, 10, -63, 82, -123, 74, 59, 64, -120, 35, -3, 124, -4, 58, 12, -5, 72, -64, 53, 118, -58, -104, -95, -51, 122, -93, 54, -84, 82, 110, 112, -1, 25, -119, 67, 37, 103, -10, -20, 87, 78, 95, -123, -121, -106, 71, 30, -27, -32, 3, 95, -33, 102, 82, -120, 17, -127, -90, -54, 55, -47, -70, 61, -71, -78, -84, 78, 80, 29, 60, 96, -41, 50, -91, -48, 92, -83, 42, 9, -3, -61, -110, -126, -91, 38, -103, 117, -82, 50, -39, -84, -13, -78, -25, -114, -111, -35, -20, 6, -93, 105, 39, 78, 4, -98, 50, -105, 81, 84, -81, 99, 60, -2, -42, 10, 112, -96, -22, 36, -79, 76, 32, -6, -80, 95, 24};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.8080555850079615);
    msg.setSource(12433U);
    msg.setSourceEntity(247U);
    msg.setDestination(44106U);
    msg.setDestinationEntity(1U);
    msg.seq = 28775U;
    msg.op = 62U;
    msg.baseline_flags = 251U;
    msg.time = 0.4338102072095108;
    msg.class_user_id = 6U;
    msg.application_type = 191U;
    const signed char tmp_msg_0[] = {-116, 124, 77, 78, 75, 103, -110, -106, -69, 17, 50, -114, -35, -108, 100, 106, 126, 29, 28, -54, -110, 15, 91, -43, 53, 123, 52, -86, 43, -53, 34, -7, 122, -84, -96, 126, 104, -95, 15, -101, -110, 122, 100, -91, 104, 41, 47, -31, 109, -121, 58, 19, 1, -43, -38, 74, -115, 82, -16, -100, 109, 43, -41, -122, 93, -34, 94, 24, 75, 10, -44, 59, -42, -94, -13, -99, -6, -20, -80, 67, 117, -82, 81, -58, -72, -9, 13, -46, 25, -90, -49, 69, -111, 126, -15, -90, 60, -91, -33, -99, 40, -96, 123, -121, -126, -102, -26, 59, 82, -83, -95, 74, -64, -41, 95, -51, 103, 27, -101, 78, 115, 20, -126, 114, 90, 35, -59, -42, -96, 118, 50, 68, -96, 60, 58, 103, -119, 109, -4, -81, 44, 56, -93, 88, -105, 82, 53, -46, 21, 87, 85, -53, -64, 6, 67, 60, -97, -21, -76, -34, 9, -59, -107, -123, 44, -46};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("DIUCFCUZAROEOSSGAXGKOXHFVIMJDZATNDWBRKXCNHUPJZIPHCNQACZYXNXLMIIYUUULTKVHJPROPOGQQSDLJSVSTAKHBFNJTWBVGAFXHKOINZDLLXDYSZEDZEXKNVOJQWSBXQPRLBVYLJPMCHGBBLOFRFDVOWMQAFKGEEIGVHMR");
    msg.length = 42U;
    const signed char tmp_msg_1[] = {-64, 97, 94, 110, 125, -61, 101, 64, 118, 114, -51, 104, -61, -108, -123, 42, 17, 102, -63, -65, -128, -72, 37, -1, -15, 34, -32, -15, -40, 87, -23, 61, -7, 87, -77, 49, -40, 113, 19, 35, -70, -43, -1, 45, -96, 63, -117, -80, 29, 88, 115, -68, -111, -94, 98, 72, -3, 12, -10, 81, 7, 102, 58, -30, -31, -95, 50, 79, -106, 94, 62, 112, 109, 50, 81, -124, -82, -62, -56, 84, 108, 78, -101, -69, 76, 22, -19, 46, 37, 126, 122, 122, -66, -30, 75, 100, -50, 32, -95, -59, -3, -106, -9, -88, -53, -2, -56, -19, 115, -40, -83, 111, 60, 94, 65, 119, 102, 79, -68, 70, 120, -36, -5, 27, -120, 23, 31, -122, 41, 123, -58, 103, -32, 82, -92, -21, 35, 107, -116, -90, -113, 85, 34, -99, -35, -83, -66, -95, 84, -119, 76, 62, 6, 73, -40, 48, 121, 38, -31, -29, -101, -17, 76, -84, 36, -88, 102, 23, -1, -103, -96, 56, 86, -100, 28, -100, -44, 44, 26, -89, -44, 20, 32, -53, 24, -22, 77, 113, 126, 31, 110, -20, -73, -121};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.6287693706671198);
    msg.setSource(5681U);
    msg.setSourceEntity(136U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(114U);
    msg.seq = 52845U;
    msg.op = 224U;
    msg.baseline_flags = 132U;
    msg.time = 0.2652100310895129;
    msg.class_user_id = 28U;
    msg.application_type = 232U;
    const signed char tmp_msg_0[] = {103, -67, 14, -20, -2, -103, 120, -81, 25, -100, -81, -4, 44, 103, -115, -22, 27, -90, 122, 96, -63, 123, 24, -96, -53, 96, -76, -93, 107, -110, -48, -69, -31, 66, -37, -13, -122, 51, -104, -29, -85, -108, 68, 77, -106, 96, -44, 13, 117, 72, -124, -82, 26, -121, 47, 74, -69, -123, 1, -79, 68, 76, -76, 87, 99, 90, -66, 123, -1, -17, -55, 124, 43, -71, 68, -14, 0, -11, 83, -52, 57, 28, 93, -32, 51, 116, -106, -122, -109, -90, 114, 47, -30, 90, 65, 117, -113, -81, 18, -2, 32, 88, 126, 115, -96, -16, 79, 70, 24, 19, 96, -34, 19, -80, -13, -70, -114, -125, 57, 74, -43, -123, 21, -66, 117, 50, -85};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("IUKYERNQEDTXSIBTLFKSINCRFKGQWNWAWBVKJPAYBAOGEDCJOFZLTRLHSLOBBOPWCYMOACTEEGOCTOQFHKWTVAVCNNCKSGSJHLDRHXZSUOUWACZLPY");
    msg.length = 111U;
    const signed char tmp_msg_1[] = {-42, -95, -32, -90, -69, -63, 28, 3, -84, 103, 94, -12, -15, 68, 12, 120, 26, 106, -43, 26, 126, 55, 64, -113, -100, -102, 58, -83, 10, -26, -5, 50, -16, 9, 103, -78, 77, 78, 66, 86, 42, 32, -68, 94, 113, 19, -30, 40, -56, 7, 110, 77, 57, 119, 105, 13, 17, 80, 19, 107, 2, -31, -21, 47, -43, 93, 67, 72, 53, 33, -18, -100, 54, 10, -19, -5, 57, 12, -126, 41, 51, -7, -106, 124, -97, 11, 59, 2, 98, 41, 32, -83, -1, 65, -57, 45, 63, -43};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #2", msg == *msg_d);
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
    msg.setTimeStamp(0.511204517434155);
    msg.setSource(36886U);
    msg.setSourceEntity(52U);
    msg.setDestination(61249U);
    msg.setDestinationEntity(132U);
    msg.action = 0U;
    msg.longain = 0.7740520416085886;
    msg.latgain = 0.8230163657819408;
    msg.bondthick = 2086969632U;
    msg.leadgain = 0.9334549590703939;
    msg.deconflgain = 0.5286750753705233;

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
    msg.setTimeStamp(0.9415153747497798);
    msg.setSource(53077U);
    msg.setSourceEntity(146U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(170U);
    msg.action = 178U;
    msg.longain = 0.08367823316134493;
    msg.latgain = 0.8229899955969155;
    msg.bondthick = 4103311613U;
    msg.leadgain = 0.7210161895517615;
    msg.deconflgain = 0.1811437174540943;

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
    msg.setTimeStamp(0.6177993799711096);
    msg.setSource(53075U);
    msg.setSourceEntity(177U);
    msg.setDestination(39273U);
    msg.setDestinationEntity(214U);
    msg.action = 146U;
    msg.longain = 0.4437965507097038;
    msg.latgain = 0.7598942495189512;
    msg.bondthick = 2544776U;
    msg.leadgain = 0.3368489078491198;
    msg.deconflgain = 0.21522176401910442;

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
    msg.setTimeStamp(0.16358178691395608);
    msg.setSource(19875U);
    msg.setSourceEntity(115U);
    msg.setDestination(44148U);
    msg.setDestinationEntity(231U);
    msg.err_mean = 0.35827828783875226;
    msg.dist_min_abs = 0.14059248625788356;
    msg.dist_min_mean = 0.9026824345466636;

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
    msg.setTimeStamp(0.4934405900009948);
    msg.setSource(13154U);
    msg.setSourceEntity(204U);
    msg.setDestination(37966U);
    msg.setDestinationEntity(252U);
    msg.err_mean = 0.2591951290548653;
    msg.dist_min_abs = 0.3202320874246124;
    msg.dist_min_mean = 0.8350264903567226;

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
    msg.setTimeStamp(0.6924835893785468);
    msg.setSource(43455U);
    msg.setSourceEntity(6U);
    msg.setDestination(29405U);
    msg.setDestinationEntity(48U);
    msg.err_mean = 0.708386753824146;
    msg.dist_min_abs = 0.18187143888470325;
    msg.dist_min_mean = 0.37546901591573634;

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
    msg.setTimeStamp(0.6034832891199083);
    msg.setSource(17276U);
    msg.setSourceEntity(11U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(99U);
    msg.action = 223U;
    msg.lon_gain = 0.505252371886688;
    msg.lat_gain = 0.7278783864372355;
    msg.bond_thick = 0.8309491020027286;
    msg.lead_gain = 0.9065582791780553;
    msg.deconfl_gain = 0.5235156372013722;
    msg.accel_switch_gain = 0.6369706782969417;
    msg.safe_dist = 0.4123054945463447;
    msg.deconflict_offset = 0.43942847136403473;
    msg.accel_safe_margin = 0.19072501169581757;
    msg.accel_lim_x = 0.0274676387607663;

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
    msg.setTimeStamp(0.6270028986594977);
    msg.setSource(53811U);
    msg.setSourceEntity(15U);
    msg.setDestination(17081U);
    msg.setDestinationEntity(188U);
    msg.action = 64U;
    msg.lon_gain = 0.01148534221825126;
    msg.lat_gain = 0.39828549574429306;
    msg.bond_thick = 0.9099793055522519;
    msg.lead_gain = 0.4988992838446281;
    msg.deconfl_gain = 0.08621899944364209;
    msg.accel_switch_gain = 0.5049332532860648;
    msg.safe_dist = 0.8532123156133453;
    msg.deconflict_offset = 0.11551621591668426;
    msg.accel_safe_margin = 0.5415316874830507;
    msg.accel_lim_x = 0.493337084311104;

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
    msg.setTimeStamp(0.08576094252730049);
    msg.setSource(17305U);
    msg.setSourceEntity(224U);
    msg.setDestination(27136U);
    msg.setDestinationEntity(91U);
    msg.action = 25U;
    msg.lon_gain = 0.129495490809034;
    msg.lat_gain = 0.11984130643953583;
    msg.bond_thick = 0.9347680981603778;
    msg.lead_gain = 0.37537394247704003;
    msg.deconfl_gain = 0.9926838919457228;
    msg.accel_switch_gain = 0.00711146058933021;
    msg.safe_dist = 0.33551917920428753;
    msg.deconflict_offset = 0.9478126158627653;
    msg.accel_safe_margin = 0.8432112344904825;
    msg.accel_lim_x = 0.49202420484886034;

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
    msg.setTimeStamp(0.21859313788823198);
    msg.setSource(50424U);
    msg.setSourceEntity(208U);
    msg.setDestination(56954U);
    msg.setDestinationEntity(27U);
    msg.type = 34U;
    msg.op = 108U;
    msg.err_mean = 0.14582961109747816;
    msg.dist_min_abs = 0.8711568556347618;
    msg.dist_min_mean = 0.06629152248439696;
    msg.roll_rate_mean = 0.4181082940933464;
    msg.time = 0.9263984207602207;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 79U;
    tmp_msg_0.lon_gain = 0.9114391207269972;
    tmp_msg_0.lat_gain = 0.8496637384267145;
    tmp_msg_0.bond_thick = 0.9942606970569947;
    tmp_msg_0.lead_gain = 0.9278801101744554;
    tmp_msg_0.deconfl_gain = 0.6222604608493592;
    tmp_msg_0.accel_switch_gain = 0.0530935277475687;
    tmp_msg_0.safe_dist = 0.07457180323651891;
    tmp_msg_0.deconflict_offset = 0.6790749035185194;
    tmp_msg_0.accel_safe_margin = 0.3315606456774033;
    tmp_msg_0.accel_lim_x = 0.06603790932973341;
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
    msg.setTimeStamp(0.13965081521998535);
    msg.setSource(2278U);
    msg.setSourceEntity(74U);
    msg.setDestination(16869U);
    msg.setDestinationEntity(195U);
    msg.type = 195U;
    msg.op = 142U;
    msg.err_mean = 0.28967861317724053;
    msg.dist_min_abs = 0.5663939219318208;
    msg.dist_min_mean = 0.22900215641527788;
    msg.roll_rate_mean = 0.8713106988930297;
    msg.time = 0.7767442259299935;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 40U;
    tmp_msg_0.lon_gain = 0.2842046828520651;
    tmp_msg_0.lat_gain = 0.7356540546476472;
    tmp_msg_0.bond_thick = 0.8250828806690698;
    tmp_msg_0.lead_gain = 0.032845795840713454;
    tmp_msg_0.deconfl_gain = 0.6495555627882238;
    tmp_msg_0.accel_switch_gain = 0.4335324227929519;
    tmp_msg_0.safe_dist = 0.09364331710438323;
    tmp_msg_0.deconflict_offset = 0.7736030277737527;
    tmp_msg_0.accel_safe_margin = 0.6436978619308902;
    tmp_msg_0.accel_lim_x = 0.997771123381874;
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
    msg.setTimeStamp(0.5113641620882335);
    msg.setSource(32884U);
    msg.setSourceEntity(39U);
    msg.setDestination(3301U);
    msg.setDestinationEntity(16U);
    msg.type = 242U;
    msg.op = 4U;
    msg.err_mean = 0.9874306149513344;
    msg.dist_min_abs = 0.3680697585365481;
    msg.dist_min_mean = 0.2630727172539298;
    msg.roll_rate_mean = 0.628656054354984;
    msg.time = 0.5484369528636126;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 162U;
    tmp_msg_0.lon_gain = 0.7664723961094235;
    tmp_msg_0.lat_gain = 0.14707783136129116;
    tmp_msg_0.bond_thick = 0.23101525954288782;
    tmp_msg_0.lead_gain = 0.48636741492076774;
    tmp_msg_0.deconfl_gain = 0.2965261809189924;
    tmp_msg_0.accel_switch_gain = 0.10738820038902219;
    tmp_msg_0.safe_dist = 0.45023552042439374;
    tmp_msg_0.deconflict_offset = 0.7211695053059947;
    tmp_msg_0.accel_safe_margin = 0.4038437417241634;
    tmp_msg_0.accel_lim_x = 0.7488467453035709;
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
    msg.setTimeStamp(0.7863091099006685);
    msg.setSource(8192U);
    msg.setSourceEntity(178U);
    msg.setDestination(45674U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.17807802503656223;
    msg.lon = 0.9722308334683261;
    msg.eta = 4231754400U;
    msg.duration = 38328U;

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
    msg.setTimeStamp(0.7851386042778137);
    msg.setSource(21495U);
    msg.setSourceEntity(168U);
    msg.setDestination(60460U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.7184126621545338;
    msg.lon = 0.3741651256840608;
    msg.eta = 3361665855U;
    msg.duration = 35282U;

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
    msg.setTimeStamp(0.14942984338009235);
    msg.setSource(45049U);
    msg.setSourceEntity(93U);
    msg.setDestination(41052U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.6743653477727619;
    msg.lon = 0.7652976818409813;
    msg.eta = 3234849796U;
    msg.duration = 61972U;

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
    msg.setTimeStamp(0.03086049563243609);
    msg.setSource(55270U);
    msg.setSourceEntity(144U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(103U);
    msg.plan_id = 41643U;

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
    msg.setTimeStamp(0.6850590804828874);
    msg.setSource(25582U);
    msg.setSourceEntity(218U);
    msg.setDestination(33119U);
    msg.setDestinationEntity(198U);
    msg.plan_id = 28791U;

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
    msg.setTimeStamp(0.034641098342948706);
    msg.setSource(2260U);
    msg.setSourceEntity(149U);
    msg.setDestination(7523U);
    msg.setDestinationEntity(71U);
    msg.plan_id = 55875U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.1897108296811777;
    tmp_msg_0.lon = 0.9377250374559211;
    tmp_msg_0.eta = 803761090U;
    tmp_msg_0.duration = 22369U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6691566019198513);
    msg.setSource(35089U);
    msg.setSourceEntity(162U);
    msg.setDestination(47547U);
    msg.setDestinationEntity(141U);
    msg.type = 254U;
    msg.command = 126U;
    msg.settings.assign("AZUMCDAMYPYTSXOZWEVOHDRFGGKJBYMTYSBEKICRWRQNLZFAPJJKUWMLUIEPQCOVKYHZEVBNXPXFTIJGCISEPDODMIPNPKA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42533U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RLUMBUQRCGNLJDUKCITLIXYIHATPYEAVKADQWURRTRLXHPCKGTLXZJVOTUXGMFMSQSBXGHVYUBFAIISRPMZQBJCSALHFOOUCNCJEZOZTEVBGCUIMGOMRGRNNDZTWNYDGVPYWCATBAPPJDVEDWMKWSPIZWXVDHLIVHOFRLWKOETYHZEHBQNFPAIBWSUOLBNKADQJHSDFCNSZKOV");

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
    msg.setTimeStamp(0.22679084736510347);
    msg.setSource(12336U);
    msg.setSourceEntity(144U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(199U);
    msg.type = 106U;
    msg.command = 165U;
    msg.settings.assign("IAOZNKYDQIWDDNGXFLUUCNVPPEEYFVVFRCYXODHCHNFCVABNQZVRVSJUHTQVPPIXKXHGOOSHYWJQVHFDYSW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23270U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NGDAZZCASSLTMELRLTE");

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
    msg.setTimeStamp(0.22457479936881053);
    msg.setSource(15077U);
    msg.setSourceEntity(94U);
    msg.setDestination(62609U);
    msg.setDestinationEntity(211U);
    msg.type = 214U;
    msg.command = 18U;
    msg.settings.assign("EWFVJCVXIXMTWSZMHQRVOEOKDZVZJTSVFBNYMDCLGPBCDQSUEYPCITUOQUKLVRJFJNPYKEOHFQVFRWDKOBULLZLCIHPJJORBK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41480U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.16406782940150588;
    tmp_tmp_msg_0_0.lon = 0.8185377343261335;
    tmp_tmp_msg_0_0.eta = 1215376002U;
    tmp_tmp_msg_0_0.duration = 8417U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WIAVOVCDXKZOITQDYXRJIPTU");

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
    msg.setTimeStamp(0.9718024535157208);
    msg.setSource(17992U);
    msg.setSourceEntity(235U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(210U);
    msg.state = 69U;
    msg.plan_id = 43985U;
    msg.wpt_id = 163U;
    msg.settings_chk = 23692U;

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
    msg.setTimeStamp(0.1438428426538524);
    msg.setSource(40852U);
    msg.setSourceEntity(166U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(155U);
    msg.state = 142U;
    msg.plan_id = 16299U;
    msg.wpt_id = 22U;
    msg.settings_chk = 21372U;

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
    msg.setTimeStamp(0.6208446851388383);
    msg.setSource(65007U);
    msg.setSourceEntity(88U);
    msg.setDestination(60982U);
    msg.setDestinationEntity(166U);
    msg.state = 114U;
    msg.plan_id = 43975U;
    msg.wpt_id = 85U;
    msg.settings_chk = 6356U;

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
    msg.setTimeStamp(0.14319652137328842);
    msg.setSource(28740U);
    msg.setSourceEntity(17U);
    msg.setDestination(18091U);
    msg.setDestinationEntity(35U);
    msg.uid = 97U;
    msg.frag_number = 170U;
    msg.num_frags = 161U;
    const signed char tmp_msg_0[] = {-37, 116, 13, -61, 3, 11, -35, -69, 93, 114, -128, 119, 28, 9, 13, -65, 91, 84, -127, -13, 70, -128, -1, -50, -28, -33, -93, 68, 1, -23, 22, -23, -7, 119, -100, 58, -73, -8, -95, -48, 15, 56, -52, -88, -124, 33, -18, 110, -87, -35, 106, 116, 118, 112, -85, 97, 14, -110, -79, 44, 110, -106, -24, -84, -107, -73, 56, -112, 53, -63, 120, 13, 13, -19, -13, 96, -12, -128, -60, 33, 110, 75, -116, 84, -5, 66, 103, 98, -90, 25, 91, 34, -21, 73, 120, -43, -58, 14, 101, -10, 121, -111, -61, -13, -87, 71, 57, 68, -78, -78, -41, -89, 33, -118, 106, 31, 103, 27, -59, 20, 70, -100, 57, 53, 97, 25, -107, -120, 49, -116, 21, -9, -121, 70, 108, -116, -68, -70, -109, 19, -87, -68, -61, 112, -19, 38, 78, -116, 44, 75, 118, -70, -102, -16, 111, -67, -60, 41, -18, -99, 101, 25, -61, -3, -78, -111, -92, -14, 68, -34, -111, -1, -58, 96, 83, 108, 47, -63, -58, -56, -14, -27, 69, 1, 81};
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
    msg.setTimeStamp(0.7884853928339435);
    msg.setSource(38579U);
    msg.setSourceEntity(53U);
    msg.setDestination(2586U);
    msg.setDestinationEntity(90U);
    msg.uid = 234U;
    msg.frag_number = 236U;
    msg.num_frags = 1U;
    const signed char tmp_msg_0[] = {-49, 7, 108, 32, 8, -94, -8, -63, -57, -21, -52, -84, 25, 72, 20, -52, 50, 1, -49, -11, -29, 118, 38, 55, 60, -66, -94, -18, 40, 118, -75, -25, -13, 51, 9, -15, -47, 77, -127, -32, 18, -47, -123, -1, -45, -105, -111, -6, 38, 58, -25, -79, -39, 11, -119, -112, -96, -81, -112, 39, 59, 35, -79, 43, -83, -109, -70, -49, -77, -123, -123, -47, 123, -126, -106, -24, -77, -59, 70, -60, 42, -99, -98, -46, 69, -11, 45, -128, 23, 48, -99, 40, -91, -85, -77, 120, 106, 42, 108, -107, -120, 87, -98, 46, 105, 113, 7, 44, -111, -98, -23, -56, 39, -65, -96, 94, 122, 36, 81, -61, -42, 1, 54, 100, 85, -62, 42, -6, 54, 29, -79, 79, 82, -96, -125, -71, -46, -39, -2, 99, 76, 7, 53, -82, -75, -32, -119, 121, 90, 119, 67, -34, -51, 48, -4, -85, 72, 24, -23, 68, 62, 79, -108, 4, 79, -38, -15, 71, -53, 8, 113, 115, -69, -64, -119, 70, 101, 114, 34, 40, 111, -72, -63, -91, -43, 90, 110, 50, -27, -44, -91, -115, 96, 55, -102, -112, -89, -118, -1, 69, -85, 28, -87, 99, 111, 9, -111, -92, 0, 116, 11, -70, 5, 32, -5, 47, 101, -4, -30, 114, -123, 26, -37, 123, -97, -35, 118, 91, 10, -84, -16, -38, 27, -104, -4, -38, -124, 51, 79, 16, 102, -13, -126, -19, -91};
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
    msg.setTimeStamp(0.7665898964861148);
    msg.setSource(60704U);
    msg.setSourceEntity(23U);
    msg.setDestination(27085U);
    msg.setDestinationEntity(122U);
    msg.uid = 64U;
    msg.frag_number = 246U;
    msg.num_frags = 232U;
    const signed char tmp_msg_0[] = {107, 32, -74, 42, 91, -35, -23, -87, 11, 102, -61, -45, -118, 45, -100, -85, 28, 70, -48, 58, 106, -101, 92, -94, -26, 41, -104, 93, 11, -66, 82, -47, 35, 25, -79, -125, -123, -82, 67, -95, 79, 112, -92, 15, 44, 11, -41, -120, 102, 0, 95, 39, -44, -32, 24, -111, 40, 21, -79, 87, -105, 100, -63, 96, -55, 88, -51, 79, -67, -64, -52, -52, -44, -84, 117, -80, 16, -40, -57, 124, -55, 75, 124, 56, -98, 13, -1, 22, 4, -112, -70, -42, -128, -11, 76, 97, 95, 44, 99, -113, 92, 0, -36, 72, -14, -51, 84, 34, 93, 10, -48, 3, 8, -110, 94, -126, -57, -13, -101, 91, 75, -104, -119, 26, -3, 20, 59, -23, -14, 86, -127, -24, 43, 82, 76, 90, 99, 100, -44, 5, -53, -79, 62, -112, -87, 41, 29, 71, -111, -27, 75, -113, 40, -11, -120, -79, 32, 92, 65, -93, -116, 106, 53, 60, -30, 23, 82, 56, -127, 108, -99, 105, 92, -78, -75, 2, -119, 27, -98, -99, 116, 93, 55, -11, 123, -108, -51, 105, -61, 90, 79, 5, 125, -58, -40, -87, -46, 41, 124, -109, -18, -67, 60, 101, 53, 45, -61, -125, 6, -11, -53, 78, 30, -29, -63, -8, 22, -3, 83, 73, 24, 39, -114, -35, -117, -81, 118, 27, 80, -44, -14, -101, -21, -31, 30};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.6159258709387089);
    msg.setSource(6721U);
    msg.setSourceEntity(109U);
    msg.setDestination(48520U);
    msg.setDestinationEntity(163U);
    msg.uid = 141U;
    msg.op = 227U;
    msg.frag_ids.assign("UBYHVDDBSKRYHZBSZXTMMIFURTIHQGDAMBLOUJGWWEGJHFSEBKNRKNNSSYUWEKGAPQMXPGWLLLKQEXYCJHJHAMDZPDXQVEITYPJKSQPNOGVJBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.03209349473851242);
    msg.setSource(48207U);
    msg.setSourceEntity(252U);
    msg.setDestination(49191U);
    msg.setDestinationEntity(85U);
    msg.uid = 60U;
    msg.op = 246U;
    msg.frag_ids.assign("GBJQTMPAVLIXGJWWFJOPEUFXHLXQZLMYJEAOCZUJQABEEBAOTZIZPAMEVXCNCWSIEKHZFTXJAROJPFTAINBQLBWDDANIRRUUHUBKLWXKYZSHLISRDYYVPXPEFQWRMUDNVNSNKCAHEUSYDQGHTDSNDEMOQGTVDMZKZPTXKCKSPDCKSOEVLHPCYXMVCLYGRGVMBIGFRTKRNMFBAYUWFQYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.7328005989534137);
    msg.setSource(65460U);
    msg.setSourceEntity(191U);
    msg.setDestination(20394U);
    msg.setDestinationEntity(61U);
    msg.uid = 141U;
    msg.op = 60U;
    msg.frag_ids.assign("RONISALFGONGEAICZRXEJLRMPWGICDDT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8728430636258208);
    msg.setSource(13732U);
    msg.setSourceEntity(244U);
    msg.setDestination(4531U);
    msg.setDestinationEntity(32U);
    msg.content_type.assign("STXICKFJVJMEFWSPYDVYJHCNDVQAAQINONBCFVLDOMKBHMRBTRGYEBKIOTIPNYEUAQYOEZPLIFUBERSBNIOCJSQZGKIUFPFTGYSVYDMKXRPRHSRZRZFZPUDLQGBUGEVBVFHGZJNCBGNWVTODMYBALMSUW");
    const signed char tmp_msg_0[] = {-67, -36, -36, -61, -125, 83, -27, 89, -115, 67, 81, -38, 56, -126, -49, -16, -99, 17, 59, -81, 9, 63, 67, -82, 57, -59};
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
    msg.setTimeStamp(0.26069824334171254);
    msg.setSource(38076U);
    msg.setSourceEntity(252U);
    msg.setDestination(58435U);
    msg.setDestinationEntity(168U);
    msg.content_type.assign("EQTKXRTJPRORIPCBUJCELQNTNXZUOWLQEGKIVDIQCAVKUAGKJRUHNWZ");
    const signed char tmp_msg_0[] = {58, -11, -37, 63, -16, 89, -9, 12, 62, -115, -58, 108, 31, 58, 62, 104, -37, 56, -40, 107, -52, -61, 111, 107, 11, 59, -15, -119, -27, -96, -94, 44, -114, -120, 73, -37, 15, -25, 14, -17, 46, -6, 91, 75, 18, 89, 85, 102, -92, 63, -10, -60, 44, 68, -9, 124, -105, -119, 33, -52, 4, -112, 54, -42, -107, 9, -116, 9, -9, -61, -51, 1, 12, 41, -16, -104, 94, -63, 53, -7, 18, 37, -19, -22, -85, -68, 93, -35, 12, 38, 54, 86, -89, -72, 42, -73, -15, -41, 5, -93, 92, 73, 120, -90, 74, 111, 37, 60, -2, -110, -36, -114, -70, -70, 17, -19, -83, -67, 59, 63, -86, 120, -16, 107, -30, 44, 126, -4, -86, 53, -11, 24, -68, 76, -79, 21, 21, 124, -75, 83, 0, 97, 7, -125, -21, 28, -93, -119, -43, -14, 41, -12, 22, -100, -86, -44, -85, 47, 62, -92, -110, 58, -93, -106, 6, -17, -48, 100, 102, 90, 99, 81, -64, -7, -83, -52, -38, -18, 57, -126, -100, 16, -32, -42, -7, 34, -98, -39, -53, 33, 81, -68, -64, 2, -66, 35, 112, 87, -40, -62, 37, 57, -15, -11, -88, -96, -30, 58, -89, 2, -8, -8, -21, -41, -84, 81, -64, 15, 120, -10, 49, 78, 56, -74, -56, 7, -25, -114, 31, -56, -116};
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
    msg.setTimeStamp(0.515821099023212);
    msg.setSource(26271U);
    msg.setSourceEntity(106U);
    msg.setDestination(7551U);
    msg.setDestinationEntity(43U);
    msg.content_type.assign("YJUNVNULLEHSJLFSFIWSXZXWMOOKHZANARRKPOEJTVBWZRBFDSSFOWXCCDKRGLRWTFIDBSVOQJPWKXUQHVIYBTWNDG");
    const signed char tmp_msg_0[] = {98, 8, -11, 121, 13, 96, 20, 25, 85, 74, 89, -18, 69, 96, 82, -20, -116, -44, 7, 56, 15, -89, 104, -126, -105, 23, 22, -121, 26, -75, -91, 122, 121, -45, -45, -59, 40, 52, 3, -94, -74, -109, -98, 91};
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
    msg.setTimeStamp(0.8873614563146741);
    msg.setSource(63545U);
    msg.setSourceEntity(211U);
    msg.setDestination(26951U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.6068966657003511);
    msg.setSource(57186U);
    msg.setSourceEntity(3U);
    msg.setDestination(48828U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.34407656947690624);
    msg.setSource(31605U);
    msg.setSourceEntity(152U);
    msg.setDestination(37361U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.65586814070858);
    msg.setSource(53801U);
    msg.setSourceEntity(15U);
    msg.setDestination(6133U);
    msg.setDestinationEntity(75U);
    msg.target = 55681U;
    msg.bearing = 0.154489157755337;
    msg.elevation = 0.7540888920313237;

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
    msg.setTimeStamp(0.05390203224467205);
    msg.setSource(62244U);
    msg.setSourceEntity(159U);
    msg.setDestination(10457U);
    msg.setDestinationEntity(60U);
    msg.target = 17866U;
    msg.bearing = 0.3293950650385402;
    msg.elevation = 0.5630035923987807;

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
    msg.setTimeStamp(0.6257344181041476);
    msg.setSource(5006U);
    msg.setSourceEntity(101U);
    msg.setDestination(41413U);
    msg.setDestinationEntity(46U);
    msg.target = 18169U;
    msg.bearing = 0.12931810204328364;
    msg.elevation = 0.5410704149411473;

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
    msg.setTimeStamp(0.3484938974187308);
    msg.setSource(2724U);
    msg.setSourceEntity(163U);
    msg.setDestination(22149U);
    msg.setDestinationEntity(14U);
    msg.target = 51786U;
    msg.x = 0.009970201051737515;
    msg.y = 0.6301446492678315;
    msg.z = 0.01759992733834881;

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
    msg.setTimeStamp(0.21256674632776518);
    msg.setSource(20617U);
    msg.setSourceEntity(47U);
    msg.setDestination(18802U);
    msg.setDestinationEntity(61U);
    msg.target = 53728U;
    msg.x = 0.6561120787694908;
    msg.y = 0.8376507351746394;
    msg.z = 0.319577184226162;

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
    msg.setTimeStamp(0.1664710542769463);
    msg.setSource(27537U);
    msg.setSourceEntity(21U);
    msg.setDestination(26115U);
    msg.setDestinationEntity(157U);
    msg.target = 29451U;
    msg.x = 0.7714320456615155;
    msg.y = 0.8187346126712102;
    msg.z = 0.5736181418688374;

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
    msg.setTimeStamp(0.8118831031818281);
    msg.setSource(31403U);
    msg.setSourceEntity(121U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(114U);
    msg.target = 8115U;
    msg.lat = 0.9059593731156145;
    msg.lon = 0.6152871850683002;
    msg.z_units = 67U;
    msg.z = 0.135317517502201;

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
    msg.setTimeStamp(0.9117229740358145);
    msg.setSource(17737U);
    msg.setSourceEntity(225U);
    msg.setDestination(53661U);
    msg.setDestinationEntity(27U);
    msg.target = 24069U;
    msg.lat = 0.3642040404301333;
    msg.lon = 0.2922363248645309;
    msg.z_units = 222U;
    msg.z = 0.7341953947183764;

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
    msg.setTimeStamp(0.39702340513725465);
    msg.setSource(45418U);
    msg.setSourceEntity(25U);
    msg.setDestination(6894U);
    msg.setDestinationEntity(81U);
    msg.target = 38310U;
    msg.lat = 0.7902906938311803;
    msg.lon = 0.9796729809891204;
    msg.z_units = 40U;
    msg.z = 0.5455203599125373;

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
    msg.setTimeStamp(0.16372779039127816);
    msg.setSource(38146U);
    msg.setSourceEntity(156U);
    msg.setDestination(22391U);
    msg.setDestinationEntity(66U);
    msg.locale.assign("YUPZIUNNMOZZOFQXVEHXABRJKRZLOOBNGWFVUWULKWLSZEEGKRNQEZUNWCVGJGGVTDBOKYRCDBBPMJCSBPZTLCUTENOLLIZSFMTJFJBOQFPHEEXKBJRIDIDILDHNDAPYPJSAYIRFPXEFFYCUQLHWETXAXRHGXDUGBNIARCSMKMSYMUYMYJMTAOAXNKQKOTGWWQEWVNIXVHCUMPSSLZQRH");
    const signed char tmp_msg_0[] = {-84, -33, -61, -28, 60, -58, -44, -73, 108, -55, -71, -4, 126, 77, 33, 44, -51, -125, 73, 122, -41, -66, 7, -24, -89, -58, 81, -24, -32, 41, 98, 125, -3, 86, 3, -25, -115, -33, -54, 42, -36, -42, 19, -21, 69, -90, -57, -20, -84, -60, 66, -112, -119, -13, 88, -18, -116, 89, -116, 112, -104, 85, 107, 11, 22, 9, -24, -106, -77, -44, -28, -39, 98, -49, -99, -51, 99, 55, -111, -62, 47, -106, 94, 107, -82, -40, 94, -124, -102, 22, 9, 35, -110, -54, 83, 104, 37, 63, -22, -64, 110, 80, 18, 107, 48, 53, 91, -86, 32, 53, -10, -80, 20, -11, 35, 113, 12, -31, 2, 99, 48, -14, -21, -100, -12, -124};
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
    msg.setTimeStamp(0.6455168354990822);
    msg.setSource(13821U);
    msg.setSourceEntity(157U);
    msg.setDestination(62746U);
    msg.setDestinationEntity(167U);
    msg.locale.assign("GYQSLEEJFMCUJYQNZVVONSHRYQTLSCPCAWADEVANIOMRELGBMIMPAKSCHZHNCKHFFWIFLSQOIEXMDRFXOQUB");
    const signed char tmp_msg_0[] = {-127, 56, -95, 57, -57, -47, 24, 47, 29, 26, 28, 87, -127, 101, -124, 58, 50, -42, -128, 88, 70, 11, 66, 64, 93, 87, -81, -42, -90, -55, 7, -119, -75, 101, 4, 16, 53, -20, -23, 95, -108, 15, -9, 79, 3, -40, 40, 30, -7, 50, -31, 66, 120, -64, 21, -17, -23, -127, 109, -54, 116, 74, 47, -83, -9, 49, -65, -108, 7, -16, -28, 112, -86, 55, 44, 11, 24, 27, -25, -120, 85, 96, -28, 47, -20, -48, 9, -51, 1, -29, -37, -9, 59, 122, -50, -106, 54, -90, 84, -95, -11, 121, 107, -52, -87, 119, -59, 15, -85, -49, -67, -111, 2, -63, -109, -112, 87, 42, 79, -28, -84, 22, -59, 102, -6, 41, 53, -16, 116, -35, 7, 50, -65, -31, -61, 11, -63, -66, -89, -114, 65, 87, -117, -12, -58, -115, -109, 86, 31, 21, -91, 15, -110, 63, -8, -15, 89, 106, -107, -92, -47, 75, -81, 15, 26, 74, 69, -37, -14, -22, -70, 13, 12, 98, -121, 43, 33, 20, 77, 114, 50, -81, -110, 72, -81, -79, 41, 47, -48, 29};
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
    msg.setTimeStamp(0.49782349916308655);
    msg.setSource(11526U);
    msg.setSourceEntity(248U);
    msg.setDestination(27190U);
    msg.setDestinationEntity(81U);
    msg.locale.assign("GJNLCHCQWKMFJIJKTRFQRNOAQEUIGJQFNYEPKEZCYQVWYBPYNCFXCLQZRBIZLGBLIZYQPFNEFRKYNLVOIPARZCXIUVPANZFOADPWPMXAYUUTWTRYKZMXMLUSJXOXTDBLRMFKSNARBGUIBQBGDEUCGSX");
    const signed char tmp_msg_0[] = {52, -123, 54, 43, -90, 31, 15, -100, 37, 21, 36, 62, 8, -5, -121, -63, -57, 91, 5, 34, -58, 70, -82, 14, -111, -90, -40, -5, -108, -74, -25, 1, 124, 116, 112, 4, -25, -10, -111, -65, 67, -25, -106, 39, -11, -103, -102, 50, -9, -41, -104, -113, 41, 19, -38, -65, 100, 61, -92, 44, 37, -22, 113, 58, -72, 82, 89, 30, 84, 126, 0, -34, -46, 3, 112, -15, -122, -77, 34, 52, -105, -82, 81, -87, -92, -38, 7, -91, -87, -83, 36, -98, 93, -38, -125, 46, 47, 102, -114, 78, 69, 65, 15, -20, -40, 87, 52, -7, 30, -56, 67, -45, 39, 4, -32, 95, -124, -10, -11, 105, 57, -122, 55, -82, 38, -1, -109, -26, 47, 34, 1, -24, -13, -116, 12, 14, 22, -51, -60, 80, 5, 63, 89, 24, -39, -83, -51, 1, -53, 91, -44, 64, 49};
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
    msg.setTimeStamp(0.2472459736506375);
    msg.setSource(12018U);
    msg.setSourceEntity(27U);
    msg.setDestination(56846U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.9838966863561533);
    msg.setSource(56021U);
    msg.setSourceEntity(246U);
    msg.setDestination(41713U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.5604415985725661);
    msg.setSource(40661U);
    msg.setSourceEntity(50U);
    msg.setDestination(1944U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.25839671236823114);
    msg.setSource(17993U);
    msg.setSourceEntity(15U);
    msg.setDestination(14036U);
    msg.setDestinationEntity(71U);
    msg.camid = 171U;
    msg.x = 21185U;
    msg.y = 21026U;

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
    msg.setTimeStamp(0.19764566174214393);
    msg.setSource(35662U);
    msg.setSourceEntity(157U);
    msg.setDestination(57688U);
    msg.setDestinationEntity(156U);
    msg.camid = 129U;
    msg.x = 4267U;
    msg.y = 21554U;

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
    msg.setTimeStamp(0.25078316697986847);
    msg.setSource(52286U);
    msg.setSourceEntity(86U);
    msg.setDestination(20039U);
    msg.setDestinationEntity(3U);
    msg.camid = 235U;
    msg.x = 58702U;
    msg.y = 36326U;

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
    msg.setTimeStamp(0.5515887598861984);
    msg.setSource(60540U);
    msg.setSourceEntity(254U);
    msg.setDestination(26502U);
    msg.setDestinationEntity(246U);
    msg.camid = 49U;
    msg.x = 29959U;
    msg.y = 10078U;

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
    msg.setTimeStamp(0.4543485746654443);
    msg.setSource(4832U);
    msg.setSourceEntity(8U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(84U);
    msg.camid = 79U;
    msg.x = 49926U;
    msg.y = 41879U;

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
    msg.setTimeStamp(0.11184328453400194);
    msg.setSource(53533U);
    msg.setSourceEntity(112U);
    msg.setDestination(54561U);
    msg.setDestinationEntity(29U);
    msg.camid = 14U;
    msg.x = 38894U;
    msg.y = 6489U;

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
    msg.setTimeStamp(0.38146768000831766);
    msg.setSource(24021U);
    msg.setSourceEntity(156U);
    msg.setDestination(5152U);
    msg.setDestinationEntity(189U);
    msg.tracking = 84U;
    msg.lat = 0.09419153525511781;
    msg.lon = 0.7686835460556205;
    msg.x = 0.9501948211854774;
    msg.y = 0.39844284339292346;
    msg.z = 0.30038482213408935;

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
    msg.setTimeStamp(0.25755347774610116);
    msg.setSource(6688U);
    msg.setSourceEntity(133U);
    msg.setDestination(54018U);
    msg.setDestinationEntity(186U);
    msg.tracking = 104U;
    msg.lat = 0.12042063296719963;
    msg.lon = 0.08883984341092588;
    msg.x = 0.6517216536466467;
    msg.y = 0.1685494807904261;
    msg.z = 0.4734259481454529;

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
    msg.setTimeStamp(0.7814798201084926);
    msg.setSource(26045U);
    msg.setSourceEntity(253U);
    msg.setDestination(11130U);
    msg.setDestinationEntity(197U);
    msg.tracking = 190U;
    msg.lat = 0.5871865105783544;
    msg.lon = 0.586863488970896;
    msg.x = 0.6139298511102304;
    msg.y = 0.4056359137013693;
    msg.z = 0.6901177732822072;

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
    msg.setTimeStamp(0.11063210884033614);
    msg.setSource(30263U);
    msg.setSourceEntity(35U);
    msg.setDestination(60610U);
    msg.setDestinationEntity(131U);
    msg.target.assign("GNQQCGIPKYXFIEJTXHRGNOSCPXYTNGIMWRECPRTFFWJQWHLVGDFUVRMUHPUJHVUJQMMOIOCAEAXYDVXHATTMBYCBZPLJCAJRZZADKPWPTVEUNKBTZDBSS");
    msg.lbearing = 0.4686929697348865;
    msg.lelevation = 0.45424797220006297;
    msg.bearing = 0.5040227005274036;
    msg.elevation = 0.037426213333884406;
    msg.phi = 0.7715542161785357;
    msg.theta = 0.4675163996808701;
    msg.psi = 0.630936843560375;
    msg.accuracy = 0.1902159905547739;

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
    msg.setTimeStamp(0.5028847237160745);
    msg.setSource(5121U);
    msg.setSourceEntity(140U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(103U);
    msg.target.assign("FZZUGFRBNMGIBNRHYQYGFKWEEXVTBGGJXDQWSVTSPRDQDOMNVBCJNYAHEJEXXLFYLVNCHWTMNDEKENJXNHGODSIKVALVWTXSYRJUUPZPANBQUHOQHUVWOGAZPSHLMFBZMDXTTSWAQQCZCRYGLASOAJWXIOBFBLGLRICYJKUXEEETQSCBKPLPCIRYPHAKTHROAYBPFZIXUKZJY");
    msg.lbearing = 0.3424093622460569;
    msg.lelevation = 0.2459051462736569;
    msg.bearing = 0.6570381749269046;
    msg.elevation = 0.3001712522875515;
    msg.phi = 0.3024339633325611;
    msg.theta = 0.8935985158313798;
    msg.psi = 0.8423209542802863;
    msg.accuracy = 0.8191902877436249;

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
    msg.setTimeStamp(0.891159681216697);
    msg.setSource(59641U);
    msg.setSourceEntity(234U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(50U);
    msg.target.assign("ETDKXPMXVECZQYA");
    msg.lbearing = 0.020775046449499013;
    msg.lelevation = 0.24397853321577068;
    msg.bearing = 0.8569067694992001;
    msg.elevation = 0.07375338643437912;
    msg.phi = 0.7674752416383233;
    msg.theta = 0.4771805849604648;
    msg.psi = 0.09095730910369337;
    msg.accuracy = 0.522823469945433;

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
    msg.setTimeStamp(0.3396949293130618);
    msg.setSource(59850U);
    msg.setSourceEntity(55U);
    msg.setDestination(9803U);
    msg.setDestinationEntity(161U);
    msg.target.assign("AMVMBLMTUGLKKJQRCWWFGWKLWVMPEDAYSSLNYJRAGVTZXTCJAJAZQTNGIMGQJZCDIAUFOBHMKVNOHDDIKNXMTYLOGTDVSACHLJQNGHROCNXPSFQRUCDBQTCEDVHHLMOXCFGZZEXBRVYSHSOFPKLNPPWFZF");
    msg.x = 0.9087234398482574;
    msg.y = 0.7902967576312457;
    msg.z = 0.8030905642648792;
    msg.n = 0.084783924687169;
    msg.e = 0.9622612022814466;
    msg.d = 0.6087895142829622;
    msg.phi = 0.8132825702489397;
    msg.theta = 0.139531935550132;
    msg.psi = 0.01869163670837526;
    msg.accuracy = 0.10742428835554163;

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
    msg.setTimeStamp(0.6316447880570034);
    msg.setSource(50589U);
    msg.setSourceEntity(221U);
    msg.setDestination(36837U);
    msg.setDestinationEntity(90U);
    msg.target.assign("CRLNCJVYCDPKMJRVCXZTJFSRZFIMAKTPOBOAAQEZGYRCBOQQXILDYASQVVSPLLDNNVDTNMKEDXHBAKJTAXQICRZIZUKQBGIVHIEWSFPFEYDXHHFZXOAJGJQKSRRCGPANGOEUPGLKBSXWMUFVWWDXZWOGOUNTHFNCEUEDQWOVNMRCHBAHZZLWUYRTTTHIKHAUOBYJZKMHJWKIJ");
    msg.x = 0.4187580361225035;
    msg.y = 0.4630725557987925;
    msg.z = 0.13273374266378368;
    msg.n = 0.8146369717948548;
    msg.e = 0.12486549333553809;
    msg.d = 0.9333496718366956;
    msg.phi = 0.06677026012457876;
    msg.theta = 0.7497703153578353;
    msg.psi = 0.9370600742281019;
    msg.accuracy = 0.39693053097233977;

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
    msg.setTimeStamp(0.21860831054057972);
    msg.setSource(38762U);
    msg.setSourceEntity(73U);
    msg.setDestination(420U);
    msg.setDestinationEntity(32U);
    msg.target.assign("MUYLSOZJTCDHITPJQVQCRGH");
    msg.x = 0.46496747303342967;
    msg.y = 0.423760885262777;
    msg.z = 0.293117841622038;
    msg.n = 0.4158399296401809;
    msg.e = 0.386241380601013;
    msg.d = 0.48200754877303487;
    msg.phi = 0.6885520160895021;
    msg.theta = 0.3213424988828215;
    msg.psi = 0.8036416977383181;
    msg.accuracy = 0.8835270242136035;

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
    msg.setTimeStamp(0.25936899732609464);
    msg.setSource(30863U);
    msg.setSourceEntity(235U);
    msg.setDestination(33868U);
    msg.setDestinationEntity(218U);
    msg.target.assign("YWFQVEBMVTEGE");
    msg.lat = 0.8886546262503284;
    msg.lon = 0.6202573546751656;
    msg.z_units = 76U;
    msg.z = 0.009682573268404049;
    msg.accuracy = 0.18257024968311375;

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
    msg.setTimeStamp(0.26607383818869246);
    msg.setSource(60920U);
    msg.setSourceEntity(97U);
    msg.setDestination(49871U);
    msg.setDestinationEntity(96U);
    msg.target.assign("NSYEIDLUPYIAWSVCTTGIUOCFKURADMTVECEWDWOVVDBMFXYVXLUHELPHVZXTQXTKBBEFJRPDAAOLLQCKQDNVSNIYPAAWHFONFWFIGXDAPYHPZOJURURXMTIBWBHFMKCWDXUHQKEHGRJKLPZFBZSOGIOJONAQJVLPLJKHQPZSSXEEINJLSHCIOBSBYKJYRPOGNLGGEQZQWMCTBKMIUDNQMKCWNEZGMGRRQRWGCTX");
    msg.lat = 0.9871471984459916;
    msg.lon = 0.747005869330732;
    msg.z_units = 249U;
    msg.z = 0.8379771389819286;
    msg.accuracy = 0.24780948675542036;

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
    msg.setTimeStamp(0.5971573996650432);
    msg.setSource(65050U);
    msg.setSourceEntity(244U);
    msg.setDestination(64701U);
    msg.setDestinationEntity(139U);
    msg.target.assign("JTIUWTXSYTMKTJFBRGIYFCPYKJVNJYFPRHWVPRBZOELBYRKMSXEZAOHGYHLOZIISTNYTBNOQUGUCLIENXKJYSARBADZDHVAJPLBFDJLANYVSOUTOKLLDAXAFPWSEIDCBJWG");
    msg.lat = 0.5379250407726938;
    msg.lon = 0.573640647153877;
    msg.z_units = 58U;
    msg.z = 0.012168716984206074;
    msg.accuracy = 0.17932052766021533;

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
    msg.setTimeStamp(0.3236866641653715);
    msg.setSource(55741U);
    msg.setSourceEntity(149U);
    msg.setDestination(9416U);
    msg.setDestinationEntity(140U);
    msg.name.assign("MAZBBYKSCTWUQD");
    msg.lat = 0.046601283168326124;
    msg.lon = 0.3047592909504665;
    msg.z = 0.3599037094698274;
    msg.z_units = 161U;

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
    msg.setTimeStamp(0.35741067112501546);
    msg.setSource(35326U);
    msg.setSourceEntity(88U);
    msg.setDestination(50077U);
    msg.setDestinationEntity(247U);
    msg.name.assign("IIANLTFGJIMHNSAPNFCQZRWYTOMQZJPTLFJDCRWWHTEOXMBGKLEGVTSGHEAMBDXIXYZSYRIRXWJUIUMQMGHPBTULWEYEUPTCDSHZMUNQQPYBPAYUNOKOAISHHZCFG");
    msg.lat = 0.20197901174971278;
    msg.lon = 0.7825846445900387;
    msg.z = 0.3213565224322378;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.7369798578824307);
    msg.setSource(15516U);
    msg.setSourceEntity(81U);
    msg.setDestination(54827U);
    msg.setDestinationEntity(147U);
    msg.name.assign("UZOSWLACWQLHLIOQZIHEHZGLJNNVVJIWKWCSEVSRBPXKOH");
    msg.lat = 0.6897736702822937;
    msg.lon = 0.004358383925997411;
    msg.z = 0.17708967913375295;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.7205612938098792);
    msg.setSource(39846U);
    msg.setSourceEntity(129U);
    msg.setDestination(53821U);
    msg.setDestinationEntity(67U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.9122615177525292);
    msg.setSource(52336U);
    msg.setSourceEntity(248U);
    msg.setDestination(59059U);
    msg.setDestinationEntity(14U);
    msg.op = 224U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HPFSNYYNZKKJKWLVPYAYJ");
    tmp_msg_0.lat = 0.3713538279595562;
    tmp_msg_0.lon = 0.24759354025864255;
    tmp_msg_0.z = 0.1646225692500255;
    tmp_msg_0.z_units = 221U;
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
    msg.setTimeStamp(0.5244472176456322);
    msg.setSource(49291U);
    msg.setSourceEntity(185U);
    msg.setDestination(59368U);
    msg.setDestinationEntity(193U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.4901300064131445);
    msg.setSource(61999U);
    msg.setSourceEntity(70U);
    msg.setDestination(29405U);
    msg.setDestinationEntity(31U);
    msg.value = 0.5083249161681689;
    msg.type = 121U;

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
    msg.setTimeStamp(0.5611648891327816);
    msg.setSource(47820U);
    msg.setSourceEntity(214U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(243U);
    msg.value = 0.25995766104309503;
    msg.type = 66U;

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
    msg.setTimeStamp(0.8925379999067361);
    msg.setSource(42082U);
    msg.setSourceEntity(75U);
    msg.setDestination(19381U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6620030571089575;
    msg.type = 164U;

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
    msg.setTimeStamp(0.07017097039778442);
    msg.setSource(18328U);
    msg.setSourceEntity(160U);
    msg.setDestination(9215U);
    msg.setDestinationEntity(9U);
    msg.value = 0.17647133755707378;

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
    msg.setTimeStamp(0.15721022328879442);
    msg.setSource(21263U);
    msg.setSourceEntity(96U);
    msg.setDestination(55271U);
    msg.setDestinationEntity(85U);
    msg.value = 0.8502279963398481;

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
    msg.setTimeStamp(0.8059650735370999);
    msg.setSource(38046U);
    msg.setSourceEntity(193U);
    msg.setDestination(64360U);
    msg.setDestinationEntity(125U);
    msg.value = 0.637390808818698;

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
    msg.setTimeStamp(0.6970161395309354);
    msg.setSource(49193U);
    msg.setSourceEntity(164U);
    msg.setDestination(60060U);
    msg.setDestinationEntity(220U);
    msg.timestamp_last_service = 0.9339161428461081;
    msg.time_next_service = 0.4970071238842908;
    msg.time_motor_next_service = 0.9428312742037966;
    msg.time_idle_ground = 0.7727815528010462;
    msg.time_idle_air = 0.5964828488842095;
    msg.time_idle_water = 0.5588285364962504;
    msg.time_idle_underwater = 0.10992491900271117;
    msg.time_idle_unknown = 0.6862422279992253;
    msg.time_motor_ground = 0.4228898348493777;
    msg.time_motor_air = 0.28763179157528995;
    msg.time_motor_water = 0.12371812026931761;
    msg.time_motor_underwater = 0.23102000013093926;
    msg.time_motor_unknown = 0.5090932374699385;
    msg.rpm_min = -5758;
    msg.rpm_max = -13911;
    msg.depth_max = 0.314035509916349;

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
    msg.setTimeStamp(0.7142663194979159);
    msg.setSource(24658U);
    msg.setSourceEntity(77U);
    msg.setDestination(36625U);
    msg.setDestinationEntity(247U);
    msg.timestamp_last_service = 0.003395966111274684;
    msg.time_next_service = 0.06656963358006374;
    msg.time_motor_next_service = 0.31080718116918293;
    msg.time_idle_ground = 0.9629429356706;
    msg.time_idle_air = 0.47450551013490216;
    msg.time_idle_water = 0.0902598807580669;
    msg.time_idle_underwater = 0.9955267935527626;
    msg.time_idle_unknown = 0.3887555394801546;
    msg.time_motor_ground = 0.16839330754616855;
    msg.time_motor_air = 0.5359648591454665;
    msg.time_motor_water = 0.12302382015792002;
    msg.time_motor_underwater = 0.29622171656567775;
    msg.time_motor_unknown = 0.7524916440833709;
    msg.rpm_min = -25134;
    msg.rpm_max = -24422;
    msg.depth_max = 0.9812625748204256;

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
    msg.setTimeStamp(0.6365720989794685);
    msg.setSource(55516U);
    msg.setSourceEntity(5U);
    msg.setDestination(52055U);
    msg.setDestinationEntity(4U);
    msg.timestamp_last_service = 0.822574566017712;
    msg.time_next_service = 0.9566909006218128;
    msg.time_motor_next_service = 0.1369603129902225;
    msg.time_idle_ground = 0.25290371321550587;
    msg.time_idle_air = 0.754271813971518;
    msg.time_idle_water = 0.3254392133870776;
    msg.time_idle_underwater = 0.9627614318952215;
    msg.time_idle_unknown = 0.8575503306009039;
    msg.time_motor_ground = 0.6384979676815015;
    msg.time_motor_air = 0.7053817841057946;
    msg.time_motor_water = 0.48056270775475685;
    msg.time_motor_underwater = 0.9610727444680366;
    msg.time_motor_unknown = 0.8076389711509303;
    msg.rpm_min = 27585;
    msg.rpm_max = 842;
    msg.depth_max = 0.5548728648793483;

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
    msg.setTimeStamp(0.6048356059959192);
    msg.setSource(46074U);
    msg.setSourceEntity(68U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(70U);
    msg.severity = 14U;
    msg.text.assign("DLESGFODPWNSMRBFHAHJIPIBNVAVLYBYQCREJJYDDGNPPSQOPUBBQRXMPGRTYACLAIQZKBWCAXQTQMPJKDBUNXXFIEDRTG");

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
    msg.setTimeStamp(0.9254913457554885);
    msg.setSource(32071U);
    msg.setSourceEntity(4U);
    msg.setDestination(46546U);
    msg.setDestinationEntity(242U);
    msg.severity = 42U;
    msg.text.assign("ZBRBRQPOXVVSJAXUUYAITPEZYHVQEVLXCZJAEAZKGCQZEFYENEESBTMSYRROSRPJDRPKUNMVLAHGOLDIKLWIZPBCWDYNKFFSWFCLUQWOLUKEYGNBMFDKOZNBMZTI");

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
    msg.setTimeStamp(0.1171857050218178);
    msg.setSource(7160U);
    msg.setSourceEntity(168U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(83U);
    msg.severity = 147U;
    msg.text.assign("QAAHIJWTCFPFMVPDYDCNEHKRUPFLSHEDQJDEBYRYJWBZALCIJMAWVOFNPQJAXUWCTKBJUHKXEHLTTGWSVKYURXAGVLGRMIGGIYDTIDFTSWTYZWZUPWMQSKEUNHAPFCIGXWOALIGVYSAHUNHKOBRMDKXRLSSHJWDRDQMBCFCLMSGVYNZYGBIPDJZXOFOLNVNUIJXXZPLQTOBMQEV");

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
    msg.setTimeStamp(0.4928644531787808);
    msg.setSource(39637U);
    msg.setSourceEntity(172U);
    msg.setDestination(50224U);
    msg.setDestinationEntity(34U);
    msg.channel = -22;
    msg.value = -1624234632;
    msg.gain = 143U;

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
    msg.setTimeStamp(0.04165827021910695);
    msg.setSource(35176U);
    msg.setSourceEntity(225U);
    msg.setDestination(29490U);
    msg.setDestinationEntity(122U);
    msg.channel = 0;
    msg.value = 1729183160;
    msg.gain = 34U;

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
    msg.setTimeStamp(0.1625073782684292);
    msg.setSource(15010U);
    msg.setSourceEntity(173U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(159U);
    msg.channel = -115;
    msg.value = 1257304009;
    msg.gain = 35U;

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
    msg.setTimeStamp(0.6350945044270114);
    msg.setSource(16061U);
    msg.setSourceEntity(21U);
    msg.setDestination(8779U);
    msg.setDestinationEntity(185U);
    msg.ch01 = 0.2122984768332915;
    msg.ch02 = 0.005602407097434536;
    msg.ch03 = 0.593195897750297;
    msg.ch04 = 0.1110237734970112;
    msg.ch05 = 0.8231543219031245;
    msg.ch06 = 0.6925878299583695;
    msg.ch07 = 0.08824022080607252;
    msg.ch08 = 0.47918115809931516;
    msg.ch09 = 0.30542885828889077;
    msg.ch10 = 0.061332354612101736;
    msg.ch11 = 0.2710089839456201;
    msg.ch12 = 0.24411858075438309;
    msg.ch13 = 0.3065838275270665;
    msg.ch14 = 0.8151955822505978;
    msg.ch15 = 0.534896538368811;
    msg.ch16 = 0.0603533370400231;

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
    msg.setTimeStamp(0.6724695253395896);
    msg.setSource(56824U);
    msg.setSourceEntity(69U);
    msg.setDestination(28010U);
    msg.setDestinationEntity(215U);
    msg.ch01 = 0.19375811616776173;
    msg.ch02 = 0.9138543909134622;
    msg.ch03 = 0.20193851502636673;
    msg.ch04 = 0.6385555867196596;
    msg.ch05 = 0.3342319272214852;
    msg.ch06 = 0.3233137129381224;
    msg.ch07 = 0.005483655196697912;
    msg.ch08 = 0.5196950052082777;
    msg.ch09 = 0.482396865798409;
    msg.ch10 = 0.23033138594264335;
    msg.ch11 = 0.8413212192536265;
    msg.ch12 = 0.4569041347186744;
    msg.ch13 = 0.8612920529659084;
    msg.ch14 = 0.688233780277212;
    msg.ch15 = 0.34434425911372346;
    msg.ch16 = 0.6314084479255926;

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
    msg.setTimeStamp(0.6851143618699925);
    msg.setSource(54422U);
    msg.setSourceEntity(243U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(49U);
    msg.ch01 = 0.9075349824058142;
    msg.ch02 = 0.27914594780105073;
    msg.ch03 = 0.3171549618688355;
    msg.ch04 = 0.6551158164823796;
    msg.ch05 = 0.15547165683804787;
    msg.ch06 = 0.17728670566993;
    msg.ch07 = 0.5974177576974831;
    msg.ch08 = 0.5695311066964527;
    msg.ch09 = 0.6302048105192262;
    msg.ch10 = 0.3439452573344046;
    msg.ch11 = 0.5573506509580736;
    msg.ch12 = 0.18672627859564828;
    msg.ch13 = 0.2922740030403326;
    msg.ch14 = 0.13294825174617175;
    msg.ch15 = 0.5527449440849115;
    msg.ch16 = 0.5279538745882072;

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
    msg.setTimeStamp(0.4962801961824621);
    msg.setSource(27554U);
    msg.setSourceEntity(54U);
    msg.setDestination(59149U);
    msg.setDestinationEntity(39U);
    msg.op = 231U;
    msg.lat = 0.37493545632057257;
    msg.lon = 0.3370481072631045;
    msg.height = 0.3780459528728627;
    msg.depth = 0.29412700190430296;
    msg.alt = 0.30413435959857815;

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
    msg.setTimeStamp(0.7245683641454786);
    msg.setSource(30276U);
    msg.setSourceEntity(158U);
    msg.setDestination(47650U);
    msg.setDestinationEntity(166U);
    msg.op = 232U;
    msg.lat = 0.8986732578455058;
    msg.lon = 0.7030470237404323;
    msg.height = 0.853338662379501;
    msg.depth = 0.6492233888453128;
    msg.alt = 0.8952513974581822;

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
    msg.setTimeStamp(0.5319663832136763);
    msg.setSource(21514U);
    msg.setSourceEntity(140U);
    msg.setDestination(24613U);
    msg.setDestinationEntity(245U);
    msg.op = 208U;
    msg.lat = 0.7509614308606839;
    msg.lon = 0.8050866972179772;
    msg.height = 0.3225488316284768;
    msg.depth = 0.9549925942221243;
    msg.alt = 0.706949793185576;

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
    msg.setTimeStamp(0.9337405892645738);
    msg.setSource(51739U);
    msg.setSourceEntity(115U);
    msg.setDestination(48824U);
    msg.setDestinationEntity(50U);
    msg.direction = 0.11492630060152964;
    msg.speed = 0.5685366317452278;
    msg.turbulence = 0.9380813846715108;

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
    msg.setTimeStamp(0.4299646563291164);
    msg.setSource(7170U);
    msg.setSourceEntity(62U);
    msg.setDestination(8812U);
    msg.setDestinationEntity(37U);
    msg.direction = 0.5036783984431144;
    msg.speed = 0.2271480681364304;
    msg.turbulence = 0.4499320296985788;

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
    msg.setTimeStamp(0.26261000417626335);
    msg.setSource(50266U);
    msg.setSourceEntity(55U);
    msg.setDestination(24501U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.6145834904060431;
    msg.speed = 0.3600565262597978;
    msg.turbulence = 0.11322401785120739;

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
    msg.setTimeStamp(0.4055357506291516);
    msg.setSource(53131U);
    msg.setSourceEntity(235U);
    msg.setDestination(36727U);
    msg.setDestinationEntity(151U);
    msg.msg_type.assign("MFAMJGGEFEMFRIATZNWWYFLLKRXXESZBIBCYLVOTHCJKPWVKZPWSUTVPDUXTQBFCOCHLYRXIZWNLHMKQVPBKNBBDAWNYPJOASQTHDGDOZKAHRGWADHKRACVZQWCJLJCPBDVGVWTYQMXFJPHIBDJTAQVETESPALFNDZEUOSQGWXOGIUUJBIVUPUDHEBNINGIRYKSCZQLQDRFIYXNUNUSKXUHSYHMVMLXXSMSTETROCLNMZFQAEZRY");
    msg.sensor_class.assign("LUYJPAKPTEXYZYXGSPPCFRYEKXKVGUHBDWNMVKJMZNILWGTECMHUWTVMYIBGKTVUQBIMIQNIHDQNOTFGADNFDTQQBLSRVOESPXNHMSWCJPSXEKXFJG");
    msg.mmsi.assign("KLCYCOHRXXKTYWTQDAJCGFXKCHLQHWMNBBAYCFPEZEWVQIYOSEKMNYLWUDWZTQAELPYGTYSOFLXCJZSFQGRSGTGSIDGGICUMDTWUBTAJVAOOVHEEMOJSHIYVHFNRBPDZSZWBZLJKAPFZNAZLUBAMQULEBHRVMQPCDQVHNJDCSWWFDJNJFBIMDKMYQIPPQIBVZUAUZY");
    msg.callsign.assign("KABXYWNJRFSPQOUMJVWMQDSWHTGZTYUGUZLZSOQGXRZMDING");
    msg.name.assign("WUGBBNBYQBBCCGERHEKZOTSCFAQGGIMMWVDVEXYKPYPUADSIKCHHJUXNJDEUHQNDKZHCLWTNVFXDSZCNRLGLNLWOTEOMVJSFZHGAIRYCWTMQU");
    msg.nav_status = 172U;
    msg.type_and_cargo = 49U;
    msg.lat = 0.7531026469601177;
    msg.lon = 0.4799362385216449;
    msg.course = 0.6217168631206206;
    msg.speed = 0.23014339408559314;
    msg.dist = 0.24353499341148843;
    msg.a = 0.5560027532473599;
    msg.b = 0.3436097909851662;
    msg.c = 0.6236373355481255;
    msg.d = 0.7401426737257184;
    msg.draught = 0.876795598016879;

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
    msg.setTimeStamp(0.41991163421451094);
    msg.setSource(23094U);
    msg.setSourceEntity(2U);
    msg.setDestination(19U);
    msg.setDestinationEntity(72U);
    msg.msg_type.assign("VUEHRQTWMZZOAHDZVQGGIJADBEWOBKGXZNRTBCOLFQIRCDICIPZBFGUNZPWRBOLFHOEMBQIQXWCAKRQKNJCDKWLMNRISYSFCFWOELEFTICEHTXRGR");
    msg.sensor_class.assign("QNQLPXOEWQBQOGOIGLAKVNPQWNDIOCHNJFKLFBVPJOKZWTZHGCYLIDJGVYTHRKZBIHPZFJUXOLZDCIESOVHFRNKFYRUWTDMJGIEWTARXTXIASZQLBVELYEWXPTESHQGKPZRUGYAJFYSFTHEVXAIDLGCSPBSBRUKYGFYDNQIMMAMERJVIEALOZDMXJRAKCDWCMZFTSJWWNNSOJYRYCQVCUUTDHXUSUEVBK");
    msg.mmsi.assign("AKHZMFZKLGNTUNIEUGULRTRAHVWISXHVHMAFBFIRGHBAGDZOWOKFCJTILCWYTNQXLEJEURPAOBWHVMJUYRZPNLXFWSLUNRFEDBPPWKDIOKODQBMDYFYOIBSXICJTGPWMDCOURGUSJZXOWCAGVLZTDVJPKEM");
    msg.callsign.assign("SMHKBVOQCFMBEQYDECHHJWXNGPTPOFWEQGWUQZLBSXTKJWGPARAPVIXSCKRZMTUDYLDEVBWRAAIWYJPYTJUOOQ");
    msg.name.assign("MVEGLVFSKOWICZYRQTLOIVQFFWZKWRIOAUGDQDIAYOSXHXPJNMDRYNBQECWWYKXGGKEZVQRCBIKBBAKDNVMSNHIDBVMTCRJXJSKPJJALSXPRQYXPUEHXUNBXJWVIZOSFLJDOUTKISTEASLPOJOMMEYKZUHLYJQMPVLTPCNVLTHVPHYAHZDSECFCAABBBZZXGZDZWGPCHJTYFKLTCUQQUGBUULAUAMGENETSFMFR");
    msg.nav_status = 105U;
    msg.type_and_cargo = 236U;
    msg.lat = 0.3259596606396725;
    msg.lon = 0.3076816323705418;
    msg.course = 0.22747626763747308;
    msg.speed = 0.7482348074230383;
    msg.dist = 0.029566167789916165;
    msg.a = 0.9091098987064851;
    msg.b = 0.16030408513465988;
    msg.c = 0.7305422713621262;
    msg.d = 0.12556248549164362;
    msg.draught = 0.8668992591755813;

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
    msg.setTimeStamp(0.5613845012489861);
    msg.setSource(48696U);
    msg.setSourceEntity(250U);
    msg.setDestination(35121U);
    msg.setDestinationEntity(129U);
    msg.msg_type.assign("KGVRPFUUEOKNFHOQQCVPUYBXVZQTWFNMSXOXCVTWSNKCAFGFRLBPMRTSCAUFGLWZUBSSCXJANKOJEROVOD");
    msg.sensor_class.assign("DMNUJXEJCMVYFSRGIVKDTRPWHKLRVYHUTKXQSFFKVLIICDONOGWHECJZXZPOBACXBYKOFEMRJXWQQWOTCBDAZTBESDZFSOBTUUYFPNISFJWUIAZCHOWJAOYJMQNNYD");
    msg.mmsi.assign("DDBRIUGEVXDLFUCYIPRQBAFCGWYEGJDKLGKSRESNDJHVIZVOXJKOVRLHWTWSJNMIVYDMBMALAGGPCQJWOW");
    msg.callsign.assign("MVHURADGGYZPEFYXPRQLMWRLQAYTTGEBRXVFNYFVBLZECXFWBAAIDFIXLJCBPVHESJJKEKTMQEPNMIYTDOSOOJDJYDBUPJLKGBVWJQJRDAQGHSLARXUKYYZYWMHNUDEMWIKOGPNCWZSLTUVSECYNRSWNMPWABCUTZLTPDXXRUEIWZZOJOCNMMVSEOSHMVTADZQVBGQOWKRLFOHDJKXQSXGIGPUFBQCHHLNC");
    msg.name.assign("PMECIETMYIVJVGRUQBCKQTFLGBSKDYYACTWGOHNUFDZWMZICEXQWDSXCYZSOYHCIJFUPYJFTKKLATVNJTNNMUNDUEQZRMFDNDVBBGROBRVSCGMULYCSXWDNHFXFHHAJDOAOKWPREPCXFSNGARSHIGRIVZLQNOGIEKMORXKPQJDMUKBKMLKHVDQAAWZEEXPPWPAAYXIBLHYGHLRBSZWXOLWQQUJWVBHZEPEZFLGTSCNTYJSTOIVRJOA");
    msg.nav_status = 161U;
    msg.type_and_cargo = 89U;
    msg.lat = 0.16282486563799115;
    msg.lon = 0.5860129467050376;
    msg.course = 0.2632201306759522;
    msg.speed = 0.9670584565723165;
    msg.dist = 0.8057389647167889;
    msg.a = 0.40294171068959517;
    msg.b = 0.48852751777620296;
    msg.c = 0.23845482102832405;
    msg.d = 0.1642008848653157;
    msg.draught = 0.4761117265372278;

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
    msg.setTimeStamp(0.029287863092637756);
    msg.setSource(52980U);
    msg.setSourceEntity(230U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(195U);
    msg.depth_at_loc.assign("UVPABUIADDXSZYZCGKKRZPNAUSIOXIAVGTMOMRLWYMUALVQGRCSJX");
    msg.danger.assign("MGDLIUKKYFROMEWHFXAUIJUHBVRXQDIGJWVIZFECXKVOWHLJZBYBWRXQOCPNIOHFTJZMJJOXJLTTXQHJIPSBKMARYRQCHHTRHNSWPNZISAZFOQRBXCCQQCLCBKDPGXNKSTWIMAGAWLZORVOMUZMENBVETFVFYBVYXEEUGTDADTLWKSZGKABVYVZYFUZPMLRVSTWPLNDENMQEGYDPUYDILPPSCEIHFJHYADBKGJGUGR");

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
    msg.setTimeStamp(0.8427506473658357);
    msg.setSource(37489U);
    msg.setSourceEntity(254U);
    msg.setDestination(51346U);
    msg.setDestinationEntity(71U);
    msg.depth_at_loc.assign("FDBEHGGYKNTCBOIPQDHNYHSHORVPIYEFUBWOTNUZKNPJCELMOZYXQRZABQCCUJPNJTDIRQPIBSIWEHKLTXLEFFRXULKWKRISXJNWRDWWFSQCCOLWSVMRLEHJNILZYRVMHJQOHQDAXAVTGCPVAWSSUUIEGXMJDXTDUTTTPUELMJLAQOKSIZGRIBEFYKRMOYXVHBDYODNKCADVGFCCGKGBSQ");
    msg.danger.assign("TWDHJGYXOAVOSIGMCFVXDUUDXCAUXCHJEAMBPBCDZJGRZVJNIQZJSOGFZPISRWQHFREFGMKJKLZSTSPWYKVNSIXLQTEDANKYBBHNPHXAYSLRGZUEWWKKDSOSVOXUDEQBFVQOCKNCVLXQADPWWJH");

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
    msg.setTimeStamp(0.6781405657556003);
    msg.setSource(10468U);
    msg.setSourceEntity(105U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(246U);
    msg.depth_at_loc.assign("XVGOYAAVVPABCGZESNNAEBBRSLQATRSNPRDDCJIFBSTIWUW");
    msg.danger.assign("XBXDPIXMKJBLJLUBZVYHOHWAMQRNHQSRLMVQCGUWUGAHETPOKWOHIRTACWIFUBJEZWZOKPMFYXARYXEDZCYYQDZPODGTZIROAHQUNCLOTBA");

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
    msg.setTimeStamp(0.9204456155232793);
    msg.setSource(43178U);
    msg.setSourceEntity(234U);
    msg.setDestination(1066U);
    msg.setDestinationEntity(234U);
    msg.time = 0.48203364451870523;
    msg.x = 0.7589914285791737;
    msg.y = 0.9993811957338753;
    msg.z = 0.7207611909935501;

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
    msg.setTimeStamp(0.4595773624309484);
    msg.setSource(9659U);
    msg.setSourceEntity(26U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(18U);
    msg.time = 0.7716726868545213;
    msg.x = 0.7447324410362651;
    msg.y = 0.8002451175052991;
    msg.z = 0.06581055414183656;

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
    msg.setTimeStamp(0.9515285760528377);
    msg.setSource(21557U);
    msg.setSourceEntity(197U);
    msg.setDestination(22437U);
    msg.setDestinationEntity(8U);
    msg.time = 0.008648920822396877;
    msg.x = 0.20292985428046206;
    msg.y = 0.25311800594661027;
    msg.z = 0.13927924731670305;

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
    msg.setTimeStamp(0.34394407062285803);
    msg.setSource(3288U);
    msg.setSourceEntity(173U);
    msg.setDestination(39056U);
    msg.setDestinationEntity(152U);
    msg.nbeams = 248U;
    msg.ncells = 216U;
    msg.coord_sys = 114U;

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
    msg.setTimeStamp(0.7279422510151);
    msg.setSource(24979U);
    msg.setSourceEntity(131U);
    msg.setDestination(24659U);
    msg.setDestinationEntity(118U);
    msg.nbeams = 67U;
    msg.ncells = 22U;
    msg.coord_sys = 11U;

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
    msg.setTimeStamp(0.22000107833254268);
    msg.setSource(47518U);
    msg.setSourceEntity(127U);
    msg.setDestination(6767U);
    msg.setDestinationEntity(6U);
    msg.nbeams = 172U;
    msg.ncells = 87U;
    msg.coord_sys = 189U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.20961424629250314;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3098789845894462);
    msg.setSource(11390U);
    msg.setSourceEntity(152U);
    msg.setDestination(46362U);
    msg.setDestinationEntity(87U);
    msg.cell_position = 0.6339654324726532;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6569326632924248;
    tmp_msg_0.amp = 0.9288652838906509;
    tmp_msg_0.cor = 108U;
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
    msg.setTimeStamp(0.61042641410507);
    msg.setSource(27379U);
    msg.setSourceEntity(78U);
    msg.setDestination(60321U);
    msg.setDestinationEntity(251U);
    msg.cell_position = 0.7838400221693926;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.03608955194472385;
    tmp_msg_0.amp = 0.45863056919271716;
    tmp_msg_0.cor = 218U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.26591749818097943);
    msg.setSource(37888U);
    msg.setSourceEntity(225U);
    msg.setDestination(16137U);
    msg.setDestinationEntity(26U);
    msg.cell_position = 0.23590059674886432;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.12583154166073807;
    tmp_msg_0.amp = 0.14877368782663702;
    tmp_msg_0.cor = 238U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.28587691894274603);
    msg.setSource(8308U);
    msg.setSourceEntity(2U);
    msg.setDestination(16210U);
    msg.setDestinationEntity(124U);
    msg.vel = 0.8595331645507077;
    msg.amp = 0.6122996012513408;
    msg.cor = 203U;

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
    msg.setTimeStamp(0.9208679604341247);
    msg.setSource(39651U);
    msg.setSourceEntity(126U);
    msg.setDestination(29747U);
    msg.setDestinationEntity(63U);
    msg.vel = 0.20123075395874945;
    msg.amp = 0.3549365639265224;
    msg.cor = 19U;

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
    msg.setTimeStamp(0.8657263101407918);
    msg.setSource(37924U);
    msg.setSourceEntity(217U);
    msg.setDestination(27521U);
    msg.setDestinationEntity(62U);
    msg.vel = 0.9396899471083239;
    msg.amp = 0.6943940097166575;
    msg.cor = 34U;

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
    msg.setTimeStamp(0.5770412511136084);
    msg.setSource(48213U);
    msg.setSourceEntity(143U);
    msg.setDestination(7446U);
    msg.setDestinationEntity(163U);
    msg.value = 0.09582951242414972;

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
    msg.setTimeStamp(0.06675247431906906);
    msg.setSource(62253U);
    msg.setSourceEntity(92U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(209U);
    msg.value = 0.4025027955865432;

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
    msg.setTimeStamp(0.9053409693681252);
    msg.setSource(32544U);
    msg.setSourceEntity(150U);
    msg.setDestination(60291U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9508255939646433;

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
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.14742571181424102);
    msg.setSource(11321U);
    msg.setSourceEntity(153U);
    msg.setDestination(1520U);
    msg.setDestinationEntity(144U);
    msg.sig_wave_height_hm0 = 0.9960786899863049;
    msg.wave_peak_direction = 0.5615963909039445;
    msg.wave_peak_period = 0.5770981325320867;
    msg.wave_height_wind_hm0 = 0.5027169778875111;
    msg.wave_height_swell_hm0 = 0.25590331252669196;
    msg.wave_peak_period_wind = 0.540697271288647;
    msg.wave_peak_period_swell = 0.6802111377610327;
    msg.wave_peak_direction_wind = 0.5315209810560164;
    msg.wave_peak_direction_swell = 0.9534713727311991;
    msg.wave_mean_direction = 0.869862617113258;
    msg.wave_mean_period_tm02 = 0.26876406162421074;
    msg.wave_height_hmax = 0.35545912622631515;
    msg.wave_height_crest = 0.4991034893691154;
    msg.wave_height_trough = 0.42795557516697025;
    msg.wave_period_tmax = 0.6162261755611783;
    msg.wave_period_tz = 0.29383180110511353;
    msg.significant_wave_height_h1_3 = 0.003906433896842643;
    msg.mean_spreading_angle = 0.7348318078586504;
    msg.first_order_spread = 0.3214302102908756;
    msg.long_crestedness_parameters = 0.5999119599598851;
    msg.heading = 0.435371907472365;
    msg.pitch = 0.43829523434739837;
    msg.roll = 0.25690695330375746;
    msg.external_heading = 0.3960671164737799;
    msg.stdev_heading = 0.5106865811468053;
    msg.stdev_pitch = 0.08987295629916059;
    msg.stdev_roll = 0.07248873969679781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.317002979784892);
    msg.setSource(61043U);
    msg.setSourceEntity(244U);
    msg.setDestination(5267U);
    msg.setDestinationEntity(191U);
    msg.sig_wave_height_hm0 = 0.3880512392219816;
    msg.wave_peak_direction = 0.5939875071721842;
    msg.wave_peak_period = 0.10455212687285553;
    msg.wave_height_wind_hm0 = 0.12822463489057945;
    msg.wave_height_swell_hm0 = 0.18178632785356108;
    msg.wave_peak_period_wind = 0.41314039672574354;
    msg.wave_peak_period_swell = 0.9972749139807613;
    msg.wave_peak_direction_wind = 0.2315151653030869;
    msg.wave_peak_direction_swell = 0.48279354836066535;
    msg.wave_mean_direction = 0.2885542835620576;
    msg.wave_mean_period_tm02 = 0.6592644379036061;
    msg.wave_height_hmax = 0.7702345356649271;
    msg.wave_height_crest = 0.40875548936688544;
    msg.wave_height_trough = 0.9294713754372101;
    msg.wave_period_tmax = 0.48336476505969506;
    msg.wave_period_tz = 0.2255208429879243;
    msg.significant_wave_height_h1_3 = 0.4089655233608992;
    msg.mean_spreading_angle = 0.9437243725875321;
    msg.first_order_spread = 0.7698433879154473;
    msg.long_crestedness_parameters = 0.2488153746335573;
    msg.heading = 0.39110718465806615;
    msg.pitch = 0.482096655890186;
    msg.roll = 0.7135272899425491;
    msg.external_heading = 0.3476941755532653;
    msg.stdev_heading = 0.506092423410086;
    msg.stdev_pitch = 0.5137485479164391;
    msg.stdev_roll = 0.9672528013003492;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.6031073429059522);
    msg.setSource(19262U);
    msg.setSourceEntity(4U);
    msg.setDestination(6189U);
    msg.setDestinationEntity(199U);
    msg.sig_wave_height_hm0 = 0.24139389199746708;
    msg.wave_peak_direction = 0.8692196718777059;
    msg.wave_peak_period = 0.7175322256938512;
    msg.wave_height_wind_hm0 = 0.7913538739305458;
    msg.wave_height_swell_hm0 = 0.06734179808433427;
    msg.wave_peak_period_wind = 0.1588617243375312;
    msg.wave_peak_period_swell = 0.0013452219130783982;
    msg.wave_peak_direction_wind = 0.9696789837392922;
    msg.wave_peak_direction_swell = 0.6207660465707548;
    msg.wave_mean_direction = 0.01429387588570652;
    msg.wave_mean_period_tm02 = 0.9584117578176665;
    msg.wave_height_hmax = 0.04064533216252619;
    msg.wave_height_crest = 0.4275634049617226;
    msg.wave_height_trough = 0.8054469563870893;
    msg.wave_period_tmax = 0.6594011740845952;
    msg.wave_period_tz = 0.9801407564985324;
    msg.significant_wave_height_h1_3 = 0.20031212433120282;
    msg.mean_spreading_angle = 0.44700319062562044;
    msg.first_order_spread = 0.05694497016603817;
    msg.long_crestedness_parameters = 0.8440576050432854;
    msg.heading = 0.5459483160803349;
    msg.pitch = 0.9659492100484908;
    msg.roll = 0.24472050443062887;
    msg.external_heading = 0.14445303823065347;
    msg.stdev_heading = 0.004853356632841144;
    msg.stdev_pitch = 0.35849406378348536;
    msg.stdev_roll = 0.5940610200653604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.2680517273385319);
    msg.setSource(45107U);
    msg.setSourceEntity(73U);
    msg.setDestination(3792U);
    msg.setDestinationEntity(159U);
    msg.name.assign("LEPWMLTWABAAWQWBWJRMQKJCPHENQVXTISUPLXFGZAAEUZPSGUKFQHMTQQDNBVVMCHYBYYFKDWNRBFHFQEOZZODKNFXORPKAGDIDYEVMCDGAWITNSSJGSDJXSEOBTNVUBGUJRXCWZYDPTRZRVVTDTUQANHXLQUWCHNELGMVZIEVUUJYCIFY");
    msg.value = 192U;

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
    msg.setTimeStamp(0.790909283132927);
    msg.setSource(14622U);
    msg.setSourceEntity(8U);
    msg.setDestination(52273U);
    msg.setDestinationEntity(55U);
    msg.name.assign("CPRAMKTBEVZTUXFKJIDLCLNPMQVMBBOCWYDFLNYFYQCPCYDJIGRXRQXGZGTSSHEYRBUALTYQWXGFXEOVWYWAWTCWPIXDZLLUAXUAFCKTHKSUPTKJCBOIJKJDVHZHJWXVWLTLVYKOUNUZVZQUAMJIZMVBID");
    msg.value = 28U;

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
    msg.setTimeStamp(0.012183956795441375);
    msg.setSource(52900U);
    msg.setSourceEntity(218U);
    msg.setDestination(54242U);
    msg.setDestinationEntity(210U);
    msg.name.assign("QDQRTMXEQKNFSWFHTRGIEIRNUWZKBMFIMRLSHHTXMLVXOCHAUSGEUEODLXZUZZCDDLECWCKYTPGGSYZIYXXRVSOBWVZAXJKNY");
    msg.value = 0U;

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
    msg.setTimeStamp(0.5641684724856834);
    msg.setSource(45397U);
    msg.setSourceEntity(207U);
    msg.setDestination(17459U);
    msg.setDestinationEntity(222U);
    msg.name.assign("HJQIAIIERFIGREENPVISCZXTDBHNMFKBPOHFRXSXOQWMZPKBIRBYTFWMXODPOLCLVZUKZGVHKLNJSZNDCLZRMBMJEIMAPQAAGCRBBJSGQBTCOJEWOSLTCDSMNMUAGAAPDIUGUKHYLVYVDFMZFSZVWEVDQXXGLDOEGSPNPTTHQXTKUWHGOCPDKBETSWKUUZWV");

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
    msg.setTimeStamp(0.29566427770139714);
    msg.setSource(48028U);
    msg.setSourceEntity(44U);
    msg.setDestination(45925U);
    msg.setDestinationEntity(160U);
    msg.name.assign("MBZLYNHOZGWKUADLZKKWBDMGXDRDQOWXCNOIXLVABCRVSWNTMPRPPRCJYPXVJFUTYYUEIVETMEIEFWCZNXOESYDHPUIYFNGJGVQVXLMLWRHTIEIMGCHLDWUQUJBSCJWFRUJLNZWNOAZRCNUOQKZQVHGSAEQFNZODCFSTGYLVFPYOEJQPZCDVBVHNRGIIEHKUMOZKOHCIFGTYMQKTHXSPIMQRTEQAABAHU");

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
    msg.setTimeStamp(0.16847670371700207);
    msg.setSource(7931U);
    msg.setSourceEntity(211U);
    msg.setDestination(62063U);
    msg.setDestinationEntity(45U);
    msg.name.assign("TIQMCGFIWHTSQCBQDVZVILBCYTVERHDUYMTMHJRRWVETKUJCMAKLZXEHFQLQMWCCGZENBOOZGEHPQRANNKRXEBMLVRYPFJNKKWDHNUCFECTABNTRIJPKXWJNBWDALLVMSPUSRMJUHHSFUGJBJGOTGDDSOPDQAWTQSKDRBKKPGWYOPYLOYFOJIYXSZZAFEICHXNLZJVYXVLXOCQTBAPKHEOXVGLNIGAGUFIIZSUX");

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
    msg.setTimeStamp(0.3003251809519324);
    msg.setSource(30895U);
    msg.setSourceEntity(205U);
    msg.setDestination(44639U);
    msg.setDestinationEntity(208U);
    msg.name.assign("CCVPJGHZWFIEMPGVRDDVZEVSNKCWPMROHJCLFGLBFULL");
    msg.value = 241U;

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
    msg.setTimeStamp(0.4736274138198473);
    msg.setSource(54675U);
    msg.setSourceEntity(171U);
    msg.setDestination(27069U);
    msg.setDestinationEntity(76U);
    msg.name.assign("AEIRSXMTEFBQZDIUHUTPUCIXPLRTLMWWXUYDEYZSLMMIRCKOMVVDQGAWSHIOMJGRQPTXINUIBZEPOOMC");
    msg.value = 141U;

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
    msg.setTimeStamp(0.7513980243569601);
    msg.setSource(13525U);
    msg.setSourceEntity(150U);
    msg.setDestination(34779U);
    msg.setDestinationEntity(145U);
    msg.name.assign("IRTYTYYKNXFAGMADINMMCNZIKNUPYHRCQRBCBMJJWFWHAOUFOGLHSPHWKEOGYQACPRHZQON");
    msg.value = 83U;

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
    msg.setTimeStamp(0.1654259630496402);
    msg.setSource(33888U);
    msg.setSourceEntity(214U);
    msg.setDestination(1408U);
    msg.setDestinationEntity(77U);
    msg.value = 0.07607428090147228;

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
    msg.setTimeStamp(0.9300191549849928);
    msg.setSource(14348U);
    msg.setSourceEntity(138U);
    msg.setDestination(29054U);
    msg.setDestinationEntity(86U);
    msg.value = 0.8897668735657009;

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
    msg.setTimeStamp(0.48419674723024386);
    msg.setSource(31092U);
    msg.setSourceEntity(96U);
    msg.setDestination(50228U);
    msg.setDestinationEntity(229U);
    msg.value = 0.14860028261851888;

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
    msg.setTimeStamp(0.016006375370559822);
    msg.setSource(9529U);
    msg.setSourceEntity(54U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9750907905476062;

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
    msg.setTimeStamp(0.2641815864365229);
    msg.setSource(60770U);
    msg.setSourceEntity(182U);
    msg.setDestination(64735U);
    msg.setDestinationEntity(127U);
    msg.value = 0.23288394811277313;

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
    msg.setTimeStamp(0.798280672996692);
    msg.setSource(61329U);
    msg.setSourceEntity(160U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(29U);
    msg.value = 0.6850992441277014;

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
    msg.setTimeStamp(0.10873446636032258);
    msg.setSource(20277U);
    msg.setSourceEntity(188U);
    msg.setDestination(15771U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9235620229422477;

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
    msg.setTimeStamp(0.941921658103595);
    msg.setSource(5480U);
    msg.setSourceEntity(156U);
    msg.setDestination(21289U);
    msg.setDestinationEntity(60U);
    msg.value = 0.035665933410063966;

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
    msg.setTimeStamp(0.3906042040394605);
    msg.setSource(37052U);
    msg.setSourceEntity(72U);
    msg.setDestination(37129U);
    msg.setDestinationEntity(106U);
    msg.value = 0.5833318011325228;

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
    msg.setTimeStamp(0.7301045975429199);
    msg.setSource(24657U);
    msg.setSourceEntity(203U);
    msg.setDestination(56311U);
    msg.setDestinationEntity(130U);
    msg.restriction = 224U;
    msg.reason.assign("CREDJIOQQOZSBISTSIBPM");

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
    msg.setTimeStamp(0.4019016442976291);
    msg.setSource(52974U);
    msg.setSourceEntity(153U);
    msg.setDestination(25420U);
    msg.setDestinationEntity(67U);
    msg.restriction = 30U;
    msg.reason.assign("SGZENMPSEKEZLJHFXFHJPPKGUCAQXPHMWCMXIPMUVPQBJQNZGILOPETCVQKMBLYDQTAKNGNAZYADONFIUYPCIFQXLOSNBGUCRRSOBXYNIIYVTJZAXVTARVOTZRTYNJQDQSZLTBCGDRDZUCYSIFEEKIJCQALHUOKOAHXIDYDSZQYGXJ");

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
    msg.setTimeStamp(0.834496660568818);
    msg.setSource(26391U);
    msg.setSourceEntity(170U);
    msg.setDestination(6860U);
    msg.setDestinationEntity(116U);
    msg.restriction = 112U;
    msg.reason.assign("BBLKHJDPSCUBQATDOVQJIIGQBWVPKRJMXLWGWNKDMQKORGCEYMAQFXCLYJWNIPLCHAECRCJXAJRUOKJIHVFZXGPZYWBZXVUCKXSCODNMSKQDOEOKFOEWZGSYTJNDTNMSHETGPQQYRUZAMPNFBBDTIWVYSBOXUOJWJVDWB");

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

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.6682046825080556);
    msg.setSource(35617U);
    msg.setSourceEntity(117U);
    msg.setDestination(7993U);
    msg.setDestinationEntity(123U);
    msg.op = 45U;
    msg.request_id = 3309024711U;
    msg.entity_name.assign("QFGCBXETGSIMYUIVOLLIRKGFLIPGSVHYWBHHJBNKMDQWNFTZFUOHRNYRUYWXYFEOCSAEKFDQXMJUGQRNTECCTOHGWKKLDIACWUXCBMLBLALOGZKSPPZENITERZPTSBSASVYRMWAJKFUIZFNEDTKAVVXGXPUUGJRNRKNQHUDALJBOYXKJZXMXETARZSVDCFOZQBHXHCAVRAHQPNIMEODGTMLPWDSMDBMPCYOCFYQOJDZELBNVJWSIJWH");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SQFOAOAQPHSULBDMBOGWJNGXSAGFHZZTUTPLMYEPPAJC");
    tmp_msg_0.type = 97U;
    tmp_msg_0.default_value.assign("YJJVUKWOBPAPEQHSKMBQXKUJFDYYONMXDBMYQSEGDBUPTAFIEFHKEEERRAWZXMDOZQKAQUBTIPMXFANEVXXICAMDLDZWPNIZXYCJSLHLAPCUWFXHNCTPGQNXGVPUGWFRBWNYGROVGDQSLNLPGEHKNWOGEONFCRBGITYBDQYSTHJVZLSIRWULSALYRTITIAKH");
    tmp_msg_0.units.assign("TEXIXRKJXOKPLQTPFWSLQOZYNVZIEGSMHEFOMQDYMNJVZCWZRFEXOKGYGHEJVWEEYDSKRCCXTHXVAKIVIUTVBUSXLIZYORNSBMOPHBGASMTWDXWURGTFRFAQPOGURILYWKKRCFQZQPNMYAHYSFAUIWZHCLSTQDOGZKQVCULLFPJJWALMNUWMLJERBOVJUDIDUDJHJXSHQBDHITTPMBSPVNNAMBNLNXBFKGDOYBCEKGVACYJNQWUCGAAFPDZ");
    tmp_msg_0.description.assign("HDCLDRFAFHWYNKHTIZXMKSLGRFGXSINNXZIHOVEIAOUYCOEDVDGSOPZIFCLYLABLXTPPAARVZUYSQQUVVZTRGLWJGMRUPRFUCTXKSJNEAAPYDHJQKFOZXIYFTUEGPOIGBBSGKCSCJZKNBRADMCPYFMN");
    tmp_msg_0.values_list.assign("ISMZGTAINDVGKGNRLVONOQATXZERNHFTGZFYXRZQKJCYPEYHLTKOBHJUSDRJPDRVAWMIALXEGIMKJBVAVALWWVXFASFJUEOHXORYCHJQECWQGUUZGLJVQVDSBKRUKMQEMLKYNBIIJSXXDWQBSZPDHDEURVZSFIRFBVNAYDPEMWNBCLJMMPTNHPTTBBAACCWKGONFUTHCFOZOZLDQYSLLIBOPUNMEHSQHEXGUYCMKOXYXWYKC");
    tmp_msg_0.min_value = 0.0459598973705293;
    tmp_msg_0.max_value = 0.14445322362264246;
    tmp_msg_0.list_min_size = 152U;
    tmp_msg_0.list_max_size = 102U;
    tmp_msg_0.visibility = 246U;
    tmp_msg_0.scope = 109U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.23309757439536583);
    msg.setSource(33578U);
    msg.setSourceEntity(48U);
    msg.setDestination(19192U);
    msg.setDestinationEntity(199U);
    msg.op = 4U;
    msg.request_id = 2985166278U;
    msg.entity_name.assign("QMXSEQEFKGAIJCQBNBQYDDHTTUFCBOJVFMKTXBBSMHJRSPPGWHNZXIOWDHYELODUIJTXKKPDCBJJCNXMQEWRXLYIXJNAXZESLOMQWLWATURVWYRTFAOTBHPPZYCUXEEKGDNAJKVGGFPQOMLDVUNRFHZBVMXPAYDCHWRFVROGGFWCYVKEQMVHINBLIZUVULDGNBHTLDZWGYPAWSIMALVIAJAPEPCCKFZTULKCQ");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HFJBNPXQYHZSRKSNMDUAGVVGEKAFMDMPYRXUVKLWYBVVXYNFIZQWMNPBXACNKTZFCAWGRYDKJVOPNEHGTJLJDUEJNTOBBLBYUUAKTFTIJOIQOYGTMGLGYJVIITERSREQHMBGXWWGTEVGUSKDHCPOZSFAMZTQWFHPNBRALQDOWPDJKFSALMKQCPOTZNVUULYLNPHQZXIOI");
    tmp_msg_0.type = 71U;
    tmp_msg_0.default_value.assign("WKQPTSCWCHCUARUXWIQJCIBVFVNMEJIHSFGHJSYTWBGZAJZVGVIKBNPAKUPORN");
    tmp_msg_0.units.assign("RMLNZJUAXRWVATLAWLHMIUDCOLSDVPMXVDUNBJTWLRJNSJQZEKJEEDYOZDXNWHZQRCRYNZREYKKNYFASYPBFMSYKLTKDXYQOKRHVOCPIFWTQGPRBSHOMBFBOTIZHXXCPQLSUEGWPLOM");
    tmp_msg_0.description.assign("QORUAWCBFPTPSDIAKMQGBDXTFACCEUFOIYFURLOJUSYWKJRPIDXNJNMQJEELOHR");
    tmp_msg_0.values_list.assign("AUMKCLELWDGPQJLSBADZWJWGOGACMLHNYRCIRSKPIGRSOGVXAFUSBHDWKLGBLIZZTFVAVTPPOTOMXITSTTBRYZAZVCJIKFYNPNRZZFJNPDMXLYRSFJBMPHMOZQHYKBXBCOLTEKWHUNKMKQIZFJPFRHOQUHODDAJXX");
    tmp_msg_0.min_value = 0.3940980180115309;
    tmp_msg_0.max_value = 0.4321755152888047;
    tmp_msg_0.list_min_size = 222U;
    tmp_msg_0.list_max_size = 151U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("SRFRXHNLGQFLYIIJCUCXOLVQPHVNMYKKYBUNCDNBLCUGJLQHTIENDNLOPLWEQSWRFTHZWHSPZVCVAEUGFIERSDAFEJAKEGSMTEVYXFGTGOMUHKGGQZBRTRNKSRCEPNLVOAPWDRAXOMJMCAMEGDJMBNWLXQIUPYWQFSJVOTHXIVVSTKJOXPHVZSAOBQLJKB");
    tmp_tmp_msg_0_0.value.assign("ALRACTVBKBIZOZWDLKASIJSLGXSRYYDYRETOURNFOKEUPLOXCMBBEOCPTHUPSWQWDQFJUKLXKXQCCVWOWEPIEKTBQIGMRGSGHFZFMMEVIAFJHNZKQBINHCYTTZMQSRHODBNUJDHLXQXKQXNQSPJKZTWXYJDBUWCYVGHJLZZTCDWGSMFUGEKZLTYMAECPGJSRRARHFDDNVCPGQIPYOBAAUFDNVYOXTZGVAFUWXLYPSMBVMPHNJENILIHJIWMEA");
    tmp_tmp_msg_0_0.values_list.assign("OYTWQVFVLAGIPCUGLTMRCACSCOWLZONTUGBXZTGPMFWJABNQDJWJVMHPHRSCEAYLKMGLWJXRNBDZAWTOFFVDYWSROXEMBESQVWHELRMIJ");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 131U;
    tmp_msg_0.scope = 110U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.2734399612097054);
    msg.setSource(43902U);
    msg.setSourceEntity(93U);
    msg.setDestination(32341U);
    msg.setDestinationEntity(135U);
    msg.op = 44U;
    msg.request_id = 2760379358U;
    msg.entity_name.assign("MFGPNSLZBOGFBBLDKEMIDUHOUPCNXWTEAMFMNJKHIZYJBRBWYBXZHNXEZTXEXUCFWIPBGUNASOGQWOYNDYIXETKVRFPAEPYVYCAKZXDUBKRDPQRUWEAQOHLMGUATRLQHCOEAAVRRXJAMSICGERGFSKFMQSWNTHPSJOVVGFGMQTEICDTKZDUBHWXGKOXFHHTDWPRMJNDJLQIMQVLSLIZLWYSICLCVTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.7122553184523996);
    msg.setSource(36193U);
    msg.setSourceEntity(118U);
    msg.setDestination(268U);
    msg.setDestinationEntity(101U);
    msg.name.assign("OKRDGMHPMJSRWIJOHIGUWUAXBVIBCMGQKMGKMQNEQOLQFXWSVC");
    msg.type = 56U;
    msg.default_value.assign("JSHUUMMPOVVDUDJ");
    msg.units.assign("QCQGQZANYUSANUOZGGMVEBLKYUWPEVTYKKLMSBBCNAPKDCBGLOCDJFEWQRIPYHXRWFIAWSDLBMHTAENGJZQOJJIIBGZIPUYVJOFCVZKMMQUOWZYNEXJHSPOIWLPINJHVIUIQYVWFZPNYEGFDGRUPKCEQHTWUBDAFYKRMNZDZZRAOXOFVJHQHKSDBLLTPTCXTCUSQTHAVSTGNWVNLY");
    msg.description.assign("WDPFYSZCANYFGHJZVCPBLQFFLEFKJTBRRHMIMCKSRXPZCOQOBNEMTTOZMUEWLAUBAKHWIJVLGDPXBATCOKDAMSQDFQYFVMUIYTUXCIKODGTDBNHITPPZVRXIWEOWLDREXQGJOQFLVFWYBYSQUSTJVEMB");
    msg.values_list.assign("YFQZSTAZTNETSFBPWXFJBMKWNKZUKQUCZQTXYEPMOTCBYIWMLNSYJUUHRIHHRDPAEYHBQZTDBDTROCFLMZQRXEMXMLGWDTCMJJUKKCLLJTVNGDWABX");
    msg.min_value = 0.7433562028489588;
    msg.max_value = 0.9859425125654157;
    msg.list_min_size = 27U;
    msg.list_max_size = 179U;
    msg.visibility = 73U;
    msg.scope = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.44857110789060795);
    msg.setSource(34932U);
    msg.setSourceEntity(118U);
    msg.setDestination(8422U);
    msg.setDestinationEntity(169U);
    msg.name.assign("MSAFZZFNFNQGHVIWKFJIBTBVEHBWIIOAMHDTYUJQQVIUDEAFBNPGSYOMFVDCLUZQWWFJZXPMUXSUOKCLTHPMZLNJKICLRNLIGQLVOVGLCRXYOMXDXEJAOLICJQRJPUSHGIZGLKSBW");
    msg.type = 146U;
    msg.default_value.assign("FCIGQJYEFXDEMNUQVURCUAHQUKEDDPCXAAQRCHBYFFJX");
    msg.units.assign("SDSMCHXGLQUICTDATFOVZDEVGAQXVOFVGUFUCAUUFEOXUYPHQNXDGYJGIRSOBKHQQCKLBTTWOUNNUEDREJKBLEXZDPGYTWLBDBALMJRKNPYNGRSCIBANIERMBKXPHBWGCKJAYHILFJCJVOVMIOVRTNWCFQLNRWOAHEEXDEPPWMHQRSAAWTSHQXIXZEMTQJO");
    msg.description.assign("UQVZAJPJJHGEDPSBKZVHHBNOXJCNAHMUDXUFOTWBVSEXGTXMLUXNSVYNCZXZIPKVWMLIABERKNAKNEWKZXQINCJLOGJDURFHSOTWLYIUQILEVSCSBVMCRFDCLTQRABWKAPBSDPZPENEQXPKGZICLUMZWJWGXGHQJNQQUK");
    msg.values_list.assign("AHNGOFZOSCHMJUWGYAUOBOPBJGPFKMVOZTEROYPEEAPVRIITPDYRNNRQWJXKZAGLAKFHPXOQRLZDMSZVJFETEVWAKLRECCYUFDLWXNKGLNFCDDQWGUNEMBXJVINBCRMSFSERQRAKUUMKAITJ");
    msg.min_value = 0.017715630666476634;
    msg.max_value = 0.49709240158511836;
    msg.list_min_size = 54U;
    msg.list_max_size = 137U;
    msg.visibility = 177U;
    msg.scope = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.5973195099468912);
    msg.setSource(45086U);
    msg.setSourceEntity(59U);
    msg.setDestination(62596U);
    msg.setDestinationEntity(250U);
    msg.name.assign("ARTJKHYWLELSQQDSCMVACWGQBYHKOPTJPCRYTHYIBPJZNUZYFEELLZNOQHEZECJGKQNXYUVFVAAWFDOBAULDQIIBGPAVMNUHOSHDPRDXKYBMITTFAYUNMXMDRRYWQCWTUOPZHWBOZPCGSIUVSVLOUXRBJXPVJKDVGCKZPTFQNUZWGDJZRTJNGWFBCGCREWLYFGMSLINFHMKFVHCOAFLIMJHMEEKKDMPSNBAOQK");
    msg.type = 208U;
    msg.default_value.assign("TXKUAPPDWREBDLHRKFSJCFWAKISPZABUUZMBGPNQIMTXRVGVSDBDKGVCHDKYSCWPSEITJUQFDDCOAUAZLQEHCYMHFOETSNXNMHBRZNHJPBGGFUVNBITYWSYCGXQMRXZAJIOQHQRTRLEHCGDJKWIYCTFHYJPEOLOVWSWYRAVMSKLCVOFGWGUIBUE");
    msg.units.assign("XIMHTQLGOQVLTCTRBBJOYDUUKSWALROEJPGYXYUUVCFNGWGQOORCAFDWUNZKREDLGEX");
    msg.description.assign("BMPKXYPWLQVYEBVBGHFXZUCBEGWGSKTRXZHDTYQFDMOEEXTNGKMBHKZULBRJGAWOSTIGCYFQZLJFGEOABUTOQTSZETZLNROPNNQCIBCILARPJPRCMTEOMFMAQDIAJITSTDFPMWPVUKDFPDINNJCCLSDZIRUVOWSSJCVEROYRUNVDHG");
    msg.values_list.assign("UOSMUNBGQELRFXZEVOCRMAUUQOAABHUYOW");
    msg.min_value = 0.3260253658089558;
    msg.max_value = 0.4645226027047058;
    msg.list_min_size = 165U;
    msg.list_max_size = 128U;
    msg.visibility = 135U;
    msg.scope = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.27713945593327893);
    msg.setSource(13239U);
    msg.setSourceEntity(173U);
    msg.setDestination(27162U);
    msg.setDestinationEntity(190U);
    msg.param.assign("CFBBXLHVDCXLVFGWKSIHKFPVLUYQCPBKWOJTYCQNTHTCXIXJBEXNBVZEWHOPQJFOL");
    msg.value.assign("MRTUUWKOWVLXGCHGYZCFYJLSDIVOBPSNYFENEOAFFNJXHZCHQDDBE");
    msg.values_list.assign("YIEEKKBSHLURZFHDZKGZWVIWNDDMTXNTSQOYHLVCQAXVHMVWZIPCXFEHWBITDYJUALISUJGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.5526797802811212);
    msg.setSource(23618U);
    msg.setSourceEntity(94U);
    msg.setDestination(6363U);
    msg.setDestinationEntity(52U);
    msg.param.assign("GJROTCNMOUYVOPPVBZNYPGAXUYEAFIKLTBXXKNSAIXWHCFXLIQFDYVCSAZZBCUTFLDLSGKOVXTBJMEXZPZYWNPHHYRUTVZEBLOPAIMJYABNKGDVGWJIDRDHMQTFUIYCIDNRUIFAPQQDFKJDLRBSUZZEQORLWEKCDJEUZQKWKYSVWLTJCMOFXZQHBLKPOMSMS");
    msg.value.assign("ZUXPXZGRQZXVTRWSFPWJKTKTHOOCVLZNOUCBGEIIPWNMCRHTDBIFADFJCXFYAOZKYBJUTAXKSCJVNDHGRLEJQJRNMGSQCJGLFRCVKLFMHTBHKVFIBVIEASYIOUQZNXRKEFXABAJZLOYRESAJMYWUHYASIRPSFAHZQUOMDPPOXLVUHVDQPBOGDWEGOPYWMADHSEIDLTDCFKZWBXKBLXQTJMIGQSHSDYNPKENME");
    msg.values_list.assign("ZXWBDTHSHNPBJLJERAFHSBIUOHHBYQOZMDNBWKQVKVYXZKHDXRHDARNQGJMRFWLFGAPSMGVKYIRGECEVXXUBRCKIPIJWTEFSVUWJGYUTGYNETMTBVTOBNZXJRISVTLUCJCNLPAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.08063354797023081);
    msg.setSource(15466U);
    msg.setSourceEntity(209U);
    msg.setDestination(51421U);
    msg.setDestinationEntity(25U);
    msg.param.assign("EZPLSSYLMXKHFRIGCXJAAVWSQZWFSEJYFVKINDBWNNBDCONEMPQCHFXKJTJZRUDNYQMWOTLROXNPUGHQKTUCOXLDKEAXDWBBGQDPUCSKJWRCGYPBOLHBEJUDISOHEPDPOBIIT");
    msg.value.assign("QEALEAVRQFGRYUIMJNTEAFWETHPXPTJGYVVBPIDIUDRSDLINANXEJGXRYRXTEVZHTRPJYFXQCANCYKPNGTQMMHOSZMKXKJHOBDKREZIBKGWEJQJFTISTKUPVPOMUFFVCVZLCWDNVRZYCZMZRUUSEXWGZIHECMBOYKGCHXHFLGQLMUDBFLBAVJOQJAUJOMQDSNUC");
    msg.values_list.assign("CXMSOSXQHVFHILBXWTHUXFYYZSPLXULVCBDEKCVNIVIGEBAVZUYYEZWDFTRZWTARFEPMQAOIAOAUZUSOQUXBSTNBSWWIITKOHTZUZYLJMOICRQJAHQKJTQDPUDNWFKGPMHVKFNMTJJRDAQXZQNYRRHBSDENUNENBWOLWHXHCLBVBLHAXVQLLNAKPFFPFWJRJGOTICSGCMDAGXRORYMSJPJOQMKEZEPGVEWPRPMK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.45044295738780304);
    msg.setSource(62281U);
    msg.setSourceEntity(148U);
    msg.setDestination(50836U);
    msg.setDestinationEntity(29U);
    msg.op = 236U;
    msg.version.assign("QBBMJPNAIQRZKHSFCMLWTTUXTCIGGFIETLWZLVYLJWTSRDDICUOQENCHJS");
    msg.description.assign("FEKNTUYIHRVXEDOYDTAESJKVPMUWGKPYLGKHIPCVVTJKHZIFAHQSMLAWCTFDETJEBVWQYCEWGXRUNIUOLQRNDIXGSCHOMFZKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.7111461991664519);
    msg.setSource(15472U);
    msg.setSourceEntity(103U);
    msg.setDestination(3122U);
    msg.setDestinationEntity(159U);
    msg.op = 216U;
    msg.version.assign("FUERVCPWCTNOWXZRZIWTXRUAXBMZRTCQYQVZVUCFJSKDJLXMLFBXHINGDWKBGEEZTLACNRNBEHRVPQSMBBVPCMLDNIAQKTDMXKAGHTUFAESQLOUBYQWHMZANREIZUAVNKXESYPKYDJGJZFPJCYPOWFTOLRVCKSOPSYJPVZRNWADCGHGHFVTBNWMVPSWUKGKSJLPXMFOILJBLSYJDQIUAXEEIOEYOYOOBXH");
    msg.description.assign("ZHYOQBJWVQGVNENWYFFJRBCYVSIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.8875158199207949);
    msg.setSource(46468U);
    msg.setSourceEntity(253U);
    msg.setDestination(11466U);
    msg.setDestinationEntity(64U);
    msg.op = 68U;
    msg.version.assign("MHWOXZFFABUNGU");
    msg.description.assign("PSFLZQDALQLBEASIWEMIUYWWJXYKOVIZXNSXPEDJRUWMHBTQNGGNITCFHMTWHKFEQAXIVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.44389047114467794);
    msg.setSource(11763U);
    msg.setSourceEntity(195U);
    msg.setDestination(48660U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4352408890280207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.5908209768606282);
    msg.setSource(46076U);
    msg.setSourceEntity(112U);
    msg.setDestination(23145U);
    msg.setDestinationEntity(58U);
    msg.value = 0.006891341679669205;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.8217734375034788);
    msg.setSource(21553U);
    msg.setSourceEntity(105U);
    msg.setDestination(14318U);
    msg.setDestinationEntity(201U);
    msg.value = 0.19692611033977647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
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
