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
    msg.setTimeStamp(0.829706104788);
    msg.setSource(6083U);
    msg.setSourceEntity(0U);
    msg.setDestination(23923U);
    msg.setDestinationEntity(101U);
    msg.state = 210U;
    msg.flags = 174U;
    msg.description.assign("EKEVNXHTRBBWPYGHFAINGCBYEXGDQJNQKSXXNSJCEICXVXRSILAIYETOZQEPCOVKOCWAOILAKNUQSJRZTQWRVQXZWFOKJTOLISUBQYFMBWHDMPGNCNGTMWJRLKCRNKSJPQMFAMRKDBIMZZUEHKCEYACSCPPKQIABRXMPLHTDHGTELVVDZZBLISDFFPXAGXJGDDUTZPDFRYYTTFOWVUFBLPOUSJGHEUOUMLVJUHQUMFIWYDARJSZHVNWGYWL");

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
    msg.setTimeStamp(0.865943304883);
    msg.setSource(18374U);
    msg.setSourceEntity(13U);
    msg.setDestination(21537U);
    msg.setDestinationEntity(233U);
    msg.state = 190U;
    msg.flags = 202U;
    msg.description.assign("JZMNETGVJHCRMDLKWTXUPGFMXMMXYXULFYLCFIWXCZATSDKGIRNQEIPIZBZADOGSBUFVPQHKFQKEJTNQSOUGPVSANVIIMYLIHCMDLLGORUXUSPRFZWLETZFFVVBCAPLQOWYFKPNHWZKAVNJXOQMBDHUVGVUZAOYRNBSKBJHASQBTXJAWFPBURLMYBCJAQODOHCNHIEJCCBUOWTWWSGRJAERPTRXKIOERQKZYCESNGHPXVELTDMDYQE");

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
    msg.setTimeStamp(0.531705142432);
    msg.setSource(45077U);
    msg.setSourceEntity(234U);
    msg.setDestination(23539U);
    msg.setDestinationEntity(140U);
    msg.state = 146U;
    msg.flags = 126U;
    msg.description.assign("RRESACPPRPYFXXAIWUZCMBKNCRTHQKRCUBFVVJLKBCFMMLNDCYTZNVGPWJTEZJQPBAFNHDRAGEXUBWBJAYLIAKZDYPYHFLNDSKBOEZKPIYOJQWGSVBDZEZMNICJVONQOFWWXNTNMIIXCQRJHLMRKSQOVKJSOWYUVWAGHKPFPTQULSQUODMXCGXOVYKEEYHTWNGEHLYDVIGHZTDEMGUSIUGVRDHUJUTPOZWFLZ");

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
    msg.setTimeStamp(0.624912547348);
    msg.setSource(22937U);
    msg.setSourceEntity(216U);
    msg.setDestination(15065U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.429608132003);
    msg.setSource(19294U);
    msg.setSourceEntity(23U);
    msg.setDestination(26931U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.788773305324);
    msg.setSource(26147U);
    msg.setSourceEntity(27U);
    msg.setDestination(38659U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.539570501417);
    msg.setSource(46897U);
    msg.setSourceEntity(164U);
    msg.setDestination(56774U);
    msg.setDestinationEntity(7U);
    msg.id = 233U;
    msg.label.assign("SVKZDHRVIHPOYYVDHCOIUK");
    msg.component.assign("UPFWOVVWNYYZXLFHDYYVAHZJKJIBEHYRRNJGOPXOQGQFNIZELEZQMNXMNERNMHQUAXBMLUKATTCIELAWXXNETIZMADMYTUQFYPBJEOQTXKACDYHHGPRMKIDVBDTKSJZWTHFHN");
    msg.act_time = 5736U;
    msg.deact_time = 18015U;

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
    msg.setTimeStamp(0.452122202609);
    msg.setSource(17483U);
    msg.setSourceEntity(79U);
    msg.setDestination(41353U);
    msg.setDestinationEntity(210U);
    msg.id = 194U;
    msg.label.assign("BDMWMYFEZHEKEVLSBFHFGNMTRZEATBODSWHCOBAGVDTCTSINEVGFRNQQNJQKWYTKCOJDXCZDAQCJAUXBFILS");
    msg.component.assign("LADLOMKZOGROVVXTFSBLBKZXIGJOQKKYTHJPDANKXTGARQBQOHPOHSPTLHNQCMQYCAVTBJMQPMJPIHWJPEDLQZVUUOHDRSDPVEHRGYADTXCFDDRFSTUMKZJGYUCIRSIVMYNUZAXILENFMNDLDNGVGUGORVJVYNPUFKZUAEBRCWEUKWE");
    msg.act_time = 53833U;
    msg.deact_time = 13999U;

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
    msg.setTimeStamp(0.477666114766);
    msg.setSource(41674U);
    msg.setSourceEntity(43U);
    msg.setDestination(24816U);
    msg.setDestinationEntity(141U);
    msg.id = 143U;
    msg.label.assign("HFCYPALLABMUWKNIOWJGHZNMRKJGEKWQGPTBZFZHTMZSALBBYXOSQLXHUYPAYBTKAPLETTRGDJCXXDESZOZWYEXPVKFONRGXVFUVKIZSNCKIBVMRMPSUUGBEXVRHYACSDOQIONFICXQSPSZDQDELCFDXMT");
    msg.component.assign("OFGYLAHJBPSBDRKOQZHFPKTKFKIKCCTGIEXNDSASIFPVTJOVSANNNWCCUJVZDCUSWHBEMJGHNVOZJXZLIOCWFMMUNWRTAZCBVRFWAJRBXTDUXGRQTXOMHAKHDJLGUPOSNIYMVGYLRELUHOORMOTHSXYHJQPQEVDKYLPLGCBZBWQXALPGFPKERYHSUQQGENDBDFEBGYATYITYRUEISDBMLCRZUAKWDXTIVF");
    msg.act_time = 49017U;
    msg.deact_time = 56881U;

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
    msg.setTimeStamp(0.508865011265);
    msg.setSource(13685U);
    msg.setSourceEntity(52U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(253U);
    msg.id = 84U;

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
    msg.setTimeStamp(0.603412008502);
    msg.setSource(26694U);
    msg.setSourceEntity(240U);
    msg.setDestination(39437U);
    msg.setDestinationEntity(38U);
    msg.id = 159U;

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
    msg.setTimeStamp(0.317948257292);
    msg.setSource(13580U);
    msg.setSourceEntity(166U);
    msg.setDestination(2479U);
    msg.setDestinationEntity(240U);
    msg.id = 241U;

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
    msg.setTimeStamp(0.696647734591);
    msg.setSource(40282U);
    msg.setSourceEntity(71U);
    msg.setDestination(2377U);
    msg.setDestinationEntity(165U);
    msg.op = 38U;
    msg.list.assign("GZPEISJMGYTQIMAUTCUOPYJTIWGECYWLXDSKGWZVBFXLIYQZOQPUKAXONZHCSXECBVVYAJXTOGSFJOIRNXQBEUBWFDVKMZMWJFDHWQZGCTTOCJPHVEFRHDOBFUBHFZKYQMYVILPYRLRIULHJQYQAFFERXBQESWHACKKZUTKAHVCGLJBIHGMMMCJNSRLEMPWXXIKRXLGVTUDDOTDZVSVPAGWINDQZNKDMJFRWSOLPRUNKBNENTR");

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
    msg.setTimeStamp(0.129743886128);
    msg.setSource(9175U);
    msg.setSourceEntity(104U);
    msg.setDestination(23219U);
    msg.setDestinationEntity(239U);
    msg.op = 185U;
    msg.list.assign("XQAXQYWRLVJSFNECLICRGGZUVRJZVPW");

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
    msg.setTimeStamp(0.228438525252);
    msg.setSource(17497U);
    msg.setSourceEntity(2U);
    msg.setDestination(9372U);
    msg.setDestinationEntity(34U);
    msg.op = 113U;
    msg.list.assign("SRFEYJPASIMMMJZSXWDNCIJDVPOTWXV");

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
    msg.setTimeStamp(0.305088871611);
    msg.setSource(46809U);
    msg.setSourceEntity(235U);
    msg.setDestination(61094U);
    msg.setDestinationEntity(240U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.514997008161);
    msg.setSource(21867U);
    msg.setSourceEntity(42U);
    msg.setDestination(41236U);
    msg.setDestinationEntity(11U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.157680413869);
    msg.setSource(62219U);
    msg.setSourceEntity(38U);
    msg.setDestination(55141U);
    msg.setDestinationEntity(234U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.678718783462);
    msg.setSource(39015U);
    msg.setSourceEntity(11U);
    msg.setDestination(6075U);
    msg.setDestinationEntity(164U);
    msg.value = 98U;

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
    msg.setTimeStamp(0.769203617207);
    msg.setSource(40167U);
    msg.setSourceEntity(120U);
    msg.setDestination(16865U);
    msg.setDestinationEntity(186U);
    msg.value = 81U;

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
    msg.setTimeStamp(0.273471109028);
    msg.setSource(1584U);
    msg.setSourceEntity(234U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(5U);
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
    msg.setTimeStamp(0.38329145594);
    msg.setSource(10360U);
    msg.setSourceEntity(162U);
    msg.setDestination(37887U);
    msg.setDestinationEntity(62U);
    msg.consumer.assign("JRTGRZWDSMFTJQLRKFKWCTHAXFSWUCGOWLUFNUEIABSPNOZBLKAJNQKHTRNQQLNMQYSRHACSSADWVGYZAFCVKPJQYQOBVMRVLZUEYLBAZXBECEDJAFQRDTNGHNM");
    msg.message_id = 34026U;

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
    msg.setTimeStamp(0.608915341957);
    msg.setSource(43435U);
    msg.setSourceEntity(42U);
    msg.setDestination(16924U);
    msg.setDestinationEntity(143U);
    msg.consumer.assign("LUHZEHYFFNULZXOLEBMGBQIWVOWOISERCGAJPBQQUCAKICTPKTDYMZCKQBKJBDTRUKVSLXVMGIANSLMNDVGQZMSFJMDLYAPHUTTKGJPIAMQUECHQVWAHNOMJRVHELXXAPRJGVXSUNRYXTO");
    msg.message_id = 34327U;

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
    msg.setTimeStamp(0.805075448158);
    msg.setSource(4664U);
    msg.setSourceEntity(235U);
    msg.setDestination(51722U);
    msg.setDestinationEntity(210U);
    msg.consumer.assign("ADLRCONGFBFKQTXGHAFUCDZEJNWRJWHYONUIDSDTYKOFCBZKASRAHJASICESVHFJGPFBUYYTHXWXQLYMWPOVRJZSZPSTRNNMALIXQBAREZFPZWQWOEVCHQPUQVIWQNWWOLXNTCVMVFKUVKIOVDHJGIAXPEDINAALUMIELTTXCSMUZYSKOPLNZHMBFMJDDLQMYZGG");
    msg.message_id = 34318U;

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
    msg.setTimeStamp(0.339173534465);
    msg.setSource(52264U);
    msg.setSourceEntity(191U);
    msg.setDestination(27012U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.349289779115);
    msg.setSource(37504U);
    msg.setSourceEntity(54U);
    msg.setDestination(62755U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.423951803882);
    msg.setSource(63552U);
    msg.setSourceEntity(208U);
    msg.setDestination(28530U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.130002106371);
    msg.setSource(50760U);
    msg.setSourceEntity(225U);
    msg.setDestination(13057U);
    msg.setDestinationEntity(177U);
    msg.section.assign("HDKJGKEXIYOFEHEXCIMFZSOBGISTTINHKRFLYAWMSRUVXLPOMMRHDPBXCXGCRRATFRNSUJQVUMPVDUWJUYOBP");
    msg.param.assign("ONGKJIKOILLGDHZJSOVPCOFDHHSWOEAFFOYZNOEIBQKNMXRQCYPFHHJHTSQUBKWIRPFMDTUHFUZPUEXMNMLUSOPDPTGXAUIRMYBCASSJVQBEYAABYDJGVOXQKESYXRLDEALTBVYYPLWJIWGYKYMCMUNCWXWPUHOGFJSNITAFTZEGCZKDSKHQGTWWDLUPXJLLSRBPRHVVCCRRFAQ");
    msg.value.assign("ABAZVGLLTZNKSETUOYEWVB");

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
    msg.setTimeStamp(0.629571183336);
    msg.setSource(63175U);
    msg.setSourceEntity(207U);
    msg.setDestination(61326U);
    msg.setDestinationEntity(147U);
    msg.section.assign("UJJEMRSSALBWQVIQACTNSGGJCWS");
    msg.param.assign("NGTDWBNHFQSFJMGSYLJACKGBWRSXZBGFQLLVFTHWMYTGNCZQAXKVZQYHKIUEEKJJGFIAKJSNEHVWUJMDYUCWFPLSYMXNCQSCBTQXLRZEUAFJHG");
    msg.value.assign("CBQEUNAFTPVQGMFKYSRYGMCCSXHKVDPMJZTLMUDWWTMSXJIAZBJHFJDZKZOQRORVVJNDKAZXIIHITAHWKPMGOUVAPJBUTUKIOFSOSLJRPRFCSCLDNFGXJESWTZSXSZOKJCUGHWXAICDEFYDNYXVAQNUVTMTCLHYPXLRRIIWGPEHWNQWHPNQUQDAAZMQWREDHKYDBRPTTFOMAB");

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
    msg.setTimeStamp(0.359895349394);
    msg.setSource(19419U);
    msg.setSourceEntity(106U);
    msg.setDestination(65186U);
    msg.setDestinationEntity(240U);
    msg.section.assign("TVCNOOXCMYOKYIUHSWCTXHZTJGXWFHDALVDFMAUPIFLSMLTUFWDDGFDNMNKQXXHHSKAUDICMNTZOTZRYDTZIYSZBAIAVNBBUMQBNHVOSQQJEBZIREONJEAHMUCQJBVTRXHSWLAKYBGQYGMKXDFUORQCSCVOQJQCFIWWSMYPWTVBFLVGNRPEIWWOFCIZZFJDDYPYGAEXBUXUKLJY");
    msg.param.assign("BHYLGKYQZABQSGVUMCRMO");
    msg.value.assign("GHHAKTZVPNOAJKCXJXUJUWMZNGPEZUOVUHRIHHKJFIQLSXCUGPITEOMXPWIBBBPWBERZHOMLWXDNJKKOKTFQVPNMGABXADTDMEYAYYFKRA");

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
    msg.setTimeStamp(0.543901468269);
    msg.setSource(23392U);
    msg.setSourceEntity(139U);
    msg.setDestination(42104U);
    msg.setDestinationEntity(139U);
    msg.op = 45U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("UMKQQBHJQQJWKQICDGFKMTZASBOOVZNOQJXWMWFDMNGVTDLADVLCMEKGBAYAUGLPHSHVS");
    tmp_msg_0.param.assign("KIFRHYQCRABFZQJTFNUTIJFWHMXWMDQCZAPTNBVYRRRUJBTKMZXUNIZAGWKAMFHROZRIHBOLZPUFPFQMXYIOUNBC");
    tmp_msg_0.value.assign("UDONQWOYZRLIKCPZZLXETSONUCIYYDPJYEBGJG");
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
    msg.setTimeStamp(0.926960378142);
    msg.setSource(42488U);
    msg.setSourceEntity(251U);
    msg.setDestination(15725U);
    msg.setDestinationEntity(107U);
    msg.op = 73U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("OWQKDONEMFDRXUSQWVOKCEPEWXVVQQZEARLRMSZDTZEPNUKDYUYMXJWHFNVPIJDXNDABAFSZEMEBLRAPHJMGHJWLMFSSATBOFQVKWUJKYFTCQUXLGHUJBJMBKHTCTOUXMAIKTHIC");
    tmp_msg_0.param.assign("YVEKOECCJBTOZBIDLXNWSNQTVEODTYWFTNIWMZOXZYIBZPULFTHZYYSJGXLFYGFDEPKMAHIWLQUEDFJZVRZDRVXCQOOUGGTIWV");
    tmp_msg_0.value.assign("CVQOHATCWOEUNMQHSCPECNNIPSMPYASXFHXBOYPDFZWVBRHLVPHPTCOICYAYNQCXIDXGECGBOGXJIVNKZXOKTHEHNWNWVGHRYMEJMQJPLLMLIYSJFATIRKGIXZUALGYXSWTZJWKSRURZYBF");
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
    msg.setTimeStamp(0.627369202289);
    msg.setSource(4263U);
    msg.setSourceEntity(28U);
    msg.setDestination(37319U);
    msg.setDestinationEntity(199U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.158012092646);
    msg.setSource(10005U);
    msg.setSourceEntity(134U);
    msg.setDestination(15516U);
    msg.setDestinationEntity(37U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.963034108386);
    msg.setSource(28351U);
    msg.setSourceEntity(241U);
    msg.setDestination(14476U);
    msg.setDestinationEntity(33U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.714419683773);
    msg.setSource(40514U);
    msg.setSourceEntity(99U);
    msg.setDestination(3544U);
    msg.setDestinationEntity(73U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.0208339552826);
    msg.setSource(42682U);
    msg.setSourceEntity(39U);
    msg.setDestination(7884U);
    msg.setDestinationEntity(15U);
    msg.total_steps = 6U;
    msg.step_number = 18U;
    msg.step.assign("DVWBNCUBWZHRFJJRRWBOJPGTYJDPESMOEDQJZHMHKNEZAVBYWLQQNHOKCOYYKOZIGKUTEKSSCIBXUFLFPPENWWUANABEZZKETFPLUQZFPKV");
    msg.flags = 166U;

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
    msg.setTimeStamp(0.93066106541);
    msg.setSource(28946U);
    msg.setSourceEntity(124U);
    msg.setDestination(24517U);
    msg.setDestinationEntity(72U);
    msg.total_steps = 232U;
    msg.step_number = 125U;
    msg.step.assign("QFKPAIDWKMPJ");
    msg.flags = 40U;

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
    msg.setTimeStamp(0.0184980037933);
    msg.setSource(19057U);
    msg.setSourceEntity(63U);
    msg.setDestination(56289U);
    msg.setDestinationEntity(81U);
    msg.total_steps = 161U;
    msg.step_number = 95U;
    msg.step.assign("UGKJRJDMGHUYIZBODXNDXVRWAWUGMOXIZ");
    msg.flags = 25U;

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
    msg.setTimeStamp(0.368812720697);
    msg.setSource(35800U);
    msg.setSourceEntity(213U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(240U);
    msg.state = 128U;
    msg.error.assign("ANINSZELQDLWYSFRFGCQBHUYREMMQVWIWRPNUWLHJQKVJJUEFTVSXHTVXYYJPPGLKLFNWXRSCHZMVFCJLSWAEAOQDEYC");

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
    msg.setTimeStamp(0.208190226279);
    msg.setSource(45907U);
    msg.setSourceEntity(96U);
    msg.setDestination(5242U);
    msg.setDestinationEntity(45U);
    msg.state = 127U;
    msg.error.assign("DGVGQJLHGMIFGPFPSWOTBBMCEFFKBQHVYTBPGQEWSMQILYEHLHIVOQMPCITNVOWLZOUWHOXLXTBDCCGSRKTLACJAKEBVOSJWGDQTZFUMZPYWECYDZTUIBAZJOQPTSIHUGCRQRDY");

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
    msg.setTimeStamp(0.53088236837);
    msg.setSource(8605U);
    msg.setSourceEntity(72U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(228U);
    msg.state = 253U;
    msg.error.assign("AEOQHLYBQQMUBHCIAZKOFTXPRWRSXZLLEIVKKLXMODYRWHDMXWQWSQPCKRIEXWNUIKTLPAFVBMXQSJMZUDERJCXBQLZZGBVYTXZVBHKGBGIEAEPPOTLDUCLTVMYENBJEWTSUTNOQEWUUOHNYZANBIDFMXCZKJEJDDHRFNZFQWJVRUGYPDIDNCOMNAYPCFVHHXNKSMGRGKNQYZAVIVFPWIMGSJY");

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
    msg.setTimeStamp(0.330522592064);
    msg.setSource(53514U);
    msg.setSourceEntity(225U);
    msg.setDestination(48538U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.0490964339053);
    msg.setSource(5718U);
    msg.setSourceEntity(247U);
    msg.setDestination(42879U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.48740624569);
    msg.setSource(61773U);
    msg.setSourceEntity(166U);
    msg.setDestination(60467U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.459039553825);
    msg.setSource(63702U);
    msg.setSourceEntity(234U);
    msg.setDestination(14205U);
    msg.setDestinationEntity(219U);
    msg.op = 107U;
    msg.speed_min = 0.53253333869;
    msg.speed_max = 0.935254571164;
    msg.long_accel = 0.540139426534;
    msg.alt_max_msl = 0.480923893814;
    msg.dive_fraction_max = 0.119702590589;
    msg.climb_fraction_max = 0.984731625123;
    msg.bank_max = 0.43516089457;
    msg.p_max = 0.497234110898;
    msg.pitch_min = 0.414893644421;
    msg.pitch_max = 0.501279603795;
    msg.q_max = 0.992676590784;
    msg.g_min = 0.0506614022672;
    msg.g_max = 0.793772292116;
    msg.g_lat_max = 0.0139983919488;
    msg.rpm_min = 0.683270994999;
    msg.rpm_max = 0.0711719747775;
    msg.rpm_rate_max = 0.478917719999;

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
    msg.setTimeStamp(0.746452361987);
    msg.setSource(37206U);
    msg.setSourceEntity(60U);
    msg.setDestination(20600U);
    msg.setDestinationEntity(239U);
    msg.op = 85U;
    msg.speed_min = 0.575835178693;
    msg.speed_max = 0.507135554556;
    msg.long_accel = 0.651234402015;
    msg.alt_max_msl = 0.0451876851675;
    msg.dive_fraction_max = 0.86744397526;
    msg.climb_fraction_max = 0.35572207706;
    msg.bank_max = 0.695246804548;
    msg.p_max = 0.917005529828;
    msg.pitch_min = 0.958825969497;
    msg.pitch_max = 0.00820460753166;
    msg.q_max = 0.962883813395;
    msg.g_min = 0.73356331115;
    msg.g_max = 0.908076792923;
    msg.g_lat_max = 0.872905096566;
    msg.rpm_min = 0.617618650233;
    msg.rpm_max = 0.840186515312;
    msg.rpm_rate_max = 0.39464167233;

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
    msg.setTimeStamp(0.0958311496917);
    msg.setSource(29541U);
    msg.setSourceEntity(156U);
    msg.setDestination(51680U);
    msg.setDestinationEntity(46U);
    msg.op = 236U;
    msg.speed_min = 0.13531170623;
    msg.speed_max = 0.584965633144;
    msg.long_accel = 0.771713602928;
    msg.alt_max_msl = 0.881846839034;
    msg.dive_fraction_max = 0.43420953396;
    msg.climb_fraction_max = 0.252529200899;
    msg.bank_max = 0.0170913288743;
    msg.p_max = 0.658843379993;
    msg.pitch_min = 0.269736576784;
    msg.pitch_max = 0.9549555879;
    msg.q_max = 0.746244806944;
    msg.g_min = 0.420411983145;
    msg.g_max = 0.857432570249;
    msg.g_lat_max = 0.622589178781;
    msg.rpm_min = 0.478918158409;
    msg.rpm_max = 0.956778428645;
    msg.rpm_rate_max = 0.455538107755;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.0339338591677);
    msg.setSource(44298U);
    msg.setSourceEntity(252U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.2148299685;
    msg.lon = 0.578413305035;
    msg.height = 0.657807334691;
    msg.x = 0.168339577837;
    msg.y = 0.0297607511468;
    msg.z = 0.68549256157;
    msg.phi = 0.39472083409;
    msg.theta = 0.12738794757;
    msg.psi = 0.852825312342;
    msg.u = 0.196752022915;
    msg.v = 0.391064235442;
    msg.w = 0.636335453259;
    msg.p = 0.11691757842;
    msg.q = 0.561367944676;
    msg.r = 0.340887253268;
    msg.svx = 0.0518164671055;
    msg.svy = 0.507762805545;
    msg.svz = 0.0260072796052;

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
    msg.setTimeStamp(0.0122960394023);
    msg.setSource(15213U);
    msg.setSourceEntity(5U);
    msg.setDestination(31572U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.892485698389;
    msg.lon = 0.16813384869;
    msg.height = 0.967148846991;
    msg.x = 0.0609584016447;
    msg.y = 0.371011916451;
    msg.z = 0.0648474392075;
    msg.phi = 0.121230363985;
    msg.theta = 0.0309126544433;
    msg.psi = 0.558420664731;
    msg.u = 0.0298730649589;
    msg.v = 0.0554863960069;
    msg.w = 0.0736627079546;
    msg.p = 0.175166402708;
    msg.q = 0.0732526451686;
    msg.r = 0.122437279189;
    msg.svx = 0.822661276598;
    msg.svy = 0.789842412947;
    msg.svz = 0.793520815175;

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
    msg.setTimeStamp(0.354593896493);
    msg.setSource(24375U);
    msg.setSourceEntity(87U);
    msg.setDestination(18193U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.0918284778707;
    msg.lon = 0.485329249768;
    msg.height = 0.818597643831;
    msg.x = 0.953282504298;
    msg.y = 0.0385955854007;
    msg.z = 0.991966779505;
    msg.phi = 0.847521452881;
    msg.theta = 0.731171019021;
    msg.psi = 0.417167041466;
    msg.u = 0.651394416217;
    msg.v = 0.537973596024;
    msg.w = 0.931344227625;
    msg.p = 0.797914539231;
    msg.q = 0.0328735491619;
    msg.r = 0.214547318217;
    msg.svx = 0.941299719356;
    msg.svy = 0.44374594354;
    msg.svz = 0.335597835741;

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
    msg.setTimeStamp(0.608387107898);
    msg.setSource(34880U);
    msg.setSourceEntity(217U);
    msg.setDestination(18443U);
    msg.setDestinationEntity(109U);
    msg.op = 89U;
    msg.entities.assign("OGGWAJNXYUXQFXZEXCIAVPQNJIBNZZEPOBNVVYOLKDXVHZHIWCCNAOGUUOAUTORPPANEHOXHHUA");

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
    msg.setTimeStamp(0.117994652172);
    msg.setSource(15440U);
    msg.setSourceEntity(169U);
    msg.setDestination(30093U);
    msg.setDestinationEntity(46U);
    msg.op = 61U;
    msg.entities.assign("DUPDUNPJUAQVBLQATFMVQIHSMZMYAPDIMRRBEKBJNPVLUNIWDDUPAWZNOTNCNYCHLKZEOWJCLHURGQBWTYXKFVBXEOMEXICJSLGYICHZXMJJNYVONUJMTOHSTKCYIUQHKXXQMGCOXLXRSHIMDGKNOAPJBVGFQWZXFKECFQYOOFEFSEGPMELTWDGCARSGSGLJZRUOYLIZWXAZPHKJNDKV");

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
    msg.setTimeStamp(0.0983245093859);
    msg.setSource(50654U);
    msg.setSourceEntity(227U);
    msg.setDestination(26450U);
    msg.setDestinationEntity(131U);
    msg.op = 198U;
    msg.entities.assign("BZEMHECKZJYNRDPZZYPTUGCXMMBGUXOQJEYINOJEYQGBBJVKDSBHRUDNTSUDIQSCIXMTPNAPUIXHWCYCPSPKUAQSHGRDTWNTFLDVRFWSIGEGPTXWEYICXBOQSGURAQKDNQODVPMKPHFCVAPYEWBLKHGAFGQCKBIBWYFQIALHJSOZJVYJLLZF");

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
    msg.setTimeStamp(0.146655913098);
    msg.setSource(51264U);
    msg.setSourceEntity(232U);
    msg.setDestination(20726U);
    msg.setDestinationEntity(187U);
    msg.type = 67U;
    msg.speed = 44673U;
    const char tmp_msg_0[] = {-66, 47, 71, -36, -6, -33, -75, 104, 4, -13, 40, -40, 104, -19, -124, -65, -115, 101, 92, -27, -14, 64, 65, -17, 30, 9, 104, 81, -30, 40, -104, -65, -104, -91, 29, 22, 57, 65, -86, -9, 125, 20, 95, 41, 120, -45, -23, 102, -126, -128, -28, 59, -36, -62, 125, 125, 86, 94, -82, -7, -79, -90, 51, -89, 71, 76, 118, -62, -49, -116, 84, 5, 88, 89, -19, -64, 113, 15, -117, -114, 66, -43, -113, -20, 97, 33, -110, 13, -75, -121, -104, 103, 82, 8, 55, 6, -51, 117, 63, -72, -17, 32, -59, 8, -122, -117, 104, -70, -95, 58, 94, 28, -15, 12, 35, 94, -59, 55, -111, -3, -89, 89, 9, -37, 61, -107, -36};
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
    msg.setTimeStamp(0.680681247434);
    msg.setSource(22944U);
    msg.setSourceEntity(150U);
    msg.setDestination(46078U);
    msg.setDestinationEntity(50U);
    msg.type = 53U;
    msg.speed = 47571U;
    const char tmp_msg_0[] = {-126, -80, -75, 32, -59, -110, 0, -9, -119, 67, -23, -56, -23, 80, 96, 40, -12, 106, -52, -121, -69, -53, -50, 15, 99, 50, 14, 0, -78, 100, 1, 32, 96, -125, -113, -81, -10, 116, 84, -5, -60, -80, -73, -6, 55, -72, -4, -14, 68, -99, -68, -127, 95, 100, -76, 39, -22, -32, -13, 29, -115, -96, -22, -73, -85, 84, -96, 72, -12, -42, 123, -59, 123, -61, -18, -127, 27, -21, 15, 4, -26, 31, -10, 42, -119, -32, -93, 36, 84, -22, -12, 114, -75, -114, 12, -55, -93, -68, 0, -1, 22, -2, -99, 56, -5, -74, 86, -118, -35, 103, 12, 47, -34, -21, 116, -126, 11, -38, 44, -37, 60, -88, 110, 16, 21, -11};
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
    msg.setTimeStamp(0.818925966722);
    msg.setSource(46501U);
    msg.setSourceEntity(212U);
    msg.setDestination(60405U);
    msg.setDestinationEntity(204U);
    msg.type = 46U;
    msg.speed = 8574U;
    const char tmp_msg_0[] = {112, -119, 52, 99, -89, -107, -68, -112, -40, -118, 26, -65, 30, -103, 8, -26, 76, 90, -67, -26, -28, -32, 83, -45, -35, -50, -20, -120, -25, -54, -45, 51, 25, 92, 34, -77, -59, -16, -92, 33, -98, 91, 126, -33, -85, 57, 10, -82, -25, 80, 54, 7, -104, -85, -86, -30, -67, 34, 124, -76, 14, 31, 79, 92, 101, -4, -8, 28, 111, -64, -52, -70, 109, -94, 15, -120, 70, -104, 54, 3, 95, -114, -1, 14, 85, -19, 50, 21, -106, 81, -97, 93, 19, -85, 41, -121, -103, 57, 32, -13, -60, 69, 110, 74, -118, -49, -122, 40, -47, -105, 37, 59, 8, 19, -27, 86, -112, -17, -128, -77, 104, -9, -92, 49, 104, -24, -73, -44, 93, 115, -77, -72, 119, -45, -118, -80, 77, 88, 96, -16, -91, 21, 41, 96, 23, -63, 47, -30, 107, -30, -11, 22, -4, 51, 61, -126, -80, 112, 11, 52, -75, -15, -16, -23, 89, -79, -26, -94, -10, -103, 104, 90, 37, -73, -76, 37, -60, 81, 69, -92, -3, -15, -34, 95, -21, 85, 24, 36, 113, 15, 74, -8, 44, 95, -1, -52};
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
    msg.setTimeStamp(0.339737821665);
    msg.setSource(7112U);
    msg.setSourceEntity(145U);
    msg.setDestination(12344U);
    msg.setDestinationEntity(130U);
    msg.op = 250U;
    msg.tas2acc_pgain = 0.608819991065;
    msg.bank2p_pgain = 0.602150626828;

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
    msg.setTimeStamp(0.041585229262);
    msg.setSource(57314U);
    msg.setSourceEntity(0U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(2U);
    msg.op = 17U;
    msg.tas2acc_pgain = 0.0387736453957;
    msg.bank2p_pgain = 0.35633976939;

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
    msg.setTimeStamp(0.776173221609);
    msg.setSource(52306U);
    msg.setSourceEntity(43U);
    msg.setDestination(54332U);
    msg.setDestinationEntity(202U);
    msg.op = 159U;
    msg.tas2acc_pgain = 0.450068698035;
    msg.bank2p_pgain = 0.720275385041;

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
    msg.setTimeStamp(0.319849317389);
    msg.setSource(57205U);
    msg.setSourceEntity(127U);
    msg.setDestination(56964U);
    msg.setDestinationEntity(217U);
    msg.available = 905018273U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.451505480363);
    msg.setSource(8738U);
    msg.setSourceEntity(66U);
    msg.setDestination(863U);
    msg.setDestinationEntity(8U);
    msg.available = 94851656U;
    msg.value = 44U;

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
    msg.setTimeStamp(0.757785024508);
    msg.setSource(21790U);
    msg.setSourceEntity(0U);
    msg.setDestination(38986U);
    msg.setDestinationEntity(77U);
    msg.available = 3379651806U;
    msg.value = 232U;

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
    msg.setTimeStamp(0.911087007833);
    msg.setSource(57638U);
    msg.setSourceEntity(38U);
    msg.setDestination(61128U);
    msg.setDestinationEntity(103U);
    msg.op = 105U;
    msg.snapshot.assign("DPKYSBRZLMGAOGTFTIENQRUOFSBDYDJNXRUIWUDJKASFHFMMCUHEELAXZCQFNUTAHCTQNGLIWAJCYYORECRIULPXPUIXJLQDWXHDKZLGVHOSFVJKVWDEKYORFJOCKIAMOSBWEIQFBUGBJEEBHLFWYDORZUWNJCDPLWXPVWFVITYILABTBGZJVQZMHGOPKQQOBKAMISPGCKHXUGTAMQKPNPREXZTYNMEQZHC");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 84U;
    tmp_msg_0.error_count = 202U;
    tmp_msg_0.error_ents.assign("PAHFJVRUTUEDSQHNSYBTINSSJNOXXMBLMYCOISNWNWEAJXFLRGEESDDZABHKAVVPMJLVCZVUKPXGIPZYMIQOQVYONUWGMFOBQWZREDJYDNICBWEHGCJDMSZDBFGWMHTGUELXFFVGRQASKBPW");
    tmp_msg_0.maneuver_type = 36238U;
    tmp_msg_0.maneuver_stime = 0.042698495389;
    tmp_msg_0.maneuver_eta = 61456U;
    tmp_msg_0.control_loops = 3118562647U;
    tmp_msg_0.flags = 182U;
    tmp_msg_0.last_error.assign("IZWQEZUOUVNIJLKDQJPBUCRZIYKEEZYJSIAMPKOYVENSZQXHQBHQDGZSGPBICOGVMDUDTTAPZLDFYXKPGNHXUUHNCVTKQAQCRABRBLLDPYQZIMOCZBFQLKDNDXHWATRHVNFZEHFYTJXNAMWKFYXFER");
    tmp_msg_0.last_error_time = 0.649384601201;
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
    msg.setTimeStamp(0.834418655321);
    msg.setSource(52859U);
    msg.setSourceEntity(26U);
    msg.setDestination(52004U);
    msg.setDestinationEntity(0U);
    msg.op = 230U;
    msg.snapshot.assign("BPGBJRMUYHPSYTASPJZGZTCIOMPW");
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.627240835523);
    msg.setSource(1657U);
    msg.setSourceEntity(157U);
    msg.setDestination(7691U);
    msg.setDestinationEntity(44U);
    msg.op = 59U;
    msg.snapshot.assign("YXKOSKQETPBLGBIDCYMALXYMPATNIIQQPMXGMGPGEWLNLUKTEEIPTJDUAWZMNYZERDDRQZOPHDEVTEJKQHMOBFASVNIWDFMJLGNKOBNFCCWXDVZBRKIRUPRGUJRLUQESFHCEUCZFVGCZOMATIWQTGQKB");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 188U;
    tmp_msg_0.file.assign("QZBHIZCFQMNCIAJXUHCIOGWKSNJSWJSVVPWMFFLOKPWXVUZGZDWKGILXPJVSGIHENKBVNOITZKOBTMDALECOZZEUCWQKPYCQYIFANITHULZTNVDXNQUAESBVWAUOIYALEJFUTBJCQPDXDJLQQWKCGRPSNOZTHMRGHEYTGBXIDBMPBHVWNMY");
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
    msg.setTimeStamp(0.547893389229);
    msg.setSource(33148U);
    msg.setSourceEntity(228U);
    msg.setDestination(54034U);
    msg.setDestinationEntity(49U);
    msg.op = 16U;
    msg.name.assign("NEVJQPQCUXWZGTGCYZWNHRNKYDLTQQNHRQWWDNKEVFXNJJXSKAMEMGG");

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
    msg.setTimeStamp(0.553491382705);
    msg.setSource(7871U);
    msg.setSourceEntity(0U);
    msg.setDestination(2138U);
    msg.setDestinationEntity(15U);
    msg.op = 64U;
    msg.name.assign("CBESWJOIGGJHDYJJZMUALBNGRBVDYLPWATU");

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
    msg.setTimeStamp(0.251000502287);
    msg.setSource(1993U);
    msg.setSourceEntity(129U);
    msg.setDestination(9456U);
    msg.setDestinationEntity(155U);
    msg.op = 176U;
    msg.name.assign("USMSKDGVZTGRYNBHRKRIBNUHWLUINA");

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
    msg.setTimeStamp(0.0479711261292);
    msg.setSource(37126U);
    msg.setSourceEntity(142U);
    msg.setDestination(8867U);
    msg.setDestinationEntity(79U);
    msg.type = 73U;
    msg.htime = 0.05994722787;
    msg.context.assign("MGXYDSHGYAAQEPMESGGOYHBFHUHNQEKMKLMNREXEIVSFENFVTYMZFWUKSPUKIFDXAGUQBUQRTTEAZRPXDRSIZOFPWAHTQPOFUWSDTNKLALYWSHEXNHJOQDIDCLNGLVCMZWJUOCJIJHVMNVYZCRTZEKBQDOSBGUO");
    msg.text.assign("XBWCFRDZQKBUHWWMOEOVFEDSPCZAIMIVZAJLAISIQPGXMAPTUPFJCOHAYLDQCVFDKBYJFNZOGSFQJIHROHXVGKWSFZZBDNUMQXOKYVLJJPPTMTRHQRMFHHSSMDDKEYE");

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
    msg.setTimeStamp(0.430371702474);
    msg.setSource(60199U);
    msg.setSourceEntity(169U);
    msg.setDestination(37671U);
    msg.setDestinationEntity(91U);
    msg.type = 88U;
    msg.htime = 0.726045325602;
    msg.context.assign("MZFIOHIEMBCWSRNFEESSLIVFRMKFUSUEQUAPIJPPKQGTHNNLYQYUYTJCGKUDWVPZFIBKNLCPFVATPMLNYWQUYKSIDPQLMZBTBZGQRXWKWDFRBFRZRUTSCBJWFXTNMSHHXNFVBAAVJMBQNXPUWZGZHDYWCJGEGBERIZPLDXJIOSOHDOLQRKYWZARCUIVONDPBDUHKOJCYDSGWEHAXLQKAXEZGHNTAXTMOVSCYGHMODOXYIVMETKCTECVGV");
    msg.text.assign("CCOQMPTJDSJSKAEUBDKSZZQPXLUHQIGLCZKICWVGKCIIFVZPJNBZINXFOTDHYSRYQXNVTWQDEAVMBFFTDEMERVLORNPABSFINQKZLYZYSCMGEMGPRGKVUXZDJUJSKEJYYZAXROBAMYNPBDHNJHYUXOERMPCLIDVKHTPGXOIJMQHWBGHFRWYTJFXBRANUDWTOKROMUPWQMTGXIAQVHVWALNBSUOATYOJCRSIWLZGEQNLADK");

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
    msg.setTimeStamp(0.968308890707);
    msg.setSource(19424U);
    msg.setSourceEntity(78U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(173U);
    msg.type = 197U;
    msg.htime = 0.167440707235;
    msg.context.assign("TNTBLNDPDDXNHOFRJPCDFTMRTURMQLVBSINXMLVAEDFQZLOESNMNLHCPZVMFEXOVYNHCCFPEKBERDIBFUAAWQUQBARYUELKGAREWIGPHCSFFQYVOIOBAOCGOTGMRDQXZKKUDHMOWZSIMRBEKZTXJTCNGQHXMIJDAHXOZYRPSTUKYGUPWCOVVHXWMYBJKFBZUQDWHTPKHGQGLVNWSYGZJYUTYENLAZIJGVZSIPFSJAJWCSPVLEKBIC");
    msg.text.assign("EJIGWRJRLSSXTHIFYXBYXZSIGTBMJKAXHDUSBLUYLTNDVCLLMNFLVIEVQHNVXOZFTOFFAWCEUXZAKYPLKAFZEBHRTGCGQZSMEZXENKHVVHQDSAURYSHFWDFPXHTPQKPXOVEIKOWORTIJYVDCBOWENGWOTTNRXECQOQMNAEQBRCLCSJUCJBPPCBWIQAVZPGSZUDIYPRMMQONQCMD");

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
    msg.setTimeStamp(0.982236383696);
    msg.setSource(26668U);
    msg.setSourceEntity(16U);
    msg.setDestination(49344U);
    msg.setDestinationEntity(129U);
    msg.command = 52U;
    msg.htime = 0.100836046068;

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
    msg.setTimeStamp(0.724195770281);
    msg.setSource(55992U);
    msg.setSourceEntity(171U);
    msg.setDestination(60879U);
    msg.setDestinationEntity(177U);
    msg.command = 29U;
    msg.htime = 0.807738357419;

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
    msg.setTimeStamp(0.251495671013);
    msg.setSource(49327U);
    msg.setSourceEntity(173U);
    msg.setDestination(35130U);
    msg.setDestinationEntity(214U);
    msg.command = 211U;
    msg.htime = 0.0781897731091;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 37U;
    tmp_msg_0.htime = 0.657474503458;
    tmp_msg_0.context.assign("SFJBGWDZAGTFMCAVDEAZDHEDTFEHFQPMNQNNSVCXOVGAJBZLHYDOBPWIHZCUUNUDURTBICGVGIKKPPYXJQSWRZGYXEOFJVTYIESFLYUXNROQKWRXTJCFURSOHTNSDLMYQJLVYKAWSIXKXZCVADJGCEJHMZGLW");
    tmp_msg_0.text.assign("DLTIMPJMCMAGQVVWRTJTRZAQELNUDKITGBYFOPCMJQGZYSWIHYVLZFTOSEEJKJTXGEVTGDQUIBCLUVBFLWDRPEXNHBXYHLUNHNSLWZYEIBASHGVSROSBDJEY");
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
    msg.setTimeStamp(0.167806115388);
    msg.setSource(5782U);
    msg.setSourceEntity(142U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(131U);
    msg.op = 43U;
    msg.file.assign("KZMMUFXYPQZWSAYBUBTHXIJJUMCCLWFESACVWARNRQULEKTZWSXTNIIQBQVBYVOGYHRHSYDJOLYWOWBKAHFWREEEXLNFKRCMSSJFMNNMZRAGKAROCULOFYCMN");

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
    msg.setTimeStamp(0.969516347478);
    msg.setSource(56553U);
    msg.setSourceEntity(37U);
    msg.setDestination(38966U);
    msg.setDestinationEntity(73U);
    msg.op = 237U;
    msg.file.assign("IZFVWAHRTDIXAUIUGDSMJELCNYHUWMDWSSXNTLKOLUFOMPKUUMZLLEQPFWJPDUGBVDYWQCOEDQPFHJXLMAHBQYKSZZIIMOMBKDKBWOJYCRKFSOODWVJUEBAQCNGVQRJVVAIPFTQSNDIMBC");

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
    msg.setTimeStamp(0.235481697375);
    msg.setSource(13513U);
    msg.setSourceEntity(195U);
    msg.setDestination(707U);
    msg.setDestinationEntity(179U);
    msg.op = 52U;
    msg.file.assign("QVIQICSOATGKEOOGJFQBXXYCDCPYAXYYMIPSXTPTFFGZIVURMJRGTWRNAYKVLXJNOAMBGINOWIJMJOPNXSQJNHUQUEVOJYUWRZDCMFZRQALWNLHPUDTUZOEXVNEDZUWTGSJVEYPKTPASBMFRZGLJHZKMBPCMWYFWIZBDATOHNBHYFIBGDHYDHRUQEMVOHCZJULBWQNPKSUIEQBVKSTXEVL");

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
    msg.setTimeStamp(0.877061241664);
    msg.setSource(25922U);
    msg.setSourceEntity(145U);
    msg.setDestination(12638U);
    msg.setDestinationEntity(163U);
    msg.op = 50U;
    msg.clock = 0.0281512931052;
    msg.tz = -18;

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
    msg.setTimeStamp(0.87321307034);
    msg.setSource(36785U);
    msg.setSourceEntity(142U);
    msg.setDestination(25210U);
    msg.setDestinationEntity(107U);
    msg.op = 41U;
    msg.clock = 0.759946526821;
    msg.tz = 19;

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
    msg.setTimeStamp(0.354865988113);
    msg.setSource(20051U);
    msg.setSourceEntity(88U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(129U);
    msg.op = 118U;
    msg.clock = 0.0544270186714;
    msg.tz = 56;

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
    msg.setTimeStamp(0.748210646769);
    msg.setSource(44068U);
    msg.setSourceEntity(62U);
    msg.setDestination(41245U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.539652645052);
    msg.setSource(60152U);
    msg.setSourceEntity(98U);
    msg.setDestination(31294U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.112420539584);
    msg.setSource(39133U);
    msg.setSourceEntity(116U);
    msg.setDestination(37745U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.721193277599);
    msg.setSource(33129U);
    msg.setSourceEntity(183U);
    msg.setDestination(5664U);
    msg.setDestinationEntity(108U);
    msg.sys_name.assign("IRQCQKNPELTHPMQHCFXQZOGLNCZDXWQCYVUVHOHDCKWWPDWYXLFWFSZOIKGGMHKNTIYPIGPNEAAVCTAJJRENPVMNCFXCTDHETMLWKBBVNAZMRQIYN");
    msg.sys_type = 66U;
    msg.owner = 21312U;
    msg.lat = 0.658877362065;
    msg.lon = 0.900958717181;
    msg.height = 0.196434988208;
    msg.services.assign("QBNYITHCVRCOQZPXWUVSGWLTQIVEEUSFMVOUORRSYZFFMUCJEXUPAPWUMHDAIIWBMEQDLNFBBRRAPJSSIMDWD");

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
    msg.setTimeStamp(0.41993413057);
    msg.setSource(60291U);
    msg.setSourceEntity(232U);
    msg.setDestination(13539U);
    msg.setDestinationEntity(23U);
    msg.sys_name.assign("WIBLWZSPNGZXMXPYNPFAVMDMIKFUXJWTFAVWUUQIABQBCPJRRKXHEDRXPVYDHJCFVOWZMQGDIKOURMKLHMCKVBSCNCPBTFJKEQVUMHLOICXRYBSIGVTYNAMITFPJTSRAOIAYQFLWKZKYCTABEHWTSWYTLOSJPIHOVZGDUFOAGHUZEYWUGNXDCLENLMGEQZDKSAFPUSTACOHKOEJBNLFSCMJJQERWRUNVHHX");
    msg.sys_type = 132U;
    msg.owner = 60417U;
    msg.lat = 0.923711840086;
    msg.lon = 0.602471320703;
    msg.height = 0.591888892661;
    msg.services.assign("UOGFDTLELLGMQFWEHUDOXSUIJCQFXIHTAVUTHQFBUMAEOQHXDNGYISSAMNWVYPNZIIBLYXVCWHRXQZNJEFJDCDHGQXTZYEBOCMBOBJPHOBZDBTTZZKRIUVBJNCUCRWZEAPZTJRKGEGIXQXSAPSOERBQLKKFGZXXVDCNVPGESNVDJVQFLKWAKINQYWWKNAOUA");

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
    msg.setTimeStamp(0.149081834734);
    msg.setSource(10615U);
    msg.setSourceEntity(192U);
    msg.setDestination(3975U);
    msg.setDestinationEntity(75U);
    msg.sys_name.assign("OELTCSXIKBYAZPAGWCEZQFZPEQXNGUSTXXIDSCEAQTPM");
    msg.sys_type = 78U;
    msg.owner = 26527U;
    msg.lat = 0.99611428163;
    msg.lon = 0.578881521206;
    msg.height = 0.825832082788;
    msg.services.assign("OMTUSDKDFBPRIIZZBYEHXVQESJTQSPBOMWLCQJJAYIOCESIVIRFESWKJWCZQOMXPNVMDMUUVWCGDQCGTACDAIPAMRXRSXSGDKDZYQTAFWNWIEFEKIOHZBQTTBBCKNJYGKLIUWAXSMTKZPJGYPYVFLYGNRLMJHMDEVHRBOHCEQGBLGLRTXUPBXKUONTFUDVUVPYGRCQVMWFZLOWYHKPVI");

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
    msg.setTimeStamp(0.0739558926262);
    msg.setSource(48406U);
    msg.setSourceEntity(160U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(18U);
    msg.service.assign("APAAVEBWYAOFWSUTXWDJAYPHTEVKNUWFE");
    msg.service_type = 54U;

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
    msg.setTimeStamp(0.43930211643);
    msg.setSource(45766U);
    msg.setSourceEntity(67U);
    msg.setDestination(63666U);
    msg.setDestinationEntity(228U);
    msg.service.assign("ATFQOUVMOZSLASPDBRGPELIFZAHMMETDCORWWJCFDNACYFXGLSGBQCKILPRSOOJIKQSTDTNTUQRYWGBHBQPCNXUTVIRESYEUVJZLTNVVPUHGLHYCTUXKNLJTWQXYKMJFAHFBCHVHNLWKRZ");
    msg.service_type = 148U;

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
    msg.setTimeStamp(0.344032066831);
    msg.setSource(2263U);
    msg.setSourceEntity(232U);
    msg.setDestination(43094U);
    msg.setDestinationEntity(37U);
    msg.service.assign("WZZNANCYWDPKAKSMIGPXOCGPAEHHJPCRHMWBNBPSFJQLKQJMDDPDHZZXWRXTNXFRBJBRWYUELPRSGXBJQGYGIKMIDKHROBGQVHKVUIDYXDOKRCAMICTTFOWXWZYIMGEWQLYVUTSVV");
    msg.service_type = 103U;

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
    msg.setTimeStamp(0.366014225832);
    msg.setSource(23425U);
    msg.setSourceEntity(201U);
    msg.setDestination(5695U);
    msg.setDestinationEntity(203U);
    msg.value = 0.34993206008;

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
    msg.setTimeStamp(0.727285662282);
    msg.setSource(8464U);
    msg.setSourceEntity(81U);
    msg.setDestination(23426U);
    msg.setDestinationEntity(193U);
    msg.value = 0.47095999694;

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
    msg.setTimeStamp(0.562570951086);
    msg.setSource(13199U);
    msg.setSourceEntity(167U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(79U);
    msg.value = 0.480855000637;

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
    msg.setTimeStamp(0.911836670865);
    msg.setSource(54405U);
    msg.setSourceEntity(159U);
    msg.setDestination(25607U);
    msg.setDestinationEntity(137U);
    msg.value = 0.967108906326;

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
    msg.setTimeStamp(0.935755510407);
    msg.setSource(33539U);
    msg.setSourceEntity(153U);
    msg.setDestination(12857U);
    msg.setDestinationEntity(206U);
    msg.value = 0.508634440126;

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
    msg.setTimeStamp(0.0844054842299);
    msg.setSource(59673U);
    msg.setSourceEntity(182U);
    msg.setDestination(15335U);
    msg.setDestinationEntity(62U);
    msg.value = 0.717546737784;

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
    msg.setTimeStamp(0.23859556702);
    msg.setSource(14285U);
    msg.setSourceEntity(146U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(37U);
    msg.value = 0.766595141165;

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
    msg.setTimeStamp(0.882893481455);
    msg.setSource(23949U);
    msg.setSourceEntity(87U);
    msg.setDestination(44437U);
    msg.setDestinationEntity(254U);
    msg.value = 0.93331034465;

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
    msg.setTimeStamp(0.486719153184);
    msg.setSource(6561U);
    msg.setSourceEntity(240U);
    msg.setDestination(41234U);
    msg.setDestinationEntity(8U);
    msg.value = 0.169777962893;

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
    msg.setTimeStamp(0.88059520478);
    msg.setSource(6839U);
    msg.setSourceEntity(122U);
    msg.setDestination(31137U);
    msg.setDestinationEntity(52U);
    msg.number.assign("SPTZNPGGAOYMKVSIPLJZUMWSFPQTDODQVTCPRCSQJFHMQEYAXDBDVLIIRGHDHAHBLNBUFNIRSXYGIHMJHJYOKQKEJFCVRCGZUKQBXIMQFECUIAMBLAIRJEVXYDJVKWWPKXFOXCWPNHQFCZTTWTNTRYSLBEJEANLBFXRBBAXDXYKSUBOPMGCUYNFZOROLAIMVEHURWNICQEKAKJQVEZGYPPDWTTTSUOSZLNWMZVAELSOW");
    msg.timeout = 35478U;
    msg.contents.assign("EZWQIVIQAUEHRGOJMLVRKLTAQOCGQSVXXQEVJFCVXQNKJPGAYGKDDNXXDSFJTCYTLYTNKWKDYLONAZHQCMKPURZGEURPULDCENMYBAVMNZZHGUTVFQFALKEMODLJIJWJMASGGETBRXSDYIXHNPRXBEAMKTFNFQKSBGFPYTRCRIOW");

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
    msg.setTimeStamp(0.275713937371);
    msg.setSource(28505U);
    msg.setSourceEntity(241U);
    msg.setDestination(36994U);
    msg.setDestinationEntity(188U);
    msg.number.assign("AAVGXQHQJJNEJFOUPOPQITGMXYWUUYLYGTJRQTENPKQNRFBLMRTSMRFPUODOWCVBHMHSCIFTQICBUVYNHLRARRNLMKTBJAAXUGXVUDPGAXDABVKEZHYSGFTWSMNSJQDQLLCXJZZMIGZDCTYMKUEAXZOFLZXHCWVMLUGZVF");
    msg.timeout = 49314U;
    msg.contents.assign("VRYVAENLDCIVPKMNGJVRWPMUICJUGDMOQIGFKXQSIYLZDFNXUJTGDNZTXVCFRDNYMMRUNEWBYBGBZHERZRSZCIENDGTCQQUHQOTTWVQAXISJGGVXXCVKEHSUKAKAOOZZKRGCOJLUPYMYYSHYSLMZAIETJWFEJTBTHDLYXI");

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
    msg.setTimeStamp(0.835838899546);
    msg.setSource(12613U);
    msg.setSourceEntity(2U);
    msg.setDestination(23184U);
    msg.setDestinationEntity(18U);
    msg.number.assign("LNDNQTSUUFRGKNQOSSRFHZKJIEOECXDTRQFEXWTRLVSZPUVWLGMPMMCZIWMABWVNVYXYUQGOBSWSNNMUTXWTOXKXPBYVFJJICECINXPAXGZBEADJOYTUYTCLLMWUZBCKRQRZVGDGZKPRHHHHSEG");
    msg.timeout = 64163U;
    msg.contents.assign("FSGCUZBZVPLFPQQGLMDWQKQZIWPWGIVQTUVBUXJUXRKYHIJZYRILTQEFCNDAJGQLIHCRPBIAJOWOJKRBCQOVYNTQXMLXNCMRMRTOOPMSOKWHFKWDHMWBHTSOYUDFZVLNWWHBYQELTKAYOYMGIETFRNJISXNALBKUOLBCVPPJRYXMEEZJDBNSXNLESFKGGPTSAHEDEZWIT");

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
    msg.setTimeStamp(0.383434924607);
    msg.setSource(6041U);
    msg.setSourceEntity(244U);
    msg.setDestination(11067U);
    msg.setDestinationEntity(19U);
    msg.seq = 1731232296U;
    msg.destination.assign("JEQLCYYFANGBFDMXXHHJJPINPONTEWDRKBDLIGYCDGUXVUATFWMHTNHOZEFBVNIGXCSSXRUTTCPRFBLLAPABJADVKYOVQPFYLQKSBGVTIGQVVCRHJYOROULISHRRKIYPSYLABLYKFWDJUZOWQPCNFTPKPAJMMVUEMBXCUUCKEGRADUIUCXZ");
    msg.timeout = 25159U;
    const char tmp_msg_0[] = {104, 76, 70, 68, -68, 75, -77, 58, 77, 104, -100, 34, 8, -38, -15, 67, 18, -11, -18, -50, -44, 76, 90, -95, -118, -115, 55, -17, 68, 6, -12, -124, 54, -97, 14, -14, 114, 86, 5, 63, 44, -5, 108, -8, 83, -23, -111, 110, -79, 107, -93, -128, -122, 111, 71, -125, -12, 17, -40, -4, 39, 121, 51, 3, -107, 36, 26, -104, 126, 43, -105, -59, 40, -66, 29, 102, -73, -13, -17, -50, -15, 80, 51, 13, -124, 38, 24, -33, 14, 84, 111, 74, -110, 31, 72, -5, 14, -32, 15, 20, -68, -20, -21, 23, 4, -23, 117, 46, -11, 81, 106, 15, 12, -41, -25, -69, -111, 114, 89, 117, -107, -97, -39, -64, -1, -128, 59, -4, -93, -91, -15, -121, -10, -9, -101, 85, 47, 106, 5, 76, -82, 85, 71, 75, 118, -61, -44, 108, 101, -33};
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
    msg.setTimeStamp(0.220717158895);
    msg.setSource(60282U);
    msg.setSourceEntity(79U);
    msg.setDestination(9487U);
    msg.setDestinationEntity(129U);
    msg.seq = 3995926246U;
    msg.destination.assign("HBUQYWANTBJLPWPATZWICZZTOHEVEQEBMIYIAKMULTCRBPSMCVWJRRLNBQCFLNJGMHFHJJDPGCGFGDJPFUKUEDTDFIAXYNPVCIGNMSKKDORAYAFSMHOXBXPXBLTXJGZWJYXZEDMEBNSXADNFWOQFRKNKUQ");
    msg.timeout = 10327U;
    const char tmp_msg_0[] = {-64, -15, 75, 29, -21, -51, -116, 59, 86, 3, 8, -6, -106, 90, -74, 121, -79, 106, -47, 3, -121, -109, 52, -29, 110, 106, -38, -67, -39, -61, -66, -45, -75, -90, 116, 40, 6, 86, 60, 49, -31, 51, 22, -66, 118, 15, 65, -70, 11, -87, 109, -13, -52, -47, -12, -17, 20, 9, 37, 58, -104, -67, -55, 114, -5, -52, -9, -113, -95, -39, 47, -121, -127, 30, 42, -112, -33, 115, -125, -112, 6, -47, 6, 42, -41, -109, -88, -63, -42, -92, -27, -39, -39, 99, 67, 9, 42, 118, 50, 102, -1, -22, -44, -84, 110, 44, 17, 63, -10, 97, 125, -117, -6, 95, -20, 22, -61, 26, 61, -40, 115, -120, 27, 8, -70, 86, 122, -11, 16, 42, 84, 75, -49, -26, 122, 10, -15, -13, 70, 9, 124, -65, -50, 25};
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
    msg.setTimeStamp(0.494026260114);
    msg.setSource(29287U);
    msg.setSourceEntity(232U);
    msg.setDestination(28382U);
    msg.setDestinationEntity(134U);
    msg.seq = 3062408084U;
    msg.destination.assign("MOAPVMGWSIK");
    msg.timeout = 41378U;
    const char tmp_msg_0[] = {-103, -34, -5, 59, 20, -104, 123, -118, -22, 27, 51, -114, 60, 88, 69, -3, 94, 104, -36, 39, -67, 51, -59, -22, 25, 77, -111, -30, -50, 75, 28, 114, 67, -92, -127, 100, 7, 72, -26, 3, 34, -82, 124, 102, -76, -49, 56, -30, 25, 97, -104, -5, 80, -100, -70, -25, -66, 100, -80, -107, -57, -127, -122, 102, -45, -19, -101, -52, -47, 91, 14, -33, 111, -47, -8, 76, 16, 97, 89, 89, -89, -18, 8, -16, -29, 14, 115, -33, -38, 22, -7, -112, -112, -78, 96, 73, -91, 12, -42, -34, -74, 35, 12, -18, 19, 71, -40, -39, 18, -48, 39, -13, -114, 5, -127, -112, 82, 48, 117, -86, -72, -28, -50, 108, 4, -94, -98, -42, -24, -105, 56, 20, -28, 35, 77, 114, -83, -21, 35, -31, -79, 79, -120, -60, -49, -66, 89, 12, 71, 69, 83, -93, 11, -13, 53, 56, -57, 65, 115, -104, 26, -7, 22, -3, -8, 121, 96, 126, 37, -54};
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
    msg.setTimeStamp(0.596092715612);
    msg.setSource(65199U);
    msg.setSourceEntity(225U);
    msg.setDestination(39115U);
    msg.setDestinationEntity(32U);
    msg.source.assign("FOOKPUQVAWQGPEXYBKGYTTLDHTMGIAPBRRDUBZOFGZGAFUKWWRSCWCTSBRYSMJRHPJTNNWWZPQRBEDBOANLXAWHEVKPEKBCQLSKMRGIZLGLOSDIMIYXHSLDZWGXMVAVDUEJOUWCCCKRYNVMPSXIJJUTD");
    const char tmp_msg_0[] = {-15, -86, 65, -90, 62, 100, -119, -109, -109, 55, -4, -66, 90, -66, 69, 14, 50, -64, 109, 79, 125, 96, 19, 100, 7, 120, -37, -115, -11, 31, -58, -76, 103, -100, 8, 21, -63, -122, 42, 84, 23, -85, -118, 122, 30, -15, 104, 125, -35, 41, 28, -74, 42, 96, 75, -115, 114, 125, -97, 40, 1, 88, -37, -26, 25, -25, 17, 125, 42, 32, 23, 116, -98, 96, -125, 81, -88, -68, -9, -1};
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
    msg.setTimeStamp(0.4446272733);
    msg.setSource(26584U);
    msg.setSourceEntity(222U);
    msg.setDestination(19742U);
    msg.setDestinationEntity(68U);
    msg.source.assign("VLMHUCXTREWCIFN");
    const char tmp_msg_0[] = {-45, -20, -9, 1, -9, -24, 102, -59, 116, 9, -86, -82, 41, -58, -128, 10, -90, 122, 20, 119, 86, 93, -102, 63, 14, -104, 52, -30, -50, 99, -43, -42, 14, -8, 80, 98, 63, -122, -42, 37, -40, 64, -93, -118, -114, 123, -4, 93, 37, -63, 105, -55, -86, 54, -112, -127, -25, 108, -120, -110, -109, -7, 121, 55, 23, 122, -8, -91, -110, 7, 86, -22, 116, -68, -54, -23, 95, 32, -14, -53, 50, -9, 62, -1, 44, 88, -68, -88, -19, 1, 102, 10, -79, -97, -9, -126, 37, -112, -123, -17, 54, -80, 28, 37, 97, 48, -90, 18, -102, -97, -126, 34, 48, -80, -59, -97, 95, -116, 53, -27, 76, -37, -80, 81, 1, 10, 108, -15, 79, -30, -37, 40, 63, 65, 69, 24, 83, -72, 102, 61, 8, 58, -82, 101, -57, 39, 102, 54, 124, -39, 115, -56, -66, 39, 77, 59, -42, 18, -29, 93, -60, 114, -122, 56, 2, 104, 75, -10, -126, 95, 57, 26, 103};
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
    msg.setTimeStamp(0.119243428654);
    msg.setSource(47139U);
    msg.setSourceEntity(130U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(220U);
    msg.source.assign("ATIUZEBQIKVBJNMBOEUTJERWPDEVWDLMRWTVHXMLFJVRZOXGHAFOCRSYQGAJZSYILZKAGBPBGKFNXQMPUCBMZUNTLEZUXNUNMWOJOSHWYPOIMAQRCVSISXGQJDTTHHQBQFQMFKCDBZUIYCHPNYCTVKIKNEPDS");
    const char tmp_msg_0[] = {94, 106, -84, 77, 125, 8, -5, 48, -118, 113, 59, -107, 23, 112, 102, 19, -29, 53, 10, -53, 96, 76, -104, 29, 9, 66, 83, 56, -58, 70, 44, 101, 47, -1, 39, 4, -114, 44, -79, 60, -119, -67, -108, 38, -105, -24, 64, -28, -122, 37, 63, 41, -65, 90, 38, -77, -41, -5, -25, -45, 10, -36, 13, -115, -95, 21, 106, -19, -37, 72, 1, -84, 25, 34, -93, -12, -101, -42, 41, 124, 105, 106, -14, -53, -32, 93, -101, 78};
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
    msg.setTimeStamp(0.152606020582);
    msg.setSource(33770U);
    msg.setSourceEntity(218U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(47U);
    msg.seq = 453849664U;
    msg.state = 186U;
    msg.error.assign("WTFDFZQWQBRGCKABXLBERSGGVSEOJLPJSZZZDCPXCFACHFPCFWICWAGPLUADANMUIUNOLMWDKYNYZBRYMHNTMXBEIRQZYJCZ");

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
    msg.setTimeStamp(0.698201258304);
    msg.setSource(1602U);
    msg.setSourceEntity(195U);
    msg.setDestination(45544U);
    msg.setDestinationEntity(140U);
    msg.seq = 2371824910U;
    msg.state = 26U;
    msg.error.assign("YJDLRWBIRRIKQBKYWELHTIXQCQVAYHNXTYTTQIVFGMXQZJUVYKCRNMJTXOCSUANVJJDGKLNVTRPWRFJRUESBUASBDDZQLQIKWFUDTKPKDZOLEAFYFWNCXZEJPTNAFGBRGPULBLFNGWTDAYLPCMOENAZMCZHGMVBPGOEBACXKECZHPOCMWOBSSUXIWUMFVHAO");

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
    msg.setTimeStamp(0.438853308502);
    msg.setSource(29780U);
    msg.setSourceEntity(201U);
    msg.setDestination(21051U);
    msg.setDestinationEntity(179U);
    msg.seq = 846231012U;
    msg.state = 96U;
    msg.error.assign("OAXHDYOTFCMCLIAULCFBARVKLJLXHZIEOAPWIMCCTKKLWWHOIDSBBGRHVNCUGFGHYTSNWXEVOLZXOPECKZYJKYGZGNIXSGIHJVYFZMTRETXUXGFQAACQXPJMJKTNBOFMBRXNQRITZMETBEEJUUAUVVZHPZVMJOZRDSQAMPFJHRLDWYBUYHPDLVHKISBDYSGSIZRUSREOFQWPQPNU");

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
    msg.setTimeStamp(0.798443377105);
    msg.setSource(41238U);
    msg.setSourceEntity(73U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("IHQLBJRFHJMNUSEQHUOTPAZATMWJKIOZEWPWXLBOBCWYAVQFFZZRW");
    msg.text.assign("SGUYYFTSGYTBKIARWZVBHJDDFOFTEKARFLUZXFUGVFSOROMEFYFTHGQWPCINSMKTAEDNXLQJBJTGUEZJSSHJUCWYTPCOJMUDQMSQOHBXYPUVUBVUINNQKMCINZKXLMBGBJCGWWFMEVHPUEZAJRXGRNDRTDGIXXIFHNYVWZSQQLZLMICOZVJZKRLSYXLRLEKZHWCYAMKDNAIXVCARBPAICHY");

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
    msg.setTimeStamp(0.989062132772);
    msg.setSource(9077U);
    msg.setSourceEntity(40U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("POENUVGKXSKGHQFWDAHKCYFVCWFAPHNELIMKOZEDQYESFCBZWCETPSEXLRRXONFYFMIBCBBVRZTBHMILOG");
    msg.text.assign("JQFIAERBLOSWASVIBBEDKWHKNNIZJXL");

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
    msg.setTimeStamp(0.0599168602588);
    msg.setSource(12406U);
    msg.setSourceEntity(210U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(235U);
    msg.origin.assign("AHPGHNYQWRQZNZVQKMKAOJMWKVABNWFKIAHBJMYDWKCXMZSSBMOCKRZHDB");
    msg.text.assign("TRMPTKVGKLVZTSHSEFBZZDSUXEERRJHJAETAWKMESDXPKRQQKZXOYPEAOUCFKQOATKUMPBKFPEDTBPASOGCFMHKQGWQUGXULDWUJYCANYWLHNGTFMNUHZYLBINVQFTEHRFQGOIWGAJBHVSNRWCZHOYFVYZDUIHZVQPCMSVLHZVNAPQLRQIYEPIVINMBBXCCBUSBXDWY");

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
    msg.setTimeStamp(0.115151867505);
    msg.setSource(3543U);
    msg.setSourceEntity(44U);
    msg.setDestination(41148U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("ISRQSANZYBCNPILUXBTXLLQPMJKTXYVBJEMKFQBEZLYNRCNOIDZVPTBZHGWLAUQIEPUVKFMIKFCTPKZCTHPMJXDG");
    msg.htime = 0.576959235965;
    msg.lat = 0.0749843275293;
    msg.lon = 0.420867339545;
    const char tmp_msg_0[] = {17, 42, 48, 91, 97, -86, -22, 29, 69, -48, 96, 15, 11, 8, 123, 101, -75, -49, -6, 44, 32, -123, -81, 91, 80, -90, -126, 25, -95, -80, -89, 45, -71, -115, 96, -104, 11, -125, -105, 51, -53, -24, 58, 61, -18, 30, 64, -109, 78, -111, 77, 26, -6, 62, -54, 50, -27, -92, -44, -126, -21, 96, 61, -82, 105, 48, -71, 39, -122, 71, -116, 65, 72, -23, 5, 28, 99, 65, 39, 93, -5, -48, 121, 51, -21, 94, 76, 1, -121, -45, 99, 14, -114, 38, 17, -34, -103, -92, 74, 43, 78, -64, 47, -17, -18, -128, 12, -55, -20, -17, 126, -48, 47, -116, 86, 34, -3, -22, -34, 81, 103, 66, -89, 35, 86, 26, -61, 65, -2, 117, 0, -67, 35, -44, 20, -29, 103, -107, -93, 16, -72, 63, -110, 56, -81, 13, 81, 48, -75, 39, 40, 24, -76, 61, -31, -42, -118, -4, 84, -122, -75, 56, -85, -105, -60, 66, -79, 82, 41, -14, 67, -71, -82, -8, 72, 109, 123, -63, -38, 122, 95, -114, 60, -27, 113, 24, -11, -100, 29, -27, -51, -30, -106, 25, 62, -36, 9, 51, -64, 20, -125, -53, -13, 120, -11, -92, -102, -39, -94, -55, -93, 122, -14, 65, 34, -102, -9, -67, 23, 18, -64, -27, 2, -8, 112, -67, -51, 82, -113, 18, -77, -4, 6, -81, -38, 104, 4, 83, 65, 80, 57, -60, 123, 121, 49, 105, -84, 66, -22, -120};
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
    msg.setTimeStamp(0.812200013316);
    msg.setSource(45921U);
    msg.setSourceEntity(51U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("ODWZGKAXXPUTDIDOCQAGLJGTWRFPZAJUHNMICQEIQNMEZUFHCSAXIKLMNUSJNBYOTSSPGUARVKMINTRSQCCUUVDEBFOPXPVEWFBRKEDUKBRZXPZEVDHGPZKXQNUOHTJQH");
    msg.htime = 0.79875962617;
    msg.lat = 0.546409666343;
    msg.lon = 0.323297997209;
    const char tmp_msg_0[] = {-39, 94, 79, 42, 6, 59, 23, -77, -106, 9, -107, 82, -59, 104, -13, -93, -4, -11, -89, 27, -87, -61, 104, 120, 62, -101, -46, 99, -11, -79, -31, -33, -105, -57, 1, 117, -103, 111, 27, -96, 15, 49, 64, -36, -77, -63, -42, -40, 39, 103, 44, 35, 93, 2, -42, -52, 126, 26, 73, -37, 109, -35, -105, -128, -2, 74, -110, -34, 83, -79, 22, -86, -30, -99, 51, 27, 85, -110, 123, -79, 99, -100, 47, 45, 62, -108, -20, 89, 21, 63, 14, 51, 123, -89, -71, -98, -123, -52, -90, 16, 68, -59, -101, 103, 0, -118, -23, 89, -67, -32, 103, -114, 34, -17, 73, -27, 115, -72, 11, -114, -64, 11, 22, -107, 83, 16, -90, 29, -39, 58, -38, -66, -88, 0, -98, 90, -90, -15, -103, 15, -125, 124, -37, -63, -120, 52, -114, -30, 118, -56, -31, 87, 55, 48, -84, -19, -29, -83, -79, -81, -83, -20, -42, 45, 57, 97, 9, 68, 55, -123, 51, 63, -4, 96, -9, 19, -14, 22, -108, -38, -12, -62, 20, 68, -76, 21, -42, 85, -83, 71, -91, -76, 66, -39, 60, 3, 42, -15, 116, -6, 50, 22, -113, 22, 82, -94, 65, 27, -38, 24, 105, -118, -62, 65, -16, 125, 101, 44, 84, -103, 23, 35};
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
    msg.setTimeStamp(0.780632333747);
    msg.setSource(58615U);
    msg.setSourceEntity(167U);
    msg.setDestination(49222U);
    msg.setDestinationEntity(83U);
    msg.origin.assign("ICTMWSXOZRAIHDTVIRTWURKCJDTYJLEYYWKJFNPFPBMFDOKPVOHLXIIOOPDCDPJDQEUTVKDYAWIJUMQYVLJJBRUNVTDKLMAOMWMRRNFSVOHEZHQUUEPZMUPLBGBQSFIZABYNAZQCVGMEH");
    msg.htime = 0.933098816815;
    msg.lat = 0.0118724034422;
    msg.lon = 0.750169427484;
    const char tmp_msg_0[] = {106, 50, 44, -56, -74, 53, 27, 89, -48, -14, 105, -82, -116, 9, 38, 57, 36, 21, -5, 19, 77, -112, -76, 99, 74, -10, -16, 66, -120, -124, 118, 47, 18, -70, 97, -44, -10, -9, 31, 75, 19, 75, 81, -60, 47, -102, 84, 80, 121, 22, -4, -58, -114, -61, 120, -2, -42, 114, -48, 19, -34, 106, 111, 82, 122, -16, -8, -107, -21, 91, 21, -49, -128, -30, -24, -63, 65, 34, 121, -121, -24, -35, -60, -57, -76, 52, -118, -70, -123, 120, 15, 79, -7, -33, -19, 13, -57, -8, 51, -98, -14, -85, -45, 88, 35, -25, 48, -44, -64, -23, -81, 112, 58, 46, -34, 8, 104, -24, -112, -93, -20, 118, 123, -111, -77, -44, 2, -6, -2, 106, 0};
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
    msg.setTimeStamp(0.511552040084);
    msg.setSource(21391U);
    msg.setSourceEntity(217U);
    msg.setDestination(51594U);
    msg.setDestinationEntity(219U);
    msg.req_id = 28316U;
    msg.ttl = 40193U;
    msg.destination.assign("BMEHFHZXKVM");
    const char tmp_msg_0[] = {-43, 8, 86, 25, 23, -36, -78, -48, -128, -19, 123, -125, -54, -120, -24, -33, -47, 1, -95, 123, -106, -74, -1, -103, 94, 73, -58, 26, -39, -116, -37, -40, -5, -113, 69, 55, 23, 88, 78, -20, -33, -119, -63, -46, 103, 44, -99, 22, 40, -82, -20, 102, 109, -31, 83, 81, 8, 43, 121, -51, 120, -91, -29, -21, -88, -80, 81, -49, 33, -117, 20, 113, -62, 32, -115, 98, 99, -10, 30, -37, 106, -2, 71, -11, 52, -91, 53, 3, 44, -61, -23, 126, 115, -87, 97, 38, 31, -31, 57, -112, -12, -67, -48, -56, -123, -23, -55, -51, 123, 37, 104, 31, 7, -103, -44, -35, -55, -5, 24, 119, -68, 92, -43, -15, 109, -34, 92, -5, 120, 44, -121, 124, 57, 28, 59, -80, 20, -108, -107, 2, -69, -4, 35, -93};
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
    msg.setTimeStamp(0.430317888832);
    msg.setSource(38286U);
    msg.setSourceEntity(185U);
    msg.setDestination(362U);
    msg.setDestinationEntity(215U);
    msg.req_id = 27191U;
    msg.ttl = 63781U;
    msg.destination.assign("MOBDHUKAEBXXJYRPWOSFULCYQVFXNQCKNRHMDAHDMSVLZSSGFLSJXUBWDKEFNHVPRQFESPDGBKACKUAVSWBNYJBZWRZTRFYXTLGYQPGFNOWEWMEVXURTWTJADPTZICAPIVTOCDFQIQGLU");
    const char tmp_msg_0[] = {1, -24, -75, -72, 65, -65, 1, -93, -3, -33, -30, -6, 97, -66, -118, -107, -114, 18, -11, -34, -29, -45, 120, 89, 85, 43, 99, -18, 110, 99, 95, 53, -40, -4, 17, -73, -29, 29, -64, -24, -69, 28, -76, -80, -32, 109, -53, 107, -29, 113, 87, -121, 104, -94, -55, -36, 59, -27, 37, 85, -95, -57, -103, 103, -32, 15, -82};
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
    msg.setTimeStamp(0.968118275835);
    msg.setSource(63263U);
    msg.setSourceEntity(140U);
    msg.setDestination(35322U);
    msg.setDestinationEntity(226U);
    msg.req_id = 5768U;
    msg.ttl = 63562U;
    msg.destination.assign("MMWDZSKXYNL");
    const char tmp_msg_0[] = {-2, -80, 80, 97, 97, 13, 50, -1, 41, 58, -101, 42, 35, -113, -16, 93, -117, -114, 16, 78, 65, 8, -10, 85, 99, 23, 100, -57, -59, 75, -109, -15, 20, -90, 87, 113, 70, -126, -89, -65, -55, 61, -87, -127, 120, -49, 59, 103, -27, -59, 58, 115, -10, -83, -112, 28, 80, -62, 104, 34, -67, -11, 36, 122, -26, 23, 82, -49, -9, 88, 32, 10, 93, -13, -32, -2, -40, -3, -114, -6, -34, -22, -94, -117, 1, -127, -76, 117, -28, 108, -75, -29, 42, -95, -73, 86, -45, -113, 40, -96, 118, -22, 8, -62, -41, -116, 21, 55, 30, -86, -90, -26, 13, 64, 61, -45, 34, -51, -22, -2, 42, 45, 4, -111, -46, 60, -31, -115, 97, -19, -112, 41, -128, -44, 45, 47, -76, 77, 107, 15, -45, 47, 46, 8, -47, 78, 119, -67, -47, -110, 2, 109, 72, 113, -106, -45, 116, 21, 81, -76, -112, 83, -24, 72, 105, -23, -55, -107, 31, -19, -84, 83, -119, -31, 55, -51, -57, 25, -33, -54, -99, -107, 51, 79, -93, 125, -69, -8, 30, 11, 126, 2, 68, 51};
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
    msg.setTimeStamp(0.700131426806);
    msg.setSource(55810U);
    msg.setSourceEntity(22U);
    msg.setDestination(30216U);
    msg.setDestinationEntity(193U);
    msg.req_id = 1333U;
    msg.status = 150U;
    msg.text.assign("ADHBBUXNGWJLXJBLILTUYWVDTJXZKZSMWKJFPHRNNYVOKLPZXPSDIQZOZZGXSNIZLYKOVIDBLUFCOILUQPPXQUCDWZQDKXSDUPSHCSYXWASAGBQOFIBJTFTBXKROPVRTRPPVWWGVRNHCHAAJTFMKUMDKOAGVPEIUEHQKCNMHZEYRYOR");

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
    msg.setTimeStamp(0.0131731525784);
    msg.setSource(16624U);
    msg.setSourceEntity(164U);
    msg.setDestination(3225U);
    msg.setDestinationEntity(239U);
    msg.req_id = 19230U;
    msg.status = 121U;
    msg.text.assign("IUULQMADPPTDJJSTBWZUQHNKYIQVXAXNVMDDUFLEOLYPNZOCCECGAYSOYHEHAWPECFSGBOPRXDJQSWFDKGBGZHEJCMZQWGLVRAVXEQBIURMLLMOHRYJQUKWNYKPCNBFBATWCPKRRLDGTYMGFYXJKEAPSAZJFVRRZPFWOKMUOATQOBSISSHEVWTNLEOZNQCIQJMKVALWGFESCBDDIVZYNIUJKXZNHKWCXLFGIMXYFITB");

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
    msg.setTimeStamp(0.662705885308);
    msg.setSource(35676U);
    msg.setSourceEntity(23U);
    msg.setDestination(21111U);
    msg.setDestinationEntity(139U);
    msg.req_id = 52498U;
    msg.status = 211U;
    msg.text.assign("FWUXJNCXOVHQKWDIMHPOAWTRPPHLAUGLQFWBARVIMPIMCFRGOUFCNMARIJADHHEL");

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
    msg.setTimeStamp(0.718262722715);
    msg.setSource(46314U);
    msg.setSourceEntity(44U);
    msg.setDestination(10667U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("ZIYTCQRRLMSSFZCOTZZWAZBFVHMTU");
    msg.links = 3319416303U;

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
    msg.setTimeStamp(0.405876427396);
    msg.setSource(37294U);
    msg.setSourceEntity(159U);
    msg.setDestination(20202U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("YPSEROQPNQPTJXFORCZXTREGTHZEYOMDKWWWFYJOVJZNEXJUDRYBAFVLXEACGHZM");
    msg.links = 274784092U;

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
    msg.setTimeStamp(0.887237960758);
    msg.setSource(51760U);
    msg.setSourceEntity(124U);
    msg.setDestination(37281U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("QBNNHPOPMZXJXBDEKDSMUCSHATUCIZDNQYZYCFZBHNKDYSBLDGLWQVFBLWJWHVXGQFMOGXDWDYUPCBTSQISBVOLAFKLRRSVGQRVOJHJDEXZGIUDWRQJACYMTGCKRXIFKJFBEPEYJNPGHFUSKQYZAEFTVUBRVMHIBEOTYERWOAZIQJMFRUPIVZMVAMTGKNOETLPALPPEXXNPIKDFZCHUWONIXILLYHKSJ");
    msg.links = 2476938611U;

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
    msg.setTimeStamp(0.313103079243);
    msg.setSource(16461U);
    msg.setSourceEntity(220U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(225U);
    msg.groupname.assign("DRIXEBKEJNEWATQNQPYHJRHQBCYDPBQDIZCCYBRQSNLKEGRXUKTCFLZJWWDLLZCRWTHPNYCJXUHOSLZSBWLYOMEAXMMCVJJTVNGFSULGSMMLLXQZYMPOTGIHPTYIAGRBZVKXDFUNVPNTRKVWEKBVXDMYGWUHNSAUOUOCUEBVSAVKQNZRENOEHP");
    msg.action = 74U;
    msg.grouplist.assign("IBHTWFCVGXXZUXJ");

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
    msg.setTimeStamp(0.20498085426);
    msg.setSource(55498U);
    msg.setSourceEntity(29U);
    msg.setDestination(14992U);
    msg.setDestinationEntity(177U);
    msg.groupname.assign("ZXDDQPCLNVT");
    msg.action = 230U;
    msg.grouplist.assign("DTJTXZQXODAXLRHTUPWKMFZHQAUEELTBQYJUBTVCIIIRRKCHUOPKMGDDTENUASMSKFJEWAWZNGLNEB");

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
    msg.setTimeStamp(0.713880964123);
    msg.setSource(22360U);
    msg.setSourceEntity(226U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(115U);
    msg.groupname.assign("XJMWUEFKFCIINNUCTRIDQFHZKDAINORIBRVZEJEOLWKNXPKJJPZCOHHRIWOOFQHBTFGZASCARDNYMWKVIMAULLTJVAVXGWWLIPENZLJMBZTNPDSEDBWMGSEGOKSQUQPKTOZCYLBQHSEWTRNQVLXHJVDMYJOVXDHPUXYWZSYTEYRSAPBTGQOQVMDNXHUCACFSBBFGKBRCCTJUGIKGUMGUXFYUPYZXYTQDCFLQXAOLWM");
    msg.action = 69U;
    msg.grouplist.assign("KGCJRZJHCNUDYTASOPYMFLLVSKWWPRPERNHWQMLITXTFQUCOEIKUCAGEEAZUNINOYBGCASGXZMHCKQFRAMXCQBISXVLSJSHIVUC");

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
    msg.setTimeStamp(0.186443154745);
    msg.setSource(65276U);
    msg.setSourceEntity(141U);
    msg.setDestination(38404U);
    msg.setDestinationEntity(242U);
    msg.id = 97U;
    msg.range = 0.018615141136;

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
    msg.setTimeStamp(0.0221522980979);
    msg.setSource(23415U);
    msg.setSourceEntity(22U);
    msg.setDestination(2666U);
    msg.setDestinationEntity(141U);
    msg.id = 114U;
    msg.range = 0.563084015479;

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
    msg.setTimeStamp(0.558439909978);
    msg.setSource(6754U);
    msg.setSourceEntity(225U);
    msg.setDestination(64264U);
    msg.setDestinationEntity(149U);
    msg.id = 203U;
    msg.range = 0.984389261025;

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
    msg.setTimeStamp(0.526470246087);
    msg.setSource(28293U);
    msg.setSourceEntity(74U);
    msg.setDestination(33618U);
    msg.setDestinationEntity(172U);
    msg.tx = 200U;
    msg.channel = 4U;
    msg.timer = 23315U;

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
    msg.setTimeStamp(0.25564240936);
    msg.setSource(55062U);
    msg.setSourceEntity(180U);
    msg.setDestination(37204U);
    msg.setDestinationEntity(103U);
    msg.tx = 202U;
    msg.channel = 131U;
    msg.timer = 46210U;

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
    msg.setTimeStamp(0.224960607735);
    msg.setSource(58365U);
    msg.setSourceEntity(135U);
    msg.setDestination(22686U);
    msg.setDestinationEntity(221U);
    msg.tx = 135U;
    msg.channel = 249U;
    msg.timer = 20536U;

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
    msg.setTimeStamp(0.771428307906);
    msg.setSource(59801U);
    msg.setSourceEntity(182U);
    msg.setDestination(64110U);
    msg.setDestinationEntity(58U);
    msg.beacon.assign("LDYDCTSBEUTZEZLTBWXCDKJLELFLBVPWRRKNEWPWXKTDUNWVXDGQTEDSEQBTPGMGHFNQJJRQGMIYOVZBOJCUZFKHMUXVHCYPMFHAYWWDGCTNNAFBQDOJWKIFTPIAAYVJAYRZPPBRKGSRVSVHBDVASH");
    msg.lat = 0.420648190426;
    msg.lon = 0.974316627695;
    msg.depth = 0.970601935796;
    msg.query_channel = 70U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 90U;

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
    msg.setTimeStamp(0.791738383287);
    msg.setSource(46372U);
    msg.setSourceEntity(90U);
    msg.setDestination(64400U);
    msg.setDestinationEntity(63U);
    msg.beacon.assign("UFZDTOSCEURQRMIPSUYNXVJGDLLMJVAGWYXEUVTQZKGCUONNLGDPXOPLGHEWYBVBILAYOSQMFZKVLCHXDNRRFDGJYAIPROLTZXIUIHBAAIZ");
    msg.lat = 0.3393356265;
    msg.lon = 0.328536829107;
    msg.depth = 0.0344607878346;
    msg.query_channel = 246U;
    msg.reply_channel = 20U;
    msg.transponder_delay = 71U;

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
    msg.setTimeStamp(0.599274033601);
    msg.setSource(48049U);
    msg.setSourceEntity(126U);
    msg.setDestination(38089U);
    msg.setDestinationEntity(147U);
    msg.beacon.assign("DZZDESGXYRPCZINBBWISJRUYWUCIBJEOTWLNNLKKLKSFRAKIBEGWHKAMFKVSQQTECRELOQTUDLTRMFXPJLHMHBSGYFNQDFJUUPOUUSUTLPJNSBMRDXUKCZYYFFIEADOLMCLVHVQGKPCABWQYTWWYJ");
    msg.lat = 0.264073938559;
    msg.lon = 0.448614460147;
    msg.depth = 0.816857206442;
    msg.query_channel = 0U;
    msg.reply_channel = 47U;
    msg.transponder_delay = 89U;

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
    msg.setTimeStamp(0.349721884229);
    msg.setSource(20865U);
    msg.setSourceEntity(59U);
    msg.setDestination(20953U);
    msg.setDestinationEntity(159U);
    msg.op = 248U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UEBWBPEFSLITEEXILUBXGFDNZXPUKNMDUDNXCICSMBVSXVIOCRYXJBRSVAAIWWSGKNBJFMFKPZZHQCZTULTQJXCMNVUQIYJLFDTYOLPWJRAZUNMBHVWGODVOGIPPTQRMXNQQAWTROJMIUAQABLJWPMPZGYVUWYKAVIKJHAFDQPRKXSODMEAVYFEKBNKNVTTSLH");
    tmp_msg_0.lat = 0.105679840135;
    tmp_msg_0.lon = 0.998078710428;
    tmp_msg_0.depth = 0.827520146037;
    tmp_msg_0.query_channel = 66U;
    tmp_msg_0.reply_channel = 241U;
    tmp_msg_0.transponder_delay = 194U;
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
    msg.setTimeStamp(0.668033091644);
    msg.setSource(2693U);
    msg.setSourceEntity(17U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(213U);
    msg.op = 189U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XEYHXQWVJACQTVIWGFMNXSTTXLJTNKMBSGWGMHHQUJOSAELUBPPXRUTQDIQZCCOPAR");
    tmp_msg_0.lat = 0.759319706803;
    tmp_msg_0.lon = 0.852334886104;
    tmp_msg_0.depth = 0.72113597555;
    tmp_msg_0.query_channel = 157U;
    tmp_msg_0.reply_channel = 150U;
    tmp_msg_0.transponder_delay = 140U;
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
    msg.setTimeStamp(0.0756816882173);
    msg.setSource(55109U);
    msg.setSourceEntity(130U);
    msg.setDestination(7230U);
    msg.setDestinationEntity(63U);
    msg.op = 164U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JWHWMOZUEFOKTSYCIYQRXDMLHEHMHYDOTUPCV");
    tmp_msg_0.lat = 0.926140247762;
    tmp_msg_0.lon = 0.37163045883;
    tmp_msg_0.depth = 0.985715321175;
    tmp_msg_0.query_channel = 214U;
    tmp_msg_0.reply_channel = 197U;
    tmp_msg_0.transponder_delay = 142U;
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
    msg.setTimeStamp(0.249615837703);
    msg.setSource(29901U);
    msg.setSourceEntity(63U);
    msg.setDestination(45043U);
    msg.setDestinationEntity(158U);
    msg.address = 236U;

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
    msg.setTimeStamp(0.254518724418);
    msg.setSource(58554U);
    msg.setSourceEntity(157U);
    msg.setDestination(56885U);
    msg.setDestinationEntity(156U);
    msg.address = 52U;

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
    msg.setTimeStamp(0.476790252884);
    msg.setSource(51488U);
    msg.setSourceEntity(106U);
    msg.setDestination(13666U);
    msg.setDestinationEntity(171U);
    msg.address = 181U;

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
    msg.setTimeStamp(0.093591894633);
    msg.setSource(21114U);
    msg.setSourceEntity(192U);
    msg.setDestination(60513U);
    msg.setDestinationEntity(222U);
    msg.address = 140U;
    msg.status = 79U;
    msg.range = 0.210330728975;

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
    msg.setTimeStamp(0.0717785201745);
    msg.setSource(39617U);
    msg.setSourceEntity(140U);
    msg.setDestination(19493U);
    msg.setDestinationEntity(98U);
    msg.address = 63U;
    msg.status = 60U;
    msg.range = 0.70736448432;

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
    msg.setTimeStamp(0.544848811429);
    msg.setSource(42581U);
    msg.setSourceEntity(156U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(138U);
    msg.address = 116U;
    msg.status = 110U;
    msg.range = 0.563175090173;

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
    msg.setTimeStamp(0.561198675035);
    msg.setSource(25537U);
    msg.setSourceEntity(93U);
    msg.setDestination(30853U);
    msg.setDestinationEntity(76U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("SLWPGZOZCDKLTGIFUERYWVTBGDRBGPBPVOWHHKFWWOBDSFZCPCSKYZWEOQGMYHCGIUNAKNEVXILYRXEQVZAGKDPEFDDAAYVNAIXCBHUREWMZALIHTHIKTFEJXULZMOAFAKEUPIOLXMSBQOCVVMACNCVNVLSRDQQQYBLYXOPOXRYQXTNUMKWOSZHJJFJJPZTYJSHLNMXMENGRGQTNIJJIQDUSGJPHHPRFFZLXDDFTMSVUUSKMBCJWIBU");
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
    msg.setTimeStamp(0.253537106994);
    msg.setSource(5690U);
    msg.setSourceEntity(235U);
    msg.setDestination(23752U);
    msg.setDestinationEntity(148U);
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 1792455866U;
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
    msg.setTimeStamp(0.553314181474);
    msg.setSource(57199U);
    msg.setSourceEntity(241U);
    msg.setDestination(4652U);
    msg.setDestinationEntity(151U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.433412626893;
    tmp_msg_0.lon = 0.428055990283;
    tmp_msg_0.height = 0.0207234047911;
    tmp_msg_0.x = 0.191063559043;
    tmp_msg_0.y = 0.316291777327;
    tmp_msg_0.z = 0.938957673731;
    tmp_msg_0.phi = 0.411711724853;
    tmp_msg_0.theta = 0.6248625093;
    tmp_msg_0.psi = 0.331772013286;
    tmp_msg_0.u = 0.595214703287;
    tmp_msg_0.v = 0.7496623759;
    tmp_msg_0.w = 0.387772806169;
    tmp_msg_0.vx = 0.755255927121;
    tmp_msg_0.vy = 0.787312503129;
    tmp_msg_0.vz = 0.417083586509;
    tmp_msg_0.p = 0.323031150321;
    tmp_msg_0.q = 0.796910678346;
    tmp_msg_0.r = 0.669199602779;
    tmp_msg_0.depth = 0.798784877482;
    tmp_msg_0.alt = 0.470393350955;
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
    msg.setTimeStamp(0.548594066255);
    msg.setSource(30598U);
    msg.setSourceEntity(130U);
    msg.setDestination(21387U);
    msg.setDestinationEntity(139U);
    msg.enable = 156U;

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
    msg.setTimeStamp(0.602449925529);
    msg.setSource(52045U);
    msg.setSourceEntity(64U);
    msg.setDestination(36620U);
    msg.setDestinationEntity(96U);
    msg.enable = 182U;

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
    msg.setTimeStamp(0.268289726189);
    msg.setSource(55511U);
    msg.setSourceEntity(51U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(116U);
    msg.enable = 149U;

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
    msg.setTimeStamp(0.395143040898);
    msg.setSource(15881U);
    msg.setSourceEntity(157U);
    msg.setDestination(37574U);
    msg.setDestinationEntity(88U);
    msg.summary = 130U;
    msg.level = 199U;

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
    msg.setTimeStamp(0.230193437377);
    msg.setSource(53099U);
    msg.setSourceEntity(136U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(224U);
    msg.summary = 202U;
    msg.level = 174U;

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
    msg.setTimeStamp(0.940170831638);
    msg.setSource(50028U);
    msg.setSourceEntity(123U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(102U);
    msg.summary = 159U;
    msg.level = 105U;

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
    msg.setTimeStamp(0.538166754374);
    msg.setSource(5734U);
    msg.setSourceEntity(33U);
    msg.setDestination(28071U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.302080854433);
    msg.setSource(7993U);
    msg.setSourceEntity(149U);
    msg.setDestination(54862U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.645169648492);
    msg.setSource(41211U);
    msg.setSourceEntity(99U);
    msg.setDestination(1595U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.823373575548);
    msg.setSource(7679U);
    msg.setSourceEntity(222U);
    msg.setDestination(52795U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.963311107638);
    msg.setSource(63968U);
    msg.setSourceEntity(106U);
    msg.setDestination(34717U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.693774882833);
    msg.setSource(37636U);
    msg.setSourceEntity(149U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.699826245784);
    msg.setSource(31855U);
    msg.setSourceEntity(230U);
    msg.setDestination(4183U);
    msg.setDestinationEntity(5U);
    msg.op = 15U;
    msg.system.assign("XGYGSYTBFEWRXMVEPESTAPZQFWYWOKAGRNZFCYBVIEM");
    msg.range = 0.74341483841;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 246U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("OSLNUXTJORPVLXLGIEFWKHEVCTVQIAHZAQXFJQDPKTROWZJSZOKDMHCKMBAZAEWFJOVSDL");
    tmp_tmp_msg_0_0.description.assign("SUQLXXSVIPWBDKMIQTGODCZWYDKGHMGKTEPOLHHUVOZMKFSFMEXFTHOYURVSIAJRTAYFUSQNQXLRCNQOECJLGZXKFOMJBXCPYSXB");
    tmp_tmp_msg_0_0.vnamespace.assign("LNUSYKSQFHLNKYPRVBMXDRTYQWFFZOWEWDIJHOCYCXOHTGXGICSNDDUBUOTMZQLLWFNIFOZGINSPTLLHOBMYSIACNDFRJRYBWGCHKORCRKVTHBZHRTGMFGXZIRXUWMIE");
    tmp_tmp_msg_0_0.start_man_id.assign("QRHBWGNILAFWEBMTQYNIHMKUYZSETBDVJVCQYXMWKKTLAKJSHIBQHPVETJWGJXSTACZEPOFCPTPPJSTVFAQVSRLKLDMSUGKEPMKBORALZQNVAFWGMDAOBDUUIFTGPUBOJDHOWUGDJCKARVIBAVXQEZDYGS");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("JNFUPNXJFQIWIESBYKFOSMFWWMGMSPULOBFECOQIJGYCOTDOLXXHUPJKDSVTPZFYDNDMQKFEXHGSRJXYJKTDHXKCHOUJGLMUAZVLYVQDIPTUDURBGSYPKASERUBLIBQMAPIDVXTWNVNCCVHMMMGZRLBNXSAGLKIMIQECHWINLBNXLDGTVOBZWSKHFYZUKAJTWPCDJREHOWQFYZZLZQEWAYYUBEAOXEVHOGSRIEPZPCVRVAQFRH");
    IMC::IdleManeuver tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.duration = 24154U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("RDWEBXJHSFXMCQKONNMKODKZWMBXUAOKCLCPXEBGXIMYLYBWJAYLQGRWOUPLJFCMUGYRUOVWDCIEJCNQAXNPVDVUOZKIYTZWBBHJINROGOAHFTRRYTQZNZHIQLGMQDKPPGLFKZQVQFGIRZTWJMTIEXPEPHRRSEDKEFUSJNQSIHAYZCLIHGGSSVUMHFDNSFSBZXVYJEDWRSLEDGUYUVZDLXMTIBTBBCOAANPC");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::EulerAnglesDelta tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.time = 0.974306313993;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.x = 0.713931184566;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.y = 0.620448713963;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.z = 0.0970467526072;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.timestep = 0.268047898442;
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("NHAAOHUVIIDBYXDNIRWUSTLLBZSOTCETYDPBWKKDQUEHIZKFGYCVWDKHVBCTNMQQMJRRRHIOJFPXXYPGWTGHKFSGRWVRTPGLLMLFIXSJGZMETBTZQGZERDPCSVCLYSYMRBUEPHWWLFVYQZBTGPGZFINBQDYFIJXXAODZMFJEWDZAJEVGCHOAKOBELEVCNUUZNMCSJNNHOPKBUSKYTFIQVHAPMARCKNWXS");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("QQRAUZSGVHRSAEYHMTPEOLAYISUZEHEXPFSUJXNFLFJCFRFTDDVSQRCUAMDTXHYSKDCTOMY");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("CPMJBEWYTMIZMJVGMWDZZOWKNEBCJMDGCOZAXPKUPBHNEEBOQIPRJCJUFZRZWQVPALVYYBMPNLYUSJWNFNVAVLAHBWQLSZTIGQYREGCLOVEARXFTCHHALFNVXQJLSFWHGRPEAOLVSTXXTUBMQRHKPSGHSYYDCMJESUQVAXRTPFUGGUDPUGGQEHWSWJZDTUCNRNHAILKHDIMZCIVXOKOBL");
    IMC::AlignmentState tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.state = 188U;
    tmp_tmp_tmp_msg_0_0_1.actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.312577103613);
    msg.setSource(51899U);
    msg.setSourceEntity(144U);
    msg.setDestination(43126U);
    msg.setDestinationEntity(81U);
    msg.op = 86U;
    msg.system.assign("YUSABQIDNRCYCLBHUKOLYRLHFKTMURCZTWTJTQYLPFLCP");
    msg.range = 0.628507737721;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("BSMIUPOGMJWQNWSKJALDKXSTIYQJQYRRTVLSUFHJEFRNHTVTFIPEJBIUOLMKUUGDLLZPCWUWZCBDYFLMCOJGXAK");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("IOKYPHTCJDJGZXJEVGVPPBVZCJDJORWDJDOVAXUNXEIRQWHYVHUZEFOIQIPTZHYHEFCXJFSEIUCBKOSKLNXLISVMOUUBIZLRMULQWVWYBHNLKQCQVQQVTRATLZECINKGCGFSZDAOJHZGLTFRRCXKPDTUPKTMUGUUWHXNMKEAFWABBNNYIFHRNSFBMLTECMWODLPYVYWMWSNBQBSZCDTKAJAFPKGXQFPLWXYGSGEDAJXIZOAQTMSPASNRMYYBDM");
    tmp_tmp_msg_0_0.feature_type = 185U;
    tmp_tmp_msg_0_0.rgb_red = 202U;
    tmp_tmp_msg_0_0.rgb_green = 102U;
    tmp_tmp_msg_0_0.rgb_blue = 133U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.867033781306;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.680085335872;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.892240190412;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0221092887294);
    msg.setSource(41941U);
    msg.setSourceEntity(253U);
    msg.setDestination(25297U);
    msg.setDestinationEntity(67U);
    msg.op = 87U;
    msg.system.assign("UCDONFKQWAKTWXJPASNNXKSJLGWWMSGFZDXLAOGOSUMEBBCFAMLYPGPHXZBLDXURXFKKTSKAHQENJFJPHDYVVYVYOGNPZUVYRMZMWUIBUKPURIVGAMOXYBECJZFPEBTSINEVMMXZQVDGBAIALQQCCWIJZRZVQAHT");
    msg.range = 0.66028322715;
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.691632744628);
    msg.setSource(30589U);
    msg.setSourceEntity(132U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.00860897615294);
    msg.setSource(32806U);
    msg.setSourceEntity(253U);
    msg.setDestination(7303U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.101701013331);
    msg.setSource(54766U);
    msg.setSourceEntity(57U);
    msg.setDestination(21311U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.125959842376);
    msg.setSource(23483U);
    msg.setSourceEntity(188U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(223U);
    msg.list.assign("ORVTDHXHERBVJWYIQSIRMWJAKHYAJOKIXPFHDIDPQAQNSDQUNCABWRNRFCTJWRTWYUVZLX");

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
    msg.setTimeStamp(0.4671556214);
    msg.setSource(62293U);
    msg.setSourceEntity(176U);
    msg.setDestination(43014U);
    msg.setDestinationEntity(177U);
    msg.list.assign("FOQAZGDGTEYIPYBIEUINFFYWIDMLXCUHAFLYSUNZRVKCKQFFPKXXHJAEWLRHOQZBMCZMUXAVTCFTGYBUOSSQXUNPAIBRAEMBMWDSPNDCWTXKXSILNDYWOHJDRWKAM");

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
    msg.setTimeStamp(0.632545575619);
    msg.setSource(5462U);
    msg.setSourceEntity(127U);
    msg.setDestination(59995U);
    msg.setDestinationEntity(64U);
    msg.list.assign("RDLJVZPZXOACSQASNNKTJUWQTDKVPKPHITCJBMSLOOCPRGEBUVQRUCLHORAASUHKFIVDUEAYTZGZPWTAWEUYECAFJYTVXYBEQDFBSUVEMQUMCRFSIWBSXLGGIQTKFIZITFCNNWUBIMQIMGWMVFSJZKKJRHXDOWXJNGSZNFCMXNNTYPLNGIWJRJMXXBFQVREDHLDTKAKBZDWPLOYUGRHEPPMFCCMG");

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
    msg.setTimeStamp(0.506026235572);
    msg.setSource(50813U);
    msg.setSourceEntity(160U);
    msg.setDestination(41761U);
    msg.setDestinationEntity(177U);
    msg.value = -20330;

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
    msg.setTimeStamp(0.312902052072);
    msg.setSource(34605U);
    msg.setSourceEntity(146U);
    msg.setDestination(1725U);
    msg.setDestinationEntity(94U);
    msg.value = -28842;

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
    msg.setTimeStamp(0.974255462643);
    msg.setSource(8069U);
    msg.setSourceEntity(58U);
    msg.setDestination(47435U);
    msg.setDestinationEntity(60U);
    msg.value = -25410;

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
    msg.setTimeStamp(0.924060940322);
    msg.setSource(24612U);
    msg.setSourceEntity(213U);
    msg.setDestination(6038U);
    msg.setDestinationEntity(23U);
    msg.value = 0.899090087737;

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
    msg.setTimeStamp(0.259302867078);
    msg.setSource(35231U);
    msg.setSourceEntity(171U);
    msg.setDestination(10345U);
    msg.setDestinationEntity(95U);
    msg.value = 0.519449930293;

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
    msg.setTimeStamp(0.912092476042);
    msg.setSource(43111U);
    msg.setSourceEntity(130U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(219U);
    msg.value = 0.370667012838;

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
    msg.setTimeStamp(0.30180720446);
    msg.setSource(22556U);
    msg.setSourceEntity(237U);
    msg.setDestination(44842U);
    msg.setDestinationEntity(243U);
    msg.value = 0.789662900417;

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
    msg.setTimeStamp(0.154166371505);
    msg.setSource(18554U);
    msg.setSourceEntity(7U);
    msg.setDestination(55076U);
    msg.setDestinationEntity(74U);
    msg.value = 0.314973168528;

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
    msg.setTimeStamp(0.958669593941);
    msg.setSource(63806U);
    msg.setSourceEntity(130U);
    msg.setDestination(2446U);
    msg.setDestinationEntity(74U);
    msg.value = 0.160330491598;

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
    msg.setTimeStamp(0.710612305712);
    msg.setSource(61022U);
    msg.setSourceEntity(144U);
    msg.setDestination(32734U);
    msg.setDestinationEntity(235U);
    msg.validity = 65382U;
    msg.type = 192U;
    msg.utc_year = 46881U;
    msg.utc_month = 215U;
    msg.utc_day = 32U;
    msg.utc_time = 0.518440981998;
    msg.lat = 0.0130779579531;
    msg.lon = 0.933683803219;
    msg.height = 0.0668210238498;
    msg.satellites = 135U;
    msg.cog = 0.492153789184;
    msg.sog = 0.778482836444;
    msg.hdop = 0.628964684124;
    msg.vdop = 0.203824945373;
    msg.hacc = 0.0536095409343;
    msg.vacc = 0.943498378207;

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
    msg.setTimeStamp(0.972185683801);
    msg.setSource(17483U);
    msg.setSourceEntity(60U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(102U);
    msg.validity = 60548U;
    msg.type = 78U;
    msg.utc_year = 33561U;
    msg.utc_month = 49U;
    msg.utc_day = 244U;
    msg.utc_time = 0.685611304578;
    msg.lat = 0.374700393306;
    msg.lon = 0.62480814384;
    msg.height = 0.23482678546;
    msg.satellites = 68U;
    msg.cog = 0.625567380515;
    msg.sog = 0.447488560195;
    msg.hdop = 0.469760617444;
    msg.vdop = 0.14608273952;
    msg.hacc = 0.783960659158;
    msg.vacc = 0.222325336858;

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
    msg.setTimeStamp(0.386738602161);
    msg.setSource(60873U);
    msg.setSourceEntity(8U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(0U);
    msg.validity = 15383U;
    msg.type = 16U;
    msg.utc_year = 13172U;
    msg.utc_month = 154U;
    msg.utc_day = 230U;
    msg.utc_time = 0.963127577968;
    msg.lat = 0.212126135995;
    msg.lon = 0.589020800613;
    msg.height = 0.177576867878;
    msg.satellites = 180U;
    msg.cog = 0.918561773388;
    msg.sog = 0.324432408152;
    msg.hdop = 0.543777319847;
    msg.vdop = 0.680213300722;
    msg.hacc = 0.721963713068;
    msg.vacc = 0.880939493848;

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
    msg.setTimeStamp(0.976479148376);
    msg.setSource(60584U);
    msg.setSourceEntity(227U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(179U);
    msg.time = 0.0738969678256;
    msg.phi = 0.157365146081;
    msg.theta = 0.356489460126;
    msg.psi = 0.74574929201;
    msg.psi_magnetic = 0.168540100195;

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
    msg.setTimeStamp(0.242570794205);
    msg.setSource(5479U);
    msg.setSourceEntity(12U);
    msg.setDestination(10897U);
    msg.setDestinationEntity(142U);
    msg.time = 0.0220605956678;
    msg.phi = 0.161112884731;
    msg.theta = 0.83972745532;
    msg.psi = 0.208377904566;
    msg.psi_magnetic = 0.232885320705;

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
    msg.setTimeStamp(0.287491847693);
    msg.setSource(53762U);
    msg.setSourceEntity(251U);
    msg.setDestination(8316U);
    msg.setDestinationEntity(40U);
    msg.time = 0.559592847808;
    msg.phi = 0.709149137751;
    msg.theta = 0.489925296081;
    msg.psi = 0.48223238858;
    msg.psi_magnetic = 0.61081713924;

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
    msg.setTimeStamp(0.954756268661);
    msg.setSource(59761U);
    msg.setSourceEntity(179U);
    msg.setDestination(60007U);
    msg.setDestinationEntity(249U);
    msg.time = 0.496832046267;
    msg.x = 0.813540927008;
    msg.y = 0.0239726200049;
    msg.z = 0.342649818752;
    msg.timestep = 0.89042930368;

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
    msg.setTimeStamp(0.775241492554);
    msg.setSource(64897U);
    msg.setSourceEntity(99U);
    msg.setDestination(40216U);
    msg.setDestinationEntity(8U);
    msg.time = 0.012742042821;
    msg.x = 0.820616033791;
    msg.y = 0.304343267863;
    msg.z = 0.592502294907;
    msg.timestep = 0.283136027111;

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
    msg.setTimeStamp(0.729505294868);
    msg.setSource(31700U);
    msg.setSourceEntity(94U);
    msg.setDestination(48319U);
    msg.setDestinationEntity(254U);
    msg.time = 0.460696020213;
    msg.x = 0.736597941;
    msg.y = 0.592234965807;
    msg.z = 0.902238079722;
    msg.timestep = 0.0601451550967;

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
    msg.setTimeStamp(0.570196304766);
    msg.setSource(49761U);
    msg.setSourceEntity(16U);
    msg.setDestination(37534U);
    msg.setDestinationEntity(128U);
    msg.time = 0.518409783934;
    msg.x = 0.150077916917;
    msg.y = 0.886748298381;
    msg.z = 0.619734279597;

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
    msg.setTimeStamp(0.0590351036377);
    msg.setSource(27656U);
    msg.setSourceEntity(52U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(83U);
    msg.time = 0.847883946857;
    msg.x = 0.685084088601;
    msg.y = 0.116509182425;
    msg.z = 0.45383131258;

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
    msg.setTimeStamp(0.21742116603);
    msg.setSource(12918U);
    msg.setSourceEntity(222U);
    msg.setDestination(65494U);
    msg.setDestinationEntity(29U);
    msg.time = 0.13500606354;
    msg.x = 0.459585170086;
    msg.y = 0.163425380154;
    msg.z = 0.981671604186;

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
    msg.setTimeStamp(0.566341005253);
    msg.setSource(7124U);
    msg.setSourceEntity(64U);
    msg.setDestination(36845U);
    msg.setDestinationEntity(49U);
    msg.time = 0.715039609062;
    msg.x = 0.975537956792;
    msg.y = 0.338332191771;
    msg.z = 0.322127851066;

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
    msg.setTimeStamp(0.742317686207);
    msg.setSource(75U);
    msg.setSourceEntity(121U);
    msg.setDestination(36265U);
    msg.setDestinationEntity(191U);
    msg.time = 0.0443121234498;
    msg.x = 0.490201306235;
    msg.y = 0.20810495041;
    msg.z = 0.537515659982;

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
    msg.setTimeStamp(0.801255703399);
    msg.setSource(7494U);
    msg.setSourceEntity(56U);
    msg.setDestination(27247U);
    msg.setDestinationEntity(195U);
    msg.time = 0.479183193713;
    msg.x = 0.501110422442;
    msg.y = 0.962757346152;
    msg.z = 0.358747875537;

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
    msg.setTimeStamp(0.272014900766);
    msg.setSource(10252U);
    msg.setSourceEntity(43U);
    msg.setDestination(11562U);
    msg.setDestinationEntity(155U);
    msg.time = 0.668356132356;
    msg.x = 0.124163452656;
    msg.y = 0.14913422292;
    msg.z = 0.155319933519;

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
    msg.setTimeStamp(0.545451094681);
    msg.setSource(24396U);
    msg.setSourceEntity(245U);
    msg.setDestination(25197U);
    msg.setDestinationEntity(82U);
    msg.time = 0.155111587098;
    msg.x = 0.907325900753;
    msg.y = 0.79602336707;
    msg.z = 0.100219458158;

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
    msg.setTimeStamp(0.547664167346);
    msg.setSource(49353U);
    msg.setSourceEntity(132U);
    msg.setDestination(23031U);
    msg.setDestinationEntity(92U);
    msg.time = 0.847752845414;
    msg.x = 0.674323880742;
    msg.y = 0.07051795578;
    msg.z = 0.820302114372;

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
    msg.setTimeStamp(0.886481934107);
    msg.setSource(49460U);
    msg.setSourceEntity(93U);
    msg.setDestination(1098U);
    msg.setDestinationEntity(236U);
    msg.validity = 129U;
    msg.x = 0.260466473942;
    msg.y = 0.844548485677;
    msg.z = 0.507532870023;

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
    msg.setTimeStamp(0.612351071522);
    msg.setSource(46089U);
    msg.setSourceEntity(133U);
    msg.setDestination(52109U);
    msg.setDestinationEntity(168U);
    msg.validity = 115U;
    msg.x = 0.438445778659;
    msg.y = 0.914587342577;
    msg.z = 0.423624919093;

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
    msg.setTimeStamp(0.12511934747);
    msg.setSource(60039U);
    msg.setSourceEntity(118U);
    msg.setDestination(41914U);
    msg.setDestinationEntity(162U);
    msg.validity = 92U;
    msg.x = 0.134331633064;
    msg.y = 0.970799722868;
    msg.z = 0.15675053561;

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
    msg.setTimeStamp(0.252244288963);
    msg.setSource(10175U);
    msg.setSourceEntity(172U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(52U);
    msg.validity = 226U;
    msg.x = 0.389287572366;
    msg.y = 0.937411492054;
    msg.z = 0.844594581437;

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
    msg.setTimeStamp(0.0631691760675);
    msg.setSource(12048U);
    msg.setSourceEntity(12U);
    msg.setDestination(1162U);
    msg.setDestinationEntity(157U);
    msg.validity = 7U;
    msg.x = 0.0267553311654;
    msg.y = 0.908074430704;
    msg.z = 0.465303380707;

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
    msg.setTimeStamp(0.190527529545);
    msg.setSource(29250U);
    msg.setSourceEntity(22U);
    msg.setDestination(17799U);
    msg.setDestinationEntity(150U);
    msg.validity = 209U;
    msg.x = 0.318288478794;
    msg.y = 0.211227718784;
    msg.z = 0.473442687179;

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
    msg.setTimeStamp(0.0409101773603);
    msg.setSource(13821U);
    msg.setSourceEntity(245U);
    msg.setDestination(64714U);
    msg.setDestinationEntity(163U);
    msg.time = 0.887321779657;
    msg.x = 0.548513844831;
    msg.y = 0.329228019481;
    msg.z = 0.127660086149;

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
    msg.setTimeStamp(0.841278298712);
    msg.setSource(51253U);
    msg.setSourceEntity(105U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(5U);
    msg.time = 0.446918767796;
    msg.x = 0.0703069996178;
    msg.y = 0.0958891230646;
    msg.z = 0.879479844283;

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
    msg.setTimeStamp(0.321114952009);
    msg.setSource(55272U);
    msg.setSourceEntity(135U);
    msg.setDestination(30089U);
    msg.setDestinationEntity(15U);
    msg.time = 0.558981812628;
    msg.x = 0.16700382985;
    msg.y = 0.126004573763;
    msg.z = 0.0773607316776;

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
    msg.setTimeStamp(0.634262634219);
    msg.setSource(2297U);
    msg.setSourceEntity(102U);
    msg.setDestination(29905U);
    msg.setDestinationEntity(122U);
    msg.validity = 14U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.175233513806;
    tmp_msg_0.y = 0.900494435631;
    tmp_msg_0.z = 0.127606487937;
    tmp_msg_0.phi = 0.554098167452;
    tmp_msg_0.theta = 0.136693153487;
    tmp_msg_0.psi = 0.997785699881;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.168050678039;

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
    msg.setTimeStamp(0.931256491455);
    msg.setSource(60845U);
    msg.setSourceEntity(103U);
    msg.setDestination(17868U);
    msg.setDestinationEntity(84U);
    msg.validity = 119U;
    msg.value = 0.738085033589;

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
    msg.setTimeStamp(0.560031094903);
    msg.setSource(35033U);
    msg.setSourceEntity(246U);
    msg.setDestination(43608U);
    msg.setDestinationEntity(78U);
    msg.validity = 238U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.494736922067;
    tmp_msg_0.y = 0.642865482764;
    tmp_msg_0.z = 0.24767966889;
    tmp_msg_0.phi = 0.0636121887946;
    tmp_msg_0.theta = 0.452043833192;
    tmp_msg_0.psi = 0.710912374846;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.833510253892;

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
    msg.setTimeStamp(0.0741239022134);
    msg.setSource(13123U);
    msg.setSourceEntity(3U);
    msg.setDestination(6269U);
    msg.setDestinationEntity(100U);
    msg.value = 0.707866625622;

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
    msg.setTimeStamp(0.866338523297);
    msg.setSource(29255U);
    msg.setSourceEntity(207U);
    msg.setDestination(45253U);
    msg.setDestinationEntity(213U);
    msg.value = 0.587086345036;

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
    msg.setTimeStamp(0.167497213538);
    msg.setSource(37611U);
    msg.setSourceEntity(49U);
    msg.setDestination(3699U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0185436730142;

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
    msg.setTimeStamp(0.358590937579);
    msg.setSource(41327U);
    msg.setSourceEntity(249U);
    msg.setDestination(52167U);
    msg.setDestinationEntity(148U);
    msg.value = 0.967275061311;

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
    msg.setTimeStamp(0.932138608362);
    msg.setSource(6912U);
    msg.setSourceEntity(71U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(189U);
    msg.value = 0.412619232034;

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
    msg.setTimeStamp(0.790454228563);
    msg.setSource(32379U);
    msg.setSourceEntity(70U);
    msg.setDestination(58758U);
    msg.setDestinationEntity(105U);
    msg.value = 0.309367014452;

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
    msg.setTimeStamp(0.528127168187);
    msg.setSource(31502U);
    msg.setSourceEntity(21U);
    msg.setDestination(54557U);
    msg.setDestinationEntity(176U);
    msg.value = 0.794926873581;

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
    msg.setTimeStamp(0.527947038796);
    msg.setSource(23368U);
    msg.setSourceEntity(229U);
    msg.setDestination(8250U);
    msg.setDestinationEntity(178U);
    msg.value = 0.235231197164;

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
    msg.setTimeStamp(0.527062772909);
    msg.setSource(57969U);
    msg.setSourceEntity(252U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(147U);
    msg.value = 0.360743134422;

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
    msg.setTimeStamp(0.509415269334);
    msg.setSource(64662U);
    msg.setSourceEntity(16U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(20U);
    msg.value = 0.732968202868;

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
    msg.setTimeStamp(0.899073334319);
    msg.setSource(20712U);
    msg.setSourceEntity(68U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(235U);
    msg.value = 0.70346370175;

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
    msg.setTimeStamp(0.371358332405);
    msg.setSource(64418U);
    msg.setSourceEntity(63U);
    msg.setDestination(54390U);
    msg.setDestinationEntity(135U);
    msg.value = 0.597862496477;

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
    msg.setTimeStamp(0.596519347395);
    msg.setSource(29605U);
    msg.setSourceEntity(92U);
    msg.setDestination(22669U);
    msg.setDestinationEntity(217U);
    msg.value = 0.972942079469;

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
    msg.setTimeStamp(0.846653465124);
    msg.setSource(59318U);
    msg.setSourceEntity(182U);
    msg.setDestination(38964U);
    msg.setDestinationEntity(60U);
    msg.value = 0.609877431918;

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
    msg.setTimeStamp(0.389820064553);
    msg.setSource(47453U);
    msg.setSourceEntity(208U);
    msg.setDestination(48676U);
    msg.setDestinationEntity(29U);
    msg.value = 0.929416983718;

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
    msg.setTimeStamp(0.999135453254);
    msg.setSource(54027U);
    msg.setSourceEntity(130U);
    msg.setDestination(28042U);
    msg.setDestinationEntity(153U);
    msg.value = 0.597601053176;

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
    msg.setTimeStamp(0.678234230188);
    msg.setSource(2097U);
    msg.setSourceEntity(56U);
    msg.setDestination(16436U);
    msg.setDestinationEntity(154U);
    msg.value = 0.55255957887;

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
    msg.setTimeStamp(0.792277215224);
    msg.setSource(10107U);
    msg.setSourceEntity(37U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(69U);
    msg.value = 0.410001792592;

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
    msg.setTimeStamp(0.940748181219);
    msg.setSource(52017U);
    msg.setSourceEntity(4U);
    msg.setDestination(47115U);
    msg.setDestinationEntity(250U);
    msg.value = 0.421652921632;

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
    msg.setTimeStamp(0.661521921235);
    msg.setSource(63078U);
    msg.setSourceEntity(73U);
    msg.setDestination(27449U);
    msg.setDestinationEntity(37U);
    msg.value = 0.563191544237;

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
    msg.setTimeStamp(0.39849651209);
    msg.setSource(45267U);
    msg.setSourceEntity(199U);
    msg.setDestination(13890U);
    msg.setDestinationEntity(8U);
    msg.value = 0.685906530585;

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
    msg.setTimeStamp(0.00235426186675);
    msg.setSource(39968U);
    msg.setSourceEntity(5U);
    msg.setDestination(21392U);
    msg.setDestinationEntity(108U);
    msg.value = 0.81752300666;

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
    msg.setTimeStamp(0.304633130685);
    msg.setSource(13539U);
    msg.setSourceEntity(53U);
    msg.setDestination(21794U);
    msg.setDestinationEntity(22U);
    msg.value = 0.603289303135;

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
    msg.setTimeStamp(0.905768073739);
    msg.setSource(34600U);
    msg.setSourceEntity(144U);
    msg.setDestination(44361U);
    msg.setDestinationEntity(146U);
    msg.value = 0.0169825858348;

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
    msg.setTimeStamp(0.28889104443);
    msg.setSource(298U);
    msg.setSourceEntity(196U);
    msg.setDestination(27861U);
    msg.setDestinationEntity(96U);
    msg.direction = 0.00310531958424;
    msg.speed = 0.586525314954;
    msg.turbulence = 0.452198026174;

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
    msg.setTimeStamp(0.725019955505);
    msg.setSource(16400U);
    msg.setSourceEntity(145U);
    msg.setDestination(24949U);
    msg.setDestinationEntity(211U);
    msg.direction = 0.010780086694;
    msg.speed = 0.048414256381;
    msg.turbulence = 0.228801343485;

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
    msg.setTimeStamp(0.174576191038);
    msg.setSource(29860U);
    msg.setSourceEntity(208U);
    msg.setDestination(44603U);
    msg.setDestinationEntity(187U);
    msg.direction = 0.186471967257;
    msg.speed = 0.19172816326;
    msg.turbulence = 0.0953053923299;

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
    msg.setTimeStamp(0.972872540729);
    msg.setSource(55059U);
    msg.setSourceEntity(178U);
    msg.setDestination(41216U);
    msg.setDestinationEntity(179U);
    msg.value = 0.437042502979;

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
    msg.setTimeStamp(0.0382196119988);
    msg.setSource(36764U);
    msg.setSourceEntity(11U);
    msg.setDestination(23372U);
    msg.setDestinationEntity(69U);
    msg.value = 0.0260360395153;

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
    msg.setTimeStamp(0.759889633447);
    msg.setSource(50185U);
    msg.setSourceEntity(204U);
    msg.setDestination(27420U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0296483807402;

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
    msg.setTimeStamp(0.66526854396);
    msg.setSource(5330U);
    msg.setSourceEntity(226U);
    msg.setDestination(31830U);
    msg.setDestinationEntity(253U);
    msg.value.assign("EJNZXFAIOTZUHTROQQTGEJBRZWCIDYOMMXYSNKJBSPBCRPDRNANHSVWTSFPUKPCBNHDDIWDLUKGZFUAFCRMAVCKHJKKHM");

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
    msg.setTimeStamp(0.88378208323);
    msg.setSource(42234U);
    msg.setSourceEntity(139U);
    msg.setDestination(6092U);
    msg.setDestinationEntity(71U);
    msg.value.assign("SESTCKVJMXVKUOTYRYLQKSIKBLJFSTDUSHAIVDXXSXMEXOOPKRBZXQLCKYDLCQXHBDPWFKWJAPNNOZUVRPHVWZEHVKCPQCNRNEMNATASDNWSPOYGZUDFQABPLWLICKBJBUGFTRJFJDCZBF");

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
    msg.setTimeStamp(0.0217522384474);
    msg.setSource(28908U);
    msg.setSourceEntity(194U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(54U);
    msg.value.assign("TBYNYOLDIXLKRYQITKCLEIFHEKUYPU");

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
    msg.setTimeStamp(0.229587295418);
    msg.setSource(63496U);
    msg.setSourceEntity(77U);
    msg.setDestination(27910U);
    msg.setDestinationEntity(217U);
    const char tmp_msg_0[] = {-5, -105, 100, 87, 17, -80, -41, -19, -47, 101, -92, 93, 68, 59, 81, -26, 103, 58, -31, -128, -31, -53, 71, -64};
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
    msg.setTimeStamp(0.984981398055);
    msg.setSource(31426U);
    msg.setSourceEntity(245U);
    msg.setDestination(43292U);
    msg.setDestinationEntity(187U);
    const char tmp_msg_0[] = {-8, -58, 111, 58, -81, -57, 123, -125, -112, -107, -119, -60, -73, 91, 88, -125, 79, 90, 5, -8, -52, -51, -123, 125, 57, 108, 105, 87, -68, 29, -15, 109, 20, -73, -52, 23, 73, 111, -91, -37, 75, -67, 7, -107, 102, 15, 93, -73, 96, -1, -80, 116, -74, -65, -100, 117, 53, 123, -9, 63, -4, 116, -113, 5, 10, 52, 21, 22, 122, -7, 125, -107, -68, -109, 68, 94, -45, 53, 7, 82, -69, 113, 95, -89, 29, 102, 125, -94, 51, -45, -112, 2, 8, -66, -43, -68, -110, 44, 99, -97, -75, -72, 42, 73, -115, -81, 53, -99, -37, 46, -59, 28, 33, -50, -51, 68, -40, 80, -126, -101, -40, 121, 71, -81, -104, 115, 70, -22, -10, 58, 118, 86, 54, 93, -52, -53, -102, -84, -107, -113, -9, -3, 90, 64, 95, 121, -9, 85, -111, -2, -127, -21, -62, -77, 12, -105, 91, -118, 68, -1, -128, -38, 48, -73, -62, 16, 34, 86, -81, -115, 31, -106, -128, -113, -55, -116, -5, 88, 15, -15, -93, 63, 44, 102, -39, 85, 64, -114, 61, -25, -41, -106, 54, -108, 112, -25, 42, -34, 119, 15, 49, -6, -105, -116, 32, -81, 91, -126, -113, 89, -84, 39, 89, 40, -32, 109, -83, 91, -62, -55, 107, -128, -112, -36, 106, -103, 52, -59, 101, -63, 45, 120, -88, -58, -125, 0, 114, -52, 17, 16, -25, -113, 57, -123, 17, 57};
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
    msg.setTimeStamp(0.582252436491);
    msg.setSource(54959U);
    msg.setSourceEntity(251U);
    msg.setDestination(55609U);
    msg.setDestinationEntity(222U);
    const char tmp_msg_0[] = {-109, 111, 80, -47, -25, -59, 15, 85, -8, 109, 106, -19, 77, -117, 27, 39, -41, 119, -7, -127, 112, -100, -101, 107, -45, 9, -121, -127, 24, -81, -127, 91, -38, -116};
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
    msg.setTimeStamp(0.716066371299);
    msg.setSource(25607U);
    msg.setSourceEntity(179U);
    msg.setDestination(50183U);
    msg.setDestinationEntity(98U);
    msg.frequency = 4104565412U;
    msg.min_range = 4867U;
    msg.max_range = 15142U;

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
    msg.setTimeStamp(0.091776727068);
    msg.setSource(52492U);
    msg.setSourceEntity(14U);
    msg.setDestination(4652U);
    msg.setDestinationEntity(106U);
    msg.frequency = 432584627U;
    msg.min_range = 21396U;
    msg.max_range = 64589U;

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
    msg.setTimeStamp(0.114001101286);
    msg.setSource(51385U);
    msg.setSourceEntity(123U);
    msg.setDestination(29363U);
    msg.setDestinationEntity(52U);
    msg.frequency = 2774315512U;
    msg.min_range = 26031U;
    msg.max_range = 30356U;

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
    msg.setTimeStamp(0.617608053144);
    msg.setSource(38045U);
    msg.setSourceEntity(165U);
    msg.setDestination(22980U);
    msg.setDestinationEntity(161U);
    msg.type = 204U;
    msg.frequency = 889165356U;
    msg.min_range = 59501U;
    msg.max_range = 19763U;
    msg.bits_per_point = 29U;
    msg.scale_factor = 0.51592839678;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.590392946451;
    tmp_msg_0.beam_height = 0.858473147674;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-10, 120, 15, 43, -31, 81, 41, -45, 72, 31, 108, 28, 66};
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
    msg.setTimeStamp(0.0462822201489);
    msg.setSource(9241U);
    msg.setSourceEntity(131U);
    msg.setDestination(25694U);
    msg.setDestinationEntity(51U);
    msg.type = 34U;
    msg.frequency = 2197561703U;
    msg.min_range = 50640U;
    msg.max_range = 8946U;
    msg.bits_per_point = 16U;
    msg.scale_factor = 0.746040703952;
    const char tmp_msg_0[] = {-62, -39, 122, -128, -118, -120, -93, -26, -50, 49, 66, -59, 97, -12, -100, -121, 114, 16, -81, 6, 125, 60, 84, -1, -97, 87, 52, -6, 45, -24, -82, -17, 31, 103, 36, -28, 30, 59, -95, 67, 97, 17, -112, 71, -43, -51, -6, 85, 123, -73, -116, -14, -124, 64, 24, 120, 94, 37, 72, 90, 28, -37, 1, 107, 98, -23, 0, 25, 35, 11, 43, -55, -56, -108, -58, -17, -81, 69, 108, -58, -49, -84, 55, 2, 114, -35, -33, -41, -16, -2, 29, 99, 113, 72, 66, 102, 19, 52, 8, -128, -50, -68, -13, 103, -89, -117, 56, -59, 11, -22, 9, -122, 113, 81, -125, 47, 95, -56, -18, -81, -30, 126, -69, -73, 123, -19, 94, 30, -100, -13, -110, 76, 64, -105, 51, 120, 24, 39, 28, 90, -95, -20, 105, -102, -80, -1, 25, 91, -84, -26, -88, 49, 76, 83, 57, -43, -84, 26, 5, 16, 64, 123, 90, -45, -65, 63, 68, 80, -70, 101, -65, -116, 7, 9, 109};
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
    msg.setTimeStamp(0.111650970136);
    msg.setSource(5462U);
    msg.setSourceEntity(81U);
    msg.setDestination(6227U);
    msg.setDestinationEntity(161U);
    msg.type = 165U;
    msg.frequency = 4075199664U;
    msg.min_range = 28444U;
    msg.max_range = 11587U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.61655388536;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.648272280631;
    tmp_msg_0.beam_height = 0.437090442575;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-109, -117, 22, -90, 103, -11, -105, 108, -106, -101, -36, 62, -106, 76, -110, 68, 52, 119, -124, 105, -128, -88, -74, -28, 10, 43, -112, 38, -62, -108, 123, 118, -23, -84, -83, -30, -56, 2, 17, -55, 112, -93, 44, -125, -41, 38, -57, 5, 118, -2, 34, -67, 123, 124, 55, -65, -53, -31, 26, -122, -50, -2, 81, 52, 1, 66, 123, 105, -16, -95, 33, 78, 105, 66, -5, -119, 67, -29, 60, 7, 46, 30, 32, 97, 120, 0, 19, -54, 69, 85, 95, 48, 10, 63, -39, 97, 66, 95, 66, 96, -64, -6, 10, 5, -112, 0, 21, 107, -121, 96, -85, -15, -12, -74, -42, -78, 63, -88, 5, -64, 74, 56, -76, -69, -17, -110, -118, -115, -40, -127, -81, 86, 82, 97, 112, -49, 65, 113, -40, -52, 34};
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
    msg.setTimeStamp(0.810878132648);
    msg.setSource(4912U);
    msg.setSourceEntity(4U);
    msg.setDestination(54555U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.353133859571);
    msg.setSource(64407U);
    msg.setSourceEntity(153U);
    msg.setDestination(33920U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.73606339378);
    msg.setSource(13916U);
    msg.setSourceEntity(240U);
    msg.setDestination(63771U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.344045051535);
    msg.setSource(2480U);
    msg.setSourceEntity(170U);
    msg.setDestination(28086U);
    msg.setDestinationEntity(185U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.713275040954);
    msg.setSource(2598U);
    msg.setSourceEntity(4U);
    msg.setDestination(29822U);
    msg.setDestinationEntity(72U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.0300925888725);
    msg.setSource(24280U);
    msg.setSourceEntity(200U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(202U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.048009497209);
    msg.setSource(42426U);
    msg.setSourceEntity(44U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(162U);
    msg.value = 0.0761325787722;
    msg.confidence = 0.104616838067;
    msg.opmodes.assign("LSMVTKXLCJXUEVENDQSVUHNNGJHIJWSPSJOWERTZIBGTPVMIKHHXOTRXALXTHODPMCRUSBXVQFBMSGYACEFAKVYYAUGSKJHUIGGDMYKKVEFCIZYAWDBJROAOZGGSQNFYZKFBECUHAOFFNMDYJJFZYNNEZPTTXOWGWPQDLTAKBIKXWBWUWLZUWVZCKDMNRCDPJONSFBPYSHNHECRTIERBAOQHCVLPIIPM");

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
    msg.setTimeStamp(0.777401097836);
    msg.setSource(65138U);
    msg.setSourceEntity(26U);
    msg.setDestination(11753U);
    msg.setDestinationEntity(50U);
    msg.value = 0.710665689413;
    msg.confidence = 0.791523830627;
    msg.opmodes.assign("XHTKVCEBYMIBCPJFOWAXPUDKBLVZALGYXQJOEWLMKQTNOOOHMWSUPIMKPR");

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
    msg.setTimeStamp(0.924194311903);
    msg.setSource(25767U);
    msg.setSourceEntity(224U);
    msg.setDestination(3926U);
    msg.setDestinationEntity(106U);
    msg.value = 0.460527879559;
    msg.confidence = 0.843776762336;
    msg.opmodes.assign("DOIBUAQAUSDUJXCVNYGTLTXQPXFILFGESSMFOCWJBVQHMYALDPPWWPGTQGOQDRLJVLTBIMHGEUVMWTLKRVKOABJCYPROZBBNNCPJOHMGZHZQYNJXKYOVNVNIFQIZRKZUEELHXPFSEKUSZJACENCYCIWOCDSKZMSMKLPTVWFRDLAFEVZTEMFIWYKQCYXNGXBRDVHMXIPRHZH");

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
    msg.setTimeStamp(0.78506821307);
    msg.setSource(15251U);
    msg.setSourceEntity(110U);
    msg.setDestination(36573U);
    msg.setDestinationEntity(59U);
    msg.itow = 3810681532U;
    msg.lat = 0.805195943589;
    msg.lon = 0.769866602543;
    msg.height_ell = 0.63346718194;
    msg.height_sea = 0.434605792983;
    msg.hacc = 0.617126552407;
    msg.vacc = 0.123033736091;
    msg.vel_n = 0.638184950724;
    msg.vel_e = 0.740865794299;
    msg.vel_d = 0.826475064407;
    msg.speed = 0.0450440610091;
    msg.gspeed = 0.301219620486;
    msg.heading = 0.663627674645;
    msg.sacc = 0.841060201469;
    msg.cacc = 0.926199393516;

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
    msg.setTimeStamp(0.673279941754);
    msg.setSource(52469U);
    msg.setSourceEntity(81U);
    msg.setDestination(8156U);
    msg.setDestinationEntity(210U);
    msg.itow = 224712U;
    msg.lat = 0.505638176914;
    msg.lon = 0.387433645481;
    msg.height_ell = 0.609402745751;
    msg.height_sea = 0.653744639453;
    msg.hacc = 0.641343838323;
    msg.vacc = 0.283556496532;
    msg.vel_n = 0.335932842882;
    msg.vel_e = 0.512498592621;
    msg.vel_d = 0.475107433954;
    msg.speed = 0.947463192541;
    msg.gspeed = 0.902972303586;
    msg.heading = 0.398291148769;
    msg.sacc = 0.153875822302;
    msg.cacc = 0.940192550178;

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
    msg.setTimeStamp(0.343763705506);
    msg.setSource(17064U);
    msg.setSourceEntity(99U);
    msg.setDestination(10652U);
    msg.setDestinationEntity(145U);
    msg.itow = 2145004858U;
    msg.lat = 0.194874004648;
    msg.lon = 0.0746618093324;
    msg.height_ell = 0.797838719924;
    msg.height_sea = 0.21434854093;
    msg.hacc = 0.249822514504;
    msg.vacc = 0.581076702138;
    msg.vel_n = 0.188320686813;
    msg.vel_e = 0.796600628785;
    msg.vel_d = 0.195939619674;
    msg.speed = 0.408067221923;
    msg.gspeed = 0.065980193539;
    msg.heading = 0.828607680745;
    msg.sacc = 0.0258560448991;
    msg.cacc = 0.719575436967;

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
    msg.setTimeStamp(0.154310533703);
    msg.setSource(24193U);
    msg.setSourceEntity(209U);
    msg.setDestination(4415U);
    msg.setDestinationEntity(236U);
    msg.id = 176U;
    msg.value = 0.345802770686;

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
    msg.setTimeStamp(0.079837821279);
    msg.setSource(31430U);
    msg.setSourceEntity(71U);
    msg.setDestination(56108U);
    msg.setDestinationEntity(215U);
    msg.id = 145U;
    msg.value = 0.523422840542;

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
    msg.setTimeStamp(0.435670408373);
    msg.setSource(21114U);
    msg.setSourceEntity(148U);
    msg.setDestination(20690U);
    msg.setDestinationEntity(52U);
    msg.id = 33U;
    msg.value = 0.0932023603088;

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
    msg.setTimeStamp(0.563310750023);
    msg.setSource(55305U);
    msg.setSourceEntity(6U);
    msg.setDestination(4824U);
    msg.setDestinationEntity(244U);
    msg.x = 0.0527155658248;
    msg.y = 0.912944297348;
    msg.z = 0.998514880824;
    msg.phi = 0.992036667358;
    msg.theta = 0.0714691642926;
    msg.psi = 0.228085440436;

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
    msg.setTimeStamp(0.305086900877);
    msg.setSource(10173U);
    msg.setSourceEntity(80U);
    msg.setDestination(6213U);
    msg.setDestinationEntity(28U);
    msg.x = 0.284162901391;
    msg.y = 0.55452626663;
    msg.z = 0.218195841864;
    msg.phi = 0.560724579257;
    msg.theta = 0.811798080082;
    msg.psi = 0.36218039877;

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
    msg.setTimeStamp(0.0906411266415);
    msg.setSource(8978U);
    msg.setSourceEntity(26U);
    msg.setDestination(32024U);
    msg.setDestinationEntity(40U);
    msg.x = 0.620463037446;
    msg.y = 0.252123252443;
    msg.z = 0.788784321761;
    msg.phi = 0.646573109661;
    msg.theta = 0.158196161907;
    msg.psi = 0.978686818235;

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
    msg.setTimeStamp(0.724868887396);
    msg.setSource(15722U);
    msg.setSourceEntity(194U);
    msg.setDestination(49653U);
    msg.setDestinationEntity(77U);
    msg.beam_width = 0.848014132038;
    msg.beam_height = 0.333614274363;

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
    msg.setTimeStamp(0.580357161703);
    msg.setSource(14007U);
    msg.setSourceEntity(159U);
    msg.setDestination(28189U);
    msg.setDestinationEntity(55U);
    msg.beam_width = 0.955594812355;
    msg.beam_height = 0.946264620063;

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
    msg.setTimeStamp(0.684395323374);
    msg.setSource(47114U);
    msg.setSourceEntity(97U);
    msg.setDestination(46976U);
    msg.setDestinationEntity(219U);
    msg.beam_width = 0.50624390824;
    msg.beam_height = 0.976397967667;

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
    msg.setTimeStamp(0.207318633098);
    msg.setSource(53102U);
    msg.setSourceEntity(224U);
    msg.setDestination(909U);
    msg.setDestinationEntity(152U);
    msg.sane = 189U;

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
    msg.setTimeStamp(0.88550314775);
    msg.setSource(60266U);
    msg.setSourceEntity(66U);
    msg.setDestination(33575U);
    msg.setDestinationEntity(27U);
    msg.sane = 170U;

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
    msg.setTimeStamp(0.802940865228);
    msg.setSource(26304U);
    msg.setSourceEntity(89U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(7U);
    msg.sane = 37U;

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
    msg.setTimeStamp(0.952326756501);
    msg.setSource(62535U);
    msg.setSourceEntity(209U);
    msg.setDestination(19344U);
    msg.setDestinationEntity(186U);
    msg.id = 184U;
    msg.zoom = 165U;
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
    msg.setTimeStamp(0.0304606759672);
    msg.setSource(26521U);
    msg.setSourceEntity(80U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(163U);
    msg.id = 168U;
    msg.zoom = 132U;
    msg.action = 220U;

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
    msg.setTimeStamp(0.881117962181);
    msg.setSource(50149U);
    msg.setSourceEntity(94U);
    msg.setDestination(1910U);
    msg.setDestinationEntity(91U);
    msg.id = 95U;
    msg.zoom = 115U;
    msg.action = 68U;

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
    msg.setTimeStamp(0.0994447733002);
    msg.setSource(32744U);
    msg.setSourceEntity(80U);
    msg.setDestination(56153U);
    msg.setDestinationEntity(34U);
    msg.id = 153U;
    msg.value = 0.48460105682;

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
    msg.setTimeStamp(0.537855301877);
    msg.setSource(37616U);
    msg.setSourceEntity(13U);
    msg.setDestination(58192U);
    msg.setDestinationEntity(134U);
    msg.id = 41U;
    msg.value = 0.120841265855;

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
    msg.setTimeStamp(0.943301806772);
    msg.setSource(65332U);
    msg.setSourceEntity(110U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(163U);
    msg.id = 217U;
    msg.value = 0.163704825768;

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
    msg.setTimeStamp(0.883558004392);
    msg.setSource(29461U);
    msg.setSourceEntity(73U);
    msg.setDestination(26466U);
    msg.setDestinationEntity(40U);
    msg.id = 150U;
    msg.value = 0.357744885936;

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
    msg.setTimeStamp(0.957767575935);
    msg.setSource(65491U);
    msg.setSourceEntity(9U);
    msg.setDestination(43516U);
    msg.setDestinationEntity(230U);
    msg.id = 163U;
    msg.value = 0.743405078;

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
    msg.setTimeStamp(0.833059461297);
    msg.setSource(4170U);
    msg.setSourceEntity(3U);
    msg.setDestination(970U);
    msg.setDestinationEntity(131U);
    msg.id = 91U;
    msg.value = 0.771698507398;

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
    msg.setTimeStamp(0.243766176358);
    msg.setSource(38454U);
    msg.setSourceEntity(88U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(44U);
    msg.id = 247U;
    msg.angle = 0.904832951209;

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
    msg.setTimeStamp(0.479279019214);
    msg.setSource(56317U);
    msg.setSourceEntity(188U);
    msg.setDestination(37157U);
    msg.setDestinationEntity(36U);
    msg.id = 226U;
    msg.angle = 0.908566997056;

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
    msg.setTimeStamp(0.661357561447);
    msg.setSource(5420U);
    msg.setSourceEntity(56U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(83U);
    msg.id = 239U;
    msg.angle = 0.500563196325;

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
    msg.setTimeStamp(0.762052657094);
    msg.setSource(13827U);
    msg.setSourceEntity(26U);
    msg.setDestination(36790U);
    msg.setDestinationEntity(199U);
    msg.op = 232U;
    msg.actions.assign("NXWNUVSLUTESPHVCFUQXPMZLWBCMISXGNWPLOTDPOVZFGBIWSKIEUWKHFHEJVEXXQTOKBNXJRBRCYNFXKQIOLWWAQKDBNJLIQOVXGTBSYZDWZDXYOLQYCFJRMPJZTUTZYRULYGCGSAYDPFASZLHALAUERNQFZAHNUZBSKQIEJPTMCVDDCOVWYGTVSGAOCGGAAUPHHSBWE");

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
    msg.setTimeStamp(0.291339477015);
    msg.setSource(13115U);
    msg.setSourceEntity(210U);
    msg.setDestination(45383U);
    msg.setDestinationEntity(189U);
    msg.op = 182U;
    msg.actions.assign("ONXGZOBSGQMNAIBKLGLDMHXHIRIWFSFQATAZQGQPKOEENYLRHBVPCMTUJKROXCLTBQSHSXQNYZKBVTBKRWPIYJIXYFLNYUQATFBENDHVDJFBAZZCVVJQAKEZSMRNTKCOKYZOECXNLRIGZSMMANFGIESHMSXPGSWCDGERUVHEGCLJWXJCHRYUMDRGPJJBPUPPOUDUOQFKRJLTIXPFHKWLEMYIFVUACDTJONCYWWSVUAZUDLDFWDMTYEOTIAXW");

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
    msg.setTimeStamp(0.401522195657);
    msg.setSource(46904U);
    msg.setSourceEntity(181U);
    msg.setDestination(58173U);
    msg.setDestinationEntity(160U);
    msg.op = 212U;
    msg.actions.assign("SXILBVSVXVNCHFVCGXFUQRYKQJUMYEAYPPYWBTMRGKQLIKNEETXCVONFWIPNJZYHBTATWV");

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
    msg.setTimeStamp(0.347127875233);
    msg.setSource(23689U);
    msg.setSourceEntity(174U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(168U);
    msg.actions.assign("KEOHUDUPTUXKBIPCGXIBDBEGCFMQHJEQZOJJYECPMJILUMILWBPHECXVFVKJZKYWRFRWCSYLVXQGUYGREXLORBTWGGFYTETDNQXQATTVJZSFHHIPXYXSLOFUZSLUBPMMRAOZSIGMHZKOKCVVBKAXFJGQDAVMYRCTNZRUQNQDNHNZDAQLBOSAMPXUJILDTZHZLWTDYGJIWHBEWASAFFAOYTDMKRQKUWRVMGECVCNYCBFSPJI");

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
    msg.setTimeStamp(0.68599681525);
    msg.setSource(42496U);
    msg.setSourceEntity(210U);
    msg.setDestination(17174U);
    msg.setDestinationEntity(246U);
    msg.actions.assign("UPZAMZDNSYPETXVJLYMLTRDJCYKYXNVWAGDSIIRXMKBLHPUYWIDCTCQNQILUFOXSSGEQJCBSNRJAUOEAFEEWTTKGMDAKRGMQZVODXLVVWZOBNIOAQFOZWHPUFBBURVDZAYKBQROKDXCHCCYXCJPVJSLDORFWFPHYSKUCXHZPPHSAJWYNZGMTFQIQST");

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
    msg.setTimeStamp(0.868863112604);
    msg.setSource(60270U);
    msg.setSourceEntity(86U);
    msg.setDestination(9946U);
    msg.setDestinationEntity(140U);
    msg.actions.assign("UEABJNRAGRWRRAJAPWTYEZIBPLEFBHKGLTVVVOYUKVGQJVAPQGNACBJQVKDCGUDERYJFKMCTICZZHKEICLNYWIFNTGQAITHOUDGFMNXBZAXSPWVNOGDDYLXAHRTUJDVUMTFRYVXMYFPFHSSSEJWGMCGKMKEXISKRHWNMSXFQJPUODNTBLZOZLLRHECKFVQYXRUBXXLOTBOSIHYCJWTUCPPQYZJBWSSLDHIWQIZQOI");

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
    msg.setTimeStamp(0.989378359446);
    msg.setSource(57632U);
    msg.setSourceEntity(245U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(203U);
    msg.button = 31U;
    msg.value = 180U;

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
    msg.setTimeStamp(0.0555635211124);
    msg.setSource(19727U);
    msg.setSourceEntity(205U);
    msg.setDestination(14281U);
    msg.setDestinationEntity(251U);
    msg.button = 127U;
    msg.value = 107U;

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
    msg.setTimeStamp(0.217737204909);
    msg.setSource(13754U);
    msg.setSourceEntity(127U);
    msg.setDestination(12543U);
    msg.setDestinationEntity(155U);
    msg.button = 146U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.506100124121);
    msg.setSource(40552U);
    msg.setSourceEntity(146U);
    msg.setDestination(16466U);
    msg.setDestinationEntity(150U);
    msg.op = 25U;
    msg.text.assign("XHFSJTRLWFYGZQMOHTXMXPTXZZZWMMSGGCHMTRRISCIDOFWIIISKRIKAVMKJJAJIUNEVBVYNHPLULFXFTXWNHBGUHNWOUYFAZNXPWBUKBKUVOEHWVEYGWYAYCCIXJKDOGSVEGNBFQAJLSASTQPUQVKUIETRKZJLXMMRSHRMEQZSDPFQBDBDAETYFJPNNULCBPPONDFBGRLPGHKUAARLEVYRCJMSQZPJQCWCQEVXNQD");

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
    msg.setTimeStamp(0.182656621142);
    msg.setSource(52097U);
    msg.setSourceEntity(119U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(54U);
    msg.op = 153U;
    msg.text.assign("XWGHJWSPCXEDXDQOMAFGFWLJPWRDLRSLUAKKKPZHNVQDLINGSUSMBAISFMBLHQXLGGLZYEFLGBGKKMAZVCYZNZDPZYUAJIBCZAEVTYHBYTMGEHCSDEOOQTNCTXXURPBMJIJYUIQMKVUSNZEBLYNLMKRMCQTZQIBXYFRWWCG");

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
    msg.setTimeStamp(0.480336558539);
    msg.setSource(34575U);
    msg.setSourceEntity(98U);
    msg.setDestination(30424U);
    msg.setDestinationEntity(32U);
    msg.op = 135U;
    msg.text.assign("PADVOLPKXEOWDOFIYZDURIXTIBQEPQQGZJNCMHNAESQAPUPLJBQQBWBOKLLGEA");

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
    msg.setTimeStamp(0.0663156586112);
    msg.setSource(12583U);
    msg.setSourceEntity(1U);
    msg.setDestination(33759U);
    msg.setDestinationEntity(159U);
    msg.op = 85U;
    msg.time_remain = 0.61796219891;
    msg.sched_time = 0.406785755506;

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
    msg.setTimeStamp(0.853108285004);
    msg.setSource(43301U);
    msg.setSourceEntity(195U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(151U);
    msg.op = 5U;
    msg.time_remain = 0.500879656096;
    msg.sched_time = 0.227091128559;

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
    msg.setTimeStamp(0.410875002805);
    msg.setSource(12456U);
    msg.setSourceEntity(180U);
    msg.setDestination(22810U);
    msg.setDestinationEntity(147U);
    msg.op = 223U;
    msg.time_remain = 0.430253552473;
    msg.sched_time = 0.252500946414;

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
    msg.setTimeStamp(0.361574761979);
    msg.setSource(50967U);
    msg.setSourceEntity(212U);
    msg.setDestination(29647U);
    msg.setDestinationEntity(194U);
    msg.name.assign("FKCZIORWCTFYZYSBMJWYMORACPJSBVKUFZMJEVETXZOVHLNITJOGQNGNHIIHNBEKZQQNNMGDABEUSSCHMKGIVSRQASBHLSEPOIVUGYQCBUXEGETRKQONSJKRDTKBFMFJWFLUSVWTAUIPNOGIALAMIWNROQJMXUOBXCWTHNGYDAYJHLTFACXWKMCQPTDDVHVZKDYRDYUMESXDBEWXQDCZELZULRFXPCOPDLTYGBYHFPKJWH");
    msg.op = 117U;
    msg.sched_time = 0.527016309306;

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
    msg.setTimeStamp(0.134002900279);
    msg.setSource(36688U);
    msg.setSourceEntity(117U);
    msg.setDestination(44276U);
    msg.setDestinationEntity(95U);
    msg.name.assign("YZWENCBKKZMPHXDYAZQOYGSYFPYGYSXDFEMOIUIRUQZKRBDVQSUOIPCUZONWFELAICPJHZREMYLSTKAUPUJTNPAJFJMSGWCNDDCHVWUVXRIQGPDXJUFFWO");
    msg.op = 127U;
    msg.sched_time = 0.742911663745;

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
    msg.setTimeStamp(0.293162344254);
    msg.setSource(41246U);
    msg.setSourceEntity(194U);
    msg.setDestination(47251U);
    msg.setDestinationEntity(153U);
    msg.name.assign("UXVJOGOVSDUKMOJMRDQFWVWHSJN");
    msg.op = 37U;
    msg.sched_time = 0.0450374264613;

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
    msg.setTimeStamp(0.472122698008);
    msg.setSource(25687U);
    msg.setSourceEntity(55U);
    msg.setDestination(54213U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.653014933662);
    msg.setSource(18937U);
    msg.setSourceEntity(210U);
    msg.setDestination(57800U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.581397150363);
    msg.setSource(64453U);
    msg.setSourceEntity(53U);
    msg.setDestination(16979U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.802851834273);
    msg.setSource(45411U);
    msg.setSourceEntity(124U);
    msg.setDestination(38220U);
    msg.setDestinationEntity(24U);
    msg.name.assign("UXISACJXJRFUWOAUWISXCGGQXIDWTCNBTGIAOFXYWBOLBFVBAZYZRTLENCPFJYJKWSLESYDYHIRNHSTJOGPZBCKMRKAVIGQBYZEPTZJFAVOJJECQPXPEZYGAUKJLFCKVMUOCBLOZFQWZUGHUDXRGELAIGEVNMMCDQTHNWVBQKDAHXCVLSFYWRANSPDBSMRUKYFDWRNMDMKQREIULQPZRPPTIKWMYGMDNP");
    msg.state = 84U;

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
    msg.setTimeStamp(0.512952741257);
    msg.setSource(31545U);
    msg.setSourceEntity(62U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(135U);
    msg.name.assign("PRJIZJMIESGMUJYFSROZTYQOIDYRKRUTPXSKWXEPBJDNGRWFDHIFCWGSZWTKMUHQWMLTVNTBUIHOYHPWACDXJCWTZMJINDSNCQYXDFZRECSDJOLRLVSXMKYHSIUYILCAJGMWHQYZNFBHDOLTEAFNDNDGOTCVJKPVTPEUAIWFWRHLLQQPOGIYELVBKMCHZGXNAKKSGUPURAXOYBHEUUQVLXAFVGZMQ");
    msg.state = 97U;

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
    msg.setTimeStamp(0.239850521472);
    msg.setSource(44856U);
    msg.setSourceEntity(124U);
    msg.setDestination(59196U);
    msg.setDestinationEntity(226U);
    msg.name.assign("ZUILNSQFTV");
    msg.state = 226U;

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
    msg.setTimeStamp(0.246831198146);
    msg.setSource(33088U);
    msg.setSourceEntity(136U);
    msg.setDestination(324U);
    msg.setDestinationEntity(145U);
    msg.name.assign("ZWNRIMGSQZNSALKQUSRKCWQMCRJGYYEAHUJGGX");
    msg.value = 63U;

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
    msg.setTimeStamp(0.840729179955);
    msg.setSource(39018U);
    msg.setSourceEntity(138U);
    msg.setDestination(37857U);
    msg.setDestinationEntity(74U);
    msg.name.assign("MQMFOWEIZNOGFGIGOVMTNLOMXZHULLAERCWMDIUMSJRJNSKOYPKIRHAZRFFQRPAPWFZBJYOYYEANKRWVZDEAVBAJVOHCTVSLGGGVXSUYDEHEWKCY");
    msg.value = 153U;

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
    msg.setTimeStamp(0.615693023335);
    msg.setSource(24725U);
    msg.setSourceEntity(171U);
    msg.setDestination(21830U);
    msg.setDestinationEntity(121U);
    msg.name.assign("UDEPGTLWMEUHBTUXPKNGCYMDYDA");
    msg.value = 106U;

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
    msg.setTimeStamp(0.345198508829);
    msg.setSource(36530U);
    msg.setSourceEntity(59U);
    msg.setDestination(11514U);
    msg.setDestinationEntity(251U);
    msg.name.assign("FOJYWVJJPBHHBGAKUYPDZWUJGXENAXJBDZLCMLBIUIKJANENELZUCSMVNGTEEWXQUZRCBVRXCVLQHLQWBMPSOIKKUFDYSRXDXQIGOWTIKMNGLOESGYAJUEYDYCQTSPRPDEALACSGTXEQYILDIRORSAQPJIVFDQNYYBCBNOZNZXPVAPPBSHCVHQFGFOZXBOARZAFVHWVXLFMHJKZUSRIJDGMWQRHTOUT");

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
    msg.setTimeStamp(0.594669694353);
    msg.setSource(34531U);
    msg.setSourceEntity(71U);
    msg.setDestination(24276U);
    msg.setDestinationEntity(154U);
    msg.name.assign("NRLAPFLIMRBFQIVPHWFOZHT");

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
    msg.setTimeStamp(0.39929482944);
    msg.setSource(65324U);
    msg.setSourceEntity(193U);
    msg.setDestination(61948U);
    msg.setDestinationEntity(157U);
    msg.name.assign("BQRNOYSVJPMTFKFAAZHINYISPJTBACGG");

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
    msg.setTimeStamp(0.80289928188);
    msg.setSource(47008U);
    msg.setSourceEntity(155U);
    msg.setDestination(27011U);
    msg.setDestinationEntity(79U);
    msg.name.assign("UIUOIOADWLCVDBSBDCVQYUYTAKWHVGFJILSZFKAHQYWRCJZBSUBSPVRUWWCQHMXCZKAHLIDVEMJEWLKYPNGXXIEKYFMWJFPQTNODGLHSGIGKFTEGXOXQDSFBXGOLTKBNTHSJKDBBMIGNLRRTCYMAYOUOFPGHJZRHBEMWUBGEINOOXHYVPKPSRUZRJJAEZJANMRPCCXMZLFCPXEDSNVDSAYEJOUTNQIZNMTZKWVURRQQTLVPHALVDCNWXQTFQIA");
    msg.value = 14U;

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
    msg.setTimeStamp(0.304897568768);
    msg.setSource(21226U);
    msg.setSourceEntity(198U);
    msg.setDestination(29547U);
    msg.setDestinationEntity(48U);
    msg.name.assign("FWENTJHSAQZVOGDHSINCTBBFCOADDOBBGHQHBUNVLTPKELZSJXSVSVZDJPBJHXZVZCPHVKXGPUTIGPLEYRMYRWYZJFWFLCFHUFJNGPUSOQEIOLNVQEIUDYNLIFOVQUMTBXXSAWBPNSWOOWMWBAEXTARHRGYRWOVQKPJIZLXJCSEUCKKAGTKLGNTYLORDDCJMMCDQEXKDRENNAQQVIPKFHRWZMGYSAYGYUACDIZFMPHUCXBF");
    msg.value = 75U;

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
    msg.setTimeStamp(0.290851578297);
    msg.setSource(33804U);
    msg.setSourceEntity(121U);
    msg.setDestination(49796U);
    msg.setDestinationEntity(140U);
    msg.name.assign("DMERFKNEOWNNDFDLIAGOERPEUVGSTRLPLVEHHYOSQTSEKEKVMGLWIORISMSJTCRQNPLMUYBDHMFAXNCUTDBFQCNCKAIPPHZNVFJBPXJVUMEICISYFJXYDWZLDVMPTXCPGJLEDZACNJ");
    msg.value = 193U;

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
    msg.setTimeStamp(0.868704074932);
    msg.setSource(47913U);
    msg.setSourceEntity(91U);
    msg.setDestination(47100U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.113396655201;
    msg.lon = 0.103902676054;
    msg.height = 0.200757189206;
    msg.x = 0.993345671842;
    msg.y = 0.963422598502;
    msg.z = 0.569729590208;
    msg.phi = 0.454298642291;
    msg.theta = 0.133252929775;
    msg.psi = 0.528385712659;
    msg.u = 0.149673456129;
    msg.v = 0.98292454004;
    msg.w = 0.687856296125;
    msg.vx = 0.680591838881;
    msg.vy = 0.30984592521;
    msg.vz = 0.609505528961;
    msg.p = 0.247838906422;
    msg.q = 0.188561285184;
    msg.r = 0.813317061808;
    msg.depth = 0.391925896746;
    msg.alt = 0.52347592197;

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
    msg.setTimeStamp(0.66080062301);
    msg.setSource(4457U);
    msg.setSourceEntity(211U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.923076971767;
    msg.lon = 0.86892097289;
    msg.height = 0.280736506336;
    msg.x = 0.272012976529;
    msg.y = 0.388399297938;
    msg.z = 0.282534501134;
    msg.phi = 0.940747196744;
    msg.theta = 0.293304160992;
    msg.psi = 0.171694318863;
    msg.u = 0.892480693774;
    msg.v = 0.527387324312;
    msg.w = 0.6918186475;
    msg.vx = 0.910891859202;
    msg.vy = 0.592731524265;
    msg.vz = 0.11579949933;
    msg.p = 0.927488862246;
    msg.q = 0.411904003604;
    msg.r = 0.3507216995;
    msg.depth = 0.267517443167;
    msg.alt = 0.537816657423;

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
    msg.setTimeStamp(0.33475605304);
    msg.setSource(37521U);
    msg.setSourceEntity(27U);
    msg.setDestination(11013U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.279093384325;
    msg.lon = 0.972332422886;
    msg.height = 0.307379713274;
    msg.x = 0.560826510807;
    msg.y = 0.500768307331;
    msg.z = 0.296897181191;
    msg.phi = 0.344399267778;
    msg.theta = 0.410686522657;
    msg.psi = 0.288606489496;
    msg.u = 0.211562940446;
    msg.v = 0.17672595037;
    msg.w = 0.845835225247;
    msg.vx = 0.421429267332;
    msg.vy = 0.868469455845;
    msg.vz = 0.899601121298;
    msg.p = 0.48256352019;
    msg.q = 0.784983749842;
    msg.r = 0.815920018525;
    msg.depth = 0.332062393684;
    msg.alt = 0.466912135346;

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
    msg.setTimeStamp(0.498715268013);
    msg.setSource(7746U);
    msg.setSourceEntity(218U);
    msg.setDestination(12497U);
    msg.setDestinationEntity(160U);
    msg.x = 0.906356517886;
    msg.y = 0.0557003436261;
    msg.z = 0.93242145772;

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
    msg.setTimeStamp(0.636654310168);
    msg.setSource(15585U);
    msg.setSourceEntity(238U);
    msg.setDestination(49586U);
    msg.setDestinationEntity(188U);
    msg.x = 0.94346565488;
    msg.y = 0.733569705069;
    msg.z = 0.87806866573;

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
    msg.setTimeStamp(0.754887883484);
    msg.setSource(50811U);
    msg.setSourceEntity(86U);
    msg.setDestination(26077U);
    msg.setDestinationEntity(183U);
    msg.x = 0.00546890360451;
    msg.y = 0.322518737806;
    msg.z = 0.32033715028;

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
    msg.setTimeStamp(0.708985316706);
    msg.setSource(27746U);
    msg.setSourceEntity(142U);
    msg.setDestination(22861U);
    msg.setDestinationEntity(161U);
    msg.value = 0.275408721442;

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
    msg.setTimeStamp(0.439033891425);
    msg.setSource(56880U);
    msg.setSourceEntity(71U);
    msg.setDestination(5684U);
    msg.setDestinationEntity(41U);
    msg.value = 0.630402524082;

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
    msg.setTimeStamp(0.704320302684);
    msg.setSource(20370U);
    msg.setSourceEntity(126U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(82U);
    msg.value = 0.66284285945;

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
    msg.setTimeStamp(0.3268542403);
    msg.setSource(7838U);
    msg.setSourceEntity(129U);
    msg.setDestination(55257U);
    msg.setDestinationEntity(218U);
    msg.value = 0.426100571545;

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
    msg.setTimeStamp(0.556882946133);
    msg.setSource(47322U);
    msg.setSourceEntity(82U);
    msg.setDestination(57323U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0615686997749;

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
    msg.setTimeStamp(0.537635355632);
    msg.setSource(24206U);
    msg.setSourceEntity(9U);
    msg.setDestination(49520U);
    msg.setDestinationEntity(73U);
    msg.value = 0.801817058605;

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
    msg.setTimeStamp(0.784465483949);
    msg.setSource(38869U);
    msg.setSourceEntity(134U);
    msg.setDestination(17537U);
    msg.setDestinationEntity(118U);
    msg.x = 0.0980379208545;
    msg.y = 0.316385585417;
    msg.z = 0.886666926283;
    msg.phi = 0.274848771724;
    msg.theta = 0.518440254181;
    msg.psi = 0.890293783504;
    msg.p = 0.222303208248;
    msg.q = 0.655405086036;
    msg.r = 0.117060667167;
    msg.u = 0.631901024459;
    msg.v = 0.525809959089;
    msg.w = 0.433047409283;
    msg.bias_psi = 0.912957257368;
    msg.bias_r = 0.101552427494;

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
    msg.setTimeStamp(0.784874323044);
    msg.setSource(24568U);
    msg.setSourceEntity(202U);
    msg.setDestination(61982U);
    msg.setDestinationEntity(109U);
    msg.x = 0.419421248346;
    msg.y = 0.829918442157;
    msg.z = 0.630522539936;
    msg.phi = 0.0605504108645;
    msg.theta = 0.468339505634;
    msg.psi = 0.804340348032;
    msg.p = 0.747678008563;
    msg.q = 0.235366970248;
    msg.r = 0.638981926775;
    msg.u = 0.912580076162;
    msg.v = 0.877492069572;
    msg.w = 0.679474942418;
    msg.bias_psi = 0.678441688637;
    msg.bias_r = 0.0683696981838;

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
    msg.setTimeStamp(0.548992270875);
    msg.setSource(31385U);
    msg.setSourceEntity(147U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(124U);
    msg.x = 0.722328166301;
    msg.y = 0.783132493424;
    msg.z = 0.882644091506;
    msg.phi = 0.248883984865;
    msg.theta = 0.157710720439;
    msg.psi = 0.58403167467;
    msg.p = 0.685594102745;
    msg.q = 0.989520043825;
    msg.r = 0.561689598838;
    msg.u = 0.499812371131;
    msg.v = 0.362262890955;
    msg.w = 0.33907285601;
    msg.bias_psi = 0.671332005241;
    msg.bias_r = 0.0655952528918;

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
    msg.setTimeStamp(0.984552812236);
    msg.setSource(21716U);
    msg.setSourceEntity(77U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(249U);
    msg.bias_psi = 0.521650396965;
    msg.bias_r = 0.653471479884;
    msg.cog = 0.7619405293;
    msg.cyaw = 0.182175849143;
    msg.lbl_rej_level = 0.114680709112;
    msg.gps_rej_level = 0.29526993418;
    msg.custom_x = 0.381727451474;
    msg.custom_y = 0.644685835644;
    msg.custom_z = 0.211191184925;

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
    msg.setTimeStamp(0.546558347662);
    msg.setSource(16650U);
    msg.setSourceEntity(194U);
    msg.setDestination(48451U);
    msg.setDestinationEntity(99U);
    msg.bias_psi = 0.933688086108;
    msg.bias_r = 0.638257058511;
    msg.cog = 0.386679368933;
    msg.cyaw = 0.316195203431;
    msg.lbl_rej_level = 0.948012450887;
    msg.gps_rej_level = 0.993798069446;
    msg.custom_x = 0.542412686947;
    msg.custom_y = 0.218109017828;
    msg.custom_z = 0.817334085658;

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
    msg.setTimeStamp(0.557852654382);
    msg.setSource(62931U);
    msg.setSourceEntity(217U);
    msg.setDestination(64133U);
    msg.setDestinationEntity(134U);
    msg.bias_psi = 0.537292394524;
    msg.bias_r = 0.826849805509;
    msg.cog = 0.700689455213;
    msg.cyaw = 0.381809298707;
    msg.lbl_rej_level = 0.095780753101;
    msg.gps_rej_level = 0.14986503086;
    msg.custom_x = 0.367488001731;
    msg.custom_y = 0.0112057977764;
    msg.custom_z = 0.820012185241;

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
    msg.setTimeStamp(0.804453576551);
    msg.setSource(48180U);
    msg.setSourceEntity(215U);
    msg.setDestination(65334U);
    msg.setDestinationEntity(58U);
    msg.utc_time = 0.897522124145;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.495023243193);
    msg.setSource(45563U);
    msg.setSourceEntity(143U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(156U);
    msg.utc_time = 0.128832599064;
    msg.reason = 72U;

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
    msg.setTimeStamp(0.373477563995);
    msg.setSource(32676U);
    msg.setSourceEntity(247U);
    msg.setDestination(33759U);
    msg.setDestinationEntity(100U);
    msg.utc_time = 0.231252832504;
    msg.reason = 40U;

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
    msg.setTimeStamp(0.466234619355);
    msg.setSource(35493U);
    msg.setSourceEntity(208U);
    msg.setDestination(21398U);
    msg.setDestinationEntity(195U);
    msg.id = 130U;
    msg.range = 0.870270754006;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.166770661199);
    msg.setSource(7782U);
    msg.setSourceEntity(218U);
    msg.setDestination(58033U);
    msg.setDestinationEntity(1U);
    msg.id = 224U;
    msg.range = 0.943028472749;
    msg.acceptance = 47U;

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
    msg.setTimeStamp(0.510947834718);
    msg.setSource(34151U);
    msg.setSourceEntity(212U);
    msg.setDestination(23824U);
    msg.setDestinationEntity(91U);
    msg.id = 13U;
    msg.range = 0.31971960596;
    msg.acceptance = 105U;

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
    msg.setTimeStamp(0.773298138928);
    msg.setSource(38752U);
    msg.setSourceEntity(32U);
    msg.setDestination(48009U);
    msg.setDestinationEntity(25U);
    msg.type = 229U;
    msg.reason = 50U;
    msg.value = 0.979324348192;
    msg.timestep = 0.49677893469;

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
    msg.setTimeStamp(0.422643172597);
    msg.setSource(38800U);
    msg.setSourceEntity(117U);
    msg.setDestination(37915U);
    msg.setDestinationEntity(172U);
    msg.type = 209U;
    msg.reason = 196U;
    msg.value = 0.358834134531;
    msg.timestep = 0.264901706469;

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
    msg.setTimeStamp(0.879637536593);
    msg.setSource(40317U);
    msg.setSourceEntity(11U);
    msg.setDestination(49702U);
    msg.setDestinationEntity(198U);
    msg.type = 168U;
    msg.reason = 224U;
    msg.value = 0.643208317464;
    msg.timestep = 0.141388809435;

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
    msg.setTimeStamp(0.841718728834);
    msg.setSource(54188U);
    msg.setSourceEntity(169U);
    msg.setDestination(53676U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.274537451346);
    msg.setSource(4059U);
    msg.setSourceEntity(139U);
    msg.setDestination(23368U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.0258059276999);
    msg.setSource(4040U);
    msg.setSourceEntity(179U);
    msg.setDestination(36875U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.0723372956495);
    msg.setSource(6092U);
    msg.setSourceEntity(206U);
    msg.setDestination(60468U);
    msg.setDestinationEntity(103U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HCRNHNLSKJOPQYKYUARQNFHDUQVUJQCY");
    tmp_msg_0.lat = 0.574977290769;
    tmp_msg_0.lon = 0.767085570414;
    tmp_msg_0.depth = 0.455551895218;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 87U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.598448097892;
    msg.y = 0.324118668201;
    msg.var_x = 0.497102856636;
    msg.var_y = 0.905217426872;
    msg.distance = 0.105510985086;

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
    msg.setTimeStamp(0.127615313629);
    msg.setSource(10438U);
    msg.setSourceEntity(247U);
    msg.setDestination(45558U);
    msg.setDestinationEntity(90U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TZQOELKDKVGCJNT");
    tmp_msg_0.lat = 0.361180730792;
    tmp_msg_0.lon = 0.570263137731;
    tmp_msg_0.depth = 0.222780795187;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 6U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.183145096484;
    msg.y = 0.199859438529;
    msg.var_x = 0.481051386862;
    msg.var_y = 0.170692063228;
    msg.distance = 0.46747588078;

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
    msg.setTimeStamp(0.780691222137);
    msg.setSource(40997U);
    msg.setSourceEntity(40U);
    msg.setDestination(29210U);
    msg.setDestinationEntity(228U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WFQWUXPUVHLADTYKFCGOFRZEWBLDAHOGBNLCRNTWIEPHUTNDCAIWIFVMUITGAYQQCGSDDMJKHMIVYBSNJYZCBJMSZSEGHEKJPCUSNFRRYJXUFQIZXFROAQEXQXJOGJLZYHKQMFQFDLYMKKKGNXLTVLEASGRNH");
    tmp_msg_0.lat = 0.994864278742;
    tmp_msg_0.lon = 0.499132837857;
    tmp_msg_0.depth = 0.84773908771;
    tmp_msg_0.query_channel = 40U;
    tmp_msg_0.reply_channel = 143U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.358811198482;
    msg.y = 0.461514734674;
    msg.var_x = 0.476870058976;
    msg.var_y = 0.549458308139;
    msg.distance = 0.380478084637;

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
    msg.setTimeStamp(0.0906098608107);
    msg.setSource(10414U);
    msg.setSourceEntity(180U);
    msg.setDestination(38228U);
    msg.setDestinationEntity(191U);
    msg.state = 40U;

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
    msg.setTimeStamp(0.853610573535);
    msg.setSource(42538U);
    msg.setSourceEntity(4U);
    msg.setDestination(59929U);
    msg.setDestinationEntity(139U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.87117159249);
    msg.setSource(32258U);
    msg.setSourceEntity(52U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(192U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.592426386916);
    msg.setSource(28003U);
    msg.setSourceEntity(121U);
    msg.setDestination(28181U);
    msg.setDestinationEntity(83U);
    msg.x = 0.769241455447;
    msg.y = 0.545958584197;
    msg.z = 0.581491797536;

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
    msg.setTimeStamp(0.931150563963);
    msg.setSource(45158U);
    msg.setSourceEntity(215U);
    msg.setDestination(28470U);
    msg.setDestinationEntity(147U);
    msg.x = 0.437866278042;
    msg.y = 0.706784687811;
    msg.z = 0.249546606032;

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
    msg.setTimeStamp(0.757071951579);
    msg.setSource(39576U);
    msg.setSourceEntity(29U);
    msg.setDestination(57518U);
    msg.setDestinationEntity(27U);
    msg.x = 0.663323069508;
    msg.y = 0.972085645537;
    msg.z = 0.558391168317;

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
    msg.setTimeStamp(0.92173992781);
    msg.setSource(54620U);
    msg.setSourceEntity(137U);
    msg.setDestination(3695U);
    msg.setDestinationEntity(143U);
    msg.value = 0.738040888156;

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
    msg.setTimeStamp(0.524488533267);
    msg.setSource(64959U);
    msg.setSourceEntity(177U);
    msg.setDestination(63854U);
    msg.setDestinationEntity(111U);
    msg.value = 0.558237580076;

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
    msg.setTimeStamp(0.240974180774);
    msg.setSource(51012U);
    msg.setSourceEntity(102U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(10U);
    msg.value = 0.231617967488;

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
    msg.setTimeStamp(0.786998050782);
    msg.setSource(10266U);
    msg.setSourceEntity(121U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(97U);
    msg.value = 0.227539634334;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.945027296013);
    msg.setSource(48027U);
    msg.setSourceEntity(188U);
    msg.setDestination(29652U);
    msg.setDestinationEntity(193U);
    msg.value = 0.903299484534;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.135867907806);
    msg.setSource(47213U);
    msg.setSourceEntity(145U);
    msg.setDestination(17367U);
    msg.setDestinationEntity(163U);
    msg.value = 0.550909180063;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.169566233566);
    msg.setSource(1689U);
    msg.setSourceEntity(1U);
    msg.setDestination(16696U);
    msg.setDestinationEntity(174U);
    msg.value = 0.901147213925;
    msg.speed_units = 42U;

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
    msg.setTimeStamp(0.944539770388);
    msg.setSource(57556U);
    msg.setSourceEntity(186U);
    msg.setDestination(28266U);
    msg.setDestinationEntity(172U);
    msg.value = 0.477426748625;
    msg.speed_units = 151U;

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
    msg.setTimeStamp(0.366338427209);
    msg.setSource(33637U);
    msg.setSourceEntity(0U);
    msg.setDestination(38995U);
    msg.setDestinationEntity(110U);
    msg.value = 0.654689123964;
    msg.speed_units = 52U;

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
    msg.setTimeStamp(0.207568187939);
    msg.setSource(43173U);
    msg.setSourceEntity(109U);
    msg.setDestination(8191U);
    msg.setDestinationEntity(51U);
    msg.value = 0.145434150749;

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
    msg.setTimeStamp(0.0402922362538);
    msg.setSource(34187U);
    msg.setSourceEntity(214U);
    msg.setDestination(47081U);
    msg.setDestinationEntity(128U);
    msg.value = 0.431650812992;

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
    msg.setTimeStamp(0.072529878176);
    msg.setSource(31602U);
    msg.setSourceEntity(160U);
    msg.setDestination(22086U);
    msg.setDestinationEntity(83U);
    msg.value = 0.0246844452934;

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
    msg.setTimeStamp(0.736539327792);
    msg.setSource(5055U);
    msg.setSourceEntity(210U);
    msg.setDestination(8510U);
    msg.setDestinationEntity(141U);
    msg.value = 0.524307295411;

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
    msg.setTimeStamp(0.982282156414);
    msg.setSource(16878U);
    msg.setSourceEntity(157U);
    msg.setDestination(35077U);
    msg.setDestinationEntity(8U);
    msg.value = 0.555534659176;

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
    msg.setTimeStamp(0.863596847805);
    msg.setSource(6364U);
    msg.setSourceEntity(64U);
    msg.setDestination(48882U);
    msg.setDestinationEntity(61U);
    msg.value = 0.139200437026;

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
    msg.setTimeStamp(0.248695955329);
    msg.setSource(23444U);
    msg.setSourceEntity(51U);
    msg.setDestination(55510U);
    msg.setDestinationEntity(42U);
    msg.value = 0.126204834597;

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
    msg.setTimeStamp(0.812630384599);
    msg.setSource(62345U);
    msg.setSourceEntity(72U);
    msg.setDestination(56007U);
    msg.setDestinationEntity(111U);
    msg.value = 0.601339034288;

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
    msg.setTimeStamp(0.857814478079);
    msg.setSource(12282U);
    msg.setSourceEntity(182U);
    msg.setDestination(5637U);
    msg.setDestinationEntity(242U);
    msg.value = 0.872167866398;

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
    msg.setTimeStamp(0.498998216529);
    msg.setSource(13328U);
    msg.setSourceEntity(50U);
    msg.setDestination(33695U);
    msg.setDestinationEntity(133U);
    msg.start_lat = 0.842523363916;
    msg.start_lon = 0.983103178134;
    msg.start_z = 0.923386935221;
    msg.start_z_units = 38U;
    msg.end_lat = 0.665070314929;
    msg.end_lon = 0.691413603728;
    msg.end_z = 0.615027378135;
    msg.end_z_units = 159U;
    msg.speed = 0.994240743611;
    msg.speed_units = 56U;
    msg.lradius = 0.698870848481;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.732724166153);
    msg.setSource(23480U);
    msg.setSourceEntity(85U);
    msg.setDestination(1620U);
    msg.setDestinationEntity(79U);
    msg.start_lat = 0.323677297741;
    msg.start_lon = 0.635845631189;
    msg.start_z = 0.502099578302;
    msg.start_z_units = 173U;
    msg.end_lat = 0.627743261228;
    msg.end_lon = 0.436696096212;
    msg.end_z = 0.743681049579;
    msg.end_z_units = 245U;
    msg.speed = 0.762971512563;
    msg.speed_units = 38U;
    msg.lradius = 0.386983857893;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.264200730943);
    msg.setSource(37738U);
    msg.setSourceEntity(143U);
    msg.setDestination(599U);
    msg.setDestinationEntity(129U);
    msg.start_lat = 0.426142314695;
    msg.start_lon = 0.412080328795;
    msg.start_z = 0.639794051665;
    msg.start_z_units = 46U;
    msg.end_lat = 0.484717473357;
    msg.end_lon = 0.648004947799;
    msg.end_z = 0.929817024393;
    msg.end_z_units = 246U;
    msg.speed = 0.0539914197037;
    msg.speed_units = 83U;
    msg.lradius = 0.998393951005;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.945727704231);
    msg.setSource(60908U);
    msg.setSourceEntity(167U);
    msg.setDestination(22367U);
    msg.setDestinationEntity(19U);
    msg.x = 0.37202973893;
    msg.y = 0.944556633812;
    msg.z = 0.740323684038;
    msg.k = 0.77229279062;
    msg.m = 0.192870849515;
    msg.n = 0.688245833459;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.671990734841);
    msg.setSource(65060U);
    msg.setSourceEntity(220U);
    msg.setDestination(37241U);
    msg.setDestinationEntity(188U);
    msg.x = 0.855005803504;
    msg.y = 0.50940976065;
    msg.z = 0.848367269093;
    msg.k = 0.804803223216;
    msg.m = 0.210475783375;
    msg.n = 0.282109106411;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.173559394779);
    msg.setSource(52072U);
    msg.setSourceEntity(102U);
    msg.setDestination(65319U);
    msg.setDestinationEntity(74U);
    msg.x = 0.981685273227;
    msg.y = 0.674455673529;
    msg.z = 0.961491150235;
    msg.k = 0.364189850876;
    msg.m = 0.951842736753;
    msg.n = 0.709718187797;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.494795219559);
    msg.setSource(35364U);
    msg.setSourceEntity(173U);
    msg.setDestination(7886U);
    msg.setDestinationEntity(90U);
    msg.value = 0.189240656808;

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
    msg.setTimeStamp(0.926040399186);
    msg.setSource(14741U);
    msg.setSourceEntity(183U);
    msg.setDestination(27206U);
    msg.setDestinationEntity(114U);
    msg.value = 0.281262094952;

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
    msg.setTimeStamp(0.463424019477);
    msg.setSource(50205U);
    msg.setSourceEntity(40U);
    msg.setDestination(11236U);
    msg.setDestinationEntity(154U);
    msg.value = 0.94690719854;

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
    msg.setTimeStamp(0.412962822861);
    msg.setSource(6881U);
    msg.setSourceEntity(68U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(138U);
    msg.u = 0.48895578601;
    msg.v = 0.879362745266;
    msg.w = 0.981734623459;
    msg.p = 0.38092671315;
    msg.q = 0.76943838445;
    msg.r = 0.4945423243;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.348772397248);
    msg.setSource(60930U);
    msg.setSourceEntity(161U);
    msg.setDestination(10787U);
    msg.setDestinationEntity(254U);
    msg.u = 0.108596226394;
    msg.v = 0.586381282381;
    msg.w = 0.211913500686;
    msg.p = 0.860449116679;
    msg.q = 0.479578669036;
    msg.r = 0.99860024706;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.661218085855);
    msg.setSource(21382U);
    msg.setSourceEntity(199U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(40U);
    msg.u = 0.0366065812298;
    msg.v = 0.838911472097;
    msg.w = 0.890899371506;
    msg.p = 0.938627042415;
    msg.q = 0.830893587075;
    msg.r = 0.889876017444;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.143224505874);
    msg.setSource(53413U);
    msg.setSourceEntity(64U);
    msg.setDestination(28936U);
    msg.setDestinationEntity(217U);
    msg.start_lat = 0.687836928109;
    msg.start_lon = 0.407415730161;
    msg.start_z = 0.0814126429495;
    msg.start_z_units = 77U;
    msg.end_lat = 0.180648356821;
    msg.end_lon = 0.770445938642;
    msg.end_z = 0.105200049993;
    msg.end_z_units = 230U;
    msg.lradius = 0.314072932436;
    msg.flags = 168U;
    msg.x = 0.928687433821;
    msg.y = 0.320335124007;
    msg.z = 0.762295841939;
    msg.vx = 0.893109480264;
    msg.vy = 0.502287987723;
    msg.vz = 0.331799014968;
    msg.course_error = 0.227771749259;
    msg.eta = 6842U;

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
    msg.setTimeStamp(0.599882962498);
    msg.setSource(13606U);
    msg.setSourceEntity(168U);
    msg.setDestination(36656U);
    msg.setDestinationEntity(195U);
    msg.start_lat = 0.395466614951;
    msg.start_lon = 0.423901922675;
    msg.start_z = 0.904093235837;
    msg.start_z_units = 19U;
    msg.end_lat = 0.688728461369;
    msg.end_lon = 0.2971562643;
    msg.end_z = 0.838949479742;
    msg.end_z_units = 52U;
    msg.lradius = 0.111617310939;
    msg.flags = 169U;
    msg.x = 0.183539144203;
    msg.y = 0.682844932469;
    msg.z = 0.656170043216;
    msg.vx = 0.0526661092696;
    msg.vy = 0.0383816997168;
    msg.vz = 0.908331401773;
    msg.course_error = 0.946039042894;
    msg.eta = 54691U;

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
    msg.setTimeStamp(0.534315470571);
    msg.setSource(51072U);
    msg.setSourceEntity(184U);
    msg.setDestination(17487U);
    msg.setDestinationEntity(213U);
    msg.start_lat = 0.0923959368517;
    msg.start_lon = 0.107443708954;
    msg.start_z = 0.382577284443;
    msg.start_z_units = 78U;
    msg.end_lat = 0.606701298465;
    msg.end_lon = 0.775013608417;
    msg.end_z = 0.419297514887;
    msg.end_z_units = 158U;
    msg.lradius = 0.325487460078;
    msg.flags = 88U;
    msg.x = 0.150998249012;
    msg.y = 0.310780975775;
    msg.z = 0.792325905256;
    msg.vx = 0.611460563989;
    msg.vy = 0.834233116967;
    msg.vz = 0.59549327972;
    msg.course_error = 0.281645971738;
    msg.eta = 44453U;

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
    msg.setTimeStamp(0.272072961556);
    msg.setSource(4644U);
    msg.setSourceEntity(101U);
    msg.setDestination(24976U);
    msg.setDestinationEntity(126U);
    msg.k = 0.191115517959;
    msg.m = 0.0296957861057;
    msg.n = 0.766582037791;

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
    msg.setTimeStamp(0.526623267713);
    msg.setSource(36142U);
    msg.setSourceEntity(16U);
    msg.setDestination(8357U);
    msg.setDestinationEntity(89U);
    msg.k = 0.233041297793;
    msg.m = 0.555223811093;
    msg.n = 0.643025364278;

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
    msg.setTimeStamp(0.167035288814);
    msg.setSource(24313U);
    msg.setSourceEntity(237U);
    msg.setDestination(63218U);
    msg.setDestinationEntity(232U);
    msg.k = 0.615328996565;
    msg.m = 0.141144844754;
    msg.n = 0.521037887352;

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
    msg.setTimeStamp(0.202012334441);
    msg.setSource(60318U);
    msg.setSourceEntity(184U);
    msg.setDestination(6186U);
    msg.setDestinationEntity(249U);
    msg.p = 0.287643399305;
    msg.i = 0.97762532006;
    msg.d = 0.517911483799;
    msg.a = 0.699328085338;

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
    msg.setTimeStamp(0.560851919321);
    msg.setSource(9780U);
    msg.setSourceEntity(31U);
    msg.setDestination(32331U);
    msg.setDestinationEntity(31U);
    msg.p = 0.560530712724;
    msg.i = 0.802769087262;
    msg.d = 0.436216601538;
    msg.a = 0.780962129918;

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
    msg.setTimeStamp(0.331254253282);
    msg.setSource(45661U);
    msg.setSourceEntity(233U);
    msg.setDestination(20391U);
    msg.setDestinationEntity(188U);
    msg.p = 0.0395186988691;
    msg.i = 0.0558589452043;
    msg.d = 0.898563280414;
    msg.a = 0.649575295269;

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
    msg.setTimeStamp(0.810689380387);
    msg.setSource(51468U);
    msg.setSourceEntity(171U);
    msg.setDestination(63909U);
    msg.setDestinationEntity(221U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.356933333963);
    msg.setSource(32963U);
    msg.setSourceEntity(44U);
    msg.setDestination(19779U);
    msg.setDestinationEntity(232U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.211649638868);
    msg.setSource(57248U);
    msg.setSourceEntity(68U);
    msg.setDestination(2424U);
    msg.setDestinationEntity(27U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.743008567616);
    msg.setSource(53842U);
    msg.setSourceEntity(80U);
    msg.setDestination(16079U);
    msg.setDestinationEntity(146U);
    msg.timeout = 12985U;
    msg.lat = 0.966162911533;
    msg.lon = 0.0898047047492;
    msg.z = 0.889243152533;
    msg.z_units = 235U;
    msg.speed = 0.0209281966319;
    msg.speed_units = 122U;
    msg.roll = 0.702151541199;
    msg.pitch = 0.373510622096;
    msg.yaw = 0.786561133667;
    msg.custom.assign("WEBKOXZAMAXORQAKPNTKGDCUTPNYLZDTWOSGOJREVEUGYFCQWRKAAPQEZIGLONBEQTPXZGBCFUJHSLTVUCIYANWFSFWNKRBFYLSSKLHETJPEOFTZQVNAUHSBFOAUWZDRSTHYMBJUEXDMRECUWLXLTXGHHVBMRCVQFYLINGJJUCBYIPVUYS");

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
    msg.setTimeStamp(0.0983249946641);
    msg.setSource(59282U);
    msg.setSourceEntity(251U);
    msg.setDestination(52575U);
    msg.setDestinationEntity(60U);
    msg.timeout = 6912U;
    msg.lat = 0.472564927337;
    msg.lon = 0.284136992243;
    msg.z = 0.354860545189;
    msg.z_units = 224U;
    msg.speed = 0.0947849957566;
    msg.speed_units = 254U;
    msg.roll = 0.213696090475;
    msg.pitch = 0.406885048429;
    msg.yaw = 0.555262208357;
    msg.custom.assign("LBQQFHMUJJEWOJXDKTTKIHX");

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
    msg.setTimeStamp(0.0992019347613);
    msg.setSource(25655U);
    msg.setSourceEntity(146U);
    msg.setDestination(15510U);
    msg.setDestinationEntity(238U);
    msg.timeout = 8629U;
    msg.lat = 0.675904931893;
    msg.lon = 0.298892965016;
    msg.z = 0.142162744133;
    msg.z_units = 249U;
    msg.speed = 0.2154412133;
    msg.speed_units = 217U;
    msg.roll = 0.386357907269;
    msg.pitch = 0.0179753165107;
    msg.yaw = 0.245591293564;
    msg.custom.assign("RDRPKHOEULAQU");

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
    msg.setTimeStamp(0.230598598601);
    msg.setSource(360U);
    msg.setSourceEntity(147U);
    msg.setDestination(55074U);
    msg.setDestinationEntity(56U);
    msg.timeout = 29916U;
    msg.lat = 0.751438217755;
    msg.lon = 0.435078655526;
    msg.z = 0.320683241636;
    msg.z_units = 76U;
    msg.speed = 0.166019296028;
    msg.speed_units = 198U;
    msg.duration = 20869U;
    msg.radius = 0.0405578769749;
    msg.flags = 191U;
    msg.custom.assign("AYASORYSEMPAKNPBBHMUVVAOJVZWTPMJWPU");

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
    msg.setTimeStamp(0.498818835379);
    msg.setSource(20289U);
    msg.setSourceEntity(66U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(116U);
    msg.timeout = 63370U;
    msg.lat = 0.369681307516;
    msg.lon = 0.212456625648;
    msg.z = 0.125233546699;
    msg.z_units = 240U;
    msg.speed = 0.55476127167;
    msg.speed_units = 171U;
    msg.duration = 57016U;
    msg.radius = 0.66155112451;
    msg.flags = 213U;
    msg.custom.assign("TOBGUELEJDZRAFPGYXQSOIFCKFMOENZBDFCRLQH");

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
    msg.setTimeStamp(0.609071117245);
    msg.setSource(35170U);
    msg.setSourceEntity(18U);
    msg.setDestination(8323U);
    msg.setDestinationEntity(173U);
    msg.timeout = 286U;
    msg.lat = 0.858153036392;
    msg.lon = 0.0367182819398;
    msg.z = 0.0745067655462;
    msg.z_units = 32U;
    msg.speed = 0.235322102128;
    msg.speed_units = 109U;
    msg.duration = 54138U;
    msg.radius = 0.687927340664;
    msg.flags = 245U;
    msg.custom.assign("HDLMMGQKVQTRUFCTWZPDCRZMBELODIUHRJXEMAMVJQLPBCEVLUPVIJD");

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
    msg.setTimeStamp(0.455190554241);
    msg.setSource(11918U);
    msg.setSourceEntity(96U);
    msg.setDestination(17495U);
    msg.setDestinationEntity(206U);
    msg.custom.assign("MQJFJGEEXDZOEIKCZCUDYDTXXNRJEYLRTKVHXMOWBOAAZSNHKWKLVCOBTLPFCAZHCFIHNJJCBLMORLIPPEAKUHELXXNNCUQAHDUOHWNSBQNFORRZPFSKFGBFWMHYMUPTUGDPJMVYYJFZGTGBBYRVTEHNWWASLXSIFJWPVOXLSDKAWEYKUIWIPDGMSIKVBBQQQIJGVUQBYLXOQLYTQOHRRGFZMDDK");

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
    msg.setTimeStamp(0.465654912077);
    msg.setSource(36147U);
    msg.setSourceEntity(7U);
    msg.setDestination(29827U);
    msg.setDestinationEntity(233U);
    msg.custom.assign("DJQGPBOYAFREZRBZAXEHUJFIQDBSVMPKINYAJSWVPSOIUVBQAMZGCYHTFLLGVILIWCZUZSUBYGIHNUXUFYSPNWIVHXJHVCJLUAEVSHDZRFARRKXDSCUVTHKYARGHRTNNCQFQAYIODXDKNPHJYUTMECLEBLZBETMKWJCGWIOWNLAPSZQAXEDTSTGSGNCBRKZDTWKOMOMPTGCVDYLOVEXMKF");

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
    msg.setTimeStamp(0.110551450823);
    msg.setSource(42813U);
    msg.setSourceEntity(103U);
    msg.setDestination(58547U);
    msg.setDestinationEntity(123U);
    msg.custom.assign("LWIXLPDZSJZLDPWMWNQLJCBIF");

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
    msg.setTimeStamp(0.90655668313);
    msg.setSource(31529U);
    msg.setSourceEntity(112U);
    msg.setDestination(12006U);
    msg.setDestinationEntity(229U);
    msg.timeout = 23037U;
    msg.lat = 0.239829152754;
    msg.lon = 0.410832991472;
    msg.z = 0.376230509704;
    msg.z_units = 215U;
    msg.duration = 55376U;
    msg.speed = 0.529583784499;
    msg.speed_units = 118U;
    msg.type = 175U;
    msg.radius = 0.745180035663;
    msg.length = 0.691013785895;
    msg.bearing = 0.815642679215;
    msg.direction = 73U;
    msg.custom.assign("JDMKCCQFGNSTCIDPVKXJXFCPOHZMTBAEFNTEMTXXRJESSHTKLRDGXAIVUFJFNUIZLQJPEQSJGMNEBUZUYYQAKXOWYFAKMAGLWPTWPLFXUWVJCBEEYYLHBRMSKZSIQXOTMYQDYEZFNUPNWOMBQQRZZARXBPUAZCHCWXWSRGFFBPWHAIBGVYHSGHNYEHNLOZURDIOAWVDIBCHLJSQGIRMOTYLVMHZUKVTTAGRGNOILBDLDQRKJVEOPCOS");

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
    msg.setTimeStamp(0.370094787298);
    msg.setSource(41622U);
    msg.setSourceEntity(193U);
    msg.setDestination(65285U);
    msg.setDestinationEntity(81U);
    msg.timeout = 56533U;
    msg.lat = 0.300072965152;
    msg.lon = 0.768994146475;
    msg.z = 0.713745722206;
    msg.z_units = 165U;
    msg.duration = 1959U;
    msg.speed = 0.39118613217;
    msg.speed_units = 190U;
    msg.type = 35U;
    msg.radius = 0.00874559042337;
    msg.length = 0.73859225728;
    msg.bearing = 0.021672958153;
    msg.direction = 168U;
    msg.custom.assign("XAMFXHSGXSEYBRHKQOOXHDJCUDLXWVYZGFKGKLIFXURAW");

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
    msg.setTimeStamp(0.392944023509);
    msg.setSource(39103U);
    msg.setSourceEntity(171U);
    msg.setDestination(37960U);
    msg.setDestinationEntity(95U);
    msg.timeout = 42408U;
    msg.lat = 0.233541781495;
    msg.lon = 0.158830503125;
    msg.z = 0.644045271793;
    msg.z_units = 245U;
    msg.duration = 48244U;
    msg.speed = 0.485272820876;
    msg.speed_units = 206U;
    msg.type = 69U;
    msg.radius = 0.187732793295;
    msg.length = 0.208321343753;
    msg.bearing = 0.446689166266;
    msg.direction = 101U;
    msg.custom.assign("POXASFVNQORBMTZMXCLECWXMKVGTUVTYWWKGITPJMNULTHSSBYCSOWDJZUVIGIYECHYHZKUBBHXONODLPDVMCKZCFBUMJIRABIFFHOZFESDJENGTHXQVVWSBXWYAAFFYGEUJHGFHCLLAQQIBBLBZTXXRUMVOZCGKARQZNRCDEQYGWDDAWPTKUJPYPHREDJMQUKEWUODIAY");

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
    msg.setTimeStamp(0.384434878216);
    msg.setSource(11823U);
    msg.setSourceEntity(18U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(17U);
    msg.duration = 6601U;
    msg.custom.assign("JGYNASCDYFSWSXDOVPMFHFZFJZBMQLMVZKEIUSLRBKJFPYVGNPHQDVLTXASGEHNHQZBBT");

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
    msg.setTimeStamp(0.9279157527);
    msg.setSource(61548U);
    msg.setSourceEntity(183U);
    msg.setDestination(34123U);
    msg.setDestinationEntity(78U);
    msg.duration = 23064U;
    msg.custom.assign("KVIAUKIAHPHLGMZCOEXUFRT");

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
    msg.setTimeStamp(0.537708745304);
    msg.setSource(63671U);
    msg.setSourceEntity(174U);
    msg.setDestination(21899U);
    msg.setDestinationEntity(214U);
    msg.duration = 544U;
    msg.custom.assign("JIYNNJYODJGWDONAQVAQYVCXBRJWGPRABZWDBKNJOBTZTPXSPJFISTRWUENYIRXJFMQRPBUKQJOZQEZUFSIEPEVWHFARDCGQDWVLBPZXFSCXBHULHQTFUVYMWUMPKRCEZTUXDMGPYNRKMOGHMCYCPICCQVMTNGLKMEDGLNHCHUKSKJETYBWAGOHSQZKLMTXNVCHFLXTWLFZPSUFVIZS");

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
    msg.setTimeStamp(0.736468524009);
    msg.setSource(5906U);
    msg.setSourceEntity(39U);
    msg.setDestination(18380U);
    msg.setDestinationEntity(235U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.113247525785;
    tmp_msg_0.start_lon = 0.271709128631;
    tmp_msg_0.start_z = 0.631255654819;
    tmp_msg_0.start_z_units = 32U;
    tmp_msg_0.end_lat = 0.0937945012375;
    tmp_msg_0.end_lon = 0.524286246369;
    tmp_msg_0.end_z = 0.233316795217;
    tmp_msg_0.end_z_units = 115U;
    tmp_msg_0.speed = 0.420721713463;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.lradius = 0.11685258297;
    tmp_msg_0.flags = 225U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9586U;
    msg.custom.assign("MOZZIIYMFWBLTDZMIOTFZLYKDKAWJHKSOULOTXCKXJNNHYGTMYVAOKKHDFDEUWYZSQZESYDPMCEFUHQFMBHHRTYXXULNINVENXTVESWXVGXPRWPIJAAZLGWCWPNQRICSNBESTACQCKEVVJRSKFYSYEQJDJQBSOPEZRFJWCGUY");

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
    msg.setTimeStamp(0.222736053695);
    msg.setSource(2723U);
    msg.setSourceEntity(25U);
    msg.setDestination(29789U);
    msg.setDestinationEntity(23U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.236327603496;
    tmp_msg_0.start_lon = 0.218825085165;
    tmp_msg_0.start_z = 0.919125454909;
    tmp_msg_0.start_z_units = 240U;
    tmp_msg_0.end_lat = 0.128061625108;
    tmp_msg_0.end_lon = 0.506779493852;
    tmp_msg_0.end_z = 0.799564502998;
    tmp_msg_0.end_z_units = 62U;
    tmp_msg_0.speed = 0.403935972287;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.lradius = 0.490319907287;
    tmp_msg_0.flags = 223U;
    msg.control.set(tmp_msg_0);
    msg.duration = 4987U;
    msg.custom.assign("SYAVJJIODRSDKIGJTWCCWQPOXNHVCLO");

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
    msg.setTimeStamp(0.687545873201);
    msg.setSource(43054U);
    msg.setSourceEntity(47U);
    msg.setDestination(49431U);
    msg.setDestinationEntity(138U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.59042696088;
    msg.control.set(tmp_msg_0);
    msg.duration = 45194U;
    msg.custom.assign("BEREYEVUPZQQRCQSAROEYFMZANEMANJLKSTSC");

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
    msg.setTimeStamp(0.0856369487325);
    msg.setSource(38613U);
    msg.setSourceEntity(46U);
    msg.setDestination(18195U);
    msg.setDestinationEntity(90U);
    msg.timeout = 35713U;
    msg.lat = 0.634370184353;
    msg.lon = 0.621108664408;
    msg.z = 0.744950388691;
    msg.z_units = 15U;
    msg.speed = 0.650885316164;
    msg.speed_units = 135U;
    msg.bearing = 0.0488223460852;
    msg.cross_angle = 0.88061867194;
    msg.width = 0.0900050849238;
    msg.length = 0.483249712364;
    msg.hstep = 0.938648560132;
    msg.coff = 174U;
    msg.alternation = 91U;
    msg.flags = 242U;
    msg.custom.assign("JIKPFTWDXPLOUZFVKYHEZKQNVXWQRUGBIPYVRHGTABXCHGKJLZIRL");

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
    msg.setTimeStamp(0.807063822487);
    msg.setSource(4724U);
    msg.setSourceEntity(23U);
    msg.setDestination(58365U);
    msg.setDestinationEntity(15U);
    msg.timeout = 19414U;
    msg.lat = 0.57545612837;
    msg.lon = 0.184345894184;
    msg.z = 0.276309959688;
    msg.z_units = 193U;
    msg.speed = 0.255307883983;
    msg.speed_units = 23U;
    msg.bearing = 0.780471536654;
    msg.cross_angle = 0.530490154931;
    msg.width = 0.303140368584;
    msg.length = 0.700257148458;
    msg.hstep = 0.999474590015;
    msg.coff = 70U;
    msg.alternation = 234U;
    msg.flags = 141U;
    msg.custom.assign("ZNPDHUSCGOFISHNYWIXAVBJXMNUFFAJBTVATQEUIDWVBZYOMFQZYWJAOCOEXAZPPQMVGRLPDXLIZFYLHNZKTCLFYBCOGKALEYYJURUBOKCEGYNSTWUTGUJJTQZOSBWEABBMSCKLDHWZFPLJWPLHFXXHN");

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
    msg.setTimeStamp(0.410228913821);
    msg.setSource(22502U);
    msg.setSourceEntity(91U);
    msg.setDestination(34442U);
    msg.setDestinationEntity(113U);
    msg.timeout = 14759U;
    msg.lat = 0.126213485395;
    msg.lon = 0.664172019379;
    msg.z = 0.967034709165;
    msg.z_units = 121U;
    msg.speed = 0.188806754142;
    msg.speed_units = 245U;
    msg.bearing = 0.0671135574514;
    msg.cross_angle = 0.977007210021;
    msg.width = 0.262867480318;
    msg.length = 0.67863850822;
    msg.hstep = 0.472915096973;
    msg.coff = 201U;
    msg.alternation = 35U;
    msg.flags = 227U;
    msg.custom.assign("MIHCQKTXAPMUVRZVRLGKADIDQGMQUZAFDUPPAEENPQVNGBWLBRDTIKSQBPTPGEUMFWRZTXSIWVWHVJOFXYXAJHIJSBNT");

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
    msg.setTimeStamp(0.676554475722);
    msg.setSource(33690U);
    msg.setSourceEntity(134U);
    msg.setDestination(25212U);
    msg.setDestinationEntity(103U);
    msg.timeout = 8469U;
    msg.lat = 0.576004906187;
    msg.lon = 0.869717990764;
    msg.z = 0.896030953795;
    msg.z_units = 210U;
    msg.speed = 0.167282807057;
    msg.speed_units = 166U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.189482297566;
    tmp_msg_0.y = 0.7360621102;
    tmp_msg_0.z = 0.564420369656;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BVZFZOQMXWZWWOHSAAFAEHPXQQNDNLOSUQMSCWHHCUSQYFFYXZFBIJCGGYXCDIKMCFDCVGQKFRWBXOYSTLRHZJDJFMJOUADRSAEIBIWS");

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
    msg.setTimeStamp(0.00793878230152);
    msg.setSource(19745U);
    msg.setSourceEntity(1U);
    msg.setDestination(42513U);
    msg.setDestinationEntity(66U);
    msg.timeout = 35392U;
    msg.lat = 0.525902376196;
    msg.lon = 0.897091101968;
    msg.z = 0.195812127289;
    msg.z_units = 122U;
    msg.speed = 0.298339711851;
    msg.speed_units = 27U;
    msg.custom.assign("WKKKRPZLGXURPYJTLWFXAEAVXGGMKFKDPNRAVOXUIQYVALPCXGHFSJMJQZHLQSPXLXVDOIWSHISTRCYOBUWWUSJFIQLOKDUYNZVZESSOOJBGHTO");

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
    msg.setTimeStamp(0.951674220612);
    msg.setSource(31863U);
    msg.setSourceEntity(89U);
    msg.setDestination(39956U);
    msg.setDestinationEntity(129U);
    msg.timeout = 52517U;
    msg.lat = 0.439932703176;
    msg.lon = 0.652749324517;
    msg.z = 0.586486252586;
    msg.z_units = 249U;
    msg.speed = 0.504621454477;
    msg.speed_units = 218U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.830916021986;
    tmp_msg_0.y = 0.854780186255;
    tmp_msg_0.z = 0.201361746852;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NEOVKCXDWAUGDC");

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
    msg.setTimeStamp(0.330626429521);
    msg.setSource(16204U);
    msg.setSourceEntity(8U);
    msg.setDestination(41243U);
    msg.setDestinationEntity(201U);
    msg.x = 0.223732184316;
    msg.y = 0.554892570999;
    msg.z = 0.979527510544;

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
    msg.setTimeStamp(0.613330783468);
    msg.setSource(27926U);
    msg.setSourceEntity(134U);
    msg.setDestination(61643U);
    msg.setDestinationEntity(213U);
    msg.x = 0.437498568217;
    msg.y = 0.160671760406;
    msg.z = 0.330215768325;

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
    msg.setTimeStamp(0.259789396948);
    msg.setSource(32621U);
    msg.setSourceEntity(170U);
    msg.setDestination(8421U);
    msg.setDestinationEntity(67U);
    msg.x = 0.789844362701;
    msg.y = 0.815288433002;
    msg.z = 0.457392037726;

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
    msg.setTimeStamp(0.360846814743);
    msg.setSource(49321U);
    msg.setSourceEntity(144U);
    msg.setDestination(18323U);
    msg.setDestinationEntity(75U);
    msg.timeout = 31877U;
    msg.lat = 0.907282691776;
    msg.lon = 0.324372073875;
    msg.z = 0.408513423697;
    msg.z_units = 30U;
    msg.amplitude = 0.399482027943;
    msg.pitch = 0.872651683299;
    msg.speed = 0.770377117834;
    msg.speed_units = 151U;
    msg.custom.assign("XRXYWBNLYIIIVGDMKSJLSLXPKBICBEPTWDMNUYXECCRCPGFUTQSNGNVOMDUAFSRFHPHFSVSUNRTRCNUAHDBLUWXZKYNDYCCHFKQLGESXCHYBH");

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
    msg.setTimeStamp(0.956207349751);
    msg.setSource(2031U);
    msg.setSourceEntity(115U);
    msg.setDestination(31474U);
    msg.setDestinationEntity(217U);
    msg.timeout = 10336U;
    msg.lat = 0.844167008599;
    msg.lon = 0.325392346429;
    msg.z = 0.0636386581453;
    msg.z_units = 112U;
    msg.amplitude = 0.0746953238193;
    msg.pitch = 0.957976653699;
    msg.speed = 0.260236384811;
    msg.speed_units = 133U;
    msg.custom.assign("SWPHUXZNWTBLOWITBIECNMMAAGIDFETAMWYKPOGPYHJIHPRMNFEDAJKDDKLJKZZKLCNOE");

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
    msg.setTimeStamp(0.312834393516);
    msg.setSource(11558U);
    msg.setSourceEntity(162U);
    msg.setDestination(43098U);
    msg.setDestinationEntity(14U);
    msg.timeout = 16535U;
    msg.lat = 0.275734065076;
    msg.lon = 0.575727389388;
    msg.z = 0.131252216651;
    msg.z_units = 156U;
    msg.amplitude = 0.58527629659;
    msg.pitch = 0.335557172159;
    msg.speed = 0.76292217581;
    msg.speed_units = 153U;
    msg.custom.assign("JEPMWZPOIRFIBTHPFLJMGVGYQVBTIYIPVWEEZAOZWOMDSMKURJRZZSXGVRUWTKSAUVAWWLAETRSXJOVCMIXYZCHFJGCXYFXKLKJHJLBYBOQGLUODTYCKNADROMEKVIDAUGYAIHHUSXQFGBMXQZAEYONFUNTFPTPUXQGNTXRDSVHTUKHZJAVYQSRQGEFVOZEMYLIPLNPXHWCRLNZNSGKCNWPJNBBDDSEJCFDLIFBUDQTCSPKQCNRMQOAMW");

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
    msg.setTimeStamp(0.488312703919);
    msg.setSource(34512U);
    msg.setSourceEntity(16U);
    msg.setDestination(18798U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.697225756403);
    msg.setSource(60292U);
    msg.setSourceEntity(157U);
    msg.setDestination(53311U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.655090875766);
    msg.setSource(9054U);
    msg.setSourceEntity(146U);
    msg.setDestination(39058U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.990431883739);
    msg.setSource(17772U);
    msg.setSourceEntity(109U);
    msg.setDestination(9199U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.307360908219;
    msg.lon = 0.00365506054695;
    msg.z = 0.949529124866;
    msg.z_units = 166U;
    msg.radius = 0.166685504193;
    msg.duration = 5586U;
    msg.speed = 0.232855612658;
    msg.speed_units = 93U;
    msg.custom.assign("MNTXKYJOEIZCXGDMZBVANSTRJHKMZZHKACLKEARYUCHHURDLSWWMRYUTQEEPQOLVQXZDUXGAQVRVDGAKYONXPBDOOHNDQOFNTRAMZLGGUQSAUWRUVBQTMS");

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
    msg.setTimeStamp(0.529206573164);
    msg.setSource(41876U);
    msg.setSourceEntity(54U);
    msg.setDestination(38889U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.783061788918;
    msg.lon = 0.587877776308;
    msg.z = 0.406739341248;
    msg.z_units = 29U;
    msg.radius = 0.890689811728;
    msg.duration = 60438U;
    msg.speed = 0.562164954345;
    msg.speed_units = 79U;
    msg.custom.assign("ADFWCPZEYNSTZSGYRJYQAAGJWVABDZJTDVGTBMKOSUCHSPKEAWRIACGJKXOFURTOBMEHOZBBXTYIIEHDVQLVOMNZUUXXKVPHYIKRKLEKVOCNGRONNQYCSRYZSIEYFAVUNBTNDXGCWNJZSHWXLMKKFCBWQIKAALEGPNFRLUCMEXJQMURIGOFFXCZNVHMRLJWYJWSLBETWMBPLQSOTGFITMGPWZEPDLUCRPYPHHPHXB");

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
    msg.setTimeStamp(0.36296363487);
    msg.setSource(22397U);
    msg.setSourceEntity(35U);
    msg.setDestination(38029U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.723215310921;
    msg.lon = 0.901031465636;
    msg.z = 0.888302684501;
    msg.z_units = 91U;
    msg.radius = 0.55879328823;
    msg.duration = 14407U;
    msg.speed = 0.0275518783645;
    msg.speed_units = 221U;
    msg.custom.assign("YMKYUCYRYOPQXBADXZLKFCJANHGQMLSFLIQPQKNLRMQBEJMZPUQXVGSTTIJXCVZIGUHNTRHHDADEZHSNFQVIILCDOZTXDCYHGRAVTNTFRRKVLKHJXLRGDMNFBXOOBRVPWOFZFABMYAZQDAIIQHZSKEOFLBTLOESCBTDUMMVPAJXOYWWJGOCPLVWDUFEYGWGKWSSREIFWEWHPEBYNKWOAXMURDUVYQZIKHUTMCUN");

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
    msg.setTimeStamp(0.323271178114);
    msg.setSource(21190U);
    msg.setSourceEntity(52U);
    msg.setDestination(64620U);
    msg.setDestinationEntity(178U);
    msg.timeout = 11631U;
    msg.flags = 3U;
    msg.lat = 0.576897562885;
    msg.lon = 0.847628147868;
    msg.start_z = 0.496824966623;
    msg.start_z_units = 245U;
    msg.end_z = 0.928639211066;
    msg.end_z_units = 68U;
    msg.radius = 0.0637807313942;
    msg.speed = 0.531632849031;
    msg.speed_units = 107U;
    msg.custom.assign("DNIOKCYSJYNVFBFUHPVBAWCYROKZSIGDHQXQMPVLAALHPZDXPYQRVEFNTKNDMTPQFGXCCGTEJZELOATIONCZHEMUBDRUEBLKOCBFYULVIFMWJXSPFLDCDDXFXLUFWLROQSQDSSZHVSUTUTVSTIAJJPBYJBQZRRXOBRHAMXKNICWZRJMONUYNWPWEVOBSGUKNLGMKPDP");

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
    msg.setTimeStamp(0.252688027389);
    msg.setSource(57460U);
    msg.setSourceEntity(205U);
    msg.setDestination(30546U);
    msg.setDestinationEntity(165U);
    msg.timeout = 62404U;
    msg.flags = 22U;
    msg.lat = 0.67499434757;
    msg.lon = 0.241785999503;
    msg.start_z = 0.955976223228;
    msg.start_z_units = 129U;
    msg.end_z = 0.82326910016;
    msg.end_z_units = 97U;
    msg.radius = 0.171640290463;
    msg.speed = 0.0182584602954;
    msg.speed_units = 153U;
    msg.custom.assign("DNFEAGRARSZAIPTHCUOYLLTIYCNGFHJHWCKSVSENXDZMUSKVLPETIYHYLPOHWNQGHJFXAYUEOLROWJDAZCUTFIQVMOZZD");

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
    msg.setTimeStamp(0.524618440792);
    msg.setSource(38207U);
    msg.setSourceEntity(94U);
    msg.setDestination(8725U);
    msg.setDestinationEntity(101U);
    msg.timeout = 32663U;
    msg.flags = 195U;
    msg.lat = 0.164404366673;
    msg.lon = 0.809732798435;
    msg.start_z = 0.873491923431;
    msg.start_z_units = 2U;
    msg.end_z = 0.649833500267;
    msg.end_z_units = 16U;
    msg.radius = 0.578574933052;
    msg.speed = 0.531347521087;
    msg.speed_units = 138U;
    msg.custom.assign("QBLFVBKERMVYRZAVRHLOAANEMEAPEYLTJNWECBXDQTDJHEWJVQUQFTAYSLLZGQNRFFQLZOQGVTUDQARTFIKOX");

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
    msg.setTimeStamp(0.235004421144);
    msg.setSource(48898U);
    msg.setSourceEntity(126U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(218U);
    msg.timeout = 65317U;
    msg.lat = 0.239477156695;
    msg.lon = 0.256077812884;
    msg.z = 0.590740503937;
    msg.z_units = 37U;
    msg.speed = 0.73791505259;
    msg.speed_units = 72U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.970504422404;
    tmp_msg_0.y = 0.00359698766891;
    tmp_msg_0.z = 0.557969269898;
    tmp_msg_0.t = 0.222535748982;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VRONLKLBWMGLBJYQXIDMMVEKTZDEJWRUWOUDLNQUUTNMQSLQSNNLKZPODXZIJPFIW");

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
    msg.setTimeStamp(0.370602698215);
    msg.setSource(48409U);
    msg.setSourceEntity(37U);
    msg.setDestination(37995U);
    msg.setDestinationEntity(78U);
    msg.timeout = 50917U;
    msg.lat = 0.0845571770637;
    msg.lon = 0.431097275646;
    msg.z = 0.734754147452;
    msg.z_units = 172U;
    msg.speed = 0.165264794979;
    msg.speed_units = 224U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.691408901469;
    tmp_msg_0.y = 0.792227806839;
    tmp_msg_0.z = 0.531940471026;
    tmp_msg_0.t = 0.621774617652;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AUCZMPYQMDUBQXBOOBXKOKUYDSLMWFXMXNZCJCLWRYGMAYJGDOOQWTDYIUERGMFIVERLIKXLDUBHNRXVBQGAPYTVQNMUKQJCJOMZBCOFXZFLKZWTKTHICNKWHVIDPJOUHRYZTNGILVLLJPEVPSQ");

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
    msg.setTimeStamp(0.493247865775);
    msg.setSource(11572U);
    msg.setSourceEntity(78U);
    msg.setDestination(10613U);
    msg.setDestinationEntity(187U);
    msg.timeout = 26148U;
    msg.lat = 0.0546845671336;
    msg.lon = 0.879012725156;
    msg.z = 0.450632104772;
    msg.z_units = 27U;
    msg.speed = 0.326594695564;
    msg.speed_units = 186U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.927888132232;
    tmp_msg_0.y = 0.696480108232;
    tmp_msg_0.z = 0.953855262858;
    tmp_msg_0.t = 0.957510962586;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NHQZGZBXDSXOMUCGCWGTATCOUHZOXNUBXZNVUDXPAMQKPERFFNJNGIKJFPZMFDWSEFYERILUTQXVZYRNEIDOLNKGBPVQJTDWWPBBSRLSYQEPMHUCWJHUTAZLKZDYAMTOLNYSGGMHIIUNTTMDCXCRJEIPHBCRSJHAFWOBAUMICSYGTSPVOXACVMLEKGRFHTLZVGIAKKWOQKXLVPJDBAJSSLDIVARUPECYYFZFM");

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
    msg.setTimeStamp(0.971197697913);
    msg.setSource(48001U);
    msg.setSourceEntity(154U);
    msg.setDestination(61372U);
    msg.setDestinationEntity(190U);
    msg.x = 0.946647897974;
    msg.y = 0.0781495809197;
    msg.z = 0.323149707763;
    msg.t = 0.790893472055;

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
    msg.setTimeStamp(0.66141866036);
    msg.setSource(33333U);
    msg.setSourceEntity(183U);
    msg.setDestination(39531U);
    msg.setDestinationEntity(227U);
    msg.x = 0.214257674256;
    msg.y = 0.0906325921875;
    msg.z = 0.528948197274;
    msg.t = 0.502713114005;

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
    msg.setTimeStamp(0.812676464621);
    msg.setSource(15451U);
    msg.setSourceEntity(3U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(234U);
    msg.x = 0.834297088145;
    msg.y = 0.180822132638;
    msg.z = 0.952118688582;
    msg.t = 0.500204667696;

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
    msg.setTimeStamp(0.430421209912);
    msg.setSource(30580U);
    msg.setSourceEntity(61U);
    msg.setDestination(36057U);
    msg.setDestinationEntity(166U);
    msg.timeout = 46711U;
    msg.name.assign("BKAIHMFBCLQWTKPUKHLAVFRDWDCVRHZGOGXVJSUFTAKNZNRITHIMUZMIGKLHUOLXPLOZMZUBLBNP");
    msg.custom.assign("GXRWPIDWJLDEXPEMVZVOHGFHWIIJJCSLKLZNTIDVAP");

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
    msg.setTimeStamp(0.5237313584);
    msg.setSource(3944U);
    msg.setSourceEntity(184U);
    msg.setDestination(55288U);
    msg.setDestinationEntity(252U);
    msg.timeout = 9376U;
    msg.name.assign("IAPWGSEFCEHKTODVSVWMHCEOAOVCQLXZGYWOAROXDLMVUVABLNDABBSRPBBJRCQILNOSILWMUQHALGUYOGJI");
    msg.custom.assign("UUKOEQDNOQWKTNRGQYDNWFELUIWRCDYMBUDCXEWAGXDFYBPDUMXKOMASPBOOVBHQHSIOKAXSEIRMHKTUTSHGSJSMCYSNCGYRXLJGHRPNLWPGPNNNIZMYPZGKNJBTJXGYUELQQICVMFWBAJHHJMRXKATVMASZFUODLVLCCIBFPJZFLZWHQALDEFTWEVTOYZOYLKTZCZAURHQFVPZPXGMWZUDJVBVERXADXNEAIRRIWTJGSKEFVCIQVQHBBP");

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
    msg.setTimeStamp(0.214552180231);
    msg.setSource(54174U);
    msg.setSourceEntity(135U);
    msg.setDestination(28460U);
    msg.setDestinationEntity(17U);
    msg.timeout = 10049U;
    msg.name.assign("CQFORGKBIJTSNYGOOEZOEJVAUCPCMVHPNQZVHV");
    msg.custom.assign("BFSRKPGVXMHPAXUQYDMXRKJVDQFWQKA");

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
    msg.setTimeStamp(0.828623195831);
    msg.setSource(61958U);
    msg.setSourceEntity(172U);
    msg.setDestination(28153U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.418440978807;
    msg.lon = 0.632950148145;
    msg.z = 0.0803365848267;
    msg.z_units = 230U;
    msg.speed = 0.2839043604;
    msg.speed_units = 188U;
    msg.start_time = 0.402228606256;
    msg.custom.assign("PPUPGVNIDMMHVCZKFPZ");

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
    msg.setTimeStamp(0.0319330257008);
    msg.setSource(8454U);
    msg.setSourceEntity(74U);
    msg.setDestination(19324U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.602808998743;
    msg.lon = 0.203230177472;
    msg.z = 0.279265555766;
    msg.z_units = 0U;
    msg.speed = 0.0669750300392;
    msg.speed_units = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7663U;
    tmp_msg_0.off_x = 0.779382923017;
    tmp_msg_0.off_y = 0.81052284041;
    tmp_msg_0.off_z = 0.0598119418214;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.450546423892;
    msg.custom.assign("HBHAKZYMGIOXEHDHODJSCARPONOJBQHQUSYUETZQVZSOLGAVDOERTZLJJQBFUMVUCMCPYNLFLYLJNUGIQKBNCVQSQLZGFVCDTUKSAXWYNDRFEBOEWISECDORBZARGKUHXJPUTSFLPXMJDIQVMPHFMYSAG");

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
    msg.setTimeStamp(0.193260926172);
    msg.setSource(40348U);
    msg.setSourceEntity(16U);
    msg.setDestination(39856U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.359668531682;
    msg.lon = 0.940755457756;
    msg.z = 0.222501584173;
    msg.z_units = 168U;
    msg.speed = 0.590427674315;
    msg.speed_units = 224U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.495678397908;
    tmp_msg_0.y = 0.196254819682;
    tmp_msg_0.z = 0.702837264498;
    tmp_msg_0.t = 0.000538263606764;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 21073U;
    tmp_msg_1.off_x = 0.498248816836;
    tmp_msg_1.off_y = 0.019966173273;
    tmp_msg_1.off_z = 0.556303943768;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.772010649742;
    msg.custom.assign("PHRPRDDPCFLFOCKFNKZXKHSKFMEJRCWHUWQRGOBGDSQCHTQASSOTQK");

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
    msg.setTimeStamp(0.591722371873);
    msg.setSource(24033U);
    msg.setSourceEntity(113U);
    msg.setDestination(18224U);
    msg.setDestinationEntity(224U);
    msg.vid = 44634U;
    msg.off_x = 0.628591954473;
    msg.off_y = 0.51370250933;
    msg.off_z = 0.104905443214;

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
    msg.setTimeStamp(0.326391752052);
    msg.setSource(26261U);
    msg.setSourceEntity(161U);
    msg.setDestination(17114U);
    msg.setDestinationEntity(10U);
    msg.vid = 57672U;
    msg.off_x = 0.283630245035;
    msg.off_y = 0.996542975136;
    msg.off_z = 0.137557333017;

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
    msg.setTimeStamp(0.81626398866);
    msg.setSource(36649U);
    msg.setSourceEntity(196U);
    msg.setDestination(47457U);
    msg.setDestinationEntity(14U);
    msg.vid = 64376U;
    msg.off_x = 0.576538448855;
    msg.off_y = 0.256548148444;
    msg.off_z = 0.266676536148;

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
    msg.setTimeStamp(0.637587195571);
    msg.setSource(28760U);
    msg.setSourceEntity(152U);
    msg.setDestination(31610U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.638439785337);
    msg.setSource(31588U);
    msg.setSourceEntity(248U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.454688750078);
    msg.setSource(14300U);
    msg.setSourceEntity(205U);
    msg.setDestination(31273U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.916994348027);
    msg.setSource(32633U);
    msg.setSourceEntity(204U);
    msg.setDestination(38760U);
    msg.setDestinationEntity(79U);
    msg.mid = 57133U;

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
    msg.setTimeStamp(0.0740336941394);
    msg.setSource(39192U);
    msg.setSourceEntity(68U);
    msg.setDestination(5628U);
    msg.setDestinationEntity(141U);
    msg.mid = 54633U;

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
    msg.setTimeStamp(0.575218053727);
    msg.setSource(44845U);
    msg.setSourceEntity(112U);
    msg.setDestination(1743U);
    msg.setDestinationEntity(87U);
    msg.mid = 44834U;

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
    msg.setTimeStamp(0.108244453979);
    msg.setSource(36947U);
    msg.setSourceEntity(137U);
    msg.setDestination(54804U);
    msg.setDestinationEntity(90U);
    msg.state = 11U;
    msg.eta = 24606U;
    msg.info.assign("CFGOPBWYUUJVCVXQAOHOHOGRLCRWVQLRPDOSUFQWTDLDWFGGVUYCPFPTPIXMSSWJMLYDHVAUXCTMJQAMWKERHKVICKKOBJXIEHBPVDQNDABBSXZEFDGEZLMRHOBSICRRLGMFZPQNPQMJLSJAZAONFIYIRGZKUZWNESIWJIVQZYMJV");

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
    msg.setTimeStamp(0.738725793912);
    msg.setSource(51762U);
    msg.setSourceEntity(73U);
    msg.setDestination(56304U);
    msg.setDestinationEntity(193U);
    msg.state = 23U;
    msg.eta = 46098U;
    msg.info.assign("RHOBZXVZVWDQRZAORUGLKUHGSACBOANPYYWLPYUGVMPOAHBTLSTBLRZOIIYJMFFXKEEFKBGAJOCGKQLMZOTKJEDXNJCFNDHPXJTNWYVRWCCXQUHUDBEFWTTQMYQUPBGLETQOMNZINWUKNLERNKXSSVPVSADGNMVARQYSEQHYMVZKVLIGQCIPBWJHKAAXMFFXJHGEOTDCICDDSZFTHRMIFZVHWDFRAPWZDRNIKMUBPWCYSXSS");

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
    msg.setTimeStamp(0.480505002813);
    msg.setSource(44928U);
    msg.setSourceEntity(113U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(40U);
    msg.state = 90U;
    msg.eta = 34645U;
    msg.info.assign("VYYBAGMIILMVEIREMVDRAOQJOMPPGJFLFIZLGFQSGHEYTQYMIWKHKECTZFLNSDPAGVNKQNSYUWKLDPFRVWYFOTPKZSIJTXAVPIHEGNHHWSZCL");

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
    msg.setTimeStamp(0.817859502499);
    msg.setSource(6840U);
    msg.setSourceEntity(59U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(111U);
    msg.system = 10682U;
    msg.duration = 19638U;
    msg.speed = 0.475624117028;
    msg.speed_units = 62U;
    msg.x = 0.969850303224;
    msg.y = 0.323418011296;
    msg.z = 0.934464922957;
    msg.z_units = 49U;

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
    msg.setTimeStamp(0.257906349569);
    msg.setSource(1211U);
    msg.setSourceEntity(157U);
    msg.setDestination(22633U);
    msg.setDestinationEntity(199U);
    msg.system = 60325U;
    msg.duration = 13049U;
    msg.speed = 0.625626348727;
    msg.speed_units = 58U;
    msg.x = 0.896404450168;
    msg.y = 0.383740248938;
    msg.z = 0.694421848019;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.88281379071);
    msg.setSource(7149U);
    msg.setSourceEntity(81U);
    msg.setDestination(36337U);
    msg.setDestinationEntity(14U);
    msg.system = 31354U;
    msg.duration = 43195U;
    msg.speed = 0.703989004233;
    msg.speed_units = 73U;
    msg.x = 0.878941823204;
    msg.y = 0.449127903905;
    msg.z = 0.456894915984;
    msg.z_units = 59U;

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
    msg.setTimeStamp(0.521925161358);
    msg.setSource(47655U);
    msg.setSourceEntity(254U);
    msg.setDestination(16790U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.174027537768;
    msg.lon = 0.310045672134;
    msg.speed = 0.858653565556;
    msg.speed_units = 247U;
    msg.duration = 33713U;
    msg.sys_a = 23099U;
    msg.sys_b = 42626U;
    msg.move_threshold = 0.243229499854;

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
    msg.setTimeStamp(0.382541417155);
    msg.setSource(437U);
    msg.setSourceEntity(221U);
    msg.setDestination(47347U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.899224633464;
    msg.lon = 0.663912621989;
    msg.speed = 0.443384684892;
    msg.speed_units = 60U;
    msg.duration = 60062U;
    msg.sys_a = 23712U;
    msg.sys_b = 63264U;
    msg.move_threshold = 0.556021971957;

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
    msg.setTimeStamp(0.268506351581);
    msg.setSource(39971U);
    msg.setSourceEntity(251U);
    msg.setDestination(44088U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.703326596644;
    msg.lon = 0.941067370574;
    msg.speed = 0.139317109352;
    msg.speed_units = 166U;
    msg.duration = 52781U;
    msg.sys_a = 43415U;
    msg.sys_b = 42939U;
    msg.move_threshold = 0.474907474869;

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
    msg.setTimeStamp(0.146073439816);
    msg.setSource(4263U);
    msg.setSourceEntity(61U);
    msg.setDestination(26750U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.698166983133;
    msg.lon = 0.430178071603;
    msg.z = 0.798514353503;
    msg.z_units = 39U;
    msg.speed = 0.807556666964;
    msg.speed_units = 223U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.127968476373;
    tmp_msg_0.lon = 0.460960793027;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PFBDEGFMRASYVMXBEZBREKEEYCSFRWLUMRJSWQGEXGKYZYNYEMVBPUAPZPLREVENIKFMWUIAIJYZWLOHTAZQHPKTFQCFLDSWVKDOZAJDLKIFCNAGXOJWYGBKNFXDXTGGQLBZOLMTCQPSJNRDXXSPUOWOTDLSMVVYKVDNCFRQ");

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
    msg.setTimeStamp(0.538866115743);
    msg.setSource(1875U);
    msg.setSourceEntity(201U);
    msg.setDestination(51847U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.701267411819;
    msg.lon = 0.0168260320817;
    msg.z = 0.0890933389115;
    msg.z_units = 194U;
    msg.speed = 0.253082143735;
    msg.speed_units = 210U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.413549437703;
    tmp_msg_0.lon = 0.156863232568;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XCAJGNPZIQYGCYWMISNMIBBDBRZTYRGPBUEXEDRHTMRNPUZUUVXWSYQBJK");

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
    msg.setTimeStamp(0.323342757979);
    msg.setSource(45020U);
    msg.setSourceEntity(198U);
    msg.setDestination(14989U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.791464360678;
    msg.lon = 0.0691422919556;
    msg.z = 0.16754425529;
    msg.z_units = 62U;
    msg.speed = 0.30676177491;
    msg.speed_units = 87U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.883823774649;
    tmp_msg_0.lon = 0.83247559946;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JJQTWZQTRKHOCFXUNZNGOOBNGXMUBMXERQDFVGLPAMTAIOOQABVBFKUSQDZJAXVPREWLGMWUWRNEPDMLKVNSYJCWBPZDVCXOAPIKBRKCYKOELICTTBXGSZOUYJZCUIRDGAINFOBFYVFJCSZUQEAMWFDFWHLSQLQFTZVQILRBPUYUMHWSGAKVSESXNGCXDL");

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
    msg.setTimeStamp(0.244500426397);
    msg.setSource(64014U);
    msg.setSourceEntity(222U);
    msg.setDestination(8468U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.0351327384066;
    msg.lon = 0.626177271645;

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
    msg.setTimeStamp(0.583825099942);
    msg.setSource(55189U);
    msg.setSourceEntity(218U);
    msg.setDestination(15096U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.167905492335;
    msg.lon = 0.38375014568;

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
    msg.setTimeStamp(0.714218392132);
    msg.setSource(57724U);
    msg.setSourceEntity(229U);
    msg.setDestination(61743U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.485232291938;
    msg.lon = 0.660991287844;

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
    msg.setTimeStamp(0.0950570726622);
    msg.setSource(18436U);
    msg.setSourceEntity(241U);
    msg.setDestination(44516U);
    msg.setDestinationEntity(125U);
    msg.timeout = 60981U;
    msg.lat = 0.771503461519;
    msg.lon = 0.722815808429;
    msg.z = 0.532632305583;
    msg.z_units = 34U;
    msg.pitch = 0.17641475416;
    msg.amplitude = 0.711376838374;
    msg.duration = 11552U;
    msg.speed = 0.923178975016;
    msg.speed_units = 164U;
    msg.radius = 0.743394817263;
    msg.direction = 29U;
    msg.custom.assign("VGHQRTEDFLBIJNDEGVMSQISCYWRYQCJVADPFZLIHKXFHOULDMEXAPPV");

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
    msg.setTimeStamp(0.848361026216);
    msg.setSource(2619U);
    msg.setSourceEntity(159U);
    msg.setDestination(41269U);
    msg.setDestinationEntity(81U);
    msg.timeout = 51699U;
    msg.lat = 0.0375052200722;
    msg.lon = 0.274178575317;
    msg.z = 0.102416259054;
    msg.z_units = 190U;
    msg.pitch = 0.10048229636;
    msg.amplitude = 0.853908094858;
    msg.duration = 21508U;
    msg.speed = 0.158295909387;
    msg.speed_units = 101U;
    msg.radius = 0.994727431013;
    msg.direction = 155U;
    msg.custom.assign("WZKIGXNNORANIWQSOSYXAV");

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
    msg.setTimeStamp(0.277817870194);
    msg.setSource(42416U);
    msg.setSourceEntity(2U);
    msg.setDestination(43602U);
    msg.setDestinationEntity(205U);
    msg.timeout = 2519U;
    msg.lat = 0.19892054478;
    msg.lon = 0.638297542567;
    msg.z = 0.0284255093058;
    msg.z_units = 14U;
    msg.pitch = 0.733429139462;
    msg.amplitude = 0.62770369419;
    msg.duration = 39015U;
    msg.speed = 0.971310240024;
    msg.speed_units = 107U;
    msg.radius = 0.0671295642703;
    msg.direction = 134U;
    msg.custom.assign("HPWNSBEFHHZWN");

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
    msg.setTimeStamp(0.783288933831);
    msg.setSource(65323U);
    msg.setSourceEntity(56U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(223U);
    msg.formation_name.assign("KMTEPAWEAUFZPUAFFLLEYZPBHXPIFQLJRBHVTMGCYTURUUUOIDWSDRLVKQZLYLICWTGKRHONWSMFWOVIGNIQJVLIVBBQ");
    msg.reference_frame = 238U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6340U;
    tmp_msg_0.off_x = 0.190217621352;
    tmp_msg_0.off_y = 0.957274785587;
    tmp_msg_0.off_z = 0.413886216407;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JQIXCSPUFQVCPGBOEHZTUJCWQRZRQNYNYLJPXVFICAIAEDQHSYIDWRPVDEQZZYEWSWOLTRYTGAYTVFVJDZFIZGMRSDZVOAYOBKJUBYADFWWRUPEAQETAOKBVBEHU");

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
    msg.setTimeStamp(0.215846901216);
    msg.setSource(41673U);
    msg.setSourceEntity(159U);
    msg.setDestination(41691U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("GDWTNJVMLYQWKVIIQNAWNUFOWHMFBFIDZCABLJZZMZJGPFOLPHNQKLPZOTZPDJMPSIERYCCIKUACGYYXVWKQJEUYBWHSXJEWWXKMEHVYKVGPRTSATIZXOELRRXEJRMNGHBOCMRNUCVMYGGFMTQUQOUUXXFKHGBZ");
    msg.reference_frame = 107U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56428U;
    tmp_msg_0.off_x = 0.718482605138;
    tmp_msg_0.off_y = 0.8119798105;
    tmp_msg_0.off_z = 0.776208193858;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RJMVPNMZAGPZKYYXRJPFQNOCUDPAHQKMYODBUHQDSIRZQDMNAZLUIMPGIWNTVCFHGDALSFFQMREXZKYAOPZIKQNBOVDFNFKMZDXCZZ");

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
    msg.setTimeStamp(0.204482682503);
    msg.setSource(31439U);
    msg.setSourceEntity(55U);
    msg.setDestination(60394U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("RFXJFQZQEVDRRNECBMDOXZCUNBQNWKFFRIOIVZLGQXNAOBKDJTLIGTIWKYUIPIGALLCULZYYTVXTATLVBPSJEGJGREHPERQKAHVHWWABYNFJNMSQMVXDRJPSKCXVSWDBAWXCFTUBQLGKJVMBZDMJWZ");
    msg.reference_frame = 185U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41459U;
    tmp_msg_0.off_x = 0.827845740548;
    tmp_msg_0.off_y = 0.460218524905;
    tmp_msg_0.off_z = 0.109693753641;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZVBGMVFKCGHDUNSVWAPREICXBCLCXZPWIUUOXYLQTYMMOGINCEIWAOHMMBLDBAWFZYVDBSFUWIELJHCXZQULPEMZ");

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
    msg.setTimeStamp(0.117786243028);
    msg.setSource(10905U);
    msg.setSourceEntity(151U);
    msg.setDestination(48164U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("SOXBOZDWKZYXYQBQPHYJNUCEPKOIZGNZWLQQHQFKCQIHGNRQPWAOGJIBMYTRWBTNTUYZZKLSOXBSLSMMJYVDCSUVCVESDWERXLFMIDDJTM");
    msg.formation_name.assign("XYEXQEQKGHPQRWZLSUGYOSWIGPARQAIMPKRDKLIIZJBWHHXWRUDHITEMSQHBSVFHQWOPTJWYYZJUVSXNIAANTBEBVSPYGDNFPMYJNORKXJDJORPNCCDBQEBMIUYQUXTGSCFRICVQDACXLLOJRMEFOQLKKITLWHFDKFUSNWARZYLNYJTCMSGWHTVUCOAUDLPEFDNCFGKHVYDBBSMZCUBKXWFXHTGPJ");
    msg.plan_id.assign("BLAMJIMTMUJVWMSNERDNWHPFJVAFKJTYGKUHNCGZZAQWEMXYOXSXEKFTQASHSGJBKMYKPTWAQKJNVLAUNPVBZGDOCBILAU");
    msg.description.assign("QLLUCKNJHRZKTOPYOIYUAEXCERYXZCWZRMPLCHCFJFENTHXOKVNFIIBBQQWSHBGHGQGUBIDJTKOFPWDDNALLLSRRTKVEJAWDATVRHMNFDWOORKCDFZMABHLFVMCCUBLIZYBOPPAASGFWJRXXBSC");
    msg.leader_speed = 0.870917943856;
    msg.leader_bank_lim = 0.924039968324;
    msg.pos_sim_err_lim = 0.217826501289;
    msg.pos_sim_err_wrn = 0.811999594381;
    msg.pos_sim_err_timeout = 41850U;
    msg.converg_max = 0.62150904498;
    msg.converg_timeout = 21696U;
    msg.comms_timeout = 16516U;
    msg.turb_lim = 0.895289116404;
    msg.custom.assign("LYOOBIVEKGWNMKVSKWYGTSRPOMVHJDAVQAMZJSGURBLOZXTTKIDPJYUCBSLNLSLDBIVNVDFIKDIGZFJEDMQOWURYPBXFGAJGXYIMCPWXCWQQWMWNRYUHETAWCQXUSACESNZHHLTXT");

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
    msg.setTimeStamp(0.152471116853);
    msg.setSource(7380U);
    msg.setSourceEntity(137U);
    msg.setDestination(52413U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("JBGKHNFLWLOPTQKEZIPRALXHBPJMFYMQDUNPWKDJRMZCPEUUZOQRHSEUZVRULOQBHIMADNXAFLOFWAKCTWBQDCKCKVSYCCHOYUNJLDFJMWSTDCOSNKFZCSLZPLIAJQNYGFGMWIVHVPXBIBCEAFBOOYTMXZBISWYRNERYINWGPUKQGAISEVHJNBTQHVLNISVMYOFIWAFKDROHECPRXGZXTJKXYDDUBZ");
    msg.formation_name.assign("PGUZBQHVSWAUWFPCUNWTAJOBKIVLGOGMQZWYOZJHPKKQNHJHVHZAVWFENJRPQMXUDMZOVUTKJTCIZSQAREFALXDHBTRJTMIOPDGMUJEDNGPXLXCAOCKNDEVFBYMTCRSMFBKLRSYETCFUUBQPEGYYBFPQVULDSIVCHVRLZEDYKODZEFKWGUVFIDLXHJLYNBNBISRXWSNXIY");
    msg.plan_id.assign("HGMUQVBRKZCLMPCLIHDXGYTVXI");
    msg.description.assign("MZHBFYPVBVIBWFKENOFJLJRMHLXTDWKBZCHJSPYCGZUNREDTBKKVNTVODFDJNGXTSOFLY");
    msg.leader_speed = 0.637568657544;
    msg.leader_bank_lim = 0.755723657812;
    msg.pos_sim_err_lim = 0.881627412179;
    msg.pos_sim_err_wrn = 0.544736584429;
    msg.pos_sim_err_timeout = 62171U;
    msg.converg_max = 0.512070775419;
    msg.converg_timeout = 53015U;
    msg.comms_timeout = 12846U;
    msg.turb_lim = 0.276466589091;
    msg.custom.assign("AWAGOCQHKJBGAEIFHCFTHIPPNQOQILNWZBNGRXWRXBPYZVXYXYQTOVREDGTWKOVFHPGLILVQRADTZMXWCSUGNRJETKFEDQNKJPOAFEAZUFSWZWAUZMGEVYKYJALRCSOSCHUJVSRTURUGILLIENDBLCMPSVDJYOMMZWGSHPFRUMDSOZXLLGUEBTWAYPBJNWFNKYKQXJRLIJTZHAXTIX");

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
    msg.setTimeStamp(0.918568573698);
    msg.setSource(20407U);
    msg.setSourceEntity(141U);
    msg.setDestination(15905U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("NIYNJNQGFYRSOUIOHVNGUZVIPJNXRNXIZCNLDYOZJMDFSQVPXGJLEARTVGMOOJWASWIYXZZERPBIEHMJWQWJDINFEDUYSVKQGIZOQIPLBOCFZATTAOMGJPQBWLWTVDDKKPDZUQNTXIGSAPYLHHFLCHBBQHNMFLMUUCUTBZJQWMOKCGRXAACPGJLKVXVFPLRBSUVLFWDPFFTUYWVHMRMXRDBT");
    msg.formation_name.assign("VIBKEMPRJRRDVATLNEJCDM");
    msg.plan_id.assign("KPODBJALPADNSJEOHHUOZNPTNSZIPRBKHMDGNENGYAYATIEVJCEMKSHZWRYNZILEZQDESRXURYGLGPUWOJTIFWJJMNTXTMRKIBUXIESAAXWUMCVZQIVIMCHUTFYGBESVHCDXFJFUBYPTWPOXDOUZOKRAVQSCFLMJMISOLLVLPSOYZRQDXGKAKVSEYRPACVQHYHCRFQFMIEZWBBTCGNMHRQKABTQLXXBLGQKKPZHLFYCDTWDUDJQXGJ");
    msg.description.assign("WRPRHMJWPOUYQBLEEKJQCLLKFHKK");
    msg.leader_speed = 0.854474905249;
    msg.leader_bank_lim = 0.316824788953;
    msg.pos_sim_err_lim = 0.634773605032;
    msg.pos_sim_err_wrn = 0.926661744411;
    msg.pos_sim_err_timeout = 47561U;
    msg.converg_max = 0.342076399456;
    msg.converg_timeout = 55494U;
    msg.comms_timeout = 49989U;
    msg.turb_lim = 0.081218593267;
    msg.custom.assign("JLUHUMWXVSUQXUJGWZGALQDXZNLSOSCUQIMICJKBICJORHWDNAPJFUFPHORSSRXYPFNRREAMINJEIDCWYKLMJOWMTYNLFYBFBTDZBFTPKSWTNFMCEXUOIGJZLAQHQWVZHDBLIYQSZWVMKOTRMBXTDNWPHEOYRZAVVSIGKBJGVGTAKAXKLPRCQQECYVURTPNOEEZCADUTPYGOZIKEIBYHMXRGHWAVPDVHXKNOMC");

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
    msg.setTimeStamp(0.48206678916);
    msg.setSource(51327U);
    msg.setSourceEntity(14U);
    msg.setDestination(56448U);
    msg.setDestinationEntity(192U);
    msg.control_src = 50129U;
    msg.control_ent = 122U;
    msg.timeout = 0.713243191855;
    msg.loiter_radius = 0.362898162459;
    msg.altitude_interval = 0.607336389488;

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
    msg.setTimeStamp(0.209668894816);
    msg.setSource(46367U);
    msg.setSourceEntity(240U);
    msg.setDestination(52868U);
    msg.setDestinationEntity(126U);
    msg.control_src = 64653U;
    msg.control_ent = 149U;
    msg.timeout = 0.459210196877;
    msg.loiter_radius = 0.575590370833;
    msg.altitude_interval = 0.968043222724;

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
    msg.setTimeStamp(0.380122762639);
    msg.setSource(65309U);
    msg.setSourceEntity(245U);
    msg.setDestination(49811U);
    msg.setDestinationEntity(224U);
    msg.control_src = 29299U;
    msg.control_ent = 48U;
    msg.timeout = 0.932151580884;
    msg.loiter_radius = 0.304091674426;
    msg.altitude_interval = 0.0577324385042;

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
    msg.setTimeStamp(0.266375754138);
    msg.setSource(38428U);
    msg.setSourceEntity(242U);
    msg.setDestination(18512U);
    msg.setDestinationEntity(182U);
    msg.flags = 181U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.806180498849;
    tmp_msg_0.speed_units = 54U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.601120645498;
    tmp_msg_1.z_units = 16U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.583271138326;
    msg.lon = 0.0352312595624;
    msg.radius = 0.604046472007;

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
    msg.setTimeStamp(0.213672870076);
    msg.setSource(18424U);
    msg.setSourceEntity(138U);
    msg.setDestination(7365U);
    msg.setDestinationEntity(59U);
    msg.flags = 134U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0442454217495;
    tmp_msg_0.speed_units = 113U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.57025514974;
    tmp_msg_1.z_units = 118U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.897457882798;
    msg.lon = 0.791064686789;
    msg.radius = 0.820714618137;

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
    msg.setTimeStamp(0.658701774773);
    msg.setSource(48826U);
    msg.setSourceEntity(223U);
    msg.setDestination(62236U);
    msg.setDestinationEntity(216U);
    msg.flags = 204U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.302736049939;
    tmp_msg_0.speed_units = 197U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.428630970523;
    tmp_msg_1.z_units = 10U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.994318532545;
    msg.lon = 0.570300716902;
    msg.radius = 0.294083353883;

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
    msg.setTimeStamp(0.368685081078);
    msg.setSource(60697U);
    msg.setSourceEntity(215U);
    msg.setDestination(62401U);
    msg.setDestinationEntity(69U);
    msg.control_src = 590U;
    msg.control_ent = 239U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.828805160599;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.478331907944;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0946596590639;
    tmp_msg_0.lon = 0.697050041241;
    tmp_msg_0.radius = 0.650387833026;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 233U;

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
    msg.setTimeStamp(0.433638643863);
    msg.setSource(26908U);
    msg.setSourceEntity(227U);
    msg.setDestination(26786U);
    msg.setDestinationEntity(207U);
    msg.control_src = 64340U;
    msg.control_ent = 228U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 29U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.621248008413;
    tmp_tmp_msg_0_0.speed_units = 161U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.44102256225;
    tmp_tmp_msg_0_1.z_units = 63U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.160526658257;
    tmp_msg_0.lon = 0.193630136913;
    tmp_msg_0.radius = 0.91420588165;
    msg.reference.set(tmp_msg_0);
    msg.state = 254U;
    msg.proximity = 215U;

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
    msg.setTimeStamp(0.0463539304949);
    msg.setSource(24253U);
    msg.setSourceEntity(170U);
    msg.setDestination(26680U);
    msg.setDestinationEntity(247U);
    msg.control_src = 60089U;
    msg.control_ent = 56U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 227U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.750604236391;
    tmp_tmp_msg_0_0.speed_units = 193U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.60686069312;
    tmp_tmp_msg_0_1.z_units = 60U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.566464371254;
    tmp_msg_0.lon = 0.442418133133;
    tmp_msg_0.radius = 0.956619491972;
    msg.reference.set(tmp_msg_0);
    msg.state = 90U;
    msg.proximity = 150U;

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
    msg.setTimeStamp(0.967493403343);
    msg.setSource(2447U);
    msg.setSourceEntity(33U);
    msg.setDestination(43979U);
    msg.setDestinationEntity(253U);
    msg.op_mode = 147U;
    msg.error_count = 54U;
    msg.error_ents.assign("UFGUGJLMDYPBHWVQQQKOYLB");
    msg.maneuver_type = 19663U;
    msg.maneuver_stime = 0.839945466923;
    msg.maneuver_eta = 45495U;
    msg.control_loops = 655923942U;
    msg.flags = 223U;
    msg.last_error.assign("CZHTVLOWBIADZTWOOYABRRAYHNDAFHFKRRUXFIXRSZNWUMQBPXAUVDDMSIGCJFKQVDKSUDMEONSIVWSZIPCHVLSDWPJMGEMZAJGQKPWJRTWCYPYFYTBSNBLQXNZNQFHWTBJAQSXTXHWJRYEGJOFKYORHYEAEMUALJDPLUROMKIDMVZSZOWIFMTHCNDGVRABIFUPLJXTILNUBTMQPCEOEQNKCGXUQXCPEIOZLKZUSHJKX");
    msg.last_error_time = 0.247165730632;

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
    msg.setTimeStamp(0.593906215828);
    msg.setSource(25285U);
    msg.setSourceEntity(219U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(33U);
    msg.op_mode = 45U;
    msg.error_count = 146U;
    msg.error_ents.assign("HKAEBUCZLUAPOPTQBTGUBJTOPAYRSPQSEZNLGTIEJVORWYFAHSYREVKOVRINVUDSCAIIOAIDBKVZFXMAFCFBDAJEQWJNDH");
    msg.maneuver_type = 56231U;
    msg.maneuver_stime = 0.711971476143;
    msg.maneuver_eta = 48721U;
    msg.control_loops = 1955047133U;
    msg.flags = 223U;
    msg.last_error.assign("OLQVFHSXAVTRTMGAZYCGNUJVRUYEZNUNHPKYTZUGBSXXSYVXZOSBNNCAKGJCLCSTWYJIYPQWTZCMIPIEHQFRUVMWMKZMHSPETKQHDRBDEBLTVXQXSZYPRDPALBBPQUHLFNKQMNKMRKTHDXFYDDTDY");
    msg.last_error_time = 0.10270647289;

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
    msg.setTimeStamp(0.493251076584);
    msg.setSource(879U);
    msg.setSourceEntity(199U);
    msg.setDestination(45261U);
    msg.setDestinationEntity(1U);
    msg.op_mode = 84U;
    msg.error_count = 182U;
    msg.error_ents.assign("THBEJLLEQHTJKRXRKTJUWNZZSWDHSUSNZBOYXGKOSGUHPLMHZGNZLMQAWKRJQXESLZDPYSRQVDPWIBCOTXUKCLJUMLVYMFFWIFAIKDMZDNYNHFQOYCPGVBUGGQDWIEACTFVNTMNBFMUWOAGXMJFZKJQADPOPIXAKEMQCWSQNVXXKAEOOFZVEEZYFJHRWRUYGAROYGATCP");
    msg.maneuver_type = 9013U;
    msg.maneuver_stime = 0.399415209601;
    msg.maneuver_eta = 65496U;
    msg.control_loops = 1411915326U;
    msg.flags = 229U;
    msg.last_error.assign("XONQMTZSIKERQZTQSUDWCPJEQHFEEXXMYBCWWWBMGKRWOKXXNHKBOWNDHRVFASIUKJENHTOPDXRBYCIZGCQMGVFLYPLXRLDIUWJYRGKLUPOZVAQSEXQDMBGOTZLAZDYIKPPFMJBVZHMBDCHPWQUOEYBJDWRKSFYSNGNFUNTDOISTHABDSEJQIPCZHNHAFVAGLJUFFGCACWUTUVEVSKGMOTLNRZIPATCTVSAYMXZNMLIPY");
    msg.last_error_time = 0.904205912007;

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
    msg.setTimeStamp(0.53344110526);
    msg.setSource(50783U);
    msg.setSourceEntity(229U);
    msg.setDestination(1361U);
    msg.setDestinationEntity(27U);
    msg.type = 39U;
    msg.request_id = 43662U;
    msg.command = 47U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 61073U;
    tmp_msg_0.lat = 0.138839159162;
    tmp_msg_0.lon = 0.282820254671;
    tmp_msg_0.z = 0.687466797523;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.speed = 0.130894286999;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.roll = 0.659540909305;
    tmp_msg_0.pitch = 0.904804787304;
    tmp_msg_0.yaw = 0.569394663238;
    tmp_msg_0.custom.assign("IBADPHBWFXAGNZHWJUAOYYXNWQRHMWARRBCCQUEYJYERQGYKBRHHGOFJB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2674U;
    msg.info.assign("MOWTXAJQQVGSPEZPSTLDHNCLJFKMWYWXNLUNVVUADUHSJUNKRWPNKZVCXHEBLGIGXWLUEKPWBCI");

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
    msg.setTimeStamp(0.827784918771);
    msg.setSource(56921U);
    msg.setSourceEntity(225U);
    msg.setDestination(12648U);
    msg.setDestinationEntity(12U);
    msg.type = 125U;
    msg.request_id = 53257U;
    msg.command = 234U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 45990U;
    tmp_msg_0.lat = 0.344724711926;
    tmp_msg_0.lon = 0.0171721030402;
    tmp_msg_0.z = 0.473504226638;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.amplitude = 0.187853531509;
    tmp_msg_0.pitch = 0.964018651878;
    tmp_msg_0.speed = 0.860953261356;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.custom.assign("ZGMIAYSWHSSQALRPXOOQBNAOLNIWTOLFRYZHYGBXVPDZYOXOEAXAHGFCXZANMFDMJSHQBAVRCUCJDZXZTVUVNDPJTGYEUGKPVWVWEYLFTBMYKZVKACIJMGRLUIQXKLSHBUONJNWNRBTFCLJZDRQWSRUHVSYMUXKTGF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38038U;
    msg.info.assign("NBOSUTDARGNYGKDMLZWWZCKPHJSFHLNTQDDGYSCDCVBQMAEPLUMCEDKQFICXSKUEQIBYQWYNRRWPXZMQFJTVOZTTZBKANQCNBLZ");

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
    msg.setTimeStamp(0.799805655918);
    msg.setSource(1789U);
    msg.setSourceEntity(187U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(28U);
    msg.type = 113U;
    msg.request_id = 15811U;
    msg.command = 183U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 6989U;
    tmp_msg_0.lat = 0.50257760174;
    tmp_msg_0.lon = 0.647412480985;
    tmp_msg_0.z = 0.942652683048;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.speed = 0.758585120422;
    tmp_msg_0.speed_units = 188U;
    tmp_msg_0.custom.assign("FNAJDATMKEWTTTEVGFSQELLAYFQWFCDRHZBEVHSOUTQZICQIFRCRGUOVKECDLBKZHUQGLISPWNMPNVVJHMAHEBKVRRBNOOENGFSQLPDXEKCDXDQXL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20035U;
    msg.info.assign("UXPFUXTBUOXGWAOKIQFJKOIJAIVLJFLIWQYGNLOREYPGNIHEDIKVMJGYRXCXWAFWEJPNDICYCLPCHVAEPRHNTRQOPPB");

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
    msg.setTimeStamp(0.936975573714);
    msg.setSource(5107U);
    msg.setSourceEntity(114U);
    msg.setDestination(31813U);
    msg.setDestinationEntity(231U);
    msg.command = 225U;
    msg.entities.assign("QRMBLDJJKXBYDCWSUBPKZYYYVOAJNHKXOLMDIFVOMEPQIDZTIRUYKRFLMMYFPRSEMOVXBTBHVWRWTCUBAZJWOLWJGHFIKNZEVVBECHQUOLJNBOLHPXFDUENPACQDGMKATTQYJAPTCVZQAIBOMNARXRTZFRIEOYTZDGXHGJSCPLWUNDLLAHFMHPICSJQGKSPZXWNGXZYSUBYKQNVRSLJUIPAGICKZFGQSWO");

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
    msg.setTimeStamp(0.897695632231);
    msg.setSource(13335U);
    msg.setSourceEntity(59U);
    msg.setDestination(6765U);
    msg.setDestinationEntity(98U);
    msg.command = 51U;
    msg.entities.assign("VTJJKMISOXCMZFXXWJAHFTDYRHLOEOQHRUARINASSYANBSFEBUTAUFHUKZPXPLIHQTSMJICBROVZXVIJEKQQSIBFAEERQLMDRXNHPXFVLWVFBDZSBKUDCUQVOMWRYTJYHIUMNQLGOOKLFFDSYGYVNXPUWGDVBWLDGYNKEVEPGWDOKLWTKNZGAWTKUMFQGCLNNGCJSDUDTAYNJSGILQQPPMPMBREJACIHGPIHAXBCJZVTZ");

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
    msg.setTimeStamp(0.699499448791);
    msg.setSource(63042U);
    msg.setSourceEntity(219U);
    msg.setDestination(41203U);
    msg.setDestinationEntity(149U);
    msg.command = 145U;
    msg.entities.assign("IGQTJZVGXEPKINOMEUBMXPPOCDSXUVVQLSJWPDLHWMNLYZWHKETNFLFGAIQCLRGHRKRTBACWOXKHOTCNAZHKFVSMPERJPYUYIWNJSAUESGVEFFARZDFACNDXDTSXIYWFRAXFQWRTNMXIKKZTLLREOZVLSXCBGEHBOFGHGJTRZEHQBZBUNKUSDCMGYUZHCKTVBVYYMPDXSWQMQULJIMISNUBVCUNOTIWZBYEAJPBHIJYAQYDOO");

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
    msg.setTimeStamp(0.506261199349);
    msg.setSource(56637U);
    msg.setSourceEntity(191U);
    msg.setDestination(15218U);
    msg.setDestinationEntity(6U);
    msg.mcount = 212U;
    msg.mnames.assign("BCVAVLBBAJCZTVLOSPVJSOZUOHMDZWTUWRTSIATCKJHERANBDDKOFKLWVLVFCPFHJTMHHVDJZQQRJTPONYHORCRTXUXUNEFUNQAXVKXGREGJDYFYUFZTZBRWNYIIAPKQFSIZINIMYXDLAWAEHMKBQMPVL");
    msg.ecount = 217U;
    msg.enames.assign("QUFCDMPUEMFQZTHEWBAUFPNUKSVVASYWXLNXYNAVHSKNKOEOMMEKITSESNHHILPYFFYBYBGUYBOSDZLCIZOQEJKQHVTVRCWLSWUDQECVNPQGBTLIOPXQHEIMRKVMPXCNSSBGEALRGTAIVWFNVPRIUWOWAGAMFQXOJGBJKMVOHJBRBGATDICMYJZO");
    msg.ccount = 73U;
    msg.cnames.assign("ANPXLQJWNOARQUQEYWIYLDQUHWRRYHHZIAFSIBHECGUTUAHTBOBMJWAWBYJSOHFLXSXTGSPKPIZFNMKBKRWYNLPNDNPAXBVNJITVVJIGKURMFAGAFPDZWOCHXVMJTMVGVCSIMXZQZAEECZMWQSXIHTPEOQWECODBKYXQUDJGKDVTGELEZPYRQVCVJKNQYJBFMPMUBROTJLFHHDZOKDY");
    msg.last_error.assign("QKXURLXRKQVXQEBSBZIMFJUJSBUFMIRFQAUAPTCWNAHJOBPBVBLFKSJDGLYRHQZHBXIVMWZLBM");
    msg.last_error_time = 0.596967688773;

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
    msg.setTimeStamp(0.413426681521);
    msg.setSource(50500U);
    msg.setSourceEntity(69U);
    msg.setDestination(48740U);
    msg.setDestinationEntity(83U);
    msg.mcount = 230U;
    msg.mnames.assign("GLRNWSQYRCAEXKQVCFTPRZKPWDVCCSUXMISXSYELRLUEHTQZEFGHZYDSYMITBVKFZATKIRHPHDHMRZWZSHKASJZNPXHKNRRJOIYQCPQARNEFVIGTMOADBVHFOWCTFLVNKPWXOXGITBANCAOZBKPMYLNCOJVDQXJBYMIDMCDVP");
    msg.ecount = 92U;
    msg.enames.assign("WPVAVAZSSHEMVOLUBBUXUJIQTZUHXHPUSWTYMAYLYDQDDYQUPOWZTFCGEHRNIFEUVKJPHBMYFZC");
    msg.ccount = 88U;
    msg.cnames.assign("LLTRESWJKDOGQUUHILIZEMUALSYARJUJQKWDZOYAZGNJTZSUTIVPYYUACLTWNCVQORFTJLKDBXOSZAQVLGTNKKRLGADUGZHQQEE");
    msg.last_error.assign("SARRZNPLCFXUQHZBTMDMVYYYCBKDWMAPJEDXWTVDQWEZNWIGEWXI");
    msg.last_error_time = 0.765033774991;

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
    msg.setTimeStamp(0.892553480643);
    msg.setSource(12152U);
    msg.setSourceEntity(44U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(96U);
    msg.mcount = 158U;
    msg.mnames.assign("UCMVRTQCCGYSDXXMOBMPASCTGMIFKORVJRIQIVLUGOEMCNFNGEJYBWJWQMYUFFURUSEVLNXYQTHFDSETFSKVLBHPRJPOADFIGEWUPTRLOXBJSNISAKJIDRYGOVBLZJFYKUPWHUYNSPWWCDQEZPGZNXMVKQJIOXGUOHFNQZZDLNCTMCPDIHXWLVLTKAZAOJQCHEWQBUIYGXRXQHHNBHWEKTBDRAASADDGEZZCRTZJYILOASPETM");
    msg.ecount = 229U;
    msg.enames.assign("VPOMDVUXIJWUXBYFAPYZFHAMOFMWQVJWTFKDRVFTYUESFBXBZKPAJDJJGQIROZCPMNXIQSDDWUYUMPDANNPZLGZKANKXQBZAFQDPHATFDWGGRHHIJQMRPABOKCGBRLCYLCXSDHIBMYTKPGZJCOCLTHEIACWJQNYUEYZZBVERDCELPKXQBWVUESOTKZOSHHREILNCUOUTXFVLNWWLMLJGM");
    msg.ccount = 227U;
    msg.cnames.assign("NDERHXCZWGWFBIPBVNZNFNTYZJJCXMKQYREXEZNAAMXWXHQTQJJVOOYWAWEFHUDWECIQTVLZHXF");
    msg.last_error.assign("EMQYFAMMCQSOXLYCCANKTGIRZSOYGBBASEWHROIGCMUNQDMPOKPUUNXIVRYDWZZXTNLYUFSTDCTFUDCFPHHAVAYBL");
    msg.last_error_time = 0.393313150579;

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
    msg.setTimeStamp(0.139828474688);
    msg.setSource(61696U);
    msg.setSourceEntity(141U);
    msg.setDestination(11408U);
    msg.setDestinationEntity(70U);
    msg.mask = 38U;
    msg.max_depth = 0.436745530233;
    msg.min_altitude = 0.952958741572;
    msg.max_altitude = 0.152411127285;
    msg.min_speed = 0.0878537609205;
    msg.max_speed = 0.921539156507;
    msg.max_vrate = 0.13326651866;
    msg.lat = 0.655884294421;
    msg.lon = 0.550030020005;
    msg.orientation = 0.240362950154;
    msg.width = 0.604817541305;
    msg.length = 0.396228936126;

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
    msg.setTimeStamp(0.861077393472);
    msg.setSource(30144U);
    msg.setSourceEntity(49U);
    msg.setDestination(27388U);
    msg.setDestinationEntity(179U);
    msg.mask = 114U;
    msg.max_depth = 0.34308471809;
    msg.min_altitude = 0.349823251655;
    msg.max_altitude = 0.509256424575;
    msg.min_speed = 0.361848613123;
    msg.max_speed = 0.314625504663;
    msg.max_vrate = 0.300338287972;
    msg.lat = 0.969546487512;
    msg.lon = 0.799684383605;
    msg.orientation = 0.348727007164;
    msg.width = 0.375409105739;
    msg.length = 0.0116830198521;

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
    msg.setTimeStamp(0.0369262653424);
    msg.setSource(13368U);
    msg.setSourceEntity(200U);
    msg.setDestination(18184U);
    msg.setDestinationEntity(3U);
    msg.mask = 65U;
    msg.max_depth = 0.997792234908;
    msg.min_altitude = 0.680401290818;
    msg.max_altitude = 0.716075749069;
    msg.min_speed = 0.486683239144;
    msg.max_speed = 0.25100117593;
    msg.max_vrate = 0.981161594728;
    msg.lat = 0.67414911886;
    msg.lon = 0.483871556757;
    msg.orientation = 0.941774957616;
    msg.width = 0.575711443289;
    msg.length = 0.546059767044;

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
    msg.setTimeStamp(0.783834096404);
    msg.setSource(41582U);
    msg.setSourceEntity(152U);
    msg.setDestination(57972U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.888372920046);
    msg.setSource(23259U);
    msg.setSourceEntity(225U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.370967574799);
    msg.setSource(45130U);
    msg.setSourceEntity(183U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.0207551393231);
    msg.setSource(64291U);
    msg.setSourceEntity(141U);
    msg.setDestination(1300U);
    msg.setDestinationEntity(183U);
    msg.duration = 38131U;

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
    msg.setTimeStamp(0.372177031436);
    msg.setSource(39559U);
    msg.setSourceEntity(71U);
    msg.setDestination(53928U);
    msg.setDestinationEntity(184U);
    msg.duration = 32976U;

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
    msg.setTimeStamp(0.755585043302);
    msg.setSource(6193U);
    msg.setSourceEntity(14U);
    msg.setDestination(34497U);
    msg.setDestinationEntity(126U);
    msg.duration = 17102U;

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
    msg.setTimeStamp(0.959483133744);
    msg.setSource(17957U);
    msg.setSourceEntity(21U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(29U);
    msg.enable = 146U;
    msg.mask = 1839007522U;
    msg.scope_ref = 3959886297U;

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
    msg.setTimeStamp(0.5300965289);
    msg.setSource(6050U);
    msg.setSourceEntity(25U);
    msg.setDestination(54225U);
    msg.setDestinationEntity(186U);
    msg.enable = 91U;
    msg.mask = 1767006761U;
    msg.scope_ref = 3045638322U;

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
    msg.setTimeStamp(0.194867363574);
    msg.setSource(16560U);
    msg.setSourceEntity(88U);
    msg.setDestination(59331U);
    msg.setDestinationEntity(20U);
    msg.enable = 105U;
    msg.mask = 2538295428U;
    msg.scope_ref = 1552828810U;

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
    msg.setTimeStamp(0.130358457806);
    msg.setSource(44177U);
    msg.setSourceEntity(13U);
    msg.setDestination(55097U);
    msg.setDestinationEntity(253U);
    msg.medium = 140U;

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
    msg.setTimeStamp(0.734991652763);
    msg.setSource(38558U);
    msg.setSourceEntity(157U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(109U);
    msg.medium = 141U;

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
    msg.setTimeStamp(0.390205190394);
    msg.setSource(54174U);
    msg.setSourceEntity(123U);
    msg.setDestination(9819U);
    msg.setDestinationEntity(163U);
    msg.medium = 165U;

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
    msg.setTimeStamp(0.841984738059);
    msg.setSource(23941U);
    msg.setSourceEntity(197U);
    msg.setDestination(7386U);
    msg.setDestinationEntity(157U);
    msg.value = 0.510330768745;
    msg.type = 31U;

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
    msg.setTimeStamp(0.839841064745);
    msg.setSource(62938U);
    msg.setSourceEntity(63U);
    msg.setDestination(35327U);
    msg.setDestinationEntity(234U);
    msg.value = 0.505828252045;
    msg.type = 233U;

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
    msg.setTimeStamp(0.839205030109);
    msg.setSource(23193U);
    msg.setSourceEntity(208U);
    msg.setDestination(34628U);
    msg.setDestinationEntity(250U);
    msg.value = 0.436181726505;
    msg.type = 177U;

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
    msg.setTimeStamp(0.903180621978);
    msg.setSource(20717U);
    msg.setSourceEntity(168U);
    msg.setDestination(27968U);
    msg.setDestinationEntity(26U);
    msg.possimerr = 0.979319103507;
    msg.converg = 0.557750665439;
    msg.turbulence = 0.856187245295;
    msg.possimmon = 54U;
    msg.commmon = 195U;
    msg.convergmon = 117U;

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
    msg.setTimeStamp(0.832029831446);
    msg.setSource(16448U);
    msg.setSourceEntity(81U);
    msg.setDestination(23366U);
    msg.setDestinationEntity(83U);
    msg.possimerr = 0.595947080919;
    msg.converg = 0.954702818728;
    msg.turbulence = 0.448209867831;
    msg.possimmon = 25U;
    msg.commmon = 88U;
    msg.convergmon = 157U;

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
    msg.setTimeStamp(0.0285118138268);
    msg.setSource(19028U);
    msg.setSourceEntity(36U);
    msg.setDestination(4510U);
    msg.setDestinationEntity(4U);
    msg.possimerr = 0.354157656653;
    msg.converg = 0.894853692085;
    msg.turbulence = 0.505142236175;
    msg.possimmon = 8U;
    msg.commmon = 60U;
    msg.convergmon = 227U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.270098202451);
    msg.setSource(25139U);
    msg.setSourceEntity(228U);
    msg.setDestination(61459U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.117193165588);
    msg.setSource(26852U);
    msg.setSourceEntity(72U);
    msg.setDestination(39387U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.728069253942);
    msg.setSource(38660U);
    msg.setSourceEntity(160U);
    msg.setDestination(30587U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.442000966994);
    msg.setSource(5268U);
    msg.setSourceEntity(66U);
    msg.setDestination(30398U);
    msg.setDestinationEntity(219U);
    msg.plan_id.assign("KBWWCFWNBIDRVJVAJWFLITXRIUXJBBQKTCAFBPZCXRGRSUOQEONSFSNMHXOWEHCVAUMOZCYGWLGESEKCKVTGLSHWYSTNRADEHIULQPRSWQMNPNEPMFKJUCBKPMMYZGOLXDHVOWHUBBRKRNZH");
    msg.description.assign("ZNAEICLCXPYMZKGLLBFJBTPVQSKHWZUKSZJMDPKRXNXUCFRXHOTAWPRRNVIZLXGUYWOXOEKOSUELFSCCKILTGFURANCNQFDEJIRCJMNEZEGPDRYNEWAWPAPKEXNQMZITPSYBOTXYBULYZDDBJSQSJQQAVNEIFXAYBOMGWIXMYTVBDHGDKETZKLJFBVUPDCHTGRHSCJQHLFHZVUBHMWTQUWMFVLJQQFGBAOGMAYIMDA");
    msg.vnamespace.assign("PELXMXQFMZVZOAZVSIUDFJNKGCNLRVCMTERSXLB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QHUMLYRHBZWDCPOFZYKEOFVOJFVWRVBHQCDLJGTOMEKIIAFHJUUXYKRSEZBNCGGCIXVVMOGLNVERNBUJYTPWIZXVZMWCEJOGEXAKAYSBZVLHKPBQRIBJHASYOFLSELAJLLYWJGIQYTMHMXUXPZHNDMJHMFATTSZOITUSKOWDJET");
    tmp_msg_0.value.assign("XFXCLGCLIGMDXGAOSSYEKTHWJXALGYYKEJWQLNSGVDSQYOOMTEKITLXUMZEFBSZPMVFHKOHSIEYDRUPTYLLOJIKJJHXTPOUTVQHIWWNJCFQNOGZVZXKKCNCBYPLJCQVZPWFYFAUJQAPBUOAHGGDYWQMWVZFFQBTXBKALSBGECNSVEHQCXNINLOPRDSDPZJKPMWERRZFIAAJBUITEDUTYRTDNNQMURHUZVKSVUBHMRHBAGMWWBENRZM");
    tmp_msg_0.type = 35U;
    tmp_msg_0.access = 36U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YZLOPKUUDMNAZKNRGNPAWTPQFIGLOWRAUFDEYGRJAIIYSISIJVXBVUPELCGNUWCJKBANZSFLGCGWWHUHVFZMCOEGK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RMUZRGSMQXIZCBBODMN");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredPitch tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.534661812277;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 53348U;
    tmp_tmp_msg_1_0.custom.assign("DTGZHFQNYGXSNXULNGMXKLWRMRLJDHDBCZKTMDORLOGLPYYANHKMIHIWKQOVSEYNVFNBUDJDMCAVMN");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Map tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id.assign("MFZPUTVBHEWZWPEIRDYDBGJXZCSCYNHUUDJUWDQQLXUOYFVBINQMMJCIPZWLORRAFNOECPONDTECDAAMKWQMPVYVJGKNBFIK");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::EstimatedState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.lat = 0.770716880536;
    tmp_tmp_msg_1_2.lon = 0.411685318794;
    tmp_tmp_msg_1_2.height = 0.804288527999;
    tmp_tmp_msg_1_2.x = 0.23418100032;
    tmp_tmp_msg_1_2.y = 0.968745549532;
    tmp_tmp_msg_1_2.z = 0.346275588301;
    tmp_tmp_msg_1_2.phi = 0.163660867983;
    tmp_tmp_msg_1_2.theta = 0.445990113602;
    tmp_tmp_msg_1_2.psi = 0.37329911851;
    tmp_tmp_msg_1_2.u = 0.124689914594;
    tmp_tmp_msg_1_2.v = 0.368143599593;
    tmp_tmp_msg_1_2.w = 0.757069217085;
    tmp_tmp_msg_1_2.vx = 0.988909662756;
    tmp_tmp_msg_1_2.vy = 0.585725294715;
    tmp_tmp_msg_1_2.vz = 0.113688369777;
    tmp_tmp_msg_1_2.p = 0.998064115649;
    tmp_tmp_msg_1_2.q = 0.987347974817;
    tmp_tmp_msg_1_2.r = 0.236245678523;
    tmp_tmp_msg_1_2.depth = 0.75748918162;
    tmp_tmp_msg_1_2.alt = 0.964009231246;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TIIOETUZEKARMXJCCNIMSDBBQSKMQHOFRLLJDMBPGPXMBUVXHXTTSYJHZBIQPWZHVDQNWBRVKRYXQTFMFJXGHAKOIYYECACZRZELVCKKWYKOWGGQYQIXWAWZTKLRSNDKYDWLICBUVPULCHCXZROBJRENHEGZOSW");
    tmp_msg_2.dest_man.assign("ZKEKRAIBFGACYKYMWRCLNKWNHQUMMOTTDJTAHEZQYUYQHUJTMTCKMFPVXIPCNEWVATPJIECKEYORXVHOAERPBYXSFVMMWDBGQJXXFWLXRLOJZDDLNZJYBTAQLUBWXIZVJSWFQQGGVT");
    tmp_msg_2.conditions.assign("IUKHOEOFUTBWYNXGHXLCXJFFNUVGDHTGUBYKUXAPQOFOSTDIJLOCILPDEZMMZTAYLOWNXMTXZIHVCRXAAKVRUPIPCVIWARGNPTNNKKZYGIZXBXVWVBCQSYSKBPGLZORQEREEKSMDMRWIUUCYHTMVGQWFETQNMBCRWQJNLRHLSZDCZKQQVQRLVSTIDUDBHBCJLAESFPMRTWUNSGYFFADYPNKYAAHGSFJSPWOEWAMKXDOOEYJBZDJIPJV");
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
    msg.setTimeStamp(0.685434944727);
    msg.setSource(20647U);
    msg.setSourceEntity(75U);
    msg.setDestination(4606U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("VPCMDBEUMGRVFWDBJFPMHOWVZSCPIYGMZJRWVFBAUEZJIOQVPUNKLQNZUXVA");
    msg.description.assign("NSTHHQAODYPGZHIKREBCYKQVHFVAZQDCSQRWEVJUHEPKASUCULRIOBOZADECRUGNBCSPLKAQFCVWTZOADGPOZSURO");
    msg.vnamespace.assign("ILVHITMFDZGMRLZDOAJAVMTWFGJZVDPISOEPYTACFQELBSNQYWHEYYWPFEMNMHQOXJBBSKAEFORDHZGZDXDQBTZMCYCORJJYOHCIEKAYWJO");
    msg.start_man_id.assign("ATBGDZJZUGORWEQGBNQBFYWFPZRNRLHJMCNLLOADSCOAESUYPFFTYSEOVCJODJWTLRNRDJOFXIGPKGVIPFOHGRAZWIHIYNLKSZCQCGWVPCADFIHXYTJBEOUXL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OWKXQSWNAIIUVEXPKPTMOLCAABHXPVSXJKVDYYNRWUVRMQXHAJFFMXKSQOLSFTCTTISJWDWFVXNNWHGYTAGYPGDIPFERYZJDO");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.86588248321;
    tmp_tmp_msg_0_0.lon = 0.30447813777;
    tmp_tmp_msg_0_0.z = 0.230075610574;
    tmp_tmp_msg_0_0.z_units = 194U;
    tmp_tmp_msg_0_0.speed = 0.618191162395;
    tmp_tmp_msg_0_0.speed_units = 134U;
    tmp_tmp_msg_0_0.custom.assign("XBAJENIKJZBMXLQUQAREOAYCOST");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::MapPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.338187496251;
    tmp_tmp_msg_0_1.lon = 0.837587493685;
    tmp_tmp_msg_0_1.alt = 0.975181077434;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RQJIVFJKABSCIXSZNUTPJSRDWAOYNOFRSTRUVEPZHFQWQREKCJBXUXOHSTNRZNRSFSKTVAQDAYMPCUDQOAKGTGNGXHPJEYYYQLZWYWCHN");
    tmp_msg_1.dest_man.assign("GTHYCQBNLOAYPAHQIDZLNFOGTBXALTDVJYKPURSGJCMORKBHGIVAKXWOXPXOFHITQMPSXCRZDPSDAXJNDUDGSGHTZFGNAJEMEISUTKWWRCOLDYJUWTDPHYQBBPZVHVRKDLGFFELZVOXVEVCVNSYIBQIVSNKNELCMLIBUJCMKRZSGUMAOIVPWTOOXEM");
    tmp_msg_1.conditions.assign("KFFQPUHMVZWRIOHFJUOYCEXYNDAPSENOXDXWDVQLSKNIIYDQWVDZKIKVQOP");
    IMC::TrexCommand tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.command = 96U;
    tmp_tmp_msg_1_0.goal_id.assign("LXJJHZIFFJXZLJRQTXQSRZRSJYEETHVGNSSYQCLLMPYINNJFMLCYNCSJXQWKODETKMADXWUXGKMZVBNYUSLTGVSTZESNROVVXWGKFACLADQVLWUWKTFJLBNVPZWOPUHMDIUCFOFAGEPOYAKKMFEEJOBPCCBMZMHNRCOZJ");
    tmp_tmp_msg_1_0.goal_xml.assign("CAONDNYMTVDDMZTTHZGOPSSAMXQXSFKHOPAOFGPXHIOEVOSWBDRHHPSFRWLYNDTZONHAAIEEJOJTWMGMIQLTQCIYLLWBHLVGYBRYPEJFKUCTMVXNPYYPTLSEJUZRPRCSVULBWBDHKUVGEPWUBFZJAZOQBAORLFUVSWNHEGFKWJAIPYDYJGLKKBGSEMRMDUVEQXNQZJIIRCCWICXZLZXKKNCQTNUAEGSIZUQMXFUDDFBNQIBJGK");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::CcuEvent tmp_msg_2;
    tmp_msg_2.type = 251U;
    tmp_msg_2.id.assign("IVDRDCHFWXGDZIMEIQCUROXPBVUMBLTPEQNDIXFTBSUIXWEUHKPZTVQSHDQCFSZJCRWBMYBZLEFWVTLTG");
    IMC::FollowTrajectory tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 35862U;
    tmp_tmp_msg_2_0.lat = 0.498355557573;
    tmp_tmp_msg_2_0.lon = 0.683827836303;
    tmp_tmp_msg_2_0.z = 0.333241292416;
    tmp_tmp_msg_2_0.z_units = 8U;
    tmp_tmp_msg_2_0.speed = 0.405957565552;
    tmp_tmp_msg_2_0.speed_units = 196U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.x = 0.946768699603;
    tmp_tmp_tmp_msg_2_0_0.y = 0.98070646341;
    tmp_tmp_tmp_msg_2_0_0.z = 0.824454666677;
    tmp_tmp_tmp_msg_2_0_0.t = 0.240825683239;
    tmp_tmp_msg_2_0.points.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_tmp_msg_2_0.custom.assign("RIIWDQZUVIIRQXXWNEXNTCINVDBOXTHKTZGNFHZKERSGSYKMBNMVRLDBTWKUCCLVDLJWAPYNN");
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.833704332523);
    msg.setSource(34645U);
    msg.setSourceEntity(212U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("QDOYTQLHYXGRARGWRVUHBWNQCWLILLLBFPNMXOMMEUIXPCZEOJDBAVEJULPBHPXOZKDELBBLZKRVCUVZDTKHZBVTWSXZNXQFQAEYJRZXGPANDEUGPMRQIMYJNGNIRDASSIVSYNWJUJZYPSTAFATTQOIFKSYDHBOMYAKGJVTQWFUEHSXLIMDMKMSCFBANNFRKFOTCFCCERUCZSJXIGFEVTOJLGQOXQUDUWKSICRAKGYGVBHD");
    msg.description.assign("USIAKZQZVADIXOJGCPGZNZUGWRLLBVPRDOPVGOJXZXHRBPBTWQLRSYMHTEUUERNLZSHPCPEYJXCPRJTENSMFIQKAEHLCIOZFAMJKKWBYVFLJJULORTLSJYXMI");
    msg.vnamespace.assign("CFRMEOLXUOKWOTRYJIBEKZAHAJKKXCHUHUGDPEVVRYPPFSXMMNIIPWASDGDPVBHIAXZRTZISJBPWSTHLWQHTFZZEOVPOLIABAURBQVDLUSNDKXFSWEFSZZVSKRBJPVQCMZXPGECNNMH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TFVMQGPLJGTBBBFQKHANZUQJCQMVITYNRHCRURKDTXTVEBDX");
    tmp_msg_0.value.assign("LOAEYQNDUUFLQMSDICOTFXWRIPWDVPBAEHNJLRYHNIMQAFBPVJSAGBVUCUGMSOOPILMNX");
    tmp_msg_0.type = 206U;
    tmp_msg_0.access = 82U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XWWAMRRODBDXOEFKHFOXTXBCEQPGYSWKAUHPIJYS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("EZQLIAWMQHIPFWYQKVCJPSWMARKFAGIVJEVKUZFECPSBFBUGPQROSMSRLRCCTROHBEUUSBGXSKMDHADZGDYZMPTZGRLQPFIUAJXSNUANYARBNLNXHVIXBDIVXDTYPVQIEVXCHMDWPQMEVATWNKAJISCXVDODKJZLJOPMRFCUTNYCKXCQOZTTWUEJBJAYEXRNWDZZOKSGINGZBFYGBUHHEOETOCFYLBXOYLWKVJHIHJTPWHNOLMMT");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 25856U;
    tmp_tmp_msg_1_0.lat = 0.904487677024;
    tmp_tmp_msg_1_0.lon = 0.337740542109;
    tmp_tmp_msg_1_0.z = 0.670357028394;
    tmp_tmp_msg_1_0.z_units = 3U;
    tmp_tmp_msg_1_0.speed = 0.663057717838;
    tmp_tmp_msg_1_0.speed_units = 146U;
    tmp_tmp_msg_1_0.bearing = 0.245112604162;
    tmp_tmp_msg_1_0.cross_angle = 0.765818166574;
    tmp_tmp_msg_1_0.width = 0.968404366291;
    tmp_tmp_msg_1_0.length = 0.547842385927;
    tmp_tmp_msg_1_0.hstep = 0.41983146279;
    tmp_tmp_msg_1_0.coff = 115U;
    tmp_tmp_msg_1_0.alternation = 36U;
    tmp_tmp_msg_1_0.flags = 86U;
    tmp_tmp_msg_1_0.custom.assign("TUETFDJVQFNEMVJKIRUKIWUQBCQZFCHHNPYHELPPTDDEVXVVQZYLPPOUXBYOXFWJSZKQRASFCHPKVAAAMGHUPZXVEZIAYZRNTNPGLCATOQPKNLZWMUBIODKFXXRCOOJMHDMSLGBOWRENCTQSRNBWSOUBTSLETYGHIUNWGLUWDKVJSYBIKD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DeviceUpdates tmp_tmp_msg_1_1;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.942188421573);
    msg.setSource(3540U);
    msg.setSourceEntity(39U);
    msg.setDestination(55907U);
    msg.setDestinationEntity(192U);
    msg.maneuver_id.assign("YTPZWMRISJSRMRCLRMCFTYLPUDDMCOKLVHYCEKMNSEFARKLGLYJAOKPSYXCAQSERLOPPBLKTGFVGRVCZGOHTSEJJVSNKZBXTXLBDBIZIXRXXGAMBFPYQODULNZITMYCXQOBHOPVNPJZMTDUDGYONFUABQOJQANREUIVOJHWXACAGKEPQUXHVINLSUVEGKJEPGTRWNQMKNJ");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 4067U;
    tmp_msg_0.lat = 0.25288999407;
    tmp_msg_0.lon = 0.202350930929;
    tmp_msg_0.z = 0.718370236097;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.speed = 0.770496213975;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.custom.assign("LWERLDAMRZPXIMYLJCQARIHGYBGCPCGCWFAFNTWJUUVNHDGMOTDKXBTRSSEOTYDWODWGYSSUHXOPZVIUSTZOQABLQEOXRJFUAINIKLEDXXCWPJATBBXRNUVKTEFFCIKSOMEZXSNEVVQUHWEYBPHKTMPTQYJGWENPDKWQZLFFYAUYVKXQZLINMICJHBWD");
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
    msg.setTimeStamp(0.300222550968);
    msg.setSource(1185U);
    msg.setSourceEntity(50U);
    msg.setDestination(65445U);
    msg.setDestinationEntity(141U);
    msg.maneuver_id.assign("VHTYLUTBPNMAR");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 3773U;
    tmp_msg_0.lat = 0.257530420924;
    tmp_msg_0.lon = 0.200723077159;
    tmp_msg_0.z = 0.530243565737;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.speed = 0.319650123814;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.duration = 4532U;
    tmp_msg_0.radius = 0.715088783852;
    tmp_msg_0.flags = 34U;
    tmp_msg_0.custom.assign("RNLDORLNMFJGTIWWLVYEDWAHTKLHWBEJFCNAFACQOCJHBVPYYODBQERKPUYEYAJAEHYXZXLYQDNGUOAXEUXTKAFZQLBFIODGWWPTSNJRKXHHGRSMXPNUZLSKZIFSRUWJDBYQTPBOLXOPDHIAODFBVWPBSRBYMIWZOIKQAODMJVUVUWCQNLXCXUZTZFFVRSZVCVMINCYSDGEIGKIUMCQPPEKKBSRGNHGGNLCSKEQJ");
    msg.data.set(tmp_msg_0);
    IMC::CommsRelay tmp_msg_1;
    tmp_msg_1.lat = 0.82441486536;
    tmp_msg_1.lon = 0.0237142380145;
    tmp_msg_1.speed = 0.415511785583;
    tmp_msg_1.speed_units = 59U;
    tmp_msg_1.duration = 57877U;
    tmp_msg_1.sys_a = 9561U;
    tmp_msg_1.sys_b = 13346U;
    tmp_msg_1.move_threshold = 0.672598633883;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredRoll tmp_msg_2;
    tmp_msg_2.value = 0.648015962368;
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
    msg.setTimeStamp(0.752917377647);
    msg.setSource(36913U);
    msg.setSourceEntity(176U);
    msg.setDestination(51731U);
    msg.setDestinationEntity(49U);
    msg.maneuver_id.assign("FRECQMGIQRWKMXNLHQ");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("EGMMTZAFONYHHBHOLJNIAJBPXZRMVTJMVWMTCNLFQJKKKKBKTHGNSCQRUGXDZRSDDNKTZYNWPFFJYDXIIEMYACGEWUQPNJBAWWSEWVNIEROGVVVCRKWOXIITWPNSFSXQHHDYUOHJGEUSGEKPBEPUTLWSVRSAIGYCLPVDFIOOMUBACOAQZZKDOHSGQZGNQC");
    tmp_msg_0.formation_name.assign("HPOYJRRKIEZHVDIOTRUUXXQLIGHHTPMFMWWBSNFEUGTQFNBDMLSQQLPXOXKHGTINILMKWNYQVDPDINRKGHFPSLSTCYLIRSJUTQNQPMDWFCCCSDMSEJLJEXWUWHXV");
    tmp_msg_0.plan_id.assign("TPCERMXAKPNKOVKOTQWLNTWBLODAFGPHDRFPKZYMZBNKGXHTYJDWDGNDTJILPOSMDQTMLIEXPAGONSJGQQWGXUBQCENFAIJESQUYZMVGYSAIMXMRKVSUZHSYQGJDWRUVMFWQOFRZEASRIILQVYJNFVTVURTEWOHSHFOYFLEBAKCOYVHMHIJZUIBVZIDBPWPSYXUEULNZTSLVZMRAXBKJRCKYPHECWBADHBCFU");
    tmp_msg_0.description.assign("XQFEGZKMEOJIJRDAAVKNCXASVHXDWYHXECAEYHFVGNDIVPJSXLVDIPLRTOTMLDGEYGCOLSQUOJQBVPJYLKDNPLMPBBMHSIYSSKKWFIHTYMTOWZBJTZNUNKIUAGHWCFYRDIJXUENZXETPTFPUIZRYCZOAKFBGQWRDWMJOQQQKHNXCCSTOEUGBHRHQMCXKPPVLZTMBBWSSLCPQLVFWZYFWKAMGRQRGHDZJCRT");
    tmp_msg_0.leader_speed = 0.252414945137;
    tmp_msg_0.leader_bank_lim = 0.318512403887;
    tmp_msg_0.pos_sim_err_lim = 0.288919005044;
    tmp_msg_0.pos_sim_err_wrn = 0.605163706193;
    tmp_msg_0.pos_sim_err_timeout = 7307U;
    tmp_msg_0.converg_max = 0.887769950177;
    tmp_msg_0.converg_timeout = 11516U;
    tmp_msg_0.comms_timeout = 10928U;
    tmp_msg_0.turb_lim = 0.609123849751;
    tmp_msg_0.custom.assign("ACMWVWQKOLFSJPKOBTNQTHGOEEUFQSLNZEUYMRTRTTYNVRBHMJBAECPAYDUIACOOYUHRCFIJVNXPGKVEFHKIRUCFDYEIJMRKBWJIVQGABIJDHOEXJQDKRGYOCLTCQGAYULLQDCXYPWBIIDGETOBZM");
    msg.data.set(tmp_msg_0);
    IMC::FollowSystem tmp_msg_1;
    tmp_msg_1.system = 32667U;
    tmp_msg_1.duration = 30546U;
    tmp_msg_1.speed = 0.158337076204;
    tmp_msg_1.speed_units = 44U;
    tmp_msg_1.x = 0.843898193188;
    tmp_msg_1.y = 0.300720964321;
    tmp_msg_1.z = 0.533856738789;
    tmp_msg_1.z_units = 249U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredVerticalRate tmp_msg_2;
    tmp_msg_2.value = 0.508153723946;
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
    msg.setTimeStamp(0.333488687808);
    msg.setSource(44386U);
    msg.setSourceEntity(167U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(33U);
    msg.source_man.assign("HDKJZBDQBNYQELBFCDCHPPFGXVIBSOBIZXUWQYPFHAORCUOBVSRZSUQEMTXXOPFLIXOAGZXBZMOQQMDWRHIOEHINPFKIRRESXHSGITSWOPAVDDCNUEVAYQD");
    msg.dest_man.assign("PCBFBFUHYWMITCUMDMBLNEKNXOQYMYZAHPPJIXAKSHUWDDHYGGQYFLVMJMXUCVXZTKIQDY");
    msg.conditions.assign("KNEYJGAVXDNYBDVVBPHSHOACVBWMXTOXKAYLNVAWCKGCLIIIRXNGEFWRQODXIZTWLCPAGRNUUJWEVTFUPHGNGSXETCBTBPHJMUZSGFAMQIUQVLPOWJRPQAKXFEOFRNRADOJMTSRQEOMPFKPRDMBTDHBUDQOWMSVNUGBZKTJYEESFYZTYJCHPSXILTIPEZVHYLUHLKHGHBIQCSKLWJQCNYAOZM");

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
    msg.setTimeStamp(0.469467823282);
    msg.setSource(6404U);
    msg.setSourceEntity(31U);
    msg.setDestination(54786U);
    msg.setDestinationEntity(32U);
    msg.source_man.assign("ATHWCFLUGGISWEBDUMKSNSGWQLDPCTCPHPYJFELBMUQLOZPFQIYRAOQBT");
    msg.dest_man.assign("VJIWNVBOETCUOYUREBOFVETTQWQXTQLULMYQTKBMKRKOZBDHNIHQDAGXZPHVJPGETUAXPEACGUCF");
    msg.conditions.assign("GKWKGPWUWLJZZTTIQRABDOKPYOCUKTPMCMMIQBXWBLTDHEAILTKMXRGLQGNUDIRIGNLDFTEUMSQHVCSVLSJCVDIIWXUPYAVYFJXLHONUEHQHQCBKZFPEEPNAFOCHNWUBYFAIDARVXNQVCZTQYLOFJBYMNSNSSNMDADJTFFRRYEEJJTKADVEZLGHTXHIVYZOFGUPWRRWZXNPJSSFROQPKZGEJZMVMCMSOYWOAEAIBPBUXUG");

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
    msg.setTimeStamp(0.472839932641);
    msg.setSource(37165U);
    msg.setSourceEntity(44U);
    msg.setDestination(18981U);
    msg.setDestinationEntity(250U);
    msg.source_man.assign("VUKGGNWXCBNAZSINJJWWMAFRFTMJUESMTJYLPAVPTICREQCWCHGVOTGKWIHFAIJDEARCIVSIYLLKPVSFZRSHLEDFXWDSJSGIKYXTTXRNBGRGBOJBPCQYEBMJNOLRCFYHMNGQABDDAZQNZXELIPKUTSKUDFHOWLWLYQHFMKLVWSXDKRZAJPQEDP");
    msg.dest_man.assign("RLTJBXZBOWJNOVECINYFJWGAWTZEHGCRQADSTJLXQDGHQILHSXLGBUWZSLZYDVOBBWJBUQP");
    msg.conditions.assign("UBXVOWVHMQGALWKKQIMWACUTXTTBDASMMBJZPKQRNPHFEBBPNIFAAIYJDHJPVYICZCPHGYFHLRRFLPIRCBXXDQZELFSXYCRRQGFVUWDHGGLXVINYJZPBEETUDAENYTKIDWWREBCOKIGMBVCWSXZEUALOVQHWOMKXMDTCKJSJQEFZHCMNTXLJSOPOAAYDSDDUMTNIKEPFWILQZRSGUAPFTGUNYBCVSSJGNNZFRTHKJZOEZVGYOMVSHJQOXLUYR");

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
    msg.setTimeStamp(0.230569971592);
    msg.setSource(15404U);
    msg.setSourceEntity(58U);
    msg.setDestination(42127U);
    msg.setDestinationEntity(138U);
    msg.command = 206U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RVFFMYHRRUVMZDKNPBDIIHRCYOUTLALGTPJFDHWZCUNZEBOVVFRMJXPOJOQGJVMZSASHWGYHABXKCXABBNHAUOJODSDDIEVCJQVKLYTIQWEMOMNSLSBGPLIJQIFTTENBWWNVZUANPEUEGDQRNAROETXVLUJTLWPKDKXYYGLTKBLRZMEBO");
    tmp_msg_0.description.assign("XTSNQZGVLGNASGJOPDGGWBWNVUBUPKXOMCYUZUFZEJTKPWSDPKYSWGLUQRZNHFFUCQBLJXNATIQWGTJQJWMPERMDDFRSLHRKJKDOUVGZCHYRYRYWKRMAUSELDAHEYXRBPXHOGNEXFYCCTAYSPMRGLJVVVBQNLPQXETMHEMHIJESCAYBQAFVMCTZIHNOZPTBTX");
    tmp_msg_0.vnamespace.assign("QRNWJQTJWZENJBXEKFCFRRUVIQZBSZHFJIONAARLQUXFNWQWZHSKYCYEKQTVPNIVJOBPGEBVUJBDRAJLILWYULQHPSNNPSXFRKCFXMUELCHOCDMSVGFMSQBDRMFGILZZAKBAOITLATRFNHWUJTUCXSWKHVBUDWGTHTQXDRVNWPHWOADXMPKHGKEDOLOKG");
    tmp_msg_0.start_man_id.assign("KZYODEIECYSMUIUGFMDNZBPHAHYMQJOCDWDCINMQZVKJDUSUTKVTMXBUFGFGAFBBUPRSPQFTJBCNHAGSZOVFLDTNXFMVNQOWBPEKOSVYT");
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
    msg.setTimeStamp(0.240802745715);
    msg.setSource(18107U);
    msg.setSourceEntity(184U);
    msg.setDestination(49572U);
    msg.setDestinationEntity(219U);
    msg.command = 169U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LEVPUXKVWDBFKFMYYKSDXNEVMJGLSISTXHZCOWLQFZPMEOMBVHIFGFGQMBJLYKNRSRPTMTVOPDEJGWBIQXDCZEGUROSRWRTZJIG");
    tmp_msg_0.description.assign("JURSLWCVPDFCSFOTIY");
    tmp_msg_0.vnamespace.assign("IEJKLWDKBAHKIFEBXHHEAGVWHKNOPWRUNLPVTDLGXIVGZFXUJQNHDROZPIQYMTOURYGVVJFNGYMEIFSULWPOSCHWQOMMOXLRLLQRNMUEKTQAFVNGCUDQXIJUDYZWUALAX");
    tmp_msg_0.start_man_id.assign("MOQSWOYWFYBKUZUDIYAWXMLRQTOBJBCPUZJMSVZSLJNQKCMPEPMGVQERXNLFENYIFXHDOKVHRDLVRJFYKHTNPMGIQDZURUVVBMWCGDULKTVBGXGHEBJJADRNAVQHZYVPAQTTVWTCGYQQHPPOHFJIWHOLXUWGXESXH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("OVKRLHCMUARTBWYALXIBJXOPTYZYPLPZUPCLSFUTIQYDJASJMEWBEAQIEIMTJJFBZDTMKIMLRFNHLJPGRIURFQDAUFGXJDKBKQMRHYOGHTENRLIICUSZBVOCEMEFBSDTQOSNHATXNQPFGUKSWRJJD");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.703756786999;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.134264002512;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.198733789472;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 3U;
    tmp_tmp_tmp_msg_0_0_0.duration = 6895U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 43059U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 7096U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.890282405532;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::QueryEntityState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IDQJCOZWSDVRUYTABKBAWKAMZXPWSXQPMKOLNDMUVBTTJFOOQPVIQOQGPSZUUGJMUWSNYXNJPDEIJQZBSARXWCDFVOZXESCXVRPUQVFOINKKYGRLWATFYSUFNMCUZACBCQWEUYSEGLYNCOFYKFHHMGULFERJLHMNEEVRYQPNTGDLMHEAJXXIRKRCADJWHIERFEWCZKCBKVIDPMHQHIALTMJTLSXNHTWBZHOGLHGAXDFY");
    tmp_tmp_msg_0_1.dest_man.assign("SHNJLOWVAUQSFFJVNKXMYMQANBNMVADPXGGGBRWBYZJFHFLWYUTTYTEVVQKETLFPTNQIATEWKSNFASHEBJHIIOHXQYXBAQBVICRBTXABQOCWHDWOPGOKVSPBGJJXQ");
    tmp_tmp_msg_0_1.conditions.assign("PEAVYWIHCDAPVGIBOSXKOCNJTLUBNAOUTARHLYUHOITSYLDGPSVOYBZGZUQDSXPZPHXGEJTVJIHDJMFFQLPTOKZDVHAVZQDTVCAMJMLNCMFZDGFCRWQXKNWWFXRTEVRIXNOYRRHEGZIQHWQHNAXKGMJSDGPISFGEQSNUZTKDKBAUZFBZCYMEJXWPNWSPMTY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredRoll tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.404102796996;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.604827885078);
    msg.setSource(27532U);
    msg.setSourceEntity(40U);
    msg.setDestination(27086U);
    msg.setDestinationEntity(109U);
    msg.command = 121U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HKSELLUKZHQHUCGVCCBRUROIJNGTXYZAEQHBJWPRNAGFTYTANDLWDIZNSHVMRTTSMRHBBEYLDCPQJZRSHASWAIJUXGMVNOJBVBWUGPXGEHJW");
    tmp_msg_0.description.assign("IKQXQTKOGIHKHHJPRPNTWRDIOFRCBYANBSKYRJDYDNIKUZURCQPGVLDXMKGMHWVBUEOVPSTSWRSBNMYIFJXGNMYCUTLWCVTEFAAZORIUSSEEJWMJIHKLDXVXJUBOTMY");
    tmp_msg_0.vnamespace.assign("PQNVKNUEKPMVEWLCFLEUAMNXRGSVHQUFKDTBTYKDQAESIZRQGWAOVSGPISIGWHHODUWKFYHDXIOPITNSNGXWYVRMMJBWZTAMPPSRQOSTGDJUOJYBDNXMVWTO");
    tmp_msg_0.start_man_id.assign("NTPLOUJDSDRCQZTATMXIAIENPYGLKWXCUWVMHKUFPHUXOCRWBYCUBFELNIRGPLUZQQOIBGAEPXEWMQOWZQFJJYMVLXQORQZKHGAIGP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BSOPDDRFOZSLCUJMGHQORFIZLRNNMGSIMXKYGVZQWNCDQXZBIPRZOZMTBCHLOLBKRHKVJFHNVAGCXIYLGLSRPJDDJIGPKTQUEAGVFRTDAPCOAYSNUWOCFKLIMMFRUALUJYHCDKTC");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0459815031555;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0200355697976;
    tmp_tmp_tmp_msg_0_0_0.z = 0.976288354946;
    tmp_tmp_tmp_msg_0_0_0.z_units = 136U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.614394466545;
    tmp_tmp_tmp_msg_0_0_0.duration = 21189U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.207153539733;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 122U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("AECAJJOEBOXIVCEDOMXJADSZHJEPNWOLHYQMLASQDAREXZGUYQGTNLNSFCODWHAWWRCEUWHTKNCMOATFYOUWSTRCRNUXVPCUHPLRQRLSKBDVXMVCDYTBFGQLPKIMPHTGNILKFVPFXYZDWFBKTFSMSQMLZRATWOUEDCKQNVQRPTHAEURIQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Voltage tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.698365029026;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.406127181323);
    msg.setSource(61083U);
    msg.setSourceEntity(112U);
    msg.setDestination(52372U);
    msg.setDestinationEntity(156U);
    msg.state = 17U;
    msg.plan_id.assign("OEQLIWKGXKXBLTCZBSMLXJSTNZUFILWHGPVJDBIPYTLDSLDBKAKUMIVLMSDGHCEFGRTSXRNQCQHBKIYBBECYURYWAOEEQUDZBDNOCJUEWTFLPDRYTPLUIAZJHKIVAOOOJMBIZHGEEOFWPVAEMTYOUCZQIDFNXVGSOJEJRFQNAXGSDJZCKOYQPWHBYPTURPHKNTGNMLFYNRMGTVSZXANXCZRWRIZRKSHVVAQHHXAFQCCJW");
    msg.comm_level = 204U;

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
    msg.setTimeStamp(0.780463890691);
    msg.setSource(28773U);
    msg.setSourceEntity(105U);
    msg.setDestination(15727U);
    msg.setDestinationEntity(20U);
    msg.state = 237U;
    msg.plan_id.assign("VNALEIYDQLDBWIHKFVRKLTMZNZWBRCMWRTXPHXEWOTBKHFURGKSIJQBOCSISZOCWHZLRQZQFMNDFPXJVVOAPYA");
    msg.comm_level = 153U;

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
    msg.setTimeStamp(0.725364007205);
    msg.setSource(36105U);
    msg.setSourceEntity(133U);
    msg.setDestination(65143U);
    msg.setDestinationEntity(172U);
    msg.state = 17U;
    msg.plan_id.assign("UVPEGXXGHYMZBAMUKVODLJNKXVOUUHCOTOWKWDPVGNADIRNKZIIRYTLOJWMVEPCRPEBDHVFJSHGWPBVINXIQKYCOEBQZGLJDUELMRYPKZSQYJTRLRJJCIMGIZXYEWQZRXUMTEEEYAYQUPMJAYQTDHBAKUH");
    msg.comm_level = 15U;

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
    msg.setTimeStamp(0.988586332565);
    msg.setSource(13006U);
    msg.setSourceEntity(62U);
    msg.setDestination(20133U);
    msg.setDestinationEntity(164U);
    msg.type = 49U;
    msg.op = 128U;
    msg.request_id = 64144U;
    msg.plan_id.assign("QXQMOWWIJUOVLXTBAKSTOQAZGROKHTTLMOPJOEJWPJQXWPJJVCHZFLBUIYHRDFKRYLKKLTOGHX");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 15U;
    tmp_msg_0.entities.assign("UDWDXTDKOJOIGJYRCJFJBGODSOEFREKCAZEHHNIKIERFICPXUGEWZLVPTMDYZLGNOVNKQOIPPWPYBKNSTMLFMLIHCCGSQZBAJRRIMAXACKXIQBSJEZXYOYUAWVPSYZHXHXGDZBWPRUFMLMHRUUTHJUDYHEGFVWDDKNSLQEPYMRRLSK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UJCJQEJWJLNGOYHNVZTZETMQZRDUAULLEMAZNMGHDMJISVRGYDYKSRJGIMMIHHLT");

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
    msg.setTimeStamp(0.80501594128);
    msg.setSource(34958U);
    msg.setSourceEntity(212U);
    msg.setDestination(653U);
    msg.setDestinationEntity(99U);
    msg.type = 21U;
    msg.op = 105U;
    msg.request_id = 2116U;
    msg.plan_id.assign("JPVJLEMDTUCQDULGKQIXBRKYDBLBRACPCAFOKYYWCCGWRVQQVWPUVOLFUJBPFCNYZMOYNZGXNNFFDD");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.651339951173;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SNEDTBDUYSELIQRQFAKVOKNPUCKSTIFULPDYQVFOMWTVYJWMKYTDBKKMJUXNUPXSRZPJJB");

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
    msg.setTimeStamp(0.907864965621);
    msg.setSource(29222U);
    msg.setSourceEntity(164U);
    msg.setDestination(53280U);
    msg.setDestinationEntity(49U);
    msg.type = 42U;
    msg.op = 81U;
    msg.request_id = 32641U;
    msg.plan_id.assign("AJYXVNENCMQCCMKWGMOBUTHXIQHMZBJBPPRTIEOUNCJBIMQUVATAMANFZNWLHGOXEDGGXIQSKBPPZDZHAGNHYWDWYIFAKZNWZQKJLTPBACAXUKEFWSHZYMBIHVQNKGFFSJHRYIOVMCQTCLLNEYOLRCDSXOIIXBQPRVYNTYSSSVJSDQLDDHPPREZEPPJMRFTDGRASKBYLR");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.747223890203;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GGZWCJRQTVJKHKYBUMVXSLPKQZDIAUWZMCLBPSFTOYBLQFIZYVTKSJXDGJEOOVIPEJQQYHAGYHKNAKUMBRCJRKTMUHSBGCQHAIYOSPNLNEQSWCDPZVXAMJJYXULWIHFTGVAKHBDNZFNNOLPUQLVYCAXNJ");

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
    msg.setTimeStamp(0.687799919264);
    msg.setSource(1450U);
    msg.setSourceEntity(102U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(74U);
    msg.plan_count = 46884U;
    msg.plan_size = 1072518888U;
    msg.change_time = 0.777484262945;
    msg.change_sid = 18913U;
    msg.change_sname.assign("EADBJNJNKPUWTTSJBKKZVNULGSIUPHCEPFWPZTHNSNYHVOCRESLCAHVXEZUHJMHYXKCRLRMPQAWQGNGBVDXROMLDSBOYDTAFXZESEVBCVMDYNTHOQNKHWXLOYUDECCTORAPRJSCJZYVTIUGBWIMLVOFYEDFBMLGCQFRZTQKQYAJABAHPQUHWAFZIZRMOMTLSKWXUJWRBSXLNTKXFGIIDGLIZBCKODQFIIWEAXJJQOGPEGMV");
    const char tmp_msg_0[] = {-80, -95, 74, -32, -111, -11, 81, -42, -7, -3, 79, -114, -30, -63, -62, -49, 5, 60, 69, -87, 50, 37, -66, -79, 72, 81, 71, 34, 49, -100, 3, -108, -86, -40, 100, 25, 46, 107, -96, -109, -111, 71, 95, -85, 92, 24, -77, 59, 86, -20, 80, 57, -56, 121, 28, -30, 35, -83, -62, 113, 23, -52, 48, -115, 70, 4, -122, 67, -71, -110, -64, 77, 97, -105, 56, 22, -87, -66, 2, 68, -65, -118, -111, 30, 82, -94, 0, 44, 5, 123, -105, -60, 86, -63, -25, -39, -35, -71, -85, 119, 46, 86, -128, -4, 119, -113, 120, -24, -7, -25, -90, -1, -85, -104, -80, -62, -12, 29, -67, 64, -10, 44, -44, 117, 20, -20, -61, 49, 116, -68, -119, 11, 4, -103, -124, -34, -61, -70, -4, -41, -114, -58, 24, -54, -44, -104, -98, -46, -22};
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
    msg.setTimeStamp(0.218142054006);
    msg.setSource(16157U);
    msg.setSourceEntity(200U);
    msg.setDestination(47210U);
    msg.setDestinationEntity(42U);
    msg.plan_count = 8781U;
    msg.plan_size = 3499072081U;
    msg.change_time = 0.586333363107;
    msg.change_sid = 649U;
    msg.change_sname.assign("RDJKYBXCZVFUJXJZGHMDCLSQNVTGUGILYWFGTTIPDSNFYUALMHIYPZKEUMPBTIORWDARGDEDBRNSUKAXTJRYDLSVEQVPIOJEVSJNVOAGEH");
    const char tmp_msg_0[] = {-78, 19, 117, -2, -110, -77, -54, 23, 101, 110, 106, 44, -116, -111, 86, 84, 53, -111, -46, 101, 58, -20, 5, -109, 111, -121, -104, 77, 27, -35, -19, 47, -4, -97, -21, -93, 2, -73, 28, 13, -120, -106, -82, 43, -119, -69, -75, 122, 19, -46, 75, -72, 7, -48, -50, 73, -123, -34, -56, 16, -58, 93, 32, -19, -93, 50, -95, 8, 59, -93, 27, -108, -39, -16, -50, 98, 116, -126, -70, -46, -54, -52, -79, -87, 59, 72, -69, 66, 92, 107, -93, 82, 59, -105, 25, 79, 71, 42, 4, -77, 26, 58, 26, 42, -91, -119, -121, -115, -7, -4, 18, -37, 112, 64, -117, 2, -39, 63, 107, 26, 101, 50, 63, -96, 93, -34, 122, 98, 26, -119, 52, -45, 21, 24, -97, 53, -8, 76, 67, -70, 39, -94};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DZKPEFHJOUPDYHMVQGCSLBPDVKVLGNCSSHIXDXBFUWKIWAZILBOJDQRJQDSVXMQVODTITUBURAHIMSYQIAWWMTYGPQRCLXJHXGJFTNFTHSCSEWRFPJOHKLZWQUKTLGAXLIYRKGYAGIKYVLAPNNLRROAFNMWXVFJCTWXNONVNDOBJZKUMCEETROCYZPHQ");
    tmp_msg_1.plan_size = 26285U;
    tmp_msg_1.change_time = 0.108522145646;
    tmp_msg_1.change_sid = 49124U;
    tmp_msg_1.change_sname.assign("BPKUNHGZAKFTZQXHMOETBTEZEPVWAPALLJYLPVTDRUVYFSMQAZHAIMSFOFNZASIJGSCZBDPISUXNMOCRGBBXERVXJDLCEMWWNLJWLGSSBHQVXLTDOMNRDFHTEHOHTJPIIEWMYX");
    const char tmp_tmp_msg_1_0[] = {-95, 74, -68, 46, 2, 121, -88, -63, 17, -35, 105, -116, -104, 96, 21, 27, -63, 59, -21, 83, 45, -59, 27, -114, 104, -23, 4, -80, -91, -86, 42, 38, 25, 80, -91, 51, -15, -85, 22, -68, -43, 69, 65, -94, -27, -67, -52, -18, -96, 80, -67, -24, -95, -84, -70, 39, -60, -9, -40, -69, -103, -93, 112, 111, -17, -39, 5, -92, 100, -121, 15, 54, 101, -122, -19, 21, 100, 84, 32, -58};
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
    msg.setTimeStamp(0.81875431194);
    msg.setSource(42482U);
    msg.setSourceEntity(9U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(110U);
    msg.plan_count = 41778U;
    msg.plan_size = 166166226U;
    msg.change_time = 0.620196651598;
    msg.change_sid = 3792U;
    msg.change_sname.assign("MROOZHDWLMVQZWQNHHERUCPTGTTIZIKYKTJBHROBSZQIEVQJQXCPOWNCCUXXDXVYLAGTUWKTFJCBSQBOWYNUQMFDDHZHTIIMJNWGPPFQFRBJZUSLFCYPSSSWEBNSYMHBD");
    const char tmp_msg_0[] = {106, -61, -60, 23, 41, 45, -76, 94, 44, 53, 72, -68, -80, 31, 9, -52, -47, 126, -51, -114, -23, -4, 11, -7, 101, -65, 38, 77, 11, 80, 120, 27};
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
    msg.setTimeStamp(0.480335378557);
    msg.setSource(36234U);
    msg.setSourceEntity(73U);
    msg.setDestination(48852U);
    msg.setDestinationEntity(78U);
    msg.plan_id.assign("OOKGJXIOYPRLDJPYVDLDHMAZRFMIALYQQXKEUUFAFDGAQKPFUUYAFBIW");
    msg.plan_size = 55791U;
    msg.change_time = 0.859242239042;
    msg.change_sid = 9543U;
    msg.change_sname.assign("EAQVKVBIETPCDWYUMYDNLBKZARQBUFTQCVMSGPEXDUYKXEXRRHWROXOQPQCGPJGRGWZVOFSNXIQIPCAZNGUISNLVBNVMLNWLJQJKFXJYRHLCJYMJHBBTPJFTYZECFCQZWDWEILVKFSDLTMBMBHPXATHTNDXHOHUAJKEZZGL");
    const char tmp_msg_0[] = {-120, -37, -45, -115, -128, 57, -82, 59, 90, 66, -57, -117, -44, -77, -23, -65, -35, 51, 41, 76, -63, 102, -64, 17, -106, -119, -31, 14, 119, -93, -22, -8, 104, 78, -89, -44, 117, 16, 77, -16, -1, 98, -3, -93, 61, -8, 85, 1, -68, -44, 69, 42, 47, -120, 14, -120, 23, -112, -46, -107, -121, 39, 71, 58, 51, -96, 33, -9, 97, 118, -84};
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
    msg.setTimeStamp(0.964527116267);
    msg.setSource(8067U);
    msg.setSourceEntity(172U);
    msg.setDestination(15185U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("BHWLVFGPITIKLMSHFOICHXWEWHZQJJKXXPTGMQZOCLSUYATNNIIBXYKVKMKJYZDMATSMLYJZLHHCMINGGKJIZPHKWURNARBASFVPCUPREXXPZDADNFEIPNZFCYBOOFUVETOXUSEBQQWSUCKNLDRDOMXVHIQSNXHBBJTSCSVAJUJZTYVJMKWQRDGFZOMWUFXYQFDBSQQ");
    msg.plan_size = 35128U;
    msg.change_time = 0.815962774714;
    msg.change_sid = 60964U;
    msg.change_sname.assign("EQXGTCDWXHVYRJAKAMKWTFBREZCPIUNVYZMIUCWJSSZJHCKOMTXMEABGNQWLNAPVPBYGLWNGQQKBCTAJHDUGJFXYMFKIVFLIQZRQXVINVZBLUAFESHHDGJGNKFSWUEHZBOMNXSXLOAGOMYCVWVHBOUXBJTTDEEKWOHNBEHVHEJAMLLBNOPRTIZTQMZUTGPFZSADYTIWGFRJPRNSODQDPUDXMWEYRDCPZKCQLORPUYSIFKSSQL");
    const char tmp_msg_0[] = {36, 58, -40, 32, 1, -101, -56, 76, 4, 62, -31, -3, -24, 42, 39, -11, -55, 83, 101, -114, -99, -109, 24, -38, -2, -28, 56, 123, -107, 99, 78, -104, 117, -76};
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
    msg.setTimeStamp(0.064774639724);
    msg.setSource(34743U);
    msg.setSourceEntity(34U);
    msg.setDestination(2359U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("OXISWSTCMHAQPXJZLARGMDTMPBYEXTNWRGCXWUKYCTVKETLVYAGMFIZEBDDDBCQLCZQUHSQPEPMJFIHAUYWSNUDXLDXKUUMEGHNWOJYLZIAJAKXJCFOPZWIEGBZFPQOABFGKBXTJHYVQDNWLHAGBYNTIANBPVZQKVJINFOOZRUPJUFEIRIFYRONOZZCHYSYNIWSDRVDS");
    msg.plan_size = 23162U;
    msg.change_time = 0.307316787956;
    msg.change_sid = 26677U;
    msg.change_sname.assign("QSNMKKBNXEDNNPMJJTPDLLYHUEUDZGQYQMRPFWTSKVCISOXGHQWHGUTGLYEYJBAXISTOXAFECFKFADMCNNLUPVOMSR");
    const char tmp_msg_0[] = {38, -26, 1, -81, -110, -125, 4, 2, 125, 108, 54, 109, -74, 41, -103, -58, 5, -36, -101, 77, -117, 18, -24, -70, -5, 92, 12, -3, -42, -14, 11, 4, 94, -44, -7, -29, 26, 113, 23, -125, -79, -67, -95, 40, 54, -54, -88, -123, 28, -95, 22, 1, -35, 39, -54, -106, 30, -13, -38, -107, 81, 93, -97, -102, -47, 102, -56, -91, -104, 53, 12, 0, -124, 32, 33, -39, 106, 73, 34, -71, 81, -36, -109, -15, -19, 116, 67, 40, 33, -22, 125, 113, 38, 103, -68, -115, 8, -48, 32, 42, -93, 15, 37, 116, -30, -80, -2, -57, -79, 0, -77, -115, -25, 78, -45, 102, -29, 18, -110, 116, 35, 111, -108, 64, 57, 35, -91, 25, 56, -57, -10, -92, -51, 91, 91, 6, 12, 87, -41, -13, 60, 85, 4, -112, -77, 14, 75, -90, 35, 87, 26, 55, 96, 24, 12, -83, -30, -34, 69, -106, -39, -9, 33, 101, -22, -18, -82, 110, -50, -118, 92, -85, -72, -52, 98, 119, -6, 8, -33, -126, -71, 24, 90, 123, 121, 116, 23};
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
    msg.setTimeStamp(0.765450392528);
    msg.setSource(27400U);
    msg.setSourceEntity(119U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(168U);
    msg.type = 250U;
    msg.op = 141U;
    msg.request_id = 60865U;
    msg.plan_id.assign("UXGRWFZXACXRVYNMVECLRPZNKIMAXRAUIDOBLCBOLHKBEYMBWTLCNMJROBQDYNFOCEZFJKVDIQPPNZSNJPFFOFMNHR");
    msg.flags = 48164U;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 495844141U;
    tmp_msg_0.status = 156U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KRJOPIBEIVIFFKVLYPROHUBEFLLIDNPXNATKNTDNOGVZRQSVFPLYMOZEQENUOBHXRIPNTODWBHJVDQOMTGYLUDK");

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
    msg.setTimeStamp(0.511245504544);
    msg.setSource(53860U);
    msg.setSourceEntity(29U);
    msg.setDestination(22745U);
    msg.setDestinationEntity(139U);
    msg.type = 70U;
    msg.op = 166U;
    msg.request_id = 37527U;
    msg.plan_id.assign("NTFIILPNTUPUWPKYGWRFDUVTOATMVXJMNTEBIDSRMWQUHKUKKZSTKRVPWHSCNAUNQSTKWQFCKSRNFXBGHQFHHOCYJEJAGPEXAVRXVYPMYXJCGXUZYOWIENOKUBEVZXCHQOJILDETHSBWSKVLEBEPQLPJYVGQLBMXZMLBOZJIPCDJVYDQSRQLUGAPSICFUWHWZNTGCKDDZBAHGRT");
    msg.flags = 22786U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 6600U;
    tmp_msg_0.control_ent = 220U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 225U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.840673013729;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 107U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.669265705063;
    tmp_tmp_tmp_msg_0_0_1.z_units = 65U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.419078814196;
    tmp_tmp_msg_0_0.lon = 0.783900368218;
    tmp_tmp_msg_0_0.radius = 0.643935859863;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 236U;
    tmp_msg_0.proximity = 54U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RTRMOAHLUCICBAIVZWQTQCMGVLEWPBHFENLWASWUJEOJJDNTPMZ");

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
    msg.setTimeStamp(0.897993724806);
    msg.setSource(63280U);
    msg.setSourceEntity(128U);
    msg.setDestination(56235U);
    msg.setDestinationEntity(82U);
    msg.type = 157U;
    msg.op = 75U;
    msg.request_id = 35883U;
    msg.plan_id.assign("RIWJTKEUBWKAXM");
    msg.flags = 20636U;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("EVFJZHMVUXLJDOTLJXNTWVIWDGDELPZTUZATXBOAHNQDUYBVTWLOYAQKYYTUVIBFEIPKCSPNICKIRQXVJYANMAFYATFOBLWBQSCGXVRTDUMHLESSLNMBMZURKLNPBVKMKJFEXHQOCSEZ");
    tmp_msg_0.op = 245U;
    tmp_msg_0.sched_time = 0.0563473789749;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("APGSSKMLZOYEDIUQDYFRGXJHZGYJKWVYCRCILXLCODOLVBQEGMXBFRINLYEBNPEGPCYOAROYQSBRZEJTNANOZCTGNMTVSMKOZFQPEVZMJZDKUFVYXSCCAHBEVTMQZXSKLFCNTBFAYJMTXUHAKGDRAUPKGLHQBHIGJIWVPJSLESIPTVHOJUSQFNSBVREMUXWXTCRWIODVMMODPTRKHBLKFQGBYRDHLDQJWZXHUEIUAUHAFJWQFPWPWIIWXNZ");

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
    msg.setTimeStamp(0.698206367799);
    msg.setSource(56279U);
    msg.setSourceEntity(175U);
    msg.setDestination(53366U);
    msg.setDestinationEntity(51U);
    msg.state = 11U;
    msg.plan_id.assign("HMSPEPYMBJWIPOKZQAGASRUKIOMOJPGZTUEARUNTKWMUBKAGUJLCSCBLVARPVZFUHYVIINQXJJIVMERIRSAZWCDLQDTNZSEEPEAXNUWPHDKGQDHTCAGNXXYDTFMOGRVSWHMKTBDZVYCFBKOEASOMUL");
    msg.plan_eta = -732834254;
    msg.plan_progress = 0.964171998548;
    msg.man_id.assign("UCRQZTKJVIZMXCPBKZKVDRENCYYWMRGGAOKHXYDENEUQBJSFTAKQFSHZWAAKUSPBDDYILERNHEGQLXJWCZXPOMGKWAEQFFYBJWCOLMVLLUQBOBCCVQSNPNNIYTPIIVUHGOGWNTEWM");
    msg.man_type = 42410U;
    msg.man_eta = -1293993790;
    msg.last_outcome = 57U;

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
    msg.setTimeStamp(0.371962499063);
    msg.setSource(3986U);
    msg.setSourceEntity(30U);
    msg.setDestination(58550U);
    msg.setDestinationEntity(225U);
    msg.state = 216U;
    msg.plan_id.assign("EVVCSBQGIKDLHOLWQZUUVSNGIMQIAEEGKEGYVLCPRFYXPAGRNREDMIHAEDECJNB");
    msg.plan_eta = 1899101930;
    msg.plan_progress = 0.186756059997;
    msg.man_id.assign("EKJLPIHDAMVHTOLPBCBSNLLRAQCBEYLSHFXFUXHEKPAGJYTCQUDOFBGIPSWHRIIPCKEPSJQVNVBMMWKRNLQFYGIUOYDYZPSMYAMZVVXAGHGLRSXQTMGPWSLLKRQJXXBDZKIKICUSZBKQTVOYYZKNVMHTDUXHOUTFUNZBWECJNOAATIXJ");
    msg.man_type = 13916U;
    msg.man_eta = -1416652476;
    msg.last_outcome = 89U;

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
    msg.setTimeStamp(0.470063480061);
    msg.setSource(20529U);
    msg.setSourceEntity(167U);
    msg.setDestination(7651U);
    msg.setDestinationEntity(181U);
    msg.state = 128U;
    msg.plan_id.assign("IOIZUCDOURWPHYUFYHESOGLJJOALJAAGHLGALTKUTTW");
    msg.plan_eta = -1483539901;
    msg.plan_progress = 0.792042395938;
    msg.man_id.assign("NIHOFNEEISDTGRQXPFVQBGIKJSFAAJKRKKXCKFPYSBGWGCLLMTWUVUDVEONNY");
    msg.man_type = 49850U;
    msg.man_eta = 377423322;
    msg.last_outcome = 64U;

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
    msg.setTimeStamp(0.168269908534);
    msg.setSource(57532U);
    msg.setSourceEntity(108U);
    msg.setDestination(55607U);
    msg.setDestinationEntity(235U);
    msg.name.assign("AQVSFYJYGCARIZAUUUDZKXNTZRPGTUXVTBYLLPKZOYOBUEJAASRDEARVVWMPVDCDAJQIDDANNWJQWHSWCMYBICYBXNTLBPHYCRLBFBWHGMDNXEFEYMWOWZBXVQNWIXCMUCOMJHPCOXBLLUIQPAVZNGDHGXLSFHJQEEWZQNGWVUDQKSKJJARKRXMKEHZNQNEGOTLOGPZUGPFFSSJSKLFRTMMBJRQCSKFTFXKOMEGUYHIPHIITFYHOVTEOCZRII");
    msg.value.assign("VIQVEOWNDJVIXRBMAUXHNFMDMAPTGZVYFEJSAUJISGZCZONKOMYZJPXJTYASOJHBZZTVVXWGWOCCLYFPEUNULQTXBNAHAAQALYXKTLISKPRKQDUPJPSOKWEYFELLIOCGGRRFXCSGIIVCZTVKZZQDJLSWQOBFUMURIPEYLBR");
    msg.type = 252U;
    msg.access = 180U;

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
    msg.setTimeStamp(0.344784572605);
    msg.setSource(50925U);
    msg.setSourceEntity(100U);
    msg.setDestination(13366U);
    msg.setDestinationEntity(38U);
    msg.name.assign("MNXEORMJYMOROQJXIRPQAQXJHASZWZCTFABSCVDZMSFYQJFCTFFUFGOUEMANQEJKDHCYGIUKCKIEKRPBGUWYPICBPLNAOKWLGIZKVCOJTCYGSIOVJVDGZOLEKYZUIBBRDCMPGLXP");
    msg.value.assign("EGHLOMIUEFIKLMRDEHNERYQUUKLNPQCJOABXYFHZQPCDAWHYUJYWISLKAMJVGEWTKWYBXORKXDMTBSVOWXPJHMD");
    msg.type = 109U;
    msg.access = 199U;

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
    msg.setTimeStamp(0.604343430967);
    msg.setSource(5696U);
    msg.setSourceEntity(244U);
    msg.setDestination(54152U);
    msg.setDestinationEntity(207U);
    msg.name.assign("JVZHGMPBEFLXOCS");
    msg.value.assign("SVHPPRORBIZUCXNRJTZEVZBCGGFFGBTSHRQJOTIPRDLLKQYJAXROAODNXVYGPSTZKJEYVDZSONOVPXONJWJCMCLTVMROBRDQWFFJQNPPQIFWLVBMPYKHBKBMWYYGRMCOGUZSRSUCPHGFCACHVHULLXHPAUXFNKUXVNMUTYNMNDHMCZKCYKYSIFQZKWNLIQJBEWGUEIE");
    msg.type = 155U;
    msg.access = 194U;

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
    msg.setTimeStamp(0.603800097204);
    msg.setSource(62904U);
    msg.setSourceEntity(82U);
    msg.setDestination(8947U);
    msg.setDestinationEntity(244U);
    msg.cmd = 36U;
    msg.op = 226U;
    msg.plan_id.assign("PFZOBYKOOWEHXAXXJQILXLBDDYRRLSYOLKMWBPPTZJFCYKVGMWMPWSHNUAQUUOCXLZHVLHDCZENRWBLSEZRDGFQZYZFMUGXQMCPNRLIGRJKPIMXUGOUKRAYTVDDAIGMJPEBMJXDNOFFGGOZZVACKHNMETFINVFQJVAWADLFXSURGDTYITUWNJWTIHRQESTBACRPYYTIK");
    msg.params.assign("ZRMRVMSQUDYFEEFKSCZZXBEIPQIQEMAASUTLKNDMYWACBYDWXMXVXLQSRBQDNJHHKHXBWFITLSQBLHACEYYLWXRMUYRRTSGAMUQYNKLCVPDSZSWSOVPOIBGJEWHNTLOGGXJWXHPDIJNMRRYQOZTZHBXAIMFVUPECJGTIJGHGFZLZGZFATPTDKQUSDFVHMVJDQLKOOJVFOPORPNNJHTRBETIOFCYPOCBUEGWCFNCBNUKXDAKAIPYIW");

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
    msg.setTimeStamp(0.962701506952);
    msg.setSource(44085U);
    msg.setSourceEntity(64U);
    msg.setDestination(60689U);
    msg.setDestinationEntity(27U);
    msg.cmd = 232U;
    msg.op = 137U;
    msg.plan_id.assign("CLDERKYVUZRSTWADCJLKPJPMWHVAGKUOFXMMOXLGMTTACOBCHDKZJSCUWMKOKVLBUIWIGPTDXSNR");
    msg.params.assign("CWSDYTFIHNTZBSWJMTPLSBZJIAYK");

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
    msg.setTimeStamp(0.136027123786);
    msg.setSource(22235U);
    msg.setSourceEntity(21U);
    msg.setDestination(59504U);
    msg.setDestinationEntity(66U);
    msg.cmd = 84U;
    msg.op = 57U;
    msg.plan_id.assign("LYQBZRSTWQOLNZFTXYAVCZUDQROXD");
    msg.params.assign("CGNQOWLMDDXLMXXXJZHKGRDYNPGHRBDKFPANRCNLPJRAJQKWEGFQYLORIZCMOLZJOUCXOEDRARYTSZYVUHEEBOAWUNWZMSTDELQUJYWKNQPSXWLOOXHCIMITDVMVPVCKQCUKHUSNAETFILIJJKSEZJPADRTKWGBVNMSBMBBALWYYBFVNE");

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
    msg.setTimeStamp(0.701181235802);
    msg.setSource(494U);
    msg.setSourceEntity(124U);
    msg.setDestination(31089U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("PPBRHKZDRGGVHUOIGNJUVBAQWBTYAQJLNQYJNKETHUVDZRLUFTXXQYQHVVQMMZTDFSASBEMYPHCKMGMCNBMOFSHGZIOBWNUXTQROEKZRODWSQXBHNFYEFTICLRZKWJLXOEDRKYYVFVPCBNJOKSGIWCLZICPPDDRPJTVLPUINUACKJXLFIVOWTFAUWLMBVXNSSIAAESXRZWNGHDEKEQGTOHPCOSFUGYFJTZEWIXBWDYEHXUD");
    msg.op = 79U;
    msg.lat = 0.367654317027;
    msg.lon = 0.942549431745;
    msg.height = 0.660012113311;
    msg.x = 0.373044745294;
    msg.y = 0.779065404579;
    msg.z = 0.73895354772;
    msg.phi = 0.888952727566;
    msg.theta = 0.742009366651;
    msg.psi = 0.0437239444536;
    msg.vx = 0.0945443692351;
    msg.vy = 0.235439271307;
    msg.vz = 0.917214057536;
    msg.p = 0.100143857886;
    msg.q = 0.86686747726;
    msg.r = 0.957109299385;
    msg.svx = 0.95099307919;
    msg.svy = 0.330876061381;
    msg.svz = 0.0908766592788;

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
    msg.setTimeStamp(0.575475697483);
    msg.setSource(50917U);
    msg.setSourceEntity(35U);
    msg.setDestination(50657U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("PGOEDPDQDOQMZDGOADBDGSSRKYCNHTOTEWWLAGSWOSFXWLNVKLGUHVPYKHNKBXOXZXLSIJURFIVDWUSVAOJBXIJKZYEJQVCHUKYRQSHVXYHJXEWWKKVYVCZMULUZGZTQMJMBBQPZK");
    msg.op = 155U;
    msg.lat = 0.805195749518;
    msg.lon = 0.339774047806;
    msg.height = 0.889745119912;
    msg.x = 0.556799893595;
    msg.y = 0.509790803119;
    msg.z = 0.00474789336987;
    msg.phi = 0.244368492548;
    msg.theta = 0.427421450581;
    msg.psi = 0.439410707494;
    msg.vx = 0.836527854602;
    msg.vy = 0.53895834276;
    msg.vz = 0.639352774055;
    msg.p = 0.30905688359;
    msg.q = 0.77564460174;
    msg.r = 0.19735953041;
    msg.svx = 0.852919522985;
    msg.svy = 0.793675126958;
    msg.svz = 0.35425390119;

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
    msg.setTimeStamp(0.495208461591);
    msg.setSource(65101U);
    msg.setSourceEntity(114U);
    msg.setDestination(58947U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("MDOWSUTNAIJBAQAZRDQI");
    msg.op = 182U;
    msg.lat = 0.921696322038;
    msg.lon = 0.163890831502;
    msg.height = 0.437646632259;
    msg.x = 0.498307693638;
    msg.y = 0.955008360434;
    msg.z = 0.1950301618;
    msg.phi = 0.37454181602;
    msg.theta = 0.158514011678;
    msg.psi = 0.543205356585;
    msg.vx = 0.799362045037;
    msg.vy = 0.979519607978;
    msg.vz = 0.0642224090791;
    msg.p = 0.64336039933;
    msg.q = 0.743686292767;
    msg.r = 0.966249273379;
    msg.svx = 0.84341972879;
    msg.svy = 0.711872547653;
    msg.svz = 0.244507153719;

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
    msg.setTimeStamp(0.276551005648);
    msg.setSource(24069U);
    msg.setSourceEntity(35U);
    msg.setDestination(59740U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.673461885074;
    msg.lon = 0.248311021875;
    msg.depth = 0.186107004844;
    msg.roll = 0.289829917777;
    msg.pitch = 0.489988170468;
    msg.yaw = 0.185068303782;
    msg.rcp_time = 0.488581327319;
    msg.sid.assign("NJVRCHNBCQIGDEGDZBKGQNEJQXVKHDVBMPYXAATLNCDWFRHNFKRJIDNOAPWOFPMOYAZUASVTPBFLIYDSERODCUAGJSQFPXOURQMXZJLYKJYHFSXXCMBTQVBQMEJLMUNAMYWZIZWRODNWZLSTCRQETXVUCPRJWEEGKJAUIIOIOGY");
    msg.s_type = 233U;

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
    msg.setTimeStamp(0.583748808001);
    msg.setSource(20430U);
    msg.setSourceEntity(36U);
    msg.setDestination(11018U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.401037984196;
    msg.lon = 0.896045617672;
    msg.depth = 0.587370931843;
    msg.roll = 0.712054625461;
    msg.pitch = 0.335559746686;
    msg.yaw = 0.282725393171;
    msg.rcp_time = 0.0749768173724;
    msg.sid.assign("JDXZINMWKKYSHTEYVQDPHOPTAAFWGIMURLNUGTFGTIPFUFCGVHVWDFQJIBGABPLBDLMJZSUWNLXHRDXXMYOABMMODMURFCJNEKQRPOKSSLKOYDZTQWHANIJXQIHKYKXXOEWKWYPSNZBYQJIKLNCZUDTZREHQAPBXPCPJYFLVVURCCEFLJEHCNXUUQHGQSNAEVBKTZCOENITESWQSTSXHOAICIWVRAGZDWOTBLGGVGZYDRVBRAFYLPZCRMMBEV");
    msg.s_type = 56U;

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
    msg.setTimeStamp(0.759681412088);
    msg.setSource(56766U);
    msg.setSourceEntity(87U);
    msg.setDestination(64556U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.145152020187;
    msg.lon = 0.929867053757;
    msg.depth = 0.453390730228;
    msg.roll = 0.592582624676;
    msg.pitch = 0.709946637585;
    msg.yaw = 0.682105045706;
    msg.rcp_time = 0.104312601506;
    msg.sid.assign("LOVAIXMSKHTLGXMGNQBHFOIFDAWHKSLMVTVMASCNFCXRBWHLBEJWKIYLRZDTZBVBHNPQWTSWPUHB");
    msg.s_type = 77U;

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
    msg.setTimeStamp(0.870420857074);
    msg.setSource(64932U);
    msg.setSourceEntity(24U);
    msg.setDestination(5331U);
    msg.setDestinationEntity(46U);
    msg.id.assign("JAONJKGJAZYUOTCGVOLRBISFXHCSVTHOXHVWYKBEJSQZLRIKKBUPEXOUIHJWLBGIRGJPZDFNIOSQIEGCQLAPFDWODUUKSZXQAXTWJRPGABKVVNKXCDAMBQPVGGPBNYRTRNWMUPYSYPENRVHCHALBZQXIHHYMUL");
    msg.sensor_class.assign("LTAXGUCVEIAQLZXTMRTCTRKMNXJYCKVZSHOLVOJZKFGWOBNQQOIERSFPYWSNSEFWXDNWYKMUGZNEQMEABBEFZOKORBBWWHTUDVEMTBAJGQDUHNGHPVMYYTCKHOOVXJXBADLPUHAVDKGVSPGCCAMNMPIGFATZIVLIVRWIXLDHOZYCLDILDQQEHNYHSSCNQZMUNQFJFWFPAPSWJLSEQJXUIXBCYESBGATFZMTJDUUYJJKICLDBIGWRPPY");
    msg.lat = 0.291106894882;
    msg.lon = 0.166286084642;
    msg.alt = 0.206494105766;
    msg.heading = 0.0614303723694;
    msg.data.assign("GPJSFBHEEDCGVIKUGXKAEFLNDUYVUURNOZTNHD");

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
    msg.setTimeStamp(0.099723184728);
    msg.setSource(38256U);
    msg.setSourceEntity(109U);
    msg.setDestination(19113U);
    msg.setDestinationEntity(241U);
    msg.id.assign("KQSABZYVWPGRYZMJJRZSGTSWHQRXIYCKQZBMPURGIJYANCNVNQONRXXGKCQQHXSEHHBYHPXOTF");
    msg.sensor_class.assign("WTEUEJCPGGDJBFRXLYPZIKIDEFLKZSOIPXCTNPMZJYAEJEYQGTKPZHVQLALXCJNFNGAPOPGIFCKVBQUTOFQMHGWSCYIQSXEIZOITJNLARLKHSJHLOVUESFVZTJWDMRXHAWSFIBAVVEJUCBPQAAVYTGNNXJGTRKDTMZSMPTBOXCYYBCEYIBXUVMNRQNUSWDBHBALDQYKQWCIAGRDDORUWURWPMVDSHHUWMDLRN");
    msg.lat = 0.509215648522;
    msg.lon = 0.818948664867;
    msg.alt = 0.524206527265;
    msg.heading = 0.963370971221;
    msg.data.assign("FOITTPCWYHQPVMXSJVJYGLOXCPSFFVTQYOETBYZBNSNDTCKKAHWIZCWJXGWNNRXMXBBIVIQRHHOSGIARHVJVEQURLMBGYGXJUOZEJSSWENFMWKVPBRTDMODWREPTRSADDWZQZXOMQPQPMBGSLPINRMFOURAEKFHYNUKYSCLYZJDBZEHCPMWUOWGFLIQBCJHZUGORKCFZMLNAIKFNICQEJTQHVAXKEDIYGULZTAYBXKUDVVDKLDFNULSEATA");

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
    msg.setTimeStamp(0.409056173346);
    msg.setSource(12697U);
    msg.setSourceEntity(202U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(192U);
    msg.id.assign("KZJXQXEAWYTEXBYCQCKDJQIFPQGMOXQOYBERMPYVUIUIHOUJKIUANKRLBMLDABHLORDHSODDPJTIXJWAEZWINYBOWRAOGSGEJGKDNFACCBHSVIESNMJPDZYXLTWWIRCPPTARXCYETVMUNPXYNAG");
    msg.sensor_class.assign("SPYQSJNCLXUESW");
    msg.lat = 0.170108471471;
    msg.lon = 0.909424694587;
    msg.alt = 0.7054721722;
    msg.heading = 0.024271700974;
    msg.data.assign("YAKEAVUIDBBCVOJELOWPBRCCDRCQTOKSFJGRIPJIUHABGYATTNNYOJQHNMEHKNFLBTUKNNRFLPYOHFJYNWJSTIHEXMLNHJQPXURGJKCYMAQVCODHOJFXARSLTLWDDKZWZQUDSIAERUIOXMKSEIWFXBXZHDBMVPHZWCKEPGYWNGJWVYLCNBSLBPXTA");

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
    msg.setTimeStamp(0.265344934864);
    msg.setSource(6734U);
    msg.setSourceEntity(70U);
    msg.setDestination(39546U);
    msg.setDestinationEntity(240U);
    msg.id.assign("FTQSHBFWKOWTHGCLFOSEYLKCUPHLZVOMGQAIJUBMDYHPUPOGRZWXZIXCTYWYOUPKSTAFQLPSEWUKTPONLOJPCHBWKXEEIJDBRMSHLBVCFOTVGECEHXZDHTNUYZSRAXQQCZSJJUVNYXCPKXKMALAWJFUPNFRIRGQQTEGGPNVURAXNAYWVNFSIMYTRXNBBBZDWLLMZMJSJDDQYAXGDREIMILRHROWSAKETMJQIDBZKJZVKIAFDGFCMQBIU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HTFKLYZDBGR");
    tmp_msg_0.feature_type = 86U;
    tmp_msg_0.rgb_red = 123U;
    tmp_msg_0.rgb_green = 124U;
    tmp_msg_0.rgb_blue = 97U;
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
    msg.setTimeStamp(0.845445204296);
    msg.setSource(46221U);
    msg.setSourceEntity(97U);
    msg.setDestination(19039U);
    msg.setDestinationEntity(245U);
    msg.id.assign("IWFRFCKTKRJLTIPCNHJWJNYEVBNOMFVWPEGBLVYMDBDWRIZPFCHVPDCSUINNCQMGZVWDNFIUKDIAZLPYHGNHKTRNWKKVKYDNEUGYBOZWWSZMXSQMGEIOT");

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
    msg.setTimeStamp(0.256876589741);
    msg.setSource(36382U);
    msg.setSourceEntity(189U);
    msg.setDestination(49846U);
    msg.setDestinationEntity(245U);
    msg.id.assign("TSJXKUTATBMQTYTNAPORPONOYSIMKQVIXWKHNJFTWFKTOZWMRLIQUHMWSCJKPSOXNGYGKGWGECRRZWTJBJIJDAFHJEYXXIDCVBOPLPHICLCUURXWFDUCFZEYPVDBYPPGOIBSGSKZGEQDVIZVQCBKYUQGEAMEDLKLQPDHTXKLUNEZMWQLNDZYPSUJRAGSZRNNRCOFIEEXOMWAWVNLFBRHDHYSQRMMEAMGHYOZLAJCUVFLT");

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
    msg.setTimeStamp(0.480904786378);
    msg.setSource(44673U);
    msg.setSourceEntity(45U);
    msg.setDestination(62076U);
    msg.setDestinationEntity(230U);
    msg.id.assign("WMNYKSTNLDMQVXWKFQBYRWEQDYZGMNWLPIUSPLXASSKENCBRUXPSQYVEWZHQGHWTIROBNTSKDERPXIDAJMPREDCRNLKOJZRDFQYCYKTPGIKHBOEDPCCPKVEGCVBDHGAFNCEZVQMXZZLWJRYBYCUBTFJOCANZLVGBBWZSA");
    msg.feature_type = 78U;
    msg.rgb_red = 185U;
    msg.rgb_green = 232U;
    msg.rgb_blue = 112U;

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
    msg.setTimeStamp(0.447168013388);
    msg.setSource(55013U);
    msg.setSourceEntity(224U);
    msg.setDestination(61770U);
    msg.setDestinationEntity(142U);
    msg.id.assign("GPQUDLNWFNOWUYEXBDPGNMTAYAPQJFVZIVQLFCLXTCIXLFRKPGIRTZOAAWQXYNZDVOBSYFGPQRLTGUWRNUONXMIUCEXRSJWDSXDMGFRWEVOFWBUVEAHVNIVEIWQYTVOJ");
    msg.feature_type = 82U;
    msg.rgb_red = 33U;
    msg.rgb_green = 128U;
    msg.rgb_blue = 165U;

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
    msg.setTimeStamp(0.372139039811);
    msg.setSource(58859U);
    msg.setSourceEntity(222U);
    msg.setDestination(61078U);
    msg.setDestinationEntity(213U);
    msg.id.assign("SESQTBQFBYGZCIUJVPWYRHUBOUFSCHMNIPMAKST");
    msg.feature_type = 204U;
    msg.rgb_red = 112U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 127U;

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
    msg.setTimeStamp(0.293886860084);
    msg.setSource(4269U);
    msg.setSourceEntity(153U);
    msg.setDestination(26748U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.396129801939;
    msg.lon = 0.439189617884;
    msg.alt = 0.183785799907;

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
    msg.setTimeStamp(0.694876656986);
    msg.setSource(29047U);
    msg.setSourceEntity(18U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.420088481796;
    msg.lon = 0.888797442254;
    msg.alt = 0.928558001273;

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
    msg.setTimeStamp(0.479029878243);
    msg.setSource(40177U);
    msg.setSourceEntity(221U);
    msg.setDestination(46756U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.786232408928;
    msg.lon = 0.282034763134;
    msg.alt = 0.195924549815;

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
    msg.setTimeStamp(0.869164830157);
    msg.setSource(42433U);
    msg.setSourceEntity(160U);
    msg.setDestination(62829U);
    msg.setDestinationEntity(39U);
    msg.type = 154U;
    msg.id.assign("GRFOITMZPOIFGGZSQBLWGDKUDBFZYTDGRVITYZJFTRDS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZBMHXIJCPGKUJURYLKQEYIOXETYQGCZJOOXMQYQMKMPWHFPWZHRHNDKCUMIUIFZPDLVSVABLR");
    tmp_msg_0.predicate.assign("IHAXIYVWYJGFELNSOZWLUQRKH");
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
    msg.setTimeStamp(0.127288472834);
    msg.setSource(49632U);
    msg.setSourceEntity(184U);
    msg.setDestination(51999U);
    msg.setDestinationEntity(175U);
    msg.type = 44U;
    msg.id.assign("ZCENRCKKFQWBBXXBJZGMMHAUEFJYUPXBQZUNLBXVQLISPKAQPSIYRUXITJMDPCQOGAHZOBZUREDFZVEFRPCIKCRKOCLXVOTBYLMGAGNRKVJJSENAVKGYDHOWQGTQFINHWYNJDODYEAWOECQRIHURFPRPTYTTVRUGWJNLGKSKMMSJVWYSSGUTJTZVNXFYCEDKCNNZMZHUPLPBWDFFLSXICGMOFABOAWMBY");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 35U;
    tmp_msg_0.step_number = 114U;
    tmp_msg_0.step.assign("MCCFLPOVYFAULHTSGPYVB");
    tmp_msg_0.flags = 60U;
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
    msg.setTimeStamp(0.161344294247);
    msg.setSource(32436U);
    msg.setSourceEntity(117U);
    msg.setDestination(32518U);
    msg.setDestinationEntity(11U);
    msg.type = 108U;
    msg.id.assign("OCKJLORDIEEBQPBCBMXLGREOMZQWHSYFVAUMTJHHJYBKFUFAHXGJFDXMNNVPTOWSXOMJMGOSMTQFLIQREDDRPJKHIDSPZWWRPVEKLNZISTOOZAYUBIJNLVKYYDLWAQXNDRICICQYDTHGGLVONKBFEMSIBNFYRCCHJHASUTEGUDPHKPPXLJCVWATAUFWGCDVYZPVXNTQBYEQYRRKNXXLACXGEZTVNFGUKVJ");
    IMC::DeviceUpdates tmp_msg_0;
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
    msg.setTimeStamp(0.354403882167);
    msg.setSource(65492U);
    msg.setSourceEntity(59U);
    msg.setDestination(34308U);
    msg.setDestinationEntity(8U);
    msg.localname.assign("DRHDQJVFGVHSMCRWUBJNMWYQVTFZKIXKWPBNEADFMFGDLOMYIPOGJEBOAULCBSOKNKNJXFOWVVRQJTHDVMTQILRMBSZSIRUFNSAZLAQLPZCLNYLNOZPWYREBGUUKRRLJYUPTOZGVCMLIECGHA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OBHNGELSXHOZDQONHRVURCIMLJMCHLVYQKLIUAWQNN");
    tmp_msg_0.sys_type = 161U;
    tmp_msg_0.owner = 12102U;
    tmp_msg_0.lat = 0.186527892051;
    tmp_msg_0.lon = 0.406333758295;
    tmp_msg_0.height = 0.509822446096;
    tmp_msg_0.services.assign("ANKWGMWGJLCLLFWFZGHQKGCPEEXGXKOJPDUAHSAGIHYTIZED");
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
    msg.setTimeStamp(0.908567839703);
    msg.setSource(58209U);
    msg.setSourceEntity(45U);
    msg.setDestination(63968U);
    msg.setDestinationEntity(140U);
    msg.localname.assign("ZWAMNNHXLTMICQMULOKFHNYWBMVBNYRNERXAVRTGNTFJSFJSDQBWYZYSQLKCXRUNPTCVLUSDGGQEJZODMRVZQZDZWKOAUWGISORKXVBNVTCKUESDMDSTPGTBAWHMYQIZXVFFUIDJAHUIKODPUIHQYABTWLHYFVZEHUFWLGJRREPBCLBOIBABCPWIKZOWOQLPQPXPOPUE");

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
    msg.setTimeStamp(0.517389913794);
    msg.setSource(48527U);
    msg.setSourceEntity(190U);
    msg.setDestination(56695U);
    msg.setDestinationEntity(66U);
    msg.localname.assign("PMFKHRWCTRWKXUMUCKASAGYJWIGLRVFHQOQJBJDOPBNVPWGQTEKAKGEUOLUSKALAMHDDH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TJBHSTOASZRWGDZOFRGDVCQZBCOYFJSQRGOWVXOXCFBCIDRYUMQZKCNDTYY");
    tmp_msg_0.sys_type = 230U;
    tmp_msg_0.owner = 29713U;
    tmp_msg_0.lat = 0.988398661603;
    tmp_msg_0.lon = 0.218031175487;
    tmp_msg_0.height = 0.644253415999;
    tmp_msg_0.services.assign("ODZZXGDVXUEWGRAWJEUOKJEVPELFIPCESDJZYVTSEQZMKQXXOMUTATYAHDADOHCKGMBM");
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
    msg.setTimeStamp(0.823384022415);
    msg.setSource(57000U);
    msg.setSourceEntity(239U);
    msg.setDestination(60886U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("KVLWFZVXZUTIVOXIFHGYZBSZQCTQFYCJHWQXQEWCUYRSNUXTBFPMIGVPYVNZQGAYDMWNPZQARHDWIZYDAXD");
    msg.predicate.assign("ZMGCVRUCYUEGCVYYJFPTVADSYZPKKWEGERDGDFYUYAFJNQQZWULWYGMSPVASJTHQZRQXVMKMZTKJKNWEWLTXJNKOKCRJZPMFCTHFRKTIXNMMWUITBDGEPBREYACQCHCPOJJSQAWHLNIINPUDXAFLXPFWZF");
    msg.attributes.assign("JBWGLNHGVXLXTNLJMUOVRWBWNADVCBKGGTGFIXDWCOEMWOAYHJQYOEUGKQSWIRXFXSOMLINPUFFOBNLKPEMRQZDFAIBTPCCCHUMNUYHJSSMHWAMQZHIDPANKFKLPEXYFSYNZPUQQJTGJSLTFXZIBBDRXCPJJVTDOWYQXGPUNCHAZVTMVRRFDSXYOR");

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
    msg.setTimeStamp(0.127869712906);
    msg.setSource(8949U);
    msg.setSourceEntity(110U);
    msg.setDestination(1984U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("IPAFYLZVHKAIIPNIUIHMXRXKABLPCNTXGHBGYJDVOXDESOEQHMCKFTOKYIWEWJVWDGPYPCDXLUQORMOXFIOOVGGFKSJVBULBXMSUZFEWLZNKFRVRGGYUXXRLDNTMWBBRWFY");
    msg.predicate.assign("JJCVXDBHKCPDFDLZAYWRMCXJIAOSMBEFQLFVVVTHZVFGGZXBJGGDTEYOLEDALYUHPBNX");
    msg.attributes.assign("EJRVXKCSINMIYLNDWCIZRTMTEVQXYCMJBHJDSLQXROUHVSMMZRJDEAXXUHPVNBDNUCGOMQTZGAEZJEVPHDXKAQHLAPGIJPETWUUURTFFSAUIRPLOASXCWVCHSKONNJDRGYTTDRMIZGQELOHZBHCFJVEYWQTBIKZDFKNXFJLZOG");

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
    msg.setTimeStamp(0.70966709979);
    msg.setSource(40125U);
    msg.setSourceEntity(31U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(55U);
    msg.timeline.assign("EGWONFKKZHFDFRPFQMFLTEBXDLTEZXPMOKGRAAXXGCFBNXRVSLWTUSRHHJQPJAJVZULKIFJSTEZQHCAAYXUOLVNXTVEYPWCKGGHNZYWKSJPCHPUUFBUVOUIBEDTTNQIHDNHMGARCPOPVLZAWOYADBLJWYIMKVOSBUGVPWHJY");
    msg.predicate.assign("QTQOEYOIUFJJROCBYRFADQWFYIMJHDMBPNPZPKIPGRMRVEVJKGRR");
    msg.attributes.assign("PIEDEWAZGIHDJPYTTJYNHTZJYIPJASQZWQBDDWFEUPTYUBPWMPIJDFMTYSOQXMRMMORGAREZHBKYVIXIBANEXVOHSBCKYHTKJCFXBIXLORVNWVESECWPDRGGHGCFFQFGMLSFLJMBZVNABZQOCREXXQOSCPFOAAKECQUSENAVXUYJRNVKAUMIHBHMRDDT");

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
    msg.setTimeStamp(0.567857247125);
    msg.setSource(54156U);
    msg.setSourceEntity(99U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(146U);
    msg.command = 13U;
    msg.goal_id.assign("GMQOPXDWNILLKQZSZFAJNCRMEAPEORCQYSPJDYCKDRARIQEBHJHBZISQABZGTAIJDLLFMNPECAOXHZSFSSYEMKSILNVBQLREDVUJAVVEZJGYVDBWQHMNFDYMUZJPOTBIJLWVGFXDETAZLNIIGMXONUDWXPHUTYZOOHFNLBJGECGBSWWCKGGQCTUKTFW");
    msg.goal_xml.assign("GDPIIQSMBNZETYVJXCELGLJXNYPGEOQAEJCNMXNYHFCKDICTRWSSFLSQBUDSEDAZFCZJPTLQUKJRQEWSHUTZKMMMAOVCJQQLZEJUGTGVXCOOSYUKPQILSDCELNKWIKKOXHBYCLFIXTQRDUHGRONXMAVYBROZVNZRHVVUFYJVJTKBDWABIYRXYXMRAGJNZYHSDHWGHDRPTVUTSPKMRBWVXG");

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
    msg.setTimeStamp(0.159748487568);
    msg.setSource(45678U);
    msg.setSourceEntity(138U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(36U);
    msg.command = 246U;
    msg.goal_id.assign("ISTRZZAALBYGVQCWHSMRHMNCGNMNTPZKUOFUXBUIPLEWXNBEMEFFPXMERZPHYPMODVKIXJWKIYWKNCIOGYQKYMNZFEJQGGRJECXKJNKZ");
    msg.goal_xml.assign("HMXKMWXVLHCFBLFXTRNCNXCMFZOTMOADWGQVPKMBSWDTQGUNPXJGIBWEFRLMEUEDSXVLZFAKYEGIBCPJPKAGRCMBHLA");

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
    msg.setTimeStamp(0.326163551185);
    msg.setSource(19631U);
    msg.setSourceEntity(166U);
    msg.setDestination(64167U);
    msg.setDestinationEntity(108U);
    msg.command = 76U;
    msg.goal_id.assign("UPYZTIWYMVTSRKATOQZAXWFDKIDFXAGDPPNXLKMCAQOQMXRGPHEGQPWRFOLYWODXSOVBCYZABVGZOOVMHJQHGEULIPUTS");
    msg.goal_xml.assign("WLXAODRFKKDLYBBTVTNMQJUVOBMVQEUDRXDSEHWIPTJCDZDBOJYAWRHAFONMHEIIAMWIZUEFIXTNAGZSFWHLXWCNONRYSYJBPYRTPRUISFTKODCHMXMVABUXZTQSGCBUCBZXEHTWLAKXOMLOSYVOGQCGMNPOIIMCNGFNJXYTVIYPCTZUCPJBHFQCVSVKPNJLPKJFSMUQQPFEADPEUVYRALJUHAGDGWFBGRLGERKQZWK");

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
    msg.setTimeStamp(0.212280331684);
    msg.setSource(51305U);
    msg.setSourceEntity(192U);
    msg.setDestination(43479U);
    msg.setDestinationEntity(180U);
    msg.op = 216U;
    msg.goal_id.assign("JRXDYVQWJWOMGHRJNBGLQKBKUQNNEXVSDDZNLLPPTEAUIIOBDSVGXBXEKWDQWRMIEOAWBAFZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RCZIXVDBARUYCNMXPKPVGUPYHMQYDBHRIAOVNTXUSQWFICSFZWWHYSXDGRPXMGQVDBVYUUFEUJELHYKBUGIWSWWNLAIVFPJEOUDGCPPPZPMSDJLDHTYOROJFACRLZGAAXVQCEHDAFQYKDIR");
    tmp_msg_0.predicate.assign("OIUWTGUJDKOWZREEHHFTTGYBEOWUEBSOIILACDHWQTBGVZKVWVBDXZCZVALJHQBAYKDDNHDJBNLFDBRRQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KKXWCFBIIYSRUI");
    tmp_tmp_msg_0_0.attr_type = 57U;
    tmp_tmp_msg_0_0.min.assign("CJYTLJVGOZLQCBUZSVHCVBCQSBYOBFYBWZEKLXFTMDZIKSINBPDQOWXNFAVHMFWTFRUGNJJIRGLKVNVDSAEARUPMAXCQAWJPSARAQFYGTSKHZVHMQQZYVJDXPBODIYVRTERKERHCOOUWPEFTDGXSOPCITGWEOMEJHQLWMWMUJYZCUTPKLWPGMUEDRRQEIXWFXCZLGVQOY");
    tmp_tmp_msg_0_0.max.assign("SRGHJATYOLYSZOHTCHEXFNNVXJWCCXNEKPKYYFOKIWVYZJAOADJQEFIGPRXBFMRFGPAITVCYRBNPCYANMQFGAGKZBSEHBEUFITOZCSBQMVTMXDSWOPLJJKJGXZTXELXOLGKQFRNMCGEMIKASDSPBUUDEYPPEMWZHNEJRUQOWWPQIDBDRQTVDZQO");
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
    msg.setTimeStamp(0.612732848891);
    msg.setSource(33773U);
    msg.setSourceEntity(198U);
    msg.setDestination(20616U);
    msg.setDestinationEntity(138U);
    msg.op = 140U;
    msg.goal_id.assign("YVHHZWPXBHFLPCYGASBRZBZWSVIOPTRRONSEVNABLMQHMTQBXSGCBPA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SSVEKJQGAMQJOGCSKVGQGJSBUCDMRUYFEPANPYOPSRYBHMHDNDJLYIOXUJYXQTLYOZNEATINVWXIDGQJWCBMSAPXARHQ");
    tmp_msg_0.predicate.assign("MLZGLMJMBKEZCQBEQAGPSFSAGYUXHVHCHTLKKCWGVPDTIAMAQTQUQARBADUBHMLQBXMZUVVZSPYLMHIRIDAUPIBGSQCZFYEAKJQKXPXZGCYKBBFDVEOLBPVYCNEUWRPWFOJNOKHMVIHTPJRMVZXNZPELJLSNSRZEOVIQTSIOBMCXJKEJCSFIUJWUTXOESGNTFNHXKORCWISYODRWCWVTRHNFQRNGDHFINET");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZXLUWHQKVPXCTCGZBOGRHCOGVUDYBAOKKICYFGC");
    tmp_tmp_msg_0_0.attr_type = 14U;
    tmp_tmp_msg_0_0.min.assign("KHDGHGJVTWRWHDFHXVMNOKQOAHPNDUVYWKEAKAAQZSLNQJLPMZSOBPLRSEGIDKJIABZBSCOUXXOKBLCVRKLSUFWIIDEFEMBHVCFHOLZLXOJBSJWEIMXRZRTEJSNASGGTKDWQLOTVYZDYZHUMYZUTWJULRAIIH");
    tmp_tmp_msg_0_0.max.assign("NECRCAYGVPNHWMCOMNUBIVADDGGMUKBVLPCGKMDKBKQDPFLRLKSZOABWFZKRAJUMIGTTFWOTWIRIFZPEGKJNPZGYILTFVUGUVRVXKRSLSWAVYZPAEQNQFTYBVPOVLHUHSBBAJIFKDRQFEYNXTPLESYHJUJJDCMH");
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
    msg.setTimeStamp(0.0641644157753);
    msg.setSource(62744U);
    msg.setSourceEntity(196U);
    msg.setDestination(49736U);
    msg.setDestinationEntity(136U);
    msg.op = 111U;
    msg.goal_id.assign("FICWVTERFMGXAJBLSIYNIBCWPXWPFBHZSLHGHLLXRSYUYTCDDZHUWEQHZGQXDMVQZQCIOOJFPUPNSDAQWDITNDMIMJEAXWWKSFGZXBEVOEDANFLKXLYAOTUGCJFZYTAHTCREEISXQOVGJLXBU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QIYXVTGPHBASRIGBHQJZDJQNYHLEDDNEVQJNFIMTXKEJGAEMYTHEZJTURPEXUVUBCLCDNXBOZTIKLGXASFWROLIWFOHTZNUQVRBLVVFSSZMHZRUUMXHMTIKLWDRCOWEIZBCASVDCBCKMJHOLFSIPRGUIONIQKRMGAZKBVWQZCAATBDEXJPRWSKAHAPJNNDYFFGGQPQTX");
    tmp_msg_0.predicate.assign("SWRFESSRCLIVLQCHEMESLMQKLDXWTAXZQHFYGCODNPTCUAIMDRPEWLBLB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GDUPMLOTCTKPLOFFC");
    tmp_tmp_msg_0_0.attr_type = 61U;
    tmp_tmp_msg_0_0.min.assign("ODEHPFQIXJBHO");
    tmp_tmp_msg_0_0.max.assign("KJERCERBHPPHUATSIWXVUIJNMAEDHETGSYOLIXWAJNSNIWXQCUFCBCPKDPQTGEJBTGEWURVVOFZMQJOHDELXSXJCQAFTIBPHRPBLGBVJXLNVZSEMRGAZWUAUIDZBUAHKRMLBOEYQAUSKIQJYZWDCKTNKQOTNJVFUM");
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
    msg.setTimeStamp(0.135206838619);
    msg.setSource(63317U);
    msg.setSourceEntity(10U);
    msg.setDestination(41170U);
    msg.setDestinationEntity(89U);
    msg.name.assign("WFYTQWJROLASRGWXMEKTALTNPNPPIWFFQBEQETCNPFPPOHMNUFGGOJITUNKIHYFZFCKRWEOUAWMBWZYJSTSVSIIUJTGKHVILKEVIBUCGHTYMEJDZALBMSOVBHCSWRRUOXROJKONMERDEZUTXBRFVCRNYQXQXZTAR");
    msg.attr_type = 99U;
    msg.min.assign("QHEYNRVOHGOWKHBRNSMTZUXEITRGICTZIKTUDUFIHNBZHJCGMDJWJESYIUONWBKWVQQUQRLAMPXPFGCJOZSNPCLTIUPRLVZKDRWWXXXVNEGFJUWPXOXSYPWDIQSVVQEEDECPFFKRMMGPRZOMBTTJDNNAWMYMOZGDYKAPSCVFMHCLFLVXZBQYUSSDLAG");
    msg.max.assign("DLYQNTMECNILQIWJBTFF");

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
    msg.setTimeStamp(0.698438395141);
    msg.setSource(40952U);
    msg.setSourceEntity(118U);
    msg.setDestination(20508U);
    msg.setDestinationEntity(187U);
    msg.name.assign("OLPKNOVDBATHADIWJTHZOOIJIHNORIMNNHKOWQXKXYCMGVQSGJZTRWCMXXMDREEXXHDXHKCIBGQRHOKUCBTZUCZKCBXVKYBHFJGLADLQMEPFZFWFCSEMSLKRAYQMZAIMEQUIS");
    msg.attr_type = 175U;
    msg.min.assign("ARUBDZPVNWUAZIXTKVPPNZEXQZULVUNYCGBAGLSGINDOQCOLFTERKVMFQYJBVVHBOTWFCYFEGTBMQAQBXXMKFZWJTFTORHXTWPPQNPDUZDIWUGHLIRRKYDARUSLCYEYKMYRWNAXCKCJSGLHMMNVP");
    msg.max.assign("ZHJOGNXITFOJVFVAEMUZXQHSXIAVFGKEGAPJNJQXOCDOSBEDPISDBNRARWEMLGNLNNSCAUCZLSIGNPJWUHXZPYTELHEUDDZTAXUVBYJQTAGIKYERTETPZBRTWAWQGOTLZYIRGHVDMXVDGOFUSIZYHZKYKDJY");

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
    msg.setTimeStamp(0.352186870898);
    msg.setSource(47699U);
    msg.setSourceEntity(15U);
    msg.setDestination(27121U);
    msg.setDestinationEntity(45U);
    msg.name.assign("GAIPGGITGTRSVQZQOOTLLVAGCEPETFNZOJECUWUOSQEXHFQZKFLJVEZUKXWOAC");
    msg.attr_type = 35U;
    msg.min.assign("XLGYRTEBQUPCKJWMIIVDJJTTMNVATODELCBHVURYKHNZVPOCRTNIOSOHDBMMLOOGXCRTQGWFXBGKQIIQWUVJYFNVZYLWHIXUWIAHNPHEHXUYZKBCAMWGDQEXKSRVPFXAOEMYQDHNAIOX");
    msg.max.assign("JYEHHRYXSNWWUMTIDSVDODBWZNKXYQGNJTBJQICOPWPNDDKYPJTJGITIEZMPQLNAVZEGKCMBOEXPRHRHCVMIAAFFXLMVVMFKHAUSTQZEDDAIEPWLSPBKQHLMSQELWVHOGSBGCUEPKLYBYARKHZLFBROVTYMSTPPQWTNFEVRFURCUHUGJOJDQQFFTNMKJXRTMUEQU");

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
    msg.setTimeStamp(0.677093408077);
    msg.setSource(63732U);
    msg.setSourceEntity(114U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("QOYUEMYWAKKBZLISRZWRGNJVJFPBEQDPQNBZEZFDVHWTTFCJOXSUCHZVSGIHSOGXXKXCKMSTRYLUAPDWLULQMMEMCTQSEXNWG");
    msg.predicate.assign("VIJTSSTTFUMGBKTWWYJFTBHZLQWOOHCFBOVRCUDBINOZGAIUSYIANWXF");

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
    msg.setTimeStamp(0.624851221344);
    msg.setSource(5091U);
    msg.setSourceEntity(12U);
    msg.setDestination(65367U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("ESZODAZMSUWRLRUCXNODVQGEPHPJXXKXIETRHYONITADLNBNEP");
    msg.predicate.assign("TZTEDLMNKBVTHDMLFSTRMJPMAXIRBCQEVFPPYJWQHGGKMGOQAFWUXPGVWCUPOGAHJWOOBVGEQDZYWNSOLFGDAITFMTHSYSDIVKQOJIVMTPCMNOFURWIHUNAKABEIVXXIKFRDVXCZEHXNTDVYCKUNIYRJERRAVJXXKWPHZLLXMQZFUKGRPYLNCDDCOSFSILLUQAZZNDHBWG");

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
    msg.setTimeStamp(0.0861886569233);
    msg.setSource(5838U);
    msg.setSourceEntity(33U);
    msg.setDestination(34978U);
    msg.setDestinationEntity(188U);
    msg.timeline.assign("CYGXBACZJYOUUJISGWYMLOQRGIAGUIQCSTOQWVEVDSOABXZOCEOGPZSYOMSUAAYYEBHOFYGINZKXTVRFKYEPMKXMGWPMDURKWHSKMXWLPDMMPETMDNVWZIVJBECXPPQKIFLNFKHEARRTDQBTFCZNTVRREKQLFFHUHAPFXUJDVOFMCTWXAWUZRBETSUYYLLIJKHSLIDX");
    msg.predicate.assign("IBYMWLQQMCNOTRSRCDNELOJIHUV");

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
    msg.setTimeStamp(0.891803873937);
    msg.setSource(12637U);
    msg.setSourceEntity(182U);
    msg.setDestination(6944U);
    msg.setDestinationEntity(160U);
    msg.reactor.assign("OASPOLKNADTDFZDNNRYJNQWVOTFQNLAIOIEJPKCTCJUFXBIBVAWBQBRXTKACODFZPBQTOVPOVOYBTCSYBECTGOEHBDSERPHBMWRHFTHBWGQKAZUNJJFHCDWMCFYMYYSGQC");

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
    msg.setTimeStamp(0.325987220501);
    msg.setSource(24210U);
    msg.setSourceEntity(8U);
    msg.setDestination(36153U);
    msg.setDestinationEntity(117U);
    msg.reactor.assign("NIQFCNSBFAIEYPSOLXBAFKAGOQYLXDIFUKXMOVAZMBZJXHUMRHBLBPLXCACZBPZUMKMYPEJRQUROZDWVAGDXVPFCCLAPNYGCBNHKSOMTWVVT");

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
    msg.setTimeStamp(0.814502638759);
    msg.setSource(105U);
    msg.setSourceEntity(141U);
    msg.setDestination(13440U);
    msg.setDestinationEntity(30U);
    msg.reactor.assign("TJUBACQAWFGDASXXZSJPBIPCSVZLEHETDQMIRHUMNHUTSNMTWNJWIPETLHZYPOHDUCJGZDSWZMARYNOXUOOHXXKLRUIKWGKMGGKLYTUAJKBYMRJDMIALOTELUCXQQKPZVYFRJWDERWIWJCBHBIRCGHKQFFDENMCLVS");

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
    msg.setTimeStamp(0.509547288779);
    msg.setSource(17341U);
    msg.setSourceEntity(80U);
    msg.setDestination(36285U);
    msg.setDestinationEntity(160U);
    msg.id = 79U;
    msg.width = 23550U;
    msg.height = 60601U;
    msg.widthstep = 50142U;
    msg.channels = 109U;
    msg.depth = 22U;
    msg.finaldata = 141U;
    const char tmp_msg_0[] = {94, 66, 108, 73, -5, 53, -100, 27, 52, 5, -9, 72, 81, 116, 95, 92, 119, -98, -94, -15, -128, -108, 119, -10, -11, -65, 114, -101, 45, 9, 95, 82, -41, -85, -2, -112, -11, -56, 77, -112, -103, -99, -109, -27, -92, 48, -27, 117, -9, 109, -119, 31, 22, -66, -13, 31, 106, -67, -88, -90, -55, -44, -34, 64, 63, 117, -4, 103, 98, 72, -7, 9, -47, -1, -60, -62, -34, 1, -5, -105, -60, -19, -87, 20, 31, 116, 32, 21, 87, 10, -117, -41, -106, 108, -2, 100, -78, -115, -28, 90, 94, -21, 40, -96, -50, 117, -89, -57, -110, -112, 25, 121, -82, 83, -25, -13, 45, -113, -108, 78, 34, 77, -113, 48, 20, -41, -40, 94, -88, 77, 100, 21, -49, -7, 16, -13, 68, -81, 109, 108, 125, 46, -54, 93, -60, 23, -64, 50, -117, -14, 61, 69, 48, -10, 30, -108, -41, -25, 81, -55, 107, 63, -3, 21, -95, 101, -105, 60, 73, 82, -84, 99, -95, 23, -31, 16, -126, -50, -76, 64, -7, 47, 116, 126, -55, 8, -13, 24, 4, -63, 88, -115, 89};
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
    msg.setTimeStamp(0.31126291337);
    msg.setSource(52377U);
    msg.setSourceEntity(96U);
    msg.setDestination(3250U);
    msg.setDestinationEntity(190U);
    msg.id = 154U;
    msg.width = 24765U;
    msg.height = 42537U;
    msg.widthstep = 54106U;
    msg.channels = 50U;
    msg.depth = 147U;
    msg.finaldata = 244U;
    const char tmp_msg_0[] = {-103, 113, -66, -7, 108, 66, -27, 110, 94, -10, 42, 75, -34, -8, -66, 40, 63, -125, 59, 43, 86, -111, 82, -116, -109, -100, -32, -81, -24, 96, -64, 118, -10, -25, 93, 110, 56, -25, -33, -9, 120, 15, 7, 6, 24, -111, -67, -41, 86, -82, 11, -36, 23, -2, -29, -88, 8, 110, -48, 51, 54, -126, -14, 87, 41, -46, -49, -123, -33, -125, -107, 1, -62, 26, 11, 110, -61, 109, -89, -77, -78, -11, -10, 95, 13, -51, -12, 37, 100, 100, 103, 39, -107, 37, -25, 75, 102, -44, -2, 17, 66, 53, -37, -62, -64, 59, 93, -34, -97, 55, -9, -82, 45, -35, 14, 8, -17, -118, -59, -3, -39, 71, -86, -99, 49, 49, 51, -125, 57, -115, -121, 121, 82, -19, -79, 25, 27, 14, 119, 37, -84, -38, -70, 1, 102, 51, 110, -76, -11, 95, 12, -117, -49, -89, 77, -127, -113, -79, 23, -121, -63, 117, -59, -61, -80, 14, 11, 71, -11, -93, 85, -86, 91, -21, 69, 42, 108, 78, -13, -80, 1, 5, 119, -23, -53, -115, -51, -70, -34, -1, -46, -1, 80, 35, -42, -58, -125, -53, 26, -48, -73, 108, -86, -63, -32, -55, 7, -21, 70, -54, -82, 87, -59, -85, 15, 122, 126, 4, 83, -57, -61, 8, 7, 46, -92, -6};
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
    msg.setTimeStamp(0.692615121235);
    msg.setSource(54813U);
    msg.setSourceEntity(107U);
    msg.setDestination(55508U);
    msg.setDestinationEntity(170U);
    msg.id = 247U;
    msg.width = 16616U;
    msg.height = 53334U;
    msg.widthstep = 31649U;
    msg.channels = 81U;
    msg.depth = 26U;
    msg.finaldata = 22U;
    const char tmp_msg_0[] = {-20, -115, 5, -110, 103, -125, -92, 4, -27, -87, -14, 112, -62, -68, -62, -49, 12, 0, -17, -72, -47, 41, 24, 71, 44, -84, -118, -121, 119, 11, 119, -27, 94, -1, 111, 9, 70, -117, -70, 31, 92, 73, 88, -6, -1, -42, -56, 45, 78, 61, 88, 87, -3, -110, -14, 80, -68, -39, -91, 53, -64, -38, -48, -27, -29, 13, -118, -94, 57, -51, 113, 82, -60, 83, -37, -9, 113, -36, 71, 17, -54, 69, 65, 5, -105, -39, -46, -22, -118, -99, 4, -2, -91, -77, 50, -14, 3, 59, -34, -25, 96, 96, -86, -113, 104, 69, -11, -48, -31, -120, -97, -109, 47, -12, 105, -11, 46, 11, 2, 31, 8, 90, -89, 11, 100, -84, -128, 29, -105, 101, 91, 10, -46, 95, 20, -99, -50, -3, -121, 59, -83, 54, -124, 84, 10, -40, 47, 93, -22, -73, -15, -98, 81, -42, -71, 39, -35, -84, 103, 61, 78, -34, 74, -94, -109, 83, -13, 115, 57, -77, 110, 11, -65, 57, -95, 105, -103, -96, -68, 98, 95, -18, -39, -110, -88, -80, -25, -111, 96, 33, 23, 23, 0, -91, 63, -103, 13, 84, 70, -41, -61, 62, 121, -54, -11};
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
    msg.setTimeStamp(0.667235470382);
    msg.setSource(25333U);
    msg.setSourceEntity(195U);
    msg.setDestination(48860U);
    msg.setDestinationEntity(81U);
    msg.width = 23255U;
    msg.height = 11751U;
    msg.channels = 78U;
    msg.depth = 200U;
    const char tmp_msg_0[] = {-29, -90, -36, 2, 91, 9, -27, 68, -117, 77, -89, 75, -106, 7, 21, -66, -98, 67, -109, -51, 67, 32, 17, 105, 110, -76, -64, 39, -101, 97, -124, 63, -5, 43, 2, -106, 34, 92, -96, 16, -45, 78, 66, 48, 48, -46, -103, -96, 39, 36, -84, -117, -51, 44, 64, -117, -115, -78, -74, -114, -30, -78, -5, 114, -85, 101, 19, -8, 126, 113, 94, 86, -107, 51, 56, 69, -68, 49, 74, -93, -44, 7, -31, 42, -116, 62, 23, -41, -23, 4, -28, -91, -93, 54, 28, 53, 38, 23, 118, 106, 111, 95, 62, -90, -79, 114, 126, -78, -95, -62, 89, 34, -119, 11, 107, 71, -89, -2, -87, 55, -20, -7, 58, 85, 14, -3, 67, -96, 111, -86, 20, 32, 83, 28, 25, -2, 96, 110, -124, 74, -104, -32, 8, -103, -99, 66, -43, -6, 86, 30, 74, 122, -24, 120, -79, -56, 11, 24, 91, -5, -111, -51, -102, 8, 85, -32, -121, -111, -76, -90, -58, -31, -115, -119, -80, -65, -92, 109, -50};
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
    msg.setTimeStamp(0.821806854609);
    msg.setSource(17093U);
    msg.setSourceEntity(5U);
    msg.setDestination(11931U);
    msg.setDestinationEntity(16U);
    msg.width = 28278U;
    msg.height = 7291U;
    msg.channels = 197U;
    msg.depth = 112U;
    const char tmp_msg_0[] = {-98, -38, 38, 97, 57, 86, 66, 8, -36, 21, 10, 22, -11, 11, -64, -32, 126, -100, 24, 106, 91, -82, 98, -25, 28, -90, -31, 1, 91, -119, 125, -31, -42, -38, 120, 99, -125, 91, 16, 96, -92, -19, 3, -103, 44, -62, -81, 42, -73, -29, -123, -6, -11, 89, -109, -116, 12, -12, -19, -33, -42, 76, -28, -89, -54, -118, -12, 97, 77, -10, -39, 94, -29, -10, -13, -32, -53, 68, -70, 3, 124, 50, 60, -22, 1, -5, -57, -98, -78, 98, 48, -89, 92, -31, 84, -119, 29, -52, -57, 79, 43, 14, 58, 91, -55, 17, 93, 90, -82, 2, -105, -94, 55, 26, -7, 102, 125, -104, -70, 63, -67, 17, 33, 86, 54, 12, 9, 36, -19, 70, -69, 36, -40, -73, -75, -119, 117, 21, -37, -113, -68, -100, 51, 16, 19, 58, -59, -109, -48, -41, -105, -128, -2, -65, -128, -73, 117, 27, -103, -45, -124, -49, 102, -69, -82, -44, -79, 58, 4, 88, -32, 97, 121, 82, 7, 108, -103, 92, -32, -28, 41, -38, 58, 119, 40, -76, -13, 94, 6, 121, 44, -67, -82, -69, 126, -116, -49, -98, -21, -41, -4, -38, 109, 110, -2, -63, 26, 24, -77, -49, 41, -52, 107, 26, -117, 63, 31, -17, 37, -69, -62, -105, 21, -43, -66, -10, -88, 84, 50, 16, 81, -76, -117};
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
    msg.setTimeStamp(0.388445409335);
    msg.setSource(13078U);
    msg.setSourceEntity(246U);
    msg.setDestination(40040U);
    msg.setDestinationEntity(195U);
    msg.width = 15603U;
    msg.height = 45042U;
    msg.channels = 209U;
    msg.depth = 100U;
    const char tmp_msg_0[] = {83, -98, -18, -73, 117, 72, 19, 115, -83, 104, -95, -123, -16, -60, -91, -1, -84, -97, -90, -3, -81, -63, -113, 21, 0, 2, 17, -112, 0, 59, -92, 35, 115, 27, -39, -94, -14, -16, 57, 53, 0, -46, -16, 106, -13, -88, -35, 37, 26, 65, 66, 58, -10, -81, 89, -48, 111, -86, 78, 44, 37, -21, -106, -4, -81, -7, 22, 91, 107, 30, 35, -113, 8, -22, 116, 78, 49, -37, 32, 61, 22, -97, 94, -107, 67, 107, 104, 54, -99, -54, -74, 96, -47, -62, 48, 42, 56, 120, 76, 118, -105, 40, -125, 9, 40, -48, 35, -10, -118, 22, -88, -66, -116, 65, -83, 85, -9, 69, 78, -122, 50, 106, -123, -81, 19, 34, 10, 56, 67, 69, -122, -55, 33, 39, -31, -71, 99, -118, -83, -108, -78, 40, -88, -16, -128, 101, 53, 116, -114, -123, -37, -104, 63, -84, -86, 1, -13, -51, 79, -68, -34, 90, -37, 73, 119, 121, 13, -3, 100, 44, -124, 63, -102, 119, 45, -111, 50, 115, -94, -57, -120, 108, 40, -19, -126, -34, 76, 44, -16, 13, -104, 81, -93, 80, -45, -70, -110, -127, -101, 94, -42, 122, -21, -59, 91, -86, -106, -113, 11, -16, -88, -29, -67, -6, 50, 6, 58, 112, 97, -39, -14, 112, -102};
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
    msg.setTimeStamp(0.0611384622791);
    msg.setSource(5079U);
    msg.setSourceEntity(206U);
    msg.setDestination(51612U);
    msg.setDestinationEntity(21U);
    msg.frameid = 153U;
    const char tmp_msg_0[] = {-66, -74, 57, 88, 120, 58, 62, -10, -105, 44, 86, 8, -8, 106, 118, -53, -112, 90, -106, 101, -56, -79, 13, -8, -67, 74, -99, 71, 120, 18, 98, -42, -92, 74, -99, -41, 66, 14, -58, 74, -109, -113, -10, 110, -39, -114, 63, -10, 8, 105, 19, 74, -93, -76, 45, 82, 9, -28, -33, -111, 49, 84, -47, -10, -20, -20, 75, -58, 80, -105, -47, -56, 43, -60, 84, -46, 61, 95, 73, -59, 91, -86, -92, 86, 94, -115, 104, 84, 88, 16, 40, -51, 7, -37, 21, 46, 14, 29, 36, 116, -60, 92, -49, -57, -31, -20, -72, 76, 20, 36, 40, 47, -38, 42, 0, -33, 105, 95, -92, -27, 89, -119, -74};
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
    msg.setTimeStamp(0.127694239403);
    msg.setSource(53165U);
    msg.setSourceEntity(250U);
    msg.setDestination(6305U);
    msg.setDestinationEntity(99U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {74, -126, -81, 122, -114, -46, 104, 37, -94, 73, -37, -44, 14, -80, 62, -59, -14, -106, 27, -7, 83, 11, 16, 10, 15, 18, 121, 106, 120, -45, -85, 78, 53, 33, -75, 75, -120, 58, 26, -39, 80, -42, -34, 55, -28, -33, -100, -39, 24, 10, -55, -123, -96, -95, -51, -89, -103, 112, -127, 43, 79, -66, -63, -91, -49, -56, 65, -73, 22, -83, -19, 30, 70, 7, -71, 3, 31, -92, -43, -18, 3, -120, -106, 14, -81, -97, -25, 51, 89, -105, -35, 57, 88, -54, -127, -20, 74, -54, -107, 78, 125, 10, 9, 16, 79, 118, -6};
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
    msg.setTimeStamp(0.355602612665);
    msg.setSource(24082U);
    msg.setSourceEntity(110U);
    msg.setDestination(38485U);
    msg.setDestinationEntity(192U);
    msg.frameid = 88U;
    const char tmp_msg_0[] = {-20, -17, -73, -49, -1, 82, -2, -79, -45, 5, -73, -34, 108, 105, -53, -95, -116, 50, -39, -14, 35, -106, -17, -111, 14, -1, -30, 50, -61, -108, 49, 5, 50, -93, 72, 72, -106, 77, 66, -112, -58, -39, -106, 5, 88, -89, -52, -108, 119, 0, -21, -25, 99, -111, -125, 7, 18, 24, 84, 50, 14, -126, 87, 44, -64, 107, 64, -54, -19, 52, 25, 20, -37, 125, -49, 121, 90, 35, -21, -63, 24, 22, 88, -107, 126, -78, -97, 92, -57, -81, -57, -38, -88, 30, -58, 53, -16, -6, -52, -21, 59, 91, -35, 16, -72, 5, 96, 125, 80, 92, -128, -121, 95, -2, -80, 85, -58, -37, -97, 117, 115, -6, -109, -98, 15};
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
    msg.setTimeStamp(0.867422207093);
    msg.setSource(56554U);
    msg.setSourceEntity(118U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(239U);
    msg.fps = 145U;
    msg.quality = 79U;
    msg.reps = 193U;
    msg.tsize = 164U;

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
    msg.setTimeStamp(0.290484359448);
    msg.setSource(12707U);
    msg.setSourceEntity(40U);
    msg.setDestination(9201U);
    msg.setDestinationEntity(58U);
    msg.fps = 242U;
    msg.quality = 238U;
    msg.reps = 129U;
    msg.tsize = 180U;

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
    msg.setTimeStamp(0.631260890988);
    msg.setSource(16936U);
    msg.setSourceEntity(46U);
    msg.setDestination(4667U);
    msg.setDestinationEntity(182U);
    msg.fps = 113U;
    msg.quality = 56U;
    msg.reps = 130U;
    msg.tsize = 78U;

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
    msg.setTimeStamp(0.334884536702);
    msg.setSource(18954U);
    msg.setSourceEntity(250U);
    msg.setDestination(44793U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.580223158245;
    msg.lon = 0.142003485462;
    msg.depth = 204U;
    msg.speed = 0.351092197548;
    msg.psi = 0.152622207042;

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
    msg.setTimeStamp(0.375981549348);
    msg.setSource(10298U);
    msg.setSourceEntity(45U);
    msg.setDestination(34457U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.696722534058;
    msg.lon = 0.449318969142;
    msg.depth = 46U;
    msg.speed = 0.127078437564;
    msg.psi = 0.576216646877;

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
    msg.setTimeStamp(0.955164188283);
    msg.setSource(49000U);
    msg.setSourceEntity(61U);
    msg.setDestination(63732U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.611794131607;
    msg.lon = 0.668505455574;
    msg.depth = 253U;
    msg.speed = 0.962542298266;
    msg.psi = 0.951042990213;

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
    msg.setTimeStamp(0.802311766395);
    msg.setSource(12088U);
    msg.setSourceEntity(25U);
    msg.setDestination(27384U);
    msg.setDestinationEntity(22U);
    msg.label.assign("WTTVOYXYDSVZRLJCWCRKVVZKAAJVHAPIMOIFQCNWZNIQLROQGVXYOGELODKBACSEYGBRNJVHHWNDEZVRBGQJULVGCZHWKNFIIHYAJWGXFEZOMNJWBYYDUFBSSSUQMXRMIPICPOMWGQUKARTAUVUHEMRXKDDPNFMSODNCMNPHABXULKYDSAHTRFTGZHSGNKMQJLPEFFXAKC");
    msg.lat = 0.751061323942;
    msg.lon = 0.0608454654524;
    msg.z = 0.016138203584;
    msg.z_units = 96U;
    msg.cog = 0.275223443367;
    msg.sog = 0.628022901541;

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
    msg.setTimeStamp(0.562741228316);
    msg.setSource(48119U);
    msg.setSourceEntity(243U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(177U);
    msg.label.assign("YNBVGCDLPMXIUMOWONPVPSJADMUMAWVYRZQDJXZNSTWMOOWNGUEWVKIHVF");
    msg.lat = 0.118863120193;
    msg.lon = 0.895366254135;
    msg.z = 0.647880188946;
    msg.z_units = 17U;
    msg.cog = 0.196566702861;
    msg.sog = 0.336325258923;

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
    msg.setTimeStamp(0.733053085867);
    msg.setSource(17068U);
    msg.setSourceEntity(219U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(107U);
    msg.label.assign("ILVAUVWXVKBEGVYSXCBAJOEAPMWBFWMBPJKDISGZCPDOPMHMHNCQEGXYPJFUXCBJNEGRLZNZHBDFZROIAJQHWQBEWTLASZOCFOWCSDGSWKQGAMTVSKWWLHHHTXFLLLCFPLYIJDYTIOJSIXFHREAYVGPNGOJQEUTPQNGIRNRUNJKEZCZVYZYTTNXZQRUHD");
    msg.lat = 0.155029293542;
    msg.lon = 0.87471214145;
    msg.z = 0.165220775692;
    msg.z_units = 219U;
    msg.cog = 0.206996289362;
    msg.sog = 0.688514307329;

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
    msg.setTimeStamp(0.482987129538);
    msg.setSource(41117U);
    msg.setSourceEntity(109U);
    msg.setDestination(19079U);
    msg.setDestinationEntity(59U);
    msg.name.assign("IXOITPASCKZTHPMJZQWSHRIKNLEWUIKLSGQRTUAZWNYDSVUEOHVPKWXZLIJJZQIPWOZPYHCVNBRUCSUOBORRRAANIJRWYGTZOJDRXMPXKQFOYEKMOYQTFAEVCSTKABVIEKBLPNDJVWEGXDTPBSXYYJQGBUQLSERHTMBPMFACEXAIGEMLFXNHK");
    msg.value.assign("GLIJZTTRQWXRGMJSNFHREHRGMTIDZEBGFPNVLSNAUUHOGFXQTSIAIEWTJWQUUITMGSXOERYCNFMYPMKUFDYNPCQYSSDEVLSKMUSBQBVFLEZBSEAVXZRFJWHBHEJNYVMLRWRMCLQXHMWLZRKQMTOZCKNCIZBNNFJGJJYCXXOKG");

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
    msg.setTimeStamp(0.315799563044);
    msg.setSource(11262U);
    msg.setSourceEntity(37U);
    msg.setDestination(26730U);
    msg.setDestinationEntity(3U);
    msg.name.assign("TDWLVHWDSSKVPJMEUIUTEIQCQSXXCJVHPOSUHSFVTQWIFKUOYSSLXMAWTYCXEVWCCQMXXBMYNOGBBIAMRDKINCVGPDDLRZJGYIAUQDLNQBYKFZNVPUJPROUCTSRPRLYZJHZEMMKXHALJSGPFHOOTCBENJWZMGLQJNRDKZNFNYYOEIGYAKXTEQAHVKBREFFBPJSLJZOZWXAHQIEFLVAB");
    msg.value.assign("IBYVBWBKRJMSFZCZEVJLXEFBR");

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
    msg.setTimeStamp(0.692080513748);
    msg.setSource(5920U);
    msg.setSourceEntity(177U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(203U);
    msg.name.assign("XOIVIGVKLGJBMJYYCBVEAGYVTJDUGZJOLIWEYLNBMHTCAXTQYUKAFTPLTIACFLPWWMGKXMTXRYBNPYCLRZKLHITTPLMXABNSPINEPETCFUWUAQUDABWVFXGMSREYIVOODJZCEFCCSCXIARXEFRBHQOSKDKJPNQVRSFEBHWUPLZPISDKUMETFZ");
    msg.value.assign("IIEUDLMRUDVARNMQJAMEHXORBKBZELZRVHPDNVSQFSXUGRMBOAGQNVQFGZJHXFKYCTPMNFCGRCSYSWYBZXFBJFRBMHGYLLDPOPHDSCQMGLJUELIJUWDHZVSOXWVIYCDXKRTKDAHUULVSQJNPZWAUPOOMESWQFMIBAOHPTRTGITFFCVTXPTJQODXGVOPWAWDWCAICTXZNWBKENMTLZIAKYHYCEWEZPASKKGEXYLY");

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
    msg.setTimeStamp(0.936445798432);
    msg.setSource(52282U);
    msg.setSourceEntity(169U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(157U);
    msg.name.assign("TIDVYVVVOKTMHXRSXXUDCZEMVBUADYAYCWGPEWXALCMVSYZSSKDBJFNOJOKHBFRAAJXKHSWFEVQVJLGLRNSMJOYVKUSXRSKNATOMZLOEKWCNMHBPXKULFWZBWPHFECRWILLTD");

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
    msg.setTimeStamp(0.480284915734);
    msg.setSource(15234U);
    msg.setSourceEntity(43U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(176U);
    msg.name.assign("RZNOPGTUOJHYWTHJCYSPJNSIZGFZIDNFERILLKLTCDTOHUCUZCFOMLGMQZVWMQFYJXIKADTDULWMMZJDUKARJQVSGIYIARFKFNRKQLNEETBEFWTUWRXDGPKZZLBTNJPVRIXBRBAVVOYRJDYGHOECCAFHTMFACYVSYKGPWFVPSPXVNQXNQHABDXJHGRUMNBNIVOXIWAKOBPCYBLZ");

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
    msg.setTimeStamp(0.596635156785);
    msg.setSource(30279U);
    msg.setSourceEntity(86U);
    msg.setDestination(45973U);
    msg.setDestinationEntity(246U);
    msg.name.assign("QLPGPTGRIPTXDASEWTFHCKFWRZQINJECURALYOININBRMOXVZUOWFNXDYPSJKAXFSUZHDSGCKMDZJVIRZWGJKZBNJHEMRWSUSQBYRFMLDZXIBF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CMGCONUTEQJLJISVYZOVQOAJHOUHUZIGUNDHUPZXAPUBMJERIOQBFKAYVSJZHCSJQVFDFBARLLLBBGWAPRYVDNNDDDMXYEQVUBNIKTKOBLIDFPTETBSWVMLXSCKLCCAMUWDQQVRIFWGKMHEKQGDJMBIKRWXFIWXNWZLHKKTOXQNEFTCOSEPYGFSJAZF");
    tmp_msg_0.value.assign("IBGZMSSDGMJEQEPSQSLWBLQHGGUZTDXYVXODLAVRNMSCPPFIVIADRWLQERVQRYPSOJAJPFBTMAMKZNGUGNUEKTXEOHTDIMNQJPARXTHYJRHLWIQFYJXLJDUEFRWNMCOWZAXHDYHD");
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
    msg.setTimeStamp(0.980294219913);
    msg.setSource(63642U);
    msg.setSourceEntity(43U);
    msg.setDestination(27248U);
    msg.setDestinationEntity(211U);
    msg.name.assign("VLDBZGVKRNXPVYVWTLFWBKPJPAPQSZCAXILMSVAAKDJRBDRZRKIQBZUERDZTHMLKHIFSMJGASCREMEYSGQB");
    msg.visibility.assign("ISLIZRHTTMWXPEPWUHRQCQGJTIGEKZJXVYJYETPYMORZUMWLTCXUGWKYVXEDGAWSWVBOIRYNDXFEZXHJZWGHVPZKJOUSYLSPLHLSUOQRCUADKJBJLZFCDPVMLDGXHRQLTFPGANQPTYTPQBDYIFFOTXXVUCMNHDLCHJIZARLCNAQCJKBKCOGKOWMCKNSNRFEGSMSFWAQBBONVWDDOVHRRBYI");
    msg.scope.assign("NJZFNJKKMKSWFTAPZGBBJNUCIMCLYZVXEFHXUCERQOSCNVPGSPAEXMF");

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
    msg.setTimeStamp(0.0935544635344);
    msg.setSource(58660U);
    msg.setSourceEntity(180U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(34U);
    msg.name.assign("IPWULXGKARIOIBAKFKRAVAFAXBYVZRGSZLKOOXZHLAFPYHFDYFOTMOSHVENFMQVKUXWPUNWYSBVIKGHTCMGLMSRMOQHJYIKETHDSPLMD");
    msg.visibility.assign("LHYNCOMUXDMRCJIGCMILLSPDQSTGLWEXIJTRBVJCWEXKKZDVTRZIFIAGTUBBKISKBEOYJKVNXQZVKBAQLPHFRBCHGCTAMYKVYUPQGUFGPHRDOQFTTHDVAZHOIPQASWNCYFCFSTMIBWUJAJMWPHNQZNFEEXJSAUSUGONTLODPZLQGMSMGZ");
    msg.scope.assign("XJAROEAQMLDNYHHUOCVBNRXD");

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
    msg.setTimeStamp(0.269434591296);
    msg.setSource(41946U);
    msg.setSourceEntity(105U);
    msg.setDestination(10120U);
    msg.setDestinationEntity(160U);
    msg.name.assign("NNSLNDXNXMHNSUKJCEKQLTJGUXPALXZZCHVBBUUPKWQQVGPIGZUEKSIAOZPCWEUCFMTZZPDXIPADIJRSXTMYFFQOONNETOOCTRQRTJKHSIYSVLRUXJCJGSDYZDYCFDTVMGAEYMPWLHNBVBMBDWBOLYBLTGYMRZKELFIPWGMJABJWHHLABRRVJQAEYOQUGMUGKRFIISETFONIRKLWOKRJBYQVPH");
    msg.visibility.assign("HTKFUZEKOSGYRKKMIQGUCDPVFNFEZPRMJXATCLEBPMALAMZWOH");
    msg.scope.assign("ZWRVHCMNAZTTZAAWTFKQUZUFTGCDXSOGUUSFKCNEIGVBILSWQBPYQNLLXFKONDVJNRZTRSSIRQBSGOVNEAHDDXVYMOHXRPLMTIFFMVKQKPKWKZPYNPGIPJLBZTZUEAOGYSNRPIVVCMRQNMOXULAZTRUFOIMYUCRJQFHALEWYASWDEBCOHPOSQPQ");

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
    msg.setTimeStamp(0.164324312541);
    msg.setSource(5364U);
    msg.setSourceEntity(8U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(174U);
    msg.name.assign("REPUVREPHELSEXGFALTHZOLBXHYTAEBEDMVUWGMYMFIZCWPDJVIJPFTIZUNDRABDAXIXUIVQIFGKKPHHIRMOQSZLXJCCVGZKMQALUDPSAAGRREJYOTCVQWKMSGYDVDNNHNESWXSURXCNZWWSBGHTVTPOICBIURPFLSZLXWOTTFFUJEZMIEJKOPQUQKKQJKSFVBBRLJHBPQOXKKLNCVMCMWHNLSBJQW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WZUJDQHLMOUANABNDKLKYQUPRSWGWKXTWQFQCPYSINQKOTSKTZCAFHGDRUISLQAMFLSNNIJEKDFFYJOVDXAVYXOBPLAOHWEBTNJZREUHBBMMGMWGWYPMIMZUCFMKZWEYIAMBZZCOHWUTTIRQJABYIXHGUXPCVGGKXTLLRSKTMUEQDSQOLSPVFVVZIHQXJXIDKSWUEJREBXCJDOCOYFPJACLXEHESHDRTPRTHPVVFCYNBRD");
    tmp_msg_0.value.assign("LMHZATRBHVFLDVGMUVTDOAVYDBFTXHTESRTSLBZSGGKQOYCTMEXRXNXYBYSKKGBOMMINGUSIAJXQLKCWJIAYQUNCOTSORIMUCWLJHUMDDECVKTEEYDQYOKHJYVTENAUUBDFHBNLPYGELJDQRYRQSPRLWSHSPACDMCQWCKOXLGNXWKMNRPQVEAACKBZDVNFZJGWGWIHUVZAUUCZXQFFMOSENIJWIGFJPFHLOAXPZ");
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
    msg.setTimeStamp(0.269386117373);
    msg.setSource(45519U);
    msg.setSourceEntity(88U);
    msg.setDestination(31744U);
    msg.setDestinationEntity(249U);
    msg.name.assign("MJHSDHNGZLSBAADSRYKRCJZREOWRFYENEFJPQLLURCQXXSVMKFXEMIVOOOJKBTRESXKGFIIKCQJMKMDNNYYSNVRPTTXZDHVQFLRLUNLGVYBWORGEPOWNPTPYVWGWHAWY");

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
    msg.setTimeStamp(0.0465755142184);
    msg.setSource(17251U);
    msg.setSourceEntity(163U);
    msg.setDestination(38078U);
    msg.setDestinationEntity(117U);
    msg.name.assign("HRMOJWNQTFEHOYGWXMSPGVFVLUQJRPFQCQDYGFEDWWEGANYAOEBZDHLRXVNLBTBBLCLSFMIQBHSRYUFHJPZHJJONWQDPNCTKSRJENIELGMOAUEVSKSZTAVHXSUKUDTRRIPXAPVMAVKQYLEHLUAKFICPQXTDUMXDCTVYWGIDTHULCBQAYAUYJHBMZZSIJNCURGZKDXGCYBWKO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GZRXZLWEEBVISHYXFPZCTFRDRQBHIAWBLWPDDTXOVNOLBZEGUZMJEKESFNQCFCBRHMJUVSGRRTZQOIVNKTFQLEHDYCSH");
    tmp_msg_0.value.assign("CZVYVXMMQXRVGU");
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
    msg.setTimeStamp(0.159419103834);
    msg.setSource(50987U);
    msg.setSourceEntity(195U);
    msg.setDestination(33743U);
    msg.setDestinationEntity(174U);
    msg.name.assign("NYTWXTDZHWXQQOINARAIBTUQVGMDYESMBOYIX");

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
    msg.setTimeStamp(0.783013444491);
    msg.setSource(56782U);
    msg.setSourceEntity(91U);
    msg.setDestination(58792U);
    msg.setDestinationEntity(140U);
    msg.name.assign("UOITLZSDERSXETUBXPDDWQLEHAIWYNONALUP");

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
    msg.setTimeStamp(0.121413360957);
    msg.setSource(2726U);
    msg.setSourceEntity(172U);
    msg.setDestination(31867U);
    msg.setDestinationEntity(150U);
    msg.name.assign("ATRIFGTLMZAQTMJXKLRKAXMZMULSFJZWWVBEBBOVMVGOMKCEKXHGKRZPZIWIZQNLSORFAXHKVZOOADPKHWSYAGRERYUKDPHNFUPIETXNCCEOVPAOYNFPCMDVCLBHDUNGPVJENJOQBVRCLOQW");

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
    msg.setTimeStamp(0.512275118904);
    msg.setSource(23231U);
    msg.setSourceEntity(224U);
    msg.setDestination(24893U);
    msg.setDestinationEntity(34U);
    msg.timeout = 222613642U;

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
    msg.setTimeStamp(0.536190090359);
    msg.setSource(34497U);
    msg.setSourceEntity(163U);
    msg.setDestination(11016U);
    msg.setDestinationEntity(14U);
    msg.timeout = 3792305920U;

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
    msg.setTimeStamp(0.217870859374);
    msg.setSource(41264U);
    msg.setSourceEntity(207U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(123U);
    msg.timeout = 996094271U;

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
    msg.setTimeStamp(0.187212302546);
    msg.setSource(43788U);
    msg.setSourceEntity(54U);
    msg.setDestination(50328U);
    msg.setDestinationEntity(103U);
    msg.sessid = 1195459736U;

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
    msg.setTimeStamp(0.146252438706);
    msg.setSource(44267U);
    msg.setSourceEntity(119U);
    msg.setDestination(20386U);
    msg.setDestinationEntity(39U);
    msg.sessid = 3841001941U;

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
    msg.setTimeStamp(0.716165601031);
    msg.setSource(61340U);
    msg.setSourceEntity(42U);
    msg.setDestination(13740U);
    msg.setDestinationEntity(244U);
    msg.sessid = 1076132517U;

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
    msg.setTimeStamp(0.0355716491633);
    msg.setSource(19222U);
    msg.setSourceEntity(96U);
    msg.setDestination(8075U);
    msg.setDestinationEntity(230U);
    msg.sessid = 4289609165U;
    msg.messages.assign("JKDIBCOJPDHRPIGMVNMBZXSLGWTDWEAEHEXZZNTAPQOZOBHSFTKETLZMMCLDVXQQREKUCZEFGZOZOVIYDNLQZWRLTUSJKLCVDNDCUWFKNXNF");

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
    msg.setTimeStamp(0.826948573158);
    msg.setSource(19883U);
    msg.setSourceEntity(155U);
    msg.setDestination(43242U);
    msg.setDestinationEntity(43U);
    msg.sessid = 628595307U;
    msg.messages.assign("BEWTJIHOSACIPNZTQVDJLRTPMVYZNFSHINVVLSREZRUZUHICHMLIWBAEYRUWYKDWYMIXFACBNHJGJPGKBKQAXLCOEDTRJVTRDMLVXROXLAYSSJFDOEYGOJWKULZBSEOQBCPNOFNDWJZWGRONTGDXUPWQUKNCLCSSQMKGUNBLCGQZBR");

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
    msg.setTimeStamp(0.818497331216);
    msg.setSource(37917U);
    msg.setSourceEntity(227U);
    msg.setDestination(65125U);
    msg.setDestinationEntity(98U);
    msg.sessid = 2573773837U;
    msg.messages.assign("ZXNOGALMEWDNMUDFSQXISHAGPVZAPOABYRSYTXKKFFCZNVQWNQQDSGMQNCFEJRXVCUXDEA");

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
    msg.setTimeStamp(0.511188569006);
    msg.setSource(7766U);
    msg.setSourceEntity(241U);
    msg.setDestination(31278U);
    msg.setDestinationEntity(87U);
    msg.sessid = 1496531319U;

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
    msg.setTimeStamp(0.86745440685);
    msg.setSource(45246U);
    msg.setSourceEntity(112U);
    msg.setDestination(44741U);
    msg.setDestinationEntity(110U);
    msg.sessid = 259517485U;

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
    msg.setTimeStamp(0.0429777919177);
    msg.setSource(29783U);
    msg.setSourceEntity(236U);
    msg.setDestination(15402U);
    msg.setDestinationEntity(34U);
    msg.sessid = 1940370242U;

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
    msg.setTimeStamp(0.141016514409);
    msg.setSource(25442U);
    msg.setSourceEntity(44U);
    msg.setDestination(5364U);
    msg.setDestinationEntity(251U);
    msg.sessid = 2036389757U;
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
    msg.setTimeStamp(0.212730358259);
    msg.setSource(13012U);
    msg.setSourceEntity(213U);
    msg.setDestination(31152U);
    msg.setDestinationEntity(189U);
    msg.sessid = 4001013967U;
    msg.status = 250U;

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
    msg.setTimeStamp(0.738282619534);
    msg.setSource(43889U);
    msg.setSourceEntity(225U);
    msg.setDestination(28353U);
    msg.setDestinationEntity(176U);
    msg.sessid = 1428738101U;
    msg.status = 58U;

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
    msg.setTimeStamp(0.188000670393);
    msg.setSource(20414U);
    msg.setSourceEntity(179U);
    msg.setDestination(16438U);
    msg.setDestinationEntity(160U);
    msg.name.assign("DSWCMBIEWMUPXYQRDZSVGLVDZPBHLGYHZZJQWHYRAEOEKNORTMXOFDIPICRKPYMSKJDFCVIPRJKYAFFJUDGHEYPZFQMFYERKILECBNDRJUHOTVHHYPBXWBZXWGTUGVAJFOLQITBRXXLHETAQOVSMMNQNVBAMLLELXGIAFNEAMSUUNCBDJFXDRROECZUISFSTOSVQZGDBUQUTSWN");

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
    msg.setTimeStamp(0.825283007108);
    msg.setSource(55615U);
    msg.setSourceEntity(139U);
    msg.setDestination(12881U);
    msg.setDestinationEntity(239U);
    msg.name.assign("ZDCKKRQCGCNKWPCWYGVI");

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
    msg.setTimeStamp(0.680623590558);
    msg.setSource(4459U);
    msg.setSourceEntity(63U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(82U);
    msg.name.assign("SGHELMUVGUBNWZREVISBBPXIKCDYMYUUWVFHOMJAZPJCKOUIGJVZNRDJPTKOFGCSPDWJLHHVXNNNLEQSKJAMAOBXBRSRCEAZWULREQSMAQWLZAYFMTWIBFXPLHFQTMVW");

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
    msg.setTimeStamp(0.165525110896);
    msg.setSource(56086U);
    msg.setSourceEntity(134U);
    msg.setDestination(346U);
    msg.setDestinationEntity(126U);
    msg.name.assign("GVIBRUFRHZYEZJVEODKZMSLUPTBQKQCINPICPGXYPXPZEGVWOQTARZAWVQPWRYSDQVSPMCENYJNUTAEGHAIDYWGFGXJTXOCHYQLKJRKPDFVHFUOWXDKMAZWEFMMYXQNNIAMACHPNVGMYRQMHFZLXRILBZRTOWSVIBNLKKUYGCIJNXUEETSDVWJJTNOTFAZOCALBFBRULCKLECITSTOGSMDVQOQUHSEYJDJBOXSKWN");

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
    msg.setTimeStamp(0.59674247864);
    msg.setSource(48079U);
    msg.setSourceEntity(209U);
    msg.setDestination(26113U);
    msg.setDestinationEntity(185U);
    msg.name.assign("UHAFMZQDIIEYBYIHCOIBWVOJVHOPJVZKRZPJTBKUWNPEZGXSTWZYASYNRIHEONQGVKPFBDUXAUDXLHWNCPXXBJTFVFSFITFTAUYTCGWUMGNLFOVNZAPJHVMJNLQBRGPDXI");

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
    msg.setTimeStamp(0.809655479017);
    msg.setSource(6180U);
    msg.setSourceEntity(15U);
    msg.setDestination(62956U);
    msg.setDestinationEntity(59U);
    msg.name.assign("MKXMDBZNDJHDHFZPIAREWQYRCQLLPDVIQNSKCFJWWNXLHCHAOJGESZNXYZMKIRBFFPYLGMPUDWVAOAHTZFRSGKQXBNUOLSAJTOVQVMGBGGSEDJLOPQJXUWSJUOAAKQGDRMSOWKEPBGEFCBEEEY");

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
    msg.setTimeStamp(0.637759430357);
    msg.setSource(63352U);
    msg.setSourceEntity(211U);
    msg.setDestination(23737U);
    msg.setDestinationEntity(84U);
    msg.type = 190U;
    msg.error.assign("EYBEGMOXPTGXJATCWHSGIZPMGTLKBHWWKUACRDQHUQLQKOACZVPSJBZIIYDBXVTIZMIWCOLGQSLTJLMYDPIWNBFAZBHYXDBIVDMQUBUUNESRXLGCBNVXKVFORJKQYQLURKCJTINNFJMXZTWVTOIDPVFYXRFFQPVAEJFNWDRYHFHOKYOLKELJXVSTAURRQACBHZAKGNWWCDFLCSOPGUEASFSTPHPVD");

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
    msg.setTimeStamp(0.648939321663);
    msg.setSource(14558U);
    msg.setSourceEntity(243U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(241U);
    msg.type = 64U;
    msg.error.assign("WYCLHZRNYYTSXQMESOWQBGQHHUOPTKIBDJUKNILEZEFGACZHHYPGVGUIUEJWVNIOOVAOJLKYXJPLRSZGJRBUPNEIDFRWCGVQAOHWTMTARQDRLHBAJEXJZWMKUBRYTPEZYNCPBKHVXJTAUCIOMFMOTDLYMS");

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
    msg.setTimeStamp(0.149452831347);
    msg.setSource(46374U);
    msg.setSourceEntity(93U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(184U);
    msg.type = 73U;
    msg.error.assign("APMBFLMXQTECLFEAPPBDGIMFHPCYXYDTISHKRRWSNUBGIKEBZVXCKTJJWDHYXYMJSZNGICFWFCUSCZZCFIBKSYRQBQWWLHBZXJNDACHXJCZJOVEMHVQLAHYVPXKYPEOPZKAOYGTWVGSAHTUMNDADQGUQLPISSEGNRUZBOTGDTXQLQVEFYRVRJVIQOZTXGCXDRMNJELYEOHODDNSF");

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
    msg.setTimeStamp(0.428645876821);
    msg.setSource(24028U);
    msg.setSourceEntity(106U);
    msg.setDestination(15000U);
    msg.setDestinationEntity(137U);
    msg.seq = 53753U;
    msg.sys_dst.assign("IJAEMGRFDWNKCHXHSLTCULVBDIUJSGKAHAPBOQTMJMYIXTTZCNSWCKNXAAOZVPPPHONFPIVNCTIKLFWWXYXJYDXNAGHYT");
    msg.flags = 169U;
    const char tmp_msg_0[] = {23, -30, 7, 15, -44, -3, 14, -106, 73, 54, -65, -7, -123, -106, -6, 9, -101, 27, -19, 126, 117, 99, -116, 34, -24, 44, -122, -128, 7, -98, 9, -67, 82, -8, 97, 68, -2, 49, 122, 97, 23, 86, 24, -97, -73, -64, 41, 94, 1, -118, 78, -39, -121, 81, -120, -89, -88, 118, 1, -64, -65, -23, -72, -61, 71, 18, -108, 83, -29, -114, -51, -75, 99, -79, -127, -47, 79, 22, -24, -12, -85, 29, 49, -98, 93, 95, -15, 97, 52, -65, -101, 121, -91, 47, -91, -71, -107, 15, 89, 85, 27, 106, 106, -127, -19, 90, -121, -100, -89, 117, 121, 21, -37, 121, -74, 27, -4, 16, -58, 17, -23, 107, 119, -25, -11, 31, -42, -88, -109, -29, -112, -71};
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
    msg.setTimeStamp(0.157336566824);
    msg.setSource(49734U);
    msg.setSourceEntity(202U);
    msg.setDestination(25343U);
    msg.setDestinationEntity(65U);
    msg.seq = 11076U;
    msg.sys_dst.assign("NIEXCURFCPLGWOBOIPVGZYPLCGZBQAIGWMXONUWYVOTBDWYVQYKBLJNALDLEJZEMFKFJURDPEJMAMJRRQNHZACPIEFAOXXAPOZFMEIRQO");
    msg.flags = 68U;
    const char tmp_msg_0[] = {96, -91, 36, 48, 72, -119, -123, -79, -49, 24, 23, 60, 70, -12, 92, -87, 73, 57, -106, 109, 66, -18, -84, 101, -34, 115, -1, 97, 31, 47, 94, -45, 106, 16, 112, 87, -19, -17, 94, 65, -100, 90, -98, 41, 36, -7, -54, 118, -7, 38, -52, -39, -6, -73, -6, 53, -32, -33, 51, 112, 2, -49, 106, -119, 103, -2, 110, 98, 49, -122, 46, 108, -90, -63, 25, 39, 86, 102, -116, 44, 116, 120, -41, 50, -95, -112, 1, -120, -59, 30, -7, -120, -110, -36, 60, 62, 20, -126, 11, 99, -55, 58, 104, 36, 26, -100, -23, -57, 118, 104, -110, -73, -2, 5, 57, -112, 48, -46, -42, 19, 78, -7, -20, 87, -40, -44, -22, 88, -79, -64, 123, 66, 13, -77, -108, -81, 75, 51, 19, -127, -27, -52, -45, -54, -100, -62, 107, 60, 0, -37, 115, -38, -13, 81, -74, 84, -107, -85, 5, -103, 14, 25, 26, -65, -78, -103, 113, 17, -74, -20, -8, -63, -37, -68, -61, -52, 94, 17, -105, 1, 15, -65, 61, 59, -88, 63, -42, -68, -82, -29, 46, 100, 92, -6, -56, -64, 9, 69, 22, 7, 24, 108, -91, 86, -37, -113, -12, -92, 9, 61, 12, 98, 105, 17, -51, 107, 97, -77, 19, -118, 64, 84, 87, 24, -27, -3, -62, -35};
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
    msg.setTimeStamp(0.773542274443);
    msg.setSource(28173U);
    msg.setSourceEntity(124U);
    msg.setDestination(341U);
    msg.setDestinationEntity(201U);
    msg.seq = 7017U;
    msg.sys_dst.assign("CBAIYAHLGFCLLOSPMUNLMGNBAWDEVUTC");
    msg.flags = 117U;
    const char tmp_msg_0[] = {77, -92, -42, 24, -99, -9, 114, 123, -112, 14, 18, 96, -117, 110, -102, 47, -110, -57, 112, -18, 25, -84, 41, -41, -99, -5, -106, 41, 74, 96, 52, 123, -106, 121, 19, 108, -86, -87, -90, -18, 115, 104, 2, 40, 117, -54, 120, 69, -56, 12, -15, -7, -96, -11, -27, -3, -37, 45, 11, -97, -63, -92, 18, -33, -81, -35, 105, -70, 82, 20, -28, -59, -61, 28, -47, 23, -18, -44, 6, 98, 81, -111, 18, 68, -20, -66, 120, 65, 65, 40, -60, -35, -20, -127, 28, 113, 89, 19, -124, -79, -63, 116, 125, 18, 111, -91, -58, 62, 49, -39, 100, -63, 13, 107, 90, -74, 30, 63, -7, -128, 17, -29, -123, 80, -59, -15, 34, -82, 55, -70, -43, 50, -15, -75, 92, -5, -15, -118, -85, 17, 117, 93, -58, -25, -122, -75, -104, 36, 102, 124, 61, 63, 51, 85, -30, -15, 91, -52, 36, -67, 29, 17, 83, 40, -87, -118, -26, 9, -87, -61, 74, 69, 122, -6, -108, -8, -80, 65, 95, 76, -124, 72, 27, 3, -64, -77, -119, -65, -6, -43, 25, -43, 120, -95, -128, -60, 52};
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
    msg.setTimeStamp(0.2052307166);
    msg.setSource(46848U);
    msg.setSourceEntity(132U);
    msg.setDestination(33201U);
    msg.setDestinationEntity(52U);
    msg.sys_src.assign("LQPDICZPEEPHRTQXLXZRWZNSUTPMGMMMLPJVOYETIWRXTVHFCJIJKPMQTUURMNLBQTIV");
    msg.sys_dst.assign("PLAVCRPSMLKZBWFLWGQAQKETCBGCYUZQLJTFCIIVFBMJCTCQMJHRESK");
    msg.flags = 69U;
    const char tmp_msg_0[] = {68, -32, -20, -31, 94, 42, 126, 103, -91, -118, -95, 66, -110, 117, 76, -54, 25, -126, -125, -19, -125, 46, 39, 64, 55, 37, -24, -113, 53, 79, 22, -70, -43, -19, -57, 1, -127, 112, 25, -43, -126, 22, -108, -25, 110, 32, 89, -85, 125, 50, 80, 43, -52, -83, -107, 106, -72, 75, -115, 35, 15, 83, 62, 75, -52, 63, 112, -102, 89, -105, 58, 59, 87, -105, 114, 22, -125, -70, -73, 56, -44, -36, -36, -7, 65, 99, -28, -111, -38, -89, -100, 59, -47, -40, 36, 97, -37, -59, 27, 43, -101, 35, -103, -61, 108, 81, 49, 83, 49, 87, -3, -89, 34, -70, 89, 80, -29, -116, 81, 18, -16, 52, -17, 98, 51, -22, 78, 32, -50, -120, 27, -26, 79, 103, 54, -109, -6, -37, -12, 71, -109, 60, 69, -82, 7, 25, 110, 53, 49, -67, -81, 3, 103, -106, -41, 109, 14, -126, -91, 5, 80, -30, 61};
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
    msg.setTimeStamp(0.584584495008);
    msg.setSource(3512U);
    msg.setSourceEntity(37U);
    msg.setDestination(30242U);
    msg.setDestinationEntity(11U);
    msg.sys_src.assign("PYRMMJPNHRSFPYUGEAORUERUOCXOSASKSVEQEUSPTOEXBBXWCOBRZVMLSVXIZPNJDDIUJBIXSFKDSVSEJHCVEZMJHWADLMYDPJYCZJNNLCWMIROQLQBFTAKVTYHFEIZGQOKOKKCZMGJYKKIXRQQHWINTYWVDHZGCXNXXBRYPWTGTWCURQMKCGDJHUFOALTDJGLYGZNQDFMUBUVAFPNAIZZCHPTQM");
    msg.sys_dst.assign("BCQJGZEWSJXXMDEXGSBWTNQIWIXYSAPUIRORMANOAMUBZLKUZQGHDEXURGNPSHBUEYDHCJTCNL");
    msg.flags = 231U;
    const char tmp_msg_0[] = {3, -28, -101, 121, -40, 1, -42, -95, 12, 15, 9, -110, 115, -36, 118, -69, 63, 123, 44, -69, -59, 83, 100, 3, 48, 101, 42, -45, -6, -111, -83, -114, 101, -57, -66, -107, 7, 24, 65, -87, -104, 101, -66, 77, -41, -103, 50, 110, -31, 14, 95, -21, 41, -29, -85, 56, 45};
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
    msg.setTimeStamp(0.171311736604);
    msg.setSource(41728U);
    msg.setSourceEntity(123U);
    msg.setDestination(40911U);
    msg.setDestinationEntity(149U);
    msg.sys_src.assign("ONGFOSWWJVMOZXEPCMWDAIQKUTXYZUAJBYUBRACPXUJSHWQVLWFHJDBXVLNTTOUUMDPPCIHZVYHNNBKCGITICASEAKLQFOKQFMTMIAYGNYTSLVYESAVMMYQXSTHORTCGREBCRRCPQXINEWZGBLHBMLGIMUSNBSLFKQYVDPRGDIJFDNBEOWKVZPKZHVOQSAWRJXQ");
    msg.sys_dst.assign("BLZOUHSPNMKXZNQWMIUEITOSDJYINBXYXOZQDTSQNARTEOTWCYALADDAUXOCVXHCVHIBTBSVQPSZKQJATJOHIDLUAJOQPVMMILKMVJYVOKUAPFXHMVDZPNCCKWFKCCMFNBUBFRXGSGILDSFEAPNWMPBIAPGRTKPYRNCDWUEZZFEG");
    msg.flags = 56U;
    const char tmp_msg_0[] = {9, 53, -23, -58, 81, 4, -79, -41, 13, 49, -7, 24, -91, -59, -11, 30, 69, 113, 103, 16, 26, 119, -49, -96, -116, 85, 108, 125, -58, 10, -114, -39, 62, -101, -63, 115, -92, -4, 7, -69, 9, -68, 53, 17, -44, 92, 59, 91, -76, -15, 110, 98, -106, -18, -3, 108, 82, -65, 39, 19, 111, -49, -16, 96, 46, -9, 11, -28, -26, -59, 94, 42, -8, 80, -54, 43, -25, -35, 57, -25, 114, 115, -101, -1, 72, -81, -89, 120, 111, 61, -64, 41, -80, -89, -109, 115, -8, -109, 79, 8, -72, -51, -126, 3, -9, -122, 52, 87, 89, 51, 27, 5, -49, 1, 106, -71, -49, 9, -60, 44, 125, 94, 36, 15, 21, -26, -39, 119, 44, 115, 66, 70, 66, 24, -121, -109, 19, 41, 52, 67, -128, 90, -2, -102, 69, 64, -54, -65, -48, -126, -40, 21, 117, -92, -103, 72, -115, -71, 121, 38, -57, -80, -121, 113, -64, -65, 37, 3, 34, -13, -113, -88, 33, -28, -62, 96, 40, 23, 98, 115, -25, -63, 73, -73, 31, -107, -53, 67, 109, 111, -99, -91, 108, 25, 121, -23, -26, -19, -37};
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
    msg.setTimeStamp(0.800355993482);
    msg.setSource(24121U);
    msg.setSourceEntity(214U);
    msg.setDestination(29462U);
    msg.setDestinationEntity(96U);
    msg.seq = 47170U;
    msg.value = 10U;
    msg.error.assign("ABEGHRBQJIYVKCLEEQXFJPOPRWLHNIYBKGKMTTRSYZQXJZTARMHSJWRBWQHGPGPDLJPNWNPIBKXDIFLTLHPVUFPSAWAYMZEMSKMAZGGJAJICLEKIWDCTBUUGDCOLQEGRNCQKVO");

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
    msg.setTimeStamp(0.87687284161);
    msg.setSource(38159U);
    msg.setSourceEntity(165U);
    msg.setDestination(23682U);
    msg.setDestinationEntity(100U);
    msg.seq = 17412U;
    msg.value = 103U;
    msg.error.assign("KYGLWVXZTDJKBGYHMILVOKZGODYJQUGUOYPZMGSZRPCDTGCSUPNWFQAQZLFCUSZIBNFJJRWALEMRICJPHVSTBNEYQKETJIAMJHIXTSIRPFTEMARBFBUQVAYVEHKDIVYCMWHSWCI");

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
    msg.setTimeStamp(0.811064432888);
    msg.setSource(37013U);
    msg.setSourceEntity(126U);
    msg.setDestination(45701U);
    msg.setDestinationEntity(128U);
    msg.seq = 18578U;
    msg.value = 196U;
    msg.error.assign("TOSFLIKRQSDZGQUYQLANVPCVLCSVTYBJUUNAKPDPCQLOOQSLCBLCTIMZGRFAMGUMENWLOBUICVJAHMEMS");

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
    msg.setTimeStamp(0.841566154085);
    msg.setSource(45901U);
    msg.setSourceEntity(174U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(164U);
    msg.seq = 60260U;
    msg.sys.assign("PIPVDZKZESWBQOXENPOJIAXLNEAPGOEOHASDGTDIWQPVCIQSPSJUZTWOMOYKJIFMY");
    msg.value = 0.66804344731;

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
    msg.setTimeStamp(0.277566183882);
    msg.setSource(32190U);
    msg.setSourceEntity(232U);
    msg.setDestination(4770U);
    msg.setDestinationEntity(182U);
    msg.seq = 31848U;
    msg.sys.assign("DCFEFXEBUVUNVNEVOSUGVTZVNXHCKFTJLTRBGTZEYPHIIBYVDULCWATTYWJKNADJMOGWYMHXZQR");
    msg.value = 0.189673903903;

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
    msg.setTimeStamp(0.344154023984);
    msg.setSource(6476U);
    msg.setSourceEntity(147U);
    msg.setDestination(3390U);
    msg.setDestinationEntity(207U);
    msg.seq = 42026U;
    msg.sys.assign("MKLEHPMTQLFWMKGGUUOYSUMICZXJPUEITBSEZRQJRYVQMRXGRPNJHJLRGHSRDQTVBCTDYUGAJZBYWEJUQPLBNCZYCISBLIDPPAVZXWDBSINZNTRUVTOSKPFDCIWAYWGOYTVXYOIFHTFKJERYOBYNFFNHCWBWQAK");
    msg.value = 0.418371754984;

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
    msg.setTimeStamp(0.438403909164);
    msg.setSource(63668U);
    msg.setSourceEntity(103U);
    msg.setDestination(31131U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.213047431315);
    msg.setSource(57982U);
    msg.setSourceEntity(247U);
    msg.setDestination(1512U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.332681569286);
    msg.setSource(27530U);
    msg.setSourceEntity(126U);
    msg.setDestination(28431U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.384694788791);
    msg.setSource(42812U);
    msg.setSourceEntity(156U);
    msg.setDestination(7137U);
    msg.setDestinationEntity(8U);
    msg.action = 251U;
    msg.longain = 679144802U;
    msg.latgain = 1746038774U;
    msg.bondthick = 2991208294U;
    msg.leadgain = 3759031520U;
    msg.deconflgain = 4164881131U;

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
    msg.setTimeStamp(0.821858428389);
    msg.setSource(21874U);
    msg.setSourceEntity(218U);
    msg.setDestination(15758U);
    msg.setDestinationEntity(85U);
    msg.action = 90U;
    msg.longain = 1639334496U;
    msg.latgain = 511446486U;
    msg.bondthick = 3753060915U;
    msg.leadgain = 1278791114U;
    msg.deconflgain = 4169124436U;

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
    msg.setTimeStamp(0.0748336208982);
    msg.setSource(40754U);
    msg.setSourceEntity(238U);
    msg.setDestination(54867U);
    msg.setDestinationEntity(202U);
    msg.action = 187U;
    msg.longain = 1014225165U;
    msg.latgain = 3915122261U;
    msg.bondthick = 1978012055U;
    msg.leadgain = 1768506243U;
    msg.deconflgain = 1614198011U;

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
    IMC::DeviceUpdates msg;
    msg.setTimeStamp(0.981186957846);
    msg.setSource(21615U);
    msg.setSourceEntity(174U);
    msg.setDestination(12897U);
    msg.setDestinationEntity(61U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceUpdates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceUpdates msg;
    msg.setTimeStamp(0.279825117541);
    msg.setSource(12874U);
    msg.setSourceEntity(140U);
    msg.setDestination(6350U);
    msg.setDestinationEntity(124U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceUpdates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceUpdates msg;
    msg.setTimeStamp(0.140718620957);
    msg.setSource(3805U);
    msg.setSourceEntity(84U);
    msg.setDestination(63813U);
    msg.setDestinationEntity(253U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceUpdates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceUpdate msg;
    msg.setTimeStamp(0.634110362664);
    msg.setSource(51269U);
    msg.setSourceEntity(68U);
    msg.setDestination(481U);
    msg.setDestinationEntity(110U);
    msg.imc_id = 28297U;
    msg.unix_time = 3238899567U;
    msg.latitude = -126364499;
    msg.longitude = -321951259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceUpdate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceUpdate msg;
    msg.setTimeStamp(0.747722580945);
    msg.setSource(37345U);
    msg.setSourceEntity(164U);
    msg.setDestination(52812U);
    msg.setDestinationEntity(236U);
    msg.imc_id = 58612U;
    msg.unix_time = 473107643U;
    msg.latitude = 1275302586;
    msg.longitude = -17682459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceUpdate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceUpdate msg;
    msg.setTimeStamp(0.569374890168);
    msg.setSource(47888U);
    msg.setSourceEntity(77U);
    msg.setDestination(9431U);
    msg.setDestinationEntity(67U);
    msg.imc_id = 10013U;
    msg.unix_time = 1574029385U;
    msg.latitude = 677109253;
    msg.longitude = 1314584498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceUpdate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumSubscription msg;
    msg.setTimeStamp(0.367722545553);
    msg.setSource(36872U);
    msg.setSourceEntity(94U);
    msg.setDestination(18508U);
    msg.setDestinationEntity(220U);
    msg.req_type = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumSubscription msg;
    msg.setTimeStamp(0.337923656293);
    msg.setSource(46757U);
    msg.setSourceEntity(101U);
    msg.setDestination(42545U);
    msg.setDestinationEntity(63U);
    msg.req_type = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumSubscription msg;
    msg.setTimeStamp(0.224723375165);
    msg.setSource(37750U);
    msg.setSourceEntity(128U);
    msg.setDestination(56487U);
    msg.setDestinationEntity(176U);
    msg.req_type = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetPosition msg;
    msg.setTimeStamp(0.0378219713857);
    msg.setSource(836U);
    msg.setSourceEntity(2U);
    msg.setDestination(33736U);
    msg.setDestinationEntity(38U);
    msg.pos_type = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetPosition msg;
    msg.setTimeStamp(0.20616469761);
    msg.setSource(36756U);
    msg.setSourceEntity(224U);
    msg.setDestination(21030U);
    msg.setDestinationEntity(211U);
    msg.pos_type = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetPosition msg;
    msg.setTimeStamp(0.242000419983);
    msg.setSource(2603U);
    msg.setSourceEntity(198U);
    msg.setDestination(40424U);
    msg.setDestinationEntity(228U);
    msg.pos_type = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetPosition #2", msg == *msg_d);
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
    msg.setTimeStamp(0.590376975913);
    msg.setSource(25591U);
    msg.setSourceEntity(246U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(219U);
    msg.uid = 74U;
    msg.frag_number = 12U;
    msg.num_frags = 214U;
    const char tmp_msg_0[] = {-57, 60, -14, 94, 8, -18, 90, -35, 107, 95, 45, 40, -56, -127, -128, -20, -84, -119, -5, 24, 52, 11, 122, 24, -69, 110, -118, 49, 61, 85, 22, 124, -57, -53, 56, -70, 61, -71, -41, -53, 51, 74, -99, 29, -78, 71, -38, 0, 29, -123, 96, 111, -24, -112, 59, -45, 59, -108, -103, 86, 47, -82, -45, -29, -94, 93, -21, 29, -117, 92, -34, -107, 97, -93, 76, 124, 41, 16, 110, -64, 39, 87, 35, -89, 61, -71, 101, 19, -116, 2, -25, 23, -10, 95, -56, -104, -73, 5, 56, -2, -42, 31, 43, -9, 31, 57, -12, 87, 48, 18, 10, -61, 36, -7, -62, 52, -78, -52, -45, -68, -59, -73, 32, 110, -17, -58, -45, -107, 98, -6, -71, 11, 35, -58, -116, 81, -107, -41, -27, -118, -78, -31, 89, 95, -55, 33, 51, 55, 64, 75, -98, 7, -95, 35, 56, -37, -1, 80, -62, 43, 46, 23, -2, 109, 25, 43, -118, -122, 96, 83, 34, 33, 83};
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
    msg.setTimeStamp(0.803136591746);
    msg.setSource(27143U);
    msg.setSourceEntity(120U);
    msg.setDestination(20047U);
    msg.setDestinationEntity(92U);
    msg.uid = 64U;
    msg.frag_number = 14U;
    msg.num_frags = 64U;
    const char tmp_msg_0[] = {-9, 110, -2, -65, 1, 24, -66, 72, -1, 7, 79, 44, -121, 58, 66, 55, 26, -127, 14, -56, -126, 95, 50, -16, -118, -7, -120, -59, 39, 107, -33, -38, -79, -96, 42, -32, 36, -119, -16, 112, 105, 21, -74, -117, 69, -55, -23, -59, 13, 26, 61, 15, -70, -87, -46, -37, 6, 92, 76, 39, 78, -10, 107, -68, 93, 62, -112, -111, 60, 114, -77, 72, 107, 106, -44, -38, 4, -111, 95, 104, -67, 97, 22, 18, -111, -33, -21, 56, -107, 88, -53, 19, -53, 105, 11, -95, -34, 123, 120, -94, -42, -7, 81, 79, -38, -112, -80, 29, -50, 30, 97, -62, 49, -79, -83, 38, -112, 107, 81, -105, -102, -6, 49, -64, 2, 28, -39, -60, -10, -2, -9, 114, 98, 14, -83, -60, -83, -78, -50, 17, 27, 114, -45, -93, -44, -126, 98, 17, -6, 36, -63, 65, -82, 91, -3, -123};
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
    msg.setTimeStamp(0.333345117606);
    msg.setSource(22911U);
    msg.setSourceEntity(233U);
    msg.setDestination(31110U);
    msg.setDestinationEntity(233U);
    msg.uid = 139U;
    msg.frag_number = 130U;
    msg.num_frags = 216U;
    const char tmp_msg_0[] = {-10, -93, -123, 7, 77, -21, 99, -61, -68, 19, -92, 42, -98, 111, 95, -59, 15, 120, 10, 21, -90, -88, -112, -127, 114, -9, -67, -3, -39, -75, 124, -15, -76, -22, -28, -69, -65, 71, -31, -46, 5, 19, -15, -82, 62, 24, 8, 104, -36, 110, 89, -26, 92, 16, -125, 23, 9, -127, -128, 94, -30, -117, -127, -61, 106, -98, -94, -44, -118, 28, -29, -56, 49, -58, 81, 63, -46, 100, -58, 49, 13, 88, 126, 25, 99, -52};
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

  return test.getReturnValue();
}
