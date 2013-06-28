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
    msg.setTimeStamp(0.23172838032339738);
    msg.setSource(64124U);
    msg.setSourceEntity(45U);
    msg.setDestination(30441U);
    msg.setDestinationEntity(137U);
    msg.state = 145U;
    msg.flags = 213U;
    msg.description.assign("RPPSOZFUTYCMVMRWTUZXEGBUGGNCZDNRXJJPPUQICOSIVVLOOAYTOLCWDJQTKDMEKYIFMGLYIBURRMTZDKLSRDCFXHVCPUHWUOKPMDEBIABDSISEEPQCRMDQXLHINLIRNWHHKNQKSQWVYHZFDQTUOMAEZAXGTUIDOQGNVSBPETXFGAKXASYHKIQEGAWABFTKUYHLFLAQRXZTJPCYVVSGVZWPLNWEBYYNFWJMLJNWNEOHAOVJBZKZFXMBJ");

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
    msg.setTimeStamp(0.7803539289040269);
    msg.setSource(57026U);
    msg.setSourceEntity(98U);
    msg.setDestination(56444U);
    msg.setDestinationEntity(183U);
    msg.state = 224U;
    msg.flags = 160U;
    msg.description.assign("DDEKTXJLHNYALONJEQNNKAZTGVADBGSSCGLFZDNGCNYWZJOXJIEWRHHVSALRPVCAUQTDHHJAUCKNHXZOCKMMSMMLFEUMOGUFNMM");

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
    msg.setTimeStamp(0.6678999302850733);
    msg.setSource(26908U);
    msg.setSourceEntity(206U);
    msg.setDestination(53436U);
    msg.setDestinationEntity(216U);
    msg.state = 135U;
    msg.flags = 179U;
    msg.description.assign("OEWMOCGYVDLUKRLBCHDKLXHPJRRGLWPZPGQMASEMEDDANTDWZPITUHAEGVQMVXYOJRSJBEL");

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
    msg.setTimeStamp(0.5783681508950492);
    msg.setSource(31491U);
    msg.setSourceEntity(191U);
    msg.setDestination(19586U);
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
    msg.setTimeStamp(0.264540321954983);
    msg.setSource(64751U);
    msg.setSourceEntity(100U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.9195204913330586);
    msg.setSource(19876U);
    msg.setSourceEntity(21U);
    msg.setDestination(53840U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.5320511817946308);
    msg.setSource(207U);
    msg.setSourceEntity(226U);
    msg.setDestination(41250U);
    msg.setDestinationEntity(57U);
    msg.id = 217U;
    msg.label.assign("CQIUKRZTRZQZGBXUTFZAYOQMPXQOAWWDCWCJILJHXUTBSNROUNNDGSEELSUXZMMAHLAQTPWYORUAVHONGSKTBAMJEOXGDPEJVZHQSYFFHLHBLBWKDJXWCRPDTVIVRRYKSILYKYYUZCVGFAARVEYO");
    msg.component.assign("LZREMSZNXDGWHHUNUKTZVTPBSGMVMTYUTVBDWUGIAKARMXBDYJLSQPNLSFZBGVYXRJOEVMWVBPPDFOCMOAYGWDACNRWEPACWLOCLQFLJLAXAVTZIQKSXQPGFEYBSBHXRHIIFEIHUYFOBHTPDJDEJWNCYQVMJPDMYOGQLJIFUDFUOPNBGO");
    msg.act_time = 56350U;
    msg.deact_time = 22692U;

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
    msg.setTimeStamp(0.214270565231924);
    msg.setSource(44311U);
    msg.setSourceEntity(170U);
    msg.setDestination(22929U);
    msg.setDestinationEntity(54U);
    msg.id = 9U;
    msg.label.assign("RYSIMISDDPDCTPGVJCQHVIUAWTBLPUSMOOPRVPJWEAEAFGMPXGJZIWYLMXXUVMXHBYFQZWGKHXHPSCJQQFYHIMOIBRFLREDYILOIARCMIQOBLITNDXXNZXOSMMTQJBC");
    msg.component.assign("ZWIYZXIFZGGHVHDDNQUMRIQEJMLEIFAPWXLFKISQPGIVXUITOVHWAEYKOBTUCKBDYHNLBYDCDUTUUTCXTNYRWACNRSMAWNHFJTPRMPQ");
    msg.act_time = 48265U;
    msg.deact_time = 59296U;

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
    msg.setTimeStamp(0.812725946964081);
    msg.setSource(9145U);
    msg.setSourceEntity(81U);
    msg.setDestination(39648U);
    msg.setDestinationEntity(178U);
    msg.id = 191U;
    msg.label.assign("HRUCEYVMWILWXLSUQCDODWIUBGWKDCKDXDQKFYTOTOIVQOBLEMLURLRONHLTZNWFKQGJVOCPPUXKGZETDSDHZTBNVVTQMHBAGAZHLURNPWRGAMAMTZZO");
    msg.component.assign("WPBEDJWRVBEHSFHIEOKZUAJZFPQTDXLWSOFUGIJIVLIPYRPKRTRHBSGJTLHTNUJGXMCLSSANGEHAKZQKYZFHDSFBPOUDHNTXKXXEWZATBIGISVLQBQNHQCYYUVHGOTAAEQMLRCZGKGPZZLGYOOVMJAIKGTKXXMIKNXCCUWRCJYYNXDJBXYDWCOMJWLPQWVSVMFOUPNSAMHVOVAIREPFDYWFQJKQBMFZUAUEVPSNFCRDLCDTDYMBNRERN");
    msg.act_time = 64288U;
    msg.deact_time = 7708U;

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
    msg.setTimeStamp(0.9429834417947667);
    msg.setSource(13273U);
    msg.setSourceEntity(130U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(54U);
    msg.id = 81U;

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
    msg.setTimeStamp(0.8557354959138928);
    msg.setSource(58019U);
    msg.setSourceEntity(134U);
    msg.setDestination(2200U);
    msg.setDestinationEntity(143U);
    msg.id = 163U;

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
    msg.setTimeStamp(0.1303457084546671);
    msg.setSource(22332U);
    msg.setSourceEntity(97U);
    msg.setDestination(50857U);
    msg.setDestinationEntity(232U);
    msg.id = 99U;

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
    msg.setTimeStamp(0.9152440499059395);
    msg.setSource(18053U);
    msg.setSourceEntity(63U);
    msg.setDestination(30125U);
    msg.setDestinationEntity(237U);
    msg.op = 137U;
    msg.list.assign("CKNLJMJGBWMOFYICGBTEUZIJXLVNONCESPLAHUUBHDGWAKBHUOLSZUQOGAPORLDDXQVPWZEQAFNVLETNKQQNMNRWWNCSMTKZAETRCGNIAODFCXUXQIFDMRYSUQ");

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
    msg.setTimeStamp(0.6163255286046232);
    msg.setSource(51911U);
    msg.setSourceEntity(239U);
    msg.setDestination(10728U);
    msg.setDestinationEntity(208U);
    msg.op = 118U;
    msg.list.assign("AVXWGANQZERPKNJHJTMNEDLYORZMICYXDXOFEAPJCYHOHJUOCZZMBRUMVRRCTCRLITAKERIBMWFJDKSXLFSGHGPJWI");

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
    msg.setTimeStamp(0.023513606913629803);
    msg.setSource(52292U);
    msg.setSourceEntity(120U);
    msg.setDestination(58022U);
    msg.setDestinationEntity(8U);
    msg.op = 161U;
    msg.list.assign("RCRTVCDRYVHYISREBPANONPZHKPPSXHFBGBKAXPDGFFALEAMKRSLJFQXLTMSTXPBYRXVVRQTGCBMWFPAGEUJWD");

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
    msg.setTimeStamp(0.9198582409983098);
    msg.setSource(7006U);
    msg.setSourceEntity(240U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(114U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.4018413855374755);
    msg.setSource(22172U);
    msg.setSourceEntity(46U);
    msg.setDestination(33075U);
    msg.setDestinationEntity(244U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.7019216963717979);
    msg.setSource(35477U);
    msg.setSourceEntity(57U);
    msg.setDestination(50070U);
    msg.setDestinationEntity(224U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.34828611045634905);
    msg.setSource(8723U);
    msg.setSourceEntity(112U);
    msg.setDestination(3359U);
    msg.setDestinationEntity(211U);
    msg.value = 64U;

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
    msg.setTimeStamp(0.48038106432712513);
    msg.setSource(57556U);
    msg.setSourceEntity(185U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(97U);
    msg.value = 212U;

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
    msg.setTimeStamp(0.7105873659789018);
    msg.setSource(51900U);
    msg.setSourceEntity(70U);
    msg.setDestination(65511U);
    msg.setDestinationEntity(1U);
    msg.value = 51U;

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
    msg.setTimeStamp(0.3900035595077299);
    msg.setSource(55405U);
    msg.setSourceEntity(240U);
    msg.setDestination(36268U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("XFRMELUPPQPMHDQVFDFUSLEXZNQHBHHRPGLKOVYJQNTBRTWVNWQFSBFISXIGVLNAAQKWXWKKJGZHDUOYYRJTVZICMVLZSAANUJREGVWLRCVDUHAORNUDNMBWZWWFGAFODDIPZBISZBKLYTJDDSSBPSQKJUAHEXFPXMEOMMG");
    msg.message_id = 2346U;

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
    msg.setTimeStamp(0.18628756336026175);
    msg.setSource(64348U);
    msg.setSourceEntity(73U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(241U);
    msg.consumer.assign("TRFZKNFKRAAKDDCFEUGUBNMJPCHRJYBDZONVGLOZKCWIVMZBEJBPQKIFEEPVSZNKLTWSRVZTEDSMOALQANOFCDGNPBKSUNWNHBQSUFOCJD");
    msg.message_id = 29643U;

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
    msg.setTimeStamp(0.1093960197348347);
    msg.setSource(64969U);
    msg.setSourceEntity(81U);
    msg.setDestination(58392U);
    msg.setDestinationEntity(226U);
    msg.consumer.assign("XSYMTTSQVYQBJHGDMUPQNECDSNKVFVHKWYIMBKUPUKBFKWEMCUEPBVUYRXIXNSEWRJBORFOLLISQBTFYFCULCEXUOJQPRMRITDFOKJUASEYPTGMAWAGAOHQMDOXYCLVLVCPDNTSWQGPITZDAJJLNVYEICPXIZZAKLDRZEGFKGDCZJPFVEOQDHSTZHGXRDVXJKLLPWGSARHWJYFWHQQIRBOOAHUWMEAKTYNRAOWLNHIBZB");
    msg.message_id = 43539U;

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
    msg.setTimeStamp(0.6116861111368751);
    msg.setSource(17414U);
    msg.setSourceEntity(138U);
    msg.setDestination(51128U);
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
    msg.setTimeStamp(0.6303127335622761);
    msg.setSource(29718U);
    msg.setSourceEntity(201U);
    msg.setDestination(44891U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.6562020960252909);
    msg.setSource(10946U);
    msg.setSourceEntity(253U);
    msg.setDestination(26740U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.7612548471366994);
    msg.setSource(41356U);
    msg.setSourceEntity(250U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(170U);
    msg.section.assign("CSHWEKCAAVEAHQHGAPELREIJKWWGZKPCWTIIXFNLDTSOQOFHOCMUXYOMNDXGDASUGZNBFVRGCBJFPRAPJXBQKMHNLDYIHGXTZOXHQQUCVLYSXXZVFRYGYBMYCENFESXUTWNJBA");
    msg.param.assign("BVIIAEEWNLUWPEZQAEQZBJBVDOKXDMKEPRNKQYBMHQWGIIQEWIGUGNNHMFXJOOMGYOYEKWTJLOWZRJQFHJCZJVWRUGLKSFKLPDFVZAGVUHFRSLXOCQ");
    msg.value.assign("WYJPZIXWVONLFJNZAHMQEPBFETAUNQKGNGOAYSLKIVDTMXYSFKPIEELSCEIESYAX");

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
    msg.setTimeStamp(0.5401341971008952);
    msg.setSource(1179U);
    msg.setSourceEntity(34U);
    msg.setDestination(12141U);
    msg.setDestinationEntity(178U);
    msg.section.assign("XCHUOXBXFEYWKOMWYNQDZNHGRMIJCCOBJZLURODHJTMXHEKJTZEMIRUVPKOLJIZPYQEEFDAMQQPWWNUZDFVETPYWGRKWAETKXTKXZNPFYOMSKOKONOGY");
    msg.param.assign("MRLSJMFTDHJBQENOQVWBGWTCLQTZXPBBHQUQAVEIWRNAQTDZXABSOXPNZZYUVNPWTURRNEGFNYUKN");
    msg.value.assign("NJYMBQLLGUYYIBPULTMUBYFDKXNKUCBNGDWKJSTWCPIEOYFRYDDFJDCUTCOXVTJCNYCOHGTRBWPMKXSHJGCVENEWGGSFZHORVMTQBRFFMHSDANMPBPHUYZJJTLZZDRUEWYVFURGZSNFIEAAJEOPQEWZOXKQLFKPKCXHWQOVLAPHXZTILCQLARRHKPEBSODIDEZCUAVVSAEPZLXHSAVWO");

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
    msg.setTimeStamp(0.9615443772240636);
    msg.setSource(37335U);
    msg.setSourceEntity(215U);
    msg.setDestination(21932U);
    msg.setDestinationEntity(140U);
    msg.section.assign("FWROMDYRXJZVSYWZBDKDUIDXFWEZZFXSQBHPOLXTGMBDLNUERQFCFMVJWEXYPUVNTQQERAFTPAEPKCZGIWARQNJBUMIYYURKMNJLPYWAGVAIGQEPCKALZGGE");
    msg.param.assign("XFQYOASPPVWVADBIGHRDPWUDHXNHRLSUBQELDWJFJCDHTCOOKEWMNVPBLCRRKUUZWVAJYCNOWEORPMZWSCPUTBWGDKHSTBHMTGEGQEBBJPUIKNWFQQQGFAORJGARQMZIZJIOJVIU");
    msg.value.assign("ANKGJTCUVMYVRFLLVBNCCTXMIHHEPGFFMXDUQAYXRTTAABPDBATOVRANDKLUNEMPDDIWWKRJEYAKZEZPJCUTONXZDUIVOCWWXSYSDWRDMJUGKWLGXKOJJNOIHJHOIQMHVWSEGIFNCWFLEEDSGOPKCTSHUXCUOLAGPRKPYQVSZQEDTQSYMQZZSBXXYGLUBKQZBMRQLSMQWRFLFRAEZTRFQIGAZ");

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
    msg.setTimeStamp(0.7841492280607986);
    msg.setSource(28437U);
    msg.setSourceEntity(157U);
    msg.setDestination(37591U);
    msg.setDestinationEntity(88U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.36675549812010544);
    msg.setSource(6696U);
    msg.setSourceEntity(18U);
    msg.setDestination(44321U);
    msg.setDestinationEntity(160U);
    msg.op = 203U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QCRMYITQVDHIGSSZXEXXPFCCBYROPPIEJYKLOCPEZOIWTWBUFFQWXZEAKIGNJLNQAIONZRSPPJWRRYYVHWMKZGOFAMSATFJFTKVOQXMYWBQCDNSFXTULLIHOBDHHUPUAPBIERXUGUQHRPWSDVDDNKCURXTMTVTVOGBGYJTLIAZMRWZMUUZTSSCGMSJZEKGWJAAMAAIFUDDPLWBBDYGYNHCCKGNOENLNQVRLLNVVLJSBJJEBZXVOCQ");
    tmp_msg_0.param.assign("WDSYDWGPEMVHCOWGTHLNMEIRTEGTZRLLYJFUXFPMXVBUBCZKJXBYJILQHAESJCKQEPYGWEUBUPLJNVAQYQTULIITAAJG");
    tmp_msg_0.value.assign("EXNGRLOWEYFOIGVKAHQMSTMXHAFBISNKAMYTJEUNQDEIZOTAOKTDFUFPFSNFJFILUZVZNBTFEWBYWTACCBPYKMRSNBPNIPYVRXDOZGCELLODVZSJHRXXAPCBUGRQOEBJUKCRSCHVEINKDWJTRASGERLQHZOLHDBVYXYXIUVVSASCEJGIJWJLCOQXOHIQDZQCRWFUPWKNYCHT");
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
    msg.setTimeStamp(0.9175607880763033);
    msg.setSource(19160U);
    msg.setSourceEntity(251U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(121U);
    msg.op = 167U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ULAZGPAAOVOFJIOKZJRNXNBZHPITMLCEHOTYXXRGOWQMBRERPDYGIMMBPHDSQSULXNJZRIJILVXCYSJFOQBQKOLGUSAAVDMESHNFXWAERZANFTUUOMFENHVPAYQPTQ");
    tmp_msg_0.param.assign("YOIGSOOTBTHRTCZWBJROBGKR");
    tmp_msg_0.value.assign("EUQCXUHEFZHNANOVGWLFTUGEMYEPMKHYHJVUQQSCZSQBLYSLZPUOXLNBIRDXGOONIBOOZYMCWHKUKNHJRJXPNDESFRZQRDHPIXWOMEQJMWVSQMDDJHTPJETIWFAGKCTATZNMAXALPAEDKXZVSG");
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
    msg.setTimeStamp(0.37173718160630687);
    msg.setSource(24164U);
    msg.setSourceEntity(244U);
    msg.setDestination(35533U);
    msg.setDestinationEntity(70U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.6635634891924951);
    msg.setSource(48971U);
    msg.setSourceEntity(138U);
    msg.setDestination(65053U);
    msg.setDestinationEntity(113U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.16614314431620025);
    msg.setSource(12154U);
    msg.setSourceEntity(45U);
    msg.setDestination(56528U);
    msg.setDestinationEntity(206U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.7489270668096601);
    msg.setSource(15453U);
    msg.setSourceEntity(99U);
    msg.setDestination(55932U);
    msg.setDestinationEntity(191U);
    msg.total_steps = 236U;
    msg.step_number = 189U;
    msg.step.assign("XQHTIBGJCLTUTCYX");
    msg.flags = 197U;

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
    msg.setTimeStamp(0.2789015993373356);
    msg.setSource(43476U);
    msg.setSourceEntity(14U);
    msg.setDestination(59663U);
    msg.setDestinationEntity(20U);
    msg.total_steps = 50U;
    msg.step_number = 112U;
    msg.step.assign("KKZQUDOYANNQSFYFEVRJBKZSTFRBCFKVMHFIQMTGPMPPSCPJCXQWKDVCXOVENBFEDVHZYMORCTDGEOAUQPDEYVMOICXZPZAGHSUTBGEWOIHHEGQRTXKQDBIPWULGIZPSNUMENXNOBTNRTLXNLIWDFSBWEITLSBAMQGSOOKAKHHVIDOMCCNKXXHTZAZVRZBUGVLJJUWRRGHYRLRJNQITPXLEUJISZASDYWJWLYLJF");
    msg.flags = 154U;

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
    msg.setTimeStamp(0.7028363068296928);
    msg.setSource(45406U);
    msg.setSourceEntity(197U);
    msg.setDestination(37369U);
    msg.setDestinationEntity(250U);
    msg.total_steps = 112U;
    msg.step_number = 75U;
    msg.step.assign("CABHKIESQUYMIDGWLRJZTLVUTZYBKXK");
    msg.flags = 24U;

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
    msg.setTimeStamp(0.3255914855192019);
    msg.setSource(51717U);
    msg.setSourceEntity(45U);
    msg.setDestination(10261U);
    msg.setDestinationEntity(67U);
    msg.state = 74U;
    msg.error.assign("SIASXOYMVVWGMPTNCMZLVPLLKLDZVTFFWXUCHBDSJRGTTWIDGDBEQNKIFHO");

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
    msg.setTimeStamp(0.658720395224983);
    msg.setSource(439U);
    msg.setSourceEntity(204U);
    msg.setDestination(4239U);
    msg.setDestinationEntity(232U);
    msg.state = 242U;
    msg.error.assign("LKLLXVLBZVEFQUWZXLQGPODAYBDARBCJNEXSBDPIRNGDMPOGKHSXVTSLXREIBADUOEZNYKJLBI");

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
    msg.setTimeStamp(0.2550329237292659);
    msg.setSource(2527U);
    msg.setSourceEntity(70U);
    msg.setDestination(50289U);
    msg.setDestinationEntity(176U);
    msg.state = 237U;
    msg.error.assign("VTMVSUIYYWIZOLALDSXQCIOWFXZJYAQTLYSRNWTJLCKEHWKWJOOIYURHHRVSDMGFIFGYVHGZJBFZGFTMPNFJURMPVLBFXNPRRJNXUUGPBGMXEHCXWJNWPEQAFRUSQPJYAWLWIQASGZBQIRASIMCPDGLVHQTZTBNDVXELPDGDVOUBUVKZYBFENQEOBAHDIKDBYKMSWUB");

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
    msg.setTimeStamp(0.4316892157566107);
    msg.setSource(33307U);
    msg.setSourceEntity(14U);
    msg.setDestination(54734U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.8359962393369392);
    msg.setSource(4599U);
    msg.setSourceEntity(182U);
    msg.setDestination(13743U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.9156161010934625);
    msg.setSource(32669U);
    msg.setSourceEntity(36U);
    msg.setDestination(49156U);
    msg.setDestinationEntity(3U);

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.576542873562218);
    msg.setSource(50084U);
    msg.setSourceEntity(127U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.9475231414043341;
    msg.lon = 0.5329078495700982;
    msg.height = 0.9917290793548842;
    msg.x = 0.1946001122292459;
    msg.y = 0.39952254731979175;
    msg.z = 0.6316535257847496;
    msg.phi = 0.47120035241480596;
    msg.theta = 0.9731160821457511;
    msg.psi = 0.9491608496769336;
    msg.u = 0.7155792411397629;
    msg.v = 0.8272466552277583;
    msg.w = 0.09690889350219145;
    msg.p = 0.4479533803220792;
    msg.q = 0.63027600453439;
    msg.r = 0.8890150839318438;
    msg.svx = 0.5344812497507688;
    msg.svy = 0.9636707678006651;
    msg.svz = 0.6673749141777314;

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
    msg.setTimeStamp(0.7057436215505737);
    msg.setSource(23432U);
    msg.setSourceEntity(229U);
    msg.setDestination(61330U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.5772615370114145;
    msg.lon = 0.5155240332695044;
    msg.height = 0.18748526182701897;
    msg.x = 0.7493364245962454;
    msg.y = 0.4346152153893741;
    msg.z = 0.7116062988109346;
    msg.phi = 0.6607813421250195;
    msg.theta = 0.42481117263014934;
    msg.psi = 0.0006061138273965039;
    msg.u = 0.7782469348704774;
    msg.v = 0.9966257907352586;
    msg.w = 0.5031875028741626;
    msg.p = 0.28675127214089013;
    msg.q = 0.8695223984797188;
    msg.r = 0.7849453459227008;
    msg.svx = 0.059954949832433435;
    msg.svy = 0.8093722467363096;
    msg.svz = 0.6143358684475374;

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
    msg.setTimeStamp(0.6006841262143997);
    msg.setSource(52817U);
    msg.setSourceEntity(60U);
    msg.setDestination(30152U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.20425432660684706;
    msg.lon = 0.9832963695753991;
    msg.height = 0.9467765856768119;
    msg.x = 0.6532319710479312;
    msg.y = 0.600177267571803;
    msg.z = 0.9675295454911829;
    msg.phi = 0.7495609710320064;
    msg.theta = 0.7220684983751778;
    msg.psi = 0.9332666214348742;
    msg.u = 0.7151199756728134;
    msg.v = 0.03140886003581023;
    msg.w = 0.7845129099019632;
    msg.p = 0.8610847231250506;
    msg.q = 0.35097933483286325;
    msg.r = 0.6812517993027289;
    msg.svx = 0.1288514196802335;
    msg.svy = 0.48563748282484576;
    msg.svz = 0.6545656393767253;

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
    msg.setTimeStamp(0.8949114718618497);
    msg.setSource(63675U);
    msg.setSourceEntity(65U);
    msg.setDestination(34063U);
    msg.setDestinationEntity(56U);
    msg.op = 75U;
    msg.entities.assign("IDKOPMUHMY");

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
    msg.setTimeStamp(0.4363723917851222);
    msg.setSource(12312U);
    msg.setSourceEntity(215U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(46U);
    msg.op = 150U;
    msg.entities.assign("WBAQSBIZPJIYXCEEJNWHUXCHBOCVXMVWLBZSVNGPXOMOWUDCDQUCUTIWKMWTVZTYLQNJGJATHZCTMRLRYWOISUGJQFYJKWDPOZYWZZTRSFRUTUCPGZCIXRGZRSBFAFIERNJIDFSEVMKIKGIXUAKQUESPYKNOBFXLVVOTLOCDANLVXRNDOFQLPZJTKOSGKXALKDHBYBDENENQSPWNHMPJUFQVPYIHFRDSDGMAYHMEPGLARMGM");

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
    msg.setTimeStamp(0.9130843729684739);
    msg.setSource(25575U);
    msg.setSourceEntity(37U);
    msg.setDestination(3683U);
    msg.setDestinationEntity(189U);
    msg.op = 70U;
    msg.entities.assign("YEMKINWUTTZMFXUKOILJWKUADNDAPTIUOFCGSR");

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
    msg.setTimeStamp(0.8799843641574235);
    msg.setSource(52188U);
    msg.setSourceEntity(0U);
    msg.setDestination(45083U);
    msg.setDestinationEntity(151U);
    msg.type = 71U;
    msg.speed = 52732U;
    const char tmp_msg_0[] = {84, -128, -71, -63, -120, 91, -78, 7, 38, 115, -56, -78, -14, -78, -56, 93, 106, -55, -46, 23, 65, 12, -47, 124, -10, 57, 22, 116, 11, -17, 67, -103, 82, 48, 117, -95, -3, -110, -11, -102, 58, 74, 14, 63, 124, -83, -58, 71, -101, -83, -87, 57, -35, -67, -101, 78, 55, 27, -2, -43, -41, 92, -16, 106, -29, -54, 17, -16, -34, 109, 125, -19, 44, 23, -64, 3, 16, -4, -3, 99, -63, -70, -103, -95, 100, -11, -100, 24, -14, 111, -95, -126, -102, -42, -111, 14, 13, 64, 36, -104, -62, 52, -106, 82, 48, -125, 104, -59, -1, 94, -104, 97, -99, -7, 77, 54, -13, -108, -3, 55, -75, 54, -79, -40, 107, -108, 78, 86, -112, -5, 20, 0, -15, -110, 24, 20, 73, -72, 58, 12, 64, -38, 71, 9, 100, 33, 14};
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
    msg.setTimeStamp(0.4583103135010502);
    msg.setSource(9733U);
    msg.setSourceEntity(45U);
    msg.setDestination(9169U);
    msg.setDestinationEntity(145U);
    msg.type = 54U;
    msg.speed = 25298U;
    const char tmp_msg_0[] = {-42, 54, -63, 57, 72, 72, -60, -23, 5, 72, -58, 38, 85, -82, -10, 96, 12, 62, -26, 1, 30, -12, 11, 46, 73, -1, -105, 58, -71, -115, -63, 60, 86, 88, 57, 51, 89, -26, 92, -127, 68, 98, -113, 102, -16, 42, -120, -52, -96, -46, 125, 97, 13, -98, 38, -81, 57, -38, 105, 107, 100, 56, 50, 47, -5, -46, -110, -46, -41, 88, -24, 80, -13, 28, -124, 39, -12, 63, 94, 115, 69, -115, 99, 50, 36, -17, -55, -58, -21, 70, -67, -80, -22, -47, -112, -75, -13, -58, -14, 17, 87, 104, -9, -118, 61, -115, 59, 27, -80, -72, -119, 109, -53, -19, -50, 30, -45, 38, 86, 27, 3, 91, 48, 37, 76, 30, 99, 98, 108, -32, 80, -76, -113, -44, 121, -108, -124, -122, 0, -121, 70};
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
    msg.setTimeStamp(0.7510604591711447);
    msg.setSource(46534U);
    msg.setSourceEntity(206U);
    msg.setDestination(61525U);
    msg.setDestinationEntity(88U);
    msg.type = 203U;
    msg.speed = 34919U;
    const char tmp_msg_0[] = {84, -101, -17, 13, -80, 9, -63, 54, 91, -69, -114, 108, 110, 32, -98, -57, 50, -70, 63, 87, 13, -69, 80, -38, 34, 118, -26, -83, -31, -77, 7, 13, 93, 2, -92, -28, -5, -71, 70, -74, 78, -122, -80, 75, 28, 35, 8, 109, 116, -111, 103, 85, -21, -51, 15, 56, -120, 48, -74, 119, -112, -13, 95, -43, -11, -100, 44, -92, -111, 101, -122, -49, -125, -35, -19};
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
    msg.setTimeStamp(0.7206213361014892);
    msg.setSource(56030U);
    msg.setSourceEntity(107U);
    msg.setDestination(21337U);
    msg.setDestinationEntity(241U);
    msg.available = 3858114230U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.35787803335980584);
    msg.setSource(39164U);
    msg.setSourceEntity(100U);
    msg.setDestination(57466U);
    msg.setDestinationEntity(49U);
    msg.available = 4176644933U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.026078685085192843);
    msg.setSource(20032U);
    msg.setSourceEntity(158U);
    msg.setDestination(2595U);
    msg.setDestinationEntity(9U);
    msg.available = 2048417963U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.388579624937875);
    msg.setSource(37334U);
    msg.setSourceEntity(229U);
    msg.setDestination(9387U);
    msg.setDestinationEntity(85U);
    msg.op = 121U;
    msg.snapshot.assign("SJCPPJOIMMKKDXAEWIYUUJDUNEVLYMRRSSVRAPZPGMODWVXPRTFUNPRDGHGCLPFQKJNBFPSYCECZXBIRXATNZCGUKSFDJAWSZTKVPJPDQQXMNLZHOTQAIIZVEGSUYHOLGHOLTEIWIAUYVWVBTJEBFUGTHYNYSOZNIBKGKWMQZCCNFBCYUEAJQCRXILLWLTQFDHMBMRSYQTSUNWRKJEXWXHVOZVK");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 34U;
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
    msg.setTimeStamp(0.09638732255291682);
    msg.setSource(41743U);
    msg.setSourceEntity(194U);
    msg.setDestination(7072U);
    msg.setDestinationEntity(2U);
    msg.op = 143U;
    msg.snapshot.assign("JEHYKPPANCYCUGGSETBVRPORPWJOLNGTRFXOPONFMVGUPFYHXYGNHKBUXXZIHTDCQVCICRADDAH");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.8918394749659322;
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
    msg.setTimeStamp(0.7275450282160772);
    msg.setSource(40734U);
    msg.setSourceEntity(238U);
    msg.setDestination(11039U);
    msg.setDestinationEntity(1U);
    msg.op = 128U;
    msg.snapshot.assign("MBGHLGQNIHHIIFPXXHVOBNZSZEWMICEGHHZXKJAVWYNYVPYANXZUKOZUELMXYAEYEGCAGOOFEYCHCQXWKFLAYBNDSMWEZORQMTXPEIFTDJQLNSTVLWODM");
    IMC::NavigationReset tmp_msg_0;
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
    msg.setTimeStamp(0.2856392057601188);
    msg.setSource(14095U);
    msg.setSourceEntity(243U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(162U);
    msg.op = 76U;
    msg.name.assign("AOCRGQVPYMGWVHZVMGBZ");

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
    msg.setTimeStamp(0.4906588572442129);
    msg.setSource(41830U);
    msg.setSourceEntity(203U);
    msg.setDestination(32393U);
    msg.setDestinationEntity(20U);
    msg.op = 160U;
    msg.name.assign("DWZYMRHXPIKYRYA");

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
    msg.setTimeStamp(0.29609779016981064);
    msg.setSource(42673U);
    msg.setSourceEntity(190U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(176U);
    msg.op = 194U;
    msg.name.assign("RYPPXFXJIXBKOZNJKDDNYUHRBZEBPGEOZETNNTCAWOZSYDRZSKTQJQELHWSXMEMCOJHABPNIRAGDCURJCIYUUMUMWSXEFHGBLVMFTCXNEMUAIGQFVMCGJNDWQTYWWHKGHUZSRQATOILKXXCNLPVSVIJETTFHDVRSUCGHFKSXNVIAEXHOIVWZQWSTGIUPVFSVQLZYPQGAGBP");

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
    msg.setTimeStamp(0.3688405169536718);
    msg.setSource(27048U);
    msg.setSourceEntity(229U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(2U);
    msg.type = 133U;
    msg.htime = 0.21536569136270267;
    msg.context.assign("FAFVUVVOVJIUNUQDKPRLEDULGFPTHYPKFMCSW");
    msg.text.assign("DKFOMKDTSXPKBAIBTODONYWEKENEODSXPSOWKQSZAQJLBZAMVRJEIKFZCTAPJSQFJRDHANWEXRGNQLQGRJBRUCSKMXHIOCUEIIZCGWLTYQBSGTXJLPBHWJWVLVKFXXUYXJOTXOHFHOPYQFIYPRMAFJZRNJPNRZUTDVNSMAPFMUZTVBLURUVCEEVSDPLQGZVMIRHBUWDEETNWBLKLIGYDKCBPSD");

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
    msg.setTimeStamp(0.5469279468590685);
    msg.setSource(6135U);
    msg.setSourceEntity(28U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(218U);
    msg.type = 52U;
    msg.htime = 0.6645827039207397;
    msg.context.assign("BFDORFAJOLMMVGDKJPRIWTNQHKCZOTWBERIKKBZTNJHFYXMEPXRUIU");
    msg.text.assign("JJPXKYHBAQGGFZOEVKNDQFSPMZZIVCHYCJGRPJFBXEEEQYJRQUWTUKNCLZFSVORZWHDYHNPIZZCASKRDMJJQRLWVJHEGLGHHXBIWOTEUDGYXMFOASPEBDLBAFBVNDZATTGFUSXAFFQNBDQEOCOCSJPKTNMLLLSYKXOAC");

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
    msg.setTimeStamp(0.1575696077571599);
    msg.setSource(22968U);
    msg.setSourceEntity(211U);
    msg.setDestination(29221U);
    msg.setDestinationEntity(95U);
    msg.type = 52U;
    msg.htime = 0.24714527460699198;
    msg.context.assign("IMNFPCAZMEBUDJIAGTPPLZZOELRRGSHLFRVJXMTONKBXZHPKHGQANLZCLUQKYBVTOSYYUVKYZZSSABQDTMNIJKLJOOONZHUFEENGEEHASRQPYREUARXXSTMELCYNWMODKPSPWSPDBIWWDUSGCHGDXZHUTTDCNYBGRZTVDEVIMJQTOMLGVJFX");
    msg.text.assign("LRFSRBYPPBGCBUGVZYXDENAAKZFPRLUTFMYDMLMWTCSWLAOKZUJIQOTHAHLHJBSEQSELJQTGBBCAGCRXMMNAJUGOLVIZKKIFZSOXCFWNI");

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
    msg.setTimeStamp(0.7777859896376413);
    msg.setSource(42677U);
    msg.setSourceEntity(107U);
    msg.setDestination(56894U);
    msg.setDestinationEntity(149U);
    msg.command = 96U;
    msg.htime = 0.5158375467541002;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 23U;
    tmp_msg_0.htime = 0.6227664789663183;
    tmp_msg_0.context.assign("RGKGZLGVHMAXGHPCVCDCOEKFUUZLTRUAJBYKJKPECLLFYBSUEQQSCKEZWDSYUBNIBFFHXHPDMEJTESWHONAMFOZMWFRNNAQBITQI");
    tmp_msg_0.text.assign("UNFOITASQRKIIEDAFWPWAHYRSMQXDYGVFOPMPWSEKPGQMNGFLRENLHLEISUUYRUBHVEBHQOTPPWHMKRUYJXIMCCTPDNWZMZCDBJFFLNKDMJJDYGWTYPILKYYSWSQRQDFJXYEOUOZOBJWULSKYGXQN");
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
    msg.setTimeStamp(0.003965296098642601);
    msg.setSource(40054U);
    msg.setSourceEntity(45U);
    msg.setDestination(14647U);
    msg.setDestinationEntity(205U);
    msg.command = 113U;
    msg.htime = 0.9528658001914622;

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
    msg.setTimeStamp(0.7289673249803581);
    msg.setSource(53442U);
    msg.setSourceEntity(187U);
    msg.setDestination(47942U);
    msg.setDestinationEntity(37U);
    msg.command = 169U;
    msg.htime = 0.19163445465832407;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 251U;
    tmp_msg_0.htime = 0.008391475803876003;
    tmp_msg_0.context.assign("BJJNFODMBCGCGXZAYYVWZRTKQHKGXRZSSRPQOWRBQVOEHMIBTVVYKXPPAKNQLEXNFCCONLGUATWIYLFPPJBGJWRDNKAFDDHSI");
    tmp_msg_0.text.assign("YCYDXBYJVVTAICAOHKSFBRIZCNUXASRMRHSZQSHQZLQAJQFRUNPQJJIQOVXMFJUTRPTPDSFCTCNBOPXWATBQBZGNYEVMUXADMVJTGZGWQRXAGYODORC");
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
    msg.setTimeStamp(0.1067763864444965);
    msg.setSource(24785U);
    msg.setSourceEntity(153U);
    msg.setDestination(16238U);
    msg.setDestinationEntity(128U);
    msg.op = 60U;
    msg.file.assign("CHSXXVJTZTBNKZSLYSCSDQGUZGCTMKCBSSVKWKILVHCYXLHRKJOWUPNMDWFOYMFSGZQTPFQVIFJLBHREQOHQAWIBIUOAZFTBJWKWRREXQPDGAIXZTLZJLRADUVSWXZVNFVJYL");

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
    msg.setTimeStamp(0.9360575417218548);
    msg.setSource(60256U);
    msg.setSourceEntity(170U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(63U);
    msg.op = 225U;
    msg.file.assign("KAXRUXSHRXSJXQPACFYLHOUHBLZGCZCYYRSFPMYUQAPGSXITLGZDCTDTWQIJGEQVJEUQZUAGCGTFZVWNSORUQPWLJVPIVERFDWRMLOMVIPJFJVJFMVSBGNDHLIVKDBBEEUAXPOPBMKJMOZAWTBQNRVASEBWWQIRMAFTENETXIDUTMHRCKYCLGEUSQNHNLKKJYBWLMDKAKKROOHNYCDZWOHZHGGXCQFHAEFDOFYTZXU");

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
    msg.setTimeStamp(0.38121297138200205);
    msg.setSource(4426U);
    msg.setSourceEntity(177U);
    msg.setDestination(22626U);
    msg.setDestinationEntity(242U);
    msg.op = 170U;
    msg.file.assign("OMQIRDLAKMQCXCGAVBGPTZKZQLVNJLVLDREPDGBIHJXHUMGHAXDDZXFVSTFSTGXOCECLBFMZKFUFEMNPEXLIJTRZTBIPPFOPFVJRYQWYTJUJOMVMVUBJWRKUUBIWWGJIHDMGZDWFWIHSQXSUYDNSONBTWWCKCEQHQELDKKYNHNNRNTTSAMZJQNGCSR");

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
    msg.setTimeStamp(0.2853988708395745);
    msg.setSource(41674U);
    msg.setSourceEntity(73U);
    msg.setDestination(57018U);
    msg.setDestinationEntity(206U);
    msg.op = 15U;
    msg.clock = 0.053247014306673224;
    msg.tz = -66;

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
    msg.setTimeStamp(0.9574446929012447);
    msg.setSource(38069U);
    msg.setSourceEntity(115U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(107U);
    msg.op = 224U;
    msg.clock = 0.13513318463386748;
    msg.tz = -44;

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
    msg.setTimeStamp(0.2865783379747363);
    msg.setSource(32306U);
    msg.setSourceEntity(49U);
    msg.setDestination(47232U);
    msg.setDestinationEntity(93U);
    msg.op = 173U;
    msg.clock = 0.5990429233798075;
    msg.tz = -56;

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
    msg.setTimeStamp(0.7830426029349878);
    msg.setSource(12392U);
    msg.setSourceEntity(138U);
    msg.setDestination(34909U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.9278229316829714);
    msg.setSource(35304U);
    msg.setSourceEntity(27U);
    msg.setDestination(7175U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.9104062090971361);
    msg.setSource(30942U);
    msg.setSourceEntity(157U);
    msg.setDestination(49886U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.26887118674868915);
    msg.setSource(24853U);
    msg.setSourceEntity(56U);
    msg.setDestination(26446U);
    msg.setDestinationEntity(172U);
    msg.sys_name.assign("DPXHVPCJOCHKUYNHSPRVRZEUPWLUWANXQUFMFQURISJGTPZOPTMEDFFCGAFVYBWDKADIKIYZRREOJUKKQBXTQZELYNGHSHMCDHATTQLILCOJAAJPQFCSWGHKGYCEVGGNNXLLDQJCXMNXSNLWAJQUDONIOYJWZTK");
    msg.sys_type = 102U;
    msg.owner = 4180U;
    msg.lat = 0.23814523410809518;
    msg.lon = 0.08038878461339938;
    msg.height = 0.20275508736022152;
    msg.services.assign("IWPXUVQUICKFSSISPFGKTZTTSASWBOGRGCYVOFHOCADRLBJWKDCVMDXENYBBXOINATROCMIANWKRCYVLECXLPWPZMWEVUVCVAPBAMHKNKTPUOWZLJZQDGDXNSLKUNULEGQRMZVXARMIKHRREQXQMPJNDQP");

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
    msg.setTimeStamp(0.3783002285088043);
    msg.setSource(27389U);
    msg.setSourceEntity(36U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(139U);
    msg.sys_name.assign("SPIHVWFQWCMXRWPUKDKVCGBJLQDDXFAPCYUFISNFHNGVSNSNWLHHAYGKTQSWIDJXKCZARJOWBIEOKRUPUVVXBKWVFIGQLGTCDBYEWJQRTUYXPLQKZXKTATRFXIBUQDXRQOJWDHNTMTLPOXPBFVIALXAZZLDIYEPRNHORZMNEEDVFKRTONMGOMGQEMBEUOMKGUHDZELYMACLZSJHASFCFMCIPVUJBABSYMZLCH");
    msg.sys_type = 18U;
    msg.owner = 44030U;
    msg.lat = 0.45985385658556066;
    msg.lon = 0.5457077473774238;
    msg.height = 0.47041436171784945;
    msg.services.assign("PCJYYPGBYBJYBYWJHRLHDMRTUEWULQDMAOUFMWHFUFSMIHKSKJRARJGIZFMPQWLANUBZVVXUELLXONMXPNOHFJYUCSYRHGJXZBQWOKYKWMIDIOEBJLGGVOXKGAIBRKZCSSPTGFDCXVCSDYARTHPGETBOQLAMINXVZAKQSVBNAVOFWIWNNAEUCPNKEHEKICATDLTOXQFIIZRZQWDXXJNPKTEURLN");

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
    msg.setTimeStamp(0.050269249740294564);
    msg.setSource(25324U);
    msg.setSourceEntity(131U);
    msg.setDestination(660U);
    msg.setDestinationEntity(201U);
    msg.sys_name.assign("EFTVCGPLDOVXSRUTZGSTPWRQGHGYCJWGNRKFFDZAHNSXBNIUKIIQHNFIQEPQZOWQRSJDLBNLUIKJTUEEXHXILXJIOJJQDWECOYGYGMMTAKENPOTHVXYAQRSCHMMVHSJDOVEATZQBBFDPOMVRJSKUCXBVOZPLRMYEFNCZUVWBDTBKKPQDHSZKFZDCBBSWENOM");
    msg.sys_type = 136U;
    msg.owner = 38515U;
    msg.lat = 0.022834562122214352;
    msg.lon = 0.36075658441062675;
    msg.height = 0.6564641078458582;
    msg.services.assign("WKJZMIFROLSQKLZQDQKTWWOUBRTJILPVDVXWFYKRTKGVBVQERSVBEZBDREGUGMEMRXHUSVNCBPAYSTYPPPWMNKXHZHVJFEVCCMNZTSBKKLAUEMHANWPUPZVFFFTTMGZKBOPBDWCMIRAGCORVIGXGNNWICSFFCNAAWXLUQOHLODMCOEEYRGJUOYDJTXINOHNFIQAQXLHOIBCZBJMTLYUJNDUPSJDXPDGSSAHIYHEFIJDYQTCSQUYLQGXXYZE");

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
    msg.setTimeStamp(0.8842327119608558);
    msg.setSource(61359U);
    msg.setSourceEntity(11U);
    msg.setDestination(62677U);
    msg.setDestinationEntity(222U);
    msg.service.assign("LSXZERZMKZAGWRHJBJTVLSEQEPKCTXZLKIPBPSFQPAFGIWUETZTYBLHFRMUDIXGXOAWUTHPMXIGJNFRTIKWROHNSUBZH");
    msg.service_type = 165U;

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
    msg.setTimeStamp(0.6029160756766754);
    msg.setSource(45135U);
    msg.setSourceEntity(198U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(1U);
    msg.service.assign("QSCELBDYVKIAXSVXVWMLYGAMBPKSTRIMQQXXNFJIAAQNOAVXFZOHTRVHAGJTZRPDCPDXFFNYMEZPNLVKTZMRMFHBHNNIZTUEUOQVYFATIVY");
    msg.service_type = 50U;

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
    msg.setTimeStamp(0.3206518551923382);
    msg.setSource(36267U);
    msg.setSourceEntity(88U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(91U);
    msg.service.assign("RMFNFLAYFNOCJPRVAPUTSHURGSWXOFMMCGOWEQCYASTPCGLPYOTIIUJKBIEYWIYQEWXQBACQZWUYLVJQJFDICPJFXQJVWLGSANBDBTHIOBGDRGKUDQMLWQAZIMQNRTDTFBEFKHOBNPBFTKVLIXVZKWXMNYSMCKHAHWYMSZHLE");
    msg.service_type = 232U;

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
    msg.setTimeStamp(0.12715504040814984);
    msg.setSource(22113U);
    msg.setSourceEntity(45U);
    msg.setDestination(23022U);
    msg.setDestinationEntity(151U);
    msg.value = 0.4624969606191517;

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
    msg.setTimeStamp(0.9571412665606003);
    msg.setSource(43147U);
    msg.setSourceEntity(39U);
    msg.setDestination(12443U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0767568168057724;

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
    msg.setTimeStamp(0.35380020545078184);
    msg.setSource(57280U);
    msg.setSourceEntity(154U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(227U);
    msg.value = 0.5039185882723325;

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
    msg.setTimeStamp(0.8078102186229632);
    msg.setSource(42499U);
    msg.setSourceEntity(232U);
    msg.setDestination(45850U);
    msg.setDestinationEntity(170U);
    msg.value = 0.9555893219814319;

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
    msg.setTimeStamp(0.3413804135461397);
    msg.setSource(20850U);
    msg.setSourceEntity(220U);
    msg.setDestination(1515U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5578536928601557;

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
    msg.setTimeStamp(0.13646756450681397);
    msg.setSource(15103U);
    msg.setSourceEntity(24U);
    msg.setDestination(33402U);
    msg.setDestinationEntity(72U);
    msg.value = 0.07160610341443119;

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
    msg.setTimeStamp(0.14783078057863486);
    msg.setSource(30616U);
    msg.setSourceEntity(52U);
    msg.setDestination(557U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5837033828295285;

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
    msg.setTimeStamp(0.8890574124391141);
    msg.setSource(53645U);
    msg.setSourceEntity(174U);
    msg.setDestination(52337U);
    msg.setDestinationEntity(253U);
    msg.value = 0.1302418103109384;

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
    msg.setTimeStamp(0.5941707893535109);
    msg.setSource(13039U);
    msg.setSourceEntity(231U);
    msg.setDestination(47816U);
    msg.setDestinationEntity(108U);
    msg.value = 0.05014432434457006;

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
    msg.setTimeStamp(0.5349871211648993);
    msg.setSource(37934U);
    msg.setSourceEntity(19U);
    msg.setDestination(10456U);
    msg.setDestinationEntity(196U);
    msg.number.assign("DIYBDMZRKPLPCUORCOQ");
    msg.timeout = 47351U;
    msg.contents.assign("ONMMBLSGJBGAWBUFEXFXAYEIUNSYZNVIOBSUKGJFNREBOREYOYFJKMZFDCGQHWNAWFAJTHTVHBGWMXTYLQQRHDEUJIYCZZMDXNPZWXIOXEDYHKQJBCQLRVTMTJCKRXACICIZMRQDJKJKNUWOZIPCBDOCKZHUNNLWAPSSQBRWPTVSDXDHEMPG");

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
    msg.setTimeStamp(0.0022578074754704414);
    msg.setSource(31675U);
    msg.setSourceEntity(157U);
    msg.setDestination(27690U);
    msg.setDestinationEntity(31U);
    msg.number.assign("WVJIEOSYVUQWRVWNIZDQFBIJFILYPQDPKXCTDSRSLKFRHDRGCEEOIXLEAFXRXZYOMUKBUTMLDXVOTXMYZFZLHYVQTPRPHPOMDKCZYIKUXGCUFPWWITFYWOPEIKNDAGMEGQUGQKIBOBBGALNRRGMUJCXTEWYKHZMVKLMNJTEOWBZUADSCVJZZQPFJWVMUQ");
    msg.timeout = 58208U;
    msg.contents.assign("HLEKSINTKBKJGZJTWGAGRZVSOKECFTIWCFZZAVNLRPKCZJYXYOIPHNABIEYVJEDDZQUWEXFGLRTGVOCCGEBXWHAQSAURMDETXYSMQQNKDWVXJKAWXCIURJIVMWQLVPCZDMH");

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
    msg.setTimeStamp(0.17069643966426096);
    msg.setSource(4543U);
    msg.setSourceEntity(147U);
    msg.setDestination(13442U);
    msg.setDestinationEntity(72U);
    msg.number.assign("CIEHPXDLPQZYCRMOTDBHAGU");
    msg.timeout = 2352U;
    msg.contents.assign("DCAKAEXMPTIAFCXCWEIUVZYLRFHTVIPKNZGQTMBKIYLYEODZXNUGUWYQLDOJMEPWMNTREICUSGAHJDUKLQVZZFSSONUIKTDUMTGFFLKJTHFYUDXLRXQBGEHDWLNOTBPYBVHQJSNYJMHYHZFPTENQZZGJSRPXOHAKGEODRRGIPTMBHFDSCWGACVQXAMSABWINEBALMMCOCXKWVHIVXJUVQRRJYNPLQGAFSOJCLBBDZWEBUSWPOKSCVPWOFRV");

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
    msg.setTimeStamp(0.21537277289299284);
    msg.setSource(14482U);
    msg.setSourceEntity(151U);
    msg.setDestination(19180U);
    msg.setDestinationEntity(11U);
    msg.seq = 1364151206U;
    msg.destination.assign("UOISUHBXGDASBOMFLRLZPKUBUAPHVHPLADWJMIFTRMGNPIYONVFBTASATNIMHSWKHOTGCUCJDEWOMAWJRZEQVETDGGBOWUDDCQKKJXFAXPSLYZQQTFJSZOFGEDSZNNVVECRIQUZEPMMNXEOIQNRFFPPCKRSLVCFBWIPEICBVRMLECTZNDJSNZRXWOCRSUQBYLMAINDVUHGLXKKXXWHJVRTLJEYYQOZGMUGXIW");
    msg.timeout = 41943U;
    const char tmp_msg_0[] = {53, -75, -48, -39, -81, -31, -3, 73, 89, -76, -26, -85, 18, -44, 116, -79, -44, -58, -45, -28, -85, 47, -118, 64, 119, 86, -9, 46, -70, 106, -87, -97, 95, -34, -101, -68, 101, -57, 62, -60, -98, 107, -106, 119, 79, -80, 101, 126, 101, -28, -51, 85, -18, -68, 85, 5, -122, -24, 43, 18, -116, -38, 83, -16, 22, -40, 69, -48, -91, -91, -34, -55, 63, -126, -64, 50, 10, 9, -7, -91, 14, -106, -16, -28, -49, -116, -79, -8, -83, 117, -1, -127, 13, -27, -128, -11, -10, -5, 118, -30, 121, -37, -85, -55, -8, -38, -64, -48, -29, 90, 12, -65, 123, 52, 101, 95, 121, 33, 122, -61, -44, -3, -122, 18, -19, -104, -61, -119, 25, -112, 46, -64, -113, -125, 9, 50, -6, 63, 121, -24, 90, 48, 28, -57, 98, 99, -62, 59, -5, 42, 7, 70, 102, -32, -103, -127, -101, 105, -21, 26, -44, -117, -45, -69, -120, -3, 126, -83, 95, 119, -126, -51, -104, 88, -113, 18, 19, 47, -23, 20, 31, 80, -103, 11, 25, -116, -107, -43, 52};
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
    msg.setTimeStamp(0.5444600274936986);
    msg.setSource(14168U);
    msg.setSourceEntity(81U);
    msg.setDestination(64826U);
    msg.setDestinationEntity(126U);
    msg.seq = 4006783302U;
    msg.destination.assign("KCXIZDULQQOBEGJXIEOCBMZBQVNPPNXPTQWVJUEXAXFKMUQBZRZWHCKWBIYERWWSGULGHBJPWXAWSSWNZIYPYLQPALFVMHLTTSNDHJRBLAOGTZZYCONTPALKXDMONDBASDLTLQLGHVHVDEUOVUIKHUZBYDEVSVJFCPAYJRHIC");
    msg.timeout = 37287U;
    const char tmp_msg_0[] = {-70, 35, 77, 103, -4, -102, -98, 27, 44, -23, 20, -90, 79, 21, -89, -128, 1, -98, 70, 34, 5, -29, 9, -53, 123, -88, 89, 55, -35, -9, -50, 124, 114, 125, 78, -84, 48, -19, 112, -119, -124, -40, -83, 74, 31, 53, -3, -23, -69, -19, -56, -53, -79, -117, 0, 63, 76, -119, -124, -28, 103, -58, 51, 10, 3, -67, 75, -111, 90, 125, 0, -102, -86, -113, 115, 63, -44, 62, -46, 101, 73, 106, -1, 24, 5, -46, 40, -93, -26, 120, 56, 61, 12, 42, -110, 90, -5, 90, 49, 45, -2, 9, 101, -53, 37, 15, -39, 72, -111, 10, -27, -112, -61, -92, 80, 43, -96, -49, -12, 25, -64, -41, 6, -30, -91, -41, -100, -16, -99, -2, 77, 2, 47, -62, -84, -113, 90, -110, -104, -72, 17, -49, -60, 109, 122, 68, 45, 66, -108, 38, 49, 28, 78, 65, -119, -94, -16, 35};
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
    msg.setTimeStamp(0.9051370947631457);
    msg.setSource(18699U);
    msg.setSourceEntity(77U);
    msg.setDestination(34128U);
    msg.setDestinationEntity(37U);
    msg.seq = 604951884U;
    msg.destination.assign("AZKUJJDRLAQARCZQRCEBVQWITXTBPIADNUZJFUVKODFLPQQQIAENMGUFBGOCWYLMFYEOGDWIRAPRLYMVYXKQMYAHRRPTNWJKAIVQOVKCUKBAMVEGUDBXJDFZFIKLTBHLDSKYPIVXVJNFSFDMHOFTNBDRFQRPWWVILDTZXZYEQNUZUKWCMOOMYBUB");
    msg.timeout = 61874U;
    const char tmp_msg_0[] = {86, 77, 82, -55, -120, -97, -69, -45, -23, 101, 110, 11, -46, -29, 100, -54, 90, 23, 2, -11, -1, 125, 59, 28, -90, -31, 62, 72, -79, -68, 84, -27, -4, -96, -106, -96, 100, -100, -4, 43, -77, 70, 26, -49, -51, -18, 9, 48, -33, -5, 117, 83, 31, -46, 69, -125, 0, 17, -60, -42, 101, -104, -16, -65, 77, 103, 35, 99, 23, -37, -113, 48, -106, -83, -120, -1, -93, 75, 64, 54, -5, -87, -23, -41, -13, -116, -65, 13, 18, -54, -60, -77, -77, -71, 46, 73, 104, 8, 65, -117, -69, -94, 91, 96, 71, -63, 88, 25, -75, -91, -71, 82, -4, 99, -33, -128, -118, 14, -126, -94, 125, -128, -51, -11, 126, -105, -104, -52, 66, -12, 43, 62, 118, 59, -102, 121, -114, -65, -107, -90, -42, 99, -40, -120, 71, -96, -120, -75, 99, -65, 15, -40, -2, 109, 51, -125, 68, -49, 70, 109, 111, -126, -128, 119, -66, 41, 12, -69, 31, -18, -25, -114, 109, 112, 88, -1, 90, -119, 123, 43, -118, 14, -44, -69, 99, 86, -16, -112, 3, -49, 59, -127, -60, 82, 117, -82, 16, -58, -66, 38, -5, 86, 24, 90, -31, -16, 59, 40, 8, -24, -46, -25, -4, -31, -106, -28, 116, 56, -66, 52, 62, 37, 106, 124, 49, 77, 23, 20, 4, -32, 102, -30, -90, -83, 64, 88, 52, -96, -113, -104, -128, 10, 48, 27, -112, 9};
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
    msg.setTimeStamp(0.16796864531718914);
    msg.setSource(63549U);
    msg.setSourceEntity(102U);
    msg.setDestination(35186U);
    msg.setDestinationEntity(206U);
    msg.source.assign("BPDAUHVUGGTDKHOJNLDKZOBSYZMIXYHKPSKGEJLTJUIIWNCFLSRCVQQMAURSEYJNWDUOCLPOMRBMGMYPBQOVASQYMJXCXXFHIJIZORPBEPEOMRKQKWQAWUUZFSFJNQLDNZRQSCWYHGBZEVJRVTHBGPWTNZIAB");
    const char tmp_msg_0[] = {106, 57, -6, 118, -121, 18, 33, 54, -24, -41, 120, 69, -91, -41, 56, 4, 121, -55, 85, 73, -93, 73, 36, 15, -120, -99, -116, -22, 78, 81, -44, -77, -124, 63, -65, 56, 55, -82, 52, 79, 62, -69, 109, -115, -77, 126, 73, -75, 5, 21, 83, -33, 124, 122, -33, -98, -113, -104, 78, 38, 103, -29, 99, 9, -26, 47, 92, -50, -23, 123, -40, 10, 67, -52, -65, 14, 37, 42, -117, 69, 27, 80, -52, -71, 108, -74, -62, -90, -121, -10, 98, 121, -127, -21, 65, -122, -14, 0, -35, -26, -102, -121, 32, -126, 72, -117, -54, -29, -97, 93, -41, 84, -30, -12, 86, -127, -56, 25};
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
    msg.setTimeStamp(0.7646941690062838);
    msg.setSource(42361U);
    msg.setSourceEntity(101U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(223U);
    msg.source.assign("EYHOIYGLWRNSBLFPWRQBJYHOFDFXZGNZACIWPZFJXLHCEEKSTMQHKCZIUBUOYADTCSSVJIVSQBDWCKQMAMPXYWXISWPTWMXRFUDVNGVAPZQVRFHCVNLVSUGYAEDBXOMMMOATSZXBHZGCLBIJTKFUOTYTDILDMOEXKJZGKTHRPHECIQAIQQZMGPRYJRWOVLJKLVRXGGZ");
    const char tmp_msg_0[] = {7, -112, 18, -12, 85, -79, 114, 77, -8, -23, 125, -63, -109, -42, -69, 46, -23, 76, -3, -82, 122, 17, -127, 45, -69, 21, 11, 66, 46, -66, 60, -24, 18, -52, 11, 31, 51, -125, 88, 45, 105, -65, -7, -81, -29, -43, -2, 23, 99, 119, -30, 88, -40, -110, -18, 62, -64, -35, -57, 16, -87, 81, -116, 105, 37, 121, -31, 120, -55, -27, 110, -125, -122, -18, 36, 59, 23, -67, 18, -96, -8, 111, 122, 87, -69, 81, 90, -118, 4, 67, 106, 32, 99, -4, 14, 54, 52, -96, -8, -93, 71, -88, 92, -107, 37, -103, -96, 54, -38, 66, -31, 76, 1, -31, -116, -70, 53, 35, -2, 32, -92, 98, 32, -92, -41, 8, -74, -37, 33, -32, -105, 15, 27, 118, 118, 17, 84, -33, 116, 98, 118, 60, 27, 3, 109, -7, 10, -98, 96, -10, 76, -99, -101, -81, -58, 0, -113, 42, 52, 1, 48, -75, 10, -125, 88, 71, -64, -36, 114, -1, -100, 125, -82, -83, 38, 88, 6, 35, 3, -18, 25, -58, 14, 112, 1, -103, 103, 72, -8, 22, 100, -113, 117, 76, 1, 64, -104, 84, -113, -79, 114, 24, 29};
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
    msg.setTimeStamp(0.176039186034194);
    msg.setSource(18735U);
    msg.setSourceEntity(121U);
    msg.setDestination(65255U);
    msg.setDestinationEntity(199U);
    msg.source.assign("OXIIBZMXCDKOXZNASMJVUPSULQHLHAFSIHCMMDIHXTWRNQNZRUDJMNLEZREYPSDJRZOYNERFZFRQGJVEMIEPBNYJNWEMGQBOTPRSKGTLQGGUQKAZXVTHSDWVFWBPSHFDFAOWYAAHACAPVHYKQMAPJEQJREJBVCCYTWRDHULFBPOCYIUCPBUXXQEIXIYKYZ");
    const char tmp_msg_0[] = {14, -57, -48, -98, 102, 124, -65, -42, -56, -31, 109, 97, 97, -19, -88, 86, 55, -114, 76, -74, -7, 126, -112, 35, 79, 90, 69, 5, 67, 64, 121, -71, 13, 49, -28, -89, -34, -84, -108, 86, -127, 14, -87, 44, -84, 27, -55, -33, -60, -110, 112, 61, 99, 99, -122, 68, 12, -58, -118, -128, -30, -9, -90, -106, -87, 17, -104, -93, 64, -100, -109, -49, 86, -36, 20, 55, -116, -79, -119, -105, 48, -97, 123, -75, 59, -36, 36, 105, 122, 45, -100, 90, -59, -61, 93, -74, -74, 41, -103, 85, -29, 109, 119, 72, 46, 124, -33, -56, -8, 53, 56, -44, 126, 23, 87, -103, -128, -127, -61, 47, 9, -91, -83, -11, -117, 116, 94, 70, 54};
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
    msg.setTimeStamp(0.5060383245165457);
    msg.setSource(20754U);
    msg.setSourceEntity(192U);
    msg.setDestination(587U);
    msg.setDestinationEntity(192U);
    msg.seq = 2440814148U;
    msg.state = 182U;
    msg.error.assign("FVCCRWQYQGFACU");

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
    msg.setTimeStamp(0.8674228127248066);
    msg.setSource(9066U);
    msg.setSourceEntity(87U);
    msg.setDestination(47896U);
    msg.setDestinationEntity(48U);
    msg.seq = 1275870041U;
    msg.state = 3U;
    msg.error.assign("HFLIXVUBKPCJOQOTAVYXCYRTSZNOGPYUJBWBZTORQAPRUGNDZAUMNUJYHOWKJDUMTSTEVFWFPDLCGUBQNMYVWSFDMGBEDMONBLNZWIIHJDEZHEESBPRHVKOLWBRFUMFSYCCLEOXLGUKTXEIEFCIHOXWHBAFDPQCZMVGYEPKGMMGQBSRNXDNVH");

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
    msg.setTimeStamp(0.8402695563762417);
    msg.setSource(29390U);
    msg.setSourceEntity(150U);
    msg.setDestination(60126U);
    msg.setDestinationEntity(179U);
    msg.seq = 2462419309U;
    msg.state = 238U;
    msg.error.assign("KGIUHRKKYWPKUFJPLBPGPZLPTGWXMSTQZNRYRFNXTLAGQDWHFTQMHIQNNHSVVDLSXMBSNXIUGBZAYWHKOOPYMDIVTACXVEFKMSQTPDDZEZOXJMHPXHUCLOIRRWRBWBTVJAGDMYBAEDIMQL");

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
    msg.setTimeStamp(0.20681366633534315);
    msg.setSource(55691U);
    msg.setSourceEntity(46U);
    msg.setDestination(30651U);
    msg.setDestinationEntity(142U);
    msg.origin.assign("THLZIKTKTFJGIBQUUKQNQNOYELCKFRRVTGUINNZCZYLHRZZIWEBYJUMWCOYRADBEZTACVEOWNMAGCSHSMCDMYKQHBXJSDDXZXJRAPHIOJGWBYRVFADVYPSJSGDNABPFTPOUJSGCIKDZECZWLUGKXIDM");
    msg.text.assign("RHIMQSQBWLKYYZZHJPZOWMPUFDERFUQIMRLJVICEKOTFR");

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
    msg.setTimeStamp(0.8271096045974058);
    msg.setSource(17553U);
    msg.setSourceEntity(91U);
    msg.setDestination(6911U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("FBZIHAGWBXPVTBUJWGBYLSFJBUSBKBXNMSZLXNCKSGPCYUIMYFPIJNPOTWDTQHRVLQCEHAZRFXOAUTAIPPICDKUTNGXSDCRYVLARGVJAPRJKORHWQWLIDGISOBHLEUIWYQMTPEEVODLJHFEBTQMPLXXWZEDMUYTFFWZEDNLSHFMHCZJMUZXVJOXYNOXYFDZCZJRRTFARZTCER");
    msg.text.assign("VCDQRKYNSUEETERINFNIUJUHHTTOEWJXKWWPWXAISKVRKORCVLCVYZAYKQHYKCEMQBNAPVIVSTFGFATZCUJLHDKKMJNSFDS");

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
    msg.setTimeStamp(0.27255814583884974);
    msg.setSource(25767U);
    msg.setSourceEntity(37U);
    msg.setDestination(43084U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("PKJVKYWHFIJILRREAUXTBTIYKWEOENKFMCJZQNMAGFWCALXYOEPYQHFNSMUPYFRITWWOBUOBOLXDLTPLTZGRCUKYNICKDHVHPGETSBAQOXULNCLZBHDWHMBSOAMZUFVYGSVSOIEKGMWPPZRQFABISVJKLYWSGDMZHDPCPJFTAQQGCXRQEBANVESXBJUJSMHWNYNJLUWDUZFVTGEHCIQJR");
    msg.text.assign("QTTFPWSFYIGTCJBEPDFMRUJNOMKXYORCUWNKNZZIOQZXYGUAQKGICXQRFTZYBTRVZVEIHWEHUHVEFXEBFWRDXQZTIQATOJQNNNPRBYOJSLVLFCYWENQEHSMLBKEDASHLGMSCBWHZYDUSBIVUKUJPWCLR");

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
    msg.setTimeStamp(0.6393729365084914);
    msg.setSource(4331U);
    msg.setSourceEntity(66U);
    msg.setDestination(11276U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("FMGXTSGJWYGFYMPRUETXWHYGUB");
    msg.htime = 0.7066408633781814;
    msg.lat = 0.47717762284186926;
    msg.lon = 0.5656476615372596;
    const char tmp_msg_0[] = {-37, 11, -66, -124, -82, 99, -121, -98, 123, 71, 43, 4, 101, 87, 101, -21, -14, 72, 31, 126, 34, -42, -83, -6, 39, 104, 98, -124, 20, -106, -101, 82, -101, -99, 113, 99, 19, 59, -114, -104, -9, 73, 70, 36, -98, 59, 4, -52, -30, 124, 1, -86, 70, -4, 29, -65, -41, 72, -25, 121, 54, -4, 29, 98, 79, -105, 69, 95, -41, 113, -109, -37, 32, 28, -10, 0, -52, -84, 69, 2, 48, 46, -118, -114, -108, 45, -28, -72, -111, 7, 38, -5, -57, -54, 82, -68, -22, 45, -20, 98, 28, 31, 0, 84, -63, 59, 65, -19, 42, -103, 115, 20, 57, -102, 41, -35, -124, -58, -65, -95, 87, 17, 50, -49, -95, 121, -23, -120, 15, -51, 3, -44, -125, 109, -126, 23, 96, -128, 113, -9, 96, 72, -117, -4, -66, 32, 125, -16, -111, 59, -110, 38, -11, -26, 47, -59, -126, -102, 6, 112, 77, 19, 70, -47, -57, -81, 115, -23, 98, -101, -5, -111, -107, 31, -126, -112, -63, 69, 120, 103, -3, 28, 71, -91, -107, 89, -125, -122, -109, -15, -110, 38, -18, -92, -41, -128, -38, 107, -13, -52, -44, -6, 39, -80, -83, 49, -92, 92, 34, -32, -34, -3, 89, -66, -101, 18};
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
    msg.setTimeStamp(0.3493859763357142);
    msg.setSource(51615U);
    msg.setSourceEntity(209U);
    msg.setDestination(21426U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("RAMHYRLXOVKPWHQSQSMZEOEOXIKLFXGDCKCMTRQHNSDHUPJHRZJWMYIKVJUFPDZEBPYINXCJSRFLVFSINZFWAXFKQLMCDPOLVNCLATBJPGNOTKFBVHOKZOVNTBIMEYGLPMFJSAYF");
    msg.htime = 0.2741191543742413;
    msg.lat = 0.5699164607458579;
    msg.lon = 0.13665010789894183;
    const char tmp_msg_0[] = {-62, 93, 0, 54, 0, 6, 110, -49, -97, 121, 118, -105, -43, 91, 49, 49, -95, -67, 108, 42, 84, -128, -20, 10, 5, -71, 43, -49, 116, 52, 21, -2, -80, 115, -113, 22, 8, 11, -126, 18, 90, -70, -95, 93, -118};
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
    msg.setTimeStamp(0.9663574929738381);
    msg.setSource(26255U);
    msg.setSourceEntity(247U);
    msg.setDestination(39912U);
    msg.setDestinationEntity(228U);
    msg.origin.assign("KYVWHPWDOCQMDXAJTADCIUCJAWRIFBZGQGKJCFNQFDPMEYVMHNZOFUKFJASDAWOIINUULJPTXMPLTZJWXWQLSZHBSGFNRLNOSUUGEXPUDYLSLXA");
    msg.htime = 0.8214307925681256;
    msg.lat = 0.37053374287725227;
    msg.lon = 0.02365842577235544;
    const char tmp_msg_0[] = {37, 35, 49, 44, -119, -43, 7, -94, -67, 38, 14, 108, -4, 96, 113, 33, -31, 45, 79, -65, 44, 68, 58, -44, -21, 88, -101, -20, 62, 47, 110, -37, -38, 57, -81, -86, 16, -123, 36, 49, -68, 84, 69, -16, -20, -13, 87, 99, -26, 118, -124, -71, -79, 104, 74, -80, -106, -63, -83, -70, -77, 89, 41, 81, -67, 117, 117, -114, 40, -120, 23, -54, -35, 82, 111, 115, 112, -89, 86, -24, 54, -30, -113, -37, -48, 77, -128, -44, 86, 102, 106, -44, -102, -116, 63, 27, 50, 107, -121, -94, 45, 117, 73, 92, 71, -31, 19, -64, 60, 7, -41, 24, 69, 123, 10, 96, -101, -20, 48, -115, -104, 8, -78, -47, -127, -95, -59, 48, 85, -95, -15, -85, -103, 113, -40, -118, -84, 61, 99, -39, 83, 6, -60, -37, 15, 42, -5, -70, -19};
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
    msg.setTimeStamp(0.4662999194425964);
    msg.setSource(47989U);
    msg.setSourceEntity(47U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(179U);
    msg.req_id = 39401U;
    msg.ttl = 16533U;
    msg.destination.assign("DMOJTYUTWBXSSZTTMIAAJFUBNTARSFEAUEZGWSKHQZNCSIAIZCQKVIUEOVJDVPQQUXXAMLQPEAXHGZMGFXRIJOLYBNPXEDHZFOMUWPROBJHOLLYTBQKCRAITEWCXTXIDVRHOKYXUMBSTGDRAJFZHBGLEDFJWDHLKCOVLUPYEEFVHNFOLRINKGIZLGJVKOYYVWATBWCPGJNCWKJQZVQWNPVBCHFSYHUPNLPDRFCQEGNSPIS");
    const char tmp_msg_0[] = {-120, -53, -14, -67, -96, -101, -63, -113, 8, 95, 13, 123, 2, -12, -91, -36, 35, 42, 2, 70, 1, 99, -100, 102, 26, -106, 59, -4, 42, -43, 125, 98, 42, 46, 100, 5, 102, -56, 30, 13, 81, -112, -126, 6, 15, 63, 55, 104, 57, -73, -120, 8, -15, 10, 67, 16, 125, -99, 82, -22, -5, 53, -45, -61, 79, -117, 70, -62, -91, 68, -104, 50, 21, -68, 68, 42, 98, 37, -4, -105, -27, 66, -107, -66, 17, -58, 121, -91};
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
    msg.setTimeStamp(0.9289962210998793);
    msg.setSource(25948U);
    msg.setSourceEntity(211U);
    msg.setDestination(54654U);
    msg.setDestinationEntity(80U);
    msg.req_id = 7161U;
    msg.ttl = 39692U;
    msg.destination.assign("DIHXOACVOMEIEFXUOTWCGQGSZRBXJUWDMKNYFYPPJVVBHXLJTDVCNYJDOMDGIDQUCYQPFPTPUBZAKARKKXYJRFWTXXVRNUJFXXWCKAHWXSMHUIQECNZSRNKGPYLFEZHUBTEHWASMGSWGWZIVJEATHOBSAPRHQLRNOCTGYJZAMGFDOITZWHYASQ");
    const char tmp_msg_0[] = {56, 110, 79, -86, 64, 5, 113, -2, -13, -118, -87, 70, -117, 38, 98, -68, 2, -116, -86, 106, -70, 36, 125, 58, 76, 23, -115, -61, -61, -11, -18, -115, -24, -60, 36, -45, -104, 42, 93, -128, -6, 59, -7, 91, 64, -114, 79, 9, 63, 79, -103, -88, -67, 98, -30, -76, 0, -101, -38, 28, 95, -33, 17, 57, -55, 20, 44, 59, 23, 87, -30, -25, 85, 90, -25, -54, 83, -113, -116, 0, -118, -74, 91, 100, -3, -94, 113, -107, -15, -46, 21, 61, -111, 53, 76, -32, -106, 95, 32, -110, 86, -101, -93, 75, 52, 95, 126, -76, 59, 125, 115, 69, 118, -117, -8, 64, 60, -107, -8, -105, -16, -45, -96, 126, -51, -33, 17, 51, -123, -112, -42, -85, 99, -103, -43, 8, -111, 21, -109, 68, -88, -58, -98, 34, -100, -99, -94, -22, -13, 58, 10, -27, 59, 42, 71, -50, -54, 11, -105, -73, -53, 45, 90, 19, -67, 90, -6, 51, 50, -121, -121, -114, 119, -28, 50, -2, 3};
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
    msg.setTimeStamp(0.28238800615820725);
    msg.setSource(43320U);
    msg.setSourceEntity(144U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(151U);
    msg.req_id = 15749U;
    msg.ttl = 32051U;
    msg.destination.assign("ZKCIBGREYTFZMDXBMTGYXQJATUAJCXLNFKRPGENSWVCBIZBKNZNFVACSOQOLG");
    const char tmp_msg_0[] = {83, -117, 72, 115, 96, -42, 88, -113, 19, 21, -11, -69, -91, 36, 103, -57, 125, -112, 14, 29, 103, -126, -21, 75, 26, -41, 116, 92, 125, 95, 14, 17, -12, 46, 93, -15, -117, -75, 8, 97, -46, -20, 81, 32, 6, 2, -66, -68, 47, -54, 116, -98, 11, 80, -8, -107, -8, -32, -107, -20, -9, -20, -112, 47, -50, -56, -123, -33, -82, -23, 59, -115, -80, 86, 41, -35, -30, 113, -10, -118, 87, 67, 45, -85, -26, -55, -4, 61};
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
    msg.setTimeStamp(0.1452148171351153);
    msg.setSource(53603U);
    msg.setSourceEntity(104U);
    msg.setDestination(33148U);
    msg.setDestinationEntity(77U);
    msg.req_id = 25308U;
    msg.status = 30U;
    msg.text.assign("QVQAKBHKDLMBTAMIYKMTCEXEXWMZDKCDYUEQWMNRNUBQFAYDEDRXHWFMGGQPCJWITRNDTZCWOWJJPSAUBLJYEQXFRIFHKYSOAYTOKJVAOIVRSNBCYAKUZRJLVLFAM");

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
    msg.setTimeStamp(0.47078298606672275);
    msg.setSource(1793U);
    msg.setSourceEntity(193U);
    msg.setDestination(56063U);
    msg.setDestinationEntity(217U);
    msg.req_id = 57102U;
    msg.status = 244U;
    msg.text.assign("CLBKESLOSKJKYANFVRISIJESRYDFSBVDWOQLXTABLALHBUBNYQHTDRBOUVCWZYUXCQEZWMZVQGUUXASKCHYMFIESKQOFGXNQDYJJTIHBRNHZFNNGIELNBUAPUI");

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
    msg.setTimeStamp(0.8211023904347912);
    msg.setSource(15537U);
    msg.setSourceEntity(250U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(232U);
    msg.req_id = 61111U;
    msg.status = 46U;
    msg.text.assign("YPEPNZLASCNRQRIZYHIJTXJKSFNPLKCXSTDRFTWLSZZUDBZNYDQDWOFFAHUPCBMDNVSWDAIEFZPDBRBYVWCGBEGTQCLVUWRMRPGPWGKRBPXFCJHKMJKWCXGVOOSTJHGFUIHZAMXOIOQHIVXLJUYAGZOQYPBWAREOSXHJEBMHLVEWRGIIYPMACETQOSMDUTDUYHCSJUZKFTVGQWMFJOXOGLN");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.886335118012661);
    msg.setSource(38269U);
    msg.setSourceEntity(187U);
    msg.setDestination(36402U);
    msg.setDestinationEntity(187U);
    msg.id = 52U;
    msg.range = 0.20719992901859818;

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
    msg.setTimeStamp(0.291455990491448);
    msg.setSource(51071U);
    msg.setSourceEntity(196U);
    msg.setDestination(38437U);
    msg.setDestinationEntity(214U);
    msg.id = 136U;
    msg.range = 0.5762691798596695;

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
    msg.setTimeStamp(0.3727300368638995);
    msg.setSource(48307U);
    msg.setSourceEntity(157U);
    msg.setDestination(36424U);
    msg.setDestinationEntity(232U);
    msg.id = 85U;
    msg.range = 0.6307128647172432;

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
    msg.setTimeStamp(0.9655644012442283);
    msg.setSource(5545U);
    msg.setSourceEntity(81U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(230U);
    msg.tx = 85U;
    msg.channel = 112U;
    msg.timer = 24954U;

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
    msg.setTimeStamp(0.38761294887921915);
    msg.setSource(3209U);
    msg.setSourceEntity(136U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(158U);
    msg.tx = 212U;
    msg.channel = 169U;
    msg.timer = 12047U;

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
    msg.setTimeStamp(0.009511294334560105);
    msg.setSource(28725U);
    msg.setSourceEntity(167U);
    msg.setDestination(49944U);
    msg.setDestinationEntity(46U);
    msg.tx = 103U;
    msg.channel = 235U;
    msg.timer = 9293U;

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
    msg.setTimeStamp(0.5854649404100719);
    msg.setSource(18496U);
    msg.setSourceEntity(30U);
    msg.setDestination(56305U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("EYELMKJADLMDZYQCPWUGFWAMBVCJROGRWSAOOLBXHZNKEXGDWWZWNRQTQPTBJAARMEZMWDLVZVVOIFOISQKGHNRCFF");
    msg.lat = 0.2935581631659918;
    msg.lon = 0.2137140546927404;
    msg.depth = 0.20225153359856485;
    msg.query_channel = 11U;
    msg.reply_channel = 106U;
    msg.transponder_delay = 147U;

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
    msg.setTimeStamp(0.8447422905690846);
    msg.setSource(1521U);
    msg.setSourceEntity(187U);
    msg.setDestination(20691U);
    msg.setDestinationEntity(2U);
    msg.beacon.assign("XDYKCDXBOFCDVVISLEMKMRZZHHVSJBAUOTTLDEBBFHTKGAVKFNZGALUOEXSWPFXBKLZVYLOWSUBJDGZJMDVQHTNRSJPHKYUIOMNAPAQYIWGCKUWSHTGFAMMRYWFPHUYBJEMGEVQGN");
    msg.lat = 0.797931327787224;
    msg.lon = 0.46969757359725206;
    msg.depth = 0.3240810209117634;
    msg.query_channel = 178U;
    msg.reply_channel = 133U;
    msg.transponder_delay = 150U;

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
    msg.setTimeStamp(0.897283253505359);
    msg.setSource(52963U);
    msg.setSourceEntity(180U);
    msg.setDestination(43173U);
    msg.setDestinationEntity(225U);
    msg.beacon.assign("MXUOALZKAPENCGILBGGRZJQQJKLIRSLPVPBDDWQWQJWBTGPJUHRCPRXQBKXTUWLCHNIFJYIGJMEDHFLJAEGFYAITCJNYVZMMEZSSUDOJSXBWPZFZYNXNOFODTWHFRQELHBNTDOVMDCQTDRMBH");
    msg.lat = 0.4273321718542783;
    msg.lon = 0.9293321947335489;
    msg.depth = 0.7714528389927121;
    msg.query_channel = 109U;
    msg.reply_channel = 40U;
    msg.transponder_delay = 131U;

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
    msg.setTimeStamp(0.8489281166506261);
    msg.setSource(44128U);
    msg.setSourceEntity(62U);
    msg.setDestination(50904U);
    msg.setDestinationEntity(220U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.1760660185967693);
    msg.setSource(7513U);
    msg.setSourceEntity(229U);
    msg.setDestination(60384U);
    msg.setDestinationEntity(127U);
    msg.op = 233U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NBQQIYLNYKLQYMZYZGEJXUDIDZNILZVOWKLHATRJYAJNDQBPOHRTRAXWIAXCGEICTIYDNDPVFZWOQMMSRYSXMITBDSYZHFONVJUERYMDEMFCROPUVTAWSLOKSJEKIHLJTEWPSVEFQNVGIICQF");
    tmp_msg_0.lat = 0.18234741254008935;
    tmp_msg_0.lon = 0.458044668633915;
    tmp_msg_0.depth = 0.7434319777433045;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 244U;
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
    msg.setTimeStamp(0.45708598883989104);
    msg.setSource(57952U);
    msg.setSourceEntity(125U);
    msg.setDestination(63191U);
    msg.setDestinationEntity(137U);
    msg.op = 49U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JICEZQVGIAPUXDGESGHWFINFHPNEZIYQXVQCBEYZPVQUJCHCMPERXOYALXLXLYTIKPGHUKFFNTQELNOOMMWGCDTBBRRTFBYNXNECZAODKQBISTVBSCQPJDHLBCSLMYTJDXSNVKBYJNSDIAUMZCZJEVMGZKXXTARQLRAAFPKIAZURXFDZFIABYWNGMV");
    tmp_msg_0.lat = 0.1788226849964587;
    tmp_msg_0.lon = 0.15497042018914542;
    tmp_msg_0.depth = 0.4654537658117893;
    tmp_msg_0.query_channel = 48U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 175U;
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
    msg.setTimeStamp(0.5855201970839623);
    msg.setSource(3500U);
    msg.setSourceEntity(229U);
    msg.setDestination(42833U);
    msg.setDestinationEntity(34U);
    msg.address = 152U;

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
    msg.setTimeStamp(0.15038263071880686);
    msg.setSource(29231U);
    msg.setSourceEntity(35U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(106U);
    msg.address = 210U;

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
    msg.setTimeStamp(0.610563980064816);
    msg.setSource(19852U);
    msg.setSourceEntity(92U);
    msg.setDestination(4608U);
    msg.setDestinationEntity(11U);
    msg.address = 15U;

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
    msg.setTimeStamp(0.3830510426440913);
    msg.setSource(59653U);
    msg.setSourceEntity(244U);
    msg.setDestination(63422U);
    msg.setDestinationEntity(11U);
    msg.address = 228U;
    msg.status = 38U;
    msg.range = 0.8487646916238782;

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
    msg.setTimeStamp(0.30605526878084155);
    msg.setSource(55540U);
    msg.setSourceEntity(219U);
    msg.setDestination(6910U);
    msg.setDestinationEntity(29U);
    msg.address = 205U;
    msg.status = 242U;
    msg.range = 0.21736774221540567;

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
    msg.setTimeStamp(0.1285987999947058);
    msg.setSource(49998U);
    msg.setSourceEntity(126U);
    msg.setDestination(47142U);
    msg.setDestinationEntity(132U);
    msg.address = 152U;
    msg.status = 209U;
    msg.range = 0.697097742979398;

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
    msg.setTimeStamp(0.568995747600274);
    msg.setSource(3556U);
    msg.setSourceEntity(8U);
    msg.setDestination(14802U);
    msg.setDestinationEntity(55U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 171U;
    tmp_msg_0.file.assign("BNBUTROFAFFWKCYYJDWNPI");
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
    msg.setTimeStamp(0.5581784095827449);
    msg.setSource(42639U);
    msg.setSourceEntity(201U);
    msg.setDestination(42356U);
    msg.setDestinationEntity(101U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.11003221285676312;
    tmp_msg_0.z_units = 141U;
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
    msg.setTimeStamp(0.5804535797598002);
    msg.setSource(58219U);
    msg.setSourceEntity(6U);
    msg.setDestination(45828U);
    msg.setDestinationEntity(164U);
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {76, 105, 110, 36, -22, 46, -8, 115, 121, 46, -58, -40, 18, -42, 0, -96, -7, -33, -92, 24, 123, -118, -53, 124, 82, -120, 92, -77, -9, 41, 43, -91, 55, -59, 97, 16, 94, -34, 121, 49, -85, 91, -50, -45, -68, -82, 68, 122, 97, -73, 13, 8, 119, -10, 65, -120, 93, 52, -105, -44, -107, 117, 102, 48, -1, 29, 119, 98, -98, 108, -23, 4, -127, -17, -34, -102, 67, 97, 48, 54, -110, 49, 22, 12, 77, 109, 7, 29, 5, -58, 52, -119, 93, 94, -11, -70, 96, 58, 49, 86, 3, -38, 32, 16, -39, -75, -105, -78, 95, -125, -23, 30, -78, -123, 63, 89, -1, -109, 44, -76, 10, 94, -51, -108, 65, -80, -86, -85, 108, -39, 17, 124, -96, 14, 70, 60, -115, 7, -55, 40, -66, -83, -50, -87, 56, 108, -16, -91, 43, 12, -94, 2, 44, -97, 5, -7, -101, -47, 89, -35, 2, -80, -27, 54, -82, 44, -20, 66, -11, 89, -69, 102, 22, 89, -2, -118, -20, -44, 107, 40, 9, -83, -74, -128, 75, -52, -41, -90, -22, 42, 64, 93, 8, 30, -109, 59, 66, 45, -44, 124, 35, -30, 110, 124, -12, -14, -10, 65, 40, 126, 115, -18, -45, -118, 65, 80, -66, 92, 1, -34, -45};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3563728561062667);
    msg.setSource(45360U);
    msg.setSourceEntity(65U);
    msg.setDestination(11009U);
    msg.setDestinationEntity(4U);
    msg.enable = 206U;

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
    msg.setTimeStamp(0.8099874704730594);
    msg.setSource(30020U);
    msg.setSourceEntity(229U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(178U);
    msg.enable = 77U;

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
    msg.setTimeStamp(0.05073803486588846);
    msg.setSource(12236U);
    msg.setSourceEntity(124U);
    msg.setDestination(11196U);
    msg.setDestinationEntity(96U);
    msg.enable = 21U;

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
    msg.setTimeStamp(0.48623561421821226);
    msg.setSource(36567U);
    msg.setSourceEntity(238U);
    msg.setDestination(20706U);
    msg.setDestinationEntity(41U);
    msg.summary = 118U;
    msg.level = 66U;

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
    msg.setTimeStamp(0.3455406935191109);
    msg.setSource(19020U);
    msg.setSourceEntity(55U);
    msg.setDestination(21714U);
    msg.setDestinationEntity(204U);
    msg.summary = 128U;
    msg.level = 151U;

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
    msg.setTimeStamp(0.08414841665637962);
    msg.setSource(5448U);
    msg.setSourceEntity(252U);
    msg.setDestination(28073U);
    msg.setDestinationEntity(31U);
    msg.summary = 10U;
    msg.level = 219U;

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
    msg.setTimeStamp(0.9488288642085182);
    msg.setSource(25156U);
    msg.setSourceEntity(12U);
    msg.setDestination(43091U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.4267111165026036);
    msg.setSource(12294U);
    msg.setSourceEntity(111U);
    msg.setDestination(60816U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.17882649542949092);
    msg.setSource(20675U);
    msg.setSourceEntity(34U);
    msg.setDestination(23036U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.6018573166335832);
    msg.setSource(721U);
    msg.setSourceEntity(179U);
    msg.setDestination(19801U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.7563001696399184);
    msg.setSource(55995U);
    msg.setSourceEntity(186U);
    msg.setDestination(21941U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.1912410327243771);
    msg.setSource(50725U);
    msg.setSourceEntity(213U);
    msg.setDestination(49609U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.7001778249379982);
    msg.setSource(49251U);
    msg.setSourceEntity(88U);
    msg.setDestination(2498U);
    msg.setDestinationEntity(243U);
    msg.op = 24U;
    msg.system.assign("HFHQZCCYCUMEFDLFSRQRGDTWODBYHRNUARHRUVGTGVULCGXGDWXQHVIKFCRUSHAANRRCSNVBWTZIVKPXKEGJOSIKTFTFOCSNFEPZHUWEGAVBMOSJPOJLRDMLQLNJIBXAPLTKXMVBPDWPAYQBNSZSWQFLPY");
    msg.range = 0.08281891489987181;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("FBKALFYPOTWOOWSFXMWEXUMIRQSHBEXNDEHYKBBUDVYFGPBCVDRNGEOKTUQJPJVJHENOXYIFNJRRCPSVPNRIQARTIZZUWPIFMYXIFUFCPRZXPAVSXJVLALJGAZZVCQLCTHOKOJCDXSDMWTIDCNSELHNPGWKOROYKYRTTKVQIHZBBEUXZQNNSLXBZJBLTHFKEHGACLSH");
    tmp_msg_0.value = 99U;
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
    msg.setTimeStamp(0.954846825023627);
    msg.setSource(53684U);
    msg.setSourceEntity(103U);
    msg.setDestination(28442U);
    msg.setDestinationEntity(67U);
    msg.op = 126U;
    msg.system.assign("VSNXOUAMQBNYFKNISFRVLEDGHRXTMLHPZKKYSYRJLTWSXTMTAPOIWLBKHIHUQFRWBTNZBAHUABZYCLPHOQCZDYIAABCFEXPGUPFFJWTKSUDPWVLXEGZUXZYJKQDIXFASXOWMZJRQIPHVSZOEPEAMICEYCHBSVOGGMWJVAIJDNRNAOOJWRNFKCRVIMXJRHQMTPDJOTCKCCK");
    msg.range = 0.32506868392080046;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 890247109U;
    tmp_msg_0.status = 222U;
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
    msg.setTimeStamp(0.43554561754685095);
    msg.setSource(22788U);
    msg.setSourceEntity(94U);
    msg.setDestination(49457U);
    msg.setDestinationEntity(233U);
    msg.op = 119U;
    msg.system.assign("ZGTSDAIXFYVLQILKYPN");
    msg.range = 0.5005374870578874;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CVTKAYBAOIMBDSBPODITDNSUOQKZZKAQCGAARJCKVBMDBFTPYJBTWDEOXRHBWJDVOGONYRJQLQSPPTNZHIZOMAGT");
    tmp_msg_0.predicate.assign("FVPHAYUOTDFNFXZJVASANZNDTJKPUGZUXJWEEUWKOWKCZFMNHNBDLQWQJUIQVVYQXZKKRDSIAOUJESFBIPQYMVXAPLYKQEXLTNAGFLYYLNYCVBOIXMEVABMJAEAOGDSORDWOICARHBSFVQTWJIIKOHBRDXIQVUPFQZPCIEUKLNSECTTHZBRCTIMP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("COFODDSBHITHOHPYPPVHWHQSYYRVCEAKKPQGGGMGRJAAPUSDUBOLUXILZZLPDBZJNNGMMINILRESFVKKDWTPDNZCMDHILFJFISIYWOCMBDYAOLVTQQFNOVKPABYREFUJZTVJFDBFNLYIUUWTJCYUKAFHRWCZWQEXVUCQGWKZXQYDBJRSIUTRRMGZHXQEPKSKCNBHNQNKXLVHPLWXNJUCY");
    tmp_tmp_msg_0_0.attr_type = 214U;
    tmp_tmp_msg_0_0.min.assign("BETRNISHSYLSRFDJYVDVLATVHFPRECOHVHQZNOQZQAMMCCCWROCFRZDNBOCTMKHWHWQRMCPAAHDEUDQBJNENNLDPUYNPKXCSOEYGTXLOEGUZWIT");
    tmp_tmp_msg_0_0.max.assign("TSOMEVBHYLYGJSNCJCBVPGEAKXCIMMFQMIXMITIDUBABGWASUTEQFRSQQNICKQWGQYLYCDROGJDHUZKGXWXBHHRNWLOGIOGKN");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.23280209682522934);
    msg.setSource(39713U);
    msg.setSourceEntity(43U);
    msg.setDestination(50876U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.9409820460127467);
    msg.setSource(40127U);
    msg.setSourceEntity(157U);
    msg.setDestination(550U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.4178003907263942);
    msg.setSource(42000U);
    msg.setSourceEntity(245U);
    msg.setDestination(29851U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.6432281345115404);
    msg.setSource(30069U);
    msg.setSourceEntity(20U);
    msg.setDestination(17093U);
    msg.setDestinationEntity(38U);
    msg.list.assign("RTUHDDUGXQYSYTEDQKJNZHLUUILVIFCEUDZWVYJSDRDWNHTFQAKPBGYOYPOUROWEOFJHOPMHURAFVWLABRUVPEBCBDTYHBQEBRXAGPKAAMEIXVCNGXWSONLBZWRQVSQXLISZKXULVFMODPWXGLKFTMZTJICH");

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
    msg.setTimeStamp(0.4789196950779572);
    msg.setSource(24940U);
    msg.setSourceEntity(152U);
    msg.setDestination(242U);
    msg.setDestinationEntity(215U);
    msg.list.assign("BGQOVQGSMZYMBB");

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
    msg.setTimeStamp(0.4029743760099814);
    msg.setSource(29052U);
    msg.setSourceEntity(13U);
    msg.setDestination(63785U);
    msg.setDestinationEntity(239U);
    msg.list.assign("YFRLRWGCJHCPBEDVVBMMGEPQOBFRISLWQLZOLQCBYGWYDHUEKSVPTGUQSNOFXIADMIVQSFUADTSNWOZXJZISJGLPUBJKFXVEJGAVZNSPOMQVEHZHUNZYXLPFNBNDLRHETGNPCHBCZRKIR");

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
    msg.setTimeStamp(0.9585647099182177);
    msg.setSource(23170U);
    msg.setSourceEntity(137U);
    msg.setDestination(39513U);
    msg.setDestinationEntity(78U);
    msg.value = 950;

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
    msg.setTimeStamp(0.5731850606927703);
    msg.setSource(38657U);
    msg.setSourceEntity(36U);
    msg.setDestination(55065U);
    msg.setDestinationEntity(85U);
    msg.value = 21990;

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
    msg.setTimeStamp(0.11232377126777848);
    msg.setSource(8368U);
    msg.setSourceEntity(64U);
    msg.setDestination(35438U);
    msg.setDestinationEntity(247U);
    msg.value = -21188;

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
    msg.setTimeStamp(0.18467743582778162);
    msg.setSource(51333U);
    msg.setSourceEntity(110U);
    msg.setDestination(41442U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8316084230725657;

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
    msg.setTimeStamp(0.8019797947382433);
    msg.setSource(58121U);
    msg.setSourceEntity(8U);
    msg.setDestination(3433U);
    msg.setDestinationEntity(44U);
    msg.value = 0.7116663691021289;

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
    msg.setTimeStamp(0.632360530651328);
    msg.setSource(20149U);
    msg.setSourceEntity(93U);
    msg.setDestination(35348U);
    msg.setDestinationEntity(154U);
    msg.value = 0.33149679411978494;

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
    msg.setTimeStamp(0.9189164073537356);
    msg.setSource(5880U);
    msg.setSourceEntity(135U);
    msg.setDestination(4419U);
    msg.setDestinationEntity(20U);
    msg.value = 0.8690326449880558;

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
    msg.setTimeStamp(0.9749283335190522);
    msg.setSource(41957U);
    msg.setSourceEntity(195U);
    msg.setDestination(22795U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6121048541048956;

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
    msg.setTimeStamp(0.08836896676861761);
    msg.setSource(52177U);
    msg.setSourceEntity(60U);
    msg.setDestination(41515U);
    msg.setDestinationEntity(193U);
    msg.value = 0.3949629354820243;

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
    msg.setTimeStamp(0.9139173372255933);
    msg.setSource(24058U);
    msg.setSourceEntity(163U);
    msg.setDestination(31213U);
    msg.setDestinationEntity(126U);
    msg.validity = 809U;
    msg.type = 181U;
    msg.utc_year = 9075U;
    msg.utc_month = 151U;
    msg.utc_day = 72U;
    msg.utc_time = 0.02952239291765124;
    msg.lat = 0.6949072700590995;
    msg.lon = 0.9092269862540306;
    msg.height = 0.5239735573036303;
    msg.satellites = 221U;
    msg.cog = 0.032835051909755775;
    msg.sog = 0.40366789016732485;
    msg.hdop = 0.5939759587128123;
    msg.vdop = 0.1377665338112174;
    msg.hacc = 0.5010086481544748;
    msg.vacc = 0.620721761170634;

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
    msg.setTimeStamp(0.7364086896355976);
    msg.setSource(62197U);
    msg.setSourceEntity(139U);
    msg.setDestination(21280U);
    msg.setDestinationEntity(4U);
    msg.validity = 49442U;
    msg.type = 192U;
    msg.utc_year = 6239U;
    msg.utc_month = 70U;
    msg.utc_day = 183U;
    msg.utc_time = 0.012949050753733982;
    msg.lat = 0.5794199712023693;
    msg.lon = 0.13080929425846288;
    msg.height = 0.05953833766101668;
    msg.satellites = 40U;
    msg.cog = 0.031898218538537026;
    msg.sog = 0.6736532922958828;
    msg.hdop = 0.009371930318003985;
    msg.vdop = 0.10677566525450166;
    msg.hacc = 0.7301188552918629;
    msg.vacc = 0.6724381256960522;

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
    msg.setTimeStamp(0.7525971036909982);
    msg.setSource(20888U);
    msg.setSourceEntity(83U);
    msg.setDestination(20258U);
    msg.setDestinationEntity(179U);
    msg.validity = 53068U;
    msg.type = 146U;
    msg.utc_year = 49421U;
    msg.utc_month = 184U;
    msg.utc_day = 79U;
    msg.utc_time = 0.48425828100268375;
    msg.lat = 0.8542794798360659;
    msg.lon = 0.6435730045424304;
    msg.height = 0.8133616096536164;
    msg.satellites = 104U;
    msg.cog = 0.18586634343585318;
    msg.sog = 0.3159248440256597;
    msg.hdop = 0.786469744116229;
    msg.vdop = 0.2806026289716633;
    msg.hacc = 0.6434923913734316;
    msg.vacc = 0.2863859043810123;

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
    msg.setTimeStamp(0.3495483581971456);
    msg.setSource(4794U);
    msg.setSourceEntity(95U);
    msg.setDestination(14847U);
    msg.setDestinationEntity(248U);
    msg.time = 0.8818449103628823;
    msg.phi = 0.6945463692543036;
    msg.theta = 0.015488238496459639;
    msg.psi = 0.49417072511866167;
    msg.psi_magnetic = 0.9647024594365848;

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
    msg.setTimeStamp(0.7267256726237422);
    msg.setSource(59433U);
    msg.setSourceEntity(65U);
    msg.setDestination(58601U);
    msg.setDestinationEntity(17U);
    msg.time = 0.4312981687465792;
    msg.phi = 0.3246387952336983;
    msg.theta = 0.3475181770428968;
    msg.psi = 0.19447877829545313;
    msg.psi_magnetic = 0.9381564264716876;

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
    msg.setTimeStamp(0.8473830425329705);
    msg.setSource(30344U);
    msg.setSourceEntity(188U);
    msg.setDestination(41451U);
    msg.setDestinationEntity(130U);
    msg.time = 0.960935375796244;
    msg.phi = 0.8576278015820444;
    msg.theta = 0.24885602470265256;
    msg.psi = 0.860394087407217;
    msg.psi_magnetic = 0.05648562042295313;

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
    msg.setTimeStamp(0.18847005025184882);
    msg.setSource(14111U);
    msg.setSourceEntity(51U);
    msg.setDestination(15558U);
    msg.setDestinationEntity(252U);
    msg.time = 0.3090993019627666;
    msg.x = 0.7322401114044941;
    msg.y = 0.16507080597595192;
    msg.z = 0.7641515993211;
    msg.timestep = 0.21987947731229007;

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
    msg.setTimeStamp(0.23360838878105206);
    msg.setSource(40498U);
    msg.setSourceEntity(0U);
    msg.setDestination(61870U);
    msg.setDestinationEntity(45U);
    msg.time = 0.6907922760940547;
    msg.x = 0.9612821082446911;
    msg.y = 0.6557407750804346;
    msg.z = 0.7157998631269795;
    msg.timestep = 0.2670337180403408;

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
    msg.setTimeStamp(0.3844730579544188);
    msg.setSource(62612U);
    msg.setSourceEntity(109U);
    msg.setDestination(6133U);
    msg.setDestinationEntity(28U);
    msg.time = 0.03281723422218075;
    msg.x = 0.6371828981631412;
    msg.y = 0.9645830681182386;
    msg.z = 0.17818048188455637;
    msg.timestep = 0.4919776646641534;

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
    msg.setTimeStamp(0.41033724751224976);
    msg.setSource(60473U);
    msg.setSourceEntity(220U);
    msg.setDestination(8804U);
    msg.setDestinationEntity(89U);
    msg.time = 0.4553114076399071;
    msg.x = 0.09489294734026654;
    msg.y = 0.5098478772036786;
    msg.z = 0.831613674216708;

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
    msg.setTimeStamp(0.9048095793018721);
    msg.setSource(18338U);
    msg.setSourceEntity(198U);
    msg.setDestination(13106U);
    msg.setDestinationEntity(147U);
    msg.time = 0.050177514216140806;
    msg.x = 0.6459562022203832;
    msg.y = 0.6567800967749449;
    msg.z = 0.37319057146732915;

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
    msg.setTimeStamp(0.4018903790378179);
    msg.setSource(61053U);
    msg.setSourceEntity(38U);
    msg.setDestination(31331U);
    msg.setDestinationEntity(28U);
    msg.time = 0.04687775441274955;
    msg.x = 0.9818208411267292;
    msg.y = 0.6387239638522936;
    msg.z = 0.9466029712253583;

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
    msg.setTimeStamp(0.9804646242639075);
    msg.setSource(41708U);
    msg.setSourceEntity(43U);
    msg.setDestination(28900U);
    msg.setDestinationEntity(203U);
    msg.time = 0.24119965517481645;
    msg.x = 0.8200575989292492;
    msg.y = 0.6944933188410047;
    msg.z = 0.8423644311252648;

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
    msg.setTimeStamp(0.8708174006528756);
    msg.setSource(30995U);
    msg.setSourceEntity(0U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(47U);
    msg.time = 0.7129653283842821;
    msg.x = 0.9072333209077171;
    msg.y = 0.040641936085258346;
    msg.z = 0.5247383567563237;

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
    msg.setTimeStamp(0.08635509497688898);
    msg.setSource(4200U);
    msg.setSourceEntity(216U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(115U);
    msg.time = 0.38195787019665184;
    msg.x = 0.20276041552959922;
    msg.y = 0.4711293181997416;
    msg.z = 0.9432963673249608;

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
    msg.setTimeStamp(0.6696852375181177);
    msg.setSource(38326U);
    msg.setSourceEntity(47U);
    msg.setDestination(2154U);
    msg.setDestinationEntity(146U);
    msg.time = 0.22726792498893278;
    msg.x = 0.3000699420099413;
    msg.y = 0.12074513811931309;
    msg.z = 0.3491855086736084;

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
    msg.setTimeStamp(0.6418271013838847);
    msg.setSource(60941U);
    msg.setSourceEntity(232U);
    msg.setDestination(40775U);
    msg.setDestinationEntity(61U);
    msg.time = 0.7555001801085822;
    msg.x = 0.022864847487291784;
    msg.y = 0.8580635264085842;
    msg.z = 0.35255292744116784;

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
    msg.setTimeStamp(0.4633674775128952);
    msg.setSource(58896U);
    msg.setSourceEntity(236U);
    msg.setDestination(59638U);
    msg.setDestinationEntity(125U);
    msg.time = 0.23557457687188232;
    msg.x = 0.2325105065303894;
    msg.y = 0.3650399530557692;
    msg.z = 0.9899199630762419;

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
    msg.setTimeStamp(0.5327745168678336);
    msg.setSource(39254U);
    msg.setSourceEntity(159U);
    msg.setDestination(13351U);
    msg.setDestinationEntity(168U);
    msg.validity = 46U;
    msg.x = 0.9561669060795625;
    msg.y = 0.9453754602180283;
    msg.z = 0.08765453408503254;

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
    msg.setTimeStamp(0.9394535437588584);
    msg.setSource(6929U);
    msg.setSourceEntity(36U);
    msg.setDestination(47482U);
    msg.setDestinationEntity(171U);
    msg.validity = 236U;
    msg.x = 0.5766718559650426;
    msg.y = 0.5077153646863299;
    msg.z = 0.9948028205340197;

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
    msg.setTimeStamp(0.463039795420809);
    msg.setSource(41026U);
    msg.setSourceEntity(159U);
    msg.setDestination(26522U);
    msg.setDestinationEntity(190U);
    msg.validity = 129U;
    msg.x = 0.7512564428992895;
    msg.y = 0.756444007040235;
    msg.z = 0.8226892517483574;

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
    msg.setTimeStamp(0.8828897507301217);
    msg.setSource(65285U);
    msg.setSourceEntity(252U);
    msg.setDestination(59352U);
    msg.setDestinationEntity(227U);
    msg.validity = 242U;
    msg.x = 0.4507563009859923;
    msg.y = 0.11704984840219179;
    msg.z = 0.6282241331088633;

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
    msg.setTimeStamp(0.5654128827977808);
    msg.setSource(30583U);
    msg.setSourceEntity(47U);
    msg.setDestination(17441U);
    msg.setDestinationEntity(170U);
    msg.validity = 217U;
    msg.x = 0.09196817026233206;
    msg.y = 0.5984799794541952;
    msg.z = 0.9237597412318121;

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
    msg.setTimeStamp(0.31042853203196374);
    msg.setSource(31357U);
    msg.setSourceEntity(215U);
    msg.setDestination(46706U);
    msg.setDestinationEntity(211U);
    msg.validity = 145U;
    msg.x = 0.6621226517701337;
    msg.y = 0.529519229966946;
    msg.z = 0.4241300088832545;

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
    msg.setTimeStamp(0.7110726768050682);
    msg.setSource(5141U);
    msg.setSourceEntity(113U);
    msg.setDestination(45010U);
    msg.setDestinationEntity(130U);
    msg.time = 0.6504184781033707;
    msg.x = 0.2640679454998408;
    msg.y = 0.26705988389522994;
    msg.z = 0.8636460802393262;

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
    msg.setTimeStamp(0.6125071741996014);
    msg.setSource(56959U);
    msg.setSourceEntity(138U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(106U);
    msg.time = 0.5991756047371382;
    msg.x = 0.2382451971422258;
    msg.y = 0.8925422669389731;
    msg.z = 0.21503801084838248;

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
    msg.setTimeStamp(0.4081445658716195);
    msg.setSource(34277U);
    msg.setSourceEntity(149U);
    msg.setDestination(15990U);
    msg.setDestinationEntity(25U);
    msg.time = 0.04114639502262207;
    msg.x = 0.38061537933857803;
    msg.y = 0.7935121128228733;
    msg.z = 0.13475267986084882;

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
    msg.setTimeStamp(0.9485371506837046);
    msg.setSource(15502U);
    msg.setSourceEntity(234U);
    msg.setDestination(62619U);
    msg.setDestinationEntity(162U);
    msg.validity = 94U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6841159079175263;
    tmp_msg_0.y = 0.621561321071352;
    tmp_msg_0.z = 0.9921643368360368;
    tmp_msg_0.phi = 0.580061019898692;
    tmp_msg_0.theta = 0.9748907860398753;
    tmp_msg_0.psi = 0.35470578582372425;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3300448130741145;
    tmp_msg_1.beam_height = 0.2576196594851391;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6099197528371338;

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
    msg.setTimeStamp(0.693656401384974);
    msg.setSource(434U);
    msg.setSourceEntity(228U);
    msg.setDestination(20952U);
    msg.setDestinationEntity(242U);
    msg.validity = 98U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1737574513954525;
    tmp_msg_0.y = 0.458708854038123;
    tmp_msg_0.z = 0.0463885081998795;
    tmp_msg_0.phi = 0.43835116323033085;
    tmp_msg_0.theta = 0.9338226874151198;
    tmp_msg_0.psi = 0.17485254535026207;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.1809854168935603;

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
    msg.setTimeStamp(0.22045691078861418);
    msg.setSource(11584U);
    msg.setSourceEntity(169U);
    msg.setDestination(17629U);
    msg.setDestinationEntity(76U);
    msg.validity = 89U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9193866038523848;
    tmp_msg_0.y = 0.5912191324577778;
    tmp_msg_0.z = 0.9556445967855418;
    tmp_msg_0.phi = 0.5560038563700717;
    tmp_msg_0.theta = 0.34161859201188305;
    tmp_msg_0.psi = 0.39181036419370796;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.3235479222431089;

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
    msg.setTimeStamp(0.4456268614803204);
    msg.setSource(63679U);
    msg.setSourceEntity(217U);
    msg.setDestination(16915U);
    msg.setDestinationEntity(34U);
    msg.value = 0.3116867214443322;

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
    msg.setTimeStamp(0.4055207605049893);
    msg.setSource(61203U);
    msg.setSourceEntity(205U);
    msg.setDestination(36770U);
    msg.setDestinationEntity(158U);
    msg.value = 0.09572567855435798;

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
    msg.setTimeStamp(0.2536772916934871);
    msg.setSource(54810U);
    msg.setSourceEntity(132U);
    msg.setDestination(41544U);
    msg.setDestinationEntity(146U);
    msg.value = 0.44611622426308883;

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
    msg.setTimeStamp(0.20336848087593107);
    msg.setSource(49028U);
    msg.setSourceEntity(80U);
    msg.setDestination(5090U);
    msg.setDestinationEntity(64U);
    msg.value = 0.647417856673876;

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
    msg.setTimeStamp(0.46213271835478786);
    msg.setSource(30501U);
    msg.setSourceEntity(23U);
    msg.setDestination(59883U);
    msg.setDestinationEntity(140U);
    msg.value = 0.2446519216589106;

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
    msg.setTimeStamp(0.7704863993771314);
    msg.setSource(50001U);
    msg.setSourceEntity(194U);
    msg.setDestination(45004U);
    msg.setDestinationEntity(224U);
    msg.value = 0.10487232632327936;

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
    msg.setTimeStamp(0.15788229423579792);
    msg.setSource(25326U);
    msg.setSourceEntity(223U);
    msg.setDestination(28491U);
    msg.setDestinationEntity(66U);
    msg.value = 0.24730315656600688;

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
    msg.setTimeStamp(0.9695285823260792);
    msg.setSource(25587U);
    msg.setSourceEntity(194U);
    msg.setDestination(60974U);
    msg.setDestinationEntity(38U);
    msg.value = 0.9090678891789271;

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
    msg.setTimeStamp(0.8657483484219326);
    msg.setSource(13928U);
    msg.setSourceEntity(106U);
    msg.setDestination(50067U);
    msg.setDestinationEntity(66U);
    msg.value = 0.14839463740620784;

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
    msg.setTimeStamp(0.652292195604718);
    msg.setSource(35638U);
    msg.setSourceEntity(116U);
    msg.setDestination(29545U);
    msg.setDestinationEntity(59U);
    msg.value = 0.36446234033592095;

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
    msg.setTimeStamp(0.04279500239492118);
    msg.setSource(9069U);
    msg.setSourceEntity(239U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(120U);
    msg.value = 0.7414135702227933;

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
    msg.setTimeStamp(0.616723646593485);
    msg.setSource(46628U);
    msg.setSourceEntity(133U);
    msg.setDestination(28502U);
    msg.setDestinationEntity(146U);
    msg.value = 0.1652247624251213;

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
    msg.setTimeStamp(0.608226940790019);
    msg.setSource(15038U);
    msg.setSourceEntity(214U);
    msg.setDestination(13828U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6146151965413116;

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
    msg.setTimeStamp(0.13170666567572986);
    msg.setSource(25822U);
    msg.setSourceEntity(60U);
    msg.setDestination(21552U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9312788756028275;

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
    msg.setTimeStamp(0.8909959751159865);
    msg.setSource(39021U);
    msg.setSourceEntity(133U);
    msg.setDestination(9915U);
    msg.setDestinationEntity(234U);
    msg.value = 0.7288706565329374;

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
    msg.setTimeStamp(0.6421644208511508);
    msg.setSource(40082U);
    msg.setSourceEntity(254U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(76U);
    msg.value = 0.5175065910366599;

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
    msg.setTimeStamp(0.9255465251175309);
    msg.setSource(42391U);
    msg.setSourceEntity(168U);
    msg.setDestination(2692U);
    msg.setDestinationEntity(110U);
    msg.value = 0.1792601066863515;

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
    msg.setTimeStamp(0.09841865376222636);
    msg.setSource(63868U);
    msg.setSourceEntity(35U);
    msg.setDestination(37299U);
    msg.setDestinationEntity(63U);
    msg.value = 0.549774856389643;

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
    msg.setTimeStamp(0.6677713821301);
    msg.setSource(53794U);
    msg.setSourceEntity(106U);
    msg.setDestination(57373U);
    msg.setDestinationEntity(186U);
    msg.value = 0.7944703829484574;

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
    msg.setTimeStamp(0.6875643926246416);
    msg.setSource(44985U);
    msg.setSourceEntity(55U);
    msg.setDestination(410U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6700452937742387;

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
    msg.setTimeStamp(0.07578916230091681);
    msg.setSource(49451U);
    msg.setSourceEntity(175U);
    msg.setDestination(50305U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5602775174650219;

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
    msg.setTimeStamp(0.8606004383911444);
    msg.setSource(32942U);
    msg.setSourceEntity(6U);
    msg.setDestination(27953U);
    msg.setDestinationEntity(137U);
    msg.value = 0.06702987991094755;

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
    msg.setTimeStamp(0.6046090385332688);
    msg.setSource(22482U);
    msg.setSourceEntity(214U);
    msg.setDestination(17818U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5282963367918855;

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
    msg.setTimeStamp(0.6050595165565762);
    msg.setSource(40052U);
    msg.setSourceEntity(225U);
    msg.setDestination(18563U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5738044165821666;

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
    msg.setTimeStamp(0.5341330195895551);
    msg.setSource(6057U);
    msg.setSourceEntity(41U);
    msg.setDestination(14190U);
    msg.setDestinationEntity(32U);
    msg.direction = 0.2094467383236851;
    msg.speed = 0.7100346984351174;

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
    msg.setTimeStamp(0.9269857826573075);
    msg.setSource(13129U);
    msg.setSourceEntity(96U);
    msg.setDestination(56948U);
    msg.setDestinationEntity(149U);
    msg.direction = 0.6022439926495358;
    msg.speed = 0.14512560174373124;

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
    msg.setTimeStamp(0.8196846504090824);
    msg.setSource(34300U);
    msg.setSourceEntity(94U);
    msg.setDestination(10429U);
    msg.setDestinationEntity(84U);
    msg.direction = 0.49528253615919215;
    msg.speed = 0.9661431427046484;

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
    msg.setTimeStamp(0.3866603430695036);
    msg.setSource(22048U);
    msg.setSourceEntity(109U);
    msg.setDestination(2777U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0389325601328645;

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
    msg.setTimeStamp(0.6733620981933367);
    msg.setSource(27617U);
    msg.setSourceEntity(235U);
    msg.setDestination(56728U);
    msg.setDestinationEntity(188U);
    msg.value = 0.5586979236726856;

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
    msg.setTimeStamp(0.3098144412981848);
    msg.setSource(26376U);
    msg.setSourceEntity(110U);
    msg.setDestination(49921U);
    msg.setDestinationEntity(118U);
    msg.value = 0.2315556027985466;

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
    msg.setTimeStamp(0.7711869763004523);
    msg.setSource(11747U);
    msg.setSourceEntity(57U);
    msg.setDestination(19179U);
    msg.setDestinationEntity(35U);
    msg.value.assign("TYFYZALLUKNTRBDZRFUOJOWWKYVUABEOKVCLWJRHLLOEYVAFXCDSTULUSKCCSEBOQALYDW");

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
    msg.setTimeStamp(0.8212192819985191);
    msg.setSource(39782U);
    msg.setSourceEntity(119U);
    msg.setDestination(64051U);
    msg.setDestinationEntity(59U);
    msg.value.assign("AAPYSNOHOLRRQOGLZNDRBELMKGUTBQXXVPHKRZIGFJNTJLDANRZGAUAFAWYCFEOCUUTLEDGQWWTAMOPFYLEXQMPQFHCSECVRAMJCVQMIEJDCVTEZZOHDOQXATBEWZNQUJQFPSRIUB");

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
    msg.setTimeStamp(0.28439348347190474);
    msg.setSource(3159U);
    msg.setSourceEntity(11U);
    msg.setDestination(64818U);
    msg.setDestinationEntity(107U);
    msg.value.assign("PSCJWZQNNDCHULMYWEAVRCUHNLNHKQUQRMPKXKJKCOWBPVPBFMOWOSADECRAVIMDLLVIUSRAMEZHHZVBPFQFSPXQVFKBTIPAIKZDYDGNCXAKXFMVUMBRGXDIQLTTCTYGIOFRTBNAENWOFIRUGJLPPLJXTJRUVIZZOBEHPMKAMIHZFYDDOETLQXYLCTOQKSVENOJGLEEUHTHFXABBGXQXFZZJNMJGJGZUSWUHWYNKAGWRYYDTCJDSG");

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
    msg.setTimeStamp(0.6711501861231494);
    msg.setSource(31021U);
    msg.setSourceEntity(57U);
    msg.setDestination(41438U);
    msg.setDestinationEntity(200U);
    const char tmp_msg_0[] = {68, 70, 77, 20, 18, 39, -36, -111, 44, -90, 12, 122, 52, 61, 116, 23, 68, -15, 95, -9, 123, -23, -31, -117, -90, 61, 23, -76, 111, -78, -109, 77, 8, 80, 38, 32, 125, 84, 109, -32, 42, -80, -63, -120, -69, -11, 85, -5, -125, 100, 119, 106, -33, 7, 118, 9, 28, 87, 121, -22, -46, -124};
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
    msg.setTimeStamp(0.3926510034483397);
    msg.setSource(3439U);
    msg.setSourceEntity(111U);
    msg.setDestination(60016U);
    msg.setDestinationEntity(73U);
    const char tmp_msg_0[] = {-60, 0, -82, -100, -120, -68, -60, 15, -55, 80, 2, -71, 64, -13, -80, 59, -73, 106, -40, 60, 49, -110, 91, -89, 43, -19, -19, 77, 69, -36, -10, 1, 126, -101, -77, -56, -19, 123, -43, 122, -68, 4, 84, 50, 6, 4, -58, -126, -2, -63, -54, 34, -16, 61, -84, 25, 78, 98, -107, 114, -10, -109, 41, 112, -124, 5, -110, 105, 107, 25};
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
    msg.setTimeStamp(0.35837822626417615);
    msg.setSource(56385U);
    msg.setSourceEntity(178U);
    msg.setDestination(4517U);
    msg.setDestinationEntity(109U);
    const char tmp_msg_0[] = {86, -53, 93, 116, 96, 104, -77, -38, -26, -84, 112, -111, -21, -80, -9, 90, -2, -27, -126, 104, 119, 114, 76, 85, 107, -107, -88, -23, 111, 113, -87, -120, -1, -69, -76, 9, 76, -77, 11, -52, 15, -14, 98, 115, 7, 117, -125, -76, 17, 9, -51, -78, 103, -85, -88, -27, 51, 101, -32, -53, -25, -30};
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
    msg.setTimeStamp(0.5795604823424714);
    msg.setSource(3224U);
    msg.setSourceEntity(73U);
    msg.setDestination(54259U);
    msg.setDestinationEntity(103U);
    msg.frequency = 831722305U;
    msg.min_range = 22033U;
    msg.max_range = 27670U;

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
    msg.setTimeStamp(0.5015489453583984);
    msg.setSource(43194U);
    msg.setSourceEntity(130U);
    msg.setDestination(4402U);
    msg.setDestinationEntity(28U);
    msg.frequency = 1900508009U;
    msg.min_range = 49839U;
    msg.max_range = 1755U;

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
    msg.setTimeStamp(0.6535326160158146);
    msg.setSource(1770U);
    msg.setSourceEntity(154U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(148U);
    msg.frequency = 46396135U;
    msg.min_range = 9874U;
    msg.max_range = 65404U;

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
    msg.setTimeStamp(0.9173911437762751);
    msg.setSource(55041U);
    msg.setSourceEntity(41U);
    msg.setDestination(41907U);
    msg.setDestinationEntity(164U);
    msg.type = 206U;
    msg.frequency = 390147815U;
    msg.min_range = 27454U;
    msg.max_range = 3727U;
    msg.bits_per_point = 183U;
    msg.scale_factor = 0.17754302471378292;
    const char tmp_msg_0[] = {105, 106, -43, -113, 31, 0, 94, 53, 15, -101, 35, 21, 55, 93, -24, -73, -122, 70, -58, 19, 89, -94, -86, -117, 42, -106, -67, -49, -8, -88, -10, 81, -84, 102, 120, -71, -118, -79, -47, -26, -101, 21, 61, 23, 22, -60, -64, 36, -62, 2, -128, -103, 109, -92, 17, 57, 102, -72, -69, 104, -91, 56, -77, -60, 10, -17, 50, 5, -124, -52, -89, 2, -16, 102, 17, 123, 3, -92, 115, 58, -62, -82, -110, 112, 76, -72, 17, 96, 119, -98, -51, -2};
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
    msg.setTimeStamp(0.953008048995561);
    msg.setSource(32970U);
    msg.setSourceEntity(111U);
    msg.setDestination(32627U);
    msg.setDestinationEntity(24U);
    msg.type = 174U;
    msg.frequency = 3464934160U;
    msg.min_range = 39624U;
    msg.max_range = 2529U;
    msg.bits_per_point = 4U;
    msg.scale_factor = 0.11418480040427104;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8637527061061635;
    tmp_msg_0.beam_height = 0.282606866739331;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-47, -14, 35, 18, -86, 90, 116, -95, 36, -121, -55, -55, 40, 54, 124, -59, -4, 14, 6, -98, 13, 35, -126, 18, 102, 35, -73, -95, 79, -6, 97, 15, 101, 119, -48, 123, 94, -45, 13, 119, -120, -39, -30, -59, 87, 26, -24, -44, 47, -12, 9, -49, -51, 5, 97, 86, 111, 42, 103, -34, -59, 95, 32, 11, 80, 126, -24, -40, -36, 125, 19, 30, 107, 25, 59, -121, 107, -62, -82, -69, -4, 93, -49, 100, -49, 52, -17, -99, -99, -76, 108, 34, 53, 39, -49, -22, 100, 67, 18, 7, -37, -116, 123, 87, 106, 89, 121, 66, 12, -36, -102, -58, -44, 90, 75, -107, 41, -85, -67, 39, 35, -68, -25, -58, -112, -77, -55, 18, -121, -42, 3, -49, -13, 83, 35, 107, -20, 43, -25, 108, -92, 98, 7, 0, -30, -14, -123, -108, -109, 103, -67, -92, 58, 96, -89, 82, 91, 123, 107, 58, -126, 34, -36, -86, 16, -51, 126, -33, -94, 126, -5, 13, 90, 82, 73, -127, -29, -6, -52, 118, 24, -30, 50, -45, -87, 8, -63, -92, 61, -16, 91, 105, 16, 106, 115, 106, 116, -8, 78, 120, 7, -109, -51, 46, -94, 28, -4, -122, -44, -110, -80, 113, -52, 109, -39, -88, 66, 101, 2, 53, -36, -99, -109, 49, 83, 77, -47, -11, 75, 109};
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
    msg.setTimeStamp(0.096191165012814);
    msg.setSource(19023U);
    msg.setSourceEntity(244U);
    msg.setDestination(12962U);
    msg.setDestinationEntity(20U);
    msg.type = 64U;
    msg.frequency = 4098344731U;
    msg.min_range = 11181U;
    msg.max_range = 12681U;
    msg.bits_per_point = 93U;
    msg.scale_factor = 0.6381990420264518;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6674873278779163;
    tmp_msg_0.beam_height = 0.5059845521768483;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-9, 46, 57, -109, 108, 66, -120, -53, -11, -36, 60, 106, 18, 1, -19, 56, -48, -56, -124, 17, -24, -20, 64, -112, -112, -99, 85, -120, 25, -108, -56, 34, -8, -26, -51, 125, 112, -24, 118, -124, 63, 118};
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
    msg.setTimeStamp(0.839436676232386);
    msg.setSource(15641U);
    msg.setSourceEntity(221U);
    msg.setDestination(24965U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.002201695219977484);
    msg.setSource(47964U);
    msg.setSourceEntity(147U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.28852656179165315);
    msg.setSource(7610U);
    msg.setSourceEntity(168U);
    msg.setDestination(33529U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.5582359375414018);
    msg.setSource(62856U);
    msg.setSourceEntity(68U);
    msg.setDestination(3223U);
    msg.setDestinationEntity(19U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.7883524780849408);
    msg.setSource(56831U);
    msg.setSourceEntity(130U);
    msg.setDestination(52593U);
    msg.setDestinationEntity(193U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.6786552412522732);
    msg.setSource(8967U);
    msg.setSourceEntity(250U);
    msg.setDestination(65346U);
    msg.setDestinationEntity(32U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.7658361902454652);
    msg.setSource(8123U);
    msg.setSourceEntity(71U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(69U);
    msg.value = 0.2358708691021718;
    msg.confidence = 0.5722046103779088;
    msg.opmodes.assign("GAHZVLCLUQBOBJAQHZPQSIQGRNLWBIOZYUGZXCBLXHFYFEJSTJCDPBTYRNZEPBEMTIMUBWYBNVTLKVUZSEVXOTNMPUQAHWNHOGCOKZAOJMKEJRPATSDGPVR");

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
    msg.setTimeStamp(0.0222049019749484);
    msg.setSource(28925U);
    msg.setSourceEntity(73U);
    msg.setDestination(39401U);
    msg.setDestinationEntity(171U);
    msg.value = 0.12633493424172182;
    msg.confidence = 0.018722762144727567;
    msg.opmodes.assign("TMIYZDAAEAZMTJCGLKNVFXYZLDRNIZJESQFGNCSYIRSGOHDTSCZKNBGBFCPYEICGINBUYIFDUVNWTXUALKPWXFVKKOQJUAXUWQLCXQHMXMSPXOVJISKAAHGGJPGXDTBNTZMOQFECFRNNYRPPHQXMHBMJGREVYQZHCLGLZ");

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
    msg.setTimeStamp(0.4644339694083227);
    msg.setSource(4227U);
    msg.setSourceEntity(223U);
    msg.setDestination(38454U);
    msg.setDestinationEntity(129U);
    msg.value = 0.032131782179385615;
    msg.confidence = 0.8123101567977293;
    msg.opmodes.assign("QNUKFVUTTZSXDGCUEQQGELHENPCITMXHVUCDVGLIAHBDOKLFZFXJCYAGOASHHRDFEGOMVPKQJCRBWZOBOPH");

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
    msg.setTimeStamp(0.7299463872660498);
    msg.setSource(49916U);
    msg.setSourceEntity(164U);
    msg.setDestination(16605U);
    msg.setDestinationEntity(208U);
    msg.itow = 4148515763U;
    msg.lat = 0.7176577130201002;
    msg.lon = 0.9562921632639546;
    msg.height_ell = 0.351601598211289;
    msg.height_sea = 0.48473450896821335;
    msg.hacc = 0.3775328180862255;
    msg.vacc = 0.2593173191220196;
    msg.vel_n = 0.4303486889093766;
    msg.vel_e = 0.2919861768176115;
    msg.vel_d = 0.07632774024919597;
    msg.speed = 0.005291671575556323;
    msg.gspeed = 0.025966860105855694;
    msg.heading = 0.052549466182635673;
    msg.sacc = 0.7345258112973356;
    msg.cacc = 0.7498278035184552;

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
    msg.setTimeStamp(0.6420935645727963);
    msg.setSource(40785U);
    msg.setSourceEntity(181U);
    msg.setDestination(8936U);
    msg.setDestinationEntity(161U);
    msg.itow = 2089751854U;
    msg.lat = 0.4413700140547959;
    msg.lon = 0.6628000698810427;
    msg.height_ell = 0.6088304394303288;
    msg.height_sea = 0.5299790869292736;
    msg.hacc = 0.41026775955320594;
    msg.vacc = 0.3183394768289328;
    msg.vel_n = 0.046213594666459246;
    msg.vel_e = 0.5717964896587014;
    msg.vel_d = 0.18689739866842192;
    msg.speed = 0.8691561366116128;
    msg.gspeed = 0.10665376817797134;
    msg.heading = 0.6279862887425256;
    msg.sacc = 0.7459390654672234;
    msg.cacc = 0.9334710626345816;

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
    msg.setTimeStamp(0.9714640793413095);
    msg.setSource(6975U);
    msg.setSourceEntity(109U);
    msg.setDestination(27978U);
    msg.setDestinationEntity(73U);
    msg.itow = 863701695U;
    msg.lat = 0.5994658084817002;
    msg.lon = 0.05233549455912012;
    msg.height_ell = 0.6360591464436541;
    msg.height_sea = 0.7522540684660722;
    msg.hacc = 0.19596750926173645;
    msg.vacc = 0.742185639106355;
    msg.vel_n = 0.4214364069043205;
    msg.vel_e = 0.6901287538564831;
    msg.vel_d = 0.2537159458345113;
    msg.speed = 0.7628562314614281;
    msg.gspeed = 0.9336901014225789;
    msg.heading = 0.28382660186314024;
    msg.sacc = 0.6428035734970741;
    msg.cacc = 0.4885959367148792;

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
    msg.setTimeStamp(0.27275444054757614);
    msg.setSource(14612U);
    msg.setSourceEntity(44U);
    msg.setDestination(50007U);
    msg.setDestinationEntity(146U);
    msg.id = 3U;
    msg.value = 0.5299860219305687;

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
    msg.setTimeStamp(0.1369601499525811);
    msg.setSource(7721U);
    msg.setSourceEntity(114U);
    msg.setDestination(63141U);
    msg.setDestinationEntity(18U);
    msg.id = 135U;
    msg.value = 0.3495085568069791;

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
    msg.setTimeStamp(0.3046453054836147);
    msg.setSource(24288U);
    msg.setSourceEntity(216U);
    msg.setDestination(7281U);
    msg.setDestinationEntity(127U);
    msg.id = 189U;
    msg.value = 0.6752915954747678;

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
    msg.setTimeStamp(0.8454531758017828);
    msg.setSource(10173U);
    msg.setSourceEntity(208U);
    msg.setDestination(33780U);
    msg.setDestinationEntity(225U);
    msg.x = 0.940584069755974;
    msg.y = 0.32514166740697925;
    msg.z = 0.3897059278772149;
    msg.phi = 0.3571478380401588;
    msg.theta = 0.4528995697627719;
    msg.psi = 0.2933016893279806;

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
    msg.setTimeStamp(0.2643700201697312);
    msg.setSource(51146U);
    msg.setSourceEntity(176U);
    msg.setDestination(5610U);
    msg.setDestinationEntity(82U);
    msg.x = 0.05774708291251118;
    msg.y = 0.4779558918250485;
    msg.z = 0.7144452263737556;
    msg.phi = 0.8038499964015715;
    msg.theta = 0.839434463888953;
    msg.psi = 0.7176491980547685;

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
    msg.setTimeStamp(0.11020804047547839);
    msg.setSource(28514U);
    msg.setSourceEntity(143U);
    msg.setDestination(63712U);
    msg.setDestinationEntity(66U);
    msg.x = 0.3715430430838985;
    msg.y = 0.9942845269578202;
    msg.z = 0.4626424616496887;
    msg.phi = 0.608476280491085;
    msg.theta = 0.8395533518056164;
    msg.psi = 0.8872912697438601;

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
    msg.setTimeStamp(0.12689237625705452);
    msg.setSource(52881U);
    msg.setSourceEntity(172U);
    msg.setDestination(40371U);
    msg.setDestinationEntity(189U);
    msg.beam_width = 0.3218969863219334;
    msg.beam_height = 0.7991564592541961;

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
    msg.setTimeStamp(0.9456412187036327);
    msg.setSource(34325U);
    msg.setSourceEntity(91U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(98U);
    msg.beam_width = 0.5052812583716608;
    msg.beam_height = 0.565117567268943;

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
    msg.setTimeStamp(0.04335925677203012);
    msg.setSource(53783U);
    msg.setSourceEntity(57U);
    msg.setDestination(23216U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.7909884794962924;
    msg.beam_height = 0.8385760594800243;

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
    msg.setTimeStamp(0.22072289653994703);
    msg.setSource(8182U);
    msg.setSourceEntity(225U);
    msg.setDestination(30156U);
    msg.setDestinationEntity(105U);
    msg.sane = 129U;

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
    msg.setTimeStamp(0.5209801083498351);
    msg.setSource(22083U);
    msg.setSourceEntity(162U);
    msg.setDestination(55427U);
    msg.setDestinationEntity(43U);
    msg.sane = 16U;

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
    msg.setTimeStamp(0.8145457728542694);
    msg.setSource(58640U);
    msg.setSourceEntity(88U);
    msg.setDestination(8095U);
    msg.setDestinationEntity(179U);
    msg.sane = 107U;

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
    msg.setTimeStamp(0.5012314146703443);
    msg.setSource(41650U);
    msg.setSourceEntity(239U);
    msg.setDestination(34143U);
    msg.setDestinationEntity(247U);
    msg.id = 108U;
    msg.zoom = 86U;
    msg.action = 176U;

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
    msg.setTimeStamp(0.8136722799794105);
    msg.setSource(13425U);
    msg.setSourceEntity(84U);
    msg.setDestination(48U);
    msg.setDestinationEntity(128U);
    msg.id = 94U;
    msg.zoom = 77U;
    msg.action = 139U;

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
    msg.setTimeStamp(0.6759701542201282);
    msg.setSource(9243U);
    msg.setSourceEntity(30U);
    msg.setDestination(171U);
    msg.setDestinationEntity(181U);
    msg.id = 70U;
    msg.zoom = 234U;
    msg.action = 73U;

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
    msg.setTimeStamp(0.26851898821811826);
    msg.setSource(37855U);
    msg.setSourceEntity(223U);
    msg.setDestination(18825U);
    msg.setDestinationEntity(87U);
    msg.id = 191U;
    msg.value = 0.5358811303819213;

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
    msg.setTimeStamp(0.5432917387124521);
    msg.setSource(61208U);
    msg.setSourceEntity(146U);
    msg.setDestination(47215U);
    msg.setDestinationEntity(172U);
    msg.id = 179U;
    msg.value = 0.8591010004162997;

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
    msg.setTimeStamp(0.05197184924069298);
    msg.setSource(28195U);
    msg.setSourceEntity(229U);
    msg.setDestination(10026U);
    msg.setDestinationEntity(114U);
    msg.id = 147U;
    msg.value = 0.1256269997627949;

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
    msg.setTimeStamp(0.2565296344698702);
    msg.setSource(4173U);
    msg.setSourceEntity(230U);
    msg.setDestination(60810U);
    msg.setDestinationEntity(239U);
    msg.id = 115U;
    msg.value = 0.6301683855864613;

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
    msg.setTimeStamp(0.3970009373795358);
    msg.setSource(45143U);
    msg.setSourceEntity(81U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(114U);
    msg.id = 254U;
    msg.value = 0.17286833636255317;

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
    msg.setTimeStamp(0.15025165962070242);
    msg.setSource(47278U);
    msg.setSourceEntity(26U);
    msg.setDestination(107U);
    msg.setDestinationEntity(71U);
    msg.id = 100U;
    msg.value = 0.970483916470579;

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
    msg.setTimeStamp(0.16142655370950576);
    msg.setSource(4837U);
    msg.setSourceEntity(117U);
    msg.setDestination(43197U);
    msg.setDestinationEntity(84U);
    msg.id = 69U;
    msg.angle = 0.47375584785565894;

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
    msg.setTimeStamp(0.8630883977925184);
    msg.setSource(49472U);
    msg.setSourceEntity(67U);
    msg.setDestination(19672U);
    msg.setDestinationEntity(94U);
    msg.id = 66U;
    msg.angle = 0.31949360167699226;

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
    msg.setTimeStamp(0.810204778552345);
    msg.setSource(26390U);
    msg.setSourceEntity(16U);
    msg.setDestination(37155U);
    msg.setDestinationEntity(195U);
    msg.id = 160U;
    msg.angle = 0.5475996706756114;

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
    msg.setTimeStamp(0.7980913784900399);
    msg.setSource(14955U);
    msg.setSourceEntity(99U);
    msg.setDestination(12762U);
    msg.setDestinationEntity(238U);
    msg.op = 15U;
    msg.actions.assign("BVSVLYNDHIBTOPHHVZHNWDSCNACSHORGO");

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
    msg.setTimeStamp(0.22240918079302074);
    msg.setSource(38494U);
    msg.setSourceEntity(90U);
    msg.setDestination(13119U);
    msg.setDestinationEntity(109U);
    msg.op = 109U;
    msg.actions.assign("QSVCANJCWLINFRDKPVVQNLMFOWSTUWAVFAOMTHWUFOUSMBPLAIXFXQNAED");

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
    msg.setTimeStamp(0.9464944501136194);
    msg.setSource(49657U);
    msg.setSourceEntity(207U);
    msg.setDestination(49045U);
    msg.setDestinationEntity(29U);
    msg.op = 67U;
    msg.actions.assign("VXJMHETTZPIFXPNGPTDINIBBFDOACKYGSDRLUCKWPVCXPRLJRAGRACCHVIWJFFVXORJONTWQIXWWEOGDEGHVBSUMWLXBCUJELQIQSCHKUUENPELYVXIGBYFRVWBHARKRTQQSYIZVJNTLYEFMAH");

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
    msg.setTimeStamp(0.13344427965039596);
    msg.setSource(21554U);
    msg.setSourceEntity(64U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(197U);
    msg.actions.assign("NPFGYUJKLHZLTXIGQQWEOYUGHCMKTGUZYJZJ");

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
    msg.setTimeStamp(0.6334376703217937);
    msg.setSource(48790U);
    msg.setSourceEntity(235U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(56U);
    msg.actions.assign("GRSSBHVFXOXVPTQVMOEXALWWRPMESSDTROGDXNYRSQFLMMCFEIIURIAOHLATYSPTJCZBCWNOTBQCLOONDOLUXWCRUJPXIQNDVEQKLYUDPPXEDRAIZXSVGCYSPIKKJHHUVJDRNKJGRVKHGDEMRTKNWAFNCQEWHMMJLAKSBVNBUKVBMXJDCTNHUKEIEZKZBZTMPIOHZPFQYHPATSWGHJIUZAJAFMEZLLGJQIBUUYDQLFTZYGOBWGYCFWFVAGZ");

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
    msg.setTimeStamp(0.5253890018705857);
    msg.setSource(52959U);
    msg.setSourceEntity(31U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(1U);
    msg.actions.assign("MXDOXYERCBRPAJBLNKJWHLLNXCHVGHPJRIZBIGWZSEQVVPDDQKRVAJDCKUKZKZQQWQRDBDMVHVUMTCEXEOKTTCUIXGLPSRNMQHD");

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
    msg.setTimeStamp(0.7385430385096933);
    msg.setSource(48509U);
    msg.setSourceEntity(193U);
    msg.setDestination(9976U);
    msg.setDestinationEntity(20U);
    msg.button = 160U;
    msg.value = 14U;

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
    msg.setTimeStamp(0.15514538930452926);
    msg.setSource(64810U);
    msg.setSourceEntity(63U);
    msg.setDestination(12363U);
    msg.setDestinationEntity(143U);
    msg.button = 20U;
    msg.value = 229U;

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
    msg.setTimeStamp(0.36088005893561836);
    msg.setSource(36724U);
    msg.setSourceEntity(0U);
    msg.setDestination(50280U);
    msg.setDestinationEntity(69U);
    msg.button = 13U;
    msg.value = 166U;

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
    msg.setTimeStamp(0.8201890239760431);
    msg.setSource(16202U);
    msg.setSourceEntity(128U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(27U);
    msg.op = 181U;
    msg.text.assign("KPCNECCWCRHYDBAEQVWAFUBZDSDWXDYVPNFMILASCSGKIUCOSNLLNLEVQTFAXRQOEVDSMHAFMOYXIJTPWWGHUXJMPINWIBZQPEHBQKJR");

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
    msg.setTimeStamp(0.6110996589633606);
    msg.setSource(32717U);
    msg.setSourceEntity(110U);
    msg.setDestination(12551U);
    msg.setDestinationEntity(144U);
    msg.op = 16U;
    msg.text.assign("MSEOHKJAJXSGFKZAOPRFNSOLPTDQULEAUOUHNMVBBMJSIWTMGHRJENRJYTKCECQOYBRQBMJCNIQRUCQGCVVLCVNASBKHRYGJMHRIJVKUGPWKWZGQDBYWMPVOSYPAEXFZIDVKOFWZBNDDAIPFWCXTLIIMEHGWTTSCTHWHDYFNZZECOZYXWJLQLZQLX");

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
    msg.setTimeStamp(0.2678735929370958);
    msg.setSource(16907U);
    msg.setSourceEntity(91U);
    msg.setDestination(33960U);
    msg.setDestinationEntity(117U);
    msg.op = 127U;
    msg.text.assign("DWSQYBDDMFQPNTAJOZIQGGMDTXNYPWKSMKTEGOUQKOVZORRZFMNAAEBEZHNVHSWFZYCEVLGRCMTOVAGUN");

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
    msg.setTimeStamp(0.2604307540885765);
    msg.setSource(45621U);
    msg.setSourceEntity(10U);
    msg.setDestination(6425U);
    msg.setDestinationEntity(177U);
    msg.op = 202U;
    msg.time_remain = 0.3608715506647928;
    msg.sched_time = 0.5350267691108944;

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
    msg.setTimeStamp(0.589532165859889);
    msg.setSource(42090U);
    msg.setSourceEntity(217U);
    msg.setDestination(16861U);
    msg.setDestinationEntity(48U);
    msg.op = 83U;
    msg.time_remain = 0.5203986579767913;
    msg.sched_time = 0.4930603530281038;

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
    msg.setTimeStamp(0.7785323610449413);
    msg.setSource(34225U);
    msg.setSourceEntity(177U);
    msg.setDestination(65474U);
    msg.setDestinationEntity(222U);
    msg.op = 211U;
    msg.time_remain = 0.8019859364596775;
    msg.sched_time = 0.6957913058775638;

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
    msg.setTimeStamp(0.906545500287926);
    msg.setSource(4876U);
    msg.setSourceEntity(244U);
    msg.setDestination(50075U);
    msg.setDestinationEntity(217U);
    msg.name.assign("CRDSOTVEFSFAXFND");
    msg.op = 198U;
    msg.sched_time = 0.39268638427487923;

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
    msg.setTimeStamp(0.8233594946223867);
    msg.setSource(32914U);
    msg.setSourceEntity(212U);
    msg.setDestination(25054U);
    msg.setDestinationEntity(219U);
    msg.name.assign("DKVUVMAFBULOERHLAIBWTWKHRDSSVTTJMCGFRTYCYBQSFMFONNXOCTPXYLFZPNJJVLMPQDZQNTZENCEXJUNGKNQJCPURTWWKVAIRBORHJRHHBSEDNJPDUSSZFGWBFWXXKLRNAOEBKHQCZXQZNELGMUHMODKVQTMRVESAPSIQPWOIAWZOBTVXDTCXOYIIYOUKCUMGPJCIQ");
    msg.op = 174U;
    msg.sched_time = 0.1510122194232152;

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
    msg.setTimeStamp(0.28293927363929716);
    msg.setSource(29428U);
    msg.setSourceEntity(241U);
    msg.setDestination(49258U);
    msg.setDestinationEntity(127U);
    msg.name.assign("BPVSTRXTSAQOVPQLHBJPLSUPOZSIJOFWJXWREQUKZYIDMIBJKTXIEGXVBRQNHAUEBIQOZJDGGLHKCPANTGLMNVOZOVCRUBATJEEWDMGUEPSUUGHXBSVCSZYIWRBJWWXMHPQYLADODZZKZORJACKROLYWSJVJHBNFTYYKZQFVEWUMFIBXVTVDNGAARECKQEKMMFFDQ");
    msg.op = 195U;
    msg.sched_time = 0.3492215856025318;

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
    msg.setTimeStamp(0.7468025801170883);
    msg.setSource(11472U);
    msg.setSourceEntity(17U);
    msg.setDestination(46989U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.19178028191777285);
    msg.setSource(51093U);
    msg.setSourceEntity(118U);
    msg.setDestination(58552U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.6387235113483396);
    msg.setSource(62972U);
    msg.setSourceEntity(252U);
    msg.setDestination(17946U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.7374398840906957);
    msg.setSource(28475U);
    msg.setSourceEntity(40U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(140U);
    msg.name.assign("AAGDWOTLROXJQUWEHTEPBMHXULDUWYNYZKTQMSTDCWMLAQWRJRTSMOESGQOICWZLFEGIXDRIQONQPXKNHPVBNRFDYJFFCMTAWLGJXUGHPYIWSUOJALSTXGURJLAK");
    msg.state = 226U;

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
    msg.setTimeStamp(0.03723754551093239);
    msg.setSource(8705U);
    msg.setSourceEntity(171U);
    msg.setDestination(29732U);
    msg.setDestinationEntity(148U);
    msg.name.assign("NGRBKWXDIYMTZEGQDKHNICCRQFJMIKOOPEUNLLQAFRGOUEDNUJDECLYQYLBHRSUQWRLWLHAFSAVLQUZBNSSUAUWWBYMZEZFRXJAWKHJHZNPZBSRTOTCVPGVSMFWXBVUTXWJYHHFTZKDHFMPIHXRLYFCBGGYIGKJAGGITFFMGCZBANPECSUMRODDYPTXEIBEQ");
    msg.state = 178U;

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
    msg.setTimeStamp(0.016984616496634963);
    msg.setSource(15217U);
    msg.setSourceEntity(20U);
    msg.setDestination(34458U);
    msg.setDestinationEntity(76U);
    msg.name.assign("LKOVDCWJWCQVYKFPICGXWEVIAGBDKDXNKIPRBMQULQQUJTVIOSGYLQYXMJFKRTEHUNXJSBMPPGDCHNZPSGFQZLTAGYXCXLFHWZEVLXYDLQJMVJDYQIYTUQOPBATDKINFUACSHGSODFNOVETLNRGFZMMZOHWONEYEMJUHRKOISWBDJAYEXGITRKFMBWPWIFBTPMAZZAWYOTZOAHCZGDCBWHRVJRBESLN");
    msg.state = 251U;

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
    msg.setTimeStamp(0.771580900248697);
    msg.setSource(47638U);
    msg.setSourceEntity(15U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(247U);
    msg.name.assign("XTLJCRNAVYRJOUFXIKGNGTCNTBCKZMRTKHNBKNKEPLIACMTYWQLYJPFXETLJRPDXHLVTWTPUPQIRWHYDOWAZQL");
    msg.value = 14U;

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
    msg.setTimeStamp(0.765763335175758);
    msg.setSource(35491U);
    msg.setSourceEntity(238U);
    msg.setDestination(46353U);
    msg.setDestinationEntity(119U);
    msg.name.assign("NWDPBLYORLNPHDQUQGNEUKCAZCAXXLKSNPZANSBMYQGPYAVXEGOTPKXEBSJGZHINGMTFOMUNBNWWBGDOBUMROZVRRTUQFBZIBIVKDEDKFIAYOYHSVTXAHNUVLIERJSJWFIQFFGOEBMXSLSAEYZHMEHJLCCXPDCQCEYUGCGORIPMJVZMV");
    msg.value = 77U;

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
    msg.setTimeStamp(0.588110842795837);
    msg.setSource(59953U);
    msg.setSourceEntity(155U);
    msg.setDestination(41552U);
    msg.setDestinationEntity(215U);
    msg.name.assign("JXIVXZNZZGZURLKDCECHUDOBGRIKHBFCETSEKAHIRFBXMQSJJPYTLWCZJKCZLAYKFZTTJVFRNAWPJQJYHWMSGEXCCSQTANXCHFRZITPBYDUHVJPHMWIVLXYBWBUGXMYXXSDAKRONVFPBCGUMDKSZHRLHQMNNSBLRFLYOBSDAIEVQNOAPIVPCDGQZAVUBWKVJWRUPLJUMWOIWYFALOFSOUVNEYANTKYOQOIPUHGMMRETDE");
    msg.value = 129U;

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
    msg.setTimeStamp(0.4176451762764185);
    msg.setSource(21913U);
    msg.setSourceEntity(71U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(78U);
    msg.name.assign("DBYVPEHOXDNUYKTBMGUNVYVCBZZPTXZQSELAXAHLEDDFFNIRQJOJOXGIBUOFYSUVQKWIRZCTCRVLFHSHPPMWRYVGCCZROWRLWBONMENZISXNVUQOYGDXTCFWAJASKKEVFGHHJYKAWKXBLTJGWHAMMPJSPQJTWSPEGOTDQFCWMH");

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
    msg.setTimeStamp(0.9529001111142292);
    msg.setSource(52976U);
    msg.setSourceEntity(216U);
    msg.setDestination(20230U);
    msg.setDestinationEntity(228U);
    msg.name.assign("CNLVBUQNVAWOSSQAGKHDWSQFXLKMPIULAIUASLUBKVYWNXFTQDKHMOQMOOYBSDLTJFWHFCBAOEQUKECAXWGZZHYNWZGMMEEMXKRJLKCTGJYIPRKVNHTBZBJNMZWYJSTVCGVCZXUHJGVXZOIEFQOEEBBKPIRHGTFADXDFRPCJFMYVYVERQTAXMDSIBLPA");

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
    msg.setTimeStamp(0.06452650591077391);
    msg.setSource(2921U);
    msg.setSourceEntity(219U);
    msg.setDestination(17069U);
    msg.setDestinationEntity(136U);
    msg.name.assign("DRHSAEZNDKWGPCVWATCLTUBSSFQIQIACRLIDQFSBRLDEQAHXOFFOMUONRHTKQYGCTLWIYWBTXJGMSECBDFTBOSDRVSNMLWXIEZBMMCWHGRJUXEFUGGKTLEUUURGULPOVAANQCGBMFKYMEYXDXGBLJCVEPHVKZ");

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
    msg.setTimeStamp(0.8023305465228441);
    msg.setSource(28769U);
    msg.setSourceEntity(59U);
    msg.setDestination(5041U);
    msg.setDestinationEntity(13U);
    msg.name.assign("NCWRQVWIRMQMXANRLGFHBUZABCPDJMKTAHYWOVDUGPZSGCJGDXMKIOEWZARDFXQBWBKFUSFOLHYHZQDCDEHRNROTYGYSHVMNWTXITSFDAYETIBTWCJOOSJJRZXOBVGAGXJXGIGXFHPQYPDNESBRLZDMBZFUOYCZQELCELCNINXTM");
    msg.value = 136U;

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
    msg.setTimeStamp(0.9924324738824852);
    msg.setSource(40883U);
    msg.setSourceEntity(113U);
    msg.setDestination(11110U);
    msg.setDestinationEntity(54U);
    msg.name.assign("SBYXSCGYZVUBMQMRHXFEVJYZTCJTDIRWZDKJVJQZMUYKREBMIGVSQKGWZSJLFBVXQRZULDYACPJNQKWPWKDDFVWVHOGLEZUBMNLAONIYLKVSNKGPXFPANHQCUDFQFNWUBRNIFSIHWPHMWPHKBTNSQRXMOFEEYGBLGPRODX");
    msg.value = 242U;

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
    msg.setTimeStamp(0.7847366651557385);
    msg.setSource(42739U);
    msg.setSourceEntity(38U);
    msg.setDestination(48259U);
    msg.setDestinationEntity(214U);
    msg.name.assign("QFGYGBMUCFONXBAXBKLZEYMLTO");
    msg.value = 137U;

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
    msg.setTimeStamp(0.735052694796996);
    msg.setSource(34414U);
    msg.setSourceEntity(43U);
    msg.setDestination(64369U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.6569233510648669;
    msg.lon = 0.015516058602402238;
    msg.height = 0.7695207883880723;
    msg.x = 0.0858475790562121;
    msg.y = 0.29884697061207044;
    msg.z = 0.8657486158957513;
    msg.phi = 0.3567423721003936;
    msg.theta = 0.8733285077086327;
    msg.psi = 0.48437559925035945;
    msg.u = 0.5459244663494276;
    msg.v = 0.39872902014403777;
    msg.w = 0.22689214089695187;
    msg.vx = 0.12049696296024803;
    msg.vy = 0.6874124702833068;
    msg.vz = 0.580258162501537;
    msg.p = 0.532889262653084;
    msg.q = 0.9566917481215812;
    msg.r = 0.21859166112160333;
    msg.depth = 0.07997545376516446;
    msg.alt = 0.5802795778320362;

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
    msg.setTimeStamp(0.5822622566343191);
    msg.setSource(24631U);
    msg.setSourceEntity(109U);
    msg.setDestination(22872U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.9340531709974852;
    msg.lon = 0.8838757713889318;
    msg.height = 0.3900881693538035;
    msg.x = 0.5230926277272737;
    msg.y = 0.20050483044797074;
    msg.z = 0.5840016827510004;
    msg.phi = 0.3172216144067328;
    msg.theta = 0.28332571505762527;
    msg.psi = 0.09163804689756838;
    msg.u = 0.304063171814534;
    msg.v = 0.8559573757144622;
    msg.w = 0.4105038837638506;
    msg.vx = 0.3940258922364651;
    msg.vy = 0.053146813298951545;
    msg.vz = 0.18230627119720821;
    msg.p = 0.31215889090794813;
    msg.q = 0.23233689932796564;
    msg.r = 0.37260240878412554;
    msg.depth = 0.9426768344566404;
    msg.alt = 0.2527245771562039;

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
    msg.setTimeStamp(0.23451452605108514);
    msg.setSource(21610U);
    msg.setSourceEntity(91U);
    msg.setDestination(15745U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.2855102022817434;
    msg.lon = 0.2750941061502705;
    msg.height = 0.9258430453090823;
    msg.x = 0.003079510657956308;
    msg.y = 0.8923175416608029;
    msg.z = 0.2527467621258308;
    msg.phi = 0.8402281023986252;
    msg.theta = 0.04927245098703903;
    msg.psi = 0.5744869640018768;
    msg.u = 0.8085531316271761;
    msg.v = 0.8521071853894935;
    msg.w = 0.34441422292316015;
    msg.vx = 0.6701532693781393;
    msg.vy = 0.4617315294229618;
    msg.vz = 0.5379262753791324;
    msg.p = 0.49850847905342066;
    msg.q = 0.3823972297106323;
    msg.r = 0.3795058181210963;
    msg.depth = 0.7404297636199368;
    msg.alt = 0.5794315598800989;

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
    msg.setTimeStamp(0.02447681095426113);
    msg.setSource(61508U);
    msg.setSourceEntity(160U);
    msg.setDestination(32901U);
    msg.setDestinationEntity(234U);
    msg.x = 0.22118235466876845;
    msg.y = 0.5855807640535865;
    msg.z = 0.7057313361201507;

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
    msg.setTimeStamp(0.4524771430004437);
    msg.setSource(3101U);
    msg.setSourceEntity(251U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(36U);
    msg.x = 0.27015680851833024;
    msg.y = 0.3797689503501823;
    msg.z = 0.11657237873522053;

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
    msg.setTimeStamp(0.7184004716105094);
    msg.setSource(4174U);
    msg.setSourceEntity(218U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(37U);
    msg.x = 0.10924195951970239;
    msg.y = 0.2853562296145854;
    msg.z = 0.19295669042896635;

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
    msg.setTimeStamp(0.629015167807001);
    msg.setSource(2925U);
    msg.setSourceEntity(137U);
    msg.setDestination(48073U);
    msg.setDestinationEntity(124U);
    msg.value = 0.29570508228148684;

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
    msg.setTimeStamp(0.09463228324162842);
    msg.setSource(6540U);
    msg.setSourceEntity(245U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(141U);
    msg.value = 0.4949229577985045;

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
    msg.setTimeStamp(0.475470221405639);
    msg.setSource(58190U);
    msg.setSourceEntity(186U);
    msg.setDestination(60410U);
    msg.setDestinationEntity(68U);
    msg.value = 0.24284759326115557;

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
    msg.setTimeStamp(0.551730099650055);
    msg.setSource(51451U);
    msg.setSourceEntity(207U);
    msg.setDestination(17770U);
    msg.setDestinationEntity(40U);
    msg.value = 0.020760335863818646;

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
    msg.setTimeStamp(0.47277104373748047);
    msg.setSource(55120U);
    msg.setSourceEntity(139U);
    msg.setDestination(30355U);
    msg.setDestinationEntity(204U);
    msg.value = 0.06907883216279564;

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
    msg.setTimeStamp(0.6031411264878601);
    msg.setSource(201U);
    msg.setSourceEntity(82U);
    msg.setDestination(7172U);
    msg.setDestinationEntity(28U);
    msg.value = 0.602998172189169;

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
    msg.setTimeStamp(0.35829657126085357);
    msg.setSource(12350U);
    msg.setSourceEntity(89U);
    msg.setDestination(35424U);
    msg.setDestinationEntity(123U);
    msg.x = 0.4000329961001996;
    msg.y = 0.8244689312159781;
    msg.z = 0.13044724758935633;
    msg.phi = 0.5305473864011429;
    msg.theta = 0.21980948991873928;
    msg.psi = 0.784542118346748;
    msg.p = 0.3706188884752838;
    msg.q = 0.2683425483205776;
    msg.r = 0.8362885423374992;
    msg.u = 0.24942247309672372;
    msg.v = 0.7065541272874839;
    msg.w = 0.7708683791014069;
    msg.bias_psi = 0.5447653193664905;
    msg.bias_r = 0.12828094840425752;

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
    msg.setTimeStamp(0.8460220590816994);
    msg.setSource(8885U);
    msg.setSourceEntity(13U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(8U);
    msg.x = 0.5692607108484168;
    msg.y = 0.9716554245370234;
    msg.z = 0.29546367737326695;
    msg.phi = 0.4251200081775297;
    msg.theta = 0.19750346095522986;
    msg.psi = 0.33178844698519006;
    msg.p = 0.06417002079600376;
    msg.q = 0.8586777865534438;
    msg.r = 0.7488908017501358;
    msg.u = 0.4973926024005749;
    msg.v = 0.19930965068696427;
    msg.w = 0.3248472359369319;
    msg.bias_psi = 0.666940988630323;
    msg.bias_r = 0.8528107017787546;

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
    msg.setTimeStamp(0.3532128566751247);
    msg.setSource(42271U);
    msg.setSourceEntity(223U);
    msg.setDestination(5004U);
    msg.setDestinationEntity(81U);
    msg.x = 0.565949162228037;
    msg.y = 0.6881993131050317;
    msg.z = 0.43724183770073044;
    msg.phi = 0.26512193962934805;
    msg.theta = 0.67032359509881;
    msg.psi = 0.14617129971901366;
    msg.p = 0.23415018406091348;
    msg.q = 0.06762569478729641;
    msg.r = 0.5714790573312581;
    msg.u = 0.9626243820283367;
    msg.v = 0.13685130454419847;
    msg.w = 0.9955293029950452;
    msg.bias_psi = 0.5150520113670665;
    msg.bias_r = 0.7856595717692347;

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
    msg.setTimeStamp(0.366046756086172);
    msg.setSource(29035U);
    msg.setSourceEntity(154U);
    msg.setDestination(22029U);
    msg.setDestinationEntity(25U);
    msg.bias_psi = 0.5991413299042441;
    msg.bias_r = 0.0760498099110164;
    msg.cog = 0.231394964890825;
    msg.cyaw = 0.8238249564430773;
    msg.lbl_rej_level = 0.6480664632858948;
    msg.gps_rej_level = 0.21910967270848647;
    msg.custom_x = 0.9777856299657123;
    msg.custom_y = 0.8975821174758769;
    msg.custom_z = 0.3635902622094366;

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
    msg.setTimeStamp(0.9925885673593665);
    msg.setSource(33396U);
    msg.setSourceEntity(159U);
    msg.setDestination(62671U);
    msg.setDestinationEntity(77U);
    msg.bias_psi = 0.1047175401643371;
    msg.bias_r = 0.008771480866187842;
    msg.cog = 0.30534594981287344;
    msg.cyaw = 0.5540082401525815;
    msg.lbl_rej_level = 0.38605194602756365;
    msg.gps_rej_level = 0.9638597287960246;
    msg.custom_x = 0.6047994835489184;
    msg.custom_y = 0.13297369810520532;
    msg.custom_z = 0.09298734762757865;

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
    msg.setTimeStamp(0.9610752670353846);
    msg.setSource(63231U);
    msg.setSourceEntity(72U);
    msg.setDestination(33485U);
    msg.setDestinationEntity(207U);
    msg.bias_psi = 0.9006200313804886;
    msg.bias_r = 0.8388339357967223;
    msg.cog = 0.3349905961527987;
    msg.cyaw = 0.5287444551260029;
    msg.lbl_rej_level = 0.856085953660564;
    msg.gps_rej_level = 0.7097158266492674;
    msg.custom_x = 0.21138044774606113;
    msg.custom_y = 0.5783463037046082;
    msg.custom_z = 0.19327230449926958;

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
    msg.setTimeStamp(0.6009517367644336);
    msg.setSource(33606U);
    msg.setSourceEntity(61U);
    msg.setDestination(34908U);
    msg.setDestinationEntity(42U);
    msg.utc_time = 0.5519115410085811;
    msg.reason = 249U;

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
    msg.setTimeStamp(0.28622746399750254);
    msg.setSource(40412U);
    msg.setSourceEntity(130U);
    msg.setDestination(8290U);
    msg.setDestinationEntity(90U);
    msg.utc_time = 0.8224721941477787;
    msg.reason = 127U;

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
    msg.setTimeStamp(0.8030589339945277);
    msg.setSource(5819U);
    msg.setSourceEntity(35U);
    msg.setDestination(58290U);
    msg.setDestinationEntity(253U);
    msg.utc_time = 0.127446873922893;
    msg.reason = 76U;

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
    msg.setTimeStamp(0.25972849211008997);
    msg.setSource(10772U);
    msg.setSourceEntity(235U);
    msg.setDestination(12844U);
    msg.setDestinationEntity(151U);
    msg.id = 180U;
    msg.range = 0.8196028863736163;
    msg.acceptance = 182U;

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
    msg.setTimeStamp(0.45176232969793817);
    msg.setSource(26431U);
    msg.setSourceEntity(47U);
    msg.setDestination(23262U);
    msg.setDestinationEntity(246U);
    msg.id = 146U;
    msg.range = 0.26729943150737134;
    msg.acceptance = 222U;

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
    msg.setTimeStamp(0.7938351880822399);
    msg.setSource(51147U);
    msg.setSourceEntity(161U);
    msg.setDestination(63802U);
    msg.setDestinationEntity(124U);
    msg.id = 235U;
    msg.range = 0.741328589862494;
    msg.acceptance = 1U;

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
    msg.setTimeStamp(0.6697911103643861);
    msg.setSource(36233U);
    msg.setSourceEntity(118U);
    msg.setDestination(2342U);
    msg.setDestinationEntity(195U);
    msg.type = 130U;
    msg.reason = 77U;
    msg.value = 0.17144781385407304;
    msg.timestep = 0.06277002444493884;

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
    msg.setTimeStamp(0.5277613164200776);
    msg.setSource(39610U);
    msg.setSourceEntity(54U);
    msg.setDestination(9829U);
    msg.setDestinationEntity(5U);
    msg.type = 239U;
    msg.reason = 48U;
    msg.value = 0.07371843130793188;
    msg.timestep = 0.7053833760124147;

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
    msg.setTimeStamp(0.6201229228055384);
    msg.setSource(28917U);
    msg.setSourceEntity(179U);
    msg.setDestination(33270U);
    msg.setDestinationEntity(168U);
    msg.type = 137U;
    msg.reason = 140U;
    msg.value = 0.5752910761107686;
    msg.timestep = 0.5909562795549064;

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
    msg.setTimeStamp(0.5404554394762275);
    msg.setSource(5823U);
    msg.setSourceEntity(52U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.2010347282107492);
    msg.setSource(42178U);
    msg.setSourceEntity(226U);
    msg.setDestination(61859U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.23133467942077002);
    msg.setSource(58274U);
    msg.setSourceEntity(145U);
    msg.setDestination(30377U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.25541718825836335);
    msg.setSource(29171U);
    msg.setSourceEntity(74U);
    msg.setDestination(49097U);
    msg.setDestinationEntity(130U);
    msg.beacon.assign("IKJEGOOURCEOVMVYFTYBVVKKKYRTWRSCWXWVRQITGUMVDJNMNPMFZTLFHAAYJHIHUQFUDGFIEGMNRQSEJIEOADPXCZLBSBUZTLWBVZSBKXUTWWQMXQNLCHISAPCPPWAFIEJYRJEGQTWHQPFIKDRBZXKCAXZACDPHVYBNLLQOORWHXMGKOAYZOKBDJPMTJFUGLGNHCJXRLHSSXWDAVBQ");
    msg.x = 0.3689813430392239;
    msg.y = 0.4414424997452866;
    msg.depth = 0.9059438116113466;
    msg.var_x = 0.36746557312873074;
    msg.var_y = 0.5145900199033229;

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
    msg.setTimeStamp(0.8473908040252925);
    msg.setSource(21225U);
    msg.setSourceEntity(0U);
    msg.setDestination(23696U);
    msg.setDestinationEntity(42U);
    msg.beacon.assign("EPZJMTDHQOMLNBVWNLXGQRMZOXWTEIKICDLIQVUGCBLWEHVRKJKQQNTSLWFXAZUPBMKGYRYKISRFWEISGFDFPZOCNAJTPAIPZXRLYJLJHKHPCHICKZNPQIHSSGDUPRENWTKUJFPTSQDBEBWGAMVLTFIABHYYTRDVWR");
    msg.x = 0.19791217269807915;
    msg.y = 0.13147622182484964;
    msg.depth = 0.26053495606049737;
    msg.var_x = 0.10465592049835637;
    msg.var_y = 0.4346902932899519;

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
    msg.setTimeStamp(0.11358459939851062);
    msg.setSource(54219U);
    msg.setSourceEntity(46U);
    msg.setDestination(29544U);
    msg.setDestinationEntity(85U);
    msg.beacon.assign("SNIYMHSLTUTKEGMGCRRXECIRHGDDBILQSJWMZKZCPSOAWTOY");
    msg.x = 0.13477544735666647;
    msg.y = 0.13409525583512805;
    msg.depth = 0.664002668012407;
    msg.var_x = 0.9570410923522353;
    msg.var_y = 0.42007726082953656;

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
    msg.setTimeStamp(0.4503221708091011);
    msg.setSource(27405U);
    msg.setSourceEntity(155U);
    msg.setDestination(12617U);
    msg.setDestinationEntity(104U);
    msg.state = 114U;

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
    msg.setTimeStamp(0.7761007320689796);
    msg.setSource(32477U);
    msg.setSourceEntity(55U);
    msg.setDestination(2626U);
    msg.setDestinationEntity(169U);
    msg.state = 0U;

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
    msg.setTimeStamp(0.20225856740875536);
    msg.setSource(33731U);
    msg.setSourceEntity(68U);
    msg.setDestination(49388U);
    msg.setDestinationEntity(12U);
    msg.state = 13U;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.013582792839843316);
    msg.setSource(40786U);
    msg.setSourceEntity(2U);
    msg.setDestination(49847U);
    msg.setDestinationEntity(14U);
    msg.value = 0.0035620880671161093;

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
    msg.setTimeStamp(0.24066933614420782);
    msg.setSource(49291U);
    msg.setSourceEntity(30U);
    msg.setDestination(62313U);
    msg.setDestinationEntity(147U);
    msg.value = 0.3212841381672372;

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
    msg.setTimeStamp(0.7783287819079203);
    msg.setSource(39259U);
    msg.setSourceEntity(162U);
    msg.setDestination(44637U);
    msg.setDestinationEntity(144U);
    msg.value = 0.9925697641648542;

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
    msg.setTimeStamp(0.7561846897416324);
    msg.setSource(65107U);
    msg.setSourceEntity(239U);
    msg.setDestination(1152U);
    msg.setDestinationEntity(89U);
    msg.value = 0.5728316700532873;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.2445930597390572);
    msg.setSource(61523U);
    msg.setSourceEntity(106U);
    msg.setDestination(55360U);
    msg.setDestinationEntity(22U);
    msg.value = 0.4778035041684753;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.253323637105364);
    msg.setSource(5317U);
    msg.setSourceEntity(125U);
    msg.setDestination(3322U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4747216719956474;
    msg.z_units = 37U;

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
    msg.setTimeStamp(0.4645837661580329);
    msg.setSource(47798U);
    msg.setSourceEntity(107U);
    msg.setDestination(63480U);
    msg.setDestinationEntity(194U);
    msg.value = 0.05764158038103562;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.7970374012350804);
    msg.setSource(21960U);
    msg.setSourceEntity(111U);
    msg.setDestination(31559U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8358357972562606;
    msg.speed_units = 190U;

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
    msg.setTimeStamp(0.2260041913523858);
    msg.setSource(32446U);
    msg.setSourceEntity(38U);
    msg.setDestination(53811U);
    msg.setDestinationEntity(238U);
    msg.value = 0.020537510044674523;
    msg.speed_units = 104U;

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
    msg.setTimeStamp(0.3817577921701616);
    msg.setSource(61827U);
    msg.setSourceEntity(178U);
    msg.setDestination(20442U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5184533304664717;

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
    msg.setTimeStamp(0.7929740444452993);
    msg.setSource(27516U);
    msg.setSourceEntity(207U);
    msg.setDestination(25243U);
    msg.setDestinationEntity(213U);
    msg.value = 0.9291014531296667;

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
    msg.setTimeStamp(0.6005128095267509);
    msg.setSource(43975U);
    msg.setSourceEntity(50U);
    msg.setDestination(37682U);
    msg.setDestinationEntity(104U);
    msg.value = 0.653806250819765;

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
    msg.setTimeStamp(0.0340228562578897);
    msg.setSource(14829U);
    msg.setSourceEntity(4U);
    msg.setDestination(37339U);
    msg.setDestinationEntity(224U);
    msg.value = 0.8298085654885851;

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
    msg.setTimeStamp(0.9521536889326639);
    msg.setSource(22361U);
    msg.setSourceEntity(102U);
    msg.setDestination(36810U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7661768545163473;

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
    msg.setTimeStamp(0.19062776868905573);
    msg.setSource(45071U);
    msg.setSourceEntity(82U);
    msg.setDestination(6708U);
    msg.setDestinationEntity(123U);
    msg.value = 0.9549708484871501;

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
    msg.setTimeStamp(0.5391889153390639);
    msg.setSource(49976U);
    msg.setSourceEntity(104U);
    msg.setDestination(38656U);
    msg.setDestinationEntity(144U);
    msg.value = 0.3277912287577228;

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
    msg.setTimeStamp(0.7327365411208637);
    msg.setSource(20167U);
    msg.setSourceEntity(240U);
    msg.setDestination(52419U);
    msg.setDestinationEntity(164U);
    msg.value = 0.2781093769370566;

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
    msg.setTimeStamp(0.5610550309874063);
    msg.setSource(56345U);
    msg.setSourceEntity(186U);
    msg.setDestination(18522U);
    msg.setDestinationEntity(221U);
    msg.value = 0.4611183583563021;

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
    msg.setTimeStamp(0.4466975938212058);
    msg.setSource(393U);
    msg.setSourceEntity(96U);
    msg.setDestination(21322U);
    msg.setDestinationEntity(134U);
    msg.start_lat = 0.16404701305348324;
    msg.start_lon = 0.9467537392304836;
    msg.start_z = 0.9589870963048375;
    msg.start_z_units = 180U;
    msg.end_lat = 0.8639735024956784;
    msg.end_lon = 0.1434435314551905;
    msg.end_z = 0.7605966224863291;
    msg.end_z_units = 209U;
    msg.speed = 0.9301371819230999;
    msg.speed_units = 22U;
    msg.lradius = 0.6300752284047001;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.07731956545077567);
    msg.setSource(63405U);
    msg.setSourceEntity(235U);
    msg.setDestination(15869U);
    msg.setDestinationEntity(115U);
    msg.start_lat = 0.01385591968976485;
    msg.start_lon = 0.07932185073204034;
    msg.start_z = 0.9929323740103253;
    msg.start_z_units = 17U;
    msg.end_lat = 0.46366824462186373;
    msg.end_lon = 0.2959171045695871;
    msg.end_z = 0.8580168456210963;
    msg.end_z_units = 74U;
    msg.speed = 0.4560925860795614;
    msg.speed_units = 4U;
    msg.lradius = 0.19663451286420608;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.7736396870399752);
    msg.setSource(40269U);
    msg.setSourceEntity(85U);
    msg.setDestination(17927U);
    msg.setDestinationEntity(86U);
    msg.start_lat = 0.979105605593156;
    msg.start_lon = 0.6657137187332137;
    msg.start_z = 0.04569863530409046;
    msg.start_z_units = 250U;
    msg.end_lat = 0.5937059761274907;
    msg.end_lon = 0.5080633494426982;
    msg.end_z = 0.11640292551864206;
    msg.end_z_units = 65U;
    msg.speed = 0.9999590271898744;
    msg.speed_units = 164U;
    msg.lradius = 0.6883476196669553;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.9835526856488147);
    msg.setSource(16258U);
    msg.setSourceEntity(46U);
    msg.setDestination(48730U);
    msg.setDestinationEntity(226U);
    msg.x = 0.28840817581266887;
    msg.y = 0.6898570455984361;
    msg.z = 0.2946494077296351;
    msg.k = 0.9742998392048251;
    msg.m = 0.3263936279147126;
    msg.n = 0.6890451066739234;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.7001064100768178);
    msg.setSource(21493U);
    msg.setSourceEntity(222U);
    msg.setDestination(30877U);
    msg.setDestinationEntity(204U);
    msg.x = 0.8758506916676615;
    msg.y = 0.960403450253513;
    msg.z = 0.015938186568555723;
    msg.k = 0.9464462167389243;
    msg.m = 0.8235287129515025;
    msg.n = 0.8655608741879582;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.9890222934552892);
    msg.setSource(50276U);
    msg.setSourceEntity(224U);
    msg.setDestination(42638U);
    msg.setDestinationEntity(192U);
    msg.x = 0.9700724330964177;
    msg.y = 0.6512810583085705;
    msg.z = 0.6518600409108577;
    msg.k = 0.6803145405966522;
    msg.m = 0.2725489636599737;
    msg.n = 0.7674408739984249;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.30124315061578244);
    msg.setSource(26380U);
    msg.setSourceEntity(41U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(37U);
    msg.value = 0.5155161967115937;

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
    msg.setTimeStamp(0.21565299107273128);
    msg.setSource(55341U);
    msg.setSourceEntity(146U);
    msg.setDestination(14668U);
    msg.setDestinationEntity(156U);
    msg.value = 0.30280817239876867;

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
    msg.setTimeStamp(0.031677621646864385);
    msg.setSource(21220U);
    msg.setSourceEntity(54U);
    msg.setDestination(63540U);
    msg.setDestinationEntity(44U);
    msg.value = 0.34626232905344634;

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
    msg.setTimeStamp(0.9217824448289222);
    msg.setSource(52512U);
    msg.setSourceEntity(155U);
    msg.setDestination(42468U);
    msg.setDestinationEntity(80U);
    msg.u = 0.7664265864055232;
    msg.v = 0.23151806305201283;
    msg.w = 0.21976254464458156;
    msg.p = 0.7028331931904059;
    msg.q = 0.6676215473099211;
    msg.r = 0.3470930348297757;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.4785994963777186);
    msg.setSource(10267U);
    msg.setSourceEntity(95U);
    msg.setDestination(21716U);
    msg.setDestinationEntity(58U);
    msg.u = 0.28653629078168474;
    msg.v = 0.5050761018603331;
    msg.w = 0.15681656039927994;
    msg.p = 0.523097381331927;
    msg.q = 0.9876436586583515;
    msg.r = 0.3830476923371915;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.993710859296942);
    msg.setSource(54813U);
    msg.setSourceEntity(75U);
    msg.setDestination(46776U);
    msg.setDestinationEntity(195U);
    msg.u = 0.6742283552952439;
    msg.v = 0.7764298982059993;
    msg.w = 0.9031904226125431;
    msg.p = 0.4050795681732632;
    msg.q = 0.15552410920555026;
    msg.r = 0.9042225515909362;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.06620707357208044);
    msg.setSource(6455U);
    msg.setSourceEntity(245U);
    msg.setDestination(13922U);
    msg.setDestinationEntity(210U);
    msg.start_lat = 0.9284447966787813;
    msg.start_lon = 0.7554155776429035;
    msg.start_z = 0.6676467127463046;
    msg.start_z_units = 40U;
    msg.end_lat = 0.5280937805145576;
    msg.end_lon = 0.5962627786039303;
    msg.end_z = 0.9140875628238551;
    msg.end_z_units = 83U;
    msg.lradius = 0.6763662344651132;
    msg.flags = 111U;
    msg.x = 0.7760253063300872;
    msg.y = 0.627394972103303;
    msg.z = 0.09479519846307682;
    msg.vx = 0.6406996302816125;
    msg.vy = 0.47697780716671634;
    msg.vz = 0.19951026841884933;
    msg.course_error = 0.5218967760495332;
    msg.eta = 14331U;

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
    msg.setTimeStamp(0.9065695725421555);
    msg.setSource(25004U);
    msg.setSourceEntity(118U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(24U);
    msg.start_lat = 0.6854897073484555;
    msg.start_lon = 0.9099154577437712;
    msg.start_z = 0.652257034552804;
    msg.start_z_units = 32U;
    msg.end_lat = 0.4736783669728597;
    msg.end_lon = 0.11070184970881358;
    msg.end_z = 0.7197565047714085;
    msg.end_z_units = 251U;
    msg.lradius = 0.9649548507143166;
    msg.flags = 9U;
    msg.x = 0.4174525541859917;
    msg.y = 0.5353999166370338;
    msg.z = 0.13398563810242958;
    msg.vx = 0.3277433110016402;
    msg.vy = 0.13263571236221905;
    msg.vz = 0.9386360250771285;
    msg.course_error = 0.9871480165981539;
    msg.eta = 60600U;

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
    msg.setTimeStamp(0.583506859253716);
    msg.setSource(36865U);
    msg.setSourceEntity(249U);
    msg.setDestination(1924U);
    msg.setDestinationEntity(189U);
    msg.start_lat = 0.6635179829870392;
    msg.start_lon = 0.812219744903486;
    msg.start_z = 0.15662493982151937;
    msg.start_z_units = 213U;
    msg.end_lat = 0.29756282021021596;
    msg.end_lon = 0.2110102883341376;
    msg.end_z = 0.42936474136252456;
    msg.end_z_units = 19U;
    msg.lradius = 0.17821499878641622;
    msg.flags = 188U;
    msg.x = 0.44388194561493466;
    msg.y = 0.31777227159646815;
    msg.z = 0.6075003979688183;
    msg.vx = 0.868090307046299;
    msg.vy = 0.28180222601662774;
    msg.vz = 0.5277371083418624;
    msg.course_error = 0.6100417685913904;
    msg.eta = 23127U;

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
    msg.setTimeStamp(0.19560063342207168);
    msg.setSource(20346U);
    msg.setSourceEntity(148U);
    msg.setDestination(21884U);
    msg.setDestinationEntity(99U);
    msg.k = 0.9305417545827855;
    msg.m = 0.7150173102080698;
    msg.n = 0.3330390068051349;

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
    msg.setTimeStamp(0.7341187939214596);
    msg.setSource(34358U);
    msg.setSourceEntity(39U);
    msg.setDestination(833U);
    msg.setDestinationEntity(122U);
    msg.k = 0.9049705959114874;
    msg.m = 0.7438832103375494;
    msg.n = 0.5183996292983108;

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
    msg.setTimeStamp(0.06817467003889977);
    msg.setSource(2542U);
    msg.setSourceEntity(249U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(2U);
    msg.k = 0.8298235607817448;
    msg.m = 0.6731182822251104;
    msg.n = 0.49904249837218806;

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
    msg.setTimeStamp(0.20158434728721164);
    msg.setSource(42199U);
    msg.setSourceEntity(74U);
    msg.setDestination(768U);
    msg.setDestinationEntity(106U);
    msg.p = 0.2653522968442339;
    msg.i = 0.3184241478197546;
    msg.d = 0.3739796581343836;
    msg.a = 0.31275714538335286;

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
    msg.setTimeStamp(0.3631198088343299);
    msg.setSource(26869U);
    msg.setSourceEntity(21U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(187U);
    msg.p = 0.16946761537309207;
    msg.i = 0.19622472073082176;
    msg.d = 0.5005716608114015;
    msg.a = 0.28826290762755924;

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
    msg.setTimeStamp(0.41619026068491227);
    msg.setSource(31666U);
    msg.setSourceEntity(249U);
    msg.setDestination(51184U);
    msg.setDestinationEntity(49U);
    msg.p = 0.9752674846917692;
    msg.i = 0.25861328694850916;
    msg.d = 0.8696248479348608;
    msg.a = 0.3963378302592142;

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
    msg.setTimeStamp(0.7713173421759714);
    msg.setSource(49740U);
    msg.setSourceEntity(143U);
    msg.setDestination(20483U);
    msg.setDestinationEntity(171U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.48488676268033737);
    msg.setSource(23631U);
    msg.setSourceEntity(58U);
    msg.setDestination(38834U);
    msg.setDestinationEntity(108U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.949734962555509);
    msg.setSource(19542U);
    msg.setSourceEntity(84U);
    msg.setDestination(44002U);
    msg.setDestinationEntity(165U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.10140806551480419);
    msg.setSource(35035U);
    msg.setSourceEntity(35U);
    msg.setDestination(16723U);
    msg.setDestinationEntity(138U);
    msg.timeout = 55351U;
    msg.lat = 0.6593036141751387;
    msg.lon = 0.7119194822759656;
    msg.z = 0.8787640293471675;
    msg.z_units = 100U;
    msg.speed = 0.2714588495450988;
    msg.speed_units = 185U;
    msg.roll = 0.050371179636917285;
    msg.pitch = 0.3848490594142877;
    msg.yaw = 0.08995964192708628;
    msg.custom.assign("QGYDMDFORMBRGLQOWLZHTVVWFAVHODMZKQMPTJIDTKSHFQMUPIKZYKOJATVFKCBAQRNYSYXFUXRRVIXWGWRHZWAUTXUHOYQGCKLPKJMRCEMYDOJZKXWMPIOESFAFCPUMHYBNIUZWHNNEJFBNELBSGQDXFQAEJTCVN");

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
    msg.setTimeStamp(0.748372832296366);
    msg.setSource(4261U);
    msg.setSourceEntity(179U);
    msg.setDestination(41345U);
    msg.setDestinationEntity(21U);
    msg.timeout = 14587U;
    msg.lat = 0.07138338605441519;
    msg.lon = 0.26771534879759973;
    msg.z = 0.7752917325657861;
    msg.z_units = 6U;
    msg.speed = 0.8049104017619374;
    msg.speed_units = 233U;
    msg.roll = 0.13392128418938531;
    msg.pitch = 0.40252108675016685;
    msg.yaw = 0.41285586314821243;
    msg.custom.assign("CVWCYBZJITHCNTQKBENFXDQDNOOQJQLXFSWGTFULBZBZDVGEDIIUTTFLKKPEJNAECPGDUOWDHEMEGBUAIVHYBRRIUHMYV");

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
    msg.setTimeStamp(0.3788997886076976);
    msg.setSource(49109U);
    msg.setSourceEntity(199U);
    msg.setDestination(21687U);
    msg.setDestinationEntity(82U);
    msg.timeout = 7821U;
    msg.lat = 0.22291351762784584;
    msg.lon = 0.19909165927730776;
    msg.z = 0.8499303552750218;
    msg.z_units = 95U;
    msg.speed = 0.7281106664531177;
    msg.speed_units = 67U;
    msg.roll = 0.504387380140507;
    msg.pitch = 0.9906335034862117;
    msg.yaw = 0.7695195253081516;
    msg.custom.assign("FGBOHTCPVFLCXJWAMUYSINJHZULXEFRTLNZKIFXAWDCYNVIUHMGKEFDCSUEIPPTFDFHSHNKMXBTVCHQXMCKISCUQKJODGPRDTWRYASNHWLYPRJLXOYHCKRXJEEJYGORDWVSOTJNVEJLQWZYMUEGAABZPWVLPZBDMMNVOJASQYHRDBVMQPBWGRUBONZZILUROB");

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
    msg.setTimeStamp(0.3419154317459999);
    msg.setSource(48029U);
    msg.setSourceEntity(26U);
    msg.setDestination(37491U);
    msg.setDestinationEntity(17U);
    msg.timeout = 16067U;
    msg.lat = 0.628878980901772;
    msg.lon = 0.13945772760393826;
    msg.z = 0.4098059319152234;
    msg.z_units = 31U;
    msg.speed = 0.9618732521013389;
    msg.speed_units = 241U;
    msg.duration = 32973U;
    msg.radius = 0.9380315581600335;
    msg.flags = 52U;
    msg.custom.assign("APFPDDNNWGMYKOMRBNKDOMUXVRRDATZCKQ");

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
    msg.setTimeStamp(0.3194908674809551);
    msg.setSource(36638U);
    msg.setSourceEntity(157U);
    msg.setDestination(56630U);
    msg.setDestinationEntity(72U);
    msg.timeout = 13828U;
    msg.lat = 0.29586571358774694;
    msg.lon = 0.23215901187147792;
    msg.z = 0.3812707192593766;
    msg.z_units = 248U;
    msg.speed = 0.1581034533439477;
    msg.speed_units = 129U;
    msg.duration = 9959U;
    msg.radius = 0.7088663359799017;
    msg.flags = 31U;
    msg.custom.assign("IYHUXTVXDXVIUKZJOBFNPXFPISQOSGVAJMJLECKAKJOHIPZLHEMZUONBCRIKWRUEDPAUMRXTGJHEZFNMMLIZDERTHYUAAWKBDLWGPIXTQOYSHCKQYTASUILTDDGPCYCFXTZYNWHOPSTHAOHYJVJBVOB");

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
    msg.setTimeStamp(0.1805679334642195);
    msg.setSource(26274U);
    msg.setSourceEntity(158U);
    msg.setDestination(54476U);
    msg.setDestinationEntity(85U);
    msg.timeout = 58774U;
    msg.lat = 0.07158070626289781;
    msg.lon = 0.10584135323560029;
    msg.z = 0.23599449525988103;
    msg.z_units = 161U;
    msg.speed = 0.66253067701278;
    msg.speed_units = 76U;
    msg.duration = 45653U;
    msg.radius = 0.30770833130688546;
    msg.flags = 23U;
    msg.custom.assign("EWNLBNSTOFKKACIRNDWTOYKZFWHGLIJAQUJATS");

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
    msg.setTimeStamp(0.010916367628436174);
    msg.setSource(45192U);
    msg.setSourceEntity(236U);
    msg.setDestination(42669U);
    msg.setDestinationEntity(55U);
    msg.custom.assign("OETWHVKYJLJAMGNZVT");

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
    msg.setTimeStamp(0.3007604317977769);
    msg.setSource(47801U);
    msg.setSourceEntity(152U);
    msg.setDestination(18114U);
    msg.setDestinationEntity(171U);
    msg.custom.assign("XHYZWLKOMCXDNRWPAMYDKIQGJEFGKOSDAJTKIJORLUAWAEYFNERGZHZSM");

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
    msg.setTimeStamp(0.7756790125506537);
    msg.setSource(40352U);
    msg.setSourceEntity(150U);
    msg.setDestination(2910U);
    msg.setDestinationEntity(27U);
    msg.custom.assign("QVFFAATBCDOPLMZLTHRWYKYUJXSA");

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
    msg.setTimeStamp(0.7914412686430126);
    msg.setSource(10615U);
    msg.setSourceEntity(57U);
    msg.setDestination(61806U);
    msg.setDestinationEntity(121U);
    msg.timeout = 59684U;
    msg.lat = 0.20033695167067966;
    msg.lon = 0.5183528383401824;
    msg.z = 0.008930023348851734;
    msg.z_units = 105U;
    msg.duration = 58251U;
    msg.speed = 0.2536255428362;
    msg.speed_units = 115U;
    msg.type = 192U;
    msg.radius = 0.7620438130749725;
    msg.length = 0.6761492590764443;
    msg.bearing = 0.08315490605574094;
    msg.direction = 251U;
    msg.custom.assign("UCGQZMYSFUCPIMZTJRXBBRNCDGBATTIMZMERXYDVZOVLAVYZEEEXBOBPSZZNLHOKLDGGZODNWQHXHEVFLOBFRCPRWXJEFLRIUNEQIGKYNJRWHRCESNVFSXHYSCUDWKHDTHQTDFFQJNJMBVVTIPQBWOLPRCITJXANKISNKWMHMAGDRMCULHOPU");

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
    msg.setTimeStamp(0.7505944562185777);
    msg.setSource(65340U);
    msg.setSourceEntity(50U);
    msg.setDestination(19253U);
    msg.setDestinationEntity(189U);
    msg.timeout = 14952U;
    msg.lat = 0.8457529506522623;
    msg.lon = 0.6674937335910205;
    msg.z = 0.8626379487601996;
    msg.z_units = 248U;
    msg.duration = 47948U;
    msg.speed = 0.04493891954436613;
    msg.speed_units = 81U;
    msg.type = 172U;
    msg.radius = 0.1842521207574469;
    msg.length = 0.1587119679287592;
    msg.bearing = 0.29796907608630374;
    msg.direction = 95U;
    msg.custom.assign("KQLAPJTETDGKPKJFFGSDVCHAPYHFMWCDICWLXKSBARYQYHDSEDIXTCYTYMLRJACWZIIXUONFUKWNKRNQERNXDFCVGJTMFPDMWBQNJLJLHMSVMEEFUBNQVTSZWOEXRRIUZSCLNDPMRGSVJWPMKZDONBBUAZUREVCGLOQVPYEJOZAIHRBNXUFXKWAGLJYTWVCXFEGGESBJHAVOQSHZIUQITYXBTWLHOPZKPVHKQQCUSIM");

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
    msg.setTimeStamp(0.3490837832892941);
    msg.setSource(34742U);
    msg.setSourceEntity(62U);
    msg.setDestination(56230U);
    msg.setDestinationEntity(113U);
    msg.timeout = 42396U;
    msg.lat = 0.8261182940308388;
    msg.lon = 0.31307278928201543;
    msg.z = 0.3116976294442657;
    msg.z_units = 100U;
    msg.duration = 14713U;
    msg.speed = 0.9614824019206202;
    msg.speed_units = 104U;
    msg.type = 193U;
    msg.radius = 0.35482586327960397;
    msg.length = 0.7267384461125793;
    msg.bearing = 0.9385714622424112;
    msg.direction = 68U;
    msg.custom.assign("FGKDAVRCAISSMKBVJMIBFXOPGRQFEEOZPOFRHRKE");

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
    msg.setTimeStamp(0.8575416959505254);
    msg.setSource(19397U);
    msg.setSourceEntity(247U);
    msg.setDestination(20703U);
    msg.setDestinationEntity(122U);
    msg.duration = 28424U;
    msg.custom.assign("OYFJWMWFGRSCOYARBONCLEZIQXKNDHPOVABWRIXIYNWEAWXMVGAHCFIBEDLHNTGHTTKYPMXSPYCUVZGYBPTNUTRJPILWOPFQDNIDOTYOMGHDEGKMPDCTVAUOXSQVIWZTRCPIULKFEUEXNMQWQRQJWOIRZBNCJNAFVNVCKVDIAKJGJUDLBDGHRYOASLHMXCFAYMQZKMJEEHLXZSUVBQPBESCUAZZQYSMJFJXEXFR");

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
    msg.setTimeStamp(0.5779910360421388);
    msg.setSource(53230U);
    msg.setSourceEntity(1U);
    msg.setDestination(53272U);
    msg.setDestinationEntity(54U);
    msg.duration = 26455U;
    msg.custom.assign("FVJAHBLRKBRJXMPKHFSVDKDYVUABRESDZNHPDGSZSYTVPGJHBVKVJMQWGFFLPTICAQCBBUQXRSEOAGEWOWEZWWVXKKDKQGDDLERMAFTIYOYANTZQHZLJXHDPPGVZWCKINBOBJQUCCNMIYYOZGYUPJILFVGLOSUEILWQXQNQNWTEBSIDTWXUYRCAEJTNCCMAXQNZZJPFXRIESWOYMHMTKYHLLKXGFG");

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
    msg.setTimeStamp(0.5130185364640343);
    msg.setSource(43202U);
    msg.setSourceEntity(53U);
    msg.setDestination(51019U);
    msg.setDestinationEntity(143U);
    msg.duration = 53652U;
    msg.custom.assign("TYQOZRROLHMSSBBFHNMLBUCZOQOBFKIPOYDVDJREEDXYYBOWTGLXJWXICTCWAPVAKGAKOQNDPPXEXPTHKAFLDGNVDCKLHQQJAICNWGGHEJU");

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
    msg.setTimeStamp(0.2020428169981866);
    msg.setSource(15283U);
    msg.setSourceEntity(159U);
    msg.setDestination(2609U);
    msg.setDestinationEntity(175U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.11989332972474365;
    msg.control.set(tmp_msg_0);
    msg.duration = 2367U;
    msg.custom.assign("EQJLPVYEOTSOZBYSBVIRRIDSTWOLCAIDFMCGYZWEKKQGWCZHKFTUXUBBQGRBGDSQGYSDGMOOKDNXUWESYGLRZMHMZFQJWOCMWPQYWLYTTKNNZAHJFBUHLDVQBRHOKVGPEIMNFVZUXHEJVNSVRDZADKVQBPTMTXRAUHYJCUXMMAKRSTEUHIWSNQYCFJYIOZKSWFXAXLTRNLANCGUNBIRCEEJXD");

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
    msg.setTimeStamp(0.5662566345794963);
    msg.setSource(16210U);
    msg.setSourceEntity(5U);
    msg.setDestination(43471U);
    msg.setDestinationEntity(29U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.3563840446308749;
    msg.control.set(tmp_msg_0);
    msg.duration = 8307U;
    msg.custom.assign("PMTEUQVDWWYBHBHYIMOPLICGMQJNEFRLGFUWTGHIMVXCHHOXJNMHGLHJZXURCVSKZEBMWHRQROMRKNPTDPYTLIZEVEYDACDAQCCSDKVOCWOSETQBDQZCUVLBUBVESSKNINQSXDCFAPXIXJLGAWAIDNOFKFANRZPYKWBCSLILDZHNMFRSEPGWOKFNGYDBNTHXZVTYXJBTAUYPXOWOUVJJEBJIVLGPZZTQKR");

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
    msg.setTimeStamp(0.47572312666896965);
    msg.setSource(35959U);
    msg.setSourceEntity(2U);
    msg.setDestination(37752U);
    msg.setDestinationEntity(158U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.31037044517329326;
    tmp_msg_0.start_lon = 0.21459906498749737;
    tmp_msg_0.start_z = 0.6824737606947995;
    tmp_msg_0.start_z_units = 4U;
    tmp_msg_0.end_lat = 0.8214514786554787;
    tmp_msg_0.end_lon = 0.026418449094012142;
    tmp_msg_0.end_z = 0.5424214106683659;
    tmp_msg_0.end_z_units = 98U;
    tmp_msg_0.speed = 0.4224910539160145;
    tmp_msg_0.speed_units = 164U;
    tmp_msg_0.lradius = 0.7008411317143722;
    tmp_msg_0.flags = 13U;
    msg.control.set(tmp_msg_0);
    msg.duration = 56634U;
    msg.custom.assign("UWKHMDUXKRWCBRIYZTJXNAHTNJYQIWBKGLKMWPPVQBRWDIOUILJSNQOSEQLCZKEZSSCIYVPPXTDDCKFEGWZMCQDQXDEDAZXMZLGYELPRFYXMHQBBRMSJVMYAJCRAPBVBULAUUIJIFQFJCLYXHCNOSHSORLWODTNGOTWFFUUXPBZHANVFIVANREDESTVCSK");

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
    msg.setTimeStamp(0.19473202397822864);
    msg.setSource(55507U);
    msg.setSourceEntity(79U);
    msg.setDestination(10773U);
    msg.setDestinationEntity(5U);
    msg.timeout = 34940U;
    msg.lat = 0.43920383445251465;
    msg.lon = 0.4566753761604524;
    msg.z = 0.7751774123173457;
    msg.z_units = 252U;
    msg.speed = 0.5805115826894586;
    msg.speed_units = 105U;
    msg.bearing = 0.7476645209223856;
    msg.cross_angle = 0.2664796657447662;
    msg.width = 0.5595583601740213;
    msg.length = 0.33691925259179667;
    msg.hstep = 0.10478291631886893;
    msg.coff = 37U;
    msg.alternation = 66U;
    msg.flags = 52U;
    msg.custom.assign("CMGAIHTDWOPMZIHTQOTTCMIURZPSJLKRNFZKWUESXVXFOGKKMFNWFMEDIHVJREKVUWFQHCVXAIRPYACHIJGCMYLYAWTPXBNURMRSJPXSDRZDNJOLBYWGOOAKEIMXKPVOYUQQENSNQTHBTVNFQUOBIFDZGDGBVGCRLAYTBMMESKGKCXZJDLCVSPSIPUSWLBPAJO");

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
    msg.setTimeStamp(0.10241079312030599);
    msg.setSource(58155U);
    msg.setSourceEntity(152U);
    msg.setDestination(1153U);
    msg.setDestinationEntity(212U);
    msg.timeout = 30769U;
    msg.lat = 0.9776990320859476;
    msg.lon = 0.6924766689002202;
    msg.z = 0.9733205074178541;
    msg.z_units = 100U;
    msg.speed = 0.07164784128025736;
    msg.speed_units = 130U;
    msg.bearing = 0.8759051784910861;
    msg.cross_angle = 0.41899315519784697;
    msg.width = 0.058439210591869295;
    msg.length = 0.2621809770913368;
    msg.hstep = 0.3495567883811592;
    msg.coff = 63U;
    msg.alternation = 214U;
    msg.flags = 121U;
    msg.custom.assign("HESGDFCSOYYYCZFZWIJVZFLNBGFTREKHWEZO");

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
    msg.setTimeStamp(0.5502823541453262);
    msg.setSource(1087U);
    msg.setSourceEntity(221U);
    msg.setDestination(12558U);
    msg.setDestinationEntity(154U);
    msg.timeout = 3661U;
    msg.lat = 0.8906124280443383;
    msg.lon = 0.24290245376556874;
    msg.z = 0.24295275893404167;
    msg.z_units = 123U;
    msg.speed = 0.11586764720516096;
    msg.speed_units = 193U;
    msg.bearing = 0.03827329343929431;
    msg.cross_angle = 0.2283978428779323;
    msg.width = 0.002741199493863533;
    msg.length = 0.43367082503651944;
    msg.hstep = 0.563537085294;
    msg.coff = 143U;
    msg.alternation = 157U;
    msg.flags = 228U;
    msg.custom.assign("XGDTGILMDBJVSFSQTHRJUSJOKBYOMBZULJPNVWJFHVQLULRDHMYPUKDIUSKYOISLEXKVOPRECZQORTCPWYKZVSYLXPYZRZWGITGGULVPXYHLDDFDBLBECCOJJQQPWXGBAXAQTBZYXGEPQMNNIGEKFENXFBXBTKVHWIFNJIUUHANZMCDNRUOSFASYTWHIMIFGHZSAHWRKKF");

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
    msg.setTimeStamp(0.9509762559016887);
    msg.setSource(54242U);
    msg.setSourceEntity(220U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(53U);
    msg.timeout = 10218U;
    msg.lat = 0.00971372588093733;
    msg.lon = 0.9138977885394037;
    msg.z = 0.41715841761606864;
    msg.z_units = 203U;
    msg.speed = 0.925901530694409;
    msg.speed_units = 206U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8448152689445322;
    tmp_msg_0.y = 0.9376700578042789;
    tmp_msg_0.z = 0.8699725592722716;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PGLETQWPABZDMMELECCJKENBVILULBHKESOQITPOYRBIYYWZFSJPQAIIRKSQJLKNCHGAUZZXEHZUSWZXPIZPFHJEILUNMSENGFTUDGWKVIQMQMF");

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
    msg.setTimeStamp(0.9224915431481033);
    msg.setSource(19655U);
    msg.setSourceEntity(59U);
    msg.setDestination(17094U);
    msg.setDestinationEntity(219U);
    msg.timeout = 2935U;
    msg.lat = 0.16830010435362774;
    msg.lon = 0.6882830287488093;
    msg.z = 0.9928379305665233;
    msg.z_units = 156U;
    msg.speed = 0.8547203768725232;
    msg.speed_units = 164U;
    msg.custom.assign("GDLLWRCCJNKZGKKBFOEJHGXMFBAWUKMBVGXHVPJEFMAFCTRPLVUMZWYCCTDBHODIWDKOAPKDKECEJDGXCHVSQMAESZRIFQUGEPHQMYFUSUNRGVIOXHFBDQYSGCNZFAMCUNYYUYEGLXDAPMWYWRSPJETAJRIVRWBIWFAXDVKLQPFPVNYTOHOKIMPJZBZTBZQIXEQOIZAJLQGWLXUJOSVNQEKZZJTTBRRTRSWHLSOLTNQUVLUCYI");

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
    msg.setTimeStamp(0.13898374974531547);
    msg.setSource(64525U);
    msg.setSourceEntity(77U);
    msg.setDestination(29080U);
    msg.setDestinationEntity(228U);
    msg.timeout = 11385U;
    msg.lat = 0.9597478232456429;
    msg.lon = 0.10828004985794892;
    msg.z = 0.8161517139223678;
    msg.z_units = 199U;
    msg.speed = 0.4395793614702943;
    msg.speed_units = 150U;
    msg.custom.assign("LQDRJMQUVOSEUBCJJDCFZGGHZNPMMQKIYSLDCXYEUIORBKEOTDNFGQHREZYYCIITEGLOTIPZMVVKFAHTDZAXGSYBNMIMLIVEUQJNPXPTBKWKJHHRHOFZTBZBQNCXQOFMZOWTRCGGPJNZKIUGXDOUSTWMESZJGIPQKHWCBRVBRLUFOKDSYPSJRBLQXWFAHLSHJPNWNDIWGACBWXMAKQLXSLUSVWYJLANAAEPPKXE");

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
    msg.setTimeStamp(0.8881416576677235);
    msg.setSource(23277U);
    msg.setSourceEntity(97U);
    msg.setDestination(51590U);
    msg.setDestinationEntity(5U);
    msg.x = 0.021611966172720543;
    msg.y = 0.7440411395069202;
    msg.z = 0.4064839478971958;

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
    msg.setTimeStamp(0.08615105981803317);
    msg.setSource(8310U);
    msg.setSourceEntity(163U);
    msg.setDestination(63566U);
    msg.setDestinationEntity(17U);
    msg.x = 0.21829930021267374;
    msg.y = 0.11281955819468925;
    msg.z = 0.06300450957301396;

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
    msg.setTimeStamp(0.8015508234994003);
    msg.setSource(53000U);
    msg.setSourceEntity(121U);
    msg.setDestination(19149U);
    msg.setDestinationEntity(33U);
    msg.x = 0.3611455481747178;
    msg.y = 0.3150289807207832;
    msg.z = 0.057754265814571326;

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
    msg.setTimeStamp(0.006251186042636636);
    msg.setSource(43974U);
    msg.setSourceEntity(74U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(16U);
    msg.timeout = 18339U;
    msg.lat = 0.9809719754263088;
    msg.lon = 0.43079420354467535;
    msg.z = 0.09000218856850095;
    msg.z_units = 174U;
    msg.amplitude = 0.4950464328330697;
    msg.pitch = 0.07202787651336784;
    msg.speed = 0.07670337928099391;
    msg.speed_units = 188U;
    msg.custom.assign("TQPWMWXIJFANXBLGTDUSPYMYNQADRXUXKJPIANOZBBXAEJZULUHBLHPTVJIDULNNDZSLNJTOSWGPH");

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
    msg.setTimeStamp(0.35553540402275496);
    msg.setSource(2413U);
    msg.setSourceEntity(217U);
    msg.setDestination(28929U);
    msg.setDestinationEntity(38U);
    msg.timeout = 9747U;
    msg.lat = 0.14787018538773522;
    msg.lon = 0.6699533272534535;
    msg.z = 0.7631121513600504;
    msg.z_units = 189U;
    msg.amplitude = 0.9204847832289114;
    msg.pitch = 0.11823511860312863;
    msg.speed = 0.7396209205173772;
    msg.speed_units = 203U;
    msg.custom.assign("JUBIZOMEJDOAZFNGRYFHNJUDXZQUZERLDWQKMMKECSZMMRFVGADDIJPIGUFONWVKURDPMJYBQCLSHTLBJOEPZJBGFXHWDTEBAEARNTPYXNVQXPLPFNIFAXKECGSZTHHHCSUOVFQKAMEURSDBLTLXYYIELOPSGJXICKVCVPLSQXDUAVTKZCOWYTGXPAPYZMIVGAWSKFQXQHNORRBJBWMGSOHYBDLTMNC");

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
    msg.setTimeStamp(0.06254600705725355);
    msg.setSource(33779U);
    msg.setSourceEntity(108U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(205U);
    msg.timeout = 15833U;
    msg.lat = 0.3989745124237217;
    msg.lon = 0.0866160662777421;
    msg.z = 0.13262368294084936;
    msg.z_units = 221U;
    msg.amplitude = 0.3874678583393907;
    msg.pitch = 0.908032232815135;
    msg.speed = 0.4458151304428233;
    msg.speed_units = 107U;
    msg.custom.assign("QGCYRFNJGTYWZZVRMLSNVEPQVKFOBNSEFESWTKAWRWJXKENFUKVYWFTBSEALRRPQCQGOISJYZTILIMEOZLJAXHCLBVDZSDOZGBYEFIXWIMUGQNTNAZXZTGLCRDPPTANVKGKDUXURWXZHJAFMMPMESVHMHUIJXIYEGHAVYDKYFNQUQWABUVLXBZXPGDTUPQOOCHYBLHPUSHVDOQJMCHYCBFAXBDMKCWODJADPRPLNQKJJ");

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
    msg.setTimeStamp(0.6809241055084707);
    msg.setSource(38845U);
    msg.setSourceEntity(154U);
    msg.setDestination(21285U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.3821020822825558);
    msg.setSource(24504U);
    msg.setSourceEntity(44U);
    msg.setDestination(51841U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.6873339031620178);
    msg.setSource(5802U);
    msg.setSourceEntity(161U);
    msg.setDestination(37190U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.08548953785054003);
    msg.setSource(28715U);
    msg.setSourceEntity(20U);
    msg.setDestination(37407U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.8109533411301765;
    msg.lon = 0.3646910085829992;
    msg.z = 0.46507459135377227;
    msg.z_units = 199U;
    msg.radius = 0.22821590717446827;
    msg.duration = 201U;
    msg.speed = 0.8328892740614063;
    msg.speed_units = 72U;
    msg.custom.assign("WNMOBFIUKJVFJWXUDJKPTJRPLSNXEODDYLFFFSPSTBXZNXQHLHZZTATWAIIZWUGSMZMZCARQDMTFWQKXSODJJCGBTGERVFXOPJYWDNRMDUDEYRCWHVSQNHMHIAPTYBMOPKAGHEZRPCLVKEBQIMYLOVWGCMMGLWOOIPRRAUTSFCUCHCPAG");

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
    msg.setTimeStamp(0.5632328178289789);
    msg.setSource(54198U);
    msg.setSourceEntity(64U);
    msg.setDestination(63926U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.8285821033189863;
    msg.lon = 0.3113807744703164;
    msg.z = 0.9539054617161216;
    msg.z_units = 28U;
    msg.radius = 0.07535048110031228;
    msg.duration = 47387U;
    msg.speed = 0.961721343580167;
    msg.speed_units = 225U;
    msg.custom.assign("SRUVXMEYQSCNJPIBKLKYPANXQLZTADDENNSUVKBDJQIZYJFUUGQDADRMTPWVVPPPWWCPLWHTHUSMGWKXRCBGFIPABGEEIJYSSPDHSXZCILFODNJQCSCUMTKZDITAINUYJLDCTKMOAFEMTIUJXCOZMX");

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
    msg.setTimeStamp(0.5081099485275138);
    msg.setSource(56560U);
    msg.setSourceEntity(225U);
    msg.setDestination(59767U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.06407119069954526;
    msg.lon = 0.17031479681065909;
    msg.z = 0.8544272195492428;
    msg.z_units = 247U;
    msg.radius = 0.8200907169793138;
    msg.duration = 18418U;
    msg.speed = 0.18461264277641976;
    msg.speed_units = 14U;
    msg.custom.assign("ZFFGPGTLYFTWXIWMORFJDAMTPMOESQKOADPHXCWAEAQBYXIFGGOCRUEBKCBYRPAUXYEAVDOCHTXVKNZSMRDVDFWUTYALZULUROMQHQUEQYPCBRWNQIGDULBNNLVYBCCGLVXNFVMGKIQBHGWBVJ");

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
    msg.setTimeStamp(0.24666454750190736);
    msg.setSource(26235U);
    msg.setSourceEntity(253U);
    msg.setDestination(40142U);
    msg.setDestinationEntity(66U);
    msg.timeout = 59118U;
    msg.flags = 157U;
    msg.lat = 0.07921950471518269;
    msg.lon = 0.9307334127354578;
    msg.start_z = 0.7699626946010827;
    msg.start_z_units = 175U;
    msg.end_z = 0.9433066359147462;
    msg.end_z_units = 28U;
    msg.radius = 0.5968623593203803;
    msg.speed = 0.5254863531657186;
    msg.speed_units = 42U;
    msg.custom.assign("KJMFWGIVCJOXFCIHDDDRMQBZNSXWDOUYTQBOVIIRAGQEZNSEDAYATPZVPBKFLWCXJKJHFUJCFGLBVETCGKJBMLDUEUMEIYWOHSDNRDQTHSHQMMQH");

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
    msg.setTimeStamp(0.19973067523822619);
    msg.setSource(38331U);
    msg.setSourceEntity(182U);
    msg.setDestination(19900U);
    msg.setDestinationEntity(135U);
    msg.timeout = 24701U;
    msg.flags = 44U;
    msg.lat = 0.05523605659535302;
    msg.lon = 0.5854985237083818;
    msg.start_z = 0.1296898785700158;
    msg.start_z_units = 149U;
    msg.end_z = 0.3786957378163316;
    msg.end_z_units = 71U;
    msg.radius = 0.8707550608375904;
    msg.speed = 0.7854739672169119;
    msg.speed_units = 146U;
    msg.custom.assign("YVOAXBVCDHKPBASOKQMWPOVOHXRSLYDJTEZVWDYRNIATVXYIPUZIBOFNRPIJCDBKJMGGDNAOFUOHUQXMNSEOEQPAGYGVKCCWDFTXCBYPNPYFCJMVPEAJKDKVUCQTTJMGJSXQIIMISHPEDDVSAAGZJUNMHLNKM");

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
    msg.setTimeStamp(0.755057451928853);
    msg.setSource(9185U);
    msg.setSourceEntity(231U);
    msg.setDestination(18584U);
    msg.setDestinationEntity(191U);
    msg.timeout = 40892U;
    msg.flags = 67U;
    msg.lat = 0.9006703469903313;
    msg.lon = 0.06121154863495548;
    msg.start_z = 0.5333095168174697;
    msg.start_z_units = 174U;
    msg.end_z = 0.7345742539408545;
    msg.end_z_units = 238U;
    msg.radius = 0.6877659013759678;
    msg.speed = 0.2881381340310092;
    msg.speed_units = 29U;
    msg.custom.assign("PSIBVKFLUBKVRWIJLOSQFHTOULMALPWUCJXVFFHTQSWXAYBCLRHSHRVMQEVMGJVQRRQYBZDVZFJUROXQYKCJKSXLNXRSTMCZKTDYCBLDZERNCKCMUHBDVSKZFOJFEWOPNESWWFTUKAXPEXMGWJIDAAGDGCUNBZGIAYFJOEKNAOXYJTQBTMWHLNRHOYINPYMBPIGUJNEDDZQXGSIXTZWNHVCKHLEPQQPARCPABUVLHEMYI");

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
    msg.setTimeStamp(0.5133691165050079);
    msg.setSource(60448U);
    msg.setSourceEntity(28U);
    msg.setDestination(6520U);
    msg.setDestinationEntity(96U);
    msg.timeout = 34572U;
    msg.lat = 0.19541424398915141;
    msg.lon = 0.5283669685605518;
    msg.z = 0.7318512644629448;
    msg.z_units = 9U;
    msg.speed = 0.7065831198428265;
    msg.speed_units = 193U;
    msg.custom.assign("NOVSRKIIRZQVELWDWXZSDRRGDEJUHIPRKLNQGZCGACFTPZYZTSHCWHERWCRJOOMVQTXVBQBSI");

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
    msg.setTimeStamp(0.8412192372993978);
    msg.setSource(54740U);
    msg.setSourceEntity(36U);
    msg.setDestination(55800U);
    msg.setDestinationEntity(25U);
    msg.timeout = 53166U;
    msg.lat = 0.17848992855352552;
    msg.lon = 0.9914423869332222;
    msg.z = 0.853495334573778;
    msg.z_units = 8U;
    msg.speed = 0.025574535447106417;
    msg.speed_units = 96U;
    msg.custom.assign("KBLWOLBLGQCQLRSJECCPKDYEFYVLETVYKOBCWSXKBOMAODPHYFBWGXHRAQICFUJGMWVOEXKGCDZNFSNRXQIRAUZOBMAKFCWVPIIOAXDEHFPVJQMFZAVJIEHUUFDNMTPDIRPTNMY");

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
    msg.setTimeStamp(0.41601035718757007);
    msg.setSource(8166U);
    msg.setSourceEntity(120U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(15U);
    msg.timeout = 16284U;
    msg.lat = 0.6306022772869593;
    msg.lon = 0.39100943303925584;
    msg.z = 0.03804834820692793;
    msg.z_units = 180U;
    msg.speed = 0.7389793941004248;
    msg.speed_units = 112U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6060076721207645;
    tmp_msg_0.y = 0.8716717571744951;
    tmp_msg_0.z = 0.18924500187431492;
    tmp_msg_0.t = 0.060862505548913814;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GKASZZDNSLHGTLAJPGGWREAPWWXKNGRFJRZMVSYAOCLCLUKJNIRQVTTUOGTEZUCHZXLUUDDBOVTZKOANAINKKDXLKIVIOMMWVSMZPVXMHAEDWEEYOUDHCXHNHLECTGQPNJPOCEMSXJPBWDSHIFPEFZGWQMWPVDWXRCYXQQIO");

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
    msg.setTimeStamp(0.7997380344653039);
    msg.setSource(55362U);
    msg.setSourceEntity(125U);
    msg.setDestination(136U);
    msg.setDestinationEntity(251U);
    msg.x = 0.3495578122281672;
    msg.y = 0.2047939687660132;
    msg.z = 0.4550576764992921;
    msg.t = 0.5216279089637755;

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
    msg.setTimeStamp(0.36916627840626526);
    msg.setSource(23220U);
    msg.setSourceEntity(48U);
    msg.setDestination(64190U);
    msg.setDestinationEntity(111U);
    msg.x = 0.05664633041990319;
    msg.y = 0.7112278615460715;
    msg.z = 0.6568605075948972;
    msg.t = 0.15357222588327857;

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
    msg.setTimeStamp(0.017547227634109208);
    msg.setSource(62188U);
    msg.setSourceEntity(11U);
    msg.setDestination(46377U);
    msg.setDestinationEntity(112U);
    msg.x = 0.9036835661064526;
    msg.y = 0.3321481335728734;
    msg.z = 0.7744257329441452;
    msg.t = 0.8837448475142399;

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
    msg.setTimeStamp(0.2477904959508176);
    msg.setSource(39101U);
    msg.setSourceEntity(59U);
    msg.setDestination(46983U);
    msg.setDestinationEntity(236U);
    msg.timeout = 7283U;
    msg.name.assign("SGCIZAVBJTZCQGKXRWFTOHAMUMAQLPRXVNJJXZPQZSENPRUEPKVOJFTGUMJOYFLJBIECAUYVUKNYBBGPMSEGWNJWZMRLQAISMQQVSKKUNTDRNIDIRXSTYRLBCKHKGAXEIV");
    msg.custom.assign("ENDYUHHFZFVIXCJBXXFSAYNGOMHDPAJJRLZJRXXTZHAQUKQFTPFTVZGOZHCNIQPCBIJGCHBAWWUUYFTKTNKVUOHODXGTWPKCGDQLCCJVWWVLGVTEGRFFBDUZKZRLYLMRMCFSYERIWR");

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
    msg.setTimeStamp(0.5846245513074944);
    msg.setSource(9384U);
    msg.setSourceEntity(190U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(57U);
    msg.timeout = 4597U;
    msg.name.assign("FJJDEPQJJNVCUXYQAVWFURRNWSVSEHEHQABCEMZGTKLPSODTCNGXPLBKBUVEGZGWRXVQROYHIDWLFIRGFMWGCCIYBTBPYAIPNUWHFOGRXSDJZCXBKJFJAQDEQUIHMBSKOYTMAGHVOZLWYPNAPQYTDEXYRULKLFWOEIKDHUIDOYQJYKAZVMZXNHNRGQVSTOZHEFNSFOLCGUXLSLXSBJQHZWTBADSNACTPT");
    msg.custom.assign("GWOJSNBIMXHEIKUKZDGBSEHUYYKMWRVDZIFPHEAOKWFJSZYWCJCVCGPTXHALNVIXXCYTNTNKMHFRDUUPTSBYFMKBIJXKTBPJRNLSILSVCWFWAWCVCPFHLDFOUQGTCJAMXPNILOGNYKFBGTQZXVUWGQGDNRECMHPDEZGAOXPMZOXPIIZDTEYLXITPTLQGJDHQEAEZLKQQOYF");

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
    msg.setTimeStamp(0.4301476743602509);
    msg.setSource(43730U);
    msg.setSourceEntity(7U);
    msg.setDestination(56120U);
    msg.setDestinationEntity(80U);
    msg.timeout = 14725U;
    msg.name.assign("GHHOVWDHFPOPUSWFONDGLHUAIYXNRCNLYCXTQUNUEWYSZWQYCDXVHSOFNXIDOOEDYEQYZVGFXDWFBEQKXDAFZEJAPRBOFJISUERMTWCPUWCQIOMJVGZVTAPKJLIRGADIJKMNQLEHPCAGZVGHMTIBLBUXABSLKJPOSIZNEHAQYYPLVWVFCQXATRRTUKBKTGMKZGMTJVIBRKW");
    msg.custom.assign("NUTHFUGZFFDUYPSUOGYMQBGOVLRFQKAOSTTQVDPCS");

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
    msg.setTimeStamp(0.4575293841611272);
    msg.setSource(23662U);
    msg.setSourceEntity(126U);
    msg.setDestination(49321U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.6195705777562452;
    msg.lon = 0.7419401410143519;
    msg.z = 0.3635694352471053;
    msg.z_units = 111U;
    msg.speed = 0.3104031532456991;
    msg.speed_units = 253U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.022611493454287923;
    tmp_msg_0.y = 0.574346821662993;
    tmp_msg_0.z = 0.36597400078963616;
    tmp_msg_0.t = 0.5741324607908823;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 22346U;
    tmp_msg_1.off_x = 0.5828602535335766;
    tmp_msg_1.off_y = 0.11113559303719145;
    tmp_msg_1.off_z = 0.6633596332770891;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.37385856177772403;
    msg.custom.assign("YAPKCZQJRRINJUMLDOLFLSKCFPYXEIWGFZWGKY");

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
    msg.setTimeStamp(0.30852326397900987);
    msg.setSource(2343U);
    msg.setSourceEntity(67U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.9792167307520395;
    msg.lon = 0.9876099619281761;
    msg.z = 0.7127298913954067;
    msg.z_units = 28U;
    msg.speed = 0.40563490128818336;
    msg.speed_units = 78U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.778675403508327;
    tmp_msg_0.y = 0.5023809850096501;
    tmp_msg_0.z = 0.9739779102363221;
    tmp_msg_0.t = 0.533738296418859;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 42821U;
    tmp_msg_1.off_x = 0.8911852574057277;
    tmp_msg_1.off_y = 0.8543720013857933;
    tmp_msg_1.off_z = 0.943906287448498;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7110137161651474;
    msg.custom.assign("MXSTWQYJPVYGCQVKVGDFYJOCFBXZGUFCCGPPIZUNNBYQRSDXCUNUEFBVWJCROEFBFIHAWFSGIGSAPYHSXMPMLDZOHRHYZAVVALTTRBGVFDEFZXUOSRHENPKLQNJDEOMIKBAZOLAGJDNUQAHPWHHROQMADBBJOJPYNMZJGNTLSOKEIBKELXLTZMCRQKIYIZTIMCSXXIKRQWVVSRWTUDUWYDCZKPVUHWPU");

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
    msg.setTimeStamp(0.35464655237613996);
    msg.setSource(21898U);
    msg.setSourceEntity(246U);
    msg.setDestination(48293U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.6010324688534465;
    msg.lon = 0.6184427154336095;
    msg.z = 0.8006705589275123;
    msg.z_units = 8U;
    msg.speed = 0.766036046177668;
    msg.speed_units = 42U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19128U;
    tmp_msg_0.off_x = 0.7503525301134828;
    tmp_msg_0.off_y = 0.1835445732402875;
    tmp_msg_0.off_z = 0.7330601277540776;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.09422963564444875;
    msg.custom.assign("LWSVYKEAUZFGWHPNLWJRBDYGIHXFXQESFORHLEKOVGYWTBAHAZAVWGVBCOBMUGNXHTMKUNCGMMMLQSPPFKVSGYDGYSCLIDZOBRCTCNIYWFUPKQHBJSVWQSQXKCXGXEZMOAXBYZNJTKPORFAPQJJONHHJUSNHRXALEULNIZKNDFFIIIIMLSTCAXOTLTOWDZIKGKJJTY");

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
    msg.setTimeStamp(0.22607134917828575);
    msg.setSource(27452U);
    msg.setSourceEntity(231U);
    msg.setDestination(20979U);
    msg.setDestinationEntity(17U);
    msg.vid = 34099U;
    msg.off_x = 0.7655362045341096;
    msg.off_y = 0.32116542069278775;
    msg.off_z = 0.11369083728337626;

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
    msg.setTimeStamp(0.45053321774609423);
    msg.setSource(24291U);
    msg.setSourceEntity(150U);
    msg.setDestination(46044U);
    msg.setDestinationEntity(26U);
    msg.vid = 61765U;
    msg.off_x = 0.14797677519402808;
    msg.off_y = 0.13144571814887263;
    msg.off_z = 0.7261048064037724;

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
    msg.setTimeStamp(0.754912053674836);
    msg.setSource(54553U);
    msg.setSourceEntity(85U);
    msg.setDestination(45829U);
    msg.setDestinationEntity(223U);
    msg.vid = 1741U;
    msg.off_x = 0.9186127746226953;
    msg.off_y = 0.9689689098941532;
    msg.off_z = 0.9487669159667586;

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
    msg.setTimeStamp(0.5378561009640572);
    msg.setSource(43409U);
    msg.setSourceEntity(158U);
    msg.setDestination(60410U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.549211362989494);
    msg.setSource(6099U);
    msg.setSourceEntity(134U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.13291703896891427);
    msg.setSource(54958U);
    msg.setSourceEntity(123U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.06327196351374953);
    msg.setSource(32335U);
    msg.setSourceEntity(219U);
    msg.setDestination(40408U);
    msg.setDestinationEntity(75U);
    msg.mid = 58644U;

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
    msg.setTimeStamp(0.2711180306693852);
    msg.setSource(5817U);
    msg.setSourceEntity(20U);
    msg.setDestination(37475U);
    msg.setDestinationEntity(161U);
    msg.mid = 15220U;

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
    msg.setTimeStamp(0.5194598474813853);
    msg.setSource(42597U);
    msg.setSourceEntity(63U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(13U);
    msg.mid = 53456U;

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
    msg.setTimeStamp(0.8741911839320377);
    msg.setSource(59535U);
    msg.setSourceEntity(252U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(218U);
    msg.state = 88U;
    msg.eta = 58812U;
    msg.info.assign("XUEJYZYSKQVPWYYQTPRUASFSZNWHVLXUVKEXJNMIQOEHWHBTNOYBPNAGJLLBRETDSIPDXEIBTBPXXLGDJVTAGKFRRKKCNUWANSDCSUFHTKTIYHCSCBPZCXGZ");

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
    msg.setTimeStamp(0.2666799900078207);
    msg.setSource(49741U);
    msg.setSourceEntity(247U);
    msg.setDestination(33189U);
    msg.setDestinationEntity(107U);
    msg.state = 226U;
    msg.eta = 37993U;
    msg.info.assign("LCJHPFPXMITIMZQOVFNCRLARDJXIAHKZOQMFRQISGJVEOQXMCARDWKQZAHAYUTMGPVKPYTMAPELGSPLIVNPUIBJGWVSXDJDUZZQPTNYWINYVRRAETTI");

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
    msg.setTimeStamp(0.4907709096826486);
    msg.setSource(36449U);
    msg.setSourceEntity(168U);
    msg.setDestination(20080U);
    msg.setDestinationEntity(6U);
    msg.state = 244U;
    msg.eta = 31321U;
    msg.info.assign("JAITDUKIAYBYNQJTHNNZZHMMYJXMUZOTFHGWPICPXNADBVGZHBWPUJVQOFPHZHINHQVXBZJVGWGEQTPPKKACMPSCVSKZYQFCBKIRXSRGKLZTZQNFVIUHLYQWJIEWSIXLTDFFKJLAAEWSUWOUHEUANMBVNMYDKXCITLMTOWZPAIVLXUOCDYQBFLYOUWYGCEOTQEOBURTLRYR");

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
    msg.setTimeStamp(0.2685213562602068);
    msg.setSource(16404U);
    msg.setSourceEntity(18U);
    msg.setDestination(26324U);
    msg.setDestinationEntity(226U);
    msg.system = 48846U;
    msg.duration = 47808U;
    msg.speed = 0.1522190200669402;
    msg.speed_units = 138U;
    msg.x = 0.49447271118879355;
    msg.y = 0.34607199867839344;
    msg.z = 0.9800708265266685;
    msg.z_units = 149U;

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
    msg.setTimeStamp(0.41229077158811833);
    msg.setSource(47751U);
    msg.setSourceEntity(140U);
    msg.setDestination(41877U);
    msg.setDestinationEntity(191U);
    msg.system = 37369U;
    msg.duration = 32348U;
    msg.speed = 0.5885818436868447;
    msg.speed_units = 122U;
    msg.x = 0.7902979226264745;
    msg.y = 0.16489470313271137;
    msg.z = 0.07999794849588149;
    msg.z_units = 1U;

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
    msg.setTimeStamp(0.747275270082204);
    msg.setSource(8439U);
    msg.setSourceEntity(117U);
    msg.setDestination(59236U);
    msg.setDestinationEntity(63U);
    msg.system = 34628U;
    msg.duration = 7327U;
    msg.speed = 0.2841866760738426;
    msg.speed_units = 97U;
    msg.x = 0.1980427778395557;
    msg.y = 0.7413235639920832;
    msg.z = 0.8292163783112948;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.5011684340373352);
    msg.setSource(9983U);
    msg.setSourceEntity(14U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.364617570846672;
    msg.lon = 0.9982698236769533;
    msg.speed = 0.854923746337035;
    msg.speed_units = 0U;
    msg.duration = 30403U;
    msg.sys_a = 1486U;
    msg.sys_b = 27615U;
    msg.move_threshold = 0.5604246767114927;

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
    msg.setTimeStamp(0.6301833406797231);
    msg.setSource(16844U);
    msg.setSourceEntity(240U);
    msg.setDestination(64076U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.43526972226002925;
    msg.lon = 0.29372084330077564;
    msg.speed = 0.8012660534766284;
    msg.speed_units = 125U;
    msg.duration = 37543U;
    msg.sys_a = 63587U;
    msg.sys_b = 26432U;
    msg.move_threshold = 0.9246248337670288;

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
    msg.setTimeStamp(0.49079679654687536);
    msg.setSource(15941U);
    msg.setSourceEntity(85U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.613942777036091;
    msg.lon = 0.07519829919202192;
    msg.speed = 0.21936291399326324;
    msg.speed_units = 250U;
    msg.duration = 22468U;
    msg.sys_a = 58634U;
    msg.sys_b = 27038U;
    msg.move_threshold = 0.8592057379133843;

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
    msg.setTimeStamp(0.8085669096444902);
    msg.setSource(23739U);
    msg.setSourceEntity(21U);
    msg.setDestination(23531U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.4454956152615688;
    msg.lon = 0.9533972541339433;
    msg.z = 0.9031337884734421;
    msg.z_units = 15U;
    msg.speed = 0.5051448138904353;
    msg.speed_units = 134U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5980162076107306;
    tmp_msg_0.lon = 0.2865338178717396;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XGARREACRDFHDYBLYYIFYRPCTVCJXQHZXAWEZEFLUAWWTOGEBOTTNXKZEJGJKIHFITRCLUZRRBMNBJOFMTQQNIPGBGANQYGDBPIVHURHTZDYGJVMYKFECFNMKCQOFMAUMABLPRUGOCVXVUXPKUGVAOYOHIPXELUKDGC");

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
    msg.setTimeStamp(0.4019496568493449);
    msg.setSource(41602U);
    msg.setSourceEntity(221U);
    msg.setDestination(8783U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.4535608505153472;
    msg.lon = 0.4723827247217661;
    msg.z = 0.42525307198125584;
    msg.z_units = 175U;
    msg.speed = 0.19354785370419358;
    msg.speed_units = 226U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.26295523641981755;
    tmp_msg_0.lon = 0.4429137555231344;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BNVXGPGTYLQFTDRZRLYMSIVJOGTZNOBRKUSIVNQJJJUHBEW");

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
    msg.setTimeStamp(0.9131636388055979);
    msg.setSource(20981U);
    msg.setSourceEntity(75U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.9029235796143341;
    msg.lon = 0.523769562692969;
    msg.z = 0.08453764470962721;
    msg.z_units = 4U;
    msg.speed = 0.16103248404457693;
    msg.speed_units = 205U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3039410448180424;
    tmp_msg_0.lon = 0.6339803752209024;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LYNVXHUNRAOQRGXHPDNTEOCMAZTBSBWFFKNXLVCAQORLDOINEDRZQYJPSNRFOYIGJKKOJWIPYDYLKLLYNSBKEXHCXUR");

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
    msg.setTimeStamp(0.6084490645050395);
    msg.setSource(45074U);
    msg.setSourceEntity(81U);
    msg.setDestination(27004U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.17103158257263018;
    msg.lon = 0.6775293844257588;

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
    msg.setTimeStamp(0.5251877186860855);
    msg.setSource(13324U);
    msg.setSourceEntity(97U);
    msg.setDestination(1434U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.5364986892263397;
    msg.lon = 0.12605611102289316;

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
    msg.setTimeStamp(0.6021938971824263);
    msg.setSource(21280U);
    msg.setSourceEntity(132U);
    msg.setDestination(24439U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.8484636338911355;
    msg.lon = 0.8202936542509343;

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
    msg.setTimeStamp(0.13995006254572384);
    msg.setSource(43843U);
    msg.setSourceEntity(118U);
    msg.setDestination(39896U);
    msg.setDestinationEntity(34U);
    msg.timeout = 62829U;
    msg.lat = 0.14052215718998984;
    msg.lon = 0.4345859604220701;
    msg.z = 0.33900156817436733;
    msg.z_units = 85U;
    msg.pitch = 0.4873233459198638;
    msg.amplitude = 0.039239544306591045;
    msg.duration = 47202U;
    msg.speed = 0.6415057453213506;
    msg.speed_units = 107U;
    msg.radius = 0.5151667568367928;
    msg.direction = 248U;
    msg.custom.assign("VUDYQZMZLUFDCBKZCCESWYIFWCPVDEAPBVKMYMTILJYEBH");

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
    msg.setTimeStamp(0.06144713456875317);
    msg.setSource(46105U);
    msg.setSourceEntity(170U);
    msg.setDestination(60073U);
    msg.setDestinationEntity(79U);
    msg.timeout = 28705U;
    msg.lat = 0.2394191981146967;
    msg.lon = 0.29350927539704563;
    msg.z = 0.9252684834542211;
    msg.z_units = 131U;
    msg.pitch = 0.799220965060435;
    msg.amplitude = 0.9315727586351192;
    msg.duration = 33153U;
    msg.speed = 0.023190350598588427;
    msg.speed_units = 202U;
    msg.radius = 0.07810843215249597;
    msg.direction = 143U;
    msg.custom.assign("YYNKZERONPBHESIHSVLHDDCQVIQVFYQOAXBWDHBPBKTUBVKUDZZOCYZMDECLWYSGAYNYMNSVXTSPECAXCJGWASUZQKTMUPWMRPTNNLXRFIRMVVWQJLTPIDKBIZULARMVYBQEQPGHPSJQVHOTCFOYEHZHACCXXWMWOZD");

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
    msg.setTimeStamp(0.7601254733794668);
    msg.setSource(45858U);
    msg.setSourceEntity(180U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(21U);
    msg.timeout = 43624U;
    msg.lat = 0.0694820970297978;
    msg.lon = 0.8452196094692476;
    msg.z = 0.03792771706686848;
    msg.z_units = 175U;
    msg.pitch = 0.594013447844326;
    msg.amplitude = 0.5831643233853687;
    msg.duration = 59986U;
    msg.speed = 0.5634349355912933;
    msg.speed_units = 236U;
    msg.radius = 0.501389199378094;
    msg.direction = 232U;
    msg.custom.assign("VGFBOGLPYSOPUUXQTPXLRIYQSOADYCBPOCHSSLTSTDIGODKFFFMCCATVRQPHSKFIUOSPUEDMONBFASGEBRXN");

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
    msg.setTimeStamp(0.27051518452096424);
    msg.setSource(60584U);
    msg.setSourceEntity(112U);
    msg.setDestination(10270U);
    msg.setDestinationEntity(231U);
    msg.control_src = 32990U;
    msg.control_ent = 46U;
    msg.timeout = 0.05438565292987185;
    msg.loiter_radius = 0.4895573200733847;
    msg.altitude_interval = 0.40931963763184065;

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
    msg.setTimeStamp(0.6618196940263278);
    msg.setSource(45453U);
    msg.setSourceEntity(8U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(172U);
    msg.control_src = 42474U;
    msg.control_ent = 102U;
    msg.timeout = 0.47595842448988224;
    msg.loiter_radius = 0.7619048449467082;
    msg.altitude_interval = 0.3243008139583745;

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
    msg.setTimeStamp(0.19829837705790587);
    msg.setSource(19126U);
    msg.setSourceEntity(37U);
    msg.setDestination(48818U);
    msg.setDestinationEntity(239U);
    msg.control_src = 18205U;
    msg.control_ent = 94U;
    msg.timeout = 0.19493154798041257;
    msg.loiter_radius = 0.5864737241482478;
    msg.altitude_interval = 0.15161476085276693;

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
    msg.setTimeStamp(0.7943250852778756);
    msg.setSource(41844U);
    msg.setSourceEntity(111U);
    msg.setDestination(44727U);
    msg.setDestinationEntity(45U);
    msg.flags = 166U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.013445460212706317;
    tmp_msg_0.speed_units = 182U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2926140210641496;
    tmp_msg_1.z_units = 124U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9813304695474749;
    msg.lon = 0.1689256476014429;
    msg.radius = 0.21302018855102867;

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
    msg.setTimeStamp(0.24313192385254623);
    msg.setSource(10865U);
    msg.setSourceEntity(204U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(221U);
    msg.flags = 204U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7865484551222426;
    tmp_msg_0.speed_units = 217U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6968926251925942;
    tmp_msg_1.z_units = 143U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.39923900625024744;
    msg.lon = 0.7380520621779962;
    msg.radius = 0.6532445865321874;

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
    msg.setTimeStamp(0.0054796707099560304);
    msg.setSource(15102U);
    msg.setSourceEntity(221U);
    msg.setDestination(4391U);
    msg.setDestinationEntity(53U);
    msg.flags = 104U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.028394541916274663;
    tmp_msg_0.speed_units = 28U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.28393858582670306;
    tmp_msg_1.z_units = 131U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8623489897431306;
    msg.lon = 0.7629354046712864;
    msg.radius = 0.4809363377429411;

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
    msg.setTimeStamp(0.5368289050139524);
    msg.setSource(20820U);
    msg.setSourceEntity(148U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(93U);
    msg.control_src = 63761U;
    msg.control_ent = 236U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 60U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4052634383583462;
    tmp_tmp_msg_0_0.speed_units = 46U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.707480031212019;
    tmp_tmp_msg_0_1.z_units = 182U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9695405687822222;
    tmp_msg_0.lon = 0.10538683052246933;
    tmp_msg_0.radius = 0.49364527370564193;
    msg.reference.set(tmp_msg_0);
    msg.state = 248U;
    msg.proximity = 212U;

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
    msg.setTimeStamp(0.3826348013797397);
    msg.setSource(63755U);
    msg.setSourceEntity(10U);
    msg.setDestination(28769U);
    msg.setDestinationEntity(189U);
    msg.control_src = 388U;
    msg.control_ent = 247U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 197U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.884009090752046;
    tmp_tmp_msg_0_0.speed_units = 215U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6156034894380643;
    tmp_tmp_msg_0_1.z_units = 192U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.015067859154059171;
    tmp_msg_0.lon = 0.9385154953987401;
    tmp_msg_0.radius = 0.5822843723268718;
    msg.reference.set(tmp_msg_0);
    msg.state = 118U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.8171873186508382);
    msg.setSource(53228U);
    msg.setSourceEntity(94U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(196U);
    msg.control_src = 13860U;
    msg.control_ent = 145U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 160U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4524453048702911;
    tmp_tmp_msg_0_0.speed_units = 214U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6111301175656307;
    tmp_tmp_msg_0_1.z_units = 112U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.12212916064241841;
    tmp_msg_0.lon = 0.7411179813336366;
    tmp_msg_0.radius = 0.08090361012916525;
    msg.reference.set(tmp_msg_0);
    msg.state = 46U;
    msg.proximity = 75U;

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
    msg.setTimeStamp(0.20156469099254581);
    msg.setSource(17686U);
    msg.setSourceEntity(152U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(190U);
    msg.op_mode = 245U;
    msg.error_count = 200U;
    msg.error_ents.assign("LBZDDCLLTCBHSRKWFKQDNCKR");
    msg.maneuver_type = 3486U;
    msg.maneuver_stime = 0.9259188299476236;
    msg.maneuver_eta = 24983U;
    msg.control_loops = 3302349846U;
    msg.flags = 109U;
    msg.last_error.assign("SAQOCQHAQCUFYDWMEOXYPOUBCJSMLZFFPTVKQMYEQHNAWUMMXKGPPAWIVLQUTIEZKEONKQLAXGVRZCYDQIRVGNXHRAPZMBCIWDSJYXWILVHBMORPGHFGDBJTVUFDATGZRZIZWDZUTOZOJBECPMSLHTBTISKDTFOUKDRGVRNSKTGYJCSXEXRLCLWMGNAJRZJPHLFPQOYDKJWSOWCE");
    msg.last_error_time = 0.17312923748970177;

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
    msg.setTimeStamp(0.693051199037085);
    msg.setSource(59252U);
    msg.setSourceEntity(40U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 108U;
    msg.error_count = 158U;
    msg.error_ents.assign("BAVLTSPIWLKXBIBRNXSRPVMHOZWAOTJTYZDFXZQPVJTGCKJMVWWCXMEYQGNFTRKIYBLSJF");
    msg.maneuver_type = 29459U;
    msg.maneuver_stime = 0.531365381856086;
    msg.maneuver_eta = 55101U;
    msg.control_loops = 992848355U;
    msg.flags = 214U;
    msg.last_error.assign("TJOEESNUTGEMAIOXDQSMGHBYLSKTWJLCZEACAHLXTANDLVQSPRQBGRHXJDFEPEGSINBKCMCSORLFYDARJJIOFUERVWXBWZIZJPLWVWKRMVMHGCYSTTFBUWLLBVKZPOJSDXDZRHFJMBMCZQOFVANQQCVXPCQYKEUJOVVDBPFEDYDXQMRTNARAUIKUHVFYOWYZAZYMOUCUKGBXGTYTRGXQ");
    msg.last_error_time = 0.5775330757128642;

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
    msg.setTimeStamp(0.4191667122491447);
    msg.setSource(12001U);
    msg.setSourceEntity(4U);
    msg.setDestination(13391U);
    msg.setDestinationEntity(250U);
    msg.op_mode = 202U;
    msg.error_count = 123U;
    msg.error_ents.assign("KQYSIKNHCOJGKTMBOVBSABROKEDNXBFLXD");
    msg.maneuver_type = 60513U;
    msg.maneuver_stime = 0.6456375420016538;
    msg.maneuver_eta = 32857U;
    msg.control_loops = 319089845U;
    msg.flags = 136U;
    msg.last_error.assign("OUBEUGHONVXUIHWECYNTCYYZOZMJVGXRKTLPGZHVKDZSKNACGCTHWRXNQSEUAITRDECNTHUEPWJRXHIYVLMTDIFVDRQQITIGWSPOHCANGPSFXAIDDHALJYPXFOFJPOTAZWSYDGJFMQIPVAHENMPLSEFUOWTVLRBFBDUQBQCKLELXUVCNBUVAMOESQAXNBJLJAZQKQRCKMJKIFFNLWJMRX");
    msg.last_error_time = 0.7771571086214213;

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
    msg.setTimeStamp(0.03933261843193592);
    msg.setSource(21588U);
    msg.setSourceEntity(254U);
    msg.setDestination(32584U);
    msg.setDestinationEntity(64U);
    msg.type = 230U;
    msg.request_id = 45239U;
    msg.command = 171U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 6377U;
    tmp_msg_0.flags = 198U;
    tmp_msg_0.lat = 0.9826068424857887;
    tmp_msg_0.lon = 0.9721373756680421;
    tmp_msg_0.start_z = 0.2759016734502857;
    tmp_msg_0.start_z_units = 181U;
    tmp_msg_0.end_z = 0.6525811380650381;
    tmp_msg_0.end_z_units = 28U;
    tmp_msg_0.radius = 0.18666920922552854;
    tmp_msg_0.speed = 0.3619936071654364;
    tmp_msg_0.speed_units = 158U;
    tmp_msg_0.custom.assign("ROTJIMRUPYGXXJYLUBEQXSCQNLGIJSMPNUDEBDSSEKROCLQACIDNGWVHXRRODOLEVQOUXVRFYHBBKNSUWBZDMWQYDURAHNZZUVPPJCSGYGKKWQMIZLOCDSVMJKHIPETJEZTPODUJKEZVAXCWCRJNKZZUYZVFTLVAQTWIFFHMZBHXGGJQNTIATXIENYNVLRASONYHBILQUKJHPALTKKTSWX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41473U;
    msg.info.assign("IVPBNREFNJQRYTLQDBHCVDKRQCHIKOINWIAVZAUZPREHVZROFECANMPOXEBYSJWXXKWBFLNSSKLPMYCMGOTUCAIAJKQHPBIGLYRUBIGHAGURUSQBFRVARYISJJWFTHZVFEJMJHEASAVKEKKSFAOUPGXCDGTLWKXYYQMVQDDVCDWCMOETFTZSPOQGLMKMZTMOLXNOWEXHZQXSLJPZNYZNFRTDYUZPDEBDGJQUOHGUMSBLNVWIP");

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
    msg.setTimeStamp(0.3245985100385733);
    msg.setSource(3634U);
    msg.setSourceEntity(200U);
    msg.setDestination(56316U);
    msg.setDestinationEntity(91U);
    msg.type = 237U;
    msg.request_id = 58335U;
    msg.command = 188U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 4398U;
    tmp_msg_0.lat = 0.15895664606552218;
    tmp_msg_0.lon = 0.15473426200361928;
    tmp_msg_0.z = 0.5138741490806313;
    tmp_msg_0.z_units = 170U;
    tmp_msg_0.speed = 0.8179717546250018;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.custom.assign("OPZLGBAWNBAOXRGETXSMGGXEFUJSEDZNBYLJBJFPEUHSURKETNACSKVWBYLUARMAPKAVMMXDNXVBPPKLWRHOIZUTMTBRNEHODQKYUXKVRSQMHVMLQBTEQITDKHAVOZENZYIMGVWYCCCAPJIDLWIHTHMGDRDQJUHANDX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62066U;
    msg.info.assign("VSLNGCBYPCETFMPLKCJFLCQEHXHFVJKTYBUYOHOJIZSHATWKAKQKSTENRUCDMDFWLVMGDORYYXZXALAFMVRQVEBSEFROIHBPXUOVPUXNRYADTEWZCIVDHJKIPKPLPUSHCUOJEKYBGVXVGNMOTASXLNCRUJXBPRIBQQAFOIEZHWN");

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
    msg.setTimeStamp(0.42809817404780126);
    msg.setSource(35459U);
    msg.setSourceEntity(79U);
    msg.setDestination(48015U);
    msg.setDestinationEntity(94U);
    msg.type = 27U;
    msg.request_id = 13888U;
    msg.command = 163U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 37024U;
    tmp_msg_0.name.assign("GJVSUAKNGEDWOLDBRJDBIWQDGNCLGORPINSKQKE");
    tmp_msg_0.custom.assign("WIVOQUSARQUWGJNWYKGTHEPCYLDESCHLGIJTVOSYNJQXRAQSAISDFNJHARNNPTQHCZPTKIJCPBUOQYYQBHNLPROKFRMADOBLTZKHZGEFILPBSCHMXDLBZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48396U;
    msg.info.assign("YMJZXBRAOBAPJPCNWXTKDFDAZBYGEXVVPEMXHNHKVGTXJDPOMJOTJAIQQYNHOAEFWKNJEHQDRXGQMDGANZZCGMOXDVLISKAOFLEUNVRWPFQZYWQKBTPXCIRGCEBISWFSLUCHZHUOASMUZYUVKOMSIGDAEPIBFYQISDTWFJXPABKLKQUWWTYHCU");

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
    msg.setTimeStamp(0.7117361702234292);
    msg.setSource(59028U);
    msg.setSourceEntity(156U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(168U);
    msg.command = 205U;
    msg.entities.assign("SGRIRMFTKSUKZPFLVUDOWZEDHMKUUPBLBFJVRYMVEYYGXIUAEQAGCGRCQINDGBYZYSCKIQMPTRYKAWDOJQVXSOCRQGXOLXTBWOHKRRQQSGMOBMGOHLSIFPSFWNJFFEJVWISZOXBUFTAPLKVHXTMDEANNDJAWDHFLEJQZWSHHLMIRPBZTJDLILUTOTHGAWPQNLPZCUVKUEZVTNYNCWQOBYCMAFXNXVJATJRNC");

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
    msg.setTimeStamp(0.974223178152803);
    msg.setSource(59927U);
    msg.setSourceEntity(78U);
    msg.setDestination(30205U);
    msg.setDestinationEntity(157U);
    msg.command = 204U;
    msg.entities.assign("YMQBURBCVWHUJBZQSPSNNLFRIDZOTMTDFLARJRQMVTCOFDRXIPQOEZZQITVSYKK");

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
    msg.setTimeStamp(0.2449954004203182);
    msg.setSource(4938U);
    msg.setSourceEntity(140U);
    msg.setDestination(53252U);
    msg.setDestinationEntity(126U);
    msg.command = 243U;
    msg.entities.assign("JNRINMZSEMZVWXPLDAOHEGJDPARTXNSJYKOKVXGDUZLJABYQVYTCAWXYLIPQXUXHTOYVPQQTIGLQWMEFSHCPMUFIBFEKWGFCAIUCASTOFRQBSTFWKJSUZGLTKXR");

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
    msg.setTimeStamp(0.40284808219407453);
    msg.setSource(46433U);
    msg.setSourceEntity(244U);
    msg.setDestination(28922U);
    msg.setDestinationEntity(227U);
    msg.mcount = 214U;
    msg.mnames.assign("UDEVQTTEUFLJTYOUPUZHXQTBCPKCNXANPCQWNQIYYTKPVIDXUAKWMFRBGHANGSNMRACCBHOJM");
    msg.ecount = 16U;
    msg.enames.assign("VYXIENHTLWGITDMCZLVOYDKPUSCFMXNIKHIPTSOHGSMTFJZPGOHXBVJOZTTEW");
    msg.ccount = 80U;
    msg.cnames.assign("PTNBAPMERKRYOECGBHOGDNYFDNQUJHQSNPDJZAIAGIDXLBFASKXQBABRREMRDQJQTCLQCROXCJKFFKISJMJNUFBDNSV");
    msg.last_error.assign("OSWVASXWDCVXDMCOVEBATIEDKQLUGYOBMKJCXCSRKSPKBGGHOXSOALCMPQWQJGHHNIDDWG");
    msg.last_error_time = 0.8790380859661864;

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
    msg.setTimeStamp(0.7580086280955147);
    msg.setSource(59488U);
    msg.setSourceEntity(26U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(140U);
    msg.mcount = 64U;
    msg.mnames.assign("CIGGKOUIDEGEJTYSIJHFBEQNYPZOUKARPSWOOPLKXYUCDVHLYFZXFWYXNCVBXOJDBEVTFWHJHJQWZENEARPKJSDFFRRZKLDUOGJONZRBGVPYSEECBKRNCMMAGSFUPVMQCIHPIQTUQZKHCMESLQ");
    msg.ecount = 76U;
    msg.enames.assign("MIFXNPWNKWZLVCCNNIFWDWXALLPSILPVKURTYRYYPUFSZPYOGUGPVZEAVTRTYHUWMQLIIBMYDLGJYZUAHAGERPLFUNDHWSKJEMCHHBCSNEFUDMQABPYRUGHGJQIOJVXQBYQEXAEQGCJCTKJZSHSVSMJIZLMEF");
    msg.ccount = 61U;
    msg.cnames.assign("AFGVWACPKWLLXLOLFFDSEZPZIDDPKWYGYBJYXLUAOOHUVDRIKBEQWMTBOWSSMLSSFIWKQZGJ");
    msg.last_error.assign("CXFXXTBFVDYUTZRAFFYQXRRXRHFZYCIONLVBALNBAYJEAZXWGSGWUMEXELCPKGKJZNGIOYXPWLMGEGAZCHOSGNDENSDBKIAZHJKDFCQYKQNYVDFTNFCAMHGVVQ");
    msg.last_error_time = 0.5589464352240616;

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
    msg.setTimeStamp(0.6779752655966002);
    msg.setSource(31544U);
    msg.setSourceEntity(56U);
    msg.setDestination(39500U);
    msg.setDestinationEntity(31U);
    msg.mcount = 22U;
    msg.mnames.assign("XSBDCXSJQXLOTOJYHKKPDHHBRGJURKWVCMILECVWPEEGZZNRGPWDOVQSAETCQISXMDESRSKUPILHDUWOGWZMYDKFGNGTLIVJWAUJWPVOWHDYWNMQXKRSTNEFUOFXFWVZQUHTYLQYUYOMDXJPM");
    msg.ecount = 100U;
    msg.enames.assign("UEZKTROIWPRUWJKKAUIUQEYKOJAEFVDGXPOFTCIGYVXIKXBYTQRTRDHBFVYUEJLNJYJWLCBOWCWFQWGMQRKNSZNSKELUGZPXDGPFMVWRTMMECGSAJADYBEJKYLSLDOMUACDBLVNXISTNMRCPCZBJHYJKZAGSTRMXVWPRIBTYFXGANZHICUHUHLPOHBZELAMBQFRVCSPXDZQTQHIVVNMFQ");
    msg.ccount = 232U;
    msg.cnames.assign("XVEQYMIDYCLWJFHGTWOLBFJSBIZXKLEQTJAZBVTHYJNIXKGXVNVEYS");
    msg.last_error.assign("HERTTOVUWCAZBSHAJJDBQSZVWKZFGHFXBKBUXHUTWLBCWNIIFKQKKNEHWMZWLVIPQLLLKDRDUNYCC");
    msg.last_error_time = 0.9115323950962154;

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
    msg.setTimeStamp(0.024190867511372005);
    msg.setSource(38996U);
    msg.setSourceEntity(78U);
    msg.setDestination(23025U);
    msg.setDestinationEntity(99U);
    msg.mask = 171U;
    msg.max_depth = 0.11237370821023784;
    msg.min_altitude = 0.5949711761286277;
    msg.max_altitude = 0.848354352190408;
    msg.min_speed = 0.2086176665316436;
    msg.max_speed = 0.265559023006558;
    msg.max_vrate = 0.4661158410044962;
    msg.lat = 0.08088212499464065;
    msg.lon = 0.06035863953019438;
    msg.orientation = 0.0938059971222871;
    msg.width = 0.7082686279587744;
    msg.length = 0.10573416856810292;

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
    msg.setTimeStamp(0.6900351433677917);
    msg.setSource(29310U);
    msg.setSourceEntity(143U);
    msg.setDestination(39272U);
    msg.setDestinationEntity(172U);
    msg.mask = 68U;
    msg.max_depth = 0.12740472280114878;
    msg.min_altitude = 0.8767086463279053;
    msg.max_altitude = 0.6282194099564914;
    msg.min_speed = 0.3163468915171319;
    msg.max_speed = 0.6366680361112852;
    msg.max_vrate = 0.18511140786839442;
    msg.lat = 0.3654016281156691;
    msg.lon = 0.2041391954089654;
    msg.orientation = 0.43191092304353396;
    msg.width = 0.039270498072365934;
    msg.length = 0.5028988337296557;

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
    msg.setTimeStamp(0.9282082591399138);
    msg.setSource(11611U);
    msg.setSourceEntity(181U);
    msg.setDestination(57945U);
    msg.setDestinationEntity(79U);
    msg.mask = 205U;
    msg.max_depth = 0.42363542643391716;
    msg.min_altitude = 0.7406467141050459;
    msg.max_altitude = 0.37075476431400767;
    msg.min_speed = 0.3651370026736006;
    msg.max_speed = 0.00999005405895892;
    msg.max_vrate = 0.5912195157264861;
    msg.lat = 0.27866239662749426;
    msg.lon = 0.9226775370475517;
    msg.orientation = 0.03876701560316276;
    msg.width = 0.2870644089066533;
    msg.length = 0.5612735130629232;

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
    msg.setTimeStamp(0.20464157827576446);
    msg.setSource(60278U);
    msg.setSourceEntity(30U);
    msg.setDestination(63123U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.6078991904620896);
    msg.setSource(54460U);
    msg.setSourceEntity(193U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.990120227875706);
    msg.setSource(17799U);
    msg.setSourceEntity(174U);
    msg.setDestination(18406U);
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
    msg.setTimeStamp(0.1525813229097882);
    msg.setSource(18698U);
    msg.setSourceEntity(207U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(48U);
    msg.duration = 63984U;

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
    msg.setTimeStamp(0.9140910072437561);
    msg.setSource(56979U);
    msg.setSourceEntity(179U);
    msg.setDestination(1607U);
    msg.setDestinationEntity(103U);
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
    msg.setTimeStamp(0.8569686545651309);
    msg.setSource(59846U);
    msg.setSourceEntity(157U);
    msg.setDestination(16092U);
    msg.setDestinationEntity(97U);
    msg.duration = 18205U;

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
    msg.setTimeStamp(0.3480613031743013);
    msg.setSource(51138U);
    msg.setSourceEntity(47U);
    msg.setDestination(37478U);
    msg.setDestinationEntity(7U);
    msg.enable = 117U;
    msg.mask = 3182214270U;
    msg.scope_ref = 0.35032338560020526;

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
    msg.setTimeStamp(0.3616985425156287);
    msg.setSource(26958U);
    msg.setSourceEntity(158U);
    msg.setDestination(33458U);
    msg.setDestinationEntity(176U);
    msg.enable = 125U;
    msg.mask = 2363802497U;
    msg.scope_ref = 0.9419710764222878;

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
    msg.setTimeStamp(0.1612423497882559);
    msg.setSource(8600U);
    msg.setSourceEntity(100U);
    msg.setDestination(48173U);
    msg.setDestinationEntity(79U);
    msg.enable = 221U;
    msg.mask = 3002236386U;
    msg.scope_ref = 0.1333394302006894;

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
    msg.setTimeStamp(0.5995162158905405);
    msg.setSource(64845U);
    msg.setSourceEntity(77U);
    msg.setDestination(32883U);
    msg.setDestinationEntity(45U);
    msg.medium = 252U;

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
    msg.setTimeStamp(0.7562106534395704);
    msg.setSource(58224U);
    msg.setSourceEntity(145U);
    msg.setDestination(18025U);
    msg.setDestinationEntity(123U);
    msg.medium = 101U;

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
    msg.setTimeStamp(0.21515289996272036);
    msg.setSource(1239U);
    msg.setSourceEntity(246U);
    msg.setDestination(58944U);
    msg.setDestinationEntity(37U);
    msg.medium = 85U;

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
    msg.setTimeStamp(0.4807385250141788);
    msg.setSource(10911U);
    msg.setSourceEntity(114U);
    msg.setDestination(17797U);
    msg.setDestinationEntity(106U);
    msg.value = 0.8506060493344682;
    msg.type = 187U;

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
    msg.setTimeStamp(0.10404760453975814);
    msg.setSource(49657U);
    msg.setSourceEntity(182U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(206U);
    msg.value = 0.1154094031503321;
    msg.type = 235U;

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
    msg.setTimeStamp(0.3004191984224911);
    msg.setSource(26979U);
    msg.setSourceEntity(127U);
    msg.setDestination(36668U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5490018261743866;
    msg.type = 138U;

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
    msg.setTimeStamp(0.4705778054305356);
    msg.setSource(65382U);
    msg.setSourceEntity(223U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.40837905300242083);
    msg.setSource(51121U);
    msg.setSourceEntity(80U);
    msg.setDestination(43858U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.011377367071461864);
    msg.setSource(8087U);
    msg.setSourceEntity(75U);
    msg.setDestination(39430U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.8467938694625192);
    msg.setSource(20580U);
    msg.setSourceEntity(178U);
    msg.setDestination(7005U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("JLCMCYZLUYFWNOIKYAILTTDILZRXKEVOXGCZCOANQGIGHUAKTBXAQNKROKPSAMMZMHEHWPNFLQJVWNRYVUORWUVHDGGXJYLURJOFJFACVWGSDUSQFPSMMVGYXEWBAPPTVUGHDHEYFBPTRTZUKOADCEGPSBXXZTRORDYXDBMIHQBVNNUZEPQKMPTTEBCIFQIMTYJJRELASQKDZPWGKQFSKIZ");
    msg.description.assign("AXHVQJHLRPLBELAMBDPGKETRPLCPZYTKWHZLQKOOZCHRFCZQAPRWWDHH");
    msg.vnamespace.assign("CKQIUVEJKJCVTUDSCWGEVSZXRHOFJTXPPBEKYKKWVQZHBQTEBLJBBNFFCMYSZVBMMIWMAOAZVYYOQFKXEZOAQFRWDOOXMNEHJSXTPAUWQBZBJHSMCCOUSKANLSTKYSVEIWIHRXMLNRTLMIXVXUDNDFAF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NHYXQKBGZBMWMP");
    tmp_msg_0.value.assign("ZOSNHHBDDFECZEGMQAZDTPAGFMGECKMNPCVDUXNXDNOTIZTYOBKHHVWDEKDOPJWGSHVXXJVLKRQWTSISAKRMIGLRTFJAESAEXPROLPFHBJJWFCRMZIVTRXXJLLNRBCVUYPAPBMKGVMAWFBZZUQSMBDFEAHNHKFKUWCUSNENRILJYELNXNGUC");
    tmp_msg_0.type = 106U;
    tmp_msg_0.access = 163U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ODFVVTBRITFNPKJQNGTZNORVUAFUYQLXTKJOWRKKHQDVMMXSQXDUJDDVTMHWNKZPOEQQLPJXEAHUZOBCCCSDERGMXRNOVXUHMYOYGDPFGAKZEPXJHGKEIWORGRLSBWOTWUIBWHFJGHUZAMUSIALFTCZWVSQBWZSNSPXFNDGEUSJIOVPPNCEHYLGXZXYIMYWTRZIAACPSNDFI");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("USHJCPASSWCDBEJKRQ");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 27064U;
    tmp_tmp_msg_1_0.lat = 0.8420421952097046;
    tmp_tmp_msg_1_0.lon = 0.7940247669794693;
    tmp_tmp_msg_1_0.z = 0.5468282099611869;
    tmp_tmp_msg_1_0.z_units = 235U;
    tmp_tmp_msg_1_0.speed = 0.33191356790464777;
    tmp_tmp_msg_1_0.speed_units = 26U;
    tmp_tmp_msg_1_0.bearing = 0.20481080569471866;
    tmp_tmp_msg_1_0.cross_angle = 0.4845379644346003;
    tmp_tmp_msg_1_0.width = 0.9734875343036675;
    tmp_tmp_msg_1_0.length = 0.3468353988671464;
    tmp_tmp_msg_1_0.hstep = 0.31291551574652654;
    tmp_tmp_msg_1_0.coff = 83U;
    tmp_tmp_msg_1_0.alternation = 210U;
    tmp_tmp_msg_1_0.flags = 10U;
    tmp_tmp_msg_1_0.custom.assign("JCIBSRPRGAVEARNXCENOJAQXLABGCWMGVFVAOTSOYKGSWZRYHTMIGJBGDAZSWCUVDGFBSASBCDILOCNOTNGRUZXIZCGXTQCJWWJEQKBYFDWMQGPPIPPMRQXKRMHKMQUIFVXDKPEDYRFNABLFHEJHOVYTLUJZETHCPNASNLIQUTOOMJEKFYTQKUDEFYAWWPNBLRUMDYUZZLJYNSSMCPWJROXFKNFL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PopEntityParameters tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("PZKKFUYEEWJOOVDMOCBLTSIVQQPEVCYNGUSYWAVXBUBBQDMUUJDVOULOKADJSGGHJBAIWITSATNBCDNZDJDNYGPMBMNNRVIF");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::DesiredPitch tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.9948082425217794;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanSpecification tmp_msg_2;
    tmp_msg_2.plan_id.assign("NSGHIPJIYVPSSKCJADEHUNYLYRBZZHJZJNLPQARWVJXOWDDTDHKXIWAJKYJEZFDVYRIAUFJNMUNVBMUGKCABBGHKMDOHEAXSO");
    tmp_msg_2.description.assign("YDKMDRDBUAEZDJKNHTHEVASAIOKAQFBGOMWZPCBGQUIURCTSEXPXWWPALTMXTCTUAOJNEYWXUGHKWDKGZLQXYJBNOOGSVYZXYYUPSPNJSHLPFZEAAUDILWMSDSTOZFMJNOQKZJQVGOKLEPHVDZJITFQKDRYVSFQXRYGBCFIGNYJTSJCCRRIRMHFNAHBEMNNLWVVSMJLAFOBVDWBMQLBREWERVCUGCMPRZKUCXPIKGXIHCUXIFHTNYTOQFQEL");
    tmp_msg_2.vnamespace.assign("RBPKNDLYRUMUSOTIFJDEGARIKJZXHNQEVMUPSQDPTVUYNQPNLIUJPXBQHGVSTDZXDJAKZWGXUQKKCCGQYNHBNEFCDEABZGWTLODVNMQMVESFAPUDIRCHXTNXSFYICLAFFYJNHQOYPLOLXZZUBTEMJRMIYT");
    IMC::PlanVariable tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.name.assign("PTCCYUVRCMAAWNMBFRZMGSNMORQVSCMRXNUJOBHZLZXRUTYVHPVHGIMKG");
    tmp_tmp_msg_2_0.value.assign("EZTISIYBNFUPDRJCCAZEERVEZGQAQNOWYICQYCJEQNSTDFVDZZDMGOHLDUFZLXWTCOGVEDJGFSMLIORZNYZMHHDTXHHSLKQDBYPFVPUCAYOIVRFBWTEKVWRJPSYMKHTIGHHFKXAGMWRZKQDPFRRKEWKNOUDRVJGATXJGUSFQBLNIJVIBUOWANPIXBLOPWTJYXBFXNEXKVJWMUUGXSQLLCRMMCEBATC");
    tmp_tmp_msg_2_0.type = 74U;
    tmp_tmp_msg_2_0.access = 220U;
    tmp_msg_2.variables.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.start_man_id.assign("NNIHUFMVJVNJQVGBUEYSVOTLJMXNAUBGWAHJMZFRFEWDUAOGABQGEQXLHSYITTRLECFZOHPYBYLZHUJDVFTHSCMICCOTKEGHYZHTAGJYQO");
    IMC::PlanTransition tmp_tmp_msg_2_1;
    tmp_tmp_msg_2_1.source_man.assign("TPXTLXEIXGSNUHIXDQGLVAUBRHLKPLBBQPKFGGGWAFFKDWCFOONYHXHZUKQMZKPODYJTSRKNZNTMCIFKRQJSQFRPXJMYHWAFWVHJKDFCWIADTMLEUYSDACZCPTUNLWRKSZXLEIVSPGRD");
    tmp_tmp_msg_2_1.dest_man.assign("PIAMLKBHBETUXFVJVLSHXYQQYWPZSOMHSHGLIFASMVBODTTHPNDMMSLTRUVSLMPWTWELBEHEFCFDUEJ");
    tmp_tmp_msg_2_1.conditions.assign("PXRIEGQGOHEDFBDUJFJZMQFZKSWWPKXQRYDPUBZRJBOILGNTCIHVCCKFZFYUYROLADDZVUKBJG");
    tmp_msg_2.transitions.push_back(tmp_tmp_msg_2_1);
    IMC::Heartbeat tmp_tmp_msg_2_2;
    tmp_msg_2.start_actions.push_back(tmp_tmp_msg_2_2);
    IMC::EulerAngles tmp_tmp_msg_2_3;
    tmp_tmp_msg_2_3.time = 0.5687093733636396;
    tmp_tmp_msg_2_3.phi = 0.08587935008040248;
    tmp_tmp_msg_2_3.theta = 0.3986672742190893;
    tmp_tmp_msg_2_3.psi = 0.47214082209984476;
    tmp_tmp_msg_2_3.psi_magnetic = 0.9099505604734619;
    tmp_msg_2.end_actions.push_back(tmp_tmp_msg_2_3);
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
    msg.setTimeStamp(0.12099671869592188);
    msg.setSource(64603U);
    msg.setSourceEntity(217U);
    msg.setDestination(23932U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("XFKQURLRNJBUDPXVQSXKGSJGCNIGTPINHLRTWYMMMTXVEVUVTVMFAHLTWPZNTDSVHJKLLORLDSATGQWIAEZHBXQORIMBPZDSHWTZNWNNZRLTURSIKDLUBEDPJOWGQEYXOGIHHFPJUIQCOAYAZWCYOGIRCXHPKOFAFZPMDOYUZSQZFYFVDKGB");
    msg.description.assign("NJGHRCOKDGZOMBKWFZBVRTEAFYLAOUDCKPWIGSVPJSHMRDDRFNHOSSGRIGKHVJENVUVIVFHPUWPLVMAPABSQTRRXNFXZJFDFNMGYMVEWQNHLLPAXTGCTFTMYKTDTFZBXTYBJOUIJFQXENILSQJNDLGVMQSGRWUQZUEXMEZDEKBWKHLEZUCRZUPZYAVLYQXAODJBWODCWSTBOCPNIAAIHHWSJJUQYIXOSYIPECXZYMQPETQKNKKGCLILCB");
    msg.vnamespace.assign("SKYAOTDWNPGOAIYBVQWONXCTGFIQTOHGVZWULBQEVMFLZSJOPWZJTZCPZUZYBNHPCWNSXQOITUPMZGEVAIVHTJXCYXKNDJQDFKYIAIAYPEOMXBRMKXDKUQITGJONXSQBETHSNIBM");
    msg.start_man_id.assign("GIAQYCCGDVLDUGPCIDCROBMQVIFBUYSRZFOWKMKMYE");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DCMDDIBQQCMZSRKEWSOCIZTBYAOYWPCJTFYADUGXQLULIAFNZNJLPBNOKAEQFBNPVHJVJWOWIADKSHPLSYLNXCKEWOAIRXQSVZCNVXRVTHRUUEFFNMGQIFHPGMNZLV");
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6959166590929576;
    tmp_tmp_msg_0_0.lon = 0.21661501757678092;
    tmp_tmp_msg_0_0.z = 0.0723649538694191;
    tmp_tmp_msg_0_0.z_units = 179U;
    tmp_tmp_msg_0_0.radius = 0.9329638877965664;
    tmp_tmp_msg_0_0.duration = 65413U;
    tmp_tmp_msg_0_0.speed = 0.18287992097577432;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_tmp_msg_0_0.custom.assign("EBGJCMLCQVFLOLQDZPIPUYDRTAFCLPOZHBOJEEPVTUZKVBYTMLIRGVYXSQUEUSRPXSKGMLASKMWDDWJCKTWNBPYCYYCKNGGKJAAFIQHHJNMKICPHZPTTNAZMZOQFBIWXXTRRJFIOHFERVMEDOQFGUJDOUKTBWGZVSMPNRSQNBNTXVLUNDBHWHCSNKESXBFQXLDZGZECJWVDHGAAXBCJYTIRRXWOFGOUXPSDIOAA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SmsTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 4007738137U;
    tmp_tmp_msg_0_1.destination.assign("QSSDCBHAHPNJPIADSGIOOGMQQFEQRGZFEQIIL");
    tmp_tmp_msg_0_1.timeout = 2809U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-58, -19, 57, -93, 51, 64, 75, -121, 73, -37, 85, -53, -33, -58, -109, -33, 105, -107, 40, -35, -117, 10, -33, -102, -118, 124, -96, 17, 118, 74, -19, -1, 62, -53, -26, 75, 103, 28, -62, -122, 4, 71, 57, 115, 84, -10, -80, -72, -93, 56, -96, -39, -84, -54, -25, 32, 99, -44, -7, 98, -18, 97, 18, -92, -102, 100, 73, -19, -106, -16, -32, 47, -54, 102, -36, 105, -88, -102, -99, 50, 67, -73, -49, 36, -66, 30, 93, 53, -104, 83, -28, -54, 82, -97, -39, -94, -95, 11, 122, 89, -26, 93, -19, -46, -120, -124, 6, 123, 97, -32, -111, -24, 71, 101, -9, -16, 66, -36, -94, 19, 56, 56, -40, -79, -114, -16, 67, 38, 34, -97, -25, 99, 1, 106, -3, 65, 106, -5, -83, 35, 42, -29, 5, -80, 48, -27, -67, -50, -11, 87, -2, -124, 26, 43, -16, -79, -68, -44, -54, 44, 108, -44, 54, -5, -5, -98, 34, 50, 15, 32, 74, -76, -26, -98, 52, -82, -33, 62, 70, 66, 6, 91, 22, 39, -83, 125, 9, 75, 121, 90, 79, -73, 80, -19, -108, 122, -25, -14, 62, 95, -107, 54, 51, 90, -99, 32, 54, -125, 117, 3, 101, 54, 66, -58, -10, 76, -106};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityParameter tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("VFMVKMXSDKIERCPWRIOZTSSEFQXZUXTXHTXFGNFABCUSGNRFCXGBNKLIRJNJVDAHWHIRNMWGQOIWHUQUYUDOELDAPKUUONLJO");
    tmp_tmp_msg_0_2.value.assign("UGVFEMMPVTVPOVA");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::EntityActivationState tmp_msg_1;
    tmp_msg_1.state = 8U;
    tmp_msg_1.error.assign("ORQPWSTEHLRMMXXLQKGBCONNJBDYSKMZBJMGXDDRXLHMTBZBRUEDFAIFJTZXMREJKHDPHGZLIAIHULFUSHWMTIYSBWUROOPZYJYGNLVRFSPYFKIPXVOMDWPNFVJVHUGESJLIAUIQUYOYKEAWZIIBFJBQMDQREXXRZOCMBSS");
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
    msg.setTimeStamp(0.19669985201635987);
    msg.setSource(49425U);
    msg.setSourceEntity(127U);
    msg.setDestination(1887U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("WCXPCXSLSTEAPAMQMWUNPQIFONRIQHTKACKVPDJIOGOLBOXJZBGWWIUISFALNBHASLJRLPSVLRTUEHAGPTOZHZOMONNZEADDVTQXDJCQNNTCDXLRQSYBZPPERDMETZIGFVARREZXYSMXQBEBMEFUVUCUBHVVGHGVFDJHSTSMBWGFQKNWCKKHKHPAWIKFNUCDOWIJYBRFUOFJDYUFGWCLVXKXXBOJVIMDZALLTERGKYZZW");
    msg.description.assign("RUBXBZKIOEZWZDJRGVCPGEXWXSWQTPJRGIHLFOAAZKKCLTMEJZRHMUJWLCLMHBRFWUHLFZNVXHXYSIQYVOGGBSYBOETQCUYCMPJSOISTPEVYGMIYTCUWCDVGIDOQNFNBMRQGOFZPCTZYHHNENLIDOQFAPKBSV");
    msg.vnamespace.assign("AXHHCHCSBWJTXBRUZYOXEODCIIZQLXYPRYTVFJDBAVJPYHNTKKIVLFTADTRMNCIHTNXSOFLVCNSWZCWSKCVSKMESABSYWKIDGQUYKVDNJYEGVLYPTJLMNEOGEL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KIXLVIVFFKCPLBFCWOORGSJBOHPRAYBGTJTVZJMRJYKCPIWMIS");
    tmp_msg_0.value.assign("AKERHTFLOVJTIFMYMRAHDCMBJMEEQSCPJDWVBIVGZBFNQNOYDTCHFQRKYBJDABLPLCLDZGGVUHVIAEGBZUCPFBMMMDUZPXNXOIADRNMOKJTETKGFQCVYEKUALIHBDRADGZANLHUKYEIPOMNZUVCPUNXSIRW");
    tmp_msg_0.type = 192U;
    tmp_msg_0.access = 222U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LDKVPQVYPYSCNAAXLATLSPXJOKVEQZRSCKBSMZBHWKJUPMPVXYGLLEXVHLIXONCJXKILXFTS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AECOLVRGSQCKYLVXMZNNHMNUPTAVUSCWBIDXHEIELILGVOSZWJPYWHXOBPJSPGVQUYQLVIQWXLTBEPSAKDNTPFDKEXLKXJBWPIHYXHJOCUEZBTOLIKEOTORBNYZMZRNDONNOATGSRDKFHMGYJFWAJZDDBVUFGUHCZBDVKYAFUPMEQTFMIPSCXTZKQFROBMDXVDNLYHCXJIHAEPAIJMSUUSW");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.32083139906073566;
    tmp_tmp_msg_1_0.lon = 0.6199809260274579;
    tmp_tmp_msg_1_0.z = 0.4359240179955334;
    tmp_tmp_msg_1_0.z_units = 103U;
    tmp_tmp_msg_1_0.speed = 0.858069813034073;
    tmp_tmp_msg_1_0.speed_units = 209U;
    tmp_tmp_msg_1_0.custom.assign("RAORYZTKXECOEOEFALLLYMUMYXOWDPZIASVCJJXNVEDTDTCKMRXBAEDNFRMKPEFUNDCARVUMBHWSMIMYSSLUXMWCPTQISUJEOZJIUNVSXWXWBYNJKGPCOSPTBIGVGGJKYLOBPZTRUTSFXJHYNWAGLDLCGCMEZXIHOLQGHAAYTHFEGQYOQXFZKVVNIPCQQWQRHJFBVHJTFAWIGSPSUIZLBFHWNPBRZANBDRQDH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MKHTMNHRBYLFEIYXTQJABYIOWKBSOQRGXSKNNBCNGXJCUDUTVZOZWSYIEMQPFJVOMLFBFQWUPUVLZXKPDKOHGOQCBYKUVZHPSERDBJKGAHJALFXQTJCROVRLCIBDMYAYMLPENXGSNMADWGWQAKTLRFKLHIBXDEFCYXLOJXCMPOLFGJIFNRCQTHVZHVKISHVUJNOVQVZYPPRJSHDZEWWQNUYRTZXWAMEAAGI");
    tmp_msg_2.dest_man.assign("ODOYLTASQEODNVEH");
    tmp_msg_2.conditions.assign("FOHHNPEGPHREVOPDYDTLKNUNYGPKTMLZFDBNCBDVAHFJYWJUFTZIAZLGJIMTPSHDFWYQSOVLVQNMBNYDORRSXPBZEKIZRMPTAZSGVETRGNKEXXIDBUQRXGTIMHWPQVDXQBTCTUAUCOECVINGLWCMWBKQDINWXAUSKEGIFMVZSJVDHLCWEKCOXOZHUYYQJKAMSIQJTUBYFQKRRAJFXUWMCZFMKLPUCXZLEXWHJPGLYLRAOCVOSRQWBFJAEJAYS");
    msg.transitions.push_back(tmp_msg_2);
    IMC::YoYo tmp_msg_3;
    tmp_msg_3.timeout = 5582U;
    tmp_msg_3.lat = 0.6351885924321273;
    tmp_msg_3.lon = 0.7204499524908804;
    tmp_msg_3.z = 0.7801263625693536;
    tmp_msg_3.z_units = 213U;
    tmp_msg_3.amplitude = 0.7590639646704166;
    tmp_msg_3.pitch = 0.880598420563373;
    tmp_msg_3.speed = 0.3362482657259114;
    tmp_msg_3.speed_units = 138U;
    tmp_msg_3.custom.assign("BTCWBNEGYYJQKDKXMXIAPVMJCXQONXVZKPQAWBRQBTGZJJMVUNRHNQFDZERRSWTIBHMISRHMUMFCWDWQRSQMYXJKVSLNYCDAXHCIUXPVUGQANCLTLFEUGBOYSDMMOGADLWTYIXHQCGGHBWPGLFTYVDUFYKIJJNWZUMAZJGZZPDISEPFVUFXHCOHRAVXTKIZBWFLSKSQZONEHJOBAEYNSDKEONIBLHOWKOFIVZTLPEF");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.04485759469743489);
    msg.setSource(3253U);
    msg.setSourceEntity(8U);
    msg.setDestination(29309U);
    msg.setDestinationEntity(151U);
    msg.maneuver_id.assign("ULNUQXHQQAJLGNHFOBJDZGGFYJDNPBRPXMHGKWQYSOTESQDCGSTKLJTXXDBWTQMREOCLRRDLFUVYLUXYIVMUT");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 42271U;
    tmp_msg_0.name.assign("KWSVMCAKUSDTJYSFEOJUIZVZLZCKHYMTSCGGERXDIQYWAURXXPUKFOLZPETQFJUEVNGLCDDKJHERNISYJLPRZCUTIDTAPQAZXQOPAVNBJELFQDXBVILXTMRZSMUZKBYHHVIMKRHXHAELDRWIVOCWAHMBEIZSYSBNPUGRQA");
    tmp_msg_0.custom.assign("WQJPNIYMLOCMKGRLIAPOCOTGKGBNUZFKRGRCBJRNZUDJYYFPTIPHKEUTCVVFSXTEZOSZFNX");
    msg.data.set(tmp_msg_0);
    IMC::PowerChannelControl tmp_msg_1;
    tmp_msg_1.name.assign("BIVJRFGPCPKMFWUJCHAFTOSKZCMRJUSSVXGHVZSHIJKHYZQFMIXHAVNRCKDNDJWSKAYXJJWDDZBUDLFLXILUUAQUKWOFLZALNFDQIITSRBGBNECHNEKIEOLOI");
    tmp_msg_1.op = 252U;
    tmp_msg_1.sched_time = 0.14382763771401996;
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
    msg.setTimeStamp(0.7883653354287442);
    msg.setSource(47115U);
    msg.setSourceEntity(181U);
    msg.setDestination(6111U);
    msg.setDestinationEntity(232U);
    msg.maneuver_id.assign("OHIBNWOJZSBLENSQCXSUFHEDOBFWMZAUAMHIDDSXZTKMVTKAMHBAGUJUEXCLAYNWQBTCKUUHXHIOWEZOPAKOKRTIDVGYSQPEZOBLWHDXVQFKXDRGXNYYGDLURCKJFSAIPXBSRGK");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.2626141905801158;
    tmp_msg_0.lon = 0.346189279623633;
    tmp_msg_0.z = 0.4942772408900712;
    tmp_msg_0.z_units = 51U;
    tmp_msg_0.speed = 0.8916769124688124;
    tmp_msg_0.speed_units = 193U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5767420042150613;
    tmp_tmp_msg_0_0.lon = 0.09437694935384289;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CPVZIARPOEQSDHPCCJMRFGRKYYYGDQMHJVYFFPMLLZJEDXHHDEFQAGSOVMTWGDXAJGTHVUBZUFEZGKEUJTXNZOWBQRZRMSSAQUBIATCDXZYWYKRJQCVNLVUELLAAWAMCKQPQXBNRRBGCTRHWTYKNNMFKEWO");
    msg.data.set(tmp_msg_0);
    IMC::RSSI tmp_msg_1;
    tmp_msg_1.value = 0.23865287036747862;
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
    msg.setTimeStamp(0.536777942339992);
    msg.setSource(34072U);
    msg.setSourceEntity(173U);
    msg.setDestination(25995U);
    msg.setDestinationEntity(137U);
    msg.maneuver_id.assign("UMPOFDIBNATLTBAPZXMTPSVFKYMOIJIZVQERSJBEZPCXKXIYBECIWOTPAGQRIJGRLHHQHGLLXTVKYYJUTKIFFPTVWLRJQJUANXASEWTWWSCNLJZACCNYBMOOFBVZNRLCKSEFHBZQHZGQPDEUEHLJARZSMDJNUBOVKHMQ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7131756590469165;
    tmp_tmp_msg_0_0.speed_units = 195U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 26393U;
    tmp_msg_0.custom.assign("WKQHFIBXKLVYZSFFCNBRYZVRRWDIJYOCIDMYNLJFTGZMMONGWNNUAADQUKYUQXP");
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
    msg.setTimeStamp(0.5765368979555063);
    msg.setSource(16773U);
    msg.setSourceEntity(93U);
    msg.setDestination(33967U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("JDKLPWUBCDBWWIIZDHWYOXSHFNKNEBKVPPESYOSSGZJYWRAVRJXMBPQLIBVQSZHPUNFFPSTGYVXRUKHCMENXDFTQXFPQTRHNNOEPNVNKQZXELAMTJZGRODGVG");
    msg.dest_man.assign("OQLITSLPQBWJFTHREDFI");
    msg.conditions.assign("IOFAEACROVXMHZGOQCWOQTOEDWJIMHRXTLZWHKXFBSEGNAGTJBNSZDDFBOALRCUNUIMHHQWPYJHGHWBREVLZFSZUITFCMAUNJYQNSKBUXLKMPPQIWEUNVJGWKGNGQYPJXCESTLRKIQAFORSTHGXUXTPSVDXBDEXGABTPRHYABDOSVVFYZUHELDZAKRPDVWNVJAYDLZQ");

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
    msg.setTimeStamp(0.7703612683899747);
    msg.setSource(48710U);
    msg.setSourceEntity(7U);
    msg.setDestination(28457U);
    msg.setDestinationEntity(4U);
    msg.source_man.assign("ZDPMPDIEUPNJTDRBBKQJCZXZXSCJWQKUVGOJWUNN");
    msg.dest_man.assign("NAMOEUFRUWIBBRXIOGKUIZFKYFVFLSFCHKEPGMPZVDJJVHMDZCAPHTEJPPZUVCTMVFDLFYYZHAESJANLMVNPRNZYRBYLGLDCTNIIKHKOFKOQPUGUFAWZEGNNXXINRHDYKQBIQGVJBRSHRDAUJPRCTXLQGLZMLSPQZJAHROQTIKMQJQOQEACMXJMVCVEDUGNSXSFKUOZLCHCWXCBOAYTPUTBSEBSWGEWMLTBYAHWSJODXXDGB");
    msg.conditions.assign("KMDWXBOKLYCHWOSJXRNDNZAFTMGCOGAMHTYFFKLETTDCYRJZJSGLWBZQAIDPJCQURNATKHVPNQEADBUKPTASEVQKWCXDVGXGEGYXFRPOKGYPVDZUXNEBSKLNQFRMCOUHSVTAZYLUMDIHSSDYJFYRSMSLIZTEXATYIXJMI");

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
    msg.setTimeStamp(0.018520597599139044);
    msg.setSource(11445U);
    msg.setSourceEntity(226U);
    msg.setDestination(62283U);
    msg.setDestinationEntity(137U);
    msg.source_man.assign("VELVCXOWYQDYGYDLI");
    msg.dest_man.assign("VMHNDKQSTEQANRRQTLFWTZVZCFRILSXLPBVKZOXBAFZKGBQGNWHGUDXKRMSULPNXMJZOLAIQBWFORHWPNCICUENUPGUYQW");
    msg.conditions.assign("DZAOFUYXFOEFXHRYWRLQMLEVCMSCVSHQDLGBACIZBBTZVMNVWSUMZTBKJTZHFOXK");
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 70U;
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
    msg.setTimeStamp(0.27294027421245637);
    msg.setSource(41789U);
    msg.setSourceEntity(68U);
    msg.setDestination(38719U);
    msg.setDestinationEntity(2U);
    msg.command = 241U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CEUAYGJFMZGYHTHQVKOBIXVZQDEGSQFTBFLXWIFAYUBFBWVSWKCHAHEECLAQJZLGHMRBQHBOKJFPOADOAVPTQPMMMWSCFCZGVJIMSNKJFRKAXGHUEXLVSTSFPUBDMRXZGTTJPNZA");
    tmp_msg_0.description.assign("YNJTNIVMSMABWIJBYGZVCINKUWGLWADAIGAVYUVXWLBRXDLDEOWCNQ");
    tmp_msg_0.vnamespace.assign("MNYOIMNDAJJGQGTQNRZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FQCTYMYHISOLEDADFZFSYUXLNSLVWPPZAYTBNZNBUGJLMZKTWRMTOJIIHRPGYUCKQYYIXGMAUSXCBEQIXVBKMZETPEXMSVMVDMOCOWCSCKQJPFPRZUDPDERMRCBDPHEFJRZFWDGNASHIILWZFQAFQAGNSVSEKLCGYGQVTIVDJVIHJNTOGHEXGWOQVEXBSWEPKAYJKZFLVCBBYWUTNKNWXRUA");
    tmp_tmp_msg_0_0.value.assign("XTVNRXVKBZUMPPMMRQJRYCLMKPVHHXGTXBJITFTQHDPOROEVEVPUAHKSIBGNGOERUVTJDEVGMRFVSWIQUDYYSMVXNOCWYFKIKJIPEAZRLLCZNYQBEZBUGACPANNLFQKTSGTSBWOGAYAJGQJHRYUUXNDYQHOIHPXRULGZUTFNXDWRMFJJWTIJHDZXQBLDNVCPFYLQSEPHYQNZDICLMKOKMWIOESCWCIECBASGFSOWZWWSBLZLDHOUX");
    tmp_tmp_msg_0_0.type = 184U;
    tmp_tmp_msg_0_0.access = 29U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BTTFQEZJJFFPCAYVROUJIKWCKQEFESHHPPIDBENCDGJKXWQJLNXUWSOSAWMSYOZVQLDYMZMAFPXNKBKBBLKXRZVBJELIKHCTVJKMAUQTYIIXAMSU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KRUQFNGUUK");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 483U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SPGHDXMHYXJOBZZSQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FollowSystem tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.system = 34506U;
    tmp_tmp_tmp_msg_0_1_1.duration = 9702U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.9583207132256469;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 110U;
    tmp_tmp_tmp_msg_0_1_1.x = 0.8795946548932155;
    tmp_tmp_tmp_msg_0_1_1.y = 0.9956042309098536;
    tmp_tmp_tmp_msg_0_1_1.z = 0.17974138399971384;
    tmp_tmp_tmp_msg_0_1_1.z_units = 69U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("AATIBJVEJPLGOLFOWBEHIBRSNOHPTPDWEJCWBGQLQRIZQYSKXZZUQFDCCYNXZVWQBKZDTVHCORRYRUOMCRNFUWCWMQKJMRFLUMGGVZFTDPVLOYEEXUNGMXYDPKTDFMNEYZAYJZNPXHJUAYHOKAKTTDBKTJULVAVIBZIIPLGTXUPSSZECIANMPIHGXUJSRFWSLGFHMSARQAADNECVVYFIHHISEWTGKMNXLSJXQFHENSUWBORKCDPGOJWY");
    tmp_tmp_msg_0_2.dest_man.assign("YEEPKYXOZVDIWMJXVAPAMNONDSNLTYH");
    tmp_tmp_msg_0_2.conditions.assign("DHRPAWUQTLAMDKJSYHPPGNYNTTGOILQNFAKZASKEPZEYNOENTUWCDHWULOFYRQDSOCBNO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredPitch tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.7224140471611739;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::EntityParameters tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.name.assign("WLSWHFMJGSOTSLHQEFTEIEUNWPYXOODKSGELAQOJZFCJLNTIHKDLKSOVKKJIUMFREVPMHVZZJYYBFVAXBCGMBMZOHNISPYMNHUVXTAUQBKTCHYDMNIAIQWVPSDRYNDXNEXF");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.2750839559393886);
    msg.setSource(61778U);
    msg.setSourceEntity(217U);
    msg.setDestination(39233U);
    msg.setDestinationEntity(148U);
    msg.command = 201U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YVFEQIYOZDTOEYNQLMMXGOASRXTYQWBBRZMEJHGZPEUULSHIRTUURFRIPCNEDLFKMQ");
    tmp_msg_0.description.assign("ZFASYLCEBYCSMVNEAVZEGFHXUZJFYOBARGZWFREQTRZUHPKVMLQIHQAUJIJOJSMLILUWRDGXKHOEBAT");
    tmp_msg_0.vnamespace.assign("BOFMHQQETCZZBIGQXKOKHKJHLTXFTYANVGADDSRYTDDEHWNIMBWBYXNPZTQPMAFWFUDZQNUJGVKGLYRMABELVJDWTEFKUHYXFQGERCNFZQVIMOCIOCQXIJWIHIEDWDDHHMSUPUKCASZVVZCJRWOLSLRSYANTLB");
    tmp_msg_0.start_man_id.assign("DIJXPILNETYAREHOZKCDMKZZGJEQRQZHVLQGHWIYHITWXZPEMNGANCVXSOAPGIQTYHUKPHERNVLLAADJJMYSJOUQXXBAFOEIVDRKYNZJRFWOVTYDSZZWFJTAJYPKBF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KYZSVGPTVBITJFCCMHUZOKGMAROXBDRLNVUPEEMXVFORFSAPUMDHIQXDQLOCCNUUMORVQKDSILUVWMHWZEDAJHWPUPITJFEYSUFQTVLWEGBANJNHUTFXXWGFNFMRXBAJISNEKNKWESKQCDYYBHSXOIPTVBRBYTZXQRXKMLNCPLQQHOTLZWJKEETUOLAZSJBYRIOANCPLDYGWGIWGCYABMCWYG");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.05719772919933308;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.34820142091979944;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7426728168420147;
    tmp_tmp_tmp_msg_0_0_0.z_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.4266187886222522;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 204U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.7311710163140127;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.6878711373083924;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.03564095476041795;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.478653992624955;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.vid = 14152U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_x = 0.8380509359121826;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_y = 0.6691249925094983;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_z = 0.3281801811992986;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.3162466570927408;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HEQWOKJGPJIXLYUTKYMUCUGESROZPLLHNQFOXEHPLZRNYIBYRZDGMUMDGZIEFEOUHTXKMRQFVTKYDQSVOXAFXDRGKUVRQKZFADCWHPTDBSPFTTUUWRBBCRJXZCEBZONCNFQVTABHKMDCNSNQLKWYOWJSHGKB");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Calibration tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.duration = 56358U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.507330794151571);
    msg.setSource(6345U);
    msg.setSourceEntity(61U);
    msg.setDestination(15304U);
    msg.setDestinationEntity(115U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PMZXUDTEQMYNZHBLPNPNAYIQIEOHCVFYLGUVSATDZPYVGKKXTOSRFIJDUXGYACAIRSXYOJUMWASESCRYFKPIPTNZSTQHNQBPLBK");
    tmp_msg_0.description.assign("LZZDRJSAVZKHZQOPMQBMBUYQCOEKOFDZQVKFGZMB");
    tmp_msg_0.vnamespace.assign("GUSYNDQSAKDSPKZKHQILNXRZCNFPQMQPNYYPHFAPTJASFWQRMRZYDVTWVXGSHPJVCATRDVKYLIUCRP");
    tmp_msg_0.start_man_id.assign("HPYZPJLCMOFCLRQFBIJEQNOAQLFUSGNZXNWXITBQXGNYNPHOUASRRUPPQCIFOBFTMLTJXVCSXEEDIOBWZDPWXZCKBHOYUGUEZTEFVOFLALHXLMSOBLMPSTVYWRRZYBGDDGHEKUAPJIDBHTBGNFYEDUQKLUTHCDUCKVKJAGIOTVJRAQVJSWYJOEMSXFMKNWLCYRSTITNGWCYVQNIZDYVCZMVRKKRXXIMBZDZHAAREEQWVMHKKJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SFNRZDEVSCAXBZLBQFCHPOBAAPOCBVCMVXPIMVGPQLUOZAXCYKKSJWCUEXOWQKDWRRUIBNTZDSRAZQKEHNKRMCKBTXJLYJMJSYHBHGGTKQONDYSLVUMKZCUHMLRHYVUIXHINKMVGATJCSDDYOLTJRFDPOAKGIHWCRPQDUOTJUBIFPBZVXGIGWLUJJTTASWWIP");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 18875U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4100232876338159;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2577028937939857;
    tmp_tmp_tmp_msg_0_0_0.z = 0.09883477626276271;
    tmp_tmp_tmp_msg_0_0_0.z_units = 157U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.586135426371123;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 34U;
    tmp_tmp_tmp_msg_0_0_0.duration = 61986U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.21617071150344458;
    tmp_tmp_tmp_msg_0_0_0.flags = 161U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HWEILVUJBDGXSCGULOPPXUHEVKXZSAPOMDNUOFSVPYVATZWVHQRJZPNVQFODJOSODCLNDG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("MBZFBUQSIHDEFGGGCYVETOJPFCDVSXZHCMBEPCMTEZFCANLNBOYBPWQTKNNPOOLNMZAUZINVBYFWPMZJJJSSIEKVXYXTMKHPAFYKIUWETAUIVTAKIGVRXXCJBFZHQBDOBIKORQKCMLQWVXJEGDZSKDAHUIAWLDVDLNWQOXUFPLRTEOPHNGRNODBRMHPGGDAGWPMTCFIXTRZKIMUQHFDVWHSYRURJSANYJLQEWLVOQJCRWEUXGSSJUQ");
    tmp_tmp_tmp_msg_0_0_1.attr_type = 44U;
    tmp_tmp_tmp_msg_0_0_1.min.assign("SIDZFGDUJHMMXSXEWZZPBPQIGIIWUYNNYPSSDRNMBRWMSRPLDYSZOYCDRX");
    tmp_tmp_tmp_msg_0_0_1.max.assign("QWSTPYSZQHXKLQFIOTFMBNYDMBVJOPUEMLGDJQEJWNLDKWBBSCPFAHQCKACCHGVBSTZYVYLFCTJHHLZWNLSWQRJURLEIVHGOHAPFGSUIWYJMCQXQBJDZAGPPXFXHIGCAYXURKZAGJXRXUVLNWIVKDOTMAMUZTUKVAOBNNNJFEFOBDVGISEUDOFNZDXPRKGKWSMDDNFRHIVRLGSYBYIZEAKMKWMCCERNYWMECVZPJTYZUXIB");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::LogBookControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 215U;
    tmp_tmp_msg_0_1.htime = 0.3408000566832138;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EulerAngles tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.752262346112187;
    tmp_tmp_msg_0_2.phi = 0.47753055509021536;
    tmp_tmp_msg_0_2.theta = 0.6629990368355565;
    tmp_tmp_msg_0_2.psi = 0.6882008162040965;
    tmp_tmp_msg_0_2.psi_magnetic = 0.8218309431233187;
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
    msg.setTimeStamp(0.22182353835891766);
    msg.setSource(39849U);
    msg.setSourceEntity(152U);
    msg.setDestination(62628U);
    msg.setDestinationEntity(30U);
    msg.state = 176U;
    msg.plan_id.assign("ZGVQJRDGHLXBNSNRLGFOBMIGEZYRJRFFVSQNZNYERHKDZOQOYCBJFNTGLUUYHKIMXWUTVRPODVSLLFPMTBBSWIXUCUQJEKDPLTUDJTSJMYPILFMAWLYOFPRKSKYJLVITIMWXWTMAUBWZCWEAQOEHFXMBRRAYAREPJITZDWNQUBBIGZJVUQGNNOCSNZKACQAWHCEAPDQKXHOFTQAXOXNMBGEHUFAIMJKSCDHZYDOVEZLHVWIPE");
    msg.comm_level = 210U;

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
    msg.setTimeStamp(0.058347220626149277);
    msg.setSource(4317U);
    msg.setSourceEntity(18U);
    msg.setDestination(39369U);
    msg.setDestinationEntity(89U);
    msg.state = 172U;
    msg.plan_id.assign("POJYIVCAMXKKRJYQRTZEXOKRNDFNNUVMDVSYWBVLWJYMWJGUFMIHGHABTCTQUFOKVYIOETBGCDGVJZLGPBSRBKUABXOMJVZCQORDHOCNXINFOWHXTILYKLESEWSSRMLEQDAVCPIBVIGQPXSARHNHUURIZIRTDFMHGOKWJNKHWFULLGTZZZCEVCCXDMAXFPYNMQTXOBYHBBTJPLQSUTLJMSYPEEU");
    msg.comm_level = 50U;

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
    msg.setTimeStamp(0.3804127922952043);
    msg.setSource(44528U);
    msg.setSourceEntity(168U);
    msg.setDestination(54066U);
    msg.setDestinationEntity(136U);
    msg.state = 11U;
    msg.plan_id.assign("WGKCSYZAPKZLQELHFAMRCDUVYXHIHAYLRKAVJLVCZYMFXSAXBSEJPMITBTSVVOMNAEFOXNEIKGQNWYYDEDNKNSGGHWHOQHUQSJFUYPOYDVOTRPBVELCIGDZWNDWGVDXFMVLNBRPBAEIUMWWOBXRELPQBIQMOQYKXBJSJHBEHXSSVAMMLTRFUDLQKHPOQPZYJOEZCCUPMCZWUPATIUJGSTFFWGRUNINGQJIIDTFRDRCNKTJCATZXBCFWUGRHL");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.625603171839652);
    msg.setSource(935U);
    msg.setSourceEntity(20U);
    msg.setDestination(45263U);
    msg.setDestinationEntity(212U);
    msg.type = 71U;
    msg.op = 98U;
    msg.request_id = 41732U;
    msg.plan_id.assign("YDGXACIXNIKHBHPGLHPRTDLOWPZSCRSOQTNAWOINHFNOGQMRGOTKUVAXJBMOSEYGVEPMYAPIQVDTHUWPYNARNQUQIOEILIUSA");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.4621306713014899;
    tmp_msg_0.y = 0.6824934485632024;
    tmp_msg_0.z = 0.263757124276109;
    tmp_msg_0.phi = 0.36339432467885746;
    tmp_msg_0.theta = 0.20537262702964332;
    tmp_msg_0.psi = 0.03804339365259202;
    tmp_msg_0.p = 0.7189032975966104;
    tmp_msg_0.q = 0.49624489600213384;
    tmp_msg_0.r = 0.727086721974645;
    tmp_msg_0.u = 0.021558835864044945;
    tmp_msg_0.v = 0.30924207386869784;
    tmp_msg_0.w = 0.29834429463912016;
    tmp_msg_0.bias_psi = 0.8689755518745254;
    tmp_msg_0.bias_r = 0.23481745032973667;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MFQSXULWXMURDCQGJYRBIZFAVJHEKFODIFPNMGRLVZGFRNGWDZYASIJPWDMPDILLVTLMBKHXXYKSFQQHHLDKOLFQITRPJBEBZAAMBJGUUYOXYYIOKTEDZXVMNQTORTCJBHFQWPWJHILVVXNYAQTPKYSUTST");

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
    msg.setTimeStamp(0.8050856498351875);
    msg.setSource(22835U);
    msg.setSourceEntity(254U);
    msg.setDestination(26629U);
    msg.setDestinationEntity(253U);
    msg.type = 227U;
    msg.op = 73U;
    msg.request_id = 48600U;
    msg.plan_id.assign("CCHSDDTRLMLGPLKDIODCVXHFZTFAPUXUYYNTLQBNOHITYYNITSEEGIMVQVKXWEMSQFFXGFYUVKXKNNQGXRUQFMDPYSDXVTFFLWWILCABAMOOXRKYUWKDXNEPZZVMZHZCZOSJRXVAWARUNCOFTJIJHOFLEWUCEPYETDGAJDGPGRZGTBMAZYGQHJCMYHBRPEGQ");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BTQOMWJSCRZIWHXIZTNYCXOTORKBV");
    tmp_msg_0.value = 243U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RETUJCPOUNYWZVMCLDVOOJTRBTGSHCZOLPRSZAGEXCTPZTBMKYRQFVRUJ");

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
    msg.setTimeStamp(0.5498097216398885);
    msg.setSource(4716U);
    msg.setSourceEntity(43U);
    msg.setDestination(3017U);
    msg.setDestinationEntity(212U);
    msg.type = 94U;
    msg.op = 94U;
    msg.request_id = 53721U;
    msg.plan_id.assign("GSZTBSHYCDKDEZ");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4231578174692916;
    tmp_msg_0.lon = 0.107272854904364;
    tmp_msg_0.height = 0.8125958894368165;
    tmp_msg_0.x = 0.8101394134712304;
    tmp_msg_0.y = 0.06302492193905052;
    tmp_msg_0.z = 0.6269712626629212;
    tmp_msg_0.phi = 0.7921419413459835;
    tmp_msg_0.theta = 0.6683776525089384;
    tmp_msg_0.psi = 0.3020502723416345;
    tmp_msg_0.u = 0.41371818842891805;
    tmp_msg_0.v = 0.7217830451010101;
    tmp_msg_0.w = 0.7399109252593095;
    tmp_msg_0.vx = 0.9182930964126882;
    tmp_msg_0.vy = 0.4309709052049341;
    tmp_msg_0.vz = 0.11026109487095992;
    tmp_msg_0.p = 0.992645722417977;
    tmp_msg_0.q = 0.6972076906638124;
    tmp_msg_0.r = 0.710613968736669;
    tmp_msg_0.depth = 0.3620375436701684;
    tmp_msg_0.alt = 0.060494389867894016;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOWEUGBVGZZHAGWDZNMLOX");

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
    msg.setTimeStamp(0.3080383460316116);
    msg.setSource(42749U);
    msg.setSourceEntity(44U);
    msg.setDestination(58529U);
    msg.setDestinationEntity(72U);
    msg.plan_count = 4556U;
    msg.plan_size = 2855680902U;
    msg.change_time = 0.17453379117442458;
    msg.change_sid = 38516U;
    msg.change_sname.assign("CLITQUGJCVQKPANKIKOTMDWKWFHEPRWPRHVOUYXWPKDFSZXANYBGUNCJBCZUTHYJVBLHBIODDONZMIRMOFXLQRZLSFWUKBQOGLKNTTHAEUPCBJRSTLHODEOOVSPAHXYPJKSZCAFCJXLIEDSJXDALKEWMBTSFVVLNAKJXZGHPXNCMFMPIQUIZBRRHUUEMSYPGEVWLWXNTWQMODWRETHGYJTZIVGVMGGCQECQZBIFFSGAVDDYXUZYRNFJYM");
    const char tmp_msg_0[] = {-97, -43, 0, 10, -44, 35, 72, 76, 51, -42, -114, 79, -18, 0, -43, 101, 40, 7, 63, -83, 16, -8, 39, 47, -72, 57, -16, -76, 79, 44, -125, -116, 27, -44, -70, 82, 12, 78, -119, 71, 120, -122, -88, 36, -93, -79, 42, 3, -2, 123, 51, 119, 54, 83, 9, 14, -77, -86, -116, 29, -66, 72, -59, -4, 15, -89, -41, 5, -62, 39, -74, 40, 25, 67, -34, -87, 20, -50, -40, 12, 66, 78, -81, -28, -95, 123, 90, -19, 97, -2, -8, -97, -105, -30, 51, -29, -36, -76, -100, -124, 76, 67, 79, -2, 120, 23, -67, -127, -85, 98, 77, 91, -81, -84, 20, 54, -46, 73, 30, 2, -3, -124, 97, 90, 4, 82, 114, 63, 14, 14, 110, -107, -121, -24, -108, 42, -127, 13, 82, 39, -16, -2, -22, -59, -20, -117, 36, 110, -43, 95, 93, -119, -49, -9, -26, -93, 114, -56, 109, -94, 91, 9, -103, 110, 54, 16, 92, 90, -32, -32, 87, -114, 63, 31, 106, 76, 9, 102, -126, 45, 124, 125, 6, -77, 66, 18, -14, -44, 122, 35, -3, -42, -66, 76, -56, -59, -97, -60, -67, -52, -103, 72, 64, -125, 22, -41, -48, -3, -104, 17, -89, 89, 59, 97, -21, -125, 91, 78, 111, -37, -14, 90, 55, 8, 44, -49, -56, 41, 23, 79, 54, -103, 70, -83, -105, 36, -103, 16, 103, 99, -112};
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
    msg.setTimeStamp(0.22813638328825336);
    msg.setSource(32771U);
    msg.setSourceEntity(25U);
    msg.setDestination(20981U);
    msg.setDestinationEntity(30U);
    msg.plan_count = 38879U;
    msg.plan_size = 3048976098U;
    msg.change_time = 0.3456250486943191;
    msg.change_sid = 25619U;
    msg.change_sname.assign("AXVQPSSBMKESMIEVJVHGFMZITHOTFFMNFLAKPAXDKSPFJHJXGLIPINRWRLRRIKXCCNADZLLQBXQZCSEYNUWXZMYBQDMXHDATNGTZUFJNNVEQBNOBTJJZACWBAKGFWQPMTPCDGHEHUDUYOUVBJWNMDQW");
    const char tmp_msg_0[] = {-48, 116, 64, -98, -74, 18, -109, -104, 102, -106, -75, 120, 71, 99, -98, 82, 104, -43, 39, 112, 2, 10, 69, -35, 111, -81, -76, 65, -30, -29, -75, 78, -23, 10, 107, 18, -120, 17, -48, 75, -30, -123, 111, 25, -47, -60, 102, 89, -85, -73, 100, -41, -53, -43, 86, -24, -56, -68, 125, -92, -31, 86, 79, 68, 98, -3, 59, -93, 70, -62, 30, -15, 59, -78, 23, 41, -34, -41, -126, -37, -27, 37};
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
    msg.setTimeStamp(0.24274598292814675);
    msg.setSource(18926U);
    msg.setSourceEntity(4U);
    msg.setDestination(5471U);
    msg.setDestinationEntity(115U);
    msg.plan_count = 30303U;
    msg.plan_size = 3206435097U;
    msg.change_time = 0.33249305016737585;
    msg.change_sid = 18456U;
    msg.change_sname.assign("LBAVOUYQVZXJBUBFMAGQGMRKBTXACOHCMISINXTFGWYXRIPLSIYTKJMQDNKWIBGX");
    const char tmp_msg_0[] = {44, -31, -68, -20, 42, 120, 49, 32, 62, -109, -62, -38, 95, -108, 23, 27, 52, -102, -90, 86, 102, -89, 87, -107, 109, -1, -38, 100, 25, -81, 62, 78, -127, -128, 68, -119, -92, -125, -2, -101, -2, 23, 64, 119, 70, -93, -75, -55, 48, 47, -22, -55, 114, 11, 96, 106, 118, 42, -124, 33, 5, 115, -10, 4, 75, -81, -57, -23, -128, 119, -11, 87, -83, 120, 76, 58, -101, 89, -78, 116, 36, -67, 111, 126, 109, 23, 0, -81, -21, -45, -18, -100, 94, -29, 59, 83, 1, 111, -29, -121, 20, 87, -3, 120, 108, 78, -90, -44, 23, 98, -36, 121, -104, -94, -84, -66, -125, 122, -124, -21, 117};
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
    msg.setTimeStamp(0.7637568077997954);
    msg.setSource(15489U);
    msg.setSourceEntity(88U);
    msg.setDestination(7376U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("YORUKQANVJDTPZFOURIXXTOOSXOKWRTNCCQENQWZRCTFGWPBHLAHSGDYFKWYBAKUYGTMMDHENVDEVHPADUBNZN");
    msg.plan_size = 12858U;
    msg.change_time = 0.6299363053782868;
    msg.change_sid = 2515U;
    msg.change_sname.assign("XVNRSVQDNFUOHFVLOBYUWCNUBOPCHDWNBRGPJLAMSWZUMQEACWHQYNSHYSAIJAEEKBZYITCPCVCFMDQQEMGKXFQXJPILVRSZRPQSSBRIPDPGUJTTFJKJHRLOGHZLIGIW");
    const char tmp_msg_0[] = {-23, -33, 77, -52, -12, -24, -48, 103, -33, 117, -104, 15, -72, -27, -101, 0, 18, 108, -47, 123, 103, -31, 110, 80, -39, 29, 8, -112, -81, -96, 44, 123, 18, -25, -80, -104, 61, 5, 79, -116, 100, -11, 32, -35, -106, -69, 28, -110, 9, -126, 63, -122, -17, -106, -55, 54, -6, 97, 28, -58, -117, 20, -4, -113, 95, -62, -107, 79, -9, -81, 17, 124, -26, -7, 100, 107, 4, 19, 27, 60, 121, -44, -22, -114, 48, 29, 22, -42, -15, 56, -11, 34, 109, 85, 93, -67, -78, -56, -36, -26, -59, 62, 12, 123, -56, 37, 30, 109, -78, 42, 3, 49, 82, 6, -107, -33, -39, -58, -11, -68, 48, -30, -48, 11, 25, -15, -109, 1, 62, -40, 0, 63, 57, -74, 109, -17, -120, -11, 126, 51, 39, -101, -11, 26, 54, 83, 97, -104, 46, 75, 98, -126, -97, -46, 104, -50, -115, 27, -22, -41, 89, 109, -127, -54, -45, 64, -118, -115, 54, -127, -62, 63, 73, -119, 72, -56, 54, 16, -112, -70, 108, 93, -18, -84, 85, -127, -43, -84, -112, 87, -127, -8, 43, 107, 123};
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
    msg.setTimeStamp(0.7653984468059055);
    msg.setSource(39130U);
    msg.setSourceEntity(70U);
    msg.setDestination(6058U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("GLUZAUBJAYSBECQPJVNVWDBGKMXQIDTRCLSSNXCFXZRYFUZJODITBCHLWMXQYWZYVJXWFOBDOERXOTAJLSSPPVGTHPRKXMHWQWELVBSPVJLFDHJMTFBKAKHRIVYZIMQUBUNGGELCHLCUZQSZI");
    msg.plan_size = 51206U;
    msg.change_time = 0.5259440937626183;
    msg.change_sid = 29779U;
    msg.change_sname.assign("HUZCMKWMQXJJBCZUNWFRDMYGWKNJLWAUFOPWYZCYBXDRSGPWOHPCJIYOGVLKXYEIWXMI");
    const char tmp_msg_0[] = {-128, 100, 83, -2, -77, 57, 15, 119, 106, 11, 122, -15, 56, -3, -68, 125, 68, -6, -120, -16, 115, -84, -84, -2, -26, -29, -107, -115, 107, 12, -36, -61, -126, -66, -113, 28, -96, 77, 12, 17, 104, -54, -87, -53, -31, -13, 50, -58, 83, 123, 18, -116, 37, -92, -59, 6, 6};
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
    msg.setTimeStamp(0.6055728586792211);
    msg.setSource(53915U);
    msg.setSourceEntity(88U);
    msg.setDestination(20821U);
    msg.setDestinationEntity(169U);
    msg.plan_id.assign("DLAUOOIKGDRYBQQSJUGVSUXBTXIEYZYJTLUQSWYAGILFEULMLMPUOTOPCDRHTZMEAEHNNAOCXNQDBMNTDKYVOFXSSJTJZEEQONJRCZWZNFTJNSWSPOHRQWPBQYYRMPBXCAUTCW");
    msg.plan_size = 2732U;
    msg.change_time = 0.9150967626349527;
    msg.change_sid = 50151U;
    msg.change_sname.assign("UNFOYVWRGBGOBPFRBSLSXBCXPUCMLIZEYEIOJPWAGBNRLWWBZQEOGPOIKOQUNVZXWJSVRGCHJRAKYSRYMFDFDZPDRCUZSVHJZSOMTPETINLKQMYWLCAXHGZKKAPQXEKMUFWPHQPYSGFCRTRNIXGIULHQCUVSJPMGJNWSEEFLTYXUVEAUHNQVDTOKQNIXBCGTIULXLCDVWHXT");
    const char tmp_msg_0[] = {-63, -110, -116, 93, 94, -83, 12, -57, -113, 119, -9, 79, 18, 97, 104, -96, 21, 122, 18, -126, -54, -96, -19, -30, -11, -128, 8, 119, 73, 58, -61, -96, 73, 26, -96, 117, -43, -15, 113, 85, -76, 6, -43, 125, -8, 104, -12, -27, -55, 2, -73, -77, -75, -71, 84, 65, -103, 9, 107, -114, 105, 122, 26, 122, -48, -3, 20, -118, -44, -95, 93, -107, -115, 61, 2, 118, -108, 1, -62, -78, -124, 81, -55, 45, -121, 103, 86, -36, -119, 72, 33, -107, 121, -49, 61, -77, 86, -30};
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
    msg.setTimeStamp(0.17715357419110156);
    msg.setSource(9616U);
    msg.setSourceEntity(106U);
    msg.setDestination(4846U);
    msg.setDestinationEntity(247U);
    msg.type = 14U;
    msg.op = 198U;
    msg.request_id = 19899U;
    msg.plan_id.assign("YASUYBTHLJBBEPESITJQTAUEVHVZODYERXDFTBQEUINYYFVIBUAEXWLYVDZPW");
    msg.flags = 14119U;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 1U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7316282750903378;
    tmp_tmp_msg_0_0.y = 0.6086491722042455;
    tmp_tmp_msg_0_0.z = 0.7676946006250193;
    tmp_tmp_msg_0_0.phi = 0.9737390503977257;
    tmp_tmp_msg_0_0.theta = 0.9620885873342393;
    tmp_tmp_msg_0_0.psi = 0.6766353517731493;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.5667413375436522;
    tmp_tmp_msg_0_1.beam_height = 0.3658367565068156;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.4968228081050702;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KXZWBDRWYNFWDGFZDOVGBIJUOGHQTNQXMORINMDRHZJVVBNMZMBJZNQ");

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
    msg.setTimeStamp(0.5940135919479138);
    msg.setSource(46608U);
    msg.setSourceEntity(41U);
    msg.setDestination(5638U);
    msg.setDestinationEntity(5U);
    msg.type = 183U;
    msg.op = 244U;
    msg.request_id = 31952U;
    msg.plan_id.assign("NCDAKOLYRFDVFAQWBLOKWHZAOPHEESMLRXHGCDKKIWAEBSPENTJPUUEOYXYVBAJTR");
    msg.flags = 44092U;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.2056566356183156;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PANMNEDXNPATLWXKUQDLXWGHQIQDUWVUVHHMJMNSFOTFWLVCBMOMGEKEDJRZFOZHXSISEYSYMYUFUKSOXSRKKHKAZXDLCDMJTHYMNYGO");

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
    msg.setTimeStamp(0.904814761789566);
    msg.setSource(27221U);
    msg.setSourceEntity(92U);
    msg.setDestination(58570U);
    msg.setDestinationEntity(77U);
    msg.type = 114U;
    msg.op = 132U;
    msg.request_id = 15301U;
    msg.plan_id.assign("FSEUNAUHWZECLMADCXGVOFMHLUSDBUMPAWNBCCGVLOBVTTTDFYZWMOVNXCTSJVDKIZMQIEBSGPJXDQKKKUCDRLOPFFYJOAAMSQZGRVOJEKNGHFORHCLYUHTIT");
    msg.flags = 11496U;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 107U;
    tmp_msg_0.snapshot.assign("TYBNFUTHISNETEPSBOUGNNNGTPHXZJAGCQHXJVXDMETKQJIDKSCKWAYUSQPGRBUEHLSIGIHWIQSJYWCVJZFHYIMZRYVXZFCBKKHUGSYOGYCKDQZXPJUZTLWQOAKXBQHPWCIFPDOMAWMXLNFRORBYNAVGFXJTFMOZFDBVUHADSKRIOVUZEDRDMEWEZ");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("OTJNWJEHBLIMWBVQENGKBKPHYHHXAMIREBJFSVJIWSCQMOTNMSDWYNRDCLQCTPQAMEUHGMKSBZKNTYUMBBFRZKDPXLVEZIVDPAKGFTXZIFNSFUIMCXIWJY");
    tmp_tmp_msg_0_0.feature_type = 140U;
    tmp_tmp_msg_0_0.rgb_red = 79U;
    tmp_tmp_msg_0_0.rgb_green = 29U;
    tmp_tmp_msg_0_0.rgb_blue = 67U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.46149670309675583;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.21615585210277022;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.001287759574880476;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NNCEFYHHKWXYVKJAVLFRDNHGMHVJNEUHXMANQITKEFCFDVDRSVOTBVPCQWJUMUBTCILGXDRIFESZBIPFQOZDSGVKMEYNUKGZSYRIWFDMXGUGWMKBRBUVALEGXHMKYNUATTWG");

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
    msg.setTimeStamp(0.744726634526813);
    msg.setSource(62290U);
    msg.setSourceEntity(67U);
    msg.setDestination(38079U);
    msg.setDestinationEntity(63U);
    msg.state = 111U;
    msg.plan_id.assign("FIDFXWPGQXKKTILJIRKYHKLMFVBBAPLFKCCUJVYREJRDUEFTTGUGSXYEQUSPMKXSVMDJZDTPGMLSVZDOCZFBNYWCTBMUYNDNZCOUBNJCBANCBLVEYRZRWVBTLIAAOPHDPGFAOJETOQPTXOBBXWEJHGLUGPQRSXUEJANFK");
    msg.plan_eta = 104403816;
    msg.plan_progress = 0.12529446243414732;
    msg.man_id.assign("LUEOIAQXZSXHVMHMGUULFHZRVTLDWOEVZKJUTOFYMTDNJAQOPXMVNUKTDFWIYLBKJSFOAHRXNL");
    msg.man_type = 8712U;
    msg.man_eta = 465808515;
    msg.last_outcome = 241U;

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
    msg.setTimeStamp(0.1941103613539964);
    msg.setSource(54747U);
    msg.setSourceEntity(86U);
    msg.setDestination(62719U);
    msg.setDestinationEntity(134U);
    msg.state = 7U;
    msg.plan_id.assign("IAYBYBKBDMVWNZHOPICQUABZWILVQEHIUEMLLIWYHKDSYKKVOQELGRPCIEICVJIVULOOWTRXRFPSNKALNNEHTFOHUJVWWUECYVZSJBSDDPCTIDXPFXMBYHQSTPGGHAMKAJAKWPMQHJ");
    msg.plan_eta = 1239545524;
    msg.plan_progress = 0.9074681093589086;
    msg.man_id.assign("HCIZTWLJNTSBSWHYCPRQUMMIPSBTAPWXAAEXEHQZWSYHMCDYVQNYLUQVKVTYYBWGJLEKQAWGNJZDFXEMNMNJDCRRVUKJOFYGIPUCUFQTUXPNIKCVRFSGUFAUZPPRZRKDLEC");
    msg.man_type = 5677U;
    msg.man_eta = -552356840;
    msg.last_outcome = 122U;

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
    msg.setTimeStamp(0.4654613265107038);
    msg.setSource(29426U);
    msg.setSourceEntity(165U);
    msg.setDestination(30811U);
    msg.setDestinationEntity(27U);
    msg.state = 31U;
    msg.plan_id.assign("PTEVIMBIAHGKRVBNFLJHEGJSXZAEUGQMWNHRCRWEHSAPMDTNRPEJQOETOWIYJRDSLZALMRDAYWDKNSFUFMGYDOOVBWTOVZUMTFIPMANVGEUSJRYZUGTSIULZXZFSODWCQNCDHKHIXAIBXCGQGABWHNCELJGWVTSOXPVLPPKRJBHAUPY");
    msg.plan_eta = -1951773016;
    msg.plan_progress = 0.31721594189415003;
    msg.man_id.assign("CROKAEQUJQMYMYECSNPBNCVDHHKPYPUSEPPFUIIVUZALIPQXRNOCYINRLXGBALFXWGUKIKR");
    msg.man_type = 49435U;
    msg.man_eta = -1364156774;
    msg.last_outcome = 195U;

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
    msg.setTimeStamp(0.05638225825718757);
    msg.setSource(16375U);
    msg.setSourceEntity(224U);
    msg.setDestination(58150U);
    msg.setDestinationEntity(117U);
    msg.name.assign("GSFSVLXIZFQXHFYFKHHOYSQJDKOUOYGZPCLGDVATAGUINJTTMRIPDK");
    msg.value.assign("UAFWODOYWXURRHTKEGRF");
    msg.type = 15U;
    msg.access = 194U;

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
    msg.setTimeStamp(0.35337534034477036);
    msg.setSource(53293U);
    msg.setSourceEntity(88U);
    msg.setDestination(50837U);
    msg.setDestinationEntity(155U);
    msg.name.assign("QPHTCPQSSFXBIOHNRNZEKNPMLVDZHVBJMNXTAFRKAEUKVMJRAHEGGILWTNCUWKCJBMZCWKIAAGUWXJPORJIECRTDDIUDOTVAPPPBGMIFVOYWCVRYEWSQXBCQWUAGDUGYOGTGEJDQKVLQVUTZSNLZRKJLFWODMSHJHTIQAFMYCOPBIZSYUKRXEGURFL");
    msg.value.assign("ZEVJOKISOJBHTLORVYGOKTAVDQOVBQLSVWZLAURZHNEWZFEZLIIIRMMSCQSJYVZCHAPHNQKBWRWDXAUFCTIJDKMRHSCXLEOGEAKRMWOXNTBWQWICNEKEUPZGEYPJYWQCRYDCZTTQDZBONIFTFNNUVLUIHJJIEKAATUSGPFABNUVUUXHPLMJVSXDFMYMKJ");
    msg.type = 138U;
    msg.access = 121U;

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
    msg.setTimeStamp(0.4851290816756505);
    msg.setSource(32427U);
    msg.setSourceEntity(181U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(242U);
    msg.name.assign("HLMRUDLDAYTCDBVYVHAHJGQTJFYWCTSXPJSWZGAHVNRGYMUBUMJZKXIELLLJHUEEKNLHBDUOSOQEIUAHCTXXHPZRXHTDDQMTECIPNVQQRRNCBUSRZSGOOUVWMPVRO");
    msg.value.assign("DLXTCUSVQYGRCXUKUIBWVGGKFRC");
    msg.type = 25U;
    msg.access = 242U;

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
    msg.setTimeStamp(0.05672643918388043);
    msg.setSource(27043U);
    msg.setSourceEntity(245U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(184U);
    msg.cmd = 119U;
    msg.op = 40U;
    msg.plan_id.assign("PZHAENQXQWIZSUJYEKUGSFEFLX");
    msg.params.assign("NTQCPKXINWIOEQNQZPGEMTZTVSWXXYIRBEMAFCLIWGZEXAKGEBARWEYDGOTHVBZXQKUZSSTVCVYYHFIMGFPNJWSFRDNJKLYVLNHFDZWUPJBAIVIBOCCORFADSZQUXUMIINKZCSXFHQXMXUMRLGUEPQDEYKLFORKNGDGHCTYPKS");

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
    msg.setTimeStamp(0.5842533870427389);
    msg.setSource(7508U);
    msg.setSourceEntity(178U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(246U);
    msg.cmd = 170U;
    msg.op = 79U;
    msg.plan_id.assign("LWNMCFYENOQPRSYKPJGPVINLGBVAIXHCUBCRTRVQWPESOPEZXNSUFBZTSMIXKDHSREVSYJIXXMTLPDJYUAAHZATCG");
    msg.params.assign("GAHDKCHFGSTCTHFBBGNFVDLYFJJCUYCUGCXPEZLMUZUJNOBQEBQOBREDZQPAEMOHOCDFMVLGZOIJWIGXRHJOFRUWEPQLISNYULWVBOILQETWSIDTBQVMLVSCGOVFGTCAVMINTXWHIQFDLSYDRRACXHZGSITERSZKLTPPBSWXMJUUEI");

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
    msg.setTimeStamp(0.8399255451068787);
    msg.setSource(31026U);
    msg.setSourceEntity(64U);
    msg.setDestination(61114U);
    msg.setDestinationEntity(191U);
    msg.cmd = 142U;
    msg.op = 55U;
    msg.plan_id.assign("HOIGQGMGMTWEEFAQXXZTYPUMRXVVFWQHMVKYUJRTWKLJSBJYZCTNIGAIZORQQGIZLZNFYHPJKENHLTDQBGIHNBRCZUMMCDEBEONVHIHDCBQXOMFPDHWTARFSMAQXDWPILXNVSLDRNBFKII");
    msg.params.assign("SXYCJOPGDTKEEOKZVGWATMLOEKWXOTETXZYFJSYWQSRQQKFNFAHDMHPEOMTDVIKUAUMNKUNBMYFJURLQVLCENASHPCYMCXATSGVFGUUEIYBGHFNDRGQLURIZRDWBWJLELVAOJIJZSDGJQYFNDRIVBBLPFBGXBQXYHCHVTQIWRLZRWCRMPXOMXGPDVTDSHLXCUZZTIGCYVZSMWWLWRYHAOP");

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
    msg.setTimeStamp(0.503892583829552);
    msg.setSource(31832U);
    msg.setSourceEntity(250U);
    msg.setDestination(923U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.9206989529655094;
    msg.lon = 0.9249927833318023;
    msg.depth = 0.740007541909273;
    msg.roll = 0.4510373359957972;
    msg.pitch = 0.8450910340284924;
    msg.yaw = 0.1359695209981322;
    msg.rcp_time = 0.7454194576137234;
    msg.sid.assign("PQTKONHNDOLGHXIJFDYERGTUSZKAOZBFCPAYAODRHDPDJSXKMXYRHWVSQUDLYAGPJPLZKSBLYIRSNFUEOCLEPHZLJFMSZHXVRXCWYXWBQJYXKHZDNWUNVITLT");
    msg.s_type = 92U;

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
    msg.setTimeStamp(0.061161973906069256);
    msg.setSource(34451U);
    msg.setSourceEntity(175U);
    msg.setDestination(23480U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.29452305863892714;
    msg.lon = 0.6769673884485095;
    msg.depth = 0.5970161678270736;
    msg.roll = 0.5457769492528372;
    msg.pitch = 0.8618962387639646;
    msg.yaw = 0.9006504037148221;
    msg.rcp_time = 0.3192337780661737;
    msg.sid.assign("KJCTYUDQFWHKNJSPYLXVINBNIQVCXOKSQTXMGWHYFAAYSIWJIXP");
    msg.s_type = 111U;

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
    msg.setTimeStamp(0.004470377213850241);
    msg.setSource(51938U);
    msg.setSourceEntity(249U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.1393636817458882;
    msg.lon = 0.002317663746354004;
    msg.depth = 0.7203298522585054;
    msg.roll = 0.9883790664972997;
    msg.pitch = 0.6220134469375705;
    msg.yaw = 0.45507275687971527;
    msg.rcp_time = 0.44701298926532684;
    msg.sid.assign("FYWWTAIPBHRTDUDGDDFUFYGMWNEWNSQMSSFUZYLAXFDSNPZVIMOZAHQBDDMIGTVMDJMRHUHNAJCULZTZVGPXIBHRHPOPNTIKLGCALPUOBWLYTUMVZESTZXUEVXOMSHXGKEIHCVCAOOGPGAWARJEBWJSLJBIEYJCXKWKYMVT");
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
    msg.setTimeStamp(0.5752822953871791);
    msg.setSource(56769U);
    msg.setSourceEntity(61U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(252U);
    msg.id.assign("UIEZEGTOMTDDVZAASGHGRBMFFPBCMVWVJKHQRXWLCXHYNPCIKACGYYGUZTILRGWFYDEHGQKDDYFJZQUSUOVOONTVLYSCFIIJEEIPSUSLAHSIH");
    msg.sensor_class.assign("PTDCTYJYQHFOTZZRURHKWRHVWXSVPQVJWNIBDCEUWZUWLSI");
    msg.lat = 0.2871036229882584;
    msg.lon = 0.6769237331167288;
    msg.alt = 0.7181784974644715;
    msg.heading = 0.8872477984827104;
    msg.data.assign("DTDJJFPHNWRKOJONFPWZQWRVLFEYUDKP");

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
    msg.setTimeStamp(0.4828863842035299);
    msg.setSource(63312U);
    msg.setSourceEntity(111U);
    msg.setDestination(37374U);
    msg.setDestinationEntity(213U);
    msg.id.assign("JLQQRDPTWEANZTBLPMPUXOJNMKXSAUJKRJSVMHYLODSILUSZXQCDXYVGMPQNTOVDWFGCOOUQVFIGEALTNCJWNHUJMFUDCLXRSMXIDONAWKBKGHGTFMQEQFEHMRYBZBIYRPZXKESXDBZSVGPKX");
    msg.sensor_class.assign("TGYHJDOWTVLQUPBZXCJXCANVSAVIVZSASIMZELHTXREYAQRRPJYFQZZEGUIDIGPMZVKMQECQWUHFNTUJRTNFDNRNFKF");
    msg.lat = 0.08982208574121908;
    msg.lon = 0.10202628907359146;
    msg.alt = 0.4882146525560088;
    msg.heading = 0.17124565313286055;
    msg.data.assign("MJNLWGWCTBFATCMLDIHZTGUDNQRNVBDZNPWMAJBFSDSSBXTFJFIQYELOHIZEBRUQRQGNBAZMWFHCVKSHVQAQPWDNEXIFRMVTPEEPOZADSNAWAFWWOLDLQJMSGCHJXEQJUUAWBMOSUOVDXOLZPOEVUYGXKZTYRBYYSCMEEVPQOLBTCFLYKAMXAHTMGIXEKKGGRIK");

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
    msg.setTimeStamp(0.8429174468927678);
    msg.setSource(33236U);
    msg.setSourceEntity(175U);
    msg.setDestination(51853U);
    msg.setDestinationEntity(113U);
    msg.id.assign("VGSQBWDLJWPJNEIOOCANIZEATVBENPHWLHOYUOTF");
    msg.sensor_class.assign("VLNSNQZUGWLJTJMQUTLZLRYNRREIAJEVNMPDBHITFMVUFIFXROEOBFNOSWXUELDBLQEBZDKNTMUPYCGTDIAQXAKIDOCAPOGSHXTQRRBOPGFWWQUICLHKAWNVYEJPKSVSKZNSGPCPTDBAGDVCZZHBTVXRMSPMPMAMJYXBMVALYJHIY");
    msg.lat = 0.8228222662624805;
    msg.lon = 0.7234911216066627;
    msg.alt = 0.2898573456658422;
    msg.heading = 0.8944212107782837;
    msg.data.assign("AFSLQALGIQSYRULSURRVQODWBVIQJEMZWVKLUMGGDNXNPFYUZPARETHSPTPKMNBWQMWMPVDLGFFCHYKGFKJDYDKPJNSWESECUOUIMJYXHDRUEYVCWGCCPVVQWLORKBHEVZZKNBHECAWTZBXNJHTNYUFGDTCFEYYHIZIHGQNDJXWOAIXVITLJJC");

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
    msg.setTimeStamp(0.08525379848889514);
    msg.setSource(64243U);
    msg.setSourceEntity(109U);
    msg.setDestination(50166U);
    msg.setDestinationEntity(98U);
    msg.id.assign("IYTBDYSUDTCWIJBOWMWMCOGAFRKXNRRFDJVQLBAEVUALIAJOJMYNQNWZSXNVLHUUVSSLRPJKPNMVXQYYUDOUYPCTHZBCWLMZNGOIDDGFCRREIHFVASXYAQWRFMEYLUIOGZHJFBFHJAMXBJQPZEQNNBXUHWTZBKWHGJWPKGDKCVRMSDCLLSIFJGBYEBPRPQEAYXGXXTMZTOKSFVKEVNWLKGTODTAPLQNZDMCEPCKZEUIIHQAIVUKZFGRT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NDUCSWAANJGQNDIXPCDBVJHAKAQDQBUALRREHDPCSYTMLWKJIXSYEHMJLYUZTSLOCPTUDTLEMNPEGOTGBIRUSQHSVOIFNCKRPXTJGHNABIQYDVIBWFWOTZIREHFGOEGSMZELGOFQKAFLPYPWBLUF");
    tmp_msg_0.feature_type = 185U;
    tmp_msg_0.rgb_red = 216U;
    tmp_msg_0.rgb_green = 143U;
    tmp_msg_0.rgb_blue = 1U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6772274332748729;
    tmp_tmp_msg_0_0.lon = 0.6515156858941161;
    tmp_tmp_msg_0_0.alt = 0.2948549277861361;
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
    msg.setTimeStamp(0.5848228900640964);
    msg.setSource(5885U);
    msg.setSourceEntity(27U);
    msg.setDestination(6849U);
    msg.setDestinationEntity(178U);
    msg.id.assign("DBLERSNPSCTJQSNUBQMJVQAMGILPTDZHTZTGCZSBNSBMHWPMVSJXYNQKNOWOZWLEOPLLMZXEQINVQHFYVMCOXRSUATU");

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
    msg.setTimeStamp(0.25299416936725616);
    msg.setSource(25121U);
    msg.setSourceEntity(249U);
    msg.setDestination(19785U);
    msg.setDestinationEntity(162U);
    msg.id.assign("PRCCOIPSDBIYUDZRWFMRZGAILWBYSTVCGTXMGWONQNZVETLHCIIEFKZQSBBQESORMDAGOPNECHGAGYUMSDOMBJQVHNKLSSAVMHTVYYKKZPUOOFTH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZFLAIWOPOWCSENTTUFJLXPMBQDNNPMUTOUFMHEARGGPYSSMWBFKYTDKJROXAANQDNIUPSGUYQITWEXQZEXXQUDMHESTDBC");
    tmp_msg_0.feature_type = 205U;
    tmp_msg_0.rgb_red = 61U;
    tmp_msg_0.rgb_green = 220U;
    tmp_msg_0.rgb_blue = 230U;
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
    msg.setTimeStamp(0.5447724377117609);
    msg.setSource(17321U);
    msg.setSourceEntity(43U);
    msg.setDestination(32819U);
    msg.setDestinationEntity(47U);
    msg.id.assign("DUIUQVYLDJZFEGGNDCTSNDSUIPNHFFFYOHITERCTDQZLESELIIUTRPMQBUMPNFKTSKMTAXHWKWWXRBXMYPAHQOVBFDECGKCABMQSEHHSZOQOVGHBCGLBLJGTIBZGEUTDVWVYINOOLVCKPUCXMCOSYNUPGHRVJWYTRZPWXZSCQADLLYJVNSAKOIYJJXTRIXXRVWEMUKOJNGSQURMQIAAZCPGFKWKJNFZ");
    msg.feature_type = 204U;
    msg.rgb_red = 235U;
    msg.rgb_green = 188U;
    msg.rgb_blue = 245U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.08747102164284437;
    tmp_msg_0.lon = 0.06451741028845503;
    tmp_msg_0.alt = 0.41275680084401634;
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
    msg.setTimeStamp(0.8200218700426182);
    msg.setSource(13148U);
    msg.setSourceEntity(183U);
    msg.setDestination(49865U);
    msg.setDestinationEntity(193U);
    msg.id.assign("IOUNBBBNOVTRWUKNALKOODJHJIXLZGOAVLBZCEDQOVFRAFDAGEWKPFHVVYBXCXMRJCUSXSHEYINCJMUMBTTVZHTJRBCVNKOLWNISQBFJTMYRIEGGKPWHNEQSMXQYCYRKEGSGLODPIWLRPHSMHRRNQFKQCFWEFLZC");
    msg.feature_type = 18U;
    msg.rgb_red = 123U;
    msg.rgb_green = 243U;
    msg.rgb_blue = 242U;

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
    msg.setTimeStamp(0.9274991952751045);
    msg.setSource(10301U);
    msg.setSourceEntity(226U);
    msg.setDestination(30736U);
    msg.setDestinationEntity(101U);
    msg.id.assign("FYTKQSSYSCNYLPIOCRWTJOTUAMRIBLDNDAZAJZBCLXPQUQEKNMPNYODMLTCZGEFIIWHWITMROJBQFDFZDFFLRYHQZUULRJWCEWUTHUAPSYCXEZVLTOAAXAVVFKGEDMPFJOUNXQPRXEMBSDGORICMJHGNNQJMDIWXBQVYWVWQXVBFSGMN");
    msg.feature_type = 226U;
    msg.rgb_red = 129U;
    msg.rgb_green = 202U;
    msg.rgb_blue = 202U;

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
    msg.setTimeStamp(0.6934232277788809);
    msg.setSource(25671U);
    msg.setSourceEntity(135U);
    msg.setDestination(37505U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.546093014958016;
    msg.lon = 0.9939634995198747;
    msg.alt = 0.8550846796842099;

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
    msg.setTimeStamp(0.7462276405015107);
    msg.setSource(65116U);
    msg.setSourceEntity(108U);
    msg.setDestination(11438U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.7659320432903779;
    msg.lon = 0.45750857713228876;
    msg.alt = 0.5962949528993967;

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
    msg.setTimeStamp(0.8844398404634122);
    msg.setSource(19495U);
    msg.setSourceEntity(43U);
    msg.setDestination(44993U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.5778909849489916;
    msg.lon = 0.40313958694388774;
    msg.alt = 0.9670862937028587;

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
    msg.setTimeStamp(0.357348735021111);
    msg.setSource(23416U);
    msg.setSourceEntity(228U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(27U);
    msg.type = 90U;
    msg.id.assign("KNZZKCGJIJYNIKNEPXZLTBUOLRCAPRZBVQBODVGJEIDHMBMLEHNNKOWDUIPNYXVGFXPAJYTXYFWQPOKTGQDDDKOXFOFPFZRCYUGBVRGAVWUJYAATVBEFWPZSHBAHINPNGOHJNZMMMXUAWZXIOOZORKELBTDGLPFVAQTFLHTTJQVVGSNRDCMVSAJEICCMBLXIQUSXEYIRSSHEHDMLZWCRKEHYJCFLLWSRKKU");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GBNLASUYPEAJXZDBKFEXTFKAFBGCZOFJMUTNBHURTWHYAZQBVVLGQTLLSGFWTPPXXUIHTKTMQSIXANOHIMHOEPGCDTZIUKUDSWNUNWPKPHJK");
    tmp_msg_0.visibility.assign("LLHFGZIYGGWMPUQGIHOVNBDRULYAGDJVYZGSPGZQDFVRKKKKASFCQUFZQWTIYAOFRKPRSAKCJTWPFBCMCIDOAXHBERENKCIKVLHWYVTQIVEZSWRSHBVATNYPOOTAJDJTNDYITFNOQHHXMQLUJRBUNOQXCNNZUEFGPYEMIDWWXJXJPSSBEESWUTZEBTHXOZCDEGJOAGZPHNLJXWXAAJIRMOMBHDFBUFRQEMKLWYCSXUPLDVXMTILCCMSBVNQ");
    tmp_msg_0.scope.assign("NSNTBJXUTUTVJPAGWSNHJYGORGFZEYDNJRYXFMSKOJKOWIPCLUHPEIPEXUCRYZFZRBNHQQDARSGLSBLMBLRIZYVHXHDFWMEAKGVADECZOZVVNSRT");
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
    msg.setTimeStamp(0.9875232914121109);
    msg.setSource(7746U);
    msg.setSourceEntity(161U);
    msg.setDestination(26920U);
    msg.setDestinationEntity(220U);
    msg.type = 144U;
    msg.id.assign("XKKQDSNBUZTMBSDKZOSTVGICL");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.46707837881259706);
    msg.setSource(31190U);
    msg.setSourceEntity(168U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(191U);
    msg.type = 103U;
    msg.id.assign("INZDKTVOBABVFWEPWSBKRJPCBYPHJLQJBZCITSSCWYITPFGCDN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODLIMILUVBRARDTWKBOLSABGPPEZZGYKUYVKNIFWPZZWPGCZMMHZAXJDRQWZTPDWQREWHDEQBQYHGNFXVISOGALYSSBFQQKNLXILWWKSGMYFPRYKCUFLATXRITQHQOGBHPCSSAZMQVCULXINBYJXLHAQVREFEAMGOKTMCBUHESHRKEDFWKZNJJUDXDADMIGHOUVCANXUYJTOTNCCURMTJXJCBPVTITNOYKWRJSGMZJVDFPUJCOONVFSPEB");
    tmp_msg_0.predicate.assign("RMHTDASIIKMWFAYBQCUUOUKZBPPWVSNIUNMBHZ");
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
    msg.setTimeStamp(0.5325139437720867);
    msg.setSource(8538U);
    msg.setSourceEntity(140U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(17U);
    msg.localname.assign("JYWMQGDAWNLBMWUCPUSOVRHTEMZUANINSNZHFRLLTFJIVEL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WANBPMHJQSABGLUPIQHHNCPEWKPPXMUDISDVKNKZUKFXROYKKZPLNAQWVBEGGBLUSLEIZWYRUVEWVWDOTIRAOZGYCFBQCIYTFXNZWXGZTAJPETNHQKUYHEQDLUUOROBMOJQOXNVCRZNKUCIJBXYUHAXSOLMVRTCHLSXFFTZBGMKMDREDNVSGHGI");
    tmp_msg_0.sys_type = 198U;
    tmp_msg_0.owner = 18214U;
    tmp_msg_0.lat = 0.18008244802702367;
    tmp_msg_0.lon = 0.7626628059686656;
    tmp_msg_0.height = 0.4252221212658457;
    tmp_msg_0.services.assign("AQZCMGGNTBBYODBSCHPWGEEVQTYTG");
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
    msg.setTimeStamp(0.7244167612649023);
    msg.setSource(43941U);
    msg.setSourceEntity(3U);
    msg.setDestination(36125U);
    msg.setDestinationEntity(13U);
    msg.localname.assign("VERKOBVOVZQUANWHHANZJIMO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HJADGASBHIKKDYIFWJMOIAUVRDBIWGUDGQQPLCCSOFJPDRJGTQHZYTMKDWEAZMZDWNQMOHOZOAARTMUCGNFZCSPAEJGYUPSHXLCTRJ");
    tmp_msg_0.sys_type = 29U;
    tmp_msg_0.owner = 26113U;
    tmp_msg_0.lat = 0.8607569779913845;
    tmp_msg_0.lon = 0.9696430232034936;
    tmp_msg_0.height = 0.38732394106558754;
    tmp_msg_0.services.assign("YKKDZEEMZTPQATJPUAYGDGLVBTUFKJLKRSOEEHIBDCSEMXRNHYWJLYGNRAARFDLHXYNCKZHGLECVRTCNPJVSNDWVUJAYZHTJDOAYAWOIFVBQEZDUBXBJPUIMSMLCSDAWIUYGPIHHIOZCMZDXXIIOILPUMWKKVQMFKJQVOFXT");
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
    msg.setTimeStamp(0.23803916287770066);
    msg.setSource(8583U);
    msg.setSourceEntity(138U);
    msg.setDestination(59907U);
    msg.setDestinationEntity(26U);
    msg.localname.assign("IZITWHFJEKBVNIZASNMRSFODVLGMOASFPDPRMZZXFXNYVJCQJSJGXIKDYUBRKVFMEQBUUEMJRWJPZOQSUPTHJMNNSDOVYLQMDUHTZUVFAXPHHVDYQCYNGHVJLQGNNRFECIRWWFRJVJKDBPRNBUPYLITMEWDOALKQCBDSGORUPLYOPTIZA");

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
    msg.setTimeStamp(0.2851484042123139);
    msg.setSource(52050U);
    msg.setSourceEntity(149U);
    msg.setDestination(12181U);
    msg.setDestinationEntity(158U);
    msg.timeline.assign("XTLNAYGSTDKCCHNEXYQBFXAPDSOCRBFSNRPGPCLEINJMGYUHDNEWBTLGVJOK");
    msg.predicate.assign("QDVUFQWXVDEKCEPSNTYNHPOGBGJVEVSHIODYNKPABHIKTTHIPVJQRSKTMWSEPOSBGJMBAFBRHQUFWICPZFCZCNDZTABRDTIKMCKWYXXEEBYAUVAVZUKGUJLWPOFGNQXBLYZUHTDFFQLIWLRQGNLSIALLJMSRLVTEXLM");
    msg.attributes.assign("UVFUSWNFNOZCSWGRXEFEDAUROXLMGDIHMGMELREAWQOFDREWPRMHTIAQPJYCOHYZBUSB");

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
    msg.setTimeStamp(0.8159657500143666);
    msg.setSource(21837U);
    msg.setSourceEntity(224U);
    msg.setDestination(4873U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("OJFIBZFJYWKHPPIQCKDTQGXSTBVJGEXPUBUAONRYDMMZRRHFYBDWKSFVDEEODVEWBHNWRGACIETFKFUSOLMPYRZAGJMCWBTUFIKCQOMQLNJAGQCTCUCXDWHXHRWEEAEUEYBMBGKBOZKIYVKMSXRNQOSPLGVILJDXZGCKJXZNM");
    msg.predicate.assign("TZYQRGHBSREWAIGSRJTVJRVCLHXXFEPMWRNVBTJIYRQVYVZFFCOPAIOMHUCXWYDJMKTVHAUALQSZCBNDWYTQQWXOWMOJAOBGZGPKEGIKHUOSYAMDJIHHEXBMBCCLZLSYNNQKZGMPTQGWOSDHEJFVFNPCDZWRZMTISCBPDGXEKFNIDFVGJMIWEBBEYNDXOAOATKUWRCUKQLNUHUJLRLLIRQLTJ");
    msg.attributes.assign("ZNBTPYTRAIGDEOBNJEQTPSQNSMWUKVDQIIDTABFFQROFUEPIVOOYLIOZAXASUCFSVLGKBVEHNRDJONQBTFXHKPWCAWBVALXPUPFIEWFUNZAUDLZDIZMSCRQEHHPATJTEGLHXUFUHKXGWVJHMMTJWXZQVAKCTLDEZZKOVJGIMLRVHVBOEJ");

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
    msg.setTimeStamp(0.39526031886878843);
    msg.setSource(47703U);
    msg.setSourceEntity(31U);
    msg.setDestination(8701U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("XSPTJRUPVCCJMYZQLBBH");
    msg.predicate.assign("EYFMZCNJILERRUUQEADUJWVRBILWFOPZQQIHKJJOTWHMMMCRSPDQEGEAZVVPXZUVAMUMZORUVWNZLSVHTXISUOQYNNNQPXSBTCNF");
    msg.attributes.assign("NCUKQWJDFZHZEOIFFHOAOXALPXYBQSKRQFNGTJJWDDOTDEIPMLGWPDCSSIELXOVDYXKEIIWCGZROWXECTBTBMFQYKVOYTVRRIDXKNGNOUQXPWLBJSNMSYPLYFBVRUDIYQHNWUCAGQVMXJAVPZGOBJ");

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
    msg.setTimeStamp(0.4922001593139108);
    msg.setSource(36133U);
    msg.setSourceEntity(103U);
    msg.setDestination(14649U);
    msg.setDestinationEntity(37U);
    msg.command = 196U;
    msg.goal_id.assign("DMBDXGUMKTCAKFODVRYTXKLXABPHIZSYTDNZAFHPTEYLBGNHBWFPIDKISIDFGROF");
    msg.goal_xml.assign("ZPCAQGVNUXDGVPTHI");

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
    msg.setTimeStamp(0.16854765536023963);
    msg.setSource(62582U);
    msg.setSourceEntity(233U);
    msg.setDestination(21556U);
    msg.setDestinationEntity(110U);
    msg.command = 10U;
    msg.goal_id.assign("NFCUQYXTEPFREMUEHONEIVVUSRGRYWQTJVLYBTZDZUWGMVYIXWQ");
    msg.goal_xml.assign("OYBCVMEJXYMQDLESYYEQUTDWPHJHIFPMVWWWUVIDFSRTAOEOBGFPELBDVKRTOJCKGATNOUVTLFHZCKBUXILELGWJNZRXIEDKAZRKGO");

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
    msg.setTimeStamp(0.11201470667516611);
    msg.setSource(30458U);
    msg.setSourceEntity(66U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(79U);
    msg.command = 135U;
    msg.goal_id.assign("QHYJEGXZXWVBUZUJOZJAEKNCCOOKAPYOLKOVGSNODTMUDEXMJLHKGADEPXVARWLFGRPMLBVVXYEWSCULIVRPRSSWVXUTOWHCYIDCYEJYXVIRDHSCFVKPTYTWQKINLFZMTPARQKYYIJJPRZMGOFBZWWUMFQSKQBFTNLNIHEHGLTZMFMAHYBPUUGBUH");
    msg.goal_xml.assign("QHNSVWGLAAWNMYIVHEWXTAZGDBMFXRQKTHOYNGCPZZTMCEXVAGHAFMJWXSRSNIOFOKRUDPVBLSYUBYIYTRMQMPSNSGSSBMETJCZFDDEENRUBKYIUDBRJAAXZVOFKTZKWUEKXTALPATWQLDPYBQPRLIRSJLIPYUHSHJICLCQWNEDVEQJXGUMCQQYMOXPUKVPXJJCPFNCAZVDLKTOWFTQHWRCIGCFXDRGUE");

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
    msg.setTimeStamp(0.9172026696824404);
    msg.setSource(10783U);
    msg.setSourceEntity(237U);
    msg.setDestination(42712U);
    msg.setDestinationEntity(55U);
    msg.op = 189U;
    msg.goal_id.assign("NCQPBKKUYJVBFGESBHIQUWHNTVRJGCKZSBYWUDFOLJZCTOXYERBPUZQCRSKYALGOTGLMHRXUMAGQHHGFZWJZOJOEPRJKYWXQROXQMTGVAZORUZIVEBENDBTKETWVDVHWCWPDELJFKMNNPYMBMENIFCSMSDQVGIPVUYASCLHYIITHRDOSANAUSQCDUQFILNQFELXHJWCWMKOZLIKYXPJKRTXXYASRIBSJFAXOFNCDPDUALAMLNPWZV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XWVXPLLHGEHUMYWPWRZBNDLGCJXTBWEFJKXJNMOPYNRLQJAVCKTZJPDFXCHWAPZVFHOSULIJZEZMHTSYRHCGWBYRTGBPXAAHPIZVBRHOTOSXGDVSKOWBISVEKFGNQYQYHNOLVRMQSIDEOYRDYCNMTINDRPUGBQMELCZOF");
    tmp_msg_0.predicate.assign("SKWOWQARXCUUWTOLVNYGSMOTOUSGFBSCDREAWVHUPFMNFUEVHHWZGQDISBNVCXKPYCCCMFLCEMKIWWFRZKLSNPIXBBBSDDIKWPXBNIOMYPQEMYFVARCUVBKIIAREDQRKLKJLAJLYNIYSTLGPFDRDTVFPTRQN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RPBEDZABVWFXBDAUYXQIHBXEIQSMKORUGGWRIAUJVVBIUPVEBH");
    tmp_tmp_msg_0_0.attr_type = 6U;
    tmp_tmp_msg_0_0.min.assign("LNHZELWHKKFIRBSEKEWMCFQTEFIQHXBOJCIRHVTVNPAOEXASNJFOWRGVGKSCQYGYIEARRPAPYUBBKLXSGQUSXZKTJVIMACCQMNITVGHXRZDUMVGUIMPDYDHJDUTDSLKWQMJYPRTFVKGSOBOCWAZQLZWYGXDJPEWZNOJOCRUWKMTBCPZXUNQBZHOIENXVNUOSAADDWGVJFPVTEKFUHYMQNPAOCLMFHRFELWYBSZPXTRJ");
    tmp_tmp_msg_0_0.max.assign("EZODCMMMQUCREROTBPOOCSJPGGDQGHWFUWBDTHVPOTFEGMWEQKGAPASZINRQOX");
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
    msg.setTimeStamp(0.7290666169768518);
    msg.setSource(44636U);
    msg.setSourceEntity(18U);
    msg.setDestination(31431U);
    msg.setDestinationEntity(5U);
    msg.op = 160U;
    msg.goal_id.assign("ODQVDJXSGKTQDXFDLPKHZTQJPSJITZMQPAAGCOWWBWMYTFAFDUXZPQUJUPDPNHQYZNSNTAFKMLFMOHOHXWCMCVPQRKWHPYYMFTGZUGFHOVEUSBBVXS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SDRANGIXQDMFHXNYRQAZJGWGPDLEWTSYRADCZORFEKXMOKYUVUCRJIVVFWLEXDCURSXYDNJAGYVFKJSWTOIEZVBNUEYLNZPNAGLAQKXXHGLWKDQTKCJHVJQCSVPEWNUFQUVFQLNHJESMPSLGINWUHWHICBAOMWFFYFBSFRSJTAPMBMCOCT");
    tmp_msg_0.predicate.assign("ZACOGHGVLMKEKMMFJXUHDIUMNRBCYIRFFEOCHVJTKATZOSZCLDUAJSGQRL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TGFNEEAYXKEXPTWVXZZIMNOVVSPNWQGCAIYCADFQIAZUHWBOQKUHLSRENMHOAPORRQQJZBDVNJYMSEEITYLZKJJLGNAPWMCVBJUQEKGYXLBZCDHRIVUBGMNMQSXBILJTFSDQWPIBFAZGOPGDGHICRVXMCYTRHKPPFBEAXUCCFKSUOFWBLJZJYZTKTTQEFHMNLVKMDSLKQOUWSRHUFEZGYNVJDADTOOPPMGLT");
    tmp_tmp_msg_0_0.attr_type = 239U;
    tmp_tmp_msg_0_0.min.assign("UPVFQBWRAAHXSIITBSCXEQZWOFMHDYHQFGGLHKEAECYGCKHDNRREYDINZBXCWFJEDJLMRNQXUBJOTSANIKTNJGQZRLKPHMNDREWRYYZKHWEXITVXLPWLTFPXFNELRSNCHFIXSMOOCPKVZCBVEGBKVMMQUJVMMUQBYFY");
    tmp_tmp_msg_0_0.max.assign("QPMFJZWIHUFHXNUVJFLWSEUSZOBJCZKKTKBQGBQXASPVHK");
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
    msg.setTimeStamp(0.5090761913835503);
    msg.setSource(52600U);
    msg.setSourceEntity(239U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(114U);
    msg.op = 200U;
    msg.goal_id.assign("HKIDOCJTDGLROBNRFJKONPJNZIAAQPJLMDQECOECKYCBHBQDLYBRSIJUNEVXORNTELIYWQNVAUMHWGPRFWLZVEUUTPSV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IMHZZULKUFQEXOVZVWGUTDAGJMRG");
    tmp_msg_0.predicate.assign("ZISYIYZFZLTPGIYPRKGEXFZEWATEQDKWHHBILCUJZALBBNFINHDMWMXNLSNUKNEQFGQMPRLSVGCWSCIYSXPJBPYAEEOTEBLNTJVYQHDDVSQHIGTHZMIBVBRORPQQUWVJJZPFWXOXDLOCVFCSRAMMABNWWZVSWNAGUJHTPKRHDKXURDBKRJFCYEORTFIVEUQMLVFWHCJAKCUKMAUTUYFXJKTOOGGMUCJGYDS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BESXNMWRPTIQXWIUZUWSTWXWBZKJMHANSRFJYJKFVYWOOKBNKLCUEHRMHSB");
    tmp_tmp_msg_0_0.attr_type = 203U;
    tmp_tmp_msg_0_0.min.assign("CNRXHTCMTFOHWDTJFZVKCNGMKXAKPBVCLGRKQKYIDTSKJXIEHEIUNMAJVROYGAWQUCPVAGIRJLOCZAOHRSBZVROESMSHSXLIQLZWXBINTGQYMABEUYCADINRLFTWUAZGSQGAZVHXJMBMORGCDSYIMUWOK");
    tmp_tmp_msg_0_0.max.assign("ZRPTZVRFLCXKTPVATAYMGJSUXNMMSSNWWXWDKWYWBJYACTTJDERYJQBKUKMFLDGQWYUFXXFLBHMQXPLFJCZHUVGHKOTXWBPCOSRI");
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
    msg.setTimeStamp(0.2567524965757636);
    msg.setSource(238U);
    msg.setSourceEntity(140U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(74U);
    msg.name.assign("YUOQKOIAUUFRDPJIYADLRAOEFYPBCMJSXBQQSSFCEESHIPVYTMQQJLYLFHNOTRLFIABUQWGNXXMHDXAGVWJAAKVETLXQOCVUPRSGNUEKMCUKNAEVSCIBCSHBQBPERGMWZKYIWLOVOSTLTGGNONGIRHVIHPEZODWWBHGH");
    msg.attr_type = 203U;
    msg.min.assign("WBPPXXPFYMNDNECVIORQYJTFYBACIOZXGRKTLTOCOFYKVHJGVNKMWIYJUKNVRIOGRZMFMZTHOATBUGWUIVQUTMBQTMQNGBXVMJZUMHQSHFKZX");
    msg.max.assign("EUFWMFVRYRXUGULYOYQQHAQISHOTVFBTURZUPUBQDWJLSKWHBELDQAUXTIVMZAYRETTYYHCPAONIIGCCDGONXSOKEESDRWJBENJASDDRWVHVZXLKKJGBNGPLPGPCLMSCCKPGVNSWQXZIFMGEMURCYMGBEIXBTVQNWTBJRXHLWZFFTCBQJFPOANKSIAMPPZJCXHHJALKXIEVEYTPAOUGZJFNKXIHSCLLBNNRWJOOMWYTSVDD");

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
    msg.setTimeStamp(0.3006262593319544);
    msg.setSource(42312U);
    msg.setSourceEntity(173U);
    msg.setDestination(20420U);
    msg.setDestinationEntity(178U);
    msg.name.assign("TFNHMCBAPWDMZNTEDOFXTAXLQYFXFFHLUONAGGISMEPOLBQROYTTGJIEXQFCSIEBDHWLZAQXUZPGUMQRLFOAHAXIDWIGNQLZOLVMIWMEHPAHITHZQDMPWVMUYERSIZRRAJQBUBHKTKXKVJPPYLQCVSFXEUCNKSDCDEDNVGWNUZJ");
    msg.attr_type = 213U;
    msg.min.assign("MXSXHRAZHMZSBRXHMQOHEDJVYCWQQOLPUOVFQUQFPJIVQPWILJKISYLOUGMZTHDXKIPFLOBVZWCDANQNMCCZYOEUEZGSAWAJONLLPCKQRWOWXZBMQUSYAFTRGEWWOYIHPXENDKUVJGKHSTIKTMBPUBNBFQCPDDXTYAXMUSCVJIUGIIBNDANPBVNDEAR");
    msg.max.assign("IKZMSEAHXXNPRVVXIFQGO");

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
    msg.setTimeStamp(0.09867371611705211);
    msg.setSource(34169U);
    msg.setSourceEntity(76U);
    msg.setDestination(20063U);
    msg.setDestinationEntity(162U);
    msg.name.assign("WKQAZZOSWKFGLECYELRJBSOXIWBOLVNYSSIDTFZXDZMEHRMQYKSJNXKJYVJXFICYUAKWNBQEFBQZTXDPOTEZAPBFEAFHDDFLJEYGJPKCNMGRVVCALYCIXARUTUIXDSLBOAHVMWQGXMLJRQCCBPGPERPZUKDEUXAOVPRSHKQSJQFGTUJTZRGUWHTOCITFIHTJVMIMHGOR");
    msg.attr_type = 2U;
    msg.min.assign("BNRMDVUYCOHNWEDXLXUGJIWRLBWTE");
    msg.max.assign("BPPFYYIIPZSYEPVJXDLWKMEBQCJNSVNBXWSZBLHRWAHKZLDNRKEESQBMQLXBXOSDPBUJVVKNOJMVWLZGEXH");

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
    msg.setTimeStamp(0.04401361691532524);
    msg.setSource(5930U);
    msg.setSourceEntity(132U);
    msg.setDestination(29583U);
    msg.setDestinationEntity(23U);
    msg.timeline.assign("WDJJNBPPSRJBQALKEHXPHDZGGOXQGOQSLBUROWQMUSXDDLKJVOYATAOSAUYVRPWVNTLDFYLGHVDQKWKEIEVWZBEJTNI");
    msg.predicate.assign("STYBVRHXCBGLEPZDSXZVZFOEBOKFQZISBJNZRTHPUGQUVTAGWXQAGSLNCENILRPKHMLYGHSVZNLLNEPOWCXITKJYQTIMEPKMUDQOPBOFYRVWKRCCVDWDXJZYIEATMGLXUUEFLHPBIAYRRW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZHUYXOLNQBKHPLUFBGKHORFJBBILJLOTIAIWNQQWGOBJFGBBDENAYIRGJZWROTDEGOYHEDXDZUAUISFRGUWODASPBDFXCPMCTKZJKPSPSEPJZWNEHRJMBVHQXCVCLKCNNYMREAPJSFLWKT");
    tmp_msg_0.attr_type = 159U;
    tmp_msg_0.min.assign("HTTYNWMCVMXWSYJBFZBSSCBQAOLNEAICMJARAZPQSSKFMLVBJNFHGUUOSEKHQMRUHQKIUONIKPEKTFERS");
    tmp_msg_0.max.assign("SYMGAPQNMCVTYEPYBEXVHGJNQAEVUTTIXQPWBMYZRAOCNBTVNWNPTMDIMDBTRASCXWOBYGNFLGKKOYMVXDKHFKILISPADMCGOQAREEUXBZURZQEDHXRIRICUGSWMFWJCPJYTXXQLHZLNEDRMLLYJKCVOAFKUOSBQIVHKVSIOTPAZFJWUQLBHGFTLAROGVWRECLUJFPMNJVZXGPIYY");
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
    msg.setTimeStamp(0.05601468395291043);
    msg.setSource(14258U);
    msg.setSourceEntity(57U);
    msg.setDestination(29701U);
    msg.setDestinationEntity(152U);
    msg.timeline.assign("PEHMVBJZKMFFTAMIOWAIHZGNKUECDRUQXSKVSBLXEGCWBSCVVNZXPQEIFTMUYVPQJLGETJPQZSTWUPFCNPAVKDBUDGETGDIHZLLWAWD");
    msg.predicate.assign("SMKZAKEORXSYXOWRTTPPUQFNESONLFGWJGJBBGRBEYSAYHBZQCVSWCGWPEQFHZMOLZQKKGPHMOVJLOBHUVXGUTYZZJCNFZJWEOJKSERIAPHXDPDBCQVZPNQXVOXYHDZNDYWIICJTBSXJIVCDLMPDBFIGNWARMOIDQNTLDWLNCJUYIJIBCHGCEFRDGHLIPAPKUUCYGFUWK");

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
    msg.setTimeStamp(0.47671776319074777);
    msg.setSource(49414U);
    msg.setSourceEntity(131U);
    msg.setDestination(62274U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("DVUTOSIEOOKFWYVZXFKJWJHWPREHIGLMWJFKZKNPFDUCISWAABXCFQHTPLLYM");
    msg.predicate.assign("GAQGLYWRVPIFHFXTTLKESAIZXHLMJOVNEMNQIZASJCLWEXPEHWMHPTGVXMSPBPSUJBKTZICFICRORJDNUUAUDFEXKXEOQRUJAELBYCFCQJRHVCUUKTNKPZBVRKNPORKMGMDJTZTVYDFT");

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
    msg.setTimeStamp(0.2561289428070048);
    msg.setSource(52497U);
    msg.setSourceEntity(246U);
    msg.setDestination(61183U);
    msg.setDestinationEntity(76U);
    msg.reactor.assign("CKLGYDQIPWOBOYIVPLIWHRCYXMRYUETGWLQCYHAFCKRMZEUVBQV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KILIWVVCAZTXIDJRPKJENNXNGGFKFOXFVXAUHSPRPLEQUBONEMUHDPJPDTJQRIMEKDIIXHKCGFSPHMSKUASPZENRDXYSIVFDSXQZATYCLQOTFDLKYKSWKLCZKQMGZXGOHJNABGCMGOIFJOHLANUCPBYSTRZFHBOUWAELUEJMYTQJBQYCYRVWOXEQSRFUNPMTBWHDVXFACRWGNBCVLAQTTJDHE");
    tmp_msg_0.predicate.assign("TCRIRSWJCKQELOHEWXRLUNDFZEYBIMNHXUOZMBTVIDSFZOVVHTOMYGFUJDDMBFCIZKJBWCHGXLNSZLXFKPYYJDSJGRYAJEIQTUXZPBUTQMAOCUDTGALDPPRQIYWYPDNIVLYFNMPEBXZNEAVEEQACKMOCTGEXCQQIXUAPDHWXAHRZNAMQVWFRVHPNBHOPMHUVRIAKULESOPWYFJJWBTFCTKUZSSRSMSWGBBGJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RNFLZORVYHFLKWTBYSGLQMODIJPWTHZMTMFAUSUJCEGEFSZPVN");
    tmp_tmp_msg_0_0.attr_type = 82U;
    tmp_tmp_msg_0_0.min.assign("GJJQOHHQMFMCJBNNSQUEMNIQHAEOOFYWXLQBYWKYDRXRYFFGMRMLNDSZPATNEETIOEHBTUMOPJYBFRUYWNILMDSDCPOVGIKIFUWDIOWPLPQZQKARBGJBSHQDAOYFAFEMOQCWUSTCXBSPXPFZIHLPZHLHDWCLJGTETXXWBANXAKJMKWKKSYPPALCEC");
    tmp_tmp_msg_0_0.max.assign("QUQVOHYMZUECTDICHJNSVOLEYILDCUFMUZFDJGYHFQJSVNIKPXJICDMTLCPVWFSBVGAAIBEHRDPBLWXKZSTAIIYTZYTJOBXLXTMKWOIKUVMSUOZHPUBRZAACQPIDPNANZIJ");
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
    msg.setTimeStamp(0.7932671528407452);
    msg.setSource(22346U);
    msg.setSourceEntity(183U);
    msg.setDestination(36353U);
    msg.setDestinationEntity(21U);
    msg.reactor.assign("TMYTFASKTRNFCXFIJGDXAOHOLSMLOAYAIMBEIOTXCTQHRUBHYFATPICWBGDOVNUWGDVDMPIBSRBMKBNJLVHPKYNLKUNHZWXXCGFIRSOAVIBEYZLMYBLZRFOJMHUFUHBQVRRKPFVSPPJWQZITJLKTVPKYAEUWSZWRXDQGPYSXUCSCNKNKPODVZDQWNEC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WEPYLWJBETWHMXGZUQWRCPZAZHXMJADCQOFTSVRCQEUUMMIBUDCKXHRTVMZKHJBXAUEQNXYKYOWSULSPMOVKJRYTJHNERAIFMVGDGILGAJZFCITLOTNEIZWGRBNFFBENIMXPFCSLRDCDKWQSLEUXAFWMTVPXPBTJYNQAJJKDBUPGAVEHGUKCHCYVLTBDHYREYYBPLODSPWKOIIBFSJSATOHVLNZDSVZCPNFNDSHAOMI");
    tmp_msg_0.predicate.assign("FLAWLMWVNQDKSVQKIPUFSZEXQJGLHYMQJLBEMTNGUVCFKUNGANRJVSEPZCFFJRISDSNMJADCXYNTPTNICZNLVGKHAZETLRAHSRGYEIAWOUTGH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OBAXZQJMSZNZIPIHDFQIQNDRVALUOBKBHGUESOSMNOYDNEDRNTAOCHJBPXKPUYWIGBYFLXFLKVQJVDRGGCMSYVHHFXDEAHTYZRUTWAKQUIOUAQBTIWYXXIGMCFTSEBUMPAFRMFGIQBJKPDUGYPJHKV");
    tmp_tmp_msg_0_0.attr_type = 32U;
    tmp_tmp_msg_0_0.min.assign("NBECYESRIGSZVYKTMONYXHCGHMNRZBUAKXZXOVWYVHTCEQLNPKMJHAUVIPXCLPNDQZRTCABODSFWVTOFQZRPKAANJHAIMEFJSUFQZQLAVLOZJCQCJNSNIFUPPRWQILWTIEHFGGLTDCSPOPKDNRXDXBZRFKSMXTEWGFMLJJOVZEKUBXUYGIBASYEOFTVWHLURMMYDNDOUCVLASTWIXIKQTCWJQYKOYWUJGUSBDPDYMHMFVBZBGBJPGRWIRKEX");
    tmp_tmp_msg_0_0.max.assign("BUZAEQLQFYQGYCHFBUHCHZFRMWQSYBGCOVKMTLEMVSKLMWZGDRLUIOYXGDKMORJHSYEXKHRVBXOJWLUXQDTPNKNJIWGRDBPFZUMIABLKQMRDOIYUPTJODQTBVXTHNVSVKFMMLBRONUCCGFLNPSSOPAHSKURLKEWUEKTIWJPTJZNOXWYXMPJDYZCJHEEAIBDHVCVEOZGSTPAWAFZNIGEVYAIIJCWASIAGNQDFUJPSNPXQGANRCRZLYB");
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
    msg.setTimeStamp(0.2566099022771775);
    msg.setSource(41466U);
    msg.setSourceEntity(133U);
    msg.setDestination(42605U);
    msg.setDestinationEntity(114U);
    msg.reactor.assign("OSSMNACDMVSHOSVOONQLIPCWKTJZXVWNWCWSJONMRZXRZQANTRBMALTOSTIKBPEYYZCUZKAGBWFHPHAFGUQGTBPFCHLYUYFFBVRIEPGXUEDOMKMUKJNWOYJKLDZJECLCBAVATGJVZEDDQIN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VQTOAUSOHBRVVPKMTGDQVGJXFKZYLCNSZHJJMMBYFXZPJHMLRXENYQAFADSDCRGSFREUHOWXDCNKEWHACCPCUSUXQPHI");
    tmp_msg_0.predicate.assign("VHFMNHAGMNRBGMOPSKPDNOJXXYZLBKUMF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OPRMXWHOILUJVKYGFECVMGUJJVVYZXSRSLMNNNBFRLEJNGPITEEEOVIPATLEVMXDKUXMMHUFPQI");
    tmp_tmp_msg_0_0.attr_type = 115U;
    tmp_tmp_msg_0_0.min.assign("AXRXJANUWFYPQDJCXJWYTRNJGFBUCNBAJCAMTEPKOLSWVXBSAEGNNFVUWRROLSDNNOCCGRHEYRVDTLLLQUKMQVFFPLULUNEHA");
    tmp_tmp_msg_0_0.max.assign("DIEDPOXMCOBPHXOTHZMLSYAKSRYCHKATGTDPNWOUKVRIDJFGQKIQXEUBFXF");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.46383356767401895);
    msg.setSource(31417U);
    msg.setSourceEntity(113U);
    msg.setDestination(15728U);
    msg.setDestinationEntity(79U);
    msg.id = 26U;
    msg.width = 27773U;
    msg.height = 19329U;
    msg.widthstep = 21148U;
    msg.channels = 202U;
    msg.depth = 219U;
    msg.finaldata = 221U;
    const char tmp_msg_0[] = {123, -76, -42, 56, 73, -24, -117, -20, 64, -6, -81, 83, -60, -94, 64, -36, -65, 8, 19, -23, 81, -96, -26, 12, 49, 88, -128, -120, -43, 59, -92, -82, 8, -34, 29, 56, -101, -105, -72, 18, -91, 115, 79, -97, 96, 60, -6, -42, -7, 66, 96, -69, -6, 3, -103, 103, -112, -64, -24, 111, 25, 57, 8, -95, -115, -99, 72, 21, 109, 41, -123, 122, 47, -31, -6, 46, 38, -20, 107, -101, -15, -55, -53, -41, 105, -107, -22, -106, -33, -80, -94, -28, -6, -73, -128, 6, 40, -97, -31, 20, -50, 110, 59, 27, 109, 106, -38, 72, 104, -36, 93, -88, -92, -128, 103, 22, -111, -65, -7, 22, -112, 26, 98, 121, 81, -128, -63, 120, -62, 5, 122, 59, 51, 28, 58, -108, 12, 92, -9, -36, -92, -72, 61, -67, 30, 123, 37, 103, -50, -3, 14, 11, -6, -4, -104, 120, -9, -15, -121, 95, -113, -72};
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
    msg.setTimeStamp(0.18562283052799866);
    msg.setSource(24821U);
    msg.setSourceEntity(154U);
    msg.setDestination(49406U);
    msg.setDestinationEntity(127U);
    msg.id = 77U;
    msg.width = 55996U;
    msg.height = 24544U;
    msg.widthstep = 27951U;
    msg.channels = 237U;
    msg.depth = 215U;
    msg.finaldata = 131U;
    const char tmp_msg_0[] = {-72, 67, -7, 37, -37, 22, 16, 24, 103, -100, -9, -25, 83, -34, -64, 24, -73, -7, 18, -72, 40};
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
    msg.setTimeStamp(0.3472397976300984);
    msg.setSource(58591U);
    msg.setSourceEntity(204U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(26U);
    msg.id = 5U;
    msg.width = 3068U;
    msg.height = 50164U;
    msg.widthstep = 25417U;
    msg.channels = 154U;
    msg.depth = 205U;
    msg.finaldata = 190U;
    const char tmp_msg_0[] = {-54, 122, -121, -125, -4, 66, 109, 90, 85, 4, 112, 85, -84, -53, -112, 98, 75, -115, 109, -119, -25, -31, -15, 58, -63, 67, 119, -5, 105, -87, 39, 53, -30, -82, -3, -52, 120, 2, 49, 2, -78, 115, -28, 76, 53, 98, 58, 45, -15, 78, -126, -49, 15, 84, -30, 91, 74, 60, -42, -102, -33, -35, 94, 22, 20, 41, -21, -81, -128, -126, 4, -87, -128, -83, -110, -125, -80, 51, -83, 10, -70, 67, -35, -71, -41, -47, 111, -81, 97, -51, 16, 77, 117, -48, -96, -37, -14, 39, 88, 0, 123, 5, -88, -50, -72, -19, 95, 96, -122, -32, 39, -84, -79, -36, 82, 24, 14, 50, 60, 75, 24, -117, 108, -119, 93, -52, -82, -95, -95, -62, 37, 106, 47, -82, -59, 13, -78, 57, 100, 106, -36, -104, -104, -119, 83, -102, -118, 24, -115, -7, -45, 85, 46, -11, 22, 32, -55, -2, 107, 102, 7, 33, -95, -82, 90, 44, 65, 96, -28, -1, -34};
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
    msg.setTimeStamp(0.3271594671637099);
    msg.setSource(24604U);
    msg.setSourceEntity(135U);
    msg.setDestination(64547U);
    msg.setDestinationEntity(244U);
    msg.width = 25420U;
    msg.height = 58117U;
    msg.channels = 242U;
    msg.depth = 5U;
    const char tmp_msg_0[] = {-123, 121, 38, 83, -12, -3, -108, -92, 113, 120, 90, -48, -9, -63, -23, -92, 51, 24, -90, -104, -118, -30, 38, -90, -19, 85, -22, 118, 29, 66, 70, -16, 15, 79, 88, -3, 33, 121, -114, 34, -47, -110, 30, 123, 15, 40, -35, 35, 121, 103, -80, -100, -108, -25, -101, 33, -114, -50, -108, -59, 112, 94, -75, 35, 68, -50, 64, -47, 81, -118, -73, -100, -67, 46, 69, -41, 96, -98, -108, -21, 56, -14, 73, -79, 56, 13, 47, -45, -98, -41, 74, -113, -71, 21, 70, -65, 59, 1, 33, 29, 33, -68, -14, 40, 110, -52, 109, 106, -52, 30, -124, 83, -127, -84, 68, 92, 28, 107, 84, 112, -109, 48, 52, 123, 35, 102, 54, 106, -96, -111, 116, 8, -17, -69, 96, -40, 98, -118, 91, -32, 110, 82, -44, 26, -52, -48, 12, 12, -125, -29, -82, 37, -82, -7, 2, -36, 81, 66, -98, 35, 64, -58, 26, -19, 21, 114, 31, 68, -126, -95, -73, 7, -125, -122, 114, -85, 89, -92, 108, -101, 79, 41, -72, -72, 39, -8, 119, -48, -52, 94, -97, 107, 126};
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
    msg.setTimeStamp(0.25978518845648824);
    msg.setSource(43332U);
    msg.setSourceEntity(47U);
    msg.setDestination(7717U);
    msg.setDestinationEntity(193U);
    msg.width = 53298U;
    msg.height = 42223U;
    msg.channels = 59U;
    msg.depth = 247U;
    const char tmp_msg_0[] = {-21, 37, -87, 106, -113, 2, 34, 24, 47, -30, -53, -106, -12, -53, 4, 86, -68, 100, 36, 37, 123, 60, 74, 31, 45, -77, -119, 55, -114, 29, 119, -100, 108, 14, -21, -13, 11, 109, -15, -98, 119, 1, 69, -5, 107, -44, -48, 96, -87, -87, -51, 60};
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
    msg.setTimeStamp(0.8038268744012826);
    msg.setSource(14803U);
    msg.setSourceEntity(175U);
    msg.setDestination(48989U);
    msg.setDestinationEntity(176U);
    msg.width = 6542U;
    msg.height = 61607U;
    msg.channels = 29U;
    msg.depth = 73U;
    const char tmp_msg_0[] = {109, 23, 87, 74, -30, 72, -90, -128, 71, -121, -104, -92, -1, 90, -100, -95, -71, 107, -10, 82, -57, 0, 78, -47, -86, -55, 13, 96, 71, 64, -19, -66, -30, -30, 3, -25, 86, -128, 57, 84, 81, 5, 76, -28, 55, -58, 102, -26, -82, -52, -128, 59, 40, -58, -80, 24, -50, -47, -43, 88, 17, 8, -100, 97, 21, 103, 108, 5};
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
    msg.setTimeStamp(0.06622742369326207);
    msg.setSource(43070U);
    msg.setSourceEntity(102U);
    msg.setDestination(25540U);
    msg.setDestinationEntity(210U);
    msg.frameid = 11U;
    const char tmp_msg_0[] = {-102, -62, 60, 84, -96, -70, 92, -44, 7, 126, -29, 81, -101, -85, -111, -55, -109, -118, -91, 35, 121, 110, 6, -8, -55, -16, -60, -97, -99, -18, 68, -83, -80, -68, 109, -107, 112, 87, -101, 100, -69, -14, 100, 34, 35, -45, 68, -58, -105, 13, -41, -122, 55, -22, 80, -113, 92, -1, -22, -121, -18, -12, -39, -91, 5, -57, 91, -89, -25, -117, -98, -113, 34, -61, 111, 106, -55, -40, 25, -26, -39, 67, 53, -16, 75, -93, 46, -118, 29, 87, 118, -94, -5, -66, -98, -58, 115, 43, -118, -94, -123, -80, 67, 108, 54, 82, 107, 104, 91, 9, -57, -105, 84, 25, 105, 15, -64, 119, -93, -85, -112, 126, -31, 106, -108, 90, 48, 10, 45, -22, 11, 3, 118, 71, -111, -34, 11, -56, -86, -31, 32, -2, 51, -43, 97, 111, 64, -7, -13, 34, -41, -35, -107, -86, 114, -25, -92, -104, 7, 26, 74, -20, 5, -99, 77, 31, -110, 77, -80, 0, 114, 63, 114, 49, -90, -58, -4, -7, -14, -63, 42, -46, 119, 126, -64, -67, -29, -106, 14, -42, 75, -47, 126, 99, -99, 35, 80, -122, 31, 113, -105, -15, 34, -58, -31, -78, 33, -16, -2, -111, 53, 66, -94, -89, -18, -112, -48, 44, 80, 21};
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
    msg.setTimeStamp(0.7250609796824465);
    msg.setSource(49198U);
    msg.setSourceEntity(86U);
    msg.setDestination(18798U);
    msg.setDestinationEntity(58U);
    msg.frameid = 114U;
    const char tmp_msg_0[] = {62, -123, -36, -95, 60, 13, -97, 34, 119, 48, -92, 46, 66, -103, 39, 101, -61, -28, -69, 31, 77, 22, -113, 73, -86, -42, 26, -91, 39, 79, -93, 3, 106, -93, -96, -86, -9, 82, 100, 30, -45, 22, -122, -45, 82, 78, 109, -22, 40, -112, -70, -77};
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
    msg.setTimeStamp(0.9383171688572647);
    msg.setSource(34150U);
    msg.setSourceEntity(242U);
    msg.setDestination(7856U);
    msg.setDestinationEntity(27U);
    msg.frameid = 67U;
    const char tmp_msg_0[] = {-97, -95, -25, -110, -33, 93, -35, -33, 47, -48, -55, -36, 53, 86, 106, -104, -42, 10, 80, 87, 17, -124, 11, -113, 38, 63, 13, -74, -25, -61, -85, 62, -122, 90, 53, -86, -47, -78, -90, 61, 17, 98, 52, -96, -83, -109, -80, -4, 77, -73, -39, 82, 120, -26, 16, 54, 33, -12, -99, -69, 115, -121, -79, -28, -59, 72, 119, -87, -108, 6, 27, -64, -86, -122, 57, 88, 108, -120, -41, -30, -46, -53, 40, -41, -24, 69, -23, 28, -68, 105, -11, 94, -117, -69, -22, -108, -58, 96, -69, 110, 121, 96, 103, -5, -105};
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
    msg.setTimeStamp(0.35367703548787754);
    msg.setSource(19578U);
    msg.setSourceEntity(87U);
    msg.setDestination(22754U);
    msg.setDestinationEntity(123U);
    msg.fps = 89U;
    msg.quality = 252U;
    msg.reps = 22U;
    msg.tsize = 169U;

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
    msg.setTimeStamp(0.9776655478754253);
    msg.setSource(20110U);
    msg.setSourceEntity(157U);
    msg.setDestination(48426U);
    msg.setDestinationEntity(188U);
    msg.fps = 237U;
    msg.quality = 198U;
    msg.reps = 28U;
    msg.tsize = 95U;

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
    msg.setTimeStamp(0.7602064568623363);
    msg.setSource(11645U);
    msg.setSourceEntity(170U);
    msg.setDestination(2336U);
    msg.setDestinationEntity(203U);
    msg.fps = 113U;
    msg.quality = 11U;
    msg.reps = 26U;
    msg.tsize = 144U;

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
    msg.setTimeStamp(0.28681636539774014);
    msg.setSource(27647U);
    msg.setSourceEntity(68U);
    msg.setDestination(64576U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.9401883267358359;
    msg.lon = 0.800806367923336;
    msg.depth = 68U;
    msg.speed = 0.6215354229330073;
    msg.psi = 0.838803555292405;

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
    msg.setTimeStamp(0.9413738346873849);
    msg.setSource(57061U);
    msg.setSourceEntity(230U);
    msg.setDestination(24450U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.29520411980022676;
    msg.lon = 0.3720121449059055;
    msg.depth = 197U;
    msg.speed = 0.8764080112259187;
    msg.psi = 0.6205725832225105;

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
    msg.setTimeStamp(0.40587833080394786);
    msg.setSource(23040U);
    msg.setSourceEntity(101U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.7176613686563785;
    msg.lon = 0.7141679207954599;
    msg.depth = 36U;
    msg.speed = 0.26193874491938574;
    msg.psi = 0.03696688860643327;

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
    msg.setTimeStamp(0.17731304513649926);
    msg.setSource(13750U);
    msg.setSourceEntity(226U);
    msg.setDestination(9626U);
    msg.setDestinationEntity(227U);
    msg.label.assign("ZDRKVRPGMEXSMVFKOESWZECTDYHUZAMUMYHVLRXIFSZCAJGJWNUGSGCPMUTKEJYAYOV");
    msg.lat = 0.5680853591836108;
    msg.lon = 0.09475446037291024;
    msg.z = 0.7042838270670202;
    msg.z_units = 171U;
    msg.cog = 0.2820563781696852;
    msg.sog = 0.4777439844597742;

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
    msg.setTimeStamp(0.25319484803801406);
    msg.setSource(57057U);
    msg.setSourceEntity(147U);
    msg.setDestination(46687U);
    msg.setDestinationEntity(141U);
    msg.label.assign("IHZUXKKBPFNGTIEMFDTWLFWRKKAQANPGGSUFPUBMOSLBTEGOYTZSFFGPWVRTYIGMOSLHRXUYVZPQQLWWZVAJMZLLNNERXKVBNDVAEK");
    msg.lat = 0.2781119435559881;
    msg.lon = 0.5374559176789692;
    msg.z = 0.7282446479499521;
    msg.z_units = 13U;
    msg.cog = 0.9591457535958553;
    msg.sog = 0.1358665984250953;

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
    msg.setTimeStamp(0.49845465426174596);
    msg.setSource(60736U);
    msg.setSourceEntity(83U);
    msg.setDestination(47074U);
    msg.setDestinationEntity(77U);
    msg.label.assign("XKGJSIUTMBHUCBPHQGSSXTHMTLVOGTIHEWVNPQPEXXQZSAVLHOUFUVWLQVWGJQAZABKNSKVNGCSKUKDADTGCTDBNIJNLETTROIEROJKLBIFCPPWMYLCRZYTQUJLWTYZZMYWXANJWDFGNAYREEZAXSBEKSFWVUQBIZMEQDKMIPWPUXGDBHHDYPJVCLFOYQRHCXOKZFFYZAYPIHMNRLMKMDGILBGCEOSAFIRNDMWBJCPFDSRXHOJCXVFQ");
    msg.lat = 0.5978094943302247;
    msg.lon = 0.035001228101894544;
    msg.z = 0.9343884903464924;
    msg.z_units = 157U;
    msg.cog = 0.417476312416723;
    msg.sog = 0.5491520254974199;

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
    msg.setTimeStamp(0.6316996385979453);
    msg.setSource(24163U);
    msg.setSourceEntity(155U);
    msg.setDestination(18923U);
    msg.setDestinationEntity(219U);
    msg.name.assign("EFWNPJQKUHRONZDCECBVVYMIRXBNJQTLXOQDIMVIXDUVXLEEWFTNIGLWQAHVVYSBZD");
    msg.value.assign("OCTFCUEZAHZPDIBQNMWKWZVUBPPJQBMDAZYAGXKIQDKCDTZSKZNPIGLYRRWQBJLELTYYUTOGKRSRGEZMOOERGMHXNNUIJCADVIVDWSOJPJGWSIUSNGREIWCFJFDCAQMACSMLSZSPVLRTMPAEGAJNKMYFKBPRDFCQQFHBVSCVOFXBUTXHINXUTLBTDREMIYL");

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
    msg.setTimeStamp(0.030059394373522785);
    msg.setSource(54069U);
    msg.setSourceEntity(104U);
    msg.setDestination(33987U);
    msg.setDestinationEntity(6U);
    msg.name.assign("ITCHJGYMETWFFBELGAAETKWSWQWOLJKRUPPBHKGGYOVPODNXFXFWYAVEKAYYLTHLTUKJNECNYCDNQUZPHASVVKVJATUNOBCQAQXPVCTWCLLQEICIFBZKUMXRVAWXXDZRFPGQOZDZRXSLUUTKAUMZIOYFWRSVNFSMDHNIGYBBTHHZIPHJBWOMSFCIRDEVVEBGURCZJJJEYLLXQSGSPOQSMOADDROZJDHKXNFTRMDGBMSENJCXINRILIBZYMP");
    msg.value.assign("APCISOORAMBJCASRSWHJUSUYKYVNZFJEYZGDVRIUPCKNRPVYTNNHPMOIOLERDVCKEKXCUZTBUSLPFYIKEPBLLSYJTXZFBFKVQCQBMAQSPFZSUKPRVTGSKQLTLJXUGJCGAHQFVVQNVCHQGKUXHYAYADJSQELDZHBUNAMLMMIXFGHZMNBOUTWONRVRIXHXXWZDB");

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
    msg.setTimeStamp(0.9516484259533279);
    msg.setSource(14891U);
    msg.setSourceEntity(10U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(127U);
    msg.name.assign("RETVSLLSOZVMHYCBCHTLKUYMCOYSRYZTDRFTTECONPJRGQEID");
    msg.value.assign("XZFHSEPUTGRINKRXPNNNHHXJLPUIMZTIDTEPIZDGGQIUWJSUMNTLSASKAUMBDTWLSIIKVJMOQAKNPQJMLBREPSPDAEVOHYHXZCDWCRICLXOSRCSQPEMATYUTOIBZKWEEXWQXDZCZGGRWODKDVIXOTFHKKEQDAZMMPANMNGWXTJZAYYYRZFRD");

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
    msg.setTimeStamp(0.7327007204282191);
    msg.setSource(4977U);
    msg.setSourceEntity(180U);
    msg.setDestination(35240U);
    msg.setDestinationEntity(65U);
    msg.name.assign("ECQBKYLWHALPTDZOMLPRIXEFEPOAFBLRMTJZNTDYFXWDRMHFTXKMOGYKVKUCJPQGEFLWETNKJQFMLXYKEZIZGQVGDNTQWAUXVBHIIJVBIFGMLGDOFRPHVZTSJQAPAVBCXUHSNXCXBLGLYUKUNEKSOCNSXUUQPKWTOBNUISVJRNPWSIEITOUFYYHVRBBMQBUSACIRGIJCAHHSWHDRZCYDQEORAXJDZSDCZTZQAWSRKLHNJO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("STHUSNSUWLPOHOANQYRMJUFJEBLRAZNMDDKXYNJRBCAWXFNGKRYJOWDOZZCOCHBVGPQLYESMYPELVTIOJWCPWTOCAHQPZSFTJNKZHIDUJGVDJBIVHQUZVFNXKFURNWRVDLVWHILRWXRDYFOCYEHTFYEIMGQXUGIPQQMENKGPCTCEFXZVOSAAKLIELAWMYGSBQUGBKLAKHSBEGETZBRVNTUSUQPKABGHQBYAJPTSJLXRCXMXFIZCDDFXWZKVP");
    tmp_msg_0.value.assign("OETLOKZXEOYAGMWIXPQQVEAZPMDDLZJNAIFBJJAOGOJZYFFFOQULQMAKJSDCKATEMQITWYAUYFQQGTHOJFNDMTGVPCXBNHSCGTWCAZSSBNCDURFHUYVYXLRUCSTTXDJQJEEZKVPRWISWWUXEISPTSXGYBWGDITGRUYKNIQEXUBXEKPPMHLRVKNSACFMMLFRRHVHDFBWJHZQBDNRLUVOHGVGINKMNY");
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
    msg.setTimeStamp(0.007329761009303604);
    msg.setSource(24375U);
    msg.setSourceEntity(152U);
    msg.setDestination(6306U);
    msg.setDestinationEntity(202U);
    msg.name.assign("UYVINTDUBPVTQDSOBRKRUKHINEGCTPKMQMGFWUDCYTNYHOXWZLHNXFTEXWENHWNFFGMPHZFZCVLXPYWDAMGIKLJQOKMIDVAZCMPVIMQQNTZGUSORBRSAFTNSZPGELHMEASRRDJCUYDTAGVACQUEWBFYICXFJJQNNPYIHMLSKKXIBJKRYZZMZBQVZAUEOJDJVWOECDFBRLQRWUKORIT");

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
    msg.setTimeStamp(0.18436935258875586);
    msg.setSource(61117U);
    msg.setSourceEntity(65U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(164U);
    msg.name.assign("AIFQIDRLRQXJYALAWIIZPFVXEWULKRBSPEYLERMYNEQHYCUNZDIJPEAEIKYVXXTPOLBSIMYCUGDSOYZLOKBANSWRVHLQRJMEZXRATXSUWOUXVDNETNCBMJUOTMBUQSFFYHHLQKDTQJKBJWOCUGGMVOGCFGRZJJXFPARPVVPTXKWFSV");

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
    msg.setTimeStamp(0.08855381191285094);
    msg.setSource(28091U);
    msg.setSourceEntity(209U);
    msg.setDestination(62981U);
    msg.setDestinationEntity(162U);
    msg.name.assign("VPIZHVGCFLHTZOFYSSTVAVFXXKRIRRLWNPIUVYVCYJXWEXAQYBRCJMMNHSAGDXUUEMZQOETNXLWPGOULGLKDFTCKUSHDYVDIJUBNFBZJHGWQEPTAYBDPIFC");
    msg.visibility.assign("GCHLZILAKOAXCSMMZPFTWAJUPQXDRBUEYKQPXBJDFYOSRVXYNCZJNZTEQIKEMCY");
    msg.scope.assign("OURUFDAQJGIBWFUMOFXVRSPCKUKZLRQKYSGNIOQMHKHYJBXCJLHYZZDHPUDATDURHWBQFSVTNCEQKCNRZZVQFFJSECPEMNW");

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
    msg.setTimeStamp(0.7509306464593652);
    msg.setSource(26384U);
    msg.setSourceEntity(125U);
    msg.setDestination(15645U);
    msg.setDestinationEntity(241U);
    msg.name.assign("ZLMWYKWEKYOFYEXOHITMIABRTCCHKSEYM");
    msg.visibility.assign("ICEPQNQOYEVLSVXNBTAPHGGMBSUYSZZGURLWJHNVVUGTUKITJLWYMHRYOAFYSYUCWWHOTTELVRAOADRTXKWQAULBNKEPNOIZJPYJISAPXMKCWDCDTGPHORTCKDUVXBGLLPIEQBJRKEZSIXGSDQMSKNICRFNZQXVMIWMPEMHBNRBXIKFXZSPAQJDRMNCMLECVDOTEACBPFUFXHYZOSFKGRVYWHZDDQZIOKLBTWZWNJJAFQ");
    msg.scope.assign("VYXIZDLMCOTVPWVYPPNUOYCASEFLXNLEGIWCBCLLUWZCLXQJGQHOCDEHNTEJVBMRRCGSXMJTUPNJDSHZASLTMYKJXTJSZXMPQZRZHBCAQFIFEVWDOGOGLDKBJUHDKZQIACOUHPDANXSOOTDXKNREINMBLYIZSNBEEWNBADUGMWMQHVRJIZUM");

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
    msg.setTimeStamp(0.9333780178657582);
    msg.setSource(16578U);
    msg.setSourceEntity(152U);
    msg.setDestination(29300U);
    msg.setDestinationEntity(80U);
    msg.name.assign("HFHSFYRDSMUJSTEZZTWFBPWIWGJPWRKDIOBAPVXUOWADWXUDFLSMLBCBGVSZQKCVILNCLXYPOEGYTUKHPFPDYYLKNYZROCLQGJIARQIJQWXSYGNDSNKKZMGAERLEOGMEOAIUXQTUNLSLBKJWEUXGQYTWPQNCOVKJOBJNHXZBVLFXUFRG");
    msg.visibility.assign("CPWMZZVZVFOJQSYIZXKVEWZGUQTZKUNPCSOJRXJDRCFGMSQAGCKDXDWEILJVXYVNAOWNTCSOYFPFRDHIAFBEKQMDXQQJBYRFMRDGWNKEORWWXXJKVBUSPWFQTRHMJSTJCESYPLLJUGDBTDJNOATCUHIPENNYFEMHAMZBFBAIURVIOLCWTEYSGSIELAT");
    msg.scope.assign("RTZJNXGAICTHRYXOOTUIYGLKEJWQGRHJPRAUZBAIKQQWEEZTVVUKUJAMHHAMOUWDNTREMXFVCQQISESOLIEPJBRMBWDVATZZCOPTNJQSQJJSEUJSPHWBACDKUQCV");

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
    msg.setTimeStamp(0.5251988962444856);
    msg.setSource(42179U);
    msg.setSourceEntity(84U);
    msg.setDestination(50712U);
    msg.setDestinationEntity(204U);
    msg.name.assign("RBMHKCTEYGGBJRELKXGYQEBJMHPJVPXIPOOFABSTWPRIFMYPYWQG");

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
    msg.setTimeStamp(0.7962657539333811);
    msg.setSource(43218U);
    msg.setSourceEntity(19U);
    msg.setDestination(41002U);
    msg.setDestinationEntity(212U);
    msg.name.assign("NKVRSTUMIJPPNJLFQITQGUDUYCIHFAEHMKHQREQBDHJNQYRUNKZTMLJNAXIIFQMEVTMWGWFBSOAKQFFCXKAJPZTUODWLFOWDTJRWYNVMHOWYSZRIVMYEBSDVQAZJDCFOLGGKZRXTMUZSXMRWHZYAHPQSJXCJVNVDCLDGEQUFZEKFWSCPXLPUWAUJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZTZPNSWNWASCRIIKTLDPUBZMRCOXLBBQLVNZQWPUFMPQFQJLWZNHQMEYQBEKGAGCPZEMKUDYNHBMTPCOEMLADUPNTERAKGFGEARWDCHUAXABVLVFBZPZITNMLVUFOVBVJXYMYNCVARJJNAGSFHRSRHLCDTWEUCGIFOXTOTQQKKYRIUJLSIBOZNXZDDHDWYTIUIHWYJKYXFSSJYJSRHOGGXXHY");
    tmp_msg_0.value.assign("XKXTHPNGCELYWIVEMWTJLBVMXDILHZZXWRVRJUARSDGFPHPJMKISONBNPWYAQYWRWXTIJPKHTOIZCQSODETLUAVXYHFUMEUNYAJDFIT");
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
    msg.setTimeStamp(0.7441013529915841);
    msg.setSource(52386U);
    msg.setSourceEntity(25U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(124U);
    msg.name.assign("SAJPERRHXRMCIXSQNJHWGCLEVBWOPTZM");

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
    msg.setTimeStamp(0.668744390119131);
    msg.setSource(27515U);
    msg.setSourceEntity(54U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(192U);
    msg.name.assign("UCJHFVOITYPRTBBAATIUNPDLZLFOYZRZXGKWWDXVMMRAMMHGDVRBGUEGTSRADSMLSSMPKAVTJVZRKVKBGLBEWDFPUNQUWNIFXCSWXWODZZWBDJZXDVGKGCOSJXJJEIUIPWJDZSPGAJPPXBEBSYLGVQHCYTEKAFUTCXLIERBHCOYVRLIJOEYNWNQQQMM");

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
    msg.setTimeStamp(0.2601503018003861);
    msg.setSource(55977U);
    msg.setSourceEntity(19U);
    msg.setDestination(49488U);
    msg.setDestinationEntity(7U);
    msg.name.assign("DWFHHXVGUYJWVXAKUCQRMTVAUPVBEYQGCLJDTOGAIFGMTFOSCJXTMZXBONAYCENLOLSUXEIHWIZAYCJENKBPN");

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
    msg.setTimeStamp(0.3859103087575566);
    msg.setSource(50797U);
    msg.setSourceEntity(15U);
    msg.setDestination(53353U);
    msg.setDestinationEntity(175U);
    msg.name.assign("PNMQMDDRRJUSNIGIMYXKWJBCGKCIXKLLNSUPBHCNAPRZSULOZNKOETYUEFVQWDZQKCYOSRHBIRFTNBFKOUXBXXWITEXCFHVYSOOSCQKHWLHJAYHMJITZGOASBUVCHXHTEBAQHMMVFDBAPWATUJPVFLDPPQBXTHNPYNLWKADFNDCFEQEGCVOKZZRTMRSWYVWGJEIIGNRFJTRMEZVZYVFBYGAIGSMAWAUJOPGEEJUPYSZZIVOQQXDM");

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
    msg.setTimeStamp(0.5865308811068602);
    msg.setSource(49918U);
    msg.setSourceEntity(198U);
    msg.setDestination(55124U);
    msg.setDestinationEntity(25U);
    msg.timeout = 675476644U;

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
    msg.setTimeStamp(0.0984189527741145);
    msg.setSource(5866U);
    msg.setSourceEntity(122U);
    msg.setDestination(14099U);
    msg.setDestinationEntity(84U);
    msg.timeout = 3473097241U;

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
    msg.setTimeStamp(0.6969361657336588);
    msg.setSource(65012U);
    msg.setSourceEntity(90U);
    msg.setDestination(39020U);
    msg.setDestinationEntity(72U);
    msg.timeout = 3196028967U;

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
    msg.setTimeStamp(0.8395882168045912);
    msg.setSource(12673U);
    msg.setSourceEntity(91U);
    msg.setDestination(36360U);
    msg.setDestinationEntity(142U);
    msg.sessid = 1099760953U;

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
    msg.setTimeStamp(0.7078073392164723);
    msg.setSource(46258U);
    msg.setSourceEntity(165U);
    msg.setDestination(40960U);
    msg.setDestinationEntity(155U);
    msg.sessid = 3246463829U;

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
    msg.setTimeStamp(0.5858744961470214);
    msg.setSource(26885U);
    msg.setSourceEntity(227U);
    msg.setDestination(52133U);
    msg.setDestinationEntity(2U);
    msg.sessid = 3972693755U;

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
    msg.setTimeStamp(0.009267685274497506);
    msg.setSource(26048U);
    msg.setSourceEntity(102U);
    msg.setDestination(818U);
    msg.setDestinationEntity(126U);
    msg.sessid = 419744717U;
    msg.messages.assign("ANYGWZNAQYCEWZNKCVHKIVCPJIWPMZJHABQNADRVXFUSEIKLFLLCVTKWGHRCUDDBESJGHAJTLLXROJCPVRGPEBOIJMRASYUZPAZQBLDBHMTDZSEQXWPIIKIOWVYTPZKBVYETRXYTWRFQQEJGZNOFOAXNOJDFYPOR");

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
    msg.setTimeStamp(0.7097327657990765);
    msg.setSource(48967U);
    msg.setSourceEntity(105U);
    msg.setDestination(65443U);
    msg.setDestinationEntity(199U);
    msg.sessid = 1416199333U;
    msg.messages.assign("KVGBBYJOCADEXGIAYEFAWNDTFXZKQXSMOCAFBYUALRXUZLMVQGMVXESNBSKTOSWBHNZJAGD");

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
    msg.setTimeStamp(0.006997006968769148);
    msg.setSource(17913U);
    msg.setSourceEntity(195U);
    msg.setDestination(30300U);
    msg.setDestinationEntity(184U);
    msg.sessid = 1421225029U;
    msg.messages.assign("JNPOUYBWVYQMJRRTJDBTWPCRDUKJSIDLUQPZLUXBUQUIHMLSVVQFDGFKSGGHOPHPPU");

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
    msg.setTimeStamp(0.0018271343417622932);
    msg.setSource(20348U);
    msg.setSourceEntity(251U);
    msg.setDestination(6607U);
    msg.setDestinationEntity(13U);
    msg.sessid = 2570101203U;

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
    msg.setTimeStamp(0.4534086302565362);
    msg.setSource(49317U);
    msg.setSourceEntity(41U);
    msg.setDestination(32319U);
    msg.setDestinationEntity(10U);
    msg.sessid = 3693561224U;

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
    msg.setTimeStamp(0.4237172287582144);
    msg.setSource(41387U);
    msg.setSourceEntity(116U);
    msg.setDestination(9827U);
    msg.setDestinationEntity(101U);
    msg.sessid = 798017792U;

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
    msg.setTimeStamp(0.43053747707902645);
    msg.setSource(19869U);
    msg.setSourceEntity(223U);
    msg.setDestination(57640U);
    msg.setDestinationEntity(97U);
    msg.sessid = 3403015677U;
    msg.status = 181U;

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
    msg.setTimeStamp(0.9626764357954248);
    msg.setSource(33723U);
    msg.setSourceEntity(25U);
    msg.setDestination(48734U);
    msg.setDestinationEntity(162U);
    msg.sessid = 3701481893U;
    msg.status = 196U;

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
    msg.setTimeStamp(0.4889979589358442);
    msg.setSource(63495U);
    msg.setSourceEntity(200U);
    msg.setDestination(62985U);
    msg.setDestinationEntity(50U);
    msg.sessid = 759511128U;
    msg.status = 50U;

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
    msg.setTimeStamp(0.30381693846532953);
    msg.setSource(62651U);
    msg.setSourceEntity(60U);
    msg.setDestination(7628U);
    msg.setDestinationEntity(180U);
    msg.name.assign("VPMEVXUXUBEWJKYOLZZMDAJSFLZCRVHBGBXPBPMKQWHXWEOEHYRCAISUEDEVDLJCVKXKVPYXMKQEDQIWLWSAPCSTOWSRANGFDPAJBQPAJZOE");

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
    msg.setTimeStamp(0.10349852911230617);
    msg.setSource(46725U);
    msg.setSourceEntity(197U);
    msg.setDestination(28797U);
    msg.setDestinationEntity(170U);
    msg.name.assign("WSQMCTSMVFSYEXEACHOBBCHDWPLRIKCTYZLDYGIHIZSDVRBLMKCIKNPMXMGKRRLVRZDVGVSH");

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
    msg.setTimeStamp(0.4479469634149795);
    msg.setSource(43970U);
    msg.setSourceEntity(122U);
    msg.setDestination(56489U);
    msg.setDestinationEntity(124U);
    msg.name.assign("ZPAJVBHQNULMEGFBWYXSLFEXBQDLBAUEEIKVJWFANJWSOFSQHBPWISBOWPKVWCZPXRMSDMOVKGCTENQUOZCFBNCYUADMYEJOGDHFQLHNSAQZRPEXAZTGJKYBYTJZSOROZUMTMPVHDDRCOXVSOJULIQELLYZXJTVFWTYKYEYUIDWTXRRQMYZAIFHMIHMXUQI");

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
    msg.setTimeStamp(0.2540459697839451);
    msg.setSource(8786U);
    msg.setSourceEntity(105U);
    msg.setDestination(31823U);
    msg.setDestinationEntity(2U);
    msg.name.assign("VGDNFSJEZUTOOLHSBGQNNIQSBUGIKDVTVKOHAFRPKWCJCORPYFXZZPJIJANHNZKBNTDJFHEBQUUPAWMUUWCMJIXGAYNLAJCEQRZIHJSXOSGHWMULWXZLPOCDGEMPXBROCETIKQG");

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
    msg.setTimeStamp(0.8490686198179763);
    msg.setSource(8663U);
    msg.setSourceEntity(53U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(96U);
    msg.name.assign("ZLLRWHBCOBPQSRMYGMHBPKCNURIWESPVRGSYHGFDPXMAFUUNAXJDLAEMLSJWAZKTKNJNLKEEYZZXAZPZDWJGDEUOYALXQZXSDNNLFDYJONIDRJRUZSQNWEFYGKGKDWEVRCNHUOI");

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
    msg.setTimeStamp(0.8510985696854649);
    msg.setSource(6369U);
    msg.setSourceEntity(103U);
    msg.setDestination(17355U);
    msg.setDestinationEntity(108U);
    msg.name.assign("BPESRDBSTJXZKXSXCRHM");

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
